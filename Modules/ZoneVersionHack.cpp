#include "../eqclientmod.h"
// This hack is for switching between the old and new versions of nektulos and lavastorm zones.

#ifdef ZONE_VERSION_HACK
#include "../common.h"
#include "../util.h"
#include "../settings.h"
#include "../eq_titanium.h"

bool old_nektulos = false;
bool old_lavastorm = false;

typedef char *(__cdecl *_strcpy)(char *Destination, const char *Source);
_strcpy strcpy_Real = (_strcpy)Offset_strcpy;
char * __cdecl strcpy_Detour(char *Destination, const char *Source)
{
	if((old_lavastorm && !stricmp("lavastorm", Source)) || (old_nektulos && !stricmp("nektulos", Source)))
	{
		Log("ZoneVersionHack: Excluding %s.eqg", Source);
		return strcpy_Real(Destination, ""); // this will make it not find the eqg file and fall back to the old s3d version of the zone
	}

	return strcpy_Real(Destination, Source);
}

class ZV;
typedef int (__thiscall *_LoadEnvironmentEmitterInstances)(ZV *, char *Source);
_LoadEnvironmentEmitterInstances LoadEnvironmentEmitterInstances_Trampoline = (_LoadEnvironmentEmitterInstances)Offset_LoadEnvironmentEmitterInstances;
typedef char (__thiscall *_EqSoundManager__EmitterLoad)(ZV *, char *FileName);
_EqSoundManager__EmitterLoad EqSoundManager__EmitterLoad_Trampoline = (_EqSoundManager__EmitterLoad)Offset_EqSoundManager__EmitterLoad;
class ZV
{
public:
	int LoadEnvironmentEmitterInstances_Detour(char *Source)
	{
		if((old_lavastorm && !stricmp("lavastorm_EnvironmentEmitters.txt", Source)) || (old_nektulos && !stricmp("nektulos_EnvironmentEmitters.txt", Source)))
		{
			Log("ZoneVersionHack: Excluding %s", Source);
			return LoadEnvironmentEmitterInstances_Trampoline(this, "");
		}

		return LoadEnvironmentEmitterInstances_Trampoline(this, Source);
	}

	char EqSoundManager__EmitterLoad(char *FileName)
	{
		if((old_lavastorm && !stricmp("lavastorm.emt", FileName)) || (old_nektulos && !stricmp("nektulos.emt", FileName)))
		{
			Log("ZoneVersionHack: Excluding %s", FileName);
			return EqSoundManager__EmitterLoad_Trampoline(this, "");
		}

		return EqSoundManager__EmitterLoad_Trampoline(this, FileName);
	}
};

#if 0
typedef int (__cdecl *_Handle_OP_ExpansionInfo)(int *packet);
_Handle_OP_ExpansionInfo Handle_OP_ExpansionInfo_Trampoline;
int __cdecl Handle_OP_ExpansionInfo_Detour(int *packet)
{
	// inspect expansion flags
	unsigned int exp = *(unsigned int *)packet;
	//TODO

	return Handle_OP_ExpansionInfo_Trampoline(packet);
}
#endif

void LoadZoneVersionHack()
{
	bool enable = true;

#ifdef INI_FILE
	char buf[2048];
	const char *desc = "This hack is for switching between the old and new versions of nektulos and lavastorm zones.";
	WritePrivateProfileStringA("ZoneVersion", "Description", desc, INI_FILE);
	GetINIString("ZoneVersion", "Enabled", "TRUE", buf, sizeof(buf), true);
	enable = ParseINIBool(buf);
	GetINIString("ZoneVersion", "OldNektulos", "FALSE", buf, sizeof(buf), true);
	old_nektulos = ParseINIBool(buf);
	GetINIString("ZoneVersion", "OldLavastorm", "FALSE", buf, sizeof(buf), true);
	old_lavastorm = ParseINIBool(buf);
#endif

	Log("LoadZoneVersionHack(): hack is %s, old_nektulos is %s, old_lavastorm is %s", enable ? "ENABLED" : "DISABLED", old_nektulos ? "ENABLED" : "DISABLED", old_lavastorm ? "ENABLED" : "DISABLED");

	if(enable)
	{
		// .text:00444274 10A8 E8 D7 A1 1C 00                               call    _strcpy
		// we detour this call to strcpy and look for the zone names we want to disable
		intptr_t addr = (intptr_t)strcpy_Detour - (intptr_t)0x00444274 - 5;
		Patch((void *)(0x00444274+1), &addr, 4);

		// .text:0044424F 10A4 E8 57 35 00 00                               call    EnvironmentEmitterManager__LoadEnvironmentEmitterInstances
		// detour this call to LoadEnvironmentEmitterInstances and look for the filenames to disable
		intptr_t  ZV_LoadEnvironmentEmitterInstances_Detour;
		{
			int (__thiscall ZV::*fp)(char *) = &ZV::LoadEnvironmentEmitterInstances_Detour;
			memcpy(&ZV_LoadEnvironmentEmitterInstances_Detour, &fp, 4);
		}
		addr = ZV_LoadEnvironmentEmitterInstances_Detour - (intptr_t)0x0044424F - 5;
		Patch((void *)(0x0044424F+1), &addr, 4);

		// .text:0044C295 21C E8 FA FA FF FF                                call    EqSoundManager__EmitterLoad
		// detour this call to EmitterLoad and look for the filenames to disable
		intptr_t  ZV_EqSoundManager__EmitterLoad;
		{
			char (__thiscall ZV::*fp)(char *) = &ZV::EqSoundManager__EmitterLoad;
			memcpy(&ZV_EqSoundManager__EmitterLoad, &fp, 4);
		}
		addr = ZV_EqSoundManager__EmitterLoad - (intptr_t)0x0044C295 - 5;
		Patch((void *)(0x0044C295+1), &addr, 4);
	}
}

#endif
