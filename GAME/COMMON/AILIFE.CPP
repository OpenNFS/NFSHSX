#include "NFS4.H"
#include "AILIFE.H"

// decompiled code
// original method signature: 
// int /*$ra*/ AILife_EvaluateLife__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 51, offset 0x80067650
	/* begin block 1 */
		// Start line: 52
		// Start offset: 0x80067650
	/* end block 1 */
	// End offset: 0x800676A4
	// End Line: 65

int AILife_EvaluateLife__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  Car_tObj *pCVar2;
  
  if (((carObj->carFlags & 0x400U) == 0) &&
     (iVar1 = AILife_IsCoordInThisLiveArea__FP8coorddefP8Car_tObj
                        (&(carObj->N).position,(Car_tObj *)(carObj->speechInfo).copCarIndex),
     iVar1 == 0)) {
    pCVar2 = AILife_IsTrafficCarInAnyLiveArea__FP8Car_tObj(carObj);
    *(Car_tObj **)&(carObj->speechInfo).copCarIndex = pCVar2;
    if (pCVar2 == (Car_tObj *)0x0) {
      return 1;
    }
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AILife_RCSetSpeeds__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 82, offset 0x800676b4
	/* begin block 1 */
		// Start line: 83
		// Start offset: 0x800676B4
	/* end block 1 */
	// End offset: 0x800676B4
	// End Line: 83

void AILife_RCSetSpeeds__FP8Car_tObj(Car_tObj *carObj)

{
  AISpeeds_CalcDesiredSpeed__FP8Car_tObj(carObj);
  (carObj->script).lastActionTime = (carObj->script).lastReactionIndex[5];
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AILife_RCPickSliceAndDirection__FP8Car_tObj(struct Car_tObj *carObj /*$s3*/)
 // line 94, offset 0x800676e4
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x800676E4
		// Variables:
	// 		int approachSide; // $s5
	// 		int offset; // $v0
	// 		int search; // $s6
	// 		int count; // $s4

		/* begin block 1.1 */
			// Start line: 129
			// Start offset: 0x800677F8

			/* begin block 1.1.1 */
				// Start line: 129
				// Start offset: 0x80067814
				// Variables:
			// 		struct Car_tObj *checkCar; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 136
					// Start offset: 0x80067884

					/* begin block 1.1.1.1.1 */
						// Start line: 137
						// Start offset: 0x80067898
						// Variables:
					// 		struct coorddef basisOuterCoord; // stack offset -56
					// 		int basisOuterSlice; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80067964
					// End Line: 153
				/* end block 1.1.1.1 */
				// End offset: 0x80067964
				// End Line: 153
			/* end block 1.1.1 */
			// End offset: 0x80067964
			// End Line: 153
		/* end block 1.1 */
		// End offset: 0x80067970
		// End Line: 156
	/* end block 1 */
	// End offset: 0x80067AD4
	// End Line: 174

void AILife_RCPickSliceAndDirection__FP8Car_tObj(Car_tObj *carObj)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  Trk_NewSlice *pTVar4;
  int iVar5;
  Car_tObj *pCVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  Car_tObj *racer;
  int iVar11;
  uint uVar12;
  coorddef local_38;
  
  uVar12 = fastRandom * randSeed;
  randtemp = (uVar12 & 0xffff) * randSeed;
  iVar11 = 1;
  fastRandom = randtemp & 0xffff;
  uVar8 = randtemp & 0xffff00;
  *(Car_tObj **)&(carObj->speechInfo).copCarIndex =
       (&__Cars_gLifeBasisCarList_9__)[Cars_gNumLifeBasisCars * ((uVar12 & 0xffff00) >> 8) >> 0x10];
  if ((uVar8 >> 8) * 1000 >> 0x10 < 500) {
    iVar11 = -1;
  }
  iVar9 = (carObj->speechInfo).copCarIndex;
  iVar5 = *(int *)(iVar9 + 0x564);
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (0x1e0000 < iVar5) {
    iVar11 = *(int *)(iVar9 + 0x554);
  }
  iVar9 = *(int *)(iVar9 + 0x25c);
  iVar5 = 0;
  while (iVar5 < Cars_gNumCars) {
    if (Cars_gNumCars == 0) {
      trap(0x1c00);
    }
    if ((Cars_gNumCars == -1) && (iVar9 + Cars_gNumCars == -0x80000000)) {
      trap(0x1800);
    }
    racer = (&__Cars_gSortedList_9__)[(iVar9 + Cars_gNumCars) % Cars_gNumCars];
    if (((racer != carObj) &&
        (pCVar6 = (Car_tObj *)(carObj->speechInfo).copCarIndex, racer != pCVar6)) &&
       ((racer->carFlags & 0x100U) != 0)) {
      iVar7 = (int)(pCVar6->N).simRoadInfo.slice + iVar11 * 0x24;
      if (iVar11 * 0x24 < 0) {
        iVar2 = gNumSlices;
        if (iVar7 < 0) goto LAB_800678dc;
      }
      else {
        if (gNumSlices <= iVar7) {
          iVar2 = -gNumSlices;
LAB_800678dc:
          iVar7 = iVar7 + iVar2;
        }
      }
      bVar3 = false;
      pTVar4 = BWorldSm_slices + iVar7;
      local_38.x = pTVar4->center[0];
      local_38.y = pTVar4->center[1];
      local_38.z = pTVar4->center[2];
      iVar7 = AILife_IsCoordInThisVisibleArea__FP8coorddefP8Car_tObj(&local_38,racer);
      if (iVar7 != 0) {
        iVar7 = AIWorld_ApxSplineDistance__FP8Car_tObjT0
                          (racer,(Car_tObj *)(carObj->speechInfo).copCarIndex);
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0xffff;
        }
        if (0 < iVar11 * (iVar7 >> 0x10)) {
          bVar3 = true;
        }
      }
      if (!bVar3) break;
      *(Car_tObj **)&(carObj->speechInfo).copCarIndex = racer;
    }
    iVar9 = iVar9 + iVar11;
    iVar5 = iVar5 + 1;
  }
  uVar8 = fastRandom * randSeed;
  fastRandom = uVar8 & 0xffff;
  iVar5 = -1;
  if (499 < (uVar8 >> 8 & 0xffff) * 1000 >> 0x10) {
    iVar5 = 1;
  }
  (carObj->script).lastReactionIndex[3] = iVar5;
  if (AITune_oneWay != 0) {
    iVar5 = -1;
    if (GameSetup_gData.reverseTrack == 0) {
      iVar5 = 1;
    }
    (carObj->script).lastReactionIndex[3] = iVar5;
  }
  randtemp = fastRandom * randSeed;
  iVar11 = ((randtemp >> 0x15 & 7) + 0x1c) * iVar11;
  fastRandom = randtemp & 0xffff;
  (carObj->script).lastReactionIndex[2] = (carObj->script).lastReactionIndex[3];
  if (iVar11 < 0) {
    sVar1 = *(short *)((carObj->speechInfo).copCarIndex + 8);
    sVar10 = sVar1 + (short)iVar11;
    if ((int)sVar1 + iVar11 < 0) {
      sVar10 = (short)gNumSlices + sVar10;
    }
    (carObj->N).simRoadInfo.slice = sVar10;
  }
  else {
    sVar1 = *(short *)((carObj->speechInfo).copCarIndex + 8);
    sVar10 = sVar1 + (short)iVar11;
    if (gNumSlices <= (int)sVar1 + iVar11) {
      sVar10 = sVar10 - (short)gNumSlices;
    }
    (carObj->N).simRoadInfo.slice = sVar10;
  }
  AILife_Debug__FPce(s__psad_checked_group__basis_now___80055310);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AILife_RCPickDesiredLatPosition__FP8Car_tObj(struct Car_tObj *carObj /*$a2*/)
 // line 182, offset 0x80067b1c
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x80067B1C
		// Variables:
	// 		int randNumLanes; // $v1
	// 		int newSlice; // $a0
	// 		int width; // $a1
	/* end block 1 */
	// End offset: 0x80067C34
	// End Line: 217

void AILife_RCPickDesiredLatPosition__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(carObj->N).simRoadInfo.slice;
  if ((carObj->script).lastReactionIndex[3] == AITune_driveSide) {
    uVar2 = (uint)BWorldSm_slices[iVar1].avgPavedWidthRt * 0x8000;
    iVar1 = uVar2 * ((((uint)BWorldSm_slices[iVar1].laneCount & 0xf) *
                      (fastRandom * randSeed >> 8 & 0xffff) >> 0x10) + 1) - (uVar2 >> 1);
  }
  else {
    uVar2 = (uint)BWorldSm_slices[iVar1].avgPavedWidthLf;
    iVar1 = uVar2 * -0x8000 *
            (((uint)(BWorldSm_slices[iVar1].laneCount >> 4) * (fastRandom * randSeed >> 8 & 0xffff)
             >> 0x10) + 1) + (uVar2 * 0x8000 >> 1);
  }
  randtemp = fastRandom * randSeed;
  fastRandom = randtemp & 0xffff;
  (carObj->script).lastReactionIndex[4] = iVar1;
  iVar1 = (carObj->script).lastReactionIndex[4] + (carObj->speechInfo).speechIntensity;
  (carObj->script).lastReactionIndex[4] = iVar1;
  (carObj->angularAcc_ch).y = iVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AILife_PlaceCarAtLocation__FP8Car_tObjiiiii(struct Car_tObj *carObj /*$a0*/, int slice /*$a1*/, int desiredLatPos /*$a2*/, int direction /*$a3*/, int currentSpeed /*stack 16*/, int rotation1024 /*stack 20*/)
 // line 258, offset 0x80067c50
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x80067C50
	/* end block 1 */
	// End offset: 0x80067C50
	// End Line: 259

void AILife_PlaceCarAtLocation__FP8Car_tObjiiiii
               (Car_tObj *carObj,int slice,int desiredLatPos,int direction,int currentSpeed,
               int rotation1024)

{
  (carObj->script).lastReactionIndex[4] = desiredLatPos;
  (carObj->script).lastReactionIndex[3] = direction;
  (carObj->script).lastReactionIndex[2] = direction;
  (carObj->N).simRoadInfo.slice = (short)slice;
  (carObj->script).lastActionTime = currentSpeed;
  AILife_PlaceCarAtLocation__FP8Car_tObji(carObj,rotation1024);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AILife_SetInitialSlicePositionOrientationEtc__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 269, offset 0x80067c8c
	/* begin block 1 */
		// Start line: 270
		// Start offset: 0x80067C8C
		// Variables:
	// 		struct coorddef offset; // stack offset -24
	/* end block 1 */
	// End offset: 0x80067C8C
	// End Line: 270

void AILife_SetInitialSlicePositionOrientationEtc__FP8Car_tObj(Car_tObj *carObj)

{
  coorddef local_18;
  
  memset(&local_18,0,0xc);
  local_18.x = (carObj->script).lastReactionIndex[4];
  local_18.y = 0x10000;
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)carObj,(int)(carObj->N).simRoadInfo.slice,&local_18,
             (carObj->script).lastReactionIndex[3]);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AILife_PlaceCarAtLocation__FP8Car_tObji(struct Car_tObj *carObj /*$s2*/, int rotation1024 /*$s3*/)
 // line 279, offset 0x80067ce0
	/* begin block 1 */
		// Start line: 280
		// Start offset: 0x80067CE0

		/* begin block 1.1 */
			// Start line: 300
			// Start offset: 0x80067D8C

			/* begin block 1.1.1 */
				// Start line: 301
				// Start offset: 0x80067D9C
				// Variables:
			// 		struct coorddef targetDirection; // stack offset -80
			// 		int speed; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80067D9C
			// End Line: 304

			/* begin block 1.1.2 */
				// Start line: 311
				// Start offset: 0x80067DF8
				// Variables:
			// 		struct coorddef zero; // stack offset -80
			/* end block 1.1.2 */
			// End offset: 0x80067E1C
			// End Line: 313
		/* end block 1.1 */
		// End offset: 0x80067E1C
		// End Line: 313

		/* begin block 1.2 */
			// Start line: 319
			// Start offset: 0x80067E38
			// Variables:
		// 		struct matrixtdef rotMatrix; // stack offset -64
		/* end block 1.2 */
		// End offset: 0x80067E90
		// End Line: 329
	/* end block 1 */
	// End offset: 0x80067E90
	// End Line: 329

void AILife_PlaceCarAtLocation__FP8Car_tObji(Car_tObj *carObj,int rotation1024)

{
  matrixtdef *pmVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  matrixtdef *m1;
  uint local_50;
  uint local_4c;
  uint local_48;
  matrixtdef mStack64;
  
  iVar2 = (carObj->script).lastReactionIndex[4];
  iVar3 = (carObj->script).lastActionTime;
  (carObj->N).active = '\x01';
  (carObj->angularAcc_ch).y = iVar2;
  (carObj->script).lastReactionIndex[5] = iVar3;
  AIPhysic_ResetCar__FP8Car_tObj(carObj);
  if (stackSpeedUpEnbabledFlag == 0) {
    AILife_SetInitialSlicePositionOrientationEtc__FP8Car_tObj(carObj);
  }
  else {
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 0;
    AILife_SetInitialSlicePositionOrientationEtc__FP8Car_tObj(carObj);
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 1;
  }
  if ((carObj->script).lastActionTime == 0) {
    memset(&local_50,0,0xc);
  }
  else {
    local_50 = (carObj->N).orientMat.m[6];
    local_4c = (carObj->N).orientMat.m[7];
    local_48 = (carObj->N).orientMat.m[8];
    iVar2 = (carObj->script).lastActionTime;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    local_50 = fixedmult(iVar2,local_50);
    local_4c = fixedmult(iVar2,local_4c);
    local_48 = fixedmult(iVar2,local_48);
  }
  (carObj->N).linearVel.x = local_50;
  (carObj->N).linearVel.y = local_4c;
  (carObj->N).linearVel.z = local_48;
  if ((carObj->carFlags & 4U) != 0) {
    Physics_ResetCar__FP8Car_tObj(carObj);
  }
  xformy((int *)&mStack64,rotation1024);
  m1 = &(carObj->N).orientMat;
  Math_fasttransmult__FP10matrixtdefN20(m1,&mStack64,m1);
  pmVar1 = &(carObj->N).shadowMat;
  do {
    iVar2 = m1->m[1];
    iVar3 = m1->m[2];
    iVar4 = m1->m[3];
    pmVar1->m[0] = m1->m[0];
    pmVar1->m[1] = iVar2;
    pmVar1->m[2] = iVar3;
    pmVar1->m[3] = iVar4;
    m1 = (matrixtdef *)(m1->m + 4);
    pmVar1 = (matrixtdef *)(pmVar1->m + 4);
  } while (m1 != (matrixtdef *)((carObj->N).orientMat.m + 8));
  pmVar1->m[0] = m1->m[0];
  AIInit_ClearAICar__FP8Car_tObj(carObj);
  iVar2 = Cars_CalculateRoadPosition__FP8Car_tObj(carObj);
  (carObj->angularAcc_ch).y = iVar2;
  (carObj->script).lastReactionIndex[4] = iVar2;
  (carObj->speechInfo).playerCarIndex = iVar2;
  iVar2 = Cars_CalculateRoadSpan__FP8Car_tObj(carObj);
  carObj->roadSpan = iVar2;
  AIWorld_CalculateLaneInfo__FP8Car_tObj(carObj);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AILife_ReencarnateTraffic__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 342, offset 0x80067ee4
	/* begin block 1 */
		// Start line: 343
		// Start offset: 0x80067EE4
	/* end block 1 */
	// End offset: 0x80067F50
	// End Line: 353

void AILife_ReencarnateTraffic__FP8Car_tObj(Car_tObj *carObj)

{
  randtemp = fastRandom * randSeed;
  fastRandom = randtemp & 0xffff;
  if ((carObj->carFlags & 0x10U) != 0) {
    R3DCar_ChangeTrafficColor__FP8Car_tObji(carObj,(randtemp >> 8 & 0xffff) * 3 >> 0x10);
  }
  AI_ChooseNewLaneSlack__FP8Car_tObj(carObj);
  AISpeeds_SetTrafficSpeedRandomFactor__FP8Car_tObj(carObj);
  AILife_RCPickSliceAndDirection__FP8Car_tObj(carObj);
  AILife_RCPickDesiredLatPosition__FP8Car_tObj(carObj);
  AILife_RCSetSpeeds__FP8Car_tObj(carObj);
  AILife_PlaceCarAtLocation__FP8Car_tObji(carObj,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AILife_ReencarnateTrafficByPosition__FP8Car_tObjiiP8coorddefP10matrixtdef(struct Car_tObj *carObj /*$s0*/, int slice /*$s4*/, int travelDirection /*$s3*/, struct coorddef *pos /*$s5*/, struct matrixtdef *ori /*stack 16*/)
 // line 396, offset 0x80067f94
	/* begin block 1 */
		// Start line: 397
		// Start offset: 0x80067F94
		// Variables:
	// 		struct coorddef zero; // stack offset -64
	// 		struct coorddef offset; // stack offset -48
	/* end block 1 */
	// End offset: 0x8006811C
	// End Line: 443

void AILife_ReencarnateTrafficByPosition__FP8Car_tObjiiP8coorddefP10matrixtdef
               (Car_tObj *carObj,int slice,int travelDirection,coorddef *pos,matrixtdef *ori)

{
  short sVar1;
  int *piVar2;
  matrixtdef *pmVar3;
  matrixtdef *pmVar4;
  int direction;
  int iVar5;
  int iVar6;
  int local_40;
  int local_3c;
  int local_38;
  coorddef cStack48;
  
  memset(&local_40,0,0xc);
  memset(&cStack48,0,0xc);
  randtemp = fastRandom * randSeed;
  fastRandom = randtemp & 0xffff;
  if ((carObj->carFlags & 0x10U) != 0) {
    R3DCar_ChangeTrafficColor__FP8Car_tObji(carObj,(randtemp >> 8 & 0xffff) * 3 >> 0x10);
  }
  AI_ChooseNewLaneSlack__FP8Car_tObj(carObj);
  AISpeeds_SetTrafficSpeedRandomFactor__FP8Car_tObj(carObj);
  (carObj->speechInfo).copCarIndex = 0;
  (carObj->script).lastReactionIndex[3] = travelDirection;
  (carObj->script).lastReactionIndex[2] = travelDirection;
  (carObj->N).simRoadInfo.slice = (short)slice;
  AILife_RCSetSpeeds__FP8Car_tObj(carObj);
  sVar1 = (carObj->N).simRoadInfo.slice;
  direction = (carObj->script).lastReactionIndex[3];
  (carObj->script).lastActionTime = 0;
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)carObj,(int)sVar1,&cStack48,direction);
  pmVar4 = &(carObj->N).orientMat;
  direction = pos->y;
  iVar5 = pos->z;
  (carObj->N).position.x = pos->x;
  (carObj->N).position.y = direction;
  (carObj->N).position.z = iVar5;
  pmVar3 = ori;
  do {
    direction = pmVar3->m[1];
    iVar5 = pmVar3->m[2];
    iVar6 = pmVar3->m[3];
    pmVar4->m[0] = pmVar3->m[0];
    pmVar4->m[1] = direction;
    pmVar4->m[2] = iVar5;
    pmVar4->m[3] = iVar6;
    pmVar3 = (matrixtdef *)(pmVar3->m + 4);
    pmVar4 = (matrixtdef *)(pmVar4->m + 4);
  } while (pmVar3 != (matrixtdef *)(ori->m + 8));
  pmVar4->m[0] = pmVar3->m[0];
  pmVar3 = &(carObj->N).shadowMat;
  piVar2 = ori->m;
  do {
    direction = ori->m[1];
    iVar5 = ori->m[2];
    iVar6 = ori->m[3];
    pmVar3->m[0] = ori->m[0];
    pmVar3->m[1] = direction;
    pmVar3->m[2] = iVar5;
    pmVar3->m[3] = iVar6;
    ori = (matrixtdef *)(ori->m + 4);
    pmVar3 = (matrixtdef *)(pmVar3->m + 4);
  } while (ori != (matrixtdef *)(piVar2 + 8));
  pmVar3->m[0] = ori->m[0];
  (carObj->N).linearVel.x = local_40;
  (carObj->N).linearVel.y = local_3c;
  (carObj->N).linearVel.z = local_38;
  (carObj->N).speedXZ = 0;
  AIInit_ClearAICar__FP8Car_tObj(carObj);
  direction = Cars_CalculateRoadPosition__FP8Car_tObj(carObj);
  (carObj->angularAcc_ch).y = direction;
  (carObj->script).lastReactionIndex[4] = direction;
  (carObj->speechInfo).playerCarIndex = direction;
  direction = Cars_CalculateRoadSpan__FP8Car_tObj(carObj);
  carObj->roadSpan = direction;
  AIWorld_CalculateLaneInfo__FP8Car_tObj(carObj);
  AILife_RCPickDesiredLatPosition__FP8Car_tObj(carObj);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AILife_ReencarnateCopBySlice__FP8Car_tObjiiii(struct Car_tObj *carObj /*$s0*/, int slice /*$a1*/, int travelDirection /*$a2*/, int roadSide /*$a3*/, int moving /*stack 16*/)
 // line 478, offset 0x800681a0
	/* begin block 1 */
		// Start line: 479
		// Start offset: 0x800681A0

		/* begin block 1.1 */
			// Start line: 489
			// Start offset: 0x800681DC

			/* begin block 1.1.1 */
				// Start line: 499
				// Start offset: 0x80068254

				/* begin block 1.1.1.1 */
					// Start line: 500
					// Start offset: 0x80068254

					/* begin block 1.1.1.1.1 */
						// Start line: 501
						// Start offset: 0x80068288
						// Variables:
					// 		int width; // $v0
					// 		int numLanes; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x80068288
					// End Line: 502

					/* begin block 1.1.1.1.2 */
						// Start line: 507
						// Start offset: 0x800682BC
						// Variables:
					// 		int width; // $v0
					/* end block 1.1.1.1.2 */
					// End offset: 0x800682DC
					// End Line: 510
				/* end block 1.1.1.1 */
				// End offset: 0x800682DC
				// End Line: 510
			/* end block 1.1.1 */
			// End offset: 0x800682DC
			// End Line: 510
		/* end block 1.1 */
		// End offset: 0x800682DC
		// End Line: 510
	/* end block 1 */
	// End offset: 0x800682FC
	// End Line: 520

void AILife_ReencarnateCopBySlice__FP8Car_tObjiiii
               (Car_tObj *carObj,int slice,int travelDirection,int roadSide,int moving)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = AITune_oneWay;
  (carObj->N).simRoadInfo.slice = (short)slice;
  if ((iVar2 != 0) && (travelDirection = -1, GameSetup_gData.reverseTrack == 0)) {
    travelDirection = 1;
  }
  (carObj->script).lastReactionIndex[3] = travelDirection;
  (carObj->script).lastReactionIndex[2] = travelDirection;
  if (moving == 0) {
    if (roadSide == -1) {
      iVar2 = -0x20000 -
              (uint)BWorldSm_slices[slice].avgPavedWidthLf * 0x8000 *
              (uint)(BWorldSm_slices[slice].laneCount >> 4);
      goto LAB_800682dc;
    }
    iVar2 = (uint)BWorldSm_slices[slice].avgPavedWidthRt * 0x8000 *
            ((uint)BWorldSm_slices[slice].laneCount & 0xf);
    uVar3 = 0x20000;
LAB_800682d4:
    iVar2 = iVar2 + uVar3;
  }
  else {
    if ((carObj->script).lastReactionIndex[3] != 1) {
      bVar1 = BWorldSm_slices[slice].laneCount >> 4;
      if (bVar1 != 0) {
        uVar3 = (uint)BWorldSm_slices[slice].avgPavedWidthLf;
        iVar2 = uVar3 * -0x8000 * (uint)bVar1;
        uVar3 = uVar3 * 0x8000 >> 1;
        goto LAB_800682d4;
      }
    }
    uVar3 = (uint)BWorldSm_slices[slice].avgPavedWidthRt * 0x8000;
    iVar2 = uVar3 * ((uint)BWorldSm_slices[slice].laneCount & 0xf) - (uVar3 >> 1);
  }
LAB_800682dc:
  (carObj->script).lastReactionIndex[4] = iVar2;
  if (moving == 0) {
    (carObj->script).lastReactionIndex[5] = 0;
    (carObj->script).lastActionTime = 0;
  }
  else {
    AILife_RCSetSpeeds__FP8Car_tObj(carObj);
  }
  iVar2 = (carObj->script).lastReactionIndex[4];
  (carObj->angularAcc_ch).y = iVar2;
  (carObj->speechInfo).playerCarIndex = iVar2;
  AILife_PlaceCarAtLocation__FP8Car_tObji(carObj,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AILife_ReencarnateCopByPosition__FP8Car_tObjiiP8coorddefP10matrixtdef(struct Car_tObj *carObj /*$s1*/, int slice /*$s0*/, int travelDirection /*$s2*/, struct coorddef *pos /*$s4*/, struct matrixtdef *ori /*stack 16*/)
 // line 529, offset 0x80068324
	/* begin block 1 */
		// Start line: 530
		// Start offset: 0x80068324
		// Variables:
	// 		struct coorddef zero; // stack offset -56
	// 		struct coorddef offset; // stack offset -40
	/* end block 1 */
	// End offset: 0x80068460
	// End Line: 561

void AILife_ReencarnateCopByPosition__FP8Car_tObjiiP8coorddefP10matrixtdef
               (Car_tObj *carObj,int slice,int travelDirection,coorddef *pos,matrixtdef *ori)

{
  bool bVar1;
  int *piVar2;
  matrixtdef *pmVar3;
  matrixtdef *pmVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_38;
  int local_34;
  int local_30;
  coorddef cStack40;
  
  memset(&local_38,0,0xc);
  memset(&cStack40,0,0xc);
  bVar1 = AITune_oneWay != 0;
  (carObj->N).simRoadInfo.slice = (short)slice;
  if ((bVar1) && (travelDirection = -1, GameSetup_gData.reverseTrack == 0)) {
    travelDirection = 1;
  }
  (carObj->script).lastReactionIndex[3] = travelDirection;
  (carObj->script).lastReactionIndex[2] = travelDirection;
  (carObj->script).lastReactionIndex[5] = 0;
  (carObj->script).lastActionTime = 0;
  AIPhysic_ResetCar__FP8Car_tObj(carObj);
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)carObj,(int)(carObj->N).simRoadInfo.slice,&cStack40,
             (carObj->script).lastReactionIndex[3]);
  pmVar4 = &(carObj->N).orientMat;
  iVar5 = pos->y;
  iVar6 = pos->z;
  (carObj->N).position.x = pos->x;
  (carObj->N).position.y = iVar5;
  (carObj->N).position.z = iVar6;
  pmVar3 = ori;
  do {
    iVar5 = pmVar3->m[1];
    iVar6 = pmVar3->m[2];
    iVar7 = pmVar3->m[3];
    pmVar4->m[0] = pmVar3->m[0];
    pmVar4->m[1] = iVar5;
    pmVar4->m[2] = iVar6;
    pmVar4->m[3] = iVar7;
    pmVar3 = (matrixtdef *)(pmVar3->m + 4);
    pmVar4 = (matrixtdef *)(pmVar4->m + 4);
  } while (pmVar3 != (matrixtdef *)(ori->m + 8));
  pmVar4->m[0] = pmVar3->m[0];
  pmVar3 = &(carObj->N).shadowMat;
  piVar2 = ori->m;
  do {
    iVar5 = ori->m[1];
    iVar6 = ori->m[2];
    iVar7 = ori->m[3];
    pmVar3->m[0] = ori->m[0];
    pmVar3->m[1] = iVar5;
    pmVar3->m[2] = iVar6;
    pmVar3->m[3] = iVar7;
    ori = (matrixtdef *)(ori->m + 4);
    pmVar3 = (matrixtdef *)(pmVar3->m + 4);
  } while (ori != (matrixtdef *)(piVar2 + 8));
  pmVar3->m[0] = ori->m[0];
  (carObj->N).linearVel.x = local_38;
  (carObj->N).linearVel.y = local_34;
  (carObj->N).linearVel.z = local_30;
  AIInit_ClearAICar__FP8Car_tObj(carObj);
  iVar5 = Cars_CalculateRoadPosition__FP8Car_tObj(carObj);
  (carObj->angularAcc_ch).y = iVar5;
  (carObj->script).lastReactionIndex[4] = iVar5;
  (carObj->speechInfo).playerCarIndex = iVar5;
  iVar5 = Cars_CalculateRoadSpan__FP8Car_tObj(carObj);
  carObj->roadSpan = iVar5;
  AIWorld_CalculateLaneInfo__FP8Car_tObj(carObj);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AILife_ReencarnateCopByLatPosAndRotation__FP8Car_tObjiiii(struct Car_tObj *carObj /*$s2*/, int slice /*$s0*/, int travelDirection /*$s1*/, int latPos /*$s3*/, int rotation1024 /*stack 16*/)
 // line 572, offset 0x800684d4
	/* begin block 1 */
		// Start line: 573
		// Start offset: 0x800684D4
		// Variables:
	// 		struct coorddef zero; // stack offset -96
	// 		struct coorddef offset; // stack offset -80
	// 		struct matrixtdef rotMatrix; // stack offset -64
	/* end block 1 */
	// End offset: 0x800685E8
	// End Line: 610

void AILife_ReencarnateCopByLatPosAndRotation__FP8Car_tObjiiii
               (Car_tObj *carObj,int slice,int travelDirection,int latPos,int rotation1024)

{
  bool bVar1;
  matrixtdef *pmVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  matrixtdef *m1;
  int local_60;
  int local_5c;
  int local_58;
  coorddef local_50;
  matrixtdef mStack64;
  
  memset(&local_60,0,0xc);
  memset(&local_50,0,0xc);
  (carObj->N).active = '\x01';
  bVar1 = AITune_oneWay != 0;
  (carObj->N).simRoadInfo.slice = (short)slice;
  if ((bVar1) && (travelDirection = -1, GameSetup_gData.reverseTrack == 0)) {
    travelDirection = 1;
  }
  (carObj->script).lastReactionIndex[3] = travelDirection;
  (carObj->script).lastReactionIndex[2] = travelDirection;
  (carObj->script).lastReactionIndex[5] = 0;
  (carObj->script).lastActionTime = 0;
  AIPhysic_ResetCar__FP8Car_tObj(carObj);
  local_50.x = latPos * (carObj->script).lastReactionIndex[3];
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)carObj,(int)(carObj->N).simRoadInfo.slice,&local_50,
             (carObj->script).lastReactionIndex[3]);
  xformy((int *)&mStack64,rotation1024);
  m1 = &(carObj->N).orientMat;
  Math_fasttransmult__FP10matrixtdefN20(m1,&mStack64,m1);
  pmVar2 = &(carObj->N).shadowMat;
  do {
    iVar4 = m1->m[1];
    iVar5 = m1->m[2];
    iVar3 = m1->m[3];
    pmVar2->m[0] = m1->m[0];
    pmVar2->m[1] = iVar4;
    pmVar2->m[2] = iVar5;
    pmVar2->m[3] = iVar3;
    m1 = (matrixtdef *)(m1->m + 4);
    pmVar2 = (matrixtdef *)(pmVar2->m + 4);
  } while (m1 != (matrixtdef *)((carObj->N).orientMat.m + 8));
  pmVar2->m[0] = m1->m[0];
  (carObj->N).linearVel.x = local_60;
  (carObj->N).linearVel.y = local_5c;
  (carObj->N).linearVel.z = local_58;
  AIInit_ClearAICar__FP8Car_tObj(carObj);
  iVar3 = Cars_CalculateRoadPosition__FP8Car_tObj(carObj);
  (carObj->angularAcc_ch).y = iVar3;
  (carObj->script).lastReactionIndex[4] = iVar3;
  (carObj->speechInfo).playerCarIndex = iVar3;
  iVar3 = Cars_CalculateRoadSpan__FP8Car_tObj(carObj);
  carObj->roadSpan = iVar3;
  AIWorld_CalculateLaneInfo__FP8Car_tObj(carObj);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AILife_IsCoordInThisLiveArea__FP8coorddefP8Car_tObj(struct coorddef *tPos /*$a0*/, struct Car_tObj *racer /*$a1*/)
 // line 627, offset 0x80068658
	/* begin block 1 */
		// Start line: 628
		// Start offset: 0x80068658
		// Variables:
	// 		int xD; // $v1
	// 		int zD; // $a2
	// 		int dist; // $v1
	/* end block 1 */
	// End offset: 0x800686F4
	// End Line: 646

int AILife_IsCoordInThisLiveArea__FP8coorddefP8Car_tObj(coorddef *tPos,Car_tObj *racer)

{
  int iVar1;
  int iVar2;
  
  iVar2 = tPos->z - (racer->N).position.z;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar1 = tPos->x - (racer->N).position.x;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar2 < iVar1) {
    iVar1 = iVar1 + (iVar2 >> 2);
  }
  else {
    iVar1 = iVar2 + (iVar1 >> 2);
  }
  if (0xd80000 < iVar1) {
    AILife_Debug__FPce(s_dist__d_8013c588);
  }
  return (uint)(0xd80000 >= iVar1);
}



// decompiled code
// original method signature: 
// struct Car_tObj * /*$ra*/ AILife_IsTrafficCarInAnyLiveArea__FP8Car_tObj(struct Car_tObj *traffic /*$a0*/)
 // line 654, offset 0x80068704
	/* begin block 1 */
		// Start line: 655
		// Start offset: 0x80068704
		// Variables:
	// 		int racerLoop; // $s1
	// 		struct coorddef *tPos; // $s2
	/* end block 1 */
	// End offset: 0x80068770
	// End Line: 666

Car_tObj * AILife_IsTrafficCarInAnyLiveArea__FP8Car_tObj(Car_tObj *traffic)

{
  int iVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < Cars_gNumLifeBasisCars) {
    ppCVar2 = &__Cars_gLifeBasisCarList_9__;
    do {
      iVar1 = AILife_IsCoordInThisLiveArea__FP8coorddefP8Car_tObj(&(traffic->N).position,*ppCVar2);
      iVar3 = iVar3 + 1;
      if (iVar1 != 0) {
        return *ppCVar2;
      }
      ppCVar2 = ppCVar2 + 1;
    } while (iVar3 < Cars_gNumLifeBasisCars);
  }
  return (Car_tObj *)0x0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AILife_IsCoordInThisVisibleArea__FP8coorddefP8Car_tObj(struct coorddef *tPos /*$a0*/, struct Car_tObj *racer /*$a1*/)
 // line 673, offset 0x80068788
	/* begin block 1 */
		// Start line: 674
		// Start offset: 0x80068788
		// Variables:
	// 		int xD; // $v1
	// 		int zD; // $a2
	// 		int dist; // $v1
	/* end block 1 */
	// End offset: 0x800687DC
	// End Line: 686

int AILife_IsCoordInThisVisibleArea__FP8coorddefP8Car_tObj(coorddef *tPos,Car_tObj *racer)

{
  int iVar1;
  int iVar2;
  
  iVar2 = tPos->z - (racer->N).position.z;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar1 = tPos->x - (racer->N).position.x;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar2 < iVar1) {
    iVar1 = iVar1 + (iVar2 >> 2);
  }
  else {
    iVar1 = iVar2 + (iVar1 >> 2);
  }
  return (uint)(0xac0000 < iVar1) ^ 1;
}



