#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 268
	/* end block 2 */
	// End Line: 269

	/* begin block 3 */
		// Start line: 268
	/* end block 3 */
	// End Line: 269

	/* begin block 4 */
		// Start line: 269
	/* end block 4 */
	// End Line: 270

	/* begin block 5 */
		// Start line: 269
	/* end block 5 */
	// End Line: 270

int Night_FindClosestColor__FG7CVECTORPi(CVECTOR colorMatch,int *bestIndex)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uchar *puVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined **ppuVar11;
  int iVar12;
  
  iVar10 = 1;
  puVar8 = Night_gTotalLights + 1;
  bVar1 = *gTableCache;
  bVar2 = gTableCache[1];
  bVar3 = gTableCache[2];
  ppuVar11 = &PTR_0002fa03;
  if (1 < (int)puVar8) {
    iVar12 = 3;
    do {
      iVar4 = (colorMatch & 0xff) - (uint)bVar1;
      iVar5 = (colorMatch >> 8 & 0xff) - (uint)bVar2;
      iVar6 = (colorMatch >> 0x10 & 0xff) - (uint)bVar3;
      pbVar7 = gTableCache + iVar12;
      bVar1 = *pbVar7;
      bVar2 = pbVar7[1];
      bVar3 = pbVar7[2];
      ppuVar9 = (undefined **)(iVar4 * iVar4 + iVar5 * iVar5 + iVar6 * iVar6);
      if (((int)ppuVar9 < (int)ppuVar11) &&
         (*bestIndex = iVar10 + -1, ppuVar11 = ppuVar9, (int)ppuVar9 < 0x40)) {
        return (int)ppuVar9;
      }
      iVar10 = iVar10 + 1;
      iVar12 = iVar12 + 3;
    } while (iVar10 < (int)puVar8);
  }
  return (int)ppuVar11;
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

	/* begin block 2 */
		// Start line: 387
	/* end block 2 */
	// End Line: 388

	/* begin block 3 */
		// Start line: 393
	/* end block 3 */
	// End Line: 394

	/* begin block 4 */
		// Start line: 393
	/* end block 4 */
	// End Line: 394

