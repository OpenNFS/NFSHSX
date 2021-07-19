#include "THISDUST.H"
#include "SCREENTOURNSELECT.H"


// decompiled code
// original method signature: 
// struct tScreenTournSelect * /*$ra*/ __18tScreenTournSelect(struct tScreenTournSelect *this /*$s0*/)
 // line 64, offset 0x8003f778
	/* begin block 1 */
		// Start line: 65
		// Start offset: 0x8003F778
	/* end block 1 */
	// End offset: 0x8003F778
	// End Line: 65

	/* begin block 2 */
		// Start line: 128
	/* end block 2 */
	// End Line: 129

	/* begin block 3 */
		// Start line: 128
	/* end block 3 */
	// End Line: 129

tScreenTournSelect * __18tScreenTournSelect(tScreenTournSelect *this)

{
  __7tScreen((tScreen *)this);
  *(undefined4 *)((this->tScreen)._vf + 2) = 0x80011db0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._18tScreenTournSelect(struct tScreenTournSelect *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 68, offset 0x8003f7ac
	/* begin block 1 */
		// Start line: 69
		// Start offset: 0x8003F7AC
	/* end block 1 */
	// End offset: 0x8003F7AC
	// End Line: 69

	/* begin block 2 */
		// Start line: 132
	/* end block 2 */
	// End Line: 133

	/* begin block 3 */
		// Start line: 136
	/* end block 3 */
	// End Line: 137

	/* begin block 4 */
		// Start line: 136
	/* end block 4 */
	// End Line: 137

void ___18tScreenTournSelect(tScreenTournSelect *this,int __in_chrg)

{
  *(undefined4 *)((this->tScreen)._vf + 2) = 0x80011db0;
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__18tScreenTournSelectRsT1PPcT3(struct tScreenTournSelect *this /*$a0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$t1*/, char **permFileName /*$a3*/, char **swapFileName /*stack 16*/)
 // line 78, offset 0x8003f7d4
	/* begin block 1 */
		// Start line: 79
		// Start offset: 0x8003F7D4

		/* begin block 1.1 */
			// Start line: 80
			// Start offset: 0x8003F808

			/* begin block 1.1.1 */
				// Start line: 80
				// Start offset: 0x8003F808
			/* end block 1.1.1 */
			// End offset: 0x8003F808
			// End Line: 80
		/* end block 1.1 */
		// End offset: 0x8003F808
		// End Line: 80
	/* end block 1 */
	// End offset: 0x8003F808
	// End Line: 80

	/* begin block 2 */
		// Start line: 146
	/* end block 2 */
	// End Line: 147

	/* begin block 3 */
		// Start line: 156
	/* end block 3 */
	// End Line: 157

	/* begin block 4 */
		// Start line: 156
	/* end block 4 */
	// End Line: 157

void GetShapeInfo__18tScreenTournSelectRsT1PPcT3
               (tScreenTournSelect *this,short *numPermShapes,short *numSwapShapes,
               char **permFileName,char **swapFileName)

{
  byte bVar1;
  byte bVar2;
  tTournamentDefinition *ptVar3;
  
  ptVar3 = tournamentManager.fDefinition;
  bVar1 = frontEnd.tournament;
  if (frontEnd.tier != '\0') {
    bVar1 = frontEnd.specialevent;
  }
  bVar2 = (tournamentManager.fDefinition)->fTiers[(uint)(byte)frontEnd.tier].fTournOffset;
  *numPermShapes = 0x40;
  *numSwapShapes = 0x20;
  *permFileName = s_ztourn_80011d94;
  GetTrophyName__18tTournamentManagerP12tTourneyInfo11tTrophySizePci
            (&tournamentManager,ptVar3->fTournaments + (uint)bVar1 + (uint)bVar2,ts_Medium,
             gSwapFileName,-1);
  *swapFileName = gSwapFileName;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__18tScreenTournSelect(struct tScreenTournSelect *this /*$s3*/)
 // line 91, offset 0x8003f8a0
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x8003F8A0
		// Variables:
	// 		short i; // $s5
	// 		short j; // $s2
	// 		struct RECT r; // stack offset -120
	// 		char moviename[80]; // stack offset -112

		/* begin block 1.1 */
			// Start line: 137
			// Start offset: 0x8003FA64

			/* begin block 1.1.1 */
				// Start line: 137
				// Start offset: 0x8003FA64
			/* end block 1.1.1 */
			// End offset: 0x8003FA64
			// End Line: 137
		/* end block 1.1 */
		// End offset: 0x8003FA64
		// End Line: 137

		/* begin block 1.2 */
			// Start line: 137
			// Start offset: 0x8003FA64

			/* begin block 1.2.1 */
				// Start line: 137
				// Start offset: 0x8003FA64
			/* end block 1.2.1 */
			// End offset: 0x8003FA64
			// End Line: 137
		/* end block 1.2 */
		// End offset: 0x8003FA64
		// End Line: 137
	/* end block 1 */
	// End offset: 0x8003FA64
	// End Line: 137

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

	/* begin block 3 */
		// Start line: 188
	/* end block 3 */
	// End Line: 189

	/* begin block 4 */
		// Start line: 188
	/* end block 4 */
	// End Line: 189

void Initialize__18tScreenTournSelect(tScreenTournSelect *this)

{
  byte bVar1;
  ushort uVar2;
  uchar *puVar3;
  int handle;
  int iVar4;
  int iVar5;
  tShapeInformation *ptVar6;
  short sVar7;
  short local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  char acStack112 [80];
  
  this->fTVsInitialized = (void *)0xffffffff;
  this->PreCalculatedTournamentY = -1;
  local_78 = 0x200;
  local_74 = 0x50;
  local_76 = 0;
  local_72 = 0xa0;
  ClearImage(&local_78,0,0,0);
  DrawSync(0);
  Initialize__7tScreen((tScreen *)this);
  *(undefined2 *)&this->trophyTV[3].field_0x2e = 0;
  this->trophyTV[3].flip_axis = 0;
  sprintf(acStack112,s__szzzTRN_dct_80011d9c,PTR_ARRAY_8011650c[0]);
  handle = VIDEO_create__Fiiiii(0x50,0x50,0xf0000,0x25800,0x10);
  *(int *)((this->tScreen)._vf + 6) = handle;
  VIDEO_spoolfile__FiPc(handle,acStack112);
  handle = 0;
  VIDEO_startplayback__Fi(*(int *)((this->tScreen)._vf + 6));
  this->hVideo = 0;
  do {
    iVar5 = 0;
    do {
      sVar7 = (short)iVar5;
      iVar4 = (int)(short)handle * 2 + (int)sVar7;
      InitTV__FR9tTVConfigP18tTexture_ShapeInfos
                ((tTVConfig *)&this->tvConfigs[iVar4 + 7].flip_axis,
                 (this->tScreen).fPermShapes.fShapes,0);
      iVar5 = iVar5 + 1;
      ptVar6 = (tShapeInformation *)((int)&(this->tScreen).fPermShapes + iVar4 * 0x30);
      *(short *)(ptVar6[0xc].fFilename + 0xe) = sVar7 * 0x25 + 0x8e;
      *(undefined2 *)&ptVar6[0xc].fLoadCancelled = 0x4c;
      uVar2 = *(ushort *)ptVar6[0xc].fFilename;
      *(short *)(ptVar6[0xc].fFilename + 0xc) = (short)handle * 0x4c + 0xa5;
      *(undefined2 *)((int)&ptVar6[0xc].fLoadCancelled + 2) = 0x25;
      *(ushort *)ptVar6[0xc].fFilename = uVar2 | 0x30;
    } while (iVar5 * 0x10000 >> 0x10 < 2);
    handle = handle + 1;
  } while (handle * 0x10000 >> 0x10 < 2);
  bVar1 = frontEnd.tournament;
  if (frontEnd.tier != '\0') {
    bVar1 = frontEnd.specialevent;
  }
  *(uchar *)((int)&this->fTVTicks + 2) =
       (tournamentManager.fDefinition)->fTournaments
       [(uint)bVar1 +
        (uint)(tournamentManager.fDefinition)->fTiers[(uint)(byte)frontEnd.tier].fTournOffset].
       fTrophyID;
  puVar3 = ticks;
  *(undefined2 *)&this->fTVTicks = 1;
  *(uchar **)&this->fStartTicks = puVar3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__18tScreenTournSelect(struct tScreenTournSelect *this /*$s0*/)
 // line 143, offset 0x8003fae8
	/* begin block 1 */
		// Start line: 144
		// Start offset: 0x8003FAE8
	/* end block 1 */
	// End offset: 0x8003FAE8
	// End Line: 144

	/* begin block 2 */
		// Start line: 318
	/* end block 2 */
	// End Line: 319

	/* begin block 3 */
		// Start line: 318
	/* end block 3 */
	// End Line: 319

	/* begin block 4 */
		// Start line: 322
	/* end block 4 */
	// End Line: 323

	/* begin block 5 */
		// Start line: 322
	/* end block 5 */
	// End Line: 323

void Cleanup__18tScreenTournSelect(tScreenTournSelect *this)

{
  VIDEO_destroy__Fi(*(int *)((this->tScreen)._vf + 6));
  purgememadr(*(int *)((this->tScreen)._vf + 6));
  Cleanup__7tScreen((tScreen *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateVideoWall__18tScreenTournSelectP12tTourneyInfo(struct tScreenTournSelect *this /*$s1*/, struct tTourneyInfo *tourn /*$s2*/)
 // line 156, offset 0x8003fb28
	/* begin block 1 */
		// Start line: 157
		// Start offset: 0x8003FB28

		/* begin block 1.1 */
			// Start line: 157
			// Start offset: 0x8003FB28

			/* begin block 1.1.1 */
				// Start line: 159
				// Start offset: 0x8003FB5C

				/* begin block 1.1.1.1 */
					// Start line: 160
					// Start offset: 0x8003FB5C

					/* begin block 1.1.1.1.1 */
						// Start line: 166
						// Start offset: 0x8003FBA0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 166
							// Start offset: 0x8003FBA0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 166
								// Start offset: 0x8003FBA0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8003FBA0
							// End Line: 166
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003FBA0
						// End Line: 166
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003FBB0
					// End Line: 168
				/* end block 1.1.1.1 */
				// End offset: 0x8003FBB0
				// End Line: 168
			/* end block 1.1.1 */
			// End offset: 0x8003FBB0
			// End Line: 168
		/* end block 1.1 */
		// End offset: 0x8003FBB0
		// End Line: 168
	/* end block 1 */
	// End offset: 0x8003FBB0
	// End Line: 168

	/* begin block 2 */
		// Start line: 341
	/* end block 2 */
	// End Line: 342

	/* begin block 3 */
		// Start line: 348
	/* end block 3 */
	// End Line: 349

	/* begin block 4 */
		// Start line: 348
	/* end block 4 */
	// End Line: 349

void UpdateVideoWall__18tScreenTournSelectP12tTourneyInfo
               (tScreenTournSelect *this,tTourneyInfo *tourn)

{
  short sVar1;
  uchar *puVar2;
  
  if ((uint)tourn->fTrophyID != (int)*(char *)((int)&this->fTVTicks + 2)) {
    GetTrophyName__18tTournamentManagerP12tTourneyInfo11tTrophySizePci
              (&tournamentManager,tourn,ts_Medium,gSwapFileName,-1);
    AsyncLoadSwapShapeFile__7tScreenPc((tScreen *)this,gSwapFileName);
    *(undefined4 *)&this->fTransitionDirection = 0;
    sVar1 = *(short *)&this->fTVTicks;
    *(uchar *)((int)&this->fTVTicks + 2) = tourn->fTrophyID;
    puVar2 = ticks;
    if (-1 < sVar1) {
      *(undefined2 *)&this->fTVTicks = 0xffff;
      *(uchar **)&this->fStartTicks = puVar2;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawVideoWall__18tScreenTournSelect(struct tScreenTournSelect *this /*$s2*/)
 // line 173, offset 0x8003fbcc
	/* begin block 1 */
		// Start line: 174
		// Start offset: 0x8003FBCC
		// Variables:
	// 		long i; // $s1
	// 		long j; // $s0
	// 		struct tDrawShapeExtended drawFlags; // stack offset -48

		/* begin block 1.1 */
			// Start line: 190
			// Start offset: 0x8003FC7C

			/* begin block 1.1.1 */
				// Start line: 190
				// Start offset: 0x8003FC7C
			/* end block 1.1.1 */
			// End offset: 0x8003FC7C
			// End Line: 190
		/* end block 1.1 */
		// End offset: 0x8003FC7C
		// End Line: 190

		/* begin block 1.2 */
			// Start line: 225
			// Start offset: 0x8003FDF4

			/* begin block 1.2.1 */
				// Start line: 225
				// Start offset: 0x8003FDF4
			/* end block 1.2.1 */
			// End offset: 0x8003FDF4
			// End Line: 225
		/* end block 1.2 */
		// End offset: 0x8003FDF4
		// End Line: 225
	/* end block 1 */
	// End offset: 0x8003FE10
	// End Line: 230

	/* begin block 2 */
		// Start line: 377
	/* end block 2 */
	// End Line: 378

	/* begin block 3 */
		// Start line: 377
	/* end block 3 */
	// End Line: 378

	/* begin block 4 */
		// Start line: 383
	/* end block 4 */
	// End Line: 384

	/* begin block 5 */
		// Start line: 383
	/* end block 5 */
	// End Line: 384

void DrawVideoWall__18tScreenTournSelect(tScreenTournSelect *this)

{
  bool bVar1;
  int x;
  uint uVar2;
  int iVar3;
  tDrawShapeExtended tStack48;
  
  x = 0xf4;
  tStack48.custom_shapes = (this->tScreen).fSwapShapes.fShapes;
  DrawBackgroundImage__7tScreeniiP18tTexture_ShapeInfoi
            ((tScreen *)this,0,0x22,(this->tScreen).fPermShapes.fShapes,0);
  do {
    PSXDrawTransSquare__Fiiiiis((int)&DAT_00202020,x,0x29,2,0x61,1);
    x = x + 0x50;
  } while (x < 0x1e5);
  x = 0x59;
  do {
    PSXDrawTransSquare__Fiiiiis((int)&DAT_00141414,0xa5,x,0x141,1,1);
    x = x + 0x30;
  } while (x < 0x89);
  FeDraw_SetABRMode__Fi(2);
  uVar2 = (uint)(ticks + -this->fStartTicks) >> 2;
  if (*(short *)&this->fTVTicks < 1) {
    x = 0;
    if (uVar2 != 0) {
      bVar1 = true;
      do {
        if (!bVar1) break;
        if (*(int *)&this->tvConfigs[(uint)(byte)trophyTVOrder[x] + 7].flip_axis == 1) {
          TurnOffTV__FR9tTVConfig
                    ((tTVConfig *)&this->tvConfigs[(uint)(byte)trophyTVOrder[x] + 7].flip_axis);
        }
        x = x + 1;
        bVar1 = x < 4;
      } while (x < (int)uVar2);
    }
    if (3 < uVar2) {
      *(undefined2 *)&this->fTVTicks = 0;
    }
  }
  else {
    x = 0;
    if (uVar2 != 0) {
      bVar1 = true;
      do {
        if (!bVar1) break;
        if (*(int *)&this->tvConfigs[(uint)(byte)trophyTVOrder[x] + 7].flip_axis == 0) {
          TurnOnTV__FR9tTVConfig
                    ((tTVConfig *)&this->tvConfigs[(uint)(byte)trophyTVOrder[x] + 7].flip_axis);
        }
        x = x + 1;
        bVar1 = x < 4;
      } while (x < (int)uVar2);
    }
  }
  PSXDrawTransSquare__Fiiiiis((int)&DAT_00303030,0xf1,0x8e,2,0x4a,1);
  PSXDrawTransSquare__Fiiiiis((int)&DAT_00202020,0xa5,0xb3,0x98,1,1);
  FeDraw_SetABRMode__Fi(2);
  iVar3 = 0;
  x = 0x1ec;
  do {
    DrawTV__FR9tTVConfig((tTVConfig *)((int)&(this->tScreen).fPermShapes.fShapes + x));
    iVar3 = iVar3 + 1;
    x = x + 0x30;
  } while (iVar3 < 4);
  iVar3 = (int)ticks >> 4;
  x = iVar3;
  if (iVar3 < 0) {
    x = iVar3 + 0x1f;
  }
  ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended
            (iVar3 + (x >> 5) * -0x20,0x600,0xb6,0x93,0,0,&tStack48);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__18tScreenTournSelect(struct tScreenTournSelect *this /*$s4*/)
 // line 239, offset 0x8003fe5c
	/* begin block 1 */
		// Start line: 240
		// Start offset: 0x8003FE5C
		// Variables:
	// 		short y; // $s3
	// 		char buffer[64]; // stack offset -208
	// 		short i; // $s2
	// 		short j; // $s1
	// 		struct RECT r; // stack offset -144
	// 		struct tTourneyInfo *tourn; // $s7
	// 		int YellowCol; // $s6
	// 		int DarkGreyCol; // $s5
	// 		int GreyCol; // $fp
	// 		short shapeY; // $t0
	// 		unsigned long movieRGB; // stack offset -56

		/* begin block 1.1 */
			// Start line: 248
			// Start offset: 0x8003FEB0

			/* begin block 1.1.1 */
				// Start line: 248
				// Start offset: 0x8003FEB0
			/* end block 1.1.1 */
			// End offset: 0x8003FEB0
			// End Line: 248
		/* end block 1.1 */
		// End offset: 0x8003FEB0
		// End Line: 248

		/* begin block 1.2 */
			// Start line: 248
			// Start offset: 0x8003FEB0

			/* begin block 1.2.1 */
				// Start line: 248
				// Start offset: 0x8003FEB0
			/* end block 1.2.1 */
			// End offset: 0x8003FEB0
			// End Line: 248
		/* end block 1.2 */
		// End offset: 0x8003FEB0
		// End Line: 248

		/* begin block 1.3 */
			// Start line: 277
			// Start offset: 0x8004006C

			/* begin block 1.3.1 */
				// Start line: 280
				// Start offset: 0x800400A4

				/* begin block 1.3.1.1 */
					// Start line: 281
					// Start offset: 0x800400A4

					/* begin block 1.3.1.1.1 */
						// Start line: 281
						// Start offset: 0x800400A4
					/* end block 1.3.1.1.1 */
					// End offset: 0x800400A4
					// End Line: 281
				/* end block 1.3.1.1 */
				// End offset: 0x800400A4
				// End Line: 281
			/* end block 1.3.1 */
			// End offset: 0x800400C0
			// End Line: 283
		/* end block 1.3 */
		// End offset: 0x800400C0
		// End Line: 283

		/* begin block 1.4 */
			// Start line: 323
			// Start offset: 0x80040214

			/* begin block 1.4.1 */
				// Start line: 332
				// Start offset: 0x80040254
				// Variables:
			// 		char moviename[80]; // stack offset -136
			/* end block 1.4.1 */
			// End offset: 0x80040288
			// End Line: 337
		/* end block 1.4 */
		// End offset: 0x80040288
		// End Line: 337
	/* end block 1 */
	// End offset: 0x800404A8
	// End Line: 381

	/* begin block 2 */
		// Start line: 525
	/* end block 2 */
	// End Line: 526

	/* begin block 3 */
		// Start line: 535
	/* end block 3 */
	// End Line: 536

	/* begin block 4 */
		// Start line: 535
	/* end block 4 */
	// End Line: 536

/* WARNING: Type propagation algorithm not settling */

void DrawBackground__18tScreenTournSelect(tScreenTournSelect *this)

{
  byte bVar1;
  long number;
  uchar *puVar2;
  short index;
  ushort uVar3;
  int colfore;
  int colback;
  int col;
  int Col;
  int iVar4;
  char *sMenuText;
  uint uVar5;
  VIDEOSTATE VVar6;
  tMenuItemGoToMenuNFS4Button *this_00;
  uint uVar7;
  tShapeInformation *ptVar8;
  int iVar9;
  tTourneyInfo *tourn;
  RECT local_90;
  char acStack136 [80];
  char *local_38;
  uint local_30;
  undefined4 local_2c;
  
  bVar1 = frontEnd.tournament;
  if (frontEnd.tier != '\0') {
    bVar1 = frontEnd.specialevent;
  }
  iVar9 = 0;
  tourn = (tournamentManager.fDefinition)->fTournaments +
          (uint)bVar1 +
          (uint)(tournamentManager.fDefinition)->fTiers[(uint)(byte)frontEnd.tier].fTournOffset;
  colfore = CalcFadeVal__Fii((int)&DAT_0000bebe,(int)(this->tScreen).fScreenFadeVal);
  colback = CalcFadeVal__Fii((int)&DAT_00232323,(int)(this->tScreen).fScreenFadeVal);
  col = CalcFadeVal__Fii((int)&DAT_00505050,(int)(this->tScreen).fScreenFadeVal);
  number = tournamentManager.fMoney;
  FETextRender_MenuTextFade__Fis14tMenuTextState13tMenuTextType
            ((int)(this->tScreen).fScreenFadeVal,0x7b,textState_Selected,textType_ScreenInfo);
  Col = TextSys_WordX__Fi(0x7b);
  iVar4 = TextSys_WordY__Fi(0x7b);
  DrawMoney__Fiiilii(Col + 0x8c,iVar4 + 9,6,number,colfore,colback);
  FETextRender_MenuTextFade__Fis14tMenuTextState13tMenuTextType
            ((int)(this->tScreen).fScreenFadeVal,0x99,textState_Selected,textType_NumTypes);
  Col = TextSys_WordX__Fi(0x99);
  iVar4 = TextSys_WordY__Fi(0x99);
  DrawMoney__Fiiilii(Col + 0x8c,iVar4 + 9,6,tourn->fEntranceFee,colfore,colback);
  FETextRender_MenuTextFade__Fis14tMenuTextState13tMenuTextType
            ((int)(this->tScreen).fScreenFadeVal,0x9a,textState_Selected,textType_NumTypes);
  Col = TextSys_WordY__Fi(0x9a);
  do {
    Col = Col + 9;
    sMenuText = TextSys_Word__Fi((int)(short)iVar9 + 0x2d4);
    iVar4 = TextSys_WordX__Fi(0x9a);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,(short)iVar4,(short)((uint)(Col * 0x10000) >> 0x10),col,0,0);
    iVar4 = TextSys_WordX__Fi(0x99);
    DrawMoney__Fiiilii(iVar4 + 0x8c,Col * 0x10000 >> 0x10,6,tourn->fPrize[(int)(short)iVar9],colfore
                       ,colback);
    iVar9 = iVar9 + 1;
  } while (iVar9 * 0x10000 >> 0x10 < 3);
  UpdateVideoWall__18tScreenTournSelectP12tTourneyInfo(this,tourn);
  IsShapeFileLoaded__7tScreenR17tShapeInformation((tScreen *)this,&(this->tScreen).fSwapShapes);
  if (((this->tScreen).fSwapShapes.fFile != (char *)0x0) && (-1 < *(short *)&this->fTVTicks)) {
    UploadSwapShapes__7tScreeni((tScreen *)this,0x20);
    puVar2 = ticks;
    *(undefined2 *)&this->fTVTicks = 1;
    *(uchar **)&this->fStartTicks = puVar2;
  }
  DrawVideoWall__18tScreenTournSelect(this);
  local_30 = 0;
  if ((this->hVideo & 1U) == 0) {
    local_30 = 0x50;
  }
  local_38 = &DAT_002c1e1e;
  Col = 0;
  local_2c = 0x80;
  do {
    colfore = 0;
    do {
      uVar7 = local_30;
      ptVar8 = (tShapeInformation *)
               ((int)&(this->tScreen).fPermShapes +
               ((colfore + (int)(short)Col * 4) * 0x10000 >> 0x10) * 0x30);
      *(short *)&ptVar8[3].fDestFile = (short)colfore * 0x50 + 0xa5;
      *(undefined2 *)&ptVar8[3].async_handle = 0x50;
      *(undefined2 *)((int)&ptVar8[3].async_handle + 2) = 0x30;
      *(undefined *)&ptVar8[3].fFlags = 0x14;
      *(short *)((int)&ptVar8[3].fDestFile + 2) = (short)Col * 0x30 + 0x29;
      *(char *)&ptVar8[3].fNumShapes = (char)colfore * '\x14';
      *(char *)((int)&ptVar8[3].fNumShapes + 1) = (char)Col * '(';
      *(undefined *)((int)&ptVar8[3].fFlags + 1) = 0x28;
      local_30 = uVar7;
      uVar5 = GetTPage(2,0,0x200,(int)(short)uVar7);
      colfore = colfore + 1;
      *(short *)(ptVar8[3].fFilename + 4) = (short)uVar5;
      *(undefined4 *)(ptVar8[2].fFilename + 8) = 1;
      *(undefined2 *)(ptVar8[3].fFilename + 2) = 0;
      *(undefined2 *)&ptVar8[2].fLoadCancelled = 0x22;
      ptVar8[3].fFile = local_38;
      *(short *)(ptVar8[2].fFilename + 0xe) = (short)local_2c;
      *(short *)(ptVar8[2].fFilename + 0xc) = (short)local_2c;
    } while (colfore * 0x10000 >> 0x10 < 4);
    Col = Col + 1;
  } while (Col * 0x10000 >> 0x10 < 2);
  VVar6 = VIDEO_state__Fi(*(int *)((this->tScreen)._vf + 6));
  if (VVar6 == VIDEOSTATE_IDLE) {
    *(undefined2 *)&this->trophyTV[3].field_0x2e = 0;
    sprintf(acStack136,s__szzzTRN_dct_80011d9c,PTR_ARRAY_8011650c[0]);
    VIDEO_spoolfile__FiPc(*(int *)((this->tScreen)._vf + 6),acStack136);
    VIDEO_startplayback__Fi(*(int *)((this->tScreen)._vf + 6));
  }
  else {
    Col = VIDEO_updateframexy__Fiii(*(int *)((this->tScreen)._vf + 6),0x200,uVar7 & 0xffff);
    if (Col != 0) {
      this->hVideo = this->hVideo + 1;
    }
  }
  Col = 0;
  do {
    DrawTVLines__FR9tTVConfig((tTVConfig *)(&this->fFrame + (int)(short)Col * 0xc));
    Col = Col + 1;
  } while (Col * 0x10000 >> 0x10 < 8);
  local_90.x = 0x145;
  local_90.y = 0x2b;
  local_90.w = 0x13a;
  local_90.h = 10;
  if (frontEnd.tier == '\0') {
    this_00 = (tMenuItemGoToMenuNFS4Button *)
              ((menuDefs->itemHotPursuitSolo).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem
               ._vf + 4);
  }
  else {
    this_00 = &menuDefs->itemTournamentContinue;
  }
  index = TextValue__23tListIteratorTournament7tPlayer((tListIteratorTournament *)this_00);
  FETextRender_WordWrapFade__FisR4RECT14tMenuTextState13tMenuTextType
            ((int)(this->tScreen).fScreenFadeVal,index,&local_90,textState_Hilighted,
             textType_VideoWall);
  local_90.x = 0xaa;
  local_90.w = local_90.w + -10;
  if (frontEnd.tier == '\0') {
    this_00 = (tMenuItemGoToMenuNFS4Button *)
              ((menuDefs->itemHotPursuitSolo).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem
               ._vf + 4);
  }
  else {
    this_00 = &menuDefs->itemTournamentContinue;
  }
  uVar3 = TextValue__23tListIteratorTournament7tPlayer((tListIteratorTournament *)this_00);
  Col = (uint)uVar3 + 0x26;
  colfore = Col * 0x10000 >> 0x10;
  if ((colfore != this->PreCalculatedTournamentY) || (this->fTVsInitialized == (void *)0xffffffff))
  {
    this->PreCalculatedTournamentY = colfore;
    sMenuText = TextSys_Word__Fi(colfore);
    colfore = FETextRender_WordWrapHeight__FsPc(local_90.w,sMenuText);
    this->fTVsInitialized = (void *)(0x75 - colfore);
  }
  local_90.y = *(short *)&this->fTVsInitialized;
  colfore = 0;
  sMenuText = TextSys_Word__Fi((int)(short)Col);
  Col = CalcFadeVal__Fii((int)&DAT_00505050,(int)(this->tScreen).fScreenFadeVal);
  FETextRender_WordWrapTextRGB__FPcR4RECTi(sMenuText,&local_90,Col);
  FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType
            ((int)(this->tScreen).fScreenFadeVal,0x3db,0xaa,0x75,0,textState_Selected,
             textType_ScreenInfo);
  FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType
            ((int)(this->tScreen).fScreenFadeVal,(short)(((uint)uVar3 + 0x39) * 0x10000 >> 0x10),
             0xaa,0x7d,0,textState_Hilighted,textType_ScreenInfo);
  do {
    DrawTV__FR9tTVConfig((tTVConfig *)(&this->fFrame + (int)(short)colfore * 0xc));
    colfore = colfore + 1;
  } while (colfore * 0x10000 >> 0x10 < 8);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawForeground__18tScreenTournSelect(struct tScreenTournSelect *this /*$s2*/)
 // line 387, offset 0x800404d8
	/* begin block 1 */
		// Start line: 388
		// Start offset: 0x800404D8
	/* end block 1 */
	// End offset: 0x800404D8
	// End Line: 388

	/* begin block 2 */
		// Start line: 917
	/* end block 2 */
	// End Line: 918

	/* begin block 3 */
		// Start line: 924
	/* end block 3 */
	// End Line: 925

	/* begin block 4 */
		// Start line: 924
	/* end block 4 */
	// End Line: 925

void DrawForeground__18tScreenTournSelect(tScreenTournSelect *this)

{
  PSXDrawBrightEndLine__Fiiiiiiii
            ((int)&DAT_00232323,0xa7,0x29,0x13c,1,3,(int)(this->tScreen).fScreenFadeVal,0x14);
  PSXDrawBrightEndLine__Fiiiiiiii
            ((int)&DAT_00232323,0xa7,0x4a,0x13c,1,2,(int)(this->tScreen).fScreenFadeVal,0x14);
  return;
}





