#ifndef WEATHER_H
#define WEATHER_H

extern int Weather_GetNumParticles__Fi(int player); // 0x800E1DC0

extern void Weather_SetMatrix__FP10matrixtdef(struct matrixtdef *m); // 0x800E1DD0

extern void Weather_SetIdentMatrix__Fv(); // 0x800E1E94

extern void Weather_InitSnow__Fv(); // 0x800E1F18

extern void Weather_InitRain__Fv(); // 0x800E1F78

extern void Weather_InitSplats__Fv(); // 0x800E1FD8

extern int Weather_GetNewState__Fv(); // 0x800E20EC

extern void Weather_ChangeDensityState__Fv(); // 0x800E212C

extern void Weather_ChangeIntensityState__Fv(); // 0x800E21A0

extern void Weather_ChangeDensityBasedOnTime__Fv(); // 0x800E2218

extern void Weather_ChangeIntensityBasedOnTime__Fv(); // 0x800E22F0

extern void Weather_InitStateControls__Fv(); // 0x800E23E8

extern void Weather_Restart__Fv(); // 0x800E24B4

extern void Weather_Init__Fv(); // 0x800E2530

extern void Weather_DeInit__Fv(); // 0x800E287C

extern void Weather_TransformVertex__FP10matrixtdefiP7SVECTOR(struct matrixtdef *m, int n, struct SVECTOR *s); // 0x800E2910

extern short Weather_CheckAndResetParticles__FP7SVECTOR(struct SVECTOR *pt); // 0x800E29D4

extern void Weather_QuickReOrthogonalize__FP10matrixtdefT0(struct matrixtdef *rot, struct matrixtdef *rotNew); // 0x800E2D50

extern void Weather_ProcessParticles__FP13DRender_tViewiP7SVECTORPc(struct DRender_tView *Vi, int num, struct SVECTOR *wpt, char *wd); // 0x800E2FD0

extern void Weather_CreateSnow__FP7SVECTOR(struct SVECTOR *pt); // 0x800E33BC

extern void Weather_CreateRain__FP7SVECTORP7DVECTORPc(struct SVECTOR *pt0, struct DVECTOR *pt1, char *wd); // 0x800E356C

extern void Weather_CreateSplat__FP18Weather_tSplatInfo(struct Weather_tSplatInfo *splat); // 0x800E3730

extern void Weather_DoSplats__FiP18Weather_tSplatInfo(int num, struct Weather_tSplatInfo *splats); // 0x800E3858

extern void Weather_DoWeather__FP13DRender_tView(struct DRender_tView *Vi); // 0x800E3A1C

extern void Weather_BuildWeather__FP13DRender_tView(struct DRender_tView *Vi); // 0x800E3D30

#endif
