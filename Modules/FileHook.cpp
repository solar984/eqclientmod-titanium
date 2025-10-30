#include "../eqclientmod.h"
// this hack intercepts file accesses and allows remapping them to alternate locations
// it's useful for making the game not find newer .eqg files and cause it to load older .s3d versions
// or for overlaying some altered game files in another directory without replacing the originals
// or adding files to the main game directory

#ifdef FILE_HOOK
#include "../common.h"
#include "../util.h"
#include <vector>

struct FileMapEntry
{
	const char *filename; // matched to the end of the path being considered (case-insensitive)
	const char *redirect; // null to make it fail, otherwise whatever path should be subbed in place of the matched portion
};
static std::vector<FileMapEntry> FileHookMapEntries;

//
// DoFileMapping - look up entries in the FileHookMapEntries vector and write replacement string to buf
// return true if a match and replacement happened, false otherwise
//
bool DoFileMapping(const char *lpFileName, char *buf, size_t buflen)
{
	if(lpFileName && buf)
	{
		for (size_t i = 0; i < FileHookMapEntries.size(); ++i)
		{
			FileMapEntry fme = FileHookMapEntries[i];

			if(fme.filename)
			{
				if(strlen(lpFileName) < strlen(fme.filename)) continue;
				if(!_stricmp(fme.filename, lpFileName + strlen(lpFileName) - strlen(fme.filename)))
				{
					memset(buf, 0, buflen);

					if(!fme.redirect) // null value, return nonexistent path
					{
						Log("DoFileMapping(): blocking file %s", lpFileName);
						strncpy_s(buf, buflen, "?:\\invalid_path", buflen);
					}
					else // redirect, replace matched portion
					{
						strncpy_s(buf, buflen, lpFileName, strlen(lpFileName) - strlen(fme.filename));
						if(strlen(buf) + strlen(fme.redirect) < buflen)
						{
							strcat_s(buf, buflen, fme.redirect);
						}
						Log("DoFileMapping(): redirecting file %s -> %s", lpFileName, buf);
					}

					return true;
				}
			}
		}
	}

	return false;
}

//
// CreateFileA Hook
//
typedef BOOL(WINAPI *_CreateFileA)
(
	LPCSTR lpFileName,
	DWORD dwDesiredAccess,
	DWORD dwShareMode,
	LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	DWORD dwCreationDisposition,
	DWORD dwFlagsAndAttributes,
	HANDLE hTemplateFile
);
_CreateFileA CreateFileA_Original;
static __declspec(thread) bool in_CreateFileA_Detour = false;
BOOL WINAPI CreateFileA_Detour
(
	LPCSTR lpFileName,
	DWORD dwDesiredAccess,
	DWORD dwShareMode,
	LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	DWORD dwCreationDisposition,
	DWORD dwFlagsAndAttributes,
	HANDLE hTemplateFile
)
{
	if(in_CreateFileA_Detour) goto original;

	in_CreateFileA_Detour = true;
	char buf[MAX_PATH];
	if(DoFileMapping(lpFileName, buf, MAX_PATH))
	{
		lpFileName = buf;
	}
	in_CreateFileA_Detour = false;

original:
	return CreateFileA_Original
	(
		lpFileName,
		dwDesiredAccess,
		dwShareMode,
		lpSecurityAttributes,
		dwCreationDisposition,
		dwFlagsAndAttributes,
		hTemplateFile
	);
}

//
// FindFirstFileA Hook
//
typedef HANDLE (WINAPI *_FindFirstFileA)(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData);
_FindFirstFileA FindFirstFileA_Original;
static __declspec(thread) bool in_FindFirstFileA_Detour = false;
HANDLE WINAPI FindFirstFileA_Detour(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData)
{
	if(in_FindFirstFileA_Detour) goto original;

	in_FindFirstFileA_Detour = true;
	char buf[MAX_PATH];
	if(DoFileMapping(lpFileName, buf, MAX_PATH))
	{
		lpFileName = buf;
	}
	in_FindFirstFileA_Detour = false;

original:
	return FindFirstFileA_Original(lpFileName, lpFindFileData);
}


static bool FileHookLoaded = false;
void LoadFileHook()
{
	if(!FileHookLoaded)
	{
		FileHookLoaded = true;

		// detour via import table
		if(hEQGameEXE)
		{
			uintptr_t *CreateFileA_Ptr = (uintptr_t *)FindIATPointer(hEQGameEXE, "CreateFileA");
			if(CreateFileA_Ptr)
			{
				CreateFileA_Original = (_CreateFileA)*CreateFileA_Ptr;
				uintptr_t addr = (uintptr_t)CreateFileA_Detour;
				Log("LoadFileHook(): Hooking CreateFileA in eqgame.exe");
				Patch((void *)CreateFileA_Ptr, &addr, 4);
			}
			uintptr_t *FindFirstFileA_Ptr = (uintptr_t *)FindIATPointer(hEQGameEXE, "FindFirstFileA");
			if(FindFirstFileA_Ptr)
			{
				FindFirstFileA_Original = (_FindFirstFileA)*FindFirstFileA_Ptr;
				uintptr_t addr = (uintptr_t)FindFirstFileA_Detour;
				Log("LoadFileHook(): Hooking FindFirstFileA in eqgame.exe");
				Patch((void *)FindFirstFileA_Ptr, &addr, 4);
			}
		}
		if(hEQGfxDll)
		{
			uintptr_t *CreateFileA_Ptr = (uintptr_t *)FindIATPointer(hEQGfxDll, "CreateFileA");
			if(CreateFileA_Ptr)
			{
				//CreateFileA_Original = (_CreateFileA)*CreateFileA_Ptr;
				uintptr_t addr = (uintptr_t)CreateFileA_Detour;
				Log("LoadFileHook(): Hooking CreateFileA in GFX DLL");
				Patch((void *)CreateFileA_Ptr, &addr, 4);
			}
			uintptr_t *FindFirstFileA_Ptr = (uintptr_t *)FindIATPointer(hEQGfxDll, "FindFirstFileA");
			if(FindFirstFileA_Ptr)
			{
				//FindFirstFileA_Original = (_FindFirstFileA)*FindFirstFileA_Ptr;
				uintptr_t addr = (uintptr_t)FindFirstFileA_Detour;
				Log("LoadFileHook(): Hooking FindFirstFileA in GFX DLL");
				Patch((void *)FindFirstFileA_Ptr, &addr, 4);
			}
		}
	}
}

void AddFileMapEntry(const char *filename, const char *redirect)
{
	FileHookMapEntries.push_back(FileMapEntry());
	FileMapEntry &e = FileHookMapEntries.back();
	e.filename = filename ? _strdup(filename) : NULL;
	e.redirect = redirect ? _strdup(redirect) : NULL;
	LoadFileHook();
}

void RemoveFileMapEntry(const char *filename)
{
	for (size_t i = 0; i < FileHookMapEntries.size(); ++i)
	{
		FileMapEntry fme = FileHookMapEntries[i];
		if(!_stricmp(fme.filename, filename))
		{
			if (fme.filename) free((void*)fme.filename);
			if (fme.redirect) free((void*)fme.redirect);
			FileHookMapEntries.erase(FileHookMapEntries.begin() + i);
			--i;
			return;
		}
	}
}

#endif
