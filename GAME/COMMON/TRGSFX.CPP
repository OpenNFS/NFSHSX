#include "NFS4.H"
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

void TrgSfx_AddEnviroEffect__FiiP8coorddefT2(int obj,int type,coorddef *emitterpt,coorddef *vec)
{
  if (10 < (int)-(&gTEnviroEffect)[obj & 7]) {
    (&gTEnviroEffect)[obj & 7] = 0;
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

void TrgSfx_AddCarSfx__FiP8coorddefiT1(int car,coorddef *skidpt,int type,coorddef *vec)
{
  if (7 < (int)-(&gTAddCarSfx)[car & 7]) {
    (&gTAddCarSfx)[car & 7] = 0;
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

void TrgSfx_AddCarWheelSfx__FiiP8coorddefiT2i( (int car,int wheel,coorddef *skidpt,int type,coorddef *vec,int delay)
{
  coorddef local_18;
  
  if (delay < (int)-(&gTAddCarWheelSfx)[(car & 7U) * 4 + wheel]) {
    local_18.y = vec->y;
    local_18.x = vec->x >> 1;
    local_18.z = vec->z >> 1;
    (&gTAddCarWheelSfx)[(car & 7U) * 4 + wheel] = 0;
    Souffle_Add__FP8coorddefiT0iii(skidpt,type,&local_18,0,0,0);
  }
  return;


}




// decompiled code
// original method signature: 
// unsigned int /*$ra*/ TrgSfx_AddCarExtraCheck__Fii(int car /*$a0*/, int wheel /*$a1*/)
 // line 93, offset 0x800bb1ec
	/* begin block 1 */
		// Start line: 94
		// Start offset: 0x800BB1EC
	/* end block 1 */
	// End offset: 0x800BB1EC
	// End Line: 96

uint TrgSfx_AddCarExtraCheck__Fii(int car,int wheel)
{
  return (uint)((int)-(&gTAddCarExtraSfx)[(car & 7U) * 4 + wheel] < 8) ^ 1;


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

void TrgSfx_AddCarExtraSfx__FiiP8coorddefiT2iii( (int car,int wheel,coorddef *skidpt,int type,coorddef *vec,int velY,int ground, int colour)
{
  coorddef local_18;
  
  local_18.x = vec->x;
  local_18.z = vec->z;
  local_18.y = vec->y + (velY >> 3);
  (&gTAddCarExtraSfx)[(car & 7U) * 4 + wheel] = 0;
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

void TrgSfx_AddCarSplash__FiiP8coorddefiT2ii( (int car,int wheel,coorddef *skidpt,int type,coorddef *vec,int delay,int velXZ)
{
  coorddef local_18;
  
  if (delay < (int)-(&gTAddCarWheelSfx)[(car & 7U) * 4 + wheel]) {
    local_18.y = vec->y;
    local_18.x = vec->x >> 1;
    local_18.z = vec->z >> 1;
    (&gTAddCarWheelSfx)[(car & 7U) * 4 + wheel] = 0;
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

void TrgSfx_CrashCar__FP8coorddef(coorddef *location)
{
  uint uVar1;
  Souffle_tISouffle *pSVar2;
  
  if (4 < -iGp00000fa8) {
    iGp00000fa8 = 0;
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

void TrgSfx_AddSkidmark__FiiP8coorddefiiP8Car_tObji( (int car,int wheel,coorddef *skidpt,int end,int intensity,Car_tObj *carObj,int type)
{
  bool bVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  int tireWidth;
  int iVar6;
  int slice;
  uint uVar7;
  CVECTOR local_18 [2];
  
  iVar6 = (carObj->N).speedXZ;
  slice = (int)(carObj->N).simRoadInfo.slice;
  if (wheel < 2) {
    tireWidth = (carObj->N).wheelWidthF;
  }
  else {
    tireWidth = (carObj->N).wheelWidthB;
  }
  uVar7 = car & 7;
  iVar2 = (intensity * 0xff) / 0x70000;
  uVar3 = 0xff;
  if (iVar2 < 0x100) {
    uVar3 = (char)iVar2;
  }
  local_18[0] = (CVECTOR)CONCAT31(CONCAT21(CONCAT11(local_18[0].cd,uVar3),uVar3),uVar3);
  skidpt->x = skidpt->x + ((carObj->N).linearVel.x >> 6);
  skidpt->y = skidpt->y + ((carObj->N).linearVel.y >> 6);
  iVar5 = skidpt->z + ((carObj->N).linearVel.z >> 6);
  iVar4 = wheel * 4 + uVar7 * 0x10;
  skidpt->z = iVar5;
  iVar2 = (&gStatusSm)[uVar7 * 4 + wheel];
  if (iVar2 == 0) {
    if (end == 0) {
      (&gStatusSm)[uVar7 * 4 + wheel] = 1;
      iVar6 = wheel * 0x1c + uVar7 * 0x70;
      *(CVECTOR *)(&DAT_8011e2fc + iVar6) = local_18[0];
      *(int *)(&DAT_8011e300 + iVar6) = type;
      iVar6 = skidpt->y;
      slice = skidpt->z;
      (&gPrevSkidSm)[uVar7 * 0x1c + wheel * 7] = skidpt->x;
      (&DAT_8011e2f4)[uVar7 * 0x1c + wheel * 7] = iVar6;
      (&DAT_8011e2f8)[uVar7 * 0x1c + wheel * 7] = slice;
      (&DAT_8011e304)[uVar7 * 0x1c + wheel * 7] = 0;
    }
  }
  else {
    if (end == 0) {
      bVar1 = false;
      if ((&DAT_8011e304)[uVar7 * 0x1c + wheel * 7] != 0) {
        iVar2 = (&gPrevSkidSm)[uVar7 * 0x1c + wheel * 7] - skidpt->x;
        if (iVar2 < 1) {
          iVar2 = skidpt->x - (&gPrevSkidSm)[uVar7 * 0x1c + wheel * 7];
        }
        iVar4 = (&DAT_8011e2f8)[uVar7 * 0x1c + wheel * 7] - iVar5;
        if (iVar4 < 1) {
          iVar4 = iVar5 - (&DAT_8011e2f8)[uVar7 * 0x1c + wheel * 7];
        }
        iVar5 = 0xc000;
        if (iVar6 < 0xa0000) {
          iVar5 = 0x3000;
        }
        if (iVar4 < iVar2) {
          iVar2 = iVar2 + (iVar4 >> 2);
        }
        else {
          iVar2 = iVar4 + (iVar2 >> 2);
        }
        if (iVar2 < iVar5) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        iVar6 = wheel * 4;
        iVar2 = uVar7 * 0x10;
        if ((&gStatusSm)[uVar7 * 4 + wheel] == 2) {
          Skidmark_Stretch__FP16Skidmark_SegmentiP5tSkidP8coorddefP7CVECTORii
                    (*(Skidmark_Segment **)(&_gSaveSeg + iVar6 + iVar2),
                     *(int *)(&gSaveChunk + iVar6 + iVar2),
                     (tSkid *)(&gPrevSkidSm + wheel * 7 + uVar7 * 0x1c),skidpt,local_18,tireWidth,
                     type);
        }
        else {
          (&gStatusSm)[uVar7 * 4 + wheel] = 2;
          Skidmark_AddStretch__FPP16Skidmark_SegmentPiP5tSkidP8coorddefP7CVECTORiii
                    ((Skidmark_Segment **)(&_gSaveSeg + iVar2 + iVar6),
                     (int *)(&gSaveChunk + iVar2 + iVar6),
                     (tSkid *)(&gPrevSkidSm + wheel * 7 + uVar7 * 0x1c),skidpt,local_18,tireWidth,
                     type,slice);
        }
      }
      else {
        iVar6 = wheel * 4 + uVar7 * 0x10;
        if ((&gStatusSm)[uVar7 * 4 + wheel] == 2) {
          Skidmark_EndStretch__FP16Skidmark_SegmentiP5tSkidP8coorddefP7CVECTORii
                    (*(Skidmark_Segment **)(&_gSaveSeg + iVar6),*(int *)(&gSaveChunk + iVar6),
                     (tSkid *)(&gPrevSkidSm + wheel * 7 + uVar7 * 0x1c),skidpt,local_18,tireWidth,
                     type);
        }
        else {
          Skidmark_Add__FP5tSkidP8coorddefP7CVECTORiii
                    ((tSkid *)(&gPrevSkidSm + wheel * 7 + uVar7 * 0x1c),skidpt,local_18,tireWidth,
                     type,slice);
        }
        (&gStatusSm)[uVar7 * 4 + wheel] = 1;
      }
    }
    else {
      if (iVar2 == 2) {
        Skidmark_Stretch__FP16Skidmark_SegmentiP5tSkidP8coorddefP7CVECTORii
                  (*(Skidmark_Segment **)(&_gSaveSeg + iVar4),*(int *)(&gSaveChunk + iVar4),
                   (tSkid *)(&gPrevSkidSm + wheel * 7 + uVar7 * 0x1c),skidpt,local_18,tireWidth,type
                  );
      }
      else {
        Skidmark_Add__FP5tSkidP8coorddefP7CVECTORiii
                  ((tSkid *)(&gPrevSkidSm + wheel * 7 + uVar7 * 0x1c),skidpt,local_18,tireWidth,type
                   ,slice);
      }
      (&gStatusSm)[uVar7 * 4 + wheel] = 0;
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

void TrgSfx_InitTrgSfx__Fv(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar4 = 0;
  iVar7 = 0;
  puVar6 = &gTAddCarSfx;
  puVar5 = &gTEnviroEffect;
  do {
    iVar3 = 0;
    iVar1 = iVar4 << 4;
    *puVar5 = 0;
    *puVar6 = 0;
    iVar2 = iVar7;
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)((int)&gTAddCarWheelSfx + iVar1) = 0;
      *(undefined4 *)((int)&gTAddCarExtraSfx + iVar1) = 0;
      *(undefined4 *)((int)&gStatusSm + iVar1) = 0;
      *(undefined4 *)((int)&gPrevSkidSm + iVar2) = 0;
      *(undefined4 *)((int)&DAT_8011e2f4 + iVar2) = 0;
      *(undefined4 *)((int)&DAT_8011e2f8 + iVar2) = 0;
      *(undefined4 *)((int)&DAT_8011e304 + iVar2) = 0;
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 0x1c;
    } while (iVar3 < 4);
    iVar7 = iVar7 + 0x70;
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 8);
  uGp00000fa4 = 8;
  if (DAT_801131f8 == 1) {
    uGp00000fa4 = 0xc;
  }
  uGp00000fa8 = 0;
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

void TrgSfx_KillTrgSfx__Fv(void)
{
  return;


}





