#include "NFS4.H"
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

void Force_Vbl__Fv(void)
{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  pcVar5 = &Force_g;
  do {
    iVar6 = iVar7 << 4;
    if (1 < iVar7) {
      uGp00001302 = uGp00001302 + 1;
      return;
    }
    iVar3 = PadGetState(iVar6);
    if (iVar3 == 6) {
      if (*pcVar5 == '\0') {
        PadSetAct(iVar6,pcVar5 + 6,2);
        PadSetActAlign(iVar6,&Force_gActAlign);
        *pcVar5 = '\x01';
      }
    }
    else {
      if (iVar3 < 4) {
        *pcVar5 = '\0';
      }
    }
    if ((byte)pcVar5[5] < (byte)pcVar5[4]) {
      iVar6 = (uint)(byte)pcVar5[2] + (uint)(byte)pcVar5[3];
      *(bool *)(pcVar5 + 6) =
           (uint)(byte)(&Force_rand_256)[(uint)(uGp00001302 >> 1) & 0xff] <
           (uint)(byte)pcVar5[1] + (uint)(byte)pcVar5[3];
LAB_800cab3c:
      cVar4 = -1;
      if (iVar6 < 0x100) {
        cVar4 = (char)iVar6;
      }
      pcVar5[7] = cVar4;
      pcVar5[4] = pcVar5[4] + -1;
    }
    else {
      if (pcVar5[4] != 0) {
        bVar1 = pcVar5[5];
        if (bVar1 == 0) {
          trap(0x1c00);
        }
        if (((uint)bVar1 == 0xffffffff) &&
           ((uint)(byte)pcVar5[3] * (uint)(byte)pcVar5[4] == -0x80000000)) {
          trap(0x1800);
        }
        bVar2 = pcVar5[5];
        if (bVar2 == 0) {
          trap(0x1c00);
        }
        if (((uint)bVar2 == 0xffffffff) &&
           ((uint)(byte)pcVar5[3] * (uint)(byte)pcVar5[4] == -0x80000000)) {
          trap(0x1800);
        }
        *(bool *)(pcVar5 + 6) =
             (int)(uint)(byte)(&Force_rand_256)[(uint)(uGp00001302 >> 1) & 0xff] <
             (int)((int)((uint)(byte)pcVar5[3] * (uint)(byte)pcVar5[4]) / (int)(uint)bVar1 +
                  (uint)(byte)pcVar5[1]);
        iVar6 = (int)((uint)(byte)pcVar5[3] * (uint)(byte)pcVar5[4]) / (int)(uint)bVar2 +
                (uint)(byte)pcVar5[2];
        goto LAB_800cab3c;
      }
      pcVar5[3] = '\0';
      bVar1 = (&Force_rand_256)[(uint)(uGp00001302 >> 1) & 0xff];
      pcVar5[7] = pcVar5[2];
      *(bool *)(pcVar5 + 6) = bVar1 < (byte)pcVar5[1];
    }
    pcVar5 = pcVar5 + 8;
    iVar7 = iVar7 + 1;
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

void Force_Update__FP8Car_tObj(Car_tObj *car)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined uVar10;
  undefined uVar11;
  int iVar12;
  int iVar13;
  int local_30;
  int local_2c;
  
  uVar5 = car->carIndex;
  iVar1 = uVar5 * 8;
  if (1 < uVar5) {
    return;
  }
  if (1 < Replay_ReplayMode) {
    (&DAT_8011fd61)[iVar1] = 0;
    (&DAT_8011fd62)[iVar1] = 0;
    (&DAT_8011fd64)[iVar1] = 0;
    return;
  }
  iVar6 = *(int *)(&DAT_80113294 + uVar5 * 4);
  if (iVar6 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = (iVar6 + 0x10) * 0x2da6;
  }
  if (iVar6 == 0) {
    local_2c = 0;
  }
  else {
    local_2c = (iVar6 + 0x10) * 0x1e6e;
  }
  if (*(int *)(&DAT_8011329c + uVar5 * 4) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*(int *)(&DAT_8011329c + uVar5 * 4) + 0x10) * 0xb699;
  }
  iVar12 = 0;
  iVar4 = 0;
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
      iVar12 = 0;
      iVar13 = (car->linearVel_ch).z;
      if (iVar13 < 0) {
        iVar13 = -iVar13;
      }
      iVar4 = 0x78000;
      if (iVar13 >> 2 < 0x78001) {
        iVar4 = iVar13 >> 2;
      }
      goto LAB_800cadb8;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xf:
      iVar4 = (car->linearVel_ch).z;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      iVar12 = 0x58000;
      if (iVar4 >> 1 < 0x58001) {
        iVar12 = iVar4 >> 1;
      }
      break;
    case 0xe:
      iVar12 = 0;
    }
    iVar4 = 0;
  }
