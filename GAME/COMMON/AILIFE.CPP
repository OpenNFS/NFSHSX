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
                        (&(carObj->N).position,(Car_tObj *)carObj->originalDesiredSpeed), iVar1 == 0
     )) {
    pCVar2 = AILife_IsTrafficCarInAnyLiveArea__FP8Car_tObj(carObj);
    *(Car_tObj **)&carObj->originalDesiredSpeed = pCVar2;
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
  carObj->carInLane = (carObj->speechInfo).copCarIndex;
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
  bool bVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  speechSourceType sVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  Car_tObj *racer;
  int iVar10;
  coorddef local_38;
  
  randtemp = fastRandom & 0xffff;
  iVar10 = 1;
  uVar3 = fastRandom & 0xffff00;
  uVar8 = randtemp >> 8;
  fastRandom = randtemp;
  carObj->originalDesiredSpeed =
       (&_Cars_gLifeBasisCarList)[Cars_gNumLifeBasisCars * (uVar3 >> 8) >> 0x10];
  if (uVar8 * 1000 >> 0x10 < 500) {
    iVar10 = -1;
  }
  iVar9 = carObj->originalDesiredSpeed;
  iVar7 = *(int *)(iVar9 + 0x564);
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  if (0x1e0000 < iVar7) {
    iVar10 = *(int *)(iVar9 + 0x554);
  }
  iVar9 = *(int *)(iVar9 + 0x25c);
  iVar7 = 0;
  while (iVar7 < Cars_gNumCars) {
    if (Cars_gNumCars == 0) {
      trap(0x1c00);
    }
    if ((Cars_gNumCars == -1) && (iVar9 + Cars_gNumCars == -0x80000000)) {
      trap(0x1800);
    }
    racer = (Car_tObj *)(&_Cars_gSortedList)[(iVar9 + Cars_gNumCars) % Cars_gNumCars];
    if (((racer != carObj) && (racer != (Car_tObj *)carObj->originalDesiredSpeed)) &&
       ((racer->carFlags & 0x100U) != 0)) {
      bVar1 = false;
      piVar4 = (int *)(((int)(((Car_tObj *)carObj->originalDesiredSpeed)->N).simRoadInfo.slice +
                       iVar10 * 0x24) * 0x20);
      local_38.x = *piVar4;
      local_38.y = piVar4[1];
      local_38.z = piVar4[2];
      iVar5 = AILife_IsCoordInThisVisibleArea__FP8coorddefP8Car_tObj(&local_38,racer);
      if (iVar5 != 0) {
        iVar5 = AIWorld_ApxSplineDistance__FP8Car_tObjT0
                          (racer,(Car_tObj *)carObj->originalDesiredSpeed);
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xffff;
        }
        if (0 < iVar10 * (iVar5 >> 0x10)) {
          bVar1 = true;
        }
      }
      if (!bVar1) break;
      *(Car_tObj **)&carObj->originalDesiredSpeed = racer;
    }
    iVar9 = iVar9 + iVar10;
    iVar7 = iVar7 + 1;
  }
  sVar6 = ~SPEECH_SOURCE_REGULAR_COP;
  if (499 < (fastRandom >> 8 & 0xffff) * 1000 >> 0x10) {
    sVar6 = SPEECH_SOURCE_SUPER_COP;
  }
  fastRandom = fastRandom & 0xffff;
  (carObj->speechInfo).speechSource = sVar6;
  if (false) {
    sVar6 = ~SPEECH_SOURCE_REGULAR_COP;
    if (true) {
      sVar6 = SPEECH_SOURCE_SUPER_COP;
    }
    (carObj->speechInfo).speechSource = sVar6;
  }
  randtemp = fastRandom;
  iVar10 = ((fastRandom >> 0x15 & 7) + 0x1c) * iVar10;
  fastRandom = fastRandom & 0xffff;
  (carObj->speechInfo).speechIntensity = (carObj->speechInfo).speechSource;
  sVar2 = (short)iVar10;
  if (iVar10 < 0) {
    (carObj->N).simRoadInfo.slice = *(short *)(carObj->originalDesiredSpeed + 8) + sVar2;
  }
  else {
    (carObj->N).simRoadInfo.slice = *(short *)(carObj->originalDesiredSpeed + 8) + sVar2;
  }
  AILife_Debug__FPce(" psad checked group, basis now %d(s=%d) new slice=%d\n");
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
  if ((carObj->speechInfo).speechSource == SPEECH_SOURCE_REGULAR_COP) {
    iVar1 = iVar1 * 0x20;
    uVar2 = (uint)*(byte *)(iVar1 + 0x1f) * 0x8000;
    iVar1 = uVar2 * ((((uint)*(byte *)(iVar1 + 0x1d) & 0xf) * (fastRandom >> 8 & 0xffff) >> 0x10) +
                    1) - (uVar2 >> 1);
  }
  else {
    iVar1 = iVar1 * 0x20;
    uVar2 = (uint)*(byte *)(iVar1 + 0x1e);
    iVar1 = uVar2 * -0x8000 *
            (((uint)(*(byte *)(iVar1 + 0x1d) >> 4) * (fastRandom >> 8 & 0xffff) >> 0x10) + 1) +
            (uVar2 * 0x8000 >> 1);
  }
  randtemp = fastRandom;
  fastRandom = fastRandom & 0xffff;
  (carObj->speechInfo).playerCarIndex = iVar1;
  iVar1 = (carObj->speechInfo).playerCarIndex + carObj->direction;
  (carObj->speechInfo).playerCarIndex = iVar1;
  carObj->aCarWRTRoad = iVar1;
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

