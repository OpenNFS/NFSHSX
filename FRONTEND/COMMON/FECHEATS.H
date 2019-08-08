#ifndef FECHEATS_H
#define FECHEATS_H

extern void FECheat_HandleActivation__F10tCheatCode(enum tCheatCode cheat); // 0x80023240

extern void FECheat_EncodeString__FPcT0(char *input, char *output); // 0x80023410

extern void FECheat_EncodeString2__FPcT0(char *input, char *output); // 0x8002349C

extern void FECheat_ActivateBonus__F10tCheatCode(enum tCheatCode cheat); // 0x800235D8

extern unsigned int FECheat_ActivateCheat__FPc(char *cheat); // 0x80023614

extern unsigned int FECheat_IsCheatEnabled__F10tCheatCode(enum tCheatCode cheat); // 0x8002371C

extern void FECheat_SaveBonus__FRUl(unsigned long *cheat); // 0x80023748

extern void FECheat_LoadBonus__FRUl(unsigned long *cheat); // 0x80023758

extern unsigned int FECheat_IsTheUserACryBabyCheater__Fv(); // 0x800237D0

extern unsigned int FECheat_ActivateBonusByCode__FPc(char *code); // 0x800237E0

#endif
