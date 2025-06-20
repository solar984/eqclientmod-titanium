// This is mostly copied from MQ2
// You can import this file in IDA's Local Types page


#define VOID void

#define BI_TARGETABLE					1
#define BI_TRIGGER						2 
#define BI_TRAP							4
#define BI_TIMER						8

typedef struct _BodyInfo
{
	PCHAR Name;
	DWORD Flags;
} BODYINFO, *PBODYINFO;

#define SPAWN_PLAYER                    0
#define SPAWN_NPC                       1
#define SPAWN_CORPSE                    2
//#define SPAWN_ANY                     3
//#define SPAWN_PET                     4

#define ITEM_NORMAL1                    0x0031
#define ITEM_NORMAL2                    0x0036
#define ITEM_NORMAL3                    0x315f
#define ITEM_NORMAL4                    0x3336
#define ITEM_NORMAL5                    0x0032
#define ITEM_NORMAL6                    0x0033
#define ITEM_NORMAL7                    0x0034
#define ITEM_NORMAL8                    0x0039
#define ITEM_CONTAINER                  0x7900
#define ITEM_CONTAINER_PLAIN            0x7953
#define ITEM_BOOK                       0x7379

#define ITEMITEMTYPE_FOOD				0x0e 
#define ITEMITEMTYPE_WATER				0x0f 
#define ITEMITEMTYPE_ALCOHOL			0x26 
#define ITEMITEMTYPE_POISON				0x2a 
#define ITEMITEMTYPE_AUGUMENT			0x36 

#define ITEMEFFECTTYPE_COMBAT			0x00 
#define ITEMEFFECTTYPE_INVENTORY1		0x01 // Bards need to stop sing to cast 
#define ITEMEFFECTTYPE_WORN				0x02 
#define ITEMEFFECTTYPE_INVENTORY2		0x03 
#define ITEMEFFECTTYPE_MUSTEQUIP		0x04 // Bards need to stop sing to cast 
#define ITEMEFFECTTYPE_INVENTORY3		0x05 

#define SKILLMINDAMAGEMOD_BASH			0x00 
#define SKILLMINDAMAGEMOD_BACKSTAB		0x01 
#define SKILLMINDAMAGEMOD_DRAGONPUNCH	0x02 
#define SKILLMINDAMAGEMOD_EAGLESTRIKE	0x03 
#define SKILLMINDAMAGEMOD_FLYINGKICK	0x04 
#define SKILLMINDAMAGEMOD_KICK			0x05 
#define SKILLMINDAMAGEMOD_ROUNDKICK		0x06 
#define SKILLMINDAMAGEMOD_TIGERCLAW		0x07 
#define SKILLMINDAMAGEMOD_FRENZY		0x08 

#define COLOR_DEFAULT                   0x00 +   0
#define COLOR_DARKGREY                  0x00 +   1
#define COLOR_DARKGREEN                 0x00 +   2
#define COLOR_DARKBLUE                  0x00 +   3
#define COLOR_PURPLE                    0x00 +   5
#define COLOR_LIGHTGREY                 0x00 +   6

#define CONCOLOR_GREEN                  0x00 +  14
#define CONCOLOR_LIGHTBLUE              0x00 +  18
#define CONCOLOR_BLUE                   0x00 +  16
#define CONCOLOR_BLACK                  0x00 +  20
#define CONCOLOR_YELLOW                 0x00 +  15
#define CONCOLOR_RED                    0x00 +  13

#define USERCOLOR_SAY                   0xFF +   1 //  1  - Say
#define USERCOLOR_TELL                  0xFF +   2 //  2  - Tell
#define USERCOLOR_GROUP                 0xFF +   3 //  3  - Group
#define USERCOLOR_GUILD                 0xFF +   4 //  4  - Guild
#define USERCOLOR_OOC                   0xFF +   5 //  5  - OOC
#define USERCOLOR_AUCTION               0xFF +   6 //  6  - Auction
#define USERCOLOR_SHOUT                 0xFF +   7 //  7  - Shout
#define USERCOLOR_EMOTE                 0xFF +   8 //  8  - Emote
#define USERCOLOR_SPELLS                0xFF +   9 //  9  - Spells (meming, scribing, casting, etc.)
#define USERCOLOR_YOU_HIT_OTHER         0xFF +  10 //  10 - You hit other
#define USERCOLOR_OTHER_HIT_YOU         0xFF +  11 //  11 - Other hits you
#define USERCOLOR_YOU_MISS_OTHER        0xFF +  12 //  12 - You miss other
#define USERCOLOR_OTHER_MISS_YOU        0xFF +  13 //  13 - Other misses you
#define USERCOLOR_DUELS                 0xFF +  14 //  14 - Some broadcasts (duels)
#define USERCOLOR_SKILLS                0xFF +  15 //  15 - Skills (ups, non-combat use, etc.)
#define USERCOLOR_DISCIPLINES           0xFF +  16 //  16 - Disciplines or special abilities
#define USERCOLOR_UNUSED001             0xFF +  17 //  17 - Unused at this time
#define USERCOLOR_DEFAULT               0xFF +  18 //  18 - Default text and stuff you type
#define USERCOLOR_UNUSED002             0xFF +  19 //  19 - Unused at this time
#define USERCOLOR_MERCHANT_OFFER        0xFF +  20 //  20 - Merchant Offer Price
#define USERCOLOR_MERCHANT_EXCHANGE     0xFF +  21 //  21 - Merchant Buy/Sell
#define USERCOLOR_YOUR_DEATH            0xFF +  22 //  22 - Your death message
#define USERCOLOR_OTHER_DEATH           0xFF +  23 //  23 - Others death message
#define USERCOLOR_OTHER_HIT_OTHER       0xFF +  24 //  24 - Other damage other
#define USERCOLOR_OTHER_MISS_OTHER      0xFF +  25 //  25 - Other miss other
#define USERCOLOR_WHO                   0xFF +  26 //  26 - /who command
#define USERCOLOR_YELL                  0xFF +  27 //  27 - yell for help
#define USERCOLOR_NON_MELEE             0xFF +  28 //  28 - Hit for non-melee
#define USERCOLOR_SPELL_WORN_OFF        0xFF +  29 //  29 - Spell worn off
#define USERCOLOR_MONEY_SPLIT           0xFF +  30 //  30 - Money splits
#define USERCOLOR_LOOT                  0xFF +  31 //  31 - Loot message
#define USERCOLOR_RANDOM                0xFF +  32 //  32 - Dice Roll (/random)
#define USERCOLOR_OTHERS_SPELLS         0xFF +  33 //  33 - Others spells
#define USERCOLOR_SPELL_FAILURE         0xFF +  34 //  34 - Spell Failures (resists, fizzles, missing component, bad target, etc.)
#define USERCOLOR_CHAT_CHANNEL          0xFF +  35 //  35 - Chat Channel Messages
#define USERCOLOR_CHAT_1                0xFF +  36 //  36 - Chat Channel 1
#define USERCOLOR_CHAT_2                0xFF +  37 //  37 - Chat Channel 2
#define USERCOLOR_CHAT_3                0xFF +  38 //  38 - Chat Channel 3
#define USERCOLOR_CHAT_4                0xFF +  39 //  39 - Chat Channel 4
#define USERCOLOR_CHAT_5                0xFF +  40 //  40 - Chat Channel 5
#define USERCOLOR_CHAT_6                0xFF +  41 //  41 - Chat Channel 6
#define USERCOLOR_CHAT_7                0xFF +  42 //  42 - Chat Channel 7
#define USERCOLOR_CHAT_8                0xFF +  43 //  43 - Chat Channel 8
#define USERCOLOR_CHAT_9                0xFF +  44 //  44 - Chat Channel 9
#define USERCOLOR_CHAT_10               0xFF +  45 //  45 - Chat Channel 10
#define USERCOLOR_MELEE_CRIT            0xFF +  46 //  46 - Melee Crits
#define USERCOLOR_SPELL_CRIT            0xFF +  47 //  47 - Spell Crits
#define USERCOLOR_TOO_FAR_AWAY          0xFF +  48 //  48 - Too far away (melee)
#define USERCOLOR_NPC_RAMAGE            0xFF +  49 //  49 - NPC Rampage
#define USERCOLOR_NPC_FURRY             0xFF +  50 //  50 - NPC Furry
#define USERCOLOR_NPC_ENRAGE            0xFF +  51 //  51 - NPC Enrage
#define USERCOLOR_ECHO_SAY              0xFF +  52 //  52 - say echo
#define USERCOLOR_ECHO_TELL             0xFF +  53 //  53 - tell echo
#define USERCOLOR_ECHO_GROUP            0xFF +  54 //  54 - group echo
#define USERCOLOR_ECHO_GUILD            0xFF +  55 //  55 - guild echo
#define USERCOLOR_ECHO_OOC              0xFF +  56 //  56 - group echo
#define USERCOLOR_ECHO_AUCTION          0xFF +  57 //  57 - auction echo
#define USERCOLOR_ECHO_SHOUT            0xFF +  58 //  58 - shout echo
#define USERCOLOR_ECHO_EMOTE            0xFF +  59 //  59 - emote echo
#define USERCOLOR_ECHO_CHAT_1           0xFF +  60 //  60 - chat 1 echo
#define USERCOLOR_ECHO_CHAT_2           0xFF +  61 //  61 - chat 2 echo
#define USERCOLOR_ECHO_CHAT_3           0xFF +  62 //  62 - chat 3 echo
#define USERCOLOR_ECHO_CHAT_4           0xFF +  63 //  63 - chat 4 echo
#define USERCOLOR_ECHO_CHAT_5           0xFF +  64 //  64 - chat 5 echo
#define USERCOLOR_ECHO_CHAT_6           0xFF +  65 //  65 - chat 6 echo
#define USERCOLOR_ECHO_CHAT_7           0xFF +  66 //  66 - chat 7 echo
#define USERCOLOR_ECHO_CHAT_8           0xFF +  67 //  67 - chat 8 echo
#define USERCOLOR_ECHO_CHAT_9           0xFF +  68 //  68 - chat 9 echo
#define USERCOLOR_ECHO_CHAT_10          0xFF +  69 //  69 - chat 10 echo
#define USERCOLOR_RESERVED              0xFF +  70 //  70 - "unused at this time" 
#define USERCOLOR_LINK                  0xFF +  71 //  71 - item links 
#define USERCOLOR_RAID                  0xFF +  72 //  72 - raid 
#define USERCOLOR_PET                   0xFF +  73 //  73 - my pet 
#define USERCOLOR_DAMAGESHIELD          0xFF +  74 //  74 - damage shields 
#define USERCOLOR_LEADER                0xFF +  75 //  75 - LAA-related messages 
#define USERCOLOR_PETRAMPFLURRY         0xFF +  76 //  76 - pet rampage/flurry 
#define USERCOLOR_PETCRITS              0xFF +  77 //  77 - pet's critical hits 
#define USERCOLOR_FOCUS                 0xFF +  78 //  78 - focus item activation 
#define USERCOLOR_XP                    0xFF +  79 //  79 - xp gain/loss 
#define USERCOLOR_SYSTEM                0xFF +  80 //  80 - system broadcasts etc 

#define DEITY_Bertoxxulous				201
#define DEITY_BrellSerilis				202
#define DEITY_CazicThule				203
#define DEITY_ErollisiMarr				204
#define DEITY_Bristlebane				205
#define DEITY_Innoruuk					206
#define DEITY_Karana					207
#define DEITY_MithanielMarr				208
#define DEITY_Prexus					209
#define DEITY_Quellious					210
#define DEITY_RallosZek					211
#define DEITY_RodcetNife				212
#define DEITY_SolusekRo					213
#define DEITY_TheTribunal				214
#define DEITY_Tunare					215
#define DEITY_Veeshan					216

#define ITEMTYPE_NORMAL					0
#define ITEMTYPE_PACK					1
#define ITEMTYPE_BOOK					2

#define COMP_NONE						0
#define COMP_EQ							1
#define COMP_NE							2
#define COMP_GT							3
#define COMP_LT							4
#define COMP_GE							5
#define COMP_LE							6
#define COMP_CONT						7
#define COMP_NOTCONT					8
#define COMP_BITAND						9
#define COMP_BITOR						10

#define COMP_TYPE_STRING				0
#define COMP_TYPE_NUMERIC				1
#define COMP_TYPE_BIT					2

#define CMD_MQ							1
#define CMD_EQ							2		

#define LASTFIND_NOTFOUND				96
#define LASTFIND_PRIMARY				97

#define EVENT_CHAT						0
#define EVENT_TIMER						1
#define EVENT_CUSTOM					2
#define EVENT_EVAL						3
#define EVENT_EXEC						4
#define EVENT_PULSE						5
#define EVENT_SHUTDOWN					6
#define EVENT_BREAK						7
#define NUM_EVENTS						8

#define CHAT_SAY						1
#define CHAT_TELL						2
#define CHAT_OOC						4
#define CHAT_SHOUT						8
#define CHAT_AUC						16
#define CHAT_GUILD						32
#define CHAT_GROUP						64
#define CHAT_CHAT						128
#define CHATEVENT(x)					(gEventChat & x)

#define FILTERSKILL_ALL					0
#define FILTERSKILL_INCREASE			1
#define FILTERSKILL_NONE				2

#define FILTERMACRO_ALL					0
#define FILTERMACRO_ENHANCED			1
#define FILTERMACRO_NONE				2


#define MAX_STRING						2048
#define MAX_VARNAME						64

// Defines for CXWnd WindowStyle
#define CWS_VSCROLL						0x1
#define CWS_HSCROLL						0x2
#define CWS_TITLE						0x4
#define CWS_CLOSE						0x8
//#define CWS_UNKNOWN					0x10
#define CWS_MINIMIZE					0x20
#define CWS_BORDER						0x40
//#define CWS_UNKNOWN					0x80
//#define CWS_UNKNOWN					0x100
#define CWS_RESIZEALL					0x200
#define CWS_TRANSPARENT					0x400
//#define CWS_UNKNOWN					0x800
#define CWS_NOMOVE						0x8000
#define CWS_UNKNOWN						0x40000
#define ToggleBit(field,bit)			field^=bit;
#define BitOn(field,bit)				field|=bit;
#define BitOff(field,bit)				field&=~bit;
// End CXWnd WindowStyle Defines

enum MOUSE_DATA_TYPES {
   MD_Unknown = -1,
   MD_Button0Click=0,
   MD_Button1Click,
   MD_Button0,
   MD_Button1
};

#define nEQMappableCommands				0x10b

typedef struct _MOUSESPOOF {
   MOUSE_DATA_TYPES   mdType;
   DWORD            dwData;
   struct _MOUSESPOOF   *pNext;
} MOUSESPOOF, *PMOUSESPOOF;

typedef struct _MOUSECLICK {
   BYTE ConfirmLeftClick;// DO NOT WRITE TO THIS BYTE
   BYTE ConfirmRightClick;// DO NOT WRITE TO THIS BYTE
   BYTE RightClick;
   BYTE LeftClick;
} MOUSECLICK, *PMOUSECLICK;


typedef struct _UILOCATION {
   DWORD x;
   DWORD y;
   DWORD w;
   DWORD h;
   CHAR error[MAX_STRING];
} UILOCATION, *PUILOCATION;


#define ITEM_NAME_LEN         64
#define LORE_NAME_LEN         80

// size is 0xc 01-27-2005
typedef struct _ITEMSPELLS { 
/*0x00*/ DWORD SpellID; 
/*0x04*/ BYTE RequiredLevel; 
/*0x05*/ BYTE EffectType; 
/*0x06*/ BYTE Unknown[2]; 
/*0x08*/ DWORD Unknown0x08;
/*0x0c*/ DWORD Unknown0x0c;
} ITEMSPELLS, *PITEMSPELLS; 

typedef struct _ITEMINFO {
/*0x000*/ CHAR Name[ITEM_NAME_LEN];
/*0x040*/ CHAR LoreName[LORE_NAME_LEN];
/*0x090*/ CHAR IDFile[0x20];
/*0x0b0*/ DWORD ItemNumber;
/*0x0b4*/ DWORD EquipSlots;
/*0x0b8*/ DWORD Cost;
/*0x0bc*/ DWORD IconNumber;
/*0x0c0*/ BYTE Unknown0x0c0[0x11];
/*0x0d1*/ BYTE Weight;
/*0x0d2*/ BYTE NoRent;
/*0x0d3*/ BYTE NoDrop; // 0=can drop (and place in bank), 1=no drop, (2=no bank)
/*0x0d4*/ BYTE Size;
/*0x0d5*/ BYTE Type;
/*0x0d6*/ BYTE TradeSkills;
/*0x0d7*/ BYTE Unknown0x0d7;
/*0x0d8*/ BYTE Lore;
/*0x0d9*/ BYTE PendingLore;
/*0x0da*/ BYTE Artifact;
/*0x0db*/ BYTE Summoned;
/*0x0dc*/ BYTE Unknown0x0dc[0x3];
/*0x0df*/ BYTE SvCold;
/*0x0e0*/ BYTE SvFire;
/*0x0e1*/ BYTE SvMagic;
/*0x0e2*/ BYTE SvDisease;
/*0x0e3*/ BYTE SvPoison;
/*0x0e4*/ BYTE STR;
/*0x0e5*/ BYTE STA;
/*0x0e6*/ BYTE AGI;
/*0x0e7*/ BYTE DEX;
/*0x0e8*/ BYTE CHA;
/*0x0e9*/ BYTE INT;
/*0x0ea*/ BYTE WIS;
/*0x0eb*/ BYTE Skill;  //is this right?
/*0x0ec*/ DWORD HP;
/*0x0f0*/ DWORD Mana;
/*0x0f4*/ DWORD AC;
/*0x0f8*/ DWORD Unknown0x0f8;   // New value added with DoN expansion
/*0x0fc*/ DWORD SkillModValue;
/*0x100*/ DWORD BaneDMGRace;
/*0x104*/ DWORD BaneDMGBodyType;
/*0x108*/ DWORD RequiredLevel;
/*0x10c*/ DWORD InstrumentType;
/*0x110*/ DWORD InstrumentMod;
/*0x114*/ DWORD Classes;
/*0x118*/ DWORD Races;
/*0x11c*/ DWORD Diety;
/*0x120*/ BYTE Unknown0x11c[0x4];
/*0x124*/ DWORD Unknown0x120;
/*0x128*/ BYTE SkillModType;
/*0x129*/ BYTE BaneDMGBodyTypeValue;
/*0x12a*/ BYTE BaneDMGRaceValue;
/*0x12b*/ BYTE Magic;
/*0x12c*/ BYTE Light;
/*0x12d*/ BYTE Delay;
/*0x12e*/ BYTE RecommendedLevel;
/*0x12f*/ BYTE RecommendedSkill;
/*0x130*/ BYTE DmgBonusType;
/*0x131*/ BYTE DmgBonusVal;
/*0x132*/ BYTE Range;
/*0x133*/ BYTE Damage;
/*0x134*/ BYTE ItemType;
/*0x135*/ BYTE Material;
/*0x136*/ BYTE Unknown0x132;
/*0x137*/ BYTE Unknown0x133;
/*0x138*/ DWORD AugSlot1;
/*0x13c*/ DWORD AugSlot1_Unkown;
/*0x140*/ DWORD AugSlot2;
/*0x144*/ DWORD AugSlot2_Unkown;
/*0x148*/ DWORD AugSlot3;
/*0x14c*/ DWORD AugSlot3_Unkown;
/*0x150*/ DWORD AugSlot4;
/*0x154*/ DWORD AugSlot4_Unkown;
/*0x158*/ DWORD AugSlot5;
/*0x15c*/ DWORD AugSlot5_Unkown;
/*0x160*/ DWORD AugType;
/*0x164*/ DWORD AugRestrictions;
/*0x168*/ DWORD LDTheme;
/*0x16c*/ DWORD LDCost;
/*0x170*/ DWORD LDType;
/*0x174*/ BYTE Unknown0x15c[4];
/*0x178*/ DWORD FactionModType[0x4];
/*0x188*/ DWORD FactionModValue[0x4];
/*0x198*/ BYTE CharmFile[0x20];
/*0x1b8*/ FLOAT QuestValue;
/*0x1bc*/ struct _ITEMSPELLS Clicky;
/*0x1cc*/ struct _ITEMSPELLS Proc;
/*0x1dc*/ struct _ITEMSPELLS Worn;
/*0x1ec*/ struct _ITEMSPELLS Focus;
/*0x1fc*/ struct _ITEMSPELLS Scroll;
/*0x20c*/ DWORD Unknown0x1e0;
/*0x210*/ DWORD Unknown0x1e4;
/*0x214*/ DWORD ProcRate;
/*0x218*/ DWORD CombatEffects;
/*0x21c*/ DWORD Shielding;
/*0x220*/ DWORD StunResist;
/*0x224*/ DWORD DoTShielding;
/*0x228*/ DWORD StrikeThrough;
/*0x22c*/ DWORD DmgBonusSkill; // SkillMinDamageMod;
/*0x230*/ DWORD DmgBonusValue; // MinDamageMod;
/*0x234*/ DWORD SpellShield;
/*0x238*/ DWORD Avoidance;
/*0x23c*/ DWORD Accuracy;
/*0x240*/ DWORD CharmFileID;
/*0x244*/ DWORD CastTime;
union{
/*0x248*/ DWORD MaxCharges; // Also has something to do with item stacking
/*0x248*/ DWORD Stackable;
};
/*0x24c*/ BYTE BookType; // 0=note, !0=book
/*0x24d*/ BYTE BookLang;
/*0x24e*/ CHAR BookFile[0x1e];
/*0x26c*/ BYTE Combine;
/*0x26d*/ BYTE Slots;
/*0x26e*/ BYTE SizeCapacity;
/*0x26f*/ BYTE WeightReduction;
/*0x270*/ DWORD Favor; // Tribute Value
/*0x274*/ DWORD GuildFavor;
/*0x278*/ DWORD Unknown0x24c;
/*0x27c*/ DWORD Endurance;
/*0x280*/ DWORD Attack;     
/*0x284*/ DWORD HPRegen;
/*0x28c*/ DWORD ManaRegen;
/*0x290*/ DWORD Haste;
/*0x294*/ DWORD DamShield;
/*0x298*/ DWORD Recast;
/*0x29c*/ DWORD TimerID;
/*0x2a0*/ DWORD SolventNeeded; //ID# of Solvent (Augs only)
/*0x2a4*/ DWORD Unknown0x274;
/*0x2a8*/ DWORD Unknown0x278;
/*0x2ac*/ DWORD Attuneable;
/*0x2b0*/ BYTE Unknown0x280[0x14];
/*0x2c4*/
} ITEMINFO, *PITEMINFO;


// 9-17-05 Size 0xa8
typedef struct _CONTENTS {
/*0x00*/  BYTE    Unknown0x0[0x1c];
/*0x1c*/  struct _ITEMINFO *Item;
   union {
/*0x20*/  struct _CONTENTS *Contents[0x0a]; //addresses to whats inside the bag if its a bag
/*0x20*/  struct _ITEMINFO *Augments[0x0a]; //Only 1-5 are actually used (for now)
   };
/*0x48*/  DWORD   StackCount;
/*0x5c*/  DWORD   ItemSlot;// slotid for Player Items
/*0x4c*/  BYTE    Unknown0x4c[0x8];
/*0x58*/  DWORD   Charges;
/*0x5C*/  BYTE    Unknown0x5c[0x24];
/*0x80*/  DWORD   ItemSlot2;// slotid for Merchant Items
/*0x84*/  DWORD   Unknown0x88;
/*0x88*/  DWORD   Price; //price a player vendor set the item at
/*0x8c*/  DWORD   Open;
/*0x90*/  BYTE    Unknown0x94[0x14];
/*0xa4*/   
} CONTENTS, *PCONTENTS;

// 5-11-2005 Amadeus
// Size 0x14
typedef struct _SPELLBUFF {
/*0x00*/    BYTE      Unknown0x00;
/*0x01*/    BYTE      Level;
/*0x02*/    CHAR      Modifier; // bard song modifier, divide by 10 to get 2.8 etc
/*0x03*/    CHAR      DamageShield;  // maybe.. I've noticed this is -1 on a lot of ds's.
/*0x04*/    LONG      SpellID;// -1 or 0 for no spell..
/*0x08*/    DWORD     Duration;
/*0x0c*/    DWORD     DamageAbsorbRemaining;  // Melee or Spellshield type
/*0x10*/    DWORD     Unknown0x10;
/*0x14*/
} SPELLBUFF, *PSPELLBUFF;

// 12-23-2003   TheColonel
typedef struct _INVENTORY { 
/*0x00*/  struct	_CONTENTS* Charm; 
/*0x04*/  struct	_CONTENTS* LeftEar; 
/*0x08*/  struct	_CONTENTS* Head; 
/*0x0c*/  struct	_CONTENTS* Face; 
/*0x10*/  struct	_CONTENTS* RightEar; 
/*0x14*/  struct	_CONTENTS* Neck; 
/*0x18*/  struct	_CONTENTS* Shoulders; 
/*0x1c*/  struct	_CONTENTS* Arms; 
/*0x20*/  struct	_CONTENTS* Back; 
/*0x24*/  struct	_CONTENTS* LeftWrist; 
/*0x28*/  struct	_CONTENTS* RightWrist; 
/*0x2c*/  struct	_CONTENTS* Range; 
/*0x30*/  struct	_CONTENTS* Hands; 
/*0x34*/  struct	_CONTENTS* Primary; 
/*0x38*/  struct	_CONTENTS* Secondary; 
/*0x3c*/  struct	_CONTENTS* LeftFinger; 
/*0x40*/  struct	_CONTENTS* RightFinger; 
/*0x44*/  struct	_CONTENTS* Chest; 
/*0x48*/  struct	_CONTENTS* Legs; 
/*0x4c*/  struct	_CONTENTS* Feet; 
/*0x50*/  struct	_CONTENTS* Waist; 
/*0x54*/  struct	_CONTENTS* Ammo; 
/*0x58*/  struct	_CONTENTS* Pack[0x8]; 
} INVENTORY, *PINVENTORY; 

#define NUM_ALT_ABILITIES_ARRAY   0x1F7 
#define NUM_ALT_ABILITIES   1500            // GetAltAbility require an index
                                            // which is really a hash table 
                                            // index.  the index is divided
                                            // with 0x1f7 and the remainder
                                            // is used the hash table slot.
                                            // the slot is walked to find the
                                            // entry corresponding to the 
                                            // original index (before the
                                            // divide

//these two will merge when i get a chance
#define AA_CHAR_MAX         0xF5
#define AA_CHAR_MAX_REAL    0xF0

typedef struct _AALIST { 
/*0x0*/   DWORD		AAIndex;
/*0x4*/   DWORD		PointsSpent;
} AALIST, *PAALIST;

#define      NUM_BANK_SLOTS         0x12
#define      NUM_BOOK_SLOTS         0x200
#define      NUM_COMBAT_ABILITIES   0x64
#define ExactLocation		 0

typedef struct _EQC_INFO {
/* 0x0000 */    DWORD   minus4;
/* 0x0004 */    DWORD   stuff_offset;
} EQC_INFO, *PEQC_INFO;

typedef struct _CI_INFO {
/* 0x0000 */    DWORD   minus8;
/* 0x0004 */    DWORD   stuff_offset;
/* 0x0008 */    DWORD   Unknown0x8;    // 2000
/* 0x000c */    DWORD   Unknown0xc;    // 2500
/* 0x0010 */    DWORD   Unknown0x10;   // 3000
/* 0x0014 */    DWORD   Unknown0x14;   // 4000
/* 0x0018 */    DWORD   Unknown0x18;   // 10000
} CI_INFO, *PCI_INFO;

typedef struct _CI2_INFO {
/* 0x0000 */    DWORD   Unknown0x0;
/* 0x0004 */    struct  _CHARINFO2* pCharInfo2;
/* 0x0008 */    struct  _CHARINFO2* pCharInfo3;
/* 0x000c */    BYTE    Unknown0xc[0x14];
/* 0x0010 */    void   *Unknown0x10[0x10];
/* 0x0060 */
} CI2_INFO, *PCI2_INFO;

typedef struct _CHARINFO {
/* 0x0000 */   void      *vtable1;
/* 0x0004 */   void      *punknown;
/* 0x0008 */   struct     _CI_INFO* charinfo_info;
/* 0x000c */   BYTE       Unknown0xc[0xce4];
/* 0x0cf0 */   struct     _CONTENTS*   Bank[NUM_BANK_SLOTS];
/* 0x0d38 */   BYTE       unknown0xd38[0xd4];
/* 0x0e0c */   DWORD      GuildID;
/* 0x0e10 */   BYTE       Unknown0xe10[0x18];
/* 0x0e28 */   DWORD      AAExp;
/* 0x0e2c */   BYTE       Unknown0xe2c;
/* 0x0e2d */   BYTE       PercentEXPtoAA;
/* 0x0e2e */   BYTE       Unknown0xe2e[0x4a];
/* 0x0e78 */   DWORD      CareerFavor;
/* 0x0e7c */   DWORD      Unknown0xe7c;
/* 0x0e80 */   DWORD      CurrFavor;
/* 0x0e84 */   BYTE       Unknown0xe84[0xc];
/* 0x0e90 */   DOUBLE     GroupLeadershipExp;
/* 0x0e98 */   DOUBLE     RaidLeadershipExp;
/* 0x0ea0 */   DWORD      GroupLeadershipPoints;
/* 0x0ea4 */   DWORD      RaidLeadershipPoints;
/* 0x0ea8 */   BYTE       Unknown0xea8[0x708];
/* 0x15b0 */   CHAR       GroupMember[0x6][0x40];
/* 0x1730 */   CHAR       GroupLeader[0x40];
/* 0x1770 */   BYTE       Unknown0x1770[0x2a0];
/* 0x1a10 */   DWORD      Exp;
/* 0x1a14 */   BYTE       Unknown0x1a14[0xa864];
/* 0xc278 */   BYTE       Unknown0xc278[0x8];
/* 0xc280 */   void      *vtable2;
/* 0xc284 */   struct     _EQC_INFO* eqc_info;
/* 0xc288 */   struct     _SPAWNINFO*  pSpawn;
/* 0xc28c */   DWORD      Unknown0xc284;
/* 0xc290 */   DWORD      STR;
/* 0xc294 */   DWORD      STA;
/* 0xc298 */   DWORD      CHA;
/* 0xc29c */   DWORD      DEX;
/* 0xc2a0 */   DWORD      INT;
/* 0xc2a4 */   DWORD      AGI;
/* 0xc2a8 */   DWORD      WIS;
/* 0xc2ac */   DWORD      AC;
/* 0xc2b0 */   DWORD      SaveMagic;
/* 0xc2b4 */   DWORD      SaveCold;
/* 0xc2b8 */   DWORD      SaveFire;
/* 0xc2bc */   DWORD      SavePoison;
/* 0xc2c0 */   DWORD      SaveDisease;
/* 0xc2c4 */   DWORD      Unknown0xc2bc;
/* 0xc2c8 */   DWORD      CurrWeight;
/* 0xc2cc */   DWORD      Unknown0xc2c4;
/* 0xc2d0 */   DWORD      HPBonus;
/* 0xc2d4 */   DWORD      ManaBonus;
/* 0xc2d8 */   DWORD      EnduranceBonus;
/* 0xc2dc */   DWORD      CombatEffectsBonus;
/* 0xc2e0 */   DWORD      ShieldingBonus;
/* 0xc2e4 */   DWORD      SpellShieldBonus;
/* 0xc2e8 */   DWORD      AvoidanceBonus;
/* 0xc2ec */   DWORD      AccuracyBonus;
/* 0xc2f0 */   DWORD      StunResistBonus;
/* 0xc2f4 */   DWORD      StrikeThroughBonus;
/* 0xc2f8 */   DWORD      SkillMinDamageModBonus[0x9];
/* 0xc31c */   DWORD      Unknown0xc314;
/* 0xc320 */   DWORD      DoTShieldBonus;
/* 0xc324 */   DWORD      AttackBonus;
/* 0xc328 */   DWORD      HPRegenBonus;
/* 0xc32c */   DWORD      ManaRegenBonus;
/* 0xc330 */   DWORD      Unknown0xc328;
/* 0xc334 */   DWORD      DamageShieldBonus;
/* 0xc338 */   DWORD      AttackSpeed;
/* 0xc33c */   BYTE       Unknown0xc330[0x1c];
/* 0xc358 */   _CONTENTS  *ActiveGuildTribute[0xc];
/* 0xc388 */   struct     _CI2_INFO* pCI2;
/* 0xc38c */   DWORD      Unknown0xc38c;
/* 0xc390 */   BYTE       languages[0x20];
/* 0xc3b0 */   BYTE       Unknown0xc3b0[0x10];
/* 0xc3c0 */   CHAR       Name[0x40];
/* 0xc400 */   CHAR       Lastname[0x20];
/* 0xc420 */   BYTE       Unknown0xc420[0x60];
/* 0xc480 */   DWORD      Stunned;
/* 0xc484 */   WORD       zoneId;
/* 0xc486 */   WORD       instance;
/* 0xc488 */   DWORD      standstate;
/* 0xc48c */   BYTE       Unknown0xc489[0x24];
/* 0xc4b0 */   DWORD      BankSharedPlat;
/* 0xc4b4 */   DWORD      BankSharedGold;
/* 0xc4b8 */   DWORD      BankSharedSilver;
/* 0xc4bc */   DWORD      BankSharedCopper;
/* 0xc4c0 */   DWORD      BankPlat;
/* 0xc4c4 */   DWORD      BankGold;
/* 0xc4c8 */   DWORD      BankSilver;
/* 0xc4cc */   DWORD      BankCopper;
/* 0xc4d0 */
} CHARINFO, *PCHARINFO;


typedef struct  _CHARINFO2 {
/* 0x0000 */   BYTE       Unknown0x0[0x10];
union {
/* 0x0010 */   struct     _INVENTORY   Inventory;
/* 0x0010 */   struct     _CONTENTS*   InventoryArray[0x1e];
};
/* 0x0088 */   struct     _CONTENTS*   Cursor;
/* 0x008c */   BYTE       Unknown0x8c[0x14];
/* 0x00a0 */   struct     _SPELLBUFF   Buff[0x19];
/* 0x0294 */   struct     _SPELLBUFF   ShortBuff[0x23];
/* 0x0550 */   BYTE       Unknown0x550[0x1e0];
/* 0x0730 */   DWORD      SpellBook[NUM_BOOK_SLOTS];
/* 0x0f30 */   DWORD      MemorizedSpells[0x10];
/* 0x0f70 */   DWORD      Skill[0x64];
/* 0x1100 */   BYTE       Unknown0x1100[0x94];
/* 0x1194 */   DWORD      Gender;
/* 0x1198 */   DWORD      Race;
/* 0x119c */   DWORD      Class;
/* 0x11a0 */   DWORD      Unknown0x11a0;
/* 0x11a4 */   DWORD      Level;
/* 0x11a8 */   DWORD      Mana;
/* 0x11ac */   DWORD      Endurance;
/* 0x11b0 */   DWORD      BaseHP;
/* 0x11b4 */   DWORD      BaseSTR;
/* 0x11b8 */   DWORD      BaseSTA;
/* 0x11bc */   DWORD      BaseCHA;
/* 0x11c0 */   DWORD      BaseDEX;
/* 0x11c4 */   DWORD      BaseINT;
/* 0x11c8 */   DWORD      BaseAGI;
/* 0x11cc */   DWORD      BaseWIS;
/* 0x11d0 */   DWORD      Unknown0x11d0;
/* 0x11d4 */   DWORD      Plat;
/* 0x11d8 */   DWORD      Gold;
/* 0x11dc */   DWORD      Silver;
/* 0x11e0 */   DWORD      Copper;
/* 0x11e4 */   DWORD      CursorPlat;
/* 0x11e8 */   DWORD      CursorGold;
/* 0x11ec */   DWORD      CursorSilver;
/* 0x11f0 */   DWORD      CursorCopper;
/* 0x11f4 */   BYTE       Unknown0x11f4[0x24];
/* 0x1218 */   DWORD      thirstlevel;
/* 0x121c */   DWORD      hungerlevel;
/* 0x1220 */   BYTE       Unknown0x1220[0x6c];
/* 0x128c */   DWORD      ZoneBoundID;
/* 0x1290 */   FLOAT      ZoneBoundX;
/* 0x1294 */   FLOAT      ZoneBoundY;
/* 0x1298 */   FLOAT      ZoneBoundZ;
/* 0x129c */   FLOAT      ZoneBoundHeading;
/* 0x12a0 */   BYTE       Unknown0x12a0[0xa8];
/* 0x1348 */   AALIST     AAList[AA_CHAR_MAX_REAL];
/* 0x1ac8 */   BYTE       Unknown0x1ac8[0x3aec-0x1ac8];
/* 0x3aec */   DWORD      CombatAbilities[NUM_COMBAT_ABILITIES];
/* 0x3c7c */   DWORD      Unknown0x3c7c[0xa];
/* 0x3ca4 */   DWORD      CombatAbilityTimes[NUM_COMBAT_ABILITIES];
/* 0x3e34 */   BYTE       Unknown0x3e34[0x1A28];
/* 0x585c */   DWORD      Deity;
/* 0x5860 */   DWORD      Unknown0x5830;
/* 0x5864 */   DWORD      Drunkenness;
/* 0x5868 */   BYTE       Unknown0x5838[8];
/* 0x5870 */   DWORD      AAPoints;
/* 0x5874 */   BYTE       Unknown0x5844[0x5dc8];
/* 0xb63c */   DWORD      AAPointsSpent;
/* 0xb640 */   BYTE       Unknown0xb610[0x1c];
/* 0xb65c */
} CHARINFO2, *PCHARINFO2;


typedef struct _MODELINFONAME {
/*0x00*/    DWORD Unknown0000;
/*0x04*/    DWORD Unknown0004;
/*0x08*/    PCHAR Name;
/*0x0c*/
} MODELINFONAME, *PMODELINFONAME;

typedef struct _MODELINFO_GENERIC {
/*0x00*/    DWORD Type;
/*0x04*/    DWORD Unknown0x04;
/*0x08*/    DWORD Unknown0x08;
/*0x0c*/    DWORD Unknown0x0c;
/*0x10*/    DWORD Unknown0x10;
/*0x14*/
} MODELINFO_GENERIC, *PMODELINFO_GENERIC;

typedef struct _MODELINFO_48 {
/*0x00*/    struct _MODELINFO_GENERIC Header;
/*0x14*/    FLOAT Float1;
/*0x18*/    FLOAT Float2;
/*0x1c*/    FLOAT Float3;
/*0x20*/    struct _MODELINFONAME *pModelName;
/*0x24*/
} MODELINFO_48, *PMODELINFO_48;

typedef struct _MODELINFO_51 {
/*0x00*/    struct _MODELINFO_GENERIC Header;
/*0x14*/    struct _MODELINFONAME *pFontName;
/*0x18*/    PCHAR LabelText;
/*0x1c*/
} MODELINFO_51, *PMODELINFO_51;

// 10/09/2003 build      plazmic
// 12/24/2003 verified   Amadeus
typedef struct _MODELINFO {
/*0x00*/    DWORD   Unknown;
/*0x04*/    PCHAR NameDAG;
/*0x08*/    struct _MODELINFO_GENERIC *pModelInfo;
/*0x0c*/    struct _MODELINFO *pNextInChain;
/*0x10*/    PVOID pUnknown;
/*0x14*/    struct _MODELINFONAME *pTrack1;
/*0x18*/    struct _MODELINFONAME *pTrack2;
   //moredata
} MODELINFO, *PMODELINFO;

// 4/30/2003 build      eqmule
typedef struct _CAMERAINFO {
/*0x00*/   DWORD Unknown0x00;
/*0x04*/   DWORD Unknown0x04;
/*0x08*/   BYTE Unknown0x08[0x8];
/*0x10*/   FLOAT Y;
/*0x14*/   FLOAT X;
/*0x18*/   FLOAT Z;
/*0x1c*/   FLOAT LightRadius;
/*0x20*/
} CAMERAINFO, *PCAMERAINFO;

// unknown size
typedef struct _ACTOREX {
/*0x00*/   BYTE Unknown0x00;
} ACTOREX, *PACTOREX;

// actual size 0x10c0  5-11-2005 
typedef struct _ACTORINFO { 
/*0x000*/ struct       _ACTOREX *pActorEx; 
/*0x004*/ DWORD        T3D_POINTLIGHT; 
/*0x008*/ CHAR         ActorDef[0x40]; 
/*0x048*/ FLOAT        Z;            // Z coordinates for the floor where standing 
/*0x04c*/ BYTE         Unknown0x04c[0x4]; 
/*0x050*/ DWORD        TimeStamp;      
/*0x054*/ DWORD        Unknown0x054;  
/*0x058*/ DWORD        LastTick;    
/*0x05c*/ BYTE         Unknown0x05c[0x80-0x5c]; 
/*0x080*/ FLOAT        BobbingAmount; 
/*0x084*/ BYTE         Unknown0x084[0xa0-0x84]; 
/*0x0a0*/ BYTE		   UnderWater;
/*0x0a1*/ BYTE		   Unknown0x0a1[0x0ae-0x0a1];
/*0x0ae*/ BYTE		   FeetWet;
/*0x0af*/ BYTE		   Unknown0x0af[0x0d8-0x0af];
/*0x0d8*/ DWORD        SpellETA;      //Calculated TimeStamp when current spell being cast will land. 0 while not casting. 
/*0x0dc*/ BYTE         Unknown0x0dc[0x44]; 
/*0x120*/ DWORD        FishingETA;      // EQMisc__SteveGetTime 
/*0x124*/ BYTE         Unknown0x124[0x8]; 
/*0x12c*/ VOID         *FaceRelatedActorStruct; 
/*0x130*/ DWORD        Unknown0x0130; 
/*0x134*/ DWORD        Animation; 
/*0x138*/ DWORD        Unknown0x138; 
/*0x13c*/ BYTE         Unknown0x13c[0x16]; 
/*0x152*/ BYTE         FishingEvent;   // 0=not fishing, 1=some event, 2-6=some other event 
/*0x153*/ BYTE         Unknown0x153[0x9]; 
/*0x15c*/ struct       _SPAWNINFO *Mount; //NULL if no mount present 
/*0x160*/ BYTE         Unknown0x0160[0xc]; 
/*0x16c*/ DWORD        PetID;  
/*0x170*/ struct       _SPAWNINFO *pGroupAssistNPC[1]; 
/*0x174*/ struct       _SPAWNINFO *pRaidAssistNPC[3]; 
/*0x180*/ struct       _SPAWNINFO *pGroupMarkNPC[3]; 
/*0x18c*/ struct       _SPAWNINFO *pRaidMarkNPC[3]; 
/*0x198*/ struct       _SPAWNINFO *pTargetOfTarget; 
/*0x19c*/ BYTE         Unknown0x19c[0xd90]; 
/*0xf2c*/ struct       _MODELINFO *Model[0x11];  // 0x11 is the correct number, or are there more? 
/*0xf70*/ BYTE         Unknown0xf70[0x1c]; 
/*0xf8c*/ DWORD        InvitedToGroup; // 1=currently invited to group 
/*0xf90*/ BYTE         Unknown0xf90[0x8]; 
/*0xf98*/ DWORD        CastingSpellID;      // -1 = not casting a spell 
/*0xf9c*/ DWORD        CastingAnimation;  //unsure, FF for not casting, low numbers while casting 
/*0xfa0*/ BYTE         Unknown0xfa0[0x48]; 
/*0xfe8*/struct        _SPAWNINFO *WhoFollowing; // NULL if autofollow off 
/*0xfec*/ BYTE         Unknown0xfec[0xc]; 
/*0xff8*/ FLOAT        CastingY; 
/*0xffc*/ FLOAT        CastingX; 
/*0x1000*/ BYTE        Unknown0x1000[0x6c];
/*0x106c*/ DWORD       Trader;            //0=normal 1=trader 
/*0x1070*/ BYTE        Unknown0x1070[0x50]; 
/*0x10c0*/ 
} ACTORINFO, *PACTORINFO; 


#define MODEL_LABEL         0 
#define MODEL_LABELINFO     1
#define MODEL_NULL2         2
#define MODEL_HELD_R        3
#define MODEL_HELD_L        4
#define MODEL_SHIELD        5
#define MODEL_NULL6         6

/*
//Work in progress...
#define MODEL_HEAD			0x00
#define MODEL_HEAD_POINT	0x01
#define MODEL_NULL_1		0x02
#define MODEL_HELD_R		0x03
#define MODEL_HELD_L		0x04
#define MODEL_SHIELD		0x05
#define MODEL_NULL_2		0x06
#define MODEL_TUNIC			0x07
#define MODEL_HAIR			0x08
#define MODEL_BEARD			0x09
#define MODEL_CHEST			0x0a
#define MODEL_GLOVES		0x0b
#define MODEL_GLOVES2		0b0c
*/

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

// 10-22-2003 Lax
typedef struct _EQUIPMENT {
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
} EQUIPMENT, *PEQUIPMENT;

// sizeof(_SPAWNINFO) is 0x348 (5/11/2005) 
typedef struct _SPAWNINFO { 
/* 0x0000 */   BYTE    Unknown0x0; 
/* 0x0001 */   CHAR    Lastname[0x27];  // // Surname on PCs, Newbie Tag on NPCs 
/* 0x0028 */   DWORD     Unknown0x028[0x2];
/* 0x0030 */   FLOAT     Y; 
/* 0x0034 */   FLOAT     X; 
/* 0x0038 */   FLOAT     Z; 
/* 0x003c */   FLOAT     SpeedY; 
/* 0x0040 */   FLOAT     SpeedX; 
/* 0x0044 */   FLOAT     SpeedZ; 
/* 0x0048 */   FLOAT     SpeedRun; 
/* 0x004c */   FLOAT     Heading; 
/* 0x0050 */   FLOAT     field_50; 
/* 0x0054 */   DWORD     field_54; 
/* 0x0058 */   DWORD     field_58; 
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
} SPAWNINFO, *PSPAWNINFO;


#define STANDSTATE_STAND            0x64
#define STANDSTATE_BIND             0x69
#define STANDSTATE_SIT              0x6E
#define STANDSTATE_DUCK             0x6F
#define STANDSTATE_FEIGN            0x73
#define STANDSTATE_DEAD             0x78

#define MONITOR_SPAWN_X             1
#define MONITOR_SPAWN_Y             2
#define MONITOR_SPAWN_Z             4
#define MONITOR_SPAWN_HEADING       8
#define MONITOR_SPAWN_SPEEDRUN      16
#define MONITOR_SPAWN_HPCURRENT     32

typedef struct _SPAWNMONITORINFO {
    WORD SpawnID;
    FLOAT Y;
    FLOAT X;
    FLOAT Z;
    FLOAT Heading;
    FLOAT SpeedRun;
    DWORD HPCurrent;
    DWORD MonitorMask;
} SPAWNMONITORINFO, *PSPAWNMONITORINFO;

typedef struct _EQSWITCH {
/*0x00*/	DWORD		Unknown0x0[0x2];
/*0x08*/	DWORD		UnknownData0x08;
/*0x0c*/	DWORD		UnknownData0x0c;
/*0x10*/	DWORD		Unknown0x10[0x2];
/*0x18*/	DWORD		UnknownData0x18;
/*0x1c*/	DWORD		Unknown0x1c;
/*0x20*/	DWORD		UnknownData0x20;
/*0x24*/	FLOAT		Y;
/*0x28*/	FLOAT		X;
/*0x2c*/	FLOAT		Z;
/*0x30*/	BYTE		Unknown0x30[0x58]; //A lot of data here.
/*0x88*/	FLOAT		Y2;
/*0x8c*/	FLOAT		X2;
/*0x90*/	FLOAT		Z2;
/*0x94*/	DWORD		Unknown0x94;
/*0x98*/	FLOAT		Heading;
/*0x9c		Data Continues... */
} EQSWITCH, *PEQSWITCH;

typedef struct _DOOR { 
/*0x00*/   BYTE Unknown0x00; 
/*0x01*/   BYTE ID; 
/*0x02*/   CHAR Name[0x0b]; 
/*0x0d*/   BYTE Unknown0x0d[0x17]; 
/*0x24*/   FLOAT DefaultY; 
/*0x28*/   FLOAT DefaultX; 
/*0x2c*/   FLOAT DefaultZ; 
/*0x30*/   FLOAT DefaultHeading; 
/*0x34*/   FLOAT DoorAngle; 
/*0x38*/   FLOAT Y; 
/*0x3c*/   FLOAT X; 
/*0x40*/   FLOAT Z; 
/*0x44*/   FLOAT Heading; 
/*0x48*/   BYTE Unknown0x48[0x3c]; 
/*0x84*/   PEQSWITCH pSwitch; // (class EQSwitch *) 
/*0x88*/ 
} DOOR, *PDOOR; 

// 7-21-2003    Stargazer
typedef struct _DOORTABLE {
/*0x000*/   DWORD NumEntries;
/*0x004*/   PDOOR pDoor[0x0FF];
/*0x400*/
} DOORTABLE, *PDOORTABLE;

// actual size 0x5c  2-18-2004 lax
// 8-26-2003 mule
typedef struct _GROUNDITEM {
/*0x00*/ struct _GROUNDITEM *pPrev;
/*0x04*/ struct _GROUNDITEM *pNext;
/*0x08*/ DWORD ID;
/*0x0C*/ DWORD DropID;
/*0x10*/ DWORD Unknown0x10;
/*0x14*/ PEQSWITCH pSwitch; // (class EQSwitch *)
/*0x18*/ DWORD Unknown0x18;
/*0x1C*/ FLOAT Heading;
/*0x20*/ FLOAT Z;
/*0x24*/ FLOAT X;
/*0x28*/ FLOAT Y;
/*0x2C*/ CHAR Name[0x18];
/*0x44*/
} GROUNDITEM, *PGROUNDITEM;

#define   MAX_ZONES                                    0x15B   
extern    PCHAR szZoneExpansionName[];     //defined in LibEQ_Utilities.cpp

typedef struct _ZONELIST { 
/*0x000*/   DWORD   Header; 
/*0x004*/   DWORD   Unknown0x4;         //pointer to something? 
/*0x008*/   DWORD   Expansion;          // szZoneExpansionName[] 
/*0x00c*/   WORD    Id; 
/*0x00e*/   WORD    Instance; 
/*0x010*/   CHAR    ShortName[0x81]; 
/*0x091*/   CHAR    LongName[0x103]; 
/*0x194*/   DWORD   Unknown0x194; 
/*0x198*/   DWORD   Flags;              // (Flags & 0x100000) = HasMinLevel, 0x4000 no air, 0x2 newbie zone, 0x20 no bind, 0x400000 something 
/*0x19c*/   DWORD   Unknown0x19c; 
/*0x1a0*/   DWORD   Id2;                // This is Id+2242 
/*0x1a4*/   DWORD   PoPValue;           // This has something to do with PoP zones. 
/*0x1a8*/   DWORD   MinLevel;           // Minimum level to access 
/*0x1ac*/   WORD    Unknown0x1ac;          
/*0x1ae*/   BYTE    Unknown0x1ae[0x6];    
/*0x1b4*/   DWORD   Unknown0x1b4; 
/*0x1b8*/   DWORD   Unknown0x1b8; 
/*0x1bc*/   DWORD   Unknown0x1bc; 
/*0x1c0      next zone in list*/ 
} ZONELIST, *PZONELIST;

typedef struct _WORLDDATA {
/*0x000*/ PVOID lpvTable;
/*0x004*/ BYTE Hour;
/*0x005*/ BYTE Minute;
/*0x006*/ BYTE Day;
/*0x007*/ BYTE Month;
/*0x008*/ DWORD Year;
/*0x00C*/ BYTE Unknown0x00c[0x10];
/*0x01C*/ PZONELIST ZoneArray[MAX_ZONES];
} WORLDDATA, *PWORLDDATA;

// 5-15-2003    Amadeus (discovered by Lax)
// Actual Size 0x240, old
typedef struct _ZONEINFO {
/*0x000*/   CHAR    CharacterName[0x40];
/*0x040*/   CHAR    ShortName[0x20];
/*0x060*/   CHAR    LongName[0x80];
/*0x0E0*/   CHAR    Unknown0x0e0[0x96];  // <-- this isnt part of zone name, see CEverQuest__CEverQuest
/*0x176*/   BYTE    ZoneType; // (usually FF)
/*0x177*/	ARGBCOLOR FogRed;
/*0x17b*/	ARGBCOLOR FogGreen;
/*0x17f*/	ARGBCOLOR FogBlue;
/*0x183*/   BYTE    Unknown0x183;
/*0x184*/   BYTE	Unknown0x184[0x10];
/*0x194*/   BYTE    Unknown0x194[0x10];
/*0x1a4*/   FLOAT   ZoneGravity;
/*0x1a8*/   BYTE    Unknown0x1a8;
/*0x1a9*/   BYTE    Unknown0x1a9[0x3];
/*0x1ac*/   BYTE    Unknown0x1ac[0x2e];
/*0x1da*/	BYTE	SkyType;	
/*0x1db*/	BYTE	Unknown0x1db[0xd];
/*0x1e8*/   FLOAT   ZoneExpModifier;    //This has been nerfed ..now reads 1.0 for all zones
/*0x1ec*/   FLOAT   Unknown0x1ec[3];
/*0x1f8*/   FLOAT   Ceiling;
/*0x1fc*/   FLOAT   Floor; 
/*0x200*/   FLOAT   MinClip; 
/*0x204*/   FLOAT   MaxClip; 
/*0x208*/   BYTE    Unknown0x208[0x18];
/*0x220*/   BYTE    Unknown0x220[0x20];
/*0x240*/
} ZONEINFO, *PZONEINFO;

#define   TOTAL_SPELL_COUNT				0x2701      // # of spells allocated in memory (5/11/2005 :: 0x7d00/4)
#define   TOTAL_ACTUAL_SPELLS			0x1964      // # of ACTUAL spells in game      (9/14/2004)

// size: 0x7d24 (5/11/2005 :: 0x7d00+0x24)
typedef struct _SPELLMGR {
            BYTE                unknown[0x24];
            struct _SPELL*      Spells[TOTAL_SPELL_COUNT];
} SPELLMGR, *PSPELLMGR;

// Size is 0x268 as of 9/14
// Size is 0x26C as of 2/8
// Size is 0x26C as of 03/03/2005
// Size is 0x26c as of 5/11/2005
// Size is 0x26c as of 9/17/2005
typedef struct _SPELL {
/*0x000*/   DWORD   ID;
/*0x004*/   FLOAT   Range;
/*0x008*/   FLOAT   AERange;
/*0x00c*/   FLOAT   PushBack;
/*0x010*/   BYTE    Unknown0x010[0x04];
/*0x014*/   DWORD   CastTime;
/*0x018*/   DWORD   FizzleTime;
/*0x01c*/   DWORD   RecastTime;
/*0x020*/   DWORD   DurationType;       //DurationFormula on Lucy
/*0x024*/   DWORD   DurationValue1;
/*0x028*/   DWORD   Unknown0x028;
/*0x02c*/   DWORD   Mana;
/*0x030*/   LONG    Base[0x0c];         //Base1-Base12
/*0x060*/   LONG    Base2[0x0c];        //Mostly unused, setting name to Base2 from Lucy for now
/*0x090*/   LONG    Max[0x0c];          //Max1-Max12
/*0x0c0*/   DWORD   ReagentId[0x4];     //ReagentId1-ReagentId4
/*0x0d0*/   DWORD   ReagentCount[0x4];  //ReagentCount1-ReagentCount4
/*0x0e0*/   BYTE    Unknown0x0e0[0x10];
/*0x0f0*/   DWORD   Calc[0x0c];         //Calc1-Calc12
/*0x120*/   DWORD   Attrib[0x0c];       //Attrib1-Attrib12
/*0x150*/   BYTE    Unknown0x150;
/*0x151*/   BYTE    Level[0x10];        // per class.
/*0x161*/   BYTE    Unknown0x161[0x13];
/*0x174*/   DWORD   BookIcon;
/*0x178*/   DWORD   GemIcon;
/*0x17c*/   BYTE    LightType;
/*0x17d*/   BYTE    SpellType;          //0=detrimental, 1=Beneficial, 2=Beneficial, Group Only
/*0x17e*/   BYTE    Unknown0x12a;
/*0x17f*/   BYTE    Resist;             //0=un 1=mr 2=fr 3=cr 4=pr 5=dr 6=chromatic
/*0x180*/   BYTE    TargetType;         // 03=Group v1, 04=PB AE, 05=Single, 06=Self, 08=Targeted AE, 0e=Pet, 28=AE PC v2, 29=Group v2
/*0x181*/   BYTE    FizzleAdj;
/*0x182*/   BYTE    Skill;
/*0x183*/   BYTE    Location;           // 01=Outdoors, 02=dungeons, ff=Any
/*0x184*/   BYTE    Environment;
/*0x185*/   BYTE    TimeOfDay;          // 0=any, 1=day only, 2=night only
/*0x186*/   BYTE    CastingAnim;
/*0x187*/   BYTE    TargetAnim;
/*0x188*/   BYTE    Unknown0x188[0x4];
/*0x18c*/   DWORD   DescriptionNumber;
/*0x190*/   BYTE    Uninterruptable;    // 00=Interruptable, 01=Uninterruptable
/*0x191*/   BYTE    Unknown0x191;
/*0x192*/   BYTE    Deletable;
/*0x193*/   BYTE    Unknown0x193;
/*0x194*/   DWORD   Autocast;           // SpellID of spell to instacast on caster when current spell lands on target
/*0x198*/   BYTE    Unknown0x198;
/*0x199*/   BYTE    Unknown0x199;
/*0x19a*/   BYTE    Unknown0x19a;
/*0x19b*/   BYTE    DurationWindow;     // 0=Long, 1=Short
/*0x19c*/   DWORD   Unknown144;         // Unknown144 from lucy
/*0x1a0*/   DWORD   Unknown145;         // Unknown145 from lucy
/*0x1a4*/   BYTE    Unknown0x1a4[0x1c];
/*0x1c0*/   DWORD   CARecastTimerID;    // ID of combat timer, i think.
/*0x1c4*/   DWORD   Unknown0x1c4;
/*0x1c8*/   BYTE    Unknown0x1c8[0x18];
/*0x1e0*/   DWORD   PvPResistBase;
/*0x1e4*/   DWORD   PvPResistCalc;
/*0x1e8*/   DWORD   PvPResistCap;
/*0x1ec*/   DWORD   Unknown182;         // Unknown182 from Lucy
/*0x1f0*/   DWORD   Unknown183;         // Unknown183 from Lucy
/*0x1f4*/   DWORD   Unknown0x1f4;
/*0x1f8*/   DWORD   Unknown0x1f8;
/*0x1fc*/   BYTE    Unknown0x1fc;
/*0x1fd*/   BYTE    CanMGB;
/*0x1fe*/   BYTE    Unknown0x1fe[0xa];
/*0x208*/   CHAR    *Name;
/*0x20c*/   CHAR    *Target;
/*0x210*/   CHAR    *Extra;             // This is 'Extra' from Lucy (portal shortnames etc)
/*0x214*/   CHAR    *Unknown0x214;
/*0x218*/   CHAR    *Unknown0x218;
/*0x21c*/   CHAR    *CastOnYou;
/*0x220*/   CHAR    *CastOnAnother;
/*0x224*/   CHAR    *WearOff;
/*0x228*/   BYTE    Unknown0x228[0x8];
/*0x230*/   DWORD   Unknown0x230; 
/*0x234*/   DWORD   spaindex;
/*0x238*/   DWORD   Unknown0x238;
/*0x23c*/   DWORD   SpellAnim;
/*0x240*/   DWORD   Unknown0x240;
/*0x244*/   DWORD   Unknown130;
/*0x248*/   DWORD   Unknown0x248;
/*0x24c*/   DWORD   SpellIcon;
/*0x250*/   DWORD   ResistAdj;
/*0x254*/   BYTE    Unknown0x254[0x18];
/*0x26c*/
} SPELL, *PSPELL;


// Size 0x180 4-23-2004 Lax
typedef struct _SKILL {
/*0x000*/   DWORD nName;
/*0x004*/   DWORD ReuseTimer;
/*0x008*/   CHAR  Unknown0x008;
/*0x009*/   CHAR  Unknown0x009;
/*0x00A*/   CHAR  AltTimer;//compare to 2 all over.. alternate timer?
/*0x00B*/   CHAR  Unknown0x00B;
/*0x00C*/   CHAR  Unknown0x00C;
/*0x00D*/   CHAR  MinLevel[0x22];
/*0x02F*/   CHAR  Unused0x02F;
/*0x030*/   CHAR  StartingSkill[0x22];
/*0x052*/   CHAR  Unknown0x052[0x6];
/*0x058*/   DWORD SkillCapsPre50[0x22];
/*0x0E0*/   DWORD Unknown0x0E0;// 1 for backstab..
/*0x0E4*/   DWORD Unknown0x0E4;// 
/*0x0E8*/   DWORD Unknown0x0E8;
/*0x0EC*/   FLOAT Accuracy;
/*0x0F0*/   DWORD Unknown0x0F0;
/*0x0F4*/   DWORD SkillCapsPost50[0x22];
/*0x17C*/   DWORD Unknown0x17C;
/*0x180*/
} SKILL, *PSKILL;

#define MAX_GUILDS			0x5DC
typedef struct _GUILDS {
/*0x0000*/ PVOID	pOneEntryVTable;
/*0x0004*/ BYTE		UnknownByte0x0005;
/*0x0005*/ BYTE		Unknown0x0005[0x3f];
/*0x0044*/ DWORD	UnknownValue0x0044;
/*0x0048*/ DWORD	UnknownValue0x0048;
/*0x004c*/ CHAR		GuildName[MAX_GUILDS][0x40];
/*0x804c*/ BYTE		UnknownByteArray0x804c[0x200];
/*0x824c*/ BYTE		UnknownByteArray0x824c[0x40];
/*0x828c*/
} GUILDS, *PGUILDS;

typedef struct _INTERACTGROUNDITEM {
	DWORD DropID;
	DWORD SpawnID;
} INTERACTGROUNDITEM, *PINTERACTGROUNDITEM;

typedef struct _SPELLFAVORITE {
/*0x000*/   DWORD   SpellId[9];
/*0x024*/   CHAR    Name[25];
/*0x03d*/   BYTE    Byte_3d;
/*0x03e*/   BYTE    Byte_3e;
/*0x03f*/   BYTE    Byte_3f;
/*0x040*/
} SPELLFAVORITE, *PSPELLFAVORITE;

typedef struct _CMDLIST {
    DWORD LocalizedStringID;
    PCHAR szName;
    PCHAR szLocalized;
    VOID  (__cdecl *fAddress)(PSPAWNINFO, PCHAR);
    DWORD Restriction;
    DWORD Category;
    DWORD Unknown;
} CMDLIST, *PCMDLIST;

typedef struct _EQSOCIAL {
/*0x0000*/   CHAR   Name[0x10];
/*0x0010*/   CHAR   Line[0x5][0x100];
/*0x0510*/   BYTE   Color; 
} EQSOCIAL, *PEQSOCIAL;

typedef struct _EQFRIENDSLIST {
/*0x0000*/ CHAR Name[0x64][0x40];
/*0x1900*/
} EQFRIENDSLIST, *PEQFRIENDSLIST;

// Size 0x70 (8.11.2004)
typedef struct _ALTABILITY {
/*0x00*/ DWORD Index;
/*0x04*/ DWORD Flags;           //?
/*0x08*/ DWORD nShortName;
/*0x0c*/ DWORD nShorterName;
/*0x10*/ DWORD nName;           // now a database number
/*0x14*/ DWORD nDesc;           // now a database number
/*0x18*/ DWORD MinLevel;
/*0x1c*/ DWORD Cost; //Initial Cost or cost the last time you bought a level of it
/*0x20*/ DWORD ID;              // /alt activate id
/*0x24*/ DWORD AARankRequired; 
        union {  
/*0x28*/ LONG  RequiresAbility;          // If the value is positive then its the index number of the AA required.
/*0x28*/ DWORD RequiresPointsInCategory; // If the value is negative then abs(value) is the
	};                                   // category, while (abs(value))*6 is the points required.
/*0x2c*/ DWORD RequiresAbilityPoints;
/*0x30*/ DWORD Type; 
/*0x34*/ LONG  SpellID; // -1 for no Spell
/*0x38*/ BYTE  Unknown0x34[0x8]; 
/*0x40*/ DWORD ReuseTimer; // in seconds
/*0x44*/ DWORD Classes;    // Classes/2 is the actual value we want.
/*0x48*/ DWORD MaxRank;
	union {						 //If you have not spent points in this 
/*0x4c*/ DWORD PointsSpent;		 //ability, then its PointsToBeSpent (or 
/*0x4c*/ DWORD PointsToBeSpent;	 //'Cost', in other words).
	}; 
/*0x50*/ DWORD AAIndex;     // -1 if not available
/*0xxx*/ DWORD UseAAIndex;
/*0xxx*/ BYTE  Unknown0x54;
/*0xxx*/ BYTE  Unknown0x55;
/*0xxx*/ BYTE  Unknown0x56;
/*0xxx*/ BYTE  Unknown0x57;
/*0xxx*/ BYTE  Unknown0x58[0x18];
} ALTABILITY, *PALTABILITY;
#define zWarp				 0

typedef struct _ALTABILITIESLISTMGR {
/*0x00*/ struct _ALTABILITY* Ability;
/*0x04*/ DWORD Index;
} ALTABILITIESLISTMGR, *PALTABILITIESLISTMGR;

//NUM_ALT_ABILITIES is now defined before CHARINFO definition in this same header file.
typedef struct _ALTABILITIESLIST {
/*0x00*/ struct _ALTABILITIESLISTMGR* Abilities[NUM_ALT_ABILITIES_ARRAY];
} ALTABILITIESLIST, *PALTABILITIESLIST;

typedef struct _NEWALTADVMGR {
/*0x00*/ struct _ALTABILITIESLIST* AltAbilityList;
/*0x04*/ DWORD NumAltAbilities;  // NUM_ALT_ABILITIES
/*0x08*/ DWORD Unknown0x08; // data here
/*0x0c*/ DWORD Unknown0x0c; // data here
/*0x10*/ BYTE  Unknown0x10[0x8];
} NEWALTADVMGR, *PNEWALTADVMGR;

typedef struct _ALTADVMGR {
/*0x00*/ struct _NEWALTADVMGR* AltAbilities;
} ALTADVMGR, *PALTADVMGR;

// size 0x118 (8.11.2004)
typedef struct _EQRAIDMEMBER { 
/*0x00*/ CHAR Name[0x40]; 
/*0x40*/ CHAR RaidNote[0x40]; 
/*0x80*/ CHAR Level[0x08]; 
/*0x88*/ CHAR Class[0x20]; 
/*0xC8*/ BYTE Unknown0xC8[0x60]; 
/*0x108*/ DWORD nClass; 
/*0x10C*/ BYTE  RaidLeader; 
/*0x10D*/ BYTE  GroupLeader; 
/*0x10E*/ BYTE  Field_10E; 
/*0x10F*/ BYTE  Field_10F; 
/*0x110*/ BYTE  Field_110; 
/*0x111*/ BYTE  Padding0x111[0x3]; 
/*0x114*/ DWORD GroupNumber; 
/*0x118*/ 
} EQRAIDMEMBER, *PEQRAIDMEMBER;

// sizeof(_EQRAID) is 0x5ab8 (8-11-2004)
typedef struct _EQRAID { 
/*0x0000*/  BYTE  		Unknown0x0[0x154];
/*0x0154*/  CHAR  		RaidMemberUsed[0x48];
/*0x019c*/  struct		_EQRAIDMEMBER RaidMember[0x48];
/*0x505c*/  DWORD 		field_505c;
/*0x5060*/  DWORD 		RaidMemberCount;
/*0x5064*/  CHAR        RaidLeaderName[0x140]; 
/*0x51a4*/  CHAR        RaidMOTD[0x400];
/*0x55a4*/  BYTE        Unknown0x55a4[0x40]; 
/*0x55e4*/  DWORD       field_55E4; 
/*0x55e8*/  BYTE        Unknown0x55e8; 
/*0x55e9*/  BYTE        IsRaidLeader; 
/*0x55ea*/  BYTE        Unknown0x55ea[0x2]; 
/*0x55ec*/  DWORD       RaidTarget; 
/*0x55f0*/  DWORD       LootType; 
/*0x55f4*/  CHAR        RaidLooters[0x13][0x40]; 
/*0x5ab4*/  DWORD       TotalRaidMemberLevels; // TotalRaidMemberLevels/RaidMemberCount=RaidAvgLevel
/*0x5ab8*/ 
} EQRAID, *PEQRAID;

// size 0x19C 3-23-2005
typedef struct _EQGROUP {
/*0x000*/ BYTE MemberExists[5];
/*0x005*/ CHAR MemberName[5][0x40];
/*0x145*/ BYTE Unused[3];
/*0x148*/ struct _SPAWNINFO* pMember[5];
/*0x15C*/ CHAR LeaderName[0x40];
/*0x19C*/
} EQGROUP, *PEQGROUP;

// size 0x08
typedef struct _EQSTRING {
/*0x00*/	DWORD ID;
/*0x04*/	PCHAR String;
} EQSTRING, *PEQSTRING;

// size 0x10 4-28-2004 lax
typedef struct _EQSTRINGTABLE {
/*0x00*/ struct _EQSTRING **StringItems;
/*0x04*/ DWORD Size;
/*0x08*/ DWORD Count;
/*0x0c*/ DWORD Unknown0x0c;
/*0x10*/
} EQSTRINGTABLE, *PEQSTRINGTABLE;

#define EQ_INTERACTGROUNDITEM   0x3BC2
#define EQ_EMOTE	        0x547A
#define EQ_BEGIN_ZONE           0x1540
#define EQ_END_ZONE             0x5e20

////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////


enum UIType
{
	UI_Unknown=0,
	UI_Listbox=22,
	UI_Button=23,
	UI_Gauge=24,
	UI_SpellGem=25,
	UI_InvSlot=26,
	UI_EditBox=27,
	UI_Slider=28,
	UI_Label=29,
	UI_STMLBox=30,
	UI_Combobox=31,
	UI_Page=32,
	UI_TabBox=33,
	UI_HorizontalLayoutBox=35,
	UI_VericalLayoutBox=36,
	UI_Screen=38,
};

// ***************************************************************************
// Structures
// ***************************************************************************

// 10-24-2003 Lax - Massive overhaul.
// See http://macroquest.sourceforge.net/phpBB2/viewtopic.php?t=3569 for
// standards on structures to make things easier on everyone!
// -- ONLY applies to EQ structs, not MQ structs like alerts, etc.


//5-15-2003   eqmule
typedef struct _CXSTR {
/*0x00*/   DWORD   Font;            // maybe, dont know.  04 = Window 01 = button
/*0x04*/   DWORD   MaxLength;
/*0x08*/   DWORD   Length;
/*0x0c*/   BOOL    Encoding; // 0: ASCII, 1:Unicode
/*0x10*/   PCRITICAL_SECTION pLock;
/*0x14*/   CHAR    Text[1]; // Stub, can be anywhere from Length to MaxLength (which is how much is malloc'd to this CXStr)
} CXSTR, *PCXSTR;


typedef struct _EQCURRENTSELECTION {
/*0x00*/   DWORD   Unknown;
/*0x04*/   DWORD   SelectedWnd;//address to selection in tree
/*0x08*/   DWORD   Unknownlodncrap;
/*0x0c*/   DWORD   NumberOfSlots;//merchantslots == 79
/*0x10*/   DWORD   TextureAnim;
/*0x14*/
} EQCURRENTSELECTION, *PEQCURRENTSELECTION;

// TO BE REMOVED.
/*
typedef struct _EQSLOTLIST {
            DWORD   Parent;
            DWORD   InvSlots[372];//0-21 inv 22-30 bags
} EQSLOTLIST, *PEQSLOTLIST;
/**/

// Lax
// Actual Size 0x11c 5-5-2004
typedef struct _CSIDLWNDVFTABLE {
/*0000*/ LPVOID IsValid;
/*0004*/ LPVOID  vector_deleting_destructor;
/*0008*/ LPVOID  DrawNC;
/*000C*/ LPVOID  PostDraw;
/*0010*/ LPVOID  PostDraw2;
/*0014*/ LPVOID  DrawCursor;
/*0018*/ LPVOID  OnResize;
/*001C*/ LPVOID  PostDraw3;
/*0020*/ LPVOID  DrawBackground;
/*0024*/ LPVOID  DrawTooltip;
/*0028*/ LPVOID  GetMinimizedRect;
/*002C*/ LPVOID  DrawTitleBar;
/*0030*/ LPVOID  GetCursorToDisplay;
/*0034*/ LPVOID  HandleLButtonDown;
/*0038*/ LPVOID  HandleLButtonUp;
/*003C*/ LPVOID  HandleLButtonHeld;
/*0040*/ LPVOID  HandleLButtonUpAfterHeld;
/*0044*/ LPVOID  HandleRButtonDown;
/*0048*/ LPVOID  HandleRButtonUp;
/*004C*/ LPVOID  HandleRButtonHeld;
/*0050*/ LPVOID  HandleRButtonUpAfterHeld;
/*0054*/ LPVOID  HandleWheelButtonDown;
/*0058*/ LPVOID  HandleWheelButtonUp;
/*005C*/ LPVOID  HandleMouseMove;
/*0060*/ LPVOID  HandleWheelMove;
/*0064*/ LPVOID  HandleKeyboardMsg;
// ./*0068*/ LPVOID  OnDragDrop;
/*0068*/ LPVOID  GetDragDropCursor;
/*006c*/ LPVOID  QueryDropOK;
/*0070*/ LPVOID  OnClickStick;
/*0074*/ LPVOID  GetDragDropCursor2;
/*0078*/ LPVOID  QueryClickStickDropOK;
/*007C*/ LPVOID  WndNotification;
/*0080*/ LPVOID  ShowWindow;     // Activate   
/*0084*/ LPVOID  Deactivate;
/*0088*/ LPVOID  PostDraw4;
/*008C*/ LPVOID  OnMove;
/*0090*/ LPVOID  OnResize2;
/*0094*/ LPVOID  OnMinimizeBox;
/*0098*/ LPVOID  OnTileBox;
/*009C*/ LPVOID  PostDraw5;
/*00A0*/ LPVOID  OnMove2;
/*00A4*/ LPVOID  OnMove3;
/*00A8*/ LPVOID  OnProcessFrame;
/*00AC*/ LPVOID  OnVScroll;
/*00B0*/ LPVOID  OnHScroll;
/*00B4*/ LPVOID  OnBroughtToTop;
/*00B8*/ LPVOID  OnMove4;
/*00BC*/ LPVOID  Show;
/*00C0*/ LPVOID  Unknown0x0c4;
/*00C4*/ LPVOID  Unknown0x0c8;
/*00C8*/ LPVOID  OnMove5;
/*00CC*/ LPVOID  RequestDockInfo;
/*00D0*/ LPVOID  GetTooltip;
/*00D4*/ LPVOID  HitTest;
/*00D8*/ LPVOID  GetHitTestRect;
/*00DC*/ LPVOID  GetInnerRect;
/*00E0*/ LPVOID  GetClientRect;
/*00E4*/ LPVOID  GetMinSize;
/*00E8*/ LPVOID  GetUntileSize;
/*00EC*/ LPVOID  IsPointTransparent;
/*00F0*/ LPVOID  SetDrawTemplate;
/*00F4*/ LPVOID  Unknown0x0f8;
/*00F8*/ LPVOID  SetWindowTextA;
/*00FC*/ LPVOID  SetVScrollPos;
/*0100*/ LPVOID  SetAttributesFromSidl;
/*0104*/ LPVOID  DefineImages;
/*0108*/ LPVOID  Unknown0x10c;
/*010C*/ LPVOID  Unknown0x110;
/*0110*/ LPVOID  LoadIniInfo;
/*0114*/ LPVOID  StoreIniInfo;
/*0118*/ LPVOID  Unknown118;
/*011c*/ LPVOID  Unknown11c;
/*0120*/ LPVOID  Unknown120;
/*0124*/
} CSIDLWNDVFTABLE, *PCSIDLWNDVFTABLE;

// Lax
// Actual Size 0x114  8-11-2004
typedef struct _CXWNDVFTABLE {
/*0000*/ LPVOID  IsValid;
/*0004*/ LPVOID  vector_deleting_destructor;
/*0008*/ LPVOID  DrawNC;
/*000C*/ LPVOID  PostDraw;
/*0010*/ LPVOID  PostDraw2;
/*0014*/ LPVOID  DrawCursor;
/*0018*/ LPVOID  OnResize;
/*001C*/ LPVOID  PostDraw3;
/*0020*/ LPVOID  DrawBackground;
/*0024*/ LPVOID  DrawTooltip;
/*0028*/ LPVOID  GetMinimizedRect;
/*002C*/ LPVOID  DrawTitleBar;
/*0030*/ LPVOID  GetCursorToDisplay;
/*0034*/ LPVOID  HandleLButtonDown;
/*0038*/ LPVOID  HandleLButtonUp;
/*003C*/ LPVOID  HandleLButtonHeld;
/*0040*/ LPVOID  HandleLButtonUpAfterHeld;
/*0044*/ LPVOID  HandleRButtonDown;
/*0048*/ LPVOID  HandleRButtonUp;
/*004C*/ LPVOID  HandleRButtonHeld;
/*0050*/ LPVOID  HandleRButtonUpAfterHeld;
/*0054*/ LPVOID  HandleWheelButtonDown;
/*0058*/ LPVOID  HandleWheelButtonUp;
/*005C*/ LPVOID  HandleMouseMove;
/*0060*/ LPVOID  HandleWheelMove;
/*0064*/ LPVOID  HandleKeyboardMsg;
/*0068*/ LPVOID  OnDragDrop;
/*006C*/ LPVOID  GetDragDropCursor;
/*0070*/ LPVOID  QueryDropOK;
/*0074*/ LPVOID  OnClickStick;
/*0078*/ LPVOID  GetDragDropCursor2;
/*007C*/ LPVOID  QueryClickStickDropOK;
/*0080*/ LPVOID  WndNotification;
/*0084*/ LPVOID  ShowWindow;        
/*0088*/ LPVOID  Deactivate;
/*008C*/ LPVOID  PostDraw4;
/*0090*/ LPVOID  OnMove;
/*0094*/ LPVOID  OnResize2;
/*0098*/ LPVOID  OnMinimizeBox;
/*009C*/ LPVOID  OnTileBox;
/*00A0*/ LPVOID  PostDraw5;
/*00A4*/ LPVOID  OnMove2;
/*00A8*/ LPVOID  OnMove3;
/*00AC*/ LPVOID  OnProcessFrame;
/*00B0*/ LPVOID  OnVScroll;
/*00B4*/ LPVOID  OnHScroll;
/*00B8*/ LPVOID  OnBroughtToTop;
/*00BC*/ LPVOID  OnMove4;
/*00C0*/ LPVOID  Show;
/*00C4*/ LPVOID  Unknown0x0c4;  // Activate?
/*00C8*/ LPVOID  Unknown0x0c8;
/*00CC*/ LPVOID  OnMove5;
/*00D0*/ LPVOID  RequestDockInfo;
/*00D4*/ LPVOID  GetTooltip;
/*00D8*/ LPVOID  HitTest;
/*00DC*/ LPVOID  GetHitTestRect;
/*00E0*/ LPVOID  GetInnerRect;
/*00E4*/ LPVOID  GetClientRect;
/*00E8*/ LPVOID  GetMinSize;
/*00EC*/ LPVOID  GetUntileSize;
/*00F0*/ LPVOID  IsPointTransparent;
/*00F4*/ LPVOID  SetDrawTemplate;
/*00F8*/ LPVOID  Unknown0x0f8;
/*00FC*/ LPVOID  SetWindowTextA;
/*0100*/ LPVOID  SetVScrollPos;//->0
/*0104*/ LPVOID  SetAttributesFromSidl;
/*0108*/ LPVOID  DefineImages;
/*010C*/ LPVOID  Unknown0x10c;
/*0110*/ LPVOID  Unknown0x110;
/*0114*/
} CXWNDVFTABLE, *PCXWNDVFTABLE;


// Lax 10-24-2003
// Actual size 0x15c (5/11/2005)      
typedef struct _CSIDLWND {
/*0x000*/   struct _CSIDLWNDVFTABLE   *pvfTable;
/*0x004*/   DWORD   Unknown0x004;   // set to 0 in CXWnd::Refade
/*0x008*/   DWORD   Unknown0x008;
/*0x00c*/   DWORD   TimeMouseOver;     // "Delay" in ini
/*0x010*/   DWORD   FadeDuration;      //  "Duration" in ini
/*0x014*/   BYTE    FadeToAlpha;      // set to 1 in CXWnd::Refade   // -->0x14
/*0x015*/   BYTE    Unknown0x015;     // Faded?
/*0x016*/   BYTE    Locked; // 
/*0x017*/   BYTE    Unknown0x017;
/*0x018*/   BYTE    Unknown0x018;
/*0x019*/   BYTE    Unknown0x019;
/*0x01a*/   BYTE    Unknown0x01a;
/*0x01b*/   BYTE    Unknown0x01b;
/*0x01c*/   BYTE    Unknown0x01c[0x0c];//-->1c
/*0x028*/   //struct  _CSIDLWND *pParentWindow;  // If this is NULL, coordinates are absolute...  //-->28
/*0x02c*/   //struct  _CSIDLWND *pChildren;
/*0x030*/   //struct  _CSIDLWND *pSiblings;  // its a tree.  

/*0x028*/   void *pParentWindow;  // If this is NULL, coordinates are absolute...  //-->28
/*0x02c*/   void *pChildren;
/*0x030*/   void *pSiblings;  // its a tree.  

/*0x034*/   BYTE    HasChildren;
/*0x035*/   BYTE    HasSiblings;
/*0x036*/   BYTE    Unknown0x036[0x2];
/*0x038*/   DWORD   XMLIndex;
/*0x03c*/   RECT    Location;
/*0x04c*/   RECT    OldLocation;
/*0x05c*/   BYTE    Show;      
/*0x05d*/   BYTE    Enabled;
/*0x05e*/   BYTE    Minimized;  
/*0x05f*/   BYTE    Unknown0x05f; // ontilebox
/*0x060*/   BYTE    Unknown0x060;
/*0x061*/   BYTE    Unknown0x061;
/*0x062*/   BYTE    MouseOver;
/*0x063*/   BYTE    Unknown0x063;
/*0x064*/   DWORD   WindowStyle; // bit 1 - vertical scroll, bit 2 - horizontal scroll, bit 4 - title bar?, bit 8 - border
/*0x068*/   DWORD   Unknown0x068;
/*0x06c*/	DWORD   Unknown0x06c;
/*0x070*/	DWORD   Unknown0x070;
/*0x074*/   struct _CXSTR  *WindowText;
/*0x078*/   struct _CXSTR  *Tooltip;
/*0x07c*/   DWORD   UnknownCW; // CXWnd::SetLookLikeParent
/*0x080*/   ARGBCOLOR BGColor; // "BGTint.Red", green, blue
/*0x084*/   BYTE    Unknown0x084[0x10];
/*0x094*/   DWORD   BGType; // "BGType" in ini 
/*0x098*/   struct _CXSTR  *XMLToolTip;
/*0x09c*/   BYTE    Unknown0x09c[0x14];
/*0x0b0*/   BYTE    Alpha; // "Alpha" in ini 
/*0x0b1*/   BYTE    Fades; // "Fades" in ini
/*0x0b2*/   BYTE    Unknown0x0b2;
/*0x0b3*/   BYTE    Unknown0x0b3;
/*0x0b4*/   BYTE    Unknown0x0b4[0x0c];
/*0x0c0*/   DWORD   ZLayer; // 
/*0x0c4*/   DWORD   Unknown0x0c4;
/*0x0c8*/   LPVOID  DrawTemplate; //
/*0x0cc*/   BYTE    Unknown0x0cc[0xc];
/*0x0d8*/   union {
					_ITEMINFO* Item;
					_CSIDLWND* InvDescription;
			};
/*0x0dc*/   BYTE    Unknown0x0dc[0xc];
/*0x0e8*/   DWORD   Unknown0x0e8; // CXWnd::StartFade, CXWnd::Minimize
/*0x0ec*/   BYTE    Unknown0x0ec[0x10];
/*0x0fc*/   DWORD   FadeTickCount; 
/*0x100*/   BYTE    Unknown0x100; // CXWnd::StartFade  
/*0x101*/   BYTE    Unknown0x101; // CXWnd::StartFade  
/*0x102*/   BYTE    Unknown0x102; 
/*0x103*/   BYTE    Unknown0x103;
/*0x104*/   DWORD   Unknown0x104;// CXWnd::StartFade, CXWnd::Minimize
/*0x108*/   DWORD   VScrollMax;
/*0x10c*/   DWORD   VScrollPos; 
/*0x110*/   DWORD   HScrollMax; 
/*0x114*/   DWORD   HScrollPos; 
/*0x118*/   BYTE    ValidCXWnd; 
/*0x119*/   BYTE    Unused0x119[0x3];
/*0x11c*/   struct _CXSTR  *SidlText; 
/*0x120*/   union { 
			   struct _CXSTR  *SidlScreen; 
               DWORD   SlotID; 
         }; 
/*0x124*/   LPVOID SidlPiece;   // CScreenPieceTemplate (important)  
/*0x128*/   BYTE    Checked;
/*0x129*/   BYTE    Highlighted;
/*0x12a*/   BYTE    Unused0x12a[0x2];
/*0x12c*/   DWORD   TextureAnim; // used in CSidlScreenWnd::AddButtonToRadioGroup
/*0x130*/   struct _CXSTR *   InputText;
/*0x134*/   DWORD   Selector;
/*0x138*/   DWORD   PushToSelector;
/*0x13c*/   DWORD   EnableINIStorage;
/*0x140*/   struct _CXSTR *INIStorageName;
/*0x144*/   DWORD   Unknown0x144;
/*0x148*/   DWORD   Unknown0x148;// CTextureAnimation
/*0x14c*/   DWORD   Unknown0x14c;// CTextureAnimation
/*0x150*/   LPVOID  ContextMenu; // CTextureAnimation
/*0x154*/	DWORD   Unknown0x154;// CTextureAnimation
/*0x158*/	DWORD   Unknown0x158;// CTextureAnimation
/*0x15c*/
} CSIDLWND, *PCSIDLWND;


// Lax 10-24-2003
// Actual size                 
typedef struct _CXWND {
/*0x000*/   struct _CXWNDVFTABLE   *pvfTable;
/*0x004*/   DWORD   Unknown0x004;   // set to 0 in CXWnd::Refade
/*0x008*/   DWORD   Unknown0x008;
/*0x00c*/   DWORD   TimeMouseOver;     // "Delay" in ini
/*0x010*/   DWORD   FadeDuration;      //  "Duration" in ini
/*0x014*/   BYTE    FadeToAlpha;      // set to 1 in CXWnd::Refade
/*0x015*/   BYTE    Unknown0x015;     // Faded?
/*0x016*/   BYTE    Locked; // 
/*0x017*/   BYTE    Unknown0x017;
/*0x018*/   BYTE    Unknown0x018;
/*0x019*/   BYTE    Unknown0x019;
/*0x01a*/   BYTE    Unknown0x01a;
/*0x01b*/   BYTE    Unknown0x01b;
/*0x01c*/   BYTE    Unknown0x01c[0xc];
/*0x028*/   struct  _CSIDLWND *pParentWindow;  // If this is NULL, coordinates are absolute...
/*0x02c*/   struct  _CSIDLWND *pChildren;
/*0x030*/   struct  _CSIDLWND *pSiblings;  // its a tree. 
/*0x034*/   BYTE    HasChildren;
/*0x035*/   BYTE    HasSiblings; // 
/*0x036*/   BYTE    Unknown0x02e[0x2];
/*0x038*/   DWORD   XMLIndex;
/*0x03 */   RECT    Location;
/*0x04 */   RECT    OldLocation;
/*0x05 */   BYTE    Show;       // 
/*0x05 */   BYTE    Enabled;
/*0x05 */   BYTE    Minimized;  // 
/*0x05 */   BYTE    Unknown0x057; // ontilebox
/*0x05 */   BYTE    Unknown0x058;
/*0x05 */   BYTE    Unknown0x059;
/*0x05 */   BYTE    MouseOver;
/*0x05 */   BYTE    Unknown0x05b;
/*0x05 */   DWORD   WindowStyle; // bit 1 - vertical scroll, bit 2 - horizontal scroll, bit 4 - title bar?, bit 8 - border 
/*0x06 */   DWORD   Unknown0x060;// -> 0x60
			DWORD   Unknown0x064;
			DWORD   Unknown0x068;
/*0x   */   struct _CXSTR  *WindowText; // -> 0x6C
/*0x0  */   struct _CXSTR  *Tooltip; // -> 0x70
/*0x06 */   DWORD   Unknown0x06c; // CXWnd::SetLookLikeParent
/*0x07 */   ARGBCOLOR BGColor; // "BGTint.Red", green, blue
/*0x07 */   BYTE    Unknown0x074[0x10];
/*0x08 */   DWORD   BGType; // "BGType" in ini
/*0x08 */   struct _CXSTR  *XMLToolTip;// -> 0x90
/*0x08 */   BYTE    Unknown0x08c[0x14];
/*0x0a */   BYTE    Alpha; // "Alpha" in ini
/*0x0a */   BYTE    Fades; // "Fades" in ini
/*0x0a */   BYTE    Unknown0x0a2;
/*0x0a */   BYTE    Unknown0x0a3;
/*0x0a */   BYTE    Unknown0x0a4[0x0c];
/*0x0b */   DWORD   ZLayer; // 
/*0x0b */   DWORD   Unknown0x0b4;
/*0x0b */   LPVOID  DrawTemplate; //
/*0x0b */   BYTE    Unknown0x0b0[0xc];
/*0x0c */   union {
					_ITEMINFO* Item;
					_CSIDLWND* InvDescription;
			};
/*0x0c */   BYTE    Unknown0x0c0[0xc];
/*0x0d */   DWORD   Unknown0x0cc; // CXWnd::StartFade, CXWnd::Minimize
/*0x0d */   BYTE    Unknown0x0d0[0x10];
/*0x0e */   DWORD   FadeTickCount; // 
/*0x0f */   BYTE    Unknown0x0e4; // CXWnd::StartFade  
/*0x0f */   BYTE    Unknown0x0e5; // CXWnd::StartFade 
/*0x0f */   BYTE    Unknown0x0e6; 
/*0x0f */   BYTE    Unknown0x0e7;
/*0x0f */   DWORD   Unknown0x0e8;// CXWnd::StartFade, CXWnd::Minimize 
/*0x0f */   DWORD   VScrollMax; //
/*0x0f */   DWORD   VScrollPos; //
/*0x10 */   DWORD   HScrollMax; // 
/*0x10 */   DWORD   HScrollPos; // 
/*0x10 */   BYTE    ValidCXWnd; //
/*0x10 */   BYTE    Unused0x0f9[0x7];
/*0x   */
} CXWND, *PCXWND;
#define GateBind			 0


// size 0x268  5-12-2004 lax
typedef struct _CSIDLMGR {
/*0x000*/	BYTE	Unknown0x000[0x114];
/*0x114*/	PVOID pXMLDataMgr;
/*0x118*/	BYTE	Unknown0x118[0x150];
/*0x268*/
} CSIDLMGR, *PCSIDLMGR;

//11-6-2003 lax
//Actual size 0x108 4-28-2004
//Actual size 0x108 4-12-2005
typedef struct _CXWNDMGR {
/*0x000*/ LPVOID CXWNDMGR__vtable;
/*0x004*/ DWORD Unknown0x004;
/*0x008*/ struct _CSIDLWND *pWindows; 
/*0x00c*/ BYTE Unknown0x00C[0x71];
/*0x07d*/ bool KeyboardFlags[4];  // 7d-80
/*0x081*/ CHAR Unknown0x081[0x6b];
/*0x0EC*/ DWORD ScreenExtentX;
/*0x0F0*/ DWORD ScreenExtentY;
/*0x0F4*/ DWORD Unknown;
/*0x0F8*/ DWORD font_list_ptr;
/*0x0Fc*/ BYTE Unknown0xfc[0xc];
/*0x108*/ 
} CXWNDMGR, *PCXWNDMGR;


// 06-16-2004 dkaa - size is 0x404
// 05-13-2004 dkaa - size is 0x2d4
typedef struct _EQMERCHWINDOW {
/*0x000*/   struct _CSIDLWND Wnd;
/*0x15c*/   BYTE    Unknown0x150[0x8];
/*0x164*/   PCONTENTS   ItemDesc[0x50];     // the mainwindow has pointers
                                            // directly to the items in the
                                            // slots...
/*0x2a4*/   FLOAT   Markup;
/*0x2a8*/   DWORD   SelectedSlotID;
/*0x2ac*/   DWORD   AddressToPointerForSelectedItem;
/*0x2b0*/   DWORD   Unknown0x2b0;
/*0x2b4*/   DWORD   MW_MerchantName;
/*0x2b8*/   DWORD   MW_SelectedItemLabel;
/*0x2bc*/   DWORD   MW_SelectedPriceLabel;
/*0x2c0*/   DWORD   MW_SelectedItem;
/*0x2c4*/   DWORD   MW_Buy_Button;
/*0x2c8*/   DWORD   MW_Sell_Button;
/*0x2cc*/   DWORD   ItemList;
/*0x2d0*/   DWORD   Unknown0x2d0;
/*0x2d4*/
} EQMERCHWINDOW, *PEQMERCHWINDOW;



// 10-27-2003 Lax
// Actual size 0x208 11-5-2003
typedef struct _EQCHATMGR
{
/*0x000*/ struct _EQCHATWINDOW* ChatWnd[0x20];
/*0x080*/ DWORD NumWindows;
/*0x084*/ DWORD ActiveWindow; // CChat::GetActiveChatWindow
/*0x088*/ DWORD LockedWindow; // CChatManager::GetActiveChatWindow
/*0x08c*/ DWORD Unknown0x08c;
/*0x090*/ struct _EQCHATWINDOW* ChannelMap[0x20];   // channel map
/*0x110*/ BYTE  Unknown0x110[0x28];
/*0x138*/ DWORD Unknown0x138;
/*0x13c*/ DWORD Unknown0x13c;
/*0x140*/ DWORD Unknown0x140;
/*0x144*/ LPVOID ChatMenu;
/*0x148*/ DWORD Unknown0x148;
/*0x14c*/ DWORD Unknown0x14c;
/*0x150*/ DWORD Unknown0x150;
/*0x154*/ DWORD Unknown0x154;
/*0x158*/ LPVOID MeleeMenu;
/*0x15c*/ DWORD Unknown0x15c;
/*0x160*/ LPVOID SpellMenu;
/*0x164*/ DWORD Unknown0x164;
/*0x168*/ DWORD Unknown0x168;
/*0x16c*/ LPVOID ChannelMenu;
/*0x170*/ LPVOID ChatMenu2;
/*0x174*/ LPVOID FilterMenu;
/*0x178*/ DWORD Unknown0x178;
/*0x17c*/ DWORD Unknown0x17c;
/*0x180*/ DWORD Unknown0x180;
/*0x184*/ LPVOID HitsModeMenu;
/*0x188*/ LPVOID MeleeMenu2;
/*0x18c*/ LPVOID HitsModeMenu2;
/*0x190*/ DWORD Unknown0x190;
/*0x194*/ LPVOID HitsModeMenu3;
/*0x198*/ DWORD Unknown0x198;
/*0x19c*/ LPVOID HitsModeMenu4;
/*0x1a0*/ DWORD Unknown0x1a0;
/*0x1a4*/ LPVOID HitsModeMenu5;
/*0x1a8*/ DWORD Unknown0x1a8;
/*0x1ac*/ LPVOID HitsModeMenu6;
/*0x1b0*/ DWORD Unknown0x1b0;
/*0x1b4*/ DWORD Unknown0x1b4; // CChatManager__UpdateTellMenus
/*0x1b8*/ DWORD Unknown0x1b8;
/*0x1bc*/ DWORD Unknown0x1bc; // CChatManager__UpdateTellMenus
/*0x1c0*/ DWORD Unknown0x1c0;
/*0x1c4*/ DWORD Unknown0x1c4; // CChatManager__UpdateTellMenus // raid
/*0x1c8*/ DWORD Unknown0x1c8;
/*0x1cc*/ DWORD Unknown0x1cc; // CChatManager__UpdateTellMenus
/*0x1d0*/ DWORD Unknown0x1d0; // CChatManager__UpdateTellMenus
/*0x1d4*/ DWORD Unknown0x1d4; // CChatManager__UpdateTellMenus
/*0x1d8*/ DWORD Unknown0x1d8;
/*0x1dc*/ DWORD Unknown0x1dc;
/*0x1e0*/ DWORD Unknown0x1e0;
/*0x1e4*/ BYTE  Unknown0x1e4[0x1c];
/*0x200*/ DWORD Unknown0x200;
/*0x204*/ DWORD Unknown0x204;
/*0x208*/
} EQCHATMGR, *PEQCHATMGR;

// Actual size 0x254 11-5-2003
// 10-27-2003 Lax
typedef struct _EQCHATWINDOW
{
/*0x000*/ struct _CSIDLWND Wnd;
/*0x148*/ struct _EQCHATMGR *ChatManager; 
/*0x14c*/ struct _CSIDLWND* InputWnd;
/*0x150*/ struct _CSIDLWND* OutputWnd;
/*0x154*/ DWORD Unknown0x154;
/*0x158*/ DWORD Unknown0x158;// need to update locations..
/*0x150*/ BYTE Unknown0x148;
/*0x151*/ BYTE Unknown0x149[0x3f];
/*0x18c*/ DWORD Unknown0x188;
/*0x190*/ DWORD Unknown0x18c;
/*0x194*/ struct _CXSTR *CommandHistory[0x28]; // ->0x198
/*0x238*/ DWORD Unknown0x230; // CChatWindow::HistoryBack/forward .. maybe total or current history lines
/*0x23c*/ DWORD Unknown0x234; // CChatWindow::HistoryBack/forward .. maybe total or current history lines
/*0x240*/ DWORD FontSize; //
/*0x244*/ DWORD Unknown0x23C;
/*0x248*/
} EQCHATWINDOW, *PEQCHATWINDOW;

// Actual size 0x1dc old
// Lax 10-24-2003
typedef struct _EQBUFFWINDOW
{
/*0x000*/ struct _CSIDLWND Wnd;
/*0x148*/ BYTE  Unknown0x148[0x48];
/*0x184*/ DWORD pBuff[0x0f];    // CButton*
/*0x1C0*/ DWORD Unknown0x1C0;
/*0x1C4*/ DWORD Unknown0x1C4;
/*0x1C8*/ DWORD Unknown0x1C8;
/*0x1CC*/ DWORD Unknown0x1CC;
/*0x1D0*/ DWORD FirstEffectSlot; //0-15
/*0x1D4*/ DWORD LastEffectSlot;  //0-15
/*0x1D8*/ DWORD MaxBuffs;  // either 0x0F or 0x06  (normal or shortbuffs)
/*0x1DC*/
} EQBUFFWINDOW, *PEQBUFFWINDOW;

// actual size 0x148
typedef struct _EQINVSLOTWND {
/*0x000*/   struct _CXWND Wnd;
/*0x110*/	LONG InvSlot;
/*0x114*/   BYTE Unknown0x114[0x28];
/*0x13C*/   BOOL ProcessClick;
} EQINVSLOTWND, *PEQINVSLOTWND;

// actual size 0x14 2-18-2004 Lax
typedef struct _EQINVSLOT {
/*0x00*/	LPVOID pvfTable; // not based on cxwnd
/*0x04*/	struct _EQINVSLOTWND *pInvSlotWnd;
/*0x08*/	DWORD Unknown0x08;
/*0x0C*/	DWORD Unknown0x0C;
/*0x10*/	PCONTENTS *ppContents;
/*0x14*/
} EQINVSLOT, *PEQINVSLOT;

// actual size 0x100C 2-18-2004 Lax
typedef struct _EQINVSLOTMGR {
/*0x0000*/	DWORD Unknown0x0000;
/*0x0004*/	struct _EQINVSLOT *SlotArray[0x400];
/*0x1004*/	DWORD TotalSlots;
/*0x1008*/	DWORD Unknown0x1008;
/*0x100C*/
} EQINVSLOTMGR, *PEQINVSLOTMGR;


// onetimehero 09-17-03
// ContainerWindow
// Actual Size 0x17C old
typedef struct _EQCONTAINERWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x148*/ struct _CONTENTS*   pContents;     // Pointer to the contents of the container;
                                                 // Matches the pointer in CHARINFO.Inventory/Bank/World
/*0x14c*/ struct _CSIDLWND*   pSlots[0x0a];
/*0x000*/ struct _CSIDLWND*   pCombine;
/*0x168*/ struct _CSIDLWND*   pDone;
/*0x16c*/ struct _CSIDLWND*   pIcon;
/*0x170*/ struct _CSIDLWND*   pUnknown;
/*0x174*/ struct _CSIDLWND*   pLabel;
/*0x178*/ BYTE Unknown0x178[4];
/*0x17c*/
} EQCONTAINERWINDOW, *PEQCONTAINERWINDOW;

// Actual Size 0x78  old
typedef struct _EQ_CONTAINERWND_MANAGER {
/*0x000*/   DWORD pvfTable; // NOT based on CXWnd.  Contains only destructor
/*0x004*/   PEQCONTAINERWINDOW pPCContainers[0x1a];  // All open containers, including World, in order of opening...
/*0x06c*/   PCONTENTS   pWorldContents;            // Pointer to the contents of the world   If NULL, world container isn't open;
/*0x070*/   DWORD dwWorldContainerID;            // ID of container in zone, starts at one (zero?) and goes up.
/*0x074*/   DWORD dwTimeSpentWithWorldContainerOpen;  // Cumulative counter?
/*0x078*/
} EQ_CONTAINERWND_MANAGER, *PEQ_CONTAINERWND_MANAGER;

typedef struct _POINT3 {
    FLOAT X;
    FLOAT Y;
    FLOAT Z;
} POINT3, *PPOINT3;

// plazmic 08-17-03
// Map Window
typedef struct _MAPLABEL { // sizeof() = 0x28
/*0x00*/    struct _MAPLABEL *pNext;
/*0x04*/    struct _MAPLABEL *pPrev;
/*0x08*/    POINT3 Location;
/*0x14*/    ARGBCOLOR Color;
/*0x18*/    DWORD Size; //1-3;
/*0x1C*/    PCHAR Label;
/*0x20*/    DWORD Layer;    //0-3;
/*0x24*/    DWORD Width;
/*0x28*/    DWORD Height;
/*0x2C*/    DWORD unk_0x2c;
/*0x30*/    DWORD unk_0x30;
} MAPLABEL, *PMAPLABEL;

typedef struct _MAPLINE { // sizeof() = 0x28 (think this might be 0x34 now)
    struct _MAPLINE *pNext;
    struct _MAPLINE *pPrev;
    POINT3 Start;
    POINT3 End;
    ARGBCOLOR Color;
    DWORD Layer;    //0-3;
} MAPLINE, *PMAPLINE;

typedef struct _EQLOOTWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x148*/ BYTE  Unknown0x148[0x08];
/*0x150*/ BYTE  Unknown0x150[0x84]; // This is an array of something
/*0x1d4*/ PCONTENTS   ItemDesc[0x1e]; //there can only be 30 items on a corpse since that equals 22 inv slots plus 8 bags...
/*0x24c*/
} EQLOOTWINDOW, *PEQLOOTWINDOW;

//Size: 0x2f8 (03/25/2004)
typedef struct _EQPETINFOWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x150*/ DWORD Unknown0x150;
/*0x154*/ DWORD Unknown0x154; // pet's spawnid# ??
/*0x158*/ DWORD Unknown0x158; // 1
/*0x15c*/ BYTE  Unknown0x15c[0x120];
/*0x18C*/ // unknown (one per buff)
/*0x204*/ // window (one per buff)
/*0x27c*/ int   Buff[0x1e]; // Spell ID# of each buff -- 30 total
/*0x2f4*/ DWORD Unknown0x2f4;  
} EQPETINFOWINDOW, *PEQPETINFOWINDOW;

typedef struct _EQTRADESKILLRECIPE {
/*0x00*/ DWORD Unknown0x00;
/*0x04*/ DWORD Trivial;
/*0x08*/ DWORD Unknown0x08;
/*0x0c*/ DWORD Unknown0x0c;
/*0x10*/ DWORD Unknown0x10;
/*0x14*/ CHAR  Name[0x40];
/*0x54*/ DWORD Unknown0x54;
/*0x58*/ DWORD Ingredient[0xa];  // ID# of ingredient(s)
/*0x80*/ DWORD IngredientIcon[0xa]; //Icon# of ingredient(s) (Note: 499 is blank)
} EQTRADESKILLRECIPE, *PEQTRADESKILLRECIPE;

//Size 0x3d8 (02/10/2004)
typedef struct _EQTRADESKILLWINDOW {
/*0x000*/   struct _CSIDLWND Wnd;
/*0x148*/ DWORD Unknown0x148[0x1b];  
/*0x1b4*/ PEQTRADESKILLRECIPE SearchResults[0x64]; 
/*0x344*/ DWORD	Unknown0x344;
/*0x348*/ DWORD Unknown0x348;
/*0x34c*/ DWORD Unknown0x34c;
/*0x350*/ PCONTENTS Container;
/*0x354*/ DWORD Unknown0x354;
/*0x358*/ PEQTRADESKILLRECIPE SelectedRecipe;
/*0x35c*/ DWORD Unknown0x35c;
/*0x360*/ DWORD SkillLevel;
/*0x364*/ DWORD Unknown0x364;
/*0x368*/ DWORD Unknown0x368;
/*0x36c*/ BYTE  Unknown0x36c[0x58];
/*0x3c4*/ DWORD Unknown0x3c4;
/*0x3c8*/ DWORD Unknown0x3c8;
/*0x3cc*/ BYTE  Unknonw0x3cc[0x8];
/*0x3d4*/ DWORD Unknown0x3d4;
/*0x3d8*/ DWORD Unknown0x3d8;
} EQTRADESKILLWINDOW, *PTRADESKILLWINDOW;

//Size: 0x28c (08/11/2004) 
typedef struct _EQRAIDWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x158*/ BYTE  Unknown0x158[0xa4];
/*0x1fc*/ DWORD ClassColors[0x10];
/*0x23c*/
} EQRAIDWINDOW, *PEQRAIDWINDOW;

typedef struct _GUILDMEMBERINFO {
/*0x000*/ DWORD Unknown0x000; //pointer?
/*0x004*/ BYTE OnlineStatus; // 00=offline, 01=online
/*0x005*/ BYTE UnknownData0x005;
/*0x006*/ BYTE UnknownData0x006;
/*0x007*/ BYTE Unknown0x007;
/*0x008*/ BYTE Unknown0x008[0x8];
/*0x010*/ CHAR Name[0x40];
/*0x050*/ DWORD Level;
/*0x054*/ DWORD Class; 
/*0x058*/ DWORD Rank; //0=member, 1=officer, 2=leader
/*0x05c*/ FLOAT UnknownData0x05c;
/*0x060*/ CHAR PublicNote[0x80];
/*0x0e0*/ BYTE Unknown0x0e0[0x180];
/*0x260*/ WORD UnknownData0x260;
/*0x262*/ WORD UnknownData0x262;
/*0x264*/ WORD UnknownData0x264;
/*0x266*/ WORD UnknownData0x266;
} GUILDMEMBERINFO, *PGUILDMEMBERINFO;

//Size: 0x3d0 (02/18/2004)
typedef struct _EQGUILDWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x148*/ BYTE  Unknown0x148[0x4c];
/*0x194*/ BYTE Unknown0x194;
/*0x195*/ BYTE ShowOffline; // 01 = show offline box is checked
/*0x196*/ BYTE Unknown0x196[0x2];
/*0x198*/ struct _GUILDMEMBERINFO **pMember; // This is a pointer to the beginning of a list of pointers, 
	                                         // each representing one player in the guild.  The number of 
	                                         // pointers depends upon TotalMemberCount.
/*0x19c*/ DWORD TotalMemberCount;
/*0x1a0*/ DWORD Unknown0x1a0;  // 150?
/*0x1a4*/ DWORD Unknown0x1a4;  // 1?
/*0x1a8*/ DWORD TotalMemberCountAgain;
/*0x1ac*/ BYTE Unknown0x1ac[0x1c];
/*0x1c8*/ CHAR PersonalNotesFilePath[0x40];  // path to personal notes file
/*0x208*/ BYTE Unknown0x208[0x1c0]; // empty
/*0x3c8*/ DWORD Unknown0x3c8; // 1?
/*0x3cc*/ DWORD Unknown0x3cc; // some sort of bizaare pointer...
/*0x3d0*/
} EQGUILDWINDOW, *PEQGUILDWINDOW;

typedef struct _EQNOTESWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x148*/ BYTE  Unknown0x148[0x04];
/*0x14c*/ struct _CSIDLWND *pEditWnd;
} EQNOTESWINDOW, *PEQNOTESWINDOW;

// Lax 10-29-2003 
// Actual size 0x174 11-9-2003
typedef struct _EQITEMWINDOW 
{ 
/*0x000*/ struct _CSIDLWND Wnd; 
/*0x148*/ struct _CSIDLWND *DisplayWnd;  // 13c -> 148
/*0x14c*/ BYTE Unknown0x140[0x4]; 
/*0x150*/ BYTE Unknown0x148; 
/*0x151*/ BYTE Unknown0x149[0x3]; 
/*0x154*/ PCXSTR ItemInfo; // 14c -> 154
/*0x158*/ PVOID Unknown0x150; // PCXSTR "item display" ??    _CSIDLWND ?? 
/*0x15c*/ DWORD Unknown0x154; // possibly PCXSTR of information as on charms 
/*0x160*/ BYTE  Unknown0x158; 
/*0x164*/ PVOID TextureAnim; //0x164
/*0x168*/ PVOID TextureAnim2; 
/*0x16C*/ DWORD Unknown0x164[2]; 
/*0x174*/ 
} EQITEMWINDOW, *PEQITEMWINDOW; 

// Size: 0x1a4 (4/14/2005)
typedef struct _EQMAILWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x158  Finish... */
} EQMAILWINDOW, *PEQMAILWINDOW;


// Actual Size 0x270 05-11-2005
typedef struct _EQMAPWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x15c*/ BYTE Unknown0x15c[0x24];
/*0x180*/ CHAR shortzonename[0x20]; 
/*0x1a0*/ BYTE Unknown0x1a0[0x8c];
/*0x22c*/ PMAPLINE pLines;       
/*0x230*/ PMAPLABEL pLabels;			
/*0x234*/ BYTE Unknown0x234[0x34];
/*0x268*/ DWORD ContentsCount;  //number of lines/labels on the map (I think)
/*0x270*/
} EQMAPWINDOW, *PEQMAPWINDOW;

// onetimehero 09-17-03
// Spell Window
typedef struct _EQCASTSPELLWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x148*/ BYTE Unknown0x148[0x04];
/*0x14c*/  struct _EQCASTSPELLGEM   *SpellSlots[0x9];
/*0x170*/  BYTE    Unknown0x160[0x8];
/*0x178*/  DWORD   spellicon;//if this is equal to FFFFFFFF there is no spell memmed in this slot...
/*0x17c*/  DWORD   spellstate;// 1 = cast in progress or refreshtime not met 2 means we ducked or aborted cast, 0 means its ok to cast
/*0x180*/
} EQCASTSPELLWINDOW, *PEQCASTSPELLWINDOW;

// Individual Gems 2005-05-18 koad 
typedef struct _EQCASTSPELLGEM { 
/*0x000*/ struct	_CSIDLWND Wnd; 
/*0x148*/ BYTE		Unknown0x148[0x08]; 
/*0x054*/ BYTE		Unknown0x154[0x20]; 
/*0x174*/ BYTE		Unknown0x174[0x4]; 
/*0x178*/ DWORD		spellicon;//if this is equal to FFFFFFFF there is no spell memmed in this slot... 
/*0x17C*/ DWORD		spellstate;// 1 = cast in progress or refreshtime not met 2 means we ducked or aborted cast, 0 means its ok to cast 
/*0x180*/ 
} EQCASTSPELLGEM, *PEQCASTSPELLGEM;
#define Fly					 0

// Actual size 0x1c4 10-9-2003
typedef struct _EQHOTBUTTONWINDOW {
/*0x000*/ struct _CSIDLWND Wnd;
/*0x148*/ BYTE Unknown0x138[0xc];
/*0x000*/ DWORD   HotButtonWndView;//0 to 9 for the different views
/*0x14c*/ struct _CSIDLWND   *HotButtons[0x0a];//these will change when you switch page...
/*0x174*/
} EQHOTBUTTONWINDOW, *PEQHOTBUTTONWINDOW;

typedef struct _LOOTCORPSE {
/*0x000*/   BYTE    Unknown0x000;   // 03 seems very common (for NPC anyway)
/*0x001*/   CHAR    Name[0x4b];
/*0x04c*/   FLOAT   Timer;  //Uncertain the equation used here, but fairly certain it's the timer
/*0x050*/   FLOAT   X;
/*0x054*/   BYTE    Unknown0x054[0x4];
/*0x058*/   FLOAT   Y;
/*0x05c*/   FLOAT   Z;
/*0x060*/   BYTE    Unknown0x060[0x24];
/*0x084*/   DWORD   Flags;
/*0x088*/   BYTE    Unknown0x088[0x4];
/*0x08c*/   DWORD   Unknown0x08c;   //256 seems very common
/*0x090*/
// I think there might be pointers at 0x0e0..but no clue what to
} LOOTCORPSE, *PLOOTCORPSE;

// size 0x180 3-10-2004
typedef struct _EQCOMPASSWINDOW {
/*0x000*/	struct _CSIDLWND Wnd;
/*0x148*/	struct _CSIDLWND *pStrip1;
/*0x14C*/	struct _CSIDLWND *pStrip2;
// in progress.
/*0x16C*/   BOOL DrawLine;
/*0x170*/   DWORD Unknown0x170;
/*0x174*/	DWORD LineRed;
/*0x178*/	DWORD LineGreen;
/*0x17C*/	DWORD LineBlue;
/*0x180*/
} EQCOMPASSWINDOW, *PEQCOMPASSWINDOW;

// used by options window
typedef struct _EQKBASSIGN
{
/*0x00*/	struct _CXSTR *pDescription;
/*0x04*/	DWORD nAssignmentNumber;
/*0x08*/
} EQKBASSIGN, *PEQKBASSIGN;

// size 0x904 3-10-2004
typedef struct _EQOPTIONSWINDOW {
/*0x000*/	struct _CSIDLWND Wnd;
/*0x148*/

/*0x264*/ struct _EQKBASSIGN Binds[0xA1];
/*0x508*/

/*0x904*/
} EQOPTIONSWINDOW, *PEQOPTIONSWINDOW;

// size 0x28 4-24-2004 Lax
typedef struct _EQGRAPHICSENGINE {
/*0x00*/ // Graphics file handler
/*0x04*/
} EQGRAPHICSENGINE, *PEQGRAPHICSENGINE;
#define SafeXLoc 0



////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////
////////////////////



//#define EQLIB_OBJECT

// Other
class CXSize
{
	DWORD A,B,C,D,E,F;
};

// Enumerations...
typedef DWORD EQZoneIndex;
typedef DWORD EQLocalizeLanguage;
typedef DWORD EScrollCode;

// Forward class declarations
class _EverQuestinfo;
class _PackFileData;
class _PackFileDataRawFile;
class _partyGroup;
class AltAdvManager;
class bad_word_class;
class CAAWnd;
class CActionsWnd;
class CAlarmWnd;
class CBankWnd;
class CBazaarSearchWnd;
class CBazaarWnd;
class CBodyTintWnd;
class CBookWnd;
class CBreathWnd;
class CBuffWindow;
class CBugReportWnd;
class CButtonDrawTemplate;
class CButtonTemplate;
class CButtonWnd;
class CCastingWnd;
class CCastSpellWnd;
class CCharacterCreation;
class CCharacterSelect;
class CChatManager;
class CChatWindow;
class CCheckBoxWnd;
class CClickStickInfo;
class CColorPickerWnd;
class CComboboxTemplate;
class CComboWnd;
class CCompassWnd;
class CConfirmationDialog;
class CContainerMgr;
class CContainerWnd;
class CContextMenu;
class CContextMenuManager;
class CControlTemplate;
class CCursorAttachment;
class CDIMap;
class CDisplay;
class CEditBaseWnd;
class CEditboxTemplate;
class CEditLabelWnd;
class CEditWnd;
class CEQSuiteTextureLoader;
class CEverQuest;
class CExploreModeWnd;
class CFacePick;
class CFeedbackWnd;
class CFileSelectionWnd;
class CFriendsWnd;
class CGaugeDrawTemplate;
class CGaugeTemplate;
class CGaugeWnd;
class CGemsGameWnd;
class CGiveWnd;
class CGroupSearchFiltersWnd;
class CGroupSearchWnd;
class CGroupWnd;
class CGuild;
class CGuildMgmtWnd;
class ChannelServerApi;
class ChannelServerHandler;
class CHashCXStrInt32;
class CHelpWnd;
class CHotButtonWnd;
class CIMECandidateList;
class CIMEComposition;
class CIMEManager;
class CIMEStatusBar;
class CInspectWnd;
class CInventoryWnd;
class CInvSlot;
class CInvSlotMgr;
class CInvSlotTemplate;
class CInvSlotWnd;
class CItemDisplayWnd;
class CJournalCatWnd;
class CJournalNPCWnd;
class CJournalTextWnd;
class CKeyCXStrValueInt32;
class CLabel;
class CLabelTemplate;
class CListboxColumnTemplate;
class CListboxTemplate;
class CListWnd;
class CLoadskinWnd;
class CLootWnd;
class CMapToolbarWnd;
class CMapViewWnd;
class CMemoryStream;
class CMerchantWnd;
class CMusicPlayerWnd;
class CMutexLock;
class CMutexLockCounted;
class CMutexSync;
class CMutexSyncCounted;
class CNoteWnd;
class ConversationJournal;
class COptionsWnd;
class CPageTemplate;
class CPageWnd;
class CParam;
class CParamButton;
class CParamButtonDrawTemplate;
class CParamClass;
class CParamCombobox;
class CParamControl;
class CParamEditbox;
class CParamFrame;
class CParamFrameTemplate;
class CParamGauge;
class CParamGaugeDrawTemplate;
class CParamInvSlot;
class CParamLabel;
class CParamListbox;
class CParamListboxColumn;
class CParamPage;
class CParamPoint;
class CParamRGB;
class CParamScreen;
class CParamScreenPiece;
class CParamScrollbarDrawTemplate;
class CParamSize;
class CParamSlider;
class CParamSliderDrawTemplate;
class CParamSpellGem;
class CParamSpellGemDrawTemplate;
class CParamStaticAnimation;
class CParamStaticFrame;
class CParamStaticHeader;
class CParamStaticScreenPiece;
class CParamStaticText;
class CParamSTMLbox;
class CParamSuiteDefaults;
class CParamTabBox;
class CParamTextureInfo;
class CParamUi2DAnimation;
class CParamWindowDrawTemplate;
class CParseTokensXML;
class CParseTokXML;
class CPetInfoWnd;
class CPetitionQWnd;
class CPlayerNotesWnd;
class CPlayerWnd;
class CQuantityWnd;
class CRadioGroup;
class CRaid;
class CRaidOptionsWnd;
class CRaidWnd;
class CRC32Generator;
class CResolutionHandler;
class CScreenPieceTemplate;
class CScreenTemplate;
class CScrollbarTemplate;
class CSelectorWnd;
class CSidlManager;
class CSidlScreenWnd;
class CSkillsSelectWnd;
class CSkillsWnd;
class CSliderDrawTemplate;
class CSliderTemplate;
class CSliderWnd;
class CSocialEditWnd;
class CSoulmarkWnd;
class CSpellBookWnd;
class CSpellGemDrawTemplate;
class CSpellGemTemplate;
class CSpellGemWnd;
class CStaticAnimationTemplate;
class CStaticFrameTemplate;
class CStaticHeaderTemplate;
class CStaticScreenPieceTemplate;
class CStaticTextTemplate;
class CSTMLboxTemplate;
class CStmlReport;
class CStmlWnd;
class CStoryWnd;
class CTabBoxTemplate;
class CTabWnd;
class CTAFrameDraw;
class CTargetWnd;
class CTextEntryWnd;
class CTextureAnimation;
class CTextureFont;
class CTimeLeftWnd;
class CTipWnd;
class CTokenXML;
class CTrackingWnd;
class CTradeWnd;
class CTrainWnd;
class CUITextureInfo;
class CUITexturePiece;
class CVector3;
class CVideoModesWnd;
class CXFileXML;
class CXMLData;
class CXMLDataClass;
class CXMLDataManager;
class CXMLDataPtr;
class CXMLEnumInfo;
class CXMLParamManager;
class CXMLSOMAttribute;
class CXMLSOMAttributeType;
class CXMLSOMCursor;
class CXMLSOMCursorSave;
class CXMLSOMCursorSaveFast;
class CXMLSOMCursorTraverseChildren;
class CXMLSOMDocument;
class CXMLSOMDocumentBase;
class CXMLSOMElement;
class CXMLSOMElementType;
class CXMLSOMNode;
class CXMLSOMNodePtr;
class CXMLSOMParser;
class CXMLSOMSchema;
class CXMLSOMSimpleType;
class CXPoint;
class CXRect;
class CXStr;
class CXStrSingleton;
class CXWnd;
class CXWndDrawTemplate;
class CXWndManager;
class EmitterManager;
class engineInterface;
class EQ_Affect;
class EQ_AltAbility;
class EQ_Character;
class EQ_CharacterData;
class EQ_Container;
class EQ_Equipment;
class EQ_Item;
class EQ_LoadingS;
class EQ_Note;
class EQ_PC;
class EQ_Skill;
class EQ_Spell;
class EQAnimation;
class EQEffect;
class EqEmitterData;
class EQHSprite;
class EQItemList;
class EQMissile;
class EqMobileEmitter;
class EQMoneyList;
class EQNewPlayerAnimation;
class EQObject;
class EQOldPlayerAnimation;
class EQPlayer;
class EQPMInfo;
class EqSoundManager;
class EQSwitch;
class EqSwitchManager;
class EQUtil;
class EQWorldData;
class EQZoneInfo;
class FilePath;
class flex_unit;
class GrammarRulesClass;
class GuildMember;
class JournalNPC;
class KeyCombo;
class KeypressHandler;
class LogicalPacket;
class MapViewMap;
class MemoryPoolManager;
class MidiInstance;
class monty;
class Mp3Manager;
class MusicManager;
class PacketPacker;
class PacketPackerManager;
class PackFile;
class PackFS;
class PooledLogicalPacket;
class public_key;
class SAmpersandEntry;
class SFormattedText;
class ShareBase;
class SharedString;
class SHistoryElement;
class SimpleLogicalPacket;
class SLinkInfo;
class SListWndCell;
class SListWndCellEditUpdate;
class SListWndColumn;
class SListWndLine;
class SListWndSortInfo;
class SoundAsset;
class SoundControl;
class SoundEmitter;
class SoundInstance;
class SoundManager;
class SoundObject;
class SParseVariables;
class SpellManager;
class STable;
class STableCell;
class STempTable;
class STempTableCell;
class STempTableRow;
class STextLine;
class STextureAnimationFrame;
class StringItem;
class StringTable;
class TextFileReader;
class type_info;
class UdpConnection;
class UdpConnectionHandler;
class UdpIpAddress;
class UdpManager;
class UdpMisc;
class UdpReliableChannel;
class vlong;
class vlong_value;
class Wave3dInstance;
class WaveInstance;
class WrappedLogicalPacket;
class ZlibUtil;
class ZoneNPCLoadTextManager;
class CTextOverlay;
// End forward class declarations

// Class declarations
class CXStr
{
public:
//EQLIB_OBJECT CXStr::~CXStr(void);
//EQLIB_OBJECT CXStr::CXStr(char const *);
//EQLIB_OBJECT CXStr::CXStr(char const *,int);
//EQLIB_OBJECT CXStr::CXStr(char);
//EQLIB_OBJECT CXStr::CXStr(class CXStr const &);
//EQLIB_OBJECT CXStr::CXStr(int,int,char);
//EQLIB_OBJECT CXStr::CXStr(unsigned short const *);
//EQLIB_OBJECT CXStr::CXStr(void);
//EQLIB_OBJECT char *CXStr::operator char *(void)const;
//EQLIB_OBJECT unsigned short *CXStr::operator unsigned short *(void)const;
//EQLIB_OBJECT bool CXStr::Find(char,int &);
//EQLIB_OBJECT bool CXStr::Find(class CXStr const &,int &);
//EQLIB_OBJECT bool CXStr::Find(unsigned short,int &);
//EQLIB_OBJECT bool CXStr::FindLast(char,int &);
//EQLIB_OBJECT char CXStr::GetChar(long)const;
//EQLIB_OBJECT char CXStr::operator[](int)const;
//EQLIB_OBJECT char CXStr::SetChar(long,char);
//EQLIB_OBJECT class CXStr & CXStr::operator=(char const *);
//EQLIB_OBJECT class CXStr & CXStr::operator=(class CXStr const &);
//EQLIB_OBJECT class CXStr CXStr::Copy(long,long)const;
//EQLIB_OBJECT class CXStr CXStr::Left(int)const;
//EQLIB_OBJECT class CXStr CXStr::Mid(int,int)const;
//EQLIB_OBJECT class CXStr CXStr::Right(int)const;
////EQLIB_OBJECT enum EStringEncoding CXStr::GetEncoding(void)const;
//EQLIB_OBJECT int __cdecl CXStr::PrintString(char const *,...);
////EQLIB_OBJECT int CXStr::Compare(class CXStr const &,enum CompareCode)const;
////EQLIB_OBJECT int CXStr::CompareN(class CXStr const &,int,enum CompareCode)const;
//EQLIB_OBJECT int CXStr::ConvertToInt(void);
//EQLIB_OBJECT int CXStr::operator==(char const *)const;
//EQLIB_OBJECT int CXStr::operator==(class CXStr const &)const;
//EQLIB_OBJECT int CXStr::operator>(class CXStr const &)const;
//EQLIB_OBJECT long CXStr::GetLength(void)const;
//EQLIB_OBJECT unsigned short CXStr::GetUnicode(long)const;
//EQLIB_OBJECT unsigned short CXStr::SetUnicode(long,unsigned short);
////EQLIB_OBJECT void * CXStr::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CXStr::AddCr(void);
//EQLIB_OBJECT void CXStr::Blank(void);
//EQLIB_OBJECT void CXStr::BlankPreAllocate(int);
//EQLIB_OBJECT void CXStr::CopySelf(long,long);
//EQLIB_OBJECT void CXStr::Delete(long,long);
//EQLIB_OBJECT void CXStr::Insert(long,char);
//EQLIB_OBJECT void CXStr::Insert(long,class CXStr const &);
//EQLIB_OBJECT void CXStr::operator+=(char const *);
//EQLIB_OBJECT void CXStr::operator+=(char);
//EQLIB_OBJECT void CXStr::operator+=(class CXStr const &);
//EQLIB_OBJECT void CXStr::operator+=(unsigned short);
////EQLIB_OBJECT void CXStr::SetEncoding(enum EStringEncoding);
//EQLIB_OBJECT void CXStr::SetLowerCase(void);
//EQLIB_OBJECT void CXStr::SetUpperCase(void);
//EQLIB_OBJECT void CXStr::Strip(char);
//EQLIB_OBJECT void CXStr::StripAll(char);
//EQLIB_OBJECT void CXStr::StripLeading(char);
//EQLIB_OBJECT void CXStr::StripTrailing(char);
// protected
//EQLIB_OBJECT static int __cdecl CXStr::LenUnicodeToUtf8(unsigned short const *);
//EQLIB_OBJECT static int __cdecl CXStr::UnicodeToUtf8(unsigned short const *,char *,int);
//EQLIB_OBJECT static int __cdecl CXStr::Utf8ToUnicode(char const *,unsigned short *,int);
////EQLIB_OBJECT struct CStrRep * CXStr::AllocRepNoLock(long,enum EStringEncoding);
////EQLIB_OBJECT void CXStr::Assure(long,enum EStringEncoding);
//EQLIB_OBJECT void CXStr::AssureCopy(void);
//EQLIB_OBJECT void CXStr::FreeRep(struct CStrRep *);
//EQLIB_OBJECT void CXStr::FreeRepNoLock(struct CStrRep *);
// private
//EQLIB_OBJECT void CXStr::CheckNoLock(void);

	PCXSTR Ptr;

};

class CXWnd
{
public:
//EQLIB_OBJECT enum UIType CXWnd::GetType();
//EQLIB_OBJECT class CXMLData * CXWnd::GetXMLData();
//EQLIB_OBJECT class CXWnd * CXWnd::GetChildItem(PCHAR Name);
//EQLIB_OBJECT CXWnd::CXWnd(class CXWnd *,unsigned __int32,class CXRect);
//EQLIB_OBJECT bool CXWnd::HasFocus(void)const;
//EQLIB_OBJECT bool CXWnd::IsActive(void)const;
//EQLIB_OBJECT bool CXWnd::IsDescendantOf(class CXWnd const *)const;
//EQLIB_OBJECT bool CXWnd::IsEnabled(void)const;
//EQLIB_OBJECT bool CXWnd::IsReallyVisible(void)const;
////EQLIB_OBJECT bool CXWnd::IsType(enum EWndRuntimeType)const;
//EQLIB_OBJECT class CButtonDrawTemplate const * CXWnd::GetCloseBoxTemplate(void)const;
//EQLIB_OBJECT class CButtonDrawTemplate const * CXWnd::GetMinimizeBoxTemplate(void)const;
//EQLIB_OBJECT class CButtonDrawTemplate const * CXWnd::GetTileBoxTemplate(void)const;
//EQLIB_OBJECT class CTAFrameDraw const * CXWnd::GetBorderFrame(void)const;
//EQLIB_OBJECT class CTAFrameDraw const * CXWnd::GetTitlebarHeader(void)const;
//EQLIB_OBJECT class CXRect CXWnd::GetClientClipRect(void)const;
//EQLIB_OBJECT class CXRect CXWnd::GetRelativeRect(void)const;
//EQLIB_OBJECT class CXRect CXWnd::GetScreenClipRect(void)const;
//EQLIB_OBJECT class CXRect CXWnd::GetScreenRect(void)const;
//EQLIB_OBJECT class CXStr CXWnd::GetWindowTextA(void)const;
//EQLIB_OBJECT class CXStr CXWnd::GetXMLTooltip(void)const;
////EQLIB_OBJECT class CXWnd * CXWnd::GetChildItem(class CXStr);
//EQLIB_OBJECT class CXWnd * CXWnd::GetChildWndAt(class CXPoint)const;
//EQLIB_OBJECT class CXWnd * CXWnd::GetFirstChildWnd(void)const;
//EQLIB_OBJECT class CXWnd * CXWnd::GetNextChildWnd(class CXWnd *)const;
//EQLIB_OBJECT class CXWnd * CXWnd::GetNextSib(void)const;
//EQLIB_OBJECT class CXWnd * CXWnd::SetFocus(void);
//EQLIB_OBJECT int CXWnd::DoAllDrawing(void)const;
//EQLIB_OBJECT int CXWnd::DrawChildren(void)const;
//EQLIB_OBJECT int CXWnd::DrawCloseBox(void)const;
//EQLIB_OBJECT int CXWnd::DrawHScrollbar(int,int,int)const;
//EQLIB_OBJECT int CXWnd::DrawMinimizeBox(void)const;
//EQLIB_OBJECT int CXWnd::DrawTileBox(void)const;
//EQLIB_OBJECT int CXWnd::DrawVScrollbar(int,int,int)const;
//EQLIB_OBJECT int CXWnd::GetWidth(void)const;
//EQLIB_OBJECT int CXWnd::Minimize(bool);
//EQLIB_OBJECT int CXWnd::Move(class CXPoint);
//EQLIB_OBJECT int CXWnd::Move(class CXRect);
//EQLIB_OBJECT int CXWnd::ProcessTransition(void);
//EQLIB_OBJECT int CXWnd::Resize(int,int);
//EQLIB_OBJECT int CXWnd::Show(bool,bool);
//EQLIB_OBJECT int CXWnd::Tile(bool);
//EQLIB_OBJECT static class CXRect __cdecl CXWnd::GetTooltipRect(class CXPoint,class CXSize);
//EQLIB_OBJECT static class CXRect __cdecl CXWnd::GetTooltipRect(class CXSize);
//EQLIB_OBJECT static class CXWndDrawTemplate CXWnd::sm_wdtDefaults;
//EQLIB_OBJECT static int __cdecl CXWnd::DrawColoredRect(class CXRect,unsigned long,class CXRect);
//EQLIB_OBJECT static int __cdecl CXWnd::DrawLasso(class CXRect,unsigned long,class CXRect);
//EQLIB_OBJECT static int __cdecl CXWnd::DrawRaisedRect(class CXRect,class CXRect);
//EQLIB_OBJECT static int __cdecl CXWnd::DrawSunkenRect(class CXRect,class CXRect);
//EQLIB_OBJECT void CXWnd::Bottom(void);
//EQLIB_OBJECT void CXWnd::BringChildWndToTop(class CXWnd *);
//EQLIB_OBJECT void CXWnd::BringToTop(bool);
//EQLIB_OBJECT void CXWnd::Center(void);
//EQLIB_OBJECT void CXWnd::ClrFocus(void);
//EQLIB_OBJECT void CXWnd::DrawTooltipAtPoint(class CXPoint)const;
//EQLIB_OBJECT void CXWnd::Left(void);
//EQLIB_OBJECT void CXWnd::Refade(void);
//EQLIB_OBJECT void CXWnd::Right(void);
//EQLIB_OBJECT void CXWnd::SetFirstChildPointer(class CXWnd *);
//EQLIB_OBJECT void CXWnd::SetKeyTooltip(int,int);
//EQLIB_OBJECT void CXWnd::SetLookLikeParent(void);
//EQLIB_OBJECT void CXWnd::SetMouseOver(bool);
//EQLIB_OBJECT void CXWnd::SetNextSibPointer(class CXWnd *);
//EQLIB_OBJECT void CXWnd::SetTooltip(class CXStr);
//EQLIB_OBJECT void CXWnd::SetXMLTooltip(class CXStr);
//EQLIB_OBJECT void CXWnd::SetZLayer(int);
//EQLIB_OBJECT void CXWnd::StartFade(unsigned char,unsigned __int32);
// virtual
//EQLIB_OBJECT bool CXWnd::IsPointTransparent(class CXPoint)const;
//EQLIB_OBJECT bool CXWnd::IsValid(void)const;
//EQLIB_OBJECT bool CXWnd::QueryClickStickDropOK(class CClickStickInfo *)const;
//EQLIB_OBJECT bool CXWnd::QueryDropOK(struct SDragDropInfo *)const;
//EQLIB_OBJECT class CTextureAnimation * CXWnd::GetClickStickCursor(class CClickStickInfo *)const;
//EQLIB_OBJECT class CTextureAnimation * CXWnd::GetCursorToDisplay(void)const;
//EQLIB_OBJECT class CTextureAnimation * CXWnd::GetDragDropCursor(struct SDragDropInfo *)const;
//EQLIB_OBJECT class CXRect CXWnd::GetClientRect(void)const;
//EQLIB_OBJECT class CXRect CXWnd::GetHitTestRect(int)const;
//EQLIB_OBJECT class CXRect CXWnd::GetInnerRect(void)const;
//EQLIB_OBJECT class CXRect CXWnd::GetMinimizedRect(void)const;
//EQLIB_OBJECT class CXSize CXWnd::GetMinSize(void)const;
//EQLIB_OBJECT class CXSize CXWnd::GetUntileSize(void)const;
//EQLIB_OBJECT class CXStr CXWnd::GetTooltip(void)const;
//EQLIB_OBJECT int CXWnd::AboutToDeleteWnd(class CXWnd *);
//EQLIB_OBJECT int CXWnd::Draw(void)const;
//EQLIB_OBJECT int CXWnd::DrawBackground(void)const;
//EQLIB_OBJECT int CXWnd::DrawCaret(void)const;
//EQLIB_OBJECT int CXWnd::DrawChildItem(class CXWnd const *,void *)const;
//EQLIB_OBJECT int CXWnd::DrawCursor(class CXPoint,class CXRect,bool &);
//EQLIB_OBJECT int CXWnd::DrawNC(void)const;
//EQLIB_OBJECT int CXWnd::DrawTitleBar(class CXRect)const;
//EQLIB_OBJECT int CXWnd::DrawTooltip(class CXWnd const *)const;
//EQLIB_OBJECT int CXWnd::HandleKeyboardMsg(unsigned __int32,unsigned __int32,bool);
//EQLIB_OBJECT int CXWnd::HandleLButtonDown(class CXPoint *,unsigned __int32);
//EQLIB_OBJECT int CXWnd::HandleLButtonHeld(class CXPoint *,unsigned __int32);
//EQLIB_OBJECT int CXWnd::HandleLButtonUp(class CXPoint *,unsigned __int32);
//EQLIB_OBJECT int CXWnd::HandleLButtonUpAfterHeld(class CXPoint *,unsigned __int32);
//EQLIB_OBJECT int CXWnd::HandleMouseMove(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CXWnd::HandleRButtonDown(class CXPoint *,unsigned __int32);
//EQLIB_OBJECT int CXWnd::HandleRButtonHeld(class CXPoint *,unsigned __int32);
//EQLIB_OBJECT int CXWnd::HandleRButtonUp(class CXPoint *,unsigned __int32);
//EQLIB_OBJECT int CXWnd::HandleRButtonUpAfterHeld(class CXPoint *,unsigned __int32);
//EQLIB_OBJECT int CXWnd::HandleWheelButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CXWnd::HandleWheelButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CXWnd::HandleWheelMove(class CXPoint,int,unsigned __int32);
//EQLIB_OBJECT int CXWnd::HitTest(class CXPoint,int *)const;
//EQLIB_OBJECT int CXWnd::OnActivate(class CXWnd *);
//EQLIB_OBJECT int CXWnd::OnBroughtToTop(void);
//EQLIB_OBJECT int CXWnd::OnClickStick(class CClickStickInfo *,unsigned __int32,bool);
//EQLIB_OBJECT int CXWnd::OnDragDrop(struct SDragDropInfo *);
//EQLIB_OBJECT int CXWnd::OnHScroll(EScrollCode,int);
//EQLIB_OBJECT int CXWnd::OnKillFocus(class CXWnd *);
//EQLIB_OBJECT int CXWnd::OnMinimizeBox(void);
//EQLIB_OBJECT int CXWnd::OnMove(class CXRect);
//EQLIB_OBJECT int CXWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CXWnd::OnResize(int,int);
//EQLIB_OBJECT int CXWnd::OnSetFocus(class CXWnd *);
//EQLIB_OBJECT int CXWnd::OnShow(void);
//EQLIB_OBJECT int CXWnd::OnTile(void);
//EQLIB_OBJECT int CXWnd::OnTileBox(void);
//EQLIB_OBJECT int CXWnd::OnVScroll(EScrollCode,int);
//EQLIB_OBJECT int CXWnd::PostDraw(void)const;
////EQLIB_OBJECT int CXWnd::RequestDockInfo(enum EDockAction,class CXWnd *,class CXRect *);
//EQLIB_OBJECT int CXWnd::SetVScrollPos(int);
//EQLIB_OBJECT int CXWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CXWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CXWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CXWnd::Deactivate(void);
//EQLIB_OBJECT void CXWnd::OnReloadSidl(void);
//EQLIB_OBJECT void CXWnd::SetAttributesFromSidl(class CParamScreenPiece *);
//EQLIB_OBJECT void CXWnd::SetDrawTemplate(class CXWndDrawTemplate *);
//EQLIB_OBJECT void CXWnd::SetWindowTextA(class CXStr &);
// protected
//EQLIB_OBJECT static class CXWndManager * & CXWnd::sm_pMgr;
// private
//EQLIB_OBJECT static unsigned char CXWnd::sm_byCurrentAlpha;

// Data members
/*0x000*/   struct _CXWNDVFTABLE   *pvfTable;
/*0x004*/   DWORD   Unknown0x004;   // set to 0 in CXWnd::Refade
/*0x008*/   DWORD   Unknown0x008;
/*0x00c*/   DWORD   TimeMouseOver;     // "Delay" in ini
/*0x010*/   DWORD   FadeDuration;      //  "Duration" in ini
/*0x014*/   BYTE    FadeToAlpha;      // set to 1 in CXWnd::Refade
/*0x015*/   BYTE    Unknown0x015;     // Faded?
/*0x016*/   BYTE    Locked; // 
/*0x017*/   BYTE    Unknown0x017;
/*0x018*/   BYTE    Unknown0x018;
/*0x019*/   BYTE    Unknown0x019;
/*0x01a*/   BYTE    Unknown0x01a;
/*0x01b*/   BYTE    Unknown0x01b;
/*0x01c*/   BYTE    Unknown0x01c[0xc];
/*0x028*/   struct  _CSIDLWND *pParentWindow;  // If this is NULL, coordinates are absolute...
/*0x02c*/   struct  _CSIDLWND *pChildren;
/*0x030*/   struct  _CSIDLWND *pSiblings;  // its a tree. 
/*0x034*/   BYTE    HasChildren;
/*0x035*/   BYTE    HasSiblings; // 
/*0x036*/   BYTE    Unknown0x02e[0x2];
/*0x038*/   DWORD   XMLIndex;
/*0x03 */   RECT    Location;
/*0x04 */   RECT    OldLocation;
/*0x05 */   BYTE    bShow;       // 
/*0x05 */   BYTE    Enabled;
/*0x05 */   BYTE    Minimized;  // 
/*0x05 */   BYTE    Unknown0x057; // ontilebox
/*0x05 */   BYTE    Unknown0x058;
/*0x05 */   BYTE    Unknown0x059;
/*0x05 */   BYTE    MouseOver;
/*0x05 */   BYTE    Unknown0x05b;
/*0x05 */   DWORD   WindowStyle; // bit 1 - vertical scroll, bit 2 - horizontal scroll, bit 4 - title bar?, bit 8 - border 
/*0x06 */   DWORD   Unknown0x060;// -> 0x60
			DWORD   Unknown0x064;
			DWORD   Unknown0x068;
/*0x   */   struct _CXSTR  *WindowText; // -> 0x6C
/*0x0  */   struct _CXSTR  *Tooltip; // -> 0x70
/*0x06 */   DWORD   UnknownCW; // CXWnd::SetLookLikeParent
/*0x07 */   ARGBCOLOR BGColor; // "BGTint.Red", green, blue
/*0x07 */   BYTE    Unknown0x074[0x10];
/*0x08 */   DWORD   BGType; // "BGType" in ini
/*0x08 */   struct _CXSTR  *XMLToolTip;// -> 0x90
/*0x08 */   BYTE    Unknown0x08c[0x14];
/*0x0a */   BYTE    Alpha; // "Alpha" in ini
/*0x0a */   BYTE    Fades; // "Fades" in ini
/*0x0a */   BYTE    Unknown0x0a2;
/*0x0a */   BYTE    Unknown0x0a3;
/*0x0a */   BYTE    Unknown0x0a4[0x0c];
/*0x0b */   DWORD   ZLayer; // 
/*0x0b */   DWORD   Unknown0x0b4;
/*0x0b */   LPVOID  DrawTemplate; //
/*0x0b */   BYTE    Unknown0x0b0[0xc];
/*0x0c */   union {
					_ITEMINFO* Item;
					_CSIDLWND* InvDescription;
			};
/*0x0c */   BYTE    Unknown0x0c0[0xc];
/*0x0d */   DWORD   Unknown0x0cc; // CXWnd::StartFade, CXWnd::Minimize
/*0x0d */   BYTE    Unknown0x0d0[0x10];
/*0x0e */   DWORD   FadeTickCount; // 
/*0x0f */   BYTE    Unknown0x0e4; // CXWnd::StartFade  
/*0x0f */   BYTE    Unknown0x0e5; // CXWnd::StartFade 
/*0x0f */   BYTE    Unknown0x0e6; 
/*0x0f */   BYTE    Unknown0x0e7;
/*0x0f */   DWORD   Unknown0x0e8;// CXWnd::StartFade, CXWnd::Minimize 
/*0x0f */   DWORD   VScrollMax; //
/*0x0f */   DWORD   VScrollPos; //
/*0x10 */   DWORD   HScrollMax; // 
/*0x10 */   DWORD   HScrollPos; // 
/*0x10 */   BYTE    ValidCXWnd; //
/*0x10 */   BYTE    Unused0x0f9[0x7];
};
#define ZoneToGoTo 0

class CSidlScreenWnd
{
public:
//EQLIB_OBJECT enum UIType CSidlScreenWnd::GetType();
//EQLIB_OBJECT class CXMLData * CSidlScreenWnd::GetXMLData();
//EQLIB_OBJECT class CXWnd * CSidlScreenWnd::GetChildItem(PCHAR Name);
//EQLIB_OBJECT CSidlScreenWnd::CSidlScreenWnd() {};
//EQLIB_OBJECT CSidlScreenWnd::CSidlScreenWnd(class CXWnd *,class CXStr);
//EQLIB_OBJECT CSidlScreenWnd::CSidlScreenWnd(class CXWnd *pWnd,class CXStr *Template,int Flags,int unknown4, char *unknown5);
//EQLIB_OBJECT CSidlScreenWnd::CSidlScreenWnd(class CXWnd *,unsigned __int32,class CXRect,class CXStr);
//EQLIB_OBJECT class CScreenPieceTemplate * CSidlScreenWnd::GetSidlPiece(class CXStr*)const;
//EQLIB_OBJECT class CXRect CSidlScreenWnd::GetSidlPieceRect(class CScreenPieceTemplate *,class CXRect)const;
////EQLIB_OBJECT class CXWnd * CSidlScreenWnd::GetChildItem(class CXStr&)const;
//EQLIB_OBJECT int CSidlScreenWnd::DrawSidlPiece(class CScreenPieceTemplate *,class CXRect,class CXRect)const;
//EQLIB_OBJECT void CSidlScreenWnd::AddButtonToRadioGroup(class CXStr,class CButtonWnd *);
//EQLIB_OBJECT void CSidlScreenWnd::CalculateHSBRange(void);
//EQLIB_OBJECT void CSidlScreenWnd::CalculateVSBRange(void);
//EQLIB_OBJECT void CSidlScreenWnd::CreateChildrenFromSidl(void);
//EQLIB_OBJECT void CSidlScreenWnd::EnableIniStorage(int,char *);
//EQLIB_OBJECT void CSidlScreenWnd::Init(class CXWnd *,class CXStr*,int,char *);
//EQLIB_OBJECT void CSidlScreenWnd::Init(class CXWnd *,unsigned __int32,class CXRect,class CXStr,int,char *);
//EQLIB_OBJECT void CSidlScreenWnd::LoadIniListWnd(class CListWnd *,char *);
//EQLIB_OBJECT void CSidlScreenWnd::SetScreen(class CXStr*);
//EQLIB_OBJECT void CSidlScreenWnd::StoreIniListWnd(class CListWnd const *,char *);
//EQLIB_OBJECT void CSidlScreenWnd::StoreIniVis(void);
// virtual
//EQLIB_OBJECT CSidlScreenWnd::~CSidlScreenWnd(void);
//EQLIB_OBJECT int CSidlScreenWnd::DrawBackground(void)const;
//EQLIB_OBJECT int CSidlScreenWnd::HandleRButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSidlScreenWnd::OnResize(int,int);
//EQLIB_OBJECT int CSidlScreenWnd::OnShow(void);
//EQLIB_OBJECT int CSidlScreenWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CSidlScreenWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSidlScreenWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CSidlScreenWnd::LoadIniInfo(void);
//EQLIB_OBJECT void CSidlScreenWnd::StoreIniInfo(void);
// protected
//EQLIB_OBJECT int CSidlScreenWnd::ConvertToRes(int,int,int,int);
//EQLIB_OBJECT void CSidlScreenWnd::LoadSidlScreen(void);
// private
//EQLIB_OBJECT static bool CSidlScreenWnd::m_useIniFile;
// data members
/*0x000*/   struct _CSIDLWNDVFTABLE   *pvfTable;
/*0x004*/   DWORD   Unknown0x004;   // set to 0 in CXWnd::Refade
/*0x008*/   DWORD   Unknown0x008;
/*0x00c*/   DWORD   TimeMouseOver;     // "Delay" in ini
/*0x010*/   DWORD   FadeDuration;      //  "Duration" in ini
/*0x014*/   BYTE    FadeToAlpha;      // set to 1 in CXWnd::Refade   // -->0x14
/*0x015*/   BYTE    Unknown0x015;     // Faded?
/*0x016*/   BYTE    Locked; // 
/*0x017*/   BYTE    Unknown0x017;
/*0x018*/   BYTE    Unknown0x018;
/*0x019*/   BYTE    Unknown0x019;
/*0x01a*/   BYTE    Unknown0x01a;
/*0x01b*/   BYTE    Unknown0x01b;
/*0x01c*/   BYTE    Unknown0x01c[0x0c];//-->1c
/*0x028*/   struct  _CSIDLWND *pParentWindow;  // If this is NULL, coordinates are absolute...  //-->28
/*0x02c*/   struct  _CSIDLWND *pChildren;
/*0x0  */   struct  _CSIDLWND *pSiblings;  // its a tree.  // ->0x28
/*0x02 */   BYTE    HasChildren;
/*0x02 */   BYTE    HasSiblings; // ->0x2d
/*0x02 */   BYTE    Unknown0x02e[0x2];
/*0x03 */   DWORD   XMLIndex;
/*0x03 */   RECT    Location;
/*0x04 */   RECT    OldLocation;
/*0x05 */   BYTE    Show;       // -> 0x54
/*0x05 */   BYTE    Enabled;
/*0x05 */   BYTE    Minimized;  // -> 0x56
/*0x05 */   BYTE    Unknown0x057; // ontilebox
/*0x05 */   BYTE    Unknown0x058;
/*0x05 */   BYTE    Unknown0x059;
/*0x05 */   BYTE    MouseOver;
/*0x05 */   BYTE    Unknown0x05b;
/*0x05 */   DWORD   WindowStyle; // bit 1 - vertical scroll, bit 2 - horizontal scroll, bit 4 - title bar?, bit 8 - border
/*0x06 */   DWORD   Unknown0x060;//
/*0x06 */	DWORD   Unknown0x064;
/*0x06 */	DWORD   Unknown0x068;
/*0x06 */   struct _CXSTR  *WindowText; // 
/*0x07 */   struct _CXSTR  *Tooltip;
/*0x07 */   DWORD   UnknownCW; // CXWnd::SetLookLikeParent
/*0x07 */   ARGBCOLOR BGColor; // "BGTint.Red", green, blue
/*0x07 */   BYTE    Unknown0x07c[0x10];
/*0x08 */   DWORD   BGType; // "BGType" in ini 
/*0x09 */   struct _CXSTR  *XMLToolTip;
/*0x09 */   BYTE    Unknown0x094[0x14];
/*0x0a */   BYTE    Alpha; // "Alpha" in ini 
/*0x0a */   BYTE    Fades; // "Fades" in ini
/*0x0a */   BYTE    Unknown0x0aa;
/*0x0a */   BYTE    Unknown0x0ab;
/*0x0a */   BYTE    Unknown0x0ac[0x0c];
/*0x0b */   DWORD   ZLayer; // 
/*0x0b */   DWORD   Unknown0x0bc;
/*0x0c */   LPVOID  DrawTemplate; //
/*0x0c */   BYTE    Unknown0x0c4[0xc];
/*0x0d */   union {
					_ITEMINFO* Item;
					_CSIDLWND* InvDescription;
			};
/*0x0d */   BYTE    Unknown0x0d4[0xc];
/*0x0e */   DWORD   Unknown0x0e0; // CXWnd::StartFade, CXWnd::Minimize
/*0x0e */   BYTE    Unknown0x0e4[0x10];
/*0x0f */   DWORD   FadeTickCount; // -> 0x0
/*0x0f */   BYTE    Unknown0x0f8; // CXWnd::StartFade  // 0x
/*0x0f */   BYTE    Unknown0x0f9; // CXWnd::StartFade  // 0x
/*0x0f */   BYTE    Unknown0x0fa; 
/*0x0f */   BYTE    Unknown0x0fb;
/*0x0f */   DWORD   Unknown0x0fc;// CXWnd::StartFade, CXWnd::Minimize // 0x
/*0x10 */   DWORD   VScrollMax; // -> 0x
/*0x10 */   DWORD   VScrollPos; // -> 0x
/*0x10 */   DWORD   HScrollMax; // -> 0x
/*0x10 */   DWORD   HScrollPos; // -> 0x
/*0x11 */   BYTE    ValidCXWnd; // -> 0x
/*0x11 */   BYTE    Unused0x0f9[0x3];
/*0x11 */   struct _CXSTR  *SidlText; 
/*0x11 */   union { 
			   struct _CXSTR  *SidlScreen; 
               DWORD   SlotID; 
         }; //-->120
/*0x11 */   LPVOID SidlPiece;   // CScreenPieceTemplate (important)  // -->124
/*0x12 */   BYTE    Checked;
/*0x12 */   BYTE    Highlighted;
/*0x12 */   BYTE    Unused0x122[0x2];
/*0x12 */   DWORD   TextureAnim; // used in CSidlScreenWnd::AddButtonToRadioGroup
/*0x12 */   struct _CXSTR *   InputText;
/*0x12 */   DWORD   Selector;
/*0x13 */   DWORD   PushToSelector;
/*0x13 */   DWORD   EnableINIStorage;
/*0x13 */   struct _CXSTR *INIStorageName;// -->
/*0x13 */   DWORD   Unknown0x13C;// CTextureAnimation
/*0x14 */   DWORD   Unknown0x140;// CTextureAnimation
/*0x14 */   LPVOID  ContextMenu; // CTextureAnimation
/*0x14 */	DWORD   Unknown0x148;// CTextureAnimation
/*0x14 */	DWORD   Unknown0x14C;// CTextureAnimation

	//inline CXWnd *pXWnd() {return (CXWnd*)this;};
};




class _EverQuestinfo
{
public:
//EQLIB_OBJECT void _EverQuestinfo::SetAutoAttack(bool);
};

class _PackFileData
{
public:
//EQLIB_OBJECT _PackFileData::~_PackFileData(void);
// virtual
//EQLIB_OBJECT int _PackFileData::readBlock(void);
};

class _PackFileDataRawFile
{
public:
// virtual
//EQLIB_OBJECT int _PackFileDataRawFile::readBlock(void);
};

class _partyGroup
{
public:
//EQLIB_OBJECT int _partyGroup::getNumMembers(void)const;
};

class AltAdvManager
{
public:
//EQLIB_OBJECT AltAdvManager::AltAdvManager(void);
//EQLIB_OBJECT bool AltAdvManager::IsAbilityReady(class EQ_PC *,EQData::PALTABILITY,int *);
//EQLIB_OBJECT int AltAdvManager::AbilitiesByClass(int,int);
//EQLIB_OBJECT int AltAdvManager::AltSkillReqs(class EQ_PC *,int);
//EQLIB_OBJECT int AltAdvManager::CalculateDoubleAttackChance(class EQ_PC *,int,unsigned char);
//EQLIB_OBJECT int AltAdvManager::CalculateFleetOfFoot(class EQ_PC *);
//EQLIB_OBJECT int AltAdvManager::CalculateHideTimeReduce(class EQ_PC *);
//EQLIB_OBJECT int AltAdvManager::CalculateInstrumentMasteryMod(class EQ_PC *);
//EQLIB_OBJECT int AltAdvManager::CalculateLoHHarmTouchReuseTimer(class EQ_PC *,int);
//EQLIB_OBJECT int AltAdvManager::CalculateMaxHPAA(class EQ_PC *,int);
//EQLIB_OBJECT int AltAdvManager::CalculateMaxStatAA(class EQ_PC *,int);
//EQLIB_OBJECT int AltAdvManager::CalculateMitigationBoost(class EQ_PC *,int);
//EQLIB_OBJECT int AltAdvManager::CalculateNimbleEvasionChance(class EQ_PC *);
//EQLIB_OBJECT int AltAdvManager::CalculateSingingMasteryMod(class EQ_PC *,int);
//EQLIB_OBJECT int AltAdvManager::CalculateSpellCastingMastery(class EQ_PC *);
//EQLIB_OBJECT int AltAdvManager::CalculateStalwartEnduranceChance(class EQ_PC *);
//EQLIB_OBJECT int AltAdvManager::CanTrainAbility(class EQ_PC *,int);
//EQLIB_OBJECT int AltAdvManager::GetAALevelNeeded(class EQ_PC *,int);
//EQLIB_OBJECT int AltAdvManager::GetAbilityTitle(class EQPlayer *);
//EQLIB_OBJECT int AltAdvManager::GetNextAbilityCost(int,int);
//EQLIB_OBJECT int AltAdvManager::MeetsPoPLevelReqs(class EQ_PC *,int,int);
//EQLIB_OBJECT int AltAdvManager::TotalPointsInSkill(int,int);
//EQLIB_OBJECT unsigned long AltAdvManager::GetCalculatedTimer(class EQ_PC *,EQData::PALTABILITY);
//EQLIB_OBJECT void AltAdvManager::GetAbilityReqs(char *,int);
//EQLIB_OBJECT struct _ALTABILITY *AltAdvManager::GetAltAbility(int);
};

class bad_word_class
{
public:
//EQLIB_OBJECT bad_word_class::bad_word_class(char *);
};

class CAAWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CAAWnd::CAAWnd(class CXWnd *);
//EQLIB_OBJECT void CAAWnd::Activate(void);
//EQLIB_OBJECT void CAAWnd::CancelAASpend(void);
//EQLIB_OBJECT void CAAWnd::ConfirmAASpend(void);
//EQLIB_OBJECT void CAAWnd::SendNewPercent(void);
//EQLIB_OBJECT void CAAWnd::ShowAbility(int);
//EQLIB_OBJECT void CAAWnd::Update(void);
//EQLIB_OBJECT void CAAWnd::UpdateTimer(void);
// virtual
//EQLIB_OBJECT CAAWnd::~CAAWnd(void);
//EQLIB_OBJECT int CAAWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CAAWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CAAWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CAAWnd::`vector deleting destructor'(unsigned int);
#define SafeZLoc 0
//EQLIB_OBJECT void CAAWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CAAWnd::Init(void);
//EQLIB_OBJECT void CAAWnd::UpdateSelected(void);
};

class CActionsWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CActionsWnd::CActionsWnd(class CXWnd *);
//EQLIB_OBJECT class CButtonWnd * CActionsWnd::GetAbilityBtn(int);
//EQLIB_OBJECT class CButtonWnd * CActionsWnd::GetCombatBtn(int);
//EQLIB_OBJECT class CButtonWnd * CActionsWnd::GetMenuBtn(int);
//EQLIB_OBJECT int CActionsWnd::GetCurrentPageEnum(void)const;
//EQLIB_OBJECT void CActionsWnd::Activate(int);
//EQLIB_OBJECT void CActionsWnd::KeyMapUpdated(void);
//EQLIB_OBJECT void CActionsWnd::SelectSkillForAbilityBtn(int);
//EQLIB_OBJECT void CActionsWnd::SelectSkillForCombatBtn(int);
//EQLIB_OBJECT void CActionsWnd::UpdateButtonText(void);
// virtual
//EQLIB_OBJECT CActionsWnd::~CActionsWnd(void);
//EQLIB_OBJECT int CActionsWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CActionsWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CActionsWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CActionsWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CActionsWnd::Deactivate(void);
// private
//EQLIB_OBJECT int CActionsWnd::AbilitiesPageActivate(void);
//EQLIB_OBJECT int CActionsWnd::AbilitiesPageDeactivate(void);
//EQLIB_OBJECT int CActionsWnd::AbilitiesPageOnProcessFrame(void);
//EQLIB_OBJECT int CActionsWnd::AbilitiesPageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int CActionsWnd::CombatPageActivate(void);
//EQLIB_OBJECT int CActionsWnd::CombatPageDeactivate(void);
//EQLIB_OBJECT int CActionsWnd::CombatPageOnProcessFrame(void);
//EQLIB_OBJECT int CActionsWnd::CombatPageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int CActionsWnd::MainPageActivate(void);
//EQLIB_OBJECT int CActionsWnd::MainPageDeactivate(void);
//EQLIB_OBJECT int CActionsWnd::MainPageOnProcessFrame(void);
//EQLIB_OBJECT int CActionsWnd::MainPageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int CActionsWnd::RedirectActivateTo(class CPageWnd *);
//EQLIB_OBJECT int CActionsWnd::RedirectDeactivateTo(class CPageWnd *);
//EQLIB_OBJECT int CActionsWnd::RedirectOnProcessFrameTo(class CPageWnd *);
//EQLIB_OBJECT int CActionsWnd::RedirectWndNotificationTo(class CPageWnd *,class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int CActionsWnd::SocialsPageActivate(void);
//EQLIB_OBJECT int CActionsWnd::SocialsPageDeactivate(void);
//EQLIB_OBJECT int CActionsWnd::SocialsPageOnProcessFrame(void);
//EQLIB_OBJECT int CActionsWnd::SocialsPageWndNotification(class CXWnd *,unsigned __int32,void *);
};

class CAlarmWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CAlarmWnd::CAlarmWnd(class CXWnd *);
//EQLIB_OBJECT void CAlarmWnd::Activate(void);
// virtual
//EQLIB_OBJECT CAlarmWnd::~CAlarmWnd(void);
//EQLIB_OBJECT int CAlarmWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CAlarmWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CAlarmWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CAlarmWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CAlarmWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CAlarmWnd::DoNeverButton(void);
};

class CBankWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CBankWnd::CBankWnd(class CXWnd *,class CXStr);
//EQLIB_OBJECT int CBankWnd::GetNumBankSlots(void)const;
//EQLIB_OBJECT void CBankWnd::Activate(class EQPlayer *);
//EQLIB_OBJECT void CBankWnd::Deactivate(bool);
// virtual
//EQLIB_OBJECT CBankWnd::~CBankWnd(void);
//EQLIB_OBJECT int CBankWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CBankWnd::PostDraw(void)const;
//EQLIB_OBJECT int CBankWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CBankWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CBankWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CBankWnd::Deactivate(void);
// private
//EQLIB_OBJECT long CBankWnd::GetBankQtyFromCoinType(int);
//EQLIB_OBJECT void CBankWnd::ClickedMoneyButton(int,int);
//EQLIB_OBJECT void CBankWnd::Init(void);
//EQLIB_OBJECT void CBankWnd::UpdateMoneyDisplay(void);
};

class CBazaarSearchWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CBazaarSearchWnd::CBazaarSearchWnd(class CXWnd *);
//EQLIB_OBJECT char * CBazaarSearchWnd::GetPriceString(unsigned long);
//EQLIB_OBJECT void CBazaarSearchWnd::Activate(void);
//EQLIB_OBJECT void CBazaarSearchWnd::HandleBazaarMsg(char *,int);
//EQLIB_OBJECT void CBazaarSearchWnd::UpdatePlayerCombo(void);
//EQLIB_OBJECT void CBazaarSearchWnd::UpdatePlayerUpdateButton(bool);
// virtual
//EQLIB_OBJECT CBazaarSearchWnd::~CBazaarSearchWnd(void);
//EQLIB_OBJECT int CBazaarSearchWnd::Draw(void)const;
//EQLIB_OBJECT int CBazaarSearchWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CBazaarSearchWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CBazaarSearchWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CBazaarSearchWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CBazaarSearchWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CBazaarSearchWnd::AddItemtoList(char *,unsigned long,char *,int,int);
//EQLIB_OBJECT void CBazaarSearchWnd::doQuery(void);
//EQLIB_OBJECT void CBazaarSearchWnd::Init(void);
//EQLIB_OBJECT void CBazaarSearchWnd::InitListArray(void);
//EQLIB_OBJECT void CBazaarSearchWnd::SortItemList(int);
//EQLIB_OBJECT void CBazaarSearchWnd::UpdateComboButtons(void);
};

class CBazaarWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CBazaarWnd::CBazaarWnd(class CXWnd *);
//EQLIB_OBJECT bool CBazaarWnd::StoreSelectedPrice(void);
//EQLIB_OBJECT char * CBazaarWnd::GetPriceString(unsigned long);
//EQLIB_OBJECT class EQ_Item * CBazaarWnd::ReturnItemByIndex(int);
//EQLIB_OBJECT int CBazaarWnd::UpdateBazaarListtoServer(void);
//EQLIB_OBJECT long CBazaarWnd::GetQtyFromCoinType(int);
//EQLIB_OBJECT unsigned long CBazaarWnd::GetPrice(void);
//EQLIB_OBJECT void CBazaarWnd::Activate(void);
//EQLIB_OBJECT void CBazaarWnd::AddBazaarText(char *,int);
//EQLIB_OBJECT void CBazaarWnd::AddEquipmentToBazaarArray(class EQ_Item *,int,unsigned long);
//EQLIB_OBJECT void CBazaarWnd::BuildBazaarItemArray(void);
//EQLIB_OBJECT void CBazaarWnd::ClickedMoneyButton(int,int);
//EQLIB_OBJECT void CBazaarWnd::HandleTraderMsg(char *);
//EQLIB_OBJECT void CBazaarWnd::RebuildItemArray(void);
//EQLIB_OBJECT void CBazaarWnd::SelectBazaarSlotItem(int,class CTextureAnimation *);
//EQLIB_OBJECT void CBazaarWnd::SetMoneyButton(int,int);
//EQLIB_OBJECT void CBazaarWnd::UpdatePriceButtons(void);
// virtual
//EQLIB_OBJECT CBazaarWnd::~CBazaarWnd(void);
//EQLIB_OBJECT int CBazaarWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CBazaarWnd::PostDraw(void)const;
//EQLIB_OBJECT int CBazaarWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CBazaarWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CBazaarWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CBazaarWnd::Deactivate(void);
// protected
//EQLIB_OBJECT void CBazaarWnd::UpdateButtons(void);
// private
//EQLIB_OBJECT void CBazaarWnd::CreateBZRIniFilename(void);
//EQLIB_OBJECT void CBazaarWnd::Init(void);
//EQLIB_OBJECT void CBazaarWnd::ToggleBzrItemActive(int,bool);
};

class CBodyTintWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CBodyTintWnd::CBodyTintWnd(class CXWnd *);
//EQLIB_OBJECT char * CBodyTintWnd::BuildRBGTooltip(unsigned long,char * const);
//EQLIB_OBJECT unsigned long CBodyTintWnd::GetButtonTint(int);
//EQLIB_OBJECT unsigned long CBodyTintWnd::GetItemTint(int);
//EQLIB_OBJECT void CBodyTintWnd::Activate(void);
//EQLIB_OBJECT void CBodyTintWnd::GetReagentCount(void);
//EQLIB_OBJECT void CBodyTintWnd::GetTintChangeCount(void);
//EQLIB_OBJECT void CBodyTintWnd::ResetToOrigBodyTints(void);
//EQLIB_OBJECT void CBodyTintWnd::SetSlotLabels(bool);
//EQLIB_OBJECT void CBodyTintWnd::StoreModifiedBodyTints(void);
//EQLIB_OBJECT void CBodyTintWnd::UpdateLabelsAndButtons(void);
//EQLIB_OBJECT void CBodyTintWnd::UpdateLocalTintColor(unsigned long);
//EQLIB_OBJECT void CBodyTintWnd::UpdateMaterialTintLocal(unsigned long);
// virtual
//EQLIB_OBJECT CBodyTintWnd::~CBodyTintWnd(void);
//EQLIB_OBJECT int CBodyTintWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CBodyTintWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CBodyTintWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CBodyTintWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CBodyTintWnd::Deactivate(void);
};

class CBookWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CBookWnd::CBookWnd(class CXWnd *);
//EQLIB_OBJECT bool CBookWnd::CheckBook(class EQ_Note *);
//EQLIB_OBJECT void CBookWnd::Activate(void);
//EQLIB_OBJECT void CBookWnd::SetBook(char *);
// virtual
//EQLIB_OBJECT CBookWnd::~CBookWnd(void);
//EQLIB_OBJECT int CBookWnd::HandleKeyboardMsg(unsigned __int32,unsigned __int32,bool);
//EQLIB_OBJECT int CBookWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CBookWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CBookWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CBookWnd::Deactivate(void);
// protected
//EQLIB_OBJECT void CBookWnd::CleanPages(void);
//EQLIB_OBJECT void CBookWnd::DisplayText(void);
//EQLIB_OBJECT void CBookWnd::ProcessText(void);
//EQLIB_OBJECT void CBookWnd::ShowButtons(void);
// private
//EQLIB_OBJECT void CBookWnd::Init(void);
};

class CBreathWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CBreathWnd::CBreathWnd(class CXWnd *);
//EQLIB_OBJECT void CBreathWnd::Activate(void);
// virtual
//EQLIB_OBJECT CBreathWnd::~CBreathWnd(void);
//EQLIB_OBJECT int CBreathWnd::OnProcessFrame(void);
////EQLIB_OBJECT void * CBreathWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CBreathWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CBreathWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CBreathWnd::Init(void);
};

class CBuffWindow : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CBuffWindow::CBuffWindow(class CXWnd *,enum BuffWindowType);
//EQLIB_OBJECT void CBuffWindow::Activate(void);
//EQLIB_OBJECT void CBuffWindow::SetBuffIcon(class CButtonWnd *,int,int);
// virtual
//EQLIB_OBJECT CBuffWindow::~CBuffWindow(void);
//EQLIB_OBJECT class CXSize CBuffWindow::GetMinSize(void)const;
//EQLIB_OBJECT int CBuffWindow::OnProcessFrame(void);
//EQLIB_OBJECT int CBuffWindow::PostDraw(void)const;
//EQLIB_OBJECT int CBuffWindow::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CBuffWindow::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CBuffWindow::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CBuffWindow::Deactivate(void);
// private
//EQLIB_OBJECT void CBuffWindow::HandleSpellInfoDisplay(class CXWnd *);
//EQLIB_OBJECT void CBuffWindow::Init(void);
//EQLIB_OBJECT void CBuffWindow::RefreshBuffDisplay(void);
//EQLIB_OBJECT void CBuffWindow::RefreshIconArrangement(void);
};

class CBugReportWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CBugReportWnd::CBugReportWnd(class CXWnd *);
//EQLIB_OBJECT void CBugReportWnd::Activate(void);
// virtual
//EQLIB_OBJECT CBugReportWnd::~CBugReportWnd(void);
//EQLIB_OBJECT int CBugReportWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CBugReportWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CBugReportWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CBugReportWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CBugReportWnd::UpdateLocation(void);
};

class CButtonDrawTemplate
{
public:
//EQLIB_OBJECT CButtonDrawTemplate::~CButtonDrawTemplate(void);
//EQLIB_OBJECT CButtonDrawTemplate::CButtonDrawTemplate(class CButtonDrawTemplate const &);
//EQLIB_OBJECT CButtonDrawTemplate::CButtonDrawTemplate(void);
//EQLIB_OBJECT class CButtonDrawTemplate & CButtonDrawTemplate::operator=(class CButtonDrawTemplate const &);
//EQLIB_OBJECT class CXSize CButtonDrawTemplate::GetSize(void)const;
};

class CButtonTemplate
{
public:
//EQLIB_OBJECT CButtonTemplate::CButtonTemplate(class CParamButton *);
// virtual
//EQLIB_OBJECT CButtonTemplate::~CButtonTemplate(void);
////EQLIB_OBJECT void * CButtonTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CButtonTemplate::`vector deleting destructor'(unsigned int);
};

class CButtonWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CButtonWnd::CButtonWnd(class CXWnd *,unsigned __int32,class CXRect,class CXPoint,class CXSize,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *);
//EQLIB_OBJECT void CButtonWnd::SetCheck(bool);
// virtual
//EQLIB_OBJECT CButtonWnd::~CButtonWnd(void);
//EQLIB_OBJECT bool CButtonWnd::IsPointTransparent(class CXPoint)const;
//EQLIB_OBJECT int CButtonWnd::Draw(void)const;
//EQLIB_OBJECT int CButtonWnd::HandleLButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CButtonWnd::HandleLButtonHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CButtonWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CButtonWnd::HandleLButtonUpAfterHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CButtonWnd::HandleMouseMove(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CButtonWnd::HandleRButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CButtonWnd::HandleRButtonHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CButtonWnd::HandleRButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CButtonWnd::HandleRButtonUpAfterHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CButtonWnd::OnProcessFrame(void);
////EQLIB_OBJECT void * CButtonWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CButtonWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CButtonWnd::SetAttributesFromSidl(class CParamScreenPiece *);
//EQLIB_OBJECT void CButtonWnd::SetRadioGroup(class CRadioGroup *);
};

class CCastingWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CCastingWnd::CCastingWnd(class CXWnd *);
//EQLIB_OBJECT void CCastingWnd::Activate(void);
// virtual
//EQLIB_OBJECT CCastingWnd::~CCastingWnd(void);
//EQLIB_OBJECT int CCastingWnd::OnProcessFrame(void);
////EQLIB_OBJECT void * CCastingWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CCastingWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CCastingWnd::Deactivate(void);
};

class CCastSpellWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CCastSpellWnd::CCastSpellWnd(class CXWnd *);
////EQLIB_OBJECT CCastSpellWnd::SpellCategoryMajor::~SpellCategoryMajor(void);
////EQLIB_OBJECT CCastSpellWnd::SpellCategoryMinor::~SpellCategoryMinor(void);
//EQLIB_OBJECT static void __cdecl CCastSpellWnd::Unmemorize(int);
//EQLIB_OBJECT static void __cdecl CCastSpellWnd::UnmemorizeList(int *,int);
//EQLIB_OBJECT void CCastSpellWnd::Activate(void);
//EQLIB_OBJECT void CCastSpellWnd::ForgetMemorizedSpell(int);
//EQLIB_OBJECT void CCastSpellWnd::HandleSpellInfoDisplay(class CXWnd *);
//EQLIB_OBJECT void CCastSpellWnd::HandleSpellLeftClick(int);
//EQLIB_OBJECT void CCastSpellWnd::HandleSpellRightClick(int);
//EQLIB_OBJECT void CCastSpellWnd::KeyMapUpdated(void);
//EQLIB_OBJECT void CCastSpellWnd::RecacheCategorizedSpells(void);
//EQLIB_OBJECT void CCastSpellWnd::RecacheLoadoutContextMenu(void);
//EQLIB_OBJECT void CCastSpellWnd::SpellBookDeactivating(void);
// virtual
//EQLIB_OBJECT CCastSpellWnd::~CCastSpellWnd(void);
//EQLIB_OBJECT int CCastSpellWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CCastSpellWnd::PostDraw(void)const;
//EQLIB_OBJECT int CCastSpellWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CCastSpellWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CCastSpellWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CCastSpellWnd::Deactivate(void);
// private
//EQLIB_OBJECT bool CCastSpellWnd::IsBardSongPlaying(void);
//EQLIB_OBJECT unsigned long CCastSpellWnd::GetSpellGemColor(class EQ_Spell *);
//EQLIB_OBJECT void CCastSpellWnd::CategorizeSpell(int,int,int,int);
//EQLIB_OBJECT void CCastSpellWnd::ClearSpellCategories(void);
//EQLIB_OBJECT void CCastSpellWnd::Init(void);
//EQLIB_OBJECT void CCastSpellWnd::MakeSpellSelectMenu(void);
//EQLIB_OBJECT void CCastSpellWnd::RefreshSpellGemButtons(void);
//EQLIB_OBJECT void CCastSpellWnd::UpdateSpellGems(int);
//EQLIB_OBJECT void CCastSpellWnd::UpdateSpellGemTooltips(int);
};

class CCharacterCreation : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CCharacterCreation::CCharacterCreation(class CXWnd *);
//EQLIB_OBJECT void CCharacterCreation::Activate(void);
//EQLIB_OBJECT void CCharacterCreation::ActivateScreen(int);
//EQLIB_OBJECT void CCharacterCreation::DoBackButton(void);
//EQLIB_OBJECT void CCharacterCreation::DoNextButton(void);
//EQLIB_OBJECT void CCharacterCreation::HandleNameApprovalResponse(int);
//EQLIB_OBJECT void CCharacterCreation::NameGenerated(char *);
// virtual
//EQLIB_OBJECT CCharacterCreation::~CCharacterCreation(void);
//EQLIB_OBJECT int CCharacterCreation::Draw(void)const;
//EQLIB_OBJECT int CCharacterCreation::OnProcessFrame(void);
//EQLIB_OBJECT int CCharacterCreation::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CCharacterCreation::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CCharacterCreation::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CCharacterCreation::Deactivate(void);
// private
//EQLIB_OBJECT bool CCharacterCreation::IsLackingExpansion(bool,bool);
//EQLIB_OBJECT char * CCharacterCreation::GetCharCreateText(char *,int,int,int,int);
//EQLIB_OBJECT int CCharacterCreation::GetClassButtonIndex(int);
//EQLIB_OBJECT int CCharacterCreation::GetRaceButtonIndex(int);
//EQLIB_OBJECT void CCharacterCreation::DoStatButton(int);
//EQLIB_OBJECT void CCharacterCreation::FinalizeNewPCAndSendToWorld(void);
//EQLIB_OBJECT void CCharacterCreation::Init(void);
//EQLIB_OBJECT void CCharacterCreation::InitNewPC(void);
//EQLIB_OBJECT void CCharacterCreation::InitStartingCities(void);
//EQLIB_OBJECT void CCharacterCreation::InitStats(bool);
//EQLIB_OBJECT void CCharacterCreation::RandomizeCharacter(bool,bool);
//EQLIB_OBJECT void CCharacterCreation::RandomizeFacialFeatures(void);
//EQLIB_OBJECT void CCharacterCreation::SelectedClassButton(int);
//EQLIB_OBJECT void CCharacterCreation::SelectedRaceButton(int);
//EQLIB_OBJECT void CCharacterCreation::SelectStartingCity(int);
//EQLIB_OBJECT void CCharacterCreation::SetNewPCDeityFromBtnIndex(int);
//EQLIB_OBJECT void CCharacterCreation::SetPlayerAppearanceFromNewPC(class EQPlayer *,class EQ_PC *,bool);
//EQLIB_OBJECT void CCharacterCreation::SubmitNameToWorld(void);
//EQLIB_OBJECT void CCharacterCreation::UpdatePlayerFromNewPC(void);
//EQLIB_OBJECT void CCharacterCreation::UpdateScreenZeroButtons(bool);
};

class CCharacterSelect : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CCharacterSelect::CCharacterSelect(class CXWnd *);
//EQLIB_OBJECT int CCharacterSelect::IsEmptyCharacterSlot(int);
//EQLIB_OBJECT int CCharacterSelect::IsValidCharacterSelected(void);
//EQLIB_OBJECT int CCharacterSelect::NumberOfCharacters(void);
//EQLIB_OBJECT unsigned char CCharacterSelect::IsEvil(int,int,int);
//EQLIB_OBJECT void CCharacterSelect::Activate(void);
//EQLIB_OBJECT void CCharacterSelect::DeleteCharacter(void);
//EQLIB_OBJECT void CCharacterSelect::EnterExplorationMode(void);
//EQLIB_OBJECT void CCharacterSelect::EnterWorld(void);
//EQLIB_OBJECT void CCharacterSelect::LeaveExplorationMode(void);
//EQLIB_OBJECT void CCharacterSelect::Quit(void);
//EQLIB_OBJECT void CCharacterSelect::SelectCharacter(int,int);
//EQLIB_OBJECT void CCharacterSelect::SetLoadZonePlayerLocation(void);
//EQLIB_OBJECT void CCharacterSelect::SwitchModel(class EQPlayer *,unsigned char,int,unsigned char,unsigned char);
//EQLIB_OBJECT void CCharacterSelect::UpdateButtonNames(void);
// virtual
//EQLIB_OBJECT CCharacterSelect::~CCharacterSelect(void);
//EQLIB_OBJECT int CCharacterSelect::Draw(void)const;
//EQLIB_OBJECT int CCharacterSelect::OnProcessFrame(void);
//EQLIB_OBJECT int CCharacterSelect::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CCharacterSelect::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CCharacterSelect::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CCharacterSelect::Deactivate(void);
// private
//EQLIB_OBJECT void CCharacterSelect::CreateExplorationModePlayers(void);
//EQLIB_OBJECT void CCharacterSelect::EnableButtons(bool);
//EQLIB_OBJECT void CCharacterSelect::EnableEqMovementCommands(bool);
//EQLIB_OBJECT void CCharacterSelect::Init(void);
//EQLIB_OBJECT void CCharacterSelect::RemoveExplorationModePlayers(void);
//EQLIB_OBJECT void CCharacterSelect::SetLocationByClass(class EQPlayer *,bool,int);
//EQLIB_OBJECT void CCharacterSelect::SetRoomLocationByIndex(int,class EQPlayer *);
};

class CChatManager
{
public:
//EQLIB_OBJECT CChatManager::~CChatManager(void);
//EQLIB_OBJECT CChatManager::CChatManager(void);
//EQLIB_OBJECT class CChatWindow * CChatManager::GetActiveChatWindow(void);
//EQLIB_OBJECT class CChatWindow * CChatManager::GetChannelMap(int);
//EQLIB_OBJECT class CXStr CChatManager::GetAllVisibleText(class CXStr);
//EQLIB_OBJECT int CChatManager::GetChannelFromColor(int);
//EQLIB_OBJECT int CChatManager::InitContextMenu(class CChatWindow *);
//EQLIB_OBJECT unsigned long CChatManager::GetRGBAFromIndex(int);
//EQLIB_OBJECT void CChatManager::Activate(void);
//EQLIB_OBJECT void CChatManager::AddText(class CXStr,int);
//EQLIB_OBJECT void CChatManager::ClearChannelMap(int);
//EQLIB_OBJECT void CChatManager::ClearChannelMaps(class CChatWindow *);
//EQLIB_OBJECT void CChatManager::CreateChatWindow(char *,char *,int,int,int,char *,int);
//EQLIB_OBJECT void CChatManager::CreateChatWindow(void);
//EQLIB_OBJECT void CChatManager::Deactivate(void);
//EQLIB_OBJECT void CChatManager::FreeChatWindow(class CChatWindow *);
//EQLIB_OBJECT void CChatManager::LoadChatInis(void);
//EQLIB_OBJECT void CChatManager::Process(void);
//EQLIB_OBJECT void CChatManager::SetActiveChatWindow(class CChatWindow *);
//EQLIB_OBJECT void CChatManager::SetChannelMap(int,class CChatWindow *);
//EQLIB_OBJECT void CChatManager::SetLockedActiveChatWindow(class CChatWindow *);
//EQLIB_OBJECT void CChatManager::UpdateContextMenus(class CChatWindow *);
//EQLIB_OBJECT void CChatManager::UpdateTellMenus(class CChatWindow *);
};

class CChatWindow : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CChatWindow::CChatWindow(class CXWnd *);
//EQLIB_OBJECT class CEditWnd * CChatWindow::GetInputWnd(void);
//EQLIB_OBJECT class CStmlWnd * CChatWindow::GetOutputWnd(void);
//EQLIB_OBJECT class CXStr CChatWindow::GetInputText(void);
//EQLIB_OBJECT void CChatWindow::AddHistory(class CXStr);
//EQLIB_OBJECT void CChatWindow::AddOutputText(class CXStr,int);
//EQLIB_OBJECT void CChatWindow::Clear(void);
//EQLIB_OBJECT void CChatWindow::HistoryBack(void);
//EQLIB_OBJECT void CChatWindow::HistoryForward(void);
//EQLIB_OBJECT void CChatWindow::PageDown(void);
//EQLIB_OBJECT void CChatWindow::PageUp(void);
//EQLIB_OBJECT void CChatWindow::SetChatFont(int);
// virtual
//EQLIB_OBJECT CChatWindow::~CChatWindow(void);
//EQLIB_OBJECT int CChatWindow::Draw(void)const;
//EQLIB_OBJECT int CChatWindow::HandleRButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CChatWindow::OnKillFocus(class CXWnd *);
//EQLIB_OBJECT int CChatWindow::OnProcessFrame(void);
//EQLIB_OBJECT int CChatWindow::OnSetFocus(class CXWnd *);
//EQLIB_OBJECT int CChatWindow::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CChatWindow::`scalar deleting destructor'(unsigned int);
//EQLIB_OBJECT void CChatWindow::operator delete[](void *);
//EQLIB_OBJECT void CChatWindow::Deactivate(void);

/*0x148*/ struct _EQCHATMGR *ChatManager; 
/*0x14c*/ struct _CSIDLWND* InputWnd;
/*0x150*/ struct _CSIDLWND* OutputWnd;
/*0x154*/ DWORD Unknown0x154;
/*0x158*/ DWORD Unknown0x158;// need to update locations..
/*0x150*/ BYTE Unknown0x148;
/*0x151*/ BYTE Unknown0x149[0x3f];
/*0x18c*/ DWORD Unknown0x188;
/*0x190*/ DWORD Unknown0x18c;
/*0x194*/ struct _CXSTR *CommandHistory[0x28]; // ->0x198
/*0x238*/ DWORD Unknown0x230; // CChatWindow::HistoryBack/forward .. maybe total or current history lines
/*0x23c*/ DWORD Unknown0x234; // CChatWindow::HistoryBack/forward .. maybe total or current history lines
/*0x240*/ DWORD FontSize; //
/*0x244*/ DWORD Unknown0x23C;

////EQLIB_OBJECT void *CChatWindow::operator new(size_t stAllocateBlock) {return malloc(sizeof(EQCHATWINDOW));} // 11-15-2003 lax
};

class CCheckBoxWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CCheckBoxWnd::CCheckBoxWnd(class CXWnd *,unsigned __int32,class CXRect,class CXPoint,class CXSize,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *);
//EQLIB_OBJECT void CCheckBoxWnd::SetRadioLook(void);
// virtual
//EQLIB_OBJECT CCheckBoxWnd::~CCheckBoxWnd(void);
//EQLIB_OBJECT int CCheckBoxWnd::HandleLButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CCheckBoxWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CCheckBoxWnd::HandleMouseMove(class CXPoint,unsigned __int32);
////EQLIB_OBJECT void * CCheckBoxWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CCheckBoxWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CCheckBoxWnd::SetRadioGroup(class CRadioGroup *);
// protected
//EQLIB_OBJECT static bool CCheckBoxWnd::sm_bAnimsInitialized;
//EQLIB_OBJECT static class CButtonDrawTemplate CCheckBoxWnd::sm_bdtCheck;
//EQLIB_OBJECT static class CButtonDrawTemplate CCheckBoxWnd::sm_bdtRadio;
};

class CClickStickInfo
{
public:
//EQLIB_OBJECT CClickStickInfo::CClickStickInfo(void);
// virtual
//EQLIB_OBJECT CClickStickInfo::~CClickStickInfo(void);
////EQLIB_OBJECT void * CClickStickInfo::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CClickStickInfo::`vector deleting destructor'(unsigned int);
};

class CColorPickerWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CColorPickerWnd::CColorPickerWnd(class CXWnd *);
//EQLIB_OBJECT void CColorPickerWnd::Activate(class CXWnd *,unsigned long);
//EQLIB_OBJECT void CColorPickerWnd::CheckMaxEditWnd(void);
//EQLIB_OBJECT void CColorPickerWnd::SetCurrentColor(unsigned long);
//EQLIB_OBJECT void CColorPickerWnd::SetTemplateColor(int,unsigned long);
//EQLIB_OBJECT void CColorPickerWnd::UpdateCurrentColor(void);
//EQLIB_OBJECT void CColorPickerWnd::UpdateEditWndFromSlider(class CSliderWnd *,class CEditWnd *,int *);
//EQLIB_OBJECT void CColorPickerWnd::UpdateSliderFromEditWnd(class CSliderWnd *,class CEditWnd *,int *);
// virtual
//EQLIB_OBJECT CColorPickerWnd::~CColorPickerWnd(void);
//EQLIB_OBJECT int CColorPickerWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CColorPickerWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CColorPickerWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CColorPickerWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CColorPickerWnd::Init(void);
};

class CComboboxTemplate
{
public:
//EQLIB_OBJECT CComboboxTemplate::CComboboxTemplate(class CParamCombobox *);
// virtual
//EQLIB_OBJECT CComboboxTemplate::~CComboboxTemplate(void);
////EQLIB_OBJECT void * CComboboxTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CComboboxTemplate::`vector deleting destructor'(unsigned int);
};

class CComboWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CComboWnd::CComboWnd(class CXWnd *,unsigned __int32,class CXRect,int,class CButtonDrawTemplate,class CListWnd *);
//EQLIB_OBJECT class CXRect CComboWnd::GetButtonRect(void)const;
//EQLIB_OBJECT class CXRect CComboWnd::GetListRect(void)const;
//EQLIB_OBJECT class CXRect CComboWnd::GetTextRect(void)const;
//EQLIB_OBJECT class CXStr CComboWnd::GetCurChoiceText(void)const;
//EQLIB_OBJECT int CComboWnd::GetCurChoice(void)const;
//EQLIB_OBJECT int CComboWnd::GetItemCount(void);
//EQLIB_OBJECT void CComboWnd::DeleteAll(void);
//EQLIB_OBJECT void CComboWnd::InsertChoice(class CXStr *);
//EQLIB_OBJECT void CComboWnd::InsertChoice(char *);
//EQLIB_OBJECT void CComboWnd::SetChoice(int);
//EQLIB_OBJECT void CComboWnd::SetColors(unsigned long,unsigned long,unsigned long);
// virtual
//EQLIB_OBJECT CComboWnd::~CComboWnd(void);
//EQLIB_OBJECT class CXSize CComboWnd::GetMinSize(void)const;
//EQLIB_OBJECT int CComboWnd::Draw(void)const;
//EQLIB_OBJECT int CComboWnd::HandleLButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CComboWnd::HitTest(class CXPoint,int *)const;
//EQLIB_OBJECT int CComboWnd::OnMove(class CXRect);
//EQLIB_OBJECT int CComboWnd::OnResize(int,int);
//EQLIB_OBJECT int CComboWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CComboWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CComboWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CComboWnd::SetDrawTemplate(class CXWndDrawTemplate *);
};

class CCompassWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CCompassWnd::CCompassWnd(class CXWnd *);
//EQLIB_OBJECT void CCompassWnd::Activate(void);
//EQLIB_OBJECT void CCompassWnd::SenseHeading(void);
// virtual
//EQLIB_OBJECT CCompassWnd::~CCompassWnd(void);
//EQLIB_OBJECT int CCompassWnd::Draw(void)const;
//EQLIB_OBJECT int CCompassWnd::OnProcessFrame(void);
////EQLIB_OBJECT void * CCompassWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CCompassWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CCompassWnd::Deactivate(void);
// protected
//EQLIB_OBJECT static double const CCompassWnd::HI_SPEED;
//EQLIB_OBJECT static double const CCompassWnd::LO_SPEED;
//EQLIB_OBJECT void CCompassWnd::PickNewTarget(void);
//EQLIB_OBJECT void CCompassWnd::SetSpeed(void);
// private
//EQLIB_OBJECT void CCompassWnd::Init(void);
};

class CConfirmationDialog
{
public:
//EQLIB_OBJECT CConfirmationDialog::CConfirmationDialog(class CXWnd *);
//EQLIB_OBJECT void CConfirmationDialog::Activate(int,unsigned int,char const *);
//EQLIB_OBJECT void CConfirmationDialog::HandleButtonNoPressed(void);
//EQLIB_OBJECT void CConfirmationDialog::HandleButtonOkPressed(void);
//EQLIB_OBJECT void CConfirmationDialog::HandleButtonYesPressed(void);
//EQLIB_OBJECT void CConfirmationDialog::ProcessNo(int);
//EQLIB_OBJECT void CConfirmationDialog::ProcessYes(void);
//EQLIB_OBJECT void CConfirmationDialog::SetNameApprovalData(char *,char *,int,int,char *);
// virtual
//EQLIB_OBJECT CConfirmationDialog::~CConfirmationDialog(void);
//EQLIB_OBJECT int CConfirmationDialog::Draw(void)const;
//EQLIB_OBJECT int CConfirmationDialog::OnProcessFrame(void);
//EQLIB_OBJECT int CConfirmationDialog::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CConfirmationDialog::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CConfirmationDialog::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CConfirmationDialog::Deactivate(void);
// private
//EQLIB_OBJECT void CConfirmationDialog::ExpireCurrentDialog(void);
//EQLIB_OBJECT void CConfirmationDialog::Init(void);
//EQLIB_OBJECT void CConfirmationDialog::ResetFocusOnClose(void);
};

class CContainerMgr
{
public:
//EQLIB_OBJECT CContainerMgr::CContainerMgr(void);
//EQLIB_OBJECT bool CContainerMgr::CloseAllContainers(void);
//EQLIB_OBJECT class EQ_Item * CContainerMgr::GetWorldContainerItem(int);
//EQLIB_OBJECT void CContainerMgr::ClearWorldContainerItems(void);
//EQLIB_OBJECT void CContainerMgr::CloseContainer(class EQ_Container *,bool);
//EQLIB_OBJECT void CContainerMgr::CloseEQContainer(class EQ_Container *);
//EQLIB_OBJECT void CContainerMgr::OpenContainer(class EQ_Container *,int);
//EQLIB_OBJECT void CContainerMgr::OpenWorldContainer(class EQ_Container *,unsigned long);
//EQLIB_OBJECT void CContainerMgr::Process(void);
//EQLIB_OBJECT void CContainerMgr::SetWorldContainerItem(class EQ_Item *,int);
// virtual
//EQLIB_OBJECT CContainerMgr::~CContainerMgr(void);
////EQLIB_OBJECT void * CContainerMgr::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CContainerMgr::`vector deleting destructor'(unsigned int);
// private
//EQLIB_OBJECT class CContainerWnd * CContainerMgr::GetFreeContainerWnd(void);
};

class CContainerWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CContainerWnd::CContainerWnd(class CXWnd *);
//EQLIB_OBJECT void CContainerWnd::Activate(void);
//EQLIB_OBJECT void CContainerWnd::CheckCloseable(void);
//EQLIB_OBJECT void CContainerWnd::SetContainer(class EQ_Container *,int);
// virtual
//EQLIB_OBJECT CContainerWnd::~CContainerWnd(void);
//EQLIB_OBJECT int CContainerWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CContainerWnd::PostDraw(void)const;
//EQLIB_OBJECT int CContainerWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CContainerWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CContainerWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CContainerWnd::Deactivate(void);
// private
//EQLIB_OBJECT bool CContainerWnd::ContainsNoDrop(void);
//EQLIB_OBJECT void CContainerWnd::HandleCombine(void);
//EQLIB_OBJECT void CContainerWnd::Init(void);
};

class CContextMenu
{
public:
//EQLIB_OBJECT CContextMenu::CContextMenu(class CXWnd *,unsigned __int32,class CXRect);
//EQLIB_OBJECT int CContextMenu::AddMenuItem(class CXStr,unsigned int,bool,unsigned long);
//EQLIB_OBJECT int CContextMenu::AddSeparator(void);
//EQLIB_OBJECT void CContextMenu::Activate(class CXPoint,int,int);
//EQLIB_OBJECT void CContextMenu::CheckMenuItem(int,bool,bool);
//EQLIB_OBJECT void CContextMenu::EnableMenuItem(int,bool);
//EQLIB_OBJECT void CContextMenu::RemoveAllMenuItems(void);
// virtual
//EQLIB_OBJECT CContextMenu::~CContextMenu(void);
//EQLIB_OBJECT int CContextMenu::OnKillFocus(class CXWnd *);
////EQLIB_OBJECT void * CContextMenu::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CContextMenu::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CContextMenu::Deactivate(void);
};

class CContextMenuManager
{
public:
//EQLIB_OBJECT CContextMenuManager::CContextMenuManager(class CXWnd *,unsigned __int32,class CXRect);
//EQLIB_OBJECT int CContextMenuManager::AddMenu(class CContextMenu *);
//EQLIB_OBJECT int CContextMenuManager::GetDefaultMenuIndex(void);
//EQLIB_OBJECT int CContextMenuManager::HandleWindowMenuCommands(class CXWnd *,int);
//EQLIB_OBJECT int CContextMenuManager::PopupMenu(int,class CXPoint,class CXWnd *);
//EQLIB_OBJECT int CContextMenuManager::RemoveMenu(int,bool);
//EQLIB_OBJECT void CContextMenuManager::Flush(void);
//EQLIB_OBJECT void CContextMenuManager::WarnDefaultMenu(class CXWnd *);
// virtual
//EQLIB_OBJECT CContextMenuManager::~CContextMenuManager(void);
//EQLIB_OBJECT int CContextMenuManager::HandleLButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CContextMenuManager::HandleRButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CContextMenuManager::HandleWheelButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CContextMenuManager::OnProcessFrame(void);
//EQLIB_OBJECT int CContextMenuManager::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CContextMenuManager::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CContextMenuManager::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CContextMenuManager::Deactivate(void);
// private
//EQLIB_OBJECT void CContextMenuManager::CreateDefaultMenu(void);
};

class CControlTemplate
{
public:
//EQLIB_OBJECT CControlTemplate::CControlTemplate(class CParamControl *);
// virtual
//EQLIB_OBJECT CControlTemplate::~CControlTemplate(void);
////EQLIB_OBJECT void * CControlTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CControlTemplate::`vector deleting destructor'(unsigned int);
};

class CCursorAttachment
{
public:
//EQLIB_OBJECT CCursorAttachment::CCursorAttachment(class CXWnd *);
//EQLIB_OBJECT bool CCursorAttachment::IsOkToActivate(int);
//EQLIB_OBJECT bool CCursorAttachment::RemoveAttachment(void);
//EQLIB_OBJECT void CCursorAttachment::Activate(class CTextureAnimation *,int,int,int);
// virtual
//EQLIB_OBJECT CCursorAttachment::~CCursorAttachment(void);
//EQLIB_OBJECT int CCursorAttachment::Draw(void)const;
//EQLIB_OBJECT int CCursorAttachment::OnProcessFrame(void);
//EQLIB_OBJECT int CCursorAttachment::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CCursorAttachment::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CCursorAttachment::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CCursorAttachment::Deactivate(void);
// private
//EQLIB_OBJECT void CCursorAttachment::DrawButtonText(void)const;
//EQLIB_OBJECT void CCursorAttachment::DrawQuantity(void)const;
//EQLIB_OBJECT void CCursorAttachment::Init(void);
};

class CDIMap
{
public:
//EQLIB_OBJECT CDIMap::~CDIMap(void);
//EQLIB_OBJECT CDIMap::CDIMap(void);
// private
//EQLIB_OBJECT static char * CDIMap::mKeymapAltArray;
//EQLIB_OBJECT static char * CDIMap::mKeymapArray;
//EQLIB_OBJECT static char * CDIMap::mKeymapShiftArray;
//EQLIB_OBJECT void CDIMap::LoadMappingFromFile(char *);
};

class CDisplay
{
public:
//EQLIB_OBJECT CDisplay::~CDisplay(void);
//EQLIB_OBJECT CDisplay::CDisplay(struct HWND__ *);
//EQLIB_OBJECT bool CDisplay::GenericSphereColl(float,float,float,float,float,float,float *,float *,float *,unsigned char);
//EQLIB_OBJECT bool CDisplay::SlideSwitchLeftRight(class EQSwitch *,float,int,float);
//EQLIB_OBJECT bool const CDisplay::GetWorldFilePath(char *,char const *);
//EQLIB_OBJECT char * CDisplay::GetIniRaceName(int);
//EQLIB_OBJECT class EQPlayer * CDisplay::GetNearestPlayerInView(float,bool);
//EQLIB_OBJECT float CDisplay::FindZoneTopZ(float,float,float);
//EQLIB_OBJECT float CDisplay::FixHeading(float);
//EQLIB_OBJECT float CDisplay::GetFloorHeight(float,float,float);
//EQLIB_OBJECT float CDisplay::HeadingDiff(float,float,float *);
//EQLIB_OBJECT float CDisplay::PlayerDistance(class EQPlayer *,class EQPlayer *,float);
//EQLIB_OBJECT float CDisplay::PlayerSimpleDistance(class EQPlayer *,class EQPlayer *,float);
//EQLIB_OBJECT float CDisplay::SetActorBoundingRadius(struct T3D_tagACTORINSTANCE *,float,float);
//EQLIB_OBJECT float CDisplay::SimpleDistance(float,float,float,float,float,float,float);
//EQLIB_OBJECT float CDisplay::TrueDistance(float,float,float,float,float,float,float);
//EQLIB_OBJECT int CDisplay::GetItemType(int);
//EQLIB_OBJECT int CDisplay::GetNewPCIniFlag(int,int);
//EQLIB_OBJECT int CDisplay::GetSkyTime(int *,int *);
//EQLIB_OBJECT int CDisplay::is_3dON(void);
//EQLIB_OBJECT int CDisplay::is_ParticleSystemON(void);
//EQLIB_OBJECT int CDisplay::MoveMissile(class EQMissile *);
//EQLIB_OBJECT int CDisplay::ReplaceCloakMaterials(int,struct T3D_HIERARCHICALSPRITEINSTANCE *,struct T3D_RGB *);
//EQLIB_OBJECT int CDisplay::ReplaceMaterial(char *,char *,struct T3D_HIERARCHICALSPRITEINSTANCE *,struct T3D_RGB *,int);
//EQLIB_OBJECT int CDisplay::SetBoneSpriteTint(struct T3D_DAG *,struct T3D_RGB *);
//EQLIB_OBJECT int CDisplay::ShouldLoadNewPcModel(int,int);
//EQLIB_OBJECT int CDisplay::TurnInfravisionEffectOff(void);
//EQLIB_OBJECT int CDisplay::TurnInfravisionEffectOn(void);
//EQLIB_OBJECT long CDisplay::SetUserRender(int);
//EQLIB_OBJECT static char * CDisplay::DefaultUIPath;
//EQLIB_OBJECT static char * CDisplay::UIPath;
//EQLIB_OBJECT static int __cdecl CDisplay::WriteTextHD2(char const *text,int X,int Y,int color);
//EQLIB_OBJECT static unsigned long __cdecl CDisplay::GetUserDefinedColor(int);
//EQLIB_OBJECT static void __cdecl CDisplay::SetUserDefinedColor(int,int,int,int);
//EQLIB_OBJECT struct T3D_POINTLIGHT * CDisplay::CreateLight(unsigned char,float,float,float,float);
//EQLIB_OBJECT struct T3D_tagACTORINSTANCE * CDisplay::CreateActor(char *,float,float,float,float,float,float,bool,bool);
//EQLIB_OBJECT struct T3D_tagACTORINSTANCE * CDisplay::GetClickedActor(unsigned long,unsigned long,bool);
//EQLIB_OBJECT unsigned char CDisplay::GetEnvironment(float,float,float,int *);
//EQLIB_OBJECT unsigned char CDisplay::GetIntensity(unsigned char);
//EQLIB_OBJECT unsigned char CDisplay::LoadBMPFile(void);
//EQLIB_OBJECT unsigned char CDisplay::LoadNPCFromS3D(char *,char *,char *);
//EQLIB_OBJECT unsigned char CDisplay::LoadWorldFile(char *,char *,int,unsigned char);
//EQLIB_OBJECT unsigned int CDisplay::IsShield(int)const;
//EQLIB_OBJECT void CDisplay::ActivateMainUI(bool);
//EQLIB_OBJECT void CDisplay::ChangeVideoMode(void);
//EQLIB_OBJECT void CDisplay::CheckForScreenModeToggle(void);
//EQLIB_OBJECT void CDisplay::CleanUpDDraw(void);
//EQLIB_OBJECT void CDisplay::ClearScreen(void);
//EQLIB_OBJECT void CDisplay::CreatePlayerActor(class EQPlayer *);
//EQLIB_OBJECT void CDisplay::DDrawUpdateDisplay(void);
//EQLIB_OBJECT void CDisplay::DeactivateMainUI(void);
//EQLIB_OBJECT void CDisplay::default_cameras(void);
//EQLIB_OBJECT void CDisplay::DefineSoloMode(void);
//EQLIB_OBJECT void CDisplay::DeleteActor(struct T3D_tagACTORINSTANCE *);
//EQLIB_OBJECT void CDisplay::DeleteLight(struct T3D_POINTLIGHT *);
//EQLIB_OBJECT void CDisplay::DeleteParticleCloudInstance(struct T3D_PARTICLECLOUDINSTANCE * *);
//EQLIB_OBJECT void CDisplay::GetOnActor(struct T3D_tagACTORINSTANCE *,class EQPlayer *);
//EQLIB_OBJECT void CDisplay::HandleMaterial(class EQ_PC *,int,class EQ_Item *,class EQ_Item *);
//EQLIB_OBJECT void CDisplay::hideGrassObjects(void);
//EQLIB_OBJECT void CDisplay::InitCharSelectUI(void);
//EQLIB_OBJECT void CDisplay::InitCommonLights(void);
//EQLIB_OBJECT void CDisplay::InitDDraw(void);
//EQLIB_OBJECT void CDisplay::InitEverQuestLocale(EQLocalizeLanguage);
//EQLIB_OBJECT void CDisplay::InitUserDefinedColors(void);
//EQLIB_OBJECT void CDisplay::InitWorld(void);
//EQLIB_OBJECT void CDisplay::KeyMapUpdated(void);
//EQLIB_OBJECT void CDisplay::LightningStrike(void);
//EQLIB_OBJECT void CDisplay::loadGrassObjects(char *);
//EQLIB_OBJECT void CDisplay::MoveLight(struct T3D_POINTLIGHT *,struct _physicsinfo *);
//EQLIB_OBJECT void CDisplay::MoveLocalPlayerToSafeCoords(void);
//EQLIB_OBJECT void CDisplay::NewUIProcessEscape(void);
//EQLIB_OBJECT void CDisplay::PlaySoundAtLocation(float,float,float,int);
//EQLIB_OBJECT void CDisplay::ProcessCloud(void);
//EQLIB_OBJECT void CDisplay::ProcessEffects(void);
//EQLIB_OBJECT void CDisplay::ProcessParticleEmitter(class EQSwitch *);
//EQLIB_OBJECT void CDisplay::ProcessSky(void);
//EQLIB_OBJECT void CDisplay::ProcessSwitches(void);
//EQLIB_OBJECT void CDisplay::ProcessWeather(void);
//EQLIB_OBJECT void CDisplay::RealRender_World(void);
//EQLIB_OBJECT void CDisplay::ReloadUI(bool);
//EQLIB_OBJECT void CDisplay::Render_MinWorld(void);
//EQLIB_OBJECT void CDisplay::Render_World(void);
//EQLIB_OBJECT void CDisplay::ResetRenderWindow(void);
//EQLIB_OBJECT void CDisplay::SetActorScaleFactor(struct T3D_tagACTORINSTANCE *,float,unsigned char);
//EQLIB_OBJECT void CDisplay::SetActorSpriteTint(struct _EQRGB *,struct T3D_tagACTORINSTANCE *);
//EQLIB_OBJECT void CDisplay::SetActorUserData(struct T3D_tagACTORINSTANCE *,void *);
//EQLIB_OBJECT void CDisplay::SetActorYon(float);
//EQLIB_OBJECT void CDisplay::SetAmbientLight(float);
//EQLIB_OBJECT void CDisplay::SetCCreateCamera(int);
//EQLIB_OBJECT void CDisplay::SetDayPeriod(unsigned char);
//EQLIB_OBJECT void CDisplay::SetFog(bool,float,float,unsigned char,unsigned char,unsigned char);
//EQLIB_OBJECT void CDisplay::SetGammaCorrection(float);
//EQLIB_OBJECT void CDisplay::SetGenericEnvironment(void);
//EQLIB_OBJECT void CDisplay::SetPCloudDensity(int);
//EQLIB_OBJECT void CDisplay::SetSkyBackground(void);
//EQLIB_OBJECT void CDisplay::SetSkyLayer(int);
//EQLIB_OBJECT void CDisplay::SetSpecialEnvironment(enum EnvironmentType);
//EQLIB_OBJECT void CDisplay::SetSunLight(void);
//EQLIB_OBJECT void CDisplay::SetupEmitterEnvironment(void);
//EQLIB_OBJECT void CDisplay::SetupEQPlayers(void);
//EQLIB_OBJECT void CDisplay::SetViewActor(struct T3D_tagACTORINSTANCE *);
//EQLIB_OBJECT void CDisplay::SetViewActorByName(char *);
//EQLIB_OBJECT void CDisplay::SetViewAngle(int);
//EQLIB_OBJECT void CDisplay::SetYon(float);
//EQLIB_OBJECT void CDisplay::ShowDisplay(void);
//EQLIB_OBJECT void CDisplay::SpurtBloodOnDag(struct T3D_DAG *);
//EQLIB_OBJECT void CDisplay::StartWeather(int,unsigned char);
//EQLIB_OBJECT void CDisplay::StartWorldDisplay(EQZoneIndex);
//EQLIB_OBJECT void CDisplay::StartWorldDisplay_Bailout(char const *);
//EQLIB_OBJECT void CDisplay::StopWeather(int,unsigned char);
//EQLIB_OBJECT void CDisplay::StopWorldDisplay(void);
//EQLIB_OBJECT void CDisplay::SwitchToDefaultCameraMode(void);
//EQLIB_OBJECT void CDisplay::ToggleCharacterNameSprites(bool);
//EQLIB_OBJECT void CDisplay::ToggleNpcNameSprites(bool);
//EQLIB_OBJECT void CDisplay::ToggleView(void);
//EQLIB_OBJECT void CDisplay::UpdateCameraAfterModeSwitch(void);
//EQLIB_OBJECT void CDisplay::updateGrassObjects(void);
//EQLIB_OBJECT void CDisplay::UpdateMobileEmitterLocations(void);
// private
//EQLIB_OBJECT struct T3D_HIERARCHICALSPRITEINSTANCE * CDisplay::dupActorHierarchicalSprite(struct T3D_tagACTORINSTANCE *);
//EQLIB_OBJECT void CDisplay::CleanCharSelectUI(void);
//EQLIB_OBJECT void CDisplay::CleanGameUI(void);
//EQLIB_OBJECT void CDisplay::CleanUpNewUI(void);
//EQLIB_OBJECT void CDisplay::InitGameUI(void);
//EQLIB_OBJECT void CDisplay::InitNewUI(void);
};

class CEditBaseWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT void CEditBaseWnd::SetMaxChars(int);
//EQLIB_OBJECT void CEditBaseWnd::SetSel(int,int);
// virtual
//EQLIB_OBJECT CEditBaseWnd::~CEditBaseWnd(void);
//EQLIB_OBJECT int CEditBaseWnd::OnKillFocus(class CXWnd *);
////EQLIB_OBJECT void * CEditBaseWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CEditBaseWnd::`vector deleting destructor'(unsigned int);
};

class CEditboxTemplate
{
public:
//EQLIB_OBJECT CEditboxTemplate::CEditboxTemplate(class CParamEditbox *);
// virtual
//EQLIB_OBJECT CEditboxTemplate::~CEditboxTemplate(void);
////EQLIB_OBJECT void * CEditboxTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CEditboxTemplate::`vector deleting destructor'(unsigned int);
};

class CEditLabelWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CEditLabelWnd::CEditLabelWnd(class CXWnd *);
//EQLIB_OBJECT class CXStr CEditLabelWnd::GetLabelText(void);
//EQLIB_OBJECT void CEditLabelWnd::Activate(class CXWnd *,char *,int,unsigned long);
// virtual
//EQLIB_OBJECT CEditLabelWnd::~CEditLabelWnd(void);
//EQLIB_OBJECT int CEditLabelWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CEditLabelWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CEditLabelWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CEditLabelWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CEditLabelWnd::Deactivate(void);
};

class CEditWnd : public CEditBaseWnd
{
public:
//EQLIB_OBJECT CEditWnd::CEditWnd(class CXWnd *,unsigned __int32,class CXRect,unsigned __int32);
//EQLIB_OBJECT class CXPoint CEditWnd::GetCharIndexPt(int)const;
//EQLIB_OBJECT class CXPoint CEditWnd::GetSelEndPt(void)const;
//EQLIB_OBJECT class CXPoint CEditWnd::GetSelStartPt(void)const;
//EQLIB_OBJECT class CXStr CEditWnd::GetSTMLSafeText(void);
//EQLIB_OBJECT int CEditWnd::ConvertIndexPrintableToTagged(int);
//EQLIB_OBJECT int CEditWnd::ConvertIndexTaggedToPrintable(int);
//EQLIB_OBJECT int CEditWnd::GetLineForPrintableChar(int)const;
//EQLIB_OBJECT int CEditWnd::GetLineLength(int)const;
//EQLIB_OBJECT int CEditWnd::SelectableCharFromPoint(class CXPoint)const;
//EQLIB_OBJECT void CEditWnd::AddItemTag(int,char *,int);
//EQLIB_OBJECT void CEditWnd::CalculateScrollRange(void);
//EQLIB_OBJECT void CEditWnd::EnsureCaretVisible(void);
//EQLIB_OBJECT void CEditWnd::ReplaceSelection(char,bool);
//EQLIB_OBJECT void CEditWnd::ReplaceSelection(class CXStr,bool);
//EQLIB_OBJECT void CEditWnd::SetEditable(bool);
// virtual
//EQLIB_OBJECT CEditWnd::~CEditWnd(void);
//EQLIB_OBJECT class CXPoint CEditWnd::GetCaretPt(void)const;
//EQLIB_OBJECT class CXPoint CEditWnd::PointFromPrintableChar(int)const;
//EQLIB_OBJECT class CXStr CEditWnd::GetDisplayString(void)const;
//EQLIB_OBJECT class CXStr CEditWnd::GetWindowTextA(void)const;
//EQLIB_OBJECT int CEditWnd::Draw(void)const;
//EQLIB_OBJECT int CEditWnd::DrawCaret(void)const;
//EQLIB_OBJECT int CEditWnd::DrawMultiline(void)const;
//EQLIB_OBJECT int CEditWnd::HandleKeyboardMsg(unsigned __int32,unsigned __int32,bool);
//EQLIB_OBJECT int CEditWnd::HandleLButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CEditWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CEditWnd::HandleMouseMove(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CEditWnd::OnKillFocus(class CXWnd *);
//EQLIB_OBJECT int CEditWnd::OnMove(class CXRect);
//EQLIB_OBJECT int CEditWnd::OnResize(int,int);
//EQLIB_OBJECT int CEditWnd::OnSetFocus(class CXWnd *);
//EQLIB_OBJECT int CEditWnd::ResetWnd(void);
////EQLIB_OBJECT void * CEditWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CEditWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CEditWnd::SetWindowTextA(class CXStr);
// protected
//EQLIB_OBJECT static class CDIMap CEditWnd::m_mapKeys;
//EQLIB_OBJECT virtual int CEditWnd::GetHorzOffset(void)const;
//EQLIB_OBJECT void CEditWnd::FillIndexArray(class CXStr)const;
//EQLIB_OBJECT void CEditWnd::FilterInputStr(class CXStr &);
//EQLIB_OBJECT void CEditWnd::ProcessText(void);
};

class CEQSuiteTextureLoader
{
public:
//EQLIB_OBJECT CEQSuiteTextureLoader::~CEQSuiteTextureLoader(void);
//EQLIB_OBJECT CEQSuiteTextureLoader::CEQSuiteTextureLoader(void);
//EQLIB_OBJECT struct T3D_tagBMINFO * CEQSuiteTextureLoader::GetTexture(class CUITextureInfo const &);
//EQLIB_OBJECT unsigned int CEQSuiteTextureLoader::CreateTexture(class CUITextureInfo const &);
//EQLIB_OBJECT void CEQSuiteTextureLoader::UnloadAllTextures(void);
};

class CEverQuest
{
public:
//EQLIB_OBJECT CEverQuest::~CEverQuest(void);
//EQLIB_OBJECT CEverQuest::CEverQuest(struct HWND__ *);
//EQLIB_OBJECT bool CEverQuest::IsInTypingMode(void);
//EQLIB_OBJECT bool CEverQuest::IsOkToTransact(void);
//EQLIB_OBJECT bool CEverQuest::ReadClientINIBool(char *,char *,bool);
//EQLIB_OBJECT bool CEverQuest::ReadUIINIBool(char *,char *,bool);
//EQLIB_OBJECT char * CEverQuest::GetBodyTypeDesc(int);
//EQLIB_OBJECT char * CEverQuest::GetClassDesc(int);
//EQLIB_OBJECT char * CEverQuest::GetClassThreeLetterCode(int);
//EQLIB_OBJECT char * CEverQuest::GetDeityDesc(int);
//EQLIB_OBJECT char * CEverQuest::GetInnateDesc(int);
//EQLIB_OBJECT char * CEverQuest::GetItemClassDesc(int);
//EQLIB_OBJECT char * CEverQuest::GetLangDesc(int);
//EQLIB_OBJECT char * CEverQuest::GetRaceDesc(int);
//EQLIB_OBJECT char * CEverQuest::GetSingleMessage(unsigned __int32,int,int *,char *);
//EQLIB_OBJECT char * CEverQuest::GrabFirstWord(char *,char *);
//EQLIB_OBJECT char * CEverQuest::GrabFirstWord2(char *,char *,int);
//EQLIB_OBJECT char * CEverQuest::ReadClientINIString(char *,char *,char *,char *,int);
//EQLIB_OBJECT char * CEverQuest::ReadUIINIString(char *,char *,char *,char *,int);
//EQLIB_OBJECT char * CEverQuest::stripName(char *);
//EQLIB_OBJECT char * CEverQuest::StripShipName(char *,char *);
//EQLIB_OBJECT char * CEverQuest::trimName(char *);
//EQLIB_OBJECT class EQPlayer * CEverQuest::ClickedPlayer(int,int);
//EQLIB_OBJECT class EQSwitch * CEverQuest::ClickedSwitch(int,int);
//EQLIB_OBJECT enum ZONE_REQ_STATUS CEverQuest::IsZoneAvailable(char *,EQZoneIndex,enum ZONE_REQ_REASON);
//EQLIB_OBJECT float CEverQuest::GetMaxLightRadius(void);
//EQLIB_OBJECT float CEverQuest::ReadClientINIFloat(char *,char *,float);
//EQLIB_OBJECT int CEverQuest::BeingIgnored(char *);
//EQLIB_OBJECT int CEverQuest::DoLogin(struct HWND__ *,struct HINSTANCE__ *);
//EQLIB_OBJECT int CEverQuest::GetCombatSound(class EQPlayer *,class EQPlayer *);
//EQLIB_OBJECT int CEverQuest::GetCurrentLanguage(void);
//EQLIB_OBJECT int CEverQuest::HandleItems(void *,int);
//EQLIB_OBJECT int CEverQuest::IsFriend(char const *);
//EQLIB_OBJECT int CEverQuest::IsValidName(char *);
//EQLIB_OBJECT int CEverQuest::LootCorpse(class EQPlayer *,int);
//EQLIB_OBJECT int CEverQuest::MoveMoney(int,int,int,int,int,bool);
//EQLIB_OBJECT int CEverQuest::msgStartIcon(void *);
//EQLIB_OBJECT int CEverQuest::msgStartIeq(void *);
//EQLIB_OBJECT int CEverQuest::msgStartInotes(void *);
//EQLIB_OBJECT int CEverQuest::ProcessMBox(void);
//EQLIB_OBJECT int CEverQuest::ReadClientINIInt(char *,char *,int);
//EQLIB_OBJECT int CEverQuest::ReadUIINIInt(char *,char *,int);
//EQLIB_OBJECT int CEverQuest::TypingMode(void);
//EQLIB_OBJECT unsigned char CEverQuest::HandleWorldMessage(struct connection_t *,unsigned __int32,char *,unsigned __int32);
//EQLIB_OBJECT unsigned char CEverQuest::IFoundMyVehicle(void);
//EQLIB_OBJECT void __cdecl CEverQuest::DoLoadScreenProgressBar(int,char const *,...);
//EQLIB_OBJECT void CEverQuest::ApplyPoison(unsigned long);
//EQLIB_OBJECT void CEverQuest::Camp(void);
//EQLIB_OBJECT void CEverQuest::CancelSneakHide(void);
//EQLIB_OBJECT void CEverQuest::ChatServerConnect(char *,int,char *,char *);
//EQLIB_OBJECT void CEverQuest::ChatServerDisconnect(void);
//EQLIB_OBJECT void CEverQuest::ChatServerGiveTime(void);
//EQLIB_OBJECT void CEverQuest::ChatServerMessage(char *);
//EQLIB_OBJECT void CEverQuest::ChatServerNotificationAdd(bool,char *,char *,int);
//EQLIB_OBJECT void CEverQuest::ChatServerNotificationFlush(void);
//EQLIB_OBJECT void CEverQuest::CleanupBadFiles(void);
//EQLIB_OBJECT void CEverQuest::clr_chat_input(void);
//EQLIB_OBJECT void CEverQuest::Consider(class EQPlayer *,void *);
//EQLIB_OBJECT void CEverQuest::CopyFirstWord(char *,char *);
//EQLIB_OBJECT void CEverQuest::CreateDataSubdirectories(void);
//EQLIB_OBJECT void CEverQuest::CreateFilenameServerCode(char *);
//EQLIB_OBJECT void CEverQuest::CreateIniFilenames(void);
//EQLIB_OBJECT void CEverQuest::CreateInitialActors(void);
//EQLIB_OBJECT void CEverQuest::DeacSpellScreen(void);
//EQLIB_OBJECT void CEverQuest::Disband(void);
//EQLIB_OBJECT void CEverQuest::DisplayScreen(char *);
//EQLIB_OBJECT void CEverQuest::DoCharacterSelection(void);
//EQLIB_OBJECT void CEverQuest::doInspect(class EQPlayer *);
//EQLIB_OBJECT void CEverQuest::doInvite(unsigned __int32,char *);
//EQLIB_OBJECT void CEverQuest::DoLoadScreen(int);
//EQLIB_OBJECT void CEverQuest::DoMainLoop(struct HWND__ *);
//EQLIB_OBJECT void CEverQuest::DoNewCharacterCreation(void);
//EQLIB_OBJECT void CEverQuest::DoPercentConvert(char *,bool);
//EQLIB_OBJECT void CEverQuest::DoSplit(char *);
//EQLIB_OBJECT void CEverQuest::doUnInvite(char *);
//EQLIB_OBJECT void CEverQuest::DropHeldItemOnGround(int);
//EQLIB_OBJECT void CEverQuest::DropHeldMoneyOnGround(int);
//EQLIB_OBJECT void CEverQuest::DropItemOrMoneyOnPlayer(class EQPlayer *);
//EQLIB_OBJECT void CEverQuest::dsp_chat(char const *);
//EQLIB_OBJECT void CEverQuest::dsp_chat(char const *,int,bool);
//EQLIB_OBJECT void CEverQuest::Emote(void);
//EQLIB_OBJECT void CEverQuest::EnterZone(struct HWND__ *);
//EQLIB_OBJECT void CEverQuest::Follow(void);
//EQLIB_OBJECT void CEverQuest::FreeSwitches(void);
//EQLIB_OBJECT void CEverQuest::GetSndDriver(void);
//EQLIB_OBJECT void CEverQuest::GetZoneInfoFromNetwork(char *);
//EQLIB_OBJECT void CEverQuest::GuildDelete(void);
//EQLIB_OBJECT void CEverQuest::GuildInvite(char *,char *);
//EQLIB_OBJECT void CEverQuest::GuildLeader(char *);
//EQLIB_OBJECT void CEverQuest::GuildPeace(char *);
//EQLIB_OBJECT void CEverQuest::GuildRemove(char *);
//EQLIB_OBJECT void CEverQuest::GuildSay(char *);
//EQLIB_OBJECT void CEverQuest::GuildStatus(char *);
//EQLIB_OBJECT void CEverQuest::GuildWar(char *,int);
//EQLIB_OBJECT void CEverQuest::InitCommands(void);
//EQLIB_OBJECT void CEverQuest::initCustom(void);
//EQLIB_OBJECT void CEverQuest::InterpretCmd(class EQPlayer *,char *);
//EQLIB_OBJECT void CEverQuest::Invite(void);
//EQLIB_OBJECT void CEverQuest::InviteOk(char *);
//EQLIB_OBJECT void CEverQuest::IssueLfgGroupQuery(struct LfgGroupQuery *);
//EQLIB_OBJECT void CEverQuest::IssueLfgPlayerQuery(struct LfgPlayerQuery *);
//EQLIB_OBJECT void CEverQuest::IssuePetCommand(enum PetCommandType,int);
//EQLIB_OBJECT void CEverQuest::Kill(char *,char *);
//EQLIB_OBJECT void CEverQuest::LeaveBankMode(bool);
//EQLIB_OBJECT void CEverQuest::LeaveGuildMaster(void);
//EQLIB_OBJECT void CEverQuest::LeftClickedOnPlayer(class EQPlayer *);
//EQLIB_OBJECT void CEverQuest::LMouseDown(int,int);
//EQLIB_OBJECT void CEverQuest::LMouseUp(int,int);
//EQLIB_OBJECT void CEverQuest::loadCustom(void);
//EQLIB_OBJECT void CEverQuest::loadCustomFromINI(char *);
//EQLIB_OBJECT void CEverQuest::loadOptions(void);
//EQLIB_OBJECT void CEverQuest::loadSoundsGame(void);
//EQLIB_OBJECT void CEverQuest::LoadStringTables(void);
//EQLIB_OBJECT void CEverQuest::LoadSwitchesNonAvatar(EQZoneIndex);
//EQLIB_OBJECT void CEverQuest::LocalDeath(struct _EQPlayerDeath *,unsigned char);
//EQLIB_OBJECT void CEverQuest::MouseWheelScrolled(int);
//EQLIB_OBJECT void CEverQuest::MoveToZone(char *,char *,int,enum ZONE_REQ_REASON);
//EQLIB_OBJECT void CEverQuest::MoveToZone(EQZoneIndex,char *,int,enum ZONE_REQ_REASON);
//EQLIB_OBJECT void CEverQuest::PrepareLocalPCForRepop(void);
//EQLIB_OBJECT void CEverQuest::ProcessControls(void);
//EQLIB_OBJECT void CEverQuest::ProcessGame(struct HWND__ *,struct HINSTANCE__ *);
//EQLIB_OBJECT void CEverQuest::ProcessLocalPCIni(int);
//EQLIB_OBJECT void CEverQuest::procMouse(int);
//EQLIB_OBJECT void CEverQuest::RemoveCharacterOptionFile(char *);
//EQLIB_OBJECT void CEverQuest::ReportDeath(struct _EQPlayerDeath *);
//EQLIB_OBJECT void CEverQuest::ReportSuccessfulHit(struct _EQSuccessfulHit *,unsigned char,int);
//EQLIB_OBJECT void CEverQuest::reqChannel(void);
//EQLIB_OBJECT void CEverQuest::ResetVisionRGBs(void);
//EQLIB_OBJECT void CEverQuest::RightClickedOnPlayer(class EQPlayer *);
//EQLIB_OBJECT void CEverQuest::RMouseDown(int,int);
//EQLIB_OBJECT void CEverQuest::RMouseUp(int,int);
//EQLIB_OBJECT void CEverQuest::SaveCamerasToINI(void);
//EQLIB_OBJECT void CEverQuest::saveCustom(void);
//EQLIB_OBJECT void CEverQuest::saveOptions(void);
//EQLIB_OBJECT void CEverQuest::saveOptions2(void);
//EQLIB_OBJECT void CEverQuest::SavePC(int,int,unsigned char);
//EQLIB_OBJECT void CEverQuest::SavePCForce(int);
//EQLIB_OBJECT void CEverQuest::send_auction(void);
//EQLIB_OBJECT void CEverQuest::send_broadcast(void);
//EQLIB_OBJECT void CEverQuest::send_chat(void);
//EQLIB_OBJECT void CEverQuest::send_gsay(void);
//EQLIB_OBJECT void CEverQuest::send_ooc(void);
//EQLIB_OBJECT void CEverQuest::send_petition(void);
//EQLIB_OBJECT void CEverQuest::send_private(void);
//EQLIB_OBJECT void CEverQuest::send_shout(void);
//EQLIB_OBJECT void CEverQuest::send_social(int,char *,char *);
//EQLIB_OBJECT void CEverQuest::send_tell(char *,char *);
//EQLIB_OBJECT void CEverQuest::send_update_filters(void);
//EQLIB_OBJECT void CEverQuest::SendLightInfo(class EQPlayer *,unsigned char);
//EQLIB_OBJECT void CEverQuest::SendNewText(int,char *,char *);
//EQLIB_OBJECT void CEverQuest::SetDefaultDamageDescByRace(char *,int,unsigned char);
//EQLIB_OBJECT void CEverQuest::SetDefaultGameValues(void);
//EQLIB_OBJECT void CEverQuest::SetGameState(int);
//EQLIB_OBJECT void CEverQuest::SetLfgGroupStatus(struct LfgGroupStatus *);
//EQLIB_OBJECT void CEverQuest::SetLfgPlayerStatus(struct LfgPlayerStatus *);
//EQLIB_OBJECT void CEverQuest::SetPlayerAppearanceFromPInfo(class EQPlayer *,int,bool);
//EQLIB_OBJECT void CEverQuest::SetTimedFog(int);
//EQLIB_OBJECT void CEverQuest::SetupCharSelectCamera(void);
//EQLIB_OBJECT void CEverQuest::Sit(void);
//EQLIB_OBJECT void CEverQuest::SortSpellLoadouts(void);
//EQLIB_OBJECT void CEverQuest::StartCasting(void *);
//EQLIB_OBJECT void CEverQuest::StartNetworkGame(struct HWND__ *,struct HINSTANCE__ *,char *);
//EQLIB_OBJECT void CEverQuest::Surname(char *);
//EQLIB_OBJECT void CEverQuest::ToggleAutoSplit(void);
//EQLIB_OBJECT void CEverQuest::UpdateMyAppearance(void);
//EQLIB_OBJECT void CEverQuest::UseCharge(unsigned long);
//EQLIB_OBJECT void CEverQuest::WhatTimeIsIt(void);
//EQLIB_OBJECT void CEverQuest::Who(char *);
//EQLIB_OBJECT void CEverQuest::WriteBoolToClientINI(bool,char *,char *);
//EQLIB_OBJECT void CEverQuest::WriteBoolToUIINI(bool,char *,char *);
//EQLIB_OBJECT void CEverQuest::WriteFloatToClientINI(float,char *,char *);
//EQLIB_OBJECT void CEverQuest::WriteIntToClientINI(int,char *,char *);
//EQLIB_OBJECT void CEverQuest::WriteIntToUIINI(int,char *,char *);
//EQLIB_OBJECT void CEverQuest::WriteStringToClientINI(char *,char *,char *);
//EQLIB_OBJECT void CEverQuest::WriteStringToUIINI(char *,char *,char *);
// virtual
//EQLIB_OBJECT void CEverQuest::CshOnBuddyStatusChange(char *,int BuddyStatus);
//EQLIB_OBJECT void CEverQuest::CshOnChannelListChange(void);
//EQLIB_OBJECT void CEverQuest::CshOnMessage(char *,char *,int,char *,bool);
//EQLIB_OBJECT void CEverQuest::CshOnPlayerEntering(char *,int,char *);
//EQLIB_OBJECT void CEverQuest::CshOnPlayerLeaving(char *,int,char *);
};

class CExploreModeWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CExploreModeWnd::CExploreModeWnd(class CXWnd *);
//EQLIB_OBJECT void CExploreModeWnd::Activate(void);
// virtual
//EQLIB_OBJECT CExploreModeWnd::~CExploreModeWnd(void);
////EQLIB_OBJECT void * CExploreModeWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CExploreModeWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CExploreModeWnd::Deactivate(void);
};

class CFacePick : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CFacePick::CFacePick(class CXWnd *);
//EQLIB_OBJECT void CFacePick::Activate(void);
//EQLIB_OBJECT void CFacePick::SetFaceSelectionsFromPlayer(void);
// virtual
//EQLIB_OBJECT CFacePick::~CFacePick(void);
//EQLIB_OBJECT int CFacePick::Draw(void)const;
//EQLIB_OBJECT int CFacePick::OnProcessFrame(void);
//EQLIB_OBJECT int CFacePick::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CFacePick::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CFacePick::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CFacePick::Deactivate(void);
// private
//EQLIB_OBJECT void CFacePick::CycleThroughFHEB(int,int);
//EQLIB_OBJECT void CFacePick::Init(void);
//EQLIB_OBJECT void CFacePick::ShowButtonGroup(int,bool);
};

class CFeedbackWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CFeedbackWnd::CFeedbackWnd(class CXWnd *);
//EQLIB_OBJECT void CFeedbackWnd::Activate(void);
// virtual
//EQLIB_OBJECT CFeedbackWnd::~CFeedbackWnd(void);
//EQLIB_OBJECT int CFeedbackWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CFeedbackWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CFeedbackWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CFeedbackWnd::Deactivate(void);
};

class CFileSelectionWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CFileSelectionWnd::CFileSelectionWnd(class CXWnd *);
//EQLIB_OBJECT class CXStr CFileSelectionWnd::GetSelectedFile(int);
//EQLIB_OBJECT int CFileSelectionWnd::GetSelectedFileCount(void);
//EQLIB_OBJECT void CFileSelectionWnd::Activate(class CXWnd *,int);
//EQLIB_OBJECT void CFileSelectionWnd::Callback(bool);
// virtual
//EQLIB_OBJECT CFileSelectionWnd::~CFileSelectionWnd(void);
//EQLIB_OBJECT int CFileSelectionWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CFileSelectionWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CFileSelectionWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CFileSelectionWnd::Deactivate(void);
// private
//EQLIB_OBJECT bool CFileSelectionWnd::DirectoryEmpty(struct IShellFolder *,struct _ITEMIDLIST *);
//EQLIB_OBJECT unsigned long CFileSelectionWnd::GetPath(struct IShellFolder *,struct _ITEMIDLIST *,bool,class CXStr &);
//EQLIB_OBJECT void CFileSelectionWnd::ClearFileList(void);
//EQLIB_OBJECT void CFileSelectionWnd::GoSubdirectory(struct _ITEMIDLIST *);
//EQLIB_OBJECT void CFileSelectionWnd::MakeFilePath(void);
//EQLIB_OBJECT void CFileSelectionWnd::UpdateButtons(void);
//EQLIB_OBJECT void CFileSelectionWnd::UpdateFileList(void);
};

class CFriendsWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CFriendsWnd::CFriendsWnd(class CXWnd *);
//EQLIB_OBJECT void CFriendsWnd::Activate(void);
//EQLIB_OBJECT void CFriendsWnd::UpdateFriendsList(void);
//EQLIB_OBJECT void CFriendsWnd::UpdateIgnoreList(void);
// virtual
//EQLIB_OBJECT CFriendsWnd::~CFriendsWnd(void);
//EQLIB_OBJECT int CFriendsWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CFriendsWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CFriendsWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CFriendsWnd::Deactivate(void);
// protected
//EQLIB_OBJECT void CFriendsWnd::AddFriend(void);
//EQLIB_OBJECT void CFriendsWnd::AddIgnore(void);
//EQLIB_OBJECT void CFriendsWnd::UpdateButtons(void);
};

class CGaugeDrawTemplate
{
public:
//EQLIB_OBJECT CGaugeDrawTemplate::~CGaugeDrawTemplate(void);
};

class CGaugeTemplate
{
public:
//EQLIB_OBJECT CGaugeTemplate::CGaugeTemplate(class CParamGauge *);
// virtual
//EQLIB_OBJECT CGaugeTemplate::~CGaugeTemplate(void);
////EQLIB_OBJECT void * CGaugeTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CGaugeTemplate::`vector deleting destructor'(unsigned int);
};

class CGaugeWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CGaugeWnd::CGaugeWnd(class CXWnd *,unsigned __int32,class CXRect,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,int,unsigned long,unsigned long,bool,int,int,int,int);
//EQLIB_OBJECT class CXRect CGaugeWnd::CalcFillRect(class CXRect *,int)const;
//EQLIB_OBJECT class CXRect CGaugeWnd::CalcLinesFillRect(class CXRect *,int)const;
//EQLIB_OBJECT void CGaugeWnd::SpecialToolTip(void);
// virtual
//EQLIB_OBJECT CGaugeWnd::~CGaugeWnd(void);
//EQLIB_OBJECT int CGaugeWnd::Draw(void)const;
//EQLIB_OBJECT int CGaugeWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CGaugeWnd::OnProcessFrame(void);
////EQLIB_OBJECT void * CGaugeWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CGaugeWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CGaugeWnd::SetAttributesFromSidl(class CParamScreenPiece *);
};

class CGemsGameWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CGemsGameWnd::CGemsGameWnd(class CXWnd *);
//EQLIB_OBJECT void CGemsGameWnd::Activate(void);
//EQLIB_OBJECT void CGemsGameWnd::MoveCurBlock(int);
// virtual
//EQLIB_OBJECT CGemsGameWnd::~CGemsGameWnd(void);
//EQLIB_OBJECT int CGemsGameWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CGemsGameWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CGemsGameWnd::PostDraw(void)const;
//EQLIB_OBJECT int CGemsGameWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CGemsGameWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CGemsGameWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CGemsGameWnd::Deactivate(void);
// private
//EQLIB_OBJECT bool CGemsGameWnd::BadSpecial(int)const;
//EQLIB_OBJECT bool CGemsGameWnd::LegalBlockMove(int,int,int,int,bool);
//EQLIB_OBJECT int CGemsGameWnd::GetRndBlockImage(void);
//EQLIB_OBJECT void CGemsGameWnd::ActivateSpecialMode(int);
//EQLIB_OBJECT void CGemsGameWnd::AdvanceToNextWave(void);
//EQLIB_OBJECT void CGemsGameWnd::CheckForMatches(int,int);
//EQLIB_OBJECT void CGemsGameWnd::CheckForNewHighScore(void);
//EQLIB_OBJECT void CGemsGameWnd::ClearBlock(struct _GemsBlock *);
//EQLIB_OBJECT void CGemsGameWnd::ClearHighScores(void);
//EQLIB_OBJECT void CGemsGameWnd::DoMatchScore(int);
//EQLIB_OBJECT void CGemsGameWnd::DrawSpellGem(int,class CXRect,int,bool)const;
//EQLIB_OBJECT void CGemsGameWnd::GetNextBlock(void);
//EQLIB_OBJECT void CGemsGameWnd::Init(void);
//EQLIB_OBJECT void CGemsGameWnd::MakeBlockDrop(int,int,int);
//EQLIB_OBJECT void CGemsGameWnd::MarkHigherBlocksFalling(int,int);
//EQLIB_OBJECT void CGemsGameWnd::ProcessMatches(int);
//EQLIB_OBJECT void CGemsGameWnd::ProcessMoveCurBlock(int);
//EQLIB_OBJECT void CGemsGameWnd::ReadHighScores(void);
//EQLIB_OBJECT void CGemsGameWnd::Restart(void);
//EQLIB_OBJECT void CGemsGameWnd::SetNextUpdate(void);
//EQLIB_OBJECT void CGemsGameWnd::SetPause(bool);
//EQLIB_OBJECT void CGemsGameWnd::TogglePause(void);
//EQLIB_OBJECT void CGemsGameWnd::Update(void);
//EQLIB_OBJECT void CGemsGameWnd::UpdateDisplay(void);
//EQLIB_OBJECT void CGemsGameWnd::WriteHighScores(void);
};

class CGiveWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CGiveWnd::CGiveWnd(class CXWnd *);
//EQLIB_OBJECT void CGiveWnd::Activate(void);
//EQLIB_OBJECT void CGiveWnd::UpdateGiveDisplay(void);
// virtual
//EQLIB_OBJECT CGiveWnd::~CGiveWnd(void);
//EQLIB_OBJECT int CGiveWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CGiveWnd::PostDraw(void)const;
//EQLIB_OBJECT int CGiveWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CGiveWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CGiveWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CGiveWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CGiveWnd::Init(void);
};

class CGroupSearchFiltersWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CGroupSearchFiltersWnd::CGroupSearchFiltersWnd(class CXWnd *);
//EQLIB_OBJECT bool CGroupSearchFiltersWnd::ShouldFilterPlayer(char const *,char const *)const;
//EQLIB_OBJECT bool CGroupSearchFiltersWnd::UseExclusiveSearchMode(void)const;
//EQLIB_OBJECT void CGroupSearchFiltersWnd::Activate(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::HandleAddDesiredGuild(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::HandleAddExcludedGuild(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::HandleDesiredGuildsSelected(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::HandleExcludeGuildsSelected(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::HandleRemoveAllDesiredGuilds(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::HandleRemoveAllExcludedGuilds(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::HandleRemoveDesiredGuild(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::HandleRemoveExcludedGuild(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::HandleUseFriendsListSelected(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::HandleUseIgnoreListSelected(void);
// virtual
//EQLIB_OBJECT CGroupSearchFiltersWnd::~CGroupSearchFiltersWnd(void);
//EQLIB_OBJECT int CGroupSearchFiltersWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CGroupSearchFiltersWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CGroupSearchFiltersWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CGroupSearchFiltersWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::Deactivate(void);
// private
//EQLIB_OBJECT bool CGroupSearchFiltersWnd::GuildIsInDesiredGuildsList(char const *)const;
//EQLIB_OBJECT bool CGroupSearchFiltersWnd::GuildIsInExcludedGuildsList(char const *)const;
//EQLIB_OBJECT bool CGroupSearchFiltersWnd::Load(void);
//EQLIB_OBJECT bool CGroupSearchFiltersWnd::NameIsInFriendsList(char const *)const;
//EQLIB_OBJECT bool CGroupSearchFiltersWnd::NameIsInIgnoreList(char const *)const;
//EQLIB_OBJECT bool CGroupSearchFiltersWnd::UseDesiredGuilds(void)const;
//EQLIB_OBJECT bool CGroupSearchFiltersWnd::UseExcludedGuilds(void)const;
//EQLIB_OBJECT bool CGroupSearchFiltersWnd::UseFriendsList(void)const;
//EQLIB_OBJECT bool CGroupSearchFiltersWnd::UseIgnoreList(void)const;
//EQLIB_OBJECT void CGroupSearchFiltersWnd::ClearUiPointers(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::FetchUiPointers(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::InitPieces(void);
//EQLIB_OBJECT void CGroupSearchFiltersWnd::Save(void)const;
};

class CGroupSearchWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CGroupSearchWnd::CGroupSearchWnd(class CXWnd *);
//EQLIB_OBJECT void CGroupSearchWnd::Activate(int);
//EQLIB_OBJECT void CGroupSearchWnd::AddGroupResult(struct LfgGroupResult const *);
//EQLIB_OBJECT void CGroupSearchWnd::AddPlayerResult(struct LfgPlayerResult const *);
//EQLIB_OBJECT void CGroupSearchWnd::HandleDeselectAllClasses(void);
//EQLIB_OBJECT void CGroupSearchWnd::HandleDoubleClickedOnPlayer(char const *);
//EQLIB_OBJECT void CGroupSearchWnd::HandleGroupInfoPost(void);
//EQLIB_OBJECT void CGroupSearchWnd::HandleGroupInfoRemove(void);
//EQLIB_OBJECT void CGroupSearchWnd::HandleGroupInfoUpdate(void);
//EQLIB_OBJECT void CGroupSearchWnd::HandleGroupMakeupChanged(void);
//EQLIB_OBJECT void CGroupSearchWnd::HandleGroupResultColSelected(int);
//EQLIB_OBJECT void CGroupSearchWnd::HandleGroupResultRowSelected(int);
//EQLIB_OBJECT void CGroupSearchWnd::HandleNumericSort(class SListWndSortInfo *);
//EQLIB_OBJECT void CGroupSearchWnd::HandleOpenFiltersWindow(void);
//EQLIB_OBJECT void CGroupSearchWnd::HandlePlayerInfoPost(void);
//EQLIB_OBJECT void CGroupSearchWnd::HandlePlayerInfoRemove(void);
//EQLIB_OBJECT void CGroupSearchWnd::HandlePlayerInfoUpdate(void);
//EQLIB_OBJECT void CGroupSearchWnd::HandlePlayerResultColSelected(int);
//EQLIB_OBJECT void CGroupSearchWnd::HandleQueryingForGroups(void);
//EQLIB_OBJECT void CGroupSearchWnd::HandleQueryingForPlayers(void);
//EQLIB_OBJECT void CGroupSearchWnd::HandleSelectAllClasses(void);
//EQLIB_OBJECT void CGroupSearchWnd::ResetGroupList(void);
//EQLIB_OBJECT void CGroupSearchWnd::ResetPlayerList(void);
//EQLIB_OBJECT void CGroupSearchWnd::SendServerLfgOff(void);
//EQLIB_OBJECT void CGroupSearchWnd::SendServerLfgOn(void);
//EQLIB_OBJECT void CGroupSearchWnd::SendServerLfpOff(void);
//EQLIB_OBJECT void CGroupSearchWnd::SendServerLfpOn(void);
// virtual
//EQLIB_OBJECT CGroupSearchWnd::~CGroupSearchWnd(void);
//EQLIB_OBJECT int CGroupSearchWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CGroupSearchWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CGroupSearchWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CGroupSearchWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CGroupSearchWnd::Deactivate(void);
// private
//EQLIB_OBJECT bool CGroupSearchWnd::IsLevelRangeValid(int,int)const;
//EQLIB_OBJECT bool CGroupSearchWnd::PlayerShouldBeFiltered(struct LfgPlayerData const *)const;
//EQLIB_OBJECT int CGroupSearchWnd::CheckIfCurrentLfgInfoIsValid(void)const;
//EQLIB_OBJECT int CGroupSearchWnd::CheckIfCurrentLfpInfoIsValid(void)const;
//EQLIB_OBJECT int CGroupSearchWnd::GetDesiredClassesFlag(void)const;
//EQLIB_OBJECT int CGroupSearchWnd::GetDesiredGroupMaxLevel(void)const;
//EQLIB_OBJECT int CGroupSearchWnd::GetDesiredGroupMinLevel(void)const;
//EQLIB_OBJECT int CGroupSearchWnd::GetDesiredPlayerMaxLevel(void)const;
//EQLIB_OBJECT int CGroupSearchWnd::GetDesiredPlayerMinLevel(void)const;
//EQLIB_OBJECT int CGroupSearchWnd::GetEqClassType(int)const;
//EQLIB_OBJECT int CGroupSearchWnd::GroupInfoPageOnProcessFrame(void);
//EQLIB_OBJECT int CGroupSearchWnd::GroupInfoPageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int CGroupSearchWnd::GroupListPageOnProcessFrame(void);
//EQLIB_OBJECT int CGroupSearchWnd::GroupListPageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int CGroupSearchWnd::PlayerInfoPageOnProcessFrame(void);
//EQLIB_OBJECT int CGroupSearchWnd::PlayerInfoPageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int CGroupSearchWnd::PlayerListPageOnProcessFrame(void);
//EQLIB_OBJECT int CGroupSearchWnd::PlayerListPageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int CGroupSearchWnd::RedirectOnProcessFrameTo(class CPageWnd *);
//EQLIB_OBJECT int CGroupSearchWnd::RedirectWndNotificationTo(class CPageWnd *,class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT void CGroupSearchWnd::ClearUiPointers(void);
//EQLIB_OBJECT void CGroupSearchWnd::FetchUiPointers(void);
//EQLIB_OBJECT void CGroupSearchWnd::FilterOutBadWords(char const *,char *)const;
//EQLIB_OBJECT void CGroupSearchWnd::GetDefaultLfgLevelRange(class EQ_PC const *,int *,int *)const;
//EQLIB_OBJECT void CGroupSearchWnd::GetDefaultLfpLevelRange(class EQ_PC const *,int *,int *)const;
//EQLIB_OBJECT void CGroupSearchWnd::InitLfg(void);
//EQLIB_OBJECT void CGroupSearchWnd::InitLfp(void);
//EQLIB_OBJECT void CGroupSearchWnd::LockQueryButtonAtTime(long);
//EQLIB_OBJECT void CGroupSearchWnd::PopUpErrorMessage(int)const;
//EQLIB_OBJECT void CGroupSearchWnd::ShowGroupDetails(struct LfgGroupResult const *);
//EQLIB_OBJECT void CGroupSearchWnd::UpdateGroupLabel(void);
//EQLIB_OBJECT void CGroupSearchWnd::UpdateLfgPostingStatus(void);
//EQLIB_OBJECT void CGroupSearchWnd::UpdateLfpPostingStatus(void);
//EQLIB_OBJECT void CGroupSearchWnd::UpdatePlayerLabel(void);
//EQLIB_OBJECT void CGroupSearchWnd::UpdateRemainingQueryLockedTime(long);
};

class CGroupWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CGroupWnd::CGroupWnd(class CXWnd *);
//EQLIB_OBJECT void CGroupWnd::Activate(void);
//EQLIB_OBJECT void CGroupWnd::CreateLocalMenu(void);
//EQLIB_OBJECT void CGroupWnd::KeyMapUpdated(void);
//EQLIB_OBJECT void CGroupWnd::SetInvited(bool);
//EQLIB_OBJECT void CGroupWnd::UpdateContextMenu(void);
// virtual
//EQLIB_OBJECT CGroupWnd::~CGroupWnd(void);
//EQLIB_OBJECT int CGroupWnd::Draw(void)const;
//EQLIB_OBJECT int CGroupWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CGroupWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CGroupWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CGroupWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CGroupWnd::Deactivate(void);
//EQLIB_OBJECT void CGroupWnd::LoadIniInfo(void);
//EQLIB_OBJECT void CGroupWnd::StoreIniInfo(void);
// protected
//EQLIB_OBJECT void CGroupWnd::UpdateButtons(void);
// private
//EQLIB_OBJECT void CGroupWnd::Init(void);
};

class CGuild
{
public:
//EQLIB_OBJECT CGuild::CGuild(void);
//EQLIB_OBJECT bool CGuild::ValidGuildName(int);
//EQLIB_OBJECT char * CGuild::GetGuildMotd(void);
//EQLIB_OBJECT char * CGuild::GetGuildMotdAuthor(void);
//EQLIB_OBJECT char * CGuild::GetGuildName(int);
//EQLIB_OBJECT int CGuild::GetGuildIndex(char *);
//EQLIB_OBJECT class GuildMember * CGuild::FindMemberByName(char *);
//EQLIB_OBJECT void CGuild::DeleteAllMembers(void);
//EQLIB_OBJECT void CGuild::DemoteMember(class GuildMember *);
//EQLIB_OBJECT void CGuild::HandleGuildMessage(struct connection_t *,unsigned __int32,char *,unsigned __int32);
//EQLIB_OBJECT void CGuild::SendPublicCommentChange(char *,char *);
//EQLIB_OBJECT void CGuild::SetGuildMotd(struct guildmotdSet *);
// virtual
//EQLIB_OBJECT CGuild::~CGuild(void);
////EQLIB_OBJECT void * CGuild::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CGuild::`vector deleting destructor'(unsigned int);
// private
//EQLIB_OBJECT void CGuild::AddGuildMember(class GuildMember *);
//EQLIB_OBJECT void CGuild::ChangeGuildMemberName(char *);
//EQLIB_OBJECT void CGuild::HandleAddGuildMember(char *,int);
//EQLIB_OBJECT void CGuild::HandleDeleteGuildResponse(char *);
//EQLIB_OBJECT void CGuild::HandleGuildInvite(struct connection_t *,unsigned __int32,char *,unsigned __int32);
//EQLIB_OBJECT void CGuild::HandleMemberLevelUpdate(char *);
//EQLIB_OBJECT void CGuild::HandleRemoveGuildMember(char *,int);
//EQLIB_OBJECT void CGuild::InitializeFromDump(char *);
//EQLIB_OBJECT void CGuild::UpdateGuildMemberOnWindow(class GuildMember *);
//EQLIB_OBJECT void CGuild::UpdateMemberStatus(char *);
//EQLIB_OBJECT void CGuild::UpdatePublicComment(char *);
};

class CGuildMgmtWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CGuildMgmtWnd::CGuildMgmtWnd(class CXWnd *);
//EQLIB_OBJECT void CGuildMgmtWnd::Activate(void);
//EQLIB_OBJECT void CGuildMgmtWnd::AddMember(class GuildMember *);
//EQLIB_OBJECT void CGuildMgmtWnd::Clean(void);
//EQLIB_OBJECT void CGuildMgmtWnd::DumpToFile(char *);
//EQLIB_OBJECT void CGuildMgmtWnd::RemoveMember(class GuildMember *);
//EQLIB_OBJECT void CGuildMgmtWnd::RenameMember(char *,char *);
//EQLIB_OBJECT void CGuildMgmtWnd::SetMOTD(char *,char *);
//EQLIB_OBJECT void CGuildMgmtWnd::SetPlayerCount(int);
//EQLIB_OBJECT void CGuildMgmtWnd::SortList(int,bool);
//EQLIB_OBJECT void CGuildMgmtWnd::UpdateButtons(void);
//EQLIB_OBJECT void CGuildMgmtWnd::UpdateListMember(class GuildMember *,int);
// virtual
//EQLIB_OBJECT CGuildMgmtWnd::~CGuildMgmtWnd(void);
//EQLIB_OBJECT int CGuildMgmtWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CGuildMgmtWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CGuildMgmtWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CGuildMgmtWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CGuildMgmtWnd::Deactivate(void);
// protected
//EQLIB_OBJECT char * CGuildMgmtWnd::GetPersonalNote(char *);
//EQLIB_OBJECT int CGuildMgmtWnd::FindListMember(class GuildMember *);
//EQLIB_OBJECT void CGuildMgmtWnd::CleanAndRefillListWnd(bool);
//EQLIB_OBJECT void CGuildMgmtWnd::CreatePersonalNotesFilename(void);
//EQLIB_OBJECT void CGuildMgmtWnd::LoadINI(void);
//EQLIB_OBJECT void CGuildMgmtWnd::LoadPersonalNotes(void);
//EQLIB_OBJECT void CGuildMgmtWnd::SavePersonalNotes(void);
//EQLIB_OBJECT void CGuildMgmtWnd::SetPersonalNote(char *,char *);
// private
//EQLIB_OBJECT void CGuildMgmtWnd::Init(void);
};

class ChannelServerApi
{
public:
//EQLIB_OBJECT ChannelServerApi::~ChannelServerApi(void);
//EQLIB_OBJECT ChannelServerApi::ChannelServerApi(char *,int,char *,char *,class ChannelServerHandler *,bool,bool,char *);
//EQLIB_OBJECT char * ChannelServerApi::GetChannelName(int);
////EQLIB_OBJECT enum ChannelServerApi::Status ChannelServerApi::GetStatus(void);
//EQLIB_OBJECT int ChannelServerApi::GetChannelCount(void);
//EQLIB_OBJECT int ChannelServerApi::GetChannelNumber(char *);
//EQLIB_OBJECT static char * __cdecl ChannelServerApi::AllocateString(char *);
//EQLIB_OBJECT static char * __cdecl ChannelServerApi::Strncpy(char *,char *,int);
//EQLIB_OBJECT static int __cdecl ChannelServerApi::GetNextField(char *,int,char * *,char);
//EQLIB_OBJECT static void * __cdecl ChannelServerApi::SmartResize(void *,int,int);
//EQLIB_OBJECT void ChannelServerApi::GiveTime(void);
//EQLIB_OBJECT void ChannelServerApi::SendMessageA(char *);
// virtual
//EQLIB_OBJECT void ChannelServerApi::OnRoutePacket(class UdpConnection *,unsigned char const *,int);
// protected
//EQLIB_OBJECT void ChannelServerApi::FreeChannelList(void);
////EQLIB_OBJECT void ChannelServerApi::SetBuddyStatus(char *,enum ChannelServerApi::BuddyStatus);
//EQLIB_OBJECT void ChannelServerApi::SortBuddyList(void);
};

class ChannelServerHandler
{
public:
// virtual
//EQLIB_OBJECT void ChannelServerHandler::CshOnLoginConfirm(bool);
//EQLIB_OBJECT void ChannelServerHandler::CshOnPacket(void *,int,char *,int,char *,bool);
};

class CHashCXStrInt32
{
public:
//EQLIB_OBJECT CHashCXStrInt32::~CHashCXStrInt32(void);
//EQLIB_OBJECT CHashCXStrInt32::CHashCXStrInt32(void);
//EQLIB_OBJECT bool CHashCXStrInt32::Insert(class CXStr const &,int);
//EQLIB_OBJECT bool CHashCXStrInt32::LookUp(class CXStr const &,int &)const;
//EQLIB_OBJECT void CHashCXStrInt32::Reset(void);
// private
//EQLIB_OBJECT int CHashCXStrInt32::KeyToBin(class CXStr const &)const;
};

class CHelpWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CHelpWnd::CHelpWnd(class CXWnd *);
//EQLIB_OBJECT void CHelpWnd::Activate(void);
//EQLIB_OBJECT void CHelpWnd::SetFile(char *);
// virtual
//EQLIB_OBJECT CHelpWnd::~CHelpWnd(void);
//EQLIB_OBJECT int CHelpWnd::HandleKeyboardMsg(unsigned __int32,unsigned __int32,bool);
//EQLIB_OBJECT int CHelpWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CHelpWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CHelpWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CHelpWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CHelpWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CHelpWnd::Init(void);
};

class CHotButtonWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CHotButtonWnd::CHotButtonWnd(class CXWnd *);
//EQLIB_OBJECT void CHotButtonWnd::Activate(void);
//EQLIB_OBJECT void CHotButtonWnd::DoHotButton(int Button,int AllowAutoRightClick);
//EQLIB_OBJECT void CHotButtonWnd::DoHotButtonRightClick(int);
//EQLIB_OBJECT void CHotButtonWnd::UpdatePage(void);
// virtual
//EQLIB_OBJECT CHotButtonWnd::~CHotButtonWnd(void);
//EQLIB_OBJECT int CHotButtonWnd::Draw(void)const;
//EQLIB_OBJECT int CHotButtonWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CHotButtonWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CHotButtonWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CHotButtonWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CHotButtonWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CHotButtonWnd::Init(void);
};

class CIMECandidateList
{
public:
//EQLIB_OBJECT CIMECandidateList::~CIMECandidateList(void);
//EQLIB_OBJECT CIMECandidateList::CIMECandidateList(class CIMEManager *);
//EQLIB_OBJECT int CIMECandidateList::show(class CIMEComposition const *)const;
// private
//EQLIB_OBJECT int CIMECandidateList::repositionImeCandidateList(int,int)const;
};

class CIMEComposition
{
public:
//EQLIB_OBJECT CIMEComposition::~CIMEComposition(void);
//EQLIB_OBJECT CIMEComposition::CIMEComposition(class CIMEManager *);
//EQLIB_OBJECT class CXPoint CIMEComposition::getCursorPoint(void)const;
//EQLIB_OBJECT class CXRect CIMEComposition::getCompositionArea(void)const;
//EQLIB_OBJECT int CIMEComposition::addInputChar(unsigned short);
//EQLIB_OBJECT int CIMEComposition::addInputString(class CXStr const &,int);
//EQLIB_OBJECT int CIMEComposition::addInputString(unsigned short *,int);
//EQLIB_OBJECT int CIMEComposition::addStringFromIme(long);
//EQLIB_OBJECT void CIMEComposition::directToEditWnd(class CEditWnd *);
// private
//EQLIB_OBJECT int CIMEComposition::addCompositionHighlights(void);
//EQLIB_OBJECT int CIMEComposition::applyChineseComposingRules(class CXStr *);
//EQLIB_OBJECT int CIMEComposition::applyJapaneseComposingRules(class CXStr *);
//EQLIB_OBJECT int CIMEComposition::applyKoreanComposingRules(class CXStr *);
//EQLIB_OBJECT int CIMEComposition::getCompositionInsertIndex(void)const;
//EQLIB_OBJECT int CIMEComposition::handleImeComposing(void);
//EQLIB_OBJECT int CIMEComposition::handleImeResult(void);
//EQLIB_OBJECT int CIMEComposition::repositionImeCompositionWindow(int,int)const;
//EQLIB_OBJECT struct CompAttr * CIMEComposition::allocateImeCompositionAttributes(void)const;
//EQLIB_OBJECT unsigned short * CIMEComposition::allocateImeCompositionString(long)const;
//EQLIB_OBJECT void CIMEComposition::backupCurrentText(void);
//EQLIB_OBJECT void CIMEComposition::revertToBackupText(void);
};

class CIMEManager
{
public:
//EQLIB_OBJECT CIMEManager::~CIMEManager(void);
//EQLIB_OBJECT CIMEManager::CIMEManager(struct HWND__ *);
//EQLIB_OBJECT bool CIMEManager::imeIsOff(void)const;
//EQLIB_OBJECT bool CIMEManager::imeIsOn(void)const;
//EQLIB_OBJECT int CIMEManager::getImeProperties(void)const;
//EQLIB_OBJECT int CIMEManager::getInputLanguage(void)const;
//EQLIB_OBJECT int CIMEManager::getInputState(void)const;
//EQLIB_OBJECT int CIMEManager::handleWndProc(unsigned int,unsigned int,long);
//EQLIB_OBJECT int CIMEManager::setInputEditWnd(class CEditWnd *);
//EQLIB_OBJECT struct HWND__ * CIMEManager::getWindowHandle(void)const;
//EQLIB_OBJECT void CIMEManager::setInputState(int);
//EQLIB_OBJECT void CIMEManager::turnImeOff(void);
//EQLIB_OBJECT void CIMEManager::turnImeOn(void);
// private
//EQLIB_OBJECT int CIMEManager::handleAddChar(unsigned short);
//EQLIB_OBJECT int CIMEManager::handleChangeCandidates(void);
//EQLIB_OBJECT int CIMEManager::handleCloseCandidates(void);
//EQLIB_OBJECT int CIMEManager::handleEndComposition(void);
//EQLIB_OBJECT int CIMEManager::handleImeChanged(void);
//EQLIB_OBJECT int CIMEManager::handleImeStatusChanged(void);
//EQLIB_OBJECT int CIMEManager::handleInputComposition(long);
//EQLIB_OBJECT int CIMEManager::handleOpenCandidates(void);
//EQLIB_OBJECT int CIMEManager::handleStartComposition(void);
//EQLIB_OBJECT int CIMEManager::queryImeLanguage(void)const;
//EQLIB_OBJECT int CIMEManager::queryImeProperties(void)const;
//EQLIB_OBJECT void CIMEManager::enableIme(bool);
};

class CIMEStatusBar
{
public:
//EQLIB_OBJECT CIMEStatusBar::CIMEStatusBar(class CIMEManager *);
//EQLIB_OBJECT int CIMEStatusBar::hide(void);
//EQLIB_OBJECT int CIMEStatusBar::show(class CIMEComposition const *);
//EQLIB_OBJECT int CIMEStatusBar::update(void);
// private
//EQLIB_OBJECT int CIMEStatusBar::repositionStatusWindow(void);
//EQLIB_OBJECT void CIMEStatusBar::handleChineseSimplifiedStatusChange(unsigned long);
//EQLIB_OBJECT void CIMEStatusBar::handleChineseTraditionalStatusChange(unsigned long);
//EQLIB_OBJECT void CIMEStatusBar::handleJapaneseStatusChange(unsigned long);
//EQLIB_OBJECT void CIMEStatusBar::handleKoreanStatusChange(unsigned long);
};

class CInspectWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CInspectWnd::CInspectWnd(class CXWnd *);
//EQLIB_OBJECT void CInspectWnd::Activate(struct _inspect *);
//EQLIB_OBJECT void CInspectWnd::PlayerBeingDeleted(class EQPlayer *);
// virtual
//EQLIB_OBJECT CInspectWnd::~CInspectWnd(void);
//EQLIB_OBJECT int CInspectWnd::Draw(void)const;
//EQLIB_OBJECT int CInspectWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CInspectWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CInspectWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CInspectWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CInspectWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CInspectWnd::AcceptInspectText(void);
//EQLIB_OBJECT void CInspectWnd::Init(void);
};

class CInventoryWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CInventoryWnd::CInventoryWnd(class CXWnd *);
//EQLIB_OBJECT void CInventoryWnd::Activate(void);
// virtual
//EQLIB_OBJECT CInventoryWnd::~CInventoryWnd(void);
//EQLIB_OBJECT int CInventoryWnd::Draw(void)const;
//EQLIB_OBJECT int CInventoryWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CInventoryWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CInventoryWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CInventoryWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CInventoryWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CInventoryWnd::Deactivate(void);
// private
//EQLIB_OBJECT long CInventoryWnd::GetInventoryQtyFromCoinType(int);
//EQLIB_OBJECT void CInventoryWnd::ClickedMoneyButton(int,int);
//EQLIB_OBJECT void CInventoryWnd::DestroyHeld(void);
//EQLIB_OBJECT void CInventoryWnd::Init(void);
//EQLIB_OBJECT void CInventoryWnd::UpdateMoneyDisplay(void);
};

class CInvSlot
{
public:
//EQLIB_OBJECT CInvSlot::CInvSlot(void);
//EQLIB_OBJECT bool CInvSlot::IllegalBigBank(int);
//EQLIB_OBJECT void CInvSlot::DoDrinkEatPoison(class EQ_Item *,int);
//EQLIB_OBJECT void CInvSlot::HandleLButtonDown(class CXPoint);
//EQLIB_OBJECT void CInvSlot::HandleLButtonHeld(class CXPoint);
//EQLIB_OBJECT void CInvSlot::HandleLButtonUp(class CXPoint,bool);
//EQLIB_OBJECT void CInvSlot::HandleLButtonUpAfterHeld(class CXPoint);
//EQLIB_OBJECT void CInvSlot::HandleRButtonDown(class CXPoint);
//EQLIB_OBJECT void CInvSlot::HandleRButtonHeld(class CXPoint);
//EQLIB_OBJECT void CInvSlot::HandleRButtonUp(class CXPoint);
//EQLIB_OBJECT void CInvSlot::HandleRButtonUpAfterHeld(class CXPoint);
//EQLIB_OBJECT void CInvSlot::SetInvSlotWnd(class CInvSlotWnd *);
//EQLIB_OBJECT void CInvSlot::SetItem(class EQ_Item *);
//EQLIB_OBJECT void CInvSlot::SliderComplete(int);
// virtual
//EQLIB_OBJECT CInvSlot::~CInvSlot(void);
////EQLIB_OBJECT void * CInvSlot::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CInvSlot::`vector deleting destructor'(unsigned int);
};

class CInvSlotMgr
{
public:
//EQLIB_OBJECT CInvSlotMgr::CInvSlotMgr(void);
//EQLIB_OBJECT class CInvSlot * CInvSlotMgr::CreateInvSlot(class CInvSlotWnd *);
//EQLIB_OBJECT class CInvSlot * CInvSlotMgr::FindInvSlot(int);
//EQLIB_OBJECT int CInvSlotMgr::MoveItem(int,int,int,int);
//EQLIB_OBJECT void CInvSlotMgr::Process(void);
//EQLIB_OBJECT void CInvSlotMgr::SelectSlot(class CInvSlot *);
//EQLIB_OBJECT void CInvSlotMgr::UpdateSlots(void);
// virtual
//EQLIB_OBJECT CInvSlotMgr::~CInvSlotMgr(void);
////EQLIB_OBJECT void * CInvSlotMgr::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CInvSlotMgr::`vector deleting destructor'(unsigned int);
};

class CInvSlotTemplate
{
public:
//EQLIB_OBJECT CInvSlotTemplate::CInvSlotTemplate(class CParamInvSlot *);
// virtual
//EQLIB_OBJECT CInvSlotTemplate::~CInvSlotTemplate(void);
////EQLIB_OBJECT void * CInvSlotTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CInvSlotTemplate::`vector deleting destructor'(unsigned int);
};

class CInvSlotWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CInvSlotWnd::CInvSlotWnd(class CXWnd *,unsigned __int32,class CXRect,class CTextureAnimation *,int,int,int);
//EQLIB_OBJECT void CInvSlotWnd::SetInvSlot(class CInvSlot *);
// virtual
//EQLIB_OBJECT CInvSlotWnd::~CInvSlotWnd(void);
//EQLIB_OBJECT int CInvSlotWnd::Draw(void)const;
//EQLIB_OBJECT int CInvSlotWnd::HandleLButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CInvSlotWnd::HandleLButtonHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CInvSlotWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CInvSlotWnd::HandleLButtonUpAfterHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CInvSlotWnd::HandleRButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CInvSlotWnd::HandleRButtonHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CInvSlotWnd::HandleRButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CInvSlotWnd::HandleRButtonUpAfterHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CInvSlotWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CInvSlotWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CInvSlotWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CInvSlotWnd::SetAttributesFromSidl(class CParamScreenPiece *);
};

class CItemDisplayWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CItemDisplayWnd::CItemDisplayWnd(class CXWnd *);
//EQLIB_OBJECT class CXStr CItemDisplayWnd::CreateEquipmentStatusString(class EQ_Item *);
//EQLIB_OBJECT void CItemDisplayWnd::SetItem(class EQ_Item *,bool);
//EQLIB_OBJECT void CItemDisplayWnd::SetItemText(char *);
//EQLIB_OBJECT void CItemDisplayWnd::SetSpell(int SpellID,bool HasSpellDescr,int);
//EQLIB_OBJECT void CItemDisplayWnd::UpdateStrings(void);
// virtual
//EQLIB_OBJECT CItemDisplayWnd::~CItemDisplayWnd(void);
//EQLIB_OBJECT int CItemDisplayWnd::HandleKeyboardMsg(unsigned __int32,unsigned __int32,bool);
//EQLIB_OBJECT int CItemDisplayWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CItemDisplayWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CItemDisplayWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CItemDisplayWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CItemDisplayWnd::Activate(void);
//EQLIB_OBJECT void CItemDisplayWnd::Deactivate(void);
// protected
//EQLIB_OBJECT class CXStr CItemDisplayWnd::CreateClassString(class EQ_Equipment *);
//EQLIB_OBJECT class CXStr CItemDisplayWnd::CreateMealSizeString(class EQ_Equipment *);
//EQLIB_OBJECT class CXStr CItemDisplayWnd::CreateModString(class EQ_Equipment *,int,int,int *);
//EQLIB_OBJECT class CXStr CItemDisplayWnd::CreateRaceString(class EQ_Equipment *);
//EQLIB_OBJECT void CItemDisplayWnd::GetSizeString(int,char *);
};

class CJournalCatWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CJournalCatWnd::CJournalCatWnd(class CXWnd *);
//EQLIB_OBJECT void CJournalCatWnd::Activate(void);
//EQLIB_OBJECT void CJournalCatWnd::Clean(void);
//EQLIB_OBJECT void CJournalCatWnd::UpdateAll(bool);
//EQLIB_OBJECT void CJournalCatWnd::UpdateButtons(void);
// virtual
//EQLIB_OBJECT CJournalCatWnd::~CJournalCatWnd(void);
//EQLIB_OBJECT int CJournalCatWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CJournalCatWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CJournalCatWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CJournalCatWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CJournalCatWnd::Deactivate(void);
// protected
//EQLIB_OBJECT void CJournalCatWnd::BuildList(void);
//EQLIB_OBJECT void CJournalCatWnd::LoadINI(void);
//EQLIB_OBJECT void CJournalCatWnd::SelectCategory(int);
//EQLIB_OBJECT void CJournalCatWnd::SortList(int,bool);
//EQLIB_OBJECT void CJournalCatWnd::StoreINI(void);
//EQLIB_OBJECT void CJournalCatWnd::UpdateListWnd(bool);
// private
//EQLIB_OBJECT void CJournalCatWnd::Init(void);
};

class CJournalNPCWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CJournalNPCWnd::CJournalNPCWnd(class CXWnd *);
//EQLIB_OBJECT void CJournalNPCWnd::Activate(void);
//EQLIB_OBJECT void CJournalNPCWnd::EnterIntoJournal(char *,float,float,float,char *);
//EQLIB_OBJECT void CJournalNPCWnd::LoadJournal(int);
//EQLIB_OBJECT void CJournalNPCWnd::SaveJournal(void);
//EQLIB_OBJECT void CJournalNPCWnd::UpdateAll(bool);
//EQLIB_OBJECT void CJournalNPCWnd::UpdateCategories(void);
// virtual
//EQLIB_OBJECT CJournalNPCWnd::~CJournalNPCWnd(void);
//EQLIB_OBJECT int CJournalNPCWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CJournalNPCWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CJournalNPCWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CJournalNPCWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CJournalNPCWnd::Deactivate(void);
// protected
//EQLIB_OBJECT void CJournalNPCWnd::BuildList(void);
//EQLIB_OBJECT void CJournalNPCWnd::DoBackups(class CXStr);
//EQLIB_OBJECT void CJournalNPCWnd::GetLogState(void);
//EQLIB_OBJECT void CJournalNPCWnd::SelectNPCIndex(int);
//EQLIB_OBJECT void CJournalNPCWnd::SortList(int,bool);
//EQLIB_OBJECT void CJournalNPCWnd::StoreLogState(void);
//EQLIB_OBJECT void CJournalNPCWnd::UpdateButtons(void);
//EQLIB_OBJECT void CJournalNPCWnd::UpdateListWnd(bool);
// private
//EQLIB_OBJECT void CJournalNPCWnd::Init(void);
};

class CJournalTextWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CJournalTextWnd::CJournalTextWnd(class CXWnd *);
//EQLIB_OBJECT void CJournalTextWnd::Activate(void);
//EQLIB_OBJECT void CJournalTextWnd::Clear(void);
//EQLIB_OBJECT void CJournalTextWnd::DisplayNPC(class JournalNPC *);
//EQLIB_OBJECT void CJournalTextWnd::SetSearch(class CXStr);
//EQLIB_OBJECT void CJournalTextWnd::UpdateAll(bool);
//EQLIB_OBJECT void CJournalTextWnd::UpdateCategories(void);
// virtual
//EQLIB_OBJECT CJournalTextWnd::~CJournalTextWnd(void);
//EQLIB_OBJECT int CJournalTextWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CJournalTextWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CJournalTextWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CJournalTextWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CJournalTextWnd::Deactivate(void);
// protected
//EQLIB_OBJECT void CJournalTextWnd::BuildList(void);
//EQLIB_OBJECT void CJournalTextWnd::SelectEntryIndex(int);
//EQLIB_OBJECT void CJournalTextWnd::SortList(int,bool);
//EQLIB_OBJECT void CJournalTextWnd::UpdateButtons(void);
//EQLIB_OBJECT void CJournalTextWnd::UpdateListWnd(bool);
};

class CKeyCXStrValueInt32
{
public:
//EQLIB_OBJECT CKeyCXStrValueInt32::~CKeyCXStrValueInt32(void);
//EQLIB_OBJECT CKeyCXStrValueInt32::CKeyCXStrValueInt32(void);
////EQLIB_OBJECT void * CKeyCXStrValueInt32::`vector deleting destructor'(unsigned int);
};

class CLabel
{
public:
//EQLIB_OBJECT CLabel::CLabel(class CXWnd *,unsigned __int32,class CXRect,int);
//EQLIB_OBJECT void CLabel::SetAlignCenter(bool);
//EQLIB_OBJECT void CLabel::SetAlignRight(bool);
//EQLIB_OBJECT void CLabel::SetNoWrap(bool);
// virtual
//EQLIB_OBJECT CLabel::~CLabel(void);
//EQLIB_OBJECT int CLabel::Draw(void)const;
////EQLIB_OBJECT void * CLabel::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CLabel::`vector deleting destructor'(unsigned int);
};

class CLabelTemplate
{
public:
//EQLIB_OBJECT CLabelTemplate::CLabelTemplate(class CParamLabel *);
// virtual
//EQLIB_OBJECT CLabelTemplate::~CLabelTemplate(void);
////EQLIB_OBJECT void * CLabelTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CLabelTemplate::`vector deleting destructor'(unsigned int);
};

class CListboxColumnTemplate
{
public:
//EQLIB_OBJECT CListboxColumnTemplate::~CListboxColumnTemplate(void);
//EQLIB_OBJECT CListboxColumnTemplate::CListboxColumnTemplate(class CParamListboxColumn *);
////EQLIB_OBJECT void CListboxColumnTemplate::`default constructor closure'(void);
};

class CListboxTemplate
{
public:
//EQLIB_OBJECT CListboxTemplate::CListboxTemplate(class CParamListbox *);
// virtual
//EQLIB_OBJECT CListboxTemplate::~CListboxTemplate(void);
////EQLIB_OBJECT void * CListboxTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CListboxTemplate::`vector deleting destructor'(unsigned int);
};

class CListWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CListWnd::CListWnd(class CXWnd *,unsigned __int32,class CXRect);
//EQLIB_OBJECT bool CListWnd::IsLineEnabled(int)const;
//EQLIB_OBJECT class CTextureAnimation const * CListWnd::GetColumnAnimation(int)const;
//EQLIB_OBJECT class CTextureAnimation const * CListWnd::GetColumnAnimationMouseOver(int)const;
//EQLIB_OBJECT class CTextureAnimation const * CListWnd::GetColumnAnimationSelected(int)const;
//EQLIB_OBJECT class CTextureAnimation const * CListWnd::GetItemIcon(int,int)const;
//EQLIB_OBJECT class CXRect CListWnd::GetHeaderRect(int)const;
//EQLIB_OBJECT class CXRect CListWnd::GetItemRect(int,int)const;
//EQLIB_OBJECT class CXRect CListWnd::GetSeparatorRect(int)const;
//EQLIB_OBJECT class CXStr CListWnd::GetColumnLabel(int)const;
//EQLIB_OBJECT class CXStr CListWnd::GetItemText(int,int)const;
//EQLIB_OBJECT int CListWnd::AddColumn(class CXStr,class CTextureAnimation *,int,unsigned __int32,unsigned __int32,class CTextureAnimation *,class CTextureAnimation *);
//EQLIB_OBJECT int CListWnd::AddColumn(class CXStr,int,unsigned __int32,unsigned __int32);
//EQLIB_OBJECT int CListWnd::AddLine(class SListWndLine const *);
//EQLIB_OBJECT int CListWnd::AddString(class CXStr *,unsigned long,unsigned __int32,class CTextureAnimation const *);
//EQLIB_OBJECT int CListWnd::AddString(char *,unsigned long,unsigned __int32,class CTextureAnimation const *);
//EQLIB_OBJECT int CListWnd::GetColumnJustification(int)const;
//EQLIB_OBJECT int CListWnd::GetColumnMinWidth(int)const;
//EQLIB_OBJECT int CListWnd::GetColumnWidth(int)const;
//EQLIB_OBJECT int CListWnd::GetCurCol(void)const;
//EQLIB_OBJECT int CListWnd::GetCurSel(void)const;
//EQLIB_OBJECT int CListWnd::GetItemAtPoint(class CXPoint)const;
//EQLIB_OBJECT int CListWnd::GetItemHeight(int)const;
//EQLIB_OBJECT unsigned __int32 CListWnd::GetColumnFlags(int)const;
//EQLIB_OBJECT unsigned __int32 CListWnd::GetItemData(int)const;
//EQLIB_OBJECT unsigned long CListWnd::GetItemColor(int,int)const;
//EQLIB_OBJECT void CListWnd::CalculateFirstVisibleLine(void);
//EQLIB_OBJECT void CListWnd::CalculateLineHeights(void);
//EQLIB_OBJECT void CListWnd::CalculateVSBRange(void);
//EQLIB_OBJECT void CListWnd::ClearAllSel(void);
//EQLIB_OBJECT void CListWnd::ClearSel(int);
//EQLIB_OBJECT void CListWnd::CloseAndUpdateEditWindow(void);
//EQLIB_OBJECT void CListWnd::EnableLine(int,bool);
//EQLIB_OBJECT void CListWnd::EnsureVisible(int);
//EQLIB_OBJECT void CListWnd::ExtendSel(int);
//EQLIB_OBJECT void CListWnd::GetItemAtPoint(class CXPoint,int *,int *)const;
//EQLIB_OBJECT void CListWnd::RemoveLine(int);
//EQLIB_OBJECT void CListWnd::RemoveString(int);
//EQLIB_OBJECT void CListWnd::SetColors(unsigned long,unsigned long,unsigned long);
//EQLIB_OBJECT void CListWnd::SetColumnJustification(int,int);
//EQLIB_OBJECT void CListWnd::SetColumnLabel(int,class CXStr);
//EQLIB_OBJECT void CListWnd::SetColumnWidth(int,int);
//EQLIB_OBJECT void CListWnd::SetCurSel(int);
//EQLIB_OBJECT void CListWnd::SetItemColor(int,int,unsigned long);
//EQLIB_OBJECT void CListWnd::SetItemData(int,unsigned __int32);
//EQLIB_OBJECT void CListWnd::SetItemText(int,int,class CXStr);
//EQLIB_OBJECT void CListWnd::ShiftColumnSeparator(int,int);
//EQLIB_OBJECT void CListWnd::ToggleSel(int);
// virtual
//EQLIB_OBJECT CListWnd::~CListWnd(void);
//EQLIB_OBJECT class CTextureAnimation * CListWnd::GetCursorToDisplay(void)const;
//EQLIB_OBJECT int CListWnd::Compare(class SListWndLine const &,class SListWndLine const &)const;
//EQLIB_OBJECT int CListWnd::Draw(void)const;
//EQLIB_OBJECT int CListWnd::DrawBackground(void)const;
//EQLIB_OBJECT int CListWnd::DrawColumnSeparators(void)const;
//EQLIB_OBJECT int CListWnd::DrawHeader(void)const;
//EQLIB_OBJECT int CListWnd::DrawItem(int,int,int)const;
//EQLIB_OBJECT int CListWnd::DrawLine(int)const;
//EQLIB_OBJECT int CListWnd::DrawSeparator(int)const;
//EQLIB_OBJECT int CListWnd::HandleLButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CListWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CListWnd::HandleLButtonUpAfterHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CListWnd::HandleMouseMove(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CListWnd::HandleRButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CListWnd::OnHeaderClick(class CXPoint);
//EQLIB_OBJECT int CListWnd::OnMove(class CXRect);
//EQLIB_OBJECT int CListWnd::OnResize(int,int);
//EQLIB_OBJECT int CListWnd::OnVScroll(EScrollCode,int);
//EQLIB_OBJECT int CListWnd::SetVScrollPos(int);
//EQLIB_OBJECT int CListWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CListWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CListWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CListWnd::DeleteAll(void);
//EQLIB_OBJECT void CListWnd::Sort(void);
};

class CLoadskinWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CLoadskinWnd::CLoadskinWnd(class CXWnd *);
//EQLIB_OBJECT void CLoadskinWnd::Activate(void);
//EQLIB_OBJECT void CLoadskinWnd::UpdateSkinList(void);
// virtual
//EQLIB_OBJECT CLoadskinWnd::~CLoadskinWnd(void);
//EQLIB_OBJECT int CLoadskinWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CLoadskinWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CLoadskinWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CLoadskinWnd::Deactivate(void);
};

class CLootWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CLootWnd::CLootWnd(class CXWnd *);
//EQLIB_OBJECT void CLootWnd::Activate(unsigned char,long,long,long,long);
//EQLIB_OBJECT void CLootWnd::AddContainerToLootArray(class EQ_Item *);
//EQLIB_OBJECT void CLootWnd::AddEquipmentToLootArray(class EQ_Item *);
//EQLIB_OBJECT void CLootWnd::AddNoteToLootArray(class EQ_Item *);
//EQLIB_OBJECT void CLootWnd::Deactivate(bool);
//EQLIB_OBJECT void CLootWnd::RequestLootSlot(int,bool);
//EQLIB_OBJECT void CLootWnd::SlotLooted(int);
// virtual
//EQLIB_OBJECT CLootWnd::~CLootWnd(void);
//EQLIB_OBJECT int CLootWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CLootWnd::PostDraw(void)const;
//EQLIB_OBJECT int CLootWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CLootWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CLootWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CLootWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CLootWnd::FinalizeLoot(void);
//EQLIB_OBJECT void CLootWnd::Init(void);
};

class CMapToolbarWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CMapToolbarWnd::CMapToolbarWnd(class CXWnd *);
//EQLIB_OBJECT void CMapToolbarWnd::Activate(void);
//EQLIB_OBJECT void CMapToolbarWnd::SetAutoMapButton(bool);
// virtual
//EQLIB_OBJECT CMapToolbarWnd::~CMapToolbarWnd(void);
//EQLIB_OBJECT int CMapToolbarWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CMapToolbarWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CMapToolbarWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CMapToolbarWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CMapToolbarWnd::Deactivate(void);
};

class CMapViewWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CMapViewWnd::CMapViewWnd(class CXWnd *);
//EQLIB_OBJECT bool CMapViewWnd::IsMappingEnabled(void);
//EQLIB_OBJECT void CMapViewWnd::Activate(void);
//EQLIB_OBJECT void CMapViewWnd::ActivateAutoMapping(void);
//EQLIB_OBJECT void CMapViewWnd::DeactivateAutoMapping(void);
////EQLIB_OBJECT void CMapViewWnd::SetCurrentZone(EQZoneIndex,struct T3D_XYZ *,struct T3D_XYZ *);
// virtual
//EQLIB_OBJECT CMapViewWnd::~CMapViewWnd(void);
//EQLIB_OBJECT int CMapViewWnd::HandleLButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CMapViewWnd::HandleLButtonHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CMapViewWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CMapViewWnd::HandleLButtonUpAfterHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CMapViewWnd::HandleWheelMove(class CXPoint,int,unsigned __int32);
//EQLIB_OBJECT int CMapViewWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CMapViewWnd::PostDraw(void)const;
//EQLIB_OBJECT int CMapViewWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CMapViewWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CMapViewWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CMapViewWnd::Deactivate(void);
//EQLIB_OBJECT void CMapViewWnd::LoadIniInfo(void);
//EQLIB_OBJECT void CMapViewWnd::StoreIniInfo(void);
// private
//EQLIB_OBJECT void CMapViewWnd::Init(void);
};

class CMemoryStream
{
public:
//EQLIB_OBJECT class CXStr CMemoryStream::GetString(void);
//EQLIB_OBJECT static int __cdecl CMemoryStream::GetStringSize(class CXStr &);
//EQLIB_OBJECT void CMemoryStream::GetString(class CXStr &);
//EQLIB_OBJECT void CMemoryStream::PutString(class CXStr &);
};

class CMerchantWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CMerchantWnd::CMerchantWnd(class CXWnd *);
//EQLIB_OBJECT void CMerchantWnd::Activate(class EQPlayer *,float);
//EQLIB_OBJECT void CMerchantWnd::AddContainerToMercArray(class EQ_Container *);
//EQLIB_OBJECT void CMerchantWnd::AddEquipmentToMercArray(class EQ_Equipment *);
//EQLIB_OBJECT void CMerchantWnd::AddNoteToMercArray(class EQ_Note *);
//EQLIB_OBJECT void CMerchantWnd::ClearMerchantSlot(int);
//EQLIB_OBJECT void CMerchantWnd::FinishBuyingItem(struct _sell_msg *);
//EQLIB_OBJECT void CMerchantWnd::FinishSellingItem(struct _sell_msg *);
//EQLIB_OBJECT void CMerchantWnd::SelectBuySellSlot(int,class CTextureAnimation *);
// virtual
//EQLIB_OBJECT CMerchantWnd::~CMerchantWnd(void);
//EQLIB_OBJECT int CMerchantWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CMerchantWnd::PostDraw(void)const;
//EQLIB_OBJECT int CMerchantWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CMerchantWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CMerchantWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CMerchantWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CMerchantWnd::DisplayBuyOrSellPrice(bool,class EQ_Item *);
//EQLIB_OBJECT void CMerchantWnd::HandleBuy(int);
//EQLIB_OBJECT void CMerchantWnd::HandleSell(int);
//EQLIB_OBJECT void CMerchantWnd::Init(void);
//EQLIB_OBJECT void CMerchantWnd::RequestBuyItem(int);
//EQLIB_OBJECT void CMerchantWnd::RequestSellItem(int);
//EQLIB_OBJECT void CMerchantWnd::UpdateBuySellButtons(void);
};

class CMusicPlayerWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CMusicPlayerWnd::CMusicPlayerWnd(class CXWnd *);
//EQLIB_OBJECT void CMusicPlayerWnd::Activate(void);
//EQLIB_OBJECT void CMusicPlayerWnd::AutoStart(void);
// virtual
//EQLIB_OBJECT CMusicPlayerWnd::~CMusicPlayerWnd(void);
//EQLIB_OBJECT int CMusicPlayerWnd::Draw(void)const;
//EQLIB_OBJECT int CMusicPlayerWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CMusicPlayerWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CMusicPlayerWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CMusicPlayerWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CMusicPlayerWnd::Deactivate(void);
//EQLIB_OBJECT void CMusicPlayerWnd::LoadIniInfo(void);
//EQLIB_OBJECT void CMusicPlayerWnd::StoreIniInfo(void);
// protected
//EQLIB_OBJECT void CMusicPlayerWnd::Update(void);
//EQLIB_OBJECT void CMusicPlayerWnd::UpdateButtons(void);
// private
//EQLIB_OBJECT void CMusicPlayerWnd::Init(void);
};

class CMutexLock
{
public:
//EQLIB_OBJECT CMutexLock::~CMutexLock(void);
};

class CMutexLockCounted
{
public:
//EQLIB_OBJECT CMutexLockCounted::~CMutexLockCounted(void);
};

class CMutexSync
{
public:
// private
//EQLIB_OBJECT static int CMutexSync::isValid;
};

class CMutexSyncCounted
{
public:
//EQLIB_OBJECT CMutexSyncCounted::~CMutexSyncCounted(void);
//EQLIB_OBJECT CMutexSyncCounted::CMutexSyncCounted(void);
};

class CNoteWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CNoteWnd::CNoteWnd(class CXWnd *);
//EQLIB_OBJECT bool CNoteWnd::CheckNote(class EQ_Note *);
//EQLIB_OBJECT void CNoteWnd::Activate(void);
//EQLIB_OBJECT void CNoteWnd::SetNote(char *);
// virtual
//EQLIB_OBJECT CNoteWnd::~CNoteWnd(void);
//EQLIB_OBJECT int CNoteWnd::HandleKeyboardMsg(unsigned __int32,unsigned __int32,bool);
//EQLIB_OBJECT int CNoteWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CNoteWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CNoteWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CNoteWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CNoteWnd::Init(void);
};

class ConversationJournal
{
public:
//EQLIB_OBJECT ConversationJournal::~ConversationJournal(void);
//EQLIB_OBJECT ConversationJournal::ConversationJournal(void);
//EQLIB_OBJECT class JournalNPC * ConversationJournal::FindNPCByNameZone(char *,int);
//EQLIB_OBJECT class JournalNPC * ConversationJournal::GetNPC(int);
//EQLIB_OBJECT int ConversationJournal::AddEntry(char *,int,long,float,float,float,char *,int);
//EQLIB_OBJECT int ConversationJournal::DeleteNPC(char *,int);
//EQLIB_OBJECT int ConversationJournal::Load(char *);
//EQLIB_OBJECT int ConversationJournal::Save(char *);
//EQLIB_OBJECT struct JournalCategory * * ConversationJournal::GetCategoryList(void);
//EQLIB_OBJECT struct JournalCategory * ConversationJournal::AddCategory(char *,char *,int);
//EQLIB_OBJECT struct JournalCategory * ConversationJournal::AddCategory(int);
//EQLIB_OBJECT struct JournalCategory * ConversationJournal::GetCategory(char *);
//EQLIB_OBJECT struct JournalCategory * ConversationJournal::GetCategory(int);
//EQLIB_OBJECT void ConversationJournal::Clean(void);
//EQLIB_OBJECT void ConversationJournal::DeleteCategory(int);
// protected
//EQLIB_OBJECT int ConversationJournal::FindFreeID(void);
// private
//EQLIB_OBJECT class JournalNPC * ConversationJournal::AddNPC(char *,int);
//EQLIB_OBJECT class JournalNPC * ConversationJournal::ReadNPC(struct _iobuf *);
//EQLIB_OBJECT void ConversationJournal::AllocateCatArray(void);
//EQLIB_OBJECT void ConversationJournal::AllocateNPCArray(void);
//EQLIB_OBJECT void ConversationJournal::ReadCategory(struct _iobuf *);
};

class COptionsWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT COptionsWnd::COptionsWnd(class CXWnd *);
////EQLIB_OBJECT COptionsWnd::KeyboardAssignmentData::~KeyboardAssignmentData(void);
////EQLIB_OBJECT COptionsWnd::KeyboardAssignmentData::KeyboardAssignmentData(void);
//EQLIB_OBJECT void COptionsWnd::Activate(void);
//EQLIB_OBJECT void COptionsWnd::RefreshCurrentKeyboardAssignmentList(void);
//EQLIB_OBJECT void COptionsWnd::ResetKeysToDefault(void);
//EQLIB_OBJECT void COptionsWnd::RestoreDefaultColors(void);
// virtual
//EQLIB_OBJECT COptionsWnd::~COptionsWnd(void);
//EQLIB_OBJECT int COptionsWnd::HandleKeyboardMsg(unsigned __int32,unsigned __int32,bool);
//EQLIB_OBJECT int COptionsWnd::OnProcessFrame(void);
//EQLIB_OBJECT int COptionsWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * COptionsWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * COptionsWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void COptionsWnd::Deactivate(void);
// private
//EQLIB_OBJECT int COptionsWnd::ChatPageOnProcessFrame(void);
//EQLIB_OBJECT int COptionsWnd::ChatPageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int COptionsWnd::ColorPageOnProcessFrame(void);
//EQLIB_OBJECT int COptionsWnd::ColorPageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int COptionsWnd::DisplayPageOnProcessFrame(void);
//EQLIB_OBJECT int COptionsWnd::DisplayPageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int COptionsWnd::GeneralPageOnProcessFrame(void);
//EQLIB_OBJECT int COptionsWnd::GeneralPageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int COptionsWnd::KeyboardPageDeactivate(void);
//EQLIB_OBJECT int COptionsWnd::KeyboardPageHandleKeyboardMsg(unsigned __int32,unsigned __int32,bool);
//EQLIB_OBJECT int COptionsWnd::KeyboardPageOnProcessFrame(void);
//EQLIB_OBJECT int COptionsWnd::KeyboardPageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int COptionsWnd::MousePageOnProcessFrame(void);
//EQLIB_OBJECT int COptionsWnd::MousePageWndNotification(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int COptionsWnd::RedirectDeactivateTo(class CPageWnd *);
//EQLIB_OBJECT int COptionsWnd::RedirectHandleKeyboardMsgTo(class CPageWnd *,unsigned __int32,unsigned __int32,bool);
//EQLIB_OBJECT int COptionsWnd::RedirectOnProcessFrameTo(class CPageWnd *);
//EQLIB_OBJECT int COptionsWnd::RedirectWndNotificationTo(class CPageWnd *,class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT void COptionsWnd::AddKeyboardAssignment(int,int,int);
//EQLIB_OBJECT void COptionsWnd::InitKeyboardAssignments(void);
//EQLIB_OBJECT void COptionsWnd::InitKeyboardPage(void);
//EQLIB_OBJECT void COptionsWnd::KeyboardPageCancelKeypressAssignment(void);
//EQLIB_OBJECT void COptionsWnd::SaveColors(int,int,int,int);
//EQLIB_OBJECT void COptionsWnd::SetBagOptions(int,int);
//EQLIB_OBJECT void COptionsWnd::SyncChatPage(void);
//EQLIB_OBJECT void COptionsWnd::SyncColorPage(void);
//EQLIB_OBJECT void COptionsWnd::SyncDisplayPage(void);
//EQLIB_OBJECT void COptionsWnd::SyncGeneralPage(void);
//EQLIB_OBJECT void COptionsWnd::SyncMousePage(void);
};

class CPageTemplate
{
public:
//EQLIB_OBJECT CPageTemplate::CPageTemplate(class CParamPage *);
// virtual
//EQLIB_OBJECT CPageTemplate::~CPageTemplate(void);
////EQLIB_OBJECT void * CPageTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CPageTemplate::`vector deleting destructor'(unsigned int);
};

class CPageWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CPageWnd::CPageWnd(class CXWnd *,unsigned __int32,class CXRect,class CXStr,class CPageTemplate *);
//EQLIB_OBJECT class CXStr CPageWnd::GetTabText(void)const;
// virtual
//EQLIB_OBJECT CPageWnd::~CPageWnd(void);
////EQLIB_OBJECT void * CPageWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CPageWnd::`vector deleting destructor'(unsigned int);
};

class CParam
{
public:
//EQLIB_OBJECT class CParam & CParam::operator=(class CParam const &);
// virtual
//EQLIB_OBJECT CParam::~CParam(void);
////EQLIB_OBJECT void * CParam::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParam::`vector deleting destructor'(unsigned int);
};

class CParamButton
{
public:
//EQLIB_OBJECT CParamButton::CParamButton(void);
//EQLIB_OBJECT class CParamButton & CParamButton::operator=(class CParamButton const &);
// virtual
//EQLIB_OBJECT CParamButton::~CParamButton(void);
//EQLIB_OBJECT bool CParamButton::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamButton::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamButton::GetStreamSize(void);
////EQLIB_OBJECT void * CParamButton::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamButton::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamButton::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamButton::WriteToStream(class CMemoryStream &);
};

class CParamButtonDrawTemplate
{
public:
//EQLIB_OBJECT CParamButtonDrawTemplate::CParamButtonDrawTemplate(void);
//EQLIB_OBJECT class CParamButtonDrawTemplate & CParamButtonDrawTemplate::operator=(class CParamButtonDrawTemplate const &);
// virtual
//EQLIB_OBJECT CParamButtonDrawTemplate::~CParamButtonDrawTemplate(void);
//EQLIB_OBJECT bool CParamButtonDrawTemplate::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamButtonDrawTemplate::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamButtonDrawTemplate::GetStreamSize(void);
////EQLIB_OBJECT void * CParamButtonDrawTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamButtonDrawTemplate::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamButtonDrawTemplate::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamButtonDrawTemplate::WriteToStream(class CMemoryStream &);
};

class CParamClass
{
public:
//EQLIB_OBJECT CParamClass::CParamClass(void);
//EQLIB_OBJECT class CParamClass & CParamClass::operator=(class CParamClass const &);
// virtual
//EQLIB_OBJECT CParamClass::~CParamClass(void);
//EQLIB_OBJECT bool CParamClass::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamClass::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamClass::GetStreamSize(void);
////EQLIB_OBJECT void * CParamClass::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamClass::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamClass::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamClass::WriteToStream(class CMemoryStream &);
};

class CParamCombobox
{
public:
//EQLIB_OBJECT CParamCombobox::CParamCombobox(void);
//EQLIB_OBJECT class CParamCombobox & CParamCombobox::operator=(class CParamCombobox const &);
// virtual
//EQLIB_OBJECT CParamCombobox::~CParamCombobox(void);
//EQLIB_OBJECT bool CParamCombobox::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamCombobox::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamCombobox::GetStreamSize(void);
////EQLIB_OBJECT void * CParamCombobox::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamCombobox::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamCombobox::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamCombobox::WriteToStream(class CMemoryStream &);
};

class CParamControl
{
public:
//EQLIB_OBJECT CParamControl::CParamControl(void);
//EQLIB_OBJECT class CParamControl & CParamControl::operator=(class CParamControl const &);
// virtual
//EQLIB_OBJECT CParamControl::~CParamControl(void);
//EQLIB_OBJECT bool CParamControl::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamControl::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamControl::GetStreamSize(void);
////EQLIB_OBJECT void * CParamControl::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamControl::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamControl::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamControl::WriteToStream(class CMemoryStream &);
};

class CParamEditbox
{
public:
//EQLIB_OBJECT CParamEditbox::CParamEditbox(void);
//EQLIB_OBJECT class CParamEditbox & CParamEditbox::operator=(class CParamEditbox const &);
// virtual
//EQLIB_OBJECT CParamEditbox::~CParamEditbox(void);
//EQLIB_OBJECT bool CParamEditbox::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamEditbox::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamEditbox::GetStreamSize(void);
////EQLIB_OBJECT void * CParamEditbox::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamEditbox::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamEditbox::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamEditbox::WriteToStream(class CMemoryStream &);
};

class CParamFrame
{
public:
//EQLIB_OBJECT CParamFrame::CParamFrame(void);
// virtual
//EQLIB_OBJECT CParamFrame::~CParamFrame(void);
//EQLIB_OBJECT bool CParamFrame::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamFrame::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamFrame::GetStreamSize(void);
////EQLIB_OBJECT void * CParamFrame::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamFrame::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamFrame::WriteToStream(class CMemoryStream &);
};

class CParamFrameTemplate
{
public:
//EQLIB_OBJECT CParamFrameTemplate::CParamFrameTemplate(void);
//EQLIB_OBJECT class CParamFrameTemplate & CParamFrameTemplate::operator=(class CParamFrameTemplate const &);
// virtual
//EQLIB_OBJECT CParamFrameTemplate::~CParamFrameTemplate(void);
//EQLIB_OBJECT bool CParamFrameTemplate::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamFrameTemplate::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamFrameTemplate::GetStreamSize(void);
////EQLIB_OBJECT void * CParamFrameTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamFrameTemplate::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamFrameTemplate::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamFrameTemplate::WriteToStream(class CMemoryStream &);
};

class CParamGauge
{
public:
//EQLIB_OBJECT CParamGauge::CParamGauge(void);
//EQLIB_OBJECT class CParamGauge & CParamGauge::operator=(class CParamGauge const &);
// virtual
//EQLIB_OBJECT CParamGauge::~CParamGauge(void);
//EQLIB_OBJECT bool CParamGauge::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamGauge::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamGauge::GetStreamSize(void);
////EQLIB_OBJECT void * CParamGauge::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamGauge::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamGauge::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamGauge::WriteToStream(class CMemoryStream &);
};

class CParamGaugeDrawTemplate
{
public:
//EQLIB_OBJECT CParamGaugeDrawTemplate::CParamGaugeDrawTemplate(void);
//EQLIB_OBJECT class CParamGaugeDrawTemplate & CParamGaugeDrawTemplate::operator=(class CParamGaugeDrawTemplate const &);
// virtual
//EQLIB_OBJECT CParamGaugeDrawTemplate::~CParamGaugeDrawTemplate(void);
//EQLIB_OBJECT bool CParamGaugeDrawTemplate::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamGaugeDrawTemplate::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamGaugeDrawTemplate::GetStreamSize(void);
////EQLIB_OBJECT void * CParamGaugeDrawTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamGaugeDrawTemplate::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamGaugeDrawTemplate::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamGaugeDrawTemplate::WriteToStream(class CMemoryStream &);
};

class CParamInvSlot
{
public:
//EQLIB_OBJECT CParamInvSlot::CParamInvSlot(void);
//EQLIB_OBJECT class CParamInvSlot & CParamInvSlot::operator=(class CParamInvSlot const &);
// virtual
//EQLIB_OBJECT CParamInvSlot::~CParamInvSlot(void);
//EQLIB_OBJECT bool CParamInvSlot::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamInvSlot::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamInvSlot::GetStreamSize(void);
////EQLIB_OBJECT void * CParamInvSlot::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamInvSlot::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamInvSlot::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamInvSlot::WriteToStream(class CMemoryStream &);
};

class CParamLabel
{
public:
//EQLIB_OBJECT CParamLabel::CParamLabel(void);
//EQLIB_OBJECT class CParamLabel & CParamLabel::operator=(class CParamLabel const &);
// virtual
//EQLIB_OBJECT CParamLabel::~CParamLabel(void);
//EQLIB_OBJECT bool CParamLabel::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamLabel::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamLabel::GetStreamSize(void);
////EQLIB_OBJECT void * CParamLabel::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamLabel::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamLabel::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamLabel::WriteToStream(class CMemoryStream &);
};

class CParamListbox
{
public:
//EQLIB_OBJECT CParamListbox::CParamListbox(void);
//EQLIB_OBJECT class CParamListbox & CParamListbox::operator=(class CParamListbox const &);
// virtual
//EQLIB_OBJECT CParamListbox::~CParamListbox(void);
//EQLIB_OBJECT bool CParamListbox::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamListbox::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamListbox::GetStreamSize(void);
////EQLIB_OBJECT void * CParamListbox::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamListbox::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamListbox::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamListbox::WriteToStream(class CMemoryStream &);
};

class CParamListboxColumn
{
public:
//EQLIB_OBJECT CParamListboxColumn::CParamListboxColumn(void);
//EQLIB_OBJECT class CParamListboxColumn & CParamListboxColumn::operator=(class CParamListboxColumn const &);
// virtual
//EQLIB_OBJECT CParamListboxColumn::~CParamListboxColumn(void);
//EQLIB_OBJECT bool CParamListboxColumn::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamListboxColumn::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamListboxColumn::GetStreamSize(void);
////EQLIB_OBJECT void * CParamListboxColumn::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamListboxColumn::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamListboxColumn::WriteToStream(class CMemoryStream &);
};

class CParamPage
{
public:
//EQLIB_OBJECT CParamPage::CParamPage(void);
//EQLIB_OBJECT class CParamPage & CParamPage::operator=(class CParamPage const &);
// virtual
//EQLIB_OBJECT CParamPage::~CParamPage(void);
//EQLIB_OBJECT bool CParamPage::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamPage::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamPage::GetStreamSize(void);
////EQLIB_OBJECT void * CParamPage::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamPage::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamPage::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamPage::WriteToStream(class CMemoryStream &);
};

class CParamPoint
{
public:
//EQLIB_OBJECT CParamPoint::CParamPoint(void);
//EQLIB_OBJECT class CParamPoint & CParamPoint::operator=(class CParamPoint const &);
// virtual
//EQLIB_OBJECT CParamPoint::~CParamPoint(void);
//EQLIB_OBJECT bool CParamPoint::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamPoint::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamPoint::GetStreamSize(void);
////EQLIB_OBJECT void * CParamPoint::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamPoint::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamPoint::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamPoint::WriteToStream(class CMemoryStream &);
};

class CParamRGB
{
public:
//EQLIB_OBJECT CParamRGB::CParamRGB(void);
//EQLIB_OBJECT class CParamRGB & CParamRGB::operator=(class CParamRGB const &);
// virtual
//EQLIB_OBJECT CParamRGB::~CParamRGB(void);
//EQLIB_OBJECT bool CParamRGB::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamRGB::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamRGB::GetStreamSize(void);
////EQLIB_OBJECT void * CParamRGB::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamRGB::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamRGB::WriteToStream(class CMemoryStream &);
};

class CParamScreen
{
public:
//EQLIB_OBJECT CParamScreen::CParamScreen(void);
//EQLIB_OBJECT class CParamScreen & CParamScreen::operator=(class CParamScreen const &);
// virtual
//EQLIB_OBJECT CParamScreen::~CParamScreen(void);
//EQLIB_OBJECT bool CParamScreen::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamScreen::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamScreen::GetStreamSize(void);
////EQLIB_OBJECT void * CParamScreen::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamScreen::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamScreen::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamScreen::WriteToStream(class CMemoryStream &);
};

class CParamScreenPiece
{
public:
//EQLIB_OBJECT CParamScreenPiece::CParamScreenPiece(void);
//EQLIB_OBJECT class CParamScreenPiece & CParamScreenPiece::operator=(class CParamScreenPiece const &);
// virtual
//EQLIB_OBJECT CParamScreenPiece::~CParamScreenPiece(void);
//EQLIB_OBJECT bool CParamScreenPiece::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamScreenPiece::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamScreenPiece::GetStreamSize(void);
////EQLIB_OBJECT void * CParamScreenPiece::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamScreenPiece::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamScreenPiece::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamScreenPiece::WriteToStream(class CMemoryStream &);
};

class CParamScrollbarDrawTemplate
{
public:
//EQLIB_OBJECT CParamScrollbarDrawTemplate::CParamScrollbarDrawTemplate(void);
//EQLIB_OBJECT class CParamScrollbarDrawTemplate & CParamScrollbarDrawTemplate::operator=(class CParamScrollbarDrawTemplate const &);
// virtual
//EQLIB_OBJECT CParamScrollbarDrawTemplate::~CParamScrollbarDrawTemplate(void);
//EQLIB_OBJECT bool CParamScrollbarDrawTemplate::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamScrollbarDrawTemplate::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamScrollbarDrawTemplate::GetStreamSize(void);
////EQLIB_OBJECT void * CParamScrollbarDrawTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamScrollbarDrawTemplate::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamScrollbarDrawTemplate::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamScrollbarDrawTemplate::WriteToStream(class CMemoryStream &);
};

class CParamSize
{
public:
//EQLIB_OBJECT CParamSize::CParamSize(void);
//EQLIB_OBJECT class CParamSize & CParamSize::operator=(class CParamSize const &);
// virtual
//EQLIB_OBJECT CParamSize::~CParamSize(void);
//EQLIB_OBJECT bool CParamSize::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamSize::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamSize::GetStreamSize(void);
////EQLIB_OBJECT void * CParamSize::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamSize::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamSize::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamSize::WriteToStream(class CMemoryStream &);
};

class CParamSlider
{
public:
//EQLIB_OBJECT CParamSlider::CParamSlider(void);
//EQLIB_OBJECT class CParamSlider & CParamSlider::operator=(class CParamSlider const &);
// virtual
//EQLIB_OBJECT CParamSlider::~CParamSlider(void);
//EQLIB_OBJECT bool CParamSlider::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamSlider::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamSlider::GetStreamSize(void);
////EQLIB_OBJECT void * CParamSlider::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamSlider::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamSlider::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamSlider::WriteToStream(class CMemoryStream &);
};

class CParamSliderDrawTemplate
{
public:
//EQLIB_OBJECT CParamSliderDrawTemplate::CParamSliderDrawTemplate(void);
//EQLIB_OBJECT class CParamSliderDrawTemplate & CParamSliderDrawTemplate::operator=(class CParamSliderDrawTemplate const &);
// virtual
//EQLIB_OBJECT CParamSliderDrawTemplate::~CParamSliderDrawTemplate(void);
//EQLIB_OBJECT bool CParamSliderDrawTemplate::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamSliderDrawTemplate::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamSliderDrawTemplate::GetStreamSize(void);
////EQLIB_OBJECT void * CParamSliderDrawTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamSliderDrawTemplate::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamSliderDrawTemplate::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamSliderDrawTemplate::WriteToStream(class CMemoryStream &);
};

class CParamSpellGem
{
public:
//EQLIB_OBJECT CParamSpellGem::CParamSpellGem(void);
//EQLIB_OBJECT class CParamSpellGem & CParamSpellGem::operator=(class CParamSpellGem const &);
// virtual
//EQLIB_OBJECT CParamSpellGem::~CParamSpellGem(void);
//EQLIB_OBJECT bool CParamSpellGem::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamSpellGem::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamSpellGem::GetStreamSize(void);
////EQLIB_OBJECT void * CParamSpellGem::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamSpellGem::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamSpellGem::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamSpellGem::WriteToStream(class CMemoryStream &);
};

class CParamSpellGemDrawTemplate
{
public:
//EQLIB_OBJECT CParamSpellGemDrawTemplate::CParamSpellGemDrawTemplate(void);
//EQLIB_OBJECT class CParamSpellGemDrawTemplate & CParamSpellGemDrawTemplate::operator=(class CParamSpellGemDrawTemplate const &);
// virtual
//EQLIB_OBJECT CParamSpellGemDrawTemplate::~CParamSpellGemDrawTemplate(void);
//EQLIB_OBJECT bool CParamSpellGemDrawTemplate::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamSpellGemDrawTemplate::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamSpellGemDrawTemplate::GetStreamSize(void);
////EQLIB_OBJECT void * CParamSpellGemDrawTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamSpellGemDrawTemplate::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamSpellGemDrawTemplate::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamSpellGemDrawTemplate::WriteToStream(class CMemoryStream &);
};

class CParamStaticAnimation
{
public:
//EQLIB_OBJECT CParamStaticAnimation::CParamStaticAnimation(void);
//EQLIB_OBJECT class CParamStaticAnimation & CParamStaticAnimation::operator=(class CParamStaticAnimation const &);
// virtual
//EQLIB_OBJECT CParamStaticAnimation::~CParamStaticAnimation(void);
//EQLIB_OBJECT bool CParamStaticAnimation::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamStaticAnimation::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamStaticAnimation::GetStreamSize(void);
////EQLIB_OBJECT void * CParamStaticAnimation::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamStaticAnimation::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamStaticAnimation::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamStaticAnimation::WriteToStream(class CMemoryStream &);
};

class CParamStaticFrame
{
public:
//EQLIB_OBJECT CParamStaticFrame::CParamStaticFrame(void);
//EQLIB_OBJECT class CParamStaticFrame & CParamStaticFrame::operator=(class CParamStaticFrame const &);
// virtual
//EQLIB_OBJECT CParamStaticFrame::~CParamStaticFrame(void);
//EQLIB_OBJECT bool CParamStaticFrame::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamStaticFrame::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamStaticFrame::GetStreamSize(void);
////EQLIB_OBJECT void * CParamStaticFrame::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamStaticFrame::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamStaticFrame::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamStaticFrame::WriteToStream(class CMemoryStream &);
};

class CParamStaticHeader
{
public:
//EQLIB_OBJECT CParamStaticHeader::CParamStaticHeader(void);
//EQLIB_OBJECT class CParamStaticHeader & CParamStaticHeader::operator=(class CParamStaticHeader const &);
// virtual
//EQLIB_OBJECT CParamStaticHeader::~CParamStaticHeader(void);
//EQLIB_OBJECT bool CParamStaticHeader::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamStaticHeader::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamStaticHeader::GetStreamSize(void);
////EQLIB_OBJECT void * CParamStaticHeader::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamStaticHeader::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamStaticHeader::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamStaticHeader::WriteToStream(class CMemoryStream &);
};

class CParamStaticScreenPiece
{
public:
//EQLIB_OBJECT CParamStaticScreenPiece::CParamStaticScreenPiece(void);
// virtual
//EQLIB_OBJECT CParamStaticScreenPiece::~CParamStaticScreenPiece(void);
//EQLIB_OBJECT bool CParamStaticScreenPiece::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamStaticScreenPiece::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamStaticScreenPiece::GetStreamSize(void);
////EQLIB_OBJECT void * CParamStaticScreenPiece::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamStaticScreenPiece::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamStaticScreenPiece::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamStaticScreenPiece::WriteToStream(class CMemoryStream &);
};

class CParamStaticText
{
public:
//EQLIB_OBJECT CParamStaticText::CParamStaticText(void);
//EQLIB_OBJECT class CParamStaticText & CParamStaticText::operator=(class CParamStaticText const &);
// virtual
//EQLIB_OBJECT CParamStaticText::~CParamStaticText(void);
//EQLIB_OBJECT bool CParamStaticText::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamStaticText::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamStaticText::GetStreamSize(void);
////EQLIB_OBJECT void * CParamStaticText::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamStaticText::`vector deleting destructor'(unsigned int);
#define SafeYLoc 0
//EQLIB_OBJECT void CParamStaticText::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamStaticText::WriteToStream(class CMemoryStream &);
};

class CParamSTMLbox
{
public:
//EQLIB_OBJECT CParamSTMLbox::CParamSTMLbox(void);
// virtual
//EQLIB_OBJECT CParamSTMLbox::~CParamSTMLbox(void);
//EQLIB_OBJECT bool CParamSTMLbox::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamSTMLbox::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamSTMLbox::GetStreamSize(void);
////EQLIB_OBJECT void * CParamSTMLbox::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamSTMLbox::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamSTMLbox::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamSTMLbox::WriteToStream(class CMemoryStream &);
};

class CParamSuiteDefaults
{
public:
//EQLIB_OBJECT CParamSuiteDefaults::CParamSuiteDefaults(void);
//EQLIB_OBJECT class CParamSuiteDefaults & CParamSuiteDefaults::operator=(class CParamSuiteDefaults const &);
// virtual
//EQLIB_OBJECT CParamSuiteDefaults::~CParamSuiteDefaults(void);
//EQLIB_OBJECT bool CParamSuiteDefaults::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamSuiteDefaults::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamSuiteDefaults::GetStreamSize(void);
////EQLIB_OBJECT void * CParamSuiteDefaults::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamSuiteDefaults::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamSuiteDefaults::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamSuiteDefaults::WriteToStream(class CMemoryStream &);
};

class CParamTabBox
{
public:
//EQLIB_OBJECT CParamTabBox::CParamTabBox(void);
//EQLIB_OBJECT class CParamTabBox & CParamTabBox::operator=(class CParamTabBox const &);
// virtual
//EQLIB_OBJECT CParamTabBox::~CParamTabBox(void);
//EQLIB_OBJECT bool CParamTabBox::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamTabBox::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamTabBox::GetStreamSize(void);
////EQLIB_OBJECT void * CParamTabBox::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamTabBox::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamTabBox::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamTabBox::WriteToStream(class CMemoryStream &);
};

class CParamTextureInfo
{
public:
//EQLIB_OBJECT CParamTextureInfo::CParamTextureInfo(void);
// virtual
//EQLIB_OBJECT CParamTextureInfo::~CParamTextureInfo(void);
//EQLIB_OBJECT bool CParamTextureInfo::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamTextureInfo::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamTextureInfo::GetStreamSize(void);
////EQLIB_OBJECT void * CParamTextureInfo::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamTextureInfo::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamTextureInfo::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamTextureInfo::WriteToStream(class CMemoryStream &);
};

class CParamUi2DAnimation
{
public:
//EQLIB_OBJECT CParamUi2DAnimation::CParamUi2DAnimation(void);
// virtual
//EQLIB_OBJECT CParamUi2DAnimation::~CParamUi2DAnimation(void);
//EQLIB_OBJECT bool CParamUi2DAnimation::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamUi2DAnimation::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamUi2DAnimation::GetStreamSize(void);
////EQLIB_OBJECT void * CParamUi2DAnimation::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamUi2DAnimation::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamUi2DAnimation::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamUi2DAnimation::WriteToStream(class CMemoryStream &);
};

class CParamWindowDrawTemplate
{
public:
//EQLIB_OBJECT CParamWindowDrawTemplate::CParamWindowDrawTemplate(void);
// virtual
//EQLIB_OBJECT CParamWindowDrawTemplate::~CParamWindowDrawTemplate(void);
//EQLIB_OBJECT bool CParamWindowDrawTemplate::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CParamWindowDrawTemplate::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CParamWindowDrawTemplate::GetStreamSize(void);
////EQLIB_OBJECT void * CParamWindowDrawTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CParamWindowDrawTemplate::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CParamWindowDrawTemplate::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CParamWindowDrawTemplate::WriteToStream(class CMemoryStream &);
};

class CParseTokensXML
{
public:
//EQLIB_OBJECT CParseTokensXML::~CParseTokensXML(void);
////EQLIB_OBJECT bool CParseTokensXML::Accept(enum ETokTypeXML);
#define HackPackHelp		 0
//EQLIB_OBJECT bool CParseTokensXML::StartFileBased(class CXStr);
//EQLIB_OBJECT class CXStr CParseTokensXML::GetCurFile(void);
//EQLIB_OBJECT void __cdecl CParseTokensXML::SetError(char const *,...);
};

class CParseTokXML
{
public:
//EQLIB_OBJECT CParseTokXML::~CParseTokXML(void);
////EQLIB_OBJECT enum ETokTypeXML CParseTokXML::NextToken(void);
////EQLIB_OBJECT void * CParseTokXML::`scalar deleting destructor'(unsigned int);
// private
//EQLIB_OBJECT bool CParseTokXML::GetEntityRef(char &);
};

class CPetInfoWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CPetInfoWnd::CPetInfoWnd(class CXWnd *);
//EQLIB_OBJECT class CButtonWnd * CPetInfoWnd::GetButton(int);
//EQLIB_OBJECT void CPetInfoWnd::Activate(void);
//EQLIB_OBJECT void CPetInfoWnd::SetShowOnSummon(bool);
//EQLIB_OBJECT void CPetInfoWnd::Update(void);
// virtual
//EQLIB_OBJECT CPetInfoWnd::~CPetInfoWnd(void);
//EQLIB_OBJECT int CPetInfoWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CPetInfoWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CPetInfoWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CPetInfoWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CPetInfoWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CPetInfoWnd::Init(void);
};

class CPetitionQWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CPetitionQWnd::CPetitionQWnd(class CXWnd *);
//EQLIB_OBJECT char * CPetitionQWnd::GetCurrentPetitionersName(void);
//EQLIB_OBJECT void CPetitionQWnd::Activate(void);
//EQLIB_OBJECT void CPetitionQWnd::AddGMText(void);
//EQLIB_OBJECT void CPetitionQWnd::CheckedOut(struct petitionQtype const *,int);
//EQLIB_OBJECT void CPetitionQWnd::ClearCurrentPet(void);
//EQLIB_OBJECT void CPetitionQWnd::FillFields(void);
//EQLIB_OBJECT void CPetitionQWnd::LogPetitionText(void);
//EQLIB_OBJECT void CPetitionQWnd::SetButtonsForPetition(bool,bool);
//EQLIB_OBJECT void CPetitionQWnd::SetPriorityDisplay(void);
//EQLIB_OBJECT void CPetitionQWnd::UndoCheckout(void);
//EQLIB_OBJECT void CPetitionQWnd::UpdatePetitions(void);
// virtual
//EQLIB_OBJECT CPetitionQWnd::~CPetitionQWnd(void);
//EQLIB_OBJECT int CPetitionQWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CPetitionQWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CPetitionQWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CPetitionQWnd::Deactivate(void);
};

class CPlayerNotesWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CPlayerNotesWnd::CPlayerNotesWnd(class CXWnd *);
//EQLIB_OBJECT void CPlayerNotesWnd::Activate(void);
//EQLIB_OBJECT void CPlayerNotesWnd::AppendText(char *);
//EQLIB_OBJECT void CPlayerNotesWnd::SaveNotes(void);
// virtual
//EQLIB_OBJECT CPlayerNotesWnd::~CPlayerNotesWnd(void);
//EQLIB_OBJECT int CPlayerNotesWnd::Draw(void)const;
//EQLIB_OBJECT int CPlayerNotesWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CPlayerNotesWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CPlayerNotesWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CPlayerNotesWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CPlayerNotesWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CPlayerNotesWnd::Init(void);
};

class CPlayerWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CPlayerWnd::CPlayerWnd(class CXWnd *);
//EQLIB_OBJECT void CPlayerWnd::Activate(void);
//EQLIB_OBJECT void CPlayerWnd::CreateLocalMenu(void);
//EQLIB_OBJECT void CPlayerWnd::UpdateContextMenu(void);
// virtual
//EQLIB_OBJECT CPlayerWnd::~CPlayerWnd(void);
//EQLIB_OBJECT int CPlayerWnd::Draw(void)const;
//EQLIB_OBJECT int CPlayerWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CPlayerWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CPlayerWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CPlayerWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CPlayerWnd::Deactivate(void);
//EQLIB_OBJECT void CPlayerWnd::LoadIniInfo(void);
//EQLIB_OBJECT void CPlayerWnd::StoreIniInfo(void);
// private
//EQLIB_OBJECT void CPlayerWnd::Init(void);
};

class CQuantityWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CQuantityWnd::CQuantityWnd(class CXWnd *);
//EQLIB_OBJECT void CQuantityWnd::Activate(class CXWnd *,int,int,int,int,bool);
// virtual
//EQLIB_OBJECT CQuantityWnd::~CQuantityWnd(void);
//EQLIB_OBJECT int CQuantityWnd::Draw(void)const;
//EQLIB_OBJECT int CQuantityWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CQuantityWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CQuantityWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CQuantityWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CQuantityWnd::Deactivate(void);
// private
////EQLIB_OBJECT void CQuantityWnd::Accept;
//EQLIB_OBJECT void CQuantityWnd::CheckMaxEditWnd(void);
//EQLIB_OBJECT void CQuantityWnd::UpdateEditWndFromSlider(void);
//EQLIB_OBJECT void CQuantityWnd::UpdateSliderFromEditWnd(void);
};

class CRadioGroup
{
public:
//EQLIB_OBJECT CRadioGroup::CRadioGroup(class CXStr);
//EQLIB_OBJECT class CXStr CRadioGroup::GetName(void)const;
// virtual
//EQLIB_OBJECT CRadioGroup::~CRadioGroup(void);
////EQLIB_OBJECT void * CRadioGroup::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CRadioGroup::`vector deleting destructor'(unsigned int);
};

class CRaid
{
public:
//EQLIB_OBJECT CRaid::~CRaid(void);
//EQLIB_OBJECT CRaid::CRaid(void);
//EQLIB_OBJECT bool CRaid::IsInRaid(void);
//EQLIB_OBJECT bool CRaid::IsInvited(void);
//EQLIB_OBJECT bool CRaid::IsRaidGroupLeader(void);
//EQLIB_OBJECT bool CRaid::IsRaidLeader(void);
//EQLIB_OBJECT bool CRaid::IsRaidMember(char *);
//EQLIB_OBJECT int CRaid::GetLootType(void);
//EQLIB_OBJECT int CRaid::GetNumRaidMembers(void);
//EQLIB_OBJECT struct RaidMember * CRaid::GetRaidMemberAt(int);
//EQLIB_OBJECT void CRaid::AddRaidLooter(void);
//EQLIB_OBJECT void CRaid::ClearInvitedState(void);
//EQLIB_OBJECT void CRaid::CreateInviteRaid(void);
//EQLIB_OBJECT void CRaid::HandleC2SRaidMessage(char *);
//EQLIB_OBJECT void CRaid::HandleCreateInviteRaid(struct CSRaidMessage *);
//EQLIB_OBJECT void CRaid::HandleS2CRaidMessage(char *);
//EQLIB_OBJECT void CRaid::RemoveRaidLooter(void);
//EQLIB_OBJECT void CRaid::RemoveRaidMember(void);
//EQLIB_OBJECT void CRaid::ResetRaid(void);
//EQLIB_OBJECT void CRaid::ResetWindow(void);
//EQLIB_OBJECT void CRaid::SendInviteResponse(bool);
//EQLIB_OBJECT void CRaid::SendLeadershipChange(char *);
//EQLIB_OBJECT void CRaid::SendRaidChat(char *);
//EQLIB_OBJECT void CRaid::SetLootType(char *);
//EQLIB_OBJECT void CRaid::SetRaidLeader(char *);
//EQLIB_OBJECT void CRaid::SetTargetRaidPlayer(char *);
//EQLIB_OBJECT void CRaid::UpdateClassColor(int,unsigned long);
//EQLIB_OBJECT void CRaid::UpdateOptionsWindow(void);
// private
//EQLIB_OBJECT bool CRaid::IsRaidLooter(char *);
//EQLIB_OBJECT int CRaid::FindOpenIndex(void);
//EQLIB_OBJECT int CRaid::FindPlayerIndex(char *);
//EQLIB_OBJECT int CRaid::FindRaidGroupLeader(int);
//EQLIB_OBJECT void CRaid::AddRaidMember(struct RaidAddMember *);
//EQLIB_OBJECT void CRaid::ChangeLeadership(char *);
//EQLIB_OBJECT void CRaid::DeleteRaidMember(struct SCRaidMessage *);
//EQLIB_OBJECT void CRaid::DetermineRaidChanges(char *);
//EQLIB_OBJECT void CRaid::HandleAddLooter(char *);
//EQLIB_OBJECT void CRaid::HandlePositionChange(struct SCRaidMessage *);
//EQLIB_OBJECT void CRaid::HandleRemoveLooter(char *);
//EQLIB_OBJECT void CRaid::HandleSetLootType(int);
//EQLIB_OBJECT void CRaid::InitializeRaid(char *);
//EQLIB_OBJECT void CRaid::RaidCreated(struct CreateRaidMessage *);
//EQLIB_OBJECT void CRaid::RaidGroupLeaderChange(struct SCRaidMessage *);
//EQLIB_OBJECT void CRaid::RenameMember(struct RenameRaidMember *);
//EQLIB_OBJECT void CRaid::SendRaidMsg(int,char *,char *,int);
//EQLIB_OBJECT void CRaid::SetLootTypeResponse(struct SCRaidMessage *);
//EQLIB_OBJECT void CRaid::UpdateLevelAverage(void);
};

class CRaidOptionsWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CRaidOptionsWnd::CRaidOptionsWnd(class CXWnd *);
//EQLIB_OBJECT void CRaidOptionsWnd::Activate(void);
//EQLIB_OBJECT void CRaidOptionsWnd::AddLooterToList(char *);
//EQLIB_OBJECT void CRaidOptionsWnd::ClearLooterList(void);
//EQLIB_OBJECT void CRaidOptionsWnd::UpdateComponents(void);
// virtual
//EQLIB_OBJECT CRaidOptionsWnd::~CRaidOptionsWnd(void);
//EQLIB_OBJECT int CRaidOptionsWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CRaidOptionsWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CRaidOptionsWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CRaidOptionsWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CRaidOptionsWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CRaidOptionsWnd::Init(void);
//EQLIB_OBJECT void CRaidOptionsWnd::InitializeClassColors(void);
};

class CRaidWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CRaidWnd::CRaidWnd(class CXWnd *);
//EQLIB_OBJECT void CRaidWnd::Activate(void);
//EQLIB_OBJECT void CRaidWnd::AddPlayertoList(char *,char *,char *,char *,int,int,bool);
//EQLIB_OBJECT void CRaidWnd::ChangePosition(char *,int,int,int,bool);
//EQLIB_OBJECT void CRaidWnd::ChangeRaidGroupLeader(char *,int,char *);
//EQLIB_OBJECT void CRaidWnd::ClearPlayerList(void);
//EQLIB_OBJECT void CRaidWnd::RemovePlayerFromList(char *,int);
//EQLIB_OBJECT void CRaidWnd::SetClassColor(int,unsigned long);
//EQLIB_OBJECT void CRaidWnd::SetPlayerClassColor(char *,int,int);
//EQLIB_OBJECT void CRaidWnd::SetPlayerClassColor(int,int,int);
//EQLIB_OBJECT void CRaidWnd::SetRaidCount(int);
//EQLIB_OBJECT void CRaidWnd::SetRaidMemberRank(char *,char *,int);
//EQLIB_OBJECT void CRaidWnd::SetRaidTarget(char *,int,char *,int);
//EQLIB_OBJECT void CRaidWnd::UpdateButtons(void);
//EQLIB_OBJECT void CRaidWnd::UpdateLevelAverage(int);
//EQLIB_OBJECT void CRaidWnd::UpdateMemberName(char *,char *,int);
// virtual
//EQLIB_OBJECT CRaidWnd::~CRaidWnd(void);
//EQLIB_OBJECT int CRaidWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CRaidWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CRaidWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CRaidWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CRaidWnd::Deactivate(void);
// private
//EQLIB_OBJECT int CRaidWnd::FindIndexNotInGroupList(char *);
//EQLIB_OBJECT int CRaidWnd::FindOpenIndexInGroup(int);
//EQLIB_OBJECT int CRaidWnd::FindPlayerIndexInGroup(char *,int);
//EQLIB_OBJECT void CRaidWnd::AddSeparator(void);
//EQLIB_OBJECT void CRaidWnd::Init(void);
//EQLIB_OBJECT void CRaidWnd::InitializeClassColors(void);
//EQLIB_OBJECT void CRaidWnd::ResortRaidGroupList(int,int);
};

class CRC32Generator
{
public:
//EQLIB_OBJECT unsigned int CRC32Generator::generateCRC32(unsigned char const *,unsigned int)const;
//EQLIB_OBJECT unsigned int CRC32Generator::updateCRC32(unsigned int,unsigned char const *,unsigned int)const;
// private
//EQLIB_OBJECT static unsigned int * CRC32Generator::_crcTable;
};

class CResolutionHandler
{
public:
//EQLIB_OBJECT static bool __cdecl CResolutionHandler::IsFullscreenAvailable(void);
//EQLIB_OBJECT static int __cdecl CResolutionHandler::GetDesktopBitsPerPixel(void);
//EQLIB_OBJECT static int __cdecl CResolutionHandler::GetDesktopHeight(void);
//EQLIB_OBJECT static int __cdecl CResolutionHandler::GetDesktopRefreshRate(void);
//EQLIB_OBJECT static int __cdecl CResolutionHandler::GetDesktopWidth(void);
//EQLIB_OBJECT static int __cdecl CResolutionHandler::GetHeight(void);
//EQLIB_OBJECT static int __cdecl CResolutionHandler::GetWidth(void);
//EQLIB_OBJECT static int __cdecl CResolutionHandler::Init(void);
//EQLIB_OBJECT static void __cdecl CResolutionHandler::ChangeToResolution(int,int,int,int,int);
//EQLIB_OBJECT static void __cdecl CResolutionHandler::SaveSettings(void);
//EQLIB_OBJECT static void __cdecl CResolutionHandler::Shutdown(void);
//EQLIB_OBJECT static void __cdecl CResolutionHandler::ToggleScreenMode(void);
//EQLIB_OBJECT static void __cdecl CResolutionHandler::UpdateWindowPosition(void);
// private
//EQLIB_OBJECT static bool CResolutionHandler::ms_isFullscreen;
//EQLIB_OBJECT static int CResolutionHandler::ms_fullscreenBitsPerPixel;
//EQLIB_OBJECT static int CResolutionHandler::ms_fullscreenRefreshRate;
//EQLIB_OBJECT static int CResolutionHandler::ms_height;
//EQLIB_OBJECT static int CResolutionHandler::ms_width;
//EQLIB_OBJECT static int CResolutionHandler::ms_windowedOffsetX;
//EQLIB_OBJECT static int CResolutionHandler::ms_windowedOffsetY;
};

class CScreenPieceTemplate
{
public:
//EQLIB_OBJECT CScreenPieceTemplate::CScreenPieceTemplate(class CParamScreenPiece *);
//EQLIB_OBJECT bool CScreenPieceTemplate::IsType(unsigned __int32)const;
//EQLIB_OBJECT class CXStr CScreenPieceTemplate::GetName(void)const;
// virtual
//EQLIB_OBJECT CScreenPieceTemplate::~CScreenPieceTemplate(void);
////EQLIB_OBJECT void * CScreenPieceTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CScreenPieceTemplate::`vector deleting destructor'(unsigned int);
};

class CScreenTemplate
{
public:
//EQLIB_OBJECT CScreenTemplate::CScreenTemplate(class CParamScreen *);
// virtual
//EQLIB_OBJECT CScreenTemplate::~CScreenTemplate(void);
////EQLIB_OBJECT void * CScreenTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CScreenTemplate::`vector deleting destructor'(unsigned int);
};

class CScrollbarTemplate
{
public:
//EQLIB_OBJECT CScrollbarTemplate::~CScrollbarTemplate(void);
//EQLIB_OBJECT CScrollbarTemplate::CScrollbarTemplate(class CScrollbarTemplate const &);
//EQLIB_OBJECT CScrollbarTemplate::CScrollbarTemplate(void);
//EQLIB_OBJECT class CScrollbarTemplate & CScrollbarTemplate::operator=(class CScrollbarTemplate const &);
};

class CSelectorWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CSelectorWnd::CSelectorWnd(class CXWnd *);
//EQLIB_OBJECT void CSelectorWnd::Activate(void);
//EQLIB_OBJECT void CSelectorWnd::KeyMapUpdated(void);
// virtual
//EQLIB_OBJECT CSelectorWnd::~CSelectorWnd(void);
//EQLIB_OBJECT int CSelectorWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CSelectorWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CSelectorWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSelectorWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CSelectorWnd::Deactivate(void);
};

class CSidlManager
{
public:
//EQLIB_OBJECT CSidlManager::CSidlManager(void);
//EQLIB_OBJECT class CButtonDrawTemplate * CSidlManager::FindButtonDrawTemplate(unsigned __int32)const;
//EQLIB_OBJECT class CButtonDrawTemplate CSidlManager::GetButtonDrawTemplateFromParamButtonDrawTemplate(class CParamButtonDrawTemplate const &)const;
//EQLIB_OBJECT class CGaugeDrawTemplate CSidlManager::GetGaugeDrawTemplateFromParamGaugeDrawTemplate(class CParamGaugeDrawTemplate const &)const;
//EQLIB_OBJECT class CScreenPieceTemplate * CSidlManager::CreateScreenPieceTemplateFromParamScreenPiece(class CParamScreenPiece const *)const;
//EQLIB_OBJECT class CScreenPieceTemplate * CSidlManager::FindScreenPieceTemplate(class CXStr *)const;
//EQLIB_OBJECT class CScreenPieceTemplate * CSidlManager::FindScreenPieceTemplate(char *);
//EQLIB_OBJECT class CScreenPieceTemplate * CSidlManager::FindScreenPieceTemplate(unsigned __int32)const;
//EQLIB_OBJECT class CScrollbarTemplate CSidlManager::GetScrollbarTemplateFromParamScrollbarTemplate(class CParamScrollbarDrawTemplate const &)const;
//EQLIB_OBJECT class CSliderDrawTemplate * CSidlManager::FindSliderDrawTemplate(class CXStr)const;
//EQLIB_OBJECT class CSliderDrawTemplate * CSidlManager::FindSliderDrawTemplate(unsigned __int32)const;
//EQLIB_OBJECT class CSliderDrawTemplate CSidlManager::GetSliderDrawTemplateFromParamSliderDrawTemplate(class CParamSliderDrawTemplate const &)const;
//EQLIB_OBJECT class CSpellGemDrawTemplate CSidlManager::GetSpellGemDrawTemplateFromParamSpellGemDrawTemplate(class CParamSpellGemDrawTemplate const &)const;
//EQLIB_OBJECT class CTAFrameDraw * CSidlManager::FindFrameDraw(unsigned __int32)const;
//EQLIB_OBJECT class CTAFrameDraw CSidlManager::CreateTAFrameDrawFromSidlFrame(class CParamFrameTemplate const *)const;
//EQLIB_OBJECT class CTextureAnimation * CSidlManager::FindAnimation(class CXStr)const;
//EQLIB_OBJECT class CTextureAnimation * CSidlManager::FindAnimation(unsigned __int32)const;
//EQLIB_OBJECT class CTextureAnimation CSidlManager::CreateTextureAnimationFromSidlAnimation(class CParamUi2DAnimation const *)const;
//EQLIB_OBJECT class CXStr CSidlManager::GetParsingErrorMsg(void)const;
//EQLIB_OBJECT class CXWnd * CSidlManager::CreateXWndFromTemplate(class CXWnd *,class CControlTemplate *);
//EQLIB_OBJECT class CXWndDrawTemplate * CSidlManager::FindDrawTemplate(class CXStr)const;
//EQLIB_OBJECT class CXWndDrawTemplate * CSidlManager::FindDrawTemplate(unsigned __int32)const;
//EQLIB_OBJECT class CXWndDrawTemplate CSidlManager::CreateDrawTemplateFromParamWindowDrawTemplate(class CParamWindowDrawTemplate const *)const;
////EQLIB_OBJECT enum EStaticScreenPieceClasses CSidlManager::GetScreenPieceEnum(class CScreenPieceTemplate *)const;
//EQLIB_OBJECT static class CXPoint __cdecl CSidlManager::GetPointFromParamPoint(class CParamPoint const &);
//EQLIB_OBJECT static class CXRect __cdecl CSidlManager::GetRectFromParamPointSize(class CParamPoint const &,class CParamSize const &);
//EQLIB_OBJECT static class CXSize __cdecl CSidlManager::GetSizeFromParamSize(class CParamSize const &);
//EQLIB_OBJECT static class CXStr __cdecl CSidlManager::TranslateString(class CXStr);
//EQLIB_OBJECT static unsigned long __cdecl CSidlManager::GetD3DCOLOR(class CParamRGB const &);
//EQLIB_OBJECT class CUITextureInfo * CSidlManager::FindTexture(class CXStr)const;
//EQLIB_OBJECT class CUITextureInfo * CSidlManager::FindTexture(unsigned __int32)const;
//EQLIB_OBJECT void CSidlManager::AddAnimationInOrder(class CTextureAnimation *);
//EQLIB_OBJECT void CSidlManager::AddDrawTemplateInOrder(class CXWndDrawTemplate *);
//EQLIB_OBJECT void CSidlManager::AddScreenPieceTemplateInOrder(class CScreenPieceTemplate *);
//EQLIB_OBJECT void CSidlManager::AddTAFrameDrawInOrder(class CTAFrameDraw *);
//EQLIB_OBJECT void CSidlManager::DeleteContents(void);
//EQLIB_OBJECT void CSidlManager::LoadSidl(class CXStr,class CXStr,class CXStr);
// virtual
//EQLIB_OBJECT CSidlManager::~CSidlManager(void);
////EQLIB_OBJECT void * CSidlManager::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSidlManager::`vector deleting destructor'(unsigned int);
};

class CSkillsSelectWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CSkillsSelectWnd::CSkillsSelectWnd(class CXWnd *);
//EQLIB_OBJECT void CSkillsSelectWnd::Refresh(void);
//EQLIB_OBJECT void CSkillsSelectWnd::SetTypesToDisplay(int);
// virtual
//EQLIB_OBJECT CSkillsSelectWnd::~CSkillsSelectWnd(void);
//EQLIB_OBJECT bool CSkillsSelectWnd::IsActive(void);
//EQLIB_OBJECT int CSkillsSelectWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CSkillsSelectWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSkillsSelectWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CSkillsSelectWnd::Activate(void);
//EQLIB_OBJECT void CSkillsSelectWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CSkillsSelectWnd::UpdateAll(void);
//EQLIB_OBJECT void CSkillsSelectWnd::UpdateSkill(int);
};

class CSkillsWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CSkillsWnd::CSkillsWnd(class CXWnd *);
//EQLIB_OBJECT void CSkillsWnd::Activate(void);
//EQLIB_OBJECT void CSkillsWnd::SkillImproveOccurred(int);
// virtual
//EQLIB_OBJECT CSkillsWnd::~CSkillsWnd(void);
//EQLIB_OBJECT int CSkillsWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CSkillsWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSkillsWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CSkillsWnd::Deactivate(void);
// protected
//EQLIB_OBJECT void CSkillsWnd::UpdateAll(void);
//EQLIB_OBJECT void CSkillsWnd::UpdateSkill(int);
};

class CSliderDrawTemplate
{
public:
//EQLIB_OBJECT CSliderDrawTemplate::~CSliderDrawTemplate(void);
};

class CSliderTemplate
{
public:
//EQLIB_OBJECT CSliderTemplate::CSliderTemplate(class CParamSlider *);
// virtual
//EQLIB_OBJECT CSliderTemplate::~CSliderTemplate(void);
////EQLIB_OBJECT void * CSliderTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSliderTemplate::`vector deleting destructor'(unsigned int);
};

class CSliderWnd: public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CSliderWnd::CSliderWnd(class CXWnd *,unsigned __int32,class CXRect,class CSliderTemplate *);
//EQLIB_OBJECT class CXRect CSliderWnd::GetEndCapLeftRect(void)const;
//EQLIB_OBJECT class CXRect CSliderWnd::GetEndCapRightRect(void)const;
//EQLIB_OBJECT class CXRect CSliderWnd::GetMiddleRangeRect(void)const;
//EQLIB_OBJECT class CXRect CSliderWnd::GetThumbRect(void)const;
//EQLIB_OBJECT int CSliderWnd::GetValue(void)const;
//EQLIB_OBJECT void CSliderWnd::SetNumTicks(int);
//EQLIB_OBJECT void CSliderWnd::SetValue(int);
// virtual
//EQLIB_OBJECT CSliderWnd::~CSliderWnd(void);
//EQLIB_OBJECT int CSliderWnd::Draw(void)const;
//EQLIB_OBJECT int CSliderWnd::HandleKeyboardMsg(unsigned __int32,unsigned __int32,bool);
//EQLIB_OBJECT int CSliderWnd::HandleLButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSliderWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSliderWnd::HandleLButtonUpAfterHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSliderWnd::HandleMouseMove(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSliderWnd::OnProcessFrame(void);
////EQLIB_OBJECT void * CSliderWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSliderWnd::`vector deleting destructor'(unsigned int);
// private
//EQLIB_OBJECT int CSliderWnd::DrawEndCapLeft(void)const;
//EQLIB_OBJECT int CSliderWnd::DrawEndCapRight(void)const;
//EQLIB_OBJECT int CSliderWnd::DrawMiddleRange(void)const;
//EQLIB_OBJECT int CSliderWnd::DrawThumb(void)const;
//EQLIB_OBJECT void CSliderWnd::SetThumbToOffset(int);
//EQLIB_OBJECT void CSliderWnd::UpdateMiddleRange(void);
//EQLIB_OBJECT void CSliderWnd::UpdateThumb(void);
};

class CSocialEditWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CSocialEditWnd::CSocialEditWnd(class CXWnd *);
//EQLIB_OBJECT unsigned long CSocialEditWnd::GetSocialTextColor(int);
//EQLIB_OBJECT void CSocialEditWnd::Activate(int);
// virtual
//EQLIB_OBJECT CSocialEditWnd::~CSocialEditWnd(void);
//EQLIB_OBJECT int CSocialEditWnd::Draw(void)const;
//EQLIB_OBJECT int CSocialEditWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CSocialEditWnd::OnSetFocus(class CXWnd *);
//EQLIB_OBJECT int CSocialEditWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CSocialEditWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSocialEditWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CSocialEditWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CSocialEditWnd::ClickedAccept(void);
//EQLIB_OBJECT void CSocialEditWnd::ClickedClear(void);
//EQLIB_OBJECT void CSocialEditWnd::ClickedTextColorButton(int);
//EQLIB_OBJECT void CSocialEditWnd::Init(void);
//EQLIB_OBJECT void CSocialEditWnd::UpdateControlsFromSocial(void);
};

class CSoulmarkWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CSoulmarkWnd::CSoulmarkWnd(class CXWnd *);
//EQLIB_OBJECT void CSoulmarkWnd::Activate(char *,char *);
//EQLIB_OBJECT void CSoulmarkWnd::Activate(void);
//EQLIB_OBJECT void CSoulmarkWnd::Clear(void);
//EQLIB_OBJECT void CSoulmarkWnd::FillFields(void);
//EQLIB_OBJECT void CSoulmarkWnd::Inquire(char *);
//EQLIB_OBJECT void CSoulmarkWnd::Praise(char *);
//EQLIB_OBJECT void CSoulmarkWnd::SaveMarks(void);
//EQLIB_OBJECT void CSoulmarkWnd::UpdateList(void);
//EQLIB_OBJECT void CSoulmarkWnd::UpdateSoulmarks(struct soulMarkMsg *);
//EQLIB_OBJECT void CSoulmarkWnd::Warn(char *);
// virtual
//EQLIB_OBJECT CSoulmarkWnd::~CSoulmarkWnd(void);
//EQLIB_OBJECT int CSoulmarkWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CSoulmarkWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSoulmarkWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CSoulmarkWnd::Deactivate(void);
// protected
//EQLIB_OBJECT void CSoulmarkWnd::AddMark(int,char *,char *,char *);
//EQLIB_OBJECT void CSoulmarkWnd::Inquire(char *,char *);
};

class CSpellBookWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CSpellBookWnd::CSpellBookWnd(class CXWnd *);
//EQLIB_OBJECT bool CSpellBookWnd::StartSpellMemorization(int,int,bool);
//EQLIB_OBJECT int CSpellBookWnd::GetSpellMemTicksLeft(void);
//EQLIB_OBJECT int CSpellBookWnd::GetSpellScribeTicksLeft(void);
//EQLIB_OBJECT static int __cdecl CSpellBookWnd::GetBookSlot(int);
//EQLIB_OBJECT void CSpellBookWnd::Activate(void);
//EQLIB_OBJECT void CSpellBookWnd::AutoMemSpell(int,int);
//EQLIB_OBJECT void CSpellBookWnd::DeleteSpellFromBook(int,int);
//EQLIB_OBJECT void CSpellBookWnd::FinishMemorizing(int,int);
//EQLIB_OBJECT void CSpellBookWnd::FinishScribing(int,int);
//EQLIB_OBJECT void CSpellBookWnd::MemorizeSet(int *,int);
//EQLIB_OBJECT void CSpellBookWnd::RequestSpellDeletion(int);
//EQLIB_OBJECT void CSpellBookWnd::SwapSpellBookSlots(int,int);
//EQLIB_OBJECT void CSpellBookWnd::TurnToPage(int);
// virtual
//EQLIB_OBJECT CSpellBookWnd::~CSpellBookWnd(void);
//EQLIB_OBJECT int CSpellBookWnd::Draw(void)const;
//EQLIB_OBJECT int CSpellBookWnd::HandleKeyboardMsg(unsigned __int32,unsigned __int32,bool);
//EQLIB_OBJECT int CSpellBookWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CSpellBookWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CSpellBookWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSpellBookWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CSpellBookWnd::Deactivate(void);
// private
//EQLIB_OBJECT bool CSpellBookWnd::CanStartMemming(int);
//EQLIB_OBJECT void CSpellBookWnd::ContinueSetMem(void);
//EQLIB_OBJECT void CSpellBookWnd::DelayedSpellMem(int,int,int);
//EQLIB_OBJECT void CSpellBookWnd::DisplaySpellInfo(int);
//EQLIB_OBJECT void CSpellBookWnd::EndSetMem(void);
//EQLIB_OBJECT void CSpellBookWnd::GetSpellDeletionConfirmation(int);
//EQLIB_OBJECT void CSpellBookWnd::HandleLeftClickOnSpell(int);
//EQLIB_OBJECT void CSpellBookWnd::HandleRightClickOnSpell(int);
//EQLIB_OBJECT void CSpellBookWnd::HandleSpellInfoDisplay(class CXWnd *);
//EQLIB_OBJECT void CSpellBookWnd::Init(void);
//EQLIB_OBJECT void CSpellBookWnd::StartSpellMemorizationDrag(int,class CButtonWnd *);
//EQLIB_OBJECT void CSpellBookWnd::StartSpellScribe(int);
//EQLIB_OBJECT void CSpellBookWnd::StopSpellBookAction(void);
//EQLIB_OBJECT void CSpellBookWnd::UpdateSpellBookDisplay(void);
};

class CSpellGemDrawTemplate
{
public:
//EQLIB_OBJECT CSpellGemDrawTemplate::~CSpellGemDrawTemplate(void);
};

class CSpellGemTemplate
{
public:
//EQLIB_OBJECT CSpellGemTemplate::CSpellGemTemplate(class CParamSpellGem *);
// virtual
//EQLIB_OBJECT CSpellGemTemplate::~CSpellGemTemplate(void);
////EQLIB_OBJECT void * CSpellGemTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSpellGemTemplate::`vector deleting destructor'(unsigned int);
};

class CSpellGemWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CSpellGemWnd::CSpellGemWnd(class CXWnd *,unsigned __int32,class CXRect,class CTextureAnimation *,class CTextureAnimation *,class CTextureAnimation *,int,int,unsigned long);
//EQLIB_OBJECT void CSpellGemWnd::SetCheck(bool);
//EQLIB_OBJECT void CSpellGemWnd::SetGemTintStage(int);
//EQLIB_OBJECT void CSpellGemWnd::SetSpellGemTint(unsigned long);
//EQLIB_OBJECT void CSpellGemWnd::SetSpellIconIndex(int);
// virtual
//EQLIB_OBJECT CSpellGemWnd::~CSpellGemWnd(void);
//EQLIB_OBJECT int CSpellGemWnd::Draw(void)const;
//EQLIB_OBJECT int CSpellGemWnd::HandleLButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSpellGemWnd::HandleLButtonHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSpellGemWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSpellGemWnd::HandleLButtonUpAfterHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSpellGemWnd::HandleRButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSpellGemWnd::HandleRButtonHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSpellGemWnd::HandleRButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSpellGemWnd::HandleRButtonUpAfterHeld(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CSpellGemWnd::OnProcessFrame(void);
////EQLIB_OBJECT void * CSpellGemWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSpellGemWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CSpellGemWnd::SetAttributesFromSidl(class CParamScreenPiece *);
// protected
//EQLIB_OBJECT void CSpellGemWnd::Init(void);
};

class CStaticAnimationTemplate
{
public:
//EQLIB_OBJECT CStaticAnimationTemplate::CStaticAnimationTemplate(class CParamStaticAnimation *);
// virtual
//EQLIB_OBJECT CStaticAnimationTemplate::~CStaticAnimationTemplate(void);
////EQLIB_OBJECT void * CStaticAnimationTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CStaticAnimationTemplate::`vector deleting destructor'(unsigned int);
};

class CStaticFrameTemplate
{
public:
//EQLIB_OBJECT CStaticFrameTemplate::CStaticFrameTemplate(class CParamStaticFrame *);
// virtual
//EQLIB_OBJECT CStaticFrameTemplate::~CStaticFrameTemplate(void);
////EQLIB_OBJECT void * CStaticFrameTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CStaticFrameTemplate::`vector deleting destructor'(unsigned int);
};

class CStaticHeaderTemplate
{
public:
//EQLIB_OBJECT CStaticHeaderTemplate::CStaticHeaderTemplate(class CParamStaticHeader *);
// virtual
//EQLIB_OBJECT CStaticHeaderTemplate::~CStaticHeaderTemplate(void);
////EQLIB_OBJECT void * CStaticHeaderTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CStaticHeaderTemplate::`vector deleting destructor'(unsigned int);
};

class CStaticScreenPieceTemplate
{
public:
//EQLIB_OBJECT CStaticScreenPieceTemplate::CStaticScreenPieceTemplate(class CParamStaticScreenPiece *);
// virtual
//EQLIB_OBJECT CStaticScreenPieceTemplate::~CStaticScreenPieceTemplate(void);
////EQLIB_OBJECT void * CStaticScreenPieceTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CStaticScreenPieceTemplate::`vector deleting destructor'(unsigned int);
};

class CStaticTextTemplate
{
public:
//EQLIB_OBJECT CStaticTextTemplate::CStaticTextTemplate(class CParamStaticText *);
//EQLIB_OBJECT class CXStr CStaticTextTemplate::SetText(class CXStr);
// virtual
//EQLIB_OBJECT CStaticTextTemplate::~CStaticTextTemplate(void);
////EQLIB_OBJECT void * CStaticTextTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CStaticTextTemplate::`vector deleting destructor'(unsigned int);
};

class CSTMLboxTemplate
{
public:
//EQLIB_OBJECT CSTMLboxTemplate::CSTMLboxTemplate(class CParamSTMLbox *);
// virtual
//EQLIB_OBJECT CSTMLboxTemplate::~CSTMLboxTemplate(void);
////EQLIB_OBJECT void * CSTMLboxTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CSTMLboxTemplate::`vector deleting destructor'(unsigned int);
};

class CStmlReport
{
public:
//EQLIB_OBJECT class CXStr CStmlReport::GetReport(void)const;
//EQLIB_OBJECT static class CStmlReport * __cdecl CStmlReport::CreateReport(class CXStr);
// private
//EQLIB_OBJECT static unsigned __int32 CStmlReport::m_uLastId;
};

class CStmlWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CStmlWnd::CStmlWnd(class CXWnd *,unsigned __int32,class CXRect);
//EQLIB_OBJECT bool CStmlWnd::CanGoBackward(void);
//EQLIB_OBJECT class CXSize& CStmlWnd::AppendSTML(class CXSize*, class CXStr); // lax 11-15-2003
//EQLIB_OBJECT class CXStr CStmlWnd::GetSTMLText(void)const;
//EQLIB_OBJECT class CXStr CStmlWnd::GetVisiableText(class CXStr&,class CXRect)const;
//EQLIB_OBJECT static class CXStr __cdecl CStmlWnd::MakeStmlColorTag(unsigned long);
//EQLIB_OBJECT static class CXStr __cdecl CStmlWnd::MakeWndNotificationTag(unsigned __int32,class CXStr&,class CXStr&);
//EQLIB_OBJECT void CStmlWnd::ActivateLink(class SLinkInfo);
//EQLIB_OBJECT void CStmlWnd::ForceParseNow(void);
//EQLIB_OBJECT void CStmlWnd::GoToBackHistoryLink(void);
////EQLIB_OBJECT void CStmlWnd::LoadPage(class CXStr,enum ESTMLTargetValue,bool);
//EQLIB_OBJECT void CStmlWnd::SetSTMLText(class CXStr,bool,class SLinkInfo *);
//EQLIB_OBJECT void CStmlWnd::SetSTMLTextWithoutHistory(class CXStr);
// virtual
//EQLIB_OBJECT CStmlWnd::~CStmlWnd(void);
//EQLIB_OBJECT bool CStmlWnd::IsPointTransparent(class CXPoint)const;
//EQLIB_OBJECT class CTextureAnimation * CStmlWnd::GetCursorToDisplay(void)const;
//EQLIB_OBJECT int CStmlWnd::Draw(void)const;
//EQLIB_OBJECT int CStmlWnd::HandleKeyboardMsg(unsigned __int32,unsigned __int32,bool);
//EQLIB_OBJECT int CStmlWnd::HandleLButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CStmlWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CStmlWnd::HandleMouseMove(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CStmlWnd::OnHScroll(EScrollCode,int);
//EQLIB_OBJECT int CStmlWnd::OnMove(class CXRect);
//EQLIB_OBJECT int CStmlWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CStmlWnd::OnResize(int,int);
//EQLIB_OBJECT int CStmlWnd::OnVScroll(EScrollCode,int);
////EQLIB_OBJECT void * CStmlWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CStmlWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CStmlWnd::SetWindowTextA(class CXStr);
// protected
//EQLIB_OBJECT bool CStmlWnd::IsLinkActive(class SLinkInfo)const;
//EQLIB_OBJECT bool CStmlWnd::ParseAmpersand(class CXStr,char *)const;
//EQLIB_OBJECT static bool __cdecl CStmlWnd::CanBreakAtCharacter(unsigned short);
//EQLIB_OBJECT static bool __cdecl CStmlWnd::IsCharacterNotASpaceAndNotNULL(unsigned short);
//EQLIB_OBJECT static bool __cdecl CStmlWnd::IsCharacterNotEquals(unsigned short);
//EQLIB_OBJECT static bool __cdecl CStmlWnd::IsCharacterNotQuotes(unsigned short);
//EQLIB_OBJECT unsigned short CStmlWnd::FastForwardPastQuotesAndGetNextTagPiece(class CXStr&,class CXStr *,int *,bool);
//EQLIB_OBJECT unsigned short CStmlWnd::FastForwardPastSpaces(class CXStr&,int *);
//EQLIB_OBJECT unsigned short CStmlWnd::FastForwardPastSpacesAndQuotes(class CXStr&,int *);
//EQLIB_OBJECT unsigned short CStmlWnd::FastForwardToEndOfTag(class CXStr&,class CXStr *,int *,char);
//EQLIB_OBJECT unsigned short CStmlWnd::GetNextChar(int *,class CXStr&);
//EQLIB_OBJECT unsigned short CStmlWnd::GetNextTagPiece(class CXStr&,class CXStr *,int *,bool (__cdecl*)(unsigned short),bool);
//EQLIB_OBJECT unsigned short CStmlWnd::GetThisChar(int,class CXStr&);
//EQLIB_OBJECT void CStmlWnd::ActivateLinkFile(class SLinkInfo);
//EQLIB_OBJECT void CStmlWnd::ActivateLinkMessageId(class SLinkInfo);
//EQLIB_OBJECT void CStmlWnd::ActivateLinkReport(class SLinkInfo,bool);
//EQLIB_OBJECT void CStmlWnd::ActivateLinkWndNotify(class SLinkInfo);
//EQLIB_OBJECT void CStmlWnd::AddLinkToHistory(class SLinkInfo,class CXStr);
//EQLIB_OBJECT void CStmlWnd::AddTextPieceToLine(class SParseVariables *);
//EQLIB_OBJECT void CStmlWnd::CalculateHSBRange(int);
//EQLIB_OBJECT void CStmlWnd::CalculateVSBRange(int);
//EQLIB_OBJECT void CStmlWnd::CompleteParse(void);
//EQLIB_OBJECT void CStmlWnd::InitializeTempVariables(class SParseVariables *,class CXRect);
//EQLIB_OBJECT void CStmlWnd::InitializeTextLine(class SParseVariables *,int);
//EQLIB_OBJECT void CStmlWnd::InitializeWindowVariables(void);
////EQLIB_OBJECT void CStmlWnd::ParseLinkTarget(class CXStr,enum ESTMLTargetValue *)const;
//EQLIB_OBJECT void CStmlWnd::ParseSTMLHead(class CXStr&);
//EQLIB_OBJECT void CStmlWnd::ParseSTMLTable(class CXStr&,int *,class CXStr,class SParseVariables *);
//EQLIB_OBJECT void CStmlWnd::ParseSTMLTableAttributes(class CXStr&,class STable *);
////EQLIB_OBJECT void CStmlWnd::ParseTagAlign(class CXStr,enum ESTMLAlign *)const;
//EQLIB_OBJECT void CStmlWnd::ParseTagColor(class CXStr&,unsigned long *)const;
//EQLIB_OBJECT void CStmlWnd::ParseTagFace(class CXStr&,class CTextureFont const * *)const;
//EQLIB_OBJECT void CStmlWnd::ResetTempVariablesForNewLine(class SParseVariables *);
//EQLIB_OBJECT void CStmlWnd::StripFirstSTMLLines(int);
//EQLIB_OBJECT void CStmlWnd::UpdateHistoryString(__int32,class CXStr&);
};

class CStoryWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CStoryWnd::CStoryWnd(class CXWnd *);
//EQLIB_OBJECT bool CStoryWnd::HasNew(void);
//EQLIB_OBJECT bool CStoryWnd::ShowAuto(void);
//EQLIB_OBJECT void CStoryWnd::Activate(void);
//EQLIB_OBJECT void CStoryWnd::SaveIni(void);
// virtual
//EQLIB_OBJECT CStoryWnd::~CStoryWnd(void);
//EQLIB_OBJECT int CStoryWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CStoryWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CStoryWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CStoryWnd::Deactivate(void);
//EQLIB_OBJECT void CStoryWnd::LoadIniInfo(void);
// protected
//EQLIB_OBJECT void CStoryWnd::SelectIndex(int);
//EQLIB_OBJECT void CStoryWnd::SelectOldestNew(void);
// private
//EQLIB_OBJECT void CStoryWnd::Init(void);
};

class CTabBoxTemplate
{
public:
//EQLIB_OBJECT CTabBoxTemplate::CTabBoxTemplate(class CParamTabBox *);
// virtual
//EQLIB_OBJECT CTabBoxTemplate::~CTabBoxTemplate(void);
////EQLIB_OBJECT void * CTabBoxTemplate::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CTabBoxTemplate::`vector deleting destructor'(unsigned int);
};

class CTabWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CTabWnd::CTabWnd(class CXWnd *,unsigned __int32,class CXRect,class CTabBoxTemplate *);
//EQLIB_OBJECT class CPageWnd * CTabWnd::GetCurrentPage(void)const;
//EQLIB_OBJECT class CXRect CTabWnd::GetPageClientRect(void)const;
//EQLIB_OBJECT class CXRect CTabWnd::GetPageInnerRect(void)const;
//EQLIB_OBJECT class CXRect CTabWnd::GetTabInnerRect(int)const;
//EQLIB_OBJECT class CXRect CTabWnd::GetTabRect(int)const;
//EQLIB_OBJECT int CTabWnd::GetCurrentTabIndex(void)const;
//EQLIB_OBJECT int CTabWnd::GetNumTabs(void)const;
//EQLIB_OBJECT void CTabWnd::InsertPage(class CPageWnd *,int);
//EQLIB_OBJECT void CTabWnd::SetPage(class CPageWnd *,bool);
//EQLIB_OBJECT void CTabWnd::SetPage(int,bool);
//EQLIB_OBJECT void CTabWnd::SetPageRect(class CXRect);
//EQLIB_OBJECT void CTabWnd::UpdatePage(void);
// virtual
//EQLIB_OBJECT CTabWnd::~CTabWnd(void);
//EQLIB_OBJECT int CTabWnd::Draw(void)const;
//EQLIB_OBJECT int CTabWnd::DrawTooltip(class CXWnd const *);
//EQLIB_OBJECT int CTabWnd::HandleLButtonDown(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CTabWnd::HandleLButtonUp(class CXPoint,unsigned __int32);
//EQLIB_OBJECT int CTabWnd::OnResize(int,int);
//EQLIB_OBJECT int CTabWnd::OnShow(void);
////EQLIB_OBJECT void * CTabWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CTabWnd::`vector deleting destructor'(unsigned int);
// private
//EQLIB_OBJECT bool CTabWnd::IndexInBounds(int)const;
//EQLIB_OBJECT class CPageWnd * CTabWnd::GetPageFromTabIndex(int)const;
//EQLIB_OBJECT class CPageWnd * CTabWnd::GetPageFromTabPoint(class CXPoint)const;
//EQLIB_OBJECT int CTabWnd::DrawCurrentPage(void)const;
//EQLIB_OBJECT int CTabWnd::DrawTab(int)const;
};

class CTAFrameDraw
{
public:
//EQLIB_OBJECT CTAFrameDraw::~CTAFrameDraw(void);
//EQLIB_OBJECT CTAFrameDraw::CTAFrameDraw(class CTAFrameDraw const &);
//EQLIB_OBJECT CTAFrameDraw::CTAFrameDraw(class CXStr);
//EQLIB_OBJECT bool CTAFrameDraw::IsHorizontal(void)const;
//EQLIB_OBJECT bool CTAFrameDraw::IsVertical(void)const;
//EQLIB_OBJECT class CTAFrameDraw & CTAFrameDraw::operator=(class CTAFrameDraw const &);
//EQLIB_OBJECT class CTextureAnimation * CTAFrameDraw::GetAnimation(int)const;
//EQLIB_OBJECT class CXRect CTAFrameDraw::GetHitTestRect(class CXRect,int)const;
//EQLIB_OBJECT class CXRect CTAFrameDraw::GetInnerRect(class CXRect)const;
//EQLIB_OBJECT class CXRect CTAFrameDraw::GetPieceRect(class CXRect,int)const;
//EQLIB_OBJECT class CXSize CTAFrameDraw::GetFrameSize(void)const;
//EQLIB_OBJECT class CXStr CTAFrameDraw::GetName(void)const;
//EQLIB_OBJECT int CTAFrameDraw::Draw(class CXRect,class CXRect)const;
//EQLIB_OBJECT int CTAFrameDraw::Draw(class CXRect,class CXRect,int)const;
//EQLIB_OBJECT int CTAFrameDraw::GetExtent(void)const;
//EQLIB_OBJECT int CTAFrameDraw::GetMinLength(void)const;
//EQLIB_OBJECT void CTAFrameDraw::Set(class CTextureAnimation * * const);
};

class CTargetWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CTargetWnd::CTargetWnd(class CXWnd *);
//EQLIB_OBJECT void CTargetWnd::Activate(void);
// virtual
//EQLIB_OBJECT CTargetWnd::~CTargetWnd(void);
//EQLIB_OBJECT int CTargetWnd::OnProcessFrame(void);
////EQLIB_OBJECT void * CTargetWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CTargetWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CTargetWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CTargetWnd::Init(void);
};

class CTextEntryWnd : public CEditBaseWnd
{
public:
//EQLIB_OBJECT CTextEntryWnd::CTextEntryWnd(class CXWnd *);
//EQLIB_OBJECT class CXStr CTextEntryWnd::GetEntryText(void);
//EQLIB_OBJECT void CTextEntryWnd::Activate(class CXWnd *,int,char *,int,int,char *);
//EQLIB_OBJECT void CTextEntryWnd::Callback(bool);
// virtual
//EQLIB_OBJECT CTextEntryWnd::~CTextEntryWnd(void);
//EQLIB_OBJECT int CTextEntryWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CTextEntryWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CTextEntryWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CTextEntryWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CTextEntryWnd::UpdateButtons(void);

/*0x148*///	DWORD Unknown0x148;
/*0x14C*/// DWORD Unknown0x14c;
/*0x150*/// PCXSTR Data;
/*0x154*/// DWORD Unknown0x154;
/*0x158*/// CSidlScreenWnd *Entry;
/*0x15c*/// CSidlScreenWnd *Prompt;
/*0x160*/// CSidlScreenWnd *OK;
/*0x164*/// CSidlScreenWnd *Cancel;
};

class CTextureAnimation
{
public:
//EQLIB_OBJECT CTextureAnimation::CTextureAnimation(class CXStr);
//EQLIB_OBJECT CTextureAnimation::CTextureAnimation(void);
//EQLIB_OBJECT class CTextureAnimation & CTextureAnimation::operator=(class CTextureAnimation const &);
//EQLIB_OBJECT class CXPoint CTextureAnimation::GetHotspot(void)const;
//EQLIB_OBJECT class CXStr CTextureAnimation::GetName(void)const;
//EQLIB_OBJECT int CTextureAnimation::AddBlankFrame(unsigned __int32,class CXPoint);
//EQLIB_OBJECT int CTextureAnimation::AddFrame(class CUITexturePiece,unsigned __int32,class CXPoint);
//EQLIB_OBJECT int CTextureAnimation::AddFrame(class CUITextureInfo const *,class CXRect,unsigned __int32,class CXPoint);
//EQLIB_OBJECT int CTextureAnimation::Draw(class CXPoint,class CXRect,unsigned long,unsigned long)const;
//EQLIB_OBJECT int CTextureAnimation::Draw(class CXRect,class CXRect,unsigned long,unsigned long)const;
//EQLIB_OBJECT int CTextureAnimation::GetCurFrame(void)const;
//EQLIB_OBJECT int CTextureAnimation::Preload(void);
//EQLIB_OBJECT void CTextureAnimation::Reset(void);
//EQLIB_OBJECT void CTextureAnimation::SetCurCell(int);
//EQLIB_OBJECT void CTextureAnimation::SetCurFrame(int);
// virtual
//EQLIB_OBJECT CTextureAnimation::~CTextureAnimation(void);
////EQLIB_OBJECT void * CTextureAnimation::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CTextureAnimation::`vector deleting destructor'(unsigned int);
// protected
//EQLIB_OBJECT static unsigned __int32 CTextureAnimation::sm_uMaxId;
};

class CTextureFont
{
public:
//EQLIB_OBJECT class CXStr CTextureFont::GetName(void)const;
//EQLIB_OBJECT int CTextureFont::DrawWrappedText(class CXStr,class CXRect,class CXRect,unsigned long,unsigned short,int)const;
//EQLIB_OBJECT int CTextureFont::DrawWrappedText(class CXStr *,int,int,int,class CXRect *,unsigned long,unsigned short,int)const;
//EQLIB_OBJECT int CTextureFont::GetHeight(void)const;
//EQLIB_OBJECT int CTextureFont::GetKerning(unsigned short,unsigned short)const;
//EQLIB_OBJECT int CTextureFont::GetTextExtent(class CXStr)const;
//EQLIB_OBJECT int CTextureFont::GetWidth(unsigned short)const;
// virtual
//EQLIB_OBJECT CTextureFont::~CTextureFont(void);
////EQLIB_OBJECT void * CTextureFont::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CTextureFont::`vector deleting destructor'(unsigned int);
};

class CTimeLeftWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CTimeLeftWnd::CTimeLeftWnd(long);
//EQLIB_OBJECT void CTimeLeftWnd::Activate(void);
// virtual
//EQLIB_OBJECT CTimeLeftWnd::~CTimeLeftWnd(void);
//EQLIB_OBJECT int CTimeLeftWnd::Draw(void)const;
//EQLIB_OBJECT int CTimeLeftWnd::OnProcessFrame(void);
////EQLIB_OBJECT void * CTimeLeftWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CTimeLeftWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CTimeLeftWnd::Deactivate(void);
};

class CTipWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CTipWnd::CTipWnd(class CXWnd *,int);
//EQLIB_OBJECT bool CTipWnd::Activate(int,bool);
//EQLIB_OBJECT void CTipWnd::InitializeTipSettings(void);
//EQLIB_OBJECT void CTipWnd::UpdateButtons(void);
// virtual
//EQLIB_OBJECT CTipWnd::~CTipWnd(void);
//EQLIB_OBJECT int CTipWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CTipWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CTipWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CTipWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CTipWnd::Deactivate(void);
// protected
//EQLIB_OBJECT bool CTipWnd::IsRecentTOTD(int);
//EQLIB_OBJECT int CTipWnd::SelectRandomTip(void);
//EQLIB_OBJECT void CTipWnd::AddContextTip(int);
//EQLIB_OBJECT void CTipWnd::LoadINISettings(void);
//EQLIB_OBJECT void CTipWnd::SetTOTD(int);
//EQLIB_OBJECT void CTipWnd::ShowHistoryTip(int);
// private
//EQLIB_OBJECT void CTipWnd::CleanDayTips(void);
//EQLIB_OBJECT void CTipWnd::LoadDayTips(void);
};

class CTokenXML
{
public:
//EQLIB_OBJECT CTokenXML::~CTokenXML(void);
};

class CTrackingWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CTrackingWnd::CTrackingWnd(class CXWnd *);
//EQLIB_OBJECT void CTrackingWnd::Activate(void);
//EQLIB_OBJECT void CTrackingWnd::DoTrackFilter(bool);
//EQLIB_OBJECT void CTrackingWnd::DoTrackSort(bool);
//EQLIB_OBJECT void CTrackingWnd::RemovePlayerFromTracking(class EQPlayer *);
//EQLIB_OBJECT void CTrackingWnd::SetTrackingList(struct TrackingHit *,int);
// virtual
//EQLIB_OBJECT CTrackingWnd::~CTrackingWnd(void);
//EQLIB_OBJECT int CTrackingWnd::Draw(void)const;
//EQLIB_OBJECT int CTrackingWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CTrackingWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CTrackingWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CTrackingWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CTrackingWnd::Deactivate(void);
// private
//EQLIB_OBJECT int CTrackingWnd::GetListIdByData(unsigned int);
//EQLIB_OBJECT unsigned long CTrackingWnd::GetTrackColor(int);
//EQLIB_OBJECT void CTrackingWnd::GenerateTrackingList(void);
//EQLIB_OBJECT void CTrackingWnd::Init(void);
//EQLIB_OBJECT void CTrackingWnd::NotifyServerOfTrackingTarget(int);
//EQLIB_OBJECT void CTrackingWnd::RemoveFromListWndByData(unsigned int);
//EQLIB_OBJECT void CTrackingWnd::RemovePlayerFromTracking(int);
//EQLIB_OBJECT void CTrackingWnd::UpdateTrackingControls(void);
//EQLIB_OBJECT void CTrackingWnd::UpdateTrackingList(bool);
};

class CTradeWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CTradeWnd::CTradeWnd(class CXWnd *);
//EQLIB_OBJECT bool CTradeWnd::IsMyTradeSlot(int,bool *);
//EQLIB_OBJECT void CTradeWnd::Activate(class EQPlayer *,bool);
//EQLIB_OBJECT void CTradeWnd::AddContainerToHisTradeArray(class EQ_Container *);
//EQLIB_OBJECT void CTradeWnd::AddEquipmentToHisTradeArray(class EQ_Equipment *);
//EQLIB_OBJECT void CTradeWnd::AddNoteToHisTradeArray(class EQ_Note *);
//EQLIB_OBJECT void CTradeWnd::ClickedCancelButton(void);
//EQLIB_OBJECT void CTradeWnd::ClickedMoneyButton(int);
//EQLIB_OBJECT void CTradeWnd::ClickedTradeButton(void);
//EQLIB_OBJECT void CTradeWnd::CompleteTrade(void);
//EQLIB_OBJECT void CTradeWnd::DeleteItemFromHisTradeArray(int);
//EQLIB_OBJECT void CTradeWnd::DropItemIntoTrade(void);
//EQLIB_OBJECT void CTradeWnd::SetHisMoney(int,long);
//EQLIB_OBJECT void CTradeWnd::SetHisReadyTrade(bool);
//EQLIB_OBJECT void CTradeWnd::SetMyReadyTrade(bool);
//EQLIB_OBJECT void CTradeWnd::TradeItemChanged(int,int);
// virtual
//EQLIB_OBJECT CTradeWnd::~CTradeWnd(void);
//EQLIB_OBJECT int CTradeWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CTradeWnd::PostDraw(void)const;
//EQLIB_OBJECT int CTradeWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CTradeWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CTradeWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CTradeWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CTradeWnd::Init(void);
//EQLIB_OBJECT void CTradeWnd::UpdateTradeDisplay(void);
};

class CTrainWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CTrainWnd::CTrainWnd(class CXWnd *);
//EQLIB_OBJECT void CTrainWnd::SetGMData(int *,unsigned char *,float);
//EQLIB_OBJECT void CTrainWnd::SkillChanged(int);
// virtual
//EQLIB_OBJECT CTrainWnd::~CTrainWnd(void);
//EQLIB_OBJECT int CTrainWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CTrainWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CTrainWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CTrainWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CTrainWnd::Deactivate(void);
// protected
//EQLIB_OBJECT char * CTrainWnd::SkillName(int);
//EQLIB_OBJECT int CTrainWnd::SkillValue(int);
//EQLIB_OBJECT void CTrainWnd::SortNames(int);
//EQLIB_OBJECT void CTrainWnd::SortSkill(int);
//EQLIB_OBJECT void CTrainWnd::SwapSkill(int,int);
//EQLIB_OBJECT void CTrainWnd::Train(void);
//EQLIB_OBJECT void CTrainWnd::UpdateAll(bool);
//EQLIB_OBJECT void CTrainWnd::UpdateRight(void);
//EQLIB_OBJECT void CTrainWnd::UpdateSkill(int);
};

class CUITextureInfo
{
public:
//EQLIB_OBJECT CUITextureInfo::~CUITextureInfo(void);
//EQLIB_OBJECT CUITextureInfo::CUITextureInfo(class CXStr,class CXSize);
//EQLIB_OBJECT CUITextureInfo::CUITextureInfo(class CXStr,int);
//EQLIB_OBJECT CUITextureInfo::CUITextureInfo(class CUITextureInfo const &);
//EQLIB_OBJECT CUITextureInfo::CUITextureInfo(unsigned __int32,int);
//EQLIB_OBJECT CUITextureInfo::CUITextureInfo(void);
//EQLIB_OBJECT class CXStr CUITextureInfo::GetName(void)const;
//EQLIB_OBJECT int CUITextureInfo::Draw(class CXRect,class CXRect,class CXRect,unsigned long *,unsigned long *)const;
//EQLIB_OBJECT int CUITextureInfo::Draw(class CXRect,class CXRect,class CXRect,unsigned long,unsigned long)const;
//EQLIB_OBJECT int CUITextureInfo::Preload(void);
//EQLIB_OBJECT int CUITextureInfo::Tile(class CXRect,unsigned long *,unsigned long *)const;
//EQLIB_OBJECT int CUITextureInfo::Tile(class CXRect,unsigned long,unsigned long)const;
//EQLIB_OBJECT class CUITextureInfo & CUITextureInfo::operator=(class CUITextureInfo const &);
};

class CUITexturePiece
{
public:
//EQLIB_OBJECT CUITexturePiece::~CUITexturePiece(void);
//EQLIB_OBJECT CUITexturePiece::CUITexturePiece(class CUITexturePiece const &);
//EQLIB_OBJECT CUITexturePiece::CUITexturePiece(class CUITextureInfo,class CXRect);
//EQLIB_OBJECT CUITexturePiece::CUITexturePiece(void);
//EQLIB_OBJECT class CUITexturePiece & CUITexturePiece::operator=(class CUITexturePiece const &);
//EQLIB_OBJECT int CUITexturePiece::Draw(class CXRect,class CXRect,class CXRect,unsigned long,unsigned long)const;
//EQLIB_OBJECT int CUITexturePiece::Draw(class CXRect,class CXRect,unsigned long,unsigned long)const;
};

class CVector3
{
public:
//EQLIB_OBJECT float CVector3::GetLength(void)const;
//EQLIB_OBJECT float CVector3::NormalizeAndReturnLength(void);
//EQLIB_OBJECT void CVector3::Normalize(void);
};

class CVideoModesWnd : public CSidlScreenWnd
{
public:
//EQLIB_OBJECT CVideoModesWnd::CVideoModesWnd(class CXWnd *);
//EQLIB_OBJECT void CVideoModesWnd::Activate(void);
//EQLIB_OBJECT void CVideoModesWnd::RestoreOldMode(void);
//EQLIB_OBJECT void CVideoModesWnd::Update(void);
// virtual
//EQLIB_OBJECT CVideoModesWnd::~CVideoModesWnd(void);
//EQLIB_OBJECT int CVideoModesWnd::Draw(void)const;
//EQLIB_OBJECT int CVideoModesWnd::OnProcessFrame(void);
//EQLIB_OBJECT int CVideoModesWnd::WndNotification(class CXWnd *,unsigned __int32,void *);
////EQLIB_OBJECT void * CVideoModesWnd::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CVideoModesWnd::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CVideoModesWnd::Deactivate(void);
// private
//EQLIB_OBJECT void CVideoModesWnd::Init(void);
//EQLIB_OBJECT void CVideoModesWnd::UpdateSelection(unsigned int);
};

class CXFileXML
{
public:
//EQLIB_OBJECT CXFileXML::~CXFileXML(void);
//EQLIB_OBJECT bool CXFileXML::Load(char *);
};

class CXMLData
{
public:
//EQLIB_OBJECT CXMLData::CXMLData(void);
//EQLIB_OBJECT class CXMLData & CXMLData::operator=(class CXMLData const &);
// virtual
//EQLIB_OBJECT CXMLData::~CXMLData(void);
//EQLIB_OBJECT bool CXMLData::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT bool CXMLData::WriteToXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT int CXMLData::GetStreamSize(void);
////EQLIB_OBJECT void * CXMLData::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CXMLData::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CXMLData::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CXMLData::WriteToStream(class CMemoryStream &);
// data members
/*0x00*/ PVOID pvfTable;
/*0x04*/ DWORD Unknown0x04;// always 8
/*0x08*/ enum UIType Type;
/*0x0C*/ DWORD Unknown0x0C;// no idea yet, some number but not unique
/*0x10*/ DWORD Unknown0x10;// always -1
/*0x14*/ CXStr TypeName;// "Screen" (control type)
/*0x18*/ CXStr Name;// "ChatWindow"  control name (used only for Screen)
/*0x1C*/ DWORD Unknown0x1C;// always null
/*0x20*/ CXStr ScreenID;// ScreenID (used only within Screen)
};

class CXMLDataClass
{
public:
//EQLIB_OBJECT CXMLDataClass::~CXMLDataClass(void);
//EQLIB_OBJECT CXMLDataClass::CXMLDataClass(void);
//EQLIB_OBJECT int CXMLDataClass::GetNumLeaf(void);
//EQLIB_OBJECT int CXMLDataClass::GetStreamSize(void);
////EQLIB_OBJECT void * CXMLDataClass::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CXMLDataClass::ReadFromStream(class CMemoryStream &,class CXMLDataManager &);
//EQLIB_OBJECT void CXMLDataClass::WriteToStream(class CMemoryStream &);
};

class CXMLDataManager
{
public:
//EQLIB_OBJECT CXMLDataManager::CXMLDataManager(void);
//EQLIB_OBJECT bool CXMLDataManager::IsDerivedFrom(int,int);
//EQLIB_OBJECT bool CXMLDataManager::ReadFromXMLSOM(class CXMLSOMDocument &);
//EQLIB_OBJECT class CXMLData * CXMLDataManager::GetXMLData(class CXStr,class CXStr);
//EQLIB_OBJECT class CXMLData * CXMLDataManager::GetXMLData(int,int);
//EQLIB_OBJECT int CXMLDataManager::GetClassIdx(class CXStr);
//EQLIB_OBJECT int CXMLDataManager::GetItemIdx(int,class CXStr);
//EQLIB_OBJECT int CXMLDataManager::GetNumClass(void);
//EQLIB_OBJECT int CXMLDataManager::GetNumItem(int);
// virtual
//EQLIB_OBJECT CXMLDataManager::~CXMLDataManager(void);
//EQLIB_OBJECT bool CXMLDataManager::DataValidate(void);
//EQLIB_OBJECT bool CXMLDataManager::ReadValidate(class CMemoryStream &);
//EQLIB_OBJECT bool CXMLDataManager::WriteValidate(class CMemoryStream &);
//EQLIB_OBJECT int CXMLDataManager::GetStreamSize(void);
////EQLIB_OBJECT void * CXMLDataManager::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CXMLDataManager::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void CXMLDataManager::IndexAll(void);
//EQLIB_OBJECT void CXMLDataManager::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CXMLDataManager::Set(class CXMLDataManager &);
//EQLIB_OBJECT void CXMLDataManager::WriteToStream(class CMemoryStream &);
// protected
//EQLIB_OBJECT void CXMLDataManager::AddToSuperType(class CXStr,class CXMLDataPtr);
//EQLIB_OBJECT void CXMLDataManager::SetEnumHash(void);
};

class CXMLDataPtr
{
public:
//EQLIB_OBJECT CXMLDataPtr::CXMLDataPtr(void);
//EQLIB_OBJECT class CXMLDataPtr & CXMLDataPtr::operator=(class CXMLDataPtr const &);
//EQLIB_OBJECT void CXMLDataPtr::SetNewPtr(class CXMLData *);
// virtual
//EQLIB_OBJECT CXMLDataPtr::~CXMLDataPtr(void);
////EQLIB_OBJECT void * CXMLDataPtr::`vector deleting destructor'(unsigned int);
// protected
//EQLIB_OBJECT virtual class CXMLData * CXMLDataPtr::AllocPtr(int,class CXMLData const *);
//EQLIB_OBJECT void CXMLDataPtr::Free(void);
};

class CXMLEnumInfo
{
public:
//EQLIB_OBJECT CXMLEnumInfo::~CXMLEnumInfo(void);
//EQLIB_OBJECT CXMLEnumInfo::CXMLEnumInfo(void);
//EQLIB_OBJECT int CXMLEnumInfo::GetStreamSize(void);
//EQLIB_OBJECT void CXMLEnumInfo::ReadFromStream(class CMemoryStream &);
//EQLIB_OBJECT void CXMLEnumInfo::WriteToStream(class CMemoryStream &);
};

class CXMLParamManager
{
public:
// virtual
//EQLIB_OBJECT CXMLParamManager::~CXMLParamManager(void);
//EQLIB_OBJECT bool CXMLParamManager::XMLDataCopy(class CXMLData *,class CXMLData *);
//EQLIB_OBJECT class CXMLData * CXMLParamManager::AllocPtr(class CXMLDataPtr &,int,class CXMLData const *);
////EQLIB_OBJECT void * CXMLParamManager::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CXMLParamManager::`vector deleting destructor'(unsigned int);
};

class CXMLSOMAttribute
{
public:
//EQLIB_OBJECT CXMLSOMAttribute::~CXMLSOMAttribute(void);
//EQLIB_OBJECT CXMLSOMAttribute::CXMLSOMAttribute(void);
//EQLIB_OBJECT class CXMLSOMAttribute & CXMLSOMAttribute::operator=(class CXMLSOMAttribute const &);
////EQLIB_OBJECT void * CXMLSOMAttribute::`vector deleting destructor'(unsigned int);
};

class CXMLSOMAttributeType
{
public:
//EQLIB_OBJECT CXMLSOMAttributeType::~CXMLSOMAttributeType(void);
//EQLIB_OBJECT CXMLSOMAttributeType::CXMLSOMAttributeType(void);
//EQLIB_OBJECT class CXMLSOMAttributeType & CXMLSOMAttributeType::operator=(class CXMLSOMAttributeType const &);
////EQLIB_OBJECT void * CXMLSOMAttributeType::`vector deleting destructor'(unsigned int);
};

class CXMLSOMCursor
{
public:
//EQLIB_OBJECT CXMLSOMCursor::~CXMLSOMCursor(void);
//EQLIB_OBJECT CXMLSOMCursor::CXMLSOMCursor(void);
//EQLIB_OBJECT class CXMLSOMCursor & CXMLSOMCursor::operator=(class CXMLSOMCursor const &);
////EQLIB_OBJECT void * CXMLSOMCursor::`vector deleting destructor'(unsigned int);
};

class CXMLSOMCursorSave
{
public:
//EQLIB_OBJECT CXMLSOMCursorSave::~CXMLSOMCursorSave(void);
};

class CXMLSOMCursorSaveFast
{
public:
//EQLIB_OBJECT CXMLSOMCursorSaveFast::~CXMLSOMCursorSaveFast(void);
};

class CXMLSOMCursorTraverseChildren
{
public:
//EQLIB_OBJECT CXMLSOMCursorTraverseChildren::~CXMLSOMCursorTraverseChildren(void);
//EQLIB_OBJECT class CXMLSOMCursor & CXMLSOMCursorTraverseChildren::Cursor(void);
};

class CXMLSOMDocument
{
public:
//EQLIB_OBJECT bool CXMLSOMDocument::FieldParseItemOfClass(class CXStr,class CXStr,unsigned __int32 &);
//EQLIB_OBJECT bool CXMLSOMDocument::GetValueObjectId(class CXStr,class CXStr,unsigned __int32 &);
//EQLIB_OBJECT bool CXMLSOMDocument::SetValueObjectId(class CXStr,class CXStr,unsigned __int32);
// virtual
//EQLIB_OBJECT CXMLSOMDocument::~CXMLSOMDocument(void);
////EQLIB_OBJECT void * CXMLSOMDocument::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CXMLSOMDocument::`vector deleting destructor'(unsigned int);
};

class CXMLSOMDocumentBase
{
public:
//EQLIB_OBJECT bool CXMLSOMDocumentBase::CursorFieldFind(class CXStr);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::CursorFind(class CXStr);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::CursorNextInOrder(void);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::CursorNextSibling(void);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::CursorPop(void);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::CursorPush(void);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::FieldParseClassItem(class CXStr,class CXStr &,class CXStr &);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::FieldParseItemOfClass(class CXStr,class CXStr,__int32 &,__int32 &);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::GetAttrValueInt(class CXStr,__int32 &);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::GetAttrValueStr(class CXStr,class CXStr &);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::GetValue(class CXStr,__int32 &);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::GetValue(class CXStr,bool &);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::GetValue(class CXStr,class CXStr &);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::SetValue(class CXStr,__int32);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::SetValue(class CXStr,bool);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::SetValue(class CXStr,class CXStr);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::ValidateData(void);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::ValidateSchema(void);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::XMLMerge(class CXMLSOMDocumentBase &);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::XMLRead(class CXStr*,class CXStr*,class CXStr*);
//EQLIB_OBJECT class CXMLSOMCursor & CXMLSOMDocumentBase::Cursor(void);
//EQLIB_OBJECT class CXMLSOMCursor & CXMLSOMDocumentBase::CursorParent(void);
//EQLIB_OBJECT class CXStr CXMLSOMDocumentBase::GetAttrValueStr(class CXStr);
//EQLIB_OBJECT class CXStr CXMLSOMDocumentBase::GetErrorMsg(void)const;
//EQLIB_OBJECT int CXMLSOMDocumentBase::XMLReadNoValidate(class CXStr,class CXStr,class CXStr);
//EQLIB_OBJECT void CXMLSOMDocumentBase::CursorInit(void);
//EQLIB_OBJECT void CXMLSOMDocumentBase::CursorNewChild(void);
//EQLIB_OBJECT void CXMLSOMDocumentBase::CursorNewSibling(void);
//EQLIB_OBJECT void CXMLSOMDocumentBase::CursorSetPtr(class CXMLSOMNodePtr);
//EQLIB_OBJECT void CXMLSOMDocumentBase::Init(void);
//EQLIB_OBJECT void CXMLSOMDocumentBase::SetErrorMsg(class CXStr);
//EQLIB_OBJECT void CXMLSOMDocumentBase::SetErrorMsgAtCursor(class CXStr);
//EQLIB_OBJECT void CXMLSOMDocumentBase::SetErrorMsgAtLine(class CXStr,int,class CXStr);
// virtual
//EQLIB_OBJECT CXMLSOMDocumentBase::~CXMLSOMDocumentBase(void);
////EQLIB_OBJECT void * CXMLSOMDocumentBase::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CXMLSOMDocumentBase::`vector deleting destructor'(unsigned int);
// protected
//EQLIB_OBJECT bool CXMLSOMDocumentBase::ValidateDataElements(class CXMLSOMElementType &);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::ValidateSchemaCategories(void);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::ValidateSchemaDefinition(void);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::ValidateSchemaElementType(void);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::ValidateSchemaSimpleType(void);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::ValidateSchemaSimpleTypeNode(class CXMLSOMSimpleType &);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::ValidateSchemaTypeRefs(void);
//EQLIB_OBJECT bool CXMLSOMDocumentBase::XMLProcessComposite(class CXStr,class CXStr);
};

class CXMLSOMElement
{
public:
//EQLIB_OBJECT CXMLSOMElement::~CXMLSOMElement(void);
//EQLIB_OBJECT CXMLSOMElement::CXMLSOMElement(void);
//EQLIB_OBJECT class CXMLSOMElement & CXMLSOMElement::operator=(class CXMLSOMElement const &);
////EQLIB_OBJECT void * CXMLSOMElement::`vector deleting destructor'(unsigned int);
};

class CXMLSOMElementType
{
public:
//EQLIB_OBJECT CXMLSOMElementType::~CXMLSOMElementType(void);
//EQLIB_OBJECT CXMLSOMElementType::CXMLSOMElementType(void);
//EQLIB_OBJECT int CXMLSOMElementType::GetItemIdx(class CXStr);
////EQLIB_OBJECT void * CXMLSOMElementType::`vector deleting destructor'(unsigned int);
};

class CXMLSOMNode
{
public:
//EQLIB_OBJECT static void * __cdecl CXMLSOMNode::operator new(unsigned int);
//EQLIB_OBJECT static void __cdecl CXMLSOMNode::FreeAllAllocs(void);
//EQLIB_OBJECT static void __cdecl CXMLSOMNode::operator delete(void *);
// protected
//EQLIB_OBJECT static char * * CXMLSOMNode::pAllAlloc;
//EQLIB_OBJECT static class CMutexSync CXMLSOMNode::mutexAccess;
//EQLIB_OBJECT static class CXMLSOMNode * CXMLSOMNode::pFreeHead;
// private
//EQLIB_OBJECT CXMLSOMNode::~CXMLSOMNode(void);
//EQLIB_OBJECT CXMLSOMNode::CXMLSOMNode(void);
////EQLIB_OBJECT void * CXMLSOMNode::`scalar deleting destructor'(unsigned int);
};

class CXMLSOMNodePtr
{
public:
//EQLIB_OBJECT CXMLSOMNodePtr::~CXMLSOMNodePtr(void);
//EQLIB_OBJECT CXMLSOMNodePtr::CXMLSOMNodePtr(void);
//EQLIB_OBJECT class CXMLSOMNode * CXMLSOMNodePtr::operator->(void)const;
//EQLIB_OBJECT class CXMLSOMNodePtr & CXMLSOMNodePtr::operator=(class CXMLSOMNodePtr const &);
////EQLIB_OBJECT void * CXMLSOMNodePtr::`vector deleting destructor'(unsigned int);
// protected
//EQLIB_OBJECT void CXMLSOMNodePtr::Assure(void)const;
};

class CXMLSOMParser
{
public:
//EQLIB_OBJECT CXMLSOMParser::~CXMLSOMParser(void);
//EQLIB_OBJECT bool CXMLSOMParser::ParseFile(class CXStr);
// protected
//EQLIB_OBJECT bool CXMLSOMParser::ParseDocument(void);
//EQLIB_OBJECT bool CXMLSOMParser::ParseEndTag(class CXStr);
//EQLIB_OBJECT bool CXMLSOMParser::ParseNameSpaceToken(class CXStr &);
//EQLIB_OBJECT bool CXMLSOMParser::ParseNode(void);
//EQLIB_OBJECT bool CXMLSOMParser::ParseNodeList(void);
//EQLIB_OBJECT bool CXMLSOMParser::ParseProcess(void);
//EQLIB_OBJECT bool CXMLSOMParser::ParseStartTag(bool &);
};

class CXMLSOMSchema
{
public:
//EQLIB_OBJECT CXMLSOMSchema::~CXMLSOMSchema(void);
//EQLIB_OBJECT CXMLSOMSchema::CXMLSOMSchema(void);
//EQLIB_OBJECT bool CXMLSOMSchema::AddItem(class CXStr,class CXStr);
//EQLIB_OBJECT bool CXMLSOMSchema::FindElementType(class CXStr);
//EQLIB_OBJECT bool CXMLSOMSchema::FindItem(class CXStr,class CXStr);
//EQLIB_OBJECT bool CXMLSOMSchema::FindSimpleType(class CXStr);
//EQLIB_OBJECT bool CXMLSOMSchema::IsDerivedFrom(class CXStr,class CXStr);
//EQLIB_OBJECT int CXMLSOMSchema::GetElementTypeIdx(class CXStr);
};

class CXMLSOMSimpleType
{
public:
//EQLIB_OBJECT CXMLSOMSimpleType::~CXMLSOMSimpleType(void);
//EQLIB_OBJECT CXMLSOMSimpleType::CXMLSOMSimpleType(void);
////EQLIB_OBJECT void * CXMLSOMSimpleType::`vector deleting destructor'(unsigned int);
};

class CXPoint
{
public:
//EQLIB_OBJECT class CXPoint CXPoint::operator=(class CXPoint);
DWORD A,B;
};

class CXRect
{
public:
/*
//EQLIB_OBJECT CXRect::CXRect(int nA,int nB,int nC,int nD)
{
	A=nA;
	B=nB;
	C=nC;
	D=nD;
}
//EQLIB_OBJECT CXRect::CXRect(void)
{
}
*/
//EQLIB_OBJECT class CXPoint CXRect::CenterPoint(void)const;
//EQLIB_OBJECT class CXRect & CXRect::operator=(class CXRect const &);
//EQLIB_OBJECT class CXRect CXRect::operator&(class CXRect)const;
//EQLIB_OBJECT class CXRect CXRect::operator|(class CXRect)const;
//EQLIB_OBJECT int CXRect::Width(void)const;
//EQLIB_OBJECT void CXRect::Move(class CXPoint);
//EQLIB_OBJECT void CXRect::Normalize(void);
DWORD A,B,C,D;
};


class CXStrSingleton
{
public:
//EQLIB_OBJECT static int CXStrSingleton::active;
};

class CXWndDrawTemplate
{
public:
//EQLIB_OBJECT CXWndDrawTemplate::~CXWndDrawTemplate(void);
//EQLIB_OBJECT CXWndDrawTemplate::CXWndDrawTemplate(class CXWndDrawTemplate const &);
//EQLIB_OBJECT CXWndDrawTemplate::CXWndDrawTemplate(void);
//EQLIB_OBJECT class CXWndDrawTemplate & CXWndDrawTemplate::operator=(class CXWndDrawTemplate const &);
};

class CXWndManager
{
public:
//EQLIB_OBJECT CXWndManager::CXWndManager(class CSidlManager *);
//EQLIB_OBJECT bool CXWndManager::IsAllValid(void);
//EQLIB_OBJECT bool CXWndManager::IsWindowActive(class CXWnd const *)const;
//EQLIB_OBJECT bool CXWndManager::IsWindowMovingOrSizing(class CXWnd *)const;
//EQLIB_OBJECT bool CXWndManager::IsWindowPieceDown(class CXWnd const *,int)const;
//EQLIB_OBJECT bool CXWndManager::OkayToSendMouseMessage(class CXWnd *)const;
//EQLIB_OBJECT class CTextureAnimation const * CXWndManager::GetCursorToDisplay(void)const;
//EQLIB_OBJECT class CTextureFont * CXWndManager::GetFont(class CXStr);
//EQLIB_OBJECT class CTextureFont * CXWndManager::GetFont(int)const;
//EQLIB_OBJECT class CXWnd * CXWndManager::FindWnd(class CXPoint,int *)const;
//EQLIB_OBJECT class CXWnd * CXWndManager::GetFirstChildWnd(class CXWnd const *)const;
//EQLIB_OBJECT class CXWnd * CXWndManager::GetFocusWnd(void)const;
//EQLIB_OBJECT class CXWnd * CXWndManager::GetNextSib(class CXWnd const *)const;
//EQLIB_OBJECT class CXWnd * CXWndManager::SetFocusWnd(class CXWnd *);
//EQLIB_OBJECT int CXWndManager::ActivateWnd(class CXWnd *);
//EQLIB_OBJECT int CXWndManager::AddFont(class CTextureFont *);
//EQLIB_OBJECT int CXWndManager::AddWnd(class CXWnd *);
//EQLIB_OBJECT int CXWndManager::DrawCursor(void)const;
//EQLIB_OBJECT int CXWndManager::DrawWindows(void)const;
//EQLIB_OBJECT int CXWndManager::HandleKeyboardMsg(unsigned __int32,bool);
//EQLIB_OBJECT int CXWndManager::HandleLButtonDown(class CXPoint);
//EQLIB_OBJECT int CXWndManager::HandleLButtonHeld(class CXPoint);
//EQLIB_OBJECT int CXWndManager::HandleLButtonUp(class CXPoint);
//EQLIB_OBJECT int CXWndManager::HandleLButtonUpAfterHeld(class CXPoint);
//EQLIB_OBJECT int CXWndManager::HandleMouseMove(class CXPoint);
//EQLIB_OBJECT int CXWndManager::HandleRButtonDown(class CXPoint);
//EQLIB_OBJECT int CXWndManager::HandleRButtonHeld(class CXPoint);
//EQLIB_OBJECT int CXWndManager::HandleRButtonUp(class CXPoint);
//EQLIB_OBJECT int CXWndManager::HandleRButtonUpAfterHeld(class CXPoint);
//EQLIB_OBJECT int CXWndManager::HandleWheelMove(int);
//EQLIB_OBJECT int CXWndManager::NotifyAllWindows(class CXWnd *,unsigned __int32,void *);
//EQLIB_OBJECT int CXWndManager::OnWindowCloseBox(class CXWnd *);
//EQLIB_OBJECT int CXWndManager::OnWindowMinimizeBox(class CXWnd *);
//EQLIB_OBJECT int CXWndManager::OnWindowTileBox(class CXWnd *);
//EQLIB_OBJECT int CXWndManager::ProcessFrame(void);
//EQLIB_OBJECT int CXWndManager::RemoveWnd(class CXWnd *);
//EQLIB_OBJECT static class CTextureAnimation CXWndManager::sm_curDefault;
//EQLIB_OBJECT static class CTextureAnimation CXWndManager::sm_curDrag;
//EQLIB_OBJECT static class CTextureAnimation CXWndManager::sm_curResizeEW;
//EQLIB_OBJECT static class CTextureAnimation CXWndManager::sm_curResizeNESW;
//EQLIB_OBJECT static class CTextureAnimation CXWndManager::sm_curResizeNS;
//EQLIB_OBJECT static class CTextureAnimation CXWndManager::sm_curResizeNWSE;
//EQLIB_OBJECT unsigned __int32 CXWndManager::GetDisplayWidth(void)const;
//EQLIB_OBJECT unsigned __int32 CXWndManager::GetGlobalFadeDuration(void)const;
//EQLIB_OBJECT unsigned __int32 CXWndManager::GetKeyboardFlags(void)const;
//EQLIB_OBJECT unsigned char CXWndManager::GetGlobalAlpha(void)const;
//EQLIB_OBJECT unsigned char CXWndManager::GetGlobalFadeToAlpha(void)const;
//EQLIB_OBJECT unsigned long CXWndManager::GetGlobalFadeDelay(void)const;
//EQLIB_OBJECT void CXWndManager::BringWndToTop(class CXWnd *,bool);
//EQLIB_OBJECT void CXWndManager::CheckInvalidateLastFoundWnd(void);
//EQLIB_OBJECT void CXWndManager::CleanupWindows(void);
//EQLIB_OBJECT void CXWndManager::DestroyAllWindows(void);
//EQLIB_OBJECT void CXWndManager::FlushKeyboardFlags(void);
//EQLIB_OBJECT void CXWndManager::OnWindowShown(class CXWnd *,bool);
//EQLIB_OBJECT void CXWndManager::SetGlobalAlpha(unsigned char);
//EQLIB_OBJECT void CXWndManager::SetGlobalFadeDelay(unsigned long);
//EQLIB_OBJECT void CXWndManager::SetGlobalFadeDuration(unsigned __int32);
//EQLIB_OBJECT void CXWndManager::SetGlobalFadeToAlpha(unsigned char);
//EQLIB_OBJECT void CXWndManager::SetSystemFont(class CTextureFont *);
//EQLIB_OBJECT void CXWndManager::UpdateChildAndSiblingInfo(void);
// virtual
//EQLIB_OBJECT CXWndManager::~CXWndManager(void);
////EQLIB_OBJECT void * CXWndManager::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * CXWndManager::`vector deleting destructor'(unsigned int);
};

class EmitterManager
{
public:
//EQLIB_OBJECT EmitterManager::~EmitterManager(void);
//EQLIB_OBJECT EmitterManager::EmitterManager(class SoundManager *);
//EQLIB_OBJECT float EmitterManager::GetEffectsLevel(void);
//EQLIB_OBJECT float EmitterManager::GetVolumeLevel(void);
//EQLIB_OBJECT void EmitterManager::Add(class SoundEmitter *);
//EQLIB_OBJECT void EmitterManager::GetListenerLocation(float *,float *,float *,float *);
//EQLIB_OBJECT void EmitterManager::GiveTime(void);
//EQLIB_OBJECT void EmitterManager::Remove(class SoundEmitter *);
//EQLIB_OBJECT void EmitterManager::SetEffectsLevel(float);
//EQLIB_OBJECT void EmitterManager::SetVolumeLevel(float);
};

class engineInterface
{
public:
//EQLIB_OBJECT static class engineInterface * __cdecl engineInterface::get(void);
//EQLIB_OBJECT unsigned long * engineInterface::ChangeDag(struct T3D_tagWORLD *,struct T3D_DAG *,char *);
// private
//EQLIB_OBJECT engineInterface::engineInterface(void);
//EQLIB_OBJECT static class engineInterface * engineInterface::mSelf;
};

class EQ_Affect
{
public:
//EQLIB_OBJECT void EQ_Affect::Reset(void);
};

class EQ_AltAbility
{
public:
//EQLIB_OBJECT EQ_AltAbility::EQ_AltAbility(int);
};

class EQ_Character1
{
public:
//EQLIB_OBJECT int EQ_Character1::Max_HP(int);
//EQLIB_OBJECT int EQ_Character1::Max_Mana(void);
//EQLIB_OBJECT int EQ_Character1::Max_Endurance(void); // lax 4-25-2004
//EQLIB_OBJECT int EQ_Character1::Cur_HP(int);
//EQLIB_OBJECT unsigned char EQ_Character1::CastSpell(unsigned char,int,class EQ_Item * *,int,int slot,int,int,int); 
//EQLIB_OBJECT int const EQ_Character1::GetAACastingTimeModifier(class EQ_Spell const *);
//EQLIB_OBJECT int const EQ_Character1::GetFocusCastingTimeModifier(class EQ_Spell const *,class EQ_Equipment * *);
};

class EQ_Character
{
public:
//EQLIB_OBJECT EQ_Character::~EQ_Character(void);
//EQLIB_OBJECT EQ_Character::EQ_Character(void);
//EQLIB_OBJECT bool EQ_Character::DoesSpellMatchFocusFilters(class EQ_Spell const *,class EQ_Spell const *);
//EQLIB_OBJECT bool EQ_Character::IsSpellTooPowerfull(class EQ_Spell *,class EQ_Character *);
//EQLIB_OBJECT bool EQ_Character::IsStackBlocked(class EQ_Spell const *);
//EQLIB_OBJECT bool EQ_Character::IsValidAffect(int);
//EQLIB_OBJECT char * EQ_Character::Class(int);
//EQLIB_OBJECT char * EQ_Character::KunarkClass(int,int,int,bool);
//EQLIB_OBJECT char * EQ_Character::Race(int);
//EQLIB_OBJECT class EQ_Affect & EQ_Character::GetEffect(int);
//EQLIB_OBJECT class EQ_Affect * EQ_Character::FindAffectSlot(int,class EQPlayer *,int *,int);
//EQLIB_OBJECT class EQ_Affect * EQ_Character::GetPCSpellAffect(unsigned char,int *);
//EQLIB_OBJECT class EQ_Equipment * EQ_Character::GetFocusItem(class EQ_Spell const *,int);
//EQLIB_OBJECT class EQ_Spell * EQ_Character::GetFocusEffect(class EQ_Spell const *,int);
//EQLIB_OBJECT class EQPlayer * EQ_Character::FindClosest(int,int,int,int,int);
//EQLIB_OBJECT class EQPlayer * EQ_Character::GetMyPetPlayer(void);
//EQLIB_OBJECT float EQ_Character::encum_factor(void);
//EQLIB_OBJECT int EQ_Character::ac(bool);
//EQLIB_OBJECT int EQ_Character::Agi(void);
//EQLIB_OBJECT int EQ_Character::AntiTwinkAdj(class EQ_Equipment *,int,int);
//EQLIB_OBJECT int EQ_Character::ApplyDamage(int,struct _EQMissileHitinfo *,bool,class HateListEntry *,bool);
//EQLIB_OBJECT int EQ_Character::ApplyFatigue(int);
//EQLIB_OBJECT int EQ_Character::AutoEat(unsigned char);
//EQLIB_OBJECT int EQ_Character::BaneDamage(class EQ_Equipment *);
//EQLIB_OBJECT int EQ_Character::BardCastBard(class EQ_Spell const *,int)const;
//EQLIB_OBJECT int EQ_Character::basesave_cold(void);
//EQLIB_OBJECT int EQ_Character::basesave_disease(void);
//EQLIB_OBJECT int EQ_Character::basesave_fire(void);
//EQLIB_OBJECT int EQ_Character::basesave_magic(void);
//EQLIB_OBJECT int EQ_Character::basesave_poison(void);
//EQLIB_OBJECT int EQ_Character::CalcAffectChange(class EQ_Spell *,unsigned char,unsigned char,class EQ_Affect *);
//EQLIB_OBJECT int EQ_Character::CalculateBardSongMod(int);
//EQLIB_OBJECT int EQ_Character::CanUseItem(class EQ_Item *);
//EQLIB_OBJECT int EQ_Character::CapStat(int,int);
//EQLIB_OBJECT int EQ_Character::Cha(void);
//EQLIB_OBJECT int EQ_Character::CheckFoodAndWater(void);
//EQLIB_OBJECT int EQ_Character::compute_defense(void);
//EQLIB_OBJECT int EQ_Character::compute_tohit(unsigned char);
//EQLIB_OBJECT int EQ_Character::cur_encumbrance(void);
//EQLIB_OBJECT int EQ_Character::Cur_Mana(void);
//EQLIB_OBJECT int EQ_Character::defense_agility_bonus(void);
//EQLIB_OBJECT int EQ_Character::Dex(void);
//EQLIB_OBJECT int EQ_Character::ElementResistDmg(class EQ_Equipment *,int);
//EQLIB_OBJECT int EQ_Character::eqspa_change_form(class EQ_Spell *,int,int,class EQ_Affect *);
//EQLIB_OBJECT int EQ_Character::eqspa_hp(unsigned int,class EQ_Affect *,int,class EQ_Spell *);
//EQLIB_OBJECT int EQ_Character::GetBardInstrumentMod(int);
//EQLIB_OBJECT int EQ_Character::GetClassACBonus(int);
//EQLIB_OBJECT int EQ_Character::GetFirstEffectSlot(bool);
//EQLIB_OBJECT int EQ_Character::GetHPFromStamina(int);
//EQLIB_OBJECT int EQ_Character::GetIndexSkillMinDamageMod(int);
//EQLIB_OBJECT int EQ_Character::GetLastEffectSlot(bool);
//EQLIB_OBJECT int EQ_Character::GetOpenEffectSlot(bool,int);
//EQLIB_OBJECT int EQ_Character::HasInnateSkill(unsigned char,int);
//EQLIB_OBJECT int EQ_Character::HasSkill(unsigned char);
//EQLIB_OBJECT int EQ_Character::HasSpell(int);
//EQLIB_OBJECT int EQ_Character::IHaveSkill(unsigned char);
//EQLIB_OBJECT int EQ_Character::InSpecialBindSpot(class EQPlayer *);
//EQLIB_OBJECT int EQ_Character::Int(void);
//EQLIB_OBJECT int EQ_Character::IsMage(void);
//EQLIB_OBJECT int EQ_Character::IsSpecialBazaarSpot(class EQPlayer *);
//EQLIB_OBJECT int EQ_Character::IsSpellcaster(void);
//EQLIB_OBJECT int EQ_Character::ItemSpellAffects(int);
//EQLIB_OBJECT int EQ_Character::max_encumbrance(void);
////EQLIB_OBJECT int EQ_Character::Max_HP(int);
////EQLIB_OBJECT int EQ_Character::Max_Mana(void);
////EQLIB_OBJECT int EQ_Character::Max_Endurance(void); // lax 4-25-2004
//EQLIB_OBJECT int EQ_Character::NoBashMe(int);
//EQLIB_OBJECT int EQ_Character::NoMezMe(int,class EQPlayer *,class EQ_Spell *);
//EQLIB_OBJECT int EQ_Character::offense(unsigned char);
//EQLIB_OBJECT int EQ_Character::ProcessAffects(void);
//EQLIB_OBJECT int EQ_Character::save_bash(int);
//EQLIB_OBJECT int EQ_Character::save_cold(void);
//EQLIB_OBJECT int EQ_Character::save_disease(void);
//EQLIB_OBJECT int EQ_Character::save_fire(void);
//EQLIB_OBJECT int EQ_Character::save_magic(void);
//EQLIB_OBJECT int EQ_Character::save_poison(void);
//EQLIB_OBJECT int EQ_Character::SetLocalVar(char *,int);
//EQLIB_OBJECT int EQ_Character::Skill(int);
//EQLIB_OBJECT int EQ_Character::SpellDuration(class EQ_Spell const *,unsigned char,unsigned char);
//EQLIB_OBJECT int EQ_Character::Sta(void);
//EQLIB_OBJECT int EQ_Character::Str(void);
//EQLIB_OBJECT int EQ_Character::TakeFallDamage(float);
//EQLIB_OBJECT int EQ_Character::TotalSpellAffects(unsigned char,bool,int *);
//EQLIB_OBJECT int EQ_Character::Wis(void);
//EQLIB_OBJECT int const EQ_Character::GetFocusConserveRegChance(class EQ_Spell const *,class EQ_Equipment * *);
//EQLIB_OBJECT int const EQ_Character::GetFocusRangeModifier(class EQ_Spell const *,class EQ_Equipment * *);
//EQLIB_OBJECT long EQ_Character::TotalOnPerson(void);
//EQLIB_OBJECT static int __cdecl EQ_Character::normal_to_special(int);
//EQLIB_OBJECT unsigned char EQ_Character::BarbarianCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::BaseAttr(int,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::CanDoubleAttack(class EQPlayer *,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::CanIBreathe(void);
//EQLIB_OBJECT unsigned char EQ_Character::CanISeeInvis(void);
//EQLIB_OBJECT unsigned char EQ_Character::CanMedOnHorse(void);
//EQLIB_OBJECT unsigned char EQ_Character::CanSecondaryAttack(class EQPlayer *);
//EQLIB_OBJECT unsigned char EQ_Character::CanWorship(int,int,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::CastingRequirementsMet(int);
//EQLIB_OBJECT unsigned char EQ_Character::CheckClass(int,int);
//EQLIB_OBJECT unsigned char EQ_Character::CityCanStart(int,int,int,int);
//EQLIB_OBJECT unsigned char EQ_Character::ClassMin(int,int,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::DarkElfCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::DwarfCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::ElfCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::EruditeCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::ExpendItemCharge(int,int);
//EQLIB_OBJECT unsigned char EQ_Character::FindItemByClass(int,int *,int *);
//EQLIB_OBJECT unsigned char EQ_Character::FindItemByRecord(int,int *,int *);
//EQLIB_OBJECT unsigned char EQ_Character::FindItemQty(int,int);
//EQLIB_OBJECT unsigned char EQ_Character::FroglockCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::GetMaxEffects(void)const;
//EQLIB_OBJECT unsigned char EQ_Character::GetSkillBaseDamage(unsigned char,class EQPlayer *);
//EQLIB_OBJECT unsigned char EQ_Character::GnomeCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::HalfElfCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::HalflingCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::HighElfCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::HumanCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::IksarCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::IsSpellAffectingPC(int);
//EQLIB_OBJECT unsigned char EQ_Character::LaunchSpell(unsigned char,int,class EQ_Item * *);
//EQLIB_OBJECT unsigned char EQ_Character::OgreCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::SpellFizzled(unsigned char,class EQ_Spell *);
//EQLIB_OBJECT unsigned char EQ_Character::TrollCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned char EQ_Character::VahShirCanWorship(unsigned char,unsigned char);
//EQLIB_OBJECT unsigned int EQ_Character::GetEffectId(int);
//EQLIB_OBJECT void EQ_Character::CalcFoodDrinkBonus(int);
//EQLIB_OBJECT void EQ_Character::DoFishingEvent(void);
//EQLIB_OBJECT void EQ_Character::DoIntimidationEvent(void);
//EQLIB_OBJECT void EQ_Character::DoLight(unsigned char);
//EQLIB_OBJECT void EQ_Character::DoMeditation(void);
//EQLIB_OBJECT void EQ_Character::DoPassageOfTime(void);
//EQLIB_OBJECT void EQ_Character::EQ_CharacterResetAllMembers(void);
//EQLIB_OBJECT void EQ_Character::EQSPA_Feign_Death(int);
//EQLIB_OBJECT void EQ_Character::eqspa_levitation(void);
//EQLIB_OBJECT void EQ_Character::eqspa_locate_corpse(void);
//EQLIB_OBJECT void EQ_Character::eqspa_movement_rate(int);
//EQLIB_OBJECT void EQ_Character::HandleSpecialPCAffects(int);
//EQLIB_OBJECT void EQ_Character::HitBySpell(struct _EQMissileHitinfo *);
//EQLIB_OBJECT void EQ_Character::IAmDead(struct _EQMissileHitinfo *,int);
//EQLIB_OBJECT void EQ_Character::InitInnates(unsigned int,unsigned int);
//EQLIB_OBJECT void EQ_Character::InitMyLanguages(void);
//EQLIB_OBJECT void EQ_Character::InitSkills(unsigned char,unsigned int);
//EQLIB_OBJECT void EQ_Character::ItemSold(long);
//EQLIB_OBJECT void EQ_Character::MakeMeVisible(int);
//EQLIB_OBJECT void EQ_Character::ModifyCurHP(int,class EQPlayer *);
//EQLIB_OBJECT void EQ_Character::NotifyPCAffectChange(int,int);
//EQLIB_OBJECT void EQ_Character::ProcessAllStats(void);
//EQLIB_OBJECT void EQ_Character::ProcessEnvironment(void);
//EQLIB_OBJECT void EQ_Character::ProcessHungerandThirst(unsigned int);
//EQLIB_OBJECT void EQ_Character::RemovePCAffect(class EQ_Affect *);
//EQLIB_OBJECT void EQ_Character::RemovePCAffectex(class EQ_Affect *,int);
//EQLIB_OBJECT void EQ_Character::ResetCur_HP(int);
//EQLIB_OBJECT void EQ_Character::SetEffectId(unsigned char,unsigned int);
//EQLIB_OBJECT void EQ_Character::StopSpellCast(unsigned char);
//EQLIB_OBJECT void EQ_Character::StopSpellCast(unsigned char,int);
//EQLIB_OBJECT void EQ_Character::StunMe(unsigned int,bool);
//EQLIB_OBJECT void EQ_Character::UnStunMe(void);
//EQLIB_OBJECT void EQ_Character::UpdateMyVisibleStatus(void);
//EQLIB_OBJECT void EQ_Character::UseSkill(unsigned char,class EQPlayer *);
//EQLIB_OBJECT void EQ_Character::DoCombatAbility(int spellID); 
// private
//EQLIB_OBJECT int EQ_Character::GetCachEQSPA(int);
//EQLIB_OBJECT void EQ_Character::ReCachItemEffects(void);
//EQLIB_OBJECT void EQ_Character::ReCachSpellEffects(void);
};

class EQ_CharacterData
{
public:
//EQLIB_OBJECT void EQ_CharacterData::EQ_CharacterDataResetAllMembers(void);
};

class EQ_Container
{
public:
//EQLIB_OBJECT EQ_Container::~EQ_Container(void);
//EQLIB_OBJECT EQ_Container::EQ_Container(void);
//EQLIB_OBJECT unsigned char EQ_Container::Close(void);
//EQLIB_OBJECT unsigned char EQ_Container::IsOpen(void);
//EQLIB_OBJECT unsigned char EQ_Container::Open(void);
};

class EQ_Equipment
{
public:
//EQLIB_OBJECT EQ_Equipment::EQ_Equipment(void);
//EQLIB_OBJECT int EQ_Equipment::IsInstrument(void);
//EQLIB_OBJECT int EQ_Equipment::IsWeapon(void);
//EQLIB_OBJECT void EQ_Equipment::SendTextRequestMsg(void);
};

class EQ_Item
{
public:
//EQLIB_OBJECT bool EQ_Item::IsSpecialNoDrop(void);
//EQLIB_OBJECT char * EQ_Item::ValueSBuy(float,long);
//EQLIB_OBJECT char * EQ_Item::ValueSRent(void);
//EQLIB_OBJECT char * EQ_Item::ValueSSell(float,long);
//EQLIB_OBJECT int EQ_Item::Copper(void);
//EQLIB_OBJECT int EQ_Item::Gold(void);
//EQLIB_OBJECT int EQ_Item::Platinum(void);
//EQLIB_OBJECT int EQ_Item::Silver(void);
//EQLIB_OBJECT long EQ_Item::ValueSellMerchant(float,long);
//EQLIB_OBJECT bool EQ_Item::IsStackable(void); // Valerian 12-20-2004 

//EQLIB_OBJECT char * EQ_Item::GetItemLinkHash(char *, int); // Lax 11-14-2003
//EQLIB_OBJECT int EQ_Item::CanDrop(int); // Lax 04-22-2004
ITEMINFO Data;
};

class EQ_LoadingS
{
public:
//EQLIB_OBJECT EQ_LoadingS::~EQ_LoadingS(void);
//EQLIB_OBJECT EQ_LoadingS::EQ_LoadingS(void);
//EQLIB_OBJECT void EQ_LoadingS::draw(void);
//EQLIB_OBJECT void EQ_LoadingS::DrawBackground(struct T3D_XYZ *);
//EQLIB_OBJECT void EQ_LoadingS::SetProgressBar(int,char const *);
//EQLIB_OBJECT void EQ_LoadingS::WriteTextHD(char *,int,int,int);
// virtual
//EQLIB_OBJECT void EQ_LoadingS::Activate(void);
//EQLIB_OBJECT void EQ_LoadingS::Deactivate(void);
//EQLIB_OBJECT void EQ_LoadingS::DefineImages(void);
};

class EQ_Note
{
public:
//EQLIB_OBJECT EQ_Note::~EQ_Note(void);
//EQLIB_OBJECT EQ_Note::EQ_Note(void);
//EQLIB_OBJECT void EQ_Note::SendTextRequestMsg(void);
};

class EQ_PC
{
public:
//EQLIB_OBJECT EQ_PC::~EQ_PC(void);
//EQLIB_OBJECT EQ_PC::EQ_PC(class EQ_PC *);
//EQLIB_OBJECT int EQ_PC::BitchCanTrain(int,int,int);
//EQLIB_OBJECT int EQ_PC::CheckDupLoreItems(void);
//EQLIB_OBJECT int EQ_PC::checkLang(int);
//EQLIB_OBJECT int EQ_PC::CostToTrain(int,float,int);
//EQLIB_OBJECT int EQ_PC::DelLoreItemDup(int,int,int,class EQ_Item *);
//EQLIB_OBJECT int EQ_PC::GetArmorType(int);
//EQLIB_OBJECT int EQ_PC::HandleMoney(long);
//EQLIB_OBJECT int EQ_PC::IsAGroupMember(char *);
//EQLIB_OBJECT int EQ_PC::MaxAirSupply(void);
//EQLIB_OBJECT int EQ_PC::numInParty(void);
//EQLIB_OBJECT static class EQ_PC * EQ_PC::top;
//EQLIB_OBJECT unsigned char EQ_PC::AtSkillLimit(int);
//EQLIB_OBJECT unsigned char EQ_PC::RemoveMyAffect(int);
//EQLIB_OBJECT unsigned long EQ_PC::GetArmorTint(int);
//EQLIB_OBJECT unsigned long EQ_PC::GetBodyTint(int);
//EQLIB_OBJECT void EQ_PC::CheckForGroupChanges(void);
//EQLIB_OBJECT void EQ_PC::CheckForLanguageImprovement(unsigned char,unsigned char);
//EQLIB_OBJECT void EQ_PC::CheckSkillImprove(int,float);
//EQLIB_OBJECT void EQ_PC::ClearSharedVault(void);
//EQLIB_OBJECT void EQ_PC::DestroyHeldItemOrMoney(void);
//EQLIB_OBJECT void EQ_PC::DetermineQuestExpGained(int);
//EQLIB_OBJECT void EQ_PC::EmptyPossessionSlots(void);
//EQLIB_OBJECT void EQ_PC::InitializeNewPCVariables(int);
//EQLIB_OBJECT void EQ_PC::InitPlayerStart(unsigned int,unsigned char,int);
//EQLIB_OBJECT void EQ_PC::PrepareForRepop(int);
//EQLIB_OBJECT void EQ_PC::ProcessAirSupply(void);
//EQLIB_OBJECT void EQ_PC::ProcessFatigue(void);
//EQLIB_OBJECT void EQ_PC::RefitNewbieEQ(void);
//EQLIB_OBJECT void EQ_PC::RefreshMe(int);
//EQLIB_OBJECT void EQ_PC::SetArmorTint(int,unsigned long);
//EQLIB_OBJECT void EQ_PC::SetArmorType(int,int);
//EQLIB_OBJECT void EQ_PC::SetFatigue(int);
//EQLIB_OBJECT void EQ_PC::UnpackMyNetPC(char *,int);
//EQLIB_OBJECT unsigned long EQ_PC::GetItemTimerValue(class EQ_Item *);
};

class EQ_Skill
{
public:
//EQLIB_OBJECT EQ_Skill::~EQ_Skill(void);
//EQLIB_OBJECT EQ_Skill::EQ_Skill(int);
};

class EQ_Spell
{
public:
//EQLIB_OBJECT EQ_Spell::~EQ_Spell(void);
//EQLIB_OBJECT EQ_Spell::EQ_Spell(char *);
//EQLIB_OBJECT bool EQ_Spell::IsStackableDot(void)const;
//EQLIB_OBJECT int EQ_Spell::IsPermIllusionSpell(void)const;
//EQLIB_OBJECT int EQ_Spell::SpellUsesDragonBreathEffect(void);
//EQLIB_OBJECT static bool __cdecl EQ_Spell::IsSPAIgnoredByStacking(int);
//EQLIB_OBJECT unsigned char EQ_Spell::SpellAffects(int)const;
SPELL Data;
};

class EQAnimation
{
public:
//EQLIB_OBJECT EQAnimation::~EQAnimation(void);
//EQLIB_OBJECT EQAnimation::EQAnimation(void);
};

class EQEffect
{
public:
//EQLIB_OBJECT EQEffect::~EQEffect(void);
//EQLIB_OBJECT EQEffect::EQEffect(class EQEffect *,char *,int,struct _EQLOC *,class EQPlayer *,class EQMissile *,struct _EQRGB *,float,int,int,float,float);
//EQLIB_OBJECT static class EQEffect * EQEffect::top;
};

class EqEmitterData
{
public:
//EQLIB_OBJECT EqEmitterData::EqEmitterData(void);
//EQLIB_OBJECT void EqEmitterData::SetLoadString(char *);
};

class EQHSprite
{
public:
//EQLIB_OBJECT EQHSprite::~EQHSprite(void);
//EQLIB_OBJECT EQHSprite::EQHSprite(char *,struct T3D_tagACTORINSTANCE *,class EQPlayer *);
//EQLIB_OBJECT bool EQHSprite::GetAnimationTrackPtr(char *,char *,int,int,unsigned char,int);
//EQLIB_OBJECT class EQHSprite * EQHSprite::get_object(char *);
//EQLIB_OBJECT static class EQHSprite * EQHSprite::top;
};

class EQItemList
{
public:
//EQLIB_OBJECT EQItemList::~EQItemList(void);
//EQLIB_OBJECT EQItemList::EQItemList(void);
//EQLIB_OBJECT class EQItemList * EQItemList::get_item(long);
//EQLIB_OBJECT class EQItemList * EQItemList::is_item_actor(struct T3D_tagACTORINSTANCE *);
//EQLIB_OBJECT static class EQItemList * EQItemList::top;
};

class EQMissile
{
public:
//EQLIB_OBJECT EQMissile::~EQMissile(void);
//EQLIB_OBJECT EQMissile::EQMissile(class EQ_Equipment *,class EQPlayer *,class EQMissile *,char *,unsigned char,unsigned int);
//EQLIB_OBJECT class EQMissile * EQMissile::is_missile_actor(struct T3D_tagACTORINSTANCE *);
//EQLIB_OBJECT static class EQMissile * EQMissile::top;
//EQLIB_OBJECT void EQMissile::CleanUpMyEffects(void);
//EQLIB_OBJECT void EQMissile::HitActor(struct T3D_tagACTORINSTANCE *,bool);
//EQLIB_OBJECT void EQMissile::LeaveTrail(void);
//EQLIB_OBJECT void EQMissile::MissileAI(void);
//EQLIB_OBJECT void EQMissile::ProcessMissile(void);
};

class EqMobileEmitter
{
public:
//EQLIB_OBJECT EqMobileEmitter::~EqMobileEmitter(void);
//EQLIB_OBJECT EqMobileEmitter::EqMobileEmitter(class EqSoundManager *);
//EQLIB_OBJECT void EqMobileEmitter::Move(float,float,float);
//EQLIB_OBJECT void EqMobileEmitter::SetNpcHeight(float);
//EQLIB_OBJECT void EqMobileEmitter::SetWave(int,char *);
};

class EQMoneyList
{
public:
//EQLIB_OBJECT EQMoneyList::~EQMoneyList(void);
//EQLIB_OBJECT EQMoneyList::EQMoneyList(void);
//EQLIB_OBJECT class EQMoneyList * EQMoneyList::get_money(long);
//EQLIB_OBJECT static class EQMoneyList * EQMoneyList::top;
};

class EQNewPlayerAnimation
{
public:
//EQLIB_OBJECT static void __cdecl EQNewPlayerAnimation::InitAnimationData(void);
};

class EQObject
{
public:
//EQLIB_OBJECT EQObject::~EQObject(void);
//EQLIB_OBJECT EQObject::EQObject(class EQObject *,class EQPlayer *,char *,char *);
//EQLIB_OBJECT static class EQObject * EQObject::top;
};

class EQOldPlayerAnimation
{
public:
//EQLIB_OBJECT EQOldPlayerAnimation::EQOldPlayerAnimation(class EQPlayer *);
//EQLIB_OBJECT static void __cdecl EQOldPlayerAnimation::InitAnimationData(void);
// virtual
//EQLIB_OBJECT bool EQOldPlayerAnimation::RequestAnimation(unsigned short,bool,bool,float,unsigned char);
//EQLIB_OBJECT bool EQOldPlayerAnimation::RequestAnimation(unsigned short,bool,bool,float,unsigned char,unsigned char);
//EQLIB_OBJECT int EQOldPlayerAnimation::GetAnimNum(int,int,int,float *,unsigned char);
//EQLIB_OBJECT void EQOldPlayerAnimation::InitAnimationTracks(class EQHSprite *,struct T3D_tagACTORINSTANCE *);
//EQLIB_OBJECT void EQOldPlayerAnimation::PlayAnimationSound(int);
//EQLIB_OBJECT void EQOldPlayerAnimation::ProcessAnimation(bool,bool);
// private
//EQLIB_OBJECT bool EQOldPlayerAnimation::AnimationIsAggressive(int);
//EQLIB_OBJECT bool EQOldPlayerAnimation::InterruptCurrentAnimation(int,unsigned char);
//EQLIB_OBJECT bool EQOldPlayerAnimation::IsIdleAnimation(int);
//EQLIB_OBJECT bool EQOldPlayerAnimation::IsSocialAnimation(int);
//EQLIB_OBJECT bool EQOldPlayerAnimation::IsStandAnimation(int);
//EQLIB_OBJECT static bool * EQOldPlayerAnimation::mAnimAllowsSeparateLower;
//EQLIB_OBJECT static bool * EQOldPlayerAnimation::mAnimAllowsSeparateUpper;
//EQLIB_OBJECT static bool * EQOldPlayerAnimation::mAnimInterruptable;
//EQLIB_OBJECT static char (* EQOldPlayerAnimation::mAnimationPrefix)[20];
//EQLIB_OBJECT virtual bool EQOldPlayerAnimation::GetAlternateAnimTag(char *,char *,bool);
//EQLIB_OBJECT void EQOldPlayerAnimation::ChangeAttachmentAnimationTrackSpeeds(bool,float);
//EQLIB_OBJECT void EQOldPlayerAnimation::PlayAttachmentAnimationTracks(int,int,bool,bool,float,bool,unsigned char);
};

class EQPlayer
{
public:
//EQLIB_OBJECT EQPlayer::~EQPlayer(void);
//EQLIB_OBJECT EQPlayer::EQPlayer(class EQPlayer *,unsigned char,unsigned int,unsigned char,char *);
//EQLIB_OBJECT bool EQPlayer::AllowedToAttack(class EQPlayer *,int);
//EQLIB_OBJECT bool EQPlayer::CanChangeForm(int,unsigned char);
//EQLIB_OBJECT bool EQPlayer::CanIFitHere(float,float,float);
//EQLIB_OBJECT bool EQPlayer::CanIHit(class EQPlayer *,float);
//EQLIB_OBJECT bool EQPlayer::GetBoneCoords(struct T3D_DAG *,struct _EQLOC *);
//EQLIB_OBJECT bool EQPlayer::IsAMount(void);
//EQLIB_OBJECT bool EQPlayer::IsFlyer(void);
//EQLIB_OBJECT bool EQPlayer::IsInvisible(class EQPlayer *);
//EQLIB_OBJECT bool EQPlayer::IsInvited(void);
//EQLIB_OBJECT bool EQPlayer::IsRoleplaying(void);
//EQLIB_OBJECT bool EQPlayer::IsUntexturedHorse(void);
//EQLIB_OBJECT bool EQPlayer::IWasHit(struct _EQMissileHitinfo *);
//EQLIB_OBJECT bool EQPlayer::MyFeetAreOnGround(void);
//EQLIB_OBJECT bool EQPlayer::SetNameSpriteTint(void);
//EQLIB_OBJECT bool EQPlayer::UpdatePlayerActor(void);
//EQLIB_OBJECT bool const EQPlayer::HasInvalidRiderTexture(void)const;
//EQLIB_OBJECT float EQPlayer::GetDefaultHeight(int,unsigned char);
//EQLIB_OBJECT float EQPlayer::GetPlayerFloorHeight(float,float,float,unsigned char);
//EQLIB_OBJECT int EQPlayer::AimAtTarget(class EQPlayer *,class EQMissile *);
//EQLIB_OBJECT int EQPlayer::AttachPlayerToPlayerBone(class EQPlayer *,struct T3D_DAG *);
//EQLIB_OBJECT int EQPlayer::CanBeBald(void);
//EQLIB_OBJECT int EQPlayer::CheckForJump(void);
//EQLIB_OBJECT int EQPlayer::DoAttack(unsigned char,unsigned char,class EQPlayer *);
//EQLIB_OBJECT int EQPlayer::GetAlternateTrackNumber(int,unsigned char *);
//EQLIB_OBJECT int EQPlayer::GetArmorType(int);
//EQLIB_OBJECT int EQPlayer::GetAttachedHelmITNum(int,int *);
//EQLIB_OBJECT int EQPlayer::GetGuild(void)const;
//EQLIB_OBJECT int EQPlayer::GetRaceSexITOffset(void);
//EQLIB_OBJECT int EQPlayer::IsValidTeleport(float,float,float,float,float);
//EQLIB_OBJECT int EQPlayer::LegalPlayerRace(int);
//EQLIB_OBJECT int EQPlayer::Levitating(void);
//EQLIB_OBJECT int EQPlayer::MountableRace(void);
//EQLIB_OBJECT int EQPlayer::MovePlayer(void);
//EQLIB_OBJECT int EQPlayer::NotOnSameDeity(class EQPlayer *,class EQ_Spell *);
//EQLIB_OBJECT int EQPlayer::ReplaceSpecialCloakMaterials(void);
//EQLIB_OBJECT int EQPlayer::SetEyeMaterial(unsigned char,int);
//EQLIB_OBJECT int EQPlayer::SetFHEB(unsigned char,unsigned char);
//EQLIB_OBJECT int EQPlayer::SetFHEB_Color(unsigned char,unsigned char);
//EQLIB_OBJECT int EQPlayer::SetHairOrBeard(int);
//EQLIB_OBJECT int EQPlayer::SetNameSpriteState(bool);
//EQLIB_OBJECT int EQPlayer::SetPlayerPitchType(void);
//EQLIB_OBJECT int EQPlayer::SwapBody(int,int);
//EQLIB_OBJECT int EQPlayer::SwapFace(int,int);
//EQLIB_OBJECT int EQPlayer::SwapHead(int,int,unsigned long,int);
//EQLIB_OBJECT int EQPlayer::SwapMaterial(int,int,int,int,unsigned char);
//EQLIB_OBJECT int EQPlayer::SwapNPCMaterials(void);
//EQLIB_OBJECT static class EQPlayer * __cdecl EQPlayer::GetClosestPlayerFromPartialName(char *,class EQPlayer *);
//EQLIB_OBJECT static class EQPlayer * __cdecl EQPlayer::GetPlayerFromPartialName(char *);
//EQLIB_OBJECT static class EQPlayer * __cdecl EQPlayer::IsPlayerActor(struct T3D_tagACTORINSTANCE *);
//EQLIB_OBJECT static class EQPlayer *__cdecl EQPlayer::GetPlayerFromName(char const *);
//EQLIB_OBJECT static void __cdecl EQPlayer::ComputeSpecialHeights(int,float *,float *,float *,float *,bool);
//EQLIB_OBJECT static void __cdecl EQPlayer::GetPCActorTag(char *,unsigned int,unsigned char);
//EQLIB_OBJECT static void __cdecl EQPlayer::TackOnNeuterChar(char *,unsigned int);
//EQLIB_OBJECT static void __cdecl EQPlayer::UpdateAllPlayersVisibility(void);
//EQLIB_OBJECT struct T3D_DAG * EQPlayer::GetBonePointerByITS(int,int);
//EQLIB_OBJECT struct T3D_POINTLIGHT * EQPlayer::CreateUserLight(struct T3D_LIGHTDEFINITION *,int);
//EQLIB_OBJECT unsigned char EQPlayer::DoTeleport(char *,int);
////EQLIB_OBJECT unsigned char EQPlayer::DoTeleportB(int,float,float,float,float,char *,enum ZONE_REQ_REASON);
//EQLIB_OBJECT unsigned char EQPlayer::GetBaseFaceNbr(int,unsigned char *);
//EQLIB_OBJECT unsigned char EQPlayer::GetNearestActorTag(char *,void *);
//EQLIB_OBJECT unsigned char EQPlayer::HandleAmmo(void);
//EQLIB_OBJECT unsigned char EQPlayer::HasAttachedBeard(void);
//EQLIB_OBJECT unsigned char EQPlayer::HasAttachedHair(void);
//EQLIB_OBJECT unsigned char EQPlayer::SkillUsed(unsigned char);
//EQLIB_OBJECT unsigned char EQPlayer::UpdateItemSlot(unsigned char,char *,int);
//EQLIB_OBJECT unsigned int EQPlayer::CalcAnimLength(int);
//EQLIB_OBJECT unsigned int EQPlayer::ModifyAttackSpeed(unsigned int,int);
//EQLIB_OBJECT unsigned long EQPlayer::GetArmorTint(int);
//EQLIB_OBJECT void EQPlayer::BodyEnvironmentChange(unsigned char);
//EQLIB_OBJECT void EQPlayer::ChangeHeight(float);
//EQLIB_OBJECT void EQPlayer::ChangeLight(void);
//EQLIB_OBJECT void EQPlayer::ChangeNoGravity(int);
//EQLIB_OBJECT void EQPlayer::ChangePosition(unsigned char);
//EQLIB_OBJECT void EQPlayer::CheckForUnderFloor(void);
//EQLIB_OBJECT void EQPlayer::CleanUpMyEffects(void);
//EQLIB_OBJECT void EQPlayer::CleanUpTarget(void);
//EQLIB_OBJECT void EQPlayer::CleanUpVehicle(void);
//EQLIB_OBJECT void EQPlayer::DeleteMyMissiles(void);
//EQLIB_OBJECT void EQPlayer::Dismount(void);
//EQLIB_OBJECT void EQPlayer::DisplayWeaponsAndArmor(void);
//EQLIB_OBJECT void EQPlayer::do_change_form(struct chngForm *);
//EQLIB_OBJECT void EQPlayer::DoCamAi(void);
//EQLIB_OBJECT void EQPlayer::DoClassRandomAnimation(void);
//EQLIB_OBJECT void EQPlayer::DoFloorCheck(void);
//EQLIB_OBJECT void EQPlayer::DoItemSlot(int);
//EQLIB_OBJECT void EQPlayer::DoSwimJump(unsigned char);
//EQLIB_OBJECT void EQPlayer::FacePlayer(class EQPlayer *);
//EQLIB_OBJECT void EQPlayer::FeetEnvironmentChange(unsigned char);
//EQLIB_OBJECT void EQPlayer::FollowPlayerAI(void);
//EQLIB_OBJECT void EQPlayer::ForceInvisible(bool);
//EQLIB_OBJECT void EQPlayer::GetActorTag(char *);
//EQLIB_OBJECT void EQPlayer::GetAllowedHairColorIndexRange(int,int *,int *);
//EQLIB_OBJECT void EQPlayer::GetConscious(void);
//EQLIB_OBJECT void EQPlayer::HandleMaterialEx(int,unsigned int,unsigned int,unsigned long,int);
//EQLIB_OBJECT void EQPlayer::HandoverControlToZoneserver(void);
//EQLIB_OBJECT void EQPlayer::HeadEnvironmentChange(unsigned char);
//EQLIB_OBJECT void EQPlayer::HideOrShowAttachedHair(void);
//EQLIB_OBJECT void EQPlayer::IDied(struct _EQPlayerDeath *);
//EQLIB_OBJECT void EQPlayer::IHaveFallen(float);
//EQLIB_OBJECT void EQPlayer::InitSneakMod(void);
//EQLIB_OBJECT void EQPlayer::KnockedOut(void);
//EQLIB_OBJECT void EQPlayer::MakeRiderMountUp(void);
//EQLIB_OBJECT void EQPlayer::MountEQPlayer(class EQPlayer *);
//EQLIB_OBJECT void EQPlayer::PlaySoundA(int);
//EQLIB_OBJECT void EQPlayer::PositionOnFloor(void);
//EQLIB_OBJECT void EQPlayer::PushAlongHeading(float);
//EQLIB_OBJECT void EQPlayer::PutPlayerOnFloor(void);
//EQLIB_OBJECT void EQPlayer::ResetVariables(void);
//EQLIB_OBJECT void EQPlayer::SetAccel(float,int);
//EQLIB_OBJECT void EQPlayer::SetAfk(int);
//EQLIB_OBJECT void EQPlayer::SetAndReserveID(unsigned int);
//EQLIB_OBJECT void EQPlayer::SetAnimVariation(void);
//EQLIB_OBJECT void EQPlayer::SetArmorTint(int,unsigned long);
//EQLIB_OBJECT void EQPlayer::SetArmorType(int,int);
//EQLIB_OBJECT void EQPlayer::SetCurrentLoopSound(int);
//EQLIB_OBJECT void EQPlayer::SetDefaultFacialFeaturesByFace(int,unsigned char,unsigned char);
//EQLIB_OBJECT void EQPlayer::SetDefaultITAttachments(int);
//EQLIB_OBJECT void EQPlayer::SetHeights(void);
//EQLIB_OBJECT void EQPlayer::SetInvited(bool);
//EQLIB_OBJECT void EQPlayer::SetPlayerConstantAmbient(struct T3D_RGB *);
//EQLIB_OBJECT void EQPlayer::SetRace(int);
//EQLIB_OBJECT void EQPlayer::SetSounds(void);
//EQLIB_OBJECT void EQPlayer::SetToRandomRace(void);
//EQLIB_OBJECT void EQPlayer::TouchingSwitch(void);
//EQLIB_OBJECT void EQPlayer::TriggerSpellEffect(struct _EQMissileHitinfo *);
//EQLIB_OBJECT void EQPlayer::TurnOffAutoFollow(void);
//EQLIB_OBJECT void EQPlayer::UpdateAppearance(void);
//EQLIB_OBJECT void EQPlayer::UpdateBonePointers(void);
//EQLIB_OBJECT void EQPlayer::UpdateNameSprite(void);
//EQLIB_OBJECT void EQPlayer::UpdatePlayerVisibility(void);
// private
//EQLIB_OBJECT int EQPlayer::IdUsed(unsigned int);
//EQLIB_OBJECT static class EQPlayer * EQPlayer::mTop;
//EQLIB_OBJECT struct S3D_STRINGSPRITE * EQPlayer::ChangeBoneStringSprite(struct T3D_DAG *,char *);
//EQLIB_OBJECT unsigned char EQPlayer::GetAlternateAnimVariation(int,unsigned char);
//EQLIB_OBJECT unsigned int EQPlayer::GetUnusedID(void);
//EQLIB_OBJECT void EQPlayer::FindDefaultEyeMaterialIndexes(void);
//EQLIB_OBJECT void EQPlayer::InitializeIDArray(void);
SPAWNINFO Data;
};

class EQPMInfo
{
public:
//EQLIB_OBJECT EQPMInfo::~EQPMInfo(void);
//EQLIB_OBJECT EQPMInfo::EQPMInfo(char *);
//EQLIB_OBJECT void EQPMInfo::SetApplyGravity(bool);
	ACTORINFO Data;
};

class EqSoundManager
{
public:
//EQLIB_OBJECT EqSoundManager::~EqSoundManager(void);
////EQLIB_OBJECT EqSoundManager::EqSoundManager(bool,bool,enum SpeakerType);
//EQLIB_OBJECT bool EqSoundManager::EmitterLoad(char *);
//EQLIB_OBJECT bool EqSoundManager::WaveIsPlaying(int);
//EQLIB_OBJECT class SoundAsset * EqSoundManager::WaveGet(int);
////EQLIB_OBJECT enum EnvironmentType EqSoundManager::GetListenerEnvironment(void);
//EQLIB_OBJECT void EqSoundManager::EmitterAdd(class EqEmitterData *);
//EQLIB_OBJECT void EqSoundManager::EmitterSetIndoors(bool);
//EQLIB_OBJECT void EqSoundManager::EmitterSetNight(bool);
//EQLIB_OBJECT void EqSoundManager::EmitterSetRaining(bool);
//EQLIB_OBJECT void EqSoundManager::EmitterSetUserDisabled(bool);
//EQLIB_OBJECT void EqSoundManager::EmitterSetWind(bool);
//EQLIB_OBJECT void EqSoundManager::GiveTime(void);
//EQLIB_OBJECT void EqSoundManager::SetCurrentZone(char *);
//EQLIB_OBJECT void EqSoundManager::SetEffectsLevel(float);
////EQLIB_OBJECT void EqSoundManager::SetListenerEnvironment(enum EnvironmentType);
//EQLIB_OBJECT void EqSoundManager::SetListenerEnvironmentHigh(void);
//EQLIB_OBJECT void EqSoundManager::SetListenerEnvironmentLow(void);
//EQLIB_OBJECT void EqSoundManager::SetListenerEnvironmentOutside(void);
//EQLIB_OBJECT void EqSoundManager::SetListenerLocation(float,float,float,float);
//EQLIB_OBJECT void EqSoundManager::SetMixAhead(int);
//EQLIB_OBJECT void EqSoundManager::SetMusicSelection(int,bool);
//EQLIB_OBJECT void EqSoundManager::SetMusicVolume(float);
//EQLIB_OBJECT void EqSoundManager::SetWaveVolume(float);
//EQLIB_OBJECT void EqSoundManager::WaveLoad(char *,int,bool);
//EQLIB_OBJECT void EqSoundManager::WavePlay(int,class SoundControl *);
//EQLIB_OBJECT void EqSoundManager::WaveStop(int);
// private
//EQLIB_OBJECT class SoundAsset * EqSoundManager::GetAsset(char *);
//EQLIB_OBJECT class SoundAsset * EqSoundManager::OldMp3GetSelection(int);
//EQLIB_OBJECT class SoundEmitter * EqSoundManager::CreateOldEmitter(int,float,float,float,int,int,int,float,int,int,int);
//EQLIB_OBJECT int EqSoundManager::GetMusicId(void);
//EQLIB_OBJECT void EqSoundManager::LoadGlobalEmitters(void);
//EQLIB_OBJECT void EqSoundManager::LoadGlobalMusic(void);
//EQLIB_OBJECT void EqSoundManager::LoadGlobalWaves(void);
//EQLIB_OBJECT void EqSoundManager::LoadListOfWaveFiles(char * *,int);
//EQLIB_OBJECT void EqSoundManager::LoadOldEmitters(void);
//EQLIB_OBJECT void EqSoundManager::OldMp3ClearSelections(void);
//EQLIB_OBJECT void EqSoundManager::OldMp3Init(void);
//EQLIB_OBJECT void EqSoundManager::OldMp3Terminate(void);
//EQLIB_OBJECT void EqSoundManager::ReleaseZoneSpecificEmitters(void);
//EQLIB_OBJECT void EqSoundManager::ReleaseZoneSpecificMidi(void);
//EQLIB_OBJECT void EqSoundManager::ReleaseZoneSpecificWaves(void);
//EQLIB_OBJECT void EqSoundManager::UpdateEmitterStates(void);
};

class EQSwitch
{
public:
//EQLIB_OBJECT EQSwitch::~EQSwitch(void);
//EQLIB_OBJECT EQSwitch::EQSwitch(char *,bool);
//EQLIB_OBJECT EQSwitch::EQSwitch(struct _EQClientSwitch *);
//EQLIB_OBJECT EQSwitch::EQSwitch(struct OldDiskSwitch *,bool);
//EQLIB_OBJECT float EQSwitch::GetCustomMoveDistance(void);
//EQLIB_OBJECT float EQSwitch::TopSpeed(float *);
//EQLIB_OBJECT int EQSwitch::GetSwitchDamage(void);
//EQLIB_OBJECT unsigned char EQSwitch::SwitchIsNotUsable(int);
//EQLIB_OBJECT unsigned char EQSwitch::SwitchWasOpened(int,int,class EQPlayer *,bool *);
//EQLIB_OBJECT unsigned char EQSwitch::SwitchWasOpenedActual(int,int,class EQPlayer *,bool *);
//EQLIB_OBJECT unsigned int EQSwitch::RepopFrequency(void);
//EQLIB_OBJECT void EQSwitch::ChangeState(unsigned char,class EQPlayer *,bool);
//EQLIB_OBJECT void EQSwitch::LoadSwitchSounds(int);
//EQLIB_OBJECT void EQSwitch::PostInit(void);
//EQLIB_OBJECT void EQSwitch::PreInit(void);
//EQLIB_OBJECT void EQSwitch::RepopSwitch(void);
//EQLIB_OBJECT void EQSwitch::ResetSwitchState(unsigned char);
//EQLIB_OBJECT void EQSwitch::UseSwitch(unsigned int,int,int);
};

class EqSwitchManager
{
public:
//EQLIB_OBJECT EqSwitchManager::~EqSwitchManager(void);
//EQLIB_OBJECT EqSwitchManager::EqSwitchManager(void);
//EQLIB_OBJECT class EQSwitch * EqSwitchManager::GetSwitch(int);
//EQLIB_OBJECT class EQSwitch * EqSwitchManager::GetSwitchByActor(struct T3D_tagACTORINSTANCE *);
//EQLIB_OBJECT class EQSwitch * EqSwitchManager::GetSwitchById(int,bool);
//EQLIB_OBJECT int EqSwitchManager::GetCount(void);
//EQLIB_OBJECT void EqSwitchManager::AddSwitch(class EQSwitch *);
//EQLIB_OBJECT void EqSwitchManager::DeleteAll(void);
//EQLIB_OBJECT void EqSwitchManager::Load(char *,bool);
// protected
//EQLIB_OBJECT void EqSwitchManager::LoadOld(char *,bool);
};

class EQUtil
{
public:
//EQLIB_OBJECT static char * __cdecl EQUtil::FormatCharName(char *,char *,int);
};

class EQWorldData
{
public:
//EQLIB_OBJECT EQWorldData::EQWorldData(void);
//EQLIB_OBJECT bool EQWorldData::GetGeometryNameFromIndex(EQZoneIndex,char *)const;
//EQLIB_OBJECT bool EQWorldData::IsFlagSet(EQZoneIndex,unsigned long)const;
//EQLIB_OBJECT bool EQWorldData::IsNewbieZone(EQZoneIndex)const;
//EQLIB_OBJECT bool EQWorldData::IsNoAirZone(EQZoneIndex)const;
//EQLIB_OBJECT bool EQWorldData::IsNoBindZone(EQZoneIndex)const;
//EQLIB_OBJECT bool const EQWorldData::AddZone(enum EQExpansion,EQZoneIndex,char const *,char const *,int,unsigned long,int,int);
////EQLIB_OBJECT enum EQExpansion const EQWorldData::ExpansionZone(EQZoneIndex)const;
//EQLIB_OBJECT DWORD EQWorldData::GetIndexFromZoneName(char const *); // EQZoneIndex
//EQLIB_OBJECT int EQWorldData::GetMinLevel(EQZoneIndex)const;
//EQLIB_OBJECT void EQWorldData::AdvanceTime(unsigned int);
//EQLIB_OBJECT void EQWorldData::CurrentGameTime(char *);
//EQLIB_OBJECT void EQWorldData::GetFullZoneName(EQZoneIndex,char *);
// virtual
//EQLIB_OBJECT EQWorldData::~EQWorldData(void);
////EQLIB_OBJECT void * EQWorldData::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * EQWorldData::`vector deleting destructor'(unsigned int);
};

class EQZoneInfo
{
public:
//EQLIB_OBJECT EQZoneInfo::EQZoneInfo(enum EQExpansion,EQZoneIndex,char const *,char const *,int,unsigned long,int,int);
// virtual
//EQLIB_OBJECT EQZoneInfo::~EQZoneInfo(void);
////EQLIB_OBJECT void * EQZoneInfo::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * EQZoneInfo::`vector deleting destructor'(unsigned int);
};

class FilePath
{
public:
//EQLIB_OBJECT FilePath::~FilePath(void);
//EQLIB_OBJECT FilePath::FilePath(char const *);
//EQLIB_OBJECT FilePath::FilePath(class SharedString const &);
//EQLIB_OBJECT FilePath::FilePath(void);
};

class flex_unit
{
public:
//EQLIB_OBJECT flex_unit::~flex_unit(void);
//EQLIB_OBJECT flex_unit::flex_unit(void);
//EQLIB_OBJECT unsigned int flex_unit::get(unsigned int)const;
//EQLIB_OBJECT void flex_unit::clear(void);
//EQLIB_OBJECT void flex_unit::fast_mul(class flex_unit &,class flex_unit &,unsigned int);
//EQLIB_OBJECT void flex_unit::reserve(unsigned int);
//EQLIB_OBJECT void flex_unit::set(unsigned int,unsigned int);
};

class GrammarRulesClass
{
public:
//EQLIB_OBJECT GrammarRulesClass::GrammarRulesClass(void);
//EQLIB_OBJECT char * GrammarRulesClass::Resolve(int,int,char *,char *);
// virtual
//EQLIB_OBJECT GrammarRulesClass::~GrammarRulesClass(void);
////EQLIB_OBJECT void * GrammarRulesClass::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * GrammarRulesClass::`vector deleting destructor'(unsigned int);
// private
//EQLIB_OBJECT char * GrammarRulesClass::Parse(char *);
//EQLIB_OBJECT void GrammarRulesClass::RuleDe1(char *,char *);
//EQLIB_OBJECT void GrammarRulesClass::RuleEn1(char *,char *);
//EQLIB_OBJECT void GrammarRulesClass::RuleEn2(char *,char *);
//EQLIB_OBJECT void GrammarRulesClass::RuleEn3(char *,char *,char *,char *);
//EQLIB_OBJECT void GrammarRulesClass::RuleEn4(char *,char *,char *,char *);
//EQLIB_OBJECT void GrammarRulesClass::RuleFr1(char *,char *,char *,char *);
//EQLIB_OBJECT void GrammarRulesClass::RuleKo1(char *,char *,char *,char *);
};

class GuildMember
{
public:
//EQLIB_OBJECT GuildMember::GuildMember(void);
};

class JournalNPC
{
public:
//EQLIB_OBJECT JournalNPC::~JournalNPC(void);
//EQLIB_OBJECT JournalNPC::JournalNPC(void);
//EQLIB_OBJECT int JournalNPC::AddEntry(long,float,float,float,char *,int);
//EQLIB_OBJECT int JournalNPC::AddEntry(long,float,float,float,int,int);
//EQLIB_OBJECT int JournalNPC::DeleteEntryByHash(int);
//EQLIB_OBJECT int JournalNPC::DeleteEntryByIndex(int);
//EQLIB_OBJECT int JournalNPC::FindThisText(char *,bool,int);
//EQLIB_OBJECT int JournalNPC::ReadEntry(struct _iobuf *);
//EQLIB_OBJECT static char * __cdecl JournalNPC::GetText(int);
//EQLIB_OBJECT struct JournalEntry * JournalNPC::FindEntryByCategory(int,int);
//EQLIB_OBJECT struct JournalEntry * JournalNPC::FindEntryByHash(int);
//EQLIB_OBJECT struct JournalEntry * JournalNPC::GetEntry(int);
//EQLIB_OBJECT void JournalNPC::ConvertCategory(int,int);
// private
//EQLIB_OBJECT void JournalNPC::AllocateArray(void);
//EQLIB_OBJECT void JournalNPC::CleanEntries(void);
//EQLIB_OBJECT void JournalNPC::ComputeLatestTime(void);
};

class KeyCombo
{
public:
	/*
//EQLIB_OBJECT KeyCombo::KeyCombo(int);
inline //EQLIB_OBJECT KeyCombo::KeyCombo(unsigned char keycode,bool alt,bool ctrl,bool shift)
{	
	Data[3]= keycode;
	Data[0]=alt;
	Data[1]=ctrl;
	Data[2]=shift;
}
//EQLIB_OBJECT KeyCombo::KeyCombo(unsigned int,unsigned int,bool,bool,bool);
inline //EQLIB_OBJECT KeyCombo::KeyCombo(void)
{
	*(unsigned long*)&Data[0]=0;
}
inline void //EQLIB_OBJECT KeyCombo::Clear(void)
{
	*(unsigned long*)&Data[0]=0;
}
//EQLIB_OBJECT int KeyCombo::operator int(void)const;
//EQLIB_OBJECT bool KeyCombo::GetPrintableLetter(unsigned short *)const;
inline //EQLIB_OBJECT bool KeyCombo::UsesAlt(void)const
{
	return (Data[0]!=0);
}
inline //EQLIB_OBJECT bool KeyCombo::UsesCtrl(void)const
{
	return (Data[1]!=0);
}
inline //EQLIB_OBJECT bool KeyCombo::UsesShift(void)const
{
	return (Data[2]!=0);
}
//EQLIB_OBJECT class CXStr KeyCombo::GetTextDescription(void)const;
//EQLIB_OBJECT class KeyCombo const & KeyCombo::operator=(int);
inline //EQLIB_OBJECT int KeyCombo::operator==(class KeyCombo const &Combo)
{
	return ((*(unsigned long*)&Data)==(*(unsigned long*)&Combo.Data));
}
inline //EQLIB_OBJECT unsigned int KeyCombo::GetKey(void)const
{
	return Data[3];
}
*/
// private
//EQLIB_OBJECT bool KeyCombo::GetPrintableLetterFromScanCode(unsigned char,bool,bool,unsigned short *)const;
//EQLIB_OBJECT bool KeyCombo::GetPrintableLetterFromVirtualKey(unsigned int,unsigned int,bool,bool,unsigned short *)const;
//EQLIB_OBJECT bool KeyCombo::GetScanCodeFromVirtualKey(unsigned int,unsigned int,unsigned char *)const;
//EQLIB_OBJECT bool KeyCombo::GetVirtualKeyFromScanCode(unsigned char,int *)const;
	unsigned char Data[4];
};

class KeypressHandler
{
public:
//EQLIB_OBJECT KeypressHandler::~KeypressHandler(void);
//EQLIB_OBJECT KeypressHandler::KeypressHandler(void);
//EQLIB_OBJECT bool KeypressHandler::AttachAltKeyToEqCommand(class KeyCombo const &,unsigned int);
//EQLIB_OBJECT bool KeypressHandler::AttachKeyToEqCommand(class KeyCombo const &,unsigned int);
//EQLIB_OBJECT bool KeypressHandler::HandleKeyDown(class KeyCombo const &);
//EQLIB_OBJECT bool KeypressHandler::HandleKeyUp(class KeyCombo const &);
//EQLIB_OBJECT class KeyCombo const & KeypressHandler::GetAltKeyAttachedToEqCommand(unsigned int)const;
//EQLIB_OBJECT class KeyCombo const & KeypressHandler::GetKeyAttachedToEqCommand(unsigned int)const;
//EQLIB_OBJECT void KeypressHandler::ResetKeysToEqDefaults(void);
// private
//EQLIB_OBJECT bool KeypressHandler::IsReservedKey(class KeyCombo const &)const;
//EQLIB_OBJECT bool KeypressHandler::LoadAndConvertOldKeymappingFormat(unsigned int,int,class KeyCombo *);
//EQLIB_OBJECT bool KeypressHandler::LoadKeymapping(unsigned int,int,class KeyCombo *);
//EQLIB_OBJECT bool KeypressHandler::MapKeyToEqCommand(class KeyCombo const &,int,unsigned int);
//EQLIB_OBJECT class CXStr KeypressHandler::GetEqCommandSaveName(unsigned int,int)const;
//EQLIB_OBJECT void KeypressHandler::ClearCommandStateArray(void);
//EQLIB_OBJECT void KeypressHandler::LoadAndSetKeymappings(void);
//EQLIB_OBJECT void KeypressHandler::SaveKeymapping(unsigned int,class KeyCombo const &,int);
/*0x000*/   class KeyCombo NormalKey[nEQMappableCommands];
/*0x2 4*/   class KeyCombo AltKey[nEQMappableCommands];
/*0x5C8*/	char CommandState[nEQMappableCommands];
};

class LogicalPacket
{
public:
//EQLIB_OBJECT LogicalPacket::LogicalPacket(void);
// virtual
//EQLIB_OBJECT bool LogicalPacket::IsInternalPacket(void)const;
//EQLIB_OBJECT int LogicalPacket::GetRefCount(void)const;
//EQLIB_OBJECT void LogicalPacket::AddRef(void)const;
//EQLIB_OBJECT void LogicalPacket::Release(void)const;
// protected
//EQLIB_OBJECT virtual LogicalPacket::~LogicalPacket(void);
////EQLIB_OBJECT virtual void * LogicalPacket::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT virtual void * LogicalPacket::`vector deleting destructor'(unsigned int);
};

class MapViewMap
{
public:
//EQLIB_OBJECT MapViewMap::~MapViewMap(void);
//EQLIB_OBJECT MapViewMap::MapViewMap(void);
//EQLIB_OBJECT bool MapViewMap::DrawClippedLine(struct T3D_XYZ *,struct T3D_RGB,class CXRect);
//EQLIB_OBJECT bool MapViewMap::IsLayerVisible(int);
//EQLIB_OBJECT bool MapViewMap::LoadEx(char *,int);
//EQLIB_OBJECT bool MapViewMap::PointInMapViewArea(class CXPoint,class CXRect);
//EQLIB_OBJECT int MapViewMap::GetMaxZ(void);
//EQLIB_OBJECT int MapViewMap::GetMinZ(void);
//EQLIB_OBJECT unsigned long MapViewMap::GetCurrentColor(void);
//EQLIB_OBJECT unsigned long MapViewMap::GetMarkedLineColor(void);
//EQLIB_OBJECT void MapViewMap::AddLabel(float,float,float,unsigned long,int,char *);
//EQLIB_OBJECT void MapViewMap::AddPoint(float,float,float);
//EQLIB_OBJECT void MapViewMap::CalcLabelRenderOffsets(class CXRect);
//EQLIB_OBJECT void MapViewMap::Clear(void);
//EQLIB_OBJECT void MapViewMap::ClearActiveLayer(void);
//EQLIB_OBJECT void MapViewMap::Draw(class CXRect);
//EQLIB_OBJECT void MapViewMap::EndLine(float,float,float);
//EQLIB_OBJECT void MapViewMap::JoinLinesAtIntersect(bool);
//EQLIB_OBJECT void MapViewMap::Load(char *);
//EQLIB_OBJECT void MapViewMap::MoveLabel(struct _mapviewlabel *,float,float,float);
//EQLIB_OBJECT void MapViewMap::PreCalcRenderValues(void);
//EQLIB_OBJECT void MapViewMap::RecalcLabelExtents(struct _mapviewlabel *);
//EQLIB_OBJECT void MapViewMap::RemoveLabel(struct _mapviewlabel *);
//EQLIB_OBJECT void MapViewMap::RemoveLabel(void);
//EQLIB_OBJECT void MapViewMap::RemoveLine(struct _mapviewline *);
//EQLIB_OBJECT void MapViewMap::RemoveLine(void);
//EQLIB_OBJECT void MapViewMap::Save(char *);
//EQLIB_OBJECT void MapViewMap::SaveEx(char *,int);
//EQLIB_OBJECT void MapViewMap::SetCurrentColor(unsigned long);
//EQLIB_OBJECT void MapViewMap::SetMarkedLine(struct _mapviewline *);
//EQLIB_OBJECT void MapViewMap::SetMarkedLineColor(unsigned long);
//EQLIB_OBJECT void MapViewMap::SetZoneExtents(int,int,int,int);
//EQLIB_OBJECT void MapViewMap::SetZoom(float);
//EQLIB_OBJECT void MapViewMap::StartLine(float,float,float);
//EQLIB_OBJECT void MapViewMap::TransformPoint(struct T3D_XYZ *);
};

class MemoryPoolManager
{
public:
//EQLIB_OBJECT MemoryPoolManager::~MemoryPoolManager(void);
//EQLIB_OBJECT MemoryPoolManager::MemoryPoolManager(void);
//EQLIB_OBJECT void * MemoryPoolManager::Alloc(int);
//EQLIB_OBJECT void MemoryPoolManager::Free(void *);
};

class MidiInstance
{
public:
//EQLIB_OBJECT MidiInstance::MidiInstance(class SoundManager *);
// virtual
//EQLIB_OBJECT bool MidiInstance::GiveTime(void);
//EQLIB_OBJECT enum InstanceType MidiInstance::GetType(void);
//EQLIB_OBJECT void MidiInstance::AdjustVolume(float,int);
//EQLIB_OBJECT void MidiInstance::GuaranteeStopped(void);
//EQLIB_OBJECT void MidiInstance::Move(float,float,float);
//EQLIB_OBJECT void MidiInstance::Play(class SoundControl *);
// protected
//EQLIB_OBJECT virtual MidiInstance::~MidiInstance(void);
////EQLIB_OBJECT virtual void * MidiInstance::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT virtual void * MidiInstance::`vector deleting destructor'(unsigned int);
};

class monty
{
public:
//EQLIB_OBJECT monty::~monty(void);
//EQLIB_OBJECT monty::monty(class vlong const &);
//EQLIB_OBJECT class vlong monty::exp(class vlong const &,class vlong const &);
// private
//EQLIB_OBJECT void monty::mul(class vlong &,class vlong const &);
};

class Mp3Manager
{
public:
//EQLIB_OBJECT Mp3Manager::~Mp3Manager(void);
////EQLIB_OBJECT Mp3Manager::Entry::~Entry(void);
////EQLIB_OBJECT Mp3Manager::Entry::Entry(char *,char *,int,int);
//EQLIB_OBJECT Mp3Manager::Mp3Manager(class SoundManager *,class MusicManager *);
//EQLIB_OBJECT char * Mp3Manager::GetName(int);
////EQLIB_OBJECT enum Mp3Manager::SortOrder Mp3Manager::GetSort(void);
////EQLIB_OBJECT enum StreamingStatus Mp3Manager::Status(void);
//EQLIB_OBJECT float Mp3Manager::GetVolumeLevel(void);
//EQLIB_OBJECT int Mp3Manager::Add(char *);
//EQLIB_OBJECT int Mp3Manager::Count(void);
//EQLIB_OBJECT int Mp3Manager::GetPosition(void);
//EQLIB_OBJECT int Mp3Manager::GetSongLength(void);
//EQLIB_OBJECT int Mp3Manager::GetSongPosition(void);
//EQLIB_OBJECT void Mp3Manager::Back(void);
//EQLIB_OBJECT void Mp3Manager::Delete(int);
//EQLIB_OBJECT void Mp3Manager::DeleteAll(void);
//EQLIB_OBJECT void Mp3Manager::GiveTime(void);
//EQLIB_OBJECT void Mp3Manager::Next(void);
//EQLIB_OBJECT void Mp3Manager::Pause(void);
//EQLIB_OBJECT void Mp3Manager::Play(void);
//EQLIB_OBJECT void Mp3Manager::SaveList(char *);
//EQLIB_OBJECT void Mp3Manager::SetPosition(int);
//EQLIB_OBJECT void Mp3Manager::SetSongPosition(int);
//EQLIB_OBJECT void Mp3Manager::SetVolumeLevel(float);
////EQLIB_OBJECT void Mp3Manager::Sort(enum Mp3Manager::SortOrder);
//EQLIB_OBJECT void Mp3Manager::Stop(void);
// private
//EQLIB_OBJECT int Mp3Manager::InternalAdd(char *,char *,int);
};

class MusicManager
{
public:
//EQLIB_OBJECT MusicManager::~MusicManager(void);
////EQLIB_OBJECT MusicManager::MusicEntry::~MusicEntry(void);
////EQLIB_OBJECT MusicManager::MusicEntry::MusicEntry(int,class SoundAsset *,int,float,int,int,int,int,int,int);
//EQLIB_OBJECT MusicManager::MusicManager(void);
//EQLIB_OBJECT void MusicManager::Clear(class SoundAsset *);
//EQLIB_OBJECT void MusicManager::Clear(int);
//EQLIB_OBJECT void MusicManager::Enable(bool);
//EQLIB_OBJECT void MusicManager::GiveTime(void);
////EQLIB_OBJECT void MusicManager::MusicEntry::AdjustVolume(float);
////EQLIB_OBJECT void MusicManager::MusicEntry::FadeIn(float);
////EQLIB_OBJECT void MusicManager::MusicEntry::FadeOut(bool);
//EQLIB_OBJECT void MusicManager::Play(int);
//EQLIB_OBJECT void MusicManager::Set(int,class SoundAsset *,int,float,int,int,int,int,int,int);
//EQLIB_OBJECT void MusicManager::SetVolumeLevel(float);
//EQLIB_OBJECT void MusicManager::Stop(int);
};

class PacketPacker
{
public:
//EQLIB_OBJECT void PacketPacker::Disassociate(void);
//EQLIB_OBJECT void PacketPacker::Flush(void);
//EQLIB_OBJECT void PacketPacker::SendPacket(unsigned __int32,void *,int,bool);
//EQLIB_OBJECT void PacketPacker::SendStatUpdate(struct _statUpdate *,bool);
// private
////EQLIB_OBJECT void PacketPacker::AddPacketToBuffer(struct PacketPacker::PacketBuffer *,unsigned __int32,void *,int);
////EQLIB_OBJECT void PacketPacker::FlushBuffer(struct PacketPacker::PacketBuffer *);
//EQLIB_OBJECT void PacketPacker::FlushPositions(void);
//EQLIB_OBJECT void PacketPacker::ScheduleUs(void);
};

class PacketPackerManager
{
public:
//EQLIB_OBJECT static bool __cdecl PacketPackerManager::UnpackGetFirst(struct PacketPackerState *,unsigned __int32,unsigned char *,int);
//EQLIB_OBJECT static bool __cdecl PacketPackerManager::UnpackGetNext(struct PacketPackerState *);
//EQLIB_OBJECT static void __cdecl PacketPackerManager::Initialize(void);
//EQLIB_OBJECT void PacketPackerManager::RemovePacker(class PacketPacker *);
//EQLIB_OBJECT void PacketPackerManager::SetPriority(class PacketPacker *,__int64);
// private
//EQLIB_OBJECT static int * PacketPackerManager::sKnownSize;
};

class PackFile
{
public:
//EQLIB_OBJECT PackFile::~PackFile(void);
//EQLIB_OBJECT int PackFile::length(void)const;
//EQLIB_OBJECT int PackFile::read(void * const,int);
//EQLIB_OBJECT void PackFile::close(void);
};

class PackFS
{
public:
//EQLIB_OBJECT PackFS::PackFS(void);
//EQLIB_OBJECT bool PackFS::addFileSystem(class FilePath);
//EQLIB_OBJECT bool PackFS::openFile(class FilePath,class PackFile *)const;
//EQLIB_OBJECT void PackFS::removeFileSystem(class FilePath);
};

class PooledLogicalPacket
{
public:
//EQLIB_OBJECT PooledLogicalPacket::PooledLogicalPacket(class UdpManager *,int);
// virtual
//EQLIB_OBJECT int PooledLogicalPacket::GetDataLen(void)const;
//EQLIB_OBJECT void * PooledLogicalPacket::GetDataPtr(void);
//EQLIB_OBJECT void PooledLogicalPacket::AddRef(void)const;
//EQLIB_OBJECT void PooledLogicalPacket::Release(void)const;
//EQLIB_OBJECT void PooledLogicalPacket::SetDataLen(int);
//EQLIB_OBJECT void const * PooledLogicalPacket::GetDataPtr(void)const;
// protected
//EQLIB_OBJECT virtual PooledLogicalPacket::~PooledLogicalPacket(void);
////EQLIB_OBJECT virtual void * PooledLogicalPacket::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT virtual void * PooledLogicalPacket::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void PooledLogicalPacket::SetData(void const *,int,void const *,int);
};

class public_key
{
public:
//EQLIB_OBJECT public_key::~public_key(void);
//EQLIB_OBJECT public_key::public_key(void);
//EQLIB_OBJECT class vlong public_key::encrypt(class vlong &);
};

class SAmpersandEntry
{
public:
//EQLIB_OBJECT SAmpersandEntry::~SAmpersandEntry(void);
//EQLIB_OBJECT SAmpersandEntry::SAmpersandEntry(class CXStr,char);
};

class SFormattedText
{
public:
//EQLIB_OBJECT SFormattedText::~SFormattedText(void);
//EQLIB_OBJECT SFormattedText::SFormattedText(void);
////EQLIB_OBJECT void * SFormattedText::`vector deleting destructor'(unsigned int);
};

class ShareBase
{
public:
//EQLIB_OBJECT void ShareBase::removeRef(void);
// virtual
//EQLIB_OBJECT ShareBase::~ShareBase(void);
};

class SharedString
{
public:
//EQLIB_OBJECT SharedString::~SharedString(void);
//EQLIB_OBJECT SharedString::SharedString(char const *);
//EQLIB_OBJECT class SharedString & SharedString::operator=(class SharedString const &);
// protected
//EQLIB_OBJECT void SharedString::_updateTag(void)const;
};

class SHistoryElement
{
public:
//EQLIB_OBJECT SHistoryElement::~SHistoryElement(void);
//EQLIB_OBJECT SHistoryElement::SHistoryElement(void);
////EQLIB_OBJECT void * SHistoryElement::`vector deleting destructor'(unsigned int);
};

class SimpleLogicalPacket
{
public:
//EQLIB_OBJECT SimpleLogicalPacket::SimpleLogicalPacket(void const *,int);
// virtual
//EQLIB_OBJECT int SimpleLogicalPacket::GetDataLen(void)const;
//EQLIB_OBJECT void * SimpleLogicalPacket::GetDataPtr(void);
//EQLIB_OBJECT void SimpleLogicalPacket::SetDataLen(int);
//EQLIB_OBJECT void const * SimpleLogicalPacket::GetDataPtr(void)const;
// protected
//EQLIB_OBJECT virtual SimpleLogicalPacket::~SimpleLogicalPacket(void);
////EQLIB_OBJECT virtual void * SimpleLogicalPacket::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT virtual void * SimpleLogicalPacket::`vector deleting destructor'(unsigned int);
};

class SLinkInfo
{
public:
//EQLIB_OBJECT SLinkInfo::~SLinkInfo(void);
//EQLIB_OBJECT SLinkInfo::SLinkInfo(class SLinkInfo const &);
//EQLIB_OBJECT SLinkInfo::SLinkInfo(void);
//EQLIB_OBJECT class SLinkInfo & SLinkInfo::operator=(class SLinkInfo const &);
};

class SListWndCell
{
public:
//EQLIB_OBJECT SListWndCell::~SListWndCell(void);
//EQLIB_OBJECT SListWndCell::SListWndCell(void);
//EQLIB_OBJECT class SListWndCell & SListWndCell::operator=(class SListWndCell const &);
////EQLIB_OBJECT void * SListWndCell::`vector deleting destructor'(unsigned int);
};

class SListWndCellEditUpdate
{
public:
//EQLIB_OBJECT SListWndCellEditUpdate::~SListWndCellEditUpdate(void);
};

class SListWndColumn
{
public:
//EQLIB_OBJECT SListWndColumn::~SListWndColumn(void);
//EQLIB_OBJECT SListWndColumn::SListWndColumn(class CXStr,int,class CTextureAnimation *,unsigned __int32,unsigned __int32,class CTextureAnimation *,class CTextureAnimation *);
////EQLIB_OBJECT void SListWndColumn::`default constructor closure'(void);
};

class SListWndLine
{
public:
//EQLIB_OBJECT SListWndLine::~SListWndLine(void);
//EQLIB_OBJECT SListWndLine::SListWndLine(void);
//EQLIB_OBJECT class SListWndLine & SListWndLine::operator=(class SListWndLine const &);
};

class SListWndSortInfo
{
public:
//EQLIB_OBJECT SListWndSortInfo::~SListWndSortInfo(void);
};

class SoundAsset
{
public:
//EQLIB_OBJECT SoundAsset::SoundAsset(class SoundManager *,char *,char *,int);
//EQLIB_OBJECT bool SoundAsset::IsPlaying(void);
//EQLIB_OBJECT char * SoundAsset::GetName(void);
//EQLIB_OBJECT class SoundInstance * SoundAsset::Play(class SoundControl *);
////EQLIB_OBJECT enum AssetType SoundAsset::GetType(void);
//EQLIB_OBJECT void SoundAsset::AdjustVolume(float,int);
//EQLIB_OBJECT void SoundAsset::GiveTime(void);
//EQLIB_OBJECT void SoundAsset::Stop(void);
// protected
//EQLIB_OBJECT virtual SoundAsset::~SoundAsset(void);
////EQLIB_OBJECT virtual void * SoundAsset::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT virtual void * SoundAsset::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void SoundAsset::YourManagerDeleted(void);
};

class SoundControl
{
public:
//EQLIB_OBJECT SoundControl::SoundControl(void);
};

class SoundEmitter
{
public:
//EQLIB_OBJECT SoundEmitter::SoundEmitter(class EmitterManager *,class MusicManager *,int);
//EQLIB_OBJECT SoundEmitter::SoundEmitter(class EmitterManager *,class SoundAsset *,int);
//EQLIB_OBJECT void SoundEmitter::Enable(bool);
//EQLIB_OBJECT void SoundEmitter::GiveTime(void);
//EQLIB_OBJECT void SoundEmitter::Move(float,float,float);
//EQLIB_OBJECT void SoundEmitter::SetAsset(class SoundAsset *);
// protected
//EQLIB_OBJECT virtual SoundEmitter::~SoundEmitter(void);
////EQLIB_OBJECT virtual void * SoundEmitter::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT virtual void * SoundEmitter::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void SoundEmitter::Init(void);
//EQLIB_OBJECT void SoundEmitter::ReleaseLoopingSound(void);
//EQLIB_OBJECT void SoundEmitter::ResetTimer(void);
};

class SoundInstance
{
public:
//EQLIB_OBJECT SoundInstance::SoundInstance(class SoundManager *);
// virtual
//EQLIB_OBJECT void SoundInstance::SetPoolNumber(int);
//EQLIB_OBJECT void SoundInstance::SetSoundAsset(class SoundAsset *);
// protected
//EQLIB_OBJECT virtual SoundInstance::~SoundInstance(void);
////EQLIB_OBJECT virtual void * SoundInstance::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT virtual void * SoundInstance::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void SoundInstance::YourManagerDeleted(void);
};

class SoundManager
{
public:
//EQLIB_OBJECT SoundManager::~SoundManager(void);
////EQLIB_OBJECT SoundManager::SoundManager(int,int,bool,int,int,bool,enum SpeakerType);
//EQLIB_OBJECT class SoundAsset * SoundManager::AssetGet(char *);
////EQLIB_OBJECT class SoundInstance * SoundManager::BorrowInstance(enum InstanceType,int);
////EQLIB_OBJECT enum EnvironmentType SoundManager::GetListenerEnvironment(void);
////EQLIB_OBJECT enum StreamingStatus SoundManager::StreamingStatus(void);
//EQLIB_OBJECT float SoundManager::StreamingGetVolumeLevel(void);
//EQLIB_OBJECT int SoundManager::StreamingGetSongLength(void);
//EQLIB_OBJECT int SoundManager::StreamingGetSongPosition(void);
////EQLIB_OBJECT void SoundManager::AddPool(enum InstanceType,int,int);
//EQLIB_OBJECT void SoundManager::GetListenerLocation(float *,float *,float *,float *);
//EQLIB_OBJECT void SoundManager::GiveTime(void);
//EQLIB_OBJECT void SoundManager::ReturnInstance(class SoundInstance *);
////EQLIB_OBJECT void SoundManager::SetListenerEnvironment(enum EnvironmentType);
//EQLIB_OBJECT void SoundManager::SetListenerLocation(float,float,float,float);
//EQLIB_OBJECT void SoundManager::SetMixAhead(int);
//EQLIB_OBJECT void SoundManager::StreamingPause(void);
//EQLIB_OBJECT void SoundManager::StreamingPlay(char *);
//EQLIB_OBJECT void SoundManager::StreamingSetSongPosition(int);
//EQLIB_OBJECT void SoundManager::StreamingSetVolumeLevel(float);
//EQLIB_OBJECT void SoundManager::StreamingStop(void);
// protected
//EQLIB_OBJECT void SoundManager::AssetAdd(class SoundAsset *);
//EQLIB_OBJECT void SoundManager::AssetGiveTime(void);
//EQLIB_OBJECT void SoundManager::AssetRemove(class SoundAsset *);
};

class SoundObject
{
public:
//EQLIB_OBJECT SoundObject::SoundObject(void);
//EQLIB_OBJECT void SoundObject::AddRef(void);
//EQLIB_OBJECT void SoundObject::Release(void);
// protected
//EQLIB_OBJECT virtual SoundObject::~SoundObject(void);
////EQLIB_OBJECT virtual void * SoundObject::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT virtual void * SoundObject::`vector deleting destructor'(unsigned int);
};

class SParseVariables
{
public:
//EQLIB_OBJECT SParseVariables::~SParseVariables(void);
};

class SpellManager
{
public:
//EQLIB_OBJECT SpellManager::~SpellManager(void);
//EQLIB_OBJECT SpellManager::SpellManager(char *);
SPELLMGR Data;
};

class STable
{
public:
//EQLIB_OBJECT STable::~STable(void);
//EQLIB_OBJECT STable::STable(void);
//EQLIB_OBJECT class STable & STable::operator=(class STable const &);
////EQLIB_OBJECT void * STable::`vector deleting destructor'(unsigned int);
};

class STableCell
{
public:
//EQLIB_OBJECT STableCell::~STableCell(void);
//EQLIB_OBJECT STableCell::STableCell(void);
};

class STempTable
{
public:
//EQLIB_OBJECT STempTable::~STempTable(void);
};

class STempTableCell
{
public:
//EQLIB_OBJECT STempTableCell::~STempTableCell(void);
//EQLIB_OBJECT STempTableCell::STempTableCell(void);
};

class STempTableRow
{
public:
//EQLIB_OBJECT STempTableRow::~STempTableRow(void);
//EQLIB_OBJECT STempTableRow::STempTableRow(void);
};

class STextLine
{
public:
//EQLIB_OBJECT STextLine::~STextLine(void);
//EQLIB_OBJECT STextLine::STextLine(void);
//EQLIB_OBJECT class STextLine & STextLine::operator=(class STextLine const &);
////EQLIB_OBJECT void * STextLine::`vector deleting destructor'(unsigned int);
};

class STextureAnimationFrame
{
public:
//EQLIB_OBJECT STextureAnimationFrame::~STextureAnimationFrame(void);
//EQLIB_OBJECT STextureAnimationFrame::STextureAnimationFrame(class CUITexturePiece,unsigned __int32,class CXPoint);
//EQLIB_OBJECT STextureAnimationFrame::STextureAnimationFrame(void);
//EQLIB_OBJECT class STextureAnimationFrame & STextureAnimationFrame::operator=(class STextureAnimationFrame const &);
////EQLIB_OBJECT void * STextureAnimationFrame::`vector deleting destructor'(unsigned int);
};

class StringItem
{
public:
//EQLIB_OBJECT StringItem::~StringItem(void);
//EQLIB_OBJECT StringItem::StringItem(void);
//EQLIB_OBJECT int StringItem::load(struct _iobuf *,int);
};

class StringTable
{
public:
//EQLIB_OBJECT StringTable::~StringTable(void);
//EQLIB_OBJECT StringTable::StringTable(void);
//EQLIB_OBJECT char * StringTable::getString(unsigned long,bool *);
//EQLIB_OBJECT int StringTable::load(char const *,int);
//EQLIB_OBJECT void StringTable::addItem(class StringItem *);
// private
//EQLIB_OBJECT class StringItem * StringTable::findItem(unsigned long,int,int);
//EQLIB_OBJECT void StringTable::checkAlloc(void);
};

class TextFileReader
{
public:
//EQLIB_OBJECT TextFileReader::~TextFileReader(void);
//EQLIB_OBJECT TextFileReader::TextFileReader(char *,char);
//EQLIB_OBJECT bool TextFileReader::IsOpen(void);
//EQLIB_OBJECT int TextFileReader::GetNextField(char *,int);
//EQLIB_OBJECT int TextFileReader::ReadLine(void);
//EQLIB_OBJECT void TextFileReader::GetLine(char *,int);
};

class type_info
{
public:
// virtual
//EQLIB_OBJECT type_info::~type_info(void);
////EQLIB_OBJECT void * type_info::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT void * type_info::`vector deleting destructor'(unsigned int);
};

class UdpConnection
{
public:
////EQLIB_OBJECT bool UdpConnection::Send(enum UdpChannel,void const *,int);
//EQLIB_OBJECT int UdpConnection::ConnectionAge(void)const;
//EQLIB_OBJECT int UdpConnection::LastReceive(void)const;
//EQLIB_OBJECT int UdpConnection::TotalPendingBytes(void)const;
//EQLIB_OBJECT void UdpConnection::FlushMultiBuffer(void);
////EQLIB_OBJECT void UdpConnection::GetChannelStatus(enum UdpChannel,struct UdpConnection::ChannelStatus *)const;
//EQLIB_OBJECT void UdpConnection::PingStatReset(void);
//EQLIB_OBJECT void UdpConnection::Release(void);
//EQLIB_OBJECT void UdpConnection::SetSilentDisconnect(bool);
// protected
//EQLIB_OBJECT UdpConnection::UdpConnection(class UdpManager *,class UdpIpAddress,int,int);
////EQLIB_OBJECT UdpConnection::UdpConnection(class UdpManager *,class UdpManager::PacketHistoryEntry const *);
//EQLIB_OBJECT void UdpConnection::GiveTime(void);
//EQLIB_OBJECT void UdpConnection::PortUnreachable(void);
////EQLIB_OBJECT void UdpConnection::ProcessRawPacket(class UdpManager::PacketHistoryEntry const *);
// private
//EQLIB_OBJECT UdpConnection::~UdpConnection(void);
////EQLIB_OBJECT bool UdpConnection::InternalSend(enum UdpChannel,unsigned char const *,int,unsigned char const *,int);
//EQLIB_OBJECT bool UdpConnection::IsNonEncryptPacket(unsigned char const *)const;
//EQLIB_OBJECT int UdpConnection::DecryptNone(unsigned char *,unsigned char const *,int);
//EQLIB_OBJECT int UdpConnection::DecryptUserSupplied(unsigned char *,unsigned char const *,int);
//EQLIB_OBJECT int UdpConnection::DecryptUserSupplied2(unsigned char *,unsigned char const *,int);
//EQLIB_OBJECT int UdpConnection::DecryptXor(unsigned char *,unsigned char const *,int);
//EQLIB_OBJECT int UdpConnection::DecryptXorBuffer(unsigned char *,unsigned char const *,int);
//EQLIB_OBJECT int UdpConnection::EncryptNone(unsigned char *,unsigned char const *,int);
//EQLIB_OBJECT int UdpConnection::EncryptUserSupplied(unsigned char *,unsigned char const *,int);
//EQLIB_OBJECT int UdpConnection::EncryptUserSupplied2(unsigned char *,unsigned char const *,int);
//EQLIB_OBJECT int UdpConnection::EncryptXor(unsigned char *,unsigned char const *,int);
//EQLIB_OBJECT int UdpConnection::EncryptXorBuffer(unsigned char *,unsigned char const *,int);
//EQLIB_OBJECT int UdpConnection::ExpireReceiveBin(void);
//EQLIB_OBJECT int UdpConnection::ExpireSendBin(void);
//EQLIB_OBJECT unsigned char * UdpConnection::BufferedSend(unsigned char const *,int,unsigned char const *,int,bool);
////EQLIB_OBJECT void UdpConnection::CallbackCorruptPacket(unsigned char const *,int,enum UdpCorruptionReason);
//EQLIB_OBJECT void UdpConnection::CallbackRoutePacket(unsigned char const *,int);
//EQLIB_OBJECT void UdpConnection::Init(class UdpManager *,class UdpIpAddress,int);
////EQLIB_OBJECT void UdpConnection::InternalDisconnect(int,enum UdpConnection::DisconnectReason);
//EQLIB_OBJECT void UdpConnection::InternalGiveTime(void);
//EQLIB_OBJECT void UdpConnection::PhysicalSend(unsigned char const *,int,bool);
//EQLIB_OBJECT void UdpConnection::ProcessCookedPacket(unsigned char const *,int);
//EQLIB_OBJECT void UdpConnection::RawSend(unsigned char const *,int);
//EQLIB_OBJECT void UdpConnection::ScheduleTimeNow(void);
////EQLIB_OBJECT void UdpConnection::SendTerminatePacket(int,enum UdpConnection::DisconnectReason);
//EQLIB_OBJECT void UdpConnection::SetupEncryptModel(void);
};

class UdpConnectionHandler
{
public:
// virtual
//EQLIB_OBJECT void UdpConnectionHandler::OnConnectComplete(class UdpConnection *);
//EQLIB_OBJECT void UdpConnectionHandler::OnCrcReject(class UdpConnection *,unsigned char const *,int);
////EQLIB_OBJECT void UdpConnectionHandler::OnPacketCorrupt(class UdpConnection *,unsigned char const *,int,enum UdpCorruptionReason);
//EQLIB_OBJECT void UdpConnectionHandler::OnTerminated(class UdpConnection *);
};

class UdpIpAddress
{
public:
//EQLIB_OBJECT UdpIpAddress::UdpIpAddress(unsigned int);
};

class UdpManager
{
public:
////EQLIB_OBJECT UdpManager::PacketHistoryEntry::~PacketHistoryEntry(void);
////EQLIB_OBJECT UdpManager::PacketHistoryEntry::PacketHistoryEntry(int);
////EQLIB_OBJECT UdpManager::Params::Params(void);
////EQLIB_OBJECT UdpManager::SimulateQueueEntry::~SimulateQueueEntry(void);
////EQLIB_OBJECT UdpManager::SimulateQueueEntry::SimulateQueueEntry(unsigned char const *,int,class UdpIpAddress,int);
////EQLIB_OBJECT UdpManager::UdpManager(struct UdpManager::Params const *);
//EQLIB_OBJECT bool UdpManager::GiveTime(int,bool);
//EQLIB_OBJECT class LogicalPacket * UdpManager::CreatePacket(void const *,int,void const *,int);
//EQLIB_OBJECT class UdpConnection * UdpManager::EstablishConnection(char const *,int,int);
//EQLIB_OBJECT void UdpManager::Release(void);
//EQLIB_OBJECT void UdpManager::ResetStats(void);
// protected
//EQLIB_OBJECT class UdpConnection * UdpManager::AddressGetConnection(class UdpIpAddress,int)const;
//EQLIB_OBJECT class UdpConnection * UdpManager::ConnectCodeGetConnection(int)const;
////EQLIB_OBJECT class UdpManager::PacketHistoryEntry * UdpManager::ActualReceive(void);
//EQLIB_OBJECT class WrappedLogicalPacket * UdpManager::WrappedBorrow(class LogicalPacket const *);
//EQLIB_OBJECT void UdpManager::ActualSend(unsigned char const *,int,class UdpIpAddress,int);
//EQLIB_OBJECT void UdpManager::ActualSendHelper(unsigned char const *,int,class UdpIpAddress,int);
//EQLIB_OBJECT void UdpManager::AddConnection(class UdpConnection *);
//EQLIB_OBJECT void UdpManager::CloseSocket(void);
//EQLIB_OBJECT void UdpManager::CreateAndBindSocket(int);
//EQLIB_OBJECT void UdpManager::KeepUntilDisconnected(class UdpConnection *);
//EQLIB_OBJECT void UdpManager::PoolCreated(class PooledLogicalPacket *);
//EQLIB_OBJECT void UdpManager::PoolDestroyed(class PooledLogicalPacket *);
//EQLIB_OBJECT void UdpManager::PoolReturn(class PooledLogicalPacket *);
//EQLIB_OBJECT void UdpManager::ProcessDisconnectPending(void);
//EQLIB_OBJECT void UdpManager::ProcessIcmpErrors(void);
////EQLIB_OBJECT void UdpManager::ProcessRawPacket(class UdpManager::PacketHistoryEntry const *);
//EQLIB_OBJECT void UdpManager::RemoveConnection(class UdpConnection *);
//EQLIB_OBJECT void UdpManager::SendPortAlive(class UdpIpAddress,int);
//EQLIB_OBJECT void UdpManager::WrappedCreated(class WrappedLogicalPacket *);
//EQLIB_OBJECT void UdpManager::WrappedDestroyed(class WrappedLogicalPacket *);
//EQLIB_OBJECT void UdpManager::WrappedReturn(class WrappedLogicalPacket *);
// private
//EQLIB_OBJECT UdpManager::~UdpManager(void);
};

class UdpMisc
{
public:
//EQLIB_OBJECT static __int64 __cdecl UdpMisc::Clock(void);
//EQLIB_OBJECT static __int64 __cdecl UdpMisc::GetValue64(void const *);
//EQLIB_OBJECT static class LogicalPacket * __cdecl UdpMisc::CreateQuickLogicalPacket(void const *,int,void const *,int);
//EQLIB_OBJECT static int __cdecl UdpMisc::Crc32(void const *,int,int);
//EQLIB_OBJECT static int __cdecl UdpMisc::PutValue24(void *,unsigned int);
//EQLIB_OBJECT static int __cdecl UdpMisc::PutValue32(void *,unsigned int);
//EQLIB_OBJECT static int __cdecl UdpMisc::PutValue64(void *,__int64);
//EQLIB_OBJECT static int __cdecl UdpMisc::Random(int *);
//EQLIB_OBJECT static int __cdecl UdpMisc::SyncStampShortDeltaTime(unsigned short,unsigned short);
//EQLIB_OBJECT static unsigned int __cdecl UdpMisc::GetValue24(void const *);
//EQLIB_OBJECT static unsigned int __cdecl UdpMisc::GetValue32(void const *);
//EQLIB_OBJECT static unsigned int __cdecl UdpMisc::GetVariableValue(void const *,unsigned int *);
//EQLIB_OBJECT static unsigned int __cdecl UdpMisc::PutVariableValue(void *,unsigned int);
};

class UdpReliableChannel
{
public:
////EQLIB_OBJECT UdpReliableChannel::IncomingQueueEntry::~IncomingQueueEntry(void);
////EQLIB_OBJECT UdpReliableChannel::IncomingQueueEntry::IncomingQueueEntry(void);
////EQLIB_OBJECT UdpReliableChannel::PhysicalPacket::~PhysicalPacket(void);
////EQLIB_OBJECT UdpReliableChannel::PhysicalPacket::PhysicalPacket(void);
////EQLIB_OBJECT void * UdpReliableChannel::IncomingQueueEntry::`vector deleting destructor'(unsigned int);
////EQLIB_OBJECT void * UdpReliableChannel::PhysicalPacket::`vector deleting destructor'(unsigned int);
// protected
//EQLIB_OBJECT __int64 UdpReliableChannel::GetReliableIncomingId(int)const;
//EQLIB_OBJECT UdpReliableChannel::~UdpReliableChannel(void);
////EQLIB_OBJECT UdpReliableChannel::UdpReliableChannel(int,class UdpConnection *,struct UdpManager::ReliableConfig *);
//EQLIB_OBJECT bool UdpReliableChannel::PullDown(int);
//EQLIB_OBJECT int UdpReliableChannel::GiveTime(void);
//EQLIB_OBJECT void UdpReliableChannel::Ack(__int64);
//EQLIB_OBJECT void UdpReliableChannel::AckAllPacket(unsigned char const *,int);
//EQLIB_OBJECT void UdpReliableChannel::AckPacket(unsigned char const *,int);
//EQLIB_OBJECT void UdpReliableChannel::FlushCoalesce(void);
////EQLIB_OBJECT void UdpReliableChannel::GetChannelStatus(struct UdpConnection::ChannelStatus *)const;
////EQLIB_OBJECT void UdpReliableChannel::ProcessPacket(enum UdpReliableChannel::ReliablePacketMode,unsigned char const *,int);
//EQLIB_OBJECT void UdpReliableChannel::QueueLogicalPacket(class LogicalPacket const *);
//EQLIB_OBJECT void UdpReliableChannel::ReliablePacket(unsigned char const *,int);
//EQLIB_OBJECT void UdpReliableChannel::Send(unsigned char const *,int,unsigned char const *,int);
//EQLIB_OBJECT void UdpReliableChannel::SendCoalesce(unsigned char const *,int,unsigned char const *,int);
};

class vlong
{
public:
//EQLIB_OBJECT vlong::~vlong(void);
//EQLIB_OBJECT vlong::vlong(class vlong const &);
//EQLIB_OBJECT vlong::vlong(unsigned __int64);
//EQLIB_OBJECT class vlong & vlong::operator+=(class vlong const &);
//EQLIB_OBJECT class vlong & vlong::operator-=(class vlong const &);
//EQLIB_OBJECT class vlong & vlong::operator=(class vlong);
// private
//EQLIB_OBJECT int vlong::cf(class vlong)const;
//EQLIB_OBJECT void vlong::docopy(void);
};

class vlong_value
{
public:
//EQLIB_OBJECT vlong_value::~vlong_value(void);
//EQLIB_OBJECT vlong_value::vlong_value(void);
//EQLIB_OBJECT int vlong_value::cf(class vlong_value &)const;
//EQLIB_OBJECT int vlong_value::is_zero(void)const;
//EQLIB_OBJECT int vlong_value::test(unsigned int)const;
//EQLIB_OBJECT unsigned int vlong_value::bits(void)const;
//EQLIB_OBJECT void vlong_value::add(class vlong_value &);
//EQLIB_OBJECT void vlong_value::copy(class vlong_value &);
//EQLIB_OBJECT void vlong_value::divide(class vlong_value &,class vlong_value &,class vlong_value &);
//EQLIB_OBJECT void vlong_value::init(unsigned int);
//EQLIB_OBJECT void vlong_value::init2(unsigned int,unsigned int);
//EQLIB_OBJECT void vlong_value::mul(class vlong_value &,class vlong_value &);
//EQLIB_OBJECT void vlong_value::shl(void);
//EQLIB_OBJECT void vlong_value::shr(unsigned int);
//EQLIB_OBJECT void vlong_value::shr(void);
//EQLIB_OBJECT void vlong_value::subtract(class vlong_value &);
};

class Wave3dInstance
{
public:
//EQLIB_OBJECT Wave3dInstance::Wave3dInstance(class SoundManager *);
// virtual
//EQLIB_OBJECT bool Wave3dInstance::GiveTime(void);
//EQLIB_OBJECT enum InstanceType Wave3dInstance::GetType(void);
//EQLIB_OBJECT void Wave3dInstance::AdjustVolume(float,int);
//EQLIB_OBJECT void Wave3dInstance::GuaranteeStopped(void);
//EQLIB_OBJECT void Wave3dInstance::Move(float,float,float);
//EQLIB_OBJECT void Wave3dInstance::Play(class SoundControl *);
// protected
//EQLIB_OBJECT virtual Wave3dInstance::~Wave3dInstance(void);
////EQLIB_OBJECT virtual void * Wave3dInstance::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT virtual void * Wave3dInstance::`vector deleting destructor'(unsigned int);
};

class WaveInstance
{
public:
//EQLIB_OBJECT WaveInstance::WaveInstance(class SoundManager *);
// virtual
//EQLIB_OBJECT bool WaveInstance::GiveTime(void);
////EQLIB_OBJECT enum InstanceType WaveInstance::GetType(void);
//EQLIB_OBJECT void WaveInstance::AdjustVolume(float,int);
//EQLIB_OBJECT void WaveInstance::GuaranteeStopped(void);
//EQLIB_OBJECT void WaveInstance::Move(float,float,float);
//EQLIB_OBJECT void WaveInstance::Play(class SoundControl *);
// protected
//EQLIB_OBJECT virtual WaveInstance::~WaveInstance(void);
////EQLIB_OBJECT virtual void * WaveInstance::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT virtual void * WaveInstance::`vector deleting destructor'(unsigned int);
};

class WrappedLogicalPacket
{
public:
//EQLIB_OBJECT WrappedLogicalPacket::WrappedLogicalPacket(class UdpManager *);
// virtual
//EQLIB_OBJECT int WrappedLogicalPacket::GetDataLen(void)const;
//EQLIB_OBJECT void * WrappedLogicalPacket::GetDataPtr(void);
//EQLIB_OBJECT void WrappedLogicalPacket::AddRef(void)const;
//EQLIB_OBJECT void WrappedLogicalPacket::Release(void)const;
//EQLIB_OBJECT void WrappedLogicalPacket::SetDataLen(int);
//EQLIB_OBJECT void const * WrappedLogicalPacket::GetDataPtr(void)const;
// protected
//EQLIB_OBJECT virtual WrappedLogicalPacket::~WrappedLogicalPacket(void);
////EQLIB_OBJECT virtual void * WrappedLogicalPacket::`scalar deleting destructor'(unsigned int);
////EQLIB_OBJECT virtual void * WrappedLogicalPacket::`vector deleting destructor'(unsigned int);
//EQLIB_OBJECT void WrappedLogicalPacket::SetLogicalPacket(class LogicalPacket const *);
};

class ZlibUtil
{
public:
//EQLIB_OBJECT static int __cdecl ZlibUtil::Compress(char const *,int,char *,int,int);
//EQLIB_OBJECT static int __cdecl ZlibUtil::Decompress(char const *,int,char *,int);
// private
//EQLIB_OBJECT static class MemoryPoolManager ZlibUtil::sMemoryPoolManager;
//EQLIB_OBJECT static int __cdecl ZlibUtil::zcompress(unsigned char *,unsigned long *,unsigned char const *,unsigned long,int);
//EQLIB_OBJECT static int __cdecl ZlibUtil::zuncompress(unsigned char *,unsigned long *,unsigned char const *,unsigned long);
//EQLIB_OBJECT static void * __cdecl ZlibUtil::zcalloc(void *,unsigned int,unsigned int);
//EQLIB_OBJECT static void __cdecl ZlibUtil::zfree(void *,void *);
};

class ZoneNPCLoadTextManager
{
public:
//EQLIB_OBJECT ZoneNPCLoadTextManager::~ZoneNPCLoadTextManager(void);
//EQLIB_OBJECT ZoneNPCLoadTextManager::ZoneNPCLoadTextManager(char *);
//EQLIB_OBJECT char * ZoneNPCLoadTextManager::GetNPCCode(int);
//EQLIB_OBJECT char * ZoneNPCLoadTextManager::GetS3DName(int);
//EQLIB_OBJECT void ZoneNPCLoadTextManager::LoadText(char *);
};

class CTextOverlay
{
public:
//EQLIB_OBJECT void CTextOverlay::DisplayText(char *,int,int,int,int,int,int);
}; 

class CMyInventory
{
public:
//EQLIB_OBJECT struct  _CONTENTS* CMyInventory::GetSlot(int);
};

class CDBStr
{
public:
// GetString(index, subindex, &success)
//EQLIB_OBJECT char *CDBStr::GetString(int, int, int*);
};







