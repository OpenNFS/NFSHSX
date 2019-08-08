#include "NFS4.H"
#include "AIPHYSIC.H"

// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_StopCar__FP8Car_tObjii(struct Car_tObj *carObj /*$a0*/, int velScale /*$a1*/, int rotScale /*$a2*/)
 // line 120, offset 0x80069238
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x80069238
	/* end block 1 */
	// End offset: 0x800692E8
	// End Line: 127

void AIPhysic_StopCar__FP8Car_tObjii(Car_tObj *carObj,int velScale,int rotScale)
{
  int iVar1;
  int iVar2;
  
  (carObj->angularAcc).z = 0;
  (carObj->angularAcc).y = 0;
  (carObj->angularAcc).x = 0;
  (carObj->linearAcc_ch).z = 0;
  (carObj->linearAcc_ch).y = 0;
  (carObj->linearAcc_ch).x = 0;
  (carObj->linearAcc_rh).z = 0;
  (carObj->linearAcc_rh).y = 0;
  (carObj->linearAcc_rh).x = 0;
  if (velScale < 0) {
    velScale = velScale + 0xff;
  }
  velScale = velScale >> 8;
  iVar1 = velScale * (carObj->N).linearVel.x;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = velScale * (carObj->N).linearVel.y;
  (carObj->N).linearVel.x = iVar1 >> 8;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  (carObj->N).linearVel.y = iVar2 >> 8;
  velScale = velScale * (carObj->N).linearVel.z;
  if (velScale < 0) {
    velScale = velScale + 0xff;
  }
  iVar1 = (carObj->N).angularVel.y;
  (carObj->N).linearVel.z = velScale >> 8;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  if (rotScale < 0) {
    rotScale = rotScale + 0xff;
  }
  (carObj->N).angularVel.y = (iVar1 >> 8) * (rotScale >> 8);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_RevEngine__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 137, offset 0x800692fc
	/* begin block 1 */
		// Start line: 138
		// Start offset: 0x800692FC
		// Variables:
	// 		int increase; // $v1
	// 		int redLine; // $a1
	/* end block 1 */
	// End offset: 0x800693C4
	// End Line: 156

void AIPhysic_RevEngine__FP8Car_tObj(Car_tObj *carObj)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = carObj->laneSlack;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xffff;
  }
  uVar1 = carObj->carIndex;
  iVar2 = (uVar1 + ((int)(uVar1 + (uVar1 >> 0x1f)) >> 1) * -2 + 1) * iGp00000050 * 0x8c;
  uVar1 = iVar3 >> 0x10;
  if (((carObj->flywheelRpm & 1U) != 0) && (iVar2 = -(iVar2 >> 1), false)) {
    iVar2 = iVar2 + -1;
  }
  iVar2 = carObj->flywheelRpm + iVar2;
  carObj->flywheelRpm = iVar2;
  if ((int)uVar1 < iVar2) {
    carObj->flywheelRpm = (int)(uVar1 + (uVar1 >> 0x1f)) >> 1 | 1;
  }
  if (carObj->flywheelRpm < 0x1f5) {
    carObj->flywheelRpm = 500;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_HandleShifting__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 168, offset 0x800693cc
	/* begin block 1 */
		// Start line: 169
		// Start offset: 0x800693CC
		// Variables:
	// 		int desiredRPM; // $s0

		/* begin block 1.1 */
			// Start line: 169
			// Start offset: 0x800693CC

			/* begin block 1.1.1 */
				// Start line: 179
				// Start offset: 0x8006940C
				// Variables:
			// 		enum Gear_t gear; // $s3
			// 		int speed; // $s0
			// 		int speedDiff; // $s0
			// 		int baseRPM; // $s2
			// 		int invGearSpeedRange; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800694C8
			// End Line: 195
		/* end block 1.1 */
		// End offset: 0x800694C8
		// End Line: 195
	/* end block 1 */
	// End offset: 0x80069518
	// End Line: 204

void AIPhysic_HandleShifting__FP8Car_tObj(Car_tObj *carObj)
{
  Gear_t gear;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 3000;
  if (carObj->speed < 1) {
    gear = AIPhysic_CalculateGear__FP8Car_tObj(carObj);
    iVar1 = carObj->carInLane;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar3 = 0;
    iVar2 = AIPhysic_GearBottomSpeed__FP8Car_tObj6Gear_t(carObj,gear);
    iVar1 = iVar1 - iVar2;
    if (2 < (int)gear) {
      iVar3 = 0xfa00000;
    }
    iVar2 = AIPhysic_GearInvSpeedRange__FP8Car_tObj6Gear_t(carObj,gear);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar1 = (iVar1 >> 8) * (iVar2 >> 8);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar2 = carObj->laneSlack - iVar3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar3 = iVar3 + (iVar1 >> 8) * (iVar2 >> 8);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xffff;
    }
    iVar3 = iVar3 >> 0x10;
    (carObj->control).gear = (char)gear;
  }
  else {
    carObj->speed = carObj->speed - iGp00000050;
  }
  iVar2 = carObj->flywheelRpm;
  iVar1 = iVar3 - iVar2;
  if (iVar2 < iVar3) {
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    iVar1 = iVar1 >> 3;
  }
  else {
    iVar1 = iVar2 - iVar3;
    if (iVar2 <= iVar3) {
      return;
    }
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    iVar1 = -(iVar1 >> 3);
  }
  carObj->flywheelRpm = iVar2 + iVar1;
  return;


}




// decompiled code
// original method signature: 
// enum Gear_t /*$ra*/ AIPhysic_CalculateGear__FP8Car_tObj(struct Car_tObj *carObj /*$s2*/)
 // line 214, offset 0x80069534
	/* begin block 1 */
		// Start line: 215
		// Start offset: 0x80069534
		// Variables:
	// 		int hi; // $s0
	// 		int speed; // $s4
	// 		enum Gear_t gear; // $s1
	/* end block 1 */
	// End offset: 0x80069614
	// End Line: 255

Gear_t AIPhysic_CalculateGear__FP8Car_tObj(Car_tObj *carObj)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Gear_t gear;
  
  iVar4 = carObj->carInLane;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar4 < 0x20000) {
    gear = GEAR_NEUTRAL;
  }
  else {
    gear = (uint)(byte)(carObj->control).gear;
    if ((carObj->desiredVector).z == -1) {
      gear = GEAR_REVERSE;
    }
    else {
      while( true ) {
        bVar1 = false;
        iVar2 = AIPhysic_GearTopSpeed__FP8Car_tObj6Gear_t(carObj,gear);
        if ((iVar2 < iVar4) ||
           (iVar3 = AIPhysic_GearBottomSpeed__FP8Car_tObj6Gear_t(carObj,gear), iVar4 < iVar3)) {
          bVar1 = true;
        }
        if (!bVar1) break;
        if (iVar2 < iVar4) {
          iVar2 = AIPhysic_GearTopSpeed__FP8Car_tObj6Gear_t(carObj,gear + GEAR_NEUTRAL);
          if (iVar2 == 0) {
            return gear;
          }
          carObj->speed = carObj->currentSpeed;
          gear = gear + GEAR_NEUTRAL;
        }
        else {
          gear = gear + ~GEAR_REVERSE;
          carObj->speed = carObj->currentSpeed;
        }
      }
    }
  }
  return gear;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AIPhysic_GearInvSpeedRange__FP8Car_tObj6Gear_t(struct Car_tObj *carObj /*$a0*/, enum Gear_t gear /*$a1*/)
 // line 262, offset 0x80069638
	/* begin block 1 */
		// Start line: 263
		// Start offset: 0x80069638

		/* begin block 1.1 */
			// Start line: 265
			// Start offset: 0x80069638

			/* begin block 1.1.1 */
				// Start line: 270
				// Start offset: 0x8006964C
				// Variables:
			// 		int convertedGear; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8006964C
			// End Line: 272
		/* end block 1.1 */
		// End offset: 0x8006964C
		// End Line: 272
	/* end block 1 */
	// End offset: 0x8006964C
	// End Line: 272

int AIPhysic_GearInvSpeedRange__FP8Car_tObj6Gear_t(Car_tObj *carObj,Gear_t gear)
{
  int iVar1;
  
  if ((int)gear < 2) {
    iVar1 = AIPhysic_GearInvSpeedRange__FP8Car_tObj6Gear_t(carObj,GEAR_FIRST);
    return iVar1;
  }
  return carObj->topSpeeds[gear + ~GEAR_REVERSE];


}




// decompiled code
// original method signature: 
// int /*$ra*/ AIPhysic_GearTopSpeed__FP8Car_tObj6Gear_t(struct Car_tObj *carObj /*$a0*/, enum Gear_t gear /*$a1*/)
 // line 283, offset 0x80069660
	/* begin block 1 */
		// Start line: 284
		// Start offset: 0x80069660

		/* begin block 1.1 */
			// Start line: 286
			// Start offset: 0x80069660

			/* begin block 1.1.1 */
				// Start line: 291
				// Start offset: 0x80069674
				// Variables:
			// 		int convertedGear; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80069674
			// End Line: 293
		/* end block 1.1 */
		// End offset: 0x80069674
		// End Line: 293
	/* end block 1 */
	// End offset: 0x80069674
	// End Line: 293

int AIPhysic_GearTopSpeed__FP8Car_tObj6Gear_t(Car_tObj *carObj,Gear_t gear)
{
  int iVar1;
  
  if ((int)gear < 2) {
    iVar1 = AIPhysic_GearTopSpeed__FP8Car_tObj6Gear_t(carObj,GEAR_FIRST);
    return iVar1;
  }
  return (&carObj->aiShiftTimer)[gear + ~GEAR_NEUTRAL];


}




// decompiled code
// original method signature: 
// int /*$ra*/ AIPhysic_GearBottomSpeed__FP8Car_tObj6Gear_t(struct Car_tObj *carObj /*$a0*/, enum Gear_t gear /*$a1*/)
 // line 303, offset 0x80069688
	/* begin block 1 */
		// Start line: 304
		// Start offset: 0x80069688

		/* begin block 1.1 */
			// Start line: 306
			// Start offset: 0x80069688

			/* begin block 1.1.1 */
				// Start line: 317
				// Start offset: 0x800696A8
			/* end block 1.1.1 */
			// End offset: 0x800696A8
			// End Line: 317
		/* end block 1.1 */
		// End offset: 0x800696A8
		// End Line: 317
	/* end block 1 */
	// End offset: 0x800696A8
	// End Line: 317

