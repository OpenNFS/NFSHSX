#ifndef SCREENTRACKINFO_H
#define SCREENTRACKINFO_H


extern void GetShapeInfo__16tScreenTrackInfoRsT1PPcT3(struct tScreenTrackInfo *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x800421F8

extern void DrawBackground__16tScreenTrackInfo(struct tScreenTrackInfo *this); // 0x80042298

extern void Initialize__16tScreenTrackInfo(struct tScreenTrackInfo *this); // 0x80042520

extern void ProcessInput__16tScreenTrackInfo7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenTrackInfo *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x8004258C


extern void _._16tScreenTrackInfo(struct tScreenTrackInfo *this, int __in_chrg); // 0x80042628


// decompiled code
// original method signature: 
// void /*$ra*/ _._16tScreenTrackInfo(struct tScreenTrackInfo *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 52, offset 0x80042628
	/* begin block 1 */
		// Start line: 104
	/* end block 1 */
	// End Line: 105

void ___16tScreenTrackInfo(tScreenTrackInfo *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
