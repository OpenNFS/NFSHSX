#include "NFS4.H"
#include "DRAWC.H"

// decompiled code
// original method signature: 
// void /*$ra*/ ChangeTPage__FPUsi(unsigned short *tpage /*$a0*/, int nabr /*$a1*/)
 // line 112, offset 0x800be6d0
	/* begin block 1 */
		// Start line: 113
		// Start offset: 0x800BE6D0
	/* end block 1 */
	// End offset: 0x800BE6D0
	// End Line: 115

void ChangeTPage__FPUsi(ushort *tpage,int nabr)
{
  *tpage = *tpage & 0xff9f | (ushort)(nabr << 5);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_SetEnviroment__Fv()
 // line 119, offset 0x800be6e8
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x800BE6E8
	/* end block 1 */
	// End offset: 0x800BE6E8
	// End Line: 120

void DrawC_SetEnviroment__Fv(void)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_ReadLightingData__Fv()
 // line 123, offset 0x800be6f0
	/* begin block 1 */
		// Start line: 124
		// Start offset: 0x800BE6F0
		// Variables:
	// 		int i; // $s1
	// 		char *ScaneData; // stack offset -32
	// 		char *RenderingFileData; // $s3
	// 		char name[256]; // stack offset -288
	/* end block 1 */
	// End offset: 0x800BE8D4
	// End Line: 178

void DrawC_ReadLightingData__Fv(void)
{
  char *pcVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  char acStack288 [256];
  char *local_20 [2];
  
  sprintf(acStack288,"%sTr%02d.env",0,0);
  pcVar1 = (char *)loadfileadr(acStack288,0x10);
  local_20[0] = pcVar1;
  DrawC_gEnvMapMax = Risk_ReadNextValue__FPPc(local_20);
  _DrawC_gEnvMap = reservememadr("envmap",DrawC_gEnvMapMax * 6,0);
  iVar5 = 0;
  if (0 < DrawC_gEnvMapMax) {
    iVar4 = 0;
    do {
      iVar2 = Risk_ReadNextValue__FPPc(local_20);
      *(undefined2 *)(iVar4 + _DrawC_gEnvMap) = (short)iVar2;
      iVar2 = Risk_ReadNextValue__FPPc(local_20);
      *(undefined2 *)(iVar4 + _DrawC_gEnvMap + 2) = (short)iVar2;
      iVar2 = Risk_ReadNextValue__FPPc(local_20);
      *(undefined2 *)(iVar4 + _DrawC_gEnvMap + 4) = (short)(iVar2 << 8);
      iVar2 = Risk_ReadNextValue__FPPc(local_20);
      psVar3 = (short *)(iVar4 + _DrawC_gEnvMap);
      psVar3[2] = psVar3[2] + (short)iVar2;
      if (*psVar3 < 0) {
        *psVar3 = 0x7fff;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 6;
    } while (iVar5 < DrawC_gEnvMapMax);
  }
  DrawC_gShadowMax = Risk_ReadNextValue__FPPc(local_20);
  _DrawC_gShadow = reservememadr("Shadow",DrawC_gShadowMax * 6,0);
  iVar5 = 0;
  if (0 < DrawC_gShadowMax) {
    iVar4 = 0;
    do {
      iVar2 = Risk_ReadNextValue__FPPc(local_20);
      *(undefined2 *)(iVar4 + _DrawC_gShadow) = (short)iVar2;
      iVar2 = Risk_ReadNextValue__FPPc(local_20);
      *(undefined2 *)(iVar4 + _DrawC_gShadow + 2) = (short)iVar2;
      iVar2 = Risk_ReadNextValue__FPPc(local_20);
      *(undefined2 *)(iVar4 + _DrawC_gShadow + 4) = (short)(iVar2 << 8);
      iVar2 = Risk_ReadNextValue__FPPc(local_20);
      psVar3 = (short *)(iVar4 + _DrawC_gShadow);
      psVar3[2] = psVar3[2] + (short)iVar2;
      if (*psVar3 < 0) {
        *psVar3 = 0x7fff;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 6;
    } while (iVar5 < DrawC_gShadowMax);
  }
  purgememadr(pcVar1);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_ReadeMapData__Fv()
 // line 181, offset 0x800be8f8
	/* begin block 1 */
		// Start line: 182
		// Start offset: 0x800BE8F8
	/* end block 1 */
	// End offset: 0x800BE8F8
	// End Line: 182

void DrawC_ReadeMapData__Fv(void)
{
  R3DCcar_ReadeMapData__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_BuildRenderingData__Fv()
 // line 190, offset 0x800be918
	/* begin block 1 */
		// Start line: 191
		// Start offset: 0x800BE918
	/* end block 1 */
	// End offset: 0x800BE918
	// End Line: 191

void DrawC_BuildRenderingData__Fv(void)
{
  DrawC_ReadLightingData__Fv();
  DrawC_ReadeMapData__Fv();
  R3DCcar_ReadTrackShadow__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_KillRenderingData__Fv()
 // line 208, offset 0x800be948
	/* begin block 1 */
		// Start line: 209
		// Start offset: 0x800BE948
	/* end block 1 */
	// End offset: 0x800BE948
	// End Line: 209

void DrawC_KillRenderingData__Fv(void)
{
  purgememadr(uGp000012a4);
  purgememadr(uGp000012a8);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_NightHeadlight__FP8Car_tObj(struct Car_tObj *carObj /*$a1*/)
 // line 214, offset 0x800be978
	/* begin block 1 */
		// Start line: 215
		// Start offset: 0x800BE978
		// Variables:
	// 		struct coorddef *pos; // $a2
	// 		int *light; // stack offset -24
	// 		int i; // $v1
	// 		struct MATRIX nightMat; // stack offset -112
	// 		struct VECTOR nightV; // stack offset -80
	// 		struct PCOORD16 zero; // stack offset -64

		/* begin block 1.1 */
			// Start line: 215
			// Start offset: 0x800BE978

			/* begin block 1.1.1 */
				// Start line: 230
				// Start offset: 0x800BE9C4
				// Variables:
			// 		struct coorddef tmp; // stack offset -56
			// 		struct coorddef tmp2; // stack offset -40
			/* end block 1.1.1 */
			// End offset: 0x800BEA80
			// End Line: 247
		/* end block 1.1 */
		// End offset: 0x800BEA80
		// End Line: 247

		/* begin block 1.2 */
			// Start line: 251
			// Start offset: 0x800BEA80

			/* begin block 1.2.1 */
				// Start line: 252
				// Start offset: 0x800BEA94
				// Variables:
			// 		short newR; // $t1
			// 		short newG; // $t0
			// 		short newB; // $v1
			/* end block 1.2.1 */
			// End offset: 0x800BEB10
			// End Line: 266
		/* end block 1.2 */
		// End offset: 0x800BEB10
		// End Line: 266
	/* end block 1 */
	// End offset: 0x800BEB10
	// End Line: 266

void DrawC_NightHeadlight__FP8Car_tObj(Car_tObj *carObj)
{
  undefined4 in_zero;
  undefined4 in_at;
  int *piVar1;
  MATRIX MStack112;
  VECTOR local_50;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  coorddef cStack40;
  CVECTOR *local_18;
  
  local_18 = (CVECTOR *)&(carObj->render).sub_otz;
  if ((*(byte *)((&_Cars_gList)[DAT_80116f80] + 0x447) & 6) != 0) {
    piVar1 = &_Cars_gHumanRaceCarList + DAT_80116f80;
    local_38 = (carObj->N).position.x - *(int *)(*piVar1 + 0xa0);
    local_34 = (carObj->N).position.y - *(int *)(*piVar1 + 0xa4);
    local_30 = (carObj->N).position.z - *(int *)(*piVar1 + 0xa8);
    transform(&local_38,&gNightMat,&cStack40);
    DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(&cStack40,&MStack112);
    DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX((matrixtdef *)&gNightMat,&MStack112);
    local_3c = (uint)local_3c._2_2_ << 0x10;
    local_40 = 0;
    setCopReg(2,in_zero,0);
    setCopReg(2,in_at,local_3c);
    copFunction(2,0x480012);
    local_50.vx = getCopReg(2,0x19);
    local_50.vy = getCopReg(2,0x1a);
    local_50.vz = getCopReg(2,0x1b);
    Night_AdditiveNightCalc__FP6VECTORP7CVECTOR(&local_50,local_18);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_MenuColorData__FiP8Car_tObji(int color /*$s2*/, struct Car_tObj *carObj /*$s1*/, int player /*$s3*/)
 // line 388, offset 0x800beb24
	/* begin block 1 */
		// Start line: 389
		// Start offset: 0x800BEB24
		// Variables:
	// 		int menuColor; // $v1
	// 		int carType; // $v1

		/* begin block 1.1 */
			// Start line: 469
			// Start offset: 0x800BEBD8

			/* begin block 1.1.1 */
				// Start line: 474
				// Start offset: 0x800BEBF4

				/* begin block 1.1.1.1 */
					// Start line: 475
					// Start offset: 0x800BEBF4

					/* begin block 1.1.1.1.1 */
						// Start line: 476
						// Start offset: 0x800BEC08
						// Variables:
					// 		char filename[10]; // stack offset -144
					// 		char infilename[100]; // stack offset -128
					// 		char *shpfile; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800BECAC
					// End Line: 510
				/* end block 1.1.1.1 */
				// End offset: 0x800BECAC
				// End Line: 510
			/* end block 1.1.1 */
			// End offset: 0x800BECAC
			// End Line: 513
		/* end block 1.1 */
		// End offset: 0x800BED24
		// End Line: 524
	/* end block 1 */
	// End offset: 0x800BED28
	// End Line: 527

void DrawC_MenuColorData__FiP8Car_tObji(int color,Car_tObj *carObj,int player)
{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int carType;
  GameSetup_tCarData *pGVar4;
  Texture_pal8bit *palCopy;
  char *__src;
  char acStack144 [16];
  char acStack128 [104];
  
  pGVar4 = carObj->carInfo;
  if (*(int *)&(carObj->render).inside == 0) {
    if ((int)(carObj->render).palCopyNum[0xd] != pGVar4->carType) {
      return;
    }
    uVar2 = (carObj->render).palCopyNum[0xd];
    *(char *)((int)(carObj->render).palCopyNum + 0x11) =
         *(char *)&pGVar4->EngineMods + *(char *)&pGVar4->WeightTransfer * '\x02' +
         *(char *)&pGVar4->GroundEffects * '\x04';
    if ((uint)uVar2 - 0x10 < 3) {
      *(undefined *)((int)(carObj->render).palCopyNum + 0x11) = 7;
    }
    uVar3 = (uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11);
    carType = color + (uVar3 & 1) * 0x100 + (uVar3 & 2) * 0x100;
    if (*(int *)(&DrawC_gMenuColor + player * 4) == carType) {
      return;
    }
    *(int *)(&DrawC_gMenuColor + player * 4) = carType;
    DrawSync(0);
    carType = (int)(carObj->render).palCopyNum[0xd];
    if (carType < 0x1c) {
      if ((color & 8U) != ((uint)*(ushort *)&carObj->audio[6].type & 8)) {
        R3DCar_GetCarName__FPcii(acStack144,carType,carObj->carInfo->Country);
        if (color < 8) {
          __src = "l";
        }
        else {
          __src = "d";
        }
        strcat(acStack144,__src);
        strcpy(acStack128,(char *)0x0);
        strcat(acStack128,acStack144);
        strcat(acStack128,".psh");
        __src = (char *)loadfileadr(acStack128,0x10);
        CarIO_UpdateCarTextureData__FPcP8Car_tObji(__src,carObj,player);
        purgememadr(__src);
        DrawSync(0);
      }
      Texture_CarColor =
           (color & 7U) + ((uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 2) * 4;
      Texture_ProcessPaletteCopy__FP15Texture_pal8bitii
                ((Texture_pal8bit *)(carObj->render).sub_ot,0,1);
      carType = 1;
      palCopy = (Texture_pal8bit *)(carObj->render).sub_ot;
      sVar1 = *(short *)&(carObj->render).sub_otSize;
      Texture_CarColor =
           (color & 7U) + ((uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 1) * 8;
    }
    else {
      carType = 0;
      palCopy = (Texture_pal8bit *)(carObj->render).sub_ot;
      sVar1 = *(short *)&(carObj->render).sub_otSize;
      Texture_CarColor = color & 7;
    }
    Texture_ProcessPaletteCopy__FP15Texture_pal8bitii(palCopy,carType,(int)sVar1);
  }
  *(short *)&carObj->audio[6].type = (short)color;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ DrawC_PrimStart__FP12Draw_tVertexP8Car_tObjiP13Draw_CarCache(struct Draw_tVertex *center /*$a0*/, struct Car_tObj *carObj /*$s2*/, int lightAvg /*$fp*/, struct Draw_CarCache *sd /*$s3*/)
 // line 1148, offset 0x800bed44
	/* begin block 1 */
		// Start line: 1149
		// Start offset: 0x800BED44
		// Variables:
	// 		int i; // $a0
	// 		int carType; // $s1
	// 		int cop_flag; // $s4
	// 		int sub_otz; // $s0
	// 		int sub_otOffset; // $v1
	// 		int half; // $s7

		/* begin block 1.1 */
			// Start line: 1185
			// Start offset: 0x800BEE48

			/* begin block 1.1.1 */
				// Start line: 1193
				// Start offset: 0x800BEE5C
			/* end block 1.1.1 */
			// End offset: 0x800BEE5C
			// End Line: 1196
		/* end block 1.1 */
		// End offset: 0x800BEEBC
		// End Line: 1209

		/* begin block 1.2 */
			// Start line: 1259
			// Start offset: 0x800BEF60

			/* begin block 1.2.1 */
				// Start line: 1260
				// Start offset: 0x800BEF74

				/* begin block 1.2.1.1 */
					// Start line: 1301
					// Start offset: 0x800BF338

					/* begin block 1.2.1.1.1 */
						// Start line: 1302
						// Start offset: 0x800BF340
						// Variables:
					// 		int mirror; // $a0

						/* begin block 1.2.1.1.1.1 */
							// Start line: 1327
							// Start offset: 0x800BF4D8

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 1328
								// Start offset: 0x800BF4F4
								// Variables:
							// 		int overlay; // $a0
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x800BF508
							// End Line: 1331
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800BF508
						// End Line: 1331
					/* end block 1.2.1.1.1 */
					// End offset: 0x800BF508
					// End Line: 1331
				/* end block 1.2.1.1 */
				// End offset: 0x800BF508
				// End Line: 1331
			/* end block 1.2.1 */
			// End offset: 0x800BF508
			// End Line: 1331
		/* end block 1.2 */
		// End offset: 0x800BF508
		// End Line: 1331

		/* begin block 1.3 */
			// Start line: 1376
			// Start offset: 0x800BF7F8
			// Variables:
		// 		struct SVECTOR r; // stack offset -48
		/* end block 1.3 */
		// End offset: 0x800BF7F8
		// End Line: 1379

		/* begin block 1.4 */
			// Start line: 1379
			// Start offset: 0x800BF7F8

			/* begin block 1.4.1 */
				// Start line: 1390
				// Start offset: 0x800BF840
				// Variables:
			// 		struct RECT tw; // stack offset -48
			// 		struct DRAWENV *LEnv; // $s4
			// 		int eSpeed; // $s6

				/* begin block 1.4.1.1 */
					// Start line: 1395
					// Start offset: 0x800BF840
					// Variables:
				// 		int quad; // $a3
				// 		int tpageShadow; // $s5
				// 		short envMap; // $a2
				// 		short shadow; // $a1
				// 		short extraEnvMap; // $a0
				// 		short extraShadow; // $v1
				/* end block 1.4.1.1 */
				// End offset: 0x800BFA48
				// End Line: 1456
			/* end block 1.4.1 */
			// End offset: 0x800BFAC8
			// End Line: 1465

			/* begin block 1.4.2 */
				// Start line: 1467
				// Start offset: 0x800BFAF4
				// Variables:
			// 		struct DRAWENV *LEnv; // $s0
			/* end block 1.4.2 */
			// End offset: 0x800BFB88
			// End Line: 1499
		/* end block 1.4 */
		// End offset: 0x800BFB88
		// End Line: 1499

		/* begin block 1.5 */
			// Start line: 1502
			// Start offset: 0x800BFB88
			// Variables:
		// 		int eColor; // $a2

			/* begin block 1.5.1 */
				// Start line: 1502
				// Start offset: 0x800BFB88

				/* begin block 1.5.1.1 */
					// Start line: 1508
					// Start offset: 0x800BFBA8
					// Variables:
				// 		int eColor2; // $v0
				/* end block 1.5.1.1 */
				// End offset: 0x800BFBE0
				// End Line: 1520
			/* end block 1.5.1 */
			// End offset: 0x800BFC08
			// End Line: 1523
		/* end block 1.5 */
		// End offset: 0x800BFC3C
		// End Line: 1529
	/* end block 1 */
	// End offset: 0x800BFC54
	// End Line: 1532

int DrawC_PrimStart__FP12Draw_tVertexP8Car_tObjiP13Draw_CarCache( (Draw_tVertex *center,Car_tObj *carObj,int lightAvg,Draw_CarCache *sd)
{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 in_zero;
  undefined4 in_at;
  ushort uVar4;
  ulong *puVar5;
  int iVar6;
  undefined2 *puVar7;
  DRAWENV *pDVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int nabr;
  int iVar17;
  int iVar18;
  ushort local_30;
  ushort local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  bVar2 = false;
  iVar18 = (int)(carObj->render).palCopyNum[0xd];
  bVar3 = 5 < iVar18 - 0x16U;
  setCopControlWord(2,0,DrawC_gScreenMat);
  setCopControlWord(2,0x800,DAT_8011f4cc);
  setCopControlWord(2,0x1000,DAT_8011f4d0);
  setCopControlWord(2,0x1800,DAT_8011f4d4);
  setCopControlWord(2,0x2000,DAT_8011f4d8);
  setCopControlWord(2,0x2800,DAT_8011f4dc);
  setCopControlWord(2,0x3000,DAT_8011f4e0);
  setCopControlWord(2,0x3800,DAT_8011f4e4);
  setCopReg(2,in_zero,*(undefined4 *)&center->sv);
  setCopReg(2,in_at,*(undefined4 *)&(center->sv).z);
  copFunction(2,0x180001);
  nabr = getCopReg(2,0x9800);
  sd->sub_otz = nabr >> 2;
  iVar17 = sd->sub_otz;
  nabr = iVar17 >> 1;
  if (false) {
    sd->sub_otz = 0;
  }
  else {
    sd->sub_otz = nabr;
    if ((nabr < 0) || (Draw_gViewOtSize + -3 < nabr)) {
      return -1;
    }
  }
  nabr = (carObj->render).rollFactor;
  (carObj->render).bodyRoll = sd->sub_otz;
  if (nabr == 0) {
    puVar5 = (ulong *)(carObj->render).currentRoll;
    sd->sub_ot = puVar5;
    sd->sub_otSize = (carObj->render).currentHeight;
    ClearOTagR(puVar5);
    sd->sub_otz = 0;
    nabr = (carObj->render).pitchFactor;
  }
  else {
    sd->sub_ot = *(ulong **)(nabr + 0x86c);
    sd->sub_otSize = *(int *)(nabr + 0x870);
    sd->sub_otz = (sd->sub_otz - *(int *)(nabr + 0x864)) * 2;
    nabr = *(int *)(nabr + 0x874);
  }
  iVar6 = sd->sub_otz * 4;
  sd->sub_otz = iVar6;
  (carObj->render).currentPitch = iVar6 + nabr + iVar17 * -4;
  sd->sub_otSize = sd->sub_otSize + -1;
  sd->pmxStart = (Draw_tPixMap *)(carObj->audio[6].channel * 0x10);
  sd->offsetU0 = *(uchar *)((carObj->render).palCopyNum + 0x13);
  sd->offsetV0 = (carObj->render).medOnly;
  sd->offsetU1 = *(uchar *)&(carObj->render).headLight;
  sd->offsetV1 = *(uchar *)&(carObj->render).brakeLight;
  nabr = 0x32;
  sd->offsetU2 = *(uchar *)((int)&(carObj->render).headLight + 1);
  puVar7 = &DAT_8011f56c;
  sd->offsetV2 = *(uchar *)((int)&(carObj->render).brakeLight + 1);
  do {
    *puVar7 = 0;
    nabr = nabr + -1;
    puVar7 = puVar7 + -1;
  } while (-1 < nabr);
  if (false) {
LAB_800bf508:
    if (bVar3) goto LAB_800bf7fc;
  }
  else {
    nabr = (carObj->N).damage[0];
    if (nabr < 0x1e0001) {
      if (0xa0000 < nabr) {
        DrawC_gOverlay = DrawC_gOverlay | 2;
        DAT_8011f50c = DAT_8011f50c | 2;
      }
    }
    else {
      DrawC_gOverlay = DrawC_gOverlay | 1;
      DAT_8011f50c = DAT_8011f50c | 1;
    }
    nabr = (carObj->N).damage[2];
    if (nabr < 0x1e0001) {
      if (0xa0000 < nabr) {
        DrawC_gOverlay = DrawC_gOverlay | 0x200;
        DAT_8011f50c = DAT_8011f50c | 0x200;
      }
    }
    else {
      DrawC_gOverlay = DrawC_gOverlay | 0x100;
      DAT_8011f50c = DAT_8011f50c | 0x100;
    }
    nabr = (carObj->N).damage[3];
    if (nabr < 0x1e0001) {
      if (0xa0000 < nabr) {
        DAT_8011f50c = DAT_8011f50c | 0x800;
      }
    }
    else {
      DAT_8011f50c = DAT_8011f50c | 0x400;
    }
    nabr = (carObj->N).damage[4];
    if (nabr < 0x1e0001) {
      if (0xa0000 < nabr) {
        DAT_8011f50a = DAT_8011f50a | 0x200;
        DAT_8011f50c = DAT_8011f50c | 0x2000;
      }
    }
    else {
      DAT_8011f50a = DAT_8011f50a | 0x100;
      DAT_8011f50c = DAT_8011f50c | 0x1000;
    }
    nabr = (carObj->N).damage[6];
    if (nabr < 0x1e0001) {
      if (0xa0000 < nabr) {
        DAT_8011f50a = DAT_8011f50a | 2;
        DAT_8011f50c = DAT_8011f50c | 0x20;
      }
    }
    else {
      DAT_8011f50a = DAT_8011f50a | 1;
      DAT_8011f50c = DAT_8011f50c | 0x10;
    }
    nabr = (carObj->N).damage[7];
    if (nabr < 0x1e0001) {
      if (0xa0000 < nabr) {
        DAT_8011f50c = DAT_8011f50c | 8;
      }
    }
    else {
      DAT_8011f50c = DAT_8011f50c | 4;
    }
    if (0x30000 < (carObj->N).damage[8]) {
      DAT_8011f510 = DAT_8011f510 | 0x101;
    }
    if (((carObj->render).palCopyNum[10] & 1U) != 0) {
      if ((DAT_8011f50a & 1) == 0) {
        DAT_8011f538 = DAT_8011f538 | 0x81;
        DAT_8011f53a = DAT_8011f53a | 0x81;
      }
      if ((DAT_8011f50a & 0x100) == 0) {
        DAT_8011f538 = DAT_8011f538 | 0x8100;
        DAT_8011f53a = DAT_8011f53a | 0x8100;
      }
    }
    if ((carObj->control).gear == '\0') {
      if ((DAT_8011f50a & 1) == 0) {
        DAT_8011f53c = DAT_8011f53c | 0x80;
      }
      if ((DAT_8011f50a & 0x100) == 0) {
        DAT_8011f53c = DAT_8011f53c | 0x8000;
      }
    }
    uVar1 = (carObj->render).palCopyNum[9];
    if ((uVar1 & 0x11) != 0) {
      if (((uVar1 & 0x40) != 0) || ((DrawC_gOverlay & 1) == 0)) {
        DAT_8011f542 = DAT_8011f542 | 0x81;
      }
      if ((((carObj->render).palCopyNum[9] & 4U) != 0) || ((DrawC_gOverlay & 0x100) == 0)) {
        DAT_8011f542 = DAT_8011f542 | 0x8100;
      }
    }
    if (((carObj->render).palCopyNum[10] & 2U) != 0) {
      if ((DAT_8011f50a & 1) == 0) {
        DAT_8011f538 = DAT_8011f538 | 0x80;
        DAT_8011f53a = DAT_8011f53a | 0x80;
      }
      if ((DAT_8011f50a & 0x100) == 0) {
        DAT_8011f538 = DAT_8011f538 | 0x8000;
        DAT_8011f53a = DAT_8011f53a | 0x8000;
      }
    }
    uVar1 = DAT_8011f538;
    if (bVar3) {
      uVar10 = (sd->head).mirror;
      piVar12 = (int *)((int)&(carObj->N).objID + uVar10 * 2);
      if ((*(ushort *)(piVar12 + 0x22e) & 0x80) != 0) {
        DAT_8011f540 = DAT_8011f540 | 0x40;
      }
      if ((*(ushort *)(piVar12 + 0x22e) & 8) != 0) {
        if ((DrawC_gOverlay & 1) == 0) {
          DAT_8011f53e = DAT_8011f53e | 0x80;
        }
        if ((DAT_8011f50a & 1) == 0) {
          DAT_8011f540 = DAT_8011f540 | 0x81;
        }
      }
      piVar12 = (int *)((int)&(carObj->N).objID + (uVar10 ^ 1) * 2);
      if ((*(ushort *)(piVar12 + 0x22e) & 0x80) != 0) {
        DAT_8011f540 = DAT_8011f540 | 0x4000;
      }
      if ((*(ushort *)(piVar12 + 0x22e) & 8) != 0) {
        if ((DrawC_gOverlay & 0x100) == 0) {
          DAT_8011f53e = DAT_8011f53e | 0x8000;
        }
        if ((DAT_8011f50a & 0x100) == 0) {
          DAT_8011f540 = DAT_8011f540 | 0x8100;
        }
      }
      if (1 < (byte)(&R3DCar_SignalBrakeFlare)[iVar18]) {
        if ((DAT_8011f540 & 0x40) == 0) {
          DAT_8011f540 = DAT_8011f540 | DAT_8011f538 & 0xff;
        }
        if ((DAT_8011f540 & 0x4000) == 0) {
          DAT_8011f540 = DAT_8011f540 | DAT_8011f538 & 0xff00;
        }
      }
      if ((&R3DCar_SignalBrakeFlare)[iVar18] == '\x03') {
        DAT_8011f538 = DAT_8011f540;
        DAT_8011f540 = uVar1;
      }
      goto LAB_800bf508;
    }
  }
  uVar1 = DAT_8011f53e | 2;
  uVar4 = DAT_8011f540 | 0x200;
  if (DAT_8011f510 == 0) {
    uVar4 = DAT_8011f53e | 0x83;
    DAT_8011f53e = DAT_8011f53e | 2;
    uVar1 = DAT_8011f540 | 0x200;
    if (*(short *)(&DrawC_SirenFlash + ((uint)(ushort)(carObj->render).palCopyNum[0xb] & 0xf) * 2)
        != 0) {
      DAT_8011f53e = uVar4;
      uVar1 = DAT_8011f540 | 0x281;
    }
    DAT_8011f540 = uVar1;
    uVar1 = DAT_8011f53e;
    uVar4 = DAT_8011f540;
    if (*(short *)(&DrawC_SirenFlash + ((uint)(ushort)(carObj->render).palCopyNum[0xc] & 0xf) * 2)
        != 0) {
      uVar1 = DAT_8011f53e | 0x8100;
      uVar4 = DAT_8011f540 | 0x8100;
    }
  }
  DAT_8011f540 = uVar4;
  DAT_8011f53e = uVar1;
  if ((false) || ((carObj->desiredLatPos & 2U) != 0)) {
    DAT_8011f542 = DAT_8011f542 & 0x7e7e;
    if (((carObj->render).palCopyNum[10] & 1U) == 0) {
      DAT_8011f538 = DAT_8011f538 & 0x7f7f;
      DAT_8011f53a = DAT_8011f53a & 0x7f7f;
    }
    if ((*(short *)(&DrawC_HeadLightFlash +
                   ((uint)(ushort)(carObj->render).palCopyNum[0xb] & 0xf) * 2) != 0) &&
       ((((carObj->render).palCopyNum[9] & 0x40U) != 0 || ((DrawC_gOverlay & 1) == 0)))) {
      DAT_8011f542 = DAT_8011f542 | 0x81;
    }
    if ((*(short *)(&DrawC_HeadLightFlash +
                   ((uint)(ushort)(carObj->render).palCopyNum[0xc] & 0xf) * 2) != 0) &&
       ((((carObj->render).palCopyNum[9] & 4U) != 0 || ((DrawC_gOverlay & 0x100) == 0)))) {
      DAT_8011f542 = DAT_8011f542 | 0x8100;
    }
    if ((DAT_8011f50a & 1) == 0) {
      if (*(short *)(&DrawC_TailLightFlash +
                    ((uint)(ushort)(carObj->render).palCopyNum[0xb] & 0xf) * 2) != 0) {
        DAT_8011f538 = DAT_8011f538 | 0x80;
        DAT_8011f53a = DAT_8011f53a | 0x80;
      }
      if (*(short *)(&DrawC_HeadLightFlash +
                    ((uint)(ushort)(carObj->render).palCopyNum[0xb] & 0xf) * 2) != 0) {
        DAT_8011f53c = DAT_8011f53c | 0x80;
      }
    }
    if ((DAT_8011f50a & 0x100) == 0) {
      if (*(short *)(&DrawC_TailLightFlash +
                    ((uint)(ushort)(carObj->render).palCopyNum[0xc] & 0xf) * 2) != 0) {
        DAT_8011f538 = DAT_8011f538 | 0x8000;
        DAT_8011f53a = DAT_8011f53a | 0x8000;
      }
      if (*(short *)(&DrawC_HeadLightFlash +
                    ((uint)(ushort)(carObj->render).palCopyNum[0xc] & 0xf) * 2) != 0) {
        DAT_8011f53c = DAT_8011f53c | 0x8000;
      }
    }
  }
LAB_800bf7fc:
  local_30 = 0;
  local_2c = 0;
  local_2e = 0;
  RotMatrix(&local_30,&DrawC_gMatA);
  DAT_8011f504 = 0;
  DAT_8011f500 = 0;
  DAT_8011f4fc = 0;
  iGp000012c4 = 0;
  if (false) {
    pDVar8 = Draw_GetDRAWENV__Fii(gCView,gFlip);
    SetDrawMode(&sd->drawModeOn,(uint)pDVar8->dfe,1,(uint)pDVar8->tpage,0);
    SetDrawMode(&sd->drawModeOff,(uint)pDVar8->dfe,0,(uint)pDVar8->tpage,0);
    uVar16 = _gMenuPixmap[1];
    uVar14 = _gMenuPixmap[2];
    uVar15 = _gMenuPixmap[3];
    *(undefined4 *)&sd->ePmx0 = *_gMenuPixmap;
    *(undefined4 *)&(sd->ePmx0).u1 = uVar16;
    *(undefined4 *)&(sd->ePmx0).u2 = uVar14;
    *(undefined4 *)&(sd->ePmx0).u3 = uVar15;
  }
  else {
    iVar18 = 3;
    pDVar8 = Draw_GetDRAWENV__Fii(gCView,gFlip);
    iVar17 = (int)(carObj->N).simRoadInfo.quad;
    nabr = (int)(carObj->N).eIndexEnvMap * 6 + iGp000012a4;
    uVar13 = (uint)*(ushort *)(nabr + 2);
    uVar11 = (uint)*(ushort *)(nabr + 4);
    nabr = (int)(carObj->N).eIndexShadow * 6 + iGp000012a8;
    uVar10 = (uint)*(ushort *)(nabr + 2);
    uVar9 = (uint)*(ushort *)(nabr + 4);
    nabr = 2;
    if (iVar17 < (int)(uVar11 & 0xff)) {
      uVar13 = (int)(uVar11 << 0x10) >> 0x18;
    }
    if (iVar17 < (int)(uVar9 & 0xff)) {
      uVar10 = (int)(uVar9 << 0x10) >> 0x18;
    }
    bVar2 = 10 < (short)uVar13;
    if (bVar2) {
      uVar13 = uVar13 - 10;
    }
    if ((int)(uVar10 << 0x10) < 0) {
      iVar18 = 0;
      uVar10 = -uVar10;
    }
    if (10 < (short)uVar10) {
      uVar10 = uVar10 - 10;
      nabr = 1;
    }
    iVar17 = (int)((uVar13 - 1) * 0x10000) >> 0x10;
    if (iVar17 < 0) {
      *(undefined4 *)&sd->ePmx0 = 0;
    }
    else {
      iVar17 = iVar17 * 0x10;
      uVar16 = *(undefined4 *)(&DAT_8011e174 + iVar17);
      uVar14 = *(undefined4 *)(&DAT_8011e178 + iVar17);
      uVar15 = *(undefined4 *)(&DAT_8011e17c + iVar17);
      *(undefined4 *)&sd->ePmx0 = *(undefined4 *)(&Track_gReflectionMaps + iVar17);
      *(undefined4 *)&(sd->ePmx0).u1 = uVar16;
      *(undefined4 *)&(sd->ePmx0).u2 = uVar14;
      *(undefined4 *)&(sd->ePmx0).u3 = uVar15;
    }
    iVar17 = (int)((uVar10 - 1) * 0x10000) >> 0x10;
    if (iVar17 < 0) {
      *(undefined4 *)&sd->ePmx1 = 0;
    }
    else {
      iVar17 = iVar17 * 0x10;
      local_30 = (ushort)(byte)(&Track_gReflectionMaps)[iVar17];
      local_2c = 0x80;
      local_2a = 0x40;
      local_2e = (ushort)(byte)(&DAT_8011e171)[iVar17];
      SetDrawMode(&sd->drawModeOn,(uint)pDVar8->dfe,0,(uint)*(ushort *)(&DAT_8011e176 + iVar17),
                  &local_30);
      local_2a = 0;
      local_2c = 0;
      local_2e = 0;
      local_30 = 0;
      SetDrawMode(&sd->drawModeOff,(uint)pDVar8->dfe,0,(uint)pDVar8->tpage,&local_30);
      uVar16 = *(undefined4 *)(&DAT_8011e174 + iVar17);
      uVar14 = *(undefined4 *)(&DAT_8011e178 + iVar17);
      uVar15 = *(undefined4 *)(&DAT_8011e17c + iVar17);
      *(undefined4 *)&sd->ePmx1 = *(undefined4 *)(&Track_gReflectionMaps + iVar17);
      *(undefined4 *)&(sd->ePmx1).u1 = uVar16;
      *(undefined4 *)&(sd->ePmx1).u2 = uVar14;
      *(undefined4 *)&(sd->ePmx1).u3 = uVar15;
      ChangeTPage__FPUsi(&(sd->ePmx1).tpage,nabr);
    }
    sd->eAddZ = ((int)(carObj->N).positionXZ >> iVar18 + 3 & 0x3fU) +
                (int)*(short *)(&DrawC_gEnvMapOffset + (uint)((sd->ePmx1).v0 >> 6) * 2);
    if (((DAT_80113234 != 0) &&
        (uVar10 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(&(carObj->N).simRoadInfo), uVar10 != 1))
       && (*(int *)(&Cars_kSkidMarkSurface + (carObj->N).driveSurfaceType * 4) == 1)) {
      iGp000012c4 = *(int *)(&Cars_kSkidMarkSurface + (carObj->N).driveSurfaceType * 4);
    }
    uGp000012c8 = (undefined2)
                  ((uint)(((carObj->N).dimension.y * 3 >> 1) + (carObj->N).objAltitude) >> 8);
  }
  ChangeTPage__FPUsi(&(sd->ePmx0).tpage,1);
  if (false) {
    lightAvg = lightAvg >> 1;
  }
  else {
    lightAvg = (int)((lightAvg >> 2) * (uint)R3DCar_eMapColour) >> 7;
    if (bVar2) {
      lightAvg = (lightAvg << 1) / 3;
    }
    sd->eColor2 = (lightAvg * 3 >> 2) * 0x10101;
  }
  sd->eColor0 = lightAvg * 0x10101;
  if ((carObj->render).palCopyNum[0xd] != 1) {
    lightAvg = lightAvg * 3;
  }
  sd->eColor1 = (lightAvg >> 2) * 0x10101;
  return (carObj->render).bodyRoll;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_PrimStop__FP8Car_tObjP13Draw_CarCache(struct Car_tObj *carObj /*$a0*/, struct Draw_CarCache *sd /*$t1*/)
 // line 1535, offset 0x800bfc84
	/* begin block 1 */
		// Start line: 1536
		// Start offset: 0x800BFC84

		/* begin block 1.1 */
			// Start line: 1536
			// Start offset: 0x800BFC84

			/* begin block 1.1.1 */
				// Start line: 1538
				// Start offset: 0x800BFC94
				// Variables:
			// 		struct Car_tObj *sort_carObj; // $a1
			// 		int worldZ; // $a0
			// 		int sub_otSize; // $t0
			/* end block 1.1.1 */
			// End offset: 0x800BFD3C
			// End Line: 1562
		/* end block 1.1 */
		// End offset: 0x800BFD3C
		// End Line: 1562
	/* end block 1 */
	// End offset: 0x800BFD3C
	// End Line: 1562

void DrawC_PrimStop__FP8Car_tObjP13Draw_CarCache(Car_tObj *carObj,Draw_CarCache *sd)
{
  short sVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  if (*(short *)&(carObj->render).world_otz == 0) {
    iVar3 = (carObj->render).rollFactor;
    if (iVar3 == 0) {
      iVar2 = (carObj->render).currentHeight;
      iVar3 = (carObj->render).bodyRoll;
    }
    else {
      sVar1 = *(short *)(iVar3 + 0x87c);
      if ((*(short *)(iVar3 + 0x87c) != 0) && (*(short *)(iVar3 + 0x87c) = sVar1 + -1, sVar1 != 1))
      {
        return;
      }
      iVar2 = *(int *)(iVar3 + 0x870);
      iVar3 = *(int *)(iVar3 + 0x864);
    }
    *sd->sub_ot = *sd->sub_ot & 0xff000000 | (sd->head).cprim.LastPrim[iVar3] & 0xffffff;
    puVar4 = (sd->head).cprim.LastPrim + iVar3;
    *puVar4 = *puVar4 & 0xff000000 | (uint)(sd->sub_ot + iVar2 + -1) & 0xffffff;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_Prim__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache(struct matrixtdef *m /*$s0*/, struct coorddef *t /*$s4*/, struct Transformer_zObj *obj /*$s5*/, struct Transformer_zOverlay *overlay /*$s6*/, int envmap /*stack 16*/, struct Draw_CarCache *sd /*stack 20*/)
 // line 1772, offset 0x800bfd44
	/* begin block 1 */
		// Start line: 1773
		// Start offset: 0x800BFD44
		// Variables:
	// 		int i; // $t2
	// 		struct COORD16 *Nvertice; // $s3

		/* begin block 1.1 */
			// Start line: 1790
			// Start offset: 0x800BFDA4

			/* begin block 1.1.1 */
				// Start line: 1791
				// Start offset: 0x800BFDB0
				// Variables:
			// 		struct COORD16 *vt; // $a3

				/* begin block 1.1.1.1 */
					// Start line: 1799
					// Start offset: 0x800BFE18
					// Variables:
				// 		int u; // $v1
				// 		int v; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 1803
						// Start offset: 0x800BFE24
						// Variables:
					// 		short t1; // $v0
					// 		short t2; // $v1
					// 		short t3; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800BFE24
					// End Line: 1803
				/* end block 1.1.1.1 */
				// End offset: 0x800BFE70
				// End Line: 1809
			/* end block 1.1.1 */
			// End offset: 0x800BFE88
			// End Line: 1813
		/* end block 1.1 */
		// End offset: 0x800BFE88
		// End Line: 1813

		/* begin block 1.2 */
			// Start line: 1818
			// Start offset: 0x800BFE88
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.2 */
		// End offset: 0x800BFE88
		// End Line: 1818

		/* begin block 1.3 */
			// Start line: 1818
			// Start offset: 0x800BFE88
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.3 */
		// End offset: 0x800BFE88
		// End Line: 1818

		/* begin block 1.4 */
			// Start line: 1818
			// Start offset: 0x800BFE88
			// Variables:
		// 		int r0; // $v1
		// 		int r1; // $a0
		// 		int r2; // $a1
		/* end block 1.4 */
		// End offset: 0x800BFE88
		// End Line: 1818

		/* begin block 1.5 */
			// Start line: 1818
			// Start offset: 0x800BFE88
			// Variables:
		// 		struct COORD16 *vt; // $a3
		// 		struct PCOORD16 *tV; // $t0

			/* begin block 1.5.1 */
				// Start line: 1842
				// Start offset: 0x800BFFB8

				/* begin block 1.5.1.1 */
					// Start line: 1844
					// Start offset: 0x800BFFC4
					// Variables:
				// 		short t1; // $v1
				// 		short t2; // $v0
				// 		short t3; // $a0
				/* end block 1.5.1.1 */
				// End offset: 0x800BFFC4
				// End Line: 1844
			/* end block 1.5.1 */
			// End offset: 0x800BFFC4
			// End Line: 1844
		/* end block 1.5 */
		// End offset: 0x800BFFF0
		// End Line: 1847

		/* begin block 1.6 */
			// Start line: 1852
			// Start offset: 0x800BFFF0

			/* begin block 1.6.1 */
				// Start line: 1855
				// Start offset: 0x800C0034

				/* begin block 1.6.1.1 */
					// Start line: 1857
					// Start offset: 0x800C0034

					/* begin block 1.6.1.1.1 */
						// Start line: 1858
						// Start offset: 0x800C003C

						/* begin block 1.6.1.1.1.1 */
							// Start line: 1859
							// Start offset: 0x800C0048
							// Variables:
						// 		struct POLY_FT3 *prim; // $a1
						// 		struct Transformer_zFacet *facet; // $a3
						// 		int id0; // $a2
						// 		int id1; // $a1
						// 		int id2; // $a0

							/* begin block 1.6.1.1.1.1.1 */
								// Start line: 1872
								// Start offset: 0x800C0084
								// Variables:
							// 		int bfct; // $v1
							/* end block 1.6.1.1.1.1.1 */
							// End offset: 0x800C00F0
							// End Line: 1892

							/* begin block 1.6.1.1.1.1.2 */
								// Start line: 1908
								// Start offset: 0x800C0130

								/* begin block 1.6.1.1.1.1.2.1 */
									// Start line: 1911
									// Start offset: 0x800C0130
									// Variables:
								// 		unsigned long color; // $v0
								// 		unsigned char code; // $t3
								/* end block 1.6.1.1.1.1.2.1 */
								// End offset: 0x800C0130
								// End Line: 1911

								/* begin block 1.6.1.1.1.1.2.2 */
									// Start line: 1911
									// Start offset: 0x800C0130
									// Variables:
								// 		struct Draw_tPixMap *pmx; // $v1

									/* begin block 1.6.1.1.1.1.2.2.1 */
										// Start line: 1911
										// Start offset: 0x800C0130

										/* begin block 1.6.1.1.1.1.2.2.1.1 */
											// Start line: 1930
											// Start offset: 0x800C01A8
											// Variables:
										// 		unsigned char offsetU; // $a2
										// 		unsigned char offsetV; // $t0

											/* begin block 1.6.1.1.1.1.2.2.1.1.1 */
												// Start line: 1940
												// Start offset: 0x800C01C0
												// Variables:
											// 		unsigned char u0; // $v0
											// 		unsigned char u1; // $v1
											// 		unsigned char u2; // $a0
											// 		unsigned char v0; // $v0
											// 		unsigned char v1; // $v1
											// 		unsigned char v2; // $a0
											// 		unsigned short clut; // $v0
											// 		unsigned short tpage; // $v1
											/* end block 1.6.1.1.1.1.2.2.1.1.1 */
											// End offset: 0x800C01C0
											// End Line: 1940
										/* end block 1.6.1.1.1.1.2.2.1.1 */
										// End offset: 0x800C01C0
										// End Line: 1940

										/* begin block 1.6.1.1.1.1.2.2.1.2 */
											// Start line: 1942
											// Start offset: 0x800C021C

											/* begin block 1.6.1.1.1.1.2.2.1.2.1 */
												// Start line: 1943
												// Start offset: 0x800C021C
												// Variables:
											// 		unsigned short uv0; // $v0
											// 		unsigned short uv1; // $v1
											// 		unsigned short uv2; // $a0
											// 		unsigned short clut; // $v0
											// 		unsigned short tpage; // $v1
											/* end block 1.6.1.1.1.1.2.2.1.2.1 */
											// End offset: 0x800C021C
											// End Line: 1943
										/* end block 1.6.1.1.1.1.2.2.1.2 */
										// End offset: 0x800C021C
										// End Line: 1943
									/* end block 1.6.1.1.1.1.2.2.1 */
									// End offset: 0x800C021C
									// End Line: 1943
								/* end block 1.6.1.1.1.1.2.2 */
								// End offset: 0x800C021C
								// End Line: 1943
							/* end block 1.6.1.1.1.1.2 */
							// End offset: 0x800C021C
							// End Line: 1943
						/* end block 1.6.1.1.1.1 */
						// End offset: 0x800C021C
						// End Line: 1943
					/* end block 1.6.1.1.1 */
					// End offset: 0x800C0248
					// End Line: 1943

					/* begin block 1.6.1.1.2 */
						// Start line: 1949
						// Start offset: 0x800C0248

						/* begin block 1.6.1.1.2.1 */
							// Start line: 1950
							// Start offset: 0x800C0250
							// Variables:
						// 		struct POLY_FT3 *prim; // $a3
						// 		struct Transformer_zFacet *facet; // $t0
						// 		int id0; // $a2
						// 		int id1; // $a1
						// 		int id2; // $a0

							/* begin block 1.6.1.1.2.1.1 */
								// Start line: 1963
								// Start offset: 0x800C028C
								// Variables:
							// 		int bfct; // $v1
							/* end block 1.6.1.1.2.1.1 */
							// End offset: 0x800C02F8
							// End Line: 1983

							/* begin block 1.6.1.1.2.1.2 */
								// Start line: 1999
								// Start offset: 0x800C0338

								/* begin block 1.6.1.1.2.1.2.1 */
									// Start line: 2002
									// Start offset: 0x800C0338
									// Variables:
								// 		unsigned long color; // $v1
								// 		unsigned char code; // $a0
								/* end block 1.6.1.1.2.1.2.1 */
								// End offset: 0x800C0394
								// End Line: 2016

								/* begin block 1.6.1.1.2.1.2.2 */
									// Start line: 2016
									// Start offset: 0x800C0394

									/* begin block 1.6.1.1.2.1.2.2.1 */
										// Start line: 2021
										// Start offset: 0x800C03B0
										// Variables:
									// 		struct Draw_tPixMap *pmx; // $v1

										/* begin block 1.6.1.1.2.1.2.2.1.1 */
											// Start line: 2022
											// Start offset: 0x800C03B0
											// Variables:
										// 		unsigned char u0; // $v0
										// 		unsigned char u1; // $v1
										// 		unsigned char u2; // $a0
										// 		unsigned char v0; // $v0
										// 		unsigned char v1; // $v1
										// 		unsigned char v2; // $a0
										// 		unsigned char u; // $a1
										// 		unsigned char v; // $a2
										// 		unsigned short clut; // $a0
										// 		unsigned short tpage; // $v0
										/* end block 1.6.1.1.2.1.2.2.1.1 */
										// End offset: 0x800C03B0
										// End Line: 2022
									/* end block 1.6.1.1.2.1.2.2.1 */
									// End offset: 0x800C03B0
									// End Line: 2022

									/* begin block 1.6.1.1.2.1.2.2.2 */
										// Start line: 2026
										// Start offset: 0x800C0424
										// Variables:
									// 		unsigned short uv0; // $v0
									// 		unsigned short uv1; // $v1
									// 		unsigned short uv2; // $a0
									// 		struct Draw_tPixMap *pmx; // $v1
									// 		unsigned short clut; // $v0
									// 		unsigned short tpage; // $v1
									/* end block 1.6.1.1.2.1.2.2.2 */
									// End offset: 0x800C0424
									// End Line: 2026
								/* end block 1.6.1.1.2.1.2.2 */
								// End offset: 0x800C0424
								// End Line: 2026
							/* end block 1.6.1.1.2.1.2 */
							// End offset: 0x800C0424
							// End Line: 2026
						/* end block 1.6.1.1.2.1 */
						// End offset: 0x800C0424
						// End Line: 2026
					/* end block 1.6.1.1.2 */
					// End offset: 0x800C0460
					// End Line: 2026
				/* end block 1.6.1.1 */
				// End offset: 0x800C0460
				// End Line: 2026

				/* begin block 1.6.1.2 */
					// Start line: 2033
					// Start offset: 0x800C0474
					// Variables:
				// 		struct POLY_FT3 *prim; // $a1
				// 		struct Transformer_zFacet *facet; // $a2
				// 		int id0; // $t1
				// 		int id1; // $t0
				// 		int id2; // $a3

					/* begin block 1.6.1.2.1 */
						// Start line: 2046
						// Start offset: 0x800C04B0
						// Variables:
					// 		int bfct; // $v1
					/* end block 1.6.1.2.1 */
					// End offset: 0x800C051C
					// End Line: 2066

					/* begin block 1.6.1.2.2 */
						// Start line: 2086
						// Start offset: 0x800C0564

						/* begin block 1.6.1.2.2.1 */
							// Start line: 2088
							// Start offset: 0x800C0564

							/* begin block 1.6.1.2.2.1.1 */
								// Start line: 2089
								// Start offset: 0x800C0588

								/* begin block 1.6.1.2.2.1.1.1 */
									// Start line: 2090
									// Start offset: 0x800C0588
									// Variables:
								// 		short *z; // $v0
								// 		short t1; // $v1
								// 		short t2; // $a0
								// 		short t3; // $v0
								/* end block 1.6.1.2.2.1.1.1 */
								// End offset: 0x800C0588
								// End Line: 2090

								/* begin block 1.6.1.2.2.1.1.2 */
									// Start line: 2090
									// Start offset: 0x800C0588
									// Variables:
								// 		short *z; // $v0
								// 		short t1; // $v1
								// 		short t2; // $a0
								// 		short t3; // $v0
								/* end block 1.6.1.2.2.1.1.2 */
								// End offset: 0x800C0588
								// End Line: 2090

								/* begin block 1.6.1.2.2.1.1.3 */
									// Start line: 2090
									// Start offset: 0x800C0588
									// Variables:
								// 		short *z; // $v0
								// 		short t1; // $v1
								// 		short t2; // $a0
								// 		short t3; // $v0
								/* end block 1.6.1.2.2.1.1.3 */
								// End offset: 0x800C0588
								// End Line: 2090

								/* begin block 1.6.1.2.2.1.1.4 */
									// Start line: 2090
									// Start offset: 0x800C0588
									// Variables:
								// 		long xy0; // $v0
								// 		long xy1; // $v1
								// 		long xy2; // $a0
								/* end block 1.6.1.2.2.1.1.4 */
								// End offset: 0x800C0588
								// End Line: 2090

								/* begin block 1.6.1.2.2.1.1.5 */
									// Start line: 2090
									// Start offset: 0x800C0588
									// Variables:
								// 		unsigned long color; // $v0
								// 		unsigned char code; // $s2
								/* end block 1.6.1.2.2.1.1.5 */
								// End offset: 0x800C0588
								// End Line: 2090

								/* begin block 1.6.1.2.2.1.1.6 */
									// Start line: 2090
									// Start offset: 0x800C0588
									// Variables:
								// 		unsigned short clut; // $v0
								// 		unsigned short tpage; // $v1
								/* end block 1.6.1.2.2.1.1.6 */
								// End offset: 0x800C0588
								// End Line: 2090
							/* end block 1.6.1.2.2.1.1 */
							// End offset: 0x800C076C
							// End Line: 2126
						/* end block 1.6.1.2.2.1 */
						// End offset: 0x800C076C
						// End Line: 2126

						/* begin block 1.6.1.2.2.2 */
							// Start line: 2130
							// Start offset: 0x800C076C

							/* begin block 1.6.1.2.2.2.1 */
								// Start line: 2131
								// Start offset: 0x800C077C

								/* begin block 1.6.1.2.2.2.1.1 */
									// Start line: 2134
									// Start offset: 0x800C077C
									// Variables:
								// 		long xy0; // $v0
								// 		long xy1; // $v1
								// 		long xy2; // $a0
								/* end block 1.6.1.2.2.2.1.1 */
								// End offset: 0x800C077C
								// End Line: 2134

								/* begin block 1.6.1.2.2.2.1.2 */
									// Start line: 2134
									// Start offset: 0x800C077C
									// Variables:
								// 		unsigned long color; // $v0
								/* end block 1.6.1.2.2.2.1.2 */
								// End offset: 0x800C077C
								// End Line: 2134

								/* begin block 1.6.1.2.2.2.1.3 */
									// Start line: 2134
									// Start offset: 0x800C077C
									// Variables:
								// 		unsigned short clut; // $v0
								// 		unsigned short tpage; // $v1
								/* end block 1.6.1.2.2.2.1.3 */
								// End offset: 0x800C077C
								// End Line: 2134
							/* end block 1.6.1.2.2.2.1 */
							// End offset: 0x800C0840
							// End Line: 2158
						/* end block 1.6.1.2.2.2 */
						// End offset: 0x800C0840
						// End Line: 2158
					/* end block 1.6.1.2.2 */
					// End offset: 0x800C0840
					// End Line: 2158

					/* begin block 1.6.1.2.3 */
						// Start line: 2163
						// Start offset: 0x800C0840

						/* begin block 1.6.1.2.3.1 */
							// Start line: 2166
							// Start offset: 0x800C0840
							// Variables:
						// 		long xy0; // $v0
						// 		long xy1; // $v1
						// 		long xy2; // $a0
						/* end block 1.6.1.2.3.1 */
						// End offset: 0x800C0840
						// End Line: 2166

						/* begin block 1.6.1.2.3.2 */
							// Start line: 2166
							// Start offset: 0x800C0840
							// Variables:
						// 		unsigned long color; // $v0
						// 		unsigned char code; // $s4
						/* end block 1.6.1.2.3.2 */
						// End offset: 0x800C0840
						// End Line: 2166

						/* begin block 1.6.1.2.3.3 */
							// Start line: 2166
							// Start offset: 0x800C0840
							// Variables:
						// 		unsigned short uv0; // $v0
						// 		unsigned short uv1; // $v1
						// 		unsigned short uv2; // $a0
						// 		struct Draw_tPixMap *pmx; // $v1
						// 		unsigned short clut; // $v0
						// 		unsigned short tpage; // $v1
						/* end block 1.6.1.2.3.3 */
						// End offset: 0x800C0840
						// End Line: 2166
					/* end block 1.6.1.2.3 */
					// End offset: 0x800C0840
					// End Line: 2166
				/* end block 1.6.1.2 */
				// End offset: 0x800C0840
				// End Line: 2166

				/* begin block 1.6.1.3 */
					// Start line: 2185
					// Start offset: 0x800C08F0
					// Variables:
				// 		struct POLY_FT3 *prim; // $a3
				// 		int overlayFlag; // $a1
				// 		short facetFlag; // $t1
				// 		struct Transformer_zFacet *facet; // $t0
				// 		int id0; // $a2
				// 		int id1; // $a1
				// 		int id2; // $a0

					/* begin block 1.6.1.3.1 */
						// Start line: 2201
						// Start offset: 0x800C092C
						// Variables:
					// 		int bfct; // $v1
					/* end block 1.6.1.3.1 */
					// End offset: 0x800C0998
					// End Line: 2221

					/* begin block 1.6.1.3.2 */
						// Start line: 2224
						// Start offset: 0x800C0998

						/* begin block 1.6.1.3.2.1 */
							// Start line: 2230
							// Start offset: 0x800C09D0
							// Variables:
						// 		int facet_flag; // $a2
						// 		int sd_otz; // $a0
						/* end block 1.6.1.3.2.1 */
						// End offset: 0x800C0A5C
						// End Line: 2247
					/* end block 1.6.1.3.2 */
					// End offset: 0x800C0AA0
					// End Line: 2253

					/* begin block 1.6.1.3.3 */
						// Start line: 2262
						// Start offset: 0x800C0AA0

						/* begin block 1.6.1.3.3.1 */
							// Start line: 2263
							// Start offset: 0x800C0AAC
							// Variables:
						// 		int index; // $v1
						// 		int which; // $a0
						// 		struct Transformer_zOverlay *facetOverlay; // $a2

							/* begin block 1.6.1.3.3.1.1 */
								// Start line: 2264
								// Start offset: 0x800C0AAC
								// Variables:
							// 		unsigned long color; // $a0
							// 		unsigned char code; // $v1
							/* end block 1.6.1.3.3.1.1 */
							// End offset: 0x800C0B2C
							// End Line: 2287

							/* begin block 1.6.1.3.3.1.2 */
								// Start line: 2287
								// Start offset: 0x800C0B2C
								// Variables:
							// 		struct Draw_tPixMap *pmx; // $v0

								/* begin block 1.6.1.3.3.1.2.1 */
									// Start line: 2287
									// Start offset: 0x800C0B2C
									// Variables:
								// 		unsigned char u0; // $v0
								// 		unsigned char u1; // $v1
								// 		unsigned char u2; // $a0
								// 		unsigned char v0; // $v0
								// 		unsigned char v1; // $v1
								// 		unsigned char v2; // $a0
								// 		unsigned char u; // $a1
								// 		unsigned char v; // $a2
								// 		unsigned short clut; // $v1
								// 		unsigned short tpage; // $v0
								/* end block 1.6.1.3.3.1.2.1 */
								// End offset: 0x800C0B2C
								// End Line: 2287
							/* end block 1.6.1.3.3.1.2 */
							// End offset: 0x800C0B2C
							// End Line: 2287
						/* end block 1.6.1.3.3.1 */
						// End offset: 0x800C0B2C
						// End Line: 2287

						/* begin block 1.6.1.3.3.2 */
							// Start line: 2297
							// Start offset: 0x800C0BB0

							/* begin block 1.6.1.3.3.2.1 */
								// Start line: 2300
								// Start offset: 0x800C0BB0
								// Variables:
							// 		unsigned long color; // $a0
							// 		unsigned char code; // $v1
							/* end block 1.6.1.3.3.2.1 */
							// End offset: 0x800C0C18
							// End Line: 2316

							/* begin block 1.6.1.3.3.2.2 */
								// Start line: 2316
								// Start offset: 0x800C0C18
								// Variables:
							// 		unsigned short uv0; // $v0
							// 		unsigned short uv1; // $v1
							// 		unsigned short uv2; // $a0
							// 		struct Draw_tPixMap *pmx; // $v1
							// 		unsigned short clut; // $v0
							// 		unsigned short tpage; // $v1
							/* end block 1.6.1.3.3.2.2 */
							// End offset: 0x800C0C18
							// End Line: 2316
						/* end block 1.6.1.3.3.2 */
						// End offset: 0x800C0C18
						// End Line: 2316
					/* end block 1.6.1.3.3 */
					// End offset: 0x800C0C18
					// End Line: 2316
				/* end block 1.6.1.3 */
				// End offset: 0x800C0C18
				// End Line: 2316

				/* begin block 1.6.1.4 */
					// Start line: 2326
					// Start offset: 0x800C0C68
					// Variables:
				// 		struct POLY_FT3 *prim; // $a3
				// 		int overlayFlag; // $a2
				// 		short facetFlag; // $t1
				// 		struct Transformer_zFacet *facet; // $t0
				// 		int id0; // $t9
				// 		int id1; // $t8
				// 		int id2; // $t3

					/* begin block 1.6.1.4.1 */
						// Start line: 2342
						// Start offset: 0x800C0CA4
						// Variables:
					// 		int bfct; // $v1
					/* end block 1.6.1.4.1 */
					// End offset: 0x800C0D10
					// End Line: 2362

					/* begin block 1.6.1.4.2 */
						// Start line: 2367
						// Start offset: 0x800C0D10

						/* begin block 1.6.1.4.2.1 */
							// Start line: 2375
							// Start offset: 0x800C0D58
							// Variables:
						// 		int facet_flag; // $a0
						// 		int sd_otz; // $a1
						/* end block 1.6.1.4.2.1 */
						// End offset: 0x800C0DD4
						// End Line: 2392
					/* end block 1.6.1.4.2 */
					// End offset: 0x800C0E18
					// End Line: 2398

					/* begin block 1.6.1.4.3 */
						// Start line: 2407
						// Start offset: 0x800C0E18

						/* begin block 1.6.1.4.3.1 */
							// Start line: 2409
							// Start offset: 0x800C0E18

							/* begin block 1.6.1.4.3.1.1 */
								// Start line: 2410
								// Start offset: 0x800C0E34

								/* begin block 1.6.1.4.3.1.1.1 */
									// Start line: 2411
									// Start offset: 0x800C0E34
									// Variables:
								// 		short *z; // $v0
								// 		short t1; // $v1
								// 		short t2; // $a0
								// 		short t3; // $v0
								/* end block 1.6.1.4.3.1.1.1 */
								// End offset: 0x800C0E34
								// End Line: 2411

								/* begin block 1.6.1.4.3.1.1.2 */
									// Start line: 2411
									// Start offset: 0x800C0E34
									// Variables:
								// 		short *z; // $v0
								// 		short t1; // $v1
								// 		short t2; // $a0
								// 		short t3; // $v0
								/* end block 1.6.1.4.3.1.1.2 */
								// End offset: 0x800C0E34
								// End Line: 2411

								/* begin block 1.6.1.4.3.1.1.3 */
									// Start line: 2411
									// Start offset: 0x800C0E34
									// Variables:
								// 		short *z; // $v0
								// 		short t1; // $v1
								// 		short t2; // $a0
								// 		short t3; // $v0
								/* end block 1.6.1.4.3.1.1.3 */
								// End offset: 0x800C0E34
								// End Line: 2411

								/* begin block 1.6.1.4.3.1.1.4 */
									// Start line: 2411
									// Start offset: 0x800C0E34
									// Variables:
								// 		long xy0; // $v0
								// 		long xy1; // $v1
								// 		long xy2; // $a0
								/* end block 1.6.1.4.3.1.1.4 */
								// End offset: 0x800C0E34
								// End Line: 2411

								/* begin block 1.6.1.4.3.1.1.5 */
									// Start line: 2411
									// Start offset: 0x800C0E34
									// Variables:
								// 		unsigned long color; // $v0
								// 		unsigned char code; // $s4
								/* end block 1.6.1.4.3.1.1.5 */
								// End offset: 0x800C0E34
								// End Line: 2411

								/* begin block 1.6.1.4.3.1.1.6 */
									// Start line: 2411
									// Start offset: 0x800C0E34
									// Variables:
								// 		unsigned short clut; // $v0
								// 		unsigned short tpage; // $v1
								/* end block 1.6.1.4.3.1.1.6 */
								// End offset: 0x800C0E34
								// End Line: 2411
							/* end block 1.6.1.4.3.1.1 */
							// End offset: 0x800C1018
							// End Line: 2447
						/* end block 1.6.1.4.3.1 */
						// End offset: 0x800C1018
						// End Line: 2447

						/* begin block 1.6.1.4.3.2 */
							// Start line: 2451
							// Start offset: 0x800C1018

							/* begin block 1.6.1.4.3.2.1 */
								// Start line: 2452
								// Start offset: 0x800C1028

								/* begin block 1.6.1.4.3.2.1.1 */
									// Start line: 2455
									// Start offset: 0x800C1028
									// Variables:
								// 		long xy0; // $v0
								// 		long xy1; // $v1
								// 		long xy2; // $a0
								/* end block 1.6.1.4.3.2.1.1 */
								// End offset: 0x800C1028
								// End Line: 2455

								/* begin block 1.6.1.4.3.2.1.2 */
									// Start line: 2455
									// Start offset: 0x800C1028
									// Variables:
								// 		unsigned long color; // $v0
								/* end block 1.6.1.4.3.2.1.2 */
								// End offset: 0x800C10A8
								// End Line: 2473

								/* begin block 1.6.1.4.3.2.1.3 */
									// Start line: 2473
									// Start offset: 0x800C10A8
									// Variables:
								// 		unsigned short clut; // $v0
								// 		unsigned short tpage; // $v1
								/* end block 1.6.1.4.3.2.1.3 */
								// End offset: 0x800C10A8
								// End Line: 2473
							/* end block 1.6.1.4.3.2.1 */
							// End offset: 0x800C1118
							// End Line: 2484
						/* end block 1.6.1.4.3.2 */
						// End offset: 0x800C1118
						// End Line: 2484
					/* end block 1.6.1.4.3 */
					// End offset: 0x800C1118
					// End Line: 2484

					/* begin block 1.6.1.4.4 */
						// Start line: 2489
						// Start offset: 0x800C1118

						/* begin block 1.6.1.4.4.1 */
							// Start line: 2490
							// Start offset: 0x800C1124
							// Variables:
						// 		int index; // $v1
						// 		int which; // $a0
						// 		struct Transformer_zOverlay *facetOverlay; // $a2

							/* begin block 1.6.1.4.4.1.1 */
								// Start line: 2491
								// Start offset: 0x800C1124
								// Variables:
							// 		long xy0; // $v0
							// 		long xy1; // $v1
							// 		long xy2; // $a0
							/* end block 1.6.1.4.4.1.1 */
							// End offset: 0x800C1124
							// End Line: 2491

							/* begin block 1.6.1.4.4.1.2 */
								// Start line: 2491
								// Start offset: 0x800C1124
								// Variables:
							// 		unsigned long color; // $v1
							// 		unsigned char code; // $a1
							/* end block 1.6.1.4.4.1.2 */
							// End offset: 0x800C11A0
							// End Line: 2511

							/* begin block 1.6.1.4.4.1.3 */
								// Start line: 2511
								// Start offset: 0x800C11A0
								// Variables:
							// 		struct Draw_tPixMap *pmx; // $v0

								/* begin block 1.6.1.4.4.1.3.1 */
									// Start line: 2511
									// Start offset: 0x800C11A0
									// Variables:
								// 		unsigned char u0; // $v0
								// 		unsigned char u1; // $v1
								// 		unsigned char u2; // $a0
								// 		unsigned char v0; // $v0
								// 		unsigned char v1; // $v1
								// 		unsigned char v2; // $a0
								// 		unsigned char u; // $a1
								// 		unsigned char v; // $a2
								// 		unsigned short clut; // $v1
								// 		unsigned short tpage; // $v0
								/* end block 1.6.1.4.4.1.3.1 */
								// End offset: 0x800C11A0
								// End Line: 2511
							/* end block 1.6.1.4.4.1.3 */
							// End offset: 0x800C11A0
							// End Line: 2511
						/* end block 1.6.1.4.4.1 */
						// End offset: 0x800C11A0
						// End Line: 2511

						/* begin block 1.6.1.4.4.2 */
							// Start line: 2521
							// Start offset: 0x800C1224

							/* begin block 1.6.1.4.4.2.1 */
								// Start line: 2524
								// Start offset: 0x800C1224
								// Variables:
							// 		long xy0; // $v0
							// 		long xy1; // $v1
							// 		long xy2; // $a0
							/* end block 1.6.1.4.4.2.1 */
							// End offset: 0x800C1224
							// End Line: 2524

							/* begin block 1.6.1.4.4.2.2 */
								// Start line: 2524
								// Start offset: 0x800C1224
								// Variables:
							// 		unsigned long color; // $v1
							// 		unsigned char code; // $a1
							/* end block 1.6.1.4.4.2.2 */
							// End offset: 0x800C1288
							// End Line: 2537

							/* begin block 1.6.1.4.4.2.3 */
								// Start line: 2537
								// Start offset: 0x800C1288
								// Variables:
							// 		unsigned short uv0; // $v0
							// 		unsigned short uv1; // $v1
							// 		unsigned short uv2; // $a0
							// 		struct Draw_tPixMap *pmx; // $v1
							// 		unsigned short clut; // $v0
							// 		unsigned short tpage; // $v1
							/* end block 1.6.1.4.4.2.3 */
							// End offset: 0x800C1288
							// End Line: 2537
						/* end block 1.6.1.4.4.2 */
						// End offset: 0x800C1288
						// End Line: 2537
					/* end block 1.6.1.4.4 */
					// End offset: 0x800C1288
					// End Line: 2537
				/* end block 1.6.1.4 */
				// End offset: 0x800C1288
				// End Line: 2537
			/* end block 1.6.1 */
			// End offset: 0x800C12CC
			// End Line: 2544
		/* end block 1.6 */
		// End offset: 0x800C12CC
		// End Line: 2544
	/* end block 1 */
	// End offset: 0x800C12CC
	// End Line: 2544

void DrawC_Prim__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache( (matrixtdef *m,coorddef *t,Transformer_zObj *obj,Transformer_zOverlay *overlay, int envmap,Draw_CarCache *sd)
{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  ushort uVar8;
  ushort uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  bool bVar12;
  long lVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 in_zero;
  undefined4 in_at;
  char cVar16;
  short sVar17;
  uint uVar18;
  Draw_tPixMap *pDVar19;
  undefined uVar20;
  int iVar21;
  ulong **ppuVar22;
  short *psVar23;
  int iVar24;
  ulong **ppuVar25;
  uint *puVar26;
  char *pcVar27;
  ushort *puVar28;
  ulong **ppuVar29;
  Transformer_zOverlay *pTVar30;
  uint uVar31;
  COORD16 *pCVar32;
  uchar *puVar33;
  Draw_CarVertex *pDVar34;
  uint uVar35;
  uint uVar36;
  uint *puVar37;
  uint *puVar38;
  ulong *puVar39;
  uint uVar40;
  char cVar41;
  char cVar42;
  uint uVar43;
  COORD16 *pCVar44;
  
  pCVar44 = obj->Nvertex;
  if ((*(int *)&sd->ePmx0 == 0) && (*(int *)&sd->ePmx1 == 0)) {
    envmap = envmap & 0xbe;
  }
  if ((envmap & 1U) != 0) {
    setCopControlWord(2,0,0);
    setCopControlWord(2,0x800,0);
    setCopControlWord(2,0x1000,0);
    setCopControlWord(2,0x1800,0);
    setCopControlWord(2,0x2000,0);
    setCopControlWord(2,0x2800,DAT_8011f4fc);
    setCopControlWord(2,0x3000,DAT_8011f500);
    setCopControlWord(2,0x3800,DAT_8011f504);
    uVar35 = (uint)obj->numVertex;
    pcVar27 = &sd->tV[0].v;
    psVar23 = &pCVar44->z;
    pCVar32 = pCVar44;
    while (uVar35 = uVar35 - 1, uVar35 != 0xffffffff) {
      sVar17 = psVar23[-1];
      sVar7 = *psVar23;
      (sd->vt0).x = pCVar32->x;
      (sd->vt0).y = sVar17;
      (sd->vt0).z = sVar7;
      setCopReg(2,in_zero,*(undefined4 *)&sd->vt0);
      setCopReg(2,in_at,*(undefined4 *)&(sd->vt0).z);
      copFunction(2,0x480012);
      lVar13 = getCopReg(2,0x19);
      (sd->tv).vx = lVar13;
      lVar13 = getCopReg(2,0x1a);
      (sd->tv).vy = lVar13;
      lVar13 = getCopReg(2,0x1b);
      (sd->tv).vz = lVar13;
      _cVar16 = (sd->tv).vz;
      cVar16 = (char)_cVar16;
      if (_cVar16 < 0) {
        cVar16 = -cVar16;
      }
      psVar23 = psVar23 + 3;
      pCVar32 = pCVar32 + 1;
      pcVar27[-1] = (char)(sd->tv).vx;
      *pcVar27 = cVar16;
      pcVar27 = pcVar27 + 8;
    }
  }
  TrsProj_SetTransPrecision__Fi(8);
  _cVar16 = m->m[3];
  iVar21 = m->m[6];
  (sd->matB).m[0] = (short)(m->m[0] >> 4);
  (sd->matB).m[1] = (short)(_cVar16 >> 4);
  (sd->matB).m[2] = (short)(iVar21 >> 4);
  _cVar16 = m->m[4];
  iVar21 = m->m[7];
  sVar17 = (short)(m->m[1] >> 4);
  (sd->matB).m[3] = sVar17;
  (sd->matB).m[4] = (short)(_cVar16 >> 4);
  (sd->matB).m[5] = (short)(iVar21 >> 4);
  _cVar16 = m->m[2];
  iVar21 = m->m[5];
  iVar24 = m->m[8];
  (sd->matB).m[3] = -sVar17;
  sVar17 = (sd->matB).m[4];
  uVar35 = iVar21 >> 4;
  (sd->matB).m[6] = (short)(_cVar16 >> 4);
  sVar7 = (sd->matB).m[5];
  (sd->matB).m[7] = (short)uVar35;
  (sd->matB).m[8] = (short)(iVar24 >> 4);
  (sd->matB).m[4] = -sVar17;
  (sd->matB).m[5] = -sVar7;
  (sd->matB).t[0] = t->x >> 10;
  (sd->matB).t[1] = -(t->y >> 10);
  (sd->matB).t[2] = t->z >> 10;
  TrsProj_ResetTransPrecision__Fv();
  setCopControlWord(2,0,*(undefined4 *)(sd->matB).m);
  setCopControlWord(2,0x800,*(undefined4 *)((sd->matB).m + 2));
  setCopControlWord(2,0x1000,*(undefined4 *)((sd->matB).m + 4));
  setCopControlWord(2,0x1800,*(undefined4 *)((sd->matB).m + 6));
  setCopControlWord(2,0x2000,*(undefined4 *)((sd->matB).m + 8));
  setCopControlWord(2,0x2800,(sd->matB).t[0]);
  setCopControlWord(2,0x3000,(sd->matB).t[1]);
  setCopControlWord(2,0x3800,(sd->matB).t[2]);
  pDVar34 = sd->tV;
  puVar28 = (ushort *)&sd->tV[0].vt.z;
  pCVar32 = obj->vertex;
  uVar36 = (uint)obj->numVertex;
  puVar26 = (uint *)&pCVar32->z;
  while( true ) {
    uVar36 = uVar36 - 1;
    uVar18 = envmap & 9;
    if (uVar36 == 0xffffffff) break;
    uVar8 = ((ushort *)puVar26)[-1];
    uVar9 = *(ushort *)puVar26;
    uVar35 = (uint)uVar9;
    puVar26 = (uint *)((ushort *)puVar26 + 3);
    psVar23 = &pCVar32->x;
    pCVar32 = pCVar32 + 1;
    (pDVar34->vt).x = *psVar23;
    puVar28[-1] = uVar8;
    *puVar28 = uVar9;
    puVar28 = puVar28 + 4;
    pDVar34 = pDVar34 + 1;
  }
  uVar36 = (uint)obj->numFacet;
  if (uVar18 == 1) {
    _cVar16 = uVar36 * 0xc;
LAB_800c0474:
    do {
      uVar18 = uVar36 - 1;
      iVar21 = _cVar16;
      do {
        do {
          do {
            uVar36 = uVar18;
            _cVar16 = iVar21 + -0xc;
            if (uVar36 == 0xffffffff) {
              return;
            }
            pcVar27 = (sd->head).cprim.MPrimPtr;
            puVar28 = (ushort *)(&obj->facet[-1].vertexId1 + iVar21);
            bVar12 = (sd->head).cprim.PrimPtr < pcVar27;
            uVar18 = uVar36 - 1;
            iVar21 = _cVar16;
          } while (!bVar12);
          ppuVar29 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)puVar28 + 3) * 2;
          ppuVar25 = &(sd->head).cprim.LastPrim + (uint)*(byte *)(puVar28 + 2) * 2;
          ppuVar22 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)puVar28 + 5) * 2;
          setCopReg(2,in_zero,ppuVar29[0x34]);
          setCopReg(2,in_at,ppuVar29[0x35]);
          setCopReg(2,(uint)bVar12,ppuVar25[0x34]);
          setCopReg(2,pcVar27,ppuVar25[0x35]);
          setCopReg(2,uVar35,ppuVar22[0x34]);
          setCopReg(2,puVar26,ppuVar22[0x35]);
          copFunction(2,0x280030);
          copFunction(2,0x1400006);
          iVar21 = getCopReg(2,0x18);
          sd->bfct = iVar21;
          iVar24 = sd->bfct;
          if ((sd->head).mirror != 0) {
            iVar24 = -iVar24;
          }
          uVar18 = uVar36 - 1;
          iVar21 = _cVar16;
        } while (iVar24 < 1);
        uVar14 = getCopReg(2,0xc);
        *(undefined4 *)&sd->dvx0 = uVar14;
        uVar14 = getCopReg(2,0xd);
        *(undefined4 *)&sd->dvx1 = uVar14;
        uVar14 = getCopReg(2,0xe);
        *(undefined4 *)&sd->dvx2 = uVar14;
        copFunction(2,0x158002d);
        iVar21 = getCopReg(2,7);
        sd->otz = iVar21;
        iVar24 = sd->otz + sd->sub_otz;
        sd->otz = iVar24;
        if (iVar24 < 0) goto LAB_800c0474;
        uVar18 = uVar36 - 1;
        iVar21 = _cVar16;
      } while (sd->sub_otSize < iVar24);
      if (((*puVar28 & 0x3f3) != 0) && (*(int *)&sd->ePmx1 != 0)) {
        pCVar32 = pCVar44 + (uint)*(byte *)((int)puVar28 + 3);
        sVar17 = pCVar32->y;
        sVar7 = pCVar32->z;
        (sd->vt0).x = pCVar32->x;
        (sd->vt0).y = sVar17;
        (sd->vt0).z = sVar7;
        pCVar32 = pCVar44 + (uint)*(byte *)(puVar28 + 2);
        sVar17 = pCVar32->y;
        sVar7 = pCVar32->z;
        (sd->vt1).x = pCVar32->x;
        (sd->vt1).y = sVar17;
        (sd->vt1).z = sVar7;
        pCVar32 = pCVar44 + (uint)*(byte *)((int)puVar28 + 5);
        sVar17 = pCVar32->y;
        sVar7 = pCVar32->z;
        (sd->vt2).x = pCVar32->x;
        (sd->vt2).y = sVar17;
        (sd->vt2).z = sVar7;
        puVar37 = (uint *)(sd->head).cprim.PrimPtr;
        iVar21 = sd->otz;
        puVar39 = sd->sub_ot;
        *(uint **)&(sd->head).cprim.PrimPtr = puVar37 + 3;
        uVar43 = (sd->drawModeOff).tag;
        uVar35 = (sd->drawModeOff).code[0];
        uVar18 = (sd->drawModeOff).code[1];
        *puVar37 = uVar43;
        puVar37[1] = uVar35;
        puVar37[2] = uVar18;
        uVar35 = (int)(puVar39 + iVar21) + 2;
        uVar18 = uVar35 & 3;
        uVar31 = (int)puVar37 + 2U & 3;
        puVar26 = (uint *)(((int)puVar37 + 2U) - uVar31);
        *puVar26 = *puVar26 & -1 << (uVar31 + 1) * 8 |
                   (*(int *)(uVar35 - uVar18) << (3 - uVar18) * 8 |
                   uVar43 & 0xffffffffU >> (uVar18 + 1) * 8) >> (3 - uVar31) * 8;
        uVar35 = (int)(puVar39 + iVar21) + 2;
        uVar18 = uVar35 & 3;
        puVar26 = (uint *)(uVar35 - uVar18);
        *puVar26 = *puVar26 & -1 << (uVar18 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar18) * 8
        ;
        puVar37 = (uint *)(sd->head).cprim.PrimPtr;
        iVar21 = sd->otz;
        puVar39 = sd->sub_ot;
        *(uint **)&(sd->head).cprim.PrimPtr = puVar37 + 8;
        uVar35 = (int)(puVar39 + iVar21) + 2;
        uVar18 = uVar35 & 3;
        *puVar37 = (*(int *)(uVar35 - uVar18) << (3 - uVar18) * 8 |
                   (uint)(puVar37 + 8) & 0xffffffffU >> (uVar18 + 1) * 8) >> 8 | 0x7000000;
        uVar35 = (int)(puVar39 + iVar21) + 2;
        uVar18 = uVar35 & 3;
        puVar26 = (uint *)(uVar35 - uVar18);
        *puVar26 = *puVar26 & -1 << (uVar18 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar18) * 8
        ;
        puVar38 = (uint *)(sd->head).cprim.PrimPtr;
        iVar21 = sd->otz;
        puVar39 = sd->sub_ot;
        *(uint **)&(sd->head).cprim.PrimPtr = puVar38 + 3;
        uVar43 = (sd->drawModeOn).tag;
        uVar35 = (sd->drawModeOn).code[0];
        uVar18 = (sd->drawModeOn).code[1];
        *puVar38 = uVar43;
        puVar38[1] = uVar35;
        puVar38[2] = uVar18;
        uVar35 = (int)(puVar39 + iVar21) + 2;
        uVar18 = uVar35 & 3;
        uVar31 = (int)puVar38 + 2U & 3;
        puVar26 = (uint *)(((int)puVar38 + 2U) - uVar31);
        *puVar26 = *puVar26 & -1 << (uVar31 + 1) * 8 |
                   (*(int *)(uVar35 - uVar18) << (3 - uVar18) * 8 |
                   uVar43 & 0xffffffffU >> (uVar18 + 1) * 8) >> (3 - uVar31) * 8;
        uVar35 = (int)(puVar39 + iVar21) + 2;
        uVar18 = uVar35 & 3;
        puVar26 = (uint *)(uVar35 - uVar18);
        *puVar26 = *puVar26 & -1 << (uVar18 + 1) * 8 | (uint)((int)puVar38 << 8) >> (3 - uVar18) * 8
        ;
        uVar35 = *(uint *)&sd->dvx1;
        uVar18 = *(uint *)&sd->dvx2;
        puVar37[2] = *(uint *)&sd->dvx0;
        puVar37[4] = uVar35;
        puVar37[6] = uVar18;
        puVar37[1] = sd->eColor0;
        *(undefined *)((int)puVar37 + 7) = 0x26;
        uVar8 = (sd->ePmx1).tpage;
        *(ushort *)((int)puVar37 + 0xe) = (sd->ePmx1).clut;
        *(ushort *)((int)puVar37 + 0x16) = uVar8;
        cVar41 = (sd->ePmx1).u0 + '@';
        cVar42 = (sd->ePmx1).v0 + *(char *)&sd->eAddZ;
        cVar16 = *(char *)&(sd->vt0).z;
        *(char *)(puVar37 + 3) = *(char *)&(sd->vt0).y + cVar41;
        *(char *)((int)puVar37 + 0xd) = cVar16 + cVar42;
        cVar16 = *(char *)&(sd->vt1).z;
        *(char *)(puVar37 + 5) = *(char *)&(sd->vt1).y + cVar41;
        *(char *)((int)puVar37 + 0x15) = cVar16 + cVar42;
        cVar16 = *(char *)&(sd->vt2).z;
        *(char *)(puVar37 + 7) = *(char *)&(sd->vt2).y + cVar41;
        *(char *)((int)puVar37 + 0x1d) = cVar16 + cVar42;
      }
      if (*(int *)&sd->ePmx0 != 0) {
        puVar37 = (uint *)(sd->head).cprim.PrimPtr;
        iVar21 = sd->otz;
        puVar39 = sd->sub_ot;
        *(uint **)&(sd->head).cprim.PrimPtr = puVar37 + 8;
        uVar35 = (int)(puVar39 + iVar21) + 2;
        uVar18 = uVar35 & 3;
        *puVar37 = (*(int *)(uVar35 - uVar18) << (3 - uVar18) * 8 |
                   (uint)(puVar37 + 8) & 0xffffffffU >> (uVar18 + 1) * 8) >> 8 | 0x7000000;
        uVar35 = (int)(puVar39 + iVar21) + 2;
        uVar18 = uVar35 & 3;
        puVar26 = (uint *)(uVar35 - uVar18);
        *puVar26 = *puVar26 & -1 << (uVar18 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar18) * 8
        ;
        uVar35 = *(uint *)&sd->dvx1;
        uVar18 = *(uint *)&sd->dvx2;
        puVar37[2] = *(uint *)&sd->dvx0;
        puVar37[4] = uVar35;
        puVar37[6] = uVar18;
        puVar37[1] = sd->eColor0;
        *(undefined *)((int)puVar37 + 7) = 0x26;
        uVar8 = (sd->ePmx0).tpage;
        *(ushort *)((int)puVar37 + 0xe) = (sd->ePmx0).clut;
        *(ushort *)((int)puVar37 + 0x16) = uVar8;
        uVar1 = (sd->ePmx0).v0;
        cVar41 = (sd->ePmx0).u0 + '@';
        cVar16 = *(char *)((int)ppuVar29 + 0xd7);
        *(char *)(puVar37 + 3) = *(char *)((int)ppuVar29 + 0xd6) + cVar41;
        *(char *)((int)puVar37 + 0xd) = cVar16 + uVar1;
        cVar16 = *(char *)((int)ppuVar25 + 0xd7);
        *(char *)(puVar37 + 5) = *(char *)((int)ppuVar25 + 0xd6) + cVar41;
        *(char *)((int)puVar37 + 0x15) = cVar16 + uVar1;
        cVar16 = *(char *)((int)ppuVar22 + 0xd7);
        *(char *)(puVar37 + 7) = *(char *)((int)ppuVar22 + 0xd6) + cVar41;
        *(char *)((int)puVar37 + 0x1d) = cVar16 + uVar1;
      }
      puVar26 = (uint *)(sd->head).cprim.PrimPtr;
      iVar21 = sd->otz;
      puVar39 = sd->sub_ot;
      *(uint **)&(sd->head).cprim.PrimPtr = puVar26 + 8;
      uVar35 = (int)(puVar39 + iVar21) + 2;
      uVar18 = uVar35 & 3;
      *puVar26 = (*(int *)(uVar35 - uVar18) << (3 - uVar18) * 8 |
                 (uint)(puVar26 + 8) & 0xffffffffU >> (uVar18 + 1) * 8) >> 8 | 0x7000000;
      uVar35 = (int)(puVar39 + iVar21) + 2;
      uVar18 = uVar35 & 3;
      puVar37 = (uint *)(uVar35 - uVar18);
      *puVar37 = *puVar37 & -1 << (uVar18 + 1) * 8 | (uint)((int)puVar26 << 8) >> (3 - uVar18) * 8;
      uVar35 = *(uint *)&sd->dvx1;
      uVar18 = *(uint *)&sd->dvx2;
      puVar26[2] = *(uint *)&sd->dvx0;
      puVar26[4] = uVar35;
      puVar26[6] = uVar18;
      puVar26[1] = sd->color;
      *(undefined *)((int)puVar26 + 7) = 0x24;
      uVar8 = sd->pmxStart[(uint)*(byte *)(puVar28 + 1)].tpage;
      *(ushort *)((int)puVar26 + 0xe) = sd->pmxStart[(uint)*(byte *)(puVar28 + 1)].clut;
      *(ushort *)((int)puVar26 + 0x16) = uVar8;
      uVar8 = puVar28[4];
      uVar9 = puVar28[5];
      uVar35 = (uint)uVar9;
      *(ushort *)(puVar26 + 3) = puVar28[3];
      *(ushort *)(puVar26 + 5) = uVar8;
      *(ushort *)(puVar26 + 7) = uVar9;
    } while( true );
  }
  if (uVar18 < 2) {
    if (uVar18 == 0) {
      if ((envmap & 2U) != 0) {
        _cVar16 = uVar36 * 0xc;
LAB_800c0250:
        do {
          iVar21 = _cVar16;
          uVar35 = uVar36 - 1;
          do {
            do {
              do {
                uVar36 = uVar35;
                _cVar16 = iVar21 + -0xc;
                if (uVar36 == 0xffffffff) {
                  return;
                }
                pcVar27 = (sd->head).cprim.MPrimPtr;
                puVar28 = (ushort *)(&obj->facet[-1].vertexId1 + iVar21);
                bVar12 = (sd->head).cprim.PrimPtr < pcVar27;
                iVar21 = _cVar16;
                uVar35 = uVar36 - 1;
              } while (!bVar12);
              ppuVar29 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)puVar28 + 3) * 2;
              ppuVar25 = &(sd->head).cprim.LastPrim + (uint)*(byte *)(puVar28 + 2) * 2;
              ppuVar22 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)puVar28 + 5) * 2;
              setCopReg(2,in_zero,ppuVar29[0x34]);
              setCopReg(2,in_at,ppuVar29[0x35]);
              setCopReg(2,(uint)bVar12,ppuVar25[0x34]);
              setCopReg(2,pcVar27,ppuVar25[0x35]);
              setCopReg(2,ppuVar22,ppuVar22[0x34]);
              setCopReg(2,ppuVar25,ppuVar22[0x35]);
              copFunction(2,0x280030);
              copFunction(2,0x1400006);
              iVar21 = getCopReg(2,0x18);
              sd->bfct = iVar21;
              iVar24 = sd->bfct;
              if ((sd->head).mirror != 0) {
                iVar24 = -iVar24;
              }
              iVar21 = _cVar16;
              uVar35 = uVar36 - 1;
            } while (iVar24 < 1);
            copFunction(2,0x158002d);
            iVar21 = getCopReg(2,7);
            sd->otz = iVar21;
            iVar24 = sd->otz + sd->sub_otz;
            sd->otz = iVar24;
            if (iVar24 < 0) goto LAB_800c0250;
            iVar21 = _cVar16;
            uVar35 = uVar36 - 1;
          } while (sd->sub_otSize < iVar24);
          puVar37 = (uint *)(sd->head).cprim.PrimPtr;
          iVar21 = sd->otz;
          puVar39 = sd->sub_ot;
          *(uint **)&(sd->head).cprim.PrimPtr = puVar37 + 8;
          uVar35 = (int)(puVar39 + iVar21) + 2;
          uVar18 = uVar35 & 3;
          *puVar37 = (*(int *)(uVar35 - uVar18) << (3 - uVar18) * 8 |
                     (uint)(puVar37 + 8) & 0xffffffffU >> (uVar18 + 1) * 8) >> 8 | 0x7000000;
          uVar35 = (int)(puVar39 + iVar21) + 2;
          uVar18 = uVar35 & 3;
          puVar26 = (uint *)(uVar35 - uVar18);
          *puVar26 = *puVar26 & -1 << (uVar18 + 1) * 8 |
                     (uint)((int)puVar37 << 8) >> (3 - uVar18) * 8;
          uVar35 = getCopReg(2,0xc);
          puVar37[2] = uVar35;
          uVar35 = getCopReg(2,0xd);
          puVar37[4] = uVar35;
          uVar35 = getCopReg(2,0xe);
          puVar37[6] = uVar35;
          uVar20 = 0x24;
          if ((*puVar28 & 1) != 0) {
            uVar20 = 0x26;
          }
          puVar37[1] = sd->color;
          *(undefined *)((int)puVar37 + 7) = uVar20;
          if ((*puVar28 & 1) == 0) {
            uVar1 = sd->offsetU0;
            uVar2 = sd->offsetV0;
            uVar8 = sd->pmxStart[(uint)*(byte *)(puVar28 + 1)].tpage;
            *(ushort *)((int)puVar37 + 0xe) = sd->pmxStart[(uint)*(byte *)(puVar28 + 1)].clut;
            *(ushort *)((int)puVar37 + 0x16) = uVar8;
            cVar16 = *(char *)(puVar28 + 4);
            cVar41 = *(char *)(puVar28 + 5);
            *(uchar *)(puVar37 + 3) = *(char *)(puVar28 + 3) + uVar1;
            *(uchar *)(puVar37 + 5) = cVar16 + uVar1;
            *(uchar *)(puVar37 + 7) = cVar41 + uVar1;
            cVar16 = *(char *)((int)puVar28 + 9);
            cVar41 = *(char *)((int)puVar28 + 0xb);
            *(char *)((int)puVar37 + 0xd) = *(char *)((int)puVar28 + 7) + uVar2;
            *(char *)((int)puVar37 + 0x15) = cVar16 + uVar2;
            *(char *)((int)puVar37 + 0x1d) = cVar41 + uVar2;
          }
          else {
            uVar8 = sd->pmxStart[(uint)*(byte *)(puVar28 + 1)].tpage;
            *(ushort *)((int)puVar37 + 0xe) = sd->pmxStart[(uint)*(byte *)(puVar28 + 1)].clut;
            *(ushort *)((int)puVar37 + 0x16) = uVar8;
            uVar8 = puVar28[4];
            uVar9 = puVar28[5];
            *(ushort *)(puVar37 + 3) = puVar28[3];
            *(ushort *)(puVar37 + 5) = uVar8;
            *(ushort *)(puVar37 + 7) = uVar9;
          }
        } while( true );
      }
      _cVar16 = uVar36 * 0xc;
LAB_800c0048:
      do {
        iVar21 = _cVar16;
        uVar35 = uVar36 - 1;
        do {
          do {
            do {
              uVar36 = uVar35;
              _cVar16 = iVar21 + -0xc;
              if (uVar36 == 0xffffffff) {
                return;
              }
              pcVar27 = (sd->head).cprim.MPrimPtr;
              puVar33 = &obj->facet[-1].vertexId1 + iVar21;
              bVar12 = (sd->head).cprim.PrimPtr < pcVar27;
              iVar21 = _cVar16;
              uVar35 = uVar36 - 1;
            } while (!bVar12);
            ppuVar29 = &(sd->head).cprim.LastPrim + (uint)puVar33[3] * 2;
            ppuVar25 = &(sd->head).cprim.LastPrim + (uint)puVar33[4] * 2;
            ppuVar22 = &(sd->head).cprim.LastPrim + (uint)puVar33[5] * 2;
            setCopReg(2,in_zero,ppuVar29[0x34]);
            setCopReg(2,in_at,ppuVar29[0x35]);
            setCopReg(2,(uint)bVar12,ppuVar25[0x34]);
            setCopReg(2,pcVar27,ppuVar25[0x35]);
            setCopReg(2,ppuVar22,ppuVar22[0x34]);
            setCopReg(2,ppuVar25,ppuVar22[0x35]);
            copFunction(2,0x280030);
            copFunction(2,0x1400006);
            iVar21 = getCopReg(2,0x18);
            sd->bfct = iVar21;
            iVar24 = sd->bfct;
            if ((sd->head).mirror != 0) {
              iVar24 = -iVar24;
            }
            iVar21 = _cVar16;
            uVar35 = uVar36 - 1;
          } while (iVar24 < 1);
          copFunction(2,0x158002d);
          iVar21 = getCopReg(2,7);
          sd->otz = iVar21;
          iVar24 = sd->otz + sd->sub_otz;
          sd->otz = iVar24;
          if (iVar24 < 0) goto LAB_800c0048;
          iVar21 = _cVar16;
          uVar35 = uVar36 - 1;
        } while (sd->sub_otSize < iVar24);
        puVar37 = (uint *)(sd->head).cprim.PrimPtr;
        iVar21 = sd->otz;
        puVar39 = sd->sub_ot;
        *(uint **)&(sd->head).cprim.PrimPtr = puVar37 + 8;
        uVar35 = (int)(puVar39 + iVar21) + 2;
        uVar18 = uVar35 & 3;
        *puVar37 = (*(int *)(uVar35 - uVar18) << (3 - uVar18) * 8 |
                   (uint)(puVar37 + 8) & 0xffffffffU >> (uVar18 + 1) * 8) >> 8 | 0x7000000;
        uVar35 = (int)(puVar39 + iVar21) + 2;
        uVar18 = uVar35 & 3;
        puVar26 = (uint *)(uVar35 - uVar18);
        *puVar26 = *puVar26 & -1 << (uVar18 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar18) * 8
        ;
        uVar35 = getCopReg(2,0xc);
        puVar37[2] = uVar35;
        uVar35 = getCopReg(2,0xd);
        puVar37[4] = uVar35;
        uVar35 = getCopReg(2,0xe);
        puVar37[6] = uVar35;
        puVar37[1] = sd->color;
        *(undefined *)((int)puVar37 + 7) = 0x24;
        pDVar19 = sd->pmxStart + (uint)puVar33[2];
        if ((pDVar19->flag & 0x7f) == 0) {
          uVar8 = pDVar19->tpage;
          *(ushort *)((int)puVar37 + 0xe) = pDVar19->clut;
          *(ushort *)((int)puVar37 + 0x16) = uVar8;
          uVar10 = *(undefined2 *)(puVar33 + 8);
          uVar11 = *(undefined2 *)(puVar33 + 10);
          *(undefined2 *)(puVar37 + 3) = *(undefined2 *)(puVar33 + 6);
          *(undefined2 *)(puVar37 + 5) = uVar10;
          *(undefined2 *)(puVar37 + 7) = uVar11;
        }
        else {
          uVar1 = sd->offsetU1;
          uVar2 = sd->offsetV1;
          if ((pDVar19->flag & 2) != 0) {
            uVar1 = sd->offsetU2;
            uVar2 = sd->offsetV2;
          }
          uVar8 = pDVar19->tpage;
          *(ushort *)((int)puVar37 + 0xe) = pDVar19->clut;
          *(ushort *)((int)puVar37 + 0x16) = uVar8;
          uVar3 = puVar33[8];
          uVar4 = puVar33[10];
          *(uchar *)(puVar37 + 3) = puVar33[6] + uVar1;
          *(uchar *)(puVar37 + 5) = uVar3 + uVar1;
          *(uchar *)(puVar37 + 7) = uVar4 + uVar1;
          uVar1 = puVar33[9];
          uVar3 = puVar33[0xb];
          *(char *)((int)puVar37 + 0xd) = puVar33[7] + uVar2;
          *(char *)((int)puVar37 + 0x15) = uVar1 + uVar2;
          *(char *)((int)puVar37 + 0x1d) = uVar3 + uVar2;
        }
      } while( true );
    }
  }
  else {
    if (uVar18 == 8) {
      _cVar16 = uVar36 * 0xc;
LAB_800c08f0:
      uVar35 = uVar36 - 1;
      iVar21 = _cVar16;
LAB_800c08f4:
      while( true ) {
        do {
          do {
            uVar36 = uVar35;
            _cVar16 = iVar21 + -0xc;
            if (uVar36 == 0xffffffff) {
              return;
            }
            pcVar27 = (sd->head).cprim.MPrimPtr;
            puVar28 = (ushort *)(&obj->facet[-1].vertexId1 + iVar21);
            bVar12 = (sd->head).cprim.PrimPtr < pcVar27;
            uVar35 = uVar36 - 1;
            iVar21 = _cVar16;
          } while (!bVar12);
          ppuVar29 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)puVar28 + 3) * 2;
          ppuVar25 = &(sd->head).cprim.LastPrim + (uint)*(byte *)(puVar28 + 2) * 2;
          ppuVar22 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)puVar28 + 5) * 2;
          setCopReg(2,in_zero,ppuVar29[0x34]);
          setCopReg(2,in_at,ppuVar29[0x35]);
          setCopReg(2,(uint)bVar12,ppuVar25[0x34]);
          setCopReg(2,pcVar27,ppuVar25[0x35]);
          setCopReg(2,ppuVar22,ppuVar22[0x34]);
          setCopReg(2,ppuVar25,ppuVar22[0x35]);
          copFunction(2,0x280030);
          copFunction(2,0x1400006);
          iVar21 = getCopReg(2,0x18);
          sd->bfct = iVar21;
          iVar24 = sd->bfct;
          if ((sd->head).mirror != 0) {
            iVar24 = -iVar24;
          }
          uVar35 = uVar36 - 1;
          iVar21 = _cVar16;
        } while (iVar24 < 1);
        copFunction(2,0x158002d);
        iVar21 = getCopReg(2,7);
        sd->otz = iVar21;
        uVar18 = (int)((uint)(ushort)(&DrawC_gOverlay)[(uint)*(byte *)(puVar28 + 1)] << 0x10) >>
                 0x10;
        if (uVar18 == 0) break;
        uVar31 = SEXT24((short)*puVar28);
        uVar18 = uVar18 & 0xff;
        if ((int)uVar31 < 0) {
          uVar18 = (int)((uint)(ushort)(&DrawC_gOverlay)[(uint)*(byte *)(puVar28 + 1)] << 0x10) >>
                   0x18;
        }
        iVar24 = sd->otz + sd->sub_otz;
        if ((uVar18 & 0x40) != 0) {
          iVar24 = iVar24 + -2;
        }
        uVar35 = uVar36 - 1;
        iVar21 = _cVar16;
        if ((-1 < iVar24) && (uVar35 = uVar36 - 1, iVar21 = _cVar16, iVar24 <= sd->sub_otSize)) {
          uVar35 = uVar31 & 0xfff;
          if (((uVar31 & 0x3f0) != 0) && (uVar18 = uVar18 & uVar35 >> 4, uVar18 != 0)) {
            while ((uVar18 & 3) == 0) {
              uVar18 = (int)uVar18 >> 2;
            }
          }
          sd->otz = iVar24;
          goto LAB_800c0aa0;
        }
      }
      iVar24 = sd->otz + sd->sub_otz;
      sd->otz = iVar24;
      if (-1 < iVar24) goto code_r0x800c0a7c;
      goto LAB_800c08f0;
    }
    if (uVar18 == 9) {
      _cVar16 = uVar36 * 0xc;
LAB_800c0c68:
      uVar18 = uVar36 - 1;
      iVar21 = _cVar16;
LAB_800c0c6c:
      while (uVar36 = uVar18, _cVar16 = iVar21 + -0xc, uVar36 != 0xffffffff) {
        pcVar27 = (sd->head).cprim.MPrimPtr;
        puVar28 = (ushort *)(&obj->facet[-1].vertexId1 + iVar21);
        bVar12 = (sd->head).cprim.PrimPtr < pcVar27;
        uVar18 = uVar36 - 1;
        iVar21 = _cVar16;
        if (bVar12) {
          ppuVar29 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)puVar28 + 3) * 2;
          ppuVar25 = &(sd->head).cprim.LastPrim + (uint)*(byte *)(puVar28 + 2) * 2;
          ppuVar22 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)puVar28 + 5) * 2;
          setCopReg(2,in_zero,ppuVar29[0x34]);
          setCopReg(2,in_at,ppuVar29[0x35]);
          setCopReg(2,(uint)bVar12,ppuVar25[0x34]);
          setCopReg(2,pcVar27,ppuVar25[0x35]);
          setCopReg(2,uVar35,ppuVar22[0x34]);
          setCopReg(2,puVar26,ppuVar22[0x35]);
          copFunction(2,0x280030);
          copFunction(2,0x1400006);
          iVar21 = getCopReg(2,0x18);
          sd->bfct = iVar21;
          iVar24 = sd->bfct;
          if ((sd->head).mirror != 0) {
            iVar24 = -iVar24;
          }
          uVar18 = uVar36 - 1;
          iVar21 = _cVar16;
          if (0 < iVar24) {
            uVar14 = getCopReg(2,0xc);
            *(undefined4 *)&sd->dvx0 = uVar14;
            uVar14 = getCopReg(2,0xd);
            *(undefined4 *)&sd->dvx1 = uVar14;
            uVar14 = getCopReg(2,0xe);
            *(undefined4 *)&sd->dvx2 = uVar14;
            copFunction(2,0x158002d);
            iVar21 = getCopReg(2,7);
            sd->otz = iVar21;
            uVar31 = (int)((uint)(ushort)(&DrawC_gOverlay)[(uint)*(byte *)(puVar28 + 1)] << 0x10) >>
                     0x10;
            if (uVar31 == 0) {
              iVar24 = sd->otz + sd->sub_otz;
              sd->otz = iVar24;
              if (-1 < iVar24) goto code_r0x800c0df4;
              goto LAB_800c0c68;
            }
            uVar35 = SEXT24((short)*puVar28);
            uVar31 = uVar31 & 0xff;
            if ((int)uVar35 < 0) {
              uVar31 = (int)((uint)(ushort)(&DrawC_gOverlay)[(uint)*(byte *)(puVar28 + 1)] << 0x10)
                       >> 0x18;
            }
            puVar26 = (uint *)(sd->otz + sd->sub_otz);
            uVar18 = uVar36 - 1;
            iVar21 = _cVar16;
            if ((-1 < (int)puVar26) &&
               (uVar18 = uVar36 - 1, iVar21 = _cVar16, (int)puVar26 <= sd->sub_otSize)) {
              uVar18 = uVar35 & 0xfff;
              if (((uVar35 & 0x3f0) != 0) && (uVar31 = uVar31 & uVar18 >> 4, uVar31 != 0)) {
                while ((uVar31 & 3) == 0) {
                  uVar31 = (int)uVar31 >> 2;
                }
              }
              *(uint **)&sd->otz = puVar26;
              goto LAB_800c0e18;
            }
          }
        }
      }
    }
  }
  return;
code_r0x800c0a7c:
  uVar35 = uVar36 - 1;
  iVar21 = _cVar16;
  if (iVar24 <= sd->sub_otSize) goto code_r0x800c0a90;
  goto LAB_800c08f4;
code_r0x800c0a90:
  uVar35 = (uint)*puVar28 & 0xfff;
LAB_800c0aa0:
  if ((uVar18 & 3) == 0) {
    puVar37 = (uint *)(sd->head).cprim.PrimPtr;
    iVar21 = sd->otz;
    puVar39 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar37 + 8;
    uVar31 = (int)(puVar39 + iVar21) + 2;
    uVar43 = uVar31 & 3;
    *puVar37 = (*(int *)(uVar31 - uVar43) << (3 - uVar43) * 8 |
               (uint)(puVar37 + 8) & 0xffffffffU >> (uVar43 + 1) * 8) >> 8 | 0x7000000;
    uVar31 = (int)(puVar39 + iVar21) + 2;
    uVar43 = uVar31 & 3;
    puVar26 = (uint *)(uVar31 - uVar43);
    *puVar26 = *puVar26 & -1 << (uVar43 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar43) * 8;
    uVar31 = getCopReg(2,0xc);
    puVar37[2] = uVar31;
    uVar31 = getCopReg(2,0xd);
    puVar37[4] = uVar31;
    uVar31 = getCopReg(2,0xe);
    puVar37[6] = uVar31;
    uVar31 = 0x808080;
    if ((uVar18 & 0x80) == 0) {
      uVar31 = sd->color;
    }
    uVar20 = 0x24;
    if ((uVar35 & 1) != 0) {
      uVar20 = 0x26;
    }
    puVar37[1] = uVar31;
    *(undefined *)((int)puVar37 + 7) = uVar20;
    uVar8 = sd->pmxStart[(uint)*(byte *)(puVar28 + 1)].tpage;
    *(ushort *)((int)puVar37 + 0xe) = sd->pmxStart[(uint)*(byte *)(puVar28 + 1)].clut;
    *(ushort *)((int)puVar37 + 0x16) = uVar8;
    uVar8 = puVar28[4];
    uVar9 = puVar28[5];
    *(ushort *)(puVar37 + 3) = puVar28[3];
    *(ushort *)(puVar37 + 5) = uVar8;
    *(ushort *)(puVar37 + 7) = uVar9;
  }
  else {
    puVar37 = (uint *)(sd->head).cprim.PrimPtr;
    pTVar30 = overlay + (uint)*(byte *)(puVar28 + 1) * 3 + ((uVar18 & 3) - 1);
    iVar21 = sd->otz;
    puVar39 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar37 + 8;
    uVar31 = (int)(puVar39 + iVar21) + 2;
    uVar43 = uVar31 & 3;
    *puVar37 = (*(int *)(uVar31 - uVar43) << (3 - uVar43) * 8 |
               (uint)(puVar37 + 8) & 0xffffffffU >> (uVar43 + 1) * 8) >> 8 | 0x7000000;
    uVar31 = (int)(puVar39 + iVar21) + 2;
    uVar43 = uVar31 & 3;
    puVar26 = (uint *)(uVar31 - uVar43);
    *puVar26 = *puVar26 & -1 << (uVar43 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar43) * 8;
    uVar31 = getCopReg(2,0xc);
    puVar37[2] = uVar31;
    uVar31 = getCopReg(2,0xd);
    puVar37[4] = uVar31;
    uVar31 = getCopReg(2,0xe);
    puVar37[6] = uVar31;
    uVar31 = 0x808080;
    if ((uVar18 & 0x80) == 0) {
      uVar31 = sd->color;
    }
    uVar20 = 0x24;
    if ((uVar35 & 1) != 0) {
      uVar20 = 0x26;
    }
    puVar37[1] = uVar31;
    *(undefined *)((int)puVar37 + 7) = uVar20;
    uVar1 = pTVar30->u;
    uVar2 = pTVar30->v;
    uVar8 = sd->pmxStart[(uint)*(byte *)(puVar28 + 1) + (int)pTVar30->offset].tpage;
    *(ushort *)((int)puVar37 + 0xe) =
         sd->pmxStart[(uint)*(byte *)(puVar28 + 1) + (int)pTVar30->offset].clut;
    *(ushort *)((int)puVar37 + 0x16) = uVar8;
    cVar16 = *(char *)(puVar28 + 4);
    cVar41 = *(char *)(puVar28 + 5);
    *(uchar *)(puVar37 + 3) = *(char *)(puVar28 + 3) + uVar1;
    *(uchar *)(puVar37 + 5) = cVar16 + uVar1;
    *(uchar *)(puVar37 + 7) = cVar41 + uVar1;
    cVar16 = *(char *)((int)puVar28 + 9);
    cVar41 = *(char *)((int)puVar28 + 0xb);
    *(char *)((int)puVar37 + 0xd) = *(char *)((int)puVar28 + 7) + uVar2;
    *(char *)((int)puVar37 + 0x15) = cVar16 + uVar2;
    *(char *)((int)puVar37 + 0x1d) = cVar41 + uVar2;
  }
  goto LAB_800c08f0;
code_r0x800c0df4:
  uVar18 = uVar36 - 1;
  iVar21 = _cVar16;
  if (iVar24 <= sd->sub_otSize) goto code_r0x800c0e08;
  goto LAB_800c0c6c;
code_r0x800c0e08:
  uVar18 = (uint)*puVar28 & 0xfff;
LAB_800c0e18:
  if (((uVar18 & 0x3f3) != 0) && (*(int *)&sd->ePmx1 != 0)) {
    pCVar32 = pCVar44 + (uint)*(byte *)((int)puVar28 + 3);
    sVar17 = pCVar32->y;
    sVar7 = pCVar32->z;
    (sd->vt0).x = pCVar32->x;
    (sd->vt0).y = sVar17;
    (sd->vt0).z = sVar7;
    pCVar32 = pCVar44 + (uint)*(byte *)(puVar28 + 2);
    sVar17 = pCVar32->y;
    sVar7 = pCVar32->z;
    (sd->vt1).x = pCVar32->x;
    (sd->vt1).y = sVar17;
    (sd->vt1).z = sVar7;
    pCVar32 = pCVar44 + (uint)*(byte *)((int)puVar28 + 5);
    sVar17 = pCVar32->y;
    sVar7 = pCVar32->z;
    (sd->vt2).x = pCVar32->x;
    (sd->vt2).y = sVar17;
    (sd->vt2).z = sVar7;
    puVar37 = (uint *)(sd->head).cprim.PrimPtr;
    iVar21 = sd->otz;
    puVar39 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar37 + 3;
    uVar40 = (sd->drawModeOff).tag;
    uVar35 = (sd->drawModeOff).code[0];
    uVar43 = (sd->drawModeOff).code[1];
    *puVar37 = uVar40;
    puVar37[1] = uVar35;
    puVar37[2] = uVar43;
    uVar35 = (int)(puVar39 + iVar21) + 2;
    uVar43 = uVar35 & 3;
    uVar15 = (int)puVar37 + 2U & 3;
    puVar26 = (uint *)(((int)puVar37 + 2U) - uVar15);
    *puVar26 = *puVar26 & -1 << (uVar15 + 1) * 8 |
               (*(int *)(uVar35 - uVar43) << (3 - uVar43) * 8 |
               uVar40 & 0xffffffffU >> (uVar43 + 1) * 8) >> (3 - uVar15) * 8;
    uVar35 = (int)(puVar39 + iVar21) + 2;
    uVar43 = uVar35 & 3;
    puVar26 = (uint *)(uVar35 - uVar43);
    *puVar26 = *puVar26 & -1 << (uVar43 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar43) * 8;
    puVar37 = (uint *)(sd->head).cprim.PrimPtr;
    iVar21 = sd->otz;
    puVar39 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar37 + 8;
    uVar35 = (int)(puVar39 + iVar21) + 2;
    uVar43 = uVar35 & 3;
    *puVar37 = (*(int *)(uVar35 - uVar43) << (3 - uVar43) * 8 |
               (uint)(puVar37 + 8) & 0xffffffffU >> (uVar43 + 1) * 8) >> 8 | 0x7000000;
    uVar35 = (int)(puVar39 + iVar21) + 2;
    uVar43 = uVar35 & 3;
    puVar26 = (uint *)(uVar35 - uVar43);
    *puVar26 = *puVar26 & -1 << (uVar43 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar43) * 8;
    puVar38 = (uint *)(sd->head).cprim.PrimPtr;
    iVar21 = sd->otz;
    puVar39 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar38 + 3;
    uVar40 = (sd->drawModeOn).tag;
    uVar35 = (sd->drawModeOn).code[0];
    uVar43 = (sd->drawModeOn).code[1];
    *puVar38 = uVar40;
    puVar38[1] = uVar35;
    puVar38[2] = uVar43;
    uVar35 = (int)(puVar39 + iVar21) + 2;
    uVar43 = uVar35 & 3;
    uVar15 = (int)puVar38 + 2U & 3;
    puVar26 = (uint *)(((int)puVar38 + 2U) - uVar15);
    *puVar26 = *puVar26 & -1 << (uVar15 + 1) * 8 |
               (*(int *)(uVar35 - uVar43) << (3 - uVar43) * 8 |
               uVar40 & 0xffffffffU >> (uVar43 + 1) * 8) >> (3 - uVar15) * 8;
    uVar35 = (int)(puVar39 + iVar21) + 2;
    uVar43 = uVar35 & 3;
    puVar26 = (uint *)(uVar35 - uVar43);
    *puVar26 = *puVar26 & -1 << (uVar43 + 1) * 8 | (uint)((int)puVar38 << 8) >> (3 - uVar43) * 8;
    uVar35 = *(uint *)&sd->dvx1;
    uVar43 = *(uint *)&sd->dvx2;
    puVar37[2] = *(uint *)&sd->dvx0;
    puVar37[4] = uVar35;
    puVar37[6] = uVar43;
    puVar37[1] = sd->eColor0;
    *(undefined *)((int)puVar37 + 7) = 0x26;
    uVar8 = (sd->ePmx1).tpage;
    *(ushort *)((int)puVar37 + 0xe) = (sd->ePmx1).clut;
    *(ushort *)((int)puVar37 + 0x16) = uVar8;
    cVar41 = (sd->ePmx1).u0 + '@';
    cVar42 = (sd->ePmx1).v0 + *(char *)&sd->eAddZ;
    cVar16 = *(char *)&(sd->vt0).z;
    *(char *)(puVar37 + 3) = *(char *)&(sd->vt0).y + cVar41;
    *(char *)((int)puVar37 + 0xd) = cVar16 + cVar42;
    cVar16 = *(char *)&(sd->vt1).z;
    *(char *)(puVar37 + 5) = *(char *)&(sd->vt1).y + cVar41;
    *(char *)((int)puVar37 + 0x15) = cVar16 + cVar42;
    cVar16 = *(char *)&(sd->vt2).z;
    *(char *)(puVar37 + 7) = *(char *)&(sd->vt2).y + cVar41;
    *(char *)((int)puVar37 + 0x1d) = cVar16 + cVar42;
  }
  if (*(int *)&sd->ePmx0 != 0) {
    puVar37 = (uint *)(sd->head).cprim.PrimPtr;
    iVar21 = sd->otz;
    puVar39 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar37 + 8;
    uVar35 = (int)(puVar39 + iVar21) + 2;
    uVar43 = uVar35 & 3;
    *puVar37 = (*(int *)(uVar35 - uVar43) << (3 - uVar43) * 8 |
               (uint)(puVar37 + 8) & 0xffffffffU >> (uVar43 + 1) * 8) >> 8 | 0x7000000;
    uVar35 = (int)(puVar39 + iVar21) + 2;
    uVar43 = uVar35 & 3;
    puVar26 = (uint *)(uVar35 - uVar43);
    *puVar26 = *puVar26 & -1 << (uVar43 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar43) * 8;
    uVar35 = *(uint *)&sd->dvx1;
    uVar43 = *(uint *)&sd->dvx2;
    puVar37[2] = *(uint *)&sd->dvx0;
    puVar37[4] = uVar35;
    puVar37[6] = uVar43;
    if ((uVar31 & 1) == 0) {
      if ((uVar18 & 4) == 0) {
        puVar37[1] = sd->eColor0;
      }
      else {
        puVar37[1] = sd->eColor1;
      }
    }
    else {
      puVar37[1] = sd->eColor2;
    }
    *(undefined *)((int)puVar37 + 7) = 0x26;
    uVar8 = (sd->ePmx0).tpage;
    *(ushort *)((int)puVar37 + 0xe) = (sd->ePmx0).clut;
    *(ushort *)((int)puVar37 + 0x16) = uVar8;
    uVar1 = (sd->ePmx0).v0;
    cVar41 = (sd->ePmx0).u0 + '@';
    cVar16 = *(char *)((int)ppuVar29 + 0xd7);
    *(char *)(puVar37 + 3) = *(char *)((int)ppuVar29 + 0xd6) + cVar41;
    *(char *)((int)puVar37 + 0xd) = cVar16 + uVar1;
    cVar16 = *(char *)((int)ppuVar25 + 0xd7);
    *(char *)(puVar37 + 5) = *(char *)((int)ppuVar25 + 0xd6) + cVar41;
    *(char *)((int)puVar37 + 0x15) = cVar16 + uVar1;
    cVar16 = *(char *)((int)ppuVar22 + 0xd7);
    *(char *)(puVar37 + 7) = *(char *)((int)ppuVar22 + 0xd6) + cVar41;
    *(char *)((int)puVar37 + 0x1d) = cVar16 + uVar1;
  }
  if ((uVar31 & 3) == 0) {
    puVar37 = (uint *)(sd->head).cprim.PrimPtr;
    iVar21 = sd->otz;
    puVar39 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar37 + 8;
    uVar35 = (int)(puVar39 + iVar21) + 2;
    uVar31 = uVar35 & 3;
    *puVar37 = (*(int *)(uVar35 - uVar31) << (3 - uVar31) * 8 |
               (uint)(puVar37 + 8) & 0xffffffffU >> (uVar31 + 1) * 8) >> 8 | 0x7000000;
    uVar35 = (int)(puVar39 + iVar21) + 2;
    uVar31 = uVar35 & 3;
    puVar26 = (uint *)(uVar35 - uVar31);
    *puVar26 = *puVar26 & -1 << (uVar31 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar31) * 8;
    uVar35 = *(uint *)&sd->dvx1;
    uVar31 = *(uint *)&sd->dvx2;
    puVar37[2] = *(uint *)&sd->dvx0;
    puVar37[4] = uVar35;
    puVar37[6] = uVar31;
    puVar26 = (uint *)0x24;
    if ((uVar18 & 1) != 0) {
      puVar26 = (uint *)0x26;
    }
    puVar37[1] = sd->color;
    *(undefined *)((int)puVar37 + 7) = (char)puVar26;
    uVar8 = sd->pmxStart[(uint)*(byte *)(puVar28 + 1)].tpage;
    *(ushort *)((int)puVar37 + 0xe) = sd->pmxStart[(uint)*(byte *)(puVar28 + 1)].clut;
    *(ushort *)((int)puVar37 + 0x16) = uVar8;
    uVar8 = puVar28[4];
    uVar9 = puVar28[5];
    uVar35 = (uint)uVar9;
    *(ushort *)(puVar37 + 3) = puVar28[3];
    *(ushort *)(puVar37 + 5) = uVar8;
    *(ushort *)(puVar37 + 7) = uVar9;
  }
  else {
    puVar37 = (uint *)(sd->head).cprim.PrimPtr;
    pTVar30 = overlay + (uint)*(byte *)(puVar28 + 1) * 3 + ((uVar31 & 3) - 1);
    iVar21 = sd->otz;
    puVar39 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar37 + 8;
    uVar35 = (int)(puVar39 + iVar21) + 2;
    uVar31 = uVar35 & 3;
    *puVar37 = (*(int *)(uVar35 - uVar31) << (3 - uVar31) * 8 |
               (uint)(puVar37 + 8) & 0xffffffffU >> (uVar31 + 1) * 8) >> 8 | 0x7000000;
    uVar35 = (int)(puVar39 + iVar21) + 2;
    uVar31 = uVar35 & 3;
    puVar26 = (uint *)(uVar35 - uVar31);
    *puVar26 = *puVar26 & -1 << (uVar31 + 1) * 8 | (uint)((int)puVar37 << 8) >> (3 - uVar31) * 8;
    uVar35 = *(uint *)&sd->dvx1;
    uVar31 = *(uint *)&sd->dvx2;
    puVar37[2] = *(uint *)&sd->dvx0;
    puVar37[4] = uVar35;
    puVar37[6] = uVar31;
    uVar20 = 0x24;
    if ((uVar18 & 1) != 0) {
      uVar20 = 0x26;
    }
    puVar37[1] = sd->color;
    *(undefined *)((int)puVar37 + 7) = uVar20;
    bVar5 = pTVar30->u;
    puVar26 = (uint *)(uint)bVar5;
    bVar6 = pTVar30->v;
    uVar8 = sd->pmxStart[(uint)*(byte *)(puVar28 + 1) + (int)pTVar30->offset].tpage;
    *(ushort *)((int)puVar37 + 0xe) =
         sd->pmxStart[(uint)*(byte *)(puVar28 + 1) + (int)pTVar30->offset].clut;
    *(ushort *)((int)puVar37 + 0x16) = uVar8;
    cVar16 = *(char *)(puVar28 + 4);
    cVar41 = *(char *)(puVar28 + 5);
    *(byte *)(puVar37 + 3) = *(char *)(puVar28 + 3) + bVar5;
    *(byte *)(puVar37 + 5) = cVar16 + bVar5;
    *(byte *)(puVar37 + 7) = cVar41 + bVar5;
    cVar16 = *(char *)((int)puVar28 + 9);
    uVar35 = (uint)*(byte *)((int)puVar28 + 0xb) + (uint)bVar6;
    *(char *)((int)puVar37 + 0xd) = *(char *)((int)puVar28 + 7) + bVar6;
    *(char *)((int)puVar37 + 0x15) = cVar16 + bVar6;
    *(undefined *)((int)puVar37 + 0x1d) = (char)uVar35;
  }
  goto LAB_800c0c68;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_DividePrim__FP7COORD16N20PUsN23P12Draw_tPixMapP13Draw_CarCache(struct COORD16 *vt0 /*$a0*/, struct COORD16 *vt1 /*$a1*/, struct COORD16 *vt2 /*$a2*/, unsigned short *u0 /*$a3*/, unsigned short *u1 /*stack 16*/, unsigned short *u2 /*stack 20*/, struct Draw_tPixMap *pmx /*stack 24*/, struct Draw_CarCache *sd /*stack 28*/)
 // line 2554, offset 0x800c12f8
	/* begin block 1 */
		// Start line: 2555
		// Start offset: 0x800C12F8
		// Variables:
	// 		struct POLY_FT3 *prim; // $v1

		/* begin block 1.1 */
			// Start line: 2562
			// Start offset: 0x800C1318
			// Variables:
		// 		int bfct; // $v1
		/* end block 1.1 */
		// End offset: 0x800C1368
		// End Line: 2576

		/* begin block 1.2 */
			// Start line: 2581
			// Start offset: 0x800C1368
			// Variables:
		// 		int clipW; // $v1
		// 		int clipH; // $t1
		/* end block 1.2 */
		// End offset: 0x800C1480
		// End Line: 2602

		/* begin block 1.3 */
			// Start line: 2613
			// Start offset: 0x800C14BC

			/* begin block 1.3.1 */
				// Start line: 2616
				// Start offset: 0x800C14BC
				// Variables:
			// 		long xy0; // $v0
			// 		long xy1; // $a0
			// 		long xy2; // $a1
			/* end block 1.3.1 */
			// End offset: 0x800C14BC
			// End Line: 2616

			/* begin block 1.3.2 */
				// Start line: 2616
				// Start offset: 0x800C14BC
				// Variables:
			// 		unsigned long color; // $v0
			// 		unsigned char code; // $v0
			/* end block 1.3.2 */
			// End offset: 0x800C14BC
			// End Line: 2616

			/* begin block 1.3.3 */
				// Start line: 2616
				// Start offset: 0x800C14BC
				// Variables:
			// 		unsigned short uv0; // $a1
			// 		unsigned short uv1; // $a0
			// 		unsigned short uv2; // $v0
			// 		unsigned short clut; // $v0
			// 		unsigned short tpage; // $a0
			/* end block 1.3.3 */
			// End offset: 0x800C1554
			// End Line: 2642
		/* end block 1.3 */
		// End offset: 0x800C1554
		// End Line: 2642
	/* end block 1 */
	// End offset: 0x800C1554
	// End Line: 2642

void DrawC_DividePrim__FP7COORD16N20PUsN23P12Draw_tPixMapP13Draw_CarCache( (COORD16 *vt0,COORD16 *vt1,COORD16 *vt2,ushort *u0,ushort *u1,ushort *u2, Draw_tPixMap *pmx,Draw_CarCache *sd)
{
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 in_zero;
  undefined4 in_at;
  char *pcVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  
  pcVar8 = (sd->head).cprim.MPrimPtr;
  bVar5 = (sd->head).cprim.PrimPtr < pcVar8;
  if (bVar5) {
    setCopReg(2,in_zero,*(undefined4 *)vt0);
    setCopReg(2,in_at,*(undefined4 *)&vt0->z);
    setCopReg(2,(uint)bVar5,*(undefined4 *)vt1);
    setCopReg(2,pcVar8,*(undefined4 *)&vt1->z);
    setCopReg(2,vt0,*(undefined4 *)vt2);
    setCopReg(2,vt1,*(undefined4 *)&vt2->z);
    copFunction(2,0x280030);
    copFunction(2,0x1400006);
    iVar9 = getCopReg(2,0x18);
    sd->bfct = iVar9;
    iVar9 = sd->bfct;
    if ((sd->head).mirror != 0) {
      iVar9 = -iVar9;
    }
    if (0 < iVar9) {
      uVar6 = getCopReg(2,0xc);
      *(undefined4 *)&sd->dvx0 = uVar6;
      uVar6 = getCopReg(2,0xd);
      *(undefined4 *)&sd->dvx1 = uVar6;
      uVar6 = getCopReg(2,0xe);
      *(undefined4 *)&sd->dvx2 = uVar6;
      sVar1 = (sd->head).clipW;
      sVar2 = (sd->head).clipH;
      if (((((((sd->dvx0 <= sVar1) || (sd->dvx1 <= sVar1)) || (sd->dvx2 <= sVar1)) &&
            (((-1 < sd->dvx0 || (-1 < sd->dvx1)) || (-1 < sd->dvx2)))) &&
           (((sd->dvy0 <= sVar2 || (sd->dvy1 <= sVar2)) || (sd->dvy2 <= sVar2)))) &&
          (((-1 < sd->dvy0 || (-1 < sd->dvy1)) || (-1 < sd->dvy2)))) &&
         (((-1 < vt0->z || (-1 < vt1->z)) || (-1 < vt2->z)))) {
        copFunction(2,0x158002d);
        iVar9 = getCopReg(2,7);
        sd->otz = iVar9;
        iVar9 = sd->otz + sd->sub_otz;
        sd->otz = iVar9;
        if ((-1 < iVar9) && (iVar9 <= sd->sub_otSize)) {
          puVar10 = (uint *)(sd->head).cprim.PrimPtr;
          iVar9 = sd->otz;
          puVar13 = sd->sub_ot;
          *(uint **)&(sd->head).cprim.PrimPtr = puVar10 + 8;
          uVar11 = (int)(puVar13 + iVar9) + 2;
          uVar12 = uVar11 & 3;
          *puVar10 = (*(int *)(uVar11 - uVar12) << (3 - uVar12) * 8 |
                     (uint)(puVar10 + 8) & 0xffffffffU >> (uVar12 + 1) * 8) >> 8 | 0x7000000;
          uVar11 = (int)(puVar13 + iVar9) + 2;
          uVar12 = uVar11 & 3;
          puVar7 = (uint *)(uVar11 - uVar12);
          *puVar7 = *puVar7 & -1 << (uVar12 + 1) * 8 | (uint)((int)puVar10 << 8) >> (3 - uVar12) * 8
          ;
          uVar11 = *(uint *)&sd->dvx1;
          uVar12 = *(uint *)&sd->dvx2;
          puVar10[2] = *(uint *)&sd->dvx0;
          puVar10[4] = uVar11;
          puVar10[6] = uVar12;
          puVar10[1] = sd->color;
          *(undefined *)((int)puVar10 + 7) = 0x24;
          uVar3 = pmx->tpage;
          *(ushort *)((int)puVar10 + 0xe) = pmx->clut;
          *(ushort *)((int)puVar10 + 0x16) = uVar3;
          uVar3 = *u1;
          uVar4 = *u2;
          *(ushort *)(puVar10 + 3) = *u0;
          *(ushort *)(puVar10 + 5) = uVar3;
          *(ushort *)(puVar10 + 7) = uVar4;
        }
      }
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_PrimClip__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache(struct matrixtdef *m /*$s0*/, struct coorddef *t /*$s4*/, struct Transformer_zObj *obj /*stack 8*/, struct Transformer_zOverlay *overlay /*$s6*/, int envmap /*stack 16*/, struct Draw_CarCache *sd /*stack 20*/)
 // line 2647, offset 0x800c155c
	/* begin block 1 */
		// Start line: 2648
		// Start offset: 0x800C155C
		// Variables:
	// 		int i; // $s2
	// 		struct COORD16 *Nvertice; // $s3

		/* begin block 1.1 */
			// Start line: 2665
			// Start offset: 0x800C15C8

			/* begin block 1.1.1 */
				// Start line: 2666
				// Start offset: 0x800C15DC
				// Variables:
			// 		struct COORD16 *vt; // $a3

				/* begin block 1.1.1.1 */
					// Start line: 2674
					// Start offset: 0x800C1648
					// Variables:
				// 		int u; // $v1
				// 		int v; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 2678
						// Start offset: 0x800C1658
						// Variables:
					// 		short t1; // $v0
					// 		short t2; // $v1
					// 		short t3; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800C1658
					// End Line: 2678
				/* end block 1.1.1.1 */
				// End offset: 0x800C16A4
				// End Line: 2684
			/* end block 1.1.1 */
			// End offset: 0x800C16BC
			// End Line: 2688
		/* end block 1.1 */
		// End offset: 0x800C16BC
		// End Line: 2688

		/* begin block 1.2 */
			// Start line: 2693
			// Start offset: 0x800C16BC
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.2 */
		// End offset: 0x800C16BC
		// End Line: 2693

		/* begin block 1.3 */
			// Start line: 2693
			// Start offset: 0x800C16BC
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.3 */
		// End offset: 0x800C16BC
		// End Line: 2693

		/* begin block 1.4 */
			// Start line: 2693
			// Start offset: 0x800C16BC
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.4 */
		// End offset: 0x800C16BC
		// End Line: 2693

		/* begin block 1.5 */
			// Start line: 2693
			// Start offset: 0x800C16BC
			// Variables:
		// 		struct COORD16 *vt; // $t0
		// 		struct PCOORD16 *tV; // $a3

			/* begin block 1.5.1 */
				// Start line: 2713
				// Start offset: 0x800C17D0
				// Variables:
			// 		int x; // $v0
			// 		int y; // $v1
			// 		int z; // $a0

				/* begin block 1.5.1.1 */
					// Start line: 2717
					// Start offset: 0x800C17DC
					// Variables:
				// 		short t1; // $v0
				// 		short t2; // $v1
				// 		short t3; // $a0
				/* end block 1.5.1.1 */
				// End offset: 0x800C17DC
				// End Line: 2717
			/* end block 1.5.1 */
			// End offset: 0x800C17DC
			// End Line: 2717
		/* end block 1.5 */
		// End offset: 0x800C1840
		// End Line: 2729

		/* begin block 1.6 */
			// Start line: 2733
			// Start offset: 0x800C1840

			/* begin block 1.6.1 */
				// Start line: 2740
				// Start offset: 0x800C18E0

				/* begin block 1.6.1.1 */
					// Start line: 2742
					// Start offset: 0x800C18E0

					/* begin block 1.6.1.1.1 */
						// Start line: 2743
						// Start offset: 0x800C18E8

						/* begin block 1.6.1.1.1.1 */
							// Start line: 2744
							// Start offset: 0x800C18F4
							// Variables:
						// 		struct POLY_FT3 *prim; // $a3
						// 		struct Transformer_zFacet *facet; // $t0
						// 		int id0; // $a2
						// 		int id1; // $a1
						// 		int id2; // $a0

							/* begin block 1.6.1.1.1.1.1 */
								// Start line: 2757
								// Start offset: 0x800C1938
								// Variables:
							// 		int bfct; // $v1
							/* end block 1.6.1.1.1.1.1 */
							// End offset: 0x800C19A4
							// End Line: 2777

							/* begin block 1.6.1.1.1.1.2 */
								// Start line: 2782
								// Start offset: 0x800C19A4
								// Variables:
							// 		int clipW; // $v1
							// 		int clipH; // $a0
							/* end block 1.6.1.1.1.1.2 */
							// End offset: 0x800C1AE8
							// End Line: 2805

							/* begin block 1.6.1.1.1.1.3 */
								// Start line: 2816
								// Start offset: 0x800C1B28

								/* begin block 1.6.1.1.1.1.3.1 */
									// Start line: 2819
									// Start offset: 0x800C1B28
									// Variables:
								// 		long xy0; // $v0
								// 		long xy1; // $v1
								// 		long xy2; // $a0
								/* end block 1.6.1.1.1.1.3.1 */
								// End offset: 0x800C1B28
								// End Line: 2819

								/* begin block 1.6.1.1.1.1.3.2 */
									// Start line: 2819
									// Start offset: 0x800C1B28
									// Variables:
								// 		unsigned long color; // $v1
								// 		unsigned char code; // $a0
								/* end block 1.6.1.1.1.1.3.2 */
								// End offset: 0x800C1B90
								// End Line: 2831

								/* begin block 1.6.1.1.1.1.3.3 */
									// Start line: 2831
									// Start offset: 0x800C1B90

									/* begin block 1.6.1.1.1.1.3.3.1 */
										// Start line: 2836
										// Start offset: 0x800C1BC0
										// Variables:
									// 		struct Draw_tPixMap *pmx; // $v1

										/* begin block 1.6.1.1.1.1.3.3.1.1 */
											// Start line: 2837
											// Start offset: 0x800C1BC0
											// Variables:
										// 		unsigned char u0; // $v0
										// 		unsigned char u1; // $v1
										// 		unsigned char u2; // $a0
										// 		unsigned char v0; // $v0
										// 		unsigned char v1; // $v1
										// 		unsigned char v2; // $a0
										// 		unsigned char u; // $a1
										// 		unsigned char v; // $a2
										// 		unsigned short clut; // $a0
										// 		unsigned short tpage; // $v0
										/* end block 1.6.1.1.1.1.3.3.1.1 */
										// End offset: 0x800C1BC0
										// End Line: 2837
									/* end block 1.6.1.1.1.1.3.3.1 */
									// End offset: 0x800C1BC0
									// End Line: 2837

									/* begin block 1.6.1.1.1.1.3.3.2 */
										// Start line: 2841
										// Start offset: 0x800C1BEC
										// Variables:
									// 		struct Draw_tPixMap *pmx; // $v1

										/* begin block 1.6.1.1.1.1.3.3.2.1 */
											// Start line: 2842
											// Start offset: 0x800C1BEC

											/* begin block 1.6.1.1.1.1.3.3.2.1.1 */
												// Start line: 2845
												// Start offset: 0x800C1C10
												// Variables:
											// 		unsigned char offsetU; // $a1
											// 		unsigned char offsetV; // $a2

												/* begin block 1.6.1.1.1.1.3.3.2.1.1.1 */
													// Start line: 2855
													// Start offset: 0x800C1C28
													// Variables:
												// 		unsigned char u0; // $v0
												// 		unsigned char u1; // $v1
												// 		unsigned char u2; // $a0
												// 		unsigned char v0; // $v0
												// 		unsigned char v1; // $v1
												// 		unsigned char v2; // $a0
												// 		unsigned short clut; // $v0
												// 		unsigned short tpage; // $v1
												/* end block 1.6.1.1.1.1.3.3.2.1.1.1 */
												// End offset: 0x800C1C28
												// End Line: 2855
											/* end block 1.6.1.1.1.1.3.3.2.1.1 */
											// End offset: 0x800C1C28
											// End Line: 2855

											/* begin block 1.6.1.1.1.1.3.3.2.1.2 */
												// Start line: 2857
												// Start offset: 0x800C1C84

												/* begin block 1.6.1.1.1.1.3.3.2.1.2.1 */
													// Start line: 2858
													// Start offset: 0x800C1C84
													// Variables:
												// 		unsigned short uv0; // $v0
												// 		unsigned short uv1; // $v1
												// 		unsigned short uv2; // $a0
												// 		unsigned short clut; // $v0
												// 		unsigned short tpage; // $v1
												/* end block 1.6.1.1.1.1.3.3.2.1.2.1 */
												// End offset: 0x800C1C84
												// End Line: 2858
											/* end block 1.6.1.1.1.1.3.3.2.1.2 */
											// End offset: 0x800C1C84
											// End Line: 2858
										/* end block 1.6.1.1.1.1.3.3.2.1 */
										// End offset: 0x800C1C84
										// End Line: 2858
									/* end block 1.6.1.1.1.1.3.3.2 */
									// End offset: 0x800C1C84
									// End Line: 2858
								/* end block 1.6.1.1.1.1.3.3 */
								// End offset: 0x800C1C84
								// End Line: 2858
							/* end block 1.6.1.1.1.1.3 */
							// End offset: 0x800C1C84
							// End Line: 2858
						/* end block 1.6.1.1.1.1 */
						// End offset: 0x800C1C84
						// End Line: 2858
					/* end block 1.6.1.1.1 */
					// End offset: 0x800C1CB0
					// End Line: 2858

					/* begin block 1.6.1.1.2 */
						// Start line: 2864
						// Start offset: 0x800C1CB0

						/* begin block 1.6.1.1.2.1 */
							// Start line: 2865
							// Start offset: 0x800C1CD4
							// Variables:
						// 		struct Transformer_zFacet *facet; // $a3
						// 		int id0; // $v0
						// 		int id1; // $v1
						// 		int id2; // $a0
						// 		struct Draw_tPixMap *pmx; // $s0

							/* begin block 1.6.1.1.2.1.1 */
								// Start line: 2867
								// Start offset: 0x800C1CE4
								// Variables:
							// 		short *z; // $v0
							// 		short t1; // $a2
							// 		short t2; // $a1
							// 		short t3; // $v0
							/* end block 1.6.1.1.2.1.1 */
							// End offset: 0x800C1CE4
							// End Line: 2867

							/* begin block 1.6.1.1.2.1.2 */
								// Start line: 2867
								// Start offset: 0x800C1CE4
								// Variables:
							// 		short *z; // $v1
							// 		short t1; // $v0
							// 		short t2; // $a1
							// 		short t3; // $v1
							/* end block 1.6.1.1.2.1.2 */
							// End offset: 0x800C1CE4
							// End Line: 2867

							/* begin block 1.6.1.1.2.1.3 */
								// Start line: 2867
								// Start offset: 0x800C1CE4
								// Variables:
							// 		short *z; // $a0
							// 		short t1; // $a1
							// 		short t2; // $a2
							// 		short t3; // $a0
							/* end block 1.6.1.1.2.1.3 */
							// End offset: 0x800C1CE4
							// End Line: 2867

							/* begin block 1.6.1.1.2.1.4 */
								// Start line: 2867
								// Start offset: 0x800C1CE4
								// Variables:
							// 		unsigned short uv0; // $v0
							// 		unsigned short uv1; // $v1
							// 		unsigned short uv2; // $a0
							/* end block 1.6.1.1.2.1.4 */
							// End offset: 0x800C1CE4
							// End Line: 2867

							/* begin block 1.6.1.1.2.1.5 */
								// Start line: 2867
								// Start offset: 0x800C1CE4

								/* begin block 1.6.1.1.2.1.5.1 */
									// Start line: 2900
									// Start offset: 0x800C1E80
									// Variables:
								// 		int u; // $a0
								// 		int v; // $a1
								/* end block 1.6.1.1.2.1.5.1 */
								// End offset: 0x800C1ED0
								// End Line: 2906
							/* end block 1.6.1.1.2.1.5 */
							// End offset: 0x800C1ED0
							// End Line: 2906
						/* end block 1.6.1.1.2.1 */
						// End offset: 0x800C1ED0
						// End Line: 2909
					/* end block 1.6.1.1.2 */
					// End offset: 0x800C2000
					// End Line: 2920
				/* end block 1.6.1.1 */
				// End offset: 0x800C2000
				// End Line: 2920

				/* begin block 1.6.1.2 */
					// Start line: 2926
					// Start offset: 0x800C2014
					// Variables:
				// 		struct POLY_FT3 *prim; // $a1
				// 		struct Transformer_zFacet *facet; // $a2
				// 		int id0; // $t1
				// 		int id1; // $t0
				// 		int id2; // $a3

					/* begin block 1.6.1.2.1 */
						// Start line: 2939
						// Start offset: 0x800C2058
						// Variables:
					// 		int bfct; // $v1
					/* end block 1.6.1.2.1 */
					// End offset: 0x800C20C4
					// End Line: 2959

					/* begin block 1.6.1.2.2 */
						// Start line: 2964
						// Start offset: 0x800C20C4
						// Variables:
					// 		int clipW; // $v1
					// 		int clipH; // $a0
					/* end block 1.6.1.2.2 */
					// End offset: 0x800C2208
					// End Line: 2987

					/* begin block 1.6.1.2.3 */
						// Start line: 2997
						// Start offset: 0x800C2244

						/* begin block 1.6.1.2.3.1 */
							// Start line: 2999
							// Start offset: 0x800C2244

							/* begin block 1.6.1.2.3.1.1 */
								// Start line: 3000
								// Start offset: 0x800C2268

								/* begin block 1.6.1.2.3.1.1.1 */
									// Start line: 3001
									// Start offset: 0x800C2268
									// Variables:
								// 		short *z; // $v0
								// 		short t1; // $v1
								// 		short t2; // $a0
								// 		short t3; // $v0
								/* end block 1.6.1.2.3.1.1.1 */
								// End offset: 0x800C2268
								// End Line: 3001

								/* begin block 1.6.1.2.3.1.1.2 */
									// Start line: 3001
									// Start offset: 0x800C2268
									// Variables:
								// 		short *z; // $v0
								// 		short t1; // $v1
								// 		short t2; // $a0
								// 		short t3; // $v0
								/* end block 1.6.1.2.3.1.1.2 */
								// End offset: 0x800C2268
								// End Line: 3001

								/* begin block 1.6.1.2.3.1.1.3 */
									// Start line: 3001
									// Start offset: 0x800C2268
									// Variables:
								// 		short *z; // $v0
								// 		short t1; // $v1
								// 		short t2; // $a0
								// 		short t3; // $v0
								/* end block 1.6.1.2.3.1.1.3 */
								// End offset: 0x800C2268
								// End Line: 3001

								/* begin block 1.6.1.2.3.1.1.4 */
									// Start line: 3001
									// Start offset: 0x800C2268
									// Variables:
								// 		long xy0; // $v0
								// 		long xy1; // $v1
								// 		long xy2; // $a0
								/* end block 1.6.1.2.3.1.1.4 */
								// End offset: 0x800C2268
								// End Line: 3001

								/* begin block 1.6.1.2.3.1.1.5 */
									// Start line: 3001
									// Start offset: 0x800C2268
									// Variables:
								// 		unsigned long color; // $v0
								// 		unsigned char code; // $t3
								/* end block 1.6.1.2.3.1.1.5 */
								// End offset: 0x800C2268
								// End Line: 3001

								/* begin block 1.6.1.2.3.1.1.6 */
									// Start line: 3001
									// Start offset: 0x800C2268
									// Variables:
								// 		unsigned short clut; // $v0
								// 		unsigned short tpage; // $v1
								/* end block 1.6.1.2.3.1.1.6 */
								// End offset: 0x800C2268
								// End Line: 3001
							/* end block 1.6.1.2.3.1.1 */
							// End offset: 0x800C244C
							// End Line: 3037
						/* end block 1.6.1.2.3.1 */
						// End offset: 0x800C244C
						// End Line: 3037

						/* begin block 1.6.1.2.3.2 */
							// Start line: 3041
							// Start offset: 0x800C244C

							/* begin block 1.6.1.2.3.2.1 */
								// Start line: 3042
								// Start offset: 0x800C245C

								/* begin block 1.6.1.2.3.2.1.1 */
									// Start line: 3045
									// Start offset: 0x800C245C
									// Variables:
								// 		long xy0; // $v0
								// 		long xy1; // $v1
								// 		long xy2; // $a0
								/* end block 1.6.1.2.3.2.1.1 */
								// End offset: 0x800C245C
								// End Line: 3045

								/* begin block 1.6.1.2.3.2.1.2 */
									// Start line: 3045
									// Start offset: 0x800C245C
									// Variables:
								// 		unsigned long color; // $v0
								/* end block 1.6.1.2.3.2.1.2 */
								// End offset: 0x800C245C
								// End Line: 3045

								/* begin block 1.6.1.2.3.2.1.3 */
									// Start line: 3045
									// Start offset: 0x800C245C
									// Variables:
								// 		unsigned short clut; // $v0
								// 		unsigned short tpage; // $v1
								/* end block 1.6.1.2.3.2.1.3 */
								// End offset: 0x800C245C
								// End Line: 3045
							/* end block 1.6.1.2.3.2.1 */
							// End offset: 0x800C2520
							// End Line: 3069
						/* end block 1.6.1.2.3.2 */
						// End offset: 0x800C2520
						// End Line: 3069
					/* end block 1.6.1.2.3 */
					// End offset: 0x800C2520
					// End Line: 3069

					/* begin block 1.6.1.2.4 */
						// Start line: 3074
						// Start offset: 0x800C2520

						/* begin block 1.6.1.2.4.1 */
							// Start line: 3077
							// Start offset: 0x800C2520
							// Variables:
						// 		long xy0; // $v0
						// 		long xy1; // $v1
						// 		long xy2; // $a0
						/* end block 1.6.1.2.4.1 */
						// End offset: 0x800C2520
						// End Line: 3077

						/* begin block 1.6.1.2.4.2 */
							// Start line: 3077
							// Start offset: 0x800C2520
							// Variables:
						// 		unsigned long color; // $v0
						// 		unsigned char code; // $s4
						/* end block 1.6.1.2.4.2 */
						// End offset: 0x800C2520
						// End Line: 3077

						/* begin block 1.6.1.2.4.3 */
							// Start line: 3077
							// Start offset: 0x800C2520
							// Variables:
						// 		unsigned short uv0; // $v0
						// 		unsigned short uv1; // $v1
						// 		unsigned short uv2; // $a0
						// 		struct Draw_tPixMap *pmx; // $v1
						// 		unsigned short clut; // $v0
						// 		unsigned short tpage; // $v1
						/* end block 1.6.1.2.4.3 */
						// End offset: 0x800C2520
						// End Line: 3077
					/* end block 1.6.1.2.4 */
					// End offset: 0x800C2520
					// End Line: 3077
				/* end block 1.6.1.2 */
				// End offset: 0x800C2520
				// End Line: 3077

				/* begin block 1.6.1.3 */
					// Start line: 3096
					// Start offset: 0x800C25D0
					// Variables:
				// 		struct POLY_FT3 *prim; // $a3
				// 		int overlayFlag; // $a1
				// 		short facetFlag; // $t2
				// 		struct Transformer_zFacet *facet; // $t0
				// 		int id0; // $a2
				// 		int id1; // $a1
				// 		int id2; // $a0

					/* begin block 1.6.1.3.1 */
						// Start line: 3112
						// Start offset: 0x800C2614
						// Variables:
					// 		int bfct; // $v1
					/* end block 1.6.1.3.1 */
					// End offset: 0x800C2680
					// End Line: 3132

					/* begin block 1.6.1.3.2 */
						// Start line: 3137
						// Start offset: 0x800C2680
						// Variables:
					// 		int clipW; // $v1
					// 		int clipH; // $a0
					/* end block 1.6.1.3.2 */
					// End offset: 0x800C27C4
					// End Line: 3160

					/* begin block 1.6.1.3.3 */
						// Start line: 3163
						// Start offset: 0x800C27C4

						/* begin block 1.6.1.3.3.1 */
							// Start line: 3169
							// Start offset: 0x800C27FC
							// Variables:
						// 		int facet_flag; // $a2
						// 		int sd_otz; // $a0
						/* end block 1.6.1.3.3.1 */
						// End offset: 0x800C2888
						// End Line: 3186
					/* end block 1.6.1.3.3 */
					// End offset: 0x800C28CC
					// End Line: 3192

					/* begin block 1.6.1.3.4 */
						// Start line: 3196
						// Start offset: 0x800C28CC

						/* begin block 1.6.1.3.4.1 */
							// Start line: 3197
							// Start offset: 0x800C28D8
							// Variables:
						// 		int index; // $v1
						// 		int which; // $a0
						// 		struct Transformer_zOverlay *facetOverlay; // $a2

							/* begin block 1.6.1.3.4.1.1 */
								// Start line: 3198
								// Start offset: 0x800C28D8
								// Variables:
							// 		long xy0; // $v0
							// 		long xy1; // $v1
							// 		long xy2; // $a0
							/* end block 1.6.1.3.4.1.1 */
							// End offset: 0x800C28D8
							// End Line: 3198

							/* begin block 1.6.1.3.4.1.2 */
								// Start line: 3198
								// Start offset: 0x800C28D8
								// Variables:
							// 		unsigned long color; // $t1
							// 		unsigned char code; // $v1
							/* end block 1.6.1.3.4.1.2 */
							// End offset: 0x800C2964
							// End Line: 3219

							/* begin block 1.6.1.3.4.1.3 */
								// Start line: 3219
								// Start offset: 0x800C2964
								// Variables:
							// 		struct Draw_tPixMap *pmx; // $v0

								/* begin block 1.6.1.3.4.1.3.1 */
									// Start line: 3219
									// Start offset: 0x800C2964
									// Variables:
								// 		unsigned char u0; // $v0
								// 		unsigned char u1; // $v1
								// 		unsigned char u2; // $a0
								// 		unsigned char v0; // $v0
								// 		unsigned char v1; // $v1
								// 		unsigned char v2; // $a0
								// 		unsigned char u; // $a1
								// 		unsigned char v; // $a2
								// 		unsigned short clut; // $v1
								// 		unsigned short tpage; // $v0
								/* end block 1.6.1.3.4.1.3.1 */
								// End offset: 0x800C2964
								// End Line: 3219
							/* end block 1.6.1.3.4.1.3 */
							// End offset: 0x800C2964
							// End Line: 3219
						/* end block 1.6.1.3.4.1 */
						// End offset: 0x800C2964
						// End Line: 3219

						/* begin block 1.6.1.3.4.2 */
							// Start line: 3229
							// Start offset: 0x800C29E8

							/* begin block 1.6.1.3.4.2.1 */
								// Start line: 3232
								// Start offset: 0x800C29E8
								// Variables:
							// 		long xy0; // $v0
							// 		long xy1; // $v1
							// 		long xy2; // $a0
							/* end block 1.6.1.3.4.2.1 */
							// End offset: 0x800C29E8
							// End Line: 3232

							/* begin block 1.6.1.3.4.2.2 */
								// Start line: 3232
								// Start offset: 0x800C29E8
								// Variables:
							// 		unsigned long color; // $a2
							// 		unsigned char code; // $v1
							/* end block 1.6.1.3.4.2.2 */
							// End offset: 0x800C2A5C
							// End Line: 3246

							/* begin block 1.6.1.3.4.2.3 */
								// Start line: 3246
								// Start offset: 0x800C2A5C
								// Variables:
							// 		unsigned short uv0; // $v0
							// 		unsigned short uv1; // $v1
							// 		unsigned short uv2; // $a0
							// 		struct Draw_tPixMap *pmx; // $v1
							// 		unsigned short clut; // $v0
							// 		unsigned short tpage; // $v1
							/* end block 1.6.1.3.4.2.3 */
							// End offset: 0x800C2A5C
							// End Line: 3246
						/* end block 1.6.1.3.4.2 */
						// End offset: 0x800C2A5C
						// End Line: 3246
					/* end block 1.6.1.3.4 */
					// End offset: 0x800C2A5C
					// End Line: 3246
				/* end block 1.6.1.3 */
				// End offset: 0x800C2A5C
				// End Line: 3246

				/* begin block 1.6.1.4 */
					// Start line: 3256
					// Start offset: 0x800C2AB4
					// Variables:
				// 		struct POLY_FT3 *prim; // $a3
				// 		int overlayFlag; // $a2
				// 		short facetFlag; // $t8
				// 		struct Transformer_zFacet *facet; // $t0
				// 		int id0; // $t3
				// 		int id1; // $t2
				// 		int id2; // $t1

					/* begin block 1.6.1.4.1 */
						// Start line: 3272
						// Start offset: 0x800C2AF8
						// Variables:
					// 		int bfct; // $v1
					/* end block 1.6.1.4.1 */
					// End offset: 0x800C2B64
					// End Line: 3292

					/* begin block 1.6.1.4.2 */
						// Start line: 3297
						// Start offset: 0x800C2B64
						// Variables:
					// 		int clipW; // $v1
					// 		int clipH; // $a0
					/* end block 1.6.1.4.2 */
					// End offset: 0x800C2CA8
					// End Line: 3320

					/* begin block 1.6.1.4.3 */
						// Start line: 3323
						// Start offset: 0x800C2CA8

						/* begin block 1.6.1.4.3.1 */
							// Start line: 3329
							// Start offset: 0x800C2CE0
							// Variables:
						// 		int facet_flag; // $a0
						// 		int sd_otz; // $a1
						/* end block 1.6.1.4.3.1 */
						// End offset: 0x800C2D5C
						// End Line: 3346
					/* end block 1.6.1.4.3 */
					// End offset: 0x800C2DA0
					// End Line: 3352

					/* begin block 1.6.1.4.4 */
						// Start line: 3357
						// Start offset: 0x800C2DC0

						/* begin block 1.6.1.4.4.1 */
							// Start line: 3359
							// Start offset: 0x800C2DC0

							/* begin block 1.6.1.4.4.1.1 */
								// Start line: 3360
								// Start offset: 0x800C2DDC

								/* begin block 1.6.1.4.4.1.1.1 */
									// Start line: 3361
									// Start offset: 0x800C2DDC
									// Variables:
								// 		short *z; // $v0
								// 		short t1; // $v1
								// 		short t2; // $a0
								// 		short t3; // $v0
								/* end block 1.6.1.4.4.1.1.1 */
								// End offset: 0x800C2DDC
								// End Line: 3361

								/* begin block 1.6.1.4.4.1.1.2 */
									// Start line: 3361
									// Start offset: 0x800C2DDC
									// Variables:
								// 		short *z; // $v0
								// 		short t1; // $v1
								// 		short t2; // $a0
								// 		short t3; // $v0
								/* end block 1.6.1.4.4.1.1.2 */
								// End offset: 0x800C2DDC
								// End Line: 3361

								/* begin block 1.6.1.4.4.1.1.3 */
									// Start line: 3361
									// Start offset: 0x800C2DDC
									// Variables:
								// 		short *z; // $v0
								// 		short t1; // $v1
								// 		short t2; // $a0
								// 		short t3; // $v0
								/* end block 1.6.1.4.4.1.1.3 */
								// End offset: 0x800C2DDC
								// End Line: 3361

								/* begin block 1.6.1.4.4.1.1.4 */
									// Start line: 3361
									// Start offset: 0x800C2DDC
									// Variables:
								// 		long xy0; // $v0
								// 		long xy1; // $v1
								// 		long xy2; // $a0
								/* end block 1.6.1.4.4.1.1.4 */
								// End offset: 0x800C2DDC
								// End Line: 3361

								/* begin block 1.6.1.4.4.1.1.5 */
									// Start line: 3361
									// Start offset: 0x800C2DDC
									// Variables:
								// 		unsigned long color; // $v0
								// 		unsigned char code; // $s5
								/* end block 1.6.1.4.4.1.1.5 */
								// End offset: 0x800C2DDC
								// End Line: 3361

								/* begin block 1.6.1.4.4.1.1.6 */
									// Start line: 3361
									// Start offset: 0x800C2DDC
									// Variables:
								// 		unsigned short clut; // $v0
								// 		unsigned short tpage; // $v1
								/* end block 1.6.1.4.4.1.1.6 */
								// End offset: 0x800C2DDC
								// End Line: 3361
							/* end block 1.6.1.4.4.1.1 */
							// End offset: 0x800C2FC0
							// End Line: 3397
						/* end block 1.6.1.4.4.1 */
						// End offset: 0x800C2FC0
						// End Line: 3397

						/* begin block 1.6.1.4.4.2 */
							// Start line: 3401
							// Start offset: 0x800C2FC0

							/* begin block 1.6.1.4.4.2.1 */
								// Start line: 3402
								// Start offset: 0x800C2FD0

								/* begin block 1.6.1.4.4.2.1.1 */
									// Start line: 3405
									// Start offset: 0x800C2FD0
									// Variables:
								// 		long xy0; // $v0
								// 		long xy1; // $v1
								// 		long xy2; // $a0
								/* end block 1.6.1.4.4.2.1.1 */
								// End offset: 0x800C2FD0
								// End Line: 3405

								/* begin block 1.6.1.4.4.2.1.2 */
									// Start line: 3405
									// Start offset: 0x800C2FD0
									// Variables:
								// 		unsigned long color; // $v0
								/* end block 1.6.1.4.4.2.1.2 */
								// End offset: 0x800C3050
								// End Line: 3423

								/* begin block 1.6.1.4.4.2.1.3 */
									// Start line: 3423
									// Start offset: 0x800C3050
									// Variables:
								// 		unsigned short clut; // $v0
								// 		unsigned short tpage; // $v1
								/* end block 1.6.1.4.4.2.1.3 */
								// End offset: 0x800C3050
								// End Line: 3423
							/* end block 1.6.1.4.4.2.1 */
							// End offset: 0x800C30C0
							// End Line: 3434
						/* end block 1.6.1.4.4.2 */
						// End offset: 0x800C30C0
						// End Line: 3434
					/* end block 1.6.1.4.4 */
					// End offset: 0x800C30C0
					// End Line: 3434

					/* begin block 1.6.1.4.5 */
						// Start line: 3439
						// Start offset: 0x800C30C0

						/* begin block 1.6.1.4.5.1 */
							// Start line: 3440
							// Start offset: 0x800C30CC
							// Variables:
						// 		int index; // $v1
						// 		int which; // $a0
						// 		struct Transformer_zOverlay *facetOverlay; // $a2

							/* begin block 1.6.1.4.5.1.1 */
								// Start line: 3441
								// Start offset: 0x800C30CC
								// Variables:
							// 		long xy0; // $v0
							// 		long xy1; // $v1
							// 		long xy2; // $a0
							/* end block 1.6.1.4.5.1.1 */
							// End offset: 0x800C30CC
							// End Line: 3441

							/* begin block 1.6.1.4.5.1.2 */
								// Start line: 3441
								// Start offset: 0x800C30CC
								// Variables:
							// 		unsigned long color; // $v1
							// 		unsigned char code; // $a1
							/* end block 1.6.1.4.5.1.2 */
							// End offset: 0x800C3148
							// End Line: 3461

							/* begin block 1.6.1.4.5.1.3 */
								// Start line: 3467
								// Start offset: 0x800C315C
								// Variables:
							// 		struct Draw_tPixMap *pmx; // $v0

								/* begin block 1.6.1.4.5.1.3.1 */
									// Start line: 3468
									// Start offset: 0x800C315C
									// Variables:
								// 		unsigned char u0; // $v0
								// 		unsigned char u1; // $v1
								// 		unsigned char u2; // $a0
								// 		unsigned char v0; // $v0
								// 		unsigned char v1; // $v1
								// 		unsigned char v2; // $a0
								// 		unsigned char u; // $a1
								// 		unsigned char v; // $a2
								// 		unsigned short clut; // $v1
								// 		unsigned short tpage; // $v0
								/* end block 1.6.1.4.5.1.3.1 */
								// End offset: 0x800C315C
								// End Line: 3468
							/* end block 1.6.1.4.5.1.3 */
							// End offset: 0x800C315C
							// End Line: 3468
						/* end block 1.6.1.4.5.1 */
						// End offset: 0x800C315C
						// End Line: 3468

						/* begin block 1.6.1.4.5.2 */
							// Start line: 3473
							// Start offset: 0x800C31D8

							/* begin block 1.6.1.4.5.2.1 */
								// Start line: 3476
								// Start offset: 0x800C31D8
								// Variables:
							// 		long xy0; // $v0
							// 		long xy1; // $v1
							// 		long xy2; // $a0
							/* end block 1.6.1.4.5.2.1 */
							// End offset: 0x800C31D8
							// End Line: 3476

							/* begin block 1.6.1.4.5.2.2 */
								// Start line: 3476
								// Start offset: 0x800C31D8
								// Variables:
							// 		unsigned long color; // $v1
							// 		unsigned char code; // $a1
							/* end block 1.6.1.4.5.2.2 */
							// End offset: 0x800C323C
							// End Line: 3489

							/* begin block 1.6.1.4.5.2.3 */
								// Start line: 3489
								// Start offset: 0x800C323C
								// Variables:
							// 		unsigned short uv0; // $v0
							// 		unsigned short uv1; // $v1
							// 		unsigned short uv2; // $a0
							// 		struct Draw_tPixMap *pmx; // $v1
							// 		unsigned short clut; // $v0
							// 		unsigned short tpage; // $v1
							/* end block 1.6.1.4.5.2.3 */
							// End offset: 0x800C323C
							// End Line: 3489
						/* end block 1.6.1.4.5.2 */
						// End offset: 0x800C323C
						// End Line: 3489
					/* end block 1.6.1.4.5 */
					// End offset: 0x800C323C
					// End Line: 3489
				/* end block 1.6.1.4 */
				// End offset: 0x800C323C
				// End Line: 3489
			/* end block 1.6.1 */
			// End offset: 0x800C3280
			// End Line: 3496
		/* end block 1.6 */
		// End offset: 0x800C3280
		// End Line: 3496
	/* end block 1 */
	// End offset: 0x800C3280
	// End Line: 3496

void DrawC_PrimClip__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache( (matrixtdef *m,coorddef *t,Transformer_zObj *obj,Transformer_zOverlay *overlay, int envmap,Draw_CarCache *sd)
{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 in_zero;
  undefined4 in_at;
  char cVar14;
  long lVar15;
  int iVar16;
  Draw_CarVertex *pDVar17;
  uint uVar18;
  undefined uVar19;
  int iVar20;
  ulong **ppuVar21;
  uchar uVar22;
  byte bVar23;
  short *psVar24;
  ulong **ppuVar25;
  Draw_tPixMap *pmx;
  uint *puVar26;
  uchar uVar27;
  char *pcVar28;
  ulong **ppuVar29;
  ushort *u2;
  Transformer_zOverlay *pTVar30;
  uint uVar31;
  Draw_CarVertex *pDVar32;
  uchar *puVar33;
  COORD16 *vt2;
  uint uVar34;
  uint *puVar35;
  uint *puVar36;
  ulong *puVar37;
  uint uVar38;
  char cVar39;
  char cVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  COORD16 *vt1;
  ushort *u2_00;
  ushort *u1;
  COORD16 *vt2_00;
  
  vt1 = obj->Nvertex;
  if ((*(int *)&sd->ePmx0 == 0) && (*(int *)&sd->ePmx1 == 0)) {
    envmap = envmap & 0xbe;
  }
  if ((envmap & 1U) != 0) {
    setCopControlWord(2,0,0);
    setCopControlWord(2,0x800,0);
    setCopControlWord(2,0x1000,0);
    setCopControlWord(2,0x1800,0);
    setCopControlWord(2,0x2000,0);
    setCopControlWord(2,0x2800,DAT_8011f4fc);
    setCopControlWord(2,0x3000,DAT_8011f500);
    setCopControlWord(2,0x3800,DAT_8011f504);
    pcVar28 = &sd->tV[0].v;
    psVar24 = &vt1->z;
    uVar41 = (uint)obj->numVertex;
    vt2 = vt1;
    while (uVar41 = uVar41 - 1, uVar41 != 0xffffffff) {
      sVar4 = psVar24[-1];
      sVar5 = *psVar24;
      (sd->vt0).x = vt2->x;
      (sd->vt0).y = sVar4;
      (sd->vt0).z = sVar5;
      setCopReg(2,in_zero,*(undefined4 *)&sd->vt0);
      setCopReg(2,in_at,*(undefined4 *)&(sd->vt0).z);
      copFunction(2,0x480012);
      lVar15 = getCopReg(2,0x19);
      (sd->tv).vx = lVar15;
      lVar15 = getCopReg(2,0x1a);
      (sd->tv).vy = lVar15;
      lVar15 = getCopReg(2,0x1b);
      (sd->tv).vz = lVar15;
      _cVar14 = (sd->tv).vz;
      cVar14 = (char)_cVar14;
      if (_cVar14 < 0) {
        cVar14 = -cVar14;
      }
      psVar24 = psVar24 + 3;
      vt2 = vt2 + 1;
      pcVar28[-1] = (char)(sd->tv).vx;
      *pcVar28 = cVar14;
      pcVar28 = pcVar28 + 8;
    }
  }
  TrsProj_SetTransPrecision__Fi(8);
  _cVar14 = m->m[3];
  iVar20 = m->m[6];
  (sd->matB).m[0] = (short)(m->m[0] >> 4);
  (sd->matB).m[1] = (short)(_cVar14 >> 4);
  (sd->matB).m[2] = (short)(iVar20 >> 4);
  _cVar14 = m->m[4];
  iVar20 = m->m[7];
  (sd->matB).m[3] = (short)(m->m[1] >> 4);
  (sd->matB).m[4] = (short)(_cVar14 >> 4);
  (sd->matB).m[5] = (short)(iVar20 >> 4);
  _cVar14 = m->m[5];
  uVar41 = m->m[8] >> 4;
  (sd->matB).m[6] = (short)(m->m[2] >> 4);
  (sd->matB).m[7] = (short)(_cVar14 >> 4);
  (sd->matB).m[8] = (short)uVar41;
  (sd->matB).t[0] = t->x >> 10;
  (sd->matB).t[1] = t->y >> 10;
  (sd->matB).t[2] = t->z >> 10;
  TrsProj_ResetTransPrecision__Fv();
  setCopControlWord(2,0,*(undefined4 *)(sd->matB).m);
  setCopControlWord(2,0x800,*(undefined4 *)((sd->matB).m + 2));
  setCopControlWord(2,0x1000,*(undefined4 *)((sd->matB).m + 4));
  setCopControlWord(2,0x1800,*(undefined4 *)((sd->matB).m + 6));
  setCopControlWord(2,0x2000,*(undefined4 *)((sd->matB).m + 8));
  setCopControlWord(2,0x2800,(sd->matB).t[0]);
  setCopControlWord(2,0x3000,(sd->matB).t[1]);
  setCopControlWord(2,0x3800,(sd->matB).t[2]);
  pDVar32 = sd->tV;
  puVar26 = (uint *)&sd->tV[0].vt.z;
  vt2 = obj->vertex;
  uVar42 = (uint)obj->numVertex;
  psVar24 = &vt2->z;
  while (uVar42 = uVar42 - 1, uVar42 != 0xffffffff) {
    sVar4 = psVar24[-1];
    sVar5 = *psVar24;
    (pDVar32->vt).x = vt2->x;
    ((short *)puVar26)[-1] = sVar4;
    *(short *)puVar26 = sVar5;
    setCopReg(2,in_zero,*(undefined4 *)&pDVar32->vt);
    setCopReg(2,in_at,*(undefined4 *)&(pDVar32->vt).z);
    copFunction(2,0x480012);
    lVar15 = getCopReg(2,0x19);
    (sd->tv).vx = lVar15;
    lVar15 = getCopReg(2,0x1a);
    (sd->tv).vy = lVar15;
    lVar15 = getCopReg(2,0x1b);
    (sd->tv).vz = lVar15;
    psVar24 = psVar24 + 3;
    lVar15 = (sd->tv).vy;
    uVar41 = (sd->tv).vz;
    vt2 = vt2 + 1;
    (pDVar32->vt).x = (short)(sd->tv).vx;
    ((short *)puVar26)[-1] = (short)lVar15;
    *(short *)puVar26 = (short)uVar41;
    puVar26 = (uint *)((short *)puVar26 + 4);
    pDVar32 = pDVar32 + 1;
  }
  setCopControlWord(2,0,DrawC_gScreenMat);
  setCopControlWord(2,0x800,DAT_8011f4cc);
  setCopControlWord(2,0x1000,DAT_8011f4d0);
  setCopControlWord(2,0x1800,DAT_8011f4d4);
  setCopControlWord(2,0x2000,DAT_8011f4d8);
  setCopControlWord(2,0x2800,DAT_8011f4dc);
  setCopControlWord(2,0x3000,DAT_8011f4e0);
  setCopControlWord(2,0x3800,DAT_8011f4e4);
  uVar43 = (uint)obj->numFacet;
  uVar42 = envmap & 9;
  if (uVar42 == 1) {
    _cVar14 = uVar43 * 0xc;
LAB_800c2014:
    do {
      iVar20 = _cVar14;
      uVar42 = uVar43 - 1;
      do {
        do {
          do {
            do {
              uVar43 = uVar42;
              _cVar14 = iVar20 + -0xc;
              if (uVar43 == 0xffffffff) {
                return;
              }
              pcVar28 = (sd->head).cprim.MPrimPtr;
              u2 = (ushort *)(&obj->facet[-1].vertexId1 + iVar20);
              bVar12 = (sd->head).cprim.PrimPtr < pcVar28;
              iVar20 = _cVar14;
              uVar42 = uVar43 - 1;
            } while (!bVar12);
            ppuVar29 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)u2 + 3) * 2;
            ppuVar25 = &(sd->head).cprim.LastPrim + (uint)*(byte *)(u2 + 2) * 2;
            ppuVar21 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)u2 + 5) * 2;
            setCopReg(2,in_zero,ppuVar29[0x34]);
            setCopReg(2,in_at,ppuVar29[0x35]);
            setCopReg(2,(uint)bVar12,ppuVar25[0x34]);
            setCopReg(2,pcVar28,ppuVar25[0x35]);
            setCopReg(2,uVar41,ppuVar21[0x34]);
            setCopReg(2,puVar26,ppuVar21[0x35]);
            copFunction(2,0x280030);
            copFunction(2,0x1400006);
            iVar20 = getCopReg(2,0x18);
            sd->bfct = iVar20;
            iVar16 = sd->bfct;
            if ((sd->head).mirror != 0) {
              iVar16 = -iVar16;
            }
            iVar20 = _cVar14;
            uVar42 = uVar43 - 1;
          } while (iVar16 < 1);
          uVar13 = getCopReg(2,0xc);
          *(undefined4 *)&sd->dvx0 = uVar13;
          uVar13 = getCopReg(2,0xd);
          *(undefined4 *)&sd->dvx1 = uVar13;
          uVar13 = getCopReg(2,0xe);
          *(undefined4 *)&sd->dvx2 = uVar13;
          sVar4 = *(short *)(ppuVar25 + 0x35);
          sVar5 = *(short *)(ppuVar21 + 0x35);
          (sd->vt0).z = *(short *)(ppuVar29 + 0x35);
          (sd->vt1).z = sVar4;
          (sd->vt2).z = sVar5;
          sVar4 = (sd->head).clipW;
          uVar41 = SEXT24((sd->head).clipH);
        } while ((((((sVar4 < sd->dvx0) && (sVar4 < sd->dvx1)) &&
                   (iVar20 = _cVar14, uVar42 = uVar43 - 1, sVar4 < sd->dvx2)) ||
                  (((sd->dvx0 < 0 && (sd->dvx1 < 0)) &&
                   (iVar20 = _cVar14, uVar42 = uVar43 - 1, sd->dvx2 < 0)))) ||
                 ((((int)uVar41 < (int)sd->dvy0 && ((int)uVar41 < (int)sd->dvy1)) &&
                  (iVar20 = _cVar14, uVar42 = uVar43 - 1, (int)uVar41 < (int)sd->dvy2)))) ||
                ((((sd->dvy0 < 0 && (sd->dvy1 < 0)) &&
                  (iVar20 = _cVar14, uVar42 = uVar43 - 1, sd->dvy2 < 0)) ||
                 ((((sd->vt0).z < 0 && ((sd->vt1).z < 0)) &&
                  (iVar20 = _cVar14, uVar42 = uVar43 - 1, (sd->vt2).z < 0))))));
        copFunction(2,0x158002d);
        iVar20 = getCopReg(2,7);
        sd->otz = iVar20;
        iVar16 = sd->otz + sd->sub_otz;
        sd->otz = iVar16;
        if (iVar16 < 0) goto LAB_800c2014;
        iVar20 = _cVar14;
        uVar42 = uVar43 - 1;
      } while (sd->sub_otSize < iVar16);
      if (((*u2 & 0x3f3) != 0) && (*(int *)&sd->ePmx1 != 0)) {
        vt2 = vt1 + (uint)*(byte *)((int)u2 + 3);
        sVar4 = vt2->y;
        sVar5 = vt2->z;
        (sd->vt0).x = vt2->x;
        (sd->vt0).y = sVar4;
        (sd->vt0).z = sVar5;
        vt2 = vt1 + (uint)*(byte *)(u2 + 2);
        sVar4 = vt2->y;
        sVar5 = vt2->z;
        (sd->vt1).x = vt2->x;
        (sd->vt1).y = sVar4;
        (sd->vt1).z = sVar5;
        vt2 = vt1 + (uint)*(byte *)((int)u2 + 5);
        sVar4 = vt2->y;
        sVar5 = vt2->z;
        (sd->vt2).x = vt2->x;
        (sd->vt2).y = sVar4;
        (sd->vt2).z = sVar5;
        puVar35 = (uint *)(sd->head).cprim.PrimPtr;
        iVar20 = sd->otz;
        puVar37 = sd->sub_ot;
        *(uint **)&(sd->head).cprim.PrimPtr = puVar35 + 3;
        uVar18 = (sd->drawModeOff).tag;
        uVar41 = (sd->drawModeOff).code[0];
        uVar42 = (sd->drawModeOff).code[1];
        *puVar35 = uVar18;
        puVar35[1] = uVar41;
        puVar35[2] = uVar42;
        uVar41 = (int)(puVar37 + iVar20) + 2;
        uVar42 = uVar41 & 3;
        uVar31 = (int)puVar35 + 2U & 3;
        puVar26 = (uint *)(((int)puVar35 + 2U) - uVar31);
        *puVar26 = *puVar26 & -1 << (uVar31 + 1) * 8 |
                   (*(int *)(uVar41 - uVar42) << (3 - uVar42) * 8 |
                   uVar18 & 0xffffffffU >> (uVar42 + 1) * 8) >> (3 - uVar31) * 8;
        uVar41 = (int)(puVar37 + iVar20) + 2;
        uVar42 = uVar41 & 3;
        puVar26 = (uint *)(uVar41 - uVar42);
        *puVar26 = *puVar26 & -1 << (uVar42 + 1) * 8 | (uint)((int)puVar35 << 8) >> (3 - uVar42) * 8
        ;
        puVar35 = (uint *)(sd->head).cprim.PrimPtr;
        iVar20 = sd->otz;
        puVar37 = sd->sub_ot;
        *(uint **)&(sd->head).cprim.PrimPtr = puVar35 + 8;
        uVar41 = (int)(puVar37 + iVar20) + 2;
        uVar42 = uVar41 & 3;
        *puVar35 = (*(int *)(uVar41 - uVar42) << (3 - uVar42) * 8 |
                   (uint)(puVar35 + 8) & 0xffffffffU >> (uVar42 + 1) * 8) >> 8 | 0x7000000;
        uVar41 = (int)(puVar37 + iVar20) + 2;
        uVar42 = uVar41 & 3;
        puVar26 = (uint *)(uVar41 - uVar42);
        *puVar26 = *puVar26 & -1 << (uVar42 + 1) * 8 | (uint)((int)puVar35 << 8) >> (3 - uVar42) * 8
        ;
        puVar36 = (uint *)(sd->head).cprim.PrimPtr;
        iVar20 = sd->otz;
        puVar37 = sd->sub_ot;
        *(uint **)&(sd->head).cprim.PrimPtr = puVar36 + 3;
        uVar18 = (sd->drawModeOn).tag;
        uVar41 = (sd->drawModeOn).code[0];
        uVar42 = (sd->drawModeOn).code[1];
        *puVar36 = uVar18;
        puVar36[1] = uVar41;
        puVar36[2] = uVar42;
        uVar41 = (int)(puVar37 + iVar20) + 2;
        uVar42 = uVar41 & 3;
        uVar31 = (int)puVar36 + 2U & 3;
        puVar26 = (uint *)(((int)puVar36 + 2U) - uVar31);
        *puVar26 = *puVar26 & -1 << (uVar31 + 1) * 8 |
                   (*(int *)(uVar41 - uVar42) << (3 - uVar42) * 8 |
                   uVar18 & 0xffffffffU >> (uVar42 + 1) * 8) >> (3 - uVar31) * 8;
        uVar41 = (int)(puVar37 + iVar20) + 2;
        uVar42 = uVar41 & 3;
        puVar26 = (uint *)(uVar41 - uVar42);
        *puVar26 = *puVar26 & -1 << (uVar42 + 1) * 8 | (uint)((int)puVar36 << 8) >> (3 - uVar42) * 8
        ;
        uVar41 = *(uint *)&sd->dvx1;
        uVar42 = *(uint *)&sd->dvx2;
        puVar35[2] = *(uint *)&sd->dvx0;
        puVar35[4] = uVar41;
        puVar35[6] = uVar42;
        puVar35[1] = sd->eColor0;
        *(undefined *)((int)puVar35 + 7) = 0x26;
        uVar6 = (sd->ePmx1).tpage;
        *(ushort *)((int)puVar35 + 0xe) = (sd->ePmx1).clut;
        *(ushort *)((int)puVar35 + 0x16) = uVar6;
        cVar39 = (sd->ePmx1).u0 + '@';
        cVar40 = (sd->ePmx1).v0 + *(char *)&sd->eAddZ;
        cVar14 = *(char *)&(sd->vt0).z;
        *(char *)(puVar35 + 3) = *(char *)&(sd->vt0).y + cVar39;
        *(char *)((int)puVar35 + 0xd) = cVar14 + cVar40;
        cVar14 = *(char *)&(sd->vt1).z;
        *(char *)(puVar35 + 5) = *(char *)&(sd->vt1).y + cVar39;
        *(char *)((int)puVar35 + 0x15) = cVar14 + cVar40;
        cVar14 = *(char *)&(sd->vt2).z;
        *(char *)(puVar35 + 7) = *(char *)&(sd->vt2).y + cVar39;
        *(char *)((int)puVar35 + 0x1d) = cVar14 + cVar40;
      }
      if (*(int *)&sd->ePmx0 != 0) {
        puVar35 = (uint *)(sd->head).cprim.PrimPtr;
        iVar20 = sd->otz;
        puVar37 = sd->sub_ot;
        *(uint **)&(sd->head).cprim.PrimPtr = puVar35 + 8;
        uVar41 = (int)(puVar37 + iVar20) + 2;
        uVar42 = uVar41 & 3;
        *puVar35 = (*(int *)(uVar41 - uVar42) << (3 - uVar42) * 8 |
                   (uint)(puVar35 + 8) & 0xffffffffU >> (uVar42 + 1) * 8) >> 8 | 0x7000000;
        uVar41 = (int)(puVar37 + iVar20) + 2;
        uVar42 = uVar41 & 3;
        puVar26 = (uint *)(uVar41 - uVar42);
        *puVar26 = *puVar26 & -1 << (uVar42 + 1) * 8 | (uint)((int)puVar35 << 8) >> (3 - uVar42) * 8
        ;
        uVar41 = *(uint *)&sd->dvx1;
        uVar42 = *(uint *)&sd->dvx2;
        puVar35[2] = *(uint *)&sd->dvx0;
        puVar35[4] = uVar41;
        puVar35[6] = uVar42;
        puVar35[1] = sd->eColor0;
        *(undefined *)((int)puVar35 + 7) = 0x26;
        uVar6 = (sd->ePmx0).tpage;
        *(ushort *)((int)puVar35 + 0xe) = (sd->ePmx0).clut;
        *(ushort *)((int)puVar35 + 0x16) = uVar6;
        uVar22 = (sd->ePmx0).v0;
        cVar39 = (sd->ePmx0).u0 + '@';
        cVar14 = *(char *)((int)ppuVar29 + 0xd7);
        *(char *)(puVar35 + 3) = *(char *)((int)ppuVar29 + 0xd6) + cVar39;
        *(char *)((int)puVar35 + 0xd) = cVar14 + uVar22;
        cVar14 = *(char *)((int)ppuVar25 + 0xd7);
        *(char *)(puVar35 + 5) = *(char *)((int)ppuVar25 + 0xd6) + cVar39;
        *(char *)((int)puVar35 + 0x15) = cVar14 + uVar22;
        cVar14 = *(char *)((int)ppuVar21 + 0xd7);
        *(char *)(puVar35 + 7) = *(char *)((int)ppuVar21 + 0xd6) + cVar39;
        *(char *)((int)puVar35 + 0x1d) = cVar14 + uVar22;
      }
      puVar26 = (uint *)(sd->head).cprim.PrimPtr;
      iVar20 = sd->otz;
      puVar37 = sd->sub_ot;
      *(uint **)&(sd->head).cprim.PrimPtr = puVar26 + 8;
      uVar41 = (int)(puVar37 + iVar20) + 2;
      uVar42 = uVar41 & 3;
      *puVar26 = (*(int *)(uVar41 - uVar42) << (3 - uVar42) * 8 |
                 (uint)(puVar26 + 8) & 0xffffffffU >> (uVar42 + 1) * 8) >> 8 | 0x7000000;
      uVar41 = (int)(puVar37 + iVar20) + 2;
      uVar42 = uVar41 & 3;
      puVar35 = (uint *)(uVar41 - uVar42);
      *puVar35 = *puVar35 & -1 << (uVar42 + 1) * 8 | (uint)((int)puVar26 << 8) >> (3 - uVar42) * 8;
      uVar41 = *(uint *)&sd->dvx1;
      uVar42 = *(uint *)&sd->dvx2;
      puVar26[2] = *(uint *)&sd->dvx0;
      puVar26[4] = uVar41;
      puVar26[6] = uVar42;
      puVar26[1] = sd->color;
      *(undefined *)((int)puVar26 + 7) = 0x24;
      uVar6 = sd->pmxStart[(uint)*(byte *)(u2 + 1)].tpage;
      *(ushort *)((int)puVar26 + 0xe) = sd->pmxStart[(uint)*(byte *)(u2 + 1)].clut;
      *(ushort *)((int)puVar26 + 0x16) = uVar6;
      uVar6 = u2[4];
      uVar7 = u2[5];
      uVar41 = (uint)uVar7;
      *(ushort *)(puVar26 + 3) = u2[3];
      *(ushort *)(puVar26 + 5) = uVar6;
      *(ushort *)(puVar26 + 7) = uVar7;
    } while( true );
  }
  if (uVar42 < 2) {
    if (uVar42 == 0) {
      vt1 = &sd->vt3;
      if ((envmap & 0x20U) == 0) {
        _cVar14 = uVar43 * 0xc;
LAB_800c18f4:
        do {
          iVar20 = _cVar14;
          uVar41 = uVar43 - 1;
          do {
            do {
              do {
                do {
                  uVar43 = uVar41;
                  _cVar14 = iVar20 + -0xc;
                  if (uVar43 == 0xffffffff) {
                    return;
                  }
                  pcVar28 = (sd->head).cprim.MPrimPtr;
                  u2 = (ushort *)(&obj->facet[-1].vertexId1 + iVar20);
                  bVar12 = (sd->head).cprim.PrimPtr < pcVar28;
                  iVar20 = _cVar14;
                  uVar41 = uVar43 - 1;
                } while (!bVar12);
                ppuVar29 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)u2 + 3) * 2;
                ppuVar25 = &(sd->head).cprim.LastPrim + (uint)*(byte *)(u2 + 2) * 2;
                ppuVar21 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)u2 + 5) * 2;
                setCopReg(2,in_zero,ppuVar29[0x34]);
                setCopReg(2,in_at,ppuVar29[0x35]);
                setCopReg(2,(uint)bVar12,ppuVar25[0x34]);
                setCopReg(2,pcVar28,ppuVar25[0x35]);
                setCopReg(2,ppuVar21,ppuVar21[0x34]);
                setCopReg(2,ppuVar25,ppuVar21[0x35]);
                copFunction(2,0x280030);
                copFunction(2,0x1400006);
                iVar20 = getCopReg(2,0x18);
                sd->bfct = iVar20;
                iVar16 = sd->bfct;
                if ((sd->head).mirror != 0) {
                  iVar16 = -iVar16;
                }
                iVar20 = _cVar14;
                uVar41 = uVar43 - 1;
              } while (iVar16 < 1);
              uVar13 = getCopReg(2,0xc);
              *(undefined4 *)&sd->dvx0 = uVar13;
              uVar13 = getCopReg(2,0xd);
              *(undefined4 *)&sd->dvx1 = uVar13;
              uVar13 = getCopReg(2,0xe);
              *(undefined4 *)&sd->dvx2 = uVar13;
              sVar4 = *(short *)(ppuVar25 + 0x35);
              sVar5 = *(short *)(ppuVar21 + 0x35);
              (sd->vt0).z = *(short *)(ppuVar29 + 0x35);
              (sd->vt1).z = sVar4;
              (sd->vt2).z = sVar5;
              sVar4 = (sd->head).clipW;
              sVar5 = (sd->head).clipH;
            } while (((((sVar4 < sd->dvx0) && (sVar4 < sd->dvx1)) &&
                      (iVar20 = _cVar14, uVar41 = uVar43 - 1, sVar4 < sd->dvx2)) ||
                     (((sd->dvx0 < 0 && (sd->dvx1 < 0)) &&
                      (iVar20 = _cVar14, uVar41 = uVar43 - 1, sd->dvx2 < 0)))) ||
                    ((((sVar5 < sd->dvy0 && (sVar5 < sd->dvy1)) &&
                      (iVar20 = _cVar14, uVar41 = uVar43 - 1, sVar5 < sd->dvy2)) ||
                     ((((sd->dvy0 < 0 && (sd->dvy1 < 0)) &&
                       (iVar20 = _cVar14, uVar41 = uVar43 - 1, sd->dvy2 < 0)) ||
                      ((((sd->vt0).z < 0 && ((sd->vt1).z < 0)) &&
                       (iVar20 = _cVar14, uVar41 = uVar43 - 1, (sd->vt2).z < 0))))))));
            copFunction(2,0x158002d);
            iVar20 = getCopReg(2,7);
            sd->otz = iVar20;
            iVar16 = sd->otz + sd->sub_otz;
            sd->otz = iVar16;
            if (iVar16 < 0) goto LAB_800c18f4;
            iVar20 = _cVar14;
            uVar41 = uVar43 - 1;
          } while (sd->sub_otSize < iVar16);
          puVar35 = (uint *)(sd->head).cprim.PrimPtr;
          iVar20 = sd->otz;
          puVar37 = sd->sub_ot;
          *(uint **)&(sd->head).cprim.PrimPtr = puVar35 + 8;
          uVar41 = (int)(puVar37 + iVar20) + 2;
          uVar42 = uVar41 & 3;
          *puVar35 = (*(int *)(uVar41 - uVar42) << (3 - uVar42) * 8 |
                     (uint)(puVar35 + 8) & 0xffffffffU >> (uVar42 + 1) * 8) >> 8 | 0x7000000;
          uVar41 = (int)(puVar37 + iVar20) + 2;
          uVar42 = uVar41 & 3;
          puVar26 = (uint *)(uVar41 - uVar42);
          *puVar26 = *puVar26 & -1 << (uVar42 + 1) * 8 |
                     (uint)((int)puVar35 << 8) >> (3 - uVar42) * 8;
          uVar41 = *(uint *)&sd->dvx0;
          uVar42 = *(uint *)&sd->dvx1;
          puVar35[6] = *(uint *)&sd->dvx2;
          puVar35[2] = uVar41;
          puVar35[4] = uVar42;
          uVar19 = 0x24;
          if ((*u2 & 1) != 0) {
            uVar19 = 0x26;
          }
          puVar35[1] = sd->color;
          *(undefined *)((int)puVar35 + 7) = uVar19;
          if (((envmap & 2U) == 0) || ((*u2 & 1) != 0)) {
            pmx = sd->pmxStart + (uint)*(byte *)(u2 + 1);
            if ((pmx->flag & 0x7f) == 0) {
              uVar6 = pmx->tpage;
              *(ushort *)((int)puVar35 + 0xe) = pmx->clut;
              *(ushort *)((int)puVar35 + 0x16) = uVar6;
              uVar6 = u2[4];
              uVar7 = u2[5];
              *(ushort *)(puVar35 + 3) = u2[3];
              *(ushort *)(puVar35 + 5) = uVar6;
              *(ushort *)(puVar35 + 7) = uVar7;
              goto LAB_800c18f4;
            }
            uVar22 = sd->offsetU1;
            uVar27 = sd->offsetV1;
            if ((pmx->flag & 2) != 0) {
              uVar22 = sd->offsetU2;
              uVar27 = sd->offsetV2;
            }
            uVar6 = pmx->tpage;
            *(ushort *)((int)puVar35 + 0xe) = pmx->clut;
            *(ushort *)((int)puVar35 + 0x16) = uVar6;
          }
          else {
            uVar22 = sd->offsetU0;
            uVar27 = sd->offsetV0;
            uVar6 = sd->pmxStart[(uint)*(byte *)(u2 + 1)].tpage;
            *(ushort *)((int)puVar35 + 0xe) = sd->pmxStart[(uint)*(byte *)(u2 + 1)].clut;
            *(ushort *)((int)puVar35 + 0x16) = uVar6;
          }
          cVar14 = *(char *)(u2 + 4);
          cVar39 = *(char *)(u2 + 5);
          *(uchar *)(puVar35 + 3) = *(char *)(u2 + 3) + uVar22;
          *(uchar *)(puVar35 + 5) = cVar14 + uVar22;
          *(uchar *)(puVar35 + 7) = cVar39 + uVar22;
          cVar14 = *(char *)((int)u2 + 9);
          cVar39 = *(char *)((int)u2 + 0xb);
          *(char *)((int)puVar35 + 0xd) = *(char *)((int)u2 + 7) + uVar27;
          *(char *)((int)puVar35 + 0x15) = cVar14 + uVar27;
          *(char *)((int)puVar35 + 0x1d) = cVar39 + uVar27;
        } while( true );
      }
      vt2_00 = &sd->vt5;
      u1 = (ushort *)&sd->u3;
      u2_00 = (ushort *)&sd->u5;
      vt2 = &sd->vt4;
      u2 = (ushort *)&sd->u4;
      _cVar14 = uVar43 * 0xc;
      while( true ) {
        uVar43 = uVar43 - 1;
        if (uVar43 == 0xffffffff) break;
        puVar33 = &obj->facet[-1].vertexId1 + _cVar14;
        bVar23 = puVar33[5];
        bVar1 = puVar33[2];
        pDVar32 = sd->tV + (uint)puVar33[3];
        pDVar17 = sd->tV + (uint)puVar33[4];
        sVar4 = (pDVar32->vt).y;
        sVar5 = (pDVar32->vt).z;
        (sd->vt0).x = (pDVar32->vt).x;
        (sd->vt0).y = sVar4;
        (sd->vt0).z = sVar5;
        sVar4 = (pDVar17->vt).y;
        sVar5 = (pDVar17->vt).z;
        pDVar32 = sd->tV + (uint)bVar23;
        (sd->vt1).x = (pDVar17->vt).x;
        (sd->vt1).y = sVar4;
        (sd->vt1).z = sVar5;
        sVar8 = (pDVar32->vt).x;
        sVar9 = (pDVar32->vt).y;
        sVar4 = (sd->vt0).x;
        sVar5 = (sd->vt1).x;
        sVar2 = (sd->vt0).y;
        (sd->vt2).z = (pDVar32->vt).z;
        sVar3 = (sd->vt1).y;
        (sd->vt3).x = (short)((int)sVar4 + (int)sVar5 + 1 >> 1);
        sVar4 = (sd->vt0).z;
        (sd->vt2).x = sVar8;
        (sd->vt2).y = sVar9;
        sVar5 = (sd->vt1).z;
        (sd->vt3).y = (short)((int)sVar2 + (int)sVar3 + 1 >> 1);
        sVar2 = (sd->vt1).x;
        sVar3 = (sd->vt2).x;
        (sd->vt3).z = (short)((int)sVar4 + (int)sVar5 + 1 >> 1);
        pmx = sd->pmxStart;
        (sd->vt4).x = (short)((int)sVar2 + (int)sVar3 + 1 >> 1);
        sVar4 = (sd->vt2).z;
        sVar5 = (sd->vt1).z;
        (sd->vt4).y = (short)((int)(sd->vt1).y + (int)(sd->vt2).y + 1 >> 1);
        sVar2 = (sd->vt2).x;
        sVar3 = (sd->vt0).x;
        (sd->vt4).z = (short)((int)sVar5 + (int)sVar4 + 1 >> 1);
        sVar4 = (sd->vt2).y;
        sVar5 = (sd->vt0).y;
        (sd->vt5).x = (short)((int)sVar2 + (int)sVar3 + 1 >> 1);
        sVar2 = (sd->vt2).z;
        sVar3 = (sd->vt0).z;
        (sd->vt5).y = (short)((int)sVar4 + (int)sVar5 + 1 >> 1);
        (sd->vt5).z = (short)((int)sVar2 + (int)sVar3 + 1 >> 1);
        uVar10 = *(undefined2 *)(puVar33 + 8);
        uVar11 = *(undefined2 *)(puVar33 + 10);
        *(undefined2 *)&sd->u0 = *(undefined2 *)(puVar33 + 6);
        *(undefined2 *)&sd->u1 = uVar10;
        *(undefined2 *)&sd->u2 = uVar11;
        pmx = pmx + (uint)bVar1;
        if ((envmap & 2U) != 0) {
          uVar22 = sd->offsetU0;
          uVar27 = sd->offsetV0;
          sd->u0 = sd->u0 + uVar22;
          sd->v0 = sd->v0 + uVar27;
          sd->u1 = sd->u1 + uVar22;
          sd->v1 = sd->v1 + uVar27;
          sd->u2 = sd->u2 + uVar22;
          sd->v2 = sd->v2 + uVar27;
        }
        sd->u3 = (uchar)((int)((uint)sd->u0 + (uint)sd->u1 + 1) >> 1);
        sd->v3 = (uchar)((int)((uint)sd->v0 + (uint)sd->v1 + 1) >> 1);
        sd->u4 = (uchar)((int)((uint)sd->u1 + (uint)sd->u2 + 1) >> 1);
        sd->v4 = (uchar)((int)((uint)sd->v1 + (uint)sd->v2 + 1) >> 1);
        sd->u5 = (uchar)((int)((uint)sd->u2 + (uint)sd->u0 + 1) >> 1);
        sd->v5 = (uchar)((int)((uint)sd->v2 + (uint)sd->v0 + 1) >> 1);
        DrawC_DividePrim__FP7COORD16N20PUsN23P12Draw_tPixMapP13Draw_CarCache
                  (&sd->vt0,vt1,vt2_00,(ushort *)&sd->u0,u1,u2_00,pmx,sd);
        DrawC_DividePrim__FP7COORD16N20PUsN23P12Draw_tPixMapP13Draw_CarCache
                  (vt1,&sd->vt1,vt2,u1,(ushort *)&sd->u1,u2,pmx,sd);
        DrawC_DividePrim__FP7COORD16N20PUsN23P12Draw_tPixMapP13Draw_CarCache
                  (vt2_00,vt2,&sd->vt2,u2_00,u2,(ushort *)&sd->u2,pmx,sd);
        DrawC_DividePrim__FP7COORD16N20PUsN23P12Draw_tPixMapP13Draw_CarCache
                  (vt2_00,vt1,vt2,u2_00,u1,u2,pmx,sd);
        _cVar14 = _cVar14 + -0xc;
      }
    }
  }
  else {
    if (uVar42 == 8) {
      _cVar14 = uVar43 * 0xc;
LAB_800c25d0:
      iVar20 = _cVar14;
      uVar41 = uVar43 - 1;
LAB_800c25d4:
      while( true ) {
        do {
          do {
            do {
              uVar43 = uVar41;
              _cVar14 = iVar20 + -0xc;
              if (uVar43 == 0xffffffff) {
                return;
              }
              pcVar28 = (sd->head).cprim.MPrimPtr;
              u2 = (ushort *)(&obj->facet[-1].vertexId1 + iVar20);
              bVar12 = (sd->head).cprim.PrimPtr < pcVar28;
              iVar20 = _cVar14;
              uVar41 = uVar43 - 1;
            } while (!bVar12);
            ppuVar29 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)u2 + 3) * 2;
            ppuVar25 = &(sd->head).cprim.LastPrim + (uint)*(byte *)(u2 + 2) * 2;
            ppuVar21 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)u2 + 5) * 2;
            setCopReg(2,in_zero,ppuVar29[0x34]);
            setCopReg(2,in_at,ppuVar29[0x35]);
            setCopReg(2,(uint)bVar12,ppuVar25[0x34]);
            setCopReg(2,pcVar28,ppuVar25[0x35]);
            setCopReg(2,ppuVar21,ppuVar21[0x34]);
            setCopReg(2,ppuVar25,ppuVar21[0x35]);
            copFunction(2,0x280030);
            copFunction(2,0x1400006);
            iVar20 = getCopReg(2,0x18);
            sd->bfct = iVar20;
            iVar16 = sd->bfct;
            if ((sd->head).mirror != 0) {
              iVar16 = -iVar16;
            }
            iVar20 = _cVar14;
            uVar41 = uVar43 - 1;
          } while (iVar16 < 1);
          uVar13 = getCopReg(2,0xc);
          *(undefined4 *)&sd->dvx0 = uVar13;
          uVar13 = getCopReg(2,0xd);
          *(undefined4 *)&sd->dvx1 = uVar13;
          uVar13 = getCopReg(2,0xe);
          *(undefined4 *)&sd->dvx2 = uVar13;
          sVar4 = *(short *)(ppuVar25 + 0x35);
          sVar5 = *(short *)(ppuVar21 + 0x35);
          (sd->vt0).z = *(short *)(ppuVar29 + 0x35);
          (sd->vt1).z = sVar4;
          (sd->vt2).z = sVar5;
          sVar4 = (sd->head).clipW;
          sVar5 = (sd->head).clipH;
        } while ((((((sVar4 < sd->dvx0) && (sVar4 < sd->dvx1)) &&
                   (iVar20 = _cVar14, uVar41 = uVar43 - 1, sVar4 < sd->dvx2)) ||
                  (((sd->dvx0 < 0 && (sd->dvx1 < 0)) &&
                   (iVar20 = _cVar14, uVar41 = uVar43 - 1, sd->dvx2 < 0)))) ||
                 ((((sVar5 < sd->dvy0 && (sVar5 < sd->dvy1)) &&
                   (iVar20 = _cVar14, uVar41 = uVar43 - 1, sVar5 < sd->dvy2)) ||
                  (((sd->dvy0 < 0 && (sd->dvy1 < 0)) &&
                   (iVar20 = _cVar14, uVar41 = uVar43 - 1, sd->dvy2 < 0)))))) ||
                ((((sd->vt0).z < 0 && ((sd->vt1).z < 0)) &&
                 (iVar20 = _cVar14, uVar41 = uVar43 - 1, (sd->vt2).z < 0))));
        copFunction(2,0x158002d);
        iVar20 = getCopReg(2,7);
        sd->otz = iVar20;
        uVar42 = (int)((uint)(ushort)(&DrawC_gOverlay)[(uint)*(byte *)(u2 + 1)] << 0x10) >> 0x10;
        if (uVar42 == 0) break;
        uVar31 = SEXT24((short)*u2);
        uVar42 = uVar42 & 0xff;
        if ((int)uVar31 < 0) {
          uVar42 = (int)((uint)(ushort)(&DrawC_gOverlay)[(uint)*(byte *)(u2 + 1)] << 0x10) >> 0x18;
        }
        iVar16 = sd->otz + sd->sub_otz;
        if ((uVar42 & 0x40) != 0) {
          iVar16 = iVar16 + -2;
        }
        iVar20 = _cVar14;
        uVar41 = uVar43 - 1;
        if ((-1 < iVar16) && (iVar20 = _cVar14, uVar41 = uVar43 - 1, iVar16 <= sd->sub_otSize)) {
          uVar41 = uVar31 & 0xfff;
          if (((uVar31 & 0x3f0) != 0) && (uVar42 = uVar42 & uVar41 >> 4, uVar42 != 0)) {
            while ((uVar42 & 3) == 0) {
              uVar42 = (int)uVar42 >> 2;
            }
          }
          sd->otz = iVar16;
          goto LAB_800c28cc;
        }
      }
      iVar16 = sd->otz + sd->sub_otz;
      sd->otz = iVar16;
      if (-1 < iVar16) goto code_r0x800c28a8;
      goto LAB_800c25d0;
    }
    if (uVar42 == 9) {
      _cVar14 = uVar43 * 0xc;
LAB_800c2ab4:
      uVar42 = uVar43 - 1;
      iVar20 = _cVar14;
LAB_800c2ab8:
      do {
        do {
          do {
            do {
              uVar43 = uVar42;
              _cVar14 = iVar20 + -0xc;
              if (uVar43 == 0xffffffff) {
                return;
              }
              pcVar28 = (sd->head).cprim.MPrimPtr;
              u2 = (ushort *)(&obj->facet[-1].vertexId1 + iVar20);
              bVar12 = (sd->head).cprim.PrimPtr < pcVar28;
              uVar42 = uVar43 - 1;
              iVar20 = _cVar14;
            } while (!bVar12);
            ppuVar29 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)u2 + 3) * 2;
            ppuVar25 = &(sd->head).cprim.LastPrim + (uint)*(byte *)(u2 + 2) * 2;
            ppuVar21 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)u2 + 5) * 2;
            setCopReg(2,in_zero,ppuVar29[0x34]);
            setCopReg(2,in_at,ppuVar29[0x35]);
            setCopReg(2,(uint)bVar12,ppuVar25[0x34]);
            setCopReg(2,pcVar28,ppuVar25[0x35]);
            setCopReg(2,uVar41,ppuVar21[0x34]);
            setCopReg(2,puVar26,ppuVar21[0x35]);
            copFunction(2,0x280030);
            copFunction(2,0x1400006);
            iVar20 = getCopReg(2,0x18);
            sd->bfct = iVar20;
            iVar16 = sd->bfct;
            if ((sd->head).mirror != 0) {
              iVar16 = -iVar16;
            }
            uVar42 = uVar43 - 1;
            iVar20 = _cVar14;
          } while (iVar16 < 1);
          uVar13 = getCopReg(2,0xc);
          *(undefined4 *)&sd->dvx0 = uVar13;
          uVar13 = getCopReg(2,0xd);
          *(undefined4 *)&sd->dvx1 = uVar13;
          uVar13 = getCopReg(2,0xe);
          *(undefined4 *)&sd->dvx2 = uVar13;
          sVar4 = *(short *)(ppuVar25 + 0x35);
          sVar5 = *(short *)(ppuVar21 + 0x35);
          (sd->vt0).z = *(short *)(ppuVar29 + 0x35);
          (sd->vt1).z = sVar4;
          (sd->vt2).z = sVar5;
          sVar4 = (sd->head).clipW;
          uVar41 = SEXT24((sd->head).clipH);
        } while (((((((sVar4 < sd->dvx0) && (sVar4 < sd->dvx1)) &&
                    (uVar42 = uVar43 - 1, iVar20 = _cVar14, sVar4 < sd->dvx2)) ||
                   (((sd->dvx0 < 0 && (sd->dvx1 < 0)) &&
                    (uVar42 = uVar43 - 1, iVar20 = _cVar14, sd->dvx2 < 0)))) ||
                  ((((int)uVar41 < (int)sd->dvy0 && ((int)uVar41 < (int)sd->dvy1)) &&
                   (uVar42 = uVar43 - 1, iVar20 = _cVar14, (int)uVar41 < (int)sd->dvy2)))) ||
                 (((sd->dvy0 < 0 && (sd->dvy1 < 0)) &&
                  (uVar42 = uVar43 - 1, iVar20 = _cVar14, sd->dvy2 < 0)))) ||
                ((((sd->vt0).z < 0 && ((sd->vt1).z < 0)) &&
                 (uVar42 = uVar43 - 1, iVar20 = _cVar14, (sd->vt2).z < 0))));
        copFunction(2,0x158002d);
        iVar20 = getCopReg(2,7);
        sd->otz = iVar20;
        uVar31 = (int)((uint)(ushort)(&DrawC_gOverlay)[(uint)*(byte *)(u2 + 1)] << 0x10) >> 0x10;
        if (uVar31 == 0) {
          iVar16 = sd->otz + sd->sub_otz;
          sd->otz = iVar16;
          if (iVar16 < 0) goto LAB_800c2ab4;
          uVar42 = uVar43 - 1;
          iVar20 = _cVar14;
          if (sd->sub_otSize < iVar16) goto LAB_800c2ab8;
          uVar18 = (uint)*u2 & 0xfff;
        }
        else {
          uVar41 = SEXT24((short)*u2);
          uVar31 = uVar31 & 0xff;
          if ((int)uVar41 < 0) {
            uVar31 = (int)((uint)(ushort)(&DrawC_gOverlay)[(uint)*(byte *)(u2 + 1)] << 0x10) >> 0x18
            ;
          }
          puVar26 = (uint *)(sd->otz + sd->sub_otz);
          uVar42 = uVar43 - 1;
          iVar20 = _cVar14;
          if (((int)puVar26 < 0) ||
             (uVar42 = uVar43 - 1, iVar20 = _cVar14, sd->sub_otSize < (int)puVar26))
          goto LAB_800c2ab8;
          uVar18 = uVar41 & 0xfff;
          if (((uVar41 & 0x3f0) != 0) && (uVar31 = uVar31 & uVar18 >> 4, uVar31 != 0)) {
            while ((uVar31 & 3) == 0) {
              uVar31 = (int)uVar31 >> 2;
            }
          }
          *(uint **)&sd->otz = puVar26;
        }
        if (((envmap & 0x20U) == 0) || (uVar42 = uVar43 - 1, iVar20 = _cVar14, (uVar18 & 1) == 0))
        goto LAB_800c2dc0;
      } while( true );
    }
  }
  return;