void Night_CreateNightTableElement__FiliPUc(int colorIndex,long colorH,int bright,uchar *colorval)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte local_1d;
  uchar local_18 [8];
  
  bright = bright * 0x111;
  pbVar1 = gTableCache + colorIndex * 3;
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
  if (((_bVar4 < 0x201) || (Chunk_numLight + 4 <= colorIndex)) || (0xff < (int)Night_gTotalLights))
  {
    *colorval = local_18[0];
  }
  else {
    gTableCache[(int)Night_gTotalLights * 3] = bVar4 & 0xf8;
    gTableCache[(int)Night_gTotalLights * 3 + 1] = (byte)uVar3 & 0xf8;
    gTableCache[(int)Night_gTotalLights * 3 + 2] = (byte)uVar2 & 0xf8;
    *colorval = (uchar)Night_gTotalLights;
    Night_gTotalLights = Night_gTotalLights + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Night_CreateNightTable__FiliPA256_A16_Uc(int colorIndex /*$a0*/, long colorH /*$a1*/, int bright /*$a2*/, unsigned char (*tbl)[256][16] /*$a3*/)
 // line 236, offset 0x800db5a4
	/* begin block 1 */
		// Start line: 237
		// Start offset: 0x800DB5A4
	/* end block 1 */
	// End offset: 0x800DB5A4
	// End Line: 237

	/* begin block 2 */
		// Start line: 557
	/* end block 2 */
	// End Line: 558

	/* begin block 3 */
		// Start line: 562
	/* end block 3 */
	// End Line: 563

	/* begin block 4 */
		// Start line: 562
	/* end block 4 */
	// End Line: 563

void Night_CreateNightTable__FiliPA256_A16_Uc
               (int colorIndex,long colorH,int bright,uchar (*tbl) [256] [16])

{
  Night_CreateNightTableElement__FiliPUc(colorIndex,colorH,bright,*tbl + bright + colorIndex * 0x10)
  ;
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

	/* begin block 2 */
		// Start line: 675
	/* end block 2 */
	// End Line: 676

	/* begin block 3 */
		// Start line: 785
	/* end block 3 */
	// End Line: 786

	/* begin block 4 */
		// Start line: 785
	/* end block 4 */
	// End Line: 786

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Night_GenerateNextLightningEvent__Fv(void)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = random();
  Night_gNextLightning = (uchar *)(simGlobal.gameTicks + (uVar1 & 0x7ff) + 0x1f);
  uVar1 = random();
  Night_gEndNextLightning = Night_gNextLightning + (uVar1 & 0xf) + 0xf;
  Night_gNextFlicker = Night_gNextLightning;
  uVar1 = random();
  Night_gFlashAzimuth = (uchar *)(uVar1 & 0xffff);
  lVar2 = random();
  Night_gShowForks._0_1_ = (byte)lVar2 & 1;
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

	/* begin block 2 */
		// Start line: 825
	/* end block 2 */
	// End Line: 826

	/* begin block 3 */
		// Start line: 853
	/* end block 3 */
	// End Line: 854

	/* begin block 4 */
		// Start line: 853
	/* end block 4 */
	// End Line: 854

	/* begin block 5 */
		// Start line: 855
	/* end block 5 */
	// End Line: 856

void Night_PauseLightningEffect__Fi(int player)

{
  if (Weather_gType == Weather_kSnow ||
      (&Night_gLightningPauseAreas)[GameSetup_gData.track * 2] <
      (int)*(short *)(&Camera_gInfo.forceFocus + player * 0x44) &&
      (int)*(short *)(&Camera_gInfo.forceFocus + player * 0x44) <
      INT_ARRAY_80120d30[GameSetup_gData.track * 2]) {
    Night_gNextLightning = (uchar *)simGlobal.gameTicks;
    Night_gEndNextLightning = (uchar *)simGlobal.gameTicks;
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

	/* begin block 2 */
		// Start line: 947
	/* end block 2 */
	// End Line: 948

	/* begin block 3 */
		// Start line: 954
	/* end block 3 */
	// End Line: 955

	/* begin block 4 */
		// Start line: 954
	/* end block 4 */
	// End Line: 955

	/* begin block 5 */
		// Start line: 957
	/* end block 5 */
	// End Line: 958

void Night_DoLightningEffect__FP13DRender_tView(DRender_tView *Vi)

{
  uint uVar1;
  void *pvVar2;
  
  if (Night_gLightning != (uchar *)0x0) {
    AudioCmn_PlayThunder__Fii((int)Night_gFlashIntensity,(int)Night_gFlashAzimuth);
    Hrz_LightningFlicker__Fi(0);
    Night_gLightning = (uchar *)0x0;
  }
  if ((((int)Night_gNextLightning < simGlobal.gameTicks) &&
      (simGlobal.gameTicks < (int)Night_gEndNextLightning)) &&
     ((int)Night_gNextFlicker < simGlobal.gameTicks)) {
    uVar1 = random();
    Night_gLightningType = (uchar *)(uVar1 & 1);
    Hrz_LightningFlicker__Fi(1);
    pvVar2 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos
                       ((BWorldSm_Pos *)(&Camera_gInfo.forceFocus + Vi->player * 0x44));
    Night_gDrawLightning = pvVar2 == (void *)0x0;
    Night_gLightning = &DAT_00000001;
    uVar1 = random();
    Night_gNextFlicker = (uchar *)(simGlobal.gameTicks + (uVar1 & 3));
    uVar1 = random();
    Night_gFlashIntensity = (uchar *)((int)(Night_gLightningType + 1) * (uVar1 & 0x1f) + 0x40);
    if (DAT_8013d9fe != '\0') {
      if ((char)Night_gShowForks != '\0') {
        Hrz_SetLightingPosInSky__FP13DRender_tView(Vi);
      }
      DAT_8013d9fe = '\0';
    }
  }
  if ((int)Night_gEndNextLightning < simGlobal.gameTicks) {
    Night_GenerateNextLightningEvent__Fv();
    Hrz_CalculateLightning__Fv();
    DAT_8013d9fe = '\x01';
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
	// 		unsigned char (*copColors[2])[256][8]; // stack offset -16
	// 		int col1; // $v0
	// 		int col2; // $v0
	/* end block 1 */
	// End offset: 0x800DB848
	// End Line: 474

	/* begin block 2 */
		// Start line: 1053
	/* end block 2 */
	// End Line: 1054

	/* begin block 3 */
		// Start line: 1059
	/* end block 3 */
	// End Line: 1060

	/* begin block 4 */
		// Start line: 1059
	/* end block 4 */
	// End Line: 1060

void Night_SetCopColor__FP18GameSetup_tCarData(GameSetup_tCarData *carinfo)

{
  int iVar1;
  uchar *local_10 [4];
  
  iVar1 = ((uint)(byte)(&DAT_8013d9e2)[carinfo->carType] * 5 + carinfo->Country) * 2;
  Night_gCopColor = local_10[(uint)(byte)(&Night_gCopCountryLightTbl)[iVar1]];
  PTR_8013da50 = local_10[(uint)(byte)(&CHAR_01h_80120d19)[iVar1]];
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

	/* begin block 2 */
		// Start line: 1094
	/* end block 2 */
	// End Line: 1095

	/* begin block 3 */
		// Start line: 1098
	/* end block 3 */
	// End Line: 1099

	/* begin block 4 */
		// Start line: 1098
	/* end block 4 */
	// End Line: 1099

	/* begin block 5 */
		// Start line: 1101
	/* end block 5 */
	// End Line: 1102

void Night_InitPlayerHeadLightColor__Fi(int player)

{
  if (Night_gPlayerLightingTable == (uchar *)0x0) {
    Night_gPlayerLightingTable = (uchar *)reservememadr((char *)PTR_ARRAY_8013da00,0x1000,0);
  }
  Night_gPlayerHeadLightColor[player] = TrackSpec_gSpec.nightspec;
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

	/* begin block 2 */
		// Start line: 1122
	/* end block 2 */
	// End Line: 1123

	/* begin block 3 */
		// Start line: 1127
	/* end block 3 */
	// End Line: 1128

	/* begin block 4 */
		// Start line: 1127
	/* end block 4 */
	// End Line: 1128

void Night_SetPlayerHeadLightColor__Fiii(int player,int colorIndex,int bright)

{
  Night_CreateNightTable__FiliPA256_A16_Uc
            (colorIndex,(long)Night_gPlayerHeadLightColor[player],bright,
             (uchar (*) [256] [16])Night_gPlayerLightingTable);
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

	/* begin block 2 */
		// Start line: 1137
	/* end block 2 */
	// End Line: 1138

	/* begin block 3 */
		// Start line: 1141
	/* end block 3 */
	// End Line: 1142

	/* begin block 4 */
		// Start line: 1141
	/* end block 4 */
	// End Line: 1142

	/* begin block 5 */
		// Start line: 1142
	/* end block 5 */
	// End Line: 1143

	/* begin block 6 */
		// Start line: 1142
	/* end block 6 */
	// End Line: 1143

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Night_InitCopLightColors__Fv(void)

{
  if (Night_gCopLightingTableRed == (uchar *)0x0) {
    Night_gCopLightingTableRed = (uchar *)reservememadr((char *)PTR_ARRAY_8013da08,0x800,0);
  }
  if (Night_gCopLightingTableBlue == (uchar *)0x0) {
    Night_gCopLightingTableBlue = (uchar *)reservememadr((char *)PTR_ARRAY_8013da10,0x800,0);
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

	/* begin block 2 */
		// Start line: 1162
	/* end block 2 */
	// End Line: 1163

	/* begin block 3 */
		// Start line: 1166
	/* end block 3 */
	// End Line: 1167

	/* begin block 4 */
		// Start line: 1166
	/* end block 4 */
	// End Line: 1167

void Night_SetCopLightColors__Fii(int colorIndex,int brighten)

{
  Night_CreateNightTableElement__FiliPUc
            (colorIndex,(long)&DAT_00602020,brighten,
             Night_gCopLightingTableBlue + (brighten >> 1) + colorIndex * 8);
  Night_CreateNightTableElement__FiliPUc
            (colorIndex,(long)&LAB_00101054,brighten,
             Night_gCopLightingTableRed + (brighten >> 1) + colorIndex * 8);
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

	/* begin block 2 */
		// Start line: 1205
	/* end block 2 */
	// End Line: 1206

	/* begin block 3 */
		// Start line: 1210
	/* end block 3 */
	// End Line: 1211

	/* begin block 4 */
		// Start line: 1210
	/* end block 4 */
	// End Line: 1211

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Night_InitWeatherTables__Fv(void)

{
  short *psVar1;
  uchar **ppuVar2;
  int iVar3;
  
  iVar3 = 0;
  ppuVar2 = &Night_gWeatherLightingTable;
  do {
    if ((short *)*ppuVar2 == (short *)0x0) {
      psVar1 = reservememadr((char *)PTR_ARRAY_8013da18,0x100,0);
      *(short **)ppuVar2 = psVar1;
    }
    iVar3 = iVar3 + 1;
    ppuVar2 = (uchar **)((short **)ppuVar2 + 1);
  } while (iVar3 < 2);
  Night_gWeatherColor = &DAT_00574054;
  PTR_8013da8c = &DAT_006c4040;
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

	/* begin block 2 */
		// Start line: 1234
	/* end block 2 */
	// End Line: 1235

	/* begin block 3 */
		// Start line: 1238
	/* end block 3 */
	// End Line: 1239

	/* begin block 4 */
		// Start line: 1238
	/* end block 4 */
	// End Line: 1239

void Night_SetWeatherColors__Fi(int colorIndex)

{
  uchar *colorH;
  uchar *puVar1;
  uchar **ppuVar2;
  uchar **ppuVar3;
  int iVar4;
  
  iVar4 = 0;
  ppuVar3 = &Night_gWeatherColor;
  ppuVar2 = &Night_gWeatherLightingTable;
  do {
    colorH = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    puVar1 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    iVar4 = iVar4 + 1;
    Night_CreateNightTableElement__FiliPUc(colorIndex,(long)colorH,0xf,puVar1 + colorIndex);
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

	/* begin block 2 */
		// Start line: 1255
	/* end block 2 */
	// End Line: 1256

	/* begin block 3 */
		// Start line: 1265
	/* end block 3 */
	// End Line: 1266

	/* begin block 4 */
		// Start line: 1265
	/* end block 4 */
	// End Line: 1266

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Night_GenerateAllLightTables__Fv(void)

{
  byte bVar1;
  int iVar2;
  CVECTOR *pCVar3;
  int iVar4;
  int colorIndex;
  
  iVar2 = 0;
  gNightInitCache = (uchar *)&DAT_1f800000;
  gTableCache = (uchar *)&DAT_1f800000;
  Night_gTotalLights = (uchar *)Chunk_numLight;
  colorIndex = 0;
  do {
    iVar4 = colorIndex + 1;
    gTableCache[iVar2] = Chunk_lightTable[colorIndex].r;
    gTableCache[iVar2 + 1] = Chunk_lightTable[colorIndex].g;
    gTableCache[iVar2 + 2] = Chunk_lightTable[colorIndex].b;
    iVar2 = iVar2 + 3;
    colorIndex = iVar4;
  } while (iVar4 < 0x100);
  colorIndex = 0;
  while (colorIndex < (int)Night_gTotalLights) {
    iVar2 = 0;
    if (GameSetup_gData.Weather == 1) {
      Night_SetWeatherColors__Fi(colorIndex);
      iVar2 = 0;
    }
    while (iVar2 < 0x10) {
      bVar1 = (&DAT_80120dac)[iVar2];
      Night_SetPlayerHeadLightColor__Fiii(0,colorIndex,(uint)bVar1);
      if ((GameSetup_gData.cops != 0) && (iVar2 < 8)) {
        Night_SetCopLightColors__Fii(colorIndex,(uint)bVar1);
      }
      iVar2 = iVar2 + 1;
    }
    colorIndex = colorIndex + 1;
  }
  iVar2 = 0;
  colorIndex = 0;
  do {
    iVar4 = colorIndex + 1;
    Chunk_lightTable[colorIndex].r = gTableCache[iVar2];
    Chunk_lightTable[colorIndex].g = gTableCache[iVar2 + 1];
    Chunk_lightTable[colorIndex].b = gTableCache[iVar2 + 2];
    iVar2 = iVar2 + 3;
    colorIndex = iVar4;
  } while (iVar4 < 0x100);
  colorIndex = 0;
  pCVar3 = &Night_gAdditiveHeadlightColor;
  do {
    pCVar3->r = (uchar)((int)((uint)(byte)Night_gPlayerHeadLightColor[0] * colorIndex) / 0xf);
    pCVar3->g = (uchar)((int)((uint)Night_gPlayerHeadLightColor[0]._1_1_ * colorIndex) / 0xf);
    iVar2 = (uint)Night_gPlayerHeadLightColor[0]._2_1_ * colorIndex;
    colorIndex = colorIndex + 1;
    pCVar3->b = (uchar)(iVar2 / 0xf);
    pCVar3 = pCVar3 + 1;
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

	/* begin block 2 */
		// Start line: 1464
	/* end block 2 */
	// End Line: 1465

	/* begin block 3 */
		// Start line: 1470
	/* end block 3 */
	// End Line: 1471

	/* begin block 4 */
		// Start line: 1470
	/* end block 4 */
	// End Line: 1471

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Night_InitNightDriving__Fv(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char acStack272 [256];
  
  gNight_renderNight = (uchar *)0x0;
  if (GameSetup_gData.Time != 0) {
    gNight_renderNight = (uchar *)(uint)(GameSetup_gData.commMode != 1);
    if (GameSetup_gData.commMode != 1) goto LAB_800dbe54;
    TrackSpec_gSpec.depthcuespec.distance = 0xff;
    TrackSpec_gSpec.depthcuespec.color = 0;
  }
  if (gNight_renderNight == (uchar *)0x0) {
    return;
  }
LAB_800dbe54:
  sprintf(acStack272,s__snight_psh_8005696c,PTR_801164cc);
  iVar1 = filesize(acStack272);
  nightfile = (uchar *)reservememadr(s_night_psh_80056978,iVar1,0);
  puVar2 = (undefined4 *)loadshapeadr(acStack272,0);
  iVar1 = filesize(acStack272);
  blockmove(puVar2,(undefined4 *)nightfile,iVar1);
  purgememadr((int)puVar2);
  iVar1 = locateshape((int)nightfile,(int *)PTR_ARRAY_8013da20);
  Night_gNightTbl = (uchar *)(iVar1 + 0x10);
  Night_InitPlayerHeadLightColor__Fi(0);
  if (GameSetup_gData.cops != 0) {
    Night_InitCopLightColors__Fv();
  }
  if (GameSetup_gData.Weather == 1) {
    Night_InitWeatherTables__Fv();
  }
  Night_GenerateAllLightTables__Fv();
  if (GameSetup_gData.Weather == 1) {
    Night_gLightning = (uchar *)0x0;
    uVar3 = random();
    Night_gNextLightning = (uchar *)(simGlobal.gameTicks + (uVar3 & 0x1ff));
    uVar3 = random();
    Night_gEndNextLightning = Night_gNextLightning + (uVar3 & 0x31);
    Night_gNextFlicker = Night_gNextLightning;
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

	/* begin block 2 */
		// Start line: 1577
	/* end block 2 */
	// End Line: 1578

	/* begin block 3 */
		// Start line: 1584
	/* end block 3 */
	// End Line: 1585

	/* begin block 4 */
		// Start line: 1584
	/* end block 4 */
	// End Line: 1585

	/* begin block 5 */
		// Start line: 1585
	/* end block 5 */
	// End Line: 1586

	/* begin block 6 */
		// Start line: 1585
	/* end block 6 */
	// End Line: 1586

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Night_KillNightDriving__Fv(void)

{
  if (nightfile != (uchar *)0x0) {
    purgememadr((int)nightfile);
  }
  nightfile = (uchar *)0x0;
  if (Night_gPlayerLightingTable != (uchar *)0x0) {
    purgememadr((int)Night_gPlayerLightingTable);
  }
  Night_gPlayerLightingTable = (uchar *)0x0;
  if (Night_gCopLightingTableRed != (uchar *)0x0) {
    purgememadr((int)Night_gCopLightingTableRed);
  }
  Night_gCopLightingTableRed = (uchar *)0x0;
  if (Night_gCopLightingTableBlue != (uchar *)0x0) {
    purgememadr((int)Night_gCopLightingTableBlue);
  }
  Night_gCopLightingTableBlue = (uchar *)0x0;
  if (Night_gWeatherLightingTable != (uchar *)0x0) {
    purgememadr((int)Night_gWeatherLightingTable);
  }
  Night_gWeatherLightingTable = (uchar *)0x0;
  if (PTR_8013d9f4 != (uchar *)0x0) {
    purgememadr((int)PTR_8013d9f4);
  }
  PTR_8013d9f4 = (uchar *)0x0;
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

	/* begin block 2 */
		// Start line: 1672
	/* end block 2 */
	// End Line: 1673

	/* begin block 3 */
		// Start line: 1676
	/* end block 3 */
	// End Line: 1677

	/* begin block 4 */
		// Start line: 1676
	/* end block 4 */
	// End Line: 1677

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Night_RestartNightDriving__Fv(void)

{
  uint uVar1;
  
  if ((GameSetup_gData.Weather == 1) && (GameSetup_gData.Time != 0)) {
    Night_gLightning = (uchar *)0x0;
    uVar1 = random();
    Night_gNextLightning = (uchar *)(simGlobal.gameTicks + (uVar1 & 0x1ff));
    uVar1 = random();
    Night_gEndNextLightning = Night_gNextLightning + (uVar1 & 0x31);
    Night_gNextFlicker = Night_gNextLightning;
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

	/* begin block 2 */
		// Start line: 1697
	/* end block 2 */
	// End Line: 1698

	/* begin block 3 */
		// Start line: 1703
	/* end block 3 */
	// End Line: 1704

	/* begin block 4 */
		// Start line: 1703
	/* end block 4 */
	// End Line: 1704

void Night_SetEnviroment__FP13DRender_tView(DRender_tView *Vi)

{
  int iVar1;
  
  if (GameSetup_gData.Time != 0) {
    Night_gDrawLightning = '\0';
    Night_gCurrentNightColor = Night_gPlayerLightingTable;
    if ((GameSetup_gData.Weather == 1) &&
       (Night_PauseLightningEffect__Fi(Vi->player), Vi->player == 0)) {
      Night_DoLightningEffect__FP13DRender_tView(Vi);
    }
    Night_gXDistShift = &DAT_0000000a;
    Night_gZDistShift = (uchar *)0xc;
    Night_gZNear = (uchar *)0x80;
    if ((*(byte *)((int)&(&Camera_gInfo.target)[Vi->player * 0x44][1].shadowCoord[2].y + 3) & 4) !=
        0) {
      Night_gZDistShift = (uchar *)0xd;
      Night_gXDistShift = (uchar *)0xb;
    }
    iVar1 = Camera_GetMode__Fi(Vi->player);
    if (iVar1 == 0) {
      Night_gZNear = (uchar *)0xfffffe00;
    }
    Night_gXDist = (uchar *)(1 << ((uint)Night_gXDistShift & 0x1f));
    Night_gZDist = (uchar *)(1 << ((uint)Night_gZDistShift & 0x1f));
    Night_gZDistShift = Night_gZDistShift + -6;
    Night_gXDistShift = Night_gXDistShift + -5;
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

	/* begin block 2 */
		// Start line: 1868
	/* end block 2 */
	// End Line: 1869

	/* begin block 3 */
		// Start line: 1875
	/* end block 3 */
	// End Line: 1876

	/* begin block 4 */
		// Start line: 1875
	/* end block 4 */
	// End Line: 1876

	/* begin block 5 */
		// Start line: 1878
	/* end block 5 */
	// End Line: 1879

	/* begin block 6 */
		// Start line: 1883
	/* end block 6 */
	// End Line: 1884

void Night_AdditiveNightCalc__FP6VECTORP7CVECTOR(VECTOR *v,CVECTOR *color)

{
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  CVECTOR CVar4;
  uchar uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = v->vz;
  if (((int)Night_gZNear < iVar3) &&
     (iVar3 < (int)(Night_gZNear + (1 << ((uint)(Night_gZDistShift + 6) & 0x1f))))) {
    iVar6 = v->vx;
    iVar7 = 1 << ((uint)(Night_gXDistShift + 5) & 0x1f);
    if ((-iVar7 < iVar6) && (iVar6 < iVar7)) {
      CVar4 = (&Night_gAdditiveHeadlightColor)
              [(uint)Night_gNightTbl
                     [(iVar3 - (int)Night_gZNear >> ((uint)Night_gZDistShift & 0x1f)) * 0x40 +
                      (iVar6 + iVar7 >> ((uint)Night_gXDistShift & 0x1f))]];
      _uVar5 = (uint)color->r + ((uint)CVar4 & 0xff);
      uVar5 = (uchar)_uVar5;
      _uVar1 = (uint)color->g + ((int)((uint)CVar4 & 0xff00) >> 8);
      uVar1 = (uchar)_uVar1;
      _uVar2 = (uint)color->b + ((uint)CVar4 >> 0x10 & 0xff);
      uVar2 = (uchar)_uVar2;
      if (0xff < _uVar5) {
        uVar5 = -1;
      }
      if (0xff < _uVar1) {
        uVar1 = -1;
      }
      if (0xff < _uVar2) {
        uVar2 = -1;
      }
      color->r = uVar5;
      color->g = uVar1;
      color->b = uVar2;
    }
  }
  return;
}