// decompiled code
// original method signature: 
// struct Car_tObj * /*$ra*/ AILife_IsCarInAnyVisibleArea__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 697, offset 0x800687ec
	/* begin block 1 */
		// Start line: 698
		// Start offset: 0x800687EC
	/* end block 1 */
	// End offset: 0x800687EC
	// End Line: 698

Car_tObj * AILife_IsCarInAnyVisibleArea__FP8Car_tObj(Car_tObj *carObj)

{
  Car_tObj *pCVar1;
  
  pCVar1 = AILife_IsPositionInAnyVisibleArea__FP8coorddef(&(carObj->N).position);
  return pCVar1;
}



// decompiled code
// original method signature: 
// struct Car_tObj * /*$ra*/ AILife_IsSliceInAnyVisibleArea__Fi(int slice /*$s2*/)
 // line 706, offset 0x8006880c
	/* begin block 1 */
		// Start line: 707
		// Start offset: 0x8006880C
		// Variables:
	// 		int racerLoop; // $s1

		/* begin block 1.1 */
			// Start line: 707
			// Start offset: 0x8006880C

			/* begin block 1.1.1 */
				// Start line: 709
				// Start offset: 0x80068830
				// Variables:
			// 		int sliceDist; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80068888
			// End Line: 715
		/* end block 1.1 */
		// End offset: 0x80068894
		// End Line: 716
	/* end block 1 */
	// End offset: 0x80068894
	// End Line: 717

