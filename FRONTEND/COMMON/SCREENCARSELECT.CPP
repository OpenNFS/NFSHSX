#include "THISDUST.H"
#include "SCREENCARSELECT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ TransformVector__FRA4_iRA4_A4_iT0(int (*vect)[4] /*$s4*/, int (*transform)[4][4] /*$s5*/, int (*result)[4] /*$s6*/)
 // line 51, offset 0x8003a8f0
	/* begin block 1 */
		// Start line: 52
		// Start offset: 0x8003A8F0
		// Variables:
	// 		short I; // $s3
	// 		short J; // $s0
	/* end block 1 */
	// End offset: 0x8003A9AC
	// End Line: 60

	/* begin block 2 */
		// Start line: 102
	/* end block 2 */
	// End Line: 103

	/* begin block 3 */
		// Start line: 102
	/* end block 3 */
	// End Line: 103

void TransformVector__FRA4_iRA4_A4_iT0(int (*vect) [4],int (*transform) [4] [4],int (*result) [4])

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    iVar1 = (iVar5 << 0x10) >> 0xe;
    piVar3 = (int *)((int)*result + iVar1);
    *piVar3 = 0;
    iVar4 = 0;
    do {
      uVar2 = fixedmult((*vect)[(int)(short)iVar4],
                        *(int *)((int)*transform + iVar1 + (int)(short)iVar4 * 0x10));
      iVar4 = iVar4 + 1;
      *piVar3 = *piVar3 + uVar2;
    } while (iVar4 * 0x10000 >> 0x10 < 4);
    iVar5 = iVar5 + 1;
  } while (iVar5 * 0x10000 >> 0x10 < 4);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCar__FR8tCarInfossffcbUl7tPlayer(struct tCarInfo *carInfo /*$t0*/, short x /*$s2*/, short y /*$s4*/, float camerax /*$s5*/, float cameray /*stack 16*/, int brightness /*stack 20*/, void * reflection /*stack 24*/, unsigned long rotate /*stack 28*/, enum tPlayer player /*stack 32*/)
 // line 180, offset 0x8003a9d4
	/* begin block 1 */
		// Start line: 181
		// Start offset: 0x8003A9D4
		// Variables:
	// 		int the_simcarcolor; // $a0
	// 		unsigned long ticks; // $v1

		/* begin block 1.1 */
			// Start line: 181
			// Start offset: 0x8003A9D4

			/* begin block 1.1.1 */
				// Start line: 181
				// Start offset: 0x8003A9D4
			/* end block 1.1.1 */
			// End offset: 0x8003A9D4
			// End Line: 181
		/* end block 1.1 */
		// End offset: 0x8003A9D4
		// End Line: 181
	/* end block 1 */
	// End offset: 0x8003AB5C
	// End Line: 213

	/* begin block 2 */
		// Start line: 242
	/* end block 2 */
	// End Line: 243

	/* begin block 3 */
		// Start line: 363
	/* end block 3 */
	// End Line: 364

	/* begin block 4 */
		// Start line: 363
	/* end block 4 */
	// End Line: 364

void DrawCar__FR8tCarInfossffcbUl7tPlayer
               (tCarInfo *carInfo,short x,short y,float camerax,float cameray,int brightness,
               void *reflection,ulong rotate,tPlayer player)

{
  byte bVar1;
  uchar *puVar2;
  Car_tObj **ppCVar3;
  int camRot;
  int player_00;
  
  puVar2 = ticks;
  if ((int)ticks < 0) {
    puVar2 = ticks + 0x7ff;
  }
  DrawC_gMenuLights = 0;
  DrawC_gMenuLightsDirection = ZEXT14((uchar *)0x3ff < ticks + ((int)puVar2 >> 0xb) * -0x800);
  if (-1 < carInfo->fCarID) {
    ppCVar3 = &gCarObj2 + player_00;
    bVar1 = carInfo->fColor;
    (*ppCVar3)->carInfo->carType = (uint)carInfo->fSimNumber;
    (*ppCVar3)->carInfo->Country = (uint)carInfo->fCountry;
    (&gMenuRotate)[player_00] = (&gMenuRotate)[player_00] + 3;
    (*ppCVar3)->carInfo->EngineMods = (uint)(carInfo->fUpgrades >> 2) & 1;
    (*ppCVar3)->carInfo->WeightTransfer = (uint)(carInfo->fUpgrades >> 1) & 1;
    (*ppCVar3)->carInfo->GroundEffects = (uint)carInfo->fUpgrades & 1;
    DrawC_MenuColorData__FiP8Car_tObji((uint)bVar1,*ppCVar3,player_00);
    Draw_MenuRenderingView__FP8Car_tObjP13DRender_tViewiiiUliffii
              (*ppCVar3,&gCView,(int)x,(int)y,player_00,0,camRot,camerax,cameray,brightness,
               (int)reflection);
  }
  return;
}



// decompiled code
// original method signature: 
// struct tScreenCarSelect * /*$ra*/ __16tScreenCarSelect(struct tScreenCarSelect *this /*$s0*/)
 // line 294, offset 0x8003ab80
	/* begin block 1 */
		// Start line: 295
		// Start offset: 0x8003AB80
		// Variables:
	// 		struct tOverlay *overlay; // $v1
	// 		short i; // $a0
	/* end block 1 */
	// End offset: 0x8003AC7C
	// End Line: 317

	/* begin block 2 */
		// Start line: 511
	/* end block 2 */
	// End Line: 512

	/* begin block 3 */
		// Start line: 593
	/* end block 3 */
	// End Line: 594

	/* begin block 4 */
		// Start line: 593
	/* end block 4 */
	// End Line: 594

tScreenCarSelect * __16tScreenCarSelect(tScreenCarSelect *this)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  __7tScreen((tScreen *)this);
  iVar4 = 0;
  *(undefined4 *)((this->tScreen)._vf + 2) = 0x80011d08;
  *(undefined2 *)((int)this->fCurrentOverlays + 0xe) = 0;
  this->fState = -1;
  this->fPreviousCar = 0;
  do {
    sVar1 = (short)iVar4;
    iVar2 = (int)sVar1;
    puVar3 = (undefined4 *)((this->tScreen)._vf + iVar2 * 0x18 + 6);
    uVar5 = *(undefined4 *)&(&gOverlayPositions)[iVar2 * 2].w;
    *puVar3 = *(undefined4 *)(&gOverlayPositions + iVar2 * 2);
    puVar3[1] = uVar5;
    uVar5 = *(undefined4 *)&(&RECT_80051fcc)[iVar2 * 2].w;
    puVar3[2] = *(undefined4 *)(&RECT_80051fcc + iVar2 * 2);
    puVar3[3] = uVar5;
    iVar4 = iVar4 + 1;
    *(short *)((int)puVar3 + 0x16) = sVar1;
    *(undefined2 *)(puVar3 + 5) = 0;
    *(undefined2 *)(puVar3 + 4) = 0;
    *(undefined2 *)((int)puVar3 + 0x12) = 6;
  } while (iVar4 * 0x10000 >> 0x10 < 7);
  iVar2 = 0;
  iVar4 = 0;
  do {
    *(undefined4 *)((int)&this->fOverlays[6].direction + (iVar4 >> 0xe)) = 0;
    iVar2 = iVar2 + 1;
    iVar4 = iVar2 * 0x10000;
  } while (iVar2 * 0x10000 >> 0x10 < 4);
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._16tScreenCarSelect(struct tScreenCarSelect *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 320, offset 0x8003ac90
	/* begin block 1 */
		// Start line: 321
		// Start offset: 0x8003AC90
	/* end block 1 */
	// End offset: 0x8003AC90
	// End Line: 321

	/* begin block 2 */
		// Start line: 656
	/* end block 2 */
	// End Line: 657

	/* begin block 3 */
		// Start line: 660
	/* end block 3 */
	// End Line: 661

	/* begin block 4 */
		// Start line: 660
	/* end block 4 */
	// End Line: 661

void ___16tScreenCarSelect(tScreenCarSelect *this,int __in_chrg)

{
  *(undefined4 *)((this->tScreen)._vf + 2) = 0x80011d08;
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__16tScreenCarSelect(struct tScreenCarSelect *this /*$s0*/)
 // line 324, offset 0x8003acb8
	/* begin block 1 */
		// Start line: 325
		// Start offset: 0x8003ACB8
	/* end block 1 */
	// End offset: 0x8003ACB8
	// End Line: 325

	/* begin block 2 */
		// Start line: 664
	/* end block 2 */
	// End Line: 665

	/* begin block 3 */
		// Start line: 668
	/* end block 3 */
	// End Line: 669

	/* begin block 4 */
		// Start line: 668
	/* end block 4 */
	// End Line: 669

void Cleanup__16tScreenCarSelect(tScreenCarSelect *this)

{
  int iVar1;
  
  CleanupSpinningCarsMenu__Fv();
  Cleanup__7tScreen((tScreen *)this);
  iVar1 = *(int *)((this->tScreen)._vf + 2);
  (**(code **)(iVar1 + 0x7c))
            ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar1 + 0x78));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawOverlay__16tScreenCarSelectP8tOverlay(struct tScreenCarSelect *this /*$s2*/, struct tOverlay *overlay /*$s3*/)
 // line 334, offset 0x8003ad00
	/* begin block 1 */
		// Start line: 335
		// Start offset: 0x8003AD00
		// Variables:
	// 		struct RECT pos; // stack offset -288
	// 		struct RECT temp; // stack offset -280
	// 		struct tCarInfo carInfo; // stack offset -272
	// 		short fade; // $a0
	// 		short i; // $s0
	// 		short j; // $a0
	// 		struct tDrawShapeExtended drawFlags; // stack offset -64
	// 		short text; // $s0
	// 		long value; // $a3
	// 		void * validCar; // $s1
	// 		int moneyColor; // $s1
	// 		short upgradeTranslate[3]; // stack offset -40
	// 		short upgradeIcons[3]; // stack offset -32

		/* begin block 1.1 */
			// Start line: 335
			// Start offset: 0x8003AD00

			/* begin block 1.1.1 */
				// Start line: 348
				// Start offset: 0x8003AD64

				/* begin block 1.1.1.1 */
					// Start line: 373
					// Start offset: 0x8003AE9C

					/* begin block 1.1.1.1.1 */
						// Start line: 377
						// Start offset: 0x8003AED8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 410
							// Start offset: 0x8003AFA0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 411
								// Start offset: 0x8003AFA8

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 416
									// Start offset: 0x8003AFD0

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 416
										// Start offset: 0x8003AFD0
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8003AFD0
									// End Line: 416
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8003AFD0
								// End Line: 416
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8003B008
							// End Line: 416
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003B02C
						// End Line: 421

						/* begin block 1.1.1.1.1.2 */
							// Start line: 424
							// Start offset: 0x8003B02C

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 424
								// Start offset: 0x8003B02C
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x8003B02C
							// End Line: 424
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x8003B02C
						// End Line: 424

						/* begin block 1.1.1.1.1.3 */
							// Start line: 436
							// Start offset: 0x8003B144

							/* begin block 1.1.1.1.1.3.1 */
								// Start line: 436
								// Start offset: 0x8003B148

								/* begin block 1.1.1.1.1.3.1.1 */
									// Start line: 439
									// Start offset: 0x8003B180

									/* begin block 1.1.1.1.1.3.1.1.1 */
										// Start line: 439
										// Start offset: 0x8003B180
									/* end block 1.1.1.1.1.3.1.1.1 */
									// End offset: 0x8003B180
									// End Line: 439
								/* end block 1.1.1.1.1.3.1.1 */
								// End offset: 0x8003B180
								// End Line: 439
							/* end block 1.1.1.1.1.3.1 */
							// End offset: 0x8003B180
							// End Line: 439
						/* end block 1.1.1.1.1.3 */
						// End offset: 0x8003B220
						// End Line: 444

						/* begin block 1.1.1.1.1.4 */
							// Start line: 448
							// Start offset: 0x8003B220

							/* begin block 1.1.1.1.1.4.1 */
								// Start line: 449
								// Start offset: 0x8003B230
								// Variables:
							// 		int descrItem; // $a0

								/* begin block 1.1.1.1.1.4.1.1 */
									// Start line: 450
									// Start offset: 0x8003B230

									/* begin block 1.1.1.1.1.4.1.1.1 */
										// Start line: 450
										// Start offset: 0x8003B230

										/* begin block 1.1.1.1.1.4.1.1.1.1 */
											// Start line: 453
											// Start offset: 0x8003B268

											/* begin block 1.1.1.1.1.4.1.1.1.1.1 */
												// Start line: 453
												// Start offset: 0x8003B268
											/* end block 1.1.1.1.1.4.1.1.1.1.1 */
											// End offset: 0x8003B268
											// End Line: 453
										/* end block 1.1.1.1.1.4.1.1.1.1 */
										// End offset: 0x8003B268
										// End Line: 453
									/* end block 1.1.1.1.1.4.1.1.1 */
									// End offset: 0x8003B268
									// End Line: 453
								/* end block 1.1.1.1.1.4.1.1 */
								// End offset: 0x8003B308
								// End Line: 458

								/* begin block 1.1.1.1.1.4.1.2 */
									// Start line: 459
									// Start offset: 0x8003B308

									/* begin block 1.1.1.1.1.4.1.2.1 */
										// Start line: 459
										// Start offset: 0x8003B308
									/* end block 1.1.1.1.1.4.1.2.1 */
									// End offset: 0x8003B308
									// End Line: 459
								/* end block 1.1.1.1.1.4.1.2 */
								// End offset: 0x8003B308
								// End Line: 459

								/* begin block 1.1.1.1.1.4.1.3 */
									// Start line: 459
									// Start offset: 0x8003B308

									/* begin block 1.1.1.1.1.4.1.3.1 */
										// Start line: 459
										// Start offset: 0x8003B308
									/* end block 1.1.1.1.1.4.1.3.1 */
									// End offset: 0x8003B308
									// End Line: 459
								/* end block 1.1.1.1.1.4.1.3 */
								// End offset: 0x8003B308
								// End Line: 459

								/* begin block 1.1.1.1.1.4.1.4 */
									// Start line: 468
									// Start offset: 0x8003B3C4

									/* begin block 1.1.1.1.1.4.1.4.1 */
										// Start line: 468
										// Start offset: 0x8003B3C4

										/* begin block 1.1.1.1.1.4.1.4.1.1 */
											// Start line: 468
											// Start offset: 0x8003B3C4
										/* end block 1.1.1.1.1.4.1.4.1.1 */
										// End offset: 0x8003B3C4
										// End Line: 468
									/* end block 1.1.1.1.1.4.1.4.1 */
									// End offset: 0x8003B3C4
									// End Line: 468
								/* end block 1.1.1.1.1.4.1.4 */
								// End offset: 0x8003B428
								// End Line: 474
							/* end block 1.1.1.1.1.4.1 */
							// End offset: 0x8003B474
							// End Line: 476
						/* end block 1.1.1.1.1.4 */
						// End offset: 0x8003B474
						// End Line: 476
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003B568
					// End Line: 490
				/* end block 1.1.1.1 */
				// End offset: 0x8003B568
				// End Line: 490
			/* end block 1.1.1 */
			// End offset: 0x8003B580
			// End Line: 495
		/* end block 1.1 */
		// End offset: 0x8003B580
		// End Line: 495
	/* end block 1 */
	// End offset: 0x8003B580
	// End Line: 495

	/* begin block 2 */
		// Start line: 681
	/* end block 2 */
	// End Line: 682

	/* begin block 3 */
		// Start line: 688
	/* end block 3 */
	// End Line: 689

	/* begin block 4 */
		// Start line: 688
	/* end block 4 */
	// End Line: 689

void DrawOverlay__16tScreenCarSelectP8tOverlay(tScreenCarSelect *this,tOverlay *overlay)

{
  short index;
  int iVar1;
  int fade;
  undefined **ppuVar2;
  int iVar3;
  undefined *colfore;
  int iVar4;
  RECT local_120;
  RECT local_118;
  tCarInfo local_110;
  tDrawShapeExtended tStack64;
  undefined *local_28;
  undefined2 local_24;
  undefined *local_20;
  undefined2 local_1c;
  
  local_28 = PTR_DAT_80011aa4;
  local_24 = DAT_80011aa8;
  local_20 = PTR_DAT_80011aac;
  local_1c = DAT_80011ab0;
  if (overlay == (tOverlay *)0x0) {
    return;
  }
  iVar1 = *(int *)((this->tScreen)._vf + 2);
  iVar1 = (**(code **)(iVar1 + 0x6c))
                    ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar1 + 0x68),
                     &local_110);
  if (overlay->direction != 0) {
    index = overlay->transition + overlay->delta * overlay->direction;
    overlay->transition = index;
    if (index < 1) {
      overlay->transition = 0;
    }
    else {
      if (index < 0x80) goto LAB_8003add8;
      overlay->transition = 0x80;
    }
    overlay->direction = 0;
  }
