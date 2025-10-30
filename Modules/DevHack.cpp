#include "../eqclientmod.h"
// this hack is not intended to be used for general play, it is for inspecting things in the client state during gameplay to aid in development

#ifdef DEV_HACK
#include <stdlib.h>
#include "../common.h"
#include "../util.h"
#include "../settings.h"
#include "../eq_titanium.h"

void command_consumption(void *LocalPlayer, char *text, char *cmd, char *&sep)
{
	int (__thiscall *ProfileManager__GetCurrentProfile)(int this_ptr) = (int (__thiscall *)(int))0x005EC220;

	int LocalPC = *(int *)Offset_LocalPC;
	int ProfileManager = *(int *)(*(int *)(LocalPC + 8) + 4) + LocalPC + 12;
	
	int pp = ProfileManager__GetCurrentProfile(ProfileManager);
	short hunger = *(short *)(pp + 0x121C);
	short thirst = *(short *)(pp + 0x1218);
	
	char buf[200];
	sprintf(buf, "hunger = %d thirst = %d", hunger, thirst);
	EverQuestObject->dsp_chat(buf, 269, 1);
}

#if 1

typedef struct _ARGBCOLOR {
    union {
        struct {
            BYTE B;
            BYTE G;
            BYTE R;
            BYTE A;
        };
        DWORD ARGB;
    };
} ARGBCOLOR, *PARGBCOLOR;

struct _EQUIPMENT {
   union {
      struct// EQUIPARRAY
      {
         DWORD Item[9];
      };// Array;
      struct //EQUIPUNIQUE
      {
         DWORD Head;
         DWORD Chest;
         DWORD Arms;
         DWORD Wrists;
         DWORD Hands;
         DWORD Legs;
         DWORD Feet;
         DWORD Primary;
         DWORD Offhand;
      };// Unique;
   };
};

