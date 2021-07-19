#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 270
	/* end block 2 */
	// End Line: 271

	/* begin block 3 */
		// Start line: 270
	/* end block 3 */
	// End Line: 271

	/* begin block 4 */
		// Start line: 271
	/* end block 4 */
	// End Line: 272

	/* begin block 5 */
		// Start line: 271
	/* end block 5 */
	// End Line: 272

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 274
	/* end block 2 */
	// End Line: 275

	/* begin block 3 */
		// Start line: 276
	/* end block 3 */
	// End Line: 277

	/* begin block 4 */
		// Start line: 276
	/* end block 4 */
	// End Line: 277

	/* begin block 5 */
		// Start line: 277
	/* end block 5 */
	// End Line: 278

	/* begin block 6 */
		// Start line: 277
	/* end block 6 */
	// End Line: 278

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 296
	/* end block 2 */
	// End Line: 297

	/* begin block 3 */
		// Start line: 314
	/* end block 3 */
	// End Line: 315

	/* begin block 4 */
		// Start line: 314
	/* end block 4 */
	// End Line: 315

	/* begin block 5 */
		// Start line: 319
	/* end block 5 */
	// End Line: 320

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 331
	/* end block 2 */
	// End Line: 332

	/* begin block 3 */
		// Start line: 338
	/* end block 3 */
	// End Line: 339

	/* begin block 4 */
		// Start line: 338
	/* end block 4 */
	// End Line: 339

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

	/* begin block 2 */
		// Start line: 357
	/* end block 2 */
	// End Line: 358

	/* begin block 3 */
		// Start line: 366
	/* end block 3 */
	// End Line: 367

	/* begin block 4 */
		// Start line: 366
	/* end block 4 */
	// End Line: 367

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

	/* begin block 2 */
		// Start line: 385
	/* end block 2 */
	// End Line: 386

	/* begin block 3 */
		// Start line: 392
	/* end block 3 */
	// End Line: 393

	/* begin block 4 */
		// Start line: 392
	/* end block 4 */
	// End Line: 393

void AI_InitAIInfo__FP8Car_tObj(Car_tObj *carObj)

