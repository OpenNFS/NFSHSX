#include "THISDUST.H"
#include "BWORLD.H"


// decompiled code
// original method signature: 
// int /*$ra*/ xzsquaredist32__FP8coorddefT0(struct coorddef *c1 /*$a0*/, struct coorddef *c2 /*$a1*/)
 // line 127, offset 0x8007d5c4
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x8007D5C4
	/* end block 1 */
	// End offset: 0x8007D5C4
	// End Line: 129

	/* begin block 2 */
		// Start line: 254
	/* end block 2 */
	// End Line: 255

	/* begin block 3 */
		// Start line: 254
	/* end block 3 */
	// End Line: 255

	/* begin block 4 */
		// Start line: 255
	/* end block 4 */
	// End Line: 256

	/* begin block 5 */
		// Start line: 255
	/* end block 5 */
	// End Line: 256

int xzsquaredist32__FP8coorddefT0(coorddef *c1,coorddef *c2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = c2->x - c1->x >> 0xc;
  iVar2 = c2->z - c1->z >> 0xc;
  return (iVar1 * iVar1 >> 6) + (iVar2 * iVar2 >> 6);
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateContext__FP13DRender_tViewi(struct DRender_tView *Vi /*$s1*/, int contextHandle /*$s0*/)
 // line 140, offset 0x8007d608
	/* begin block 1 */
		// Start line: 141
		// Start offset: 0x8007D608

		/* begin block 1.1 */
			// Start line: 203
			// Start offset: 0x8007D644

			/* begin block 1.1.1 */
				// Start line: 206
				// Start offset: 0x8007D670
			/* end block 1.1.1 */
			// End offset: 0x8007D68C
			// End Line: 210
		/* end block 1.1 */
		// End offset: 0x8007D68C
		// End Line: 210
	/* end block 1 */
	// End offset: 0x8007D6AC
	// End Line: 217

	/* begin block 2 */
		// Start line: 268
	/* end block 2 */
	// End Line: 269

	/* begin block 3 */
		// Start line: 280
	/* end block 3 */
	// End Line: 281

	/* begin block 4 */
		// Start line: 280
	/* end block 4 */
	// End Line: 281

void UpdateContext__FP13DRender_tViewi(DRender_tView *Vi,int contextHandle)

{
  uint uVar1;
  DRender_tCalcView *pt;
  
  SetContext__Fi(contextHandle);
  pt = &Vi->cview;
  if (contextHandle == 0) {
    gBWSlice = (int)(gCurrContext->slicePos).slice;
  }
  BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi((coorddef *)pt,&gCurrContext->slicePos,1)
  ;
  if ((gCurrContext->slicePos).offEdge != '\0') {
    FindAbsClosestSliceCrude__FP8coorddefP12BWorldSm_Pos((coorddef *)pt,&gCurrContext->slicePos);
    BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
              ((coorddef *)pt,&gCurrContext->slicePos,1);
  }
  uVar1 = (uint)(gCurrContext->slicePos).chunk;
  if (gCurrContext->currentChunk != uVar1) {
    gCurrContext->currentChunk = uVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorld_BuildGlareEffects__FP13DRender_tViewP11Draw_DCacheP5Group(struct DRender_tView *Vi /*$s4*/, struct Draw_DCache *sd /*$s5*/, struct Group *group /*$a2*/)
 // line 228, offset 0x8007d6c0
	/* begin block 1 */
		// Start line: 229
		// Start offset: 0x8007D6C0
		// Variables:
	// 		int i; // $s1
	// 		int j; // $t0
	// 		struct Trk_SFX *objInstance; // $s2
	// 		int numObjects; // $s3

		/* begin block 1.1 */
			// Start line: 229
			// Start offset: 0x8007D6C0
			// Variables:
		// 		struct Group *this; // $a2

			/* begin block 1.1.1 */
				// Start line: 229
				// Start offset: 0x8007D6C0
			/* end block 1.1.1 */
			// End offset: 0x8007D6C0
			// End Line: 229
		/* end block 1.1 */
		// End offset: 0x8007D6C0
		// End Line: 229

		/* begin block 1.2 */
			// Start line: 229
			// Start offset: 0x8007D6C0

			/* begin block 1.2.1 */
				// Start line: 237
				// Start offset: 0x8007D6F8
				// Variables:
			// 		short pad; // $a0
			// 		short type; // $t1

				/* begin block 1.2.1.1 */
					// Start line: 237
					// Start offset: 0x8007D708

					/* begin block 1.2.1.1.1 */
						// Start line: 246
						// Start offset: 0x8007D71C
						// Variables:
					// 		struct coorddef dir; // stack offset -48
					/* end block 1.2.1.1.1 */
					// End offset: 0x8007D758
					// End Line: 250
				/* end block 1.2.1.1 */
				// End offset: 0x8007D758
				// End Line: 250

				/* begin block 1.2.1.2 */
					// Start line: 252
					// Start offset: 0x8007D758

					/* begin block 1.2.1.2.1 */
						// Start line: 253
						// Start offset: 0x8007D760
						// Variables:
					// 		int found_match; // $a3
					// 		int group; // $a1

						/* begin block 1.2.1.2.1.1 */
							// Start line: 254
							// Start offset: 0x8007D760

							/* begin block 1.2.1.2.1.1.1 */
								// Start line: 259
								// Start offset: 0x8007D76C
							/* end block 1.2.1.2.1.1.1 */
							// End offset: 0x8007D794
							// End Line: 262
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x8007D798
						// End Line: 266

						/* begin block 1.2.1.2.1.2 */
							// Start line: 271
							// Start offset: 0x8007D798

							/* begin block 1.2.1.2.1.2.1 */
								// Start line: 272
								// Start offset: 0x8007D7A0

								/* begin block 1.2.1.2.1.2.1.1 */
									// Start line: 274
									// Start offset: 0x8007D7A0

									/* begin block 1.2.1.2.1.2.1.1.1 */
										// Start line: 275
										// Start offset: 0x8007D7A8
										// Variables:
									// 		struct coorddef *pt1; // $v0
									/* end block 1.2.1.2.1.2.1.1.1 */
									// End offset: 0x8007D7A8
									// End Line: 276
								/* end block 1.2.1.2.1.2.1.1 */
								// End offset: 0x8007D7A8
								// End Line: 276
							/* end block 1.2.1.2.1.2.1 */
							// End offset: 0x8007D7A8
							// End Line: 276
						/* end block 1.2.1.2.1.2 */
						// End offset: 0x8007D7A8
						// End Line: 276
					/* end block 1.2.1.2.1 */
					// End offset: 0x8007D7A8
					// End Line: 276
				/* end block 1.2.1.2 */
				// End offset: 0x8007D7E8
				// End Line: 292
			/* end block 1.2.1 */
			// End offset: 0x8007D7E8
			// End Line: 292
		/* end block 1.2 */
		// End offset: 0x8007D7F4
		// End Line: 294
	/* end block 1 */
	// End offset: 0x8007D7F4
	// End Line: 294

	/* begin block 2 */
		// Start line: 444
	/* end block 2 */
	// End Line: 445

	/* begin block 3 */
		// Start line: 456
	/* end block 3 */
	// End Line: 457

	/* begin block 4 */
		// Start line: 456
	/* end block 4 */
	// End Line: 457

void BWorld_BuildGlareEffects__FP13DRender_tViewP11Draw_DCacheP5Group
               (DRender_tView *Vi,Draw_DCache *sd,Group *group)

{
  ushort uVar1;
  bool bVar2;
  coorddef *pcVar3;
  coorddef *pcVar4;
  int iVar5;
  coorddef *fpt;
  int obj;
  coorddef *pcVar6;
  int iVar7;
  coorddef local_30;
  
  obj = 0;
  pcVar6 = (coorddef *)(group + 1);
  iVar7 = group->m_num_elements;
  fpt = pcVar6;
  do {
    if (iVar7 <= obj) {
      return;
    }
    uVar1 = *(ushort *)((int)&fpt[1].x + 2);
    if ((int)*(short *)&fpt[1].x == 100) {
      local_30.x = DAT_80055880;
      local_30.y = PTR_PTR_80055884;
      local_30.z = DAT_80055888;
      TrgSfx_AddEnviroEffect__FiiP8coorddefT2(obj,0x101,fpt,&local_30);
      return;
    }
    bVar2 = false;
    if (uVar1 == 0) {
      Flare_Halo__FP13DRender_tViewiiP8coorddefP15Draw_FlareCache
                (Vi,-1,(int)*(short *)&fpt[1].x,fpt,(Draw_FlareCache *)sd);
    }
    else {
      iVar5 = 0;
      pcVar4 = pcVar6;
      while (iVar5 < iVar7) {
        pcVar3 = pcVar4 + 1;
        pcVar4 = (coorddef *)&pcVar4[1].y;
        if ((uVar1 & 0x7fff) == (*(ushort *)((int)&pcVar3->x + 2) & 0x7fff)) {
          bVar2 = true;
          break;
        }
        iVar5 = iVar5 + 1;
      }
      if ((bVar2) && ((int)((uint)uVar1 << 0x10) < 0)) {
        Flare_Halo2__FP13DRender_tViewiiP8coorddefT3P15Draw_FlareCache
                  (Vi,-1,(int)*(short *)&fpt[1].x,fpt,(coorddef *)((int)pcVar6 + iVar5 * 0x10));
      }
    }
    fpt = (coorddef *)&fpt[1].y;
    obj = obj + 1;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorld_InitSpikeBelt__Fv()
 // line 324, offset 0x8007d818
	/* begin block 1 */
		// Start line: 325
		// Start offset: 0x8007D818
		// Variables:
	// 		int leastDist; // $a3
	// 		int leastDistInd; // $t1

		/* begin block 1.1 */
			// Start line: 326
			// Start offset: 0x8007D818
			// Variables:
		// 		int i; // $a1

			/* begin block 1.1.1 */
				// Start line: 337
				// Start offset: 0x8007D848
				// Variables:
			// 		int dist; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8007D8AC
			// End Line: 346
		/* end block 1.1 */
		// End offset: 0x8007D8B8
		// End Line: 348
	/* end block 1 */
	// End offset: 0x8007D8B8
	// End Line: 349

	/* begin block 2 */
		// Start line: 636
	/* end block 2 */
	// End Line: 637

	/* begin block 3 */
		// Start line: 666
	/* end block 3 */
	// End Line: 667

	/* begin block 4 */
		// Start line: 666
	/* end block 4 */
	// End Line: 667

	/* begin block 5 */
		// Start line: 667
	/* end block 5 */
	// End Line: 668

	/* begin block 6 */
		// Start line: 667
	/* end block 6 */
	// End Line: 668

	/* begin block 7 */
		// Start line: 675
	/* end block 7 */
	// End Line: 676

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BWorld_InitSpikeBelt__Fv(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CVECTOR *pCVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0x7fffffff;
  gSpikeBeltColourTableIndex = -1;
  iVar5 = 0;
  pCVar4 = Chunk_lightTable;
  while (iVar5 < Chunk_numLight) {
    iVar1 = 0x80 - (uint)pCVar4->r;
    iVar2 = 0x80 - (uint)pCVar4->g;
    iVar3 = 0x80 - (uint)pCVar4->b;
    iVar1 = iVar1 * iVar1 + iVar2 * iVar2 + iVar3 * iVar3;
    if (iVar1 < iVar6) {
      iVar6 = iVar1;
      gSpikeBeltColourTableIndex = iVar5;
    }
    pCVar4 = pCVar4 + 1;
    iVar5 = iVar5 + 1;
  }
  gSpikeBelt = 0;
  gSpikeBeltSlice = 0;
  gSpikeBeltChunk = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorld_SetSpikeBelt__Fiii(int slice /*$a0*/, int x /*$a1*/, int width /*$a2*/)
 // line 352, offset 0x8007d8c4
	/* begin block 1 */
		// Start line: 353
		// Start offset: 0x8007D8C4
	/* end block 1 */
	// End offset: 0x8007D8C4
	// End Line: 354

	/* begin block 2 */
		// Start line: 729
	/* end block 2 */
	// End Line: 730

	/* begin block 3 */
		// Start line: 733
	/* end block 3 */
	// End Line: 734

	/* begin block 4 */
		// Start line: 733
	/* end block 4 */
	// End Line: 734

	/* begin block 5 */
		// Start line: 734
	/* end block 5 */
	// End Line: 735

	/* begin block 6 */
		// Start line: 734
	/* end block 6 */
	// End Line: 735

void BWorld_SetSpikeBelt__Fiii(int slice,int x,int width)

{
  gSpikeBelt = 1;
  gSpikeBeltSlice = slice;
  gSpikeBeltChunk = (uint)BWorldSm_slices[slice].chunkIndex;
  gSpikeBeltX = x;
  gSpikeBeltWidth = width;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ BWorld_GetSpikeBelt__FPiN20(int *slice /*$a0*/, int *x /*$a1*/, int *width /*$a2*/)
 // line 363, offset 0x8007d8f8
	/* begin block 1 */
		// Start line: 364
		// Start offset: 0x8007D8F8
	/* end block 1 */
	// End offset: 0x8007D938
	// End Line: 375

	/* begin block 2 */
		// Start line: 752
	/* end block 2 */
	// End Line: 753

	/* begin block 3 */
		// Start line: 758
	/* end block 3 */
	// End Line: 759

	/* begin block 4 */
		// Start line: 758
	/* end block 4 */
	// End Line: 759

	/* begin block 5 */
		// Start line: 759
	/* end block 5 */
	// End Line: 760

	/* begin block 6 */
		// Start line: 759
	/* end block 6 */
	// End Line: 760

int BWorld_GetSpikeBelt__FPiN20(int *slice,int *x,int *width)

{
  if (gSpikeBelt != 1) {
    *width = 0;
    *x = 0;
    *slice = 0;
    return 0;
  }
  *slice = gSpikeBeltSlice;
  *x = gSpikeBeltX;
  *width = gSpikeBeltWidth;
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupBuildMatrices__FP13DRender_tViewP11Draw_DCache(struct DRender_tView *Vi /*$s1*/, struct Draw_DCache *sd /*$s2*/)
 // line 393, offset 0x8007d940
	/* begin block 1 */
		// Start line: 394
		// Start offset: 0x8007D940

		/* begin block 1.1 */
			// Start line: 464
			// Start offset: 0x8007D99C
			// Variables:
		// 		int t1; // $a0
		// 		int t2; // $v0
		// 		int t3; // $a1
		/* end block 1.1 */
		// End offset: 0x8007D99C
		// End Line: 466

		/* begin block 1.2 */
			// Start line: 466
			// Start offset: 0x8007D99C

			/* begin block 1.2.1 */
				// Start line: 488
				// Start offset: 0x8007DA04
				// Variables:
			// 		struct matrixtdef tm; // stack offset -96
			// 		int i; // $a3
			// 		int maxdist; // $t1

				/* begin block 1.2.1.1 */
					// Start line: 496
					// Start offset: 0x8007DA04
					// Variables:
				// 		int t1; // $v0
				// 		int t2; // $v0
				// 		int t3; // $v1
				/* end block 1.2.1.1 */
				// End offset: 0x8007DA04
				// End Line: 496

				/* begin block 1.2.1.2 */
					// Start line: 496
					// Start offset: 0x8007DA04

					/* begin block 1.2.1.2.1 */
						// Start line: 514
						// Start offset: 0x8007DA80

						/* begin block 1.2.1.2.1.1 */
							// Start line: 516
							// Start offset: 0x8007DA80

							/* begin block 1.2.1.2.1.1.1 */
								// Start line: 517
								// Start offset: 0x8007DAA0
								// Variables:
							// 		struct Car_tObj *theCar; // $a2

								/* begin block 1.2.1.2.1.1.1.1 */
									// Start line: 526
									// Start offset: 0x8007DAC4

									/* begin block 1.2.1.2.1.1.1.1.1 */
										// Start line: 527
										// Start offset: 0x8007DB00
										// Variables:
									// 		struct coorddef *campos; // $t2
									// 		int dx; // $a1
									// 		int dz; // $a0
									// 		int diff; // $a0
									/* end block 1.2.1.2.1.1.1.1.1 */
									// End offset: 0x8007DB60
									// End Line: 547
								/* end block 1.2.1.2.1.1.1.1 */
								// End offset: 0x8007DB60
								// End Line: 547
							/* end block 1.2.1.2.1.1.1 */
							// End offset: 0x8007DB60
							// End Line: 547
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x8007DB6C
						// End Line: 550

						/* begin block 1.2.1.2.1.2 */
							// Start line: 552
							// Start offset: 0x8007DB6C

							/* begin block 1.2.1.2.1.2.1 */
								// Start line: 553
								// Start offset: 0x8007DB7C
								// Variables:
							// 		struct matrixtdef rotY; // stack offset -56
							// 		static int cop_angle; // offset 0x4

								/* begin block 1.2.1.2.1.2.1.1 */
									// Start line: 559
									// Start offset: 0x8007DB7C
									// Variables:
								// 		int t1; // $v0
								// 		int t2; // $v0
								// 		int t3; // $v1
								/* end block 1.2.1.2.1.2.1.1 */
								// End offset: 0x8007DB7C
								// End Line: 559
							/* end block 1.2.1.2.1.2.1 */
							// End offset: 0x8007DBFC
							// End Line: 576
						/* end block 1.2.1.2.1.2 */
						// End offset: 0x8007DBFC
						// End Line: 576
					/* end block 1.2.1.2.1 */
					// End offset: 0x8007DBFC
					// End Line: 576
				/* end block 1.2.1.2 */
				// End offset: 0x8007DBFC
				// End Line: 576
			/* end block 1.2.1 */
			// End offset: 0x8007DBFC
			// End Line: 576
		/* end block 1.2 */
		// End offset: 0x8007DBFC
		// End Line: 576
	/* end block 1 */
	// End offset: 0x8007DBFC
	// End Line: 576

	/* begin block 2 */
		// Start line: 807
	/* end block 2 */
	// End Line: 808

	/* begin block 3 */
		// Start line: 826
	/* end block 3 */
	// End Line: 827

	/* begin block 4 */
		// Start line: 826
	/* end block 4 */
	// End Line: 827

void SetupBuildMatrices__FP13DRender_tViewP11Draw_DCache(DRender_tView *Vi,Draw_DCache *sd)

{
  int iVar1;
  int contextHandle;
  int iVar2;
  Car_tObj *pCVar3;
  int iVar4;
  Car_tObj **ppCVar5;
  matrixtdef mStack96;
  matrixtdef mStack56;
  
  if ((Vi->id == Draw_gPlayer1View) || (Vi->id == Draw_gPlayer2View)) {
    contextHandle = Vi->player;
  }
  else {
    contextHandle = 1;
  }
  UpdateContext__FP13DRender_tViewi(Vi,contextHandle);
  gWorldMat.m[0] = (Vi->cview).mrotationInv.m[0];
  gWorldMat.m[2] = (Vi->cview).mrotationInv.m[2];
  gWorldMat.m[1] = -(Vi->cview).mrotationInv.m[1];
  gWorldMat.m[3] = (Vi->cview).mrotationInv.m[3];
  gWorldMat.m[5] = (Vi->cview).mrotationInv.m[5];
  gWorldMat.m[4] = -(Vi->cview).mrotationInv.m[4];
  gWorldMat.m[6] = (Vi->cview).mrotationInv.m[6];
  gWorldMat.m[8] = (Vi->cview).mrotationInv.m[8];
  gWorldMat.m[7] = -(Vi->cview).mrotationInv.m[7];
  if (gNight_renderNight != (uchar *)0x0) {
    transpose((undefined4 *)&(&Camera_gInfo.target)[Vi->player * 0x44]->orientMat,
              (undefined4 *)&gNightMat);
    gNightMat.m[1] = -gNightMat.m[1];
    gNightMat.m[7] = -gNightMat.m[7];
    gNightMat.m[4] = -gNightMat.m[4];
    DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX(&gNightMat,&sd->matNight);
    BW_gCopCarObj = (Car_tObj *)0x0;
    contextHandle = 0xb40000;
    if (GameSetup_gData.commMode != 1) {
      iVar4 = -1;
      ppCVar5 = &PTR_8010fab0;
      while (iVar4 < Cars_gNumCopCars) {
        pCVar3 = Cars_gList9;
        if (-1 < iVar4) {
          pCVar3 = *ppCVar5;
        }
        if ((((pCVar3->N).active != '\0') && (((pCVar3->speechInfo).speechSource & 2) != 0)) &&
           ((*(ushort *)((int)&(pCVar3->render).bodyPitch + 2) & 4) == 0)) {
          iVar2 = (pCVar3->N).position.x - (Vi->cview).translation.x;
          iVar1 = (pCVar3->N).position.z - (Vi->cview).translation.z;
          if (iVar2 < 0) {
            iVar2 = -iVar2;
          }
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if (iVar1 < iVar2) {
            iVar2 = iVar2 + (iVar1 >> 2);
          }
          else {
            iVar2 = iVar1 + (iVar2 >> 2);
          }
          if (iVar2 < contextHandle) {
            contextHandle = iVar2;
            BW_gCopCarObj = pCVar3;
          }
        }
        ppCVar5 = ppCVar5 + 1;
        iVar4 = iVar4 + 1;
      }
      if (BW_gCopCarObj != (Car_tObj *)0x0) {
        Night_SetCopColor__FP18GameSetup_tCarData(BW_gCopCarObj->carInfo);
        DAT_8013c75c = DAT_8013c75c + 0x40;
        xformy((int *)&mStack56,DAT_8013c75c);
        transpose((undefined4 *)&(BW_gCopCarObj->N).orientMat,(undefined4 *)&mStack96);
        Math_fasttransmult__FP10matrixtdefN20(&mStack96,&mStack56,&gCopMat);
        gCopMat.m[1] = -gCopMat.m[1];
        gCopMat.m[7] = -gCopMat.m[7];
        gCopMat.m[4] = -gCopMat.m[4];
        DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX(&gCopMat,&sd->matCop);
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ BWorld_CheckChunkVisible__FP12BWorldSm_PosT0(struct BWorldSm_Pos *slicePosSource /*$a0*/, struct BWorldSm_Pos *slicePosTest /*$a1*/)
 // line 590, offset 0x8007dc14
	/* begin block 1 */
		// Start line: 591
		// Start offset: 0x8007DC14
		// Variables:
	// 		int sourceChunkInd; // $v1
	// 		int testChunkIndFwd; // $t3
	// 		int testChunkIndBwd; // $v1
	// 		short *chunkViewList; // $a0
	// 		int chunkInd; // $a0
	// 		int count; // $a3
	// 		int vis; // $a2
	/* end block 1 */
	// End offset: 0x8007DD44
	// End Line: 644

	/* begin block 2 */
		// Start line: 1235
	/* end block 2 */
	// End Line: 1236

	/* begin block 3 */
		// Start line: 1250
	/* end block 3 */
	// End Line: 1251

	/* begin block 4 */
		// Start line: 1250
	/* end block 4 */
	// End Line: 1251

	/* begin block 5 */
		// Start line: 1260
	/* end block 5 */
	// End Line: 1261

int BWorld_CheckChunkVisible__FP12BWorldSm_PosT0
              (BWorldSm_Pos *slicePosSource,BWorldSm_Pos *slicePosTest)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  
  if (slicePosSource == slicePosTest) {
    return 1;
  }
  iVar4 = (int)slicePosTest->slice + 2;
  if (gNumSlices <= iVar4) {
    iVar4 = (int)slicePosTest->slice - (gNumSlices + -2);
  }
  iVar1 = (int)slicePosTest->slice + -2;
  if (iVar1 < 0) {
    iVar1 = (int)slicePosTest->slice + gNumSlices + -2;
  }
  iVar6 = (uint)Track_gInViewCount[(uint)slicePosSource->chunk] - 1;
  uVar5 = 0;
  if (iVar6 != -1) {
    psVar7 = Track_gInViewList + (uint)slicePosSource->chunk * 0x20 + iVar6;
    do {
      uVar3 = SEXT24(*psVar7);
      if ((uVar3 & 0x3ff) == (uint)BWorldSm_slices[iVar4].chunkIndex) {
        uVar2 = uVar5 ^ 2;
        if ((uVar3 & 0x800) != 0) goto LAB_8007dd44;
        uVar5 = uVar5 + 1;
        uVar2 = uVar5 ^ 2;
        if (uVar5 != 1) goto LAB_8007dd44;
      }
      if ((uVar3 & 0x3ff) == (uint)BWorldSm_slices[iVar1].chunkIndex) {
        uVar2 = uVar5 ^ 2;
        if ((uVar3 & 0x800) != 0) goto LAB_8007dd44;
        uVar5 = uVar5 + 1;
        uVar2 = uVar5 ^ 2;
        if (uVar5 != 1) goto LAB_8007dd44;
      }
      iVar6 = iVar6 + -1;
      psVar7 = psVar7 + -1;
    } while (iVar6 != -1);
  }
  uVar2 = uVar5 ^ 2;
LAB_8007dd44:
  return (uint)(uVar2 == 0);
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetRezIndex__Fi(int dist /*$a0*/)
 // line 657, offset 0x8007dd54
	/* begin block 1 */
		// Start line: 658
		// Start offset: 0x8007DD54
	/* end block 1 */
	// End offset: 0x8007DD54
	// End Line: 661

	/* begin block 2 */
		// Start line: 1388
	/* end block 2 */
	// End Line: 1389

	/* begin block 3 */
		// Start line: 1402
	/* end block 3 */
	// End Line: 1403

	/* begin block 4 */
		// Start line: 1402
	/* end block 4 */
	// End Line: 1403

	/* begin block 5 */
		// Start line: 1405
	/* end block 5 */
	// End Line: 1406

int GetRezIndex__Fi(int dist)

{
  return ((uint)(gCurrContext->lowDetailDistSq < dist) ^ 1) << 2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SetupChunkBuildList__FP13DRender_tView(struct DRender_tView *Vi /*$s6*/)
 // line 676, offset 0x8007dd74
	/* begin block 1 */
		// Start line: 677
		// Start offset: 0x8007DD74
		// Variables:
	// 		int chunkInd; // $s2
	// 		int chunkCount; // $s7
	// 		int totalVisChunks; // stack offset -48

		/* begin block 1.1 */
			// Start line: 677
			// Start offset: 0x8007DD74
			// Variables:
		// 		int viewInd; // $s5

			/* begin block 1.1.1 */
				// Start line: 689
				// Start offset: 0x8007DDE8
				// Variables:
			// 		int chunkDist; // $s4
			// 		struct coorddef *pChunkCp; // $s0
			// 		struct Chunk *chunkPtr; // $s0
			// 		struct coorddef tmpPts[4]; // stack offset -128
			// 		struct coorddef tmp; // stack offset -80
			// 		struct coorddef tmp2; // stack offset -64
			/* end block 1.1.1 */
			// End offset: 0x8007E060
			// End Line: 825
		/* end block 1.1 */
		// End offset: 0x8007E06C
		// End Line: 826
	/* end block 1 */
	// End offset: 0x8007E06C
	// End Line: 844

	/* begin block 2 */
		// Start line: 1429
	/* end block 2 */
	// End Line: 1430

	/* begin block 3 */
		// Start line: 1440
	/* end block 3 */
	// End Line: 1441

	/* begin block 4 */
		// Start line: 1440
	/* end block 4 */
	// End Line: 1441

int SetupChunkBuildList__FP13DRender_tView(DRender_tView *Vi)

{
  int dist;
  coorddef *c1;
  Chunk *s;
  tBuildEntry *ptVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  coorddef local_80;
  int local_74;
  int local_6c;
  int local_68;
  int local_60;
  int local_5c;
  int local_54;
  coorddef local_50;
  coorddef cStack64;
  uint local_30;
  
  ptVar1 = &BWorld_gChunkBuildList;
  iVar5 = 0;
  iVar4 = 0;
  puVar3 = (ushort *)(Track_gInViewList + gCurrContext->currentChunk * 0x20);
  local_30 = (uint)Track_gInViewCount[gCurrContext->currentChunk];
  while (iVar4 < (int)local_30) {
    uVar2 = (uint)*puVar3 & 0x3ff;
    c1 = Chunk_chunkCenters + uVar2;
    dist = xzsquaredist32__FP8coorddefT0(c1,(coorddef *)&Vi->cview);
    if ((dist <= gCurrContext->chunkFarZClipSq) && ((*puVar3 & 0x800) == 0)) {
      local_50.x = c1->x - (Vi->cview).translation.x;
      local_50.y = BWorldSm_slices[uVar2 * 8].center[1] - (Vi->cview).translation.y;
      local_50.z = c1->z - (Vi->cview).translation.z;
      s = Track_chunkList + uVar2;
      TrsProj_SetPsxTransZero__Fv();
      TrsProj_TransPt__FP8coorddefT0(&local_50,&cStack64);
      TrsProj_SetPsxTrans__FP8coorddef(&cStack64);
      TrsProj_TransPtN16__FP10RelCoord16P8coorddefi((RelCoord16 *)s,&local_80,4);
      if (((local_80.x <= local_80.z) ||
          (((local_74 <= local_6c || (local_68 <= local_60)) || (local_5c <= local_54)))) &&
         (((((-local_80.x <= local_80.z || (-local_74 <= local_6c)) || (-local_68 <= local_60)) ||
           (-local_5c <= local_54)) &&
          (((-1 < local_80.z || (-1 < local_6c)) || ((-1 < local_60 || (-1 < local_54)))))))) {
        ptVar1->enableBits = '\x03';
        if (dist < gCurrContext->lineFarZClipSq) {
          ptVar1->enableBits = '\a';
        }
        if ((*puVar3 & 0x4000) != 0) {
          ptVar1->enableBits = ptVar1->enableBits & 0xfd;
        }
        if ((*puVar3 & 0x2000) != 0) {
          ptVar1->enableBits = ptVar1->enableBits & 0xfe;
        }
        dist = GetRezIndex__Fi(dist);
        ptVar1->geomRez = (char)dist;
        ptVar1->chunkInd = (short)uVar2;
        ptVar1 = ptVar1 + 1;
        iVar5 = iVar5 + 1;
      }
    }
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 1;
  }
  return iVar5;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ BWorld_IsSliceInBuildList__Fi(int slice /*$a0*/)
 // line 847, offset 0x8007e0a0
	/* begin block 1 */
		// Start line: 848
		// Start offset: 0x8007E0A0
		// Variables:
	// 		int chunk; // $a0

		/* begin block 1.1 */
			// Start line: 849
			// Start offset: 0x8007E0AC
			// Variables:
		// 		int bi; // $a1
		/* end block 1.1 */
		// End offset: 0x8007E0EC
		// End Line: 855
	/* end block 1 */
	// End offset: 0x8007E0EC
	// End Line: 855

	/* begin block 2 */
		// Start line: 1855
	/* end block 2 */
	// End Line: 1856

	/* begin block 3 */
		// Start line: 1859
	/* end block 3 */
	// End Line: 1860

	/* begin block 4 */
		// Start line: 1859
	/* end block 4 */
	// End Line: 1860

	/* begin block 5 */
		// Start line: 1860
	/* end block 5 */
	// End Line: 1861

	/* begin block 6 */
		// Start line: 1860
	/* end block 6 */
	// End Line: 1861

void * BWorld_IsSliceInBuildList__Fi(int slice)

{
  tBuildEntry *ptVar1;
  int iVar2;
  
  iVar2 = 0;
  if (slice < 0) {
    slice = slice + 7;
  }
  if (0 < BWorld_gChunkCount) {
    ptVar1 = &BWorld_gChunkBuildList;
    do {
      iVar2 = iVar2 + 1;
      if ((int)ptVar1->chunkInd == slice >> 3) {
        return &DAT_00000001;
      }
      ptVar1 = ptVar1 + 1;
    } while (iVar2 < BWorld_gChunkCount);
  }
  return (void *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorld_OnyxBuildFacets__FP13DRender_tView(struct DRender_tView *Vi /*$s3*/)
 // line 906, offset 0x8007e0f4
	/* begin block 1 */
		// Start line: 907
		// Start offset: 0x8007E0F4
		// Variables:
	// 		struct Draw_DCache *sd; // $s2

		/* begin block 1.1 */
			// Start line: 907
			// Start offset: 0x8007E0F4

			/* begin block 1.1.1 */
				// Start line: 940
				// Start offset: 0x8007E1BC
				// Variables:
			// 		short a; // $v0
			// 		unsigned char ac; // $v1
			// 		unsigned char bc; // $a0
			// 		unsigned char cc; // $a1
			// 		unsigned char dc; // $a2
			/* end block 1.1.1 */
			// End offset: 0x8007E1F8
			// End Line: 952
		/* end block 1.1 */
		// End offset: 0x8007E1F8
		// End Line: 952

		/* begin block 1.2 */
			// Start line: 986
			// Start offset: 0x8007E2AC

			/* begin block 1.2.1 */
				// Start line: 986
				// Start offset: 0x8007E2BC

				/* begin block 1.2.1.1 */
					// Start line: 986
					// Start offset: 0x8007E2BC
					// Variables:
				// 		int buildInd; // $s0
				/* end block 1.2.1.1 */
				// End offset: 0x8007E308
				// End Line: 992
			/* end block 1.2.1 */
			// End offset: 0x8007E308
			// End Line: 992
		/* end block 1.2 */
		// End offset: 0x8007E308
		// End Line: 992

		/* begin block 1.3 */
			// Start line: 1002
			// Start offset: 0x8007E308

			/* begin block 1.3.1 */
				// Start line: 1003
				// Start offset: 0x8007E31C

				/* begin block 1.3.1.1 */
					// Start line: 1005
					// Start offset: 0x8007E31C
					// Variables:
				// 		int buildInd; // $s1

					/* begin block 1.3.1.1.1 */
						// Start line: 1005
						// Start offset: 0x8007E324
						// Variables:
					// 		struct Chunk *chunkPtr; // $v0
					// 		int chunkInd; // $v0
					/* end block 1.3.1.1.1 */
					// End offset: 0x8007E370
					// End Line: 1015
				/* end block 1.3.1.1 */
				// End offset: 0x8007E37C
				// End Line: 1017
			/* end block 1.3.1 */
			// End offset: 0x8007E37C
			// End Line: 1017
		/* end block 1.3 */
		// End offset: 0x8007E37C
		// End Line: 1017
	/* end block 1 */
	// End offset: 0x8007E3B8
	// End Line: 1039

	/* begin block 2 */
		// Start line: 1925
	/* end block 2 */
	// End Line: 1926

	/* begin block 3 */
		// Start line: 1977
	/* end block 3 */
	// End Line: 1978

	/* begin block 4 */
		// Start line: 1977
	/* end block 4 */
	// End Line: 1978

void BWorld_OnyxBuildFacets__FP13DRender_tView(DRender_tView *Vi)

{
  void *pvVar1;
  int iVar2;
  tBuildEntry *ptVar3;
  
  Chunk_UpdateSys__FP13DRender_tView(Vi);
  gVi2 = Vi;
  gWSavePtr = SetSp();
  stackSpeedUpEnbabledFlag = 1;
  SetupBuildMatrices__FP13DRender_tViewP11Draw_DCache(gVi2,(Draw_DCache *)&DAT_1f800000);
  DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX(&gWorldMat,(MATRIX *)&DAT_1f800014);
  BWorld_gChunkCount = SetupChunkBuildList__FP13DRender_tView(gVi2);
  gWSavePtr = SetSp();
  stackSpeedUpEnbabledFlag = 0;
  DAT_1f8000dc = (undefined2)TrackSpec_gSpec.fogspec.start;
  DAT_1f8000de = (undefined2)TrackSpec_gSpec.fogspec.dist2base;
  DAT_1f80010e = (undefined)TrackSpec_gSpec.fogstate;
  if (GameSetup_gData.Time != 0) {
    DAT_1f800108 = Night_gZNear._0_2_;
    DAT_1f80010a = Night_gXDistShift._0_1_;
    DAT_1f80010b = Night_gZDistShift._0_1_;
    DAT_1f80010c = Night_gDrawLightning;
    DAT_1f80010d = Night_gLightningType._0_1_;
  }
  gWSavePtr = SetSp();
  stackSpeedUpEnbabledFlag = 1;
  DrawW_DoTrough__FP13DRender_tViewP11tBuildEntry(Vi,&BWorld_gChunkBuildList);
  gWSavePtr = SetSp();
  stackSpeedUpEnbabledFlag = 0;
  if ((GameSetup_gData.track != 0) || (GameSetup_gData.Weather != 1)) {
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 1;
    DrawW_DoLines__FP13DRender_tViewP11tBuildEntryP11Draw_DCache
              (Vi,&BWorld_gChunkBuildList,(Draw_DCache *)&DAT_1f800000);
    gWSavePtr = SetSp();
  }
  stackSpeedUpEnbabledFlag = 0;
  if ((gSpikeBelt != 0) && (iVar2 = 0, 0 < BWorld_gChunkCount)) {
    ptVar3 = &BWorld_gChunkBuildList;
    do {
      if ((int)ptVar3->chunkInd == gSpikeBeltChunk) {
        DrawW_BuildSpikeBelt__FP13DRender_tViewiP11Draw_DCache
                  (Vi,gSpikeBeltWidth,(Draw_DCache *)&DAT_1f800000);
      }
      iVar2 = iVar2 + 1;
      ptVar3 = ptVar3 + 1;
    } while (iVar2 < BWorld_gChunkCount);
  }
  iVar2 = 0;
  if (GameSetup_gData.commMode == 0) {
    ptVar3 = &BWorld_gChunkBuildList;
    while (iVar2 < BWorld_gChunkCount) {
      if (Track_chunkList[(int)ptVar3->chunkInd].sfxBuf != (Group *)0x0) {
        BWorld_BuildGlareEffects__FP13DRender_tViewP11Draw_DCacheP5Group
                  (Vi,(Draw_DCache *)&DAT_1f800000,Track_chunkList[(int)ptVar3->chunkInd].sfxBuf);
      }
      ptVar3 = ptVar3 + 1;
      iVar2 = iVar2 + 1;
    }
  }
  if ((Object_customSFXInst != (Group *)0x0) &&
     (pvVar1 = BWorld_IsSliceInBuildList__Fi(Object_customSliceNum), pvVar1 != (void *)0x0)) {
    BWorld_BuildGlareEffects__FP13DRender_tViewP11Draw_DCacheP5Group
              (Vi,(Draw_DCache *)&DAT_1f800000,Object_customSFXInst);
  }
  DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX(&gWorldMat,(MATRIX *)&DAT_1f800014);
  DrawW_DoObjects__FP13DRender_tViewP11tBuildEntry(Vi,&BWorld_gChunkBuildList);
  return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ BWAllocMem__Fl(long size /*$a0*/)
 // line 1107, offset 0x8007e3f8
	/* begin block 1 */
		// Start line: 1108
		// Start offset: 0x8007E3F8
		// Variables:
	// 		static int totalMem; // offset 0x8
	/* end block 1 */
	// End offset: 0x8007E3F8
	// End Line: 1108

	/* begin block 2 */
		// Start line: 2370
	/* end block 2 */
	// End Line: 2371

	/* begin block 3 */
		// Start line: 2422
	/* end block 3 */
	// End Line: 2423

	/* begin block 4 */
		// Start line: 2422
	/* end block 4 */
	// End Line: 2423

char * BWAllocMem__Fl(long size)

{
  char *pcVar1;
  
  DAT_8013c760 = DAT_8013c760 + size;
  pcVar1 = Platform_GetDCTBuffer__FiPc(size,s_bworld_8013c764);
  return pcVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorld_InitContexts__Fv()
 // line 1146, offset 0x8007e428
	/* begin block 1 */
		// Start line: 1147
		// Start offset: 0x8007E428
		// Variables:
	// 		int i; // $a2
	/* end block 1 */
	// End offset: 0x8007E458
	// End Line: 1156

	/* begin block 2 */
		// Start line: 2472
	/* end block 2 */
	// End Line: 2473

	/* begin block 3 */
		// Start line: 2505
	/* end block 3 */
	// End Line: 2506

	/* begin block 4 */
		// Start line: 2505
	/* end block 4 */
	// End Line: 2506

	/* begin block 5 */
		// Start line: 2511
	/* end block 5 */
	// End Line: 2512

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BWorld_InitContexts__Fv(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = -0x7fef10b8;
  gContextMan.initialized = 1;
  gContextMan.count = 0;
  do {
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + -0x9c;
  } while (-1 < iVar2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorld_DeInitContexts__Fv()
 // line 1165, offset 0x8007e460
	/* begin block 1 */
		// Start line: 1166
		// Start offset: 0x8007E460
	/* end block 1 */
	// End offset: 0x8007E460
	// End Line: 1166

	/* begin block 2 */
		// Start line: 2539
	/* end block 2 */
	// End Line: 2540

	/* begin block 3 */
		// Start line: 2549
	/* end block 3 */
	// End Line: 2550

	/* begin block 4 */
		// Start line: 2549
	/* end block 4 */
	// End Line: 2550

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BWorld_DeInitContexts__Fv(void)

{
  BWorld_InitContexts__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetContext__Fi(int contextHandle /*$a0*/)
 // line 1178, offset 0x8007e480
	/* begin block 1 */
		// Start line: 1179
		// Start offset: 0x8007E480
	/* end block 1 */
	// End offset: 0x8007E480
	// End Line: 1180

	/* begin block 2 */
		// Start line: 2564
	/* end block 2 */
	// End Line: 2565

	/* begin block 3 */
		// Start line: 2575
	/* end block 3 */
	// End Line: 2576

	/* begin block 4 */
		// Start line: 2575
	/* end block 4 */
	// End Line: 2576

	/* begin block 5 */
		// Start line: 2576
	/* end block 5 */
	// End Line: 2577

	/* begin block 6 */
		// Start line: 2576
	/* end block 6 */
	// End Line: 2577

void SetContext__Fi(int contextHandle)

{
  gCurrContext = gContextMan.contexts + contextHandle;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ BWorld_OpenContext__Fii(int contextType /*$a2*/, int client /*$a1*/)
 // line 1189, offset 0x8007e4ac
	/* begin block 1 */
		// Start line: 1190
		// Start offset: 0x8007E4AC
		// Variables:
	// 		struct BW_tContext *context; // $a0
	/* end block 1 */
	// End offset: 0x8007E544
	// End Line: 1222

	/* begin block 2 */
		// Start line: 2587
	/* end block 2 */
	// End Line: 2588

	/* begin block 3 */
		// Start line: 2597
	/* end block 3 */
	// End Line: 2598

	/* begin block 4 */
		// Start line: 2597
	/* end block 4 */
	// End Line: 2598

int BWorld_OpenContext__Fii(int contextType,int client)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  BW_tContext *pBVar4;
  
  iVar2 = gContextMan.count;
  pBVar4 = gContextMan.contexts + gContextMan.count;
  gContextMan.contexts[gContextMan.count].slicePos.slice = 0;
  pBVar4->client = client;
  if (contextType == 0) {
    puVar3 = &LAB_000cea40;
    gContextMan.contexts[iVar2].polyFarZClipSq = 640000;
    gContextMan.contexts[iVar2].lineFarZClipSq = 0x4c90;
    puVar1 = &DAT_0000e100;
  }
  else {
    if (contextType != 1) goto LAB_8007e54c;
    puVar3 = &DAT_00052210;
    gContextMan.contexts[iVar2].polyFarZClipSq = 0x44944;
    gContextMan.contexts[iVar2].lineFarZClipSq = 10000;
    puVar1 = &DAT_00008d04;
  }
  *(undefined **)&gContextMan.contexts[iVar2].chunkFarZClipSq = puVar3;
  *(undefined **)&gContextMan.contexts[iVar2].lowDetailDistSq = puVar1;
LAB_8007e54c:
  iVar2 = gContextMan.count;
  gContextMan.count = gContextMan.count + 1;
  return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorld_Restart__Fv()
 // line 1232, offset 0x8007e564
	/* begin block 1 */
		// Start line: 1233
		// Start offset: 0x8007E564

		/* begin block 1.1 */
			// Start line: 1233
			// Start offset: 0x8007E564
		/* end block 1.1 */
		// End offset: 0x8007E564
		// End Line: 1233
	/* end block 1 */
	// End offset: 0x8007E564
	// End Line: 1233

	/* begin block 2 */
		// Start line: 2679
	/* end block 2 */
	// End Line: 2680

	/* begin block 3 */
		// Start line: 2690
	/* end block 3 */
	// End Line: 2691

	/* begin block 4 */
		// Start line: 2690
	/* end block 4 */
	// End Line: 2691

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BWorld_Restart__Fv(void)

{
  Object_KillStatus__Fv();
  Object_InitStatus__Fv();
  SetContext__Fi(0);
  BWorld_InitSpikeBelt__Fv();
  Anim_Restart__Fv();
  SceneLoaded = 0;
  Object_ClearCustomObjects__Fv();
  Draw_gDoVSync = 0;
  BWorldSm_Restart__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorld_StartLoop__Fv()
 // line 1261, offset 0x8007e5c0
	/* begin block 1 */
		// Start line: 1262
		// Start offset: 0x8007E5C0
	/* end block 1 */
	// End offset: 0x8007E5C0
	// End Line: 1262

	/* begin block 2 */
		// Start line: 2737
	/* end block 2 */
	// End Line: 2738

	/* begin block 3 */
		// Start line: 2748
	/* end block 3 */
	// End Line: 2749

	/* begin block 4 */
		// Start line: 2748
	/* end block 4 */
	// End Line: 2749

	/* begin block 5 */
		// Start line: 2757
	/* end block 5 */
	// End Line: 2758

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BWorld_StartLoop__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorld_Init__Fv()
 // line 1280, offset 0x8007e5c8
	/* begin block 1 */
		// Start line: 1281
		// Start offset: 0x8007E5C8
		// Variables:
	// 		int AudioScene; // $a0
	/* end block 1 */
	// End offset: 0x8007E894
	// End Line: 1376

	/* begin block 2 */
		// Start line: 2776
	/* end block 2 */
	// End Line: 2777

	/* begin block 3 */
		// Start line: 2786
	/* end block 3 */
	// End Line: 2787

	/* begin block 4 */
		// Start line: 2786
	/* end block 4 */
	// End Line: 2787

	/* begin block 5 */
		// Start line: 2788
	/* end block 5 */
	// End Line: 2789

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BWorld_Init__Fv(void)

{
  bool bVar1;
  int iVar2;
  char *ext;
  uint contextType;
  
  if (Replay_ReplayMode == 0) {
    if ((GameSetup_gData.commMode == 1) || (GameSetup_gData.raceType == 2)) {
      GameSetup_gData.SceneNumber = 99;
      GameSetup_gData.SceneStartLap = 99;
      GameSetup_gData.SceneEndLap = 99;
    }
    else {
      GameSetup_gData.SceneNumber = rand();
      if (GameSetup_gData.SceneNumber < 0) {
        GameSetup_gData.SceneNumber = GameSetup_gData.SceneNumber + 0x3fff;
      }
      GameSetup_gData.SceneNumber = GameSetup_gData.SceneNumber >> 0xe;
      GameSetup_gData.SceneStartLap = rand();
      if (GameSetup_gData.numLaps < 2) {
        if (GameSetup_gData.SceneStartLap < 0) {
          GameSetup_gData.SceneStartLap = GameSetup_gData.SceneStartLap + 0x3fff;
        }
        GameSetup_gData.SceneStartLap = GameSetup_gData.SceneStartLap >> 0xe;
      }
      else {
        GameSetup_gData.SceneStartLap = GameSetup_gData.SceneStartLap * GameSetup_gData.numLaps;
        if (GameSetup_gData.SceneStartLap < 0) {
          GameSetup_gData.SceneStartLap = GameSetup_gData.SceneStartLap + 0x7fff;
        }
        GameSetup_gData.SceneStartLap = GameSetup_gData.SceneStartLap >> 0xf;
      }
      iVar2 = rand();
      iVar2 = iVar2 * GameSetup_gData.numLaps;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7fff;
      }
      GameSetup_gData.SceneEndLap = GameSetup_gData.SceneStartLap + (iVar2 >> 0xf);
      if (GameSetup_gData.SceneStartLap == GameSetup_gData.SceneEndLap) {
        GameSetup_gData.SceneEndLap = GameSetup_gData.SceneStartLap + 1;
      }
      if (GameSetup_gData.Weather == 0) {
        if (GameSetup_gData.trafficDensity != 0) {
          GameSetup_gData.SceneNumber = GameSetup_gData.SceneNumber + 0x14;
        }
      }
      else {
        GameSetup_gData.SceneNumber = GameSetup_gData.SceneNumber + 10;
        GameSetup_gData.SceneEndLap = GameSetup_gData.SceneEndLap + 5;
      }
      SceneLoaded = 0;
    }
  }
  Object_InitStatus__Fv();
  Track_SetTrackNumber__Fi(GameSetup_gData.track);
  BWorld_InitContexts__Fv();
  bVar1 = GameSetup_gData.commMode == 1;
  if (bVar1) {
    BWorld_OpenContext__Fii(1,0);
  }
  contextType = (uint)bVar1;
  BWorld_OpenContext__Fii(contextType,contextType);
  SetContext__Fi(0);
  if (GameSetup_gData.Time == 0) {
    if (GameSetup_gData.Weather == 0) {
      ext = &DAT_8013c784;
    }
    else {
      ext = s_W_grp_8013c77c;
    }
  }
  else {
    if (GameSetup_gData.Weather == 0) {
      ext = s_N_grp_8013c774;
    }
    else {
      ext = s_S_grp_8013c76c;
    }
  }
  ext = Track_MakeTrackPathName__FPc(ext);
  Track_Init__FPc(ext);
  Object_InitCustomObjects__Fv();
  Object_InitIMassObjectInfo__Fv();
  if (gPersistObjDef != (Group *)0x0) {
    Scene_Init__Fi(gPersistObjDef->m_num_elements);
  }
  Loading_UpdateLoadingScreen__Fi(5);
  ext = Track_MakeTrackDataPathName__FPc(&DAT_8013c78c);
  Anim_InitSystem__FPc(ext);
  if (((GameSetup_gData.commMode != 1) && (GameSetup_gData.raceType != 1)) &&
     (GameSetup_gData.raceType != 5)) {
    Scene_LoadSceneFile__Fi(GameSetup_gData.SceneNumber);
  }
  contextType = (uint)(GameSetup_gData.Time != 0);
  if (GameSetup_gData.Weather != 0) {
    contextType = contextType + 2;
  }
  AudList_LoadAudioFile__Fi(contextType);
  BWorld_InitSpikeBelt__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorld_DeInit__Fv()
 // line 1389, offset 0x8007e8b4
	/* begin block 1 */
		// Start line: 1390
		// Start offset: 0x8007E8B4
	/* end block 1 */
	// End offset: 0x8007E8B4
	// End Line: 1390

	/* begin block 2 */
		// Start line: 2998
	/* end block 2 */
	// End Line: 2999

	/* begin block 3 */
		// Start line: 3008
	/* end block 3 */
	// End Line: 3009

	/* begin block 4 */
		// Start line: 3008
	/* end block 4 */
	// End Line: 3009

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BWorld_DeInit__Fv(void)

{
  Object_KillStatus__Fv();
  Track_DeInit__Fv();
  BWorld_DeInitContexts__Fv();
  Object_DeInitIMassObjectInfo__Fv();
  Scene_DeInit__Fv();
  Object_DeInitCustomObjects__Fv();
  SceneLoaded = 0;
  AudList_PurgeAudio__Fv();
  Anim_DeInitSystem__Fv();
  return;
}