LAB_800cadb8:
  iVar13 = car->topSpeedUpgradeMult + -1;
  if (car->topSpeedUpgradeMult != 0) {
    piVar8 = &(car->N).objID + iVar13 * 6;
    while (-1 < iVar13) {
      iVar3 = piVar8[0x1e7];
      if (iVar3 == 0x12) {
        iVar9 = iVar4;
        iVar2 = piVar8[0x1ea] << 1;
        if (piVar8[0x1ea] << 1 < iVar12) {
          iVar9 = iVar4;
          iVar2 = iVar12;
        }
      }
      else {
        if (iVar3 == 0x14) {
          iVar9 = piVar8[0x1ea] << 1;
          iVar2 = iVar12;
          if (piVar8[0x1ea] << 1 < iVar4) {
            iVar9 = iVar4;
            iVar2 = iVar12;
          }
        }
        else {
          iVar9 = iVar4;
          iVar2 = iVar12;
          if ((((iVar3 < 0) && (iVar9 = iVar4, iVar2 = iVar12, iVar6 != 0)) &&
              (iVar9 = iVar4, iVar2 = iVar12, piVar8[0x1e8] != 10)) &&
             (iVar9 = iVar4, iVar2 = iVar12, piVar8[0x1e8] != 8)) {
            iVar3 = piVar8[0x1ea];
            if (iVar3 < 0x28001) {
              iVar7 = 0x20;
            }
            else {
              iVar9 = 0x28000;
              iVar3 = fixeddiv(iVar3,0x28000);
              iVar3 = iVar3 * 0x20;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 0xffff;
              }
              if (iVar3 >> 0x10 < 0x61) {
                iVar2 = fixeddiv(piVar8[0x1ea],0x28000);
                iVar2 = iVar2 * 0x20;
                iVar7 = iVar2 >> 0x10;
                iVar3 = iVar9;
                if (iVar2 < 0) {
                  iVar7 = iVar2 + 0xffff >> 0x10;
                  iVar3 = iVar9;
                }
              }
              else {
                iVar7 = 0x60;
                iVar3 = iVar9;
              }
            }
            iVar3 = fixedmult(iVar3,iVar6);
            if (iVar3 < 0) {
              iVar3 = iVar3 + 0xffff;
            }
            if (((int)(uint)(byte)(&DAT_8011fd63)[iVar1] < iVar3 >> 0x10) ||
               (iVar9 = iVar4, iVar2 = iVar12, (int)(uint)(byte)(&DAT_8011fd64)[iVar1] < iVar7)) {
              (&DAT_8011fd65)[iVar1] = (char)(iVar7 >> 1);
              (&DAT_8011fd64)[iVar1] = (char)iVar7;
              (&DAT_8011fd63)[iVar1] = (char)((uint)iVar3 >> 0x10);
              iVar9 = iVar4;
              iVar2 = iVar12;
            }
          }
        }
      }
      piVar8 = piVar8 + 0x22c;
      iVar13 = iVar13 + -1;
      iVar4 = iVar9;
      iVar12 = iVar2;
    }
  }
  if (local_30 == 0) {
    uVar11 = 0;
  }
  else {
    if (0xa0000 < iVar12) {
      iVar12 = 0xa0000;
    }
    iVar6 = fixedmult(iVar12,local_30);
    uVar11 = (undefined)((uint)iVar6 >> 0x10);
    if (iVar6 < 0) {
      uVar11 = (undefined)((uint)(iVar6 + 0xffff) >> 0x10);
    }
  }
  if (local_2c == 0) {
    uVar10 = 0;
  }
  else {
    if (0xf0000 < iVar4) {
      iVar4 = 0xf0000;
    }
    iVar6 = fixedmult(iVar4,local_2c);
    uVar10 = (undefined)((uint)iVar6 >> 0x10);
    if (iVar6 < 0) {
      uVar10 = (undefined)((uint)(iVar6 + 0xffff) >> 0x10);
    }
  }
  (&DAT_8011fd61)[iVar1] = uVar11;
  (&DAT_8011fd62)[iVar1] = uVar10;
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

void Force_StartUp__Fv(void)
{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&Force_g;
  if (true) {
    puVar1 = &DAT_8011fd67;
    do {
      *(undefined *)puVar2 = 0;
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      puVar1[-3] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 8;
    } while (puVar2 < &colourRGB);
  }
  VSyncCallback(Force_Vbl__Fv);
  Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
            (DAT_8011e0bc,Force_Update__FP8Car_tObj,(void *)0x0,0x32);
  if (DAT_801131f8 == 1) {
    Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
              (DAT_8011e0bc,Force_Update__FP8Car_tObj,(void *)0x0,0x32);
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

void Force_Disable__Fv(void)
{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&Force_g;
  if (true) {
    puVar1 = &DAT_8011fd67;
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 8;
    } while (puVar2 < &colourRGB);
  }
  PadSetActAlign(0,&Force_gOffAlign);
  PadSetActAlign(4,&Force_gOffAlign);
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

int Force_IsForceOn__FP8Car_tObj(Car_tObj *car)
{
  if (1 < Replay_ReplayMode) {
    return 0;
  }
  if ((uint)car->carIndex < 2) {
    return (uint)((&Force_g)[car->carIndex * 8] == '\x01');
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

void Force_Pause__Fv(void)
{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&Force_g;
  if (true) {
    puVar1 = &DAT_8011fd64;
    do {
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      *puVar1 = 0;
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 8;
    } while (puVar2 < &colourRGB);
  }
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

void Force_HitWall__Fi(int impulse)
{
  return;


}





