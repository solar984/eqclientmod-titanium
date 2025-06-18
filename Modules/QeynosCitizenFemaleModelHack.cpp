#include "../eqclientmod.h"
// There is an error in the client that swaps race 71's female (1) and neuter (2) models.  This hack swaps them back so the female Qeynos Citizen model works again, rather than showing up as a default human.

#ifdef QEYNOS_CITIZEN_FEMALE_MODEL_HACK
#include <stdlib.h>
#include "../common.h"
#include "../util.h"
#include "../settings.h"
#include "../eq_titanium.h"

void LoadQeynosCitizenFemaleModelHack()
{
	bool enable = true;

#ifdef INI_FILE
	char buf[2048];
	const char *desc = "There is an error in the client that swaps race 71's female (1) and neuter (2) models.  This hack swaps them back so the female Qeynos Citizen model works again, rather than showing up as a default human.";
	WritePrivateProfileStringA("QeynosCitizenFemaleModel", "Description", desc, INI_FILE);
	GetINIString("QeynosCitizenFemaleModel", "Enabled", "TRUE", buf, sizeof(buf), true);
	enable = ParseINIBool(buf);
#endif

	Log("LoadQeynosCitizenFemaleModelHack(): hack is %s", enable ? "ENABLED" : "DISABLED");

	if(enable)
	{
		unsigned int QCN = 0x00648DCC;
		unsigned int QCF = 0x00648DC8;

		// .text:0048CCFF 02C 68 CC 8D 64 00                                push    offset aQcn     ; "QCN"
		Patch((void *)(0x0048CCFF+1), &QCF, 4);
		// .text:0048CD0E 02C 68 C8 8D 64 00                                push    offset aQcf     ; "QCF"
		Patch((void *)(0x0048CD0E+1), &QCN, 4);
	}
}

#endif
