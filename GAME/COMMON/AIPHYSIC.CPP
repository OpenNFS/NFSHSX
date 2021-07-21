#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 240
	/* end block 2 */
	// End Line: 241

	/* begin block 3 */
		// Start line: 240
	/* end block 3 */
	// End Line: 241

	/* begin block 4 */
		// Start line: 244
	/* end block 4 */
	// End Line: 245

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

	/* begin block 2 */
		// Start line: 268
	/* end block 2 */
	// End Line: 269

	/* begin block 3 */
		// Start line: 279
	/* end block 3 */
	// End Line: 280

	/* begin block 4 */
		// Start line: 279
	/* end block 4 */
	// End Line: 280

	/* begin block 5 */
		// Start line: 281
	/* end block 5 */
	// End Line: 282

/* WARNING: Removing unreachable block (ram,0x8006937c) */

void AIPhysic_RevEngine__FP8Car_tObj(Car_tObj *carObj)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = carObj->desiredDirection;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xffff;
  }
  uVar1 = carObj->carIndex;
  iVar2 = (uVar1 + ((int)(uVar1 + (uVar1 >> 0x1f)) >> 1) * -2 + 1) * AIPhysic_elapsedTime * 0x8c;
  uVar1 = iVar3 >> 0x10;
  if ((carObj->flywheelRpm & 1U) != 0) {
    iVar2 = -(iVar2 >> 1);
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

	/* begin block 2 */
		// Start line: 334
	/* end block 2 */
	// End Line: 335

	/* begin block 3 */
		// Start line: 347
	/* end block 3 */
	// End Line: 348

	/* begin block 4 */
		// Start line: 347
	/* end block 4 */
	// End Line: 348

void AIPhysic_HandleShifting__FP8Car_tObj(Car_tObj *carObj)

{
  Gear_t gear;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 3000;
  if (carObj->carInLane < 1) {
    gear = AIPhysic_CalculateGear__FP8Car_tObj(carObj);
    iVar1 = (carObj->script).lastActionTime;
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
    iVar2 = carObj->desiredDirection - iVar3;
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
    carObj->carInLane = carObj->carInLane - AIPhysic_elapsedTime;
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

	/* begin block 2 */
		// Start line: 437
	/* end block 2 */
	// End Line: 438

	/* begin block 3 */
		// Start line: 448
	/* end block 3 */
	// End Line: 449

	/* begin block 4 */
		// Start line: 448
	/* end block 4 */
	// End Line: 449

Gear_t AIPhysic_CalculateGear__FP8Car_tObj(Car_tObj *carObj)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Gear_t gear;
  
  iVar4 = (carObj->script).lastActionTime;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar4 < 0x20000) {
    gear = GEAR_NEUTRAL;
  }
  else {
    gear = (uint)(byte)(carObj->control).gear;
    if (carObj->speedFactor == -1) {
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
          carObj->carInLane = (carObj->speechInfo).warningNumber;
          gear = gear + GEAR_NEUTRAL;
        }
        else {
          gear = gear + ~GEAR_REVERSE;
          carObj->carInLane = (carObj->speechInfo).warningNumber;
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

	/* begin block 2 */
		// Start line: 545
	/* end block 2 */
	// End Line: 546

	/* begin block 3 */
		// Start line: 553
	/* end block 3 */
	// End Line: 554

	/* begin block 4 */
		// Start line: 553
	/* end block 4 */
	// End Line: 554

	/* begin block 5 */
		// Start line: 555
	/* end block 5 */
	// End Line: 556

int AIPhysic_GearInvSpeedRange__FP8Car_tObj6Gear_t(Car_tObj *carObj,Gear_t gear)

{
  int iVar1;
  
  if ((int)gear < 2) {
    iVar1 = AIPhysic_GearInvSpeedRange__FP8Car_tObj6Gear_t(carObj,GEAR_FIRST);
    return iVar1;
  }
  return (&carObj->aiShiftTimer)[gear + ~GEAR_NEUTRAL];
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

	/* begin block 2 */
		// Start line: 586
	/* end block 2 */
	// End Line: 587

	/* begin block 3 */
		// Start line: 595
	/* end block 3 */
	// End Line: 596

	/* begin block 4 */
		// Start line: 595
	/* end block 4 */
	// End Line: 596

	/* begin block 5 */
		// Start line: 597
	/* end block 5 */
	// End Line: 598

int AIPhysic_GearTopSpeed__FP8Car_tObj6Gear_t(Car_tObj *carObj,Gear_t gear)

{
  int iVar1;
  
  if ((int)gear < 2) {
    iVar1 = AIPhysic_GearTopSpeed__FP8Car_tObj6Gear_t(carObj,GEAR_FIRST);
    return iVar1;
  }
  return (&carObj->currentSpeed)[gear + ~GEAR_NEUTRAL];
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

	/* begin block 2 */
		// Start line: 627
	/* end block 2 */
	// End Line: 628

	/* begin block 3 */
		// Start line: 635
	/* end block 3 */
	// End Line: 636

	/* begin block 4 */
		// Start line: 635
	/* end block 4 */
	// End Line: 636

	/* begin block 5 */
		// Start line: 637
	/* end block 5 */
	// End Line: 638

int AIPhysic_GearBottomSpeed__FP8Car_tObj6Gear_t(Car_tObj *carObj,Gear_t gear)

{
  if (2 < (int)gear) {
    return (&carObj->currentSpeed)[gear + ~GEAR_FIRST];
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

	/* begin block 2 */
		// Start line: 679
	/* end block 2 */
	// End Line: 680

	/* begin block 3 */
		// Start line: 689
	/* end block 3 */
	// End Line: 690

	/* begin block 4 */
		// Start line: 689
	/* end block 4 */
	// End Line: 690

int AIPhysic_CalcAcceleration__FP8Car_tObji(Car_tObj *carObj,int speed)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int acc;
  
  if (speed < 0) {
    speed = -speed;
  }
  uVar1 = 0;
  if (carObj->carInLane < 1) {
    acc = carObj->carInfo->carType;
    if (acc < 0x16) {
      acc = Cars_topSpeedCap[acc];
      uVar1 = fixedmult(acc,carObj->wipeOutEndTick);
      uVar2 = fixedmult(uVar1,carObj->aDesired);
      if ((int)uVar2 < speed) {
        return 0;
      }
      if ((int)uVar1 < speed) {
        return 0;
      }
      if (acc < speed) {
        speed = acc + -0x238e3;
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
    iVar3 = Get__23AIDataRecord_AccTable_ti
                      (*(AIDataRecord_AccTable_t **)(carObj->accTable + 0x56),speed);
    acc = (carObj->targetPos).x;
    if (acc != 0x10000) {
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      if (acc < 0) {
        acc = acc + 0xff;
      }
      iVar3 = (iVar3 >> 8) * (acc >> 8);
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    acc = carObj->btcGlueModifier;
    if (acc < 0) {
      acc = acc + 0xff;
    }
    acc = (iVar3 >> 8) * (acc >> 8);
    if (0 < GameSetup_gData.Weather) {
      if (acc < 0) {
        acc = acc + 0xff;
      }
      acc = (acc >> 8) * 0xe6;
    }
    if ((carObj->carFlags & 0x20U) != 0) {
      if (acc < 0) {
        acc = acc + 0xff;
      }
      iVar3 = *(int *)(carObj->accTable + 100);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      acc = (acc >> 8) * (iVar3 >> 8);
    }
    if ((((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
        (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
         ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0)))))) &&
       ((carObj->carFlags & 8U) != 0)) {
      if (acc < 0) {
        acc = acc + 0xff;
      }
      iVar3 = AITune_BTCPerpAccMults[GameSetup_gData.skill];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      acc = (acc >> 8) * (iVar3 >> 8);
    }
    uVar1 = AIPhysic_ModifyAccelerationAccordingToScript__FP8Car_tObji(carObj,acc);
    acc = 
          AISpeeds_SuperDuperSpeedUpTheCarsAtTheStartBecauseWeCannotActuallyHandleRenderingTheseCars__FP8Car_tObj
                    (carObj);
    if (acc != 0x10000) {
      uVar1 = fixedmult(uVar1,acc);
    }
  }
  return uVar1;
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

	/* begin block 2 */
		// Start line: 844
	/* end block 2 */
	// End Line: 845

	/* begin block 3 */
		// Start line: 851
	/* end block 3 */
	// End Line: 852

	/* begin block 4 */
		// Start line: 851
	/* end block 4 */
	// End Line: 852

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

	/* begin block 2 */
		// Start line: 890
	/* end block 2 */
	// End Line: 891

	/* begin block 3 */
		// Start line: 900
	/* end block 3 */
	// End Line: 901

	/* begin block 4 */
		// Start line: 900
	/* end block 4 */
	// End Line: 901

int AIPhysic_CalcDeceleration__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  
  iVar2 = carObj->aDesired;
  iVar1 = *(int *)(*(int *)(carObj->accTable + 0x5a) + 0x80);
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

	/* begin block 2 */
		// Start line: 921
	/* end block 2 */
	// End Line: 922

	/* begin block 3 */
		// Start line: 930
	/* end block 3 */
	// End Line: 931

	/* begin block 4 */
		// Start line: 930
	/* end block 4 */
	// End Line: 931

	/* begin block 5 */
		// Start line: 931
	/* end block 5 */
	// End Line: 932

	/* begin block 6 */
		// Start line: 931
	/* end block 6 */
	// End Line: 932

void AIPhysic_CheckDesiredDirection__FP8Car_tObj(Car_tObj *carObj)

{
  if ((int)(carObj->speechInfo).speechMode < 0x8e38e) {
    (carObj->script).lastReactionIndex[3] = (carObj->script).lastReactionIndex[2];
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

	/* begin block 2 */
		// Start line: 957
	/* end block 2 */
	// End Line: 958

	/* begin block 3 */
		// Start line: 966
	/* end block 3 */
	// End Line: 967

	/* begin block 4 */
		// Start line: 966
	/* end block 4 */
	// End Line: 967

	/* begin block 5 */
		// Start line: 967
	/* end block 5 */
	// End Line: 968

	/* begin block 6 */
		// Start line: 967
	/* end block 6 */
	// End Line: 968

void AIPhysic_HandleSignalling__FP8Car_tObj(Car_tObj *carObj)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if ((carObj->carFlags & 0x10U) != 0) {
    iVar3 = (carObj->speechInfo).playerCarIndex;
    iVar2 = (carObj->script).lastReactionIndex[4];
    if (iVar2 < iVar3 + -0x40000) {
      uVar1 = *(ushort *)&(carObj->render).palCopy;
      *(undefined2 *)((int)&(carObj->render).palCopy + 2) = 0;
      *(ushort *)&(carObj->render).palCopy = uVar1 | 0x80;
      return;
    }
    if (iVar3 + 0x40000 < iVar2) {
      uVar1 = *(ushort *)((int)&(carObj->render).palCopy + 2);
      *(undefined2 *)&(carObj->render).palCopy = 0;
      *(ushort *)((int)&(carObj->render).palCopy + 2) = uVar1 | 0x80;
      return;
    }
    *(undefined2 *)&(carObj->render).palCopy = 0;
    *(undefined2 *)((int)&(carObj->render).palCopy + 2) = 0;
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

	/* begin block 2 */
		// Start line: 1027
	/* end block 2 */
	// End Line: 1028

	/* begin block 3 */
		// Start line: 1039
	/* end block 3 */
	// End Line: 1040

	/* begin block 4 */
		// Start line: 1039
	/* end block 4 */
	// End Line: 1040

void AIPhysic_HandleWipeoutTimer__FP8Car_tObj(Car_tObj *carObj)

{
  if (((carObj->carFlags & 8U) != 0) && ((carObj->targetPos).z < simGlobal.gameTicks)) {
    randtemp = fastRandom * randSeed;
    fastRandom = randtemp & 0xffff;
    (carObj->targetPos).z =
         simGlobal.gameTicks + carObj->personality->minimumBetweenWipeoutTicks +
         (randtemp >> 8 & 0xffff & carObj->personality->randomBetweenWipeoutTicks);
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

	/* begin block 2 */
		// Start line: 1088
	/* end block 2 */
	// End Line: 1089

	/* begin block 3 */
		// Start line: 1111
	/* end block 3 */
	// End Line: 1112

	/* begin block 4 */
		// Start line: 1111
	/* end block 4 */
	// End Line: 1112

void AIPhysic_Main__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  uint uVar2;
  speechModeType sVar3;
  undefined *velScale;
  
  iVar1 = Sched_ExecuteCheck__FiiiiPiN24i
                    (1,1,(carObj->N).distToPlayer,(carObj->N).objID,&AIPhysic_time,
                     &AIPhysic_elapsedTime,&AIPhysic_iTime,carObj->max_clacc);
  if (iVar1 == 0) {
    return;
  }
  if ((carObj->carFlags & 2U) != 0) {
    AIWorld_CalcSpeed__FP8Car_tObj(carObj);
  }
  AIPhysic_CheckDesiredDirection__FP8Car_tObj(carObj);
  AIPhysic_CheckForGripReduction__FP8Car_tObj(carObj);
  AIPhysic_HandleSignalling__FP8Car_tObj(carObj);
  iVar1 = AIWorld_CalcLateralVelocity__FP8Car_tObj(carObj);
  (carObj->desiredVector).x = iVar1;
  uVar2 = AIPhysics_UseCoolPhysics__FP8Car_tObj(carObj);
  AIPhysic_CalculateRampedDesiredLatPos__FP8Car_tObj9eRampType(carObj,(uint)((uVar2 & 0xff) != 0));
  if (((carObj->speechInfo).speechSource & 4) != 0) {
    return;
  }
  if ((carObj->N).active == '\0') {
    return;
  }
  if (simGlobal.gameStarted != 1) {
    AIPhysic_RevEngine__FP8Car_tObj(carObj);
    return;
  }
  AIPhysic_HandleShifting__FP8Car_tObj(carObj);
  if ((carObj->N).flightTime != 0) {
    velScale = &DAT_0000fae1;
    if ((carObj->carFlags & 0x400U) == 0) {
      return;
    }
    goto LAB_80069dc0;
  }
  if ((int)(carObj->speechInfo).speechMode < 0x40000) {
    (carObj->linearVel_ch).z = 0;
    carObj->rearSkid = 0;
    carObj->frontSkid = 0;
  }
  if (((carObj->N).flightTime != 0) || (0x4ccb < (carObj->N).orientMat.m[4])) {
    if (carObj->blowout != 0) {
      velScale = &DAT_0000fd70;
      goto LAB_80069dc0;
    }
    if (carObj->pullOver != 0) {
      sVar3 = (carObj->speechInfo).speechMode;
      if ((int)sVar3 < 0x238e3) {
        AIPhysic_StopCar__FP8Car_tObjii(carObj,(int)&DAT_0000e666,(int)&DAT_0000e666);
        return;
      }
      if ((int)sVar3 < 0x8e38e) {
        velScale = &DAT_0000f5c2;
        goto LAB_80069dc0;
      }
    }
    if (((carObj->carFlags & 1U) != 0) && ((carObj->stats).finishType == 2)) {
      iVar1 = (carObj->script).lastActionTime;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < 0x20000) goto LAB_80069dbc;
    }
    if ((carObj->script).lastReactionIndex[5] != 0) {
      if ((uVar2 & 0xff) == 0) {
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
  velScale = &DAT_0000f0a3;
LAB_80069dc0:
  AIPhysic_StopCar__FP8Car_tObjii(carObj,(int)velScale,(int)&DAT_0000fae1);
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

	/* begin block 2 */
		// Start line: 1435
	/* end block 2 */
	// End Line: 1436

	/* begin block 3 */
		// Start line: 1438
	/* end block 3 */
	// End Line: 1439

	/* begin block 4 */
		// Start line: 1438
	/* end block 4 */
	// End Line: 1439

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
  iVar3 = (carObj->speechInfo).playerCarIndex;
  if ((iVar3 < (int)BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].leftDrive * -0x100 +
               -0x230000) ||
     ((int)BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].rightDrive * 0x100 + 0x230000 < iVar3
     )) {
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

	/* begin block 2 */
		// Start line: 1529
	/* end block 2 */
	// End Line: 1530

	/* begin block 3 */
		// Start line: 1541
	/* end block 3 */
	// End Line: 1542

	/* begin block 4 */
		// Start line: 1541
	/* end block 4 */
	// End Line: 1542

	/* begin block 5 */
		// Start line: 1544
	/* end block 5 */
	// End Line: 1545

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

	/* begin block 2 */
		// Start line: 1572
	/* end block 2 */
	// End Line: 1573

	/* begin block 3 */
		// Start line: 1591
	/* end block 3 */
	// End Line: 1592

	/* begin block 4 */
		// Start line: 1591
	/* end block 4 */
	// End Line: 1592

void AIPhysic_SimplePhysics__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  speechModeType sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (((carObj->speechInfo).speechSource & 0x10) != 0) {
    (carObj->angularAcc_ch).y = (carObj->speechInfo).playerCarIndex;
    (carObj->speechInfo).speechSource = (carObj->speechInfo).speechSource & 0xffffffef;
  }
  if (((((carObj->carFlags & 8U) != 0) && ((carObj->targetPos).z < simGlobal.gameTicks)) &&
      (iVar1 = Get__25AIDataRecord_TrackCurve_ti
                         (AIDataRecord_TrackCurve,(int)(carObj->N).simRoadInfo.slice), 0x1e < iVar1)
      ) && (0x1638e3 < (int)(carObj->speechInfo).speechMode)) {
    carObj->targetLatPos = simGlobal.gameTicks + 0x180;
  }
  AIPhysic_SimplePhysics_LongVel__FP8Car_tObj(carObj);
  AIPhysic_SimplePhysics_LatVel__FP8Car_tObj(carObj);
  iVar1 = (carObj->N).orientMat.m[6];
  iVar9 = (carObj->N).orientMat.m[7];
  iVar11 = (carObj->N).orientMat.m[8];
  iVar10 = (carObj->N).roadMatrix.m[1];
  iVar12 = (carObj->N).roadMatrix.m[2];
  uVar2 = fixedmult(carObj->originalDesiredSpeed,(carObj->N).roadMatrix.m[0]);
  uVar3 = fixedmult(carObj->originalDesiredSpeed,iVar10);
  uVar4 = fixedmult(carObj->originalDesiredSpeed,iVar12);
  uVar5 = fixedmult((carObj->script).lastActionTime * (carObj->script).lastReactionIndex[3],iVar1);
  uVar6 = fixedmult((carObj->script).lastActionTime * (carObj->script).lastReactionIndex[3],iVar9);
  uVar7 = fixedmult((carObj->script).lastActionTime * (carObj->script).lastReactionIndex[3],iVar11);
  iVar9 = carObj->originalDesiredSpeed * (carObj->script).lastReactionIndex[3];
  (carObj->N).linearVel.x = uVar5 + uVar2;
  sVar8 = (carObj->speechInfo).speechMode;
  (carObj->N).linearVel.y = uVar6 + uVar3;
  (carObj->linearVel_ch).z = sVar8;
  (carObj->N).linearVel.z = uVar7 + uVar4;
  iVar1 = iVar9;
  if (iVar9 < 0) {
    iVar1 = -iVar9;
  }
  (carObj->linearVel_ch).x = iVar9;
  iVar9 = iVar1;
  if (iVar1 < 0) {
    iVar9 = iVar1 + 0xff;
  }
  if ((iVar9 >> 8) * 0x19 < iVar1) {
    carObj->slide = 0x8000;
  }
  else {
    carObj->slide = 0;
  }
  sVar8 = (carObj->speechInfo).speechMode;
  (carObj->N).angularVel.x = 0;
  (carObj->N).angularVel.y = 0;
  (carObj->N).angularVel.z = 0;
  if (0x30000 < (int)sVar8) {
    Newton_CopyRoadMatrixToOrientMat__FP13BO_tNewtonObji
              ((BO_tNewtonObj *)carObj,(uint)(~(carObj->script).lastReactionIndex[3] == 0));
  }
  iVar1 = (carObj->script).lastActionTime;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar9 = (iVar1 / 6 + (iVar1 >> 0x1f) >> 0x10) - (iVar1 >> 0x1f);
  if (-1 < iVar9) {
    if ((iVar9 < AIPhysicConfig.min_lookahead / 6) && (-1 < iVar1)) {
      iVar9 = AIPhysicConfig.min_lookahead / 6;
    }
  }
  if (AIPhysicConfig.max_lookahead / 6 < iVar9) {
    iVar9 = AIPhysicConfig.max_lookahead / 6;
  }
  iVar9 = iVar9 * (carObj->script).lastReactionIndex[3];
  if (iVar9 < 0) {
    iVar9 = (int)(carObj->N).simRoadInfo.slice + iVar9;
    if (iVar9 < 0) {
      iVar9 = iVar9 + gNumSlices;
    }
  }
  else {
    iVar9 = (int)(carObj->N).simRoadInfo.slice + iVar9;
    if (gNumSlices <= iVar9) {
      iVar9 = iVar9 - gNumSlices;
    }
  }
  carObj->timeOffRoad = iVar9;
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

	/* begin block 2 */
		// Start line: 1741
	/* end block 2 */
	// End Line: 1742

	/* begin block 3 */
		// Start line: 1751
	/* end block 3 */
	// End Line: 1752

	/* begin block 4 */
		// Start line: 1751
	/* end block 4 */
	// End Line: 1752

void AIPhysic_SimplePhysics_LongVel__FP8Car_tObj(Car_tObj *carObj)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = AIPhysic_CalcAcceleration__FP8Car_tObji(carObj,(carObj->script).lastActionTime);
  iVar4 = AIPhysic_CalcDeceleration__FP8Car_tObj(carObj);
  if (carObj->pullOver != 0) {
    (carObj->script).lastReactionIndex[5] = 0;
  }
  if (simGlobal.gameTicks < carObj->targetLatPos) {
    iVar5 = (carObj->script).lastReactionIndex[5];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    (carObj->script).lastReactionIndex[5] = iVar5 >> 2;
  }
  iVar5 = (carObj->script).lastReactionIndex[3];
  if (iVar5 == -1) {
    iVar5 = (carObj->script).lastActionTime;
    if ((iVar5 < (carObj->script).lastReactionIndex[5]) ||
       ((carObj->script).lastReactionIndex[2] != -1)) {
      iVar3 = (uint)(byte)(carObj->control).brakeLevel + AIPhysic_elapsedTime * 4;
      (carObj->linearAcc_ch).z = iVar4;
      if (iVar3 < 0xff) {
        (carObj->control).brakeLevel = (char)iVar3;
      }
      else {
        (carObj->control).brakeLevel = -1;
      }
      if (3 < (byte)(carObj->control).brakeLevel) {
        (carObj->control).desiredBrakeLevel = '\x01';
      }
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      iVar3 = AIPhysic_iTime;
      if (AIPhysic_iTime < 0) {
        iVar3 = AIPhysic_iTime + 0xff;
      }
      iVar6 = (carObj->script).lastReactionIndex[3];
      iVar5 = (carObj->script).lastReactionIndex[2];
      iVar3 = (carObj->script).lastActionTime + (iVar4 >> 8) * (iVar3 >> 8);
      (carObj->script).lastActionTime = iVar3;
      if (iVar6 != iVar5) {
        return;
      }
      iVar4 = (carObj->script).lastReactionIndex[5];
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
      goto LAB_8006a5dc;
    }
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + 0xff;
    }
    iVar6 = AIPhysic_iTime;
    if (AIPhysic_iTime < 0) {
      iVar6 = AIPhysic_iTime + 0xff;
    }
    bVar1 = (carObj->control).brakeLevel;
    bVar2 = AIPhysic_elapsedTime < (int)(uint)bVar1;
    (carObj->script).lastActionTime = iVar5 - (iVar4 >> 8) * (iVar6 >> 8);
    if (bVar2) {
      (carObj->control).brakeLevel = bVar1 - (char)AIPhysic_elapsedTime;
    }
    else {
      (carObj->control).brakeLevel = '\0';
    }
    if ((carObj->control).brakeLevel == '\0') {
      (carObj->control).desiredBrakeLevel = '\0';
    }
    iVar5 = (carObj->script).lastActionTime;
    iVar4 = (carObj->script).lastReactionIndex[5];
    (carObj->linearAcc_ch).z = iVar3;
    bVar2 = iVar5 < iVar4;
  }
  else {
    iVar6 = (carObj->script).lastActionTime;
    if (((carObj->script).lastReactionIndex[5] < iVar6) ||
       (iVar5 != (carObj->script).lastReactionIndex[2])) {
      iVar3 = (uint)(byte)(carObj->control).brakeLevel + AIPhysic_elapsedTime * 4;
      (carObj->linearAcc_ch).z = iVar4;
      if (iVar3 < 0xff) {
        (carObj->control).brakeLevel = (char)iVar3;
      }
      else {
        (carObj->control).brakeLevel = -1;
      }
      if (3 < (byte)(carObj->control).brakeLevel) {
        (carObj->control).desiredBrakeLevel = '\x01';
      }
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      iVar3 = AIPhysic_iTime;
      if (AIPhysic_iTime < 0) {
        iVar3 = AIPhysic_iTime + 0xff;
      }
      iVar6 = (carObj->script).lastReactionIndex[3];
      iVar5 = (carObj->script).lastReactionIndex[2];
      iVar3 = (carObj->script).lastActionTime - (iVar4 >> 8) * (iVar3 >> 8);
      (carObj->script).lastActionTime = iVar3;
      if (iVar6 != iVar5) {
        return;
      }
      iVar4 = (carObj->script).lastReactionIndex[5];
      if (iVar4 < iVar3) {
        iVar4 = iVar3;
      }
      goto LAB_8006a5dc;
    }
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + 0xff;
    }
    iVar5 = AIPhysic_iTime;
    if (AIPhysic_iTime < 0) {
      iVar5 = AIPhysic_iTime + 0xff;
    }
    bVar1 = (carObj->control).brakeLevel;
    bVar2 = AIPhysic_elapsedTime < (int)(uint)bVar1;
    (carObj->script).lastActionTime = iVar6 + (iVar4 >> 8) * (iVar5 >> 8);
    if (bVar2) {
      (carObj->control).brakeLevel = bVar1 - (char)AIPhysic_elapsedTime;
    }
    else {
      (carObj->control).brakeLevel = '\0';
    }
    if ((carObj->control).brakeLevel == '\0') {
      (carObj->control).desiredBrakeLevel = '\0';
    }
    iVar5 = (carObj->script).lastActionTime;
    iVar4 = (carObj->script).lastReactionIndex[5];
    (carObj->linearAcc_ch).z = iVar3;
    bVar2 = iVar4 < iVar5;
  }
  if (!bVar2) {
    return;
  }
LAB_8006a5dc:
  (carObj->script).lastActionTime = iVar4;
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

	/* begin block 2 */
		// Start line: 1900
	/* end block 2 */
	// End Line: 1901

	/* begin block 3 */
		// Start line: 1913
	/* end block 3 */
	// End Line: 1914

	/* begin block 4 */
		// Start line: 1913
	/* end block 4 */
	// End Line: 1914

void AIPhysic_SimplePhysics_LatVel__FP8Car_tObj(Car_tObj *carObj)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  speechModeType sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  sVar4 = (carObj->speechInfo).speechMode;
  iVar7 = 0;
  if (0x30000 < (int)sVar4) {
    iVar7 = (carObj->angularAcc_ch).y - (carObj->speechInfo).playerCarIndex;
    sVar4 = (carObj->speechInfo).speechMode;
  }
  if ((int)sVar4 < 0x190001) {
    iVar5 = (carObj->script).lastActionTime;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    carObj->originalDesiredSpeed = iVar7;
    if (iVar7 < -iVar5) {
      carObj->originalDesiredSpeed = -iVar5;
    }
    else {
      if (iVar5 < iVar7) {
        carObj->originalDesiredSpeed = iVar5;
      }
    }
  }
  else {
    iVar5 = (carObj->N).roadMatrix.m[1];
    iVar6 = (carObj->N).roadMatrix.m[2];
    uVar1 = fixedmult(iVar7,(carObj->N).roadMatrix.m[0]);
    uVar2 = fixedmult(iVar7,iVar5);
    uVar3 = fixedmult(iVar7,iVar6);
    (carObj->N).position.x = (carObj->N).position.x + uVar1;
    (carObj->N).position.y = (carObj->N).position.y + uVar2;
    iVar7 = (carObj->N).position.z;
    carObj->originalDesiredSpeed = 0;
    (carObj->N).position.z = iVar7 + uVar3;
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

	/* begin block 2 */
		// Start line: 2001
	/* end block 2 */
	// End Line: 2002

	/* begin block 3 */
		// Start line: 2028
	/* end block 3 */
	// End Line: 2029

	/* begin block 4 */
		// Start line: 2028
	/* end block 4 */
	// End Line: 2029

void AIPhysic_CoolPhysics__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  
  (carObj->speechInfo).speechSource = (carObj->speechInfo).speechSource | 0x10;
  AIPhysic_HandleDirection__FP8Car_tObj(carObj);
  if (((carObj->script).lastReactionIndex[3] * (carObj->script).lastActionTime < 0) &&
     (carObj->speedFactor != -1)) {
    (carObj->angularAcc_ch).y = 0;
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

	/* begin block 2 */
		// Start line: 2092
	/* end block 2 */
	// End Line: 2093

	/* begin block 3 */
		// Start line: 2102
	/* end block 3 */
	// End Line: 2103

	/* begin block 4 */
		// Start line: 2102
	/* end block 4 */
	// End Line: 2103

void AIPhysic_HandleDirection__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  
  if (carObj->speedFactor == -1) {
    iVar1 = (carObj->angularAcc_ch).y;
    iVar2 = (carObj->speechInfo).playerCarIndex;
    if (((iVar2 < iVar1 + -0xa0000) && (0 < (carObj->desiredVector).x)) ||
       (((int)&PTR_000a0000 + iVar1 < iVar2 && ((carObj->desiredVector).x < 0)))) {
      carObj->barrierThinkHarder = simGlobal.gameTicks + -0x18;
    }
    if ((int)carObj->brakeInfo < simGlobal.gameTicks - carObj->barrierThinkHarder) {
      carObj->speedFactor = 1;
      carObj->barrierThinkHarder = simGlobal.gameTicks;
    }
    if (0x140000 < (carObj->script).lastReactionIndex[5]) {
      (carObj->script).lastReactionIndex[5] = 0x140000;
    }
    if (0x140000 < -(carObj->script).lastReactionIndex[5]) {
      (carObj->script).lastReactionIndex[5] = -0x140000;
    }
    (carObj->angularAcc_ch).y = 0;
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

	/* begin block 2 */
		// Start line: 2153
	/* end block 2 */
	// End Line: 2154

	/* begin block 3 */
		// Start line: 2162
	/* end block 3 */
	// End Line: 2163

	/* begin block 4 */
		// Start line: 2162
	/* end block 4 */
	// End Line: 2163

void AIPhysic_Preperation__FP8Car_tObj(Car_tObj *carObj)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = fixedmult((carObj->N).linearVel.x,(carObj->N).orientMat.m[0]);
  uVar2 = fixedmult((carObj->N).linearVel.y,(carObj->N).orientMat.m[1]);
  uVar3 = fixedmult((carObj->N).linearVel.z,(carObj->N).orientMat.m[2]);
  iVar5 = (carObj->N).linearVel.x;
  iVar6 = (carObj->N).orientMat.m[3];
  (carObj->linearVel_ch).x = uVar1 + uVar2 + uVar3;
  uVar1 = fixedmult(iVar5,iVar6);
  uVar2 = fixedmult((carObj->N).linearVel.y,(carObj->N).orientMat.m[4]);
  uVar3 = fixedmult((carObj->N).linearVel.z,(carObj->N).orientMat.m[5]);
  iVar5 = (carObj->N).linearVel.x;
  iVar6 = (carObj->N).orientMat.m[6];
  (carObj->linearVel_ch).y = uVar1 + uVar2 + uVar3;
  uVar1 = fixedmult(iVar5,iVar6);
  uVar2 = fixedmult((carObj->N).linearVel.y,(carObj->N).orientMat.m[7]);
  uVar3 = fixedmult((carObj->N).linearVel.z,(carObj->N).orientMat.m[8]);
  iVar5 = (carObj->N).angularVel.x;
  iVar6 = (carObj->N).orientMat.m[0];
  (carObj->linearVel_ch).z = uVar1 + uVar2 + uVar3;
  uVar1 = fixedmult(iVar5,iVar6);
  uVar2 = fixedmult((carObj->N).angularVel.y,(carObj->N).orientMat.m[1]);
  uVar3 = fixedmult((carObj->N).angularVel.z,(carObj->N).orientMat.m[2]);
  iVar5 = (carObj->N).angularVel.x;
  iVar6 = (carObj->N).orientMat.m[3];
  (carObj->angularVel_ch).x = uVar1 + uVar2 + uVar3;
  uVar1 = fixedmult(iVar5,iVar6);
  uVar2 = fixedmult((carObj->N).angularVel.y,(carObj->N).orientMat.m[4]);
  uVar3 = fixedmult((carObj->N).angularVel.z,(carObj->N).orientMat.m[5]);
  iVar5 = (carObj->N).angularVel.x;
  iVar6 = (carObj->N).orientMat.m[6];
  (carObj->angularVel_ch).y = uVar1 + uVar2 + uVar3;
  uVar1 = fixedmult(iVar5,iVar6);
  uVar2 = fixedmult((carObj->N).angularVel.y,(carObj->N).orientMat.m[7]);
  uVar3 = fixedmult((carObj->N).angularVel.z,(carObj->N).orientMat.m[8]);
  iVar5 = (carObj->linearVel_ch).x;
  (carObj->angularVel_ch).z = uVar1 + uVar2 + uVar3;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  iVar6 = iVar5;
  if (iVar5 < 0) {
    iVar6 = iVar5 + 0xff;
  }
  if ((iVar6 >> 8) * 0x19 < iVar5) {
    carObj->slide = 0x8000;
  }
  else {
    carObj->slide = 0;
  }
  uVar1 = (carObj->N).orientMat.m[6];
  uVar2 = (carObj->N).orientMat.m[8];
  if (carObj->speedFactor != 1) {
    uVar1 = -uVar1;
    uVar2 = -uVar2;
  }
  iVar5 = intatan(uVar1,uVar2);
  carObj->laneIndex = iVar5;
  AIPhysic_GetDesiredVector__FP8Car_tObj(carObj);
  iVar6 = intatan(*(uint *)(carObj->accTable + 0x66),*(uint *)(carObj->accTable + 0x6a));
  iVar5 = iVar5 - iVar6;
  iVar4 = iVar5 + 0x400;
  if (-0x201 < iVar5) {
    *(int *)(carObj->accTable + 0x6c) = iVar5;
    if (iVar5 < 0x201) goto LAB_8006ab00;
    iVar4 = iVar5 + -0x400;
  }
  *(int *)(carObj->accTable + 0x6c) = iVar4;
LAB_8006ab00:
  carObj->copTopSpeed = iVar6;
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

	/* begin block 2 */
		// Start line: 2260
	/* end block 2 */
	// End Line: 2261

	/* begin block 3 */
		// Start line: 2268
	/* end block 3 */
	// End Line: 2269

	/* begin block 4 */
		// Start line: 2268
	/* end block 4 */
	// End Line: 2269

int AIPhysic_CalculateRoadPosition__FP8coorddefi(coorddef *pos,int slice)

{
  Trk_NewSlice *pTVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pTVar1 = BWorldSm_slices + slice;
  iVar5 = pos->x - pTVar1->center[0];
  iVar6 = pos->y - pTVar1->center[1];
  iVar7 = pos->z - pTVar1->center[2];
  pTVar1 = BWorldSm_slices + slice;
  iVar2 = (int)pTVar1->right[0] * 0x200;
  iVar3 = (int)pTVar1->right[1] * 0x200;
  iVar4 = (int)pTVar1->right[2] * 0x200;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
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
  return (iVar2 >> 8) * (iVar5 >> 8) + (iVar3 >> 8) * (iVar6 >> 8) + (iVar4 >> 8) * (iVar7 >> 8);
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

	/* begin block 2 */
		// Start line: 2308
	/* end block 2 */
	// End Line: 2309

	/* begin block 3 */
		// Start line: 2318
	/* end block 3 */
	// End Line: 2319

	/* begin block 4 */
		// Start line: 2318
	/* end block 4 */
	// End Line: 2319

void AIPhysic_GetDesiredVector__FP8Car_tObj(Car_tObj *carObj)

{
  bool bVar1;
  int laneIndex;
  uint uVar2;
  Trk_NewSlice *pTVar3;
  int iVar4;
  int iVar5;
  int slice;
  int iVar6;
  int lookAhead;
  coorddef local_38;
  int local_28;
  int local_24;
  int local_20;
  
  slice = (int)(carObj->N).simRoadInfo.slice;
  iVar6 = 0;
  if ((((carObj->desiredVector).y != 0) || ((carObj->desiredVector).z != 0)) ||
     (carObj->aCarWRTDesired != 0)) {
    AIPhysic_TargetedGetDesiredVector__FP8Car_tObj(carObj);
    return;
  }
  laneIndex = (carObj->script).lastActionTime;
  if (laneIndex < 0) {
    laneIndex = -laneIndex;
  }
  uVar2 = fixedmult(laneIndex,(int)&DAT_0000b333);
  iVar5 = (int)(uVar2 + 0x30000) >> 0x1f;
  iVar5 = ((int)(uVar2 + 0x30000) / 6 + iVar5 >> 0x10) - iVar5;
  if (((-1 < iVar5) && (iVar5 < AIPhysicConfig.min_lookahead / 6)) && (-1 < laneIndex)) {
    iVar5 = AIPhysicConfig.min_lookahead / 6;
  }
  if (AIPhysicConfig.max_lookahead / 6 < iVar5) {
    iVar5 = AIPhysicConfig.max_lookahead / 6;
  }
  lookAhead = iVar5 * carObj->speedFactor * (carObj->script).lastReactionIndex[3];
  laneIndex = slice + lookAhead;
  if (lookAhead < 0) {
    if (laneIndex < 0) {
      laneIndex = laneIndex + gNumSlices;
    }
  }
  else {
    if (gNumSlices <= laneIndex) {
      laneIndex = laneIndex - gNumSlices;
    }
  }
  carObj->timeOffRoad = laneIndex;
  laneIndex = AIWorld_CalcRoadBend__FP8Car_tObji(carObj,lookAhead);
  pTVar3 = BWorldSm_slices + carObj->timeOffRoad;
  if (laneIndex < 0) {
    laneIndex = -laneIndex;
  }
  if ((uint)pTVar3->avgPavedWidthLf * 0x8000 * (uint)(pTVar3->laneCount >> 4) +
      (uint)pTVar3->avgPavedWidthRt * 0x8000 * ((uint)pTVar3->laneCount & 0xf) < 0x120000) {
    if (0xf333 < laneIndex) {
      lookAhead = iVar5 * 0xca3d;
      iVar5 = lookAhead >> 0x10;
      if (lookAhead < 0) {
        iVar5 = lookAhead + 0xffff >> 0x10;
      }
    }
    if (laneIndex < 0xe667) {
      if (laneIndex < 0xcccd) {
        if (laneIndex < 0xc001) goto LAB_8006af18;
        laneIndex = iVar5 * 0xf333;
      }
      else {
        laneIndex = iVar5 * 0xe666;
      }
    }
    else {
      laneIndex = iVar5 * 0xd70a;
    }
    iVar5 = laneIndex >> 0x10;
    if (laneIndex < 0) {
      iVar5 = laneIndex + 0xffff >> 0x10;
    }
  }
LAB_8006af18:
  do {
    laneIndex = iVar5 * carObj->speedFactor * (carObj->script).lastReactionIndex[3];
    if (laneIndex < 0) {
      laneIndex = slice + laneIndex;
      if (laneIndex < 0) {
        laneIndex = laneIndex + gNumSlices;
      }
    }
    else {
      laneIndex = slice + laneIndex;
      if (gNumSlices <= laneIndex) {
        laneIndex = laneIndex - gNumSlices;
      }
    }
    carObj->timeOffRoad = laneIndex;
    pTVar3 = BWorldSm_slices + carObj->timeOffRoad;
    laneIndex = pTVar3->center[0];
    lookAhead = pTVar3->center[1];
    iVar4 = pTVar3->center[2];
    local_28 = (int)BWorldSm_slices[carObj->timeOffRoad].right[0] << 9;
    local_24 = (int)BWorldSm_slices[carObj->timeOffRoad].right[1] << 9;
    local_20 = (int)BWorldSm_slices[carObj->timeOffRoad].right[2] << 9;
    local_38.x = fixedmult((carObj->angularAcc_ch).y,local_28);
    local_38.y = fixedmult((carObj->angularAcc_ch).y,local_24);
    uVar2 = fixedmult((carObj->angularAcc_ch).y,local_20);
    local_38.x = local_38.x + laneIndex;
    local_38.z = uVar2 + iVar4;
    local_38.y = local_38.y + lookAhead;
    laneIndex = AIPhysic_CalculateRoadPosition__FP8coorddefi(&local_38,slice);
    pTVar3 = BWorldSm_slices + slice;
    if ((((int)((uint)pTVar3->avgPavedWidthRt * 0x8000 * ((uint)pTVar3->laneCount & 0xf)) <
          laneIndex) && ((carObj->speechInfo).playerCarIndex < laneIndex)) ||
       ((laneIndex < (int)-((uint)pTVar3->avgPavedWidthLf * 0x8000 * (uint)(pTVar3->laneCount >> 4))
        && (laneIndex < (carObj->speechInfo).playerCarIndex)))) {
      lookAhead = (carObj->speechInfo).playerCarIndex;
      iVar4 = 1;
      if (laneIndex < lookAhead) {
        iVar4 = -1;
      }
      laneIndex = AIWorld_LaneIndex__Fii(slice,lookAhead + iVar4 * 0x80000);
      laneIndex = AIWorld_IsDriveableLane__Fii(slice,laneIndex);
      if (laneIndex == 0) {
        bVar1 = false;
      }
      else {
        laneIndex = AIWorld_LaneIndex__Fii
                              (slice,(carObj->speechInfo).playerCarIndex + iVar4 * 0x40000);
        laneIndex = AIWorld_IsDriveableLane__Fii(slice,laneIndex);
        bVar1 = laneIndex != 0;
      }
    }
    else {
      bVar1 = true;
    }
    iVar6 = iVar6 + 1;
    laneIndex = iVar5 * 0xcccc;
    if (laneIndex < 0) {
      laneIndex = laneIndex + 0xffff;
    }
    iVar5 = 4;
    if (3 < laneIndex >> 0x10) {
      iVar5 = laneIndex >> 0x10;
    }
  } while ((iVar6 < 5) && (!bVar1));
  *(uint *)(carObj->accTable + 0x66) = local_38.x - (carObj->N).position.x;
  *(uint *)(carObj->accTable + 0x68) = local_38.y - (carObj->N).position.y;
  *(int *)(carObj->accTable + 0x6a) = local_38.z - (carObj->N).position.z;
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

	/* begin block 2 */
		// Start line: 2691
	/* end block 2 */
	// End Line: 2692

	/* begin block 3 */
		// Start line: 2694
	/* end block 3 */
	// End Line: 2695

	/* begin block 4 */
		// Start line: 2694
	/* end block 4 */
	// End Line: 2695

	/* begin block 5 */
		// Start line: 2697
	/* end block 5 */
	// End Line: 2698

void AIPhysic_TargetedGetDesiredVector__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (carObj->desiredVector).z;
  iVar3 = (carObj->N).position.y;
  *(int *)(carObj->accTable + 0x66) = (carObj->desiredVector).y - (carObj->N).position.x;
  iVar1 = carObj->aCarWRTDesired;
  *(int *)(carObj->accTable + 0x68) = iVar2 - iVar3;
  iVar2 = (carObj->angularAcc_ch).x;
  *(int *)(carObj->accTable + 0x6a) = iVar1 - (carObj->N).position.z;
  (carObj->angularAcc_ch).y = iVar2;
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

	/* begin block 2 */
		// Start line: 2723
	/* end block 2 */
	// End Line: 2724

	/* begin block 3 */
		// Start line: 2731
	/* end block 3 */
	// End Line: 2732

	/* begin block 4 */
		// Start line: 2731
	/* end block 4 */
	// End Line: 2732

int AIPhysic_CheckIfOutOfControl__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  Trk_NewSlice *pTVar3;
  speechModeType sVar4;
  int iVar5;
  
  iVar1 = AIWorld_CalcRoadBend__FP8Car_tObji(carObj,(carObj->script).lastReactionIndex[3] << 3);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (simGlobal.gameTicks < carObj->targetLatPos) {
    iVar1 = (carObj->script).lastActionTime;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    return (uint)(0x2ffff < iVar1) ^ 1;
  }
  iVar2 = *(int *)(carObj->accTable + 0x6c);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if ((iVar2 < 0x74) && (carObj->speedFactor != -1)) {
    iVar2 = (carObj->script).lastActionTime;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < AIPhysicConfig.OOCModel.vel_limit_range + -0x30000) {
      return 1;
    }
    pTVar3 = BWorldSm_slices + (int)(carObj->N).simRoadInfo.slice;
    iVar5 = (carObj->speechInfo).playerCarIndex;
    if (iVar5 < (int)-((uint)pTVar3->avgPavedWidthLf * 0x8000 * (uint)(pTVar3->laneCount >> 4))) {
      return 1;
    }
    if ((int)((uint)pTVar3->avgPavedWidthRt * 0x8000 * ((uint)pTVar3->laneCount & 0xf)) < iVar5) {
      return 1;
    }
    if (0xcccc < iVar1) {
      return 1;
    }
    iVar1 = (carObj->linearVel_ch).x;
    sVar4 = (carObj->speechInfo).speechMode;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if ((int)sVar4 < 0) {
      sVar4 = sVar4 + 0xff;
    }
    if (iVar1 <= ((int)sVar4 >> 8) * 0x66) {
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

	/* begin block 2 */
		// Start line: 2837
	/* end block 2 */
	// End Line: 2838

	/* begin block 3 */
		// Start line: 2855
	/* end block 3 */
	// End Line: 2856

	/* begin block 4 */
		// Start line: 2855
	/* end block 4 */
	// End Line: 2856

void AIPhysic_OutOfControlPhysics__FP8Car_tObj(Car_tObj *carObj)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  speechModeType sVar9;
  speechModeType sVar10;
  speechModeType sVar11;
  speechModeType sVar12;
  int iVar13;
  
  iVar3 = (carObj->script).lastReactionIndex[3];
  carObj->aCarWRTRoad = 0;
  bVar2 = false;
  iVar3 = AIWorld_CalcFutureLateralVel__FP8Car_tObji
                    (carObj,iVar3 * AIPhysicConfig.latvelcalc_lookahead);
  if ((carObj->script).lastReactionIndex[3] * (carObj->script).lastActionTime < 0) {
    bVar2 = ~carObj->speedFactor != 0;
  }
  carObj->targetLatPos = simGlobal.gameTicks;
  uVar4 = fixedmult(0x80,AIPhysicConfig.OOCModel.dangle_to_dav);
  iVar13 = -*(int *)(carObj->accTable + 0x6c) * uVar4;
  iVar5 = AIPhysicConfig.OOCModel.max_dav;
  if (iVar13 < AIPhysicConfig.OOCModel.max_dav) {
    iVar5 = iVar13;
  }
  iVar13 = -AIPhysicConfig.OOCModel.max_dav;
  if (-AIPhysicConfig.OOCModel.max_dav < iVar5) {
    iVar13 = iVar5;
  }
  iVar5 = iVar13;
  if (iVar13 < 0) {
    iVar5 = iVar13 + 0xff;
  }
  sVar11 = (iVar5 >> 8) * 0xa00;
  sVar9 = AIPhysicConfig.OOCModel.max_dlvel;
  if ((int)sVar11 < AIPhysicConfig.OOCModel.max_dlvel) {
    sVar9 = sVar11;
  }
  sVar11 = -AIPhysicConfig.OOCModel.max_dlvel;
  if (-AIPhysicConfig.OOCModel.max_dlvel < (int)sVar9) {
    sVar11 = sVar9;
  }
  sVar9 = (carObj->speechInfo).speechMode;
  if ((int)sVar11 < (int)sVar9) {
    sVar9 = sVar11;
  }
  sVar12 = (carObj->speechInfo).speechMode;
  sVar11 = -sVar12;
  if ((int)-sVar12 < (int)sVar9) {
    sVar11 = sVar9;
  }
  iVar5 = (carObj->script).lastActionTime;
  if ((-AIPhysicConfig.OOCModel.vel_limit_range < iVar5) &&
     (iVar5 < AIPhysicConfig.OOCModel.vel_limit_range)) {
    if ((int)sVar12 < 0) {
      sVar12 = sVar12 + 0xff;
    }
    iVar5 = AIPhysicConfig.OOCModel.lat_vel_limit_factor;
    if (AIPhysicConfig.OOCModel.lat_vel_limit_factor < 0) {
      iVar5 = AIPhysicConfig.OOCModel.lat_vel_limit_factor + 0xff;
    }
    sVar9 = ((int)sVar12 >> 8) * (iVar5 >> 8);
    if ((int)sVar9 < 0) {
      sVar9 = -sVar9;
    }
    sVar10 = sVar9;
    if ((int)sVar11 < (int)sVar9) {
      sVar10 = sVar11;
    }
    sVar11 = -sVar9;
    if ((int)-sVar9 < (int)sVar10) {
      sVar11 = sVar10;
    }
    iVar5 = AIPhysicConfig.OOCModel.ang_vel_limit_factor;
    if (AIPhysicConfig.OOCModel.ang_vel_limit_factor < 0) {
      iVar5 = AIPhysicConfig.OOCModel.ang_vel_limit_factor + 0xff;
    }
    iVar5 = ((int)sVar12 >> 8) * (iVar5 >> 8);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    iVar8 = iVar5;
    if (iVar13 < iVar5) {
      iVar8 = iVar13;
    }
    iVar13 = -iVar5;
    if (-iVar5 < iVar8) {
      iVar13 = iVar8;
    }
  }
  if (carObj->preferredLateralPosition == 2) {
    iVar13 = iVar13 * 5;
  }
  iVar13 = (carObj->angularVel_ch).y - iVar13;
  if (iVar13 < 0) {
    iVar13 = iVar13 + 0xff;
  }
  iVar5 = AIPhysicConfig.OOCModel.dav_to_aa;
  if (AIPhysicConfig.OOCModel.dav_to_aa < 0) {
    iVar5 = AIPhysicConfig.OOCModel.dav_to_aa + 0xff;
  }
  iVar8 = (carObj->script).lastActionTime;
  if (iVar8 < 0) {
    iVar8 = -iVar8;
  }
  uVar4 = -((iVar13 >> 8) * (iVar5 >> 8));
  if (0x120000 < iVar8) {
    uVar4 = (int)(uVar4 + (uVar4 >> 0x1f)) >> 1;
  }
  uVar7 = carObj->aCar;
  if ((int)uVar4 < carObj->aCar) {
    uVar7 = uVar4;
  }
  uVar4 = -carObj->aCar;
  if (-carObj->aCar < (int)uVar7) {
    uVar4 = uVar7;
  }
  iVar5 = (carObj->linearVel_ch).x - sVar11;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar13 = AIPhysicConfig.OOCModel.dlvel_to_clacc;
  if (AIPhysicConfig.OOCModel.dlvel_to_clacc < 0) {
    iVar13 = AIPhysicConfig.OOCModel.dlvel_to_clacc + 0xff;
  }
  iVar5 = -((iVar5 >> 8) * (iVar13 >> 8));
  iVar13 = carObj->driveDirectionTimer;
  if (iVar5 < carObj->driveDirectionTimer) {
    iVar13 = iVar5;
  }
  iVar5 = -carObj->driveDirectionTimer;
  if (-carObj->driveDirectionTimer < iVar13) {
    iVar5 = iVar13;
  }
  iVar13 = (carObj->linearVel_ch).z;
  if ((((carObj->speedFactor == -1) && ((carObj->desiredVector).y == 0)) &&
      ((carObj->desiredVector).z == 0)) && (carObj->aCarWRTDesired == 0)) {
    iVar8 = -AIPhysicConfig.OOCModel.vel_limit_range;
  }
  else {
    iVar8 = (carObj->script).lastReactionIndex[5] * (carObj->script).lastReactionIndex[3] *
            carObj->speedFactor;
  }
  if (carObj->pullOver == 0) {
    if (iVar8 < 0) {
      if ((iVar8 <= iVar13) && (iVar13 < 0x20001)) goto LAB_8006b814;
    }
    else {
      if ((-0x20001 < iVar13) && (iVar13 <= iVar8)) {
LAB_8006b814:
        if ((carObj->script).lastReactionIndex[2] == (carObj->script).lastReactionIndex[3]) {
          iVar13 = AIPhysic_CalcAcceleration__FP8Car_tObji(carObj,(carObj->linearVel_ch).z);
          uVar7 = iVar13 * carObj->speedFactor;
          bVar1 = (carObj->control).brakeLevel;
          if (AIPhysic_elapsedTime < (int)(uint)bVar1) {
            (carObj->control).brakeLevel = bVar1 - (char)AIPhysic_elapsedTime;
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
  iVar13 = (carObj->linearVel_ch).z;
  if (iVar13 < 0) {
    iVar13 = -iVar13;
  }
  uVar7 = 0;
  if (0 < iVar13) {
    uVar6 = AIPhysic_CalcDeceleration__FP8Car_tObj(carObj);
    iVar13 = (uint)(byte)(carObj->control).brakeLevel + AIPhysic_elapsedTime * 4;
    if (iVar13 < 0xff) {
      (carObj->control).brakeLevel = (char)iVar13;
    }
    else {
      (carObj->control).brakeLevel = -1;
    }
    if (3 < (byte)(carObj->control).brakeLevel) {
      (carObj->control).desiredBrakeLevel = '\x01';
    }
    uVar7 = -uVar6;
    if ((carObj->linearVel_ch).z < 0) {
      uVar7 = uVar6;
    }
  }
LAB_8006b908:
  if (bVar2) {
    if ((carObj->speechInfo).speechMode + 0xffebffff < 0x1dffff) {
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 + 3;
      }
      uVar4 = (int)uVar4 >> 2;
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 3;
      }
      uVar7 = (int)uVar7 >> 2;
    }
    else {
      uVar4 = fixedmult(uVar4,0xc000);
      iVar13 = uVar7 + (uVar7 >> 0x1f);
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 3;
      }
      uVar7 = (iVar13 >> 1) + ((int)uVar7 >> 2);
    }
    iVar13 = iVar5;
    if (iVar5 < 0) {
      iVar13 = iVar5 + 3;
    }
    if (iVar5 < 0) {
      iVar5 = iVar5 + 7;
    }
    iVar5 = (iVar13 >> 2) + (iVar5 >> 3);
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  iVar3 = iVar3 - AIPhysicConfig.skid_value;
  if ((((carObj->script).lastReactionIndex[3] * (carObj->script).lastActionTime < 0) &&
      (0x38e38 < (int)(carObj->speechInfo).speechMode)) || (carObj->preferredLateralPosition != 0))
  {
    carObj->frontSkid = 0xa0000;
    carObj->rearSkid = 0xa0000;
  }
  else {
    if (iVar3 < 1) {
      carObj->rearSkid = 0;
      carObj->frontSkid = 0;
    }
    else {
      carObj->frontSkid = iVar3;
      carObj->rearSkid = iVar3;
    }
  }
  (carObj->linearAcc_ch).x = iVar5;
  (carObj->linearAcc_ch).y = 0;
  (carObj->linearAcc_ch).z = uVar7;
  (carObj->linearAcc_rh).x = 0;
  (carObj->linearAcc_rh).y = 0;
  (carObj->linearAcc_rh).z = 0;
  (carObj->angularAcc).x = 0;
  (carObj->angularAcc).y = uVar4;
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

	/* begin block 2 */
		// Start line: 3275
	/* end block 2 */
	// End Line: 3276

	/* begin block 3 */
		// Start line: 3328
	/* end block 3 */
	// End Line: 3329

	/* begin block 4 */
		// Start line: 3328
	/* end block 4 */
	// End Line: 3329

int AIPhysic_GetRearEndDamageFactor__FP8Car_tObj(Car_tObj *carObj)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fixedmult((carObj->N).damage[4] + (carObj->N).damage[5] + (carObj->N).damage[6] +
                    (carObj->N).damage[9],0x147);
  uVar2 = 0x10000;
  if ((int)uVar1 < 0x10001) {
    uVar2 = uVar1;
  }
  return uVar2;
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

	/* begin block 2 */
		// Start line: 3383
	/* end block 2 */
	// End Line: 3384

	/* begin block 3 */
		// Start line: 3403
	/* end block 3 */
	// End Line: 3404

	/* begin block 4 */
		// Start line: 3403
	/* end block 4 */
	// End Line: 3404

/* WARNING: Type propagation algorithm not settling */

void AIPhysic_InControlPhysics__FP8Car_tObj(Car_tObj *carObj)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  BO_tNewtonObj *pBVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  speechModeType sVar11;
  int iVar12;
  undefined **ppuVar13;
  int speed;
  int iVar14;
  coorddef local_60;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  local_38 = (carObj->script).lastReactionIndex[3];
  carObj->aCarWRTRoad = 0;
  local_60.x = *(int *)(carObj->accTable + 0x66);
  local_60.y = *(int *)(carObj->accTable + 0x68);
  local_60.z = *(int *)(carObj->accTable + 0x6a);
  Math_QDNormalizeVector__FP8coorddef(&local_60);
  local_30 = 0;
  local_48 = -local_60.x;
  local_50 = local_60.z;
  local_4c = local_60.y;
  ppuVar13 = (undefined **)0x0;
  uVar2 = fixedmult((carObj->N).linearVel.x,local_60.z);
  uVar3 = fixedmult((carObj->N).linearVel.y,local_4c);
  uVar4 = fixedmult((carObj->N).linearVel.z,local_48);
  local_40 = (uVar2 + uVar3 + uVar4) * (carObj->script).lastReactionIndex[3];
  speed = carObj->aCar;
  local_3c = (carObj->speechInfo).playerCarIndex - (carObj->angularAcc_ch).y;
  uVar2 = fixedmult((carObj->linearVel_ch).z,0x62);
  uVar2 = fixedmult(uVar2 + 0x10000,carObj->max_aa);
  if (((carObj->carFlags & 8U) != 0) && ((carObj->targetPos).z < simGlobal.gameTicks)) {
    iVar5 = (carObj->N).angularVel.y;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if ((1000 < iVar5) && (0x1638e3 < (int)(carObj->speechInfo).speechMode)) {
      carObj->targetLatPos = simGlobal.gameTicks + 0x180;
    }
  }
  iVar12 = simGlobal.gameTicks - (carObj->N).collision.lastTime;
  iVar5 = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&carObj->script,AISCRIPT_AIREACTION_WIPE_OUT);
  if ((iVar5 != -1) || (simGlobal.gameTicks < carObj->targetLatPos)) {
    speed = 0;
    if (simGlobal.gameTicks - (carObj->N).collision.lastTime < 0x40) {
      carObj->targetLatPos = simGlobal.gameTicks;
    }
    iVar5 = (carObj->N).angularVel.y;
    uVar2 = 0;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    puVar7 = (undefined *)(iVar5 + 0x1ca);
    if (0x3333 < (int)puVar7) {
      puVar7 = &DAT_00003333;
    }
    if ((carObj->N).angularVel.y < 1) {
      (carObj->N).angularVel.y = -(int)puVar7;
    }
    else {
      *(undefined **)&(carObj->N).angularVel.y = puVar7;
    }
    ppuVar13 = &PTR_000a0000;
  }
  iVar5 = GameSetup_gData.skill;
  if (iVar12 < 0x10) {
    (carObj->targetPos).z = (carObj->targetPos).z + -0x14;
  }
  if (((iVar12 < (int)(uint)(byte)(&DAT_8013c590)[iVar5]) &&
      (pBVar6 = (carObj->N).collision.lastOtherObj, pBVar6 != (BO_tNewtonObj *)0x0)) &&
     ((pBVar6[1].simRoadInfo.quadPts[1].y & 0x200U) != 0)) {
    speed = 0;
    local_30 = 1;
    uVar2 = fixedmult(uVar2,(int)PTR_ARRAY_8010dc54[iVar5]);
  }
  iVar12 = carObj->driveDirectionTimer;
  if (iVar12 < 0) {
    iVar12 = iVar12 + 0xff;
  }
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 0xff;
  }
  iVar14 = (iVar12 >> 8) * ((int)uVar2 >> 8);
  iVar12 = AIPhysicConfig.ICModel.dlvel_to_clacc;
  if (AIPhysicConfig.ICModel.dlvel_to_clacc < 0) {
    iVar12 = AIPhysicConfig.ICModel.dlvel_to_clacc + 0xff;
  }
  iVar12 = (iVar12 >> 8) * ((int)uVar2 >> 8);
  iVar8 = carObj->aDesired;
  if (0x10000 < iVar8) {
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    if (iVar14 < 0) {
      iVar14 = iVar14 + 0xff;
    }
    iVar14 = (iVar8 >> 8) * (iVar14 >> 8);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar12 = (iVar8 >> 8) * (iVar12 >> 8);
  }
  iVar8 = *(int *)(carObj->accTable + 0x6c);
  local_34 = (carObj->script).lastReactionIndex[5];
  if (simGlobal.gameTicks < carObj->preferredLateralPositionPower) {
    iVar10 = 1;
    iVar9 = carObj->preferredLateralPositionPower - simGlobal.gameTicks;
    if ((simGlobal.gameTicks / 0x28 & 1U) != 0) {
      iVar10 = -1;
    }
    if (0x96 - iVar9 < 0x32) {
      iVar10 = (iVar10 * 0x1e * (0x96 - iVar9)) / 0x32;
    }
    else {
      iVar10 = iVar10 * (iVar9 / 7 + 10);
    }
    iVar8 = iVar8 + iVar10;
    if (0x32 < iVar9) {
      ppuVar13 = (undefined **)((iVar9 * 0x140000) / 0x32);
    }
  }
  else {
    iVar10 = iVar8;
    if (iVar8 < 0) {
      iVar10 = -iVar8;
    }
    if (((carObj->personality->fishtailAngle < iVar10) && (0 < iVar8 * (carObj->angularAcc).y)) &&
       (iVar9 = AIPhysic_GetRearEndDamageFactor__FP8Car_tObj(carObj),
       (0x10000 - iVar9) * 0x14 + (carObj->personality->fishtailAngle + -0x14) * 0x10000 <
       iVar10 << 0x10)) {
      carObj->preferredLateralPositionPower = simGlobal.gameTicks + 0x96;
    }
  }
  uVar2 = fixedmult(0x80,AIPhysicConfig.ICModel.dangle_to_dav);
  iVar10 = AIPhysicConfig.ICModel.max_dav;
  if ((int)(-iVar8 * uVar2) < AIPhysicConfig.ICModel.max_dav) {
    iVar10 = -iVar8 * uVar2;
  }
  iVar8 = -AIPhysicConfig.ICModel.max_dav;
  if (-AIPhysicConfig.ICModel.max_dav < iVar10) {
    iVar8 = iVar10;
  }
  sVar11 = (carObj->speechInfo).speechMode;
  iVar10 = (carObj->script).lastActionTime;
  if ((-AIPhysicConfig.ICModel.vel_limit_range < iVar10) &&
     (iVar10 < AIPhysicConfig.ICModel.vel_limit_range)) {
    if ((int)sVar11 < 0) {
      sVar11 = sVar11 + 0xff;
    }
    iVar10 = AIPhysicConfig.ICModel.ang_vel_limit_factor;
    if (AIPhysicConfig.ICModel.ang_vel_limit_factor < 0) {
      iVar10 = AIPhysicConfig.ICModel.ang_vel_limit_factor + 0xff;
    }
    iVar10 = ((int)sVar11 >> 8) * (iVar10 >> 8);
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    iVar9 = iVar10;
    if (iVar8 < iVar10) {
      iVar9 = iVar8;
    }
    iVar8 = -iVar10;
    if (-iVar10 < iVar9) {
      iVar8 = iVar9;
    }
  }
  uVar2 = fixedmult((carObj->angularVel_ch).y - iVar8,AIPhysicConfig.ICModel.dav_to_aa);
  iVar8 = speed;
  if ((int)-uVar2 < speed) {
    iVar8 = -uVar2;
  }
  iVar10 = -speed;
  if (-speed < iVar8) {
    iVar10 = iVar8;
  }
  uVar2 = fixedmult(local_40,iVar12);
  speed = iVar14;
  if ((int)(-local_38 * uVar2) < iVar14) {
    speed = -local_38 * uVar2;
  }
  iVar12 = -iVar14;
  if (-iVar14 < speed) {
    iVar12 = speed;
  }
  speed = (carObj->script).lastActionTime;
  if (((speed * local_38 < local_34 * local_38) && (carObj->pullOver == 0)) &&
     ((carObj->script).lastReactionIndex[2] == (carObj->script).lastReactionIndex[3])) {
    iVar14 = AIPhysic_CalcAcceleration__FP8Car_tObji(carObj,speed);
    bVar1 = (carObj->control).brakeLevel;
    if (AIPhysic_elapsedTime < (int)(uint)bVar1) {
      (carObj->control).brakeLevel = bVar1 - (char)AIPhysic_elapsedTime;
    }
    else {
      (carObj->control).brakeLevel = '\0';
    }
    if ((carObj->control).brakeLevel == '\0') {
      (carObj->control).desiredBrakeLevel = '\0';
    }
  }
  else {
    speed = AIPhysic_CalcDeceleration__FP8Car_tObj(carObj);
    iVar14 = (uint)(byte)(carObj->control).brakeLevel + AIPhysic_elapsedTime * 4;
    if (iVar14 < 0xff) {
      (carObj->control).brakeLevel = (char)iVar14;
    }
    else {
      (carObj->control).brakeLevel = -1;
    }
    if (3 < (byte)(carObj->control).brakeLevel) {
      (carObj->control).desiredBrakeLevel = '\x01';
    }
    iVar14 = -speed;
    if ((carObj->linearVel_ch).z < 0) {
      iVar14 = speed;
    }
  }
  if (local_30 != 0) {
    iVar14 = -(int)PTR_ARRAY_8010dc64[iVar5];
  }
  if (ppuVar13 == (undefined **)0x0) {
    if (local_40 < 0) {
      local_40 = -local_40;
    }
    ppuVar13 = (undefined **)(local_40 - AIPhysicConfig.skid_value);
  }
  if ((int)ppuVar13 < 1) {
    carObj->rearSkid = 0;
    carObj->frontSkid = 0;
  }
  else {
    *(undefined ***)&carObj->rearSkid = ppuVar13;
    *(undefined ***)&carObj->frontSkid = ppuVar13;
  }
  (carObj->linearAcc_ch).x = iVar12;
  (carObj->linearAcc_ch).y = 0;
  (carObj->linearAcc_ch).z = iVar14;
  (carObj->linearAcc_rh).x = 0;
  (carObj->linearAcc_rh).y = 0;
  (carObj->linearAcc_rh).z = 0;
  (carObj->angularAcc).x = 0;
  (carObj->angularAcc).y = iVar10;
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

	/* begin block 2 */
		// Start line: 4105
	/* end block 2 */
	// End Line: 4106

	/* begin block 3 */
		// Start line: 4156
	/* end block 3 */
	// End Line: 4157

	/* begin block 4 */
		// Start line: 4156
	/* end block 4 */
	// End Line: 4157

void AIPhysic_FinishUp__FP8Car_tObj(Car_tObj *carObj)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  (carObj->linearAcc_ch).z = (carObj->linearAcc_ch).z + (carObj->linearAcc_rh).z;
  Cars_DoGravityEffectsOnAcc__FP8Car_tObji(carObj,0);
  (carObj->linearAcc_ch).z = (carObj->linearAcc_ch).z - (carObj->linearAcc_rh).z;
  transpose((undefined4 *)&(carObj->N).orientMat,&local_60);
  transpose((undefined4 *)&(carObj->N).roadMatrix,&local_38);
  uVar1 = fixedmult((carObj->linearAcc_ch).x,local_60);
  uVar2 = fixedmult((carObj->linearAcc_ch).y,local_5c);
  uVar3 = fixedmult((carObj->linearAcc_ch).z,local_58);
  (carObj->linearAcc).x = uVar1 + uVar2 + uVar3;
  uVar1 = fixedmult((carObj->linearAcc_ch).x,local_54);
  uVar2 = fixedmult((carObj->linearAcc_ch).y,local_50);
  uVar3 = fixedmult((carObj->linearAcc_ch).z,local_4c);
  iVar10 = (carObj->linearAcc_ch).x;
  (carObj->linearAcc).y = uVar1 + uVar2 + uVar3;
  uVar1 = fixedmult(iVar10,local_48);
  uVar2 = fixedmult((carObj->linearAcc_ch).y,local_44);
  uVar3 = fixedmult((carObj->linearAcc_ch).z,local_40);
  iVar10 = (carObj->linearAcc_rh).x;
  (carObj->linearAcc).z = uVar1 + uVar2 + uVar3;
  uVar1 = fixedmult(iVar10,local_38);
  uVar2 = fixedmult((carObj->linearAcc_rh).y,local_34);
  uVar3 = fixedmult((carObj->linearAcc_rh).z,local_30);
  (carObj->linearAcc).x = (carObj->linearAcc).x + uVar1 + uVar2 + uVar3;
  uVar1 = fixedmult((carObj->linearAcc_rh).x,local_2c);
  uVar2 = fixedmult((carObj->linearAcc_rh).y,local_28);
  uVar3 = fixedmult((carObj->linearAcc_rh).z,local_24);
  iVar10 = (carObj->linearAcc_rh).x;
  (carObj->linearAcc).y = (carObj->linearAcc).y + uVar1 + uVar2 + uVar3;
  uVar1 = fixedmult(iVar10,local_20);
  uVar2 = fixedmult((carObj->linearAcc_rh).y,local_1c);
  uVar3 = fixedmult((carObj->linearAcc_rh).z,local_18);
  iVar10 = (carObj->angularAcc).x;
  (carObj->linearAcc).z = (carObj->linearAcc).z + uVar1 + uVar2 + uVar3;
  uVar1 = fixedmult(iVar10,local_60);
  uVar2 = fixedmult((carObj->angularAcc).y,local_5c);
  uVar3 = fixedmult((carObj->angularAcc).z,local_58);
  uVar4 = fixedmult((carObj->angularAcc).x,local_54);
  uVar5 = fixedmult((carObj->angularAcc).y,local_50);
  uVar6 = fixedmult((carObj->angularAcc).z,local_4c);
  uVar7 = fixedmult((carObj->angularAcc).x,local_48);
  uVar8 = fixedmult((carObj->angularAcc).y,local_44);
  uVar9 = fixedmult((carObj->angularAcc).z,local_40);
  (carObj->angularAcc).x = uVar1 + uVar2 + uVar3;
  (carObj->angularAcc).y = uVar4 + uVar5 + uVar6;
  (carObj->angularAcc).z = uVar7 + uVar8 + uVar9;
  iVar10 = 0;
  uVar1 = fixedmult((carObj->linearAcc).x,AIPhysic_iTime);
  iVar12 = AIPhysic_iTime;
  iVar11 = (carObj->linearAcc).y;
  (carObj->N).linearVel.x = (carObj->N).linearVel.x + uVar1;
  uVar1 = fixedmult(iVar11,iVar12);
  iVar12 = AIPhysic_iTime;
  iVar11 = (carObj->linearAcc).z;
  (carObj->N).linearVel.y = (carObj->N).linearVel.y + uVar1;
  uVar1 = fixedmult(iVar11,iVar12);
  iVar12 = carObj->aCarWRTRoad;
  (carObj->N).linearVel.z = (carObj->N).linearVel.z + uVar1;
  while ((iVar12 != 0 && (iVar10 < AIPhysic_elapsedTime))) {
    iVar10 = iVar10 + 1;
    uVar1 = fixedmult((carObj->N).linearVel.x,carObj->aCarWRTRoad);
    iVar12 = (carObj->N).linearVel.y;
    iVar11 = carObj->aCarWRTRoad;
    (carObj->N).linearVel.x = uVar1;
    uVar1 = fixedmult(iVar12,iVar11);
    iVar12 = (carObj->N).linearVel.z;
    iVar11 = carObj->aCarWRTRoad;
    (carObj->N).linearVel.y = uVar1;
    uVar1 = fixedmult(iVar12,iVar11);
    iVar12 = carObj->aCarWRTRoad;
    (carObj->N).linearVel.z = uVar1;
  }
  iVar10 = (carObj->angularAcc).x;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar12 = AIPhysic_iTime;
  if (AIPhysic_iTime < 0) {
    iVar12 = AIPhysic_iTime + 0xff;
  }
  iVar12 = iVar12 >> 8;
  iVar11 = (carObj->angularAcc).y;
  (carObj->N).angularVel.x = (carObj->N).angularVel.x + (iVar10 >> 8) * iVar12;
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar10 = (carObj->angularAcc).z;
  (carObj->N).angularVel.y = (carObj->N).angularVel.y + (iVar11 >> 8) * iVar12;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  (carObj->N).angularVel.z = (carObj->N).angularVel.z + (iVar10 >> 8) * iVar12;
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

	/* begin block 2 */
		// Start line: 4282
	/* end block 2 */
	// End Line: 4283

	/* begin block 3 */
		// Start line: 4307
	/* end block 3 */
	// End Line: 4308

	/* begin block 4 */
		// Start line: 4307
	/* end block 4 */
	// End Line: 4308

void AIPhysic_CalculateRampedDesiredLatPos__FP8Car_tObj9eRampType
               (Car_tObj *carObj,eRampType rampType)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (rampType == kRampType_NoInterpolate) {
    (carObj->angularAcc_ch).y = (carObj->script).lastReactionIndex[4];
  }
  else {
    AIWorld_CalculateDeltaRoadYaw__FP8Car_tObj(carObj);
    iVar2 = AIPhysic_elapsedTime;
    iVar5 = (carObj->speechInfo).playerCarIndex;
    iVar3 = AIPhysic_elapsedTime * 0x3333;
    if (((carObj->script).lastReactionIndex[4] < iVar5) &&
       (iVar5 < (carObj->angularAcc_ch).y + -0x10000)) {
      (carObj->angularAcc_ch).y = iVar5;
    }
    else {
      iVar5 = (carObj->speechInfo).playerCarIndex;
      if (((carObj->angularAcc_ch).y + 0x10000 < iVar5) &&
         (iVar5 < (carObj->script).lastReactionIndex[4])) {
        (carObj->angularAcc_ch).y = iVar5;
      }
    }
    iVar5 = (carObj->angularAcc_ch).y;
    iVar4 = (carObj->script).lastReactionIndex[4];
    iVar3 = iVar5 + iVar3;
    if (iVar5 < iVar4) {
      (carObj->angularAcc_ch).y = iVar3;
      bVar1 = iVar4 < iVar3;
    }
    else {
      iVar3 = iVar5 + iVar2 * -0x3333;
      if (iVar5 <= iVar4) {
        return;
      }
      iVar4 = (carObj->script).lastReactionIndex[4];
      (carObj->angularAcc_ch).y = iVar3;
      bVar1 = iVar3 < iVar4;
    }
    if (bVar1) {
      (carObj->angularAcc_ch).y = iVar4;
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

	/* begin block 2 */
		// Start line: 4495
	/* end block 2 */
	// End Line: 4496

	/* begin block 3 */
		// Start line: 4503
	/* end block 3 */
	// End Line: 4504

	/* begin block 4 */
		// Start line: 4503
	/* end block 4 */
	// End Line: 4504

	/* begin block 5 */
		// Start line: 4510
	/* end block 5 */
	// End Line: 4511

int AIPhysic_HitWallCheck__FP8Car_tObj(Car_tObj *carObj)

{
  bool bVar1;
  
  bVar1 = false;
  if ((int)(7 - (uint)(BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].laneCount >> 4)) <=
      *(int *)(carObj->accTable + 0x60)) {
    bVar1 = *(int *)(carObj->accTable + 0x60) <=
            (int)(((uint)BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].laneCount & 0xf) + 6);
  }
  if (bVar1) {
    return 0;
  }
  if (carObj->speedFactor == -1) {
    carObj->driveDirection = carObj->driveDirection + AIPhysic_elapsedTime;
  }
  else {
    carObj->driveDirection = 0;
  }
  if (carObj->driveDirection < 9) {
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

	/* begin block 2 */
		// Start line: 4593
	/* end block 2 */
	// End Line: 4594

	/* begin block 3 */
		// Start line: 4603
	/* end block 3 */
	// End Line: 4604

	/* begin block 4 */
		// Start line: 4603
	/* end block 4 */
	// End Line: 4604

void AIPhysic_ProcessBarrierCollision__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  
  if ((carObj->carFlags & 4U) == 0) {
    iVar1 = (carObj->script).lastActionTime;
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

	/* begin block 2 */
		// Start line: 4626
	/* end block 2 */
	// End Line: 4627

	/* begin block 3 */
		// Start line: 4637
	/* end block 3 */
	// End Line: 4638

	/* begin block 4 */
		// Start line: 4637
	/* end block 4 */
	// End Line: 4638

void AIPhysic_ProcessCollision__FP8Car_tObj(Car_tObj *carObj)

{
  int time;
  
  if ((0xd999 < (carObj->N).collision.impulse) &&
     ((carObj->N).collision.otherObj != (BO_tNewtonObj *)0x0)) {
    time = (carObj->script).lastActionTime;
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

	/* begin block 2 */
		// Start line: 4678
	/* end block 2 */
	// End Line: 4679

	/* begin block 3 */
		// Start line: 4695
	/* end block 3 */
	// End Line: 4696

	/* begin block 4 */
		// Start line: 4695
	/* end block 4 */
	// End Line: 4696

void AIPhysic_ChangeDirection__FP8Car_tObji(Car_tObj *carObj,int time)

{
  int iVar1;
  int iVar2;
  
  iVar2 = carObj->speedFactor;
  if (iVar2 == -1) {
    iVar2 = 1;
    if ((int)(carObj->brakeInfo->brakeTable_ + ((uint)carObj->brakeInfo >> 0x1f)) >> 1 <
        simGlobal.gameTicks - carObj->barrierThinkHarder) goto LAB_8006ca90;
    iVar2 = carObj->speedFactor;
  }
  if (iVar2 != 1) {
    return;
  }
  if (simGlobal.gameTicks - carObj->barrierThinkHarder <=
      (int)(carObj->brakeInfo->brakeTable_ + ((uint)carObj->brakeInfo >> 0x1f)) >> 1) {
    return;
  }
  iVar1 = (carObj->script).lastActionTime;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar2 = -1;
  if (0x13ffff < iVar1) {
    return;
  }
LAB_8006ca90:
  carObj->speedFactor = iVar2;
  iVar2 = simGlobal.gameTicks;
  *(int *)&carObj->brakeInfo = time;
  carObj->barrierThinkHarder = iVar2;
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

	/* begin block 2 */
		// Start line: 4753
	/* end block 2 */
	// End Line: 4754

	/* begin block 3 */
		// Start line: 4753
	/* end block 3 */
	// End Line: 4754

	/* begin block 4 */
		// Start line: 4764
	/* end block 4 */
	// End Line: 4765

	/* begin block 5 */
		// Start line: 4764
	/* end block 5 */
	// End Line: 4765

void AIPhysic_CheckForGripReduction__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (carObj->max_aa < 0x10000) {
    iVar2 = (carObj->N).collision.lastTime;
    iVar4 = carObj->max_aa + AIPhysic_elapsedTime * carObj->personality->gripLossRecoveryPerTick;
    carObj->max_aa = iVar4;
    if ((0x3f < simGlobal.gameTicks - iVar2) ||
       (iVar2 = 0x10000, (carObj->N).collision.lastOtherObj != (BO_tNewtonObj *)0x0)) {
      iVar3 = carObj->personality->gripLossMinFactor;
      iVar2 = -iVar3;
      iVar1 = iVar2 + 0x10000;
      if (iVar1 < 0) {
        iVar1 = iVar2 + 0x10003;
      }
      if (iVar4 <= iVar3 + (iVar1 >> 2)) {
        return;
      }
      carObj->max_aa = 0x10000;
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
    iVar2 = AIWorld_CalcRoadBend__FP8Car_tObji(carObj,1);
    if (iVar2 < 1) {
      iVar2 = AIWorld_CalcRoadBend__FP8Car_tObji(carObj,1);
      iVar2 = -iVar2;
    }
    else {
      iVar2 = AIWorld_CalcRoadBend__FP8Car_tObji(carObj,1);
    }
    if (iVar2 < 0x7d1) {
      return;
    }
    randtemp = fastRandom * randSeed;
    iVar2 = AIPhysic_elapsedTime * carObj->personality->gripLossProbPerSecond;
    fastRandom = randtemp & 0xffff;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1f;
    }
    if (iVar2 >> 5 <= (int)(randtemp >> 8 & 0xffff)) {
      return;
    }
    iVar2 = carObj->personality->gripLossMinFactor;
  }
  carObj->max_aa = iVar2;
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

	/* begin block 2 */
		// Start line: 4831
	/* end block 2 */
	// End Line: 4832

	/* begin block 3 */
		// Start line: 4844
	/* end block 3 */
	// End Line: 4845

	/* begin block 4 */
		// Start line: 4844
	/* end block 4 */
	// End Line: 4845

	/* begin block 5 */
		// Start line: 4845
	/* end block 5 */
	// End Line: 4846

	/* begin block 6 */
		// Start line: 4845
	/* end block 6 */
	// End Line: 4846

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 4849
	/* end block 2 */
	// End Line: 4850

	/* begin block 3 */
		// Start line: 4852
	/* end block 3 */
	// End Line: 4853

	/* begin block 4 */
		// Start line: 4852
	/* end block 4 */
	// End Line: 4853

	/* begin block 5 */
		// Start line: 4853
	/* end block 5 */
	// End Line: 4854

	/* begin block 6 */
		// Start line: 4853
	/* end block 6 */
	// End Line: 4854

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 4856
	/* end block 2 */
	// End Line: 4857

	/* begin block 3 */
		// Start line: 4858
	/* end block 3 */
	// End Line: 4859

	/* begin block 4 */
		// Start line: 4858
	/* end block 4 */
	// End Line: 4859

	/* begin block 5 */
		// Start line: 4859
	/* end block 5 */
	// End Line: 4860

	/* begin block 6 */
		// Start line: 4859
	/* end block 6 */
	// End Line: 4860

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 4862
	/* end block 2 */
	// End Line: 4863

	/* begin block 3 */
		// Start line: 4864
	/* end block 3 */
	// End Line: 4865

	/* begin block 4 */
		// Start line: 4864
	/* end block 4 */
	// End Line: 4865

	/* begin block 5 */
		// Start line: 4866
	/* end block 5 */
	// End Line: 4867

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

	/* begin block 2 */
		// Start line: 4874
	/* end block 2 */
	// End Line: 4875

	/* begin block 3 */
		// Start line: 4878
	/* end block 3 */
	// End Line: 4879

	/* begin block 4 */
		// Start line: 4878
	/* end block 4 */
	// End Line: 4879

/* WARNING: Removing unreachable block (ram,0x8006ccc4) */

void AIPhysic_InitCar__FP8Car_tObj(Car_tObj *carObj)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = carObj->carFlags;
  if ((uVar4 & 2) != 0) {
    iVar5 = 0xc0000;
    if ((uVar4 & 0x28) != 0) {
      iVar5 = 0xb0000;
    }
    iVar2 = carObj->personality->brakeMultiplier;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    uVar7 = (iVar2 >> 8) * (iVar5 >> 8);
    if ((uVar4 & 8) != 0) {
      iVar5 = AISpeeds_GetUpgradeBrakeMult__Fi(carObj->carIndex);
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 0xff;
      }
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      uVar7 = ((int)uVar7 >> 8) * (iVar5 >> 8);
    }
    pvVar1 = __builtin_new(0x84);
    *(uint *)((int)pvVar1 + 0x80) = uVar7;
    iVar5 = fixeddiv(0x10000,uVar7);
    iVar2 = 0;
    while (uVar4 = iVar2 << 0x10, iVar2 < 0x80) {
      uVar7 = fixedmult(uVar4,iVar5);
      uVar7 = fixedmult(uVar7,uVar4);
      iVar3 = (int)((uVar7 >> 0x1f) + uVar7) >> 1;
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 | 0xffff;
      }
      iVar6 = (int)uVar4 >> 0x10;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (0x7f < iVar6) {
        iVar6 = 0x80;
      }
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x1ffff;
      }
      *(undefined *)((int)pvVar1 + iVar6) = (char)(iVar3 >> 0x11);
      iVar2 = iVar2 + 1;
    }
    *(void **)(carObj->accTable + 0x5a) = pvVar1;
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

	/* begin block 2 */
		// Start line: 4976
	/* end block 2 */
	// End Line: 4977

	/* begin block 3 */
		// Start line: 4981
	/* end block 3 */
	// End Line: 4982

	/* begin block 4 */
		// Start line: 4981
	/* end block 4 */
	// End Line: 4982

void AIPhysic_DeInitCar__FP8Car_tObj(Car_tObj *carObj)

{
  if (((carObj->carFlags & 2U) != 0) && (*(void **)(carObj->accTable + 0x5a) != (void *)0x0)) {
    __builtin_delete(*(void **)(carObj->accTable + 0x5a));
    *(undefined4 *)(carObj->accTable + 0x5a) = 0;
  }
  return;
}





