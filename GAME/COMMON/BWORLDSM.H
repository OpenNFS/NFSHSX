#ifndef BWORLDSM_H
#define BWORLDSM_H

extern int BWorldSm_Init__FP5Group(struct Group *simGroup); // 0x8007E910

extern void BWorldSm_Restart__Fv(); // 0x8007E948

extern void BWorldSm_DeInit__Fv(); // 0x8007E968

extern void FindAbsClosestSliceCrude__FP8coorddefP12BWorldSm_Pos(struct coorddef *pt, struct BWorldSm_Pos *slicePos); // 0x8007E970

extern int BWorldSm_FindClosestSlice__FP8coorddefP12BWorldSm_Pos(struct coorddef *pt, struct BWorldSm_Pos *slicePos); // 0x8007EA14

extern void RawFindClosestSlice__FP8coorddefP12BWorldSm_Pos(struct coorddef *pt, struct BWorldSm_Pos *slicePos); // 0x8007EAB0

extern void BWorldSm_SetSlice__FiP12BWorldSm_Pos(int slice, struct BWorldSm_Pos *slicePos); // 0x8007ED64

extern void GetStmQuadPts__FP12BWorldSm_PosP8coorddef(struct BWorldSm_Pos *slicePos, struct coorddef *cp); // 0x8007EDB8

extern void SetStrip__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos); // 0x8007EEE0

extern void GetFirstStmQuadPts__FP12BWorldSm_PosP8CCOORD16(struct BWorldSm_Pos *slicePos, struct CCOORD16 *vertices); // 0x8007EF98

extern void BWorld_SetSimSlice__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos); // 0x8007F034

extern void BworldSm_UpdateSimQuad__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos); // 0x8007F094

extern int BworldSm_IsSimQuadValid__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos); // 0x8007F11C

extern int RawFindClosestQuad__FP8coorddefP12BWorldSm_Pos(struct coorddef *pt, struct BWorldSm_Pos *slicePos); // 0x8007F14C

extern int FindClosestQuad__FP8coorddefP12BWorldSm_Pos(struct coorddef *pt, struct BWorldSm_Pos *slicePos); // 0x8007F8F8

extern int BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi(struct coorddef *pt, struct BWorldSm_Pos *slicePos, int hiRezFlag); // 0x8007FAC4

extern int BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi(struct coorddef *pt, struct BWorldSm_Pos *slicePos, int maxIterations); // 0x8007FC90

extern int PointDirection__FP8coorddefN20(struct coorddef *p1, struct coorddef *p2, struct coorddef *p3); // 0x8007FCB0

extern int BWorldSm_FindEdgeOff__FP8coorddefP12BWorldSm_PosT1Pi(struct coorddef *pt, struct BWorldSm_Pos *slicePos1, struct BWorldSm_Pos *slicePos2, int *heightDiff); // 0x8007FD28

extern int BWorldSm_QuadLight__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos); // 0x8007FE44

extern unsigned int BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos); // 0x8007FFD4

extern void NormalCache_AddEntry__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos); // 0x8008002C

extern unsigned int NormalCache_FindEntry__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos); // 0x800800E8

extern void NormalCache_Init__Fv(); // 0x800801AC

extern void Check_Rot__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos); // 0x800801E8

extern struct coorddef * BWorldSm_UNormal__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos); // 0x80080520

extern struct coorddef * BWorldSm_UForward__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos); // 0x80080548

extern int BWorldSm_FindClosestTriangleRez__FP8coorddefP12BWorldSm_Posi(struct coorddef *pt, struct BWorldSm_Pos *slicePos, int hiRezFlag); // 0x80080570

#endif
