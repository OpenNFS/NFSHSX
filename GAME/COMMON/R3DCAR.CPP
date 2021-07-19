#include "THISDUST.H"
#include "R3DCAR.H"


// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_ChangeTrafficColor__FP8Car_tObji(struct Car_tObj *carObj /*$s0*/, int newColorIndex /*$s1*/)
 // line 386, offset 0x800adc2c
	/* begin block 1 */
		// Start line: 387
		// Start offset: 0x800ADC2C
		// Variables:
	// 		int color; // $s2
	/* end block 1 */
	// End offset: 0x800ADCFC
	// End Line: 420

	/* begin block 2 */
		// Start line: 772
	/* end block 2 */
	// End Line: 773

	/* begin block 3 */
		// Start line: 772
	/* end block 3 */
	// End Line: 773

void R3DCar_ChangeTrafficColor__FP8Car_tObji(Car_tObj *carObj,int newColorIndex)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  Texture_pal8bit *palCopy;
  uint uVar4;
  int iVar5;
  
  if ((carObj->render).currentPitch != 0) {
    uVar2 = *(ushort *)&carObj->audio[4].panangle;
    uVar4 = newColorIndex & 7;
    iVar5 = ((uint)uVar2 & 8) + uVar4;
    if (iVar5 != (int)(short)uVar2) {
      DrawSync(0);
      bVar3 = 0x1b < (carObj->render).palNum;
      if (bVar3) {
        palCopy = (Texture_pal8bit *)(carObj->render).currentPitch;
        sVar1 = *(short *)&(carObj->render).currentRoll;
        Texture_CarColor = uVar4;
      }
      else {
        Texture_CarColor = uVar4 + ((uint)*(byte *)((int)&(carObj->render).damageParts + 1) & 2) * 4
        ;
        Texture_ProcessPaletteCopy__FP15Texture_pal8bitii
                  ((Texture_pal8bit *)(carObj->render).currentPitch,0,1);
        palCopy = (Texture_pal8bit *)(carObj->render).currentPitch;
        sVar1 = *(short *)&(carObj->render).currentRoll;
        Texture_CarColor = uVar4 + ((uint)*(byte *)((int)&(carObj->render).damageParts + 1) & 1) * 8
        ;
      }
      Texture_ProcessPaletteCopy__FP15Texture_pal8bitii(palCopy,(uint)!bVar3,(int)sVar1);
      *(short *)&carObj->audio[4].panangle = (short)iVar5;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_StartUp__Fv()
 // line 424, offset 0x800add14
	/* begin block 1 */
		// Start line: 425
		// Start offset: 0x800ADD14
		// Variables:
	// 		int i; // $a1

		/* begin block 1.1 */
			// Start line: 451
			// Start offset: 0x800ADD80
			// Variables:
		// 		char name[100]; // stack offset -112
		/* end block 1.1 */
		// End offset: 0x800ADD80
		// End Line: 451
	/* end block 1 */
	// End offset: 0x800ADD80
	// End Line: 451

	/* begin block 2 */
		// Start line: 853
	/* end block 2 */
	// End Line: 854

	/* begin block 3 */
		// Start line: 857
	/* end block 3 */
	// End Line: 858

	/* begin block 4 */
		// Start line: 857
	/* end block 4 */
	// End Line: 858

/* WARNING: Unknown calling convention yet parameter storage is locked */

void R3DCar_StartUp__Fv(void)

{
  Transformer_zScene **ppTVar1;
  short *psVar2;
  int iVar3;
  char acStack112 [104];
  
  iVar3 = 0;
  psVar2 = &R3DCar_LoadedSceneColor;
  ppTVar1 = &R3DCar_LoadedScenePointer250;
  do {
    ppTVar1[0x32] = (Transformer_zScene *)0x0;
    *ppTVar1 = (Transformer_zScene *)0x0;
    (&DAT_80116aca)[iVar3] = 0;
    (&R3DCar_LoadedSceneCounter)[iVar3] = '\0';
    (&R3DCar_LoadedSceneCountry)[iVar3] = -1;
    psVar2[0x32] = -1;
    *psVar2 = -1;
    psVar2 = psVar2 + 1;
    iVar3 = iVar3 + 1;
    ppTVar1 = ppTVar1 + 1;
  } while (iVar3 < 0x32);
  R3DCar_orientMat = (matrixtdef *)reservememadr(s_orientMat_800563bc,0x804,0);
  R3DCar_position = (coorddef *)reservememadr(s_position_800563c8,0x2b8,0);
  sprintf(acStack112,s__slicense_psh_800563d4,PTR_801164cc);
  R3DCar_LicenseShapeFile = (char *)loadfileadr(acStack112,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_PostStartUp__Fv()
 // line 466, offset 0x800adde4
	/* begin block 1 */
		// Start line: 467
		// Start offset: 0x800ADDE4
		// Variables:
	// 		int otSize; // $a1
	/* end block 1 */
	// End offset: 0x800ADEB4
	// End Line: 490

	/* begin block 2 */
		// Start line: 947
	/* end block 2 */
	// End Line: 948

	/* begin block 3 */
		// Start line: 952
	/* end block 3 */
	// End Line: 953

	/* begin block 4 */
		// Start line: 952
	/* end block 4 */
	// End Line: 953

	/* begin block 5 */
		// Start line: 954
	/* end block 5 */
	// End Line: 955

/* WARNING: Unknown calling convention yet parameter storage is locked */

void R3DCar_PostStartUp__Fv(void)

{
  bool bVar1;
  int iVar2;
  
  if (R3DCar_InMenu == 0) {
    iVar2 = Cars_gNumCars * 0x1c0;
    bVar1 = iVar2 < 0x400;
  }
  else {
    iVar2 = 0x400;
    bVar1 = false;
  }
  if (bVar1) {
    iVar2 = 0x400;
  }
  iVar2 = iVar2 << 2;
  R3DCar_subOtStart22 = (ulong *)reservememadr(s_sub_ot0_8013d328,iVar2,0);
  DAT_80116db4 = reservememadr(s_sub_ot1_8013d330,iVar2,0);
  if ((R3DCar_InMenu != 0) || (GameSetup_gData.commMode == 1)) {
    PTR_80116db0 = (ulong *)reservememadr(s_sub_ot0m_800563e4,iVar2,0);
    DAT_80116db8 = reservememadr(s_sub_ot1m_800563f0,iVar2,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_Restart__Fv()
 // line 495, offset 0x800adec8
	/* begin block 1 */
		// Start line: 496
		// Start offset: 0x800ADEC8
		// Variables:
	// 		int i; // $a1

		/* begin block 1.1 */
			// Start line: 499
			// Start offset: 0x800ADEC8

			/* begin block 1.1.1 */
				// Start line: 499
				// Start offset: 0x800ADEEC
				// Variables:
			// 		struct Car_tObj *carObj; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800ADF20
			// End Line: 511
		/* end block 1.1 */
		// End offset: 0x800ADF38
		// End Line: 515
	/* end block 1 */
	// End offset: 0x800ADF38
	// End Line: 515

	/* begin block 2 */
		// Start line: 1008
	/* end block 2 */
	// End Line: 1009

	/* begin block 3 */
		// Start line: 1014
	/* end block 3 */
	// End Line: 1015

	/* begin block 4 */
		// Start line: 1014
	/* end block 4 */
	// End Line: 1015

	/* begin block 5 */
		// Start line: 1017
	/* end block 5 */
	// End Line: 1018

/* WARNING: Unknown calling convention yet parameter storage is locked */

void R3DCar_Restart__Fv(void)

{
  int iVar1;
  Car_tObj *pCVar2;
  Car_tObj **ppCVar3;
  int iVar4;
  
  iVar1 = Cars_gNumCars;
  iVar4 = 0;
  ppCVar3 = &Cars_gList9;
  while (iVar4 < iVar1) {
    pCVar2 = *ppCVar3;
    *(undefined2 *)&(pCVar2->render).light = 0;
    *(undefined2 *)((int)&(pCVar2->render).light + 2) = 0;
    if (GameSetup_gData.Time != 0) {
      *(undefined2 *)&(pCVar2->render).light = 0x33;
      *(undefined2 *)((int)&(pCVar2->render).light + 2) = 2;
    }
    ppCVar3 = ppCVar3 + 1;
    iVar4 = iVar4 + 1;
    *(undefined2 *)&(pCVar2->render).palCopy = 0;
    *(undefined2 *)((int)&(pCVar2->render).palCopy + 2) = 0;
    *(undefined2 *)((int)&(pCVar2->render).bodyPitch + 2) = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_CleanUp__Fv()
 // line 518, offset 0x800adf40
	/* begin block 1 */
		// Start line: 519
		// Start offset: 0x800ADF40
		// Variables:
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x800AE090
	// End Line: 572

	/* begin block 2 */
		// Start line: 1060
	/* end block 2 */
	// End Line: 1061

	/* begin block 3 */
		// Start line: 1064
	/* end block 3 */
	// End Line: 1065

	/* begin block 4 */
		// Start line: 1064
	/* end block 4 */
	// End Line: 1065

/* WARNING: Unknown calling convention yet parameter storage is locked */

void R3DCar_CleanUp__Fv(void)

{
  Transformer_zScene **ppTVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = &R3DCar_LoadedSceneCounter;
  ppTVar1 = &R3DCar_LoadedScenePointer250;
  do {
    if (*ppTVar1 != (Transformer_zScene *)0x0) {
      purgememadr((int)*ppTVar1);
      *ppTVar1 = (Transformer_zScene *)0x0;
      *pcVar2 = '\0';
    }
    if (ppTVar1[0x32] != (Transformer_zScene *)0x0) {
      purgememadr((int)ppTVar1[0x32]);
      ppTVar1[0x32] = (Transformer_zScene *)0x0;
      pcVar2[0x32] = '\0';
    }
    pcVar2 = pcVar2 + 1;
    iVar3 = iVar3 + 1;
    ppTVar1 = ppTVar1 + 1;
  } while (iVar3 < 0x32);
  if (R3DCar_orientMat != (matrixtdef *)0x0) {
    purgememadr((int)R3DCar_orientMat);
  }
  R3DCar_orientMat = (matrixtdef *)0x0;
  if (R3DCar_position != (coorddef *)0x0) {
    purgememadr((int)R3DCar_position);
  }
  R3DCar_position = (coorddef *)0x0;
  if (R3DCar_LicenseShapeFile != (char *)0x0) {
    purgememadr((int)R3DCar_LicenseShapeFile);
  }
  R3DCar_LicenseShapeFile = (char *)0x0;
  if (R3DCar_subOtStart22 != (ulong *)0x0) {
    purgememadr((int)R3DCar_subOtStart22);
  }
  if (DAT_80116db4 != 0) {
    purgememadr(DAT_80116db4);
  }
  DAT_80116db4 = 0;
  R3DCar_subOtStart22 = (ulong *)0x0;
  if ((R3DCar_InMenu != 0) || (GameSetup_gData.commMode == 1)) {
    if (PTR_80116db0 != (ulong *)0x0) {
      purgememadr((int)PTR_80116db0);
    }
    if (DAT_80116db8 != 0) {
      purgememadr(DAT_80116db8);
    }
    DAT_80116db8 = 0;
    PTR_80116db0 = (ulong *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// struct Transformer_zScene * /*$ra*/ R3DCar_ReadInCarData__FPcP8Car_tObj(char *filename /*$v0*/, struct Car_tObj *carObj /*$s1*/)
 // line 580, offset 0x800ae0a8
	/* begin block 1 */
		// Start line: 581
		// Start offset: 0x800AE0A8
		// Variables:
	// 		int i; // $s4
	// 		int offset; // $s2
	// 		char *rawData; // $s5
	// 		struct Transformer_zScene *scene; // stack offset -84
	// 		char *filestart; // $s0
	// 		long filesize; // stack offset -88
	// 		char infilename[15]; // stack offset -128

		/* begin block 1.1 */
			// Start line: 581
			// Start offset: 0x800AE0A8
			// Variables:
		// 		int carType; // stack offset -80
		// 		int eScaleX; // stack offset -76
		// 		int eScaleY; // stack offset -72

			/* begin block 1.1.1 */
				// Start line: 581
				// Start offset: 0x800AE0A8

				/* begin block 1.1.1.1 */
					// Start line: 651
					// Start offset: 0x800AE1B8
					// Variables:
				// 		struct Transformer_zObj *Nobj; // $s0

					/* begin block 1.1.1.1.1 */
						// Start line: 725
						// Start offset: 0x800AE250

						/* begin block 1.1.1.1.1.1 */
							// Start line: 726
							// Start offset: 0x800AE280

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 799
								// Start offset: 0x800AE2A4
								// Variables:
							// 		int j; // $s3
							// 		short tx; // stack offset -64
							// 		short ty; // $fp
							// 		short tz; // $s7

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 802
									// Start offset: 0x800AE2A4

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 806
										// Start offset: 0x800AE2C8
										// Variables:
									// 		struct VECTOR vt; // stack offset -112
									// 		struct SVECTOR nm; // stack offset -96
									// 		short nm_vx; // $a2
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800AE500
									// End Line: 851
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800AE548
								// End Line: 856
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800AE548
							// End Line: 856
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800AE548
						// End Line: 856
					/* end block 1.1.1.1.1 */
					// End offset: 0x800AE548
					// End Line: 856
				/* end block 1.1.1.1 */
				// End offset: 0x800AE570
				// End Line: 868
			/* end block 1.1.1 */
			// End offset: 0x800AE57C
			// End Line: 870
		/* end block 1.1 */
		// End offset: 0x800AE57C
		// End Line: 870
	/* end block 1 */
	// End offset: 0x800AE57C
	// End Line: 882

	/* begin block 2 */
		// Start line: 1198
	/* end block 2 */
	// End Line: 1199

	/* begin block 3 */
		// Start line: 1207
	/* end block 3 */
	// End Line: 1208

	/* begin block 4 */
		// Start line: 1207
	/* end block 4 */
	// End Line: 1208

Transformer_zScene * R3DCar_ReadInCarData__FPcP8Car_tObj(char *filename,Car_tObj *carObj)

{
  ushort uVar1;
  undefined4 *puVar2;
  Transformer_zScene *pTVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  byte abStack128 [16];
  int local_70;
  int local_6c;
  int local_68;
  ushort local_60;
  ushort local_5e;
  short local_5c;
  uint local_58;
  Transformer_zScene *local_54;
  int local_50;
  int local_4c;
  int local_48;
  short local_40;
  int *local_38;
  ushort *local_34;
  int local_30;
  
  strcpy((char *)abStack128,filename);
  strcat((char *)abStack128,&DAT_8013d338);
  iVar10 = 0x24c;
  iVar12 = 0;
  local_38 = &local_70;
  local_34 = &local_60;
  local_30 = 0x7e07e07f;
  puVar2 = (undefined4 *)locatebig((byte *)R3DCar_BigFile,abStack128);
  locatebigentry((byte *)R3DCar_BigFile,abStack128,0,(uint *)0x0,&local_58);
  pTVar3 = (Transformer_zScene *)reservememadr((char *)abStack128,local_58,0);
  local_54 = pTVar3;
  blockmove(puVar2,(undefined4 *)pTVar3,local_58);
  local_50 = (int)(carObj->render).palNum;
  local_4c = R3DCar_EnvMapInfo[local_50].eScaleX;
  local_48 = R3DCar_EnvMapInfo[local_50].eScaleY;
  *(int *)((carObj->render).palCopyNum + 9) = R3DCar_EnvMapInfo[local_50].rideHeight << 7;
  pcVar13 = &R3DCar_ObjectInfo;
  *(int *)((carObj->render).palCopyNum + 0xb) = R3DCar_EnvMapInfo[local_50].upgradeHeight << 7;
  while (iVar12 < 0x39) {
    puVar6 = (ushort *)((int)pTVar3->obj + iVar10);
    iVar10 = iVar10 + 0x1c;
    *(ushort **)(local_54->obj + iVar12) = puVar6;
    if (iVar12 == 0x27) {
      *(int *)(puVar6 + 2) = *(int *)(puVar6 + 2) + -0x7ae;
    }
    if (iVar12 == 0x28) {
      *(int *)(puVar6 + 2) = *(int *)(puVar6 + 2) + 0x7ae;
    }
    uVar1 = *puVar6;
    if (uVar1 != 0) {
      *(int *)(puVar6 + 8) = (int)pTVar3->obj + iVar10;
      iVar10 = iVar10 + (uint)uVar1 * 6;
      if ((uVar1 & 1) != 0) {
        iVar10 = iVar10 + 2;
      }
      if (((uVar1 != 0) && ((pcVar13[1] & 1U) != 0)) && (local_50 < 0x1c)) {
        *(int *)(puVar6 + 10) = (int)pTVar3->obj + iVar10;
        iVar10 = iVar10 + (uint)*puVar6 * 6;
        if ((*puVar6 & 1) != 0) {
          iVar10 = iVar10 + 2;
        }
        iVar11 = 0;
        iVar9 = 0;
        local_40 = (short)((uint)*(undefined4 *)(puVar6 + 2) >> 8);
        uVar4 = *(undefined4 *)(puVar6 + 4);
        uVar7 = *(undefined4 *)(puVar6 + 6);
        while (iVar11 < (int)(uint)*puVar6) {
          local_70 = (int)*(short *)(iVar9 + *(int *)(puVar6 + 8)) + (int)local_40;
          local_6c = (int)*(short *)(iVar9 + *(int *)(puVar6 + 8) + 2) +
                     (int)(short)((uint)uVar4 >> 8);
          local_68 = (int)*(short *)(iVar9 + *(int *)(puVar6 + 8) + 4) +
                     (int)(short)((uint)uVar7 >> 8) >> 2;
          VectorNormalS(local_38,local_34);
          if ((pcVar13[1] & 0x40U) != 0) {
            local_70 = (int)*(short *)(iVar9 + *(int *)(puVar6 + 10)) + (int)(short)local_60;
            local_6c = (int)*(short *)(iVar9 + *(int *)(puVar6 + 10) + 2) + (int)(short)local_5e;
            local_68 = (int)*(short *)(iVar9 + *(int *)(puVar6 + 10) + 4) + (int)local_5c;
            VectorNormalS(local_38,local_34);
          }
          iVar5 = (int)((uint)local_60 << 0x10) >> 0x10;
          sVar8 = (short)(iVar5 / local_4c);
          if (local_4c == 0) {
            trap(0x1c00);
          }
          if ((local_4c == -1) && (iVar5 == -0x80000000)) {
            trap(0x1800);
          }
          if (local_48 == 0) {
            trap(0x1c00);
          }
          if ((local_48 == -1) && ((int)(short)local_5e == -0x80000000)) {
            trap(0x1800);
          }
          iVar5 = (int)((longlong)iVar5 * (longlong)local_30 >> 0x25) -
                  ((int)((uint)local_60 << 0x10) >> 0x1f);
          uVar14 = ((int)(short)local_5e / local_48) * iVar5;
          local_60 = (ushort)iVar5;
          local_5c = (short)(int)((longlong)(int)local_5c * (longlong)local_30 >> 0x25) -
                     (local_5c >> 0xf);
          local_5e = (ushort)uVar14;
          if (((int)(uVar14 * 0x10000) < 0) && ((uVar14 & 0xff) != 0)) {
            local_5e = local_5e + 0x100;
          }
          uVar14 = (uint)local_5e;
          local_5e = (short)local_5e >> 8;
          if (sVar8 < -0x3f) {
            sVar8 = -0x3f;
          }
          if (0x3f < sVar8) {
            sVar8 = 0x3f;
          }
          if ((int)(uVar14 << 0x10) >> 0x18 < -0x3f) {
            local_5e = -0x3f;
          }
          if (0x3f < (short)local_5e) {
            local_5e = 0x3f;
          }
          iVar11 = iVar11 + 1;
          local_5e = sVar8 - local_5e;
          *(ushort *)(iVar9 + *(int *)(puVar6 + 10)) = local_60;
          *(short *)(iVar9 + *(int *)(puVar6 + 10) + 2) = local_5e;
          iVar5 = iVar9 + *(int *)(puVar6 + 10);
          iVar9 = iVar9 + 6;
          *(short *)(iVar5 + 4) = local_5c;
        }
      }
    }
    if (puVar6[1] != 0) {
      *(int *)(puVar6 + 0xc) = (int)pTVar3->obj + iVar10;
      iVar10 = iVar10 + (uint)puVar6[1] * 0xc;
    }
    pcVar13 = pcVar13 + 6;
    iVar12 = iVar12 + 1;
  }
  return local_54;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCcar_ReadeMapData__Fv()
 // line 886, offset 0x800ae5b0
	/* begin block 1 */
		// Start line: 887
		// Start offset: 0x800AE5B0
		// Variables:
	// 		int i; // $s2
	// 		char *ScaneData; // stack offset -32
	// 		char *RenderingFileData; // $s3
	// 		char name[256]; // stack offset -288
	/* end block 1 */
	// End offset: 0x800AE644
	// End Line: 912

	/* begin block 2 */
		// Start line: 2065
	/* end block 2 */
	// End Line: 2066

	/* begin block 3 */
		// Start line: 2070
	/* end block 3 */
	// End Line: 2071

	/* begin block 4 */
		// Start line: 2070
	/* end block 4 */
	// End Line: 2071

/* WARNING: Unknown calling convention yet parameter storage is locked */

void R3DCcar_ReadeMapData__Fv(void)

{
  char *pcVar1;
  int iVar2;
  R3DCar_tEnvMapInfo *pRVar3;
  int iVar4;
  char acStack288 [256];
  char *local_20 [2];
  
  iVar4 = 0;
  sprintf(acStack288,s__scarmap_dat_800563fc,PTR_801164cc);
  pcVar1 = (char *)loadfileadr(acStack288,0x10);
  pRVar3 = R3DCar_EnvMapInfo;
  local_20[0] = pcVar1;
  do {
    iVar2 = Risk_ReadNextValue__FPPc(local_20);
    pRVar3->eScaleX = iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_20);
    pRVar3->eScaleY = iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_20);
    pRVar3->rideHeight = iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_20);
    pRVar3->upgradeHeight = iVar2;
    iVar4 = iVar4 + 1;
    pRVar3 = pRVar3 + 1;
  } while (iVar4 < 0x1c);
  purgememadr((int)pcVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCcar_ReadTrackShadow__Fv()
 // line 917, offset 0x800ae668
	/* begin block 1 */
		// Start line: 918
		// Start offset: 0x800AE668
		// Variables:
	// 		int i; // $s1
	// 		char *ScaneData; // stack offset -24
	// 		char *RenderingFileData; // $s2
	// 		char name[256]; // stack offset -280
	/* end block 1 */
	// End offset: 0x800AE730
	// End Line: 945

	/* begin block 2 */
		// Start line: 2170
	/* end block 2 */
	// End Line: 2171

	/* begin block 3 */
		// Start line: 2176
	/* end block 3 */
	// End Line: 2177

	/* begin block 4 */
		// Start line: 2176
	/* end block 4 */
	// End Line: 2177

/* WARNING: Unknown calling convention yet parameter storage is locked */

void R3DCcar_ReadTrackShadow__Fv(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char acStack280 [256];
  char *local_18 [2];
  
  sprintf(acStack280,s__strack_dat_8005640c,PTR_801164cc);
  pcVar1 = (char *)loadfileadr(acStack280,0x10);
  iVar3 = GameSetup_gData.track * 4 + GameSetup_gData.Weather + GameSetup_gData.Time * 2;
  local_18[0] = pcVar1;
  while (iVar3 != -1) {
    iVar2 = Risk_ReadNextValue__FPPc(local_18);
    R3DCar_shadowColour.r = (uchar)iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_18);
    R3DCar_shadowColour.g = (uchar)iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_18);
    R3DCar_shadowColour.b = (uchar)iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_18);
    R3DCar_eMapColour.r = (uchar)iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_18);
    R3DCar_eMapColour.g = (uchar)iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_18);
    iVar3 = iVar3 + -1;
    R3DCar_eMapColour.b = (uchar)iVar2;
  }
  purgememadr((int)pcVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_CalcCarDimensions__FP8Car_tObjP18Transformer_zScenei(struct Car_tObj *carObj /*$s0*/, struct Transformer_zScene *scene /*$a1*/, int carType /*$a2*/)
 // line 958, offset 0x800ae750
	/* begin block 1 */
		// Start line: 959
		// Start offset: 0x800AE750
		// Variables:
	// 		int i; // $t8
	// 		struct coorddef minp; // stack offset -48
	// 		struct coorddef maxp; // stack offset -32

		/* begin block 1.1 */
			// Start line: 959
			// Start offset: 0x800AE750

			/* begin block 1.1.1 */
				// Start line: 972
				// Start offset: 0x800AE790
				// Variables:
			// 		int j; // $t4
			// 		struct Transformer_zObj *obj; // $t0

				/* begin block 1.1.1.1 */
					// Start line: 994
					// Start offset: 0x800AE984

					/* begin block 1.1.1.1.1 */
						// Start line: 994
						// Start offset: 0x800AE990
						// Variables:
					// 		int minWheelX; // $t1
					// 		int minWheelZ; // $t5
					// 		int maxWheelX; // $t2
					// 		int maxWheelZ; // $t6
					/* end block 1.1.1.1.1 */
					// End offset: 0x800AEB54
					// End Line: 1023
				/* end block 1.1.1.1 */
				// End offset: 0x800AEB54
				// End Line: 1023
			/* end block 1.1.1 */
			// End offset: 0x800AEB54
			// End Line: 1023
		/* end block 1.1 */
		// End offset: 0x800AEB60
		// End Line: 1026
	/* end block 1 */
	// End offset: 0x800AEC50
	// End Line: 1042

	/* begin block 2 */
		// Start line: 2257
	/* end block 2 */
	// End Line: 2258

	/* begin block 3 */
		// Start line: 2271
	/* end block 3 */
	// End Line: 2272

	/* begin block 4 */
		// Start line: 2271
	/* end block 4 */
	// End Line: 2272

void R3DCar_CalcCarDimensions__FP8Car_tObjP18Transformer_zScenei
               (Car_tObj *carObj,Transformer_zScene *scene,int carType)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  short *psVar12;
  int iVar13;
  char *pcVar14;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar13 = 0;
  pcVar14 = &R3DCar_ObjectInfo;
  local_30 = &DAT_00630000;
  local_2c = &DAT_00630000;
  local_28 = &DAT_00630000;
  local_20 = -0x630000;
  local_1c = -0x630000;
  local_18 = -0x630000;
  while (iVar13 < 0x39) {
    puVar7 = (ushort *)scene->obj[iVar13];
    if ((pcVar14[3] == '\x01') && (*puVar7 != 0)) {
      if ((((iVar13 == 0) || (0x2e < iVar13)) || ((iVar13 == 2 && (carType == 0x1c)))) &&
         (iVar10 = 0, *puVar7 != 0)) {
        iVar8 = 0;
        do {
          iVar6 = *(int *)(puVar7 + 2);
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0xff;
          }
          puVar2 = (undefined *)((int)*(short *)(iVar8 + *(int *)(puVar7 + 8)) + (iVar6 >> 8));
          if ((int)local_30 <= (int)puVar2) {
            puVar2 = local_30;
          }
          iVar6 = *(int *)(puVar7 + 4);
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0xff;
          }
          puVar3 = (undefined *)((int)*(short *)(iVar8 + *(int *)(puVar7 + 8) + 2) + (iVar6 >> 8));
          if ((int)local_2c <= (int)puVar3) {
            puVar3 = local_2c;
          }
          iVar6 = *(int *)(puVar7 + 6);
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0xff;
          }
          puVar1 = (undefined *)((int)*(short *)(iVar8 + *(int *)(puVar7 + 8) + 4) + (iVar6 >> 8));
          if ((int)local_28 <= (int)puVar1) {
            puVar1 = local_28;
          }
          iVar6 = *(int *)(puVar7 + 2);
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0xff;
          }
          iVar6 = (int)*(short *)(iVar8 + *(int *)(puVar7 + 8)) + (iVar6 >> 8);
          if (iVar6 < local_20) {
            iVar6 = local_20;
          }
          iVar4 = *(int *)(puVar7 + 4);
          if (iVar4 < 0) {
            iVar4 = iVar4 + 0xff;
          }
          iVar4 = (int)*(short *)(iVar8 + *(int *)(puVar7 + 8) + 2) + (iVar4 >> 8);
          if (iVar4 < local_1c) {
            iVar4 = local_1c;
          }
          iVar5 = *(int *)(puVar7 + 6);
          if (iVar5 < 0) {
            iVar5 = iVar5 + 0xff;
          }
          iVar5 = (int)*(short *)(iVar8 + *(int *)(puVar7 + 8) + 4) + (iVar5 >> 8);
          if (iVar5 < local_18) {
            iVar5 = local_18;
          }
          iVar10 = iVar10 + 1;
          iVar8 = iVar8 + 6;
          local_30 = puVar2;
          local_2c = puVar3;
          local_28 = puVar1;
          local_20 = iVar6;
          local_1c = iVar4;
          local_18 = iVar5;
        } while (iVar10 < (int)(uint)*puVar7);
      }
      puVar2 = &DAT_00630000;
      if (0x2e < iVar13) {
        puVar3 = &DAT_00630000;
        iVar10 = -0x630000;
        iVar8 = -0x630000;
        iVar6 = 0;
        if (*puVar7 != 0) {
          iVar9 = 0;
          psVar12 = *(short **)(puVar7 + 8);
          puVar1 = puVar2;
          iVar4 = iVar10;
          puVar11 = puVar3;
          iVar5 = iVar8;
          do {
            iVar10 = *(int *)(puVar7 + 2);
            if (iVar10 < 0) {
              iVar10 = iVar10 + 0xff;
            }
            puVar2 = (undefined *)((int)*psVar12 + (iVar10 >> 8));
            if ((int)puVar2 < 0) {
              puVar2 = (undefined *)-(int)puVar2;
            }
            if ((int)puVar1 <= (int)puVar2) {
              puVar2 = puVar1;
            }
            iVar10 = *(int *)(puVar7 + 6);
            if (iVar10 < 0) {
              iVar10 = iVar10 + 0xff;
            }
            puVar3 = (undefined *)
                     ((int)*(short *)(iVar9 + *(int *)(puVar7 + 8) + 4) + (iVar10 >> 8));
            if ((int)puVar3 < 0) {
              puVar3 = (undefined *)-(int)puVar3;
            }
            if ((int)puVar11 <= (int)puVar3) {
              puVar3 = puVar11;
            }
            iVar10 = *(int *)(puVar7 + 2);
            if (iVar10 < 0) {
              iVar10 = iVar10 + 0xff;
            }
            iVar10 = (int)*(short *)(iVar9 + *(int *)(puVar7 + 8)) + (iVar10 >> 8);
            if (iVar10 < 0) {
              iVar10 = -iVar10;
            }
            if (iVar10 < iVar4) {
              iVar10 = iVar4;
            }
            iVar8 = *(int *)(puVar7 + 6);
            if (iVar8 < 0) {
              iVar8 = iVar8 + 0xff;
            }
            iVar8 = (int)((short *)(iVar9 + *(int *)(puVar7 + 8)))[2] + (iVar8 >> 8);
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            if (iVar8 < iVar5) {
              iVar8 = iVar5;
            }
            iVar9 = iVar9 + 6;
            iVar6 = iVar6 + 1;
            psVar12 = psVar12 + 3;
            puVar1 = puVar2;
            iVar4 = iVar10;
            puVar11 = puVar3;
            iVar5 = iVar8;
          } while (iVar6 < (int)(uint)*puVar7);
        }
        if (iVar13 < 0x35) {
          if (0x2e < iVar13) {
            (carObj->N).wheelFrontX = ((int)(puVar2 + iVar10 + 1) >> 1) << 8;
            (carObj->N).wheelFrontZ = ((int)(puVar3 + iVar8 + 1) >> 1) << 8;
            (carObj->N).wheelWidthF = (iVar10 - (int)puVar2) * 0x100 + 0xccc;
          }
        }
        else {
          (carObj->N).wheelBackX = ((int)(puVar2 + iVar10 + 1) >> 1) << 8;
          (carObj->N).wheelBackZ = ((int)(puVar3 + iVar8 + 1) >> 1) << 8;
          (carObj->N).wheelWidthB = (iVar10 - (int)puVar2) * 0x100 + 0xccc;
        }
      }
    }
    pcVar14 = pcVar14 + 6;
    iVar13 = iVar13 + 1;
  }
  (carObj->N).dimension.x =
       ((int)((local_20 - (int)local_30) + ((uint)(local_20 - (int)local_30) >> 0x1f)) >> 1) << 8;
  (carObj->N).dimension.y =
       ((int)((local_1c - (int)local_2c) + ((uint)(local_1c - (int)local_2c) >> 0x1f)) >> 1) << 8;
  iVar13 = ((int)((local_18 - (int)local_28) + ((uint)(local_18 - (int)local_28) >> 0x1f)) >> 1) <<
           8;
  (carObj->N).dimension.z = iVar13;
  if (carType == 0x1c) {
    (carObj->N).dimension.z = iVar13 >> 1;
  }
  iVar13 = (carObj->N).dimension.x;
  if (iVar13 < 0) {
    iVar13 = iVar13 + 0xff;
  }
  iVar10 = (carObj->N).dimension.y;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar13 = fixedsqrt((iVar13 >> 8) * (iVar13 >> 8) + (iVar10 >> 8) * (iVar10 >> 8));
  (carObj->N).dimensionRadius = iVar13;
  if (iVar13 < 0) {
    iVar13 = iVar13 + 0xff;
  }
  iVar10 = (carObj->N).dimension.z;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar13 = fixedsqrt((iVar13 >> 8) * (iVar13 >> 8) + (iVar10 >> 8) * (iVar10 >> 8));
  (carObj->N).dimensionRadius = iVar13;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_DeInstantiate3DCar__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1046, offset 0x800aec78
	/* begin block 1 */
		// Start line: 1047
		// Start offset: 0x800AEC78
	/* end block 1 */
	// End offset: 0x800AECA0
	// End Line: 1049

	/* begin block 2 */
		// Start line: 2461
	/* end block 2 */
	// End Line: 2462

	/* begin block 3 */
		// Start line: 2466
	/* end block 3 */
	// End Line: 2467

	/* begin block 4 */
		// Start line: 2466
	/* end block 4 */
	// End Line: 2467

void R3DCar_DeInstantiate3DCar__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  
  iVar1 = (carObj->render).currentPitch;
  if (iVar1 != 0) {
    purgememadr(iVar1);
  }
  (carObj->render).currentPitch = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_DeInstantiate3DCarMenu__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 1054, offset 0x800aecb4
	/* begin block 1 */
		// Start line: 1055
		// Start offset: 0x800AECB4
		// Variables:
	// 		int currentCarType; // $s0

		/* begin block 1.1 */
			// Start line: 1055
			// Start offset: 0x800AECB4

			/* begin block 1.1.1 */
				// Start line: 1058
				// Start offset: 0x800AECD8
				// Variables:
			// 		int countryFlag; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800AED48
			// End Line: 1081
		/* end block 1.1 */
		// End offset: 0x800AED48
		// End Line: 1081

		/* begin block 1.2 */
			// Start line: 1086
			// Start offset: 0x800AED48

			/* begin block 1.2.1 */
				// Start line: 1091
				// Start offset: 0x800AED64
				// Variables:
			// 		int status; // $v1

				/* begin block 1.2.1.1 */
					// Start line: 1101
					// Start offset: 0x800AED8C

					/* begin block 1.2.1.1.1 */
						// Start line: 1102
						// Start offset: 0x800AED9C
						// Variables:
					// 		char *bigFile; // $v0
					/* end block 1.2.1.1.1 */
					// End offset: 0x800AEDB8
					// End Line: 1105
				/* end block 1.2.1.1 */
				// End offset: 0x800AEDB8
				// End Line: 1105
			/* end block 1.2.1 */
			// End offset: 0x800AEDC4
			// End Line: 1109
		/* end block 1.2 */
		// End offset: 0x800AEDC4
		// End Line: 1109
	/* end block 1 */
	// End offset: 0x800AEDDC
	// End Line: 1114

	/* begin block 2 */
		// Start line: 2476
	/* end block 2 */
	// End Line: 2477

	/* begin block 3 */
		// Start line: 2482
	/* end block 3 */
	// End Line: 2483

	/* begin block 4 */
		// Start line: 2482
	/* end block 4 */
	// End Line: 2483

void R3DCar_DeInstantiate3DCarMenu__FP8Car_tObj(Car_tObj *carObj)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)(carObj->render).palNum;
  if (-1 < iVar3) {
    uVar2 = (uint)(*(byte *)((int)&carObj->audio[4].panangle + 2) >> 7);
    cVar1 = (&R3DCar_LoadedSceneCounter)[iVar3 + uVar2 * 0x32] + -1;
    (&R3DCar_LoadedSceneCounter)[iVar3 + uVar2 * 0x32] = cVar1;
    if (cVar1 == '\0') {
      purgememadr((int)(&R3DCar_LoadedScenePointer250)[uVar2 * 0x32 + iVar3]);
      (&R3DCar_LoadedScenePointer250)[uVar2 * 0x32 + iVar3] = (Transformer_zScene *)0x0;
    }
    CarIO_ReleaseCarCluts__FP8Car_tObj(carObj);
  }
  (carObj->render).palNum = -1;
  iVar3 = *(int *)((carObj->render).palCopyNum + 0xd);
  (carObj->render).palCopyNum[0] = (carObj->render).palCopyNum[0] | 0x80;
  if (iVar3 != 0) {
    while (uVar2 = getasyncreadstatus(*(uint *)((carObj->render).palCopyNum + 0xd)), uVar2 == 0) {
      systemtask(0);
    }
    if (((0 < (int)uVar2) || (uVar2 == 0xffffffff)) &&
       (uVar2 = getasyncreadadr(*(uint *)((carObj->render).palCopyNum + 0xd)), uVar2 != 0)) {
      purgememadr(uVar2);
    }
    *(undefined4 *)((carObj->render).palCopyNum + 0xd) = 0;
    R3DCar_aSyncLoading = -1;
  }
  iVar3 = (carObj->render).currentPitch;
  if (iVar3 != 0) {
    purgememadr(iVar3);
  }
  (carObj->render).currentPitch = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_GetFileName__FPcN20(char *infilename /*$s1*/, char *filename /*$a1*/, char *suffix /*$s0*/)
 // line 1118, offset 0x800aedf4
	/* begin block 1 */
		// Start line: 1119
		// Start offset: 0x800AEDF4
		// Variables:
	// 		char workFile[10]; // stack offset -32
	/* end block 1 */
	// End offset: 0x800AEDF4
	// End Line: 1119

	/* begin block 2 */
		// Start line: 2613
	/* end block 2 */
	// End Line: 2614

	/* begin block 3 */
		// Start line: 2618
	/* end block 3 */
	// End Line: 2619

	/* begin block 4 */
		// Start line: 2618
	/* end block 4 */
	// End Line: 2619

void R3DCar_GetFileName__FPcN20(char *infilename,char *filename,char *suffix)

{
  char acStack32 [16];
  
  strcpy(acStack32,filename);
  strcat(acStack32,suffix);
  strcpy(infilename,acStack32);
  strcat(infilename,&DAT_8013d340);
  return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ R3DCar_LoadFileAdr__FPc(char *name /*$s0*/)
 // line 1133, offset 0x800aee50
	/* begin block 1 */
		// Start line: 1134
		// Start offset: 0x800AEE50
		// Variables:
	// 		char *buf; // $s0
	/* end block 1 */
	// End offset: 0x800AEE50
	// End Line: 1134

	/* begin block 2 */
		// Start line: 2643
	/* end block 2 */
	// End Line: 2644

	/* begin block 3 */
		// Start line: 2651
	/* end block 3 */
	// End Line: 2652

	/* begin block 4 */
		// Start line: 2651
	/* end block 4 */
	// End Line: 2652

char * R3DCar_LoadFileAdr__FPc(char *name)

{
  int size;
  char *pcVar1;
  
  size = filesize(name);
  pcVar1 = Platform_TempReserveMemory__FiPc(size,s_bigfile_8013d348);
  loadfileatadr(name,pcVar1);
  return pcVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_GetCarName__FPcii(char *filename /*$s1*/, int carType /*$a1*/, int country /*$s2*/)
 // line 1145, offset 0x800aee98
	/* begin block 1 */
		// Start line: 1146
		// Start offset: 0x800AEE98

		/* begin block 1.1 */
			// Start line: 1146
			// Start offset: 0x800AEE98

			/* begin block 1.1.1 */
				// Start line: 1153
				// Start offset: 0x800AEEE4
				// Variables:
			// 		int index; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800AEF14
			// End Line: 1155
		/* end block 1.1 */
		// End offset: 0x800AEF14
		// End Line: 1155
	/* end block 1 */
	// End offset: 0x800AEF14
	// End Line: 1155

	/* begin block 2 */
		// Start line: 2672
	/* end block 2 */
	// End Line: 2673

	/* begin block 3 */
		// Start line: 2676
	/* end block 3 */
	// End Line: 2677

	/* begin block 4 */
		// Start line: 2676
	/* end block 4 */
	// End Line: 2677

void R3DCar_GetCarName__FPcii(char *filename,int carType,int country)

{
  sprintf(filename,&DAT_8013d350,GameSetup_gCarNames + carType * 5);
  if (carType - 0x16U < 6) {
    filename[2] = R3DCar_CopCountry[(uint)(byte)R3DCar_CopIndex[country + (carType - 0x16U) * 5]];
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_Instantiate3DCar__FP8Car_tObji(struct Car_tObj *carObj /*$s4*/, int index /*$a1*/)
 // line 1159, offset 0x800aef2c
	/* begin block 1 */
		// Start line: 1160
		// Start offset: 0x800AEF2C
		// Variables:
	// 		char filename[10]; // stack offset -256
	// 		char workFile[10]; // stack offset -240
	// 		char bigname[100]; // stack offset -224
	// 		int reload; // $s6
	// 		int carType; // $s5

		/* begin block 1.1 */
			// Start line: 1214
			// Start offset: 0x800AF0B4

			/* begin block 1.1.1 */
				// Start line: 1222
				// Start offset: 0x800AF0E0

				/* begin block 1.1.1.1 */
					// Start line: 1243
					// Start offset: 0x800AF1D8

					/* begin block 1.1.1.1.1 */
						// Start line: 1244
						// Start offset: 0x800AF1F8
						// Variables:
					// 		int index; // $a1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800AF1F8
					// End Line: 1245

					/* begin block 1.1.1.1.2 */
						// Start line: 1256
						// Start offset: 0x800AF27C

						/* begin block 1.1.1.1.2.1 */
							// Start line: 1256
							// Start offset: 0x800AF27C

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 1263
								// Start offset: 0x800AF2CC
								// Variables:
							// 		int index; // $a2
							// 		int color; // $a1
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x800AF35C
							// End Line: 1282
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x800AF35C
						// End Line: 1282
					/* end block 1.1.1.1.2 */
					// End offset: 0x800AF35C
					// End Line: 1282
				/* end block 1.1.1.1 */
				// End offset: 0x800AF35C
				// End Line: 1282

				/* begin block 1.1.1.2 */
					// Start line: 1292
					// Start offset: 0x800AF3C8

					/* begin block 1.1.1.2.1 */
						// Start line: 1295
						// Start offset: 0x800AF3DC
						// Variables:
					// 		int i; // $s0
					// 		char infilenames[4][15]; // stack offset -120
					// 		char (*shpfiles[4]); // stack offset -56
					// 		int index; // $s3
					// 		int duplicateLicense; // $s7
					/* end block 1.1.1.2.1 */
					// End offset: 0x800AF574
					// End Line: 1339

					/* begin block 1.1.1.2.2 */
						// Start line: 1351
						// Start offset: 0x800AF608
						// Variables:
					// 		char infilename[15]; // stack offset -120
					/* end block 1.1.1.2.2 */
					// End offset: 0x800AF66C
					// End Line: 1369
				/* end block 1.1.1.2 */
				// End offset: 0x800AF66C
				// End Line: 1369

				/* begin block 1.1.1.3 */
					// Start line: 1372
					// Start offset: 0x800AF66C

					/* begin block 1.1.1.3.1 */
						// Start line: 1373
						// Start offset: 0x800AF674
						// Variables:
					// 		int index; // $v1
					/* end block 1.1.1.3.1 */
					// End offset: 0x800AF6B8
					// End Line: 1377
				/* end block 1.1.1.3 */
				// End offset: 0x800AF6B8
				// End Line: 1377
			/* end block 1.1.1 */
			// End offset: 0x800AF6E0
			// End Line: 1388
		/* end block 1.1 */
		// End offset: 0x800AF720
		// End Line: 1400
	/* end block 1 */
	// End offset: 0x800AF720
	// End Line: 1400

	/* begin block 2 */
		// Start line: 2706
	/* end block 2 */
	// End Line: 2707

	/* begin block 3 */
		// Start line: 2711
	/* end block 3 */
	// End Line: 2712

	/* begin block 4 */
		// Start line: 2711
	/* end block 4 */
	// End Line: 2712

void R3DCar_Instantiate3DCar__FP8Car_tObji(Car_tObj *carObj,int index)

{
  byte bVar1;
  undefined uVar2;
  ushort uVar3;
  short sVar4;
  Transformer_zScene *pTVar5;
  short *psVar6;
  byte *pbVar7;
  byte *shpfile;
  GameSetup_tCarData *pGVar8;
  char *__src;
  uint uVar9;
  int iVar10;
  byte **ppbVar11;
  int iVar12;
  int carType;
  uint uVar13;
  char acStack256 [16];
  char acStack240 [16];
  char acStack224 [104];
  byte abStack120 [15];
  char acStack105 [49];
  byte *local_38;
  char *local_34;
  
  carType = carObj->carInfo->carType;
  if (5 < carType - 0x16U) {
    carObj->carInfo->Country = 0;
  }
  if (R3DCar_InMenu == 0) {
    pGVar8 = carObj->carInfo;
    *(ushort *)&carObj->audio[4].panangle = *(ushort *)&GameSetup_gData.carInfo[index].Colour & 0xf;
    *(char *)((int)&(carObj->render).damageParts + 1) =
         *(char *)&pGVar8->EngineMods + *(char *)&pGVar8->WeightTransfer * '\x02' +
         *(char *)&pGVar8->GroundEffects * '\x04';
    if (carType - 0x10U < 3) {
      *(undefined *)((int)&(carObj->render).damageParts + 1) = 7;
    }
  }
  (carObj->render).palCopyNum[1] = 0;
  *(undefined *)&(carObj->render).damageParts = 0;
  if (carType < 0x1c) {
    if (R3DCar_InMenu == 0) {
      if (GameSetup_gData.commMode == 1) {
        *(undefined *)&(carObj->render).damageParts = 1;
      }
      else {
        if (((carObj->carFlags & 4U) == 0) && (2 < Cars_gNumCars - Cars_gNumTrafficCars)) {
          *(undefined *)&(carObj->render).damageParts = 1;
        }
        else {
          (carObj->render).palCopyNum[1] = 1;
        }
      }
    }
    else {
      (carObj->render).palCopyNum[1] = 1;
    }
  }
  iVar12 = R3DCar_InMenu;
  *(undefined2 *)&(carObj->render).light = 0;
  *(undefined2 *)((int)&(carObj->render).light + 2) = 0;
  if (iVar12 == 0) {
    if (GameSetup_gData.Time != 0) {
      *(undefined2 *)&(carObj->render).light = 0x33;
      *(undefined2 *)((int)&(carObj->render).light + 2) = 2;
    }
  }
  else {
    *(undefined2 *)&(carObj->render).light = 0x33;
  }
  pGVar8 = carObj->carInfo;
  (carObj->render).palCopyNum[0] = (short)carType;
  (carObj->render).palNum = (short)carType;
  (carObj->render).currentPitch = 0;
  *(undefined *)((int)&carObj->audio[4].panangle + 2) = *(undefined *)&pGVar8->Country;
  if (R3DCar_InMenu != 0) {
    sVar4 = (carObj->render).palCopyNum[1];
    (carObj->render).palNum = -1;
    uVar3 = (carObj->render).palCopyNum[0];
    *(undefined4 *)((carObj->render).palCopyNum + 0xd) = 0;
    (carObj->render).palCopyNum[1] = sVar4 << 4;
    uVar2 = *(undefined *)((int)&carObj->audio[4].panangle + 2);
    (carObj->render).palCopyNum[0] = uVar3 | 0x80;
    *(undefined *)((int)&carObj->audio[4].panangle + 3) = uVar2;
    R3DCar_aSyncLoading = -1;
    R3DCar_BigFile = (char *)0x0;
    return;
  }
  R3DCar_GetCarName__FPcii(acStack256,carType,carObj->carInfo->Country);
  strcpy(acStack224,PTR_801164c8);
  strcat(acStack224,acStack256);
  if (((carObj->render).palCopyNum[1] & 1U) == 0) {
    if ((*(char *)&(carObj->render).damageParts != '\0') && (carType < 0x1c)) {
      __src = &DAT_8013d35c;
      goto LAB_800af158;
    }
  }
  else {
    __src = &DAT_8013d358;
LAB_800af158:
    strcat(acStack224,__src);
  }
  strcat(acStack224,&DAT_8013d360);
  R3DCar_BigFile = R3DCar_LoadFileAdr__FPc(acStack224);
  strcpy(acStack240,acStack256);
  if (((carObj->render).palCopyNum[1] & 1U) == 0) {
    if ((*(char *)&(carObj->render).damageParts == '\0') || (0x1b < carType)) goto LAB_800af1d8;
    __src = &DAT_8013d35c;
  }
  else {
    __src = &DAT_8013d358;
  }
  strcat(acStack240,__src);
LAB_800af1d8:
  if ((&R3DCar_LoadedScenePointer250)[carType] == (Transformer_zScene *)0x0) {
    uVar3 = *(ushort *)&carObj->audio[4].panangle;
    pTVar5 = R3DCar_ReadInCarData__FPcP8Car_tObj(acStack240,carObj);
    uVar13 = 0;
    (&R3DCar_LoadedScenePointer250)[carType] = pTVar5;
    (&R3DCar_LoadedSceneCounter)[carType] = (&R3DCar_LoadedSceneCounter)[carType] + '\x01';
    (&R3DCar_LoadedSceneCountry)[carType] = *(char *)((int)&carObj->audio[4].panangle + 2);
    (&R3DCar_LoadedSceneColor)[((int)((uint)uVar3 << 0x10) >> 0x13) * 0x32 + carType] = uVar3 & 8;
  }
  else {
    bVar1 = *(byte *)((int)&carObj->audio[4].panangle + 2);
    if ((int)(&R3DCar_LoadedSceneCountry)[carType] == (uint)bVar1) {
      uVar9 = (uint)*(ushort *)&carObj->audio[4].panangle;
      (&R3DCar_LoadedSceneCounter)[carType] = (&R3DCar_LoadedSceneCounter)[carType] + '\x01';
      iVar12 = (int)(uVar9 << 0x10) >> 0x13;
      uVar9 = uVar9 & 8;
      uVar13 = 0;
      if ((int)(&R3DCar_LoadedSceneColor)[iVar12 * 0x32 + carType] == uVar9) {
        (carObj->render).palCopyNum[3] = (&R3DCar_LoadedSceneVRam)[iVar12 * 100 + carType * 2];
        uVar13 = 1;
        (carObj->render).palCopyNum[4] = (&SHORT_80116bfa)[iVar12 * 100 + carType * 2];
      }
      else {
        (&R3DCar_LoadedSceneColor)[iVar12 * 0x32 + carType] = (short)uVar9;
      }
    }
    else {
      *(byte *)((int)&carObj->audio[4].panangle + 2) = bVar1 | 0x80;
      pTVar5 = R3DCar_ReadInCarData__FPcP8Car_tObj(acStack240,carObj);
      *(Transformer_zScene **)(&DAT_801169d0 + carType) = pTVar5;
      uVar13 = 0;
      (&DAT_80116aca)[carType] = (&DAT_80116aca)[carType] + '\x01';
    }
  }
  R3DCar_CalcCarDimensions__FP8Car_tObjP18Transformer_zScenei
            (carObj,(&R3DCar_LoadedScenePointer250)
                    [(uint)(*(byte *)((int)&carObj->audio[4].panangle + 2) >> 7) * 0x32 + carType],
             carType);
  if (carObj->carInfo->ColourChange != 0) {
    psVar6 = reservememadr(s_palCopy_8013d368,(int)&DAT_000028a0,0);
    *(short **)&(carObj->render).currentPitch = psVar6;
  }
  Texture_palNum = 0;
  if (carType < 0x1c) {
    if (((carObj->render).palCopyNum[1] & 1U) == 0) {
      __src = &DAT_8013d370;
    }
    else {
      __src = &DAT_8013d358;
    }
    iVar12 = 1;
    R3DCar_GetFileName__FPcN20((char *)abStack120,acStack256,__src);
    if (((carObj->render).palCopyNum[1] & 1U) != 0) {
      R3DCar_GetFileName__FPcN20(acStack105,acStack256,&DAT_8013d374);
      iVar12 = 2;
    }
    if (*(short *)&carObj->audio[4].panangle < 8) {
      __src = &DAT_8013d37c;
    }
    else {
      __src = &DAT_8013d378;
    }
    R3DCar_GetFileName__FPcN20((char *)(abStack120 + iVar12 * 0xf),acStack256,__src);
    R3DCar_GetFileName__FPcN20((char *)(abStack120 + (iVar12 + 1) * 0xf),acStack256,&DAT_8013d380);
    iVar10 = 0;
    if (iVar12 != -2) {
      ppbVar11 = &local_38;
      shpfile = abStack120;
      do {
        iVar10 = iVar10 + 1;
        pbVar7 = locatebig((byte *)R3DCar_BigFile,shpfile);
        *ppbVar11 = pbVar7;
        ppbVar11 = ppbVar11 + 1;
        shpfile = shpfile + 0xf;
      } while (iVar10 < iVar12 + 2);
    }
    pGVar8 = carObj->carInfo;
    iVar12 = 1;
    (carObj->render).palCopyNum[6] = 0;
    (carObj->render).palCopyNum[5] = 0;
    CarIO_CreateLicense__FPcii(pGVar8->license,carType,0);
    Texture_CarColor =
         ((uint)*(ushort *)&carObj->audio[4].panangle & 7) +
         ((uint)*(byte *)((int)&(carObj->render).damageParts + 1) & 2) * 4;
    CarIO_ReadInCarTextureData__FPcP8Car_tObjii((char *)local_38,carObj,uVar13 | uVar13 << 1,0);
    if (((carObj->render).palCopyNum[1] & 1U) != 0) {
      iVar12 = 2;
      CarIO_ReadInCarTextureData__FPcP8Car_tObjii(local_34,carObj,0x19,0);
    }
    Texture_CarColor =
         ((uint)*(ushort *)&carObj->audio[4].panangle & 7) +
         ((uint)*(byte *)((int)&(carObj->render).damageParts + 1) & 1) * 8;
    CarIO_ReadInCarTextureData__FPcP8Car_tObjii
              ((char *)(&local_38)[iVar12],carObj,uVar13 << 1 | 0x91,0);
    CarIO_CleanUpLicense__Fi(0);
    uVar3 = *(ushort *)&carObj->audio[4].panangle;
    *(undefined2 *)&(carObj->render).currentRoll = (undefined2)Texture_palNum;
    Texture_CarColor =
         ((uint)uVar3 & 7) + ((uint)*(byte *)((int)&(carObj->render).damageParts + 1) & 2) * 4;
    CarIO_UpdateCarTextureData__FPcP8Car_tObji((char *)(&local_38)[iVar12 + 1],carObj,0);
  }
  else {
    strcpy((char *)abStack120,acStack240);
    strcat((char *)abStack120,&DAT_8013d340);
    shpfile = locatebig((byte *)R3DCar_BigFile,abStack120);
    Texture_CarColor = (uint)*(ushort *)&carObj->audio[4].panangle & 7;
    CarIO_ReadInCarTextureData__FPcP8Car_tObjii((char *)shpfile,carObj,uVar13 | 0x88,0);
    *(undefined2 *)&(carObj->render).currentRoll = (undefined2)Texture_palNum;
  }
  if (uVar13 == 0) {
    iVar12 = (int)((uint)*(ushort *)&carObj->audio[4].panangle << 0x10) >> 0x13;
    (&R3DCar_LoadedSceneVRam)[iVar12 * 100 + carType * 2] = (carObj->render).palCopyNum[3];
    (&SHORT_80116bfa)[iVar12 * 100 + carType * 2] = (carObj->render).palCopyNum[4];
  }
  carType = (carObj->render).currentPitch;
  if (carType != 0) {
    resizememadr(carType,(int)*(short *)&(carObj->render).currentRoll * 0x208);
  }
  R3DCar_BigFile = (char *)0x0;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ R3DCar_Visibilty__FP8Car_tObjP13DRender_tView(struct Car_tObj *carObj /*$s1*/, struct DRender_tView *Vi /*$s3*/)
 // line 1405, offset 0x800af74c
	/* begin block 1 */
		// Start line: 1406
		// Start offset: 0x800AF74C
		// Variables:
	// 		struct coorddef carPos[4]; // stack offset -96
	// 		struct coorddef car; // stack offset -48
	// 		int carZ; // $t0
	// 		struct Car_tObj *camCarObj; // $v0
	// 		int zoom; // $s2
	// 		int inCarCam; // $s5
	// 		int maxMax; // $s0
	// 		int maxMid; // $s4

		/* begin block 1.1 */
			// Start line: 1482
			// Start offset: 0x800AFA1C
			// Variables:
		// 		int x; // $a1
		// 		int z; // $a2
		/* end block 1.1 */
		// End offset: 0x800AFA1C
		// End Line: 1482
	/* end block 1 */
	// End offset: 0x800AFAD0
	// End Line: 1512

	/* begin block 2 */
		// Start line: 3291
	/* end block 2 */
	// End Line: 3292

	/* begin block 3 */
		// Start line: 3297
	/* end block 3 */
	// End Line: 3298

	/* begin block 4 */
		// Start line: 3297
	/* end block 4 */
	// End Line: 3298

/* WARNING: Type propagation algorithm not settling */

int R3DCar_Visibilty__FP8Car_tObjP13DRender_tView(Car_tObj *carObj,DRender_tView *Vi)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int cviewP;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  cviewP = Vi->player;
  bVar2 = false;
  uVar10 = *(uint *)(&Camera_gInfo.modechange + cviewP * 0x110) >> 0x19 & 3;
  if ((((((Car_tObj *)(&Camera_gInfo.anchor)[cviewP * 0x44] != carObj) ||
        ((carObj->carFlags & 4U) == 0)) ||
       ((*(uint *)(&Camera_gInfo.modechange + cviewP * 0x110) >> 0x1b & 1) == 0)) ||
      ((cviewP = Camera_GetMode__Fi(cviewP), cviewP != 0 &&
       ((((*(uint *)(&Camera_gInfo.modechange + Vi->player * 0x110) >> 0x1b & 1) == 0 ||
         (cviewP = Camera_GetMode__Fi(Vi->player), cviewP != 1)) ||
        (bVar2 = true, ((carObj->render).palCopyNum[1] & 1U) != 0)))))) &&
     (cviewP = 0xc0000, (carObj->N).active != '\0')) {
    iVar11 = 0x3c0000;
    bVar1 = Replay_ReplayMode == 2;
    (carObj->render).palCopyNum[2] = 0;
    if ((bVar1) || (iVar3 = Camera_GetMode__Fi(Vi->player), iVar3 == 0xe)) {
      cviewP = 0x240000;
      iVar11 = 0x780000;
    }
    if (uVar10 != 0) {
      cviewP = cviewP * uVar10 * 3;
      iVar11 = iVar11 * uVar10 * 2;
    }
    iVar8 = (carObj->N).position.x - (Vi->cview).translation.x;
    iVar9 = (carObj->N).position.y - (Vi->cview).translation.y;
    iVar3 = (carObj->N).position.z - (Vi->cview).translation.z;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar4 = (Vi->cview).mrotation.m[0];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar5 = (Vi->cview).mrotation.m[1];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar7 = iVar3;
    if (iVar3 < 0) {
      iVar7 = iVar3 + 0xff;
    }
    iVar6 = (Vi->cview).mrotation.m[2];
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar4 = (iVar8 >> 8) * (iVar4 >> 8) + (iVar9 >> 8) * (iVar5 >> 8) + (iVar7 >> 8) * (iVar6 >> 8);
    iVar5 = (Vi->cview).mrotation.m[6];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar7 = (Vi->cview).mrotation.m[7];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar6 = (Vi->cview).mrotation.m[8];
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar3 = (iVar8 >> 8) * (iVar5 >> 8) + (iVar9 >> 8) * (iVar7 >> 8) + (iVar3 >> 8) * (iVar6 >> 8);
    if (iVar3 + 0x30000U < 0xcb0001) {
      if (cviewP < iVar3) {
        (carObj->render).palCopyNum[2] = 1;
      }
      if (iVar11 < iVar3) {
        (carObj->render).palCopyNum[2] = 2;
      }
      iVar8 = (carObj->N).dimension.x;
      iVar11 = (carObj->N).dimension.z;
      cviewP = iVar4 - iVar8;
      iVar9 = iVar3 + iVar11;
      iVar4 = iVar4 + iVar8;
      iVar11 = iVar3 - iVar11;
      if (cviewP < 0) {
        cviewP = -cviewP;
      }
      if (iVar9 < cviewP) {
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (((iVar9 < iVar4) && (iVar11 < cviewP)) && (iVar11 < iVar4)) goto LAB_800afab4;
      }
      if (!bVar2) {
        return iVar3;
      }
      (carObj->render).palCopyNum[2] = 3;
      return iVar3;
    }
  }
LAB_800afab4:
  (carObj->render).palCopyNum[2] = -1;
  return -0x80000000;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_TurnHeadLightOn__FP8Car_tObji(struct Car_tObj *carObj /*$a0*/, int tail /*$a1*/)
 // line 1516, offset 0x800afaf4
	/* begin block 1 */
		// Start line: 1517
		// Start offset: 0x800AFAF4
	/* end block 1 */
	// End offset: 0x800AFB4C
	// End Line: 1522

	/* begin block 2 */
		// Start line: 3568
	/* end block 2 */
	// End Line: 3569

	/* begin block 3 */
		// Start line: 3573
	/* end block 3 */
	// End Line: 3574

	/* begin block 4 */
		// Start line: 3573
	/* end block 4 */
	// End Line: 3574

	/* begin block 5 */
		// Start line: 3574
	/* end block 5 */
	// End Line: 3575

	/* begin block 6 */
		// Start line: 3574
	/* end block 6 */
	// End Line: 3575

void R3DCar_TurnHeadLightOn__FP8Car_tObji(Car_tObj *carObj,int tail)

{
  ushort uVar1;
  
  *(ushort *)&(carObj->render).light = *(ushort *)&(carObj->render).light | 0x11;
  if (tail != 0) {
    *(ushort *)((int)&(carObj->render).light + 2) =
         *(ushort *)((int)&(carObj->render).light + 2) | 2;
  }
  uVar1 = *(ushort *)&(carObj->render).light;
  if ((uVar1 & 8) == 0) {
    *(ushort *)&(carObj->render).light = uVar1 | 2;
    uVar1 = *(ushort *)&(carObj->render).light;
  }
  if ((uVar1 & 0x80) == 0) {
    *(ushort *)&(carObj->render).light = uVar1 | 0x20;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_TurnHeadLightOff__FP8Car_tObji(struct Car_tObj *carObj /*$a0*/, int head /*$a1*/)
 // line 1525, offset 0x800afb54
	/* begin block 1 */
		// Start line: 1526
		// Start offset: 0x800AFB54
	/* end block 1 */
	// End offset: 0x800AFBA0
	// End Line: 1533

	/* begin block 2 */
		// Start line: 3587
	/* end block 2 */
	// End Line: 3588

	/* begin block 3 */
		// Start line: 3591
	/* end block 3 */
	// End Line: 3592

	/* begin block 4 */
		// Start line: 3591
	/* end block 4 */
	// End Line: 3592

	/* begin block 5 */
		// Start line: 3592
	/* end block 5 */
	// End Line: 3593

	/* begin block 6 */
		// Start line: 3592
	/* end block 6 */
	// End Line: 3593

void R3DCar_TurnHeadLightOff__FP8Car_tObji(Car_tObj *carObj,int head)

{
  ushort uVar1;
  
  *(ushort *)((int)&(carObj->render).light + 2) =
       *(ushort *)((int)&(carObj->render).light + 2) & 0xfd;
  if (head != 0) {
    uVar1 = *(ushort *)&(carObj->render).light;
    *(ushort *)&(carObj->render).light = uVar1 & 0xee;
    if ((uVar1 & 8) == 0) {
      *(ushort *)&(carObj->render).light = uVar1 & 0xec;
    }
    uVar1 = *(ushort *)&(carObj->render).light;
    if ((uVar1 & 0x80) == 0) {
      *(ushort *)&(carObj->render).light = uVar1 & 0xdf;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_MATRIX3DT_Copy__FPiT0(int *from /*$a0*/, int *to /*$a1*/)
 // line 1538, offset 0x800afba8
	/* begin block 1 */
		// Start line: 1539
		// Start offset: 0x800AFBA8
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x800AFBC8
	// End Line: 1542

	/* begin block 2 */
		// Start line: 3611
	/* end block 2 */
	// End Line: 3612

	/* begin block 3 */
		// Start line: 3617
	/* end block 3 */
	// End Line: 3618

	/* begin block 4 */
		// Start line: 3617
	/* end block 4 */
	// End Line: 3618

	/* begin block 5 */
		// Start line: 3620
	/* end block 5 */
	// End Line: 3621

void R3DCar_MATRIX3DT_Copy__FPiT0(int *from,int *to)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    iVar1 = *from;
    from = from + 1;
    iVar2 = iVar2 + -1;
    *to = iVar1;
    to = to + 1;
  } while (iVar2 != -1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_InsertCarFacet__FP8Car_tObjP13DRender_tView(struct Car_tObj *carObj /*$s5*/, struct DRender_tView *Vi /*stack 4*/)
 // line 1546, offset 0x800afbd0
	/* begin block 1 */
		// Start line: 1547
		// Start offset: 0x800AFBD0
		// Variables:
	// 		int i; // $s4
	// 		struct Transformer_zObj *obj; // $a1
	// 		struct coorddef parent; // stack offset -464
	// 		struct matrixtdef bodyMat; // stack offset -448
	// 		struct matrixtdef orientMat; // stack offset -408
	// 		struct matrixtdef insideMat; // stack offset -368
	// 		struct matrixtdef orientIMat; // stack offset -328
	// 		struct matrixtdef steerMat; // stack offset -288
	// 		int rideHeight; // stack offset -56
	// 		int detailIndex; // $fp
	// 		int carType; // $s7
	// 		int countryFlag; // stack offset -52
	// 		int rightHandDrive; // stack offset -48
	// 		int cop_flag; // $s6

		/* begin block 1.1 */
			// Start line: 1626
			// Start offset: 0x800AFD40

			/* begin block 1.1.1 */
				// Start line: 1627
				// Start offset: 0x800AFD48

				/* begin block 1.1.1.1 */
					// Start line: 1628
					// Start offset: 0x800AFD48

					/* begin block 1.1.1.1.1 */
						// Start line: 1636
						// Start offset: 0x800AFD9C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1637
							// Start offset: 0x800AFD9C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1638
								// Start offset: 0x800AFDB0

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1639
									// Start offset: 0x800AFDB0

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1641
										// Start offset: 0x800AFDC4
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800AFDD4
									// End Line: 1645
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800AFDD4
								// End Line: 1645
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800AFDD4
							// End Line: 1645
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800AFDD4
						// End Line: 1645
					/* end block 1.1.1.1.1 */
					// End offset: 0x800AFDD4
					// End Line: 1645
				/* end block 1.1.1.1 */
				// End offset: 0x800AFDD4
				// End Line: 1645
			/* end block 1.1.1 */
			// End offset: 0x800AFDD4
			// End Line: 1645
		/* end block 1.1 */
		// End offset: 0x800AFDD4
		// End Line: 1645

		/* begin block 1.2 */
			// Start line: 1669
			// Start offset: 0x800AFE98
			// Variables:
		// 		struct coorddef car; // stack offset -248
		// 		struct coorddef pos; // stack offset -232
		/* end block 1.2 */
		// End offset: 0x800AFFC4
		// End Line: 1680

		/* begin block 1.3 */
			// Start line: 1680
			// Start offset: 0x800AFFC4

			/* begin block 1.3.1 */
				// Start line: 1688
				// Start offset: 0x800AFFF8

				/* begin block 1.3.1.1 */
					// Start line: 1698
					// Start offset: 0x800B003C
					// Variables:
				// 		struct matrixtdef bodyIMat; // stack offset -216
				// 		struct matrixtdef matP; // stack offset -176
				// 		int roll; // $s3
				/* end block 1.3.1.1 */
				// End offset: 0x800B0050
				// End Line: 1704
			/* end block 1.3.1 */
			// End offset: 0x800B0050
			// End Line: 1704

			/* begin block 1.3.2 */
				// Start line: 1720
				// Start offset: 0x800B00E8
				// Variables:
			// 		struct matrixtdef matP; // stack offset -248
			/* end block 1.3.2 */
			// End offset: 0x800B0140
			// End Line: 1731
		/* end block 1.3 */
		// End offset: 0x800B0140
		// End Line: 1731

		/* begin block 1.4 */
			// Start line: 1735
			// Start offset: 0x800B0140

			/* begin block 1.4.1 */
				// Start line: 1736
				// Start offset: 0x800B0168

				/* begin block 1.4.1.1 */
					// Start line: 1737
					// Start offset: 0x800B0168

					/* begin block 1.4.1.1.1 */
						// Start line: 1742
						// Start offset: 0x800B0198
						// Variables:
					// 		int vel; // $a0
					// 		int spin; // $v0
					// 		int rear; // $a1

						/* begin block 1.4.1.1.1.1 */
							// Start line: 1744
							// Start offset: 0x800B0198

							/* begin block 1.4.1.1.1.1.1 */
								// Start line: 1747
								// Start offset: 0x800B01C8

								/* begin block 1.4.1.1.1.1.1.1 */
									// Start line: 1752
									// Start offset: 0x800B01F8

									/* begin block 1.4.1.1.1.1.1.1.1 */
										// Start line: 1754
										// Start offset: 0x800B0230
									/* end block 1.4.1.1.1.1.1.1.1 */
									// End offset: 0x800B0294
									// End Line: 1758
								/* end block 1.4.1.1.1.1.1.1 */
								// End offset: 0x800B0294
								// End Line: 1758
							/* end block 1.4.1.1.1.1.1 */
							// End offset: 0x800B02D4
							// End Line: 1768
						/* end block 1.4.1.1.1.1 */
						// End offset: 0x800B02F0
						// End Line: 1769
					/* end block 1.4.1.1.1 */
					// End offset: 0x800B02F0
					// End Line: 1769
				/* end block 1.4.1.1 */
				// End offset: 0x800B02F0
				// End Line: 1769
			/* end block 1.4.1 */
			// End offset: 0x800B02F0
			// End Line: 1769
		/* end block 1.4 */
		// End offset: 0x800B02F0
		// End Line: 1769

		/* begin block 1.5 */
			// Start line: 1773
			// Start offset: 0x800B02F0
			// Variables:
		// 		int steeringAngle; // $s0

			/* begin block 1.5.1 */
				// Start line: 1774
				// Start offset: 0x800B02F0

				/* begin block 1.5.1.1 */
					// Start line: 1790
					// Start offset: 0x800B0308
				/* end block 1.5.1.1 */
				// End offset: 0x800B0334
				// End Line: 1792
			/* end block 1.5.1 */
			// End offset: 0x800B0334
			// End Line: 1792
		/* end block 1.5 */
		// End offset: 0x800B0334
		// End Line: 1795

		/* begin block 1.6 */
			// Start line: 1805
			// Start offset: 0x800B037C

			/* begin block 1.6.1 */
				// Start line: 1806
				// Start offset: 0x800B0388

				/* begin block 1.6.1.1 */
					// Start line: 1807
					// Start offset: 0x800B0388

					/* begin block 1.6.1.1.1 */
						// Start line: 1807
						// Start offset: 0x800B03AC
						// Variables:
					// 		short code; // $a1

						/* begin block 1.6.1.1.1.1 */
							// Start line: 1894
							// Start offset: 0x800B05D0

							/* begin block 1.6.1.1.1.1.1 */
								// Start line: 1895
								// Start offset: 0x800B05F4

								/* begin block 1.6.1.1.1.1.1.1 */
									// Start line: 1906
									// Start offset: 0x800B0600

									/* begin block 1.6.1.1.1.1.1.1.1 */
										// Start line: 1908
										// Start offset: 0x800B0614
										// Variables:
									// 		int damage; // $v0
									/* end block 1.6.1.1.1.1.1.1.1 */
									// End offset: 0x800B0640
									// End Line: 1914
								/* end block 1.6.1.1.1.1.1.1 */
								// End offset: 0x800B0640
								// End Line: 1914
							/* end block 1.6.1.1.1.1.1 */
							// End offset: 0x800B0660
							// End Line: 1928
						/* end block 1.6.1.1.1.1 */
						// End offset: 0x800B0660
						// End Line: 1928
					/* end block 1.6.1.1.1 */
					// End offset: 0x800B0660
					// End Line: 1931
				/* end block 1.6.1.1 */
				// End offset: 0x800B067C
				// End Line: 1932
			/* end block 1.6.1 */
			// End offset: 0x800B067C
			// End Line: 1932

			/* begin block 1.6.2 */
				// Start line: 1934
				// Start offset: 0x800B067C

				/* begin block 1.6.2.1 */
					// Start line: 1935
					// Start offset: 0x800B067C

					/* begin block 1.6.2.1.1 */
						// Start line: 1935
						// Start offset: 0x800B0698
						// Variables:
					// 		short code; // $a1
					/* end block 1.6.2.1.1 */
					// End offset: 0x800B071C
					// End Line: 1959
				/* end block 1.6.2.1 */
				// End offset: 0x800B072C
				// End Line: 1960
			/* end block 1.6.2 */
			// End offset: 0x800B072C
			// End Line: 1960
		/* end block 1.6 */
		// End offset: 0x800B072C
		// End Line: 1960

		/* begin block 1.7 */
			// Start line: 1963
			// Start offset: 0x800B072C

			/* begin block 1.7.1 */
				// Start line: 1969
				// Start offset: 0x800B0794

				/* begin block 1.7.1.1 */
					// Start line: 1971
					// Start offset: 0x800B07A0

					/* begin block 1.7.1.1.1 */
						// Start line: 1974
						// Start offset: 0x800B0808
						// Variables:
					// 		struct matrixtdef tmpMat; // stack offset -248
					// 		struct coorddef translation; // stack offset -208
					// 		struct coorddef tmp; // stack offset -192
					// 		int suspensionOffset; // $a0

						/* begin block 1.7.1.1.1.1 */
							// Start line: 1982
							// Start offset: 0x800B0808

							/* begin block 1.7.1.1.1.1.1 */
								// Start line: 1983
								// Start offset: 0x800B0810
								// Variables:
							// 		int index; // $v1
							/* end block 1.7.1.1.1.1.1 */
							// End offset: 0x800B086C
							// End Line: 1991
						/* end block 1.7.1.1.1.1 */
						// End offset: 0x800B0884
						// End Line: 1996

						/* begin block 1.7.1.1.1.2 */
							// Start line: 2013
							// Start offset: 0x800B0910

							/* begin block 1.7.1.1.1.2.1 */
								// Start line: 2046
								// Start offset: 0x800B0A14

								/* begin block 1.7.1.1.1.2.1.1 */
									// Start line: 2047
									// Start offset: 0x800B0A14

									/* begin block 1.7.1.1.1.2.1.1.1 */
										// Start line: 2048
										// Start offset: 0x800B0A3C

										/* begin block 1.7.1.1.1.2.1.1.1.1 */
											// Start line: 2092
											// Start offset: 0x800B0AC4
											// Variables:
										// 		int steeringAngle; // $v0
										/* end block 1.7.1.1.1.2.1.1.1.1 */
										// End offset: 0x800B0AD8
										// End Line: 2096

										/* begin block 1.7.1.1.1.2.1.1.1.2 */
											// Start line: 2104
											// Start offset: 0x800B0AF4
											// Variables:
										// 		struct matrixtdef matR; // stack offset -136
										// 		struct matrixtdef matP; // stack offset -96
										// 		int roll; // $a1
										// 		int pitch; // $s1
										/* end block 1.7.1.1.1.2.1.1.1.2 */
										// End offset: 0x800B0B18
										// End Line: 2111

										/* begin block 1.7.1.1.1.2.1.1.1.3 */
											// Start line: 2122
											// Start offset: 0x800B0B3C
											// Variables:
										// 		struct matrixtdef matX; // stack offset -176
										// 		struct matrixtdef matY; // stack offset -136
										// 		int maxAngleFactor; // $s1
										// 		int steeringAngle; // $s0
										/* end block 1.7.1.1.1.2.1.1.1.3 */
										// End offset: 0x800B0B80
										// End Line: 2133
									/* end block 1.7.1.1.1.2.1.1.1 */
									// End offset: 0x800B0BE0
									// End Line: 2143
								/* end block 1.7.1.1.1.2.1.1 */
								// End offset: 0x800B0BE0
								// End Line: 2143
							/* end block 1.7.1.1.1.2.1 */
							// End offset: 0x800B0BE0
							// End Line: 2143
						/* end block 1.7.1.1.1.2 */
						// End offset: 0x800B0BE0
						// End Line: 2143
					/* end block 1.7.1.1.1 */
					// End offset: 0x800B0BE0
					// End Line: 2143
				/* end block 1.7.1.1 */
				// End offset: 0x800B0BE0
				// End Line: 2143
			/* end block 1.7.1 */
			// End offset: 0x800B0BE0
			// End Line: 2143
		/* end block 1.7 */
		// End offset: 0x800B0BEC
		// End Line: 2147

		/* begin block 1.8 */
			// Start line: 2150
			// Start offset: 0x800B0BEC

			/* begin block 1.8.1 */
				// Start line: 2160
				// Start offset: 0x800B0C38
			/* end block 1.8.1 */
			// End offset: 0x800B0C38
			// End Line: 2161
		/* end block 1.8 */
		// End offset: 0x800B0C78
		// End Line: 2169
	/* end block 1 */
	// End offset: 0x800B0D80
	// End Line: 2181

	/* begin block 2 */
		// Start line: 3628
	/* end block 2 */
	// End Line: 3629

	/* begin block 3 */
		// Start line: 3633
	/* end block 3 */
	// End Line: 3634

	/* begin block 4 */
		// Start line: 3633
	/* end block 4 */
	// End Line: 3634

void R3DCar_InsertCarFacet__FP8Car_tObjP13DRender_tView(Car_tObj *carObj,DRender_tView *Vi)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  speechSourceType sVar9;
  int iVar10;
  DrawC_tEnvMap *pDVar11;
  int iVar12;
  matrixtdef *m1;
  matrixtdef *m2;
  byte bVar13;
  char cVar14;
  int iVar15;
  _func_39 *p_Var16;
  Car_tObj *pCVar17;
  coorddef *t;
  uint uVar18;
  short sVar19;
  int iVar20;
  int iVar21;
  matrixtdef mStack448;
  matrixtdef mStack408;
  matrixtdef local_170;
  matrixtdef mStack328;
  matrixtdef mStack288;
  int local_f8;
  int local_f4;
  int local_f0;
  uint local_e8;
  uint local_e0;
  undefined auStack216 [8];
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  matrixtdef mStack176;
  matrixtdef mStack136;
  matrixtdef mStack96;
  int local_38;
  uint local_34;
  uint local_30;
  matrixtdef *local_2c;
  
  local_30 = 0;
  local_38 = *(int *)((carObj->render).palCopyNum + 9);
  iVar20 = (int)(carObj->render).palNum;
  local_34 = (uint)(*(byte *)((int)&carObj->audio[4].panangle + 2) >> 7);
  if ((iVar20 < 0x1c) && (local_30 = SEXT14(R3DCar_ForceDriveSide[iVar20]), (int)local_30 < 0)) {
    local_30 = AITune_trackInfo[GameSetup_gData.track].driveSide + 1 >> 1 ^ 1;
  }
  if (GameSetup_gData.mirrorTrack != 0) {
    local_30 = local_30 ^ 1;
  }
  R3DCar_rightHandDrive = local_30;
  bVar1 = iVar20 - 0x16U < 6;
  if ((carObj->render).palCopyNum[2] < 0) {
    R3DCar_rightHandDrive = local_30;
    return;
  }
  uVar5 = *(ushort *)&(carObj->render).light;
  if (((uVar5 & 8) == 0) && (0x1e0000 < (carObj->N).damage[0])) {
    if ((uVar5 & 0x44) == 0) {
      uVar4 = 0xc;
LAB_800afcf8:
      *(ushort *)&(carObj->render).light = uVar5 | uVar4;
    }
    else {
      uVar4 = 8;
      if ((uVar5 & 2) != 0) goto LAB_800afcf8;
    }
    uVar5 = *(ushort *)&(carObj->render).light;
  }
  if (((uVar5 & 0x80) == 0) && (0x1e0000 < (carObj->N).damage[2])) {
    if ((uVar5 & 0x44) == 0) {
      uVar4 = uVar5 | 0xc0;
    }
    else {
      uVar4 = uVar5 | 0x80;
      if ((uVar5 & 0x20) == 0) goto LAB_800afd40;
    }
    *(ushort *)&(carObj->render).light = uVar4;
  }
LAB_800afd40:
  if (bVar1) {
    if (((carObj->speechInfo).speechSource & 2) == 0) {
      if ((*(ushort *)&(carObj->render).palCopy & 0x80) != 0) {
        bVar13 = (carObj->control).lights;
        *(undefined2 *)&(carObj->render).palCopy = 0;
        *(undefined2 *)((int)&(carObj->render).palCopy + 2) = 0;
        if ((bVar13 & 2) == 0) {
          R3DCar_TurnHeadLightOff__FP8Car_tObji(carObj,(uint)((bVar13 & 4) == 0));
        }
      }
    }
    else {
      if ((*(ushort *)&(carObj->render).palCopy & 0x80) == 0) {
        *(undefined2 *)&(carObj->render).palCopy = 0x80;
        bVar13 = (carObj->control).lights;
        *(undefined2 *)((int)&(carObj->render).palCopy + 2) = 0x88;
        if ((bVar13 & 2) == 0) {
          R3DCar_TurnHeadLightOn__FP8Car_tObji(carObj,1);
        }
      }
    }
  }
  if (R3DCar_Clock != 0) {
    uVar5 = *(ushort *)&(carObj->render).palCopy;
    if ((uVar5 & 0x80) != 0) {
      *(ushort *)&(carObj->render).palCopy = uVar5 + 1 & 0x8f;
    }
    uVar5 = *(ushort *)((int)&(carObj->render).palCopy + 2);
    if ((uVar5 & 0x80) != 0) {
      *(ushort *)((int)&(carObj->render).palCopy + 2) = uVar5 + 1 & 0x8f;
    }
  }
  if (iVar20 < 0x1c) {
    if ((*(byte *)((int)&(carObj->render).damageParts + 1) & 2) != 0) {
      local_38 = *(int *)((carObj->render).palCopyNum + 0xb);
    }
  }
  else {
    local_38 = 0;
  }
  if (((carObj->render).palCopyNum[2] == 0) &&
     ((0x1b < iVar20 || (*(char *)&(carObj->render).damageParts != '\0')))) {
    (carObj->render).palCopyNum[2] = 1;
  }
  if (((carObj->render).palCopyNum[2] == 2) && (iVar20 == 0x1c)) {
    (carObj->render).palCopyNum[2] = 1;
  }
  local_f8 = (carObj->N).position.x - (Vi->cview).translation.x;
  iVar21 = (int)(carObj->render).palCopyNum[2] + 2;
  local_f4 = (carObj->N).position.y - (Vi->cview).translation.y;
  local_f0 = (carObj->N).position.z - (Vi->cview).translation.z;
  iVar15 = local_f8;
  if (local_f8 < 0) {
    iVar15 = local_f8 + 0xff;
  }
  iVar6 = (carObj->N).orientMat.m[0];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar12 = local_f4;
  if (local_f4 < 0) {
    iVar12 = local_f4 + 0xff;
  }
  iVar7 = (carObj->N).orientMat.m[1];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar10 = local_f0;
  if (local_f0 < 0) {
    iVar10 = local_f0 + 0xff;
  }
  iVar8 = (carObj->N).orientMat.m[2];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  local_e8 = (iVar15 >> 8) * (iVar6 >> 8) + (iVar12 >> 8) * (iVar7 >> 8) +
             (iVar10 >> 8) * (iVar8 >> 8);
  iVar6 = (carObj->N).orientMat.m[6];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar7 = (carObj->N).orientMat.m[7];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar10 = local_f0;
  if (local_f0 < 0) {
    iVar10 = local_f0 + 0xff;
  }
  iVar8 = (carObj->N).orientMat.m[8];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  local_e0 = (iVar15 >> 8) * (iVar6 >> 8) + (iVar12 >> 8) * (iVar7 >> 8) +
             (iVar10 >> 8) * (iVar8 >> 8);
  iVar15 = fixedatan(local_e8,local_e0);
  R3DCar_yawCam = 0x1000 - (short)(iVar15 >> 4);
  m2 = &(carObj->N).orientMat;
  if (iVar20 < 0x1c) {
    m1 = &local_170;
    R3DCar_MATRIX3DT_Copy__FPiT0((int *)m2,(int *)m1);
    if (local_30 != 0) {
      local_170.m[0] = -local_170.m[0];
      local_170.m[2] = -local_170.m[2];
      local_170.m[1] = -local_170.m[1];
    }
    uVar18 = carObj->audio[5].surface1;
    if (local_30 != 0) {
      uVar18 = -uVar18;
    }
    fixedxformz((int *)&mStack448,carObj->audio[5].surface1);
    fixedxformx((undefined4 *)&mStack176,carObj->audio[5].channel + 100);
    Math_fasttransmult__FP10matrixtdefN20(&mStack448,&mStack176,&mStack448);
    Math_fasttransmult__FP10matrixtdefN20(&mStack448,m2,&mStack448);
    m2 = (matrixtdef *)(&local_f8 + 0x20);
    fixedxformz((int *)m2,uVar18);
    Math_fasttransmult__FP10matrixtdefN20(m2,&mStack176,m2);
    Math_fasttransmult__FP10matrixtdefN20(m2,m1,m1);
    Math_fasttransmult__FP10matrixtdefN20(&mStack448,&(Vi->cview).mrotationInv,&mStack408);
    m2 = &mStack328;
  }
  else {
    m1 = &mStack448;
    fixedxformz((int *)m1,carObj->audio[5].surface1);
    fixedxformx((undefined4 *)(matrixtdef *)&local_f8,carObj->audio[5].channel);
    Math_fasttransmult__FP10matrixtdefN20(m1,(matrixtdef *)&local_f8,m1);
    Math_fasttransmult__FP10matrixtdefN20(m1,&(carObj->N).orientMat,m1);
    m2 = &mStack408;
  }
  Math_fasttransmult__FP10matrixtdefN20(m1,&(Vi->cview).mrotationInv,m2);
  iVar15 = Replay_ReplayMode;
  if ((simVar.pauseSim == 0) && (simVar.quickPauseSim == 0)) {
    iVar6 = 0;
    if (iVar20 == 0x1c) {
      iVar15 = (carObj->N).wheelRot[1];
      (carObj->N).wheelRot[0] = (carObj->N).wheelRot[0] + 0x1800U & 0xffff;
      (carObj->N).wheelRot[1] = iVar15 + 0x1800U & 0xffff;
    }
    else {
      iVar12 = carObj->wheelSpin;
      if (iVar12 < 0) {
        iVar12 = -iVar12;
      }
      pCVar17 = carObj;
      while (iVar6 < 2) {
        if (iVar15 == 2) {
          iVar7 = (carObj->linearVel_ch).z >> (8U - Replay_ReplayInterface.speed & 0x1f);
        }
        else {
          iVar7 = (carObj->linearVel_ch).z >> 6;
        }
        if (iVar6 == 0) {
          if (carObj->frontWheelSpin != 0) goto LAB_800b0220;
        }
        else {
          if (iVar12 - 1U < 2) {
LAB_800b0220:
            bVar13 = (carObj->control).gear;
            if (bVar13 != 1) {
              iVar8 = carObj->specs->velToRpmRatio[(uint)bVar13];
              iVar10 = carObj->flywheelRpm << 0x10;
              iVar7 = iVar10 / iVar8;
              if (iVar8 == 0) {
                trap(0x1c00);
              }
              if ((iVar8 == -1) && (iVar10 == -0x80000000)) {
                trap(0x1800);
              }
              if (iVar15 == 2) {
                iVar7 = iVar7 << (Replay_ReplayInterface.speed + 7U & 0x1f);
              }
              else {
                iVar7 = iVar7 << 9;
              }
            }
          }
        }
        if ((carObj->wheelLock != 0) && ((carObj->wheelLock & iVar6 + 1U) != 0)) {
          iVar7 = 0;
        }
        iVar10 = iVar7;
        if (iVar7 < -0x1800) {
          iVar10 = -0x1800;
        }
        if (0x1800 < iVar7) {
          iVar10 = 0x1800;
        }
        iVar6 = iVar6 + 1;
        (pCVar17->N).wheelRot[0] = (pCVar17->N).wheelRot[0] + iVar10 & 0xffff;
        pCVar17 = (Car_tObj *)&(pCVar17->N).oldSlice;
      }
    }
  }
  iVar15 = (carObj->linearVel_ch).z;
  iVar6 = (carObj->control).steering;
  if (0x1e0000 < iVar15) {
    uVar18 = fixedmult(iVar15,0x888);
    iVar15 = fixeddiv(iVar6 << 0x10,uVar18);
    iVar6 = iVar15 >> 0x10;
    if (iVar15 < 0) {
      iVar6 = iVar15 + 0xffff >> 0x10;
    }
  }
  fixedxformy((int *)&mStack288,iVar6 << 5);
  if (((carObj->control).desiredBrakeLevel == '\0') || ((carObj->control).hanno != 0)) {
    uVar5 = *(ushort *)((int)&(carObj->render).light + 2) & 0xfe;
  }
  else {
    uVar5 = *(ushort *)((int)&(carObj->render).light + 2) | 1;
  }
  *(ushort *)((int)&(carObj->render).light + 2) = uVar5;
  iVar15 = 0;
  if (iVar20 < 0x1c) {
    while (iVar15 < 0x39) {
      bVar13 = (&R3DCar_ObjectInfo)[iVar21];
      switch(((int)(char)bVar13 + -2) * 0x10000 >> 0x10) {
      case 0:
      case 7:
        uVar18 = (uint)(ushort)(carObj->render).palCopyNum[1] & 1;
        goto LAB_800b05c4;
      case 1:
      case 2:
        if ((carObj->render).palCopyNum[1] == 0) {
          bVar13 = 0;
        }
        break;
      case 3:
        uVar18 = (uint)*(ushort *)((int)&(carObj->render).bodyPitch + 2) & 1;
        goto LAB_800b05c4;
      case 4:
        uVar18 = (uint)*(ushort *)((int)&(carObj->render).bodyPitch + 2) & 2;
        goto LAB_800b05c4;
      case 5:
        sVar9 = (speechSourceType)*(ushort *)&(carObj->render).light;
LAB_800b0500:
        if ((sVar9 & 2) == 0) {
          bVar13 = 0;
        }
        break;
      case 6:
        if ((*(ushort *)&(carObj->render).light & 0x20) == 0) {
          bVar13 = 0;
        }
        break;
      case 9:
        uVar18 = (uint)*(byte *)((int)&(carObj->render).damageParts + 1) & 4;
        goto LAB_800b05c4;
      case 10:
        if ((*(byte *)((int)&(carObj->render).damageParts + 1) & 4) == 0) {
          bVar13 = 0;
        }
        break;
      case 0xb:
        uVar18 = (uint)*(byte *)((int)&(carObj->render).damageParts + 1) & 1;
LAB_800b05c4:
        if (uVar18 != 0) {
switchD_800b03ec_caseD_f:
          bVar13 = 0;
        }
        break;
      case 0xc:
        if ((*(byte *)((int)&(carObj->render).damageParts + 1) & 1) == 0) {
          bVar13 = 0;
        }
        break;
      case 0xd:
joined_r0x800b0524:
        if (bVar1) {
LAB_800b05b8:
          uVar18 = (uint)*(ushort *)((int)&(carObj->render).bodyPitch + 2) & 4;
          goto LAB_800b05c4;
        }
        break;
      case 0xe:
        if (bVar1) goto LAB_800b05b8;
      case 0xf:
        goto switchD_800b03ec_caseD_f;
      case 0x10:
        if (*(short *)((int)&(carObj->render).light + 2) == 0) {
LAB_800b04ec:
          if (bVar1) {
            sVar9 = (carObj->speechInfo).speechSource;
            goto LAB_800b0500;
          }
          goto switchD_800b03ec_caseD_f;
        }
        break;
      case 0x11:
        if ((carObj->control).gear != '\0') goto LAB_800b04ec;
        break;
      case 0x12:
        if (((uint)(carObj->render).palCopy & 0x800080) != 0) goto joined_r0x800b0524;
        goto switchD_800b03ec_caseD_f;
      case 0x13:
        if (bVar1) {
          if (((uint)(carObj->render).palCopy & 0x800080) != 0) goto LAB_800b05b8;
          goto switchD_800b03ec_caseD_f;
        }
        if (((uint)(carObj->render).palCopy & 0x800080) != 0) break;
        if (R3DCar_SignalBrakeFlare[iVar20] == '\0') goto switchD_800b03ec_caseD_f;
        bVar2 = iVar15 - 6U < 6;
        if (*(short *)((int)&(carObj->render).light + 2) == 0) {
          bVar13 = 0;
        }
        goto LAB_800b05d8;
      case 0x14:
        if ((*(ushort *)&(carObj->render).light & 0x11) == 0) {
          bVar13 = 0;
        }
      }
      bVar2 = iVar15 - 6U < 6;
LAB_800b05d8:
      if (bVar2) {
        switch((uint)switchdataD_80056470[iVar15 + -6] & 0xfffffffe) {
        case 0x800b05f4:
          uVar5 = *(ushort *)((int)&(carObj->render).bodyPitch + 2) & 0x18;
          break;
        case 0x800b0600:
          if ((*(ushort *)((int)&(carObj->render).bodyPitch + 2) & 4) != 0) {
            bVar13 = R3DCar_DamageSpoiler[iVar20] & 1;
            if ((*(byte *)((int)&(carObj->render).damageParts + 1) & 4) == 0) {
              bVar13 = R3DCar_DamageSpoiler[iVar20] & 0x80;
            }
            if (bVar13 != 0) {
              bVar13 = 0xb;
            }
          }
          goto LAB_800b0664;
        case 0x800b0648:
          uVar5 = *(ushort *)((int)&(carObj->render).bodyPitch + 2) & 4;
        }
        if (uVar5 != 0) {
          bVar13 = 0;
        }
      }
LAB_800b0664:
      R3DCar_ObjectVisible[iVar15] = bVar13;
      iVar21 = iVar21 + 6;
      iVar15 = iVar15 + 1;
    }
  }
  else {
    while (iVar15 < 0x39) {
      cVar14 = (&R3DCar_ObjectInfo)[iVar21];
      if (cVar14 == '\x12') {
        uVar18 = SEXT24(*(short *)((int)&(carObj->render).light + 2));
code_r0x800b06f4:
        if (uVar18 == 0) {
LAB_800b06fc:
          cVar14 = '\0';
        }
      }
      else {
        if ('\x12' < cVar14) {
          if (cVar14 == '\x16') {
            uVar18 = (uint)*(ushort *)&(carObj->render).light & 0x11;
            goto code_r0x800b06f4;
          }
          goto LAB_800b06fc;
        }
        if (cVar14 != '\x01') {
          cVar14 = '\0';
        }
      }
      if ((iVar20 == 0x1c) && (iVar15 == 0x20)) {
        cVar14 = '\x01';
      }
      R3DCar_ObjectVisible[iVar15] = cVar14;
      iVar21 = iVar21 + 6;
      iVar15 = iVar15 + 1;
    }
  }
  iVar12 = 0;
  p_Var16 = (&R3DCar_LoadedScenePointer250)[local_34 * 0x32 + iVar20]->obj[0];
  local_2c = &(Vi->cview).mrotationInv;
  iVar15 = *(int *)(p_Var16 + 4);
  iVar21 = *(int *)(p_Var16 + 8);
  iVar6 = *(int *)(p_Var16 + 0xc);
  iVar7 = 0;
  while (iVar12 < 0x39) {
    p_Var16 = (&R3DCar_LoadedScenePointer250)[local_34 * 0x32 + iVar20]->obj[iVar12];
    if ((*(short *)(p_Var16 + 2) == 0) || (R3DCar_ObjectVisible[iVar12] == '\0')) goto LAB_800b0be4;
    if (iVar12 < 0x2f) {
      local_bc = local_38 - carObj->audio[5].panangle;
    }
    else {
      iVar10 = carObj->wheel[(int)R3DCar_Suspension[iVar12 + -0x2f]].impactCompression;
      if (iVar10 < 1) {
        local_bc = -0x1eb8;
        if (-0x1eb9 < iVar10) {
          local_bc = iVar10;
        }
      }
      else {
        local_bc = iVar10;
        if (0x1eb8 < iVar10) {
          local_bc = 0x1eb8;
        }
      }
    }
    local_c0 = *(int *)(p_Var16 + 4) - iVar15;
    local_bc = (*(int *)(p_Var16 + 8) - iVar21) - local_bc;
    local_b8 = *(int *)(p_Var16 + 0xc) - iVar6;
    if (iVar12 < 0x2f) {
      if (((0x1b < iVar20) || (iVar12 < 0x23)) || (m2 = &local_170, 0x28 < iVar12)) {
        m2 = &mStack448;
      }
    }
    else {
      m2 = &(carObj->N).orientMat;
    }
    transform((int *)(&local_f8 + 0x38),(int *)m2,(int *)(&local_f8 + 0x28));
    local_c0 = ((carObj->N).position.x + local_d0) - (Vi->cview).translation.x;
    local_bc = ((carObj->N).position.y + local_cc) - (Vi->cview).translation.y;
    local_b8 = ((carObj->N).position.z + local_c8) - (Vi->cview).translation.z;
    transform((int *)(&local_f8 + 0x38),(int *)local_2c,(int *)(R3DCar_position + iVar12));
    if (iVar20 == 0x1c) {
      if (iVar12 == 0x1f) {
        fixedxformy((int *)(matrixtdef *)&local_f8,(carObj->N).wheelRot[0]);
        Math_fasttransmult__FP10matrixtdefN20
                  ((matrixtdef *)&local_f8,&mStack448,(matrixtdef *)&local_f8);
        Math_fasttransmult__FP10matrixtdefN20
                  ((matrixtdef *)&local_f8,local_2c,R3DCar_orientMat + 0x1f);
      }
      else {
        if (iVar12 != 0x23) goto switchD_800b0a34_caseD_29;
        fixedxformx((undefined4 *)(matrixtdef *)&local_f8,(carObj->N).wheelRot[1]);
        Math_fasttransmult__FP10matrixtdefN20
                  ((matrixtdef *)&local_f8,&mStack448,(matrixtdef *)&local_f8);
        Math_fasttransmult__FP10matrixtdefN20
                  ((matrixtdef *)&local_f8,local_2c,R3DCar_orientMat + 0x23);
      }
      goto LAB_800b0be4;
    }
    switch(iVar12) {
    case 0x23:
    case 0x24:
      m2 = &mStack328;
      break;
    case 0x25:
      iVar10 = (carObj->control).steering;
      if (local_30 != 0) {
        iVar10 = -iVar10;
      }
      fixedxformz((int *)(matrixtdef *)&local_f8,iVar10 * -0x38);
      goto LAB_800b0ba4;
    case 0x26:
      iVar10 = carObj->audio[5].channel;
      uVar18 = carObj->audio[5].surface1 * 3 >> 1;
      if (local_30 != 0) {
        uVar18 = -uVar18;
      }
      fixedxformz((int *)&mStack136,uVar18);
      m1 = &mStack96;
      fixedxformx((undefined4 *)m1,iVar10 << 3);
      m2 = &mStack136;
      goto LAB_800b0b98;
    case 0x27:
    case 0x28:
      iVar10 = (carObj->control).steering;
      iVar8 = -0xc;
      if (local_30 != 0) {
        iVar10 = -iVar10;
      }
      iVar3 = -0xc;
      if (iVar12 == 0x27) {
        iVar8 = 0xc;
        iVar3 = 0xc;
      }
      fixedxformx((undefined4 *)&mStack176,iVar10 * iVar3);
      if (0 < iVar10) {
        iVar10 = -iVar10;
      }
      fixedxformy((int *)&mStack136,iVar10 * (iVar8 >> 1));
      m2 = &mStack176;
      m1 = &mStack136;
LAB_800b0b98:
      Math_fasttransmult__FP10matrixtdefN20(m2,m1,(matrixtdef *)&local_f8);
LAB_800b0ba4:
      m2 = &local_170;
      goto LAB_800b0ba8;
    default:
switchD_800b0a34_caseD_29:
      m2 = &mStack408;
      break;
    case 0x2f:
      fixedxformx((undefined4 *)(matrixtdef *)&local_f8,(carObj->N).wheelRot[0]);
      Math_fasttransmult__FP10matrixtdefN20
                ((matrixtdef *)&local_f8,&mStack288,(matrixtdef *)&local_f8);
      m2 = &(carObj->N).orientMat;
      goto LAB_800b0ba8;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
      m2 = R3DCar_orientMat + 0x2f;
      break;
    case 0x35:
      fixedxformx((undefined4 *)(matrixtdef *)&local_f8,(carObj->N).wheelRot[1]);
      m2 = &(carObj->N).orientMat;
      goto LAB_800b0ba8;
    case 0x36:
      m2 = R3DCar_orientMat + 0x35;
      break;
    case 0x37:
      fixedxformx((undefined4 *)(matrixtdef *)&local_f8,(carObj->N).wheelRot[1]);
      m2 = &(carObj->N).orientMat;
LAB_800b0ba8:
      Math_fasttransmult__FP10matrixtdefN20((matrixtdef *)&local_f8,m2,(matrixtdef *)&local_f8);
      Math_fasttransmult__FP10matrixtdefN20
                ((matrixtdef *)&local_f8,&(Vi->cview).mrotationInv,
                 (matrixtdef *)((int)R3DCar_orientMat->m + iVar7));
      goto LAB_800b0be4;
    case 0x38:
      m2 = R3DCar_orientMat + 0x37;
    }
    R3DCar_MATRIX3DT_Copy__FPiT0((int *)m2,(int *)((int)R3DCar_orientMat->m + iVar7));
LAB_800b0be4:
    iVar7 = iVar7 + 0x24;
    iVar12 = iVar12 + 1;
  }
  m2 = &(Vi->cview).mrotationInv;
  t = &(Vi->cview).translationInv;
  TrsProj_TransformProjectVertex__FP10matrixtdefP8coorddefiT1P12Draw_tVertex
            (m2,t,1,&(carObj->N).position,&R3DCar_center);
  if ((R3DCar_shadowColour.r == '\0') || ((carObj->N).simOptz != '\0')) {
    R3DCar_shadowFlag = 0;
  }
  else {
    Newton_CalcRealShadowCoordinates__FP8Car_tObji(carObj,simGlobal.gameTicks);
    TrsProj_TransformProjectVertex__FP10matrixtdefP8coorddefiT1P12Draw_tVertex
              (m2,t,4,(carObj->N).shadowCoord,R3DCar_shadowVertex);
    R3DCar_shadowFlag = 1;
  }
  if ((simVar.pauseSim == 0) && (simVar.quickPauseSim == 0)) {
    if (Replay_ReplayMode == 2) {
      (carObj->N).positionXZ =
           (carObj->N).positionXZ +
           (short)((carObj->linearVel_ch).z >> (0x12U - Replay_ReplayInterface.speed & 0x1f));
    }
    else {
      (carObj->N).positionXZ =
           (carObj->N).positionXZ + *(short *)((int)&(carObj->linearVel_ch).z + 2);
    }
  }
  iVar20 = DrawC_gShadowMax;
  iVar15 = 0;
  sVar19 = 0;
  if (0 < DrawC_gEnvMapMax) {
    pDVar11 = DrawC_gEnvMap;
    do {
      sVar19 = (short)iVar15;
      if ((carObj->N).simRoadInfo.slice < pDVar11->slice) break;
      iVar15 = iVar15 + 1;
      sVar19 = (short)iVar15;
      pDVar11 = pDVar11 + 1;
    } while (iVar15 < DrawC_gEnvMapMax);
  }
  (carObj->N).eIndexEnvMap = sVar19;
  iVar15 = 0;
  sVar19 = 0;
  if (0 < iVar20) {
    pDVar11 = DrawC_gShadow;
    do {
      sVar19 = (short)iVar15;
      if ((carObj->N).simRoadInfo.slice < pDVar11->slice) break;
      iVar15 = iVar15 + 1;
      sVar19 = (short)iVar15;
      pDVar11 = pDVar11 + 1;
    } while (iVar15 < iVar20);
  }
  (carObj->N).eIndexShadow = sVar19;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_ReadInCarTextureMenu__FP8Car_tObjPcii(struct Car_tObj *carObj /*$s4*/, char *bigfile /*$s7*/, int reload /*$s5*/, int player /*$s6*/)
 // line 2185, offset 0x800b0db0
	/* begin block 1 */
		// Start line: 2186
		// Start offset: 0x800B0DB0
		// Variables:
	// 		char filename[10]; // stack offset -120
	// 		int carType; // $s0

		/* begin block 1.1 */
			// Start line: 2219
			// Start offset: 0x800B0E34

			/* begin block 1.1.1 */
				// Start line: 2224
				// Start offset: 0x800B0E50
				// Variables:
			// 		int i; // $s0
			// 		char infilenames[3][15]; // stack offset -104
			// 		char (*shpfiles[3]); // stack offset -56
			// 		int index; // $s3
			/* end block 1.1.1 */
			// End offset: 0x800B0FA8
			// End Line: 2296

			/* begin block 1.1.2 */
				// Start line: 2311
				// Start offset: 0x800B1038
				// Variables:
			// 		char infilename[15]; // stack offset -104
			// 		char *shpfile; // $v0
			/* end block 1.1.2 */
			// End offset: 0x800B10C8
			// End Line: 2337
		/* end block 1.1 */
		// End offset: 0x800B10C8
		// End Line: 2337
	/* end block 1 */
	// End offset: 0x800B10C8
	// End Line: 2343

	/* begin block 2 */
		// Start line: 5011
	/* end block 2 */
	// End Line: 5012

	/* begin block 3 */
		// Start line: 5015
	/* end block 3 */
	// End Line: 5016

	/* begin block 4 */
		// Start line: 5015
	/* end block 4 */
	// End Line: 5016

void R3DCar_ReadInCarTextureMenu__FP8Car_tObjPcii
               (Car_tObj *carObj,char *bigfile,int reload,int player)

{
  short sVar1;
  short *psVar2;
  byte *pbVar3;
  Texture_pal8bit *palCopy;
  char *suffix;
  int carType;
  int iVar4;
  byte *shpfile;
  byte **ppbVar5;
  char acStack120 [16];
  byte abStack104 [15];
  char acStack89 [33];
  byte *local_38;
  char *local_34;
  
  carType = (int)(carObj->render).palNum;
  R3DCar_GetCarName__FPcii(acStack120,carType,carObj->carInfo->Country);
  if (reload != 0) {
    CarIO_ReleaseCarCluts__FP8Car_tObj(carObj);
  }
  if ((carObj->render).currentPitch == 0) {
    psVar2 = reservememadr(s_palCopy_8013d368,(int)&DAT_000028a0,0);
    *(short **)&(carObj->render).currentPitch = psVar2;
  }
  DrawSync(0);
  Texture_palNum = 0;
  if (carType < 0x1c) {
    if (((carObj->render).palCopyNum[1] & 1U) == 0) {
      suffix = &DAT_8013d370;
    }
    else {
      suffix = &DAT_8013d358;
    }
    carType = 1;
    R3DCar_GetFileName__FPcN20((char *)abStack104,acStack120,suffix);
    if (((carObj->render).palCopyNum[1] & 1U) != 0) {
      R3DCar_GetFileName__FPcN20(acStack89,acStack120,&DAT_8013d374);
      carType = 2;
    }
    if (*(short *)&carObj->audio[4].panangle < 8) {
      suffix = &DAT_8013d37c;
    }
    else {
      suffix = &DAT_8013d378;
    }
    R3DCar_GetFileName__FPcN20((char *)(abStack104 + carType * 0xf),acStack120,suffix);
    iVar4 = 0;
    if (carType != -1) {
      ppbVar5 = &local_38;
      shpfile = abStack104;
      do {
        pbVar3 = locatebig((byte *)bigfile,shpfile);
        *ppbVar5 = pbVar3;
        ppbVar5 = ppbVar5 + 1;
        iVar4 = iVar4 + 1;
        shpfile = shpfile + 0xf;
      } while (iVar4 < carType + 1);
    }
    (carObj->render).palCopyNum[6] = 0;
    (carObj->render).palCopyNum[5] = 0;
    if (reload != 0) {
      reload = 0x11;
    }
    carType = 1;
    CarIO_ReadInCarTextureData__FPcP8Car_tObjii((char *)local_38,carObj,reload,player);
    if (((carObj->render).palCopyNum[1] & 1U) != 0) {
      carType = 2;
      CarIO_ReadInCarTextureData__FPcP8Car_tObjii(local_34,carObj,0x19,player);
    }
    if (reload == 0) {
      reload = 0x91;
    }
    CarIO_ReadInCarTextureData__FPcP8Car_tObjii((char *)(&local_38)[carType],carObj,reload,player);
    *(undefined2 *)&(carObj->render).currentRoll = (undefined2)Texture_palNum;
    DrawSync(0);
    Texture_CarColor =
         ((uint)*(ushort *)&carObj->audio[4].panangle & 7) +
         ((uint)*(byte *)((int)&(carObj->render).damageParts + 1) & 2) * 4;
    Texture_ProcessPaletteCopy__FP15Texture_pal8bitii
              ((Texture_pal8bit *)(carObj->render).currentPitch,0,1);
    carType = 1;
    palCopy = (Texture_pal8bit *)(carObj->render).currentPitch;
    sVar1 = *(short *)&(carObj->render).currentRoll;
    Texture_CarColor =
         ((uint)*(ushort *)&carObj->audio[4].panangle & 7) +
         ((uint)*(byte *)((int)&(carObj->render).damageParts + 1) & 1) * 8;
  }
  else {
    strcpy((char *)abStack104,acStack120);
    strcat((char *)abStack104,&DAT_8013d340);
    shpfile = locatebig((byte *)bigfile,abStack104);
    (carObj->render).palCopyNum[6] = 0;
    (carObj->render).palCopyNum[5] = 0;
    if (reload == 0) {
      carType = 0x80;
    }
    else {
      carType = 0x11;
    }
    CarIO_ReadInCarTextureData__FPcP8Car_tObjii((char *)shpfile,carObj,carType,0);
    *(undefined2 *)&(carObj->render).currentRoll = (undefined2)Texture_palNum;
    DrawSync(0);
    carType = 0;
    palCopy = (Texture_pal8bit *)(carObj->render).currentPitch;
    sVar1 = *(short *)&(carObj->render).currentRoll;
    Texture_CarColor = (uint)*(ushort *)&carObj->audio[4].panangle & 7;
  }
  Texture_ProcessPaletteCopy__FP15Texture_pal8bitii(palCopy,carType,(int)sVar1);
  purgememadr((int)bigfile);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_InsertCarFacetMenu__FP8Car_tObjP13DRender_tView(struct Car_tObj *carObj /*$s1*/, struct DRender_tView *Vi /*$s7*/)
 // line 2351, offset 0x800b10fc
	/* begin block 1 */
		// Start line: 2352
		// Start offset: 0x800B10FC
		// Variables:
	// 		int i; // $s0
	// 		struct Transformer_zObj *obj; // $a1
	// 		struct coorddef parent; // stack offset -344
	// 		struct matrixtdef bodyMat; // stack offset -328
	// 		struct matrixtdef orientMat; // stack offset -288
	// 		struct matrixtdef insideMat; // stack offset -248
	// 		struct matrixtdef orientIMat; // stack offset -208
	// 		int rideHeight; // stack offset -48
	// 		int detailIndex; // $s2
	// 		int carType; // $s3
	// 		int changeCar; // $a3
	// 		int countryFlag; // $s5
	// 		int rightHandDrive; // stack offset -44
	// 		int cop_flag; // $s4

		/* begin block 1.1 */
			// Start line: 2387
			// Start offset: 0x800B11D0
		/* end block 1.1 */
		// End offset: 0x800B11D0
		// End Line: 2389

		/* begin block 1.2 */
			// Start line: 2396
			// Start offset: 0x800B1214

			/* begin block 1.2.1 */
				// Start line: 2568
				// Start offset: 0x800B1288

				/* begin block 1.2.1.1 */
					// Start line: 2571
					// Start offset: 0x800B12C0

					/* begin block 1.2.1.1.1 */
						// Start line: 2572
						// Start offset: 0x800B1300
						// Variables:
					// 		char filename[10]; // stack offset -168
					// 		char bigname[100]; // stack offset -152

						/* begin block 1.2.1.1.1.1 */
							// Start line: 2595
							// Start offset: 0x800B1324

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 2598
								// Start offset: 0x800B1354
								// Variables:
							// 		int index; // $v1
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x800B1390
							// End Line: 2600
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800B1390
						// End Line: 2600
					/* end block 1.2.1.1.1 */
					// End offset: 0x800B140C
					// End Line: 2620
				/* end block 1.2.1.1 */
				// End offset: 0x800B140C
				// End Line: 2620

				/* begin block 1.2.1.2 */
					// Start line: 2623
					// Start offset: 0x800B140C

					/* begin block 1.2.1.2.1 */
						// Start line: 2624
						// Start offset: 0x800B141C
						// Variables:
					// 		int status; // $s0

						/* begin block 1.2.1.2.1.1 */
							// Start line: 2625
							// Start offset: 0x800B141C

							/* begin block 1.2.1.2.1.1.1 */
								// Start line: 2630
								// Start offset: 0x800B143C

								/* begin block 1.2.1.2.1.1.1.1 */
									// Start line: 2631
									// Start offset: 0x800B143C

									/* begin block 1.2.1.2.1.1.1.1.1 */
										// Start line: 2632
										// Start offset: 0x800B1464
										// Variables:
									// 		char *bigFile; // $v0
									/* end block 1.2.1.2.1.1.1.1.1 */
									// End offset: 0x800B1478
									// End Line: 2637
								/* end block 1.2.1.2.1.1.1.1 */
								// End offset: 0x800B14C0
								// End Line: 2658
							/* end block 1.2.1.2.1.1.1 */
							// End offset: 0x800B14C0
							// End Line: 2658
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x800B14E4
						// End Line: 2666
					/* end block 1.2.1.2.1 */
					// End offset: 0x800B14E4
					// End Line: 2666
				/* end block 1.2.1.2 */
				// End offset: 0x800B14E4
				// End Line: 2666

				/* begin block 1.2.1.3 */
					// Start line: 2671
					// Start offset: 0x800B14E4

					/* begin block 1.2.1.3.1 */
						// Start line: 2672
						// Start offset: 0x800B14F4
						// Variables:
					// 		char filename[10]; // stack offset -168
					// 		char workFile[10]; // stack offset -152
					// 		int reload; // $fp
					// 		int currentCarType; // $s0

						/* begin block 1.2.1.3.1.1 */
							// Start line: 2715
							// Start offset: 0x800B1598

							/* begin block 1.2.1.3.1.1.1 */
								// Start line: 2723
								// Start offset: 0x800B15E0
								// Variables:
							// 		int index; // $v1
							/* end block 1.2.1.3.1.1.1 */
							// End offset: 0x800B161C
							// End Line: 2725
						/* end block 1.2.1.3.1.1 */
						// End offset: 0x800B161C
						// End Line: 2725
					/* end block 1.2.1.3.1 */
					// End offset: 0x800B168C
					// End Line: 2745
				/* end block 1.2.1.3 */
				// End offset: 0x800B16F0
				// End Line: 2756
			/* end block 1.2.1 */
			// End offset: 0x800B16F0
			// End Line: 2756
		/* end block 1.2 */
		// End offset: 0x800B16F0
		// End Line: 2756

		/* begin block 1.3 */
			// Start line: 2769
			// Start offset: 0x800B1720

			/* begin block 1.3.1 */
				// Start line: 2770
				// Start offset: 0x800B1730

				/* begin block 1.3.1.1 */
					// Start line: 2812
					// Start offset: 0x800B1888
					// Variables:
				// 		struct coorddef car; // stack offset -168
				// 		struct coorddef pos; // stack offset -152
				/* end block 1.3.1.1 */
				// End offset: 0x800B19D4
				// End Line: 2823

				/* begin block 1.3.1.2 */
					// Start line: 2847
					// Start offset: 0x800B1A6C

					/* begin block 1.3.1.2.1 */
						// Start line: 2852
						// Start offset: 0x800B1A9C

						/* begin block 1.3.1.2.1.1 */
							// Start line: 2853
							// Start offset: 0x800B1A9C

							/* begin block 1.3.1.2.1.1.1 */
								// Start line: 2853
								// Start offset: 0x800B1AB8
								// Variables:
							// 		short code; // $a1
							/* end block 1.3.1.2.1.1.1 */
							// End offset: 0x800B1C0C
							// End Line: 2977
						/* end block 1.3.1.2.1.1 */
						// End offset: 0x800B1C20
						// End Line: 2978
					/* end block 1.3.1.2.1 */
					// End offset: 0x800B1C20
					// End Line: 2978

					/* begin block 1.3.1.2.2 */
						// Start line: 2980
						// Start offset: 0x800B1C20

						/* begin block 1.3.1.2.2.1 */
							// Start line: 2981
							// Start offset: 0x800B1C20

							/* begin block 1.3.1.2.2.1.1 */
								// Start line: 2981
								// Start offset: 0x800B1C48
								// Variables:
							// 		short code; // $a1
							/* end block 1.3.1.2.2.1.1 */
							// End offset: 0x800B1CA8
							// End Line: 2999
						/* end block 1.3.1.2.2.1 */
						// End offset: 0x800B1CB8
						// End Line: 3000
					/* end block 1.3.1.2.2 */
					// End offset: 0x800B1CB8
					// End Line: 3000
				/* end block 1.3.1.2 */
				// End offset: 0x800B1CB8
				// End Line: 3000

				/* begin block 1.3.1.3 */
					// Start line: 3003
					// Start offset: 0x800B1CB8

					/* begin block 1.3.1.3.1 */
						// Start line: 3009
						// Start offset: 0x800B1D14

						/* begin block 1.3.1.3.1.1 */
							// Start line: 3011
							// Start offset: 0x800B1D20

							/* begin block 1.3.1.3.1.1.1 */
								// Start line: 3014
								// Start offset: 0x800B1D74
								// Variables:
							// 		struct coorddef translation; // stack offset -168
							// 		struct coorddef tmp; // stack offset -152
							// 		int suspensionOffset; // $a0
							/* end block 1.3.1.3.1.1.1 */
							// End offset: 0x800B1E9C
							// End Line: 3043
						/* end block 1.3.1.3.1.1 */
						// End offset: 0x800B1E9C
						// End Line: 3043
					/* end block 1.3.1.3.1 */
					// End offset: 0x800B1E9C
					// End Line: 3043
				/* end block 1.3.1.3 */
				// End offset: 0x800B1EAC
				// End Line: 3045

				/* begin block 1.3.1.4 */
					// Start line: 3048
					// Start offset: 0x800B1EAC

					/* begin block 1.3.1.4.1 */
						// Start line: 3054
						// Start offset: 0x800B1EE0
						// Variables:
					// 		struct coorddef lengthVector; // stack offset -168
					// 		struct coorddef widthVector; // stack offset -152
					// 		struct coorddef frontWidthVector; // stack offset -136
					// 		struct coorddef temp1; // stack offset -120
					// 		struct coorddef temp2; // stack offset -104
					// 		struct coorddef dimension; // stack offset -88

						/* begin block 1.3.1.4.1.1 */
							// Start line: 3059
							// Start offset: 0x800B1EE0

							/* begin block 1.3.1.4.1.1.1 */
								// Start line: 3065
								// Start offset: 0x800B1F84
								// Variables:
							// 		int front; // $s0
							/* end block 1.3.1.4.1.1.1 */
							// End offset: 0x800B1F84
							// End Line: 3066
						/* end block 1.3.1.4.1.1 */
						// End offset: 0x800B1FE0
						// End Line: 3070
					/* end block 1.3.1.4.1 */
					// End offset: 0x800B2144
					// End Line: 3085
				/* end block 1.3.1.4 */
				// End offset: 0x800B2144
				// End Line: 3085
			/* end block 1.3.1 */
			// End offset: 0x800B2144
			// End Line: 3085
		/* end block 1.3 */
		// End offset: 0x800B2144
		// End Line: 3085
	/* end block 1 */
	// End offset: 0x800B2144
	// End Line: 3085

	/* begin block 2 */
		// Start line: 5353
	/* end block 2 */
	// End Line: 5354

	/* begin block 3 */
		// Start line: 5362
	/* end block 3 */
	// End Line: 5363

	/* begin block 4 */
		// Start line: 5362
	/* end block 4 */
	// End Line: 5363

/* WARNING: Could not reconcile some variable overlaps */

void R3DCar_InsertCarFacetMenu__FP8Car_tObjP13DRender_tView(Car_tObj *carObj,DRender_tView *Vi)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  ushort uVar7;
  int reload;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  Transformer_zScene *pTVar11;
  int iVar12;
  int iVar13;
  GameSetup_tCarData *pGVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  matrixtdef *m2;
  _func_39 *p_Var18;
  uint uVar19;
  Transformer_zScene **ppTVar20;
  int carType;
  uint uVar21;
  matrixtdef mStack328;
  matrixtdef mStack288;
  matrixtdef local_f8;
  matrixtdef mStack208;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_88;
  uint local_84;
  uint local_80;
  int local_78;
  undefined4 local_74;
  int local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_30;
  uint local_2c;
  
  local_2c = 0;
  local_30 = *(int *)((carObj->render).palCopyNum + 9);
  carType = (int)(carObj->render).palNum;
  uVar21 = (uint)(*(byte *)((int)&carObj->audio[4].panangle + 2) >> 7);
  bVar5 = false;
  if ((carType < 0x1c) && (local_2c = SEXT14(R3DCar_ForceDriveSide[carType]), (int)local_2c < 0)) {
    local_2c = AITune_trackInfo[GameSetup_gData.track].driveSide + 1 >> 1 ^ 1;
  }
  carType = carObj->carInfo->carType;
  R3DCar_rightHandDrive = local_2c;
  bVar4 = 5 < carType - 0x16U;
  if (bVar4) {
    carObj->carInfo->Country = 0;
  }
  uVar19 = R3DCar_InMenu & 0x80;
  *(ulong **)&carObj->audio[6].force =
       (&R3DCar_subOtStart22)[gFlip * 2 + (uint)(uVar19 != 0)] + ((carObj->N).objID & 0xfU) * 0x200;
  if (uVar19 != 0) goto LAB_800b16f0;
  carObj->audio[6].panangle = 0x200;
  *(undefined4 *)&carObj->render = 0x100;
  (carObj->render).textureStartIndex = 0;
  *(undefined2 *)&(carObj->render).bodyPitch = 0;
  reload = R3DCar_aSyncLoading;
  DrawC_gScreenMat.m[0][0] = 0x1000;
  DrawC_gScreenMat.m[1][0] = 0;
  DrawC_gScreenMat.m[2][0] = 0;
  DrawC_gScreenMat.m[0][1] = 0;
  DrawC_gScreenMat.m[1][1] = -0x1000;
  DrawC_gScreenMat.m[2][1] = 0;
  DrawC_gScreenMat.m[0][2] = 0;
  DrawC_gScreenMat.m[1][2] = 0;
  DrawC_gScreenMat.m[2][2] = 0x1000;
  DrawC_gScreenMat.t[0] = 0;
  DrawC_gScreenMat.t[1] = 0;
  DrawC_gScreenMat.t[2] = 0;
  bVar1 = -1 < R3DCar_aSyncLoading;
  (carObj->render).palCopyNum[2] = 0;
  if ((bVar1) && (reload != Vi->player)) goto LAB_800b16f0;
  if (*(int *)((carObj->render).palCopyNum + 0xd) == 0) {
    if ((uint)*(byte *)((int)&carObj->audio[4].panangle + 3) != carObj->carInfo->Country) {
      (carObj->render).palCopyNum[0] = (carObj->render).palCopyNum[0] | 0x80;
    }
    if (*(int *)((carObj->render).palCopyNum + 0xd) != 0) goto LAB_800b141c;
    if ((int)(carObj->render).palCopyNum[0] != carType) {
      reload = AudioMus_Buffered__Fv();
      iVar8 = AudioMus_Threshold__Fv();
      if (iVar8 <= reload) {
        if (carType < 0x1c) {
          uVar7 = (carObj->render).palCopyNum[1] | 0x10;
        }
        else {
          uVar7 = (carObj->render).palCopyNum[1] & 0xef;
        }
        (carObj->render).palCopyNum[1] = uVar7;
        sprintf((char *)&local_a8,&DAT_8013d350,GameSetup_gCarNames + carType * 5);
        if (!bVar4) {
          local_a8._0_3_ =
               CONCAT12(R3DCar_CopCountry
                        [(uint)(byte)R3DCar_CopIndex
                                     [carObj->carInfo->Country + (carType + -0x16) * 5]],
                        (undefined2)local_a8);
          local_a8 = local_a8 & 0xff000000 | (uint)(uint3)local_a8;
        }
        strcpy((char *)&local_98,PTR_801164c8);
        strcat((char *)&local_98,(char *)&local_a8);
        if (((carObj->render).palCopyNum[1] & 0x10U) != 0) {
          strcat((char *)&local_98,&DAT_8013d358);
        }
        strcat((char *)&local_98,&DAT_8013d360);
        uVar9 = asyncloadfile((char *)&local_98,0x10);
        *(undefined4 *)((carObj->render).palCopyNum + 0xd) = uVar9;
        R3DCar_aSyncLoading = Vi->player;
        pGVar14 = carObj->carInfo;
        (carObj->render).palCopyNum[0] = (short)carType;
        *(undefined *)((int)&carObj->audio[4].panangle + 3) = *(undefined *)&pGVar14->Country;
      }
    }
    if (*(int *)((carObj->render).palCopyNum + 0xd) != 0) goto LAB_800b141c;
  }
  else {
LAB_800b141c:
    uVar19 = getasyncreadstatus(*(uint *)((carObj->render).palCopyNum + 0xd));
    if (((int)uVar19 < 1) && (uVar19 != 0xffffffff)) {
      if (uVar19 == 0xfffffffe) {
LAB_800b14d4:
        uVar7 = (carObj->render).palCopyNum[0];
        *(undefined4 *)((carObj->render).palCopyNum + 0xd) = 0;
LAB_800b14e0:
        (carObj->render).palCopyNum[0] = uVar7 | 0x80;
      }
    }
    else {
      if (((int)(carObj->render).palCopyNum[0] == carType) &&
         ((uint)*(byte *)((int)&carObj->audio[4].panangle + 3) == carObj->carInfo->Country)) {
        pcVar10 = (char *)getasyncreadadr(*(uint *)((carObj->render).palCopyNum + 0xd));
        if (pcVar10 == (char *)0x0) {
          bVar5 = false;
          R3DCar_BigFile = pcVar10;
          goto LAB_800b16f0;
        }
        R3DCar_BigFile = pcVar10;
        *(undefined4 *)((carObj->render).palCopyNum + 0xd) = 0;
        if (uVar19 != 0xffffffff) {
          R3DCar_aSyncLoading = -1;
          goto LAB_800b14e4;
        }
        purgememadr((int)pcVar10);
        uVar7 = (carObj->render).palCopyNum[0];
        R3DCar_BigFile = (char *)0x0;
        goto LAB_800b14e0;
      }
      uVar19 = getasyncreadadr(*(uint *)((carObj->render).palCopyNum + 0xd));
      if (uVar19 != 0) {
        purgememadr(uVar19);
        goto LAB_800b14d4;
      }
    }
  }
LAB_800b14e4:
  bVar5 = false;
  if (R3DCar_BigFile != (char *)0x0) {
    carType = (int)(carObj->render).palNum;
    reload = 0;
    if (-1 < carType) {
      cVar6 = (&R3DCar_LoadedSceneCounter)[carType + uVar21 * 0x32] + -1;
      (&R3DCar_LoadedSceneCounter)[carType + uVar21 * 0x32] = cVar6;
      reload = 1;
      if (cVar6 == '\0') {
        purgememadr((int)(&R3DCar_LoadedScenePointer250)[uVar21 * 0x32 + carType]);
        (&R3DCar_LoadedScenePointer250)[uVar21 * 0x32 + carType] = (Transformer_zScene *)0x0;
      }
    }
    sVar3 = (carObj->render).palCopyNum[0];
    bVar2 = *(byte *)((int)&carObj->audio[4].panangle + 3);
    (carObj->render).palNum = sVar3;
    *(byte *)((int)&carObj->audio[4].panangle + 2) = bVar2;
    carType = (int)sVar3;
    if (Vi->player != 0) {
      *(byte *)((int)&carObj->audio[4].panangle + 2) = bVar2 | 0x80;
    }
    uVar21 = (uint)(*(byte *)((int)&carObj->audio[4].panangle + 2) >> 7);
    (carObj->render).palCopyNum[1] = (carObj->render).palCopyNum[1] >> 4;
    sprintf((char *)&local_a8,&DAT_8013d350,GameSetup_gCarNames + carType * 5);
    if (!bVar4) {
      local_a8._0_3_ =
           CONCAT12(R3DCar_CopCountry
                    [(uint)(byte)R3DCar_CopIndex
                                 [((uint)*(byte *)((int)&carObj->audio[4].panangle + 2) & 0x7f) +
                                  (carType + -0x16) * 5]],(undefined2)local_a8);
      local_a8 = local_a8 & 0xff000000 | (uint)(uint3)local_a8;
    }
    strcpy((char *)&local_98,(char *)&local_a8);
    if (((carObj->render).palCopyNum[1] & 1U) != 0) {
      strcat((char *)&local_98,&DAT_8013d358);
    }
    ppTVar20 = &R3DCar_LoadedScenePointer250 + uVar21 * 0x32 + carType;
    if (*ppTVar20 != (Transformer_zScene *)0x0) {
      purgememadr((int)*ppTVar20);
      *ppTVar20 = (Transformer_zScene *)0x0;
    }
    pTVar11 = R3DCar_ReadInCarData__FPcP8Car_tObj((char *)&local_98,carObj);
    *ppTVar20 = pTVar11;
    (&R3DCar_LoadedSceneCounter)[carType + uVar21 * 0x32] =
         (&R3DCar_LoadedSceneCounter)[carType + uVar21 * 0x32] + '\x01';
    R3DCar_CalcCarDimensions__FP8Car_tObjP18Transformer_zScenei(carObj,*ppTVar20,carType);
    R3DCar_ReadInCarTextureMenu__FP8Car_tObjPcii(carObj,R3DCar_BigFile,reload,Vi->player);
    R3DCar_BigFile = (char *)0x0;
    bVar5 = true;
  }
LAB_800b16f0:
  carType = (int)(carObj->render).palNum;
  uVar21 = (uint)(*(byte *)((int)&carObj->audio[4].panangle + 2) >> 7);
  bVar4 = 5 < carType - 0x16U;
  if (((R3DCar_InMenu & 0x80U) == 0) && (carType < 0)) {
    (carObj->render).palCopyNum[2] = -1;
  }
  if (-1 < (carObj->render).palCopyNum[2]) {
    if ((R3DCar_InMenu & 0x80U) == 0) {
      if (bVar4) {
        if (bVar5) {
          *(undefined2 *)((int)&(carObj->render).light + 2) = 0;
        }
      }
      else {
        if ((*(ushort *)&(carObj->render).palCopy & 0x80) == 0) {
          *(undefined2 *)&(carObj->render).palCopy = 0x80;
          *(undefined2 *)((int)&(carObj->render).palCopy + 2) = 0x88;
        }
        if (R3DCar_Clock != 0) {
          uVar7 = *(ushort *)&(carObj->render).palCopy;
          if ((uVar7 & 0x80) != 0) {
            *(ushort *)&(carObj->render).palCopy = uVar7 + 1 & 0x8f;
          }
          uVar7 = *(ushort *)((int)&(carObj->render).palCopy + 2);
          if ((uVar7 & 0x80) != 0) {
            *(ushort *)((int)&(carObj->render).palCopy + 2) = uVar7 + 1 & 0x8f;
          }
        }
        if (bVar5) {
          *(undefined2 *)&(carObj->render).light = 0x33;
          *(undefined2 *)((int)&(carObj->render).light + 2) = 2;
        }
      }
    }
    if (carType < 0x1c) {
      if ((*(byte *)((int)&(carObj->render).damageParts + 1) & 2) != 0) {
        local_30 = *(int *)((carObj->render).palCopyNum + 0xb);
      }
    }
    else {
      local_30 = 0;
    }
    if (((carObj->render).palCopyNum[2] == 0) && (0x1b < carType)) {
      (carObj->render).palCopyNum[2] = 1;
    }
    reload = (int)(carObj->render).palCopyNum[2];
    if ((reload == 2) && (carType == 0x1c)) {
      (carObj->render).palCopyNum[2] = 1;
      reload = (int)(carObj->render).palCopyNum[2];
    }
    reload = reload + 2;
    if ((R3DCar_InMenu & 0x80U) == 0) {
      (carObj->N).position.y = (carObj->N).position.y + (carObj->N).dimension.y;
    }
    else {
      (carObj->N).position.y = (carObj->N).position.y + (carObj->N).dimension.y * -2;
    }
    local_a8 = (carObj->N).position.x - (Vi->cview).translation.x;
    local_a4 = (carObj->N).position.y - (Vi->cview).translation.y;
    local_a0 = (carObj->N).position.z - (Vi->cview).translation.z;
    uVar19 = local_a8;
    if ((int)local_a8 < 0) {
      uVar19 = local_a8 + 0xff;
    }
    iVar8 = (carObj->N).orientMat.m[0];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar16 = local_a4;
    if ((int)local_a4 < 0) {
      iVar16 = local_a4 + 0xff;
    }
    iVar12 = (carObj->N).orientMat.m[1];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar15 = local_a0;
    if ((int)local_a0 < 0) {
      iVar15 = local_a0 + 0xff;
    }
    iVar13 = (carObj->N).orientMat.m[2];
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    local_98 = ((int)uVar19 >> 8) * (iVar8 >> 8) + (iVar16 >> 8) * (iVar12 >> 8) +
               (iVar15 >> 8) * (iVar13 >> 8);
    iVar8 = (carObj->N).orientMat.m[6];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar12 = (carObj->N).orientMat.m[7];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar15 = local_a0;
    if ((int)local_a0 < 0) {
      iVar15 = local_a0 + 0xff;
    }
    iVar13 = (carObj->N).orientMat.m[8];
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    local_90 = ((int)uVar19 >> 8) * (iVar8 >> 8) + (iVar16 >> 8) * (iVar12 >> 8) +
               (iVar15 >> 8) * (iVar13 >> 8);
    iVar8 = fixedatan(local_98,local_90);
    m2 = &(carObj->N).orientMat;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xf;
    }
    R3DCar_yawCam = 0x1000 - (short)(iVar8 >> 4);
    R3DCar_MATRIX3DT_Copy__FPiT0((int *)m2,(int *)&mStack328);
    R3DCar_MATRIX3DT_Copy__FPiT0((int *)m2,(int *)&local_f8);
    if ((R3DCar_InMenu & 0x80U) == 0) {
      if (local_2c != 0) {
        local_f8.m[0] = -local_f8.m[0];
        local_f8.m[2] = -local_f8.m[2];
        local_f8.m[1] = -local_f8.m[1];
      }
    }
    else {
      mStack328.m[3] = -mStack328.m[3];
      mStack328.m[5] = -mStack328.m[5];
      mStack328.m[4] = -mStack328.m[4];
    }
    m2 = &(Vi->cview).mrotationInv;
    Math_fasttransmult__FP10matrixtdefN20(&mStack328,m2,&mStack288);
    Math_fasttransmult__FP10matrixtdefN20(&local_f8,m2,&mStack208);
    iVar8 = 0;
    if (carType < 0x1c) {
      while (iVar8 < 0x39) {
        cVar6 = (&R3DCar_ObjectInfo)[reload];
        switch(((int)cVar6 + -2) * 0x10000 >> 0x10) {
        case 0:
          if (((carObj->render).palCopyNum[1] & 1U) != 0) goto switchD_800b1af8_caseD_2;
        case 1:
          if ((R3DCar_InMenu & 0x80U) != 0) {
            cVar6 = '\0';
          }
          break;
        case 2:
        case 8:
switchD_800b1af8_caseD_2:
          cVar6 = '\0';
          break;
        case 5:
          if ((*(ushort *)&(carObj->render).light & 2) == 0) {
            cVar6 = '\0';
          }
          break;
        case 6:
          if ((*(ushort *)&(carObj->render).light & 0x20) == 0) {
            cVar6 = '\0';
          }
          break;
        case 7:
          uVar19 = (uint)(ushort)(carObj->render).palCopyNum[1];
          goto LAB_800b1b3c;
        case 9:
          if ((*(byte *)((int)&(carObj->render).damageParts + 1) & 4) != 0) {
            cVar6 = '\0';
          }
          break;
        case 10:
          if ((*(byte *)((int)&(carObj->render).damageParts + 1) & 4) == 0) {
            cVar6 = '\0';
          }
          break;
        case 0xb:
          uVar19 = (uint)*(byte *)((int)&(carObj->render).damageParts + 1);
LAB_800b1b3c:
          if ((uVar19 & 1) != 0) {
            cVar6 = '\0';
          }
          break;
        case 0xc:
          if ((*(byte *)((int)&(carObj->render).damageParts + 1) & 1) == 0) {
            cVar6 = '\0';
          }
          break;
        case 0xe:
        case 0x11:
          if (bVar4) goto switchD_800b1af8_caseD_2;
          break;
        case 0x14:
          if ((*(ushort *)&(carObj->render).light & 0x11) == 0) {
            cVar6 = '\0';
          }
        }
        R3DCar_ObjectVisible[iVar8] = cVar6;
        reload = reload + 6;
        iVar8 = iVar8 + 1;
      }
    }
    else {
      while (iVar8 < 0x39) {
        cVar6 = (&R3DCar_ObjectInfo)[reload];
        if (cVar6 != '\x12') {
          if (cVar6 < '\x13') {
            if (cVar6 != '\x01') {
              cVar6 = '\0';
            }
          }
          else {
            if (cVar6 != '\x16') {
              cVar6 = '\0';
            }
          }
        }
        if ((carType == 0x1c) && (iVar8 == 0x20)) {
          cVar6 = '\x01';
        }
        R3DCar_ObjectVisible[iVar8] = cVar6;
        reload = reload + 6;
        iVar8 = iVar8 + 1;
      }
    }
    iVar12 = 0;
    p_Var18 = (&R3DCar_LoadedScenePointer250)[uVar21 * 0x32 + carType]->obj[0];
    reload = *(int *)(p_Var18 + 4);
    iVar8 = *(int *)(p_Var18 + 8);
    iVar15 = 0;
    iVar16 = *(int *)(p_Var18 + 0xc);
    iVar13 = 0;
    while (iVar12 < 0x39) {
      p_Var18 = (&R3DCar_LoadedScenePointer250)[uVar21 * 0x32 + carType]->obj[iVar12];
      if ((*(short *)(p_Var18 + 2) != 0) && (R3DCar_ObjectVisible[iVar12] != '\0')) {
        if ((iVar12 == 0xf) || (iVar17 = local_30, 0x2e < iVar12)) {
          iVar17 = 0;
        }
        local_98 = *(int *)(p_Var18 + 4) - reload;
        local_94 = (*(int *)(p_Var18 + 8) - iVar8) - iVar17;
        local_90 = *(int *)(p_Var18 + 0xc) - iVar16;
        if (((0x1b < carType) || (iVar12 < 0x23)) || (m2 = &local_f8, 0x28 < iVar12)) {
          m2 = &mStack328;
        }
        transform((int *)&local_98,(int *)m2,(int *)&local_a8);
        local_98 = ((carObj->N).position.x + local_a8) - (Vi->cview).translation.x;
        local_94 = ((carObj->N).position.y + local_a4) - (Vi->cview).translation.y;
        local_90 = ((carObj->N).position.z + local_a0) - (Vi->cview).translation.z;
        transform((int *)&local_98,(int *)&(Vi->cview).mrotationInv,
                  (int *)((int)&R3DCar_position->x + iVar13));
        if (((0x1b < carType) || (iVar12 < 0x23)) || (m2 = &mStack208, 0x28 < iVar12)) {
          m2 = &mStack288;
        }
        R3DCar_MATRIX3DT_Copy__FPiT0((int *)m2,(int *)((int)R3DCar_orientMat->m + iVar15));
      }
      iVar15 = iVar15 + 0x24;
      iVar13 = iVar13 + 0xc;
      iVar12 = iVar12 + 1;
    }
    TrsProj_TransformProjectVertex__FP10matrixtdefP8coorddefiT1P12Draw_tVertex
              (&(Vi->cview).mrotationInv,&(Vi->cview).translationInv,1,&(carObj->N).position,
               &R3DCar_center);
    if ((R3DCar_InMenu & 0x80U) == 0) {
      local_58 = (carObj->N).dimension.x;
      local_54 = (carObj->N).dimension.y;
      local_50 = (carObj->N).dimension.z;
      local_a8 = fixedmult(local_50,(carObj->N).orientMat.m[6]);
      local_a4 = fixedmult(local_50,(carObj->N).orientMat.m[7]);
      local_a0 = fixedmult(local_50,(carObj->N).orientMat.m[8]);
      local_98 = fixedmult(local_58,(carObj->N).orientMat.m[0]);
      local_94 = fixedmult(local_58,(carObj->N).orientMat.m[1]);
      local_90 = fixedmult(local_58,(carObj->N).orientMat.m[2]);
      if ((carObj->render).palNum == 0x14) {
        carType = local_58 * 0xc0 >> 8;
        local_88 = fixedmult(carType,(carObj->N).orientMat.m[0]);
        local_84 = fixedmult(carType,(carObj->N).orientMat.m[1]);
        local_80 = fixedmult(carType,(carObj->N).orientMat.m[2]);
      }
      else {
        local_88 = local_98;
        local_84 = local_94;
        local_80 = local_90;
      }
      local_78 = (carObj->N).position.x;
      local_70 = (carObj->N).position.z;
      local_74 = 0;
      (carObj->N).shadowCoord[0].x = (local_78 + local_a8) - local_88;
      (carObj->N).shadowCoord[0].y = local_a4 - local_84;
      (carObj->N).shadowCoord[0].z = (local_70 + local_a0) - local_80;
      (carObj->N).shadowCoord[1].x = local_78 + local_a8 + local_88;
      (carObj->N).shadowCoord[1].y = local_a4 + local_84;
      (carObj->N).shadowCoord[1].z = local_70 + local_a0 + local_80;
      local_68 = local_78 - local_a8;
      local_64 = -local_a4;
      local_60 = local_70 - local_a0;
      (carObj->N).shadowCoord[2].x = local_68 - local_98;
      (carObj->N).shadowCoord[2].y = local_64 - local_94;
      (carObj->N).shadowCoord[2].z = local_60 - local_90;
      (carObj->N).shadowCoord[3].x = local_68 + local_98;
      (carObj->N).shadowCoord[3].y = local_64 + local_94;
      (carObj->N).shadowCoord[3].z = local_60 + local_90;
      TrsProj_TransformProjectVertex__FP10matrixtdefP8coorddefiT1P12Draw_tVertex
                (&(Vi->cview).mrotationInv,&(Vi->cview).translationInv,4,(carObj->N).shadowCoord,
                 R3DCar_shadowVertex);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_InsertCarFacetII__FP8Car_tObj(struct Car_tObj *carObj /*$s3*/)
 // line 3091, offset 0x800b2174
	/* begin block 1 */
		// Start line: 3092
		// Start offset: 0x800B2174
		// Variables:
	// 		int i; // $s0
	// 		int light; // $v0
	// 		int lightAvg; // $s6
	// 		int lightR; // $a2
	// 		int lightG; // $a1
	// 		int lightB; // $v1
	// 		int worldZ; // stack offset -64
	// 		int carType; // $s1
	// 		int countryFlag; // $s7
	// 		int rightHandDrive; // stack offset -60
	// 		struct Transformer_zOverlay *overlay; // stack offset -56
	// 		struct Draw_CarCache *sd; // $s2
	// 		int inAir; // $v0
	// 		int reflect; // stack offset -52

		/* begin block 1.1 */
			// Start line: 3154
			// Start offset: 0x800B233C

			/* begin block 1.1.1 */
				// Start line: 3154
				// Start offset: 0x800B2354
				// Variables:
			// 		struct Transformer_zObj *obj; // $a2
			// 		int visible; // $t1

				/* begin block 1.1.1.1 */
					// Start line: 3156
					// Start offset: 0x800B2360

					/* begin block 1.1.1.1.1 */
						// Start line: 3161
						// Start offset: 0x800B23B8
						// Variables:
					// 		int mirror; // $fp
					// 		int envmap; // $a0
					// 		int offset; // $t0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 3176
							// Start offset: 0x800B2438

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 3178
								// Start offset: 0x800B2444
								// Variables:
							// 		int type; // $a3
							// 		int index; // $v1

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 3179
									// Start offset: 0x800B2444

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 3183
										// Start offset: 0x800B2450

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 3184
											// Start offset: 0x800B2450

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 3185
												// Start offset: 0x800B245C
												// Variables:
											// 		int copIndex; // $a0
											// 		int cop_type; // $v0
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x800B24B4
											// End Line: 3189
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x800B24E0
										// End Line: 3191
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800B2538
									// End Line: 3198
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800B2538
								// End Line: 3198
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800B2538
							// End Line: 3201

							/* begin block 1.1.1.1.1.1.2 */
								// Start line: 3205
								// Start offset: 0x800B2570
								// Variables:
							// 		int clip; // $a1
							/* end block 1.1.1.1.1.1.2 */
							// End offset: 0x800B265C
							// End Line: 3241
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800B265C
						// End Line: 3241
					/* end block 1.1.1.1.1 */
					// End offset: 0x800B2674
					// End Line: 3244
				/* end block 1.1.1.1 */
				// End offset: 0x800B2674
				// End Line: 3244
			/* end block 1.1.1 */
			// End offset: 0x800B2674
			// End Line: 3244
		/* end block 1.1 */
		// End offset: 0x800B2690
		// End Line: 3246
	/* end block 1 */
	// End offset: 0x800B2730
	// End Line: 3269

	/* begin block 2 */
		// Start line: 7113
	/* end block 2 */
	// End Line: 7114

	/* begin block 3 */
		// Start line: 7120
	/* end block 3 */
	// End Line: 7121

	/* begin block 4 */
		// Start line: 7120
	/* end block 4 */
	// End Line: 7121

void R3DCar_InsertCarFacetII__FP8Car_tObj(Car_tObj *carObj)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint type;
  int iVar4;
  int index;
  Transformer_zScene *pTVar5;
  Transformer_zObj *obj;
  uint envmap;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int lightAvg;
  uint uVar10;
  uint local_34;
  int local_2c;
  
  iVar3 = R3DCar_rightHandDrive;
  local_34 = 0;
  iVar7 = (int)(carObj->render).palNum;
  uVar10 = (uint)(*(byte *)((int)&carObj->audio[4].panangle + 2) >> 7);
  pTVar5 = (&R3DCar_LoadedScenePointer250)[uVar10 * 0x32 + iVar7];
  if ((carObj->wheel[0].wheelInAir | carObj->wheel[1].wheelInAir | carObj->wheel[2].wheelInAir |
      carObj->wheel[3].wheelInAir) == 0) {
    if (GameSetup_gData.Time == 0) {
      local_34 = (uint)(DrawC_gWetRoad != 0);
    }
    else {
      if (GameSetup_gData.commMode == 1) {
        local_34 = 0xffffffff;
        if (DrawC_gWetRoad == 0) goto LAB_800b2284;
        type = 1;
      }
      else {
        type = 0xfffffffe;
        if (DrawC_gWetRoad == 0) goto LAB_800b2284;
      }
      local_34 = type;
    }
  }
LAB_800b2284:
  type = BWorldSm_QuadLight__FP12BWorldSm_Pos(&(carObj->N).simRoadInfo);
  sVar1 = (carObj->render).palCopyNum[2];
  (carObj->render).bodyRoll = type & 0xffffff;
  if (-1 < sVar1) {
    if (gNight_renderNight != (uchar *)0x0) {
      DrawC_NightHeadlight__FP8Car_tObj(carObj);
    }
    type = (carObj->render).bodyRoll;
    lightAvg = (int)((type & 0xff) + ((int)(type & 0xff00) >> 8) + (type >> 0x10 & 0xff)) / 3;
    DAT_1f80008c = lightAvg * 0x10000;
    if (lightAvg < 0x18) {
      lightAvg = 0x18;
      DAT_1f80008c = 0x180000;
    }
    DAT_1f80008c = DAT_1f80008c + lightAvg * 0x101;
    iVar4 = DrawC_PrimStart__FP12Draw_tVertexP8Car_tObjiP13Draw_CarCache
                      (&R3DCar_center,carObj,lightAvg,(Draw_CarCache *)&DAT_1f800000);
    if (-1 < iVar4) {
      iVar6 = 0;
      iVar9 = 0;
      iVar8 = 0;
      local_2c = 0;
      while (iVar6 < 0x39) {
        obj = (Transformer_zObj *)(&R3DCar_LoadedScenePointer250)[uVar10 * 0x32 + iVar7]->obj[iVar6]
        ;
        if ((obj->numFacet != 0) && (R3DCar_ObjectVisible[iVar6] != 0)) {
          type = SEXT14((&CHAR_I_801165e1)[local_2c * 2]);
          DAT_1f800040 = (int)(&R3DCar_ObjectInfo)[local_2c * 2];
          bVar2 = false;
          if ((iVar7 < 0x1c) && ((iVar6 - 0x1cU < 2 && (R3DCar_RecessedLight[iVar7] != '\0')))) {
            DAT_1f800040 = -DAT_1f800040;
          }
          if (((iVar3 != 0) && (0x22 < iVar6)) && (iVar6 < 0x29)) {
            bVar2 = true;
            DAT_1f80000c = DAT_1f80000c ^ 1;
          }
          envmap = (uint)(byte)R3DCar_ObjectVisible[iVar6] - 0x11;
          if ((int)envmap < 0) {
            index = 0x20;
            if (iVar7 < 0x1c) {
              envmap = type;
              if (R3DCar_eMapColour.r == '\0') {
                envmap = type & 0xfe;
              }
              if (((type & 0x10) != 0) && (0x15 < iVar7)) {
                DAT_1f800040 = DAT_1f800040 + 0xc;
              }
            }
            else {
              index = 0x40;
              envmap = 0x22;
              if ((iVar7 == 0x1c) && (iVar6 == 0x23)) {
                DAT_1f800040 = 4;
              }
            }
            if ((carObj->render).palCopyNum[2] == 3) {
              envmap = envmap | 0x20;
              DAT_1f800040 = -DAT_1f800040;
              if (iVar6 - 0x27U < 2) {
                DAT_1f800040 = DAT_1f800040 + -0x10;
              }
            }
            DAT_1f800040 = carObj->audio[6].surface2 + DAT_1f800040;
            if (iVar4 < index) {
                            
              DrawC_PrimClip__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache
                        ((matrixtdef *)((int)R3DCar_orientMat->m + iVar8),
                         (coorddef *)((int)&R3DCar_position->x + iVar9),obj,pTVar5->overlay,envmap,
                         (Draw_CarCache *)&DAT_1f800000);
            }
            else {
                            
              DrawC_Prim__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache
                        ((matrixtdef *)((int)R3DCar_orientMat->m + iVar8),
                         (coorddef *)((int)&R3DCar_position->x + iVar9),obj,pTVar5->overlay,envmap,
                         (Draw_CarCache *)&DAT_1f800000);
            }
          }
          else {
            index = -1;
            type = envmap;
            if (iVar7 < 0x1c) {
              if (iVar7 < 0x16) {
                type = envmap;
                if ((envmap == 4) && (type = envmap, R3DCar_SignalBrakeFlare[iVar7] != '\0')) {
                  type = 0x41;
                }
              }
              else {
                type = envmap;
                if ((int)R3DCar_FlareCopSirenType
                         [(uint)(byte)R3DCar_CopIndex
                                      [((uint)*(byte *)((int)&carObj->audio[4].panangle + 2) & 0x7f)
                                       + (iVar7 + -0x16) * 5] * 6 + envmap] != 0) {
                  type = (int)R3DCar_FlareCopSirenType
                              [(uint)(byte)R3DCar_CopIndex
                                           [((uint)*(byte *)((int)&carObj->audio[4].panangle + 2) &
                                            0x7f) + (iVar7 + -0x16) * 5] * 6 + envmap];
                }
              }
              if ((((*(ushort *)((int)&(carObj->render).light + 2) & 2) != 0) ||
                  ((0x15 < iVar7 && (((carObj->speechInfo).speechSource & 2) != 0)))) &&
                 ((type & 0xbf) == 1)) {
                type = type | 0x600;
              }
              index = (int)R3DCar_FlareOverlayIndex[envmap];
            }
            DAT_1f800040 = carObj->audio[6].surface2 + DAT_1f800040;
            DrawC_PrimHalo__FP10matrixtdefP8coorddefP16Transformer_zObjiiiP13Draw_CarCache
                      ((matrixtdef *)((int)R3DCar_orientMat->m + iVar8),
                       (coorddef *)((int)&R3DCar_position->x + iVar9),obj,type,index,local_34,
                       (Draw_CarCache *)&DAT_1f800000);
          }
          if (bVar2) {
            DAT_1f80000c = DAT_1f80000c ^ 1;
          }
        }
        iVar9 = iVar9 + 0xc;
        iVar8 = iVar8 + 0x24;
        iVar6 = iVar6 + 1;
        local_2c = local_2c + 3;
      }
      DrawC_PrimStop__FP8Car_tObjP13Draw_CarCache(carObj,(Draw_CarCache *)&DAT_1f800000);
      if (R3DCar_shadowFlag != 0) {
        DAT_1f80008c = ((int)(lightAvg * (uint)R3DCar_shadowColour.b) >> 8) * 0x10000 +
                       ((int)(lightAvg * (uint)R3DCar_shadowColour.g) >> 8) * 0x100 +
                       ((int)(lightAvg * (uint)R3DCar_shadowColour.r) >> 8);
        if (iVar4 < 0x20) {
          DrawC_ShadowPrimClip__FP12Draw_tVertexP13Draw_CarCache
                    (R3DCar_shadowVertex,(Draw_CarCache *)&DAT_1f800000);
        }
        else {
          DrawC_ShadowPrim__FP12Draw_tVertexP13Draw_CarCache
                    (R3DCar_shadowVertex,(Draw_CarCache *)&DAT_1f800000);
        }
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_InsertCarFacetMenuII__FP8Car_tObji(struct Car_tObj *carObj /*$fp*/, int light /*$a1*/)
 // line 3273, offset 0x800b2760
	/* begin block 1 */
		// Start line: 3274
		// Start offset: 0x800B2760
		// Variables:
	// 		int i; // $s0
	// 		int lightAvg; // $a2
	// 		int carType; // $s1
	// 		int countryFlag; // $s6
	// 		int rightHandDrive; // stack offset -56
	// 		struct Transformer_zOverlay *overlay; // stack offset -52
	// 		struct Draw_CarCache *sd; // $s2

		/* begin block 1.1 */
			// Start line: 3294
			// Start offset: 0x800B27F0

			/* begin block 1.1.1 */
				// Start line: 3297
				// Start offset: 0x800B2814

				/* begin block 1.1.1.1 */
					// Start line: 3300
					// Start offset: 0x800B2830

					/* begin block 1.1.1.1.1 */
						// Start line: 3300
						// Start offset: 0x800B2844
						// Variables:
					// 		struct Transformer_zObj *obj; // $a2
					// 		int visible; // $t1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 3302
							// Start offset: 0x800B2850

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 3307
								// Start offset: 0x800B28A8
								// Variables:
							// 		int mirror; // $s7
							// 		int envmap; // $t2
							// 		int offset; // $t0

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 3322
									// Start offset: 0x800B2914

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 3324
										// Start offset: 0x800B2920
										// Variables:
									// 		int type; // $a3
									// 		int index; // $v1

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 3325
											// Start offset: 0x800B2920

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 3329
												// Start offset: 0x800B292C

												/* begin block 1.1.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 3330
													// Start offset: 0x800B292C

													/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
														// Start line: 3331
														// Start offset: 0x800B2938
														// Variables:
													// 		int copIndex; // $a0
													// 		int cop_type; // $v0
													/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x800B29B8
													// End Line: 3339
												/* end block 1.1.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x800B29FC
												// End Line: 3341
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x800B2A10
											// End Line: 3345
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x800B2A10
										// End Line: 3345
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800B2A28
									// End Line: 3351
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800B2B00
								// End Line: 3384
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800B2B18
							// End Line: 3388
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800B2B18
						// End Line: 3388
					/* end block 1.1.1.1.1 */
					// End offset: 0x800B2B18
					// End Line: 3388
				/* end block 1.1.1.1 */
				// End offset: 0x800B2B2C
				// End Line: 3390
			/* end block 1.1.1 */
			// End offset: 0x800B2B58
			// End Line: 3394
		/* end block 1.1 */
		// End offset: 0x800B2B58
		// End Line: 3394
	/* end block 1 */
	// End offset: 0x800B2B58
	// End Line: 3394

	/* begin block 2 */
		// Start line: 7548
	/* end block 2 */
	// End Line: 7549

	/* begin block 3 */
		// Start line: 7551
	/* end block 3 */
	// End Line: 7552

	/* begin block 4 */
		// Start line: 7551
	/* end block 4 */
	// End Line: 7552

void R3DCar_InsertCarFacetMenuII__FP8Car_tObji(Car_tObj *carObj,int light)

{
  bool bVar1;
  int iVar2;
  Transformer_zScene *pTVar3;
  int iVar4;
  int index;
  Transformer_zObj *obj;
  uint uVar5;
  uint type;
  uint envmap;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  
  iVar2 = R3DCar_rightHandDrive;
  iVar7 = (int)(carObj->render).palNum;
  uVar10 = (uint)(*(byte *)((int)&carObj->audio[4].panangle + 2) >> 7);
  pTVar3 = (&R3DCar_LoadedScenePointer250)[uVar10 * 0x32 + iVar7];
  if ((R3DCar_InMenu & 0x80U) != 0) {
    light = light >> 1;
  }
  DAT_1f80008c = light * 0x10101;
  if (-1 < (carObj->render).palCopyNum[2]) {
    iVar4 = DrawC_PrimStart__FP12Draw_tVertexP8Car_tObjiP13Draw_CarCache
                      (&R3DCar_center,carObj,light,(Draw_CarCache *)&DAT_1f800000);
    iVar6 = 0;
    if (-1 < iVar4) {
      iVar9 = 0;
      iVar4 = 0;
      pcVar8 = &R3DCar_ObjectInfo;
      while (iVar6 < 0x39) {
        obj = (Transformer_zObj *)(&R3DCar_LoadedScenePointer250)[uVar10 * 0x32 + iVar7]->obj[iVar6]
        ;
        if ((obj->numFacet != 0) && (R3DCar_ObjectVisible[iVar6] != 0)) {
          envmap = SEXT14(pcVar8[1]);
          DAT_1f800040 = (int)*pcVar8;
          bVar1 = false;
          if ((iVar7 < 0x1c) && ((iVar6 - 0x1cU < 2 && (R3DCar_RecessedLight[iVar7] != '\0')))) {
            DAT_1f800040 = -DAT_1f800040;
          }
          if (((iVar2 != 0) && (0x22 < iVar6)) && (iVar6 < 0x29)) {
            bVar1 = true;
            DAT_1f80000c = DAT_1f80000c ^ 1;
          }
          type = (uint)(byte)R3DCar_ObjectVisible[iVar6] - 0x11;
          if ((int)type < 0) {
            if (iVar7 < 0x1c) {
              if ((envmap & 0x10) != 0) {
                type = envmap & 0x80;
                if (iVar7 < 0x16) goto LAB_800b2ab4;
                DAT_1f800040 = DAT_1f800040 + 0xc;
                if ((R3DCar_InMenu & 0x80U) != 0) {
                  DAT_1f800040 = -DAT_1f800040;
                }
              }
LAB_800b2ab0:
              type = envmap & 0x80;
            }
            else {
              type = envmap & 0x80;
              envmap = type;
              if (iVar7 != 0x1c) goto LAB_800b2ab0;
              envmap = type;
              if (iVar6 == 0x23) {
                DAT_1f800040 = 4;
                envmap = type;
              }
            }
LAB_800b2ab4:
            if ((type != 0) && ((R3DCar_InMenu & 0x80U) != 0)) {
              DAT_1f800040 = -DAT_1f800040;
            }
            DAT_1f800040 = carObj->audio[6].surface2 + DAT_1f800040;
                        
            DrawC_PrimMenu__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache
                      ((matrixtdef *)((int)R3DCar_orientMat->m + iVar4),
                       (coorddef *)((int)&R3DCar_position->x + iVar9),obj,pTVar3->overlay,envmap,
                       (Draw_CarCache *)&DAT_1f800000);
          }
          else {
            index = -1;
            if (iVar7 < 0x1c) {
              if (iVar7 < 0x16) {
                if ((type == 4) && (R3DCar_SignalBrakeFlare[iVar7] != '\0')) {
                  type = 1;
                }
              }
              else {
                uVar5 = type;
                if ((int)R3DCar_FlareCopSirenType
                         [(uint)(byte)R3DCar_CopIndex
                                      [((uint)*(byte *)((int)&carObj->audio[4].panangle + 2) & 0x7f)
                                       + (iVar7 + -0x16) * 5] * 6 + type] != 0) {
                  uVar5 = (int)R3DCar_FlareCopSirenType
                               [(uint)(byte)R3DCar_CopIndex
                                            [((uint)*(byte *)((int)&carObj->audio[4].panangle + 2) &
                                             0x7f) + (iVar7 + -0x16) * 5] * 6 + type];
                }
                if (((envmap & 0x10) != 0) && ((R3DCar_InMenu & 0x80U) != 0)) {
                  DAT_1f800040 = 0;
                }
                index = (int)R3DCar_FlareOverlayIndex[type];
                type = uVar5;
              }
              if ((0x15 < iVar7) && (type == 1)) {
                type = 0x601;
              }
            }
            if ((R3DCar_InMenu & 0x80U) != 0) {
              type = type | 0x8080;
            }
            DAT_1f800040 = carObj->audio[6].surface2 + DAT_1f800040;
            DrawC_PrimHalo__FP10matrixtdefP8coorddefP16Transformer_zObjiiiP13Draw_CarCache
                      ((matrixtdef *)((int)R3DCar_orientMat->m + iVar4),
                       (coorddef *)((int)&R3DCar_position->x + iVar9),obj,type,index,0,
                       (Draw_CarCache *)&DAT_1f800000);
          }
          if (bVar1) {
            DAT_1f80000c = DAT_1f80000c ^ 1;
          }
        }
        iVar9 = iVar9 + 0xc;
        iVar4 = iVar4 + 0x24;
        pcVar8 = pcVar8 + 6;
        iVar6 = iVar6 + 1;
      }
      DrawC_PrimStop__FP8Car_tObjP13Draw_CarCache(carObj,(Draw_CarCache *)&DAT_1f800000);
      if ((R3DCar_InMenu & 0x80U) == 0) {
        DrawC_ShadowPrimClip__FP12Draw_tVertexP13Draw_CarCache
                  (R3DCar_shadowVertex,(Draw_CarCache *)&DAT_1f800000);
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_Showroom__FP13DRender_tView(struct DRender_tView *Vi /*$s0*/)
 // line 3399, offset 0x800b2b88
	/* begin block 1 */
		// Start line: 3400
		// Start offset: 0x800B2B88
	/* end block 1 */
	// End offset: 0x800B2B88
	// End Line: 3400

	/* begin block 2 */
		// Start line: 7849
	/* end block 2 */
	// End Line: 7850

	/* begin block 3 */
		// Start line: 7853
	/* end block 3 */
	// End Line: 7854

	/* begin block 4 */
		// Start line: 7853
	/* end block 4 */
	// End Line: 7854

void R3DCar_Showroom__FP13DRender_tView(DRender_tView *Vi)

{
  coorddef *t;
  matrixtdef *m;
  
  m = &(Vi->cview).mrotationInv;
  t = &(Vi->cview).translationInv;
  DrawC_ShowroomPrims__FP10matrixtdefP8coorddefP13Draw_CarCache(m,t,(Draw_CarCache *)&DAT_1f800000);
  DrawC_SpotPrims__FP10matrixtdefP8coorddefP13Draw_CarCache(m,t,(Draw_CarCache *)&DAT_1f800000);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_InsertCarFacetZ__FP8Car_tObjP13DRender_tView(struct Car_tObj *carObj /*$a0*/, struct DRender_tView *Vi /*$a1*/)
 // line 3411, offset 0x800b2bd8
	/* begin block 1 */
		// Start line: 3412
		// Start offset: 0x800B2BD8
	/* end block 1 */
	// End offset: 0x800B2BD8
	// End Line: 3412

	/* begin block 2 */
		// Start line: 7878
	/* end block 2 */
	// End Line: 7879

	/* begin block 3 */
		// Start line: 7883
	/* end block 3 */
	// End Line: 7884

	/* begin block 4 */
		// Start line: 7883
	/* end block 4 */
	// End Line: 7884

void R3DCar_InsertCarFacetZ__FP8Car_tObjP13DRender_tView(Car_tObj *carObj,DRender_tView *Vi)

{
  R3DCar_InsertCarFacet__FP8Car_tObjP13DRender_tView(carObj,Vi);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ R3DCar_InsertAllListFacet__FP13DRender_tView(struct DRender_tView *Vi /*stack 0*/)
 // line 3416, offset 0x800b2bf8
	/* begin block 1 */
		// Start line: 3417
		// Start offset: 0x800B2BF8
		// Variables:
	// 		int i; // $s2
	// 		int sort; // $t6
	// 		int (*sort_min)[0]; // $s7
	// 		int (*sort_max)[0]; // $s6

		/* begin block 1.1 */
			// Start line: 3438
			// Start offset: 0x800B2CD4

			/* begin block 1.1.1 */
				// Start line: 3438
				// Start offset: 0x800B2CEC
				// Variables:
			// 		struct Car_tObj *carObj; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800B2D44
			// End Line: 3449
		/* end block 1.1 */
		// End offset: 0x800B2D5C
		// End Line: 3450

		/* begin block 1.2 */
			// Start line: 3452
			// Start offset: 0x800B2D5C

			/* begin block 1.2.1 */
				// Start line: 3454
				// Start offset: 0x800B2D90

				/* begin block 1.2.1.1 */
					// Start line: 3456
					// Start offset: 0x800B2DA4

					/* begin block 1.2.1.1.1 */
						// Start line: 3457
						// Start offset: 0x800B2DB4
						// Variables:
					// 		struct Car_tObj *carObj; // $a3
					// 		int j; // $t2

						/* begin block 1.2.1.1.1.1 */
							// Start line: 3458
							// Start offset: 0x800B2DB4

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 3462
								// Start offset: 0x800B2DD0
								// Variables:
							// 		struct Car_tObj *sort_carObj; // $a1
							// 		int diffZ; // $a2
							// 		int size; // $a0
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x800B2E70
							// End Line: 3475
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800B2E80
						// End Line: 3477
					/* end block 1.2.1.1.1 */
					// End offset: 0x800B2E80
					// End Line: 3477
				/* end block 1.2.1.1 */
				// End offset: 0x800B2E80
				// End Line: 3477
			/* end block 1.2.1 */
			// End offset: 0x800B2E80
			// End Line: 3480
		/* end block 1.2 */
		// End offset: 0x800B2E9C
		// End Line: 3481

		/* begin block 1.3 */
			// Start line: 3483
			// Start offset: 0x800B2E9C

			/* begin block 1.3.1 */
				// Start line: 3485
				// Start offset: 0x800B2EF4

				/* begin block 1.3.1.1 */
					// Start line: 3487
					// Start offset: 0x800B2F00

					/* begin block 1.3.1.1.1 */
						// Start line: 3488
						// Start offset: 0x800B2F10
						// Variables:
					// 		struct Car_tObj *carObj; // $a1

						/* begin block 1.3.1.1.1.1 */
							// Start line: 3489
							// Start offset: 0x800B2F10

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 3495
								// Start offset: 0x800B2F40
								// Variables:
							// 		int sub_otSize; // $a0
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x800B2F40
							// End Line: 3496
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x800B2F84
						// End Line: 3512
					/* end block 1.3.1.1.1 */
					// End offset: 0x800B2F84
					// End Line: 3512
				/* end block 1.3.1.1 */
				// End offset: 0x800B2F84
				// End Line: 3512
			/* end block 1.3.1 */
			// End offset: 0x800B2F84
			// End Line: 3512
		/* end block 1.3 */
		// End offset: 0x800B2F9C
		// End Line: 3517

		/* begin block 1.4 */
			// Start line: 3520
			// Start offset: 0x800B2F9C

			/* begin block 1.4.1 */
				// Start line: 3532
				// Start offset: 0x800B3000
				// Variables:
			// 		struct Car_tObj *carObj; // $s0
			/* end block 1.4.1 */
			// End offset: 0x800B3018
			// End Line: 3534
		/* end block 1.4 */
		// End offset: 0x800B3078
		// End Line: 3552
	/* end block 1 */
	// End offset: 0x800B3078
	// End Line: 3552

	/* begin block 2 */
		// Start line: 7889
	/* end block 2 */
	// End Line: 7890

	/* begin block 3 */
		// Start line: 7893
	/* end block 3 */
	// End Line: 7894

	/* begin block 4 */
		// Start line: 7893
	/* end block 4 */
	// End Line: 7894

void R3DCar_InsertAllListFacet__FP13DRender_tView(DRender_tView *Vi)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Car_tObj *pCVar5;
  int iVar6;
  int *piVar7;
  Car_tObj **ppCVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  Car_tObj **ppCVar13;
  int iVar14;
  Car_tObj *carObj;
  int *piVar15;
  int iVar16;
  int *piVar17;
  undefined auStack64 [16];
  int local_30 [2];
  
  iVar1 = -(((uint)(Cars_gNumCars << 5) >> 3) + 7 & 0xfffffff8);
  piVar7 = (int *)((int)local_30 + iVar1);
  iVar2 = -(((uint)(Cars_gNumCars << 5) >> 3) + 7 & 0xfffffff8);
  piVar9 = (int *)((int)local_30 + iVar2 + iVar1);
  gWSavePtr = SetSp(auStack64[iVar2 + iVar1]);
  stackSpeedUpEnbabledFlag = 1;
  iVar16 = 0;
  if (Vi->player == 0) {
    if (R3DCar_ClockLast < generic128HzClock) {
      R3DCar_Clock = 1;
      R3DCar_ClockLast = generic128HzClock + 6;
    }
    else {
      R3DCar_Clock = 0;
    }
  }
  piVar11 = &R3DCar_PositionZ;
  ppCVar13 = &Cars_gList9;
  piVar15 = piVar9;
  piVar17 = piVar7;
  while (iVar3 = Cars_gNumCars, iVar14 = 1, iVar16 < Cars_gNumCars) {
    carObj = *ppCVar13;
    iVar3 = R3DCar_Visibilty__FP8Car_tObjP13DRender_tView(carObj,Vi,auStack64[iVar2 + iVar1]);
    *piVar11 = iVar3;
    (carObj->render).textureStartIndex = 0;
    *(undefined2 *)&(carObj->render).bodyPitch = 0;
    *piVar17 = 0;
    iVar3 = 0x1a0;
    if ((carObj->render).palNum != 0x1c) {
      iVar3 = (carObj->N).dimension.z >> 9;
    }
    *piVar15 = iVar3;
    piVar15 = piVar15 + 1;
    piVar17 = piVar17 + 1;
    piVar11 = piVar11 + 1;
    ppCVar13 = ppCVar13 + 1;
    iVar16 = iVar16 + 1;
  }
  iVar16 = 0;
  piVar11 = &R3DCar_PositionZ;
  ppCVar13 = &Cars_gList9;
  local_30[0] = Cars_gNumCars + -1;
  piVar15 = piVar7;
  piVar17 = piVar9;
  while (iVar12 = Cars_gNumCars, iVar16 < local_30[0]) {
    if (*piVar11 != -0x80000000) {
      carObj = *ppCVar13;
      piVar10 = &R3DCar_PositionZ + iVar14;
      ppCVar8 = &Cars_gList9 + iVar14;
      iVar12 = iVar14;
      while (iVar12 < iVar3) {
        pCVar5 = *ppCVar8;
        iVar6 = *piVar11 - *piVar10;
        if (((carObj->render).textureStartIndex == 0) && ((pCVar5->render).textureStartIndex == 0))
        {
          iVar4 = iVar6;
          if (iVar6 < 0) {
            iVar4 = -iVar6;
          }
          if (iVar4 < (carObj->N).dimension.z + (pCVar5->N).dimension.z) {
            *(Car_tObj **)&(pCVar5->render).textureStartIndex = carObj;
            *(short *)&(carObj->render).bodyPitch = *(short *)&(carObj->render).bodyPitch + 1;
            if (iVar6 < 0) {
              *piVar15 = *piVar15 - ((pCVar5->N).dimension.z >> 9);
            }
            else {
              *piVar17 = *piVar17 + ((pCVar5->N).dimension.z >> 9);
            }
          }
        }
        piVar10 = piVar10 + 1;
        ppCVar8 = ppCVar8 + 1;
        iVar12 = iVar12 + 1;
      }
    }
    iVar14 = iVar14 + 1;
    piVar17 = piVar17 + 1;
    piVar15 = piVar15 + 1;
    piVar11 = piVar11 + 1;
    ppCVar13 = ppCVar13 + 1;
    iVar16 = iVar16 + 1;
  }
  iVar16 = 0;
  ppCVar13 = &Cars_gList9;
  R3DCar_subOt = (&R3DCar_subOtStart22)[gFlip * 2 + gCView.player];
  piVar11 = &R3DCar_PositionZ;
  while (iVar16 < iVar12) {
    if (*piVar11 != -0x80000000) {
      carObj = *ppCVar13;
      *piVar7 = *piVar7 + -0x30;
      iVar3 = *piVar9;
      *piVar9 = iVar3 + 0x30;
      if ((carObj->render).textureStartIndex == 0) {
        iVar14 = (iVar3 + 0x30) - *piVar7;
        *(ulong **)&carObj->audio[6].force = R3DCar_subOt;
        R3DCar_subOt = R3DCar_subOt + iVar14;
        iVar3 = (carObj->N).dimension.z;
        carObj->audio[6].panangle = iVar14;
        *(int *)&carObj->render = *piVar9 - (iVar3 >> 10);
      }
      else {
        carObj->audio[6].force = 0;
        carObj->audio[6].panangle = 0;
        *(undefined4 *)&carObj->render = 0;
      }
    }
    piVar9 = piVar9 + 1;
    piVar7 = piVar7 + 1;
    ppCVar13 = ppCVar13 + 1;
    piVar11 = piVar11 + 1;
    iVar16 = iVar16 + 1;
  }
  iVar16 = 0;
  DrawC_gScreenMat.m[0][0] = 0x1000;
  DrawC_gScreenMat.m[1][0] = 0;
  DrawC_gScreenMat.m[2][0] = 0;
  DrawC_gScreenMat.m[0][1] = 0;
  DrawC_gScreenMat.m[1][1] = -0x1000;
  DrawC_gScreenMat.m[2][1] = 0;
  DrawC_gScreenMat.m[0][2] = 0;
  DrawC_gScreenMat.m[1][2] = 0;
  DrawC_gScreenMat.m[2][2] = 0x1000;
  DrawC_gScreenMat.t[0] = 0;
  DrawC_gScreenMat.t[1] = 0;
  DrawC_gScreenMat.t[2] = 0;
  gWSavePtr = SetSp(auStack64[iVar2 + iVar1]);
  ppCVar13 = &Cars_gList9;
  stackSpeedUpEnbabledFlag = 0;
  while (iVar16 < Cars_gNumCars) {
    carObj = *ppCVar13;
    gWSavePtr = SetSp(auStack64[iVar2 + iVar1]);
    ppCVar13 = ppCVar13 + 1;
    stackSpeedUpEnbabledFlag = 1;
    R3DCar_InsertCarFacetZ__FP8Car_tObjP13DRender_tView(carObj,Vi,auStack64[iVar2 + iVar1]);
    iVar16 = iVar16 + 1;
    gWSavePtr = SetSp(auStack64[iVar2 + iVar1]);
    stackSpeedUpEnbabledFlag = 0;
    R3DCar_InsertCarFacetII__FP8Car_tObj(carObj,auStack64[iVar2 + iVar1]);
  }
  return;
}





