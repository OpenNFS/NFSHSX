#ifndef DRAWW_H
#define DRAWW_H

extern void DrawW_AddSubdividPrimGT4__FP8POLY_GT4P12Draw_SVertexN31P25Draw_tGiveShelbyMoreCache(struct POLY_GT4 *prim, struct Draw_SVertex *v0, struct Draw_SVertex *v1, struct Draw_SVertex *v2, struct Draw_SVertex *v3, struct Draw_tGiveShelbyMoreCache *sd); // 0x800C5028

extern void DrawW_AddSubdividPrimGT3__FP8POLY_GT3P12Draw_SVertexN21P25Draw_tGiveShelbyMoreCache(struct POLY_GT3 *prim, struct Draw_SVertex *v0, struct Draw_SVertex *v1, struct Draw_SVertex *v2, struct Draw_tGiveShelbyMoreCache *sd); // 0x800C50B4

extern void DrawW_DivVertice__FP12Draw_SVertexN20(struct Draw_SVertex *v0, struct Draw_SVertex *v1, struct Draw_SVertex *v2); // 0x800C5124

extern int DrawW_CalcSubdivision__FP25Draw_tGiveShelbyMoreCacheP12Draw_SVertexN31(struct Draw_tGiveShelbyMoreCache *sd, struct Draw_SVertex *v0, struct Draw_SVertex *v1, struct Draw_SVertex *v2, struct Draw_SVertex *v3); // 0x800C51FC

extern void DrawW_SubdividFacet__FP25Draw_tGiveShelbyMoreCacheiP12Draw_SVertexN32ss(struct Draw_tGiveShelbyMoreCache *sd, int l, struct Draw_SVertex *v0, struct Draw_SVertex *v1, struct Draw_SVertex *v2, struct Draw_SVertex *v3, int n, int subDivide); // 0x800C5284

extern void DrawW_LoadPrecVECTOR__FP12Draw_SVertexP6VECTOR(struct Draw_SVertex *v, struct VECTOR *dv); // 0x800C5BB4

extern void DrawW_SetUpSubdividFacet__FiP25Draw_tGiveShelbyMoreCache(int face, struct Draw_tGiveShelbyMoreCache *sd); // 0x800C5BE0

extern void Night_NightCopCalc__FP6VECTORPs(struct VECTOR *v, short *idx); // 0x800C5F18

extern void Night_NightCalc__FP6VECTORPsP25Draw_tGiveShelbyMoreCache(struct VECTOR *v, short *idx, struct Draw_tGiveShelbyMoreCache *sd); // 0x800C5FB8

extern void DrawW_NightColorCalc__FP25Draw_tGiveShelbyMoreCacheP8POLY_GT4P8CCOORD16N32(struct Draw_tGiveShelbyMoreCache *sd, struct POLY_GT4 *prim, struct CCOORD16 *vt0, struct CCOORD16 *vt1, struct CCOORD16 *vt2, struct CCOORD16 *vt3); // 0x800C609C

extern void DrawW_DrawQuad__FP25Draw_tGiveShelbyMoreCacheP8Trk_Quad(struct Draw_tGiveShelbyMoreCache *sd, struct Trk_Quad *inQuad); // 0x800C64F8

extern void DrawW_kCtrlWorld_High__FP25Draw_tGiveShelbyMoreCache(struct Draw_tGiveShelbyMoreCache *sd); // 0x800C6E38

extern void DrawW_StripDraw_High__FP25Draw_tGiveShelbyMoreCache(struct Draw_tGiveShelbyMoreCache *sd); // 0x800C6EB8

extern void DrawW_DoTrough__FP13DRender_tViewP11tBuildEntry(struct DRender_tView *Vi, struct tBuildEntry *buildList); // 0x800C6FA0

extern void DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX(struct matrixtdef *m, struct MATRIX *mat); // 0x800C753C

extern void DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(struct coorddef *t, struct MATRIX *mat); // 0x800C75D8