LAB_8003add8:
  iVar4 = (int)overlay->transition * ((int)overlay->location[1].x - (int)overlay->location[0].x);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x7f;
  }
  local_120.x = overlay->location[0].x + (short)(iVar4 >> 7);
  iVar4 = (int)overlay->transition * ((int)overlay->location[1].y - (int)overlay->location[0].y);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x7f;
  }
  local_120.y = overlay->location[0].y + (short)(iVar4 >> 7);
  iVar4 = (int)overlay->transition * ((int)overlay->location[1].w - (int)overlay->location[0].w);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x7f;
  }
  local_120.w = overlay->location[0].w + (short)(iVar4 >> 7);
  iVar4 = (int)overlay->transition * ((int)overlay->location[1].h - (int)overlay->location[0].h);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x7f;
  }
  local_120.h = overlay->location[0].h + (short)(iVar4 >> 7);
  switch(overlay->ID) {
  case 0:
    if (iVar1 != 0) {
      DrawShape_NFS4RoundRectangle__FiR4RECTs((int)local_110.fCarID + 0x121,&local_120,0);
    }
    break;
  case 1:
  case 2:
  case 3:
    local_118.h = 0x17;
    local_118.x = local_120.x + 0xf;
    local_118.y = (local_120.y + local_120.h) - 0x1e;
    local_118.w = local_120.w - 0x1e;
    if (iVar1 != 0) {
      FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
                ((short)((uint)(((int)local_110.fCarID + 0x121) * 0x10000) >> 0x10),
                 local_118.x + local_118.w + -0xc,local_120.y + 2,1,textState_Selected,
                 textType_FramedInfo);
    }
    if (overlay->ID == 2) {
      index = 0x8d;
    }
    else {
      index = 0x8c;
      if (overlay->ID == 3) {
        index = 0x8e;
      }
    }
    if (iVar1 == 0) {
      colfore = &DAT_00232323;
      local_110.fPrices[0] = 0;
    }
    else {
      colfore = &DAT_0000bebe;
      if (overlay->ID != 2) {
        if (overlay->ID == 3) {
          local_110.fPrices[0] =
               local_110.fPrices
               [(int)*(short *)((int)&local_28 +
                               (int)*(short *)&(menuDefs->menuGoToCarDealer).tMenu.fNeverAnyEnabled
                               * 2)];
        }
        else {
          local_110.fPrices[0] =
               CalcUsedPrice__11tCarManagers(&carManager,(ushort)(byte)frontEnd.sellerCar);
        }
      }
    }
    DrawMoney__Fiiilii((int)(short)local_118.x + (int)(short)local_118.w + -0xc,
                       (int)(short)local_118.y + 3,6,local_110.fPrices[0],(int)colfore,
                       (int)&DAT_00232323);
    FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
              (index,(short)(((uint)local_118.x + ((int)((uint)local_118.w << 0x10) >> 0x11)) *
                             0x10000 >> 0x10),(short)(((uint)local_118.y + 3) * 0x10000 >> 0x10),1,
               textState_Selected,textType_FramedInfo);
    DrawMoney__Fiiilii((int)(short)local_118.x + (int)(short)local_118.w + -0xc,
                       (int)(short)local_118.y + 0xd,9,tournamentManager.fMoney,(int)&DAT_0000bebe,
                       (int)&DAT_00232323);
    FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
              (0x7b,(short)(((uint)local_118.x + ((int)((uint)local_118.w << 0x10) >> 0x11)) *
                            0x10000 >> 0x10),(short)(((uint)local_118.y + 0xd) * 0x10000 >> 0x10),1,
               textState_Selected,textType_FramedInfo);
    DrawShape_NFS4Rectangle__FR4RECT(&local_118);
    PSXDrawSquare__Fiiiii
              (0,(int)(short)local_120.x,(int)(short)local_120.y,(int)(short)local_120.w,10);
    break;
  case 4:
    iVar4 = 0;
    iVar1 = 0;
    while( true ) {
      iVar1 = iVar1 >> 0x10;
      if (2 < iVar1) break;
      ppuVar2 = (undefined **)((int)&local_20 + iVar1 * 2);
      fade = 0;
      if (((uint)local_110.fUpgrades & (int)*(short *)ppuVar2) == 0) {
        fade = 0x60;
      }
      iVar4 = iVar4 + 1;
      tStack64.tint[0] = &DAT_0000bebe;
      iVar3 = (int)ticks >> 4;
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (iVar1 * 10 +
                 iVar3 + ((iVar3 / 10 + (iVar3 >> 0x1f)) - ((int)ticks >> 0x1f)) * -10 + 0x62,
                 (uint)(((uint)local_110.fUpgrades & (int)*(short *)ppuVar2) == 0) | 0x410,
                 (int)(short)local_120.x + iVar1 * 0x28 + 0x21,(int)(short)local_120.y + 6,fade,1,
                 &tStack64);
      iVar1 = iVar4 * 0x10000;
    }
    break;
  case 5:
    iVar1 = 0;
    if (overlay->transition == 0x80) {
      iVar4 = 0;
      while( true ) {
        iVar4 = iVar4 >> 0x10;
        if (2 < iVar4) break;
        ppuVar2 = (undefined **)((int)&local_20 + iVar4 * 2);
        fade = 0;
        if (((uint)local_110.fUpgrades & (int)*(short *)ppuVar2) == 0) {
          fade = 0x60;
        }
        iVar1 = iVar1 + 1;
        tStack64.tint[0] = &DAT_0000bebe;
        iVar3 = (int)ticks >> 4;
        DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                  (iVar4 * 10 +
                   iVar3 + ((iVar3 / 10 + (iVar3 >> 0x1f)) - ((int)ticks >> 0x1f)) * -10 + 0x62,
                   (uint)(((uint)local_110.fUpgrades & (int)*(short *)ppuVar2) == 0) | 0x410,
                   (int)(short)local_120.x + iVar4 * 0x28 + 0x85,(int)(short)local_120.y + 6,fade,1,
                   &tStack64);
        iVar4 = iVar1 * 0x10000;
      }
      local_118.y = local_120.y + 0x23;
      local_118.x = local_120.x + 0x1e;
      local_118.w = local_120.w - 0x3c;
      local_118.h = local_120.h - 0x4b;
      FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
                ((short)((uint)(((int)(menuDefs->menuGoToCarDealer).tMenu.fNeverAnyEnabled + 0x96) *
                               0x10000) >> 0x10),
                 (short)(((uint)local_120.x + ((int)((uint)local_120.w << 0x10) >> 0x11)) * 0x10000
                        >> 0x10),local_120.y + 0x18,2,textState_Hilighted,textType_FramedInfo);
      iVar1 = (int)*(short *)&(menuDefs->menuGoToCarDealer).tMenu.fNeverAnyEnabled + 0xaf;
      index = (short)iVar1;
      if ((iVar1 == 0xb0) &&
         ((local_110.fCarID == '\f' || (index = 0xb0, local_110.fCarID == '\n')))) {
        index = 0x41;
      }
      FETextRender_WordWrap__FsR4RECT14tMenuTextState13tMenuTextType
                (index,&local_118,textState_Hilighted,textType_PopUpText);
      index = 0xa0;
      if ((((uint)local_110.fUpgrades &
           (int)*(short *)((int)&local_20 +
                          (int)*(short *)&(menuDefs->menuGoToCarDealer).tMenu.fNeverAnyEnabled * 2))
           == 0) && (index = 0x9e, gPadinfo.buf[0].ID == '#')) {
        index = 0x9f;
      }
      FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
                (index,(short)(((uint)local_120.x + (uint)local_120.w + -0xf) * 0x10000 >> 0x10),
                 (short)(((uint)local_120.y + (uint)local_120.h + -0x14) * 0x10000 >> 0x10),1,
                 textState_Hilighted,textType_FramedInfo);
    }
    if ((0x42 < (short)local_120.w) && (0x32 < (short)local_120.h)) {
      local_118.w = local_120.w - 0x1e;
      local_118.h = local_120.h - 0x19;
      local_118.x = local_120.x + 0xf;
      local_118.y = local_120.y + 0x14;
      DrawShape_NFS4Rectangle__FR4RECT(&local_118);
    }
    break;
  case 6:
    if (iVar1 == 0) {
      iVar1 = 0;
      do {
        iVar4 = 0;
        do {
          index = (short)iVar4;
          iVar4 = iVar4 + 1;
          local_110.fStats[(int)(short)iVar1 + (int)index * 5] = '\0';
        } while (iVar4 * 0x10000 >> 0x10 < 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 * 0x10000 >> 0x10 < 5);
    }
    DrawSliders__16tScreenCarSelectR8tCarInfoss
              (this,&local_110,(short)(((uint)local_120.x + 0xd) * 0x10000 >> 0x10),
               (short)(((uint)local_120.y + 4) * 0x10000 >> 0x10));
  }
  if (overlay->ID != 0) {
    DrawShape_NFS4TransRectangle__FR4RECTs(&local_120,1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetState__16tScreenCarSelecti(struct tScreenCarSelect *this /*$s0*/, int state /*$s1*/)
 // line 501, offset 0x8003b59c
	/* begin block 1 */
		// Start line: 502
		// Start offset: 0x8003B59C
		// Variables:
	// 		short i; // $a2
	// 		short fPreviousState; // $s2

		/* begin block 1.1 */
			// Start line: 537
			// Start offset: 0x8003B6A4

			/* begin block 1.1.1 */
				// Start line: 538
				// Start offset: 0x8003B6D8

				/* begin block 1.1.1.1 */
					// Start line: 545
					// Start offset: 0x8003B6D8

					/* begin block 1.1.1.1.1 */
						// Start line: 545
						// Start offset: 0x8003B6D8
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003B6D8
					// End Line: 545
				/* end block 1.1.1.1 */
				// End offset: 0x8003B6D8
				// End Line: 545

				/* begin block 1.1.1.2 */
					// Start line: 545
					// Start offset: 0x8003B6D8

					/* begin block 1.1.1.2.1 */
						// Start line: 545
						// Start offset: 0x8003B6D8
					/* end block 1.1.1.2.1 */
					// End offset: 0x8003B6D8
					// End Line: 545
				/* end block 1.1.1.2 */
				// End offset: 0x8003B6D8
				// End Line: 545
			/* end block 1.1.1 */
			// End offset: 0x8003B808
			// End Line: 578
		/* end block 1.1 */
		// End offset: 0x8003B808
		// End Line: 578
	/* end block 1 */
	// End offset: 0x8003B808
	// End Line: 578

	/* begin block 2 */
		// Start line: 1053
	/* end block 2 */
	// End Line: 1054

	/* begin block 3 */
		// Start line: 1060
	/* end block 3 */
	// End Line: 1061

	/* begin block 4 */
		// Start line: 1060
	/* end block 4 */
	// End Line: 1061

/* WARNING: Type propagation algorithm not settling */

void SetState__16tScreenCarSelecti(tScreenCarSelect *this,int state)

{
  short sVar1;
  uchar *puVar2;
  short sVar3;
  int iVar4;
  tShapeInformation *ptVar5;
  tTexture_ShapeInfo *ptVar6;
  tTexture_ShapeInfo **pptVar7;
  int iVar8;
  
  sVar1 = *(short *)(this->fCurrentOverlays + 3);
  if (state != (int)*(short *)(this->fCurrentOverlays + 3)) {
    *(short *)(this->fCurrentOverlays + 3) = (short)state;
    if ((ushort)(sVar1 - 2U) < 2) {
      TurnOff__10tVideoWall((tVideoWall *)&this->tvConfigs[9].flip_axis);
      SetBrightness__16tScreenCarSelectss(this,0,0);
      *(undefined2 *)((int)this->fCurrentOverlays + 0xe) = 0xffff;
      this->fState = -1;
    }
    iVar8 = 0;
    iVar4 = 0;
    do {
      pptVar7 = &(this->tScreen).fPermShapes.fShapes + (iVar4 >> 0x10);
      ptVar6 = pptVar7[0x43];
      iVar4 = (iVar4 >> 0x10) + state * 4;
      if (ptVar6 == (tTexture_ShapeInfo *)0x0) {
        if (-1 < (int)gStateOverlays[iVar4]) {
          ptVar6 = (tTexture_ShapeInfo *)
                   ((this->tScreen)._vf + (int)gStateOverlays[iVar4] * 0x18 + 6);
          pptVar7[0x43] = ptVar6;
          *(undefined2 *)&ptVar6->next = 0;
          pptVar7[0x43]->width = 1;
        }
      }
      else {
        if ((int)ptVar6->height != (int)gStateOverlays[iVar4]) {
          ptVar6->width = -1;
        }
      }
      iVar8 = iVar8 + 1;
      iVar4 = iVar8 * 0x10000;
    } while (iVar8 * 0x10000 >> 0x10 < 4);
  }
  if (state != 2) {
    if (state < 3) {
      if (state != 0) {
        return;
      }
    }
    else {
      if (6 < state) {
        return;
      }
      if (state < 5) {
        return;
      }
    }
  }
  this->fTVsInitialized = (void *)(uint)(state - 5U < 2);
  puVar2 = ticks;
  gStopCommentaryNow = 1;
  this->fSpeechTicks = 0;
  *(uchar **)&this->fShowroomTicks = puVar2;
  *(uchar **)&this->fInShowroom = puVar2;
  if (this->fTVsInitialized == (void *)0x0) {
    iVar4 = 0;
    do {
      sVar3 = (short)iVar4;
      iVar4 = iVar4 + 1;
      ptVar5 = (tShapeInformation *)((int)&(this->tScreen).fPermShapes + (int)sVar3 * 0x30);
      ptVar5[7].async_handle = 0;
      ptVar5[7].fNumShapes = 0;
    } while (iVar4 * 0x10000 >> 0x10 < 10);
    if (sVar1 != 1) {
      TransitionOn__7tScreen22tScreen_TransitionTypeP5tMenu
                ((tScreen *)this,kScreen_TransitionTypeScreen);
    }
    TurnOn__10tVideoWall((tVideoWall *)&this->tvConfigs[9].flip_axis);
  }
  else {
    AudioMus_StopSong__Fi(1000);
    iVar4 = 0;
    this->fSpeechPlayed = (void *)0x0;
    DAT_80051e9c = this->fSplineInterval & 0x3ff;
    do {
      iVar8 = (iVar4 << 0x10) >> 0xe;
      iVar4 = iVar4 + 1;
      *(int *)((int)&gKnots + iVar8) =
           *(int *)((int)&INT_80051e8c + iVar8) * 2 - *(int *)((int)&PTR_DAT_80051ea0 + iVar8);
    } while (iVar4 * 0x10000 >> 0x10 < 5);
    INT_80052c24 = 0x10000;
    INT_80052c20 = 0x10000;
    INT_80052c1c = 0x10000;
    gRotateOffset = 0x10000;
    TransitionOff__7tScreen22tScreen_TransitionTypeP5tMenu
              ((tScreen *)this,kScreen_TransitionTypeScreen);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcSplinePosition__16tScreenCarSelectiiiiUlRiN46(struct tScreenCarSelect *this /*$a0*/, int knot1 /*$s1*/, int knot2 /*$s3*/, int knot3 /*$s5*/, int knot4 /*stack 16*/, unsigned long elapsed /*stack 20*/, int *camY /*stack 24*/, int *camZ /*stack 28*/, int *screenX /*stack 32*/, int *screenY /*stack 36*/, int *camRot /*stack 40*/)
 // line 583, offset 0x8003b820
	/* begin block 1 */
		// Start line: 584
		// Start offset: 0x8003B820
		// Variables:
	// 		int T[4]; // stack offset -152
	// 		int G[4][4]; // stack offset -136
	// 		short i; // $a2
	// 		int Result1[4]; // stack offset -72
	// 		int Result2[4]; // stack offset -56
	/* end block 1 */
	// End offset: 0x8003BAA8
	// End Line: 626

	/* begin block 2 */
		// Start line: 1239
	/* end block 2 */
	// End Line: 1240

	/* begin block 3 */
		// Start line: 1245
	/* end block 3 */
	// End Line: 1246

	/* begin block 4 */
		// Start line: 1245
	/* end block 4 */
	// End Line: 1246

void CalcSplinePosition__16tScreenCarSelectiiiiUlRiN46
               (tScreenCarSelect *this,int knot1,int knot2,int knot3,int knot4,ulong elapsed,
               int *camY,int *camZ,int *screenX,int *screenY,int *camRot)

{
  int iVar1;
  int iVar2;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88 [4];
  int local_78 [4];
  int local_68 [4];
  int local_58 [4];
  int aiStack72 [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_90 = fixeddiv(elapsed << 0x10,0x2580000);
  local_94 = fixedmult(local_90,local_90);
  local_98 = fixedmult(local_94,local_90);
  iVar2 = 0;
  local_8c = 0x10000;
  do {
    iVar1 = (iVar2 << 0x10) >> 0xe;
    *(undefined4 *)((int)local_88 + iVar1) = *(undefined4 *)((int)&gKnots + iVar1 + knot1 * 0x14);
    *(undefined4 *)((int)local_78 + iVar1) = *(undefined4 *)((int)&gKnots + iVar1 + knot2 * 0x14);
    *(undefined4 *)((int)local_68 + iVar1) = *(undefined4 *)((int)&gKnots + iVar1 + knot3 * 0x14);
    iVar2 = iVar2 + 1;
    *(undefined4 *)((int)local_58 + iVar1) = *(undefined4 *)((int)&gKnots + iVar1 + knot4 * 0x14);
  } while (iVar2 * 0x10000 >> 0x10 < 4);
  TransformVector__FRA4_iRA4_A4_iT0
            ((int (*) [4])&local_98,(int (*) [4] [4])gCatmullRom,(int (*) [4])aiStack72);
  TransformVector__FRA4_iRA4_A4_iT0
            ((int (*) [4])aiStack72,(int (*) [4] [4])local_88,(int (*) [4])&local_38);
  *camY = local_38 >> 1;
  *camZ = local_34 >> 1;
  local_30 = local_30 >> 1;
  if (local_30 < 0) {
    local_30 = local_30 + 0xffff;
  }
  *screenX = local_30 >> 0x10;
  local_2c = local_2c >> 1;
  if (local_2c < 0) {
    local_2c = local_2c + 0xffff;
  }
  *screenY = local_2c >> 0x10;
  local_88[0] = (&INT_80051e88)[knot1 * 5] + gRotateOffset;
  local_78[0] = (&INT_80051e88)[knot2 * 5] + INT_80052c1c;
  local_68[0] = (&INT_80051e88)[knot3 * 5] + INT_80052c20;
  local_58[0] = (&INT_80051e88)[knot4 * 5] + INT_80052c24;
  TransformVector__FRA4_iRA4_A4_iT0
            ((int (*) [4])&local_98,(int (*) [4] [4])gCatmullRom,(int (*) [4])aiStack72);
  TransformVector__FRA4_iRA4_A4_iT0
            ((int (*) [4])aiStack72,(int (*) [4] [4])local_88,(int (*) [4])&local_38);
  local_38 = local_38 >> 1;
  if (local_38 < 0) {
    local_38 = local_38 + 0xffff;
  }
  *camRot = local_38 >> 0x10;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__16tScreenCarSelectRsT1PPcT3(struct tScreenCarSelect *this /*$s1*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$a3*/, char **swapFileName /*stack 16*/)
 // line 629, offset 0x8003bae0
	/* begin block 1 */
		// Start line: 630
		// Start offset: 0x8003BAE0
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -224
	/* end block 1 */
	// End offset: 0x8003BB48
	// End Line: 644

	/* begin block 2 */
		// Start line: 1365
	/* end block 2 */
	// End Line: 1366

	/* begin block 3 */
		// Start line: 1369
	/* end block 3 */
	// End Line: 1370

	/* begin block 4 */
		// Start line: 1369
	/* end block 4 */
	// End Line: 1370

void GetShapeInfo__16tScreenCarSelectRsT1PPcT3
               (tScreenCarSelect *this,short *numPermShapes,short *numSwapShapes,char **permFileName
               ,char **swapFileName)

{
  int iVar1;
  tCarInfo local_e0;
  
  *numPermShapes = 0x8e;
  *numSwapShapes = 0xb;
  *permFileName = s_zcars_80011ad4;
  iVar1 = *(int *)((this->tScreen)._vf + 2);
  iVar1 = (**(code **)(iVar1 + 0x6c))
                    ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar1 + 0x68),
                     &local_e0);
  if (iVar1 != 1) {
    GetStockCar__11tCarManagersR8tCarInfo(&carManager,0,&local_e0);
  }
  *(ushort *)((int)this->fCurrentOverlays + 0xe) = (ushort)local_e0.fCarIndex;
  this->fState = (short)local_e0.fCarID;
  this->fPreviousCar = (ushort)local_e0.fCountry;
  sprintf(gSwapFileName,(char *)&PTR_DAT_80011adc,local_e0.fShapeName);
  *swapFileName = gSwapFileName;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateVideoWall__16tScreenCarSelectR8tCarInfo(struct tScreenCarSelect *this /*$s1*/, struct tCarInfo *carInfo /*$s0*/)
 // line 648, offset 0x8003bba4
	/* begin block 1 */
		// Start line: 649
		// Start offset: 0x8003BBA4
	/* end block 1 */
	// End offset: 0x8003BC60
	// End Line: 661

	/* begin block 2 */
		// Start line: 1417
	/* end block 2 */
	// End Line: 1418

	/* begin block 3 */
		// Start line: 1421
	/* end block 3 */
	// End Line: 1422

	/* begin block 4 */
		// Start line: 1421
	/* end block 4 */
	// End Line: 1422

void UpdateVideoWall__16tScreenCarSelectR8tCarInfo(tScreenCarSelect *this,tCarInfo *carInfo)

{
  byte bVar1;
  
  if ((((uint)carInfo->fCarIndex != (int)*(short *)((int)this->fCurrentOverlays + 0xe)) ||
      ((int)carInfo->fCarID != (int)this->fState)) ||
     ((carInfo->fCarClass == '\a' && ((int)this->fPreviousCar != (uint)carInfo->fCountry)))) {
    if (-1 < carInfo->fCarID) {
      AsyncLoadSwapShapeFile__7tScreenPc((tScreen *)this,carInfo->fShapeName);
    }
    *(ushort *)((int)this->fCurrentOverlays + 0xe) = (ushort)carInfo->fCarIndex;
    this->fState = (short)carInfo->fCarID;
    bVar1 = carInfo->fCountry;
    this->fFadeTicks[1] = 0;
    this->fPreviousCar = (ushort)bVar1;
    SetBrightness__16tScreenCarSelectss(this,0,0);
    TurnOff__10tVideoWall((tVideoWall *)&this->tvConfigs[9].flip_axis);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AllocateAsyncBuffer__16tScreenCarSelect(struct tScreenCarSelect *this /*$s0*/)
 // line 665, offset 0x8003bc74
	/* begin block 1 */
		// Start line: 666
		// Start offset: 0x8003BC74
	/* end block 1 */
	// End offset: 0x8003BC74
	// End Line: 666

	/* begin block 2 */
		// Start line: 1459
	/* end block 2 */
	// End Line: 1460

	/* begin block 3 */
		// Start line: 1464
	/* end block 3 */
	// End Line: 1465

	/* begin block 4 */
		// Start line: 1464
	/* end block 4 */
	// End Line: 1465

void AllocateAsyncBuffer__16tScreenCarSelect(tScreenCarSelect *this)

{
  char *pcVar1;
  
  pcVar1 = Platform_GetDCTBuffer__FiPc((int)&DAT_00009c40,s_VideoWall_80011ae0);
  (this->tScreen).fSwapShapes.fDestFile = pcVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeAsyncBuffer__16tScreenCarSelect(struct tScreenCarSelect *this /*$s0*/)
 // line 670, offset 0x8003bca8
	/* begin block 1 */
		// Start line: 671
		// Start offset: 0x8003BCA8
	/* end block 1 */
	// End offset: 0x8003BCA8
	// End Line: 671

	/* begin block 2 */
		// Start line: 1471
	/* end block 2 */
	// End Line: 1472

	/* begin block 3 */
		// Start line: 1475
	/* end block 3 */
	// End Line: 1476

	/* begin block 4 */
		// Start line: 1475
	/* end block 4 */
	// End Line: 1476

void FreeAsyncBuffer__16tScreenCarSelect(tScreenCarSelect *this)

{
  Platform_ResetDCTBuffer__Fv();
  (this->tScreen).fSwapShapes.fDestFile = (char *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitializeVideoWall__16tScreenCarSelect(struct tScreenCarSelect *this /*$s1*/)
 // line 676, offset 0x8003bcd0
	/* begin block 1 */
		// Start line: 677
		// Start offset: 0x8003BCD0
	/* end block 1 */
	// End offset: 0x8003BD74
	// End Line: 688

	/* begin block 2 */
		// Start line: 1483
	/* end block 2 */
	// End Line: 1484

	/* begin block 3 */
		// Start line: 1487
	/* end block 3 */
	// End Line: 1488

	/* begin block 4 */
		// Start line: 1487
	/* end block 4 */
	// End Line: 1488

void InitializeVideoWall__16tScreenCarSelect(tScreenCarSelect *this)

{
  tVideoWall *this_00;
  
  this_00 = (tVideoWall *)&this->tvConfigs[9].flip_axis;
  Initialize__10tVideoWallP9tTVConfigP18tTexture_ShapeInfossPss
            (this_00,(tTVConfig *)&this->fPreviousCarID,(this->tScreen).fSwapShapes.fShapes,0,10,
             tvOrder,0x96);
  SetAvailableText__10tVideoWallsss(this_00,0xf8,0x140,0x50);
  SetAvailableIcon__10tVideoWallssssP18tTexture_ShapeInfo
            (this_00,0x1c,10,0x136,0x3c,(this->tScreen).fPermShapes.fShapes);
  if (((this->tScreen).fSwapShapes.fFlags & 1) != 0) {
    UpdateImages__10tVideoWall(this_00);
    this->fFadeTicks[1] = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__16tScreenCarSelect(struct tScreenCarSelect *this /*$s0*/)
 // line 692, offset 0x8003bd88
	/* begin block 1 */
		// Start line: 693
		// Start offset: 0x8003BD88
		// Variables:
	// 		short i; // $a1
	// 		struct tCarInfo carInfo; // stack offset -304
	// 		struct tTrackInformation trackInfo; // stack offset -96
	// 		struct tTrackInfo tourneyTrack; // stack offset -48

		/* begin block 1.1 */
			// Start line: 714
			// Start offset: 0x8003BE00

			/* begin block 1.1.1 */
				// Start line: 714
				// Start offset: 0x8003BE00
			/* end block 1.1.1 */
			// End offset: 0x8003BE00
			// End Line: 714
		/* end block 1.1 */
		// End offset: 0x8003BE00
		// End Line: 714

		/* begin block 1.2 */
			// Start line: 714
			// Start offset: 0x8003BE00

			/* begin block 1.2.1 */
				// Start line: 719
				// Start offset: 0x8003BE38

				/* begin block 1.2.1.1 */
					// Start line: 719
					// Start offset: 0x8003BE38

					/* begin block 1.2.1.1.1 */
						// Start line: 719
						// Start offset: 0x8003BE38
					/* end block 1.2.1.1.1 */
					// End offset: 0x8003BE3C
					// End Line: 719
				/* end block 1.2.1.1 */
				// End offset: 0x8003BE3C
				// End Line: 719
			/* end block 1.2.1 */
			// End offset: 0x8003BE3C
			// End Line: 719
		/* end block 1.2 */
		// End offset: 0x8003BE3C
		// End Line: 719

		/* begin block 1.3 */
			// Start line: 740
			// Start offset: 0x8003BED0

			/* begin block 1.3.1 */
				// Start line: 740
				// Start offset: 0x8003BED0
			/* end block 1.3.1 */
			// End offset: 0x8003BED0
			// End Line: 740
		/* end block 1.3 */
		// End offset: 0x8003BED0
		// End Line: 740

		/* begin block 1.4 */
			// Start line: 740
			// Start offset: 0x8003BED0

			/* begin block 1.4.1 */
				// Start line: 740
				// Start offset: 0x8003BED0
			/* end block 1.4.1 */
			// End offset: 0x8003BED0
			// End Line: 740
		/* end block 1.4 */
		// End offset: 0x8003BED0
		// End Line: 740
	/* end block 1 */
	// End offset: 0x8003BF80
	// End Line: 761

	/* begin block 2 */
		// Start line: 1516
	/* end block 2 */
	// End Line: 1517

	/* begin block 3 */
		// Start line: 1521
	/* end block 3 */
	// End Line: 1522

	/* begin block 4 */
		// Start line: 1521
	/* end block 4 */
	// End Line: 1522

void Initialize__16tScreenCarSelect(tScreenCarSelect *this)

{
  tGlobalMenuDefs *ptVar1;
  short sVar2;
  tTrackInformation *ptVar3;
  int iVar4;
  uchar *puVar5;
  tTexture_ShapeInfo **pptVar6;
  uint uVar7;
  char local_130 [199];
  byte local_69;
  byte local_68;
  tTrackInformation tStack96;
  tTrackInfo local_30;
  
  if (frontEnd.raceType == '\x02') {
    GetTrackToRace__18tTournamentManagerR10tTrackInfo(&tournamentManager,&local_30);
    ptVar3 = GetTrackByID__13tTrackManagers(&trackManager,(short)local_30.fTrackNumber);
    tStack96.fSimNumber = ptVar3->fSimNumber;
  }
  else {
    GetTrack__13tTrackManagersR17tTrackInformation
              (&trackManager,(ushort)(byte)frontEnd.track[(uint)(byte)frontEnd.pinkSlipsTrackIndex],
               &tStack96);
  }
  ptVar1 = menuDefs;
  GameSetup_gData.track = ZEXT14(tStack96.fSimNumber);
  gShowroomLights = 1;
  uVar7 = *(uint *)(menuDefs->itemDealerColor).tMenuItemLeftRightChoice.tMenuItemInteractive.
                   tMenuItem._vf & 0xfffffffe;
  *(uint *)(menuDefs->itemDealerColor).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf =
       uVar7;
  if (frontEnd.raceType == '\x02') {
    *(uint *)(ptVar1->itemDealerColor).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf =
         uVar7 | 1;
  }
  Initialize__7tScreen((tScreen *)this);
  iVar4 = *(int *)((this->tScreen)._vf + 2);
  (**(code **)(iVar4 + 0x74))
            ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar4 + 0x70));
  SetLicensePlate__Fv();
  iVar4 = *(int *)((this->tScreen)._vf + 2);
  this->fFadeTicks[1] = 0;
  this->fSplineInterval = 0;
  this->fTVsInitialized = (void *)0x0;
  iVar4 = (**(code **)(iVar4 + 0x6c))
                    ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar4 + 0x68),
                     local_130);
  if (iVar4 == 0) {
    *(undefined2 *)((int)this->fCurrentOverlays + 0xe) = 0xffff;
    this->fPreviousCar = -1;
    this->fState = -1;
  }
  else {
    *(ushort *)((int)this->fCurrentOverlays + 0xe) = (ushort)local_68;
    this->fState = (short)local_130[0];
    this->fPreviousCar = (ushort)local_69;
  }
  puVar5 = ticks;
  *(undefined2 *)((int)&this->fVideoWall[1].fUpdated + 2) = 0;
  *(undefined2 *)&this->fVideoWall[1].fUpdated = 0;
  this->fBrightness[1] = 0;
  this->fBrightness[0] = 0;
  *(uchar **)&this->fInShowroom = puVar5;
  iVar4 = *(int *)((this->tScreen)._vf + 2);
  puVar5 = puVar5 + -0x100;
  *(uchar **)this->fFadeTicks = puVar5;
  *(uchar **)this->fDestBrightness = puVar5;
  (**(code **)(iVar4 + 0x5c))
            ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar4 + 0x58));
  iVar4 = 0;
  do {
    sVar2 = (short)iVar4;
    iVar4 = iVar4 + 1;
    pptVar6 = &(this->tScreen).fPermShapes.fShapes + (int)sVar2 * 6;
    *(undefined2 *)(pptVar6 + 0x1d) = 0;
    *(undefined2 *)(pptVar6 + 0x1e) = 0;
  } while (iVar4 * 0x10000 >> 0x10 < 7);
  iVar4 = 0;
  do {
    *(undefined4 *)((int)&this->fOverlays[6].direction + ((iVar4 << 0x10) >> 0xe)) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 * 0x10000 >> 0x10 < 4);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__16tScreenCarSelect7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenCarSelect *this /*$s0*/, enum tInputKeyType *keyval /*$s1*/)
 // line 764, offset 0x8003bf90
	/* begin block 1 */
		// Start line: 765
		// Start offset: 0x8003BF90

		/* begin block 1.1 */
			// Start line: 765
			// Start offset: 0x8003BF90

			/* begin block 1.1.1 */
				// Start line: 767
				// Start offset: 0x8003BFB4
				// Variables:
			// 		struct tCarInfo carInfo; // stack offset -224
			// 		void * validCar; // $a1
			// 		struct tMenuItem *item; // $a0

				/* begin block 1.1.1.1 */
					// Start line: 777
					// Start offset: 0x8003C00C
					// Variables:
				// 		struct tMenuItem *this; // $a0

					/* begin block 1.1.1.1.1 */
						// Start line: 777
						// Start offset: 0x8003C00C
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003C00C
					// End Line: 777
				/* end block 1.1.1.1 */
				// End offset: 0x8003C00C
				// End Line: 777

				/* begin block 1.1.1.2 */
					// Start line: 777
					// Start offset: 0x8003C00C

					/* begin block 1.1.1.2.1 */
						// Start line: 782
						// Start offset: 0x8003C018

						/* begin block 1.1.1.2.1.1 */
							// Start line: 784
							// Start offset: 0x8003C018

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 785
								// Start offset: 0x8003C028

								/* begin block 1.1.1.2.1.1.1.1 */
									// Start line: 785
									// Start offset: 0x8003C028
									// Variables:
								// 		struct tMenuItem *this; // $a0

									/* begin block 1.1.1.2.1.1.1.1.1 */
										// Start line: 785
										// Start offset: 0x8003C028
									/* end block 1.1.1.2.1.1.1.1.1 */
									// End offset: 0x8003C030
									// End Line: 785
								/* end block 1.1.1.2.1.1.1.1 */
								// End offset: 0x8003C030
								// End Line: 785
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x8003C030
							// End Line: 785
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x8003C030
						// End Line: 785

						/* begin block 1.1.1.2.1.2 */
							// Start line: 786
							// Start offset: 0x8003C030

							/* begin block 1.1.1.2.1.2.1 */
								// Start line: 787
								// Start offset: 0x8003C040

								/* begin block 1.1.1.2.1.2.1.1 */
									// Start line: 787
									// Start offset: 0x8003C040
									// Variables:
								// 		struct tMenuItem *this; // $a0

									/* begin block 1.1.1.2.1.2.1.1.1 */
										// Start line: 787
										// Start offset: 0x8003C040
									/* end block 1.1.1.2.1.2.1.1.1 */
									// End offset: 0x8003C048
									// End Line: 787
								/* end block 1.1.1.2.1.2.1.1 */
								// End offset: 0x8003C048
								// End Line: 787
							/* end block 1.1.1.2.1.2.1 */
							// End offset: 0x8003C048
							// End Line: 787
						/* end block 1.1.1.2.1.2 */
						// End offset: 0x8003C048
						// End Line: 787
					/* end block 1.1.1.2.1 */
					// End offset: 0x8003C048
					// End Line: 787
				/* end block 1.1.1.2 */
				// End offset: 0x8003C048
				// End Line: 787

				/* begin block 1.1.1.3 */
					// Start line: 790
					// Start offset: 0x8003C048

					/* begin block 1.1.1.3.1 */
						// Start line: 791
						// Start offset: 0x8003C070

						/* begin block 1.1.1.3.1.1 */
							// Start line: 791
							// Start offset: 0x8003C070

							/* begin block 1.1.1.3.1.1.1 */
								// Start line: 791
								// Start offset: 0x8003C070
							/* end block 1.1.1.3.1.1.1 */
							// End offset: 0x8003C088
							// End Line: 791
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x8003C088
						// End Line: 791
					/* end block 1.1.1.3.1 */
					// End offset: 0x8003C088
					// End Line: 791
				/* end block 1.1.1.3 */
				// End offset: 0x8003C088
				// End Line: 791
			/* end block 1.1.1 */
			// End offset: 0x8003C088
			// End Line: 791
		/* end block 1.1 */
		// End offset: 0x8003C088
		// End Line: 791
	/* end block 1 */
	// End offset: 0x8003C104
	// End Line: 811

	/* begin block 2 */
		// Start line: 1683
	/* end block 2 */
	// End Line: 1684

	/* begin block 3 */
		// Start line: 1687
	/* end block 3 */
	// End Line: 1688

	/* begin block 4 */
		// Start line: 1687
	/* end block 4 */
	// End Line: 1688

void ProcessInput__16tScreenCarSelect7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tScreenCarSelect *this,tInputKeyType *keyval)

{
  short sVar1;
  tMenuItemGoToMenuNFS4Button *ptVar2;
  int state;
  int *in_a2;
  char local_e0 [208];
  
  state = *in_a2;
  if (state == 8) {
    state = *(int *)((this->tScreen)._vf + 2);
    state = (**(code **)(state + 0x6c))
                      ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(state + 0x68),
                       local_e0);
    if (*(char *)&(FEApp->helpPopup).numItems == '\0') {
      ptVar2 = (tMenuItemGoToMenuNFS4Button *)&menuDefs->itemDealerCar;
    }
    else {
      ptVar2 = &menuDefs->itemBuyCar;
    }
    *(undefined4 *)&ptVar2->fOffset = 0x10b;
    if (state != 0) {
      if (local_e0[0] == '\b') {
        *(undefined4 *)&ptVar2->fOffset = 0x10c;
      }
      if (local_e0[0] == '\x01') {
        *(undefined4 *)&ptVar2->fOffset = 0x10d;
      }
    }
    if ((frontEnd.oppNumber == '\x01') || (frontEnd.gameMode == '\x01')) {
      (menuDefs->menuCarDealer).tMenu.fFlags = (menuDefs->menuCarDealer).tMenu.fFlags | 1;
    }
    state = *in_a2;
  }
  if (state != 0x10) {
    return;
  }
  sVar1 = *(short *)(this->fCurrentOverlays + 3);
  if (sVar1 == 5) {
    state = 0;
  }
  else {
    if (sVar1 < 6) {
      if (sVar1 < 2) {
        return;
      }
      if (frontEnd.gameMode == '\x01') {
        return;
      }
      state = 1;
    }
    else {
      if (sVar1 != 6) {
        return;
      }
      state = 2;
    }
  }
  SetState__16tScreenCarSelecti(this,state);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawVideoWall__16tScreenCarSelects(struct tScreenCarSelect *this /*$s0*/, short y /*$a1*/)
 // line 816, offset 0x8003c118
	/* begin block 1 */
		// Start line: 817
		// Start offset: 0x8003C118
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -224
	// 		void * validCar; // $s1
	/* end block 1 */
	// End offset: 0x8003C1E0
	// End Line: 846

	/* begin block 2 */
		// Start line: 1785
	/* end block 2 */
	// End Line: 1786

	/* begin block 3 */
		// Start line: 1791
	/* end block 3 */
	// End Line: 1792

	/* begin block 4 */
		// Start line: 1791
	/* end block 4 */
	// End Line: 1792

void DrawVideoWall__16tScreenCarSelects(tScreenCarSelect *this,short y)

{
  short valid;
  int iVar1;
  tVideoWall *this_00;
  undefined auStack224 [7];
  byte local_d9;
  
  iVar1 = *(int *)((this->tScreen)._vf + 2);
  valid = (**(code **)(iVar1 + 0x6c))
                    ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar1 + 0x68),
                     auStack224);
  DrawBackgroundImage__7tScreeniiP18tTexture_ShapeInfoi
            ((tScreen *)this,0,0x1c,(this->tScreen).fPermShapes.fShapes,0x96);
  DrawOverlay__16tScreenCarSelectP8tOverlay(this,*(tOverlay **)&this->fOverlays[6].direction);
  if ((((this->tScreen).fSwapShapes.fFlags & 1) != 0) && (this->fFadeTicks[1] == 0)) {
    UpdateImages__10tVideoWall((tVideoWall *)&this->tvConfigs[9].flip_axis);
    this->fFadeTicks[1] = 1;
  }
  if ((0 < (this->tScreen).fScreenFadeVal) && ((this->tScreen).fTransitionOff != (void *)0x0)) {
    TurnOffInstant__10tVideoWall((tVideoWall *)&this->tvConfigs[9].flip_axis);
    SetBrightness__16tScreenCarSelectss(this,0,0);
  }
  this_00 = (tVideoWall *)&this->tvConfigs[9].flip_axis;
  UpdateTransition__10tVideoWall(this_00);
  SetValid__10tVideoWalls(this_00,valid);
  SetAvailable__10tVideoWalls(this_00,(ushort)local_d9);
  Draw__10tVideoWall(this_00);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetCar__16tScreenCarSelectR8tCarInfo(struct tScreenCarSelect *this /*$s0*/, struct tCarInfo *carInfo /*$s2*/)
 // line 887, offset 0x8003c224
	/* begin block 1 */
		// Start line: 888
		// Start offset: 0x8003C224

		/* begin block 1.1 */
			// Start line: 888
			// Start offset: 0x8003C224

			/* begin block 1.1.1 */
				// Start line: 890
				// Start offset: 0x8003C270

				/* begin block 1.1.1.1 */
					// Start line: 893
					// Start offset: 0x8003C270

					/* begin block 1.1.1.1.1 */
						// Start line: 893
						// Start offset: 0x8003C270

						/* begin block 1.1.1.1.1.1 */
							// Start line: 893
							// Start offset: 0x8003C270
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003C270
						// End Line: 893
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003C270
					// End Line: 893
				/* end block 1.1.1.1 */
				// End offset: 0x8003C2BC
				// End Line: 895
			/* end block 1.1.1 */
			// End offset: 0x8003C474
			// End Line: 934
		/* end block 1.1 */
		// End offset: 0x8003C474
		// End Line: 934
	/* end block 1 */
	// End offset: 0x8003C48C
	// End Line: 939

	/* begin block 2 */
		// Start line: 1770
	/* end block 2 */
	// End Line: 1771

	/* begin block 3 */
		// Start line: 1900
	/* end block 3 */
	// End Line: 1901

	/* begin block 4 */
		// Start line: 1900
	/* end block 4 */
	// End Line: 1901

void * GetCar__16tScreenCarSelectR8tCarInfo(tScreenCarSelect *this,tCarInfo *carInfo)

{
  uchar uVar1;
  byte bVar2;
  ushort uVar3;
  
  switch(*(undefined2 *)(this->fCurrentOverlays + 3)) {
  case 0:
  case 5:
    GetStockCar__11tCarManagersR8tCarInfo(&carManager,(ushort)(byte)frontEnd.playerCar[0],carInfo);
    if ((int)(uint)(byte)frontEnd.playerCar[0] < (int)carManager.fNumCars) {
      carInfo->fColor = frontEnd.carColors[(int)carInfo->fCarID];
    }
    carInfo->fCountry = frontEnd.carCountry[(int)carInfo->fCarID];
    break;
  default:
    uVar3 = GetNumOwnedCars__11tCarManagers(&carManager,0);
    if (((int)((uint)uVar3 << 0x10) < 1) && (frontEnd.raceType != '\x01')) {
      return (void *)0x0;
    }
    if (((frontEnd.raceType == '\x02') && (*(short *)(this->fCurrentOverlays + 3) != 3)) &&
       (uVar3 = GetNumTourneyCars__11tCarManagers(&carManager,0), (int)((uint)uVar3 << 0x10) < 1)) {
      return (void *)0x0;
    }
    bVar2 = frontEnd.garageCar[0];
    if (*(short *)(this->fCurrentOverlays + 3) == 3) {
      bVar2 = frontEnd.sellerCar;
    }
    GetStockCar__11tCarManagersR8tCarInfo(&carManager,(ushort)bVar2,carInfo);
    carInfo->fCountry = frontEnd.carCountry[(int)carInfo->fCarID];
    break;
  case 2:
  case 6:
    GetStockCar__11tCarManagersR8tCarInfo(&carManager,(ushort)(byte)frontEnd.dealerCar,carInfo);
    uVar1 = frontEnd.carColors[(int)carInfo->fCarID];
    carInfo->fAvailable = '\x01';
    carInfo->fColor = uVar1;
    break;
  case 7:
    if ((frontEnd.carListType == '\x01') &&
       (uVar3 = GetNumOwnedCars__11tCarManagers(&carManager,0), (int)((uint)uVar3 << 0x10) < 1)) {
      return (void *)0x0;
    }
    bVar2 = frontEnd.garageCar[0];
    if (frontEnd.carListType == '\0') {
      bVar2 = frontEnd.playerCar[0];
    }
    GetStockCar__11tCarManagersR8tCarInfo(&carManager,(ushort)bVar2,carInfo);
    if (frontEnd.carListType == '\0') {
      carInfo->fColor = frontEnd.carColors[(int)carInfo->fCarID];
    }
    carInfo->fCountry = frontEnd.carCountry[(int)carInfo->fCarID];
  }
  carInfo->fColor = carInfo->fColorOrder[(uint)carInfo->fColor];
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetBrightness__16tScreenCarSelectss(struct tScreenCarSelect *this /*$a0*/, short bright /*$a1*/, short i /*$a2*/)
 // line 943, offset 0x8003c4a4
	/* begin block 1 */
		// Start line: 944
		// Start offset: 0x8003C4A4
	/* end block 1 */
	// End offset: 0x8003C4A4
	// End Line: 945

	/* begin block 2 */
		// Start line: 2010
	/* end block 2 */
	// End Line: 2011

	/* begin block 3 */
		// Start line: 2015
	/* end block 3 */
	// End Line: 2016

	/* begin block 4 */
		// Start line: 2015
	/* end block 4 */
	// End Line: 2016

	/* begin block 5 */
		// Start line: 2016
	/* end block 5 */
	// End Line: 2017

	/* begin block 6 */
		// Start line: 2016
	/* end block 6 */
	// End Line: 2017

void SetBrightness__16tScreenCarSelectss(tScreenCarSelect *this,short bright,short i)

{
  *(short *)((int)this->fBrightness + ((int)((uint)(ushort)i << 0x10) >> 0xf)) = bright;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateBrightness__16tScreenCarSelects(struct tScreenCarSelect *this /*$a0*/, short i /*$a1*/)
 // line 950, offset 0x8003c4b8
	/* begin block 1 */
		// Start line: 951
		// Start offset: 0x8003C4B8
	/* end block 1 */
	// End offset: 0x8003C534
	// End Line: 962

	/* begin block 2 */
		// Start line: 2023
	/* end block 2 */
	// End Line: 2024

	/* begin block 3 */
		// Start line: 2029
	/* end block 3 */
	// End Line: 2030

	/* begin block 4 */
		// Start line: 2029
	/* end block 4 */
	// End Line: 2030

	/* begin block 5 */
		// Start line: 2030
	/* end block 5 */
	// End Line: 2031

	/* begin block 6 */
		// Start line: 2030
	/* end block 6 */
	// End Line: 2031

void UpdateBrightness__16tScreenCarSelects(tScreenCarSelect *this,short i)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = (int)&(this->tScreen).fPermShapes.fShapes + ((int)((uint)(ushort)i << 0x10) >> 0xf);
  sVar1 = *(short *)(iVar3 + 0x378);
  sVar2 = *(short *)(iVar3 + 0x374) + 8;
  if (*(short *)(iVar3 + 0x374) < sVar1) {
    *(short *)(iVar3 + 0x374) = sVar2;
    if (sVar1 < sVar2) {
      *(undefined2 *)(iVar3 + 0x374) = *(undefined2 *)(iVar3 + 0x378);
      return;
    }
  }
  else {
    sVar2 = *(short *)(iVar3 + 0x374) + -8;
    if (sVar1 < *(short *)(iVar3 + 0x374)) {
      *(short *)(iVar3 + 0x374) = sVar2;
      if (sVar2 < *(short *)(iVar3 + 0x378)) {
        *(undefined2 *)(iVar3 + 0x374) = *(undefined2 *)(iVar3 + 0x378);
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__16tScreenCarSelect(struct tScreenCarSelect *this /*$s0*/)
 // line 966, offset 0x8003c53c
	/* begin block 1 */
		// Start line: 967
		// Start offset: 0x8003C53C
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -216

		/* begin block 1.1 */
			// Start line: 967
			// Start offset: 0x8003C53C

			/* begin block 1.1.1 */
				// Start line: 971
				// Start offset: 0x8003C570

				/* begin block 1.1.1.1 */
					// Start line: 972
					// Start offset: 0x8003C570

					/* begin block 1.1.1.1.1 */
						// Start line: 977
						// Start offset: 0x8003C588

						/* begin block 1.1.1.1.1.1 */
							// Start line: 977
							// Start offset: 0x8003C588
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003C588
						// End Line: 977
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003C588
					// End Line: 977

					/* begin block 1.1.1.1.2 */
						// Start line: 977
						// Start offset: 0x8003C598
						// Variables:
					// 		struct tFEApplication *this; // $v0

						/* begin block 1.1.1.1.2.1 */
							// Start line: 977
							// Start offset: 0x8003C598
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x8003C598
						// End Line: 977
					/* end block 1.1.1.1.2 */
					// End offset: 0x8003C598
					// End Line: 977

					/* begin block 1.1.1.1.3 */
						// Start line: 977
						// Start offset: 0x8003C5C8

						/* begin block 1.1.1.1.3.1 */
							// Start line: 977
							// Start offset: 0x8003C5C8
						/* end block 1.1.1.1.3.1 */
						// End offset: 0x8003C5C8
						// End Line: 977
					/* end block 1.1.1.1.3 */
					// End offset: 0x8003C5C8
					// End Line: 977
				/* end block 1.1.1.1 */
				// End offset: 0x8003C62C
				// End Line: 982
			/* end block 1.1.1 */
			// End offset: 0x8003C62C
			// End Line: 982
		/* end block 1.1 */
		// End offset: 0x8003C62C
		// End Line: 982
	/* end block 1 */
	// End offset: 0x8003C65C
	// End Line: 994

	/* begin block 2 */
		// Start line: 2056
	/* end block 2 */
	// End Line: 2057

	/* begin block 3 */
		// Start line: 2061
	/* end block 3 */
	// End Line: 2062

	/* begin block 4 */
		// Start line: 2061
	/* end block 4 */
	// End Line: 2062

void DrawBackground__16tScreenCarSelect(tScreenCarSelect *this)

{
  bool bVar1;
  int iVar2;
  short bright;
  undefined auStack216 [7];
  char local_d1;
  
  iVar2 = *(int *)((this->tScreen)._vf + 2);
  iVar2 = (**(code **)(iVar2 + 0x6c))
                    ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar2 + 0x68),
                     auStack216);
  if (iVar2 != 0) {
    IsShapeFileLoaded__7tScreenR17tShapeInformation((tScreen *)this,&(this->tScreen).fSwapShapes);
    bVar1 = false;
    if ((((this->tScreen).fSwapShapes.fFile != (char *)0x0) &&
        (*(short *)&this->fVideoWall[0].fTVTicks != -1)) &&
       (*(int *)(((&gCarObj2)[(uint)*(byte *)&(FEApp->helpPopup).numItems]->render).palCopyNum + 0xd
                ) == 0)) {
      bVar1 = 0x80 < (int)(ticks + -*(int *)this->fDestBrightness);
    }
    if (bVar1) {
      UploadSwapShapes__7tScreeni((tScreen *)this,0xb);
      TurnOn__10tVideoWall((tVideoWall *)&this->tvConfigs[9].flip_axis);
      if (*(short *)&this->fVideoWall[1].fUpdated == this->fBrightness[0]) {
        bright = 0x20;
        if (local_d1 != '\0') {
          bright = 0x80;
        }
        SetBrightness__16tScreenCarSelectss(this,bright,0);
      }
    }
  }
  if ((this->tScreen).fScreenFadeVal < 0x80) {
    iVar2 = *(int *)((this->tScreen)._vf + 2);
    (**(code **)(iVar2 + 0x54))
              ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar2 + 0x50),0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawSliders__16tScreenCarSelectR8tCarInfoss(struct tScreenCarSelect *this /*$a0*/, struct tCarInfo *carInfo /*$s4*/, short x /*$a2*/, short y /*$s1*/)
 // line 1002, offset 0x8003c66c
	/* begin block 1 */
		// Start line: 1003
		// Start offset: 0x8003C66C
		// Variables:
	// 		short j; // $s2

		/* begin block 1.1 */
			// Start line: 1003
			// Start offset: 0x8003C66C

			/* begin block 1.1.1 */
				// Start line: 1006
				// Start offset: 0x8003C6B4

				/* begin block 1.1.1.1 */
					// Start line: 1008
					// Start offset: 0x8003C6C8
					// Variables:
				// 		enum tCarStatType carStat; // $v0
				// 		struct tCarInfo *carInfo; // $s4

					/* begin block 1.1.1.1.1 */
						// Start line: 1008
						// Start offset: 0x8003C6C8
						// Variables:
					// 		short result; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003C750
					// End Line: 1010
				/* end block 1.1.1.1 */
				// End offset: 0x8003C750
				// End Line: 1010
			/* end block 1.1.1 */
			// End offset: 0x8003C750
			// End Line: 1010
		/* end block 1.1 */
		// End offset: 0x8003C7B0
		// End Line: 1012
	/* end block 1 */
	// End offset: 0x8003C7B0
	// End Line: 1012

	/* begin block 2 */
		// Start line: 2124
	/* end block 2 */
	// End Line: 2125

	/* begin block 3 */
		// Start line: 2133
	/* end block 3 */
	// End Line: 2134

	/* begin block 4 */
		// Start line: 2133
	/* end block 4 */
	// End Line: 2134

void DrawSliders__16tScreenCarSelectR8tCarInfoss
               (tScreenCarSelect *this,tCarInfo *carInfo,short x,short y)

{
  byte bVar1;
  ushort value;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  
  uVar4 = (uint)(ushort)y;
  sVar5 = 0;
  while (iVar3 = (int)sVar5, iVar3 < 5) {
    FETextRender_MenuTextPositioned__Fsss14tMenuTextState13tMenuTextType
              (textVals[iVar3],x,(short)((uVar4 + 4) * 0x10000 >> 0x10),textState_Unselected,
               textType_NumTypes);
    bVar1 = carInfo->fUpgrades;
    pcVar2 = &carInfo->fCarID + remap[iVar3];
    value = (ushort)(byte)pcVar2[0x30];
    if ((bVar1 & 1) != 0) {
      value = (ushort)(byte)pcVar2[0x30] + (ushort)(byte)pcVar2[0x35];
    }
    if ((bVar1 & 2) != 0) {
      value = value + (ushort)(byte)pcVar2[0x3a];
    }
    if ((bVar1 & 4) != 0) {
      value = value + (ushort)(byte)pcVar2[0x3f];
    }
    DrawSlider__FsssssssssbT9ss
              (value,0,0xb,x,(int)(short)uVar4,0x68,3,7,3,(void *)0x0,(void *)0x0,0x80,0);
    uVar4 = uVar4 + 0xf;
    sVar5 = sVar5 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawForeground__16tScreenCarSelect(struct tScreenCarSelect *this /*$s3*/)
 // line 1015, offset 0x8003c7d8
	/* begin block 1 */
		// Start line: 1016
		// Start offset: 0x8003C7D8
		// Variables:
	// 		short i; // $s0
	// 		struct tCarInfo carInfo; // stack offset -288
	// 		short bShowStats; // $s1
	// 		struct tMenuItem *currentItem; // $s2
	// 		void * validCar; // $s5

		/* begin block 1.1 */
			// Start line: 1016
			// Start offset: 0x8003C7D8
			// Variables:
		// 		struct tFEApplication *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 1016
				// Start offset: 0x8003C7D8
			/* end block 1.1.1 */
			// End offset: 0x8003C7D8
			// End Line: 1016
		/* end block 1.1 */
		// End offset: 0x8003C7D8
		// End Line: 1016

		/* begin block 1.2 */
			// Start line: 1016
			// Start offset: 0x8003C7D8

			/* begin block 1.2.1 */
				// Start line: 1016
				// Start offset: 0x8003C7D8
			/* end block 1.2.1 */
			// End offset: 0x8003C7D8
			// End Line: 1016
		/* end block 1.2 */
		// End offset: 0x8003C7D8
		// End Line: 1016

		/* begin block 1.3 */
			// Start line: 1016
			// Start offset: 0x8003C7D8

			/* begin block 1.3.1 */
				// Start line: 1016
				// Start offset: 0x8003C7D8
			/* end block 1.3.1 */
			// End offset: 0x8003C7D8
			// End Line: 1016
		/* end block 1.3 */
		// End offset: 0x8003C7D8
		// End Line: 1016

		/* begin block 1.4 */
			// Start line: 1016
			// Start offset: 0x8003C7D8

			/* begin block 1.4.1 */
				// Start line: 1029
				// Start offset: 0x8003C864

				/* begin block 1.4.1.1 */
					// Start line: 1029
					// Start offset: 0x8003C864

					/* begin block 1.4.1.1.1 */
						// Start line: 1029
						// Start offset: 0x8003C864
					/* end block 1.4.1.1.1 */
					// End offset: 0x8003C864
					// End Line: 1029
				/* end block 1.4.1.1 */
				// End offset: 0x8003C864
				// End Line: 1029

				/* begin block 1.4.1.2 */
					// Start line: 1029
					// Start offset: 0x8003C864

					/* begin block 1.4.1.2.1 */
						// Start line: 1038
						// Start offset: 0x8003C8BC

						/* begin block 1.4.1.2.1.1 */
							// Start line: 1038
							// Start offset: 0x8003C8BC

							/* begin block 1.4.1.2.1.1.1 */
								// Start line: 1038
								// Start offset: 0x8003C8BC
							/* end block 1.4.1.2.1.1.1 */
							// End offset: 0x8003C8D4
							// End Line: 1038
						/* end block 1.4.1.2.1.1 */
						// End offset: 0x8003C8D4
						// End Line: 1038
					/* end block 1.4.1.2.1 */
					// End offset: 0x8003C8D4
					// End Line: 1038
				/* end block 1.4.1.2 */
				// End offset: 0x8003C8D4
				// End Line: 1038

				/* begin block 1.4.1.3 */
					// Start line: 1040
					// Start offset: 0x8003C8D4

					/* begin block 1.4.1.3.1 */
						// Start line: 1041
						// Start offset: 0x8003C8DC

						/* begin block 1.4.1.3.1.1 */
							// Start line: 1042
							// Start offset: 0x8003C8DC

							/* begin block 1.4.1.3.1.1.1 */
								// Start line: 1043
								// Start offset: 0x8003C8F0

								/* begin block 1.4.1.3.1.1.1.1 */
									// Start line: 1043
									// Start offset: 0x8003C8F0

									/* begin block 1.4.1.3.1.1.1.1.1 */
										// Start line: 1043
										// Start offset: 0x8003C8F0
									/* end block 1.4.1.3.1.1.1.1.1 */
									// End offset: 0x8003C8F0
									// End Line: 1043
								/* end block 1.4.1.3.1.1.1.1 */
								// End offset: 0x8003C8F0
								// End Line: 1043
							/* end block 1.4.1.3.1.1.1 */
							// End offset: 0x8003C8F0
							// End Line: 1043
						/* end block 1.4.1.3.1.1 */
						// End offset: 0x8003C8F0
						// End Line: 1047
					/* end block 1.4.1.3.1 */
					// End offset: 0x8003C8F0
					// End Line: 1047

					/* begin block 1.4.1.3.2 */
						// Start line: 1050
						// Start offset: 0x8003C8F8

						/* begin block 1.4.1.3.2.1 */
							// Start line: 1050
							// Start offset: 0x8003C8F8

							/* begin block 1.4.1.3.2.1.1 */
								// Start line: 1050
								// Start offset: 0x8003C8F8
							/* end block 1.4.1.3.2.1.1 */
							// End offset: 0x8003C8F8
							// End Line: 1050
						/* end block 1.4.1.3.2.1 */
						// End offset: 0x8003C8F8
						// End Line: 1050
					/* end block 1.4.1.3.2 */
					// End offset: 0x8003C8F8
					// End Line: 1050
				/* end block 1.4.1.3 */
				// End offset: 0x8003C8F8
				// End Line: 1050
			/* end block 1.4.1 */
			// End offset: 0x8003C8F8
			// End Line: 1050

			/* begin block 1.4.2 */
				// Start line: 1055
				// Start offset: 0x8003C920

				/* begin block 1.4.2.1 */
					// Start line: 1055
					// Start offset: 0x8003C920

					/* begin block 1.4.2.1.1 */
						// Start line: 1056
						// Start offset: 0x8003C928

						/* begin block 1.4.2.1.1.1 */
							// Start line: 1058
							// Start offset: 0x8003C938

							/* begin block 1.4.2.1.1.1.1 */
								// Start line: 1058
								// Start offset: 0x8003C938
							/* end block 1.4.2.1.1.1.1 */
							// End offset: 0x8003C938
							// End Line: 1058
						/* end block 1.4.2.1.1.1 */
						// End offset: 0x8003C938
						// End Line: 1058

						/* begin block 1.4.2.1.1.2 */
							// Start line: 1058
							// Start offset: 0x8003C938

							/* begin block 1.4.2.1.1.2.1 */
								// Start line: 1058
								// Start offset: 0x8003C938
							/* end block 1.4.2.1.1.2.1 */
							// End offset: 0x8003C938
							// End Line: 1058
						/* end block 1.4.2.1.1.2 */
						// End offset: 0x8003C938
						// End Line: 1058

						/* begin block 1.4.2.1.1.3 */
							// Start line: 1058
							// Start offset: 0x8003C938

							/* begin block 1.4.2.1.1.3.1 */
								// Start line: 1062
								// Start offset: 0x8003C960

								/* begin block 1.4.2.1.1.3.1.1 */
									// Start line: 1062
									// Start offset: 0x8003C960

									/* begin block 1.4.2.1.1.3.1.1.1 */
										// Start line: 1062
										// Start offset: 0x8003C960
									/* end block 1.4.2.1.1.3.1.1.1 */
									// End offset: 0x8003C960
									// End Line: 1062
								/* end block 1.4.2.1.1.3.1.1 */
								// End offset: 0x8003C960
								// End Line: 1062

								/* begin block 1.4.2.1.1.3.1.2 */
									// Start line: 1062
									// Start offset: 0x8003C960

									/* begin block 1.4.2.1.1.3.1.2.1 */
										// Start line: 1062
										// Start offset: 0x8003C960
									/* end block 1.4.2.1.1.3.1.2.1 */
									// End offset: 0x8003C960
									// End Line: 1062
								/* end block 1.4.2.1.1.3.1.2 */
								// End offset: 0x8003C960
								// End Line: 1062
							/* end block 1.4.2.1.1.3.1 */
							// End offset: 0x8003C960
							// End Line: 1062
						/* end block 1.4.2.1.1.3 */
						// End offset: 0x8003C960
						// End Line: 1062
					/* end block 1.4.2.1.1 */
					// End offset: 0x8003C960
					// End Line: 1062

					/* begin block 1.4.2.1.2 */
						// Start line: 1067
						// Start offset: 0x8003C97C

						/* begin block 1.4.2.1.2.1 */
							// Start line: 1067
							// Start offset: 0x8003C97C

							/* begin block 1.4.2.1.2.1.1 */
								// Start line: 1072
								// Start offset: 0x8003C998

								/* begin block 1.4.2.1.2.1.1.1 */
									// Start line: 1072
									// Start offset: 0x8003C998

									/* begin block 1.4.2.1.2.1.1.1.1 */
										// Start line: 1073
										// Start offset: 0x8003C9A0

										/* begin block 1.4.2.1.2.1.1.1.1.1 */
											// Start line: 1075
											// Start offset: 0x8003C9B0

											/* begin block 1.4.2.1.2.1.1.1.1.1.1 */
												// Start line: 1075
												// Start offset: 0x8003C9B0
											/* end block 1.4.2.1.2.1.1.1.1.1.1 */
											// End offset: 0x8003C9B0
											// End Line: 1075
										/* end block 1.4.2.1.2.1.1.1.1.1 */
										// End offset: 0x8003C9B0
										// End Line: 1075

										/* begin block 1.4.2.1.2.1.1.1.1.2 */
											// Start line: 1075
											// Start offset: 0x8003C9B0

											/* begin block 1.4.2.1.2.1.1.1.1.2.1 */
												// Start line: 1080
												// Start offset: 0x8003C9CC

												/* begin block 1.4.2.1.2.1.1.1.1.2.1.1 */
													// Start line: 1081
													// Start offset: 0x8003C9CC

													/* begin block 1.4.2.1.2.1.1.1.1.2.1.1.1 */
														// Start line: 1081
														// Start offset: 0x8003C9CC
													/* end block 1.4.2.1.2.1.1.1.1.2.1.1.1 */
													// End offset: 0x8003C9CC
													// End Line: 1081
												/* end block 1.4.2.1.2.1.1.1.1.2.1.1 */
												// End offset: 0x8003C9CC
												// End Line: 1081
											/* end block 1.4.2.1.2.1.1.1.1.2.1 */
											// End offset: 0x8003C9CC
											// End Line: 1081
										/* end block 1.4.2.1.2.1.1.1.1.2 */
										// End offset: 0x8003C9CC
										// End Line: 1081
									/* end block 1.4.2.1.2.1.1.1.1 */
									// End offset: 0x8003C9CC
									// End Line: 1081
								/* end block 1.4.2.1.2.1.1.1 */
								// End offset: 0x8003C9F4
								// End Line: 1086
							/* end block 1.4.2.1.2.1.1 */
							// End offset: 0x8003C9F4
							// End Line: 1086
						/* end block 1.4.2.1.2.1 */
						// End offset: 0x8003C9F4
						// End Line: 1086
					/* end block 1.4.2.1.2 */
					// End offset: 0x8003C9F4
					// End Line: 1086
				/* end block 1.4.2.1 */
				// End offset: 0x8003C9F4
				// End Line: 1086
			/* end block 1.4.2 */
			// End offset: 0x8003C9F4
			// End Line: 1086
		/* end block 1.4 */
		// End offset: 0x8003C9F4
		// End Line: 1086

		/* begin block 1.5 */
			// Start line: 1128
			// Start offset: 0x8003CB30

			/* begin block 1.5.1 */
				// Start line: 1128
				// Start offset: 0x8003CB30
				// Variables:
			// 		struct tFEApplication *this; // $v0

				/* begin block 1.5.1.1 */
					// Start line: 1128
					// Start offset: 0x8003CB30
				/* end block 1.5.1.1 */
				// End offset: 0x8003CB30
				// End Line: 1128
			/* end block 1.5.1 */
			// End offset: 0x8003CB30
			// End Line: 1128

			/* begin block 1.5.2 */
				// Start line: 1131
				// Start offset: 0x8003CB80

				/* begin block 1.5.2.1 */
					// Start line: 1132
					// Start offset: 0x8003CB80

					/* begin block 1.5.2.1.1 */
						// Start line: 1132
						// Start offset: 0x8003CB80
					/* end block 1.5.2.1.1 */
					// End offset: 0x8003CB80
					// End Line: 1132
				/* end block 1.5.2.1 */
				// End offset: 0x8003CB80
				// End Line: 1132
			/* end block 1.5.2 */
			// End offset: 0x8003CBA4
			// End Line: 1134
		/* end block 1.5 */
		// End offset: 0x8003CBA4
		// End Line: 1134

		/* begin block 1.6 */
			// Start line: 1137
			// Start offset: 0x8003CBA4

			/* begin block 1.6.1 */
				// Start line: 1149
				// Start offset: 0x8003CC1C
				// Variables:
			// 		int screenX; // stack offset -48
			// 		int screenY; // stack offset -44
			// 		int camRot; // stack offset -40
			// 		int cameraY; // stack offset -56
			// 		int cameraZ; // stack offset -52
			// 		int textID; // $s4
			// 		unsigned long textTicks; // $s1
			// 		long elapsedticks; // $t0
			// 		short knot1; // $a1
			// 		short knot2; // $a2
			// 		short knot3; // $a3
			// 		short knot4; // $t1
			// 		struct tDrawShapeExtended drawFlags; // stack offset -80
			// 		int textColor; // $s2
			// 		int fadeVal; // $t0

				/* begin block 1.6.1.1 */
					// Start line: 1150
					// Start offset: 0x8003CC1C

					/* begin block 1.6.1.1.1 */
						// Start line: 1150
						// Start offset: 0x8003CC1C
					/* end block 1.6.1.1.1 */
					// End offset: 0x8003CC1C
					// End Line: 1150
				/* end block 1.6.1.1 */
				// End offset: 0x8003CC1C
				// End Line: 1150

				/* begin block 1.6.1.2 */
					// Start line: 1150
					// Start offset: 0x8003CC1C

					/* begin block 1.6.1.2.1 */
						// Start line: 1167
						// Start offset: 0x8003CC54

						/* begin block 1.6.1.2.1.1 */
							// Start line: 1168
							// Start offset: 0x8003CC54

							/* begin block 1.6.1.2.1.1.1 */
								// Start line: 1168
								// Start offset: 0x8003CC54
							/* end block 1.6.1.2.1.1.1 */
							// End offset: 0x8003CC54
							// End Line: 1168
						/* end block 1.6.1.2.1.1 */
						// End offset: 0x8003CC54
						// End Line: 1168
					/* end block 1.6.1.2.1 */
					// End offset: 0x8003CD60
					// End Line: 1179
				/* end block 1.6.1.2 */
				// End offset: 0x8003CD60
				// End Line: 1179

				/* begin block 1.6.1.3 */
					// Start line: 1195
					// Start offset: 0x8003CDA4

					/* begin block 1.6.1.3.1 */
						// Start line: 1195
						// Start offset: 0x8003CDA4
					/* end block 1.6.1.3.1 */
					// End offset: 0x8003CDA4
					// End Line: 1195
				/* end block 1.6.1.3 */
				// End offset: 0x8003CDA4
				// End Line: 1195
			/* end block 1.6.1 */
			// End offset: 0x8003CFEC
			// End Line: 1250
		/* end block 1.6 */
		// End offset: 0x8003CFEC
		// End Line: 1250

		/* begin block 1.7 */
			// Start line: 1258
			// Start offset: 0x8003CFEC

			/* begin block 1.7.1 */
				// Start line: 1259
				// Start offset: 0x8003D008

				/* begin block 1.7.1.1 */
					// Start line: 1260
					// Start offset: 0x8003D008

					/* begin block 1.7.1.1.1 */
						// Start line: 1262
						// Start offset: 0x8003D024

						/* begin block 1.7.1.1.1.1 */
							// Start line: 1262
							// Start offset: 0x8003D024
						/* end block 1.7.1.1.1.1 */
						// End offset: 0x8003D024
						// End Line: 1262
					/* end block 1.7.1.1.1 */
					// End offset: 0x8003D024
					// End Line: 1262
				/* end block 1.7.1.1 */
				// End offset: 0x8003D068
				// End Line: 1265
			/* end block 1.7.1 */
			// End offset: 0x8003D068
			// End Line: 1265
		/* end block 1.7 */
		// End offset: 0x8003D068
		// End Line: 1265
	/* end block 1 */
	// End offset: 0x8003D068
	// End Line: 1265

	/* begin block 2 */
		// Start line: 2167
	/* end block 2 */
	// End Line: 2168

	/* begin block 3 */
		// Start line: 2171
	/* end block 3 */
	// End Line: 2172

	/* begin block 4 */
		// Start line: 2171
	/* end block 4 */
	// End Line: 2172

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */

void DrawForeground__16tScreenCarSelect(tScreenCarSelect *this)

{
  bool bVar1;
  tGlobalMenuDefs *ptVar2;
  void *reflection;
  int col1;
  char *sMenuText;
  int iVar3;
  uint uVar4;
  uint brightness;
  void *pvVar5;
  tTexture_ShapeInfo *ptVar6;
  tTexture_ShapeInfo **pptVar7;
  uchar *amount;
  int iVar8;
  uchar *elapsed;
  short bright;
  tMenu *ptVar9;
  int wordnum;
  float camerax;
  float cameray;
  tCarInfo local_120;
  tDrawShapeExtended tStack80;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [2];
  
  iVar8 = *(int *)((this->tScreen)._vf + 2);
  ptVar9 = *(tMenu **)(FEApp->fCurrentMenu[0] + *(int *)(FEApp->fCurrentMenu[0] + 8) * 4 + 0x10);
  iVar8 = (**(code **)(iVar8 + 0x6c))
                    ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar8 + 0x68),
                     &local_120);
  ptVar2 = menuDefs;
  bVar1 = false;
  (menuDefs->menuCarDealer).tMenu.fFlags = (menuDefs->menuCarDealer).tMenu.fFlags | 1;
  bright = *(short *)(this->fCurrentOverlays + 3);
  if (bright == 1) {
    bVar1 = ptVar9 == (tMenu *)&(ptVar2->itemTrackInfoContinue).tMenuItemGoToMenuButton.
                                fOnButtonPress;
    (ptVar2->menuTrackInfo).tMenu.fItemList[0xd] =
         (_func_21 *)((uint)(ptVar2->menuTrackInfo).tMenu.fItemList[0xd] & 0xfffffffe);
    if (((frontEnd.raceType == '\x02') && (frontEnd.tier == '\0')) &&
       (reflection = FECheat_IsCheatEnabled__F10tCheatCode(cheat_FinishedTournament),
       reflection != (void *)0x0)) {
      (menuDefs->menuCarDealer).tMenu.fFlags = (menuDefs->menuCarDealer).tMenu.fFlags & 0xfffffffe;
    }
    if ((iVar8 == 0) || (4 < local_120.fCarClass)) {
      (menuDefs->menuTrackInfo).tMenu.fItemList[0xd] =
           (_func_21 *)((uint)(menuDefs->menuTrackInfo).tMenu.fItemList[0xd] | 1);
      this->fOverlays[4].transition = -1;
    }
    else {
      this->fOverlays[4].transition = 1;
    }
  }
  else {
    if (bright == 0) {
      bVar1 = ptVar9 == (tMenu *)&(ptVar2->menuTrackOptions).tMenuNFS4.tMenu.fChildMenu;
      brightness = *(uint *)((ptVar2->menuTrackRecordsItem).tMenuItemGoToMenuNFS4Button.
                             tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf + 4);
      *(uint *)&(ptVar2->menuTrackOptions).tMenuNFS4.fNumItems =
           *(uint *)&(ptVar2->menuTrackOptions).tMenuNFS4.fNumItems & 0xfffffffe;
      *(uint *)((ptVar2->menuTrackRecordsItem).tMenuItemGoToMenuNFS4Button.tMenuItemGoToMenuButton.
                tMenuItemInteractive.tMenuItem._vf + 4) = brightness & 0xfffffffe;
      if (local_120.fCarClass == 7) {
        brightness = *(uint *)((ptVar2->menuTrackRecordsItem).tMenuItemGoToMenuNFS4Button.
                               tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf + 4);
        *(uint *)&(ptVar2->menuTrackOptions).tMenuNFS4.fNumItems =
             *(uint *)&(ptVar2->menuTrackOptions).tMenuNFS4.fNumItems | 1;
        *(uint *)((ptVar2->menuTrackRecordsItem).tMenuItemGoToMenuNFS4Button.tMenuItemGoToMenuButton
                  .tMenuItemInteractive.tMenuItem._vf + 4) = brightness | 1;
      }
    }
    else {
      if (bright == 2) {
        if (ptVar9 == (tMenu *)((ptVar2->menuPlayerTwoGarage).tMenuNFS4.tMenu.fItemList + 0xe)) {
          bVar1 = true;
        }
      }
      else {
        if (bright == 3) {
          bVar1 = ptVar9 == (tMenu *)&ptVar2->itemPlayerTwoPinkSlipRace;
          (ptVar2->itemPlayerTwoPinkSlipRace).fOrdinalPos =
               (ptVar2->itemPlayerTwoPinkSlipRace).fOrdinalPos & 0xfffffffe;
          if (iVar8 == 0) {
            this->fOverlays[4].transition = -1;
            (ptVar2->itemPlayerTwoPinkSlipRace).fOrdinalPos =
                 (ptVar2->itemPlayerTwoPinkSlipRace).fOrdinalPos | 1;
          }
          else {
            this->fOverlays[4].transition = 1;
          }
        }
        else {
          if (bright == 4) {
            bVar1 = true;
          }
        }
      }
    }
  }
  if (iVar8 == 0) {
    bVar1 = false;
  }
  bright = 1;
  if (!bVar1) {
    bright = -1;
  }
  this->fOverlays[6].transition = bright;
  wordnum = 0;
  col1 = 0;
  do {
    col1 = col1 >> 0x10;
    pptVar7 = &(this->tScreen).fPermShapes.fShapes + col1;
    ptVar6 = pptVar7[0x43];
    if (ptVar6 == (tTexture_ShapeInfo *)0x0) {
LAB_8003ca88:
      if (-1 < (int)gStateOverlays[col1 + (int)*(short *)(this->fCurrentOverlays + 3) * 4]) {
        ptVar6 = (tTexture_ShapeInfo *)
                 ((this->tScreen)._vf +
                 (int)gStateOverlays[col1 + (int)*(short *)(this->fCurrentOverlays + 3) * 4] * 0x18
                 + 6);
        pptVar7[0x43] = ptVar6;
        *(undefined2 *)&ptVar6->next = 0;
        pptVar7[0x43]->width = 1;
      }
    }
    else {
      if (((int)ptVar6->height !=
           (int)gStateOverlays[col1 + (int)*(short *)(this->fCurrentOverlays + 3) * 4]) &&
         (ptVar6->width = -1, *(short *)&pptVar7[0x43]->next < 1)) {
        pptVar7[0x43] = (tTexture_ShapeInfo *)0x0;
        goto LAB_8003ca88;
      }
    }
    wordnum = wordnum + 1;
    col1 = wordnum * 0x10000;
  } while (wordnum * 0x10000 >> 0x10 < 4);
  wordnum = 1;
  col1 = 0x10000;
  do {
    DrawOverlay__16tScreenCarSelectP8tOverlay
              (this,*(tOverlay **)((int)&this->fOverlays[6].direction + (col1 >> 0xe)));
    wordnum = wordnum + 1;
    col1 = wordnum * 0x10000;
  } while (wordnum * 0x10000 >> 0x10 < 4);
  if (iVar8 == 0) {
    local_120.fCarID = -1;
  }
  col1 = *(int *)((this->tScreen)._vf + 2);
  (**(code **)(col1 + 100))
            ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(col1 + 0x60),&local_120);
  if (*(int *)(((&gCarObj2)[(uint)*(byte *)&(FEApp->helpPopup).numItems]->render).palCopyNum + 0xd)
      != 0) {
    SetBrightness__16tScreenCarSelectss(this,0,0);
    TurnOff__10tVideoWall((tVideoWall *)&this->tvConfigs[9].flip_axis);
    *(uchar **)this->fDestBrightness = ticks;
  }
  UpdateBrightness__16tScreenCarSelects(this,0);
  if (1 < (uint)*(ushort *)(this->fCurrentOverlays + 3) - 5) {
    showRoomFlag = (void *)0x0;
    this->fSplineInterval = this->fSplineInterval + 3;
    DrawCar__FR8tCarInfossffcbUl7tPlayer
              (&local_120,0x13a,0x54,camerax,cameray,0x40800000,(void *)0xc0f00000,
               (uint)*(byte *)&this->fVideoWall[1].fUpdated,kPlayerTwo);
    goto LAB_8003cff0;
  }
  local_30 = 0;
  local_2c = 0;
  local_28[0] = 0;
  local_38 = 0;
  elapsed = ticks + (-0x100 - this->fShowroomTicks);
  local_34 = 0;
  if ((-1 < (int)elapsed) && (-1 < (int)local_120.fSpeechCarID)) {
    col1 = (int)elapsed >> 9;
    wordnum = col1 + ((col1 / 0x13 + (col1 >> 0x1f)) - ((int)elapsed >> 0x1f)) * -0x13 + 0x3e4 +
              (int)local_120.fSpeechCarID * 0x13;
    elapsed = elapsed + col1 * -0x200;
    col1 = TextSys_WordFlags__Fi(wordnum * 0x10000 >> 0x10);
    col1 = kRGBVals[(uint)(byte)(&CHAR_09h_800515bc)[col1 * 6]];
    if (elapsed < (uchar *)0x80) {
      amount = (uchar *)(0x80 - (int)elapsed);
LAB_8003cd10:
      col1 = CalcFadeVal__Fii(col1,(int)amount);
    }
    else {
      amount = elapsed + -0x180;
      if (0x200U - (int)elapsed < 0x80) goto LAB_8003cd10;
    }
    sMenuText = TextSys_Word__Fi(wordnum);
    iVar3 = TextSys_WordX__Fi(wordnum);
    wordnum = TextSys_WordY__Fi(wordnum);
    FETextRender_FullTextRGB__FPcssics(sMenuText,(short)iVar3,(short)wordnum,col1,0,0);
  }
  tStack80.tint[0] = &DAT_00551e00;
  tStack80.custom_shapes = (this->tScreen).fSwapShapes.fShapes;
  brightness = this->fShowroomTicks;
  col1 = 0x80;
  if (0x100 < brightness) {
    if (brightness < 0x181) {
      col1 = 0x180 - brightness;
    }
    else {
      col1 = 0;
    }
  }
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(10,0x200,0,0,col1,0,&tStack80);
  elapsed = ticks + -(int)this->fInShowroom;
  while (600 < (int)elapsed) {
    pvVar5 = this->fSpeechPlayed;
    this->fInShowroom = (void *)((int)this->fInShowroom + 600);
    reflection = (void *)((int)pvVar5 + 1);
    this->fSpeechPlayed = reflection;
    elapsed = elapsed + -600;
    if (6 < (int)reflection) {
      this->fSpeechPlayed = (void *)((int)pvVar5 + -4);
    }
  }
  brightness = (uint)*(ushort *)&this->fSpeechPlayed;
  gRotateOffset = 0;
  if (6 < (short)*(ushort *)&this->fSpeechPlayed) {
    brightness = brightness - 5;
    gRotateOffset = 0x4000000;
  }
  col1 = brightness + 1;
  INT_80052c1c = gRotateOffset;
  if (6 < col1 * 0x10000 >> 0x10) {
    col1 = brightness - 4;
    INT_80052c1c = gRotateOffset + 0x4000000;
  }
  wordnum = col1 + 1;
  INT_80052c20 = INT_80052c1c;
  if (6 < wordnum * 0x10000 >> 0x10) {
    wordnum = col1 + -4;
    INT_80052c20 = INT_80052c1c + 0x4000000;
  }
  bright = (short)(wordnum + 1);
  INT_80052c24 = INT_80052c20;
  if (6 < (wordnum + 1) * 0x10000 >> 0x10) {
    bright = (short)wordnum + -4;
    INT_80052c24 = INT_80052c20 + 0x4000000;
  }
  CalcSplinePosition__16tScreenCarSelectiiiiUlRiN46
            (this,(int)(short)brightness,(int)(short)col1,(int)(short)wordnum,(int)bright,
             (ulong)elapsed,&local_38,&local_34,&local_30,&local_2c,local_28);
  showRoomFlag = &DAT_00000001;
  brightness = __floatsisf(local_38);
  brightness = __mulsf3(brightness,0x37800000);
  uVar4 = __floatsisf(local_34);
  reflection = (void *)__mulsf3(uVar4,0x37800000);
  DrawCar__FR8tCarInfossffcbUl7tPlayer
            (&local_120,(short)local_30,(short)local_2c,camerax,cameray,brightness,reflection,
             (uint)*(byte *)&this->fVideoWall[1].fUpdated,kPlayerTwo);
  if ((((iVar8 != 0) && (elapsed = gettick(), (uchar *)0x280 < elapsed + -this->fShowroomTicks)) &&
      (this->fSpeechTicks == 0)) && (-1 < local_120.fSpeechCarID)) {
    this->fSpeechTicks = 1;
    FeAudio_AsyncPlaySpeech__Fii(0,(int)local_120.fSpeechCarID);
  }
LAB_8003cff0:
  if (((*(int *)((gCarObj2->render).palCopyNum + 0xd) == 0) &&
      (bright = *(short *)&this->fVideoWall[1].fUpdated, bright == this->fBrightness[0])) &&
     ((bright == 0 && (0x80 < (int)(ticks + -*(int *)this->fDestBrightness))))) {
    bright = 0x20;
    if (local_120.fAvailable != '\0') {
      bright = 0x80;
    }
    SetBrightness__16tScreenCarSelectss(this,bright,0);
    TurnOn__10tVideoWall((tVideoWall *)&this->tvConfigs[9].flip_axis);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PreLoad__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this /*$s3*/)
 // line 1272, offset 0x8003d08c
	/* begin block 1 */
		// Start line: 1273
		// Start offset: 0x8003D08C
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -264
	// 		char buffer[32]; // stack offset -56
	/* end block 1 */
	// End offset: 0x8003D128
	// End Line: 1289

	/* begin block 2 */
		// Start line: 2717
	/* end block 2 */
	// End Line: 2718

	/* begin block 3 */
		// Start line: 2725
	/* end block 3 */
	// End Line: 2726

	/* begin block 4 */
		// Start line: 2725
	/* end block 4 */
	// End Line: 2726

void PreLoad__20tScreenCarSelectDuel(tScreenCarSelectDuel *this)

{
  char *pcVar1;
  int iVar2;
  tCarInfo tStack264;
  char acStack56 [32];
  
  this->fOpponentTVsInitialized = (void *)0x0;
  InitializeShapes__7tScreenR17tShapeInformationUi
            ((tScreen *)this,(tShapeInformation *)&this->fOpponentTVsInitialized,5);
  PreLoad__7tScreen((tScreen *)this);
  pcVar1 = Platform_GetDCTBuffer__FiPc((int)&DAT_00003e80,s_VideoWall_80011ae0);
  (this->tScreenCarSelect).tScreen.fSwapShapes.fDestFile = pcVar1;
  pcVar1 = Platform_GetDCTBuffer__FiPc((int)&DAT_00003e80,s_OpponentVid_80011b18);
  iVar2 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  (this->fOpponentShapes).fFile = pcVar1;
  iVar2 = (**(code **)(iVar2 + 0x6c))
                    ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
                     (int)*(short *)(iVar2 + 0x68),&tStack264);
  if (iVar2 != 1) {
    GetStockCar__11tCarManagersR8tCarInfo(&carManager,0,&tStack264);
  }
  sprintf(acStack56,(char *)&PTR_DAT_80011b24,tStack264.fSmallName);
  AsyncLoadShapeFile__7tScreenPcR17tShapeInformation
            ((tScreen *)this,acStack56,&(this->tScreenCarSelect).tScreen.fSwapShapes);
  GetStockCar__11tCarManagersR8tCarInfo(&carManager,(ushort)(byte)frontEnd.oppCar,&tStack264);
  sprintf(acStack56,(char *)&PTR_DAT_80011b24,tStack264.fSmallName);
  AsyncLoadShapeFile__7tScreenPcR17tShapeInformation
            ((tScreen *)this,acStack56,(tShapeInformation *)&this->fOpponentTVsInitialized);
  *(undefined4 *)&this->fPreviousOpponent = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AllocateAsyncBuffer__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this /*$a0*/)
 // line 1300, offset 0x8003d1b4
	/* begin block 1 */
		// Start line: 1301
		// Start offset: 0x8003D1B4
	/* end block 1 */
	// End offset: 0x8003D1B4
	// End Line: 1301

	/* begin block 2 */
		// Start line: 2786
	/* end block 2 */
	// End Line: 2787

	/* begin block 3 */
		// Start line: 2790
	/* end block 3 */
	// End Line: 2791

	/* begin block 4 */
		// Start line: 2790
	/* end block 4 */
	// End Line: 2791

	/* begin block 5 */
		// Start line: 2791
	/* end block 5 */
	// End Line: 2792

	/* begin block 6 */
		// Start line: 2791
	/* end block 6 */
	// End Line: 2792

void AllocateAsyncBuffer__20tScreenCarSelectDuel(tScreenCarSelectDuel *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeAsyncBuffer__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this /*$s0*/)
 // line 1304, offset 0x8003d1bc
	/* begin block 1 */
		// Start line: 1305
		// Start offset: 0x8003D1BC
	/* end block 1 */
	// End offset: 0x8003D1BC
	// End Line: 1305

	/* begin block 2 */
		// Start line: 2795
	/* end block 2 */
	// End Line: 2796

	/* begin block 3 */
		// Start line: 2798
	/* end block 3 */
	// End Line: 2799

	/* begin block 4 */
		// Start line: 2798
	/* end block 4 */
	// End Line: 2799

void FreeAsyncBuffer__20tScreenCarSelectDuel(tScreenCarSelectDuel *this)

{
  Platform_ResetDCTBuffer__Fv();
  (this->tScreenCarSelect).tScreen.fSwapShapes.fDestFile = (char *)0x0;
  (this->fOpponentShapes).fFile = (char *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitializeVideoWall__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this /*$s2*/)
 // line 1312, offset 0x8003d1e8
	/* begin block 1 */
		// Start line: 1313
		// Start offset: 0x8003D1E8
	/* end block 1 */
	// End offset: 0x8003D2E4
	// End Line: 1335

	/* begin block 2 */
		// Start line: 2810
	/* end block 2 */
	// End Line: 2811

	/* begin block 3 */
		// Start line: 2814
	/* end block 3 */
	// End Line: 2815

	/* begin block 4 */
		// Start line: 2814
	/* end block 4 */
	// End Line: 2815

void InitializeVideoWall__20tScreenCarSelectDuel(tScreenCarSelectDuel *this)

{
  tVideoWall *this_00;
  tVideoWall *this_01;
  
  this_01 = (tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis;
  Initialize__10tVideoWallP9tTVConfigP18tTexture_ShapeInfossPss
            (this_01,(tTVConfig *)&(this->tScreenCarSelect).fPreviousCarID,
             (this->tScreenCarSelect).tScreen.fSwapShapes.fShapes,0,5,tvSplitOrder,0);
  SetAvailableText__10tVideoWallsss(this_01,0xf8,0x10e,0x2d);
  if (((this->tScreenCarSelect).tScreen.fSwapShapes.fFlags & 1) != 0) {
    SetOffset__10tVideoWallss(this_01,6,0);
    UpdateImages__10tVideoWall(this_01);
    (this->tScreenCarSelect).fFadeTicks[1] = 1;
  }
  this_00 = (tVideoWall *)&(this->tScreenCarSelect).fVideoWall[0].fUpdated;
  Initialize__10tVideoWallP9tTVConfigP18tTexture_ShapeInfossPss
            (this_00,(tTVConfig *)&(this->tScreenCarSelect).tvConfigs[4].flip_axis,
             (tTexture_ShapeInfo *)this->fOpponentTVsInitialized,0,5,tvSplitOrder,0);
  SetAvailableText__10tVideoWallsss(this_01,0xf8,0x10e,0x96);
  if ((*(ushort *)((int)&(this->fOpponentShapes).async_handle + 2) & 1) != 0) {
    SetOffset__10tVideoWallss(this_00,6,0x69);
    UpdateImages__10tVideoWall(this_00);
    (this->tScreenCarSelect).fFadeTicks[1] = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this /*$s0*/)
 // line 1339, offset 0x8003d304
	/* begin block 1 */
		// Start line: 1340
		// Start offset: 0x8003D304
	/* end block 1 */
	// End offset: 0x8003D304
	// End Line: 1340

	/* begin block 2 */
		// Start line: 2869
	/* end block 2 */
	// End Line: 2870

	/* begin block 3 */
		// Start line: 2874
	/* end block 3 */
	// End Line: 2875

	/* begin block 4 */
		// Start line: 2874
	/* end block 4 */
	// End Line: 2875

void Initialize__20tScreenCarSelectDuel(tScreenCarSelectDuel *this)

{
  Initialize__16tScreenCarSelect((tScreenCarSelect *)this);
  *(undefined2 *)((this->tScreenCarSelect).fCurrentOverlays + 3) = 0;
  gShowroomLights = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this /*$s0*/)
 // line 1346, offset 0x8003d334
	/* begin block 1 */
		// Start line: 1347
		// Start offset: 0x8003D334
	/* end block 1 */
	// End offset: 0x8003D334
	// End Line: 1347

	/* begin block 2 */
		// Start line: 2884
	/* end block 2 */
	// End Line: 2885

	/* begin block 3 */
		// Start line: 2888
	/* end block 3 */
	// End Line: 2889

	/* begin block 4 */
		// Start line: 2888
	/* end block 4 */
	// End Line: 2889

void Cleanup__20tScreenCarSelectDuel(tScreenCarSelectDuel *this)

{
  FreeShapes__7tScreenR17tShapeInformation
            ((tScreen *)this,(tShapeInformation *)&this->fOpponentTVsInitialized);
  Cleanup__16tScreenCarSelect((tScreenCarSelect *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawVideoWall__20tScreenCarSelectDuels(struct tScreenCarSelectDuel *this /*$s2*/, short y /*$a1*/)
 // line 1352, offset 0x8003d364
	/* begin block 1 */
		// Start line: 1353
		// Start offset: 0x8003D364
		// Variables:
	// 		void * validCar; // $s3
	// 		struct tCarInfo carInfo; // stack offset -232
	// 		short i; // $s1
	/* end block 1 */
	// End offset: 0x8003D470
	// End Line: 1380

	/* begin block 2 */
		// Start line: 2896
	/* end block 2 */
	// End Line: 2897

	/* begin block 3 */
		// Start line: 2900
	/* end block 3 */
	// End Line: 2901

	/* begin block 4 */
		// Start line: 2900
	/* end block 4 */
	// End Line: 2901

void DrawVideoWall__20tScreenCarSelectDuels(tScreenCarSelectDuel *this,short y)

{
  short valid;
  int iVar1;
  tVideoWall *this_00;
  int iVar2;
  undefined auStack232 [7];
  byte local_e1;
  
  iVar1 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  iVar2 = 0;
  valid = (**(code **)(iVar1 + 0x6c))
                    ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
                     (int)*(short *)(iVar1 + 0x68),auStack232);
  iVar1 = 0;
  do {
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (iVar1 >> 0x10,0,0,-(int)y,(int)(this->tScreenCarSelect).tScreen.fScreenFadeVal,0,
               (tDrawShapeExtended *)0x0);
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 0x10000;
  } while (iVar2 * 0x10000 >> 0x10 < 0xc);
  if ((0 < (this->tScreenCarSelect).tScreen.fScreenFadeVal) &&
     ((this->tScreenCarSelect).tScreen.fTransitionOff != (void *)0x0)) {
    TurnOffInstant__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis);
    SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,0,0);
  }
  this_00 = (tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis;
  if ((((this->tScreenCarSelect).tScreen.fSwapShapes.fFlags & 1) != 0) &&
     ((this->tScreenCarSelect).fFadeTicks[1] == 0)) {
    SetOffset__10tVideoWallss(this_00,6,0);
    UpdateImages__10tVideoWall(this_00);
    (this->tScreenCarSelect).fFadeTicks[1] = 1;
  }
  this_00 = (tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis;
  UpdateTransition__10tVideoWall(this_00);
  SetValid__10tVideoWalls(this_00,valid);
  SetAvailable__10tVideoWalls(this_00,(ushort)local_e1);
  Draw__10tVideoWall(this_00);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawOpponentVideoWall__20tScreenCarSelectDuels(struct tScreenCarSelectDuel *this /*$s1*/, short y /*$a1*/)
 // line 1387, offset 0x8003d4bc
	/* begin block 1 */
		// Start line: 1388
		// Start offset: 0x8003D4BC
		// Variables:
	// 		short i; // $s0
	/* end block 1 */
	// End offset: 0x8003D59C
	// End Line: 1411

	/* begin block 2 */
		// Start line: 2974
	/* end block 2 */
	// End Line: 2975

	/* begin block 3 */
		// Start line: 2978
	/* end block 3 */
	// End Line: 2979

	/* begin block 4 */
		// Start line: 2978
	/* end block 4 */
	// End Line: 2979

void DrawOpponentVideoWall__20tScreenCarSelectDuels(tScreenCarSelectDuel *this,short y)

{
  int iVar1;
  int iVar2;
  tVideoWall *this_00;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (iVar1 >> 0x10,0,0,-(int)y,(int)(this->tScreenCarSelect).tScreen.fScreenFadeVal,0,
               (tDrawShapeExtended *)0x0);
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 0x10000;
  } while (iVar2 * 0x10000 >> 0x10 < 0xc);
  if ((0 < (this->tScreenCarSelect).tScreen.fScreenFadeVal) &&
     ((this->tScreenCarSelect).tScreen.fTransitionOff != (void *)0x0)) {
    TurnOffInstant__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).fVideoWall[0].fUpdated);
    SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,0,1);
  }
  this_00 = (tVideoWall *)&(this->tScreenCarSelect).fVideoWall[0].fUpdated;
  if ((((this->tScreenCarSelect).tScreen.fSwapShapes.fFlags & 1) != 0) &&
     (*(int *)&this->fPreviousOpponent == 0)) {
    SetOffset__10tVideoWallss(this_00,6,0x69);
    UpdateImages__10tVideoWall(this_00);
    *(undefined4 *)&this->fPreviousOpponent = 1;
  }
  this_00 = (tVideoWall *)&(this->tScreenCarSelect).fVideoWall[0].fUpdated;
  UpdateTransition__10tVideoWall(this_00);
  SetValid__10tVideoWalls(this_00,1);
  SetAvailable__10tVideoWalls(this_00,1);
  Draw__10tVideoWall(this_00);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__20tScreenCarSelectDuelRsT1PPcT3(struct tScreenCarSelectDuel *this /*$s0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$s1*/, char **swapFileName /*stack 16*/)
 // line 1418, offset 0x8003d5e0
	/* begin block 1 */
		// Start line: 1419
		// Start offset: 0x8003D5E0
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -224
	/* end block 1 */
	// End offset: 0x8003D640
	// End Line: 1427

	/* begin block 2 */
		// Start line: 3044
	/* end block 2 */
	// End Line: 3045

	/* begin block 3 */
		// Start line: 3048
	/* end block 3 */
	// End Line: 3049

	/* begin block 4 */
		// Start line: 3048
	/* end block 4 */
	// End Line: 3049

void GetShapeInfo__20tScreenCarSelectDuelRsT1PPcT3
               (tScreenCarSelectDuel *this,short *numPermShapes,short *numSwapShapes,
               char **permFileName,char **swapFileName)

{
  int iVar1;
  tCarInfo local_e0;
  
  *numPermShapes = 0x34;
  *numSwapShapes = 5;
  iVar1 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  iVar1 = (**(code **)(iVar1 + 0x6c))
                    ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
                     (int)*(short *)(iVar1 + 0x68),&local_e0);
  if (iVar1 != 1) {
    GetStockCar__11tCarManagersR8tCarInfo(&carManager,0,&local_e0);
  }
  *(ushort *)((int)(this->tScreenCarSelect).fCurrentOverlays + 0xe) = (ushort)local_e0.fCarIndex;
  (this->tScreenCarSelect).fState = (short)local_e0.fCarID;
  *(undefined2 *)&(this->tScreenCarSelect).fCameraRotation = 0xffff;
  (this->tScreenCarSelect).fPreviousCar = (ushort)local_e0.fCountry;
  *permFileName = s_zDuel_80011b28;
  *swapFileName = (char *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateVideoWall__20tScreenCarSelectDuelR8tCarInfo(struct tScreenCarSelectDuel *this /*$s1*/, struct tCarInfo *carInfo /*$s0*/)
 // line 1438, offset 0x8003d69c
	/* begin block 1 */
		// Start line: 1439
		// Start offset: 0x8003D69C
	/* end block 1 */
	// End offset: 0x8003D758
	// End Line: 1451

	/* begin block 2 */
		// Start line: 3097
	/* end block 2 */
	// End Line: 3098

	/* begin block 3 */
		// Start line: 3102
	/* end block 3 */
	// End Line: 3103

	/* begin block 4 */
		// Start line: 3102
	/* end block 4 */
	// End Line: 3103

void UpdateVideoWall__20tScreenCarSelectDuelR8tCarInfo(tScreenCarSelectDuel *this,tCarInfo *carInfo)

{
  byte bVar1;
  
  if ((((uint)carInfo->fCarIndex !=
        (int)*(short *)((int)(this->tScreenCarSelect).fCurrentOverlays + 0xe)) ||
      ((int)carInfo->fCarID != (int)(this->tScreenCarSelect).fState)) ||
     ((carInfo->fCarClass == '\a' &&
      ((int)(this->tScreenCarSelect).fPreviousCar != (uint)carInfo->fCountry)))) {
    if (-1 < carInfo->fCarID) {
      AsyncLoadSwapShapeFile__7tScreenPc((tScreen *)this,carInfo->fSmallName);
    }
    *(ushort *)((int)(this->tScreenCarSelect).fCurrentOverlays + 0xe) = (ushort)carInfo->fCarIndex;
    (this->tScreenCarSelect).fState = (short)carInfo->fCarID;
    bVar1 = carInfo->fCountry;
    (this->tScreenCarSelect).fFadeTicks[1] = 0;
    (this->tScreenCarSelect).fPreviousCar = (ushort)bVar1;
    SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,0,0);
    TurnOff__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateOpponentVideoWall__20tScreenCarSelectDuelR8tCarInfo(struct tScreenCarSelectDuel *this /*$s0*/, struct tCarInfo *carInfo /*$s1*/)
 // line 1455, offset 0x8003d76c
	/* begin block 1 */
		// Start line: 1456
		// Start offset: 0x8003D76C
		// Variables:
	// 		char buffer[32]; // stack offset -48
	/* end block 1 */
	// End offset: 0x8003D7DC
	// End Line: 1467

	/* begin block 2 */
		// Start line: 3140
	/* end block 2 */
	// End Line: 3141

	/* begin block 3 */
		// Start line: 3145
	/* end block 3 */
	// End Line: 3146

	/* begin block 4 */
		// Start line: 3145
	/* end block 4 */
	// End Line: 3146

void UpdateOpponentVideoWall__20tScreenCarSelectDuelR8tCarInfo
               (tScreenCarSelectDuel *this,tCarInfo *carInfo)

{
  char acStack48 [32];
  
  if ((uint)carInfo->fCarIndex != (int)*(short *)&(this->tScreenCarSelect).fCameraRotation) {
    sprintf(acStack48,(char *)&PTR_DAT_80011b24,carInfo->fSmallName);
    AsyncLoadShapeFile__7tScreenPcR17tShapeInformation
              ((tScreen *)this,acStack48,(tShapeInformation *)&this->fOpponentTVsInitialized);
    *(undefined4 *)&this->fPreviousOpponent = 0;
    *(ushort *)&(this->tScreenCarSelect).fCameraRotation = (ushort)carInfo->fCarIndex;
    SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,0,1);
    TurnOff__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).fVideoWall[0].fUpdated);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this /*$s1*/)
 // line 1471, offset 0x8003d7f0
	/* begin block 1 */
		// Start line: 1472
		// Start offset: 0x8003D7F0
		// Variables:
	// 		struct RECT r; // stack offset -240
	// 		struct tCarInfo carInfo; // stack offset -232
	// 		struct DRAWENV *drenv; // $s2
	// 		struct DR_AREA *daprim; // $a0
	// 		struct RECT temp; // stack offset -24
	// 		void * validCar; // $s2

		/* begin block 1.1 */
			// Start line: 1472
			// Start offset: 0x8003D7F0

			/* begin block 1.1.1 */
				// Start line: 1505
				// Start offset: 0x8003D940

				/* begin block 1.1.1.1 */
					// Start line: 1505
					// Start offset: 0x8003D940
				/* end block 1.1.1.1 */
				// End offset: 0x8003D940
				// End Line: 1505
			/* end block 1.1.1 */
			// End offset: 0x8003D940
			// End Line: 1505

			/* begin block 1.1.2 */
				// Start line: 1505
				// Start offset: 0x8003D968

				/* begin block 1.1.2.1 */
					// Start line: 1505
					// Start offset: 0x8003D968
				/* end block 1.1.2.1 */
				// End offset: 0x8003D968
				// End Line: 1505
			/* end block 1.1.2 */
			// End offset: 0x8003D968
			// End Line: 1505
		/* end block 1.1 */
		// End offset: 0x8003D9D0
		// End Line: 1511

		/* begin block 1.2 */
			// Start line: 1514
			// Start offset: 0x8003D9D0

			/* begin block 1.2.1 */
				// Start line: 1520
				// Start offset: 0x8003D9FC

				/* begin block 1.2.1.1 */
					// Start line: 1520
					// Start offset: 0x8003D9FC
				/* end block 1.2.1.1 */
				// End offset: 0x8003D9FC
				// End Line: 1520
			/* end block 1.2.1 */
			// End offset: 0x8003D9FC
			// End Line: 1520

			/* begin block 1.2.2 */
				// Start line: 1521
				// Start offset: 0x8003DA18

				/* begin block 1.2.2.1 */
					// Start line: 1522
					// Start offset: 0x8003DA18

					/* begin block 1.2.2.1.1 */
						// Start line: 1522
						// Start offset: 0x8003DA18
					/* end block 1.2.2.1.1 */
					// End offset: 0x8003DA18
					// End Line: 1522
				/* end block 1.2.2.1 */
				// End offset: 0x8003DA18
				// End Line: 1522
			/* end block 1.2.2 */
			// End offset: 0x8003DA38
			// End Line: 1524
		/* end block 1.2 */
		// End offset: 0x8003DA38
		// End Line: 1524

		/* begin block 1.3 */
			// Start line: 1526
			// Start offset: 0x8003DA38

			/* begin block 1.3.1 */
				// Start line: 1533
				// Start offset: 0x8003DAA8

				/* begin block 1.3.1.1 */
					// Start line: 1534
					// Start offset: 0x8003DAA8

					/* begin block 1.3.1.1.1 */
						// Start line: 1536
						// Start offset: 0x8003DAC4

						/* begin block 1.3.1.1.1.1 */
							// Start line: 1536
							// Start offset: 0x8003DAC4
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x8003DAC4
						// End Line: 1536
					/* end block 1.3.1.1.1 */
					// End offset: 0x8003DAC4
					// End Line: 1536
				/* end block 1.3.1.1 */
				// End offset: 0x8003DAF4
				// End Line: 1539
			/* end block 1.3.1 */
			// End offset: 0x8003DAF4
			// End Line: 1539
		/* end block 1.3 */
		// End offset: 0x8003DAF4
		// End Line: 1539

		/* begin block 1.4 */
			// Start line: 1567
			// Start offset: 0x8003DC40

			/* begin block 1.4.1 */
				// Start line: 1569
				// Start offset: 0x8003DC78

				/* begin block 1.4.1.1 */
					// Start line: 1569
					// Start offset: 0x8003DC78
				/* end block 1.4.1.1 */
				// End offset: 0x8003DC78
				// End Line: 1569
			/* end block 1.4.1 */
			// End offset: 0x8003DC78
			// End Line: 1569

			/* begin block 1.4.2 */
				// Start line: 1570
				// Start offset: 0x8003DC94

				/* begin block 1.4.2.1 */
					// Start line: 1571
					// Start offset: 0x8003DC94

					/* begin block 1.4.2.1.1 */
						// Start line: 1571
						// Start offset: 0x8003DC94
					/* end block 1.4.2.1.1 */
					// End offset: 0x8003DC94
					// End Line: 1571
				/* end block 1.4.2.1 */
				// End offset: 0x8003DC94
				// End Line: 1571
			/* end block 1.4.2 */
			// End offset: 0x8003DCB4
			// End Line: 1573
		/* end block 1.4 */
		// End offset: 0x8003DCB4
		// End Line: 1573

		/* begin block 1.5 */
			// Start line: 1575
			// Start offset: 0x8003DCB4

			/* begin block 1.5.1 */
				// Start line: 1583
				// Start offset: 0x8003DD20

				/* begin block 1.5.1.1 */
					// Start line: 1584
					// Start offset: 0x8003DD20

					/* begin block 1.5.1.1.1 */
						// Start line: 1586
						// Start offset: 0x8003DD3C

						/* begin block 1.5.1.1.1.1 */
							// Start line: 1586
							// Start offset: 0x8003DD3C
						/* end block 1.5.1.1.1.1 */
						// End offset: 0x8003DD3C
						// End Line: 1586
					/* end block 1.5.1.1.1 */
					// End offset: 0x8003DD3C
					// End Line: 1586
				/* end block 1.5.1.1 */
				// End offset: 0x8003DD80
				// End Line: 1589
			/* end block 1.5.1 */
			// End offset: 0x8003DD80
			// End Line: 1589
		/* end block 1.5 */
		// End offset: 0x8003DD80
		// End Line: 1589

		/* begin block 1.6 */
			// Start line: 1593
			// Start offset: 0x8003DD80

			/* begin block 1.6.1 */
				// Start line: 1594
				// Start offset: 0x8003DD88

				/* begin block 1.6.1.1 */
					// Start line: 1595
					// Start offset: 0x8003DD88

					/* begin block 1.6.1.1.1 */
						// Start line: 1598
						// Start offset: 0x8003DDA4

						/* begin block 1.6.1.1.1.1 */
							// Start line: 1598
							// Start offset: 0x8003DDA4
						/* end block 1.6.1.1.1.1 */
						// End offset: 0x8003DDA4
						// End Line: 1598
					/* end block 1.6.1.1.1 */
					// End offset: 0x8003DDA4
					// End Line: 1598

					/* begin block 1.6.1.1.2 */
						// Start line: 1598
						// Start offset: 0x8003DDCC

						/* begin block 1.6.1.1.2.1 */
							// Start line: 1598
							// Start offset: 0x8003DDCC
						/* end block 1.6.1.1.2.1 */
						// End offset: 0x8003DDCC
						// End Line: 1598
					/* end block 1.6.1.1.2 */
					// End offset: 0x8003DDCC
					// End Line: 1598
				/* end block 1.6.1.1 */
				// End offset: 0x8003DE34
				// End Line: 1603
			/* end block 1.6.1 */
			// End offset: 0x8003DE34
			// End Line: 1603
		/* end block 1.6 */
		// End offset: 0x8003DE34
		// End Line: 1603
	/* end block 1 */
	// End offset: 0x8003DE34
	// End Line: 1608

	/* begin block 2 */
		// Start line: 3175
	/* end block 2 */
	// End Line: 3176

	/* begin block 3 */
		// Start line: 3180
	/* end block 3 */
	// End Line: 3181

	/* begin block 4 */
		// Start line: 3180
	/* end block 4 */
	// End Line: 3181

/* WARNING: Type propagation algorithm not settling */

void DrawBackground__20tScreenCarSelectDuel(tScreenCarSelectDuel *this)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  short bright;
  DRAWENV *pDVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  tListIteratorCar *this_00;
  float camerax;
  float cameray;
  RECT local_f0;
  tCarInfo local_e8;
  ushort local_18;
  short local_16;
  undefined2 local_14;
  short local_12;
  
  pDVar4 = Draw_GetDRAWENV__Fii(Draw_gPlayer1View,gFlip);
  puVar3 = DAT_1f800004;
  *(undefined2 *)((this->tScreenCarSelect).fCurrentOverlays + 3) = 7;
  puVar2 = DAT_1f800000;
  local_18 = 0;
  local_16 = (pDVar4->clip).y;
  local_14 = 0x200;
  local_12 = (short)screenheight;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar7 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 3;
  *puVar2 = *puVar2 & 0xff000000 | uVar7;
  SetDrawArea((int)puVar3,&local_18);
  local_f0.x = 0x122;
  local_f0.w = 200;
  local_f0.h = 0xc;
  local_f0.y = 0x82;
  bright = TextValue__16tListIteratorCar7tPlayer
                     ((tListIteratorCar *)
                      &(menuDefs->itemShowcase).tMenuItemGoToMenuButton.tMenuItemInteractive.
                       tMenuItem.fNewMenu,~kPlayerOne);
  DrawShape_NFS4RoundRectangle__FiR4RECTs((int)bright,&local_f0,0);
  GetStockCar__11tCarManagersR8tCarInfo(&carManager,(ushort)(byte)frontEnd.oppCar,&local_e8);
  local_e8.fColor = local_e8.fColorOrder[(uint)local_e8.fDefaultColor];
  UpdateOpponentVideoWall__20tScreenCarSelectDuelR8tCarInfo(this,&local_e8);
  IsShapeFileLoaded__7tScreenR17tShapeInformation
            ((tScreen *)this,(tShapeInformation *)&this->fOpponentTVsInitialized);
  bVar1 = false;
  if ((((this->fOpponentShapes).fShapes != (tTexture_ShapeInfo *)0x0) &&
      (*(short *)&(this->tScreenCarSelect).fVideoWall[1].fTVTicks != -1)) &&
     (*(int *)((PTR_80052a6c->render).palCopyNum + 0xd) == 0)) {
    bVar1 = 0x80 < (int)(ticks + -(this->tScreenCarSelect).fFadeTicks[0]);
  }
  if (bVar1) {
    UploadShapes__7tScreenR17tShapeInformationssss
              ((tScreen *)this,(tShapeInformation *)&this->fOpponentTVsInitialized,0,0x41,5,0);
    *(undefined4 *)&this->fPreviousOpponent = 0;
    TurnOn__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).fVideoWall[0].fUpdated);
    if (*(short *)((int)&(this->tScreenCarSelect).fVideoWall[1].fUpdated + 2) ==
        (this->tScreenCarSelect).fBrightness[1]) {
      SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,0x80,1);
    }
  }
  (this->tScreenCarSelect).fSplineInterval = (this->tScreenCarSelect).fSplineInterval + 3;
  local_e8.fUpgrades = '\0';
  if ((*(int *)((PTR_80052a6c->render).palCopyNum + 0xd) != 0) &&
     (0x80 < (int)(ticks + -(this->tScreenCarSelect).fFadeTicks[0]))) {
    SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,0,1);
    TurnOff__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).fVideoWall[0].fUpdated);
    *(uchar **)(this->tScreenCarSelect).fFadeTicks = ticks;
  }
  UpdateBrightness__16tScreenCarSelects((tScreenCarSelect *)this,1);
  showRoomFlag = (void *)0x0;
  DrawCar__FR8tCarInfossffcbUl7tPlayer
            (&local_e8,0x116,0xb8,camerax,cameray,0x3fd9999a,(void *)0xc11e6666,
             (uint)*(byte *)((int)&(this->tScreenCarSelect).fVideoWall[1].fUpdated + 2),kPlayerOne);
  if (((*(int *)((PTR_80052a6c->render).palCopyNum + 0xd) == 0) &&
      (bright = *(short *)((int)&(this->tScreenCarSelect).fVideoWall[1].fUpdated + 2),
      bright == (this->tScreenCarSelect).fBrightness[1])) &&
     ((bright == 0 && (0x80 < (int)(ticks + -(this->tScreenCarSelect).fFadeTicks[0]))))) {
    SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,0x80,1);
    TurnOn__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).fVideoWall[0].fUpdated);
  }
  iVar5 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  (**(code **)(iVar5 + 0x84))
            ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
             (int)*(short *)(iVar5 + 0x80),0x69);
  puVar3 = DAT_1f800004;
  puVar2 = DAT_1f800000;
  local_18 = 0;
  local_14 = 0x200;
  local_16 = (pDVar4->clip).y + 0x80;
  local_12 = (short)screenheight + -0x80;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar7 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 3;
  *puVar2 = *puVar2 & 0xff000000 | uVar7;
  SetDrawArea((int)puVar3,&local_18);
  PSXDrawSquare__Fiiiii
            (0,0,(int)(screenheight + ((uint)screenheight >> 0x1f)) >> 1,0x200,
             (int)(screenheight + ((uint)screenheight >> 0x1f)) >> 1);
  iVar5 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  iVar5 = (**(code **)(iVar5 + 0x6c))
                    ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
                     (int)*(short *)(iVar5 + 0x68),&local_e8);
  if (iVar5 == 0) {
    local_e8.fCarID = -1;
  }
  else {
    local_f0.y = 0x19;
    if (frontEnd.carListType == '\0') {
      this_00 = (tListIteratorCar *)
                ((menuDefs->itemLocalSpeech).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem
                 ._vf + 4);
    }
    else {
      this_00 = (tListIteratorCar *)
                &(menuDefs->itemTrackInfoContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.
                 tMenuItem.fSelFade;
    }
    bright = TextValue__16tListIteratorCar7tPlayer(this_00,~kPlayerOne);
    DrawShape_NFS4RoundRectangle__FiR4RECTs((int)bright,&local_f0,0);
  }
  iVar6 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  (**(code **)(iVar6 + 100))
            ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
             (int)*(short *)(iVar6 + 0x60),&local_e8);
  if ((*(int *)((gCarObj2->render).palCopyNum + 0xd) != 0) &&
     (0x80 < (int)(ticks + -*(int *)(this->tScreenCarSelect).fDestBrightness))) {
    SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,0,0);
    TurnOff__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis);
    *(uchar **)(this->tScreenCarSelect).fDestBrightness = ticks;
  }
  UpdateBrightness__16tScreenCarSelects((tScreenCarSelect *)this,0);
  showRoomFlag = (void *)0x0;
  DrawCar__FR8tCarInfossffcbUl7tPlayer
            (&local_e8,0x116,0x4f,camerax,cameray,0x3fd9999a,(void *)0xc11e6666,
             (uint)*(byte *)&(this->tScreenCarSelect).fVideoWall[1].fUpdated,kPlayerOne);
  if ((((*(int *)((gCarObj2->render).palCopyNum + 0xd) == 0) &&
       (bright = *(short *)&(this->tScreenCarSelect).fVideoWall[1].fUpdated,
       bright == (this->tScreenCarSelect).fBrightness[0])) && (bright == 0)) &&
     (0x80 < (int)(ticks + -*(int *)(this->tScreenCarSelect).fDestBrightness))) {
    bright = 0x20;
    if (local_e8.fAvailable != '\0') {
      bright = 0x80;
    }
    SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,bright,0);
    TurnOn__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis);
  }
  if (iVar5 != 0) {
    IsShapeFileLoaded__7tScreenR17tShapeInformation
              ((tScreen *)this,&(this->tScreenCarSelect).tScreen.fSwapShapes);
    bVar1 = false;
    if ((((this->tScreenCarSelect).tScreen.fSwapShapes.fFile != (char *)0x0) &&
        (*(short *)&(this->tScreenCarSelect).fVideoWall[0].fTVTicks != -1)) &&
       (*(int *)((gCarObj2->render).palCopyNum + 0xd) == 0)) {
      bVar1 = 0x80 < (int)(ticks + -*(int *)(this->tScreenCarSelect).fDestBrightness);
    }
    if (bVar1) {
      UploadSwapShapes__7tScreeni((tScreen *)this,5);
      TurnOn__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis);
      if ((this->tScreenCarSelect).fBrightness[0] ==
          *(short *)&(this->tScreenCarSelect).fVideoWall[1].fUpdated) {
        bright = 0x20;
        if (local_e8.fAvailable != '\0') {
          bright = 0x80;
        }
        SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,bright,0);
      }
    }
  }
  iVar5 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  (**(code **)(iVar5 + 0x54))
            ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
             (int)*(short *)(iVar5 + 0x50),0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawForeground__20tScreenCarSelectDuel(struct tScreenCarSelectDuel *this /*$a0*/)
 // line 1613, offset 0x8003de68
	/* begin block 1 */
		// Start line: 1614
		// Start offset: 0x8003DE68
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -248
	// 		short i; // $s3
	// 		short j; // $s1
	// 		short y; // $s2
	// 		void * validCar; // $s4

		/* begin block 1.1 */
			// Start line: 1614
			// Start offset: 0x8003DE68

			/* begin block 1.1.1 */
				// Start line: 1623
				// Start offset: 0x8003DEC4

				/* begin block 1.1.1.1 */
					// Start line: 1625
					// Start offset: 0x8003DED8

					/* begin block 1.1.1.1.1 */
						// Start line: 1625
						// Start offset: 0x8003DEE0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1629
							// Start offset: 0x8003DF24
							// Variables:
						// 		enum tCarStatType carStat; // $v1
						// 		struct tCarInfo *carInfo; // $v0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1629
								// Start offset: 0x8003DF24
								// Variables:
							// 		short result; // $v1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8003DF84
							// End Line: 1629
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003DF84
						// End Line: 1629
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003DF94
					// End Line: 1629
				/* end block 1.1.1.1 */
				// End offset: 0x8003DFEC
				// End Line: 1632
			/* end block 1.1.1 */
			// End offset: 0x8003DFEC
			// End Line: 1634
		/* end block 1.1 */
		// End offset: 0x8003E014
		// End Line: 1636
	/* end block 1 */
	// End offset: 0x8003E014
	// End Line: 1636

	/* begin block 2 */
		// Start line: 3497
	/* end block 2 */
	// End Line: 3498

	/* begin block 3 */
		// Start line: 3503
	/* end block 3 */
	// End Line: 3504

	/* begin block 4 */
		// Start line: 3503
	/* end block 4 */
	// End Line: 3504

