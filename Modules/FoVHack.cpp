#include "../eqclientmod.h"

#ifdef FOV_HACK
#include "../common.h"
#include "../util.h"
#include "../settings.h"
#include "../eq_titanium.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

float rad2deg(float rad)
{
	return rad * (180.0f / 3.14159265358979323846f);
}

float deg2rad(float deg)
{
	return deg * (3.14159265358979323846f / 180.0f);
}

float getVfromH(float H, int w, int h)
{
	float angle = H / 2.0f;
	return atanf(tanf(angle) * ((float)h / w)) * 2.0f;
}

float getHfromV(float V, int w, int h)
{
	float angle = V / 2.0f;
	return atanf(tanf(angle) * ((float)w / h)) * 2.0f;
}

short last_requested_hfov_degrees = 0;

// trampoline
class FoV;
typedef int(__thiscall *_CDisplay__SetViewAngle_Trampoline)(FoV *this_ptr, short hfov);
_CDisplay__SetViewAngle_Trampoline CDisplay__SetViewAngle_Trampoline;

// detour
class FoV
{
public:
	int CDisplay__SetViewAngle_Detour(short hfov_degrees)
	{
		last_requested_hfov_degrees = hfov_degrees;
		int w = 16;
		int h = 9;
		int *(__cdecl *GetEQScreenRes)(int *width, int *height)  = (int *(__cdecl *)(int *width, int *height))Offset_GetEQScreenRes;
		GetEQScreenRes(&w, &h); // stores resolution into w,h

		float Vrad = getVfromH(deg2rad(hfov_degrees), 4, 3); // original game was running at 4x3 resolutions only so the FoV setting was made based on that
		short new_hfov_degrees = (short)(rad2deg(getHfromV(Vrad, w, h)) + 0.5f);
		if (new_hfov_degrees < 0) new_hfov_degrees += 360;
		if (new_hfov_degrees > 239) new_hfov_degrees = 239;

		//char buf[100];
		//snprintf(buf, 100, "SetViewAngle: scaling %d(%0.2f/%0.2f) -> %d for %dx%d aspect", hfov_degrees, Vrad, rad2deg(Vrad), new_hfov_degrees, w, h);
		//EverQuestObject->dsp_chat(buf, 281, 0);

		return CDisplay__SetViewAngle_Trampoline(this, new_hfov_degrees);
	}
};

#ifdef COMMAND_HANDLER
void command_fov(void *LocalPlayer, char *text, char *cmd, char *&sep)
{
	char buf[50];
	int DisplayObject = *(int *)Offset_DisplayObject;
	int(__thiscall *CDisplay__SetViewAngle)(int, short) = (int(__thiscall *)(int, short))Offset_CDisplay__SetViewAngle;
	char *a1 = strtok_s(sep, " ", &sep);
	if (a1 && *a1)
	{
		int fov = atoi(a1);

		_snprintf_s(buf, 50, "setting fov to %d", fov);
		EverQuestObject->dsp_chat(buf, 281, 0);

		CDisplay__SetViewAngle(DisplayObject, fov);
	}
	else
	{
		_snprintf_s(buf, 50, "fov is %d", last_requested_hfov_degrees);
		EverQuestObject->dsp_chat(buf, 281, 0);
	}
}
#endif

void LoadFoVHack()
{
	bool enable = true;

#ifdef INI_FILE
	char buf[2048];
	const char *desc = "Normally EQ expects to render to a 4:3 display and anything wider results in a zoomed in telescope effect (same horizontal field of vision, smaller vertical).  This mod changes the calculation so the horizontal field of view can expand at wider ratios.  Note that FoV is not something that should be freely adjusted for an authentic experience - it's tied to game effects like magnification spells and intoxication (which reduce the field of view) as well as some buffs that increase the field of view.  You can forcefully set the FoV with the /fov command but be aware that it will change again when one of these effects happens.";
	WritePrivateProfileStringA("FOV", "Description", desc, INI_FILE);
	//GetINIString("FOV", "Description", desc, buf, 2, true);
	GetINIString("FOV", "Enabled", "TRUE", buf, sizeof(buf), true);
	enable = ParseINIBool(buf);
#endif

	Log("LoadFoVHack(): hack is %s", enable ? "ENABLED" : "DISABLED");
	if (enable)
	{
		//MethodAddressToVariable(FoV_CDisplay__SetViewAngle_Detour, FoV::CDisplay__SetViewAngle_Detour);
		//CDisplay__SetViewAngle_Trampoline = (_CDisplay__SetViewAngle_Trampoline)DetourWithTrampoline((void *)0x004ACAA6, (void *)FoV_CDisplay__SetViewAngle_Detour, 7);
		intptr_t  NP_CDisplay__SetViewAngle_Detour; { int(__thiscall FoV::* fp)(short) = &FoV::CDisplay__SetViewAngle_Detour; memcpy(&NP_CDisplay__SetViewAngle_Detour, &fp, 4); }
		CDisplay__SetViewAngle_Trampoline = (_CDisplay__SetViewAngle_Trampoline)DetourWithTrampoline((void *)Offset_CDisplay__SetViewAngle, (void *)NP_CDisplay__SetViewAngle_Detour, 10);
#ifdef COMMAND_HANDLER
		ChatCommandMap["/fov"] = command_fov;
#endif
	}
}
#endif

