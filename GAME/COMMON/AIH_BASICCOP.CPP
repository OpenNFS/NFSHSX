#include "NFS4.H"
#include "AIH_BASICCOP.H"

// decompiled code
// original method signature: 
// struct AIHigh_BasicCop * /*$ra*/ __15AIHigh_BasicCopP8Car_tObji(struct AIHigh_BasicCop *this /*$s2*/, struct Car_tObj *carObj /*$s0*/, int copIndex /*$s1*/)
 // line 18, offset 0x8005c164
	/* begin block 1 */
		// Start line: 19
		// Start offset: 0x8005C164
	/* end block 1 */
	// End offset: 0x8005C1B8
	// End Line: 30

AIHigh_BasicCop *
__15AIHigh_BasicCopP8Car_tObji(AIHigh_BasicCop *this,Car_tObj *carObj,int copIndex)

{
  __11AIHigh_BaseP8Car_tObj((AIHigh_Base *)this,carObj);
  (this->AIHigh_Base)._vf[0].value = 0x80054e9c;
  (this->AIHigh_Base)._vf[2].value = copIndex;
  if ((carObj->carFlags & 0x40U) == 0) {
    (this->AIHigh_Base)._vf[1].value = 0;
  }
  else {
    (this->AIHigh_Base)._vf[1].value = 1;
  }
  this->type_ = COP_REGULAR;
  this->copIndex_ = 0;
  (this->blockade_).flags = -1;
  *(undefined2 *)&(this->blockade_).releaseTime = 0;
  (this->blockade_).initialPlayerDistanceMetersInt = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckSpikeBelt__15AIHigh_BasicCop(struct AIHigh_BasicCop *this /*$a0*/)
 // line 41, offset 0x8005c1ec
	/* begin block 1 */
		// Start line: 42
		// Start offset: 0x8005C1EC

		/* begin block 1.1 */
			// Start line: 42
			// Start offset: 0x8005C1EC

			/* begin block 1.1.1 */
				// Start line: 42
				// Start offset: 0x8005C1EC

				/* begin block 1.1.1.1 */
					// Start line: 42
					// Start offset: 0x8005C1EC
				/* end block 1.1.1.1 */
				// End offset: 0x8005C1EC
				// End Line: 42
			/* end block 1.1.1 */
			// End offset: 0x8005C1EC
			// End Line: 42

			/* begin block 1.1.2 */
				// Start line: 44
				// Start offset: 0x8005C210
				// Variables:
			// 		int timeNow; // $v0

				/* begin block 1.1.2.1 */
					// Start line: 44
					// Start offset: 0x8005C210
				/* end block 1.1.2.1 */
				// End offset: 0x8005C210
				// End Line: 44
			/* end block 1.1.2 */
			// End offset: 0x8005C210
			// End Line: 44

			/* begin block 1.1.3 */
				// Start line: 45
				// Start offset: 0x8005C234

				/* begin block 1.1.3.1 */
					// Start line: 45
					// Start offset: 0x8005C234

					/* begin block 1.1.3.1.1 */
						// Start line: 45
						// Start offset: 0x8005C234
					/* end block 1.1.3.1.1 */
					// End offset: 0x8005C234
					// End Line: 45
				/* end block 1.1.3.1 */
				// End offset: 0x8005C234
				// End Line: 45

				/* begin block 1.1.3.2 */
					// Start line: 48
					// Start offset: 0x8005C234

					/* begin block 1.1.3.2.1 */
						// Start line: 52
						// Start offset: 0x8005C248

						/* begin block 1.1.3.2.1.1 */
							// Start line: 54
							// Start offset: 0x8005C248

							/* begin block 1.1.3.2.1.1.1 */
								// Start line: 54
								// Start offset: 0x8005C248
							/* end block 1.1.3.2.1.1.1 */
							// End offset: 0x8005C248
							// End Line: 54
						/* end block 1.1.3.2.1.1 */
						// End offset: 0x8005C248
						// End Line: 54
					/* end block 1.1.3.2.1 */
					// End offset: 0x8005C248
					// End Line: 54

					/* begin block 1.1.3.2.2 */
						// Start line: 58
						// Start offset: 0x8005C258

						/* begin block 1.1.3.2.2.1 */
							// Start line: 60
							// Start offset: 0x8005C258
							// Variables:
						// 		int timeNow; // $v0

							/* begin block 1.1.3.2.2.1.1 */
								// Start line: 60
								// Start offset: 0x8005C258
							/* end block 1.1.3.2.2.1.1 */
							// End offset: 0x8005C264
							// End Line: 60
						/* end block 1.1.3.2.2.1 */
						// End offset: 0x8005C264
						// End Line: 60
					/* end block 1.1.3.2.2 */
					// End offset: 0x8005C264
					// End Line: 60
				/* end block 1.1.3.2 */
				// End offset: 0x8005C264
				// End Line: 60
			/* end block 1.1.3 */
			// End offset: 0x8005C264
			// End Line: 60
		/* end block 1.1 */
		// End offset: 0x8005C264
		// End Line: 60

		/* begin block 1.2 */
			// Start line: 63
			// Start offset: 0x8005C264

			/* begin block 1.2.1 */
				// Start line: 64
				// Start offset: 0x8005C278
			/* end block 1.2.1 */
			// End offset: 0x8005C2A0
			// End Line: 74
		/* end block 1.2 */
		// End offset: 0x8005C2A0
		// End Line: 74
	/* end block 1 */
	// End offset: 0x8005C2A0
	// End Line: 74

void CheckSpikeBelt__15AIHigh_BasicCop(AIHigh_BasicCop *this)

{
  bool bVar1;
  Car_tObj *pCVar2;
  
  bVar1 = false;
  if (AICop_spikeBelt.active_ != 0) {
    bVar1 = 0x13f < simGlobal.gameTicks - AICop_spikeBelt.freshenTime_;
  }
  if (bVar1) {
    pCVar2 = AILife_IsSliceInAnyVisibleArea__Fi(AICop_spikeBelt.slice_);
    if (pCVar2 == (Car_tObj *)0x0) {
      BWorld_InitSpikeBelt__Fv();
      AICop_spikeBelt.active_ = 0;
    }
    else {
      AICop_spikeBelt.freshenTime_ = simGlobal.gameTicks;
    }
  }
  if ((AICop_gRoadBlockState == kAICop_RoadBlockState_PerpPassed) &&
     (pCVar2 = AILife_IsSliceInAnyVisibleArea__Fi(Object_customSliceNum), pCVar2 == (Car_tObj *)0x0)
     ) {
    Object_ClearCustomObjects__Fv();
    AICop_gRoadBlockState = kAICop_RoadBlockState_None;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ShouldIPerformCutOffBlock__15AIHigh_BasicCopiP8Car_tObj(struct AIHigh_BasicCop *this /*$s1*/, int chancePerSecond /*$a1*/, struct Car_tObj *target /*$s0*/)
 // line 83, offset 0x8005c2b4
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x8005C2B4
		// Variables:
	// 		int chanceForElapsedTime; // $v1
	// 		int chanceOutOf1000; // $a0
	// 		int random1000; // $v0

		/* begin block 1.1 */
			// Start line: 87
			// Start offset: 0x8005C308

			/* begin block 1.1.1 */
				// Start line: 97
				// Start offset: 0x8005C368
				// Variables:
			// 		int relLatPosition; // $v0
			// 		int absRelLatPosition; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 98
					// Start offset: 0x8005C368

					/* begin block 1.1.1.1.1 */
						// Start line: 101
						// Start offset: 0x8005C3B0
						// Variables:
					// 		int metersBetween; // $a0
					// 		int carLength; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005C3FC
					// End Line: 109
				/* end block 1.1.1.1 */
				// End offset: 0x8005C3FC
				// End Line: 109
			/* end block 1.1.1 */
			// End offset: 0x8005C3FC
			// End Line: 109
		/* end block 1.1 */
		// End offset: 0x8005C3FC
		// End Line: 109
	/* end block 1 */
	// End offset: 0x8005C400
	// End Line: 114

int ShouldIPerformCutOffBlock__15AIHigh_BasicCopiP8Car_tObj
              (AIHigh_BasicCop *this,int chancePerSecond,Car_tObj *target)

{
  int iVar1;
  Car_tObj *carObj;
  
  if (chancePerSecond < 0) {
    chancePerSecond = chancePerSecond + 0x1f;
  }
  iVar1 = (chancePerSecond >> 5) * AI_elapsedTime * 1000;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xffff;
  }
  randtemp = fastRandom * randSeed;
  fastRandom = randtemp & 0xffff;
  if (iVar1 >> 0x10 <= (int)((randtemp >> 8 & 0xffff) * 1000 >> 0x10)) {
    return 0;
  }
  carObj = (this->AIHigh_Base).carObj_;
  iVar1 = (carObj->speechInfo).playerCarIndex - (target->speechInfo).playerCarIndex;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if ((target->N).dimension.x + 0x10000 < iVar1) {
    if (0x3ffff < iVar1) {
      return 0;
    }
    iVar1 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj,target);
    iVar1 = iVar1 * (((this->AIHigh_Base).carObj_)->script).lastReactionIndex[3];
    if (((target->N).dimension.z * 2 + 0x20000 < iVar1) && (iVar1 < 0xc0000)) {
      return 1;
    }
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Blockade_AddRoadFlare__FP8coorddef(struct coorddef *pos /*$a0*/)
 // line 119, offset 0x8005c414
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x8005C414
		// Variables:
	// 		struct Trk_SFX *sfxInstance; // $v0

		/* begin block 1.1 */
			// Start line: 120
			// Start offset: 0x8005C414
			// Variables:
		// 		struct Group *this; // $a2

			/* begin block 1.1.1 */
				// Start line: 120
				// Start offset: 0x8005C414
			/* end block 1.1.1 */
			// End offset: 0x8005C414
			// End Line: 120
		/* end block 1.1 */
		// End offset: 0x8005C414
		// End Line: 120
	/* end block 1 */
	// End offset: 0x8005C414
	// End Line: 120

void Blockade_AddRoadFlare__FP8coorddef(coorddef *pos)

{
  Group *pGVar1;
  Group *pGVar2;
  int iVar3;
  
  pGVar1 = Object_customSFXInst;
  pGVar2 = Object_customSFXInst + Object_customSFXInst->m_num_elements * 4 + 1;
  pGVar2->m_num_elements = pos->x;
  pGVar2[1].m_num_elements = pos->y;
  iVar3 = pos->z;
  *(undefined2 *)&pGVar2[3].m_num_elements = 0x16;
  *(undefined2 *)((int)&pGVar2[3].m_num_elements + 2) = 0;
  pGVar2[2].m_num_elements = iVar3;
  pGVar1->m_num_elements = pGVar1->m_num_elements + 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Blockade_AddObject__FiP8coorddefi(int slice /*$s0*/, struct coorddef *pos /*$s2*/, int objectID /*$s1*/)
 // line 134, offset 0x8005c468
	/* begin block 1 */
		// Start line: 135
		// Start offset: 0x8005C468
		// Variables:
	// 		struct SceneElem theObj; // stack offset -256
	// 		struct BWorldSm_Pos slicePos; // stack offset -160
	// 		struct coorddef *rotx; // $s3
	// 		struct coorddef *roty; // $s2
	// 		struct coorddef *rotz; // $s1
	/* end block 1 */
	// End offset: 0x8005C468
	// End Line: 135

void Blockade_AddObject__FiP8coorddefi(int slice,coorddef *pos,int objectID)

{
  coorddef *pcVar1;
  uint uVar2;
  uint uVar3;
  SceneElem local_100;
  BWorldSm_Pos BStack160;
  
  local_100.type = 0;
  local_100.subType = 1;
  local_100.scalar1 = Object_GetObjDefID__Fi(objectID);
  local_100.scalar2 = &DAT_00023916;
  local_100.cp.x = pos->x;
  local_100.cp.y = pos->y;
  local_100.cp.z = pos->z;
  local_100.subTypeIndex = objectID;
  BWorldSm_SetSlice__FiP12BWorldSm_Pos(slice,&BStack160);
  BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi(pos,&BStack160,1);
  pcVar1 = BWorldSm_UNormal__FP12BWorldSm_Pos(&BStack160);
  local_100.orient.m[3] = pcVar1->x;
  local_100.orient.m[4] = pcVar1->y;
  local_100.orient.m[5] = pcVar1->z;
  pcVar1 = BWorldSm_UForward__FP12BWorldSm_Pos(&BStack160);
  local_100.orient.m[6] = pcVar1->x;
  local_100.orient.m[7] = pcVar1->y;
  local_100.orient.m[8] = pcVar1->z;
  uVar2 = fixedmult(local_100.orient.m[4],local_100.orient.m[8]);
  uVar3 = fixedmult(local_100.orient.m[5],local_100.orient.m[7]);
  local_100.orient.m[0] = uVar2 - uVar3;
  uVar2 = fixedmult(local_100.orient.m[5],local_100.orient.m[6]);
  uVar3 = fixedmult(local_100.orient.m[3],local_100.orient.m[8]);
  local_100.orient.m[1] = uVar2 - uVar3;
  uVar2 = fixedmult(local_100.orient.m[3],local_100.orient.m[7]);
  uVar3 = fixedmult(local_100.orient.m[4],local_100.orient.m[6]);
  local_100.orient.m[2] = uVar2 - uVar3;
  transpose((undefined4 *)&local_100.orient,(undefined4 *)&local_100.orient);
  Object_AddCustomObject__FP9SceneElemi(&local_100,1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlacePointOnRoad__FiP8coorddef(int slice /*$a0*/, struct coorddef *offset /*$s3*/)
 // line 165, offset 0x8005c5e4
	/* begin block 1 */
		// Start line: 166
		// Start offset: 0x8005C5E4
		// Variables:
	// 		struct coorddef slicecenter; // stack offset -192
	// 		struct BWorldSm_Pos testSimRoadInfo; // stack offset -176
	// 		struct coorddef ioff; // stack offset -40
	// 		int vecXz; // $s2
	// 		int vecZx; // $s0
	// 		int vecZz; // $s1
	/* end block 1 */
	// End offset: 0x8005C768
	// End Line: 194

void PlacePointOnRoad__FiP8coorddef(int slice,coorddef *offset)

{
  char cVar1;
  char cVar2;
  char cVar3;
  BO_tNewtonObj *pBVar4;
  uint uVar5;
  uint uVar6;
  coorddef *norm;
  BWorldSm_Pos *pBVar7;
  Trk_NewSlice *pointOnPlane;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short local_b0;
  undefined local_a8 [112];
  Trk_NewSimQuad *local_38;
  int local_28;
  int local_24;
  int local_20;
  
  piVar8 = (int *)&local_b0;
  local_28 = offset->x;
  local_24 = offset->y;
  local_20 = offset->z;
  pBVar7 = &(__Cars_gHumanRaceCarList_9__->N).simRoadInfo;
  pBVar4 = &__Cars_gHumanRaceCarList_9__->N;
  do {
    iVar9 = *(int *)&pBVar7->simRotFlag;
    iVar10 = pBVar7->quadPts[0].x;
    iVar11 = pBVar7->quadPts[0].y;
    *piVar8 = *(int *)pBVar7;
    piVar8[1] = iVar9;
    piVar8[2] = iVar10;
    piVar8[3] = iVar11;
    pointOnPlane = BWorldSm_slices;
    pBVar7 = (BWorldSm_Pos *)&pBVar7->quadPts[0].z;
    piVar8 = piVar8 + 4;
  } while (pBVar7 != (BWorldSm_Pos *)&(pBVar4->simRoadInfo).simSlice);
  *piVar8 = *(int *)pBVar7;
  local_b0 = (short)slice;
  pointOnPlane = pointOnPlane + slice;
  iVar9 = pointOnPlane->center[0];
  iVar10 = pointOnPlane->center[1];
  iVar11 = pointOnPlane->center[2];
  pointOnPlane = BWorldSm_slices + slice;
  cVar1 = pointOnPlane->right[2];
  cVar2 = pointOnPlane->forward[0];
  cVar3 = pointOnPlane->forward[2];
  uVar5 = fixedmult((int)pointOnPlane->right[0] << 9,local_28);
  uVar6 = fixedmult((int)cVar2 << 9,local_20);
  offset->x = iVar9 + uVar5 + uVar6;
  offset->y = iVar10;
  uVar5 = fixedmult((int)cVar1 << 9,local_28);
  uVar6 = fixedmult((int)cVar3 << 9,local_20);
  offset->z = iVar11 + uVar5 + uVar6;
  BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi(offset,(BWorldSm_Pos *)&local_b0,1);
  norm = BWorldSm_UNormal__FP12BWorldSm_Pos((BWorldSm_Pos *)&local_b0);
  if (local_38 == (Trk_NewSimQuad *)0x0) {
    pointOnPlane = BWorldSm_slices + (int)local_b0;
  }
  else {
    pointOnPlane = (Trk_NewSlice *)(&local_b0 + 8);
  }
  iVar9 = GetPlaneY__FPC8coorddefN20(norm,(coorddef *)pointOnPlane,offset);
  offset->y = iVar9;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupBlockadeElements__15AIHigh_BasicCopP10blockade_t(struct AIHigh_BasicCop *this /*$a0*/, struct blockade_t *blockade /*$s4*/)
 // line 198, offset 0x8005c790
	/* begin block 1 */
		// Start line: 199
		// Start offset: 0x8005C790

		/* begin block 1.1 */
			// Start line: 199
			// Start offset: 0x8005C790

			/* begin block 1.1.1 */
				// Start line: 201
				// Start offset: 0x8005C7C4
				// Variables:
			// 		int slice; // $s3

				/* begin block 1.1.1.1 */
					// Start line: 202
					// Start offset: 0x8005C7C4

					/* begin block 1.1.1.1.1 */
						// Start line: 211
						// Start offset: 0x8005C7E8
						// Variables:
					// 		struct coorddef pt; // stack offset -48

						/* begin block 1.1.1.1.1.1 */
							// Start line: 216
							// Start offset: 0x8005C7E8
							// Variables:
						// 		int i; // $s0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8005C838
						// End Line: 223

						/* begin block 1.1.1.1.1.2 */
							// Start line: 224
							// Start offset: 0x8005C838
							// Variables:
						// 		int i; // $s2
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x8005C894
						// End Line: 231
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005C894
					// End Line: 231

					/* begin block 1.1.1.1.2 */
						// Start line: 236
						// Start offset: 0x8005C89C

						/* begin block 1.1.1.1.2.1 */
							// Start line: 236
							// Start offset: 0x8005C89C

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 237
								// Start offset: 0x8005C8A8
								// Variables:
							// 		struct coorddef pt; // stack offset -48

								/* begin block 1.1.1.1.2.1.1.1 */
									// Start line: 243
									// Start offset: 0x8005C8A8
									// Variables:
								// 		int i; // $s2
								/* end block 1.1.1.1.2.1.1.1 */
								// End offset: 0x8005C900
								// End Line: 250

								/* begin block 1.1.1.1.2.1.1.2 */
									// Start line: 251
									// Start offset: 0x8005C900
									// Variables:
								// 		int i; // $s0
								/* end block 1.1.1.1.2.1.1.2 */
								// End offset: 0x8005C960
								// End Line: 259
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x8005C960
							// End Line: 259
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x8005C960
						// End Line: 259
					/* end block 1.1.1.1.2 */
					// End offset: 0x8005C960
					// End Line: 259
				/* end block 1.1.1.1 */
				// End offset: 0x8005C960
				// End Line: 259

				/* begin block 1.1.1.2 */
					// Start line: 265
					// Start offset: 0x8005C960

					/* begin block 1.1.1.2.1 */
						// Start line: 266
						// Start offset: 0x8005C974
						// Variables:
					// 		int objId; // $s0
					// 		struct coorddef pt; // stack offset -48
					/* end block 1.1.1.2.1 */
					// End offset: 0x8005CA00
					// End Line: 284
				/* end block 1.1.1.2 */
				// End offset: 0x8005CA00
				// End Line: 284
			/* end block 1.1.1 */
			// End offset: 0x8005CA04
			// End Line: 291
		/* end block 1.1 */
		// End offset: 0x8005CA04
		// End Line: 291
	/* end block 1 */
	// End offset: 0x8005CA04
	// End Line: 291

void SetupBlockadeElements__15AIHigh_BasicCopP10blockade_t
               (AIHigh_BasicCop *this,blockade_t *blockade)

{
  int objectID;
  int iVar1;
  int iVar2;
  int slice;
  coorddef local_30;
  
  if (blockade->flags != 0) {
    Object_ClearCustomObjects__Fv();
    slice = blockade->slice;
    objectID = 0;
    if ((blockade->flags & 1U) == 0) {
      objectID = -0x60000;
      Object_customSliceNum = slice;
      if ((blockade->flags & 2U) != 0) {
        iVar2 = 0;
        iVar1 = -0x180000;
        Object_customSliceNum = slice;
        do {
          local_30.y = 0;
          local_30.z = blockade->direction * iVar1;
          iVar2 = iVar2 + 1;
          local_30.x = (undefined *)objectID;
          PlacePointOnRoad__FiP8coorddef(slice,&local_30);
          Blockade_AddRoadFlare__FP8coorddef(&local_30);
          iVar1 = iVar1 + 0x40000;
          objectID = objectID + 0x20000;
        } while (iVar2 < 7);
        objectID = 0;
        iVar2 = -0x180000;
        iVar1 = 0x60000;
        do {
          if (objectID != 3) {
            local_30.y = 0;
            local_30.z = blockade->direction * iVar2;
            local_30.x = (undefined *)iVar1;
            PlacePointOnRoad__FiP8coorddef(slice,&local_30);
            Blockade_AddRoadFlare__FP8coorddef(&local_30);
          }
          iVar2 = iVar2 + 0x40000;
          iVar1 = iVar1 + -0x20000;
          objectID = objectID + 1;
        } while (objectID < 7);
      }
    }
    else {
      iVar1 = -0x100000;
      local_30.x = (undefined *)0x0;
      Object_customSliceNum = slice;
      do {
        local_30.y = 0;
        local_30.z = blockade->direction * iVar1;
        objectID = objectID + 1;
        PlacePointOnRoad__FiP8coorddef(slice,&local_30);
        Blockade_AddRoadFlare__FP8coorddef(&local_30);
        iVar1 = iVar1 + 0x40000;
        local_30.x = (undefined *)(objectID * 0x20000);
      } while (objectID < 5);
      iVar2 = 1;
      iVar1 = -0xc0000;
      local_30.x = (undefined *)0xfffe0000;
      objectID = (int)local_30.x;
      do {
        local_30.x = (undefined *)objectID;
        objectID = (int)local_30.x;
        local_30.y = 0;
        local_30.z = blockade->direction * iVar1;
        iVar2 = iVar2 + 1;
        PlacePointOnRoad__FiP8coorddef(slice,&local_30);
        Blockade_AddRoadFlare__FP8coorddef(&local_30);
        iVar1 = iVar1 + 0x40000;
        objectID = objectID + -0x20000;
      } while (iVar2 < 5);
    }
    if (((blockade->flags & 4U) != 0) &&
       (objectID = Object_FindDefWithThisID__Fi(3), objectID != -1)) {
      local_30.x = (undefined *)0xfffd8000;
      local_30.y = 0;
      local_30.z = blockade->direction * -0x40000;
      PlacePointOnRoad__FiP8coorddef(slice,&local_30);
      Blockade_AddObject__FiP8coorddefi(slice,&local_30,objectID);
      local_30.x = &DAT_00028000;
      local_30.y = 0;
      local_30.z = blockade->direction * -0x40000;
      PlacePointOnRoad__FiP8coorddef(slice,&local_30);
      Blockade_AddObject__FiP8coorddefi(slice,&local_30,objectID);
    }
    blockade->flags = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HandleBlockadeSpeech__15AIHigh_BasicCop(struct AIHigh_BasicCop *this /*$s0*/)
 // line 298, offset 0x8005ca28
	/* begin block 1 */
		// Start line: 299
		// Start offset: 0x8005CA28
		// Variables:
	// 		struct Car_tObj *theCar; // $a3

		/* begin block 1.1 */
			// Start line: 300
			// Start offset: 0x8005CA48
			// Variables:
		// 		struct AIHigh_Base *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 300
				// Start offset: 0x8005CA48
			/* end block 1.1.1 */
			// End offset: 0x8005CA48
			// End Line: 300
		/* end block 1.1 */
		// End offset: 0x8005CA48
		// End Line: 300

		/* begin block 1.2 */
			// Start line: 300
			// Start offset: 0x8005CA48

			/* begin block 1.2.1 */
				// Start line: 309
				// Start offset: 0x8005CA60
				// Variables:
			// 		int carSlice; // $v0
			// 		int sliceDiff; // $a1

				/* begin block 1.2.1.1 */
					// Start line: 310
					// Start offset: 0x8005CA60

					/* begin block 1.2.1.1.1 */
						// Start line: 315
						// Start offset: 0x8005CA80

						/* begin block 1.2.1.1.1.1 */
							// Start line: 315
							// Start offset: 0x8005CA80

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 316
								// Start offset: 0x8005CA98
								// Variables:
							// 		int checkSlice; // $v1
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x8005CB3C
							// End Line: 334
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8005CB3C
						// End Line: 334
					/* end block 1.2.1.1.1 */
					// End offset: 0x8005CB3C
					// End Line: 334
				/* end block 1.2.1.1 */
				// End offset: 0x8005CB3C
				// End Line: 334
			/* end block 1.2.1 */
			// End offset: 0x8005CB3C
			// End Line: 334
		/* end block 1.2 */
		// End offset: 0x8005CB3C
		// End Line: 334
	/* end block 1 */
	// End offset: 0x8005CB3C
	// End Line: 334

void HandleBlockadeSpeech__15AIHigh_BasicCop(AIHigh_BasicCop *this)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  Speaker *pSVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(ushort *)&(this->blockade_).releaseTime;
  if (*(short *)&(this->blockade_).releaseTime != 0) {
    iVar6 = *(int *)this->copIndex_;
    if ((iVar6 == 0) ||
       (iVar7 = *(int *)(iVar6 + 0x358) - (this->blockade_).chaseLevel, *(int *)(iVar6 + 0x274) != 0
       )) {
      *(undefined2 *)&(this->blockade_).releaseTime = 0;
    }
    else {
      iVar3 = iVar7;
      if (iVar7 < 0) {
        iVar3 = -iVar7;
      }
      if (iVar3 < 0x21) {
        iVar6 = ((&Cars_topSpeedCap)[(int)*(short *)(iVar6 + 0x8bc)] * 0x1c) / 0x640000;
        uVar2 = uVar1 | 2;
        if ((iVar7 < iVar6) || (uVar2 = uVar1 | 4, iVar6 < iVar7)) {
          *(ushort *)&(this->blockade_).releaseTime = uVar2;
        }
        if ((*(ushort *)&(this->blockade_).releaseTime & 6) == 6) {
          pSVar4 = Mobile__6SpeechP8Car_tObj((this->AIHigh_Base).carObj_);
          uVar5 = pSVar4->_vf[0].value;
          (**(code **)(uVar5 + 0x3c))
                    ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar5 + 0x38));
          *(undefined2 *)&(this->blockade_).releaseTime = 0;
          AICop_gRoadBlockState = kAICop_RoadBlockState_PerpPassed;
        }
      }
    }
  }
  return;
}