void DrawForeground__20tScreenCarSelectDuel(tScreenCarSelectDuel *this)

{
  int iVar1;
  int iVar2;
  tCarStatType tVar3;
  uint uVar4;
  short value;
  short sVar5;
  int iVar6;
  int iVar7;
  tCarInfo tStack248;
  
  iVar6 = 0x2d;
  iVar7 = 0;
  iVar1 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  iVar1 = (**(code **)(iVar1 + 0x6c))
                    ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
                     (int)*(short *)(iVar1 + 0x68),&tStack248);
  iVar2 = 0;
  while (sVar5 = 0, iVar2 >> 0x10 < 2) {
    while (iVar2 = (int)sVar5, iVar2 < 5) {
      FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
                (text2PVals[iVar2],500,(short)((uint)((iVar6 + 4) * 0x10000) >> 0x10),1,
                 textState_Unselected,textType_ScreenInfo);
      if (iVar1 == 0) {
        value = 0;
      }
      else {
        tVar3 = remap[iVar2];
        uVar4 = (uint)tStack248.fStats[tVar3];
        if ((tStack248.fUpgrades & 1) != 0) {
          uVar4 = uVar4 + (uint)tStack248.fStats[tVar3 + (cst_Brake|cst_Overall)];
        }
        if ((tStack248.fUpgrades & 2) != 0) {
          uVar4 = uVar4 + (uint)tStack248.fStats[tVar3 + 10];
        }
        value = (short)uVar4;
        if ((tStack248.fUpgrades & 4) != 0) {
          value = (short)((uVar4 + (uint)tStack248.fStats[tVar3 + 0xf]) * 0x10000 >> 0x10);
        }
      }
      DrawSlider__FsssssssssbT9ss
                (value,0,0xb,0x1a1,(int)(short)iVar6,0x49,3,4,3,&DAT_00000001,(void *)0x0,0x80,0);
      iVar6 = iVar6 + 0xf;
      sVar5 = sVar5 + 1;
    }
    iVar6 = 0x96;
    iVar7 = iVar7 + 1;
    GetStockCar__11tCarManagersR8tCarInfo(&carManager,(ushort)(byte)frontEnd.oppCar,&tStack248);
    iVar2 = iVar7 * 0x10000;
  }
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetCar__25tScreenCarSelectTwoPlayerR8tCarInfo(struct tScreenCarSelectTwoPlayer *this /*$a0*/, struct tCarInfo *carInfo /*$s2*/)
 // line 1640, offset 0x8003e040
	/* begin block 1 */
		// Start line: 1641
		// Start offset: 0x8003E040
		// Variables:
	// 		int currentplayer; // $s5
	// 		int garageNumber; // $s3

		/* begin block 1.1 */
			// Start line: 1641
			// Start offset: 0x8003E040
			// Variables:
		// 		struct tFEApplication *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 1641
				// Start offset: 0x8003E040
			/* end block 1.1.1 */
			// End offset: 0x8003E040
			// End Line: 1641
		/* end block 1.1 */
		// End offset: 0x8003E040
		// End Line: 1641

		/* begin block 1.2 */
			// Start line: 1659
			// Start offset: 0x8003E134
			// Variables:
		// 		struct tFEApplication *this; // $v0

			/* begin block 1.2.1 */
				// Start line: 1659
				// Start offset: 0x8003E134
			/* end block 1.2.1 */
			// End offset: 0x8003E134
			// End Line: 1659
		/* end block 1.2 */
		// End offset: 0x8003E134
		// End Line: 1659
	/* end block 1 */
	// End offset: 0x8003E16C
	// End Line: 1665

	/* begin block 2 */
		// Start line: 3570
	/* end block 2 */
	// End Line: 3571

	/* begin block 3 */
		// Start line: 3575
	/* end block 3 */
	// End Line: 3576

	/* begin block 4 */
		// Start line: 3575
	/* end block 4 */
	// End Line: 3576

