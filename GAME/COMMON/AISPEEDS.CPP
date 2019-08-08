#include "NFS4.H"
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

void AISpeeds_StartUp__Fv(void)
{
  uGp00000064 = reservememadr("aiwther",0x104,0);
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

void AISpeeds_ReadTuningInfo__Fv(void)
{
  Udff_tInfo *handle;
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char acStack152 [112];
  int local_28 [4];
  
  iVar5 = 0;
  sprintf(acStack152,"%stuning.bin",0);
  handle = Udff_Opena__FPcT0i(acStack152,(char *)0x0,1);
  Udff_GetInt__FP10Udff_tInfo(handle);
  piVar4 = &CaravanInfo;
  while (iVar5 < 6) {
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    *piVar4 = iVar1 << 5;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    piVar4[1] = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    piVar4[2] = iVar1;
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar1 = fixeddiv(0x10000,iVar1 << 0x15);
    piVar4[3] = iVar1;
    piVar4 = piVar4 + 4;
    iVar5 = iVar5 + 1;
  }
  iVar5 = 0;
  if ((GameSetup_gData == 0) && (0 < Cars_gNumAIRaceCars)) {
    iVar5 = 0;
    iVar1 = **(int **)(_Cars_gAIRaceCarList + 0x288);
    do {
      local_28[0] = Udff_GetInt__FP10Udff_tInfo(handle);
      local_28[1] = Udff_GetInt__FP10Udff_tInfo(handle);
      local_28[2] = Udff_GetInt__FP10Udff_tInfo(handle);
      if (iVar5 == iVar1) {
        DAT_801131fc = local_28[DAT_801131f4];
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x16);
  }
  else {
    do {
      Udff_GetInt__FP10Udff_tInfo(handle);
      Udff_GetInt__FP10Udff_tInfo(handle);
      Udff_GetInt__FP10Udff_tInfo(handle);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x16);
  }
  uGp00000068 = 0;
  iVar5 = 0;
  while (iVar5 < 0xc) {
    Udff_GetInt__FP10Udff_tInfo(handle);
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar2 = Udff_GetInt__FP10Udff_tInfo(handle);
    if (DAT_80113240 == 0) {
      iVar2 = 0x10000;
    }
    if (iVar5 == 0) {
      uGp00000068 = fixedmult(iVar1,iVar2);
    }
    iVar5 = iVar5 + 1;
  }
  iVar5 = Udff_GetInt__FP10Udff_tInfo(handle);
  iVar2 = 0;
  iVar1 = 0;
  piVar4 = piGp00000064;
  do {
    iVar3 = iVar1;
    if (iVar1 < 0) {
      iVar3 = iVar1 + 0x3f;
    }
    *piVar4 = 0x10000 - (iVar3 >> 6);
    piVar4 = piVar4 + 1;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + iVar5;
  } while (iVar2 < 0x41);
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

void AISpeeds_CleanUp__Fv(void)
{
  if (iGp00000064 != 0) {
    purgememadr();
    iGp00000064 = 0;
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

int AISpeeds_SuperDuperSpeedUpTheCarsAtTheStartBecauseWeCannotActuallyHandleRenderingTheseCars__FP8Car_tObj( (Car_tObj *carObj)
{
  if ((((1 < Cars_gNumAIRaceCars) && (GameSetup_gData != 1)) && (true)) &&
     ((Cars_gNumHumanRaceCars == 1 && (uRam00000006 < (carObj->N).totalSlice)))) {
    return (Cars_gNumAIRaceCars - carObj->forceNoSimOptz) * 0x3333 + 0x10000;
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

int AISpeeds_CalcOpponentTopSpeed__FP8Car_tObjPi(Car_tObj *carObj,int *unFetteredDesiredSpeed)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Car_tObj **ppCVar6;
  int iVar7;
  int f_final;
  int f_final_00;
  
  iVar1 = AISpeeds_CalcOpponentCurveSpeed__FP8Car_tObj(carObj);
  if (carObj->btcGlueModifier == 0) {
    if (((GameSetup_gData == 1) || (GameSetup_gData == 5)) &&
       (((uRam00000260 & 0x200) != 0 ||
        ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))) {
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
  f_final_00 = carObj->max_clacc;
  iVar3 = AISpeeds_GetDamageFactor__FP8Car_tObj(carObj);
  if ((GameSetup_gData == 1) || (Cars_gNumAIRaceCars < 2)) {
    iVar4 = 0x10000;
  }
  else {
    iVar4 = AISpeeds_GetCaravanFactor__FP8Car_tObj(carObj);
  }
  if (f_final_00 < 0) {
    f_final_00 = f_final_00 + 0xff;
  }
  iVar7 = iGp00000068;
  if (iGp00000068 < 0) {
    iVar7 = iGp00000068 + 0xff;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar5 = DAT_801131fc;
  if (DAT_801131fc < 0) {
    iVar5 = DAT_801131fc + 0xff;
  }
  if (f_final < 0) {
    f_final = f_final + 0xff;
  }
  f_final = (iVar5 >> 8) * (f_final >> 8);
  if (f_final < 0) {
    f_final = f_final + 0xff;
  }
  f_final = (iVar4 >> 8) * (f_final >> 8);
  if (f_final < 0) {
    f_final = f_final + 0xff;
  }
  f_final = (iVar7 >> 8) * (f_final >> 8);
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
  if ((GameSetup_gData != 1) && ((carObj->N).totalSlice < 0x96)) {
    f_final_00 = fixedmult((0x10000 - f_final_00) * (uint)(carObj->N).totalSlice,0x1b4);
    f_final_00 = 0x10000 - f_final_00;
    if ((carObj->N).totalSlice < 0x96) {
      f_final = fixedmult((0x10000 - f_final) * (uint)(carObj->N).totalSlice,0x1b4);
      f_final = 0x10000 - f_final;
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
  carObj->rampDesiredLatPos = f_final;
  f_final = AISpeeds_LimitGlueMultiplier__FP8Car_tObji(carObj,f_final_00);
  if (carObj->rampDesiredLatPos < 0x10001) {
    (carObj->N).gravityMult = 0x10000;
  }
  else {
    (carObj->N).gravityMult = carObj->rampDesiredLatPos;
  }
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar3 = carObj->rampDesiredLatPos;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar3 = (iVar1 >> 8) * (iVar3 >> 8);
  if (f_final < 0) {
    f_final = f_final + 0xff;
  }
  *unFetteredDesiredSpeed = (iVar1 >> 8) * (f_final >> 8);
  if ((((carObj->carFlags & 1U) != 0) && ((carObj->stats).finishType == 2)) &&
     (((GameSetup_gData != 1 && (GameSetup_gData != 5)) ||
      (((uRam00000260 & 0x200) == 0 &&
       ((Cars_gNumHumanRaceCars != 2 || ((uRam00000260 & 0x200) == 0)))))))) {
    iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObji(carObj,0);
    f_final = 0;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar2 = (carObj->N).dimension.x;
    f_final_00 = carObj->desiredSpeed - iVar2;
    iVar2 = carObj->desiredSpeed + iVar2;
    if (0 < Cars_gNumCars) {
      ppCVar6 = (Car_tObj **)&_Cars_gTotalSortedList;
      do {
        if (*ppCVar6 == carObj) break;
        f_final = f_final + 1;
        ppCVar6 = ppCVar6 + 1;
      } while (f_final < Cars_gNumCars);
    }
    if (f_final * 0x280000 <= iVar1) {
      iVar3 = (int)(carObj->N).simRoadInfo.slice * 0x20;
      f_final = -((uint)*(byte *)(iVar3 + 0x1e) * 0x8000 * (uint)(*(byte *)(iVar3 + 0x1d) >> 4));
      if (f_final <= f_final_00) {
        iVar4 = (uint)*(byte *)(iVar3 + 0x1f) * 0x8000 * ((uint)*(byte *)(iVar3 + 0x1d) & 0xf);
        if ((f_final_00 <= iVar4) && (f_final <= iVar2)) {
          iVar3 = 0;
          if (iVar4 < iVar2) goto LAB_8006de40;
          if (iVar1 < 0x1900001) {
            iVar3 = 0x11c71c;
            goto LAB_8006de40;
          }
        }
      }
      iVar3 = 0;
    }
  }
LAB_8006de40:
  *unFetteredDesiredSpeed = *unFetteredDesiredSpeed * (carObj->speechInfo).speechSource;
  return iVar3 * (carObj->speechInfo).speechSource;


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

int AISpeeds_NeedToSlowDownForCurve__FP8Car_tObjiii( (Car_tObj *carObj,int distanceMeters,int currentSpeed,int futureCurveSpeed)
{
  byte *pbVar1;
  int iVar2;
  
  if (futureCurveSpeed <= currentSpeed) {
    iVar2 = *(int *)(carObj->accTable + 0x68);
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

int AISpeeds_CalcOpponentCurveSpeed__FP8Car_tObj(Car_tObj *carObj)
{
  short sVar1;
  int curve;
  int currentSpeed;
  int iVar2;
  int futureCurveSpeed;
  
  iVar2 = 200;
  currentSpeed = carObj->carInLane;
  if (currentSpeed < 0) {
    currentSpeed = -currentSpeed;
  }
  while( true ) {
    if (iVar2 < 0) {
      return 0;
    }
    futureCurveSpeed = (iVar2 / 6) * (carObj->speechInfo).speechSource;
    if (futureCurveSpeed < 0) {
      sVar1 = (carObj->N).simRoadInfo.slice;
    }
    else {
      sVar1 = (carObj->N).simRoadInfo.slice;
    }
    curve = Get__25AIDataRecord_TrackCurve_ti
                      ((AIDataRecord_TrackCurve_t *)0x0,(int)sVar1 + futureCurveSpeed);
    futureCurveSpeed =
         Get__30AIDataRecord_CurveSpeedTable_ti
                   (*(AIDataRecord_CurveSpeedTable_t **)(carObj->accTable + 0x66),curve);
    if (DAT_80113234 != 0) {
      if (curve < 0) {
        curve = curve + 3;
      }
      futureCurveSpeed = fixedmult(futureCurveSpeed,*(undefined4 *)((curve >> 2) * 4 + iGp00000064))
      ;
    }
    if (iVar2 == 0) break;
    curve = AISpeeds_NeedToSlowDownForCurve__FP8Car_tObjiii
                      (carObj,iVar2 << 0x10,currentSpeed,futureCurveSpeed);
    iVar2 = iVar2 + -0x19;
    if (curve != 0) {
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

int AISpeeds_BTCGetGlueFactor__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int iVar2;
  int iVar3;
  Car_tObj *otherCarObj;
  Car_tObj **ppCVar4;
  int iVar5;
  int iVar6;
  Car_tObj *pCVar7;
  
  iVar5 = 0x270f0000;
  pCVar7 = (Car_tObj *)0x0;
  if ((carObj->carFlags & 0x20U) == 0) {
    iVar6 = 0;
    ppCVar4 = (Car_tObj **)&_Cars_gHumanRaceCarList;
    while (iVar6 < Cars_gNumHumanRaceCars) {
      otherCarObj = *ppCVar4;
      if ((otherCarObj->carFlags & 0x200U) != 0) {
        iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
        iVar2 = iVar1;
        if (iVar1 < 0) {
          iVar2 = -iVar1;
        }
        iVar3 = iVar5;
        if (iVar5 < 0) {
          iVar3 = -iVar5;
        }
        if (iVar2 < iVar3) {
          iVar5 = iVar1;
          pCVar7 = otherCarObj;
        }
      }
      ppCVar4 = ppCVar4 + 1;
      iVar6 = iVar6 + 1;
    }
    if (pCVar7->RSControl != 0) {
      return 0x10000;
    }
    if (0x13fffe < pCVar7->carInLane + 0x9ffffU) {
      iVar5 = (int)(iVar5 * (carObj->speechInfo).speechSource) / 0x3c0000 + 10;
      if (iVar5 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0x14;
        if (iVar5 < 0x15) {
          iVar6 = iVar5;
        }
      }
      iVar5 = (&AIPerson_glueTable)[iVar6];
      if (iVar5 < 0x10000) {
        iVar5 = fixedmult(0x10000 - iVar5,carObj->drag);
        iVar5 = 0x10000 - iVar5;
      }
      if (iVar5 < 0x6666) {
        iVar5 = 0x6666;
      }
      iVar5 = fixedmult(iVar5,*(undefined4 *)(carObj->accTable + 0x6a));
      return iVar5;
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

Car_tObj * AISpeeds_GetNextAICar__FP8Car_tObj(Car_tObj *carObj)
{
  return (Car_tObj *)carObj->donutMode;


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

Car_tObj * AISpeeds_GetPrevAICar__FP8Car_tObj(Car_tObj *carObj)
{
  Car_tObj *pCVar1;
  int iVar2;
  Car_tObj **ppCVar3;
  Car_tObj *pCVar4;
  
  pCVar4 = (Car_tObj *)0x0;
  iVar2 = 0;
  if (0 < Cars_gNumCars) {
    ppCVar3 = (Car_tObj **)&_Cars_gTotalSortedList;
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

int AISpeeds_GetCaravanFactor__FP8Car_tObj(Car_tObj *carObj)
{
  Car_tObj *carObj_00;
  int iVar1;
  Car_tObj *pCVar2;
  speechSourceType sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = carObj->forceNoSimOptz;
  carObj_00 = AISpeeds_GetNextAICar__FP8Car_tObj(carObj);
  if (carObj->btcGlueModifier != 0) {
    iVar6 = 0xe666;
    if (*(int *)(carObj->btcGlueModifier + 0x774) < (int)uVar7) {
      carObj->btcGlueModifier = 0;
    }
    goto LAB_8006e444;
  }
  if (carObj_00 == (Car_tObj *)0x0) {
LAB_8006e3b0:
    pCVar2 = (Car_tObj *)carObj_00->btcGlueModifier;
  }
  else {
    pCVar2 = (Car_tObj *)carObj_00->btcGlueModifier;
    if (pCVar2 == (Car_tObj *)0x0) {
      if (0xd6491 < carObj_00->desiredDirection) {
        sVar3 = (carObj->speechInfo).speechSource;
        iVar5 = (carObj_00->speechInfo).warningNumber * sVar3;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        if ((iVar5 >> 8) * 0xb3 <= (int)((carObj_00->speechInfo).copCarIndex * sVar3)) {
          iVar5 = AIWorld_GameOdometer__FP8Car_tObj(carObj_00);
          iVar1 = AIWorld_GameOdometer__FP8Car_tObj(carObj);
          iVar5 = iVar5 - iVar1;
          iVar1 = carObj->AIFishtailEndTick;
          if (iVar1 + 0xa0000 < iVar5) {
            iVar6 = 0x13333;
            if (iVar1 + 0x3e80000 < iVar5) {
              iVar6 = 0x18000;
            }
          }
          else {
            if (iVar5 < iVar1 + -0xa0000) {
              iVar6 = 0xcccc;
              if (iVar5 < iVar1 + -0x3e80000) {
                iVar6 = 0x9999;
              }
            }
            else {
              iVar6 = 0x10000;
            }
          }
          goto LAB_8006e444;
        }
      }
      goto LAB_8006e3b0;
    }
  }
  iVar6 = 0x10000;
  if (pCVar2 == carObj) {
    iVar6 = 0x11999;
  }
LAB_8006e444:
  if ((&CaravanInfo)[uVar7 * 4] != 0) {
    carObj->lookAheadSlice = carObj->lookAheadSlice;
  }
  if (carObj->lookAheadSlice < 0) {
    uVar4 = (&CaravanInfo)[uVar7 * 4];
    iVar5 = (int)(uVar4 + (uVar4 >> 0x1f)) >> 1;
    uVar4 = fastRandom & 0xffff00;
    fastRandom = fastRandom & 0xffff;
    carObj->lookAheadSlice = iVar5 + (iVar5 * (uVar4 >> 8) >> 0x10);
    randtemp = fastRandom;
    carObj->AIFishtailEndTick =
         ((&DAT_8010ddb8)[uVar7 * 4] +
         (((&DAT_8010ddbc)[uVar7 * 4] - (&DAT_8010ddb8)[uVar7 * 4]) * (fastRandom >> 8) >> 0x10)) *
         0x10000;
  }
  if (((((int)uVar7 < Cars_gNumAIRaceCars + -1) && (carObj->btcGlueModifier == 0)) &&
      ((int)(uint)(carObj->N).totalSlice < -0x14d)) && ((1 < uVar7 || (leaderBoard != 0)))) {
    randtemp = fastRandom;
    fastRandom = fastRandom & 0xffff;
    if (((carObj_00 == (Car_tObj *)0x0) || (carObj_00->btcGlueModifier == 0)) &&
       ((false && (pCVar2 = AISpeeds_GetPrevAICar__FP8Car_tObj(carObj), pCVar2 != (Car_tObj *)0x0)))
       ) {
      *(Car_tObj **)&carObj->btcGlueModifier = pCVar2;
    }
  }
  if (((carObj_00 != (Car_tObj *)0x0) && (carObj_00->gripFactor < carObj->gripFactor + -0x1999)) &&
     (carObj_00->btcGlueModifier == 0)) {
    *(Car_tObj **)&carObj_00->btcGlueModifier = carObj;
  }
  return iVar6;


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

int AISpeeds_GetGlueFactor__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0x10000;
  iVar1 = AIWorld_GameOdometer__FP8Car_tObj(DAT_8010dda8);
  iVar2 = AIWorld_GameOdometer__FP8Car_tObj(DAT_8010ddac);
  iVar3 = AIWorld_GameOdometer__FP8Car_tObj(DAT_8010ddb0);
  iVar4 = DAT_8010dda8->carInLane;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar4 < 0xa0000) {
    iVar4 = 0x10000;
    goto LAB_8006e818;
  }
  if (iVar1 < iVar3) {
    iVar4 = (iVar2 - iVar1) / 0x3c0000 + 10;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    else {
LAB_8006e77c:
      iVar2 = 0x14;
      if (iVar4 < 0x15) {
        iVar2 = iVar4;
      }
    }
  }
  else {
    if (iVar1 <= iVar2) {
      iVar4 = (iVar2 - iVar1) / 0x3c0000 + 10;
      if (iVar4 < 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 0x14;
        if (iVar4 < 0x15) {
          iVar2 = iVar4;
        }
      }
      iVar4 = (&AIPerson_glueTable)[iVar2];
      uVar5 = 0x8000;
      if (GameSetup_gData != 3) {
        uVar5 = 0xe666;
      }
      goto LAB_8006e818;
    }
    iVar4 = (iVar2 - iVar1) / 0x3c0000 + 10;
    if (-1 < iVar4) goto LAB_8006e77c;
    iVar2 = 0;
  }
  iVar4 = (&AIPerson_glueTable)[iVar2];
  uVar5 = 0x10000;
LAB_8006e818:
  iVar2 = AIWorld_GameOdometer__FP8Car_tObj(carObj);
  if ((iVar2 < iVar1 + 0x3c0000) && (iVar4 < 0x10000)) {
    iVar4 = 0x10000;
  }
  if (iVar4 < 0x10001) {
    iVar4 = fixedmult(0x10000 - iVar4,uVar5);
    iVar4 = -iVar4;
  }
  else {
    iVar4 = fixedmult(iVar4 + -0x10000,uVar5);
  }
  return iVar4 + 0x10000;


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

int AISpeeds_GetDamageFactor__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = (carObj->N).damage[0];
  iVar2 = (carObj->N).damage[1];
  iVar4 = (carObj->N).damage[3];
  iVar3 = (carObj->N).damage[2];
  carObj->gripFactor = 0;
  iVar1 = iVar1 + iVar2 + iVar3 + iVar4 + (carObj->N).damage[4] + (carObj->N).damage[5] +
          (carObj->N).damage[6] + (carObj->N).damage[7];
  carObj->gripFactor = iVar1;
  if (((GameSetup_gData == 1) || (GameSetup_gData == 5)) &&
     (((uRam00000260 & 0x200) != 0 ||
      ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))) {
    uVar5 = 0x147;
  }
  else {
    iVar1 = carObj->gripFactor;
    uVar5 = 0x48;
  }
  iVar1 = fixedmult(iVar1,uVar5);
  carObj->gripFactor = iVar1;
  iVar2 = 0x10000 - carObj->gripFactor;
  carObj->gripFactor = iVar2;
  iVar1 = 0x8000;
  if (0x7fff < iVar2) {
    iVar1 = iVar2;
  }
  carObj->gripFactor = iVar1;
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

int AISpeeds_LimitGlueMultiplier__FP8Car_tObji(Car_tObj *carObj,int f_final)
{
  int iVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  int iVar4;
  
  if (0xcccb < f_final - 0x999aU) {
    iVar4 = 0x27100000;
    iVar3 = 0;
    ppCVar2 = (Car_tObj **)&_Cars_gHumanRaceCarList;
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
        f_final = 0x16666;
      }
      if (f_final < 0x9999) {
        f_final = 0x9999;
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

int AISpeeds_CalcCopTopSpeed__FP8Car_tObj(Car_tObj *carObj)
{
  AIDataRecord_AccTable_t *pAVar1;
  int iVar2;
  AIDataRecord_AccTable_t *pAVar3;
  int iVar4;
  
  pAVar1 = (AIDataRecord_AccTable_t *)AISpeeds_CalcOpponentCurveSpeed__FP8Car_tObj(carObj);
  pAVar3 = carObj->accelerationRecord;
  if ((int)pAVar1 < (int)carObj->accelerationRecord) {
    pAVar3 = pAVar1;
  }
  iVar2 = carObj->max_clacc;
  iVar4 = iGp00000068;
  if (iGp00000068 < 0) {
    iVar4 = iGp00000068 + 0xff;
  }
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar4 = (iVar4 >> 8) * (iVar2 >> 8);
  carObj->rampDesiredLatPos = iVar4;
  if (iVar4 < 0x10001) {
    (carObj->N).gravityMult = 0x10000;
  }
  else {
    (carObj->N).gravityMult = iVar4;
  }
  if ((int)pAVar3 < 0) {
    pAVar3 = (AIDataRecord_AccTable_t *)(pAVar3[2].AIDataRecord_t.name_ + 0x2f);
  }
  iVar4 = carObj->rampDesiredLatPos;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  return ((int)pAVar3 >> 8) * (iVar4 >> 8) * (carObj->speechInfo).speechSource;


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

int AISpeeds_CalcTrafficTopSpeed__FP8Car_tObj(Car_tObj *carObj)
{
  int oldsafe;
  int iVar1;
  uint uVar2;
  speechSourceType sVar3;
  
  oldsafe = AISpeeds_GetLegalSpeed__Fi((int)(carObj->N).simRoadInfo.slice);
  oldsafe = fixedmult(oldsafe,0xc000);
  if (((GameSetup_gData == 1) || (GameSetup_gData == 5)) &&
     (((uRam00000260 & 0x200) != 0 ||
      ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))) {
    if ((carObj->speechInfo).speechSource == sRam00000554) goto LAB_8006ec80;
    iVar1 = AISpeeds_CalculateOncomingCarSpeed__FP8Car_tObj(carObj);
  }
  else {
    sVar3 = (carObj->speechInfo).speechSource;
    uVar2 = ~sVar3;
    if (true) {
      uVar2 = sVar3 ^ 1;
    }
    if (uVar2 == 0) goto LAB_8006ec80;
    iVar1 = AISpeeds_CalculateOncomingCarSpeed__FP8Car_tObj(carObj);
  }
  if (iVar1 <= oldsafe) {
    oldsafe = AISpeeds_CalculateOncomingCarSpeed__FP8Car_tObj(carObj);
  }
LAB_8006ec80:
  if ((carObj->carFlags & 0x10U) != 0) {
    oldsafe = AISpeeds_RandomizeTrafficSpeed__FP8Car_tObji(carObj,oldsafe);
    if (oldsafe < 0) {
      oldsafe = oldsafe + 0xff;
    }
    iVar1 = *(int *)(carObj->accTable + 0x6a);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    oldsafe = (oldsafe >> 8) * (iVar1 >> 8);
  }
  if (oldsafe < 0x8e38e) {
    oldsafe = 0x8e38e;
  }
  return oldsafe * (carObj->speechInfo).speechSource;


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

int AISpeeds_GetLegalSpeed__Fi(int slice)
{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = (ushort *)&Track0Speeds;
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

int AISpeeds_RandomizeTrafficSpeed__FP8Car_tObji(Car_tObj *carObj,int oldsafe)
{
  Car_tObj *pCVar1;
  int iVar2;
  
  if (oldsafe < 1) {
    if (oldsafe < 0) {
      oldsafe = oldsafe + 0xff;
    }
    pCVar1 = carObj->basisCar;
    if ((int)pCVar1 < 0) {
      pCVar1 = (Car_tObj *)((int)(pCVar1->N).orientMat.m + 0xf);
    }
    iVar2 = (oldsafe >> 8) * ((int)pCVar1 >> 8);
  }
  else {
    pCVar1 = carObj->basisCar;
    if ((int)pCVar1 < 0) {
      pCVar1 = (Car_tObj *)((int)(pCVar1->N).orientMat.m + 0xf);
    }
    iVar2 = (oldsafe >> 8) * ((int)pCVar1 >> 8);
    if (iVar2 < oldsafe + -0xd6666) {
      iVar2 = oldsafe + -0xd6666;
    }
    if (iVar2 < 0x8e666) {
      iVar2 = 0x8e666;
    }
  }
  return iVar2;


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

void AISpeeds_CalcDesiredSpeed__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  uint uVar2;
  
  uVar2 = carObj->carFlags;
  (carObj->speechInfo).copCarIndex = 0;
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 0x20) == 0) {
      if ((uVar2 & 0x10) != 0) {
        iVar1 = AISpeeds_CalcTrafficTopSpeed__FP8Car_tObj(carObj);
        (carObj->speechInfo).copCarIndex = iVar1;
        (carObj->speechInfo).warningNumber = iVar1;
      }
    }
    else {
      if ((carObj->desiredLatPos & 2U) == 0) {
        iVar1 = AISpeeds_CalcTrafficTopSpeed__FP8Car_tObj(carObj);
        (carObj->speechInfo).copCarIndex = iVar1;
      }
      else {
        iVar1 = AISpeeds_CalcCopTopSpeed__FP8Car_tObj(carObj);
        (carObj->speechInfo).copCarIndex = iVar1;
      }
      (carObj->speechInfo).warningNumber = (carObj->speechInfo).copCarIndex;
    }
  }
  else {
    iVar1 = AISpeeds_CalcOpponentTopSpeed__FP8Car_tObjPi(carObj,&(carObj->speechInfo).warningNumber)
    ;
    (carObj->speechInfo).copCarIndex = iVar1;
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

int AISpeeds_CalculateOncomingCarSpeed__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(carObj->originalDesiredSpeed + 0x564);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 0xd5555) {
    uVar2 = 0x160000;
  }
  else {
    if (iVar1 < 0x1aaaaa) {
      return 0xd5555;
    }
    if (iVar1 < 0x280000) {
      return 0x8e38e;
    }
    if (iVar1 < 0x378e38) {
      return 0x471c7;
    }
    if (0x471c70 < iVar1) {
      return 0x2c51e;
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

void AISpeeds_SetTrafficSpeedRandomFactor__FP8Car_tObj(Car_tObj *carObj)
{
  uint uVar1;
  Car_tObj *local_10 [4];
  
  randtemp = fastRandom;
  uVar1 = fastRandom >> 6;
  fastRandom = fastRandom & 0xffff;
  carObj->basisCar = *(Car_tObj **)((int)local_10 + (uVar1 & 0xc));
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

void AISpeeds_MaintainLeaderBoard__Fv(void)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  leaderBoard = 0;
  DAT_8010dda8 = 0;
  DAT_8010ddac = 0;
  DAT_8010ddb0 = 0;
  iVar3 = Cars_gNumCars + -1;
  piVar1 = &_Cars_gTotalSortedList + iVar3;
  while (-1 < iVar3) {
    iVar2 = *piVar1;
    if ((((*(uint *)(iVar2 + 0x260) & 1) != 0) && (leaderBoard == 0)) &&
       (*(int *)(iVar2 + 0x764) == 0)) {
      leaderBoard = iVar2;
    }
    if ((*(uint *)(iVar2 + 0x260) & 8) != 0) {
      *(int *)(iVar2 + 0x768) = iVar5;
      *(int *)(iVar2 + 0x774) = iVar4;
      iVar4 = iVar4 + 1;
      iVar5 = iVar2;
      DAT_8010ddb0 = iVar2;
      if (DAT_8010ddac == 0) {
        iVar5 = iVar2;
        DAT_8010ddac = iVar2;
        DAT_8010ddb0 = iVar2;
      }
    }
    if (((*(uint *)(iVar2 + 0x260) & 4) != 0) && (DAT_8010dda8 == 0)) {
      DAT_8010dda8 = iVar2;
    }
    piVar1 = piVar1 + -1;
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

int AISpeeds_GetUpgradeAccMult__Fi(int carIndex)
{
  int iVar1;
  int iVar2;
  
  iVar2 = (&_Cars_gList)[carIndex];
  iVar1 = 0x10000;
  if (*(int *)(*(int *)(iVar2 + 0x288) + 0x3c) == 1) {
    iVar1 = fixedmult(0x10000,0);
  }
  if (*(int *)(*(int *)(iVar2 + 0x288) + 0x40) == 1) {
    iVar1 = fixedmult(iVar1,0);
  }
  if (*(int *)(*(int *)(iVar2 + 0x288) + 0x44) == 1) {
    iVar1 = fixedmult(iVar1,0);
  }
  return iVar1;


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

int AISpeeds_GetUpgradeBrakeMult__Fi(int carIndex)
{
  int iVar1;
  int iVar2;
  
  iVar2 = (&_Cars_gList)[carIndex];
  iVar1 = 0x10000;
  if (*(int *)(*(int *)(iVar2 + 0x288) + 0x3c) == 1) {
    iVar1 = fixedmult(0x10000,0);
  }
  if (*(int *)(*(int *)(iVar2 + 0x288) + 0x40) == 1) {
    iVar1 = fixedmult(iVar1,0);
  }
  if (*(int *)(*(int *)(iVar2 + 0x288) + 0x44) == 1) {
    iVar1 = fixedmult(iVar1,0);
  }
  return iVar1;


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

int AISpeeds_GetUpgradeHandlingMult__Fi(int carIndex)
{
  int iVar1;
  int iVar2;
  
  iVar2 = (&_Cars_gList)[carIndex];
  iVar1 = 0x10000;
  if (*(int *)(*(int *)(iVar2 + 0x288) + 0x3c) == 1) {
    iVar1 = fixedmult(0x10000,0);
  }
  if (*(int *)(*(int *)(iVar2 + 0x288) + 0x40) == 1) {
    iVar1 = fixedmult(iVar1,0);
  }
  if (*(int *)(*(int *)(iVar2 + 0x288) + 0x44) == 1) {
    iVar1 = fixedmult(iVar1,0);
  }
  return iVar1;


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

int AISpeeds_GetUpgradeTopSpeedMult__Fi(int carIndex)
{
  int iVar1;
  int iVar2;
  
  iVar2 = (&_Cars_gList)[carIndex];
  iVar1 = 0x10000;
  if (*(int *)(*(int *)(iVar2 + 0x288) + 0x3c) == 1) {
    iVar1 = fixedmult(0x10000,0);
  }
  if (*(int *)(*(int *)(iVar2 + 0x288) + 0x40) == 1) {
    iVar1 = fixedmult(iVar1,0);
  }
  if (*(int *)(*(int *)(iVar2 + 0x288) + 0x44) == 1) {
    iVar1 = fixedmult(iVar1,0);
  }
  return iVar1;


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

int AISpeeds_CalcHumanCurveSpeed__FP8Car_tObj(Car_tObj *carObj)
{
  int curve;
  int iVar1;
  int slice;
  
  slice = (int)(carObj->N).simRoadInfo.slice;
  curve = Get__25AIDataRecord_TrackCurve_ti((AIDataRecord_TrackCurve_t *)0x0,slice);
  iVar1 = Get__25AIDataRecord_TrackCurve_ti
                    ((AIDataRecord_TrackCurve_t *)0x0,slice + (carObj->speechInfo).speechSource * 4)
  ;
  if (curve < iVar1) {
    curve = iVar1;
  }
  iVar1 = Get__25AIDataRecord_TrackCurve_ti
                    ((AIDataRecord_TrackCurve_t *)0x0,slice + (carObj->speechInfo).speechSource * 8)
  ;
  if (curve < iVar1) {
    curve = iVar1;
  }
  iVar1 = Get__25AIDataRecord_TrackCurve_ti
                    ((AIDataRecord_TrackCurve_t *)0x0,
                     slice + (carObj->speechInfo).speechSource * 0xc);
  if (curve < iVar1) {
    curve = iVar1;
  }
  iVar1 = Get__25AIDataRecord_TrackCurve_ti
                    ((AIDataRecord_TrackCurve_t *)0x0,
                     slice + (carObj->speechInfo).speechSource * 0x10);
  if (curve < iVar1) {
    curve = iVar1;
  }
  iVar1 = Get__25AIDataRecord_TrackCurve_ti
                    ((AIDataRecord_TrackCurve_t *)0x0,
                     slice + (carObj->speechInfo).speechSource * 0x14);
  if (curve < iVar1) {
    curve = iVar1;
  }
  curve = curve * 0x1a666;
  if (curve < 0) {
    curve = curve + 0xffff;
  }
  curve = curve >> 0x10;
  if (0xff < curve) {
    curve = 0xff;
  }
  curve = Get__30AIDataRecord_CurveSpeedTable_ti
                    (*(AIDataRecord_CurveSpeedTable_t **)(carObj->accTable + 0x66),curve);
  return curve;


}





