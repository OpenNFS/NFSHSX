#ifndef FLARE_H
#define FLARE_H


extern void Flare_Tri__FPlN20i(long *cp, long *p1, long *p2, int otz); // 0x800CBCB0

extern void Flare_SetMatrix__FP10matrixtdef(struct matrixtdef *m); // 0x800CBD4C

extern void Flare_IdentMatrix__FP6MATRIX(struct MATRIX *mtx); // 0x800CBDF8

extern void Flare_OctFlare__FPli(long *center, int otz); // 0x800CBE14

extern void Flare_OctFlareSpikes__FPli(long *center, int otz); // 0x800CC034

extern void Flare_Spikes__FPli(long *center, int otz); // 0x800CC3B8

extern void Flare_HexFlare__FPli(long *center, int otz); // 0x800CC694

extern void Flare_ReflectHexFlare__FPli(long *center, int otz); // 0x800CC868

extern void Flare_QuadFlare__FPli(long *center, int otz); // 0x800CCA3C

extern void Flare_CarShapedHalo__FiP7COORD16N21siP15Draw_FlareCache(int type, struct COORD16 *ptCenter, struct COORD16 *pt1, struct COORD16 *pt2, int flag, int otz, struct Draw_FlareCache *sd); // 0x800CCB58

extern void Flare_Halo2__FP13DRender_tViewiiP8coorddefT3P15Draw_FlareCache(struct DRender_tView *Vi, int scale, int type, struct coorddef *fpt, struct coorddef *fpt2); // 0x800CD530

extern void Flare_Halo__FP13DRender_tViewiiP8coorddefP15Draw_FlareCache(struct DRender_tView *Vi, int scale, int type, struct coorddef *fpt, struct Draw_FlareCache *sd); // 0x800CDE9C

extern void Flare_2DSpike__FPlT0i(long *center, long *end, int otz); // 0x800CDEC4

extern void Flare_2DHalo__Fiiiii(int x, int y, int scalex, int scaley, int type); // 0x800CDF70

extern void Flare_PreCalcHexLightBeam__FPli(long *center, int otz); // 0x800CE34C

extern void Flare_Quad__FPlP7CVECTORi(long *pt, struct CVECTOR *color, int otz); // 0x800CE420

extern void Flare_QuadNotTransparent__FPlP7CVECTORi(long *pt, struct CVECTOR *color, int otz); // 0x800CE4C4

extern void Flare_QuadRing__FPlP7CVECTORi(long *pt, struct CVECTOR *color, int otz); // 0x800CE568

extern void Flare_TextureQuad__FPlP7CVECTORci(long *pt, struct CVECTOR *color, char type, int otz); // 0x800CE61C

extern void Flare_SingleColorTex__FP7DVECTORP7CVECTORiici(struct DVECTOR *xy, struct CVECTOR *color, int width, int height, int type, int otz); // 0x800CE6F8

extern void Flare_SingleColorHex__FP7DVECTORP7CVECTORiii(struct DVECTOR *xy, struct CVECTOR *color, int width, int height, int otz); // 0x800CE79C

extern void Flare_SingleColorOct__FP7DVECTORP7CVECTORiii(struct DVECTOR *xy, struct CVECTOR *color, int width, int height, int otz); // 0x800CE8B0

extern void Flare_SingleColorOctRing__FP7DVECTORP7CVECTORiii(struct DVECTOR *xy, struct CVECTOR *color, int width, int height, int otz); // 0x800CE988

extern void Flare_InitLensFlare__Fv(); // 0x800CEB44

extern void Flare_LensFlare__FP7DVECTORP15Draw_FlareCache(struct DVECTOR *screenPos, struct Draw_FlareCache *sd); // 0x800CEB6C

extern void Flare_Sun__FP7SVECTORP15Draw_FlareCache(struct SVECTOR *worldPos, struct Draw_FlareCache *sd); // 0x800CF1D0

extern void Flare_Moon__FP7SVECTORP15Draw_FlareCache(struct SVECTOR *worldPos, struct Draw_FlareCache *sd); // 0x800CF4BC


#endif
