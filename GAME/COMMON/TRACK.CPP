#include "NFS4.H"
#include "TRACK.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Track_SetTrackNumber__Fi(int tracknum /*$a0*/)
 // line 95, offset 0x800b92f8
	/* begin block 1 */
		// Start line: 96
		// Start offset: 0x800B92F8
	/* end block 1 */
	// End offset: 0x800B92F8
	// End Line: 97

void Track_SetTrackNumber__Fi(int tracknum)
{
  uGp00000f90 = tracknum & 0xf;
  return;


}




// decompiled code
// original method signature: 
// char * /*$ra*/ Track_MakeTrackPathName__FPc(char *ext /*$a0*/)
 // line 103, offset 0x800b9308
	/* begin block 1 */
		// Start line: 104
		// Start offset: 0x800B9308
		// Variables:
	// 		static char strspc[64]; // offset 0x0
	/* end block 1 */
	// End offset: 0x800B9308
	// End Line: 104

char * Track_MakeTrackPathName__FPc(char *ext)
{
  sprintf(&strspc_42,"%sTr%02d%s",0,uGp00000f90,ext);
  return &strspc_42;


}




// decompiled code
// original method signature: 
// char * /*$ra*/ Track_MakeTrackDataPathName__FPc(char *ext /*$a0*/)
 // line 114, offset 0x800b9350
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x800B9350
		// Variables:
	// 		static char strspc[64]; // offset 0x40
	/* end block 1 */
	// End offset: 0x800B9350
	// End Line: 115

