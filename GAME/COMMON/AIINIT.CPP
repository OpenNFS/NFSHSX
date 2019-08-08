#include "NFS4.H"
#include "AIINIT.H"

// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_StartUp1__Fv()
 // line 38, offset 0x80066bb0
	/* begin block 1 */
		// Start line: 39
		// Start offset: 0x80066BB0
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80066BF8
	// End Line: 48

void AIInit_StartUp1__Fv(void)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  AI_TrafficStartUp__Fv();
  iVar2 = 1;
  inverseLaneWidthTable = 0;
  puVar3 = &DAT_8010e010;
  do {
    uVar1 = fixeddiv(0x10000,iVar2 << 0xe);
    *puVar3 = uVar1;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0x50);
  AITune_StartUp1__Fv();
  StartUp1__14AIDataRecord_t();
  AI_StartUp__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_StartUp2__Fv()
 // line 56, offset 0x80066c24
	/* begin block 1 */
		// Start line: 57
		// Start offset: 0x80066C24

		/* begin block 1.1 */
			// Start line: 57
			// Start offset: 0x80066C24
			// Variables:
		// 		int carLoop; // $s0
		/* end block 1.1 */
		// End offset: 0x80066C84
		// End Line: 61

		/* begin block 1.2 */
			// Start line: 62
			// Start offset: 0x80066C84
			// Variables:
		// 		int carLoop; // $s2

			/* begin block 1.2.1 */
				// Start line: 75
				// Start offset: 0x80066CAC
				// Variables:
			// 		struct Car_tObj *carObj; // $s0
			/* end block 1.2.1 */
			// End offset: 0x80066CC4
			// End Line: 78
		/* end block 1.2 */
		// End offset: 0x80066CE4
		// End Line: 82
	/* end block 1 */
	// End offset: 0x80066CE4
	// End Line: 82

