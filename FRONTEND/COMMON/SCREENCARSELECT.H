#ifndef SCREENCARSELECT_H
#define SCREENCARSELECT_H


extern void TransformVector__FRA4_iRA4_A4_iT0(int (*vect)[4], int (*transform)[4][4], int (*result)[4]); // 0x8003A8F0

extern void DrawCar__FR8tCarInfossffcbUl7tPlayer(struct tCarInfo *carInfo, short x, short y, float camerax, float cameray, int brightness, void * reflection, unsigned long rotate, enum tPlayer player); // 0x8003A9D4

extern struct tScreenCarSelect * __16tScreenCarSelect(struct tScreenCarSelect *this); // 0x8003AB80

extern void _._16tScreenCarSelect(struct tScreenCarSelect *this, int __in_chrg); // 0x8003AC90

extern void Cleanup__16tScreenCarSelect(struct tScreenCarSelect *this); // 0x8003ACB8

extern void DrawOverlay__16tScreenCarSelectP8tOverlay(struct tScreenCarSelect *this, struct tOverlay *overlay); // 0x8003AD00

extern void SetState__16tScreenCarSelecti(struct tScreenCarSelect *this, int state); // 0x8003B59C

extern void CalcSplinePosition__16tScreenCarSelectiiiiUlRiN46(struct tScreenCarSelect *this, int knot1, int knot2, int knot3, int knot4, unsigned long elapsed, int *camY, int *camZ, int *screenX, int *screenY, int *camRot); // 0x8003B820

extern void GetShapeInfo__16tScreenCarSelectRsT1PPcT3(struct tScreenCarSelect *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x8003BAE0

extern void UpdateVideoWall__16tScreenCarSelectR8tCarInfo(struct tScreenCarSelect *this, struct tCarInfo *carInfo); // 0x8003BBA4

extern void AllocateAsyncBuffer__16tScreenCarSelect(struct tScreenCarSelect *this); // 0x8003BC74

extern void FreeAsyncBuffer__16tScreenCarSelect(struct tScreenCarSelect *this); // 0x8003BCA8

extern void InitializeVideoWall__16tScreenCarSelect(struct tScreenCarSelect *this); // 0x8003BCD0

extern void Initialize__16tScreenCarSelect(struct tScreenCarSelect *this); // 0x8003BD88

extern void ProcessInput__16tScreenCarSelect7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenCarSelect *this, enum tInputKeyType *keyval); // 0x8003BF90

extern void DrawVideoWall__16tScreenCarSelects(struct tScreenCarSelect *this, short y); // 0x8003C118

extern void * GetCar__16tScreenCarSelectR8tCarInfo(struct tScreenCarSelect *this, struct tCarInfo *carInfo); // 0x8003C224

extern void SetBrightness__16tScreenCarSelectss(struct tScreenCarSelect *this, short bright, short i); // 0x8003C4A4

extern void UpdateBrightness__16tScreenCarSelects(struct tScreenCarSelect *this, short i); // 0x8003C4B8

extern void DrawBackground__16tScreenCarSelect(struct tScreenCarSelect *this); // 0x8003C53C

extern void DrawSliders__16tScreenCarSelectR8tCarInfoss(struct tScreenCarSelect *this, struct tCarInfo *carInfo, short x, short y); // 0x8003C66C

extern void DrawForeground__16tScreenCarSelect(struct tScreenCarSelect *this); // 0x8003C7D8

extern void PreLoad__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this); // 0x8003D08C

extern void AllocateAsyncBuffer__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this); // 0x8003D1B4

extern void FreeAsyncBuffer__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this); // 0x8003D1BC

extern void InitializeVideoWall__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this); // 0x8003D1E8

extern void Initialize__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this); // 0x8003D304

extern void Cleanup__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this); // 0x8003D334

extern void DrawVideoWall__20tScreenCarSelectDuels(struct tScreenCarSelectDuel *this, short y); // 0x8003D364

extern void DrawOpponentVideoWall__20tScreenCarSelectDuels(struct tScreenCarSelectDuel *this, short y); // 0x8003D4BC

extern void GetShapeInfo__20tScreenCarSelectDuelRsT1PPcT3(struct tScreenCarSelectDuel *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x8003D5E0

extern void UpdateVideoWall__20tScreenCarSelectDuelR8tCarInfo(struct tScreenCarSelectDuel *this, struct tCarInfo *carInfo); // 0x8003D69C

extern void UpdateOpponentVideoWall__20tScreenCarSelectDuelR8tCarInfo(struct tScreenCarSelectDuel *this, struct tCarInfo *carInfo); // 0x8003D76C

extern void DrawBackground__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this); // 0x8003D7F0

extern void DrawForeground__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this); // 0x8003DE68

extern void * GetCar__25tScreenCarSelectTwoPlayerR8tCarInfo(struct tScreenCarSelectTwoPlayer *this, struct tCarInfo *carInfo); // 0x8003E040

extern void DrawVideoWall__25tScreenCarSelectTwoPlayers(struct tScreenCarSelectTwoPlayer *this, short y); // 0x8003E190

