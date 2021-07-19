#ifndef TRSPROJ_H
#define TRSPROJ_H


extern void TrsProj_SetTransPrecision__Fi(int val); // 0x800E192C

extern void TrsProj_ResetTransPrecision__Fv(); // 0x800E1938

extern void TrsProj_SetProjection__Fiiii(int cx, int cy, int w, int h); // 0x800E1948

extern void TrsProj_SetMenuProjection__Fiiii(int cx, int cy, int w, int h); // 0x800E19C8

extern void TrsProj_SetViewTrsProjEnviro__FP13DRender_tView(struct DRender_tView *Vi); // 0x800E1A08

extern void TrsProj_SetPsxMatrix__FP10matrixtdefP8coorddef(struct matrixtdef *m, struct coorddef *t); // 0x800E1A5C

extern void TrsProj_SetPsxTrans__FP8coorddef(struct coorddef *t); // 0x800E1B4C

extern void TrsProj_SetPsxTransZero__Fv(); // 0x800E1B9C

extern void TrsProj_TransPt__FP8coorddefT0(struct coorddef *s, struct coorddef *d); // 0x800E1BCC

extern void TrsProj_TransPtN16__FP10RelCoord16P8coorddefi(struct RelCoord16 *s, struct coorddef *d, int n); // 0x800E1C58

extern void TrsProj_TransformProjectVertex__FP10matrixtdefP8coorddefiT1P12Draw_tVertex(struct matrixtdef *m, struct coorddef *t, int n, struct coorddef *s, struct Draw_tVertex *v); // 0x800E1CE0


#endif
