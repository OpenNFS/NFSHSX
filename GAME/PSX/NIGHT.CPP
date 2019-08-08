#include "NFS4.H"
#include "NIGHT.H"

// decompiled code
// original method signature: 
// int /*$ra*/ Night_FindClosestColor__FG7CVECTORPi(struct CVECTOR colorMatch /*stack 0*/, int *bestIndex /*$a1*/)
 // line 134, offset 0x800db318
	/* begin block 1 */
		// Start line: 135
		// Start offset: 0x800DB318
		// Variables:
	// 		int bestDiff; // $t0
	// 		int diffR; // $v0
	// 		int diffG; // $v0
	// 		int diffB; // $v0
	// 		int colorMatchr; // $t7
	// 		int colorMatchg; // $t6
	// 		int colorMatchb; // $t5
	// 		int searchColorr; // $t3
	// 		int searchColorg; // $t4
	// 		int searchColorb; // $t2
	// 		int diffSum; // $a0
	// 		int maxLights; // $v1

		/* begin block 1.1 */
			// Start line: 135
			// Start offset: 0x800DB318
			// Variables:
		// 		int search; // $a3
		/* end block 1.1 */
		// End offset: 0x800DB3D8
		// End Line: 175
	/* end block 1 */
	// End offset: 0x800DB3D8
	// End Line: 176

