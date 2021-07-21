#include "THISDUST.H"
#include "SCREENTRACKS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__18tScreenTrackSelect(struct tScreenTrackSelect *this /*$s7*/)
 // line 83, offset 0x80041600
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x80041600
		// Variables:
	// 		struct RECT r; // stack offset -192
	// 		struct tTrackInformation trackInfo; // stack offset -184
	// 		short shapeY; // $s6
	// 		struct POLY_FT4 *prim; // $fp
	// 		enum VIDEOSTATE state; // $v1

		/* begin block 1.1 */
			// Start line: 84
			// Start offset: 0x80041600

			/* begin block 1.1.1 */
				// Start line: 106
				// Start offset: 0x800416C8
				// Variables:
			// 		struct tVideoWall *this; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 106
					// Start offset: 0x800416C8
				/* end block 1.1.1.1 */
				// End offset: 0x800416C8
				// End Line: 106
			/* end block 1.1.1 */
			// End offset: 0x800416C8
			// End Line: 106
		/* end block 1.1 */
		// End offset: 0x800416F8
		// End Line: 109

		/* begin block 1.2 */
			// Start line: 116
			// Start offset: 0x800416F8

			/* begin block 1.2.1 */
				// Start line: 122
				// Start offset: 0x80041724
				// Variables:
			// 		struct RECT r; // stack offset -136

				/* begin block 1.2.1.1 */
					// Start line: 125
					// Start offset: 0x80041724

					/* begin block 1.2.1.1.1 */
						// Start line: 125
						// Start offset: 0x80041724
					/* end block 1.2.1.1.1 */
					// End offset: 0x80041724
					// End Line: 125
				/* end block 1.2.1.1 */
				// End offset: 0x80041724
				// End Line: 125
			/* end block 1.2.1 */
			// End offset: 0x80041724
			// End Line: 125

			/* begin block 1.2.2 */
				// Start line: 135
				// Start offset: 0x80041774

				/* begin block 1.2.2.1 */
					// Start line: 135
					// Start offset: 0x80041774

					/* begin block 1.2.2.1.1 */
						// Start line: 143
						// Start offset: 0x800417B4

						/* begin block 1.2.2.1.1.1 */
							// Start line: 143
							// Start offset: 0x800417B4

							/* begin block 1.2.2.1.1.1.1 */
								// Start line: 143
								// Start offset: 0x800417DC

								/* begin block 1.2.2.1.1.1.1.1 */
									// Start line: 143
									// Start offset: 0x800417DC
								/* end block 1.2.2.1.1.1.1.1 */
								// End offset: 0x800417DC
								// End Line: 143
							/* end block 1.2.2.1.1.1.1 */
							// End offset: 0x800417DC
							// End Line: 143

							/* begin block 1.2.2.1.1.1.2 */
								// Start line: 144
								// Start offset: 0x800417F8
								// Variables:
							// 		char moviename[80]; // stack offset -128
							/* end block 1.2.2.1.1.1.2 */
							// End offset: 0x80041864
							// End Line: 151
						/* end block 1.2.2.1.1.1 */
						// End offset: 0x80041864
						// End Line: 151
					/* end block 1.2.2.1.1 */
					// End offset: 0x80041864
					// End Line: 151
				/* end block 1.2.2.1 */
				// End offset: 0x80041864
				// End Line: 151
			/* end block 1.2.2 */
			// End offset: 0x80041864
			// End Line: 151
		/* end block 1.2 */
		// End offset: 0x80041864
		// End Line: 151
	/* end block 1 */
	// End offset: 0x80041A74
	// End Line: 178

	/* begin block 2 */
		// Start line: 166
	/* end block 2 */
	// End Line: 167

	/* begin block 3 */
		// Start line: 166
	/* end block 3 */
	// End Line: 167

void DrawBackground__18tScreenTrackSelect(tScreenTrackSelect *this)

