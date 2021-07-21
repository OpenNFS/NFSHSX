#include "THISDUST.H"
#include "FECREDITS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Setup__14tCreditManager(struct tCreditManager *this /*$a0*/)
 // line 32, offset 0x80035ae8
	/* begin block 1 */
		// Start line: 33
		// Start offset: 0x80035AE8
	/* end block 1 */
	// End offset: 0x80035AE8
	// End Line: 34

	/* begin block 2 */
		// Start line: 64
	/* end block 2 */
	// End Line: 65

	/* begin block 3 */
		// Start line: 64
	/* end block 3 */
	// End Line: 65

	/* begin block 4 */
		// Start line: 65
	/* end block 4 */
	// End Line: 66

	/* begin block 5 */
		// Start line: 65
	/* end block 5 */
	// End Line: 66

void Setup__14tCreditManager(tCreditManager *this)

{
  this->fCreditsInitialized = (void *)0x0;
  this->fRequestDeInit = (void *)0x0;
  this->fTVFade = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init__14tCreditManageri(struct tCreditManager *this /*$s0*/)
 // line 57, offset 0x80035af8
	/* begin block 1 */
		// Start line: 58
		// Start offset: 0x80035AF8
		// Variables:
	// 		char filename[80]; // stack offset -88
	/* end block 1 */
	// End offset: 0x80035BC8
	// End Line: 99

	/* begin block 2 */
		// Start line: 92
	/* end block 2 */
	// End Line: 93

	/* begin block 3 */
		// Start line: 114
	/* end block 3 */
	// End Line: 115

	/* begin block 4 */
		// Start line: 114
	/* end block 4 */
	// End Line: 115

void Init__14tCreditManageri(tCreditManager *this)

{
  int iVar1;
  tCredit *ptVar2;
  uint uVar3;
  char acStack88 [80];
  
  if (this->fCreditsInitialized == (void *)0x0) {
    if (this->fRequestDeInit != (void *)0x0) {
      this->fRequestDeInit = (void *)0x0;
    }
    this->fShowCreditNum = -1;
    this->fTextFade = 0x80;
    this->fStartTicks = 0;
    this->StartedTransition = (void *)0x0;
    this->StartedLines = (void *)0x0;
    this->StartedTextFade = (void *)0x0;
    this->fRequestDeInit = (void *)0x0;
    this->fCurrCredit = 0;
    sprintf(acStack88,s__szcred_d_dat_80011864,PTR_801164fc,(uint)(byte)frontEnd.language);
    iVar1 = filesize(acStack88);
    ptVar2 = (tCredit *)reservememadr(s_records_80011874,iVar1,0);
    this->CreditBuffer = ptVar2;
    loadfileatadrz(acStack88,ptVar2);
    uVar3 = filesize(acStack88);
    *(undefined **)&this->fCreditsInitialized = &DAT_00000001;
    this->fNumCredits = uVar3 / 0x144;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeInit__14tCreditManager(struct tCreditManager *this /*$a0*/)
 // line 102, offset 0x80035bd8
	/* begin block 1 */
		// Start line: 103
		// Start offset: 0x80035BD8
	/* end block 1 */
	// End offset: 0x80035BD8
	// End Line: 104

	/* begin block 2 */
		// Start line: 238
	/* end block 2 */
	// End Line: 239

	/* begin block 3 */
		// Start line: 241
	/* end block 3 */
	// End Line: 242

	/* begin block 4 */
		// Start line: 241
	/* end block 4 */
	// End Line: 242

	/* begin block 5 */
		// Start line: 242
	/* end block 5 */
	// End Line: 243

	/* begin block 6 */
		// Start line: 242
	/* end block 6 */
	// End Line: 243

void DeInit__14tCreditManager(tCreditManager *this)

{
  *(undefined **)&this->fRequestDeInit = &DAT_00000001;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RealDeInit__14tCreditManager(struct tCreditManager *this /*$s0*/)
 // line 107, offset 0x80035be4
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x80035BE4
	/* end block 1 */
	// End offset: 0x80035C14
	// End Line: 117

	/* begin block 2 */
		// Start line: 247
	/* end block 2 */
	// End Line: 248

	/* begin block 3 */
		// Start line: 251
	/* end block 3 */
	// End Line: 252

	/* begin block 4 */
		// Start line: 251
	/* end block 4 */
	// End Line: 252

void RealDeInit__14tCreditManager(tCreditManager *this)

{
  this->fRequestDeInit = (void *)0x0;
  if (this->fCreditsInitialized != (void *)0x0) {
    purgememadr((int)this->CreditBuffer);
    this->fCreditsInitialized = (void *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__14tCreditManagerb(struct tCreditManager *this /*$s0*/, void * selected /*$a1*/)
 // line 120, offset 0x80035c24
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x80035C24

		/* begin block 1.1 */
			// Start line: 130
			// Start offset: 0x80035CA8
			// Variables:
		// 		int i; // $a2
		/* end block 1.1 */
		// End offset: 0x80035CF8
		// End Line: 134
	/* end block 1 */
	// End offset: 0x80035D58
	// End Line: 150

	/* begin block 2 */
		// Start line: 274
	/* end block 2 */
	// End Line: 275

	/* begin block 3 */
		// Start line: 277
	/* end block 3 */
	// End Line: 278

	/* begin block 4 */
		// Start line: 277
	/* end block 4 */
	// End Line: 278

void Draw__14tCreditManagerb(tCreditManager *this,void *selected)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  tScreenMain *ptVar4;
  
  if (selected == (void *)0x0) {
    iVar1 = this->fTVFade + -4;
  }
  else {
    iVar1 = this->fTVFade + 4;
  }
  this->fTVFade = iVar1;
  iVar1 = this->fTVFade;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar2 = iVar1;
  if (0x5c < iVar1) {
    iVar2 = 0x5c;
  }
  this->fTVFade = iVar2;
  if (iVar1 < 0x5c) {
    iVar1 = 0x80 - iVar2;
    if (0x80 - iVar2 < this->fTextFade) {
      iVar1 = this->fTextFade;
    }
    this->fTextFade = iVar1;
  }
  iVar1 = 0;
  ptVar4 = screenMain;
  do {
    ptVar4->tvConfigs[0].transition = ptVar4->tvConfigs[0].transition | 2;
    iVar1 = iVar1 + 1;
    uVar3 = 0x80 - this->fTVFade;
    *(uint *)&ptVar4->tvConfigs[0].fxThin = uVar3 * 0x10000 | uVar3 * 0x100 | uVar3;
    ptVar4 = (tScreenMain *)&(ptVar4->tScreen).fSwapShapes.fDestFile;
  } while (iVar1 < 0x10);
  if (this->fTVFade == 0) {
    if (this->fRequestDeInit != (void *)0x0) {
      RealDeInit__14tCreditManager(this);
    }
  }
  else {
    if ((this->fCreditsInitialized != (void *)0x0) &&
       (SetupCurrCredit__14tCreditManager(this), this->fShowCreditNum != -1)) {
      DrawCurrCredit__14tCreditManager(this);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupCurrCredit__14tCreditManager(struct tCreditManager *this /*$s0*/)
 // line 155, offset 0x80035d68
	/* begin block 1 */
		// Start line: 156
		// Start offset: 0x80035D68
		// Variables:
	// 		static int lasttick; // offset 0x4

		/* begin block 1.1 */
			// Start line: 156
			// Start offset: 0x80035D68

			/* begin block 1.1.1 */
				// Start line: 156
				// Start offset: 0x80035D68

				/* begin block 1.1.1.1 */
					// Start line: 156
					// Start offset: 0x80035D68
				/* end block 1.1.1.1 */
				// End offset: 0x80035D68
				// End Line: 156
			/* end block 1.1.1 */
			// End offset: 0x80035D68
			// End Line: 156

			/* begin block 1.1.2 */
				// Start line: 159
				// Start offset: 0x80035DBC

				/* begin block 1.1.2.1 */
					// Start line: 160
					// Start offset: 0x80035DBC

					/* begin block 1.1.2.1.1 */
						// Start line: 161
						// Start offset: 0x80035DEC

						/* begin block 1.1.2.1.1.1 */
							// Start line: 162
							// Start offset: 0x80035DEC

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 162
								// Start offset: 0x80035DEC
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x80035DEC
							// End Line: 162
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x80035DEC
						// End Line: 162
					/* end block 1.1.2.1.1 */
					// End offset: 0x80035E14
					// End Line: 165
				/* end block 1.1.2.1 */
				// End offset: 0x80035E14
				// End Line: 165
			/* end block 1.1.2 */
			// End offset: 0x80035E50
			// End Line: 179
		/* end block 1.1 */
		// End offset: 0x80035E50
		// End Line: 179

		/* begin block 1.2 */
			// Start line: 184
			// Start offset: 0x80035E50

			/* begin block 1.2.1 */
				// Start line: 185
				// Start offset: 0x80035E60

				/* begin block 1.2.1.1 */
					// Start line: 186
					// Start offset: 0x80035E60

					/* begin block 1.2.1.1.1 */
						// Start line: 186
						// Start offset: 0x80035E60

						/* begin block 1.2.1.1.1.1 */
							// Start line: 186
							// Start offset: 0x80035E60
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80035E60
						// End Line: 186
					/* end block 1.2.1.1.1 */
					// End offset: 0x80035E60
					// End Line: 186
				/* end block 1.2.1.1 */
				// End offset: 0x80035EC0
				// End Line: 194
			/* end block 1.2.1 */
			// End offset: 0x80035EC0
			// End Line: 194
		/* end block 1.2 */
		// End offset: 0x80035EC0
		// End Line: 194

		/* begin block 1.3 */
			// Start line: 216
			// Start offset: 0x80035F18

			/* begin block 1.3.1 */
				// Start line: 217
				// Start offset: 0x80035F38

				/* begin block 1.3.1.1 */
					// Start line: 218
					// Start offset: 0x80035F38

					/* begin block 1.3.1.1.1 */
						// Start line: 221
						// Start offset: 0x80035F94
						// Variables:
					// 		int NNNNN; // $v1
					/* end block 1.3.1.1.1 */
					// End offset: 0x80035FD8
					// End Line: 224
				/* end block 1.3.1.1 */
				// End offset: 0x80035FD8
				// End Line: 224
			/* end block 1.3.1 */
			// End offset: 0x80035FD8
			// End Line: 224
		/* end block 1.3 */
		// End offset: 0x80035FD8
		// End Line: 224

		/* begin block 1.4 */
			// Start line: 229
			// Start offset: 0x80035FD8

			/* begin block 1.4.1 */
				// Start line: 230
				// Start offset: 0x8003600C

				/* begin block 1.4.1.1 */
					// Start line: 231
					// Start offset: 0x8003600C

					/* begin block 1.4.1.1.1 */
						// Start line: 231
						// Start offset: 0x8003600C
					/* end block 1.4.1.1.1 */
					// End offset: 0x8003600C
					// End Line: 231
				/* end block 1.4.1.1 */
				// End offset: 0x8003600C
				// End Line: 231
			/* end block 1.4.1 */
			// End offset: 0x8003601C
			// End Line: 232
		/* end block 1.4 */
		// End offset: 0x8003601C
		// End Line: 232

		/* begin block 1.5 */
			// Start line: 235
			// Start offset: 0x8003601C

			/* begin block 1.5.1 */
				// Start line: 235
				// Start offset: 0x8003603C

				/* begin block 1.5.1.1 */
					// Start line: 235
					// Start offset: 0x8003603C
				/* end block 1.5.1.1 */
				// End offset: 0x8003603C
				// End Line: 235
			/* end block 1.5.1 */
			// End offset: 0x8003603C
			// End Line: 235

			/* begin block 1.5.2 */
				// Start line: 236
				// Start offset: 0x80036058

				/* begin block 1.5.2.1 */
					// Start line: 236
					// Start offset: 0x80036058

					/* begin block 1.5.2.1.1 */
						// Start line: 236
						// Start offset: 0x80036058
					/* end block 1.5.2.1.1 */
					// End offset: 0x80036058
					// End Line: 236
				/* end block 1.5.2.1 */
				// End offset: 0x80036058
				// End Line: 236
			/* end block 1.5.2 */
			// End offset: 0x80036070
			// End Line: 239
		/* end block 1.5 */
		// End offset: 0x80036070
		// End Line: 239
	/* end block 1 */
	// End offset: 0x80036070
	// End Line: 239

	/* begin block 2 */
		// Start line: 344
	/* end block 2 */
	// End Line: 345

	/* begin block 3 */
		// Start line: 348
	/* end block 3 */
	// End Line: 349

	/* begin block 4 */
		// Start line: 348
	/* end block 4 */
	// End Line: 349

void SetupCurrCredit__14tCreditManager(tCreditManager *this)

{
  bool bVar1;
  uchar *puVar2;
  int iVar3;
  void *pvVar4;
  
  if (((0xc < (int)(ticks + -(int)DAT_80051aa4)) && (this->fTextFade == 0)) &&
     (bVar1 = false, this->fCurrCredit == this->fShowCreditNum)) {
    iVar3 = FEInput_GetNoDebounceKey__Fii(0x20,0);
    if ((iVar3 != 0) || (iVar3 = FEInput_GetNoDebounceKey__Fii(0x20,1), iVar3 != 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      AudioCmn_PlayFESFX__Fi(6);
      this->fStartTicks = 0;
      this->fCurrCredit = this->fShowCreditNum + 1;
      DAT_80051aa4 = ticks;
    }
    if (this->fNumCredits <= this->fCurrCredit) {
      this->fCurrCredit = 0;
    }
    if (this->fCurrCredit < 0) {
      this->fCurrCredit = this->fNumCredits + -1;
    }
  }
  if ((this->fStartTicks != 0) && (CREDFADETICKS < (int)(ticks + -this->fStartTicks))) {
    iVar3 = this->fCurrCredit + 1;
    this->fCurrCredit = iVar3;
    if (this->fNumCredits <= iVar3) {
      this->fCurrCredit = 0;
    }
    if (this->fCurrCredit < 0) {
      this->fCurrCredit = this->fNumCredits + -1;
    }
    this->fStartTicks = 0;
  }
  if (this->fShowCreditNum != this->fCurrCredit) {
    this->fTextFadeDir = 8;
    this->StartedTransition = (void *)0x0;
    this->StartedLines = (void *)0x0;
    this->StartedTextFade = (void *)0x0;
  }
  iVar3 = this->fTextFade + this->fTextFadeDir;
  this->fTextFade = iVar3;
  if (iVar3 < 1) {
    this->fTextFade = 0;
  }
  if (0x7f < this->fTextFade) {
    this->fTextFade = 0x80;
  }
  if ((this->fTextFade == 0x80) && (this->StartedTransition == (void *)0x0)) {
    iVar3 = this->fCurrCredit;
    *(undefined **)&this->StartedTransition = &DAT_00000001;
    this->fShowCreditNum = iVar3;
    if ((iVar3 == (iVar3 / 3) * 3) || (this->CreditBuffer[iVar3].bgNumber != -1)) {
      iVar3 = iVar3 + 1;
      if (this->fNumCredits < iVar3) {
        iVar3 = 0;
      }
      SwapBackground__11tScreenMaini(screenMain,(int)this->CreditBuffer[iVar3].bgNumber);
    }
  }
  if (((this->StartedLines == (void *)0x0) && (this->StartedTransition != (void *)0x0)) &&
     (pvVar4 = DoneLoadingBackground__11tScreenMain(screenMain), puVar2 = ticks,
     pvVar4 != (void *)0x0)) {
    *(undefined **)&this->StartedLines = &DAT_00000001;
    *(uchar **)&this->fLineTicks = puVar2;
  }
  puVar2 = ticks;
  if (((this->StartedTextFade == (void *)0x0) && (this->StartedLines != (void *)0x0)) &&
     (0x1e < (int)(ticks + -this->fLineTicks))) {
    *(undefined **)&this->StartedTextFade = &DAT_00000001;
    this->fTextFadeDir = -8;
    *(uchar **)&this->fStartTicks = puVar2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCurrCredit__14tCreditManager(struct tCreditManager *this /*stack 0*/)
 // line 246, offset 0x80036084
	/* begin block 1 */
		// Start line: 247
		// Start offset: 0x80036084
		// Variables:
	// 		struct tDrawShapeExtended drawFlags; // stack offset -376
	// 		struct tCredit *fShowCred; // $s1
	// 		int width; // $s0
	// 		short x; // stack offset -48
	// 		short y; // $s3
	// 		int ColTextTitle; // $s0
	// 		int ColTextSubTitle; // $s2
	// 		int ColText; // $fp
	// 		struct RECT r; // stack offset -352
	// 		char *p; // $s0
	// 		char *p2; // $s4
	// 		char buffer[292]; // stack offset -344

		/* begin block 1.1 */
			// Start line: 247
			// Start offset: 0x80036084

			/* begin block 1.1.1 */
				// Start line: 247
				// Start offset: 0x80036084
			/* end block 1.1.1 */
			// End offset: 0x80036084
			// End Line: 247
		/* end block 1.1 */
		// End offset: 0x80036084
		// End Line: 247

		/* begin block 1.2 */
			// Start line: 338
			// Start offset: 0x8003639C
			// Variables:
		// 		void * hidden; // $s6
		// 		void * jaguar; // $s5
		// 		void * rollthedice; // $s2

			/* begin block 1.2.1 */
				// Start line: 369
				// Start offset: 0x80036490

				/* begin block 1.2.1.1 */
					// Start line: 375
					// Start offset: 0x800364E4

					/* begin block 1.2.1.1.1 */
						// Start line: 375
						// Start offset: 0x800364E4

						/* begin block 1.2.1.1.1.1 */
							// Start line: 376
							// Start offset: 0x800364EC

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 377
								// Start offset: 0x800364EC
								// Variables:
							// 		int rtd; // $s0
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x80036530
							// End Line: 381
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80036530
						// End Line: 381
					/* end block 1.2.1.1.1 */
					// End offset: 0x800365AC
					// End Line: 388
				/* end block 1.2.1.1 */
				// End offset: 0x800365AC
				// End Line: 388
			/* end block 1.2.1 */
			// End offset: 0x800365AC
			// End Line: 388
		/* end block 1.2 */
		// End offset: 0x800365B8
		// End Line: 394

		/* begin block 1.3 */
			// Start line: 398
			// Start offset: 0x800365C0

			/* begin block 1.3.1 */
				// Start line: 406
				// Start offset: 0x800365E4
				// Variables:
			// 		int dist; // $s0
			// 		int width; // $s2
			// 		int height; // $s1

				/* begin block 1.3.1.1 */
					// Start line: 406
					// Start offset: 0x800365E4

					/* begin block 1.3.1.1.1 */
						// Start line: 406
						// Start offset: 0x800365E4
					/* end block 1.3.1.1.1 */
					// End offset: 0x800365E4
					// End Line: 406
				/* end block 1.3.1.1 */
				// End offset: 0x800365E4
				// End Line: 406

				/* begin block 1.3.1.2 */
					// Start line: 427
					// Start offset: 0x8003669C

					/* begin block 1.3.1.2.1 */
						// Start line: 427
						// Start offset: 0x8003669C
					/* end block 1.3.1.2.1 */
					// End offset: 0x8003669C
					// End Line: 427
				/* end block 1.3.1.2 */
				// End offset: 0x8003669C
				// End Line: 427
			/* end block 1.3.1 */
			// End offset: 0x80036760
			// End Line: 449
		/* end block 1.3 */
		// End offset: 0x80036760
		// End Line: 449
	/* end block 1 */
	// End offset: 0x80036760
	// End Line: 449

	/* begin block 2 */
		// Start line: 534
	/* end block 2 */
	// End Line: 535

	/* begin block 3 */
		// Start line: 542
	/* end block 3 */
	// End Line: 543

	/* begin block 4 */
		// Start line: 542
	/* end block 4 */
	// End Line: 543

void DrawCurrCredit__14tCreditManager(tCreditManager *this)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int col1;
  int w;
  char *sMenuText;
  size_t sVar7;
  char *pcVar8;
  void *pvVar9;
  int col1_00;
  short x;
  tCredit *ptVar10;
  int h;
  uint uVar11;
  uint uVar12;
  tDrawShapeExtended tStack376;
  RECT local_160;
  char local_158 [296];
  short local_30;
  
  tStack376.tint[0] = 0xcec844;
  col1_00 = (int)ticks >> 4;
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (col1_00 + ((col1_00 / 10 + (col1_00 >> 0x1f)) - ((int)ticks >> 0x1f)) * -10 + 0xe6,
             0x410,0x10,0x10,0,0,&tStack376);
  ptVar10 = this->CreditBuffer + this->fShowCreditNum;
  FETextRender_SetABR__Fib(1,&DAT_00000001);
  uVar3 = ptVar10->subTitleY;
  col1_00 = CalcFadeVal__Fii((int)&DAT_0000bebe,this->fTextFade);
  col1_00 = CalcFadeVal__Fii(col1_00,0x28);
  col1 = CalcFadeVal__Fii((int)&DAT_0000bebe,this->fTextFade);
  col1 = CalcFadeVal__Fii(col1,0x28);
  w = CalcFadeVal__Fii((int)&DAT_00787878,this->fTextFade);
  if (ptVar10->titleWidth == 0) {
    sMenuText = TextSys_Word__Fi((int)ptVar10->titleTextID + 0x514);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,ptVar10->titleX,ptVar10->titleY,col1_00,0,(int)ptVar10->titleJustify);
  }
  else {
    local_160.x = ptVar10->titleX;
    local_160.y = ptVar10->titleY;
    local_160.w = ptVar10->titleWidth;
    local_160.h = 100;
    sMenuText = TextSys_Word__Fi((int)ptVar10->titleTextID + 0x514);
    FETextRender_WordWrapTextRGBJustify__FPcR4RECTiiib
              (sMenuText,&local_160,col1_00,(int)ptVar10->titleJustify,0,(void *)0x0);
  }
  if (ptVar10->subTitleWidth == 0) {
    uVar11 = (uint)uVar3 + 8;
    sMenuText = TextSys_Word__Fi((int)ptVar10->subTitleTextID + 0x514);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,ptVar10->subTitleX,ptVar10->subTitleY,col1,0,(int)ptVar10->subTitleJustify)
    ;
  }
  else {
    local_160.x = ptVar10->subTitleX;
    local_160.y = ptVar10->subTitleY;
    local_160.w = ptVar10->subTitleWidth;
    local_160.h = 100;
    sMenuText = TextSys_Word__Fi((int)ptVar10->subTitleTextID + 0x514);
    col1_00 = FETextRender_WordWrapTextRGBJustify__FPcR4RECTiiib
                        (sMenuText,&local_160,col1,(int)ptVar10->subTitleJustify,0,(void *)0x0);
    uVar11 = (uint)uVar3 + col1_00;
  }
  if (ptVar10->textY != 0) {
    uVar11 = (uint)(ushort)ptVar10->textY;
  }
  local_30 = ptVar10->textX;
  x = ptVar10->subTitleWidth;
  if (x == 0) {
    FETextRender_SetFont__Fi(0);
    sMenuText = TextSys_Word__Fi((int)ptVar10->subTitleTextID + 0x514);
    col1_00 = textpixels(sMenuText);
    sMenuText = TextSys_Word__Fi((int)ptVar10->subTitleTextID + 0x514);
    sVar7 = strlen(sMenuText);
    x = (short)col1_00 - (short)sVar7;
  }
  if (local_30 == 0) {
    if (ptVar10->subTitleJustify == 0) {
      local_30 = ptVar10->subTitleX + x + 2;
    }
    else {
      local_30 = (ptVar10->subTitleX - x) + -2;
    }
  }
  strcpy(local_158,ptVar10->text);
  x = local_30;
  sMenuText = local_158;
  do {
    bVar6 = false;
    if (sMenuText == (char *)0x0) {
      FETextRender_SetABR__Fib(0,(void *)0x0);
      if (this->StartedLines != (void *)0x0) {
        col1_00 = ((int)(ticks + -this->fLineTicks) * 0x208) / 0x50;
        col1 = col1_00;
        w = 200;
        if (col1_00 < 200) {
          col1 = 200;
          w = col1_00;
        }
        if (0x140 < col1_00) {
          w = 0x140 - col1;
          if (w < 0) {
            w = 0;
          }
          col1 = 0x208 - w;
        }
        if (0 < w) {
          col1_00 = CalcFadeVal__Fii((int)&DAT_00505050,0x40);
          PSXTransDrawBrightEndLine__Fiiiiiiiii
                    (col1_00,col1 + -0x25,(int)ptVar10->subTitleY + -2,w,4,3,1,0,1);
        }
        col1_00 = ((int)(ticks + -this->fLineTicks) * 0x10c) / 0x50;
        col1 = col1_00;
        h = 100;
        if (col1_00 < 100) {
          col1 = 100;
          h = col1_00;
        }
        if (0xa8 < col1_00) {
          h = 0xa8 - col1;
          if (h < 0) {
            h = 0;
          }
          col1 = 0x10c - w;
        }
        if (0 < h) {
          col1_00 = CalcFadeVal__Fii((int)&DAT_00505050,0x40);
          PSXTransDrawBrightEndLine__Fiiiiiiiii(col1_00,(int)local_30,col1 + -0x3a,2,h,1,1,0,1);
        }
      }
      return;
    }
    bVar5 = false;
    bVar4 = false;
    pcVar8 = strchr(sMenuText,10);
    if (pcVar8 != (char *)0x0) {
      *pcVar8 = '\0';
    }
    cVar1 = *sMenuText;
    if (cVar1 == '\n') {
      do {
        sMenuText = sMenuText + 1;
      } while (*sMenuText == '\n');
      cVar1 = *sMenuText;
    }
    if (cVar1 == '\t') {
      bVar6 = true;
      do {
        sMenuText = sMenuText + 1;
      } while (*sMenuText == '\t');
    }
    cVar1 = *sMenuText;
    if (cVar1 == '*') {
      bVar5 = true;
      do {
        sMenuText = sMenuText + 1;
      } while (*sMenuText == '*');
      cVar1 = *sMenuText;
    }
    if (cVar1 == '^') {
      bVar4 = true;
      do {
        sMenuText = sMenuText + 1;
      } while (*sMenuText == '^');
    }
    CREDFADETICKS = 2000;
    if (!bVar4) {
      CREDFADETICKS = 700;
    }
    if (bVar5) {
      local_160.x = 0xb4;
      local_160.y = 0x55;
      local_160.w = 0x118;
      local_160.h = 100;
      sMenuText = TextSys_Word__Fi(0x596);
      FETextRender_WordWrapTextRGBJustify__FPcR4RECTiiib(sMenuText,&local_160,w,0,0,(void *)0x0);
      uVar11 = uVar11 + 8;
    }
    else {
      if (bVar4) {
        col1_00 = 0;
        do {
          uVar12 = uVar11;
          sMenuText = TextSys_Word__Fi(col1_00 + 0x597);
          col1_00 = col1_00 + 1;
          FETextRender_FullTextRGB__FPcssics
                    (sMenuText,x,(short)uVar12,w,0,(int)ptVar10->textJustify);
          uVar11 = uVar12 + 8;
        } while (col1_00 < 0x19);
        uVar11 = uVar12 + 0x10;
      }
      else {
        if (bVar6) {
          pvVar9 = FECheat_IsCheatEnabled__F10tCheatCode(cheat_MyMomSaysImCool);
          if (pvVar9 != (void *)0x0) {
            col1_00 = CalcFadeVal__Fii((int)&DAT_00505050,this->fTextFade);
            sVar2 = ptVar10->textJustify;
            goto LAB_800365a4;
          }
        }
        else {
          sVar2 = ptVar10->textJustify;
          col1_00 = w;
LAB_800365a4:
          FETextRender_FullTextRGB__FPcssics(sMenuText,x,(short)uVar11,col1_00,0,(int)sVar2);
        }
        uVar11 = uVar11 + 8;
      }
    }
    sMenuText = pcVar8;
    if (pcVar8 != (char *)0x0) {
      sMenuText = pcVar8 + 1;
    }
  } while( true );
}





