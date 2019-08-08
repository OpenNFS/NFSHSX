#ifndef HRZSKU_H
#define HRZSKU_H

extern void Horizon_InterpolateLineSCoords__FP7DVECTORN20Piii(struct DVECTOR *sc, struct DVECTOR *s0, struct DVECTOR *s1, int *percentage, int n, int bPercentageArray); // 0x800CF574

extern void Sky_InitStars__Fv(); // 0x800CF6B4

extern void Sky_KillStars__Fv(); // 0x800CF89C

extern void Hrz_InitSkyColor__Fv(); // 0x800CF8E0

extern void Hrz_InitSky__Fv(); // 0x800CFA3C

extern void Hrz_Init2DRing__Fv(); // 0x800CFD80

extern void Hrz_GetHorizonPixMap__FP12Draw_tPixMap(struct Draw_tPixMap *p); // 0x800D0064

extern void Hrz_InitHorizon__Fv(); // 0x800D0118

extern void Hrz_KillHorizon__Fv(); // 0x800D0184

extern void Hrz_LightningAddFork__FScScSc(char direction, char column, char row); // 0x800D01B0

extern void Hrz_CalculateLightning__Fv(); // 0x800D03C8

extern void Hrz_TextureQuad__FP7DVECTORccP11Draw_DCache(struct DVECTOR *pt, char type, char bright, struct Draw_DCache *sd); // 0x800D0404

extern void Hrz_SetLightingPosInSky__FP13DRender_tView(struct DRender_tView *Vi); // 0x800D0534

extern void Hrz_BuildForkLightning__FP11Draw_DCache(struct Draw_DCache *sd); // 0x800D0644

extern void Hrz_LightningFlicker__Fi(int on); // 0x800D0760

extern void HrzSetPsxMatrix__FP10matrixtdef(struct matrixtdef *m); // 0x800D083C

extern void HrzSetPsxTranslation__FP8coorddef(struct coorddef *t); // 0x800D091C

extern void Hrz_RotProj16__FiP7SVECTORPiP7DVECTOR(int n, struct SVECTOR *s, int *z, struct DVECTOR *p); // 0x800D096C

extern void Hrz_SetDitheringPrim__Fii(int dither, int otz); // 0x800D09B0

extern void Hrz_BuildSky__Fv(); // 0x800D0A38

extern void Sky_RenderStars__FP13Draw_SkyCachei(struct Draw_SkyCache *sd, int otz); // 0x800D1160

extern void Hrz_BuildHorizon__FP13DRender_tView(struct DRender_tView *Vi); // 0x800D131C

#endif
