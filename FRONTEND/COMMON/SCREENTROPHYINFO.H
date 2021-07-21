#ifndef SCREENTROPHYINFO_H
#define SCREENTROPHYINFO_H


extern void GetShapeInfo__17tScreenTrophyInfoRsT1PPcT3(struct tScreenTrophyInfo *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x80041008

extern void DrawBackground__17tScreenTrophyInfo(struct tScreenTrophyInfo *this); // 0x80041138


extern void _._17tScreenTrophyInfo(struct tScreenTrophyInfo *this, int __in_chrg); // 0x800415E0


// decompiled code
// original method signature: 
// void /*$ra*/ _._17tScreenTrophyInfo(struct tScreenTrophyInfo *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 30, offset 0x800415e0
	/* begin block 1 */
		// Start line: 60
	/* end block 1 */
	// End Line: 61

void ___17tScreenTrophyInfo(tScreenTrophyInfo *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
