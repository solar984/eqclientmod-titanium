#include "../eqclientmod.h"
// This hack removes the requirement to pass the 'patchme' argument to the program to start it.  It also allows killing the game immediately with Alt-F4.

#ifdef PROGRAM_LAUNCH_HACK
#include "../common.h"
#include "../util.h"
#include "../settings.h"
#include "../eq_titanium.h"

typedef LRESULT (__stdcall *_eqWndProc)(HWND hWnd, DWORD Msg, WPARAM wParam, LPARAM lParam);
_eqWndProc eqWndProc_Trampoline;
LRESULT __stdcall eqWndProc_Detour(HWND hWnd, DWORD Msg, WPARAM wParam, LPARAM lParam)
{
	if (Msg == WM_SYSKEYDOWN) 
	{
        if (wParam == VK_F4) 
		{
			// Alt-F4 was pressed, kill process
			ExitProcess(0);
			//return DefWindowProcA(hWnd, Msg, wParam, lParam);
		}
	}
	
	return eqWndProc_Trampoline(hWnd, Msg, wParam, lParam);
}

void LoadProgramLaunchHack()
{
	bool enable = true;
	bool enable_ALT_F4 = true;

#ifdef INI_FILE
	char buf[2048];
	const char *desc = "This hack removes the need to pass the 'patchme' argument to the program to start it.  It also allows killing the game immediately with Alt-F4.";
	WritePrivateProfileStringA("ProgramLaunch", "Description", desc, INI_FILE);
	GetINIString("ProgramLaunch", "Enabled", "TRUE", buf, sizeof(buf), true);
	enable = ParseINIBool(buf);
	GetINIString("ProgramLaunch", "CloseWithAltF4", "TRUE", buf, sizeof(buf), true);
	enable_ALT_F4 = ParseINIBool(buf);
#endif

	Log("LoadProgramLaunchHack(): hack is %s, enable_ALT_F4 is %s", enable ? "ENABLED" : "DISABLED", enable_ALT_F4 ? "ENABLED" : "DISABLED");

	if(enable)
	{
		unsigned char nop[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };
		unsigned char jmp = 0xEB;

		// .text:004CF1ED 46C 0F 8E F1 01 00 00                             jle     loc_4CF3E4
		Patch((void *)0x004CF1ED, nop, 6);

		// .text:004CF210 46C 0F 8E CE 01 00 00                             jle     loc_4CF3E4
		Patch((void *)0x004CF210, nop, 6);

		// .text:004CF3E2 46C 75 1B                                         jnz     short loc_4CF3FF
		Patch((void *)0x004CF3E2, &jmp, 1);

		if(enable_ALT_F4)
		{
			eqWndProc_Trampoline = (_eqWndProc)DetourWithTrampoline((void *)Offset_eqWndProc, eqWndProc_Detour, 6);
		}
	}
}

#endif
