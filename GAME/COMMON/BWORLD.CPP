#include "NFS4.H"
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

void UpdateContext__FP13DRender_tViewi(DRender_tView *Vi,int contextHandle)
{
  DRender_tCalcView *pt;
  
  SetContext__Fi(contextHandle);
  pt = &Vi->cview;
  if (contextHandle == 0) {
    iGp00000258 = (int)*(short *)(iGp00000244 + 4);
  }
  BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
            ((coorddef *)pt,(BWorldSm_Pos *)(iGp00000244 + 4),1);
  if (*(char *)(iGp00000244 + 0x5e) != '\0') {
    FindAbsClosestSliceCrude__FP8coorddefP12BWorldSm_Pos
              ((coorddef *)pt,(BWorldSm_Pos *)(iGp00000244 + 4));
    BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
              ((coorddef *)pt,(BWorldSm_Pos *)(iGp00000244 + 4),1);
  }
  if (*(uint *)(iGp00000244 + 0x88) != (uint)*(byte *)(iGp00000244 + 0x79)) {
    *(uint *)(iGp00000244 + 0x88) = (uint)*(byte *)(iGp00000244 + 0x79);
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

void BWorld_BuildGlareEffects__FP13DRender_tViewP11Draw_DCacheP5Group( (DRender_tView *Vi,Draw_DCache *sd,Group *group)
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
      local_30.x = 0;
      local_30.y = 0xa0000;
      local_30.z = 0;
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

void BWorld_InitSpikeBelt__Fv(void)
{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x7fffffff;
  iGp00000264 = -1;
  iVar3 = 0;
  pbVar2 = _Chunk_lightTable;
  while (iVar3 < 0) {
    iVar1 = (0x80 - (uint)*pbVar2) * (0x80 - (uint)*pbVar2) +
            (0x80 - (uint)pbVar2[1]) * (0x80 - (uint)pbVar2[1]) +
            (0x80 - (uint)pbVar2[2]) * (0x80 - (uint)pbVar2[2]);
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
      iGp00000264 = iVar3;
    }
    pbVar2 = pbVar2 + 4;
    iVar3 = iVar3 + 1;
  }
  uGp00000248 = 0;
  uGp0000024c = 0;
  uGp00000250 = 0;
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

void BWorld_SetSpikeBelt__Fiii(int slice,int x,int width)
{
  uGp00000248 = 1;
  iGp0000024c = slice;
  uGp00000250 = (uint)*(byte *)(slice * 0x20 + 0x1c);
  iGp00000254 = x;
  iGp00000260 = width;
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

int BWorld_GetSpikeBelt__FPiN20(int *slice,int *x,int *width)
{
  if (iGp00000248 != 1) {
    *width = 0;
    *x = 0;
    *slice = 0;
    return 0;
  }
  *slice = iGp0000024c;
  *x = iGp00000254;
  *width = iGp00000260;
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

void SetupBuildMatrices__FP13DRender_tViewP11Draw_DCache(DRender_tView *Vi,Draw_DCache *sd)
{
  int iVar1;
  int contextHandle;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  matrixtdef mStack96;
  matrixtdef mStack56;
  
  if ((Vi->id == 0) || (Vi->id == 0)) {
    contextHandle = Vi->player;
  }
  else {
    contextHandle = 1;
  }
  UpdateContext__FP13DRender_tViewi(Vi,contextHandle);
  gWorldMat = (Vi->cview).mrotationInv.m[0];
  DAT_8010ee48 = (Vi->cview).mrotationInv.m[2];
  DAT_8010ee44 = -(Vi->cview).mrotationInv.m[1];
  DAT_8010ee4c = (Vi->cview).mrotationInv.m[3];
  DAT_8010ee54 = (Vi->cview).mrotationInv.m[5];
  DAT_8010ee50 = -(Vi->cview).mrotationInv.m[4];
  DAT_8010ee58 = (Vi->cview).mrotationInv.m[6];
  DAT_8010ee60 = (Vi->cview).mrotationInv.m[8];
  DAT_8010ee5c = -(Vi->cview).mrotationInv.m[7];
  if (false) {
    transpose((&DAT_8010f2b0)[Vi->player * 0x44] + 0xf0,&gNightMat);
    DAT_8010ee68 = -DAT_8010ee68;
    DAT_8010ee80 = -DAT_8010ee80;
    DAT_8010ee74 = -DAT_8010ee74;
    DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX((matrixtdef *)&gNightMat,&sd->matNight);
    iGp00000268 = 0;
    contextHandle = 0xb40000;
    if (DAT_801131f8 != 1) {
      iVar4 = -1;
      piVar5 = &DAT_8010fab0;
      while (iVar4 < Cars_gNumCopCars) {
        iVar3 = _Cars_gList;
        if (-1 < iVar4) {
          iVar3 = *piVar5;
        }
        if (((*(char *)(iVar3 + 0x91) != '\0') && ((*(uint *)(iVar3 + 0x570) & 2) != 0)) &&
           ((*(ushort *)(iVar3 + 0x87e) & 4) == 0)) {
          iVar2 = *(int *)(iVar3 + 0xa0) - (Vi->cview).translation.x;
          iVar1 = *(int *)(iVar3 + 0xa8) - (Vi->cview).translation.z;
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
            iGp00000268 = iVar3;
          }
        }
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + 1;
      }
      if (iGp00000268 != 0) {
        Night_SetCopColor__FP18GameSetup_tCarData(*(GameSetup_tCarData **)(iGp00000268 + 0x288));
        iGp00000210 = iGp00000210 + 0x40;
        xformy(&mStack56);
        transpose(iGp00000268 + 0xf0,&mStack96);
        Math_fasttransmult__FP10matrixtdefN20(&mStack96,&mStack56,(matrixtdef *)&gCopMat);
        DAT_8010ee8c = -DAT_8010ee8c;
        DAT_8010eea4 = -DAT_8010eea4;
        DAT_8010ee98 = -DAT_8010ee98;
        DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX((matrixtdef *)&gCopMat,&sd->matCop);
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

int BWorld_CheckChunkVisible__FP12BWorldSm_PosT0( (BWorldSm_Pos *slicePosSource,BWorldSm_Pos *slicePosTest)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  
  if (slicePosSource == slicePosTest) {
    return 1;
  }
  iVar4 = (uint)*(byte *)(uint)slicePosSource->chunk - 1;
  uVar3 = 0;
  if (iVar4 != -1) {
    psVar5 = (short *)(iVar4 * 2 + (int)(byte *)(uint)slicePosSource->chunk * 0x40);
    do {
      uVar2 = SEXT24(*psVar5);
      if ((uVar2 & 0x3ff) == (uint)*(byte *)(((int)slicePosTest->slice + 2) * 0x20 + 0x1c)) {
        uVar1 = uVar3 ^ 2;
        if ((uVar2 & 0x800) != 0) goto LAB_8007dd44;
        uVar3 = uVar3 + 1;
        uVar1 = uVar3 ^ 2;
        if (uVar3 != 1) goto LAB_8007dd44;
      }
      if ((uVar2 & 0x3ff) == (uint)*(byte *)(((int)slicePosTest->slice + -2) * 0x20 + 0x1c)) {
        uVar1 = uVar3 ^ 2;
        if ((uVar2 & 0x800) != 0) goto LAB_8007dd44;
        uVar3 = uVar3 + 1;
        uVar1 = uVar3 ^ 2;
        if (uVar3 != 1) goto LAB_8007dd44;
      }
      iVar4 = iVar4 + -1;
      psVar5 = psVar5 + -1;
    } while (iVar4 != -1);
  }
  uVar1 = uVar3 ^ 2;
LAB_8007dd44:
  return (uint)(uVar1 == 0);


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

int GetRezIndex__Fi(int dist)
{
  return ((uint)(*(int *)(iGp00000244 + 0x94) < dist) ^ 1) << 2;


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

int SetupChunkBuildList__FP13DRender_tView(DRender_tView *Vi)
{
  int dist;
  coorddef *c1;
  undefined2 *puVar1;
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
  
  puVar1 = &BWorld_gChunkBuildList;
  iVar5 = 0;
  iVar4 = 0;
  puVar3 = (ushort *)((int)*(byte **)(iGp00000244 + 0x88) * 0x40);
  local_30 = (uint)**(byte **)(iGp00000244 + 0x88);
  while (iVar4 < (int)local_30) {
    uVar2 = (uint)*puVar3 & 0x3ff;
    c1 = (coorddef *)(_Chunk_chunkCenters + uVar2 * 0xc);
    dist = xzsquaredist32__FP8coorddefT0(c1,(coorddef *)&Vi->cview);
    if ((dist <= *(int *)(iGp00000244 + 0x8c)) && ((*puVar3 & 0x800) == 0)) {
      local_50.x = c1->x - (Vi->cview).translation.x;
      local_50.y = *(int *)(uVar2 * 0x100 + 4) - (Vi->cview).translation.y;
      local_50.z = c1->z - (Vi->cview).translation.z;
      TrsProj_SetPsxTransZero__Fv();
      TrsProj_TransPt__FP8coorddefT0(&local_50,&cStack64);
      TrsProj_SetPsxTrans__FP8coorddef(&cStack64);
      TrsProj_TransPtN16__FP10RelCoord16P8coorddefi((RelCoord16 *)(uVar2 * 0x70),&local_80,4);
      if (((local_80.x <= local_80.z) ||
          (((local_74 <= local_6c || (local_68 <= local_60)) || (local_5c <= local_54)))) &&
         (((((-local_80.x <= local_80.z || (-local_74 <= local_6c)) || (-local_68 <= local_60)) ||
           (-local_5c <= local_54)) &&
          (((-1 < local_80.z || (-1 < local_6c)) || ((-1 < local_60 || (-1 < local_54)))))))) {
        *(undefined *)((int)puVar1 + 3) = 3;
        if (dist < *(int *)(iGp00000244 + 0x98)) {
          *(undefined *)((int)puVar1 + 3) = 7;
        }
        if ((*puVar3 & 0x4000) != 0) {
          *(byte *)((int)puVar1 + 3) = *(byte *)((int)puVar1 + 3) & 0xfd;
        }
        if ((*puVar3 & 0x2000) != 0) {
          *(byte *)((int)puVar1 + 3) = *(byte *)((int)puVar1 + 3) & 0xfe;
        }
        dist = GetRezIndex__Fi(dist);
        *(char *)(puVar1 + 1) = (char)dist;
        *puVar1 = (short)uVar2;
        puVar1 = puVar1 + 2;
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
// unsigned int /*$ra*/ BWorld_IsSliceInBuildList__Fi(int slice /*$a0*/)
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

uint BWorld_IsSliceInBuildList__Fi(int slice)
{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  if (slice < 0) {
    slice = slice + 7;
  }
  if (0 < BWorld_gChunkCount) {
    psVar1 = &BWorld_gChunkBuildList;
    do {
      iVar2 = iVar2 + 1;
      if ((int)*psVar1 == slice >> 3) {
        return 1;
      }
      psVar1 = psVar1 + 2;
    } while (iVar2 < BWorld_gChunkCount);
  }
  return 0;


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

void BWorld_OnyxBuildFacets__FP13DRender_tView(DRender_tView *Vi)
{
  uint uVar1;
  Group *group;
  int iVar2;
  short *psVar3;
  
  Chunk_UpdateSys__FP13DRender_tView(Vi);
  _gVi2 = Vi;
  gWSavePtr = SetSp(0x1f8003fc);
  stackSpeedUpEnbabledFlag = 1;
  SetupBuildMatrices__FP13DRender_tViewP11Draw_DCache(_gVi2,(Draw_DCache *)&DAT_1f800000);
  DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX((matrixtdef *)&gWorldMat,(MATRIX *)&DAT_1f800014);
  BWorld_gChunkCount = SetupChunkBuildList__FP13DRender_tView(_gVi2);
  gWSavePtr = SetSp(gWSavePtr);
  stackSpeedUpEnbabledFlag = 0;
  _DAT_1f8000dc = (undefined2)DAT_80123294;
  _DAT_1f8000de = 0;
  DAT_1f80010e = 0;
  if (DAT_80113240 != 0) {
    _DAT_1f800108 = (undefined2)Night_gZNear;
    DAT_1f80010a = (undefined)Night_gXDistShift;
    DAT_1f80010b = (undefined)Night_gZDistShift;
    DAT_1f80010c = Night_gDrawLightning;
    DAT_1f80010d = 0;
  }
  gWSavePtr = SetSp(0x1f8003fc);
  stackSpeedUpEnbabledFlag = 1;
  DrawW_DoTrough__FP13DRender_tViewP11tBuildEntry(Vi,(tBuildEntry *)&BWorld_gChunkBuildList);
  gWSavePtr = SetSp(gWSavePtr);
  stackSpeedUpEnbabledFlag = 0;
  if ((false) || (DAT_80113234 != 1)) {
    gWSavePtr = SetSp(0x1f8003fc);
    stackSpeedUpEnbabledFlag = 1;
    DrawW_DoLines__FP13DRender_tViewP11tBuildEntryP11Draw_DCache
              (Vi,(tBuildEntry *)&BWorld_gChunkBuildList,(Draw_DCache *)&DAT_1f800000);
    gWSavePtr = SetSp(gWSavePtr);
  }
  stackSpeedUpEnbabledFlag = 0;
  if ((false) && (iVar2 = 0, 0 < BWorld_gChunkCount)) {
    psVar3 = &BWorld_gChunkBuildList;
    do {
      if (*psVar3 == 0) {
        DrawW_BuildSpikeBelt__FP13DRender_tViewiP11Draw_DCache(Vi,0,(Draw_DCache *)&DAT_1f800000);
      }
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 2;
    } while (iVar2 < BWorld_gChunkCount);
  }
  iVar2 = 0;
  if (DAT_801131f8 == 0) {
    psVar3 = &BWorld_gChunkBuildList;
    while (iVar2 < BWorld_gChunkCount) {
      group = *(Group **)((int)*psVar3 * 0x70 + 0x54);
      if (group != (Group *)0x0) {
        BWorld_BuildGlareEffects__FP13DRender_tViewP11Draw_DCacheP5Group
                  (Vi,(Draw_DCache *)&DAT_1f800000,group);
      }
      psVar3 = psVar3 + 2;
      iVar2 = iVar2 + 1;
    }
  }
  if ((false) && (uVar1 = BWorld_IsSliceInBuildList__Fi(Object_customSliceNum), uVar1 != 0)) {
    BWorld_BuildGlareEffects__FP13DRender_tViewP11Draw_DCacheP5Group
              (Vi,(Draw_DCache *)&DAT_1f800000,(Group *)0x0);
  }
  DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX((matrixtdef *)&gWorldMat,(MATRIX *)&DAT_1f800014);
  DrawW_DoObjects__FP13DRender_tViewP11tBuildEntry(Vi,(tBuildEntry *)&BWorld_gChunkBuildList);
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

char * BWAllocMem__Fl(long size)
{
  char *pcVar1;
  
  DAT_8013c760 = DAT_8013c760 + size;
  pcVar1 = Platform_GetDCTBuffer__FiPc(size,"bworld");
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

void BWorld_InitContexts__Fv(void)
{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 1;
  puVar1 = &DAT_8010ef48;
  gContextMan = 1;
  DAT_8010eeb0 = 0;
  do {
    puVar1[2] = 0xffffffff;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -0x27;
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

void SetContext__Fi(int contextHandle)
{
  _gCurrContext = &DAT_8010eeb4 + contextHandle * 0x27;
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

int BWorld_OpenContext__Fii(int contextType,int client)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_8010eeb0;
  iVar3 = DAT_8010eeb0 * 0x27;
  (&DAT_8010eeb8)[DAT_8010eeb0 * 0x4e] = 0;
  (&DAT_8010eeb4)[iVar3] = client;
  if (contextType == 0) {
    uVar4 = 0xcea40;
    (&DAT_8010ef44)[iVar1 * 0x27] = 640000;
    (&DAT_8010ef4c)[iVar1 * 0x27] = 0x4c90;
    uVar2 = 0xe100;
  }
  else {
    if (contextType != 1) goto LAB_8007e54c;
    uVar4 = 0x52210;
    (&DAT_8010ef44)[iVar1 * 0x27] = 0x44944;
    (&DAT_8010ef4c)[iVar1 * 0x27] = 10000;
    uVar2 = 0x8d04;
  }
  (&DAT_8010ef40)[iVar1 * 0x27] = uVar4;
  (&DAT_8010ef48)[iVar1 * 0x27] = uVar2;
LAB_8007e54c:
  iVar3 = DAT_8010eeb0;
  DAT_8010eeb0 = DAT_8010eeb0 + 1;
  return iVar3;


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

void BWorld_Init__Fv(void)
{
  bool bVar1;
  int iVar2;
  char *ext;
  uint contextType;
  
  if (Replay_ReplayMode == 0) {
    if ((DAT_801131f8 == 1) || (GameSetup_gData == 2)) {
      DAT_801132c0 = 99;
      DAT_801132c4 = 99;
      DAT_801132c8 = 99;
    }
    else {
      DAT_801132c0 = rand();
      if (DAT_801132c0 < 0) {
        DAT_801132c0 = DAT_801132c0 + 0x3fff;
      }
      DAT_801132c0 = DAT_801132c0 >> 0xe;
      DAT_801132c4 = rand();
      if (DAT_801131f0 < 2) {
        if (DAT_801132c4 < 0) {
          DAT_801132c4 = DAT_801132c4 + 0x3fff;
        }
        DAT_801132c4 = DAT_801132c4 >> 0xe;
      }
      else {
        DAT_801132c4 = DAT_801132c4 * DAT_801131f0;
        if (DAT_801132c4 < 0) {
          DAT_801132c4 = DAT_801132c4 + 0x7fff;
        }
        DAT_801132c4 = DAT_801132c4 >> 0xf;
      }
      iVar2 = rand();
      iVar2 = iVar2 * DAT_801131f0;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x7fff;
      }
      DAT_801132c8 = DAT_801132c4 + (iVar2 >> 0xf);
      if (DAT_801132c4 == DAT_801132c8) {
        DAT_801132c8 = DAT_801132c4 + 1;
      }
      if (DAT_80113234 == 0) {
        if (DAT_80113204 != 0) {
          DAT_801132c0 = DAT_801132c0 + 0x14;
        }
      }
      else {
        DAT_801132c0 = DAT_801132c0 + 10;
        DAT_801132c8 = DAT_801132c8 + 5;
      }
      SceneLoaded = 0;
    }
  }
  Object_InitStatus__Fv();
  Track_SetTrackNumber__Fi(0);
  BWorld_InitContexts__Fv();
  bVar1 = DAT_801131f8 == 1;
  if (bVar1) {
    BWorld_OpenContext__Fii(1,0);
  }
  contextType = (uint)bVar1;
  BWorld_OpenContext__Fii(contextType,contextType);
  SetContext__Fi(0);
  if (DAT_80113240 == 0) {
    if (DAT_80113234 == 0) {
      ext = ".grp";
    }
    else {
      ext = "W.grp";
    }
  }
  else {
    if (DAT_80113234 == 0) {
      ext = "N.grp";
    }
    else {
      ext = "S.grp";
    }
  }
  ext = Track_MakeTrackPathName__FPc(ext);
  Track_Init__FPc(ext);
  Object_InitCustomObjects__Fv();
  Object_InitIMassObjectInfo__Fv();
  if (_gPersistObjDef != (int *)0x0) {
    Scene_Init__Fi(*_gPersistObjDef);
  }
  Loading_UpdateLoadingScreen__Fi(5);
  ext = Track_MakeTrackDataPathName__FPc("");
  Anim_InitSystem__FPc(ext);
  if (((DAT_801131f8 != 1) && (GameSetup_gData != 1)) && (GameSetup_gData != 5)) {
    Scene_LoadSceneFile__Fi(DAT_801132c0);
  }
  contextType = (uint)(DAT_80113240 != 0);
  if (DAT_80113234 != 0) {
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

void BWorld_DeInit__Fv(void)
{
  Object_KillStatus__Fv();
  Track_DeInit__Fv();
  BWorld_DeInitContexts__Fv();
  Object_DeInitIMassObjectInfo__Fv();
  Scene_DeInit__Fv();
  Object_DeInitCustomObjects__Fv();
  uGp0000020c = 0;
  AudList_PurgeAudio__Fv();
  Anim_DeInitSystem__Fv();
  return;


}





