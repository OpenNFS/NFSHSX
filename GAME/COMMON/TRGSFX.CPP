#include "THISDUST.H"
#include "TRGSFX.H"


// decompiled code
// original method signature: 
// void /*$ra*/ TrgSfx_AddEnviroEffect__FiiP8coorddefT2(int obj /*$a0*/, int type /*$a1*/, struct coorddef *emitterpt /*$a2*/, struct coorddef *vec /*$a3*/)
 // line 45, offset 0x800bb068
	/* begin block 1 */
		// Start line: 46
		// Start offset: 0x800BB068
	/* end block 1 */
	// End offset: 0x800BB0C0
	// End Line: 54

	/* begin block 2 */
		// Start line: 90
	/* end block 2 */
	// End Line: 91

	/* begin block 3 */
		// Start line: 90
	/* end block 3 */
	// End Line: 91

void TrgSfx_AddEnviroEffect__FiiP8coorddefT2(int obj,int type,coorddef *emitterpt,coorddef *vec)

{
  if (10 < simGlobal.gameTicks - (&gTEnviroEffect)[obj & 7]) {
    (&gTEnviroEffect)[obj & 7] = simGlobal.gameTicks;
    Souffle_Add__FP8coorddefiT0iii(emitterpt,type,vec,0,0,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrgSfx_AddCarSfx__FiP8coorddefiT1(int car /*$a0*/, struct coorddef *skidpt /*$a1*/, int type /*$a2*/, struct coorddef *vec /*$a3*/)
 // line 64, offset 0x800bb0d0
	/* begin block 1 */
		// Start line: 65
		// Start offset: 0x800BB0D0
	/* end block 1 */
	// End offset: 0x800BB12C
	// End Line: 73

	/* begin block 2 */
		// Start line: 121
	/* end block 2 */
	// End Line: 122

	/* begin block 3 */
		// Start line: 132
	/* end block 3 */
	// End Line: 133

	/* begin block 4 */
		// Start line: 132
	/* end block 4 */
	// End Line: 133

void TrgSfx_AddCarSfx__FiP8coorddefiT1(int car,coorddef *skidpt,int type,coorddef *vec)

{
  if (7 < simGlobal.gameTicks - (&gTAddCarSfx)[car & 7]) {
    (&gTAddCarSfx)[car & 7] = simGlobal.gameTicks;
    Souffle_Add__FP8coorddefiT0iii(skidpt,type,vec,0,0,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrgSfx_AddCarWheelSfx__FiiP8coorddefiT2i(int car /*$a0*/, int wheel /*$a1*/, struct coorddef *skidpt /*$a2*/, int type /*$a3*/, struct coorddef *vec /*stack 16*/, int delay /*stack 20*/)
 // line 77, offset 0x800bb13c
	/* begin block 1 */
		// Start line: 78
		// Start offset: 0x800BB13C

		/* begin block 1.1 */
			// Start line: 78
			// Start offset: 0x800BB13C

			/* begin block 1.1.1 */
				// Start line: 83
				// Start offset: 0x800BB184
				// Variables:
			// 		struct coorddef dir; // stack offset -24
			/* end block 1.1.1 */
			// End offset: 0x800BB1DC
			// End Line: 89
		/* end block 1.1 */
		// End offset: 0x800BB1DC
		// End Line: 89
	/* end block 1 */
	// End offset: 0x800BB1DC
	// End Line: 89

	/* begin block 2 */
		// Start line: 157
	/* end block 2 */
	// End Line: 158

	/* begin block 3 */
		// Start line: 162
	/* end block 3 */
	// End Line: 163

	/* begin block 4 */
		// Start line: 162
	/* end block 4 */
	// End Line: 163

void TrgSfx_AddCarWheelSfx__FiiP8coorddefiT2i
               (int car,int wheel,coorddef *skidpt,int type,coorddef *vec,int delay)

{
  coorddef local_18;
  
  if (delay < simGlobal.gameTicks - (&gTAddCarWheelSfx)[(car & 7U) * 4 + wheel]) {
    local_18.y = vec->y;
    local_18.x = vec->x >> 1;
    local_18.z = vec->z >> 1;
    (&gTAddCarWheelSfx)[(car & 7U) * 4 + wheel] = simGlobal.gameTicks;
    Souffle_Add__FP8coorddefiT0iii(skidpt,type,&local_18,0,0,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TrgSfx_AddCarExtraCheck__Fii(int car /*$a0*/, int wheel /*$a1*/)
 // line 93, offset 0x800bb1ec
	/* begin block 1 */
		// Start line: 94
		// Start offset: 0x800BB1EC
	/* end block 1 */
	// End offset: 0x800BB1EC
	// End Line: 96

	/* begin block 2 */
		// Start line: 203
	/* end block 2 */
	// End Line: 204

	/* begin block 3 */
		// Start line: 208
	/* end block 3 */
	// End Line: 209

	/* begin block 4 */
		// Start line: 208
	/* end block 4 */
	// End Line: 209

	/* begin block 5 */
		// Start line: 210
	/* end block 5 */
	// End Line: 211

void * TrgSfx_AddCarExtraCheck__Fii(int car,int wheel)

{
  return (void *)((uint)(simGlobal.gameTicks - (&gTAddCarExtraSfx)[(car & 7U) * 4 + wheel] < 8) ^ 1)
  ;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrgSfx_AddCarExtraSfx__FiiP8coorddefiT2iii(int car /*$a0*/, int wheel /*$a1*/, struct coorddef *skidpt /*$a2*/, int type /*$a3*/, struct coorddef *vec /*stack 16*/, int velY /*stack 20*/, int ground /*stack 24*/, int colour /*stack 28*/)
 // line 101, offset 0x800bb228
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x800BB228

		/* begin block 1.1 */
			// Start line: 102
			// Start offset: 0x800BB228
			// Variables:
		// 		struct coorddef dir; // stack offset -24
		/* end block 1.1 */
		// End offset: 0x800BB228
		// End Line: 102
	/* end block 1 */
	// End offset: 0x800BB228
	// End Line: 102

	/* begin block 2 */
		// Start line: 220
	/* end block 2 */
	// End Line: 221

	/* begin block 3 */
		// Start line: 224
	/* end block 3 */
	// End Line: 225

	/* begin block 4 */
		// Start line: 224
	/* end block 4 */
	// End Line: 225

void TrgSfx_AddCarExtraSfx__FiiP8coorddefiT2iii
               (int car,int wheel,coorddef *skidpt,int type,coorddef *vec,int velY,int ground,
               int colour)

{
  coorddef local_18;
  
  local_18.x = vec->x;
  local_18.z = vec->z;
  local_18.y = vec->y + (velY >> 3);
  (&gTAddCarExtraSfx)[(car & 7U) * 4 + wheel] = simGlobal.gameTicks;
  Souffle_Add__FP8coorddefiT0iii(skidpt,type,&local_18,0,ground,colour);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrgSfx_AddCarSplash__FiiP8coorddefiT2ii(int car /*$a0*/, int wheel /*$a1*/, struct coorddef *skidpt /*$a2*/, int type /*$a3*/, struct coorddef *vec /*stack 16*/, int delay /*stack 20*/, int velXZ /*stack 24*/)
 // line 122, offset 0x800bb2bc
	/* begin block 1 */
		// Start line: 123
		// Start offset: 0x800BB2BC

		/* begin block 1.1 */
			// Start line: 123
			// Start offset: 0x800BB2BC

			/* begin block 1.1.1 */
				// Start line: 128
				// Start offset: 0x800BB304
				// Variables:
			// 		struct coorddef dir; // stack offset -24
			/* end block 1.1.1 */
			// End offset: 0x800BB360
			// End Line: 134
		/* end block 1.1 */
		// End offset: 0x800BB360
		// End Line: 134
	/* end block 1 */
	// End offset: 0x800BB360
	// End Line: 134

	/* begin block 2 */
		// Start line: 289
	/* end block 2 */
	// End Line: 290

	/* begin block 3 */
		// Start line: 300
	/* end block 3 */
	// End Line: 301

	/* begin block 4 */
		// Start line: 300
	/* end block 4 */
	// End Line: 301

void TrgSfx_AddCarSplash__FiiP8coorddefiT2ii
               (int car,int wheel,coorddef *skidpt,int type,coorddef *vec,int delay,int velXZ)

{
  coorddef local_18;
  
  if (delay < simGlobal.gameTicks - (&gTAddCarWheelSfx)[(car & 7U) * 4 + wheel]) {
    local_18.y = vec->y;
    local_18.x = vec->x >> 1;
    local_18.z = vec->z >> 1;
    (&gTAddCarWheelSfx)[(car & 7U) * 4 + wheel] = simGlobal.gameTicks;
    Souffle_Add__FP8coorddefiT0iii(skidpt,type,&local_18,velXZ,0,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrgSfx_CrashCar__FP8coorddef(struct coorddef *location /*$s0*/)
 // line 146, offset 0x800bb370
	/* begin block 1 */
		// Start line: 147
		// Start offset: 0x800BB370
		// Variables:
	// 		struct Souffle_tISouffle *is; // $v1
	/* end block 1 */
	// End offset: 0x800BB40C
	// End Line: 164

	/* begin block 2 */
		// Start line: 345
	/* end block 2 */
	// End Line: 346

	/* begin block 3 */
		// Start line: 358
	/* end block 3 */
	// End Line: 359

	/* begin block 4 */
		// Start line: 358
	/* end block 4 */
	// End Line: 359

	/* begin block 5 */
		// Start line: 362
	/* end block 5 */
	// End Line: 363

void TrgSfx_CrashCar__FP8coorddef(coorddef *location)

{
  uint uVar1;
  Souffle_tISouffle *pSVar2;
  
  if (4 < simGlobal.gameTicks - gTAddCSmoke) {
    gTAddCSmoke = simGlobal.gameTicks;
    uVar1 = random();
    if ((uVar1 & 0xf) != 0) {
      pSVar2 = Souffle_Add__FP8coorddefiT0iii(location,1,(coorddef *)0x0,0,0,0);
      (pSVar2->motion).y = (pSVar2->motion).y + 0xf5c;
    }
    pSVar2 = Souffle_Add__FP8coorddefiT0iii(location,3,(coorddef *)0x0,0,0,0);
    (pSVar2->motion).y = (pSVar2->motion).y + 0xf5c;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrgSfx_AddSkidmark__FiiP8coorddefiiP8Car_tObji(int car /*$s0*/, int wheel /*$s1*/, struct coorddef *skidpt /*$t2*/, int end /*$t1*/, int intensity /*stack 16*/, struct Car_tObj *carObj /*stack 20*/, int type /*stack 24*/)
 // line 179, offset 0x800bb41c
	/* begin block 1 */
		// Start line: 180
		// Start offset: 0x800BB41C
		// Variables:
	// 		struct coorddef *linvel; // $a1
	// 		int velXZ; // $t3
	// 		int slice; // $t5
	// 		int tireWidth; // $t0

		/* begin block 1.1 */
			// Start line: 190
			// Start offset: 0x800BB46C
			// Variables:
		// 		struct CVECTOR color; // stack offset -24

			/* begin block 1.1.1 */
				// Start line: 190
				// Start offset: 0x800BB46C
				// Variables:
			// 		int temp; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800BB4A8
			// End Line: 198

			/* begin block 1.1.2 */
				// Start line: 198
				// Start offset: 0x800BB4A8

				/* begin block 1.1.2.1 */
					// Start line: 221
					// Start offset: 0x800BB588

					/* begin block 1.1.2.1.1 */
						// Start line: 223
						// Start offset: 0x800BB588

						/* begin block 1.1.2.1.1.1 */
							// Start line: 234
							// Start offset: 0x800BB65C
							// Variables:
						// 		int value; // $a3

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 235
								// Start offset: 0x800BB65C

								/* begin block 1.1.2.1.1.1.1.1 */
									// Start line: 238
									// Start offset: 0x800BB694
									// Variables:
								// 		int dx; // $a1
								// 		int dz; // $a0

									/* begin block 1.1.2.1.1.1.1.1.1 */
										// Start line: 241
										// Start offset: 0x800BB6C8
										// Variables:
									// 		int dist; // $v0
									// 		int MaxDist; // $v1
									/* end block 1.1.2.1.1.1.1.1.1 */
									// End offset: 0x800BB708
									// End Line: 247
								/* end block 1.1.2.1.1.1.1.1 */
								// End offset: 0x800BB708
								// End Line: 247
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x800BB708
							// End Line: 247
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x800BB8EC
						// End Line: 272
					/* end block 1.1.2.1.1 */
					// End offset: 0x800BB8EC
					// End Line: 272
				/* end block 1.1.2.1 */
				// End offset: 0x800BB8EC
				// End Line: 272
			/* end block 1.1.2 */
			// End offset: 0x800BB8EC
			// End Line: 272
		/* end block 1.1 */
		// End offset: 0x800BB8EC
		// End Line: 272
	/* end block 1 */
	// End offset: 0x800BB8EC
	// End Line: 272

	/* begin block 2 */
		// Start line: 412
	/* end block 2 */
	// End Line: 413

	/* begin block 3 */
		// Start line: 428
	/* end block 3 */
	// End Line: 429

	/* begin block 4 */
		// Start line: 428
	/* end block 4 */
	// End Line: 429

void TrgSfx_AddSkidmark__FiiP8coorddefiiP8Car_tObji
               (int car,int wheel,coorddef *skidpt,int end,int intensity,Car_tObj *carObj,int type)

{
  bool bVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int tireWidth;
  int iVar7;
  int slice;
  uint uVar8;
  CVECTOR local_18 [2];
  
  iVar7 = (carObj->N).speedXZ;
  slice = (int)(carObj->N).simRoadInfo.slice;
  if (wheel < 2) {
    tireWidth = (carObj->N).wheelWidthF;
  }
  else {
    tireWidth = (carObj->N).wheelWidthB;
  }
  uVar8 = car & 7;
  iVar2 = (intensity * 0xff) / 0x70000;
  uVar3 = 0xff;
  if (iVar2 < 0x100) {
    uVar3 = (char)iVar2;
  }
  local_18[0] = (CVECTOR)CONCAT31(CONCAT21(CONCAT11(local_18[0].cd,uVar3),uVar3),uVar3);
  skidpt->x = skidpt->x + ((carObj->N).linearVel.x >> 6);
  skidpt->y = skidpt->y + ((carObj->N).linearVel.y >> 6);
  iVar6 = skidpt->z + ((carObj->N).linearVel.z >> 6);
  skidpt->z = iVar6;
  iVar2 = (&gStatusSm)[uVar8 * 4 + wheel];
  if (iVar2 == 0) {
    if (end == 0) {
      (&gStatusSm)[uVar8 * 4 + wheel] = 1;
      (&gPrevSkidSm)[uVar8 * 4 + wheel].clr = local_18[0];
      (&gPrevSkidSm)[uVar8 * 4 + wheel].type = type;
      iVar7 = skidpt->y;
      slice = skidpt->z;
      (&gPrevSkidSm)[uVar8 * 4 + wheel].pt.x = skidpt->x;
      (&gPrevSkidSm)[uVar8 * 4 + wheel].pt.y = iVar7;
      (&gPrevSkidSm)[uVar8 * 4 + wheel].pt.z = slice;
      (&gPrevSkidSm)[uVar8 * 4 + wheel].nseg = (Skidmark_Segment *)0x0;
    }
  }
  else {
    if (end == 0) {
      bVar1 = false;
      if ((&gPrevSkidSm)[uVar8 * 4 + wheel].nseg != (Skidmark_Segment *)0x0) {
        iVar4 = (&gPrevSkidSm)[uVar8 * 4 + wheel].pt.x;
        iVar2 = iVar4 - skidpt->x;
        if (iVar2 < 1) {
          iVar2 = skidpt->x - iVar4;
        }
        iVar4 = (&gPrevSkidSm)[uVar8 * 4 + wheel].pt.z;
        iVar5 = iVar4 - iVar6;
        if (iVar5 < 1) {
          iVar5 = iVar6 - iVar4;
        }
        iVar6 = 0xc000;
        if (iVar7 < 0xa0000) {
          iVar6 = 0x3000;
        }
        if (iVar5 < iVar2) {
          iVar2 = iVar2 + (iVar5 >> 2);
        }
        else {
          iVar2 = iVar5 + (iVar2 >> 2);
        }
        if (iVar2 < iVar6) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        if ((&gStatusSm)[uVar8 * 4 + wheel] == 2) {
          Skidmark_Stretch__FP16Skidmark_SegmentiP5tSkidP8coorddefP7CVECTORii
                    (gSaveSeg84[uVar8 * 4 + wheel],gSaveChunk[uVar8 * 4 + wheel],
                     &gPrevSkidSm + wheel + uVar8 * 4,skidpt,local_18,tireWidth,type);
        }
        else {
          (&gStatusSm)[uVar8 * 4 + wheel] = 2;
          Skidmark_AddStretch__FPP16Skidmark_SegmentPiP5tSkidP8coorddefP7CVECTORiii
                    (gSaveSeg84 + wheel + uVar8 * 4,gSaveChunk + wheel + uVar8 * 4,
                     &gPrevSkidSm + wheel + uVar8 * 4,skidpt,local_18,tireWidth,type,slice);
        }
      }
      else {
        if ((&gStatusSm)[uVar8 * 4 + wheel] == 2) {
          Skidmark_EndStretch__FP16Skidmark_SegmentiP5tSkidP8coorddefP7CVECTORii
                    (gSaveSeg84[uVar8 * 4 + wheel],gSaveChunk[uVar8 * 4 + wheel],
                     &gPrevSkidSm + wheel + uVar8 * 4,skidpt,local_18,tireWidth,type);
        }
        else {
          Skidmark_Add__FP5tSkidP8coorddefP7CVECTORiii
                    (&gPrevSkidSm + wheel + uVar8 * 4,skidpt,local_18,tireWidth,type,slice);
        }
        (&gStatusSm)[uVar8 * 4 + wheel] = 1;
      }
    }
    else {
      if (iVar2 == 2) {
        Skidmark_Stretch__FP16Skidmark_SegmentiP5tSkidP8coorddefP7CVECTORii
                  (gSaveSeg84[uVar8 * 4 + wheel],gSaveChunk[uVar8 * 4 + wheel],
                   &gPrevSkidSm + wheel + uVar8 * 4,skidpt,local_18,tireWidth,type);
      }
      else {
        Skidmark_Add__FP5tSkidP8coorddefP7CVECTORiii
                  (&gPrevSkidSm + wheel + uVar8 * 4,skidpt,local_18,tireWidth,type,slice);
      }
      (&gStatusSm)[uVar8 * 4 + wheel] = 0;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrgSfx_InitTrgSfx__Fv()
 // line 286, offset 0x800bb900
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x800BB900
		// Variables:
	// 		int i; // $t2
	// 		int j; // $t0
	// 		int t; // $t1
	/* end block 1 */
	// End offset: 0x800BB9D0
	// End Line: 313

	/* begin block 2 */
		// Start line: 661
	/* end block 2 */
	// End Line: 662

	/* begin block 3 */
		// Start line: 670
	/* end block 3 */
	// End Line: 671

	/* begin block 4 */
		// Start line: 670
	/* end block 4 */
	// End Line: 671

	/* begin block 5 */
		// Start line: 675
	/* end block 5 */
	// End Line: 676

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TrgSfx_InitTrgSfx__Fv(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  iVar1 = simGlobal.gameTicks;
  iVar5 = 0;
  iVar8 = 0;
  piVar7 = &gTAddCarSfx;
  piVar6 = &gTEnviroEffect;
  gTAddCSmoke = simGlobal.gameTicks;
  do {
    iVar4 = 0;
    iVar2 = iVar5 << 4;
    *piVar6 = iVar1;
    *piVar7 = iVar1;
    iVar3 = iVar8;
    do {
      iVar4 = iVar4 + 1;
      *(int *)((int)&gTAddCarWheelSfx + iVar2) = iVar1;
      *(int *)((int)&gTAddCarExtraSfx + iVar2) = iVar1;
      *(undefined4 *)((int)&gStatusSm + iVar2) = 0;
      *(undefined4 *)((int)&gPrevSkidSm.pt.x + iVar3) = 0;
      *(undefined4 *)((int)&gPrevSkidSm.pt.y + iVar3) = 0;
      *(undefined4 *)((int)&gPrevSkidSm.pt.z + iVar3) = 0;
      *(undefined4 *)((int)&gPrevSkidSm.nseg + iVar3) = 0;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 0x1c;
    } while (iVar4 < 4);
    iVar8 = iVar8 + 0x70;
    piVar7 = piVar7 + 1;
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar5 < 8);
  gTAddCarWheelDelay = 8;
  if (GameSetup_gData.commMode == 1) {
    gTAddCarWheelDelay = 0xc;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrgSfx_RestartTrgSfx__Fv()
 // line 316, offset 0x800bb9d8
	/* begin block 1 */
		// Start line: 317
		// Start offset: 0x800BB9D8
	/* end block 1 */
	// End offset: 0x800BB9D8
	// End Line: 317

	/* begin block 2 */
		// Start line: 757
	/* end block 2 */
	// End Line: 758

	/* begin block 3 */
		// Start line: 761
	/* end block 3 */
	// End Line: 762

	/* begin block 4 */
		// Start line: 761
	/* end block 4 */
	// End Line: 762

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TrgSfx_RestartTrgSfx__Fv(void)

{
  TrgSfx_KillTrgSfx__Fv();
  TrgSfx_InitTrgSfx__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrgSfx_KillTrgSfx__Fv()
 // line 322, offset 0x800bba00
	/* begin block 1 */
		// Start line: 323
		// Start offset: 0x800BBA00
	/* end block 1 */
	// End offset: 0x800BBA00
	// End Line: 323

	/* begin block 2 */
		// Start line: 769
	/* end block 2 */
	// End Line: 770

	/* begin block 3 */
		// Start line: 773
	/* end block 3 */
	// End Line: 774

	/* begin block 4 */
		// Start line: 773
	/* end block 4 */
	// End Line: 774

	/* begin block 5 */
		// Start line: 774
	/* end block 5 */
	// End Line: 775

	/* begin block 6 */
		// Start line: 774
	/* end block 6 */
	// End Line: 775

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TrgSfx_KillTrgSfx__Fv(void)

{
  return;
}