void * GetCar__25tScreenCarSelectTwoPlayerR8tCarInfo
                 (tScreenCarSelectTwoPlayer *this,tCarInfo *carInfo)

{
  byte bVar1;
  ushort uVar2;
  ushort playerNum;
  
  bVar1 = *(byte *)&(FEApp->helpPopup).numItems;
  _playerNum = (uint)bVar1;
  playerNum = (ushort)bVar1;
  if (frontEnd.carListType == '\0') {
    GetStockCar__11tCarManagersR8tCarInfo
              (&carManager,(ushort)(byte)frontEnd.playerCar[_playerNum],carInfo);
    bVar1 = frontEnd.carColors[(int)carInfo->fCarID + _playerNum * 0x30];
  }
  else {
    uVar2 = GetNumOwnedCars__11tCarManagers(&carManager,(ushort)bVar1);
    if ((int)((uint)uVar2 << 0x10) < 1) {
      playerNum = 0;
    }
    uVar2 = GetNumOwnedCars__11tCarManagers(&carManager,playerNum);
    if ((int)((uint)uVar2 << 0x10) < 1) {
      return (void *)0x0;
    }
    GetGarageCar__11tCarManagersR8tCarInfos
              (&carManager,(ushort)(byte)frontEnd.garageCar[_playerNum],carInfo,playerNum);
    bVar1 = carInfo->fColor;
  }
  carInfo->fColor = carInfo->fColorOrder[(uint)bVar1];
  carInfo->fCountry =
       frontEnd.carCountry
       [(int)carInfo->fCarID + (uint)*(byte *)&(FEApp->helpPopup).numItems * 0x30];
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawVideoWall__25tScreenCarSelectTwoPlayers(struct tScreenCarSelectTwoPlayer *this /*$s2*/, short y /*$a1*/)
 // line 1668, offset 0x8003e190
	/* begin block 1 */
		// Start line: 1669
		// Start offset: 0x8003E190
		// Variables:
	// 		short i; // $s1
	// 		void * validCar; // $s3
	// 		struct tCarInfo carInfo; // stack offset -232

		/* begin block 1.1 */
			// Start line: 1680
			// Start offset: 0x8003E220

			/* begin block 1.1.1 */
				// Start line: 1681
				// Start offset: 0x8003E234

				/* begin block 1.1.1.1 */
					// Start line: 1682
					// Start offset: 0x8003E234

					/* begin block 1.1.1.1.1 */
						// Start line: 1683
						// Start offset: 0x8003E244

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1683
							// Start offset: 0x8003E244
							// Variables:
						// 		struct tFEApplication *this; // $v0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1683
								// Start offset: 0x8003E244
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8003E244
							// End Line: 1683
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8003E244
						// End Line: 1683

						/* begin block 1.1.1.1.1.2 */
							// Start line: 1684
							// Start offset: 0x8003E260
							// Variables:
						// 		struct tFEApplication *this; // $v0

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 1684
								// Start offset: 0x8003E260
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x8003E260
							// End Line: 1684
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x8003E260
						// End Line: 1684
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003E2AC
					// End Line: 1687
				/* end block 1.1.1.1 */
				// End offset: 0x8003E2AC
				// End Line: 1687
			/* end block 1.1.1 */
			// End offset: 0x8003E2AC
			// End Line: 1687
		/* end block 1.1 */
		// End offset: 0x8003E2AC
		// End Line: 1687
	/* end block 1 */
	// End offset: 0x8003E2E4
	// End Line: 1697

	/* begin block 2 */
		// Start line: 3631
	/* end block 2 */
	// End Line: 3632

	/* begin block 3 */
		// Start line: 3635
	/* end block 3 */
	// End Line: 3636

	/* begin block 4 */
		// Start line: 3635
	/* end block 4 */
	// End Line: 3636

void DrawVideoWall__25tScreenCarSelectTwoPlayers(tScreenCarSelectTwoPlayer *this,short y)

{
  short valid;
  int iVar1;
  short y_00;
  tVideoWall *this_00;
  int iVar2;
  undefined auStack232 [7];
  byte local_e1;
  
  iVar1 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  iVar2 = 0;
  valid = (**(code **)(iVar1 + 0x6c))
                    ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
                     (int)*(short *)(iVar1 + 0x68),auStack232);
  iVar1 = 0;
  do {
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (iVar1 >> 0x10,0,0,-(int)y,(int)(this->tScreenCarSelect).tScreen.fScreenFadeVal,0,
               (tDrawShapeExtended *)0x0);
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 0x10000;
  } while (iVar2 * 0x10000 >> 0x10 < 0xc);
  if ((((this->tScreenCarSelect).tScreen.fSwapShapes.fFlags & 1) != 0) &&
     ((this->tScreenCarSelect).fFadeTicks[1] == 0)) {
    y_00 = 0;
    if (*(char *)&(FEApp->helpPopup).numItems != '\0') {
      y_00 = 0x69;
    }
    this_00 = (tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis;
    SetOffset__10tVideoWallss(this_00,6,y_00);
    y_00 = 0x2d;
    if (*(char *)&(FEApp->helpPopup).numItems != '\0') {
      y_00 = 0x96;
    }
    SetAvailableText__10tVideoWallsss(this_00,0xf8,0x10e,y_00);
    UpdateImages__10tVideoWall(this_00);
    (this->tScreenCarSelect).fFadeTicks[1] = 1;
  }
  if ((0 < (this->tScreenCarSelect).tScreen.fScreenFadeVal) &&
     ((this->tScreenCarSelect).tScreen.fTransitionOff != (void *)0x0)) {
    TurnOffInstant__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis);
    SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,0,0);
  }
  this_00 = (tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis;
  UpdateTransition__10tVideoWall(this_00);
  SetValid__10tVideoWalls(this_00,valid);
  SetAvailable__10tVideoWalls(this_00,(ushort)local_e1);
  Draw__10tVideoWall(this_00);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__25tScreenCarSelectTwoPlayerRsT1PPcT3(struct tScreenCarSelectTwoPlayer *this /*$v1*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$s1*/, char **swapFileName /*stack 16*/)
 // line 1705, offset 0x8003e330
	/* begin block 1 */
		// Start line: 1706
		// Start offset: 0x8003E330
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -224
	/* end block 1 */
	// End offset: 0x8003E330
	// End Line: 1706

	/* begin block 2 */
		// Start line: 3713
	/* end block 2 */
	// End Line: 3714

	/* begin block 3 */
		// Start line: 3717
	/* end block 3 */
	// End Line: 3718

	/* begin block 4 */
		// Start line: 3717
	/* end block 4 */
	// End Line: 3718

void GetShapeInfo__25tScreenCarSelectTwoPlayerRsT1PPcT3
               (tScreenCarSelectTwoPlayer *this,short *numPermShapes,short *numSwapShapes,
               char **permFileName,char **swapFileName)

{
  tCarInfo tStack224;
  
  *numPermShapes = 0x34;
  *numSwapShapes = 5;
  *(undefined2 *)((int)(this->tScreenCarSelect).fCurrentOverlays + 0xe) = 0xffff;
  (this->tScreenCarSelect).fState = -1;
  (this->tScreenCarSelect).fPreviousCar = -1;
  GetStockCar__11tCarManagersR8tCarInfo(&carManager,0,&tStack224);
  *permFileName = s_zcarsb_80011b30;
  sprintf(gSwapFileName,(char *)&PTR_DAT_80011adc,tStack224.fSmallName);
  *swapFileName = gSwapFileName;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateVideoWall__25tScreenCarSelectTwoPlayerR8tCarInfo(struct tScreenCarSelectTwoPlayer *this /*$s1*/, struct tCarInfo *carInfo /*$s0*/)
 // line 1723, offset 0x8003e3c8
	/* begin block 1 */
		// Start line: 1724
		// Start offset: 0x8003E3C8
	/* end block 1 */
	// End offset: 0x8003E488
	// End Line: 1736

	/* begin block 2 */
		// Start line: 3779
	/* end block 2 */
	// End Line: 3780

	/* begin block 3 */
		// Start line: 3783
	/* end block 3 */
	// End Line: 3784

	/* begin block 4 */
		// Start line: 3783
	/* end block 4 */
	// End Line: 3784

void UpdateVideoWall__25tScreenCarSelectTwoPlayerR8tCarInfo
               (tScreenCarSelectTwoPlayer *this,tCarInfo *carInfo)

{
  byte bVar1;
  
  if ((((uint)carInfo->fCarIndex !=
        (int)*(short *)((int)(this->tScreenCarSelect).fCurrentOverlays + 0xe)) ||
      ((int)carInfo->fCarID != (int)(this->tScreenCarSelect).fState)) ||
     ((carInfo->fCarClass == '\a' &&
      ((int)(this->tScreenCarSelect).fPreviousCar != (uint)carInfo->fCountry)))) {
    if (-1 < carInfo->fCarID) {
      AsyncLoadSwapShapeFile__7tScreenPc((tScreen *)this,carInfo->fSmallName);
    }
    *(ushort *)((int)(this->tScreenCarSelect).fCurrentOverlays + 0xe) = (ushort)carInfo->fCarIndex;
    (this->tScreenCarSelect).fState = (short)carInfo->fCarID;
    bVar1 = carInfo->fCountry;
    (this->tScreenCarSelect).fFadeTicks[1] = 0;
    (this->tScreenCarSelect).fPreviousCar = (ushort)bVar1;
    TurnOff__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis);
    SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,0,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TurnOffVideoWall__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this /*$a0*/)
 // line 1739, offset 0x8003e49c
	/* begin block 1 */
		// Start line: 1740
		// Start offset: 0x8003E49C
	/* end block 1 */
	// End offset: 0x8003E49C
	// End Line: 1740

	/* begin block 2 */
		// Start line: 3813
	/* end block 2 */
	// End Line: 3814

	/* begin block 3 */
		// Start line: 3817
	/* end block 3 */
	// End Line: 3818

	/* begin block 4 */
		// Start line: 3817
	/* end block 4 */
	// End Line: 3818

void TurnOffVideoWall__25tScreenCarSelectTwoPlayer(tScreenCarSelectTwoPlayer *this)

{
  TurnOffInstant__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this /*$s0*/)
 // line 1744, offset 0x8003e4bc
	/* begin block 1 */
		// Start line: 1745
		// Start offset: 0x8003E4BC
		// Variables:
	// 		struct RECT r; // stack offset -256
	// 		struct tCarInfo carInfo; // stack offset -248
	// 		short carY; // $s4
	// 		struct DRAWENV *drenv; // $s5
	// 		struct DR_AREA *daprim; // $a0
	// 		struct RECT temp; // stack offset -40

		/* begin block 1.1 */
			// Start line: 1745
			// Start offset: 0x8003E4BC

			/* begin block 1.1.1 */
				// Start line: 1745
				// Start offset: 0x8003E4BC
				// Variables:
			// 		struct tFEApplication *this; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 1745
					// Start offset: 0x8003E4BC
				/* end block 1.1.1.1 */
				// End offset: 0x8003E4BC
				// End Line: 1745
			/* end block 1.1.1 */
			// End offset: 0x8003E4BC
			// End Line: 1745
		/* end block 1.1 */
		// End offset: 0x8003E4BC
		// End Line: 1745

		/* begin block 1.2 */
			// Start line: 1745
			// Start offset: 0x8003E4BC

			/* begin block 1.2.1 */
				// Start line: 1745
				// Start offset: 0x8003E4BC

				/* begin block 1.2.1.1 */
					// Start line: 1745
					// Start offset: 0x8003E4BC
				/* end block 1.2.1.1 */
				// End offset: 0x8003E4BC
				// End Line: 1745
			/* end block 1.2.1 */
			// End offset: 0x8003E4BC
			// End Line: 1745
		/* end block 1.2 */
		// End offset: 0x8003E5A8
		// End Line: 1765

		/* begin block 1.3 */
			// Start line: 1766
			// Start offset: 0x8003E5A8

			/* begin block 1.3.1 */
				// Start line: 1770
				// Start offset: 0x8003E5E0

				/* begin block 1.3.1.1 */
					// Start line: 1771
					// Start offset: 0x8003E5E0

					/* begin block 1.3.1.1.1 */
						// Start line: 1771
						// Start offset: 0x8003E5E0
						// Variables:
					// 		struct tFEApplication *this; // $v0

						/* begin block 1.3.1.1.1.1 */
							// Start line: 1771
							// Start offset: 0x8003E5E0
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x8003E5E0
						// End Line: 1771
					/* end block 1.3.1.1.1 */
					// End offset: 0x8003E5E0
					// End Line: 1771
				/* end block 1.3.1.1 */
				// End offset: 0x8003E600
				// End Line: 1775

				/* begin block 1.3.1.2 */
					// Start line: 1778
					// Start offset: 0x8003E600

					/* begin block 1.3.1.2.1 */
						// Start line: 1778
						// Start offset: 0x8003E600
						// Variables:
					// 		struct tFEApplication *this; // $v0

						/* begin block 1.3.1.2.1.1 */
							// Start line: 1778
							// Start offset: 0x8003E600
						/* end block 1.3.1.2.1.1 */
						// End offset: 0x8003E600
						// End Line: 1778
					/* end block 1.3.1.2.1 */
					// End offset: 0x8003E600
					// End Line: 1778

					/* begin block 1.3.1.2.2 */
						// Start line: 1784
						// Start offset: 0x8003E66C

						/* begin block 1.3.1.2.2.1 */
							// Start line: 1785
							// Start offset: 0x8003E66C

							/* begin block 1.3.1.2.2.1.1 */
								// Start line: 1785
								// Start offset: 0x8003E66C
							/* end block 1.3.1.2.2.1.1 */
							// End offset: 0x8003E66C
							// End Line: 1785
						/* end block 1.3.1.2.2.1 */
						// End offset: 0x8003E66C
						// End Line: 1785
					/* end block 1.3.1.2.2 */
					// End offset: 0x8003E688
					// End Line: 1786
				/* end block 1.3.1.2 */
				// End offset: 0x8003E688
				// End Line: 1786

				/* begin block 1.3.1.3 */
					// Start line: 1790
					// Start offset: 0x8003E688

					/* begin block 1.3.1.3.1 */
						// Start line: 1790
						// Start offset: 0x8003E688
						// Variables:
					// 		struct tFEApplication *this; // $v0

						/* begin block 1.3.1.3.1.1 */
							// Start line: 1790
							// Start offset: 0x8003E688
						/* end block 1.3.1.3.1.1 */
						// End offset: 0x8003E688
						// End Line: 1790
					/* end block 1.3.1.3.1 */
					// End offset: 0x8003E688
					// End Line: 1790

					/* begin block 1.3.1.3.2 */
						// Start line: 1791
						// Start offset: 0x8003E6B8

						/* begin block 1.3.1.3.2.1 */
							// Start line: 1792
							// Start offset: 0x8003E6B8

							/* begin block 1.3.1.3.2.1.1 */
								// Start line: 1794
								// Start offset: 0x8003E6D4

								/* begin block 1.3.1.3.2.1.1.1 */
									// Start line: 1794
									// Start offset: 0x8003E6D4
								/* end block 1.3.1.3.2.1.1.1 */
								// End offset: 0x8003E6D4
								// End Line: 1794
							/* end block 1.3.1.3.2.1.1 */
							// End offset: 0x8003E6D4
							// End Line: 1794
						/* end block 1.3.1.3.2.1 */
						// End offset: 0x8003E718
						// End Line: 1797
					/* end block 1.3.1.3.2 */
					// End offset: 0x8003E718
					// End Line: 1797
				/* end block 1.3.1.3 */
				// End offset: 0x8003E718
				// End Line: 1797

				/* begin block 1.3.1.4 */
					// Start line: 1800
					// Start offset: 0x8003E718
					// Variables:
				// 		struct tFEApplication *this; // $v1

					/* begin block 1.3.1.4.1 */
						// Start line: 1800
						// Start offset: 0x8003E718
					/* end block 1.3.1.4.1 */
					// End offset: 0x8003E718
					// End Line: 1800
				/* end block 1.3.1.4 */
				// End offset: 0x8003E718
				// End Line: 1800
			/* end block 1.3.1 */
			// End offset: 0x8003E718
			// End Line: 1800

			/* begin block 1.3.2 */
				// Start line: 1806
				// Start offset: 0x8003E77C

				/* begin block 1.3.2.1 */
					// Start line: 1807
					// Start offset: 0x8003E77C
					// Variables:
				// 		struct tFEApplication *this; // $v1

					/* begin block 1.3.2.1.1 */
						// Start line: 1807
						// Start offset: 0x8003E77C
					/* end block 1.3.2.1.1 */
					// End offset: 0x8003E77C
					// End Line: 1807
				/* end block 1.3.2.1 */
				// End offset: 0x8003E77C
				// End Line: 1807
			/* end block 1.3.2 */
			// End offset: 0x8003E808
			// End Line: 1812
		/* end block 1.3 */
		// End offset: 0x8003E808
		// End Line: 1812

		/* begin block 1.4 */
			// Start line: 1815
			// Start offset: 0x8003E808

			/* begin block 1.4.1 */
				// Start line: 1818
				// Start offset: 0x8003E824

				/* begin block 1.4.1.1 */
					// Start line: 1818
					// Start offset: 0x8003E824
				/* end block 1.4.1.1 */
				// End offset: 0x8003E824
				// End Line: 1818
			/* end block 1.4.1 */
			// End offset: 0x8003E824
			// End Line: 1818

			/* begin block 1.4.2 */
				// Start line: 1818
				// Start offset: 0x8003E834
				// Variables:
			// 		struct tFEApplication *this; // $v0

				/* begin block 1.4.2.1 */
					// Start line: 1818
					// Start offset: 0x8003E834
				/* end block 1.4.2.1 */
				// End offset: 0x8003E834
				// End Line: 1818
			/* end block 1.4.2 */
			// End offset: 0x8003E834
			// End Line: 1818

			/* begin block 1.4.3 */
				// Start line: 1818
				// Start offset: 0x8003E864

				/* begin block 1.4.3.1 */
					// Start line: 1818
					// Start offset: 0x8003E864
				/* end block 1.4.3.1 */
				// End offset: 0x8003E864
				// End Line: 1818
			/* end block 1.4.3 */
			// End offset: 0x8003E864
			// End Line: 1818

			/* begin block 1.4.4 */
				// Start line: 1819
				// Start offset: 0x8003E884

				/* begin block 1.4.4.1 */
					// Start line: 1819
					// Start offset: 0x8003E884
					// Variables:
				// 		struct tFEApplication *this; // $v0

					/* begin block 1.4.4.1.1 */
						// Start line: 1819
						// Start offset: 0x8003E884
					/* end block 1.4.4.1.1 */
					// End offset: 0x8003E884
					// End Line: 1819
				/* end block 1.4.4.1 */
				// End offset: 0x8003E884
				// End Line: 1819
			/* end block 1.4.4 */
			// End offset: 0x8003E8F8
			// End Line: 1824
		/* end block 1.4 */
		// End offset: 0x8003E8F8
		// End Line: 1824

		/* begin block 1.5 */
			// Start line: 1827
			// Start offset: 0x8003E8F8

			/* begin block 1.5.1 */
				// Start line: 1827
				// Start offset: 0x8003E8F8
				// Variables:
			// 		struct tFEApplication *this; // $v0

				/* begin block 1.5.1.1 */
					// Start line: 1827
					// Start offset: 0x8003E8F8
				/* end block 1.5.1.1 */
				// End offset: 0x8003E8F8
				// End Line: 1827
			/* end block 1.5.1 */
			// End offset: 0x8003E8F8
			// End Line: 1827
		/* end block 1.5 */
		// End offset: 0x8003E918
		// End Line: 1829

		/* begin block 1.6 */
			// Start line: 1830
			// Start offset: 0x8003E918

			/* begin block 1.6.1 */
				// Start line: 1830
				// Start offset: 0x8003E918
				// Variables:
			// 		struct tFEApplication *this; // $v0

				/* begin block 1.6.1.1 */
					// Start line: 1830
					// Start offset: 0x8003E918
				/* end block 1.6.1.1 */
				// End offset: 0x8003E918
				// End Line: 1830
			/* end block 1.6.1 */
			// End offset: 0x8003E918
			// End Line: 1830
		/* end block 1.6 */
		// End offset: 0x8003E998
		// End Line: 1837
	/* end block 1 */
	// End offset: 0x8003E998
	// End Line: 1838

	/* begin block 2 */
		// Start line: 3823
	/* end block 2 */
	// End Line: 3824

	/* begin block 3 */
		// Start line: 3827
	/* end block 3 */
	// End Line: 3828

	/* begin block 4 */
		// Start line: 3827
	/* end block 4 */
	// End Line: 3828

void DrawBackground__25tScreenCarSelectTwoPlayer(tScreenCarSelectTwoPlayer *this)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  DRAWENV *pDVar4;
  int iVar5;
  uint uVar6;
  short bright;
  short y;
  float camerax;
  float cameray;
  RECT local_100;
  tCarInfo local_f8;
  ushort local_28;
  short local_26;
  undefined2 local_24;
  short local_22;
  
  y = 0x4f;
  pDVar4 = Draw_GetDRAWENV__Fii(Draw_gPlayer1View,gFlip);
  puVar3 = DAT_1f800004;
  puVar2 = DAT_1f800000;
  local_28 = 0;
  local_26 = (pDVar4->clip).y;
  local_24 = 0x200;
  local_22 = screenheight._0_2_;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar6 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 3;
  *puVar2 = *puVar2 & 0xff000000 | uVar6;
  SetDrawArea((int)puVar3,&local_28);
  local_100.x = 0x122;
  local_100.y = 0x19;
  if (*(char *)&(FEApp->helpPopup).numItems == '\x01') {
    local_100.y = 0x82;
  }
  local_100.w = 200;
  local_100.h = 0xc;
  iVar5 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  iVar5 = (**(code **)(iVar5 + 0x6c))
                    ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
                     (int)*(short *)(iVar5 + 0x68),&local_f8);
  if (iVar5 == 0) {
    local_f8.fCarID = -1;
    iVar5 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
    (**(code **)(iVar5 + 100))
              ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
               (int)*(short *)(iVar5 + 0x60),&local_f8);
    showRoomFlag = (void *)0x0;
    DrawCar__FR8tCarInfossffcbUl7tPlayer
              (&local_f8,0x116,0x4f,camerax,cameray,0x3fd9999a,(void *)0xc11e6666,
               (uint)*(byte *)&(this->tScreenCarSelect).fVideoWall[1].fUpdated,kPlayerOne);
    iVar5 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
    (**(code **)(iVar5 + 0x84))
              ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
               (int)*(short *)(iVar5 + 0x80));
  }
  else {
    local_100.y = 0x14;
    if (*(char *)&(FEApp->helpPopup).numItems == '\x01') {
      y = 0xb8;
      local_100.y = 0x80;
    }
    (this->tScreenCarSelect).fSplineInterval = (this->tScreenCarSelect).fSplineInterval + 3;
    DrawShape_NFS4RoundRectangle__FiR4RECTs((int)local_f8.fCarID + 0x121,&local_100,0);
    iVar5 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
    (**(code **)(iVar5 + 100))
              ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
               (int)*(short *)(iVar5 + 0x60),&local_f8);
    if (*(int *)(((&gCarObj2)[(uint)*(byte *)&(FEApp->helpPopup).numItems]->render).palCopyNum + 0xd
                ) != 0) {
      SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,0,0);
      *(uchar **)(this->tScreenCarSelect).fDestBrightness = ticks;
    }
    if ((((*(int *)(((&gCarObj2)[(uint)*(byte *)&(FEApp->helpPopup).numItems]->render).palCopyNum +
                   0xd) == 0) &&
         (bright = *(short *)&(this->tScreenCarSelect).fVideoWall[1].fUpdated,
         bright == (this->tScreenCarSelect).fBrightness[0])) && (bright == 0)) &&
       (0x80 < (int)(ticks + -*(int *)(this->tScreenCarSelect).fDestBrightness))) {
      bright = 0x20;
      if (local_f8.fAvailable != '\0') {
        bright = 0x80;
      }
      SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,bright,0);
      TurnOn__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis);
    }
    UpdateBrightness__16tScreenCarSelects((tScreenCarSelect *)this,0);
    showRoomFlag = (void *)0x0;
    DrawCar__FR8tCarInfossffcbUl7tPlayer
              (&local_f8,0x116,y,camerax,cameray,0x3fd9999a,(void *)0xc11e6666,
               (uint)*(byte *)&(this->tScreenCarSelect).fVideoWall[1].fUpdated,kPlayerOne);
  }
  IsShapeFileLoaded__7tScreenR17tShapeInformation
            ((tScreen *)this,&(this->tScreenCarSelect).tScreen.fSwapShapes);
  bVar1 = false;
  if ((((this->tScreenCarSelect).tScreen.fSwapShapes.fFile != (char *)0x0) &&
      (*(short *)&(this->tScreenCarSelect).fVideoWall[0].fTVTicks != -1)) &&
     (*(int *)(((&gCarObj2)[(uint)*(byte *)&(FEApp->helpPopup).numItems]->render).palCopyNum + 0xd)
      == 0)) {
    bVar1 = 0x80 < (int)(ticks + -*(int *)(this->tScreenCarSelect).fDestBrightness);
  }
  if (bVar1) {
    y = 0;
    if (*(char *)&(FEApp->helpPopup).numItems == '\x01') {
      y = 0x41;
    }
    UploadShapes__7tScreenR17tShapeInformationssss
              ((tScreen *)this,&(this->tScreenCarSelect).tScreen.fSwapShapes,0,y,5,0);
    TurnOn__10tVideoWall((tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis);
    if ((this->tScreenCarSelect).fBrightness[0] ==
        *(short *)&(this->tScreenCarSelect).fVideoWall[1].fUpdated) {
      y = 0x20;
      if (local_f8.fAvailable != '\0') {
        y = 0x80;
      }
      SetBrightness__16tScreenCarSelectss((tScreenCarSelect *)this,y,0);
    }
  }
  local_100.y = 0;
  if (*(char *)&(FEApp->helpPopup).numItems == '\x01') {
    local_100.y = 0x69;
  }
  iVar5 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  (**(code **)(iVar5 + 0x54))
            ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
             (int)*(short *)(iVar5 + 0x50),(int)local_100.y);
  iVar5 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  (**(code **)(iVar5 + 0x8c))
            ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
             (int)*(short *)(iVar5 + 0x88));
  puVar3 = DAT_1f800004;
  puVar2 = DAT_1f800000;
  local_28 = 0;
  local_26 = (pDVar4->clip).y;
  local_24 = 0x200;
  local_22 = (short)((int)(screenheight + ((uint)screenheight >> 0x1f)) >> 1);
  if (*(char *)&(FEApp->helpPopup).numItems == '\x01') {
    local_26 = local_26 + local_22;
  }
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar6 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 3;
  *puVar2 = *puVar2 & 0xff000000 | uVar6;
  SetDrawArea((int)puVar3,&local_28);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawForeground__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this /*$a2*/)
 // line 1842, offset 0x8003ea14
	/* begin block 1 */
		// Start line: 1843
		// Start offset: 0x8003EA14
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -240
	// 		short j; // $s2
	// 		short yOffset; // $s1
	// 		void * gotcar; // $s4

		/* begin block 1.1 */
			// Start line: 1843
			// Start offset: 0x8003EA14

			/* begin block 1.1.1 */
				// Start line: 1843
				// Start offset: 0x8003EA14
				// Variables:
			// 		struct tFEApplication *this; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 1843
					// Start offset: 0x8003EA14
				/* end block 1.1.1.1 */
				// End offset: 0x8003EA14
				// End Line: 1843
			/* end block 1.1.1 */
			// End offset: 0x8003EA14
			// End Line: 1843
		/* end block 1.1 */
		// End offset: 0x8003EA58
		// End Line: 1851

		/* begin block 1.2 */
			// Start line: 1855
			// Start offset: 0x8003EA58

			/* begin block 1.2.1 */
				// Start line: 1855
				// Start offset: 0x8003EA58
				// Variables:
			// 		struct tFEApplication *this; // $v1

				/* begin block 1.2.1.1 */
					// Start line: 1855
					// Start offset: 0x8003EA58
				/* end block 1.2.1.1 */
				// End offset: 0x8003EA58
				// End Line: 1855
			/* end block 1.2.1 */
			// End offset: 0x8003EA58
			// End Line: 1855

			/* begin block 1.2.2 */
				// Start line: 1859
				// Start offset: 0x8003EA8C

				/* begin block 1.2.2.1 */
					// Start line: 1859
					// Start offset: 0x8003EA8C

					/* begin block 1.2.2.1.1 */
						// Start line: 1859
						// Start offset: 0x8003EA8C
					/* end block 1.2.2.1.1 */
					// End offset: 0x8003EA8C
					// End Line: 1859
				/* end block 1.2.2.1 */
				// End offset: 0x8003EA8C
				// End Line: 1859

				/* begin block 1.2.2.2 */
					// Start line: 1859
					// Start offset: 0x8003EA8C

					/* begin block 1.2.2.2.1 */
						// Start line: 1862
						// Start offset: 0x8003EABC

						/* begin block 1.2.2.2.1.1 */
							// Start line: 1862
							// Start offset: 0x8003EABC

							/* begin block 1.2.2.2.1.1.1 */
								// Start line: 1862
								// Start offset: 0x8003EABC
							/* end block 1.2.2.2.1.1.1 */
							// End offset: 0x8003EABC
							// End Line: 1862
						/* end block 1.2.2.2.1.1 */
						// End offset: 0x8003EABC
						// End Line: 1862
					/* end block 1.2.2.2.1 */
					// End offset: 0x8003EABC
					// End Line: 1862
				/* end block 1.2.2.2 */
				// End offset: 0x8003EABC
				// End Line: 1862
			/* end block 1.2.2 */
			// End offset: 0x8003EABC
			// End Line: 1862

			/* begin block 1.2.3 */
				// Start line: 1865
				// Start offset: 0x8003EAC8

				/* begin block 1.2.3.1 */
					// Start line: 1865
					// Start offset: 0x8003EAC8

					/* begin block 1.2.3.1.1 */
						// Start line: 1865
						// Start offset: 0x8003EAC8
					/* end block 1.2.3.1.1 */
					// End offset: 0x8003EAC8
					// End Line: 1865
				/* end block 1.2.3.1 */
				// End offset: 0x8003EAC8
				// End Line: 1865

				/* begin block 1.2.3.2 */
					// Start line: 1865
					// Start offset: 0x8003EAC8

					/* begin block 1.2.3.2.1 */
						// Start line: 1868
						// Start offset: 0x8003EAF8

						/* begin block 1.2.3.2.1.1 */
							// Start line: 1868
							// Start offset: 0x8003EAF8

							/* begin block 1.2.3.2.1.1.1 */
								// Start line: 1868
								// Start offset: 0x8003EAF8
							/* end block 1.2.3.2.1.1.1 */
							// End offset: 0x8003EB00
							// End Line: 1868
						/* end block 1.2.3.2.1.1 */
						// End offset: 0x8003EB00
						// End Line: 1868
					/* end block 1.2.3.2.1 */
					// End offset: 0x8003EB00
					// End Line: 1868
				/* end block 1.2.3.2 */
				// End offset: 0x8003EB00
				// End Line: 1868
			/* end block 1.2.3 */
			// End offset: 0x8003EB00
			// End Line: 1868
		/* end block 1.2 */
		// End offset: 0x8003EB00
		// End Line: 1868

		/* begin block 1.3 */
			// Start line: 1871
			// Start offset: 0x8003EB00

			/* begin block 1.3.1 */
				// Start line: 1871
				// Start offset: 0x8003EB18

				/* begin block 1.3.1.1 */
					// Start line: 1875
					// Start offset: 0x8003EB60
					// Variables:
				// 		enum tCarStatType carStat; // $v0
				// 		struct tCarInfo *carInfo; // $s3

					/* begin block 1.3.1.1.1 */
						// Start line: 1875
						// Start offset: 0x8003EB60
						// Variables:
					// 		short result; // $v1
					/* end block 1.3.1.1.1 */
					// End offset: 0x8003EBBC
					// End Line: 1875
				/* end block 1.3.1.1 */
				// End offset: 0x8003EBBC
				// End Line: 1875
			/* end block 1.3.1 */
			// End offset: 0x8003EBCC
			// End Line: 1875
		/* end block 1.3 */
		// End offset: 0x8003EC28
		// End Line: 1877
	/* end block 1 */
	// End offset: 0x8003EC28
	// End Line: 1877

	/* begin block 2 */
		// Start line: 4046
	/* end block 2 */
	// End Line: 4047

	/* begin block 3 */
		// Start line: 4050
	/* end block 3 */
	// End Line: 4051

	/* begin block 4 */
		// Start line: 4050
	/* end block 4 */
	// End Line: 4051