Car_tObj * AILife_IsSliceInAnyVisibleArea__Fi(int slice)

{
  int iVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  ppCVar2 = &__Cars_gHumanRaceCarList_9__;
  while( true ) {
    if (Cars_gNumHumanRaceCars <= iVar3) {
      return (Car_tObj *)0x0;
    }
    iVar1 = AIWorld_ApxSplineDistance__Fii((int)((*ppCVar2)->N).simRoadInfo.slice,slice);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 0xac0000) break;
    ppCVar2 = ppCVar2 + 1;
    iVar3 = iVar3 + 1;
  }
  return *ppCVar2;
}



// decompiled code
// original method signature: 
// struct Car_tObj * /*$ra*/ AILife_IsSliceCloseToAnyCopCar__Fi(int slice /*$s2*/)
 // line 728, offset 0x800688ac
	/* begin block 1 */
		// Start line: 729
		// Start offset: 0x800688AC
		// Variables:
	// 		int copLoop; // $s1

		/* begin block 1.1 */
			// Start line: 729
			// Start offset: 0x800688AC

			/* begin block 1.1.1 */
				// Start line: 731
				// Start offset: 0x800688D0
				// Variables:
			// 		int sliceDist; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80068928
			// End Line: 737
		/* end block 1.1 */
		// End offset: 0x80068934
		// End Line: 738
	/* end block 1 */
	// End offset: 0x80068934
	// End Line: 739