int AIPhysic_GearBottomSpeed__FP8Car_tObj6Gear_t(Car_tObj *carObj,Gear_t gear)
{
  if (2 < (int)gear) {
    return (&carObj->aiShiftTimer)[gear + ~GEAR_FIRST];
  }
  return 0;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AIPhysic_CalcAcceleration__FP8Car_tObji(struct Car_tObj *carObj /*$s3*/, int speed /*$a1*/)
 // line 326, offset 0x800696b0
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x800696B0
		// Variables:
	// 		int accelEntry; // $a1
	// 		int acceleration; // $s0
	// 		int absSpeed; // $s2
	// 		int speedUpAcc; // $a1

		/* begin block 1.1 */
			// Start line: 337
			// Start offset: 0x800696E4

			/* begin block 1.1.1 */
				// Start line: 338
				// Start offset: 0x80069700
				// Variables:
			// 		int normalTopCap; // $s1
			// 		int upgradeTopCap; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80069758
			// End Line: 347
		/* end block 1.1 */
		// End offset: 0x80069758
		// End Line: 347
	/* end block 1 */
	// End offset: 0x80069974
	// End Line: 398

int AIPhysic_CalcAcceleration__FP8Car_tObji(Car_tObj *carObj,int speed)
{
  int acc;
  int iVar1;
  AIDataRecord_CurveSpeedTable_t *pAVar2;
  Car_tObj *pCVar3;
  int iVar4;
  
  if (speed < 0) {
    speed = -speed;
  }
  acc = 0;
  if (carObj->speed < 1) {
    acc = carObj->carInfo->carType;
    if (acc < 0x16) {
      iVar4 = *(int *)(&Cars_topSpeedCap + acc * 4);
      acc = fixedmult(iVar4,carObj->fallBehindCar);
      iVar1 = fixedmult(acc,carObj->rampDesiredLatPos);
      if (iVar1 < speed) {
        return 0;
      }
      if (acc < speed) {
        return 0;
      }
      if (iVar4 < speed) {
        speed = iVar4 + -0x238e3;
      }
    }
    if (speed < 0) {
      speed = speed + 0xffff;
    }
    speed = speed >> 0x10;
    if (0x6f < speed) {
      speed = 0x6f;
    }
    if (speed < 0) {
      speed = 0;
    }
    iVar1 = Get__23AIDataRecord_AccTable_ti
                      (*(AIDataRecord_AccTable_t **)(carObj->accTable + 100),speed);
    acc = carObj->timeOffRoad;
    if (acc != 0x10000) {
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xff;
      }
      if (acc < 0) {
        acc = acc + 0xff;
      }
      iVar1 = (iVar1 >> 8) * (acc >> 8);
    }
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    pCVar3 = carObj->nextAIRacer;
    if ((int)pCVar3 < 0) {
      pCVar3 = (Car_tObj *)((int)(pCVar3->N).orientMat.m + 0xf);
    }
    acc = (iVar1 >> 8) * ((int)pCVar3 >> 8);
    if (0 < DAT_80113234) {
      if (acc < 0) {
        acc = acc + 0xff;
      }
      acc = (acc >> 8) * 0xe6;
    }
    if ((carObj->carFlags & 0x20U) != 0) {
      if (acc < 0) {
        acc = acc + 0xff;
      }
      pAVar2 = carObj->curveSpeedTable;
      if ((int)pAVar2 < 0) {
        pAVar2 = (AIDataRecord_CurveSpeedTable_t *)(pAVar2[2].AIDataRecord_t.name_ + 0x37);
      }
      acc = (acc >> 8) * ((int)pAVar2 >> 8);
    }
    if ((((GameSetup_gData == 1) || (GameSetup_gData == 5)) &&
        (((uRam00000260 & 0x200) != 0 ||
         ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))) &&
       ((carObj->carFlags & 8U) != 0)) {
      if (acc < 0) {
        acc = acc + 0xff;
      }
      iVar1 = *(int *)(&AITune_BTCPerpAccMults + DAT_801131f4 * 4);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xff;
      }
      acc = (acc >> 8) * (iVar1 >> 8);
    }
    acc = AIPhysic_ModifyAccelerationAccordingToScript__FP8Car_tObji(carObj,acc);
    iVar1 = 
            AISpeeds_SuperDuperSpeedUpTheCarsAtTheStartBecauseWeCannotActuallyHandleRenderingTheseCars__FP8Car_tObj
                      (carObj);
    if (iVar1 != 0x10000) {
      acc = fixedmult(acc);
    }
  }
  return acc;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AIPhysic_ModifyAccelerationAccordingToScript__FP8Car_tObji(struct Car_tObj *carObj /*$a0*/, int acc /*$s0*/)
 // line 404, offset 0x80069990
	/* begin block 1 */
		// Start line: 405
		// Start offset: 0x80069990
	/* end block 1 */
	// End offset: 0x800699D4
	// End Line: 416

int AIPhysic_ModifyAccelerationAccordingToScript__FP8Car_tObji(Car_tObj *carObj,int acc)
{
  int iVar1;
  
  iVar1 = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&carObj->script,AISCRIPT_AIREACTION_SPEED_BURST);
  if (iVar1 != -1) {
    if (acc < 0) {
      acc = acc + 0xff;
    }
    acc = (acc >> 8) * 0x180;
  }
  return acc;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AIPhysic_CalcDeceleration__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 425, offset 0x800699e8
	/* begin block 1 */
		// Start line: 426
		// Start offset: 0x800699E8
		// Variables:
	// 		int d; // $v1

		/* begin block 1.1 */
			// Start line: 426
			// Start offset: 0x800699E8
			// Variables:
		// 		struct AIPhysic_BrakeInfo *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 426
				// Start offset: 0x800699E8
			/* end block 1.1.1 */
			// End offset: 0x800699E8
			// End Line: 426
		/* end block 1.1 */
		// End offset: 0x800699E8
		// End Line: 426
	/* end block 1 */
	// End offset: 0x80069A2C
	// End Line: 432

int AIPhysic_CalcDeceleration__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int iVar2;
  
  iVar2 = carObj->rampDesiredLatPos;
  iVar1 = *(int *)(*(int *)(carObj->accTable + 0x68) + 0x80);
  if (0x10000 < iVar2) {
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar1 = (iVar1 >> 8) * (iVar2 >> 8);
  }
  return iVar1;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_CheckDesiredDirection__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 440, offset 0x80069a34
	/* begin block 1 */
		// Start line: 441
		// Start offset: 0x80069A34
		// Variables:
	// 		int turnAroundSpeed; // $a1
	/* end block 1 */
	// End offset: 0x80069A74
	// End Line: 450

