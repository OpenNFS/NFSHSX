#ifndef SCREENCONGRATS_H
#define SCREENCONGRATS_H


extern void Cleanup__15tScreenCongrats(struct tScreenCongrats *this); // 0x80047E60

extern void GetShapeInfo__15tScreenCongratsRsT1PPcT3(struct tScreenCongrats *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x80047E8C

extern void * GetCar__15tScreenCongratsR8tCarInfo(struct tScreenCongrats *this, struct tCarInfo *carInfo); // 0x800480E4

extern void DrawBackground__15tScreenCongrats(struct tScreenCongrats *this); // 0x8004813C

extern void DrawForeground__15tScreenCongrats(struct tScreenCongrats *this); // 0x800489B0

extern void CalculatePrizes__15tScreenCongrats(struct tScreenCongrats *this); // 0x800489B8

extern void Initialize__15tScreenCongrats(struct tScreenCongrats *this); // 0x80048A2C

extern void ProcessInput__15tScreenCongrats7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenCongrats *this, enum tPlayer p, enum tInputKeyType *keyval, struct tMenuCommand *c); // 0x80048AF0

extern void DrawCongratsMessage__23tScreenPinkSlipCongrats(struct tScreenPinkSlipCongrats *this); // 0x80048B48

extern void * GetCar__23tScreenPinkSlipCongratsR8tCarInfo(struct tScreenPinkSlipCongrats *this, struct tCarInfo *carInfo); // 0x80048C64

extern void CalculatePrizes__23tScreenPinkSlipCongrats(struct tScreenPinkSlipCongrats *this); // 0x80048CDC

extern void Initialize__23tScreenPinkSlipCongrats(struct tScreenPinkSlipCongrats *this); // 0x80048DEC

extern void Cleanup__23tScreenPinkSlipCongrats(struct tScreenPinkSlipCongrats *this); // 0x80048E44

extern void ProcessInput__23tScreenTournamentTrophy7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenTournamentTrophy *this, enum tPlayer p, enum tInputKeyType *keyval, struct tMenuCommand *c); // 0x80048E70

extern void * GetCar__23tScreenTournamentTrophyR8tCarInfo(struct tScreenTournamentTrophy *this, struct tCarInfo *carInfo); // 0x80048EB8

extern void DrawCongratsMessage__23tScreenTournamentTrophy(struct tScreenTournamentTrophy *this); // 0x80048F64

extern void CalculatePrizes__23tScreenTournamentTrophy(struct tScreenTournamentTrophy *this); // 0x8004923C

extern void * GetCar__23tScreenBeTheCopCongratsR8tCarInfo(struct tScreenBeTheCopCongrats *this, struct tCarInfo *carInfo); // 0x8004947C

extern void CalculatePrizes__23tScreenBeTheCopCongrats(struct tScreenBeTheCopCongrats *this); // 0x800494DC

extern void DrawCongratsMessage__23tScreenBeTheCopCongrats(struct tScreenBeTheCopCongrats *this); // 0x8004952C

extern void * GetCar__25tScreenTournamentCongratsR8tCarInfo(struct tScreenTournamentCongrats *this, struct tCarInfo *carInfo); // 0x800495E8

extern void CalculatePrizes__25tScreenTournamentCongrats(struct tScreenTournamentCongrats *this); // 0x8004963C

extern void DrawCongratsMessage__25tScreenTournamentCongrats(struct tScreenTournamentCongrats *this); // 0x800496D4


extern void _._15tScreenCongrats(struct tScreenCongrats *this, int __in_chrg); // 0x80049820

extern void _._23tScreenTournamentTrophy(struct tScreenTournamentTrophy *this, int __in_chrg); // 0x80049800

extern void _._23tScreenPinkSlipCongrats(struct tScreenPinkSlipCongrats *this, int __in_chrg); // 0x800497E0

extern void _._23tScreenBeTheCopCongrats(struct tScreenBeTheCopCongrats *this, int __in_chrg); // 0x800497C0

extern void _._25tScreenTournamentCongrats(struct tScreenTournamentCongrats *this, int __in_chrg); // 0x800497A0


// decompiled code
// original method signature: 
// void /*$ra*/ _._15tScreenCongrats(struct tScreenCongrats *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 109, offset 0x80049820
	/* begin block 1 */
		// Start line: 3123
	/* end block 1 */
	// End Line: 3124

	/* begin block 2 */
		// Start line: 3123
	/* end block 2 */
	// End Line: 3124

	/* begin block 3 */
		// Start line: 218
	/* end block 3 */
	// End Line: 219

void ___15tScreenCongrats(tScreenCongrats *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._23tScreenTournamentTrophy(struct tScreenTournamentTrophy *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 126, offset 0x80049800
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x80049800
	/* end block 1 */
	// End offset: 0x80049800
	// End Line: 127

	/* begin block 2 */
		// Start line: 2411
	/* end block 2 */
	// End Line: 2412

	/* begin block 3 */
		// Start line: 2411
	/* end block 3 */
	// End Line: 2412

	/* begin block 4 */
		// Start line: 252
	/* end block 4 */
	// End Line: 253

void ___23tScreenTournamentTrophy(tScreenTournamentTrophy *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._23tScreenPinkSlipCongrats(struct tScreenPinkSlipCongrats *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 141, offset 0x800497e0
	/* begin block 1 */
		// Start line: 142
		// Start offset: 0x800497E0
	/* end block 1 */
	// End offset: 0x800497E0
	// End Line: 142

	/* begin block 2 */
		// Start line: 280
	/* end block 2 */
	// End Line: 281

	/* begin block 3 */
		// Start line: 1712
	/* end block 3 */
	// End Line: 1713

	/* begin block 4 */
		// Start line: 282
	/* end block 4 */
	// End Line: 283

void ___23tScreenPinkSlipCongrats(tScreenPinkSlipCongrats *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._23tScreenBeTheCopCongrats(struct tScreenBeTheCopCongrats *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 151, offset 0x800497c0
	/* begin block 1 */
		// Start line: 152
		// Start offset: 0x800497C0
	/* end block 1 */
	// End offset: 0x800497C0
	// End Line: 152

	/* begin block 2 */
		// Start line: 1006
	/* end block 2 */
	// End Line: 1007

	/* begin block 3 */
		// Start line: 1006
	/* end block 3 */
	// End Line: 1007

	/* begin block 4 */
		// Start line: 302
	/* end block 4 */
	// End Line: 303

void ___23tScreenBeTheCopCongrats(tScreenBeTheCopCongrats *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._25tScreenTournamentCongrats(struct tScreenTournamentCongrats *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 161, offset 0x800497a0
	/* begin block 1 */
		// Start line: 162
		// Start offset: 0x800497A0
	/* end block 1 */
	// End offset: 0x800497A0
	// End Line: 162

	/* begin block 2 */
		// Start line: 322
	/* end block 2 */
	// End Line: 323

void ___25tScreenTournamentCongrats(tScreenTournamentCongrats *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
