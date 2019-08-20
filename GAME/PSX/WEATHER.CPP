#include "NFS4.H"
#include "WEATHER.H"

// decompiled code
// original method signature: 
// int /*$ra*/ Weather_GetNumParticles__Fi(int player /*$a0*/)
 // line 107, offset 0x800e1dc0
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x800E1DC0
	/* end block 1 */
	// End offset: 0x800E1DC0
	// End Line: 109

int Weather_GetNumParticles__Fi(int player)

{
  return Weather_gSys.num[0];
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_SetMatrix__FP10matrixtdef(struct matrixtdef *m /*$a0*/)
 // line 112, offset 0x800e1dd0
	/* begin block 1 */
		// Start line: 113
		// Start offset: 0x800E1DD0
		// Variables:
	// 		struct MATRIX mpsx; // stack offset -32

		/* begin block 1.1 */
			// Start line: 113
			// Start offset: 0x800E1DD0
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a1
		/* end block 1.1 */
		// End offset: 0x800E1DD0
		// End Line: 113

		/* begin block 1.2 */
			// Start line: 113
			// Start offset: 0x800E1DD0
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a1
		/* end block 1.2 */
		// End offset: 0x800E1DD0
		// End Line: 113

		/* begin block 1.3 */
			// Start line: 113
			// Start offset: 0x800E1DD0
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.3 */
		// End offset: 0x800E1DD0
		// End Line: 113
	/* end block 1 */
	// End offset: 0x800E1DD0
	// End Line: 113

void Weather_SetMatrix__FP10matrixtdef(matrixtdef *m)

{
  uint local_10;
  
  local_10 = local_10 & 0xffff0000 | m->m[8] >> 4 & 0xffffU;
  setCopControlWord(2,0,m->m[0] >> 4 & 0xffffU | (m->m[3] >> 4) << 0x10);
  setCopControlWord(2,0x800,m->m[6] >> 4 & 0xffffU | (m->m[1] >> 4) << 0x10);
  setCopControlWord(2,0x1000,m->m[4] >> 4 & 0xffffU | (m->m[7] >> 4) << 0x10);
  setCopControlWord(2,0x1800,m->m[2] >> 4 & 0xffffU | (m->m[5] >> 4) << 0x10);
  setCopControlWord(2,0x2000,local_10);
  setCopControlWord(2,0x2800,0);
  setCopControlWord(2,0x3000,0);
  setCopControlWord(2,0x3800,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_SetIdentMatrix__Fv()
 // line 127, offset 0x800e1e94
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x800E1E94
		// Variables:
	// 		struct MATRIX Ident; // stack offset -32
	/* end block 1 */
	// End offset: 0x800E1E94
	// End Line: 128

/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void Weather_SetIdentMatrix__Fv(void)

{
  undefined4 local_10;
  
  local_10 = CONCAT22(local_10._2_2_,0x1000);
  setCopControlWord(2,0,0x1000);
  setCopControlWord(2,0x800,0);
  setCopControlWord(2,0x1000,0xf000);
  setCopControlWord(2,0x1800,0);
  setCopControlWord(2,0x2000,local_10);
  setCopControlWord(2,0x2800,0);
  setCopControlWord(2,0x3000,0);
  setCopControlWord(2,0x3800,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_InitSnow__Fv()
 // line 150, offset 0x800e1f18
	/* begin block 1 */
		// Start line: 151
		// Start offset: 0x800E1F18
	/* end block 1 */
	// End offset: 0x800E1F18
	// End Line: 152

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Weather_InitSnow__Fv(void)

{
  Weather_gSys.num[0] = 0x96;
  Weather_gSys.velocity.vx = 0;
  Weather_gSys.velocity.vy = -0x12;
  Weather_gSys.velocity.vz = 0;
  Weather_gSys.hdist = 0xa0;
  Weather_gSys.znear = 0x140;
  Weather_gSys.zfar = 0x640;
  Weather_gSys.length = 0x500;
  Weather_gSys.bottom = -0x140;
  Weather_gSys.top = 0x3c0;
  Weather_gSys.height = 0x500;
  Weather_gSys.width = 0x280;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_InitRain__Fv()
 // line 166, offset 0x800e1f78
	/* begin block 1 */
		// Start line: 167
		// Start offset: 0x800E1F78
	/* end block 1 */
	// End offset: 0x800E1F78
	// End Line: 168

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Weather_InitRain__Fv(void)

{
  Weather_gSys.num[0] = 0x96;
  Weather_gSys.velocity.vx = 0;
  Weather_gSys.velocity.vy = -0x68;
  Weather_gSys.velocity.vz = 0;
  Weather_gSys.hdist = 0xa0;
  Weather_gSys.znear = 0x180;
  Weather_gSys.zfar = 0xa00;
  Weather_gSys.length = 0x880;
  Weather_gSys.bottom = -0x140;
  Weather_gSys.top = 0x440;
  Weather_gSys.height = 0x580;
  Weather_gSys.width = 0x440;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_InitSplats__Fv()
 // line 182, offset 0x800e1fd8
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x800E1FD8
		// Variables:
	// 		int i; // $s2

		/* begin block 1.1 */
			// Start line: 183
			// Start offset: 0x800E1FD8

			/* begin block 1.1.1 */
				// Start line: 185
				// Start offset: 0x800E2004
				// Variables:
			// 		int ySize; // $s1
			/* end block 1.1.1 */
			// End offset: 0x800E2024
			// End Line: 189
		/* end block 1.1 */
		// End offset: 0x800E20CC
		// End Line: 192
	/* end block 1 */
	// End offset: 0x800E20CC
	// End Line: 192

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Weather_InitSplats__Fv(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  while (iVar4 < 0x13) {
    uVar3 = 0xf0;
    if (GameSetup_gData.commMode == 1) {
      uVar3 = 0x78;
    }
    iVar2 = iVar4 * 8;
    uVar1 = random();
    *(short *)(iVar2 + DAT_00001660) =
         (short)uVar1 + (short)((ulonglong)uVar1 * 0xcccccccd >> 0x28) * -0x140;
    uVar1 = random();
    if (uVar3 == 0) {
      trap(0x1c00);
    }
    *(undefined2 *)(iVar2 + DAT_00001660 + 2) = (short)(uVar1 % uVar3);
    uVar3 = random();
    iVar4 = iVar4 + 1;
    *(uint *)(iVar2 + DAT_00001660 + 4) = uVar3 % 300;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Weather_GetNewState__Fv()
 // line 238, offset 0x800e20ec
	/* begin block 1 */
		// Start line: 239
		// Start offset: 0x800E20EC
		// Variables:
	// 		int randseed; // $a0
	/* end block 1 */
	// End offset: 0x800E211C
	// End Line: 250

/* WARNING: Unknown calling convention yet parameter storage is locked */

int Weather_GetNewState__Fv(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = random();
  iVar2 = 0;
  if ((1 < (uVar1 & 3)) && (iVar2 = 1, (uVar1 & 3) != 2)) {
    iVar2 = -1;
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_ChangeDensityState__Fv()
 // line 253, offset 0x800e212c
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x800E212C
		// Variables:
	// 		int statechange; // $a0
	/* end block 1 */
	// End offset: 0x800E2190
	// End Line: 270

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Weather_ChangeDensityState__Fv(void)

{
  iGp000016ac = Weather_GetNewState__Fv();
  if (iGp000016a4 + iGp000016ac < 4) {
    if (iGp000016a4 + iGp000016ac < 0) {
      iGp000016ac = 1;
    }
  }
  else {
    iGp000016ac = -1;
  }
  if (iGp000016ac == 0) {
    iGp000016b4 = simGlobal.gameTicks + 0x400;
  }
  iGp000016a4 = iGp000016a4 + iGp000016ac;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_ChangeIntensityState__Fv()
 // line 273, offset 0x800e21a0
	/* begin block 1 */
		// Start line: 274
		// Start offset: 0x800E21A0
		// Variables:
	// 		int statechange; // $a0
	/* end block 1 */
	// End offset: 0x800E2208
	// End Line: 293

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Weather_ChangeIntensityState__Fv(void)

{
  iGp000016b0 = Weather_GetNewState__Fv();
  if (iGp000016c0 < iGp000016a8 + iGp000016b0) {
    iGp000016b0 = -1;
  }
  else {
    if (iGp000016a8 + iGp000016b0 < 0) {
      iGp000016b0 = 1;
    }
  }
  if (iGp000016b0 == 0) {
    iGp000016b8 = simGlobal.gameTicks + 0x400;
  }
  iGp000016a8 = iGp000016a8 + iGp000016b0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_ChangeDensityBasedOnTime__Fv()
 // line 296, offset 0x800e2218
	/* begin block 1 */
		// Start line: 297
		// Start offset: 0x800E2218
	/* end block 1 */
	// End offset: 0x800E22E0
	// End Line: 320

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Weather_ChangeDensityBasedOnTime__Fv(void)

{
  if (iGp000016ac < 1) {
    if (iGp000016ac < 0) {
      if ((&Weather_gDensityTbl)[iGp000016a4] < Weather_gSys.num[0]) goto LAB_800e22c4;
    }
    else {
      if (simGlobal.gameTicks <= iGp000016b4) goto LAB_800e22c4;
    }
  }
  else {
    if (Weather_gSys.num[0] < (&Weather_gDensityTbl)[iGp000016a4]) goto LAB_800e22c4;
  }
  Weather_ChangeDensityState__Fv();
LAB_800e22c4:
  Weather_gSys.num[0] = Weather_gSys.num[0] + iGp000016ac;
  if (Weather_gSys.num[0] < 1) {
    Weather_gSys.num[0] = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_ChangeIntensityBasedOnTime__Fv()
 // line 323, offset 0x800e22f0
	/* begin block 1 */
		// Start line: 324
		// Start offset: 0x800E22F0
	/* end block 1 */
	// End offset: 0x800E23D8
	// End Line: 351

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Weather_ChangeIntensityBasedOnTime__Fv(void)

{
  if (iGp000016b0 < 1) {
    if (iGp000016b0 < 0) {
      if ((&Weather_gIntensityTbl)[iGp000016a8] < (int)Weather_gSys.velocity.vy) goto LAB_800e239c;
    }
    else {
      if (simGlobal.gameTicks <= iGp000016b8) goto LAB_800e239c;
    }
  }
  else {
    if ((int)Weather_gSys.velocity.vy < (&Weather_gIntensityTbl)[iGp000016a8]) goto LAB_800e239c;
  }
  Weather_ChangeIntensityState__Fv();
LAB_800e239c:
  uGp000016a0 = (uint)((short)(Weather_gSys.velocity.vy + (short)iGp000016b0) < -0x20);
  Weather_gSys.velocity.vy = Weather_gSys.velocity.vy + (short)iGp000016b0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_InitStateControls__Fv()
 // line 355, offset 0x800e23e8
	/* begin block 1 */
		// Start line: 356
		// Start offset: 0x800E23E8
		// Variables:
	// 		int track; // $a0
	/* end block 1 */
	// End offset: 0x800E2474
	// End Line: 379

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Weather_InitStateControls__Fv(void)

{
  if ((GameSetup_gData.track == 0) || (GameSetup_gData.track == 4)) {
    uGp000016bc = 1;
    iGp000016a8 = 3;
  }
  else {
    uGp000016bc = 0;
    iGp000016a8 = 0;
  }
  uGp000016a0 = (uint)(iGp000016a8 != 3);
  Weather_gSys.num[0] = INT_80123390;
  Weather_gSys.velocity.vy = *(short *)(&Weather_gIntensityTbl + iGp000016a8);
  uGp000016a4 = 3;
  uGp000016ac = 0;
  uGp000016b0 = 0;
  iGp000016b4 = simGlobal.gameTicks + 0x400;
  iGp000016b8 = simGlobal.gameTicks + 0x400;
  iGp000016c0 = (&Weather_gTrackIntensityLimitTbl)[GameSetup_gData.track];
  iGp00001900 = simGlobal.gameTicks;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_Restart__Fv()
 // line 391, offset 0x800e24b4
	/* begin block 1 */
		// Start line: 392
		// Start offset: 0x800E24B4

		/* begin block 1.1 */
			// Start line: 392
			// Start offset: 0x800E24B4

			/* begin block 1.1.1 */
				// Start line: 394
				// Start offset: 0x800E24D4
				// Variables:
			// 		int i; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800E2520
			// End Line: 403
		/* end block 1.1 */
		// End offset: 0x800E2520
		// End Line: 403
	/* end block 1 */
	// End offset: 0x800E2520
	// End Line: 403

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Weather_Restart__Fv(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (GameSetup_gData.Weather != 0) {
    if (GameSetup_gData.commMode != 1) {
      Weather_InitStateControls__Fv();
    }
    iVar2 = 0;
    iGp0000190c = simGlobal.gameTicks;
    iGp00001908 = simGlobal.gameTicks;
    do {
      puVar1 = (undefined *)(iGp00001658 + iVar2);
      iVar2 = iVar2 + 1;
      *puVar1 = 0;
    } while (iVar2 < 0x98);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_Init__Fv()
 // line 414, offset 0x800e2530
	/* begin block 1 */
		// Start line: 415
		// Start offset: 0x800E2530

		/* begin block 1.1 */
			// Start line: 415
			// Start offset: 0x800E2530

			/* begin block 1.1.1 */
				// Start line: 421
				// Start offset: 0x800E2564
				// Variables:
			// 		int i; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 476
					// Start offset: 0x800E2770
					// Variables:
				// 		struct SVECTOR *sv; // $s2
				/* end block 1.1.1.1 */
				// End offset: 0x800E2830
				// End Line: 488
			/* end block 1.1.1 */
			// End offset: 0x800E2860
			// End Line: 497
		/* end block 1.1 */
		// End offset: 0x800E2860
		// End Line: 497
	/* end block 1 */
	// End offset: 0x800E2860
	// End Line: 497

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Weather_Init__Fv(void)

{
  uint uVar1;
  undefined *puVar2;
  matrixtdef *pmVar3;
  matrixtdef *pmVar4;
  matrixtdef *pmVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  short *psVar10;
  
  uGp00001678 = 0x8012329c;
  if (GameSetup_gData.Weather != 0) {
    iGp000016a0 = TrackSpec_gSpec.weatherspec.type;
    if (TrackSpec_gSpec.weatherspec.type == 1) {
      Weather_InitRain__Fv();
    }
    else {
      if (TrackSpec_gSpec.weatherspec.type == 0) {
        Weather_InitSnow__Fv();
      }
    }
    if (psGp00001660 == (short *)0x0) {
      psGp00001660 = reservememadr(s_raindrop_80056afc,0xa8,0);
    }
    if (psGp0000165c == (short *)0x0) {
      psGp0000165c = reservememadr(s_weather1_80056b08,0x4c0,0);
    }
    if (psGp00001664 == (short *)0x0) {
      psGp00001664 = reservememadr(s_weather2_80056b14,0x260,0);
    }
    if (psGp00001658 == (short *)0x0) {
      psGp00001658 = reservememadr(s_weather3_80056b20,0x98,0);
    }
    iGp0000190c = simGlobal.gameTicks;
    iGp00001908 = simGlobal.gameTicks;
    psGp00001684 = psGp0000165c;
    psGp0000168c = psGp00001664;
    psGp00001694 = psGp00001658;
    psGp0000167c = psGp00001660;
    if (GameSetup_gData.commMode == 1) {
      psGp00001688 = psGp0000165c + 0x130;
      psGp00001690 = psGp00001664 + 0x98;
      psGp00001698 = psGp00001658 + 0x26;
      Weather_gSys.num[0] = 0x4c;
      Weather_gSys.num[1] = 0x4c;
      psGp00001680 = psGp00001660 + 0x24;
    }
    pmVar3 = &prevCamMat;
    pmVar4 = &Camera_gInfo.rotation;
    coorddef_80123438.x = Camera_gInfo.position.x;
    coorddef_80123438.y = Camera_gInfo.position.y;
    coorddef_80123438.z = Camera_gInfo.position.z;
    prevCamPos.x = Camera_gInfo.position.x;
    prevCamPos.y = Camera_gInfo.position.y;
    prevCamPos.z = Camera_gInfo.position.z;
    pmVar5 = pmVar3;
    do {
      iVar6 = pmVar4->m[1];
      iVar7 = pmVar4->m[2];
      iVar8 = pmVar4->m[3];
      pmVar5->m[0] = pmVar4->m[0];
      pmVar5->m[1] = iVar6;
      pmVar5->m[2] = iVar7;
      pmVar5->m[3] = iVar8;
      pmVar4 = (matrixtdef *)(pmVar4->m + 4);
      pmVar5 = (matrixtdef *)(pmVar5->m + 4);
    } while (pmVar4 != (matrixtdef *)(Camera_gInfo.rotation.m + 8));
    pmVar5->m[0] = Camera_gInfo.rotation.m[8];
    pmVar4 = &matrixtdef_80123468;
    do {
      iVar6 = pmVar3->m[1];
      iVar7 = pmVar3->m[2];
      iVar8 = pmVar3->m[3];
      pmVar4->m[0] = pmVar3->m[0];
      pmVar4->m[1] = iVar6;
      pmVar4->m[2] = iVar7;
      pmVar4->m[3] = iVar8;
      pmVar3 = (matrixtdef *)(pmVar3->m + 4);
      pmVar4 = (matrixtdef *)(pmVar4->m + 4);
    } while (pmVar3 != (matrixtdef *)(prevCamMat.m + 8));
    iVar6 = 0x97;
    pmVar4->m[0] = prevCamMat.m[8];
    psVar9 = psGp0000165c + 2;
    psVar10 = psGp0000165c;
    do {
      iVar6 = iVar6 + -1;
      uVar1 = random();
      if ((int)Weather_gSys.width == 0) {
        trap(0x1c00);
      }
      *psVar10 = (short)(uVar1 % (int)Weather_gSys.width) * 2 - Weather_gSys.width;
      uVar1 = random();
      if ((int)Weather_gSys.height == 0) {
        trap(0x1c00);
      }
      psVar9[-1] = Weather_gSys.bottom + (short)(uVar1 % (int)Weather_gSys.height);
      uVar1 = random();
      if ((int)Weather_gSys.length == 0) {
        trap(0x1c00);
      }
      psVar10 = psVar10 + 4;
      *psVar9 = Weather_gSys.znear + (short)(uVar1 % (int)Weather_gSys.length);
      psVar9 = psVar9 + 4;
    } while (iVar6 != -1);
    iVar6 = 0;
    do {
      puVar2 = (undefined *)((int)psGp00001658 + iVar6);
      iVar6 = iVar6 + 1;
      *puVar2 = 0;
    } while (iVar6 < 0x98);
    uGp00001654 = 0;
    Weather_InitSplats__Fv();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_DeInit__Fv()
 // line 501, offset 0x800e287c
	/* begin block 1 */
		// Start line: 502
		// Start offset: 0x800E287C
	/* end block 1 */
	// End offset: 0x800E2900
	// End Line: 528

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Weather_DeInit__Fv(void)

{
  if (GameSetup_gData.Weather != 0) {
    if (DAT_00001660 != 0) {
      purgememadr(DAT_00001660);
    }
    if (DAT_0000165c != 0) {
      purgememadr(DAT_0000165c);
    }
    if (DAT_00001664 != 0) {
      purgememadr(DAT_00001664);
    }
    if (DAT_00001658 != 0) {
      purgememadr(DAT_00001658);
    }
    DAT_00001660 = 0;
    DAT_0000165c = 0;
    DAT_00001664 = 0;
    DAT_00001658 = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_TransformVertex__FP10matrixtdefiP7SVECTOR(struct matrixtdef *m /*$a0*/, int n /*$s1*/, struct SVECTOR *s /*$s0*/)
 // line 581, offset 0x800e2910
	/* begin block 1 */
		// Start line: 582
		// Start offset: 0x800E2910
		// Variables:
	// 		struct VECTOR tv; // stack offset -32

		/* begin block 1.1 */
			// Start line: 593
			// Start offset: 0x800E295C

			/* begin block 1.1.1 */
				// Start line: 595
				// Start offset: 0x800E2968
				// Variables:
			// 		int r0; // $v0
			// 		int r1; // $v1
			// 		int r2; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800E2968
			// End Line: 595
		/* end block 1.1 */
		// End offset: 0x800E2968
		// End Line: 595

		/* begin block 1.2 */
			// Start line: 610
			// Start offset: 0x800E29A8
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.2 */
		// End offset: 0x800E29A8
		// End Line: 611
	/* end block 1 */
	// End offset: 0x800E29A8
	// End Line: 611

void Weather_TransformVertex__FP10matrixtdefiP7SVECTOR(matrixtdef *m,int n,SVECTOR *s)

{
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  Weather_SetMatrix__FP10matrixtdef(m);
  setCopReg(2,in_zero,*(undefined4 *)s);
  setCopReg(2,in_at,*(undefined4 *)&s->vz);
  copFunction(2,0x480012);
  n = n + -1;
  local_20 = getCopReg(2,0x19);
  local_1c = getCopReg(2,0x1a);
  local_18 = getCopReg(2,0x1b);
  while( true ) {
    n = n + -1;
    if (n == -1) break;
    setCopReg(2,in_zero,*(undefined4 *)(s + 1));
    setCopReg(2,in_at,*(undefined4 *)&s[1].vz);
    copFunction(2,0x480012);
    s->vx = (short)local_20;
    s->vy = (short)local_1c;
    s->vz = (short)local_18;
    local_20 = getCopReg(2,0x19);
    local_1c = getCopReg(2,0x1a);
    local_18 = getCopReg(2,0x1b);
    s = s + 1;
  }
  s->vx = (short)local_20;
  s->vy = (short)local_1c;
  s->vz = (short)local_18;
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ Weather_CheckAndResetParticles__FP7SVECTOR(struct SVECTOR *pt /*$s2*/)
 // line 623, offset 0x800e29d4
	/* begin block 1 */
		// Start line: 624
		// Start offset: 0x800E29D4
		// Variables:
	// 		short flag; // $s0
	/* end block 1 */
	// End offset: 0x800E2D34
	// End Line: 669

short Weather_CheckAndResetParticles__FP7SVECTOR(SVECTOR *pt)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  
  sVar4 = 0;
  if ((int)Weather_gSys.width < (int)pt->vx) {
    pt->vx = 0x40 - Weather_gSys.width;
    uVar1 = random();
    if ((int)Weather_gSys.height == 0) {
      trap(0x1c00);
    }
    pt->vy = Weather_gSys.bottom + (short)(uVar1 % (int)Weather_gSys.height);
    uVar1 = random();
    sVar3 = (short)(uVar1 % (int)Weather_gSys.length);
    if ((int)Weather_gSys.length == 0) {
      trap(0x1c00);
    }
    sVar4 = 1;
LAB_800e2ae0:
    pt->vz = Weather_gSys.znear + sVar3;
  }
  else {
    if ((int)pt->vx < -(int)Weather_gSys.width) {
      pt->vx = Weather_gSys.width + -0x40;
      uVar1 = random();
      if ((int)Weather_gSys.height == 0) {
        trap(0x1c00);
      }
      pt->vy = Weather_gSys.bottom + (short)(uVar1 % (int)Weather_gSys.height);
      uVar1 = random();
      if ((int)Weather_gSys.length == 0) {
        trap(0x1c00);
      }
      sVar3 = (short)(uVar1 % (int)Weather_gSys.length);
      sVar4 = 2;
      goto LAB_800e2ae0;
    }
  }
  if (Weather_gSys.zfar < pt->vz) {
    pt->vz = Weather_gSys.znear + 0x40;
    uVar1 = random();
    if ((int)Weather_gSys.width == 0) {
      trap(0x1c00);
    }
    pt->vx = (short)(uVar1 % (int)Weather_gSys.width) * 2 - Weather_gSys.width;
    uVar1 = random();
    sVar3 = (short)(uVar1 % (int)Weather_gSys.height);
    if ((int)Weather_gSys.height == 0) {
      trap(0x1c00);
    }
    sVar4 = 3;
  }
  else {
    if (Weather_gSys.znear <= pt->vz) goto LAB_800e2c34;
    sVar4 = 4;
    uVar1 = random();
    uVar2 = (int)(((int)((uint)(ushort)Weather_gSys.zfar << 0x10) >> 0x10) +
                 (((uint)(ushort)Weather_gSys.zfar << 0x10) >> 0x1f)) >> 1;
    if (uVar2 == 0) {
      trap(0x1c00);
    }
    pt->vz = Weather_gSys.znear + (short)(uVar1 % uVar2);
    uVar1 = random();
    if ((int)Weather_gSys.width == 0) {
      trap(0x1c00);
    }
    pt->vx = (short)(uVar1 % (int)Weather_gSys.width) * 2 - Weather_gSys.width;
    uVar1 = random();
    if ((int)Weather_gSys.height == 0) {
      trap(0x1c00);
    }
    sVar3 = (short)(uVar1 % (int)Weather_gSys.height);
  }
  pt->vy = Weather_gSys.bottom + sVar3;
LAB_800e2c34:
  if (Weather_gSys.top < pt->vy) {
    pt->vy = Weather_gSys.bottom + 0x40;
    uVar1 = random();
    if ((int)Weather_gSys.width == 0) {
      trap(0x1c00);
    }
    pt->vx = (short)(uVar1 % (int)Weather_gSys.width) * 2 - Weather_gSys.width;
    uVar1 = random();
    sVar4 = (short)(uVar1 % (int)Weather_gSys.length);
    if ((int)Weather_gSys.length == 0) {
      trap(0x1c00);
    }
    sVar3 = 5;
  }
  else {
    if (Weather_gSys.bottom <= pt->vy) {
      return sVar4;
    }
    pt->vy = Weather_gSys.top + -0x40;
    uVar1 = random();
    if ((int)Weather_gSys.width == 0) {
      trap(0x1c00);
    }
    pt->vx = (short)(uVar1 % (int)Weather_gSys.width) * 2 - Weather_gSys.width;
    uVar1 = random();
    if ((int)Weather_gSys.length == 0) {
      trap(0x1c00);
    }
    sVar4 = (short)(uVar1 % (int)Weather_gSys.length);
    sVar3 = 6;
  }
  pt->vz = Weather_gSys.znear + sVar4;
  return sVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_QuickReOrthogonalize__FP10matrixtdefT0(struct matrixtdef *rot /*$s5*/, struct matrixtdef *rotNew /*$a1*/)
 // line 673, offset 0x800e2d50
	/* begin block 1 */
		// Start line: 674
		// Start offset: 0x800E2D50
		// Variables:
	// 		struct coorddef upvector; // stack offset -56
	// 		struct coorddef *nrotx; // $s4
	// 		struct coorddef *nroty; // $s6
	// 		struct coorddef *nrotz; // $s3
	// 		struct coorddef *roty; // $s7
	// 		struct coorddef *rotz; // $s2
	/* end block 1 */
	// End offset: 0x800E2EAC
	// End Line: 699

void Weather_QuickReOrthogonalize__FP10matrixtdefT0(matrixtdef *rot,matrixtdef *rotNew)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  coorddef *v;
  int local_38;
  undefined *local_34;
  int local_30;
  
  iVar2 = DAT_80056b34;
  puVar1 = PTR_DAT_80056b30;
  iVar8 = DAT_80056b2c;
  v = (coorddef *)(rotNew->m + 6);
  local_38 = DAT_80056b2c;
  local_34 = PTR_DAT_80056b30;
  local_30 = DAT_80056b34;
  iVar6 = rot->m[7];
  iVar7 = rot->m[8];
  rotNew->m[6] = rot->m[6];
  rotNew->m[7] = iVar6;
  rotNew->m[8] = iVar7;
  Math_NormalizeVector__FP8coorddef(v);
  uVar3 = fixedmult(iVar8,rot->m[6]);
  uVar4 = fixedmult((int)puVar1,rot->m[7]);
  uVar5 = fixedmult(iVar2,rot->m[8]);
  if ((int)(uVar3 + uVar4 + uVar5) < 1) {
    uVar3 = fixedmult(iVar8,rot->m[6]);
    uVar4 = fixedmult((int)puVar1,rot->m[7]);
    uVar5 = fixedmult(iVar2,rot->m[8]);
    iVar8 = -(uVar3 + uVar4 + uVar5);
  }
  else {
    uVar3 = fixedmult(iVar8,rot->m[6]);
    uVar4 = fixedmult((int)puVar1,rot->m[7]);
    uVar5 = fixedmult(iVar2,rot->m[8]);
    iVar8 = uVar3 + uVar4 + uVar5;
  }
  if (0xfd70 < iVar8) {
    local_38 = rot->m[3];
    local_34 = (undefined *)rot->m[4];
    local_30 = rot->m[5];
  }
  uVar3 = fixedmult((int)local_34,rotNew->m[8]);
  uVar4 = fixedmult(local_30,rotNew->m[7]);
  rotNew->m[0] = uVar3 - uVar4;
  uVar3 = fixedmult(local_30,v->x);
  uVar4 = fixedmult(local_38,rotNew->m[8]);
  rotNew->m[1] = uVar3 - uVar4;
  uVar3 = fixedmult(local_38,rotNew->m[7]);
  uVar4 = fixedmult((int)local_34,v->x);
  rotNew->m[2] = uVar3 - uVar4;
  Math_NormalizeVector__FP8coorddef((coorddef *)rotNew);
  uVar3 = fixedmult(rotNew->m[7],rotNew->m[2]);
  uVar4 = fixedmult(rotNew->m[8],rotNew->m[1]);
  rotNew->m[3] = uVar3 - uVar4;
  uVar3 = fixedmult(rotNew->m[8],rotNew->m[0]);
  uVar4 = fixedmult(v->x,rotNew->m[2]);
  rotNew->m[4] = uVar3 - uVar4;
  uVar3 = fixedmult(v->x,rotNew->m[1]);
  uVar4 = fixedmult(rotNew->m[7],rotNew->m[0]);
  rotNew->m[5] = uVar3 - uVar4;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_ProcessParticles__FP13DRender_tViewiP7SVECTORPc(struct DRender_tView *Vi /*$s3*/, int num /*$s4*/, struct SVECTOR *wpt /*$s5*/, char *wd /*$s6*/)
 // line 704, offset 0x800e2fd0
	/* begin block 1 */
		// Start line: 705
		// Start offset: 0x800E2FD0
		// Variables:
	// 		int n; // $t2
	// 		struct matrixtdef matdiff; // stack offset -248
	// 		struct matrixtdef orthoMat; // stack offset -208
	// 		struct SVECTOR velocity_vector_change; // stack offset -168
	// 		struct SVECTOR total_vector_change; // stack offset -160
	// 		struct SVECTOR Weather_gTransformedRandomVelocityVectors[12]; // stack offset -128

		/* begin block 1.1 */
			// Start line: 705
			// Start offset: 0x800E2FD0

			/* begin block 1.1.1 */
				// Start line: 705
				// Start offset: 0x800E2FD0
				// Variables:
			// 		struct SVECTOR temp_vector; // stack offset -152
			// 		struct VECTOR result; // stack offset -144
			// 		struct coorddef *cp; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800E3124
			// End Line: 758

			/* begin block 1.1.2 */
				// Start line: 758
				// Start offset: 0x800E3124
				// Variables:
			// 		struct SVECTOR temp_vector; // stack offset -152
			// 		struct VECTOR result; // stack offset -144
			// 		struct SVECTOR *vel; // $a0
			/* end block 1.1.2 */
			// End offset: 0x800E3124
			// End Line: 758
		/* end block 1.1 */
		// End offset: 0x800E3124
		// End Line: 758

		/* begin block 1.2 */
			// Start line: 758
			// Start offset: 0x800E3124

			/* begin block 1.2.1 */
				// Start line: 805
				// Start offset: 0x800E3234
				// Variables:
			// 		struct SVECTOR temp_vector; // stack offset -152
			// 		struct VECTOR result; // stack offset -144
			/* end block 1.2.1 */
			// End offset: 0x800E3240
			// End Line: 815
		/* end block 1.2 */
		// End offset: 0x800E32C8
		// End Line: 827

		/* begin block 1.3 */
			// Start line: 851
			// Start offset: 0x800E32C8
			// Variables:
		// 		struct SVECTOR *tv; // $s2
		// 		long n; // $s0

			/* begin block 1.3.1 */
				// Start line: 855
				// Start offset: 0x800E32C8

				/* begin block 1.3.1.1 */
					// Start line: 857
					// Start offset: 0x800E32D4
					// Variables:
				// 		struct SVECTOR pt; // stack offset -152
				/* end block 1.3.1.1 */
				// End offset: 0x800E338C
				// End Line: 879
			/* end block 1.3.1 */
			// End offset: 0x800E3394
			// End Line: 888
		/* end block 1.3 */
		// End offset: 0x800E3394
		// End Line: 888
	/* end block 1 */
	// End offset: 0x800E3394
	// End Line: 888

/* WARNING: Could not reconcile some variable overlaps */

void Weather_ProcessParticles__FP13DRender_tViewiP7SVECTORPc
               (DRender_tView *Vi,int num,SVECTOR *wpt,char *wd)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_zero;
  undefined4 in_at;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  short *psVar9;
  matrixtdef *rot;
  matrixtdef mStack248;
  matrixtdef mStack208;
  short local_a8;
  short local_a6;
  short local_a4;
  short local_a0;
  short local_9e;
  short local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  short local_80 [48];
  
  rot = &(Vi->cview).mrotationInvRaw;
  Weather_QuickReOrthogonalize__FP10matrixtdefT0(rot,&mStack208);
  Math_fasttransmult__FP10matrixtdefN20(&prevCamMat + Vi->player,&mStack208,&mStack248);
  transpose((undefined4 *)&mStack208,(undefined4 *)(&prevCamMat + Vi->player));
  Weather_TransformVertex__FP10matrixtdefiP7SVECTOR(&mStack248,num,wpt);
  Weather_SetMatrix__FP10matrixtdef(rot);
  iVar5 = (Vi->cview).translation.x - (&prevCamPos)[Vi->player].x;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x3ff;
  }
  iVar6 = (Vi->cview).translation.y - (&prevCamPos)[Vi->player].y;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0x3ff;
  }
  iVar7 = (Vi->cview).translation.z - (&prevCamPos)[Vi->player].z;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0x3ff;
  }
  local_94 = iVar7 >> 10 & 0xffffU | (uint)local_94._2_2_ << 0x10;
  setCopReg(2,in_zero,iVar5 >> 10 & 0xffffU | (iVar6 >> 10) << 0x10);
  setCopReg(2,in_at,local_94);
  copFunction(2,0x480012);
  iVar5 = Vi->player;
  iVar6 = (Vi->cview).translation.y;
  iVar7 = (Vi->cview).translation.z;
  (&prevCamPos)[iVar5].x = (Vi->cview).translation.x;
  (&prevCamPos)[iVar5].y = iVar6;
  (&prevCamPos)[iVar5].z = iVar7;
  uVar1 = getCopReg(2,0x19);
  uVar2 = getCopReg(2,0x1a);
  uVar3 = getCopReg(2,0x1b);
  local_90._0_2_ = (short)uVar1;
  local_a0 = (short)local_90;
  local_8c._0_2_ = (short)uVar2;
  local_9e = (short)local_8c;
  local_88._0_2_ = (short)uVar3;
  local_9c = (short)local_88;
  local_98 = CONCAT22(Weather_gSys.velocity.vy,Weather_gSys.velocity.vx);
  local_94 = CONCAT22(local_94._2_2_,Weather_gSys.velocity.vz);
  setCopReg(2,in_zero,local_98);
  setCopReg(2,in_at,local_94);
  copFunction(2,0x480012);
  local_90 = getCopReg(2,0x19);
  local_8c = getCopReg(2,0x1a);
  local_88 = getCopReg(2,0x1b);
  iVar5 = 0;
  psVar9 = local_80;
  pcVar8 = &Weather_gRandomVelocityVectors;
  local_a0 = (short)local_90 - local_a0;
  local_9c = (short)local_88 - local_9c;
  local_a8 = (short)local_90;
  local_a6 = (short)local_8c;
  local_a4 = (short)local_88;
  local_9e = (short)local_8c - local_9e;
  while (iVar5 < 0xc) {
    local_98 = CONCAT22((short)pcVar8[1],(short)*pcVar8);
    local_94 = local_94 & 0xffff0000 | (uint)(ushort)(short)pcVar8[2];
    setCopReg(2,in_zero,local_98);
    setCopReg(2,in_at,local_94);
    copFunction(2,0x480012);
    local_90 = getCopReg(2,0x19);
    local_8c = getCopReg(2,0x1a);
    local_88 = getCopReg(2,0x1b);
    *psVar9 = (short)local_90;
    pcVar8 = pcVar8 + 3;
    psVar9[1] = (short)local_8c;
    iVar5 = iVar5 + 1;
    psVar9[2] = (short)local_88;
    psVar9 = psVar9 + 4;
  }
  iVar5 = 0;
  psVar9 = &wpt->vz;
  while (iVar5 < num) {
    iVar6 = iVar5 + ((iVar5 / 6 + (iVar5 >> 0x1f) >> 1) - (iVar5 >> 0x1f)) * -0xc;
    local_98 = CONCAT22(local_80[iVar6 * 4 + 1] + psVar9[-1] + local_9e,
                        local_80[iVar6 * 4] + wpt->vx + local_a0);
    local_94 = local_94 & 0xffff0000 | (uint)(ushort)(local_80[iVar6 * 4 + 2] + *psVar9 + local_9c);
    sVar4 = Weather_CheckAndResetParticles__FP7SVECTOR((SVECTOR *)&local_98);
    *(undefined4 *)wpt = local_98;
    wpt = wpt + 1;
    *psVar9 = (short)local_94;
    psVar9 = psVar9 + 4;
    if (sVar4 != 0) {
      wd[iVar5] = '\0';
    }
    iVar5 = iVar5 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_CreateSnow__FP7SVECTOR(struct SVECTOR *pt /*$a0*/)
 // line 923, offset 0x800e33bc
	/* begin block 1 */
		// Start line: 924
		// Start offset: 0x800E33BC
		// Variables:
	// 		struct SVECTOR gv[4]; // stack offset -32

		/* begin block 1.1 */
			// Start line: 924
			// Start offset: 0x800E33BC
			// Variables:
		// 		struct POLY_FT4 *prim; // $a1

			/* begin block 1.1.1 */
				// Start line: 924
				// Start offset: 0x800E33BC
				// Variables:
			// 		struct Draw_tPixMap *pmx; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 924
					// Start offset: 0x800E33BC
					// Variables:
				// 		unsigned long l0; // $v1
				// 		unsigned long l1; // $a0
				// 		unsigned long l2; // $a2
				// 		unsigned long l3; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x800E33BC
				// End Line: 924
			/* end block 1.1.1 */
			// End offset: 0x800E33BC
			// End Line: 924
		/* end block 1.1 */
		// End offset: 0x800E33BC
		// End Line: 924
	/* end block 1 */
	// End offset: 0x800E33BC
	// End Line: 924

/* WARNING: Could not reconcile some variable overlaps */

void Weather_CreateSnow__FP7SVECTOR(SVECTOR *pt)

{
  uint *puVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 in_a1;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint local_18;
  undefined4 local_10;
  undefined4 local_8;
  
  puVar1 = DAT_1f800004;
  puVar2 = DAT_1f800000;
  uVar6 = *(uint *)pt;
  uVar7 = *(undefined4 *)&pt->vz;
  local_18._0_2_ = (short)uVar6;
  local_10._2_2_ = (short)(uVar6 >> 0x10);
  local_18 = uVar6 & 0xffff0000 | (uint)(ushort)((short)local_18 + 10U);
  local_10 = uVar6 & 0xffff | (uint)(ushort)(local_10._2_2_ - 10U) << 0x10;
  local_8 = CONCAT22(local_10._2_2_ - 10U,(short)local_18 + 10U);
  setCopReg(2,in_zero,uVar6);
  setCopReg(2,in_at,uVar7);
  setCopReg(2,&local_10,local_18);
  setCopReg(2,&local_18,uVar7);
  setCopReg(2,pt,local_10);
  setCopReg(2,in_a1,uVar7);
  copFunction(2,0x280030);
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar6 = (uint)DAT_1f800004 & 0xffffff;
  puVar3 = DAT_1f800004 + 4;
  DAT_1f800004 = DAT_1f800004 + 10;
  *puVar2 = *puVar2 & 0xff000000 | uVar6;
  *(undefined *)((int)puVar1 + 3) = 9;
  uVar6 = getCopReg(2,0xc);
  puVar1[2] = uVar6;
  uVar6 = getCopReg(2,0xd);
  *puVar3 = uVar6;
  uVar6 = getCopReg(2,0xe);
  puVar1[6] = uVar6;
  setCopReg(2,in_zero,local_8);
  setCopReg(2,in_at,uVar7);
  copFunction(2,0x180001);
  puVar1[1] = 0x2e202020;
  uVar6 = getCopReg(2,0xe);
  puVar1[8] = uVar6;
  puVar2 = *(uint **)((int)&__gWeatherPixmap_3__ + ((uint)pt & 4));
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar1[3] = *puVar2;
  puVar1[5] = uVar4;
  puVar1[7] = uVar5;
  puVar1[9] = uVar6;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_CreateRain__FP7SVECTORP7DVECTORPc(struct SVECTOR *pt0 /*$a0*/, struct DVECTOR *pt1 /*$t4*/, char *wd /*$t5*/)
 // line 967, offset 0x800e356c
	/* begin block 1 */
		// Start line: 968
		// Start offset: 0x800E356C
		// Variables:
	// 		struct LINE_G2 *prim; // $t2
	// 		struct SVECTOR gv; // stack offset -8

		/* begin block 1.1 */
			// Start line: 968
			// Start offset: 0x800E356C

			/* begin block 1.1.1 */
				// Start line: 975
				// Start offset: 0x800E35A4
				// Variables:
			// 		int nx; // $t1
			// 		int ny; // $t3
			/* end block 1.1.1 */
			// End offset: 0x800E3658
			// End Line: 988
		/* end block 1.1 */
		// End offset: 0x800E3714
		// End Line: 1001
	/* end block 1 */
	// End offset: 0x800E3714
	// End Line: 1004

void Weather_CreateRain__FP7SVECTORP7DVECTORPc(SVECTOR *pt0,DVECTOR *pt1,char *wd)

{
  short sVar1;
  short sVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar5;
  uint uVar6;
  
  puVar4 = DAT_1f800004;
  puVar3 = DAT_1f800000;
  if (*wd == '\0') {
    setCopReg(2,in_zero,*(undefined4 *)pt0);
    setCopReg(2,in_at,*(undefined4 *)&pt0->vz);
    copFunction(2,0x180001);
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar6 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 5;
    *puVar3 = *puVar3 & 0xff000000 | uVar6;
    *(undefined *)((int)puVar4 + 3) = 4;
    puVar4[1] = 0x52000000;
    puVar4[3] = 0x402020;
    uVar6 = getCopReg(2,0xe);
    puVar4[4] = uVar6;
    puVar4[2] = puVar4[4];
  }
  else {
    sVar1 = pt1->vx;
    sVar2 = pt1->vy;
    setCopReg(2,in_zero,*(undefined4 *)pt0);
    setCopReg(2,in_at,*(undefined4 *)&pt0->vz);
    copFunction(2,0x180001);
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar6 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 5;
    *puVar3 = *puVar3 & 0xff000000 | uVar6;
    *(undefined *)((int)puVar4 + 3) = 4;
    puVar4[1] = 0x52000000;
    puVar4[3] = 0x402020;
    uVar6 = getCopReg(2,0xe);
    puVar4[4] = uVar6;
    iVar5 = (int)sVar1 + (int)*(short *)(puVar4 + 4) * 3;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    *(short *)(puVar4 + 2) = (short)(iVar5 >> 2);
    uVar6 = (int)sVar2 + (int)*(short *)((int)puVar4 + 0x12);
    *(undefined2 *)((int)puVar4 + 10) = (short)((int)(uVar6 + (uVar6 >> 0x1f)) >> 1);
  }
  *wd = '\x01';
  *pt1 = *(DVECTOR *)(puVar4 + 4);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_CreateSplat__FP18Weather_tSplatInfo(struct Weather_tSplatInfo *splat /*$t1*/)
 // line 1009, offset 0x800e3730
	/* begin block 1 */
		// Start line: 1010
		// Start offset: 0x800E3730
		// Variables:
	// 		short vx; // $t2
	// 		short vy; // $t3
	// 		struct POLY_FT4 *prim; // $t0
	// 		int size; // $a3
	// 		int splatTick; // $v1

		/* begin block 1.1 */
			// Start line: 1020
			// Start offset: 0x800E37B8
			// Variables:
		// 		unsigned long l0; // $v1
		// 		unsigned long l1; // $a0
		// 		unsigned long l2; // $a1
		// 		unsigned long l3; // $v0
		/* end block 1.1 */
		// End offset: 0x800E37B8
		// End Line: 1020
	/* end block 1 */
	// End offset: 0x800E37B8
	// End Line: 1020

void Weather_CreateSplat__FP18Weather_tSplatInfo(Weather_tSplatInfo *splat)

{
  short sVar1;
  short sVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  uint uVar12;
  short sVar13;
  short sVar14;
  
  puVar4 = DAT_1f800004;
  puVar3 = DAT_1f800000;
  sVar6 = (splat->pos).vx;
  sVar1 = (splat->pos).vy;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar9 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 10;
  *puVar3 = *puVar3 & 0xff000000 | uVar9;
  *(undefined *)((int)puVar4 + 3) = 9;
  *(undefined *)((int)puVar4 + 7) = 0x2e;
  sVar14 = 0x12;
  if (((splat->pos).vx & 1U) != 0) {
    sVar14 = 0xc;
  }
  iVar7 = simGlobal.gameTicks - splat->startTick;
  cVar5 = (char)iVar7 * -4 + -0x80;
  sVar2 = (short)(iVar7 >> 3);
  sVar13 = sVar6 - sVar2;
  *(char *)((int)puVar4 + 6) = cVar5;
  *(char *)((int)puVar4 + 5) = cVar5;
  *(char *)(puVar4 + 1) = cVar5;
  sVar1 = sVar1 + sVar2;
  sVar11 = sVar1 - sVar2;
  sVar8 = sVar6 + sVar14 + sVar2;
  sVar6 = sVar1 + sVar14 + sVar2 * 2;
  *(short *)((int)puVar4 + 0x1a) = sVar6;
  *(short *)((int)puVar4 + 0x22) = sVar6;
  *(short *)(puVar4 + 2) = sVar13;
  *(short *)((int)puVar4 + 10) = sVar11;
  *(short *)(puVar4 + 4) = sVar8;
  *(short *)((int)puVar4 + 0x12) = sVar11;
  *(short *)(puVar4 + 6) = sVar13;
  *(short *)(puVar4 + 8) = sVar8;
  uVar10 = *(uint *)&PTR_80112b84->u1;
  uVar12 = *(uint *)&PTR_80112b84->u2;
  uVar9 = *(uint *)&PTR_80112b84->u3;
  puVar4[3] = *(uint *)PTR_80112b84;
  puVar4[5] = uVar10;
  puVar4[7] = uVar12;
  puVar4[9] = uVar9;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_DoSplats__FiP18Weather_tSplatInfo(int num /*$s4*/, struct Weather_tSplatInfo *splats /*$a0*/)
 // line 1039, offset 0x800e3858
	/* begin block 1 */
		// Start line: 1040
		// Start offset: 0x800E3858
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x800E39F8
	// End Line: 1065

void Weather_DoSplats__FiP18Weather_tSplatInfo(int num,Weather_tSplatInfo *splats)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  if (DAT_00001654 < num) {
    DAT_00001654 = num;
  }
  iVar4 = 0;
  if (0 < DAT_00001654) {
    do {
      iVar1 = DAT_00001654;
      if (splats->startTick <= simGlobal.gameTicks) {
        if (splats->startTick + 0x20 < simGlobal.gameTicks) {
          if ((DAT_00001654 <= num) || (iVar1 = iVar4, iVar4 != DAT_00001654 + -1)) {
            uVar3 = random();
            (splats->pos).vx =
                 (short)uVar3 + (short)((ulonglong)uVar3 * 0xcccccccd >> 0x28) * -0x140;
            if (GameSetup_gData.commMode == 1) {
              uVar3 = random();
              sVar2 = (short)(uVar3 % 0xf0 >> 1);
            }
            else {
              uVar3 = random();
              sVar2 = (short)(uVar3 % 0xf0);
            }
            (splats->pos).vy = sVar2;
            uVar3 = random();
            splats->startTick = simGlobal.gameTicks + uVar3 % 100;
            iVar1 = DAT_00001654;
          }
        }
        else {
          Weather_CreateSplat__FP18Weather_tSplatInfo(splats);
          iVar1 = DAT_00001654;
        }
      }
      DAT_00001654 = iVar1;
      splats = splats + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00001654);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_DoWeather__FP13DRender_tView(struct DRender_tView *Vi /*$s5*/)
 // line 1069, offset 0x800e3a1c
	/* begin block 1 */
		// Start line: 1070
		// Start offset: 0x800E3A1C
		// Variables:
	// 		int n; // $s1
	// 		struct SVECTOR *wpt; // $s6
	// 		struct DVECTOR *wprevpt; // $s7
	// 		char *wd; // $s4
	// 		int player; // $s2
	// 		static int prevLookBehind[2]; // offset 0x14
	// 		static int prevCameraMode[2]; // offset 0x1c
	// 		int ab; // $a1
	// 		int clean_up; // $s0

		/* begin block 1.1 */
			// Start line: 1117
			// Start offset: 0x800E3B48

			/* begin block 1.1.1 */
				// Start line: 1120
				// Start offset: 0x800E3B50
				// Variables:
			// 		int i; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800E3B80
			// End Line: 1127
		/* end block 1.1 */
		// End offset: 0x800E3B80
		// End Line: 1127

		/* begin block 1.2 */
			// Start line: 1152
			// Start offset: 0x800E3C9C
			// Variables:
		// 		struct DR_MODE *prim; // $a0
		/* end block 1.2 */
		// End offset: 0x800E3D04
		// End Line: 1155
	/* end block 1 */
	// End offset: 0x800E3D04
	// End Line: 1155

void Weather_DoWeather__FP13DRender_tView(DRender_tView *Vi)

{
  uint *puVar1;
  uint *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  char *pcVar5;
  uchar *puVar6;
  int iVar7;
  uint uVar8;
  uchar *puVar9;
  int cviewP;
  char *wd;
  SVECTOR *wpt;
  DVECTOR *pt1;
  
  cviewP = Vi->player;
  wpt = (&__Weather_gPServer_2__)[cviewP];
  pt1 = (&__Weather_gPrevPServer_2__)[cviewP];
  wd = (&__Weather_gDrawnServer_2__)[cviewP];
  if ((GameSetup_gData.commMode != 1) && (0x20 < simGlobal.gameTicks - DAT_00001900)) {
    DAT_00001900 = simGlobal.gameTicks;
    if (DAT_000016bc == 0) {
      Weather_ChangeIntensityBasedOnTime__Fv();
    }
    Weather_ChangeDensityBasedOnTime__Fv();
  }
  if (Weather_gSys.num[0] != 0) {
    puVar9 = (uchar *)(&Input_gLookBehind)[cviewP];
    puVar3 = (&PTR_8013dbb4)[cviewP];
    (&PTR_8013dbb4)[cviewP] = puVar9;
    puVar4 = (uchar *)Camera_GetMode__Fi(cviewP);
    puVar6 = (&PTR_8013dbbc)[cviewP];
    (&PTR_8013dbbc)[cviewP] = puVar4;
    if (puVar4 != puVar6 || puVar9 != puVar3 && puVar9 == (uchar *)0x1) {
      iVar7 = 0;
      pcVar5 = wd;
      if (0 < Weather_gSys.num[cviewP]) {
        do {
          *pcVar5 = '\0';
          iVar7 = iVar7 + 1;
          pcVar5 = wd + iVar7;
        } while (iVar7 < Weather_gSys.num[cviewP]);
      }
    }
    if (1 < simGlobal.gameTicks - (&Weather_gLastProcessTime)[cviewP]) {
      (&Weather_gLastProcessTime)[cviewP] = simGlobal.gameTicks;
      Weather_ProcessParticles__FP13DRender_tViewiP7SVECTORPc(Vi,Weather_gSys.num[cviewP],wpt,wd);
    }
    Weather_SetIdentMatrix__Fv();
    if ((*(uint *)&(&Camera_gInfo)[cviewP].field_0x74 >> 0x1b & 1) != 0) {
      Weather_DoSplats__FiP18Weather_tSplatInfo
                (Weather_gSys.num[cviewP] >> 3,(&__Weather_gSplatInfoServer_2__)[cviewP]);
    }
    iVar7 = 0;
    if (0 < Weather_gSys.num[cviewP]) {
      do {
        if (DAT_000016a0 == 1) {
          Weather_CreateRain__FP7SVECTORP7DVECTORPc(wpt,pt1,wd + iVar7);
        }
        else {
          Weather_CreateSnow__FP7SVECTOR(wpt);
        }
        wpt = wpt + 1;
        iVar7 = iVar7 + 1;
        pt1 = pt1 + 1;
      } while (iVar7 < Weather_gSys.num[cviewP]);
    }
    puVar2 = DAT_1f800004;
    puVar1 = DAT_1f800000;
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar8 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 3;
    *puVar1 = *puVar1 & 0xff000000 | uVar8;
    SetDrawMode((int)puVar2,0,0,0x20,(byte *)0x0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Weather_BuildWeather__FP13DRender_tView(struct DRender_tView *Vi /*$s0*/)
 // line 1159, offset 0x800e3d30
	/* begin block 1 */
		// Start line: 1160
		// Start offset: 0x800E3D30
	/* end block 1 */
	// End offset: 0x800E3D7C
	// End Line: 1185

void Weather_BuildWeather__FP13DRender_tView(DRender_tView *Vi)

{
  void *pvVar1;
  
  if ((GameSetup_gData.Weather != 0) &&
     (pvVar1 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(&(&Camera_gInfo)[Vi->player].slicePos),
     pvVar1 == (void *)0x0)) {
    Weather_DoWeather__FP13DRender_tView(Vi);
  }
  return;
}




