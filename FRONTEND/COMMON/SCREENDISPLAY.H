#ifndef SCREENDISPLAY_H
#define SCREENDISPLAY_H


extern void DrawBackground__14tScreenDisplay(struct tScreenDisplay *this); // 0x80045950

extern void GetShapeInfo__14tScreenDisplayRsT1PPcT3(struct tScreenDisplay *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x800459DC


extern void _._14tScreenDisplay(struct tScreenDisplay *this, int __in_chrg); // 0x80045A04


// decompiled code
// original method signature: 
// void /*$ra*/ _._14tScreenDisplay(struct tScreenDisplay *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 41, offset 0x80045a04
	/* begin block 1 */
		// Start line: 82
	/* end block 1 */
	// End Line: 83

void ___14tScreenDisplay(tScreenDisplay *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
