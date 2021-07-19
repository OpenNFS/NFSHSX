#include "THISDUST.H"
#include "SCREENPOST.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DrawMoney__Fiiilii(int x /*$s1*/, int y /*$s3*/, int numplaces /*$a2*/, long number /*$s2*/, int colfore /*stack 16*/, int colback /*stack 20*/)
 // line 47, offset 0x800397f0
	/* begin block 1 */
		// Start line: 48
		// Start offset: 0x800397F0
		// Variables:
	// 		char string1[50]; // stack offset -136
	// 		char string2[50]; // stack offset -80
	/* end block 1 */
	// End offset: 0x800398B0
	// End Line: 66

	/* begin block 2 */
		// Start line: 94
	/* end block 2 */
	// End Line: 95

	/* begin block 3 */
		// Start line: 94
	/* end block 3 */
	// End Line: 95

void DrawMoney__Fiiilii(int x,int y,int numplaces,long number,int colfore,int colback)

{
  char *__format;
  char acStack136 [56];
  char acStack80 [56];
  
  if (numplaces == 6) {
    __format = TextSys_Word__Fi(0x87);
    sprintf(acStack136,__format,0,0);
  }
  else {
    if (numplaces < 7) {
      if (numplaces == 3) {
        __format = TextSys_Word__Fi(0x86);
        sprintf(acStack136,__format,0);
      }
    }
    else {
      if (numplaces == 9) {
        __format = TextSys_Word__Fi(0x88);
        sprintf(acStack136,__format,0,0,0);
      }
    }
  }
  FeTools_FormatMoney__FPcl(acStack80,number);
  FETextRender_FullTextRGB__FPcssics(acStack80,(short)x,(short)y,colfore,0,1);
  FETextRender_FullTextRGB__FPcssics(acStack136,(short)x,(short)y,colback,0,1);
  return;
}



// decompiled code
// original method signature: 
// struct tScreenTournamentStandings * /*$ra*/ __26tScreenTournamentStandings(struct tScreenTournamentStandings *this /*$s0*/)
 // line 80, offset 0x80039928
	/* begin block 1 */
		// Start line: 81
		// Start offset: 0x80039928
	/* end block 1 */
	// End offset: 0x80039928
	// End Line: 81

	/* begin block 2 */
		// Start line: 160
	/* end block 2 */
	// End Line: 161

	/* begin block 3 */
		// Start line: 165
	/* end block 3 */
	// End Line: 166

	/* begin block 4 */
		// Start line: 165
	/* end block 4 */
	// End Line: 166

tScreenTournamentStandings * __26tScreenTournamentStandings(tScreenTournamentStandings *this)

