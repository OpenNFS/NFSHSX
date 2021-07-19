#ifndef SCREENUSERNAME_H
#define SCREENUSERNAME_H


extern void Initialize__15tScreenUserName(struct tScreenUserName *this); // 0x8004AF88

extern void GetShapeInfo__15tScreenUserNameRsT1PPcT3(struct tScreenUserName *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x8004B048

extern void DrawVerticalLine__15tScreenUserNamesss(struct tScreenUserName *this, short x, short y, short gridpos); // 0x8004B0A8

extern void DrawHorizontalLine__15tScreenUserNamesss(struct tScreenUserName *this, short x, short y, short gridpos); // 0x8004B128

extern void DrawBackground__15tScreenUserName(struct tScreenUserName *this); // 0x8004B1AC


extern void _._15tScreenUserName(struct tScreenUserName *this, int __in_chrg); // 0x8004B7D4


// decompiled code
// original method signature: 
// void /*$ra*/ _._15tScreenUserName(struct tScreenUserName *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 97, offset 0x8004b7d4
	/* begin block 1 */
		// Start line: 185
	/* end block 1 */
	// End Line: 186

	/* begin block 2 */
		// Start line: 185
	/* end block 2 */
	// End Line: 186

	/* begin block 3 */
		// Start line: 340
	/* end block 3 */
	// End Line: 341

	/* begin block 4 */
		// Start line: 194
	/* end block 4 */
	// End Line: 195

void ___15tScreenUserName(tScreenUserName *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