void AIPhysic_CheckDesiredDirection__FP8Car_tObj(Car_tObj *carObj)
{
  if (carObj->desiredDirection < 0x8e38e) {
    (carObj->speechInfo).speechSource = (carObj->speechInfo).speechIntensity;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_HandleSignalling__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 458, offset 0x80069a7c
	/* begin block 1 */
		// Start line: 459
		// Start offset: 0x80069A7C
		// Variables:
	// 		int lDes; // $v1
	// 		int lPos; // $a1
	/* end block 1 */
	// End offset: 0x80069AE8
	// End Line: 480

void AIPhysic_HandleSignalling__FP8Car_tObj(Car_tObj *carObj)
{
  ushort uVar1;
  int iVar2;
  
  if ((carObj->carFlags & 0x10U) != 0) {
    iVar2 = (carObj->speechInfo).playerCarIndex;
    if (iVar2 < carObj->desiredSpeed + -0x40000) {
      uVar1 = (carObj->render).palCopyNum[0xb];
      (carObj->render).palCopyNum[0xc] = 0;
      (carObj->render).palCopyNum[0xb] = uVar1 | 0x80;
      return;
    }
    if (carObj->desiredSpeed + 0x40000 < iVar2) {
      uVar1 = (carObj->render).palCopyNum[0xc];
      (carObj->render).palCopyNum[0xb] = 0;
      (carObj->render).palCopyNum[0xc] = uVar1 | 0x80;
      return;
    }
    (carObj->render).palCopyNum[0xb] = 0;
    (carObj->render).palCopyNum[0xc] = 0;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_HandleWipeoutTimer__FP8Car_tObj(struct Car_tObj *carObj /*$a3*/)
 // line 493, offset 0x80069af0
	/* begin block 1 */
		// Start line: 494
		// Start offset: 0x80069AF0
	/* end block 1 */
	// End offset: 0x80069B7C
	// End Line: 507

void AIPhysic_HandleWipeoutTimer__FP8Car_tObj(Car_tObj *carObj)
{
  uint uVar1;
  
  if (((carObj->carFlags & 8U) != 0) && (carObj->max_aa < 0)) {
    randtemp = fastRandom;
    uVar1 = fastRandom >> 8;
    fastRandom = fastRandom & 0xffff;
    carObj->max_aa =
         carObj->personality->minimumBetweenWipeoutTicks +
         (uVar1 & 0xffff & carObj->personality->randomBetweenWipeoutTicks);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_Main__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 529, offset 0x80069b84
	/* begin block 1 */
		// Start line: 530
		// Start offset: 0x80069B84
		// Variables:
	// 		char useCoolPhysics; // $s1
	/* end block 1 */
	// End offset: 0x80069E00
	// End Line: 672

void AIPhysic_Main__FP8Car_tObj(Car_tObj *carObj)
{
  int velScale;
  uint uVar1;
  
  velScale = Sched_ExecuteCheck__FiiiiPiN24i
                       (1,1,(carObj->N).distToPlayer,(carObj->N).objID,(int *)&AIPhysic_time,
                        &AIPhysic_elapsedTime,&AIPhysic_iTime,carObj->wipeOutStartTick);
  if (velScale == 0) {
    return;
  }
  if ((carObj->carFlags & 2U) != 0) {
    AIWorld_CalcSpeed__FP8Car_tObj(carObj);
  }
  AIPhysic_CheckDesiredDirection__FP8Car_tObj(carObj);
  AIPhysic_CheckForGripReduction__FP8Car_tObj(carObj);
  AIPhysic_HandleSignalling__FP8Car_tObj(carObj);
  velScale = AIWorld_CalcLateralVelocity__FP8Car_tObj(carObj);
  carObj->driveDirectionReverseTime = velScale;
  uVar1 = AIPhysics_UseCoolPhysics__FP8Car_tObj(carObj);
  AIPhysic_CalculateRampedDesiredLatPos__FP8Car_tObj9eRampType(carObj,(uint)((uVar1 & 0xff) != 0));
  if ((carObj->desiredLatPos & 4U) != 0) {
    return;
  }
  if ((carObj->N).active == '\0') {
    return;
  }
  if (simGlobal != 1) {
    AIPhysic_RevEngine__FP8Car_tObj(carObj);
    return;
  }
  AIPhysic_HandleShifting__FP8Car_tObj(carObj);
  if ((carObj->N).flightTime != 0) {
    velScale = 0xfae1;
    if ((carObj->carFlags & 0x400U) == 0) {
      return;
    }
    goto LAB_80069dc0;
  }
  if (carObj->desiredDirection < 0x40000) {
    (carObj->linearVel_ch).z = 0;
    carObj->rearSkid = 0;
    carObj->frontSkid = 0;
  }
  if (((carObj->N).flightTime != 0) || (0x4ccb < (carObj->N).orientMat.m[4])) {
    if (carObj->blowout != 0) {
      velScale = 0xfd70;
      goto LAB_80069dc0;
    }
    if (carObj->pullOver != 0) {
      if (carObj->desiredDirection < 0x238e3) {
        AIPhysic_StopCar__FP8Car_tObjii(carObj,0xe666,0xe666);
        return;
      }
      if (carObj->desiredDirection < 0x8e38e) {
        velScale = 0xf5c2;
        goto LAB_80069dc0;
      }
    }
    if (((carObj->carFlags & 1U) != 0) && ((carObj->stats).finishType == 2)) {
      velScale = carObj->carInLane;
      if (velScale < 0) {
        velScale = -velScale;
      }
      if (velScale < 0x20000) goto LAB_80069dbc;
    }
    if ((carObj->speechInfo).copCarIndex != 0) {
      if ((uVar1 & 0xff) == 0) {
        AIPhysic_SimplePhysics__FP8Car_tObj(carObj);
      }
      else {
        AIPhysic_CoolPhysics__FP8Car_tObj(carObj);
      }
      AIPhysic_CheckForBadPosition__FP8Car_tObj(carObj);
      AIPhysic_HandleWipeoutTimer__FP8Car_tObj(carObj);
      return;
    }
  }
LAB_80069dbc:
  velScale = 0xf0a3;
LAB_80069dc0:
  AIPhysic_StopCar__FP8Car_tObjii(carObj,velScale,0xfae1);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_CheckForBadPosition__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 681, offset 0x80069e14
	/* begin block 1 */
		// Start line: 682
		// Start offset: 0x80069E14
		// Variables:
	// 		int badSpeed; // $a3
	// 		int badRoadPos; // $t0
	/* end block 1 */
	// End offset: 0x80069EDC
	// End Line: 721

void AIPhysic_CheckForBadPosition__FP8Car_tObj(Car_tObj *carObj)
{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  bVar1 = false;
  bVar2 = false;
  if (((0x730000 < (carObj->N).linearVel.z) || (0x730000 < (carObj->N).linearVel.x)) ||
     ((0x730000 < (carObj->N).speedXZ && ((carObj->N).simOptz == '\0')))) {
    bVar1 = true;
  }
  iVar3 = (int)(carObj->N).simRoadInfo.slice * 0x20;
  if ((carObj->desiredSpeed < (int)*(short *)(iVar3 + 0x18) * -0x100 + -0x230000) ||
     ((int)*(short *)(iVar3 + 0x1a) * 0x100 + 0x230000 < carObj->desiredSpeed)) {
    bVar2 = true;
  }
  if ((bVar1) || (bVar2)) {
    Cars_ResetCollidedCars__FP8Car_tObjii(carObj,1,0);
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AIPhysics_UseCoolPhysics__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 732, offset 0x80069eec
	/* begin block 1 */
		// Start line: 733
		// Start offset: 0x80069EEC
	/* end block 1 */
	// End offset: 0x80069F28
	// End Line: 739

int AIPhysics_UseCoolPhysics__FP8Car_tObj(Car_tObj *carObj)
{
  byte bVar1;
  
  if ((carObj->carFlags & 0x800U) == 0) {
    bVar1 = (carObj->N).simOptz;
    if ((bVar1 != 0) && (((carObj->carFlags & 0x20U) == 0 || (1 < bVar1)))) {
      return 0;
    }
  }
  return 1;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_SimplePhysics__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 757, offset 0x80069f30
	/* begin block 1 */
		// Start line: 758
		// Start offset: 0x80069F30
		// Variables:
	// 		struct coorddef forward; // stack offset -48
	// 		struct coorddef right; // stack offset -32
	// 		int speed; // $a1
	// 		int sliceLookAhead; // $a0

		/* begin block 1.1 */
			// Start line: 767
			// Start offset: 0x80069F74

			/* begin block 1.1.1 */
				// Start line: 768
				// Start offset: 0x80069FA4
			/* end block 1.1.1 */
			// End offset: 0x80069FE8
			// End Line: 775
		/* end block 1.1 */
		// End offset: 0x80069FE8
		// End Line: 775
	/* end block 1 */
	// End offset: 0x8006A284
	// End Line: 816

void AIPhysic_SimplePhysics__FP8Car_tObj(Car_tObj *carObj)
{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((carObj->desiredLatPos & 0x10U) != 0) {
    carObj->aCarWRTRoad = carObj->desiredSpeed;
    carObj->desiredLatPos = carObj->desiredLatPos & 0xffffffef;
  }
  if (((((carObj->carFlags & 8U) != 0) && (carObj->max_aa < 0)) &&
      (iVar2 = Get__25AIDataRecord_TrackCurve_ti
                         ((AIDataRecord_TrackCurve_t *)0x0,(int)(carObj->N).simRoadInfo.slice),
      0x1e < iVar2)) && (0x1638e3 < carObj->desiredDirection)) {
    carObj->aiGlue = 0x180;
  }
  AIPhysic_SimplePhysics_LongVel__FP8Car_tObj(carObj);
  AIPhysic_SimplePhysics_LatVel__FP8Car_tObj(carObj);
  iVar3 = (carObj->N).orientMat.m[6];
  iVar4 = (carObj->N).orientMat.m[7];
  iVar6 = (carObj->N).orientMat.m[8];
  iVar5 = (carObj->N).roadMatrix.m[1];
  iVar7 = (carObj->N).roadMatrix.m[2];
  iVar2 = fixedmult(carObj->aiShiftDuration,(carObj->N).roadMatrix.m[0]);
  iVar5 = fixedmult(carObj->aiShiftDuration,iVar5);
  iVar7 = fixedmult(carObj->aiShiftDuration,iVar7);
  iVar3 = fixedmult(carObj->carInLane * (carObj->speechInfo).speechSource,iVar3);
  iVar4 = fixedmult(carObj->carInLane * (carObj->speechInfo).speechSource,iVar4);
  iVar6 = fixedmult(carObj->carInLane * (carObj->speechInfo).speechSource,iVar6);
  iVar8 = carObj->aiShiftDuration * (carObj->speechInfo).speechSource;
  (carObj->N).linearVel.x = iVar3 + iVar2;
  iVar2 = carObj->desiredDirection;
  (carObj->N).linearVel.y = iVar4 + iVar5;
  (carObj->linearVel_ch).z = iVar2;
  (carObj->N).linearVel.z = iVar6 + iVar7;
  iVar2 = iVar8;
  if (iVar8 < 0) {
    iVar2 = -iVar8;
  }
  (carObj->linearVel_ch).x = iVar8;
  iVar5 = iVar2;
  if (iVar2 < 0) {
    iVar5 = iVar2 + 0xff;
  }
  if ((iVar5 >> 8) * 0x19 < iVar2) {
    carObj->slide = 0x8000;
  }
  else {
    carObj->slide = 0;
  }
  iVar2 = carObj->desiredDirection;
  (carObj->N).angularVel.x = 0;
  (carObj->N).angularVel.y = 0;
  (carObj->N).angularVel.z = 0;
  if (0x30000 < iVar2) {
    Newton_CopyRoadMatrixToOrientMat__FP13BO_tNewtonObji
              ((BO_tNewtonObj *)carObj,(uint)(~(carObj->speechInfo).speechSource == 0));
  }
  iVar2 = carObj->carInLane;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar5 = (iVar2 / 6 + (iVar2 >> 0x1f) >> 0x10) - (iVar2 >> 0x1f);
  if (((-1 < iVar5) && (iVar5 < DAT_8010dc78 / 6)) && (-1 < iVar2)) {
    iVar5 = DAT_8010dc78 / 6;
  }
  if (DAT_8010dc7c / 6 < iVar5) {
    iVar5 = DAT_8010dc7c / 6;
  }
  iVar5 = iVar5 * (carObj->speechInfo).speechSource;
  if (iVar5 < 0) {
    sVar1 = (carObj->N).simRoadInfo.slice;
  }
  else {
    sVar1 = (carObj->N).simRoadInfo.slice;
  }
  carObj->speedNitrous = (int)sVar1 + iVar5;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_SimplePhysics_LongVel__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 825, offset 0x8006a29c
	/* begin block 1 */
		// Start line: 826
		// Start offset: 0x8006A29C
		// Variables:
	// 		int acceleration; // $s1
	// 		int deceleration; // $a1
	/* end block 1 */
	// End offset: 0x8006A5E0
	// End Line: 890

void AIPhysic_SimplePhysics_LongVel__FP8Car_tObj(Car_tObj *carObj)
{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  speechIntensityType sVar7;
  speechIntensityType sVar8;
  
  iVar4 = AIPhysic_CalcAcceleration__FP8Car_tObji(carObj,carObj->carInLane);
  iVar5 = AIPhysic_CalcDeceleration__FP8Car_tObj(carObj);
  if (carObj->pullOver != 0) {
    (carObj->speechInfo).copCarIndex = 0;
  }
  if (0 < carObj->aiGlue) {
    iVar6 = (carObj->speechInfo).copCarIndex;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 3;
    }
    (carObj->speechInfo).copCarIndex = iVar6 >> 2;
  }
  sVar7 = (carObj->speechInfo).speechSource;
  if (sVar7 == ~SPEECH_INTENSITY_LOW) {
    if ((carObj->carInLane < (carObj->speechInfo).copCarIndex) ||
       ((carObj->speechInfo).speechIntensity != ~SPEECH_INTENSITY_LOW)) {
      bVar1 = (carObj->control).brakeLevel;
      (carObj->linearAcc_ch).z = iVar5;
      if (bVar1 < 0xff) {
        (carObj->control).brakeLevel = bVar1;
      }
      else {
        (carObj->control).brakeLevel = -1;
      }
      if (3 < (byte)(carObj->control).brakeLevel) {
        (carObj->control).desiredBrakeLevel = '\x01';
      }
      iVar4 = carObj->carInLane;
      sVar8 = (carObj->speechInfo).speechSource;
      sVar7 = (carObj->speechInfo).speechIntensity;
      carObj->carInLane = iVar4;
      if (sVar8 != sVar7) {
        return;
      }
      iVar5 = (carObj->speechInfo).copCarIndex;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
      goto LAB_8006a5dc;
    }
    cVar2 = (carObj->control).brakeLevel;
    carObj->carInLane = carObj->carInLane;
    if (cVar2 == '\0') {
      (carObj->control).brakeLevel = '\0';
    }
    else {
      (carObj->control).brakeLevel = cVar2;
    }
    if ((carObj->control).brakeLevel == '\0') {
      (carObj->control).desiredBrakeLevel = '\0';
    }
    iVar6 = carObj->carInLane;
    iVar5 = (carObj->speechInfo).copCarIndex;
    (carObj->linearAcc_ch).z = iVar4;
    bVar3 = iVar6 < iVar5;
  }
  else {
    if (((carObj->speechInfo).copCarIndex < carObj->carInLane) ||
       (sVar7 != (carObj->speechInfo).speechIntensity)) {
      bVar1 = (carObj->control).brakeLevel;
      (carObj->linearAcc_ch).z = iVar5;
      if (bVar1 < 0xff) {
        (carObj->control).brakeLevel = bVar1;
      }
      else {
        (carObj->control).brakeLevel = -1;
      }
      if (3 < (byte)(carObj->control).brakeLevel) {
        (carObj->control).desiredBrakeLevel = '\x01';
      }
      iVar4 = carObj->carInLane;
      sVar8 = (carObj->speechInfo).speechSource;
      sVar7 = (carObj->speechInfo).speechIntensity;
      carObj->carInLane = iVar4;
      if (sVar8 != sVar7) {
        return;
      }
      iVar5 = (carObj->speechInfo).copCarIndex;
      if (iVar5 < iVar4) {
        iVar5 = iVar4;
      }
      goto LAB_8006a5dc;
    }
    cVar2 = (carObj->control).brakeLevel;
    carObj->carInLane = carObj->carInLane;
    if (cVar2 == '\0') {
      (carObj->control).brakeLevel = '\0';
    }
    else {
      (carObj->control).brakeLevel = cVar2;
    }
    if ((carObj->control).brakeLevel == '\0') {
      (carObj->control).desiredBrakeLevel = '\0';
    }
    iVar6 = carObj->carInLane;
    iVar5 = (carObj->speechInfo).copCarIndex;
    (carObj->linearAcc_ch).z = iVar4;
    bVar3 = iVar5 < iVar6;
  }
  if (!bVar3) {
    return;
  }
LAB_8006a5dc:
  carObj->carInLane = iVar5;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_SimplePhysics_LatVel__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 902, offset 0x8006a5f4
	/* begin block 1 */
		// Start line: 903
		// Start offset: 0x8006A5F4
		// Variables:
	// 		int off; // $s0
	// 		struct coorddef right; // stack offset -32

		/* begin block 1.1 */
			// Start line: 917
			// Start offset: 0x8006A62C

			/* begin block 1.1.1 */
				// Start line: 926
				// Start offset: 0x8006A6C8
				// Variables:
			// 		int carSpeed; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8006A704
			// End Line: 933
		/* end block 1.1 */
		// End offset: 0x8006A704
		// End Line: 933
	/* end block 1 */
	// End offset: 0x8006A704
	// End Line: 933

void AIPhysic_SimplePhysics_LatVel__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = carObj->desiredDirection;
  iVar4 = 0;
  if (0x30000 < iVar1) {
    iVar4 = carObj->aCarWRTRoad - carObj->desiredSpeed;
    iVar1 = carObj->desiredDirection;
  }
  if (iVar1 < 0x190001) {
    iVar1 = carObj->carInLane;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    carObj->aiShiftDuration = iVar4;
    if (iVar4 < -iVar1) {
      carObj->aiShiftDuration = -iVar1;
    }
    else {
      if (iVar1 < iVar4) {
        carObj->aiShiftDuration = iVar1;
      }
    }
  }
  else {
    iVar2 = (carObj->N).roadMatrix.m[1];
    iVar3 = (carObj->N).roadMatrix.m[2];
    iVar1 = fixedmult(iVar4,(carObj->N).roadMatrix.m[0]);
    iVar2 = fixedmult(iVar4,iVar2);
    iVar4 = fixedmult(iVar4,iVar3);
    (carObj->N).position.x = (carObj->N).position.x + iVar1;
    (carObj->N).position.y = (carObj->N).position.y + iVar2;
    iVar1 = (carObj->N).position.z;
    carObj->aiShiftDuration = 0;
    (carObj->N).position.z = iVar1 + iVar4;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_CoolPhysics__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 959, offset 0x8006a718
	/* begin block 1 */
		// Start line: 960
		// Start offset: 0x8006A718
	/* end block 1 */
	// End offset: 0x8006A7B4
	// End Line: 987

void AIPhysic_CoolPhysics__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  
  carObj->desiredLatPos = carObj->desiredLatPos | 0x10;
  AIPhysic_HandleDirection__FP8Car_tObj(carObj);
  if (((int)((carObj->speechInfo).speechSource * carObj->carInLane) < 0) &&
     ((carObj->desiredVector).z != -1)) {
    carObj->aCarWRTRoad = 0;
  }
  iVar1 = AIPhysic_HitWallCheck__FP8Car_tObj(carObj);
  if (iVar1 != 0) {
    AIPhysic_ChangeDirection__FP8Car_tObji(carObj,0x40);
  }
  AIPhysic_Preperation__FP8Car_tObj(carObj);
  iVar1 = AIPhysic_CheckIfOutOfControl__FP8Car_tObj(carObj);
  if (iVar1 == 0) {
    AIPhysic_InControlPhysics__FP8Car_tObj(carObj);
  }
  else {
    AIPhysic_OutOfControlPhysics__FP8Car_tObj(carObj);
  }
  AIPhysic_FinishUp__FP8Car_tObj(carObj);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_HandleDirection__FP8Car_tObj(struct Car_tObj *carObj /*$a1*/)
 // line 996, offset 0x8006a7cc
	/* begin block 1 */
		// Start line: 997
		// Start offset: 0x8006A7CC
	/* end block 1 */
	// End offset: 0x8006A8AC
	// End Line: 1018

void AIPhysic_HandleDirection__FP8Car_tObj(Car_tObj *carObj)
{
  if ((carObj->desiredVector).z == -1) {
    if (((carObj->desiredSpeed < carObj->aCarWRTRoad + -0xa0000) &&
        (0 < carObj->driveDirectionReverseTime)) ||
       ((carObj->aCarWRTRoad + 0xa0000 < carObj->desiredSpeed &&
        (carObj->driveDirectionReverseTime < 0)))) {
      carObj->aCarWRTDesired = -0x18;
    }
    if ((carObj->desiredVector).y < -carObj->aCarWRTDesired) {
      (carObj->desiredVector).z = 1;
      carObj->aCarWRTDesired = 0;
    }
    if (0x140000 < (carObj->speechInfo).copCarIndex) {
      (carObj->speechInfo).copCarIndex = 0x140000;
    }
    if (0x140000 < -(carObj->speechInfo).copCarIndex) {
      (carObj->speechInfo).copCarIndex = -0x140000;
    }
    carObj->aCarWRTRoad = 0;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_Preperation__FP8Car_tObj(struct Car_tObj *carObj /*$s2*/)
 // line 1026, offset 0x8006a8b4
	/* begin block 1 */
		// Start line: 1027
		// Start offset: 0x8006A8B4
		// Variables:
	// 		struct coorddef forward; // stack offset -32
	// 		int aCar; // $s0
	// 		int aCarWRTDesired; // $v1
	// 		int aDesired; // $a0
	/* end block 1 */
	// End offset: 0x8006AB00
	// End Line: 1068

void AIPhysic_Preperation__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = fixedmult((carObj->N).linearVel.x,(carObj->N).orientMat.m[0]);
  iVar2 = fixedmult((carObj->N).linearVel.y,(carObj->N).orientMat.m[1]);
  iVar3 = fixedmult((carObj->N).linearVel.z,(carObj->N).orientMat.m[2]);
  iVar4 = (carObj->N).linearVel.x;
  iVar5 = (carObj->N).orientMat.m[3];
  (carObj->linearVel_ch).x = iVar1 + iVar2 + iVar3;
  iVar1 = fixedmult(iVar4,iVar5);
  iVar2 = fixedmult((carObj->N).linearVel.y,(carObj->N).orientMat.m[4]);
  iVar3 = fixedmult((carObj->N).linearVel.z,(carObj->N).orientMat.m[5]);
  iVar4 = (carObj->N).linearVel.x;
  iVar5 = (carObj->N).orientMat.m[6];
  (carObj->linearVel_ch).y = iVar1 + iVar2 + iVar3;
  iVar1 = fixedmult(iVar4,iVar5);
  iVar2 = fixedmult((carObj->N).linearVel.y,(carObj->N).orientMat.m[7]);
  iVar3 = fixedmult((carObj->N).linearVel.z,(carObj->N).orientMat.m[8]);
  iVar4 = (carObj->N).angularVel.x;
  iVar5 = (carObj->N).orientMat.m[0];
  (carObj->linearVel_ch).z = iVar1 + iVar2 + iVar3;
  iVar1 = fixedmult(iVar4,iVar5);
  iVar2 = fixedmult((carObj->N).angularVel.y,(carObj->N).orientMat.m[1]);
  iVar3 = fixedmult((carObj->N).angularVel.z,(carObj->N).orientMat.m[2]);
  iVar4 = (carObj->N).angularVel.x;
  iVar5 = (carObj->N).orientMat.m[3];
  (carObj->angularVel_ch).x = iVar1 + iVar2 + iVar3;
  iVar1 = fixedmult(iVar4,iVar5);
  iVar2 = fixedmult((carObj->N).angularVel.y,(carObj->N).orientMat.m[4]);
  iVar3 = fixedmult((carObj->N).angularVel.z,(carObj->N).orientMat.m[5]);
  iVar4 = (carObj->N).angularVel.x;
  iVar5 = (carObj->N).orientMat.m[6];
  (carObj->angularVel_ch).y = iVar1 + iVar2 + iVar3;
  iVar2 = fixedmult(iVar4,iVar5);
  iVar3 = fixedmult((carObj->N).angularVel.y,(carObj->N).orientMat.m[7]);
  iVar4 = fixedmult((carObj->N).angularVel.z,(carObj->N).orientMat.m[8]);
  iVar1 = (carObj->linearVel_ch).x;
  (carObj->angularVel_ch).z = iVar2 + iVar3 + iVar4;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = iVar1 + 0xff;
  }
  if ((iVar2 >> 8) * 0x19 < iVar1) {
    carObj->slide = 0x8000;
  }
  else {
    carObj->slide = 0;
  }
  iVar1 = (carObj->N).orientMat.m[6];
  iVar2 = (carObj->N).orientMat.m[8];
  if ((carObj->desiredVector).z != 1) {
    iVar1 = -iVar1;
    iVar2 = -iVar2;
  }
  iVar1 = intatan(iVar1,iVar2);
  (carObj->angularAcc_ch).x = iVar1;
  AIPhysic_GetDesiredVector__FP8Car_tObj(carObj);
  iVar2 = intatan(carObj->brakeInfo,carObj->barrierThinkHarder);
  iVar1 = iVar1 - iVar2;
  iVar3 = iVar1 + 0x400;
  if (-0x201 < iVar1) {
    carObj->laneIndex = iVar1;
    if (iVar1 < 0x201) goto LAB_8006ab00;
    iVar3 = iVar1 + -0x400;
  }
  carObj->laneIndex = iVar3;
LAB_8006ab00:
  (carObj->angularAcc_ch).y = iVar2;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AIPhysic_CalculateRoadPosition__FP8coorddefi(struct coorddef *pos /*$a0*/, int slice /*$a1*/)
 // line 1075, offset 0x8006ab1c
	/* begin block 1 */
		// Start line: 1076
		// Start offset: 0x8006AB1C
		// Variables:
	// 		struct coorddef centerBack; // stack offset -48
	// 		struct coorddef carRelative; // stack offset -32
	// 		struct coorddef right; // stack offset -16
	/* end block 1 */
	// End offset: 0x8006AC24
	// End Line: 1088

int AIPhysic_CalculateRoadPosition__FP8coorddefi(coorddef *pos,int slice)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = (int *)(slice * 0x20);
  iVar5 = pos->x - *piVar3;
  iVar6 = pos->y - piVar3[1];
  iVar7 = pos->z - piVar3[2];
  iVar1 = (int)*(char *)((int)piVar3 + 0x12) * 0x200;
  iVar2 = (int)*(char *)((int)piVar3 + 0x13) * 0x200;
  iVar4 = (int)*(char *)(piVar3 + 5) * 0x200;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  return (iVar1 >> 8) * (iVar5 >> 8) + (iVar2 >> 8) * (iVar6 >> 8) + (iVar4 >> 8) * (iVar7 >> 8);


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_GetDesiredVector__FP8Car_tObj(struct Car_tObj *carObj /*$s2*/)
 // line 1099, offset 0x8006ac3c
	/* begin block 1 */
		// Start line: 1100
		// Start offset: 0x8006AC3C
		// Variables:
	// 		int speed; // $s0
	// 		int roadWidth; // $v0
	// 		int sliceLookAhead; // $s1
	// 		int dirCorrectedSliceLookAhead; // $a1
	// 		struct coorddef fCPoint; // stack offset -72
	// 		struct coorddef fPoint; // stack offset -56
	// 		struct coorddef right; // stack offset -40
	// 		int futureBend; // $a0
	// 		int futureRoadPosition; // $a0
	// 		int numReductions; // $s4
	// 		int goodVector; // $a0
	// 		int thisSlice; // $s3

		/* begin block 1.1 */
			// Start line: 1193
			// Start offset: 0x8006AF18

			/* begin block 1.1.1 */
				// Start line: 1200
				// Start offset: 0x8006AF80

				/* begin block 1.1.1.1 */
					// Start line: 1216
					// Start offset: 0x8006B104
					// Variables:
				// 		int checkSide; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x8006B164
				// End Line: 1252
			/* end block 1.1.1 */
			// End offset: 0x8006B170
			// End Line: 1257
		/* end block 1.1 */
		// End offset: 0x8006B1B8
		// End Line: 1264
	/* end block 1 */
	// End offset: 0x8006B204
	// End Line: 1271

void AIPhysic_GetDesiredVector__FP8Car_tObj(Car_tObj *carObj)
{
  bool bVar1;
  int lookAhead;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int slice;
  int iVar6;
  coorddef local_38;
  int local_28;
  int local_24;
  int local_20;
  
  slice = (int)(carObj->N).simRoadInfo.slice;
  iVar6 = 0;
  if (((carObj->driveDirection != 0) || (carObj->driveDirectionTimer != 0)) || (carObj->aCar != 0))
  {
    AIPhysic_TargetedGetDesiredVector__FP8Car_tObj(carObj);
    return;
  }
  lookAhead = carObj->carInLane;
  if (lookAhead < 0) {
    lookAhead = -lookAhead;
  }
  iVar2 = fixedmult(lookAhead,0xb333);
  iVar5 = iVar2 + 0x30000 >> 0x1f;
  iVar5 = ((iVar2 + 0x30000) / 6 + iVar5 >> 0x10) - iVar5;
  if (((-1 < iVar5) && (iVar5 < DAT_8010dc78 / 6)) && (-1 < lookAhead)) {
    iVar5 = DAT_8010dc78 / 6;
  }
  if (DAT_8010dc7c / 6 < iVar5) {
    iVar5 = DAT_8010dc7c / 6;
  }
  lookAhead = iVar5 * (carObj->desiredVector).z * (carObj->speechInfo).speechSource;
  carObj->speedNitrous = slice + lookAhead;
  lookAhead = AIWorld_CalcRoadBend__FP8Car_tObji(carObj,lookAhead);
  iVar2 = carObj->speedNitrous * 0x20;
  if (lookAhead < 0) {
    lookAhead = -lookAhead;
  }
  if ((uint)*(byte *)(iVar2 + 0x1e) * 0x8000 * (uint)(*(byte *)(iVar2 + 0x1d) >> 4) +
      (uint)*(byte *)(iVar2 + 0x1f) * 0x8000 * ((uint)*(byte *)(iVar2 + 0x1d) & 0xf) < 0x120000) {
    if (0xf333 < lookAhead) {
      iVar2 = iVar5 * 0xca3d;
      iVar5 = iVar2 >> 0x10;
      if (iVar2 < 0) {
        iVar5 = iVar2 + 0xffff >> 0x10;
      }
    }
    if (lookAhead < 0xe667) {
      if (lookAhead < 0xcccd) {
        if (lookAhead < 0xc001) goto LAB_8006af18;
        lookAhead = iVar5 * 0xf333;
      }
      else {
        lookAhead = iVar5 * 0xe666;
      }
    }
    else {
      lookAhead = iVar5 * 0xd70a;
    }
    iVar5 = lookAhead >> 0x10;
    if (lookAhead < 0) {
      iVar5 = lookAhead + 0xffff >> 0x10;
    }
  }
LAB_8006af18:
  do {
    carObj->speedNitrous =
         slice + iVar5 * (carObj->desiredVector).z * (carObj->speechInfo).speechSource;
    piVar3 = (int *)(carObj->speedNitrous * 0x20);
    lookAhead = *piVar3;
    iVar2 = piVar3[1];
    iVar4 = piVar3[2];
    local_28 = (int)*(char *)(carObj->speedNitrous * 0x20 + 0x12) << 9;
    local_24 = (int)*(char *)(carObj->speedNitrous * 0x20 + 0x13) << 9;
    local_20 = (int)*(char *)(carObj->speedNitrous * 0x20 + 0x14) << 9;
    local_38.x = fixedmult(carObj->aCarWRTRoad);
    local_38.y = fixedmult(carObj->aCarWRTRoad,local_24);
    local_38.z = fixedmult(carObj->aCarWRTRoad,local_20);
    local_38.x = local_38.x + lookAhead;
    local_38.z = local_38.z + iVar4;
    local_38.y = local_38.y + iVar2;
    lookAhead = AIPhysic_CalculateRoadPosition__FP8coorddefi(&local_38,slice);
    iVar2 = slice * 0x20;
    if ((((int)((uint)*(byte *)(iVar2 + 0x1f) * 0x8000 * ((uint)*(byte *)(iVar2 + 0x1d) & 0xf)) <
          lookAhead) && (carObj->desiredSpeed < lookAhead)) ||
       ((lookAhead <
         (int)-((uint)*(byte *)(iVar2 + 0x1e) * 0x8000 * (uint)(*(byte *)(iVar2 + 0x1d) >> 4)) &&
        (lookAhead < carObj->desiredSpeed)))) {
      iVar2 = 1;
      if (lookAhead < carObj->desiredSpeed) {
        iVar2 = -1;
      }
      lookAhead = AIWorld_LaneIndex__Fii(slice,carObj->desiredSpeed + iVar2 * 0x80000);
      lookAhead = AIWorld_IsDriveableLane__Fii(slice,lookAhead);
      if (lookAhead == 0) {
        bVar1 = false;
      }
      else {
        lookAhead = AIWorld_LaneIndex__Fii(slice,carObj->desiredSpeed + iVar2 * 0x40000);
        lookAhead = AIWorld_IsDriveableLane__Fii(slice,lookAhead);
        bVar1 = lookAhead != 0;
      }
    }
    else {
      bVar1 = true;
    }
    iVar6 = iVar6 + 1;
    lookAhead = iVar5 * 0xcccc;
    if (lookAhead < 0) {
      lookAhead = lookAhead + 0xffff;
    }
    iVar5 = 4;
    if (3 < lookAhead >> 0x10) {
      iVar5 = lookAhead >> 0x10;
    }
  } while ((iVar6 < 5) && (!bVar1));
  carObj->brakeInfo = (AIPhysic_BrakeInfo *)(local_38.x - (carObj->N).position.x);
  carObj->speedFactor = local_38.y - (carObj->N).position.y;
  carObj->barrierThinkHarder = local_38.z - (carObj->N).position.z;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_TargetedGetDesiredVector__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1275, offset 0x8006b224
	/* begin block 1 */
		// Start line: 1276
		// Start offset: 0x8006B224
	/* end block 1 */
	// End offset: 0x8006B224
	// End Line: 1279

void AIPhysic_TargetedGetDesiredVector__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  
  iVar1 = (carObj->N).position.y;
  carObj->brakeInfo = (AIPhysic_BrakeInfo *)(carObj->driveDirection - (carObj->N).position.x);
  carObj->speedFactor = carObj->driveDirectionTimer - iVar1;
  carObj->barrierThinkHarder = carObj->aCar - (carObj->N).position.z;
  carObj->aCarWRTRoad = carObj->aDesired;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AIPhysic_CheckIfOutOfControl__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1291, offset 0x8006b260
	/* begin block 1 */
		// Start line: 1292
		// Start offset: 0x8006B260
		// Variables:
	// 		int futureBend; // $a3
	/* end block 1 */
	// End offset: 0x8006B3F0
	// End Line: 1334

int AIPhysic_CheckIfOutOfControl__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = AIWorld_CalcRoadBend__FP8Car_tObji(carObj,(carObj->speechInfo).speechSource << 3);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (0 < carObj->aiGlue) {
    iVar1 = carObj->carInLane;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    return (uint)(0x2ffff < iVar1) ^ 1;
  }
  iVar2 = carObj->laneIndex;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if ((iVar2 < 0x74) && ((carObj->desiredVector).z != -1)) {
    iVar2 = carObj->carInLane;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < -0x30000) {
      return 1;
    }
    iVar3 = (int)(carObj->N).simRoadInfo.slice * 0x20;
    if (carObj->desiredSpeed <
        (int)-((uint)*(byte *)(iVar3 + 0x1e) * 0x8000 * (uint)(*(byte *)(iVar3 + 0x1d) >> 4))) {
      return 1;
    }
    if ((int)((uint)*(byte *)(iVar3 + 0x1f) * 0x8000 * ((uint)*(byte *)(iVar3 + 0x1d) & 0xf)) <
        carObj->desiredSpeed) {
      return 1;
    }
    if (0xcccc < iVar1) {
      return 1;
    }
    iVar1 = (carObj->linearVel_ch).x;
    iVar3 = carObj->desiredDirection;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    if (iVar1 <= (iVar3 >> 8) * 0x66) {
      return 0;
    }
    if (0xeffff < iVar2) {
      return 0;
    }
  }
  return 1;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_OutOfControlPhysics__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 1351, offset 0x8006b400
	/* begin block 1 */
		// Start line: 1352
		// Start offset: 0x8006B400
		// Variables:
	// 		int desiredAngVel; // $a1
	// 		int desiredLatVel; // $a2
	// 		int currentAngAcc; // $s2
	// 		int currentLatAcc; // $s3
	// 		int currentLongAcc; // $s0
	// 		int maxLatVel; // $v1
	// 		int maxAngVel; // $v1
	// 		int skid; // $a0
	// 		int dir; // $v0
	// 		int currentLatVel; // $s5
	// 		int latVelLimit; // $a0
	// 		int targetVel; // $v1
	// 		int uTurn; // $s4
	// 		int currentVel; // $a0
	/* end block 1 */
	// End offset: 0x8006BA28
	// End Line: 1508

void AIPhysic_OutOfControlPhysics__FP8Car_tObj(Car_tObj *carObj)
{
  byte bVar1;
  bool bVar2;
  speechSourceType sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  sVar3 = (carObj->speechInfo).speechSource;
  carObj->preferredLateralPosition = 0;
  bVar2 = false;
  iVar4 = AIWorld_CalcFutureLateralVel__FP8Car_tObji(carObj,sVar3 * AIPhysicConfig);
  if ((int)((carObj->speechInfo).speechSource * carObj->carInLane) < 0) {
    bVar2 = ~(carObj->desiredVector).z != 0;
  }
  carObj->aiGlue = 0;
  fixedmult(0x80,0);
  iVar9 = carObj->targetLatPos;
  if (0 < carObj->targetLatPos) {
    iVar9 = 0;
  }
  iVar6 = -carObj->targetLatPos;
  if (-carObj->targetLatPos < iVar9) {
    iVar6 = iVar9;
  }
  iVar9 = (carObj->targetPos).z;
  if (0 < iVar9) {
    iVar9 = 0;
  }
  iVar8 = -(carObj->targetPos).z;
  if (iVar8 < iVar9) {
    iVar8 = iVar9;
  }
  iVar9 = (carObj->linearVel_ch).z;
  if (((((carObj->desiredVector).z == -1) && (carObj->driveDirection == 0)) &&
      (carObj->driveDirectionTimer == 0)) && (carObj->aCar == 0)) {
    iVar10 = 0;
  }
  else {
    iVar10 = (carObj->speechInfo).copCarIndex * (carObj->speechInfo).speechSource *
             (carObj->desiredVector).z;
  }
  if (carObj->pullOver == 0) {
    if (iVar10 < 0) {
      if ((iVar10 <= iVar9) && (iVar9 < 0x20001)) goto LAB_8006b814;
    }
    else {
      if ((-0x20001 < iVar9) && (iVar9 <= iVar10)) {
LAB_8006b814:
        if ((carObj->speechInfo).speechIntensity == (carObj->speechInfo).speechSource) {
          iVar9 = AIPhysic_CalcAcceleration__FP8Car_tObji(carObj,(carObj->linearVel_ch).z);
          uVar7 = iVar9 * (carObj->desiredVector).z;
          bVar1 = (carObj->control).brakeLevel;
          if (iGp00000050 < (int)(uint)bVar1) {
            (carObj->control).brakeLevel = bVar1 - (char)iGp00000050;
          }
          else {
            (carObj->control).brakeLevel = '\0';
          }
          if ((carObj->control).brakeLevel == '\0') {
            (carObj->control).desiredBrakeLevel = '\0';
          }
          goto LAB_8006b908;
        }
      }
    }
  }
  iVar9 = (carObj->linearVel_ch).z;
  if (iVar9 < 0) {
    iVar9 = -iVar9;
  }
  uVar7 = 0;
  if (0 < iVar9) {
    uVar5 = AIPhysic_CalcDeceleration__FP8Car_tObj(carObj);
    iVar9 = (uint)(byte)(carObj->control).brakeLevel + iGp00000050 * 4;
    if (iVar9 < 0xff) {
      (carObj->control).brakeLevel = (char)iVar9;
    }
    else {
      (carObj->control).brakeLevel = -1;
    }
    if (3 < (byte)(carObj->control).brakeLevel) {
      (carObj->control).desiredBrakeLevel = '\x01';
    }
    uVar7 = -uVar5;
    if ((carObj->linearVel_ch).z < 0) {
      uVar7 = uVar5;
    }
  }
LAB_8006b908:
  if (bVar2) {
    if (carObj->desiredDirection - 0x140001U < 0x1dffff) {
      if (iVar6 < 0) {
        iVar6 = iVar6 + 3;
      }
      iVar6 = iVar6 >> 2;
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 3;
      }
      uVar7 = (int)uVar7 >> 2;
    }
    else {
      iVar6 = fixedmult(iVar6,0xc000);
      iVar9 = uVar7 + (uVar7 >> 0x1f);
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 3;
      }
      uVar7 = (iVar9 >> 1) + ((int)uVar7 >> 2);
    }
    iVar9 = iVar8;
    if (iVar8 < 0) {
      iVar9 = iVar8 + 3;
    }
    if (iVar8 < 0) {
      iVar8 = iVar8 + 7;
    }
    iVar8 = (iVar9 >> 2) + (iVar8 >> 3);
  }
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  iVar4 = iVar4 - DAT_8010dc84;
  if ((((int)((carObj->speechInfo).speechSource * carObj->carInLane) < 0) &&
      (0x38e38 < carObj->desiredDirection)) || (carObj->slackProb != 0)) {
    carObj->frontSkid = 0xa0000;
    carObj->rearSkid = 0xa0000;
  }
  else {
    if (iVar4 < 1) {
      carObj->rearSkid = 0;
      carObj->frontSkid = 0;
    }
    else {
      carObj->frontSkid = iVar4;
      carObj->rearSkid = iVar4;
    }
  }
  (carObj->linearAcc_ch).x = iVar8;
  (carObj->linearAcc_ch).y = 0;
  (carObj->linearAcc_ch).z = uVar7;
  (carObj->linearAcc_rh).x = 0;
  (carObj->linearAcc_rh).y = 0;
  (carObj->linearAcc_rh).z = 0;
  (carObj->angularAcc).x = 0;
  (carObj->angularAcc).y = iVar6;
  (carObj->angularAcc).z = 0;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AIPhysic_GetRearEndDamageFactor__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1570, offset 0x8006ba70
	/* begin block 1 */
		// Start line: 1571
		// Start offset: 0x8006BA70
		// Variables:
	// 		int totalDamage; // $v1
	/* end block 1 */
	// End offset: 0x8006BAB8
	// End Line: 1585

int AIPhysic_GetRearEndDamageFactor__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  int iVar2;
  
  iVar1 = fixedmult((carObj->N).damage[4] + (carObj->N).damage[5] + (carObj->N).damage[6] +
                    (carObj->N).damage[9],0x147);
  iVar2 = 0x10000;
  if (iVar1 < 0x10001) {
    iVar2 = iVar1;
  }
  return iVar2;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_InControlPhysics__FP8Car_tObj(struct Car_tObj *carObj /*$s2*/)
 // line 1604, offset 0x8006bac8
	/* begin block 1 */
		// Start line: 1605
		// Start offset: 0x8006BAC8
		// Variables:
	// 		static char copCollisionReactionTime[4]; // offset 0x0
	// 		static int copCollisionGripLoss[4]; // offset 0x0
	// 		static int copCollisionSlowDown[4]; // offset 0x10
	// 		int currentLatVel; // stack offset -64
	// 		int currentLatPos; // $a2
	// 		int desiredLatPos; // $v0
	// 		int deltaLatPos; // stack offset -60
	// 		int desiredAngVel; // $v1
	// 		int currentAngAcc; // $s1
	// 		int desiredLatVel; // $a2
	// 		int currentLatAcc; // $s0
	// 		int currentLongAcc; // $a1
	// 		int maxAngularAcceleration; // $s7
	// 		int angleWRTdesired; // $s1
	// 		int skid; // $s4
	// 		int dir; // stack offset -56
	// 		int gripMultiplier; // $s0
	// 		int maxLateralAcceleration; // $s3
	// 		int dlvel_to_clacc; // $s5
	// 		int desiredSpeed; // stack offset -52
	// 		int justBumped; // stack offset -48
	// 		struct coorddef unitDesiredVector; // stack offset -96
	// 		struct coorddef unitDesiredVectorRight; // stack offset -80
	// 		int lastCollisionTickDiff; // $s3
	// 		int copCollisionFirmness; // $fp

		/* begin block 1.1 */
			// Start line: 1678
			// Start offset: 0x8006BC24

			/* begin block 1.1.1 */
				// Start line: 1681
				// Start offset: 0x8006BC68
				// Variables:
			// 		int vely; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8006BCD0
			// End Line: 1695
		/* end block 1.1 */
		// End offset: 0x8006BCD0
		// End Line: 1695

		/* begin block 1.2 */
			// Start line: 1733
			// Start offset: 0x8006BE00

			/* begin block 1.2.1 */
				// Start line: 1742
				// Start offset: 0x8006BE24
				// Variables:
			// 		int fishtailtick; // $a0
			// 		int signAngle; // $a1
			/* end block 1.2.1 */
			// End offset: 0x8006BED0
			// End Line: 1756
		/* end block 1.2 */
		// End offset: 0x8006BF84
		// End Line: 1763

		/* begin block 1.3 */
			// Start line: 1780
			// Start offset: 0x8006C070

			/* begin block 1.3.1 */
				// Start line: 1786
				// Start offset: 0x8006C094
				// Variables:
			// 		int maxLatVel; // $a0
			// 		int maxAngVel; // $a0
			/* end block 1.3.1 */
			// End offset: 0x8006C134
			// End Line: 1796
		/* end block 1.3 */
		// End offset: 0x8006C134
		// End Line: 1796
	/* end block 1 */
	// End offset: 0x8006C328
	// End Line: 1864

void AIPhysic_InControlPhysics__FP8Car_tObj(Car_tObj *carObj)
{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BO_tNewtonObj *pBVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  coorddef local_60;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  speechSourceType local_38;
  int local_34;
  int local_30;
  
  local_38 = (carObj->speechInfo).speechSource;
  carObj->preferredLateralPosition = 0;
  local_60.x = carObj->brakeInfo;
  local_60.y = carObj->speedFactor;
  local_60.z = carObj->barrierThinkHarder;
  Math_QDNormalizeVector__FP8coorddef(&local_60);
  local_30 = 0;
  local_48 = -(int)local_60.x;
  local_50 = local_60.z;
  local_4c = local_60.y;
  iVar9 = 0;
  iVar2 = fixedmult((carObj->N).linearVel.x);
  iVar3 = fixedmult((carObj->N).linearVel.y,local_4c);
  iVar4 = fixedmult((carObj->N).linearVel.z,local_48);
  local_40 = (iVar2 + iVar3 + iVar4) * (carObj->speechInfo).speechSource;
  iVar3 = carObj->targetLatPos;
  local_3c = carObj->desiredSpeed - carObj->aCarWRTRoad;
  iVar2 = fixedmult((carObj->linearVel_ch).z,0x62);
  iVar2 = fixedmult(iVar2 + 0x10000,carObj->wipeOutEndTick);
  if (((carObj->carFlags & 8U) != 0) && (carObj->max_aa < 0)) {
    iVar4 = (carObj->N).angularVel.y;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if ((1000 < iVar4) && (0x1638e3 < carObj->desiredDirection)) {
      carObj->aiGlue = 0x180;
    }
  }
  iVar4 = -(carObj->N).collision.lastTime;
  iVar5 = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&carObj->script,AISCRIPT_AIREACTION_WIPE_OUT);
  if ((iVar5 != -1) || (0 < carObj->aiGlue)) {
    iVar3 = 0;
    if (-(carObj->N).collision.lastTime < 0x40) {
      carObj->aiGlue = 0;
    }
    iVar9 = (carObj->N).angularVel.y;
    iVar2 = 0;
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    iVar9 = iVar9 + 0x1ca;
    if (0x3333 < iVar9) {
      iVar9 = 0x3333;
    }
    if ((carObj->N).angularVel.y < 1) {
      (carObj->N).angularVel.y = -iVar9;
    }
    else {
      (carObj->N).angularVel.y = iVar9;
    }
    iVar9 = 0xa0000;
  }
  iVar5 = DAT_801131f4;
  if (iVar4 < 0x10) {
    carObj->max_aa = carObj->max_aa + -0x14;
  }
  if (((iVar4 < (int)(uint)(byte)(&DAT_8013c590)[iVar5]) &&
      (pBVar6 = (carObj->N).collision.lastOtherObj, pBVar6 != (BO_tNewtonObj *)0x0)) &&
     ((pBVar6[1].simRoadInfo.quadPts[1].y & 0x200U) != 0)) {
    iVar3 = 0;
    local_30 = 1;
    iVar2 = fixedmult(iVar2,*(undefined4 *)(&DAT_8010dc54 + iVar5 * 4));
  }
  iVar4 = (carObj->targetPos).z;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar10 = (iVar4 >> 8) * (iVar2 >> 8);
  iVar4 = DAT_8010dc90;
  if (DAT_8010dc90 < 0) {
    iVar4 = DAT_8010dc90 + 0xff;
  }
  iVar2 = (iVar4 >> 8) * (iVar2 >> 8);
  iVar4 = carObj->rampDesiredLatPos;
  if (0x10000 < iVar4) {
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar10 = (iVar4 >> 8) * (iVar10 >> 8);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar2 = (iVar4 >> 8) * (iVar2 >> 8);
  }
  iVar4 = carObj->accNitrous;
  iVar8 = carObj->laneIndex;
  local_34 = (carObj->speechInfo).copCarIndex;
  if (iVar4 < 1) {
    iVar4 = iVar8;
    if (iVar8 < 0) {
      iVar4 = -iVar8;
    }
    if (((carObj->personality->fishtailAngle < iVar4) && (0 < iVar8 * (carObj->angularAcc).y)) &&
       (iVar7 = AIPhysic_GetRearEndDamageFactor__FP8Car_tObj(carObj),
       (0x10000 - iVar7) * 0x14 + (carObj->personality->fishtailAngle + -0x14) * 0x10000 <
       iVar4 << 0x10)) {
      carObj->accNitrous = 0x96;
    }
  }
  else {
    iVar7 = 1;
    if (false) {
      iVar7 = -1;
    }
    if (0x96 - iVar4 < 0x32) {
      iVar7 = (iVar7 * 0x1e * (0x96 - iVar4)) / 0x32;
    }
    else {
      iVar7 = iVar7 * (iVar4 / 7 + 10);
    }
    iVar8 = iVar8 + iVar7;
    if (0x32 < iVar4) {
      iVar9 = (iVar4 * 0x140000) / 0x32;
    }
  }
  iVar7 = fixedmult(0x80,DAT_8010dc98);
  iVar4 = DAT_8010dc9c;
  if (-iVar8 * iVar7 < DAT_8010dc9c) {
    iVar4 = -iVar8 * iVar7;
  }
  iVar8 = -DAT_8010dc9c;
  if (-DAT_8010dc9c < iVar4) {
    iVar8 = iVar4;
  }
  iVar4 = carObj->desiredDirection;
  if ((-DAT_8010dca8 < carObj->carInLane) && (carObj->carInLane < DAT_8010dca8)) {
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = DAT_8010dcb0;
    if (DAT_8010dcb0 < 0) {
      iVar7 = DAT_8010dcb0 + 0xff;
    }
    iVar4 = (iVar4 >> 8) * (iVar7 >> 8);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar7 = iVar4;
    if (iVar8 < iVar4) {
      iVar7 = iVar8;
    }
    iVar8 = -iVar4;
    if (-iVar4 < iVar7) {
      iVar8 = iVar7;
    }
  }
  iVar8 = fixedmult((carObj->angularVel_ch).y - iVar8,DAT_8010dca0);
  iVar4 = iVar3;
  if (-iVar8 < iVar3) {
    iVar4 = -iVar8;
  }
  iVar8 = -iVar3;
  if (-iVar3 < iVar4) {
    iVar8 = iVar4;
  }
  iVar3 = fixedmult(local_40,iVar2);
  iVar2 = iVar10;
  if ((int)(-local_38 * iVar3) < iVar10) {
    iVar2 = -local_38 * iVar3;
  }
  iVar3 = -iVar10;
  if (-iVar10 < iVar2) {
    iVar3 = iVar2;
  }
  if ((((int)(carObj->carInLane * local_38) < (int)(local_34 * local_38)) && (carObj->pullOver == 0)
      ) && ((carObj->speechInfo).speechIntensity == (carObj->speechInfo).speechSource)) {
    iVar4 = AIPhysic_CalcAcceleration__FP8Car_tObji(carObj,carObj->carInLane);
    bVar1 = (carObj->control).brakeLevel;
    if (iGp00000050 < (int)(uint)bVar1) {
      (carObj->control).brakeLevel = bVar1 - (char)iGp00000050;
    }
    else {
      (carObj->control).brakeLevel = '\0';
    }
    if ((carObj->control).brakeLevel == '\0') {
      (carObj->control).desiredBrakeLevel = '\0';
    }
  }
  else {
    iVar2 = AIPhysic_CalcDeceleration__FP8Car_tObj(carObj);
    iVar4 = (uint)(byte)(carObj->control).brakeLevel + iGp00000050 * 4;
    if (iVar4 < 0xff) {
      (carObj->control).brakeLevel = (char)iVar4;
    }
    else {
      (carObj->control).brakeLevel = -1;
    }
    if (3 < (byte)(carObj->control).brakeLevel) {
      (carObj->control).desiredBrakeLevel = '\x01';
    }
    iVar4 = -iVar2;
    if ((carObj->linearVel_ch).z < 0) {
      iVar4 = iVar2;
    }
  }
  if (local_30 != 0) {
    iVar4 = -*(int *)(&DAT_8010dc64 + iVar5 * 4);
  }
  if (iVar9 == 0) {
    if (local_40 < 0) {
      local_40 = -local_40;
    }
    iVar9 = local_40 - DAT_8010dc84;
  }
  if (iVar9 < 1) {
    carObj->rearSkid = 0;
    carObj->frontSkid = 0;
  }
  else {
    carObj->rearSkid = iVar9;
    carObj->frontSkid = iVar9;
  }
  (carObj->linearAcc_ch).x = iVar3;
  (carObj->linearAcc_ch).y = 0;
  (carObj->linearAcc_ch).z = iVar4;
  (carObj->linearAcc_rh).x = 0;
  (carObj->linearAcc_rh).y = 0;
  (carObj->linearAcc_rh).z = 0;
  (carObj->angularAcc).x = 0;
  (carObj->angularAcc).y = iVar8;
  (carObj->angularAcc).z = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_FinishUp__FP8Car_tObj(struct Car_tObj *carObj /*$s2*/)
 // line 1924, offset 0x8006c37c
	/* begin block 1 */
		// Start line: 1925
		// Start offset: 0x8006C37C
		// Variables:
	// 		struct coorddef angAcc; // stack offset -112
	// 		struct matrixtdef transOrientMat; // stack offset -96
	// 		struct matrixtdef transRoadMat; // stack offset -56
	// 		int tickLoop; // $s0
	/* end block 1 */
	// End offset: 0x8006C73C
	// End Line: 1965

void AIPhysic_FinishUp__FP8Car_tObj(Car_tObj *carObj)
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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  (carObj->linearAcc_ch).z = (carObj->linearAcc_ch).z + (carObj->linearAcc_rh).z;
  Cars_DoGravityEffectsOnAcc__FP8Car_tObji(carObj,0);
  (carObj->linearAcc_ch).z = (carObj->linearAcc_ch).z - (carObj->linearAcc_rh).z;
  transpose(&(carObj->N).orientMat,&local_60);
  transpose(&(carObj->N).roadMatrix,&local_38);
  iVar1 = fixedmult((carObj->linearAcc_ch).x,local_60);
  iVar2 = fixedmult((carObj->linearAcc_ch).y,local_5c);
  iVar3 = fixedmult((carObj->linearAcc_ch).z,local_58);
  (carObj->linearAcc).x = iVar1 + iVar2 + iVar3;
  iVar1 = fixedmult((carObj->linearAcc_ch).x,local_54);
  iVar2 = fixedmult((carObj->linearAcc_ch).y,local_50);
  iVar3 = fixedmult((carObj->linearAcc_ch).z,local_4c);
  iVar9 = (carObj->linearAcc_ch).x;
  (carObj->linearAcc).y = iVar1 + iVar2 + iVar3;
  iVar1 = fixedmult(iVar9,local_48);
  iVar2 = fixedmult((carObj->linearAcc_ch).y,local_44);
  iVar3 = fixedmult((carObj->linearAcc_ch).z,local_40);
  iVar9 = (carObj->linearAcc_rh).x;
  (carObj->linearAcc).z = iVar1 + iVar2 + iVar3;
  iVar1 = fixedmult(iVar9,local_38);
  iVar2 = fixedmult((carObj->linearAcc_rh).y,local_34);
  iVar3 = fixedmult((carObj->linearAcc_rh).z,local_30);
  (carObj->linearAcc).x = (carObj->linearAcc).x + iVar1 + iVar2 + iVar3;
  iVar1 = fixedmult((carObj->linearAcc_rh).x,local_2c);
  iVar2 = fixedmult((carObj->linearAcc_rh).y,local_28);
  iVar3 = fixedmult((carObj->linearAcc_rh).z,local_24);
  iVar9 = (carObj->linearAcc_rh).x;
  (carObj->linearAcc).y = (carObj->linearAcc).y + iVar1 + iVar2 + iVar3;
  iVar1 = fixedmult(iVar9,local_20);
  iVar2 = fixedmult((carObj->linearAcc_rh).y,local_1c);
  iVar3 = fixedmult((carObj->linearAcc_rh).z,local_18);
  iVar9 = (carObj->angularAcc).x;
  (carObj->linearAcc).z = (carObj->linearAcc).z + iVar1 + iVar2 + iVar3;
  iVar1 = fixedmult(iVar9,local_60);
  iVar2 = fixedmult((carObj->angularAcc).y,local_5c);
  iVar3 = fixedmult((carObj->angularAcc).z,local_58);
  iVar9 = fixedmult((carObj->angularAcc).x,local_54);
  iVar4 = fixedmult((carObj->angularAcc).y,local_50);
  iVar5 = fixedmult((carObj->angularAcc).z,local_4c);
  iVar6 = fixedmult((carObj->angularAcc).x,local_48);
  iVar7 = fixedmult((carObj->angularAcc).y,local_44);
  iVar8 = fixedmult((carObj->angularAcc).z,local_40);
  (carObj->angularAcc).x = iVar1 + iVar2 + iVar3;
  (carObj->angularAcc).y = iVar9 + iVar4 + iVar5;
  (carObj->angularAcc).z = iVar6 + iVar7 + iVar8;
  iVar1 = 0;
  iVar2 = fixedmult((carObj->linearAcc).x,0);
  iVar3 = (carObj->linearAcc).y;
  (carObj->N).linearVel.x = (carObj->N).linearVel.x + iVar2;
  iVar2 = fixedmult(iVar3,0);
  iVar3 = (carObj->linearAcc).z;
  (carObj->N).linearVel.y = (carObj->N).linearVel.y + iVar2;
  iVar3 = fixedmult(iVar3,0);
  iVar2 = carObj->preferredLateralPosition;
  (carObj->N).linearVel.z = (carObj->N).linearVel.z + iVar3;
  while ((iVar2 != 0 && (iVar1 < 0))) {
    iVar1 = iVar1 + 1;
    iVar2 = fixedmult((carObj->N).linearVel.x,carObj->preferredLateralPosition);
    iVar3 = (carObj->N).linearVel.y;
    iVar9 = carObj->preferredLateralPosition;
    (carObj->N).linearVel.x = iVar2;
    iVar2 = fixedmult(iVar3,iVar9);
    iVar3 = (carObj->N).linearVel.z;
    iVar9 = carObj->preferredLateralPosition;
    (carObj->N).linearVel.y = iVar2;
    iVar3 = fixedmult(iVar3,iVar9);
    iVar2 = carObj->preferredLateralPosition;
    (carObj->N).linearVel.z = iVar3;
  }
  (carObj->N).angularVel.x = (carObj->N).angularVel.x;
  (carObj->N).angularVel.y = (carObj->N).angularVel.y;
  (carObj->N).angularVel.z = (carObj->N).angularVel.z;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_CalculateRampedDesiredLatPos__FP8Car_tObj9eRampType(struct Car_tObj *carObj /*$s0*/, enum eRampType rampType /*$a1*/)
 // line 1989, offset 0x8006c768
	/* begin block 1 */
		// Start line: 1990
		// Start offset: 0x8006C768
		// Variables:
	// 		int rampSpeed; // $a2
	/* end block 1 */
	// End offset: 0x8006C860
	// End Line: 2048

void AIPhysic_CalculateRampedDesiredLatPos__FP8Car_tObj9eRampType( (Car_tObj *carObj,eRampType rampType)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (rampType == kRampType_NoInterpolate) {
    carObj->aCarWRTRoad = (carObj->speechInfo).playerCarIndex;
  }
  else {
    AIWorld_CalculateDeltaRoadYaw__FP8Car_tObj(carObj);
    iVar3 = carObj->desiredSpeed;
    if (((carObj->speechInfo).playerCarIndex < iVar3) && (iVar3 < carObj->aCarWRTRoad + -0x10000)) {
      carObj->aCarWRTRoad = iVar3;
    }
    else {
      iVar3 = carObj->desiredSpeed;
      if ((carObj->aCarWRTRoad + 0x10000 < iVar3) && (iVar3 < (carObj->speechInfo).playerCarIndex))
      {
        carObj->aCarWRTRoad = iVar3;
      }
    }
    iVar3 = carObj->aCarWRTRoad;
    iVar2 = (carObj->speechInfo).playerCarIndex;
    if (iVar3 < iVar2) {
      carObj->aCarWRTRoad = iVar3;
      bVar1 = iVar2 < iVar3;
    }
    else {
      if (iVar3 <= iVar2) {
        return;
      }
      iVar2 = (carObj->speechInfo).playerCarIndex;
      carObj->aCarWRTRoad = iVar3;
      bVar1 = iVar3 < iVar2;
    }
    if (bVar1) {
      carObj->aCarWRTRoad = iVar2;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AIPhysic_HitWallCheck__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 2073, offset 0x8006c870
	/* begin block 1 */
		// Start line: 2074
		// Start offset: 0x8006C870
		// Variables:
	// 		int onRoad; // $a2
	/* end block 1 */
	// End offset: 0x8006C918
	// End Line: 2108

int AIPhysic_HitWallCheck__FP8Car_tObj(Car_tObj *carObj)
{
  byte bVar1;
  bool bVar2;
  
  bVar1 = *(byte *)((int)(carObj->N).simRoadInfo.slice * 0x20 + 0x1d);
  bVar2 = false;
  if ((int)(7 - (uint)(bVar1 >> 4)) <= *(int *)(carObj->accTable + 0x6e)) {
    bVar2 = *(int *)(carObj->accTable + 0x6e) <= (int)(((uint)bVar1 & 0xf) + 6);
  }
  if (bVar2) {
    return 0;
  }
  if ((carObj->desiredVector).z == -1) {
    (carObj->targetPos).y = (carObj->targetPos).y + iGp00000050;
  }
  else {
    (carObj->targetPos).y = 0;
  }
  if ((carObj->targetPos).y < 9) {
    return (uint)(0xd999 < (carObj->N).roadMatrix.m[4]) ^ 1;
  }
  return 1;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_ProcessBarrierCollision__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 2117, offset 0x8006c920
	/* begin block 1 */
		// Start line: 2118
		// Start offset: 0x8006C920
	/* end block 1 */
	// End offset: 0x8006C964
	// End Line: 2124

void AIPhysic_ProcessBarrierCollision__FP8Car_tObj(Car_tObj *carObj)
{
  int iVar1;
  
  if ((carObj->carFlags & 4U) == 0) {
    iVar1 = carObj->carInLane;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < 0xa0000) {
      AIPhysic_ChangeDirection__FP8Car_tObji(carObj,0x60);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_ProcessCollision__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 2134, offset 0x8006c974
	/* begin block 1 */
		// Start line: 2135
		// Start offset: 0x8006C974

		/* begin block 1.1 */
			// Start line: 2135
			// Start offset: 0x8006C974

			/* begin block 1.1.1 */
				// Start line: 2138
				// Start offset: 0x8006C9A0

				/* begin block 1.1.1.1 */
					// Start line: 2139
					// Start offset: 0x8006C9A0

					/* begin block 1.1.1.1.1 */
						// Start line: 2140
						// Start offset: 0x8006C9C0
						// Variables:
					// 		int reverseTime; // $a1
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006C9E0
					// End Line: 2147
				/* end block 1.1.1.1 */
				// End offset: 0x8006C9E0
				// End Line: 2147
			/* end block 1.1.1 */
			// End offset: 0x8006C9E0
			// End Line: 2147
		/* end block 1.1 */
		// End offset: 0x8006C9E0
		// End Line: 2147
	/* end block 1 */
	// End offset: 0x8006C9E0
	// End Line: 2147

void AIPhysic_ProcessCollision__FP8Car_tObj(Car_tObj *carObj)
{
  int time;
  
  if ((0xd999 < (carObj->N).collision.impulse) &&
     ((carObj->N).collision.otherObj != (BO_tNewtonObj *)0x0)) {
    time = carObj->carInLane;
    if (time < 0) {
      time = -time;
    }
    if (time < 0xa0000) {
      time = 0x60;
      if ((carObj->carFlags & 0x10U) != 0) {
        time = 0xa0;
      }
      AIPhysic_ChangeDirection__FP8Car_tObji(carObj,time);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_ChangeDirection__FP8Car_tObji(struct Car_tObj *carObj /*$a2*/, int time /*$a1*/)
 // line 2163, offset 0x8006c9f0
	/* begin block 1 */
		// Start line: 2164
		// Start offset: 0x8006C9F0
	/* end block 1 */
	// End offset: 0x8006CAA0
	// End Line: 2187

void AIPhysic_ChangeDirection__FP8Car_tObji(Car_tObj *carObj,int time)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (carObj->desiredVector).z;
  if (iVar3 == -1) {
    uVar1 = (carObj->desiredVector).y;
    iVar3 = 1;
    if ((int)(uVar1 + (uVar1 >> 0x1f)) >> 1 < -carObj->aCarWRTDesired) goto LAB_8006ca90;
    iVar3 = (carObj->desiredVector).z;
  }
  if (iVar3 != 1) {
    return;
  }
  uVar1 = (carObj->desiredVector).y;
  if (-carObj->aCarWRTDesired <= (int)(uVar1 + (uVar1 >> 0x1f)) >> 1) {
    return;
  }
  iVar2 = carObj->carInLane;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar3 = -1;
  if (0x13ffff < iVar2) {
    return;
  }
LAB_8006ca90:
  (carObj->desiredVector).z = iVar3;
  (carObj->desiredVector).y = time;
  carObj->aCarWRTDesired = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_CheckForGripReduction__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 2197, offset 0x8006caa8
	/* begin block 1 */
		// Start line: 2198
		// Start offset: 0x8006CAA8

		/* begin block 1.1 */
			// Start line: 2198
			// Start offset: 0x8006CAA8

			/* begin block 1.1.1 */
				// Start line: 2212
				// Start offset: 0x8006CB58

				/* begin block 1.1.1.1 */
					// Start line: 2212
					// Start offset: 0x8006CB58

					/* begin block 1.1.1.1.1 */
						// Start line: 2213
						// Start offset: 0x8006CBB8
						// Variables:
					// 		int randVal; // $v1
					// 		int perTickProb; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006CC2C
					// End Line: 2221
				/* end block 1.1.1.1 */
				// End offset: 0x8006CC2C
				// End Line: 2221
			/* end block 1.1.1 */
			// End offset: 0x8006CC2C
			// End Line: 2221
		/* end block 1.1 */
		// End offset: 0x8006CC2C
		// End Line: 2221
	/* end block 1 */
	// End offset: 0x8006CC2C
	// End Line: 2221

void AIPhysic_CheckForGripReduction__FP8Car_tObj(Car_tObj *carObj)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (carObj->wipeOutEndTick < 0x10000) {
    iVar3 = (carObj->N).collision.lastTime;
    iVar5 = carObj->wipeOutEndTick + iGp00000050 * carObj->personality->gripLossRecoveryPerTick;
    carObj->wipeOutEndTick = iVar5;
    if ((0x3f < -iVar3) ||
       (iVar3 = 0x10000, (carObj->N).collision.lastOtherObj != (BO_tNewtonObj *)0x0)) {
      iVar4 = carObj->personality->gripLossMinFactor;
      iVar3 = -iVar4;
      iVar2 = iVar3 + 0x10000;
      if (iVar2 < 0) {
        iVar2 = iVar3 + 0x10003;
      }
      if (iVar5 <= iVar4 + (iVar2 >> 2)) {
        return;
      }
      carObj->wipeOutEndTick = 0x10000;
      return;
    }
  }
  else {
    if ((carObj->N).simOptz != '\0') {
      return;
    }
    if ((carObj->carFlags & 0x28U) == 0) {
      return;
    }
    iVar3 = AIWorld_CalcRoadBend__FP8Car_tObji(carObj,1);
    if (iVar3 < 1) {
      iVar3 = AIWorld_CalcRoadBend__FP8Car_tObji(carObj,1);
      iVar3 = -iVar3;
    }
    else {
      iVar3 = AIWorld_CalcRoadBend__FP8Car_tObji(carObj,1);
    }
    uVar1 = fastRandom;
    if (iVar3 < 0x7d1) {
      return;
    }
    randtemp = fastRandom;
    iVar3 = iGp00000050 * carObj->personality->gripLossProbPerSecond;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x1f;
    }
    if (iVar3 >> 5 <= (int)(fastRandom >> 8 & 0xffff)) {
      fastRandom = fastRandom & 0xffff;
      randtemp = uVar1;
      return;
    }
    iVar3 = carObj->personality->gripLossMinFactor;
    fastRandom = fastRandom & 0xffff;
  }
  carObj->wipeOutEndTick = iVar3;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_StartUp__Fv()
 // line 2233, offset 0x8006cc3c
	/* begin block 1 */
		// Start line: 2234
		// Start offset: 0x8006CC3C
	/* end block 1 */
	// End offset: 0x8006CC3C
	// End Line: 2234

void AIPhysic_StartUp__Fv(void)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_CleanUp__Fv()
 // line 2237, offset 0x8006cc44
	/* begin block 1 */
		// Start line: 2238
		// Start offset: 0x8006CC44
	/* end block 1 */
	// End offset: 0x8006CC44
	// End Line: 2238

void AIPhysic_CleanUp__Fv(void)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_Reset__Fv()
 // line 2240, offset 0x8006cc4c
	/* begin block 1 */
		// Start line: 2241
		// Start offset: 0x8006CC4C
	/* end block 1 */
	// End offset: 0x8006CC4C
	// End Line: 2241

void AIPhysic_Reset__Fv(void)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_ResetCar__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 2243, offset 0x8006cc54
	/* begin block 1 */
		// Start line: 2244
		// Start offset: 0x8006CC54
	/* end block 1 */
	// End offset: 0x8006CC54
	// End Line: 2246

void AIPhysic_ResetCar__FP8Car_tObj(Car_tObj *carObj)
{
  carObj->pullOver = 0;
  carObj->blowout = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_InitCar__FP8Car_tObj(struct Car_tObj *carObj /*$s4*/)
 // line 2250, offset 0x8006cc60
	/* begin block 1 */
		// Start line: 2251
		// Start offset: 0x8006CC60

		/* begin block 1.1 */
			// Start line: 2251
			// Start offset: 0x8006CC60

			/* begin block 1.1.1 */
				// Start line: 2253
				// Start offset: 0x8006CC94
				// Variables:
			// 		int d; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 2297
					// Start offset: 0x8006CD10
					// Variables:
				// 		struct AIPhysic_BrakeInfo *this; // $s2
				// 		int deceleration; // $s0

					/* begin block 1.1.1.1.1 */
						// Start line: 2297
						// Start offset: 0x8006CD10
						// Variables:
					// 		int invDeceleration; // $s3

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2297
							// Start offset: 0x8006CD10
							// Variables:
						// 		int brakeTableLoop; // $s1

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2297
								// Start offset: 0x8006CD34
								// Variables:
							// 		int brakeDistanceMeters; // $v1

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 2297
									// Start offset: 0x8006CD40
									// Variables:
								// 		int distance; // $v1
								// 		struct AIPhysic_BrakeInfo *this; // $s2

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 2297
										// Start offset: 0x8006CD40
										// Variables:
									// 		int sIndex; // $s0
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8006CDA0
									// End Line: 2297
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8006CDA0
								// End Line: 2297
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8006CDA0
							// End Line: 2297
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8006CDB0
						// End Line: 2297
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006CDB0
					// End Line: 2297
				/* end block 1.1.1.1 */
				// End offset: 0x8006CDB0
				// End Line: 2297
			/* end block 1.1.1 */
			// End offset: 0x8006CDB4
			// End Line: 2297
		/* end block 1.1 */
		// End offset: 0x8006CDB4
		// End Line: 2297
	/* end block 1 */
	// End offset: 0x8006CDB4
	// End Line: 2297

void AIPhysic_InitCar__FP8Car_tObj(Car_tObj *carObj)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = carObj->carFlags;
  if ((uVar6 & 2) != 0) {
    iVar7 = 0xc0000;
    if ((uVar6 & 0x28) != 0) {
      iVar7 = 0xb0000;
    }
    iVar5 = carObj->personality->brakeMultiplier;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    if (false) {
      iVar7 = iVar7 + 0xff;
    }
    iVar7 = (iVar5 >> 8) * (iVar7 >> 8);
    if ((uVar6 & 8) != 0) {
      iVar5 = AISpeeds_GetUpgradeBrakeMult__Fi(carObj->carIndex);
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xff;
      }
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      iVar7 = (iVar7 >> 8) * (iVar5 >> 8);
    }
    pvVar1 = __builtin_new(0x84);
    *(int *)((int)pvVar1 + 0x80) = iVar7;
    uVar2 = fixeddiv(0x10000,iVar7);
    iVar7 = 0;
    while (uVar6 = iVar7 << 0x10, iVar7 < 0x80) {
      uVar3 = fixedmult(uVar6,uVar2);
      uVar4 = fixedmult(uVar3,uVar6);
      iVar5 = (int)((uVar4 >> 0x1f) + uVar4) >> 1;
      if ((int)uVar6 < 0) {
        uVar6 = uVar6 | 0xffff;
      }
      iVar8 = (int)uVar6 >> 0x10;
      if (iVar8 < 0) {
        iVar8 = -iVar8;
      }
      if (0x7f < iVar8) {
        iVar8 = 0x80;
      }
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0x1ffff;
      }
      *(undefined *)((int)pvVar1 + iVar8) = (char)(iVar5 >> 0x11);
      iVar7 = iVar7 + 1;
    }
    *(void **)(carObj->accTable + 0x68) = pvVar1;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIPhysic_DeInitCar__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 2301, offset 0x8006cdd4
	/* begin block 1 */
		// Start line: 2302
		// Start offset: 0x8006CDD4
	/* end block 1 */
	// End offset: 0x8006CE14
	// End Line: 2306

void AIPhysic_DeInitCar__FP8Car_tObj(Car_tObj *carObj)
{
  if (((carObj->carFlags & 2U) != 0) && (*(void **)(carObj->accTable + 0x68) != (void *)0x0)) {
    __builtin_delete(*(void **)(carObj->accTable + 0x68));
    *(undefined4 *)(carObj->accTable + 0x68) = 0;
  }
  return;


}





