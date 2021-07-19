#include "THISDUST.H"
#include "HRZSKU.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Horizon_InterpolateLineSCoords__FP7DVECTORN20Piii(struct DVECTOR *sc /*$t1*/, struct DVECTOR *s0 /*$a1*/, struct DVECTOR *s1 /*$a2*/, int *percentage /*$a3*/, int n /*stack 16*/, int bPercentageArray /*stack 20*/)
 // line 128, offset 0x800cf574
	/* begin block 1 */
		// Start line: 129
		// Start offset: 0x800CF574
		// Variables:
	// 		int i; // $t0

		/* begin block 1.1 */
			// Start line: 129
			// Start offset: 0x800CF574

			/* begin block 1.1.1 */
				// Start line: 143
				// Start offset: 0x800CF61C
				// Variables:
			// 		int p; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800CF6AC
			// End Line: 157
		/* end block 1.1 */
		// End offset: 0x800CF6AC
		// End Line: 157
	/* end block 1 */
	// End offset: 0x800CF6AC
	// End Line: 157

	/* begin block 2 */
		// Start line: 256
	/* end block 2 */
	// End Line: 257

	/* begin block 3 */
		// Start line: 256
	/* end block 3 */
	// End Line: 257

void Horizon_InterpolateLineSCoords__FP7DVECTORN20Piii
               (DVECTOR *sc,DVECTOR *s0,DVECTOR *s1,int *percentage,int n,int bPercentageArray)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (bPercentageArray == 0) {
    iVar1 = *percentage;
    iVar2 = 0;
    if (0 < n) {
      do {
        iVar3 = iVar1 * ((int)s1->vx - (int)s0->vx);
        iVar2._2_2_ = (short)((uint)iVar3 >> 0x10);
        if (iVar3 < 0) {
          iVar2._2_2_ = (short)((uint)(iVar3 + 0xffff) >> 0x10);
        }
        sc->vx = s0->vx + iVar2._2_2_;
        iVar3 = iVar1 * ((int)s1->vy - (int)s0->vy);
        iVar2._2_2_ = (short)((uint)iVar3 >> 0x10);
        if (iVar3 < 0) {
          iVar2._2_2_ = (short)((uint)(iVar3 + 0xffff) >> 0x10);
        }
        sc->vy = s0->vy + iVar2._2_2_;
        s0 = s0 + 1;
        s1 = s1 + 1;
        iVar2 = iVar2 + 1;
        sc = sc + 1;
      } while (iVar2 < n);
      return;
    }
  }
  else {
    iVar1 = 0;
    if (0 < n) {
      do {
        iVar2 = *percentage * ((int)s1->vx - (int)s0->vx);
        iVar2._2_2_ = (short)((uint)iVar2 >> 0x10);
        if (iVar2 < 0) {
          iVar2._2_2_ = (short)((uint)(iVar2 + 0xffff) >> 0x10);
        }
        sc->vx = s0->vx + iVar2._2_2_;
        iVar2 = *percentage * ((int)s1->vy - (int)s0->vy);
        iVar2._2_2_ = (short)((uint)iVar2 >> 0x10);
        if (iVar2 < 0) {
          iVar2._2_2_ = (short)((uint)(iVar2 + 0xffff) >> 0x10);
        }
        sc->vy = s0->vy + iVar2._2_2_;
        percentage = percentage + 1;
        s0 = s0 + 1;
        s1 = s1 + 1;
        iVar1 = iVar1 + 1;
        sc = sc + 1;
      } while (iVar1 < n);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sky_InitStars__Fv()
 // line 185, offset 0x800cf6b4
	/* begin block 1 */
		// Start line: 186
		// Start offset: 0x800CF6B4

		/* begin block 1.1 */
			// Start line: 186
			// Start offset: 0x800CF6B4

			/* begin block 1.1.1 */
				// Start line: 188
				// Start offset: 0x800CF6DC
				// Variables:
			// 		long oldSeed; // $s5
			// 		int i; // $s4

				/* begin block 1.1.1.1 */
					// Start line: 189
					// Start offset: 0x800CF6DC

					/* begin block 1.1.1.1.1 */
						// Start line: 196
						// Start offset: 0x800CF738
						// Variables:
					// 		int radius; // $s1
					// 		int height; // $s2
					// 		int latAngle; // $s3
					// 		int heightAngle; // $s0
					// 		int starBright; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800CF754
					// End Line: 199
				/* end block 1.1.1.1 */
				// End offset: 0x800CF870
				// End Line: 211
			/* end block 1.1.1 */
			// End offset: 0x800CF878
			// End Line: 212
		/* end block 1.1 */
		// End offset: 0x800CF878
		// End Line: 212
	/* end block 1 */
	// End offset: 0x800CF878
	// End Line: 212

	/* begin block 2 */
		// Start line: 341
	/* end block 2 */
	// End Line: 342

	/* begin block 3 */
		// Start line: 370
	/* end block 3 */
	// End Line: 371

	/* begin block 4 */
		// Start line: 370
	/* end block 4 */
	// End Line: 371

	/* begin block 5 */
		// Start line: 371
	/* end block 5 */
	// End Line: 372

	/* begin block 6 */
		// Start line: 371
	/* end block 6 */
	// End Line: 372

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Sky_InitStars__Fv(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  SVECTOR *pSVar7;
  int iVar8;
  
  if (starPosInSky == (SVECTOR *)0x0) {
    lVar1 = random();
    seedrandom(Sky_gTrackSpec->starRandomSeed);
    starPosInSky = (SVECTOR *)reservememadr(s_stars_8013d880,Sky_gTrackSpec->numStars << 3,0);
    starColors = (ulong *)reservememadr(s_starCols_800568b4,Sky_gTrackSpec->numStars << 2,0);
    iVar8 = 0;
    while (iVar8 < Sky_gTrackSpec->numStars) {
      uVar2 = random();
      uVar3 = random();
      uVar6 = Sky_gTrackSpec->starAngleHigh - Sky_gTrackSpec->starAngleLow;
      if (uVar6 == 0) {
        trap(0x1c00);
      }
      uVar6 = Sky_gTrackSpec->starAngleLow + uVar3 % uVar6;
      puVar4 = fixedsin(uVar6);
      uVar3 = fixedmult((int)puVar4,1000);
      puVar4 = fixedcos(uVar6);
      uVar6 = fixedmult((int)puVar4,1000);
      puVar4 = fixedsin(uVar2 & 0xffff);
      uVar5 = fixedmult((int)puVar4,uVar6);
      pSVar7 = starPosInSky + iVar8;
      pSVar7->vx = (short)uVar5;
      pSVar7->vy = (short)uVar3;
      puVar4 = fixedcos(uVar2 & 0xffff);
      uVar2 = fixedmult((int)puVar4,uVar6);
      starPosInSky[iVar8].vz = (short)uVar2;
      uVar2 = random();
      uVar3 = Sky_gTrackSpec->starBrightMax - Sky_gTrackSpec->starBrightMin;
      if (uVar3 == 0) {
        trap(0x1c00);
      }
      uVar2 = Sky_gTrackSpec->starBrightMin + uVar2 % uVar3;
      starColors[iVar8] = uVar2 * 0x10000 | uVar2 * 0x100 | uVar2;
      iVar8 = iVar8 + 1;
    }
    seedrandom(lVar1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sky_KillStars__Fv()
 // line 216, offset 0x800cf89c
	/* begin block 1 */
		// Start line: 217
		// Start offset: 0x800CF89C
	/* end block 1 */
	// End offset: 0x800CF8CC
	// End Line: 222

	/* begin block 2 */
		// Start line: 433
	/* end block 2 */
	// End Line: 434

	/* begin block 3 */
		// Start line: 438
	/* end block 3 */
	// End Line: 439

	/* begin block 4 */
		// Start line: 438
	/* end block 4 */
	// End Line: 439

	/* begin block 5 */
		// Start line: 439
	/* end block 5 */
	// End Line: 440

	/* begin block 6 */
		// Start line: 439
	/* end block 6 */
	// End Line: 440

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Sky_KillStars__Fv(void)

{
  if (starPosInSky != (SVECTOR *)0x0) {
    purgememadr((int)starPosInSky);
  }
  if (starColors != (ulong *)0x0) {
    purgememadr((int)starColors);
  }
  starPosInSky = (SVECTOR *)0x0;
  starColors = (ulong *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_InitSkyColor__Fv()
 // line 227, offset 0x800cf8e0
	/* begin block 1 */
		// Start line: 228
		// Start offset: 0x800CF8E0
		// Variables:
	// 		int i; // $a3
	// 		int j; // $v1
	// 		int k; // $a2
	// 		struct CVECTOR rounddiff; // stack offset -24

		/* begin block 1.1 */
			// Start line: 228
			// Start offset: 0x800CF8E0

			/* begin block 1.1.1 */
				// Start line: 232
				// Start offset: 0x800CF8F8
				// Variables:
			// 		struct CVECTOR cur_bk; // stack offset -16
			// 		struct CVECTOR cur_fr; // stack offset -8

				/* begin block 1.1.1.1 */
					// Start line: 242
					// Start offset: 0x800CF99C

					/* begin block 1.1.1.1.1 */
						// Start line: 244
						// Start offset: 0x800CF9B0
						// Variables:
					// 		int l; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800CF9C8
					// End Line: 249
				/* end block 1.1.1.1 */
				// End offset: 0x800CFA2C
				// End Line: 252
			/* end block 1.1.1 */
			// End offset: 0x800CFA2C
			// End Line: 252
		/* end block 1.1 */
		// End offset: 0x800CFA34
		// End Line: 253
	/* end block 1 */
	// End offset: 0x800CFA34
	// End Line: 253

	/* begin block 2 */
		// Start line: 457
	/* end block 2 */
	// End Line: 458

	/* begin block 3 */
		// Start line: 462
	/* end block 3 */
	// End Line: 463

	/* begin block 4 */
		// Start line: 462
	/* end block 4 */
	// End Line: 463

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hrz_InitSkyColor__Fv(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  CVECTOR *pCVar6;
  int iVar7;
  int iVar8;
  CVECTOR CVar9;
  CVECTOR CVar10;
  char local_8;
  byte bStack7;
  byte bStack6;
  
  iVar8 = 0;
  iVar7 = 0;
  while (iVar8 < 5) {
    CVar9 = Sky_gTrackSpec->backcolors[iVar8];
    CVar10 = Sky_gTrackSpec->frontcolors[iVar8];
    local_8 = SUB41(CVar10,0);
    iVar1 = ((uint)CVar9 & 0xff) - ((uint)CVar10 & 0xff);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    bStack7 = (byte)((uint)CVar10 >> 8);
    iVar2 = ((uint)CVar9 >> 8 & 0xff) - (uint)bStack7;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    bStack6 = (byte)((uint)CVar10 >> 0x10);
    iVar3 = ((uint)CVar9 >> 0x10 & 0xff) - (uint)bStack6;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    iVar4 = 0;
    pCVar6 = &gSkyColor + iVar7;
    while( true ) {
      cVar5 = (char)iVar4;
      if (0x10 < iVar4) break;
      if (8 < iVar4) {
        cVar5 = '\x10' - cVar5;
      }
      pCVar6->r = local_8 + (char)(iVar1 >> 3) * cVar5;
      pCVar6->g = bStack7 + (char)(iVar2 >> 3) * cVar5;
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 1;
      pCVar6->b = bStack6 + (char)(iVar3 >> 3) * cVar5;
      pCVar6 = pCVar6 + 1;
    }
    iVar8 = iVar8 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_InitSky__Fv()
 // line 257, offset 0x800cfa3c
	/* begin block 1 */
		// Start line: 258
		// Start offset: 0x800CFA3C
		// Variables:
	// 		int i; // $s3
	// 		int j; // $s1
	// 		int k; // $s6
	// 		int angle; // $s0
	// 		int height; // $s4
	// 		int radius; // $s5
	/* end block 1 */
	// End offset: 0x800CFD4C
	// End Line: 333

	/* begin block 2 */
		// Start line: 524
	/* end block 2 */
	// End Line: 525

	/* begin block 3 */
		// Start line: 529
	/* end block 3 */
	// End Line: 530

	/* begin block 4 */
		// Start line: 529
	/* end block 4 */
	// End Line: 530

	/* begin block 5 */
		// Start line: 533
	/* end block 5 */
	// End Line: 534

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hrz_InitSky__Fv(void)

{
  CSkySpec *pCVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  SVECTOR *pSVar9;
  int iVar10;
  int viewid;
  
  puVar2 = fixedcos(Sky_gTrackSpec->sunAngleInSky);
  uVar3 = fixedmult((int)puVar2,1000);
  sunPosInSky._0_2_ = (undefined2)uVar3;
  puVar2 = fixedsin(Sky_gTrackSpec->sunAngleInSky);
  uVar3 = fixedmult((int)puVar2,1000);
  PTR_8013ddf4._0_2_ = (undefined2)uVar3;
  sunPosInSky._2_2_ =
       (short)TrackSpec_gSpec.skyspec.sunHeightInSky + (short)TrackSpec_gSpec.skyspec.yoffset;
  puVar2 = fixedcos(Sky_gTrackSpec->moonAngleInSky);
  uVar3 = fixedmult((int)puVar2,1000);
  moonPosInSky._0_2_ = (undefined2)uVar3;
  puVar2 = fixedsin(Sky_gTrackSpec->moonAngleInSky);
  uVar3 = fixedmult((int)puVar2,1000);
  PTR_8013ddfc._0_2_ = (undefined2)uVar3;
  moonPosInSky._2_2_ =
       (short)TrackSpec_gSpec.skyspec.moonHeightInSky + (short)TrackSpec_gSpec.skyspec.yoffset;
  viewid = Draw_gPlayer1View;
  if (GameSetup_gData.commMode == 1) {
    Draw_SetViewColor__Fiiii
              (Draw_gPlayer1View,(uint)(Sky_gTrackSpec->clearcolor).r,
               (uint)(Sky_gTrackSpec->clearcolor).g,(uint)(Sky_gTrackSpec->clearcolor).b);
    viewid = Draw_gPlayer2View;
  }
  iVar10 = 0;
  Draw_SetViewColor__Fiiii
            (viewid,(uint)(Sky_gTrackSpec->clearcolor).r,(uint)(Sky_gTrackSpec->clearcolor).g,
             (uint)(Sky_gTrackSpec->clearcolor).b);
  viewid = 0;
  do {
    if ((Sky_gTrackSpec->flags & 0x80U) == 0) {
      if (((Sky_gTrackSpec->flags & 2U) == 0) || (uVar3 = iVar10 << 0xb, 3 < iVar10)) {
        uVar3 = iVar10 << 0xc;
      }
      puVar2 = fixedcos(uVar3);
      uVar4 = fixedmult((int)puVar2,1000);
    }
    else {
      puVar2 = fixedcos(Sky_gTrackSpec->ringAngles[iVar10]);
      uVar4 = fixedmult((int)puVar2,1000);
      uVar3 = Sky_gTrackSpec->ringAngles[iVar10];
    }
    iVar8 = 0;
    puVar2 = fixedsin(uVar3);
    uVar3 = fixedmult((int)puVar2,1000);
    pSVar9 = &gSkyMesh + viewid;
    do {
      iVar6 = iVar8 * 0x1000;
      iVar8 = iVar8 + 1;
      uVar7 = (iVar6 - Sky_gTrackSpec->sunAngleInSky) + 0x4000;
      puVar2 = fixedsin(uVar7);
      uVar5 = fixedmult((int)puVar2,uVar4);
      pCVar1 = Sky_gTrackSpec;
      viewid = viewid + 1;
      pSVar9->vx = (short)uVar5;
      pSVar9->vy = *(short *)&pCVar1->yoffset + (short)uVar3;
      puVar2 = fixedcos(uVar7);
      uVar5 = fixedmult((int)puVar2,uVar4);
      pSVar9->vz = (short)uVar5;
      pSVar9 = pSVar9 + 1;
    } while (iVar8 < 0x11);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 5);
  viewid = 0;
  if (Sky_gTrackSpec->type == 1) {
    iVar10 = 0;
    do {
      iVar8 = 0;
      do {
        iVar6 = iVar8;
        if (iVar8 < 0) {
          iVar6 = iVar8 + 3;
        }
        iVar6 = iVar8 + (iVar6 >> 2) * -4;
        iVar8 = iVar8 + 1;
        gSkyPixmapIndex[iVar10] = *(char *)((int)Sky_gTrackSpec + iVar6 + viewid * 4 + 0x6c) + '\b';
        iVar10 = iVar10 + 1;
      } while (iVar8 < 0x10);
      viewid = viewid + 1;
    } while (viewid < 4);
    if ((Sky_gTrackSpec->type == 1) && ((Sky_gTrackSpec->flags & 0x20U) == 0)) goto LAB_800cfd4c;
  }
  Hrz_InitSkyColor__Fv();
LAB_800cfd4c:
  Flare_InitLensFlare__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_Init2DRing__Fv()
 // line 337, offset 0x800cfd80
	/* begin block 1 */
		// Start line: 338
		// Start offset: 0x800CFD80
		// Variables:
	// 		int i; // $s1
	// 		int angle; // $s0

		/* begin block 1.1 */
			// Start line: 354
			// Start offset: 0x800CFE00
			// Variables:
		// 		int nMaxPmxHeight_InPixels; // $a2
		// 		int pnPmxHeight_InPixels[16]; // stack offset -80

			/* begin block 1.1.1 */
				// Start line: 359
				// Start offset: 0x800CFE00

				/* begin block 1.1.1.1 */
					// Start line: 361
					// Start offset: 0x800CFE1C
				/* end block 1.1.1.1 */
				// End offset: 0x800CFE68
				// End Line: 371
			/* end block 1.1.1 */
			// End offset: 0x800CFE78
			// End Line: 372
		/* end block 1.1 */
		// End offset: 0x800CFED8
		// End Line: 376

		/* begin block 1.2 */
			// Start line: 381
			// Start offset: 0x800CFED8
			// Variables:
		// 		int level; // $t1

			/* begin block 1.2.1 */
				// Start line: 381
				// Start offset: 0x800CFEF0
				// Variables:
			// 		struct CVECTOR cur_bk; // stack offset -80
			// 		struct CVECTOR cur_fr; // stack offset -72
			// 		struct CVECTOR rounddiff; // stack offset -64

				/* begin block 1.2.1.1 */
					// Start line: 385
					// Start offset: 0x800CFEFC

					/* begin block 1.2.1.1.1 */
						// Start line: 388
						// Start offset: 0x800CFF3C
						// Variables:
					// 		int j; // $a1
					/* end block 1.2.1.1.1 */
					// End offset: 0x800CFFAC
					// End Line: 396
				/* end block 1.2.1.1 */
				// End offset: 0x800D0014
				// End Line: 405
			/* end block 1.2.1 */
			// End offset: 0x800D0014
			// End Line: 407
		/* end block 1.2 */
		// End offset: 0x800D0038
		// End Line: 409
	/* end block 1 */
	// End offset: 0x800D0038
	// End Line: 410

	/* begin block 2 */
		// Start line: 712
	/* end block 2 */
	// End Line: 713

	/* begin block 3 */
		// Start line: 717
	/* end block 3 */
	// End Line: 718

	/* begin block 4 */
		// Start line: 717
	/* end block 4 */
	// End Line: 718

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hrz_Init2DRing__Fv(void)

{
  CHorizonSpec *pCVar1;
  undefined *puVar2;
  uint uVar3;
  Draw_tPixMap *pDVar4;
  CVECTOR CVar5;
  int iVar6;
  SVECTOR *pSVar7;
  Draw_tPixMap **ppDVar8;
  CVECTOR *pCVar9;
  int iVar10;
  char cVar11;
  int *piVar12;
  CVECTOR CVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  CVECTOR local_50 [2];
  CVECTOR local_48;
  char local_40;
  char local_3f;
  char local_3e;
  
  iVar17 = 0;
  do {
    uVar15 = iVar17 * 0x1000 + Hrz_gTrackSpec->angle;
    puVar2 = fixedsin(uVar15);
    uVar3 = fixedmult((int)puVar2,(int)&DAT_00007d00);
    pSVar7 = gRngCoordTop + iVar17;
    pSVar7->vx = (short)uVar3;
    pSVar7->vy = 0;
    puVar2 = fixedcos(uVar15);
    uVar3 = fixedmult((int)puVar2,(int)&DAT_00007d00);
    iVar16 = iVar17 + 1;
    gRngCoordTop[iVar17].vz = (short)uVar3;
    pCVar1 = Hrz_gTrackSpec;
    CVar13 = (CVECTOR)0x1;
    iVar17 = iVar16;
  } while (iVar16 < 0x11);
  iVar17 = 0;
  pCVar9 = local_50;
  ppDVar8 = gpPmx16;
  while (iVar17 < 0x10) {
    pDVar4 = gHorizonPixmap16[(uint)(byte)pCVar1->ringPMX[iVar17] & 7];
    *ppDVar8 = pDVar4;
    CVar5 = (CVECTOR)((uint)pDVar4->v2 - (uint)pDVar4->v1);
    *pCVar9 = CVar5;
    if ((int)CVar13 < (int)CVar5) {
      CVar13 = CVar5;
    }
    pCVar9 = pCVar9 + 1;
    ppDVar8 = ppDVar8 + 1;
    iVar17 = iVar17 + 1;
  }
  iVar17 = 0;
  piVar12 = gfxPmxHeightPercentage;
  pCVar9 = local_50;
  do {
    CVar5 = *pCVar9;
    if (CVar13 == (CVECTOR)0x0) {
      trap(0x1c00);
    }
    if ((CVar13 == (CVECTOR)0xffffffff) && ((int)CVar5 << 0x10 == -0x80000000)) {
      trap(0x1800);
    }
    pCVar9 = pCVar9 + 1;
    iVar17 = iVar17 + 1;
    *piVar12 = ((int)CVar5 << 0x10) / (int)CVar13;
    piVar12 = piVar12 + 1;
  } while (iVar17 < 0x10);
  iVar17 = 0;
  pCVar9 = &gHrzRingColor;
  iVar16 = 0;
  while (iVar18 = 0, iVar17 < 2) {
    local_50[0] = Hrz_gTrackSpec->backColor[iVar17];
    local_48 = Hrz_gTrackSpec->frontColor[iVar17];
    iVar14 = iVar16;
    while( true ) {
      cVar11 = (char)iVar18;
      if (0xf < iVar18) break;
      if (8 < iVar18) {
        cVar11 = '\x10' - cVar11;
      }
      iVar6 = ((uint)local_50[0] & 0xff) - ((uint)local_48 & 0xff);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 7;
      }
      local_48.g = (uchar)((uint)local_48 >> 8);
      local_40 = (char)(iVar6 >> 3);
      iVar6 = ((uint)local_50[0] >> 8 & 0xff) - (uint)local_48.g;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 7;
      }
      local_48.b = (uchar)((uint)local_48 >> 0x10);
      iVar10 = ((uint)local_50[0] >> 0x10 & 0xff) - (uint)local_48.b;
      local_3f = (char)(iVar6 >> 3);
      if (iVar10 < 0) {
        iVar10 = iVar10 + 7;
      }
      local_3e = (char)(iVar10 >> 3);
      (&gHrzRingColor.r)[iVar14] = local_48.r + local_40 * cVar11;
      (&gHrzRingColor.g)[iVar14] = local_48.g + local_3f * cVar11;
      iVar18 = iVar18 + 1;
      (&gHrzRingColor.b)[iVar14] = local_48.b + local_3e * cVar11;
      iVar14 = iVar14 + 4;
    }
    pCVar9[0x10] = *pCVar9;
    pCVar9 = pCVar9 + 0x11;
    iVar16 = iVar16 + 0x44;
    iVar17 = iVar17 + 1;
  }
  Hrz_InitSky__Fv();
  CVECTOR_ARRAY_8013e384[0] = Sky_gTrackSpec->frontcolors[0];
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_GetHorizonPixMap__FP12Draw_tPixMap(struct Draw_tPixMap *p /*$a0*/)
 // line 419, offset 0x800d0064
	/* begin block 1 */
		// Start line: 420
		// Start offset: 0x800D0064
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x800D00F8
	// End Line: 429

	/* begin block 2 */
		// Start line: 898
	/* end block 2 */
	// End Line: 899

	/* begin block 3 */
		// Start line: 903
	/* end block 3 */
	// End Line: 904

	/* begin block 4 */
		// Start line: 903
	/* end block 4 */
	// End Line: 904

void Hrz_GetHorizonPixMap__FP12Draw_tPixMap(Draw_tPixMap *p)

{
  Draw_tPixMap **ppDVar1;
  Draw_tPixMap *rpmx;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0xb;
  ppDVar1 = &PTR_80120324;
  p = p + 0xb;
  do {
    *ppDVar1 = p;
    ppDVar1 = ppDVar1 + -1;
    iVar2 = iVar2 + -1;
    p = p + -1;
  } while (-1 < iVar2);
  iVar2 = 0;
  iVar4 = 0x30;
  rpmx = &gHorizonExtraSkyPixmaps;
  iVar3 = 0x20;
  do {
    ppDVar1 = (Draw_tPixMap **)((int)gHorizonPixmap16 + iVar3);
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 1;
    Texture_CloneUVPmx__FP12Draw_tPixMapiT0(*ppDVar1,0,rpmx);
    ppDVar1 = (Draw_tPixMap **)((int)gHorizonPixmap16 + iVar4);
    iVar4 = iVar4 + 4;
    *ppDVar1 = rpmx;
    rpmx = rpmx + 1;
  } while (iVar2 < 4);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_InitHorizon__Fv()
 // line 432, offset 0x800d0118
	/* begin block 1 */
		// Start line: 433
		// Start offset: 0x800D0118
	/* end block 1 */
	// End offset: 0x800D0174
	// End Line: 444

	/* begin block 2 */
		// Start line: 931
	/* end block 2 */
	// End Line: 932

	/* begin block 3 */
		// Start line: 935
	/* end block 3 */
	// End Line: 936

	/* begin block 4 */
		// Start line: 935
	/* end block 4 */
	// End Line: 936

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hrz_InitHorizon__Fv(void)

{
  Hrz_gTrackSpec = &TrackSpec_gSpec.horizonspec;
  Sky_gTrackSpec = &TrackSpec_gSpec.skyspec;
  gRngCoordTop = (SVECTOR *)reservememadr(s_gRngCoordTop_800568c0,0x88,0);
  Hrz_Init2DRing__Fv();
  if ((TrackSpec_gSpec.skyspec.flags & 0x10U) != 0) {
    Sky_InitStars__Fv();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_KillHorizon__Fv()
 // line 447, offset 0x800d0184
	/* begin block 1 */
		// Start line: 448
		// Start offset: 0x800D0184
	/* end block 1 */
	// End offset: 0x800D0184
	// End Line: 448

	/* begin block 2 */
		// Start line: 967
	/* end block 2 */
	// End Line: 968

	/* begin block 3 */
		// Start line: 971
	/* end block 3 */
	// End Line: 972

	/* begin block 4 */
		// Start line: 971
	/* end block 4 */
	// End Line: 972

	/* begin block 5 */
		// Start line: 973
	/* end block 5 */
	// End Line: 974

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hrz_KillHorizon__Fv(void)

{
  purgememadr((int)gRngCoordTop);
  Sky_KillStars__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_LightningAddFork__FScScSc(char direction /*$s4*/, char column /*$s2*/, char row /*$s0*/)
 // line 783, offset 0x800d01b0
	/* begin block 1 */
		// Start line: 784
		// Start offset: 0x800D01B0
		// Variables:
	// 		char type; // $a1
	// 		struct tHrz_LightningFork *fork; // $s1
	/* end block 1 */
	// End offset: 0x800D03A8
	// End Line: 823

	/* begin block 2 */
		// Start line: 1312
	/* end block 2 */
	// End Line: 1313

	/* begin block 3 */
		// Start line: 1645
	/* end block 3 */
	// End Line: 1646

	/* begin block 4 */
		// Start line: 1645
	/* end block 4 */
	// End Line: 1646

void Hrz_LightningAddFork__FScScSc(char direction,char column,char row)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char row_00;
  uint uVar8;
  
  uVar8 = (uint)(byte)row;
  uVar6 = (uint)(byte)column;
  uVar4 = (uint)(byte)direction;
  if (row == '\0') {
    uVar7 = 3;
  }
  else {
    uVar7 = 2;
    if (row < '\x03') {
      uVar7 = random();
      uVar7 = uVar7 - (((uint)((ulonglong)uVar7 * 0xaaaaaaab >> 0x20) & 0xfffffffe) + uVar7 / 3);
    }
  }
  uVar5 = (uint)(byte)gHrz_Lightning.numForks;
  gHrz_Lightning.numForks = gHrz_Lightning.numForks + '\x01';
  gHrz_Lightning.forks[uVar5].pos.vx = (short)column * 0xf;
  uVar7 = uVar7 & 0xff;
  gHrz_Lightning.forks[uVar5].pos.vy = (short)row * 0xf;
  if (uVar7 == 1) {
    row_00 = (char)((uVar8 + 1) * 0x1000000 >> 0x18);
    Hrz_LightningAddFork__FScScSc(-1,(char)((uVar6 - 1) * 0x1000000 >> 0x18),row_00);
    Hrz_LightningAddFork__FScScSc('\x01',(char)((uVar6 + 1) * 0x1000000 >> 0x18),row_00);
    bVar1 = 6;
  }
  else {
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        iVar2 = uVar4 << 0x18;
        goto LAB_800d0390;
      }
      Hrz_LightningAddFork__FScScSc
                (direction,(char)((uVar6 + uVar4) * 0x1000000 >> 0x18),
                 (char)((uVar8 + 1) * 0x1000000 >> 0x18));
      lVar3 = random();
      bVar1 = ((byte)lVar3 & 1) + 2;
    }
    else {
      if (uVar7 == 2) {
        lVar3 = random();
        bVar1 = ((byte)lVar3 & 1) + 4;
      }
      else {
        iVar2 = uVar4 << 0x18;
        if (uVar7 != 3) goto LAB_800d0390;
        uVar4 = random();
        uVar4 = (uVar4 & 1) * -2 + 1;
        Hrz_LightningAddFork__FScScSc
                  ((char)(uVar4 * 0x1000000 >> 0x18),(char)((uVar6 + uVar4) * 0x1000000 >> 0x18),
                   (char)((uVar8 + 1) * 0x1000000 >> 0x18));
        lVar3 = random();
        bVar1 = (byte)lVar3 & 1;
      }
    }
  }
  gHrz_Lightning.forks[uVar5].pmxIndex = bVar1;
  iVar2 = uVar4 << 0x18;
LAB_800d0390:
  if (iVar2 < 0) {
    gHrz_Lightning.forks[uVar5].pmxIndex = gHrz_Lightning.forks[uVar5].pmxIndex + '\b';
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_CalculateLightning__Fv()
 // line 826, offset 0x800d03c8
	/* begin block 1 */
		// Start line: 827
		// Start offset: 0x800D03C8
	/* end block 1 */
	// End offset: 0x800D03C8
	// End Line: 827

	/* begin block 2 */
		// Start line: 1739
	/* end block 2 */
	// End Line: 1740

	/* begin block 3 */
		// Start line: 1743
	/* end block 3 */
	// End Line: 1744

	/* begin block 4 */
		// Start line: 1743
	/* end block 4 */
	// End Line: 1744

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hrz_CalculateLightning__Fv(void)

{
  gHrz_Lightning.numForks = '\0';
  gHrz_Lightning.brightness = 200;
  Hrz_LightningAddFork__FScScSc('\x01','\0','\0');
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_TextureQuad__FP7DVECTORccP11Draw_DCache(struct DVECTOR *pt /*$a0*/, char type /*$a1*/, char bright /*$a2*/, struct Draw_DCache *sd /*$a3*/)
 // line 833, offset 0x800d0404
	/* begin block 1 */
		// Start line: 834
		// Start offset: 0x800D0404
		// Variables:
	// 		struct POLY_FT4 *prim; // $t0

		/* begin block 1.1 */
			// Start line: 834
			// Start offset: 0x800D0404
			// Variables:
		// 		unsigned long l0; // $v1
		// 		unsigned long l1; // $a0
		// 		unsigned long l2; // $a1
		// 		unsigned long l3; // $v0
		/* end block 1.1 */
		// End offset: 0x800D0404
		// End Line: 837
	/* end block 1 */
	// End offset: 0x800D0404
	// End Line: 837

	/* begin block 2 */
		// Start line: 1756
	/* end block 2 */
	// End Line: 1757

	/* begin block 3 */
		// Start line: 1760
	/* end block 3 */
	// End Line: 1761

	/* begin block 4 */
		// Start line: 1760
	/* end block 4 */
	// End Line: 1761

	/* begin block 5 */
		// Start line: 1763
	/* end block 5 */
	// End Line: 1764

void Hrz_TextureQuad__FP7DVECTORccP11Draw_DCache(DVECTOR *pt,char type,char bright,Draw_DCache *sd)

{
  int iVar1;
  uint *puVar2;
  Draw_tPixMap *pDVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  puVar2 = DAT_1f800004;
  iVar1 = DAT_1f800000;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *(uint *)(sd->otz * 4 + DAT_1f800000) & 0xffffff;
  puVar6 = (uint *)(sd->otz * 4 + iVar1);
  uVar7 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 10;
  *puVar6 = *puVar6 & 0xff000000 | uVar7;
  *(undefined *)((int)puVar2 + 3) = 9;
  *(undefined *)((int)puVar2 + 7) = 0x2e;
  *(char *)((int)puVar2 + 6) = bright;
  *(char *)((int)puVar2 + 5) = bright;
  *(char *)(puVar2 + 1) = bright;
  *(short *)(puVar2 + 2) = pt->vx;
  *(short *)((int)puVar2 + 10) = pt->vy;
  *(short *)(puVar2 + 6) = pt->vx;
  *(short *)((int)puVar2 + 0x1a) = pt->vy + 0x10;
  *(short *)(puVar2 + 4) = pt->vx + 0x10;
  *(short *)((int)puVar2 + 0x12) = pt->vy;
  *(short *)(puVar2 + 8) = pt->vx + 0x10;
  *(short *)((int)puVar2 + 0x22) = pt->vy + 0x10;
  pDVar3 = gLightningPixmap16[(uint)(byte)type];
  uVar4 = *(uint *)&pDVar3->u1;
  uVar5 = *(uint *)&pDVar3->u2;
  uVar7 = *(uint *)&pDVar3->u3;
  puVar2[3] = *(uint *)pDVar3;
  puVar2[5] = uVar4;
  puVar2[7] = uVar5;
  puVar2[9] = uVar7;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_SetLightingPosInSky__FP13DRender_tView(struct DRender_tView *Vi /*$a0*/)
 // line 862, offset 0x800d0534
	/* begin block 1 */
		// Start line: 863
		// Start offset: 0x800D0534
		// Variables:
	// 		struct coorddef forwardVec; // stack offset -24
	/* end block 1 */
	// End offset: 0x800D0534
	// End Line: 863

	/* begin block 2 */
		// Start line: 1817
	/* end block 2 */
	// End Line: 1818

	/* begin block 3 */
		// Start line: 1823
	/* end block 3 */
	// End Line: 1824

	/* begin block 4 */
		// Start line: 1823
	/* end block 4 */
	// End Line: 1824

void Hrz_SetLightingPosInSky__FP13DRender_tView(DRender_tView *Vi)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (Vi->cview).mrotation.m[6];
  iVar3 = (Vi->cview).mrotation.m[7];
  iVar4 = (Vi->cview).mrotation.m[8];
  uVar1 = random();
  Hrz_gLightningPosInSky.vx =
       (short)(iVar2 >> 2) + (short)uVar1 + (short)(uVar1 / 8000) * -8000 + -4000;
  uVar1 = random();
  Hrz_gLightningPosInSky.vy =
       (short)(iVar3 >> 2) + 8000 + (short)uVar1 + (short)(uVar1 / 3000) * -3000;
  uVar1 = random();
  Hrz_gLightningPosInSky.vz =
       (short)(iVar4 >> 2) + (short)uVar1 + (short)(uVar1 / 8000) * -8000 + -4000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_BuildForkLightning__FP11Draw_DCache(struct Draw_DCache *sd /*$s2*/)
 // line 872, offset 0x800d0644
	/* begin block 1 */
		// Start line: 873
		// Start offset: 0x800D0644
		// Variables:
	// 		char i; // $s0
	// 		struct tHrz_LightningFork *fork; // $v1
	// 		struct DVECTOR pos; // stack offset -48
	// 		struct DVECTOR screenPos; // stack offset -40
	// 		struct coorddef trans; // stack offset -32
	/* end block 1 */
	// End offset: 0x800D0748
	// End Line: 898

	/* begin block 2 */
		// Start line: 1838
	/* end block 2 */
	// End Line: 1839

	/* begin block 3 */
		// Start line: 1843
	/* end block 3 */
	// End Line: 1844

	/* begin block 4 */
		// Start line: 1843
	/* end block 4 */
	// End Line: 1844

/* WARNING: Could not reconcile some variable overlaps */

void Hrz_BuildForkLightning__FP11Draw_DCache(Draw_DCache *sd)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar1;
  byte bVar2;
  DVECTOR local_30 [2];
  undefined4 local_28;
  coorddef cStack32;
  
  if (0 < gHrz_Lightning.brightness) {
    sd->otz = Draw_gViewOtSize + -2;
    memset(&cStack32,0,0xc);
    HrzSetPsxTranslation__FP8coorddef(&cStack32);
    setCopReg(2,in_zero,Hrz_gLightningPosInSky._0_4_);
    setCopReg(2,in_at,Hrz_gLightningPosInSky._4_4_);
    copFunction(2,0x180001);
    local_28 = getCopReg(2,0xe);
    bVar2 = 0;
    if (gHrz_Lightning.numForks != '\0') {
      do {
        uVar1 = (uint)bVar2;
        bVar2 = bVar2 + 1;
        local_30[0].vx = gHrz_Lightning.forks[uVar1].pos.vx + (short)local_28;
        local_30[0].vy = gHrz_Lightning.forks[uVar1].pos.vy + local_28._2_2_;
        Hrz_TextureQuad__FP7DVECTORccP11Draw_DCache
                  (local_30,gHrz_Lightning.forks[uVar1].pmxIndex,(char)gHrz_Lightning.brightness,sd)
        ;
      } while (bVar2 < (byte)gHrz_Lightning.numForks);
    }
    gHrz_Lightning.brightness = gHrz_Lightning.brightness + -0x10;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_LightningFlicker__Fi(int on /*$a0*/)
 // line 901, offset 0x800d0760
	/* begin block 1 */
		// Start line: 902
		// Start offset: 0x800D0760

		/* begin block 1.1 */
			// Start line: 902
			// Start offset: 0x800D0760

			/* begin block 1.1.1 */
				// Start line: 905
				// Start offset: 0x800D076C
				// Variables:
			// 		int i; // $a1
			/* end block 1.1.1 */
			// End offset: 0x800D0810
			// End Line: 941
		/* end block 1.1 */
		// End offset: 0x800D082C
		// End Line: 955
	/* end block 1 */
	// End offset: 0x800D082C
	// End Line: 955

	/* begin block 2 */
		// Start line: 1921
	/* end block 2 */
	// End Line: 1922

	/* begin block 3 */
		// Start line: 1924
	/* end block 3 */
	// End Line: 1925

	/* begin block 4 */
		// Start line: 1924
	/* end block 4 */
	// End Line: 1925

void Hrz_LightningFlicker__Fi(int on)

{
  CVECTOR *pCVar1;
  int iVar2;
  
  if (on == 0) {
    Sky_gTrackSpec->frontcolors[0] = CVECTOR_ARRAY_8013e384[0];
    Hrz_InitSkyColor__Fv();
  }
  else {
    if (on == 1) {
      if ((char)Night_gShowForks == '\0') {
        iVar2 = 0x54;
        pCVar1 = &CVECTOR_80120770;
        Sky_gTrackSpec->frontcolors[0] = (CVECTOR)0xffc0c0;
        do {
          *pCVar1 = (CVECTOR)0xffc0c0;
          iVar2 = iVar2 + -1;
          pCVar1 = pCVar1 + -1;
        } while (-1 < iVar2);
      }
    }
    else {
      if ((char)Night_gShowForks == '\0') {
        iVar2 = 0x54;
        pCVar1 = &CVECTOR_80120770;
        Sky_gTrackSpec->frontcolors[0] = (CVECTOR)0xc02828;
        do {
          *pCVar1 = (CVECTOR)0xc02828;
          iVar2 = iVar2 + -1;
          pCVar1 = pCVar1 + -1;
        } while (-1 < iVar2);
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HrzSetPsxMatrix__FP10matrixtdef(struct matrixtdef *m /*$a0*/)
 // line 982, offset 0x800d083c
	/* begin block 1 */
		// Start line: 983
		// Start offset: 0x800D083C
		// Variables:
	// 		struct MATRIX mpsx; // stack offset -72
	// 		struct matrixtdef temp; // stack offset -40

		/* begin block 1.1 */
			// Start line: 983
			// Start offset: 0x800D083C
			// Variables:
		// 		int t1; // $t1
		// 		int t2; // $t0
		// 		int t3; // $t2
		/* end block 1.1 */
		// End offset: 0x800D083C
		// End Line: 983

		/* begin block 1.2 */
			// Start line: 983
			// Start offset: 0x800D083C
			// Variables:
		// 		int r0; // $v1
		// 		int r1; // $a0
		// 		int r2; // $v0
		/* end block 1.2 */
		// End offset: 0x800D083C
		// End Line: 983

		/* begin block 1.3 */
			// Start line: 983
			// Start offset: 0x800D083C
			// Variables:
		// 		int r0; // $a1
		// 		int r1; // $v0
		// 		int r2; // $v1
		/* end block 1.3 */
		// End offset: 0x800D083C
		// End Line: 983

		/* begin block 1.4 */
			// Start line: 983
			// Start offset: 0x800D083C
			// Variables:
		// 		int r0; // $a2
		// 		int r1; // $a3
		// 		int r2; // $v0
		/* end block 1.4 */
		// End offset: 0x800D083C
		// End Line: 983
	/* end block 1 */
	// End offset: 0x800D083C
	// End Line: 983

	/* begin block 2 */
		// Start line: 2066
	/* end block 2 */
	// End Line: 2067

	/* begin block 3 */
		// Start line: 2094
	/* end block 3 */
	// End Line: 2095

	/* begin block 4 */
		// Start line: 2094
	/* end block 4 */
	// End Line: 2095

void HrzSetPsxMatrix__FP10matrixtdef(matrixtdef *m)

{
  uint local_44;
  uint local_38;
  
  local_44 = m->m[6] >> 4 & 0xffffU | (-m->m[1] >> 4) << 0x10;
  local_38 = local_38 & 0xffff0000 | m->m[8] >> 4 & 0xffffU;
  setCopControlWord(2,0,m->m[0] >> 4 & 0xffffU | (m->m[3] >> 4) << 0x10);
  setCopControlWord(2,0x800,local_44);
  setCopControlWord(2,0x1000,-m->m[4] >> 4 & 0xffffU | (-m->m[7] >> 4) << 0x10);
  setCopControlWord(2,0x1800,m->m[2] >> 4 & 0xffffU | (m->m[5] >> 4) << 0x10);
  setCopControlWord(2,0x2000,local_38);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HrzSetPsxTranslation__FP8coorddef(struct coorddef *t /*$a0*/)
 // line 1021, offset 0x800d091c
	/* begin block 1 */
		// Start line: 1022
		// Start offset: 0x800D091C
		// Variables:
	// 		struct MATRIX mpsx; // stack offset -32
	/* end block 1 */
	// End offset: 0x800D091C
	// End Line: 1022

	/* begin block 2 */
		// Start line: 2227
	/* end block 2 */
	// End Line: 2228

	/* begin block 3 */
		// Start line: 2231
	/* end block 3 */
	// End Line: 2232

	/* begin block 4 */
		// Start line: 2231
	/* end block 4 */
	// End Line: 2232

	/* begin block 5 */
		// Start line: 2234
	/* end block 5 */
	// End Line: 2235

void HrzSetPsxTranslation__FP8coorddef(coorddef *t)

{
  setCopControlWord(2,0x2800,t->x >> 10);
  setCopControlWord(2,0x3000,t->y >> 10);
  setCopControlWord(2,0x3800,t->z >> 10);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_RotProj16__FiP7SVECTORPiP7DVECTOR(int n /*$v0*/, struct SVECTOR *s /*$a1*/, int *z /*$a2*/, struct DVECTOR *p /*$a3*/)
 // line 1032, offset 0x800d096c
	/* begin block 1 */
		// Start line: 1033
		// Start offset: 0x800D096C
	/* end block 1 */
	// End offset: 0x800D09A8
	// End Line: 1046

	/* begin block 2 */
		// Start line: 2252
	/* end block 2 */
	// End Line: 2253

	/* begin block 3 */
		// Start line: 2256
	/* end block 3 */
	// End Line: 2257

	/* begin block 4 */
		// Start line: 2256
	/* end block 4 */
	// End Line: 2257

	/* begin block 5 */
		// Start line: 2257
	/* end block 5 */
	// End Line: 2258

	/* begin block 6 */
		// Start line: 2257
	/* end block 6 */
	// End Line: 2258

void Hrz_RotProj16__FiP7SVECTORPiP7DVECTOR(int n,SVECTOR *s,int *z,DVECTOR *p)

{
  DVECTOR DVar1;
  int iVar2;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar3;
  
  iVar3 = n + -1;
  if (n != 0) {
    do {
      setCopReg(2,in_zero,*(undefined4 *)s);
      setCopReg(2,in_at,*(undefined4 *)&s->vz);
      copFunction(2,0x180001);
      s = s + 1;
      DVar1 = (DVECTOR)getCopReg(2,0xe);
      *p = DVar1;
      p = p + 1;
      iVar2 = getCopReg(2,0x1b);
      *z = iVar2;
      iVar3 = iVar3 + -1;
      z = z + 1;
    } while (iVar3 != -1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_SetDitheringPrim__Fii(int dither /*$a2*/, int otz /*$a1*/)
 // line 1050, offset 0x800d09b0
	/* begin block 1 */
		// Start line: 1051
		// Start offset: 0x800D09B0
		// Variables:
	// 		struct DR_MODE *prim; // $a0
	/* end block 1 */
	// End offset: 0x800D09B0
	// End Line: 1051

	/* begin block 2 */
		// Start line: 2287
	/* end block 2 */
	// End Line: 2288

	/* begin block 3 */
		// Start line: 2292
	/* end block 3 */
	// End Line: 2293

	/* begin block 4 */
		// Start line: 2292
	/* end block 4 */
	// End Line: 2293

void Hrz_SetDitheringPrim__Fii(int dither,int otz)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar1 = DAT_1f800004;
  puVar2 = (uint *)(otz * 4 + DAT_1f800000);
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *puVar2 & 0xffffff;
  uVar3 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 3;
  *puVar2 = *puVar2 & 0xff000000 | uVar3;
  SetDrawMode((int)puVar1,0,dither,0x100,(byte *)0x0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_BuildSky__Fv()
 // line 1060, offset 0x800d0a38
	/* begin block 1 */
		// Start line: 1061
		// Start offset: 0x800D0A38
		// Variables:
	// 		struct DVECTOR *pSkyMesh; // $s1
	// 		int *pSkyZ; // $s4
	// 		int i; // $t4
	// 		int otz_old; // $s0
	// 		int pshift; // $s0
	// 		struct Draw_DCache *sd; // $s2

		/* begin block 1.1 */
			// Start line: 1074
			// Start offset: 0x800D0A6C

			/* begin block 1.1.1 */
				// Start line: 1081
				// Start offset: 0x800D0A94
				// Variables:
			// 		struct coorddef trans; // stack offset -56
			// 		struct DVECTOR *scnt; // $a1
			// 		struct SVECTOR *pcnt; // $a2
			// 		int *zcnt; // $a0
			// 		int n; // $a3
			/* end block 1.1.1 */
			// End offset: 0x800D0B7C
			// End Line: 1122

			/* begin block 1.1.2 */
				// Start line: 1126
				// Start offset: 0x800D0B84
				// Variables:
			// 		struct DVECTOR *scnt; // $v1
			// 		struct SVECTOR *pcnt; // $a2
			// 		struct VECTOR transformed; // stack offset -40
			// 		int *zcnt; // $a1
			// 		int n; // $a0
			// 		struct coorddef trans; // stack offset -56
			/* end block 1.1.2 */
			// End offset: 0x800D0C14
			// End Line: 1156
		/* end block 1.1 */
		// End offset: 0x800D0C14
		// End Line: 1156

		/* begin block 1.2 */
			// Start line: 1172
			// Start offset: 0x800D0C70

			/* begin block 1.2.1 */
				// Start line: 1172
				// Start offset: 0x800D0CAC
				// Variables:
			// 		int temp; // $t1

				/* begin block 1.2.1.1 */
					// Start line: 1198
					// Start offset: 0x800D0E60

					/* begin block 1.2.1.1.1 */
						// Start line: 1199
						// Start offset: 0x800D0E78

						/* begin block 1.2.1.1.1.1 */
							// Start line: 1200
							// Start offset: 0x800D0E78

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 1201
								// Start offset: 0x800D0E8C
								// Variables:
							// 		struct POLY_GT4 *prim; // $a1
							// 		struct Draw_tPixMap *pmx; // $a3
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x800D0E8C
							// End Line: 1206

							/* begin block 1.2.1.1.1.1.2 */
								// Start line: 1229
								// Start offset: 0x800D0F94
								// Variables:
							// 		struct POLY_FT4 *prim; // $a1
							// 		struct Draw_tPixMap *pmx; // $a3
							/* end block 1.2.1.1.1.1.2 */
							// End offset: 0x800D0F94
							// End Line: 1234
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800D0F94
						// End Line: 1234
					/* end block 1.2.1.1.1 */
					// End offset: 0x800D0F94
					// End Line: 1234

					/* begin block 1.2.1.1.2 */
						// Start line: 1255
						// Start offset: 0x800D103C
						// Variables:
					// 		struct POLY_G4 *prim; // $a1
					/* end block 1.2.1.1.2 */
					// End offset: 0x800D1108
					// End Line: 1273
				/* end block 1.2.1.1 */
				// End offset: 0x800D1108
				// End Line: 1273
			/* end block 1.2.1 */
			// End offset: 0x800D1108
			// End Line: 1273
		/* end block 1.2 */
		// End offset: 0x800D1114
		// End Line: 1275
	/* end block 1 */
	// End offset: 0x800D1140
	// End Line: 1278

	/* begin block 2 */
		// Start line: 2310
	/* end block 2 */
	// End Line: 2311

	/* begin block 3 */
		// Start line: 2315
	/* end block 3 */
	// End Line: 2316

	/* begin block 4 */
		// Start line: 2315
	/* end block 4 */
	// End Line: 2316

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hrz_BuildSky__Fv(void)

{
  CVECTOR *pCVar1;
  undefined4 uVar2;
  uint *puVar3;
  CSkySpec *pCVar4;
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  CVECTOR CVar8;
  int iVar9;
  undefined4 *puVar10;
  SVECTOR *pSVar11;
  int iVar12;
  int iVar13;
  Draw_tPixMap *pDVar14;
  undefined4 *puVar15;
  char *pcVar16;
  short sVar17;
  coorddef cStack56;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  
  sVar17 = 0x78;
  if (GameSetup_gData.commMode == 1) {
    sVar17 = 0x3c;
  }
  if ((Sky_gTrackSpec->flags & 1U) == 0) {
    memset(&cStack56,0,0xc);
    HrzSetPsxTranslation__FP8coorddef(&cStack56);
    pSVar11 = &gSkyMesh;
    puVar10 = (undefined4 *)0x1f800164;
    iVar12 = 0x54;
    puVar7 = (undefined4 *)&DAT_1f800010;
    do {
      setCopReg(2,in_zero,*(undefined4 *)pSVar11);
      setCopReg(2,in_at,*(undefined4 *)&pSVar11->vz);
      copFunction(2,0x180001);
      pSVar11 = pSVar11 + 1;
      puVar10 = puVar10 + 1;
      local_28 = getCopReg(2,0x19);
      local_24 = getCopReg(2,0x1a);
      local_20 = getCopReg(2,0x1b);
      uVar2 = getCopReg(2,0xe);
      puVar7[1] = uVar2;
      *(short *)((int)puVar7 + 6) = (short)(local_24 >> 2) + sVar17;
      uVar2 = getCopReg(2,0x13);
      *puVar10 = uVar2;
      iVar12 = iVar12 + -1;
      puVar7 = puVar7 + 1;
    } while (iVar12 != -1);
  }
  else {
    memset(&cStack56,0,0xc);
    HrzSetPsxTranslation__FP8coorddef(&cStack56);
    pSVar11 = &gSkyMesh;
    puVar7 = (undefined4 *)0x1f80015c;
    puVar10 = &DAT_1f800008;
    iVar12 = 0x55;
    do {
      iVar13 = iVar12;
      setCopReg(2,in_zero,*(undefined4 *)pSVar11);
      setCopReg(2,in_at,*(undefined4 *)&pSVar11->vz);
      setCopReg(2,pSVar11 + 2,*(undefined4 *)(pSVar11 + 1));
      setCopReg(2,pSVar11 + 1,*(undefined4 *)&pSVar11[1].vz);
      setCopReg(2,puVar7,*(undefined4 *)(pSVar11 + 2));
      setCopReg(2,puVar10,*(undefined4 *)&pSVar11[2].vz);
      copFunction(2,0x280030);
      pSVar11 = pSVar11 + 3;
      iVar12 = iVar13 + -3;
      puVar15 = puVar10 + 5;
      uVar2 = getCopReg(2,0xc);
      puVar10[3] = uVar2;
      uVar2 = getCopReg(2,0xd);
      puVar10[4] = uVar2;
      uVar2 = getCopReg(2,0xe);
      *puVar15 = uVar2;
      puVar6 = puVar7 + 5;
      uVar2 = getCopReg(2,0x11);
      puVar7[3] = uVar2;
      uVar2 = getCopReg(2,0x12);
      puVar7[4] = uVar2;
      uVar2 = getCopReg(2,0x13);
      *puVar6 = uVar2;
      puVar7 = puVar7 + 3;
      puVar10 = puVar10 + 3;
    } while (2 < iVar12);
    iVar13 = iVar13 + -4;
    while (iVar13 != -1) {
      setCopReg(2,in_zero,*(undefined4 *)pSVar11);
      setCopReg(2,in_at,*(undefined4 *)&pSVar11->vz);
      copFunction(2,0x180001);
      pSVar11 = pSVar11 + 1;
      puVar15 = puVar15 + 1;
      puVar6 = puVar6 + 1;
      uVar2 = getCopReg(2,0xe);
      *puVar15 = uVar2;
      uVar2 = getCopReg(2,0x13);
      *puVar6 = uVar2;
      iVar13 = iVar13 + -1;
    }
  }
  if ((Sky_gTrackSpec->flags & 0x40U) != 0) {
    Hrz_SetDitheringPrim__Fii(0,Draw_gViewOtSize + -2);
  }
  uVar2 = DAT_1f800094;
  if ((TrackSpec_gSpec.skyspec.flags & 4U) != 0) {
    Flare_Sun__FP7SVECTORP15Draw_FlareCache
              ((SVECTOR *)&sunPosInSky,(Draw_FlareCache *)&DAT_1f800000);
  }
  iVar12 = 0;
  pcVar16 = gSkyPixmapIndex;
  DAT_1f800094 = uVar2;
  do {
    pCVar4 = Sky_gTrackSpec;
    puVar3 = DAT_1f800004;
    if (0x3f < iVar12) {
      if ((Sky_gTrackSpec->flags & 0x40U) != 0) {
        Hrz_SetDitheringPrim__Fii(1,Draw_gViewOtSize + -2);
      }
      return;
    }
    iVar13 = iVar12 * 0x11;
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xf;
    }
    iVar13 = iVar13 >> 4;
    if ((((((&DAT_1f8001ac)[iVar13] != 0) || ((&DAT_1f8001b0)[iVar13] != 0)) ||
         ((&DAT_1f80016c)[iVar13] != 0)) || ((&DAT_1f800168)[iVar13] != 0)) &&
       ((((((short)(&DAT_1f800058)[iVar13 * 2] <= DAT_1f800010 ||
           (*(short *)(&DAT_1f80005c + iVar13) <= DAT_1f800010)) ||
          (((short)(&DAT_1f800018)[iVar13 * 2] <= DAT_1f800010 ||
           ((short)(&DAT_1f800014)[iVar13 * 2] <= DAT_1f800010)))) &&
         (((-1 < (short)(&DAT_1f800058)[iVar13 * 2] || (-1 < *(short *)(&DAT_1f80005c + iVar13))) ||
          ((-1 < (short)(&DAT_1f800018)[iVar13 * 2] || (-1 < (short)(&DAT_1f800014)[iVar13 * 2])))))
         ) && ((((((short)(&DAT_1f80005a)[iVar13 * 2] <= DAT_1f800012 ||
                  (*(short *)((int)&DAT_1f80005c + iVar13 * 4 + 2) <= DAT_1f800012)) ||
                 ((short)(&DAT_1f80001a)[iVar13 * 2] <= DAT_1f800012)) ||
                ((short)(&DAT_1f800016)[iVar13 * 2] <= DAT_1f800012)) &&
               (((-1 < (short)(&DAT_1f80005a)[iVar13 * 2] ||
                 (-1 < *(short *)((int)&DAT_1f80005c + iVar13 * 4 + 2))) ||
                ((-1 < (short)(&DAT_1f80001a)[iVar13 * 2] ||
                 (-1 < (int)((uint)(ushort)(&DAT_1f800016)[iVar13 * 2] << 0x10))))))))))) {
      if (Sky_gTrackSpec->type == 1) {
        if ((Sky_gTrackSpec->flags & 0x20U) != 0) {
          iVar9 = Draw_gViewOtSize * 4 + DAT_1f800000;
          pDVar14 = gHorizonPixmap16[(uint)(byte)*pcVar16];
          *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *(uint *)(iVar9 + -8) & 0xffffff;
          *(uint *)(iVar9 + -8) = *(uint *)(iVar9 + -8) & 0xff000000 | (uint)DAT_1f800004 & 0xffffff
          ;
          pCVar1 = (CVECTOR *)(DAT_1f800004 + 1);
          DAT_1f800004 = DAT_1f800004 + 0xd;
          *pCVar1 = (&CVECTOR_80120664)[iVar13];
          *(CVECTOR *)(puVar3 + 4) = CVECTOR_ARRAY_80120668[iVar13];
          *(CVECTOR *)(puVar3 + 7) = (&gSkyColor)[iVar13];
          CVar8 = CVECTOR_ARRAY_80120624[iVar13];
          *(undefined *)((int)puVar3 + 3) = 0xc;
          *(undefined *)((int)puVar3 + 7) = 0x3c;
          *(CVECTOR *)(puVar3 + 10) = CVar8;
          puVar3[3] = *(uint *)pDVar14;
          puVar3[6] = *(uint *)&pDVar14->u1;
          puVar3[9] = *(uint *)&pDVar14->u2;
          puVar3[0xc] = *(uint *)&pDVar14->u3;
          puVar3[2] = *(uint *)(&DAT_1f800058 + iVar13 * 2);
          puVar3[5] = (&DAT_1f80005c)[iVar13];
          puVar3[8] = *(uint *)(&DAT_1f800014 + iVar13 * 2);
          puVar3[0xb] = *(uint *)(&DAT_1f800018 + iVar13 * 2);
          goto LAB_800d1108;
        }
        iVar9 = Draw_gViewOtSize * 4 + DAT_1f800000;
        pDVar14 = gHorizonPixmap16[(uint)(byte)*pcVar16];
        *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *(uint *)(iVar9 + -8) & 0xffffff;
        uVar5 = (uint)DAT_1f800004 & 0xffffff;
        DAT_1f800004 = DAT_1f800004 + 10;
        *(uint *)(iVar9 + -8) = *(uint *)(iVar9 + -8) & 0xff000000 | uVar5;
        CVar8 = pCVar4->frontcolors[0];
        *(undefined *)((int)puVar3 + 3) = 9;
        *(CVECTOR *)(puVar3 + 1) = CVar8;
        *(undefined *)((int)puVar3 + 7) = 0x2c;
        puVar3[3] = *(uint *)pDVar14;
        puVar3[5] = *(uint *)&pDVar14->u1;
        puVar3[7] = *(uint *)&pDVar14->u2;
        puVar3[9] = *(uint *)&pDVar14->u3;
      }
      else {
        iVar9 = Draw_gViewOtSize * 4 + DAT_1f800000;
        *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *(uint *)(iVar9 + -8) & 0xffffff;
        *(uint *)(iVar9 + -8) = *(uint *)(iVar9 + -8) & 0xff000000 | (uint)DAT_1f800004 & 0xffffff;
        pCVar1 = (CVECTOR *)(DAT_1f800004 + 1);
        DAT_1f800004 = DAT_1f800004 + 9;
        *pCVar1 = (&CVECTOR_80120664)[iVar13];
        *(CVECTOR *)(puVar3 + 3) = CVECTOR_ARRAY_80120668[iVar13];
        *(CVECTOR *)(puVar3 + 5) = (&gSkyColor)[iVar13];
        CVar8 = CVECTOR_ARRAY_80120624[iVar13];
        *(undefined *)((int)puVar3 + 3) = 8;
        *(undefined *)((int)puVar3 + 7) = 0x38;
        *(CVECTOR *)(puVar3 + 7) = CVar8;
      }
      puVar3[2] = *(uint *)(&DAT_1f800058 + iVar13 * 2);
      puVar3[4] = (&DAT_1f80005c)[iVar13];
      puVar3[6] = *(uint *)(&DAT_1f800014 + iVar13 * 2);
      puVar3[8] = *(uint *)(&DAT_1f800018 + iVar13 * 2);
    }
LAB_800d1108:
    pcVar16 = (char *)((byte *)pcVar16 + 1);
    iVar12 = iVar12 + 1;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sky_RenderStars__FP13Draw_SkyCachei(struct Draw_SkyCache *sd /*$s2*/, int otz /*$s3*/)
 // line 1284, offset 0x800d1160
	/* begin block 1 */
		// Start line: 1285
		// Start offset: 0x800D1160
		// Variables:
	// 		struct SVECTOR *pcnt; // $s0
	// 		int n; // $a2
	// 		struct TILE_1 *prim; // $a0
	// 		int pshift; // $s1
	// 		struct coorddef trans; // stack offset -72
	// 		struct DVECTOR scnt; // stack offset -56
	// 		struct VECTOR transformed; // stack offset -48
	// 		int zcnt; // stack offset -32
	/* end block 1 */
	// End offset: 0x800D1300
	// End Line: 1331

	/* begin block 2 */
		// Start line: 2814
	/* end block 2 */
	// End Line: 2815

	/* begin block 3 */
		// Start line: 2821
	/* end block 3 */
	// End Line: 2822

	/* begin block 4 */
		// Start line: 2821
	/* end block 4 */
	// End Line: 2822

/* WARNING: Could not reconcile some variable overlaps */

void Sky_RenderStars__FP13Draw_SkyCachei(Draw_SkyCache *sd,int otz)

{
  uint *puVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  int iVar6;
  SVECTOR *pSVar7;
  int iVar8;
  coorddef cStack72;
  uint local_38;
  
  pSVar7 = starPosInSky;
  iVar8 = 0x78;
  if (GameSetup_gData.commMode == 1) {
    iVar8 = 0x3c;
  }
  memset(&cStack72,0,0xc);
  HrzSetPsxTranslation__FP8coorddef(&cStack72);
  iVar6 = 0;
  if (0 < Sky_gTrackSpec->numStars) {
    do {
      puVar1 = DAT_1f800004;
      setCopReg(2,in_zero,*(undefined4 *)pSVar7);
      setCopReg(2,in_at,*(undefined4 *)&pSVar7->vz);
      copFunction(2,0x180001);
      pSVar7 = pSVar7 + 1;
      iVar3 = getCopReg(2,0x13);
      if (0 < iVar3) {
        uVar2 = getCopReg(2,0xe);
        getCopReg(2,0x19);
        iVar3 = getCopReg(2,0x1a);
        getCopReg(2,0x1b);
        local_38._0_2_ = (short)uVar2;
        iVar3 = (iVar3 >> 2) + iVar8;
        local_38 = uVar2 & 0xffff | iVar3 * 0x10000;
        if (((((short)local_38 <= (sd->head).clipW) && (-1 < (short)local_38)) &&
            (iVar3 = iVar3 * 0x10000 >> 0x10, iVar3 <= (int)(sd->head).clipH)) && (-1 < iVar3)) {
          puVar5 = (uint *)(otz * 4 + DAT_1f800000);
          *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *puVar5 & 0xffffff;
          uVar2 = (uint)DAT_1f800004 & 0xffffff;
          DAT_1f800004 = DAT_1f800004 + 3;
          *puVar5 = *puVar5 & 0xff000000 | uVar2;
          uVar4 = starColors[iVar6];
          *(undefined *)((int)puVar1 + 3) = 2;
          puVar1[1] = uVar4;
          *(undefined *)((int)puVar1 + 7) = 0x68;
          puVar1[2] = local_38;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < Sky_gTrackSpec->numStars);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hrz_BuildHorizon__FP13DRender_tView(struct DRender_tView *Vi /*$s0*/)
 // line 1338, offset 0x800d131c
	/* begin block 1 */
		// Start line: 1339
		// Start offset: 0x800D131C
		// Variables:
	// 		int i; // $s4
	// 		int fxOverlapPercentage; // stack offset -52
	// 		struct coorddef trans; // stack offset -104
	// 		struct Draw_HorizonCache *hsd; // $s6
	// 		int hrz_projchange; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1368
			// Start offset: 0x800D138C
			// Variables:
		// 		int *zval; // $a0
		// 		struct SVECTOR updown[2]; // stack offset -88
		// 		struct DVECTOR temp2d[2]; // stack offset -72
		// 		int i; // $a3
		// 		int farI; // $t0
		// 		int Zmax; // $a1
		// 		int dx; // $a1
		// 		int dy; // $a0

			/* begin block 1.1.1 */
				// Start line: 1393
				// Start offset: 0x800D13F8
				// Variables:
			// 		struct SVECTOR p_; // stack offset -64
			// 		long s_; // stack offset -56
			/* end block 1.1.1 */
			// End offset: 0x800D13F8
			// End Line: 1393
		/* end block 1.1 */
		// End offset: 0x800D15A0
		// End Line: 1438

		/* begin block 1.2 */
			// Start line: 1445
			// Start offset: 0x800D15A0

			/* begin block 1.2.1 */
				// Start line: 1452
				// Start offset: 0x800D15FC

				/* begin block 1.2.1.1 */
					// Start line: 1453
					// Start offset: 0x800D15FC

					/* begin block 1.2.1.1.1 */
						// Start line: 1453
						// Start offset: 0x800D1618
						// Variables:
					// 		struct DVECTOR mpts[4]; // stack offset -88

						/* begin block 1.2.1.1.1.1 */
							// Start line: 1480
							// Start offset: 0x800D17D8
							// Variables:
						// 		struct DVECTOR right; // stack offset -72
						// 		struct POLY_GT4 *prim; // $s0
						// 		struct Draw_tPixMap *pmx; // $s1
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800D1970
						// End Line: 1522
					/* end block 1.2.1.1.1 */
					// End offset: 0x800D1970
					// End Line: 1522
				/* end block 1.2.1.1 */
				// End offset: 0x800D1984
				// End Line: 1526
			/* end block 1.2.1 */
			// End offset: 0x800D1984
			// End Line: 1526
		/* end block 1.2 */
		// End offset: 0x800D1984
		// End Line: 1526

		/* begin block 1.3 */
			// Start line: 1536
			// Start offset: 0x800D19B4

			/* begin block 1.3.1 */
				// Start line: 1537
				// Start offset: 0x800D19D0
				// Variables:
			// 		struct coorddef trans2; // stack offset -88
			/* end block 1.3.1 */
			// End offset: 0x800D19FC
			// End Line: 1541
		/* end block 1.3 */
		// End offset: 0x800D19FC
		// End Line: 1541
	/* end block 1 */
	// End offset: 0x800D1A50
	// End Line: 1557

	/* begin block 2 */
		// Start line: 2934
	/* end block 2 */
	// End Line: 2935

	/* begin block 3 */
		// Start line: 2942
	/* end block 3 */
	// End Line: 2943

	/* begin block 4 */
		// Start line: 2942
	/* end block 4 */
	// End Line: 2943

/* WARNING: Could not reconcile some variable overlaps */

void Hrz_BuildHorizon__FP13DRender_tView(DRender_tView *Vi)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  uint *puVar4;
  undefined4 in_zero;
  undefined4 in_at;
  int *piVar5;
  SVECTOR *pSVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  coorddef cStack104;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  DVECTOR local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  uint local_38;
  undefined **local_34;
  long local_30;
  
  local_34 = &PTR_000107ae;
  memset(&cStack104,0,0xc);
  local_30 = 0;
  if (700 < Camera_gGeomScreen) {
    local_30 = Camera_gGeomScreen;
    SetGeomScreen(700);
  }
  HrzSetPsxMatrix__FP10matrixtdef(&(Vi->cview).mrotationInv);
  HrzSetPsxTranslation__FP8coorddef(&cStack104);
  Hrz_RotProj16__FiP7SVECTORPiP7DVECTOR(0x11,gRngCoordTop,&DAT_1f800124,(DVECTOR *)&DAT_1f800058);
  iVar10 = 0;
  iVar8 = 0;
  piVar5 = &DAT_1f800124;
  iVar9 = 0;
  do {
    if (iVar8 < *piVar5) {
      iVar8 = *piVar5;
      iVar10 = iVar9;
    }
    iVar9 = iVar9 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar9 < 0x10);
  pSVar6 = gRngCoordTop + iVar10;
  local_58 = CONCAT22(*(short *)&Hrz_gTrackSpec->yoffset + *(short *)&Hrz_gTrackSpec->height,
                      pSVar6->vx);
  local_54 = CONCAT22(local_54._2_2_,pSVar6->vz);
  local_50 = CONCAT22(*(undefined2 *)&Hrz_gTrackSpec->yoffset,pSVar6->vx);
  local_4c = CONCAT22(local_4c._2_2_,pSVar6->vz);
  setCopReg(2,in_zero,local_50);
  setCopReg(2,in_at,local_4c);
  copFunction(2,0x180001);
  local_44 = getCopReg(2,0xe);
  local_40 = local_58;
  local_3c = local_54;
  setCopReg(2,in_zero,local_58);
  setCopReg(2,in_at,local_54);
  copFunction(2,0x180001);
  local_48 = getCopReg(2,0xe);
  iVar9 = 0;
  iVar8 = 0x1f800000;
  sVar2 = (&DAT_1f800058)[iVar10 * 2];
  local_48.vy = (short)(local_48 >> 0x10);
  sVar3 = (&DAT_1f80005a)[iVar10 * 2];
  do {
    if (0 < *(int *)(iVar8 + 0x124)) {
      *(short *)(iVar8 + 0x14) = *(short *)(iVar8 + 0x58) + (local_48.vx - sVar2);
      *(short *)(iVar8 + 0x16) = *(short *)(iVar8 + 0x5a) + (local_48.vy - sVar3);
    }
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar9 < 0x11);
  iVar9 = 0;
  iVar8 = 0x1f800000;
  sVar2 = (&DAT_1f800058)[iVar10 * 2];
  local_44._2_2_ = (short)((uint)local_44 >> 0x10);
  sVar3 = (&DAT_1f80005a)[iVar10 * 2];
  do {
    if (0 < *(int *)(iVar8 + 0x124)) {
      *(short *)(iVar8 + 0x58) = *(short *)(iVar8 + 0x58) + ((short)local_44 - sVar2);
      *(short *)(iVar8 + 0x5a) = *(short *)(iVar8 + 0x5a) + (local_44._2_2_ - sVar3);
    }
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar9 < 0x11);
  local_38 = local_48;
  Horizon_InterpolateLineSCoords__FP7DVECTORN20Piii
            ((DVECTOR *)&DAT_1f80009c,(DVECTOR *)&DAT_1f800058,(DVECTOR *)&DAT_1f800014,
             gfxPmxHeightPercentage,0x10,1);
  Horizon_InterpolateLineSCoords__FP7DVECTORN20Piii
            ((DVECTOR *)&DAT_1f8000e0,(DVECTOR *)&DAT_1f80005c,(DVECTOR *)&DAT_1f800018,
             gfxPmxHeightPercentage,0x10,1);
  iVar8 = 0;
  if (TrackSpec_gSpec.horizonstate != 0) {
    iVar9 = 0x1f800000;
    iVar10 = 0;
    iVar12 = 4;
    while (iVar8 < 0x10) {
      if ((15999 < *(int *)(iVar9 + 0x124)) || (15999 < *(int *)((int)&DAT_1f800124 + iVar12))) {
        local_58 = *(int *)(iVar9 + 0x9c);
        local_54 = *(int *)(iVar9 + 0xe0);
        local_50 = *(int *)((int)&DAT_1f800058 + iVar12);
        local_4c = *(undefined4 *)(iVar9 + 0x58);
        if (((((-1 < (short)local_58) ||
              (((-1 < (short)local_54 || (-1 < (short)local_50)) || (-1 < (short)local_4c)))) &&
             (((((short)local_58 <= DAT_1f800010 || ((short)local_54 <= DAT_1f800010)) ||
               ((short)local_50 <= DAT_1f800010)) || ((short)local_4c <= DAT_1f800010)))) &&
            (((local_58._2_2_ = (short)((uint)local_58 >> 0x10),
              local_54._2_2_ = (short)((uint)local_54 >> 0x10),
              local_50._2_2_ = (short)((uint)local_50 >> 0x10),
              local_4c._2_2_ = (short)((uint)local_4c >> 0x10), -1 < local_58._2_2_ ||
              (-1 < local_54._2_2_)) || ((-1 < local_50._2_2_ || (-1 < local_4c._2_2_)))))) &&
           ((((local_58._2_2_ <= DAT_1f800012 || (local_54._2_2_ <= DAT_1f800012)) ||
             (local_50._2_2_ <= DAT_1f800012)) || (local_4c._2_2_ <= DAT_1f800012)))) {
          Horizon_InterpolateLineSCoords__FP7DVECTORN20Piii
                    (&local_48,(DVECTOR *)((int)&DAT_1f80009c + iVar10),
                     (DVECTOR *)((int)&DAT_1f8000e0 + iVar10),(int *)&local_34,1,0);
          puVar4 = DAT_1f800004;
          puVar11 = *(uint **)((int)gpPmx16 + iVar10);
          if (Hrz_gTrackSpec->ringPMX[iVar8] != '\x10') {
            iVar7 = Draw_gViewOtSize * 4 + DAT_1f800000;
            *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *(uint *)(iVar7 + -8) & 0xffffff;
            *(uint *)(iVar7 + -8) =
                 *(uint *)(iVar7 + -8) & 0xff000000 | (uint)DAT_1f800004 & 0xffffff;
            puVar1 = DAT_1f800004 + 1;
            DAT_1f800004 = DAT_1f800004 + 0xd;
            *puVar1 = *(uint *)((int)&DAT_80120838 + iVar10);
            puVar4[4] = *(uint *)((int)&DAT_8012083c + iVar10);
            puVar4[7] = *(uint *)(&gHrzRingColor.r + iVar10);
            puVar4[10] = *(uint *)(&CVECTOR_801207f8.r + iVar10);
            SetPolyGT4((int)puVar4);
            puVar4[3] = *puVar11;
            puVar4[6] = puVar11[1];
            puVar4[9] = puVar11[2];
            puVar4[0xc] = puVar11[3];
            if ((byte)Hrz_gTrackSpec->ringPMX[iVar8] < 8) {
              puVar4[2] = *(uint *)((int)&DAT_1f80009c + iVar10);
              puVar4[5] = local_48;
              puVar4[8] = *(uint *)((int)&DAT_1f800058 + iVar10);
              puVar4[0xb] = *(uint *)((int)&DAT_1f80005c + iVar10);
            }
            else {
              puVar4[2] = local_48;
              puVar4[5] = *(uint *)(iVar9 + 0x9c);
              puVar4[8] = *(uint *)(iVar9 + 0x5c);
              puVar4[0xb] = *(uint *)(iVar9 + 0x58);
            }
          }
        }
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar10 + 4;
      iVar12 = iVar12 + 4;
      iVar8 = iVar8 + 1;
    }
  }
  if ((Night_gLightning != (uchar *)0x0) && ((char)Night_gShowForks != '\0')) {
    Hrz_BuildForkLightning__FP11Draw_DCache((Draw_DCache *)&DAT_1f800000);
  }
  if ((TrackSpec_gSpec.skyspec.flags & 8U) != 0) {
    memset((coorddef *)&local_58,0,0xc);
    HrzSetPsxTranslation__FP8coorddef((coorddef *)&local_58);
    Flare_Moon__FP7SVECTORP15Draw_FlareCache
              ((SVECTOR *)&moonPosInSky,(Draw_FlareCache *)&DAT_1f800000);
  }
  if ((TrackSpec_gSpec.skyspec.flags & 0x10U) != 0) {
    Sky_RenderStars__FP13Draw_SkyCachei((Draw_SkyCache *)&DAT_1f800000,Draw_gViewOtSize + -2);
  }
  if (TrackSpec_gSpec.skystate != 0) {
    Hrz_BuildSky__Fv();
  }
  if (local_30 != 0) {
    SetGeomScreen(local_30);
  }
  return;
}





