#ifndef SCREENMAIN_H
#define SCREENMAIN_H


extern void SwapBackground__11tScreenMaini(struct tScreenMain *this, int num); // 0x80036F20

extern void * DoneLoadingBackground__11tScreenMain(struct tScreenMain *this); // 0x800370DC

extern void SetState__11tScreenMain16tScreenMainState(struct tScreenMain *this, enum tScreenMainState state); // 0x80037158

extern void InitDynamicImages__11tScreenMain(struct tScreenMain *this); // 0x8003742C

extern void ProcessInput__11tScreenMain7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenMain *this, enum tInputKeyType *keyval); // 0x80037798

extern void DrawDropShadow__11tScreenMain(struct tScreenMain *this); // 0x80037804

extern void DrawVideoLines__11tScreenMain(struct tScreenMain *this); // 0x80037918

extern void DrawBackground__11tScreenMain(struct tScreenMain *this); // 0x800379C0

extern void GetShapeInfo__11tScreenMainRsT1PPcT3(struct tScreenMain *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x80038698

extern void PreLoad__11tScreenMain(struct tScreenMain *this); // 0x800386C8

extern void Initialize__11tScreenMain(struct tScreenMain *this); // 0x800388D4

extern void Cleanup__11tScreenMain(struct tScreenMain *this); // 0x80038AD8


extern void _._11tScreenMain(struct tScreenMain *this, int __in_chrg); // 0x80038B44


// decompiled code
// original method signature: 
// void /*$ra*/ _._11tScreenMain(struct tScreenMain *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 162, offset 0x80038b44
	/* begin block 1 */
		// Start line: 324
	/* end block 1 */
	// End Line: 325

void ___11tScreenMain(tScreenMain *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
