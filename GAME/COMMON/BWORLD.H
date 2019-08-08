#ifndef BWORLD_H
#define BWORLD_H

extern int xzsquaredist32__FP8coorddefT0(struct coorddef *c1, struct coorddef *c2); // 0x8007D5C4

extern void UpdateContext__FP13DRender_tViewi(struct DRender_tView *Vi, int contextHandle); // 0x8007D608

extern void BWorld_BuildGlareEffects__FP13DRender_tViewP11Draw_DCacheP5Group(struct DRender_tView *Vi, struct Draw_DCache *sd, struct Group *group); // 0x8007D6C0

extern void BWorld_InitSpikeBelt__Fv(); // 0x8007D818

extern void BWorld_SetSpikeBelt__Fiii(int slice, int x, int width); // 0x8007D8C4

extern int BWorld_GetSpikeBelt__FPiN20(int *slice, int *x, int *width); // 0x8007D8F8

extern void SetupBuildMatrices__FP13DRender_tViewP11Draw_DCache(struct DRender_tView *Vi, struct Draw_DCache *sd); // 0x8007D940

extern int BWorld_CheckChunkVisible__FP12BWorldSm_PosT0(struct BWorldSm_Pos *slicePosSource, struct BWorldSm_Pos *slicePosTest); // 0x8007DC14

extern int GetRezIndex__Fi(int dist); // 0x8007DD54

extern int SetupChunkBuildList__FP13DRender_tView(struct DRender_tView *Vi); // 0x8007DD74

extern unsigned int BWorld_IsSliceInBuildList__Fi(int slice); // 0x8007E0A0

extern void BWorld_OnyxBuildFacets__FP13DRender_tView(struct DRender_tView *Vi); // 0x8007E0F4

extern char * BWAllocMem__Fl(long size); // 0x8007E3F8

extern void BWorld_InitContexts__Fv(); // 0x8007E428

extern void BWorld_DeInitContexts__Fv(); // 0x8007E460

extern void SetContext__Fi(int contextHandle); // 0x8007E480

extern int BWorld_OpenContext__Fii(int contextType, int client); // 0x8007E4AC

extern void BWorld_Restart__Fv(); // 0x8007E564

extern void BWorld_StartLoop__Fv(); // 0x8007E5C0

extern void BWorld_Init__Fv(); // 0x8007E5C8

extern void BWorld_DeInit__Fv(); // 0x8007E8B4

#endif
