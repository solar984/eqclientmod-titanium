#include "../eqclientmod.h"
// This hack removes the requirement to pass the 'patchme' argument to the program to start it.

#ifdef PROGRAM_LAUNCH_HACK
#include "../common.h"
#include "../util.h"
#include "../settings.h"

void LoadProgramLaunchHack()
{
	bool enable = true;

#ifdef INI_FILE
	char buf[2048];
	const char *desc = "This hack removes the need to pass the 'patchme' argument to the program to start it.";
	WritePrivateProfileStringA("ProgramLaunch", "Description", desc, INI_FILE);
	GetINIString("ProgramLaunch", "Enabled", "TRUE", buf, sizeof(buf), true);
	enable = ParseINIBool(buf);
#endif

	Log("LoadProgramLaunchHack(): hack is %s", enable ? "ENABLED" : "DISABLED");

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
	}
}

#endif
