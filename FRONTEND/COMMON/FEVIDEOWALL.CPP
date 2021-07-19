#include "THISDUST.H"
#include "FEVIDEOWALL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__10tVideoWallP9tTVConfigP18tTexture_ShapeInfossPss(struct tVideoWall *this /*$t0*/, struct tTVConfig *tvs /*$a1*/, struct tTexture_ShapeInfo *shapes /*$a2*/, short firstTV /*$a3*/, int numTVs /*stack 16*/, short *tvOrdering /*stack 20*/, int flip_axis /*stack 24*/)
 // line 59, offset 0x80036790
	/* begin block 1 */
		// Start line: 60
		// Start offset: 0x80036790
		// Variables:
	// 		short i; // $t1

		/* begin block 1.1 */
			// Start line: 60
			// Start offset: 0x80036790

			/* begin block 1.1.1 */
				// Start line: 60
				// Start offset: 0x80036790
			/* end block 1.1.1 */
			// End offset: 0x80036790
			// End Line: 60
		/* end block 1.1 */
		// End offset: 0x80036790
		// End Line: 60
	/* end block 1 */
	// End offset: 0x80036838
	// End Line: 89

	/* begin block 2 */
		// Start line: 118
	/* end block 2 */
	// End Line: 119

	/* begin block 3 */
		// Start line: 118
	/* end block 3 */
	// End Line: 119

void Initialize__10tVideoWallP9tTVConfigP18tTexture_ShapeInfossPss
               (tVideoWall *this,tTVConfig *tvs,tTexture_ShapeInfo *shapes,short firstTV,int numTVs,
               short *tvOrdering,int flip_axis)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  this->fTVs = tvs;
  this->fFirstTVShape = firstTV;
  this->fTVShapes = shapes;
  this->fOffsetY = 0;
  this->fOffsetX = 0;
  this->fTransitionDirection = 0;
  this->fAvailableTextID = -1;
  this->fNumTVs = (short)numTVs;
  puVar1 = ticks;
  this->fAvailable = 1;
  this->fAvailableBright = 0;
  this->fValid = 1;
  this->fIconShapes = (tTexture_ShapeInfo *)0x0;
  this->tvOrder = tvOrdering;
  *(uchar **)&this->fTVTicks = puVar1;
  this->fFlipAxis = (short)flip_axis;
  if (0 < this->fNumTVs) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      this->fTVs[iVar2 >> 0x10].state = tv_StateOff;
      iVar2 = iVar3 * 0x10000;
    } while (iVar3 * 0x10000 >> 0x10 < (int)this->fNumTVs);
  }
  this->fUpdated = (void *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateImages__10tVideoWall(struct tVideoWall *this /*$s0*/)
 // line 95, offset 0x80036840
	/* begin block 1 */
		// Start line: 96
		// Start offset: 0x80036840
		// Variables:
	// 		short i; // $s2
	/* end block 1 */
	// End offset: 0x8003696C
	// End Line: 115

	/* begin block 2 */
		// Start line: 258
	/* end block 2 */
	// End Line: 259

	/* begin block 3 */
		// Start line: 265
	/* end block 3 */
	// End Line: 266

	/* begin block 4 */
		// Start line: 265
	/* end block 4 */
	// End Line: 266

void UpdateImages__10tVideoWall(tVideoWall *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < this->fNumTVs) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 >> 0x10;
      InitTV__FR9tTVConfigP18tTexture_ShapeInfos
                (this->fTVs + iVar1,this->fTVShapes,
                 (short)(((uint)(ushort)this->fFirstTVShape + iVar2) * 0x10000 >> 0x10));
      this->fTVs[iVar1].x = this->fTVs[iVar1].x + this->fOffsetX;
      this->fTVs[iVar1].y = this->fTVs[iVar1].y + this->fOffsetY;
      if (0 < this->fFlipAxis) {
        this->fTVs[iVar1].flags = this->fTVs[iVar1].flags | 4;
        this->fTVs[iVar1].flip_axis = this->fFlipAxis;
      }
      if ((this->fValid == 0) || (this->fAvailable == 0)) {
        this->fTVs[iVar1].flags = this->fTVs[iVar1].flags | 0x28;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar2 * 0x10000;
    } while (iVar2 * 0x10000 >> 0x10 < (int)this->fNumTVs);
  }
  *(undefined **)&this->fUpdated = &DAT_00000001;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetAvailableText__10tVideoWallsss(struct tVideoWall *this /*$a0*/, short textID /*$a1*/, short x /*$a2*/, short y /*$a3*/)
 // line 121, offset 0x8003698c
	/* begin block 1 */
		// Start line: 122
		// Start offset: 0x8003698C
	/* end block 1 */
	// End offset: 0x8003698C
	// End Line: 123

	/* begin block 2 */
		// Start line: 310
	/* end block 2 */
	// End Line: 311

	/* begin block 3 */
		// Start line: 317
	/* end block 3 */
	// End Line: 318

	/* begin block 4 */
		// Start line: 317
	/* end block 4 */
	// End Line: 318

	/* begin block 5 */
		// Start line: 318
	/* end block 5 */
	// End Line: 319

	/* begin block 6 */
		// Start line: 318
	/* end block 6 */
	// End Line: 319

	/* begin block 7 */
		// Start line: 322
	/* end block 7 */
	// End Line: 323

