#include "NFS4.H"
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

void Horizon_InterpolateLineSCoords__FP7DVECTORN20Piii( (DVECTOR *sc,DVECTOR *s0,DVECTOR *s1,int *percentage,int n,int bPercentageArray)
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

void Sky_InitStars__Fv(void)
{
  undefined2 uVar1;
  undefined2 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  
  if (iGp0000132c == 0) {
    iVar11 = 0;
    lVar3 = random();
    seedrandom(*(undefined4 *)(iGp00001340 + 0x5c));
    iGp0000132c = reservememadr("stars",*(int *)(iGp00001340 + 0x44) << 3,0);
    iGp00001330 = reservememadr("starCols",*(int *)(iGp00001340 + 0x44) << 2,0);
    while (iVar11 < *(int *)(iGp00001340 + 0x44)) {
      uVar4 = random();
      uVar5 = random();
      uVar8 = *(int *)(iGp00001340 + 0x4c) - *(int *)(iGp00001340 + 0x48);
      if (uVar8 == 0) {
        trap(0x1c00);
      }
      iVar10 = *(int *)(iGp00001340 + 0x48) + uVar5 % uVar8;
      uVar6 = fixedsin(iVar10);
      uVar1 = fixedmult(uVar6,1000);
      uVar6 = fixedcos(iVar10);
      uVar6 = fixedmult(uVar6,1000);
      uVar7 = fixedsin(uVar4 & 0xffff);
      uVar2 = fixedmult(uVar7,uVar6);
      puVar9 = (undefined2 *)(iVar11 * 8 + iGp0000132c);
      *puVar9 = uVar2;
      puVar9[1] = uVar1;
      uVar7 = fixedcos(uVar4 & 0xffff);
      uVar1 = fixedmult(uVar7,uVar6);
      *(undefined2 *)(iVar11 * 8 + iGp0000132c + 4) = uVar1;
      uVar4 = random();
      uVar5 = *(int *)(iGp00001340 + 0x54) - *(int *)(iGp00001340 + 0x50);
      if (uVar5 == 0) {
        trap(0x1c00);
      }
      iVar10 = iVar11 * 4;
      iVar11 = iVar11 + 1;
      uVar4 = *(int *)(iGp00001340 + 0x50) + uVar4 % uVar5;
      *(uint *)(iVar10 + iGp00001330) = uVar4 * 0x10000 | uVar4 * 0x100 | uVar4;
    }
    seedrandom(lVar3);
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

void Sky_KillStars__Fv(void)
{
  if (iGp0000132c != 0) {
    purgememadr();
  }
  if (iGp00001330 != 0) {
    purgememadr();
  }
  iGp0000132c = 0;
  iGp00001330 = 0;
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

void Hrz_InitSkyColor__Fv(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char local_8;
  byte bStack7;
  byte bStack6;
  
  iVar8 = 0;
  iVar7 = 0;
  while (iVar8 < 5) {
    uVar9 = *(uint *)(iGp00001340 + iVar8 * 4 + 0x1c);
    uVar10 = *(uint *)(iGp00001340 + iVar8 * 4 + 8);
    local_8 = (char)uVar10;
    iVar1 = (uVar9 & 0xff) - (uVar10 & 0xff);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    bStack7 = (byte)(uVar10 >> 8);
    iVar2 = (uVar9 >> 8 & 0xff) - (uint)bStack7;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    bStack6 = (byte)(uVar10 >> 0x10);
    iVar3 = (uVar9 >> 0x10 & 0xff) - (uint)bStack6;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    iVar4 = 0;
    pcVar6 = &gSkyColor + iVar7 * 4;
    while( true ) {
      cVar5 = (char)iVar4;
      if (0x10 < iVar4) break;
      if (8 < iVar4) {
        cVar5 = '\x10' - cVar5;
      }
      *pcVar6 = local_8 + (char)(iVar1 >> 3) * cVar5;
      pcVar6[1] = bStack7 + (char)(iVar2 >> 3) * cVar5;
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 1;
      pcVar6[2] = bStack6 + (char)(iVar3 >> 3) * cVar5;
      pcVar6 = pcVar6 + 4;
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

void Hrz_InitSky__Fv(void)
{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = fixedcos(piGp00001340[0xd]);
  uGp000018a4 = fixedmult(uVar3,1000);
  uVar3 = fixedsin(piGp00001340[0xd]);
  uGp000018a8 = fixedmult(uVar3,1000);
  uGp000018a6 = 0;
  uVar3 = fixedcos(piGp00001340[0xf]);
  uGp000018ac = fixedmult(uVar3,1000);
  uVar3 = fixedsin(piGp00001340[0xf]);
  uGp000018b0 = fixedmult(uVar3,1000);
  uGp000018ae = 0;
  if (DAT_801131f8 == 1) {
    Draw_SetViewColor__Fiiii
              (0,(uint)*(byte *)(piGp00001340 + 0xc),(uint)*(byte *)((int)piGp00001340 + 0x31),
               (uint)*(byte *)((int)piGp00001340 + 0x32));
  }
  iVar8 = 0;
  Draw_SetViewColor__Fiiii
            (0,(uint)*(byte *)(piGp00001340 + 0xc),(uint)*(byte *)((int)piGp00001340 + 0x31),
             (uint)*(byte *)((int)piGp00001340 + 0x32));
  iVar9 = 0;
  do {
    if ((piGp00001340[1] & 0x80U) == 0) {
      if (((piGp00001340[1] & 2U) == 0) || (iVar5 = iVar8 << 0xb, 3 < iVar8)) {
        iVar5 = iVar8 << 0xc;
      }
      uVar3 = fixedcos(iVar5);
      uVar3 = fixedmult(uVar3,1000);
    }
    else {
      uVar3 = fixedcos(piGp00001340[iVar8 + 0x20]);
      uVar3 = fixedmult(uVar3,1000);
      iVar5 = piGp00001340[iVar8 + 0x20];
    }
    iVar6 = 0;
    uVar4 = fixedsin(iVar5);
    sVar1 = fixedmult(uVar4,1000);
    puVar7 = &gSkyMesh + iVar9 * 4;
    do {
      iVar5 = iVar6 * 0x1000;
      iVar6 = iVar6 + 1;
      iVar5 = (iVar5 - piGp00001340[0xd]) + 0x4000;
      uVar4 = fixedsin(iVar5);
      uVar2 = fixedmult(uVar4,uVar3);
      iVar9 = iVar9 + 1;
      *puVar7 = uVar2;
      puVar7[1] = *(short *)(piGp00001340 + 0x1a) + sVar1;
      uVar4 = fixedcos(iVar5);
      uVar2 = fixedmult(uVar4,uVar3);
      puVar7[2] = uVar2;
      puVar7 = puVar7 + 4;
    } while (iVar6 < 0x11);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 5);
  iVar8 = 0;
  if (*piGp00001340 == 1) {
    iVar9 = 0;
    do {
      iVar5 = 0;
      do {
        iVar6 = iVar5;
        if (iVar5 < 0) {
          iVar6 = iVar5 + 3;
        }
        iVar6 = iVar5 + (iVar6 >> 2) * -4;
        iVar5 = iVar5 + 1;
        (&gSkyPixmapIndex)[iVar9] = *(char *)((int)piGp00001340 + iVar6 + iVar8 * 4 + 0x6c) + '\b';
        iVar9 = iVar9 + 1;
      } while (iVar5 < 0x10);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
    if ((*piGp00001340 == 1) && ((piGp00001340[1] & 0x20U) == 0)) goto LAB_800cfd4c;
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

void Hrz_Init2DRing__Fv(void)
{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint local_50 [2];
  undefined4 local_48;
  char local_40;
  char local_3f;
  char local_3e;
  
  iVar15 = 0;
  do {
    iVar13 = iVar15 * 0x1000 + *(int *)(iGp0000133c + 4);
    uVar2 = fixedsin(iVar13);
    uVar1 = fixedmult(uVar2,32000);
    iVar14 = iVar15 * 8;
    puVar4 = (undefined2 *)(iVar14 + iGp00001344);
    *puVar4 = uVar1;
    puVar4[1] = 0;
    uVar2 = fixedcos(iVar13);
    uVar1 = fixedmult(uVar2,32000);
    iVar15 = iVar15 + 1;
    *(undefined2 *)(iVar14 + iGp00001344 + 4) = uVar1;
    uVar10 = 1;
  } while (iVar15 < 0x11);
  iVar15 = 0;
  puVar7 = local_50;
  piVar6 = &_gpPmx;
  while (iVar15 < 0x10) {
    iVar13 = *(int *)(&_gHorizonPixmap + ((uint)*(byte *)(iGp0000133c + iVar15 + 0x20) & 7) * 4);
    *piVar6 = iVar13;
    uVar5 = (uint)*(byte *)(iVar13 + 9) - (uint)*(byte *)(iVar13 + 5);
    *puVar7 = uVar5;
    if ((int)uVar10 < (int)uVar5) {
      uVar10 = uVar5;
    }
    puVar7 = puVar7 + 1;
    piVar6 = piVar6 + 1;
    iVar15 = iVar15 + 1;
  }
  iVar15 = 0;
  piVar6 = &gfxPmxHeightPercentage;
  puVar7 = local_50;
  do {
    uVar5 = *puVar7;
    if (uVar10 == 0) {
      trap(0x1c00);
    }
    if ((uVar10 == 0xffffffff) && (uVar5 << 0x10 == -0x80000000)) {
      trap(0x1800);
    }
    puVar7 = puVar7 + 1;
    iVar15 = iVar15 + 1;
    *piVar6 = (int)(uVar5 << 0x10) / (int)uVar10;
    piVar6 = piVar6 + 1;
  } while (iVar15 < 0x10);
  iVar15 = 0;
  puVar12 = (undefined4 *)&gHrzRingColor;
  iVar13 = 0;
  while (iVar14 = 0, iVar15 < 2) {
    local_50[0] = *(uint *)(iGp0000133c + iVar15 * 4 + 0x18);
    local_48 = *(uint *)(iGp0000133c + iVar15 * 4 + 0x10);
    iVar11 = iVar13;
    while( true ) {
      cVar9 = (char)iVar14;
      if (0xf < iVar14) break;
      if (8 < iVar14) {
        cVar9 = '\x10' - cVar9;
      }
      iVar3 = (local_50[0] & 0xff) - (local_48 & 0xff);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 7;
      }
      local_48._1_1_ = (byte)(local_48 >> 8);
      local_40 = (char)(iVar3 >> 3);
      iVar3 = (local_50[0] >> 8 & 0xff) - (uint)local_48._1_1_;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 7;
      }
      local_48._2_1_ = (byte)(local_48 >> 0x10);
      iVar8 = (local_50[0] >> 0x10 & 0xff) - (uint)local_48._2_1_;
      local_3f = (char)(iVar3 >> 3);
      if (iVar8 < 0) {
        iVar8 = iVar8 + 7;
      }
      local_3e = (char)(iVar8 >> 3);
      (&gHrzRingColor)[iVar11] = (char)local_48 + local_40 * cVar9;
      (&DAT_801207f5)[iVar11] = local_48._1_1_ + local_3f * cVar9;
      iVar14 = iVar14 + 1;
      (&DAT_801207f6)[iVar11] = local_48._2_1_ + local_3e * cVar9;
      iVar11 = iVar11 + 4;
    }
    puVar12[0x10] = *puVar12;
    puVar12 = puVar12 + 0x11;
    iVar13 = iVar13 + 0x44;
    iVar15 = iVar15 + 1;
  }
  Hrz_InitSky__Fv();
  _DAT_8013e384 = *(undefined4 *)(iGp00001340 + 8);
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

void Hrz_GetHorizonPixMap__FP12Draw_tPixMap(Draw_tPixMap *p)
{
  Draw_tPixMap **ppDVar1;
  Draw_tPixMap *rpmx;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0xb;
  ppDVar1 = (Draw_tPixMap **)&DAT_80120324;
  p = p + 0xb;
  do {
    *ppDVar1 = p;
    ppDVar1 = ppDVar1 + -1;
    iVar2 = iVar2 + -1;
    p = p + -1;
  } while (-1 < iVar2);
  iVar2 = 0;
  iVar4 = 0x30;
  rpmx = (Draw_tPixMap *)&gHorizonExtraSkyPixmaps;
  iVar3 = 0x20;
  do {
    ppDVar1 = (Draw_tPixMap **)(&_gHorizonPixmap + iVar3);
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 1;
    Texture_CloneUVPmx__FP12Draw_tPixMapiT0(*ppDVar1,0,rpmx);
    ppDVar1 = (Draw_tPixMap **)(&_gHorizonPixmap + iVar4);
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

void Hrz_InitHorizon__Fv(void)
{
  _Hrz_gTrackSpec = &DAT_801232a4;
  _Sky_gTrackSpec = &DAT_801232d4;
  _gRngCoordTop = reservememadr("gRngCoordTop",0x88,0);
  Hrz_Init2DRing__Fv();
  if (false) {
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

void Hrz_KillHorizon__Fv(void)
{
  purgememadr(_gRngCoordTop);
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

void Hrz_LightningAddFork__FScScSc(char direction,char column,char row)
{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char row_00;
  uint uVar9;
  
  uVar9 = (uint)(byte)row;
  uVar7 = (uint)(byte)column;
  uVar5 = (uint)(byte)direction;
  if (row == '\0') {
    uVar8 = 3;
  }
  else {
    uVar8 = 2;
    if (row < '\x03') {
      uVar8 = random();
      uVar8 = uVar8 - (((uint)((ulonglong)uVar8 * 0xaaaaaaab >> 0x20) & 0xfffffffe) + uVar8 / 3);
    }
  }
  uVar6 = (uint)DAT_80120920;
  DAT_80120920 = DAT_80120920 + 1;
  iVar2 = uVar6 * 6;
  (&gHrz_Lightning)[uVar6 * 3] = (short)column * 0xf;
  uVar8 = uVar8 & 0xff;
  (&DAT_801208be)[uVar6 * 3] = (short)row * 0xf;
  if (uVar8 == 1) {
    row_00 = (char)((uVar9 + 1) * 0x1000000 >> 0x18);
    Hrz_LightningAddFork__FScScSc(-1,(char)((uVar7 - 1) * 0x1000000 >> 0x18),row_00);
    Hrz_LightningAddFork__FScScSc('\x01',(char)((uVar7 + 1) * 0x1000000 >> 0x18),row_00);
    bVar1 = 6;
  }
  else {
    if (uVar8 < 2) {
      if (uVar8 != 0) {
        iVar3 = uVar5 << 0x18;
        goto LAB_800d0390;
      }
      Hrz_LightningAddFork__FScScSc
                (direction,(char)((uVar7 + uVar5) * 0x1000000 >> 0x18),
                 (char)((uVar9 + 1) * 0x1000000 >> 0x18));
      lVar4 = random();
      bVar1 = ((byte)lVar4 & 1) + 2;
    }
    else {
      if (uVar8 == 2) {
        lVar4 = random();
        bVar1 = ((byte)lVar4 & 1) + 4;
      }
      else {
        iVar3 = uVar5 << 0x18;
        if (uVar8 != 3) goto LAB_800d0390;
        uVar5 = random();
        uVar5 = (uVar5 & 1) * -2 + 1;
        Hrz_LightningAddFork__FScScSc
                  ((char)(uVar5 * 0x1000000 >> 0x18),(char)((uVar7 + uVar5) * 0x1000000 >> 0x18),
                   (char)((uVar9 + 1) * 0x1000000 >> 0x18));
        lVar4 = random();
        bVar1 = (byte)lVar4 & 1;
      }
    }
  }
  (&DAT_801208c0)[iVar2] = bVar1;
  iVar3 = uVar5 << 0x18;
LAB_800d0390:
  if (iVar3 < 0) {
    (&DAT_801208c0)[iVar2] = (&DAT_801208c0)[iVar2] + '\b';
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

void Hrz_CalculateLightning__Fv(void)
{
  DAT_80120920 = 0;
  DAT_8012091c = 200;
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

void Hrz_TextureQuad__FP7DVECTORccP11Draw_DCache(DVECTOR *pt,char type,char bright,Draw_DCache *sd)
{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar2 = _DAT_1f800004;
  iVar1 = _DAT_1f800000;
  *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *(uint *)(sd->otz * 4 + _DAT_1f800000) & 0xffffff;
  puVar5 = (uint *)(sd->otz * 4 + iVar1);
  uVar6 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 10;
  *puVar5 = *puVar5 & 0xff000000 | uVar6;
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
  puVar5 = (uint *)(&_gLightningPixmap)[(uint)(byte)type];
  uVar3 = puVar5[1];
  uVar4 = puVar5[2];
  uVar6 = puVar5[3];
  puVar2[3] = *puVar5;
  puVar2[5] = uVar3;
  puVar2[7] = uVar4;
  puVar2[9] = uVar6;
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
  Hrz_gLightningPosInSky =
       (short)(iVar2 >> 2) + (short)uVar1 + (short)(uVar1 / 8000) * -8000 + -4000;
  uVar1 = random();
  DAT_8013d896 = (short)(iVar3 >> 2) + 8000 + (short)uVar1 + (short)(uVar1 / 3000) * -3000;
  uVar1 = random();
  DAT_8013d898 = (short)(iVar4 >> 2) + (short)uVar1 + (short)(uVar1 / 8000) * -8000 + -4000;
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

void Hrz_BuildForkLightning__FP11Draw_DCache(Draw_DCache *sd)
{
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar1;
  byte bVar2;
  DVECTOR local_30 [2];
  undefined4 local_28;
  coorddef cStack32;
  
  if (0 < DAT_8012091c) {
    sd->otz = Draw_gViewOtSize + -2;
    memset(&cStack32,0,0xc);
    HrzSetPsxTranslation__FP8coorddef(&cStack32);
    setCopReg(2,in_zero,_Hrz_gLightningPosInSky);
    setCopReg(2,in_at,_DAT_8013d898);
    copFunction(2,0x180001);
    local_28 = getCopReg(2,0xe);
    bVar2 = 0;
    if (DAT_80120920 != 0) {
      do {
        uVar1 = (uint)bVar2;
        bVar2 = bVar2 + 1;
        local_30[0].vx = (&gHrz_Lightning)[uVar1 * 3] + (short)local_28;
        local_30[0].vy = (&DAT_801208be)[uVar1 * 3] + local_28._2_2_;
        Hrz_TextureQuad__FP7DVECTORccP11Draw_DCache
                  (local_30,(&DAT_801208c0)[uVar1 * 6],(char)DAT_8012091c,sd);
      } while (bVar2 < DAT_80120920);
    }
    DAT_8012091c = DAT_8012091c + -0x10;
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

void Hrz_LightningFlicker__Fi(int on)
{
  undefined4 *puVar1;
  int iVar2;
  
  if (on == 0) {
    *(undefined4 *)(_Sky_gTrackSpec + 8) = _DAT_8013e384;
    Hrz_InitSkyColor__Fv();
  }
  else {
    if (on == 1) {
      if (true) {
        iVar2 = 0x54;
        puVar1 = &DAT_80120770;
        *(undefined4 *)(_Sky_gTrackSpec + 8) = 0xffc0c0;
        do {
          *puVar1 = 0xffc0c0;
          iVar2 = iVar2 + -1;
          puVar1 = puVar1 + -1;
        } while (-1 < iVar2);
      }
    }
    else {
      if (true) {
        iVar2 = 0x54;
        puVar1 = &DAT_80120770;
        *(undefined4 *)(_Sky_gTrackSpec + 8) = 0xc02828;
        do {
          *puVar1 = 0xc02828;
          iVar2 = iVar2 + -1;
          puVar1 = puVar1 + -1;
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

void Hrz_SetDitheringPrim__Fii(int dither,int otz)
{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar1 = _DAT_1f800004;
  puVar2 = (uint *)(otz * 4 + _DAT_1f800000);
  *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar2 & 0xffffff;
  uVar3 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 3;
  *puVar2 = *puVar2 & 0xff000000 | uVar3;
  SetDrawMode(puVar1,0,dither,0x100,0);
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

void Hrz_BuildSky__Fv(void)
{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  short sVar15;
  coorddef cStack56;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  
  sVar15 = 0x78;
  if (DAT_801131f8 == 1) {
    sVar15 = 0x3c;
  }
  if ((piGp00001340[1] & 1U) == 0) {
    memset(&cStack56,0,0xc);
    HrzSetPsxTranslation__FP8coorddef(&cStack56);
    puVar8 = (undefined4 *)&gSkyMesh;
    puVar7 = (undefined4 *)0x1f800164;
    iVar9 = 0x54;
    puVar5 = (undefined4 *)&DAT_1f800010;
    do {
      setCopReg(2,in_zero,*puVar8);
      setCopReg(2,in_at,puVar8[1]);
      copFunction(2,0x180001);
      puVar8 = puVar8 + 2;
      puVar7 = puVar7 + 1;
      local_28 = getCopReg(2,0x19);
      local_24 = getCopReg(2,0x1a);
      local_20 = getCopReg(2,0x1b);
      uVar1 = getCopReg(2,0xe);
      puVar5[1] = uVar1;
      *(short *)((int)puVar5 + 6) = (short)(local_24 >> 2) + sVar15;
      uVar1 = getCopReg(2,0x13);
      *puVar7 = uVar1;
      iVar9 = iVar9 + -1;
      puVar5 = puVar5 + 1;
    } while (iVar9 != -1);
  }
  else {
    memset(&cStack56,0,0xc);
    HrzSetPsxTranslation__FP8coorddef(&cStack56);
    puVar8 = (undefined4 *)&gSkyMesh;
    puVar5 = (undefined4 *)0x1f80015c;
    puVar7 = (undefined4 *)&DAT_1f800008;
    iVar9 = 0x55;
    do {
      iVar10 = iVar9;
      setCopReg(2,in_zero,*puVar8);
      setCopReg(2,in_at,puVar8[1]);
      setCopReg(2,puVar8 + 4,puVar8[2]);
      setCopReg(2,puVar8 + 2,puVar8[3]);
      setCopReg(2,puVar5,puVar8[4]);
      setCopReg(2,puVar7,puVar8[5]);
      copFunction(2,0x280030);
      puVar8 = puVar8 + 6;
      iVar9 = iVar10 + -3;
      puVar13 = puVar7 + 5;
      uVar1 = getCopReg(2,0xc);
      puVar7[3] = uVar1;
      uVar1 = getCopReg(2,0xd);
      puVar7[4] = uVar1;
      uVar1 = getCopReg(2,0xe);
      *puVar13 = uVar1;
      puVar4 = puVar5 + 5;
      uVar1 = getCopReg(2,0x11);
      puVar5[3] = uVar1;
      uVar1 = getCopReg(2,0x12);
      puVar5[4] = uVar1;
      uVar1 = getCopReg(2,0x13);
      *puVar4 = uVar1;
      puVar5 = puVar5 + 3;
      puVar7 = puVar7 + 3;
    } while (2 < iVar9);
    iVar10 = iVar10 + -4;
    while (iVar10 != -1) {
      setCopReg(2,in_zero,*puVar8);
      setCopReg(2,in_at,puVar8[1]);
      copFunction(2,0x180001);
      puVar8 = puVar8 + 2;
      puVar13 = puVar13 + 1;
      puVar4 = puVar4 + 1;
      uVar1 = getCopReg(2,0xe);
      *puVar13 = uVar1;
      uVar1 = getCopReg(2,0x13);
      *puVar4 = uVar1;
      iVar10 = iVar10 + -1;
    }
  }
  if ((piGp00001340[1] & 0x40U) != 0) {
    Hrz_SetDitheringPrim__Fii(0,Draw_gViewOtSize + -2);
  }
  uVar1 = _DAT_1f800094;
  if (false) {
    Flare_Sun__FP7SVECTORP15Draw_FlareCache
              ((SVECTOR *)&sunPosInSky,(Draw_FlareCache *)&DAT_1f800000);
  }
  iVar9 = 0;
  pbVar14 = &gSkyPixmapIndex;
  _DAT_1f800094 = uVar1;
  do {
    puVar2 = _DAT_1f800004;
    if (0x3f < iVar9) {
      if ((piGp00001340[1] & 0x40U) != 0) {
        Hrz_SetDitheringPrim__Fii(1,Draw_gViewOtSize + -2);
      }
      return;
    }
    iVar10 = iVar9 * 0x11;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xf;
    }
    iVar10 = iVar10 >> 4;
    iVar3 = iVar10 * 4;
    if ((((*(int *)(&DAT_1f8001ac + iVar3) != 0) || (*(int *)(&DAT_1f8001b0 + iVar3) != 0)) ||
        (*(int *)(&DAT_1f80016c + iVar3) != 0)) || (*(int *)(&DAT_1f800168 + iVar3) != 0)) {
      iVar3 = iVar10 * 4;
      if (((*(short *)(&DAT_1f800058 + iVar3) <= _DAT_1f800010) ||
          (*(short *)(&DAT_1f80005c + iVar3) <= _DAT_1f800010)) ||
         ((*(short *)(&DAT_1f800018 + iVar3) <= _DAT_1f800010 ||
          (*(short *)(&DAT_1f800014 + iVar3) <= _DAT_1f800010)))) {
        iVar3 = iVar10 * 4;
        if ((((-1 < *(short *)(&DAT_1f800058 + iVar3)) || (-1 < *(short *)(&DAT_1f80005c + iVar3)))
            || ((-1 < *(short *)(&DAT_1f800018 + iVar3) || (-1 < *(short *)(&DAT_1f800014 + iVar3)))
               )) && (((((iVar3 = iVar10 * 4, *(short *)(&DAT_1f80005a + iVar3) <= _DAT_1f800012 ||
                         (*(short *)(&DAT_1f80005e + iVar3) <= _DAT_1f800012)) ||
                        (*(short *)(&DAT_1f80001a + iVar3) <= _DAT_1f800012)) ||
                       (*(short *)(&DAT_1f800016 + iVar3) <= _DAT_1f800012)) &&
                      (((iVar3 = iVar10 * 4, -1 < *(short *)(&DAT_1f80005a + iVar3) ||
                        (-1 < *(short *)(&DAT_1f80005e + iVar3))) ||
                       ((-1 < *(short *)(&DAT_1f80001a + iVar3) ||
                        (-1 < (int)((uint)*(ushort *)(&DAT_1f800016 + iVar3) << 0x10))))))))) {
          if (*piGp00001340 == 1) {
            if ((piGp00001340[1] & 0x20U) != 0) {
              iVar3 = Draw_gViewOtSize * 4 + _DAT_1f800000;
              puVar11 = *(uint **)(&_gHorizonPixmap + (uint)*pbVar14 * 4);
              *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *(uint *)(iVar3 + -8) & 0xffffff;
              *(uint *)(iVar3 + -8) =
                   *(uint *)(iVar3 + -8) & 0xff000000 | (uint)_DAT_1f800004 & 0xffffff;
              iVar3 = iVar10 * 4;
              puVar12 = _DAT_1f800004 + 1;
              _DAT_1f800004 = _DAT_1f800004 + 0xd;
              *puVar12 = (&DAT_80120664)[iVar10];
              puVar2[4] = (&DAT_80120668)[iVar10];
              puVar2[7] = *(uint *)(&gSkyColor + iVar3);
              uVar6 = (&DAT_80120624)[iVar10];
              *(undefined *)((int)puVar2 + 3) = 0xc;
              *(undefined *)((int)puVar2 + 7) = 0x3c;
              puVar2[10] = uVar6;
              puVar2[3] = *puVar11;
              puVar2[6] = puVar11[1];
              puVar2[9] = puVar11[2];
              puVar2[0xc] = puVar11[3];
              puVar2[2] = *(uint *)(&DAT_1f800058 + iVar3);
              puVar2[5] = *(uint *)(&DAT_1f80005c + iVar3);
              puVar2[8] = *(uint *)(&DAT_1f800014 + iVar3);
              puVar2[0xb] = *(uint *)(&DAT_1f800018 + iVar3);
              goto LAB_800d1108;
            }
            iVar3 = Draw_gViewOtSize * 4 + _DAT_1f800000;
            puVar12 = *(uint **)(&_gHorizonPixmap + (uint)*pbVar14 * 4);
            *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *(uint *)(iVar3 + -8) & 0xffffff;
            uVar6 = (uint)_DAT_1f800004 & 0xffffff;
            _DAT_1f800004 = _DAT_1f800004 + 10;
            *(uint *)(iVar3 + -8) = *(uint *)(iVar3 + -8) & 0xff000000 | uVar6;
            uVar6 = piGp00001340[2];
            *(undefined *)((int)puVar2 + 3) = 9;
            puVar2[1] = uVar6;
            *(undefined *)((int)puVar2 + 7) = 0x2c;
            puVar2[3] = *puVar12;
            puVar2[5] = puVar12[1];
            puVar2[7] = puVar12[2];
            puVar2[9] = puVar12[3];
          }
          else {
            iVar3 = Draw_gViewOtSize * 4 + _DAT_1f800000;
            *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *(uint *)(iVar3 + -8) & 0xffffff;
            *(uint *)(iVar3 + -8) =
                 *(uint *)(iVar3 + -8) & 0xff000000 | (uint)_DAT_1f800004 & 0xffffff;
            puVar12 = _DAT_1f800004 + 1;
            _DAT_1f800004 = _DAT_1f800004 + 9;
            *puVar12 = (&DAT_80120664)[iVar10];
            puVar2[3] = (&DAT_80120668)[iVar10];
            puVar2[5] = *(uint *)(&gSkyColor + iVar10 * 4);
            uVar6 = (&DAT_80120624)[iVar10];
            *(undefined *)((int)puVar2 + 3) = 8;
            *(undefined *)((int)puVar2 + 7) = 0x38;
            puVar2[7] = uVar6;
          }
          iVar10 = iVar10 * 4;
          puVar2[2] = *(uint *)(&DAT_1f800058 + iVar10);
          puVar2[4] = *(uint *)(&DAT_1f80005c + iVar10);
          puVar2[6] = *(uint *)(&DAT_1f800014 + iVar10);
          puVar2[8] = *(uint *)(&DAT_1f800018 + iVar10);
        }
      }
    }
LAB_800d1108:
    pbVar14 = pbVar14 + 1;
    iVar9 = iVar9 + 1;
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

void Sky_RenderStars__FP13Draw_SkyCachei(Draw_SkyCache *sd,int otz)
{
  uint *puVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  coorddef cStack72;
  uint local_38;
  
  puVar6 = puGp0000132c;
  iVar7 = 0x78;
  if (DAT_801131f8 == 1) {
    iVar7 = 0x3c;
  }
  memset(&cStack72,0,0xc);
  HrzSetPsxTranslation__FP8coorddef(&cStack72);
  iVar5 = 0;
  if (0 < *(int *)(iGp00001340 + 0x44)) {
    do {
      puVar1 = _DAT_1f800004;
      setCopReg(2,in_zero,*puVar6);
      setCopReg(2,in_at,puVar6[1]);
      copFunction(2,0x180001);
      puVar6 = puVar6 + 2;
      iVar3 = getCopReg(2,0x13);
      if (0 < iVar3) {
        uVar2 = getCopReg(2,0xe);
        getCopReg(2,0x19);
        iVar3 = getCopReg(2,0x1a);
        getCopReg(2,0x1b);
        local_38._0_2_ = (short)uVar2;
        iVar3 = (iVar3 >> 2) + iVar7;
        local_38 = uVar2 & 0xffff | iVar3 * 0x10000;
        if (((((short)local_38 <= (sd->head).clipW) && (-1 < (short)local_38)) &&
            (iVar3 = iVar3 * 0x10000 >> 0x10, iVar3 <= (int)(sd->head).clipH)) && (-1 < iVar3)) {
          puVar4 = (uint *)(otz * 4 + _DAT_1f800000);
          *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar4 & 0xffffff;
          uVar2 = (uint)_DAT_1f800004 & 0xffffff;
          _DAT_1f800004 = _DAT_1f800004 + 3;
          *puVar4 = *puVar4 & 0xff000000 | uVar2;
          uVar2 = *(uint *)(iVar5 * 4 + iGp00001330);
          *(undefined *)((int)puVar1 + 3) = 2;
          puVar1[1] = uVar2;
          *(undefined *)((int)puVar1 + 7) = 0x68;
          puVar1[2] = local_38;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iGp00001340 + 0x44));
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
  int local_34;
  int local_30;
  
  local_34 = 0x107ae;
  memset(&cStack104,0,0xc);
  local_30 = 0;
  if (false) {
    local_30 = 0xbe;
    SetGeomScreen(700);
  }
  HrzSetPsxMatrix__FP10matrixtdef(&(Vi->cview).mrotationInv);
  HrzSetPsxTranslation__FP8coorddef(&cStack104);
  Hrz_RotProj16__FiP7SVECTORPiP7DVECTOR
            (0x11,pSGp00001344,(int *)&DAT_1f800124,(DVECTOR *)&DAT_1f800058);
  iVar10 = 0;
  iVar8 = 0;
  piVar5 = (int *)&DAT_1f800124;
  iVar9 = 0;
  do {
    if (iVar8 < *piVar5) {
      iVar8 = *piVar5;
      iVar10 = iVar9;
    }
    iVar9 = iVar9 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar9 < 0x10);
  pSVar6 = pSGp00001344 + iVar10;
  local_58 = CONCAT22(*(short *)(iGp0000133c + 8) + *(short *)(iGp0000133c + 0xc),pSVar6->vx);
  local_54 = CONCAT22(local_54._2_2_,pSVar6->vz);
  local_50 = CONCAT22(*(undefined2 *)(iGp0000133c + 8),pSVar6->vx);
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
  sVar2 = *(short *)(&DAT_1f800058 + iVar10 * 4);
  local_48.vy = (short)(local_48 >> 0x10);
  sVar3 = *(short *)(&DAT_1f80005a + iVar10 * 4);
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
  sVar2 = *(short *)(&DAT_1f800058 + iVar10 * 4);
  local_44._2_2_ = (short)((uint)local_44 >> 0x10);
  sVar3 = *(short *)(&DAT_1f80005a + iVar10 * 4);
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
             &gfxPmxHeightPercentage,0x10,1);
  Horizon_InterpolateLineSCoords__FP7DVECTORN20Piii
            ((DVECTOR *)&DAT_1f8000e0,(DVECTOR *)&DAT_1f80005c,(DVECTOR *)&DAT_1f800018,
             &gfxPmxHeightPercentage,0x10,1);
  iVar8 = 0;
  if (false) {
    iVar9 = 0x1f800000;
    iVar10 = 0;
    iVar12 = 4;
    while (iVar8 < 0x10) {
      if ((15999 < *(int *)(iVar9 + 0x124)) || (15999 < *(int *)(&DAT_1f800124 + iVar12))) {
        local_58 = *(int *)(iVar9 + 0x9c);
        local_54 = *(int *)(iVar9 + 0xe0);
        local_50 = *(int *)(&DAT_1f800058 + iVar12);
        local_4c = *(undefined4 *)(iVar9 + 0x58);
        if (((((-1 < (short)local_58) ||
              (((-1 < (short)local_54 || (-1 < (short)local_50)) || (-1 < (short)local_4c)))) &&
             (((((short)local_58 <= _DAT_1f800010 || ((short)local_54 <= _DAT_1f800010)) ||
               ((short)local_50 <= _DAT_1f800010)) || ((short)local_4c <= _DAT_1f800010)))) &&
            (((local_58._2_2_ = (short)((uint)local_58 >> 0x10),
              local_54._2_2_ = (short)((uint)local_54 >> 0x10),
              local_50._2_2_ = (short)((uint)local_50 >> 0x10),
              local_4c._2_2_ = (short)((uint)local_4c >> 0x10), -1 < local_58._2_2_ ||
              (-1 < local_54._2_2_)) || ((-1 < local_50._2_2_ || (-1 < local_4c._2_2_)))))) &&
           ((((local_58._2_2_ <= _DAT_1f800012 || (local_54._2_2_ <= _DAT_1f800012)) ||
             (local_50._2_2_ <= _DAT_1f800012)) || (local_4c._2_2_ <= _DAT_1f800012)))) {
          Horizon_InterpolateLineSCoords__FP7DVECTORN20Piii
                    (&local_48,(DVECTOR *)(&DAT_1f80009c + iVar10),
                     (DVECTOR *)(&DAT_1f8000e0 + iVar10),&local_34,1,0);
          puVar4 = _DAT_1f800004;
          puVar11 = *(uint **)((int)&_gpPmx + iVar10);
          if (*(char *)(iGp0000133c + iVar8 + 0x20) != '\x10') {
            iVar7 = Draw_gViewOtSize * 4 + _DAT_1f800000;
            *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *(uint *)(iVar7 + -8) & 0xffffff;
            *(uint *)(iVar7 + -8) =
                 *(uint *)(iVar7 + -8) & 0xff000000 | (uint)_DAT_1f800004 & 0xffffff;
            puVar1 = _DAT_1f800004 + 1;
            _DAT_1f800004 = _DAT_1f800004 + 0xd;
            *puVar1 = *(uint *)((int)&DAT_80120838 + iVar10);
            puVar4[4] = *(uint *)((int)&DAT_8012083c + iVar10);
            puVar4[7] = *(uint *)(&gHrzRingColor + iVar10);
            puVar4[10] = *(uint *)((int)&DAT_801207f8 + iVar10);
            SetPolyGT4(puVar4);
            puVar4[3] = *puVar11;
            puVar4[6] = puVar11[1];
            puVar4[9] = puVar11[2];
            puVar4[0xc] = puVar11[3];
            if (*(byte *)(iGp0000133c + iVar8 + 0x20) < 8) {
              puVar4[2] = *(uint *)(&DAT_1f80009c + iVar10);
              puVar4[5] = local_48;
              puVar4[8] = *(uint *)(&DAT_1f800058 + iVar10);
              puVar4[0xb] = *(uint *)(&DAT_1f80005c + iVar10);
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
  if ((false) && (false)) {
    Hrz_BuildForkLightning__FP11Draw_DCache((Draw_DCache *)&DAT_1f800000);
  }
  if (false) {
    memset((coorddef *)&local_58,0,0xc);
    HrzSetPsxTranslation__FP8coorddef((coorddef *)&local_58);
    Flare_Moon__FP7SVECTORP15Draw_FlareCache
              ((SVECTOR *)&moonPosInSky,(Draw_FlareCache *)&DAT_1f800000);
  }
  if (false) {
    Sky_RenderStars__FP13Draw_SkyCachei((Draw_SkyCache *)&DAT_1f800000,Draw_gViewOtSize + -2);
  }
  if (false) {
    Hrz_BuildSky__Fv();
  }
  if (local_30 != 0) {
    SetGeomScreen(local_30);
  }
  return;


}