code_r0x800c28a8:
  iVar20 = _cVar14;
  uVar41 = uVar43 - 1;
  if (iVar16 <= sd->sub_otSize) goto code_r0x800c28bc;
  goto LAB_800c25d4;
code_r0x800c28bc:
  uVar41 = (uint)*u2 & 0xfff;
LAB_800c28cc:
  if ((uVar42 & 3) == 0) {
    puVar35 = (uint *)(sd->head).cprim.PrimPtr;
    iVar20 = sd->otz;
    puVar37 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar35 + 8;
    uVar31 = (int)(puVar37 + iVar20) + 2;
    uVar18 = uVar31 & 3;
    *puVar35 = (*(int *)(uVar31 - uVar18) << (3 - uVar18) * 8 |
               (uint)(puVar35 + 8) & 0xffffffffU >> (uVar18 + 1) * 8) >> 8 | 0x7000000;
    uVar31 = (int)(puVar37 + iVar20) + 2;
    uVar18 = uVar31 & 3;
    puVar26 = (uint *)(uVar31 - uVar18);
    *puVar26 = *puVar26 & -1 << (uVar18 + 1) * 8 | (uint)((int)puVar35 << 8) >> (3 - uVar18) * 8;
    uVar31 = *(uint *)&sd->dvx1;
    uVar18 = *(uint *)&sd->dvx2;
    uVar34 = 0x808080;
    puVar35[2] = *(uint *)&sd->dvx0;
    puVar35[4] = uVar31;
    puVar35[6] = uVar18;
    if ((uVar42 & 0x80) == 0) {
      uVar34 = sd->color;
    }
    uVar19 = 0x24;
    if ((uVar41 & 1) != 0) {
      uVar19 = 0x26;
    }
    puVar35[1] = uVar34;
    *(undefined *)((int)puVar35 + 7) = uVar19;
    uVar6 = sd->pmxStart[(uint)*(byte *)(u2 + 1)].tpage;
    *(ushort *)((int)puVar35 + 0xe) = sd->pmxStart[(uint)*(byte *)(u2 + 1)].clut;
    *(ushort *)((int)puVar35 + 0x16) = uVar6;
    uVar6 = u2[4];
    uVar7 = u2[5];
    *(ushort *)(puVar35 + 3) = u2[3];
    *(ushort *)(puVar35 + 5) = uVar6;
    *(ushort *)(puVar35 + 7) = uVar7;
  }
  else {
    puVar35 = (uint *)(sd->head).cprim.PrimPtr;
    pTVar30 = overlay + (uint)*(byte *)(u2 + 1) * 3 + ((uVar42 & 3) - 1);
    iVar20 = sd->otz;
    puVar37 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar35 + 8;
    uVar31 = (int)(puVar37 + iVar20) + 2;
    uVar18 = uVar31 & 3;
    *puVar35 = (*(int *)(uVar31 - uVar18) << (3 - uVar18) * 8 |
               (uint)(puVar35 + 8) & 0xffffffffU >> (uVar18 + 1) * 8) >> 8 | 0x7000000;
    uVar31 = (int)(puVar37 + iVar20) + 2;
    uVar18 = uVar31 & 3;
    puVar26 = (uint *)(uVar31 - uVar18);
    *puVar26 = *puVar26 & -1 << (uVar18 + 1) * 8 | (uint)((int)puVar35 << 8) >> (3 - uVar18) * 8;
    uVar31 = *(uint *)&sd->dvx1;
    uVar18 = *(uint *)&sd->dvx2;
    uVar34 = 0x808080;
    puVar35[2] = *(uint *)&sd->dvx0;
    puVar35[4] = uVar31;
    puVar35[6] = uVar18;
    if ((uVar42 & 0x80) == 0) {
      uVar34 = sd->color;
    }
    uVar19 = 0x24;
    if ((uVar41 & 1) != 0) {
      uVar19 = 0x26;
    }
    puVar35[1] = uVar34;
    *(undefined *)((int)puVar35 + 7) = uVar19;
    uVar22 = pTVar30->u;
    uVar27 = pTVar30->v;
    uVar6 = sd->pmxStart[(uint)*(byte *)(u2 + 1) + (int)pTVar30->offset].tpage;
    *(ushort *)((int)puVar35 + 0xe) =
         sd->pmxStart[(uint)*(byte *)(u2 + 1) + (int)pTVar30->offset].clut;
    *(ushort *)((int)puVar35 + 0x16) = uVar6;
    cVar14 = *(char *)(u2 + 4);
    cVar39 = *(char *)(u2 + 5);
    *(uchar *)(puVar35 + 3) = *(char *)(u2 + 3) + uVar22;
    *(uchar *)(puVar35 + 5) = cVar14 + uVar22;
    *(uchar *)(puVar35 + 7) = cVar39 + uVar22;
    cVar14 = *(char *)((int)u2 + 9);
    cVar39 = *(char *)((int)u2 + 0xb);
    *(char *)((int)puVar35 + 0xd) = *(char *)((int)u2 + 7) + uVar27;
    *(char *)((int)puVar35 + 0x15) = cVar14 + uVar27;
    *(char *)((int)puVar35 + 0x1d) = cVar39 + uVar27;
  }
  goto LAB_800c25d0;