char * Track_MakeTrackDataPathName__FPc(char *ext)
{
  sprintf(&strspc_45,"%sTr%02d%s",0,uGp00000f90,ext);
  return &strspc_45;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AllocArtResource__FP18Track_tArtresourcei(struct Track_tArtresource *artRes /*$s0*/, int numPmx /*$a1*/)
 // line 142, offset 0x800b9398
	/* begin block 1 */
		// Start line: 143
		// Start offset: 0x800B9398
	/* end block 1 */
	// End offset: 0x800B9398
	// End Line: 143

void AllocArtResource__FP18Track_tArtresourcei(Track_tArtresource *artRes,int numPmx)
{
  Draw_tPixMap *pDVar1;
  
  artRes->id = -1;
  artRes->basePmxCount = 0;
  pDVar1 = (Draw_tPixMap *)BWAllocMem__Fl(numPmx << 4);
  artRes->pPmx = pDVar1;
  artRes->shapeCount = 0;
  artRes->shapeFile = (char *)0x0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ InitArtResources__Fv()
 // line 155, offset 0x800b93d8
	/* begin block 1 */
		// Start line: 156
		// Start offset: 0x800B93D8
	/* end block 1 */
	// End offset: 0x800B93D8
	// End Line: 156

void InitArtResources__Fv(void)
{
  AllocArtResource__FP18Track_tArtresourcei((Track_tArtresource *)&gInitialArt,0x352);
  pcGp00000f84 = BWAllocMem__Fl(0xd48);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ DeInitArtResources__Fv()
 // line 176, offset 0x800b9408
	/* begin block 1 */
		// Start line: 177
		// Start offset: 0x800B9408
	/* end block 1 */
	// End offset: 0x800B9408
	// End Line: 177

void DeInitArtResources__Fv(void)
{
  DAT_8011e164 = 0;
  Chunk_DeInit__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ LoadShapesAndMakePmx__FPcP12Draw_tPixMapiii(char *shapefile /*$s6*/, struct Draw_tPixMap *pmxList /*$a1*/, int loadFlags /*stack 8*/, int x /*$fp*/, int y /*stack 16*/)
 // line 225, offset 0x800b942c
	/* begin block 1 */
		// Start line: 226
		// Start offset: 0x800B942C
		// Variables:
	// 		int i; // $s0
	// 		struct shapetbl *shape; // $s1
	// 		struct Draw_tPixMap *pPmx; // $s4
	// 		int recolor_flag; // $s7
	// 		int cluttype; // $s5
	// 		int mipmapcounter; // $s3

		/* begin block 1.1 */
			// Start line: 226
			// Start offset: 0x800B942C

			/* begin block 1.1.1 */
				// Start line: 240
				// Start offset: 0x800B9480

				/* begin block 1.1.1.1 */
					// Start line: 241
					// Start offset: 0x800B9480
					// Variables:
				// 		int cnt; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x800B94C4
				// End Line: 245
			/* end block 1.1.1 */
			// End offset: 0x800B94C4
			// End Line: 245
		/* end block 1.1 */
		// End offset: 0x800B94C4
		// End Line: 245

		/* begin block 1.2 */
			// Start line: 249
			// Start offset: 0x800B94C4
			// Variables:
		// 		int pcnt; // $v1
		/* end block 1.2 */
		// End offset: 0x800B94F8
		// End Line: 251

		/* begin block 1.3 */
			// Start line: 253
			// Start offset: 0x800B94F8

			/* begin block 1.3.1 */
				// Start line: 261
				// Start offset: 0x800B950C
				// Variables:
			// 		char name[4]; // stack offset -56
			// 		int tempclut; // $a3

				/* begin block 1.3.1.1 */
					// Start line: 276
					// Start offset: 0x800B9574

					/* begin block 1.3.1.1.1 */
						// Start line: 280
						// Start offset: 0x800B95B4
						// Variables:
					// 		int palnum; // $v0

						/* begin block 1.3.1.1.1.1 */
							// Start line: 283
							// Start offset: 0x800B95B4

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 294
								// Start offset: 0x800B95F4

								/* begin block 1.3.1.1.1.1.1.1 */
									// Start line: 296
									// Start offset: 0x800B95F4
									// Variables:
								// 		int j; // $a1
								/* end block 1.3.1.1.1.1.1.1 */
								// End offset: 0x800B9648
								// End Line: 305
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x800B9648
							// End Line: 305
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x800B9660
						// End Line: 307
					/* end block 1.3.1.1.1 */
					// End offset: 0x800B9664
					// End Line: 309
				/* end block 1.3.1.1 */
				// End offset: 0x800B9664
				// End Line: 309

				/* begin block 1.3.1.2 */
					// Start line: 323
					// Start offset: 0x800B9664

					/* begin block 1.3.1.2.1 */
						// Start line: 324
						// Start offset: 0x800B9688
						// Variables:
					// 		short icode[2]; // stack offset -48

						/* begin block 1.3.1.2.1.1 */
							// Start line: 328
							// Start offset: 0x800B9688

							/* begin block 1.3.1.2.1.1.1 */
								// Start line: 344
								// Start offset: 0x800B96EC

								/* begin block 1.3.1.2.1.1.1.1 */
									// Start line: 344
									// Start offset: 0x800B96EC

									/* begin block 1.3.1.2.1.1.1.1.1 */
										// Start line: 345
										// Start offset: 0x800B96FC

										/* begin block 1.3.1.2.1.1.1.1.1.1 */
											// Start line: 347
											// Start offset: 0x800B96FC
											// Variables:
										// 		int j; // $a0
										/* end block 1.3.1.2.1.1.1.1.1.1 */
										// End offset: 0x800B973C
										// End Line: 356
									/* end block 1.3.1.2.1.1.1.1.1 */
									// End offset: 0x800B973C
									// End Line: 356
								/* end block 1.3.1.2.1.1.1.1 */
								// End offset: 0x800B973C
								// End Line: 356
							/* end block 1.3.1.2.1.1.1 */
							// End offset: 0x800B973C
							// End Line: 356
						/* end block 1.3.1.2.1.1 */
						// End offset: 0x800B973C
						// End Line: 356
					/* end block 1.3.1.2.1 */
					// End offset: 0x800B973C
					// End Line: 356
				/* end block 1.3.1.2 */
				// End offset: 0x800B973C
				// End Line: 356
			/* end block 1.3.1 */
			// End offset: 0x800B9740
			// End Line: 359
		/* end block 1.3 */
		// End offset: 0x800B9748
		// End Line: 360
	/* end block 1 */
	// End offset: 0x800B9748
	// End Line: 360

void LoadShapesAndMakePmx__FPcP12Draw_tPixMapiii( (char *shapefile,Draw_tPixMap *pmxList,int loadFlags,int x,int y)
{
  char *pcVar1;
  int cx;
  byte *n;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char local_38;
  char local_37;
  byte local_36;
  byte local_35 [5];
  ushort local_30;
  ushort local_2e;
  
  iVar6 = -1;
  puGp00001888 = (ushort *)0x0;
  if (false) {
    iVar6 = -3;
    puGp00001888 = (ushort *)reservememadr("mipmapinf",0x180,0x10);
    iVar4 = 0;
    iVar2 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar2 + (int)puGp00001888) = 0xffffffff;
      iVar2 = iVar2 + 0xc;
    } while (iVar4 < 0x20);
  }
  pcGp0000188c = (char *)reservememadr("mpalinfo",0x400,0x10);
  iVar2 = 0x7f;
  pcVar1 = pcGp0000188c + 0x3f8;
  do {
    *(undefined2 *)(pcVar1 + 2) = 0xffff;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar1 + -8;
  } while (-1 < iVar2);
  DrawSync(0);
  iVar5 = 0;
  iVar2 = 0;
  iVar4 = 0;
  do {
    cx = shapecount(shapefile);
    if (cx <= iVar2) {
      return;
    }
    n = (byte *)shapepointer(shapefile,iVar2);
    if (n != (byte *)0x0) {
      shapename(shapefile,iVar2,&local_38);
      if (((iVar2 < 0xc) || ((*n & 3) == 1)) || (cx = iVar6, local_38 == '#')) {
        cx = -1;
      }
      Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
                ((char *)0x0,(char *)n,loadFlags | 2,x,y,cx,cx,pmxList);
      if (local_38 == '!') {
        pcGp0000188c[iVar4] = local_37;
        pcGp0000188c[iVar4 + 1] = local_36;
        cx = atoi((char *)local_35);
        pcVar1 = pcGp0000188c + iVar4;
        *(short *)(pcVar1 + 2) = (short)cx;
        *(short *)(pcVar1 + 6) = (short)iVar2;
        if (cx == 0) {
          *(short *)(pcVar1 + 4) = (short)iVar2;
        }
        else {
          cx = 0;
          pcVar1 = pcGp0000188c;
          do {
            if (((*pcVar1 == local_37) && (pcVar1[1] == local_36)) && (*(short *)(pcVar1 + 2) == 0))
            {
              *(undefined2 *)(pcGp0000188c + iVar4 + 4) = *(undefined2 *)(pcVar1 + 4);
              break;
            }
            cx = cx + 1;
            pcVar1 = pcVar1 + 8;
          } while (cx < 0x80);
        }
        iVar4 = iVar4 + 8;
      }
      if ((false) && (local_38 == 'Z')) {
        local_2e = (ushort)local_35[0];
        local_30 = (ushort)local_36;
        if ((local_37 == 'R') && ((*n & 3) == 1)) {
          puVar3 = puGp00001888 + iVar5 * 6;
          *puVar3 = local_30;
          iVar5 = iVar5 + 1;
          *(int *)(puVar3 + 2) = iVar2;
          *(int *)(puVar3 + 4) = iVar2;
          puVar3[1] = (ushort)local_35[0];
        }
        else {
          cx = 0;
          puVar3 = puGp00001888;
          if (local_37 == 'Z') {
            do {
              if ((local_30 == *puVar3) && (local_2e == puVar3[1])) {
                *(int *)(puVar3 + 4) = iVar2;
                break;
              }
              cx = cx + 1;
              puVar3 = puVar3 + 6;
            } while (cx < 0x20);
          }
        }
      }
      pmxList = pmxList + 1;
    }
    iVar2 = iVar2 + 1;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ LoadShapesAndMakePmx_EnvMap__FPcP12Draw_tPixMapii(char *shapefile /*$s3*/, struct Draw_tPixMap *pmxList /*$a1*/, int x /*$s6*/, int y /*$s5*/)
 // line 375, offset 0x800b9778
	/* begin block 1 */
		// Start line: 376
		// Start offset: 0x800B9778
		// Variables:
	// 		int i; // $s0
	// 		struct shapetbl *shape; // $v0
	// 		struct Draw_tPixMap *pPmx; // $s1
	// 		int recolor_flag; // $s4
	/* end block 1 */
	// End offset: 0x800B9808
	// End Line: 395

void LoadShapesAndMakePmx_EnvMap__FPcP12Draw_tPixMapii( (char *shapefile,Draw_tPixMap *pmxList,int x,int y)
{
  int iVar1;
  char *n;
  int iVar2;
  
  iVar2 = 0;
  while (iVar1 = shapecount(shapefile), iVar2 < iVar1) {
    n = (char *)shapepointer(shapefile,iVar2);
    if (n != (char *)0x0) {
      Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap((char *)0x0,n,0x42,x,y,-1,-1,pmxList);
      pmxList = pmxList + 1;
    }
    iVar2 = iVar2 + 1;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ TexturesLoadInitial__Fv()
 // line 405, offset 0x800b9830
	/* begin block 1 */
		// Start line: 406
		// Start offset: 0x800B9830
		// Variables:
	// 		int success; // $v0

		/* begin block 1.1 */
			// Start line: 420
			// Start offset: 0x800B98B4

			/* begin block 1.1.1 */
				// Start line: 421
				// Start offset: 0x800B98BC

				/* begin block 1.1.1.1 */
					// Start line: 423
					// Start offset: 0x800B98BC
				/* end block 1.1.1.1 */
				// End offset: 0x800B98BC
				// End Line: 423
			/* end block 1.1.1 */
			// End offset: 0x800B98BC
			// End Line: 423
		/* end block 1.1 */
		// End offset: 0x800B9974
		// End Line: 444

		/* begin block 1.2 */
			// Start line: 449
			// Start offset: 0x800B9974
			// Variables:
		// 		char *tmpShapes; // $s0
		/* end block 1.2 */
		// End offset: 0x800B99CC
		// End Line: 466
	/* end block 1 */
	// End offset: 0x800B99CC
	// End Line: 466

void TexturesLoadInitial__Fv(void)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *ext;
  Draw_tPixMap *pDVar4;
  
  if (DAT_80113240 == 0) {
    if (DAT_80113234 == 0) {
      ext = "0.psh";
    }
    else {
      ext = "W0.psh";
    }
  }
  else {
    if (DAT_80113234 == 0) {
      ext = "N0.psh";
    }
    else {
      ext = "S0.psh";
    }
  }
  ext = Track_MakeTrackPathName__FPc(ext);
  DAT_8011e15c = (char *)loadshapeadr(ext,0);
  if (DAT_8011e15c != (char *)0x0) {
    Texture_ResetPaletteSharing__Fv();
    DAT_8011e160 = shapecount(DAT_8011e15c);
    LoadShapesAndMakePmx__FPcP12Draw_tPixMapiii(DAT_8011e15c,DAT_8011e164,0x40,0x100,0);
    uVar3 = uRam0000000c;
    uVar2 = uRam00000008;
    uVar1 = uRam00000004;
    pDVar4 = DAT_8011e164 + DAT_8011e160;
    *(undefined4 *)pDVar4 = __front_dtors_size;
    *(undefined4 *)&pDVar4->u1 = uVar1;
    *(undefined4 *)&pDVar4->u2 = uVar2;
    *(undefined4 *)&pDVar4->u3 = uVar3;
    DAT_8011e160 = DAT_8011e160 + 1;
    DAT_8011e168 = DAT_8011e160;
    DAT_8011e16c = DAT_8011e160;
    purgememadr(DAT_8011e15c);
    Hrz_GetHorizonPixMap__FP12Draw_tPixMap(DAT_8011e164);
    ext = Track_MakeTrackPathName__FPc("r.psh");
    ext = (char *)loadshapeadr(ext,0);
    if (ext != (char *)0x0) {
      Texture_ResetPaletteSharing__Fv();
      LoadShapesAndMakePmx_EnvMap__FPcP12Draw_tPixMapii
                (ext,(Draw_tPixMap *)&Track_gReflectionMaps,0x3e0,0);
      purgememadr(ext);
    }
    return;
  }
  do {
                    
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ Track_AnimateTextures__Fv()
 // line 491, offset 0x800b99dc
	/* begin block 1 */
		// Start line: 492
		// Start offset: 0x800B99DC
		// Variables:
	// 		struct Track_tMaterialController *controlPtr; // $a3
	// 		int controlCount; // $t0

		/* begin block 1.1 */
			// Start line: 496
			// Start offset: 0x800B9A00

			/* begin block 1.1.1 */
				// Start line: 498
				// Start offset: 0x800B9A0C

				/* begin block 1.1.1.1 */
					// Start line: 499
					// Start offset: 0x800B9A1C
					// Variables:
				// 		struct Draw_tPixMap *pmx; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x800B9A1C
				// End Line: 500

				/* begin block 1.1.1.2 */
					// Start line: 509
					// Start offset: 0x800B9ADC

					/* begin block 1.1.1.2.1 */
						// Start line: 509
						// Start offset: 0x800B9ADC

						/* begin block 1.1.1.2.1.1 */
							// Start line: 510
							// Start offset: 0x800B9AE4
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x800B9B60
						// End Line: 514
					/* end block 1.1.1.2.1 */
					// End offset: 0x800B9B60
					// End Line: 514
				/* end block 1.1.1.2 */
				// End offset: 0x800B9B60
				// End Line: 514
			/* end block 1.1.1 */
			// End offset: 0x800B9B60
			// End Line: 514
		/* end block 1.1 */
		// End offset: 0x800B9B60
		// End Line: 518
	/* end block 1 */
	// End offset: 0x800B9B6C
	// End Line: 518

void Track_AnimateTextures__Fv(void)
{
  byte bVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  
  psVar4 = psGp00000f9c + 5;
  psVar5 = psGp00000f9c;
  iVar6 = iGp00000f98;
  while (iVar6 = iVar6 + -1, iVar6 != -1) {
    if (*psVar5 == 0x80) {
      bVar1 = *(byte *)((int)psVar4 + -1);
      iVar7 = 0 / (int)(uint)bVar1;
      if (bVar1 == 0) {
        trap(0x1c00);
      }
      if (((uint)bVar1 == 0xffffffff) && (false)) {
        trap(0x1800);
      }
      bVar1 = *(byte *)(psVar4 + -4);
      if (bVar1 == 0) {
        trap(0x1c00);
      }
      if (((uint)bVar1 == 0xffffffff) && (iVar7 == -0x80000000)) {
        trap(0x1800);
      }
      iVar3 = DAT_8011e164 + (int)*(short *)(*(int *)(psVar4 + 1) + 2) * 0x10;
      cVar2 = (char)(iVar7 % (uint)bVar1);
      *(char *)(iVar3 + 1) = *(char *)(psVar4 + -3) + cVar2;
      *(char *)(iVar3 + 5) = *(char *)((int)psVar4 + -5) + cVar2;
      *(char *)(iVar3 + 9) = *(char *)(psVar4 + -2) + cVar2;
      *(char *)(iVar3 + 0xd) = *(char *)((int)psVar4 + -3) + cVar2;
    }
    else {
      if (*psVar5 == 4) {
        bVar1 = *(byte *)((int)psVar4 + -1);
        iVar7 = 0 / (int)(uint)bVar1;
        if (bVar1 == 0) {
          trap(0x1c00);
        }
        if (((uint)bVar1 == 0xffffffff) && (false)) {
          trap(0x1800);
        }
        bVar1 = *(byte *)(psVar4 + -1);
        if (bVar1 == 0) {
          trap(0x1c00);
        }
        if (((uint)bVar1 == 0xffffffff) && (iVar7 == -0x80000000)) {
          trap(0x1800);
        }
        *(short *)(*(int *)(psVar4 + 1) + 2) = *psVar4 + (short)(iVar7 % (uint)bVar1);
      }
    }
    psVar4 = psVar4 + 8;
    psVar5 = psVar5 + 8;
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Track_GetProperMultiPalShapeIndex__Fii(int shapeindex /*$a0*/, int paletteindex /*$a1*/)
 // line 525, offset 0x800b9b74
	/* begin block 1 */
		// Start line: 526
		// Start offset: 0x800B9B74

		/* begin block 1.1 */
			// Start line: 528
			// Start offset: 0x800B9B74
			// Variables:
		// 		int t; // $a2
		/* end block 1.1 */
		// End offset: 0x800B9BBC
		// End Line: 532
	/* end block 1 */
	// End offset: 0x800B9BBC
	// End Line: 533

int Track_GetProperMultiPalShapeIndex__Fii(int shapeindex,int paletteindex)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = iGp0000188c;
  while (((int)*(short *)(iVar1 + 4) != shapeindex || ((int)*(short *)(iVar1 + 2) != paletteindex)))
  {
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 8;
    if (0x7f < iVar2) {
      return shapeindex;
    }
  }
  return (int)*(short *)(iVar1 + 6);


}




// decompiled code
// original method signature: 
// void /*$ra*/ Track_ProcessFlipAndUVFlags__FiP12Draw_tPixMapT1(int uvFlag /*$s2*/, struct Draw_tPixMap *inputPmx /*$a1*/, struct Draw_tPixMap *outputPmx /*$s3*/)
 // line 538, offset 0x800b9bc4
	/* begin block 1 */
		// Start line: 539
		// Start offset: 0x800B9BC4
		// Variables:
	// 		int pmxProcessCount; // $s1
	// 		struct Draw_tPixMap newPmx[4]; // stack offset -88
	/* end block 1 */
	// End offset: 0x800B9CC4
	// End Line: 572

void Track_ProcessFlipAndUVFlags__FiP12Draw_tPixMapT1( (int uvFlag,Draw_tPixMap *inputPmx,Draw_tPixMap *outputPmx)
{
  bool bVar1;
  int mode;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  Draw_tPixMap aDStack72 [3];
  
  local_58 = *(undefined4 *)inputPmx;
  local_54 = *(undefined4 *)&inputPmx->u1;
  local_50 = *(undefined4 *)&inputPmx->u2;
  local_4c = *(undefined4 *)&inputPmx->u3;
  bVar1 = (uvFlag & 0x10U) != 0;
  if (bVar1) {
    Texture_CloneUVPmx__FP12Draw_tPixMapiT0((Draw_tPixMap *)&local_58,0,aDStack72);
  }
  uVar5 = (uint)bVar1;
  if ((uvFlag & 0x40U) != 0) {
    Texture_CloneUVPmx__FP12Draw_tPixMapiT0
              ((Draw_tPixMap *)&local_58 + uVar5,1,(Draw_tPixMap *)&local_58 + uVar5 + 1);
    uVar5 = uVar5 + 1;
  }
  if ((uvFlag & 0xeU) == 0) goto LAB_800b9cc4;
  if ((uvFlag & 2U) == 0) {
    if ((uvFlag & 4U) != 0) {
      mode = 3;
      goto LAB_800b9cb4;
    }
    mode = 4;
    if ((uvFlag & 8U) != 0) goto LAB_800b9cb4;
  }
  else {
    mode = 2;
LAB_800b9cb4:
    Texture_CloneUVPmx__FP12Draw_tPixMapiT0
              ((Draw_tPixMap *)&local_58 + uVar5,mode,(Draw_tPixMap *)&local_58 + uVar5 + 1);
  }
  uVar5 = uVar5 + 1;
LAB_800b9cc4:
  uVar2 = *(undefined4 *)(&local_58 + uVar5 * 0x10 + 4);
  uVar3 = *(undefined4 *)(&local_58 + uVar5 * 0x10 + 8);
  uVar4 = *(undefined4 *)(&local_58 + uVar5 * 0x10 + 0xc);
  *(undefined4 *)outputPmx = *(undefined4 *)(&local_58 + uVar5 * 0x10);
  *(undefined4 *)&outputPmx->u1 = uVar2;
  *(undefined4 *)&outputPmx->u2 = uVar3;
  *(undefined4 *)&outputPmx->u3 = uVar4;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Track_AssociateSingleMaterial__FP12Trk_MaterialP15Track_tMaterialP18Track_tArtresource(struct Trk_Material *inputMat /*$s1*/, struct Track_tMaterial *outputMat /*$s3*/, struct Track_tArtresource *art /*$s2*/)
 // line 577, offset 0x800b9d2c
	/* begin block 1 */
		// Start line: 578
		// Start offset: 0x800B9D2C
		// Variables:
	// 		int animCount; // $s0

		/* begin block 1.1 */
			// Start line: 578
			// Start offset: 0x800B9D2C

			/* begin block 1.1.1 */
				// Start line: 587
				// Start offset: 0x800B9D5C

				/* begin block 1.1.1.1 */
					// Start line: 594
					// Start offset: 0x800B9D78

					/* begin block 1.1.1.1.1 */
						// Start line: 595
						// Start offset: 0x800B9D8C
						// Variables:
					// 		struct Draw_tPixMap originalPmx; // stack offset -40
					// 		int shapeIndex; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800B9E30
					// End Line: 613

					/* begin block 1.1.1.1.2 */
						// Start line: 616
						// Start offset: 0x800B9E44
						// Variables:
					// 		int shapeIndex; // $a0
					/* end block 1.1.1.1.2 */
					// End offset: 0x800B9E74
					// End Line: 625
				/* end block 1.1.1.1 */
				// End offset: 0x800B9E74
				// End Line: 625
			/* end block 1.1.1 */
			// End offset: 0x800B9E74
			// End Line: 625
		/* end block 1.1 */
		// End offset: 0x800B9E7C
		// End Line: 627
	/* end block 1 */
	// End offset: 0x800B9E7C
	// End Line: 627

void Track_AssociateSingleMaterial__FP12Trk_MaterialP15Track_tMaterialP18Track_tArtresource( (Trk_Material *inputMat,Track_tMaterial *outputMat,Track_tArtresource *art)
{
  short sVar1;
  Draw_tPixMap *pDVar2;
  int shapeindex;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = 0;
  outputMat->flag = inputMat->flag;
  while ((iVar3 < 1 || (iVar3 < (int)(uint)(byte)inputMat->textureCount))) {
    if ((inputMat->uvFlag & 0x5e) == 0) {
      sVar1 = inputMat->shapeIndex;
      if ((inputMat->flag & 2) != 0) {
        shapeindex = Track_GetProperMultiPalShapeIndex__Fii((int)sVar1,(uint)inputMat->interval);
        sVar1 = (short)shapeindex;
      }
      if (iVar3 == 0) {
        outputMat->pmxIndex = sVar1;
      }
    }
    else {
      shapeindex = (int)inputMat->shapeIndex;
      if ((inputMat->flag & 2) != 0) {
        shapeindex = Track_GetProperMultiPalShapeIndex__Fii(shapeindex,(uint)inputMat->interval);
      }
      pDVar2 = art->pPmx + shapeindex + iVar3;
      local_28 = *(undefined4 *)pDVar2;
      local_24 = *(undefined4 *)&pDVar2->u1;
      local_20 = *(undefined4 *)&pDVar2->u2;
      local_1c = *(undefined4 *)&pDVar2->u3;
      Track_ProcessFlipAndUVFlags__FiP12Draw_tPixMapT1
                ((uint)inputMat->uvFlag,(Draw_tPixMap *)&local_28,art->pPmx + art->pmxCount);
      if (iVar3 == 0) {
        outputMat->pmxIndex = *(short *)&art->pmxCount;
      }
      art->pmxCount = art->pmxCount + 1;
    }
    iVar3 = iVar3 + 1;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Track_LinkMaterials__FP15SerializedGroupiP15Track_tMaterial(struct SerializedGroup *group /*$a0*/, int length /*$a1*/, struct Track_tMaterial *matList /*$s1*/)
 // line 688, offset 0x800b9e98
	/* begin block 1 */
		// Start line: 689
		// Start offset: 0x800B9E98
		// Variables:
	// 		struct Trk_Material *mats; // $s0

		/* begin block 1.1 */
			// Start line: 689
			// Start offset: 0x800B9E98

			/* begin block 1.1.1 */
				// Start line: 692
				// Start offset: 0x800B9ECC
				// Variables:
			// 		int matCount; // stack offset -48
			// 		int i; // $s7
			// 		int controlIndex; // $fp

				/* begin block 1.1.1.1 */
					// Start line: 692
					// Start offset: 0x800B9ECC
					// Variables:
				// 		struct SerializedGroup *this; // $a0

					/* begin block 1.1.1.1.1 */
						// Start line: 692
						// Start offset: 0x800B9ECC
					/* end block 1.1.1.1.1 */
					// End offset: 0x800B9ECC
					// End Line: 692
				/* end block 1.1.1.1 */
				// End offset: 0x800B9ECC
				// End Line: 692

				/* begin block 1.1.1.2 */
					// Start line: 734
					// Start offset: 0x800B9F5C

					/* begin block 1.1.1.2.1 */
						// Start line: 734
						// Start offset: 0x800B9F74

						/* begin block 1.1.1.2.1.1 */
							// Start line: 737
							// Start offset: 0x800B9F88

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 766
								// Start offset: 0x800B9FEC

								/* begin block 1.1.1.2.1.1.1.1 */
									// Start line: 766
									// Start offset: 0x800B9FEC

									/* begin block 1.1.1.2.1.1.1.1.1 */
										// Start line: 767
										// Start offset: 0x800B9FF8
										// Variables:
									// 		struct Draw_tPixMap *pmx; // $v1
									// 		int d; // $v0
									/* end block 1.1.1.2.1.1.1.1.1 */
									// End offset: 0x800BA0CC
									// End Line: 792
								/* end block 1.1.1.2.1.1.1.1 */
								// End offset: 0x800BA0CC
								// End Line: 792
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x800BA0CC
							// End Line: 792
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x800BA0CC
						// End Line: 792

						/* begin block 1.1.1.2.1.2 */
							// Start line: 796
							// Start offset: 0x800BA0CC

							/* begin block 1.1.1.2.1.2.1 */
								// Start line: 797
								// Start offset: 0x800BA0E0

								/* begin block 1.1.1.2.1.2.1.1 */
									// Start line: 799
									// Start offset: 0x800BA0E0
									// Variables:
								// 		int mm; // $s4

									/* begin block 1.1.1.2.1.2.1.1.1 */
										// Start line: 799
										// Start offset: 0x800BA0EC

										/* begin block 1.1.1.2.1.2.1.1.1.1 */
											// Start line: 802
											// Start offset: 0x800BA0F8

											/* begin block 1.1.1.2.1.2.1.1.1.1.1 */
												// Start line: 803
												// Start offset: 0x800BA114
												// Variables:
											// 		int shapeIndex; // $a1

												/* begin block 1.1.1.2.1.2.1.1.1.1.1.1 */
													// Start line: 804
													// Start offset: 0x800BA114

													/* begin block 1.1.1.2.1.2.1.1.1.1.1.1.1 */
														// Start line: 806
														// Start offset: 0x800BA128
														// Variables:
													// 		int mipmap_offset; // $v1

														/* begin block 1.1.1.2.1.2.1.1.1.1.1.1.1.1 */
															// Start line: 807
															// Start offset: 0x800BA128

															/* begin block 1.1.1.2.1.2.1.1.1.1.1.1.1.1.1 */
																// Start line: 812
																// Start offset: 0x800BA14C
																// Variables:
															// 		struct Draw_tPixMap originalPmx; // stack offset -64
															// 		int shapeIndex; // $v0
															/* end block 1.1.1.2.1.2.1.1.1.1.1.1.1.1.1 */
															// End offset: 0x800BA14C
															// End Line: 815
														/* end block 1.1.1.2.1.2.1.1.1.1.1.1.1.1 */
														// End offset: 0x800BA1D8
														// End Line: 826
													/* end block 1.1.1.2.1.2.1.1.1.1.1.1.1 */
													// End offset: 0x800BA1D8
													// End Line: 826
												/* end block 1.1.1.2.1.2.1.1.1.1.1.1 */
												// End offset: 0x800BA1D8
												// End Line: 826
											/* end block 1.1.1.2.1.2.1.1.1.1.1 */
											// End offset: 0x800BA1D8
											// End Line: 826
										/* end block 1.1.1.2.1.2.1.1.1.1 */
										// End offset: 0x800BA1D8
										// End Line: 826
									/* end block 1.1.1.2.1.2.1.1.1 */
									// End offset: 0x800BA1D8
									// End Line: 826
								/* end block 1.1.1.2.1.2.1.1 */
								// End offset: 0x800BA1E4
								// End Line: 831
							/* end block 1.1.1.2.1.2.1 */
							// End offset: 0x800BA1E4
							// End Line: 831
						/* end block 1.1.1.2.1.2 */
						// End offset: 0x800BA1E4
						// End Line: 831
					/* end block 1.1.1.2.1 */
					// End offset: 0x800BA1E4
					// End Line: 831
				/* end block 1.1.1.2 */
				// End offset: 0x800BA1F4
				// End Line: 834
			/* end block 1.1.1 */
			// End offset: 0x800BA22C
			// End Line: 849
		/* end block 1.1 */
		// End offset: 0x800BA22C
		// End Line: 849
	/* end block 1 */
	// End offset: 0x800BA22C
	// End Line: 849

void Track_LinkMaterials__FP15SerializedGroupiP15Track_tMaterial( (SerializedGroup *group,int length,Track_tMaterial *matList)
{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  SerializedGroup *pSVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  
  if (group != (SerializedGroup *)0x0) {
    iVar11 = 0;
    group = group + 1;
    iGp00000f98 = 0;
    DAT_8011e168 = DAT_8011e16c;
    local_30 = (uint)length / 10;
    pSVar4 = group;
    if (local_30 != 0) {
      do {
        if ((*(ushort *)((int)&pSVar4->m_type + 2) & 0x84) != 0) {
          iGp00000f98 = iGp00000f98 + 1;
        }
        iVar11 = iVar11 + 1;
        pSVar4 = (SerializedGroup *)((int)&pSVar4->dummy + 2);
      } while (iVar11 < (int)local_30);
    }
    if (iGp00000f98 != 0) {
      pcGp00000f9c = BWAllocMem__Fl(iGp00000f98 << 4);
    }
    iVar12 = 0;
    iVar11 = iVar12;
    while (iVar12 < (int)local_30) {
      Track_AssociateSingleMaterial__FP12Trk_MaterialP15Track_tMaterialP18Track_tArtresource
                ((Trk_Material *)group,matList,(Track_tArtresource *)&gInitialArt);
      bVar1 = *(byte *)((int)&group->m_type + 2);
      iVar6 = iVar11 * 0x10;
      if ((bVar1 & 4) == 0) {
        iVar6 = iVar11 * 0x10;
        if ((bVar1 & 0x80) != 0) {
          *(ushort *)(pcGp00000f9c + iVar6) = (ushort)*(byte *)((int)&group->m_type + 2);
          if (*(char *)&group->dummy == '\0') {
            *(undefined *)&group->dummy = 1;
          }
          pcGp00000f9c[iVar6 + 9] = *(char *)&group->dummy;
          pcGp00000f9c[iVar6 + 8] = *(char *)((int)&group->m_length + 3);
          pcVar7 = pcGp00000f9c + iVar6;
          *(short *)(pcVar7 + 10) = matList->pmxIndex;
          *(Track_tMaterial **)(pcVar7 + 0xc) = matList;
          iVar10 = DAT_8011e164 + (int)matList->pmxIndex * 0x10;
          pcVar7[4] = *(char *)(iVar10 + 1);
          pcGp00000f9c[iVar6 + 5] = *(char *)(iVar10 + 5);
          pcGp00000f9c[iVar6 + 6] = *(char *)(iVar10 + 9);
          pcGp00000f9c[iVar6 + 7] = *(char *)(iVar10 + 0xd);
          iVar10 = (uint)*(byte *)(iVar10 + 0xd) - (uint)*(byte *)(iVar10 + 1);
          cVar2 = (char)iVar10;
          if (iVar10 < 0) {
            cVar2 = -cVar2;
          }
          iVar11 = iVar11 + 1;
          pcGp00000f9c[iVar6 + 2] = cVar2 + '\x01';
        }
      }
      else {
        *(ushort *)(pcGp00000f9c + iVar6) = (ushort)bVar1;
        iVar11 = iVar11 + 1;
        *(char *)((int)(pcGp00000f9c + iVar6) + 9) = *(char *)&group->dummy;
        pcGp00000f9c[iVar6 + 8] = *(char *)((int)&group->m_length + 3);
        *(short *)(pcGp00000f9c + iVar6 + 10) = matList->pmxIndex;
        *(Track_tMaterial **)(pcGp00000f9c + iVar6 + 0xc) = matList;
      }
      iVar6 = 0;
      if (false) {
        iVar10 = 0;
        while (iVar6 < 0x20) {
          piVar8 = (int *)(iVar10 + iGp00001888);
          if ((*piVar8 != -1) && (iVar9 = piVar8[1], iVar9 == (int)*(short *)&group->m_type)) {
            iVar5 = piVar8[2];
            matList->flag = matList->flag | 8;
            iVar5 = iVar5 - iVar9;
            if ((int)*(short *)&group->m_type == (int)matList->pmxIndex) {
              matList->mipmap_offset = (char)iVar5;
            }
            else {
              puVar3 = (undefined4 *)(((int)*(short *)&group->m_type + iVar5) * 0x10 + DAT_8011e164)
              ;
              local_40 = *puVar3;
              local_3c = puVar3[1];
              local_38 = puVar3[2];
              local_34 = puVar3[3];
              Track_ProcessFlipAndUVFlags__FiP12Draw_tPixMapT1
                        ((uint)*(byte *)((int)&group->m_type + 3),(Draw_tPixMap *)&local_40,
                         (Draw_tPixMap *)(DAT_8011e164 + DAT_8011e168 * 0x10));
              DAT_8011e168 = DAT_8011e168 + 1;
              matList->mipmap_offset = '\x01';
            }
          }
          iVar10 = iVar10 + 0xc;
          iVar6 = iVar6 + 1;
        }
      }
      matList = matList + 1;
      group = (SerializedGroup *)((int)&group->dummy + 2);
      iVar12 = iVar12 + 1;
    }
    if (iGp00001888 != 0) {
      purgememadr();
    }
    purgememadr(uGp0000188c);
    DAT_8011e15c = 0;
    DAT_8011e168 = DAT_8011e160;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ ReduceObjectPrecision__FP5GroupT0i(struct Group *instGroup /*$a0*/, struct Group *defGroup /*$a1*/, int bits /*$a2*/)
 // line 963, offset 0x800ba25c
	/* begin block 1 */
		// Start line: 964
		// Start offset: 0x800BA25C
		// Variables:
	// 		int count; // $t3
	// 		struct Trk_SimpleInst *inst; // $t2

		/* begin block 1.1 */
			// Start line: 969
			// Start offset: 0x800BA264
			// Variables:
		// 		struct Group *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 969
				// Start offset: 0x800BA264
			/* end block 1.1.1 */
			// End offset: 0x800BA264
			// End Line: 969
		/* end block 1.1 */
		// End offset: 0x800BA264
		// End Line: 969

		/* begin block 1.2 */
			// Start line: 972
			// Start offset: 0x800BA270

			/* begin block 1.2.1 */
				// Start line: 974
				// Start offset: 0x800BA27C

				/* begin block 1.2.1.1 */
					// Start line: 975
					// Start offset: 0x800BA284
					// Variables:
				// 		struct Trk_ObjectDef *objDef; // $v0

					/* begin block 1.2.1.1.1 */
						// Start line: 977
						// Start offset: 0x800BA284
						// Variables:
					// 		int count; // $t1
					// 		struct CCOORD16 *pts; // $t0

						/* begin block 1.2.1.1.1.1 */
							// Start line: 987
							// Start offset: 0x800BA2A8
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800BA2B8
						// End Line: 991
					/* end block 1.2.1.1.1 */
					// End offset: 0x800BA2E8
					// End Line: 999
				/* end block 1.2.1.1 */
				// End offset: 0x800BA2E8
				// End Line: 999
			/* end block 1.2.1 */
			// End offset: 0x800BA2E8
			// End Line: 999
		/* end block 1.2 */
		// End offset: 0x800BA2E8
		// End Line: 1003
	/* end block 1 */
	// End offset: 0x800BA2F4
	// End Line: 1003

void ReduceObjectPrecision__FP5GroupT0i(Group *instGroup,Group *defGroup,int bits)
{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  Group *pGVar8;
  int iVar9;
  
  iVar3 = __Track_gObjDefs;
  pGVar8 = instGroup + 1;
  if (instGroup != (Group *)0x0) {
    iVar9 = instGroup->m_num_elements;
    while (iVar9 = iVar9 + -1, iVar9 != -1) {
      if (defGroup != (Group *)0x0) {
        psVar4 = *(short **)((int)*(short *)((int)&pGVar8[1].m_num_elements + 2) * 4 + iVar3);
        psVar6 = psVar4 + 2;
        uVar7 = (uint)*(byte *)(psVar4 + 1);
        while( true ) {
          psVar5 = psVar4 + 4;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0xffffffff) break;
          sVar1 = psVar4[3];
          sVar2 = *psVar5;
          *psVar6 = (short)((int)*psVar6 >> (bits & 0x1fU));
          psVar4[3] = (short)((int)sVar1 >> (bits & 0x1fU));
          *psVar5 = (short)((int)sVar2 >> (bits & 0x1fU));
          psVar6 = psVar6 + 4;
          psVar4 = psVar5;
        }
      }
      pGVar8 = (Group *)((int)&pGVar8->m_num_elements + (int)*(short *)&pGVar8->m_num_elements);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ InvalidatePersistentCollideBoomObjects__FP5GroupT0(struct Group *instGroup /*$a0*/, struct Group *defGroup /*$a1*/)
 // line 1012, offset 0x800ba2fc
	/* begin block 1 */
		// Start line: 1013
		// Start offset: 0x800BA2FC
		// Variables:
	// 		int count; // $a1
	// 		struct Trk_SimpleInst *inst; // $a0

		/* begin block 1.1 */
			// Start line: 1018
			// Start offset: 0x800BA30C
			// Variables:
		// 		struct Group *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 1018
				// Start offset: 0x800BA30C
			/* end block 1.1.1 */
			// End offset: 0x800BA30C
			// End Line: 1018
		/* end block 1.1 */
		// End offset: 0x800BA30C
		// End Line: 1018
	/* end block 1 */
	// End offset: 0x800BA360
	// End Line: 1025

void InvalidatePersistentCollideBoomObjects__FP5GroupT0(Group *instGroup,Group *defGroup)
{
  int iVar1;
  
  if ((instGroup != (Group *)0x0) && (defGroup != (Group *)0x0)) {
    iVar1 = instGroup->m_num_elements;
    instGroup = instGroup + 1;
    while (iVar1 = iVar1 + -1, iVar1 != -1) {
      if (**(short **)
            ((int)*(short *)((int)&instGroup[1].m_num_elements + 2) * 4 + __Track_gObjDefs) != -1) {
        *(undefined *)((int)&instGroup->m_num_elements + 2) = 0;
      }
      instGroup = (Group *)((int)&instGroup->m_num_elements +
                           (int)*(short *)&instGroup->m_num_elements);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ CalcObjectBoundingSphere__FP5GroupT0(struct Group *defGroup /*$a0*/, struct Group *boundingSphereGroup /*$s3*/)
 // line 1064, offset 0x800ba368
	/* begin block 1 */
		// Start line: 1065
		// Start offset: 0x800BA368
		// Variables:
	// 		struct Trk_ObjectDef *objDef; // $a2
	// 		struct tBoundingSphere *bSphere; // $s2
	// 		int objCount; // $s5

		/* begin block 1.1 */
			// Start line: 1065
			// Start offset: 0x800BA368
			// Variables:
		// 		struct Group *this; // $s3

			/* begin block 1.1.1 */
				// Start line: 1065
				// Start offset: 0x800BA368
			/* end block 1.1.1 */
			// End offset: 0x800BA368
			// End Line: 1065
		/* end block 1.1 */
		// End offset: 0x800BA368
		// End Line: 1065

		/* begin block 1.2 */
			// Start line: 1065
			// Start offset: 0x800BA368

			/* begin block 1.2.1 */
				// Start line: 1065
				// Start offset: 0x800BA368
			/* end block 1.2.1 */
			// End offset: 0x800BA368
			// End Line: 1065
		/* end block 1.2 */
		// End offset: 0x800BA368
		// End Line: 1065

		/* begin block 1.3 */
			// Start line: 1065
			// Start offset: 0x800BA368
			// Variables:
		// 		int i; // $s1

			/* begin block 1.3.1 */
				// Start line: 1073
				// Start offset: 0x800BA3A0
				// Variables:
			// 		int ptCount; // $a3
			// 		struct CCOORD16 *pts; // $t0
			// 		struct coorddef cp; // stack offset -48
			// 		int radius; // $t3

				/* begin block 1.3.1.1 */
					// Start line: 1096
					// Start offset: 0x800BA428

					/* begin block 1.3.1.1.1 */
						// Start line: 1106
						// Start offset: 0x800BA4EC
						// Variables:
					// 		int diff; // $a2
					/* end block 1.3.1.1.1 */
					// End offset: 0x800BA554
					// End Line: 1112
				/* end block 1.3.1.1 */
				// End offset: 0x800BA560
				// End Line: 1112
			/* end block 1.3.1 */
			// End offset: 0x800BA560
			// End Line: 1117
		/* end block 1.3 */
		// End offset: 0x800BA5A4
		// End Line: 1126
	/* end block 1 */
	// End offset: 0x800BA5A4
	// End Line: 1126

void CalcObjectBoundingSphere__FP5GroupT0(Group *defGroup,Group *boundingSphereGroup)
{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  Group *pGVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_30;
  int local_2c;
  int local_28;
  
  pGVar13 = boundingSphereGroup + 1;
  iVar12 = 0;
  puVar11 = (undefined2 *)((int)&boundingSphereGroup[2].m_num_elements + 2);
  iVar14 = defGroup->m_num_elements;
  while (iVar12 < iVar14) {
    psVar6 = *(short **)(iVar12 * 4 + __Track_gObjDefs);
    uVar7 = (uint)*(byte *)(psVar6 + 1);
    psVar8 = psVar6 + 2;
    local_28 = 0;
    local_2c = 0;
    local_30 = 0;
    psVar9 = psVar6;
    while (uVar7 = uVar7 - 1, uVar7 != 0xffffffff) {
      sVar2 = *psVar8;
      psVar8 = psVar8 + 4;
      local_30 = local_30 + (int)sVar2;
      local_2c = local_2c + (int)psVar9[3];
      local_28 = local_28 + (int)psVar9[4];
      psVar9 = psVar9 + 4;
    }
    bVar1 = *(byte *)(psVar6 + 1);
    iVar15 = local_30 / (int)(uint)bVar1;
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if (((uint)bVar1 == 0xffffffff) && (local_30 == -0x80000000)) {
      trap(0x1800);
    }
    bVar1 = *(byte *)(psVar6 + 1);
    iVar16 = local_2c / (int)(uint)bVar1;
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if (((uint)bVar1 == 0xffffffff) && (local_2c == -0x80000000)) {
      trap(0x1800);
    }
    bVar1 = *(byte *)(psVar6 + 1);
    iVar17 = local_28 / (int)(uint)bVar1;
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if (((uint)bVar1 == 0xffffffff) && (local_28 == -0x80000000)) {
      trap(0x1800);
    }
    psVar9 = psVar6 + 2;
    iVar10 = 0;
    uVar7 = (uint)*(byte *)(psVar6 + 1);
    while( true ) {
      uVar7 = uVar7 - 1;
      if (uVar7 == 0xffffffff) break;
      iVar3 = iVar15 - (int)*psVar9 >> 6;
      iVar4 = iVar16 - (int)psVar6[3] >> 6;
      iVar5 = iVar17 - (int)psVar6[4] >> 6;
      iVar3 = iVar3 * iVar3 + iVar4 * iVar4 + iVar5 * iVar5;
      if (iVar10 < iVar3) {
        iVar10 = iVar3;
      }
      psVar9 = psVar9 + 4;
      psVar6 = psVar6 + 4;
    }
    local_30._0_2_ = (undefined2)iVar15;
    iVar12 = iVar12 + 1;
    *(undefined2 *)&pGVar13->m_num_elements = (undefined2)local_30;
    local_2c._0_2_ = (undefined2)iVar16;
    puVar11[-2] = (undefined2)local_2c;
    local_28._0_2_ = (undefined2)iVar17;
    pGVar13 = pGVar13 + 2;
    puVar11[-1] = (undefined2)local_28;
    uVar7 = fixedsqrt(iVar10 << 10);
    *puVar11 = (short)(uVar7 >> 7);
    puVar11 = puVar11 + 4;
    boundingSphereGroup->m_num_elements = boundingSphereGroup->m_num_elements + 1;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ CalcObjDefPtrs__Fv()
 // line 1179, offset 0x800ba5c8
	/* begin block 1 */
		// Start line: 1180
		// Start offset: 0x800BA5C8

		/* begin block 1.1 */
			// Start line: 1180
			// Start offset: 0x800BA5C8
			// Variables:
		// 		struct Group *this; // $v1

			/* begin block 1.1.1 */
				// Start line: 1180
				// Start offset: 0x800BA5C8
			/* end block 1.1.1 */
			// End offset: 0x800BA5C8
			// End Line: 1180
		/* end block 1.1 */
		// End offset: 0x800BA5C8
		// End Line: 1180

		/* begin block 1.2 */
			// Start line: 1180
			// Start offset: 0x800BA5C8
			// Variables:
		// 		struct Group *this; // $v0

			/* begin block 1.2.1 */
				// Start line: 1180
				// Start offset: 0x800BA5C8
			/* end block 1.2.1 */
			// End offset: 0x800BA5C8
			// End Line: 1180
		/* end block 1.2 */
		// End offset: 0x800BA5C8
		// End Line: 1180

		/* begin block 1.3 */
			// Start line: 1180
			// Start offset: 0x800BA5C8
			// Variables:
		// 		int i; // $a1

			/* begin block 1.3.1 */
				// Start line: 1186
				// Start offset: 0x800BA5E4

				/* begin block 1.3.1.1 */
					// Start line: 1186
					// Start offset: 0x800BA5E4
					// Variables:
				// 		struct Group *this; // $a2

					/* begin block 1.3.1.1.1 */
						// Start line: 1186
						// Start offset: 0x800BA5E4
					/* end block 1.3.1.1.1 */
					// End offset: 0x800BA5E4
					// End Line: 1186
				/* end block 1.3.1.1 */
				// End offset: 0x800BA5E4
				// End Line: 1186
			/* end block 1.3.1 */
			// End offset: 0x800BA5F8
			// End Line: 1187
		/* end block 1.3 */
		// End offset: 0x800BA614
		// End Line: 1187

		/* begin block 1.4 */
			// Start line: 1187
			// Start offset: 0x800BA614
			// Variables:
		// 		struct Group *this; // $v0

			/* begin block 1.4.1 */
				// Start line: 1187
				// Start offset: 0x800BA614
			/* end block 1.4.1 */
			// End offset: 0x800BA614
			// End Line: 1187
		/* end block 1.4 */
		// End offset: 0x800BA614
		// End Line: 1187
	/* end block 1 */
	// End offset: 0x800BA614
	// End Line: 1187

void CalcObjDefPtrs__Fv(void)
{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = _gPersistObjDef;
  iVar4 = 1;
  piVar3 = (int *)(_gObjDefOffsetsGroup + 8);
  *(int **)(_gObjDefOffsetsGroup + 4) = _gPersistObjDef + 1;
  while (bVar1 = iVar4 < *piVar2, iVar4 = iVar4 + 1, bVar1) {
    *piVar3 = piVar3[-1] + *piVar3;
    piVar3 = piVar3 + 1;
  }
  __Track_gObjDefs = _gObjDefOffsetsGroup + 4;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Track_InitPersistentData__FP15SerializedGroup(struct SerializedGroup *perGroup /*$s2*/)
 // line 1212, offset 0x800ba62c
	/* begin block 1 */
		// Start line: 1213
		// Start offset: 0x800BA62C
		// Variables:
	// 		struct SerializedGroup **persistentGroups[0]; // $s3
	// 		int count; // $s2

		/* begin block 1.1 */
			// Start line: 1213
			// Start offset: 0x800BA62C
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x800BA6B0
		// End Line: 1222

		/* begin block 1.2 */
			// Start line: 1224
			// Start offset: 0x800BA6B0
			// Variables:
		// 		int i; // $s1

			/* begin block 1.2.1 */
				// Start line: 1230
				// Start offset: 0x800BA6D4

				/* begin block 1.2.1.1 */
					// Start line: 1232
					// Start offset: 0x800BA6E0

					/* begin block 1.2.1.1.1 */
						// Start line: 1233
						// Start offset: 0x800BA714

						/* begin block 1.2.1.1.1.1 */
							// Start line: 1235
							// Start offset: 0x800BA714

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 1235
								// Start offset: 0x800BA714
								// Variables:
							// 		struct SerializedGroup *this; // $a0

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 1235
									// Start offset: 0x800BA714
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x800BA714
								// End Line: 1235
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x800BA714
							// End Line: 1235
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800BA714
						// End Line: 1235

						/* begin block 1.2.1.1.1.2 */
							// Start line: 1235
							// Start offset: 0x800BA714
						/* end block 1.2.1.1.1.2 */
						// End offset: 0x800BA714
						// End Line: 1235

						/* begin block 1.2.1.1.1.3 */
							// Start line: 1249
							// Start offset: 0x800BA734
						/* end block 1.2.1.1.1.3 */
						// End offset: 0x800BA734
						// End Line: 1249

						/* begin block 1.2.1.1.1.4 */
							// Start line: 1256
							// Start offset: 0x800BA754
						/* end block 1.2.1.1.1.4 */
						// End offset: 0x800BA754
						// End Line: 1256

						/* begin block 1.2.1.1.1.5 */
							// Start line: 1263
							// Start offset: 0x800BA770
						/* end block 1.2.1.1.1.5 */
						// End offset: 0x800BA770
						// End Line: 1263

						/* begin block 1.2.1.1.1.6 */
							// Start line: 1269
							// Start offset: 0x800BA78C

							/* begin block 1.2.1.1.1.6.1 */
								// Start line: 1270
								// Start offset: 0x800BA78C

								/* begin block 1.2.1.1.1.6.1.1 */
									// Start line: 1270
									// Start offset: 0x800BA78C
								/* end block 1.2.1.1.1.6.1.1 */
								// End offset: 0x800BA78C
								// End Line: 1270
							/* end block 1.2.1.1.1.6.1 */
							// End offset: 0x800BA78C
							// End Line: 1270
						/* end block 1.2.1.1.1.6 */
						// End offset: 0x800BA78C
						// End Line: 1270

						/* begin block 1.2.1.1.1.7 */
							// Start line: 1270
							// Start offset: 0x800BA78C
						/* end block 1.2.1.1.1.7 */
						// End offset: 0x800BA78C
						// End Line: 1270

						/* begin block 1.2.1.1.1.8 */
							// Start line: 1276
							// Start offset: 0x800BA7A8

							/* begin block 1.2.1.1.1.8.1 */
								// Start line: 1277
								// Start offset: 0x800BA7BC

								/* begin block 1.2.1.1.1.8.1.1 */
									// Start line: 1277
									// Start offset: 0x800BA7BC
								/* end block 1.2.1.1.1.8.1.1 */
								// End offset: 0x800BA7BC
								// End Line: 1277
							/* end block 1.2.1.1.1.8.1 */
							// End offset: 0x800BA7BC
							// End Line: 1277
						/* end block 1.2.1.1.1.8 */
						// End offset: 0x800BA7BC
						// End Line: 1278

						/* begin block 1.2.1.1.1.9 */
							// Start line: 1280
							// Start offset: 0x800BA7BC
						/* end block 1.2.1.1.1.9 */
						// End offset: 0x800BA7BC
						// End Line: 1280

						/* begin block 1.2.1.1.1.10 */
							// Start line: 1284
							// Start offset: 0x800BA7BC
						/* end block 1.2.1.1.1.10 */
						// End offset: 0x800BA7BC
						// End Line: 1284
					/* end block 1.2.1.1.1 */
					// End offset: 0x800BA7BC
					// End Line: 1284
				/* end block 1.2.1.1 */
				// End offset: 0x800BA7BC
				// End Line: 1284
			/* end block 1.2.1 */
			// End offset: 0x800BA7BC
			// End Line: 1284
		/* end block 1.2 */
		// End offset: 0x800BA7C8
		// End Line: 1286
	/* end block 1 */
	// End offset: 0x800BA7E0
	// End Line: 1293

void Track_InitPersistentData__FP15SerializedGroup(SerializedGroup *perGroup)
{
  int iVar1;
  SerializedGroup *pSVar2;
  Group *simGroup;
  int index;
  SerializedGroup **ppSVar3;
  SerializedGroup **ppSVar4;
  int iVar5;
  undefined auStack48 [16];
  
  index = 0;
  _gObjDefOffsetsGroup = (Group *)0x0;
  iVar1 = -(((uint)(perGroup->m_num_elements << 5) >> 3) + 7 & 0xfffffff8);
  ppSVar3 = (SerializedGroup **)(&stack0xffffffe0 + iVar1);
  ppSVar4 = ppSVar3;
  if (0 < perGroup->m_num_elements) {
    do {
      pSVar2 = LocateGroupNum__15SerializedGroupi(perGroup,index,auStack48[iVar1]);
      *ppSVar4 = pSVar2;
      index = index + 1;
      ppSVar4 = ppSVar4 + 1;
    } while (index < perGroup->m_num_elements);
  }
  LocateGroupType__15SerializedGroupii(perGroup,8,0,auStack48[iVar1]);
  iVar5 = perGroup->m_num_elements;
  index = 0;
  while (index < iVar5) {
    if (true) {
      switch((*ppSVar3)->m_type) {
      case 2:
        Track_LinkMaterials__FP15SerializedGroupiP15Track_tMaterial
                  (*ppSVar3,(*ppSVar3)->m_length + -0x10,0,auStack48[iVar1]);
        break;
      case 7:
        _gPersistObjInst =
             CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem
                       (*ppSVar3,*ppSVar3,0,auStack48[iVar1]);
        break;
      case 8:
        _gPersistObjDef =
             CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem
                       (*ppSVar3,*ppSVar3,0,auStack48[iVar1]);
        break;
      case 0xf:
        simGroup = CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem
                             (*ppSVar3,*ppSVar3,0,auStack48[iVar1]);
        BWorldSm_Init__FP5Group(simGroup,auStack48[iVar1]);
        break;
      case 0x24:
        _gPersistMidgroundObjInst =
             CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem
                       (*ppSVar3,*ppSVar3,0,auStack48[iVar1]);
        break;
      case 0x26:
        _gObjDefOffsetsGroup =
             CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem
                       (*ppSVar3,*ppSVar3,0,auStack48[iVar1]);
      }
    }
    ppSVar3 = ppSVar3 + 1;
    index = index + 1;
  }
  if (_gObjDefOffsetsGroup != (Group *)0x0) {
    CalcObjDefPtrs__Fv(auStack48[iVar1]);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Track_Init__FPc(char *tempName /*$s0*/)
 // line 1312, offset 0x800ba808
	/* begin block 1 */
		// Start line: 1313
		// Start offset: 0x800BA808
		// Variables:
	// 		char trackName[128]; // stack offset -168
	// 		struct SerializedGroup *trackGroup; // $s0
	// 		struct SerializedGroup *chunkGroup; // $s0
	// 		int trackFileSize; // $s2
	// 		struct SerializedGroup *persistentGroup; // $s7

		/* begin block 1.1 */
			// Start line: 1313
			// Start offset: 0x800BA808
			// Variables:
		// 		int size; // $s1

			/* begin block 1.1.1 */
				// Start line: 1313
				// Start offset: 0x800BA808
			/* end block 1.1.1 */
			// End offset: 0x800BA8C4
			// End Line: 1336
		/* end block 1.1 */
		// End offset: 0x800BA8C4
		// End Line: 1336

		/* begin block 1.2 */
			// Start line: 1336
			// Start offset: 0x800BA8C4

			/* begin block 1.2.1 */
				// Start line: 1336
				// Start offset: 0x800BA8C4
			/* end block 1.2.1 */
			// End offset: 0x800BA8C4
			// End Line: 1336
		/* end block 1.2 */
		// End offset: 0x800BA8C4
		// End Line: 1336

		/* begin block 1.3 */
			// Start line: 1336
			// Start offset: 0x800BA8C4

			/* begin block 1.3.1 */
				// Start line: 1336
				// Start offset: 0x800BA8C4
			/* end block 1.3.1 */
			// End offset: 0x800BA8C4
			// End Line: 1336
		/* end block 1.3 */
		// End offset: 0x800BA8C4
		// End Line: 1336

		/* begin block 1.4 */
			// Start line: 1336
			// Start offset: 0x800BA8C4

			/* begin block 1.4.1 */
				// Start line: 1336
				// Start offset: 0x800BA8C4
			/* end block 1.4.1 */
			// End offset: 0x800BA8C4
			// End Line: 1336
		/* end block 1.4 */
		// End offset: 0x800BA8C4
		// End Line: 1336

		/* begin block 1.5 */
			// Start line: 1368
			// Start offset: 0x800BA9D4

			/* begin block 1.5.1 */
				// Start line: 1368
				// Start offset: 0x800BA9D4
			/* end block 1.5.1 */
			// End offset: 0x800BA9D4
			// End Line: 1368
		/* end block 1.5 */
		// End offset: 0x800BA9D4
		// End Line: 1368

		/* begin block 1.6 */
			// Start line: 1368
			// Start offset: 0x800BA9D4
			// Variables:
		// 		int i; // $s2

			/* begin block 1.6.1 */
				// Start line: 1395
				// Start offset: 0x800BAA94
				// Variables:
			// 		struct Chunk *chunkDat; // $s1
			// 		struct SerializedGroup *nextChunkGroup; // $s4
			// 		struct SerializedGroup *group; // $v0
			// 		short *visList; // $v1
			// 		int count; // $t1

				/* begin block 1.6.1.1 */
					// Start line: 1415
					// Start offset: 0x800BAADC
					// Variables:
				// 		struct SerializedGroup *this; // $v0

					/* begin block 1.6.1.1.1 */
						// Start line: 1415
						// Start offset: 0x800BAADC
					/* end block 1.6.1.1.1 */
					// End offset: 0x800BAADC
					// End Line: 1415
				/* end block 1.6.1.1 */
				// End offset: 0x800BAADC
				// End Line: 1415

				/* begin block 1.6.1.2 */
					// Start line: 1430
					// Start offset: 0x800BAB14
					// Variables:
				// 		int srcDataInd; // $t0
				// 		int j; // $a1
				/* end block 1.6.1.2 */
				// End offset: 0x800BABA0
				// End Line: 1449
			/* end block 1.6.1 */
			// End offset: 0x800BABA0
			// End Line: 1454
		/* end block 1.6 */
		// End offset: 0x800BABB4
		// End Line: 1455

		/* begin block 1.7 */
			// Start line: 1458
			// Start offset: 0x800BABB4
			// Variables:
		// 		struct Group *this; // $v0

			/* begin block 1.7.1 */
				// Start line: 1458
				// Start offset: 0x800BABB4
			/* end block 1.7.1 */
			// End offset: 0x800BABB4
			// End Line: 1458
		/* end block 1.7 */
		// End offset: 0x800BABB4
		// End Line: 1458
	/* end block 1 */
	// End offset: 0x800BABB4
	// End Line: 1458

void Track_Init__FPc(char *tempName)
{
  int len;
  SimpleMem *this;
  void *pvVar1;
  SerializedGroup *perGroup;
  SerializedGroup *this_00;
  SaveSurface *this_01;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Chunk *this_02;
  SerializedGroup *pSVar10;
  char acStack168 [128];
  
  pSGp00000f80 = (SaveSurface *)0x0;
  uGp00000f88 = 0;
  sprintf(acStack168,"%s",tempName);
  len = filesize(tempName);
  _Chunk_lightTable = (int *)reservememadr("lighttbl",0x404,0);
  TextureProcess_Init__Fv();
  iVar9 = len + 0x9080;
  InitArtResources__Fv();
  TexturesLoadInitial__Fv();
  this = (SimpleMem *)__builtin_new(0xc);
  pvVar1 = (void *)reservememadr("Track_mem",iVar9,0);
  this->heap = pvVar1;
  this->freeMem = pvVar1;
  if (pvVar1 == (void *)0x0) {
    iVar9 = 0;
  }
  this->freeMemSize = iVar9;
  pSGp00000f8c = this;
  pvVar1 = FeignAlloc__9SimpleMemi(this,len);
  this_00 = (SerializedGroup *)loadfileatadr(acStack168,(int)pvVar1 + 0x9080);
  pGGp00000f68 = LocateCreateGroupType__15SerializedGroupiP9SimpleMemi(this_00,0x1f,pSGp00000f8c,0);
  pGGp00000f68 = pGGp00000f68 + 1;
  _Chunk_chunkCenters =
       LocateCreateGroupType__15SerializedGroupiP9SimpleMemi(this_00,0x20,pSGp00000f8c,0);
  _Chunk_chunkCenters = _Chunk_chunkCenters + 1;
  perGroup = LocateGroupType__15SerializedGroupii(this_00,0x23,0);
  pSVar10 = perGroup + 1;
  piVar3 = _Chunk_lightTable;
  if ((((uint)pSVar10 | (uint)_Chunk_lightTable) & 3) == 0) {
    do {
      len = pSVar10->m_length;
      iVar9 = pSVar10->dummy;
      iVar8 = pSVar10->m_num_elements;
      *piVar3 = pSVar10->m_type;
      piVar3[1] = len;
      piVar3[2] = iVar9;
      piVar3[3] = iVar8;
      pSVar10 = pSVar10 + 1;
      piVar3 = piVar3 + 4;
    } while (pSVar10 != perGroup + 0x41);
  }
  else {
    do {
      len = pSVar10->m_length;
      iVar9 = pSVar10->dummy;
      iVar8 = pSVar10->m_num_elements;
      *piVar3 = pSVar10->m_type;
      piVar3[1] = len;
      piVar3[2] = iVar9;
      piVar3[3] = iVar8;
      pSVar10 = pSVar10 + 1;
      piVar3 = piVar3 + 4;
    } while (pSVar10 != perGroup + 0x41);
  }
  perGroup = LocateGroupType__15SerializedGroupii(this_00,0x23,0);
  len = 0;
  iVar9 = 0;
  iVar8 = 0;
  uGp00000fa0 = perGroup->m_length - 0x10U >> 2;
  pvGp00000f60 = Alloc__9SimpleMemii(pSGp00000f8c,pGGp00000f68[7].m_num_elements * 0x48,0);
  pvGp00000f64 = Alloc__9SimpleMemii(pSGp00000f8c,pGGp00000f68[7].m_num_elements,0);
  pvGp00000f6c = Alloc__9SimpleMemii(pSGp00000f8c,pGGp00000f68[7].m_num_elements * 0x70,0);
  Chunk_Init__Fv();
  perGroup = LocateGroupType__15SerializedGroupii(this_00,0x21,0);
  this_00 = LocateGroupType__15SerializedGroupii(this_00,0x1d,0);
  while (len < pGGp00000f68[7].m_num_elements) {
    this_02 = (Chunk *)((int)pvGp00000f6c + iVar8);
    pSVar10 = (SerializedGroup *)0x0;
    if (len < pGGp00000f68[7].m_num_elements + -1) {
      pSVar10 = LocateNextGroupType__15SerializedGroupi(this_00,0x1d);
    }
    InstanceGroup__5ChunkP15SerializedGroupP9SimpleMem(this_02,this_00,pSGp00000f8c);
    this_00 = LocateGroupType__15SerializedGroupii(this_00,4,0);
    iVar7 = this_00->m_num_elements;
    this_00 = this_00 + 1;
    iVar6 = 0;
    if (0x24 < iVar7) {
      iVar7 = 0x24;
    }
    iVar4 = 0;
    if (0 < iVar7) {
      puVar5 = (ushort *)(iVar9 + (int)pvGp00000f60);
      do {
        if ((int)((uint)*(ushort *)&this_00->m_type & 0x3ff) < pGGp00000f68[7].m_num_elements) {
          *puVar5 = *(ushort *)&this_00->m_type;
          puVar5 = puVar5 + 1;
          iVar4 = iVar4 + 1;
        }
        iVar6 = iVar6 + 1;
        this_00 = (SerializedGroup *)((int)&this_00->m_type + 2);
      } while (iVar6 < iVar7);
    }
    *(undefined *)((int)pvGp00000f64 + len) = (char)iVar4;
    if (iVar4 < 0x24) {
      puVar2 = (undefined2 *)((int)pvGp00000f60 + iVar4 * 2 + iVar9);
      do {
        *puVar2 = 0x3ff;
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar4 < 0x24);
    }
    iVar9 = iVar9 + 0x40;
    iVar8 = iVar8 + 0x70;
    len = len + 1;
    this_00 = pSVar10;
  }
  Track_InitPersistentData__FP15SerializedGroup(perGroup);
  ResizeToFit__9SimpleMem(pSGp00000f8c);
  Track_MakeTrackPathName__FPc(".grp");
  pGGp00000f7c = (Group *)reservememadr("bsphere",pGGp00000f70->m_num_elements << 3 | 4,0);
  CalcObjectBoundingSphere__FP5GroupT0(pGGp00000f70,pGGp00000f7c);
  ReduceObjectPrecision__FP5GroupT0i(pGGp00000f78,pGGp00000f70,2);
  InvalidatePersistentCollideBoomObjects__FP5GroupT0(pGGp00000f74,pGGp00000f70);
  this_01 = (SaveSurface *)__builtin_new(8);
  pSGp00000f80 = __11SaveSurfacei(this_01,0x30);
  Track_LoadObjectKillData__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Track_DeInit__Fv()
 // line 1492, offset 0x800bac74
	/* begin block 1 */
		// Start line: 1493
		// Start offset: 0x800BAC74

		/* begin block 1.1 */
			// Start line: 1494
			// Start offset: 0x800BAC8C

			/* begin block 1.1.1 */
				// Start line: 1494
				// Start offset: 0x800BAC8C
			/* end block 1.1.1 */
			// End offset: 0x800BAC8C
			// End Line: 1494
		/* end block 1.1 */
		// End offset: 0x800BACA4
		// End Line: 1494
	/* end block 1 */
	// End offset: 0x800BAD28
	// End Line: 1530

void Track_DeInit__Fv(void)
{
  undefined4 *deleteMe;
  
  deleteMe = puGp00000f8c;
  if (puGp00000f8c != (undefined4 *)0x0) {
    purgememadr(*puGp00000f8c);
    deleteMe[1] = 0;
    __builtin_delete(deleteMe);
  }
  if (pSGp00000f80 != (SaveSurface *)0x0) {
    ___11SaveSurface(pSGp00000f80,3);
    pSGp00000f80 = (SaveSurface *)0x0;
  }
  if (DAT_8011e15c != 0) {
    DAT_8011e15c = 0;
  }
  BWorldSm_DeInit__Fv();
  DeInitArtResources__Fv();
  if (_Chunk_lightTable != 0) {
    purgememadr();
    _Chunk_lightTable = 0;
  }
  if (iGp00000f7c != 0) {
    purgememadr();
  }
  uGp00000f70 = 0;
  uGp00000f74 = 0;
  uGp00000f78 = 0;
  iGp00000f7c = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Track_AnimateTrackLighting__Fv()
 // line 1537, offset 0x800bad48
	/* begin block 1 */
		// Start line: 1538
		// Start offset: 0x800BAD48
	/* end block 1 */
	// End offset: 0x800BAD48
	// End Line: 1538

void Track_AnimateTrackLighting__Fv(void)
{
  return;


}




// decompiled code
// original method signature: 
// char * /*$ra*/ KillFile_OpenRead__Fv()
 // line 1720, offset 0x800bad50
	/* begin block 1 */
		// Start line: 1721
		// Start offset: 0x800BAD50
		// Variables:
	// 		char pathName[128]; // stack offset -136
	/* end block 1 */
	// End offset: 0x800BAD50
	// End Line: 1721

char * KillFile_OpenRead__Fv(void)
{
  char *pcVar1;
  char acStack136 [128];
  
  pcVar1 = Track_MakeTrackPathName__FPc(".kil");
  sprintf(acStack136,"%s",pcVar1);
  pcVar1 = (char *)loadfileadrz(acStack136,0);
  return pcVar1;


}




// decompiled code
// original method signature: 
// void /*$ra*/ KillFile_ReadEntry__FPciRiT2(char *filePtr /*$a0*/, int entryInd /*$a1*/, int *chunkInd /*$a2*/, int *objectInd /*$a3*/)
 // line 1732, offset 0x800bad94
	/* begin block 1 */
		// Start line: 1733
		// Start offset: 0x800BAD94
	/* end block 1 */
	// End offset: 0x800BAD94
	// End Line: 1734

void KillFile_ReadEntry__FPciRiT2(char *filePtr,int entryInd,int *chunkInd,int *objectInd)
{
  *chunkInd = *(int *)(filePtr + entryInd * 8 + 4);
  *objectInd = *(int *)(filePtr + entryInd * 8 + 8);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Track_LoadObjectKillData__Fv()
 // line 1742, offset 0x800badb4
	/* begin block 1 */
		// Start line: 1743
		// Start offset: 0x800BADB4
		// Variables:
	// 		char *filePtr; // $s5
	// 		int chunkInd; // stack offset -40
	// 		int objInd; // stack offset -36

		/* begin block 1.1 */
			// Start line: 1754
			// Start offset: 0x800BADE8
			// Variables:
		// 		int i; // $s4

			/* begin block 1.1.1 */
				// Start line: 1754
				// Start offset: 0x800BADEC
				// Variables:
			// 		struct Chunk *chunkDat; // $a2
			// 		struct Group *group; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 1756
					// Start offset: 0x800BAE00

					/* begin block 1.1.1.1.1 */
						// Start line: 1767
						// Start offset: 0x800BAE3C
						// Variables:
					// 		struct Trk_SimpleInst *inst; // $s2

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1767
							// Start offset: 0x800BAE3C
							// Variables:
						// 		struct Group *this; // $a1

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1767
								// Start offset: 0x800BAE3C
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800BAE3C
							// End Line: 1767
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800BAE3C
						// End Line: 1767

						/* begin block 1.1.1.1.1.2 */
							// Start line: 1767
							// Start offset: 0x800BAE3C

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 1767
								// Start offset: 0x800BAE3C
								// Variables:
							// 		struct Group *this; // $a1

								/* begin block 1.1.1.1.1.2.1.1 */
									// Start line: 1767
									// Start offset: 0x800BAE3C
								/* end block 1.1.1.1.1.2.1.1 */
								// End offset: 0x800BAE3C
								// End Line: 1767
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x800BAE3C
							// End Line: 1767
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x800BAE54
						// End Line: 1770

						/* begin block 1.1.1.1.1.3 */
							// Start line: 1770
							// Start offset: 0x800BAE54
							// Variables:
						// 		int index; // $v1
						/* end block 1.1.1.1.1.3 */
						// End offset: 0x800BAE74
						// End Line: 1781

						/* begin block 1.1.1.1.1.4 */
							// Start line: 1784
							// Start offset: 0x800BAE74
							// Variables:
						// 		struct Group *simGroup; // $v0

							/* begin block 1.1.1.1.1.4.1 */
								// Start line: 1785
								// Start offset: 0x800BAE74

								/* begin block 1.1.1.1.1.4.1.1 */
									// Start line: 1786
									// Start offset: 0x800BAE84
									// Variables:
								// 		struct Trk_SimObject *simObjs; // $a0
								// 		int numElements; // $s3

									/* begin block 1.1.1.1.1.4.1.1.1 */
										// Start line: 1786
										// Start offset: 0x800BAE84
										// Variables:
									// 		struct Group *this; // $v0

										/* begin block 1.1.1.1.1.4.1.1.1.1 */
											// Start line: 1786
											// Start offset: 0x800BAE84
										/* end block 1.1.1.1.1.4.1.1.1.1 */
										// End offset: 0x800BAE84
										// End Line: 1786
									/* end block 1.1.1.1.1.4.1.1.1 */
									// End offset: 0x800BAE84
									// End Line: 1786

									/* begin block 1.1.1.1.1.4.1.1.2 */
										// Start line: 1786
										// Start offset: 0x800BAE84
										// Variables:
									// 		struct Group *this; // $v0

										/* begin block 1.1.1.1.1.4.1.1.2.1 */
											// Start line: 1786
											// Start offset: 0x800BAE84
										/* end block 1.1.1.1.1.4.1.1.2.1 */
										// End offset: 0x800BAE84
										// End Line: 1786
									/* end block 1.1.1.1.1.4.1.1.2 */
									// End offset: 0x800BAE84
									// End Line: 1786

									/* begin block 1.1.1.1.1.4.1.1.3 */
										// Start line: 1786
										// Start offset: 0x800BAE84
										// Variables:
									// 		int j; // $s1
									/* end block 1.1.1.1.1.4.1.1.3 */
									// End offset: 0x800BAEC4
									// End Line: 1803
								/* end block 1.1.1.1.1.4.1.1 */
								// End offset: 0x800BAEC4
								// End Line: 1803
							/* end block 1.1.1.1.1.4.1 */
							// End offset: 0x800BAEC4
							// End Line: 1803
						/* end block 1.1.1.1.1.4 */
						// End offset: 0x800BAEC4
						// End Line: 1803
					/* end block 1.1.1.1.1 */
					// End offset: 0x800BAED4
					// End Line: 1811
				/* end block 1.1.1.1 */
				// End offset: 0x800BAED4
				// End Line: 1815
			/* end block 1.1.1 */
			// End offset: 0x800BAED4
			// End Line: 1815
		/* end block 1.1 */
		// End offset: 0x800BAEDC
		// End Line: 1818
	/* end block 1 */
	// End offset: 0x800BAEE4
	// End Line: 1821

void Track_LoadObjectKillData__Fv(void)
{
  int *filePtr;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  coorddef *a;
  int *piVar5;
  int entryInd;
  int local_28;
  int local_24;
  
  filePtr = (int *)KillFile_OpenRead__Fv();
  entryInd = 0;
  if (filePtr != (int *)0x0) {
    while (entryInd < *filePtr) {
      KillFile_ReadEntry__FPciRiT2((char *)filePtr,entryInd,&local_28,&local_24);
      iVar4 = iGp00000f6c + local_28 * 0x70;
      piVar3 = *(int **)(iVar4 + 0x40);
      if ((piVar3 != (int *)0x0) && (piVar5 = piVar3 + 1, local_24 < *piVar3)) {
        iVar2 = 0;
        if (0 < local_24) {
          do {
            iVar2 = iVar2 + 1;
            piVar5 = (int *)((int)piVar5 + (int)*(short *)piVar5);
          } while (iVar2 < local_24);
        }
        piVar3 = *(int **)(iVar4 + 0x50);
        iVar4 = 0;
        if (piVar3 != (int *)0x0) {
          iVar2 = *piVar3;
          a = (coorddef *)(piVar3 + 1);
          if (0 < iVar2) {
            do {
              iVar1 = Math_DistXZ__FP8coorddefT0(a,(coorddef *)(piVar5 + 2));
              if (iVar1 < 0x1999) {
                *(undefined *)((int)&a[1].y + 3) = 0x10;
              }
              iVar4 = iVar4 + 1;
              a = (coorddef *)&a[1].z;
            } while (iVar4 < iVar2);
          }
        }
        *(byte *)((int)piVar5 + 2) = *(byte *)((int)piVar5 + 2) | 0x80;
      }
      entryInd = entryInd + 1;
    }
    purgememadr(filePtr);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Save__11SaveSurfaceP14Trk_NewSimQuad(struct SaveSurface *this /*$a2*/, struct Trk_NewSimQuad *simQuad /*$a1*/)
 // line 1831, offset 0x800baf0c
	/* begin block 1 */
		// Start line: 1832
		// Start offset: 0x800BAF0C
	/* end block 1 */
	// End offset: 0x800BAF68
	// End Line: 1845

void Save__11SaveSurfaceP14Trk_NewSimQuad(SaveSurface *this,Trk_NewSimQuad *simQuad)
{
  if (((int)this->fCount <= (int)this->fMaxCount) && (simQuad != (Trk_NewSimQuad *)0x0)) {
    this->fStack[(int)this->fCount].fSimQuad = simQuad;
    this->fStack[(int)this->fCount].fSurface = simQuad->surface;
    this->fCount = this->fCount + 1;
  }
  return;


}




// decompiled code
// original method signature: 
// struct SaveSurface * /*$ra*/ __11SaveSurfacei(struct SaveSurface *this /*$s0*/, int numEntries /*$a1*/)
 // line 1855, offset 0x800baf70
	/* begin block 1 */
		// Start line: 1856
		// Start offset: 0x800BAF70
	/* end block 1 */
	// End offset: 0x800BAF70
	// End Line: 1856

SaveSurface * __11SaveSurfacei(SaveSurface *this,int numEntries)
{
  tSaveSurface *ptVar1;
  
  this->fMaxCount = (short)numEntries;
  this->fCount = 0;
  ptVar1 = (tSaveSurface *)reservememadr("Surface Save",numEntries << 3,0);
  this->fStack = ptVar1;
  return this;


}




// autogenerated function stub: 
// void /*$ra*/ _._11SaveSurface(struct SaveSurface *this /*$s1*/, int __in_chrg /*$s0*/)
void _._11SaveSurface _._11SaveSurface(SaveSurface *this /*$s1*/this, int __in_chrg /*$s0*/ __in_chrg)
{ // line 1864, offset 0x800bafb4
	/* begin block 1 */
		// Start line: 1865
		// Start offset: 0x800BAFB4
	/* end block 1 */
	// End offset: 0x800BAFB4
	// End Line: 1865

}


// decompiled code
// original method signature: 
// void /*$ra*/ RestoreAll__11SaveSurface(struct SaveSurface *this /*$a2*/)
 // line 1871, offset 0x800baffc
	/* begin block 1 */
		// Start line: 1872
		// Start offset: 0x800BAFFC

		/* begin block 1.1 */
			// Start line: 1872
			// Start offset: 0x800BAFFC
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x800BB060
		// End Line: 1878
	/* end block 1 */
	// End offset: 0x800BB060
	// End Line: 1880

void RestoreAll__11SaveSurface(SaveSurface *this)
{
  int iVar1;
  
  iVar1 = 0;
  if (0 < this->fCount) {
    do {
      (this->fStack[iVar1].fSimQuad)->surface = this->fStack[iVar1].fSurface;
      this->fStack[iVar1].fSimQuad = (Trk_NewSimQuad *)0x0;
      this->fStack[iVar1].fSurface = '\0';
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)this->fCount);
  }
  this->fCount = 0;
  return;


}





