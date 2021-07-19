#ifndef R3DCAR_H
#define R3DCAR_H


extern void R3DCar_ChangeTrafficColor__FP8Car_tObji(struct Car_tObj *carObj, int newColorIndex); // 0x800ADC2C

extern void R3DCar_StartUp__Fv(); // 0x800ADD14

extern void R3DCar_PostStartUp__Fv(); // 0x800ADDE4

extern void R3DCar_Restart__Fv(); // 0x800ADEC8

extern void R3DCar_CleanUp__Fv(); // 0x800ADF40

extern struct Transformer_zScene * R3DCar_ReadInCarData__FPcP8Car_tObj(char *filename, struct Car_tObj *carObj); // 0x800AE0A8

extern void R3DCcar_ReadeMapData__Fv(); // 0x800AE5B0

extern void R3DCcar_ReadTrackShadow__Fv(); // 0x800AE668

extern void R3DCar_CalcCarDimensions__FP8Car_tObjP18Transformer_zScenei(struct Car_tObj *carObj, struct Transformer_zScene *scene, int carType); // 0x800AE750

extern void R3DCar_DeInstantiate3DCar__FP8Car_tObj(struct Car_tObj *carObj); // 0x800AEC78

extern void R3DCar_DeInstantiate3DCarMenu__FP8Car_tObj(struct Car_tObj *carObj); // 0x800AECB4

extern void R3DCar_GetFileName__FPcN20(char *infilename, char *filename, char *suffix); // 0x800AEDF4

extern char * R3DCar_LoadFileAdr__FPc(char *name); // 0x800AEE50

extern void R3DCar_GetCarName__FPcii(char *filename, int carType, int country); // 0x800AEE98

extern void R3DCar_Instantiate3DCar__FP8Car_tObji(struct Car_tObj *carObj, int index); // 0x800AEF2C

extern int R3DCar_Visibilty__FP8Car_tObjP13DRender_tView(struct Car_tObj *carObj, struct DRender_tView *Vi); // 0x800AF74C

extern void R3DCar_TurnHeadLightOn__FP8Car_tObji(struct Car_tObj *carObj, int tail); // 0x800AFAF4

extern void R3DCar_TurnHeadLightOff__FP8Car_tObji(struct Car_tObj *carObj, int head); // 0x800AFB54

extern void R3DCar_MATRIX3DT_Copy__FPiT0(int *from, int *to); // 0x800AFBA8

extern void R3DCar_InsertCarFacet__FP8Car_tObjP13DRender_tView(struct Car_tObj *carObj, struct DRender_tView *Vi); // 0x800AFBD0

extern void R3DCar_ReadInCarTextureMenu__FP8Car_tObjPcii(struct Car_tObj *carObj, char *bigfile, int reload, int player); // 0x800B0DB0

extern void R3DCar_InsertCarFacetMenu__FP8Car_tObjP13DRender_tView(struct Car_tObj *carObj, struct DRender_tView *Vi); // 0x800B10FC

extern void R3DCar_InsertCarFacetII__FP8Car_tObj(struct Car_tObj *carObj); // 0x800B2174

extern void R3DCar_InsertCarFacetMenuII__FP8Car_tObji(struct Car_tObj *carObj, int light); // 0x800B2760

extern void R3DCar_Showroom__FP13DRender_tView(struct DRender_tView *Vi); // 0x800B2B88

extern void R3DCar_InsertCarFacetZ__FP8Car_tObjP13DRender_tView(struct Car_tObj *carObj, struct DRender_tView *Vi); // 0x800B2BD8

extern void R3DCar_InsertAllListFacet__FP13DRender_tView(struct DRender_tView *Vi); // 0x800B2BF8


#endif
