#ifndef DRAWC_H
#define DRAWC_H


extern void ChangeTPage__FPUsi(unsigned short *tpage, int nabr); // 0x800BE6D0

extern void DrawC_SetEnviroment__Fv(); // 0x800BE6E8

extern void DrawC_ReadLightingData__Fv(); // 0x800BE6F0

extern void DrawC_ReadeMapData__Fv(); // 0x800BE8F8

extern void DrawC_BuildRenderingData__Fv(); // 0x800BE918

extern void DrawC_KillRenderingData__Fv(); // 0x800BE948

extern void DrawC_NightHeadlight__FP8Car_tObj(struct Car_tObj *carObj); // 0x800BE978

extern void DrawC_MenuColorData__FiP8Car_tObji(int color, struct Car_tObj *carObj, int player); // 0x800BEB24

extern int DrawC_PrimStart__FP12Draw_tVertexP8Car_tObjiP13Draw_CarCache(struct Draw_tVertex *center, struct Car_tObj *carObj, int lightAvg, struct Draw_CarCache *sd); // 0x800BED44

extern void DrawC_PrimStop__FP8Car_tObjP13Draw_CarCache(struct Car_tObj *carObj, struct Draw_CarCache *sd); // 0x800BFC84

extern void DrawC_Prim__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache(struct matrixtdef *m, struct coorddef *t, struct Transformer_zObj *obj, struct Transformer_zOverlay *overlay, int envmap, struct Draw_CarCache *sd); // 0x800BFD44

extern void DrawC_DividePrim__FP7COORD16N20PUsN23P12Draw_tPixMapP13Draw_CarCache(struct COORD16 *vt0, struct COORD16 *vt1, struct COORD16 *vt2, unsigned short *u0, unsigned short *u1, unsigned short *u2, struct Draw_tPixMap *pmx, struct Draw_CarCache *sd); // 0x800C12F8

extern void DrawC_PrimClip__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache(struct matrixtdef *m, struct coorddef *t, struct Transformer_zObj *obj, struct Transformer_zOverlay *overlay, int envmap, struct Draw_CarCache *sd); // 0x800C155C

extern void DrawC_PrimMenu__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache(struct matrixtdef *m, struct coorddef *t, struct Transformer_zObj *obj, struct Transformer_zOverlay *overlay, int envmap, struct Draw_CarCache *sd); // 0x800C32B0

extern void DrawC_PrimHalo__FP10matrixtdefP8coorddefP16Transformer_zObjiiiP13Draw_CarCache(struct matrixtdef *m, struct coorddef *t, struct Transformer_zObj *obj, int type, int index, int reflect, struct Draw_CarCache *sd); // 0x800C3A30

extern void DrawC_ShadowPrim__FP12Draw_tVertexP13Draw_CarCache(struct Draw_tVertex *shadowVT, struct Draw_CarCache *sd); // 0x800C3ED8

extern void DrawC_DivideShadowPrim__FP7COORD16N30PUsN34P12Draw_tPixMapP13Draw_CarCache(struct COORD16 *vt0, struct COORD16 *vt1, struct COORD16 *vt2, struct COORD16 *vt3, unsigned short *u0, unsigned short *u1, unsigned short *u2, unsigned short *u3, struct Draw_tPixMap *pmx, struct Draw_CarCache *sd); // 0x800C40DC

extern void DrawC_ShadowPrimClip__FP12Draw_tVertexP13Draw_CarCache(struct Draw_tVertex *shadowVT, struct Draw_CarCache *sd); // 0x800C42C4

extern void DrawC_SpotPrims__FP10matrixtdefP8coorddefP13Draw_CarCache(struct matrixtdef *m, struct coorddef *t, struct Draw_CarCache *sd); // 0x800C4800

extern void DrawC_ShowroomPrims__FP10matrixtdefP8coorddefP13Draw_CarCache(struct matrixtdef *m, struct coorddef *t, struct Draw_CarCache *sd); // 0x800C4B84


#endif