int Night_FindClosestColor__FG7CVECTORPi(CVECTOR colorMatch,int *bestIndex)
{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = 1;
  bVar1 = *pbGp00001548;
  bVar2 = pbGp00001548[1];
  bVar3 = pbGp00001548[2];
  iVar9 = 0x2fa03;
  if (1 < iGp00001514 + 1) {
    iVar10 = 3;
    do {
      iVar4 = (colorMatch & 0xff) - (uint)bVar1;
      iVar5 = (colorMatch >> 8 & 0xff) - (uint)bVar2;
      iVar6 = (colorMatch >> 0x10 & 0xff) - (uint)bVar3;
      pbVar7 = pbGp00001548 + iVar10;
      bVar1 = *pbVar7;
      bVar2 = pbVar7[1];
      bVar3 = pbVar7[2];
      iVar4 = iVar4 * iVar4 + iVar5 * iVar5 + iVar6 * iVar6;
      if ((iVar4 < iVar9) && (*bestIndex = iVar8 + -1, iVar9 = iVar4, iVar4 < 0x40)) {
        return iVar4;
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 3;
    } while (iVar8 < iGp00001514 + 1);
  }
  return iVar9;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_CreateNightTableElement__FiliPUc(int colorIndex /*$s0*/, long colorH /*stack 4*/, int bright /*$a2*/, unsigned char *colorval /*$s1*/)
 // line 181, offset 0x800db3e0
	/* begin block 1 */
		// Start line: 182
		// Start offset: 0x800DB3E0
		// Variables:
	// 		int sourceR; // $a0
	// 		int sourceG; // $a1
	// 		int sourceB; // $v1
	// 		int chr; // $v1
	// 		int chg; // $t0
	// 		int chb; // $t1
	// 		struct CVECTOR newColor; // stack offset -32
	// 		int b15; // $a3
	// 		int newR; // $a2
	// 		int newG; // $a1
	// 		int newB; // $a0
	// 		int bestIndex; // stack offset -24
	/* end block 1 */
	// End offset: 0x800DB590
	// End Line: 232

void Night_CreateNightTableElement__FiliPUc(int colorIndex,long colorH,int bright,uchar *colorval)
{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte local_1d;
  uchar local_18 [8];
  
  bright = bright * 0x111;
  pbVar1 = (byte *)(colorIndex * 3 + iGp00001548);
  _bVar4 = (uint)*pbVar1 + ((int)((colorH & 0xffU) * bright) >> 0xc);
  bVar4 = (byte)_bVar4;
  if (0xff < _bVar4) {
    bVar4 = 0xff;
  }
  uVar3 = (uint)pbVar1[1] + ((int)(((uint)colorH >> 8 & 0xff) * bright) >> 0xc);
  if (0xff < (int)uVar3) {
    uVar3 = 0xff;
  }
  uVar2 = (uint)pbVar1[2] + ((int)(((uint)colorH >> 0x10 & 0xff) * bright) >> 0xc);
  if (0xff < (int)uVar2) {
    uVar2 = 0xff;
  }
  _bVar4 = Night_FindClosestColor__FG7CVECTORPi
                     ((CVECTOR)((uint)(bVar4 & 0xf8) | (uVar3 & 0xf8) << 8 | (uVar2 & 0xf8) << 0x10
                               | (uint)local_1d << 0x18),(int *)local_18);
  if (((_bVar4 < 0x201) || (3 < colorIndex)) || (0xff < iGp00001514)) {
    *colorval = local_18[0];
  }
  else {
    *(byte *)(iGp00001514 * 3 + iGp00001548) = bVar4 & 0xf8;
    *(byte *)(iGp00001514 * 3 + iGp00001548 + 1) = (byte)uVar3 & 0xf8;
    *(byte *)(iGp00001514 * 3 + iGp00001548 + 2) = (byte)uVar2 & 0xf8;
    *colorval = (uchar)iGp00001514;
    iGp00001514 = iGp00001514 + 1;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_CreateNightTable__FiliPA256_A16_Uc(int colorIndex /*$a0*/, long colorH /*$a1*/, int bright /*$a2*/, unsigned char *tbl[256][16] /*$a3*/)
 // line 236, offset 0x800db5a4
	/* begin block 1 */
		// Start line: 237
		// Start offset: 0x800DB5A4
	/* end block 1 */
	// End offset: 0x800DB5A4
	// End Line: 237

void Night_CreateNightTable__FiliPA256_A16_Uc(int colorIndex,long colorH,int bright,undefined tbl)
{
  undefined3 in_register_0000001d;
  
  Night_CreateNightTableElement__FiliPUc
            (colorIndex,colorH,bright,
             (uchar *)(CONCAT31(in_register_0000001d,tbl) + colorIndex * 0x10 + bright));
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_GenerateNextLightningEvent__Fv()
 // line 347, offset 0x800db5cc
	/* begin block 1 */
		// Start line: 348
		// Start offset: 0x800DB5CC
	/* end block 1 */
	// End offset: 0x800DB5CC
	// End Line: 348

void Night_GenerateNextLightningEvent__Fv(void)
{
  uint uVar1;
  long lVar2;
  
  uVar1 = random();
  iGp0000151c = (uVar1 & 0x7ff) + 0x1f;
  uVar1 = random();
  iGp00001520 = iGp0000151c + (uVar1 & 0xf) + 0xf;
  iGp00001524 = iGp0000151c;
  uGp00001528 = random();
  uGp00001528 = uGp00001528 & 0xffff;
  lVar2 = random();
  bGp0000152c = (byte)lVar2 & 1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_PauseLightningEffect__Fi(int player /*$a0*/)
 // line 381, offset 0x800db640
	/* begin block 1 */
		// Start line: 382
		// Start offset: 0x800DB640
		// Variables:
	// 		int track; // $a0
	// 		int pause_flag; // $v1
	// 		int slice; // $a1

		/* begin block 1.1 */
			// Start line: 384
			// Start offset: 0x800DB640
			// Variables:
		// 		int startp; // $v0
		// 		int endp; // $a0
		/* end block 1.1 */
		// End offset: 0x800DB68C
		// End Line: 406
	/* end block 1 */
	// End offset: 0x800DB6BC
	// End Line: 417

void Night_PauseLightningEffect__Fi(int player)
{
  if (Weather_gType == 0) {
    uGp0000151c = 0;
    uGp00001520 = 0;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_DoLightningEffect__FP13DRender_tView(struct DRender_tView *Vi /*$s0*/)
 // line 423, offset 0x800db6c4
	/* begin block 1 */
		// Start line: 424
		// Start offset: 0x800DB6C4
		// Variables:
	// 		static char lightningInit; // offset 0x1e
	/* end block 1 */
	// End offset: 0x800DB838
	// End Line: 468

void Night_DoLightningEffect__FP13DRender_tView(DRender_tView *Vi)
{
  uint uVar1;
  
  if (iGp00001518 != 0) {
    AudioCmn_PlayThunder__Fii(iGp00001530,iGp00001528);
    Hrz_LightningFlicker__Fi(0);
    iGp00001518 = 0;
  }
  if (((iGp0000151c < 0) && (0 < iGp00001520)) && ((int)uGp00001524 < 0)) {
    uGp000014f8 = random();
    uGp000014f8 = uGp000014f8 & 1;
    Hrz_LightningFlicker__Fi(1);
    uVar1 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos
                      ((BWorldSm_Pos *)(&DAT_8010f338 + Vi->player * 0x44));
    bGp00001494 = uVar1 == 0;
    iGp00001518 = 1;
    uGp00001524 = random();
    uGp00001524 = uGp00001524 & 3;
    uVar1 = random();
    iGp00001530 = (uGp000014f8 + 1) * (uVar1 & 0x1f) + 0x40;
    if (cGp000014b2 != '\0') {
      if (cGp0000152c != '\0') {
        Hrz_SetLightingPosInSky__FP13DRender_tView(Vi);
      }
      cGp000014b2 = '\0';
    }
  }
  if (iGp00001520 < 0) {
    Night_GenerateNextLightningEvent__Fv();
    Hrz_CalculateLightning__Fv();
    cGp000014b2 = '\x01';
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_SetCopColor__FP18GameSetup_tCarData(struct GameSetup_tCarData *carinfo /*$a0*/)
 // line 473, offset 0x800db848
	/* begin block 1 */
		// Start line: 474
		// Start offset: 0x800DB848
		// Variables:
	// 		int cartype; // $v0
	// 		int country; // $a1
	// 		int carTable; // $a0
	// 		unsigned char *copColors[2][256][8]; // stack offset -16
	// 		int col1; // $v0
	// 		int col2; // $v0
	/* end block 1 */
	// End offset: 0x800DB848
	// End Line: 474

void Night_SetCopColor__FP18GameSetup_tCarData(GameSetup_tCarData *carinfo)
{
  int iVar1;
  undefined4 local_10 [4];
  
  iVar1 = ((uint)(byte)(&DAT_8013d9e2)[carinfo->carType] * 5 + carinfo->Country) * 2;
  uGp00001500 = local_10[(uint)(byte)(&Night_gCopCountryLightTbl)[iVar1]];
  uGp00001504 = local_10[(uint)(byte)(&DAT_80120d19)[iVar1]];
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_InitPlayerHeadLightColor__Fi(int player /*$s0*/)
 // line 488, offset 0x800db8dc
	/* begin block 1 */
		// Start line: 489
		// Start offset: 0x800DB8DC
	/* end block 1 */
	// End offset: 0x800DB90C
	// End Line: 497

void Night_InitPlayerHeadLightColor__Fi(int player)
{
  if (iGp00001498 == 0) {
    iGp00001498 = reservememadr("plnight",0x1000,0);
  }
  *(undefined4 *)(&Night_gPlayerHeadLightColor + player * 4) = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_SetPlayerHeadLightColor__Fiii(int player /*$a0*/, int colorIndex /*$a1*/, int bright /*$a2*/)
 // line 501, offset 0x800db938
	/* begin block 1 */
		// Start line: 502
		// Start offset: 0x800DB938
	/* end block 1 */
	// End offset: 0x800DB938
	// End Line: 502

void Night_SetPlayerHeadLightColor__Fiii(int player,int colorIndex,int bright)
{
  Night_CreateNightTable__FiliPA256_A16_Uc
            (colorIndex,*(long *)(&Night_gPlayerHeadLightColor + player * 4),bright,
             (char)uGp00001498);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_InitCopLightColors__Fv()
 // line 507, offset 0x800db974
	/* begin block 1 */
		// Start line: 508
		// Start offset: 0x800DB974
	/* end block 1 */
	// End offset: 0x800DB9C0
	// End Line: 516

void Night_InitCopLightColors__Fv(void)
{
  if (iGp0000149c == 0) {
    iGp0000149c = reservememadr("CopRed",0x800,0);
  }
  if (iGp000014a0 == 0) {
    iGp000014a0 = reservememadr("CopBlue",0x800,0);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_SetCopLightColors__Fii(int colorIndex /*$s0*/, int brighten /*$s1*/)
 // line 519, offset 0x800db9d0
	/* begin block 1 */
		// Start line: 520
		// Start offset: 0x800DB9D0
	/* end block 1 */
	// End offset: 0x800DB9D0
	// End Line: 520

void Night_SetCopLightColors__Fii(int colorIndex,int brighten)
{
  Night_CreateNightTableElement__FiliPUc
            (colorIndex,0x602020,brighten,(uchar *)(iGp000014a0 + colorIndex * 8 + (brighten >> 1)))
  ;
  Night_CreateNightTableElement__FiliPUc
            (colorIndex,0x101054,brighten,(uchar *)(iGp0000149c + colorIndex * 8 + (brighten >> 1)))
  ;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_InitWeatherTables__Fv()
 // line 532, offset 0x800dba50
	/* begin block 1 */
		// Start line: 533
		// Start offset: 0x800DBA50

		/* begin block 1.1 */
			// Start line: 533
			// Start offset: 0x800DBA50
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x800DBAA4
		// End Line: 538
	/* end block 1 */
	// End offset: 0x800DBAA4
	// End Line: 540

void Night_InitWeatherTables__Fv(void)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &_Night_gWeatherLightingTable;
  do {
    if (*piVar2 == 0) {
      iVar1 = reservememadr("wtnight",0x100,0);
      *piVar2 = iVar1;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 2);
  uGp0000153c = 0x574054;
  uGp00001540 = 0x6c4040;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_SetWeatherColors__Fi(int colorIndex /*$s3*/)
 // line 544, offset 0x800dbad4
	/* begin block 1 */
		// Start line: 545
		// Start offset: 0x800DBAD4

		/* begin block 1.1 */
			// Start line: 545
			// Start offset: 0x800DBAD4
			// Variables:
		// 		int i; // $s2
		/* end block 1.1 */
		// End offset: 0x800DBB34
		// End Line: 547
	/* end block 1 */
	// End offset: 0x800DBB34
	// End Line: 547

void Night_SetWeatherColors__Fi(int colorIndex)
{
  long colorH;
  int iVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  
  iVar4 = 0;
  plVar3 = &Night_gWeatherColor;
  piVar2 = &_Night_gWeatherLightingTable;
  do {
    colorH = *plVar3;
    plVar3 = plVar3 + 1;
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
    iVar4 = iVar4 + 1;
    Night_CreateNightTableElement__FiliPUc(colorIndex,colorH,0xf,(uchar *)(iVar1 + colorIndex));
  } while (iVar4 < 2);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_GenerateAllLightTables__Fv()
 // line 556, offset 0x800dbb50
	/* begin block 1 */
		// Start line: 557
		// Start offset: 0x800DBB50
		// Variables:
	// 		static char colorCreationTable[16]; // offset 0x94

		/* begin block 1.1 */
			// Start line: 557
			// Start offset: 0x800DBB50
			// Variables:
		// 		int i; // $a2
		/* end block 1.1 */
		// End offset: 0x800DBBF8
		// End Line: 581

		/* begin block 1.2 */
			// Start line: 585
			// Start offset: 0x800DBBF8
			// Variables:
		// 		int colorIndex; // $s2
		// 		int i; // $a2

			/* begin block 1.2.1 */
				// Start line: 585
				// Start offset: 0x800DBC0C

				/* begin block 1.2.1.1 */
					// Start line: 589
					// Start offset: 0x800DBC38
					// Variables:
				// 		int i; // $s0

					/* begin block 1.2.1.1.1 */
						// Start line: 589
						// Start offset: 0x800DBC3C
						// Variables:
					// 		int bright; // $s1
					/* end block 1.2.1.1.1 */
					// End offset: 0x800DBC7C
					// End Line: 602
				/* end block 1.2.1.1 */
				// End offset: 0x800DBC84
				// End Line: 603
			/* end block 1.2.1 */
			// End offset: 0x800DBC84
			// End Line: 603
		/* end block 1.2 */
		// End offset: 0x800DBC8C
		// End Line: 604

		/* begin block 1.3 */
			// Start line: 605
			// Start offset: 0x800DBC8C
			// Variables:
		// 		int i; // $a2
		/* end block 1.3 */
		// End offset: 0x800DBCFC
		// End Line: 610

		/* begin block 1.4 */
			// Start line: 621
			// Start offset: 0x800DBCFC
			// Variables:
		// 		int i; // $a0
		/* end block 1.4 */
		// End offset: 0x800DBDC4
		// End Line: 626
	/* end block 1 */
	// End offset: 0x800DBDC4
	// End Line: 626

void Night_GenerateAllLightTables__Fv(void)
{
  byte bVar1;
  int iVar2;
  int colorIndex;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  colorIndex = 0;
  uGp00001544 = 0x1f800000;
  iGp00001548 = 0x1f800000;
  iGp00001514 = 0;
  do {
    iVar2 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(undefined *)(colorIndex + 0x1f800000) = *(undefined *)(iVar2 + _Chunk_lightTable);
    *(undefined *)(colorIndex + 0x1f800001) = *(undefined *)(iVar2 + _Chunk_lightTable + 1);
    *(undefined *)(colorIndex + 0x1f800002) = *(undefined *)(iVar2 + _Chunk_lightTable + 2);
    colorIndex = colorIndex + 3;
  } while (iVar4 < 0x100);
  colorIndex = 0;
  while (colorIndex < iGp00001514) {
    iVar4 = 0;
    if (DAT_80113234 == 1) {
      Night_SetWeatherColors__Fi(colorIndex);
      iVar4 = 0;
    }
    while (iVar4 < 0x10) {
      bVar1 = (&DAT_80120dac)[iVar4];
      Night_SetPlayerHeadLightColor__Fiii(0,colorIndex,(uint)bVar1);
      if ((DAT_80113200 != 0) && (iVar4 < 8)) {
        Night_SetCopLightColors__Fii(colorIndex,(uint)bVar1);
      }
      iVar4 = iVar4 + 1;
    }
    colorIndex = colorIndex + 1;
  }
  iVar4 = 0;
  colorIndex = 0;
  do {
    iVar2 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(undefined *)(iVar2 + _Chunk_lightTable) = *(undefined *)(colorIndex + iGp00001548);
    *(undefined *)(iVar2 + _Chunk_lightTable + 1) = *(undefined *)(colorIndex + iGp00001548 + 1);
    *(undefined *)(iVar2 + _Chunk_lightTable + 2) = *(undefined *)(colorIndex + iGp00001548 + 2);
    colorIndex = colorIndex + 3;
  } while (iVar4 < 0x100);
  colorIndex = 0;
  puVar3 = &Night_gAdditiveHeadlightColor;
  do {
    *puVar3 = (char)((int)((uint)bGp00001534 * colorIndex) / 0xf);
    puVar3[1] = 0;
    colorIndex = colorIndex + 1;
    puVar3[2] = 0;
    puVar3 = puVar3 + 4;
  } while (colorIndex < 0x10);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_InitNightDriving__Fv()
 // line 631, offset 0x800dbde4
	/* begin block 1 */
		// Start line: 632
		// Start offset: 0x800DBDE4

		/* begin block 1.1 */
			// Start line: 643
			// Start offset: 0x800DBE44

			/* begin block 1.1.1 */
				// Start line: 645
				// Start offset: 0x800DBE54
				// Variables:
			// 		char name[256]; // stack offset -272
			// 		char *mem; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800DBF6C
			// End Line: 681
		/* end block 1.1 */
		// End offset: 0x800DBF6C
		// End Line: 681
	/* end block 1 */
	// End offset: 0x800DBF6C
	// End Line: 681

void Night_InitNightDriving__Fv(void)
{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  char acStack272 [256];
  
  uGp000014dc = 0;
  if (DAT_80113240 != 0) {
    uGp000014dc = (uint)(DAT_801131f8 != 1);
    if (DAT_801131f8 != 1) goto LAB_800dbe54;
    DAT_80123370 = 0xff;
    DAT_8012336c = 0;
  }
  if (uGp000014dc == 0) {
    return;
  }
LAB_800dbe54:
  sprintf(acStack272,"%snight.psh",0);
  uVar1 = filesize(acStack272);
  uGp0000154c = reservememadr("night.psh",uVar1,0);
  uVar1 = loadshapeadr(acStack272,0);
  uVar2 = filesize(acStack272);
  blockmove(uVar1,uGp0000154c,uVar2);
  purgememadr(uVar1);
  iGp000014f4 = locateshape(uGp0000154c,&DAT_8013da20);
  iGp000014f4 = iGp000014f4 + 0x10;
  Night_InitPlayerHeadLightColor__Fi(0);
  if (DAT_80113200 != 0) {
    Night_InitCopLightColors__Fv();
  }
  if (DAT_80113234 == 1) {
    Night_InitWeatherTables__Fv();
  }
  Night_GenerateAllLightTables__Fv();
  if (DAT_80113234 == 1) {
    uGp00001518 = 0;
    uGp0000151c = random();
    uGp0000151c = uGp0000151c & 0x1ff;
    uVar3 = random();
    iGp00001520 = uGp0000151c + (uVar3 & 0x31);
    uGp00001524 = uGp0000151c;
    Hrz_CalculateLightning__Fv();
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_KillNightDriving__Fv()
 // line 687, offset 0x800dbf80
	/* begin block 1 */
		// Start line: 688
		// Start offset: 0x800DBF80
	/* end block 1 */
	// End offset: 0x800DC010
	// End Line: 720

void Night_KillNightDriving__Fv(void)
{
  if (iGp0000154c != 0) {
    purgememadr();
  }
  iGp0000154c = 0;
  if (iGp00001498 != 0) {
    purgememadr();
  }
  iGp00001498 = 0;
  if (iGp0000149c != 0) {
    purgememadr();
  }
  iGp0000149c = 0;
  if (iGp000014a0 != 0) {
    purgememadr();
  }
  iGp000014a0 = 0;
  if (iGp000014a4 != 0) {
    purgememadr();
  }
  iGp000014a4 = 0;
  if (iGp000014a8 != 0) {
    purgememadr();
  }
  iGp000014a8 = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_RestartNightDriving__Fv()
 // line 723, offset 0x800dc020
	/* begin block 1 */
		// Start line: 724
		// Start offset: 0x800DC020
	/* end block 1 */
	// End offset: 0x800DC098
	// End Line: 731

void Night_RestartNightDriving__Fv(void)
{
  uint uVar1;
  
  if ((DAT_80113234 == 1) && (DAT_80113240 != 0)) {
    uGp00001518 = 0;
    uGp0000151c = random();
    uGp0000151c = uGp0000151c & 0x1ff;
    uVar1 = random();
    iGp00001520 = uGp0000151c + (uVar1 & 0x31);
    uGp00001524 = uGp0000151c;
    Hrz_LightningFlicker__Fi(0);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_SetEnviroment__FP13DRender_tView(struct DRender_tView *Vi /*$s0*/)
 // line 736, offset 0x800dc0a8
	/* begin block 1 */
		// Start line: 737
		// Start offset: 0x800DC0A8

		/* begin block 1.1 */
			// Start line: 737
			// Start offset: 0x800DC0A8

			/* begin block 1.1.1 */
				// Start line: 741
				// Start offset: 0x800DC0CC
			/* end block 1.1.1 */
			// End offset: 0x800DC1A8
			// End Line: 805
		/* end block 1.1 */
		// End offset: 0x800DC1A8
		// End Line: 805
	/* end block 1 */
	// End offset: 0x800DC1A8
	// End Line: 805

void Night_SetEnviroment__FP13DRender_tView(DRender_tView *Vi)
{
  int iVar1;
  
  if (DAT_80113240 != 0) {
    Night_gDrawLightning = 0;
    _Night_gCurrentNightColor = 0;
    if ((DAT_80113234 == 1) && (Night_PauseLightningEffect__Fi(Vi->player), Vi->player == 0)) {
      Night_DoLightningEffect__FP13DRender_tView(Vi);
    }
    Night_gXDistShift = 10;
    Night_gZDistShift = 0xc;
    Night_gZNear = 0x80;
    if ((*(byte *)((&DAT_8010f2b0)[Vi->player * 0x44] + 0x447) & 4) != 0) {
      Night_gZDistShift = 0xd;
      Night_gXDistShift = 0xb;
    }
    iVar1 = Camera_GetMode__Fi(Vi->player);
    if (iVar1 == 0) {
      Night_gZNear = 0xfffffe00;
    }
    Night_gXDist = 1 << (Night_gXDistShift & 0x1f);
    Night_gZDist = 1 << (Night_gZDistShift & 0x1f);
    Night_gZDistShift = Night_gZDistShift - 6;
    Night_gXDistShift = Night_gXDistShift - 5;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Night_AdditiveNightCalc__FP6VECTORP7CVECTOR(struct VECTOR *v /*$a0*/, struct CVECTOR *color /*$a1*/)
 // line 811, offset 0x800dc1b8
	/* begin block 1 */
		// Start line: 812
		// Start offset: 0x800DC1B8
		// Variables:
	// 		int z; // $v1
	// 		int index; // $v0
	// 		int znear; // $a3
	// 		int zfar; // $a2

		/* begin block 1.1 */
			// Start line: 815
			// Start offset: 0x800DC1B8

			/* begin block 1.1.1 */
				// Start line: 824
				// Start offset: 0x800DC1E8
				// Variables:
			// 		int x; // $a0
			// 		int xdist; // $a2

				/* begin block 1.1.1.1 */
					// Start line: 827
					// Start offset: 0x800DC1E8

					/* begin block 1.1.1.1.1 */
						// Start line: 832
						// Start offset: 0x800DC210
						// Variables:
					// 		int lookup; // $v0
					// 		short newR; // $a3
					// 		short newG; // $t0
					// 		short newB; // $a2
					// 		long addColor; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800DC2B0
					// End Line: 862
				/* end block 1.1.1.1 */
				// End offset: 0x800DC2B0
				// End Line: 862
			/* end block 1.1.1 */
			// End offset: 0x800DC2B0
			// End Line: 862
		/* end block 1.1 */
		// End offset: 0x800DC2B0
		// End Line: 862
	/* end block 1 */
	// End offset: 0x800DC2B0
	// End Line: 862

void Night_AdditiveNightCalc__FP6VECTORP7CVECTOR(VECTOR *v,CVECTOR *color)
{
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  uchar uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = v->vz;
  if ((Night_gZNear < iVar3) && (iVar3 < Night_gZNear + (1 << (Night_gZDistShift + 6 & 0x1f)))) {
    iVar6 = v->vx;
    iVar7 = 1 << (Night_gXDistShift + 5 & 0x1f);
    if ((-iVar7 < iVar6) && (iVar6 < iVar7)) {
      uVar4 = *(uint *)(&Night_gAdditiveHeadlightColor +
                       (uint)*(byte *)((iVar3 - Night_gZNear >> (Night_gZDistShift & 0x1f)) * 0x40 +
                                      (iVar6 + iVar7 >> (Night_gXDistShift & 0x1f))) * 4);
      _uVar5 = (uint)color->r + (uVar4 & 0xff);
      uVar5 = (uchar)_uVar5;
      _uVar1 = (uint)color->g + ((int)(uVar4 & 0xff00) >> 8);
      uVar1 = (uchar)_uVar1;
      uVar4 = (uint)color->b + (uVar4 >> 0x10 & 0xff);
      uVar2 = (uchar)uVar4;
      if (0xff < _uVar5) {
        uVar5 = -1;
      }
      if (0xff < _uVar1) {
        uVar1 = -1;
      }
      if (0xff < uVar4) {
        uVar2 = -1;
      }
      color->r = uVar5;
      color->g = uVar1;
      color->b = uVar2;
    }
  }
  return;


}