Car_tObj * AILife_IsSliceCloseToAnyCopCar__Fi(int slice)

{
  int iVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  ppCVar2 = &__Cars_gCopCarList_9__;
  while( true ) {
    if (Cars_gNumCopCars <= iVar3) {
      return (Car_tObj *)0x0;
    }
    iVar1 = AIWorld_ApxSplineDistance__Fii((int)((*ppCVar2)->N).simRoadInfo.slice,slice);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 0x320000) break;
    ppCVar2 = ppCVar2 + 1;
    iVar3 = iVar3 + 1;
  }
  return *ppCVar2;
}



// decompiled code
// original method signature: 
// struct Car_tObj * /*$ra*/ AILife_IsPositionInAnyVisibleArea__FP8coorddef(struct coorddef *pos /*$s2*/)
 // line 747, offset 0x8006894c
	/* begin block 1 */
		// Start line: 748
		// Start offset: 0x8006894C
		// Variables:
	// 		int racerLoop; // $s1
	/* end block 1 */
	// End offset: 0x800689B8
	// End Line: 756

Car_tObj * AILife_IsPositionInAnyVisibleArea__FP8coorddef(coorddef *pos)

{
  int iVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < Cars_gNumHumanRaceCars) {
    ppCVar2 = &__Cars_gHumanRaceCarList_9__;
    do {
      iVar1 = AILife_IsCoordInThisVisibleArea__FP8coorddefP8Car_tObj(pos,*ppCVar2);
      iVar3 = iVar3 + 1;
      if (iVar1 != 0) {
        return *ppCVar2;
      }
      ppCVar2 = ppCVar2 + 1;
    } while (iVar3 < Cars_gNumHumanRaceCars);
  }
  return (Car_tObj *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AILife_Debug__FPce(char *format /*$a0*/)
 // line 764, offset 0x800689d0
	/* begin block 1 */
		// Start line: 765
		// Start offset: 0x800689E0
	/* end block 1 */
	// End offset: 0x800689E0
	// End Line: 773

void AILife_Debug__FPce(char *format)

{
  return;
}




