#include "THISDUST.H"
#include "SCREENTROPHYROOM.H"


// decompiled code
// original method signature: 
// struct tScreenTrophyRoom * /*$ra*/ __17tScreenTrophyRoom(struct tScreenTrophyRoom *this /*$s0*/)
 // line 40, offset 0x80040570
	/* begin block 1 */
		// Start line: 41
		// Start offset: 0x80040570
	/* end block 1 */
	// End offset: 0x80040570
	// End Line: 41

	/* begin block 2 */
		// Start line: 80
	/* end block 2 */
	// End Line: 81

	/* begin block 3 */
		// Start line: 80
	/* end block 3 */
	// End Line: 81

tScreenTrophyRoom * __17tScreenTrophyRoom(tScreenTrophyRoom *this)

{
  __7tScreen((tScreen *)this);
  *(undefined4 *)((this->tScreen)._vf + 2) = 0x80011e28;
  *(undefined *)&this->fLoadingTrophy = 0;
  *(undefined2 *)&this->tier = 0;
  *(undefined2 *)((int)&this->tier + 2) = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._17tScreenTrophyRoom(struct tScreenTrophyRoom *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 48, offset 0x800405b0
	/* begin block 1 */
		// Start line: 49
		// Start offset: 0x800405B0
	/* end block 1 */
	// End offset: 0x800405B0
	// End Line: 49

	/* begin block 2 */
		// Start line: 94
	/* end block 2 */
	// End Line: 95

	/* begin block 3 */
		// Start line: 99
	/* end block 3 */
	// End Line: 100

	/* begin block 4 */
		// Start line: 99
	/* end block 4 */
	// End Line: 100

void ___17tScreenTrophyRoom(tScreenTrophyRoom *this,int __in_chrg)

{
  *(undefined4 *)((this->tScreen)._vf + 2) = 0x80011e28;
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__17tScreenTrophyRoomRsT1PPcT3(struct tScreenTrophyRoom *this /*$a0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$s1*/, char **swapFileName /*stack 16*/)
 // line 54, offset 0x800405d8
	/* begin block 1 */
		// Start line: 55
		// Start offset: 0x800405D8

		/* begin block 1.1 */
			// Start line: 55
			// Start offset: 0x800405D8

			/* begin block 1.1.1 */
				// Start line: 55
				// Start offset: 0x800405D8
			/* end block 1.1.1 */
			// End offset: 0x800405D8
			// End Line: 55
		/* end block 1.1 */
		// End offset: 0x800405D8
		// End Line: 55
	/* end block 1 */
	// End offset: 0x800405D8
	// End Line: 55

	/* begin block 2 */
		// Start line: 105
	/* end block 2 */
	// End Line: 106

	/* begin block 3 */
		// Start line: 111
	/* end block 3 */
	// End Line: 112

	/* begin block 4 */
		// Start line: 111
	/* end block 4 */
	// End Line: 112

void GetShapeInfo__17tScreenTrophyRoomRsT1PPcT3
               (tScreenTrophyRoom *this,short *numPermShapes,short *numSwapShapes,
               char **permFileName,char **swapFileName)

{
  *numPermShapes = 0x26;
  *numSwapShapes = 0x20;
  GetTrophyName__18tTournamentManagerP12tTourneyInfo11tTrophySizePci
            (&tournamentManager,
             (tournamentManager.fDefinition)->fTournaments +
             (uint)(tournamentManager.fDefinition)->fTiers[(uint)(byte)frontEnd.tier].fTournOffset +
             (uint)*(byte *)((int)&this->tier + (uint)(byte)frontEnd.tier * 2),ts_Small,
             gSwapFileName,-1);
  *permFileName = s_zTrophy_80011e0c;
  *swapFileName = gSwapFileName;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__17tScreenTrophyRoom7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenTrophyRoom *this /*$s0*/, enum tPlayer fromPlayer /*$s3*/, enum tInputKeyType *keyval /*$s1*/, struct tMenuCommand *command /*$s2*/)
 // line 67, offset 0x80040698
	/* begin block 1 */
		// Start line: 68
		// Start offset: 0x80040698
	/* end block 1 */
	// End offset: 0x80040878
	// End Line: 100

	/* begin block 2 */
		// Start line: 138
	/* end block 2 */
	// End Line: 139

	/* begin block 3 */
		// Start line: 142
	/* end block 3 */
	// End Line: 143

	/* begin block 4 */
		// Start line: 142
	/* end block 4 */
	// End Line: 143

void ProcessInput__17tScreenTrophyRoom7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tScreenTrophyRoom *this,tPlayer fromPlayer,tInputKeyType *keyval,
               tMenuCommand *command)

{
  short sVar1;
  short sVar2;
  tGlobalMenuDefs *ptVar3;
  undefined2 uVar4;
  uint uVar5;
  tTexture_ShapeInfo **pptVar6;
  tInputKeyType tVar7;
  int SFXnum;
  tTexture_ShapeInfo **pptVar8;
  
  ptVar3 = menuDefs;
  tVar7 = *keyval;
  if (tVar7 == kInput_KeyType_Cross) {
    command->type = kMenu_Command_GoToMenu;
    command->nextMenu = (tMenu *)((ptVar3->menuTrophyRoomSelect).tMenu.fItemList + 0xd);
    tVar7 = *keyval;
  }
  if ((tVar7 != kInput_KeyType_Up) && (tVar7 != kInput_KeyType_Down)) goto LAB_800407c8;
  pptVar8 = (tTexture_ShapeInfo **)
            ((int)&(this->tScreen).fPermShapes.fShapes + *(int *)&this->thisisuseless * 2);
  uVar5 = (uint)*(ushort *)&(this->fTrophyShapes).fLoadCancelled << 0x10;
  SFXnum = (int)(((int)uVar5 >> 0x10) + (uVar5 >> 0x1f)) >> 1;
  sVar1 = (short)SFXnum;
  if ((int)*(short *)(pptVar8 + 0x35) < SFXnum) {
    *(short *)(pptVar8 + 0x35) = *(short *)(pptVar8 + 0x35) + sVar1;
    SFXnum = 3;
  }
  else {
    *(short *)(pptVar8 + 0x35) = *(short *)(pptVar8 + 0x35) - sVar1;
    SFXnum = 4;
  }
  AudioCmn_PlayFESFX__Fi(SFXnum);
  pptVar8 = (tTexture_ShapeInfo **)
            ((int)&(this->tScreen).fPermShapes.fShapes + *(int *)&this->thisisuseless * 2);
  sVar1 = *(short *)(pptVar8 + 0x35);
  sVar2 = *(short *)&(this->fTrophyShapes).fLoadCancelled;
  if (sVar1 < 1) {
    if (0 < sVar2) goto LAB_8004078c;
LAB_800407b4:
    uVar4 = *(undefined2 *)&(this->fTrophyShapes).fLoadCancelled;
  }
  else {
    if (sVar2 <= sVar1) goto LAB_800407b4;
LAB_8004078c:
    pptVar6 = (tTexture_ShapeInfo **)
              ((int)&(this->tScreen).fPermShapes.fShapes + *(int *)&this->thisisuseless * 2);
    uVar4 = *(undefined2 *)(pptVar6 + 0x35);
    if (*(short *)(pptVar6 + 0x35) < 0) {
      uVar4 = 0;
    }
  }
  *(undefined2 *)(pptVar8 + 0x35) = uVar4;
  tVar7 = *keyval;
LAB_800407c8:
  if (tVar7 == kInput_KeyType_Left) {
    pptVar8 = (tTexture_ShapeInfo **)
              ((int)&(this->tScreen).fPermShapes.fShapes + *(int *)&this->thisisuseless * 2);
    *(short *)(pptVar8 + 0x35) = *(short *)(pptVar8 + 0x35) + -1;
    pptVar8 = (tTexture_ShapeInfo **)
              ((int)&(this->tScreen).fPermShapes.fShapes + *(int *)&this->thisisuseless * 2);
    if (*(short *)(pptVar8 + 0x35) < 0) {
      *(short *)(pptVar8 + 0x35) = *(short *)&(this->fTrophyShapes).fLoadCancelled + -1;
    }
  }
  if (*keyval == kInput_KeyType_Right) {
    pptVar8 = (tTexture_ShapeInfo **)
              ((int)&(this->tScreen).fPermShapes.fShapes + *(int *)&this->thisisuseless * 2);
    *(short *)(pptVar8 + 0x35) = *(short *)(pptVar8 + 0x35) + 1;
    pptVar8 = (tTexture_ShapeInfo **)
              ((int)&(this->tScreen).fPermShapes.fShapes + *(int *)&this->thisisuseless * 2);
    if (*(short *)&(this->fTrophyShapes).fLoadCancelled <= *(short *)(pptVar8 + 0x35)) {
      *(undefined2 *)(pptVar8 + 0x35) = 0;
    }
  }
  ProcessInput__7tScreen7tPlayerR13tInputKeyTypeR12tMenuCommand
            ((tScreen *)this,fromPlayer,keyval,command);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PreLoad__17tScreenTrophyRoom(struct tScreenTrophyRoom *this /*$s0*/)
 // line 103, offset 0x800408a8
	/* begin block 1 */
		// Start line: 104
		// Start offset: 0x800408A8
	/* end block 1 */
	// End offset: 0x800408F4
	// End Line: 112

	/* begin block 2 */
		// Start line: 211
	/* end block 2 */
	// End Line: 212

	/* begin block 3 */
		// Start line: 215
	/* end block 3 */
	// End Line: 216

	/* begin block 4 */
		// Start line: 215
	/* end block 4 */
	// End Line: 216

void PreLoad__17tScreenTrophyRoom(tScreenTrophyRoom *this)

{
  char *name;
  
  PreLoad__7tScreen((tScreen *)this);
  *(undefined4 *)((this->tScreen)._vf + 6) = 0;
  InitializeShapes__7tScreenR17tShapeInformationUi
            ((tScreen *)this,(tShapeInformation *)((this->tScreen)._vf + 6),8);
  if (frontEnd.tier == '\0') {
    name = s_zCase_80011e1c;
  }
  else {
    name = s_zCase2_80011e14;
  }
  AsyncLoadShapeFile__7tScreenPcR17tShapeInformation
            ((tScreen *)this,name,(tShapeInformation *)((this->tScreen)._vf + 6));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__17tScreenTrophyRoom(struct tScreenTrophyRoom *this /*$s0*/)
 // line 115, offset 0x80040910
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x80040910
		// Variables:
	// 		short i; // $s1

		/* begin block 1.1 */
			// Start line: 128
			// Start offset: 0x80040974

			/* begin block 1.1.1 */
				// Start line: 131
				// Start offset: 0x80040990

				/* begin block 1.1.1.1 */
					// Start line: 133
					// Start offset: 0x800409A8

					/* begin block 1.1.1.1.1 */
						// Start line: 133
						// Start offset: 0x800409A8
					/* end block 1.1.1.1.1 */
					// End offset: 0x800409A8
					// End Line: 133
				/* end block 1.1.1.1 */
				// End offset: 0x800409A8
				// End Line: 133

				/* begin block 1.1.1.2 */
					// Start line: 133
					// Start offset: 0x800409A8

					/* begin block 1.1.1.2.1 */
						// Start line: 133
						// Start offset: 0x800409A8
					/* end block 1.1.1.2.1 */
					// End offset: 0x800409A8
					// End Line: 133
				/* end block 1.1.1.2 */
				// End offset: 0x800409A8
				// End Line: 133
			/* end block 1.1.1 */
			// End offset: 0x80040A18
			// End Line: 141
		/* end block 1.1 */
		// End offset: 0x80040A50
		// End Line: 142

		/* begin block 1.2 */
			// Start line: 150
			// Start offset: 0x80040A9C

			/* begin block 1.2.1 */
				// Start line: 150
				// Start offset: 0x80040A9C
			/* end block 1.2.1 */
			// End offset: 0x80040A9C
			// End Line: 150
		/* end block 1.2 */
		// End offset: 0x80040A9C
		// End Line: 150
	/* end block 1 */
	// End offset: 0x80040A9C
	// End Line: 150

	/* begin block 2 */
		// Start line: 235
	/* end block 2 */
	// End Line: 236

	/* begin block 3 */
		// Start line: 239
	/* end block 3 */
	// End Line: 240

	/* begin block 4 */
		// Start line: 239
	/* end block 4 */
	// End Line: 240

void Initialize__17tScreenTrophyRoom(tScreenTrophyRoom *this)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  undefined2 uVar4;
  short sVar5;
  tTexture_ShapeInfo **pptVar6;
  uint uVar7;
  
  Initialize__7tScreen((tScreen *)this);
  do {
    systemtask(0);
    puVar1 = (undefined *)
             IsShapeFileLoaded__7tScreenR17tShapeInformation
                       ((tScreen *)this,(tShapeInformation *)((this->tScreen)._vf + 6));
  } while (puVar1 != &DAT_00000001);
  *(uint *)&this->thisisuseless = (uint)(byte)frontEnd.tier;
  uVar4 = 6;
  if (frontEnd.tier != '\0') {
    uVar4 = 8;
  }
  uVar7 = 0;
  *(undefined2 *)&(this->fTrophyShapes).fLoadCancelled = uVar4;
  *(undefined4 *)&this->fPreviousTrophy = 1;
  iVar3 = 0;
  while( true ) {
    iVar3 = iVar3 >> 0x10;
    if ((int)*(short *)&(this->fTrophyShapes).fLoadCancelled <= iVar3) break;
    this->fRealCurrentTourn[iVar3] = 1;
    sVar5 = 0;
    if ((int)tournamentManager.fBestPlacement
             [(int)(tournamentManager.fDefinition)->fTournaments
                   [(uint)(tournamentManager.fDefinition)->fTiers[(uint)(byte)frontEnd.tier].
                          fTournOffset + (uVar7 & 0xff)].fTournamentID] - 1U < 3) {
      sVar5 = (short)tournamentManager.fBestPlacement
                     [(int)(tournamentManager.fDefinition)->fTournaments
                           [(uint)(tournamentManager.fDefinition)->fTiers[(uint)(byte)frontEnd.tier]
                                  .fTournOffset + (uVar7 & 0xff)].fTournamentID];
    }
    uVar7 = uVar7 + 1;
    FETexture_LoadPmxAtOffset__FPciP18tTexture_ShapeInfoii
              ((char *)(this->fTrophyShapes).fShapes,iVar3 * 4 + (int)sVar5,
               (tTexture_ShapeInfo *)(*(int *)((this->tScreen)._vf + 6) + iVar3 * 0x20),0,0);
    iVar3 = uVar7 * 0x10000;
  }
  purgememadr((int)(this->fTrophyShapes).fShapes);
  (this->fTrophyShapes).fShapes = (tTexture_ShapeInfo *)0x0;
  this->fRealCurrentTourn[(int)*(short *)&(this->fTrophyShapes).fLoadCancelled] = 0;
  pptVar6 = (tTexture_ShapeInfo **)
            ((int)&(this->tScreen).fPermShapes.fShapes + *(int *)&this->thisisuseless * 2);
  sVar5 = *(short *)(pptVar6 + 0x35);
  iVar3 = (int)*(short *)&(this->fTrophyShapes).fLoadCancelled + -1;
  sVar2 = (short)iVar3;
  if ((int)sVar5 < iVar3) {
    sVar2 = sVar5;
  }
  *(short *)(pptVar6 + 0x35) = sVar2;
  *(undefined *)&this->fLoadingTrophy =
       *(undefined *)((int)&this->tier + *(int *)&this->thisisuseless * 2);
  *(uchar **)&this->fNumTrophies = ticks;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__17tScreenTrophyRoom(struct tScreenTrophyRoom *this /*$s0*/)
 // line 157, offset 0x80040ae8
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x80040AE8
	/* end block 1 */
	// End offset: 0x80040AE8
	// End Line: 158

	/* begin block 2 */
		// Start line: 324
	/* end block 2 */
	// End Line: 325

	/* begin block 3 */
		// Start line: 329
	/* end block 3 */
	// End Line: 330

	/* begin block 4 */
		// Start line: 329
	/* end block 4 */
	// End Line: 330

void Cleanup__17tScreenTrophyRoom(tScreenTrophyRoom *this)

{
  FreeShapes__7tScreenR17tShapeInformation
            ((tScreen *)this,(tShapeInformation *)((this->tScreen)._vf + 6));
  Cleanup__7tScreen((tScreen *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__17tScreenTrophyRoom(struct tScreenTrophyRoom *this /*$s2*/)
 // line 171, offset 0x80040b18
	/* begin block 1 */
		// Start line: 172
		// Start offset: 0x80040B18
		// Variables:
	// 		struct tDrawShapeExtended drawFlags3; // stack offset -80
	// 		int fModNumber; // $s3
	// 		int TROPHY_LEFTOFFSET; // $s5
	// 		struct tDrawShapeExtended drawFlags; // stack offset -56
	// 		short i; // $s1
	// 		short x; // $a2
	// 		short y; // $a3
	// 		int texttoshow; // $a0

		/* begin block 1.1 */
			// Start line: 172
			// Start offset: 0x80040B18

			/* begin block 1.1.1 */
				// Start line: 172
				// Start offset: 0x80040B18
			/* end block 1.1.1 */
			// End offset: 0x80040B18
			// End Line: 172
		/* end block 1.1 */
		// End offset: 0x80040B18
		// End Line: 172

		/* begin block 1.2 */
			// Start line: 179
			// Start offset: 0x80040BC0

			/* begin block 1.2.1 */
				// Start line: 193
				// Start offset: 0x80040C54

				/* begin block 1.2.1.1 */
					// Start line: 194
					// Start offset: 0x80040C54

					/* begin block 1.2.1.1.1 */
						// Start line: 194
						// Start offset: 0x80040C54
					/* end block 1.2.1.1.1 */
					// End offset: 0x80040C54
					// End Line: 194
				/* end block 1.2.1.1 */
				// End offset: 0x80040C54
				// End Line: 194
			/* end block 1.2.1 */
			// End offset: 0x80040C6C
			// End Line: 195
		/* end block 1.2 */
		// End offset: 0x80040C6C
		// End Line: 195

		/* begin block 1.3 */
			// Start line: 198
			// Start offset: 0x80040C6C

			/* begin block 1.3.1 */
				// Start line: 198
				// Start offset: 0x80040C6C
			/* end block 1.3.1 */
			// End offset: 0x80040C6C
			// End Line: 198
		/* end block 1.3 */
		// End offset: 0x80040C6C
		// End Line: 198

		/* begin block 1.4 */
			// Start line: 213
			// Start offset: 0x80040D88

			/* begin block 1.4.1 */
				// Start line: 216
				// Start offset: 0x80040DC8

				/* begin block 1.4.1.1 */
					// Start line: 218
					// Start offset: 0x80040DE0

					/* begin block 1.4.1.1.1 */
						// Start line: 221
						// Start offset: 0x80040E6C

						/* begin block 1.4.1.1.1.1 */
							// Start line: 222
							// Start offset: 0x80040E6C

							/* begin block 1.4.1.1.1.1.1 */
								// Start line: 222
								// Start offset: 0x80040E6C
							/* end block 1.4.1.1.1.1.1 */
							// End offset: 0x80040E6C
							// End Line: 222
						/* end block 1.4.1.1.1.1 */
						// End offset: 0x80040E6C
						// End Line: 222
					/* end block 1.4.1.1.1 */
					// End offset: 0x80040EAC
					// End Line: 225
				/* end block 1.4.1.1 */
				// End offset: 0x80040F00
				// End Line: 231
			/* end block 1.4.1 */
			// End offset: 0x80040F00
			// End Line: 231
		/* end block 1.4 */
		// End offset: 0x80040F08
		// End Line: 235
	/* end block 1 */
	// End offset: 0x80040F08
	// End Line: 235

	/* begin block 2 */
		// Start line: 346
	/* end block 2 */
	// End Line: 347

	/* begin block 3 */
		// Start line: 357
	/* end block 3 */
	// End Line: 358

	/* begin block 4 */
		// Start line: 357
	/* end block 4 */
	// End Line: 358

void DrawBackground__17tScreenTrophyRoom(tScreenTrophyRoom *this)

{
  char *sMenuText;
  int index;
  int iVar1;
  int wordnum;
  int iVar2;
  int x;
  short sVar3;
  tDrawShapeExtended tStack80;
  tDrawShapeExtended tStack56;
  
  iVar1 = (int)ticks >> 4;
  tStack80.tint[0] = 0xcec844;
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (iVar1 + ((iVar1 / 10 + (iVar1 >> 0x1f)) - ((int)ticks >> 0x1f)) * -10 + 0x1c,0x410,0x10
             ,0x10,0,0,&tStack80);
  iVar1 = 3;
  if (frontEnd.tier != '\0') {
    iVar1 = 4;
  }
  DrawBackgroundImage__7tScreeniiP18tTexture_ShapeInfoi((tScreen *)this,0,0x18,gCurrentShapes,0);
  PSXDrawBrightEndLine__Fiiiiiiii
            ((int)&DAT_00232323,0x6a,0x39,300,1,3,(int)(this->tScreen).fScreenFadeVal,0x1e);
  LoadTrophy__17tScreenTrophyRoom(this);
  IsShapeFileLoaded__7tScreenR17tShapeInformation((tScreen *)this,&(this->tScreen).fSwapShapes);
  if ((this->tScreen).fSwapShapes.fFile != (char *)0x0) {
    UploadSwapShapes__7tScreeni((tScreen *)this,0x20);
    *(uchar **)&this->fNumTrophies = ticks;
  }
  FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType
            ((int)(this->tScreen).fScreenFadeVal,
             (short)((uint)(((int)(tournamentManager.fDefinition)->fTournaments
                                  [(uint)(tournamentManager.fDefinition)->fTiers
                                         [(uint)(byte)frontEnd.tier].fTournOffset +
                                   (uint)*(byte *)((int)&this->tier +
                                                  *(int *)&this->thisisuseless * 2)].fTournamentID +
                            0x354) * 0x10000) >> 0x10),0x100,0x2f,2,textState_Hilighted,
             textType_ScreenInfo);
  wordnum = 0x3de;
  if (((gPadinfo.buf[0].ID == '#') &&
      ((gPadinfo.buf[3].data._1_1_ == '#' || ((char)gPadinfo.buf[3].data != '\0')))) ||
     ((gPadinfo.buf[3].data._1_1_ == '#' &&
      ((gPadinfo.buf[0].ID == '#' || (gPadinfo.buf[0].nopad != '\0')))))) {
    wordnum = 0x3df;
  }
  else {
    if ((gPadinfo.buf[0].ID == '#') || (gPadinfo.buf[3].data._1_1_ == '#')) {
      wordnum = 0x3e0;
    }
  }
  sVar3 = 0;
  sMenuText = TextSys_Word__Fi(wordnum);
  wordnum = CalcFadeVal__Fii((int)&DAT_00505050,(int)(this->tScreen).fScreenFadeVal);
  FETextRender_FullTextRGB__FPcssics(sMenuText,0x100,200,wordnum,0,2);
  while (wordnum = (int)sVar3, wordnum < (int)*(short *)&(this->fTrophyShapes).fLoadCancelled) {
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    if ((iVar1 == -1) && (wordnum == -0x80000000)) {
      trap(0x1800);
    }
    x = (0x114 - (iVar1 * 0x5f >> 1)) + (wordnum % iVar1) * 0x5f;
    if ((wordnum == (int)*(short *)((int)&this->tier + *(int *)&this->thisisuseless * 2)) &&
       (((this->tScreen).fSwapShapes.fFlags & 1) != 0)) {
      tStack56.custom_shapes = (this->tScreen).fSwapShapes.fShapes;
      index = (int)(ticks + -*(int *)&this->fNumTrophies) >> 0x1f;
      index = ((int)(ticks + -*(int *)&this->fNumTrophies) / 6 + index >> 1) - index;
      iVar2 = index;
      if (index < 0) {
        iVar2 = index + 0x1f;
      }
      index = index + (iVar2 >> 5) * -0x20;
    }
    else {
      index = (int)sVar3;
      x = (int)(short)x;
      tStack56.custom_shapes = *(tTexture_ShapeInfo **)((this->tScreen)._vf + 6);
    }
    ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended
              (index,0x600,x,((wordnum / iVar1) * 0x2d + 0x46) * 0x10000 >> 0x10,
               (int)(this->tScreen).fScreenFadeVal,0,&tStack56);
    sVar3 = sVar3 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadTrophy__17tScreenTrophyRoom(struct tScreenTrophyRoom *this /*$s1*/)
 // line 240, offset 0x80040f2c
	/* begin block 1 */
		// Start line: 241
		// Start offset: 0x80040F2C

		/* begin block 1.1 */
			// Start line: 241
			// Start offset: 0x80040F2C

			/* begin block 1.1.1 */
				// Start line: 245
				// Start offset: 0x80040F64

				/* begin block 1.1.1.1 */
					// Start line: 246
					// Start offset: 0x80040F64

					/* begin block 1.1.1.1.1 */
						// Start line: 246
						// Start offset: 0x80040F64
					/* end block 1.1.1.1.1 */
					// End offset: 0x80040F64
					// End Line: 246
				/* end block 1.1.1.1 */
				// End offset: 0x80040F64
				// End Line: 246
			/* end block 1.1.1 */
			// End offset: 0x80040FF0
			// End Line: 249
		/* end block 1.1 */
		// End offset: 0x80040FF0
		// End Line: 249
	/* end block 1 */
	// End offset: 0x80040FF0
	// End Line: 249

	/* begin block 2 */
		// Start line: 516
	/* end block 2 */
	// End Line: 517

	/* begin block 3 */
		// Start line: 522
	/* end block 3 */
	// End Line: 523

	/* begin block 4 */
		// Start line: 522
	/* end block 4 */
	// End Line: 523

void LoadTrophy__17tScreenTrophyRoom(tScreenTrophyRoom *this)

{
  tTexture_ShapeInfo **pptVar1;
  
  pptVar1 = (tTexture_ShapeInfo **)
            ((int)&(this->tScreen).fPermShapes.fShapes + *(int *)&this->thisisuseless * 2);
  if ((int)*(short *)(pptVar1 + 0x35) != (uint)*(byte *)&this->fLoadingTrophy) {
    GetTrophyName__18tTournamentManagerP12tTourneyInfo11tTrophySizePci
              (&tournamentManager,
               (tournamentManager.fDefinition)->fTournaments +
               (uint)(tournamentManager.fDefinition)->fTiers[(uint)(byte)frontEnd.tier].fTournOffset
               + (uint)*(byte *)(pptVar1 + 0x35),ts_Small,gSwapFileName,-1);
    AsyncLoadSwapShapeFile__7tScreenPc((tScreen *)this,gSwapFileName);
    *(undefined *)&this->fLoadingTrophy =
         *(undefined *)((int)&this->tier + *(int *)&this->thisisuseless * 2);
  }
  return;
}





