#include "NFS4.H"
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

void R3DCar_ChangeTrafficColor__FP8Car_tObji(Car_tObj *carObj,int newColorIndex)
{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  Texture_pal8bit *palCopy;
  uint uVar4;
  int iVar5;
  
  if ((carObj->render).sub_ot != (ulong *)0x0) {
    uVar2 = *(ushort *)&carObj->audio[6].type;
    uVar4 = newColorIndex & 7;
    iVar5 = ((uint)uVar2 & 8) + uVar4;
    if (iVar5 != (int)(short)uVar2) {
      DrawSync(0);
      bVar3 = 0x1b < (carObj->render).palCopyNum[0xd];
      if (bVar3) {
        palCopy = (Texture_pal8bit *)(carObj->render).sub_ot;
        sVar1 = *(short *)&(carObj->render).sub_otSize;
        Texture_CarColor = uVar4;
      }
      else {
        Texture_CarColor =
             uVar4 + ((uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 2) * 4;
        Texture_ProcessPaletteCopy__FP15Texture_pal8bitii
                  ((Texture_pal8bit *)(carObj->render).sub_ot,0,1);
        palCopy = (Texture_pal8bit *)(carObj->render).sub_ot;
        sVar1 = *(short *)&(carObj->render).sub_otSize;
        Texture_CarColor =
             uVar4 + ((uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 1) * 8;
      }
      Texture_ProcessPaletteCopy__FP15Texture_pal8bitii(palCopy,(uint)!bVar3,(int)sVar1);
      *(short *)&carObj->audio[6].type = (short)iVar5;
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

void R3DCar_StartUp__Fv(void)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  char acStack112 [104];
  
  iVar3 = 0;
  puVar2 = &R3DCar_LoadedSceneColor;
  puVar1 = &_R3DCar_LoadedScenePointer;
  do {
    puVar1[0x32] = 0;
    *puVar1 = 0;
    (&DAT_80116aca)[iVar3] = 0;
    (&R3DCar_LoadedSceneCounter)[iVar3] = 0;
    (&R3DCar_LoadedSceneCountry)[iVar3] = 0xff;
    puVar2[0x32] = 0xffff;
    *puVar2 = 0xffff;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar3 < 0x32);
  uGp00000e3c = reservememadr("orientMat",0x804,0);
  uGp00000e40 = reservememadr("position",0x2b8,0);
  sprintf(acStack112,"%slicense.psh",0);
  uGp00000e68 = loadfileadr(acStack112,0);
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

void R3DCar_PostStartUp__Fv(void)
{
  bool bVar1;
  int iVar2;
  
  if (iGp00000dd8 == 0) {
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
  _R3DCar_subOtStart = reservememadr("sub_ot0",iVar2,0);
  DAT_80116db4 = reservememadr("sub_ot1",iVar2,0);
  if ((iGp00000dd8 != 0) || (DAT_801131f8 == 1)) {
    DAT_80116db0 = reservememadr("sub_ot0m",iVar2,0);
    DAT_80116db8 = reservememadr("sub_ot1m",iVar2,0);
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

void R3DCar_Restart__Fv(void)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = Cars_gNumCars;
  iVar4 = 0;
  piVar3 = &_Cars_gList;
  while (iVar4 < iVar1) {
    iVar2 = *piVar3;
    *(undefined2 *)(iVar2 + 0x8b4) = 0;
    *(undefined2 *)(iVar2 + 0x8b6) = 0;
    if (DAT_80113240 != 0) {
      *(undefined2 *)(iVar2 + 0x8b4) = 0x33;
      *(undefined2 *)(iVar2 + 0x8b6) = 2;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
    *(undefined2 *)(iVar2 + 0x8b8) = 0;
    *(undefined2 *)(iVar2 + 0x8ba) = 0;
    *(undefined2 *)(iVar2 + 0x87e) = 0;
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

void R3DCar_CleanUp__Fv(void)
{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &R3DCar_LoadedSceneCounter;
  piVar1 = &_R3DCar_LoadedScenePointer;
  do {
    if (*piVar1 != 0) {
      purgememadr();
      *piVar1 = 0;
      *puVar2 = 0;
    }
    if (piVar1[0x32] != 0) {
      purgememadr();
      piVar1[0x32] = 0;
      puVar2[0x32] = 0;
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 < 0x32);
  if (iGp00000e3c != 0) {
    purgememadr();
  }
  iGp00000e3c = 0;
  if (iGp00000e40 != 0) {
    purgememadr();
  }
  iGp00000e40 = 0;
  if (iGp00000e68 != 0) {
    purgememadr();
  }
  iGp00000e68 = 0;
  if (_R3DCar_subOtStart != 0) {
    purgememadr();
  }
  if (DAT_80116db4 != 0) {
    purgememadr();
  }
  DAT_80116db4 = 0;
  _R3DCar_subOtStart = 0;
  if ((iGp00000dd8 != 0) || (DAT_801131f8 == 1)) {
    if (DAT_80116db0 != 0) {
      purgememadr();
    }
    if (DAT_80116db8 != 0) {
      purgememadr();
    }
    DAT_80116db8 = 0;
    DAT_80116db0 = 0;
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

Transformer_zScene * R3DCar_ReadInCarData__FPcP8Car_tObj(char *filename,Car_tObj *carObj)
{
  ushort uVar1;
  undefined4 uVar2;
  Transformer_zScene *pTVar3;
  int iVar4;
  int iVar5;
  Transformer_zObj *pTVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  char acStack128 [16];
  int local_70;
  int local_6c;
  int local_68;
  ushort local_60;
  ushort local_5e;
  short local_5c;
  undefined4 local_58;
  Transformer_zScene *local_54;
  int local_50;
  int local_4c;
  int local_48;
  short local_40;
  int *local_38;
  ushort *local_34;
  int local_30;
  
  strcpy(acStack128,filename);
  strcat(acStack128,".geo");
  iVar10 = 0x24c;
  iVar12 = 0;
  local_38 = &local_70;
  local_34 = &local_60;
  local_30 = 0x7e07e07f;
  uVar2 = locatebig(0,acStack128);
  locatebigentry(0,acStack128,0,0,&local_58);
  pTVar3 = (Transformer_zScene *)reservememadr(acStack128,local_58,0);
  local_54 = pTVar3;
  blockmove(uVar2,pTVar3,local_58);
  local_50 = (int)(carObj->render).palCopyNum[0xd];
  local_4c = (&R3DCar_EnvMapInfo)[local_50 * 4];
  local_48 = (&DAT_80116dc0)[local_50 * 4];
  *(undefined4 *)(carObj->render).signalLight = (&DAT_80116dc4)[local_50 * 4] << 7;
  puVar13 = &R3DCar_ObjectInfo;
  *(undefined4 *)&(carObj->render).currentCarType = (&DAT_80116dc8)[local_50 * 4] << 7;
  while (iVar12 < 0x39) {
    pTVar6 = (Transformer_zObj *)((int)pTVar3->obj + iVar10);
    iVar10 = iVar10 + 0x1c;
    local_54->obj[iVar12] = pTVar6;
    if (iVar12 == 0x27) {
      (pTVar6->translation).x = (pTVar6->translation).x + -0x7ae;
    }
    if (iVar12 == 0x28) {
      (pTVar6->translation).x = (pTVar6->translation).x + 0x7ae;
    }
    uVar1 = pTVar6->numVertex;
    if (uVar1 != 0) {
      pTVar6->vertex = (COORD16 *)((int)pTVar3->obj + iVar10);
      iVar10 = iVar10 + (uint)uVar1 * 6;
      if ((uVar1 & 1) != 0) {
        iVar10 = iVar10 + 2;
      }
      if (((uVar1 != 0) && ((puVar13[1] & 1) != 0)) && (local_50 < 0x1c)) {
        pTVar6->Nvertex = (COORD16 *)((int)pTVar3->obj + iVar10);
        iVar10 = iVar10 + (uint)pTVar6->numVertex * 6;
        if ((pTVar6->numVertex & 1) != 0) {
          iVar10 = iVar10 + 2;
        }
        iVar11 = 0;
        local_40 = (short)((uint)(pTVar6->translation).x >> 8);
        iVar4 = (pTVar6->translation).y;
        iVar7 = (pTVar6->translation).z;
        iVar9 = 0;
        while (iVar11 < (int)(uint)pTVar6->numVertex) {
          local_70 = (int)*(short *)((int)&pTVar6->vertex->x + iVar9) + (int)local_40;
          local_6c = (int)*(short *)((int)&pTVar6->vertex->y + iVar9) +
                     (int)(short)((uint)iVar4 >> 8);
          local_68 = (int)*(short *)((int)&pTVar6->vertex->z + iVar9) +
                     (int)(short)((uint)iVar7 >> 8) >> 2;
          VectorNormalS(local_38,local_34);
          if ((puVar13[1] & 0x40) != 0) {
            local_70 = (int)*(short *)((int)&pTVar6->Nvertex->x + iVar9) + (int)(short)local_60;
            local_6c = (int)*(short *)((int)&pTVar6->Nvertex->y + iVar9) + (int)(short)local_5e;
            local_68 = (int)*(short *)((int)&pTVar6->Nvertex->z + iVar9) + (int)local_5c;
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
          *(ushort *)((int)&pTVar6->Nvertex->x + iVar9) = local_60;
          *(short *)((int)&pTVar6->Nvertex->y + iVar9) = local_5e;
          *(short *)((int)&pTVar6->Nvertex->z + iVar9) = local_5c;
          iVar9 = iVar9 + 6;
        }
      }
    }
    if (pTVar6->numFacet != 0) {
      pTVar6->facet = (Transformer_zFacet *)((int)pTVar3->obj + iVar10);
      iVar10 = iVar10 + (uint)pTVar6->numFacet * 0xc;
    }
    puVar13 = puVar13 + 6;
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

void R3DCcar_ReadeMapData__Fv(void)
{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char acStack288 [256];
  char *local_20 [2];
  
  iVar4 = 0;
  sprintf(acStack288,"%scarmap.dat",0);
  pcVar1 = (char *)loadfileadr(acStack288,0x10);
  piVar3 = &R3DCar_EnvMapInfo;
  local_20[0] = pcVar1;
  do {
    iVar2 = Risk_ReadNextValue__FPPc(local_20);
    *piVar3 = iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_20);
    piVar3[1] = iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_20);
    piVar3[2] = iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_20);
    piVar3[3] = iVar2;
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 4;
  } while (iVar4 < 0x1c);
  purgememadr(pcVar1);
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

void R3DCcar_ReadTrackShadow__Fv(void)
{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char acStack280 [256];
  char *local_18 [2];
  
  sprintf(acStack280,"%strack.dat",0);
  pcVar1 = (char *)loadfileadr(acStack280,0x10);
  iVar3 = DAT_80113234 + DAT_80113240 * 2;
  local_18[0] = pcVar1;
  while (iVar3 != -1) {
    iVar2 = Risk_ReadNextValue__FPPc(local_18);
    R3DCar_shadowColour = (undefined)iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_18);
    DAT_8013d39d = (undefined)iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_18);
    DAT_8013d39e = (undefined)iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_18);
    R3DCar_eMapColour = (undefined)iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_18);
    DAT_8013d3a1 = (undefined)iVar2;
    iVar2 = Risk_ReadNextValue__FPPc(local_18);
    iVar3 = iVar3 + -1;
    DAT_8013d3a2 = (undefined)iVar2;
  }
  purgememadr(pcVar1);
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

void R3DCar_CalcCarDimensions__FP8Car_tObjP18Transformer_zScenei( (Car_tObj *carObj,Transformer_zScene *scene,int carType)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  Transformer_zObj *pTVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  COORD16 *pCVar13;
  int iVar14;
  undefined1 *puVar15;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar14 = 0;
  puVar15 = &R3DCar_ObjectInfo;
  local_30 = 0x630000;
  local_2c = 0x630000;
  local_28 = 0x630000;
  local_20 = -0x630000;
  local_1c = -0x630000;
  local_18 = -0x630000;
  while (iVar14 < 0x39) {
    pTVar8 = scene->obj[iVar14];
    if ((puVar15[3] == '\x01') && (pTVar8->numVertex != 0)) {
      if ((((iVar14 == 0) || (0x2e < iVar14)) || ((iVar14 == 2 && (carType == 0x1c)))) &&
         (iVar11 = 0, pTVar8->numVertex != 0)) {
        iVar9 = 0;
        do {
          iVar4 = (pTVar8->translation).x;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 0xff;
          }
          iVar4 = (int)*(short *)((int)&pTVar8->vertex->x + iVar9) + (iVar4 >> 8);
          if (local_30 <= iVar4) {
            iVar4 = local_30;
          }
          iVar5 = (pTVar8->translation).y;
          if (iVar5 < 0) {
            iVar5 = iVar5 + 0xff;
          }
          iVar5 = (int)*(short *)((int)&pTVar8->vertex->y + iVar9) + (iVar5 >> 8);
          if (local_2c <= iVar5) {
            iVar5 = local_2c;
          }
          iVar6 = (pTVar8->translation).z;
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0xff;
          }
          iVar6 = (int)*(short *)((int)&pTVar8->vertex->z + iVar9) + (iVar6 >> 8);
          if (local_28 <= iVar6) {
            iVar6 = local_28;
          }
          iVar1 = (pTVar8->translation).x;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 0xff;
          }
          iVar1 = (int)*(short *)((int)&pTVar8->vertex->x + iVar9) + (iVar1 >> 8);
          if (iVar1 < local_20) {
            iVar1 = local_20;
          }
          iVar2 = (pTVar8->translation).y;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xff;
          }
          iVar2 = (int)*(short *)((int)&pTVar8->vertex->y + iVar9) + (iVar2 >> 8);
          if (iVar2 < local_1c) {
            iVar2 = local_1c;
          }
          iVar3 = (pTVar8->translation).z;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xff;
          }
          iVar3 = (int)*(short *)((int)&pTVar8->vertex->z + iVar9) + (iVar3 >> 8);
          if (iVar3 < local_18) {
            iVar3 = local_18;
          }
          iVar11 = iVar11 + 1;
          iVar9 = iVar9 + 6;
          local_30 = iVar4;
          local_2c = iVar5;
          local_28 = iVar6;
          local_20 = iVar1;
          local_1c = iVar2;
          local_18 = iVar3;
        } while (iVar11 < (int)(uint)pTVar8->numVertex);
      }
      iVar11 = 0x630000;
      if (0x2e < iVar14) {
        iVar9 = 0x630000;
        iVar4 = -0x630000;
        iVar5 = -0x630000;
        iVar6 = 0;
        if (pTVar8->numVertex != 0) {
          iVar10 = 0;
          pCVar13 = pTVar8->vertex;
          iVar1 = iVar11;
          iVar2 = iVar4;
          iVar3 = iVar9;
          iVar12 = iVar5;
          do {
            iVar11 = (pTVar8->translation).x;
            if (iVar11 < 0) {
              iVar11 = iVar11 + 0xff;
            }
            iVar11 = (int)pCVar13->x + (iVar11 >> 8);
            if (iVar11 < 0) {
              iVar11 = -iVar11;
            }
            if (iVar1 <= iVar11) {
              iVar11 = iVar1;
            }
            iVar9 = (pTVar8->translation).z;
            if (iVar9 < 0) {
              iVar9 = iVar9 + 0xff;
            }
            iVar9 = (int)*(short *)((int)&pTVar8->vertex->z + iVar10) + (iVar9 >> 8);
            if (iVar9 < 0) {
              iVar9 = -iVar9;
            }
            if (iVar3 <= iVar9) {
              iVar9 = iVar3;
            }
            iVar4 = (pTVar8->translation).x;
            psVar7 = (short *)((int)&pTVar8->vertex->x + iVar10);
            if (iVar4 < 0) {
              iVar4 = iVar4 + 0xff;
            }
            iVar4 = (int)*psVar7 + (iVar4 >> 8);
            if (iVar4 < 0) {
              iVar4 = -iVar4;
            }
            if (iVar4 < iVar2) {
              iVar4 = iVar2;
            }
            iVar5 = (pTVar8->translation).z;
            if (iVar5 < 0) {
              iVar5 = iVar5 + 0xff;
            }
            iVar5 = (int)psVar7[2] + (iVar5 >> 8);
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (iVar5 < iVar12) {
              iVar5 = iVar12;
            }
            iVar10 = iVar10 + 6;
            iVar6 = iVar6 + 1;
            pCVar13 = pCVar13 + 1;
            iVar1 = iVar11;
            iVar2 = iVar4;
            iVar3 = iVar9;
            iVar12 = iVar5;
          } while (iVar6 < (int)(uint)pTVar8->numVertex);
        }
        if (iVar14 < 0x35) {
          if (0x2e < iVar14) {
            (carObj->N).wheelFrontX = (iVar11 + iVar4 + 1 >> 1) << 8;
            (carObj->N).wheelFrontZ = (iVar9 + iVar5 + 1 >> 1) << 8;
            (carObj->N).wheelWidthF = (iVar4 - iVar11) * 0x100 + 0xccc;
          }
        }
        else {
          (carObj->N).wheelBackX = (iVar11 + iVar4 + 1 >> 1) << 8;
          (carObj->N).wheelBackZ = (iVar9 + iVar5 + 1 >> 1) << 8;
          (carObj->N).wheelWidthB = (iVar4 - iVar11) * 0x100 + 0xccc;
        }
      }
    }
    puVar15 = puVar15 + 6;
    iVar14 = iVar14 + 1;
  }
  (carObj->N).dimension.x =
       ((int)((local_20 - local_30) + ((uint)(local_20 - local_30) >> 0x1f)) >> 1) << 8;
  (carObj->N).dimension.y =
       ((int)((local_1c - local_2c) + ((uint)(local_1c - local_2c) >> 0x1f)) >> 1) << 8;
  iVar14 = ((int)((local_18 - local_28) + ((uint)(local_18 - local_28) >> 0x1f)) >> 1) << 8;
  (carObj->N).dimension.z = iVar14;
  if (carType == 0x1c) {
    (carObj->N).dimension.z = iVar14 >> 1;
  }
  iVar14 = (carObj->N).dimension.x;
  if (iVar14 < 0) {
    iVar14 = iVar14 + 0xff;
  }
  iVar11 = (carObj->N).dimension.y;
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar14 = fixedsqrt((iVar14 >> 8) * (iVar14 >> 8) + (iVar11 >> 8) * (iVar11 >> 8));
  (carObj->N).dimensionRadius = iVar14;
  if (iVar14 < 0) {
    iVar14 = iVar14 + 0xff;
  }
  iVar11 = (carObj->N).dimension.z;
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar14 = fixedsqrt((iVar14 >> 8) * (iVar14 >> 8) + (iVar11 >> 8) * (iVar11 >> 8));
  (carObj->N).dimensionRadius = iVar14;
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

void R3DCar_DeInstantiate3DCar__FP8Car_tObj(Car_tObj *carObj)
{
  if ((carObj->render).sub_ot != (ulong *)0x0) {
    purgememadr();
  }
  (carObj->render).sub_ot = (ulong *)0x0;
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

void R3DCar_DeInstantiate3DCarMenu__FP8Car_tObj(Car_tObj *carObj)
{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)(carObj->render).palCopyNum[0xd];
  if (-1 < iVar3) {
    uVar2 = (uint)(*(byte *)((int)&carObj->audio[6].type + 2) >> 7);
    cVar1 = (&R3DCar_LoadedSceneCounter)[iVar3 + uVar2 * 0x32] + -1;
    (&R3DCar_LoadedSceneCounter)[iVar3 + uVar2 * 0x32] = cVar1;
    if (cVar1 == '\0') {
      purgememadr((&_R3DCar_LoadedScenePointer)[uVar2 * 0x32 + iVar3]);
      (&_R3DCar_LoadedScenePointer)[uVar2 * 0x32 + iVar3] = 0;
    }
    CarIO_ReleaseCarCluts__FP8Car_tObj(carObj);
  }
  (carObj->render).palCopyNum[0xd] = -1;
  iVar3 = *(int *)&(carObj->render).inside;
  (carObj->render).palCopyNum[0xe] = (carObj->render).palCopyNum[0xe] | 0x80;
  if (iVar3 != 0) {
    while (iVar3 = getasyncreadstatus(*(undefined4 *)&(carObj->render).inside), iVar3 == 0) {
      systemtask(0);
    }
    if (((0 < iVar3) || (iVar3 == -1)) &&
       (iVar3 = getasyncreadadr(*(undefined4 *)&(carObj->render).inside), iVar3 != 0)) {
      purgememadr(iVar3);
    }
    *(undefined4 *)&(carObj->render).inside = 0;
    uGp00000e38 = 0xffffffff;
  }
  if ((carObj->render).sub_ot != (ulong *)0x0) {
    purgememadr();
  }
  (carObj->render).sub_ot = (ulong *)0x0;
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

void R3DCar_GetFileName__FPcN20(char *infilename,char *filename,char *suffix)
{
  char acStack32 [16];
  
  strcpy(acStack32,filename);
  strcat(acStack32,suffix);
  strcpy(infilename,acStack32);
  strcat(infilename,".psh");
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

char * R3DCar_LoadFileAdr__FPc(char *name)
{
  int size;
  char *pcVar1;
  
  size = filesize();
  pcVar1 = Platform_TempReserveMemory__FiPc(size,"bigfile");
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

void R3DCar_GetCarName__FPcii(char *filename,int carType,int country)
{
  sprintf(filename,"zz%s",&GameSetup_gCarNames + carType * 5);
  if (carType - 0x16U < 6) {
    filename[2] = "ccbfgacbfgbfgau"[(uint)(byte)(&R3DCar_CopIndex)[country + (carType - 0x16U) * 5]]
    ;
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
					// 		char *shpfiles[4]; // stack offset -56
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

void R3DCar_Instantiate3DCar__FP8Car_tObji(Car_tObj *carObj,int index)
{
  byte bVar1;
  undefined uVar2;
  ushort uVar3;
  short sVar4;
  Transformer_zScene *pTVar5;
  char *pcVar6;
  ulong *puVar7;
  GameSetup_tCarData *pGVar8;
  char *__src;
  uint uVar9;
  int iVar10;
  char **ppcVar11;
  int iVar12;
  int carType;
  uint uVar13;
  char acStack256 [16];
  char acStack240 [16];
  char acStack224 [104];
  char acStack120 [15];
  char acStack105 [49];
  char *local_38 [4];
  
  carType = carObj->carInfo->carType;
  if (5 < carType - 0x16U) {
    carObj->carInfo->Country = 0;
  }
  if (iGp00000dd8 == 0) {
    pGVar8 = carObj->carInfo;
    *(ushort *)&carObj->audio[6].type = (&DAT_801135cc)[index * 0x5a] & 0xf;
    *(char *)((int)(carObj->render).palCopyNum + 0x11) =
         *(char *)&pGVar8->EngineMods + *(char *)&pGVar8->WeightTransfer * '\x02' +
         *(char *)&pGVar8->GroundEffects * '\x04';
    if (carType - 0x10U < 3) {
      *(undefined *)((int)(carObj->render).palCopyNum + 0x11) = 7;
    }
  }
  (carObj->render).palCopyNum[0xf] = 0;
  *(undefined *)((carObj->render).palCopyNum + 8) = 0;
  if (carType < 0x1c) {
    if (iGp00000dd8 == 0) {
      if (DAT_801131f8 == 1) {
        *(undefined *)((carObj->render).palCopyNum + 8) = 1;
      }
      else {
        if (((carObj->carFlags & 4U) == 0) && (2 < Cars_gNumCars - Cars_gNumTrafficCars)) {
          *(undefined *)((carObj->render).palCopyNum + 8) = 1;
        }
        else {
          (carObj->render).palCopyNum[0xf] = 1;
        }
      }
    }
    else {
      (carObj->render).palCopyNum[0xf] = 1;
    }
  }
  (carObj->render).palCopyNum[9] = 0;
  (carObj->render).palCopyNum[10] = 0;
  if (iGp00000dd8 == 0) {
    if (DAT_80113240 != 0) {
      (carObj->render).palCopyNum[9] = 0x33;
      (carObj->render).palCopyNum[10] = 2;
    }
  }
  else {
    (carObj->render).palCopyNum[9] = 0x33;
  }
  pGVar8 = carObj->carInfo;
  (carObj->render).palCopyNum[0xe] = (short)carType;
  (carObj->render).palCopyNum[0xd] = (short)carType;
  (carObj->render).sub_ot = (ulong *)0x0;
  *(undefined *)((int)&carObj->audio[6].type + 2) = *(undefined *)&pGVar8->Country;
  if (iGp00000dd8 != 0) {
    sVar4 = (carObj->render).palCopyNum[0xf];
    (carObj->render).palCopyNum[0xd] = -1;
    uVar3 = (carObj->render).palCopyNum[0xe];
    *(undefined4 *)&(carObj->render).inside = 0;
    (carObj->render).palCopyNum[0xf] = sVar4 << 4;
    uVar2 = *(undefined *)((int)&carObj->audio[6].type + 2);
    (carObj->render).palCopyNum[0xe] = uVar3 | 0x80;
    *(undefined *)((int)&carObj->audio[6].type + 3) = uVar2;
    uGp00000e38 = 0xffffffff;
    pcGp00000e64 = (char *)0x0;
    return;
  }
  R3DCar_GetCarName__FPcii(acStack256,carType,carObj->carInfo->Country);
  strcpy(acStack224,(char *)0x0);
  strcat(acStack224,acStack256);
  if (((carObj->render).palCopyNum[0xf] & 1U) == 0) {
    if ((*(char *)((carObj->render).palCopyNum + 8) != '\0') && (carType < 0x1c)) {
      __src = "s";
      goto LAB_800af158;
    }
  }
  else {
    __src = "h";
LAB_800af158:
    strcat(acStack224,__src);
  }
  strcat(acStack224,".viv");
  pcGp00000e64 = R3DCar_LoadFileAdr__FPc(acStack224);
  strcpy(acStack240,acStack256);
  if (((carObj->render).palCopyNum[0xf] & 1U) == 0) {
    if ((*(char *)((carObj->render).palCopyNum + 8) == '\0') || (0x1b < carType)) goto LAB_800af1d8;
    __src = "s";
  }
  else {
    __src = "h";
  }
  strcat(acStack240,__src);
LAB_800af1d8:
  if ((Transformer_zScene *)(&_R3DCar_LoadedScenePointer)[carType] == (Transformer_zScene *)0x0) {
    uVar3 = *(ushort *)&carObj->audio[6].type;
    pTVar5 = R3DCar_ReadInCarData__FPcP8Car_tObj(acStack240,carObj);
    uVar13 = 0;
    *(Transformer_zScene **)(&_R3DCar_LoadedScenePointer + carType) = pTVar5;
    (&R3DCar_LoadedSceneCounter)[carType] = (&R3DCar_LoadedSceneCounter)[carType] + '\x01';
    (&R3DCar_LoadedSceneCountry)[carType] = *(undefined *)((int)&carObj->audio[6].type + 2);
    (&R3DCar_LoadedSceneColor)[((int)((uint)uVar3 << 0x10) >> 0x13) * 0x32 + carType] = uVar3 & 8;
  }
  else {
    bVar1 = *(byte *)((int)&carObj->audio[6].type + 2);
    if ((int)(char)(&R3DCar_LoadedSceneCountry)[carType] == (uint)bVar1) {
      uVar9 = (uint)*(ushort *)&carObj->audio[6].type;
      (&R3DCar_LoadedSceneCounter)[carType] = (&R3DCar_LoadedSceneCounter)[carType] + '\x01';
      iVar12 = (int)(uVar9 << 0x10) >> 0x13;
      uVar9 = uVar9 & 8;
      uVar13 = 0;
      if ((int)(short)(&R3DCar_LoadedSceneColor)[iVar12 * 0x32 + carType] == uVar9) {
        iVar12 = carType * 4 + iVar12 * 200;
        (carObj->render).palCopyNum[0x11] = *(short *)(&R3DCar_LoadedSceneVRam + iVar12);
        uVar13 = 1;
        (carObj->render).palCopyNum[0x12] = *(short *)(&DAT_80116bfa + iVar12);
      }
      else {
        (&R3DCar_LoadedSceneColor)[iVar12 * 0x32 + carType] = (short)uVar9;
      }
    }
    else {
      *(byte *)((int)&carObj->audio[6].type + 2) = bVar1 | 0x80;
      pTVar5 = R3DCar_ReadInCarData__FPcP8Car_tObj(acStack240,carObj);
      *(Transformer_zScene **)(&DAT_801169d0 + carType) = pTVar5;
      uVar13 = 0;
      (&DAT_80116aca)[carType] = (&DAT_80116aca)[carType] + '\x01';
    }
  }
  R3DCar_CalcCarDimensions__FP8Car_tObjP18Transformer_zScenei
            (carObj,(Transformer_zScene *)
                    (&_R3DCar_LoadedScenePointer)
                    [(uint)(*(byte *)((int)&carObj->audio[6].type + 2) >> 7) * 0x32 + carType],
             carType);
  if (carObj->carInfo->ColourChange != 0) {
    puVar7 = (ulong *)reservememadr("palCopy",0x28a0,0);
    (carObj->render).sub_ot = puVar7;
  }
  Texture_palNum = 0;
  if (carType < 0x1c) {
    if (((carObj->render).palCopyNum[0xf] & 1U) == 0) {
      __src = "";
    }
    else {
      __src = "h";
    }
    iVar12 = 1;
    R3DCar_GetFileName__FPcN20(acStack120,acStack256,__src);
    if (((carObj->render).palCopyNum[0xf] & 1U) != 0) {
      R3DCar_GetFileName__FPcN20(acStack105,acStack256,"i");
      iVar12 = 2;
    }
    if (*(short *)&carObj->audio[6].type < 8) {
      __src = "l";
    }
    else {
      __src = "d";
    }
    R3DCar_GetFileName__FPcN20(acStack120 + iVar12 * 0xf,acStack256,__src);
    R3DCar_GetFileName__FPcN20(acStack120 + (iVar12 + 1) * 0xf,acStack256,"g");
    iVar10 = 0;
    if (iVar12 != -2) {
      ppcVar11 = local_38;
      __src = acStack120;
      do {
        iVar10 = iVar10 + 1;
        pcVar6 = (char *)locatebig(pcGp00000e64,__src);
        *ppcVar11 = pcVar6;
        ppcVar11 = ppcVar11 + 1;
        __src = __src + 0xf;
      } while (iVar10 < iVar12 + 2);
    }
    pGVar8 = carObj->carInfo;
    iVar12 = 1;
    *(undefined2 *)&(carObj->render).medOnly = 0;
    (carObj->render).palCopyNum[0x13] = 0;
    CarIO_CreateLicense__FPcii(pGVar8->license,carType,0);
    Texture_CarColor =
         ((uint)*(ushort *)&carObj->audio[6].type & 7) +
         ((uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 2) * 4;
    CarIO_ReadInCarTextureData__FPcP8Car_tObjii(local_38[0],carObj,uVar13 | uVar13 << 1,0);
    if (((carObj->render).palCopyNum[0xf] & 1U) != 0) {
      iVar12 = 2;
      CarIO_ReadInCarTextureData__FPcP8Car_tObjii(local_38[1],carObj,0x19,0);
    }
    Texture_CarColor =
         ((uint)*(ushort *)&carObj->audio[6].type & 7) +
         ((uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 1) * 8;
    CarIO_ReadInCarTextureData__FPcP8Car_tObjii(local_38[iVar12],carObj,uVar13 << 1 | 0x91,0);
    CarIO_CleanUpLicense__Fi(0);
    uVar3 = *(ushort *)&carObj->audio[6].type;
    *(undefined2 *)&(carObj->render).sub_otSize = (undefined2)Texture_palNum;
    Texture_CarColor =
         ((uint)uVar3 & 7) + ((uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 2) * 4;
    CarIO_UpdateCarTextureData__FPcP8Car_tObji(local_38[iVar12 + 1],carObj,0);
  }
  else {
    strcpy(acStack120,acStack240);
    strcat(acStack120,".psh");
    __src = (char *)locatebig(pcGp00000e64,acStack120);
    Texture_CarColor = (uint)*(ushort *)&carObj->audio[6].type & 7;
    CarIO_ReadInCarTextureData__FPcP8Car_tObjii(__src,carObj,uVar13 | 0x88,0);
    *(undefined2 *)&(carObj->render).sub_otSize = (undefined2)Texture_palNum;
  }
  if (uVar13 == 0) {
    carType = carType * 4 + ((int)((uint)*(ushort *)&carObj->audio[6].type << 0x10) >> 0x13) * 200;
    *(short *)(&R3DCar_LoadedSceneVRam + carType) = (carObj->render).palCopyNum[0x11];
    *(short *)(&DAT_80116bfa + carType) = (carObj->render).palCopyNum[0x12];
  }
  puVar7 = (carObj->render).sub_ot;
  if (puVar7 != (ulong *)0x0) {
    resizememadr(puVar7,(int)*(short *)&(carObj->render).sub_otSize * 0x208);
  }
  pcGp00000e64 = (char *)0x0;
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
  uVar10 = (uint)(&DAT_8010f320)[cviewP * 0x44] >> 0x19 & 3;
  if ((((((Car_tObj *)(&Camera_gInfo)[cviewP * 0x44] != carObj) || ((carObj->carFlags & 4U) == 0))
       || (((uint)(&DAT_8010f320)[cviewP * 0x44] >> 0x1b & 1) == 0)) ||
      ((cviewP = Camera_GetMode__Fi(cviewP), cviewP != 0 &&
       (((((uint)(&DAT_8010f320)[Vi->player * 0x44] >> 0x1b & 1) == 0 ||
         (cviewP = Camera_GetMode__Fi(Vi->player), cviewP != 1)) ||
        (bVar2 = true, ((carObj->render).palCopyNum[0xf] & 1U) != 0)))))) &&
     (cviewP = 0xc0000, (carObj->N).active != '\0')) {
    iVar11 = 0x3c0000;
    bVar1 = Replay_ReplayMode == 2;
    (carObj->render).palCopyNum[0x10] = 0;
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
        (carObj->render).palCopyNum[0x10] = 1;
      }
      if (iVar11 < iVar3) {
        (carObj->render).palCopyNum[0x10] = 2;
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
      (carObj->render).palCopyNum[0x10] = 3;
      return iVar3;
    }
  }
LAB_800afab4:
  (carObj->render).palCopyNum[0x10] = -1;
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

void R3DCar_TurnHeadLightOn__FP8Car_tObji(Car_tObj *carObj,int tail)
{
  ushort uVar1;
  
  (carObj->render).palCopyNum[9] = (carObj->render).palCopyNum[9] | 0x11;
  if (tail != 0) {
    (carObj->render).palCopyNum[10] = (carObj->render).palCopyNum[10] | 2;
  }
  uVar1 = (carObj->render).palCopyNum[9];
  if ((uVar1 & 8) == 0) {
    (carObj->render).palCopyNum[9] = uVar1 | 2;
    uVar1 = (carObj->render).palCopyNum[9];
  }
  if ((uVar1 & 0x80) == 0) {
    (carObj->render).palCopyNum[9] = uVar1 | 0x20;
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

void R3DCar_TurnHeadLightOff__FP8Car_tObji(Car_tObj *carObj,int head)
{
  ushort uVar1;
  
  (carObj->render).palCopyNum[10] = (carObj->render).palCopyNum[10] & 0xfd;
  if (head != 0) {
    uVar1 = (carObj->render).palCopyNum[9];
    (carObj->render).palCopyNum[9] = uVar1 & 0xee;
    if ((uVar1 & 8) == 0) {
      (carObj->render).palCopyNum[9] = uVar1 & 0xec;
    }
    uVar1 = (carObj->render).palCopyNum[9];
    if ((uVar1 & 0x80) == 0) {
      (carObj->render).palCopyNum[9] = uVar1 & 0xdf;
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
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  matrixtdef *m1;
  matrixtdef *m2;
  byte bVar14;
  char cVar15;
  int iVar16;
  Car_tObj *pCVar17;
  coorddef *t;
  short sVar18;
  int iVar19;
  int iVar20;
  matrixtdef mStack448;
  matrixtdef mStack408;
  matrixtdef local_170;
  matrixtdef mStack328;
  matrixtdef mStack288;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_e8;
  int local_e0;
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
  local_38 = *(int *)(carObj->render).signalLight;
  iVar19 = (int)(carObj->render).palCopyNum[0xd];
  local_34 = (uint)(*(byte *)((int)&carObj->audio[6].type + 2) >> 7);
  if ((iVar19 < 0x1c) &&
     (local_30 = SEXT14((char)(&R3DCar_ForceDriveSide)[iVar19]), (int)local_30 < 0)) {
    local_30 = 0;
  }
  if (false) {
    local_30 = local_30 ^ 1;
  }
  uGp00000e70 = local_30;
  bVar1 = iVar19 - 0x16U < 6;
  if ((carObj->render).palCopyNum[0x10] < 0) {
    uGp00000e70 = local_30;
    return;
  }
  uVar5 = (carObj->render).palCopyNum[9];
  if (((uVar5 & 8) == 0) && (0x1e0000 < (carObj->N).damage[0])) {
    if ((uVar5 & 0x44) == 0) {
      uVar4 = 0xc;
LAB_800afcf8:
      (carObj->render).palCopyNum[9] = uVar5 | uVar4;
    }
    else {
      uVar4 = 8;
      if ((uVar5 & 2) != 0) goto LAB_800afcf8;
    }
    uVar5 = (carObj->render).palCopyNum[9];
  }
  if (((uVar5 & 0x80) == 0) && (0x1e0000 < (carObj->N).damage[2])) {
    if ((uVar5 & 0x44) == 0) {
      uVar4 = uVar5 | 0xc0;
    }
    else {
      uVar4 = uVar5 | 0x80;
      if ((uVar5 & 0x20) == 0) goto LAB_800afd40;
    }
    (carObj->render).palCopyNum[9] = uVar4;
  }
LAB_800afd40:
  if (bVar1) {
    if ((carObj->desiredLatPos & 2U) == 0) {
      if (((carObj->render).palCopyNum[0xb] & 0x80U) != 0) {
        bVar14 = (carObj->control).lights;
        (carObj->render).palCopyNum[0xb] = 0;
        (carObj->render).palCopyNum[0xc] = 0;
        if ((bVar14 & 2) == 0) {
          R3DCar_TurnHeadLightOff__FP8Car_tObji(carObj,(uint)((bVar14 & 4) == 0));
        }
      }
    }
    else {
      if (((carObj->render).palCopyNum[0xb] & 0x80U) == 0) {
        (carObj->render).palCopyNum[0xb] = 0x80;
        bVar14 = (carObj->control).lights;
        (carObj->render).palCopyNum[0xc] = 0x88;
        if ((bVar14 & 2) == 0) {
          R3DCar_TurnHeadLightOn__FP8Car_tObji(carObj,1);
        }
      }
    }
  }
  if (iGp00000e5c != 0) {
    uVar5 = (carObj->render).palCopyNum[0xb];
    if ((uVar5 & 0x80) != 0) {
      (carObj->render).palCopyNum[0xb] = uVar5 + 1 & 0x8f;
    }
    uVar5 = (carObj->render).palCopyNum[0xc];
    if ((uVar5 & 0x80) != 0) {
      (carObj->render).palCopyNum[0xc] = uVar5 + 1 & 0x8f;
    }
  }
  if (iVar19 < 0x1c) {
    if ((*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 2) != 0) {
      local_38 = *(int *)&(carObj->render).currentCarType;
    }
  }
  else {
    local_38 = 0;
  }
  if (((carObj->render).palCopyNum[0x10] == 0) &&
     ((0x1b < iVar19 || (*(char *)((carObj->render).palCopyNum + 8) != '\0')))) {
    (carObj->render).palCopyNum[0x10] = 1;
  }
  if (((carObj->render).palCopyNum[0x10] == 2) && (iVar19 == 0x1c)) {
    (carObj->render).palCopyNum[0x10] = 1;
  }
  local_f8 = (carObj->N).position.x - (Vi->cview).translation.x;
  iVar20 = (int)(carObj->render).palCopyNum[0x10] + 2;
  local_f4 = (carObj->N).position.y - (Vi->cview).translation.y;
  local_f0 = (carObj->N).position.z - (Vi->cview).translation.z;
  iVar16 = local_f8;
  if (local_f8 < 0) {
    iVar16 = local_f8 + 0xff;
  }
  iVar6 = (carObj->N).orientMat.m[0];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar13 = local_f4;
  if (local_f4 < 0) {
    iVar13 = local_f4 + 0xff;
  }
  iVar7 = (carObj->N).orientMat.m[1];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar11 = local_f0;
  if (local_f0 < 0) {
    iVar11 = local_f0 + 0xff;
  }
  iVar8 = (carObj->N).orientMat.m[2];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  local_e8 = (iVar16 >> 8) * (iVar6 >> 8) + (iVar13 >> 8) * (iVar7 >> 8) +
             (iVar11 >> 8) * (iVar8 >> 8);
  iVar6 = (carObj->N).orientMat.m[6];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar7 = (carObj->N).orientMat.m[7];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar11 = local_f0;
  if (local_f0 < 0) {
    iVar11 = local_f0 + 0xff;
  }
  iVar8 = (carObj->N).orientMat.m[8];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  local_e0 = (iVar16 >> 8) * (iVar6 >> 8) + (iVar13 >> 8) * (iVar7 >> 8) +
             (iVar11 >> 8) * (iVar8 >> 8);
  iVar16 = fixedatan();
  sGp00000e58 = 0x1000 - (short)(iVar16 >> 4);
  m2 = &(carObj->N).orientMat;
  if (iVar19 < 0x1c) {
    m1 = &local_170;
    R3DCar_MATRIX3DT_Copy__FPiT0((int *)m2,(int *)m1);
    if (local_30 != 0) {
      local_170.m[0] = -local_170.m[0];
      local_170.m[2] = -local_170.m[2];
      local_170.m[1] = -local_170.m[1];
    }
    iVar16 = carObj->audio[6].surface2;
    if (local_30 != 0) {
      iVar16 = -iVar16;
    }
    fixedxformz(&mStack448,carObj->audio[6].surface2);
    fixedxformx(&mStack176,carObj->audio[6].surface1 + 100);
    Math_fasttransmult__FP10matrixtdefN20(&mStack448,&mStack176,&mStack448);
    Math_fasttransmult__FP10matrixtdefN20(&mStack448,m2,&mStack448);
    m2 = (matrixtdef *)(&local_f8 + 0x20);
    fixedxformz(m2,iVar16);
    Math_fasttransmult__FP10matrixtdefN20(m2,&mStack176,m2);
    Math_fasttransmult__FP10matrixtdefN20(m2,m1,m1);
    Math_fasttransmult__FP10matrixtdefN20(&mStack448,&(Vi->cview).mrotationInv,&mStack408);
    m2 = &mStack328;
  }
  else {
    m1 = &mStack448;
    fixedxformz(m1,carObj->audio[6].surface2);
    fixedxformx((matrixtdef *)&local_f8,carObj->audio[6].surface1);
    Math_fasttransmult__FP10matrixtdefN20(m1,(matrixtdef *)&local_f8,m1);
    Math_fasttransmult__FP10matrixtdefN20(m1,&(carObj->N).orientMat,m1);
    m2 = &mStack408;
  }
  Math_fasttransmult__FP10matrixtdefN20(m1,&(Vi->cview).mrotationInv,m2);
  iVar16 = Replay_ReplayMode;
  if ((DAT_8011e0cc == 0) && (DAT_8011e0d4 == 0)) {
    iVar6 = 0;
    if (iVar19 == 0x1c) {
      iVar16 = (carObj->N).wheelRot[1];
      (carObj->N).wheelRot[0] = (carObj->N).wheelRot[0] + 0x1800U & 0xffff;
      (carObj->N).wheelRot[1] = iVar16 + 0x1800U & 0xffff;
    }
    else {
      iVar13 = carObj->wheelSpin;
      if (iVar13 < 0) {
        iVar13 = -iVar13;
      }
      pCVar17 = carObj;
      while (iVar6 < 2) {
        if (iVar16 == 2) {
          iVar7 = (carObj->linearVel_ch).z >> (8U - DAT_80117030 & 0x1f);
        }
        else {
          iVar7 = (carObj->linearVel_ch).z >> 6;
        }
        if (iVar6 == 0) {
          if (carObj->frontWheelSpin != 0) goto LAB_800b0220;
        }
        else {
          if (iVar13 - 1U < 2) {
LAB_800b0220:
            bVar14 = (carObj->control).gear;
            if (bVar14 != 1) {
              iVar8 = carObj->specs->velToRpmRatio[(uint)bVar14];
              iVar11 = carObj->flywheelRpm << 0x10;
              iVar7 = iVar11 / iVar8;
              if (iVar8 == 0) {
                trap(0x1c00);
              }
              if ((iVar8 == -1) && (iVar11 == -0x80000000)) {
                trap(0x1800);
              }
              if (iVar16 == 2) {
                iVar7 = iVar7 << (DAT_80117030 + 7U & 0x1f);
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
        iVar11 = iVar7;
        if (iVar7 < -0x1800) {
          iVar11 = -0x1800;
        }
        if (0x1800 < iVar7) {
          iVar11 = 0x1800;
        }
        iVar6 = iVar6 + 1;
        (pCVar17->N).wheelRot[0] = (pCVar17->N).wheelRot[0] + iVar11 & 0xffff;
        pCVar17 = (Car_tObj *)&(pCVar17->N).oldSlice;
      }
    }
  }
  iVar16 = (carObj->linearVel_ch).z;
  iVar6 = (carObj->control).steering;
  if (0x1e0000 < iVar16) {
    uVar9 = fixedmult(iVar16,0x888);
    iVar16 = fixeddiv(iVar6 << 0x10,uVar9);
    iVar6 = iVar16 >> 0x10;
    if (iVar16 < 0) {
      iVar6 = iVar16 + 0xffff >> 0x10;
    }
  }
  fixedxformy(&mStack288,iVar6 << 5);
  if (((carObj->control).desiredBrakeLevel == '\0') || ((carObj->control).hanno != 0)) {
    uVar5 = (carObj->render).palCopyNum[10] & 0xfe;
  }
  else {
    uVar5 = (carObj->render).palCopyNum[10] | 1;
  }
  (carObj->render).palCopyNum[10] = uVar5;
  iVar16 = 0;
  if (iVar19 < 0x1c) {
    while (iVar16 < 0x39) {
      bVar14 = (&R3DCar_ObjectInfo)[iVar20];
      if (false) goto LAB_800b05d4;
      switch(((int)(char)bVar14 + -2) * 0x10000 >> 0x10) {
      case 0:
      case 7:
        uVar10 = (uint)(ushort)(carObj->render).palCopyNum[0xf] & 1;
        goto LAB_800b05c4;
      case 1:
      case 2:
        if ((carObj->render).palCopyNum[0xf] == 0) {
          bVar14 = 0;
        }
        break;
      case 3:
        uVar10 = (uint)*(ushort *)((int)&(carObj->render).world_otz + 2) & 1;
        goto LAB_800b05c4;
      case 4:
        uVar10 = (uint)*(ushort *)((int)&(carObj->render).world_otz + 2) & 2;
        goto LAB_800b05c4;
      case 5:
        uVar10 = (uint)(ushort)(carObj->render).palCopyNum[9];
LAB_800b0500:
        if ((uVar10 & 2) == 0) {
          bVar14 = 0;
        }
        break;
      case 6:
        if (((carObj->render).palCopyNum[9] & 0x20U) == 0) {
          bVar14 = 0;
        }
        break;
      case 9:
        uVar10 = (uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 4;
        goto LAB_800b05c4;
      case 10:
        if ((*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 4) == 0) {
          bVar14 = 0;
        }
        break;
      case 0xb:
        uVar10 = (uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 1;
LAB_800b05c4:
        if (uVar10 != 0) {
switchD_800b03ec_caseD_f:
          bVar14 = 0;
        }
        break;
      case 0xc:
        if ((*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 1) == 0) {
          bVar14 = 0;
        }
        break;
      case 0xd:
joined_r0x800b0524:
        if (bVar1) {
LAB_800b05b8:
          uVar10 = (uint)*(ushort *)((int)&(carObj->render).world_otz + 2) & 4;
          goto LAB_800b05c4;
        }
        break;
      case 0xe:
        if (bVar1) goto LAB_800b05b8;
      case 0xf:
        goto switchD_800b03ec_caseD_f;
      case 0x10:
        if ((carObj->render).palCopyNum[10] == 0) {
LAB_800b04ec:
          if (bVar1) {
            uVar10 = carObj->desiredLatPos;
            goto LAB_800b0500;
          }
          goto switchD_800b03ec_caseD_f;
        }
        break;
      case 0x11:
        if ((carObj->control).gear != '\0') goto LAB_800b04ec;
        break;
      case 0x12:
        if ((*(uint *)((carObj->render).palCopyNum + 0xb) & 0x800080) != 0) goto joined_r0x800b0524;
        goto switchD_800b03ec_caseD_f;
      case 0x13:
        if (bVar1) {
          if ((*(uint *)((carObj->render).palCopyNum + 0xb) & 0x800080) != 0) goto LAB_800b05b8;
          goto switchD_800b03ec_caseD_f;
        }
        if ((*(uint *)((carObj->render).palCopyNum + 0xb) & 0x800080) != 0) break;
        if ((&R3DCar_SignalBrakeFlare)[iVar19] == '\0') goto switchD_800b03ec_caseD_f;
        bVar2 = iVar16 - 6U < 6;
        if ((carObj->render).palCopyNum[10] == 0) {
          bVar14 = 0;
        }
        goto LAB_800b05d8;
      case 0x14:
        if (((carObj->render).palCopyNum[9] & 0x11U) == 0) {
          bVar14 = 0;
        }
      }
LAB_800b05d4:
      bVar2 = iVar16 - 6U < 6;
LAB_800b05d8:
      if (bVar2) {
        switch((uint)(&switchdataD_80056470)[iVar16 + -6] & 0xfffffffe) {
        case 0x800b05f4:
          uVar5 = *(ushort *)((int)&(carObj->render).world_otz + 2) & 0x18;
          break;
        case 0x800b0600:
          if ((*(ushort *)((int)&(carObj->render).world_otz + 2) & 4) != 0) {
            bVar14 = (&R3DCar_DamageSpoiler)[iVar19] & 1;
            if ((*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 4) == 0) {
              bVar14 = (&R3DCar_DamageSpoiler)[iVar19] & 0x80;
            }
            if (bVar14 != 0) {
              bVar14 = 0xb;
            }
          }
          goto LAB_800b0664;
        case 0x800b0648:
          uVar5 = *(ushort *)((int)&(carObj->render).world_otz + 2) & 4;
        }
        if (uVar5 != 0) {
          bVar14 = 0;
        }
      }
LAB_800b0664:
      (&R3DCar_ObjectVisible)[iVar16] = bVar14;
      iVar20 = iVar20 + 6;
      iVar16 = iVar16 + 1;
    }
  }
  else {
    while (iVar16 < 0x39) {
      cVar15 = (&R3DCar_ObjectInfo)[iVar20];
      if (cVar15 == '\x12') {
        uVar10 = SEXT24((carObj->render).palCopyNum[10]);
code_r0x800b06f4:
        if (uVar10 == 0) {
LAB_800b06fc:
          cVar15 = '\0';
        }
      }
      else {
        if ('\x12' < cVar15) {
          if (cVar15 == '\x16') {
            uVar10 = (uint)(ushort)(carObj->render).palCopyNum[9] & 0x11;
            goto code_r0x800b06f4;
          }
          goto LAB_800b06fc;
        }
        if (cVar15 != '\x01') {
          cVar15 = '\0';
        }
      }
      if ((iVar19 == 0x1c) && (iVar16 == 0x20)) {
        cVar15 = '\x01';
      }
      (&R3DCar_ObjectVisible)[iVar16] = cVar15;
      iVar20 = iVar20 + 6;
      iVar16 = iVar16 + 1;
    }
  }
  iVar13 = 0;
  iVar6 = *(int *)(&_R3DCar_LoadedScenePointer)[local_34 * 0x32 + iVar19];
  local_2c = &(Vi->cview).mrotationInv;
  iVar16 = *(int *)(iVar6 + 4);
  iVar20 = *(int *)(iVar6 + 8);
  iVar6 = *(int *)(iVar6 + 0xc);
  iVar7 = 0;
  while (iVar13 < 0x39) {
    iVar11 = *(int *)((&_R3DCar_LoadedScenePointer)[local_34 * 0x32 + iVar19] + iVar13 * 4);
    if ((*(short *)(iVar11 + 2) == 0) || ((&R3DCar_ObjectVisible)[iVar13] == '\0'))
    goto LAB_800b0be4;
    if (iVar13 < 0x2f) {
      local_bc = local_38 - *(int *)&carObj->render;
    }
    else {
      iVar8 = carObj->wheel[(int)*(short *)(&R3DCar_Suspension + (iVar13 + -0x2f) * 2)].
              impactCompression;
      if (iVar8 < 1) {
        local_bc = -0x1eb8;
        if (-0x1eb9 < iVar8) {
          local_bc = iVar8;
        }
      }
      else {
        local_bc = iVar8;
        if (0x1eb8 < iVar8) {
          local_bc = 0x1eb8;
        }
      }
    }
    local_c0 = *(int *)(iVar11 + 4) - iVar16;
    local_bc = (*(int *)(iVar11 + 8) - iVar20) - local_bc;
    local_b8 = *(int *)(iVar11 + 0xc) - iVar6;
    if (iVar13 < 0x2f) {
      if (((0x1b < iVar19) || (iVar13 < 0x23)) || (m2 = &local_170, 0x28 < iVar13)) {
        m2 = &mStack448;
      }
    }
    else {
      m2 = &(carObj->N).orientMat;
    }
    transform(&local_f8 + 0x38,m2,&local_f8 + 0x28);
    local_c0 = ((carObj->N).position.x + local_d0) - (Vi->cview).translation.x;
    local_bc = ((carObj->N).position.y + local_cc) - (Vi->cview).translation.y;
    local_b8 = ((carObj->N).position.z + local_c8) - (Vi->cview).translation.z;
    transform(&local_f8 + 0x38,local_2c,iGp00000e40 + iVar13 * 0xc);
    if (iVar19 == 0x1c) {
      if (iVar13 == 0x1f) {
        fixedxformy((matrixtdef *)&local_f8,(carObj->N).wheelRot[0]);
        Math_fasttransmult__FP10matrixtdefN20
                  ((matrixtdef *)&local_f8,&mStack448,(matrixtdef *)&local_f8);
        Math_fasttransmult__FP10matrixtdefN20
                  ((matrixtdef *)&local_f8,local_2c,(matrixtdef *)(iGp00000e3c + 0x45c));
      }
      else {
        if (iVar13 != 0x23) goto switchD_800b0a34_caseD_29;
        fixedxformx((matrixtdef *)&local_f8,(carObj->N).wheelRot[1]);
        Math_fasttransmult__FP10matrixtdefN20
                  ((matrixtdef *)&local_f8,&mStack448,(matrixtdef *)&local_f8);
        Math_fasttransmult__FP10matrixtdefN20
                  ((matrixtdef *)&local_f8,local_2c,(matrixtdef *)(iGp00000e3c + 0x4ec));
      }
      goto LAB_800b0be4;
    }
    if (false) {
switchD_800b0a34_caseD_29:
      m2 = &mStack408;
      goto LAB_800b0bd8;
    }
    switch(iVar13) {
    case 0x23:
    case 0x24:
      m2 = &mStack328;
      break;
    case 0x25:
      iVar11 = (carObj->control).steering;
      if (local_30 != 0) {
        iVar11 = -iVar11;
      }
      fixedxformz((matrixtdef *)&local_f8,iVar11 * -0x38);
      goto LAB_800b0ba4;
    case 0x26:
      iVar8 = carObj->audio[6].surface1;
      iVar11 = carObj->audio[6].surface2 * 3 >> 1;
      if (local_30 != 0) {
        iVar11 = -iVar11;
      }
      fixedxformz(&mStack136,iVar11);
      m1 = &mStack96;
      fixedxformx(m1,iVar8 << 3);
      m2 = &mStack136;
      goto LAB_800b0b98;
    case 0x27:
    case 0x28:
      iVar11 = (carObj->control).steering;
      iVar8 = -0xc;
      if (local_30 != 0) {
        iVar11 = -iVar11;
      }
      iVar3 = -0xc;
      if (iVar13 == 0x27) {
        iVar8 = 0xc;
        iVar3 = 0xc;
      }
      fixedxformx(&mStack176,iVar11 * iVar3);
      if (0 < iVar11) {
        iVar11 = -iVar11;
      }
      fixedxformy(&mStack136,iVar11 * (iVar8 >> 1));
      m2 = &mStack176;
      m1 = &mStack136;
LAB_800b0b98:
      Math_fasttransmult__FP10matrixtdefN20(m2,m1,(matrixtdef *)&local_f8);
LAB_800b0ba4:
      m2 = &local_170;
      goto LAB_800b0ba8;
    default:
      goto switchD_800b0a34_caseD_29;
    case 0x2f:
      fixedxformx((matrixtdef *)&local_f8,(carObj->N).wheelRot[0]);
      Math_fasttransmult__FP10matrixtdefN20
                ((matrixtdef *)&local_f8,&mStack288,(matrixtdef *)&local_f8);
      m2 = &(carObj->N).orientMat;
      goto LAB_800b0ba8;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
      m2 = (matrixtdef *)(iGp00000e3c + 0x69c);
      break;
    case 0x35:
      fixedxformx((matrixtdef *)&local_f8,(carObj->N).wheelRot[1]);
      m2 = &(carObj->N).orientMat;
      goto LAB_800b0ba8;
    case 0x36:
      m2 = (matrixtdef *)(iGp00000e3c + 0x774);
      break;
    case 0x37:
      fixedxformx((matrixtdef *)&local_f8,(carObj->N).wheelRot[1]);
      m2 = &(carObj->N).orientMat;
LAB_800b0ba8:
      Math_fasttransmult__FP10matrixtdefN20((matrixtdef *)&local_f8,m2,(matrixtdef *)&local_f8);
      Math_fasttransmult__FP10matrixtdefN20
                ((matrixtdef *)&local_f8,&(Vi->cview).mrotationInv,
                 (matrixtdef *)(iGp00000e3c + iVar7));
      goto LAB_800b0be4;
    case 0x38:
      m2 = (matrixtdef *)(iGp00000e3c + 0x7bc);
    }
LAB_800b0bd8:
    R3DCar_MATRIX3DT_Copy__FPiT0((int *)m2,(int *)(iGp00000e3c + iVar7));
LAB_800b0be4:
    iVar7 = iVar7 + 0x24;
    iVar13 = iVar13 + 1;
  }
  m2 = &(Vi->cview).mrotationInv;
  t = &(Vi->cview).translationInv;
  TrsProj_TransformProjectVertex__FP10matrixtdefP8coorddefiT1P12Draw_tVertex
            (m2,t,1,&(carObj->N).position,(Draw_tVertex *)&R3DCar_center);
  if ((cGp00000e50 == '\0') || ((carObj->N).simOptz != '\0')) {
    uGp00000e4c = 0;
  }
  else {
    Newton_CalcRealShadowCoordinates__FP8Car_tObji(carObj,0);
    TrsProj_TransformProjectVertex__FP10matrixtdefP8coorddefiT1P12Draw_tVertex
              (m2,t,4,(carObj->N).shadowCoord,(Draw_tVertex *)&R3DCar_shadowVertex);
    uGp00000e4c = 1;
  }
  if ((DAT_8011e0cc == 0) && (DAT_8011e0d4 == 0)) {
    if (Replay_ReplayMode == 2) {
      (carObj->N).positionXZ =
           (carObj->N).positionXZ +
           (short)((carObj->linearVel_ch).z >> (0x12U - DAT_80117030 & 0x1f));
    }
    else {
      (carObj->N).positionXZ =
           (carObj->N).positionXZ + *(short *)((int)&(carObj->linearVel_ch).z + 2);
    }
  }
  iVar19 = DrawC_gShadowMax;
  iVar16 = 0;
  sVar18 = 0;
  if (0 < DrawC_gEnvMapMax) {
    psVar12 = _DrawC_gEnvMap;
    do {
      sVar18 = (short)iVar16;
      if ((carObj->N).simRoadInfo.slice < *psVar12) break;
      iVar16 = iVar16 + 1;
      sVar18 = (short)iVar16;
      psVar12 = psVar12 + 3;
    } while (iVar16 < DrawC_gEnvMapMax);
  }
  (carObj->N).eIndexEnvMap = sVar18;
  iVar16 = 0;
  sVar18 = 0;
  if (0 < iVar19) {
    psVar12 = _DrawC_gShadow;
    do {
      sVar18 = (short)iVar16;
      if ((carObj->N).simRoadInfo.slice < *psVar12) break;
      iVar16 = iVar16 + 1;
      sVar18 = (short)iVar16;
      psVar12 = psVar12 + 3;
    } while (iVar16 < iVar19);
  }
  (carObj->N).eIndexShadow = sVar18;
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
			// 		char *shpfiles[3]; // stack offset -56
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

void R3DCar_ReadInCarTextureMenu__FP8Car_tObjPcii( (Car_tObj *carObj,char *bigfile,int reload,int player)
{
  short sVar1;
  ulong *puVar2;
  char *pcVar3;
  Texture_pal8bit *palCopy;
  int carType;
  int iVar4;
  char *shpfile;
  char **ppcVar5;
  char acStack120 [16];
  char acStack104 [15];
  char acStack89 [33];
  char *local_38 [4];
  
  carType = (int)(carObj->render).palCopyNum[0xd];
  R3DCar_GetCarName__FPcii(acStack120,carType,carObj->carInfo->Country);
  if (reload != 0) {
    CarIO_ReleaseCarCluts__FP8Car_tObj(carObj);
  }
  if ((carObj->render).sub_ot == (ulong *)0x0) {
    puVar2 = (ulong *)reservememadr("palCopy",0x28a0,0);
    (carObj->render).sub_ot = puVar2;
  }
  DrawSync(0);
  Texture_palNum = 0;
  if (carType < 0x1c) {
    if (((carObj->render).palCopyNum[0xf] & 1U) == 0) {
      shpfile = "";
    }
    else {
      shpfile = "h";
    }
    carType = 1;
    R3DCar_GetFileName__FPcN20(acStack104,acStack120,shpfile);
    if (((carObj->render).palCopyNum[0xf] & 1U) != 0) {
      R3DCar_GetFileName__FPcN20(acStack89,acStack120,"i");
      carType = 2;
    }
    if (*(short *)&carObj->audio[6].type < 8) {
      shpfile = "l";
    }
    else {
      shpfile = "d";
    }
    R3DCar_GetFileName__FPcN20(acStack104 + carType * 0xf,acStack120,shpfile);
    iVar4 = 0;
    if (carType != -1) {
      ppcVar5 = local_38;
      shpfile = acStack104;
      do {
        pcVar3 = (char *)locatebig(bigfile,shpfile);
        *ppcVar5 = pcVar3;
        ppcVar5 = ppcVar5 + 1;
        iVar4 = iVar4 + 1;
        shpfile = shpfile + 0xf;
      } while (iVar4 < carType + 1);
    }
    *(undefined2 *)&(carObj->render).medOnly = 0;
    (carObj->render).palCopyNum[0x13] = 0;
    if (reload != 0) {
      reload = 0x11;
    }
    carType = 1;
    CarIO_ReadInCarTextureData__FPcP8Car_tObjii(local_38[0],carObj,reload,player);
    if (((carObj->render).palCopyNum[0xf] & 1U) != 0) {
      carType = 2;
      CarIO_ReadInCarTextureData__FPcP8Car_tObjii(local_38[1],carObj,0x19,player);
    }
    if (reload == 0) {
      reload = 0x91;
    }
    CarIO_ReadInCarTextureData__FPcP8Car_tObjii(local_38[carType],carObj,reload,player);
    *(undefined2 *)&(carObj->render).sub_otSize = (undefined2)Texture_palNum;
    DrawSync(0);
    Texture_CarColor =
         ((uint)*(ushort *)&carObj->audio[6].type & 7) +
         ((uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 2) * 4;
    Texture_ProcessPaletteCopy__FP15Texture_pal8bitii
              ((Texture_pal8bit *)(carObj->render).sub_ot,0,1);
    carType = 1;
    palCopy = (Texture_pal8bit *)(carObj->render).sub_ot;
    sVar1 = *(short *)&(carObj->render).sub_otSize;
    Texture_CarColor =
         ((uint)*(ushort *)&carObj->audio[6].type & 7) +
         ((uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 1) * 8;
  }
  else {
    strcpy(acStack104,acStack120);
    strcat(acStack104,".psh");
    shpfile = (char *)locatebig(bigfile,acStack104);
    *(undefined2 *)&(carObj->render).medOnly = 0;
    (carObj->render).palCopyNum[0x13] = 0;
    if (reload == 0) {
      carType = 0x80;
    }
    else {
      carType = 0x11;
    }
    CarIO_ReadInCarTextureData__FPcP8Car_tObjii(shpfile,carObj,carType,0);
    *(undefined2 *)&(carObj->render).sub_otSize = (undefined2)Texture_palNum;
    DrawSync(0);
    carType = 0;
    palCopy = (Texture_pal8bit *)(carObj->render).sub_ot;
    sVar1 = *(short *)&(carObj->render).sub_otSize;
    Texture_CarColor = (uint)*(ushort *)&carObj->audio[6].type & 7;
  }
  Texture_ProcessPaletteCopy__FP15Texture_pal8bitii(palCopy,carType,(int)sVar1);
  purgememadr(bigfile);
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

void R3DCar_InsertCarFacetMenu__FP8Car_tObjP13DRender_tView(Car_tObj *carObj,DRender_tView *Vi)
{
  byte bVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  int reload;
  int iVar7;
  undefined4 uVar8;
  Transformer_zScene *pTVar9;
  int iVar10;
  int iVar11;
  GameSetup_tCarData *pGVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  matrixtdef *m2;
  int iVar16;
  Transformer_zScene **ppTVar17;
  int carType;
  uint uVar18;
  matrixtdef mStack328;
  matrixtdef mStack288;
  matrixtdef local_f8;
  matrixtdef mStack208;
  uint local_a8;
  int local_a4;
  int local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  int local_84;
  int local_80;
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
  int local_2c;
  
  local_2c = 0;
  local_30 = *(int *)(carObj->render).signalLight;
  carType = (int)(carObj->render).palCopyNum[0xd];
  uVar18 = (uint)(*(byte *)((int)&carObj->audio[6].type + 2) >> 7);
  bVar4 = false;
  if ((carType < 0x1c) && (local_2c = (int)(char)(&R3DCar_ForceDriveSide)[carType], local_2c < 0)) {
    local_2c = 0;
  }
  carType = carObj->carInfo->carType;
  iGp00000e70 = local_2c;
  bVar3 = 5 < carType - 0x16U;
  if (bVar3) {
    carObj->carInfo->Country = 0;
  }
  (carObj->render).currentRoll =
       (&_R3DCar_subOtStart)[gFlip * 2 + (uint)((uGp00000dd8 & 0x80) != 0)] +
       ((carObj->N).objID & 0xfU) * 0x800;
  if ((uGp00000dd8 & 0x80) != 0) goto LAB_800b16f0;
  (carObj->render).currentHeight = 0x200;
  (carObj->render).pitchFactor = 0x100;
  (carObj->render).rollFactor = 0;
  *(undefined2 *)&(carObj->render).world_otz = 0;
  DrawC_gScreenMat._0_2_ = 0x1000;
  DAT_8011f4cc._2_2_ = 0;
  DAT_8011f4d4._0_2_ = 0;
  DrawC_gScreenMat._2_2_ = 0;
  DAT_8011f4d0._0_2_ = 0xf000;
  DAT_8011f4d4._2_2_ = 0;
  DAT_8011f4cc._0_2_ = 0;
  DAT_8011f4d0._2_2_ = 0;
  DAT_8011f4d8._0_2_ = 0x1000;
  DAT_8011f4dc = 0;
  DAT_8011f4e0 = 0;
  DAT_8011f4e4 = 0;
  (carObj->render).palCopyNum[0x10] = 0;
  if ((-1 < iGp00000e38) && (iGp00000e38 != Vi->player)) goto LAB_800b16f0;
  if (*(int *)&(carObj->render).inside == 0) {
    if ((uint)*(byte *)((int)&carObj->audio[6].type + 3) != carObj->carInfo->Country) {
      (carObj->render).palCopyNum[0xe] = (carObj->render).palCopyNum[0xe] | 0x80;
    }
    if (*(int *)&(carObj->render).inside != 0) goto LAB_800b141c;
    if ((int)(carObj->render).palCopyNum[0xe] != carType) {
      reload = AudioMus_Buffered__Fv();
      iVar7 = AudioMus_Threshold__Fv();
      if (iVar7 <= reload) {
        if (carType < 0x1c) {
          uVar6 = (carObj->render).palCopyNum[0xf] | 0x10;
        }
        else {
          uVar6 = (carObj->render).palCopyNum[0xf] & 0xef;
        }
        (carObj->render).palCopyNum[0xf] = uVar6;
        sprintf((char *)&local_a8,"zz%s",&GameSetup_gCarNames + carType * 5);
        if (!bVar3) {
          local_a8._0_3_ =
               CONCAT12("ccbfgacbfgbfgau"
                        [(uint)(byte)(&R3DCar_CopIndex)
                                     [carObj->carInfo->Country + (carType + -0x16) * 5]],
                        (undefined2)local_a8);
          local_a8 = local_a8 & 0xff000000 | (uint)(uint3)local_a8;
        }
        strcpy((char *)&local_98,(char *)0x0);
        strcat((char *)&local_98,(char *)&local_a8);
        if (((carObj->render).palCopyNum[0xf] & 0x10U) != 0) {
          strcat((char *)&local_98,"h");
        }
        strcat((char *)&local_98,".viv");
        uVar8 = asyncloadfile(&local_98,0x10);
        *(undefined4 *)&(carObj->render).inside = uVar8;
        iGp00000e38 = Vi->player;
        pGVar12 = carObj->carInfo;
        (carObj->render).palCopyNum[0xe] = (short)carType;
        *(undefined *)((int)&carObj->audio[6].type + 3) = *(undefined *)&pGVar12->Country;
      }
    }
    if (*(int *)&(carObj->render).inside != 0) goto LAB_800b141c;
  }
  else {
LAB_800b141c:
    reload = getasyncreadstatus(*(undefined4 *)&(carObj->render).inside);
    if ((reload < 1) && (reload != -1)) {
      if (reload == -2) {
LAB_800b14d4:
        uVar6 = (carObj->render).palCopyNum[0xe];
        *(undefined4 *)&(carObj->render).inside = 0;
LAB_800b14e0:
        (carObj->render).palCopyNum[0xe] = uVar6 | 0x80;
      }
    }
    else {
      if (((int)(carObj->render).palCopyNum[0xe] == carType) &&
         ((uint)*(byte *)((int)&carObj->audio[6].type + 3) == carObj->carInfo->Country)) {
        pcGp00000e64 = (char *)getasyncreadadr(*(undefined4 *)&(carObj->render).inside);
        if (pcGp00000e64 == (char *)0x0) {
          bVar4 = false;
          goto LAB_800b16f0;
        }
        *(undefined4 *)&(carObj->render).inside = 0;
        if (reload != -1) {
          iGp00000e38 = -1;
          goto LAB_800b14e4;
        }
        purgememadr(pcGp00000e64);
        uVar6 = (carObj->render).palCopyNum[0xe];
        pcGp00000e64 = (char *)0x0;
        goto LAB_800b14e0;
      }
      carType = getasyncreadadr(*(undefined4 *)&(carObj->render).inside);
      if (carType != 0) {
        purgememadr(carType);
        goto LAB_800b14d4;
      }
    }
  }
LAB_800b14e4:
  bVar4 = false;
  if (pcGp00000e64 != (char *)0x0) {
    carType = (int)(carObj->render).palCopyNum[0xd];
    reload = 0;
    if (-1 < carType) {
      cVar5 = (&R3DCar_LoadedSceneCounter)[carType + uVar18 * 0x32] + -1;
      (&R3DCar_LoadedSceneCounter)[carType + uVar18 * 0x32] = cVar5;
      reload = 1;
      if (cVar5 == '\0') {
        purgememadr((&_R3DCar_LoadedScenePointer)[uVar18 * 0x32 + carType]);
        (&_R3DCar_LoadedScenePointer)[uVar18 * 0x32 + carType] = 0;
      }
    }
    sVar2 = (carObj->render).palCopyNum[0xe];
    bVar1 = *(byte *)((int)&carObj->audio[6].type + 3);
    (carObj->render).palCopyNum[0xd] = sVar2;
    *(byte *)((int)&carObj->audio[6].type + 2) = bVar1;
    carType = (int)sVar2;
    if (Vi->player != 0) {
      *(byte *)((int)&carObj->audio[6].type + 2) = bVar1 | 0x80;
    }
    uVar18 = (uint)(*(byte *)((int)&carObj->audio[6].type + 2) >> 7);
    (carObj->render).palCopyNum[0xf] = (carObj->render).palCopyNum[0xf] >> 4;
    sprintf((char *)&local_a8,"zz%s",&GameSetup_gCarNames + carType * 5);
    if (!bVar3) {
      local_a8._0_3_ =
           CONCAT12("ccbfgacbfgbfgau"
                    [(uint)(byte)(&R3DCar_CopIndex)
                                 [((uint)*(byte *)((int)&carObj->audio[6].type + 2) & 0x7f) +
                                  (carType + -0x16) * 5]],(undefined2)local_a8);
      local_a8 = local_a8 & 0xff000000 | (uint)(uint3)local_a8;
    }
    strcpy((char *)&local_98,(char *)&local_a8);
    if (((carObj->render).palCopyNum[0xf] & 1U) != 0) {
      strcat((char *)&local_98,"h");
    }
    ppTVar17 = (Transformer_zScene **)(&_R3DCar_LoadedScenePointer + uVar18 * 0x32 + carType);
    if (*ppTVar17 != (Transformer_zScene *)0x0) {
      purgememadr();
      *ppTVar17 = (Transformer_zScene *)0x0;
    }
    pTVar9 = R3DCar_ReadInCarData__FPcP8Car_tObj((char *)&local_98,carObj);
    *ppTVar17 = pTVar9;
    (&R3DCar_LoadedSceneCounter)[carType + uVar18 * 0x32] =
         (&R3DCar_LoadedSceneCounter)[carType + uVar18 * 0x32] + '\x01';
    R3DCar_CalcCarDimensions__FP8Car_tObjP18Transformer_zScenei(carObj,*ppTVar17,carType);
    R3DCar_ReadInCarTextureMenu__FP8Car_tObjPcii(carObj,pcGp00000e64,reload,Vi->player);
    pcGp00000e64 = (char *)0x0;
    bVar4 = true;
  }
LAB_800b16f0:
  carType = (int)(carObj->render).palCopyNum[0xd];
  uVar18 = (uint)(*(byte *)((int)&carObj->audio[6].type + 2) >> 7);
  bVar3 = 5 < carType - 0x16U;
  if (((uGp00000dd8 & 0x80) == 0) && (carType < 0)) {
    (carObj->render).palCopyNum[0x10] = -1;
  }
  if (-1 < (carObj->render).palCopyNum[0x10]) {
    if ((uGp00000dd8 & 0x80) == 0) {
      if (bVar3) {
        if (bVar4) {
          (carObj->render).palCopyNum[10] = 0;
        }
      }
      else {
        if (((carObj->render).palCopyNum[0xb] & 0x80U) == 0) {
          (carObj->render).palCopyNum[0xb] = 0x80;
          (carObj->render).palCopyNum[0xc] = 0x88;
        }
        if (iGp00000e5c != 0) {
          uVar6 = (carObj->render).palCopyNum[0xb];
          if ((uVar6 & 0x80) != 0) {
            (carObj->render).palCopyNum[0xb] = uVar6 + 1 & 0x8f;
          }
          uVar6 = (carObj->render).palCopyNum[0xc];
          if ((uVar6 & 0x80) != 0) {
            (carObj->render).palCopyNum[0xc] = uVar6 + 1 & 0x8f;
          }
        }
        if (bVar4) {
          (carObj->render).palCopyNum[9] = 0x33;
          (carObj->render).palCopyNum[10] = 2;
        }
      }
    }
    if (carType < 0x1c) {
      if ((*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 2) != 0) {
        local_30 = *(int *)&(carObj->render).currentCarType;
      }
    }
    else {
      local_30 = 0;
    }
    if (((carObj->render).palCopyNum[0x10] == 0) && (0x1b < carType)) {
      (carObj->render).palCopyNum[0x10] = 1;
    }
    reload = (int)(carObj->render).palCopyNum[0x10];
    if ((reload == 2) && (carType == 0x1c)) {
      (carObj->render).palCopyNum[0x10] = 1;
      reload = (int)(carObj->render).palCopyNum[0x10];
    }
    reload = reload + 2;
    if ((uGp00000dd8 & 0x80) == 0) {
      (carObj->N).position.y = (carObj->N).position.y + (carObj->N).dimension.y;
    }
    else {
      (carObj->N).position.y = (carObj->N).position.y + (carObj->N).dimension.y * -2;
    }
    local_a8 = (carObj->N).position.x - (Vi->cview).translation.x;
    local_a4 = (carObj->N).position.y - (Vi->cview).translation.y;
    local_a0 = (carObj->N).position.z - (Vi->cview).translation.z;
    uVar14 = local_a8;
    if ((int)local_a8 < 0) {
      uVar14 = local_a8 + 0xff;
    }
    iVar7 = (carObj->N).orientMat.m[0];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar15 = local_a4;
    if (local_a4 < 0) {
      iVar15 = local_a4 + 0xff;
    }
    iVar10 = (carObj->N).orientMat.m[1];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar13 = local_a0;
    if (local_a0 < 0) {
      iVar13 = local_a0 + 0xff;
    }
    iVar11 = (carObj->N).orientMat.m[2];
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    local_98 = ((int)uVar14 >> 8) * (iVar7 >> 8) + (iVar15 >> 8) * (iVar10 >> 8) +
               (iVar13 >> 8) * (iVar11 >> 8);
    iVar7 = (carObj->N).orientMat.m[6];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar10 = (carObj->N).orientMat.m[7];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar13 = local_a0;
    if (local_a0 < 0) {
      iVar13 = local_a0 + 0xff;
    }
    iVar11 = (carObj->N).orientMat.m[8];
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    local_90 = ((int)uVar14 >> 8) * (iVar7 >> 8) + (iVar15 >> 8) * (iVar10 >> 8) +
               (iVar13 >> 8) * (iVar11 >> 8);
    iVar7 = fixedatan();
    m2 = &(carObj->N).orientMat;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xf;
    }
    sGp00000e58 = 0x1000 - (short)(iVar7 >> 4);
    R3DCar_MATRIX3DT_Copy__FPiT0((int *)m2,(int *)&mStack328);
    R3DCar_MATRIX3DT_Copy__FPiT0((int *)m2,(int *)&local_f8);
    if ((uGp00000dd8 & 0x80) == 0) {
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
    iVar7 = 0;
    if (carType < 0x1c) {
      while (iVar7 < 0x39) {
        cVar5 = (&R3DCar_ObjectInfo)[reload];
        if (false) goto LAB_800b1c10;
        switch(((int)cVar5 + -2) * 0x10000 >> 0x10) {
        case 0:
          if (((carObj->render).palCopyNum[0xf] & 1U) != 0) goto switchD_800b1af8_caseD_2;
        case 1:
          if ((uGp00000dd8 & 0x80) != 0) {
            cVar5 = '\0';
          }
          break;
        case 2:
        case 8:
switchD_800b1af8_caseD_2:
          cVar5 = '\0';
          break;
        case 5:
          if (((carObj->render).palCopyNum[9] & 2U) == 0) {
            cVar5 = '\0';
          }
          break;
        case 6:
          if (((carObj->render).palCopyNum[9] & 0x20U) == 0) {
            cVar5 = '\0';
          }
          break;
        case 7:
          uVar14 = (uint)(ushort)(carObj->render).palCopyNum[0xf];
          goto LAB_800b1b3c;
        case 9:
          if ((*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 4) != 0) {
            cVar5 = '\0';
          }
          break;
        case 10:
          if ((*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 4) == 0) {
            cVar5 = '\0';
          }
          break;
        case 0xb:
          uVar14 = (uint)*(byte *)((int)(carObj->render).palCopyNum + 0x11);
LAB_800b1b3c:
          if ((uVar14 & 1) != 0) {
            cVar5 = '\0';
          }
          break;
        case 0xc:
          if ((*(byte *)((int)(carObj->render).palCopyNum + 0x11) & 1) == 0) {
            cVar5 = '\0';
          }
          break;
        case 0xe:
        case 0x11:
          if (bVar3) goto switchD_800b1af8_caseD_2;
          break;
        case 0x14:
          if (((carObj->render).palCopyNum[9] & 0x11U) == 0) {
            cVar5 = '\0';
          }
        }
LAB_800b1c10:
        (&R3DCar_ObjectVisible)[iVar7] = cVar5;
        reload = reload + 6;
        iVar7 = iVar7 + 1;
      }
    }
    else {
      while (iVar7 < 0x39) {
        cVar5 = (&R3DCar_ObjectInfo)[reload];
        if (cVar5 != '\x12') {
          if (cVar5 < '\x13') {
            if (cVar5 != '\x01') {
              cVar5 = '\0';
            }
          }
          else {
            if (cVar5 != '\x16') {
              cVar5 = '\0';
            }
          }
        }
        if ((carType == 0x1c) && (iVar7 == 0x20)) {
          cVar5 = '\x01';
        }
        (&R3DCar_ObjectVisible)[iVar7] = cVar5;
        reload = reload + 6;
        iVar7 = iVar7 + 1;
      }
    }
    iVar10 = 0;
    iVar15 = *(int *)(&_R3DCar_LoadedScenePointer)[uVar18 * 0x32 + carType];
    reload = *(int *)(iVar15 + 4);
    iVar7 = *(int *)(iVar15 + 8);
    iVar13 = 0;
    iVar15 = *(int *)(iVar15 + 0xc);
    iVar11 = 0;
    while (iVar10 < 0x39) {
      iVar16 = *(int *)((&_R3DCar_LoadedScenePointer)[uVar18 * 0x32 + carType] + iVar10 * 4);
      if ((*(short *)(iVar16 + 2) != 0) && ((&R3DCar_ObjectVisible)[iVar10] != '\0')) {
        if ((iVar10 == 0xf) || (local_94 = local_30, 0x2e < iVar10)) {
          local_94 = 0;
        }
        local_98 = *(int *)(iVar16 + 4) - reload;
        local_94 = (*(int *)(iVar16 + 8) - iVar7) - local_94;
        local_90 = *(int *)(iVar16 + 0xc) - iVar15;
        if (((0x1b < carType) || (iVar10 < 0x23)) || (m2 = &local_f8, 0x28 < iVar10)) {
          m2 = &mStack328;
        }
        transform(&local_98,m2,&local_a8);
        local_98 = ((carObj->N).position.x + local_a8) - (Vi->cview).translation.x;
        local_94 = ((carObj->N).position.y + local_a4) - (Vi->cview).translation.y;
        local_90 = ((carObj->N).position.z + local_a0) - (Vi->cview).translation.z;
        transform(&local_98,&(Vi->cview).mrotationInv,iGp00000e40 + iVar11);
        if (((0x1b < carType) || (iVar10 < 0x23)) || (m2 = &mStack208, 0x28 < iVar10)) {
          m2 = &mStack288;
        }
        R3DCar_MATRIX3DT_Copy__FPiT0((int *)m2,(int *)(iGp00000e3c + iVar13));
      }
      iVar13 = iVar13 + 0x24;
      iVar11 = iVar11 + 0xc;
      iVar10 = iVar10 + 1;
    }
    TrsProj_TransformProjectVertex__FP10matrixtdefP8coorddefiT1P12Draw_tVertex
              (&(Vi->cview).mrotationInv,&(Vi->cview).translationInv,1,&(carObj->N).position,
               (Draw_tVertex *)&R3DCar_center);
    if ((uGp00000dd8 & 0x80) == 0) {
      local_58 = (carObj->N).dimension.x;
      local_54 = (carObj->N).dimension.y;
      local_50 = (carObj->N).dimension.z;
      local_a8 = fixedmult(local_50,(carObj->N).orientMat.m[6]);
      local_a4 = fixedmult(local_50,(carObj->N).orientMat.m[7]);
      local_a0 = fixedmult(local_50,(carObj->N).orientMat.m[8]);
      local_98 = fixedmult(local_58,(carObj->N).orientMat.m[0]);
      local_94 = fixedmult(local_58,(carObj->N).orientMat.m[1]);
      local_90 = fixedmult(local_58,(carObj->N).orientMat.m[2]);
      if ((carObj->render).palCopyNum[0xd] == 0x14) {
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
                 (Draw_tVertex *)&R3DCar_shadowVertex);
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

void R3DCar_InsertCarFacetII__FP8Car_tObj(Car_tObj *carObj)
{
  short sVar1;
  bool bVar2;
  uint type;
  int iVar3;
  int index;
  int iVar4;
  Transformer_zObj *obj;
  uint envmap;
  int iVar5;
  int iVar6;
  matrixtdef *m;
  coorddef *t;
  int lightAvg;
  uint uVar7;
  int local_34;
  int local_2c;
  
  local_34 = 0;
  iVar6 = (int)(carObj->render).palCopyNum[0xd];
  uVar7 = (uint)(*(byte *)((int)&carObj->audio[6].type + 2) >> 7);
  iVar4 = (&_R3DCar_LoadedScenePointer)[uVar7 * 0x32 + iVar6];
  if ((carObj->wheel[0].wheelInAir | carObj->wheel[1].wheelInAir | carObj->wheel[2].wheelInAir |
      carObj->wheel[3].wheelInAir) == 0) {
    if (DAT_80113240 == 0) {
      local_34 = 0;
    }
    else {
      if (DAT_801131f8 == 1) {
        local_34 = -1;
        if (true) goto LAB_800b2284;
        lightAvg = 1;
      }
      else {
        lightAvg = -2;
        if (true) goto LAB_800b2284;
      }
      local_34 = lightAvg;
    }
  }
LAB_800b2284:
  type = BWorldSm_QuadLight__FP12BWorldSm_Pos(&(carObj->N).simRoadInfo);
  sVar1 = (carObj->render).palCopyNum[0x10];
  (carObj->render).sub_otz = type & 0xffffff;
  if (-1 < sVar1) {
    if (false) {
      DrawC_NightHeadlight__FP8Car_tObj(carObj);
    }
    type = (carObj->render).sub_otz;
    lightAvg = (int)((type & 0xff) + ((int)(type & 0xff00) >> 8) + (type >> 0x10 & 0xff)) / 3;
    _DAT_1f80008c = lightAvg * 0x10000;
    if (lightAvg < 0x18) {
      lightAvg = 0x18;
      _DAT_1f80008c = 0x180000;
    }
    _DAT_1f80008c = _DAT_1f80008c + lightAvg * 0x101;
    iVar3 = DrawC_PrimStart__FP12Draw_tVertexP8Car_tObjiP13Draw_CarCache
                      ((Draw_tVertex *)&R3DCar_center,carObj,lightAvg,(Draw_CarCache *)&DAT_1f800000
                      );
    if (-1 < iVar3) {
      iVar5 = 0;
      t = (coorddef *)0x0;
      m = (matrixtdef *)0x0;
      local_2c = 0;
      while (iVar5 < 0x39) {
        obj = *(Transformer_zObj **)
               ((&_R3DCar_LoadedScenePointer)[uVar7 * 0x32 + iVar6] + iVar5 * 4);
        if ((obj->numFacet != 0) && ((&R3DCar_ObjectVisible)[iVar5] != 0)) {
          type = SEXT14((char)(&DAT_801165e1)[local_2c * 2]);
          _DAT_1f800040 = (int)(char)(&R3DCar_ObjectInfo)[local_2c * 2];
          bVar2 = false;
          if ((iVar6 < 0x1c) && ((iVar5 - 0x1cU < 2 && ((&R3DCar_RecessedLight)[iVar6] != '\0')))) {
            _DAT_1f800040 = -_DAT_1f800040;
          }
          if (((false) && (0x22 < iVar5)) && (iVar5 < 0x29)) {
            bVar2 = true;
            _DAT_1f80000c = _DAT_1f80000c ^ 1;
          }
          envmap = (uint)(byte)(&R3DCar_ObjectVisible)[iVar5] - 0x11;
          if ((int)envmap < 0) {
            index = 0x20;
            if (iVar6 < 0x1c) {
              envmap = type;
              if (R3DCar_eMapColour == '\0') {
                envmap = type & 0xfe;
              }
              if (((type & 0x10) != 0) && (0x15 < iVar6)) {
                _DAT_1f800040 = _DAT_1f800040 + 0xc;
              }
            }
            else {
              index = 0x40;
              envmap = 0x22;
              if ((iVar6 == 0x1c) && (iVar5 == 0x23)) {
                _DAT_1f800040 = 4;
              }
            }
            if ((carObj->render).palCopyNum[0x10] == 3) {
              envmap = envmap | 0x20;
              _DAT_1f800040 = -_DAT_1f800040;
              if (iVar5 - 0x27U < 2) {
                _DAT_1f800040 = _DAT_1f800040 + -0x10;
              }
            }
            _DAT_1f800040 = (carObj->render).currentPitch + _DAT_1f800040;
            if (iVar3 < index) {
                            
              DrawC_PrimClip__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache
                        (m,t,obj,(Transformer_zOverlay *)(iVar4 + 0xe4),envmap,
                         (Draw_CarCache *)&DAT_1f800000);
            }
            else {
                            
              DrawC_Prim__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache
                        (m,t,obj,(Transformer_zOverlay *)(iVar4 + 0xe4),envmap,
                         (Draw_CarCache *)&DAT_1f800000);
            }
          }
          else {
            index = -1;
            type = envmap;
            if (iVar6 < 0x1c) {
              if (iVar6 < 0x16) {
                type = envmap;
                if ((envmap == 4) && (type = envmap, (&R3DCar_SignalBrakeFlare)[iVar6] != '\0')) {
                  type = 0x41;
                }
              }
              else {
                type = envmap;
                if ((int)*(short *)(&R3DCar_FlareCopSirenType +
                                   envmap * 2 +
                                   (uint)(byte)(&R3DCar_CopIndex)
                                               [((uint)*(byte *)((int)&carObj->audio[6].type + 2) &
                                                0x7f) + (iVar6 + -0x16) * 5] * 0xc) != 0) {
                  type = (int)*(short *)(&R3DCar_FlareCopSirenType +
                                        envmap * 2 +
                                        (uint)(byte)(&R3DCar_CopIndex)
                                                    [((uint)*(byte *)((int)&carObj->audio[6].type +
                                                                     2) & 0x7f) +
                                                     (iVar6 + -0x16) * 5] * 0xc);
                }
              }
              if (((((carObj->render).palCopyNum[10] & 2U) != 0) ||
                  ((0x15 < iVar6 && ((carObj->desiredLatPos & 2U) != 0)))) && ((type & 0xbf) == 1))
              {
                type = type | 0x600;
              }
              index = (int)*(short *)(&R3DCar_FlareOverlayIndex + envmap * 2);
            }
            _DAT_1f800040 = (carObj->render).currentPitch + _DAT_1f800040;
            DrawC_PrimHalo__FP10matrixtdefP8coorddefP16Transformer_zObjiiiP13Draw_CarCache
                      (m,t,obj,type,index,local_34,(Draw_CarCache *)&DAT_1f800000);
          }
          if (bVar2) {
            _DAT_1f80000c = _DAT_1f80000c ^ 1;
          }
        }
        t = t + 1;
        m = m + 1;
        iVar5 = iVar5 + 1;
        local_2c = local_2c + 3;
      }
      DrawC_PrimStop__FP8Car_tObjP13Draw_CarCache(carObj,(Draw_CarCache *)&DAT_1f800000);
      if (false) {
        _DAT_1f80008c =
             ((int)(lightAvg * (uint)DAT_8013d39e) >> 8) * 0x10000 +
             ((int)(lightAvg * (uint)DAT_8013d39d) >> 8) * 0x100 +
             ((int)(lightAvg * (uint)R3DCar_shadowColour) >> 8);
        if (iVar3 < 0x20) {
          DrawC_ShadowPrimClip__FP12Draw_tVertexP13Draw_CarCache
                    ((Draw_tVertex *)&R3DCar_shadowVertex,(Draw_CarCache *)&DAT_1f800000);
        }
        else {
          DrawC_ShadowPrim__FP12Draw_tVertexP13Draw_CarCache
                    ((Draw_tVertex *)&R3DCar_shadowVertex,(Draw_CarCache *)&DAT_1f800000);
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

void R3DCar_InsertCarFacetMenuII__FP8Car_tObji(Car_tObj *carObj,int light)
{
  bool bVar1;
  int iVar2;
  int index;
  Transformer_zObj *obj;
  uint uVar3;
  uint type;
  uint envmap;
  int iVar4;
  int iVar5;
  char *pcVar6;
  matrixtdef *m;
  coorddef *t;
  uint uVar7;
  
  iVar5 = (int)(carObj->render).palCopyNum[0xd];
  uVar7 = (uint)(*(byte *)((int)&carObj->audio[6].type + 2) >> 7);
  iVar2 = (&_R3DCar_LoadedScenePointer)[uVar7 * 0x32 + iVar5];
  if (false) {
    light = light >> 1;
  }
  _DAT_1f80008c = light * 0x10101;
  if (-1 < (carObj->render).palCopyNum[0x10]) {
    index = DrawC_PrimStart__FP12Draw_tVertexP8Car_tObjiP13Draw_CarCache
                      ((Draw_tVertex *)&R3DCar_center,carObj,light,(Draw_CarCache *)&DAT_1f800000);
    iVar4 = 0;
    if (-1 < index) {
      t = (coorddef *)0x0;
      m = (matrixtdef *)0x0;
      pcVar6 = "";
      while (iVar4 < 0x39) {
        obj = *(Transformer_zObj **)
               ((&_R3DCar_LoadedScenePointer)[uVar7 * 0x32 + iVar5] + iVar4 * 4);
        if ((obj->numFacet != 0) && ((&R3DCar_ObjectVisible)[iVar4] != 0)) {
          envmap = SEXT14(pcVar6[1]);
          _DAT_1f800040 = (int)*pcVar6;
          bVar1 = false;
          if ((iVar5 < 0x1c) && ((iVar4 - 0x1cU < 2 && ((&R3DCar_RecessedLight)[iVar5] != '\0')))) {
            _DAT_1f800040 = -_DAT_1f800040;
          }
          if (((false) && (0x22 < iVar4)) && (iVar4 < 0x29)) {
            bVar1 = true;
            _DAT_1f80000c = _DAT_1f80000c ^ 1;
          }
          type = (uint)(byte)(&R3DCar_ObjectVisible)[iVar4] - 0x11;
          if ((int)type < 0) {
            if (iVar5 < 0x1c) {
              if ((envmap & 0x10) != 0) {
                type = envmap & 0x80;
                if (iVar5 < 0x16) goto LAB_800b2ab4;
                _DAT_1f800040 = _DAT_1f800040 + 0xc;
                if (false) {
                  _DAT_1f800040 = -_DAT_1f800040;
                }
              }
LAB_800b2ab0:
              type = envmap & 0x80;
            }
            else {
              type = envmap & 0x80;
              envmap = type;
              if (iVar5 != 0x1c) goto LAB_800b2ab0;
              envmap = type;
              if (iVar4 == 0x23) {
                _DAT_1f800040 = 4;
                envmap = type;
              }
            }
LAB_800b2ab4:
            if ((type != 0) && (false)) {
              _DAT_1f800040 = -_DAT_1f800040;
            }
            _DAT_1f800040 = (carObj->render).currentPitch + _DAT_1f800040;
                        
            DrawC_PrimMenu__FP10matrixtdefP8coorddefP16Transformer_zObjP20Transformer_zOverlayiP13Draw_CarCache
                      (m,t,obj,(Transformer_zOverlay *)(iVar2 + 0xe4),envmap,
                       (Draw_CarCache *)&DAT_1f800000);
          }
          else {
            index = -1;
            if (iVar5 < 0x1c) {
              if (iVar5 < 0x16) {
                if ((type == 4) && ((&R3DCar_SignalBrakeFlare)[iVar5] != '\0')) {
                  type = 1;
                }
              }
              else {
                uVar3 = type;
                if ((int)*(short *)(&R3DCar_FlareCopSirenType +
                                   type * 2 +
                                   (uint)(byte)(&R3DCar_CopIndex)
                                               [((uint)*(byte *)((int)&carObj->audio[6].type + 2) &
                                                0x7f) + (iVar5 + -0x16) * 5] * 0xc) != 0) {
                  uVar3 = (int)*(short *)(&R3DCar_FlareCopSirenType +
                                         type * 2 +
                                         (uint)(byte)(&R3DCar_CopIndex)
                                                     [((uint)*(byte *)((int)&carObj->audio[6].type +
                                                                      2) & 0x7f) +
                                                      (iVar5 + -0x16) * 5] * 0xc);
                }
                if (((envmap & 0x10) != 0) && (false)) {
                  _DAT_1f800040 = 0;
                }
                index = (int)*(short *)(&R3DCar_FlareOverlayIndex + type * 2);
                type = uVar3;
              }
              if ((0x15 < iVar5) && (type == 1)) {
                type = 0x601;
              }
            }
            if (false) {
              type = type | 0x8080;
            }
            _DAT_1f800040 = (carObj->render).currentPitch + _DAT_1f800040;
            DrawC_PrimHalo__FP10matrixtdefP8coorddefP16Transformer_zObjiiiP13Draw_CarCache
                      (m,t,obj,type,index,0,(Draw_CarCache *)&DAT_1f800000);
          }
          if (bVar1) {
            _DAT_1f80000c = _DAT_1f80000c ^ 1;
          }
        }
        t = t + 1;
        m = m + 1;
        pcVar6 = pcVar6 + 6;
        iVar4 = iVar4 + 1;
      }
      DrawC_PrimStop__FP8Car_tObjP13Draw_CarCache(carObj,(Draw_CarCache *)&DAT_1f800000);
      if (true) {
        DrawC_ShadowPrimClip__FP12Draw_tVertexP13Draw_CarCache
                  ((Draw_tVertex *)&R3DCar_shadowVertex,(Draw_CarCache *)&DAT_1f800000);
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
	// 		int *sort_min[0]; // $s7
	// 		int *sort_max[0]; // $s6

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

void R3DCar_InsertAllListFacet__FP13DRender_tView(DRender_tView *Vi)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int carObj;
  undefined4 carObj_00;
  int *piVar15;
  undefined4 *puVar16;
  int iVar17;
  int *piVar18;
  undefined auStack64 [16];
  int local_30 [2];
  
  iVar1 = -(((uint)(Cars_gNumCars << 5) >> 3) + 7 & 0xfffffff8);
  piVar8 = (int *)((int)local_30 + iVar1);
  iVar2 = -(((uint)(Cars_gNumCars << 5) >> 3) + 7 & 0xfffffff8);
  piVar10 = (int *)((int)local_30 + iVar2 + iVar1);
  gWSavePtr = SetSp(0x1f8003fc);
  stackSpeedUpEnbabledFlag = 1;
  iVar17 = 0;
  if (Vi->player == 0) {
    if (iGp00000e60 < 0) {
      uGp00000e5c = 1;
      iGp00000e60 = 6;
    }
    else {
      uGp00000e5c = 0;
    }
  }
  piVar12 = &R3DCar_PositionZ;
  piVar14 = &_Cars_gList;
  piVar15 = piVar10;
  piVar18 = piVar8;
  while (iVar3 = Cars_gNumCars, carObj = 1, iVar17 < Cars_gNumCars) {
    carObj = *piVar14;
    iVar3 = R3DCar_Visibilty__FP8Car_tObjP13DRender_tView(carObj,Vi,auStack64[iVar2 + iVar1]);
    *piVar12 = iVar3;
    *(undefined4 *)(carObj + 0x878) = 0;
    *(undefined2 *)(carObj + 0x87c) = 0;
    *piVar18 = 0;
    iVar3 = 0x1a0;
    if (*(short *)(carObj + 0x8bc) != 0x1c) {
      iVar3 = *(int *)(carObj + 0x13c) >> 9;
    }
    *piVar15 = iVar3;
    piVar15 = piVar15 + 1;
    piVar18 = piVar18 + 1;
    piVar12 = piVar12 + 1;
    piVar14 = piVar14 + 1;
    iVar17 = iVar17 + 1;
  }
  iVar17 = 0;
  piVar12 = &R3DCar_PositionZ;
  piVar14 = &_Cars_gList;
  local_30[0] = Cars_gNumCars + -1;
  piVar15 = piVar8;
  piVar18 = piVar10;
  while (iVar13 = Cars_gNumCars, iVar17 < local_30[0]) {
    if (*piVar12 != -0x80000000) {
      iVar7 = *piVar14;
      piVar11 = &R3DCar_PositionZ + carObj;
      piVar9 = &_Cars_gList + carObj;
      iVar13 = carObj;
      while (iVar13 < iVar3) {
        iVar5 = *piVar9;
        iVar6 = *piVar12 - *piVar11;
        if ((*(int *)(iVar7 + 0x878) == 0) && (*(int *)(iVar5 + 0x878) == 0)) {
          iVar4 = iVar6;
          if (iVar6 < 0) {
            iVar4 = -iVar6;
          }
          if (iVar4 < *(int *)(iVar7 + 0x13c) + *(int *)(iVar5 + 0x13c)) {
            *(int *)(iVar5 + 0x878) = iVar7;
            *(short *)(iVar7 + 0x87c) = *(short *)(iVar7 + 0x87c) + 1;
            if (iVar6 < 0) {
              *piVar15 = *piVar15 - (*(int *)(iVar5 + 0x13c) >> 9);
            }
            else {
              *piVar18 = *piVar18 + (*(int *)(iVar5 + 0x13c) >> 9);
            }
          }
        }
        piVar11 = piVar11 + 1;
        piVar9 = piVar9 + 1;
        iVar13 = iVar13 + 1;
      }
    }
    carObj = carObj + 1;
    piVar18 = piVar18 + 1;
    piVar15 = piVar15 + 1;
    piVar12 = piVar12 + 1;
    piVar14 = piVar14 + 1;
    iVar17 = iVar17 + 1;
  }
  iVar17 = 0;
  piVar14 = &_Cars_gList;
  iGp00000e6c = (&_R3DCar_subOtStart)[gFlip * 2 + DAT_80116f80];
  piVar12 = &R3DCar_PositionZ;
  while (iVar17 < iVar13) {
    if (*piVar12 != -0x80000000) {
      carObj = *piVar14;
      *piVar8 = *piVar8 + -0x30;
      iVar3 = *piVar10;
      *piVar10 = iVar3 + 0x30;
      if (*(int *)(carObj + 0x878) == 0) {
        iVar3 = (iVar3 + 0x30) - *piVar8;
        *(int *)(carObj + 0x86c) = iGp00000e6c;
        iGp00000e6c = iGp00000e6c + iVar3 * 4;
        *(int *)(carObj + 0x870) = iVar3;
        *(int *)(carObj + 0x874) = *piVar10 - (*(int *)(carObj + 0x13c) >> 10);
      }
      else {
        *(undefined4 *)(carObj + 0x86c) = 0;
        *(undefined4 *)(carObj + 0x870) = 0;
        *(undefined4 *)(carObj + 0x874) = 0;
      }
    }
    piVar10 = piVar10 + 1;
    piVar8 = piVar8 + 1;
    piVar14 = piVar14 + 1;
    piVar12 = piVar12 + 1;
    iVar17 = iVar17 + 1;
  }
  iVar17 = 0;
  DrawC_gScreenMat._0_2_ = 0x1000;
  DAT_8011f4cc._2_2_ = 0;
  DAT_8011f4d4._0_2_ = 0;
  DrawC_gScreenMat._2_2_ = 0;
  DAT_8011f4d0._0_2_ = 0xf000;
  DAT_8011f4d4._2_2_ = 0;
  DAT_8011f4cc._0_2_ = 0;
  DAT_8011f4d0._2_2_ = 0;
  DAT_8011f4d8._0_2_ = 0x1000;
  DAT_8011f4dc = 0;
  DAT_8011f4e0 = 0;
  DAT_8011f4e4 = 0;
  gWSavePtr = SetSp(gWSavePtr);
  puVar16 = &_Cars_gList;
  stackSpeedUpEnbabledFlag = 0;
  while (iVar17 < Cars_gNumCars) {
    carObj_00 = *puVar16;
    gWSavePtr = SetSp(0x1f8003fc);
    puVar16 = puVar16 + 1;
    stackSpeedUpEnbabledFlag = 1;
    R3DCar_InsertCarFacetZ__FP8Car_tObjP13DRender_tView(carObj_00,Vi,auStack64[iVar2 + iVar1]);
    iVar17 = iVar17 + 1;
    gWSavePtr = SetSp(gWSavePtr);
    stackSpeedUpEnbabledFlag = 0;
    R3DCar_InsertCarFacetII__FP8Car_tObj(carObj_00,auStack64[iVar2 + iVar1]);
  }
  return;


}





