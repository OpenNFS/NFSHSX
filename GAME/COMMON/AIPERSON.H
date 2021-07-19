#ifndef AIPERSON_H
#define AIPERSON_H


extern void AIPerson_LoadGridAndSetPersonalityIndexes__Fv(); // 0x800689E8

extern void AIPerson_SetPersonality__FP8Car_tObji(struct Car_tObj *carObj, int personalityIndex); // 0x80068A34

extern void AIPerson_SetPersonalityPointers__Fv(); // 0x80068AFC

extern void AIPerson_LoadPersonalityData__FP10Udff_tInfo(struct Udff_tInfo *handle); // 0x80068B60

extern void AIPerson_LoadScriptData__FP10Udff_tInfo(struct Udff_tInfo *handle); // 0x80068EA4

extern void AIPerson_LoadGlue__FP10Udff_tInfo(struct Udff_tInfo *handle); // 0x80068F80

extern void AIPerson_Startup__Fv(); // 0x8006908C

extern void AIPerson_Cleanup__Fv(); // 0x80069230


#endif