extern void GetShapeInfo__25tScreenCarSelectTwoPlayerRsT1PPcT3(struct tScreenCarSelectTwoPlayer *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x8003E330

extern void UpdateVideoWall__25tScreenCarSelectTwoPlayerR8tCarInfo(struct tScreenCarSelectTwoPlayer *this, struct tCarInfo *carInfo); // 0x8003E3C8

extern void TurnOffVideoWall__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this); // 0x8003E49C

extern void DrawBackground__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this); // 0x8003E4BC

extern void DrawForeground__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this); // 0x8003EA14

extern void SetDialog__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this); // 0x8003EC50

extern void AllocateAsyncBuffer__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this); // 0x8003ED10

extern void InitializeVideoWall__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this); // 0x8003ED44

extern void Initialize__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this); // 0x8003EDC0

extern void Cleanup__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this); // 0x8003EE10

extern void * GetCar__25tScreenPinkSlipsCarSelectR8tCarInfo(struct tScreenPinkSlipsCarSelect *this, struct tCarInfo *carInfo); // 0x8003EE40

extern void DrawBackground__25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this); // 0x8003EED0

extern void DoMemCardStuff__25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this); // 0x8003EF14

extern void DrawForeground__25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this); // 0x8003F22C

extern void Initialize__25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this); // 0x8003F24C

extern void Cleanup__25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this); // 0x8003F2AC

extern void SetDialog__25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this); // 0x8003F300

extern void ProcessInput__25tScreenPinkSlipsCarSelect7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenPinkSlipsCarSelect *this, enum tInputKeyType *keyval); // 0x8003F590

extern void GetShapeInfo__25tScreenPinkSlipsCarSelectRsT1PPcT3(struct tScreenPinkSlipsCarSelect *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x8003F638


extern void _._20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this, int __in_chrg); // 0x8003F758

extern void _._25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this, int __in_chrg); // 0x8003F714

extern void _._25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this, int __in_chrg); // 0x8003F6D0


// decompiled code
// original method signature: 
// void /*$ra*/ _._20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 285, offset 0x8003f758
	/* begin block 1 */
		// Start line: 4432
	/* end block 1 */
	// End Line: 4433

	/* begin block 2 */
		// Start line: 4432
	/* end block 2 */
	// End Line: 4433

	/* begin block 3 */
		// Start line: 570
	/* end block 3 */
	// End Line: 571

void ___20tScreenCarSelectDuel(tScreenCarSelectDuel *this,int __in_chrg)

{
  ___16tScreenCarSelect((tScreenCarSelect *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this /*$s0*/, int __in_chrg /*$s1*/)
 // line 313, offset 0x8003f714
	/* begin block 1 */
		// Start line: 314
		// Start offset: 0x8003F714

		/* begin block 1.1 */
			// Start line: 314
			// Start offset: 0x8003F714

			/* begin block 1.1.1 */
				// Start line: 314
				// Start offset: 0x8003F714
			/* end block 1.1.1 */
			// End offset: 0x8003F714
			// End Line: 314
		/* end block 1.1 */
		// End offset: 0x8003F714
		// End Line: 314
	/* end block 1 */
	// End offset: 0x8003F714
	// End Line: 314

	/* begin block 2 */
		// Start line: 2543
	/* end block 2 */
	// End Line: 2544

	/* begin block 3 */
		// Start line: 2543
	/* end block 3 */
	// End Line: 2544

	/* begin block 4 */
		// Start line: 626
	/* end block 4 */
	// End Line: 627

void ___25tScreenCarSelectTwoPlayer(tScreenCarSelectTwoPlayer *this,int __in_chrg)

{
  ___7tScreen((tScreen *)&(this->tScreenCarSelect).fCameraRotation,2);
  ___16tScreenCarSelect((tScreenCarSelect *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this /*$s0*/, int __in_chrg /*$s1*/)
 // line 348, offset 0x8003f6d0
	/* begin block 1 */
		// Start line: 349
		// Start offset: 0x8003F6D0
		// Variables:
	// 		struct tScreenCarSelectTwoPlayer *this; // $s0
	// 		int __in_chrg; // $s1

		/* begin block 1.1 */
			// Start line: 349
			// Start offset: 0x8003F6D0

			/* begin block 1.1.1 */
				// Start line: 349
				// Start offset: 0x8003F6D0

				/* begin block 1.1.1.1 */
					// Start line: 349
					// Start offset: 0x8003F6D0
				/* end block 1.1.1.1 */
				// End offset: 0x8003F6D0
				// End Line: 349
			/* end block 1.1.1 */
			// End offset: 0x8003F6D0
			// End Line: 349
		/* end block 1.1 */
		// End offset: 0x8003F6D0
		// End Line: 349
	/* end block 1 */
	// End offset: 0x8003F6D0
	// End Line: 349

	/* begin block 2 */
		// Start line: 696
	/* end block 2 */
	// End Line: 697

void ___25tScreenPinkSlipsCarSelect(tScreenPinkSlipsCarSelect *this,int __in_chrg)

{
  ___7tScreen((tScreen *)&(this->tScreenCarSelectTwoPlayer).tScreenCarSelect.fCameraRotation,2);
  ___16tScreenCarSelect((tScreenCarSelect *)this,__in_chrg);
  return;
}





#endif
