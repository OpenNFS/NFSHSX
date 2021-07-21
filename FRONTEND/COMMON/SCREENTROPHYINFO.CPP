#include "THISDUST.H"
#include "SCREENTROPHYINFO.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__17tScreenTrophyInfoRsT1PPcT3(struct tScreenTrophyInfo *this /*$t0*/, short *numPermShapes /*$s3*/, short *numSwapShapes /*$s1*/, char **permFileName /*$s2*/, char **swapFileName /*stack 16*/)
 // line 47, offset 0x80041008
	/* begin block 1 */
		// Start line: 48
		// Start offset: 0x80041008
		// Variables:
	// 		struct tTourneyInfo *tourn; // $a1

		/* begin block 1.1 */
			// Start line: 48
			// Start offset: 0x80041008

			/* begin block 1.1.1 */
				// Start line: 48
				// Start offset: 0x80041008
			/* end block 1.1.1 */
			// End offset: 0x80041008
			// End Line: 48
		/* end block 1.1 */
		// End offset: 0x80041008
		// End Line: 48

		/* begin block 1.2 */
			// Start line: 48
			// Start offset: 0x80041008

			/* begin block 1.2.1 */
				// Start line: 48
				// Start offset: 0x80041008
			/* end block 1.2.1 */
			// End offset: 0x80041008
			// End Line: 48
		/* end block 1.2 */
		// End offset: 0x80041008
		// End Line: 48
	/* end block 1 */
	// End offset: 0x800410B8
	// End Line: 55

	/* begin block 2 */
		// Start line: 94
	/* end block 2 */
	// End Line: 95

	/* begin block 3 */
		// Start line: 94
	/* end block 3 */
	// End Line: 95

void GetShapeInfo__17tScreenTrophyInfoRsT1PPcT3
               (tScreenTrophyInfo *this,short *numPermShapes,short *numSwapShapes,
               char **permFileName,char **swapFileName)