struct _SPAWNINFO { 
/* 0x0000 */   BYTE    Unknown0x0; 
/* 0x0001 */   CHAR    Lastname[0x27];  // // Surname on PCs, Newbie Tag on NPCs 
/* 0x0028 */   DWORD     Unknown0x028[0x2];
/* 0x0030 */   FLOAT     Y; 
/* 0x0034 */   FLOAT     X; 
/* 0x0038 */   FLOAT     Z; 
/* 0x003c */   FLOAT     delta_Y; 
/* 0x0040 */   FLOAT     delta_X; 
/* 0x0044 */   FLOAT     delta_Z; 
/* 0x0048 */   FLOAT     SpeedRun; 
/* 0x004c */   FLOAT     heading; 
/* 0x0050 */   FLOAT     pitch; 
/* 0x0054 */   FLOAT     delta_pitch; 
/* 0x0058 */   FLOAT     delta_heading; 
/* 0x005c */   FLOAT     CameraAngle; 
/* 0x0060 */   BYTE      Unknown0x60[0x50]; 
/* 0x00b0 */   FLOAT     Y2;
/* 0x00b4 */   FLOAT     X2;
/* 0x00b8 */   FLOAT     Z2;
/* 0x00bc */   FLOAT     SpeedY2;
/* 0x00c0 */   FLOAT     SpeedX2;
/* 0x00c4 */   FLOAT     SpeedZ2;
/* 0x00c8 */   FLOAT     SpeedRun2;
/* 0x00cc */   FLOAT     Heading2;
/* 0x00d0 */   BYTE      Unknown0x0d0[0x50];
/* 0x0120 */   CHAR      Name[0x40]; // ie priest_of_discord00 
/* 0x0160 */   CHAR      DisplayedName[0x40]; // ie Priest of Discord 
/* 0x01a0 */   FLOAT     SpeedHeading; 
/* 0x01a4 */   DWORD     field_1a4;  
/* 0x01a8 */   struct    _ACTORINFO   *pActorInfo; 
/* 0x01ac */   DWORD     field_1ac; 
/* 0x01b0 */   BYTE      CanFindLocation; 
/* 0x01b1 */   BYTE      Sneak;  // returns 01 on both Sneak and Shroud of Stealth 
/* 0x01b2 */   BYTE      Linkdead;  // Uncharmable flag when used on mobs? 
/* 0x01b3 */   BYTE      field_1b3; 
/* 0x01b4 */   BYTE      LFG; 
/* 0x01b5 */   BYTE      field_1b5; 
/* 0x01b6 */   BYTE      IsABoat; // 1 = a type of boat 
/* 0x01b7 */   BYTE      Unknown0x1b7; 
/* 0x01b8 */   ARGBCOLOR ArmorColor[0x9];  // Armor Dye if custom, otherwise Item Tint 
/* 0x01dc */   struct    _EQUIPMENT Equipment; 
/* 0x0200 */   DWORD     field_200; 
/* 0x0204 */   WORD      Zone; 
/* 0x0206 */   WORD      Instance; 
/* 0x0208 */   DWORD     field_208; 
/* 0x020c */   DWORD     field_20c; 
/* 0x0210 */   DWORD     field_210; 
/* 0x0214 */   struct    _SPAWNINFO *pNext; 
/* 0x0218 */   struct    _CHARINFO  *pCharInfo; 
/* 0x021c */   DWORD     field_218; 
/* 0x0220 */   struct    _SPAWNINFO *pPrev; 
/* 0x0224 */   BYTE      Unknown0x220[0x4]; 
/* 0x0228 */   FLOAT     field_228; 
/* 0x022c */   DWORD     field_22c; 
/* 0x0230 */   FLOAT     RunSpeed; 
/* 0x0234 */   FLOAT     field_234; 
/* 0x0238 */   FLOAT     field_238; 
/* 0x023c */   FLOAT     AvatarHeight;  // height of avatar from ground when standing 
/* 0x0240 */   FLOAT     WalkSpeed; 
/* 0x0244 */   BYTE      Type; 
/* 0x0245 */   BYTE      HairColor;      
/* 0x0246 */   BYTE      BeardColor; 
/* 0x0247 */   BYTE      Field_247; 
/* 0x0248 */   BYTE      Eyes; 
/* 0x0249 */   BYTE      Eyes2;      
/* 0x024a */   BYTE      BeardType; 
/* 0x024b */   BYTE      Holding;   // 0=holding/wielding nothing 
/* 0x024c */   BYTE      Level; 
/* 0x024d */   BYTE      FaceHair;  // Face/Hair combination with headgear 
/* 0x024e */   BYTE      Gender; 
/* 0x024f */   BYTE      PvPFlag; 
/* 0x0250 */   BYTE      HideMode; 
/* 0x0251 */   BYTE      StandState; 
/* 0x0252 */   BYTE      Class; 
/* 0x0253 */   BYTE      Light; 
/* 0x0254 */   BYTE      InNonPCRaceIllusion;  // This is buggy ...not sure exact usage 
/* 0x0255 */   BYTE      Field_251;  // form related, unsure how 
/* 0x0256 */   BYTE      GM;       
/* 0x0257 */   BYTE      Field_253; 
/* 0x0258 */   DWORD     SpawnID; 
/* 0x025c */   DWORD     MasterID; 
/* 0x0260 */   DWORD     Race; 
/* 0x0264 */   DWORD     Anon; 
/* 0x0268 */   DWORD     field_264; 
/* 0x026c */   DWORD     AFK; 
/* 0x0270 */   DWORD     BodyType; 
/* 0x0274 */   LONG      HPCurrent; 
/* 0x0278 */   BYTE      AARank; 
/* 0x0279 */   BYTE      Unknown0x278[0x3]; 
/* 0x027c */   DWORD     GuildStatus; 
/* 0x0280 */   DWORD     Deity; 
/* 0x0284 */   DWORD     HPMax; 
/* 0x0288 */   DWORD     GuildID; 
/* 0x028c */   BYTE      Levitate;   //0-normal state  2=levitating 3=mob (not levitating) 
/* 0x028d */   BYTE      Unknown0x28c[0x17]; 
/* 0x02a4 */   CHAR      Title[0x20];
/* 0x02c4 */   CHAR      Suffix[0x20];
/* 0x02e4 */   CHAR      Unknown0x2e4[0x348-0x2e4];
/*	        More Data */ 
};

struct _SPELLBUFF {
/*0x00*/    BYTE      Unknown0x00;
/*0x01*/    BYTE      Level;
/*0x02*/    CHAR      Modifier; // bard song modifier, divide by 10 to get 2.8 etc
/*0x03*/    CHAR      DamageShield;  // maybe.. I've noticed this is -1 on a lot of ds's.
/*0x04*/    LONG      SpellID;// -1 or 0 for no spell..
/*0x08*/    int     Duration;
/*0x0c*/    DWORD     DamageAbsorbRemaining;  // Melee or Spellshield type
/*0x10*/    DWORD     Unknown0x10;
/*0x14*/
};

#endif

