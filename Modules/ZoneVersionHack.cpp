#include "../eqclientmod.h"
// This hack is for switching between the old and new geometry versions of nektulos, lavastorm, arena and bazaar zones.  There is also a mod to add music to the old bazaar, as it normally doesn't play any.
//
// For nektulos, lavastorm and arena the default titanium client install still contains the old versions of the zones but the client will only try to load them if the newer version is not found.
// The newer zone files are named .eqg and the older style are named .s3d but there are also a bunch of supporting files that go with them.  This mod swaps them only in memory without touching the files.
//
// You can manually achieve what this mod does by doing the following:
//
// Nektulos Forest was rebuilt for DoDH expansion.
// For old nektulos, move/remove these files so the client doesn't find them in the EQ directory:
//
//    nektulos.emt
//    nektulos.eqg
//    nektulos.mp3
//    Nektulos.zon
//    nektulos_assets.txt
//    nektulos_chr.txt
//    Nektulos_EnvironmentEmitters.txt
//    nektulos_obj1.eqg
//
// Lavastorm Mountains was rebuilt for DoN expansion.
// For old lavastorm, move/remove these files:
//
//    lavastorm.emt
//    lavastorm.eqg
//    lavastorm.mp3
//    lavastorm_chr.txt
//    lavastorm_EnvironmentEmitters.txt
//
// The Arena was rebuilt for LDoN expansion.
// For old arena, move/remove these files:
//
//    arena.eqg
//    arena.zon
//    arena_chr.txt
//    arena_EnvironmentEmitters.txt
//
// The Bazaar was rebuilt for DoN expansion.  For this one they actually removed the old files and titanium only comes with the new version so we have to copy the old bazaar from an older client.
// For old bazaar, move/remove these files:
//
//    bazaar.eqg
//    bazaar_assets.txt
//    bazaar_EnvironmentEmitters.txt
//
// You can get the old bazaar files from the TAKP eqmac client or other pre-DoN version of EQ, the files are the same.
// Add the following old bazaar files to your EQ directory:
//
//    bazaar.s3d
//    bazaar.xmi
//    bazaar_chr.s3d
//    bazaar_obj.s3d
//
// These two are optional, the .xmi bazaar music doesn't seem to play in titanium so you can decide if you want to use these for music in the bazaar:
//    bazaar.mp3
//    bazaar.emt
//
// To restore the titanium bazaar, make your game directory so it only contains the 3 newer bazaar files and not any of the older ones.
//



#ifdef ZONE_VERSION_HACK
#include "../common.h"
#include "../util.h"
#include "../settings.h"
#include "../eq_titanium.h"
#include "FileHook.h"

bool use_server_expansion_info = true; // this is the auto setting where it uses the OP_ExpansionInfo packet from the server to set which version of the zone will be loaded
bool old_nektulos = false;
bool old_lavastorm = false;
bool old_arena = false;
bool old_bazaar = false;
bool old_bazaar_music_mod = true;

// list of files to block, client includes the old files and will load them instead when these are not found
const char *nektulos_new_files[] = 
{
	"nektulos.emt",
	"nektulos.eqg",
	"nektulos.mp3",
	"Nektulos.zon",
	"nektulos_assets.txt",
	"nektulos_chr.txt",
	"Nektulos_EnvironmentEmitters.txt",
	"nektulos_obj1.eqg"
};
const char *lavastorm_new_files[] =
{
	"lavastorm.emt",
	"lavastorm.eqg",
	"lavastorm.mp3",
	"lavastorm_chr.txt",
	"lavastorm_EnvironmentEmitters.txt"
};
const char *arena_new_files[] =
{
	"arena.eqg",
	"arena.zon",
	"arena_chr.txt",
	"arena_EnvironmentEmitters.txt"
};

static bool added = false;
void AddZoneVersionFileMaps()
{
	if(added)
	{
		// clear out our entries and reconfigure
		for(int i = 0; i < sizeof(nektulos_new_files) / sizeof(const char *); i++)
		{
			RemoveFileMapEntry(nektulos_new_files[i]);
		}
		for(int i = 0; i < sizeof(lavastorm_new_files) / sizeof(const char *); i++)
		{
			RemoveFileMapEntry(nektulos_new_files[i]);
		}
		for(int i = 0; i < sizeof(arena_new_files) / sizeof(const char *); i++)
		{
			RemoveFileMapEntry(nektulos_new_files[i]);
		}
		RemoveFileMapEntry("bazaar.eqg");
		RemoveFileMapEntry("bazaar_assets.txt");
		RemoveFileMapEntry("bazaar_EnvironmentEmitters.txt");
		RemoveFileMapEntry("bazaar.s3d");
		RemoveFileMapEntry("bazaar.xmi");
		RemoveFileMapEntry("bazaar_chr.s3d");
		RemoveFileMapEntry("bazaar_obj.s3d");
		RemoveFileMapEntry("bazaar.mp3");
		RemoveFileMapEntry("bazaar.emt");

		added = false;
	}

	if(!added)
	{
		added = true;

		if(old_nektulos)
		{
			for(int i = 0; i < sizeof(nektulos_new_files) / sizeof(const char *); i++)
			{
				AddFileMapEntry(nektulos_new_files[i], NULL);
			}
		}

		if(old_lavastorm)
		{
			for(int i = 0; i < sizeof(lavastorm_new_files) / sizeof(const char *); i++)
			{
				AddFileMapEntry(lavastorm_new_files[i], NULL);
			}
		}

		if(old_arena)
		{
			for(int i = 0; i < sizeof(arena_new_files) / sizeof(const char *); i++)
			{
				AddFileMapEntry(arena_new_files[i], NULL);
			}
		}

		if(old_bazaar)
		{
			// block new zone files
			AddFileMapEntry("bazaar.eqg", NULL);
			AddFileMapEntry("bazaar_assets.txt", NULL);
			AddFileMapEntry("bazaar_EnvironmentEmitters.txt", NULL);

			// overlay old zone files
			AddFileMapEntry("bazaar.s3d", ModAssetDir("bazaar.s3d"));
			AddFileMapEntry("bazaar.xmi", ModAssetDir("bazaar.xmi"));
			AddFileMapEntry("bazaar_chr.s3d", ModAssetDir("bazaar_chr.s3d"));
			AddFileMapEntry("bazaar_obj.s3d", ModAssetDir("bazaar_obj.s3d"));

			// this is a mod to add music to this zone
			if(old_bazaar_music_mod)
			{
				AddFileMapEntry("bazaar.mp3", ModAssetDir("bazaar.mp3"));
				AddFileMapEntry("bazaar.emt", ModAssetDir("bazaar.emt"));
			}
		}
	}
}

