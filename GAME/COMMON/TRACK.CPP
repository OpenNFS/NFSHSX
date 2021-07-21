#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 190
	/* end block 2 */
	// End Line: 191

	/* begin block 3 */
		// Start line: 190
	/* end block 3 */
	// End Line: 191

	/* begin block 4 */
		// Start line: 191
	/* end block 4 */
	// End Line: 192

	/* begin block 5 */
		// Start line: 191
	/* end block 5 */
	// End Line: 192

void Track_SetTrackNumber__Fi(int tracknum)

{
  gtrackNumber = tracknum & 0xf;
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

	/* begin block 2 */
		// Start line: 199
	/* end block 2 */
	// End Line: 200

	/* begin block 3 */
		// Start line: 206
	/* end block 3 */
	// End Line: 207

	/* begin block 4 */
		// Start line: 206
	/* end block 4 */
	// End Line: 207

char * Track_MakeTrackPathName__FPc(char *ext)

{
  sprintf(&strspc_42,s__sTr_02d_s_80056644,PTR_ARRAY_80116480[0],gtrackNumber,ext);
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

	/* begin block 2 */
		// Start line: 229
	/* end block 2 */
	// End Line: 230

	/* begin block 3 */
		// Start line: 233
	/* end block 3 */
	// End Line: 234

	/* begin block 4 */
		// Start line: 233
	/* end block 4 */
	// End Line: 234

char * Track_MakeTrackDataPathName__FPc(char *ext)

{
  sprintf(&strspc_45,s__sTr_02d_s_80056644,PTR_ARRAY_80116488[0],gtrackNumber,ext);
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

	/* begin block 2 */
		// Start line: 273
	/* end block 2 */
	// End Line: 274

	/* begin block 3 */
		// Start line: 294
	/* end block 3 */
	// End Line: 295

	/* begin block 4 */
		// Start line: 294
	/* end block 4 */
	// End Line: 295

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

	/* begin block 2 */
		// Start line: 322
	/* end block 2 */
	// End Line: 323

	/* begin block 3 */
		// Start line: 326
	/* end block 3 */
	// End Line: 327

	/* begin block 4 */
		// Start line: 326
	/* end block 4 */
	// End Line: 327

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitArtResources__Fv(void)

{
  AllocArtResource__FP18Track_tArtresourcei(&gInitialArt,0x352);
  Track_materials = (Track_tMaterial *)BWAllocMem__Fl(0xd48);
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

	/* begin block 2 */
		// Start line: 358
	/* end block 2 */
	// End Line: 359

	/* begin block 3 */
		// Start line: 369
	/* end block 3 */
	// End Line: 370

	/* begin block 4 */
		// Start line: 369
	/* end block 4 */
	// End Line: 370

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DeInitArtResources__Fv(void)

{
  gInitialArt.pPmx = (Draw_tPixMap *)0x0;
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

	/* begin block 2 */
		// Start line: 438
	/* end block 2 */
	// End Line: 439

	/* begin block 3 */
		// Start line: 471
	/* end block 3 */
	// End Line: 472

	/* begin block 4 */
		// Start line: 471
	/* end block 4 */
	// End Line: 472

	/* begin block 5 */
		// Start line: 484
	/* end block 5 */
	// End Line: 485

void LoadShapesAndMakePmx__FPcP12Draw_tPixMapiii
               (char *shapefile,Draw_tPixMap *pmxList,int loadFlags,int x,int y)

{
  uchar *puVar1;
  short *psVar2;
  int cx;
  byte *n;
  int iVar3;
  uchar *puVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char local_38;
  uchar local_37;
  byte local_36;
  byte local_35 [5];
  ushort local_30;
  ushort local_2e;
  
  iVar8 = -1;
  gTempMipMapInfo = (uchar *)0x0;
  if (TrackSpec_gSpec.fogstate != 0) {
    iVar8 = -3;
    gTempMipMapInfo = (uchar *)reservememadr(s_mipmapinf_80056650,0x180,0x10);
    iVar6 = 0;
    iVar3 = 0;
    do {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(gTempMipMapInfo + iVar3) = 0xffffffff;
      iVar3 = iVar3 + 0xc;
    } while (iVar6 < 0x20);
  }
  gTempMultiPalInfo = (uchar *)reservememadr(s_mpalinfo_8005665c,0x400,0x10);
  iVar3 = 0x7f;
  psVar2 = (short *)gTempMultiPalInfo + 0x1fc;
  do {
    psVar2[1] = -1;
    iVar3 = iVar3 + -1;
    psVar2 = psVar2 + -4;
  } while (-1 < iVar3);
  DrawSync(0);
  iVar6 = 0;
  uVar7 = 0;
  iVar3 = 0;
  do {
    cx = shapecount((int)shapefile);
    if (cx <= (int)uVar7) {
      return;
    }
    n = (byte *)shapepointer((int)shapefile,uVar7);
    if (n != (byte *)0x0) {
      shapename((int)shapefile,uVar7,(undefined4 *)&local_38);
      if ((((int)uVar7 < 0xc) || ((*n & 3) == 1)) || (cx = iVar8, local_38 == '#')) {
        cx = -1;
      }
      Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
                ((char *)0x0,(char *)n,loadFlags | 2,x,y,cx,cx,pmxList);
      if (local_38 == '!') {
        gTempMultiPalInfo[iVar3] = local_37;
        gTempMultiPalInfo[iVar3 + 1] = local_36;
        cx = atoi((char *)local_35);
        puVar1 = gTempMultiPalInfo;
        puVar4 = gTempMultiPalInfo + iVar3;
        *(short *)(puVar4 + 2) = (short)cx;
        *(short *)(puVar4 + 6) = (short)uVar7;
        if (cx == 0) {
          *(short *)(puVar4 + 4) = (short)uVar7;
        }
        else {
          cx = 0;
          puVar4 = puVar1;
          do {
            if (((*puVar4 == local_37) && (puVar4[1] == local_36)) && (*(short *)(puVar4 + 2) == 0))
            {
              *(undefined2 *)(puVar1 + iVar3 + 4) = *(undefined2 *)(puVar4 + 4);
              break;
            }
            cx = cx + 1;
            puVar4 = puVar4 + 8;
          } while (cx < 0x80);
        }
        iVar3 = iVar3 + 8;
      }
      if ((TrackSpec_gSpec.fogstate != 0) && (local_38 == 'Z')) {
        local_2e = (ushort)local_35[0];
        local_30 = (ushort)local_36;
        if ((local_37 == 'R') && ((*n & 3) == 1)) {
          puVar5 = (ushort *)(gTempMipMapInfo + iVar6 * 0xc);
          *puVar5 = local_30;
          iVar6 = iVar6 + 1;
          *(uint *)(puVar5 + 2) = uVar7;
          *(uint *)(puVar5 + 4) = uVar7;
          puVar5[1] = (ushort)local_35[0];
        }
        else {
          cx = 0;
          puVar5 = (ushort *)gTempMipMapInfo;
          if (local_37 == 'Z') {
            do {
              if ((local_30 == *puVar5) && (local_2e == puVar5[1])) {
                *(uint *)(puVar5 + 4) = uVar7;
                break;
              }
              cx = cx + 1;
              puVar5 = puVar5 + 6;
            } while (cx < 0x20);
          }
        }
      }
      pmxList = pmxList + 1;
    }
    uVar7 = uVar7 + 1;
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

	/* begin block 2 */
		// Start line: 826
	/* end block 2 */
	// End Line: 827

	/* begin block 3 */
		// Start line: 842
	/* end block 3 */
	// End Line: 843

	/* begin block 4 */
		// Start line: 842
	/* end block 4 */
	// End Line: 843

void LoadShapesAndMakePmx_EnvMap__FPcP12Draw_tPixMapii
               (char *shapefile,Draw_tPixMap *pmxList,int x,int y)

{
  int iVar1;
  char *n;
  uint uVar2;
  
  uVar2 = 0;
  while (iVar1 = shapecount((int)shapefile), (int)uVar2 < iVar1) {
    n = (char *)shapepointer((int)shapefile,uVar2);
    if (n != (char *)0x0) {
      Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap((char *)0x0,n,0x42,x,y,-1,-1,pmxList);
      pmxList = pmxList + 1;
    }
    uVar2 = uVar2 + 1;
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

	/* begin block 2 */
		// Start line: 924
	/* end block 2 */
	// End Line: 925

	/* begin block 3 */
		// Start line: 935
	/* end block 3 */
	// End Line: 936

	/* begin block 4 */
		// Start line: 935
	/* end block 4 */
	// End Line: 936

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TexturesLoadInitial__Fv(void)

{
  char *ext;
  Draw_tPixMap *pDVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (GameSetup_gData.Time == 0) {
    if (GameSetup_gData.Weather == 0) {
      ext = s_0_psh_8013d480;
    }
    else {
      ext = s_W0_psh_8013d478;
    }
  }
  else {
    if (GameSetup_gData.Weather == 0) {
      ext = s_N0_psh_8013d470;
    }
    else {
      ext = s_S0_psh_8013d468;
    }
  }
  ext = Track_MakeTrackPathName__FPc(ext);
  gInitialArt.shapeFile = (char *)loadshapeadr(ext,0);
  if (gInitialArt.shapeFile != (char *)0x0) {
    Texture_ResetPaletteSharing__Fv();
    gInitialArt.shapeCount = shapecount((int)gInitialArt.shapeFile);
    LoadShapesAndMakePmx__FPcP12Draw_tPixMapiii(gInitialArt.shapeFile,gInitialArt.pPmx,0x40,0x100,0)
    ;
    pDVar1 = gInitialArt.pPmx + gInitialArt.shapeCount;
    uVar2 = *(undefined4 *)&gSpikeBeltPixmap->u1;
    uVar3 = *(undefined4 *)&gSpikeBeltPixmap->u2;
    uVar4 = *(undefined4 *)&gSpikeBeltPixmap->u3;
    *(undefined4 *)pDVar1 = *(undefined4 *)gSpikeBeltPixmap;
    *(undefined4 *)&pDVar1->u1 = uVar2;
    *(undefined4 *)&pDVar1->u2 = uVar3;
    *(undefined4 *)&pDVar1->u3 = uVar4;
    gInitialArt.shapeCount = gInitialArt.shapeCount + 1;
    gInitialArt.pmxCount = gInitialArt.shapeCount;
    gInitialArt.basePmxCount = gInitialArt.shapeCount;
    purgememadr((int)gInitialArt.shapeFile);
    Hrz_GetHorizonPixMap__FP12Draw_tPixMap(gInitialArt.pPmx);
    ext = Track_MakeTrackPathName__FPc(s_r_psh_8013d488);
    ext = (char *)loadshapeadr(ext,0);
    if (ext != (char *)0x0) {
      Texture_ResetPaletteSharing__Fv();
      LoadShapesAndMakePmx_EnvMap__FPcP12Draw_tPixMapii(ext,Track_gReflectionMaps,0x3e0,0);
      purgememadr((int)ext);
    }
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
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

	/* begin block 2 */
		// Start line: 1094
	/* end block 2 */
	// End Line: 1095

	/* begin block 3 */
		// Start line: 1120
	/* end block 3 */
	// End Line: 1121

	/* begin block 4 */
		// Start line: 1120
	/* end block 4 */
	// End Line: 1121

	/* begin block 5 */
		// Start line: 1124
	/* end block 5 */
	// End Line: 1125

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Track_AnimateTextures__Fv(void)

{
  byte bVar1;
  char cVar2;
  Draw_tPixMap *pDVar3;
  short *psVar4;
  Track_tMaterialController *pTVar5;
  int iVar6;
  int iVar7;
  
  psVar4 = &Track_gMatController->pmxIndex;
  pTVar5 = Track_gMatController;
  iVar6 = Track_gControllerCount;
  while (iVar6 = iVar6 + -1, iVar6 != -1) {
    if (pTVar5->type == 0x80) {
      bVar1 = *(byte *)((int)psVar4 + -1);
      iVar7 = simGlobal.gameTicks / (int)(uint)bVar1;
      if (bVar1 == 0) {
        trap(0x1c00);
      }
      if (((uint)bVar1 == 0xffffffff) && (simGlobal.gameTicks == -0x80000000)) {
        trap(0x1800);
      }
      bVar1 = *(byte *)(psVar4 + -4);
      if (bVar1 == 0) {
        trap(0x1c00);
      }
      if (((uint)bVar1 == 0xffffffff) && (iVar7 == -0x80000000)) {
        trap(0x1800);
      }
      pDVar3 = gInitialArt.pPmx + (int)*(short *)(*(int *)(psVar4 + 1) + 2);
      cVar2 = (char)(iVar7 % (uint)bVar1);
      pDVar3->v0 = *(char *)(psVar4 + -3) + cVar2;
      pDVar3->v1 = *(char *)((int)psVar4 + -5) + cVar2;
      pDVar3->v2 = *(char *)(psVar4 + -2) + cVar2;
      pDVar3->v3 = *(char *)((int)psVar4 + -3) + cVar2;
    }
    else {
      if (pTVar5->type == 4) {
        bVar1 = *(byte *)((int)psVar4 + -1);
        iVar7 = simGlobal.gameTicks / (int)(uint)bVar1;
        if (bVar1 == 0) {
          trap(0x1c00);
        }
        if (((uint)bVar1 == 0xffffffff) && (simGlobal.gameTicks == -0x80000000)) {
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
    pTVar5 = pTVar5 + 1;
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

	/* begin block 2 */
		// Start line: 1185
	/* end block 2 */
	// End Line: 1186

	/* begin block 3 */
		// Start line: 1193
	/* end block 3 */
	// End Line: 1194

	/* begin block 4 */
		// Start line: 1193
	/* end block 4 */
	// End Line: 1194

	/* begin block 5 */
		// Start line: 1195
	/* end block 5 */
	// End Line: 1196

int Track_GetProperMultiPalShapeIndex__Fii(int shapeindex,int paletteindex)

{
  uchar *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = gTempMultiPalInfo;
  while (((int)*(short *)(puVar1 + 4) != shapeindex || ((int)*(short *)(puVar1 + 2) != paletteindex)
         )) {
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 8;
    if (0x7f < iVar2) {
      return shapeindex;
    }
  }
  return (int)*(short *)(puVar1 + 6);
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

	/* begin block 2 */
		// Start line: 1213
	/* end block 2 */
	// End Line: 1214

	/* begin block 3 */
		// Start line: 1219
	/* end block 3 */
	// End Line: 1220

	/* begin block 4 */
		// Start line: 1219
	/* end block 4 */
	// End Line: 1220

void Track_ProcessFlipAndUVFlags__FiP12Draw_tPixMapT1
               (int uvFlag,Draw_tPixMap *inputPmx,Draw_tPixMap *outputPmx)

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

	/* begin block 2 */
		// Start line: 1301
	/* end block 2 */
	// End Line: 1302

	/* begin block 3 */
		// Start line: 1307
	/* end block 3 */
	// End Line: 1308

	/* begin block 4 */
		// Start line: 1307
	/* end block 4 */
	// End Line: 1308

void Track_AssociateSingleMaterial__FP12Trk_MaterialP15Track_tMaterialP18Track_tArtresource
               (Trk_Material *inputMat,Track_tMaterial *outputMat,Track_tArtresource *art)

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

	/* begin block 2 */
		// Start line: 1365
	/* end block 2 */
	// End Line: 1366

	/* begin block 3 */
		// Start line: 1488
	/* end block 3 */
	// End Line: 1489

	/* begin block 4 */
		// Start line: 1488
	/* end block 4 */
	// End Line: 1489

void Track_LinkMaterials__FP15SerializedGroupiP15Track_tMaterial
               (SerializedGroup *group,int length,Track_tMaterial *matList)

{
  byte bVar1;
  char cVar2;
  Track_tMaterialController *pTVar3;
  SerializedGroup *pSVar4;
  Draw_tPixMap *pDVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  
  if (group != (SerializedGroup *)0x0) {
    iVar10 = 0;
    group = group + 1;
    Track_gControllerCount = 0;
    gInitialArt.pmxCount = gInitialArt.basePmxCount;
    local_30 = (uint)length / 10;
    pSVar4 = group;
    if (local_30 != 0) {
      do {
        if ((*(ushort *)((int)&pSVar4->m_type + 2) & 0x84) != 0) {
          Track_gControllerCount = Track_gControllerCount + 1;
        }
        iVar10 = iVar10 + 1;
        pSVar4 = (SerializedGroup *)((int)&pSVar4->dummy + 2);
      } while (iVar10 < (int)local_30);
    }
    if (Track_gControllerCount != 0) {
      Track_gMatController =
           (Track_tMaterialController *)BWAllocMem__Fl(Track_gControllerCount << 4);
    }
    iVar11 = 0;
    iVar10 = iVar11;
    while (iVar11 < (int)local_30) {
      Track_AssociateSingleMaterial__FP12Trk_MaterialP15Track_tMaterialP18Track_tArtresource
                ((Trk_Material *)group,matList,&gInitialArt);
      bVar1 = *(byte *)((int)&group->m_type + 2);
      if ((bVar1 & 4) == 0) {
        _cVar2 = iVar10;
        if ((bVar1 & 0x80) != 0) {
          Track_gMatController[iVar10].type = (ushort)*(byte *)((int)&group->m_type + 2);
          if (*(char *)&group->dummy == '\0') {
            *(undefined *)&group->dummy = 1;
          }
          Track_gMatController[iVar10].interval = *(uchar *)&group->dummy;
          Track_gMatController[iVar10].textureCount = *(char *)((int)&group->m_length + 3);
          pTVar3 = Track_gMatController + iVar10;
          pTVar3->pmxIndex = matList->pmxIndex;
          pTVar3->matPtr = matList;
          pDVar5 = gInitialArt.pPmx + (int)matList->pmxIndex;
          pTVar3->uv0 = pDVar5->v0;
          Track_gMatController[iVar10].uv1 = pDVar5->v1;
          Track_gMatController[iVar10].uv2 = pDVar5->v2;
          Track_gMatController[iVar10].uv3 = pDVar5->v3;
          _cVar2 = (uint)pDVar5->v3 - (uint)pDVar5->v0;
          cVar2 = (char)_cVar2;
          if (_cVar2 < 0) {
            cVar2 = -cVar2;
          }
          _cVar2 = iVar10 + 1;
          Track_gMatController[iVar10].textureMax = cVar2 + '\x01';
        }
      }
      else {
        pTVar3 = Track_gMatController + iVar10;
        pTVar3->type = (ushort)bVar1;
        pTVar3->interval = *(uchar *)&group->dummy;
        Track_gMatController[iVar10].textureCount = *(char *)((int)&group->m_length + 3);
        pTVar3 = Track_gMatController + iVar10;
        pTVar3->pmxIndex = matList->pmxIndex;
        pTVar3->matPtr = matList;
        _cVar2 = iVar10 + 1;
      }
      iVar10 = 0;
      if (TrackSpec_gSpec.fogstate != 0) {
        iVar9 = 0;
        while (iVar10 < 0x20) {
          piVar7 = (int *)(gTempMipMapInfo + iVar9);
          if ((*piVar7 != -1) && (iVar8 = piVar7[1], iVar8 == (int)*(short *)&group->m_type)) {
            iVar6 = piVar7[2];
            matList->flag = matList->flag | 8;
            iVar6 = iVar6 - iVar8;
            if ((int)*(short *)&group->m_type == (int)matList->pmxIndex) {
              matList->mipmap_offset = (char)iVar6;
            }
            else {
              pDVar5 = gInitialArt.pPmx + (int)*(short *)&group->m_type + iVar6;
              local_40 = *(undefined4 *)pDVar5;
              local_3c = *(undefined4 *)&pDVar5->u1;
              local_38 = *(undefined4 *)&pDVar5->u2;
              local_34 = *(undefined4 *)&pDVar5->u3;
              Track_ProcessFlipAndUVFlags__FiP12Draw_tPixMapT1
                        ((uint)*(byte *)((int)&group->m_type + 3),(Draw_tPixMap *)&local_40,
                         gInitialArt.pPmx + gInitialArt.pmxCount);
              gInitialArt.pmxCount = gInitialArt.pmxCount + 1;
              matList->mipmap_offset = '\x01';
            }
          }
          iVar9 = iVar9 + 0xc;
          iVar10 = iVar10 + 1;
        }
      }
      matList = matList + 1;
      group = (SerializedGroup *)((int)&group->dummy + 2);
      iVar11 = iVar11 + 1;
      iVar10 = _cVar2;
    }
    if (gTempMipMapInfo != (uchar *)0x0) {
      purgememadr((int)gTempMipMapInfo);
    }
    purgememadr((int)gTempMultiPalInfo);
    gInitialArt.shapeFile = (char *)0x0;
    gInitialArt.pmxCount = gInitialArt.shapeCount;
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

	/* begin block 2 */
		// Start line: 1964
	/* end block 2 */
	// End Line: 1965

	/* begin block 3 */
		// Start line: 1964
	/* end block 3 */
	// End Line: 1965

	/* begin block 4 */
		// Start line: 2079
	/* end block 4 */
	// End Line: 2080

	/* begin block 5 */
		// Start line: 2079
	/* end block 5 */
	// End Line: 2080

	/* begin block 6 */
		// Start line: 2081
	/* end block 6 */
	// End Line: 2082

void ReduceObjectPrecision__FP5GroupT0i(Group *instGroup,Group *defGroup,int bits)

{
  short sVar1;
  short sVar2;
  Trk_ObjectDef **ppTVar3;
  Trk_ObjectDef *pTVar4;
  Trk_ObjectDef *pTVar5;
  Trk_ObjectDef *pTVar6;
  uint uVar7;
  Group *pGVar8;
  int iVar9;
  
  ppTVar3 = Track_gObjDefs;
  pGVar8 = instGroup + 1;
  if (instGroup != (Group *)0x0) {
    iVar9 = instGroup->m_num_elements;
    while (iVar9 = iVar9 + -1, iVar9 != -1) {
      if (defGroup != (Group *)0x0) {
        pTVar4 = ppTVar3[(int)*(short *)((int)&pGVar8[1].m_num_elements + 2)];
        pTVar6 = pTVar4 + 1;
        uVar7 = (uint)pTVar4->vertexCount;
        while( true ) {
          pTVar5 = pTVar4 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0xffffffff) break;
          sVar1 = *(short *)&pTVar4[1].vertexCount;
          sVar2 = pTVar5->id;
          pTVar6->id = (short)((int)pTVar6->id >> (bits & 0x1fU));
          *(short *)&pTVar4[1].vertexCount = (short)((int)sVar1 >> (bits & 0x1fU));
          pTVar5->id = (short)((int)sVar2 >> (bits & 0x1fU));
          pTVar6 = pTVar6 + 2;
          pTVar4 = pTVar5;
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

	/* begin block 2 */
		// Start line: 2176
	/* end block 2 */
	// End Line: 2177

	/* begin block 3 */
		// Start line: 2184
	/* end block 3 */
	// End Line: 2185

	/* begin block 4 */
		// Start line: 2184
	/* end block 4 */
	// End Line: 2185

	/* begin block 5 */
		// Start line: 2186
	/* end block 5 */
	// End Line: 2187

void InvalidatePersistentCollideBoomObjects__FP5GroupT0(Group *instGroup,Group *defGroup)

{
  int iVar1;
  
  if ((instGroup != (Group *)0x0) && (defGroup != (Group *)0x0)) {
    iVar1 = instGroup->m_num_elements;
    instGroup = instGroup + 1;
    while (iVar1 = iVar1 + -1, iVar1 != -1) {
      if (Track_gObjDefs[(int)*(short *)((int)&instGroup[1].m_num_elements + 2)]->id != -1) {
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

	/* begin block 2 */
		// Start line: 2250
	/* end block 2 */
	// End Line: 2251

	/* begin block 3 */
		// Start line: 2288
	/* end block 3 */
	// End Line: 2289

	/* begin block 4 */
		// Start line: 2288
	/* end block 4 */
	// End Line: 2289

/* WARNING: Could not reconcile some variable overlaps */

void CalcObjectBoundingSphere__FP5GroupT0(Group *defGroup,Group *boundingSphereGroup)

{
  byte bVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Trk_ObjectDef *pTVar6;
  uint uVar7;
  Trk_ObjectDef *pTVar8;
  Trk_ObjectDef *pTVar9;
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
    pTVar6 = Track_gObjDefs[iVar12];
    uVar7 = (uint)pTVar6->vertexCount;
    pTVar8 = pTVar6 + 1;
    local_28 = 0;
    local_2c = 0;
    local_30 = 0;
    pTVar9 = pTVar6;
    while (uVar7 = uVar7 - 1, uVar7 != 0xffffffff) {
      psVar2 = &pTVar8->id;
      pTVar8 = pTVar8 + 2;
      local_30 = local_30 + (int)*psVar2;
      local_2c = local_2c + (int)*(short *)&pTVar9[1].vertexCount;
      local_28 = local_28 + (int)pTVar9[2].id;
      pTVar9 = pTVar9 + 2;
    }
    bVar1 = pTVar6->vertexCount;
    iVar15 = local_30 / (int)(uint)bVar1;
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if (((uint)bVar1 == 0xffffffff) && (local_30 == -0x80000000)) {
      trap(0x1800);
    }
    bVar1 = pTVar6->vertexCount;
    iVar16 = local_2c / (int)(uint)bVar1;
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if (((uint)bVar1 == 0xffffffff) && (local_2c == -0x80000000)) {
      trap(0x1800);
    }
    bVar1 = pTVar6->vertexCount;
    iVar17 = local_28 / (int)(uint)bVar1;
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if (((uint)bVar1 == 0xffffffff) && (local_28 == -0x80000000)) {
      trap(0x1800);
    }
    pTVar9 = pTVar6 + 1;
    iVar10 = 0;
    uVar7 = (uint)pTVar6->vertexCount;
    while( true ) {
      uVar7 = uVar7 - 1;
      if (uVar7 == 0xffffffff) break;
      iVar3 = iVar15 - (int)pTVar9->id >> 6;
      iVar4 = iVar16 - (int)*(short *)&pTVar6[1].vertexCount >> 6;
      iVar5 = iVar17 - (int)pTVar6[2].id >> 6;
      iVar3 = iVar3 * iVar3 + iVar4 * iVar4 + iVar5 * iVar5;
      if (iVar10 < iVar3) {
        iVar10 = iVar3;
      }
      pTVar9 = pTVar9 + 2;
      pTVar6 = pTVar6 + 2;
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

	/* begin block 2 */
		// Start line: 2525
	/* end block 2 */
	// End Line: 2526

	/* begin block 3 */
		// Start line: 2579
	/* end block 3 */
	// End Line: 2580

	/* begin block 4 */
		// Start line: 2579
	/* end block 4 */
	// End Line: 2580

	/* begin block 5 */
		// Start line: 2585
	/* end block 5 */
	// End Line: 2586

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcObjDefPtrs__Fv(void)

{
  bool bVar1;
  Group *pGVar2;
  Group *pGVar3;
  int iVar4;
  
  pGVar2 = gPersistObjDef;
  iVar4 = 1;
  pGVar3 = gObjDefOffsetsGroup + 2;
  *(Group **)&gObjDefOffsetsGroup[1].m_num_elements = gPersistObjDef + 1;
  while (bVar1 = iVar4 < pGVar2->m_num_elements, iVar4 = iVar4 + 1, bVar1) {
    pGVar3->m_num_elements = pGVar3[-1].m_num_elements + pGVar3->m_num_elements;
    pGVar3 = pGVar3 + 1;
  }
  Track_gObjDefs = (Trk_ObjectDef **)(gObjDefOffsetsGroup + 1);
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
	// 		struct SerializedGroup (**persistentGroups)[0]; // $s3
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

	/* begin block 2 */
		// Start line: 2622
	/* end block 2 */
	// End Line: 2623

	/* begin block 3 */
		// Start line: 2646
	/* end block 3 */
	// End Line: 2647

	/* begin block 4 */
		// Start line: 2646
	/* end block 4 */
	// End Line: 2647

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
  gObjDefOffsetsGroup = (Group *)0x0;
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
    switch((*ppSVar3)->m_type) {
    case 2:
      Track_LinkMaterials__FP15SerializedGroupiP15Track_tMaterial
                (*ppSVar3,(*ppSVar3)->m_length + -0x10,Track_materials,auStack48[iVar1]);
      break;
    case 7:
      gPersistObjInst =
           CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem
                     (*ppSVar3,*ppSVar3,Track_mem,auStack48[iVar1]);
      break;
    case 8:
      gPersistObjDef =
           CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem
                     (*ppSVar3,*ppSVar3,Track_mem,auStack48[iVar1]);
      break;
    case 0xf:
      simGroup = CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem
                           (*ppSVar3,*ppSVar3,Track_mem,auStack48[iVar1]);
      BWorldSm_Init__FP5Group(simGroup,auStack48[iVar1]);
      break;
    case 0x24:
      gPersistMidgroundObjInst =
           CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem
                     (*ppSVar3,*ppSVar3,Track_mem,auStack48[iVar1]);
      break;
    case 0x26:
      gObjDefOffsetsGroup =
           CreateLiteGroup__15SerializedGroupP15SerializedGroupP9SimpleMem
                     (*ppSVar3,*ppSVar3,Track_mem,auStack48[iVar1]);
    }
    ppSVar3 = ppSVar3 + 1;
    index = index + 1;
  }
  if (gObjDefOffsetsGroup != (Group *)0x0) {
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

	/* begin block 2 */
		// Start line: 2842
	/* end block 2 */
	// End Line: 2843

	/* begin block 3 */
		// Start line: 2862
	/* end block 3 */
	// End Line: 2863

	/* begin block 4 */
		// Start line: 2862
	/* end block 4 */
	// End Line: 2863

void Track_Init__FPc(char *tempName)

{
  RelCoord16 *pRVar1;
  TrackHeader *pTVar2;
  int len;
  SimpleMem *this;
  short *psVar3;
  void *pvVar4;
  Group *pGVar5;
  SerializedGroup *perGroup;
  SerializedGroup *this_00;
  SaveSurface *this_01;
  undefined2 *puVar6;
  CVECTOR *pCVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  CVECTOR CVar12;
  CVECTOR CVar13;
  CVECTOR CVar14;
  int iVar15;
  SerializedGroup *pSVar16;
  int iVar17;
  char acStack168 [128];
  
  Track_gSaveSurface = (SaveSurface *)0x0;
  Track_gObjDefs = (Trk_ObjectDef **)0x0;
  sprintf(acStack168,(char *)&PTR_DAT_8013d490,tempName);
  len = filesize(tempName);
  Chunk_lightTable = (CVECTOR *)reservememadr(s_lighttbl_80056668,0x404,0);
  TextureProcess_Init__Fv();
  iVar15 = len + 0x9080;
  InitArtResources__Fv();
  TexturesLoadInitial__Fv();
  this = (SimpleMem *)__builtin_new(0xc);
  psVar3 = reservememadr(s_Track_mem_80056674,iVar15,0);
  *(short **)&this->heap = psVar3;
  *(short **)&this->freeMem = psVar3;
  if (psVar3 == (short *)0x0) {
    iVar15 = 0;
  }
  this->freeMemSize = iVar15;
  Track_mem = this;
  pvVar4 = FeignAlloc__9SimpleMemi(this,len);
  this_00 = (SerializedGroup *)loadfileatadr(acStack168,(int)pvVar4 + 0x9080);
  pGVar5 = LocateCreateGroupType__15SerializedGroupiP9SimpleMemi(this_00,0x1f,Track_mem,0);
  Track_header = (TrackHeader *)(pGVar5 + 1);
  pGVar5 = LocateCreateGroupType__15SerializedGroupiP9SimpleMemi(this_00,0x20,Track_mem,0);
  Chunk_chunkCenters = (coorddef *)(pGVar5 + 1);
  perGroup = LocateGroupType__15SerializedGroupii(this_00,0x23,0);
  pSVar16 = perGroup + 1;
  pCVar7 = Chunk_lightTable;
  if ((((uint)pSVar16 | (uint)Chunk_lightTable) & 3) == 0) {
    do {
      CVar12 = *(CVECTOR *)&pSVar16->m_length;
      CVar13 = *(CVECTOR *)&pSVar16->dummy;
      CVar14 = *(CVECTOR *)&pSVar16->m_num_elements;
      *pCVar7 = *(CVECTOR *)&pSVar16->m_type;
      pCVar7[1] = CVar12;
      pCVar7[2] = CVar13;
      pCVar7[3] = CVar14;
      pSVar16 = pSVar16 + 1;
      pCVar7 = pCVar7 + 4;
    } while (pSVar16 != perGroup + 0x41);
  }
  else {
    do {
      CVar12 = *(CVECTOR *)&pSVar16->m_length;
      CVar13 = *(CVECTOR *)&pSVar16->dummy;
      CVar14 = *(CVECTOR *)&pSVar16->m_num_elements;
      *pCVar7 = *(CVECTOR *)&pSVar16->m_type;
      pCVar7[1] = CVar12;
      pCVar7[2] = CVar13;
      pCVar7[3] = CVar14;
      pSVar16 = pSVar16 + 1;
      pCVar7 = pCVar7 + 4;
    } while (pSVar16 != perGroup + 0x41);
  }
  perGroup = LocateGroupType__15SerializedGroupii(this_00,0x23,0);
  len = 0;
  iVar15 = 0;
  iVar17 = 0;
  Chunk_numLight = perGroup->m_length - 0x10U >> 2;
  Track_gInViewList = (short *)Alloc__9SimpleMemii(Track_mem,Track_header->chunkCount * 0x48,0);
  Track_gInViewCount = (uchar *)Alloc__9SimpleMemii(Track_mem,Track_header->chunkCount,0);
  Track_chunkList = (Chunk *)Alloc__9SimpleMemii(Track_mem,Track_header->chunkCount * 0x70,0);
  Chunk_Init__Fv();
  perGroup = LocateGroupType__15SerializedGroupii(this_00,0x21,0);
  this_00 = LocateGroupType__15SerializedGroupii(this_00,0x1d,0);
  while (len < Track_header->chunkCount) {
    pRVar1 = Track_chunkList->boundPts;
    pSVar16 = (SerializedGroup *)0x0;
    if (len < Track_header->chunkCount + -1) {
      pSVar16 = LocateNextGroupType__15SerializedGroupi(this_00,0x1d);
    }
    InstanceGroup__5ChunkP15SerializedGroupP9SimpleMem
              ((Chunk *)((int)&pRVar1->x + iVar17),this_00,Track_mem);
    this_00 = LocateGroupType__15SerializedGroupii(this_00,4,0);
    pTVar2 = Track_header;
    iVar11 = this_00->m_num_elements;
    this_00 = this_00 + 1;
    iVar10 = 0;
    if (0x24 < iVar11) {
      iVar11 = 0x24;
    }
    iVar8 = 0;
    if (0 < iVar11) {
      puVar9 = (ushort *)(iVar15 + (int)Track_gInViewList);
      do {
        if ((int)((uint)*(ushort *)&this_00->m_type & 0x3ff) < pTVar2->chunkCount) {
          *puVar9 = *(ushort *)&this_00->m_type;
          puVar9 = puVar9 + 1;
          iVar8 = iVar8 + 1;
        }
        iVar10 = iVar10 + 1;
        this_00 = (SerializedGroup *)((int)&this_00->m_type + 2);
      } while (iVar10 < iVar11);
    }
    Track_gInViewCount[len] = (uchar)iVar8;
    if (iVar8 < 0x24) {
      puVar6 = (undefined2 *)((int)Track_gInViewList + iVar8 * 2 + iVar15);
      do {
        *puVar6 = 0x3ff;
        iVar8 = iVar8 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar8 < 0x24);
    }
    iVar15 = iVar15 + 0x40;
    iVar17 = iVar17 + 0x70;
    len = len + 1;
    this_00 = pSVar16;
  }
  Track_InitPersistentData__FP15SerializedGroup(perGroup);
  ResizeToFit__9SimpleMem(Track_mem);
  Track_MakeTrackPathName__FPc(&DAT_8013d494);
  gPersistObjDefBoundingSpheres =
       (Group *)reservememadr(s_bsphere_8013d49c,gPersistObjDef->m_num_elements << 3 | 4,0);
  CalcObjectBoundingSphere__FP5GroupT0(gPersistObjDef,gPersistObjDefBoundingSpheres);
  ReduceObjectPrecision__FP5GroupT0i(gPersistMidgroundObjInst,gPersistObjDef,2);
  InvalidatePersistentCollideBoomObjects__FP5GroupT0(gPersistObjInst,gPersistObjDef);
  this_01 = (SaveSurface *)__builtin_new(8);
  Track_gSaveSurface = __11SaveSurfacei(this_01,0x30);
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

	/* begin block 2 */
		// Start line: 3262
	/* end block 2 */
	// End Line: 3263

	/* begin block 3 */
		// Start line: 3279
	/* end block 3 */
	// End Line: 3280

	/* begin block 4 */
		// Start line: 3279
	/* end block 4 */
	// End Line: 3280

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Track_DeInit__Fv(void)

{
  SimpleMem *deleteMe;
  
  deleteMe = Track_mem;
  if (Track_mem != (SimpleMem *)0x0) {
    purgememadr((int)Track_mem->heap);
    deleteMe->freeMem = (void *)0x0;
    __builtin_delete(deleteMe);
  }
  if (Track_gSaveSurface != (SaveSurface *)0x0) {
    ___11SaveSurface(Track_gSaveSurface,3);
    Track_gSaveSurface = (SaveSurface *)0x0;
  }
  if (gInitialArt.shapeFile != (char *)0x0) {
    gInitialArt.shapeFile = (char *)0x0;
  }
  BWorldSm_DeInit__Fv();
  DeInitArtResources__Fv();
  if (Chunk_lightTable != (CVECTOR *)0x0) {
    purgememadr((int)Chunk_lightTable);
    Chunk_lightTable = (CVECTOR *)0x0;
  }
  if (gPersistObjDefBoundingSpheres != (Group *)0x0) {
    purgememadr((int)gPersistObjDefBoundingSpheres);
  }
  gPersistObjDef = (Group *)0x0;
  gPersistObjInst = (Group *)0x0;
  gPersistMidgroundObjInst = (Group *)0x0;
  gPersistObjDefBoundingSpheres = (Group *)0x0;
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

	/* begin block 2 */
		// Start line: 3369
	/* end block 2 */
	// End Line: 3370

	/* begin block 3 */
		// Start line: 3373
	/* end block 3 */
	// End Line: 3374

	/* begin block 4 */
		// Start line: 3373
	/* end block 4 */
	// End Line: 3374

	/* begin block 5 */
		// Start line: 3380
	/* end block 5 */
	// End Line: 3381

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 3317
	/* end block 2 */
	// End Line: 3318

	/* begin block 3 */
		// Start line: 3686
	/* end block 3 */
	// End Line: 3687

	/* begin block 4 */
		// Start line: 3686
	/* end block 4 */
	// End Line: 3687

/* WARNING: Unknown calling convention yet parameter storage is locked */

char * KillFile_OpenRead__Fv(void)

{
  char *pcVar1;
  char acStack136 [128];
  
  pcVar1 = Track_MakeTrackPathName__FPc(&DAT_8013d4a4);
  sprintf(acStack136,(char *)&PTR_DAT_8013d490,pcVar1);
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

	/* begin block 2 */
		// Start line: 3707
	/* end block 2 */
	// End Line: 3708

	/* begin block 3 */
		// Start line: 3713
	/* end block 3 */
	// End Line: 3714

	/* begin block 4 */
		// Start line: 3713
	/* end block 4 */
	// End Line: 3714

	/* begin block 5 */
		// Start line: 3714
	/* end block 5 */
	// End Line: 3715

	/* begin block 6 */
		// Start line: 3714
	/* end block 6 */
	// End Line: 3715

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

	/* begin block 2 */
		// Start line: 3727
	/* end block 2 */
	// End Line: 3728

	/* begin block 3 */
		// Start line: 3733
	/* end block 3 */
	// End Line: 3734

	/* begin block 4 */
		// Start line: 3733
	/* end block 4 */
	// End Line: 3734

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Track_LoadObjectKillData__Fv(void)

{
  int *filePtr;
  int iVar1;
  int iVar2;
  Group *pGVar3;
  coorddef *a;
  Group *pGVar4;
  int iVar5;
  int entryInd;
  int local_28;
  int local_24;
  
  filePtr = (int *)KillFile_OpenRead__Fv();
  entryInd = 0;
  if (filePtr != (int *)0x0) {
    while (entryInd < *filePtr) {
      KillFile_ReadEntry__FPciRiT2((char *)filePtr,entryInd,&local_28,&local_24);
      pGVar3 = Track_chunkList[local_28].objInstanceBuf;
      if ((pGVar3 != (Group *)0x0) && (pGVar4 = pGVar3 + 1, local_24 < pGVar3->m_num_elements)) {
        iVar2 = 0;
        if (0 < local_24) {
          do {
            iVar2 = iVar2 + 1;
            pGVar4 = (Group *)((int)&pGVar4->m_num_elements + (int)*(short *)&pGVar4->m_num_elements
                              );
          } while (iVar2 < local_24);
        }
        pGVar3 = Track_chunkList[local_28].simObjBuf;
        iVar2 = 0;
        if (pGVar3 != (Group *)0x0) {
          iVar5 = pGVar3->m_num_elements;
          a = (coorddef *)(pGVar3 + 1);
          if (0 < iVar5) {
            do {
              iVar1 = Math_DistXZ__FP8coorddefT0(a,(coorddef *)(pGVar4 + 2));
              if (iVar1 < 0x1999) {
                *(undefined *)((int)&a[1].y + 3) = 0x10;
              }
              iVar2 = iVar2 + 1;
              a = (coorddef *)&a[1].z;
            } while (iVar2 < iVar5);
          }
        }
        *(byte *)((int)&pGVar4->m_num_elements + 2) =
             *(byte *)((int)&pGVar4->m_num_elements + 2) | 0x80;
      }
      entryInd = entryInd + 1;
    }
    purgememadr((int)filePtr);
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

	/* begin block 2 */
		// Start line: 3902
	/* end block 2 */
	// End Line: 3903

	/* begin block 3 */
		// Start line: 3912
	/* end block 3 */
	// End Line: 3913

	/* begin block 4 */
		// Start line: 3912
	/* end block 4 */
	// End Line: 3913

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

	/* begin block 2 */
		// Start line: 3955
	/* end block 2 */
	// End Line: 3956

	/* begin block 3 */
		// Start line: 3960
	/* end block 3 */
	// End Line: 3961

	/* begin block 4 */
		// Start line: 3960
	/* end block 4 */
	// End Line: 3961

SaveSurface * __11SaveSurfacei(SaveSurface *this,int numEntries)

{
  tSaveSurface *ptVar1;
  
  this->fMaxCount = (short)numEntries;
  this->fCount = 0;
  ptVar1 = (tSaveSurface *)reservememadr(s_Surface_Save_80056680,numEntries << 3,0);
  this->fStack = ptVar1;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._11SaveSurface(struct SaveSurface *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 1864, offset 0x800bafb4
	/* begin block 1 */
		// Start line: 1865
		// Start offset: 0x800BAFB4
	/* end block 1 */
	// End offset: 0x800BAFB4
	// End Line: 1865

	/* begin block 2 */
		// Start line: 3975
	/* end block 2 */
	// End Line: 3976

	/* begin block 3 */
		// Start line: 3981
	/* end block 3 */
	// End Line: 3982

	/* begin block 4 */
		// Start line: 3981
	/* end block 4 */
	// End Line: 3982

void ___11SaveSurface(SaveSurface *this,int __in_chrg)

{
  purgememadr((int)this->fStack);
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
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

	/* begin block 2 */
		// Start line: 3989
	/* end block 2 */
	// End Line: 3990

	/* begin block 3 */
		// Start line: 3995
	/* end block 3 */
	// End Line: 3996

	/* begin block 4 */
		// Start line: 3995
	/* end block 4 */
	// End Line: 3996

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





