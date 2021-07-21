#ifndef SFX_H
#define SFX_H


extern void Sfx_Transform__FP8coorddefP7SVECTORT0(struct coorddef *worldpt, struct SVECTOR *campt, struct coorddef *t); // 0x800DD050

extern void Sfx_BuildSmokeFacet__FP17Souffle_tISouffleP10sfxsouffleP12Draw_tPixMap(struct Souffle_tISouffle *is, struct sfxsouffle *dSouffle, struct Draw_tPixMap *cpixmap); // 0x800DD1A4

extern void Sfx_ThickenXZ__FP7SVECTORP8coorddefN21(struct SVECTOR *d, struct coorddef *pt1, struct coorddef *pt2, struct coorddef *cp); // 0x800DD370

extern void Sfx_BuildFastDisolveFacet__FP17Souffle_tISouffleP10sfxsouffleP12Draw_tPixMapT2(struct Souffle_tISouffle *is, struct sfxsouffle *dSouffle, struct Draw_tPixMap *t, struct Draw_tPixMap *c); // 0x800DD528

extern void Sfx_AdditivePrim__FP12Draw_tPixMapP7SVECTORiiP10Sfx_tCache(struct Draw_tPixMap *pmx, struct SVECTOR *pt, int mode, int offset, struct Sfx_tCache *sd); // 0x800DD598

extern void Sfx_BuildSouffleFacet__FP13DRender_tViewP17Souffle_tISouffle(struct DRender_tView *Vi, struct Souffle_tISouffle *is); // 0x800DD790

extern void Sfx_Add__FP17Souffle_tISouffle(struct Souffle_tISouffle *is); // 0x800DE638


#endif