LAB_800c2dc0:
  if (((uVar18 & 0x3f3) != 0) && (*(int *)&sd->ePmx1 != 0)) {
    vt2 = vt1 + (uint)*(byte *)((int)u2 + 3);
    sVar4 = vt2->y;
    sVar5 = vt2->z;
    (sd->vt0).x = vt2->x;
    (sd->vt0).y = sVar4;
    (sd->vt0).z = sVar5;
    vt2 = vt1 + (uint)*(byte *)(u2 + 2);
    sVar4 = vt2->y;
    sVar5 = vt2->z;
    (sd->vt1).x = vt2->x;
    (sd->vt1).y = sVar4;
    (sd->vt1).z = sVar5;
    vt2 = vt1 + (uint)*(byte *)((int)u2 + 5);
    sVar4 = vt2->y;
    sVar5 = vt2->z;
    (sd->vt2).x = vt2->x;
    (sd->vt2).y = sVar4;
    (sd->vt2).z = sVar5;
    puVar35 = (uint *)(sd->head).cprim.PrimPtr;
    iVar20 = sd->otz;
    puVar37 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar35 + 3;
    uVar38 = (sd->drawModeOff).tag;
    uVar41 = (sd->drawModeOff).code[0];
    uVar42 = (sd->drawModeOff).code[1];
    *puVar35 = uVar38;
    puVar35[1] = uVar41;
    puVar35[2] = uVar42;
    uVar41 = (int)(puVar37 + iVar20) + 2;
    uVar42 = uVar41 & 3;
    uVar34 = (int)puVar35 + 2U & 3;
    puVar26 = (uint *)(((int)puVar35 + 2U) - uVar34);
    *puVar26 = *puVar26 & -1 << (uVar34 + 1) * 8 |
               (*(int *)(uVar41 - uVar42) << (3 - uVar42) * 8 |
               uVar38 & 0xffffffffU >> (uVar42 + 1) * 8) >> (3 - uVar34) * 8;
    uVar41 = (int)(puVar37 + iVar20) + 2;
    uVar42 = uVar41 & 3;
    puVar26 = (uint *)(uVar41 - uVar42);
    *puVar26 = *puVar26 & -1 << (uVar42 + 1) * 8 | (uint)((int)puVar35 << 8) >> (3 - uVar42) * 8;
    puVar35 = (uint *)(sd->head).cprim.PrimPtr;
    iVar20 = sd->otz;
    puVar37 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar35 + 8;
    uVar41 = (int)(puVar37 + iVar20) + 2;
    uVar42 = uVar41 & 3;
    *puVar35 = (*(int *)(uVar41 - uVar42) << (3 - uVar42) * 8 |
               (uint)(puVar35 + 8) & 0xffffffffU >> (uVar42 + 1) * 8) >> 8 | 0x7000000;
    uVar41 = (int)(puVar37 + iVar20) + 2;
    uVar42 = uVar41 & 3;
    puVar26 = (uint *)(uVar41 - uVar42);
    *puVar26 = *puVar26 & -1 << (uVar42 + 1) * 8 | (uint)((int)puVar35 << 8) >> (3 - uVar42) * 8;
    puVar36 = (uint *)(sd->head).cprim.PrimPtr;
    iVar20 = sd->otz;
    puVar37 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar36 + 3;
    uVar38 = (sd->drawModeOn).tag;
    uVar41 = (sd->drawModeOn).code[0];
    uVar42 = (sd->drawModeOn).code[1];
    *puVar36 = uVar38;
    puVar36[1] = uVar41;
    puVar36[2] = uVar42;
    uVar41 = (int)(puVar37 + iVar20) + 2;
    uVar42 = uVar41 & 3;
    uVar34 = (int)puVar36 + 2U & 3;
    puVar26 = (uint *)(((int)puVar36 + 2U) - uVar34);
    *puVar26 = *puVar26 & -1 << (uVar34 + 1) * 8 |
               (*(int *)(uVar41 - uVar42) << (3 - uVar42) * 8 |
               uVar38 & 0xffffffffU >> (uVar42 + 1) * 8) >> (3 - uVar34) * 8;
    uVar41 = (int)(puVar37 + iVar20) + 2;
    uVar42 = uVar41 & 3;
    puVar26 = (uint *)(uVar41 - uVar42);
    *puVar26 = *puVar26 & -1 << (uVar42 + 1) * 8 | (uint)((int)puVar36 << 8) >> (3 - uVar42) * 8;
    uVar41 = *(uint *)&sd->dvx1;
    uVar42 = *(uint *)&sd->dvx2;
    puVar35[2] = *(uint *)&sd->dvx0;
    puVar35[4] = uVar41;
    puVar35[6] = uVar42;
    puVar35[1] = sd->eColor0;
    *(undefined *)((int)puVar35 + 7) = 0x26;
    uVar6 = (sd->ePmx1).tpage;
    *(ushort *)((int)puVar35 + 0xe) = (sd->ePmx1).clut;
    *(ushort *)((int)puVar35 + 0x16) = uVar6;
    cVar39 = (sd->ePmx1).u0 + '@';
    cVar40 = (sd->ePmx1).v0 + *(char *)&sd->eAddZ;
    cVar14 = *(char *)&(sd->vt0).z;
    *(char *)(puVar35 + 3) = *(char *)&(sd->vt0).y + cVar39;
    *(char *)((int)puVar35 + 0xd) = cVar14 + cVar40;
    cVar14 = *(char *)&(sd->vt1).z;
    *(char *)(puVar35 + 5) = *(char *)&(sd->vt1).y + cVar39;
    *(char *)((int)puVar35 + 0x15) = cVar14 + cVar40;
    cVar14 = *(char *)&(sd->vt2).z;
    *(char *)(puVar35 + 7) = *(char *)&(sd->vt2).y + cVar39;
    *(char *)((int)puVar35 + 0x1d) = cVar14 + cVar40;
  }
  if (*(int *)&sd->ePmx0 != 0) {
    puVar35 = (uint *)(sd->head).cprim.PrimPtr;
    iVar20 = sd->otz;
    puVar37 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar35 + 8;
    uVar41 = (int)(puVar37 + iVar20) + 2;
    uVar42 = uVar41 & 3;
    *puVar35 = (*(int *)(uVar41 - uVar42) << (3 - uVar42) * 8 |
               (uint)(puVar35 + 8) & 0xffffffffU >> (uVar42 + 1) * 8) >> 8 | 0x7000000;
    uVar41 = (int)(puVar37 + iVar20) + 2;
    uVar42 = uVar41 & 3;
    puVar26 = (uint *)(uVar41 - uVar42);
    *puVar26 = *puVar26 & -1 << (uVar42 + 1) * 8 | (uint)((int)puVar35 << 8) >> (3 - uVar42) * 8;
    uVar41 = *(uint *)&sd->dvx1;
    uVar42 = *(uint *)&sd->dvx2;
    puVar35[2] = *(uint *)&sd->dvx0;
    puVar35[4] = uVar41;
    puVar35[6] = uVar42;
    if ((uVar31 & 1) == 0) {
      if ((uVar18 & 4) == 0) {
        puVar35[1] = sd->eColor0;
      }
      else {
        puVar35[1] = sd->eColor1;
      }
    }
    else {
      puVar35[1] = sd->eColor2;
    }
    *(undefined *)((int)puVar35 + 7) = 0x26;
    uVar6 = (sd->ePmx0).tpage;
    *(ushort *)((int)puVar35 + 0xe) = (sd->ePmx0).clut;
    *(ushort *)((int)puVar35 + 0x16) = uVar6;
    uVar22 = (sd->ePmx0).v0;
    cVar39 = (sd->ePmx0).u0 + '@';
    cVar14 = *(char *)((int)ppuVar29 + 0xd7);
    *(char *)(puVar35 + 3) = *(char *)((int)ppuVar29 + 0xd6) + cVar39;
    *(char *)((int)puVar35 + 0xd) = cVar14 + uVar22;
    cVar14 = *(char *)((int)ppuVar25 + 0xd7);
    *(char *)(puVar35 + 5) = *(char *)((int)ppuVar25 + 0xd6) + cVar39;
    *(char *)((int)puVar35 + 0x15) = cVar14 + uVar22;
    cVar14 = *(char *)((int)ppuVar21 + 0xd7);
    *(char *)(puVar35 + 7) = *(char *)((int)ppuVar21 + 0xd6) + cVar39;
    *(char *)((int)puVar35 + 0x1d) = cVar14 + uVar22;
  }
  if ((uVar31 & 3) == 0) {
    puVar35 = (uint *)(sd->head).cprim.PrimPtr;
    iVar20 = sd->otz;
    puVar37 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar35 + 8;
    uVar41 = (int)(puVar37 + iVar20) + 2;
    uVar42 = uVar41 & 3;
    *puVar35 = (*(int *)(uVar41 - uVar42) << (3 - uVar42) * 8 |
               (uint)(puVar35 + 8) & 0xffffffffU >> (uVar42 + 1) * 8) >> 8 | 0x7000000;
    uVar41 = (int)(puVar37 + iVar20) + 2;
    uVar42 = uVar41 & 3;
    puVar26 = (uint *)(uVar41 - uVar42);
    *puVar26 = *puVar26 & -1 << (uVar42 + 1) * 8 | (uint)((int)puVar35 << 8) >> (3 - uVar42) * 8;
    uVar41 = *(uint *)&sd->dvx1;
    uVar42 = *(uint *)&sd->dvx2;
    puVar35[2] = *(uint *)&sd->dvx0;
    puVar35[4] = uVar41;
    puVar35[6] = uVar42;
    puVar26 = (uint *)0x24;
    if ((uVar18 & 1) != 0) {
      puVar26 = (uint *)0x26;
    }
    puVar35[1] = sd->color;
    *(undefined *)((int)puVar35 + 7) = (char)puVar26;
    uVar6 = sd->pmxStart[(uint)*(byte *)(u2 + 1)].tpage;
    *(ushort *)((int)puVar35 + 0xe) = sd->pmxStart[(uint)*(byte *)(u2 + 1)].clut;
    *(ushort *)((int)puVar35 + 0x16) = uVar6;
    uVar6 = u2[4];
    uVar7 = u2[5];
    uVar41 = (uint)uVar7;
    *(ushort *)(puVar35 + 3) = u2[3];
    *(ushort *)(puVar35 + 5) = uVar6;
    *(ushort *)(puVar35 + 7) = uVar7;
  }
  else {
    puVar35 = (uint *)(sd->head).cprim.PrimPtr;
    pTVar30 = overlay + (uint)*(byte *)(u2 + 1) * 3 + ((uVar31 & 3) - 1);
    iVar20 = sd->otz;
    puVar37 = sd->sub_ot;
    *(uint **)&(sd->head).cprim.PrimPtr = puVar35 + 8;
    uVar41 = (int)(puVar37 + iVar20) + 2;
    uVar42 = uVar41 & 3;
    *puVar35 = (*(int *)(uVar41 - uVar42) << (3 - uVar42) * 8 |
               (uint)(puVar35 + 8) & 0xffffffffU >> (uVar42 + 1) * 8) >> 8 | 0x7000000;
    uVar41 = (int)(puVar37 + iVar20) + 2;
    uVar42 = uVar41 & 3;
    puVar26 = (uint *)(uVar41 - uVar42);
    *puVar26 = *puVar26 & -1 << (uVar42 + 1) * 8 | (uint)((int)puVar35 << 8) >> (3 - uVar42) * 8;
    uVar41 = *(uint *)&sd->dvx1;
    uVar42 = *(uint *)&sd->dvx2;
    puVar35[2] = *(uint *)&sd->dvx0;
    puVar35[4] = uVar41;
    puVar35[6] = uVar42;
    bVar23 = 0x24;
    if ((uVar18 & 1) != 0) {
      bVar23 = 0x26;
    }
    puVar35[1] = sd->color;
    *(byte *)((int)puVar35 + 7) = bVar23;
    if ((uVar18 & 1) != 0) {
      *(byte *)((int)puVar35 + 7) = bVar23 | 2;
    }
    bVar23 = pTVar30->u;
    puVar26 = (uint *)(uint)bVar23;
    bVar1 = pTVar30->v;
    uVar6 = sd->pmxStart[(uint)*(byte *)(u2 + 1) + (int)pTVar30->offset].tpage;
    *(ushort *)((int)puVar35 + 0xe) =
         sd->pmxStart[(uint)*(byte *)(u2 + 1) + (int)pTVar30->offset].clut;
    *(ushort *)((int)puVar35 + 0x16) = uVar6;
    cVar14 = *(char *)(u2 + 4);
    cVar39 = *(char *)(u2 + 5);
    *(byte *)(puVar35 + 3) = *(char *)(u2 + 3) + bVar23;
    *(byte *)(puVar35 + 5) = cVar14 + bVar23;
    *(byte *)(puVar35 + 7) = cVar39 + bVar23;
    cVar14 = *(char *)((int)u2 + 9);
    uVar41 = (uint)*(byte *)((int)u2 + 0xb) + (uint)bVar1;
    *(char *)((int)puVar35 + 0xd) = *(char *)((int)u2 + 7) + bVar1;
    *(char *)((int)puVar35 + 0x15) = cVar14 + bVar1;
    *(undefined *)((int)puVar35 + 0x1d) = (char)uVar41;
  }
  goto LAB_800c2ab4;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_PrimMenu__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache(struct matrixtdef *m /*$s0*/, struct coorddef *t /*$s2*/, struct Transformer_zObj *obj /*$s3*/, struct Transformer_zOverlay *overlay /*$s5*/, int envmap /*stack 16*/, struct Draw_CarCache *sd /*stack 20*/)
 // line 3551, offset 0x800c32b0
	/* begin block 1 */
		// Start line: 3552
		// Start offset: 0x800C32B0
		// Variables:
	// 		int i; // $t8
	// 		struct COORD16 *Nvertice; // $v1

		/* begin block 1.1 */
			// Start line: 3552
			// Start offset: 0x800C32B0

			/* begin block 1.1.1 */
				// Start line: 3570
				// Start offset: 0x800C32F8
				// Variables:
			// 		struct COORD16 *vt; // $a3

				/* begin block 1.1.1.1 */
					// Start line: 3578
					// Start offset: 0x800C3364
					// Variables:
				// 		int u; // $v1
				// 		int v; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 3582
						// Start offset: 0x800C3370
						// Variables:
					// 		short t1; // $v0
					// 		short t2; // $v1
					// 		short t3; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800C3370
					// End Line: 3582
				/* end block 1.1.1.1 */
				// End offset: 0x800C33BC
				// End Line: 3588
			/* end block 1.1.1 */
			// End offset: 0x800C33D4
			// End Line: 3592
		/* end block 1.1 */
		// End offset: 0x800C33D4
		// End Line: 3592

		/* begin block 1.2 */
			// Start line: 3597
			// Start offset: 0x800C33D4
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.2 */
		// End offset: 0x800C33D4
		// End Line: 3597

		/* begin block 1.3 */
			// Start line: 3597
			// Start offset: 0x800C33D4
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.3 */
		// End offset: 0x800C33D4
		// End Line: 3597

		/* begin block 1.4 */
			// Start line: 3597
			// Start offset: 0x800C33D4
			// Variables:
		// 		int r0; // $v1
		// 		int r1; // $a0
		// 		int r2; // $a1
		/* end block 1.4 */
		// End offset: 0x800C33D4
		// End Line: 3597

		/* begin block 1.5 */
			// Start line: 3597
			// Start offset: 0x800C33D4
			// Variables:
		// 		struct COORD16 *vt; // $a3
		// 		struct PCOORD16 *tV; // $t0

			/* begin block 1.5.1 */
				// Start line: 3625
				// Start offset: 0x800C3504

				/* begin block 1.5.1.1 */
					// Start line: 3627
					// Start offset: 0x800C3510
					// Variables:
				// 		short t1; // $v1
				// 		short t2; // $v0
				// 		short t3; // $a0
				/* end block 1.5.1.1 */
				// End offset: 0x800C3510
				// End Line: 3627
			/* end block 1.5.1 */
			// End offset: 0x800C3510
			// End Line: 3627
		/* end block 1.5 */
		// End offset: 0x800C353C
		// End Line: 3630

		/* begin block 1.6 */
			// Start line: 3636
			// Start offset: 0x800C3550
			// Variables:
		// 		struct POLY_FT3 *prim; // $a3
		// 		short facetFlag; // $t3
		// 		int overlayFlag; // $a1
		// 		struct Transformer_zFacet *facet; // $t0
		// 		int id0; // $t2
		// 		int id1; // $t1
		// 		int id2; // $a2

			/* begin block 1.6.1 */
				// Start line: 3654
				// Start offset: 0x800C358C
				// Variables:
			// 		int bfct; // $v1
			/* end block 1.6.1 */
			// End offset: 0x800C35F8
			// End Line: 3674

			/* begin block 1.6.2 */
				// Start line: 3710
				// Start offset: 0x800C36AC

				/* begin block 1.6.2.1 */
					// Start line: 3711
					// Start offset: 0x800C36B8

					/* begin block 1.6.2.1.1 */
						// Start line: 3758
						// Start offset: 0x800C36B8

						/* begin block 1.6.2.1.1.1 */
							// Start line: 3761
							// Start offset: 0x800C36B8
							// Variables:
						// 		long xy0; // $v0
						// 		long xy1; // $v1
						// 		long xy2; // $a0
						/* end block 1.6.2.1.1.1 */
						// End offset: 0x800C36B8
						// End Line: 3761

						/* begin block 1.6.2.1.1.2 */
							// Start line: 3761
							// Start offset: 0x800C36B8
							// Variables:
						// 		unsigned long color; // $v0
						// 		unsigned char code; // $v0
						/* end block 1.6.2.1.1.2 */
						// End offset: 0x800C37A8
						// End Line: 3784

						/* begin block 1.6.2.1.1.3 */
							// Start line: 3784
							// Start offset: 0x800C37A8
							// Variables:
						// 		unsigned short clut; // $v0
						// 		unsigned short tpage; // $v1
						/* end block 1.6.2.1.1.3 */
						// End offset: 0x800C37A8
						// End Line: 3784
					/* end block 1.6.2.1.1 */
					// End offset: 0x800C381C
					// End Line: 3800
				/* end block 1.6.2.1 */
				// End offset: 0x800C381C
				// End Line: 3800
			/* end block 1.6.2 */
			// End offset: 0x800C381C
			// End Line: 3800

			/* begin block 1.6.3 */
				// Start line: 3811
				// Start offset: 0x800C381C

				/* begin block 1.6.3.1 */
					// Start line: 3812
					// Start offset: 0x800C3828
					// Variables:
				// 		int index; // $v1
				// 		int which; // $a0
				// 		struct Transformer_zOverlay *facetOverlay; // $a2

					/* begin block 1.6.3.1.1 */
						// Start line: 3813
						// Start offset: 0x800C3828
						// Variables:
					// 		long xy0; // $v0
					// 		long xy1; // $v1
					// 		long xy2; // $a0
					/* end block 1.6.3.1.1 */
					// End offset: 0x800C3828
					// End Line: 3813

					/* begin block 1.6.3.1.2 */
						// Start line: 3813
						// Start offset: 0x800C3828
						// Variables:
					// 		unsigned long color; // $v1
					// 		unsigned char code; // $a1
					/* end block 1.6.3.1.2 */
					// End offset: 0x800C38A4
					// End Line: 3832

					/* begin block 1.6.3.1.3 */
						// Start line: 3832
						// Start offset: 0x800C38A4
						// Variables:
					// 		struct Draw_tPixMap *pmx; // $v0

						/* begin block 1.6.3.1.3.1 */
							// Start line: 3832
							// Start offset: 0x800C38A4
							// Variables:
						// 		unsigned char u0; // $v0
						// 		unsigned char u1; // $v1
						// 		unsigned char u2; // $a0
						// 		unsigned char v0; // $v0
						// 		unsigned char v1; // $v1
						// 		unsigned char v2; // $a0
						// 		unsigned char u; // $a1
						// 		unsigned char v; // $a2
						// 		unsigned short clut; // $v1
						// 		unsigned short tpage; // $v0
						/* end block 1.6.3.1.3.1 */
						// End offset: 0x800C38A4
						// End Line: 3832
					/* end block 1.6.3.1.3 */
					// End offset: 0x800C38A4
					// End Line: 3832
				/* end block 1.6.3.1 */
				// End offset: 0x800C38A4
				// End Line: 3832

				/* begin block 1.6.3.2 */
					// Start line: 3844
					// Start offset: 0x800C38DC

					/* begin block 1.6.3.2.1 */
						// Start line: 3847
						// Start offset: 0x800C38DC
						// Variables:
					// 		long xy0; // $v0
					// 		long xy1; // $v1
					// 		long xy2; // $a0
					/* end block 1.6.3.2.1 */
					// End offset: 0x800C38DC
					// End Line: 3847

					/* begin block 1.6.3.2.2 */
						// Start line: 3847
						// Start offset: 0x800C38DC
						// Variables:
					// 		unsigned long color; // $v0
					// 		unsigned char code; // $a1
					/* end block 1.6.3.2.2 */
					// End offset: 0x800C3940
					// End Line: 3859

					/* begin block 1.6.3.2.3 */
						// Start line: 3859
						// Start offset: 0x800C3940

						/* begin block 1.6.3.2.3.1 */
							// Start line: 3864
							// Start offset: 0x800C3958
							// Variables:
						// 		struct Draw_tPixMap *pmx; // $v1

							/* begin block 1.6.3.2.3.1.1 */
								// Start line: 3865
								// Start offset: 0x800C3958
								// Variables:
							// 		unsigned char u0; // $v0
							// 		unsigned char u1; // $v1
							// 		unsigned char u2; // $a0
							// 		unsigned char v0; // $v0
							// 		unsigned char v1; // $v1
							// 		unsigned char v2; // $a0
							// 		unsigned char u; // $a1
							// 		unsigned char v; // $a2
							// 		unsigned short clut; // $a0
							// 		unsigned short tpage; // $v0
							/* end block 1.6.3.2.3.1.1 */
							// End offset: 0x800C3958
							// End Line: 3865
						/* end block 1.6.3.2.3.1 */
						// End offset: 0x800C3958
						// End Line: 3865

						/* begin block 1.6.3.2.3.2 */
							// Start line: 3869
							// Start offset: 0x800C39CC

							/* begin block 1.6.3.2.3.2.1 */
								// Start line: 3870
								// Start offset: 0x800C39CC
								// Variables:
							// 		unsigned short uv0; // $v0
							// 		unsigned short uv1; // $v1
							// 		unsigned short uv2; // $a0
							// 		struct Draw_tPixMap *pmx; // $v1
							// 		unsigned short clut; // $v0
							// 		unsigned short tpage; // $v1
							/* end block 1.6.3.2.3.2.1 */
							// End offset: 0x800C39CC
							// End Line: 3870
						/* end block 1.6.3.2.3.2 */
						// End offset: 0x800C39CC
						// End Line: 3870
					/* end block 1.6.3.2.3 */
					// End offset: 0x800C39CC
					// End Line: 3870
				/* end block 1.6.3.2 */
				// End offset: 0x800C39CC
				// End Line: 3870
			/* end block 1.6.3 */
			// End offset: 0x800C39CC
			// End Line: 3870
		/* end block 1.6 */
		// End offset: 0x800C39CC
		// End Line: 3870
	/* end block 1 */
	// End offset: 0x800C3A08
	// End Line: 3870