extern void DrawW_ResetAnimationTimer__Fv(); // 0x800C761C

extern int DrawW_GetAnimationTime__FP15Trk_AnimateInst(struct Trk_AnimateInst *animInst); // 0x800C7644

extern void DrawW_SetAnimationTime__FP15Trk_AnimateInstPii(struct Trk_AnimateInst *animInst, int *table, int time); // 0x800C76C8

extern void DrawW_DoObjectAnimations__Fv(); // 0x800C7808

extern int DrawW_BuildObjectFacets__FP13DRender_tViewP15ChunkObjectInfo(struct DRender_tView *Vi, struct ChunkObjectInfo *gObjInfo); // 0x800C78A8

extern int DrawW_BuildCustomObjectFacets__FP13DRender_tViewP11Draw_DCacheP13Trk_SimObjectP5Groupi(struct DRender_tView *Vi, struct Draw_DCache *sd, struct Trk_SimObject *simObjs, struct Group *group, int zClipSq); // 0x800C7B9C

extern int DrawObjectTransform__FP13DRender_tViewP11Draw_DCacheP10matrixtdefP13Trk_ObjectDefP8coorddefis(struct DRender_tView *Vi, struct Draw_DCache *sd, struct matrixtdef *matrix, struct Trk_ObjectDef *objDef, struct coorddef *pCp, int offset, int light); // 0x800C7EBC

extern int DrawObjectSimple__FP13DRender_tViewP11Draw_DCacheP13Trk_ObjectDefP8coorddefi(struct DRender_tView *Vi, struct Draw_DCache *sd, struct Trk_ObjectDef *objDef, struct coorddef *pCp, int offset); // 0x800C8214

extern int DrawW_BuildChunkObjectFacets__FP13DRender_tViewP15ChunkObjectInfo(struct DRender_tView *Vi, struct ChunkObjectInfo *gObjInfo); // 0x800C8508

extern void * ObjectClipped__FP13DRender_tViewiP8coorddefP25Draw_tGiveShelbyMoreCache(struct DRender_tView *Vi, int ind, struct coorddef *pCp, struct Draw_tGiveShelbyMoreCache *sd); // 0x800C8BD0

extern void DrawW_DoObjects__FP13DRender_tViewP11tBuildEntry(struct DRender_tView *Vi, struct tBuildEntry *buildList); // 0x800C8CC4

extern int Draw_CircleClip__FP8coorddefT0i(struct coorddef *pt1, struct coorddef *pt2, int r); // 0x800C903C

extern void Draw_kCtrlSkidmark__FP18Draw_tCtrlSkidmark(struct Draw_tCtrlSkidmark *fskid); // 0x800C909C

extern void DrawW_SetUpSubdividFacet_Line__FP25Draw_tGiveShelbyMoreCache(struct Draw_tGiveShelbyMoreCache *sd); // 0x800C9620

extern void DrawW_OnyxLinePrim__FP8CCOORD16P8Trk_LineiP25Draw_tGiveShelbyMoreCache(struct CCOORD16 *geomVertices, struct Trk_Line *lineQuad, int count, struct Draw_tGiveShelbyMoreCache *sd); // 0x800C98B8

extern void DrawW_BuildChunkCenterLineFacets__FP5ChunkP5GroupP25Draw_tGiveShelbyMoreCacheP7COORD16(struct Chunk *chunkDat, struct Group *group, struct Draw_tGiveShelbyMoreCache *sd, struct COORD16 *trans); // 0x800CA0A4

extern void DrawW_DoLines__FP13DRender_tViewP11tBuildEntryP11Draw_DCache(struct DRender_tView *Vi, struct tBuildEntry *buildList, struct Draw_DCache *sd); // 0x800CA204

extern void DrawW_BuildSpikeBelt__FP13DRender_tViewiP11Draw_DCache(struct DRender_tView *Vi, int scale, struct Draw_DCache *sd); // 0x800CA520

extern void DepthCue_Init__Fv(); // 0x800CA950

#endif
