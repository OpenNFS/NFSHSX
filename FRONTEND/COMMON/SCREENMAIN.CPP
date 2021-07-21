#include "THISDUST.H"
#include "SCREENMAIN.H"


// decompiled code
// original method signature: 
// void /*$ra*/ SwapBackground__11tScreenMaini(struct tScreenMain *this /*$s0*/, int num /*$s1*/)
 // line 218, offset 0x80036f20
	/* begin block 1 */
		// Start line: 219
		// Start offset: 0x80036F20
		// Variables:
	// 		char buffer[8]; // stack offset -24
	// 		enum tScreenMainState oldState; // $a0
	/* end block 1 */
	// End offset: 0x800370C4
	// End Line: 266

	/* begin block 2 */
		// Start line: 436
	/* end block 2 */
	// End Line: 437

	/* begin block 3 */
		// Start line: 436
	/* end block 3 */
	// End Line: 437

void SwapBackground__11tScreenMaini(tScreenMain *this,int num)

{
  int iVar1;
  tShapeInformation *ptVar2;
  void *pvVar3;
  tScreenMainState state;
  char acStack24 [8];
  
  VIDEO_abortplayback__Fi(*(int *)((this->tScreen)._vf + 6));
  pvVar3 = this->fVideoShapes[1].fLoadCancelled;
  *(undefined4 *)&this->fPreviousMovie = 1;
  ptVar2 = &(this->tScreen).fPermShapes + (int)pvVar3;
  if ((((*(int *)ptVar2[0x22].fFilename == 0) && (ptVar2[0x22].async_handle == 0)) &&
      (ptVar2 = &(this->tScreen).fPermShapes + (1 - (int)pvVar3),
      *(int *)ptVar2[0x22].fFilename == 0)) && (ptVar2[0x22].async_handle == 0)) {
    if (num == -1) {
      do {
        iVar1 = rand();
        (&this->fCurrentSlot)[(int)this->fVideoShapes[1].fLoadCancelled] = iVar1 % 0x1c;
        pvVar3 = this->fVideoShapes[1].fLoadCancelled;
      } while ((&this->fCurrentSlot)[(int)pvVar3] == (&this->fCurrentSlot)[1 - (int)pvVar3]);
    }
    else {
      (&this->fCurrentSlot)[(int)pvVar3] = num;
    }
    sprintf(acStack24,s_zyVid_02d_80011880,
            (&this->fCurrentSlot)[(int)this->fVideoShapes[1].fLoadCancelled]);
    AsyncLoadShapeFile__7tScreenPcR17tShapeInformation
              ((tScreen *)this,acStack24,
               (tShapeInformation *)
               (&this->fMovieTicks + (int)this->fVideoShapes[1].fLoadCancelled * 10));
    iVar1 = *(int *)&this->fAnimLocation;
    pvVar3 = this->fVideoShapes[1].fLoadCancelled;
    *(undefined4 *)&this->fAnimLocation = 0;
    this->fVideoShapes[1].fLoadCancelled = (void *)(1 - (int)pvVar3);
    if (iVar1 == 3) {
      state = kScreenMain_WarningImage;
    }
    else {
      state = kScreenMain_StaticImage;
    }
    SetState__11tScreenMain16tScreenMainState(this,state);
    this->fCurrentBG[1] = 0x10;
  }
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ DoneLoadingBackground__11tScreenMain(struct tScreenMain *this /*$a0*/)
 // line 270, offset 0x800370dc
	/* begin block 1 */
		// Start line: 271
		// Start offset: 0x800370DC
	/* end block 1 */
	// End offset: 0x80037150
	// End Line: 277

	/* begin block 2 */
		// Start line: 552
	/* end block 2 */
	// End Line: 553

	/* begin block 3 */
		// Start line: 557
	/* end block 3 */
	// End Line: 558

	/* begin block 4 */
		// Start line: 557
	/* end block 4 */
	// End Line: 558

	/* begin block 5 */
		// Start line: 561
	/* end block 5 */
	// End Line: 562

void * DoneLoadingBackground__11tScreenMain(tScreenMain *this)

{
  undefined *puVar1;
  tShapeInformation *ptVar2;
  void *pvVar3;
  
  pvVar3 = this->fVideoShapes[1].fLoadCancelled;
  ptVar2 = &(this->tScreen).fPermShapes + (int)pvVar3;
  puVar1 = (undefined *)0x0;
  if ((*(int *)ptVar2[0x22].fFilename == 0) &&
     (puVar1 = (undefined *)0x0, ptVar2[0x22].async_handle == 0)) {
    ptVar2 = &(this->tScreen).fPermShapes + (1 - (int)pvVar3);
    puVar1 = (undefined *)0x0;
    if ((*(int *)ptVar2[0x22].fFilename == 0) &&
       (puVar1 = &DAT_00000001, ptVar2[0x22].async_handle != 0)) {
      puVar1 = (undefined *)0x0;
    }
  }
  return puVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetState__11tScreenMain16tScreenMainState(struct tScreenMain *this /*$s2*/, enum tScreenMainState state /*$s0*/)
 // line 280, offset 0x80037158
	/* begin block 1 */
		// Start line: 281
		// Start offset: 0x80037158
		// Variables:
	// 		short i; // $s1
	// 		struct tTexture_ShapeInfo *shape; // $a2

		/* begin block 1.1 */
			// Start line: 281
			// Start offset: 0x80037158

			/* begin block 1.1.1 */
				// Start line: 286
				// Start offset: 0x80037180

				/* begin block 1.1.1.1 */
					// Start line: 288
					// Start offset: 0x80037180

					/* begin block 1.1.1.1.1 */
						// Start line: 288
						// Start offset: 0x80037180
					/* end block 1.1.1.1.1 */
					// End offset: 0x80037180
					// End Line: 288
				/* end block 1.1.1.1 */
				// End offset: 0x80037180
				// End Line: 288

				/* begin block 1.1.1.2 */
					// Start line: 288
					// Start offset: 0x80037180

					/* begin block 1.1.1.2.1 */
						// Start line: 292
						// Start offset: 0x800371AC

						/* begin block 1.1.1.2.1.1 */
							// Start line: 292
							// Start offset: 0x800371AC
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x800371AC
						// End Line: 292
					/* end block 1.1.1.2.1 */
					// End offset: 0x800371AC
					// End Line: 292
				/* end block 1.1.1.2 */
				// End offset: 0x800371C8
				// End Line: 294

				/* begin block 1.1.1.3 */
					// Start line: 297
					// Start offset: 0x800371C8

					/* begin block 1.1.1.3.1 */
						// Start line: 297
						// Start offset: 0x800371C8
					/* end block 1.1.1.3.1 */
					// End offset: 0x800371C8
					// End Line: 297
				/* end block 1.1.1.3 */
				// End offset: 0x800371C8
				// End Line: 297
			/* end block 1.1.1 */
			// End offset: 0x80037414
			// End Line: 343
		/* end block 1.1 */
		// End offset: 0x80037414
		// End Line: 343
	/* end block 1 */
	// End offset: 0x80037414
	// End Line: 343

	/* begin block 2 */
		// Start line: 573
	/* end block 2 */
	// End Line: 574

	/* begin block 3 */
		// Start line: 577
	/* end block 3 */
	// End Line: 578

	/* begin block 4 */
		// Start line: 577
	/* end block 4 */
	// End Line: 578

void SetState__11tScreenMain16tScreenMainState(tScreenMain *this,tScreenMainState state)

{
  byte bVar1;
  uchar *puVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  tTexture_ShapeInfo **pptVar8;
  int iVar9;
  
  if (state != *(tScreenMainState *)&this->fAnimLocation) {
    VIDEO_abortplayback__Fi(*(int *)((this->tScreen)._vf + 6));
    puVar2 = ticks;
    *(undefined4 *)&this->fPreviousMovie = 1;
    *(uchar **)&this->bVideoAborted = puVar2;
    if ((state != kScreenMain_Credits) &&
       ((undefined *)CreditManager.fCreditsInitialized == &DAT_00000001)) {
      DeInit__14tCreditManager(&CreditManager);
    }
    puVar2 = ticks;
    iVar9 = 0;
    *(tScreenMainState *)&this->fAnimLocation = state;
    *(uchar **)&this->fFrame = puVar2;
    do {
      pptVar8 = &(this->tScreen).fPermShapes.fShapes + (int)(short)iVar9 * 6;
      uVar6 = (&this->fMovieTicks)[(int)this->fVideoShapes[1].fLoadCancelled * 10];
      pptVar8[0xef] = (tTexture_ShapeInfo *)0x1;
      iVar7 = uVar6 + (int)(short)iVar9 * 0x20;
      bVar1 = *(byte *)(iVar7 + 8);
      iVar5 = ((int)*(short *)(iVar7 + 0x18) - (int)(short)(*(ushort *)(iVar7 + 0x18) & 0xffc0)) *
              0x10;
      if (bVar1 == 0) {
        trap(0x1c00);
      }
      if (((uint)bVar1 == 0xffffffff) && (iVar5 == -0x80000000)) {
        trap(0x1800);
      }
      *(undefined *)((int)pptVar8 + 0x3c2) = (char)(iVar5 / (int)(uint)bVar1);
      *(undefined *)((int)pptVar8 + 0x3c3) = *(undefined *)(iVar7 + 0x1a);
      *(undefined *)(pptVar8 + 0xf1) = *(undefined *)(iVar7 + 0x10);
      *(undefined *)((int)pptVar8 + 0x3c5) = *(undefined *)(iVar7 + 0x12);
      *(ushort *)(pptVar8 + 0xf2) =
           (ushort)(((uint)*(byte *)(iVar7 + 9) & 3) << 7) |
           (short)(*(ushort *)(iVar7 + 0x1a) & 0x100) >> 4 |
           (ushort)(((uint)*(ushort *)(iVar7 + 0x18) & 0x3c0) >> 6) |
           (ushort)(((uint)*(ushort *)(iVar7 + 0x1a) & 0x200) << 2);
      uVar4 = GetClut((*(uint *)(iVar7 + 4) & 0x3f) << 4,(int)*(uint *)(iVar7 + 4) >> 6);
      iVar9 = iVar9 + 1;
      *(undefined2 *)((int)pptVar8 + 0x3c6) = (short)uVar4;
      *(undefined2 *)(pptVar8 + 0xf0) = 0;
      pptVar8[0xf3] = (tTexture_ShapeInfo *)0x808080;
      *(undefined2 *)(pptVar8 + 0xf4) = 0x80;
    } while (iVar9 * 0x10000 >> 0x10 < 0x10);
    iVar9 = *(int *)&this->fAnimLocation;
    if (iVar9 == 3) {
      iVar9 = 4;
      do {
        sVar3 = (short)iVar9;
        iVar9 = iVar9 + 1;
        pptVar8 = &(this->tScreen).fPermShapes.fShapes + (int)sVar3 * 6;
        *(undefined2 *)(pptVar8 + 0xf4) = 0x80;
        pptVar8[0xef] = (tTexture_ShapeInfo *)0x3;
      } while (iVar9 * 0x10000 >> 0x10 < 0xc);
      *(undefined2 *)&this->tvTransitions[6].tint = 0x80;
      *(undefined2 *)&this->tvTransitions[5].tint = 0x80;
    }
    else {
      if (iVar9 < 4) {
        if (iVar9 == 2) {
          InitDynamicImages__11tScreenMain(this);
        }
      }
      else {
        iVar5 = 0;
        if (iVar9 == 4) {
          do {
            sVar3 = (short)iVar5;
            iVar5 = iVar5 + 1;
            pptVar8 = &(this->tScreen).fPermShapes.fShapes + (int)sVar3 * 6;
            *(undefined2 *)(pptVar8 + 0xf4) = 0x80;
            pptVar8[0xef] = (tTexture_ShapeInfo *)0x4;
          } while (iVar5 * 0x10000 >> 0x10 < 0x10);
          Init__14tCreditManageri(&CreditManager);
        }
      }
    }
  }
  return;
}



// autogenerated function stub: 
// void /*$ra*/ InitDynamicImages__11tScreenMain(struct tScreenMain *this /*$t0*/)
void InitDynamicImages__11tScreenMain(struct tScreenMain *this)
{ // line 348, offset 0x8003742c
	/* begin block 1 */
		// Start line: 349
		// Start offset: 0x8003742C
		// Variables:
			struct tVideo *video; // $s1
			int videoWallConfig; // $fp
			int startX; // $t1
			int startY; // $t3
			int x; // $s2
			int y; // $s3
			int xOffset; // $v1
			int yOffset; // $v0
			int i; // $t2
			int j; // $s6
			int k; // $s4
			int index; // $v0
	/* end block 1 */
	// End offset: 0x80037768
	// End Line: 403

	/* begin block 2 */
		// Start line: 737
	/* end block 2 */
	// End Line: 738

	/* begin block 3 */
		// Start line: 743
	/* end block 3 */
	// End Line: 744

	/* begin block 4 */
		// Start line: 743
	/* end block 4 */
	// End Line: 744

}


// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__11tScreenMain7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenMain *this /*$a0*/, enum tInputKeyType *keyval /*$a2*/)
 // line 406, offset 0x80037798
	/* begin block 1 */
		// Start line: 407
		// Start offset: 0x80037798

		/* begin block 1.1 */
			// Start line: 407
			// Start offset: 0x80037798

			/* begin block 1.1.1 */
				// Start line: 408
				// Start offset: 0x800377B4
				// Variables:
			// 		struct tFEApplication *this; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 408
					// Start offset: 0x800377B4
				/* end block 1.1.1.1 */
				// End offset: 0x800377B4
				// End Line: 408
			/* end block 1.1.1 */
			// End offset: 0x800377B4
			// End Line: 408

			/* begin block 1.1.2 */
				// Start line: 409
				// Start offset: 0x800377CC

				/* begin block 1.1.2.1 */
					// Start line: 410
					// Start offset: 0x800377CC

					/* begin block 1.1.2.1.1 */
						// Start line: 410
						// Start offset: 0x800377CC
						// Variables:
					// 		struct tFEApplication *this; // $v1

						/* begin block 1.1.2.1.1.1 */
							// Start line: 410
							// Start offset: 0x800377CC
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x800377CC
						// End Line: 410
					/* end block 1.1.2.1.1 */
					// End offset: 0x800377CC
					// End Line: 410
				/* end block 1.1.2.1 */
				// End offset: 0x800377F4
				// End Line: 413
			/* end block 1.1.2 */
			// End offset: 0x800377F4
			// End Line: 413
		/* end block 1.1 */
		// End offset: 0x800377F4
		// End Line: 413
	/* end block 1 */
	// End offset: 0x800377F4
	// End Line: 413

	/* begin block 2 */
		// Start line: 889
	/* end block 2 */
	// End Line: 890

	/* begin block 3 */
		// Start line: 893
	/* end block 3 */
	// End Line: 894

	/* begin block 4 */
		// Start line: 893
	/* end block 4 */
	// End Line: 894

void ProcessInput__11tScreenMain7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tScreenMain *this,tInputKeyType *keyval)

{
  int *in_a2;
  
  if (((*in_a2 == 0x10) && (0 < (int)FEApp->backList[0x1f])) &&
     (SwapBackground__11tScreenMaini(this,-1),
     (tMenu *)FEApp->fCurrentMenu[0] ==
     (tMenu *)&(menuDefs->itemTwoPlayerPinkSlips).tMenuItemGoToMenuButton.tMenuItemInteractive.
               tMenuItem.fNewMenu)) {
    frontEnd.raceType = '\0';
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawDropShadow__11tScreenMain(struct tScreenMain *this /*$a0*/)
 // line 417, offset 0x80037804
	/* begin block 1 */
		// Start line: 418
		// Start offset: 0x80037804
		// Variables:
	// 		int i; // $t0
	// 		struct POLY_G4 *prim; // $a0
	/* end block 1 */
	// End offset: 0x80037900
	// End Line: 438

	/* begin block 2 */
		// Start line: 910
	/* end block 2 */
	// End Line: 911

	/* begin block 3 */
		// Start line: 915
	/* end block 3 */
	// End Line: 916

	/* begin block 4 */
		// Start line: 915
	/* end block 4 */
	// End Line: 916

void DrawDropShadow__11tScreenMain(tScreenMain *this)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  tVertex *ptVar4;
  int iVar5;
  
  iVar5 = 0;
  ptVar4 = &dropShadow;
  do {
    puVar2 = DAT_1f800004;
    puVar1 = DAT_1f800000;
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar3 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 9;
    *puVar1 = *puVar1 & 0xff000000 | uVar3;
    puVar2[1] = 0x808080;
    *(undefined *)((int)puVar2 + 7) = 0x3a;
    puVar2[3] = 0x808080;
    puVar2[7] = 0;
    puVar2[5] = 0;
    *(undefined *)((int)puVar2 + 3) = 8;
    *(short *)(puVar2 + 2) = ptVar4->x;
    *(short *)((int)puVar2 + 10) = ptVar4->y;
    *(short *)(puVar2 + 4) = ptVar4[1].x;
    *(short *)((int)puVar2 + 0x12) = ptVar4[1].y;
    *(short *)(puVar2 + 6) = ptVar4[2].x;
    *(short *)((int)puVar2 + 0x1a) = ptVar4[2].y;
    iVar5 = iVar5 + 1;
    *(short *)(puVar2 + 8) = ptVar4[3].x;
    *(short *)((int)puVar2 + 0x22) = ptVar4[3].y;
    ptVar4 = ptVar4 + 4;
  } while (iVar5 < 4);
  FeDraw_SetABRMode__Fi(2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawVideoLines__11tScreenMain(struct tScreenMain *this /*$a0*/)
 // line 441, offset 0x80037918
	/* begin block 1 */
		// Start line: 442
		// Start offset: 0x80037918
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x800379A0
	// End Line: 453

	/* begin block 2 */
		// Start line: 965
	/* end block 2 */
	// End Line: 966

	/* begin block 3 */
		// Start line: 969
	/* end block 3 */
	// End Line: 970

	/* begin block 4 */
		// Start line: 969
	/* end block 4 */
	// End Line: 970

void DrawVideoLines__11tScreenMain(tScreenMain *this)

{
  int x;
  
  x = 0xf3;
  do {
    PSXDrawTransSquare__Fiiiiis((int)&DAT_00303030,x,0x2a,2,0xa9,1);
    x = x + 0x50;
  } while (x < 0x1e3);
  x = 0x54;
  do {
    PSXDrawTransSquare__Fiiiiis((int)&DAT_00202020,0xa3,x,0x141,1,1);
    x = x + 0x2a;
  } while (x < 0xd2);
  FeDraw_SetABRMode__Fi(2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__11tScreenMain(struct tScreenMain *this /*$s6*/)
 // line 456, offset 0x800379c0
	/* begin block 1 */
		// Start line: 457
		// Start offset: 0x800379C0
		// Variables:
	// 		short i; // $s2
	// 		short j; // $s0
	// 		struct tDrawShapeExtended drawFlags; // stack offset -184
	// 		unsigned long deltaTicks; // $s1
	// 		short animFade; // $s7
	// 		short x; // $s1
	// 		short y; // $s3
	// 		char buffer[32]; // stack offset -160
	// 		int shapeX; // $v0
	// 		int shapeY; // $s0

		/* begin block 1.1 */
			// Start line: 457
			// Start offset: 0x800379C0

			/* begin block 1.1.1 */
				// Start line: 469
				// Start offset: 0x800379FC

				/* begin block 1.1.1.1 */
					// Start line: 471
					// Start offset: 0x80037A10

					/* begin block 1.1.1.1.1 */
						// Start line: 473
						// Start offset: 0x80037A3C
						// Variables:
					// 		void * bAllTVsOn; // $a2
					/* end block 1.1.1.1.1 */
					// End offset: 0x80037B08
					// End Line: 486
				/* end block 1.1.1.1 */
				// End offset: 0x80037B08
				// End Line: 486
			/* end block 1.1.1 */
			// End offset: 0x80037B08
			// End Line: 486
		/* end block 1.1 */
		// End offset: 0x80037B10
		// End Line: 489

		/* begin block 1.2 */
			// Start line: 490
			// Start offset: 0x80037B10

			/* begin block 1.2.1 */
				// Start line: 490
				// Start offset: 0x80037B20
				// Variables:
			// 		struct tFEApplication *this; // $a0

				/* begin block 1.2.1.1 */
					// Start line: 490
					// Start offset: 0x80037B20
				/* end block 1.2.1.1 */
				// End offset: 0x80037B20
				// End Line: 490
			/* end block 1.2.1 */
			// End offset: 0x80037B20
			// End Line: 490

			/* begin block 1.2.2 */
				// Start line: 494
				// Start offset: 0x80037B44

				/* begin block 1.2.2.1 */
					// Start line: 494
					// Start offset: 0x80037B44

					/* begin block 1.2.2.1.1 */
						// Start line: 494
						// Start offset: 0x80037B44
						// Variables:
					// 		struct tFEApplication *this; // $a0

						/* begin block 1.2.2.1.1.1 */
							// Start line: 494
							// Start offset: 0x80037B44
						/* end block 1.2.2.1.1.1 */
						// End offset: 0x80037B44
						// End Line: 494
					/* end block 1.2.2.1.1 */
					// End offset: 0x80037B44
					// End Line: 494
				/* end block 1.2.2.1 */
				// End offset: 0x80037B74
				// End Line: 496
			/* end block 1.2.2 */
			// End offset: 0x80037B74
			// End Line: 496
		/* end block 1.2 */
		// End offset: 0x80037B74
		// End Line: 496

		/* begin block 1.3 */
			// Start line: 499
			// Start offset: 0x80037B74

			/* begin block 1.3.1 */
				// Start line: 502
				// Start offset: 0x80037B9C

				/* begin block 1.3.1.1 */
					// Start line: 503
					// Start offset: 0x80037B9C

					/* begin block 1.3.1.1.1 */
						// Start line: 504
						// Start offset: 0x80037BAC
						// Variables:
					// 		struct tFEApplication *this; // $v0

						/* begin block 1.3.1.1.1.1 */
							// Start line: 504
							// Start offset: 0x80037BAC
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x80037BAC
						// End Line: 504
					/* end block 1.3.1.1.1 */
					// End offset: 0x80037BAC
					// End Line: 504

					/* begin block 1.3.1.1.2 */
						// Start line: 504
						// Start offset: 0x80037BAC

						/* begin block 1.3.1.1.2.1 */
							// Start line: 504
							// Start offset: 0x80037BAC
						/* end block 1.3.1.1.2.1 */
						// End offset: 0x80037BAC
						// End Line: 504
					/* end block 1.3.1.1.2 */
					// End offset: 0x80037BAC
					// End Line: 504
				/* end block 1.3.1.1 */
				// End offset: 0x80037BE4
				// End Line: 505
			/* end block 1.3.1 */
			// End offset: 0x80037BE4
			// End Line: 505

			/* begin block 1.3.2 */
				// Start line: 507
				// Start offset: 0x80037BEC

				/* begin block 1.3.2.1 */
					// Start line: 507
					// Start offset: 0x80037BEC

					/* begin block 1.3.2.1.1 */
						// Start line: 508
						// Start offset: 0x80037BFC
						// Variables:
					// 		struct tFEApplication *this; // $v0

						/* begin block 1.3.2.1.1.1 */
							// Start line: 508
							// Start offset: 0x80037BFC
						/* end block 1.3.2.1.1.1 */
						// End offset: 0x80037BFC
						// End Line: 508
					/* end block 1.3.2.1.1 */
					// End offset: 0x80037BFC
					// End Line: 508

					/* begin block 1.3.2.1.2 */
						// Start line: 508
						// Start offset: 0x80037BFC

						/* begin block 1.3.2.1.2.1 */
							// Start line: 508
							// Start offset: 0x80037BFC
						/* end block 1.3.2.1.2.1 */
						// End offset: 0x80037BFC
						// End Line: 508
					/* end block 1.3.2.1.2 */
					// End offset: 0x80037BFC
					// End Line: 508
				/* end block 1.3.2.1 */
				// End offset: 0x80037C44
				// End Line: 509
			/* end block 1.3.2 */
			// End offset: 0x80037C44
			// End Line: 509
		/* end block 1.3 */
		// End offset: 0x80037C44
		// End Line: 509

		/* begin block 1.4 */
			// Start line: 512
			// Start offset: 0x80037C44

			/* begin block 1.4.1 */
				// Start line: 513
				// Start offset: 0x80037C64
				// Variables:
			// 		int fade; // $v0
			// 		int TextCol; // $s0
			// 		struct RECT r; // stack offset -128
			/* end block 1.4.1 */
			// End offset: 0x80037F24
			// End Line: 557
		/* end block 1.4 */
		// End offset: 0x80037F24
		// End Line: 557

		/* begin block 1.5 */
			// Start line: 566
			// Start offset: 0x80037F3C

			/* begin block 1.5.1 */
				// Start line: 567
				// Start offset: 0x80037F54

				/* begin block 1.5.1.1 */
					// Start line: 567
					// Start offset: 0x80037F54

					/* begin block 1.5.1.1.1 */
						// Start line: 567
						// Start offset: 0x80037F54
					/* end block 1.5.1.1.1 */
					// End offset: 0x80037F54
					// End Line: 567
				/* end block 1.5.1.1 */
				// End offset: 0x80037F54
				// End Line: 567
			/* end block 1.5.1 */
			// End offset: 0x80037F84
			// End Line: 573

			/* begin block 1.5.2 */
				// Start line: 576
				// Start offset: 0x80037F8C

				/* begin block 1.5.2.1 */
					// Start line: 576
					// Start offset: 0x80037F8C

					/* begin block 1.5.2.1.1 */
						// Start line: 578
						// Start offset: 0x80037FA4

						/* begin block 1.5.2.1.1.1 */
							// Start line: 578
							// Start offset: 0x80037FA4
						/* end block 1.5.2.1.1.1 */
						// End offset: 0x80037FA4
						// End Line: 578
					/* end block 1.5.2.1.1 */
					// End offset: 0x80037FA4
					// End Line: 578

					/* begin block 1.5.2.1.2 */
						// Start line: 579
						// Start offset: 0x80037FD4
						// Variables:
					// 		char moviename[80]; // stack offset -120
					// 		struct RECT r; // stack offset -128
					/* end block 1.5.2.1.2 */
					// End offset: 0x80038098
					// End Line: 604
				/* end block 1.5.2.1 */
				// End offset: 0x80038098
				// End Line: 604
			/* end block 1.5.2 */
			// End offset: 0x80038098
			// End Line: 604
		/* end block 1.5 */
		// End offset: 0x80038098
		// End Line: 604

		/* begin block 1.6 */
			// Start line: 615
			// Start offset: 0x800380C8

			/* begin block 1.6.1 */
				// Start line: 615
				// Start offset: 0x800380C8
			/* end block 1.6.1 */
			// End offset: 0x800380C8
			// End Line: 615
		/* end block 1.6 */
		// End offset: 0x800380C8
		// End Line: 615

		/* begin block 1.7 */
			// Start line: 644
			// Start offset: 0x8003819C

			/* begin block 1.7.1 */
				// Start line: 646
				// Start offset: 0x800381B8

				/* begin block 1.7.1.1 */
					// Start line: 647
					// Start offset: 0x800381B8

					/* begin block 1.7.1.1.1 */
						// Start line: 647
						// Start offset: 0x800381B8
					/* end block 1.7.1.1.1 */
					// End offset: 0x800381B8
					// End Line: 647
				/* end block 1.7.1.1 */
				// End offset: 0x800381B8
				// End Line: 647
			/* end block 1.7.1 */
			// End offset: 0x800381EC
			// End Line: 652
		/* end block 1.7 */
		// End offset: 0x800381EC
		// End Line: 652

		/* begin block 1.8 */
			// Start line: 662
			// Start offset: 0x80038218

			/* begin block 1.8.1 */
				// Start line: 663
				// Start offset: 0x80038234
				// Variables:
			// 		int drawAnimFade; // $t1

				/* begin block 1.8.1.1 */
					// Start line: 665
					// Start offset: 0x80038234

					/* begin block 1.8.1.1.1 */
						// Start line: 665
						// Start offset: 0x80038234

						/* begin block 1.8.1.1.1.1 */
							// Start line: 665
							// Start offset: 0x80038234
						/* end block 1.8.1.1.1.1 */
						// End offset: 0x80038234
						// End Line: 665
					/* end block 1.8.1.1.1 */
					// End offset: 0x80038234
					// End Line: 665
				/* end block 1.8.1.1 */
				// End offset: 0x8003828C
				// End Line: 669
			/* end block 1.8.1 */
			// End offset: 0x800382FC
			// End Line: 674
		/* end block 1.8 */
		// End offset: 0x800382FC
		// End Line: 674

		/* begin block 1.9 */
			// Start line: 678
			// Start offset: 0x800382FC

			/* begin block 1.9.1 */
				// Start line: 679
				// Start offset: 0x8003830C

				/* begin block 1.9.1.1 */
					// Start line: 681
					// Start offset: 0x80038330

					/* begin block 1.9.1.1.1 */
						// Start line: 682
						// Start offset: 0x80038338

						/* begin block 1.9.1.1.1.1 */
							// Start line: 682
							// Start offset: 0x80038348

							/* begin block 1.9.1.1.1.1.1 */
								// Start line: 682
								// Start offset: 0x80038348
							/* end block 1.9.1.1.1.1.1 */
							// End offset: 0x80038348
							// End Line: 682
						/* end block 1.9.1.1.1.1 */
						// End offset: 0x80038348
						// End Line: 682
					/* end block 1.9.1.1.1 */
					// End offset: 0x80038348
					// End Line: 682
				/* end block 1.9.1.1 */
				// End offset: 0x800383E8
				// End Line: 686
			/* end block 1.9.1 */
			// End offset: 0x800383E8
			// End Line: 687
		/* end block 1.9 */
		// End offset: 0x800383F4
		// End Line: 688

		/* begin block 1.10 */
			// Start line: 688
			// Start offset: 0x800383F4

			/* begin block 1.10.1 */
				// Start line: 688
				// Start offset: 0x800383F4
			/* end block 1.10.1 */
			// End offset: 0x800383F4
			// End Line: 688
		/* end block 1.10 */
		// End offset: 0x800383F4
		// End Line: 688
	/* end block 1 */
	// End offset: 0x8003866C
	// End Line: 738

	/* begin block 2 */
		// Start line: 1007
	/* end block 2 */
	// End Line: 1008

	/* begin block 3 */
		// Start line: 1011
	/* end block 3 */
	// End Line: 1012

	/* begin block 4 */
		// Start line: 1011
	/* end block 4 */
	// End Line: 1012

void DrawBackground__11tScreenMain(tScreenMain *this)

{
  bool bVar1;
  uchar *puVar2;
  char *str;
  VIDEOSTATE VVar3;
  int Col;
  tTexture_ShapeInfo *ptVar4;
  tTexture_ShapeInfo **pptVar5;
  tScreenMainState state;
  uint uVar6;
  short sVar7;
  tShapeInformation *ptVar8;
  int x;
  int handle;
  short sVar9;
  short sVar10;
  tDrawShapeExtended tStack184;
  char acStack160 [32];
  RECT local_80;
  char acStack120 [80];
  
  sVar10 = 0;
  sVar7 = 0;
  while (Col = (int)sVar7, Col < 2) {
    IsShapeFileLoaded__7tScreenR17tShapeInformation
              ((tScreen *)this,(tShapeInformation *)(&this->fMovieTicks + Col * 10));
    bVar1 = true;
    if (this->fVideoShapes[Col].fShapes != (tTexture_ShapeInfo *)0x0) {
      handle = 0;
      Col = 0;
      do {
        Col = Col >> 0x10;
        ptVar4 = *(tTexture_ShapeInfo **)(&this->tvConfigs[0xf].flip_axis + Col * 2);
        if ((ptVar4 == (tTexture_ShapeInfo *)0x1) || (ptVar4 == (tTexture_ShapeInfo *)0x4)) {
          pptVar5 = &(this->tScreen).fPermShapes.fShapes + Col * 6;
          if ((pptVar5[0xef] != ptVar4) ||
             (*(short *)&this->tvConfigs[Col].uw != *(short *)((int)pptVar5 + 0x3c6)))
          goto LAB_80037a9c;
        }
        else {
LAB_80037a9c:
          bVar1 = false;
        }
        handle = handle + 1;
        Col = handle * 0x10000;
      } while (handle * 0x10000 >> 0x10 < 0x10);
      if (bVar1) {
        UploadShapes__7tScreenR17tShapeInformationssss
                  ((tScreen *)this,(tShapeInformation *)(&this->fMovieTicks + (int)sVar7 * 10),
                   sVar7 * 0xa6,0,0x10,0);
      }
    }
    sVar7 = sVar7 + 1;
  }
  if ((*(int *)&this->fAnimLocation == 4) &&
     ((short *)FEApp->fCurrentMenu[0] !=
      &(menuDefs->itemPinkSlipStandingsExit).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
       fSelFade)) {
    state = kScreenMain_StaticImage;
LAB_80037b6c:
    SetState__11tScreenMain16tScreenMainState(this,state);
  }
  else {
    if ((short *)FEApp->fCurrentMenu[0] ==
        &(menuDefs->itemPinkSlipStandingsExit).tMenuItemGoToMenuButton.tMenuItemInteractive.
         tMenuItem.fSelFade) {
      state = kScreenMain_Credits;
      goto LAB_80037b6c;
    }
  }
  Draw__14tCreditManagerb(&CreditManager,(void *)(uint)(*(int *)&this->fAnimLocation == 4));
  if (*(int *)&this->fAnimLocation == 3) {
    if ((frontEnd.raceType != '\x06') &&
       (*(int **)(FEApp->fCurrentMenu[0] + *(int *)(FEApp->fCurrentMenu[0] + 8) * 4 + 0x10) !=
        &(menuDefs->menuSpecialEvent).tMenu.fCurrentItem)) {
      state = kScreenMain_StaticImage;
LAB_80037c3c:
      SetState__11tScreenMain16tScreenMainState(this,state);
    }
  }
  else {
    if ((frontEnd.raceType == '\x06') ||
       (*(int **)(FEApp->fCurrentMenu[0] + *(int *)(FEApp->fCurrentMenu[0] + 8) * 4 + 0x10) ==
        &(menuDefs->menuSpecialEvent).tMenu.fCurrentItem)) {
      state = kScreenMain_WarningImage;
      goto LAB_80037c3c;
    }
  }
  if (*(int *)&this->fAnimLocation == 3) {
    if (*(short *)((int)&this->fAnimationUploaded + 2) < 0x60) {
      *(short *)((int)&this->fAnimationUploaded + 2) =
           *(short *)((int)&this->fAnimationUploaded + 2) + 4;
    }
LAB_80037c84:
    Col = 4;
    do {
      ptVar8 = (tShapeInformation *)((int)&(this->tScreen).fPermShapes + (int)(short)Col * 0x30);
      Col = Col + 1;
      *(ushort *)&ptVar8[3].async_handle = *(ushort *)&ptVar8[3].async_handle | 2;
      uVar6 = 0x80 - (int)*(short *)((int)&this->fAnimationUploaded + 2);
      *(uint *)ptVar8[3].fFilename = uVar6 * 0x10000 | uVar6 * 0x100 | uVar6;
    } while (Col * 0x10000 >> 0x10 < 0xc);
    handle = (int)*(short *)((int)&this->fAnimationUploaded + 2) << 6;
    Col = handle >> 0x1f;
    uVar6 = 0x80 - ((handle / 6 + Col >> 4) - Col);
    uVar6 = uVar6 * 0x10000 | uVar6 * 0x100 | uVar6;
    *(uint *)&this->tvConfigs[6].fxThin = uVar6;
    *(uint *)&this->tvConfigs[5].fxThin = uVar6;
    tStack184.tint[0] = &DAT_0000bebe;
    puVar2 = gettick();
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (((int)puVar2 / 0xf) % 10 + 0x101,0x411,0xa3,-0xf,
               0x60 - (int)*(short *)((int)&this->fAnimationUploaded + 2),1,&tStack184);
    puVar2 = gettick();
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (((int)puVar2 / 0xf) % 10 + 0x101,0x415,0x193,-0xf,
               0x60 - (int)*(short *)((int)&this->fAnimationUploaded + 2),1,&tStack184);
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (0x100,0x11,0,0,0x60 - (int)*(short *)((int)&this->fAnimationUploaded + 2),1,
               &tStack184);
    puVar2 = gettick();
    ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended
              (((int)puVar2 / 0x15) % 6 + 0xfa,1,0,0,
               0x60 - (int)*(short *)((int)&this->fAnimationUploaded + 2),3,
               (tDrawShapeExtended *)0x0);
    FETextRender_SetABR__Fib(1,&DAT_00000001);
    Col = CalcFadeVal__Fii((int)&DAT_0000bebe,
                           0x60 - (int)*(short *)((int)&this->fAnimationUploaded + 2));
    local_80.x = 0xb5;
    local_80.y = 0x81;
    local_80.w = 0x11c;
    local_80.h = 0x2a;
    str = TextSys_Word__Fi(0x272);
    FETextRender_WordWrapTextRGB__FPcR4RECTi(str,&local_80,Col);
    FETextRender_SetABR__Fib(0,(void *)0x0);
    FeDraw_SetABRMode__Fi(0);
  }
  else {
    if (0 < *(short *)((int)&this->fAnimationUploaded + 2)) {
      *(short *)((int)&this->fAnimationUploaded + 2) =
           *(short *)((int)&this->fAnimationUploaded + 2) + -4;
      goto LAB_80037c84;
    }
  }
  Col = 0;
  if ((this->hVideo & 1U) == 0) {
    Col = 0x50;
  }
  VVar3 = VIDEO_state__Fi(*(int *)((this->tScreen)._vf + 6));
  puVar2 = ticks;
  if (VVar3 == VIDEOSTATE_PLAYING) {
    handle = *(int *)((this->tScreen)._vf + 6);
    *(undefined4 *)&this->fPreviousMovie = 0;
    *(uchar **)&this->bVideoAborted = puVar2;
    Col = VIDEO_updateframexy__Fiii(handle,0x200,Col);
    if (Col != 0) {
      this->hVideo = this->hVideo + 1;
    }
  }
  else {
    bVar1 = false;
    VVar3 = VIDEO_state__Fi(*(int *)((this->tScreen)._vf + 6));
    if (VVar3 != VIDEOSTATE_SPOOLING) {
      bVar1 = (uchar *)0x280 < ticks + -this->fFrame;
    }
    if ((bVar1) && (*(int *)&this->fAnimLocation == 1)) {
      local_80.x = 0x200;
      local_80.w = 0x50;
      local_80.y = 0;
      local_80.h = 0xa0;
      ClearImage((short *)&local_80,0,0,0);
      DrawSync(0);
      do {
        Col = rand();
        sVar7 = (short)(Col % 0x14);
        this->fWarningFade = sVar7;
      } while ((Col % 0x14) * 0x10000 >> 0x10 == (int)this->fPreviousAnim);
      this->fPreviousAnim = sVar7;
      SetState__11tScreenMain16tScreenMainState(this,kScreenMain_DynamicImage);
      sprintf(acStack120,s__szzzVD_02d_dct_8001188c,PTR_ARRAY_8011650c[0],(int)this->fWarningFade);
      VIDEO_spoolfile__FiPc(*(int *)((this->tScreen)._vf + 6),acStack120);
      VIDEO_startplayback__Fi(*(int *)((this->tScreen)._vf + 6));
    }
  }
  if ((*(int *)&this->fAnimLocation == 2) &&
     (VVar3 = VIDEO_state__Fi(*(int *)((this->tScreen)._vf + 6)), VVar3 == VIDEOSTATE_IDLE)) {
    SetState__11tScreenMain16tScreenMainState(this,kScreenMain_StaticImage);
  }
  DrawBackgroundImage__7tScreeniiP18tTexture_ShapeInfoi
            ((tScreen *)this,2,0x1c,(this->tScreen).fPermShapes.fShapes,0);
  DrawDropShadow__11tScreenMain(this);
  DrawVideoLines__11tScreenMain(this);
  puVar2 = ticks + -this->fStartTicks;
  if ((&DAT_000005dc < puVar2) && (*(int *)&this->fAnimLocation != 3)) {
    uVar6 = (this->tScreen).fSwapShapes.async_handle;
    puVar2 = (uchar *)0x0;
    *(undefined4 *)&this->fTransitionDirection = 0;
    if (uVar6 == 0) {
      do {
        Col = rand();
      } while ((Col % 0x19) * 0x10000 >> 0x10 == (int)*(short *)&this->fAnimationUploaded);
      *(short *)&this->fAnimationUploaded = (short)(Col % 0x19);
      sprintf(acStack160,s_yVda_02d_8001189c);
      AsyncLoadSwapShapeFile__7tScreenPc((tScreen *)this,acStack160);
    }
  }
  IsShapeFileLoaded__7tScreenR17tShapeInformation((tScreen *)this,&(this->tScreen).fSwapShapes);
  if ((this->tScreen).fSwapShapes.fFile != (char *)0x0) {
    (this->tScreen).fSwapShapes.fNumShapes = 10;
    UploadSwapShapes__7tScreeni((tScreen *)this,10);
    *(uchar **)&this->fStartTicks = ticks;
    *(undefined4 *)&this->fTransitionDirection = 1;
    *(ushort *)&this->fAnimTicks = *(ushort *)&this->fStartTicks & 3;
  }
  if (puVar2 < (uchar *)0x80) {
    sVar7 = 0x80 - (short)puVar2;
  }
  else {
    sVar7 = (short)(puVar2 + -0x2a0);
    if ((uchar *)0x7f < puVar2 + -0x2a0) goto LAB_8003821c;
  }
  sVar10 = sVar7;
LAB_8003821c:
  if ((puVar2 < (uchar *)0x320) && (*(int *)&this->fTransitionDirection != 0)) {
    tStack184.tint[0] =
         (undefined *)tintColors[(&this->fCurrentSlot)[(int)this->fVideoShapes[1].fLoadCancelled]];
    tStack184.custom_shapes = (this->tScreen).fSwapShapes.fShapes;
    Col = (int)sVar10;
    if ((CreditManager.fCreditsInitialized != (void *)0x0) && (Col = Col + 0x40, 0x80 < Col)) {
      Col = 0x80;
    }
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (((uint)puVar2 / 0xf) % 10,0x611,
               (int)animLocations[(int)*(short *)&this->fAnimTicks].x,
               (int)animLocations[(int)*(short *)&this->fAnimTicks].y,Col,1,&tStack184);
  }
  sVar10 = 0x32;
  sVar7 = 0;
  while (((int)sVar7 < 0x19 && (sVar9 = 0x1a2, sVar10 < 0xd2))) {
    handle = 4;
    Col = 0x40000;
    while (-1 < Col >> 0x10) {
      x = (int)sVar9;
      handle = handle + -1;
      sVar9 = sVar9 + 0xd;
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                ((int)(uint)(byte)numberValues[((int)sVar7 + (int)ticks / 0x14) % 0x19] >>
                 (Col >> 0x10 & 0x1fU) & 1,1,x,(int)sVar10,0x40,3,(tDrawShapeExtended *)0x0);
      Col = handle * 0x10000;
    }
    sVar10 = sVar10 + 8;
    sVar7 = sVar7 + 1;
  }
  handle = (int)(ticks + -this->fFrame) * 0x1000 >> 0x10;
  Col = 0;
  if (-1 < handle) {
    x = 0;
    do {
      if (0xf < x >> 0x10) break;
      uVar6 = (uint)(byte)tvOrder[x >> 0x10];
      pptVar5 = &(this->tScreen).fPermShapes.fShapes + uVar6 * 6;
      if (((*(tTexture_ShapeInfo **)(&this->tvConfigs[0xf].flip_axis + uVar6 * 2) != pptVar5[0xef])
          || (*(short *)&this->tvConfigs[uVar6].uw != *(short *)((int)pptVar5 + 0x3c6))) &&
         ((&this->fState)[uVar6 * 0xc] == kScreenMain_StaticImage)) {
        TurnOffTV__FR9tTVConfig((tTVConfig *)(&this->fState + uVar6 * 0xc));
      }
      Col = Col + 1;
      x = Col * 0x10000;
    } while (Col * 0x10000 >> 0x10 <= handle);
  }
  handle = 0;
  Col = 0;
  do {
    Col = Col >> 0x10;
    ptVar8 = (tShapeInformation *)((int)&(this->tScreen).fPermShapes + Col * 0x30);
    if (ptVar8[3].fFile == (char *)0x0) {
      pptVar5 = &(this->tScreen).fPermShapes.fShapes + Col * 6;
      ptVar8[3].fFilename[0xc] = *(char *)((int)pptVar5 + 0x3c2);
      ptVar8[3].fFilename[0xd] = *(char *)((int)pptVar5 + 0x3c3);
      ptVar8[3].fFilename[0xe] = *(char *)(pptVar5 + 0xf1);
      ptVar8[3].fFilename[0xf] = *(char *)((int)pptVar5 + 0x3c5);
      *(undefined2 *)&ptVar8[4].fShapes = *(undefined2 *)(pptVar5 + 0xf2);
      *(undefined2 *)((int)&ptVar8[3].fLoadCancelled + 2) = *(undefined2 *)((int)pptVar5 + 0x3c6);
      *(undefined2 *)&ptVar8[3].async_handle = *(undefined2 *)(pptVar5 + 0xf0);
      *(tTexture_ShapeInfo **)ptVar8[3].fFilename = pptVar5[0xf3];
      *(tTexture_ShapeInfo **)(&this->tvConfigs[0xf].flip_axis + Col * 2) = pptVar5[0xef];
      TurnOnTV__FR9tTVConfig((tTVConfig *)(&this->fState + Col * 0xc));
      *(undefined2 *)((int)&ptVar8[3].fDestFile + 2) = *(undefined2 *)(pptVar5 + 0xf4);
      this->fCurrentBG[1] = this->fCurrentBG[1] + -1;
    }
    handle = handle + 1;
    Col = handle * 0x10000;
  } while (handle * 0x10000 >> 0x10 < 0x10);
  handle = 0;
  Col = 0;
  do {
    DrawTV__FR9tTVConfig((tTVConfig *)(&this->fState + (Col >> 0x10) * 0xc));
    handle = handle + 1;
    Col = handle * 0x10000;
  } while (handle * 0x10000 >> 0x10 < 0x10);
  Col = 0xf3;
  do {
    PSXDrawSquare__Fiiiii((int)&DAT_00404040,(int)(short)Col,0x2a,2,0xa9);
    Col = Col + 0x50;
  } while (Col * 0x10000 >> 0x10 < 0x1e3);
  Col = 0x54;
  do {
    PSXDrawSquare__Fiiiii((int)&DAT_00303030,0xa3,(int)(short)Col,0x141,1);
    Col = Col + 0x2a;
  } while (Col * 0x10000 >> 0x10 < 0xd2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__11tScreenMainRsT1PPcT3(struct tScreenMain *this /*$a0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$a3*/, char **swapFileName /*stack 16*/)
 // line 747, offset 0x80038698
	/* begin block 1 */
		// Start line: 748
		// Start offset: 0x80038698
	/* end block 1 */
	// End offset: 0x80038698
	// End Line: 748

	/* begin block 2 */
		// Start line: 1669
	/* end block 2 */
	// End Line: 1670

	/* begin block 3 */
		// Start line: 1679
	/* end block 3 */
	// End Line: 1680

	/* begin block 4 */
		// Start line: 1679
	/* end block 4 */
	// End Line: 1680

void GetShapeInfo__11tScreenMainRsT1PPcT3
               (tScreenMain *this,short *numPermShapes,short *numSwapShapes,char **permFileName,
               char **swapFileName)

{
  *numPermShapes = 0x10b;
  *permFileName = gPermBuffer;
  *numSwapShapes = 10;
  *swapFileName = gNameBuffer;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PreLoad__11tScreenMain(struct tScreenMain *this /*$s3*/)
 // line 758, offset 0x800386c8
	/* begin block 1 */
		// Start line: 759
		// Start offset: 0x800386C8
		// Variables:
	// 		char buffer[32]; // stack offset -56
	// 		short i; // $s2
	/* end block 1 */
	// End offset: 0x800388B4
	// End Line: 785

	/* begin block 2 */
		// Start line: 1697
	/* end block 2 */
	// End Line: 1698

	/* begin block 3 */
		// Start line: 1701
	/* end block 3 */
	// End Line: 1702

	/* begin block 4 */
		// Start line: 1701
	/* end block 4 */
	// End Line: 1702

void PreLoad__11tScreenMain(tScreenMain *this)

{
  int iVar1;
  int iVar2;
  char acStack56 [32];
  
  sprintf(gPermBuffer,s_zMain_d_800118a8,(uint)(byte)frontEnd.language);
  iVar2 = 0;
  iVar1 = rand();
  *(short *)&this->fAnimationUploaded = (short)(iVar1 % 0x19);
  sprintf(gNameBuffer,s_yVda_02d_8001189c,(iVar1 % 0x19) * 0x10000 >> 0x10);
  PreLoad__7tScreen((tScreen *)this);
  iVar1 = 0;
  do {
    (&this->fMovieTicks)[(iVar1 >> 0x10) * 10] = 0;
    InitializeShapes__7tScreenR17tShapeInformationUi
              ((tScreen *)this,(tShapeInformation *)(&this->fMovieTicks + (iVar1 >> 0x10) * 10),0x10
              );
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 0x10000;
  } while (iVar2 * 0x10000 >> 0x10 < 2);
  iVar1 = rand();
  this->fCurrentSlot = iVar1 % 0x1c;
  iVar1 = rand();
  iVar2 = 0;
  this->fCurrentBG[0] = (this->fCurrentSlot + iVar1 % 0x1b + 1) % 0x1c;
  do {
    sprintf(acStack56,s_zyVid_02d_80011880,(&this->fCurrentSlot)[(int)(short)iVar2]);
    AsyncLoadShapeFile__7tScreenPcR17tShapeInformation
              ((tScreen *)this,acStack56,
               (tShapeInformation *)(&this->fMovieTicks + (int)(short)iVar2 * 10));
    iVar2 = iVar2 + 1;
  } while (iVar2 * 0x10000 >> 0x10 < 2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__11tScreenMain(struct tScreenMain *this /*$s1*/)
 // line 788, offset 0x800388d4
	/* begin block 1 */
		// Start line: 789
		// Start offset: 0x800388D4
		// Variables:
	// 		short i; // $s0
	// 		void * shapesLoaded; // $s0

		/* begin block 1.1 */
			// Start line: 809
			// Start offset: 0x80038988

			/* begin block 1.1.1 */
				// Start line: 809
				// Start offset: 0x80038988
			/* end block 1.1.1 */
			// End offset: 0x80038988
			// End Line: 809
		/* end block 1.1 */
		// End offset: 0x80038988
		// End Line: 809

		/* begin block 1.2 */
			// Start line: 809
			// Start offset: 0x80038988

			/* begin block 1.2.1 */
				// Start line: 809
				// Start offset: 0x80038988
			/* end block 1.2.1 */
			// End offset: 0x80038988
			// End Line: 809
		/* end block 1.2 */
		// End offset: 0x80038988
		// End Line: 809
	/* end block 1 */
	// End offset: 0x80038ABC
	// End Line: 838

	/* begin block 2 */
		// Start line: 1764
	/* end block 2 */
	// End Line: 1765

	/* begin block 3 */
		// Start line: 1768
	/* end block 3 */
	// End Line: 1769

	/* begin block 4 */
		// Start line: 1768
	/* end block 4 */
	// End Line: 1769

void Initialize__11tScreenMain(tScreenMain *this)

{
  bool bVar1;
  uchar *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  Initialize__7tScreen((tScreen *)this);
  do {
    FeAudio_systemtask__Fi(0);
    pvVar3 = IsShapeFileLoaded__7tScreenR17tShapeInformation
                       ((tScreen *)this,(tShapeInformation *)&this->fMovieTicks);
    if (this->fVideoShapes[0].fShapes != (tTexture_ShapeInfo *)0x0) {
      UploadShapes__7tScreenR17tShapeInformationssss
                ((tScreen *)this,(tShapeInformation *)&this->fMovieTicks,0,0,0x10,0);
    }
    bVar1 = false;
    if (pvVar3 != (void *)0x0) {
      pvVar3 = IsShapeFileLoaded__7tScreenR17tShapeInformation
                         ((tScreen *)this,(tShapeInformation *)&this->fVideoShapes[0].fLoadCancelled
                         );
      bVar1 = pvVar3 != (void *)0x0;
    }
    if (this->fVideoShapes[1].fShapes != (tTexture_ShapeInfo *)0x0) {
      UploadShapes__7tScreenR17tShapeInformationssss
                ((tScreen *)this,(tShapeInformation *)&this->fVideoShapes[0].fLoadCancelled,0xa6,0,
                 0x10,0);
    }
  } while (!bVar1);
  this->fPreviousAnim = -1;
  this->hVideo = 0;
  iVar4 = VIDEO_create__Fiiiii(0x50,0x50,0xf0000,0x20000,0x10);
  iVar5 = 0;
  *(int *)((this->tScreen)._vf + 6) = iVar4;
  puVar2 = ticks;
  *(undefined4 *)&this->fPreviousMovie = 0;
  *(undefined *)&this->fTVsInitialized = 1;
  *(undefined4 *)&this->fTransitionDirection = 0;
  *(undefined2 *)((int)&this->fAnimationUploaded + 2) = 0;
  this->fCurrentBG[1] = 0;
  this->fVideoShapes[1].fLoadCancelled = (void *)0x0;
  *(uchar **)&this->fFrame = puVar2;
  *(uchar **)&this->fStartTicks = puVar2 + -800;
  iVar4 = 0;
  do {
    InitTV__FR9tTVConfigP18tTexture_ShapeInfos
              ((tTVConfig *)(&this->fState + (iVar4 >> 0x10) * 0xc),
               (tTexture_ShapeInfo *)
               (&this->fMovieTicks)[(int)this->fVideoShapes[1].fLoadCancelled * 10],
               (short)((uint)iVar4 >> 0x10));
    iVar5 = iVar5 + 1;
    iVar4 = iVar5 * 0x10000;
  } while (iVar5 * 0x10000 >> 0x10 < 0x10);
  *(undefined4 *)&this->fAnimLocation = 0;
  SetState__11tScreenMain16tScreenMainState(this,kScreenMain_StaticImage);
  iVar5 = 0;
  iVar4 = 0;
  do {
    *(undefined4 *)((int)&this->tvConfigs[0xf].flip_axis + (iVar4 >> 0xe)) = 0;
    iVar5 = iVar5 + 1;
    iVar4 = iVar5 * 0x10000;
  } while (iVar5 * 0x10000 >> 0x10 < 0x10);
  iVar4 = 0;
  do {
    iVar5 = rand();
    numberValues[(int)(short)iVar4] = (char)iVar5;
    iVar4 = iVar4 + 1;
  } while (iVar4 * 0x10000 >> 0x10 < 0x19);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__11tScreenMain(struct tScreenMain *this /*$s2*/)
 // line 841, offset 0x80038ad8
	/* begin block 1 */
		// Start line: 842
		// Start offset: 0x80038AD8
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x80038B24
	// End Line: 852

	/* begin block 2 */
		// Start line: 1903
	/* end block 2 */
	// End Line: 1904

	/* begin block 3 */
		// Start line: 1907
	/* end block 3 */
	// End Line: 1908

	/* begin block 4 */
		// Start line: 1907
	/* end block 4 */
	// End Line: 1908

void Cleanup__11tScreenMain(tScreenMain *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  VIDEO_destroy__Fi(*(int *)((this->tScreen)._vf + 6));
  iVar1 = 0x558;
  purgememadr(*(int *)((this->tScreen)._vf + 6));
  do {
    FreeShapes__7tScreenR17tShapeInformation
              ((tScreen *)this,
               (tShapeInformation *)((int)&(this->tScreen).fPermShapes.fShapes + iVar1));
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x28;
  } while (iVar2 < 2);
  Cleanup__7tScreen((tScreen *)this);
  return;
}