void command_tinfo(void *LocalPlayer, char *text, char *cmd, char *&sep)
{
	char buf[200];

	// target info
	struct _SPAWNINFO *target = *(struct _SPAWNINFO **)Offset_TargetPlayer;
	if(!target)
	{
		sprintf(buf, "No Target");
		EverQuestObject->dsp_chat(buf, 269, 1);
		return;
	}
	sprintf(buf, "Name: %s Type %d Race %d Gender %d", target->Name, target->Type, target->Race, target->Gender);
	EverQuestObject->dsp_chat(buf, 269, 1);
	sprintf(buf, "RunSpeed: %f WalkSpeed %f", target->RunSpeed, target->WalkSpeed);
	EverQuestObject->dsp_chat(buf, 269, 1);
	sprintf(buf, "Size: %f BodyType %u", target->AvatarHeight, target->BodyType);
	EverQuestObject->dsp_chat(buf, 269, 1);
}

#if 0
// struct _SPELLBUFF *__thiscall CharacterZoneClient::GetEffect(CharacterZoneClient *this, int slot)
typedef struct _SPELLBUFF *(__fastcall *_CharacterZoneClient__GetEffect)(int thisptr, int unused, int slot);
_CharacterZoneClient__GetEffect CharacterZoneClient__GetEffect = (_CharacterZoneClient__GetEffect)0x0040E7AC;

// int __thiscall CharacterZoneClient::ProcessAffects(CharacterZoneClient *this)
typedef int (__fastcall *_CharacterZoneClient__ProcessAffects)(int thisptr);
_CharacterZoneClient__ProcessAffects CharacterZoneClient__ProcessAffects_Trampoline;
int __fastcall CharacterZoneClient__ProcessAffects_Detour(int thisptr)
{
	char buf[200];
	struct _SPELLBUFF *buff = CharacterZoneClient__GetEffect(thisptr, 0, 0); // get first buff

	if(buff->Unknown0x00 >= 2)
	{
		sprintf(buf, "CharacterZoneClient__ProcessAffects_Detour 1 buff0 duration %d", buff->Duration);
		EverQuestObject->dsp_chat(buf, 269, 1);
	}

	int ret = CharacterZoneClient__ProcessAffects_Trampoline(thisptr);

	if(buff->Unknown0x00 >= 2)
	{
		sprintf(buf, "CharacterZoneClient__ProcessAffects_Detour 2 buff0 duration %d", buff->Duration);
		EverQuestObject->dsp_chat(buf, 269, 1);
	}

	return ret;
}
#endif

void LoadDevHack()
{
	bool enable = false;

#ifdef INI_FILE
	char buf[2048];
	const char *desc = "This hack is not intended to be used for general play, it is for inspecting things in the client state during gameplay to aid in development.";
	WritePrivateProfileStringA("Dev", "Description", desc, INI_FILE);
	GetINIString("Dev", "Enabled", "FALSE", buf, sizeof(buf), true);
	enable = ParseINIBool(buf);
#endif

	Log("LoadDevHack(): hack is %s", enable ? "ENABLED" : "DISABLED");

	// boat hack
	// .text:0043D089 164 83 F8 72                                      cmp     eax, 72h ; 'r'
	// .text:0043D14F 164 83 F8 72                                      cmp     eax, 72h ; 'r'
	//char boat = 72;
	//Patch((void *)(0x0043D089+2), &boat, 1);
	//Patch((void *)(0x0043D14F+2), &boat, 1);
	// .text:0047FCCB 040 83 BE 60 02 00 00 48                          cmp     dword ptr [esi+260h], 48h ; 'H'
	//char zero = 0;
	//Patch((void *)(0x0047FCCB+5), &zero, 1);
	// .text:0048CA87 02C 68 54 8E 64 00                                push    offset aShip    ; "SHIP"
	// .text:0048CAA5 02C 68 50 8E 64 00                                push    offset aPre     ; "PRE"
	// .rdata:00648E54 53 48 49 50 00                    aShip           db 'SHIP',0             ;
	// SHIP is a big ass one
	//unsigned int addr = 0x00648E54;
	// .rdata:00648E5C 42 4F 41 54 00                    aBoat           db 'BOAT',0   
	// BOAT is a canoe
	//unsigned int addr = 0x00648E5C;
	//Patch((void *)(0x0048CAA5+1), &addr, 4);

	//CharacterZoneClient__ProcessAffects_Trampoline = (_CharacterZoneClient__ProcessAffects)DetourWithTrampoline((void *)0x00413AE4, CharacterZoneClient__ProcessAffects_Detour, 8);

	if(enable)
	{
#ifdef COMMAND_HANDLER
		ChatCommandMap["/consumption"] = command_consumption;
		ChatCommandMap["/tinfo"] = command_tinfo;
#endif
	}
}

#endif

