#ifndef MATHNFS_H
#define MATHNFS_H

extern int Math_DistXZ__FP8coorddefT0(struct coorddef *a, struct coorddef *b); // 0x8009D3E4

extern int Math_Dist3D__FP8coorddefT0(struct coorddef *a, struct coorddef *b); // 0x8009D438

extern int Math_BetterDist__Fii(int a, int b); // 0x8009D4C8

extern void Math_ResolveRotatedVector__FiiiPiT3(int x, int y, int angle, int *newx, int *newy); // 0x8009D628

extern int Math_VectorLength__FP8coorddef(struct coorddef *v); // 0x8009D6EC

extern int Math_VectorLength2__FP8coorddef(struct coorddef *v); // 0x8009D888

extern void Math_NormalizeVector__FP8coorddef(struct coorddef *v); // 0x8009DA1C

extern void Math_NormalizeShortVector__FP8coorddef(struct coorddef *v); // 0x8009DBD4

extern void Math_QDNormalizeVector__FP8coorddef(struct coorddef *v); // 0x8009DC80

extern void Math_fasttransmult__FP10matrixtdefN20(struct matrixtdef *m1, struct matrixtdef *m2, struct matrixtdef *mr); // 0x8009DD8C

#endif
