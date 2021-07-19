#ifndef PSXFRONT_H
#define PSXFRONT_H


extern void Quick_DD__Fiii(int a, int b, int c); // 0x8004D778

extern void PSXFront_AllocateDrawMemory__Fv(); // 0x8004D7BC

extern void PSXFront_FreeDrawMemory__Fv(); // 0x8004D830

extern void InitializeSpinningCars__Fv(); // 0x8004D850

extern void CleanupSpinningCars__Fv(); // 0x8004D9CC

extern void CleanupSpinningCarsMenu__Fv(); // 0x8004DAC4

extern void DoTitleScreen__Fv(); // 0x8004DB34

extern void DoLanguageScreen__Fv(); // 0x8004DC34

extern void PSXExitFrontend__Fv(); // 0x8004DC70

extern void PSX_AllocShapes__Fv(); // 0x8004DCC8

extern void Init_RenderingEnvironment__Fv(); // 0x8004DD0C

extern void Init_PSX_FrontEnd__Fv(); // 0x8004DDF8

extern void AdjustShapeDrawing__FP18tTexture_ShapeInfoRiN21iPiP18tDrawShapeExtended(struct tTexture_ShapeInfo *tShp, int *x, int *y, int *flags, int bright, int *color, struct tDrawShapeExtended *extra); // 0x8004DF38

extern void DrawGouraudShape__FP18tTexture_ShapeInfoiiiPii(struct tTexture_ShapeInfo *shp, int flags, int x, int y, int *color, int abr); // 0x8004E264

extern void DrawFlatShape__FP18tTexture_ShapeInfoiiiPii(struct tTexture_ShapeInfo *shp, int flags, int x, int y, int *color, int abr); // 0x8004E638

extern void DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(int index, int flags, int x, int y, int fade, int abr, struct tDrawShapeExtended *extra); // 0x8004E678

extern void ScaleGouraudShape__FP18tTexture_ShapeInfoiiiiiPii(struct tTexture_ShapeInfo *shp, int flags, int x, int y, int scalex, int scaley, int *color, int abr); // 0x8004E77C

extern void ScaleFlatShape__FP18tTexture_ShapeInfoiiiiiPii(struct tTexture_ShapeInfo *shp, int flags, int x, int y, int scalex, int scaley, int *color, int abr); // 0x8004EA38

extern void ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended(int index, int flags, int x, int y, int fade, int abr, struct tDrawShapeExtended *extra); // 0x8004EA88

extern void LoadAllHelpShapes__Fv(); // 0x8004EBB4

extern void PSXDrawSquare__Fiiiii(int col, int x, int y, int w, int h); // 0x8004EC44

extern void PSXDrawGouraudSquare__Fiiiiiiii(int x, int y, int w, int h, int c1, int c2, int c3, int c4); // 0x8004ECDC

extern void PSXDrawTransGouraudSquare__Fiiiiiiiii(int x, int y, int w, int h, int opacity, int c1, int c2, int c3, int c4); // 0x8004EDCC

extern void PSXDrawTransSquare__Fiiiiis(int col, int x, int y, int w, int h, int opacity); // 0x8004EED0

extern void FontUpsideDownBlit__FiiPviiP12charactertbli(int x, int y, void *src, int u, int v, struct charactertbl *ch); // 0x8004EFB4


#endif
