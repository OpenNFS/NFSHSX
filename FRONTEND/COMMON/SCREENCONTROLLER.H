#ifndef SCREENCONTROLLER_H
#define SCREENCONTROLLER_H


extern void ClearActuators__23tScreenControllerConfig(struct tScreenControllerConfig *this); // 0x80043118

extern void SetActuators__23tScreenControllerConfigi(struct tScreenControllerConfig *this, int max); // 0x80043124

extern void TurnOffShakers__23tScreenControllerConfig(struct tScreenControllerConfig *this); // 0x800431AC

extern void ShakeIt__23tScreenControllerConfig(struct tScreenControllerConfig *this); // 0x800431B4

extern void Controller_SetRamp__Fv(); // 0x80043250

extern short AnimKeyPoints__23tScreenControllerConfigbT1(struct tScreenControllerConfig *this, void * forward, void * pt); // 0x8004339C

extern void CheckConfigs__23tScreenControllerConfig(struct tScreenControllerConfig *this); // 0x80043400

extern void SwapInController__23tScreenControllerConfig(struct tScreenControllerConfig *this); // 0x800436EC

extern void SetCurrentController__23tScreenControllerConfigb(struct tScreenControllerConfig *this, void * firsttime); // 0x80043778

extern int CalcAnimFrame__23tScreenControllerConfigi(struct tScreenControllerConfig *this, int frame); // 0x80043AF0

extern void ActualDrawController__23tScreenControllerConfigiiiii(struct tScreenControllerConfig *this, int frame, int fadelevelmain, int fadeleveltop, int shakex, int shakey); // 0x80043B7C

extern void DrawController__23tScreenControllerConfig(struct tScreenControllerConfig *this); // 0x80043DE4

extern void HorzVertLine__23tScreenControllerConfigPsb(struct tScreenControllerConfig *this, short *ArrowLoc, void * type); // 0x80044AF4

extern void DrawArrow__23tScreenControllerConfigPs(struct tScreenControllerConfig *this, short *ArrowLoc); // 0x80044D40

extern void DrawBackground__23tScreenControllerConfig(struct tScreenControllerConfig *this); // 0x80044E40

extern void DrawForeground__23tScreenControllerConfig(struct tScreenControllerConfig *this); // 0x80045064

extern void GetShapeInfo__23tScreenControllerConfigRsT1PPcT3(struct tScreenControllerConfig *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x800456CC

extern void Initialize__23tScreenControllerConfig(struct tScreenControllerConfig *this); // 0x800456FC

extern void Cleanup__23tScreenControllerConfig(struct tScreenControllerConfig *this); // 0x80045820

extern struct tScreenControllerConfig * __23tScreenControllerConfig(struct tScreenControllerConfig *this); // 0x8004585C

extern int GetHelpText__23tScreenControllerConfig(struct tScreenControllerConfig *this); // 0x800458AC


extern void _._23tScreenControllerConfig(struct tScreenControllerConfig *this, int __in_chrg); // 0x8004590C


// decompiled code
// original method signature: 
// void /*$ra*/ _._23tScreenControllerConfig(struct tScreenControllerConfig *this /*$s0*/, int __in_chrg /*$s1*/)
 // line 177, offset 0x8004590c
	/* begin block 1 */
		// Start line: 178
		// Start offset: 0x8004590C

		/* begin block 1.1 */
			// Start line: 178
			// Start offset: 0x8004590C

			/* begin block 1.1.1 */
				// Start line: 178
				// Start offset: 0x8004590C

				/* begin block 1.1.1.1 */
					// Start line: 178
					// Start offset: 0x8004590C
				/* end block 1.1.1.1 */
				// End offset: 0x8004590C
				// End Line: 178
			/* end block 1.1.1 */
			// End offset: 0x8004590C
			// End Line: 178
		/* end block 1.1 */
		// End offset: 0x8004590C
		// End Line: 178
	/* end block 1 */
	// End offset: 0x8004590C
	// End Line: 178

	/* begin block 2 */
		// Start line: 348
	/* end block 2 */
	// End Line: 349

	/* begin block 3 */
		// Start line: 345
	/* end block 3 */
	// End Line: 346

	/* begin block 4 */
		// Start line: 2103
	/* end block 4 */
	// End Line: 2104

	/* begin block 5 */
		// Start line: 354
	/* end block 5 */
	// End Line: 355

void ___23tScreenControllerConfig(tScreenControllerConfig *this,int __in_chrg)

{
  ___7tScreen((tScreen *)&this->mult,2);
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
