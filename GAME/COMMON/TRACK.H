#ifndef TRACK_H
#define TRACK_H

extern void Track_SetTrackNumber__Fi(int tracknum); // 0x800B92F8

extern char * Track_MakeTrackPathName__FPc(char *ext); // 0x800B9308

extern char * Track_MakeTrackDataPathName__FPc(char *ext); // 0x800B9350

extern void AllocArtResource__FP18Track_tArtresourcei(struct Track_tArtresource *artRes, int numPmx); // 0x800B9398

extern void InitArtResources__Fv(); // 0x800B93D8

extern void DeInitArtResources__Fv(); // 0x800B9408

extern void LoadShapesAndMakePmx__FPcP12Draw_tPixMapiii(char *shapefile, struct Draw_tPixMap *pmxList, int loadFlags, int x, int y); // 0x800B942C

extern void LoadShapesAndMakePmx_EnvMap__FPcP12Draw_tPixMapii(char *shapefile, struct Draw_tPixMap *pmxList, int x, int y); // 0x800B9778

extern void TexturesLoadInitial__Fv(); // 0x800B9830

extern void Track_AnimateTextures__Fv(); // 0x800B99DC

extern int Track_GetProperMultiPalShapeIndex__Fii(int shapeindex, int paletteindex); // 0x800B9B74

extern void Track_ProcessFlipAndUVFlags__FiP12Draw_tPixMapT1(int uvFlag, struct Draw_tPixMap *inputPmx, struct Draw_tPixMap *outputPmx); // 0x800B9BC4

extern void Track_AssociateSingleMaterial__FP12Trk_MaterialP15Track_tMaterialP18Track_tArtresource(struct Trk_Material *inputMat, struct Track_tMaterial *outputMat, struct Track_tArtresource *art); // 0x800B9D2C

extern void Track_LinkMaterials__FP15SerializedGroupiP15Track_tMaterial(struct SerializedGroup *group, int length, struct Track_tMaterial *matList); // 0x800B9E98

extern void ReduceObjectPrecision__FP5GroupT0i(struct Group *instGroup, struct Group *defGroup, int bits); // 0x800BA25C

extern void InvalidatePersistentCollideBoomObjects__FP5GroupT0(struct Group *instGroup, struct Group *defGroup); // 0x800BA2FC

extern void CalcObjectBoundingSphere__FP5GroupT0(struct Group *defGroup, struct Group *boundingSphereGroup); // 0x800BA368

extern void CalcObjDefPtrs__Fv(); // 0x800BA5C8

extern void Track_InitPersistentData__FP15SerializedGroup(struct SerializedGroup *perGroup); // 0x800BA62C

extern void Track_Init__FPc(char *tempName); // 0x800BA808

extern void Track_DeInit__Fv(); // 0x800BAC74

extern void Track_AnimateTrackLighting__Fv(); // 0x800BAD48

extern char * KillFile_OpenRead__Fv(); // 0x800BAD50

extern void KillFile_ReadEntry__FPciRiT2(char *filePtr, int entryInd, int *chunkInd, int *objectInd); // 0x800BAD94

extern void Track_LoadObjectKillData__Fv(); // 0x800BADB4

extern void Save__11SaveSurfaceP14Trk_NewSimQuad(struct SaveSurface *this, struct Trk_NewSimQuad *simQuad); // 0x800BAF0C

extern struct SaveSurface * __11SaveSurfacei(struct SaveSurface *this, int numEntries); // 0x800BAF70

extern void _._11SaveSurface(struct SaveSurface *this, int __in_chrg); // 0x800BAFB4

extern void RestoreAll__11SaveSurface(struct SaveSurface *this); // 0x800BAFFC

#endif
