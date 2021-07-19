#include "THISDUST.H"
#include "AISPEEDS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ AISpeeds_StartUp__Fv()
 // line 207, offset 0x8006d5b4
	/* begin block 1 */
		// Start line: 208
		// Start offset: 0x8006D5B4
	/* end block 1 */
	// End offset: 0x8006D5B4
	// End Line: 208

	/* begin block 2 */
		// Start line: 414
	/* end block 2 */
	// End Line: 415

	/* begin block 3 */
		// Start line: 414
	/* end block 3 */
	// End Line: 415

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AISpeeds_StartUp__Fv(void)

{
  AISpeeds_WeatherMultFactors = (int *)reservememadr(s_aiwther_8013c5d0,0x104,0);
  AISpeeds_ReadTuningInfo__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AISpeeds_ReadTuningInfo__Fv()
 // line 220, offset 0x8006d5ec
	/* begin block 1 */
		// Start line: 221
		// Start offset: 0x8006D5EC
		// Variables:
	// 		char filename[110]; // stack offset -152
	// 		struct Udff_tInfo *handle; // $s1
	// 		int weatherRamp; // $a2

		/* begin block 1.1 */
			// Start line: 221
			// Start offset: 0x8006D5EC
			// Variables:
		// 		int slotLoop; // $s2

			/* begin block 1.1.1 */
				// Start line: 235
				// Start offset: 0x8006D644
			/* end block 1.1.1 */
			// End offset: 0x8006D650
			// End Line: 238
		/* end block 1.1 */
		// End offset: 0x8006D69C
		// End Line: 255

		/* begin block 1.2 */
			// Start line: 258
			// Start offset: 0x8006D69C

			/* begin block 1.2.1 */
				// Start line: 259
				// Start offset: 0x8006D6C0
				// Variables:
			// 		int skillMult[3]; // stack offset -40
			// 		int carType; // $s3

				/* begin block 1.2.1.1 */
					// Start line: 262
					// Start offset: 0x8006D6C0
					// Variables:
				// 		int carModelLoop; // $s0
				/* end block 1.2.1.1 */
				// End offset: 0x8006D728
				// End Line: 270
			/* end block 1.2.1 */
			// End offset: 0x8006D728
			// End Line: 270

			/* begin block 1.2.2 */
				// Start line: 274
				// Start offset: 0x8006D730

				/* begin block 1.2.2.1 */
					// Start line: 276
					// Start offset: 0x8006D730
					// Variables:
				// 		int carModelLoop; // $s0
				/* end block 1.2.2.1 */
				// End offset: 0x8006D758
				// End Line: 281
			/* end block 1.2.2 */
			// End offset: 0x8006D758
			// End Line: 281
		/* end block 1.2 */
		// End offset: 0x8006D758
		// End Line: 281

		/* begin block 1.3 */
			// Start line: 288
			// Start offset: 0x8006D758
			// Variables:
		// 		int trackLoop; // $s0
		// 		int slotLoop; // $s2

			/* begin block 1.3.1 */
				// Start line: 289
				// Start offset: 0x8006D768
				// Variables:
			// 		int trackMult; // $s2
			// 		int nightMult; // $a1
			/* end block 1.3.1 */
			// End offset: 0x8006D7C0
			// End Line: 302
		/* end block 1.3 */
		// End offset: 0x8006D7C8
		// End Line: 304

		/* begin block 1.4 */
			// Start line: 309
			// Start offset: 0x8006D7C8
			// Variables:
		// 		int curveLoop; // $a1
		// 		int trackLoop; // $s0
		// 		int slotLoop; // $s2
		/* end block 1.4 */
		// End offset: 0x8006D810
		// End Line: 312
	/* end block 1 */
	// End offset: 0x8006D810
	// End Line: 318

	/* begin block 2 */
		// Start line: 442
	/* end block 2 */
	// End Line: 443

	/* begin block 3 */
		// Start line: 447
	/* end block 3 */
	// End Line: 448

	/* begin block 4 */
		// Start line: 447
	/* end block 4 */
	// End Line: 448

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AISpeeds_ReadTuningInfo__Fv(void)

{
  Udff_tInfo *handle;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  AISpeeds_tSlotInfo *pAVar6;
  int iVar7;
  char acStack152 [112];
  int local_28 [4];
  
  iVar7 = 0;
  sprintf(acStack152,s__stuning_bin_800554d0,PTR_80116470);
  handle = Udff_Opena__FPcT0i(acStack152,(char *)0x0,1);
  Udff_GetInt__FP10Udff_tInfo(handle);
  pAVar6 = CaravanInfo;
  while (iVar7 < 6) {
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    pAVar6->distanceMaintainTime32 = iVar1 << 5;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    pAVar6->minDistanceMeters = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    pAVar6->maxDistanceMeters = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    uVar2 = fixeddiv(0x10000,iVar1 << 0x15);
    pAVar6->fallBackRandomTime_TickPercent = uVar2;
    pAVar6 = pAVar6 + 1;
    iVar7 = iVar7 + 1;
  }
  iVar7 = 0;
  if ((GameSetup_gData.raceType == 0) && (0 < Cars_gNumAIRaceCars)) {
    iVar7 = 0;
    iVar1 = Cars_gAIRaceCarList9[0]->carInfo->carType;
    do {
      local_28[0] = Udff_GetInt__FP10Udff_tInfo(handle);
      local_28[1] = Udff_GetInt__FP10Udff_tInfo(handle);
      local_28[2] = Udff_GetInt__FP10Udff_tInfo(handle);
      if (iVar7 == iVar1) {
        GameSetup_gData.tournamentMultiplier = local_28[GameSetup_gData.skill];
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x16);
  }
  else {
    do {
      Udff_GetInt__FP10Udff_tInfo(handle);
      Udff_GetInt__FP10Udff_tInfo(handle);
      Udff_GetInt__FP10Udff_tInfo(handle);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x16);
  }
  AISpeeds_trackAndNightMult = 0;
  iVar7 = 0;
  while (iVar7 < 0xc) {
    Udff_GetInt__FP10Udff_tInfo(handle);
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar3 = Udff_GetInt__FP10Udff_tInfo(handle);
    if (GameSetup_gData.Time == 0) {
      iVar3 = 0x10000;
    }
    if (iVar7 == GameSetup_gData.track) {
      AISpeeds_trackAndNightMult = fixedmult(iVar1,iVar3);
    }
    iVar7 = iVar7 + 1;
  }
  iVar7 = Udff_GetInt__FP10Udff_tInfo(handle);
  iVar3 = 0;
  iVar1 = 0;
  piVar5 = AISpeeds_WeatherMultFactors;
  do {
    iVar4 = iVar1;
    if (iVar1 < 0) {
      iVar4 = iVar1 + 0x3f;
    }
    *piVar5 = 0x10000 - (iVar4 >> 6);
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + iVar7;
  } while (iVar3 < 0x41);
  Udff_GetBuffer__FP10Udff_tInfoPci(handle,(char *)&engineUpgrade,0x10);
  Udff_GetBuffer__FP10Udff_tInfoPci(handle,(char *)&suspensionUpgrade,0x10);
  Udff_GetBuffer__FP10Udff_tInfoPci(handle,(char *)&aeroUpgrade,0x10);
  Udff_Close__FP10Udff_tInfo(handle);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AISpeeds_CleanUp__Fv()
 // line 326, offset 0x8006d870
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x8006D870
	/* end block 1 */
	// End offset: 0x8006D88C
	// End Line: 333

	/* begin block 2 */
		// Start line: 677
	/* end block 2 */
	// End Line: 678

	/* begin block 3 */
		// Start line: 681
	/* end block 3 */
	// End Line: 682

	/* begin block 4 */
		// Start line: 681
	/* end block 4 */
	// End Line: 682

	/* begin block 5 */
		// Start line: 684
	/* end block 5 */
	// End Line: 685

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AISpeeds_CleanUp__Fv(void)

{
  if (AISpeeds_WeatherMultFactors != (int *)0x0) {
    purgememadr((int)AISpeeds_WeatherMultFactors);
    AISpeeds_WeatherMultFactors = (int *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_SuperDuperSpeedUpTheCarsAtTheStartBecauseWeCannotActuallyHandleRenderingTheseCars__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 347, offset 0x8006d89c
	/* begin block 1 */
		// Start line: 348
		// Start offset: 0x8006D89C
		// Variables:
	// 		int leadIndex; // $a1
	// 		int f_crappyFrameRateCompensatingSpeedup; // $v0
	/* end block 1 */
	// End offset: 0x8006D930
	// End Line: 363

	/* begin block 2 */
		// Start line: 711
	/* end block 2 */
	// End Line: 712

	/* begin block 3 */
		// Start line: 726
	/* end block 3 */
	// End Line: 727

	/* begin block 4 */
		// Start line: 726
	/* end block 4 */
	// End Line: 727

	/* begin block 5 */
		// Start line: 727
	/* end block 5 */
	// End Line: 728

	/* begin block 6 */
		// Start line: 727
	/* end block 6 */
	// End Line: 728

int 
    AISpeeds_SuperDuperSpeedUpTheCarsAtTheStartBecauseWeCannotActuallyHandleRenderingTheseCars__FP8Car_tObj
              (Car_tObj *carObj)

{
  if ((((1 < Cars_gNumAIRaceCars) && (GameSetup_gData.raceType != 1)) &&
      (simGlobal.gameTicks < 0x780)) &&
     ((Cars_gNumHumanRaceCars == 1 &&
      ((Cars_gHumanRaceCarList9->N).totalSlice < (carObj->N).totalSlice)))) {
    return (Cars_gNumAIRaceCars - carObj->speedNitrous) * 0x3333 + 0x10000;
  }
  return 0x10000;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_CalcOpponentTopSpeed__FP8Car_tObjPi(struct Car_tObj *carObj /*$s3*/, int *unFetteredDesiredSpeed /*$s6*/)
 // line 377, offset 0x8006d938
	/* begin block 1 */
		// Start line: 378
		// Start offset: 0x8006D938
		// Variables:
	// 		int topSpeed; // $s4
	// 		int newDesired; // $s0
	// 		int f_glue; // $s0
	// 		int f_script; // $s5
	// 		int f_nitrous; // $s1
	// 		int f_final; // $s0
	// 		int f_damage; // $s2
	// 		int f_unfettered; // $s1
	// 		int f_crappyFrameRateCompensatingSpeedup; // $v1
	// 		int f_caravan; // $v0

		/* begin block 1.1 */
			// Start line: 532
			// Start offset: 0x8006DCA4

			/* begin block 1.1.1 */
				// Start line: 538
				// Start offset: 0x8006DD40
				// Variables:
			// 		int metersPastFinish; // $t0
			// 		int latLeft; // $t1
			// 		int latRight; // $a0
			// 		int totalSortIndex; // $a1
			/* end block 1.1.1 */
			// End offset: 0x8006DE40
			// End Line: 559
		/* end block 1.1 */
		// End offset: 0x8006DE40
		// End Line: 559
	/* end block 1 */
	// End offset: 0x8006DE40
	// End Line: 603

	/* begin block 2 */
		// Start line: 771
	/* end block 2 */
	// End Line: 772

	/* begin block 3 */
		// Start line: 786
	/* end block 3 */
	// End Line: 787

	/* begin block 4 */
		// Start line: 786
	/* end block 4 */
	// End Line: 787

int AISpeeds_CalcOpponentTopSpeed__FP8Car_tObjPi(Car_tObj *carObj,int *unFetteredDesiredSpeed)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  Car_tObj **ppCVar7;
  int iVar8;
  Trk_NewSlice *pTVar9;
  int f_final;
  undefined *puVar10;
  int f_final_00;
  
  iVar1 = AISpeeds_CalcOpponentCurveSpeed__FP8Car_tObj(carObj);
  if (carObj->aiGlue == 0) {
    if (((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
       (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
        ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0)))))) {
      f_final = AISpeeds_BTCGetGlueFactor__FP8Car_tObj(carObj);
    }
    else {
      f_final = AISpeeds_GetGlueFactor__FP8Car_tObj(carObj);
    }
  }
  else {
    f_final = 0x10000;
  }
  iVar2 = AISpeeds_GetScriptFactor__FP8Car_tObj(carObj);
  f_final_00 = (carObj->targetPos).y;
  iVar3 = AISpeeds_GetDamageFactor__FP8Car_tObj(carObj);
  if ((GameSetup_gData.raceType == 1) || (Cars_gNumAIRaceCars < 2)) {
    iVar4 = 0x10000;
  }
  else {
    iVar4 = AISpeeds_GetCaravanFactor__FP8Car_tObj(carObj);
  }
  if (f_final_00 < 0) {
    f_final_00 = f_final_00 + 0xff;
  }
  iVar8 = AISpeeds_trackAndNightMult;
  if (AISpeeds_trackAndNightMult < 0) {
    iVar8 = AISpeeds_trackAndNightMult + 0xff;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar6 = GameSetup_gData.tournamentMultiplier;
  if (GameSetup_gData.tournamentMultiplier < 0) {
    iVar6 = GameSetup_gData.tournamentMultiplier + 0xff;
  }
  if (f_final < 0) {
    f_final = f_final + 0xff;
  }
  f_final = (iVar6 >> 8) * (f_final >> 8);
  if (f_final < 0) {
    f_final = f_final + 0xff;
  }
  f_final = (iVar4 >> 8) * (f_final >> 8);
  if (f_final < 0) {
    f_final = f_final + 0xff;
  }
  f_final = (iVar8 >> 8) * (f_final >> 8);
  if (f_final < 0) {
    f_final = f_final + 0xff;
  }
  f_final_00 = (f_final_00 >> 8) * (f_final >> 8);
  f_final = f_final_00;
  if (f_final_00 < 0) {
    f_final = f_final_00 + 0xff;
  }
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar3 = (iVar3 >> 8) * (iVar2 >> 8);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  f_final = (f_final >> 8) * (iVar3 >> 8);
  if ((GameSetup_gData.raceType != 1) && ((carObj->N).totalSlice < 0x96)) {
    uVar5 = fixedmult((0x10000 - f_final_00) * (uint)(carObj->N).totalSlice,0x1b4);
    f_final_00 = 0x10000 - uVar5;
    if ((carObj->N).totalSlice < 0x96) {
      uVar5 = fixedmult((0x10000 - f_final) * (uint)(carObj->N).totalSlice,0x1b4);
      f_final = 0x10000 - uVar5;
    }
  }
  iVar3 = 
          AISpeeds_SuperDuperSpeedUpTheCarsAtTheStartBecauseWeCannotActuallyHandleRenderingTheseCars__FP8Car_tObj
                    (carObj);
  if (iVar3 != 0x10000) {
    if (f_final_00 < 0) {
      f_final_00 = f_final_00 + 0xff;
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    f_final_00 = (f_final_00 >> 8) * (iVar3 >> 8);
    if (f_final < 0) {
      f_final = f_final + 0xff;
    }
    f_final = (f_final >> 8) * (iVar3 >> 8);
  }
  f_final = AISpeeds_LimitGlueMultiplier__FP8Car_tObji(carObj,f_final);
  carObj->aDesired = f_final;
  f_final = AISpeeds_LimitGlueMultiplier__FP8Car_tObji(carObj,f_final_00);
  if (carObj->aDesired < 0x10001) {
    (carObj->N).gravityMult = 0x10000;
  }
  else {
    (carObj->N).gravityMult = carObj->aDesired;
  }
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar3 = carObj->aDesired;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  puVar10 = (undefined *)((iVar1 >> 8) * (iVar3 >> 8));
  if (f_final < 0) {
    f_final = f_final + 0xff;
  }
  *unFetteredDesiredSpeed = (iVar1 >> 8) * (f_final >> 8);
  if ((((carObj->carFlags & 1U) != 0) && ((carObj->stats).finishType == 2)) &&
     (((GameSetup_gData.raceType != 1 && (GameSetup_gData.raceType != 5)) ||
      (((Cars_gHumanRaceCarList9->carFlags & 0x200U) == 0 &&
       ((Cars_gNumHumanRaceCars != 2 || ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) == 0)))))))) {
    iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObji(carObj,0);
    f_final = 0;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar2 = (carObj->speechInfo).playerCarIndex;
    iVar3 = (carObj->N).dimension.x;
    f_final_00 = iVar2 - iVar3;
    iVar2 = iVar2 + iVar3;
    if (0 < Cars_gNumCars) {
      ppCVar7 = &Cars_gTotalSortedList9;
      do {
        if (*ppCVar7 == carObj) break;
        f_final = f_final + 1;
        ppCVar7 = ppCVar7 + 1;
      } while (f_final < Cars_gNumCars);
    }
    if (f_final * 0x280000 <= iVar1) {
      pTVar9 = BWorldSm_slices + (int)(carObj->N).simRoadInfo.slice;
      f_final = -((uint)pTVar9->avgPavedWidthLf * 0x8000 * (uint)(pTVar9->laneCount >> 4));
      if (f_final <= f_final_00) {
        iVar3 = (uint)pTVar9->avgPavedWidthRt * 0x8000 * ((uint)pTVar9->laneCount & 0xf);
        if ((f_final_00 <= iVar3) && (f_final <= iVar2)) {
          puVar10 = (undefined *)0x0;
          if (iVar3 < iVar2) goto LAB_8006de40;
          if (iVar1 < 0x1900001) {
            puVar10 = &DAT_0011c71c;
            goto LAB_8006de40;
          }
        }
      }
      puVar10 = (undefined *)0x0;
    }
  }
LAB_8006de40:
  *unFetteredDesiredSpeed = *unFetteredDesiredSpeed * (carObj->script).lastReactionIndex[3];
  return (int)puVar10 * (carObj->script).lastReactionIndex[3];
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_NeedToSlowDownForCurve__FP8Car_tObjiii(struct Car_tObj *carObj /*$a0*/, int distanceMeters /*$a1*/, int currentSpeed /*$a2*/, int futureCurveSpeed /*$a3*/)
 // line 625, offset 0x8006de90
	/* begin block 1 */
		// Start line: 626
		// Start offset: 0x8006DE90
		// Variables:
	// 		int neededDistance; // $v0

		/* begin block 1.1 */
			// Start line: 628
			// Start offset: 0x8006DE9C
			// Variables:
		// 		struct AIPhysic_BrakeInfo *this; // $a0
		// 		int futureSpeed; // $a3
		// 		int currentSpeed; // $a2

			/* begin block 1.1.1 */
				// Start line: 628
				// Start offset: 0x8006DE9C

				/* begin block 1.1.1.1 */
					// Start line: 628
					// Start offset: 0x8006DE9C
					// Variables:
				// 		int speed; // $a2
				// 		struct AIPhysic_BrakeInfo *this; // $a0

					/* begin block 1.1.1.1.1 */
						// Start line: 628
						// Start offset: 0x8006DE9C
						// Variables:
					// 		int sIndex; // $a2
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006DECC
					// End Line: 628
				/* end block 1.1.1.1 */
				// End offset: 0x8006DECC
				// End Line: 628

				/* begin block 1.1.1.2 */
					// Start line: 628
					// Start offset: 0x8006DECC
					// Variables:
				// 		int speed; // $a3
				// 		struct AIPhysic_BrakeInfo *this; // $a0

					/* begin block 1.1.1.2.1 */
						// Start line: 628
						// Start offset: 0x8006DECC
						// Variables:
					// 		int sIndex; // $a3
					/* end block 1.1.1.2.1 */
					// End offset: 0x8006DF04
					// End Line: 628
				/* end block 1.1.1.2 */
				// End offset: 0x8006DF04
				// End Line: 628
			/* end block 1.1.1 */
			// End offset: 0x8006DF04
			// End Line: 628
		/* end block 1.1 */
		// End offset: 0x8006DF04
		// End Line: 628
	/* end block 1 */
	// End offset: 0x8006DF24
	// End Line: 640

	/* begin block 2 */
		// Start line: 1284
	/* end block 2 */
	// End Line: 1285

	/* begin block 3 */
		// Start line: 1305
	/* end block 3 */
	// End Line: 1306

	/* begin block 4 */
		// Start line: 1305
	/* end block 4 */
	// End Line: 1306

	/* begin block 5 */
		// Start line: 1306
	/* end block 5 */
	// End Line: 1307

	/* begin block 6 */
		// Start line: 1306
	/* end block 6 */
	// End Line: 1307

int AISpeeds_NeedToSlowDownForCurve__FP8Car_tObjiii
              (Car_tObj *carObj,int distanceMeters,int currentSpeed,int futureCurveSpeed)

{
  byte *pbVar1;
  int iVar2;
  
  if (futureCurveSpeed <= currentSpeed) {
    iVar2 = *(int *)(carObj->accTable + 0x5a);
    if (currentSpeed < 0) {
      currentSpeed = currentSpeed + 0xffff;
    }
    currentSpeed = currentSpeed >> 0x10;
    if (currentSpeed < 0) {
      currentSpeed = -currentSpeed;
    }
    pbVar1 = (byte *)(iVar2 + currentSpeed);
    if (0x7f < currentSpeed) {
      pbVar1 = (byte *)(iVar2 + 0x80);
    }
    if (futureCurveSpeed < 0) {
      futureCurveSpeed = futureCurveSpeed + 0xffff;
    }
    futureCurveSpeed = futureCurveSpeed >> 0x10;
    if (futureCurveSpeed < 0) {
      futureCurveSpeed = -futureCurveSpeed;
    }
    if (0x7f < futureCurveSpeed) {
      futureCurveSpeed = 0x80;
    }
    iVar2 = (uint)*pbVar1 * 0x20000 + (uint)*(byte *)(iVar2 + futureCurveSpeed) * -0x20000;
    return (uint)(iVar2 + (iVar2 >> 3) < distanceMeters) ^ 1;
  }
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_CalcOpponentCurveSpeed__FP8Car_tObj(struct Car_tObj *carObj /*$s3*/)
 // line 644, offset 0x8006df34
	/* begin block 1 */
		// Start line: 645
		// Start offset: 0x8006DF34
		// Variables:
	// 		int speedHere; // $s4

		/* begin block 1.1 */
			// Start line: 645
			// Start offset: 0x8006DF34
			// Variables:
		// 		int scanMetersDistanceInt; // $s2

			/* begin block 1.1.1 */
				// Start line: 676
				// Start offset: 0x8006DF74
				// Variables:
			// 		int scanSlice; // $a1
			// 		int curve; // $s0
			// 		int curveSpeed; // $s1
			/* end block 1.1.1 */
			// End offset: 0x8006E074
			// End Line: 691
		/* end block 1.1 */
		// End offset: 0x8006E074
		// End Line: 695
	/* end block 1 */
	// End offset: 0x8006E078
	// End Line: 698

	/* begin block 2 */
		// Start line: 1338
	/* end block 2 */
	// End Line: 1339

	/* begin block 3 */
		// Start line: 1343
	/* end block 3 */
	// End Line: 1344

	/* begin block 4 */
		// Start line: 1343
	/* end block 4 */
	// End Line: 1344

int AISpeeds_CalcOpponentCurveSpeed__FP8Car_tObj(Car_tObj *carObj)

{
  uint futureCurveSpeed;
  int currentSpeed;
  int iVar1;
  int slice;
  
  iVar1 = 200;
  currentSpeed = (carObj->script).lastActionTime;
  if (currentSpeed < 0) {
    currentSpeed = -currentSpeed;
  }
  while( true ) {
    if (iVar1 < 0) {
      return 0;
    }
    slice = (iVar1 / 6) * (carObj->script).lastReactionIndex[3];
    if (slice < 0) {
      slice = (int)(carObj->N).simRoadInfo.slice + slice;
      if (slice < 0) {
        slice = slice + gNumSlices;
      }
    }
    else {
      slice = (int)(carObj->N).simRoadInfo.slice + slice;
      if (gNumSlices <= slice) {
        slice = slice - gNumSlices;
      }
    }
    slice = Get__25AIDataRecord_TrackCurve_ti(AIDataRecord_TrackCurve,slice);
    futureCurveSpeed =
         Get__30AIDataRecord_CurveSpeedTable_ti
                   (*(AIDataRecord_CurveSpeedTable_t **)(carObj->accTable + 0x58),slice);
    if (GameSetup_gData.Weather != 0) {
      if (slice < 0) {
        slice = slice + 3;
      }
      futureCurveSpeed = fixedmult(futureCurveSpeed,AISpeeds_WeatherMultFactors[slice >> 2]);
    }
    if (iVar1 == 0) break;
    slice = AISpeeds_NeedToSlowDownForCurve__FP8Car_tObjiii
                      (carObj,iVar1 << 0x10,currentSpeed,futureCurveSpeed);
    iVar1 = iVar1 + -0x19;
    if (slice != 0) {
      return futureCurveSpeed;
    }
  }
  return futureCurveSpeed;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_BTCGetGlueFactor__FP8Car_tObj(struct Car_tObj *carObj /*$s5*/)
 // line 708, offset 0x8006e09c
	/* begin block 1 */
		// Start line: 709
		// Start offset: 0x8006E09C
		// Variables:
	// 		int closestHumanDistance; // $s2
	// 		struct Car_tObj *closestHumanCarObj; // $s4

		/* begin block 1.1 */
			// Start line: 719
			// Start offset: 0x8006E0D8
			// Variables:
		// 		int humanLoop; // $s3

			/* begin block 1.1.1 */
				// Start line: 719
				// Start offset: 0x8006E0E4
				// Variables:
			// 		struct Car_tObj *copCar; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 721
					// Start offset: 0x8006E0FC

					/* begin block 1.1.1.1.1 */
						// Start line: 723
						// Start offset: 0x8006E118
						// Variables:
					// 		int longMetersBetween; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006E150
					// End Line: 728
				/* end block 1.1.1.1 */
				// End offset: 0x8006E150
				// End Line: 728
			/* end block 1.1.1 */
			// End offset: 0x8006E150
			// End Line: 728
		/* end block 1.1 */
		// End offset: 0x8006E15C
		// End Line: 731

		/* begin block 1.2 */
			// Start line: 737
			// Start offset: 0x8006E15C

			/* begin block 1.2.1 */
				// Start line: 743
				// Start offset: 0x8006E178

				/* begin block 1.2.1.1 */
					// Start line: 743
					// Start offset: 0x8006E178

					/* begin block 1.2.1.1.1 */
						// Start line: 748
						// Start offset: 0x8006E1A4
						// Variables:
					// 		int glueIndex; // $a0
					// 		int glue; // $a0
					/* end block 1.2.1.1.1 */
					// End offset: 0x8006E234
					// End Line: 762
				/* end block 1.2.1.1 */
				// End offset: 0x8006E234
				// End Line: 762
			/* end block 1.2.1 */
			// End offset: 0x8006E234
			// End Line: 762
		/* end block 1.2 */
		// End offset: 0x8006E234
		// End Line: 762
	/* end block 1 */
	// End offset: 0x8006E234
	// End Line: 762

	/* begin block 2 */
		// Start line: 1521
	/* end block 2 */
	// End Line: 1522

	/* begin block 3 */
		// Start line: 1532
	/* end block 3 */
	// End Line: 1533

	/* begin block 4 */
		// Start line: 1532
	/* end block 4 */
	// End Line: 1533

int AISpeeds_BTCGetGlueFactor__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  Car_tObj *otherCarObj;
  Car_tObj **ppCVar6;
  int iVar7;
  int iVar8;
  Car_tObj *pCVar9;
  
  iVar7 = 0x270f0000;
  pCVar9 = (Car_tObj *)0x0;
  if ((carObj->carFlags & 0x20U) == 0) {
    iVar8 = 0;
    ppCVar6 = &Cars_gHumanRaceCarList9;
    while (iVar8 < Cars_gNumHumanRaceCars) {
      otherCarObj = *ppCVar6;
      if ((otherCarObj->carFlags & 0x200U) != 0) {
        iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
        iVar2 = iVar1;
        if (iVar1 < 0) {
          iVar2 = -iVar1;
        }
        iVar4 = iVar7;
        if (iVar7 < 0) {
          iVar4 = -iVar7;
        }
        if (iVar2 < iVar4) {
          iVar7 = iVar1;
          pCVar9 = otherCarObj;
        }
      }
      ppCVar6 = ppCVar6 + 1;
      iVar8 = iVar8 + 1;
    }
    if (pCVar9->RSControl != 0) {
      return 0x10000;
    }
    if (0x13fffe < (pCVar9->script).lastActionTime + 0x9ffffU) {
      iVar7 = (iVar7 * (carObj->script).lastReactionIndex[3]) / 0x3c0000 + 10;
      if (iVar7 < 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = 0x14;
        if (iVar7 < 0x15) {
          iVar8 = iVar7;
        }
      }
      puVar5 = (undefined *)(&AIPerson_glueTable)[iVar8];
      if ((int)puVar5 < 0x10000) {
        uVar3 = fixedmult(0x10000 - (int)puVar5,carObj->rampDesiredLatPos);
        puVar5 = (undefined *)(0x10000 - uVar3);
      }
      if ((int)puVar5 < 0x6666) {
        puVar5 = &DAT_00006666;
      }
      uVar3 = fixedmult((int)puVar5,*(int *)(carObj->accTable + 0x5c));
      return uVar3;
    }
  }
  return 0x10000;
}



// decompiled code
// original method signature: 
// struct Car_tObj * /*$ra*/ AISpeeds_GetNextAICar__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 773, offset 0x8006e258
	/* begin block 1 */
		// Start line: 774
		// Start offset: 0x8006E258
	/* end block 1 */
	// End offset: 0x8006E258
	// End Line: 775

	/* begin block 2 */
		// Start line: 1653
	/* end block 2 */
	// End Line: 1654

	/* begin block 3 */
		// Start line: 1665
	/* end block 3 */
	// End Line: 1666

	/* begin block 4 */
		// Start line: 1665
	/* end block 4 */
	// End Line: 1666

	/* begin block 5 */
		// Start line: 1666
	/* end block 5 */
	// End Line: 1667

	/* begin block 6 */
		// Start line: 1666
	/* end block 6 */
	// End Line: 1667

Car_tObj * AISpeeds_GetNextAICar__FP8Car_tObj(Car_tObj *carObj)

{
  return (Car_tObj *)carObj->drag;
}



// decompiled code
// original method signature: 
// struct Car_tObj * /*$ra*/ AISpeeds_GetPrevAICar__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 778, offset 0x8006e264
	/* begin block 1 */
		// Start line: 779
		// Start offset: 0x8006E264
		// Variables:
	// 		struct Car_tObj *prevCar; // $a3
	// 		struct Car_tObj *testCar; // $v1

		/* begin block 1.1 */
			// Start line: 782
			// Start offset: 0x8006E264
			// Variables:
		// 		int carLoop; // $a1
		/* end block 1.1 */
		// End offset: 0x8006E2C0
		// End Line: 793
	/* end block 1 */
	// End offset: 0x8006E2C0
	// End Line: 794

	/* begin block 2 */
		// Start line: 1671
	/* end block 2 */
	// End Line: 1672

	/* begin block 3 */
		// Start line: 1675
	/* end block 3 */
	// End Line: 1676

	/* begin block 4 */
		// Start line: 1675
	/* end block 4 */
	// End Line: 1676

	/* begin block 5 */
		// Start line: 1678
	/* end block 5 */
	// End Line: 1679

Car_tObj * AISpeeds_GetPrevAICar__FP8Car_tObj(Car_tObj *carObj)

{
  Car_tObj *pCVar1;
  int iVar2;
  Car_tObj **ppCVar3;
  Car_tObj *pCVar4;
  
  pCVar4 = (Car_tObj *)0x0;
  iVar2 = 0;
  if (0 < Cars_gNumCars) {
    ppCVar3 = &Cars_gTotalSortedList9;
    do {
      pCVar1 = *ppCVar3;
      if (carObj == pCVar1) {
        return pCVar4;
      }
      if ((pCVar1->carFlags & 8U) != 0) {
        pCVar4 = pCVar1;
      }
      iVar2 = iVar2 + 1;
      ppCVar3 = ppCVar3 + 1;
    } while (iVar2 < Cars_gNumCars);
  }
  return (Car_tObj *)0x0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_GetCaravanFactor__FP8Car_tObj(struct Car_tObj *carObj /*$s2*/)
 // line 808, offset 0x8006e2d0
	/* begin block 1 */
		// Start line: 809
		// Start offset: 0x8006E2D0
		// Variables:
	// 		int slot; // $s4
	// 		struct Car_tObj *nextAICar; // $s1
	// 		int f_caravan; // $s3

		/* begin block 1.1 */
			// Start line: 809
			// Start offset: 0x8006E2D0

			/* begin block 1.1.1 */
				// Start line: 844
				// Start offset: 0x8006E328

				/* begin block 1.1.1.1 */
					// Start line: 844
					// Start offset: 0x8006E328

					/* begin block 1.1.1.1.1 */
						// Start line: 869
						// Start offset: 0x8006E3C8
						// Variables:
					// 		int leaderIsThisManyMetersAhead; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006E444
					// End Line: 899
				/* end block 1.1.1.1 */
				// End offset: 0x8006E444
				// End Line: 899
			/* end block 1.1.1 */
			// End offset: 0x8006E444
			// End Line: 899
		/* end block 1.1 */
		// End offset: 0x8006E444
		// End Line: 899

		/* begin block 1.2 */
			// Start line: 935
			// Start offset: 0x8006E53C

			/* begin block 1.2.1 */
				// Start line: 941
				// Start offset: 0x8006E5B4
				// Variables:
			// 		unsigned int tempRandom; // $a0

				/* begin block 1.2.1.1 */
					// Start line: 942
					// Start offset: 0x8006E5B4

					/* begin block 1.2.1.1.1 */
						// Start line: 946
						// Start offset: 0x8006E624
						// Variables:
					// 		struct Car_tObj *prevAICar; // $v0
					/* end block 1.2.1.1.1 */
					// End offset: 0x8006E638
					// End Line: 950
				/* end block 1.2.1.1 */
				// End offset: 0x8006E638
				// End Line: 950
			/* end block 1.2.1 */
			// End offset: 0x8006E638
			// End Line: 950
		/* end block 1.2 */
		// End offset: 0x8006E638
		// End Line: 950
	/* end block 1 */
	// End offset: 0x8006E66C
	// End Line: 971

	/* begin block 2 */
		// Start line: 1720
	/* end block 2 */
	// End Line: 1721

	/* begin block 3 */
		// Start line: 1735
	/* end block 3 */
	// End Line: 1736

	/* begin block 4 */
		// Start line: 1735
	/* end block 4 */
	// End Line: 1736

int AISpeeds_GetCaravanFactor__FP8Car_tObj(Car_tObj *carObj)

{
  Car_tObj *carObj_00;
  Car_tObj *pCVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = carObj->speedNitrous;
  carObj_00 = AISpeeds_GetNextAICar__FP8Car_tObj(carObj);
  if (carObj->aiGlue != 0) {
    puVar4 = &DAT_0000e666;
    if (*(int *)(carObj->aiGlue + 0x774) < (int)uVar5) {
      carObj->aiGlue = 0;
    }
    goto LAB_8006e444;
  }
  if (carObj_00 == (Car_tObj *)0x0) {
LAB_8006e3b0:
    pCVar1 = (Car_tObj *)carObj_00->aiGlue;
  }
  else {
    pCVar1 = (Car_tObj *)carObj_00->aiGlue;
    if (pCVar1 == (Car_tObj *)0x0) {
      if (0xd6491 < (int)(carObj_00->speechInfo).speechMode) {
        iVar3 = (carObj->script).lastReactionIndex[3];
        iVar6 = (carObj_00->script).lastReactionIndex[6] * iVar3;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0xff;
        }
        if ((iVar6 >> 8) * 0xb3 <= (carObj_00->script).lastReactionIndex[5] * iVar3) {
          iVar3 = AIWorld_GameOdometer__FP8Car_tObj(carObj_00);
          iVar6 = AIWorld_GameOdometer__FP8Car_tObj(carObj);
          iVar3 = iVar3 - iVar6;
          iVar6 = carObj->slackProb;
          if ((int)&PTR_000a0000 + iVar6 < iVar3) {
            puVar4 = &DAT_00013333;
            if (iVar6 + 0x3e80000 < iVar3) {
              puVar4 = (undefined *)0x18000;
            }
          }
          else {
            if (iVar3 < iVar6 + -0xa0000) {
              puVar4 = &DAT_0000cccc;
              if (iVar3 < iVar6 + -0x3e80000) {
                puVar4 = &DAT_00009999;
              }
            }
            else {
              puVar4 = (undefined *)0x10000;
            }
          }
          goto LAB_8006e444;
        }
      }
      goto LAB_8006e3b0;
    }
  }
  puVar4 = (undefined *)0x10000;
  if (pCVar1 == carObj) {
    puVar4 = &DAT_00011999;
  }
LAB_8006e444:
  if (CaravanInfo[uVar5].distanceMaintainTime32 != 0) {
    carObj->accNitrous = carObj->accNitrous - AI_elapsedTime;
  }
  if (carObj->accNitrous < 0) {
    uVar2 = CaravanInfo[uVar5].distanceMaintainTime32;
    iVar3 = (int)(uVar2 + (uVar2 >> 0x1f)) >> 1;
    randtemp = (fastRandom * randSeed & 0xffff) * randSeed;
    carObj->accNitrous = iVar3 + (iVar3 * ((fastRandom * randSeed & 0xffff00) >> 8) >> 0x10);
    fastRandom = randtemp & 0xffff;
    carObj->slackProb =
         (CaravanInfo[uVar5].minDistanceMeters +
         ((CaravanInfo[uVar5].maxDistanceMeters - CaravanInfo[uVar5].minDistanceMeters) *
          ((randtemp & 0xffff00) >> 8) >> 0x10)) * 0x10000;
  }
  if (((((int)uVar5 < Cars_gNumAIRaceCars + -1) && (carObj->aiGlue == 0)) &&
      ((int)(uint)(carObj->N).totalSlice < GameSetup_gData.numLaps * gNumSlices + -0x14d)) &&
     ((1 < uVar5 || (leaderBoard.leadRacer != Cars_gHumanRaceCarList9)))) {
    randtemp = fastRandom * randSeed;
    fastRandom = randtemp & 0xffff;
    if (((carObj_00 == (Car_tObj *)0x0) || (carObj_00->aiGlue == 0)) &&
       (((randtemp >> 8 & 0xffff) <
         CaravanInfo[uVar5].fallBackRandomTime_TickPercent * AI_elapsedTime &&
        (pCVar1 = AISpeeds_GetPrevAICar__FP8Car_tObj(carObj), pCVar1 != (Car_tObj *)0x0)))) {
      *(Car_tObj **)&carObj->aiGlue = pCVar1;
    }
  }
  if (((carObj_00 != (Car_tObj *)0x0) &&
      (carObj_00->wipeOutStartTick < carObj->wipeOutStartTick + -0x1999)) &&
     (carObj_00->aiGlue == 0)) {
    *(Car_tObj **)&carObj_00->aiGlue = carObj;
  }
  return (int)puVar4;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_GetGlueFactor__FP8Car_tObj(struct Car_tObj *carObj /*$s4*/)
 // line 980, offset 0x8006e68c
	/* begin block 1 */
		// Start line: 981
		// Start offset: 0x8006E68C
		// Variables:
	// 		int leadHumanRacerOdometer; // $s3
	// 		int leadAIRacerOdometer; // $s1
	// 		int lastAIRacerOdometer; // $v0
	// 		int glue; // $s0
	// 		int leadSpeed; // $v1
	// 		int packPositionGlueModifier; // $s2

		/* begin block 1.1 */
			// Start line: 981
			// Start offset: 0x8006E68C

			/* begin block 1.1.1 */
				// Start line: 1001
				// Start offset: 0x8006E708

				/* begin block 1.1.1.1 */
					// Start line: 1001
					// Start offset: 0x8006E708

					/* begin block 1.1.1.1.1 */
						// Start line: 1002
						// Start offset: 0x8006E710
						// Variables:
					// 		int distance; // $v1
					// 		int glueIndex; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006E73C
					// End Line: 1007

					/* begin block 1.1.1.1.2 */
						// Start line: 1011
						// Start offset: 0x8006E744

						/* begin block 1.1.1.1.2.1 */
							// Start line: 1011
							// Start offset: 0x8006E744

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 1012
								// Start offset: 0x8006E750
								// Variables:
							// 		int distance; // $v1
							// 		int glueIndex; // $v1
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x8006E790
							// End Line: 1016

							/* begin block 1.1.1.1.2.1.2 */
								// Start line: 1022
								// Start offset: 0x8006E7AC
								// Variables:
							// 		int distance; // $v1
							// 		int glueIndex; // $v1
							/* end block 1.1.1.1.2.1.2 */
							// End offset: 0x8006E818
							// End Line: 1030
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x8006E818
						// End Line: 1030
					/* end block 1.1.1.1.2 */
					// End offset: 0x8006E818
					// End Line: 1030
				/* end block 1.1.1.1 */
				// End offset: 0x8006E818
				// End Line: 1030
			/* end block 1.1.1 */
			// End offset: 0x8006E818
			// End Line: 1030
		/* end block 1.1 */
		// End offset: 0x8006E818
		// End Line: 1030
	/* end block 1 */
	// End offset: 0x8006E874
	// End Line: 1053

	/* begin block 2 */
		// Start line: 2071
	/* end block 2 */
	// End Line: 2072

	/* begin block 3 */
		// Start line: 2081
	/* end block 3 */
	// End Line: 2082

	/* begin block 4 */
		// Start line: 2081
	/* end block 4 */
	// End Line: 2082

int AISpeeds_GetGlueFactor__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  
  puVar6 = (undefined *)0x10000;
  iVar1 = AIWorld_GameOdometer__FP8Car_tObj(leaderBoard.leadHumanRacer);
  iVar2 = AIWorld_GameOdometer__FP8Car_tObj(leaderBoard.leadAIRacer);
  iVar3 = AIWorld_GameOdometer__FP8Car_tObj(leaderBoard.lastAIRacer);
  iVar5 = ((leaderBoard.leadHumanRacer)->script).lastActionTime;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (iVar5 < 0xa0000) {
    iVar5 = 0x10000;
    goto LAB_8006e818;
  }
  if (iVar1 < iVar3) {
    iVar5 = (iVar2 - iVar1) / 0x3c0000 + 10;
    if (iVar5 < 0) {
      iVar2 = 0;
    }
    else {
LAB_8006e77c:
      iVar2 = 0x14;
      if (iVar5 < 0x15) {
        iVar2 = iVar5;
      }
    }
  }
  else {
    if (iVar1 <= iVar2) {
      iVar5 = (iVar2 - iVar1) / 0x3c0000 + 10;
      if (iVar5 < 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0x14;
        if (iVar5 < 0x15) {
          iVar2 = iVar5;
        }
      }
      iVar5 = (&AIPerson_glueTable)[iVar2];
      puVar6 = (undefined *)0x8000;
      if (GameSetup_gData.raceType != 3) {
        puVar6 = &DAT_0000e666;
      }
      goto LAB_8006e818;
    }
    iVar5 = (iVar2 - iVar1) / 0x3c0000 + 10;
    if (-1 < iVar5) goto LAB_8006e77c;
    iVar2 = 0;
  }
  iVar5 = (&AIPerson_glueTable)[iVar2];
  puVar6 = (undefined *)0x10000;
LAB_8006e818:
  iVar2 = AIWorld_GameOdometer__FP8Car_tObj(carObj);
  if ((iVar2 < iVar1 + 0x3c0000) && (iVar5 < 0x10000)) {
    iVar5 = 0x10000;
  }
  if (iVar5 < 0x10001) {
    uVar4 = fixedmult(0x10000 - iVar5,(int)puVar6);
    uVar4 = -uVar4;
  }
  else {
    uVar4 = fixedmult(iVar5 + -0x10000,(int)puVar6);
  }
  return uVar4 + 0x10000;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_GetDamageFactor__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1122, offset 0x8006e898
	/* begin block 1 */
		// Start line: 1123
		// Start offset: 0x8006E898
	/* end block 1 */
	// End offset: 0x8006E998
	// End Line: 1139

	/* begin block 2 */
		// Start line: 2311
	/* end block 2 */
	// End Line: 2312

	/* begin block 3 */
		// Start line: 2381
	/* end block 3 */
	// End Line: 2382

	/* begin block 4 */
		// Start line: 2381
	/* end block 4 */
	// End Line: 2382

int AISpeeds_GetDamageFactor__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (carObj->N).damage[0];
  iVar3 = (carObj->N).damage[1];
  iVar5 = (carObj->N).damage[3];
  iVar4 = (carObj->N).damage[2];
  carObj->wipeOutStartTick = 0;
  iVar1 = iVar1 + iVar3 + iVar4 + iVar5 + (carObj->N).damage[4] + (carObj->N).damage[5] +
          (carObj->N).damage[6] + (carObj->N).damage[7];
  carObj->wipeOutStartTick = iVar1;
  if (((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
     (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
      ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0)))))) {
    iVar3 = 0x147;
  }
  else {
    iVar1 = carObj->wipeOutStartTick;
    iVar3 = 0x48;
  }
  uVar2 = fixedmult(iVar1,iVar3);
  carObj->wipeOutStartTick = uVar2;
  iVar3 = 0x10000 - carObj->wipeOutStartTick;
  carObj->wipeOutStartTick = iVar3;
  iVar1 = 0x8000;
  if (0x7fff < iVar3) {
    iVar1 = iVar3;
  }
  carObj->wipeOutStartTick = iVar1;
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_LimitGlueMultiplier__FP8Car_tObji(struct Car_tObj *carObj /*$s4*/, int f_final /*$s2*/)
 // line 1149, offset 0x8006e9b0
	/* begin block 1 */
		// Start line: 1150
		// Start offset: 0x8006E9B0
		// Variables:
	// 		int bestDistanceAbsMeters; // $s3
	// 		int playerLoop; // $s1

		/* begin block 1.1 */
			// Start line: 1161
			// Start offset: 0x8006E9EC

			/* begin block 1.1.1 */
				// Start line: 1165
				// Start offset: 0x8006E9FC
				// Variables:
			// 		int thisDistanceAbsMeters; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8006EA3C
			// End Line: 1170
		/* end block 1.1 */
		// End offset: 0x8006EA48
		// End Line: 1171
	/* end block 1 */
	// End offset: 0x8006EA84
	// End Line: 1182

	/* begin block 2 */
		// Start line: 2434
	/* end block 2 */
	// End Line: 2435

	/* begin block 3 */
		// Start line: 2443
	/* end block 3 */
	// End Line: 2444

	/* begin block 4 */
		// Start line: 2443
	/* end block 4 */
	// End Line: 2444

int AISpeeds_LimitGlueMultiplier__FP8Car_tObji(Car_tObj *carObj,int f_final)

{
  int iVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  int iVar4;
  
  if (0xcccb < f_final - 0x999aU) {
    iVar4 = 0x27100000;
    iVar3 = 0;
    ppCVar2 = &Cars_gHumanRaceCarList9;
    while (iVar3 < Cars_gNumHumanRaceCars) {
      iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj,*ppCVar2);
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < iVar4) {
        iVar4 = iVar1;
      }
      ppCVar2 = ppCVar2 + 1;
      iVar3 = iVar3 + 1;
    }
    if (iVar4 < 0x780001) {
      if (0x16666 < f_final) {
        f_final = (int)&DAT_00016666;
      }
      if (f_final < 0x9999) {
        f_final = (int)&DAT_00009999;
      }
    }
  }
  return f_final;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_CalcCopTopSpeed__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1196, offset 0x8006eaa4
	/* begin block 1 */
		// Start line: 1197
		// Start offset: 0x8006EAA4
		// Variables:
	// 		int topSpeed; // $a0
	// 		int newDesired; // $v1
	// 		int f_nitrous; // $v0
	/* end block 1 */
	// End offset: 0x8006EB40
	// End Line: 1240

	/* begin block 2 */
		// Start line: 2529
	/* end block 2 */
	// End Line: 2530

	/* begin block 3 */
		// Start line: 2544
	/* end block 3 */
	// End Line: 2545

	/* begin block 4 */
		// Start line: 2544
	/* end block 4 */
	// End Line: 2545

int AISpeeds_CalcCopTopSpeed__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = AISpeeds_CalcOpponentCurveSpeed__FP8Car_tObj(carObj);
  iVar3 = *(int *)(carObj->accTable + 0x62);
  if (iVar1 < *(int *)(carObj->accTable + 0x62)) {
    iVar3 = iVar1;
  }
  iVar2 = (carObj->targetPos).y;
  iVar1 = AISpeeds_trackAndNightMult;
  if (AISpeeds_trackAndNightMult < 0) {
    iVar1 = AISpeeds_trackAndNightMult + 0xff;
  }
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar1 = (iVar1 >> 8) * (iVar2 >> 8);
  carObj->aDesired = iVar1;
  if (iVar1 < 0x10001) {
    (carObj->N).gravityMult = 0x10000;
  }
  else {
    (carObj->N).gravityMult = iVar1;
  }
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar1 = carObj->aDesired;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  return (iVar3 >> 8) * (iVar1 >> 8) * (carObj->script).lastReactionIndex[3];
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_CalcTrafficTopSpeed__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 1257, offset 0x8006eb6c
	/* begin block 1 */
		// Start line: 1258
		// Start offset: 0x8006EB6C
		// Variables:
	// 		int desired; // $s0
	/* end block 1 */
	// End offset: 0x8006ECE8
	// End Line: 1290

	/* begin block 2 */
		// Start line: 2670
	/* end block 2 */
	// End Line: 2671

	/* begin block 3 */
		// Start line: 2679
	/* end block 3 */
	// End Line: 2680

	/* begin block 4 */
		// Start line: 2679
	/* end block 4 */
	// End Line: 2680

int AISpeeds_CalcTrafficTopSpeed__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *oldsafe;
  
  iVar1 = AISpeeds_GetLegalSpeed__Fi((int)(carObj->N).simRoadInfo.slice);
  oldsafe = (undefined *)fixedmult(iVar1,0xc000);
  if (((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
     (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
      ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0)))))) {
    if ((carObj->script).lastReactionIndex[3] ==
        (Cars_gHumanRaceCarList9->script).lastReactionIndex[3]) goto LAB_8006ec80;
    iVar1 = AISpeeds_CalculateOncomingCarSpeed__FP8Car_tObj(carObj);
  }
  else {
    uVar4 = (carObj->script).lastReactionIndex[3];
    uVar2 = ~uVar4;
    if (GameSetup_gData.reverseTrack == 0) {
      uVar2 = uVar4 ^ 1;
    }
    if (uVar2 == 0) goto LAB_8006ec80;
    iVar1 = AISpeeds_CalculateOncomingCarSpeed__FP8Car_tObj(carObj);
  }
  if (iVar1 <= (int)oldsafe) {
    oldsafe = (undefined *)AISpeeds_CalculateOncomingCarSpeed__FP8Car_tObj(carObj);
  }
LAB_8006ec80:
  if ((carObj->carFlags & 0x10U) != 0) {
    iVar1 = AISpeeds_RandomizeTrafficSpeed__FP8Car_tObji(carObj,(int)oldsafe);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar3 = *(int *)(carObj->accTable + 0x5c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    oldsafe = (undefined *)((iVar1 >> 8) * (iVar3 >> 8));
  }
  if ((int)oldsafe < 0x8e38e) {
    oldsafe = &DAT_0008e38e;
  }
  return (int)oldsafe * (carObj->script).lastReactionIndex[3];
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_GetLegalSpeed__Fi(int slice /*$a0*/)
 // line 1294, offset 0x8006ed0c
	/* begin block 1 */
		// Start line: 1295
		// Start offset: 0x8006ED0C
		// Variables:
	// 		struct speedData_t *speedData; // $v1
	/* end block 1 */
	// End offset: 0x8006ED44
	// End Line: 1304

	/* begin block 2 */
		// Start line: 2748
	/* end block 2 */
	// End Line: 2749

	/* begin block 3 */
		// Start line: 2753
	/* end block 3 */
	// End Line: 2754

	/* begin block 4 */
		// Start line: 2753
	/* end block 4 */
	// End Line: 2754

	/* begin block 5 */
		// Start line: 2756
	/* end block 5 */
	// End Line: 2757

int AISpeeds_GetLegalSpeed__Fi(int slice)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = (ushort *)AISpeeds_TrackSpeeds11[GameSetup_gData.track];
  do {
    puVar2 = puVar1;
    puVar1 = puVar2 + 2;
  } while ((int)(uint)*puVar2 < slice);
  return (uint)puVar2[1] << 8;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_RandomizeTrafficSpeed__FP8Car_tObji(struct Car_tObj *carObj /*$a0*/, int oldsafe /*$a1*/)
 // line 1312, offset 0x8006ed50
	/* begin block 1 */
		// Start line: 1313
		// Start offset: 0x8006ED50
		// Variables:
	// 		int newsafe; // $a1
	// 		int safeminus30; // $v1
	/* end block 1 */
	// End offset: 0x8006EDD4
	// End Line: 1335

	/* begin block 2 */
		// Start line: 2780
	/* end block 2 */
	// End Line: 2781

	/* begin block 3 */
		// Start line: 2789
	/* end block 3 */
	// End Line: 2790

	/* begin block 4 */
		// Start line: 2789
	/* end block 4 */
	// End Line: 2790

	/* begin block 5 */
		// Start line: 2794
	/* end block 5 */
	// End Line: 2795

int AISpeeds_RandomizeTrafficSpeed__FP8Car_tObji(Car_tObj *carObj,int oldsafe)

{
  int iVar1;
  undefined **ppuVar2;
  
  if (oldsafe < 1) {
    if (oldsafe < 0) {
      oldsafe = oldsafe + 0xff;
    }
    iVar1 = carObj->desiredSpeed;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    ppuVar2 = (undefined **)((oldsafe >> 8) * (iVar1 >> 8));
  }
  else {
    iVar1 = carObj->desiredSpeed;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    ppuVar2 = (undefined **)((oldsafe >> 8) * (iVar1 >> 8));
    if ((int)ppuVar2 < (int)(undefined **)(oldsafe + -0xd6666)) {
      ppuVar2 = (undefined **)(oldsafe + -0xd6666);
    }
    if ((int)ppuVar2 < 0x8e666) {
      ppuVar2 = &PTR_0008e666;
    }
  }
  return (int)ppuVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AISpeeds_CalcDesiredSpeed__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1348, offset 0x8006eddc
	/* begin block 1 */
		// Start line: 1349
		// Start offset: 0x8006EDDC
	/* end block 1 */
	// End offset: 0x8006EE70
	// End Line: 1367

	/* begin block 2 */
		// Start line: 2848
	/* end block 2 */
	// End Line: 2849

	/* begin block 3 */
		// Start line: 2862
	/* end block 3 */
	// End Line: 2863

	/* begin block 4 */
		// Start line: 2862
	/* end block 4 */
	// End Line: 2863

void AISpeeds_CalcDesiredSpeed__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = carObj->carFlags;
  (carObj->script).lastReactionIndex[5] = 0;
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 0x20) == 0) {
      if ((uVar2 & 0x10) != 0) {
        iVar1 = AISpeeds_CalcTrafficTopSpeed__FP8Car_tObj(carObj);
        (carObj->script).lastReactionIndex[5] = iVar1;
        (carObj->script).lastReactionIndex[6] = iVar1;
      }
    }
    else {
      if (((carObj->speechInfo).speechSource & 2) == 0) {
        iVar1 = AISpeeds_CalcTrafficTopSpeed__FP8Car_tObj(carObj);
        (carObj->script).lastReactionIndex[5] = iVar1;
      }
      else {
        iVar1 = AISpeeds_CalcCopTopSpeed__FP8Car_tObj(carObj);
        (carObj->script).lastReactionIndex[5] = iVar1;
      }
      (carObj->script).lastReactionIndex[6] = (carObj->script).lastReactionIndex[5];
    }
  }
  else {
    iVar1 = AISpeeds_CalcOpponentTopSpeed__FP8Car_tObjPi
                      (carObj,(carObj->script).lastReactionIndex + 6);
    (carObj->script).lastReactionIndex[5] = iVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_CalculateOncomingCarSpeed__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1384, offset 0x8006ee80
	/* begin block 1 */
		// Start line: 1385
		// Start offset: 0x8006EE80
		// Variables:
	// 		int playerSpeed; // $a0
	/* end block 1 */
	// End offset: 0x8006EF20
	// End Line: 1399

	/* begin block 2 */
		// Start line: 2916
	/* end block 2 */
	// End Line: 2917

	/* begin block 3 */
		// Start line: 2934
	/* end block 3 */
	// End Line: 2935

	/* begin block 4 */
		// Start line: 2934
	/* end block 4 */
	// End Line: 2935

	/* begin block 5 */
		// Start line: 2939
	/* end block 5 */
	// End Line: 2940

int AISpeeds_CalculateOncomingCarSpeed__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((carObj->speechInfo).copCarIndex + 0x564);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 0xd5555) {
    uVar2 = 0x160000;
  }
  else {
    if (iVar1 < 0x1aaaaa) {
      return (int)&DAT_000d5555;
    }
    if (iVar1 < 0x280000) {
      return (int)&DAT_0008e38e;
    }
    if (iVar1 < 0x378e38) {
      return (int)&DAT_000471c7;
    }
    if (0x471c70 < iVar1) {
      return (int)&DAT_0002c51e;
    }
    uVar2 = 0x20000;
  }
  return uVar2 | 0x38e3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AISpeeds_SetTrafficSpeedRandomFactor__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1408, offset 0x8006ef28
	/* begin block 1 */
		// Start line: 1409
		// Start offset: 0x8006EF28
		// Variables:
	// 		int randomSpeedMultipliers[4]; // stack offset -16
	/* end block 1 */
	// End offset: 0x8006EF28
	// End Line: 1409

	/* begin block 2 */
		// Start line: 2990
	/* end block 2 */
	// End Line: 2991

	/* begin block 3 */
		// Start line: 3000
	/* end block 3 */
	// End Line: 3001

	/* begin block 4 */
		// Start line: 3000
	/* end block 4 */
	// End Line: 3001

	/* begin block 5 */
		// Start line: 3004
	/* end block 5 */
	// End Line: 3005

void AISpeeds_SetTrafficSpeedRandomFactor__FP8Car_tObj(Car_tObj *carObj)

{
  int local_10 [4];
  
  randtemp = fastRandom * randSeed;
  fastRandom = randtemp & 0xffff;
  carObj->desiredSpeed = *(int *)((int)local_10 + (randtemp >> 6 & 0xc));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AISpeeds_MaintainLeaderBoard__Fv()
 // line 1421, offset 0x8006efa4
	/* begin block 1 */
		// Start line: 1422
		// Start offset: 0x8006EFA4
		// Variables:
	// 		int slot; // $a3
	// 		struct Car_tObj *lastAI; // $t0

		/* begin block 1.1 */
			// Start line: 1423
			// Start offset: 0x8006EFA4
			// Variables:
		// 		int carLoop; // $a1

			/* begin block 1.1.1 */
				// Start line: 1433
				// Start offset: 0x8006EFE8
				// Variables:
			// 		struct Car_tObj *test; // $a0
			/* end block 1.1.1 */
			// End offset: 0x8006F090
			// End Line: 1451
		/* end block 1.1 */
		// End offset: 0x8006F09C
		// End Line: 1452
	/* end block 1 */
	// End offset: 0x8006F09C
	// End Line: 1457

	/* begin block 2 */
		// Start line: 3025
	/* end block 2 */
	// End Line: 3026

	/* begin block 3 */
		// Start line: 3032
	/* end block 3 */
	// End Line: 3033

	/* begin block 4 */
		// Start line: 3032
	/* end block 4 */
	// End Line: 3033

	/* begin block 5 */
		// Start line: 3033
	/* end block 5 */
	// End Line: 3034

	/* begin block 6 */
		// Start line: 3033
	/* end block 6 */
	// End Line: 3034

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AISpeeds_MaintainLeaderBoard__Fv(void)

{
  Car_tObj **ppCVar1;
  Car_tObj *pCVar2;
  int iVar3;
  int iVar4;
  Car_tObj *pCVar5;
  
  iVar4 = 0;
  pCVar5 = (Car_tObj *)0x0;
  leaderBoard.leadRacer = (Car_tObj *)0x0;
  leaderBoard.leadHumanRacer = (Car_tObj *)0x0;
  leaderBoard.leadAIRacer = (Car_tObj *)0x0;
  leaderBoard.lastAIRacer = (Car_tObj *)0x0;
  iVar3 = Cars_gNumCars + -1;
  ppCVar1 = &Cars_gTotalSortedList9 + iVar3;
  while (-1 < iVar3) {
    pCVar2 = *ppCVar1;
    if ((((pCVar2->carFlags & 1U) != 0) && (leaderBoard.leadRacer == (Car_tObj *)0x0)) &&
       (pCVar2->aiGlue == 0)) {
      leaderBoard.leadRacer = pCVar2;
    }
    if ((pCVar2->carFlags & 8U) != 0) {
      *(Car_tObj **)&pCVar2->drag = pCVar5;
      pCVar2->speedNitrous = iVar4;
      iVar4 = iVar4 + 1;
      pCVar5 = pCVar2;
      leaderBoard.lastAIRacer = pCVar2;
      if (leaderBoard.leadAIRacer == (Car_tObj *)0x0) {
        pCVar5 = pCVar2;
        leaderBoard.leadAIRacer = pCVar2;
        leaderBoard.lastAIRacer = pCVar2;
      }
    }
    if (((pCVar2->carFlags & 4U) != 0) && (leaderBoard.leadHumanRacer == (Car_tObj *)0x0)) {
      leaderBoard.leadHumanRacer = pCVar2;
    }
    ppCVar1 = ppCVar1 + -1;
    iVar3 = iVar3 + -1;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_GetScriptFactor__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1471, offset 0x8006f0a4
	/* begin block 1 */
		// Start line: 1472
		// Start offset: 0x8006F0A4
	/* end block 1 */
	// End offset: 0x8006F0F8
	// End Line: 1483

	/* begin block 2 */
		// Start line: 3131
	/* end block 2 */
	// End Line: 3132

	/* begin block 3 */
		// Start line: 3146
	/* end block 3 */
	// End Line: 3147

	/* begin block 4 */
		// Start line: 3146
	/* end block 4 */
	// End Line: 3147

int AISpeeds_GetScriptFactor__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  
  iVar1 = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&carObj->script,AISCRIPT_AIREACTION_SPEED_BURST);
  if (iVar1 == -1) {
    iVar2 = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                      (&carObj->script,AISCRIPT_AIREACTION_HARD_BRAKE);
    iVar1 = 0x8000;
    if (iVar2 == -1) {
      iVar1 = 0x10000;
    }
  }
  else {
    iVar1 = 0x18000;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_GetUpgradeAccMult__Fi(int carIndex /*$a0*/)
 // line 1492, offset 0x8006f10c
	/* begin block 1 */
		// Start line: 1493
		// Start offset: 0x8006F10C
		// Variables:
	// 		struct Car_tObj *carObj; // $s0
	// 		int accMult; // $a0
	/* end block 1 */
	// End offset: 0x8006F1B0
	// End Line: 1502

	/* begin block 2 */
		// Start line: 3187
	/* end block 2 */
	// End Line: 3188

	/* begin block 3 */
		// Start line: 3197
	/* end block 3 */
	// End Line: 3198

	/* begin block 4 */
		// Start line: 3197
	/* end block 4 */
	// End Line: 3198

int AISpeeds_GetUpgradeAccMult__Fi(int carIndex)

{
  uint uVar1;
  Car_tObj *pCVar2;
  
  pCVar2 = (&Cars_gList9)[carIndex];
  uVar1 = 0x10000;
  if (pCVar2->carInfo->EngineMods == 1) {
    uVar1 = fixedmult(0x10000,engineUpgrade.accMult);
  }
  if (pCVar2->carInfo->WeightTransfer == 1) {
    uVar1 = fixedmult(uVar1,suspensionUpgrade.accMult);
  }
  if (pCVar2->carInfo->GroundEffects == 1) {
    uVar1 = fixedmult(uVar1,aeroUpgrade.accMult);
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_GetUpgradeBrakeMult__Fi(int carIndex /*$a0*/)
 // line 1507, offset 0x8006f1c8
	/* begin block 1 */
		// Start line: 1508
		// Start offset: 0x8006F1C8
		// Variables:
	// 		struct Car_tObj *carObj; // $s0
	// 		int brakeMult; // $a0
	/* end block 1 */
	// End offset: 0x8006F26C
	// End Line: 1517

	/* begin block 2 */
		// Start line: 3222
	/* end block 2 */
	// End Line: 3223

	/* begin block 3 */
		// Start line: 3228
	/* end block 3 */
	// End Line: 3229

	/* begin block 4 */
		// Start line: 3228
	/* end block 4 */
	// End Line: 3229

int AISpeeds_GetUpgradeBrakeMult__Fi(int carIndex)

{
  uint uVar1;
  Car_tObj *pCVar2;
  
  pCVar2 = (&Cars_gList9)[carIndex];
  uVar1 = 0x10000;
  if (pCVar2->carInfo->EngineMods == 1) {
    uVar1 = fixedmult(0x10000,engineUpgrade.brakeMult);
  }
  if (pCVar2->carInfo->WeightTransfer == 1) {
    uVar1 = fixedmult(uVar1,suspensionUpgrade.brakeMult);
  }
  if (pCVar2->carInfo->GroundEffects == 1) {
    uVar1 = fixedmult(uVar1,aeroUpgrade.brakeMult);
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_GetUpgradeHandlingMult__Fi(int carIndex /*$a0*/)
 // line 1521, offset 0x8006f284
	/* begin block 1 */
		// Start line: 1522
		// Start offset: 0x8006F284
		// Variables:
	// 		struct Car_tObj *carObj; // $s0
	// 		int handlingMult; // $a0
	/* end block 1 */
	// End offset: 0x8006F328
	// End Line: 1531

	/* begin block 2 */
		// Start line: 3252
	/* end block 2 */
	// End Line: 3253

	/* begin block 3 */
		// Start line: 3257
	/* end block 3 */
	// End Line: 3258

	/* begin block 4 */
		// Start line: 3257
	/* end block 4 */
	// End Line: 3258

int AISpeeds_GetUpgradeHandlingMult__Fi(int carIndex)

{
  uint uVar1;
  Car_tObj *pCVar2;
  
  pCVar2 = (&Cars_gList9)[carIndex];
  uVar1 = 0x10000;
  if (pCVar2->carInfo->EngineMods == 1) {
    uVar1 = fixedmult(0x10000,engineUpgrade.handlingMult);
  }
  if (pCVar2->carInfo->WeightTransfer == 1) {
    uVar1 = fixedmult(uVar1,suspensionUpgrade.handlingMult);
  }
  if (pCVar2->carInfo->GroundEffects == 1) {
    uVar1 = fixedmult(uVar1,aeroUpgrade.handlingMult);
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_GetUpgradeTopSpeedMult__Fi(int carIndex /*$a0*/)
 // line 1535, offset 0x8006f340
	/* begin block 1 */
		// Start line: 1536
		// Start offset: 0x8006F340
		// Variables:
	// 		struct Car_tObj *carObj; // $s0
	// 		int topSpeedMult; // $a0
	/* end block 1 */
	// End offset: 0x8006F3E4
	// End Line: 1545

	/* begin block 2 */
		// Start line: 3281
	/* end block 2 */
	// End Line: 3282

	/* begin block 3 */
		// Start line: 3286
	/* end block 3 */
	// End Line: 3287

	/* begin block 4 */
		// Start line: 3286
	/* end block 4 */
	// End Line: 3287

int AISpeeds_GetUpgradeTopSpeedMult__Fi(int carIndex)

{
  uint uVar1;
  Car_tObj *pCVar2;
  
  pCVar2 = (&Cars_gList9)[carIndex];
  uVar1 = 0x10000;
  if (pCVar2->carInfo->EngineMods == 1) {
    uVar1 = fixedmult(0x10000,engineUpgrade.topSpeedMult);
  }
  if (pCVar2->carInfo->WeightTransfer == 1) {
    uVar1 = fixedmult(uVar1,suspensionUpgrade.topSpeedMult);
  }
  if (pCVar2->carInfo->GroundEffects == 1) {
    uVar1 = fixedmult(uVar1,aeroUpgrade.topSpeedMult);
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_CalcHumanTopSpeed__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1551, offset 0x8006f3fc
	/* begin block 1 */
		// Start line: 1552
		// Start offset: 0x8006F3FC
	/* end block 1 */
	// End offset: 0x8006F3FC
	// End Line: 1552

	/* begin block 2 */
		// Start line: 3312
	/* end block 2 */
	// End Line: 3313

	/* begin block 3 */
		// Start line: 3319
	/* end block 3 */
	// End Line: 3320

	/* begin block 4 */
		// Start line: 3319
	/* end block 4 */
	// End Line: 3320

int AISpeeds_CalcHumanTopSpeed__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  
  iVar1 = AISpeeds_CalcHumanCurveSpeed__FP8Car_tObj(carObj);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AISpeeds_CalcHumanCurveSpeed__FP8Car_tObj(struct Car_tObj *carObj /*$s2*/)
 // line 1565, offset 0x8006f41c
	/* begin block 1 */
		// Start line: 1566
		// Start offset: 0x8006F41C
		// Variables:
	// 		int sliceHere; // $s1
	// 		int sliceAhead; // $a1
	// 		int curveAhead; // $v1
	// 		int tightestCurve; // $s0
	/* end block 1 */
	// End offset: 0x8006F6D4
	// End Line: 1604

	/* begin block 2 */
		// Start line: 3341
	/* end block 2 */
	// End Line: 3342

	/* begin block 3 */
		// Start line: 3347
	/* end block 3 */
	// End Line: 3348

	/* begin block 4 */
		// Start line: 3347
	/* end block 4 */
	// End Line: 3348

int AISpeeds_CalcHumanCurveSpeed__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int slice;
  int slice_00;
  int slice_01;
  
  slice = (int)(carObj->N).simRoadInfo.slice;
  slice_00 = slice;
  if (gNumSlices <= slice) {
    slice_00 = slice - gNumSlices;
  }
  slice_00 = Get__25AIDataRecord_TrackCurve_ti(AIDataRecord_TrackCurve,slice_00);
  iVar1 = (carObj->script).lastReactionIndex[3] * 4;
  slice_01 = slice + iVar1;
  if (iVar1 < 0) {
    if (slice_01 < 0) {
      slice_01 = slice_01 + gNumSlices;
    }
  }
  else {
    if (gNumSlices <= slice_01) {
      slice_01 = slice_01 - gNumSlices;
    }
  }
  iVar1 = Get__25AIDataRecord_TrackCurve_ti(AIDataRecord_TrackCurve,slice_01);
  if (slice_00 < iVar1) {
    slice_00 = iVar1;
  }
  iVar1 = (carObj->script).lastReactionIndex[3] * 8;
  slice_01 = slice + iVar1;
  if (iVar1 < 0) {
    if (slice_01 < 0) {
      slice_01 = slice_01 + gNumSlices;
    }
  }
  else {
    if (gNumSlices <= slice_01) {
      slice_01 = slice_01 - gNumSlices;
    }
  }
  iVar1 = Get__25AIDataRecord_TrackCurve_ti(AIDataRecord_TrackCurve,slice_01);
  if (slice_00 < iVar1) {
    slice_00 = iVar1;
  }
  iVar1 = (carObj->script).lastReactionIndex[3] * 0xc;
  slice_01 = slice + iVar1;
  if (iVar1 < 0) {
    if (slice_01 < 0) {
      slice_01 = slice_01 + gNumSlices;
    }
  }
  else {
    if (gNumSlices <= slice_01) {
      slice_01 = slice_01 - gNumSlices;
    }
  }
  iVar1 = Get__25AIDataRecord_TrackCurve_ti(AIDataRecord_TrackCurve,slice_01);
  if (slice_00 < iVar1) {
    slice_00 = iVar1;
  }
  iVar1 = (carObj->script).lastReactionIndex[3] * 0x10;
  slice_01 = slice + iVar1;
  if (iVar1 < 0) {
    if (slice_01 < 0) {
      slice_01 = slice_01 + gNumSlices;
    }
  }
  else {
    if (gNumSlices <= slice_01) {
      slice_01 = slice_01 - gNumSlices;
    }
  }
  iVar1 = Get__25AIDataRecord_TrackCurve_ti(AIDataRecord_TrackCurve,slice_01);
  if (slice_00 < iVar1) {
    slice_00 = iVar1;
  }
  iVar1 = (carObj->script).lastReactionIndex[3] * 0x14;
  slice = slice + iVar1;
  if (iVar1 < 0) {
    if (slice < 0) {
      slice = slice + gNumSlices;
    }
  }
  else {
    if (gNumSlices <= slice) {
      slice = slice - gNumSlices;
    }
  }
  slice = Get__25AIDataRecord_TrackCurve_ti(AIDataRecord_TrackCurve,slice);
  if (slice_00 < slice) {
    slice_00 = slice;
  }
  slice_00 = slice_00 * 0x1a666;
  if (slice_00 < 0) {
    slice_00 = slice_00 + 0xffff;
  }
  slice_00 = slice_00 >> 0x10;
  if (0xff < slice_00) {
    slice_00 = 0xff;
  }
  slice_00 = Get__30AIDataRecord_CurveSpeedTable_ti
                       (*(AIDataRecord_CurveSpeedTable_t **)(carObj->accTable + 0x58),slice_00);
  return slice_00;
}