void AIInit_StartUp2__Fv(void)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  Car_tObj *carObj;
  int *piVar4;
  Car_tObj **ppCVar5;
  
  AISpeeds_StartUp__Fv();
  iVar3 = 0;
  AIInit_LoadConfigs__Fv();
  if (0 < Cars_gNumCars) {
    piVar4 = &_Cars_gList;
    do {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
      AIScript_Startup__FP10AIScript_t((AIScript_t *)(iVar2 + 0x4f4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < Cars_gNumCars);
  }
  iVar3 = 0;
  AIPerson_Startup__Fv();
  StartUp2__14AIDataRecord_t();
  AIPhysic_StartUp__Fv();
  AITune_StartUp2__Fv();
  ppCVar5 = (Car_tObj **)&_Cars_gList;
  while (bVar1 = iVar3 < Cars_gNumCars, iVar3 = iVar3 + 1, bVar1) {
    carObj = *ppCVar5;
    ppCVar5 = ppCVar5 + 1;
    AIPhysic_InitCar__FP8Car_tObj(carObj);
    AIInit_InitAICar2__FP8Car_tObj(carObj);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_Reset1__Fv()
 // line 87, offset 0x80066cfc
	/* begin block 1 */
		// Start line: 88
		// Start offset: 0x80066CFC
	/* end block 1 */
	// End offset: 0x80066CFC
	// End Line: 89

void AIInit_Reset1__Fv(void)
{
  uGp00000038 = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_Reset2__Fv()
 // line 93, offset 0x80066d08
	/* begin block 1 */
		// Start line: 94
		// Start offset: 0x80066D08

		/* begin block 1.1 */
			// Start line: 101
			// Start offset: 0x80066D3C
			// Variables:
		// 		int carLoop; // $s0
		/* end block 1.1 */
		// End offset: 0x80066D80
		// End Line: 105
	/* end block 1 */
	// End offset: 0x80066D80
	// End Line: 111

void AIInit_Reset2__Fv(void)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  uGp00000034 = (uint)(GameSetup_gData != 3);
  iVar2 = 0;
  if (0 < Cars_gNumCars) {
    piVar3 = &_Cars_gList;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      AIScript_Startup__FP10AIScript_t((AIScript_t *)(iVar1 + 0x4f4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < Cars_gNumCars);
  }
  DAT_8010dda8 = 0;
  leaderBoard = 0;
  DAT_8010ddb0 = _Cars_gAIRaceCarList;
  DAT_8010ddac = _Cars_gAIRaceCarList;
  AIPhysic_Reset__Fv();
  AI_Info = 0;
  DAT_8010ccf4 = 0;
  DAT_8010ccf8 = 0;
  DAT_8010ccfc = 0;
  DAT_8010cd00 = 0;
  DAT_8010cd04 = 0;
  DAT_8010cd08 = 0;
  DAT_8010cd0c = 0;
  DAT_8010cd10 = 0;
  DAT_8010cd14 = 0;
  DAT_8010cd18 = 0;
  DAT_8010cd1c = 0;
  DAT_8010cd20 = 0;
  DAT_8010cd24 = 0;
  DAT_8010cd28 = 0;
  DAT_8010cd2c = 0;
  DAT_8010cd34 = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_CleanUp1__Fv()
 // line 130, offset 0x80066e0c
	/* begin block 1 */
		// Start line: 131
		// Start offset: 0x80066E0C
	/* end block 1 */
	// End offset: 0x80066E0C
	// End Line: 131

void AIInit_CleanUp1__Fv(void)
{
  AI_CleanUp__Fv();
  CleanUp1__14AIDataRecord_t();
  AITune_CleanUp1__Fv();
  AI_TrafficCleanUp__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_CleanUp2__Fv()
 // line 138, offset 0x80066e44
	/* begin block 1 */
		// Start line: 139
		// Start offset: 0x80066E44

		/* begin block 1.1 */
			// Start line: 139
			// Start offset: 0x80066E44
			// Variables:
		// 		int carLoop; // $s1
		/* end block 1.1 */
		// End offset: 0x80066E9C
		// End Line: 144

		/* begin block 1.2 */
			// Start line: 144
			// Start offset: 0x80066E9C
			// Variables:
		// 		int carLoop; // $s0
		/* end block 1.2 */
		// End offset: 0x80066EF0
		// End Line: 153
	/* end block 1 */
	// End offset: 0x80066EF0
	// End Line: 154

void AIInit_CleanUp2__Fv(void)
{
  Car_tObj *carObj;
  Car_tObj **ppCVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < Cars_gNumCars) {
    ppCVar1 = (Car_tObj **)&_Cars_gList;
    do {
      iVar2 = iVar2 + 1;
      AIInit_DeInitAICar2__FP8Car_tObj(*ppCVar1);
      carObj = *ppCVar1;
      ppCVar1 = ppCVar1 + 1;
      AIPhysic_DeInitCar__FP8Car_tObj(carObj);
    } while (iVar2 < Cars_gNumCars);
  }
  iVar2 = 0;
  AITune_CleanUp2__Fv();
  AIPhysic_CleanUp__Fv();
  CleanUp2__14AIDataRecord_t();
  AIPerson_Cleanup__Fv();
  if (0 < Cars_gNumCars) {
    do {
      iVar2 = iVar2 + 1;
      AIScript_Cleanup__Fv();
    } while (iVar2 < Cars_gNumCars);
  }
  AISpeeds_CleanUp__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_TrafficStartUp__Fv()
 // line 170, offset 0x80066f0c
	/* begin block 1 */
		// Start line: 171
		// Start offset: 0x80066F0C
		// Variables:
	// 		char filename[100]; // stack offset -112
	/* end block 1 */
	// End offset: 0x80066F98
	// End Line: 183

void AI_TrafficStartUp__Fv(void)
{
  char *rawTriggers;
  char acStack112 [104];
  
  if (DAT_80113204 != 0) {
    _triggerManagerTraffic = (AITrigger_TriggerManager *)__builtin_new(0x34c);
    sprintf(acStack112,"%sTr%02d.trf",0,0);
    pcGp00000030 = (char *)loadfileadrz(acStack112,0);
    rawTriggers = pcGp00000030;
    if (pcGp00000030 == (char *)0x0) {
      rawTriggers = (char *)0x0;
    }
    Init__24AITrigger_TriggerManagerPc(_triggerManagerTraffic,rawTriggers);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_TrafficCleanUp__Fv()
 // line 195, offset 0x80066fa8
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x80066FA8
	/* end block 1 */
	// End offset: 0x80066FE8
	// End Line: 206

void AI_TrafficCleanUp__Fv(void)
{
  if (_triggerManagerTraffic != (void *)0x0) {
    __builtin_delete(_triggerManagerTraffic);
    _triggerManagerTraffic = (void *)0x0;
  }
  if (iGp00000030 != 0) {
    purgememadr();
    iGp00000030 = 0;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_LoadConfigs__Fv()
 // line 225, offset 0x80066ff8
	/* begin block 1 */
		// Start line: 226
		// Start offset: 0x80066FF8
		// Variables:
	// 		struct Udff_tInfo *handle; // $s0
	// 		char pathname[100]; // stack offset -112
	/* end block 1 */
	// End offset: 0x80066FF8
	// End Line: 226

void AIInit_LoadConfigs__Fv(void)
{
  Udff_tInfo *handle;
  char acStack112 [104];
  
  sprintf(acStack112,"%strafcfg.dat",0);
  handle = Udff_Opena__FPcT0i((char *)0x0,"\x04",1);
  AIInit_LoadPhysicsConfig__FP10Udff_tInfo(handle);
  Udff_Close__FP10Udff_tInfo(handle);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_LoadPhysicsConfig__FP10Udff_tInfo(struct Udff_tInfo *handle /*$s1*/)
 // line 257, offset 0x80067054
	/* begin block 1 */
		// Start line: 258
		// Start offset: 0x80067054
		// Variables:
	// 		struct AIPhysic_ModelConfig_t *model; // $s0
	// 		int loop; // $s2
	/* end block 1 */
	// End offset: 0x8006715C
	// End Line: 286

void AIInit_LoadPhysicsConfig__FP10Udff_tInfo(Udff_tInfo *handle)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  AIPhysicConfig = Udff_GetInt__FP10Udff_tInfo(handle);
  DAT_8010dc78 = Udff_GetInt__FP10Udff_tInfo(handle);
  DAT_8010dc7c = Udff_GetInt__FP10Udff_tInfo(handle);
  DAT_8010dc80 = Udff_GetInt__FP10Udff_tInfo(handle);
  DAT_8010dc84 = Udff_GetInt__FP10Udff_tInfo(handle);
  iVar3 = 0;
  do {
    if (iVar3 == 0) {
      piVar2 = &DAT_8010dc88;
    }
    else {
      piVar2 = (int *)&UNK_8010dcb4;
    }
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    *piVar2 = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    piVar2[1] = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    piVar2[2] = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    piVar2[3] = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    piVar2[4] = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    piVar2[5] = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    piVar2[6] = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    piVar2[7] = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    piVar2[8] = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    piVar2[9] = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar3 = iVar3 + 1;
    piVar2[10] = iVar1;
  } while (iVar3 < 2);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_ClearAICar__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 304, offset 0x80067174
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x80067174
		// Variables:
	// 		struct coorddef zero; // stack offset -24
	/* end block 1 */
	// End offset: 0x80067174
	// End Line: 305

void AIInit_ClearAICar__FP8Car_tObj(Car_tObj *carObj)
{
  int local_18;
  int local_14;
  int local_10;
  
  memset(&local_18,0,0xc);
  (carObj->N).angularVel.x = local_18;
  (carObj->N).angularVel.y = local_14;
  (carObj->N).angularVel.z = local_10;
  (carObj->N).flightTime = 0;
  carObj->frontSkid = 0;
  carObj->rearSkid = 0;
  carObj->AIFlags = 0;
  carObj->speed = 0;
  (carObj->desiredVector).z = 1;
  carObj->aCarWRTDesired = 0;
  (carObj->desiredVector).y = 0;
  carObj->aiGlue = 0;
  carObj->max_aa = 0;
  carObj->accNitrous = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_RestartAICar__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 326, offset 0x800671ec
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x800671EC
	/* end block 1 */
	// End offset: 0x800672E8
	// End Line: 379

void AIInit_RestartAICar__FP8Car_tObj(Car_tObj *carObj)
{
  speechIntensityType sVar1;
  uint uVar2;
  
  sVar1 = ~SPEECH_INTENSITY_LOW;
  if (true) {
    sVar1 = SPEECH_INTENSITY_MED;
  }
  (carObj->speechInfo).speechSource = sVar1;
  (carObj->speechInfo).speechIntensity = sVar1;
  carObj->aDesired = 0;
  carObj->aCar = 0;
  carObj->driveDirectionTimer = 0;
  carObj->driveDirection = 0;
  carObj->lateralVelocity = 0;
  (carObj->targetPos).x = 0;
  (carObj->speechInfo).speechMode = SPEECH_MODE_NONE;
  (carObj->desiredVector).z = 1;
  carObj->aCarWRTDesired = 0;
  (carObj->desiredVector).y = 0;
  *(undefined4 *)(carObj->accTable + 0x6c) = 0;
  (carObj->speechInfo).playerCarIndex = 0;
  (carObj->speechInfo).copCarIndex = 0;
  (carObj->speechInfo).warningNumber = 0;
  carObj->carInLane = 0;
  carObj->desiredDirection = 0;
  carObj->direction = 0;
  carObj->desiredSpeed = 0;
  carObj->desiredLatPos = 0;
  carObj->roadSpan = 0;
  *(Car_tObj **)&carObj->originalDesiredSpeed = carObj;
  carObj->speed = 0;
  carObj->AIFlags = 0;
  carObj->roadPosition = 0;
  carObj->basisCar = (Car_tObj *)0x0;
  carObj->aiShiftDuration = 0;
  (carObj->targetPos).y = 0;
  carObj->aCarWRTRoad = 0;
  carObj->timeOffRoad = 0x10000;
  carObj->max_clacc = 0x10000;
  (carObj->script).lastReactionIndex[2] = 0;
  carObj->aiGlue = 0;
  carObj->drag = 0x10000;
  carObj->curveSpeedTable = (AIDataRecord_CurveSpeedTable_t *)0x10000;
  uVar2 = carObj->carFlags;
  carObj->accelerationRecord = (AIDataRecord_AccTable_t *)0x640000;
  carObj->slackProb = 0;
  *(undefined4 *)(carObj->accTable + 0x6e) = 7;
  carObj->accNitrous = 0;
  carObj->speedNitrous = 0;
  if ((uVar2 & 2) == 0) {
    carObj->wipeOutStartTick = 1;
  }
  else {
    carObj->wipeOutStartTick = 0;
  }
  carObj->max_aa = 0;
  if ((carObj->carFlags & 10U) == 2) {
    (carObj->N).active = '\0';
  }
  carObj->lookAheadSlice = -1;
  carObj->btcGlueModifier = 0;
  carObj->donutMode = DONUTMODE_NONE;
  carObj->AIFishtailEndTick = 0;
  carObj->forceNoSimOptz = 0;
  carObj->wipeOutEndTick = 0x10000;
  carObj->gripFactor = 0x10000;
  carObj->caravanFollowBehindDistanceMeters = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_InitAICar__FP8Car_tObjP10Udff_tInfo(struct Car_tObj *carObj /*$s2*/, struct Udff_tInfo *handle /*$s4*/)
 // line 399, offset 0x80067314
	/* begin block 1 */
		// Start line: 400
		// Start offset: 0x80067314
		// Variables:
	// 		int gearLoop; // $s1
	// 		int accelerationScale; // $s5

		/* begin block 1.1 */
			// Start line: 416
			// Start offset: 0x800673C4

			/* begin block 1.1.1 */
				// Start line: 423
				// Start offset: 0x8006740C
				// Variables:
			// 		int carType; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80067428
			// End Line: 426
		/* end block 1.1 */
		// End offset: 0x80067428
		// End Line: 426
	/* end block 1 */
	// End offset: 0x80067484
	// End Line: 448

void AIInit_InitAICar__FP8Car_tObjP10Udff_tInfo(Car_tObj *carObj,Udff_tInfo *handle)
{
  int iVar1;
  int iVar2;
  AIDataRecord_AccTable_t *this;
  AIDataRecord_CurveSpeedTable_t *this_00;
  GameSetup_tCarData *pGVar3;
  Car_tObj *pCVar4;
  int iVar5;
  int scale;
  
  scale = 0x10000;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->laneSlack = iVar1;
  Udff_GetBuffer__FP10Udff_tInfoPci(handle,(char *)&carObj->aiShiftTimer,0x1c);
  iVar1 = 0;
  iVar5 = -4;
  pCVar4 = carObj;
  do {
    if (iVar1 == 0) {
      iVar2 = fixeddiv(0x10000,carObj->aiShiftTimer);
      carObj->topSpeeds[1] = iVar2;
    }
    else {
      if (pCVar4->aiShiftTimer == 0) {
        pCVar4->topSpeeds[1] = 0;
      }
      else {
        iVar2 = fixeddiv(0x10000,pCVar4->aiShiftTimer - *(int *)((int)&carObj->aiShiftTimer + iVar5)
                        );
        pCVar4->topSpeeds[1] = iVar2;
      }
    }
    iVar5 = iVar5 + 4;
    iVar1 = iVar1 + 1;
    pCVar4 = (Car_tObj *)&(pCVar4->N).oldSlice;
  } while (iVar1 < 7);
  Udff_GetBuffer__FP10Udff_tInfoPci(handle,(char *)(carObj->invTopSpeeds + 1),0xe0);
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->currentSpeed = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  (carObj->targetPos).z = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->targetLatPos = iVar1;
  if ((carObj->carFlags & 8U) != 0) {
    scale = *(int *)(&AITune_accelerationScale + carObj->carInfo->carType * 4);
  }
  this = (AIDataRecord_AccTable_t *)__builtin_new(0x5c);
  this = __23AIDataRecord_AccTable_tPci26AIDataRecord_WhichRecord_t
                   (this,(char *)(carObj->invTopSpeeds + 1),scale,ACCELERATION_R);
  pGVar3 = carObj->carInfo;
  *(AIDataRecord_AccTable_t **)(carObj->accTable + 100) = this;
  iVar1 = AIInit_IsNonStandardCarFile__Fi(pGVar3->carType);
  if (iVar1 == 0) {
    *(undefined4 *)(carObj->accTable + 0x66) = 0;
  }
  else {
    this_00 = (AIDataRecord_CurveSpeedTable_t *)__builtin_new(0x58);
    this_00 = __30AIDataRecord_CurveSpeedTable_tPc26AIDataRecord_WhichRecord_t
                        (this_00,carObj->carName,CURVESPEED_TABLE_R);
    *(AIDataRecord_CurveSpeedTable_t **)(carObj->accTable + 0x66) = this_00;
  }
  iVar1 = fixedmult((carObj->targetPos).z,0x13333);
  (carObj->targetPos).z = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  *(int *)(carObj->accTable + 0x6a) = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->preferredLateralPositionPower = iVar1;
  carObj->wipeOutEndTick = 0x10000;
  carObj->fallBehindCar = (Car_tObj *)0x0;
  carObj->nextAIRacer = (Car_tObj *)0x0;
  carObj->gripFactor = 0x10000;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_DeInitAICar__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 466, offset 0x800674e8
	/* begin block 1 */
		// Start line: 467
		// Start offset: 0x800674E8
	/* end block 1 */
	// End offset: 0x80067558
	// End Line: 476

void AIInit_DeInitAICar__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  
  iVar1 = *(int *)(carObj->accTable + 0x66);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x54) + 0xc))
              (iVar1 + (int)*(short *)(*(int *)(iVar1 + 0x54) + 8),3);
    *(undefined4 *)(carObj->accTable + 0x66) = 0;
  }
  iVar1 = *(int *)(carObj->accTable + 100);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x54) + 0xc))
              (iVar1 + (int)*(short *)(*(int *)(iVar1 + 0x54) + 8),3);
    *(undefined4 *)(carObj->accTable + 100) = 0;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_InitAICar2__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 480, offset 0x80067568
	/* begin block 1 */
		// Start line: 481
		// Start offset: 0x80067568
	/* end block 1 */
	// End offset: 0x800675A4
	// End Line: 494

void AIInit_InitAICar2__FP8Car_tObj(Car_tObj *carObj)
{
  int handlingUpgrade;
  Car_tObj *pCVar1;
  
  if ((carObj->carFlags & 8U) != 0) {
    handlingUpgrade = AISpeeds_GetUpgradeHandlingMult__Fi(carObj->carIndex);
    Upgrade__30AIDataRecord_CurveSpeedTable_ti
              (*(AIDataRecord_CurveSpeedTable_t **)(carObj->accTable + 0x66),handlingUpgrade);
  }
  pCVar1 = (Car_tObj *)AISpeeds_GetUpgradeAccMult__Fi(carObj->carIndex);
  carObj->nextAIRacer = pCVar1;
  pCVar1 = (Car_tObj *)AISpeeds_GetUpgradeTopSpeedMult__Fi(carObj->carIndex);
  carObj->fallBehindCar = pCVar1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIInit_DeInitAICar2__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 498, offset 0x800675d0
	/* begin block 1 */
		// Start line: 499
		// Start offset: 0x800675D0
	/* end block 1 */
	// End offset: 0x800675D0
	// End Line: 500

void AIInit_DeInitAICar2__FP8Car_tObj(Car_tObj *carObj)
{
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AIInit_IsNonStandardCarFile__Fi(int index /*$a0*/)
 // line 517, offset 0x800675d8
	/* begin block 1 */
		// Start line: 518
		// Start offset: 0x800675D8
		// Variables:
	// 		int nonStandardList[50]; // stack offset -200
	/* end block 1 */
	// End offset: 0x80067648
	// End Line: 598

int AIInit_IsNonStandardCarFile__Fi(int index)
{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_c8 [50];
  
  puVar1 = &DAT_8005523c;
  piVar2 = local_c8;
  do {
    puVar5 = piVar2;
    puVar3 = puVar1;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    *puVar5 = *puVar3;
    puVar5[1] = uVar6;
    puVar5[2] = uVar7;
    puVar5[3] = uVar8;
    puVar1 = puVar3 + 4;
    piVar2 = puVar5 + 4;
  } while (puVar3 + 4 != (undefined4 *)&UNK_800552fc);
  uVar6 = puVar3[5];
  puVar5[4] = 0;
  puVar5[5] = uVar6;
  if (index < 0x32) {
    iVar4 = local_c8[index];
  }
  else {
    iVar4 = 0;
  }
  return iVar4;


}





