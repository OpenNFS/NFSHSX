#ifndef SCREENPOST_H
#define SCREENPOST_H


extern void DrawMoney__Fiiilii(int x, int y, int numplaces, long number, int colfore, int colback); // 0x800397F0

extern struct tScreenTournamentStandings * __26tScreenTournamentStandings(struct tScreenTournamentStandings *this); // 0x80039928

extern void Initialize__26tScreenTournamentStandings(struct tScreenTournamentStandings *this); // 0x80039960

extern void Cleanup__26tScreenTournamentStandings(struct tScreenTournamentStandings *this); // 0x80039AEC

extern void GetShapeInfo__26tScreenTournamentStandingsRsT1PPcT3(struct tScreenTournamentStandings *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x80039B0C

extern void GetShapeInfo__31tScreenTournamentStandings3itemRsT1PPcT3(struct tScreenTournamentStandings3item *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x80039B30

extern void ProcessInput__26tScreenTournamentStandings7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenTournamentStandings *this, enum tInputKeyType *keyval); // 0x80039B54

extern void DrawBackground__26tScreenTournamentStandings(struct tScreenTournamentStandings *this); // 0x80039B84

extern void DrawBackground__24tScreenPinkSlipStandings(struct tScreenPinkSlipStandings *this); // 0x8003A448


extern void _._26tScreenTournamentStandings(struct tScreenTournamentStandings *this, int __in_chrg); // 0x8003A8CC

extern void _._31tScreenTournamentStandings3item(struct tScreenTournamentStandings3item *this, int __in_chrg); // 0x8003A8AC

extern void ProcessInput__24tScreenPinkSlipStandings7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenPinkSlipStandings *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x8003A86C

extern void _._24tScreenPinkSlipStandings(struct tScreenPinkSlipStandings *this, int __in_chrg); // 0x8003A88C


// decompiled code
// original method signature: 
// void /*$ra*/ _._26tScreenTournamentStandings(struct tScreenTournamentStandings *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 64, offset 0x8003a8cc
	/* begin block 1 */
		// Start line: 127
	/* end block 1 */
	// End Line: 128

	/* begin block 2 */
		// Start line: 1137
	/* end block 2 */
	// End Line: 1138

	/* begin block 3 */
		// Start line: 128
	/* end block 3 */
	// End Line: 129

void ___26tScreenTournamentStandings(tScreenTournamentStandings *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._31tScreenTournamentStandings3item(struct tScreenTournamentStandings3item *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 72, offset 0x8003a8ac
	/* begin block 1 */
		// Start line: 73
		// Start offset: 0x8003A8AC
	/* end block 1 */
	// End offset: 0x8003A8AC
	// End Line: 73

	/* begin block 2 */
		// Start line: 802
	/* end block 2 */
	// End Line: 803

	/* begin block 3 */
		// Start line: 802
	/* end block 3 */
	// End Line: 803

	/* begin block 4 */
		// Start line: 144
	/* end block 4 */
	// End Line: 145

void ___31tScreenTournamentStandings3item(tScreenTournamentStandings3item *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__24tScreenPinkSlipStandings7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenPinkSlipStandings *this /*$a0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyval /*$a2*/, struct tMenuCommand *command /*$a3*/)
 // line 80, offset 0x8003a86c
	/* begin block 1 */
		// Start line: 81
		// Start offset: 0x8003A86C
	/* end block 1 */
	// End offset: 0x8003A86C
	// End Line: 81

	/* begin block 2 */
		// Start line: 160
	/* end block 2 */
	// End Line: 161

void ProcessInput__24tScreenPinkSlipStandings7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tScreenPinkSlipStandings *this,tPlayer fromPlayer,tInputKeyType *keyval,
               tMenuCommand *command)

{
  ProcessInput__7tScreen7tPlayerR13tInputKeyTypeR12tMenuCommand
            ((tScreen *)this,fromPlayer,keyval,command);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._24tScreenPinkSlipStandings(struct tScreenPinkSlipStandings *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 82, offset 0x8003a88c
	/* begin block 1 */
		// Start line: 83
		// Start offset: 0x8003A88C

		/* begin block 1.1 */
			// Start line: 83
			// Start offset: 0x8003A88C
		/* end block 1.1 */
		// End offset: 0x8003A88C
		// End Line: 83
	/* end block 1 */
	// End offset: 0x8003A88C
	// End Line: 83

	/* begin block 2 */
		// Start line: 162
	/* end block 2 */
	// End Line: 163

	/* begin block 3 */
		// Start line: 488
	/* end block 3 */
	// End Line: 489

	/* begin block 4 */
		// Start line: 164
	/* end block 4 */
	// End Line: 165

void ___24tScreenPinkSlipStandings(tScreenPinkSlipStandings *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