/* WARNING: Type propagation algorithm not settling */

void DrawForeground__25tScreenCarSelectTwoPlayer(tScreenCarSelectTwoPlayer *this)

{
  tGlobalMenuDefs *ptVar1;
  int iVar2;
  tCarStatType tVar3;
  uint uVar4;
  short value;
  tMenu *ptVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  undefined auStack240 [2];
  char local_ee;
  byte abStack192 [5];
  byte abStack187 [5];
  byte abStack182 [5];
  byte abStack177 [133];
  byte local_2c;
  
  iVar7 = 0x2d;
  if (*(char *)&(FEApp->helpPopup).numItems == '\x01') {
    iVar7 = 0x96;
  }
  iVar2 = *(int *)((this->tScreenCarSelect).tScreen._vf + 2);
  iVar2 = (**(code **)(iVar2 + 0x6c))
                    ((int)&(this->tScreenCarSelect).tScreen.fPermShapes.fShapes +
                     (int)*(short *)(iVar2 + 0x68),auStack240);
  ptVar1 = menuDefs;
  if (*(char *)&(FEApp->helpPopup).numItems == '\0') {
    ptVar5 = (tMenu *)((uint)(menuDefs->menuPostCarGarage).tMenu.fOptionsMenu & 0xfffffffe);
    (menuDefs->menuPostCarGarage).tMenu.fOptionsMenu = ptVar5;
    if ((iVar2 == 0) || (local_ee == '\a')) {
      (ptVar1->menuPostCarGarage).tMenu.fOptionsMenu = (tMenu *)((uint)ptVar5 | 1);
    }
  }
  else {
    uVar4 = *(uint *)((menuDefs->itemGoToDuelBuyCar).tMenuItemGoToMenuButton.tMenuItemInteractive.
                      tMenuItem._vf + 8) & 0xfffffffe;
    *(uint *)((menuDefs->itemGoToDuelBuyCar).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              _vf + 8) = uVar4;
    if ((iVar2 == 0) || (local_ee == '\a')) {
      *(uint *)((ptVar1->itemGoToDuelBuyCar).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
                _vf + 8) = uVar4 | 1;
    }
  }
  sVar8 = 0;
  while (iVar6 = (int)sVar8, iVar6 < 5) {
    FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
              (text2PVals[iVar6],500,(short)((uint)((iVar7 + 4) * 0x10000) >> 0x10),1,
               textState_Unselected,textType_NumTypes);
    if (iVar2 == 0) {
      value = 0;
    }
    else {
      tVar3 = remap[iVar6];
      uVar4 = (uint)abStack192[tVar3];
      if ((local_2c & 1) != 0) {
        uVar4 = uVar4 + (uint)abStack187[tVar3];
      }
      if ((local_2c & 2) != 0) {
        uVar4 = uVar4 + (uint)abStack182[tVar3];
      }
      value = (short)uVar4;
      if ((local_2c & 4) != 0) {
        value = (short)((uVar4 + (uint)abStack177[tVar3]) * 0x10000 >> 0x10);
      }
    }
    DrawSlider__FsssssssssbT9ss
              (value,0,0xb,0x1a1,(int)(short)iVar7,0x49,3,4,3,&DAT_00000001,(void *)0x0,0x80,0);
    iVar7 = iVar7 + 0xf;
    sVar8 = sVar8 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDialog__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this /*$s1*/)
 // line 1881, offset 0x8003ec50
	/* begin block 1 */
		// Start line: 1882
		// Start offset: 0x8003EC50
		// Variables:
	// 		int player; // $s0

		/* begin block 1.1 */
			// Start line: 1882
			// Start offset: 0x8003EC50
			// Variables:
		// 		struct tFEApplication *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 1882
				// Start offset: 0x8003EC50
			/* end block 1.1.1 */
			// End offset: 0x8003EC50
			// End Line: 1882
		/* end block 1.1 */
		// End offset: 0x8003EC50
		// End Line: 1882

		/* begin block 1.2 */
			// Start line: 1882
			// Start offset: 0x8003EC50

			/* begin block 1.2.1 */
				// Start line: 1885
				// Start offset: 0x8003EC90

				/* begin block 1.2.1.1 */
					// Start line: 1886
					// Start offset: 0x8003EC9C
					// Variables:
				// 		struct tDialogBase *this; // $s1

					/* begin block 1.2.1.1.1 */
						// Start line: 1886
						// Start offset: 0x8003EC9C
					/* end block 1.2.1.1.1 */
					// End offset: 0x8003EC9C
					// End Line: 1886
				/* end block 1.2.1.1 */
				// End offset: 0x8003EC9C
				// End Line: 1886

				/* begin block 1.2.1.2 */
					// Start line: 1886
					// Start offset: 0x8003EC9C

					/* begin block 1.2.1.2.1 */
						// Start line: 1886
						// Start offset: 0x8003EC9C
					/* end block 1.2.1.2.1 */
					// End offset: 0x8003EC9C
					// End Line: 1886
				/* end block 1.2.1.2 */
				// End offset: 0x8003EC9C
				// End Line: 1886

				/* begin block 1.2.1.3 */
					// Start line: 1886
					// Start offset: 0x8003EC9C

					/* begin block 1.2.1.3.1 */
						// Start line: 1886
						// Start offset: 0x8003EC9C
					/* end block 1.2.1.3.1 */
					// End offset: 0x8003EC9C
					// End Line: 1886
				/* end block 1.2.1.3 */
				// End offset: 0x8003EC9C
				// End Line: 1886
			/* end block 1.2.1 */
			// End offset: 0x8003EC9C
			// End Line: 1886
		/* end block 1.2 */
		// End offset: 0x8003ECF8
		// End Line: 1893
	/* end block 1 */
	// End offset: 0x8003ECF8
	// End Line: 1893

	/* begin block 2 */
		// Start line: 4123
	/* end block 2 */
	// End Line: 4124

	/* begin block 3 */
		// Start line: 4128
	/* end block 3 */
	// End Line: 4129

	/* begin block 4 */
		// Start line: 4128
	/* end block 4 */
	// End Line: 4129

/* WARNING: Type propagation algorithm not settling */

void SetDialog__25tScreenCarSelectTwoPlayer(tScreenCarSelectTwoPlayer *this)

{
  byte bVar1;
  undefined2 uVar2;
  char *__format;
  char *pcVar3;
  
  bVar1 = *(byte *)&(FEApp->helpPopup).numItems;
  if (*(int *)(&(FEApp->helpPopup).lefttext + (uint)bVar1 * 2) == 0) {
    Hide__11tDialogBase((tDialogBase *)&(this->tScreenCarSelect).fCameraRotation);
  }
  else {
    uVar2 = 0x3c;
    if (bVar1 == 0) {
      uVar2 = 0xffc4;
    }
    *(undefined2 *)&(this->CarDialog).tDialogMessageString.tDialogBase.startTicks = 0;
    *(undefined2 *)((int)&(this->CarDialog).tDialogMessageString.tDialogBase.startTicks + 2) = uVar2
    ;
    *(ushort *)((this->CarDialog).tDialogMessageString.tDialogBase.tScreen._vf + 2) = (ushort)bVar1;
    __format = TextSys_Word__Fi(0x2a8);
    pcVar3 = PlayerName__Fi(1 - (uint)bVar1);
    sprintf(WaitingString,__format,pcVar3);
    *(undefined4 *)&(this->CarDialog).tDialogMessageString.tDialogBase.fDefault = 0x80052c58;
    Display__11tDialogBase((tDialogBase *)&(this->tScreenCarSelect).fCameraRotation);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AllocateAsyncBuffer__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this /*$s0*/)
 // line 1896, offset 0x8003ed10
	/* begin block 1 */
		// Start line: 1897
		// Start offset: 0x8003ED10
	/* end block 1 */
	// End offset: 0x8003ED10
	// End Line: 1897

	/* begin block 2 */
		// Start line: 4154
	/* end block 2 */
	// End Line: 4155

	/* begin block 3 */
		// Start line: 4158
	/* end block 3 */
	// End Line: 4159

	/* begin block 4 */
		// Start line: 4158
	/* end block 4 */
	// End Line: 4159

void AllocateAsyncBuffer__25tScreenCarSelectTwoPlayer(tScreenCarSelectTwoPlayer *this)

{
  char *pcVar1;
  
  pcVar1 = Platform_GetDCTBuffer__FiPc((int)&DAT_00003e80,s_VideoWall_80011ae0);
  (this->tScreenCarSelect).tScreen.fSwapShapes.fDestFile = pcVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitializeVideoWall__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this /*$s0*/)
 // line 1901, offset 0x8003ed44
	/* begin block 1 */
		// Start line: 1902
		// Start offset: 0x8003ED44
	/* end block 1 */
	// End offset: 0x8003EDAC
	// End Line: 1910

	/* begin block 2 */
		// Start line: 4165
	/* end block 2 */
	// End Line: 4166

	/* begin block 3 */
		// Start line: 4169
	/* end block 3 */
	// End Line: 4170

	/* begin block 4 */
		// Start line: 4169
	/* end block 4 */
	// End Line: 4170

void InitializeVideoWall__25tScreenCarSelectTwoPlayer(tScreenCarSelectTwoPlayer *this)

{
  tVideoWall *this_00;
  
  this_00 = (tVideoWall *)&(this->tScreenCarSelect).tvConfigs[9].flip_axis;
  Initialize__10tVideoWallP9tTVConfigP18tTexture_ShapeInfossPss
            (this_00,(tTVConfig *)&(this->tScreenCarSelect).fPreviousCarID,
             (this->tScreenCarSelect).tScreen.fSwapShapes.fShapes,0,5,tvSplitOrder,0);
  if (((this->tScreenCarSelect).tScreen.fSwapShapes.fFlags & 1) != 0) {
    UpdateImages__10tVideoWall(this_00);
    (this->tScreenCarSelect).fFadeTicks[1] = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this /*$s0*/)
 // line 1914, offset 0x8003edc0
	/* begin block 1 */
		// Start line: 1915
		// Start offset: 0x8003EDC0
	/* end block 1 */
	// End offset: 0x8003EDC0
	// End Line: 1915

	/* begin block 2 */
		// Start line: 4192
	/* end block 2 */
	// End Line: 4193

	/* begin block 3 */
		// Start line: 4197
	/* end block 3 */
	// End Line: 4198

	/* begin block 4 */
		// Start line: 4197
	/* end block 4 */
	// End Line: 4198

void Initialize__25tScreenCarSelectTwoPlayer(tScreenCarSelectTwoPlayer *this)

{
  Initialize__16tScreenCarSelect((tScreenCarSelect *)this);
  *(undefined2 *)((this->tScreenCarSelect).fCurrentOverlays + 3) = 0;
  *(undefined2 *)((int)(this->tScreenCarSelect).fCurrentOverlays + 0xe) = 0xffff;
  (this->tScreenCarSelect).fState = -1;
  (this->tScreenCarSelect).fPreviousCar = -1;
  (this->tScreenCarSelect).fBrightness[1] = 0;
  (this->tScreenCarSelect).fBrightness[0] = 0;
  *(undefined2 *)((int)&(this->tScreenCarSelect).fVideoWall[1].fUpdated + 2) = 0;
  *(undefined2 *)&(this->tScreenCarSelect).fVideoWall[1].fUpdated = 0;
  gShowroomLights = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__25tScreenCarSelectTwoPlayer(struct tScreenCarSelectTwoPlayer *this /*$s0*/)
 // line 1925, offset 0x8003ee10
	/* begin block 1 */
		// Start line: 1926
		// Start offset: 0x8003EE10
	/* end block 1 */
	// End offset: 0x8003EE10
	// End Line: 1926

	/* begin block 2 */
		// Start line: 4217
	/* end block 2 */
	// End Line: 4218

	/* begin block 3 */
		// Start line: 4221
	/* end block 3 */
	// End Line: 4222

	/* begin block 4 */
		// Start line: 4221
	/* end block 4 */
	// End Line: 4222

void Cleanup__25tScreenCarSelectTwoPlayer(tScreenCarSelectTwoPlayer *this)

{
  Hide__11tDialogBase((tDialogBase *)&(this->tScreenCarSelect).fCameraRotation);
  Cleanup__16tScreenCarSelect((tScreenCarSelect *)this);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetCar__25tScreenPinkSlipsCarSelectR8tCarInfo(struct tScreenPinkSlipsCarSelect *this /*$a0*/, struct tCarInfo *carInfo /*$s0*/)
 // line 1935, offset 0x8003ee40
	/* begin block 1 */
		// Start line: 1936
		// Start offset: 0x8003EE40

		/* begin block 1.1 */
			// Start line: 1936
			// Start offset: 0x8003EE40

			/* begin block 1.1.1 */
				// Start line: 1938
				// Start offset: 0x8003EE74

				/* begin block 1.1.1.1 */
					// Start line: 1939
					// Start offset: 0x8003EE74
					// Variables:
				// 		struct tFEApplication *this; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 1939
						// Start offset: 0x8003EE74
					/* end block 1.1.1.1.1 */
					// End offset: 0x8003EE74
					// End Line: 1939
				/* end block 1.1.1.1 */
				// End offset: 0x8003EE74
				// End Line: 1939

				/* begin block 1.1.1.2 */
					// Start line: 1939
					// Start offset: 0x8003EE74

					/* begin block 1.1.1.2.1 */
						// Start line: 1939
						// Start offset: 0x8003EE74
					/* end block 1.1.1.2.1 */
					// End offset: 0x8003EE74
					// End Line: 1939
				/* end block 1.1.1.2 */
				// End offset: 0x8003EE74
				// End Line: 1939
			/* end block 1.1.1 */
			// End offset: 0x8003EEBC
			// End Line: 1943
		/* end block 1.1 */
		// End offset: 0x8003EEC0
		// End Line: 1946
	/* end block 1 */
	// End offset: 0x8003EEC0
	// End Line: 1946

	/* begin block 2 */
		// Start line: 4233
	/* end block 2 */
	// End Line: 4234

	/* begin block 3 */
		// Start line: 4241
	/* end block 3 */
	// End Line: 4242

	/* begin block 4 */
		// Start line: 4241
	/* end block 4 */
	// End Line: 4242

void * GetCar__25tScreenPinkSlipsCarSelectR8tCarInfo
                 (tScreenPinkSlipsCarSelect *this,tCarInfo *carInfo)

{
  byte bVar1;
  undefined *puVar2;
  
  if (PinkSlipsScreenState == CardLoadedFine) {
    puVar2 = (undefined *)0x0;
    if (PinkSlipsCarSelectState_80052038 == CardLoadedFine) {
      bVar1 = *(byte *)&(FEApp->helpPopup).numItems;
      GetPinkSlipsCar__11tCarManagersR8tCarInfos
                (&carManager,(ushort)(byte)frontEnd.pinkSlipsCar[(uint)bVar1],carInfo,(ushort)bVar1)
      ;
      puVar2 = &DAT_00000001;
      carInfo->fColor = carInfo->fColorOrder[(uint)carInfo->fColor];
    }
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this /*$s0*/)
 // line 1949, offset 0x8003eed0
	/* begin block 1 */
		// Start line: 1950
		// Start offset: 0x8003EED0
	/* end block 1 */
	// End offset: 0x8003EF04
	// End Line: 1955

	/* begin block 2 */
		// Start line: 4265
	/* end block 2 */
	// End Line: 4266

	/* begin block 3 */
		// Start line: 4269
	/* end block 3 */
	// End Line: 4270

	/* begin block 4 */
		// Start line: 4269
	/* end block 4 */
	// End Line: 4270

void DrawBackground__25tScreenPinkSlipsCarSelect(tScreenPinkSlipsCarSelect *this)

{
  DoMemCardStuff__25tScreenPinkSlipsCarSelect(this);
  DrawBackground__25tScreenCarSelectTwoPlayer((tScreenCarSelectTwoPlayer *)this);
  if (this->fStartCheckTick != 0) {
    Hide__11tDialogBase((tDialogBase *)
                        &(this->tScreenCarSelectTwoPlayer).tScreenCarSelect.fCameraRotation);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoMemCardStuff__25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this /*$s2*/)
 // line 1958, offset 0x8003ef14
	/* begin block 1 */
		// Start line: 1959
		// Start offset: 0x8003EF14
		// Variables:
	// 		int player; // $s3
	// 		int card; // $s1

		/* begin block 1.1 */
			// Start line: 1959
			// Start offset: 0x8003EF14
			// Variables:
		// 		struct tFEApplication *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 1959
				// Start offset: 0x8003EF14
			/* end block 1.1.1 */
			// End offset: 0x8003EF14
			// End Line: 1959
		/* end block 1.1 */
		// End offset: 0x8003EF14
		// End Line: 1959

		/* begin block 1.2 */
			// Start line: 1976
			// Start offset: 0x8003EFBC

			/* begin block 1.2.1 */
				// Start line: 1976
				// Start offset: 0x8003EFBC

				/* begin block 1.2.1.1 */
					// Start line: 1976
					// Start offset: 0x8003EFBC
				/* end block 1.2.1.1 */
				// End offset: 0x8003EFBC
				// End Line: 1976
			/* end block 1.2.1 */
			// End offset: 0x8003EFBC
			// End Line: 1976
		/* end block 1.2 */
		// End offset: 0x8003EFF4
		// End Line: 1984

		/* begin block 1.3 */
			// Start line: 1987
			// Start offset: 0x8003EFF4

			/* begin block 1.3.1 */
				// Start line: 1988
				// Start offset: 0x8003EFFC

				/* begin block 1.3.1.1 */
					// Start line: 1990
					// Start offset: 0x8003EFFC

					/* begin block 1.3.1.1.1 */
						// Start line: 1996
						// Start offset: 0x8003F028

						/* begin block 1.3.1.1.1.1 */
							// Start line: 1996
							// Start offset: 0x8003F028

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 1997
								// Start offset: 0x8003F048
								// Variables:
							// 		int ret; // $v1
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x8003F190
							// End Line: 2040
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x8003F190
						// End Line: 2040
					/* end block 1.3.1.1.1 */
					// End offset: 0x8003F190
					// End Line: 2040
				/* end block 1.3.1.1 */
				// End offset: 0x8003F190
				// End Line: 2040
			/* end block 1.3.1 */
			// End offset: 0x8003F190
			// End Line: 2040
		/* end block 1.3 */
		// End offset: 0x8003F190
		// End Line: 2040
	/* end block 1 */
	// End offset: 0x8003F200
	// End Line: 2060

	/* begin block 2 */
		// Start line: 4283
	/* end block 2 */
	// End Line: 4284

	/* begin block 3 */
		// Start line: 4287
	/* end block 3 */
	// End Line: 4288

	/* begin block 4 */
		// Start line: 4287
	/* end block 4 */
	// End Line: 4288

void DoMemCardStuff__25tScreenPinkSlipsCarSelect(tScreenPinkSlipsCarSelect *this)

{
  byte bVar1;
  bool bVar2;
  tFEApplication *this_00;
  short sVar3;
  CARDINFO_def *pCVar4;
  long lVar5;
  PinkSlipsCarSelectState PVar6;
  char *pcVar7;
  PinkSlipsCarSelectState *pPVar8;
  int card;
  tPlayer atIndex;
  
  bVar1 = *(byte *)&(FEApp->helpPopup).numItems;
  atIndex = (tPlayer)bVar1;
  card = 1;
  if (bVar1 != 0) {
    card = 5;
  }
  if (this->fStartCheckTick != 0) {
    return;
  }
  if ((bVar1 == 1) && (PinkSlipsScreenState != CardLoadedFine)) {
    return;
  }
  if (PinkSlipsScreenState == CardCurrentlyLoading) {
    return;
  }
  if (PinkSlipsCarSelectState_80052038 == CardCurrentlyLoading) {
    return;
  }
  pPVar8 = &PinkSlipsScreenState + atIndex;
  if (*pPVar8 == CardLoadedFine) {
    return;
  }
  if (*(int *)&(this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.tDialogBase.OffsetX
      != 1) {
    (this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.string = (char *)0x0;
    return;
  }
  pcVar7 = (this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.string;
  if ((int)pcVar7 < 5) {
    (this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.string = pcVar7 + 1;
    return;
  }
  if (*pPVar8 != CardCurrentlyLoading) {
    MCRD_handlecardevents(card);
    pCVar4 = MCRD_getcard(card);
    *(CARDINFO_def **)&(this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.Centerit =
         pCVar4;
    this_00 = FEApp;
    if (pCVar4->status == -1) {
      *pPVar8 = NoCardInserted;
    }
    else {
      if ((CURRENTLYUSINGMEMCARD == (void *)0x0) && (*pPVar8 == NoCardInserted)) {
        *pPVar8 = CardCurrentlyLoading;
        Redraw__14tFEApplication(this_00);
        Redraw__14tFEApplication(FEApp);
        sVar3 = LoadGame__FsbT1((ushort)bVar1,&DAT_00000001,(void *)0x0);
        if (sVar3 == 0) {
          GetNumPinkSlipsCars__11tCarManagers(&carManager,(ushort)bVar1);
          CheapestCarStockPrice__11tCarManager(&carManager);
          sVar3 = GetNumPinkSlipsCars__11tCarManagers(&carManager,(ushort)bVar1);
          bVar2 = false;
          if (sVar3 == 0x20) {
            *pPVar8 = TooManyCars;
            goto LAB_8003f194;
          }
          sVar3 = GetNumPinkSlipsCars__11tCarManagers(&carManager,(ushort)bVar1);
          if ((1 < sVar3) ||
             ((sVar3 = GetNumPinkSlipsCars__11tCarManagers(&carManager,(ushort)bVar1), sVar3 == 1 &&
              (lVar5 = CheapestCarStockPrice__11tCarManager(&carManager),
              lVar5 <= frontEnd.pinkSlipsCash[atIndex])))) {
            bVar2 = true;
          }
          if (bVar2) {
            pPVar8 = &PinkSlipsScreenState + atIndex;
            PVar6 = CardLoadedFine;
          }
          else {
            pPVar8 = &PinkSlipsScreenState + atIndex;
            PVar6 = NotEnoughCars;
          }
        }
        else {
          if (sVar3 == 1) {
            *pPVar8 = CardFailed;
            goto LAB_8003f194;
          }
          if (sVar3 == 2) {
            *pPVar8 = CardFailedUnformatted;
            goto LAB_8003f194;
          }
          pPVar8 = &PinkSlipsScreenState + atIndex;
          PVar6 = CardFailedNotFound;
        }
        *pPVar8 = PVar6;
      }
    }
  }
LAB_8003f194:
  if ((&PinkSlipsScreenState)[atIndex] == CardLoadedFine) {
    Decrement__16tListIteratorCar7tPlayer
              ((tListIteratorCar *)&(menuDefs->menuPlayerOneCarSelect).tMenuNFS4.tMenu.VertHelp,
               atIndex);
    Increment__16tListIteratorCar7tPlayer
              ((tListIteratorCar *)&(menuDefs->menuPlayerOneCarSelect).tMenuNFS4.tMenu.VertHelp,
               atIndex);
  }
  if ((PinkSlipsScreenState == CardLoadedFine) &&
     (PinkSlipsCarSelectState_80052038 == CardLoadedFine)) {
    DeInit_Memcard__Fv();
    SetLicensePlate__Fv();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawForeground__25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this /*$a0*/)
 // line 2064, offset 0x8003f22c
	/* begin block 1 */
		// Start line: 2065
		// Start offset: 0x8003F22C
	/* end block 1 */
	// End offset: 0x8003F22C
	// End Line: 2065

	/* begin block 2 */
		// Start line: 4496
	/* end block 2 */
	// End Line: 4497

	/* begin block 3 */
		// Start line: 4499
	/* end block 3 */
	// End Line: 4500

	/* begin block 4 */
		// Start line: 4499
	/* end block 4 */
	// End Line: 4500

void DrawForeground__25tScreenPinkSlipsCarSelect(tScreenPinkSlipsCarSelect *this)

{
  DrawForeground__25tScreenCarSelectTwoPlayer((tScreenCarSelectTwoPlayer *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this /*$s0*/)
 // line 2070, offset 0x8003f24c
	/* begin block 1 */
		// Start line: 2071
		// Start offset: 0x8003F24C
	/* end block 1 */
	// End offset: 0x8003F24C
	// End Line: 2071

	/* begin block 2 */
		// Start line: 4506
	/* end block 2 */
	// End Line: 4507

	/* begin block 3 */
		// Start line: 4511
	/* end block 3 */
	// End Line: 4512

	/* begin block 4 */
		// Start line: 4511
	/* end block 4 */
	// End Line: 4512

void Initialize__25tScreenPinkSlipsCarSelect(tScreenPinkSlipsCarSelect *this)

{
  CARDINFO_def *pCVar1;
  
  (this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.string = (char *)0x0;
  this->waitfordialog = 0;
  this->pCI = (CARDINFO_def *)0x0;
  PinkSlipsScreenState = NoCardInserted;
  PinkSlipsCarSelectState_80052038 = NoCardInserted;
  pCVar1 = MCRD_getcard(1);
  *(CARDINFO_def **)&(this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.Centerit =
       pCVar1;
  Init_Memcard__FbT0(&DAT_00000001,&DAT_00000001);
  this->fStartCheckTick = 0;
  Initialize__25tScreenCarSelectTwoPlayer((tScreenCarSelectTwoPlayer *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this /*$s0*/)
 // line 2086, offset 0x8003f2ac
	/* begin block 1 */
		// Start line: 2087
		// Start offset: 0x8003F2AC
	/* end block 1 */
	// End offset: 0x8003F2AC
	// End Line: 2087

	/* begin block 2 */
		// Start line: 4548
	/* end block 2 */
	// End Line: 4549

	/* begin block 3 */
		// Start line: 4551
	/* end block 3 */
	// End Line: 4552

	/* begin block 4 */
		// Start line: 4551
	/* end block 4 */
	// End Line: 4552

void Cleanup__25tScreenPinkSlipsCarSelect(tScreenPinkSlipsCarSelect *this)

{
  this->fStartCheckTick = 1;
  PinkSlipsScreenState = WhoCaresWeBeExiting;
  PinkSlipsCarSelectState_80052038 = WhoCaresWeBeExiting;
  Hide__11tDialogBase((tDialogBase *)
                      &(this->tScreenCarSelectTwoPlayer).tScreenCarSelect.fCameraRotation);
  DeInit_Memcard__Fv();
  Cleanup__25tScreenCarSelectTwoPlayer((tScreenCarSelectTwoPlayer *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDialog__25tScreenPinkSlipsCarSelect(struct tScreenPinkSlipsCarSelect *this /*$s2*/)
 // line 2098, offset 0x8003f300
	/* begin block 1 */
		// Start line: 2099
		// Start offset: 0x8003F300
		// Variables:
	// 		int player; // $s0

		/* begin block 1.1 */
			// Start line: 2099
			// Start offset: 0x8003F300
			// Variables:
		// 		struct tFEApplication *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 2099
				// Start offset: 0x8003F300
			/* end block 1.1.1 */
			// End offset: 0x8003F300
			// End Line: 2099
		/* end block 1.1 */
		// End offset: 0x8003F300
		// End Line: 2099

		/* begin block 1.2 */
			// Start line: 2101
			// Start offset: 0x8003F334
			// Variables:
		// 		struct tDialogBase *this; // $v0

			/* begin block 1.2.1 */
				// Start line: 2101
				// Start offset: 0x8003F334
			/* end block 1.2.1 */
			// End offset: 0x8003F334
			// End Line: 2101
		/* end block 1.2 */
		// End offset: 0x8003F334
		// End Line: 2101

		/* begin block 1.3 */
			// Start line: 2101
			// Start offset: 0x8003F334

			/* begin block 1.3.1 */
				// Start line: 2101
				// Start offset: 0x8003F334
			/* end block 1.3.1 */
			// End offset: 0x8003F334
			// End Line: 2101
		/* end block 1.3 */
		// End offset: 0x8003F334
		// End Line: 2101

		/* begin block 1.4 */
			// Start line: 2113
			// Start offset: 0x8003F38C

			/* begin block 1.4.1 */
				// Start line: 2114
				// Start offset: 0x8003F3BC

				/* begin block 1.4.1.1 */
					// Start line: 2119
					// Start offset: 0x8003F3CC

					/* begin block 1.4.1.1.1 */
						// Start line: 2120
						// Start offset: 0x8003F410

						/* begin block 1.4.1.1.1.1 */
							// Start line: 2121
							// Start offset: 0x8003F410
							// Variables:
						// 		struct tDialogMessageString *this; // $a0

							/* begin block 1.4.1.1.1.1.1 */
								// Start line: 2121
								// Start offset: 0x8003F410
							/* end block 1.4.1.1.1.1.1 */
							// End offset: 0x8003F410
							// End Line: 2121
						/* end block 1.4.1.1.1.1 */
						// End offset: 0x8003F410
						// End Line: 2121
					/* end block 1.4.1.1.1 */
					// End offset: 0x8003F410
					// End Line: 2121
				/* end block 1.4.1.1 */
				// End offset: 0x8003F454
				// End Line: 2128

				/* begin block 1.4.1.2 */
					// Start line: 2133
					// Start offset: 0x8003F45C

					/* begin block 1.4.1.2.1 */
						// Start line: 2134
						// Start offset: 0x8003F46C

						/* begin block 1.4.1.2.1.1 */
							// Start line: 2135
							// Start offset: 0x8003F46C

							/* begin block 1.4.1.2.1.1.1 */
								// Start line: 2135
								// Start offset: 0x8003F47C

								/* begin block 1.4.1.2.1.1.1.1 */
									// Start line: 2135
									// Start offset: 0x8003F47C

									/* begin block 1.4.1.2.1.1.1.1.1 */
										// Start line: 2135
										// Start offset: 0x8003F47C
									/* end block 1.4.1.2.1.1.1.1.1 */
									// End offset: 0x8003F47C
									// End Line: 2135
								/* end block 1.4.1.2.1.1.1.1 */
								// End offset: 0x8003F47C
								// End Line: 2135
							/* end block 1.4.1.2.1.1.1 */
							// End offset: 0x8003F488
							// End Line: 2135
						/* end block 1.4.1.2.1.1 */
						// End offset: 0x8003F488
						// End Line: 2135

						/* begin block 1.4.1.2.1.2 */
							// Start line: 2135
							// Start offset: 0x8003F488

							/* begin block 1.4.1.2.1.2.1 */
								// Start line: 2135
								// Start offset: 0x8003F488
							/* end block 1.4.1.2.1.2.1 */
							// End offset: 0x8003F488
							// End Line: 2135
						/* end block 1.4.1.2.1.2 */
						// End offset: 0x8003F488
						// End Line: 2135

						/* begin block 1.4.1.2.1.3 */
							// Start line: 2136
							// Start offset: 0x8003F4AC
							// Variables:
						// 		struct tDialogMessageString *this; // $s0

							/* begin block 1.4.1.2.1.3.1 */
								// Start line: 2136
								// Start offset: 0x8003F4AC
							/* end block 1.4.1.2.1.3.1 */
							// End offset: 0x8003F4AC
							// End Line: 2136
						/* end block 1.4.1.2.1.3 */
						// End offset: 0x8003F4AC
						// End Line: 2136
					/* end block 1.4.1.2.1 */
					// End offset: 0x8003F4AC
					// End Line: 2136

					/* begin block 1.4.1.2.2 */
						// Start line: 2140
						// Start offset: 0x8003F4C8

						/* begin block 1.4.1.2.2.1 */
							// Start line: 2141
							// Start offset: 0x8003F4C8

							/* begin block 1.4.1.2.2.1.1 */
								// Start line: 2141
								// Start offset: 0x8003F4D8

								/* begin block 1.4.1.2.2.1.1.1 */
									// Start line: 2141
									// Start offset: 0x8003F4D8

									/* begin block 1.4.1.2.2.1.1.1.1 */
										// Start line: 2141
										// Start offset: 0x8003F4D8
									/* end block 1.4.1.2.2.1.1.1.1 */
									// End offset: 0x8003F4D8
									// End Line: 2141
								/* end block 1.4.1.2.2.1.1.1 */
								// End offset: 0x8003F4D8
								// End Line: 2141
							/* end block 1.4.1.2.2.1.1 */
							// End offset: 0x8003F4E4
							// End Line: 2141
						/* end block 1.4.1.2.2.1 */
						// End offset: 0x8003F4E4
						// End Line: 2141

						/* begin block 1.4.1.2.2.2 */
							// Start line: 2142
							// Start offset: 0x8003F4E4

							/* begin block 1.4.1.2.2.2.1 */
								// Start line: 2142
								// Start offset: 0x8003F4E4

								/* begin block 1.4.1.2.2.2.1.1 */
									// Start line: 2142
									// Start offset: 0x8003F4E4
								/* end block 1.4.1.2.2.2.1.1 */
								// End offset: 0x8003F4E4
								// End Line: 2142
							/* end block 1.4.1.2.2.2.1 */
							// End offset: 0x8003F4E4
							// End Line: 2142
						/* end block 1.4.1.2.2.2 */
						// End offset: 0x8003F504
						// End Line: 2144
					/* end block 1.4.1.2.2 */
					// End offset: 0x8003F504
					// End Line: 2144
				/* end block 1.4.1.2 */
				// End offset: 0x8003F504
				// End Line: 2144

				/* begin block 1.4.1.3 */
					// Start line: 2148
					// Start offset: 0x8003F50C
					// Variables:
				// 		struct tDialogMessageString *this; // $s0

					/* begin block 1.4.1.3.1 */
						// Start line: 2148
						// Start offset: 0x8003F50C
					/* end block 1.4.1.3.1 */
					// End offset: 0x8003F50C
					// End Line: 2148
				/* end block 1.4.1.3 */
				// End offset: 0x8003F50C
				// End Line: 2148

				/* begin block 1.4.1.4 */
					// Start line: 2154
					// Start offset: 0x8003F514
					// Variables:
				// 		struct tDialogMessageString *this; // $s0

					/* begin block 1.4.1.4.1 */
						// Start line: 2154
						// Start offset: 0x8003F514
					/* end block 1.4.1.4.1 */
					// End offset: 0x8003F514
					// End Line: 2154
				/* end block 1.4.1.4 */
				// End offset: 0x8003F514
				// End Line: 2154

				/* begin block 1.4.1.5 */
					// Start line: 2160
					// Start offset: 0x8003F51C
					// Variables:
				// 		struct tDialogMessageString *this; // $s0

					/* begin block 1.4.1.5.1 */
						// Start line: 2160
						// Start offset: 0x8003F51C
					/* end block 1.4.1.5.1 */
					// End offset: 0x8003F51C
					// End Line: 2160
				/* end block 1.4.1.5 */
				// End offset: 0x8003F51C
				// End Line: 2160

				/* begin block 1.4.1.6 */
					// Start line: 2166
					// Start offset: 0x8003F544
					// Variables:
				// 		struct tDialogMessageString *this; // $s0

					/* begin block 1.4.1.6.1 */
						// Start line: 2166
						// Start offset: 0x8003F544
					/* end block 1.4.1.6.1 */
					// End offset: 0x8003F544
					// End Line: 2166
				/* end block 1.4.1.6 */
				// End offset: 0x8003F544
				// End Line: 2166

				/* begin block 1.4.1.7 */
					// Start line: 2172
					// Start offset: 0x8003F54C
					// Variables:
				// 		struct tDialogMessageString *this; // $s0

					/* begin block 1.4.1.7.1 */
						// Start line: 2172
						// Start offset: 0x8003F54C
					/* end block 1.4.1.7.1 */
					// End offset: 0x8003F54C
					// End Line: 2172
				/* end block 1.4.1.7 */
				// End offset: 0x8003F54C
				// End Line: 2172

				/* begin block 1.4.1.8 */
					// Start line: 2178
					// Start offset: 0x8003F554
					// Variables:
				// 		struct tDialogMessageString *this; // $s0

					/* begin block 1.4.1.8.1 */
						// Start line: 2178
						// Start offset: 0x8003F554
					/* end block 1.4.1.8.1 */
					// End offset: 0x8003F554
					// End Line: 2178
				/* end block 1.4.1.8 */
				// End offset: 0x8003F554
				// End Line: 2178
			/* end block 1.4.1 */
			// End offset: 0x8003F578
			// End Line: 2184
		/* end block 1.4 */
		// End offset: 0x8003F578
		// End Line: 2184
	/* end block 1 */
	// End offset: 0x8003F578
	// End Line: 2184

	/* begin block 2 */
		// Start line: 4576
	/* end block 2 */
	// End Line: 4577

	/* begin block 3 */
		// Start line: 4580
	/* end block 3 */
	// End Line: 4581

	/* begin block 4 */
		// Start line: 4580
	/* end block 4 */
	// End Line: 4581

/* WARNING: Type propagation algorithm not settling */

void SetDialog__25tScreenPinkSlipsCarSelect(tScreenPinkSlipsCarSelect *this)

{
  byte bVar1;
  char *pcVar2;
  char *__format;
  undefined2 uVar3;
  int wordnum;
  uint uVar4;
  
  bVar1 = *(byte *)&(FEApp->helpPopup).numItems;
  uVar4 = (uint)bVar1;
  uVar3 = 0x3c;
  if (bVar1 == 0) {
    uVar3 = 0xffc4;
  }
  *(undefined2 *)
   &(this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.tDialogBase.startTicks = 0;
  *(undefined2 *)
   ((int)&(this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.tDialogBase.startTicks +
   2) = uVar3;
  *(ushort *)
   ((this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.tDialogBase.tScreen._vf + 2) =
       (ushort)bVar1;
  if (((PinkSlipsScreenState != CardLoadedFine) && (bVar1 == 1)) || (this->fStartCheckTick != 0)) {
switchD_8003f3b4_caseD_7:
    Hide__11tDialogBase((tDialogBase *)
                        &(this->tScreenCarSelectTwoPlayer).tScreenCarSelect.fCameraRotation);
    return;
  }
  if ((&PinkSlipsScreenState)[uVar4] != NoCardInserted) {
    this->waitfordialog = 0;
  }
  switch((&PinkSlipsScreenState)[uVar4]) {
  case NoCardInserted:
    if (this->pCI == (CARDINFO_def *)0x0) {
      if (this->waitfordialog == 0) {
        *(uchar **)&this->waitfordialog = ticks;
      }
      wordnum = uVar4 + 0x2ab;
      if (799 < (int)(ticks + -this->waitfordialog)) {
        wordnum = uVar4 + 0x2a9;
      }
      __format = TextSys_Word__Fi(wordnum);
      *(char **)&(this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.tDialogBase.
                 fDefault = __format;
      Display__11tDialogBase
                ((tDialogBase *)&(this->tScreenCarSelectTwoPlayer).tScreenCarSelect.fCameraRotation)
      ;
      return;
    }
    if (this->waitfordialog == 0) {
      *(uchar **)&this->waitfordialog = ticks;
    }
    if ((int)(ticks + -this->waitfordialog) < 0x385) {
      return;
    }
    this->waitfordialog = 0;
    goto LAB_8003f574;
  case CardFailed:
    wordnum = uVar4 + 0x2ad;
    goto LAB_8003f520;
  case CardFailedNotFound:
    wordnum = uVar4 + 0x2af;
    goto LAB_8003f520;
  case CardFailedUnformatted:
    wordnum = uVar4 + 0x2b1;
LAB_8003f520:
    __format = TextSys_Word__Fi(wordnum);
    *(char **)&(this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.tDialogBase.fDefault
         = __format;
    Display__11tDialogBase
              ((tDialogBase *)&(this->tScreenCarSelectTwoPlayer).tScreenCarSelect.fCameraRotation);
    this->pCI = (CARDINFO_def *)&DAT_00000001;
    this->waitfordialog = 0;
    return;
  case NotEnoughCars:
    wordnum = uVar4 + 0x32d;
    break;
  case TooManyCars:
    wordnum = uVar4 + 0x32f;
    break;
  case CardLoadedFine:
    if ((*(int *)(&(FEApp->helpPopup).lefttext + uVar4 * 2) == 0) &&
       ((&PinkSlipsScreenState)[1 - uVar4] == CardLoadedFine)) {
      Hide__11tDialogBase((tDialogBase *)
                          &(this->tScreenCarSelectTwoPlayer).tScreenCarSelect.fCameraRotation);
      this->waitfordialog = 0;
      goto LAB_8003f574;
    }
    __format = TextSys_Word__Fi(0x2a8);
    pcVar2 = PlayerName__Fi(1 - uVar4);
    sprintf(WaitingString,__format,pcVar2);
    *(undefined4 *)
     &(this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.tDialogBase.fDefault =
         0x80052c58;
    goto LAB_8003f568;
  case WhoCaresWeBeExiting:
    goto switchD_8003f3b4_caseD_7;
  case CardCurrentlyLoading:
    wordnum = uVar4 + 0x280;
    break;
  default:
    return;
  }
  __format = TextSys_Word__Fi(wordnum);
  *(char **)&(this->tScreenCarSelectTwoPlayer).CarDialog.tDialogMessageString.tDialogBase.fDefault =
       __format;
LAB_8003f568:
  Display__11tDialogBase
            ((tDialogBase *)&(this->tScreenCarSelectTwoPlayer).tScreenCarSelect.fCameraRotation);
  this->waitfordialog = 0;
LAB_8003f574:
  this->pCI = (CARDINFO_def *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__25tScreenPinkSlipsCarSelect7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenPinkSlipsCarSelect *this /*$a0*/, enum tInputKeyType *keyval /*$a2*/)
 // line 2190, offset 0x8003f590
	/* begin block 1 */
		// Start line: 2191
		// Start offset: 0x8003F590
	/* end block 1 */
	// End offset: 0x8003F628
	// End Line: 2201

	/* begin block 2 */
		// Start line: 4761
	/* end block 2 */
	// End Line: 4762

	/* begin block 3 */
		// Start line: 4764
	/* end block 3 */
	// End Line: 4765

	/* begin block 4 */
		// Start line: 4764
	/* end block 4 */
	// End Line: 4765

void ProcessInput__25tScreenPinkSlipsCarSelect7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tScreenPinkSlipsCarSelect *this,tInputKeyType *keyval)

{
  int *in_a2;
  
  if (*in_a2 != 0x10) {
    if ((*in_a2 != 4) &&
       ((PinkSlipsScreenState != CardLoadedFine ||
        (PinkSlipsCarSelectState_80052038 != CardLoadedFine)))) {
      *in_a2 = 1;
    }
    if (*in_a2 != 0x10) {
      return;
    }
  }
  if ((PinkSlipsScreenState != CardLoadedFine) ||
     (PinkSlipsCarSelectState_80052038 != CardLoadedFine)) {
    this->fStartCheckTick = 1;
    PinkSlipsScreenState = WhoCaresWeBeExiting;
    PinkSlipsCarSelectState_80052038 = WhoCaresWeBeExiting;
    Hide__11tDialogBase((tDialogBase *)
                        &(this->tScreenCarSelectTwoPlayer).tScreenCarSelect.fCameraRotation);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__25tScreenPinkSlipsCarSelectRsT1PPcT3(struct tScreenPinkSlipsCarSelect *this /*$v1*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$s1*/, char **swapFileName /*stack 16*/)
 // line 2205, offset 0x8003f638
	/* begin block 1 */
		// Start line: 2206
		// Start offset: 0x8003F638
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -224
	/* end block 1 */
	// End offset: 0x8003F638
	// End Line: 2206

	/* begin block 2 */
		// Start line: 4791
	/* end block 2 */
	// End Line: 4792

	/* begin block 3 */
		// Start line: 4796
	/* end block 3 */
	// End Line: 4797

	/* begin block 4 */
		// Start line: 4796
	/* end block 4 */
	// End Line: 4797

void GetShapeInfo__25tScreenPinkSlipsCarSelectRsT1PPcT3
               (tScreenPinkSlipsCarSelect *this,short *numPermShapes,short *numSwapShapes,
               char **permFileName,char **swapFileName)

{
  tCarInfo tStack224;
  
  *numPermShapes = 0x34;
  *numSwapShapes = 5;
  *(undefined2 *)((int)(this->tScreenCarSelectTwoPlayer).tScreenCarSelect.fCurrentOverlays + 0xe) =
       0xffff;
  (this->tScreenCarSelectTwoPlayer).tScreenCarSelect.fState = -1;
  (this->tScreenCarSelectTwoPlayer).tScreenCarSelect.fPreviousCar = -1;
  GetStockCar__11tCarManagersR8tCarInfo(&carManager,0,&tStack224);
  *permFileName = s_zcarsb_80011b30;
  sprintf(gSwapFileName,(char *)&PTR_DAT_80011adc,tStack224.fSmallName);
  *swapFileName = gSwapFileName;
  return;
}





