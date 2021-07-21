#include "THISDUST.H"
#include "CARS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Cars_DoGravityEffectsOnAcc__FP8Car_tObji(struct Car_tObj *carObj /*$s0*/, int arcade /*$a1*/)
 // line 374, offset 0x80085d84
	/* begin block 1 */
		// Start line: 375
		// Start offset: 0x80085D84
		// Variables:
	// 		struct coorddef gravity_ch; // stack offset -24
	/* end block 1 */
	// End offset: 0x80085EB4
	// End Line: 415

	/* begin block 2 */
		// Start line: 735
	/* end block 2 */
	// End Line: 736

	/* begin block 3 */
		// Start line: 739
	/* end block 3 */
	// End Line: 740

	/* begin block 4 */
		// Start line: 744
	/* end block 4 */
	// End Line: 745

	/* begin block 5 */
		// Start line: 744
	/* end block 5 */
	// End Line: 745

void Cars_DoGravityEffectsOnAcc__FP8Car_tObji(Car_tObj *carObj,int arcade)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((carObj->carFlags & 0x10U) != 0) {
    return;
  }
  uVar1 = fixedmult(0x10000,(carObj->N).orientMat.m[4]);
  if ((int)uVar1 < 0xb5c2) {
    uVar1 = fixedmult(-0xa0000,(carObj->N).orientMat.m[1]);
    uVar2 = fixedmult(-0xa0000,(carObj->N).orientMat.m[4]);
    uVar3 = fixedmult(-0xa0000,(carObj->N).orientMat.m[7]);
    (carObj->linearAcc_ch).x = (carObj->linearAcc_ch).x + uVar1;
    (carObj->linearAcc_ch).y = (carObj->linearAcc_ch).y + uVar2;
    iVar4 = (carObj->linearAcc_ch).z + uVar3;
  }
  else {
    if (0x3f < (byte)(carObj->control).brakeLevel) {
      return;
    }
    uVar1 = fixedmult(-0xa0000,(carObj->N).orientMat.m[7]);
    uVar2 = fixedmult(uVar1,(carObj->N).gravityMult);
    uVar1 = uVar2;
    if ((int)uVar2 < 0) {
      uVar1 = -uVar2;
    }
    if ((int)uVar1 < 0xccd) {
      return;
    }
    if ((int)uVar2 < 1) {
      iVar4 = (carObj->linearAcc_ch).z;
      iVar5 = (int)uVar2 >> 3;
      if (iVar4 < 1) {
        iVar5 = (int)uVar2 >> 1;
      }
    }
    else {
      iVar4 = (carObj->linearAcc_ch).z;
      iVar5 = (int)uVar2 >> 1;
      if (iVar4 < 1) {
        iVar5 = (int)uVar2 >> 3;
      }
    }
    iVar4 = iVar4 + iVar5;
  }
  (carObj->linearAcc_ch).z = iVar4;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_GetDashData__FP8Car_tObjPiN21(struct Car_tObj *carObj /*$a0*/, int *rpm /*$a1*/, int *gear /*$a2*/, int *speed /*$a3*/)
 // line 422, offset 0x80085ec4
	/* begin block 1 */
		// Start line: 423
		// Start offset: 0x80085EC4
	/* end block 1 */
	// End offset: 0x80085EC4
	// End Line: 424

	/* begin block 2 */
		// Start line: 836
	/* end block 2 */
	// End Line: 837

	/* begin block 3 */
		// Start line: 840
	/* end block 3 */
	// End Line: 841

	/* begin block 4 */
		// Start line: 840
	/* end block 4 */
	// End Line: 841

	/* begin block 5 */
		// Start line: 841
	/* end block 5 */
	// End Line: 842

	/* begin block 6 */
		// Start line: 841
	/* end block 6 */
	// End Line: 842

void Cars_GetDashData__FP8Car_tObjPiN21(Car_tObj *carObj,int *rpm,int *gear,int *speed)