{
  byte bVar1;
  byte bVar2;
  tTourneyInfo *ptVar3;
  int iVar4;
  
  bVar1 = (tournamentManager.fDefinition)->fTiers[(uint)(byte)frontEnd.tier].fTournOffset;
  bVar2 = *(byte *)((int)&screenTrophyRoom->tier + *(int *)&screenTrophyRoom->thisisuseless * 2);
  ptVar3 = (tournamentManager.fDefinition)->fTournaments;
  iVar4 = 0;
  if ((int)tournamentManager.fBestPlacement[(int)ptVar3[(uint)bVar1 + (uint)bVar2].fTournamentID] -
      1U < 3) {
    iVar4 = (int)tournamentManager.fBestPlacement
                 [(int)ptVar3[(uint)bVar1 + (uint)bVar2].fTournamentID];
  }
  *(undefined4 *)((this->tScreen)._vf + 6) =
       *(undefined4 *)((int)kBannerColors + ((iVar4 << 0x10) >> 0xe));
  GetTrophyName__18tTournamentManagerP12tTourneyInfo11tTrophySizePci
            (&tournamentManager,ptVar3 + (uint)bVar1 + (uint)bVar2,ts_Large,gSwapFileNameTI,-1);
  *numSwapShapes = 0x20;
  *swapFileName = gSwapFileNameTI;
  *permFileName = &DAT_80011e84;
  *numPermShapes = 0xb;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__17tScreenTrophyInfo(struct tScreenTrophyInfo *this /*$s6*/)
 // line 67, offset 0x80041138
	/* begin block 1 */
		// Start line: 68
		// Start offset: 0x80041138
		// Variables:
	// 		int FadePartI; // $s3
	// 		int FadePartIITheRevenge; // $s4
	// 		struct RECT r; // stack offset -88
	// 		int col; // $s0
	// 		int yyy; // $s1
	// 		struct tDrawShapeExtended drawFlags; // stack offset -80
	// 		struct tDrawShapeExtended drawFlags2; // stack offset -56
	// 		int i; // $s0

		/* begin block 1.1 */
			// Start line: 81
			// Start offset: 0x80041194

			/* begin block 1.1.1 */
				// Start line: 81
				// Start offset: 0x80041194
			/* end block 1.1.1 */
			// End offset: 0x80041194
			// End Line: 81
		/* end block 1.1 */
		// End offset: 0x80041194
		// End Line: 81

		/* begin block 1.2 */
			// Start line: 81
			// Start offset: 0x80041194

			/* begin block 1.2.1 */
				// Start line: 81
				// Start offset: 0x80041194
			/* end block 1.2.1 */
			// End offset: 0x80041194
			// End Line: 81
		/* end block 1.2 */
		// End offset: 0x80041194
		// End Line: 81

		/* begin block 1.3 */
			// Start line: 122
			// Start offset: 0x8004143C

			/* begin block 1.3.1 */
				// Start line: 122
				// Start offset: 0x8004143C
			/* end block 1.3.1 */
			// End offset: 0x8004143C
			// End Line: 122
		/* end block 1.3 */
		// End offset: 0x8004143C
		// End Line: 122
	/* end block 1 */
	// End offset: 0x800415B8
	// End Line: 154

	/* begin block 2 */
		// Start line: 136
	/* end block 2 */
	// End Line: 137

	/* begin block 3 */
		// Start line: 142
	/* end block 3 */
	// End Line: 143

	/* begin block 4 */
		// Start line: 142
	/* end block 4 */
	// End Line: 143

void DrawBackground__17tScreenTrophyInfo(tScreenTrophyInfo *this)

{
  byte bVar1;
  byte bVar2;
  tTourneyInfo *ptVar3;
  int fade;
  int col;
  char *sMenuText;
  size_t sVar4;
  int Col;
  int amount;
  short y;
  int iVar5;
  RECT local_58;
  tDrawShapeExtended tStack80;
  tDrawShapeExtended tStack56;
  
  fade = (int)(this->tScreen).fScreenFadeVal;
  amount = fade + -0x40;
  fade = fade << 1;
  if (amount < 0) {
    amount = 0;
  }
  amount = amount << 1;
  if (fade < 0) {
    fade = 0;
  }
  if (0x80 < fade) {
    fade = 0x80;
  }
  bVar1 = (tournamentManager.fDefinition)->fTiers[(uint)(byte)frontEnd.tier].fTournOffset;
  bVar2 = *(byte *)((int)&screenTrophyRoom->tier + *(int *)&screenTrophyRoom->thisisuseless * 2);
  ptVar3 = (tournamentManager.fDefinition)->fTournaments;
  iVar5 = (int)ptVar3[(uint)bVar1 + (uint)bVar2].fTournamentID;
  col = CalcFadeVal__Fii(kRGBVals[(uint)DAT_800515d5],amount);
  y = 0xaf;
  sMenuText = TextSys_Word__Fi((int)ptVar3[(uint)bVar1 + (uint)bVar2].fTournamentID + 0x341);
  FETextRender_FullTextRGB__FPcssics(sMenuText,0x1e,0x19,col,3,3);
  sMenuText = TextSys_Word__Fi(iVar5 + 0x37a);
  sVar4 = strlen(sMenuText);
  if (sVar4 != 0) {
    FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType
              (amount,0x3db,0x8c,0xaf,1,textState_Hilighted,textType_ScreenInfo);
    sMenuText = TextSys_Word__Fi(iVar5 + 0x37a);
    col = CalcFadeVal__Fii((int)&DAT_00505050,amount);
    FETextRender_FullTextRGB__FPcssics(sMenuText,0x91,0xaf,col,0,0);
    y = 0xb7;
  }
  col = iVar5 + 0x3a0;
  sMenuText = TextSys_Word__Fi(col);
  sVar4 = strlen(sMenuText);
  if (sVar4 != 0) {
    FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType
              (amount,0x3dd,0x8c,y,1,textState_Hilighted,textType_ScreenInfo);
    local_58.x = 0x91;
    local_58.w = 0x15b;
    local_58.h = 100;
    local_58.y = y;
    sMenuText = TextSys_Word__Fi(col);
    Col = CalcFadeVal__Fii((int)&DAT_00505050,amount);
    FETextRender_WordWrapTextRGB__FPcR4RECTi(sMenuText,&local_58,Col);
    sMenuText = TextSys_Word__Fi(col);
    col = FETextRender_WordWrapHeight__FsPc(0x15b,sMenuText);
    y = y + (short)col;
  }
  col = iVar5 + 0x38d;
  sMenuText = TextSys_Word__Fi(col);
  sVar4 = strlen(sMenuText);
  if (sVar4 != 0) {
    FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType
              (amount,0x3dc,0x8c,y,1,textState_Hilighted,textType_ScreenInfo);
    local_58.x = 0x91;
    local_58.w = 0x15b;
    local_58.h = 100;
    local_58.y = y;
    sMenuText = TextSys_Word__Fi(col);
    Col = CalcFadeVal__Fii((int)&DAT_00505050,amount);
    FETextRender_WordWrapTextRGB__FPcR4RECTi(sMenuText,&local_58,Col);
    sMenuText = TextSys_Word__Fi(col);
    FETextRender_WordWrapHeight__FsPc(0x15b,sMenuText);
  }
  IsShapeFileLoaded__7tScreenR17tShapeInformation((tScreen *)this,&(this->tScreen).fSwapShapes);
  if ((this->tScreen).fSwapShapes.fFile != (char *)0x0) {
    UploadSwapShapes__7tScreeni((tScreen *)this,0x20);
  }
  local_58.x = 0x23;
  local_58.y = 0x2d;
  local_58.w = 0x1c4;
  local_58.h = 100;
  sMenuText = TextSys_Word__Fi(iVar5 + 0x367);
  col = CalcFadeVal__Fii((int)&DAT_00505050,amount);
  FETextRender_WordWrapTextRGBJustify__FPcR4RECTiiib(sMenuText,&local_58,col,3,0,(void *)0x0);
  tStack80.custom_shapes = (this->tScreen).fSwapShapes.fShapes;
  iVar5 = ((int)ticks / 6 + ((int)ticks >> 0x1f) >> 1) - ((int)ticks >> 0x1f);
  col = iVar5;
  if (iVar5 < 0) {
    col = iVar5 + 0x1f;
  }
  ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended
            (iVar5 + (col >> 5) * -0x20,0x600,0x46,-5,amount,0,&tStack80);
  amount = 1;
  tStack56.tint[0] = *(int *)((this->tScreen)._vf + 6);
  col = 0;
  do {
    if (amount != (col - (amount >> 0x1f)) * 3) {
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0,0x410,amount << 1,0,fade,0,&tStack56);
    }
    amount = amount + 1;
    col = amount / 3 + (amount >> 0x1f);
  } while (amount < 0x1e);
  amount = 0x22;
  col = 0xb;
  do {
    if (amount != (col - (amount >> 0x1f)) * 3) {
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0,0x410,amount << 1,0,fade,0,&tStack56);
    }
    amount = amount + 1;
    col = amount / 3 + (amount >> 0x1f);
  } while (amount < 0x3f);
  return;
}