void DrawC_PrimMenu__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache( (matrixtdef *m,coorddef *t,Transformer_zObj *obj,Transformer_zOverlay *overlay, int envmap,Draw_CarCache *sd)
{
  uchar uVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  bool bVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 in_zero;
  undefined4 in_at;
  char cVar11;
  short sVar12;
  ushort uVar13;
  COORD16 *pCVar14;
  int iVar15;
  undefined uVar16;
  short *psVar17;
  int iVar18;
  ushort *puVar19;
  char *pcVar20;
  ushort *puVar21;
  ulong **ppuVar22;
  Transformer_zOverlay *pTVar23;
  uint *puVar24;
  Draw_CarVertex *pDVar25;
  ulong **ppuVar26;
  ulong **ppuVar27;
  uint *puVar28;
  uint uVar29;
  char cVar30;
  ulong *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  
  pCVar14 = obj->Nvertex;
  if ((envmap & 1U) != 0) {
    setCopControlWord(2,0,0);
    setCopControlWord(2,0x800,0);
    setCopControlWord(2,0x1000,0);
    setCopControlWord(2,0x1800,0);
    setCopControlWord(2,0x2000,0);
    setCopControlWord(2,0x2800,DAT_8011f4fc);
    setCopControlWord(2,0x3000,DAT_8011f500);
    setCopControlWord(2,0x3800,DAT_8011f504);
    uVar34 = (uint)obj->numVertex;
    pcVar20 = &sd->tV[0].v;
    psVar17 = &pCVar14->z;
    while (uVar34 = uVar34 - 1, uVar34 != 0xffffffff) {
      sVar12 = psVar17[-1];
      sVar4 = *psVar17;
      (sd->vt0).x = pCVar14->x;
      (sd->vt0).y = sVar12;
      (sd->vt0).z = sVar4;
      setCopReg(2,in_zero,*(undefined4 *)&sd->vt0);
      setCopReg(2,in_at,*(undefined4 *)&(sd->vt0).z);
      copFunction(2,0x480012);
      lVar7 = getCopReg(2,0x19);
      (sd->tv).vx = lVar7;
      lVar7 = getCopReg(2,0x1a);
      (sd->tv).vy = lVar7;
      lVar7 = getCopReg(2,0x1b);
      (sd->tv).vz = lVar7;
      _cVar11 = (sd->tv).vz;
      cVar11 = (char)_cVar11;
      if (_cVar11 < 0) {
        cVar11 = -cVar11;
      }
      psVar17 = psVar17 + 3;
      pCVar14 = pCVar14 + 1;
      pcVar20[-1] = (char)(sd->tv).vx;
      *pcVar20 = cVar11;
      pcVar20 = pcVar20 + 8;
    }
  }
  TrsProj_SetTransPrecision__Fi(8);
  _cVar11 = m->m[3];
  iVar15 = m->m[6];
  (sd->matB).m[0] = (short)(m->m[0] >> 4);
  (sd->matB).m[1] = (short)(_cVar11 >> 4);
  (sd->matB).m[2] = (short)(iVar15 >> 4);
  _cVar11 = m->m[4];
  iVar15 = m->m[7];
  sVar12 = (short)(m->m[1] >> 4);
  (sd->matB).m[3] = sVar12;
  (sd->matB).m[4] = (short)(_cVar11 >> 4);
  (sd->matB).m[5] = (short)(iVar15 >> 4);
  _cVar11 = m->m[2];
  iVar15 = m->m[5];
  iVar18 = m->m[8];
  (sd->matB).m[3] = -sVar12;
  sVar12 = (sd->matB).m[4];
  uVar34 = iVar15 >> 4;
  (sd->matB).m[6] = (short)(_cVar11 >> 4);
  sVar4 = (sd->matB).m[5];
  (sd->matB).m[7] = (short)uVar34;
  (sd->matB).m[8] = (short)(iVar18 >> 4);
  (sd->matB).m[4] = -sVar12;
  (sd->matB).m[5] = -sVar4;
  (sd->matB).t[0] = t->x >> 10;
  (sd->matB).t[1] = -(t->y >> 10);
  (sd->matB).t[2] = t->z >> 10;
  TrsProj_ResetTransPrecision__Fv();
  setCopControlWord(2,0,*(undefined4 *)(sd->matB).m);
  setCopControlWord(2,0x800,*(undefined4 *)((sd->matB).m + 2));
  setCopControlWord(2,0x1000,*(undefined4 *)((sd->matB).m + 4));
  setCopControlWord(2,0x1800,*(undefined4 *)((sd->matB).m + 6));
  setCopControlWord(2,0x2000,*(undefined4 *)((sd->matB).m + 8));
  setCopControlWord(2,0x2800,(sd->matB).t[0]);
  setCopControlWord(2,0x3000,(sd->matB).t[1]);
  setCopControlWord(2,0x3800,(sd->matB).t[2]);
  pDVar25 = sd->tV;
  puVar21 = (ushort *)&sd->tV[0].vt.z;
  pCVar14 = obj->vertex;
  uVar35 = (uint)obj->numVertex;
  puVar19 = (ushort *)&pCVar14->z;
  while (uVar35 = uVar35 - 1, uVar35 != 0xffffffff) {
    uVar13 = puVar19[-1];
    uVar5 = *puVar19;
    uVar34 = (uint)uVar5;
    puVar19 = puVar19 + 3;
    psVar17 = &pCVar14->x;
    pCVar14 = pCVar14 + 1;
    (pDVar25->vt).x = *psVar17;
    puVar21[-1] = uVar13;
    *puVar21 = uVar5;
    puVar21 = puVar21 + 4;
    pDVar25 = pDVar25 + 1;
  }
  uVar35 = (uint)obj->numFacet;
  _cVar11 = uVar35 * 0xc;
LAB_800c3550:
  do {
    uVar32 = uVar35 - 1;
    iVar15 = _cVar11;
    do {
      do {
        do {
          uVar35 = uVar32;
          _cVar11 = iVar15 + -0xc;
          if (uVar35 == 0xffffffff) {
            return;
          }
          pcVar20 = (sd->head).cprim.MPrimPtr;
          puVar21 = (ushort *)(&obj->facet[-1].vertexId1 + iVar15);
          bVar6 = (sd->head).cprim.PrimPtr < pcVar20;
          uVar32 = uVar35 - 1;
          iVar15 = _cVar11;
        } while (!bVar6);
        ppuVar27 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)puVar21 + 3) * 2;
        ppuVar26 = &(sd->head).cprim.LastPrim + (uint)*(byte *)(puVar21 + 2) * 2;
        ppuVar22 = &(sd->head).cprim.LastPrim + (uint)*(byte *)((int)puVar21 + 5) * 2;
        setCopReg(2,in_zero,ppuVar27[0x34]);
        setCopReg(2,in_at,ppuVar27[0x35]);
        setCopReg(2,(uint)bVar6,ppuVar26[0x34]);
        setCopReg(2,pcVar20,ppuVar26[0x35]);
        setCopReg(2,uVar34,ppuVar22[0x34]);
        setCopReg(2,puVar19,ppuVar22[0x35]);
        copFunction(2,0x280030);
        copFunction(2,0x1400006);
        iVar15 = getCopReg(2,0x18);
        sd->bfct = iVar15;
        iVar18 = sd->bfct;
        if ((sd->head).mirror != 0) {
          iVar18 = -iVar18;
        }
        uVar32 = uVar35 - 1;
        iVar15 = _cVar11;
      } while (iVar18 < 1);
      uVar8 = getCopReg(2,0xc);
      *(undefined4 *)&sd->dvx0 = uVar8;
      uVar8 = getCopReg(2,0xd);
      *(undefined4 *)&sd->dvx1 = uVar8;
      uVar8 = getCopReg(2,0xe);
      *(undefined4 *)&sd->dvx2 = uVar8;
      copFunction(2,0x158002d);
      iVar15 = getCopReg(2,7);
      sd->otz = iVar15;
      iVar18 = sd->otz + sd->sub_otz;
      sd->otz = iVar18;
      if (iVar18 < 0) goto LAB_800c3550;
      uVar32 = uVar35 - 1;
      iVar15 = _cVar11;
    } while (sd->sub_otSize < iVar18);
    uVar13 = *puVar21;
    uVar34 = (int)((uint)(ushort)(&DrawC_gOverlay)[(uint)*(byte *)(puVar21 + 1)] << 0x10) >> 0x10;
    if (uVar34 != 0) {
      uVar34 = uVar34 & 0x3f;
      if ((int)((uint)uVar13 << 0x10) < 0) {
        uVar34 = (int)((uint)(ushort)(&DrawC_gOverlay)[(uint)*(byte *)(puVar21 + 1)] << 0x10) >>
                 0x18;
      }
      if (((uVar13 & 0x3f0) != 0) && (uVar34 = uVar34 & ((uint)uVar13 & 0xfff) >> 4, uVar34 != 0)) {
        while ((uVar34 & 3) == 0) {
          uVar34 = (int)uVar34 >> 2;
        }
      }
    }
    if ((envmap & 1U) != 0) {
      puVar24 = (uint *)(sd->head).cprim.PrimPtr;
      iVar15 = sd->otz;
      puVar31 = sd->sub_ot;
      *(uint **)&(sd->head).cprim.PrimPtr = puVar24 + 3;
      uVar29 = (sd->drawModeOff).tag;
      uVar32 = (sd->drawModeOff).code[0];
      uVar33 = (sd->drawModeOff).code[1];
      *puVar24 = uVar29;
      puVar24[1] = uVar32;
      puVar24[2] = uVar33;
      uVar32 = (int)(puVar31 + iVar15) + 2;
      uVar33 = uVar32 & 3;
      uVar9 = (int)puVar24 + 2U & 3;
      puVar10 = (uint *)(((int)puVar24 + 2U) - uVar9);
      *puVar10 = *puVar10 & -1 << (uVar9 + 1) * 8 |
                 (*(int *)(uVar32 - uVar33) << (3 - uVar33) * 8 |
                 uVar29 & 0xffffffffU >> (uVar33 + 1) * 8) >> (3 - uVar9) * 8;
      uVar32 = (int)(puVar31 + iVar15) + 2;
      uVar33 = uVar32 & 3;
      puVar10 = (uint *)(uVar32 - uVar33);
      *puVar10 = *puVar10 & -1 << (uVar33 + 1) * 8 | (uint)((int)puVar24 << 8) >> (3 - uVar33) * 8;
      puVar24 = (uint *)(sd->head).cprim.PrimPtr;
      iVar15 = sd->otz;
      puVar31 = sd->sub_ot;
      *(uint **)&(sd->head).cprim.PrimPtr = puVar24 + 8;
      uVar32 = (int)(puVar31 + iVar15) + 2;
      uVar33 = uVar32 & 3;
      *puVar24 = (*(int *)(uVar32 - uVar33) << (3 - uVar33) * 8 |
                 (uint)(puVar24 + 8) & 0xffffffffU >> (uVar33 + 1) * 8) >> 8 | 0x7000000;
      uVar32 = (int)(puVar31 + iVar15) + 2;
      uVar33 = uVar32 & 3;
      puVar10 = (uint *)(uVar32 - uVar33);
      *puVar10 = *puVar10 & -1 << (uVar33 + 1) * 8 | (uint)((int)puVar24 << 8) >> (3 - uVar33) * 8;
      puVar28 = (uint *)(sd->head).cprim.PrimPtr;
      iVar15 = sd->otz;
      puVar31 = sd->sub_ot;
      *(uint **)&(sd->head).cprim.PrimPtr = puVar28 + 3;
      uVar29 = (sd->drawModeOn).tag;
      uVar32 = (sd->drawModeOn).code[0];
      uVar33 = (sd->drawModeOn).code[1];
      *puVar28 = uVar29;
      puVar28[1] = uVar32;
      puVar28[2] = uVar33;
      uVar32 = (int)(puVar31 + iVar15) + 2;
      uVar33 = uVar32 & 3;
      uVar9 = (int)puVar28 + 2U & 3;
      puVar10 = (uint *)(((int)puVar28 + 2U) - uVar9);
      *puVar10 = *puVar10 & -1 << (uVar9 + 1) * 8 |
                 (*(int *)(uVar32 - uVar33) << (3 - uVar33) * 8 |
                 uVar29 & 0xffffffffU >> (uVar33 + 1) * 8) >> (3 - uVar9) * 8;
      uVar32 = (int)(puVar31 + iVar15) + 2;
      uVar33 = uVar32 & 3;
      puVar10 = (uint *)(uVar32 - uVar33);
      *puVar10 = *puVar10 & -1 << (uVar33 + 1) * 8 | (uint)((int)puVar28 << 8) >> (3 - uVar33) * 8;
      uVar32 = *(uint *)&sd->dvx1;
      uVar33 = *(uint *)&sd->dvx2;
      puVar24[2] = *(uint *)&sd->dvx0;
      puVar24[4] = uVar32;
      puVar24[6] = uVar33;
      if ((uVar13 & 4) == 0) {
        puVar24[1] = sd->eColor0;
      }
      else {
        puVar24[1] = sd->eColor1;
      }
      *(undefined *)((int)puVar24 + 7) = 0x26;
      uVar5 = (sd->ePmx0).tpage;
      *(ushort *)((int)puVar24 + 0xe) = (sd->ePmx0).clut;
      *(ushort *)((int)puVar24 + 0x16) = uVar5;
      uVar1 = (sd->ePmx0).v0;
      cVar30 = (sd->ePmx0).u0 + '@';
      cVar11 = *(char *)((int)ppuVar27 + 0xd7);
      *(char *)(puVar24 + 3) = *(char *)((int)ppuVar27 + 0xd6) + cVar30;
      *(char *)((int)puVar24 + 0xd) = cVar11 + uVar1;
      cVar11 = *(char *)((int)ppuVar26 + 0xd7);
      *(char *)(puVar24 + 5) = *(char *)((int)ppuVar26 + 0xd6) + cVar30;
      *(char *)((int)puVar24 + 0x15) = cVar11 + uVar1;
      cVar11 = *(char *)((int)ppuVar22 + 0xd7);
      *(char *)(puVar24 + 7) = *(char *)((int)ppuVar22 + 0xd6) + cVar30;
      *(char *)((int)puVar24 + 0x1d) = cVar11 + uVar1;
    }
    if ((uVar34 & 3) == 0) {
      puVar24 = (uint *)(sd->head).cprim.PrimPtr;
      iVar15 = sd->otz;
      puVar31 = sd->sub_ot;
      *(uint **)&(sd->head).cprim.PrimPtr = puVar24 + 8;
      uVar34 = (int)(puVar31 + iVar15) + 2;
      uVar32 = uVar34 & 3;
      *puVar24 = (*(int *)(uVar34 - uVar32) << (3 - uVar32) * 8 |
                 (uint)(puVar24 + 8) & 0xffffffffU >> (uVar32 + 1) * 8) >> 8 | 0x7000000;
      uVar34 = (int)(puVar31 + iVar15) + 2;
      uVar32 = uVar34 & 3;
      puVar10 = (uint *)(uVar34 - uVar32);
      *puVar10 = *puVar10 & -1 << (uVar32 + 1) * 8 | (uint)((int)puVar24 << 8) >> (3 - uVar32) * 8;
      uVar34 = *(uint *)&sd->dvx0;
      uVar32 = *(uint *)&sd->dvx2;
      puVar24[4] = *(uint *)&sd->dvx1;
      puVar24[2] = uVar34;
      puVar24[6] = uVar32;
      puVar19 = (ushort *)0x24;
      if ((uVar13 & 1) != 0) {
        puVar19 = (ushort *)0x26;
      }
      puVar24[1] = sd->color;
      *(undefined *)((int)puVar24 + 7) = (char)puVar19;
      if (((envmap & 2U) == 0) || ((uVar13 & 1) != 0)) {
        uVar13 = sd->pmxStart[(uint)*(byte *)(puVar21 + 1)].tpage;
        *(ushort *)((int)puVar24 + 0xe) = sd->pmxStart[(uint)*(byte *)(puVar21 + 1)].clut;
        *(ushort *)((int)puVar24 + 0x16) = uVar13;
        uVar13 = puVar21[4];
        uVar5 = puVar21[5];
        uVar34 = (uint)uVar5;
        *(ushort *)(puVar24 + 3) = puVar21[3];
        *(ushort *)(puVar24 + 5) = uVar13;
        *(ushort *)(puVar24 + 7) = uVar5;
        goto LAB_800c3550;
      }
      bVar2 = sd->offsetU0;
      bVar3 = sd->offsetV0;
      uVar13 = sd->pmxStart[(uint)*(byte *)(puVar21 + 1)].tpage;
      *(ushort *)((int)puVar24 + 0xe) = sd->pmxStart[(uint)*(byte *)(puVar21 + 1)].clut;
    }
    else {
      puVar24 = (uint *)(sd->head).cprim.PrimPtr;
      pTVar23 = overlay + (uint)*(byte *)(puVar21 + 1) * 3 + ((uVar34 & 3) - 1);
      iVar15 = sd->otz;
      puVar31 = sd->sub_ot;
      *(uint **)&(sd->head).cprim.PrimPtr = puVar24 + 8;
      uVar34 = (int)(puVar31 + iVar15) + 2;
      uVar32 = uVar34 & 3;
      *puVar24 = (*(int *)(uVar34 - uVar32) << (3 - uVar32) * 8 |
                 (uint)(puVar24 + 8) & 0xffffffffU >> (uVar32 + 1) * 8) >> 8 | 0x7000000;
      uVar34 = (int)(puVar31 + iVar15) + 2;
      uVar32 = uVar34 & 3;
      puVar10 = (uint *)(uVar34 - uVar32);
      *puVar10 = *puVar10 & -1 << (uVar32 + 1) * 8 | (uint)((int)puVar24 << 8) >> (3 - uVar32) * 8;
      uVar34 = *(uint *)&sd->dvx1;
      uVar32 = *(uint *)&sd->dvx2;
      puVar24[2] = *(uint *)&sd->dvx0;
      puVar24[4] = uVar34;
      puVar24[6] = uVar32;
      uVar16 = 0x24;
      if ((uVar13 & 1) != 0) {
        uVar16 = 0x26;
      }
      puVar24[1] = sd->color;
      *(undefined *)((int)puVar24 + 7) = uVar16;
      bVar2 = pTVar23->u;
      bVar3 = pTVar23->v;
      uVar13 = sd->pmxStart[(uint)*(byte *)(puVar21 + 1) + (int)pTVar23->offset].tpage;
      *(ushort *)((int)puVar24 + 0xe) =
           sd->pmxStart[(uint)*(byte *)(puVar21 + 1) + (int)pTVar23->offset].clut;
    }
    puVar19 = (ushort *)(uint)bVar2;
    *(ushort *)((int)puVar24 + 0x16) = uVar13;
    cVar11 = *(char *)(puVar21 + 4);
    cVar30 = *(char *)(puVar21 + 5);
    *(byte *)(puVar24 + 3) = *(char *)(puVar21 + 3) + bVar2;
    *(byte *)(puVar24 + 5) = cVar11 + bVar2;
    *(byte *)(puVar24 + 7) = cVar30 + bVar2;
    cVar11 = *(char *)((int)puVar21 + 9);
    uVar34 = (uint)*(byte *)((int)puVar21 + 0xb) + (uint)bVar3;
    *(char *)((int)puVar24 + 0xd) = *(char *)((int)puVar21 + 7) + bVar3;
    *(char *)((int)puVar24 + 0x15) = cVar11 + bVar3;
    *(undefined *)((int)puVar24 + 0x1d) = (char)uVar34;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_PrimHalo__FP10matrixtdefP8coorddefP16Transformer_zObjiiiP13Draw_CarCache(struct matrixtdef *m /*$s0*/, struct coorddef *t /*$s1*/, struct Transformer_zObj *obj /*stack 8*/, int type /*stack 12*/, int index /*stack 16*/, int reflect /*stack 20*/, struct Draw_CarCache *sd /*stack 24*/)
 // line 3881, offset 0x800c3a30
	/* begin block 1 */
		// Start line: 3882
		// Start offset: 0x800C3A30
		// Variables:
	// 		int i; // $s5
	// 		struct COORD16 *vertice; // $fp

		/* begin block 1.1 */
			// Start line: 3882
			// Start offset: 0x800C3A30
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.1 */
		// End offset: 0x800C3A30
		// End Line: 3882

		/* begin block 1.2 */
			// Start line: 3882
			// Start offset: 0x800C3A30
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.2 */
		// End offset: 0x800C3A30
		// End Line: 3882

		/* begin block 1.3 */
			// Start line: 3882
			// Start offset: 0x800C3A30
			// Variables:
		// 		int r0; // $v1
		// 		int r1; // $a0
		// 		int r2; // $a1
		/* end block 1.3 */
		// End offset: 0x800C3A30
		// End Line: 3882

		/* begin block 1.4 */
			// Start line: 3905
			// Start offset: 0x800C3B64
			// Variables:
		// 		int real_type; // $s3
		// 		struct Transformer_zFacet *facet; // $s1
		// 		unsigned short id0; // $v1
		// 		unsigned short id1; // $a1
		// 		unsigned short id2; // $a2

			/* begin block 1.4.1 */
				// Start line: 3909
				// Start offset: 0x800C3B74
				// Variables:
			// 		short *z; // $v0
			// 		short t1; // $v1
			// 		short t2; // $a0
			// 		short t3; // $v0
			/* end block 1.4.1 */
			// End offset: 0x800C3B74
			// End Line: 3909

			/* begin block 1.4.2 */
				// Start line: 3909
				// Start offset: 0x800C3B74
				// Variables:
			// 		short *z; // $v0
			// 		short t1; // $v1
			// 		short t2; // $a0
			// 		short t3; // $v0
			/* end block 1.4.2 */
			// End offset: 0x800C3B74
			// End Line: 3909

			/* begin block 1.4.3 */
				// Start line: 3909
				// Start offset: 0x800C3B74
				// Variables:
			// 		short *z; // $v0
			// 		short t1; // $v1
			// 		short t2; // $a0
			// 		short t3; // $v0
			/* end block 1.4.3 */
			// End offset: 0x800C3B74
			// End Line: 3909

			/* begin block 1.4.4 */
				// Start line: 3909
				// Start offset: 0x800C3B74
				// Variables:
			// 		int bfct; // $v1
			/* end block 1.4.4 */
			// End offset: 0x800C3CB4
			// End Line: 3939

			/* begin block 1.4.5 */
				// Start line: 3955
				// Start offset: 0x800C3CF4

				/* begin block 1.4.5.1 */
					// Start line: 3958
					// Start offset: 0x800C3D10
					// Variables:
				// 		int overlayFlag; // $v1
				/* end block 1.4.5.1 */
				// End offset: 0x800C3DC8
				// End Line: 3974
			/* end block 1.4.5 */
			// End offset: 0x800C3DC8
			// End Line: 3974

			/* begin block 1.4.6 */
				// Start line: 3977
				// Start offset: 0x800C3DC8
				// Variables:
			// 		unsigned long *copyLastPrim; // $s4
			/* end block 1.4.6 */
			// End offset: 0x800C3EA0
			// End Line: 3991
		/* end block 1.4 */
		// End offset: 0x800C3EA0
		// End Line: 3991
	/* end block 1 */
	// End offset: 0x800C3EA8
	// End Line: 3991

void DrawC_PrimHalo__FP10matrixtdefP8coorddefP16Transformer_zObjiiiP13Draw_CarCache( (matrixtdef *m,coorddef *t,Transformer_zObj *obj,int type,int index,int reflect, Draw_CarCache *sd)
{
  byte bVar1;
  byte bVar2;
  short sVar3;
  undefined4 in_zero;
  undefined4 in_at;
  short sVar4;
  COORD16 *pCVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint type_00;
  short *psVar10;
  uint uVar11;
  ulong *puVar12;
  uint uVar13;
  COORD16 *pCVar14;
  
  pCVar14 = obj->vertex;
  TrsProj_SetTransPrecision__Fi(8);
  iVar6 = m->m[3];
  iVar8 = m->m[6];
  (sd->matB).m[0] = (short)(m->m[0] >> 4);
  (sd->matB).m[1] = (short)(iVar6 >> 4);
  (sd->matB).m[2] = (short)(iVar8 >> 4);
  iVar6 = m->m[4];
  iVar8 = m->m[7];
  sVar4 = (short)(m->m[1] >> 4);
  (sd->matB).m[3] = sVar4;
  (sd->matB).m[4] = (short)(iVar6 >> 4);
  (sd->matB).m[5] = (short)(iVar8 >> 4);
  iVar6 = m->m[2];
  iVar8 = m->m[5];
  iVar9 = m->m[8];
  (sd->matB).m[3] = -sVar4;
  sVar4 = (sd->matB).m[4];
  (sd->matB).m[6] = (short)(iVar6 >> 4);
  sVar3 = (sd->matB).m[5];
  (sd->matB).m[7] = (short)(iVar8 >> 4);
  (sd->matB).m[8] = (short)(iVar9 >> 4);
  (sd->matB).m[4] = -sVar4;
  (sd->matB).m[5] = -sVar3;
  (sd->matB).t[0] = t->x >> 10;
  (sd->matB).t[1] = -(t->y >> 10);
  (sd->matB).t[2] = t->z >> 10;
  TrsProj_ResetTransPrecision__Fv();
  uVar13 = (uint)obj->numFacet;
  iVar6 = uVar13 * 0xc;
LAB_800c3b64:
  do {
    type_00 = uVar13 - 1;
    iVar8 = iVar6;
    do {
      do {
        do {
          uVar13 = type_00;
          iVar6 = iVar8 + -0xc;
          if (uVar13 == 0xffffffff) {
            return;
          }
          psVar10 = (short *)(&obj->facet[-1].vertexId1 + iVar8);
          bVar1 = *(byte *)(psVar10 + 2);
          bVar2 = *(byte *)((int)psVar10 + 5);
          setCopControlWord(2,0,*(undefined4 *)(sd->matB).m);
          setCopControlWord(2,0x800,*(undefined4 *)((sd->matB).m + 2));
          setCopControlWord(2,0x1000,*(undefined4 *)((sd->matB).m + 4));
          setCopControlWord(2,0x1800,*(undefined4 *)((sd->matB).m + 6));
          setCopControlWord(2,0x2000,*(undefined4 *)((sd->matB).m + 8));
          setCopControlWord(2,0x2800,(sd->matB).t[0]);
          setCopControlWord(2,0x3000,(sd->matB).t[1]);
          setCopControlWord(2,0x3800,(sd->matB).t[2]);
          pCVar5 = pCVar14 + (uint)*(byte *)((int)psVar10 + 3);
          sVar4 = pCVar5->x;
          sVar3 = pCVar5->y;
          (sd->vt0).z = pCVar5->z;
          pCVar5 = pCVar14 + (uint)bVar1;
          (sd->vt0).x = sVar4;
          (sd->vt0).y = sVar3;
          sVar4 = pCVar5->x;
          sVar3 = pCVar5->y;
          (sd->vt1).z = pCVar5->z;
          pCVar5 = pCVar14 + (uint)bVar2;
          (sd->vt1).x = sVar4;
          (sd->vt1).y = sVar3;
          sVar4 = pCVar5->x;
          sVar3 = pCVar5->z;
          (sd->vt2).y = pCVar5->y;
          (sd->vt2).x = sVar4;
          (sd->vt2).z = sVar3;
          setCopReg(2,in_zero,*(undefined4 *)&sd->vt0);
          setCopReg(2,in_at,*(undefined4 *)&(sd->vt0).z);
          setCopReg(2,&sd->vt2,*(undefined4 *)&sd->vt1);
          setCopReg(2,&sd->vt1,*(undefined4 *)&(sd->vt1).z);
          setCopReg(2,&sd->vt0,*(undefined4 *)&sd->vt2);
          setCopReg(2,(uint)bVar1,*(undefined4 *)&(sd->vt2).z);
          copFunction(2,0x280030);
          copFunction(2,0x1400006);
          iVar8 = getCopReg(2,0x18);
          sd->bfct = iVar8;
          iVar9 = sd->bfct;
          if ((sd->head).mirror != 0) {
            iVar9 = -iVar9;
          }
          type_00 = uVar13 - 1;
          iVar8 = iVar6;
        } while (iVar9 < 1);
        copFunction(2,0x158002d);
        iVar8 = getCopReg(2,7);
        sd->otz = iVar8;
        iVar9 = sd->otz + sd->sub_otz;
        sd->otz = iVar9;
        if (iVar9 < 0) goto LAB_800c3b64;
        type_00 = uVar13 - 1;
        iVar8 = iVar6;
      } while (sd->sub_otSize < iVar9);
      uVar11 = type & 0xffbf;
      if (index < 0) goto LAB_800c3dc8;
      if (*psVar10 < 0) {
        uVar7 = (int)((uint)(ushort)(&DrawC_gOverlay)[index] << 0x10) >> 0x18;
      }
      else {
        uVar7 = (int)((uint)(ushort)(&DrawC_gOverlay)[index] << 0x10) >> 0x10 & 0xff;
      }
      if (((type & 0x40U) != 0) && ((uVar7 & 0x40) == 0)) {
        if (*psVar10 < 0) {
          uVar7 = (int)((uint)DAT_8011f538 << 0x10) >> 0x18;
        }
        else {
          uVar7 = (int)((uint)DAT_8011f538 << 0x10) >> 0x10 & 0xff;
        }
      }
      type_00 = uVar13 - 1;
      iVar8 = iVar6;
    } while ((uVar7 & 0x81) == 0);
    type_00 = type & 0xbf;
    if (((uVar7 & 3) != 1) && ((type & 0x7f00U) != 0)) {
      uVar11 = (int)uVar11 >> 8;
LAB_800c3dc8:
      type_00 = uVar11 & 0xff;
    }
    puVar12 = (sd->head).cprim.LastPrim;
    (sd->head).cprim.LastPrim = sd->sub_ot;
    Flare_CarShapedHalo__FiP7COORD16N21siP15Draw_FlareCache
              (type_00,&sd->vt0,&sd->vt1,&sd->vt2,(int)*psVar10,sd->otz,(Draw_FlareCache *)sd);
    if (((0 < reflect) || ((reflect == -1 && (type_00 == 5)))) ||
       ((reflect == -2 && (type_00 != 5)))) {
      setCopControlWord(2,0,*(undefined4 *)(sd->matB).m);
      setCopControlWord(2,0x800,*(undefined4 *)((sd->matB).m + 2));
      setCopControlWord(2,0x1000,*(undefined4 *)((sd->matB).m + 4));
      setCopControlWord(2,0x1800,*(undefined4 *)((sd->matB).m + 6));
      setCopControlWord(2,0x2000,*(undefined4 *)((sd->matB).m + 8));
      setCopControlWord(2,0x2800,(sd->matB).t[0]);
      setCopControlWord(2,0x3000,(sd->matB).t[1]);
      setCopControlWord(2,0x3800,(sd->matB).t[2]);
      Flare_CarShapedHalo__FiP7COORD16N21siP15Draw_FlareCache
                (uVar11 & 0xff | 0x100,&sd->vt0,&sd->vt1,&sd->vt2,(int)*psVar10,sd->otz,
                 (Draw_FlareCache *)sd);
    }
    (sd->head).cprim.LastPrim = puVar12;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_ShadowPrim__FP12Draw_tVertexP13Draw_CarCache(struct Draw_tVertex *shadowVT /*$s1*/, struct Draw_CarCache *sd /*$s0*/)
 // line 3997, offset 0x800c3ed8
	/* begin block 1 */
		// Start line: 3998
		// Start offset: 0x800C3ED8
		// Variables:
	// 		struct POLY_FT4 *prim; // $a3
	// 		struct Draw_tPixMap *shadowPmx; // $s2

		/* begin block 1.1 */
			// Start line: 4035
			// Start offset: 0x800C403C
			// Variables:
		// 		unsigned long *ot; // $a0
		/* end block 1.1 */
		// End offset: 0x800C403C
		// End Line: 4035

		/* begin block 1.2 */
			// Start line: 4035
			// Start offset: 0x800C403C
			// Variables:
		// 		unsigned long l0; // $v0
		// 		unsigned long l1; // $v1
		// 		unsigned long l2; // $a0
		// 		unsigned long l3; // $a1
		/* end block 1.2 */
		// End offset: 0x800C40C4
		// End Line: 4050
	/* end block 1 */
	// End offset: 0x800C40C4
	// End Line: 4050

void DrawC_ShadowPrim__FP12Draw_tVertexP13Draw_CarCache(Draw_tVertex *shadowVT,Draw_CarCache *sd)
{
  undefined4 uVar1;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  
  puVar10 = (uint *)0x0;
  if (false) {
    puVar10 = DAT_80120fd4;
  }
  uVar7 = 2;
  ChangeTPage__FPUsi((ushort *)((int)puVar10 + 6),2);
  iVar2 = _DAT_1f800004;
  setCopControlWord(2,0,DrawC_gScreenMat);
  setCopControlWord(2,0x800,DAT_8011f4cc);
  setCopControlWord(2,0x1000,DAT_8011f4d0);
  setCopControlWord(2,0x1800,DAT_8011f4d4);
  setCopControlWord(2,0x2000,DAT_8011f4d8);
  setCopControlWord(2,0x2800,DAT_8011f4dc);
  setCopControlWord(2,0x3000,DAT_8011f4e0);
  setCopControlWord(2,0x3800,DAT_8011f4e4);
  if ((sd->head).cprim.PrimPtr < (sd->head).cprim.MPrimPtr) {
    setCopReg(2,in_zero,*(undefined4 *)&shadowVT->sv);
    setCopReg(2,in_at,*(undefined4 *)&(shadowVT->sv).z);
    copFunction(2,0x180001);
    uVar1 = getCopReg(2,0xe);
    *(undefined4 *)(_DAT_1f800004 + 8) = uVar1;
    setCopReg(2,in_zero,*(undefined4 *)&shadowVT[1].sv);
    setCopReg(2,in_at,*(undefined4 *)&shadowVT[1].sv.z);
    setCopReg(2,shadowVT + 2,*(undefined4 *)&shadowVT[3].sv);
    setCopReg(2,shadowVT + 3,*(undefined4 *)&shadowVT[3].sv.z);
    setCopReg(2,shadowVT + 1,*(undefined4 *)&shadowVT[2].sv);
    setCopReg(2,uVar7,*(undefined4 *)&shadowVT[2].sv.z);
    copFunction(2,0x280030);
    uVar7 = getCopReg(2,0xc);
    *(undefined4 *)(iVar2 + 0x10) = uVar7;
    uVar7 = getCopReg(2,0xd);
    *(undefined4 *)(iVar2 + 0x20) = uVar7;
    uVar7 = getCopReg(2,0xe);
    *(undefined4 *)(iVar2 + 0x18) = uVar7;
    copFunction(2,0x168002e);
    iVar2 = getCopReg(2,7);
    sd->otz = iVar2;
    iVar2 = (sd->otz >> 1) + 0x28;
    sd->otz = iVar2;
    if ((-1 < iVar2) && (iVar2 <= Draw_gViewOtSize + -3)) {
      puVar9 = (uint *)(sd->head).cprim.PrimPtr;
      puVar4 = (sd->head).cprim.LastPrim;
      *(uint **)&(sd->head).cprim.PrimPtr = puVar9 + 10;
      puVar5 = puVar4 + iVar2;
      *puVar9 = *puVar9 & 0xff000000 | *puVar5 & 0xffffff;
      *puVar5 = *puVar5 & 0xff000000 | (uint)puVar9 & 0xffffff;
      uVar3 = sd->color;
      *(undefined *)((int)puVar9 + 3) = 9;
      puVar9[1] = uVar3;
      *(undefined *)((int)puVar9 + 7) = 0x2e;
      uVar3 = puVar10[1];
      uVar6 = puVar10[2];
      uVar8 = puVar10[3];
      puVar9[3] = *puVar10;
      puVar9[5] = uVar3;
      puVar9[7] = uVar6;
      puVar9[9] = uVar8;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_DivideShadowPrim__FP7COORD16N30PUsN34P12Draw_tPixMapP13Draw_CarCache(struct COORD16 *vt0 /*$t2*/, struct COORD16 *vt1 /*$a1*/, struct COORD16 *vt2 /*$a2*/, struct COORD16 *vt3 /*$a3*/, unsigned short *u0 /*stack 16*/, unsigned short *u1 /*stack 20*/, unsigned short *u2 /*stack 24*/, unsigned short *u3 /*stack 28*/, struct Draw_tPixMap *pmx /*stack 32*/, struct Draw_CarCache *sd /*stack 36*/)
 // line 4056, offset 0x800c40dc
	/* begin block 1 */
		// Start line: 4057
		// Start offset: 0x800C40DC
		// Variables:
	// 		struct POLY_FT4 *prim; // $t0

		/* begin block 1.1 */
			// Start line: 4091
			// Start offset: 0x800C4200
			// Variables:
		// 		unsigned long *ot; // $a0
		/* end block 1.1 */
		// End offset: 0x800C4200
		// End Line: 4091

		/* begin block 1.2 */
			// Start line: 4091
			// Start offset: 0x800C4200
			// Variables:
		// 		unsigned short uv0; // $a1
		// 		unsigned short uv1; // $a0
		// 		unsigned short uv2; // $v1
		// 		unsigned short uv3; // $v0
		// 		unsigned short clut; // $v0
		// 		unsigned short tpage; // $v1
		/* end block 1.2 */
		// End offset: 0x800C42BC
		// End Line: 4113
	/* end block 1 */
	// End offset: 0x800C42BC
	// End Line: 4113

void DrawC_DivideShadowPrim__FP7COORD16N30PUsN34P12Draw_tPixMapP13Draw_CarCache( (COORD16 *vt0,COORD16 *vt1,COORD16 *vt2,COORD16 *vt3,ushort *u0,ushort *u1,ushort *u2 ,ushort *u3,Draw_tPixMap *pmx,Draw_CarCache *sd)
{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  uint *puVar10;
  uint *puVar11;
  
  iVar7 = _DAT_1f800004;
  pcVar6 = (sd->head).cprim.MPrimPtr;
  if ((sd->head).cprim.PrimPtr < pcVar6) {
    setCopReg(2,in_zero,*(undefined4 *)vt0);
    setCopReg(2,in_at,*(undefined4 *)&vt0->z);
    copFunction(2,0x180001);
    puVar5 = (undefined4 *)(_DAT_1f800004 + 8);
    uVar4 = getCopReg(2,0xe);
    *puVar5 = uVar4;
    setCopReg(2,in_zero,*(undefined4 *)vt1);
    setCopReg(2,in_at,*(undefined4 *)&vt1->z);
    setCopReg(2,puVar5,*(undefined4 *)vt2);
    setCopReg(2,pcVar6,*(undefined4 *)&vt2->z);
    setCopReg(2,vt0,*(undefined4 *)vt3);
    setCopReg(2,vt1,*(undefined4 *)&vt3->z);
    copFunction(2,0x280030);
    uVar4 = getCopReg(2,0xc);
    *(undefined4 *)(iVar7 + 0x10) = uVar4;
    uVar4 = getCopReg(2,0xd);
    *(undefined4 *)(iVar7 + 0x20) = uVar4;
    uVar4 = getCopReg(2,0xe);
    *(undefined4 *)(iVar7 + 0x18) = uVar4;
    if (true) {
      copFunction(2,0x168002e);
      iVar7 = getCopReg(2,7);
      sd->otz = iVar7;
      iVar7 = (sd->otz >> 3) + 0x28;
      sd->otz = iVar7;
      if (iVar7 < 0) {
        return;
      }
      if (Draw_gViewOtSize + -3 < iVar7) {
        return;
      }
    }
    else {
      sd->otz = 0;
    }
    if ((((-1 < vt0->z) || (-1 < vt1->z)) || (-1 < vt2->z)) || (-1 < vt3->z)) {
      puVar11 = (uint *)(sd->head).cprim.PrimPtr;
      puVar9 = (sd->head).cprim.LastPrim;
      *(uint **)&(sd->head).cprim.PrimPtr = puVar11 + 10;
      puVar10 = puVar9 + sd->otz;
      *puVar11 = *puVar11 & 0xff000000 | *puVar10 & 0xffffff;
      *puVar10 = *puVar10 & 0xff000000 | (uint)puVar11 & 0xffffff;
      uVar8 = sd->color;
      *(undefined *)((int)puVar11 + 3) = 9;
      puVar11[1] = uVar8;
      *(undefined *)((int)puVar11 + 7) = 0x2e;
      uVar1 = pmx->tpage;
      *(ushort *)((int)puVar11 + 0xe) = pmx->clut;
      *(ushort *)((int)puVar11 + 0x16) = uVar1;
      uVar1 = *u1;
      uVar2 = *u3;
      uVar3 = *u2;
      *(ushort *)(puVar11 + 3) = *u0;
      *(ushort *)(puVar11 + 5) = uVar1;
      *(ushort *)(puVar11 + 7) = uVar2;
      *(ushort *)(puVar11 + 9) = uVar3;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_ShadowPrimClip__FP12Draw_tVertexP13Draw_CarCache(struct Draw_tVertex *shadowVT /*$s0*/, struct Draw_CarCache *sd /*$s7*/)
 // line 4117, offset 0x800c42c4
	/* begin block 1 */
		// Start line: 4118
		// Start offset: 0x800C42C4
		// Variables:
	// 		struct Draw_tPixMap *shadowPmx; // $fp

		/* begin block 1.1 */
			// Start line: 4122
			// Start offset: 0x800C4314
			// Variables:
		// 		short t1; // $v0
		// 		short t2; // $v1
		// 		short t3; // $a0
		/* end block 1.1 */
		// End offset: 0x800C4314
		// End Line: 4122

		/* begin block 1.2 */
			// Start line: 4122
			// Start offset: 0x800C4314
			// Variables:
		// 		short *z; // $v0
		// 		short t1; // $v1
		// 		short t2; // $a0
		// 		short t3; // $v0
		/* end block 1.2 */
		// End offset: 0x800C4314
		// End Line: 4122

		/* begin block 1.3 */
			// Start line: 4122
			// Start offset: 0x800C4314
			// Variables:
		// 		short *z; // $v0
		// 		short t1; // $v1
		// 		short t2; // $a0
		// 		short t3; // $v0
		/* end block 1.3 */
		// End offset: 0x800C4314
		// End Line: 4122

		/* begin block 1.4 */
			// Start line: 4122
			// Start offset: 0x800C4314
			// Variables:
		// 		short *z; // $v1
		// 		short t1; // $a1
		// 		short t2; // $a2
		// 		short t3; // $a0
		/* end block 1.4 */
		// End offset: 0x800C4314
		// End Line: 4122

		/* begin block 1.5 */
			// Start line: 4122
			// Start offset: 0x800C4314
			// Variables:
		// 		unsigned short uv0; // $v0
		// 		unsigned short uv1; // $v1
		// 		unsigned short uv2; // $a3
		// 		unsigned short uv3; // $t0
		/* end block 1.5 */
		// End offset: 0x800C4314
		// End Line: 4122
	/* end block 1 */
	// End offset: 0x800C4314
	// End Line: 4122

void DrawC_ShadowPrimClip__FP12Draw_tVertexP13Draw_CarCache( (Draw_tVertex *shadowVT,Draw_CarCache *sd)
{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  ushort *u2;
  COORD16 *vt2;
  Draw_tPixMap *pmx;
  
  pmx = (Draw_tPixMap *)0x0;
  if (false) {
    pmx = DAT_80120fd4;
  }
  ChangeTPage__FPUsi(&pmx->tpage,2);
  setCopControlWord(2,0,DrawC_gScreenMat);
  setCopControlWord(2,0x800,DAT_8011f4cc);
  setCopControlWord(2,0x1000,DAT_8011f4d0);
  setCopControlWord(2,0x1800,DAT_8011f4d4);
  setCopControlWord(2,0x2000,DAT_8011f4d8);
  setCopControlWord(2,0x2800,DAT_8011f4dc);
  setCopControlWord(2,0x3000,DAT_8011f4e0);
  setCopControlWord(2,0x3800,DAT_8011f4e4);
  vt2 = &sd->vt8;
  sVar1 = (shadowVT->sv).y;
  sVar2 = (shadowVT->sv).z;
  (sd->vt0).x = (shadowVT->sv).x;
  (sd->vt0).y = sVar1;
  (sd->vt0).z = sVar2;
  sVar1 = shadowVT[1].sv.x;
  sVar2 = shadowVT[1].sv.y;
  (sd->vt1).z = shadowVT[1].sv.z;
  (sd->vt1).x = sVar1;
  (sd->vt1).y = sVar2;
  sVar1 = shadowVT[3].sv.y;
  sVar2 = shadowVT[3].sv.z;
  (sd->vt2).x = shadowVT[3].sv.x;
  (sd->vt2).y = sVar1;
  (sd->vt2).z = sVar2;
  sVar1 = shadowVT[2].sv.x;
  sVar2 = shadowVT[2].sv.y;
  sVar3 = shadowVT[2].sv.z;
  (sd->vt0).x = (sd->vt0).x << 2;
  sVar4 = (sd->vt0).y;
  (sd->vt0).z = (sd->vt0).z << 2;
  sVar5 = (sd->vt1).y;
  u2 = (ushort *)&sd->offsetU2;
  (sd->vt3).x = sVar1;
  (sd->vt3).y = sVar2;
  (sd->vt3).z = sVar3;
  (sd->vt0).y = sVar4 << 2;
  (sd->vt1).x = (sd->vt1).x << 2;
  (sd->vt1).y = sVar5 << 2;
  sVar4 = (sd->vt2).x;
  (sd->vt1).z = (sd->vt1).z << 2;
  (sd->vt2).x = sVar4 << 2;
  (sd->vt2).y = (sd->vt2).y << 2;
  (sd->vt2).z = (sd->vt2).z << 2;
  (sd->vt3).y = sVar2 << 2;
  (sd->vt3).x = sVar1 << 2;
  sVar1 = (sd->vt0).x;
  sVar2 = (sd->vt1).x;
  (sd->vt3).z = sVar3 << 2;
  sVar3 = (sd->vt0).y;
  sVar4 = (sd->vt1).y;
  (sd->vt4).x = (short)((int)sVar1 + (int)sVar2 + 1 >> 1);
  sVar1 = (sd->vt0).z;
  sVar2 = (sd->vt1).z;
  (sd->vt4).y = (short)((int)sVar3 + (int)sVar4 + 1 >> 1);
  sVar3 = (sd->vt1).x;
  sVar4 = (sd->vt2).x;
  (sd->vt4).z = (short)((int)sVar1 + (int)sVar2 + 1 >> 1);
  sVar1 = (sd->vt1).y;
  sVar2 = (sd->vt2).y;
  (sd->vt5).x = (short)((int)sVar3 + (int)sVar4 + 1 >> 1);
  sVar3 = (sd->vt1).z;
  sVar4 = (sd->vt2).z;
  (sd->vt5).y = (short)((int)sVar1 + (int)sVar2 + 1 >> 1);
  sVar1 = (sd->vt2).x;
  sVar2 = (sd->vt3).x;
  (sd->vt5).z = (short)((int)sVar3 + (int)sVar4 + 1 >> 1);
  (sd->vt6).x = (short)((int)sVar1 + (int)sVar2 + 1 >> 1);
  sVar1 = (sd->vt3).z;
  sVar2 = (sd->vt2).z;
  (sd->vt6).y = (short)((int)(sd->vt2).y + (int)(sd->vt3).y + 1 >> 1);
  sVar3 = (sd->vt3).x;
  sVar4 = (sd->vt0).x;
  (sd->vt6).z = (short)((int)sVar2 + (int)sVar1 + 1 >> 1);
  sVar1 = (sd->vt3).y;
  sVar2 = (sd->vt0).y;
  (sd->vt7).x = (short)((int)sVar3 + (int)sVar4 + 1 >> 1);
  sVar3 = (sd->vt3).z;
  sVar4 = (sd->vt0).z;
  (sd->vt7).y = (short)((int)sVar1 + (int)sVar2 + 1 >> 1);
  sVar1 = (sd->vt0).x;
  sVar2 = (sd->vt2).x;
  (sd->vt7).z = (short)((int)sVar3 + (int)sVar4 + 1 >> 1);
  sVar3 = (sd->vt2).y;
  sVar4 = (sd->vt0).y;
  (sd->vt8).x = (short)((int)sVar1 + (int)sVar2 + 1 >> 1);
  sVar1 = (sd->vt2).z;
  sVar2 = (sd->vt0).z;
  (sd->vt8).y = (short)((int)sVar4 + (int)sVar3 + 1 >> 1);
  (sd->vt8).z = (short)((int)sVar2 + (int)sVar1 + 1 >> 1);
  uVar6 = *(undefined2 *)&pmx->u1;
  uVar7 = *(undefined2 *)&pmx->u3;
  uVar8 = *(undefined2 *)&pmx->u2;
  *(undefined2 *)&sd->u0 = *(undefined2 *)pmx;
  *(undefined2 *)&sd->u1 = uVar6;
  *(undefined2 *)&sd->u2 = uVar7;
  *(undefined2 *)&sd->u3 = uVar8;
  sd->u4 = (uchar)((int)((uint)sd->u0 + (uint)sd->u1 + 1) >> 1);
  sd->v4 = (uchar)((int)((uint)sd->v0 + (uint)sd->v1 + 1) >> 1);
  sd->u5 = (uchar)((int)((uint)sd->u1 + (uint)sd->u2 + 1) >> 1);
  sd->v5 = (uchar)((int)((uint)sd->v1 + (uint)sd->v2 + 1) >> 1);
  sd->offsetU0 = (uchar)((int)((uint)sd->u2 + (uint)sd->u3 + 1) >> 1);
  sd->offsetV0 = (uchar)((int)((uint)sd->v2 + (uint)sd->v3 + 1) >> 1);
  sd->offsetU1 = (uchar)((int)((uint)sd->u3 + (uint)sd->u0 + 1) >> 1);
  sd->offsetV1 = (uchar)((int)((uint)sd->v3 + (uint)sd->v0 + 1) >> 1);
  sd->offsetU2 = (uchar)((int)((uint)sd->u0 + (uint)sd->u2 + 1) >> 1);
  sd->offsetV2 = (uchar)((int)((uint)sd->v0 + (uint)sd->v2 + 1) >> 1);
  DrawC_DivideShadowPrim__FP7COORD16N30PUsN34P12Draw_tPixMapP13Draw_CarCache
            (&sd->vt0,&sd->vt4,vt2,&sd->vt7,(ushort *)&sd->u0,(ushort *)&sd->u4,u2,
             (ushort *)&sd->offsetU1,pmx,sd);
  DrawC_DivideShadowPrim__FP7COORD16N30PUsN34P12Draw_tPixMapP13Draw_CarCache
            (&sd->vt4,&sd->vt1,&sd->vt5,vt2,(ushort *)&sd->u4,(ushort *)&sd->u1,(ushort *)&sd->u5,u2
             ,pmx,sd);
  DrawC_DivideShadowPrim__FP7COORD16N30PUsN34P12Draw_tPixMapP13Draw_CarCache
            (&sd->vt7,vt2,&sd->vt6,&sd->vt3,(ushort *)&sd->offsetU1,u2,(ushort *)&sd->offsetU0,
             (ushort *)&sd->u3,pmx,sd);
  DrawC_DivideShadowPrim__FP7COORD16N30PUsN34P12Draw_tPixMapP13Draw_CarCache
            (vt2,&sd->vt5,&sd->vt2,&sd->vt6,u2,(ushort *)&sd->u5,(ushort *)&sd->u2,
             (ushort *)&sd->offsetU0,pmx,sd);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_SpotPrims__FP10matrixtdefP8coorddefP13Draw_CarCache(struct matrixtdef *m /*$s0*/, struct coorddef *t /*$s1*/, struct Draw_CarCache *sd /*$s2*/)
 // line 4189, offset 0x800c4800
	/* begin block 1 */
		// Start line: 4190
		// Start offset: 0x800C4800
		// Variables:
	// 		int i; // $a3
	// 		struct POLY_G3 *prim; // $a0

		/* begin block 1.1 */
			// Start line: 4190
			// Start offset: 0x800C4800
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.1 */
		// End offset: 0x800C4800
		// End Line: 4190

		/* begin block 1.2 */
			// Start line: 4190
			// Start offset: 0x800C4800
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.2 */
		// End offset: 0x800C4800
		// End Line: 4190

		/* begin block 1.3 */
			// Start line: 4190
			// Start offset: 0x800C4800
			// Variables:
		// 		int r0; // $v1
		// 		int r1; // $a0
		// 		int r2; // $a1
		/* end block 1.3 */
		// End offset: 0x800C4800
		// End Line: 4190

		/* begin block 1.4 */
			// Start line: 4190
			// Start offset: 0x800C4800
			// Variables:
		// 		struct DR_MODE *prim; // $a0

			/* begin block 1.4.1 */
				// Start line: 4190
				// Start offset: 0x800C4800
				// Variables:
			// 		unsigned long *ot; // $t0
			/* end block 1.4.1 */
			// End offset: 0x800C4800
			// End Line: 4190
		/* end block 1.4 */
		// End offset: 0x800C4800
		// End Line: 4190

		/* begin block 1.5 */
			// Start line: 4190
			// Start offset: 0x800C4800
			// Variables:
		// 		short *z; // $v0
		// 		short t1; // $v1
		// 		short t2; // $a0
		// 		short t3; // $v0
		/* end block 1.5 */
		// End offset: 0x800C4800
		// End Line: 4190

		/* begin block 1.6 */
			// Start line: 4190
			// Start offset: 0x800C4800

			/* begin block 1.6.1 */
				// Start line: 4225
				// Start offset: 0x800C49E4
				// Variables:
			// 		int iPlus; // $a1

				/* begin block 1.6.1.1 */
					// Start line: 4232
					// Start offset: 0x800C4A18
					// Variables:
				// 		short t1; // $v0
				// 		short t2; // $v1
				// 		short t3; // $a0
				/* end block 1.6.1.1 */
				// End offset: 0x800C4A18
				// End Line: 4232

				/* begin block 1.6.1.2 */
					// Start line: 4232
					// Start offset: 0x800C4A18
					// Variables:
				// 		short *z; // $v0
				// 		short t1; // $v1
				// 		short t2; // $a0
				// 		short t3; // $v0
				/* end block 1.6.1.2 */
				// End offset: 0x800C4A18
				// End Line: 4232

				/* begin block 1.6.1.3 */
					// Start line: 4232
					// Start offset: 0x800C4A18
					// Variables:
				// 		unsigned long *ot; // $a1
				/* end block 1.6.1.3 */
				// End offset: 0x800C4A18
				// End Line: 4232
			/* end block 1.6.1 */
			// End offset: 0x800C4AF8
			// End Line: 4251
		/* end block 1.6 */
		// End offset: 0x800C4B04
		// End Line: 4252

		/* begin block 1.7 */
			// Start line: 4255
			// Start offset: 0x800C4B04
			// Variables:
		// 		struct DR_MODE *prim; // $a0

			/* begin block 1.7.1 */
				// Start line: 4255
				// Start offset: 0x800C4B04
				// Variables:
			// 		unsigned long *ot; // $t0
			/* end block 1.7.1 */
			// End offset: 0x800C4B04
			// End Line: 4255
		/* end block 1.7 */
		// End offset: 0x800C4B04
		// End Line: 4255
	/* end block 1 */
	// End offset: 0x800C4B04
	// End Line: 4255

void DrawC_SpotPrims__FP10matrixtdefP8coorddefP13Draw_CarCache( (matrixtdef *m,coorddef *t,Draw_CarCache *sd)
{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 in_zero;
  undefined4 in_at;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  short *psVar10;
  ulong *puVar11;
  uint *puVar12;
  
  TrsProj_SetTransPrecision__Fi(8);
  iVar5 = m->m[3];
  iVar7 = m->m[6];
  (sd->matB).m[0] = (short)(m->m[0] >> 4);
  (sd->matB).m[1] = (short)(iVar5 >> 4);
  (sd->matB).m[2] = (short)(iVar7 >> 4);
  iVar5 = m->m[4];
  iVar7 = m->m[7];
  sVar4 = (short)(m->m[1] >> 4);
  (sd->matB).m[3] = sVar4;
  (sd->matB).m[4] = (short)(iVar5 >> 4);
  (sd->matB).m[5] = (short)(iVar7 >> 4);
  iVar5 = m->m[2];
  iVar7 = m->m[5];
  iVar9 = m->m[8];
  (sd->matB).m[3] = -sVar4;
  sVar4 = (sd->matB).m[4];
  (sd->matB).m[6] = (short)(iVar5 >> 4);
  sVar1 = (sd->matB).m[5];
  (sd->matB).m[7] = (short)(iVar7 >> 4);
  (sd->matB).m[8] = (short)(iVar9 >> 4);
  (sd->matB).m[4] = -sVar4;
  (sd->matB).m[5] = -sVar1;
  (sd->matB).t[0] = t->x >> 10;
  (sd->matB).t[1] = -(t->y >> 10);
  (sd->matB).t[2] = t->z >> 10;
  TrsProj_ResetTransPrecision__Fv();
  setCopControlWord(2,0,*(undefined4 *)(sd->matB).m);
  setCopControlWord(2,0x800,*(undefined4 *)((sd->matB).m + 2));
  setCopControlWord(2,0x1000,*(undefined4 *)((sd->matB).m + 4));
  setCopControlWord(2,0x1800,*(undefined4 *)((sd->matB).m + 6));
  setCopControlWord(2,0x2000,*(undefined4 *)((sd->matB).m + 8));
  setCopControlWord(2,0x2800,(sd->matB).t[0]);
  setCopControlWord(2,0x3000,(sd->matB).t[1]);
  setCopControlWord(2,0x3800,(sd->matB).t[2]);
  puVar8 = (uint *)(sd->head).cprim.PrimPtr;
  puVar11 = (sd->head).cprim.LastPrim;
  sd->otz = 0;
  *(uint **)&(sd->head).cprim.PrimPtr = puVar8 + 3;
  puVar12 = puVar11 + sd->otz;
  *puVar8 = *puVar8 & 0xff000000 | *puVar12 & 0xffffff;
  *puVar12 = *puVar12 & 0xff000000 | (uint)puVar8 & 0xffffff;
  SetDrawMode(puVar8,0,0,0x120,0);
  iVar5 = 0;
  psVar10 = &Fe3D_spotVertex;
  (sd->vt0).x = 0;
  (sd->vt0).y = 0;
  (sd->vt0).z = 0;
  while (iVar7 = iVar5 + 1, iVar5 < 0x20) {
    if (iVar7 == 0x20) {
      iVar7 = 0;
    }
    if ((sd->head).cprim.PrimPtr < (sd->head).cprim.MPrimPtr) {
      sVar4 = psVar10[1];
      sVar1 = psVar10[2];
      (sd->vt1).x = *psVar10;
      (sd->vt1).y = sVar4;
      (sd->vt1).z = sVar1;
      uVar2 = (&Fe3D_spotVertex)[iVar7 * 3];
      uVar3 = (&DAT_8005126e)[iVar7 * 3];
      (sd->vt2).z = (&DAT_80051270)[iVar7 * 3];
      (sd->vt2).x = uVar2;
      (sd->vt2).y = uVar3;
      setCopReg(2,in_zero,*(undefined4 *)&sd->vt0);
      setCopReg(2,in_at,*(undefined4 *)&(sd->vt0).z);
      setCopReg(2,&sd->vt2,*(undefined4 *)&sd->vt1);
      setCopReg(2,(uint)uVar2,*(undefined4 *)&(sd->vt1).z);
      setCopReg(2,(uint)uVar3,*(undefined4 *)&sd->vt2);
      setCopReg(2,iVar7,*(undefined4 *)&(sd->vt2).z);
      copFunction(2,0x280030);
      puVar8 = (uint *)(sd->head).cprim.PrimPtr;
      puVar11 = (sd->head).cprim.LastPrim;
      *(uint **)&(sd->head).cprim.PrimPtr = puVar8 + 7;
      puVar12 = puVar11 + sd->otz;
      *puVar8 = *puVar8 & 0xff000000 | *puVar12 & 0xffffff;
      *puVar12 = *puVar12 & 0xff000000 | (uint)puVar8 & 0xffffff;
      uVar6 = getCopReg(2,0xc);
      puVar8[2] = uVar6;
      uVar6 = getCopReg(2,0xd);
      puVar8[4] = uVar6;
      uVar6 = getCopReg(2,0xe);
      puVar8[6] = uVar6;
      uVar6 = sd->color;
      *(undefined *)((int)puVar8 + 3) = 6;
      puVar8[3] = 0;
      puVar8[5] = 0;
      puVar8[1] = uVar6;
      *(undefined *)((int)puVar8 + 7) = 0x32;
    }
    psVar10 = psVar10 + 3;
    iVar5 = iVar5 + 1;
  }
  puVar8 = (uint *)(sd->head).cprim.PrimPtr;
  puVar11 = (sd->head).cprim.LastPrim;
  *(uint **)&(sd->head).cprim.PrimPtr = puVar8 + 3;
  puVar12 = puVar11 + sd->otz;
  *puVar8 = *puVar8 & 0xff000000 | *puVar12 & 0xffffff;
  *puVar12 = *puVar12 & 0xff000000 | (uint)puVar8 & 0xffffff;
  SetDrawMode(puVar8,0,1,0x120,0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DrawC_ShowroomPrims__FP10matrixtdefP8coorddefP13Draw_CarCache(struct matrixtdef *m /*$s2*/, struct coorddef *t /*$s3*/, struct Draw_CarCache *sd /*$s0*/)
 // line 4260, offset 0x800c4b84
	/* begin block 1 */
		// Start line: 4261
		// Start offset: 0x800C4B84
		// Variables:
	// 		int i; // $t0
	// 		int j; // $a3
	// 		char hilight_state[32]; // stack offset -72
	// 		int hilight[2]; // stack offset -40
	// 		int hilight_direction[2]; // stack offset -32
	// 		int index; // $v0
	// 		struct POLY_FT4 *prim; // $a2
	// 		struct Draw_tPixMap *lightPmx; // $s1

		/* begin block 1.1 */
			// Start line: 4261
			// Start offset: 0x800C4B84

			/* begin block 1.1.1 */
				// Start line: 4273
				// Start offset: 0x800C4BC0

				/* begin block 1.1.1.1 */
					// Start line: 4299
					// Start offset: 0x800C4CB8
					// Variables:
				// 		int r0; // $v0
				// 		int r1; // $v1
				// 		int r2; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x800C4CB8
				// End Line: 4299

				/* begin block 1.1.1.2 */
					// Start line: 4299
					// Start offset: 0x800C4CB8
					// Variables:
				// 		int r0; // $v0
				// 		int r1; // $v1
				// 		int r2; // $a0
				/* end block 1.1.1.2 */
				// End offset: 0x800C4CB8
				// End Line: 4299

				/* begin block 1.1.1.3 */
					// Start line: 4299
					// Start offset: 0x800C4CB8
					// Variables:
				// 		int r0; // $v1
				// 		int r1; // $a0
				// 		int r2; // $a1
				/* end block 1.1.1.3 */
				// End offset: 0x800C4CB8
				// End Line: 4299

				/* begin block 1.1.1.4 */
					// Start line: 4299
					// Start offset: 0x800C4CB8

					/* begin block 1.1.1.4.1 */
						// Start line: 4326
						// Start offset: 0x800C4E10
						// Variables:
					// 		int index; // $v0
					// 		int iPlus; // $a1

						/* begin block 1.1.1.4.1.1 */
							// Start line: 4334
							// Start offset: 0x800C4E48
							// Variables:
						// 		short t1; // $v0
						// 		short t2; // $v1
						// 		short t3; // $a0
						/* end block 1.1.1.4.1.1 */
						// End offset: 0x800C4E48
						// End Line: 4334

						/* begin block 1.1.1.4.1.2 */
							// Start line: 4334
							// Start offset: 0x800C4E48
							// Variables:
						// 		short *z; // $v0
						// 		short t1; // $a0
						// 		short t2; // $a1
						// 		short t3; // $v0
						/* end block 1.1.1.4.1.2 */
						// End offset: 0x800C4E48
						// End Line: 4334

						/* begin block 1.1.1.4.1.3 */
							// Start line: 4334
							// Start offset: 0x800C4E48
							// Variables:
						// 		short t1; // $v0
						// 		short t2; // $a0
						// 		short t3; // $a1
						/* end block 1.1.1.4.1.3 */
						// End offset: 0x800C4E48
						// End Line: 4334

						/* begin block 1.1.1.4.1.4 */
							// Start line: 4334
							// Start offset: 0x800C4E48
							// Variables:
						// 		short *z; // $v1
						// 		short t1; // $a0
						// 		short t2; // $a1
						// 		short t3; // $v1
						/* end block 1.1.1.4.1.4 */
						// End offset: 0x800C4E48
						// End Line: 4334

						/* begin block 1.1.1.4.1.5 */
							// Start line: 4334
							// Start offset: 0x800C4E48

							/* begin block 1.1.1.4.1.5.1 */
								// Start line: 4339
								// Start offset: 0x800C4EC8

								/* begin block 1.1.1.4.1.5.1.1 */
									// Start line: 4341
									// Start offset: 0x800C4ED4

									/* begin block 1.1.1.4.1.5.1.1.1 */
										// Start line: 4342
										// Start offset: 0x800C4EEC

										/* begin block 1.1.1.4.1.5.1.1.1.1 */
											// Start line: 4344
											// Start offset: 0x800C4EEC
											// Variables:
										// 		unsigned long *ot; // $a0
										/* end block 1.1.1.4.1.5.1.1.1.1 */
										// End offset: 0x800C4EEC
										// End Line: 4344

										/* begin block 1.1.1.4.1.5.1.1.1.2 */
											// Start line: 4362
											// Start offset: 0x800C4FC0
											// Variables:
										// 		unsigned long l0; // $v0
										// 		unsigned long l1; // $v1
										// 		unsigned long l2; // $a0
										// 		unsigned long l3; // $a1
										/* end block 1.1.1.4.1.5.1.1.1.2 */
										// End offset: 0x800C4FF0
										// End Line: 4373
									/* end block 1.1.1.4.1.5.1.1.1 */
									// End offset: 0x800C4FF0
									// End Line: 4373
								/* end block 1.1.1.4.1.5.1.1 */
								// End offset: 0x800C4FF0
								// End Line: 4373
							/* end block 1.1.1.4.1.5.1 */
							// End offset: 0x800C4FF0
							// End Line: 4373
						/* end block 1.1.1.4.1.5 */
						// End offset: 0x800C4FF8
						// End Line: 4376
					/* end block 1.1.1.4.1 */
					// End offset: 0x800C4FF8
					// End Line: 4376
				/* end block 1.1.1.4 */
				// End offset: 0x800C5008
				// End Line: 4377
			/* end block 1.1.1 */
			// End offset: 0x800C5008
			// End Line: 4377
		/* end block 1.1 */
		// End offset: 0x800C5008
		// End Line: 4377
	/* end block 1 */
	// End offset: 0x800C5008
	// End Line: 4377

void DrawC_ShowroomPrims__FP10matrixtdefP8coorddefP13Draw_CarCache( (matrixtdef *m,coorddef *t,Draw_CarCache *sd)
{
  short sVar1;
  ushort uVar2;
  uint *puVar3;
  undefined4 in_zero;
  undefined4 in_at;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  int *piVar15;
  short *psVar16;
  short *psVar17;
  char local_48 [31];
  undefined local_29;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  
  puVar3 = DAT_80120fdc;
  if (false) {
    iVar5 = gettick();
    iVar6 = iVar5;
    if (iVar5 < 0) {
      iVar6 = iVar5 + 0xff;
    }
    local_28 = iVar5 + (iVar6 >> 8) * -0x100 >> 3;
    local_20 = -1;
    if (iGp000012c0 == 0) {
      local_24 = local_28 + 0x10U & 0x1f;
      local_1c = 0xffffffff;
    }
    else {
      local_24 = 0x20 - local_28;
      local_1c = 1;
    }
    iVar6 = 0x1f;
    puVar7 = &local_29;
    do {
      *puVar7 = 0xff;
      iVar6 = iVar6 + -1;
      puVar7 = puVar7 + -1;
    } while (-1 < iVar6);
    iVar6 = 0;
    piVar15 = &local_20;
    piVar13 = &local_28;
    do {
      iVar5 = 0;
      do {
        if ((int)local_48[*piVar13 + iVar5 * *piVar15 & 0x1f] < iVar5) {
          local_48[*piVar13 + iVar5 * *piVar15 & 0x1f] = (char)iVar5;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 5);
      piVar15 = piVar15 + 1;
      iVar6 = iVar6 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar6 < 2);
    ChangeTPage__FPUsi((ushort *)((int)puVar3 + 6),1);
    TrsProj_SetTransPrecision__Fi(8);
    iVar6 = m->m[3];
    iVar5 = m->m[6];
    (sd->matB).m[0] = (short)(m->m[0] >> 4);
    (sd->matB).m[1] = (short)(iVar6 >> 4);
    (sd->matB).m[2] = (short)(iVar5 >> 4);
    iVar6 = m->m[4];
    iVar5 = m->m[7];
    sVar4 = (short)(m->m[1] >> 4);
    (sd->matB).m[3] = sVar4;
    (sd->matB).m[4] = (short)(iVar6 >> 4);
    (sd->matB).m[5] = (short)(iVar5 >> 4);
    iVar6 = m->m[2];
    iVar5 = m->m[5];
    iVar11 = m->m[8];
    (sd->matB).m[3] = -sVar4;
    sVar4 = (sd->matB).m[4];
    (sd->matB).m[6] = (short)(iVar6 >> 4);
    sVar1 = (sd->matB).m[5];
    (sd->matB).m[7] = (short)(iVar5 >> 4);
    (sd->matB).m[8] = (short)(iVar11 >> 4);
    (sd->matB).m[4] = -sVar4;
    (sd->matB).m[5] = -sVar1;
    (sd->matB).t[0] = t->x >> 10;
    (sd->matB).t[1] = -(t->y >> 10);
    (sd->matB).t[2] = t->z >> 10;
    TrsProj_ResetTransPrecision__Fv();
    setCopControlWord(2,0,*(undefined4 *)(sd->matB).m);
    setCopControlWord(2,0x800,*(undefined4 *)((sd->matB).m + 2));
    setCopControlWord(2,0x1000,*(undefined4 *)((sd->matB).m + 4));
    setCopControlWord(2,0x1800,*(undefined4 *)((sd->matB).m + 6));
    setCopControlWord(2,0x2000,*(undefined4 *)((sd->matB).m + 8));
    setCopControlWord(2,0x2800,(sd->matB).t[0]);
    setCopControlWord(2,0x3000,(sd->matB).t[1]);
    setCopControlWord(2,0x3800,(sd->matB).t[2]);
    iVar6 = 0;
    psVar16 = &Fe3D_lightsVertex;
    psVar17 = &DAT_8005133a;
    sd->otz = 0;
    while (iVar6 < 0x20) {
      iVar5 = iVar6 * 2 + 2;
      if (iVar5 == 0x40) {
        iVar5 = 0;
      }
      iVar11 = 0;
      if ((sd->head).cprim.MPrimPtr <= (sd->head).cprim.PrimPtr) {
        return;
      }
      sVar4 = *psVar16;
      sVar1 = psVar16[2];
      (sd->vt0).y = psVar16[1];
      (sd->vt0).x = sVar4;
      (sd->vt0).z = sVar1;
      sVar4 = (&DAT_80051336)[iVar5 * 3];
      sVar1 = (&DAT_80051338)[iVar5 * 3];
      (sd->vt1).x = (&Fe3D_lightsVertex)[iVar5 * 3];
      (sd->vt1).y = sVar4;
      (sd->vt1).z = sVar1;
      sVar4 = psVar17[1];
      sVar1 = psVar17[2];
      (sd->vt2).x = *psVar17;
      (sd->vt2).y = sVar4;
      (sd->vt2).z = sVar1;
      uVar2 = (&DAT_8005133c)[iVar5 * 3];
      uVar12 = (uint)uVar2;
      sVar4 = (&DAT_8005133e)[iVar5 * 3];
      (sd->vt3).x = (&DAT_8005133a)[iVar5 * 3];
      (sd->vt3).y = uVar2;
      (sd->vt3).z = sVar4;
      while (iVar11 < 2) {
        if ((iVar11 == 0) || (-1 < local_48[iVar6])) {
          setCopReg(2,in_zero,*(undefined4 *)&sd->vt0);
          setCopReg(2,in_at,*(undefined4 *)&(sd->vt0).z);
          copFunction(2,0x180001);
          puVar14 = (uint *)(sd->head).cprim.PrimPtr;
          *(uint **)&(sd->head).cprim.PrimPtr = puVar14 + 10;
          puVar9 = (sd->head).cprim.LastPrim + sd->otz;
          *puVar14 = *puVar14 & 0xff000000 | *puVar9 & 0xffffff;
          *puVar9 = *puVar9 & 0xff000000 | (uint)puVar14 & 0xffffff;
          uVar8 = getCopReg(2,0xe);
          puVar14[2] = uVar8;
          setCopReg(2,in_zero,*(undefined4 *)&sd->vt1);
          setCopReg(2,in_at,*(undefined4 *)&(sd->vt1).z);
          setCopReg(2,&sd->vt2,*(undefined4 *)&sd->vt3);
          setCopReg(2,(uint)puVar14 & 0xffffff,*(undefined4 *)&(sd->vt3).z);
          setCopReg(2,puVar9,*(undefined4 *)&sd->vt2);
          setCopReg(2,uVar12,*(undefined4 *)&(sd->vt2).z);
          copFunction(2,0x280030);
          uVar12 = getCopReg(2,0xc);
          puVar14[4] = uVar12;
          uVar12 = getCopReg(2,0xd);
          puVar14[8] = uVar12;
          uVar12 = getCopReg(2,0xe);
          puVar14[6] = uVar12;
          if (iVar11 == 0) {
            uVar12 = 0x300a00;
          }
          else {
            uVar12 = *(uint *)(&hilight_colors + (int)local_48[iVar6] * 4);
          }
          puVar14[1] = uVar12;
          *(undefined *)((int)puVar14 + 7) = 0x2e;
          *(undefined *)((int)puVar14 + 3) = 9;
          uVar8 = puVar3[1];
          uVar10 = puVar3[2];
          uVar12 = puVar3[3];
          puVar14[3] = *puVar3;
          puVar14[5] = uVar8;
          puVar14[7] = uVar10;
          puVar14[9] = uVar12;
        }
        iVar11 = iVar11 + 1;
      }
      psVar17 = psVar17 + 6;
      psVar16 = psVar16 + 6;
      iVar6 = iVar6 + 1;
    }
  }
  return;


}