{
  AI_Info.blockingCars[2] = (_func_13 *)0x0;
  AI_Info.blockingCars[1] = (_func_13 *)0x0;
  AI_Info.blockingCars[0] = (_func_13 *)0x0;
  AI_Info.blockingCarsDist[2] = 0;
  AI_Info.blockingCarsDist[1] = 0;
  AI_Info.blockingCarsDist[0] = 0;
  AI_Info.deltaYaw = AIWorld_CalculateDeltaRoadYaw__FP8Car_tObj(carObj);
  AI_Info.desiredLane = 0;
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

	/* begin block 2 */
		// Start line: 431
	/* end block 2 */
	// End Line: 432

	/* begin block 3 */
		// Start line: 456
	/* end block 3 */
	// End Line: 457

	/* begin block 4 */
		// Start line: 456
	/* end block 4 */
	// End Line: 457

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

	/* begin block 2 */
		// Start line: 488
	/* end block 2 */
	// End Line: 489

	/* begin block 3 */
		// Start line: 510
	/* end block 3 */
	// End Line: 511

	/* begin block 4 */
		// Start line: 510
	/* end block 4 */
	// End Line: 511

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

	/* begin block 2 */
		// Start line: 548
	/* end block 2 */
	// End Line: 549

	/* begin block 3 */
		// Start line: 556
	/* end block 3 */
	// End Line: 557

	/* begin block 4 */
		// Start line: 556
	/* end block 4 */
	// End Line: 557

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

	/* begin block 2 */
		// Start line: 608
	/* end block 2 */
	// End Line: 609

	/* begin block 3 */
		// Start line: 648
	/* end block 3 */
	// End Line: 649

	/* begin block 4 */
		// Start line: 648
	/* end block 4 */
	// End Line: 649

	/* begin block 5 */
		// Start line: 649
	/* end block 5 */
	// End Line: 650

	/* begin block 6 */
		// Start line: 649
	/* end block 6 */
	// End Line: 650

void AI_TargetLane__FP8Car_tObji(Car_tObj *carObj,int lane)

{
  if (*(int *)(carObj->accTable + 0x60) < lane) {
    DAT_8010ccec = &DAT_00050000 + (int)DAT_8010ccec;
    return;
  }
  if (lane < *(int *)(carObj->accTable + 0x60)) {
    CarLogic_gObs = (int)(&DAT_00050000 + CarLogic_gObs);
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

	/* begin block 2 */
		// Start line: 684
	/* end block 2 */
	// End Line: 685

	/* begin block 3 */
		// Start line: 694
	/* end block 3 */
	// End Line: 695

	/* begin block 4 */
		// Start line: 694
	/* end block 4 */
	// End Line: 695

	/* begin block 5 */
		// Start line: 696
	/* end block 5 */
	// End Line: 697

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 709
	/* end block 2 */
	// End Line: 710

	/* begin block 3 */
		// Start line: 718
	/* end block 3 */
	// End Line: 719

	/* begin block 4 */
		// Start line: 718
	/* end block 4 */
	// End Line: 719

void AI_DoReactions__FP8Car_tObj(Car_tObj *carObj)

{
  int state;
  uint uVar1;
  int ticksOn;
  int ticksOff;
  Car_tObj *otherCarObj;
  
  state = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&carObj->script,AISCRIPT_AIREACTION_HONK_HORN);
  if ((state == -1) || (GameSetup_gData.raceType == 1)) {
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
  if ((state != -1) && (GameSetup_gData.raceType != 1)) {
    uVar1 = (int)(simGlobal.gameTicks & 0x18U) >> 3;
    if (uVar1 == 1) {
      state = 2;
      ticksOn = 0x20;
      ticksOff = 0xc;
    }
    else {
      if (uVar1 < 2) {
        if (uVar1 != 0) goto LAB_80057cc0;
        state = 4;
        ticksOn = 0x10;
        ticksOff = 8;
      }
      else {
        if (uVar1 == 2) {
          state = 7;
          ticksOn = 0x28;
          ticksOff = 0x10;
        }
        else {
          if (uVar1 != 3) goto LAB_80057cc0;
          state = 1;
          ticksOn = 0x20;
          ticksOff = 0;
        }
      }
    }
    AudioClc_HonkHorn__FP8Car_tObjiii(carObj,state,ticksOn,ticksOff);
  }
LAB_80057cc0:
  state = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&carObj->script,AISCRIPT_AIREACTION_SWERVE);
  if (state != -1) {
    state = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj,(&Cars_gList9)[state]);
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
    otherCarObj = (&Cars_gList9)[state];
    state = AIWorld_SplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
    if (state * (carObj->script).lastReactionIndex[3] < 0x40000) {
      AI_TargetLane__FP8Car_tObji(carObj,*(int *)(otherCarObj->accTable + 0x60));
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

	/* begin block 2 */
		// Start line: 877
	/* end block 2 */
	// End Line: 878

	/* begin block 3 */
		// Start line: 900
	/* end block 3 */
	// End Line: 901

	/* begin block 4 */
		// Start line: 900
	/* end block 4 */
	// End Line: 901

void AI_CheckForPlayerActions__FP8Car_tObjT0(Car_tObj *carObj,Car_tObj *otherCarObj)

{
  int iVar1;
  int humCarIndex;
  Car_tObj *pCVar2;
  int iVar3;
  AIScript_tPlayAction playerAction;
  
  iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  humCarIndex = AIWorld_GameOdometer__FP8Car_tObj(carObj);
  if (humCarIndex < 0x3200000) {
    return;
  }
  if (((simGlobal.gameTicks - (otherCarObj->N).collision.lastTime < 0xf) &&
      (pCVar2 = (Car_tObj *)(otherCarObj->N).collision.lastOtherObj, pCVar2 != (Car_tObj *)0x0)) &&
     (pCVar2 == carObj)) {
    AIScript_SubmitPlayerAction__FP10AIScript_ti20AIScript_tPlayActioni
              (&carObj->script,otherCarObj->carIndex,AISCRIPT_PLAYACTION_COLLISION,
               simGlobal.gameTicks);
  }
  humCarIndex = (carObj->script).lastReactionIndex[3];
  if ((int)(&DAT_00280000 + (otherCarObj->script).lastActionTime * humCarIndex) <
      (carObj->script).lastActionTime * humCarIndex) {
    if (0xbffff < iVar1) goto LAB_80057f34;
    AIScript_SubmitPlayerAction__FP10AIScript_ti20AIScript_tPlayActioni
              (&carObj->script,otherCarObj->carIndex,AISCRIPT_PLAYACTION_OPP_WIZZED_BY,
               simGlobal.gameTicks);
  }
  if ((iVar1 < 0xc0000) &&
     (*(int *)(otherCarObj->accTable + 0x60) == *(int *)(carObj->accTable + 0x60))) {
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
              (&carObj->script,humCarIndex,playerAction,simGlobal.gameTicks);
  }
LAB_80057f34:
  if ((otherCarObj->swapCar == carObj) && (simGlobal.gameTicks - carObj->swapTime < 0xf)) {
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
              (&carObj->script,humCarIndex,playerAction,simGlobal.gameTicks);
  }
  if (((iVar1 < 0x1e0000) && ((otherCarObj->control).horn != '\0')) && (GameSetup_gData.Time == 0))
  {
    AIScript_SubmitPlayerAction__FP10AIScript_ti20AIScript_tPlayActioni
              (&carObj->script,otherCarObj->carIndex,AISCRIPT_PLAYACTION_HUMAN_HONK,
               simGlobal.gameTicks);
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

	/* begin block 2 */
		// Start line: 990
	/* end block 2 */
	// End Line: 991

	/* begin block 3 */
		// Start line: 998
	/* end block 3 */
	// End Line: 999

	/* begin block 4 */
		// Start line: 998
	/* end block 4 */
	// End Line: 999

void AI_DoReactionsAndBehavior__FP8Car_tObj(Car_tObj *carObj)

{
  Car_tObj *otherCarObj;
  Car_tObj **ppCVar1;
  int iVar2;
  
  AI_DoReactions__FP8Car_tObj(carObj);
  iVar2 = 0;
  ppCVar1 = &Cars_gList9;
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

	/* begin block 2 */
		// Start line: 1060
	/* end block 2 */
	// End Line: 1061

	/* begin block 3 */
		// Start line: 1070
	/* end block 3 */
	// End Line: 1071

	/* begin block 4 */
		// Start line: 1070
	/* end block 4 */
	// End Line: 1071

void AI_OpponentBlockPlayer__FP8Car_tObjT0(Car_tObj *carObj,Car_tObj *otherCarObj)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = AI_IsMellowZone__FP8Car_tObji(carObj,0x1900000);
  if (iVar2 != 0) {
    return;
  }
  if (INT_ARRAY_8010ccdc[0] <= AI_Info.deltaYaw) {
    return;
  }
  sVar1 = (otherCarObj->N).simRoadInfo.slice;
  iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
  iVar2 = iVar2 * (carObj->script).lastReactionIndex[3];
  iVar3 = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&carObj->script,AISCRIPT_AIREACTION_MOVE_AWAY);
  if (((iVar3 == -1) || (iVar2 < 0)) || (0x31ffff < iVar2)) {
    if (iVar2 < -0x60000) {
      return;
    }
    if (carObj->personality->blockMaxDistance <= iVar2) {
      return;
    }
    if (iVar2 < carObj->personality->blockMinDistance) {
      return;
    }
    iVar2 = *(int *)(otherCarObj->accTable + 0x60);
    if (iVar2 < (int)(7 - (uint)(BWorldSm_slices[(int)sVar1].laneCount >> 4))) {
      return;
    }
    if ((int)(((uint)BWorldSm_slices[(int)sVar1].laneCount & 0xf) + 6) < iVar2) {
      return;
    }
    if ((otherCarObj->script).lastActionTime * (otherCarObj->script).lastReactionIndex[3] < 0x140001
       ) {
      return;
    }
    if (*(int *)(carObj->accTable + 0x60) <= iVar2) {
      if (iVar2 != *(int *)(carObj->accTable + 0x60)) {
        iVar2 = 0x40000;
        goto LAB_800582b0;
      }
      iVar2 = 0x40000;
      goto LAB_8005829c;
    }
    iVar2 = 0x40000;
  }
  else {
    if (*(int *)(carObj->accTable + 0x60) <= *(int *)(otherCarObj->accTable + 0x60)) {
      if (*(int *)(otherCarObj->accTable + 0x60) != *(int *)(carObj->accTable + 0x60)) {
        iVar2 = -0x40000;
LAB_800582b0:
        DAT_8010ccec = DAT_8010ccec + iVar2;
        return;
      }
      iVar2 = -0x40000;
LAB_8005829c:
      DAT_8010cce8 = DAT_8010cce8 + iVar2;
      return;
    }
    iVar2 = -0x40000;
  }
  CarLogic_gObs = CarLogic_gObs + iVar2;
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

	/* begin block 2 */
		// Start line: 1205
	/* end block 2 */
	// End Line: 1206

	/* begin block 3 */
		// Start line: 1217
	/* end block 3 */
	// End Line: 1218

	/* begin block 4 */
		// Start line: 1217
	/* end block 4 */
	// End Line: 1218

void AI_CheckForBarriers__FP8Car_tObj(Car_tObj *carObj)

{
  short sVar1;
  int mask;
  int mask_00;
  int mask_01;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int slice;
  int iVar6;
  int slice_00;
  int local_40;
  int local_3c;
  int local_38;
  
  local_40 = DAT_80054da4;
  local_3c = DAT_80054da8;
  local_38 = DAT_80054dac;
  mask = AIWorld_GetProfileMask__Fi(*(int *)(carObj->accTable + 0x60) + -1);
  mask_00 = AIWorld_GetProfileMask__Fi(*(int *)(carObj->accTable + 0x60));
  mask_01 = AIWorld_GetProfileMask__Fi(*(int *)(carObj->accTable + 0x60) + 1);
  iVar4 = (carObj->script).lastReactionIndex[3];
  iVar3 = (carObj->script).lastActionTime;
  slice = (int)(carObj->N).simRoadInfo.slice;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xffff;
  }
  iVar3 = iVar3 >> 0x10;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  iVar6 = (iVar3 << 0x12) >> 0x1f;
  iVar6 = ((iVar3 << 0x12) / 6 + iVar6 >> 0x10) - iVar6;
  iVar3 = slice + iVar6 * iVar4;
  if (iVar6 * iVar4 < 0) {
    if (iVar3 < 0) {
      iVar3 = iVar3 + gNumSlices;
    }
  }
  else {
    if (gNumSlices <= iVar3) {
      iVar3 = iVar3 - gNumSlices;
    }
  }
  slice_00 = (iVar6 + 1) * iVar4;
  iVar5 = slice + slice_00;
  if (slice_00 < 0) {
    if (iVar5 < 0) {
      iVar5 = iVar5 + gNumSlices;
    }
  }
  else {
    if (gNumSlices <= iVar5) {
      iVar5 = iVar5 - gNumSlices;
    }
  }
  sVar1 = BWorldSm_slices[slice].pavedProfile;
  slice_00 = AIWorld_IsDriveableLane_UsingMask__Fii(slice,mask);
  if (slice_00 == 0) {
    CarLogic_gObs = CarLogic_gObs + -0xa0000;
  }
  slice_00 = AIWorld_IsDriveableLane_UsingMask__Fii(slice,mask_00);
  if (slice_00 == 0) {
    DAT_8010cce8 = DAT_8010cce8 + -0xa0000;
  }
  slice_00 = AIWorld_IsDriveableLane_UsingMask__Fii(slice,mask_01);
  if (slice_00 == 0) {
    DAT_8010ccec = DAT_8010ccec + -0xa0000;
  }
  if ((sVar1 != BWorldSm_slices[iVar3].pavedProfile) ||
     (sVar1 != BWorldSm_slices[iVar5].pavedProfile)) {
    *(undefined4 *)(carObj->accTable + 0x5e) = 0x49;
  }
  if (0 < *(int *)(carObj->accTable + 0x5e)) {
    iVar3 = iVar6 * 0xa3d;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xffff;
    }
    iVar3 = iVar3 >> 0x10;
    iVar5 = 0;
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    *(int *)(carObj->accTable + 0x5e) = *(int *)(carObj->accTable + 0x5e) - AI_elapsedTime;
    while (iVar5 < iVar6) {
      slice_00 = slice + iVar5 * iVar4;
      if (iVar5 * iVar4 < 0) {
        if (slice_00 < 0) {
          slice_00 = slice_00 + gNumSlices;
        }
      }
      else {
        if (gNumSlices <= slice_00) {
          slice_00 = slice_00 - gNumSlices;
        }
      }
      if ((local_40 != 0) &&
         (iVar2 = AIWorld_IsDriveableLane_UsingMask__Fii(slice_00,mask), iVar2 == 0)) {
        local_40 = 0;
        CarLogic_gObs = CarLogic_gObs + -0x280000;
      }
      if ((local_3c != 0) &&
         (iVar2 = AIWorld_IsDriveableLane_UsingMask__Fii(slice_00,mask_00), iVar2 == 0)) {
        local_3c = 0;
        DAT_8010cce8 = DAT_8010cce8 + -0x280000;
      }
      if ((local_38 != 0) &&
         (slice_00 = AIWorld_IsDriveableLane_UsingMask__Fii(slice_00,mask_01), slice_00 == 0)) {
        local_38 = 0;
        DAT_8010ccec = DAT_8010ccec + -0x280000;
      }
      iVar5 = iVar5 + iVar3;
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

	/* begin block 2 */
		// Start line: 1392
	/* end block 2 */
	// End Line: 1393

	/* begin block 3 */
		// Start line: 1409
	/* end block 3 */
	// End Line: 1410

	/* begin block 4 */
		// Start line: 1409
	/* end block 4 */
	// End Line: 1410

void AI_SetupOncomingLaneDemerits__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  
  iVar1 = AI_IsMellowZone__FP8Car_tObji(carObj,0x3c0000);
  if (iVar1 == 0) {
    iVar1 = -0x40000;
    if ((carObj->carFlags & 0x10U) != 0) {
      iVar1 = -0xc0000;
    }
    if ((((Cars_gNumTrafficCars != 0) || (Cars_gNumCopCars != 0)) && (AITune_oneWay == 0)) &&
       (((carObj->speechInfo).speechSource & 2) == 0)) {
      if ((carObj->script).lastReactionIndex[3] == AITune_driveSide) {
        if (*(int *)(carObj->accTable + 0x60) + -1 < 7) {
          CarLogic_gObs = CarLogic_gObs + iVar1;
        }
        if (*(int *)(carObj->accTable + 0x60) < 7) {
          DAT_8010cce8 = DAT_8010cce8 + iVar1;
        }
      }
      else {
        if (6 < *(int *)(carObj->accTable + 0x60)) {
          DAT_8010cce8 = DAT_8010cce8 + iVar1;
        }
        if (6 < *(int *)(carObj->accTable + 0x60) + 1) {
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

	/* begin block 2 */
		// Start line: 1480
	/* end block 2 */
	// End Line: 1481

	/* begin block 3 */
		// Start line: 1487
	/* end block 3 */
	// End Line: 1488

	/* begin block 4 */
		// Start line: 1487
	/* end block 4 */
	// End Line: 1488

void AI_HandleChangeInNumLanes__FP8Car_tObj(Car_tObj *carObj)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (carObj->script).lastActionTime;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  uVar1 = fixedmult(iVar3,(int)&DAT_00006aaa);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 0xffff;
  }
  iVar3 = (int)uVar1 >> 0x10;
  if (iVar3 < 5) {
    iVar3 = 5;
  }
  iVar3 = iVar3 * (carObj->script).lastReactionIndex[3];
  if (iVar3 < 0) {
    iVar3 = (int)(carObj->N).simRoadInfo.slice + iVar3;
    iVar2 = iVar3 * 0x20;
    if (-1 < iVar3) goto LAB_800588a4;
    iVar3 = iVar3 + gNumSlices;
  }
  else {
    iVar3 = (int)(carObj->N).simRoadInfo.slice + iVar3;
    iVar2 = iVar3 * 0x20;
    if (iVar3 < gNumSlices) goto LAB_800588a4;
    iVar3 = iVar3 - gNumSlices;
  }
  iVar2 = iVar3 << 5;
LAB_800588a4:
  iVar3 = *(int *)(carObj->accTable + 0x60);
  if ((((iVar3 < (int)(7 - (uint)((&BWorldSm_slices->laneCount)[iVar2] >> 4))) ||
       ((int)(((uint)(&BWorldSm_slices->laneCount)[iVar2] & 0xf) + 6) < iVar3)) &&
      ((int)(7 - (uint)(BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].laneCount >> 4)) <=
       iVar3)) &&
     (iVar3 <= (int)(((uint)BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].laneCount & 0xf) + 6
                    ))) {
    if (iVar3 < 7) {
      DAT_8010ccec = &DAT_00280000 + (int)DAT_8010ccec;
    }
    else {
      CarLogic_gObs = (int)(&DAT_00280000 + CarLogic_gObs);
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

	/* begin block 2 */
		// Start line: 1563
	/* end block 2 */
	// End Line: 1564

	/* begin block 3 */
		// Start line: 1579
	/* end block 3 */
	// End Line: 1580

	/* begin block 4 */
		// Start line: 1579
	/* end block 4 */
	// End Line: 1580

void AI_HandleShouldersAndOffRoad__FP8Car_tObj(Car_tObj *carObj)

{
  bool bVar1;
  Trk_NewSlice *pTVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = (int)(carObj->N).simRoadInfo.slice;
  puVar4 = (undefined *)0xfffb199a;
  if (((((carObj->carFlags & 0x10U) != 0) &&
       (puVar4 = (undefined *)0xffda0000, AI_Info.blockingCars[1] != (_func_13 *)0x0)) &&
      ((*(uint *)(AI_Info.blockingCars[1] + 0x260) & 1) != 0)) &&
     (0x8e38e < *(int *)(AI_Info.blockingCars[1] + 0x568))) {
    puVar4 = &DAT_00050000;
  }
  iVar3 = *(int *)(carObj->accTable + 0x60) + -1;
  if ((iVar3 == 6 - (uint)(BWorldSm_slices[iVar5].laneCount >> 4)) ||
     (iVar3 == ((uint)BWorldSm_slices[iVar5].laneCount & 0xf) + 7)) {
    CarLogic_gObs = (int)(puVar4 + CarLogic_gObs);
    pTVar2 = BWorldSm_slices + (int)(carObj->N).simRoadInfo.slice;
    if ((int)((int)pTVar2->leftDrive * 0x100 -
             (uint)pTVar2->avgPavedWidthLf * 0x8000 * (uint)(pTVar2->laneCount >> 4)) <
        (carObj->N).dimension.x) {
      CarLogic_gObs = (int)((undefined *)CarLogic_gObs + -0x640000);
    }
  }
  iVar3 = *(int *)(carObj->accTable + 0x60) + 1;
  if ((iVar3 == 6 - (uint)(BWorldSm_slices[iVar5].laneCount >> 4)) ||
     (iVar3 == ((uint)BWorldSm_slices[iVar5].laneCount & 0xf) + 7)) {
    DAT_8010ccec = puVar4 + (int)DAT_8010ccec;
    pTVar2 = BWorldSm_slices + (int)(carObj->N).simRoadInfo.slice;
    if ((int)((int)pTVar2->rightDrive * 0x100 -
             (uint)pTVar2->avgPavedWidthRt * 0x8000 * ((uint)pTVar2->laneCount & 0xf)) <
        (carObj->N).dimension.x) {
      DAT_8010ccec = DAT_8010ccec + -0x640000;
    }
  }
  if ((*(int *)(carObj->accTable + 0x60) == 6 - (uint)(BWorldSm_slices[iVar5].laneCount >> 4)) ||
     (*(int *)(carObj->accTable + 0x60) == ((uint)BWorldSm_slices[iVar5].laneCount & 0xf) + 7)) {
    DAT_8010cce8 = puVar4 + (int)DAT_8010cce8;
    bVar1 = *(int *)(carObj->accTable + 0x60) < 7;
    if (((bVar1) &&
        (pTVar2 = BWorldSm_slices + (int)(carObj->N).simRoadInfo.slice,
        (int)((int)pTVar2->leftDrive * 0x100 -
             (uint)pTVar2->avgPavedWidthLf * 0x8000 * (uint)(pTVar2->laneCount >> 4)) <
        (carObj->N).dimension.x)) ||
       ((!bVar1 &&
        (pTVar2 = BWorldSm_slices + (int)(carObj->N).simRoadInfo.slice,
        (int)((int)pTVar2->rightDrive * 0x100 -
             (uint)pTVar2->avgPavedWidthRt * 0x8000 * ((uint)pTVar2->laneCount & 0xf)) <
        (carObj->N).dimension.x)))) {
      DAT_8010cce8 = DAT_8010cce8 + -0x640000;
    }
  }
  iVar3 = *(int *)(carObj->accTable + 0x60) + -1;
  if ((iVar3 < (int)(6 - (uint)(BWorldSm_slices[iVar5].laneCount >> 4))) ||
     ((int)(((uint)BWorldSm_slices[iVar5].laneCount & 0xf) + 7) < iVar3)) {
    CarLogic_gObs = CarLogic_gObs + -0x3e80000;
  }
  if ((*(int *)(carObj->accTable + 0x60) < (int)(6 - (uint)(BWorldSm_slices[iVar5].laneCount >> 4)))
     || ((int)(((uint)BWorldSm_slices[iVar5].laneCount & 0xf) + 7) <
         *(int *)(carObj->accTable + 0x60))) {
    DAT_8010cce8 = DAT_8010cce8 + -0x3e80000;
  }
  iVar3 = *(int *)(carObj->accTable + 0x60) + 1;
  if ((iVar3 < (int)(6 - (uint)(BWorldSm_slices[iVar5].laneCount >> 4))) ||
     ((int)(((uint)BWorldSm_slices[iVar5].laneCount & 0xf) + 7) < iVar3)) {
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

	/* begin block 2 */
		// Start line: 1710
	/* end block 2 */
	// End Line: 1711

	/* begin block 3 */
		// Start line: 1727
	/* end block 3 */
	// End Line: 1728

	/* begin block 4 */
		// Start line: 1727
	/* end block 4 */
	// End Line: 1728

void AI_CalculateLaneSpeeds__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  Car_tObj *carObj_00;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  uVar9 = 0;
  iVar11 = 0;
  iVar10 = 0;
  iVar1 = carObj->personality->oncomingLookAhead;
  AI_Info.laneSpeeds[0] = (carObj->script).lastReactionIndex[5];
  AI_Info.laneSpeeds[1] = (carObj->script).lastReactionIndex[5];
  AI_Info.laneSpeeds[2] = (carObj->script).lastReactionIndex[5];
  uVar4 = *(uint *)(carObj->accTable + 0x60);
  iVar8 = carObj->sortIndex;
  uVar13 = 1 << (uVar4 - 1 & 0x1f);
  uVar12 = 1 << (uVar4 & 0x1f);
  uVar4 = 1 << (uVar4 + 1 & 0x1f);
  AI_Info.laneSpeedsAhead[0] = AI_Info.laneSpeeds[0];
  AI_Info.laneSpeedsAhead[1] = AI_Info.laneSpeeds[1];
  AI_Info.laneSpeedsAhead[2] = AI_Info.laneSpeeds[2];
  do {
    if ((iVar10 == 3) || (Cars_gNumCars <= iVar11)) {
      return;
    }
    iVar2 = iVar8 + iVar11 * (carObj->script).lastReactionIndex[3] + Cars_gNumCars;
    if (Cars_gNumCars == 0) {
      trap(0x1c00);
    }
    if ((Cars_gNumCars == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    carObj_00 = (&Cars_gSortedList9)[iVar2 % Cars_gNumCars];
    if ((carObj != carObj_00) && ((carObj_00->N).active != '\0')) {
      iVar3 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj_00,carObj);
      iVar14 = iVar3 * (carObj->script).lastReactionIndex[3];
      iVar2 = (carObj->script).lastActionTime;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 0x1638e3) {
        puVar7 = (undefined *)0xd555;
        puVar5 = &DAT_00006666;
      }
      else {
        puVar7 = &LAB_00014000;
        puVar5 = (undefined *)0x8e38;
      }
      if (iVar14 < 0xf0000) {
        puVar7 = (undefined *)0x2aaa;
        puVar5 = &DAT_00001999;
      }
      if (((carObj->N).dimension.z < iVar14) && (iVar14 < iVar1)) {
        if ((carObj->script).lastReactionIndex[3] == 1) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xffff;
          }
          iVar2 = (iVar3 >> 0x10) + -2;
          if ((carObj->carFlags & 0x28U) != 0) {
            if (0 < iVar2) goto LAB_80058f88;
            iVar2 = 1;
          }
          if (iVar2 < 0) {
            iVar2 = 0;
          }
        }
        else {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0xffff;
          }
          iVar2 = (iVar3 >> 0x10) + 2;
          if (((carObj->carFlags & 0x28U) != 0) && (1 < iVar2)) {
            iVar2 = -1;
          }
          if (0 < iVar2) {
            iVar2 = 0;
          }
        }
LAB_80058f88:
        iVar3 = (carObj_00->script).lastActionTime;
        iVar6 = iVar3 + iVar2 * (int)puVar7;
        iVar3 = iVar3 + iVar2 * (int)puVar5;
        if ((((carObj_00->script).lastReactionIndex[1] & uVar12) != 0) && ((uVar9 & uVar12) == 0)) {
          uVar9 = uVar9 | uVar12;
          iVar10 = iVar10 + 1;
          AI_Info.blockingCars[1] = (_func_13 *)carObj_00;
          AI_Info.blockingCarsDist[1] = iVar14;
          AI_Info.laneSpeeds[1] = iVar6;
          AI_Info.laneSpeedsAhead[1] = iVar3;
        }
        if (((*(int *)(carObj->accTable + 0x60) - 1U < 0xe) &&
            (((carObj_00->script).lastReactionIndex[1] & uVar13) != 0)) && ((uVar9 & uVar13) == 0))
        {
          uVar9 = uVar9 | uVar13;
          iVar10 = iVar10 + 1;
          AI_Info.blockingCars[0] = (_func_13 *)carObj_00;
          AI_Info.blockingCarsDist[0] = iVar14;
          AI_Info.laneSpeeds[0] = iVar6;
          AI_Info.laneSpeedsAhead[0] = iVar3;
        }
        if (((*(int *)(carObj->accTable + 0x60) + 1U < 0xe) &&
            (((carObj_00->script).lastReactionIndex[1] & uVar4) != 0)) && ((uVar9 & uVar4) == 0)) {
          uVar9 = uVar9 | uVar4;
          iVar10 = iVar10 + 1;
          AI_Info.blockingCars[2] = (_func_13 *)carObj_00;
          AI_Info.blockingCarsDist[2] = iVar14;
          AI_Info.laneSpeeds[2] = iVar6;
          AI_Info.laneSpeedsAhead[2] = iVar3;
        }
      }
    }
    iVar11 = iVar11 + 1;
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

	/* begin block 2 */
		// Start line: 2191
	/* end block 2 */
	// End Line: 2192

	/* begin block 3 */
		// Start line: 2214
	/* end block 3 */
	// End Line: 2215

	/* begin block 4 */
		// Start line: 2214
	/* end block 4 */
	// End Line: 2215

void AI_CalcMeritsBasedOnSpeed__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  AI_tInfo *pAVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (carObj->script).lastReactionIndex[5];
  iVar6 = (carObj->script).lastActionTime;
  iVar1 = AIWorld_GameOdometer__FP8Car_tObj(carObj);
  if ((AI_Info.blockingCars[0] != (_func_13 *)0x0) && (AI_Info.blockingCarsDist[0] < 0x1e0000)) {
    CarLogic_gObs = CarLogic_gObs + -0xe0000;
  }
  if ((AI_Info.blockingCars[1] != (_func_13 *)0x0) && (AI_Info.blockingCarsDist[1] < 0x1e0000)) {
    DAT_8010cce8 = DAT_8010cce8 + -0xe0000;
  }
  if ((AI_Info.blockingCars[2] != (_func_13 *)0x0) && (AI_Info.blockingCarsDist[2] < 0x1e0000)) {
    DAT_8010ccec = DAT_8010ccec + -0xe0000;
  }
  if ((carObj->script).lastReactionIndex[3] == 1) {
    piVar4 = &CarLogic_gObs;
    pAVar5 = &AI_Info;
    do {
      iVar3 = pAVar5->laneSpeeds[0];
      if ((iVar3 <= iVar6) && (pAVar5->blockingCars[0] != (_func_13 *)0x0)) {
        uVar2 = fixedmult(iVar6 - iVar3,-0x14ccc);
        *piVar4 = *piVar4 + uVar2;
        iVar3 = pAVar5->laneSpeeds[0];
      }
      if (((iVar3 <= iVar7) && (pAVar5->blockingCars[0] != (_func_13 *)0x0)) && (0x257ffff < iVar1))
      {
        uVar2 = fixedmult(iVar7 - iVar3,-0x8000);
        *piVar4 = *piVar4 + uVar2;
      }
      iVar3 = pAVar5->laneSpeedsAhead[0];
      if ((iVar3 <= iVar6) && (pAVar5->blockingCars[0] != (_func_13 *)0x0)) {
        uVar2 = fixedmult(iVar6 - iVar3,-0x8000);
        *piVar4 = *piVar4 + uVar2;
        iVar3 = pAVar5->laneSpeedsAhead[0];
      }
      if (((iVar3 <= iVar7) && (pAVar5->blockingCars[0] != (_func_13 *)0x0)) && (0x257ffff < iVar1))
      {
        uVar2 = fixedmult(iVar7 - iVar3,-0x1999);
        *piVar4 = *piVar4 + uVar2;
      }
      piVar4 = piVar4 + 1;
      pAVar5 = (AI_tInfo *)(pAVar5->blockingCars + 1);
    } while ((int)piVar4 < -0x7fef3310);
  }
  else {
    piVar4 = &CarLogic_gObs;
    pAVar5 = &AI_Info;
    do {
      iVar1 = pAVar5->laneSpeeds[0];
      if (iVar6 <= iVar1) {
        if (pAVar5->blockingCars[0] != (_func_13 *)0x0) {
          uVar2 = fixedmult(iVar1 - iVar6,-0x14ccc);
          *piVar4 = *piVar4 + uVar2;
        }
        iVar1 = pAVar5->laneSpeeds[0];
      }
      if ((iVar7 <= iVar1) && (pAVar5->blockingCars[0] != (_func_13 *)0x0)) {
        uVar2 = fixedmult(iVar1 - iVar7,-0x8000);
        *piVar4 = *piVar4 + uVar2;
      }
      iVar1 = pAVar5->laneSpeedsAhead[0];
      if (iVar6 <= iVar1) {
        if (pAVar5->blockingCars[0] != (_func_13 *)0x0) {
          uVar2 = fixedmult(iVar1 - iVar6,-0x8000);
          *piVar4 = *piVar4 + uVar2;
        }
        iVar1 = pAVar5->laneSpeedsAhead[0];
      }
      if ((iVar7 <= iVar1) && (pAVar5->blockingCars[0] != (_func_13 *)0x0)) {
        uVar2 = fixedmult(iVar1 - iVar7,-0x1999);
        *piVar4 = *piVar4 + uVar2;
      }
      piVar4 = piVar4 + 1;
      pAVar5 = (AI_tInfo *)(pAVar5->blockingCars + 1);
    } while ((int)piVar4 < -0x7fef3310);
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

	/* begin block 2 */
		// Start line: 2323
	/* end block 2 */
	// End Line: 2324

	/* begin block 3 */
		// Start line: 2342
	/* end block 3 */
	// End Line: 2343

	/* begin block 4 */
		// Start line: 2342
	/* end block 4 */
	// End Line: 2343

void AI_CheckForClearLanes__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Car_tObj *carObj_00;
  uint uVar5;
  int iVar6;
  int iVar7;
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
    iVar7 = (carObj->script).lastReactionIndex[3];
    iVar6 = 0;
    iVar4 = iVar7 * iVar7 + iVar4;
    iVar1 = iVar7;
    do {
      if (Cars_gNumCars <= iVar1) break;
      if (Cars_gNumCars == 0) {
        trap(0x1c00);
      }
      if ((Cars_gNumCars == -1) && (iVar4 + Cars_gNumCars == -0x80000000)) {
        trap(0x1800);
      }
      carObj_00 = (&Cars_gSortedList9)[(iVar4 + Cars_gNumCars) % Cars_gNumCars];
      if (((carObj != carObj_00) && ((carObj_00->N).active != '\0')) &&
         (iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj_00,carObj),
         iVar2 + 0x40000U < 0x6e0000)) {
        uVar3 = *(uint *)(carObj->accTable + 0x60);
        if ((((carObj_00->script).lastReactionIndex[1] >> (uVar3 & 0x1f) & 1U) != 0) &&
           (((int)uVar5 >> (uVar3 & 0x1f) & 1U) == 0)) {
          local_34 = 0;
          iVar6 = iVar6 + 1;
          uVar5 = uVar5 | 1 << (*(uint *)(carObj->accTable + 0x60) & 0x1f);
          uVar3 = *(uint *)(carObj->accTable + 0x60);
        }
        if (((0 < (int)uVar3) &&
            (((carObj_00->script).lastReactionIndex[1] >> (uVar3 - 1 & 0x1f) & 1U) != 0)) &&
           (((int)uVar5 >> (uVar3 - 1 & 0x1f) & 1U) == 0)) {
          local_38 = 0;
          iVar6 = iVar6 + 1;
          uVar5 = uVar5 | 1 << (*(int *)(carObj->accTable + 0x60) - 1U & 0x1f);
        }
        uVar3 = *(int *)(carObj->accTable + 0x60) + 1;
        if (((uVar3 < 0xe) &&
            (((carObj_00->script).lastReactionIndex[1] >> (uVar3 & 0x1f) & 1U) != 0)) &&
           (((int)uVar5 >> (uVar3 & 0x1f) & 1U) == 0)) {
          local_30 = 0;
          iVar6 = iVar6 + 1;
          uVar5 = uVar5 | 1 << (*(int *)(carObj->accTable + 0x60) + 1U & 0x1f);
        }
      }
      iVar4 = iVar4 + iVar7;
      iVar1 = iVar1 + 1;
    } while (iVar6 != 3);
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

	/* begin block 2 */
		// Start line: 2528
	/* end block 2 */
	// End Line: 2529

	/* begin block 3 */
		// Start line: 2580
	/* end block 3 */
	// End Line: 2581

	/* begin block 4 */
		// Start line: 2580
	/* end block 4 */
	// End Line: 2581

void AI_CalcBestLineMerits__FP8Car_tObj(Car_tObj *carObj)

{
  uint uVar1;
  int iVar2;
  speechIntensityType sVar3;
  
  if ((carObj->carFlags & 8U) != 0) {
    uVar1 = fixedmult(carObj->personality->bestLineAbility,
                      (int)(AIDataRecord_BestLine->AIDataRecord_t).dataBuffer_[carObj->timeOffRoad]
                      << 0xe);
    sVar3 = (carObj->speechInfo).speechIntensity;
    iVar2 = (carObj->script).lastReactionIndex[3];
    (carObj->angularAcc_ch).z = uVar1;
    carObj->driveDirectionReverseTime = 0x50000;
    (carObj->angularAcc_ch).z = uVar1 - sVar3 * iVar2;
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

	/* begin block 2 */
		// Start line: 2687
	/* end block 2 */
	// End Line: 2688

	/* begin block 3 */
		// Start line: 2690
	/* end block 3 */
	// End Line: 2691

	/* begin block 4 */
		// Start line: 2690
	/* end block 4 */
	// End Line: 2691

	/* begin block 5 */
		// Start line: 2697
	/* end block 5 */
	// End Line: 2698

void AI_AddCollidableObjects__FP8Car_tObjP5Group(Car_tObj *carObj,Group *groupSimObjs)

{
  int iVar1;
  Trk_NewSlice *pTVar2;
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
  if (DAT_8013c54c != '\0') {
    DAT_8013c54c = '\0';
    BWorldSm_SetSlice__FiP12BWorldSm_Pos(0,(BWorldSm_Pos *)&spos_118);
  }
  iVar9 = 0;
  while (iVar9 < groupSimObjs->m_num_elements) {
    local_48.x = pGVar8->m_num_elements;
    local_48.y = pGVar8[1].m_num_elements;
    local_48.z = pGVar8[2].m_num_elements;
    BWorldSm_FindClosestSlice__FP8coorddefP12BWorldSm_Pos(&local_48,(BWorldSm_Pos *)&spos_118);
    iVar1 = AIWorld_ApxSplineDistance__FiP8Car_tObj((int)spos_118,carObj);
    if (iVar1 * (carObj->script).lastReactionIndex[3] - 1U < 0x63ffff) {
      pTVar2 = BWorldSm_slices + (int)(carObj->N).simRoadInfo.slice;
      local_38 = pTVar2->center[0];
      local_34 = pTVar2->center[1];
      local_30 = pTVar2->center[2];
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
                 iVar1 + (int)*(short *)&pGVar8[3].m_num_elements * 0x200,(int)spos_118);
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

	/* begin block 2 */
		// Start line: 2795
	/* end block 2 */
	// End Line: 2796

	/* begin block 3 */
		// Start line: 2799
	/* end block 3 */
	// End Line: 2800

	/* begin block 4 */
		// Start line: 2799
	/* end block 4 */
	// End Line: 2800

	/* begin block 5 */
		// Start line: 2800
	/* end block 5 */
	// End Line: 2801

	/* begin block 6 */
		// Start line: 2800
	/* end block 6 */
	// End Line: 2801

void AI_AvoidObjects__FP8Car_tObj(Car_tObj *carObj)

{
  if (Object_customObjInst != (Group *)0x0) {
    AI_AddCollidableObjects__FP8Car_tObjP5Group(carObj,Object_customSimObjs);
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

	/* begin block 2 */
		// Start line: 2813
	/* end block 2 */
	// End Line: 2814

	/* begin block 3 */
		// Start line: 2818
	/* end block 3 */
	// End Line: 2819

	/* begin block 4 */
		// Start line: 2818
	/* end block 4 */
	// End Line: 2819

void AI_AvoidSpikeBelt__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10 [2];
  
  iVar1 = BWorld_GetSpikeBelt__FPiN20(&local_18,&local_14,local_10);
  if ((iVar1 != 0) &&
     (iVar1 = AIWorld_ApxSplineDistance__FiP8Car_tObj(local_18,carObj),
     iVar1 * (carObj->script).lastReactionIndex[3] - 1U < 0x63ffff)) {
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

	/* begin block 2 */
		// Start line: 2854
	/* end block 2 */
	// End Line: 2855

	/* begin block 3 */
		// Start line: 2861
	/* end block 3 */
	// End Line: 2862

	/* begin block 4 */
		// Start line: 2861
	/* end block 4 */
	// End Line: 2862

void AI_SubmitObstacle__FP8Car_tObjiiii
               (Car_tObj *carObj,int importance,int leftLatPosition,int rightLatPosition,int slice)

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
    iVar3 = *(int *)(carObj->accTable + 0x60) + -1;
    if (((int)uVar1 <= iVar3) && (iVar3 <= (int)uVar2)) {
      local_28 = importance;
    }
    if (((int)uVar1 <= *(int *)(carObj->accTable + 0x60)) &&
       (*(int *)(carObj->accTable + 0x60) <= (int)uVar2)) {
      local_24 = importance;
    }
    iVar3 = *(int *)(carObj->accTable + 0x60) + 1;
    if (((int)uVar1 <= iVar3) && (iVar3 <= (int)uVar2)) {
      local_20 = importance;
    }
    if (((local_28 != 0) && (local_24 != 0)) && (local_20 != 0)) {
      iVar3 = (carObj->speechInfo).playerCarIndex;
      leftLatPosition = iVar3 - leftLatPosition;
      iVar3 = iVar3 - rightLatPosition;
      if (leftLatPosition < 0) {
        leftLatPosition = -leftLatPosition;
      }
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (leftLatPosition < iVar3) {
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

	/* begin block 2 */
		// Start line: 2950
	/* end block 2 */
	// End Line: 2951

	/* begin block 3 */
		// Start line: 2957
	/* end block 3 */
	// End Line: 2958

	/* begin block 4 */
		// Start line: 2957
	/* end block 4 */
	// End Line: 2958

void AI_HandleTrafficHonking__FP8Car_tObj(Car_tObj *carObj)

{
  Car_tObj *pCVar1;
  uint uVar2;
  uint uVar3;
  
  pCVar1 = AILife_IsCarInAnyVisibleArea__FP8Car_tObj(carObj);
  if ((carObj->carFlags & 0x10U) != 0) {
    uVar3 = (carObj->script).lastReactionIndex[3];
    uVar2 = ~uVar3;
    if (GameSetup_gData.reverseTrack == 0) {
      uVar2 = uVar3 ^ 1;
    }
    if (((uVar2 != 0) && (pCVar1 != (Car_tObj *)0x0)) && (-0x30000 < AI_Info.laneSpeeds[1])) {
      randtemp = fastRandom * randSeed;
      fastRandom = randtemp & 0xffff;
      if (((GameSetup_gData.commMode != 1) && ((randtemp >> 8 & 0xffff) * 1000 >> 0x10 < 5)) &&
         ((carObj->script).lastActionTime != 0)) {
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

	/* begin block 2 */
		// Start line: 3002
	/* end block 2 */
	// End Line: 3003

	/* begin block 3 */
		// Start line: 3015
	/* end block 3 */
	// End Line: 3016

	/* begin block 4 */
		// Start line: 3015
	/* end block 4 */
	// End Line: 3016

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
      ppCVar4 = &Cars_gList9;
      do {
        carObj_00 = *ppCVar4;
        if ((carObj != carObj_00) && ((carObj_00->N).active != '\0')) {
          iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj_00,carObj);
          if (iVar2 < 0) {
            iVar2 = -iVar2;
          }
          if ((iVar2 < 0xa0001) &&
             (iVar2 < (int)(uVar1 * 2 + ((int)(uVar1 + (uVar1 >> 0x1f)) >> 1)))) {
            if (*(int *)(carObj_00->accTable + 0x60) == *(int *)(carObj->accTable + 0x60) + -1) {
              CarLogic_gObs = CarLogic_gObs + -0x60000;
            }
            else {
              if (*(int *)(carObj_00->accTable + 0x60) == *(int *)(carObj->accTable + 0x60) + 1) {
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

	/* begin block 2 */
		// Start line: 3086
	/* end block 2 */
	// End Line: 3087

	/* begin block 3 */
		// Start line: 3095
	/* end block 3 */
	// End Line: 3096

	/* begin block 4 */
		// Start line: 3095
	/* end block 4 */
	// End Line: 3096

void AI_ProcessObservationsAndChooseLane__FP8Car_tObj(Car_tObj *carObj)

{
  AI_Info.laneWeights[0] = CarLogic_gObs;
  AI_Info.laneWeights[1] = DAT_8010cce8;
  AI_Info.laneWeights[2] = DAT_8010ccec;
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

	/* begin block 2 */
		// Start line: 3171
	/* end block 2 */
	// End Line: 3172

	/* begin block 3 */
		// Start line: 3198
	/* end block 3 */
	// End Line: 3199

	/* begin block 4 */
		// Start line: 3198
	/* end block 4 */
	// End Line: 3199

	/* begin block 5 */
		// Start line: 3202
	/* end block 5 */
	// End Line: 3203

void AI_ChooseBestLane__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  
  AI_Info.desiredLane = *(int *)(carObj->accTable + 0x60);
  iVar1 = AI_Info.laneWeights[1];
  if (AI_Info.laneWeights[1] < AI_Info.laneWeights[0]) {
    AI_Info.desiredLane = *(int *)(carObj->accTable + 0x60) + -1;
    iVar1 = AI_Info.laneWeights[0];
  }
  AI_Info.desiredLaneSide = ZEXT14(AI_Info.laneWeights[1] >= AI_Info.laneWeights[0]);
  if (iVar1 < AI_Info.laneWeights[2]) {
    AI_Info.desiredLaneSide = 2;
    AI_Info.desiredLane = *(int *)(carObj->accTable + 0x60) + 1;
  }
  if (AI_Info.desiredLane < 0) {
    AI_Info.desiredLane = 0;
    return;
  }
  if (0xd < AI_Info.desiredLane) {
    AI_Info.desiredLane = 0xd;
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

	/* begin block 2 */
		// Start line: 3275
	/* end block 2 */
	// End Line: 3276

	/* begin block 3 */
		// Start line: 3286
	/* end block 3 */
	// End Line: 3287

	/* begin block 4 */
		// Start line: 3286
	/* end block 4 */
	// End Line: 3287

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
                     ((carObj->angularAcc_ch).z - (carObj->N).dimension.x) + -0x4000);
  iVar2 = AI_Info.laneWeights[2];
  iVar1 = AI_Info.laneWeights[1];
  iVar4 = AI_Info.laneWeights[0];
  if (iVar3 == *(int *)(carObj->accTable + 0x60)) {
    uVar8 = 1;
  }
  else {
    uVar8 = ((uint)(iVar3 < *(int *)(carObj->accTable + 0x60)) ^ 1) << 1;
  }
  local_20[2] = AI_Info.laneWeights[2];
  local_20[0] = AI_Info.laneWeights[0];
  local_20[1] = AI_Info.laneWeights[1];
  local_20[uVar8] = local_20[uVar8] + carObj->driveDirectionReverseTime;
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
                     (carObj->angularAcc_ch).z + (carObj->N).dimension.x + 0x4000);
  iVar2 = AI_Info.laneWeights[2];
  iVar1 = AI_Info.laneWeights[1];
  iVar4 = AI_Info.laneWeights[0];
  if (iVar3 == *(int *)(carObj->accTable + 0x60)) {
    uVar6 = 1;
  }
  else {
    uVar6 = ((uint)(iVar3 < *(int *)(carObj->accTable + 0x60)) ^ 1) << 1;
  }
  local_20[uVar6] = local_20[uVar6] + carObj->driveDirectionReverseTime;
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
    (carObj->script).lastReactionIndex[4] = (carObj->angularAcc_ch).z;
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

	/* begin block 2 */
		// Start line: 3612
	/* end block 2 */
	// End Line: 3613

	/* begin block 3 */
		// Start line: 3627
	/* end block 3 */
	// End Line: 3628

	/* begin block 4 */
		// Start line: 3627
	/* end block 4 */
	// End Line: 3628

int AI_TryToShareLanes__FP8Car_tObjT0(Car_tObj *carObj,Car_tObj *carInWay)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = (carObj->N).dimension.x;
  iVar4 = uVar3 + ((int)(uVar3 + (uVar3 >> 0x1f)) >> 1);
  if (AI_Info.desiredLane < 7) {
    iVar1 = (AI_Info.desiredLane + -6) *
            (uint)BWorldSm_slices[(int)(carInWay->N).simRoadInfo.slice].avgPavedWidthLf * 0x8000;
    iVar7 = iVar1 + (uint)BWorldSm_slices[(int)(carInWay->N).simRoadInfo.slice].avgPavedWidthLf *
                    -0x8000;
  }
  else {
    iVar1 = (uint)BWorldSm_slices[(int)(carInWay->N).simRoadInfo.slice].avgPavedWidthRt * 0x8000;
    iVar7 = (AI_Info.desiredLane + -7) * iVar1;
    iVar1 = iVar7 + iVar1;
  }
  iVar2 = (carInWay->speechInfo).playerCarIndex;
  iVar6 = iVar2 - carInWay->roadSpan;
  uVar5 = iVar6 - iVar7;
  iVar2 = iVar2 + carInWay->roadSpan;
  uVar3 = iVar1 - iVar2;
  if (((int)uVar3 <= iVar4) && ((int)uVar5 <= iVar4)) {
    return 0;
  }
  if ((int)uVar5 < (int)uVar3) {
    iVar2 = iVar2 + ((int)(uVar3 + (uVar3 >> 0x1f)) >> 1);
  }
  else {
    iVar2 = iVar6 - ((int)(uVar5 + (uVar5 >> 0x1f)) >> 1);
  }
  (carObj->script).lastReactionIndex[4] = iVar2;
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

	/* begin block 2 */
		// Start line: 3746
	/* end block 2 */
	// End Line: 3747

	/* begin block 3 */
		// Start line: 3758
	/* end block 3 */
	// End Line: 3759

	/* begin block 4 */
		// Start line: 3758
	/* end block 4 */
	// End Line: 3759

void AI_CalculateDesiredLatPosition__FP8Car_tObj(Car_tObj *carObj)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  Trk_NewSlice *pTVar4;
  Car_tObj *carObj_00;
  int iVar5;
  
  iVar5 = (int)(carObj->N).simRoadInfo.slice;
  carObj_00 = (Car_tObj *)AI_Info.blockingCars[AI_Info.desiredLaneSide];
  if ((0 < carObj->driveDirectionReverseTime) &&
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
  pTVar4 = BWorldSm_slices + iVar5;
  if ((AI_Info.desiredLane == 6 - (uint)(pTVar4->laneCount >> 4)) ||
     (AI_Info.desiredLane == ((uint)pTVar4->laneCount & 0xf) + 7)) {
    if (AI_Info.desiredLane < 7) {
      iVar2 = (AI_Info.desiredLane + -6) * (uint)pTVar4->avgPavedWidthLf * 0x8000 -
              (carObj->N).dimension.x;
      goto LAB_8005a30c;
    }
    iVar2 = (AI_Info.desiredLane + -7) * (uint)pTVar4->avgPavedWidthRt * 0x8000;
    uVar3 = (carObj->N).dimension.x;
  }
  else {
    if (AI_Info.desiredLane < 7) {
      uVar3 = (uint)pTVar4->avgPavedWidthLf * 0x8000;
      iVar2 = (AI_Info.desiredLane + -6) * uVar3 - (uVar3 >> 1);
      goto LAB_8005a30c;
    }
    uVar3 = (uint)pTVar4->avgPavedWidthRt * 0x8000;
    iVar2 = (AI_Info.desiredLane + -7) * uVar3;
    uVar3 = uVar3 >> 1;
  }
  iVar2 = iVar2 + uVar3;
LAB_8005a30c:
  (carObj->script).lastReactionIndex[4] = iVar2;
  iVar2 = (int)BWorldSm_slices[iVar5].rightDrive * 0x100 - (carObj->N).dimension.x;
  if (iVar2 < (carObj->script).lastReactionIndex[4]) {
    (carObj->script).lastReactionIndex[4] = iVar2;
  }
  iVar5 = (carObj->N).dimension.x + (int)BWorldSm_slices[iVar5].leftDrive * -0x100;
  if ((carObj->script).lastReactionIndex[4] < iVar5) {
    (carObj->script).lastReactionIndex[4] = iVar5;
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

	/* begin block 2 */
		// Start line: 3994
	/* end block 2 */
	// End Line: 3995

	/* begin block 3 */
		// Start line: 4017
	/* end block 3 */
	// End Line: 4018

	/* begin block 4 */
		// Start line: 4017
	/* end block 4 */
	// End Line: 4018

void AI_CalculateAdjustedDesiredSpeed__FP8Car_tObj(Car_tObj *carObj)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = AI_Info.laneSpeeds[1];
  if (((AI_Info.desiredLane != *(int *)(carObj->accTable + 0x60)) &&
      (iVar2 = AI_Info.laneSpeeds[1], AI_Info.blockingCars[1] != (_func_13 *)0x0)) &&
     (iVar2 = AI_Info.laneSpeeds[1], *(short *)(AI_Info.blockingCars[1] + 0x17e) == 0)) {
    iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj,(Car_tObj *)AI_Info.blockingCars[1]);
    if (iVar2 < 1) {
      iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj,(Car_tObj *)AI_Info.blockingCars[1]);
      iVar2 = -iVar2;
    }
    else {
      iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj,(Car_tObj *)AI_Info.blockingCars[1]);
    }
    iVar5 = (carObj->script).lastActionTime;
    iVar9 = iVar5 - *(int *)(AI_Info.blockingCars[1] + 0x564);
    if (iVar9 < 1) {
      iVar9 = *(int *)(AI_Info.blockingCars[1] + 0x564) - iVar5;
    }
    iVar6 = (carObj->script).lastReactionIndex[4];
    iVar5 = (carObj->speechInfo).playerCarIndex;
    iVar8 = iVar6 - iVar5;
    if (iVar8 < 1) {
      iVar8 = iVar5 - iVar6;
    }
    iVar5 = AIWorld_CalcLateralVelocity__FP8Car_tObj(carObj);
    if (iVar5 < 1) {
      iVar5 = AIWorld_CalcLateralVelocity__FP8Car_tObj(carObj);
      iVar5 = -iVar5;
    }
    else {
      iVar5 = AIWorld_CalcLateralVelocity__FP8Car_tObj(carObj);
    }
    uVar3 = fixedmult(iVar8,iVar9);
    uVar4 = fixedmult(iVar2,iVar5);
    uVar3 = fixedmult(uVar3,(int)&DAT_00013333);
    iVar2 = AI_Info.laneSpeeds[1];
    if (((int)uVar3 < (int)uVar4) &&
       (iVar2 = AI_Info.laneSpeeds[0], *(int *)(carObj->accTable + 0x60) < AI_Info.desiredLane)) {
      iVar2 = AI_Info.laneSpeeds[2];
    }
  }
  if ((carObj->script).lastReactionIndex[3] == 1) {
    if (iVar2 < (carObj->script).lastReactionIndex[5]) {
      (carObj->script).lastReactionIndex[5] = iVar2;
    }
    iVar2 = -0x14ccc;
    bVar1 = (carObj->script).lastReactionIndex[5] < -0x14ccc;
  }
  else {
    if ((carObj->script).lastReactionIndex[5] < iVar2) {
      (carObj->script).lastReactionIndex[5] = iVar2;
    }
    iVar2 = 0x14ccc;
    bVar1 = 0x14ccc < (carObj->script).lastReactionIndex[5];
  }
  if (bVar1) {
    (carObj->script).lastReactionIndex[5] = iVar2;
  }
  if ((AI_Info.desiredLane != *(int *)(carObj->accTable + 0x60)) &&
     (AI_Info.blockingCars[1] != (_func_13 *)0x0)) {
    iVar2 = *(int *)(AI_Info.blockingCars[1] + 0x564);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0xa0000) {
      if ((carObj->script).lastReactionIndex[3] == 1) {
        puVar7 = (undefined *)(carObj->script).lastReactionIndex[5];
        if ((int)puVar7 < 0x6aaaa) {
          puVar7 = &DAT_0006aaaa;
        }
      }
      else {
        puVar7 = (undefined *)(carObj->script).lastReactionIndex[5];
        if (-0x6aaaa < (int)puVar7) {
          puVar7 = (undefined *)0xfff95556;
        }
      }
      *(undefined **)((carObj->script).lastReactionIndex + 5) = puVar7;
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

	/* begin block 2 */
		// Start line: 4202
	/* end block 2 */
	// End Line: 4203

	/* begin block 3 */
		// Start line: 4233
	/* end block 3 */
	// End Line: 4234

	/* begin block 4 */
		// Start line: 4233
	/* end block 4 */
	// End Line: 4234

int AI_IsMellowZone__FP8Car_tObji(Car_tObj *carObj,int delay)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = carObj->sortIndex;
  iVar1 = AIWorld_GameOdometer__FP8Car_tObj(carObj);
  if ((carObj->carFlags & 8U) != 0) {
    if ((*(int *)(carObj->accTable + 0x60) !=
         6 - (uint)(BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].laneCount >> 4)) &&
       (*(int *)(carObj->accTable + 0x60) !=
        ((uint)BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].laneCount & 0xf) + 7)) {
      iVar2 = 0x6400000;
      if (Cars_gNumAIRaceCars < 5) {
        iVar2 = 0x3200000;
      }
      if (Cars_gNumAIRaceCars < 2) {
        iVar2 = 0xc80000;
      }
      if (Cars_gNumAIRaceCars == 0) {
        iVar2 = 0;
      }
      return (uint)(iVar2 + delay < iVar1 + iVar3 * 0x540000) ^ 1;
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

	/* begin block 2 */
		// Start line: 4283
	/* end block 2 */
	// End Line: 4284

	/* begin block 3 */
		// Start line: 4295
	/* end block 3 */
	// End Line: 4296

	/* begin block 4 */
		// Start line: 4295
	/* end block 4 */
	// End Line: 4296

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

	/* begin block 2 */
		// Start line: 4356
	/* end block 2 */
	// End Line: 4357

	/* begin block 3 */
		// Start line: 4363
	/* end block 3 */
	// End Line: 4364

	/* begin block 4 */
		// Start line: 4363
	/* end block 4 */
	// End Line: 4364

void AI_PushFinishedCarsToSide__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  Car_tObj **ppCVar3;
  
  if ((((carObj->carFlags & 1U) != 0) && ((carObj->stats).finishType == 2)) &&
     (((GameSetup_gData.raceType != 1 && (GameSetup_gData.raceType != 5)) ||
      (((Cars_gHumanRaceCarList9->carFlags & 0x200U) == 0 &&
       ((Cars_gNumHumanRaceCars != 2 || ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) == 0)))))))) {
    iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObji(carObj,0);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar2 = 0;
    if (0 < Cars_gNumCars) {
      ppCVar3 = &Cars_gTotalSortedList9;
      do {
        if (*ppCVar3 == carObj) break;
        iVar2 = iVar2 + 1;
        ppCVar3 = ppCVar3 + 1;
      } while (iVar2 < Cars_gNumCars);
    }
    if (iVar2 * 0x280000 <= iVar1) {
      iVar1 = *(int *)(carObj->accTable + 0x60);
      if ((iVar1 == 6 - (uint)(BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].laneCount >> 4))
         || (iVar1 == ((uint)BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].laneCount & 0xf) +
                      7)) {
        DAT_8010cce8 = DAT_8010cce8 + 0x960000;
      }
      else {
        if (iVar1 < 7) {
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

	/* begin block 2 */
		// Start line: 4443
	/* end block 2 */
	// End Line: 4444

	/* begin block 3 */
		// Start line: 4460
	/* end block 3 */
	// End Line: 4461

	/* begin block 4 */
		// Start line: 4460
	/* end block 4 */
	// End Line: 4461

void AI_MaybeChangeLaneSlack__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = carObj->carIndex * 2;
  if (iVar1 < 0) {
    iVar1 = (int)(carObj->N).simRoadInfo.slice + iVar1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + gNumSlices;
    }
  }
  else {
    iVar1 = (int)(carObj->N).simRoadInfo.slice + iVar1;
    if (gNumSlices <= iVar1) {
      iVar1 = iVar1 - gNumSlices;
    }
  }
  uVar2 = carObj->carFlags;
  if ((((uVar2 & 4) == 0) && (((uVar2 & 8) == 0 || ((iVar1 >> 4) << 4 == iVar1)))) &&
     (((uVar2 & 0x10) == 0 || ((iVar1 >> 1) << 1 == iVar1)))) {
    randtemp = fastRandom * randSeed;
    fastRandom = randtemp & 0xffff;
    if (carObj->personality->swerveChangeProb * (randtemp >> 8 & 0xffff) >> 0x10 == 1) {
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

	/* begin block 2 */
		// Start line: 4516
	/* end block 2 */
	// End Line: 4517

	/* begin block 3 */
		// Start line: 4522
	/* end block 3 */
	// End Line: 4523

	/* begin block 4 */
		// Start line: 4522
	/* end block 4 */
	// End Line: 4523

	/* begin block 5 */
		// Start line: 4525
	/* end block 5 */
	// End Line: 4526

void AI_ChooseNewLaneSlack__FP8Car_tObj(Car_tObj *carObj)

{
  randtemp = fastRandom * randSeed;
  fastRandom = randtemp & 0xffff;
  (carObj->speechInfo).speechIntensity =
       *(speechIntensityType *)((int)carObj->personality->laneSwerve + (randtemp >> 6 & 0xc));
  return;
}