{
  *rpm = carObj->flywheelRpm;
  *gear = (uint)(byte)(carObj->control).gear;
  *speed = (carObj->linearVel_ch).z;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_QDUpdateVelGlue__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 430, offset 0x80085ee8
	/* begin block 1 */
		// Start line: 431
		// Start offset: 0x80085EE8
		// Variables:
	// 		int glue; // $a2
	/* end block 1 */
	// End offset: 0x80085F48
	// End Line: 438

	/* begin block 2 */
		// Start line: 851
	/* end block 2 */
	// End Line: 852

	/* begin block 3 */
		// Start line: 856
	/* end block 3 */
	// End Line: 857

	/* begin block 4 */
		// Start line: 856
	/* end block 4 */
	// End Line: 857

	/* begin block 5 */
		// Start line: 861
	/* end block 5 */
	// End Line: 862

void Cars_QDUpdateVelGlue__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (carObj->N).linearVel.x;
  iVar4 = carObj->glue;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar3 = (carObj->N).linearVel.z;
  iVar2 = (carObj->N).position.x;
  (carObj->N).position.y = (carObj->N).position.y + ((carObj->N).linearVel.y >> 6);
  (carObj->N).position.x = iVar2 + ((iVar1 >> 8) * (iVar4 >> 8) >> 6);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  (carObj->N).position.z = (carObj->N).position.z + ((iVar3 >> 8) * (iVar4 >> 8) >> 6);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_InitDashData__FP8Car_tObjPiT1(struct Car_tObj *carObj /*$a0*/, int *redline /*$a1*/, int *topspeed /*$a2*/)
 // line 473, offset 0x80085f64
	/* begin block 1 */
		// Start line: 474
		// Start offset: 0x80085F64
	/* end block 1 */
	// End offset: 0x80085F64
	// End Line: 475

	/* begin block 2 */
		// Start line: 910
	/* end block 2 */
	// End Line: 911

	/* begin block 3 */
		// Start line: 946
	/* end block 3 */
	// End Line: 947

	/* begin block 4 */
		// Start line: 946
	/* end block 4 */
	// End Line: 947

	/* begin block 5 */
		// Start line: 947
	/* end block 5 */
	// End Line: 948

	/* begin block 6 */
		// Start line: 947
	/* end block 6 */
	// End Line: 948

void Cars_InitDashData__FP8Car_tObjPiT1(Car_tObj *carObj,int *redline,int *topspeed)

{
  *redline = carObj->specs->redline;
  *topspeed = carObj->specs->maxSpeed;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_SetAudioCalls__FP8Car_tObjiiiiii(struct Car_tObj *carObj /*$a0*/, int type /*$a1*/, int chan /*$a2*/, int s1 /*$a3*/, int s2 /*stack 16*/, int force /*stack 20*/, int pan /*stack 24*/)
 // line 479, offset 0x80085f8c
	/* begin block 1 */
		// Start line: 480
		// Start offset: 0x80085F8C
	/* end block 1 */
	// End offset: 0x80085F8C
	// End Line: 482

	/* begin block 2 */
		// Start line: 954
	/* end block 2 */
	// End Line: 955

	/* begin block 3 */
		// Start line: 958
	/* end block 3 */
	// End Line: 959

	/* begin block 4 */
		// Start line: 958
	/* end block 4 */
	// End Line: 959

	/* begin block 5 */
		// Start line: 960
	/* end block 5 */
	// End Line: 961

void Cars_SetAudioCalls__FP8Car_tObjiiiiii
               (Car_tObj *carObj,int type,int chan,int s1,int s2,int force,int pan)

{
  *(int *)(&carObj->fallBehindCar + carObj->gripFactor * 6) = type;
  *(int *)(&carObj->nextAIRacer + carObj->gripFactor * 6) = chan;
  (&carObj->caravanFollowBehindDistanceMeters)[carObj->gripFactor * 6] = s1;
  (&carObj->caravanTimer)[carObj->gripFactor * 6] = s2;
  (&carObj->AISlot)[carObj->gripFactor * 6] = force;
  (&carObj->damageMult)[carObj->gripFactor * 6] = pan;
  carObj->gripFactor = carObj->gripFactor + 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_ResetCarCounters__Fv()
 // line 492, offset 0x80086054
	/* begin block 1 */
		// Start line: 493
		// Start offset: 0x80086054
	/* end block 1 */
	// End offset: 0x80086054
	// End Line: 494

	/* begin block 2 */
		// Start line: 997
	/* end block 2 */
	// End Line: 998

	/* begin block 3 */
		// Start line: 1002
	/* end block 3 */
	// End Line: 1003

	/* begin block 4 */
		// Start line: 1002
	/* end block 4 */
	// End Line: 1003

	/* begin block 5 */
		// Start line: 1003
	/* end block 5 */
	// End Line: 1004

	/* begin block 6 */
		// Start line: 1003
	/* end block 6 */
	// End Line: 1004

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Cars_ResetCarCounters__Fv(void)

{
  Cars_gNumCars = 0;
  Cars_gNumRaceCars = 0;
  Cars_gNumAICars = 0;
  Cars_gNumHumanRaceCars = 0;
  Cars_gNumAIRaceCars = 0;
  Cars_gNumTrafficCars = 0;
  Cars_gNumCopCars = 0;
  Cars_gNumLifeBasisCars = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_InitStats__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 505, offset 0x8008607c
	/* begin block 1 */
		// Start line: 506
		// Start offset: 0x8008607C
		// Variables:
	// 		struct Car_tStats *stats; // $a0
	// 		int lapLoop; // $a1
	/* end block 1 */
	// End offset: 0x800860BC
	// End Line: 525

	/* begin block 2 */
		// Start line: 1024
	/* end block 2 */
	// End Line: 1025

	/* begin block 3 */
		// Start line: 1028
	/* end block 3 */
	// End Line: 1029

	/* begin block 4 */
		// Start line: 1028
	/* end block 4 */
	// End Line: 1029

	/* begin block 5 */
		// Start line: 1041
	/* end block 5 */
	// End Line: 1042

void Cars_InitStats__FP8Car_tObj(Car_tObj *carObj)

{
  Car_tStats *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = &carObj->stats;
  (carObj->stats).sliceTotal = 0;
  (carObj->stats).sliceTime = 0;
  (carObj->stats).slice = 0;
  (carObj->stats).lastSlice = 0;
  (carObj->stats).lap = 0;
  (carObj->stats).lapTime = 0x200;
  do {
    pCVar1->time[0] = 0;
    pCVar1->topSpeed[0] = 0;
    iVar2 = iVar2 + 1;
    pCVar1 = (Car_tStats *)&pCVar1->sliceTotal;
  } while (iVar2 < 4);
  (carObj->stats).position = 0;
  (carObj->stats).fatalCrashes = 0;
  (carObj->stats).finishType = 0;
  (carObj->stats).checkpointUpdate = 0;
  (carObj->stats).checkpointDifference = 0;
  (carObj->stats).checkpointDisplay = 0;
  (carObj->stats).numWarnings = 0;
  (carObj->stats).numFines = 0;
  (carObj->stats).numArrests = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_InitializeCarTablesFlagsAndCounters__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 538, offset 0x800860e4
	/* begin block 1 */
		// Start line: 539
		// Start offset: 0x800860E4
		// Variables:
	// 		int carClass; // $s3

		/* begin block 1.1 */
			// Start line: 594
			// Start offset: 0x800862FC

			/* begin block 1.1.1 */
				// Start line: 595
				// Start offset: 0x80086308
				// Variables:
			// 		int personality; // $s2
			/* end block 1.1.1 */
			// End offset: 0x80086510
			// End Line: 624
		/* end block 1.1 */
		// End offset: 0x80086510
		// End Line: 624
	/* end block 1 */
	// End offset: 0x800865E0
	// End Line: 652

	/* begin block 2 */
		// Start line: 1106
	/* end block 2 */
	// End Line: 1107

	/* begin block 3 */
		// Start line: 1110
	/* end block 3 */
	// End Line: 1111

	/* begin block 4 */
		// Start line: 1110
	/* end block 4 */
	// End Line: 1111

void Cars_InitializeCarTablesFlagsAndCounters__FP8Car_tObj(Car_tObj *carObj)

{
  char *__src;
  void *pvVar1;
  Car_tObj **ppCVar2;
  uint uVar3;
  int iVar4;
  GameSetup_tCarData *pGVar5;
  uint uVar6;
  
  uVar6 = carObj->carInfo->carClass;
  (&Cars_gList9)[Cars_gNumCars] = carObj;
  (&Cars_gSortedList9)[Cars_gNumCars] = carObj;
  (&Cars_gTotalSortedList9)[Cars_gNumCars] = carObj;
  carObj->carIndex = Cars_gNumCars;
  Cars_gNumCars = Cars_gNumCars + 1;
  carObj->carFlags = 0;
  carObj->humanIndex = -1;
  strcpy(carObj->carName,GameSetup_gCarNames + carObj->carInfo->carType * 5);
  iVar4 = carObj->carInfo->carType;
  if (iVar4 < 0x1d) {
    __src = TextSys_Word__Fi(iVar4 + 0x4e);
    strcpy(carObj->carNameLocalized,__src);
  }
  else {
    sprintf(carObj->carNameLocalized,&DAT_8013c7e0);
  }
  if ((uVar6 & 1) == 0) goto LAB_80086300;
  pvVar1 = PlayerNameExist__Fi(Cars_gNumHumanRaceCars);
  if (pvVar1 == (void *)0x0) {
    if (frontEnd.gameMode != '\x01') {
      __src = TextSys_Word__Fi(0x2e);
      goto LAB_80086234;
    }
    __src = TextSys_Word__Fi(0x2f);
    sprintf(carObj->carInfo->driver,__src,Cars_gNumHumanRaceCars + 1);
  }
  else {
    __src = PlayerNameMixedCase__Fi(Cars_gNumHumanRaceCars);
LAB_80086234:
    sprintf(carObj->carInfo->driver,__src);
  }
  strcpy(carObj->carInfo->license,frontEnd.licensePlate + Cars_gNumHumanRaceCars * 8);
  ppCVar2 = &Cars_gHumanRaceCarList9 + Cars_gNumHumanRaceCars;
  carObj->humanIndex = Cars_gNumHumanRaceCars;
  Cars_gNumHumanRaceCars = Cars_gNumHumanRaceCars + 1;
  *ppCVar2 = carObj;
  carObj->carFlags = carObj->carFlags | 4;
  ppCVar2 = &Cars_gRaceCarList9 + Cars_gNumRaceCars;
  Cars_gNumRaceCars = Cars_gNumRaceCars + 1;
  *ppCVar2 = carObj;
  carObj->carFlags = carObj->carFlags | 1;
  (&Cars_gLifeBasisCarList9)[Cars_gNumLifeBasisCars] = carObj;
  uVar3 = carObj->carFlags;
  Cars_gNumLifeBasisCars = Cars_gNumLifeBasisCars + 1;
  carObj->carFlags = uVar3 | 0x100;
  if ((uVar6 & 0x40) != 0) {
    carObj->carFlags = uVar3 | 0x300;
  }
LAB_80086300:
  if ((uVar6 & 2) != 0) {
    iVar4 = GameSetup_gData.carInfo[carObj->carIndex].Personality;
    strcpy(carObj->carInfo->driver,GameSetup_gPersonalityNames + iVar4 * 8);
    if (((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
       (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
        ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0)))))) {
      __src = TextSys_Word__Fi(0x32);
      pGVar5 = carObj->carInfo;
    }
    else {
      pGVar5 = carObj->carInfo;
      __src = GameSetup_gPersonalityNames + iVar4 * 8;
    }
    strcpy(pGVar5->license,__src);
    s_lower__FPc(carObj->carInfo->license);
    Cars_gAICarList9[Cars_gNumAICars] = carObj;
    Cars_gNumAICars = Cars_gNumAICars + 1;
    carObj->carFlags = carObj->carFlags | 2;
    Cars_gAIRaceCarList9[Cars_gNumAIRaceCars] = carObj;
    Cars_gNumAIRaceCars = Cars_gNumAIRaceCars + 1;
    carObj->carFlags = carObj->carFlags | 8;
    (&Cars_gRaceCarList9)[Cars_gNumRaceCars] = carObj;
    carObj->carFlags = carObj->carFlags | 1;
    Cars_gNumRaceCars = Cars_gNumRaceCars + 1;
    if ((GameSetup_gData.cops != 0) &&
       (((GameSetup_gData.raceType != 1 && (GameSetup_gData.raceType != 5)) ||
        (((Cars_gHumanRaceCarList9->carFlags & 0x200U) == 0 &&
         ((Cars_gNumHumanRaceCars != 2 || ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) == 0)))))))) {
      (&Cars_gLifeBasisCarList9)[Cars_gNumLifeBasisCars] = carObj;
      Cars_gNumLifeBasisCars = Cars_gNumLifeBasisCars + 1;
      carObj->carFlags = carObj->carFlags | 0x100;
    }
  }
  if ((uVar6 & 4) != 0) {
    ppCVar2 = Cars_gAICarList9 + Cars_gNumAICars;
    Cars_gNumAICars = Cars_gNumAICars + 1;
    *ppCVar2 = carObj;
    carObj->carFlags = carObj->carFlags | 2;
    (&Cars_gTrafficCarList9)[Cars_gNumTrafficCars] = carObj;
    Cars_gNumTrafficCars = Cars_gNumTrafficCars + 1;
    carObj->carFlags = carObj->carFlags | 0x10;
  }
  if ((uVar6 & 0x18) != 0) {
    ppCVar2 = Cars_gAICarList9 + Cars_gNumAICars;
    Cars_gNumAICars = Cars_gNumAICars + 1;
    *ppCVar2 = carObj;
    carObj->carFlags = carObj->carFlags | 2;
    (&Cars_gCopCarList9)[Cars_gNumCopCars] = carObj;
    uVar3 = carObj->carFlags;
    Cars_gNumCopCars = Cars_gNumCopCars + 1;
    carObj->carFlags = uVar3 | 0x20;
    if ((uVar6 & 0x10) != 0) {
      carObj->carFlags = uVar3 | 0x60;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_ResetVariablesAfterACollision__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 678, offset 0x800865fc
	/* begin block 1 */
		// Start line: 679
		// Start offset: 0x800865FC
	/* end block 1 */
	// End offset: 0x800865FC
	// End Line: 679

	/* begin block 2 */
		// Start line: 1474
	/* end block 2 */
	// End Line: 1475

	/* begin block 3 */
		// Start line: 1501
	/* end block 3 */
	// End Line: 1502

	/* begin block 4 */
		// Start line: 1501
	/* end block 4 */
	// End Line: 1502

void Cars_ResetVariablesAfterACollision__FP8Car_tObj(Car_tObj *carObj)

{
  (carObj->N).angularVel.x = 0;
  (carObj->N).angularVel.y = 0;
  (carObj->N).angularVel.z = 0;
  (carObj->angularVel_ch).x = 0;
  (carObj->angularVel_ch).y = 0;
  (carObj->angularVel_ch).z = 0;
  (carObj->linearAcc_ch).x = 0;
  (carObj->linearAcc_ch).y = 0;
  (carObj->linearAcc_ch).z = 0;
  (carObj->N).flightTime = 0;
  (carObj->N).collision.collided = 0;
  (carObj->N).collision.lastCollision = 0;
  (carObj->N).collision.impulse = 0;
  (carObj->N).collision.otherObj = (BO_tNewtonObj *)0x0;
  (carObj->N).collision.disableCollisionTimer = 0;
  (carObj->N).groundVel = 0;
  (carObj->N).speedXZ = 0;
  carObj->lookAheadSlice = 0;
  (carObj->N).roadGravityModifier = 0;
  Physics_ResetCar__FP8Car_tObj(carObj);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_ResetCollidedCars__FP8Car_tObjii(struct Car_tObj *carObj /*$s2*/, int forceReset /*$s1*/, int forceParkAtSide /*$a2*/)
 // line 713, offset 0x80086664
	/* begin block 1 */
		// Start line: 714
		// Start offset: 0x80086664
		// Variables:
	// 		int y; // $v1
	// 		int newSlice; // $s0
	// 		struct coorddef offset; // stack offset -40
	// 		int resetCounter; // $s1
	// 		int direction; // $s3

		/* begin block 1.1 */
			// Start line: 775
			// Start offset: 0x80086908
			// Variables:
		// 		int side; // $s4

			/* begin block 1.1.1 */
				// Start line: 776
				// Start offset: 0x80086908
				// Variables:
			// 		int side; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80086A14
			// End Line: 815
		/* end block 1.1 */
		// End offset: 0x80086A90
		// End Line: 815
	/* end block 1 */
	// End offset: 0x80086AA4
	// End Line: 827

	/* begin block 2 */
		// Start line: 1560
	/* end block 2 */
	// End Line: 1561

	/* begin block 3 */
		// Start line: 1571
	/* end block 3 */
	// End Line: 1572

	/* begin block 4 */
		// Start line: 1571
	/* end block 4 */
	// End Line: 1572

void Cars_ResetCollidedCars__FP8Car_tObjii(Car_tObj *carObj,int forceReset,int forceParkAtSide)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int slice;
  int iVar4;
  uint uVar5;
  int iVar6;
  int direction;
  coorddef local_28;
  
  memset(&local_28,0,0xc);
  direction = (carObj->script).lastReactionIndex[2];
  carObj->lookAheadSlice = 0;
  if (carObj->blowout != 0) {
LAB_800867d0:
    carObj->lookAheadSlice = 0;
    return;
  }
  if (forceReset == 0) {
    slice = (carObj->N).roadMatrix.m[3];
    if (slice < 0) {
      slice = slice + 0xff;
    }
    iVar1 = (carObj->N).orientMat.m[3];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar4 = (carObj->N).roadMatrix.m[4];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar2 = (carObj->N).orientMat.m[4];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar6 = (carObj->N).roadMatrix.m[5];
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar3 = (carObj->N).orientMat.m[5];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    if ((((0xc000 < (slice >> 8) * (iVar1 >> 8) + (iVar4 >> 8) * (iVar2 >> 8) +
                    (iVar6 >> 8) * (iVar3 >> 8)) && ((carObj->N).angularVel.x < 0x10000)) &&
        ((carObj->N).angularVel.z < 0x10000)) &&
       (((slice = (carObj->N).driveSurfaceType, slice != 0xe && (slice != 0)) &&
        (((carObj->N).simRoadInfo.simQuad != (Trk_NewSimQuad *)0x0 &&
         (((carObj->N).flightTime < 6 && ((carObj->N).objAltitude < 0x10000))))))))
    goto LAB_800867d0;
  }
  slice = (int)(carObj->N).simRoadInfo.slice + direction * 4;
  if (direction * 4 < 0) {
    if (slice < 0) {
      slice = slice + gNumSlices;
    }
  }
  else {
    if (gNumSlices <= slice) {
      slice = slice - gNumSlices;
    }
  }
  if (forceReset == 2) {
    slice = (int)(carObj->N).simRoadInfo.slice;
  }
  iVar1 = accidentSlice + 5;
  if (0 < accidentSlice) {
    if (gNumSlices <= iVar1) {
      iVar1 = accidentSlice - (gNumSlices + -5);
    }
    if (slice < iVar1) {
      iVar1 = accidentSlice + -5;
      if (iVar1 < 0) {
        iVar1 = accidentSlice + gNumSlices + -5;
      }
      if (iVar1 < slice) {
        slice = slice + direction * 5;
        if (direction * 5 < 0) {
          iVar1 = gNumSlices;
          if (-1 < slice) goto LAB_80086908;
        }
        else {
          if (slice < gNumSlices) goto LAB_80086908;
          iVar1 = -gNumSlices;
        }
        slice = slice + iVar1;
      }
    }
  }
LAB_80086908:
  uVar5 = carObj->carIndex;
  uVar5 = (uint)(((int)(uVar5 + (uVar5 >> 0x1f)) >> 1) << 1 != uVar5);
  if (direction == -1) {
    uVar5 = 1 - uVar5;
  }
  if (AITune_driveSide == -1) {
    uVar5 = 1 - uVar5;
  }
  if (uVar5 == 0) {
    iVar1 = (carObj->N).dimension.x;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    local_28.x = (uint)BWorldSm_slices[slice].avgPavedWidthRt * 0x8000 *
                 ((uint)BWorldSm_slices[slice].laneCount & 0xf) + (iVar1 >> 8) * -0x180;
  }
  else {
    iVar1 = (carObj->N).dimension.x;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    local_28.x = (iVar1 >> 8) * 0x180 -
                 (uint)BWorldSm_slices[slice].avgPavedWidthLf * 0x8000 *
                 (uint)(BWorldSm_slices[slice].laneCount >> 4);
  }
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)carObj,slice,&local_28,direction);
  iVar1 = (carObj->N).driveSurfaceType;
  iVar4 = 0;
  while( true ) {
    if (((iVar1 != 0) && (iVar1 != 0xe)) &&
       ((carObj->N).simRoadInfo.simQuad != (Trk_NewSimQuad *)0x0)) goto LAB_80086a94;
    iVar4 = iVar4 + 1;
    Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
              ((BO_tNewtonObj *)carObj,slice,&local_28,direction);
    if (0x28 < iVar4) break;
    iVar1 = (carObj->N).driveSurfaceType;
  }
  local_28.x = 0;
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)carObj,slice,&local_28,direction);
LAB_80086a94:
  (carObj->N).linearVel.z = 0;
  (carObj->N).linearVel.y = 0;
  (carObj->N).linearVel.x = 0;
  Cars_ResetVariablesAfterACollision__FP8Car_tObj(carObj);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_SetCarUpForHiRezSim__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 837, offset 0x80086ac4
	/* begin block 1 */
		// Start line: 838
		// Start offset: 0x80086AC4
	/* end block 1 */
	// End offset: 0x80086B28
	// End Line: 846

	/* begin block 2 */
		// Start line: 1670
	/* end block 2 */
	// End Line: 1671

	/* begin block 3 */
		// Start line: 1863
	/* end block 3 */
	// End Line: 1864

	/* begin block 4 */
		// Start line: 1863
	/* end block 4 */
	// End Line: 1864

void Cars_SetCarUpForHiRezSim__FP8Car_tObj(Car_tObj *carObj)

{
  byte bVar1;
  Trk_NewSimQuad *pTVar2;
  
  bVar1 = (carObj->N).simOptz;
  carObj->lookAheadSlice = 0;
  if (bVar1 < 2) {
    BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
              (&(carObj->N).position,&(carObj->N).simRoadInfo,1);
    pTVar2 = (carObj->N).simRoadInfo.simQuad;
    if ((pTVar2 != (Trk_NewSimQuad *)0x0) && ((pTVar2->surface & 0xf) == 0)) {
      Cars_ResetCollidedCars__FP8Car_tObjii(carObj,1,0);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_DoExtraCarCollisionProcessing__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 856, offset 0x80086b38
	/* begin block 1 */
		// Start line: 857
		// Start offset: 0x80086B38
		// Variables:
	// 		int y; // $v1

		/* begin block 1.1 */
			// Start line: 877
			// Start offset: 0x80086BE0

			/* begin block 1.1.1 */
				// Start line: 878
				// Start offset: 0x80086C00

				/* begin block 1.1.1.1 */
					// Start line: 879
					// Start offset: 0x80086C00

					/* begin block 1.1.1.1.1 */
						// Start line: 880
						// Start offset: 0x80086C20

						/* begin block 1.1.1.1.1.1 */
							// Start line: 881
							// Start offset: 0x80086C20

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 884
								// Start offset: 0x80086C5C
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80086CD0
							// End Line: 892
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80086CD0
						// End Line: 892
					/* end block 1.1.1.1.1 */
					// End offset: 0x80086CD0
					// End Line: 892
				/* end block 1.1.1.1 */
				// End offset: 0x80086CD0
				// End Line: 892
			/* end block 1.1.1 */
			// End offset: 0x80086CD0
			// End Line: 892
		/* end block 1.1 */
		// End offset: 0x80086CD0
		// End Line: 892

		/* begin block 1.2 */
			// Start line: 910
			// Start offset: 0x80086D10

			/* begin block 1.2.1 */
				// Start line: 911
				// Start offset: 0x80086D30
				// Variables:
			// 		int wheel; // $s0
			// 		int roadSurfaceWheel; // $v0
			// 		int surfaceType; // $v1

				/* begin block 1.2.1.1 */
					// Start line: 915
					// Start offset: 0x80086D44

					/* begin block 1.2.1.1.1 */
						// Start line: 919
						// Start offset: 0x80086D90
						// Variables:
					// 		struct coorddef position; // stack offset -88
					// 		struct coorddef point; // stack offset -72
					// 		struct coorddef sideX; // stack offset -56
					// 		struct coorddef sideZ; // stack offset -40
					/* end block 1.2.1.1.1 */
					// End offset: 0x80086EEC
					// End Line: 940
				/* end block 1.2.1.1 */
				// End offset: 0x80086EEC
				// End Line: 940
			/* end block 1.2.1 */
			// End offset: 0x80086EF0
			// End Line: 943
		/* end block 1.2 */
		// End offset: 0x80086EF0
		// End Line: 943

		/* begin block 1.3 */
			// Start line: 946
			// Start offset: 0x80086EF0

			/* begin block 1.3.1 */
				// Start line: 947
				// Start offset: 0x80086F00
				// Variables:
			// 		int surface1; // $s3
			// 		int surface2; // $s0
			// 		int collisionType; // $s2
			// 		int debris; // $s0

				/* begin block 1.3.1.1 */
					// Start line: 1032
					// Start offset: 0x800870D8

					/* begin block 1.3.1.1.1 */
						// Start line: 1033
						// Start offset: 0x800870E4
						// Variables:
					// 		struct coorddef impactPoint; // stack offset -88
					/* end block 1.3.1.1.1 */
					// End offset: 0x800871E8
					// End Line: 1054
				/* end block 1.3.1.1 */
				// End offset: 0x800871E8
				// End Line: 1054

				/* begin block 1.3.1.2 */
					// Start line: 1061
					// Start offset: 0x800871E8

					/* begin block 1.3.1.2.1 */
						// Start line: 1062
						// Start offset: 0x800871FC

						/* begin block 1.3.1.2.1.1 */
							// Start line: 1066
							// Start offset: 0x800871FC

							/* begin block 1.3.1.2.1.1.1 */
								// Start line: 1073
								// Start offset: 0x80087238

								/* begin block 1.3.1.2.1.1.1.1 */
									// Start line: 1073
									// Start offset: 0x80087238

									/* begin block 1.3.1.2.1.1.1.1.1 */
										// Start line: 1086
										// Start offset: 0x8008728C

										/* begin block 1.3.1.2.1.1.1.1.1.1 */
											// Start line: 1087
											// Start offset: 0x8008728C

											/* begin block 1.3.1.2.1.1.1.1.1.1.1 */
												// Start line: 1089
												// Start offset: 0x80087298
												// Variables:
											// 		struct coorddef impactPoint; // stack offset -88
											/* end block 1.3.1.2.1.1.1.1.1.1.1 */
											// End offset: 0x800872D0
											// End Line: 1093
										/* end block 1.3.1.2.1.1.1.1.1.1 */
										// End offset: 0x800872D0
										// End Line: 1093
									/* end block 1.3.1.2.1.1.1.1.1 */
									// End offset: 0x800872D0
									// End Line: 1093
								/* end block 1.3.1.2.1.1.1.1 */
								// End offset: 0x800872D0
								// End Line: 1093
							/* end block 1.3.1.2.1.1.1 */
							// End offset: 0x800872D0
							// End Line: 1093
						/* end block 1.3.1.2.1.1 */
						// End offset: 0x800872D0
						// End Line: 1093
					/* end block 1.3.1.2.1 */
					// End offset: 0x80087304
					// End Line: 1096
				/* end block 1.3.1.2 */
				// End offset: 0x80087304
				// End Line: 1096
			/* end block 1.3.1 */
			// End offset: 0x80087310
			// End Line: 1101
		/* end block 1.3 */
		// End offset: 0x80087310
		// End Line: 1101
	/* end block 1 */
	// End offset: 0x80087470
	// End Line: 1137

	/* begin block 2 */
		// Start line: 1890
	/* end block 2 */
	// End Line: 1891

	/* begin block 3 */
		// Start line: 1901
	/* end block 3 */
	// End Line: 1902

	/* begin block 4 */
		// Start line: 1901
	/* end block 4 */
	// End Line: 1902

void Cars_DoExtraCarCollisionProcessing__FP8Car_tObj(Car_tObj *carObj)

{
  bool bVar1;
  int car;
  uint uVar2;
  int type;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  uint local_68;
  undefined *puVar8;
  coorddef local_58;
  coorddef local_48;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((carObj->carFlags & 0x400U) != 0) {
    return;
  }
  if (carObj->blowout == 0) {
LAB_80086bf0:
    if ((((carObj->pullOver != 0) || ((carObj->control).abort == '\0')) ||
        ((carObj->stats).finishType != 0)) || (simGlobal.gameTicks < 0x341)) goto LAB_80086cd0;
    car = (carObj->stats).fatalCrashes;
    if (car == 0) {
      if ((carObj->N).speedXZ < 0x1b9999) {
        Cars_ResetCollidedCars__FP8Car_tObjii(carObj,2,0);
        (carObj->stats).fatalCrashes = 0xa0;
        car = (uint)(carObj == PTR_ARRAY_8010fa4c[0]) * 0x110;
        ((coorddef *)((int)&Camera_gInfo.relpos + car))->x = (carObj->N).orientMat.m[6] * -2;
        *(int *)((int)&Camera_gInfo.relpos + car + 4) = (carObj->N).orientMat.m[7] * -2;
        *(int *)((int)&Camera_gInfo.relpos + car + 8) = (carObj->N).orientMat.m[8] * -2;
      }
      goto LAB_80086cd0;
    }
  }
  else {
    car = (carObj->linearVel_ch).z;
    if (car < 0) {
      car = -car;
    }
    if (car < 0x1999) {
      car = (carObj->linearVel_ch).x;
      if (car < 0) {
        car = -car;
      }
      if (car < 0x1999) {
        carObj->blowout = carObj->blowout + 1;
      }
    }
    if (0x140 < carObj->blowout) {
      carObj->blowout = 0;
      Cars_ResetCollidedCars__FP8Car_tObjii(carObj,1,0);
    }
    if (carObj->blowout == 0) goto LAB_80086bf0;
LAB_80086cd0:
    car = (carObj->stats).fatalCrashes;
  }
  if (0 < car) {
    (carObj->stats).fatalCrashes = car + -1;
  }
  if ((carObj->lookAheadSlice != 0) &&
     (TrgSfx_CrashCar__FP8coorddef(&(carObj->N).position), (carObj->N).flightTime == 0)) {
    carObj->lookAheadSlice = 0;
  }
  if ((carObj->forceNoSimOptz != 0) && ((carObj->N).simOptz == '\0')) {
    local_68 = 2;
    if (carObj->audio[5].force < 0) {
      local_68 = 3;
    }
    if ((Cars_kSkidMarkSurface[carObj->wheel[local_68].roadSurfaceType & 0xf] == 1) &&
       (uVar2 = random(), (uVar2 & 3) == 0)) {
      car = (carObj->N).wheelBackX;
      if (car < 0) {
        car = car + 0xff;
      }
      local_38 = (car >> 8) * (carObj->N).orientMat.m[0];
      if (local_38 < 0) {
        local_38 = local_38 + 0xff;
      }
      local_38 = local_38 >> 8;
      car = (carObj->N).wheelBackX;
      if (car < 0) {
        car = car + 0xff;
      }
      local_34 = (car >> 8) * (carObj->N).orientMat.m[1];
      if (local_34 < 0) {
        local_34 = local_34 + 0xff;
      }
      local_34 = local_34 >> 8;
      car = (carObj->N).wheelBackX;
      if (car < 0) {
        car = car + 0xff;
      }
      local_30 = (car >> 8) * (carObj->N).orientMat.m[2];
      if (local_30 < 0) {
        local_30 = local_30 + 0xff;
      }
      local_30 = local_30 >> 8;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_58.x = (carObj->N).position.x;
      local_58.z = (carObj->N).position.z;
      local_58.y = (carObj->N).groundElevation;
      local_48.z = local_30;
      local_48.x = local_38;
      local_48.y = local_34;
      if ((local_68 & 1) == 0) {
        local_48.z = -local_30;
        local_48.x = -local_38;
        local_48.y = -local_34;
      }
      local_48.y = local_58.y + local_48.y;
      local_48.x = local_58.x + local_48.x;
      local_48.z = local_58.z + local_48.z;
      TrgSfx_AddCarSfx__FiP8coorddefiT1((carObj->N).objID,&local_48,4,&(carObj->N).linearVel);
    }
    carObj->forceNoSimOptz = 0;
  }
  bVar1 = false;
  if ((carObj->N).collision.impulse == 0) goto LAB_80087310;
  puVar8 = (undefined *)((carObj->N).collision.sfxType & 0xefff0000);
  if (carObj->carInfo->carType < 0x1c) {
    uVar7 = *(ushort *)((int)&(carObj->render).bodyPitch + 2);
    if ((uVar7 & 1) == 0) {
      bVar1 = 0x1e0000 < (carObj->N).damage[7];
      if (bVar1) {
        *(ushort *)((int)&(carObj->render).bodyPitch + 2) = uVar7 | 1;
        uVar7 = *(ushort *)((int)&(carObj->render).bodyPitch + 2);
      }
    }
    if (((uVar7 & 2) == 0) && (0x1e0000 < (carObj->N).damage[3])) {
      *(ushort *)((int)&(carObj->render).bodyPitch + 2) = uVar7 | 2;
      bVar1 = true;
    }
    uVar7 = *(ushort *)((int)&(carObj->render).bodyPitch + 2);
    if (((uVar7 & 4) == 0) && (0x30000 < (carObj->N).damage[8])) {
      *(ushort *)((int)&(carObj->render).bodyPitch + 2) = uVar7 | 4;
      bVar1 = true;
      uVar7 = *(ushort *)((int)&(carObj->render).bodyPitch + 2);
    }
    if (((uVar7 & 8) == 0) && (0x1e0000 < (carObj->N).damage[0])) {
      *(ushort *)((int)&(carObj->render).bodyPitch + 2) = uVar7 | 8;
      bVar1 = true;
    }
    uVar7 = *(ushort *)((int)&(carObj->render).bodyPitch + 2);
    if (((uVar7 & 0x10) == 0) && (0x1e0000 < (carObj->N).damage[2])) {
      *(ushort *)((int)&(carObj->render).bodyPitch + 2) = uVar7 | 0x10;
      bVar1 = true;
      uVar7 = *(ushort *)((int)&(carObj->render).bodyPitch + 2);
    }
    if (((uVar7 & 0x20) == 0) && (0x1e0000 < (carObj->N).damage[6])) {
      *(ushort *)((int)&(carObj->render).bodyPitch + 2) = uVar7 | 0x20;
      bVar1 = true;
    }
    uVar7 = *(ushort *)((int)&(carObj->render).bodyPitch + 2);
    if (((uVar7 & 0x40) == 0) && (0x1e0000 < (carObj->N).damage[4])) {
      *(ushort *)((int)&(carObj->render).bodyPitch + 2) = uVar7 | 0x40;
      bVar1 = true;
    }
  }
  if (((carObj->N).collision.otherObj == (BO_tNewtonObj *)0x0) &&
     (0x4b0000 < (carObj->N).collision.impulse)) {
    if ((carObj->carFlags & 4U) != 0) {
      Physics_FixEngineRpm__FP8Car_tObj(carObj);
    }
    TrgSfx_CrashCar__FP8coorddef(&(carObj->N).position);
    carObj->lookAheadSlice = 1;
    carObj->frontSkid = 0;
    carObj->rearSkid = 0;
    if (carObj->AIFishtailEndTick < 1) {
      carObj->AIFishtailEndTick = 0x140;
    }
  }
  if (puVar8 == (undefined *)0x40000) {
    local_58.x = (carObj->N).collision.collisionPoint.x;
    local_58.z = (carObj->N).collision.collisionPoint.z;
    local_58.y = (carObj->N).collision.collisionPoint.y + 0x8000;
    car = (carObj->N).speedXZ;
    if (car < 0x180001) {
      if (((0xf0000 < car) || (0xf0000 < (carObj->N).collision.impulse)) || (bVar1)) {
        car = (carObj->N).objID;
        type = 1;
        goto LAB_800871e0;
      }
    }
    else {
      if ((carObj->N).objAltitude < 0x9999) {
        TrgSfx_AddCarSfx__FiP8coorddefiT1
                  ((carObj->N).objID,&local_58,
                   Cars_kSFXWallSurfaceInterface[(uint)*(byte *)&(carObj->N).collision.sfxType],
                   &(carObj->N).linearVel);
        if (Cars_kSFXWallSurfaceInterface[(uint)*(byte *)&(carObj->N).collision.sfxType] == 4) {
          Cars_SetAudioCalls__FP8Car_tObjiiiiii(carObj,1,-1,1,0xf,0,0);
        }
      }
      else {
        car = (carObj->N).objID;
        type = 6;
LAB_800871e0:
        TrgSfx_AddCarSfx__FiP8coorddefiT1(car,&local_58,type,&(carObj->N).linearVel);
      }
    }
  }
  if (0xa0000 < (carObj->N).collision.impulse) {
    car = *(int *)((int)Cars_kAudioCollisoinTypeInterface + ((int)puVar8 >> 0xe));
    if (puVar8 == (undefined *)0x40000) {
      local_68 = Cars_kAudioWallSurfaceInterface[(uint)*(byte *)&(carObj->N).collision.sfxType];
    }
    else {
      if ((int)puVar8 < 0x30001) {
        local_68 = Cars_kAudioRoadSurfaceInterface[(uint)*(byte *)&(carObj->N).collision.sfxType];
        if (puVar8 == (undefined *)0x30000) {
          if ((carObj->N).orientationToGround.y < 0xe666) {
            car = 1;
          }
          TrgSfx_CrashCar__FP8coorddef(&(carObj->N).collision.collisionPoint);
        }
      }
      else {
        local_68 = (uint)*(byte *)&(carObj->N).collision.sfxType;
        if (puVar8 == &DAT_00050000) {
          local_58.x = (carObj->N).collision.collisionPoint.x;
          local_58.z = (carObj->N).collision.collisionPoint.z;
          local_58.y = (carObj->N).collision.collisionPoint.y + 0x8000;
          TrgSfx_AddCarSfx__FiP8coorddefiT1((carObj->N).objID,&local_58,4,&(carObj->N).linearVel);
        }
      }
    }
    type = (carObj->N).collision.impulse;
    if (type < 0) {
      type = type + 7;
    }
    Cars_SetAudioCalls__FP8Car_tObjiiiiii(carObj,1,-1,car,local_68,type >> 3,0);
  }
  (carObj->N).collision.impulse = 0;
  (carObj->N).collision.otherObj = (BO_tNewtonObj *)0x0;
  (carObj->N).collision.sfxType = 0;
LAB_80087310:
  if ((0 < carObj->AIFishtailEndTick) && (carObj->pullOver == 0)) {
    carObj->AIFishtailEndTick = carObj->AIFishtailEndTick + -1;
    car = (carObj->N).linearVel.y;
    if (car < 0) {
      car = -car;
    }
    if ((((carObj->N).speedXZ + car < 0x10000) || (car = (carObj->N).driveSurfaceType, car == 0)) ||
       (car == 0xe)) {
      carObj->AIFishtailEndTick = carObj->AIFishtailEndTick + -8;
    }
    if (carObj->AIFishtailEndTick < 1) {
      Cars_ResetCollidedCars__FP8Car_tObjii(carObj,0,0);
      carObj->AIFishtailEndTick = 0;
    }
  }
  car = (carObj->N).roadMatrix.m[3];
  if (car < 0) {
    car = car + 0xff;
  }
  type = (carObj->N).orientMat.m[3];
  if (type < 0) {
    type = type + 0xff;
  }
  iVar5 = (carObj->N).roadMatrix.m[4];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar3 = (carObj->N).orientMat.m[4];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar6 = (carObj->N).roadMatrix.m[5];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar4 = (carObj->N).orientMat.m[5];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  if ((carObj->AIFishtailEndTick < 1) &&
     ((((car >> 8) * (type >> 8) + (iVar5 >> 8) * (iVar3 >> 8) + (iVar6 >> 8) * (iVar4 >> 8) <
        0x1999 || (car = (carObj->N).driveSurfaceType, car == 0)) || (car == 0xe)))) {
    carObj->AIFishtailEndTick = 0x140;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_AddCarSfx__FP8Car_tObjiP8coorddefiii(struct Car_tObj *carObj /*$s0*/, int wheel /*$s1*/, struct coorddef *skidpt /*$s3*/, int roadSurface /*$a3*/, int surfaceType /*stack 16*/, int drawSkid /*stack 20*/)
 // line 1159, offset 0x8008748c
	/* begin block 1 */
		// Start line: 1160
		// Start offset: 0x8008748C
		// Variables:
	// 		int objID; // $s2
	// 		int sfxType; // $s7
	// 		int stateBit; // $s4
	// 		int smoking; // $s6
	// 		int traffic; // $v1
	// 		int sfxDelay; // $s5

		/* begin block 1.1 */
			// Start line: 1179
			// Start offset: 0x80087534

			/* begin block 1.1.1 */
				// Start line: 1180
				// Start offset: 0x8008753C

				/* begin block 1.1.1.1 */
					// Start line: 1181
					// Start offset: 0x8008753C

					/* begin block 1.1.1.1.1 */
						// Start line: 1182
						// Start offset: 0x80087554

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1183
							// Start offset: 0x80087554

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1184
								// Start offset: 0x80087588
								// Variables:
							// 		int skid; // $v1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800875E4
							// End Line: 1195
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800875E4
						// End Line: 1195
					/* end block 1.1.1.1.1 */
					// End offset: 0x800875E4
					// End Line: 1195
				/* end block 1.1.1.1 */
				// End offset: 0x80087690
				// End Line: 1205
			/* end block 1.1.1 */
			// End offset: 0x800876BC
			// End Line: 1212

			/* begin block 1.1.2 */
				// Start line: 1215
				// Start offset: 0x800876C4

				/* begin block 1.1.2.1 */
					// Start line: 1216
					// Start offset: 0x800876C4

					/* begin block 1.1.2.1.1 */
						// Start line: 1217
						// Start offset: 0x800876DC

						/* begin block 1.1.2.1.1.1 */
							// Start line: 1218
							// Start offset: 0x800876DC

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 1219
								// Start offset: 0x80087710
								// Variables:
							// 		int skid; // $v1
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x80087770
							// End Line: 1230
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x80087770
						// End Line: 1230
					/* end block 1.1.2.1.1 */
					// End offset: 0x80087770
					// End Line: 1230
				/* end block 1.1.2.1 */
				// End offset: 0x8008781C
				// End Line: 1240
			/* end block 1.1.2 */
			// End offset: 0x800878A0
			// End Line: 1247
		/* end block 1.1 */
		// End offset: 0x800878A0
		// End Line: 1247
	/* end block 1 */
	// End offset: 0x800878A0
	// End Line: 1247

	/* begin block 2 */
		// Start line: 2511
	/* end block 2 */
	// End Line: 2512

	/* begin block 3 */
		// Start line: 2532
	/* end block 3 */
	// End Line: 2533

	/* begin block 4 */
		// Start line: 2532
	/* end block 4 */
	// End Line: 2533

void Cars_AddCarSfx__FP8Car_tObjiP8coorddefiii
               (Car_tObj *carObj,int wheel,coorddef *skidpt,int roadSurface,int surfaceType,
               int drawSkid)

{
  short sVar1;
  bool bVar2;
  int intensity;
  int *piVar3;
  int iVar4;
  int car;
  uint uVar5;
  int delay;
  int iVar6;
  int type;
  
  iVar6 = Cars_kSmokingSurface[roadSurface & 0xfU];
  uVar5 = 1 << (wheel & 0x1fU);
  car = (carObj->N).objID;
  type = Cars_kConvertFromRoadToSfxType[roadSurface & 0xfU];
  if (surfaceType == 3) {
    iVar6 = 0;
  }
  sVar1 = (carObj->render).palNum;
  bVar2 = 0x1c < sVar1;
  delay = gTAddCarWheelDelay;
  if (bVar2) {
    delay = gTAddCarWheelDelay << 1;
  }
  if (sVar1 == 0x1c) {
    return;
  }
  if (wheel < 2) {
    if (((drawSkid == 0) || (surfaceType == 0)) || (bVar2)) {
      if ((carObj->oldSkidState & uVar5) != 0) {
        TrgSfx_AddSkidmark__FiiP8coorddefiiP8Car_tObji
                  (car,wheel,carObj->oldSkidPoint + wheel,1,carObj->frontSkid,carObj,0);
        uVar5 = carObj->oldSkidState - uVar5;
        goto LAB_80087818;
      }
    }
    else {
      piVar3 = &(carObj->N).objID + wheel * 3;
      if ((skidpt->x != piVar3[0x124]) || (skidpt->z != piVar3[0x126])) {
        if (wheel == 0) {
          intensity = carObj->frontSkid - carObj->gTransferRight;
        }
        else {
          intensity = carObj->frontSkid + carObj->gTransferRight;
        }
        iVar4 = intensity + -0x18000;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        intensity = intensity + -0x18000;
        if (iVar4 < 0x60001) {
          if (intensity < 0) {
            intensity = 0;
          }
        }
        else {
          intensity = 0x60000;
        }
        TrgSfx_AddSkidmark__FiiP8coorddefiiP8Car_tObji
                  (car,wheel,skidpt,0,intensity,carObj,surfaceType + -1);
        piVar3 = &(carObj->N).objID + wheel * 3;
        intensity = skidpt->y;
        iVar4 = skidpt->z;
        piVar3[0x124] = skidpt->x;
        piVar3[0x125] = intensity;
        piVar3[0x126] = iVar4;
        uVar5 = carObj->oldSkidState | uVar5;
LAB_80087818:
        carObj->oldSkidState = uVar5;
      }
    }
    if (type == 8) goto LAB_80087828;
    if ((iVar6 < (carObj->N).speedXZ) && (0 < iVar6)) goto LAB_80087888;
    iVar6 = carObj->frontSkid;
  }
  else {
    if (((drawSkid == 0) || (surfaceType == 0)) || (bVar2)) {
      if ((carObj->oldSkidState & uVar5) != 0) {
        TrgSfx_AddSkidmark__FiiP8coorddefiiP8Car_tObji
                  (car,wheel,carObj->oldSkidPoint + wheel,1,carObj->rearSkid,carObj,0);
        uVar5 = carObj->oldSkidState - uVar5;
        goto LAB_8008768c;
      }
    }
    else {
      piVar3 = &(carObj->N).objID + wheel * 3;
      if ((skidpt->x != piVar3[0x124]) || (skidpt->z != piVar3[0x126])) {
        if (wheel == 2) {
          intensity = carObj->rearSkid - carObj->gTransferRight;
        }
        else {
          intensity = carObj->rearSkid + carObj->gTransferRight;
        }
        iVar4 = intensity + -0x10000;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        intensity = intensity + -0x10000;
        if (iVar4 < 0x60001) {
          if (intensity < 0) {
            intensity = 0;
          }
        }
        else {
          intensity = 0x60000;
        }
        TrgSfx_AddSkidmark__FiiP8coorddefiiP8Car_tObji
                  (car,wheel,skidpt,0,intensity,carObj,surfaceType + -1);
        piVar3 = &(carObj->N).objID + wheel * 3;
        intensity = skidpt->y;
        iVar4 = skidpt->z;
        piVar3[0x124] = skidpt->x;
        piVar3[0x125] = intensity;
        piVar3[0x126] = iVar4;
        uVar5 = carObj->oldSkidState | uVar5;
LAB_8008768c:
        carObj->oldSkidState = uVar5;
      }
    }
    if (type == 8) {
LAB_80087828:
      TrgSfx_AddCarSplash__FiiP8coorddefiT2ii
                (car,wheel,skidpt,8,&(carObj->N).linearVel,delay,(carObj->N).speedXZ);
      return;
    }
    if ((iVar6 < (carObj->N).speedXZ) && (0 < iVar6)) goto LAB_80087888;
    iVar6 = carObj->rearSkid;
  }
  if (iVar6 < 0x40001) {
    return;
  }
LAB_80087888:
  TrgSfx_AddCarWheelSfx__FiiP8coorddefiT2i(car,wheel,skidpt,type,&(carObj->N).linearVel,delay);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Car_TireSkiddingStuff__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1259, offset 0x800878cc
	/* begin block 1 */
		// Start line: 1260
		// Start offset: 0x800878CC
		// Variables:
	// 		struct coorddef position; // stack offset -136
	// 		struct coorddef point; // stack offset -120
	// 		int visible; // $s5
	// 		int audioSurface; // stack offset -56
	// 		int front; // $s3
	// 		int rear; // $s4
	// 		int skidFront; // $s6
	// 		int originalFront; // stack offset -52
	// 		int originalRear; // stack offset -48
	// 		int roadSurface; // $a1
	// 		int roadSurfaceWheel; // $s2
	// 		int surfaceType; // $s1
	// 		int speed; // $fp
	// 		int wetRoad; // $s7

		/* begin block 1.1 */
			// Start line: 1362
			// Start offset: 0x80087B10

			/* begin block 1.1.1 */
				// Start line: 1363
				// Start offset: 0x80087B38

				/* begin block 1.1.1.1 */
					// Start line: 1364
					// Start offset: 0x80087B38
					// Variables:
				// 		struct coorddef wheelFrontX; // stack offset -104
				// 		struct coorddef wheelFrontZ; // stack offset -88
				/* end block 1.1.1.1 */
				// End offset: 0x80087C80
				// End Line: 1364
			/* end block 1.1.1 */
			// End offset: 0x80087D18
			// End Line: 1369
		/* end block 1.1 */
		// End offset: 0x80087D74
		// End Line: 1375

		/* begin block 1.2 */
			// Start line: 1379
			// Start offset: 0x80087D74

			/* begin block 1.2.1 */
				// Start line: 1380
				// Start offset: 0x80087D94

				/* begin block 1.2.1.1 */
					// Start line: 1381
					// Start offset: 0x80087D94
					// Variables:
				// 		struct coorddef wheelFrontX; // stack offset -104
				// 		struct coorddef wheelFrontZ; // stack offset -72
				/* end block 1.2.1.1 */
				// End offset: 0x80087EDC
				// End Line: 1381
			/* end block 1.2.1 */
			// End offset: 0x80087F58
			// End Line: 1385
		/* end block 1.2 */
		// End offset: 0x80087F58
		// End Line: 1385

		/* begin block 1.3 */
			// Start line: 1388
			// Start offset: 0x80087F58

			/* begin block 1.3.1 */
				// Start line: 1389
				// Start offset: 0x80087FA0
				// Variables:
			// 		int rndOffset; // $a1

				/* begin block 1.3.1.1 */
					// Start line: 1390
					// Start offset: 0x80087FA0
					// Variables:
				// 		struct coorddef wheelFrontX; // stack offset -104
				// 		struct coorddef wheelFrontZ; // stack offset -88
				/* end block 1.3.1.1 */
				// End offset: 0x80088118
				// End Line: 1392
			/* end block 1.3.1 */
			// End offset: 0x80088198
			// End Line: 1394
		/* end block 1.3 */
		// End offset: 0x80088198
		// End Line: 1394

		/* begin block 1.4 */
			// Start line: 1402
			// Start offset: 0x800881C4

			/* begin block 1.4.1 */
				// Start line: 1403
				// Start offset: 0x800881EC

				/* begin block 1.4.1.1 */
					// Start line: 1404
					// Start offset: 0x800881EC
					// Variables:
				// 		struct coorddef wheelFrontX; // stack offset -104
				// 		struct coorddef wheelFrontZ; // stack offset -88
				/* end block 1.4.1.1 */
				// End offset: 0x80088334
				// End Line: 1404
			/* end block 1.4.1 */
			// End offset: 0x800883CC
			// End Line: 1409
		/* end block 1.4 */
		// End offset: 0x80088428
		// End Line: 1415

		/* begin block 1.5 */
			// Start line: 1419
			// Start offset: 0x80088428

			/* begin block 1.5.1 */
				// Start line: 1420
				// Start offset: 0x80088448

				/* begin block 1.5.1.1 */
					// Start line: 1421
					// Start offset: 0x80088448
					// Variables:
				// 		struct coorddef wheelFrontX; // stack offset -104
				// 		struct coorddef wheelFrontZ; // stack offset -88
				/* end block 1.5.1.1 */
				// End offset: 0x80088590
				// End Line: 1421
			/* end block 1.5.1 */
			// End offset: 0x8008860C
			// End Line: 1425
		/* end block 1.5 */
		// End offset: 0x8008860C
		// End Line: 1425

		/* begin block 1.6 */
			// Start line: 1428
			// Start offset: 0x8008860C

			/* begin block 1.6.1 */
				// Start line: 1429
				// Start offset: 0x80088654
				// Variables:
			// 		int rndOffset; // $a1

				/* begin block 1.6.1.1 */
					// Start line: 1430
					// Start offset: 0x80088654
					// Variables:
				// 		struct coorddef wheelFrontX; // stack offset -104
				// 		struct coorddef wheelFrontZ; // stack offset -88
				/* end block 1.6.1.1 */
				// End offset: 0x800887CC
				// End Line: 1432
			/* end block 1.6.1 */
			// End offset: 0x8008884C
			// End Line: 1434
		/* end block 1.6 */
		// End offset: 0x8008884C
		// End Line: 1434

		/* begin block 1.7 */
			// Start line: 1442
			// Start offset: 0x80088878

			/* begin block 1.7.1 */
				// Start line: 1443
				// Start offset: 0x800888A0

				/* begin block 1.7.1.1 */
					// Start line: 1444
					// Start offset: 0x800888A0
					// Variables:
				// 		struct coorddef wheelBackX; // stack offset -104
				// 		struct coorddef wheelBackZ; // stack offset -88
				/* end block 1.7.1.1 */
				// End offset: 0x800889E8
				// End Line: 1444
			/* end block 1.7.1 */
			// End offset: 0x80088A80
			// End Line: 1449
		/* end block 1.7 */
		// End offset: 0x80088AE4
		// End Line: 1455

		/* begin block 1.8 */
			// Start line: 1459
			// Start offset: 0x80088AE4

			/* begin block 1.8.1 */
				// Start line: 1460
				// Start offset: 0x80088B04

				/* begin block 1.8.1.1 */
					// Start line: 1461
					// Start offset: 0x80088B04
					// Variables:
				// 		struct coorddef wheelBackX; // stack offset -104
				// 		struct coorddef wheelBackZ; // stack offset -88
				/* end block 1.8.1.1 */
				// End offset: 0x80088C4C
				// End Line: 1461
			/* end block 1.8.1 */
			// End offset: 0x80088CC8
			// End Line: 1465
		/* end block 1.8 */
		// End offset: 0x80088CC8
		// End Line: 1465

		/* begin block 1.9 */
			// Start line: 1468
			// Start offset: 0x80088CC8

			/* begin block 1.9.1 */
				// Start line: 1469
				// Start offset: 0x80088D10
				// Variables:
			// 		int rndOffset; // $a1

				/* begin block 1.9.1.1 */
					// Start line: 1470
					// Start offset: 0x80088D10
					// Variables:
				// 		struct coorddef wheelBackX; // stack offset -104
				// 		struct coorddef wheelBackZ; // stack offset -88
				/* end block 1.9.1.1 */
				// End offset: 0x80088E88
				// End Line: 1472
			/* end block 1.9.1 */
			// End offset: 0x80088F08
			// End Line: 1474
		/* end block 1.9 */
		// End offset: 0x80088F08
		// End Line: 1474

		/* begin block 1.10 */
			// Start line: 1482
			// Start offset: 0x80088F34

			/* begin block 1.10.1 */
				// Start line: 1483
				// Start offset: 0x80088F5C

				/* begin block 1.10.1.1 */
					// Start line: 1484
					// Start offset: 0x80088F5C
					// Variables:
				// 		struct coorddef wheelBackX; // stack offset -104
				// 		struct coorddef wheelBackZ; // stack offset -88
				/* end block 1.10.1.1 */
				// End offset: 0x800890A4
				// End Line: 1484
			/* end block 1.10.1 */
			// End offset: 0x8008913C
			// End Line: 1489
		/* end block 1.10 */
		// End offset: 0x800891A0
		// End Line: 1495

		/* begin block 1.11 */
			// Start line: 1499
			// Start offset: 0x800891A0

			/* begin block 1.11.1 */
				// Start line: 1500
				// Start offset: 0x800891C0

				/* begin block 1.11.1.1 */
					// Start line: 1501
					// Start offset: 0x800891C0
					// Variables:
				// 		struct coorddef wheelBackX; // stack offset -104
				// 		struct coorddef wheelBackZ; // stack offset -88
				/* end block 1.11.1.1 */
				// End offset: 0x80089308
				// End Line: 1501
			/* end block 1.11.1 */
			// End offset: 0x80089384
			// End Line: 1505
		/* end block 1.11 */
		// End offset: 0x80089384
		// End Line: 1505

		/* begin block 1.12 */
			// Start line: 1508
			// Start offset: 0x80089384

			/* begin block 1.12.1 */
				// Start line: 1509
				// Start offset: 0x800893CC
				// Variables:
			// 		int rndOffset; // $a1

				/* begin block 1.12.1.1 */
					// Start line: 1510
					// Start offset: 0x800893CC
					// Variables:
				// 		struct coorddef wheelBackX; // stack offset -104
				// 		struct coorddef wheelBackZ; // stack offset -88
				/* end block 1.12.1.1 */
				// End offset: 0x80089544
				// End Line: 1512
			/* end block 1.12.1 */
			// End offset: 0x800895C4
			// End Line: 1514
		/* end block 1.12 */
		// End offset: 0x800895C4
		// End Line: 1514
	/* end block 1 */
	// End offset: 0x80089730
	// End Line: 1547

	/* begin block 2 */
		// Start line: 2741
	/* end block 2 */
	// End Line: 2742

	/* begin block 3 */
		// Start line: 2752
	/* end block 3 */
	// End Line: 2753

	/* begin block 4 */
		// Start line: 2752
	/* end block 4 */
	// End Line: 2753

	/* begin block 5 */
		// Start line: 2770
	/* end block 5 */
	// End Line: 2771

void Car_TireSkiddingStuff__FP8Car_tObj(Car_tObj *carObj)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined **force;
  void *pvVar6;
  undefined **ppuVar7;
  int iVar8;
  int surfaceType;
  uint roadSurface;
  undefined **ppuVar9;
  int local_88;
  int local_84;
  int local_80;
  coorddef local_78;
  int local_68;
  int local_64;
  int local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  undefined **local_34;
  undefined **local_30;
  
  bVar3 = false;
  sVar1 = *(short *)((int)&(carObj->N).speedXZ + 2);
  bVar2 = false;
  if (GameSetup_gData.Weather != 0) {
    puVar4 = (undefined *)BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(&(carObj->N).simRoadInfo);
    bVar2 = puVar4 != &DAT_00000001;
  }
  surfaceType = (carObj->N).driveSurfaceType;
  if (((carObj->N).distToPlayer < 0x3c0000) && ((carObj->N).objAltitude < 0x6666)) {
    bVar3 = true;
  }
  if (bVar3) {
    local_88 = (carObj->N).position.x;
    local_80 = (carObj->N).position.z;
    local_84 = (carObj->N).groundElevation;
    ppuVar9 = (undefined **)carObj->frontSkid;
    if ((int)ppuVar9 < 1) {
      local_34 = (undefined **)0x0;
      ppuVar9 = local_34;
    }
    else {
      local_34 = &PTR_000a0000;
      if ((int)ppuVar9 < 0xa0001) {
        local_34 = ppuVar9;
      }
      iVar8 = (carObj->linearVel_ch).z;
      iVar5 = iVar8;
      if (iVar8 < 0) {
        iVar5 = -iVar8;
      }
      *(undefined ***)&carObj->frontSkid = local_34;
      ppuVar9 = local_34;
      if (0x140000 < iVar5) {
        if (iVar8 < 0) {
          iVar8 = iVar8 + 7;
        }
        iVar8 = iVar8 >> 3;
        if (iVar8 < 0) {
          iVar8 = -iVar8;
        }
        ppuVar9 = (undefined **)((int)local_34 - iVar8);
      }
    }
    force = (undefined **)carObj->rearSkid;
    if ((int)force < 1) goto LAB_80087a54;
    local_30 = &PTR_000a0000;
    if ((int)force < 0xa0001) {
      local_30 = force;
    }
    *(undefined ***)&carObj->rearSkid = local_30;
  }
  else {
    ppuVar9 = (undefined **)0x0;
    local_34 = (undefined **)0x0;
LAB_80087a54:
    local_30 = (undefined **)0x0;
  }
  ppuVar7 = local_30;
  force = local_34;
  local_38 = Cars_kAudioRoadSurfaceInterface[surfaceType];
  if (GameSetup_gData.Weather < 1) {
    if (local_38 == 0) {
      surfaceType = carObj->carInfo->TireType;
      if (surfaceType == 0) {
        local_38 = 0x12;
      }
      else {
        if (surfaceType == 2) {
          local_38 = 0x11;
        }
      }
    }
  }
  else {
    if ((local_38 == 0) &&
       (puVar4 = (undefined *)BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(&(carObj->N).simRoadInfo),
       puVar4 != &DAT_00000001)) {
      local_38 = 0x10;
    }
  }
  roadSurface = carObj->wheel[0].roadSurfaceType;
  surfaceType = Cars_kSkidMarkSurface[roadSurface & 0xf];
  if (carObj->wheel[0].wheelInAir != 0) {
    surfaceType = 0;
  }
  if ((((force == (undefined **)0x0) || (bVar2)) && ((surfaceType < 2 || (sVar1 == 0)))) || (!bVar3)
     ) {
    if ((carObj->oldSkidState & 1U) != 0) {
      carObj->oldSkidState = carObj->oldSkidState - 1;
      TrgSfx_AddSkidmark__FiiP8coorddefiiP8Car_tObji
                ((carObj->N).objID,0,carObj->oldSkidPoint,1,carObj->frontSkid,carObj,0);
    }
  }
  else {
    iVar5 = (carObj->N).wheelFrontX;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_68 = (iVar5 >> 8) * (carObj->N).orientMat.m[0];
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
    iVar5 = (carObj->N).wheelFrontX;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_64 = (iVar5 >> 8) * (carObj->N).orientMat.m[1];
    if (local_64 < 0) {
      local_64 = local_64 + 0xff;
    }
    local_64 = local_64 >> 8;
    iVar5 = (carObj->N).wheelFrontX;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_60 = (iVar5 >> 8) * (carObj->N).orientMat.m[2];
    if (local_60 < 0) {
      local_60 = local_60 + 0xff;
    }
    local_60 = local_60 >> 8;
    iVar5 = (carObj->N).wheelFrontZ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_58 = (iVar5 >> 8) * (carObj->N).orientMat.m[6];
    if (local_58 < 0) {
      local_58 = local_58 + 0xff;
    }
    local_58 = local_58 >> 8;
    iVar5 = (carObj->N).wheelFrontZ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_54 = (iVar5 >> 8) * (carObj->N).orientMat.m[7];
    if (local_54 < 0) {
      local_54 = local_54 + 0xff;
    }
    local_54 = local_54 >> 8;
    iVar5 = (carObj->N).wheelFrontZ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_50 = (iVar5 >> 8) * (carObj->N).orientMat.m[8];
    if (local_50 < 0) {
      local_50 = local_50 + 0xff;
    }
    local_50 = local_50 >> 8;
    local_78.x = (local_88 - local_68) + local_58;
    local_78.z = (local_80 - local_60) + local_50;
    local_78.y = (local_84 - local_64) + local_54;
    if ((1 < surfaceType) && (frontLimit < (int)ppuVar9)) {
      surfaceType = 3;
    }
    if (surfaceType == 0) {
      Cars_AddCarSfx__FP8Car_tObjiP8coorddefiii(carObj,0,&local_78,roadSurface,0,0);
    }
    else {
      Cars_AddCarSfx__FP8Car_tObjiP8coorddefiii(carObj,0,&local_78,roadSurface,surfaceType,1);
    }
  }
  if ((((bVar2) && (surfaceType == 1)) && (sVar1 != 0)) && (bVar3)) {
    surfaceType = (carObj->N).wheelFrontX;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_68 = (surfaceType >> 8) * (carObj->N).orientMat.m[0];
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
    surfaceType = (carObj->N).wheelFrontX;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_64 = (surfaceType >> 8) * (carObj->N).orientMat.m[1];
    if (local_64 < 0) {
      local_64 = local_64 + 0xff;
    }
    local_64 = local_64 >> 8;
    surfaceType = (carObj->N).wheelFrontX;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_60 = (surfaceType >> 8) * (carObj->N).orientMat.m[2];
    if (local_60 < 0) {
      local_60 = local_60 + 0xff;
    }
    local_60 = local_60 >> 8;
    surfaceType = (carObj->N).wheelFrontZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_48 = (surfaceType >> 8) * (carObj->N).orientMat.m[6];
    if (local_48 < 0) {
      local_48 = local_48 + 0xff;
    }
    local_48 = local_48 >> 8;
    surfaceType = (carObj->N).wheelFrontZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_44 = (surfaceType >> 8) * (carObj->N).orientMat.m[7];
    if (local_44 < 0) {
      local_44 = local_44 + 0xff;
    }
    local_44 = local_44 >> 8;
    surfaceType = (carObj->N).wheelFrontZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_40 = (surfaceType >> 8) * (carObj->N).orientMat.m[8];
    if (local_40 < 0) {
      local_40 = local_40 + 0xff;
    }
    local_40 = local_40 >> 8;
    local_78.x = (local_88 - local_68) + local_48;
    local_78.z = (local_80 - local_60) + local_40;
    local_78.y = (local_84 - local_64) + local_44;
    TrgSfx_AddCarSplash__FiiP8coorddefiT2ii
              ((carObj->N).objID,0,&local_78,10,&(carObj->N).linearVel,0,(carObj->N).speedXZ);
    if ((int)force < 1) {
      force = (undefined **)0x1;
    }
  }
  if ((((roadSurface & 0x20) != 0) && (gLeafPixmap != (Draw_tPixMap *)0x0)) &&
     ((0xa0000 < (carObj->N).speedXZ &&
      (pvVar6 = TrgSfx_AddCarExtraCheck__Fii((carObj->N).objID,0), pvVar6 != (void *)0x0)))) {
    roadSurface = random();
    surfaceType = ((roadSurface & 7) - 4) * 0x3333;
    iVar5 = (carObj->N).wheelFrontX + surfaceType;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_68 = (iVar5 >> 8) * (carObj->N).orientMat.m[0];
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
    iVar5 = (carObj->N).wheelFrontX + surfaceType;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_64 = (iVar5 >> 8) * (carObj->N).orientMat.m[1];
    if (local_64 < 0) {
      local_64 = local_64 + 0xff;
    }
    local_64 = local_64 >> 8;
    surfaceType = (carObj->N).wheelFrontX + surfaceType;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_60 = (surfaceType >> 8) * (carObj->N).orientMat.m[2];
    if (local_60 < 0) {
      local_60 = local_60 + 0xff;
    }
    local_60 = local_60 >> 8;
    surfaceType = (carObj->N).wheelFrontZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_58 = (surfaceType >> 8) * (carObj->N).orientMat.m[6];
    if (local_58 < 0) {
      local_58 = local_58 + 0xff;
    }
    local_58 = local_58 >> 8;
    surfaceType = (carObj->N).wheelFrontZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_54 = (surfaceType >> 8) * (carObj->N).orientMat.m[7];
    if (local_54 < 0) {
      local_54 = local_54 + 0xff;
    }
    local_54 = local_54 >> 8;
    surfaceType = (carObj->N).wheelFrontZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_50 = (surfaceType >> 8) * (carObj->N).orientMat.m[8];
    if (local_50 < 0) {
      local_50 = local_50 + 0xff;
    }
    local_50 = local_50 >> 8;
    local_78.x = (local_88 - local_68) + local_58;
    local_78.z = (local_80 - local_60) + local_50;
    local_78.y = (local_84 - local_64) + local_54;
    TrgSfx_AddCarExtraSfx__FiiP8coorddefiT2iii
              ((carObj->N).objID,0,&local_78,0xd,&(carObj->N).linearVel,(carObj->N).speedXZ,
               local_78.y,(carObj->render).bodyRoll);
  }
  roadSurface = carObj->wheel[1].roadSurfaceType;
  surfaceType = Cars_kSkidMarkSurface[roadSurface & 0xf];
  if (carObj->wheel[1].wheelInAir != 0) {
    surfaceType = 0;
  }
  if ((((force == (undefined **)0x0) || (bVar2)) && ((surfaceType < 2 || (sVar1 == 0)))) || (!bVar3)
     ) {
    if ((carObj->oldSkidState & 2U) != 0) {
      carObj->oldSkidState = carObj->oldSkidState - 2;
      TrgSfx_AddSkidmark__FiiP8coorddefiiP8Car_tObji
                ((carObj->N).objID,1,carObj->oldSkidPoint + 1,1,carObj->frontSkid,carObj,0);
    }
  }
  else {
    iVar5 = (carObj->N).wheelFrontX;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_68 = (iVar5 >> 8) * (carObj->N).orientMat.m[0];
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
    iVar5 = (carObj->N).wheelFrontX;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_64 = (iVar5 >> 8) * (carObj->N).orientMat.m[1];
    if (local_64 < 0) {
      local_64 = local_64 + 0xff;
    }
    local_64 = local_64 >> 8;
    iVar5 = (carObj->N).wheelFrontX;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_60 = (iVar5 >> 8) * (carObj->N).orientMat.m[2];
    if (local_60 < 0) {
      local_60 = local_60 + 0xff;
    }
    local_60 = local_60 >> 8;
    iVar5 = (carObj->N).wheelFrontZ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_58 = (iVar5 >> 8) * (carObj->N).orientMat.m[6];
    if (local_58 < 0) {
      local_58 = local_58 + 0xff;
    }
    local_58 = local_58 >> 8;
    iVar5 = (carObj->N).wheelFrontZ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_54 = (iVar5 >> 8) * (carObj->N).orientMat.m[7];
    if (local_54 < 0) {
      local_54 = local_54 + 0xff;
    }
    local_54 = local_54 >> 8;
    iVar5 = (carObj->N).wheelFrontZ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_50 = (iVar5 >> 8) * (carObj->N).orientMat.m[8];
    if (local_50 < 0) {
      local_50 = local_50 + 0xff;
    }
    local_50 = local_50 >> 8;
    local_78.x = local_88 + local_68 + local_58;
    local_78.z = local_80 + local_60 + local_50;
    local_78.y = local_84 + local_64 + local_54;
    if ((1 < surfaceType) && (frontLimit < (int)ppuVar9)) {
      surfaceType = 3;
    }
    if (surfaceType == 0) {
      Cars_AddCarSfx__FP8Car_tObjiP8coorddefiii(carObj,1,&local_78,roadSurface,0,0);
    }
    else {
      Cars_AddCarSfx__FP8Car_tObjiP8coorddefiii(carObj,1,&local_78,roadSurface,surfaceType,1);
    }
  }
  if ((((bVar2) && (surfaceType == 1)) && (sVar1 != 0)) && (bVar3)) {
    surfaceType = (carObj->N).wheelFrontX;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_68 = (surfaceType >> 8) * (carObj->N).orientMat.m[0];
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
    surfaceType = (carObj->N).wheelFrontX;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_64 = (surfaceType >> 8) * (carObj->N).orientMat.m[1];
    if (local_64 < 0) {
      local_64 = local_64 + 0xff;
    }
    local_64 = local_64 >> 8;
    surfaceType = (carObj->N).wheelFrontX;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_60 = (surfaceType >> 8) * (carObj->N).orientMat.m[2];
    if (local_60 < 0) {
      local_60 = local_60 + 0xff;
    }
    local_60 = local_60 >> 8;
    surfaceType = (carObj->N).wheelFrontZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_58 = (surfaceType >> 8) * (carObj->N).orientMat.m[6];
    if (local_58 < 0) {
      local_58 = local_58 + 0xff;
    }
    local_58 = local_58 >> 8;
    surfaceType = (carObj->N).wheelFrontZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_54 = (surfaceType >> 8) * (carObj->N).orientMat.m[7];
    if (local_54 < 0) {
      local_54 = local_54 + 0xff;
    }
    local_54 = local_54 >> 8;
    surfaceType = (carObj->N).wheelFrontZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_50 = (surfaceType >> 8) * (carObj->N).orientMat.m[8];
    if (local_50 < 0) {
      local_50 = local_50 + 0xff;
    }
    local_50 = local_50 >> 8;
    local_78.x = local_88 + local_68 + local_58;
    local_78.z = local_80 + local_60 + local_50;
    local_78.y = local_84 + local_64 + local_54;
    TrgSfx_AddCarSplash__FiiP8coorddefiT2ii
              ((carObj->N).objID,1,&local_78,10,&(carObj->N).linearVel,0,(carObj->N).speedXZ);
    if ((int)force < 1) {
      force = (undefined **)0x1;
    }
  }
  if ((((roadSurface & 0x20) != 0) && (gLeafPixmap != (Draw_tPixMap *)0x0)) &&
     ((0xa0000 < (carObj->N).speedXZ &&
      (pvVar6 = TrgSfx_AddCarExtraCheck__Fii((carObj->N).objID,1), pvVar6 != (void *)0x0)))) {
    roadSurface = random();
    surfaceType = ((roadSurface & 7) - 4) * 0x3333;
    iVar5 = (carObj->N).wheelFrontX + surfaceType;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_68 = (iVar5 >> 8) * (carObj->N).orientMat.m[0];
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
    iVar5 = (carObj->N).wheelFrontX + surfaceType;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_64 = (iVar5 >> 8) * (carObj->N).orientMat.m[1];
    if (local_64 < 0) {
      local_64 = local_64 + 0xff;
    }
    local_64 = local_64 >> 8;
    surfaceType = (carObj->N).wheelFrontX + surfaceType;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_60 = (surfaceType >> 8) * (carObj->N).orientMat.m[2];
    if (local_60 < 0) {
      local_60 = local_60 + 0xff;
    }
    local_60 = local_60 >> 8;
    surfaceType = (carObj->N).wheelFrontZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_58 = (surfaceType >> 8) * (carObj->N).orientMat.m[6];
    if (local_58 < 0) {
      local_58 = local_58 + 0xff;
    }
    local_58 = local_58 >> 8;
    surfaceType = (carObj->N).wheelFrontZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_54 = (surfaceType >> 8) * (carObj->N).orientMat.m[7];
    if (local_54 < 0) {
      local_54 = local_54 + 0xff;
    }
    local_54 = local_54 >> 8;
    surfaceType = (carObj->N).wheelFrontZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_50 = (surfaceType >> 8) * (carObj->N).orientMat.m[8];
    if (local_50 < 0) {
      local_50 = local_50 + 0xff;
    }
    local_50 = local_50 >> 8;
    local_78.x = local_88 + local_68 + local_58;
    local_78.z = local_80 + local_60 + local_50;
    local_78.y = local_84 + local_64 + local_54;
    TrgSfx_AddCarExtraSfx__FiiP8coorddefiT2iii
              ((carObj->N).objID,1,&local_78,0xd,&(carObj->N).linearVel,(carObj->N).speedXZ,
               local_78.y,(carObj->render).bodyRoll);
  }
  roadSurface = carObj->wheel[2].roadSurfaceType;
  surfaceType = Cars_kSkidMarkSurface[roadSurface & 0xf];
  if (carObj->wheel[2].wheelInAir != 0) {
    surfaceType = 0;
  }
  if ((((ppuVar7 == (undefined **)0x0) || (bVar2)) && ((surfaceType < 2 || (sVar1 == 0)))) ||
     (!bVar3)) {
    if ((carObj->oldSkidState & 4U) != 0) {
      TrgSfx_AddSkidmark__FiiP8coorddefiiP8Car_tObji
                ((carObj->N).objID,2,carObj->oldSkidPoint + 2,1,carObj->rearSkid,carObj,0);
      carObj->oldSkidState = carObj->oldSkidState + -4;
    }
  }
  else {
    iVar5 = (carObj->N).wheelBackX;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_68 = (iVar5 >> 8) * (carObj->N).orientMat.m[0];
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
    iVar5 = (carObj->N).wheelBackX;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_64 = (iVar5 >> 8) * (carObj->N).orientMat.m[1];
    if (local_64 < 0) {
      local_64 = local_64 + 0xff;
    }
    local_64 = local_64 >> 8;
    iVar5 = (carObj->N).wheelBackX;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_60 = (iVar5 >> 8) * (carObj->N).orientMat.m[2];
    if (local_60 < 0) {
      local_60 = local_60 + 0xff;
    }
    local_60 = local_60 >> 8;
    iVar5 = (carObj->N).wheelBackZ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_58 = (iVar5 >> 8) * (carObj->N).orientMat.m[6];
    if (local_58 < 0) {
      local_58 = local_58 + 0xff;
    }
    local_58 = local_58 >> 8;
    iVar5 = (carObj->N).wheelBackZ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_54 = (iVar5 >> 8) * (carObj->N).orientMat.m[7];
    if (local_54 < 0) {
      local_54 = local_54 + 0xff;
    }
    local_54 = local_54 >> 8;
    iVar5 = (carObj->N).wheelBackZ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_50 = (iVar5 >> 8) * (carObj->N).orientMat.m[8];
    if (local_50 < 0) {
      local_50 = local_50 + 0xff;
    }
    local_50 = local_50 >> 8;
    local_78.x = (local_88 - local_68) - local_58;
    local_78.z = (local_80 - local_60) - local_50;
    local_78.y = (local_84 - local_64) - local_54;
    if ((1 < surfaceType) && (rearLimit < (int)ppuVar7)) {
      surfaceType = 3;
    }
    if (surfaceType == 0) {
      Cars_AddCarSfx__FP8Car_tObjiP8coorddefiii(carObj,2,&local_78,roadSurface,0,0);
    }
    else {
      Cars_AddCarSfx__FP8Car_tObjiP8coorddefiii(carObj,2,&local_78,roadSurface,surfaceType,1);
    }
  }
  if ((((bVar2) && (surfaceType == 1)) && (sVar1 != 0)) && (bVar3)) {
    surfaceType = (carObj->N).wheelBackX;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_68 = (surfaceType >> 8) * (carObj->N).orientMat.m[0];
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
    surfaceType = (carObj->N).wheelBackX;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_64 = (surfaceType >> 8) * (carObj->N).orientMat.m[1];
    if (local_64 < 0) {
      local_64 = local_64 + 0xff;
    }
    local_64 = local_64 >> 8;
    surfaceType = (carObj->N).wheelBackX;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_60 = (surfaceType >> 8) * (carObj->N).orientMat.m[2];
    if (local_60 < 0) {
      local_60 = local_60 + 0xff;
    }
    local_60 = local_60 >> 8;
    surfaceType = (carObj->N).wheelBackZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_58 = (surfaceType >> 8) * (carObj->N).orientMat.m[6];
    if (local_58 < 0) {
      local_58 = local_58 + 0xff;
    }
    local_58 = local_58 >> 8;
    surfaceType = (carObj->N).wheelBackZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_54 = (surfaceType >> 8) * (carObj->N).orientMat.m[7];
    if (local_54 < 0) {
      local_54 = local_54 + 0xff;
    }
    local_54 = local_54 >> 8;
    surfaceType = (carObj->N).wheelBackZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_50 = (surfaceType >> 8) * (carObj->N).orientMat.m[8];
    if (local_50 < 0) {
      local_50 = local_50 + 0xff;
    }
    local_50 = local_50 >> 8;
    local_78.x = (local_88 - local_68) - local_58;
    local_78.z = (local_80 - local_60) - local_50;
    local_78.y = (local_84 - local_64) - local_54;
    TrgSfx_AddCarSplash__FiiP8coorddefiT2ii
              ((carObj->N).objID,2,&local_78,10,&(carObj->N).linearVel,0,(carObj->N).speedXZ);
    if ((int)ppuVar7 < 1) {
      ppuVar7 = (undefined **)0x1;
    }
  }
  if ((((roadSurface & 0x20) != 0) && (gLeafPixmap != (Draw_tPixMap *)0x0)) &&
     ((0xa0000 < (carObj->N).speedXZ &&
      (pvVar6 = TrgSfx_AddCarExtraCheck__Fii((carObj->N).objID,2), pvVar6 != (void *)0x0)))) {
    roadSurface = random();
    surfaceType = ((roadSurface & 7) - 4) * 0x3333;
    iVar5 = (carObj->N).wheelBackX + surfaceType;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_68 = (iVar5 >> 8) * (carObj->N).orientMat.m[0];
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
    iVar5 = (carObj->N).wheelBackX + surfaceType;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_64 = (iVar5 >> 8) * (carObj->N).orientMat.m[1];
    if (local_64 < 0) {
      local_64 = local_64 + 0xff;
    }
    local_64 = local_64 >> 8;
    surfaceType = (carObj->N).wheelBackX + surfaceType;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_60 = (surfaceType >> 8) * (carObj->N).orientMat.m[2];
    if (local_60 < 0) {
      local_60 = local_60 + 0xff;
    }
    local_60 = local_60 >> 8;
    surfaceType = (carObj->N).wheelBackZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_58 = (surfaceType >> 8) * (carObj->N).orientMat.m[6];
    if (local_58 < 0) {
      local_58 = local_58 + 0xff;
    }
    local_58 = local_58 >> 8;
    surfaceType = (carObj->N).wheelBackZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_54 = (surfaceType >> 8) * (carObj->N).orientMat.m[7];
    if (local_54 < 0) {
      local_54 = local_54 + 0xff;
    }
    local_54 = local_54 >> 8;
    surfaceType = (carObj->N).wheelBackZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_50 = (surfaceType >> 8) * (carObj->N).orientMat.m[8];
    if (local_50 < 0) {
      local_50 = local_50 + 0xff;
    }
    local_50 = local_50 >> 8;
    local_78.x = (local_88 - local_68) - local_58;
    local_78.z = (local_80 - local_60) - local_50;
    local_78.y = (local_84 - local_64) - local_54;
    TrgSfx_AddCarExtraSfx__FiiP8coorddefiT2iii
              ((carObj->N).objID,2,&local_78,0xd,&(carObj->N).linearVel,(carObj->N).speedXZ,
               local_78.y,(carObj->render).bodyRoll);
  }
  roadSurface = carObj->wheel[3].roadSurfaceType;
  surfaceType = Cars_kSkidMarkSurface[roadSurface & 0xf];
  if (carObj->wheel[3].wheelInAir != 0) {
    surfaceType = 0;
  }
  if ((((ppuVar7 == (undefined **)0x0) || (bVar2)) && ((surfaceType < 2 || (sVar1 == 0)))) ||
     (!bVar3)) {
    if ((carObj->oldSkidState & 8U) != 0) {
      TrgSfx_AddSkidmark__FiiP8coorddefiiP8Car_tObji
                ((carObj->N).objID,3,carObj->oldSkidPoint + 3,1,carObj->rearSkid,carObj,0);
      carObj->oldSkidState = carObj->oldSkidState + -8;
    }
  }
  else {
    iVar5 = (carObj->N).wheelBackX;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_68 = (iVar5 >> 8) * (carObj->N).orientMat.m[0];
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
    iVar5 = (carObj->N).wheelBackX;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_64 = (iVar5 >> 8) * (carObj->N).orientMat.m[1];
    if (local_64 < 0) {
      local_64 = local_64 + 0xff;
    }
    local_64 = local_64 >> 8;
    iVar5 = (carObj->N).wheelBackX;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_60 = (iVar5 >> 8) * (carObj->N).orientMat.m[2];
    if (local_60 < 0) {
      local_60 = local_60 + 0xff;
    }
    local_60 = local_60 >> 8;
    iVar5 = (carObj->N).wheelBackZ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_58 = (iVar5 >> 8) * (carObj->N).orientMat.m[6];
    if (local_58 < 0) {
      local_58 = local_58 + 0xff;
    }
    local_58 = local_58 >> 8;
    iVar5 = (carObj->N).wheelBackZ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_54 = (iVar5 >> 8) * (carObj->N).orientMat.m[7];
    if (local_54 < 0) {
      local_54 = local_54 + 0xff;
    }
    local_54 = local_54 >> 8;
    iVar5 = (carObj->N).wheelBackZ;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_50 = (iVar5 >> 8) * (carObj->N).orientMat.m[8];
    if (local_50 < 0) {
      local_50 = local_50 + 0xff;
    }
    local_50 = local_50 >> 8;
    local_78.x = (local_88 + local_68) - local_58;
    local_78.z = (local_80 + local_60) - local_50;
    local_78.y = (local_84 + local_64) - local_54;
    if ((1 < surfaceType) && (rearLimit < (int)ppuVar7)) {
      surfaceType = 3;
    }
    if (surfaceType == 0) {
      Cars_AddCarSfx__FP8Car_tObjiP8coorddefiii(carObj,3,&local_78,roadSurface,0,0);
    }
    else {
      Cars_AddCarSfx__FP8Car_tObjiP8coorddefiii(carObj,3,&local_78,roadSurface,surfaceType,1);
    }
  }
  if ((((bVar2) && (surfaceType == 1)) && (sVar1 != 0)) && (bVar3)) {
    surfaceType = (carObj->N).wheelBackX;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_68 = (surfaceType >> 8) * (carObj->N).orientMat.m[0];
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
    surfaceType = (carObj->N).wheelBackX;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_64 = (surfaceType >> 8) * (carObj->N).orientMat.m[1];
    if (local_64 < 0) {
      local_64 = local_64 + 0xff;
    }
    local_64 = local_64 >> 8;
    surfaceType = (carObj->N).wheelBackX;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_60 = (surfaceType >> 8) * (carObj->N).orientMat.m[2];
    if (local_60 < 0) {
      local_60 = local_60 + 0xff;
    }
    local_60 = local_60 >> 8;
    surfaceType = (carObj->N).wheelBackZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_58 = (surfaceType >> 8) * (carObj->N).orientMat.m[6];
    if (local_58 < 0) {
      local_58 = local_58 + 0xff;
    }
    local_58 = local_58 >> 8;
    surfaceType = (carObj->N).wheelBackZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_54 = (surfaceType >> 8) * (carObj->N).orientMat.m[7];
    if (local_54 < 0) {
      local_54 = local_54 + 0xff;
    }
    local_54 = local_54 >> 8;
    surfaceType = (carObj->N).wheelBackZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_50 = (surfaceType >> 8) * (carObj->N).orientMat.m[8];
    if (local_50 < 0) {
      local_50 = local_50 + 0xff;
    }
    local_50 = local_50 >> 8;
    local_78.x = (local_88 + local_68) - local_58;
    local_78.z = (local_80 + local_60) - local_50;
    local_78.y = (local_84 + local_64) - local_54;
    TrgSfx_AddCarSplash__FiiP8coorddefiT2ii
              ((carObj->N).objID,3,&local_78,10,&(carObj->N).linearVel,0,(carObj->N).speedXZ);
    if ((int)ppuVar7 < 1) {
      ppuVar7 = (undefined **)0x1;
    }
  }
  if ((((roadSurface & 0x20) != 0) && (gLeafPixmap != (Draw_tPixMap *)0x0)) &&
     ((0xa0000 < (carObj->N).speedXZ &&
      (pvVar6 = TrgSfx_AddCarExtraCheck__Fii((carObj->N).objID,3), pvVar6 != (void *)0x0)))) {
    roadSurface = random();
    surfaceType = ((roadSurface & 7) - 4) * 0x3333;
    iVar5 = (carObj->N).wheelBackX + surfaceType;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_68 = (iVar5 >> 8) * (carObj->N).orientMat.m[0];
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
    iVar5 = (carObj->N).wheelBackX + surfaceType;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_64 = (iVar5 >> 8) * (carObj->N).orientMat.m[1];
    if (local_64 < 0) {
      local_64 = local_64 + 0xff;
    }
    local_64 = local_64 >> 8;
    surfaceType = (carObj->N).wheelBackX + surfaceType;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_60 = (surfaceType >> 8) * (carObj->N).orientMat.m[2];
    if (local_60 < 0) {
      local_60 = local_60 + 0xff;
    }
    local_60 = local_60 >> 8;
    surfaceType = (carObj->N).wheelBackZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_58 = (surfaceType >> 8) * (carObj->N).orientMat.m[6];
    if (local_58 < 0) {
      local_58 = local_58 + 0xff;
    }
    local_58 = local_58 >> 8;
    surfaceType = (carObj->N).wheelBackZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_54 = (surfaceType >> 8) * (carObj->N).orientMat.m[7];
    if (local_54 < 0) {
      local_54 = local_54 + 0xff;
    }
    local_54 = local_54 >> 8;
    surfaceType = (carObj->N).wheelBackZ;
    if (surfaceType < 0) {
      surfaceType = surfaceType + 0xff;
    }
    local_50 = (surfaceType >> 8) * (carObj->N).orientMat.m[8];
    if (local_50 < 0) {
      local_50 = local_50 + 0xff;
    }
    local_50 = local_50 >> 8;
    local_78.x = (local_88 + local_68) - local_58;
    local_78.z = (local_80 + local_60) - local_50;
    local_78.y = (local_84 + local_64) - local_54;
    TrgSfx_AddCarExtraSfx__FiiP8coorddefiT2iii
              ((carObj->N).objID,3,&local_78,0xd,&(carObj->N).linearVel,(carObj->N).speedXZ,
               local_78.y,(carObj->render).bodyRoll);
  }
  if (force == (undefined **)0x0) {
    if ((carObj->oldAudioSkidState & 1U) == 0) goto LAB_80089674;
    Cars_SetAudioCalls__FP8Car_tObjiiiiii(carObj,3,0x12,2,local_38,0,0);
    roadSurface = carObj->oldAudioSkidState - 1;
  }
  else {
    if ((int)local_34 < 0) {
      local_34 = (undefined **)0x0;
    }
    if ((local_34 == (undefined **)0x0) && ((carObj->carFlags & 4U) == 0)) goto LAB_80089674;
    Cars_SetAudioCalls__FP8Car_tObjiiiiii(carObj,2,0x12,2,local_38,(int)force,0);
    roadSurface = carObj->oldAudioSkidState | 1;
  }
  carObj->oldAudioSkidState = roadSurface;
LAB_80089674:
  if (ppuVar7 == (undefined **)0x0) {
    if ((carObj->oldAudioSkidState & 2U) == 0) {
      return;
    }
    Cars_SetAudioCalls__FP8Car_tObjiiiiii(carObj,5,0x14,2,local_38,0,0);
    roadSurface = carObj->oldAudioSkidState - 2;
  }
  else {
    if ((int)local_30 < 0) {
      local_30 = (undefined **)0x0;
    }
    if ((local_30 == (undefined **)0x0) && ((carObj->carFlags & 4U) == 0)) {
      return;
    }
    Cars_SetAudioCalls__FP8Car_tObjiiiiii
              (carObj,4,0x14,2,local_38,(int)((int)ppuVar7 + ((uint)ppuVar7 >> 0x1f)) >> 1,0);
    roadSurface = carObj->oldAudioSkidState | 2;
  }
  carObj->oldAudioSkidState = roadSurface;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_FindTotalSlice__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1552, offset 0x80089760
	/* begin block 1 */
		// Start line: 1553
		// Start offset: 0x80089760

		/* begin block 1.1 */
			// Start line: 1555
			// Start offset: 0x80089760

			/* begin block 1.1.1 */
				// Start line: 1560
				// Start offset: 0x80089778
				// Variables:
			// 		int lapSlices; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800897C4
			// End Line: 1565
		/* end block 1.1 */
		// End offset: 0x800897C4
		// End Line: 1565
	/* end block 1 */
	// End offset: 0x800897C4
	// End Line: 1565

	/* begin block 2 */
		// Start line: 3392
	/* end block 2 */
	// End Line: 3393

	/* begin block 3 */
		// Start line: 3398
	/* end block 3 */
	// End Line: 3399

	/* begin block 4 */
		// Start line: 3398
	/* end block 4 */
	// End Line: 3399

	/* begin block 5 */
		// Start line: 3400
	/* end block 5 */
	// End Line: 3401

void Cars_FindTotalSlice__FP8Car_tObj(Car_tObj *carObj)

{
  short sVar1;
  short sVar2;
  
  if (0 < carObj->unlap) {
    (carObj->N).totalSlice = 0;
    return;
  }
  if (GameSetup_gData.reverseTrack == 0) {
    sVar1 = (short)carObj->lap;
    sVar2 = (carObj->N).simRoadInfo.slice;
  }
  else {
    sVar1 = (short)carObj->lap;
    sVar2 = ((short)gNumSlices - (carObj->N).simRoadInfo.slice) + -1;
  }
  (carObj->N).totalSlice = sVar2 + sVar1 * (short)gNumSlices;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Car_DoSkiddingStuff__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1575, offset 0x800897cc
	/* begin block 1 */
		// Start line: 1576
		// Start offset: 0x800897CC

		/* begin block 1.1 */
			// Start line: 1576
			// Start offset: 0x800897CC

			/* begin block 1.1.1 */
				// Start line: 1594
				// Start offset: 0x8008983C
				// Variables:
			// 		int speed; // $a1
			// 		int audioSurface; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800898CC
			// End Line: 1622
		/* end block 1.1 */
		// End offset: 0x800898CC
		// End Line: 1622
	/* end block 1 */
	// End offset: 0x800898CC
	// End Line: 1622

	/* begin block 2 */
		// Start line: 3434
	/* end block 2 */
	// End Line: 3435

	/* begin block 3 */
		// Start line: 3445
	/* end block 3 */
	// End Line: 3446

	/* begin block 4 */
		// Start line: 3445
	/* end block 4 */
	// End Line: 3446

void Car_DoSkiddingStuff__FP8Car_tObj(Car_tObj *carObj)

{
  uint uVar1;
  
  if ((carObj->N).orientationToGround.y < 0x3334) {
    if (((carObj->N).objAltitude < 0x3333) && (0x20000 < (carObj->N).speedXZ)) {
      Cars_SetAudioCalls__FP8Car_tObjiiiiii
                (carObj,4,0x14,1,Cars_kAudioRoadSurfaceInterface[(carObj->N).driveSurfaceType],
                 (int)&PTR_000a0000,0);
      uVar1 = carObj->oldAudioSkidState | 4;
    }
    else {
      Cars_SetAudioCalls__FP8Car_tObjiiiiii(carObj,5,0x14,1,0,0,0);
      uVar1 = carObj->oldAudioSkidState - 4;
    }
    carObj->oldAudioSkidState = uVar1;
  }
  else {
    if ((carObj->oldAudioSkidState & 4U) != 0) {
      Cars_SetAudioCalls__FP8Car_tObjiiiiii(carObj,5,0x14,1,0,0,0);
      carObj->oldAudioSkidState = carObj->oldAudioSkidState + -4;
    }
    Car_TireSkiddingStuff__FP8Car_tObj(carObj);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Car_DoPostCollisionStuff__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1653, offset 0x800898dc
	/* begin block 1 */
		// Start line: 1654
		// Start offset: 0x800898DC

		/* begin block 1.1 */
			// Start line: 1684
			// Start offset: 0x80089970

			/* begin block 1.1.1 */
				// Start line: 1718
				// Start offset: 0x80089A1C
				// Variables:
			// 		int Yoffset; // $s1
			/* end block 1.1.1 */
			// End offset: 0x80089A74
			// End Line: 1720
		/* end block 1.1 */
		// End offset: 0x80089B30
		// End Line: 1732
	/* end block 1 */
	// End offset: 0x80089B30
	// End Line: 1732

	/* begin block 2 */
		// Start line: 3575
	/* end block 2 */
	// End Line: 3576

	/* begin block 3 */
		// Start line: 3607
	/* end block 3 */
	// End Line: 3608

	/* begin block 4 */
		// Start line: 3607
	/* end block 4 */
	// End Line: 3608

void Car_DoPostCollisionStuff__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  Car_tSpecs *pCVar2;
  int iVar3;
  uint uVar4;
  BO_tNewtonObj *pBVar5;
  GameSetup_tCarData *pGVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = (carObj->N).collision.impulse;
  carObj->gripFactor = 0;
  if (iVar1 != 0) {
    (carObj->N).collision.lastImpulse = iVar1;
    pBVar5 = (carObj->N).collision.otherObj;
    (carObj->N).collision.lastTime = simGlobal.gameTicks;
    if (pBVar5 == (BO_tNewtonObj *)0x0) {
      (carObj->N).collision.lastOtherObj = (BO_tNewtonObj *)0x0;
    }
    else {
      (carObj->N).collision.lastOtherObj = pBVar5;
    }
  }
  if (((carObj->N).simOptz == '\0') && ((carObj->N).active != '\0')) {
    AIPhysic_ProcessCollision__FP8Car_tObj(carObj);
    Cars_DoExtraCarCollisionProcessing__FP8Car_tObj(carObj);
    Car_DoSkiddingStuff__FP8Car_tObj(carObj);
    if (((carObj->carFlags & 4U) == 0) || ((carObj->N).flightTime != 0)) {
      iVar8 = carObj->audio[5].force;
      iVar1 = (carObj->linearAcc_ch).x;
      carObj->audio[5].surface2 = carObj->audio[5].surface2 * 0xf + (carObj->linearAcc_ch).z >> 4;
      iVar1 = iVar8 * 0xf + iVar1 >> 4;
    }
    else {
      iVar8 = carObj->audio[5].force;
      iVar1 = (carObj->linearAcc_ch).x;
      carObj->audio[5].surface2 = carObj->audio[5].surface2 * 7 + (carObj->linearAcc_ch).z >> 3;
      iVar1 = iVar8 * 7 + iVar1 >> 3;
    }
    carObj->audio[5].force = iVar1;
    iVar3 = (carObj->N).groundVel;
    iVar1 = -iVar3;
    iVar8 = iVar1;
    if (0 < iVar3) {
      iVar8 = iVar1 + 0x1f;
    }
    iVar9 = -0xa3d;
    if (-0xa3d < iVar8 >> 5) {
      if (0 < iVar3) {
        iVar1 = iVar1 + 0x1f;
      }
      iVar9 = 0x51e;
      if (iVar1 >> 5 < 0x51f) {
        iVar9 = iVar1 >> 5;
      }
    }
    uVar4 = carObj->audio[5].force * 3;
    uVar4 = fixedmult((int)(uVar4 + (uVar4 >> 0x1f)) >> 1,carObj->specs->bodyRollFactor);
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    iVar3 = carObj->audio[6].channel;
    iVar8 = carObj->audio[5].force;
    iVar1 = carObj->specs->rideOffset;
    carObj->audio[5].surface1 = iVar8;
    carObj->audio[5].panangle = (iVar9 - uVar4) - iVar1;
    uVar4 = fixedmult(iVar8,iVar3);
    iVar8 = carObj->audio[6].type;
    iVar1 = carObj->audio[5].surface2;
    carObj->audio[5].surface1 = uVar4;
    iVar1 = -iVar1;
    carObj->audio[5].channel = iVar1;
    uVar4 = fixedmult(iVar1,iVar8);
    pGVar6 = carObj->carInfo;
    carObj->audio[5].channel = uVar4;
    if ((pGVar6->WeightTransfer == 1) || ((carObj->carFlags & 4U) == 0)) {
      uVar7 = carObj->audio[5].surface1;
      carObj->audio[5].channel = (int)(uVar4 + (uVar4 >> 0x1f)) >> 1;
      carObj->audio[5].surface1 = (int)(uVar7 + (uVar7 >> 0x1f)) >> 1;
    }
  }
  else {
    pCVar2 = carObj->specs;
    carObj->audio[5].channel = 0;
    carObj->audio[5].surface1 = 0;
    carObj->audio[5].panangle = -pCVar2->rideOffset;
    Cars_DoExtraCarCollisionProcessing__FP8Car_tObj(carObj);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_CalculateStartingGridOffset__FP8Car_tObjPiP8coorddef(struct Car_tObj *carObj /*$a0*/, int *slice /*$s1*/, struct coorddef *offset /*$s2*/)
 // line 1741, offset 0x80089b44
	/* begin block 1 */
		// Start line: 1742
		// Start offset: 0x80089B44
		// Variables:
	// 		int startingPosition; // $a3
	// 		int carOnRight; // $s0
	// 		int negDir; // $a1

		/* begin block 1.1 */
			// Start line: 1768
			// Start offset: 0x80089C6C

			/* begin block 1.1.1 */
				// Start line: 1769
				// Start offset: 0x80089C7C
				// Variables:
			// 		int center; // $v1
			// 		int totalWidth; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80089D00
			// End Line: 1777
		/* end block 1.1 */
		// End offset: 0x80089D64
		// End Line: 1783
	/* end block 1 */
	// End offset: 0x80089D64
	// End Line: 1786

	/* begin block 2 */
		// Start line: 3802
	/* end block 2 */
	// End Line: 3803

	/* begin block 3 */
		// Start line: 3805
	/* end block 3 */
	// End Line: 3806

	/* begin block 4 */
		// Start line: 3805
	/* end block 4 */
	// End Line: 3806

void Cars_CalculateStartingGridOffset__FP8Car_tObjPiP8coorddef
               (Car_tObj *carObj,int *slice,coorddef *offset)

{
  Trk_NewSlice *pTVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = -1;
  if (GameSetup_gData.reverseTrack != 0) {
    iVar2 = 1;
  }
  uVar6 = GameSetup_gData.carInfo[carObj->carIndex].StartingPos;
  if (Cars_gNumRaceCars < 3) {
    if (-1 < iVar2) {
      if (gNumSlices <= iVar2) {
        iVar2 = iVar2 - gNumSlices;
      }
      *slice = iVar2;
      goto LAB_80089c40;
    }
  }
  else {
    iVar2 = iVar2 + iVar2 * 10 * uVar6;
    if (-1 < iVar2) {
      if (gNumSlices <= iVar2) {
        iVar2 = iVar2 - gNumSlices;
      }
      *slice = iVar2;
      goto LAB_80089c40;
    }
  }
  *slice = iVar2 + gNumSlices;
LAB_80089c40:
  uVar6 = uVar6 & 1;
  if ((carObj->script).lastReactionIndex[2] * AITune_driveSide == -1) {
    uVar6 = 1 - uVar6;
  }
  iVar2 = AITune_GetOneWay__Fv();
  if (iVar2 == 0) {
    if (uVar6 == 0) {
      uVar6 = (uint)BWorldSm_slices[*slice].avgPavedWidthLf * -0x8000;
      iVar2 = (int)(uVar6 + (uVar6 >> 0x1f)) >> 1;
    }
    else {
      iVar2 = (uint)BWorldSm_slices[*slice].avgPavedWidthRt << 0xe;
    }
  }
  else {
    pTVar1 = BWorldSm_slices + *slice;
    uVar3 = (uint)(pTVar1->laneCount >> 4);
    iVar7 = (uint)pTVar1->avgPavedWidthLf * 0x8000 * uVar3;
    uVar5 = (uint)pTVar1->laneCount & 0xf;
    iVar4 = uVar3 + uVar5;
    uVar3 = iVar7 + (uint)pTVar1->avgPavedWidthRt * 0x8000 * uVar5;
    iVar7 = (uVar3 >> 1) - iVar7;
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (uVar3 == 0x80000000)) {
      trap(0x1800);
    }
    iVar2 = iVar7 + (int)uVar3 / iVar4;
    if (uVar6 == 0) {
      iVar2 = iVar7 - (int)uVar3 / iVar4;
    }
  }
  offset->x = iVar2;
  offset->y = 0x8000;
  offset->z = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_IniCarObjects__FP8Car_tObji(struct Car_tObj *carObj /*$s0*/, int index /*$s1*/)
 // line 1794, offset 0x80089d88
	/* begin block 1 */
		// Start line: 1795
		// Start offset: 0x80089D88
		// Variables:
	// 		int startSlice; // stack offset -24
	// 		struct coorddef offset; // stack offset -40

		/* begin block 1.1 */
			// Start line: 1795
			// Start offset: 0x80089D88

			/* begin block 1.1.1 */
				// Start line: 1808
				// Start offset: 0x80089DC4
				// Variables:
			// 		int carMass; // $a2
			/* end block 1.1.1 */
			// End offset: 0x80089E8C
			// End Line: 1829
		/* end block 1.1 */
		// End offset: 0x80089E8C
		// End Line: 1829

		/* begin block 1.2 */
			// Start line: 1861
			// Start offset: 0x80089F4C
			// Variables:
		// 		int k; // $a0
		/* end block 1.2 */
		// End offset: 0x8008A018
		// End Line: 1919
	/* end block 1 */
	// End offset: 0x8008A160
	// End Line: 2008

	/* begin block 2 */
		// Start line: 3914
	/* end block 2 */
	// End Line: 3915

	/* begin block 3 */
		// Start line: 3922
	/* end block 3 */
	// End Line: 3923

	/* begin block 4 */
		// Start line: 3922
	/* end block 4 */
	// End Line: 3923

void Cars_IniCarObjects__FP8Car_tObji(Car_tObj *carObj,int index)

{
  ushort uVar1;
  GameSetup_tCarData *pGVar2;
  int direction;
  Car_tObj *pCVar3;
  Car_tSpecs *pCVar4;
  undefined *mass;
  coorddef cStack40;
  int local_18 [2];
  
  Cars_InitStats__FP8Car_tObj(carObj);
  carObj->swapCar = (Car_tObj *)0x0;
  carObj->swapTime = 0;
  if (index < GameSetup_gData.numCars) {
    direction = carObj->carInfo->carType;
    if (((((direction == 0x21) || (direction == 0x24)) || (direction == 0x26)) ||
        ((direction == 0x27 || (direction == 0x2f)))) ||
       ((direction == 0x30 || (direction == 0x31)))) {
      mass = &DAT_00190000;
    }
    else {
      if ((((direction == 0x22) || (direction == 0x25)) || (direction == 0x29)) ||
         ((direction == 0x2b || (direction == 0x2c)))) {
        mass = &DAT_00110000;
      }
      else {
        direction = carObj->specs->mass;
        if (direction < 0) {
          direction = direction + 0x7f;
        }
        mass = (undefined *)(direction >> 7);
      }
    }
    Newton_InitBaseNewtonObj__FP13BO_tNewtonObjiiiiii
              ((BO_tNewtonObj *)carObj,index | 0x100,(int)mass,(int)mass,(carObj->N).dimension.x,
               (carObj->N).dimension.y,(carObj->N).dimension.z);
  }
  Cars_CalculateStartingGridOffset__FP8Car_tObjPiP8coorddef(carObj,local_18,&cStack40);
  if ((int)(gNumSlices + ((uint)gNumSlices >> 0x1f)) >> 1 < local_18[0]) {
    (carObj->stats).extractSlice = gNumSlices - local_18[0];
  }
  else {
    (carObj->stats).extractSlice = local_18[0];
  }
  if (GameSetup_gData.reverseTrack == 0) {
    direction = 1;
  }
  else {
    direction = -1;
  }
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)carObj,local_18[0],&cStack40,direction);
  carObj->unlap = 1;
  carObj->lap = 0;
  if (GameSetup_gData.reverseTrack == 0) {
    uVar1 = (carObj->N).simRoadInfo.slice;
  }
  else {
    uVar1 = ((short)gNumSlices - (carObj->N).simRoadInfo.slice) - 1;
  }
  (carObj->N).oldSlice = uVar1;
  Cars_FindTotalSlice__FP8Car_tObj(carObj);
  direction = 0;
  carObj->RSControl = 0;
  carObj->RSSteering = 0;
  carObj->RSGasLevel = '\0';
  carObj->RSBrakeLevel = '\0';
  carObj->glue = 0x10000;
  carObj->aDesired = 0x10000;
  carObj->aCarWRTRoad = 0;
  carObj->crash = 0;
  carObj->blowout = 0;
  carObj->pullOver = 0;
  (carObj->linearAcc).x = 0;
  (carObj->linearAcc).y = 0;
  (carObj->linearAcc).z = 0;
  (carObj->angularAcc).x = 0;
  (carObj->angularAcc).y = 0;
  (carObj->angularAcc).z = 0;
  (carObj->linearAcc_ch).x = 0;
  (carObj->linearAcc_ch).y = 0;
  (carObj->linearAcc_ch).z = 0;
  (carObj->linearAcc_rh).x = 0;
  (carObj->linearAcc_rh).y = 0;
  (carObj->linearAcc_rh).z = 0;
  (carObj->linearVel_ch).x = 0;
  (carObj->linearVel_ch).y = 0;
  (carObj->linearVel_ch).z = 0;
  (carObj->angularVel_ch).x = 0;
  (carObj->angularVel_ch).y = 0;
  (carObj->angularVel_ch).z = 0;
  pCVar3 = carObj;
  do {
    pCVar3->wheel[0].actualHeight = 0;
    pCVar3->wheel[0].currentPos.x = 0;
    pCVar3->wheel[0].currentPos.y = 0;
    pCVar3->wheel[0].currentPos.z = 0;
    pCVar3->wheel[0].roadNormal.x = 0;
    pCVar3->wheel[0].roadNormal.y = 0x10000;
    pCVar3->wheel[0].roadNormal.z = 0;
    pCVar3->wheel[0].wheelAcc = 0;
    pCVar3->wheel[0].wheelInAir = 0;
    pCVar3->wheel[0].rebound = 0;
    pCVar3->wheel[0].impactCompression = 0;
    pCVar3->wheel[0].roadSurfaceType = 1;
    direction = direction + 1;
    pCVar3 = (Car_tObj *)&(pCVar3->N).simRoadInfo.quadPts[2].z;
  } while (direction < 4);
  (carObj->control).desiredGear = '\x01';
  (carObj->control).gear = '\x01';
  (carObj->control).lastGear = '\x01';
  carObj->flywheelRpm = 0;
  carObj->wheelSpin = 0;
  carObj->frontWheelSpin = 0;
  carObj->wheelLock = 0;
  carObj->slide = 0;
  carObj->frontSkid = 0;
  carObj->rearSkid = 0;
  (carObj->control).desiredGasLevel = '\0';
  (carObj->control).desiredBrakeLevel = '\0';
  (carObj->control).desiredSteering = 0;
  (carObj->control).downShifting = '\0';
  (carObj->control).gearShiftTimer = '\0';
  (carObj->control).gasLevel = '\0';
  (carObj->control).brakeLevel = '\0';
  (carObj->control).steering = 0;
  (carObj->control).handBrake = '\0';
  (carObj->control).horn = '\0';
  if (GameSetup_gData.Time == 0) {
    (carObj->control).lights = '\0';
  }
  else {
    (carObj->control).lights = '\x03';
  }
  (carObj->control).abort = '\0';
  (carObj->control).lookBehind = '\0';
  (carObj->control).hanno = 0;
  (carObj->control).event = '\0';
  (carObj->control).queuedEvent = '\0';
  carObj->gTransferFront = 0;
  carObj->oldSkidState = 0;
  carObj->oldAudioSkidState = 0;
  carObj->frontSkid = 0;
  carObj->rearSkid = 0;
  AIInit_RestartAICar__FP8Car_tObj(carObj);
  pGVar2 = carObj->carInfo;
  carObj->gripFactor = 0;
  carObj->forceNoSimOptz = 0;
  carObj->AIFishtailEndTick = 0;
  carObj->lookAheadSlice = 0;
  (carObj->N).flightTime = 0;
  (carObj->N).collision.collided = 0;
  (carObj->N).collision.lastCollision = 0;
  (carObj->N).collision.impulse = 0;
  (carObj->N).collision.otherObj = (BO_tNewtonObj *)0x0;
  (carObj->N).collision.disableCollisionTimer = 0;
  (carObj->N).groundVel = 0;
  (carObj->N).roadGravityModifier = 0;
  (carObj->N).speedXZ = 0;
  carObj->audio[5].channel = 0;
  carObj->audio[5].surface1 = 0;
  carObj->audio[5].surface2 = 0;
  carObj->audio[5].force = 0;
  carObj->audio[5].panangle = 0;
  if (pGVar2->carType < 0x1d) {
    direction = fixeddiv(carObj->specs->bodyPitchFactor,carObj->specs->suspensionStiffness * 3);
    pCVar4 = carObj->specs;
    carObj->audio[6].type = direction;
    direction = fixeddiv(pCVar4->bodyRollFactor,pCVar4->suspensionStiffness << 1);
    carObj->audio[6].channel = direction;
  }
  else {
    carObj->audio[6].type = 0;
    carObj->audio[6].channel = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_InitCar__FP8Car_tObji(struct Car_tObj *carObj /*$s1*/, int index /*$s5*/)
 // line 2031, offset 0x8008a174
	/* begin block 1 */
		// Start line: 2032
		// Start offset: 0x8008A174
		// Variables:
	// 		char carFile[100]; // stack offset -264
	// 		char specsFile[100]; // stack offset -160
	// 		char name[20]; // stack offset -56
	// 		char *file2; // $s2
	// 		char *file1; // $s3
	// 		struct Udff_tInfo *handle; // $s4
	// 		struct Udff_tInfo *handle2; // $s0
	/* end block 1 */
	// End offset: 0x8008A460
	// End Line: 2226

	/* begin block 2 */
		// Start line: 4491
	/* end block 2 */
	// End Line: 4492

	/* begin block 3 */
		// Start line: 4515
	/* end block 3 */
	// End Line: 4516

	/* begin block 4 */
		// Start line: 4515
	/* end block 4 */
	// End Line: 4516

	/* begin block 5 */
		// Start line: 4557
	/* end block 5 */
	// End Line: 4558

void Cars_InitCar__FP8Car_tObji(Car_tObj *carObj,int index)

{
  int iVar1;
  byte *mem;
  Car_tSpecs *pCVar2;
  Udff_tInfo *handle;
  byte *pbVar3;
  char *mem_00;
  Udff_tInfo *handle_00;
  char acStack264 [104];
  char acStack160 [104];
  byte abStack56 [24];
  
  pbVar3 = (byte *)0x0;
  mem_00 = (char *)0x0;
  handle_00 = (Udff_tInfo *)0x0;
  handle = (Udff_tInfo *)0x0;
  if (index < GameSetup_gData.numCars) {
    iVar1 = AIInit_IsNonStandardCarFile__Fi(carObj->carInfo->carType);
    if (iVar1 == 0) {
      sprintf(acStack264,s__sSTDR_qda_80055994,PTR_80116478);
    }
    else {
      sprintf(acStack264,s__s_s_qda_80055988,PTR_80116478,carObj->carName);
    }
    mem_00 = (char *)loadpackadr(acStack264,0x10);
    handle_00 = Udff_Opena__FPcT0i((char *)0x0,mem_00,1);
    iVar1 = carObj->carInfo->carType;
    if (iVar1 < 0x1d) {
      sprintf((char *)abStack56,s_p_s_dat_8013c7ec,GameSetup_gCarNames + iVar1 * 5);
    }
    else {
      sprintf((char *)abStack56,s_ptram_dat_800559a0);
    }
    sprintf(acStack160,s__sdusty_viv_800559ac,PTR_80116474);
    pbVar3 = (byte *)loadfileadrz(acStack160,0x10);
    mem = locatebig(pbVar3,abStack56);
    handle = Udff_Opena__FPcT0i((char *)0x0,(char *)mem,0);
    if (index < GameSetup_gData.numCars) {
      AIInit_InitAICar__FP8Car_tObjP10Udff_tInfo(carObj,handle_00);
      AIInit_RestartAICar__FP8Car_tObj(carObj);
      pCVar2 = (Car_tSpecs *)reservememadr(s_carSpecs_800559b8,0x1d0,0);
      carObj->specs = pCVar2;
      Physics_InitCarSpecs__FP8Car_tObjP10Udff_tInfo(carObj,handle);
      if ((carObj->carFlags & 4U) != 0) {
        Physics_CalculateDerivedCarSpecs__FP8Car_tObj(carObj);
      }
    }
  }
  carObj->funcUpdateRoadInfo = Newton_UpdateRoadInfo__FP13BO_tNewtonObj;
  carObj->funcReplay = Replay_DoReplay__FP8Car_tObj;
  carObj->funcControl = Control_Human__FP8Car_tObj;
  carObj->funcStats = Stats_TrackStats__FP8Car_tObj;
  carObj->funcHandlingPhysics = Physics_SimCar__FP8Car_tObj;
  carObj->funcGravityPhysics = Newton_ApplyTheLawOfGravity__FP13BO_tNewtonObj;
  carObj->funcQDPhysicsUpdateVel = Newton_QDUpdateVel__FP13BO_tNewtonObj;
  carObj->funcQDPhysicsUpdateRot = Newton_QDUpdateRot64Hz__FP13BO_tNewtonObj;
  carObj->funcTestMeForCollisions = Collide_CheckMeForCollisions__FP13BO_tNewtonObj;
  carObj->funcDoPostCollisionStuff = Car_DoPostCollisionStuff__FP8Car_tObj;
  if ((carObj->carFlags & 2U) != 0) {
    carObj->funcControl = Control_AI__FP8Car_tObj;
    carObj->funcHandlingPhysics = AIPhysic_Main__FP8Car_tObj;
    carObj->funcReplay = (_func_4 *)0x0;
    carObj->funcQDPhysicsUpdateRot = Newton_QDUpdateRot32Hz__FP13BO_tNewtonObj;
  }
  if ((((carObj->carFlags & 4U) != 0) && (GameSetup_gData.catchupLogic != 0)) &&
     (0 < GameSetup_gData.commMode)) {
    carObj->funcQDPhysicsUpdateVel = Cars_QDUpdateVelGlue__FP8Car_tObj;
  }
  R3DCar_Instantiate3DCar__FP8Car_tObji(carObj,index);
  if (index < GameSetup_gData.numCars) {
    Udff_Close__FP10Udff_tInfo(handle_00);
    Udff_Close__FP10Udff_tInfo(handle);
    purgememadr((int)pbVar3);
    purgememadr((int)mem_00);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_DeInitCar__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 2232, offset 0x8008a484
	/* begin block 1 */
		// Start line: 2233
		// Start offset: 0x8008A484
	/* end block 1 */
	// End offset: 0x8008A4B4
	// End Line: 2241

	/* begin block 2 */
		// Start line: 4995
	/* end block 2 */
	// End Line: 4996

	/* begin block 3 */
		// Start line: 5002
	/* end block 3 */
	// End Line: 5003

	/* begin block 4 */
		// Start line: 5002
	/* end block 4 */
	// End Line: 5003

void Cars_DeInitCar__FP8Car_tObj(Car_tObj *carObj)

{
  AIInit_DeInitAICar__FP8Car_tObj(carObj);
  if (carObj->specs != (Car_tSpecs *)0x0) {
    purgememadr((int)carObj->specs);
    carObj->specs = (Car_tSpecs *)0x0;
  }
  R3DCar_DeInstantiate3DCar__FP8Car_tObj(carObj);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_Restart__Fv()
 // line 2246, offset 0x8008a4cc
	/* begin block 1 */
		// Start line: 2247
		// Start offset: 0x8008A4CC
		// Variables:
	// 		int i; // $s0

		/* begin block 1.1 */
			// Start line: 2256
			// Start offset: 0x8008A528

			/* begin block 1.1.1 */
				// Start line: 2256
				// Start offset: 0x8008A534
			/* end block 1.1.1 */
			// End offset: 0x8008A548
			// End Line: 2262
		/* end block 1.1 */
		// End offset: 0x8008A560
		// End Line: 2263
	/* end block 1 */
	// End offset: 0x8008A59C
	// End Line: 2274

	/* begin block 2 */
		// Start line: 5024
	/* end block 2 */
	// End Line: 5025

	/* begin block 3 */
		// Start line: 5030
	/* end block 3 */
	// End Line: 5031

	/* begin block 4 */
		// Start line: 5030
	/* end block 4 */
	// End Line: 5031

	/* begin block 5 */
		// Start line: 5033
	/* end block 5 */
	// End Line: 5034

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Cars_Restart__Fv(void)

{
  Car_tObj *carObj;
  Object_tIMassObjInfo *pOVar1;
  Car_tObj **ppCVar2;
  Car_tObj **ppCVar3;
  Car_tObj **ppCVar4;
  int iVar5;
  int index;
  
  index = Cars_gNumCars;
  iVar5 = 0;
  if (0 < Cars_gNumCars) {
    ppCVar4 = &Cars_gTotalSortedList9;
    ppCVar2 = &Cars_gList9;
    ppCVar3 = &Cars_gSortedList9;
    do {
      iVar5 = iVar5 + 1;
      *ppCVar3 = *ppCVar2;
      carObj = *ppCVar2;
      ppCVar2 = ppCVar2 + 1;
      ppCVar3 = ppCVar3 + 1;
      *ppCVar4 = carObj;
      ppCVar4 = ppCVar4 + 1;
    } while (iVar5 < index);
  }
  ppCVar2 = &Cars_gList9;
  index = 0;
  while (index < Cars_gNumCars) {
    carObj = *ppCVar2;
    ppCVar2 = ppCVar2 + 1;
    Cars_IniCarObjects__FP8Car_tObji(carObj,index);
    index = index + 1;
  }
  index = 0;
  while( true ) {
    iVar5 = Object_GetNumIMassObjects__Fv();
    if (iVar5 <= index) break;
    pOVar1 = Object_IMassObjInst + index;
    (pOVar1->lastPos).x = 0;
    (pOVar1->lastPos).y = 0;
    (pOVar1->lastPos).z = 0;
    pOVar1->lastTick = 0;
    index = index + 1;
  }
  accidentSlice = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_Initialize__FPci(char *mem /*$a0*/, int size /*$a1*/)
 // line 2351, offset 0x8008a5b4
	/* begin block 1 */
		// Start line: 2352
		// Start offset: 0x8008A5B4
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8008A5D0
	// End Line: 2358

	/* begin block 2 */
		// Start line: 5176
	/* end block 2 */
	// End Line: 5177

	/* begin block 3 */
		// Start line: 5254
	/* end block 3 */
	// End Line: 5255

	/* begin block 4 */
		// Start line: 5254
	/* end block 4 */
	// End Line: 5255

	/* begin block 5 */
		// Start line: 5256
	/* end block 5 */
	// End Line: 5257

void Cars_Initialize__FPci(char *mem,int size)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < size) {
    do {
      *mem = '\0';
      iVar1 = iVar1 + 1;
      mem = mem + 1;
    } while (iVar1 < size);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_StartUp__Fv()
 // line 2363, offset 0x8008a5d8
	/* begin block 1 */
		// Start line: 2364
		// Start offset: 0x8008A5D8
		// Variables:
	// 		int i; // $s1
	// 		struct Car_tObj *newCar; // $s0

		/* begin block 1.1 */
			// Start line: 2401
			// Start offset: 0x8008A674

			/* begin block 1.1.1 */
				// Start line: 2401
				// Start offset: 0x8008A680
				// Variables:
			// 		struct coorddef dim; // stack offset -40
			/* end block 1.1.1 */
			// End offset: 0x8008A694
			// End Line: 2404
		/* end block 1.1 */
		// End offset: 0x8008A6E0
		// End Line: 2406

		/* begin block 1.2 */
			// Start line: 2409
			// Start offset: 0x8008A6E0

			/* begin block 1.2.1 */
				// Start line: 2409
				// Start offset: 0x8008A6FC
				// Variables:
			// 		struct Car_tObj *carObj; // $s0
			/* end block 1.2.1 */
			// End offset: 0x8008A710
			// End Line: 2412
		/* end block 1.2 */
		// End offset: 0x8008A740
		// End Line: 2422

		/* begin block 1.3 */
			// Start line: 2426
			// Start offset: 0x8008A75C

			/* begin block 1.3.1 */
				// Start line: 2428
				// Start offset: 0x8008A780
				// Variables:
			// 		struct Car_tObj *carObj; // $a2
			/* end block 1.3.1 */
			// End offset: 0x8008A794
			// End Line: 2431
		/* end block 1.3 */
		// End offset: 0x8008A7B4
		// End Line: 2434

		/* begin block 1.4 */
			// Start line: 2435
			// Start offset: 0x8008A7B4

			/* begin block 1.4.1 */
				// Start line: 2435
				// Start offset: 0x8008A7D0
				// Variables:
			// 		struct Car_tObj *carObj; // $a2
			/* end block 1.4.1 */
			// End offset: 0x8008A7E4
			// End Line: 2438
		/* end block 1.4 */
		// End offset: 0x8008A804
		// End Line: 2441

		/* begin block 1.5 */
			// Start line: 2442
			// Start offset: 0x8008A804

			/* begin block 1.5.1 */
				// Start line: 2442
				// Start offset: 0x8008A820
				// Variables:
			// 		struct Car_tObj *carObj; // $a2
			/* end block 1.5.1 */
			// End offset: 0x8008A834
			// End Line: 2445
		/* end block 1.5 */
		// End offset: 0x8008A854
		// End Line: 2448

		/* begin block 1.6 */
			// Start line: 2449
			// Start offset: 0x8008A854

			/* begin block 1.6.1 */
				// Start line: 2449
				// Start offset: 0x8008A870
				// Variables:
			// 		struct Car_tObj *carObj; // $a2
			/* end block 1.6.1 */
			// End offset: 0x8008A884
			// End Line: 2452
		/* end block 1.6 */
		// End offset: 0x8008A8A4
		// End Line: 2455

		/* begin block 1.7 */
			// Start line: 2456
			// Start offset: 0x8008A8A4

			/* begin block 1.7.1 */
				// Start line: 2456
				// Start offset: 0x8008A8C0
				// Variables:
			// 		struct Car_tObj *carObj; // $a2
			/* end block 1.7.1 */
			// End offset: 0x8008A8D4
			// End Line: 2459
		/* end block 1.7 */
		// End offset: 0x8008A8F4
		// End Line: 2462

		/* begin block 1.8 */
			// Start line: 2465
			// Start offset: 0x8008A8F4

			/* begin block 1.8.1 */
				// Start line: 2469
				// Start offset: 0x8008A914
				// Variables:
			// 		struct Car_tObj *carObj; // $a2
			/* end block 1.8.1 */
			// End offset: 0x8008A954
			// End Line: 2475
		/* end block 1.8 */
		// End offset: 0x8008A960
		// End Line: 2476

		/* begin block 1.9 */
			// Start line: 2477
			// Start offset: 0x8008A960

			/* begin block 1.9.1 */
				// Start line: 2477
				// Start offset: 0x8008A978
				// Variables:
			// 		struct Car_tObj *carObj; // $a2
			/* end block 1.9.1 */
			// End offset: 0x8008A98C
			// End Line: 2480
		/* end block 1.9 */
		// End offset: 0x8008A9AC
		// End Line: 2483

		/* begin block 1.10 */
			// Start line: 2486
			// Start offset: 0x8008A9AC

			/* begin block 1.10.1 */
				// Start line: 2486
				// Start offset: 0x8008A9C8
				// Variables:
			// 		struct Car_tObj *carObj; // $a2
			/* end block 1.10.1 */
			// End offset: 0x8008AA14
			// End Line: 2498
		/* end block 1.10 */
		// End offset: 0x8008AA20
		// End Line: 2500
	/* end block 1 */
	// End offset: 0x8008AA20
	// End Line: 2500

	/* begin block 2 */
		// Start line: 5272
	/* end block 2 */
	// End Line: 5273

	/* begin block 3 */
		// Start line: 5278
	/* end block 3 */
	// End Line: 5279

	/* begin block 4 */
		// Start line: 5278
	/* end block 4 */
	// End Line: 5279

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Cars_StartUp__Fv(void)

{
  Sched_tSchedule *schedule;
  BO_tNewtonObj *newtonObj;
  Car_tObj *carObj;
  Car_tObj **ppCVar1;
  int index;
  int iVar2;
  coorddef local_28;
  
  Cars_ResetCarCounters__Fv();
  index = 0;
  if (0 < GameSetup_gData.numCars) {
    iVar2 = 0;
    do {
      carObj = (Car_tObj *)reservememadr(s_Car_tObj_800559c4,0x8dc,0);
      Cars_Initialize__FPci((char *)carObj,0x8dc);
      if (index < GameSetup_gData.numCars) {
        carObj->carInfo = (GameSetup_tCarData *)((int)&GameSetup_gData.carInfo[0].carType + iVar2);
      }
      Cars_InitializeCarTablesFlagsAndCounters__FP8Car_tObj(carObj);
      index = index + 1;
      iVar2 = iVar2 + 0xb4;
    } while (index < GameSetup_gData.numCars);
  }
  index = 0;
  newtonObj = InfiniteMassNewton;
  while (iVar2 = Object_GetNumIMassObjects__Fv(), index < iVar2) {
    Object_GetIMassObjectDimensions__FiP8coorddef(index,&local_28);
    index = index + 1;
    Newton_InitBaseNewtonObj__FP13BO_tNewtonObjiiiiii
              (newtonObj,0x201,(int)&DAT_00280000,0x1400000,local_28.x,local_28.y,
               local_28.z + 0x10000);
    newtonObj = newtonObj + 1;
  }
  ppCVar1 = &Cars_gList9;
  index = 0;
  while (index < GameSetup_gData.numCars) {
    carObj = *ppCVar1;
    ppCVar1 = ppCVar1 + 1;
    Cars_InitCar__FP8Car_tObji(carObj,index);
    Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
              (simGlobal.schedule32Hz,
               (TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function)
               carObj->funcUpdateRoadInfo,carObj,6);
    index = index + 1;
  }
  if (R3DCar_LicenseShapeFile != (char *)0x0) {
    purgememadr((int)R3DCar_LicenseShapeFile);
  }
  R3DCar_LicenseShapeFile = (char *)0x0;
  index = 0;
  ppCVar1 = &Cars_gList9;
  while (index < GameSetup_gData.numCars) {
    carObj = *ppCVar1;
    ppCVar1 = ppCVar1 + 1;
    index = index + 1;
    Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
              (simGlobal.schedule32Hz,
               (TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function)
               carObj->funcControl,carObj,0x15);
  }
  index = 0;
  ppCVar1 = &Cars_gList9;
  while (index < GameSetup_gData.numCars) {
    carObj = *ppCVar1;
    ppCVar1 = ppCVar1 + 1;
    index = index + 1;
    Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
              (simGlobal.schedule32Hz,
               (TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function)
               carObj->funcHandlingPhysics,carObj,0x1e);
  }
  index = 0;
  ppCVar1 = &Cars_gList9;
  while (index < GameSetup_gData.numCars) {
    carObj = *ppCVar1;
    ppCVar1 = ppCVar1 + 1;
    index = index + 1;
    Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
              (simGlobal.schedule32Hz,
               (TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function)
               carObj->funcGravityPhysics,carObj,0x1e);
  }
  index = 0;
  ppCVar1 = &Cars_gList9;
  while (index < GameSetup_gData.numCars) {
    carObj = *ppCVar1;
    ppCVar1 = ppCVar1 + 1;
    index = index + 1;
    Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
              (simGlobal.schedule32Hz,
               (TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function)
               carObj->funcTestMeForCollisions,carObj,0x28);
  }
  index = 0;
  ppCVar1 = &Cars_gList9;
  while (index < GameSetup_gData.numCars) {
    carObj = *ppCVar1;
    ppCVar1 = ppCVar1 + 1;
    index = index + 1;
    Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
              (simGlobal.schedule32Hz,
               (TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function)
               carObj->funcDoPostCollisionStuff,carObj,0x32);
  }
  index = 0;
  Force_StartUp__Fv();
  ppCVar1 = &Cars_gList9;
  while (index < GameSetup_gData.numCars) {
    carObj = *ppCVar1;
    if ((carObj->carFlags & 1U) != 0) {
      Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
                (simGlobal.schedule64Hz,
                 (TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function)
                 carObj->funcStats,carObj,0x19);
    }
    ppCVar1 = ppCVar1 + 1;
    index = index + 1;
  }
  index = 0;
  ppCVar1 = &Cars_gList9;
  while (index < GameSetup_gData.numCars) {
    carObj = *ppCVar1;
    ppCVar1 = ppCVar1 + 1;
    index = index + 1;
    Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
              (simGlobal.schedule64Hz,
               (TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function)
               carObj->funcQDPhysicsUpdateVel,carObj,0x1e);
  }
  index = 0;
  ppCVar1 = &Cars_gList9;
  while (index < GameSetup_gData.numCars) {
    carObj = *ppCVar1;
    schedule = simGlobal.schedule32Hz2;
    if ((carObj->carFlags & 4U) != 0) {
      schedule = simGlobal.schedule64Hz;
    }
    Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
              (schedule,(TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function)
                        carObj->funcQDPhysicsUpdateRot,carObj,0x1e);
    ppCVar1 = ppCVar1 + 1;
    index = index + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_CleanUp__Fv()
 // line 2514, offset 0x8008aa40
	/* begin block 1 */
		// Start line: 2515
		// Start offset: 0x8008AA40
		// Variables:
	// 		int i; // $s2
	/* end block 1 */
	// End offset: 0x8008ABB0
	// End Line: 2583

	/* begin block 2 */
		// Start line: 5582
	/* end block 2 */
	// End Line: 5583

	/* begin block 3 */
		// Start line: 5597
	/* end block 3 */
	// End Line: 5598

	/* begin block 4 */
		// Start line: 5597
	/* end block 4 */
	// End Line: 5598

	/* begin block 5 */
		// Start line: 5603
	/* end block 5 */
	// End Line: 5604

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Cars_CleanUp__Fv(void)

{
  int iVar1;
  Sched_tSchedule *schedule;
  Car_tObj *var1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < Cars_gNumCars) {
    ppCVar2 = &Cars_gList9;
    do {
      Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv
                (simGlobal.schedule32Hz,
                 (TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function)
                 (*ppCVar2)->funcUpdateRoadInfo,*ppCVar2);
      Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv
                (simGlobal.schedule32Hz,
                 (TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function)
                 (*ppCVar2)->funcControl,*ppCVar2);
      var1 = *ppCVar2;
      if ((var1->carFlags & 1U) != 0) {
        Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv
                  (simGlobal.schedule64Hz,
                   (TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function)
                   var1->funcStats,var1);
        var1 = *ppCVar2;
      }
      Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv
                (simGlobal.schedule32Hz,
                 (TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function)
                 var1->funcHandlingPhysics,var1);
      Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv
                (simGlobal.schedule32Hz,
                 (TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function)
                 (*ppCVar2)->funcGravityPhysics,*ppCVar2);
      Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv
                (simGlobal.schedule64Hz,
                 (TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function)
                 (*ppCVar2)->funcQDPhysicsUpdateVel,*ppCVar2);
      Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv
                (simGlobal.schedule32Hz,
                 (TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function)
                 (*ppCVar2)->funcTestMeForCollisions,*ppCVar2);
      Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv
                (simGlobal.schedule32Hz,
                 (TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function)
                 (*ppCVar2)->funcDoPostCollisionStuff,*ppCVar2);
      iVar1 = Force_IsForceOn__FP8Car_tObj(*ppCVar2);
      if (iVar1 != 0) {
        Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv
                  (simGlobal.schedule32Hz,Force_Update__FP8Car_tObj,*ppCVar2);
      }
      var1 = *ppCVar2;
      schedule = simGlobal.schedule32Hz2;
      if ((var1->carFlags & 4U) != 0) {
        schedule = simGlobal.schedule64Hz;
      }
      iVar3 = iVar3 + 1;
      Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv
                (schedule,(TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function)
                          var1->funcQDPhysicsUpdateRot,var1);
      Cars_DeInitCar__FP8Car_tObj(*ppCVar2);
      var1 = *ppCVar2;
      ppCVar2 = ppCVar2 + 1;
      purgememadr((int)var1);
    } while (iVar3 < Cars_gNumCars);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_FindCurrentLap__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 2590, offset 0x8008abc8
	/* begin block 1 */
		// Start line: 2591
		// Start offset: 0x8008ABC8
		// Variables:
	// 		int roadSlice; // $a1
	/* end block 1 */
	// End offset: 0x8008AC78
	// End Line: 2619

	/* begin block 2 */
		// Start line: 5753
	/* end block 2 */
	// End Line: 5754

	/* begin block 3 */
		// Start line: 5761
	/* end block 3 */
	// End Line: 5762

	/* begin block 4 */
		// Start line: 5761
	/* end block 4 */
	// End Line: 5762

	/* begin block 5 */
		// Start line: 5764
	/* end block 5 */
	// End Line: 5765

void Cars_FindCurrentLap__FP8Car_tObj(Car_tObj *carObj)

{
  ushort uVar1;
  uint uVar2;
  
  if (GameSetup_gData.reverseTrack == 0) {
    uVar2 = SEXT24((carObj->N).simRoadInfo.slice);
  }
  else {
    uVar2 = (gNumSlices - (int)(carObj->N).simRoadInfo.slice) - 1;
  }
  uVar1 = (carObj->N).oldSlice;
  if ((uint)uVar1 != uVar2) {
    if (((int)uVar2 < 0x1f5) || (uVar1 != 0)) {
      if ((uVar2 < 0x33) && (500 < (carObj->N).oldSlice)) {
        if (carObj->unlap < 1) {
          carObj->lap = carObj->lap + 1;
        }
        else {
          carObj->unlap = carObj->unlap + -1;
        }
      }
    }
    else {
      carObj->unlap = carObj->unlap + 1;
    }
    (carObj->N).oldSlice = (ushort)uVar2;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Cars_CalculateRoadSpan__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 2624, offset 0x8008ac80
	/* begin block 1 */
		// Start line: 2625
		// Start offset: 0x8008AC80
		// Variables:
	// 		int span; // $a1
	// 		int tempSpan; // $v0
	/* end block 1 */
	// End offset: 0x8008AEB4
	// End Line: 2640

	/* begin block 2 */
		// Start line: 5823
	/* end block 2 */
	// End Line: 5824

	/* begin block 3 */
		// Start line: 5829
	/* end block 3 */
	// End Line: 5830

	/* begin block 4 */
		// Start line: 5829
	/* end block 4 */
	// End Line: 5830

	/* begin block 5 */
		// Start line: 5834
	/* end block 5 */
	// End Line: 5835

int Cars_CalculateRoadSpan__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = (carObj->N).roadMatrix.m[0];
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar1 = (carObj->N).orientMat.m[0];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar9 = (carObj->N).roadMatrix.m[1];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar2 = (carObj->N).orientMat.m[1];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = (carObj->N).roadMatrix.m[2];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (carObj->N).orientMat.m[2];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar1 = (iVar10 >> 8) * (iVar1 >> 8) + (iVar9 >> 8) * (iVar2 >> 8) + (iVar8 >> 8) * (iVar3 >> 8);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = (carObj->N).dimension.x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar3 = (carObj->N).orientMat.m[3];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = (carObj->N).orientMat.m[4];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar5 = (carObj->N).orientMat.m[5];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar10 = (iVar10 >> 8) * (iVar3 >> 8) + (iVar9 >> 8) * (iVar4 >> 8) + (iVar8 >> 8) * (iVar5 >> 8);
  if (iVar10 < 0) {
    iVar10 = -iVar10;
  }
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar9 = (carObj->N).dimension.y;
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar8 = (carObj->N).roadMatrix.m[0];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (carObj->N).orientMat.m[6];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = (carObj->N).roadMatrix.m[1];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar5 = (carObj->N).orientMat.m[7];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar7 = (carObj->N).roadMatrix.m[2];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar6 = (carObj->N).orientMat.m[8];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar8 = (iVar8 >> 8) * (iVar3 >> 8) + (iVar4 >> 8) * (iVar5 >> 8) + (iVar7 >> 8) * (iVar6 >> 8);
  if (iVar8 < 0) {
    iVar8 = -iVar8;
  }
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (carObj->N).dimension.z;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  return (iVar1 >> 8) * (iVar2 >> 8) + (iVar10 >> 8) * (iVar9 >> 8) + (iVar8 >> 8) * (iVar3 >> 8);
}



// decompiled code
// original method signature: 
// int /*$ra*/ Cars_CalculateRoadPosition__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 2682, offset 0x8008aec8
	/* begin block 1 */
		// Start line: 2683
		// Start offset: 0x8008AEC8
	/* end block 1 */
	// End offset: 0x8008AEC8
	// End Line: 2683

	/* begin block 2 */
		// Start line: 5944
	/* end block 2 */
	// End Line: 5945

	/* begin block 3 */
		// Start line: 5948
	/* end block 3 */
	// End Line: 5949

	/* begin block 4 */
		// Start line: 5948
	/* end block 4 */
	// End Line: 5949

int Cars_CalculateRoadPosition__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  
  iVar1 = Newton_CalculateRoadPosition__FP13BO_tNewtonObj((BO_tNewtonObj *)carObj);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Cars_CalcVelDownRoad__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 2687, offset 0x8008aee8
	/* begin block 1 */
		// Start line: 2688
		// Start offset: 0x8008AEE8
		// Variables:
	// 		int temp; // $a1
	/* end block 1 */
	// End offset: 0x8008AF70
	// End Line: 2693

	/* begin block 2 */
		// Start line: 5954
	/* end block 2 */
	// End Line: 5955

	/* begin block 3 */
		// Start line: 5958
	/* end block 3 */
	// End Line: 5959

	/* begin block 4 */
		// Start line: 5958
	/* end block 4 */
	// End Line: 5959

	/* begin block 5 */
		// Start line: 5961
	/* end block 5 */
	// End Line: 5962

int Cars_CalcVelDownRoad__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (carObj->N).linearVel.x;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar1 = (carObj->N).roadMatrix.m[6];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar5 = (carObj->N).linearVel.y;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar2 = (carObj->N).roadMatrix.m[7];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar6 = (carObj->N).linearVel.z;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar3 = (carObj->N).roadMatrix.m[8];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  return (iVar4 >> 8) * (iVar1 >> 8) + (iVar5 >> 8) * (iVar2 >> 8) + (iVar6 >> 8) * (iVar3 >> 8);
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_Randomize__Fv()
 // line 2698, offset 0x8008af84
	/* begin block 1 */
		// Start line: 2699
		// Start offset: 0x8008AF84

		/* begin block 1.1 */
			// Start line: 2701
			// Start offset: 0x8008AF84

			/* begin block 1.1.1 */
				// Start line: 2701
				// Start offset: 0x8008AF94
				// Variables:
			// 		int count; // $a0

				/* begin block 1.1.1.1 */
					// Start line: 2701
					// Start offset: 0x8008AF94
					// Variables:
				// 		int rLoop; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x8008AFF4
				// End Line: 2705
			/* end block 1.1.1 */
			// End offset: 0x8008AFF4
			// End Line: 2705
		/* end block 1.1 */
		// End offset: 0x8008AFF4
		// End Line: 2705
	/* end block 1 */
	// End offset: 0x8008AFF4
	// End Line: 2705

	/* begin block 2 */
		// Start line: 5978
	/* end block 2 */
	// End Line: 5979

	/* begin block 3 */
		// Start line: 5982
	/* end block 3 */
	// End Line: 5983

	/* begin block 4 */
		// Start line: 5982
	/* end block 4 */
	// End Line: 5983

	/* begin block 5 */
		// Start line: 5984
	/* end block 5 */
	// End Line: 5985

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Cars_Randomize__Fv(void)

{
  int iVar1;
  int iVar2;
  
  if (Cars_gNumAICars != 0) {
    iVar2 = (int)((Cars_gHumanRaceCarList9->speechInfo).playerCarIndex & 0x300U) >> 8;
    iVar1 = 0;
    if (iVar2 != 0) {
      do {
        randtemp = fastRandom * randSeed;
        iVar1 = iVar1 + 1;
        fastRandom = randtemp & 0xffff;
      } while (iVar1 < iVar2);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_ManageBureaucracy__Fv()
 // line 2712, offset 0x8008affc
	/* begin block 1 */
		// Start line: 2713
		// Start offset: 0x8008AFFC
		// Variables:
	// 		int carLoop; // $s4

		/* begin block 1.1 */
			// Start line: 2713
			// Start offset: 0x8008AFFC

			/* begin block 1.1.1 */
				// Start line: 2716
				// Start offset: 0x8008B024
				// Variables:
			// 		struct Car_tObj *carObj; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 2725
					// Start offset: 0x8008B050

					/* begin block 1.1.1.1.1 */
						// Start line: 2737
						// Start offset: 0x8008B08C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2738
							// Start offset: 0x8008B0A0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2739
								// Start offset: 0x8008B0A0

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 2741
									// Start offset: 0x8008B0C4
									// Variables:
								// 		int facing; // $s1
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8008B140
								// End Line: 2746
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8008B158
							// End Line: 2749
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8008B158
						// End Line: 2749
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008B158
					// End Line: 2749
				/* end block 1.1.1.1 */
				// End offset: 0x8008B178
				// End Line: 2756
			/* end block 1.1.1 */
			// End offset: 0x8008B178
			// End Line: 2756
		/* end block 1.1 */
		// End offset: 0x8008B184
		// End Line: 2759
	/* end block 1 */
	// End offset: 0x8008B184
	// End Line: 2762

	/* begin block 2 */
		// Start line: 6002
	/* end block 2 */
	// End Line: 6003

	/* begin block 3 */
		// Start line: 6010
	/* end block 3 */
	// End Line: 6011

	/* begin block 4 */
		// Start line: 6010
	/* end block 4 */
	// End Line: 6011

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Cars_ManageBureaucracy__Fv(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  Car_tObj *carObj;
  Car_tObj **ppCVar6;
  int iVar7;
  
  iVar7 = 0;
  ppCVar6 = &Cars_gList9;
  while (iVar7 < Cars_gNumCars) {
    carObj = *ppCVar6;
    if ((carObj->N).active != '\0') {
      iVar1 = Cars_CalculateRoadSpan__FP8Car_tObj(carObj);
      carObj->roadSpan = iVar1;
      iVar1 = Cars_CalculateRoadPosition__FP8Car_tObj(carObj);
      (carObj->speechInfo).playerCarIndex = iVar1;
      AIWorld_CalculateLaneInfo__FP8Car_tObj(carObj);
      iVar1 = AIPhysics_UseCoolPhysics__FP8Car_tObj(carObj);
      if (iVar1 != 0) {
        iVar1 = Cars_CalcVelDownRoad__FP8Car_tObj(carObj);
        (carObj->script).lastActionTime = iVar1;
      }
      if ((carObj->carFlags & 4U) != 0) {
        iVar1 = (carObj->script).lastActionTime;
        (carObj->speechInfo).speechMode = (carObj->N).speedXZ;
        if (iVar1 + 0x2ffffU < 0x5ffff) {
          uVar2 = fixedmult((carObj->N).orientMat.m[6],
                            (int)BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].forward[0]);
          uVar3 = fixedmult((carObj->N).orientMat.m[7],
                            (int)BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].forward[1]);
          uVar4 = fixedmult((carObj->N).orientMat.m[8],
                            (int)BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].forward[2]);
          iVar5 = 1;
          if ((int)(uVar2 + uVar3 + uVar4) < 1) {
            iVar5 = -1;
          }
        }
        else {
          iVar5 = -1;
          if (-1 < iVar1) {
            iVar5 = 1;
          }
        }
        (carObj->script).lastReactionIndex[3] = iVar5;
      }
      if ((carObj->N).simRoadInfo.sliceChanged != '\0') {
        Cars_FindCurrentLap__FP8Car_tObj(carObj);
        Cars_FindTotalSlice__FP8Car_tObj(carObj);
      }
    }
    ppCVar6 = ppCVar6 + 1;
    iVar7 = iVar7 + 1;
  }
  Cars_SortCars__Fv();
  Cars_Randomize__Fv();
  AISpeeds_MaintainLeaderBoard__Fv();
  DrawW_DoObjectAnimations__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_CheckForAccidentScenes__Fv()
 // line 2776, offset 0x8008b1c4
	/* begin block 1 */
		// Start line: 2777
		// Start offset: 0x8008B1C4

		/* begin block 1.1 */
			// Start line: 2777
			// Start offset: 0x8008B1C4

			/* begin block 1.1.1 */
				// Start line: 2782
				// Start offset: 0x8008B200
			/* end block 1.1.1 */
			// End offset: 0x8008B27C
			// End Line: 2805
		/* end block 1.1 */
		// End offset: 0x8008B27C
		// End Line: 2805
	/* end block 1 */
	// End offset: 0x8008B27C
	// End Line: 2805

	/* begin block 2 */
		// Start line: 6140
	/* end block 2 */
	// End Line: 6141

	/* begin block 3 */
		// Start line: 6145
	/* end block 3 */
	// End Line: 6146

	/* begin block 4 */
		// Start line: 6145
	/* end block 4 */
	// End Line: 6146

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Cars_CheckForAccidentScenes__Fv(void)

{
  if (((GameSetup_gData.commMode != 1) && (GameSetup_gData.raceType != 1)) &&
     (GameSetup_gData.raceType != 5)) {
    if (SceneLoaded == 0) {
      if ((Cars_gHumanRaceCarList9->stats).lap == GameSetup_gData.SceneStartLap) {
        accidentSlice = Scene_BuildCustomSceneList__Fv();
        SceneLoaded = 1;
      }
    }
    else {
      if ((Cars_gHumanRaceCarList9->stats).lap == GameSetup_gData.SceneEndLap) {
        Object_ClearCustomObjects__Fv();
        SceneLoaded = 0;
        accidentSlice = 0;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cars_SortCars__Fv()
 // line 2815, offset 0x8008b28c
	/* begin block 1 */
		// Start line: 2816
		// Start offset: 0x8008B28C
		// Variables:
	// 		int swapped; // $t1
	// 		int i; // $v1
	// 		struct Car_tObj *temp; // $v1
	/* end block 1 */
	// End offset: 0x8008B3F4
	// End Line: 2863

	/* begin block 2 */
		// Start line: 6216
	/* end block 2 */
	// End Line: 6217

	/* begin block 3 */
		// Start line: 6227
	/* end block 3 */
	// End Line: 6228

	/* begin block 4 */
		// Start line: 6227
	/* end block 4 */
	// End Line: 6228

	/* begin block 5 */
		// Start line: 6237
	/* end block 5 */
	// End Line: 6238

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Cars_SortCars__Fv(void)

{
  int iVar1;
  Car_tObj *pCVar2;
  Car_tObj **ppCVar3;
  Car_tObj *pCVar4;
  Car_tObj **ppCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = Cars_gNumCars + -1;
  do {
    iVar6 = 0;
    iVar7 = iVar6;
    if (0 < iVar9) {
      iVar8 = Cars_gNumCars + -1;
      iVar1 = 0;
      iVar7 = iVar6;
      do {
        iVar6 = iVar6 + 1;
        pCVar4 = *(Car_tObj **)((int)&Cars_gSortedList9 + iVar1);
        pCVar2 = (&Cars_gSortedList9)[iVar6];
        if ((pCVar2->N).simRoadInfo.slice < (pCVar4->N).simRoadInfo.slice) {
          iVar7 = 1;
          *(Car_tObj **)((int)&Cars_gSortedList9 + iVar1) = pCVar2;
          (&Cars_gSortedList9)[iVar6] = pCVar4;
        }
        iVar1 = iVar6 * 4;
      } while (iVar6 < iVar8);
    }
    iVar6 = Cars_gNumCars;
    iVar1 = 0;
  } while (iVar7 != 0);
  if (0 < Cars_gNumCars) {
    ppCVar3 = &Cars_gSortedList9;
    do {
      (*ppCVar3)->sortIndex = iVar1;
      iVar1 = iVar1 + 1;
      ppCVar3 = ppCVar3 + 1;
    } while (iVar1 < iVar6);
  }
  iVar9 = Cars_gNumCars + -1;
  do {
    iVar6 = 0;
    iVar7 = iVar6;
    if (0 < iVar9) {
      iVar8 = Cars_gNumCars + -1;
      iVar1 = 0;
      iVar7 = iVar6;
      do {
        ppCVar5 = (Car_tObj **)((int)&Cars_gTotalSortedList9 + iVar1);
        iVar6 = iVar6 + 1;
        ppCVar3 = &Cars_gTotalSortedList9 + iVar6;
        if (((*ppCVar3)->N).totalSlice < ((*ppCVar5)->N).totalSlice) {
          (*ppCVar5)->swapCar = *ppCVar3;
          (*ppCVar3)->swapCar = *ppCVar5;
          iVar7 = simGlobal.gameTicks;
          pCVar2 = *ppCVar5;
          (*ppCVar3)->swapTime = simGlobal.gameTicks;
          pCVar2->swapTime = iVar7;
          pCVar2 = *ppCVar5;
          iVar7 = 1;
          *ppCVar5 = *ppCVar3;
          *ppCVar3 = pCVar2;
        }
        iVar1 = iVar6 * 4;
      } while (iVar6 < iVar8);
    }
  } while (iVar7 != 0);
  return;
}