{
  __7tScreen((tScreen *)this);
  *(undefined4 *)((this->tScreen)._vf + 2) = 0x80011a48;
  this->gotbilled = (void *)0x0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__26tScreenTournamentStandings(struct tScreenTournamentStandings *this /*$s0*/)
 // line 85, offset 0x80039960
	/* begin block 1 */
		// Start line: 86
		// Start offset: 0x80039960
		// Variables:
	// 		struct tAwardInformation tInfo; // stack offset -88

		/* begin block 1.1 */
			// Start line: 86
			// Start offset: 0x80039960

			/* begin block 1.1.1 */
				// Start line: 98
				// Start offset: 0x800399A0

				/* begin block 1.1.1.1 */
					// Start line: 100
					// Start offset: 0x800399B4

					/* begin block 1.1.1.1.1 */
						// Start line: 100
						// Start offset: 0x800399B4
					/* end block 1.1.1.1.1 */
					// End offset: 0x800399B4
					// End Line: 100
				/* end block 1.1.1.1 */
				// End offset: 0x800399B4
				// End Line: 100
			/* end block 1.1.1 */
			// End offset: 0x80039A94
			// End Line: 116

			/* begin block 1.1.2 */
				// Start line: 119
				// Start offset: 0x80039AB4

				/* begin block 1.1.2.1 */
					// Start line: 119
					// Start offset: 0x80039AB4

					/* begin block 1.1.2.1.1 */
						// Start line: 119
						// Start offset: 0x80039AB4
					/* end block 1.1.2.1.1 */
					// End offset: 0x80039AB4
					// End Line: 119
				/* end block 1.1.2.1 */
				// End offset: 0x80039AB4
				// End Line: 119
			/* end block 1.1.2 */
			// End offset: 0x80039AC8
			// End Line: 119
		/* end block 1.1 */
		// End offset: 0x80039AC8
		// End Line: 119

		/* begin block 1.2 */
			// Start line: 119
			// Start offset: 0x80039AC8

			/* begin block 1.2.1 */
				// Start line: 119
				// Start offset: 0x80039AC8
			/* end block 1.2.1 */
			// End offset: 0x80039AC8
			// End Line: 119
		/* end block 1.2 */
		// End offset: 0x80039AC8
		// End Line: 119
	/* end block 1 */
	// End offset: 0x80039AC8
	// End Line: 119

	/* begin block 2 */
		// Start line: 172
	/* end block 2 */
	// End Line: 173

	/* begin block 3 */
		// Start line: 176
	/* end block 3 */
	// End Line: 177

	/* begin block 4 */
		// Start line: 176
	/* end block 4 */
	// End Line: 177

void Initialize__26tScreenTournamentStandings(tScreenTournamentStandings *this)

{
  int iVar1;
  int iVar2;
  tAwardInformation local_58;
  
  Initialize__7tScreen((tScreen *)this);
  GetAwardInformation__18tTournamentManagerR17tAwardInformation(&tournamentManager,&local_58);
  this->starttick = 0;
  this->gotmoney = (void *)0x0;
  this->gotbonus = (void *)0x0;
  if (this->gotbilled == (void *)0x0) {
    *(long *)((this->tScreen)._vf + 6) = tournamentManager.fMoney - local_58.fTournMoney;
  }
  else {
    if (local_58.fMoney != 0) {
      this->starttick = 1;
    }
    local_58.fTournMoney = tournamentManager.fMoney - local_58.fTournMoney;
    *(int *)((this->tScreen)._vf + 6) = local_58.fTournMoney;
    if (local_58.fCompletedGarageFull != (void *)0x0) {
      *(int *)((this->tScreen)._vf + 6) = local_58.fTournMoney - local_58.fCompletedBonusMoney;
    }
    this->moneyFinal = local_58.fMoney;
    CalcTrackFinishDamageBill__18tTournamentManagerbRlT2
              (&tournamentManager,(void *)0x0,&this->moneyAwarded,&this->moneyDamage);
    if (0 < this->moneyDamage) {
      *(undefined **)&this->gotmoney = &DAT_00000001;
    }
    if (0 < this->moneyAwarded) {
      *(undefined **)&this->gotbonus = &DAT_00000001;
    }
    this->fDrawMoney = (void *)0x0;
    if (((this->moneyDamage == 0) && (this->moneyAwarded == 0)) && (this->moneyFinal == 0)) {
      *(undefined **)&this->fDrawMoney = &DAT_00000001;
    }
    this->fCountedDown = (void *)0x0;
    iVar2 = this->moneyDamage;
    if (this->moneyDamage < local_58.fMoney) {
      iVar2 = local_58.fMoney;
    }
    iVar1 = this->moneyAwarded;
    if (this->moneyAwarded < iVar2) {
      iVar1 = iVar2;
    }
    this->fStartCountdownNOW = (void *)((iVar1 / 6 + (iVar1 >> 0x1f) >> 2) - (iVar1 >> 0x1f));
  }
  *(uchar **)&this->moneyBonus = ticks;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__26tScreenTournamentStandings(struct tScreenTournamentStandings *this /*$a0*/)
 // line 124, offset 0x80039aec
	/* begin block 1 */
		// Start line: 125
		// Start offset: 0x80039AEC
	/* end block 1 */
	// End offset: 0x80039AEC
	// End Line: 125

	/* begin block 2 */
		// Start line: 256
	/* end block 2 */
	// End Line: 257

	/* begin block 3 */
		// Start line: 260
	/* end block 3 */
	// End Line: 261

	/* begin block 4 */
		// Start line: 260
	/* end block 4 */
	// End Line: 261

void Cleanup__26tScreenTournamentStandings(tScreenTournamentStandings *this)

{
  this->gotbilled = (void *)0x0;
  Cleanup__7tScreen((tScreen *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__26tScreenTournamentStandingsRsT1PPcT3(struct tScreenTournamentStandings *this /*$a0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$a3*/, char **swapFileName /*stack 16*/)
 // line 133, offset 0x80039b0c
	/* begin block 1 */
		// Start line: 134
		// Start offset: 0x80039B0C
	/* end block 1 */
	// End offset: 0x80039B0C
	// End Line: 134

	/* begin block 2 */
		// Start line: 274
	/* end block 2 */
	// End Line: 275

	/* begin block 3 */
		// Start line: 278
	/* end block 3 */
	// End Line: 279

	/* begin block 4 */
		// Start line: 278
	/* end block 4 */
	// End Line: 279

void GetShapeInfo__26tScreenTournamentStandingsRsT1PPcT3
               (tScreenTournamentStandings *this,short *numPermShapes,short *numSwapShapes,
               char **permFileName,char **swapFileName)

{
  *numSwapShapes = 0;
  *swapFileName = (char *)0x0;
  *numPermShapes = 0x29;
  *permFileName = s_zTrnSt1_8001198c;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__31tScreenTournamentStandings3itemRsT1PPcT3(struct tScreenTournamentStandings3item *this /*$a0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$a3*/, char **swapFileName /*stack 16*/)
 // line 142, offset 0x80039b30
	/* begin block 1 */
		// Start line: 143
		// Start offset: 0x80039B30
	/* end block 1 */
	// End offset: 0x80039B30
	// End Line: 143

	/* begin block 2 */
		// Start line: 291
	/* end block 2 */
	// End Line: 292

	/* begin block 3 */
		// Start line: 296
	/* end block 3 */
	// End Line: 297

	/* begin block 4 */
		// Start line: 296
	/* end block 4 */
	// End Line: 297

void GetShapeInfo__31tScreenTournamentStandings3itemRsT1PPcT3
               (tScreenTournamentStandings3item *this,short *numPermShapes,short *numSwapShapes,
               char **permFileName,char **swapFileName)

{
  *numSwapShapes = 0;
  *swapFileName = (char *)0x0;
  *numPermShapes = 0x29;
  *permFileName = s_zTrnStd_80011994;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__26tScreenTournamentStandings7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenTournamentStandings *this /*$a0*/, enum tInputKeyType *keyval /*$a2*/)
 // line 152, offset 0x80039b54
	/* begin block 1 */
		// Start line: 153
		// Start offset: 0x80039B54
	/* end block 1 */
	// End offset: 0x80039B7C
	// End Line: 159

	/* begin block 2 */
		// Start line: 310
	/* end block 2 */
	// End Line: 311

	/* begin block 3 */
		// Start line: 316
	/* end block 3 */
	// End Line: 317

	/* begin block 4 */
		// Start line: 316
	/* end block 4 */
	// End Line: 317

	/* begin block 5 */
		// Start line: 317
	/* end block 5 */
	// End Line: 318

	/* begin block 6 */
		// Start line: 317
	/* end block 6 */
	// End Line: 318

void ProcessInput__26tScreenTournamentStandings7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tScreenTournamentStandings *this,tInputKeyType *keyval)

{
  int *in_a2;
  
  if ((*in_a2 == 2) && (this->fDrawMoney == (void *)0x0)) {
    *in_a2 = 1;
    *(undefined **)&this->fCountedDown = &DAT_00000001;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__26tScreenTournamentStandings(struct tScreenTournamentStandings *this /*$s7*/)
 // line 164, offset 0x80039b84
	/* begin block 1 */
		// Start line: 165
		// Start offset: 0x80039B84
		// Variables:
	// 		int fade; // $fp
	// 		int fadeline; // stack offset -60
	// 		int i; // $s4
	// 		int j; // $s3
	// 		struct tTourneyInfo *tourneyInfo; // stack offset -56
	// 		char sBuildOutput[80]; // stack offset -216
	// 		enum tMenuTextState state; // $s5
	// 		enum tMenuTextState statedull; // $s2
	// 		struct tTrackInformation trackInfo; // stack offset -136
	// 		int wwwww; // $s1
	// 		struct tTexture_ShapeInfo *shape; // $a0
	// 		int lbx; // $s2
	// 		int tt; // $s0
	// 		struct tDrawShapeExtended drawflags; // stack offset -88
	// 		int colf; // $s3
	// 		int colb; // $s2

		/* begin block 1.1 */
			// Start line: 165
			// Start offset: 0x80039B84

			/* begin block 1.1.1 */
				// Start line: 165
				// Start offset: 0x80039B84
			/* end block 1.1.1 */
			// End offset: 0x80039B84
			// End Line: 165
		/* end block 1.1 */
		// End offset: 0x80039B84
		// End Line: 165

		/* begin block 1.2 */
			// Start line: 165
			// Start offset: 0x80039B84

			/* begin block 1.2.1 */
				// Start line: 165
				// Start offset: 0x80039B84
			/* end block 1.2.1 */
			// End offset: 0x80039B84
			// End Line: 165
		/* end block 1.2 */
		// End offset: 0x80039B84
		// End Line: 165

		/* begin block 1.3 */
			// Start line: 165
			// Start offset: 0x80039B84

			/* begin block 1.3.1 */
				// Start line: 184
				// Start offset: 0x80039C34
				// Variables:
			// 		short p; // stack offset -64

				/* begin block 1.3.1.1 */
					// Start line: 209
					// Start offset: 0x80039CE0
					// Variables:
				// 		int j; // $s3

					/* begin block 1.3.1.1.1 */
						// Start line: 209
						// Start offset: 0x80039CE0
					/* end block 1.3.1.1.1 */
					// End offset: 0x80039CE0
					// End Line: 209
				/* end block 1.3.1.1 */
				// End offset: 0x80039CE0
				// End Line: 209
			/* end block 1.3.1 */
			// End offset: 0x80039DB8
			// End Line: 224
		/* end block 1.3 */
		// End offset: 0x80039E08
		// End Line: 225

		/* begin block 1.4 */
			// Start line: 236
			// Start offset: 0x80039EC8

			/* begin block 1.4.1 */
				// Start line: 236
				// Start offset: 0x80039EC8
			/* end block 1.4.1 */
			// End offset: 0x80039EC8
			// End Line: 236
		/* end block 1.4 */
		// End offset: 0x80039EC8
		// End Line: 236

		/* begin block 1.5 */
			// Start line: 255
			// Start offset: 0x80039FD0

			/* begin block 1.5.1 */
				// Start line: 255
				// Start offset: 0x80039FD0
			/* end block 1.5.1 */
			// End offset: 0x80039FD0
			// End Line: 255
		/* end block 1.5 */
		// End offset: 0x80039FD0
		// End Line: 255

		/* begin block 1.6 */
			// Start line: 255
			// Start offset: 0x80039FD0

			/* begin block 1.6.1 */
				// Start line: 255
				// Start offset: 0x80039FD0

				/* begin block 1.6.1.1 */
					// Start line: 255
					// Start offset: 0x80039FD0
				/* end block 1.6.1.1 */
				// End offset: 0x80039FD0
				// End Line: 255
			/* end block 1.6.1 */
			// End offset: 0x80039FD0
			// End Line: 255
		/* end block 1.6 */
		// End offset: 0x8003A190
		// End Line: 283
	/* end block 1 */
	// End offset: 0x8003A360
	// End Line: 309

	/* begin block 2 */
		// Start line: 334
	/* end block 2 */
	// End Line: 335

	/* begin block 3 */
		// Start line: 340
	/* end block 3 */
	// End Line: 341

	/* begin block 4 */
		// Start line: 340
	/* end block 4 */
	// End Line: 341

/* WARNING: Type propagation algorithm not settling */

void DrawBackground__26tScreenTournamentStandings(tScreenTournamentStandings *this)

{
  short trackNumber;
  char *sMenuText;
  int y;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  tMenuItemGoToMenuNFS4Button *this_00;
  long lVar4;
  tMenuTextState textState;
  int x;
  int w;
  tMenuTextState textState_00;
  int colback;
  int fade;
  char acStack216 [80];
  tTrackInformation tStack136;
  tDrawShapeExtended tStack88;
  short local_40 [2];
  int local_3c;
  tTourneyInfo *local_38;
  int local_34;
  int local_30;
  
  w = 0;
  fade = (int)(this->tScreen).fScreenFadeVal;
  colback = 0x2fe;
  local_38 = (tournamentManager.fDefinition)->fTournaments +
             (uint)(tournamentManager.fDefinition)->fTiers[tournamentManager.fTier].fTournOffset +
             tournamentManager.fTournament;
  local_34 = (int)(((int)(short)tournamentManager.fNumRacers + (uint)(local_38->fKnockout != '\0'))
                  * 0x10000) >> 0x10;
  local_30 = local_34 + -1;
  local_3c = fade;
  while (w < local_34) {
    trackNumber = PlayerRanking__18tTournamentManagers
                            (&tournamentManager,(short)((uint)((w + 1) * 0x10000) >> 0x10));
    x = (int)trackNumber;
    textState_00 = textState_Selected;
    if (x == 0) {
      textState_00 = textState_Hilighted;
      textState = textState_Hilighted;
    }
    else {
      textState = textState_Unselected;
    }
    sMenuText = TextSys_Word__Fi(w + 599);
    y = TextSys_WordX__Fi(0x2f7);
    iVar1 = TextSys_WordY__Fi(colback);
    FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
              (fade,sMenuText,(short)y,(short)iVar1,textType_TrackRecords,textState,0);
    if (x == 0) {
      sMenuText = PlayerName__Fi(0);
    }
    else {
      sMenuText = Stattool_GetAINameFromPersonality__F14tPersonalities
                            (tournamentManager.fCompetitors[x].fPersonality);
    }
    x = TextSys_WordX__Fi(0x2f8);
    y = TextSys_WordY__Fi(colback);
    FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
              (fade,sMenuText,(short)x,(short)y,textType_TrackRecords,textState_00,0);
    if (local_38->fKnockout == '\0') {
      local_40[0] = trackNumber;
      trackNumber = TournPointTotal__18tTournamentManagerPs(&tournamentManager,local_40);
      sMenuText = TextSys_Word__Fi(0x31d);
      sprintf(acStack216,s__d__s_8001199c,(int)trackNumber,sMenuText);
    }
    else {
      x = 0x31b;
      if (w == local_30) {
        x = 0x31c;
      }
      local_40[0] = trackNumber;
      sMenuText = TextSys_Word__Fi(x);
      sprintf(acStack216,sMenuText);
    }
    x = TextSys_WordX__Fi(0x2fb);
    y = TextSys_WordY__Fi(colback);
    FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
              (fade,acStack216,(short)x,(short)y,textType_TrackRecords,textState_00,1);
    colback = colback + 1;
    w = w + 1;
  }
  trackNumber = Front_GetTrackRaced__Fv();
  GetTrack__13tTrackManagersR17tTrackInformation(&trackManager,trackNumber,&tStack136);
  trackNumber = Front_GetTrackRaced__Fv();
  sMenuText = TextSys_Word__Fi((int)trackNumber + 0xd5);
  w = TextSys_WordX__Fi(0x2f6);
  colback = TextSys_WordY__Fi(0x2fd);
  FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
            (fade,sMenuText,(short)w,(short)colback,textType_TrackRecords,textState_Hilighted,2);
  if (frontEnd.tier == '\0') {
    this_00 = (tMenuItemGoToMenuNFS4Button *)
              ((menuDefs->itemHotPursuitSolo).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem
               ._vf + 4);
  }
  else {
    this_00 = &menuDefs->itemTournamentContinue;
  }
  trackNumber = TextValue__23tListIteratorTournament7tPlayer((tListIteratorTournament *)this_00);
  w = TextSys_WordX__Fi(0x2f6);
  colback = TextSys_WordY__Fi(0x2fc);
  FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType
            (fade,(short)((uint)(((int)trackNumber + 0x13) * 0x10000) >> 0x10),(short)w,
             (short)colback,2,textState_Hilighted,textType_TrackRecords);
  sMenuText = TextSys_Word__Fi((int)trackNumber + 0x13);
  w = textpixels(sMenuText);
  colback = TextSys_WordX__Fi(0x2f6);
  x = TextSys_WordY__Fi(0x2fc);
  PSXDrawSquare__Fiiiii(0,colback - (w >> 1),x + -1,w,9);
  uVar2 = (uint)*(ushort *)&gCurrentShapes[0x23].clutID << 0x10;
  w = (int)uVar2 >> 0x10;
  colback = (int)ticks % w;
  if (w == 0) {
    trap(0x1c00);
  }
  if ((w == -1) && (ticks == &DAT_80000000)) {
    trap(0x1800);
  }
  x = (((int)uVar2 >> 0x11) + -2) - (int)*(short *)&gCurrentShapes[0x23].depth;
  if ((int)(w + (uVar2 >> 0x1f)) >> 1 < colback) {
    colback = w - colback;
  }
  w = TextSys_WordY__Fi(0x2fc);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x28,0,x + colback,w + 1,(int)(this->tScreen).fScreenFadeVal,1,
             (tDrawShapeExtended *)0x0);
  w = TextSys_WordY__Fi(0x2fc);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x28,0,x - colback,w + 1,(int)(this->tScreen).fScreenFadeVal,1,
             (tDrawShapeExtended *)0x0);
  tStack88.tint[0] = &DAT_00282828;
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x27,0x400,0,-1,(int)(this->tScreen).fScreenFadeVal,0,&tStack88);
  w = TextSys_WordX__Fi(0x2f6);
  colback = TextSys_WordY__Fi(0x2fd);
  PSXDrawBrightEndLine__Fiiiiiiii((int)&DAT_00232323,w + -0x96,colback + 10,300,1,3,local_3c,0x1e);
  w = CalcFadeVal__Fii(kRGBVals[(uint)DAT_800515ff],fade);
  colback = CalcFadeVal__Fii((int)&DAT_00232323,fade);
  if ((1000 < (int)(ticks + -this->moneyBonus)) || (this->fCountedDown != (void *)0x0)) {
    if ((0 < this->moneyFinal) || ((0 < this->moneyAwarded || (0 < this->moneyDamage)))) {
      AudioCmn_PlayFESFX__Fi(0x15);
    }
    pvVar3 = this->fStartCountdownNOW;
    x = this->moneyFinal - (int)pvVar3;
    this->moneyFinal = x;
    if (x < 1) {
      this->moneyFinal = 0;
      x = this->moneyAwarded - (int)pvVar3;
      this->moneyAwarded = x;
      if (x < 1) {
        *(undefined **)&this->fDrawMoney = &DAT_00000001;
        lVar4 = this->moneyDamage - (int)pvVar3;
        this->moneyAwarded = 0;
        if (lVar4 < 0) {
          lVar4 = 0;
        }
        this->moneyDamage = lVar4;
      }
    }
  }
  if (this->gotbilled != (void *)0x0) {
    sMenuText = TextSys_Word__Fi(0x312);
    x = TextSys_WordX__Fi(0x2fa);
    y = TextSys_WordY__Fi(0x312);
    FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
              (fade,sMenuText,(short)x,(short)y,textType_TrackRecords,(uint)(this->starttick != 0),1
              );
    x = TextSys_WordX__Fi(0x2fb);
    y = TextSys_WordY__Fi(0x312);
    DrawMoney__Fiiilii(x,y,6,this->moneyFinal,w,colback);
    sMenuText = TextSys_Word__Fi(0x313);
    x = TextSys_WordX__Fi(0x2fa);
    y = TextSys_WordY__Fi(0x313);
    FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
              (fade,sMenuText,(short)x,(short)y,textType_TrackRecords,
               (uint)(this->gotbonus != (void *)0x0),1);
    x = TextSys_WordX__Fi(0x2fb);
    y = TextSys_WordY__Fi(0x313);
    DrawMoney__Fiiilii(x,y,6,this->moneyAwarded,w,colback);
    sMenuText = TextSys_Word__Fi(0x314);
    x = TextSys_WordX__Fi(0x2fa);
    y = TextSys_WordY__Fi(0x314);
    FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
              (fade,sMenuText,(short)x,(short)y,textType_TrackRecords,
               (uint)(this->gotmoney != (void *)0x0),1);
    x = TextSys_WordX__Fi(0x2fb);
    y = TextSys_WordY__Fi(0x314);
    DrawMoney__Fiiilii(x,y,6,this->moneyDamage,w,colback);
  }
  sMenuText = TextSys_Word__Fi(0x315);
  x = TextSys_WordX__Fi(0x2fa);
  y = TextSys_WordY__Fi(0x315);
  FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
            (fade,sMenuText,(short)x,(short)y,textType_TrackRecords,textState_Hilighted,1);
  fade = TextSys_WordX__Fi(0x2fb);
  x = TextSys_WordY__Fi(0x315);
  DrawMoney__Fiiilii(fade,x,9,((*(int *)((this->tScreen)._vf + 6) - this->moneyFinal) +
                              this->moneyAwarded) - this->moneyDamage,w,colback);
  DrawBackgroundImage__7tScreeniiP18tTexture_ShapeInfoi((tScreen *)this,10,0x1d,gCurrentShapes,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__24tScreenPinkSlipStandings(struct tScreenPinkSlipStandings *this /*$fp*/)
 // line 320, offset 0x8003a448
	/* begin block 1 */
		// Start line: 321
		// Start offset: 0x8003A448
		// Variables:
	// 		int fade; // $s5
	// 		char sBuildOutput[50]; // stack offset -176
	// 		int i; // $s2
	// 		enum tMenuTextState state; // $s4
	// 		enum tMenuTextType type; // $s6
	// 		int wwwww; // $s1
	// 		struct tTexture_ShapeInfo *shape; // $a0
	// 		int lbx; // $s2
	// 		int tt; // $s1
	// 		struct tDrawShapeExtended drawflags; // stack offset -120

		/* begin block 1.1 */
			// Start line: 321
			// Start offset: 0x8003A448

			/* begin block 1.1.1 */
				// Start line: 333
				// Start offset: 0x8003A490
				// Variables:
			// 		struct tTrackInformation trackInfo; // stack offset -120
			// 		char string[30]; // stack offset -72
			/* end block 1.1.1 */
			// End offset: 0x8003A55C
			// End Line: 355
		/* end block 1.1 */
		// End offset: 0x8003A5A8
		// End Line: 356

		/* begin block 1.2 */
			// Start line: 381
			// Start offset: 0x8003A698

			/* begin block 1.2.1 */
				// Start line: 381
				// Start offset: 0x8003A698
			/* end block 1.2.1 */
			// End offset: 0x8003A698
			// End Line: 381
		/* end block 1.2 */
		// End offset: 0x8003A698
		// End Line: 381
	/* end block 1 */
	// End offset: 0x8003A794
	// End Line: 396

	/* begin block 2 */
		// Start line: 685
	/* end block 2 */
	// End Line: 686

	/* begin block 3 */
		// Start line: 693
	/* end block 3 */
	// End Line: 694

	/* begin block 4 */
		// Start line: 693
	/* end block 4 */
	// End Line: 694

void DrawBackground__24tScreenPinkSlipStandings(tScreenPinkSlipStandings *this)

{
  int wordnum;
  int iVar1;
  char *sMenuText;
  int iVar2;
  int player;
  uint uVar3;
  tMenuTextState textState;
  int fade;
  char acStack176 [56];
  char local_78 [4];
  undefined *local_74;
  char acStack72 [32];
  
  uVar3 = 0;
  player = 0x2fe;
  fade = (int)(this->tScreenTournamentStandings3item).tScreenTournamentStandings.tScreen.
              fScreenFadeVal;
  while (textState = textState_Hilighted, (int)uVar3 < (int)(uint)(byte)frontEnd.pinkSlipsNumTracks)
  {
    if (uVar3 != (uint)(byte)frontEnd.pinkSlipsTrackIndex) {
      textState = (tMenuTextState)((int)uVar3 < (int)(uint)(byte)frontEnd.pinkSlipsTrackIndex);
    }
    GetTrack__13tTrackManagersR17tTrackInformation
              (&trackManager,(ushort)(byte)frontEnd.track[uVar3],(tTrackInformation *)local_78);
    wordnum = TextSys_WordX__Fi(0x2f7);
    iVar1 = TextSys_WordY__Fi(player);
    FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType
              ((int)(this->tScreenTournamentStandings3item).tScreenTournamentStandings.tScreen.
                    fScreenFadeVal,(short)((uint)(((int)local_78[0] + 0xd5) * 0x10000) >> 0x10),
               (short)wordnum,(short)iVar1,0,textState,textType_TrackRecords);
    if ((int)frontEnd.pinkSlipsWinner[uVar3] == -1) {
      sMenuText = TextSys_Word__Fi(0x30d);
    }
    else {
      sMenuText = PlayerName__Fi((int)frontEnd.pinkSlipsWinner[uVar3]);
    }
    sprintf(acStack72,sMenuText);
    wordnum = TextSys_WordX__Fi(0x2fb);
    iVar1 = TextSys_WordY__Fi(player);
    FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
              (fade,acStack72,(short)wordnum,(short)iVar1,textType_TrackRecords,textState,1);
    player = player + 1;
    uVar3 = uVar3 + 1;
  }
  player = 0;
  wordnum = 0x313;
  do {
    sMenuText = PlayerName__Fi(player);
    iVar1 = TextSys_WordX__Fi(0x2f8);
    iVar2 = TextSys_WordY__Fi(wordnum);
    FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
              (fade,sMenuText,(short)iVar1,(short)iVar2,textType_TrackRecords,textState_Hilighted,0)
    ;
    if (frontEnd.pinkSlipsWins[player] == '\x01') {
      sMenuText = TextSys_Word__Fi(799);
      sprintf(acStack176,sMenuText);
    }
    else {
      sMenuText = TextSys_Word__Fi(0x31e);
      sprintf(acStack176,sMenuText,(uint)(byte)frontEnd.pinkSlipsWins[player]);
    }
    iVar1 = TextSys_WordX__Fi(0x2fb);
    iVar2 = TextSys_WordY__Fi(wordnum);
    FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
              (fade,acStack176,(short)iVar1,(short)iVar2,textType_TrackRecords,textState_Hilighted,1
              );
    player = player + 1;
    wordnum = wordnum + 1;
  } while (player < 2);
  player = TextSys_WordX__Fi(0x2f6);
  wordnum = TextSys_WordY__Fi(0x2fc);
  FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType
            (fade,0x2c1,(short)player,(short)wordnum,2,textState_Hilighted,textType_TrackRecords);
  sMenuText = TextSys_Word__Fi(0x2c1);
  player = textpixels(sMenuText);
  fade = TextSys_WordX__Fi(0x2f6);
  wordnum = TextSys_WordY__Fi(0x2fc);
  PSXDrawSquare__Fiiiii(0,fade - (player >> 1),wordnum + -1,player,9);
  uVar3 = (uint)*(ushort *)&gCurrentShapes[0x23].clutID << 0x10;
  player = (int)uVar3 >> 0x10;
  fade = (int)ticks % player;
  if (player == 0) {
    trap(0x1c00);
  }
  if ((player == -1) && (ticks == &DAT_80000000)) {
    trap(0x1800);
  }
  wordnum = (((int)uVar3 >> 0x11) + -2) - (int)*(short *)&gCurrentShapes[0x23].depth;
  if ((int)(player + (uVar3 >> 0x1f)) >> 1 < fade) {
    fade = player - fade;
  }
  local_74 = &DAT_00282828;
  player = TextSys_WordY__Fi(0x2fc);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x28,0,wordnum + fade,player + 1,
             (int)(this->tScreenTournamentStandings3item).tScreenTournamentStandings.tScreen.
                  fScreenFadeVal,1,(tDrawShapeExtended *)0x0);
  player = TextSys_WordY__Fi(0x2fc);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x28,0,wordnum - fade,player + 1,
             (int)(this->tScreenTournamentStandings3item).tScreenTournamentStandings.tScreen.
                  fScreenFadeVal,1,(tDrawShapeExtended *)0x0);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x27,0x400,0,-1,
             (int)(this->tScreenTournamentStandings3item).tScreenTournamentStandings.tScreen.
                  fScreenFadeVal,0,(tDrawShapeExtended *)local_78);
  DrawBackgroundImage__7tScreeniiP18tTexture_ShapeInfoi((tScreen *)this,10,0x1d,gCurrentShapes,0);
  return;
}





