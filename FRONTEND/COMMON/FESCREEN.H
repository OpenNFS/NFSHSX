#ifndef FESCREEN_H
#define FESCREEN_H


extern void DisplayLoadingText__7tScreen(); // 0x80025AB8

extern void GoNonInterlaced__7tScreen(); // 0x80025BF8

extern void DrawBackgroundImage__7tScreeniiP18tTexture_ShapeInfoi(struct tScreen *this, int startShape, int numShapes, struct tTexture_ShapeInfo *shapes, int flip_axis); // 0x80025CC8

extern void AsyncLoadPermanentShapeFile__7tScreenPc(struct tScreen *this, char *fileName); // 0x80025D98

extern void AsyncLoadSwapShapeFile__7tScreenPc(struct tScreen *this, char *fileName); // 0x80025DB8

extern void * IsShapeFileLoaded__7tScreenR17tShapeInformation(struct tScreen *this, struct tShapeInformation *shapes); // 0x80025E0C

extern void UploadPermanentShapes__7tScreeni(struct tScreen *this, int numPermanentShapes); // 0x80025F84

extern void UploadSwapShapes__7tScreeni(struct tScreen *this, int numSwapShapes); // 0x80025FD0

extern void GetShapeInfo__7tScreenRsT1PPcT3(struct tScreen *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x80026008

extern struct tScreen * __7tScreen(struct tScreen *this); // 0x80026020

extern void _._7tScreen(struct tScreen *this, int __in_chrg); // 0x80026078

extern void Initialize__7tScreen(struct tScreen *this); // 0x800260AC

extern void Cleanup__7tScreen(struct tScreen *this); // 0x800261A0

extern void Draw__7tScreenb(struct tScreen *this, void * drawBackground); // 0x800261EC

extern void AsyncLoadShapeFile__7tScreenPcR17tShapeInformation(struct tScreen *this, char *name, struct tShapeInformation *data); // 0x80026240

extern void CancelAsyncLoad__7tScreenR17tShapeInformation(struct tScreen *this, struct tShapeInformation *data); // 0x80026354

extern void InitializeShapes__7tScreenR17tShapeInformationUi(struct tScreen *this, struct tShapeInformation *data, unsigned int numShapes); // 0x800263EC

extern void FreeShapes__7tScreenR17tShapeInformation(struct tScreen *this, struct tShapeInformation *data); // 0x80026494

extern void UploadShapes__7tScreenR17tShapeInformationssss(struct tScreen *this, struct tShapeInformation *data, short x, short y, int numShapes, int index); // 0x800265F4

extern void PreLoad__7tScreen(struct tScreen *this); // 0x80026780

extern void TransitionOff__7tScreen22tScreen_TransitionTypeP5tMenu(struct tScreen *this, enum tScreen_TransitionType type); // 0x80026804

extern void TransitionOn__7tScreen22tScreen_TransitionTypeP5tMenu(struct tScreen *this, enum tScreen_TransitionType type); // 0x80026824

extern void UpdateTransition__7tScreen(struct tScreen *this); // 0x80026848

extern void * TransitionIsFinished__7tScreen(struct tScreen *this); // 0x800268C0

extern void ProcessInput__7tScreen7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreen *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x800268D8


extern void DrawBackground__7tScreen(struct tScreen *this); // 0x800268E8

extern void DrawForeground__7tScreen(struct tScreen *this); // 0x800268E0


// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__7tScreen(struct tScreen *this /*$a0*/)
 // line 96, offset 0x800268e8
	/* begin block 1 */
		// Start line: 97
		// Start offset: 0x800268E8
	/* end block 1 */
	// End offset: 0x800268E8
	// End Line: 97

	/* begin block 2 */
		// Start line: 229
	/* end block 2 */
	// End Line: 230

	/* begin block 3 */
		// Start line: 192
	/* end block 3 */
	// End Line: 193

	/* begin block 4 */
		// Start line: 229
	/* end block 4 */
	// End Line: 230

void DrawBackground__7tScreen(tScreen *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawForeground__7tScreen(struct tScreen *this /*$a0*/)
 // line 97, offset 0x800268e0
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x800268E0
	/* end block 1 */
	// End offset: 0x800268E0
	// End Line: 98

	/* begin block 2 */
		// Start line: 230
	/* end block 2 */
	// End Line: 231

	/* begin block 3 */
		// Start line: 230
	/* end block 3 */
	// End Line: 231

	/* begin block 4 */
		// Start line: 194
	/* end block 4 */
	// End Line: 195

	/* begin block 5 */
		// Start line: 230
	/* end block 5 */
	// End Line: 231

void DrawForeground__7tScreen(tScreen *this)

{
  return;
}





#endif
