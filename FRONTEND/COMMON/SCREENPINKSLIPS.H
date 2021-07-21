#ifndef SCREENPINKSLIPS_H
#define SCREENPINKSLIPS_H


extern void DrawBackground__16tScreenPinkSlips(struct tScreenPinkSlips *this); // 0x80038B68

extern void GetShapeInfo__16tScreenPinkSlipsRsT1PPcT3(struct tScreenPinkSlips *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x80039118

extern void Initialize__16tScreenPinkSlips(struct tScreenPinkSlips *this); // 0x800391D8

extern void Cleanup__16tScreenPinkSlips(struct tScreenPinkSlips *this); // 0x80039320

extern void UpdateVideoWall__16tScreenPinkSlipsR17tTrackInformation(struct tScreenPinkSlips *this, struct tTrackInformation *trackInfo); // 0x80039368

extern void DrawVideoWall__16tScreenPinkSlips(struct tScreenPinkSlips *this); // 0x80039414

extern void ProcessInput__16tScreenPinkSlips7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenPinkSlips *this, enum tInputKeyType *keyval); // 0x80039690


extern void _._16tScreenPinkSlips(struct tScreenPinkSlips *this, int __in_chrg); // 0x800397CC


// decompiled code
// original method signature: 
// void /*$ra*/ _._16tScreenPinkSlips(struct tScreenPinkSlips *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 82, offset 0x800397cc
	/* begin block 1 */
		// Start line: 164
	/* end block 1 */
	// End Line: 165

void ___16tScreenPinkSlips(tScreenPinkSlips *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