enum ExpansionBitmask : uint32
{
	bitEverQuest = 0x00000000,
	bitRoK = 0x00000001,
	bitSoV = 0x00000002,
	bitSoL = 0x00000004,
	bitPoP = 0x00000008,
	bitLoY = 0x00000010,
	bitLDoN = 0x00000020,
	bitGoD = 0x00000040,
	bitOoW = 0x00000080,
	bitDoN = 0x00000100,
	bitDoD = 0x00000200,

	maskEverQuest = 0x00000000,
	maskRoK = 0x00000001,
	maskSoV = 0x00000003,
	maskSoL = 0x00000007,
	maskPoP = 0x0000000F,
	maskLoY = 0x0000001F,
	maskLDoN = 0x0000003F,
	maskGoD = 0x0000007F,
	maskOoW = 0x000000FF,
	maskDoN = 0x000001FF,
	maskDoD = 0x000003FF
};

typedef int (__cdecl *_Handle_OP_ExpansionInfo)(int *packet);
_Handle_OP_ExpansionInfo Handle_OP_ExpansionInfo_Trampoline;
int __cdecl Handle_OP_ExpansionInfo_Detour(int *packet)
{
	if(use_server_expansion_info)
	{
		// inspect expansion flags
		unsigned int exp = *(unsigned int *)packet;
		
		// we assume this goes linearly and all the previous expansions are also enabled
		old_arena = (exp & bitDoN) == 0;
		old_lavastorm = (exp & bitDoN) == 0;
		old_bazaar = (exp & bitDoN) == 0;
		old_nektulos = (exp & bitDoD) == 0;

		Log("Server sent expansion settings value 0x%08X. old_nektulos is %s, old_lavastorm is %s, old_arena is %s, old_bazaar is %s",
			exp,
			old_nektulos ? "ENABLED" : "DISABLED", 
			old_lavastorm ? "ENABLED" : "DISABLED",
			old_arena ? "ENABLED" : "DISABLED",
			old_bazaar ? "ENABLED" : "DISABLED"
		);
	}

	AddZoneVersionFileMaps();

	return Handle_OP_ExpansionInfo_Trampoline(packet);
}

void LoadZoneVersionHack()
{
	bool enable = true;

#ifdef INI_FILE
	char buf[2048];
	const char *desc = "This hack is for switching between the old and new versions of nektulos, lavastorm, arena and bazaar zones.  There is also a mod to add music to the old bazaar, as it normally doesn't play any.  The individual zone settings only work if Auto is FALSE.  When Auto is enabled the zones will be switched based on the expansion bits received from the world server when logging in.";
	WritePrivateProfileStringA("ZoneVersion", "Description", desc, INI_FILE);
	GetINIString("ZoneVersion", "Enabled", "TRUE", buf, sizeof(buf), true);
	enable = ParseINIBool(buf);
	GetINIString("ZoneVersion", "Auto", "TRUE", buf, sizeof(buf), true);
	use_server_expansion_info = ParseINIBool(buf);
	GetINIString("ZoneVersion", "OldNektulos", "FALSE", buf, sizeof(buf), true);
	old_nektulos = ParseINIBool(buf);
	GetINIString("ZoneVersion", "OldLavastorm", "FALSE", buf, sizeof(buf), true);
	old_lavastorm = ParseINIBool(buf);
	GetINIString("ZoneVersion", "OldArena", "FALSE", buf, sizeof(buf), true);
	old_arena = ParseINIBool(buf);
	GetINIString("ZoneVersion", "OldBazaar", "FALSE", buf, sizeof(buf), true);
	old_bazaar = ParseINIBool(buf);
	GetINIString("ZoneVersion", "OldBazaarMusicMod", "TRUE", buf, sizeof(buf), true);
	old_bazaar = ParseINIBool(buf);
#endif

	Log("LoadZoneVersionHack(): hack is %s, use_server_expansion_info is %s, old_nektulos is %s, old_lavastorm is %s, old_arena is %s, old_bazaar is %s",
		enable ? "ENABLED" : "DISABLED", 
		use_server_expansion_info ? "ENABLED" : "DISABLED", 
		old_nektulos ? "ENABLED" : "DISABLED", 
		old_lavastorm ? "ENABLED" : "DISABLED",
		old_arena ? "ENABLED" : "DISABLED",
		old_bazaar ? "ENABLED" : "DISABLED"
	);

	if(enable)
	{
		Handle_OP_ExpansionInfo_Trampoline = (_Handle_OP_ExpansionInfo)DetourWithTrampoline((void *)Offset_Handle_OP_ExpansionInfo, Handle_OP_ExpansionInfo_Detour, 6);
	}
}

#endif
