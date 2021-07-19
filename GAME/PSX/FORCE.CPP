#include "THISDUST.H"
#include "FORCE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Force_Vbl__Fv()
 // line 61, offset 0x800ca998
	/* begin block 1 */
		// Start line: 62
		// Start offset: 0x800CA998

		/* begin block 1.1 */
			// Start line: 62
			// Start offset: 0x800CA998
			// Variables:
		// 		int i; // $s2

			/* begin block 1.1.1 */
				// Start line: 63
				// Start offset: 0x800CA9C4
				// Variables:
			// 		int padnum; // $s1
			// 		int padstate; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800CAB8C
			// End Line: 96
		/* end block 1.1 */
		// End offset: 0x800CAB98
		// End Line: 98
	/* end block 1 */
	// End offset: 0x800CAB98
	// End Line: 99

	/* begin block 2 */
		// Start line: 122
	/* end block 2 */
	// End Line: 123

	/* begin block 3 */
		// Start line: 122
	/* end block 3 */
	// End Line: 123

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Force_Vbl__Fv(void)

{
  byte bVar1;
  byte bVar2;
  uchar uVar3;
  uint uVar4;
  int iVar5;
  uchar uVar6;
  Force_tGlobal *pFVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = 0;
  pFVar7 = &Force_g;
  do {
    if (1 < iVar8) {
      Force_gTick = Force_gTick + 1;
      return;
    }
    uVar4 = PadGetState();
    if (uVar4 == 6) {
      if (pFVar7->active == '\0') {
        PadSetAct(iVar8 << 4,pFVar7->actuator,2);
        PadSetActAlign(iVar8 << 4,Force_gActAlign);
        pFVar7->active = '\x01';
      }
    }
    else {
      if ((int)uVar4 < 4) {
        pFVar7->active = '\0';
      }
    }
    if (pFVar7->fade < pFVar7->time) {
      iVar5 = (uint)pFVar7->low + (uint)pFVar7->jolt;
      *(bool *)pFVar7->actuator =
           (uint)Force_rand_256[(uint)(Force_gTick >> 1) & 0xff] <
           (uint)pFVar7->high + (uint)pFVar7->jolt;
LAB_800cab3c:
      uVar6 = -1;
      if (iVar5 < 0x100) {
        uVar6 = (uchar)iVar5;
      }
      uVar3 = pFVar7->time;
      pFVar7->actuator[1] = uVar6;
      pFVar7->time = uVar3 + -1;
    }
    else {
      if (pFVar7->time != 0) {
        iVar5 = (uint)pFVar7->jolt * (uint)pFVar7->time;
        bVar1 = pFVar7->fade;
        if (bVar1 == 0) {
          trap(0x1c00);
        }
        if (((uint)bVar1 == 0xffffffff) && (iVar5 == -0x80000000)) {
          trap(0x1800);
        }
        iVar9 = (uint)pFVar7->jolt * (uint)pFVar7->time;
        bVar2 = pFVar7->fade;
        if (bVar2 == 0) {
          trap(0x1c00);
        }
        if (((uint)bVar2 == 0xffffffff) && (iVar9 == -0x80000000)) {
          trap(0x1800);
        }
        *(bool *)pFVar7->actuator =
             (int)(uint)Force_rand_256[(uint)(Force_gTick >> 1) & 0xff] <
             (int)(iVar5 / (int)(uint)bVar1 + (uint)pFVar7->high);
        iVar5 = iVar9 / (int)(uint)bVar2 + (uint)pFVar7->low;
        goto LAB_800cab3c;
      }
      pFVar7->jolt = '\0';
      bVar1 = Force_rand_256[(uint)(Force_gTick >> 1) & 0xff];
      pFVar7->actuator[1] = pFVar7->low;
      *(bool *)pFVar7->actuator = bVar1 < pFVar7->high;
    }
    pFVar7 = pFVar7 + 1;
    iVar8 = iVar8 + 1;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ Force_Update__FP8Car_tObj(struct Car_tObj *car /*$a2*/)
 // line 105, offset 0x800cabc0
	/* begin block 1 */
		// Start line: 106
		// Start offset: 0x800CABC0
		// Variables:
	// 		struct Force_tGlobal *f; // $s6
	// 		int skids; // $a1
	// 		int impacts; // $a3
	// 		int frontmultiplier; // stack offset -48
	// 		int rearmultiplier; // stack offset -44
	// 		int impactmultiplier; // $s7
	// 		int v0; // $s4
	// 		int v1; // $s3

		/* begin block 1.1 */
			// Start line: 166
			// Start offset: 0x800CADB8

			/* begin block 1.1.1 */
				// Start line: 167
				// Start offset: 0x800CADC8
				// Variables:
			// 		int c; // $s5

				/* begin block 1.1.1.1 */
					// Start line: 170
					// Start offset: 0x800CADDC

					/* begin block 1.1.1.1.1 */
						// Start line: 173
						// Start offset: 0x800CADE4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 177
							// Start offset: 0x800CAE18

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 177
								// Start offset: 0x800CAE18

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 181
									// Start offset: 0x800CAE44

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 181
										// Start offset: 0x800CAE44

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 182
											// Start offset: 0x800CAE54
											// Variables:
										// 		int force; // $s2
										// 		int shock; // $v1
										// 		int time; // $s0
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x800CAF34
										// End Line: 204
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800CAF34
									// End Line: 204
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800CAF34
								// End Line: 204
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800CAF34
							// End Line: 204
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800CAF34
						// End Line: 204
					/* end block 1.1.1.1.1 */
					// End offset: 0x800CAF34
					// End Line: 204
				/* end block 1.1.1.1 */
				// End offset: 0x800CAF34
				// End Line: 208
			/* end block 1.1.1 */
			// End offset: 0x800CAF40
			// End Line: 208
		/* end block 1.1 */
		// End offset: 0x800CAF40
		// End Line: 208
	/* end block 1 */
	// End offset: 0x800CAFE8
	// End Line: 223

	/* begin block 2 */
		// Start line: 213
	/* end block 2 */
	// End Line: 214

	/* begin block 3 */
		// Start line: 220
	/* end block 3 */
	// End Line: 221

	/* begin block 4 */
		// Start line: 220
	/* end block 4 */
	// End Line: 221

void Force_Update__FP8Car_tObj(Car_tObj *car)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined *puVar9;
  uchar uVar10;
  uchar uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  int iVar14;
  int local_30;
  int local_2c;
  
  uVar4 = car->carIndex;
  if (1 < uVar4) {
    return;
  }
  if (1 < Replay_ReplayMode) {
    (&Force_g)[uVar4].high = '\0';
    (&Force_g)[uVar4].low = '\0';
    (&Force_g)[uVar4].time = '\0';
    return;
  }
  iVar5 = GameSetup_gData.controllerData.shockMode[uVar4];
  iVar6 = GameSetup_gData.controllerData.shockImpact[uVar4];
  if (iVar5 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = (iVar5 + 0x10) * 0x2da6;
  }
  if (iVar5 == 0) {
    local_2c = 0;
  }
  else {
    local_2c = (iVar5 + 0x10) * 0x1e6e;
  }
  if (iVar6 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (iVar6 + 0x10) * 0xb699;
  }
  ppuVar12 = (undefined **)0x0;
  iVar6 = 0;
  if ((car->N).flightTime == 0) {
    switch((car->N).driveSurfaceType) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      ppuVar12 = (undefined **)0x0;
      iVar14 = (car->linearVel_ch).z;
      if (iVar14 < 0) {
        iVar14 = -iVar14;
      }
      iVar6 = 0x78000;
      if (iVar14 >> 2 < 0x78001) {
        iVar6 = iVar14 >> 2;
      }
      goto LAB_800cadb8;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xf:
      iVar6 = (car->linearVel_ch).z;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      ppuVar12 = (undefined **)0x58000;
      if ((int)(undefined **)(iVar6 >> 1) < 0x58001) {
        ppuVar12 = (undefined **)(iVar6 >> 1);
      }
      break;
    case 0xe:
      ppuVar12 = (undefined **)0x0;
    }
    iVar6 = 0;
  }
LAB_800cadb8:
  iVar14 = car->gripFactor + -1;
  if (car->gripFactor != 0) {
    piVar8 = &(car->N).objID + iVar14 * 6;
    while (-1 < iVar14) {
      puVar3 = (undefined4 *)piVar8[0x1e7];
      if (puVar3 == (undefined4 *)((int)&DAT_00000010 + 2)) {
        iVar1 = iVar6;
        ppuVar13 = (undefined **)(piVar8[0x1ea] << 1);
        if ((int)(undefined **)(piVar8[0x1ea] << 1) < (int)ppuVar12) {
          iVar1 = iVar6;
          ppuVar13 = ppuVar12;
        }
      }
      else {
        if (puVar3 == &DAT_00000014) {
          iVar1 = piVar8[0x1ea] << 1;
          ppuVar13 = ppuVar12;
          if (piVar8[0x1ea] << 1 < iVar6) {
            iVar1 = iVar6;
            ppuVar13 = ppuVar12;
          }
        }
        else {
          iVar1 = iVar6;
          ppuVar13 = ppuVar12;
          if (((((int)puVar3 < 0) && (iVar1 = iVar6, ppuVar13 = ppuVar12, iVar5 != 0)) &&
              (iVar1 = iVar6, ppuVar13 = ppuVar12, piVar8[0x1e8] != 10)) &&
             (iVar1 = iVar6, ppuVar13 = ppuVar12, piVar8[0x1e8] != 8)) {
            puVar9 = (undefined *)piVar8[0x1ea];
            if ((int)puVar9 < 0x28001) {
              iVar7 = 0x20;
            }
            else {
              iVar1 = fixeddiv((uint)puVar9,(uint)&LAB_00028000);
              iVar1 = iVar1 * 0x20;
              if (iVar1 < 0) {
                iVar1 = iVar1 + 0xffff;
              }
              if (iVar1 >> 0x10 < 0x61) {
                iVar1 = fixeddiv(piVar8[0x1ea],(uint)&LAB_00028000);
                iVar1 = iVar1 * 0x20;
                iVar7 = iVar1 >> 0x10;
                puVar9 = &LAB_00028000;
                if (iVar1 < 0) {
                  iVar7 = iVar1 + 0xffff >> 0x10;
                  puVar9 = &LAB_00028000;
                }
              }
              else {
                iVar7 = 0x60;
                puVar9 = &LAB_00028000;
              }
            }
            uVar2 = fixedmult((int)puVar9,iVar5);
            if ((int)uVar2 < 0) {
              uVar2 = uVar2 + 0xffff;
            }
            if (((int)(uint)(&Force_g)[uVar4].jolt < (int)uVar2 >> 0x10) ||
               (iVar1 = iVar6, ppuVar13 = ppuVar12, (int)(uint)(&Force_g)[uVar4].time < iVar7)) {
              (&Force_g)[uVar4].fade = (uchar)(iVar7 >> 1);
              (&Force_g)[uVar4].time = (uchar)iVar7;
              (&Force_g)[uVar4].jolt = (uchar)(uVar2 >> 0x10);
              iVar1 = iVar6;
              ppuVar13 = ppuVar12;
            }
          }
        }
      }
      piVar8 = piVar8 + 0x3e;
      iVar14 = iVar14 + -1;
      iVar6 = iVar1;
      ppuVar12 = ppuVar13;
    }
  }
  if (local_30 == 0) {
    uVar11 = '\0';
  }
  else {
    if (0xa0000 < (int)ppuVar12) {
      ppuVar12 = &PTR_000a0000;
    }
    uVar2 = fixedmult((int)ppuVar12,local_30);
    uVar11 = (uchar)(uVar2 >> 0x10);
    if ((int)uVar2 < 0) {
      uVar11 = (uchar)(uVar2 + 0xffff >> 0x10);
    }
  }
  if (local_2c == 0) {
    uVar10 = '\0';
  }
  else {
    if (0xf0000 < iVar6) {
      iVar6 = 0xf0000;
    }
    uVar2 = fixedmult(iVar6,local_2c);
    uVar10 = (uchar)(uVar2 >> 0x10);
    if ((int)uVar2 < 0) {
      uVar10 = (uchar)(uVar2 + 0xffff >> 0x10);
    }
  }
  (&Force_g)[uVar4].high = uVar11;
  (&Force_g)[uVar4].low = uVar10;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Force_StartUp__Fv()
 // line 230, offset 0x800cb018
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x800CB018

		/* begin block 1.1 */
			// Start line: 231
			// Start offset: 0x800CB018
			// Variables:
		// 		struct Force_tGlobal *f; // $a0
		/* end block 1.1 */
		// End offset: 0x800CB070
		// End Line: 240
	/* end block 1 */
	// End offset: 0x800CB0CC
	// End Line: 245

	/* begin block 2 */
		// Start line: 465
	/* end block 2 */
	// End Line: 466

	/* begin block 3 */
		// Start line: 472
	/* end block 3 */
	// End Line: 473

	/* begin block 4 */
		// Start line: 472
	/* end block 4 */
	// End Line: 473

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Force_StartUp__Fv(void)

{
  uchar *puVar1;
  Force_tGlobal *pFVar2;
  
  pFVar2 = &Force_g;
  puVar1 = Force_g.actuator + 1;
  do {
    pFVar2->active = '\0';
    puVar1[-6] = '\0';
    puVar1[-5] = '\0';
    puVar1[-3] = '\0';
    puVar1[-1] = '\0';
    *puVar1 = '\0';
    pFVar2 = pFVar2 + 1;
    puVar1 = puVar1 + 8;
  } while (pFVar2 < &colourRGB);
  VSyncCallback(Force_Vbl__Fv);
  Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
            (simGlobal.schedule32Hz,Force_Update__FP8Car_tObj,Cars_gHumanRaceCarList9,0x32);
  if (GameSetup_gData.commMode == 1) {
    Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
              (simGlobal.schedule32Hz,Force_Update__FP8Car_tObj,PTR_ARRAY_8010fa4c[0],0x32);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Force_Disable__Fv()
 // line 250, offset 0x800cb0e4
	/* begin block 1 */
		// Start line: 251
		// Start offset: 0x800CB0E4

		/* begin block 1.1 */
			// Start line: 251
			// Start offset: 0x800CB0E4
			// Variables:
		// 		struct Force_tGlobal *f; // $a0
		/* end block 1.1 */
		// End offset: 0x800CB120
		// End Line: 256
	/* end block 1 */
	// End offset: 0x800CB120
	// End Line: 257

	/* begin block 2 */
		// Start line: 507
	/* end block 2 */
	// End Line: 508

	/* begin block 3 */
		// Start line: 513
	/* end block 3 */
	// End Line: 514

	/* begin block 4 */
		// Start line: 513
	/* end block 4 */
	// End Line: 514

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Force_Disable__Fv(void)

{
  uchar *puVar1;
  Force_tGlobal *pFVar2;
  
  pFVar2 = &Force_g;
  puVar1 = Force_g.actuator + 1;
  do {
    puVar1[-1] = '\0';
    *puVar1 = '\0';
    pFVar2 = pFVar2 + 1;
    puVar1 = puVar1 + 8;
  } while (pFVar2 < &colourRGB);
  PadSetActAlign(0,Force_gOffAlign);
  PadSetActAlign(4,Force_gOffAlign);
  VSyncCallback(0);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Force_IsForceOn__FP8Car_tObj(struct Car_tObj *car /*$a0*/)
 // line 264, offset 0x800cb158
	/* begin block 1 */
		// Start line: 265
		// Start offset: 0x800CB158
		// Variables:
	// 		struct Force_tGlobal *f; // $v0
	/* end block 1 */
	// End offset: 0x800CB1A4
	// End Line: 274

	/* begin block 2 */
		// Start line: 535
	/* end block 2 */
	// End Line: 536

	/* begin block 3 */
		// Start line: 541
	/* end block 3 */
	// End Line: 542

	/* begin block 4 */
		// Start line: 541
	/* end block 4 */
	// End Line: 542

	/* begin block 5 */
		// Start line: 542
	/* end block 5 */
	// End Line: 543

	/* begin block 6 */
		// Start line: 542
	/* end block 6 */
	// End Line: 543

int Force_IsForceOn__FP8Car_tObj(Car_tObj *car)

{
  if (1 < Replay_ReplayMode) {
    return 0;
  }
  if ((uint)car->carIndex < 2) {
    return (uint)((&Force_g)[car->carIndex].active == '\x01');
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Force_Pause__Fv()
 // line 279, offset 0x800cb1b4
	/* begin block 1 */
		// Start line: 280
		// Start offset: 0x800CB1B4

		/* begin block 1.1 */
			// Start line: 281
			// Start offset: 0x800CB1B4
			// Variables:
		// 		struct Force_tGlobal *f; // $a0
		/* end block 1.1 */
		// End offset: 0x800CB1EC
		// End Line: 286
	/* end block 1 */
	// End offset: 0x800CB1EC
	// End Line: 286

	/* begin block 2 */
		// Start line: 569
	/* end block 2 */
	// End Line: 570

	/* begin block 3 */
		// Start line: 575
	/* end block 3 */
	// End Line: 576

	/* begin block 4 */
		// Start line: 575
	/* end block 4 */
	// End Line: 576

	/* begin block 5 */
		// Start line: 576
	/* end block 5 */
	// End Line: 577

	/* begin block 6 */
		// Start line: 576
	/* end block 6 */
	// End Line: 577

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Force_Pause__Fv(void)

{
  uchar *puVar1;
  Force_tGlobal *pFVar2;
  
  pFVar2 = &Force_g;
  puVar1 = &Force_g.time;
  do {
    puVar1[-3] = '\0';
    puVar1[-2] = '\0';
    *puVar1 = '\0';
    pFVar2 = pFVar2 + 1;
    puVar1 = puVar1 + 8;
  } while (pFVar2 < &colourRGB);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Force_UnPause__Fv()
 // line 291, offset 0x800cb1f4
	/* begin block 1 */
		// Start line: 292
		// Start offset: 0x800CB1F4
	/* end block 1 */
	// End offset: 0x800CB1F4
	// End Line: 292

	/* begin block 2 */
		// Start line: 593
	/* end block 2 */
	// End Line: 594

	/* begin block 3 */
		// Start line: 599
	/* end block 3 */
	// End Line: 600

	/* begin block 4 */
		// Start line: 599
	/* end block 4 */
	// End Line: 600

	/* begin block 5 */
		// Start line: 600
	/* end block 5 */
	// End Line: 601

	/* begin block 6 */
		// Start line: 600
	/* end block 6 */
	// End Line: 601

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Force_UnPause__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Force_HitSign__FP8Car_tObj(struct Car_tObj *car /*$a0*/)
 // line 298, offset 0x800cb1fc
	/* begin block 1 */
		// Start line: 299
		// Start offset: 0x800CB1FC
	/* end block 1 */
	// End offset: 0x800CB1FC
	// End Line: 299

	/* begin block 2 */
		// Start line: 607
	/* end block 2 */
	// End Line: 608

	/* begin block 3 */
		// Start line: 613
	/* end block 3 */
	// End Line: 614

	/* begin block 4 */
		// Start line: 613
	/* end block 4 */
	// End Line: 614

	/* begin block 5 */
		// Start line: 614
	/* end block 5 */
	// End Line: 615

	/* begin block 6 */
		// Start line: 614
	/* end block 6 */
	// End Line: 615

void Force_HitSign__FP8Car_tObj(Car_tObj *car)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Force_HitWall__Fi(int impulse /*$a0*/)
 // line 301, offset 0x800cb204
	/* begin block 1 */
		// Start line: 302
		// Start offset: 0x800CB204
	/* end block 1 */
	// End offset: 0x800CB204
	// End Line: 302

	/* begin block 2 */
		// Start line: 617
	/* end block 2 */
	// End Line: 618

	/* begin block 3 */
		// Start line: 619
	/* end block 3 */
	// End Line: 620

	/* begin block 4 */
		// Start line: 619
	/* end block 4 */
	// End Line: 620

	/* begin block 5 */
		// Start line: 620
	/* end block 5 */
	// End Line: 621

	/* begin block 6 */
		// Start line: 620
	/* end block 6 */
	// End Line: 621

void Force_HitWall__Fi(int impulse)

{
  return;
}





