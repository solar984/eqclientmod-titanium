#include "../eqclientmod.h"
// This hack removes various Sleep() calls to speed up rendering and loading.
//
// 1.) The game contains an FPS limiter slider that goes from 10 to 100.  When it's set to 100 it's supposed to be unlimited, but there is always a minium of 1ms sleep between frames and this removes that.
// This frame limiter is kind of bad how it's implemented as its resolution is limited to milliseconds and it sleeps for 1ms even if the framerate is lagging behind the target, causing jerky rendering and increased input latency.
// This mod removes the minimum 1ms sleep and completely uncaps the framerate when the slider is set to 100.  It also improves the frame pacing even if you use the slider at a value less than 100.
//
// 2.) When the game is not the foreground focus, it inserts a 100ms sleep between each frame bringing the framerate way down.  This mod disables that so the game doesn't act any different when it's in the background.
//
// 3.) Character selection and character creation screens have a 10ms sleep between frames and this mod removes that.
//
// 4.) When using /quit or otherwise being disconnected there is a very long sleep, about 20 seconds total.  This mod removes that long sleep.
//
// 5.) There are various small sleeps interspersed during data file loading that can be removed to make the game load slightly faster.
//

#ifdef SLEEP_REMOVER_HACK
#include "../common.h"
#include "../util.h"
#include "../settings.h"

void LoadSleepRemoverHack()
{
	bool enable = true;
	bool removeBackgroundSleep = true;
	bool removeInterFrameSleep = true;
	bool removeCharSelectSleep = true;
	bool removeCharCreateSleep = true;
	bool removeDisconnectedSleep = true;
	bool removeLoadingSleep = true;
	bool highFPSPhysicsFix = true;

#ifdef INI_FILE
	char buf[2048];
	const char *desc = "This hack removes a bunch of Sleep() calls that slow down the game rendering and loading.  When the FPS slider is set to 100 in the Options->Display settings in game, the FPS is totally uncapped.";
	WritePrivateProfileStringA("SleepRemover", "Description", desc, INI_FILE);
	GetINIString("SleepRemover", "Enabled", "TRUE", buf, sizeof(buf), true);
	enable = ParseINIBool(buf);
	GetINIString("SleepRemover", "RemoveBackgroundSleep", "TRUE", buf, sizeof(buf), true);
	removeBackgroundSleep = ParseINIBool(buf);
	GetINIString("SleepRemover", "RemoveInterFrameSleep", "TRUE", buf, sizeof(buf), true);
	removeInterFrameSleep = ParseINIBool(buf);
	GetINIString("SleepRemover", "RemoveCharSelectSleep", "TRUE", buf, sizeof(buf), true);
	removeCharSelectSleep = ParseINIBool(buf);
	GetINIString("SleepRemover", "RemoveCharCreateSleep", "TRUE", buf, sizeof(buf), true);
	removeCharCreateSleep = ParseINIBool(buf);
	GetINIString("SleepRemover", "RemoveDisconnectedSleep", "TRUE", buf, sizeof(buf), true);
	removeDisconnectedSleep = ParseINIBool(buf);
	GetINIString("SleepRemover", "RemoveLoadingSleep", "TRUE", buf, sizeof(buf), true);
	removeLoadingSleep = ParseINIBool(buf);
	GetINIString("SleepRemover", "HighFPSPhysicsFix", "TRUE", buf, sizeof(buf), true);
	highFPSPhysicsFix = ParseINIBool(buf);
#endif

	Log("LoadSleepRemoverHack(): hack is %s", enable ? "ENABLED" : "DISABLED");

	if(enable)
	{
		unsigned int zero = 0;

		// there's a 100ms sleep between each frame when the app is in the background, this disables that
		// .text:004ACC4C 830 74 05                                         jz      short loc_4ACC53
		if(removeBackgroundSleep)
		{
			unsigned char jmp = 0xEB;
			Patch((void *)0x004ACC4C, &jmp, 1);
		}

		// there's a minimum of 1ms sleep between frames even when the MaxFPS option is set to 100 (uncapped), this sets it to 0 instead of 1
		// update: this can break physics, the character can end up floating in mid air and not dropping down - there's a fix for this below
		// .text:004ACC76 830 41                                            inc     ecx
		if(removeInterFrameSleep)
		{
			unsigned char nop = 0x90;
			Patch((void *)0x004ACC76, &nop, 1);
		}

		// character selection has a 10ms delay between each frame, this changes that to 0
		// text:004AA4A2 3F8 6A 0A                                         push    0Ah             ; dwMilliseconds
		if(removeCharSelectSleep)
		{
			Patch((void *)(0x004AA4A2+1), &zero, 1);
		}

		// character creation has a 10ms delay between each frame, this changes that to 0
		// .text:004A9E8F 020 6A 0A                                         push    0Ah             ; dwMilliseconds
		if(removeCharCreateSleep)
		{
			Patch((void *)(0x004A9E8F+1), &zero, 1);
		}

		// when you camp as a GM and get the disconnected screen, it has a 16 and a 3 second sleep, this removes that
		if(removeDisconnectedSleep)
		{
			// 16 sec sleep
			// .text:004AC475 830 68 80 3E 00 00                                push    3E80h           ; dwMilliseconds
			Patch((void *)(0x004AC475+1), &zero, 4);

			// 3 sec sleep
			// .text:004969E9 210 68 B8 0B 00 00                                push    0BB8h           ; dwMilliseconds
			Patch((void *)(0x004969E9+1), &zero, 4);
		}

		// some sleeps in zone file loading
		if(removeLoadingSleep)
		{
			// .text:00438796 428 6A 01                                         push    1               ; dwMilliseconds
			Patch((void *)(0x00438796+1), &zero, 1);

			// .text:0043C1C3 014 6A 01                                         push    1               ; dwMilliseconds
			Patch((void *)(0x0043C1C3+1), &zero, 1);

			// .text:004AAC3F 07C 6A 0A                                         push    0Ah             ; dwMilliseconds
			Patch((void *)(0x004AAC3F+1), &zero, 1);

			// .text:004A8446 060 6A 0A                                         push    0Ah             ; dwMilliseconds
			Patch((void *)(0x004A8446+1), &zero, 1);

			// .text:004969E9 210 68 B8 0B 00 00                                push    0BB8h           ; dwMilliseconds
			Patch((void *)(0x004969E9+1), &zero, 4);
		}

		if(highFPSPhysicsFix)
		{
			unsigned char nop[] = { 0x90, 0x90, 0x90,0x90, 0x90, 0x90 };

			// this disables the collision movement cache system which fails to work correctly at high framerates because it filters small movements
			// .text:0048AD17 1CC FF 86 E8 02 00 00                             inc     dword ptr [esi+2E8h]
			Patch((void *)(0x0048AD17), nop, 6);
		}
	}
}

#endif