void AILife_PlaceCarAtLocation__FP8Car_tObjiiiii( (Car_tObj *carObj,int slice,int desiredLatPos,int direction,int currentSpeed, int rotation1024)
{
  (carObj->speechInfo).playerCarIndex = desiredLatPos;
  (carObj->speechInfo).speechSource = direction;
  (carObj->speechInfo).speechIntensity = direction;
  (carObj->N).simRoadInfo.slice = (short)slice;
  carObj->carInLane = currentSpeed;
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
  local_18.x = (carObj->speechInfo).playerCarIndex;
  local_18.y = 0x10000;
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)carObj,(int)(carObj->N).simRoadInfo.slice,&local_18,
             (carObj->speechInfo).speechSource);
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
  int local_50;
  int local_4c;
  int local_48;
  matrixtdef mStack64;
  
  iVar2 = (carObj->speechInfo).playerCarIndex;
  iVar3 = carObj->carInLane;
  (carObj->N).active = '\x01';
  carObj->aCarWRTRoad = iVar2;
  (carObj->speechInfo).copCarIndex = iVar3;
  AIPhysic_ResetCar__FP8Car_tObj(carObj);
  if (stackSpeedUpEnbabledFlag == 0) {
    AILife_SetInitialSlicePositionOrientationEtc__FP8Car_tObj(carObj);
  }
  else {
    gWSavePtr = SetSp(gWSavePtr);
    stackSpeedUpEnbabledFlag = 0;
    AILife_SetInitialSlicePositionOrientationEtc__FP8Car_tObj(carObj);
    gWSavePtr = SetSp(gWSavePtr);
    stackSpeedUpEnbabledFlag = 1;
  }
  if (carObj->carInLane == 0) {
    memset(&local_50,0,0xc);
  }
  else {
    local_50 = (carObj->N).orientMat.m[6];
    local_4c = (carObj->N).orientMat.m[7];
    local_48 = (carObj->N).orientMat.m[8];
    iVar2 = carObj->carInLane;
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
  xformy(&mStack64,rotation1024);
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
  carObj->aCarWRTRoad = iVar2;
  (carObj->speechInfo).playerCarIndex = iVar2;
  carObj->desiredSpeed = iVar2;
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
  uint uVar1;
  uint uVar2;
  
  randtemp = fastRandom;
  uVar2 = fastRandom & 0xffff;
  uVar1 = fastRandom >> 8;
  fastRandom = uVar2;
  if ((carObj->carFlags & 0x10U) != 0) {
    fastRandom = uVar2;
    R3DCar_ChangeTrafficColor__FP8Car_tObji(carObj,(uVar1 & 0xffff) * 3 >> 0x10);
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

void AILife_ReencarnateTrafficByPosition__FP8Car_tObjiiP8coorddefP10matrixtdef( (Car_tObj *carObj,int slice,int travelDirection,coorddef *pos,matrixtdef *ori)
{
  short sVar1;
  int *piVar2;
  uint uVar3;
  matrixtdef *pmVar4;
  uint uVar5;
  matrixtdef *pmVar6;
  speechSourceType direction;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_40;
  int local_3c;
  int local_38;
  coorddef cStack48;
  
  memset(&local_40,0,0xc);
  memset(&cStack48,0,0xc);
  randtemp = fastRandom;
  uVar5 = fastRandom & 0xffff;
  uVar3 = fastRandom >> 8;
  fastRandom = uVar5;
  if ((carObj->carFlags & 0x10U) != 0) {
    fastRandom = uVar5;
    R3DCar_ChangeTrafficColor__FP8Car_tObji(carObj,(uVar3 & 0xffff) * 3 >> 0x10);
  }
  AI_ChooseNewLaneSlack__FP8Car_tObj(carObj);
  AISpeeds_SetTrafficSpeedRandomFactor__FP8Car_tObj(carObj);
  carObj->originalDesiredSpeed = 0;
  (carObj->speechInfo).speechSource = travelDirection;
  (carObj->speechInfo).speechIntensity = travelDirection;
  (carObj->N).simRoadInfo.slice = (short)slice;
  AILife_RCSetSpeeds__FP8Car_tObj(carObj);
  sVar1 = (carObj->N).simRoadInfo.slice;
  direction = (carObj->speechInfo).speechSource;
  carObj->carInLane = 0;
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)carObj,(int)sVar1,&cStack48,direction);
  pmVar6 = &(carObj->N).orientMat;
  iVar7 = pos->y;
  iVar8 = pos->z;
  (carObj->N).position.x = pos->x;
  (carObj->N).position.y = iVar7;
  (carObj->N).position.z = iVar8;
  pmVar4 = ori;
  do {
    iVar7 = pmVar4->m[1];
    iVar8 = pmVar4->m[2];
    iVar9 = pmVar4->m[3];
    pmVar6->m[0] = pmVar4->m[0];
    pmVar6->m[1] = iVar7;
    pmVar6->m[2] = iVar8;
    pmVar6->m[3] = iVar9;
    pmVar4 = (matrixtdef *)(pmVar4->m + 4);
    pmVar6 = (matrixtdef *)(pmVar6->m + 4);
  } while (pmVar4 != (matrixtdef *)(ori->m + 8));
  pmVar6->m[0] = pmVar4->m[0];
  pmVar4 = &(carObj->N).shadowMat;
  piVar2 = ori->m;
  do {
    iVar7 = ori->m[1];
    iVar8 = ori->m[2];
    iVar9 = ori->m[3];
    pmVar4->m[0] = ori->m[0];
    pmVar4->m[1] = iVar7;
    pmVar4->m[2] = iVar8;
    pmVar4->m[3] = iVar9;
    ori = (matrixtdef *)(ori->m + 4);
    pmVar4 = (matrixtdef *)(pmVar4->m + 4);
  } while (ori != (matrixtdef *)(piVar2 + 8));
  pmVar4->m[0] = ori->m[0];
  (carObj->N).linearVel.x = local_40;
  (carObj->N).linearVel.y = local_3c;
  (carObj->N).linearVel.z = local_38;
  (carObj->N).speedXZ = 0;
  AIInit_ClearAICar__FP8Car_tObj(carObj);
  iVar7 = Cars_CalculateRoadPosition__FP8Car_tObj(carObj);
  carObj->aCarWRTRoad = iVar7;
  (carObj->speechInfo).playerCarIndex = iVar7;
  carObj->desiredSpeed = iVar7;
  iVar7 = Cars_CalculateRoadSpan__FP8Car_tObj(carObj);
  carObj->roadSpan = iVar7;
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

void AILife_ReencarnateCopBySlice__FP8Car_tObjiiii( (Car_tObj *carObj,int slice,int travelDirection,int roadSide,int moving)
{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  (carObj->N).simRoadInfo.slice = (short)slice;
  if ((false) && (travelDirection = ~SPEECH_INTENSITY_LOW, true)) {
    travelDirection = SPEECH_INTENSITY_MED;
  }
  (carObj->speechInfo).speechSource = travelDirection;
  (carObj->speechInfo).speechIntensity = travelDirection;
  if (moving == 0) {
    if (roadSide == -1) {
      iVar2 = -0x20000 -
              (uint)*(byte *)(slice * 0x20 + 0x1e) * 0x8000 *
              (uint)(*(byte *)(slice * 0x20 + 0x1d) >> 4);
      goto LAB_800682dc;
    }
    iVar2 = (uint)*(byte *)(slice * 0x20 + 0x1f) * 0x8000 *
            ((uint)*(byte *)(slice * 0x20 + 0x1d) & 0xf);
    uVar3 = 0x20000;
LAB_800682d4:
    iVar2 = iVar2 + uVar3;
  }
  else {
    if ((carObj->speechInfo).speechSource != SPEECH_SOURCE_SUPER_COP) {
      bVar1 = *(byte *)(slice * 0x20 + 0x1d) >> 4;
      if (bVar1 != 0) {
        uVar3 = (uint)*(byte *)(slice * 0x20 + 0x1e);
        iVar2 = uVar3 * -0x8000 * (uint)bVar1;
        uVar3 = uVar3 * 0x8000 >> 1;
        goto LAB_800682d4;
      }
    }
    uVar3 = (uint)*(byte *)(slice * 0x20 + 0x1f) * 0x8000;
    iVar2 = uVar3 * ((uint)*(byte *)(slice * 0x20 + 0x1d) & 0xf) - (uVar3 >> 1);
  }
LAB_800682dc:
  (carObj->speechInfo).playerCarIndex = iVar2;
  if (moving == 0) {
    (carObj->speechInfo).copCarIndex = 0;
    carObj->carInLane = 0;
  }
  else {
    AILife_RCSetSpeeds__FP8Car_tObj(carObj);
  }
  iVar2 = (carObj->speechInfo).playerCarIndex;
  carObj->aCarWRTRoad = iVar2;
  carObj->desiredSpeed = iVar2;
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

void AILife_ReencarnateCopByPosition__FP8Car_tObjiiP8coorddefP10matrixtdef( (Car_tObj *carObj,int slice,int travelDirection,coorddef *pos,matrixtdef *ori)
{
  int *piVar1;
  matrixtdef *pmVar2;
  matrixtdef *pmVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_38;
  int local_34;
  int local_30;
  coorddef cStack40;
  
  memset(&local_38,0,0xc);
  memset(&cStack40,0,0xc);
  (carObj->N).simRoadInfo.slice = (short)slice;
  if ((false) && (travelDirection = ~SPEECH_INTENSITY_LOW, true)) {
    travelDirection = SPEECH_INTENSITY_MED;
  }
  (carObj->speechInfo).speechSource = travelDirection;
  (carObj->speechInfo).speechIntensity = travelDirection;
  (carObj->speechInfo).copCarIndex = 0;
  carObj->carInLane = 0;
  AIPhysic_ResetCar__FP8Car_tObj(carObj);
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)carObj,(int)(carObj->N).simRoadInfo.slice,&cStack40,
             (carObj->speechInfo).speechSource);
  pmVar3 = &(carObj->N).orientMat;
  iVar4 = pos->y;
  iVar5 = pos->z;
  (carObj->N).position.x = pos->x;
  (carObj->N).position.y = iVar4;
  (carObj->N).position.z = iVar5;
  pmVar2 = ori;
  do {
    iVar4 = pmVar2->m[1];
    iVar5 = pmVar2->m[2];
    iVar6 = pmVar2->m[3];
    pmVar3->m[0] = pmVar2->m[0];
    pmVar3->m[1] = iVar4;
    pmVar3->m[2] = iVar5;
    pmVar3->m[3] = iVar6;
    pmVar2 = (matrixtdef *)(pmVar2->m + 4);
    pmVar3 = (matrixtdef *)(pmVar3->m + 4);
  } while (pmVar2 != (matrixtdef *)(ori->m + 8));
  pmVar3->m[0] = pmVar2->m[0];
  pmVar2 = &(carObj->N).shadowMat;
  piVar1 = ori->m;
  do {
    iVar4 = ori->m[1];
    iVar5 = ori->m[2];
    iVar6 = ori->m[3];
    pmVar2->m[0] = ori->m[0];
    pmVar2->m[1] = iVar4;
    pmVar2->m[2] = iVar5;
    pmVar2->m[3] = iVar6;
    ori = (matrixtdef *)(ori->m + 4);
    pmVar2 = (matrixtdef *)(pmVar2->m + 4);
  } while (ori != (matrixtdef *)(piVar1 + 8));
  pmVar2->m[0] = ori->m[0];
  (carObj->N).linearVel.x = local_38;
  (carObj->N).linearVel.y = local_34;
  (carObj->N).linearVel.z = local_30;
  AIInit_ClearAICar__FP8Car_tObj(carObj);
  iVar4 = Cars_CalculateRoadPosition__FP8Car_tObj(carObj);
  carObj->aCarWRTRoad = iVar4;
  (carObj->speechInfo).playerCarIndex = iVar4;
  carObj->desiredSpeed = iVar4;
  iVar4 = Cars_CalculateRoadSpan__FP8Car_tObj(carObj);
  carObj->roadSpan = iVar4;
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

void AILife_ReencarnateCopByLatPosAndRotation__FP8Car_tObjiiii( (Car_tObj *carObj,int slice,int travelDirection,int latPos,int rotation1024)
{
  matrixtdef *pmVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  matrixtdef *m1;
  int local_60;
  int local_5c;
  int local_58;
  coorddef local_50;
  matrixtdef mStack64;
  
  memset(&local_60,0,0xc);
  memset(&local_50,0,0xc);
  (carObj->N).active = '\x01';
  (carObj->N).simRoadInfo.slice = (short)slice;
  if ((false) && (travelDirection = ~SPEECH_INTENSITY_LOW, true)) {
    travelDirection = SPEECH_INTENSITY_MED;
  }
  (carObj->speechInfo).speechSource = travelDirection;
  (carObj->speechInfo).speechIntensity = travelDirection;
  (carObj->speechInfo).copCarIndex = 0;
  carObj->carInLane = 0;
  AIPhysic_ResetCar__FP8Car_tObj(carObj);
  local_50.x = latPos * (carObj->speechInfo).speechSource;
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)carObj,(int)(carObj->N).simRoadInfo.slice,&local_50,
             (carObj->speechInfo).speechSource);
  xformy(&mStack64,rotation1024);
  m1 = &(carObj->N).orientMat;
  Math_fasttransmult__FP10matrixtdefN20(m1,&mStack64,m1);
  pmVar1 = &(carObj->N).shadowMat;
  do {
    iVar3 = m1->m[1];
    iVar4 = m1->m[2];
    iVar2 = m1->m[3];
    pmVar1->m[0] = m1->m[0];
    pmVar1->m[1] = iVar3;
    pmVar1->m[2] = iVar4;
    pmVar1->m[3] = iVar2;
    m1 = (matrixtdef *)(m1->m + 4);
    pmVar1 = (matrixtdef *)(pmVar1->m + 4);
  } while (m1 != (matrixtdef *)((carObj->N).orientMat.m + 8));
  pmVar1->m[0] = m1->m[0];
  (carObj->N).linearVel.x = local_60;
  (carObj->N).linearVel.y = local_5c;
  (carObj->N).linearVel.z = local_58;
  AIInit_ClearAICar__FP8Car_tObj(carObj);
  iVar2 = Cars_CalculateRoadPosition__FP8Car_tObj(carObj);
  carObj->aCarWRTRoad = iVar2;
  (carObj->speechInfo).playerCarIndex = iVar2;
  carObj->desiredSpeed = iVar2;
  iVar2 = Cars_CalculateRoadSpan__FP8Car_tObj(carObj);
  carObj->roadSpan = iVar2;
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
    AILife_Debug__FPce("dist=%d");
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
    ppCVar2 = (Car_tObj **)&_Cars_gLifeBasisCarList;
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
  ppCVar2 = (Car_tObj **)&_Cars_gHumanRaceCarList;
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
  ppCVar2 = (Car_tObj **)&_Cars_gCopCarList;
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
    ppCVar2 = (Car_tObj **)&_Cars_gHumanRaceCarList;
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





