#ifndef NIGHT_H
#define NIGHT_H

extern int Night_FindClosestColor__FG7CVECTORPi(struct CVECTOR colorMatch, int *bestIndex); // 0x800DB318

extern void Night_CreateNightTableElement__FiliPUc(int colorIndex, long colorH, int bright, unsigned char *colorval); // 0x800DB3E0

extern void Night_CreateNightTable__FiliPA256_A16_Uc(int colorIndex, long colorH, int bright, unsigned char (*tbl)[256][16]); // 0x800DB5A4

extern void Night_GenerateNextLightningEvent__Fv(); // 0x800DB5CC

extern void Night_PauseLightningEffect__Fi(int player); // 0x800DB640

extern void Night_DoLightningEffect__FP13DRender_tView(struct DRender_tView *Vi); // 0x800DB6C4

extern void Night_SetCopColor__FP18GameSetup_tCarData(struct GameSetup_tCarData *carinfo); // 0x800DB848

extern void Night_InitPlayerHeadLightColor__Fi(int player); // 0x800DB8DC

extern void Night_SetPlayerHeadLightColor__Fiii(int player, int colorIndex, int bright); // 0x800DB938

extern void Night_InitCopLightColors__Fv(); // 0x800DB974

extern void Night_SetCopLightColors__Fii(int colorIndex, int brighten); // 0x800DB9D0

extern void Night_InitWeatherTables__Fv(); // 0x800DBA50

extern void Night_SetWeatherColors__Fi(int colorIndex); // 0x800DBAD4

extern void Night_GenerateAllLightTables__Fv(); // 0x800DBB50

extern void Night_InitNightDriving__Fv(); // 0x800DBDE4

extern void Night_KillNightDriving__Fv(); // 0x800DBF80

extern void Night_RestartNightDriving__Fv(); // 0x800DC020

extern void Night_SetEnviroment__FP13DRender_tView(struct DRender_tView *Vi); // 0x800DC0A8

extern void Night_AdditiveNightCalc__FP6VECTORP7CVECTOR(struct VECTOR *v, struct CVECTOR *color); // 0x800DC1B8

#endif