{
  bool bVar1;
  uint *puVar2;
  uchar *puVar3;
  short bright;
  VIDEOSTATE VVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint *puVar9;
  RECT local_c0;
  tTrackInformation tStack184;
  short local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  char acStack128 [80];
  uint **local_30;
  
  local_c0.x = 0x140;
  local_c0.y = 200;
  local_c0.w = 0xaa;
  local_c0.h = 0xc;
  bright = TextValue__18tListIteratorTrack7tPlayer
                     ((tListIteratorTrack *)
                      &(menuDefs->itemTrack3).tMenuItemLeftRightChoice.tMenuItemInteractive.
                       tMenuItem.fNumFrames,~kPlayerOne);
  DrawShape_NFS4RoundRectangle__FiR4RECTs((int)bright,&local_c0,0);
  GetTrack__13tTrackManagersR17tTrackInformation
            (&trackManager,(ushort)(byte)frontEnd.track[0],&tStack184);
  UpdateBrightness__18tScreenTrackSelectR17tTrackInformation(this,&tStack184);
  UpdateVideoWall__18tScreenTrackSelectR17tTrackInformation(this,&tStack184);
  IsShapeFileLoaded__7tScreenR17tShapeInformation((tScreen *)this,&(this->tScreen).fSwapShapes);
  if ((((this->tScreen).fSwapShapes.fFile != (char *)0x0) &&
      (*(short *)&(this->fVideoWall).fTVTicks != -1)) && (this->fPreviousTrack == 0)) {
    UploadSwapShapes__7tScreeni((tScreen *)this,10);
    TurnOn__10tVideoWall((tVideoWall *)&this->tvConfigs[9].flip_axis);
  }
  bVar1 = (this->hVideo & 1U) == 0;
  bVar7 = bVar1 << 7;
  VVar4 = VIDEO_state__Fi(*(int *)((this->tScreen)._vf + 6));
  if (VVar4 == VIDEOSTATE_SPOOLING) {
    local_84 = 0xaa;
    local_88 = 0x200;
    local_86 = 0;
    local_82 = 0x100;
    ClearImage(&local_88,0,0,0);
    DrawSync(0);
    puVar3 = ticks;
    this->fPreviousTrack = 0;
    *(uchar **)&this->fStartBrightness = puVar3 + -0x14;
  }
  else {
    if (VVar4 == VIDEOSTATE_PLAYING) {
      iVar5 = VIDEO_updateframexy__Fiii
                        (*(int *)((this->tScreen)._vf + 6),0x200,((uint)bVar1 << 0x17) >> 0x10);
      if (iVar5 != 0) {
        uVar6 = this->hVideo + 1;
        bVar7 = ((uVar6 & 1) == 0) << 7;
        this->hVideo = uVar6;
      }
    }
    else {
      if (((this->fStartTicks != 0) || (this->fMovieTrack < this->fPreviousTrack)) &&
         ((uchar *)0x100 < ticks + -(int)this->fTVsInitialized)) {
        if (this->fPreviousTrack <= this->fMovieTrack) {
          bright = 0x20;
          if (tStack184.fAvailable != '\0') {
            bright = 0x80;
          }
          SetBrightness__18tScreenTrackSelects(this,bright);
        }
        sprintf(acStack128,s__szzzTR_02d_dct_80011eec,PTR_ARRAY_8011650c[0],
                (int)*(short *)((int)&this->fFrame + 2));
        VIDEO_spoolfile__FiPc(*(int *)((this->tScreen)._vf + 6),acStack128);
        VIDEO_startplayback__Fi(*(int *)((this->tScreen)._vf + 6));
      }
    }
  }
  puVar9 = DAT_1f800004;
  puVar2 = DAT_1f800000;
  if (0 < this->fPreviousTrack) {
    local_30 = (uint **)&DAT_1f800004;
    bVar8 = bVar7 | 0x7f;
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar6 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 10;
    *puVar2 = *puVar2 & 0xff000000 | uVar6;
    uVar6 = SEXT24(this->fPreviousTrack);
    *(undefined *)((int)puVar9 + 3) = 9;
    *(undefined2 *)((int)puVar9 + 10) = 0x69;
    *(undefined2 *)((int)puVar9 + 0x12) = 0x69;
    *(undefined2 *)(puVar9 + 2) = 0x99;
    *(undefined2 *)(puVar9 + 6) = 0x99;
    *(undefined2 *)(puVar9 + 4) = 0x139;
    *(undefined2 *)((int)puVar9 + 0x1a) = 0xe8;
    *(undefined2 *)(puVar9 + 8) = 0x139;
    *(undefined2 *)((int)puVar9 + 0x22) = 0xe8;
    *(undefined *)(puVar9 + 3) = 0;
    *(byte *)((int)puVar9 + 0xd) = bVar7;
    *(undefined *)(puVar9 + 5) = 0x50;
    *(byte *)((int)puVar9 + 0x15) = bVar7;
    *(undefined *)(puVar9 + 7) = 0;
    *(byte *)((int)puVar9 + 0x1d) = bVar8;
    *(undefined *)(puVar9 + 9) = 0x50;
    *(byte *)((int)puVar9 + 0x25) = bVar8;
    puVar9[1] = uVar6 << 0x10 | uVar6 << 8 | uVar6;
    *(undefined *)((int)puVar9 + 7) = 0x2e;
    uVar6 = GetTPage(2,1,0x200,0);
    *(undefined2 *)((int)puVar9 + 0x16) = (short)uVar6;
    *(undefined2 *)((int)puVar9 + 0xe) = 0;
    puVar2 = DAT_1f800000;
    puVar9 = *local_30;
    *puVar9 = *puVar9 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    *puVar2 = *puVar2 & 0xff000000 | (uint)puVar9 & 0xffffff;
    uVar6 = SEXT24(this->fPreviousTrack);
    *local_30 = puVar9 + 10;
    *(undefined *)((int)puVar9 + 3) = 9;
    *(undefined2 *)(puVar9 + 4) = 0x1d9;
    *(undefined2 *)(puVar9 + 8) = 0x1d9;
    *(undefined *)(puVar9 + 5) = 0x60;
    *(undefined *)(puVar9 + 9) = 0x60;
    *(undefined2 *)((int)puVar9 + 10) = 0x69;
    *(undefined2 *)((int)puVar9 + 0x12) = 0x69;
    puVar9[1] = uVar6 << 0x10 | uVar6 << 8 | uVar6;
    *(undefined2 *)(puVar9 + 2) = 0x139;
    *(undefined2 *)(puVar9 + 6) = 0x139;
    *(undefined2 *)((int)puVar9 + 0x1a) = 0xe8;
    *(undefined2 *)((int)puVar9 + 0x22) = 0xe8;
    *(undefined *)(puVar9 + 3) = 0x10;
    *(byte *)((int)puVar9 + 0xd) = bVar7;
    *(byte *)((int)puVar9 + 0x15) = bVar7;
    *(undefined *)(puVar9 + 7) = 0x10;
    *(byte *)((int)puVar9 + 0x1d) = bVar8;
    *(byte *)((int)puVar9 + 0x25) = bVar8;
    *(undefined *)((int)puVar9 + 7) = 0x2e;
    uVar6 = GetTPage(2,1,0x240,0);
    *(undefined2 *)((int)puVar9 + 0x16) = (short)uVar6;
    *(undefined2 *)((int)puVar9 + 0xe) = 0;
  }
  DrawVideoWall__18tScreenTrackSelect(this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__18tScreenTrackSelectRsT1PPcT3(struct tScreenTrackSelect *this /*$s5*/, short *numPermShapes /*$s2*/, short *numSwapShapes /*$s3*/, char **permFileName /*$s4*/, char **swapFileName /*stack 16*/)
 // line 183, offset 0x80041aac
	/* begin block 1 */
		// Start line: 184
		// Start offset: 0x80041AAC
		// Variables:
	// 		struct tTrackInformation trackInfo; // stack offset -80
	/* end block 1 */
	// End offset: 0x80041AAC
	// End Line: 184

	/* begin block 2 */
		// Start line: 439
	/* end block 2 */
	// End Line: 440

	/* begin block 3 */
		// Start line: 445
	/* end block 3 */
	// End Line: 446

	/* begin block 4 */
		// Start line: 445
	/* end block 4 */
	// End Line: 446

void GetShapeInfo__18tScreenTrackSelectRsT1PPcT3
               (tScreenTrackSelect *this,short *numPermShapes,short *numSwapShapes,
               char **permFileName,char **swapFileName)

{
  tTrackInformation local_50;
  
  GetTrack__13tTrackManagersR17tTrackInformation
            (&trackManager,(ushort)(byte)frontEnd.track[0],&local_50);
  *numPermShapes = 0x44;
  *numSwapShapes = 10;
  *permFileName = s_ztrack_80011efc;
  sprintf(gSwapFileName,(char *)&PTR_DAT_80011f04,local_50.fShapeName);
  *swapFileName = gSwapFileName;
  *(short *)&this->fFrame = (short)local_50.fTrackID;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__18tScreenTrackSelect(struct tScreenTrackSelect *this /*$s2*/)
 // line 200, offset 0x80041b6c
	/* begin block 1 */
		// Start line: 201
		// Start offset: 0x80041B6C
		// Variables:
	// 		struct tTrackInformation trackInfo; // stack offset -152
	// 		struct RECT r; // stack offset -104
	// 		char moviename[80]; // stack offset -96

		/* begin block 1.1 */
			// Start line: 201
			// Start offset: 0x80041B6C

			/* begin block 1.1.1 */
				// Start line: 201
				// Start offset: 0x80041B6C
			/* end block 1.1.1 */
			// End offset: 0x80041B6C
			// End Line: 201
		/* end block 1.1 */
		// End offset: 0x80041B6C
		// End Line: 201
	/* end block 1 */
	// End offset: 0x80041B6C
	// End Line: 201

	/* begin block 2 */
		// Start line: 484
	/* end block 2 */
	// End Line: 485

	/* begin block 3 */
		// Start line: 489
	/* end block 3 */
	// End Line: 490

	/* begin block 4 */
		// Start line: 489
	/* end block 4 */
	// End Line: 490

void Initialize__18tScreenTrackSelect(tScreenTrackSelect *this)

{
  uchar *puVar1;
  int handle;
  tVideoWall *this_00;
  tTrackInformation local_98;
  short local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  char acStack96 [80];
  
  frontEnd.pinkSlipsTrackIndex = '\0';
  Decrement__18tListIteratorTrack7tPlayer
            ((tListIteratorTrack *)
             &(menuDefs->itemTrack3).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
              fNumFrames,~kPlayerOne);
  Increment__18tListIteratorTrack7tPlayer
            ((tListIteratorTrack *)
             &(menuDefs->itemTrack3).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
              fNumFrames,~kPlayerOne);
  GetTrack__13tTrackManagersR17tTrackInformation
            (&trackManager,(ushort)(byte)frontEnd.track[0],&local_98);
  local_68 = 0x200;
  local_64 = 0xaa;
  local_66 = 0;
  local_62 = 0x100;
  ClearImage(&local_68,0,0,0);
  DrawSync(0);
  Initialize__7tScreen((tScreen *)this);
  sprintf(acStack96,s__szzzTR_02d_dct_80011eec,PTR_ARRAY_8011650c[0],(int)local_98.fTrackID);
  handle = VIDEO_create__Fiiiii(0xa0,0x80,0xf0000,(int)&LAB_0002c000,0x10);
  *(int *)((this->tScreen)._vf + 6) = handle;
  VIDEO_spoolfile__FiPc(handle,acStack96);
  this_00 = (tVideoWall *)&this->tvConfigs[9].flip_axis;
  VIDEO_startplayback__Fi(*(int *)((this->tScreen)._vf + 6));
  this->hVideo = 0;
  Initialize__10tVideoWallP9tTVConfigP18tTexture_ShapeInfossPss
            (this_00,(tTVConfig *)&this->fTicksSet,(this->tScreen).fSwapShapes.fShapes,0,10,tvOrder,
             0x96);
  SetAvailableText__10tVideoWallsss(this_00,0xf8,0x140,0x50);
  SetAvailableIcon__10tVideoWallssssP18tTexture_ShapeInfo
            (this_00,0x26,10,0x136,0x3c,(this->tScreen).fPermShapes.fShapes);
  this->fPreviousTrack = 0;
  this->fMovieTrack = 0;
  (this->fVideoWall).fUpdated = (void *)0x0;
  TurnOn__10tVideoWall(this_00);
  puVar1 = ticks;
  this->fStartTicks = 1;
  *(uchar **)&this->fTVsInitialized = puVar1 + -0x100;
  *(short *)((int)&this->fFrame + 2) = (short)local_98.fTrackID;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__18tScreenTrackSelect(struct tScreenTrackSelect *this /*$s0*/)
 // line 251, offset 0x80041d28
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x80041D28
	/* end block 1 */
	// End offset: 0x80041D28
	// End Line: 252

	/* begin block 2 */
		// Start line: 621
	/* end block 2 */
	// End Line: 622

	/* begin block 3 */
		// Start line: 625
	/* end block 3 */
	// End Line: 626

	/* begin block 4 */
		// Start line: 625
	/* end block 4 */
	// End Line: 626

void Cleanup__18tScreenTrackSelect(tScreenTrackSelect *this)

{
  VIDEO_destroy__Fi(*(int *)((this->tScreen)._vf + 6));
  purgememadr(*(int *)((this->tScreen)._vf + 6));
  Cleanup__7tScreen((tScreen *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBrightness__18tScreenTrackSelects(struct tScreenTrackSelect *this /*$a0*/, short bright /*$a1*/)
 // line 261, offset 0x80041d68
	/* begin block 1 */
		// Start line: 262
		// Start offset: 0x80041D68

		/* begin block 1.1 */
			// Start line: 263
			// Start offset: 0x80041D68

			/* begin block 1.1.1 */
				// Start line: 264
				// Start offset: 0x80041D7C

				/* begin block 1.1.1.1 */
					// Start line: 265
					// Start offset: 0x80041D7C

					/* begin block 1.1.1.1.1 */
						// Start line: 265
						// Start offset: 0x80041D7C
					/* end block 1.1.1.1.1 */
					// End offset: 0x80041D7C
					// End Line: 265
				/* end block 1.1.1.1 */
				// End offset: 0x80041D7C
				// End Line: 265
			/* end block 1.1.1 */
			// End offset: 0x80041D90
			// End Line: 267
		/* end block 1.1 */
		// End offset: 0x80041D90
		// End Line: 267
	/* end block 1 */
	// End offset: 0x80041D90
	// End Line: 267

	/* begin block 2 */
		// Start line: 640
	/* end block 2 */
	// End Line: 641

	/* begin block 3 */
		// Start line: 645
	/* end block 3 */
	// End Line: 646

	/* begin block 4 */
		// Start line: 645
	/* end block 4 */
	// End Line: 646

	/* begin block 5 */
		// Start line: 646
	/* end block 5 */
	// End Line: 647

	/* begin block 6 */
		// Start line: 646
	/* end block 6 */
	// End Line: 647

void SetBrightness__18tScreenTrackSelects(tScreenTrackSelect *this,short bright)

{
  uchar *puVar1;
  
  puVar1 = ticks;
  if (bright != this->fMovieTrack) {
    this->fMovieTrack = bright;
    this->fBrightness = this->fPreviousTrack;
    *(uchar **)&this->fStartBrightness = puVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateBrightness__18tScreenTrackSelectR17tTrackInformation(struct tScreenTrackSelect *this /*$s0*/, struct tTrackInformation *trackInfo /*$s1*/)
 // line 272, offset 0x80041d98
	/* begin block 1 */
		// Start line: 273
		// Start offset: 0x80041D98
		// Variables:
	// 		long elapsed; // $v1

		/* begin block 1.1 */
			// Start line: 273
			// Start offset: 0x80041D98

			/* begin block 1.1.1 */
				// Start line: 273
				// Start offset: 0x80041D98
			/* end block 1.1.1 */
			// End offset: 0x80041D98
			// End Line: 273
		/* end block 1.1 */
		// End offset: 0x80041D98
		// End Line: 273

		/* begin block 1.2 */
			// Start line: 291
			// Start offset: 0x80041E24

			/* begin block 1.2.1 */
				// Start line: 292
				// Start offset: 0x80041E34

				/* begin block 1.2.1.1 */
					// Start line: 293
					// Start offset: 0x80041E34

					/* begin block 1.2.1.1.1 */
						// Start line: 295
						// Start offset: 0x80041E50

						/* begin block 1.2.1.1.1.1 */
							// Start line: 296
							// Start offset: 0x80041E50

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 296
								// Start offset: 0x80041E50
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x80041E50
							// End Line: 296
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80041E50
						// End Line: 296
					/* end block 1.2.1.1.1 */
					// End offset: 0x80041E74
					// End Line: 298
				/* end block 1.2.1.1 */
				// End offset: 0x80041E74
				// End Line: 298
			/* end block 1.2.1 */
			// End offset: 0x80041E74
			// End Line: 298
		/* end block 1.2 */
		// End offset: 0x80041E74
		// End Line: 298
	/* end block 1 */
	// End offset: 0x80041E74
	// End Line: 298

	/* begin block 2 */
		// Start line: 662
	/* end block 2 */
	// End Line: 663

	/* begin block 3 */
		// Start line: 668
	/* end block 3 */
	// End Line: 669

	/* begin block 4 */
		// Start line: 668
	/* end block 4 */
	// End Line: 669

void UpdateBrightness__18tScreenTrackSelectR17tTrackInformation
               (tScreenTrackSelect *this,tTrackInformation *trackInfo)

{
  uchar *puVar1;
  int iVar2;
  
  puVar1 = ticks + -*(int *)&this->fStartBrightness;
  if ((int)this->fMovieTrack != (int)this->fPreviousTrack) {
    if ((int)puVar1 < 0x80) {
      if ((int)puVar1 < 0) {
        this->fPreviousTrack = 0;
      }
      else {
        iVar2 = ((int)this->fMovieTrack - (int)this->fBrightness) * (int)puVar1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x7f;
        }
        this->fPreviousTrack = this->fBrightness + (short)(iVar2 >> 7);
      }
    }
    else {
      this->fPreviousTrack = this->fMovieTrack;
    }
  }
  if ((*(int *)&this->fPreviousTrack == 0) &&
     (VIDEO_abortplayback__Fi(*(int *)((this->tScreen)._vf + 6)), puVar1 = ticks,
     this->fStartTicks == 0)) {
    this->fStartTicks = 1;
    *(uchar **)&this->fTVsInitialized = puVar1;
    *(short *)((int)&this->fFrame + 2) = (short)trackInfo->fTrackID;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateVideoWall__18tScreenTrackSelectR17tTrackInformation(struct tScreenTrackSelect *this /*$s0*/, struct tTrackInformation *trackInfo /*$s1*/)
 // line 305, offset 0x80041e88
	/* begin block 1 */
		// Start line: 306
		// Start offset: 0x80041E88
	/* end block 1 */
	// End offset: 0x80041EE8
	// End Line: 315

	/* begin block 2 */
		// Start line: 728
	/* end block 2 */
	// End Line: 729

	/* begin block 3 */
		// Start line: 736
	/* end block 3 */
	// End Line: 737

	/* begin block 4 */
		// Start line: 736
	/* end block 4 */
	// End Line: 737

void UpdateVideoWall__18tScreenTrackSelectR17tTrackInformation
               (tScreenTrackSelect *this,tTrackInformation *trackInfo)

{
  if ((int)trackInfo->fTrackID != (int)*(short *)&this->fFrame) {
    AsyncLoadSwapShapeFile__7tScreenPc((tScreen *)this,trackInfo->fShapeName);
    (this->fVideoWall).fUpdated = (void *)0x0;
    *(short *)&this->fFrame = (short)trackInfo->fTrackID;
    TurnOff__10tVideoWall((tVideoWall *)&this->tvConfigs[9].flip_axis);
    SetBrightness__18tScreenTrackSelects(this,0);
    this->fStartTicks = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawVideoWall__18tScreenTrackSelect(struct tScreenTrackSelect *this /*$s1*/)
 // line 319, offset 0x80041efc
	/* begin block 1 */
		// Start line: 320
		// Start offset: 0x80041EFC
		// Variables:
	// 		struct tTrackInformation trackInfo; // stack offset -64
	/* end block 1 */
	// End offset: 0x80041FE0
	// End Line: 341

	/* begin block 2 */
		// Start line: 760
	/* end block 2 */
	// End Line: 761

	/* begin block 3 */
		// Start line: 765
	/* end block 3 */
	// End Line: 766

	/* begin block 4 */
		// Start line: 765
	/* end block 4 */
	// End Line: 766

void DrawVideoWall__18tScreenTrackSelect(tScreenTrackSelect *this)

{
  tVideoWall *this_00;
  tTrackInformation tStack64;
  
  GetTrack__13tTrackManagersR17tTrackInformation
            (&trackManager,(ushort)(byte)frontEnd.track[(uint)(byte)frontEnd.pinkSlipsTrackIndex],
             &tStack64);
  FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
            ((ushort)tStack64.fSpeedoCountry + 0x43,0x1de,0x21,1,textState_Unselected,
             textType_TrackRecords);
  DrawBackgroundImage__7tScreeniiP18tTexture_ShapeInfoi
            ((tScreen *)this,0,0x1c,(this->tScreen).fPermShapes.fShapes,0x96);
  PSXDrawTransSquare__Fiiiiis(0,0x140,0x1e,0xa0,10,1);
  FeDraw_SetABRMode__Fi(0);
  this_00 = (tVideoWall *)&this->tvConfigs[9].flip_axis;
  if ((((this->tScreen).fSwapShapes.fFlags & 1) != 0) &&
     ((this->fVideoWall).fUpdated == (void *)0x0)) {
    SetAvailable__10tVideoWalls(this_00,(ushort)tStack64.fAvailable);
    UpdateImages__10tVideoWall(this_00);
    *(undefined **)&(this->fVideoWall).fUpdated = &DAT_00000001;
  }
  this_00 = (tVideoWall *)&this->tvConfigs[9].flip_axis;
  UpdateTransition__10tVideoWall(this_00);
  Draw__10tVideoWall(this_00);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__18tScreenTrackSelect7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenTrackSelect *this /*$s0*/, enum tInputKeyType *keyval /*$a2*/)
 // line 345, offset 0x8004200c
	/* begin block 1 */
		// Start line: 346
		// Start offset: 0x8004200C
		// Variables:
	// 		struct tTrackInformation trackInfo; // stack offset -56

		/* begin block 1.1 */
			// Start line: 346
			// Start offset: 0x8004200C

			/* begin block 1.1.1 */
				// Start line: 350
				// Start offset: 0x80042028

				/* begin block 1.1.1.1 */
					// Start line: 351
					// Start offset: 0x80042028

					/* begin block 1.1.1.1.1 */
						// Start line: 351
						// Start offset: 0x80042028
					/* end block 1.1.1.1.1 */
					// End offset: 0x80042028
					// End Line: 351
				/* end block 1.1.1.1 */
				// End offset: 0x80042028
				// End Line: 351

				/* begin block 1.1.1.2 */
					// Start line: 351
					// Start offset: 0x80042028

					/* begin block 1.1.1.2.1 */
						// Start line: 357
						// Start offset: 0x80042088

						/* begin block 1.1.1.2.1.1 */
							// Start line: 357
							// Start offset: 0x80042088

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 357
								// Start offset: 0x80042088
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x8004208C
							// End Line: 357
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x8004208C
						// End Line: 357
					/* end block 1.1.1.2.1 */
					// End offset: 0x8004208C
					// End Line: 357
				/* end block 1.1.1.2 */
				// End offset: 0x8004208C
				// End Line: 357

				/* begin block 1.1.1.3 */
					// Start line: 358
					// Start offset: 0x8004208C

					/* begin block 1.1.1.3.1 */
						// Start line: 359
						// Start offset: 0x800420A0

						/* begin block 1.1.1.3.1.1 */
							// Start line: 359
							// Start offset: 0x800420A0

							/* begin block 1.1.1.3.1.1.1 */
								// Start line: 359
								// Start offset: 0x800420A0
							/* end block 1.1.1.3.1.1.1 */
							// End offset: 0x800420B8
							// End Line: 359
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x800420B8
						// End Line: 359
					/* end block 1.1.1.3.1 */
					// End offset: 0x800420B8
					// End Line: 359
				/* end block 1.1.1.3 */
				// End offset: 0x800420B8
				// End Line: 359

				/* begin block 1.1.1.4 */
					// Start line: 360
					// Start offset: 0x800420B8

					/* begin block 1.1.1.4.1 */
						// Start line: 361
						// Start offset: 0x800420C8

						/* begin block 1.1.1.4.1.1 */
							// Start line: 361
							// Start offset: 0x800420C8

							/* begin block 1.1.1.4.1.1.1 */
								// Start line: 361
								// Start offset: 0x800420C8
							/* end block 1.1.1.4.1.1.1 */
							// End offset: 0x800420E0
							// End Line: 361
						/* end block 1.1.1.4.1.1 */
						// End offset: 0x800420E0
						// End Line: 361
					/* end block 1.1.1.4.1 */
					// End offset: 0x800420E0
					// End Line: 361
				/* end block 1.1.1.4 */
				// End offset: 0x800420E0
				// End Line: 361

				/* begin block 1.1.1.5 */
					// Start line: 362
					// Start offset: 0x800420E0

					/* begin block 1.1.1.5.1 */
						// Start line: 363
						// Start offset: 0x80042108

						/* begin block 1.1.1.5.1.1 */
							// Start line: 363
							// Start offset: 0x80042108

							/* begin block 1.1.1.5.1.1.1 */
								// Start line: 363
								// Start offset: 0x80042108
							/* end block 1.1.1.5.1.1.1 */
							// End offset: 0x80042120
							// End Line: 363
						/* end block 1.1.1.5.1.1 */
						// End offset: 0x80042120
						// End Line: 363
					/* end block 1.1.1.5.1 */
					// End offset: 0x80042120
					// End Line: 363
				/* end block 1.1.1.5 */
				// End offset: 0x80042120
				// End Line: 363

				/* begin block 1.1.1.6 */
					// Start line: 364
					// Start offset: 0x80042120

					/* begin block 1.1.1.6.1 */
						// Start line: 365
						// Start offset: 0x80042140

						/* begin block 1.1.1.6.1.1 */
							// Start line: 365
							// Start offset: 0x80042140

							/* begin block 1.1.1.6.1.1.1 */
								// Start line: 365
								// Start offset: 0x80042140
							/* end block 1.1.1.6.1.1.1 */
							// End offset: 0x80042140
							// End Line: 365
						/* end block 1.1.1.6.1.1 */
						// End offset: 0x80042140
						// End Line: 365
					/* end block 1.1.1.6.1 */
					// End offset: 0x80042140
					// End Line: 365

					/* begin block 1.1.1.6.2 */
						// Start line: 366
						// Start offset: 0x8004215C

						/* begin block 1.1.1.6.2.1 */
							// Start line: 366
							// Start offset: 0x8004215C

							/* begin block 1.1.1.6.2.1.1 */
								// Start line: 366
								// Start offset: 0x8004215C
							/* end block 1.1.1.6.2.1.1 */
							// End offset: 0x8004215C
							// End Line: 366
						/* end block 1.1.1.6.2.1 */
						// End offset: 0x8004215C
						// End Line: 366
					/* end block 1.1.1.6.2 */
					// End offset: 0x8004215C
					// End Line: 366
				/* end block 1.1.1.6 */
				// End offset: 0x8004215C
				// End Line: 366
			/* end block 1.1.1 */
			// End offset: 0x8004215C
			// End Line: 366

			/* begin block 1.1.2 */
				// Start line: 368
				// Start offset: 0x80042178

				/* begin block 1.1.2.1 */
					// Start line: 368
					// Start offset: 0x80042178

					/* begin block 1.1.2.1.1 */
						// Start line: 369
						// Start offset: 0x80042184

						/* begin block 1.1.2.1.1.1 */
							// Start line: 370
							// Start offset: 0x80042184

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 370
								// Start offset: 0x80042184
								// Variables:
							// 		struct tFEApplication *this; // $v0

								/* begin block 1.1.2.1.1.1.1.1 */
									// Start line: 370
									// Start offset: 0x80042184
								/* end block 1.1.2.1.1.1.1.1 */
								// End offset: 0x80042184
								// End Line: 370
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x80042184
							// End Line: 370
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x800421C4
						// End Line: 371
					/* end block 1.1.2.1.1 */
					// End offset: 0x800421C4
					// End Line: 371
				/* end block 1.1.2.1 */
				// End offset: 0x800421C4
				// End Line: 371
			/* end block 1.1.2 */
			// End offset: 0x800421C4
			// End Line: 371
		/* end block 1.1 */
		// End offset: 0x800421C4
		// End Line: 371
	/* end block 1 */
	// End offset: 0x800421C4
	// End Line: 371

	/* begin block 2 */
		// Start line: 816
	/* end block 2 */
	// End Line: 817

	/* begin block 3 */
		// Start line: 820
	/* end block 3 */
	// End Line: 821

	/* begin block 4 */
		// Start line: 820
	/* end block 4 */
	// End Line: 821

void ProcessInput__18tScreenTrackSelect7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tScreenTrackSelect *this,tInputKeyType *keyval)

{
  tGlobalMenuDefs *ptVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int *in_a2;
  tTrackInformation tStack56;
  
  if (*in_a2 != 8) {
    if (*in_a2 != 0x10) {
      return;
    }
    iVar3 = *(int *)(FEApp->fCurrentMenu[0] + 0x68);
    iVar3 = (**(code **)(iVar3 + 0x44))(FEApp->fCurrentMenu[0] + (int)*(short *)(iVar3 + 0x40));
    if (iVar3 == 1) {
      return;
    }
    TurnOffInstant__10tVideoWall((tVideoWall *)&this->tvConfigs[9].flip_axis);
    return;
  }
  GetTrack__13tTrackManagersR17tTrackInformation
            (&trackManager,(ushort)(byte)frontEnd.track[(uint)(byte)frontEnd.pinkSlipsTrackIndex],
             &tStack56);
  ptVar1 = menuDefs;
  uVar4 = (menuDefs->menuTestDriveTrackSelect).tMenu.fCurrentItem & 0xfffffffe;
  (menuDefs->menuTestDriveTrackSelect).tMenu.fCurrentItem = uVar4;
  if ((frontEnd.gameMode != '\x01') && (frontEnd.oppNumber == '\x02')) {
    (ptVar1->menuTestDriveTrackSelect).tMenu.fCurrentItem = uVar4 | 1;
  }
  if (2 < tStack56.fTrackDifficulty) {
    (menuDefs->menuTestDriveTrackSelect).tMenu.fCurrentItem =
         (menuDefs->menuTestDriveTrackSelect).tMenu.fCurrentItem | 1;
  }
  if (tStack56.fIsEgg != '\0') {
    (menuDefs->menuTestDriveTrackSelect).tMenu.fCurrentItem =
         (menuDefs->menuTestDriveTrackSelect).tMenu.fCurrentItem | 1;
  }
  if (frontEnd.gameMode == '\x01') {
    if (frontEnd.raceType != '\x01') goto LAB_8004215c;
    (menuDefs->menuTestDriveTrackSelect).tMenu.fCurrentItem =
         (menuDefs->menuTestDriveTrackSelect).tMenu.fCurrentItem | 1;
  }
  if ((frontEnd.raceType == '\x01') &&
     (pvVar2 = Front_EnableLocalSpeech__Fv(), pvVar2 != (void *)0x0)) {
    (menuDefs->menuTestDriveTrackSelect).tMenu.fItemList[7] =
         (_func_21 *)((uint)(menuDefs->menuTestDriveTrackSelect).tMenu.fItemList[7] & 0xfffffffe);
    return;
  }
LAB_8004215c:
  (menuDefs->menuTestDriveTrackSelect).tMenu.fItemList[7] =
       (_func_21 *)((uint)(menuDefs->menuTestDriveTrackSelect).tMenu.fItemList[7] | 1);
  return;
}