void SetAvailableText__10tVideoWallsss(tVideoWall *this,short textID,short x,short y)

{
  this->fAvailableTextID = textID;
  this->fAvailableX = x;
  this->fAvailableY = y;
  this->fAvailableBright = 0;
  this->fAvailable = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetAvailableIcon__10tVideoWallssssP18tTexture_ShapeInfo(struct tVideoWall *this /*$a0*/, short icon /*$a1*/, short numFrames /*$a2*/, short x /*$a3*/, int y /*stack 16*/, struct tTexture_ShapeInfo *iconImages /*stack 20*/)
 // line 134, offset 0x800369a8
	/* begin block 1 */
		// Start line: 135
		// Start offset: 0x800369A8
	/* end block 1 */
	// End offset: 0x800369A8
	// End Line: 135

	/* begin block 2 */
		// Start line: 339
	/* end block 2 */
	// End Line: 340

	/* begin block 3 */
		// Start line: 347
	/* end block 3 */
	// End Line: 348

	/* begin block 4 */
		// Start line: 347
	/* end block 4 */
	// End Line: 348

void SetAvailableIcon__10tVideoWallssssP18tTexture_ShapeInfo
               (tVideoWall *this,short icon,short numFrames,short x,int y,
               tTexture_ShapeInfo *iconImages)

{
  this->fIcon = icon;
  this->fIconFrames = numFrames;
  this->fIconX = x;
  this->fIconShapes = iconImages;
  this->fIconY = (short)y;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetOffset__10tVideoWallss(struct tVideoWall *this /*$a0*/, short x /*$a1*/, short y /*$a2*/)
 // line 146, offset 0x800369c8
	/* begin block 1 */
		// Start line: 147
		// Start offset: 0x800369C8
	/* end block 1 */
	// End offset: 0x800369C8
	// End Line: 148

	/* begin block 2 */
		// Start line: 367
	/* end block 2 */
	// End Line: 368

	/* begin block 3 */
		// Start line: 374
	/* end block 3 */
	// End Line: 375

	/* begin block 4 */
		// Start line: 374
	/* end block 4 */
	// End Line: 375

	/* begin block 5 */
		// Start line: 375
	/* end block 5 */
	// End Line: 376

	/* begin block 6 */
		// Start line: 375
	/* end block 6 */
	// End Line: 376

void SetOffset__10tVideoWallss(tVideoWall *this,short x,short y)

{
  this->fOffsetX = x;
  this->fOffsetY = y;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetAvailable__10tVideoWalls(struct tVideoWall *this /*$a0*/, short avail /*$a1*/)
 // line 154, offset 0x800369d4
	/* begin block 1 */
		// Start line: 155
		// Start offset: 0x800369D4
	/* end block 1 */
	// End offset: 0x800369D4
	// End Line: 156

	/* begin block 2 */
		// Start line: 384
	/* end block 2 */
	// End Line: 385

	/* begin block 3 */
		// Start line: 390
	/* end block 3 */
	// End Line: 391

	/* begin block 4 */
		// Start line: 390
	/* end block 4 */
	// End Line: 391

	/* begin block 5 */
		// Start line: 391
	/* end block 5 */
	// End Line: 392

	/* begin block 6 */
		// Start line: 391
	/* end block 6 */
	// End Line: 392

void SetAvailable__10tVideoWalls(tVideoWall *this,short avail)

{
  this->fAvailable = avail;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetValid__10tVideoWalls(struct tVideoWall *this /*$a0*/, short valid /*$a1*/)
 // line 162, offset 0x800369dc
	/* begin block 1 */
		// Start line: 163
		// Start offset: 0x800369DC
	/* end block 1 */
	// End offset: 0x800369DC
	// End Line: 164

	/* begin block 2 */
		// Start line: 399
	/* end block 2 */
	// End Line: 400

	/* begin block 3 */
		// Start line: 406
	/* end block 3 */
	// End Line: 407

	/* begin block 4 */
		// Start line: 406
	/* end block 4 */
	// End Line: 407

	/* begin block 5 */
		// Start line: 407
	/* end block 5 */
	// End Line: 408

	/* begin block 6 */
		// Start line: 407
	/* end block 6 */
	// End Line: 408

void SetValid__10tVideoWalls(tVideoWall *this,short valid)

{
  this->fValid = valid;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__10tVideoWall(struct tVideoWall *this /*$s1*/)
 // line 170, offset 0x800369e4
	/* begin block 1 */
		// Start line: 171
		// Start offset: 0x800369E4
		// Variables:
	// 		short i; // $s3
	// 		short j; // $s0

		/* begin block 1.1 */
			// Start line: 171
			// Start offset: 0x800369E4

			/* begin block 1.1.1 */
				// Start line: 171
				// Start offset: 0x800369E4
			/* end block 1.1.1 */
			// End offset: 0x800369E4
			// End Line: 171
		/* end block 1.1 */
		// End offset: 0x800369E4
		// End Line: 171

		/* begin block 1.2 */
			// Start line: 171
			// Start offset: 0x800369E4

			/* begin block 1.2.1 */
				// Start line: 177
				// Start offset: 0x80036A28

				/* begin block 1.2.1.1 */
					// Start line: 178
					// Start offset: 0x80036A28

					/* begin block 1.2.1.1.1 */
						// Start line: 187
						// Start offset: 0x80036AE4

						/* begin block 1.2.1.1.1.1 */
							// Start line: 187
							// Start offset: 0x80036AE4

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 187
								// Start offset: 0x80036AE4
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x80036AE4
							// End Line: 187
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80036AE4
						// End Line: 187
					/* end block 1.2.1.1.1 */
					// End offset: 0x80036AE4
					// End Line: 187
				/* end block 1.2.1.1 */
				// End offset: 0x80036AE4
				// End Line: 187
			/* end block 1.2.1 */
			// End offset: 0x80036AE4
			// End Line: 187
		/* end block 1.2 */
		// End offset: 0x80036B98
		// End Line: 198
	/* end block 1 */
	// End offset: 0x80036B98
	// End Line: 198

	/* begin block 2 */
		// Start line: 415
	/* end block 2 */
	// End Line: 416

	/* begin block 3 */
		// Start line: 422
	/* end block 3 */
	// End Line: 423

	/* begin block 4 */
		// Start line: 422
	/* end block 4 */
	// End Line: 423

void UpdateTransition__10tVideoWall(tVideoWall *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = (short)((uint)(ticks + -this->fTVTicks) >> 3);
  if (this->fTransitionDirection < 1) {
    iVar3 = 0;
    if (0 < (int)sVar1) {
      iVar2 = 0;
      do {
        if ((int)this->fNumTVs <= iVar2 >> 0x10) break;
        if (this->fTVs[(int)this->tvOrder[iVar2 >> 0x10]].state == tv_StateOn) {
          TurnOffTV__FR9tTVConfig(this->fTVs + (int)this->tvOrder[iVar2 >> 0x10]);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar3 * 0x10000;
      } while (iVar3 * 0x10000 >> 0x10 < (int)sVar1);
    }
    if (this->fNumTVs <= sVar1) {
      this->fTransitionDirection = 0;
    }
  }
  else {
    if (this->fValid == 0) {
      *(uchar **)&this->fTVTicks = ticks;
    }
    else {
      iVar3 = 0;
      if (0 < (int)sVar1) {
        iVar2 = 0;
        do {
          if ((int)this->fNumTVs <= iVar2 >> 0x10) {
            return;
          }
          if (((this->fTVs[(int)this->tvOrder[iVar2 >> 0x10]].state == tv_StateOff) &&
              (this->fValid != 0)) && (this->fAvailable != 0)) {
            TurnOnTV__FR9tTVConfig(this->fTVs + (int)this->tvOrder[iVar2 >> 0x10]);
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar3 * 0x10000;
        } while (iVar3 * 0x10000 >> 0x10 < (int)sVar1);
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__10tVideoWall(struct tVideoWall *this /*$s1*/)
 // line 205, offset 0x80036bb4
	/* begin block 1 */
		// Start line: 206
		// Start offset: 0x80036BB4
		// Variables:
	// 		short i; // $s0
	// 		long textColor; // $s0
	// 		struct tDrawShapeExtended drawFlags; // stack offset -40

		/* begin block 1.1 */
			// Start line: 222
			// Start offset: 0x80036C30

			/* begin block 1.1.1 */
				// Start line: 223
				// Start offset: 0x80036C60

				/* begin block 1.1.1.1 */
					// Start line: 227
					// Start offset: 0x80036CB0

					/* begin block 1.1.1.1.1 */
						// Start line: 228
						// Start offset: 0x80036CC0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 229
							// Start offset: 0x80036CC0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 232
								// Start offset: 0x80036CEC

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 233
									// Start offset: 0x80036CEC

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 233
										// Start offset: 0x80036CEC
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80036CEC
									// End Line: 233
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80036CEC
								// End Line: 233
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80036D6C
							// End Line: 239
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80036D6C
						// End Line: 239
					/* end block 1.1.1.1.1 */
					// End offset: 0x80036DC0
					// End Line: 246
				/* end block 1.1.1.1 */
				// End offset: 0x80036DC0
				// End Line: 246
			/* end block 1.1.1 */
			// End offset: 0x80036DC0
			// End Line: 246
		/* end block 1.1 */
		// End offset: 0x80036DC0
		// End Line: 246
	/* end block 1 */
	// End offset: 0x80036E40
	// End Line: 255

	/* begin block 2 */
		// Start line: 484
	/* end block 2 */
	// End Line: 485

	/* begin block 3 */
		// Start line: 492
	/* end block 3 */
	// End Line: 493

	/* begin block 4 */
		// Start line: 492
	/* end block 4 */
	// End Line: 493

void Draw__10tVideoWall(tVideoWall *this)

{
  short sVar1;
  int iVar2;
  char *sMenuText;
  int col;
  tDrawShapeExtended tStack40;
  
  if ((this->fAvailable == 0) && (this->fValid != 0)) {
    sVar1 = this->fAvailableBright + 4;
  }
  else {
    sVar1 = this->fAvailableBright + -4;
  }
  this->fAvailableBright = sVar1;
  if (this->fAvailableBright < 0x41) {
    if (this->fAvailableBright < 0) {
      this->fAvailableBright = 0;
    }
  }
  else {
    this->fAvailableBright = 0x40;
  }
  if (((this->fValid == 0) || (this->fAvailable == 0)) || (this->fAvailableBright != 0)) {
    col = 0;
    if (0 < this->fNumTVs) {
      iVar2 = 0;
      do {
        DrawTVLines__FR9tTVConfig(this->fTVs + (iVar2 >> 0x10));
        col = col + 1;
        iVar2 = col * 0x10000;
      } while (col * 0x10000 >> 0x10 < (int)this->fNumTVs);
    }
    if (0 < (int)this->fAvailableBright) {
      col = CalcFadeVal__Fii((int)&DAT_0000bebe,0x80 - (int)this->fAvailableBright);
      if ((this->fIconShapes != (tTexture_ShapeInfo *)0x0) && (0 < this->fIconFrames)) {
        tStack40.tint[0] = &DAT_0000bebe;
        tStack40.custom_shapes = this->fIconShapes;
        iVar2 = (int)this->fIconFrames;
        if (iVar2 == 0) {
          trap(0x1c00);
        }
        if ((iVar2 == -1) && ((int)ticks >> 4 == -0x80000000)) {
          trap(0x1800);
        }
        DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                  ((int)this->fIcon + ((int)ticks >> 4) % iVar2,0x611,(int)this->fIconX,
                   (int)this->fIconY,0x80 - (int)this->fAvailableBright,1,&tStack40);
      }
      if (-1 < this->fAvailableTextID) {
        FETextRender_SetABR__Fib(1,&DAT_00000001);
        sMenuText = TextSys_Word__Fi((int)this->fAvailableTextID);
        FETextRender_FullTextRGB__FPcssics(sMenuText,this->fAvailableX,this->fAvailableY,col,3,2);
        FETextRender_SetABR__Fib(0,(void *)0x0);
      }
    }
  }
  if ((((this->fUpdated != (void *)0x0) || (this->fValid == 0)) || (this->fAvailable == 0)) &&
     (col = 0, 0 < this->fNumTVs)) {
    iVar2 = 0;
    do {
      DrawTV__FR9tTVConfig(this->fTVs + (iVar2 >> 0x10));
      col = col + 1;
      iVar2 = col * 0x10000;
    } while (col * 0x10000 >> 0x10 < (int)this->fNumTVs);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TurnOff__10tVideoWall(struct tVideoWall *this /*$a0*/)
 // line 261, offset 0x80036e58
	/* begin block 1 */
		// Start line: 262
		// Start offset: 0x80036E58

		/* begin block 1.1 */
			// Start line: 263
			// Start offset: 0x80036E58

			/* begin block 1.1.1 */
				// Start line: 264
				// Start offset: 0x80036E68

				/* begin block 1.1.1.1 */
					// Start line: 265
					// Start offset: 0x80036E68

					/* begin block 1.1.1.1.1 */
						// Start line: 265
						// Start offset: 0x80036E68
					/* end block 1.1.1.1.1 */
					// End offset: 0x80036E68
					// End Line: 265
				/* end block 1.1.1.1 */
				// End offset: 0x80036E68
				// End Line: 265
			/* end block 1.1.1 */
			// End offset: 0x80036E74
			// End Line: 266
		/* end block 1.1 */
		// End offset: 0x80036E74
		// End Line: 266
	/* end block 1 */
	// End offset: 0x80036E74
	// End Line: 266

	/* begin block 2 */
		// Start line: 597
	/* end block 2 */
	// End Line: 598

	/* begin block 3 */
		// Start line: 604
	/* end block 3 */
	// End Line: 605

	/* begin block 4 */
		// Start line: 604
	/* end block 4 */
	// End Line: 605

	/* begin block 5 */
		// Start line: 605
	/* end block 5 */
	// End Line: 606

	/* begin block 6 */
		// Start line: 605
	/* end block 6 */
	// End Line: 606

void TurnOff__10tVideoWall(tVideoWall *this)

{
  uchar *puVar1;
  
  puVar1 = ticks;
  if (this->fTransitionDirection != -1) {
    this->fTransitionDirection = -1;
    *(uchar **)&this->fTVTicks = puVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TurnOffInstant__10tVideoWall(struct tVideoWall *this /*$s1*/)
 // line 273, offset 0x80036e7c
	/* begin block 1 */
		// Start line: 274
		// Start offset: 0x80036E7C
		// Variables:
	// 		short i; // $s0
	/* end block 1 */
	// End offset: 0x80036EE4
	// End Line: 281

	/* begin block 2 */
		// Start line: 620
	/* end block 2 */
	// End Line: 621

	/* begin block 3 */
		// Start line: 628
	/* end block 3 */
	// End Line: 629

	/* begin block 4 */
		// Start line: 628
	/* end block 4 */
	// End Line: 629

void TurnOffInstant__10tVideoWall(tVideoWall *this)

{
  int iVar1;
  int iVar2;
  
  TurnOff__10tVideoWall(this);
  iVar2 = 0;
  if (0 < this->fNumTVs) {
    iVar1 = 0;
    do {
      TurnOffTV__FR9tTVConfig(this->fTVs + (iVar1 >> 0x10));
      iVar2 = iVar2 + 1;
      iVar1 = iVar2 * 0x10000;
    } while (iVar2 * 0x10000 >> 0x10 < (int)this->fNumTVs);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TurnOn__10tVideoWall(struct tVideoWall *this /*$a0*/)
 // line 286, offset 0x80036ef8
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x80036EF8

		/* begin block 1.1 */
			// Start line: 288
			// Start offset: 0x80036EF8

			/* begin block 1.1.1 */
				// Start line: 289
				// Start offset: 0x80036F08

				/* begin block 1.1.1.1 */
					// Start line: 290
					// Start offset: 0x80036F08

					/* begin block 1.1.1.1.1 */
						// Start line: 290
						// Start offset: 0x80036F08
					/* end block 1.1.1.1.1 */
					// End offset: 0x80036F08
					// End Line: 290
				/* end block 1.1.1.1 */
				// End offset: 0x80036F08
				// End Line: 290
			/* end block 1.1.1 */
			// End offset: 0x80036F14
			// End Line: 291
		/* end block 1.1 */
		// End offset: 0x80036F14
		// End Line: 291
	/* end block 1 */
	// End offset: 0x80036F14
	// End Line: 291

	/* begin block 2 */
		// Start line: 648
	/* end block 2 */
	// End Line: 649

	/* begin block 3 */
		// Start line: 654
	/* end block 3 */
	// End Line: 655

	/* begin block 4 */
		// Start line: 654
	/* end block 4 */
	// End Line: 655

	/* begin block 5 */
		// Start line: 655
	/* end block 5 */
	// End Line: 656

	/* begin block 6 */
		// Start line: 655
	/* end block 6 */
	// End Line: 656

void TurnOn__10tVideoWall(tVideoWall *this)

{
  uchar *puVar1;
  
  puVar1 = ticks;
  if (this->fTransitionDirection != 1) {
    this->fTransitionDirection = 1;
    *(uchar **)&this->fTVTicks = puVar1;
  }
  return;
}





