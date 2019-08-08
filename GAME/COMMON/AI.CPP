#include "NFS4.H"
#include "AI.H"

// decompiled code
// original method signature: 
// void /*$ra*/ AI_StartUp__Fv()
 // line 135, offset 0x8005797c
	/* begin block 1 */
		// Start line: 136
		// Start offset: 0x8005797C
	/* end block 1 */
	// End offset: 0x8005797C
	// End Line: 136

void AI_StartUp__Fv(void)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_CleanUp__Fv()
 // line 138, offset 0x80057984
	/* begin block 1 */
		// Start line: 139
		// Start offset: 0x80057984
	/* end block 1 */
	// End offset: 0x80057984
	// End Line: 139

void AI_CleanUp__Fv(void)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_Main_OverallSetup__Fv()
 // line 157, offset 0x8005798c
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x8005798C
	/* end block 1 */
	// End offset: 0x8005798C
	// End Line: 158

void AI_Main_OverallSetup__Fv(void)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_CarAvoidance__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 169, offset 0x80057994
	/* begin block 1 */
		// Start line: 170
		// Start offset: 0x80057994
	/* end block 1 */
	// End offset: 0x80057994
	// End Line: 170

void AI_CarAvoidance__FP8Car_tObj(Car_tObj *carObj)
{
  AI_SetupOncomingLaneDemerits__FP8Car_tObj(carObj);
  AI_CalculateLaneSpeeds__FP8Car_tObj(carObj);
  AI_CalcMeritsBasedOnSpeed__FP8Car_tObj(carObj);
  AI_CheckForClearLanes__FP8Car_tObj(carObj);
  AI_CheckForCarsOnSide__FP8Car_tObj(carObj);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_WorldAvoidance__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 183, offset 0x800579d8
	/* begin block 1 */
		// Start line: 184
		// Start offset: 0x800579D8
	/* end block 1 */
	// End offset: 0x800579D8
	// End Line: 184

void AI_WorldAvoidance__FP8Car_tObj(Car_tObj *carObj)
{
  AI_CheckForBarriers__FP8Car_tObj(carObj);
  AI_HandleChangeInNumLanes__FP8Car_tObj(carObj);
  AI_HandleShouldersAndOffRoad__FP8Car_tObj(carObj);
  AI_CalcBestLineMerits__FP8Car_tObj(carObj);
  AI_AvoidObjects__FP8Car_tObj(carObj);
  AI_AvoidSpikeBelt__FP8Car_tObj(carObj);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_InitAIInfo__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 196, offset 0x80057a24
	/* begin block 1 */
		// Start line: 197
		// Start offset: 0x80057A24
	/* end block 1 */
	// End offset: 0x80057A24
	// End Line: 197

void AI_InitAIInfo__FP8Car_tObj(Car_tObj *carObj)
{
  DAT_8010ccf8 = 0;
  DAT_8010ccf4 = 0;
  AI_Info = 0;
  DAT_8010cd04 = 0;
  DAT_8010cd00 = 0;
  DAT_8010ccfc = 0;
  DAT_8010cd34 = AIWorld_CalculateDeltaRoadYaw__FP8Car_tObj(carObj);
  DAT_8010cd2c = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_GenericBeginCycle__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 226, offset 0x80057a6c
	/* begin block 1 */
		// Start line: 227
		// Start offset: 0x80057A6C
	/* end block 1 */
	// End offset: 0x80057A6C
	// End Line: 227

void AI_GenericBeginCycle__FP8Car_tObj(Car_tObj *carObj)
{
  AI_InitAIInfo__FP8Car_tObj(carObj);
  AI_ClearLaneMerits__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_GenericCycle__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 253, offset 0x80057a94
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x80057A94
	/* end block 1 */
	// End offset: 0x80057A94
	// End Line: 254

void AI_GenericCycle__FP8Car_tObj(Car_tObj *carObj)
{
  AI_MaybeChangeLaneSlack__FP8Car_tObj(carObj);
  AI_DoReactionsAndBehavior__FP8Car_tObj(carObj);
  AI_PushFinishedCarsToSide__FP8Car_tObj(carObj);
  AI_KeepCarsInLane__FP8Car_tObj(carObj);
  AI_HandleTrafficHonking__FP8Car_tObj(carObj);
  AI_CarAvoidance__FP8Car_tObj(carObj);
  AI_WorldAvoidance__FP8Car_tObj(carObj);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_GenericEndCycle__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 276, offset 0x80057ae8
	/* begin block 1 */
		// Start line: 277
		// Start offset: 0x80057AE8
	/* end block 1 */
	// End offset: 0x80057AE8
	// End Line: 277

void AI_GenericEndCycle__FP8Car_tObj(Car_tObj *carObj)
{
  AI_ProcessObservationsAndChooseLane__FP8Car_tObj(carObj);
  AI_CalculateDesiredLatPosition__FP8Car_tObj(carObj);
  AI_CalculateAdjustedDesiredSpeed__FP8Car_tObj(carObj);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_TargetLane__FP8Car_tObji(struct Car_tObj *carObj /*$a0*/, int lane /*$a1*/)
 // line 322, offset 0x80057b1c
	/* begin block 1 */
		// Start line: 323
		// Start offset: 0x80057B1C
	/* end block 1 */
	// End offset: 0x80057B64
	// End Line: 336

void AI_TargetLane__FP8Car_tObji(Car_tObj *carObj,int lane)
{
  if (*(int *)(carObj->accTable + 0x6e) < lane) {
    DAT_8010ccec = DAT_8010ccec + 0x50000;
    return;
  }
  if (lane < *(int *)(carObj->accTable + 0x6e)) {
    CarLogic_gObs = CarLogic_gObs + 0x50000;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_ClearLaneMerits__Fv()
 // line 345, offset 0x80057b6c
	/* begin block 1 */
		// Start line: 346
		// Start offset: 0x80057B6C

		/* begin block 1.1 */
			// Start line: 348
			// Start offset: 0x80057B6C
			// Variables:
		// 		int o; // $v0
		/* end block 1.1 */
		// End offset: 0x80057B8C
		// End Line: 349
	/* end block 1 */
	// End offset: 0x80057B8C
	// End Line: 349

void AI_ClearLaneMerits__Fv(void)
{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  CarLogic_gObs = 0;
  DAT_8010cce8 = 0;
  DAT_8010ccec = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_DoReactions__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 357, offset 0x80057b94
	/* begin block 1 */
		// Start line: 358
		// Start offset: 0x80057B94
		// Variables:
	// 		int target; // $a0

		/* begin block 1.1 */
			// Start line: 390
			// Start offset: 0x80057CB8

			/* begin block 1.1.1 */
				// Start line: 391
				// Start offset: 0x80057CD8
				// Variables:
			// 		int absDistance; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 393
					// Start offset: 0x80057CD8

					/* begin block 1.1.1.1.1 */
						// Start line: 400
						// Start offset: 0x80057D0C
						// Variables:
					// 		int seconds; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80057D58
					// End Line: 410
				/* end block 1.1.1.1 */
				// End offset: 0x80057D58
				// End Line: 410
			/* end block 1.1.1 */
			// End offset: 0x80057D58
			// End Line: 410
		/* end block 1.1 */
		// End offset: 0x80057D58
		// End Line: 410

		/* begin block 1.2 */
			// Start line: 414
			// Start offset: 0x80057D58

			/* begin block 1.2.1 */
				// Start line: 415
				// Start offset: 0x80057D74
				// Variables:
			// 		struct Car_tObj *otherCarObj; // $s0
			// 		int metersDistance; // $-1
			/* end block 1.2.1 */
			// End offset: 0x80057DC0
			// End Line: 424
		/* end block 1.2 */
		// End offset: 0x80057DC0
		// End Line: 424
	/* end block 1 */
	// End offset: 0x80057DC0
	// End Line: 424

void AI_DoReactions__FP8Car_tObj(Car_tObj *carObj)
{
  int state;
  int ticksOn;
  int ticksOff;
  Car_tObj *otherCarObj;
  
  state = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&carObj->script,AISCRIPT_AIREACTION_HONK_HORN);
  if ((state == -1) || (GameSetup_gData == 1)) {
    if ((carObj->control).horn != '\0') {
      state = 0;
      goto LAB_80057bec;
    }
  }
  else {
    state = 1;
LAB_80057bec:
    AudioClc_SetHorn__FP8Car_tObji(carObj,state);
  }
  state = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&carObj->script,AISCRIPT_AIREACTION_CRAZY_HORN);
  if ((state != -1) && (GameSetup_gData != 1)) {
    if (false) {
      state = 2;
      ticksOn = 0x20;
      ticksOff = 0xc;
    }
    else {
      if (false) {
        if (false) {
          state = 7;
          ticksOn = 0x28;
          ticksOff = 0x10;
        }
        else {
          if (true) goto LAB_80057cc0;
          state = 1;
          ticksOn = 0x20;
          ticksOff = 0;
        }
      }
      else {
        if (false) goto LAB_80057cc0;
        state = 4;
        ticksOn = 0x10;
        ticksOff = 8;
      }
    }
    AudioClc_HonkHorn__FP8Car_tObjiii(carObj,state,ticksOn,ticksOff);
  }
LAB_80057cc0:
  state = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&carObj->script,AISCRIPT_AIREACTION_SWERVE);
  if (state != -1) {
    state = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj,(Car_tObj *)(&_Cars_gList)[state]);
    if (state < 0) {
      state = -state;
    }
    if (0xc0000 < state) {
      state = AIScript_GetReactionTicksLeft__FP10AIScript_t(&carObj->script);
      if (state < 0) {
        state = state + 0x1f;
      }
      if ((state >> 5 & 1U) == 0) {
        DAT_8010ccec = DAT_8010ccec + 0x1e0000;
      }
      else {
        CarLogic_gObs = CarLogic_gObs + 0x1e0000;
      }
    }
  }
  state = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&carObj->script,AISCRIPT_AIREACTION_SWIPE);
  if (state != -1) {
    otherCarObj = (Car_tObj *)(&_Cars_gList)[state];
    state = AIWorld_SplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
    if ((int)(state * (carObj->speechInfo).speechSource) < 0x40000) {
      AI_TargetLane__FP8Car_tObji(carObj,*(int *)(otherCarObj->accTable + 0x6e));
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_CheckForPlayerActions__FP8Car_tObjT0(struct Car_tObj *carObj /*$s1*/, struct Car_tObj *otherCarObj /*$s2*/)
 // line 446, offset 0x80057dd4
	/* begin block 1 */
		// Start line: 447
		// Start offset: 0x80057DD4
		// Variables:
	// 		int absDistance; // $s4
	/* end block 1 */
	// End offset: 0x80057FF4
	// End Line: 484

void AI_CheckForPlayerActions__FP8Car_tObjT0(Car_tObj *carObj,Car_tObj *otherCarObj)
{
  int iVar1;
  int humCarIndex;
  Car_tObj *pCVar2;
  int iVar3;
  speechSourceType sVar4;
  AIScript_tPlayAction playerAction;
  
  iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  humCarIndex = AIWorld_GameOdometer__FP8Car_tObj(carObj);
  if (humCarIndex < 0x3200000) {
    return;
  }
  if (((-(otherCarObj->N).collision.lastTime < 0xf) &&
      (pCVar2 = (Car_tObj *)(otherCarObj->N).collision.lastOtherObj, pCVar2 != (Car_tObj *)0x0)) &&
     (pCVar2 == carObj)) {
    AIScript_SubmitPlayerAction__FP10AIScript_ti20AIScript_tPlayActioni
              (&carObj->script,otherCarObj->carIndex,AISCRIPT_PLAYACTION_COLLISION,0);
  }
  sVar4 = (carObj->speechInfo).speechSource;
  if ((int)(otherCarObj->carInLane * sVar4 + 0x280000) < (int)(carObj->carInLane * sVar4)) {
    if (0xbffff < iVar1) goto LAB_80057f34;
    AIScript_SubmitPlayerAction__FP10AIScript_ti20AIScript_tPlayActioni
              (&carObj->script,otherCarObj->carIndex,AISCRIPT_PLAYACTION_OPP_WIZZED_BY,0);
  }
  if ((iVar1 < 0xc0000) &&
     (*(int *)(otherCarObj->accTable + 0x6e) == *(int *)(carObj->accTable + 0x6e))) {
    humCarIndex = AIWorld_GameOdometer__FP8Car_tObj(otherCarObj);
    iVar3 = AIWorld_GameOdometer__FP8Car_tObj(carObj);
    if (iVar3 < humCarIndex) {
      humCarIndex = otherCarObj->carIndex;
      playerAction = AISCRIPT_PLAYACTION_HUMAN_BLOCK_OPP;
    }
    else {
      humCarIndex = otherCarObj->carIndex;
      playerAction = AISCRIPT_PLAYACTION_OPP_BLOCK_HUMAN;
    }
    AIScript_SubmitPlayerAction__FP10AIScript_ti20AIScript_tPlayActioni
              (&carObj->script,humCarIndex,playerAction,0);
  }
LAB_80057f34:
  if ((otherCarObj->swapCar == carObj) && (-carObj->swapTime < 0xf)) {
    humCarIndex = AIWorld_GameOdometer__FP8Car_tObj(carObj);
    iVar3 = AIWorld_GameOdometer__FP8Car_tObj(otherCarObj);
    if (iVar3 < humCarIndex) {
      humCarIndex = otherCarObj->carIndex;
      playerAction = AISCRIPT_PLAYACTION_OPP_PASS_HUMAN;
    }
    else {
      humCarIndex = otherCarObj->carIndex;
      playerAction = AISCRIPT_PLAYACTION_HUMAN_PASS_OPP;
    }
    AIScript_SubmitPlayerAction__FP10AIScript_ti20AIScript_tPlayActioni
              (&carObj->script,humCarIndex,playerAction,0);
  }
  if (((iVar1 < 0x1e0000) && ((otherCarObj->control).horn != '\0')) && (DAT_80113240 == 0)) {
    AIScript_SubmitPlayerAction__FP10AIScript_ti20AIScript_tPlayActioni
              (&carObj->script,otherCarObj->carIndex,AISCRIPT_PLAYACTION_HUMAN_HONK,0);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_DoReactionsAndBehavior__FP8Car_tObj(struct Car_tObj *carObj /*$s3*/)
 // line 495, offset 0x80058014
	/* begin block 1 */
		// Start line: 496
		// Start offset: 0x80058014
		// Variables:
	// 		int t; // $s2

		/* begin block 1.1 */
			// Start line: 496
			// Start offset: 0x80058014

			/* begin block 1.1.1 */
				// Start line: 501
				// Start offset: 0x80058040
				// Variables:
			// 		struct Car_tObj *otherCarObj; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800580B0
			// End Line: 519
		/* end block 1.1 */
		// End offset: 0x800580BC
		// End Line: 522
	/* end block 1 */
	// End offset: 0x800580BC
	// End Line: 522

void AI_DoReactionsAndBehavior__FP8Car_tObj(Car_tObj *carObj)
{
  Car_tObj *otherCarObj;
  Car_tObj **ppCVar1;
  int iVar2;
  
  AI_DoReactions__FP8Car_tObj(carObj);
  iVar2 = 0;
  ppCVar1 = (Car_tObj **)&_Cars_gList;
  while (iVar2 < Cars_gNumCars) {
    otherCarObj = *ppCVar1;
    if ((((carObj != otherCarObj) && ((otherCarObj->N).active != '\0')) &&
        ((otherCarObj->carFlags & 4U) != 0)) &&
       (AI_CheckForPlayerActions__FP8Car_tObjT0(carObj,otherCarObj), (carObj->carFlags & 8U) != 0))
    {
      AI_OpponentBlockPlayer__FP8Car_tObjT0(carObj,otherCarObj);
    }
    ppCVar1 = ppCVar1 + 1;
    iVar2 = iVar2 + 1;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_OpponentBlockPlayer__FP8Car_tObjT0(struct Car_tObj *carObj /*$s1*/, struct Car_tObj *otherCarObj /*$s2*/)
 // line 531, offset 0x800580d8
	/* begin block 1 */
		// Start line: 532
		// Start offset: 0x800580D8
		// Variables:
	// 		int otherCarObjSlice; // $s3
	// 		int distance; // $s0
	/* end block 1 */
	// End offset: 0x800582B8
	// End Line: 587

void AI_OpponentBlockPlayer__FP8Car_tObjT0(Car_tObj *carObj,Car_tObj *otherCarObj)
{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = AI_IsMellowZone__FP8Car_tObji(carObj,0x1900000);
  if (iVar3 != 0) {
    return;
  }
  if (0xe < DAT_8010cd34) {
    return;
  }
  sVar2 = (otherCarObj->N).simRoadInfo.slice;
  iVar3 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
  iVar3 = iVar3 * (carObj->speechInfo).speechSource;
  iVar4 = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&carObj->script,AISCRIPT_AIREACTION_MOVE_AWAY);
  if (((iVar4 == -1) || (iVar3 < 0)) || (0x31ffff < iVar3)) {
    if (iVar3 < -0x60000) {
      return;
    }
    if (carObj->personality->blockMaxDistance <= iVar3) {
      return;
    }
    if (iVar3 < carObj->personality->blockMinDistance) {
      return;
    }
    iVar3 = *(int *)(otherCarObj->accTable + 0x6e);
    bVar1 = *(byte *)((int)sVar2 * 0x20 + 0x1d);
    if (iVar3 < (int)(7 - (uint)(bVar1 >> 4))) {
      return;
    }
    if ((int)(((uint)bVar1 & 0xf) + 6) < iVar3) {
      return;
    }
    if ((int)(otherCarObj->carInLane * (otherCarObj->speechInfo).speechSource) < 0x140001) {
      return;
    }
    if (*(int *)(carObj->accTable + 0x6e) <= iVar3) {
      if (iVar3 != *(int *)(carObj->accTable + 0x6e)) {
        iVar3 = 0x40000;
        goto LAB_800582b0;
      }
      iVar3 = 0x40000;
      goto LAB_8005829c;
    }
    iVar3 = 0x40000;
  }
  else {
    if (*(int *)(carObj->accTable + 0x6e) <= *(int *)(otherCarObj->accTable + 0x6e)) {
      if (*(int *)(otherCarObj->accTable + 0x6e) != *(int *)(carObj->accTable + 0x6e)) {
        iVar3 = -0x40000;
LAB_800582b0:
        DAT_8010ccec = DAT_8010ccec + iVar3;
        return;
      }
      iVar3 = -0x40000;
LAB_8005829c:
      DAT_8010cce8 = DAT_8010cce8 + iVar3;
      return;
    }
    iVar3 = -0x40000;
  }
  CarLogic_gObs = CarLogic_gObs + iVar3;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_CheckForBarriers__FP8Car_tObj(struct Car_tObj *carObj /*$s7*/)
 // line 602, offset 0x800582d4
	/* begin block 1 */
		// Start line: 603
		// Start offset: 0x800582D4
		// Variables:
	// 		int dir; // stack offset -48
	// 		int slicesAhead; // $s4
	// 		int forwardSlice0; // $s1
	// 		int forwardSlice1; // $s0
	// 		int interval; // $s5
	// 		int masks[3]; // stack offset -80
	// 		int laneNotChecked[3]; // stack offset -64
	// 		int speed; // $v0
	// 		int sliceLoop; // $s1
	// 		int slice; // $s3
	// 		int profileHere; // $s2

		/* begin block 1.1 */
			// Start line: 640
			// Start offset: 0x80058500

			/* begin block 1.1.1 */
				// Start line: 641
				// Start offset: 0x80058510

				/* begin block 1.1.1.1 */
					// Start line: 645
					// Start offset: 0x8005854C

					/* begin block 1.1.1.1.1 */
						// Start line: 650
						// Start offset: 0x80058564
						// Variables:
					// 		int checkSlice; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005865C
					// End Line: 666
				/* end block 1.1.1.1 */
				// End offset: 0x80058664
				// End Line: 669
			/* end block 1.1.1 */
			// End offset: 0x80058664
			// End Line: 669
		/* end block 1.1 */
		// End offset: 0x80058664
		// End Line: 669
	/* end block 1 */
	// End offset: 0x80058664
	// End Line: 669

void AI_CheckForBarriers__FP8Car_tObj(Car_tObj *carObj)
{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int mask;
  int mask_00;
  int mask_01;
  int iVar5;
  int iVar6;
  speechSourceType sVar7;
  int slice;
  int iVar8;
  int slice_00;
  int iVar9;
  
  bVar2 = true;
  bVar3 = true;
  bVar4 = true;
  mask = AIWorld_GetProfileMask__Fi(*(int *)(carObj->accTable + 0x6e) + -1);
  mask_00 = AIWorld_GetProfileMask__Fi(*(int *)(carObj->accTable + 0x6e));
  mask_01 = AIWorld_GetProfileMask__Fi(*(int *)(carObj->accTable + 0x6e) + 1);
  sVar7 = (carObj->speechInfo).speechSource;
  iVar6 = carObj->carInLane;
  slice_00 = (int)(carObj->N).simRoadInfo.slice;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xffff;
  }
  iVar6 = iVar6 >> 0x10;
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  iVar9 = (iVar6 << 0x12) >> 0x1f;
  iVar9 = ((iVar6 << 0x12) / 6 + iVar9 >> 0x10) - iVar9;
  sVar1 = *(short *)(slice_00 * 0x20 + 0x16);
  iVar6 = AIWorld_IsDriveableLane_UsingMask__Fii(slice_00,mask);
  if (iVar6 == 0) {
    CarLogic_gObs = CarLogic_gObs + -0xa0000;
  }
  iVar6 = AIWorld_IsDriveableLane_UsingMask__Fii(slice_00,mask_00);
  if (iVar6 == 0) {
    DAT_8010cce8 = DAT_8010cce8 + -0xa0000;
  }
  iVar6 = AIWorld_IsDriveableLane_UsingMask__Fii(slice_00,mask_01);
  if (iVar6 == 0) {
    DAT_8010ccec = DAT_8010ccec + -0xa0000;
  }
  if ((sVar1 != *(short *)((slice_00 + iVar9 * sVar7) * 0x20 + 0x16)) ||
     (sVar1 != *(short *)((slice_00 + (iVar9 + 1) * sVar7) * 0x20 + 0x16))) {
    *(undefined4 *)(carObj->accTable + 0x6c) = 0x49;
  }
  if (0 < *(int *)(carObj->accTable + 0x6c)) {
    iVar6 = iVar9 * 0xa3d;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xffff;
    }
    iVar6 = iVar6 >> 0x10;
    iVar8 = 0;
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    *(int *)(carObj->accTable + 0x6c) = *(int *)(carObj->accTable + 0x6c);
    while (iVar8 < iVar9) {
      slice = slice_00 + iVar8 * sVar7;
      if ((bVar2) && (iVar5 = AIWorld_IsDriveableLane_UsingMask__Fii(slice,mask), iVar5 == 0)) {
        bVar2 = false;
        CarLogic_gObs = CarLogic_gObs + -0x280000;
      }
      if ((bVar3) && (iVar5 = AIWorld_IsDriveableLane_UsingMask__Fii(slice,mask_00), iVar5 == 0)) {
        bVar3 = false;
        DAT_8010cce8 = DAT_8010cce8 + -0x280000;
      }
      if ((bVar4) && (slice = AIWorld_IsDriveableLane_UsingMask__Fii(slice,mask_01), slice == 0)) {
        bVar4 = false;
        DAT_8010ccec = DAT_8010ccec + -0x280000;
      }
      iVar8 = iVar8 + iVar6;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_SetupOncomingLaneDemerits__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 685, offset 0x80058694
	/* begin block 1 */
		// Start line: 686
		// Start offset: 0x80058694
		// Variables:
	// 		int opposingLaneMerit; // $a0
	/* end block 1 */
	// End offset: 0x800587DC
	// End Line: 716

void AI_SetupOncomingLaneDemerits__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  
  iVar1 = AI_IsMellowZone__FP8Car_tObji(carObj,0x3c0000);
  if (iVar1 == 0) {
    iVar1 = -0x40000;
    if ((carObj->carFlags & 0x10U) != 0) {
      iVar1 = -0xc0000;
    }
    if ((((Cars_gNumTrafficCars != 0) || (Cars_gNumCopCars != 0)) && (true)) &&
       ((carObj->desiredLatPos & 2U) == 0)) {
      if ((carObj->speechInfo).speechSource == SPEECH_SOURCE_REGULAR_COP) {
        if (*(int *)(carObj->accTable + 0x6e) + -1 < 7) {
          CarLogic_gObs = CarLogic_gObs + iVar1;
        }
        if (*(int *)(carObj->accTable + 0x6e) < 7) {
          DAT_8010cce8 = DAT_8010cce8 + iVar1;
        }
      }
      else {
        if (6 < *(int *)(carObj->accTable + 0x6e)) {
          DAT_8010cce8 = DAT_8010cce8 + iVar1;
        }
        if (6 < *(int *)(carObj->accTable + 0x6e) + 1) {
          DAT_8010ccec = DAT_8010ccec + iVar1;
        }
      }
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_HandleChangeInNumLanes__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 724, offset 0x800587ec
	/* begin block 1 */
		// Start line: 725
		// Start offset: 0x800587EC
		// Variables:
	// 		int lookAheadSlice; // $v1
	// 		int absLaneLookAhead; // $v1
	// 		int lookAhead; // $v1
	// 		int laneIndex; // $v1
	/* end block 1 */
	// End offset: 0x8005894C
	// End Line: 754

void AI_HandleChangeInNumLanes__FP8Car_tObj(Car_tObj *carObj)
{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = carObj->carInLane;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  iVar3 = fixedmult(iVar3,0x6aaa);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xffff;
  }
  iVar3 = iVar3 >> 0x10;
  if (iVar3 < 5) {
    iVar3 = 5;
  }
  iVar3 = iVar3 * (carObj->speechInfo).speechSource;
  if (iVar3 < 0) {
    iVar3 = (int)(carObj->N).simRoadInfo.slice + iVar3;
    iVar2 = iVar3 * 0x20;
    if (-1 < iVar3) goto LAB_800588a4;
  }
  else {
    iVar3 = (int)(carObj->N).simRoadInfo.slice + iVar3;
    iVar2 = iVar3 * 0x20;
    if (iVar3 < 0) goto LAB_800588a4;
  }
  iVar2 = iVar3 << 5;
LAB_800588a4:
  iVar3 = *(int *)(carObj->accTable + 0x6e);
  if ((((iVar3 < (int)(7 - (uint)(*(byte *)(iVar2 + 0x1d) >> 4))) ||
       ((int)(((uint)*(byte *)(iVar2 + 0x1d) & 0xf) + 6) < iVar3)) &&
      (bVar1 = *(byte *)((int)(carObj->N).simRoadInfo.slice * 0x20 + 0x1d),
      (int)(7 - (uint)(bVar1 >> 4)) <= iVar3)) && (iVar3 <= (int)(((uint)bVar1 & 0xf) + 6))) {
    if (iVar3 < 7) {
      DAT_8010ccec = DAT_8010ccec + 0x280000;
    }
    else {
      CarLogic_gObs = CarLogic_gObs + 0x280000;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_HandleShouldersAndOffRoad__FP8Car_tObj(struct Car_tObj *carObj /*$a3*/)
 // line 769, offset 0x8005895c
	/* begin block 1 */
		// Start line: 770
		// Start offset: 0x8005895C
		// Variables:
	// 		int slice; // $t2
	// 		int shoulder_merit; // $t1

		/* begin block 1.1 */
			// Start line: 804
			// Start offset: 0x80058AFC

			/* begin block 1.1.1 */
				// Start line: 805
				// Start offset: 0x80058B34
				// Variables:
			// 		int isRight; // $a1
			/* end block 1.1.1 */
			// End offset: 0x80058C0C
			// End Line: 815
		/* end block 1.1 */
		// End offset: 0x80058C0C
		// End Line: 815
	/* end block 1 */
	// End offset: 0x80058D18
	// End Line: 825

void AI_HandleShouldersAndOffRoad__FP8Car_tObj(Car_tObj *carObj)
{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)(carObj->N).simRoadInfo.slice;
  iVar4 = -0x4e666;
  if (((((carObj->carFlags & 0x10U) != 0) && (iVar4 = -0x260000, DAT_8010ccf4 != 0)) &&
      ((*(uint *)(DAT_8010ccf4 + 0x260) & 1) != 0)) && (0x8e38e < *(int *)(DAT_8010ccf4 + 0x568))) {
    iVar4 = 0x50000;
  }
  iVar3 = *(int *)(carObj->accTable + 0x6e) + -1;
  bVar1 = *(byte *)(iVar5 * 0x20 + 0x1d);
  if ((iVar3 == 6 - (uint)(bVar1 >> 4)) || (iVar3 == ((uint)bVar1 & 0xf) + 7)) {
    CarLogic_gObs = CarLogic_gObs + iVar4;
    iVar3 = (int)(carObj->N).simRoadInfo.slice * 0x20;
    if ((int)((int)*(short *)(iVar3 + 0x18) * 0x100 -
             (uint)*(byte *)(iVar3 + 0x1e) * 0x8000 * (uint)(*(byte *)(iVar3 + 0x1d) >> 4)) <
        (carObj->N).dimension.x) {
      CarLogic_gObs = CarLogic_gObs + -0x640000;
    }
  }
  iVar3 = *(int *)(carObj->accTable + 0x6e) + 1;
  bVar1 = *(byte *)(iVar5 * 0x20 + 0x1d);
  if ((iVar3 == 6 - (uint)(bVar1 >> 4)) || (iVar3 == ((uint)bVar1 & 0xf) + 7)) {
    DAT_8010ccec = DAT_8010ccec + iVar4;
    iVar3 = (int)(carObj->N).simRoadInfo.slice * 0x20;
    if ((int)((int)*(short *)(iVar3 + 0x1a) * 0x100 -
             (uint)*(byte *)(iVar3 + 0x1f) * 0x8000 * ((uint)*(byte *)(iVar3 + 0x1d) & 0xf)) <
        (carObj->N).dimension.x) {
      DAT_8010ccec = DAT_8010ccec + -0x640000;
    }
  }
  bVar1 = *(byte *)(iVar5 * 0x20 + 0x1d);
  if ((*(int *)(carObj->accTable + 0x6e) == 6 - (uint)(bVar1 >> 4)) ||
     (*(int *)(carObj->accTable + 0x6e) == ((uint)bVar1 & 0xf) + 7)) {
    DAT_8010cce8 = DAT_8010cce8 + iVar4;
    bVar2 = *(int *)(carObj->accTable + 0x6e) < 7;
    if (((bVar2) &&
        (iVar4 = (int)(carObj->N).simRoadInfo.slice * 0x20,
        (int)((int)*(short *)(iVar4 + 0x18) * 0x100 -
             (uint)*(byte *)(iVar4 + 0x1e) * 0x8000 * (uint)(*(byte *)(iVar4 + 0x1d) >> 4)) <
        (carObj->N).dimension.x)) ||
       ((!bVar2 &&
        (iVar4 = (int)(carObj->N).simRoadInfo.slice * 0x20,
        (int)((int)*(short *)(iVar4 + 0x1a) * 0x100 -
             (uint)*(byte *)(iVar4 + 0x1f) * 0x8000 * ((uint)*(byte *)(iVar4 + 0x1d) & 0xf)) <
        (carObj->N).dimension.x)))) {
      DAT_8010cce8 = DAT_8010cce8 + -0x640000;
    }
  }
  bVar1 = *(byte *)(iVar5 * 0x20 + 0x1d);
  iVar4 = *(int *)(carObj->accTable + 0x6e) + -1;
  if ((iVar4 < (int)(6 - (uint)(bVar1 >> 4))) || ((int)(((uint)bVar1 & 0xf) + 7) < iVar4)) {
    CarLogic_gObs = CarLogic_gObs + -0x3e80000;
  }
  bVar1 = *(byte *)(iVar5 * 0x20 + 0x1d);
  if ((*(int *)(carObj->accTable + 0x6e) < (int)(6 - (uint)(bVar1 >> 4))) ||
     ((int)(((uint)bVar1 & 0xf) + 7) < *(int *)(carObj->accTable + 0x6e))) {
    DAT_8010cce8 = DAT_8010cce8 + -0x3e80000;
  }
  bVar1 = *(byte *)(iVar5 * 0x20 + 0x1d);
  iVar4 = *(int *)(carObj->accTable + 0x6e) + 1;
  if ((iVar4 < (int)(6 - (uint)(bVar1 >> 4))) || ((int)(((uint)bVar1 & 0xf) + 7) < iVar4)) {
    DAT_8010ccec = DAT_8010ccec + -0x3e80000;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_CalculateLaneSpeeds__FP8Car_tObj(struct Car_tObj *carObj /*$s2*/)
 // line 841, offset 0x80058d20
	/* begin block 1 */
		// Start line: 842
		// Start offset: 0x80058D20
		// Variables:
	// 		struct Car_tObj *otherCarObj; // $s0
	// 		int ci; // $s5
	// 		int carObjIndexInSortedList; // stack offset -48
	// 		int carsFound; // $s4
	// 		int lanesFilled; // $s1
	// 		int distanceFixedMeters; // $a1
	// 		int distanceIntMeters; // $v1
	// 		int distanceFixedMetersSignChecked; // $a3
	// 		int inverseCollisionTime; // $a2
	// 		int inverseAheadCollisionTime; // $a0
	// 		int carObjLeftLaneBits; // $fp
	// 		int carObjThisLaneBits; // $s7
	// 		int carObjRightLaneBits; // $s6
	// 		int maxDistanceToCheck; // stack offset -44

		/* begin block 1.1 */
			// Start line: 842
			// Start offset: 0x80058D20

			/* begin block 1.1.1 */
				// Start line: 892
				// Start offset: 0x80058DBC

				/* begin block 1.1.1.1 */
					// Start line: 929
					// Start offset: 0x80058EC8

					/* begin block 1.1.1.1.1 */
						// Start line: 930
						// Start offset: 0x80058EF0
						// Variables:
					// 		int collisionSpeed; // $a1
					// 		int aheadCollisionSpeed; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005907C
					// End Line: 986
				/* end block 1.1.1.1 */
				// End offset: 0x8005907C
				// End Line: 986
			/* end block 1.1.1 */
			// End offset: 0x8005907C
			// End Line: 986
		/* end block 1.1 */
		// End offset: 0x80059084
		// End Line: 989
	/* end block 1 */
	// End offset: 0x80059084
	// End Line: 989

void AI_CalculateLaneSpeeds__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  Car_tObj *carObj_00;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar7 = 0;
  iVar9 = 0;
  iVar8 = 0;
  iVar1 = carObj->personality->oncomingLookAhead;
  DAT_8010cd08 = (carObj->speechInfo).copCarIndex;
  DAT_8010cd0c = (carObj->speechInfo).copCarIndex;
  DAT_8010cd10 = (carObj->speechInfo).copCarIndex;
  uVar4 = *(uint *)(carObj->accTable + 0x6e);
  iVar6 = carObj->sortIndex;
  uVar11 = 1 << (uVar4 - 1 & 0x1f);
  uVar10 = 1 << (uVar4 & 0x1f);
  uVar4 = 1 << (uVar4 + 1 & 0x1f);
  DAT_8010cd14 = DAT_8010cd08;
  DAT_8010cd18 = DAT_8010cd0c;
  DAT_8010cd1c = DAT_8010cd10;
  do {
    if ((iVar8 == 3) || (Cars_gNumCars <= iVar9)) {
      return;
    }
    iVar2 = iVar6 + iVar9 * (carObj->speechInfo).speechSource + Cars_gNumCars;
    if (Cars_gNumCars == 0) {
      trap(0x1c00);
    }
    if ((Cars_gNumCars == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    carObj_00 = (Car_tObj *)(&_Cars_gSortedList)[iVar2 % Cars_gNumCars];
    if ((carObj != carObj_00) && ((carObj_00->N).active != '\0')) {
      iVar3 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj_00,carObj);
      iVar12 = iVar3 * (carObj->speechInfo).speechSource;
      iVar2 = carObj->carInLane;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 0x1638e3) {
        iVar5 = 0xd555;
        iVar2 = 0x6666;
      }
      else {
        iVar5 = 0x14000;
        iVar2 = 0x8e38;
      }
      if (iVar12 < 0xf0000) {
        iVar5 = 0x2aaa;
        iVar2 = 0x1999;
      }
      if (((carObj->N).dimension.z < iVar12) && (iVar12 < iVar1)) {
        if ((carObj->speechInfo).speechSource == SPEECH_SOURCE_SUPER_COP) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xffff;
          }
          iVar3 = (iVar3 >> 0x10) + -2;
          if ((carObj->carFlags & 0x28U) != 0) {
            if (0 < iVar3) goto LAB_80058f88;
            iVar3 = 1;
          }
          if (iVar3 < 0) {
            iVar3 = 0;
          }
        }
        else {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xffff;
          }
          iVar3 = (iVar3 >> 0x10) + 2;
          if (((carObj->carFlags & 0x28U) != 0) && (1 < iVar3)) {
            iVar3 = -1;
          }
          if (0 < iVar3) {
            iVar3 = 0;
          }
        }
LAB_80058f88:
        iVar5 = carObj_00->carInLane + iVar3 * iVar5;
        iVar2 = carObj_00->carInLane + iVar3 * iVar2;
        if ((((carObj_00->speechInfo).speechMode & uVar10) != 0) && ((uVar7 & uVar10) == 0)) {
          uVar7 = uVar7 | uVar10;
          iVar8 = iVar8 + 1;
          DAT_8010ccf4 = carObj_00;
          DAT_8010cd00 = iVar12;
          DAT_8010cd0c = iVar5;
          DAT_8010cd18 = iVar2;
        }
        if (((*(int *)(carObj->accTable + 0x6e) - 1U < 0xe) &&
            (((carObj_00->speechInfo).speechMode & uVar11) != 0)) && ((uVar7 & uVar11) == 0)) {
          uVar7 = uVar7 | uVar11;
          iVar8 = iVar8 + 1;
          AI_Info = carObj_00;
          DAT_8010ccfc = iVar12;
          DAT_8010cd08 = iVar5;
          DAT_8010cd14 = iVar2;
        }
        if (((*(int *)(carObj->accTable + 0x6e) + 1U < 0xe) &&
            (((carObj_00->speechInfo).speechMode & uVar4) != 0)) && ((uVar7 & uVar4) == 0)) {
          uVar7 = uVar7 | uVar4;
          iVar8 = iVar8 + 1;
          DAT_8010ccf8 = carObj_00;
          DAT_8010cd04 = iVar12;
          DAT_8010cd10 = iVar5;
          DAT_8010cd1c = iVar2;
        }
      }
    }
    iVar9 = iVar9 + 1;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_CalcMeritsBasedOnSpeed__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1011, offset 0x800590b4
	/* begin block 1 */
		// Start line: 1012
		// Start offset: 0x800590B4
		// Variables:
	// 		int dSpeed; // $s3
	// 		int cSpeed; // $s2
	// 		int considerDesired; // $s4
	/* end block 1 */
	// End offset: 0x80059410
	// End Line: 1057

void AI_CalcMeritsBasedOnSpeed__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (carObj->speechInfo).copCarIndex;
  iVar5 = carObj->carInLane;
  iVar1 = AIWorld_GameOdometer__FP8Car_tObj(carObj);
  if ((AI_Info != 0) && (DAT_8010ccfc < 0x1e0000)) {
    CarLogic_gObs = CarLogic_gObs + -0xe0000;
  }
  if ((DAT_8010ccf4 != 0) && (DAT_8010cd00 < 0x1e0000)) {
    DAT_8010cce8 = DAT_8010cce8 + -0xe0000;
  }
  if ((DAT_8010ccf8 != 0) && (DAT_8010cd04 < 0x1e0000)) {
    DAT_8010ccec = DAT_8010ccec + -0xe0000;
  }
  if ((carObj->speechInfo).speechSource == SPEECH_SOURCE_SUPER_COP) {
    piVar3 = &CarLogic_gObs;
    piVar4 = &AI_Info;
    do {
      iVar2 = piVar4[6];
      if ((iVar2 <= iVar5) && (*piVar4 != 0)) {
        iVar2 = fixedmult(iVar5 - iVar2,0xfffeb334);
        *piVar3 = *piVar3 + iVar2;
        iVar2 = piVar4[6];
      }
      if (((iVar2 <= iVar6) && (*piVar4 != 0)) && (0x257ffff < iVar1)) {
        iVar2 = fixedmult(iVar6 - iVar2,0xffff8000);
        *piVar3 = *piVar3 + iVar2;
      }
      iVar2 = piVar4[9];
      if ((iVar2 <= iVar5) && (*piVar4 != 0)) {
        iVar2 = fixedmult(iVar5 - iVar2,0xffff8000);
        *piVar3 = *piVar3 + iVar2;
        iVar2 = piVar4[9];
      }
      if (((iVar2 <= iVar6) && (*piVar4 != 0)) && (0x257ffff < iVar1)) {
        iVar2 = fixedmult(iVar6 - iVar2,0xffffe667);
        *piVar3 = *piVar3 + iVar2;
      }
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)piVar3 < -0x7fef3310);
  }
  else {
    piVar3 = &CarLogic_gObs;
    piVar4 = &AI_Info;
    do {
      iVar1 = piVar4[6];
      if (iVar5 <= iVar1) {
        if (*piVar4 != 0) {
          iVar1 = fixedmult(iVar1 - iVar5,0xfffeb334);
          *piVar3 = *piVar3 + iVar1;
        }
        iVar1 = piVar4[6];
      }
      if ((iVar6 <= iVar1) && (*piVar4 != 0)) {
        iVar1 = fixedmult(iVar1 - iVar6,0xffff8000);
        *piVar3 = *piVar3 + iVar1;
      }
      iVar1 = piVar4[9];
      if (iVar5 <= iVar1) {
        if (*piVar4 != 0) {
          iVar1 = fixedmult(iVar1 - iVar5,0xffff8000);
          *piVar3 = *piVar3 + iVar1;
        }
        iVar1 = piVar4[9];
      }
      if ((iVar6 <= iVar1) && (*piVar4 != 0)) {
        iVar1 = fixedmult(iVar1 - iVar6,0xffffe667);
        *piVar3 = *piVar3 + iVar1;
      }
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)piVar3 < -0x7fef3310);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_CheckForClearLanes__FP8Car_tObj(struct Car_tObj *carObj /*$s3*/)
 // line 1075, offset 0x80059434
	/* begin block 1 */
		// Start line: 1076
		// Start offset: 0x80059434
		// Variables:
	// 		int lanesFilled; // $s1
	// 		int dir; // $s7
	// 		int carsFound; // $s2
	// 		int ci; // $s4
	// 		struct Car_tObj *otherCarObj; // $s0
	// 		int carObjIndexInSortedList; // $s0
	// 		int clearAheadMerits[3]; // stack offset -56
	/* end block 1 */
	// End offset: 0x80059674
	// End Line: 1135

void AI_CheckForClearLanes__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Car_tObj *carObj_00;
  uint uVar5;
  speechSourceType sVar6;
  speechSourceType sVar7;
  int local_38;
  int local_34;
  int local_30;
  
  iVar4 = carObj->sortIndex;
  uVar5 = 0;
  if (((carObj->carFlags & 8U) != 0) &&
     (iVar1 = AI_IsMellowZone__FP8Car_tObji(carObj,0), iVar1 == 0)) {
    local_30 = 0x40000;
    local_34 = 0x40000;
    local_38 = 0x40000;
    sVar6 = (carObj->speechInfo).speechSource;
    iVar1 = 0;
    iVar4 = sVar6 * sVar6 + iVar4;
    sVar7 = sVar6;
    do {
      if (Cars_gNumCars <= (int)sVar7) break;
      if (Cars_gNumCars == 0) {
        trap(0x1c00);
      }
      if ((Cars_gNumCars == -1) && (iVar4 + Cars_gNumCars == -0x80000000)) {
        trap(0x1800);
      }
      carObj_00 = (Car_tObj *)(&_Cars_gSortedList)[(iVar4 + Cars_gNumCars) % Cars_gNumCars];
      if (((carObj != carObj_00) && ((carObj_00->N).active != '\0')) &&
         (iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj_00,carObj),
         iVar2 + 0x40000U < 0x6e0000)) {
        uVar3 = *(uint *)(carObj->accTable + 0x6e);
        if ((((int)(carObj_00->speechInfo).speechMode >> (uVar3 & 0x1f) & 1U) != 0) &&
           (((int)uVar5 >> (uVar3 & 0x1f) & 1U) == 0)) {
          local_34 = 0;
          iVar1 = iVar1 + 1;
          uVar5 = uVar5 | 1 << (*(uint *)(carObj->accTable + 0x6e) & 0x1f);
          uVar3 = *(uint *)(carObj->accTable + 0x6e);
        }
        if (((0 < (int)uVar3) &&
            (((int)(carObj_00->speechInfo).speechMode >> (uVar3 - 1 & 0x1f) & 1U) != 0)) &&
           (((int)uVar5 >> (uVar3 - 1 & 0x1f) & 1U) == 0)) {
          local_38 = 0;
          iVar1 = iVar1 + 1;
          uVar5 = uVar5 | 1 << (*(int *)(carObj->accTable + 0x6e) - 1U & 0x1f);
        }
        uVar3 = *(int *)(carObj->accTable + 0x6e) + 1;
        if (((uVar3 < 0xe) &&
            (((int)(carObj_00->speechInfo).speechMode >> (uVar3 & 0x1f) & 1U) != 0)) &&
           (((int)uVar5 >> (uVar3 & 0x1f) & 1U) == 0)) {
          local_30 = 0;
          iVar1 = iVar1 + 1;
          uVar5 = uVar5 | 1 << (*(int *)(carObj->accTable + 0x6e) + 1U & 0x1f);
        }
      }
      iVar4 = iVar4 + sVar6;
      sVar7 = sVar7 + SPEECH_SOURCE_SUPER_COP;
    } while (iVar1 != 3);
    CarLogic_gObs = CarLogic_gObs + local_38;
    DAT_8010cce8 = DAT_8010cce8 + local_34;
    DAT_8010ccec = DAT_8010ccec + local_30;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_CalcBestLineMerits__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1189, offset 0x800596a4
	/* begin block 1 */
		// Start line: 1190
		// Start offset: 0x800596A4
		// Variables:
	// 		int checkSlice; // $v1

		/* begin block 1.1 */
			// Start line: 1218
			// Start offset: 0x800596C8
			// Variables:
		// 		struct AIDataRecord_BestLine_t *this; // $v0
		// 		int slice; // $v1

			/* begin block 1.1.1 */
				// Start line: 1218
				// Start offset: 0x800596C8
				// Variables:
			// 		char *buffer; // $v0
			// 		int latPos; // $a1
			/* end block 1.1.1 */
			// End offset: 0x800596C8
			// End Line: 1218
		/* end block 1.1 */
		// End offset: 0x800596C8
		// End Line: 1218
	/* end block 1 */
	// End offset: 0x8005971C
	// End Line: 1224

void AI_CalcBestLineMerits__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  speechSourceType sVar2;
  int iVar3;
  
  if ((carObj->carFlags & 8U) != 0) {
    iVar1 = fixedmult(carObj->personality->bestLineAbility,
                      (int)*(char *)(iRam00000048 + carObj->speedNitrous) << 0xe);
    iVar3 = carObj->direction;
    sVar2 = (carObj->speechInfo).speechSource;
    carObj->lateralVelocity = iVar1;
    (carObj->targetPos).x = 0x50000;
    carObj->lateralVelocity = iVar1 - iVar3 * sVar2;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_AddCollidableObjects__FP8Car_tObjP5Group(struct Car_tObj *carObj /*$s1*/, struct Group *groupSimObjs /*$s4*/)
 // line 1231, offset 0x8005972c
	/* begin block 1 */
		// Start line: 1232
		// Start offset: 0x8005972C
		// Variables:
	// 		struct Trk_SimObject *simObjs; // $s0
	// 		static struct BWorldSm_Pos spos; // offset 0x0
	// 		static char firstTime; // offset 0x0

		/* begin block 1.1 */
			// Start line: 1232
			// Start offset: 0x8005972C
			// Variables:
		// 		struct Group *this; // $s4

			/* begin block 1.1.1 */
				// Start line: 1232
				// Start offset: 0x8005972C
			/* end block 1.1.1 */
			// End offset: 0x8005972C
			// End Line: 1232
		/* end block 1.1 */
		// End offset: 0x8005972C
		// End Line: 1232

		/* begin block 1.2 */
			// Start line: 1245
			// Start offset: 0x80059770
			// Variables:
		// 		int objectIndex; // $s2

			/* begin block 1.2.1 */
				// Start line: 1245
				// Start offset: 0x80059778
				// Variables:
			// 		struct coorddef pt; // stack offset -72

				/* begin block 1.2.1.1 */
					// Start line: 1248
					// Start offset: 0x8005978C

					/* begin block 1.2.1.1.1 */
						// Start line: 1257
						// Start offset: 0x800597E8
						// Variables:
					// 		struct coorddef centerSlice; // stack offset -56
					// 		struct coorddef centerToPt; // stack offset -40
					// 		int latPos; // $t0
					// 		int avoidance; // $a1
					// 		int radius; // $a3
					/* end block 1.2.1.1.1 */
					// End offset: 0x800598FC
					// End Line: 1273
				/* end block 1.2.1.1 */
				// End offset: 0x800598FC
				// End Line: 1273
			/* end block 1.2.1 */
			// End offset: 0x800598FC
			// End Line: 1273
		/* end block 1.2 */
		// End offset: 0x80059908
		// End Line: 1275
	/* end block 1 */
	// End offset: 0x80059908
	// End Line: 1275

void AI_AddCollidableObjects__FP8Car_tObjP5Group(Car_tObj *carObj,Group *groupSimObjs)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int importance;
  Group *pGVar8;
  int iVar9;
  coorddef local_48;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  
  pGVar8 = groupSimObjs + 1;
  if (cGp00000000 != '\0') {
    cGp00000000 = '\0';
    BWorldSm_SetSlice__FiP12BWorldSm_Pos(0,(BWorldSm_Pos *)&spos_118);
  }
  iVar9 = 0;
  while (iVar9 < groupSimObjs->m_num_elements) {
    local_48.x = pGVar8->m_num_elements;
    local_48.y = pGVar8[1].m_num_elements;
    local_48.z = pGVar8[2].m_num_elements;
    BWorldSm_FindClosestSlice__FP8coorddefP12BWorldSm_Pos(&local_48,(BWorldSm_Pos *)&spos_118);
    iVar1 = AIWorld_ApxSplineDistance__FiP8Car_tObj(0,carObj);
    if (iVar1 * (carObj->speechInfo).speechSource - 1 < 0x63ffff) {
      piVar2 = (int *)((int)(carObj->N).simRoadInfo.slice * 0x20);
      local_38 = *piVar2;
      local_34 = piVar2[1];
      local_30 = piVar2[2];
      local_28 = local_48.x - local_38;
      local_24 = local_48.y - local_34;
      local_20 = local_48.z - local_30;
      iVar1 = (carObj->N).roadMatrix.m[0];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xff;
      }
      iVar3 = local_28;
      if (local_28 < 0) {
        iVar3 = local_28 + 0xff;
      }
      iVar6 = (carObj->N).roadMatrix.m[1];
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      iVar4 = local_24;
      if (local_24 < 0) {
        iVar4 = local_24 + 0xff;
      }
      iVar7 = (carObj->N).roadMatrix.m[2];
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xff;
      }
      iVar5 = local_20;
      if (local_20 < 0) {
        iVar5 = local_20 + 0xff;
      }
      importance = -0xd0000;
      iVar1 = (iVar1 >> 8) * (iVar3 >> 8) + (iVar6 >> 8) * (iVar4 >> 8) +
              (iVar7 >> 8) * (iVar5 >> 8);
      if (*(char *)((int)&pGVar8[4].m_num_elements + 3) == '\x01') {
        importance = -0x280000;
      }
      AI_SubmitObstacle__FP8Car_tObjiiii
                (carObj,importance,iVar1 + (int)*(short *)&pGVar8[3].m_num_elements * -0x200,
                 iVar1 + (int)*(short *)&pGVar8[3].m_num_elements * 0x200,0);
    }
    pGVar8 = pGVar8 + 5;
    iVar9 = iVar9 + 1;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_AvoidObjects__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1278, offset 0x80059928
	/* begin block 1 */
		// Start line: 1279
		// Start offset: 0x80059928
	/* end block 1 */
	// End offset: 0x8005994C
	// End Line: 1283

void AI_AvoidObjects__FP8Car_tObj(Car_tObj *carObj)
{
  if (false) {
    AI_AddCollidableObjects__FP8Car_tObjP5Group(carObj,(Group *)0x0);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_AvoidSpikeBelt__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1287, offset 0x8005995c
	/* begin block 1 */
		// Start line: 1288
		// Start offset: 0x8005995C
		// Variables:
	// 		int spikeSlice; // stack offset -24
	// 		int leftLatPos; // stack offset -20
	// 		int width; // stack offset -16

		/* begin block 1.1 */
			// Start line: 1288
			// Start offset: 0x8005995C

			/* begin block 1.1.1 */
				// Start line: 1294
				// Start offset: 0x80059984
			/* end block 1.1.1 */
			// End offset: 0x800599D4
			// End Line: 1300
		/* end block 1.1 */
		// End offset: 0x800599D4
		// End Line: 1300
	/* end block 1 */
	// End offset: 0x800599D4
	// End Line: 1300

void AI_AvoidSpikeBelt__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int local_18;
  int local_14;
  int local_10 [2];
  
  iVar1 = BWorld_GetSpikeBelt__FPiN20(&local_18,&local_14,local_10);
  if ((iVar1 != 0) &&
     (iVar1 = AIWorld_ApxSplineDistance__FiP8Car_tObj(local_18,carObj),
     iVar1 * (carObj->speechInfo).speechSource - 1 < 0x63ffff)) {
    AI_SubmitObstacle__FP8Car_tObjiiii(carObj,-0x280000,local_14,local_14 + local_10[0],local_18);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_SubmitObstacle__FP8Car_tObjiiii(struct Car_tObj *carObj /*$s1*/, int importance /*$s2*/, int leftLatPosition /*$s3*/, int rightLatPosition /*$s4*/, int slice /*stack 16*/)
 // line 1306, offset 0x800599e4
	/* begin block 1 */
		// Start line: 1307
		// Start offset: 0x800599E4
		// Variables:
	// 		int leftEdgeIndex; // $s0
	// 		int rightEdgeIndex; // $a0
	// 		int observations[3]; // stack offset -40

		/* begin block 1.1 */
			// Start line: 1329
			// Start offset: 0x80059AC0

			/* begin block 1.1.1 */
				// Start line: 1330
				// Start offset: 0x80059AF0
				// Variables:
			// 		int leftDistance; // $v1
			// 		int rightDistance; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80059B30
			// End Line: 1338
		/* end block 1.1 */
		// End offset: 0x80059B30
		// End Line: 1338
	/* end block 1 */
	// End offset: 0x80059B68
	// End Line: 1343

void AI_SubmitObstacle__FP8Car_tObjiiii( (Car_tObj *carObj,int importance,int leftLatPosition,int rightLatPosition,int slice)
{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_28;
  int local_24;
  int local_20;
  
  memset(&local_28,0,0xc);
  uVar1 = AIWorld_LaneIndex__Fii(slice,leftLatPosition);
  uVar2 = AIWorld_LaneIndex__Fii(slice,rightLatPosition);
  if ((uVar2 < 0xe) && (uVar1 < 0xe)) {
    iVar3 = *(int *)(carObj->accTable + 0x6e) + -1;
    if (((int)uVar1 <= iVar3) && (iVar3 <= (int)uVar2)) {
      local_28 = importance;
    }
    if (((int)uVar1 <= *(int *)(carObj->accTable + 0x6e)) &&
       (*(int *)(carObj->accTable + 0x6e) <= (int)uVar2)) {
      local_24 = importance;
    }
    iVar3 = *(int *)(carObj->accTable + 0x6e) + 1;
    if (((int)uVar1 <= iVar3) && (iVar3 <= (int)uVar2)) {
      local_20 = importance;
    }
    if (((local_28 != 0) && (local_24 != 0)) && (local_20 != 0)) {
      leftLatPosition = carObj->desiredSpeed - leftLatPosition;
      rightLatPosition = carObj->desiredSpeed - rightLatPosition;
      if (leftLatPosition < 0) {
        leftLatPosition = -leftLatPosition;
      }
      if (rightLatPosition < 0) {
        rightLatPosition = -rightLatPosition;
      }
      if (leftLatPosition < rightLatPosition) {
        local_28 = 0;
      }
      else {
        local_20 = 0;
      }
    }
    CarLogic_gObs = CarLogic_gObs + local_28;
    DAT_8010cce8 = DAT_8010cce8 + local_24;
    DAT_8010ccec = DAT_8010ccec + local_20;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_HandleTrafficHonking__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1351, offset 0x80059b88
	/* begin block 1 */
		// Start line: 1352
		// Start offset: 0x80059B88
		// Variables:
	// 		struct Car_tObj *visibleCar; // $a0

		/* begin block 1.1 */
			// Start line: 1352
			// Start offset: 0x80059B88

			/* begin block 1.1.1 */
				// Start line: 1360
				// Start offset: 0x80059BF0
			/* end block 1.1.1 */
			// End offset: 0x80059C7C
			// End Line: 1368
		/* end block 1.1 */
		// End offset: 0x80059C7C
		// End Line: 1368
	/* end block 1 */
	// End offset: 0x80059C7C
	// End Line: 1368

void AI_HandleTrafficHonking__FP8Car_tObj(Car_tObj *carObj)
{
  Car_tObj *pCVar1;
  uint uVar2;
  speechSourceType sVar3;
  uint uVar4;
  
  pCVar1 = AILife_IsCarInAnyVisibleArea__FP8Car_tObj(carObj);
  if ((carObj->carFlags & 0x10U) != 0) {
    sVar3 = (carObj->speechInfo).speechSource;
    uVar2 = ~sVar3;
    if (true) {
      uVar2 = sVar3 ^ 1;
    }
    if (((uVar2 != 0) && (pCVar1 != (Car_tObj *)0x0)) && (-0x30000 < DAT_8010cd0c)) {
      randtemp = fastRandom;
      uVar2 = fastRandom & 0xffff;
      uVar4 = fastRandom >> 8;
      fastRandom = uVar2;
      if (((DAT_801131f8 != 1) && (fastRandom = uVar2, (uVar4 & 0xffff) * 1000 >> 0x10 < 5)) &&
         (fastRandom = uVar2, carObj->carInLane != 0)) {
        fastRandom = uVar2;
        AudioClc_HonkHorn__FP8Car_tObjiii(carObj,2,0x20,8);
      }
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_CheckForCarsOnSide__FP8Car_tObj(struct Car_tObj *carObj /*$s3*/)
 // line 1380, offset 0x80059c8c
	/* begin block 1 */
		// Start line: 1381
		// Start offset: 0x80059C8C
		// Variables:
	// 		struct Car_tObj *otherCarObj; // $s0
	// 		int ci; // $s1
	// 		int absDistance; // $v1
	// 		int blockDistance; // $s7
	/* end block 1 */
	// End offset: 0x80059DB0
	// End Line: 1411

void AI_CheckForCarsOnSide__FP8Car_tObj(Car_tObj *carObj)
{
  uint uVar1;
  int iVar2;
  Car_tObj *carObj_00;
  int iVar3;
  Car_tObj **ppCVar4;
  
  iVar3 = 0;
  if ((carObj->carFlags & 0x10U) == 0) {
    uVar1 = (carObj->N).dimension.z;
    if (0 < Cars_gNumCars) {
      ppCVar4 = (Car_tObj **)&_Cars_gList;
      do {
        carObj_00 = *ppCVar4;
        if ((carObj != carObj_00) && ((carObj_00->N).active != '\0')) {
          iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj_00,carObj);
          if (iVar2 < 0) {
            iVar2 = -iVar2;
          }
          if ((iVar2 < 0xa0001) &&
             (iVar2 < (int)(uVar1 * 2 + ((int)(uVar1 + (uVar1 >> 0x1f)) >> 1)))) {
            if (*(int *)(carObj_00->accTable + 0x6e) == *(int *)(carObj->accTable + 0x6e) + -1) {
              CarLogic_gObs = CarLogic_gObs + -0x60000;
            }
            else {
              if (*(int *)(carObj_00->accTable + 0x6e) == *(int *)(carObj->accTable + 0x6e) + 1) {
                DAT_8010ccec = DAT_8010ccec + -0x60000;
              }
            }
          }
        }
        iVar3 = iVar3 + 1;
        ppCVar4 = ppCVar4 + 1;
      } while (iVar3 < Cars_gNumCars);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_ProcessObservationsAndChooseLane__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1420, offset 0x80059ddc
	/* begin block 1 */
		// Start line: 1421
		// Start offset: 0x80059DDC
	/* end block 1 */
	// End offset: 0x80059DDC
	// End Line: 1421

void AI_ProcessObservationsAndChooseLane__FP8Car_tObj(Car_tObj *carObj)
{
  DAT_8010cd20 = CarLogic_gObs;
  DAT_8010cd24 = DAT_8010cce8;
  DAT_8010cd28 = DAT_8010ccec;
  AI_ChooseBestLane__FP8Car_tObj(carObj);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_ChooseBestLane__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1465, offset 0x80059e20
	/* begin block 1 */
		// Start line: 1466
		// Start offset: 0x80059E20
		// Variables:
	// 		int best; // $a2
	/* end block 1 */
	// End offset: 0x80059EA4
	// End Line: 1494

void AI_ChooseBestLane__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  
  DAT_8010cd2c = *(int *)(carObj->accTable + 0x6e);
  iVar1 = DAT_8010cd24;
  if (DAT_8010cd24 < DAT_8010cd20) {
    DAT_8010cd2c = *(int *)(carObj->accTable + 0x6e) + -1;
    iVar1 = DAT_8010cd20;
  }
  DAT_8010cd30 = (uint)(DAT_8010cd24 >= DAT_8010cd20);
  if (iVar1 < DAT_8010cd28) {
    DAT_8010cd30 = 2;
    DAT_8010cd2c = *(int *)(carObj->accTable + 0x6e) + 1;
  }
  if (DAT_8010cd2c < 0) {
    DAT_8010cd2c = 0;
    return;
  }
  if (0xd < DAT_8010cd2c) {
    DAT_8010cd2c = 0xd;
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AI_CheckPreferredLateralPosition__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1504, offset 0x80059eac
	/* begin block 1 */
		// Start line: 1505
		// Start offset: 0x80059EAC
		// Variables:
	// 		int carSideLane; // $v0
	// 		int carLeftSideLaneWRTcurrent; // $s2
	// 		int carRightSideLaneWRTcurrent; // $a2
	// 		int tempLanePowers[3]; // stack offset -32
	// 		int bestLanePower; // $v1
	// 		int leftBestLane; // $s1
	// 		int rightBestLane; // $a0
	/* end block 1 */
	// End offset: 0x8005A048
	// End Line: 1648

int AI_CheckPreferredLateralPosition__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_20 [4];
  
  iVar3 = AIWorld_LaneIndex__Fii
                    ((int)(carObj->N).simRoadInfo.slice,
                     (carObj->lateralVelocity - (carObj->N).dimension.x) + -0x4000);
  iVar2 = DAT_8010cd28;
  iVar1 = DAT_8010cd24;
  iVar4 = DAT_8010cd20;
  if (iVar3 == *(int *)(carObj->accTable + 0x6e)) {
    uVar8 = 1;
  }
  else {
    uVar8 = ((uint)(iVar3 < *(int *)(carObj->accTable + 0x6e)) ^ 1) << 1;
  }
  local_20[2] = DAT_8010cd28;
  local_20[0] = DAT_8010cd20;
  local_20[1] = DAT_8010cd24;
  local_20[uVar8] = local_20[uVar8] + (carObj->targetPos).x;
  iVar3 = iVar4;
  if (iVar4 < iVar1) {
    iVar3 = iVar1;
  }
  uVar7 = (uint)(iVar4 < iVar1);
  if (iVar3 < iVar2) {
    uVar7 = 2;
  }
  iVar3 = AIWorld_LaneIndex__Fii
                    ((int)(carObj->N).simRoadInfo.slice,
                     carObj->lateralVelocity + (carObj->N).dimension.x + 0x4000);
  iVar2 = DAT_8010cd28;
  iVar1 = DAT_8010cd24;
  iVar4 = DAT_8010cd20;
  if (iVar3 == *(int *)(carObj->accTable + 0x6e)) {
    uVar6 = 1;
  }
  else {
    uVar6 = ((uint)(iVar3 < *(int *)(carObj->accTable + 0x6e)) ^ 1) << 1;
  }
  local_20[uVar6] = local_20[uVar6] + (carObj->targetPos).x;
  iVar3 = iVar4;
  if (iVar4 < iVar1) {
    iVar3 = iVar1;
  }
  uVar5 = (uint)(iVar4 < iVar1);
  if (iVar3 < iVar2) {
    uVar5 = 2;
  }
  iVar4 = 0;
  if ((uVar7 == uVar8) && (uVar5 == uVar6)) {
    iVar4 = 1;
    (carObj->speechInfo).playerCarIndex = carObj->lateralVelocity;
  }
  return iVar4;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AI_TryToShareLanes__FP8Car_tObjT0(struct Car_tObj *carObj /*$t1*/, struct Car_tObj *carInWay /*$a1*/)
 // line 1662, offset 0x8005a060
	/* begin block 1 */
		// Start line: 1663
		// Start offset: 0x8005A060
		// Variables:
	// 		int absLaneIndex; // $v1
	// 		int leftRoadEdge; // $a2
	// 		int rightRoadEdge; // $a3
	// 		int gapLeft; // $a1
	// 		int gapRight; // $v1
	// 		int minGapSize; // $a0
	/* end block 1 */
	// End offset: 0x8005A154
	// End Line: 1711

int AI_TryToShareLanes__FP8Car_tObjT0(Car_tObj *carObj,Car_tObj *carInWay)
{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = (carObj->N).dimension.x;
  iVar3 = uVar2 + ((int)(uVar2 + (uVar2 >> 0x1f)) >> 1);
  if (DAT_8010cd2c < 7) {
    uVar2 = (uint)*(byte *)((int)(carInWay->N).simRoadInfo.slice * 0x20 + 0x1e);
    iVar1 = (DAT_8010cd2c + -6) * uVar2 * 0x8000;
    iVar6 = iVar1 + uVar2 * -0x8000;
  }
  else {
    iVar1 = (uint)*(byte *)((int)(carInWay->N).simRoadInfo.slice * 0x20 + 0x1f) * 0x8000;
    iVar6 = (DAT_8010cd2c + -7) * iVar1;
    iVar1 = iVar6 + iVar1;
  }
  iVar5 = carInWay->desiredSpeed - carInWay->roadSpan;
  uVar4 = iVar5 - iVar6;
  iVar6 = carInWay->desiredSpeed + carInWay->roadSpan;
  uVar2 = iVar1 - iVar6;
  if (((int)uVar2 <= iVar3) && ((int)uVar4 <= iVar3)) {
    return 0;
  }
  if ((int)uVar4 < (int)uVar2) {
    iVar6 = iVar6 + ((int)(uVar2 + (uVar2 >> 0x1f)) >> 1);
  }
  else {
    iVar6 = iVar5 - ((int)(uVar4 + (uVar4 >> 0x1f)) >> 1);
  }
  (carObj->speechInfo).playerCarIndex = iVar6;
  return 1;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_CalculateDesiredLatPosition__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1722, offset 0x8005a15c
	/* begin block 1 */
		// Start line: 1723
		// Start offset: 0x8005A15C
		// Variables:
	// 		struct Car_tObj *carInWay; // $s1
	// 		int slice; // $s3
	/* end block 1 */
	// End offset: 0x8005A374
	// End Line: 1792

void AI_CalculateDesiredLatPosition__FP8Car_tObj(Car_tObj *carObj)
{
  bool bVar1;
  int iVar2;
  uint uVar3;
  Car_tObj *carObj_00;
  int iVar4;
  
  iVar4 = (int)(carObj->N).simRoadInfo.slice;
  carObj_00 = (Car_tObj *)(&AI_Info)[DAT_8010cd30];
  if ((0 < (carObj->targetPos).x) &&
     (iVar2 = AI_CheckPreferredLateralPosition__FP8Car_tObj(carObj), iVar2 == 1)) {
    return;
  }
  bVar1 = false;
  if (carObj_00 != (Car_tObj *)0x0) {
    iVar2 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj_00,carObj);
    if (iVar2 < 1) {
      iVar2 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj_00,carObj);
      iVar2 = -iVar2;
    }
    else {
      iVar2 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj_00,carObj);
    }
    if ((iVar2 < 0x140000) && (iVar2 = AI_IsMellowZone__FP8Car_tObji(carObj,0x3e80000), iVar2 == 0))
    {
      bVar1 = true;
    }
  }
  if ((bVar1) && (iVar2 = AI_TryToShareLanes__FP8Car_tObjT0(carObj,carObj_00), iVar2 == 1)) {
    return;
  }
  iVar2 = iVar4 * 0x20;
  if ((DAT_8010cd2c == 6 - (uint)(*(byte *)(iVar2 + 0x1d) >> 4)) ||
     (DAT_8010cd2c == ((uint)*(byte *)(iVar2 + 0x1d) & 0xf) + 7)) {
    if (DAT_8010cd2c < 7) {
      iVar2 = (DAT_8010cd2c + -6) * (uint)*(byte *)(iVar2 + 0x1e) * 0x8000 - (carObj->N).dimension.x
      ;
      goto LAB_8005a30c;
    }
    iVar2 = (DAT_8010cd2c + -7) * (uint)*(byte *)(iVar2 + 0x1f) * 0x8000;
    uVar3 = (carObj->N).dimension.x;
  }
  else {
    if (DAT_8010cd2c < 7) {
      uVar3 = (uint)*(byte *)(iVar2 + 0x1e) * 0x8000;
      iVar2 = (DAT_8010cd2c + -6) * uVar3 - (uVar3 >> 1);
      goto LAB_8005a30c;
    }
    uVar3 = (uint)*(byte *)(iVar2 + 0x1f) * 0x8000;
    iVar2 = (DAT_8010cd2c + -7) * uVar3;
    uVar3 = uVar3 >> 1;
  }
  iVar2 = iVar2 + uVar3;
LAB_8005a30c:
  (carObj->speechInfo).playerCarIndex = iVar2;
  iVar4 = iVar4 * 0x20;
  iVar2 = (int)*(short *)(iVar4 + 0x1a) * 0x100 - (carObj->N).dimension.x;
  if (iVar2 < (carObj->speechInfo).playerCarIndex) {
    (carObj->speechInfo).playerCarIndex = iVar2;
  }
  iVar4 = (carObj->N).dimension.x + (int)*(short *)(iVar4 + 0x18) * -0x100;
  if ((carObj->speechInfo).playerCarIndex < iVar4) {
    (carObj->speechInfo).playerCarIndex = iVar4;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_CalculateAdjustedDesiredSpeed__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 1828, offset 0x8005a390
	/* begin block 1 */
		// Start line: 1829
		// Start offset: 0x8005A390
		// Variables:
	// 		int Drel_hit; // $s4
	// 		int Dlane; // $s0
	// 		int Vrel_hit; // $s2
	// 		int Vlane; // $s3
	// 		int finalLaneSpeed; // $a0
	// 		int a; // $s0
	// 		int b; // $s0
	/* end block 1 */
	// End offset: 0x8005A608
	// End Line: 1897

void AI_CalculateAdjustedDesiredSpeed__FP8Car_tObj(Car_tObj *carObj)
{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_8010cd0c;
  if (((DAT_8010cd2c != *(int *)(carObj->accTable + 0x6e)) &&
      (iVar2 = DAT_8010cd0c, DAT_8010ccf4 != (Car_tObj *)0x0)) &&
     (iVar2 = DAT_8010cd0c, (DAT_8010ccf4->N).deadTimer == 0)) {
    iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj,DAT_8010ccf4);
    if (iVar2 < 1) {
      iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj,DAT_8010ccf4);
      iVar2 = -iVar2;
    }
    else {
      iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj,DAT_8010ccf4);
    }
    iVar6 = carObj->carInLane - DAT_8010ccf4->carInLane;
    if (iVar6 < 1) {
      iVar6 = DAT_8010ccf4->carInLane - carObj->carInLane;
    }
    iVar4 = (carObj->speechInfo).playerCarIndex;
    iVar5 = iVar4 - carObj->desiredSpeed;
    if (iVar5 < 1) {
      iVar5 = carObj->desiredSpeed - iVar4;
    }
    iVar4 = AIWorld_CalcLateralVelocity__FP8Car_tObj(carObj);
    if (iVar4 < 1) {
      iVar4 = AIWorld_CalcLateralVelocity__FP8Car_tObj(carObj);
      iVar4 = -iVar4;
    }
    else {
      iVar4 = AIWorld_CalcLateralVelocity__FP8Car_tObj(carObj);
    }
    uVar3 = fixedmult(iVar5,iVar6);
    iVar6 = fixedmult(iVar2,iVar4);
    iVar4 = fixedmult(uVar3,0x13333);
    iVar2 = DAT_8010cd0c;
    if ((iVar4 < iVar6) && (iVar2 = DAT_8010cd08, *(int *)(carObj->accTable + 0x6e) < DAT_8010cd2c))
    {
      iVar2 = DAT_8010cd10;
    }
  }
  if ((carObj->speechInfo).speechSource == SPEECH_SOURCE_SUPER_COP) {
    if (iVar2 < (carObj->speechInfo).copCarIndex) {
      (carObj->speechInfo).copCarIndex = iVar2;
    }
    iVar2 = -0x14ccc;
    bVar1 = (carObj->speechInfo).copCarIndex < -0x14ccc;
  }
  else {
    if ((carObj->speechInfo).copCarIndex < iVar2) {
      (carObj->speechInfo).copCarIndex = iVar2;
    }
    iVar2 = 0x14ccc;
    bVar1 = 0x14ccc < (carObj->speechInfo).copCarIndex;
  }
  if (bVar1) {
    (carObj->speechInfo).copCarIndex = iVar2;
  }
  if ((DAT_8010cd2c != *(int *)(carObj->accTable + 0x6e)) && (DAT_8010ccf4 != (Car_tObj *)0x0)) {
    iVar2 = DAT_8010ccf4->carInLane;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0xa0000) {
      if ((carObj->speechInfo).speechSource == SPEECH_SOURCE_SUPER_COP) {
        iVar2 = (carObj->speechInfo).copCarIndex;
        if (iVar2 < 0x6aaaa) {
          iVar2 = 0x6aaaa;
        }
      }
      else {
        iVar2 = (carObj->speechInfo).copCarIndex;
        if (-0x6aaaa < iVar2) {
          iVar2 = -0x6aaaa;
        }
      }
      (carObj->speechInfo).copCarIndex = iVar2;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AI_IsMellowZone__FP8Car_tObji(struct Car_tObj *carObj /*$s0*/, int delay /*$s2*/)
 // line 1927, offset 0x8005a628
	/* begin block 1 */
		// Start line: 1928
		// Start offset: 0x8005A628
		// Variables:
	// 		int index; // $s1
	// 		int odom; // $a2
	// 		int endMellow; // $a0
	/* end block 1 */
	// End offset: 0x8005A6FC
	// End Line: 1947

int AI_IsMellowZone__FP8Car_tObji(Car_tObj *carObj,int delay)
{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = carObj->sortIndex;
  iVar2 = AIWorld_GameOdometer__FP8Car_tObj(carObj);
  if ((carObj->carFlags & 8U) != 0) {
    bVar1 = *(byte *)((int)(carObj->N).simRoadInfo.slice * 0x20 + 0x1d);
    if ((*(int *)(carObj->accTable + 0x6e) != 6 - (uint)(bVar1 >> 4)) &&
       (*(int *)(carObj->accTable + 0x6e) != ((uint)bVar1 & 0xf) + 7)) {
      iVar3 = 0x6400000;
      if (Cars_gNumAIRaceCars < 5) {
        iVar3 = 0x3200000;
      }
      if (Cars_gNumAIRaceCars < 2) {
        iVar3 = 0xc80000;
      }
      if (Cars_gNumAIRaceCars == 0) {
        iVar3 = 0;
      }
      return (uint)(iVar3 + delay < iVar2 + iVar4 * 0x540000) ^ 1;
    }
  }
  return 0;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_KeepCarsInLane__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1958, offset 0x8005a714
	/* begin block 1 */
		// Start line: 1959
		// Start offset: 0x8005A718
	/* end block 1 */
	// End offset: 0x8005A718
	// End Line: 1984

void AI_KeepCarsInLane__FP8Car_tObj(Car_tObj *carObj)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_PushFinishedCarsToSide__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1992, offset 0x8005a724
	/* begin block 1 */
		// Start line: 1993
		// Start offset: 0x8005A724

		/* begin block 1.1 */
			// Start line: 1993
			// Start offset: 0x8005A724

			/* begin block 1.1.1 */
				// Start line: 1996
				// Start offset: 0x8005A7C0
				// Variables:
			// 		int absDistancePastFinish; // $a2
			// 		int totalSortIndex; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8005A8B0
			// End Line: 2020
		/* end block 1.1 */
		// End offset: 0x8005A8B0
		// End Line: 2020
	/* end block 1 */
	// End offset: 0x8005A8B0
	// End Line: 2020

void AI_PushFinishedCarsToSide__FP8Car_tObj(Car_tObj *carObj)
{
  byte bVar1;
  int iVar2;
  int iVar3;
  Car_tObj **ppCVar4;
  
  if ((((carObj->carFlags & 1U) != 0) && ((carObj->stats).finishType == 2)) &&
     (((GameSetup_gData != 1 && (GameSetup_gData != 5)) ||
      (((uRam00000260 & 0x200) == 0 &&
       ((Cars_gNumHumanRaceCars != 2 || ((uRam00000260 & 0x200) == 0)))))))) {
    iVar2 = AIWorld_ApxSplineDistance__FP8Car_tObji(carObj,0);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar3 = 0;
    if (0 < Cars_gNumCars) {
      ppCVar4 = (Car_tObj **)&_Cars_gTotalSortedList;
      do {
        if (*ppCVar4 == carObj) break;
        iVar3 = iVar3 + 1;
        ppCVar4 = ppCVar4 + 1;
      } while (iVar3 < Cars_gNumCars);
    }
    if (iVar3 * 0x280000 <= iVar2) {
      iVar2 = *(int *)(carObj->accTable + 0x6e);
      bVar1 = *(byte *)((int)(carObj->N).simRoadInfo.slice * 0x20 + 0x1d);
      if ((iVar2 == 6 - (uint)(bVar1 >> 4)) || (iVar2 == ((uint)bVar1 & 0xf) + 7)) {
        DAT_8010cce8 = DAT_8010cce8 + 0x960000;
      }
      else {
        if (iVar2 < 7) {
          CarLogic_gObs = CarLogic_gObs + 0x960000;
        }
        else {
          DAT_8010ccec = DAT_8010ccec + 0x960000;
        }
      }
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_MaybeChangeLaneSlack__FP8Car_tObj(struct Car_tObj *carObj /*$a1*/)
 // line 2039, offset 0x8005a8c0
	/* begin block 1 */
		// Start line: 2040
		// Start offset: 0x8005A8C0
		// Variables:
	// 		int adaptedSlice; // $v1
	// 		int range; // $a0
	/* end block 1 */
	// End offset: 0x8005A9CC
	// End Line: 2062

void AI_MaybeChangeLaneSlack__FP8Car_tObj(Car_tObj *carObj)
{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = carObj->carIndex * 2;
  if (iVar2 < 0) {
    sVar1 = (carObj->N).simRoadInfo.slice;
  }
  else {
    sVar1 = (carObj->N).simRoadInfo.slice;
  }
  iVar2 = (int)sVar1 + iVar2;
  uVar3 = carObj->carFlags;
  if ((((uVar3 & 4) == 0) && (((uVar3 & 8) == 0 || ((iVar2 >> 4) << 4 == iVar2)))) &&
     (((uVar3 & 0x10) == 0 || ((iVar2 >> 1) << 1 == iVar2)))) {
    randtemp = fastRandom;
    uVar3 = fastRandom >> 8;
    fastRandom = fastRandom & 0xffff;
    if (carObj->personality->swerveChangeProb * (uVar3 & 0xffff) >> 0x10 == 1) {
      AI_ChooseNewLaneSlack__FP8Car_tObj(carObj);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AI_ChooseNewLaneSlack__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 2069, offset 0x8005a9dc
	/* begin block 1 */
		// Start line: 2070
		// Start offset: 0x8005A9DC
	/* end block 1 */
	// End offset: 0x8005A9DC
	// End Line: 2073

void AI_ChooseNewLaneSlack__FP8Car_tObj(Car_tObj *carObj)
{
  uint uVar1;
  
  randtemp = fastRandom;
  uVar1 = fastRandom >> 6;
  fastRandom = fastRandom & 0xffff;
  carObj->direction = *(int *)((int)carObj->personality->laneSwerve + (uVar1 & 0xc));
  return;


}





