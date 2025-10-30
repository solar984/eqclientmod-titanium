#pragma once

// eqgame.exe - offsets include 0x00400000 base
#define Offset_WindowNameString 0x00645FAC
#define Offset_rdtsc_elapsed 0x004CC98F
#define Offset_EqGetTime 0x0046D655
#define Offset_CEverQuest__dsp_chat 0x004982C6
#define Offset_CEverQuest__dsp_chat_simple 0x00498436
#define Offset_EverQuestObject 0x00988DF0
#define Offset_CEverQuest__InterpretCmd 0x00498B78
#define Offset_strcpy 0x0060E450
#define Offset_sprintf 0x0060D5EB
#define Offset_LoadEnvironmentEmitterInstances 0x004477AB
#define Offset_EqSoundManager__EmitterLoad 0x0044BD94
#define Offset_Handle_OP_ExpansionInfo 0x0045386D
#define Offset_LocalPC 0x00905D00
#define Offset_LocalPlayer 0x00905CE4
#define Offset_TargetPlayer 0x00905D04
#define Offset_process_physics 0x004BFE0F
#define Offset_EQPlayer__MovePlayer 0x0048BA76
#define Offset_eqWndProc 0x004CE798
#define Offset_TextFileReader__TextFileReader 0x00576BD0

// EQGraphicsDX9.DLL - RVA offsets
#define Offset_DX9_t3dSetGammaLevel 0x0007BD80

#define EQ_FUNCTION_AT_ADDRESS(function, offset) __declspec(naked) function { __asm{mov eax, offset}; __asm{jmp eax}; }

class CEverQuest
{
public:
	void CEverQuest::dsp_chat(const char *text, short color, bool filtered);
	void CEverQuest::dsp_chat(const char *text);
	//	int CEverQuest::InterpretCmd(void *LocalPlayer, char *text);
};

#define EverQuestObject (*(CEverQuest **)Offset_EverQuestObject)
