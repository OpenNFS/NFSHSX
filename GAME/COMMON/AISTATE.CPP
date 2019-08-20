#include "NFS4.H"
#include "AISTATE.H"

// decompiled code
// original method signature: 
// void /*$ra*/ AIState_StartUp__Fv()
 // line 25, offset 0x8006f9a4
	/* begin block 1 */
		// Start line: 26
		// Start offset: 0x8006F9A4
	/* end block 1 */
	// End offset: 0x8006F9A4
	// End Line: 26

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AIState_StartUp__Fv(void)

{
  StartUp__17AIState_Purgatory();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIState_Restart__Fv()
 // line 30, offset 0x8006f9c4
	/* begin block 1 */
		// Start line: 31
		// Start offset: 0x8006F9C4
	/* end block 1 */
	// End offset: 0x8006F9C4
	// End Line: 31

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AIState_Restart__Fv(void)

{
  StartUp__17AIState_Purgatory();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIState_CleanUp__Fv()
 // line 36, offset 0x8006f9e4
	/* begin block 1 */
		// Start line: 37
		// Start offset: 0x8006F9E4
	/* end block 1 */
	// End offset: 0x8006F9E4
	// End Line: 37

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AIState_CleanUp__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StateExecute__12AIState_Base(struct AIState_Base *this /*$s0*/)
 // line 56, offset 0x8006f9ec
	/* begin block 1 */
		// Start line: 57
		// Start offset: 0x8006F9EC
	/* end block 1 */
	// End offset: 0x8006FA48
	// End Line: 67

void StateExecute__12AIState_Base(AIState_Base *this)

{
  uint uVar1;
  Car_tObj *pCVar2;
  
  pCVar2 = this->carObj_;
  if ((((pCVar2->N).active != '\0') && ((pCVar2->carFlags & 4U) == 0)) &&
     ((pCVar2->N).deadTimer == 0)) {
    AIScript_ProcessActionsAndReactions__FP10AIScript_ti(&pCVar2->script,AI_elapsedTime);
  }
  uVar1 = this->_vf[0].value;
  (**(code **)(uVar1 + 0xc))((int)&this->carObj_ + (int)*(short *)(uVar1 + 8));
  return;
}



// decompiled code
// original method signature: 
// struct AIState_Base * /*$ra*/ __12AIState_BaseP8Car_tObj(struct AIState_Base *this /*$v0*/, struct Car_tObj *carObj /*$a1*/)
 // line 73, offset 0x8006fa74
	/* begin block 1 */
		// Start line: 74
		// Start offset: 0x8006FA74
	/* end block 1 */
	// End offset: 0x8006FA74
	// End Line: 74

AIState_Base * __12AIState_BaseP8Car_tObj(AIState_Base *this,Car_tObj *carObj)

{
  this->_vf[0].value = 0x80055640;
  this->carObj_ = carObj;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Execute__14AIState_Normal(struct AIState_Normal *this /*$s0*/)
 // line 94, offset 0x8006fa8c
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x8006FA8C
	/* end block 1 */
	// End offset: 0x8006FA8C
	// End Line: 95

void Execute__14AIState_Normal(AIState_Normal *this)

{
  AISpeeds_CalcDesiredSpeed__FP8Car_tObj((this->AIState_Base).carObj_);
  AI_GenericBeginCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  AI_GenericCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  AI_GenericEndCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  return;
}



// decompiled code
// original method signature: 
// struct AIState_Normal * /*$ra*/ __14AIState_NormalP8Car_tObj(struct AIState_Normal *this /*$s0*/, struct Car_tObj *carObj /*$a1*/)
 // line 105, offset 0x8006fadc
	/* begin block 1 */
		// Start line: 106
		// Start offset: 0x8006FADC
	/* end block 1 */
	// End offset: 0x8006FADC
	// End Line: 106

AIState_Normal * __14AIState_NormalP8Car_tObj(AIState_Normal *this,Car_tObj *carObj)

{
  Car_tObj *pCVar1;
  
  __12AIState_BaseP8Car_tObj((AIState_Base *)this,carObj);
  pCVar1 = (this->AIState_Base).carObj_;
  (this->AIState_Base)._vf[0].value = 0x80055620;
  pCVar1->aCarWRTDesired = 0;
  (pCVar1->desiredVector).z = 0;
  (pCVar1->desiredVector).y = 0;
  (((this->AIState_Base).carObj_)->angularAcc_ch).x = 0;
  (((this->AIState_Base).carObj_)->N).active = '\x01';
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Execute__12AIState_Idle(struct AIState_Idle *this /*$s0*/)
 // line 129, offset 0x8006fb34
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x8006FB34

		/* begin block 1.1 */
			// Start line: 130
			// Start offset: 0x8006FB34

			/* begin block 1.1.1 */
				// Start line: 138
				// Start offset: 0x8006FB74
				// Variables:
			// 		int off; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8006FBE0
			// End Line: 150
		/* end block 1.1 */
		// End offset: 0x8006FBE0
		// End Line: 150
	/* end block 1 */
	// End offset: 0x8006FBE0
	// End Line: 150

void Execute__12AIState_Idle(AIState_Idle *this)

{
  int iVar1;
  Car_tObj *carObj;
  
  if ((this->AIState_Base)._vf[2].value == 0) {
    carObj = (this->AIState_Base).carObj_;
    if (((carObj->speechInfo).playerCarIndex - (this->AIState_Base)._vf[1].value) + 0xffff < 0x1ffff
       ) {
      (carObj->script).lastReactionIndex[5] = 0;
    }
    else {
      AISpeeds_CalcDesiredSpeed__FP8Car_tObj(carObj);
      carObj = (this->AIState_Base).carObj_;
      iVar1 = (carObj->script).lastReactionIndex[5];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 3;
      }
      (carObj->script).lastReactionIndex[5] = iVar1 >> 2;
    }
    (((this->AIState_Base).carObj_)->script).lastReactionIndex[4] =
         (this->AIState_Base)._vf[1].value;
  }
  else {
    (((this->AIState_Base).carObj_)->script).lastReactionIndex[5] = 0;
    carObj = (this->AIState_Base).carObj_;
    (carObj->script).lastReactionIndex[4] = (carObj->speechInfo).playerCarIndex;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetIdlePosition__12AIState_Idlei(struct AIState_Idle *this /*$a0*/, int roadPosition /*$a1*/)
 // line 154, offset 0x8006fbf0
	/* begin block 1 */
		// Start line: 155
		// Start offset: 0x8006FBF0
	/* end block 1 */
	// End offset: 0x8006FBF0
	// End Line: 156

void SetIdlePosition__12AIState_Idlei(AIState_Idle *this,int roadPosition)

{
  (this->AIState_Base)._vf[1].value = roadPosition;
  (this->AIState_Base)._vf[2].value = 0;
  return;
}



// decompiled code
// original method signature: 
// struct AIState_Chase * /*$ra*/ __13AIState_ChaseP8Car_tObjT1P8coorddefiiiii(struct AIState_Chase *this /*$fp*/, struct Car_tObj *carObj /*$s0*/, struct Car_tObj *targetCar /*$s2*/, struct coorddef *relPosition /*$s4*/, int nitrousTicks /*stack 16*/, int nitrousMinForeDistance /*stack 20*/, int nitrousMinAftDistance /*stack 24*/, int aggressionLevel /*stack 28*/, int delayTime /*stack 32*/)
 // line 180, offset 0x8006fbfc
	/* begin block 1 */
		// Start line: 181
		// Start offset: 0x8006FBFC
	/* end block 1 */
	// End offset: 0x8006FCCC
	// End Line: 202

AIState_Chase *
__13AIState_ChaseP8Car_tObjT1P8coorddefiiiii
          (AIState_Chase *this,Car_tObj *carObj,Car_tObj *targetCar,coorddef *relPosition,
          int nitrousTicks,int nitrousMinForeDistance,int nitrousMinAftDistance,int aggressionLevel,
          int delayTime)

{
  __12AIState_BaseP8Car_tObj((AIState_Base *)this,carObj);
  (this->AIState_Base)._vf[0].value = 0x800555e0;
  __10AIDelayCarP8Car_tObjT1i
            ((AIDelayCar *)((this->AIState_Base)._vf + 1),carObj,targetCar,delayTime);
  this->murderMode_ = nitrousTicks;
  SetTarget__13AIState_ChaseP8Car_tObjP8coorddef(this,targetCar,relPosition);
  (((this->AIState_Base).carObj_)->targetPos).x = 0x10000;
  (((this->AIState_Base).carObj_)->targetPos).y = 0x10000;
  this->murderEndTime_ = nitrousMinForeDistance;
  this->inTargetRegion_ = nitrousMinAftDistance;
  this->nitrousTicks_ = aggressionLevel;
  this->nitrousMinForeDistance_ = 0;
  (this->delayCar_).roadPosition_ = 0;
  this->nitrousMinAftDistance_ = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._13AIState_Chase(struct AIState_Chase *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 205, offset 0x8006fd04
	/* begin block 1 */
		// Start line: 206
		// Start offset: 0x8006FD04
		// Variables:
	// 		struct AIState_Base *this; // $a0
	/* end block 1 */
	// End offset: 0x8006FD04
	// End Line: 206

	/* begin block 2 */
		// Start line: 206
		// Start offset: 0x8006FD04

		/* begin block 2.1 */
			// Start line: 206
			// Start offset: 0x8006FD04
		/* end block 2.1 */
		// End offset: 0x8006FD04
		// End Line: 206
	/* end block 2 */
	// End offset: 0x8006FD7C
	// End Line: 213

void ___13AIState_Chase(AIState_Chase *this,int __in_chrg)

{
  Car_tObj *pCVar1;
  
  pCVar1 = (this->AIState_Base).carObj_;
  (this->AIState_Base)._vf[0].value = 0x800555e0;
  pCVar1->aCarWRTDesired = 0;
  (pCVar1->desiredVector).z = 0;
  (pCVar1->desiredVector).y = 0;
  (((this->AIState_Base).carObj_)->angularAcc_ch).x = 0;
  (((this->AIState_Base).carObj_)->angularAcc_ch).z = 0;
  ((this->AIState_Base).carObj_)->driveDirectionReverseTime = 0;
  (((this->AIState_Base).carObj_)->targetPos).x = 0x10000;
  (((this->AIState_Base).carObj_)->targetPos).y = 0x10000;
  (this->AIState_Base)._vf[0].value = 0x80055640;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetTarget__13AIState_ChaseP8Car_tObjP8coorddef(struct AIState_Chase *this /*$s0*/, struct Car_tObj *targetCar /*$s1*/, struct coorddef *relPosition /*$s2*/)
 // line 216, offset 0x8006fd8c
	/* begin block 1 */
		// Start line: 217
		// Start offset: 0x8006FD8C
	/* end block 1 */
	// End offset: 0x8006FE40
	// End Line: 238

void SetTarget__13AIState_ChaseP8Car_tObjP8coorddef
               (AIState_Chase *this,Car_tObj *targetCar,coorddef *relPosition)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Car_tObj *pCVar4;
  
  if ((Car_tObj *)(this->delayCar_).laneIndex_ != targetCar) {
    SetNewTargetCar__10AIDelayCarP8Car_tObj((AIDelayCar *)((this->AIState_Base)._vf + 1),targetCar);
  }
  *(Car_tObj **)&(this->delayCar_).laneIndex_ = targetCar;
  iVar3 = relPosition->y;
  pCVar4 = (Car_tObj *)relPosition->z;
  (this->delayCar_).currentSpeed_ = relPosition->x;
  this->noTurnAroundEndTime_ = iVar3;
  this->targetCar_ = pCVar4;
  iVar3 = (this->delayCar_).laneIndex_;
  (this->relPosition_).x = 0;
  (this->relPosition_).y = 0;
  iVar2 = *(int *)(iVar3 + 0x134);
  iVar1 = (this->delayCar_).currentSpeed_;
  iVar3 = -1;
  if ((iVar1 < -iVar2) || (iVar3 = 1, iVar2 < iVar1)) {
    (this->relPosition_).y = iVar3;
  }
  iVar1 = *(int *)((this->delayCar_).laneIndex_ + 0x13c);
  iVar3 = -1;
  if (((int)this->targetCar_ < -iVar1) || (iVar3 = 1, iVar1 < (int)this->targetCar_)) {
    (this->relPosition_).x = iVar3;
  }
  this->carDir_ = 0;
  this->longMetersBetween_ = 0;
  this->latMetersBetween_ = 0;
  SetUp__13AIState_Chase(this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMurderMode__13AIState_Chaseii(struct AIState_Chase *this /*$a0*/, int murderMode /*$a1*/, int murderTicks /*$a2*/)
 // line 240, offset 0x8006fe6c
	/* begin block 1 */
		// Start line: 241
		// Start offset: 0x8006FE6C
	/* end block 1 */
	// End offset: 0x8006FE90
	// End Line: 249

void SetMurderMode__13AIState_Chaseii(AIState_Chase *this,int murderMode,int murderTicks)

{
  if (this->carDir_ == 0) {
    this->carDir_ = murderMode;
    this->longMetersBetween_ = simGlobal.gameTicks + murderTicks;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetUp__13AIState_Chase(struct AIState_Chase *this /*$s0*/)
 // line 252, offset 0x8006fe98
	/* begin block 1 */
		// Start line: 253
		// Start offset: 0x8006FE98
		// Variables:
	// 		struct coorddef targetCarPosition; // stack offset -32

		/* begin block 1.1 */
			// Start line: 256
			// Start offset: 0x8006FED4

			/* begin block 1.1.1 */
				// Start line: 256
				// Start offset: 0x8006FED4
			/* end block 1.1.1 */
			// End offset: 0x8006FED4
			// End Line: 256
		/* end block 1.1 */
		// End offset: 0x8006FED4
		// End Line: 256

		/* begin block 1.2 */
			// Start line: 257
			// Start offset: 0x8006FEEC

			/* begin block 1.2.1 */
				// Start line: 257
				// Start offset: 0x8006FEEC
			/* end block 1.2.1 */
			// End offset: 0x8006FEEC
			// End Line: 257
		/* end block 1.2 */
		// End offset: 0x8006FEEC
		// End Line: 257

		/* begin block 1.3 */
			// Start line: 257
			// Start offset: 0x8006FEEC

			/* begin block 1.3.1 */
				// Start line: 257
				// Start offset: 0x8006FEEC
			/* end block 1.3.1 */
			// End offset: 0x8006FEEC
			// End Line: 257
		/* end block 1.3 */
		// End offset: 0x8006FEEC
		// End Line: 257

		/* begin block 1.4 */
			// Start line: 257
			// Start offset: 0x8006FEEC

			/* begin block 1.4.1 */
				// Start line: 257
				// Start offset: 0x8006FEEC
			/* end block 1.4.1 */
			// End offset: 0x8006FEEC
			// End Line: 257
		/* end block 1.4 */
		// End offset: 0x8006FEEC
		// End Line: 257
	/* end block 1 */
	// End offset: 0x8006FFB0
	// End Line: 280

void SetUp__13AIState_Chase(AIState_Chase *this)

{
  Car_tObj *pCVar1;
  int iVar2;
  coorddef local_20;
  
  Update__10AIDelayCar((AIDelayCar *)((this->AIState_Base)._vf + 1));
  iVar2 = -1;
  if (-1 < (((this->AIState_Base).carObj_)->script).lastActionTime) {
    iVar2 = 1;
  }
  this->longTargetRegion_ = iVar2;
  iVar2 = -1;
  if (-1 < (this->delayCar_).deltaRoadPosition_) {
    iVar2 = 1;
  }
  pCVar1 = (this->AIState_Base).carObj_;
  (this->relPosition_).z = iVar2;
  this->targetDir_ = (pCVar1->speechInfo).playerCarIndex - (this->delayCar_).position_.y;
  local_20.x = (this->delayCar_).deltaPosition_.x;
  local_20.y = (this->delayCar_).deltaPosition_.y;
  local_20.z = (this->delayCar_).deltaPosition_.z;
  iVar2 = AIWorld_SplineDistance__FP8Car_tObjiP8coorddef
                    ((this->AIState_Base).carObj_,(int)(this->delayCar_).basisCar_,&local_20);
  pCVar1 = (this->AIState_Base).carObj_;
  this->latTargetRegion_ = iVar2;
  pCVar1->aCarWRTDesired = 0;
  (pCVar1->desiredVector).z = 0;
  (pCVar1->desiredVector).y = 0;
  (((this->AIState_Base).carObj_)->angularAcc_ch).x = 0;
  if ((this->carDir_ != 0) && (this->longMetersBetween_ <= simGlobal.gameTicks)) {
    this->carDir_ = 0;
    this->longMetersBetween_ = 0;
  }
  if ((((this->AIState_Base).carObj_)->targetPos).x != 0x10000) {
    this->murderMode_ = this->murderMode_ - AI_elapsedTime;
  }
  (((this->AIState_Base).carObj_)->targetPos).x = 0x10000;
  (((this->AIState_Base).carObj_)->targetPos).y = 0x10000;
  (((this->AIState_Base).carObj_)->angularAcc_ch).z = 0;
  ((this->AIState_Base).carObj_)->driveDirectionReverseTime = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoSlowNitrous__13AIState_Chase(struct AIState_Chase *this /*$a0*/)
 // line 287, offset 0x8006fff4
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x8006FFF4
	/* end block 1 */
	// End offset: 0x8006FFF4
	// End Line: 292

void DoSlowNitrous__13AIState_Chase(AIState_Chase *this)

{
  (((this->AIState_Base).carObj_)->targetPos).x = 0x8000;
  (((this->AIState_Base).carObj_)->targetPos).y = 0xc000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoNitrous__13AIState_Chasei(struct AIState_Chase *this /*$s0*/, int checkForHumans /*$s4*/)
 // line 296, offset 0x80070010
	/* begin block 1 */
		// Start line: 297
		// Start offset: 0x80070010

		/* begin block 1.1 */
			// Start line: 297
			// Start offset: 0x80070010

			/* begin block 1.1.1 */
				// Start line: 299
				// Start offset: 0x80070040
				// Variables:
			// 		struct AIState_Chase *this; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 299
					// Start offset: 0x80070040
				/* end block 1.1.1.1 */
				// End offset: 0x80070040
				// End Line: 299
			/* end block 1.1.1 */
			// End offset: 0x80070040
			// End Line: 299

			/* begin block 1.1.2 */
				// Start line: 300
				// Start offset: 0x8007005C

				/* begin block 1.1.2.1 */
					// Start line: 301
					// Start offset: 0x8007005C
					// Variables:
				// 		int humanLoop; // $s2

					/* begin block 1.1.2.1.1 */
						// Start line: 305
						// Start offset: 0x80070084
						// Variables:
					// 		int distanceMeters; // $v1
					/* end block 1.1.2.1.1 */
					// End offset: 0x80070130
					// End Line: 317
				/* end block 1.1.2.1 */
				// End offset: 0x8007013C
				// End Line: 319
			/* end block 1.1.2 */
			// End offset: 0x8007013C
			// End Line: 319
		/* end block 1.1 */
		// End offset: 0x8007013C
		// End Line: 319
	/* end block 1 */
	// End offset: 0x8007013C
	// End Line: 319

void DoNitrous__13AIState_Chasei(AIState_Chase *this,int checkForHumans)

{
  int iVar1;
  Car_tObj *pCVar2;
  Car_tObj **ppCVar3;
  int iVar4;
  
  if ((0 < this->murderMode_) && (this->nitrousMinForeDistance_ <= simGlobal.gameTicks)) {
    iVar4 = 0;
    (((this->AIState_Base).carObj_)->targetPos).x = 0x30000;
    ppCVar3 = &__Cars_gHumanRaceCarList_9__;
    (((this->AIState_Base).carObj_)->targetPos).y = 0x28000;
    while ((checkForHumans != 0 && (iVar4 < Cars_gNumHumanRaceCars))) {
      iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0((this->AIState_Base).carObj_,*ppCVar3);
      pCVar2 = (this->AIState_Base).carObj_;
      iVar1 = iVar1 * (pCVar2->script).lastReactionIndex[3];
      if ((0 < iVar1) && (iVar1 < this->murderEndTime_)) {
        (pCVar2->targetPos).x = 0x10000;
        (((this->AIState_Base).carObj_)->targetPos).y = 0x10000;
      }
      if ((iVar1 < 0) && (-this->inTargetRegion_ < iVar1)) {
        (((this->AIState_Base).carObj_)->targetPos).x = 0x10000;
        (((this->AIState_Base).carObj_)->targetPos).y = 0x10000;
      }
      ppCVar3 = ppCVar3 + 1;
      iVar4 = iVar4 + 1;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Execute__13AIState_Chase(struct AIState_Chase *this /*$s0*/)
 // line 327, offset 0x8007015c
	/* begin block 1 */
		// Start line: 328
		// Start offset: 0x8007015C
		// Variables:
	// 		int far; // $a2
	// 		int velocityToHitInTime; // $v0
	// 		int deltaVelocity; // $a1
	// 		int targetCarVerySlow; // $a0

		/* begin block 1.1 */
			// Start line: 401
			// Start offset: 0x8007029C

			/* begin block 1.1.1 */
				// Start line: 401
				// Start offset: 0x8007029C
				// Variables:
			// 		struct AIState_Chase *this; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 401
					// Start offset: 0x8007029C
				/* end block 1.1.1.1 */
				// End offset: 0x8007029C
				// End Line: 401
			/* end block 1.1.1 */
			// End offset: 0x8007029C
			// End Line: 401
		/* end block 1.1 */
		// End offset: 0x800702C0
		// End Line: 402
	/* end block 1 */
	// End offset: 0x800702C0
	// End Line: 402

void Execute__13AIState_Chase(AIState_Chase *this)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int intercept;
  
  SetUp__13AIState_Chase(this);
  uVar2 = fixedmult(this->latTargetRegion_,0x666);
  iVar4 = *(int *)((this->delayCar_).laneIndex_ + 0x564);
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  intercept = (((this->AIState_Base).carObj_)->script).lastActionTime - iVar4;
  if (intercept < 0) {
    intercept = -intercept;
  }
  bVar1 = false;
  if (intercept < (int)uVar2) {
    iVar3 = this->latTargetRegion_;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    bVar1 = 0x8c0000 < iVar3;
  }
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (bVar1) {
LAB_80070244:
    FarTargeting__13AIState_Chase(this);
    goto LAB_800702a0;
  }
  if ((this->longTargetRegion_ * (this->relPosition_).z == 1) && (0x6aaa9 < iVar4)) {
    CloseTargeting__13AIState_Chase(this);
    goto LAB_800702a0;
  }
  if ((-1 < this->longTargetRegion_ * this->latTargetRegion_) && (0x6aaa9 < iVar4))
  goto LAB_80070244;
  if ((0x1aaaaa < intercept) || (bVar1)) {
LAB_80070290:
    intercept = 0;
  }
  else {
    iVar4 = this->latTargetRegion_;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    intercept = 1;
    if (0x500000 < iVar4) goto LAB_80070290;
  }
  ApproachTargeting__13AIState_Chasei(this,intercept);
LAB_800702a0:
  if (simGlobal.gameTicks < this->nitrousMinForeDistance_) {
    DoSlowNitrous__13AIState_Chase(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FarTargeting__13AIState_Chase(struct AIState_Chase *this /*$s0*/)
 // line 414, offset 0x800702d0
	/* begin block 1 */
		// Start line: 415
		// Start offset: 0x800702D0
	/* end block 1 */
	// End offset: 0x80070328
	// End Line: 426

void FarTargeting__13AIState_Chase(AIState_Chase *this)

{
  this->latMetersBetween_ = 0;
  if ((this->delayCar_).roadPosition_ < simGlobal.gameTicks) {
    if (this->latTargetRegion_ < 1) {
      (((this->AIState_Base).carObj_)->script).lastReactionIndex[2] = 1;
    }
    else {
      (((this->AIState_Base).carObj_)->script).lastReactionIndex[2] = -1;
    }
  }
  DoNitrous__13AIState_Chasei(this,1);
  AISpeeds_CalcDesiredSpeed__FP8Car_tObj((this->AIState_Base).carObj_);
  AI_GenericBeginCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  CheckForBarriersAndTargetAroundThem__13AIState_Chase(this);
  AI_GenericCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  AI_GenericEndCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalculateCloseTargettingAheadSlowDownFactor__13AIState_Chase(struct AIState_Chase *this /*$a0*/)
 // line 443, offset 0x8007037c
	/* begin block 1 */
		// Start line: 444
		// Start offset: 0x8007037C
		// Variables:
	// 		int absLongMetersBetween; // $v1
	// 		int slowDown; // $a1
	/* end block 1 */
	// End offset: 0x80070400
	// End Line: 458

int CalculateCloseTargettingAheadSlowDownFactor__13AIState_Chase(AIState_Chase *this)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = this->latTargetRegion_;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  puVar2 = &DAT_00009999;
  if (iVar1 < 0x1e0000) {
    puVar2 = &DAT_0000f333;
  }
  else {
    if ((iVar1 < 0x320000) || (iVar1 < 0x640000)) {
      puVar2 = &DAT_0000cccc;
    }
    else {
      if (iVar1 < 0x960000) {
        puVar2 = (undefined *)0xc000;
      }
      else {
        if (iVar1 < 0xc80000) {
          puVar2 = &DAT_0000b333;
        }
      }
    }
  }
  return (int)puVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CloseTargeting__13AIState_Chase(struct AIState_Chase *this /*$s1*/)
 // line 462, offset 0x80070408
	/* begin block 1 */
		// Start line: 463
		// Start offset: 0x80070408
		// Variables:
	// 		int latPos; // $s4
	// 		int longPos; // $s5
	// 		int bigLongPos; // $s0
	// 		int forceLatAction; // $s6
	// 		int doLatAction; // $s7
	// 		int forceLongAction; // $a0
	// 		int dir; // $fp
	// 		int desiredSpeed; // $s0
	// 		int latTarget; // $s3
	// 		int longTarget; // $s2

		/* begin block 1.1 */
			// Start line: 536
			// Start offset: 0x80070638

			/* begin block 1.1.1 */
				// Start line: 536
				// Start offset: 0x80070638
			/* end block 1.1.1 */
			// End offset: 0x80070638
			// End Line: 536
		/* end block 1.1 */
		// End offset: 0x80070638
		// End Line: 536

		/* begin block 1.2 */
			// Start line: 556
			// Start offset: 0x80070648

			/* begin block 1.2.1 */
				// Start line: 556
				// Start offset: 0x80070648
			/* end block 1.2.1 */
			// End offset: 0x80070648
			// End Line: 556
		/* end block 1.2 */
		// End offset: 0x80070648
		// End Line: 556

		/* begin block 1.3 */
			// Start line: 556
			// Start offset: 0x80070648

			/* begin block 1.3.1 */
				// Start line: 556
				// Start offset: 0x80070648
			/* end block 1.3.1 */
			// End offset: 0x80070648
			// End Line: 556
		/* end block 1.3 */
		// End offset: 0x80070648
		// End Line: 556

		/* begin block 1.4 */
			// Start line: 559
			// Start offset: 0x8007064C

			/* begin block 1.4.1 */
				// Start line: 567
				// Start offset: 0x8007066C

				/* begin block 1.4.1.1 */
					// Start line: 567
					// Start offset: 0x8007066C

					/* begin block 1.4.1.1.1 */
						// Start line: 568
						// Start offset: 0x800706B0
					/* end block 1.4.1.1.1 */
					// End offset: 0x800706B0
					// End Line: 569

					/* begin block 1.4.1.1.2 */
						// Start line: 576
						// Start offset: 0x800706C4

						/* begin block 1.4.1.1.2.1 */
							// Start line: 576
							// Start offset: 0x800706C4

							/* begin block 1.4.1.1.2.1.1 */
								// Start line: 577
								// Start offset: 0x800706D0
								// Variables:
							// 		int superSlowDown; // $a1
							/* end block 1.4.1.1.2.1.1 */
							// End offset: 0x80070704
							// End Line: 579
						/* end block 1.4.1.1.2.1 */
						// End offset: 0x80070704
						// End Line: 586
					/* end block 1.4.1.1.2 */
					// End offset: 0x80070704
					// End Line: 586
				/* end block 1.4.1.1 */
				// End offset: 0x80070704
				// End Line: 586
			/* end block 1.4.1 */
			// End offset: 0x80070704
			// End Line: 586
		/* end block 1.4 */
		// End offset: 0x80070704
		// End Line: 586

		/* begin block 1.5 */
			// Start line: 597
			// Start offset: 0x8007076C

			/* begin block 1.5.1 */
				// Start line: 603
				// Start offset: 0x8007078C
				// Variables:
			// 		int targettingStrength; // $t0
			// 		int targetLanePosition; // $a0

				/* begin block 1.5.1.1 */
					// Start line: 604
					// Start offset: 0x8007078C

					/* begin block 1.5.1.1.1 */
						// Start line: 607
						// Start offset: 0x8007079C

						/* begin block 1.5.1.1.1.1 */
							// Start line: 607
							// Start offset: 0x8007079C

							/* begin block 1.5.1.1.1.1.1 */
								// Start line: 607
								// Start offset: 0x8007079C
							/* end block 1.5.1.1.1.1.1 */
							// End offset: 0x8007079C
							// End Line: 607
						/* end block 1.5.1.1.1.1 */
						// End offset: 0x8007079C
						// End Line: 607
					/* end block 1.5.1.1.1 */
					// End offset: 0x8007079C
					// End Line: 607

					/* begin block 1.5.1.1.2 */
						// Start line: 612
						// Start offset: 0x800707A8

						/* begin block 1.5.1.1.2.1 */
							// Start line: 613
							// Start offset: 0x800707A8

							/* begin block 1.5.1.1.2.1.1 */
								// Start line: 614
								// Start offset: 0x800707B0

								/* begin block 1.5.1.1.2.1.1.1 */
									// Start line: 614
									// Start offset: 0x800707B0

									/* begin block 1.5.1.1.2.1.1.1.1 */
										// Start line: 614
										// Start offset: 0x800707B0
									/* end block 1.5.1.1.2.1.1.1.1 */
									// End offset: 0x800707B0
									// End Line: 614
								/* end block 1.5.1.1.2.1.1.1 */
								// End offset: 0x800707B0
								// End Line: 614
							/* end block 1.5.1.1.2.1.1 */
							// End offset: 0x800707B0
							// End Line: 614

							/* begin block 1.5.1.1.2.1.2 */
								// Start line: 619
								// Start offset: 0x800707C4

								/* begin block 1.5.1.1.2.1.2.1 */
									// Start line: 619
									// Start offset: 0x800707C4

									/* begin block 1.5.1.1.2.1.2.1.1 */
										// Start line: 619
										// Start offset: 0x800707C4
									/* end block 1.5.1.1.2.1.2.1.1 */
									// End offset: 0x800707C4
									// End Line: 619
								/* end block 1.5.1.1.2.1.2.1 */
								// End offset: 0x800707C4
								// End Line: 619
							/* end block 1.5.1.1.2.1.2 */
							// End offset: 0x800707DC
							// End Line: 621
						/* end block 1.5.1.1.2.1 */
						// End offset: 0x800707DC
						// End Line: 621
					/* end block 1.5.1.1.2 */
					// End offset: 0x80070850
					// End Line: 625
				/* end block 1.5.1.1 */
				// End offset: 0x80070850
				// End Line: 625
			/* end block 1.5.1 */
			// End offset: 0x80070868
			// End Line: 628
		/* end block 1.5 */
		// End offset: 0x80070868
		// End Line: 628
	/* end block 1 */
	// End offset: 0x80070868
	// End Line: 631

void CloseTargeting__13AIState_Chase(AIState_Chase *this)

{
  bool bVar1;
  Car_tObj *pCVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  Trk_NewSlice *pTVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = 0;
  iVar11 = 0;
  iVar12 = (((this->AIState_Base).carObj_)->script).lastReactionIndex[3];
  DoNitrous__13AIState_Chasei(this,1);
  iVar7 = 0;
  if (this->carDir_ == 0) {
    iVar9 = (this->relPosition_).y;
    iVar8 = (this->relPosition_).x;
  }
  else {
    iVar8 = 0;
    iVar9 = 0;
    DoNitrous__13AIState_Chasei(this,0);
  }
  iVar13 = this->targetDir_ * iVar12;
  iVar3 = *(int *)((this->delayCar_).laneIndex_ + 0x134);
  if (iVar13 < -iVar3) {
    iVar10 = -1;
  }
  else {
    if (iVar3 < iVar13) {
      iVar10 = 1;
    }
  }
  iVar13 = this->latTargetRegion_ * iVar12;
  iVar3 = *(int *)((this->delayCar_).laneIndex_ + 0x13c);
  if (iVar13 < 0x20000 - iVar3) {
    iVar11 = -1;
  }
  else {
    if (iVar3 + 0x20000 < iVar13) {
      iVar11 = 1;
    }
  }
  iVar13 = this->latTargetRegion_ * iVar12;
  iVar3 = *(int *)((this->delayCar_).laneIndex_ + 0x13c) + 0x20000;
  if (iVar13 < -iVar3) {
    iVar7 = -1;
  }
  else {
    if (iVar3 < iVar13) {
      iVar7 = 1;
    }
  }
  if ((iVar10 == iVar9) && (iVar11 == iVar8)) {
    this->latMetersBetween_ = this->latMetersBetween_ + AI_elapsedTime;
  }
  else {
    this->latMetersBetween_ = 0;
  }
  iVar13 = 0;
  iVar3 = 0;
  bVar1 = true;
  if (iVar7 * iVar8 == -1) {
    iVar3 = iVar9;
    if (iVar9 == 0) {
      iVar3 = -1;
    }
  }
  else {
    if ((iVar10 * iVar9 == -1) && (iVar7 == 0)) {
      iVar13 = -1;
      bVar1 = false;
    }
    else {
      if ((iVar9 == 0) && ((iVar7 == 0 && (this->carDir_ == 0)))) {
        bVar1 = false;
      }
      else {
        if ((iVar8 == 1) && (((iVar7 == 1 && (iVar10 == 0)) && (this->latTargetRegion_ < 0x140000)))
           ) {
          iVar13 = -2;
        }
      }
    }
  }
  puVar5 = (undefined *)(this->delayCar_).deltaRoadPosition_;
  if ((int)puVar5 < 1) {
    puVar5 = (undefined *)-(int)puVar5;
  }
  if ((iVar11 < iVar8) || (iVar13 == 1)) {
    puVar4 = &DAT_00016666;
  }
  else {
    if (((iVar8 < iVar11) || (iVar13 == -1)) ||
       ((0x140000 < this->latTargetRegion_ &&
        (((0x9ffff < this->latTargetRegion_ || (iVar10 != 0)) || (iVar9 == 0)))))) {
      puVar4 = (undefined *)CalculateCloseTargettingAheadSlowDownFactor__13AIState_Chase(this);
    }
    else {
      if (iVar13 != -2) goto LAB_80070704;
      if (this->nitrousTicks_ == 0) {
        puVar4 = &DAT_0000ca3d;
      }
      else {
        puVar4 = &DAT_0000a666;
        if (this->nitrousTicks_ == 1) {
          puVar4 = &DAT_0000bae1;
        }
      }
    }
  }
  puVar5 = (undefined *)fixedmult((int)puVar5,(int)puVar4);
LAB_80070704:
  AISpeeds_CalcDesiredSpeed__FP8Car_tObj((this->AIState_Base).carObj_);
  pCVar2 = (this->AIState_Base).carObj_;
  iVar7 = (pCVar2->script).lastReactionIndex[5];
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  (pCVar2->script).lastReactionIndex[5] = iVar7;
  pCVar2 = (this->AIState_Base).carObj_;
  puVar4 = (undefined *)(pCVar2->script).lastReactionIndex[5];
  if ((int)puVar5 < (int)puVar4) {
    puVar4 = puVar5;
  }
  puVar5 = &DAT_00050000;
  if (0x4ffff < (int)puVar4) {
    puVar5 = puVar4;
  }
  (pCVar2->script).lastReactionIndex[5] = (int)puVar5 * iVar12;
  AI_GenericBeginCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  if (bVar1) {
    iVar7 = 0xf0000;
    if (this->carDir_ == 0) {
      if (iVar3 == 0) {
        iVar10 = (this->delayCar_).currentSpeed_;
      }
      else {
        iVar10 = *(int *)((this->delayCar_).laneIndex_ + 0x134) + 0x60000;
      }
      iVar11 = (this->delayCar_).position_.y + iVar10 * iVar12;
      pTVar6 = BWorldSm_slices + (int)(((this->AIState_Base).carObj_)->N).simRoadInfo.slice;
      iVar10 = -((uint)pTVar6->avgPavedWidthLf * 0x8000 * (uint)(pTVar6->laneCount >> 4));
      if (iVar10 < iVar11) {
        iVar10 = iVar11;
      }
      iVar11 = (uint)pTVar6->avgPavedWidthRt * 0x8000 * ((uint)pTVar6->laneCount & 0xf);
      if (iVar10 < iVar11) {
        iVar11 = iVar10;
      }
    }
    else {
      iVar7 = 0x1e0000;
      iVar11 = (this->delayCar_).position_.y;
    }
    (((this->AIState_Base).carObj_)->angularAcc_ch).z = iVar11;
    ((this->AIState_Base).carObj_)->driveDirectionReverseTime = iVar7;
  }
  CheckForBarriersAndTargetAroundThem__13AIState_Chase(this);
  AI_GenericCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  AI_GenericEndCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ApproachTargeting__13AIState_Chasei(struct AIState_Chase *this /*$s1*/, int intercept /*$s2*/)
 // line 637, offset 0x800708b8
	/* begin block 1 */
		// Start line: 638
		// Start offset: 0x800708B8
		// Variables:
	// 		int xDistance; // $a2
	// 		int zDistance; // $v1
	// 		int distance; // $s0
	// 		int minSpeed; // $a0
	/* end block 1 */
	// End offset: 0x80070BAC
	// End Line: 714

void ApproachTargeting__13AIState_Chasei(AIState_Chase *this,int intercept)

{
  bool bVar1;
  undefined *puVar2;
  Car_tObj *pCVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  
  pCVar3 = (this->AIState_Base).carObj_;
  iVar5 = (this->delayCar_).laneIndex_;
  iVar6 = (pCVar3->N).position.x - *(int *)(iVar5 + 0xa0);
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  iVar5 = (pCVar3->N).position.z - *(int *)(iVar5 + 0xa8);
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (iVar5 < iVar6) {
    iVar6 = iVar6 + (iVar5 >> 2);
  }
  else {
    iVar6 = iVar5 + (iVar6 >> 2);
  }
  this->latMetersBetween_ = 0;
  if ((this->delayCar_).roadPosition_ < simGlobal.gameTicks) {
    if (this->latTargetRegion_ < 1) {
      (((this->AIState_Base).carObj_)->script).lastReactionIndex[2] = 1;
    }
    else {
      (((this->AIState_Base).carObj_)->script).lastReactionIndex[2] = -1;
    }
  }
  AISpeeds_CalcDesiredSpeed__FP8Car_tObj((this->AIState_Base).carObj_);
  iVar5 = this->nitrousTicks_;
  if (iVar5 == 1) {
    puVar4 = (undefined *)0x3c0000;
    if ((((0x960000 < iVar6) || (puVar4 = &DAT_00320000, 0x640000 < iVar6)) ||
        (puVar4 = &DAT_00280000, 0x320000 < iVar6)) ||
       (puVar4 = (undefined *)0x230000, 0x190000 < iVar6)) goto LAB_80070adc;
    puVar4 = &LAB_000a0000;
  }
  else {
    if (1 < iVar5) {
      puVar4 = &DAT_00190000;
      if ((((iVar5 == 2) && (puVar4 = (undefined *)0x500000, iVar6 < 0x960001)) &&
          ((puVar4 = (undefined *)0x460000, iVar6 < 0x640001 &&
           ((puVar4 = &DAT_00320000, iVar6 < 0x320001 && (puVar4 = &DAT_00280000, iVar6 < 0x190001))
           )))) && ((puVar4 = (undefined *)0xe0000, iVar6 < 0xa0001 &&
                    (puVar4 = (undefined *)0x0, 0x60000 < iVar6)))) {
        puVar4 = (undefined *)0x60000;
      }
      goto LAB_80070adc;
    }
    puVar4 = &DAT_00190000;
    if ((((iVar5 != 0) || (puVar4 = (undefined *)0x3c0000, 0x960000 < iVar6)) ||
        (puVar4 = &DAT_00320000, 0x640000 < iVar6)) ||
       ((puVar4 = &DAT_00280000, 0x320000 < iVar6 ||
        (puVar4 = (undefined *)0x230000, 0x190000 < iVar6)))) goto LAB_80070adc;
    puVar4 = &DAT_00140000;
  }
  if ((iVar6 < 0xa0001) && (puVar4 = (undefined *)0x0, 0x60000 < iVar6)) {
    puVar4 = (undefined *)0x30000;
  }
LAB_80070adc:
  pCVar3 = (this->AIState_Base).carObj_;
  puVar2 = (undefined *)-(int)puVar4;
  if ((pCVar3->script).lastReactionIndex[3] == 1) {
    puVar7 = (undefined *)(pCVar3->script).lastReactionIndex[5];
    bVar1 = (int)puVar7 < (int)puVar4;
    puVar2 = puVar4;
  }
  else {
    puVar7 = (undefined *)(pCVar3->script).lastReactionIndex[5];
    bVar1 = (int)puVar2 < (int)puVar7;
  }
  if (bVar1) {
    puVar2 = puVar7;
  }
  *(undefined **)((pCVar3->script).lastReactionIndex + 5) = puVar2;
  AI_GenericBeginCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  CheckForBarriersAndTargetAroundThem__13AIState_Chase(this);
  AI_GenericCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  AI_GenericEndCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  if (intercept != 0) {
    pCVar3 = (this->AIState_Base).carObj_;
    iVar6 = (this->delayCar_).laneIndex_;
    iVar5 = *(int *)(iVar6 + 0xa4);
    iVar8 = *(int *)(iVar6 + 0xa8);
    (pCVar3->desiredVector).y = *(int *)(iVar6 + 0xa0);
    (pCVar3->desiredVector).z = iVar5;
    pCVar3->aCarWRTDesired = iVar8;
    (((this->AIState_Base).carObj_)->angularAcc_ch).x =
         *(int *)((this->delayCar_).laneIndex_ + 0x574);
    (((this->AIState_Base).carObj_)->angularAcc_ch).z =
         *(int *)((this->delayCar_).laneIndex_ + 0x574);
    ((this->AIState_Base).carObj_)->driveDirectionReverseTime = 0xf0000;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckForBarriersAndTargetAroundThem__13AIState_Chase(struct AIState_Chase *this /*$s2*/)
 // line 718, offset 0x80070bc4
	/* begin block 1 */
		// Start line: 719
		// Start offset: 0x80070BC4
		// Variables:
	// 		int mySlice; // $s3
	// 		int targetSlice; // $a0
	// 		int barrierBesideTarget; // $s0
	// 		int barrierBesideMe; // $v0
	// 		int myLane; // $s0
	// 		int targetLane; // $s1
	/* end block 1 */
	// End offset: 0x80070CF8
	// End Line: 760

void CheckForBarriersAndTargetAroundThem__13AIState_Chase(AIState_Chase *this)

{
  int lane0;
  Car_tObj *carObj;
  int slice;
  int lane1;
  int slice_00;
  
  lane0 = this->latTargetRegion_;
  if (lane0 < 0) {
    lane0 = -lane0;
  }
  if (lane0 < 0x1f40001) {
    carObj = (this->AIState_Base).carObj_;
    slice_00 = (int)(carObj->N).simRoadInfo.slice;
    lane1 = *(int *)(carObj->accTable + 0x60);
    lane0 = (this->delayCar_).laneIndex_;
    slice = (int)*(short *)(lane0 + 8);
    lane0 = *(int *)(lane0 + 0x6c4);
    if (((((int)(6 - (uint)(BWorldSm_slices[slice_00].laneCount >> 4)) <= lane1) &&
         (lane1 <= (int)(((uint)BWorldSm_slices[slice_00].laneCount & 0xf) + 7))) &&
        ((int)(6 - (uint)(BWorldSm_slices[slice].laneCount >> 4)) <= lane0)) &&
       (lane0 <= (int)(((uint)BWorldSm_slices[slice].laneCount & 0xf) + 7))) {
      slice = AIWorld_CheckForBarrierBetweenLanes__Fiii(slice,lane0,lane1);
      lane1 = AIWorld_CheckForBarrierBetweenLanes__Fiii(slice_00,lane0,lane1);
      if (slice == 0) {
        this->nitrousMinAftDistance_ = 0;
      }
      else {
        if (lane1 == 0) {
          carObj = (this->AIState_Base).carObj_;
          this->nitrousMinAftDistance_ = 0;
          AI_TargetLane__FP8Car_tObji(carObj,lane0);
          AI_TargetLane__FP8Car_tObji((this->AIState_Base).carObj_,lane0);
          AI_TargetLane__FP8Car_tObji((this->AIState_Base).carObj_,lane0);
        }
        else {
          this->nitrousMinAftDistance_ = this->nitrousMinAftDistance_ + AI_elapsedTime;
        }
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindBarrierEndSlice__13AIState_Chase(struct AIState_Chase *this /*$a0*/)
 // line 764, offset 0x80070d14
	/* begin block 1 */
		// Start line: 765
		// Start offset: 0x80070D14
		// Variables:
	// 		int mySlice; // $s5
	// 		int myLane; // $a3
	// 		int targetLane; // $a0
	// 		int leftLane; // $a1
	// 		int rightLane; // $s0
	// 		int barrierLane; // $s4
	// 		int currentBarrierLane; // $s2
	// 		int forwardBarrierEndSlice; // $s7
	// 		int forwardBarrierDistance; // stack offset -48
	// 		int backwardsBarrierEndSlice; // $s6
	// 		int backwardsBarrierDistance; // stack offset -44

		/* begin block 1.1 */
			// Start line: 809
			// Start offset: 0x80070DE0
			// Variables:
		// 		int sliceLoop; // $s3

			/* begin block 1.1.1 */
				// Start line: 810
				// Start offset: 0x80070DE8
				// Variables:
			// 		int sliceCheck; // $s0
			// 		int temp; // $v0
			// 		int leftBarrier; // $a0
			// 		int hereBarrier; // $v1
			// 		int rightBarrier; // $a1
			/* end block 1.1.1 */
			// End offset: 0x80070EF4
			// End Line: 831
		/* end block 1.1 */
		// End offset: 0x80070EFC
		// End Line: 835

		/* begin block 1.2 */
			// Start line: 836
			// Start offset: 0x80070EFC
			// Variables:
		// 		int sliceLoop; // $s3

			/* begin block 1.2.1 */
				// Start line: 837
				// Start offset: 0x80070F08
				// Variables:
			// 		int sliceCheck; // $s0
			// 		int temp; // $v0
			// 		int leftBarrier; // $a0
			// 		int hereBarrier; // $v1
			// 		int rightBarrier; // $a1
			/* end block 1.2.1 */
			// End offset: 0x80071014
			// End Line: 858
		/* end block 1.2 */
		// End offset: 0x8007101C
		// End Line: 862
	/* end block 1 */
	// End offset: 0x8007107C
	// End Line: 867

int FindBarrierEndSlice__13AIState_Chase(AIState_Chase *this)

{
  uint uVar1;
  Car_tObj *pCVar2;
  int lane0;
  int iVar3;
  int iVar4;
  int iVar5;
  int slice;
  int slice_00;
  int lane1;
  int lane1_00;
  int slice_01;
  int local_30;
  int local_2c;
  
  pCVar2 = (this->AIState_Base).carObj_;
  iVar5 = *(int *)(pCVar2->accTable + 0x60);
  iVar3 = *(int *)((this->delayCar_).laneIndex_ + 0x6c4);
  slice_01 = (int)(pCVar2->N).simRoadInfo.slice;
  lane0 = iVar5;
  if (iVar3 < iVar5) {
    lane0 = iVar3;
    iVar3 = iVar5;
  }
  while ((lane0 < iVar3 &&
         (iVar5 = AIWorld_CheckForBarrierBetweenLanes__Fiii(slice_01,lane0,lane0), iVar5 == 0))) {
    lane0 = lane0 + 1;
  }
  iVar3 = slice_01 + 0x53;
  local_2c = 0x53;
  local_30 = 0x53;
  if (gNumSlices <= iVar3) {
    iVar3 = iVar3 - gNumSlices;
  }
  iVar5 = slice_01 + -0x53;
  if (iVar5 < 0) {
    iVar5 = iVar5 + gNumSlices;
  }
  lane1_00 = 0;
  slice_00 = lane0;
  while (slice = iVar3, lane1 = local_30, lane1_00 < 0x53) {
    slice = slice_01 + lane1_00;
    if (lane1_00 < 0) {
      lane1 = gNumSlices;
      if (slice < 0) goto LAB_80070e34;
    }
    else {
      if (gNumSlices <= slice) {
        lane1 = -gNumSlices;
LAB_80070e34:
        slice = slice + lane1;
      }
    }
    lane1 = slice_00 + -1;
    uVar1 = AIWorld_CheckForBarrierBetweenLanes__Fiii(slice,slice_00 + 1,lane1);
    iVar4 = slice_00;
    if (((uVar1 & 2) == 0) &&
       ((((uVar1 & 4) == 0 || (lane1 < (int)(6 - (uint)(BWorldSm_slices[slice].laneCount >> 4)))) ||
        (iVar4 = lane1, (int)(((uint)BWorldSm_slices[slice].laneCount & 0xf) + 7) < lane1)))) {
      lane1 = lane1_00;
      if ((uVar1 & 1) == 0) break;
      iVar4 = slice_00 + 1;
      lane1 = lane1_00;
      if ((iVar4 < (int)(6 - (uint)(BWorldSm_slices[slice].laneCount >> 4))) ||
         (lane1 = lane1_00, (int)(((uint)BWorldSm_slices[slice].laneCount & 0xf) + 7) < iVar4))
      break;
    }
    lane1_00 = lane1_00 + 4;
    slice_00 = iVar4;
  }
  local_30 = lane1;
  iVar3 = 0;
  while (slice_00 = iVar5, lane1_00 = local_2c, iVar3 < 0x53) {
    slice_00 = slice_01 - iVar3;
    if (iVar3 < 1) {
      if (gNumSlices <= slice_00) {
        lane1_00 = -gNumSlices;
LAB_80070f54:
        slice_00 = slice_00 + lane1_00;
      }
    }
    else {
      lane1_00 = gNumSlices;
      if (slice_00 < 0) goto LAB_80070f54;
    }
    lane1_00 = lane0 + -1;
    uVar1 = AIWorld_CheckForBarrierBetweenLanes__Fiii(slice_00,lane0 + 1,lane1_00);
    lane1 = lane0;
    if (((uVar1 & 2) == 0) &&
       ((((uVar1 & 4) == 0 ||
         (lane1_00 < (int)(6 - (uint)(BWorldSm_slices[slice_00].laneCount >> 4)))) ||
        (lane1 = lane1_00, (int)(((uint)BWorldSm_slices[slice_00].laneCount & 0xf) + 7) < lane1_00))
       )) {
      lane1_00 = iVar3;
      if ((uVar1 & 1) == 0) break;
      lane1 = lane0 + 1;
      lane1_00 = iVar3;
      if ((lane1 < (int)(6 - (uint)(BWorldSm_slices[slice_00].laneCount >> 4))) ||
         (lane1_00 = iVar3, (int)(((uint)BWorldSm_slices[slice_00].laneCount & 0xf) + 7) < lane1))
      break;
    }
    iVar3 = iVar3 + 4;
    lane0 = lane1;
  }
  local_2c = lane1_00;
  lane0 = slice + 6;
  if (local_30 < local_2c) {
    if (gNumSlices <= lane0) {
      lane0 = slice - (gNumSlices + -6);
    }
  }
  else {
    lane0 = slice_00 + -6;
    if (lane0 < 0) {
      lane0 = slice_00 + gNumSlices + -6;
    }
  }
  return lane0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._15AIState_Offroad(struct AIState_Offroad *this /*$a2*/, int __in_chrg /*$a1*/)
 // line 887, offset 0x800710ac
	/* begin block 1 */
		// Start line: 888
		// Start offset: 0x800710AC
		// Variables:
	// 		struct AIState_Base *this; // $a2
	/* end block 1 */
	// End offset: 0x800710AC
	// End Line: 888

	/* begin block 2 */
		// Start line: 888
		// Start offset: 0x800710AC

		/* begin block 2.1 */
			// Start line: 888
			// Start offset: 0x800710AC
		/* end block 2.1 */
		// End offset: 0x800710AC
		// End Line: 888
	/* end block 2 */
	// End offset: 0x80071110
	// End Line: 892

void ___15AIState_Offroad(AIState_Offroad *this,int __in_chrg)

{
  Car_tObj *pCVar1;
  
  pCVar1 = (this->AIState_Base).carObj_;
  (this->AIState_Base)._vf[0].value = 0x800555c0;
  pCVar1->aCarWRTDesired = 0;
  (pCVar1->desiredVector).z = 0;
  (pCVar1->desiredVector).y = 0;
  (((this->AIState_Base).carObj_)->angularAcc_ch).x = 0;
  pCVar1 = (this->AIState_Base).carObj_;
  pCVar1->carFlags = pCVar1->carFlags & 0xfffff7ff;
  (this->AIState_Base)._vf[0].value = 0x80055640;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// struct AIState_Offroad * /*$ra*/ __15AIState_OffroadP8Car_tObjiP8coorddefP10matrixtdefiii(struct AIState_Offroad *this /*$s3*/, struct Car_tObj *carObj /*$a1*/, int startSlice /*$s1*/, struct coorddef *position /*$s2*/, struct matrixtdef *orientation /*stack 16*/, int maxSpeedKPH /*stack 20*/, int releaseTime /*stack 24*/, int endSlice /*stack 28*/)
 // line 896, offset 0x80071120
	/* begin block 1 */
		// Start line: 897
		// Start offset: 0x80071120
	/* end block 1 */
	// End offset: 0x800711BC
	// End Line: 910

AIState_Offroad *
__15AIState_OffroadP8Car_tObjiP8coorddefP10matrixtdefiii
          (AIState_Offroad *this,Car_tObj *carObj,int startSlice,coorddef *position,
          matrixtdef *orientation,int maxSpeedKPH,int releaseTime,int endSlice)

{
  int *piVar1;
  Trk_NewSlice *pTVar2;
  coorddef *pcVar3;
  Car_tObj *pCVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  __12AIState_BaseP8Car_tObj((AIState_Base *)this,carObj);
  pcVar3 = &this->startPosition_;
  (this->AIState_Base)._vf[0].value = 0x800555c0;
  (this->targetPosition_).y = 0;
  (this->AIState_Base)._vf[1].value = startSlice;
  uVar5 = position->y;
  iVar6 = position->z;
  (this->AIState_Base)._vf[2].value = position->x;
  (this->AIState_Base)._vf[3].value = uVar5;
  this->startSlice_ = iVar6;
  piVar1 = orientation->m;
  do {
    iVar6 = orientation->m[1];
    iVar7 = orientation->m[2];
    iVar8 = orientation->m[3];
    pcVar3->x = orientation->m[0];
    pcVar3->y = iVar6;
    pcVar3->z = iVar7;
    pcVar3[1].x = iVar8;
    orientation = (matrixtdef *)(orientation->m + 4);
    pcVar3 = (coorddef *)&pcVar3[1].y;
  } while (orientation != (matrixtdef *)(piVar1 + 8));
  pcVar3->x = orientation->m[0];
  iVar6 = (this->startOrientation_).m[4];
  iVar7 = (this->startOrientation_).m[5];
  (this->startOrientation_).m[6] = (this->startOrientation_).m[3];
  (this->startOrientation_).m[7] = iVar6;
  (this->startOrientation_).m[8] = iVar7;
  (this->targetPosition_).z = maxSpeedKPH * 0x4700;
  pTVar2 = BWorldSm_slices;
  (this->startHeading_).x = endSlice;
  this->longMetersBetween_ = releaseTime;
  pTVar2 = pTVar2 + endSlice;
  iVar6 = pTVar2->center[1];
  iVar7 = pTVar2->center[2];
  (this->startHeading_).y = pTVar2->center[0];
  (this->startHeading_).z = iVar6;
  this->targetSlice_ = iVar7;
  pCVar4 = (this->AIState_Base).carObj_;
  pCVar4->carFlags = pCVar4->carFlags | 0x800;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UnleashIfInRange__15AIState_OffroadP8Car_tObj(struct AIState_Offroad *this /*$s1*/, struct Car_tObj *car /*$s0*/)
 // line 926, offset 0x80071268
	/* begin block 1 */
		// Start line: 927
		// Start offset: 0x80071268
		// Variables:
	// 		int distanceAbsMeters; // $s0
	// 		int releaseDistanceMeters; // $v1

		/* begin block 1.1 */
			// Start line: 935
			// Start offset: 0x800712BC

			/* begin block 1.1.1 */
				// Start line: 936
				// Start offset: 0x800712C8

				/* begin block 1.1.1.1 */
					// Start line: 936
					// Start offset: 0x800712C8
					// Variables:
				// 		struct AIState_Offroad *this; // $s1

					/* begin block 1.1.1.1.1 */
						// Start line: 936
						// Start offset: 0x800712C8
					/* end block 1.1.1.1.1 */
					// End offset: 0x800712CC
					// End Line: 936
				/* end block 1.1.1.1 */
				// End offset: 0x800712CC
				// End Line: 936
			/* end block 1.1.1 */
			// End offset: 0x800712CC
			// End Line: 937
		/* end block 1.1 */
		// End offset: 0x800712CC
		// End Line: 937
	/* end block 1 */
	// End offset: 0x800712CC
	// End Line: 937

void UnleashIfInRange__15AIState_OffroadP8Car_tObj(AIState_Offroad *this,Car_tObj *car)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0((this->AIState_Base).carObj_,car);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  uVar3 = fixedmult((car->N).speedXZ,this->longMetersBetween_);
  bVar1 = iVar2 < (int)uVar3;
  if ((int)uVar3 < 0x140000) {
    bVar1 = iVar2 < 0x140000;
  }
  if (bVar1) {
    (this->targetPosition_).y = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Execute__15AIState_Offroad(struct AIState_Offroad *this /*$s0*/)
 // line 944, offset 0x800712e0
	/* begin block 1 */
		// Start line: 945
		// Start offset: 0x800712E0

		/* begin block 1.1 */
			// Start line: 945
			// Start offset: 0x800712E0

			/* begin block 1.1.1 */
				// Start line: 947
				// Start offset: 0x80071300
				// Variables:
			// 		struct coorddef zero; // stack offset -24
			/* end block 1.1.1 */
			// End offset: 0x800713A8
			// End Line: 954
		/* end block 1.1 */
		// End offset: 0x8007147C
		// End Line: 979
	/* end block 1 */
	// End offset: 0x8007147C
	// End Line: 979

void Execute__15AIState_Offroad(AIState_Offroad *this)

{
  Car_tObj *pCVar1;
  matrixtdef *pmVar2;
  coorddef *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_18;
  int local_14;
  int local_10;
  
  if ((this->targetPosition_).y == 0) {
    memset(&local_18,0,0xc);
    pCVar1 = (this->AIState_Base).carObj_;
    (pCVar1->N).linearVel.x = local_18;
    (pCVar1->N).linearVel.y = local_14;
    (pCVar1->N).linearVel.z = local_10;
    pCVar1 = (this->AIState_Base).carObj_;
    (pCVar1->N).angularVel.x = local_18;
    (pCVar1->N).angularVel.y = local_14;
    (pCVar1->N).angularVel.z = local_10;
    (((this->AIState_Base).carObj_)->script).lastReactionIndex[5] = 0;
    pCVar1 = (this->AIState_Base).carObj_;
    pcVar3 = &this->startPosition_;
    uVar4 = (this->AIState_Base)._vf[3].value;
    iVar5 = this->startSlice_;
    (pCVar1->N).position.x = (this->AIState_Base)._vf[2].value;
    (pCVar1->N).position.y = uVar4;
    (pCVar1->N).position.z = iVar5;
    pmVar2 = &(((this->AIState_Base).carObj_)->N).orientMat;
    do {
      iVar5 = pcVar3->y;
      iVar6 = pcVar3->z;
      iVar7 = pcVar3[1].x;
      pmVar2->m[0] = pcVar3->x;
      pmVar2->m[1] = iVar5;
      pmVar2->m[2] = iVar6;
      pmVar2->m[3] = iVar7;
      pcVar3 = (coorddef *)&pcVar3[1].y;
      pmVar2 = (matrixtdef *)(pmVar2->m + 4);
    } while (pcVar3 != (coorddef *)((this->startOrientation_).m + 5));
    pmVar2->m[0] = pcVar3->x;
    pCVar1 = (this->AIState_Base).carObj_;
    pCVar1->aCarWRTDesired = 0;
    (pCVar1->desiredVector).z = 0;
    (pCVar1->desiredVector).y = 0;
  }
  else {
    iVar5 = AIWorld_ApxSplineDistance__FP8Car_tObji
                      ((this->AIState_Base).carObj_,(this->startHeading_).x);
    (this->targetPosition_).x = iVar5;
    (((this->AIState_Base).carObj_)->script).lastReactionIndex[5] = (this->targetPosition_).z;
    if ((this->targetPosition_).x < 1) {
      (((this->AIState_Base).carObj_)->script).lastReactionIndex[2] = 1;
    }
    else {
      (((this->AIState_Base).carObj_)->script).lastReactionIndex[2] = -1;
      pCVar1 = (this->AIState_Base).carObj_;
      (pCVar1->script).lastReactionIndex[5] = -(pCVar1->script).lastReactionIndex[5];
    }
    AI_GenericBeginCycle__FP8Car_tObj((this->AIState_Base).carObj_);
    AI_GenericCycle__FP8Car_tObj((this->AIState_Base).carObj_);
    AI_GenericEndCycle__FP8Car_tObj((this->AIState_Base).carObj_);
    pCVar1 = (this->AIState_Base).carObj_;
    iVar5 = (this->startHeading_).z;
    iVar6 = this->targetSlice_;
    (pCVar1->desiredVector).y = (this->startHeading_).y;
    (pCVar1->desiredVector).z = iVar5;
    pCVar1->aCarWRTDesired = iVar6;
  }
  (((this->AIState_Base).carObj_)->angularAcc_ch).x = 0;
  return;
}



// decompiled code
// original method signature: 
// struct AIState_Purgatory * /*$ra*/ __17AIState_PurgatoryP8Car_tObj(struct AIState_Purgatory *this /*$s1*/, struct Car_tObj *carObj /*$s0*/)
 // line 1001, offset 0x8007148c
	/* begin block 1 */
		// Start line: 1002
		// Start offset: 0x8007148C
		// Variables:
	// 		struct AIState_NonActive *this; // $s1
	// 		struct Car_tObj *carObj; // $s0

		/* begin block 1.1 */
			// Start line: 1002
			// Start offset: 0x8007148C

			/* begin block 1.1.1 */
				// Start line: 1002
				// Start offset: 0x8007148C

				/* begin block 1.1.1.1 */
					// Start line: 1002
					// Start offset: 0x8007148C
					// Variables:
				// 		struct coorddef trafficOffset; // stack offset -32
				/* end block 1.1.1.1 */
				// End offset: 0x8007148C
				// End Line: 1002
			/* end block 1.1.1 */
			// End offset: 0x8007148C
			// End Line: 1002
		/* end block 1.1 */
		// End offset: 0x8007148C
		// End Line: 1002
	/* end block 1 */
	// End offset: 0x8007148C
	// End Line: 1002

	/* begin block 2 */
		// Start line: 1002
		// Start offset: 0x8007148C
		// Variables:
	// 		int lifeTimer; // $v1
	/* end block 2 */
	// End offset: 0x80071624
	// End Line: 1018

AIState_Purgatory * __17AIState_PurgatoryP8Car_tObj(AIState_Purgatory *this,Car_tObj *carObj)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  Car_tObj *pCVar4;
  coorddef cStack32;
  
  __12AIState_BaseP8Car_tObj((AIState_Base *)this,carObj);
  (this->AIState_NonActive).AIState_Base._vf[0].value = 0x800555a0;
  memset(&cStack32,0,0xc);
  cStack32.y = carObj->carIndex * 0xa0000;
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)(this->AIState_NonActive).AIState_Base.carObj_,0,&cStack32,1);
  (((this->AIState_NonActive).AIState_Base.carObj_)->N).active = '\0';
  uVar2 = randSeed;
  (this->AIState_NonActive).AIState_Base._vf[0].value = 0x80055580;
  fastRandom = fastRandom * uVar2;
  *(Car_tObj **)&(((this->AIState_NonActive).AIState_Base.carObj_)->speechInfo).copCarIndex =
       __Cars_gList_9__;
  bVar1 = false;
  randtemp = fastRandom;
  ((this->AIState_NonActive).AIState_Base.carObj_)->desiredLatPos =
       ((&AITune_LifeTimer)[Cars_gNumTrafficCars] * (fastRandom >> 8 & 0xffff) >> 0x10) + 1;
  fastRandom = fastRandom & 0xffff;
  iVar3 = strcmp(((this->AIState_NonActive).AIState_Base.carObj_)->carName,&DAT_8013c5d8);
  if ((iVar3 == 0) ||
     (iVar3 = strcmp(((this->AIState_NonActive).AIState_Base.carObj_)->carName,&DAT_8013c5e0),
     iVar3 == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    pCVar4 = (this->AIState_NonActive).AIState_Base.carObj_;
    pCVar4->desiredLatPos = pCVar4->desiredLatPos * 5;
  }
  pCVar4 = (this->AIState_NonActive).AIState_Base.carObj_;
  (pCVar4->speechInfo).speechSource = (pCVar4->speechInfo).speechSource | 4;
  if ((((this->AIState_NonActive).AIState_Base.carObj_)->carFlags & 0x10U) != 0) {
    __sdata_size = __sdata_size + 1;
  }
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._17AIState_Purgatory(struct AIState_Purgatory *this /*$a3*/, int __in_chrg /*$a1*/)
 // line 1021, offset 0x8007163c
	/* begin block 1 */
		// Start line: 1022
		// Start offset: 0x8007163C
		// Variables:
	// 		struct AIState_NonActive *this; // $a3
	// 		int __in_chrg; // $a1

		/* begin block 1.1 */
			// Start line: 1032
			// Start offset: 0x800716AC
			// Variables:
		// 		int __in_chrg; // $a1
		// 		struct AIState_Base *this; // $a3

			/* begin block 1.1.1 */
				// Start line: 1035
				// Start offset: 0x800716DC
			/* end block 1.1.1 */
			// End offset: 0x80071708
			// End Line: 1039
		/* end block 1.1 */
		// End offset: 0x80071714
		// End Line: 1042
	/* end block 1 */
	// End offset: 0x80071714
	// End Line: 1042

	/* begin block 2 */
		// Start line: 1042
		// Start offset: 0x80071714

		/* begin block 2.1 */
			// Start line: 1042
			// Start offset: 0x80071714
			// Variables:
		// 		int search; // $a0
		/* end block 2.1 */
		// End offset: 0x80071714
		// End Line: 1042

		/* begin block 2.2 */
			// Start line: 1042
			// Start offset: 0x80071714

			/* begin block 2.2.1 */
				// Start line: 1042
				// Start offset: 0x80071714
				// Variables:
			// 		struct Car_tObj *test; // $v1
			/* end block 2.2.1 */
			// End offset: 0x80071714
			// End Line: 1042
		/* end block 2.2 */
		// End offset: 0x8007174C
		// End Line: 1042
	/* end block 2 */
	// End offset: 0x8007174C
	// End Line: 1042

/* WARNING: Type propagation algorithm not settling */

void ___17AIState_Purgatory(AIState_Purgatory *this,int __in_chrg)

{
  Car_tObj *pCVar1;
  int iVar2;
  Car_tObj **ppCVar3;
  
  pCVar1 = (this->AIState_NonActive).AIState_Base.carObj_;
  (this->AIState_NonActive).AIState_Base._vf[0].value = 0x80055580;
  pCVar1->AIFishtailEndTick = 0;
  (((this->AIState_NonActive).AIState_Base.carObj_)->N).collision.disableCollisionTimer = 0;
  pCVar1 = (this->AIState_NonActive).AIState_Base.carObj_;
  (pCVar1->speechInfo).speechSource = (pCVar1->speechInfo).speechSource & 0xfffffffb;
  if ((((this->AIState_NonActive).AIState_Base.carObj_)->carFlags & 0x10U) != 0) {
    __sdata_size = __sdata_size + -1;
  }
  iVar2 = Cars_gNumCars + -1;
  ppCVar3 = &__Cars_gSortedList_9__ + iVar2;
  pCVar1 = (this->AIState_NonActive).AIState_Base.carObj_;
  (pCVar1->script).lastReactionIndex[3] = 1;
  (pCVar1->script).lastReactionIndex[2] = 1;
  do {
    if (iVar2 < 0) {
LAB_80071718:
      pCVar1 = (this->AIState_NonActive).AIState_Base.carObj_;
      (this->AIState_NonActive).AIState_Base._vf[0].value = 0x800555a0;
      (pCVar1->N).active = '\x01';
      (this->AIState_NonActive).AIState_Base._vf[0].value = 0x80055640;
      if ((__in_chrg & 1U) != 0) {
        __builtin_delete(this);
      }
      return;
    }
    pCVar1 = *ppCVar3;
    ppCVar3 = ppCVar3 + -1;
    if ((pCVar1->carFlags & 0x100U) != 0) {
      *(Car_tObj **)&(((this->AIState_NonActive).AIState_Base.carObj_)->speechInfo).copCarIndex =
           pCVar1;
      goto LAB_80071718;
    }
    iVar2 = iVar2 + -1;
  } while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ TestForRelease__17AIState_Purgatory(struct AIState_Purgatory *this /*$a0*/)
 // line 1048, offset 0x8007175c
	/* begin block 1 */
		// Start line: 1049
		// Start offset: 0x8007175C

		/* begin block 1.1 */
			// Start line: 1050
			// Start offset: 0x8007175C

			/* begin block 1.1.1 */
				// Start line: 1051
				// Start offset: 0x80071774
				// Variables:
			// 		int trafficInWorld; // $a1
			/* end block 1.1.1 */
			// End offset: 0x800717C8
			// End Line: 1061
		/* end block 1.1 */
		// End offset: 0x800717C8
		// End Line: 1061
	/* end block 1 */
	// End offset: 0x800717C8
	// End Line: 1064

int TestForRelease__17AIState_Purgatory(AIState_Purgatory *this)

{
  int iVar1;
  Car_tObj *pCVar2;
  
  pCVar2 = (this->AIState_NonActive).AIState_Base.carObj_;
  if (pCVar2->desiredLatPos < 1) {
    iVar1 = GameSetup_gData.trafficDensity * 4;
    if (GameSetup_gData.commMode == 1) {
      iVar1 = iVar1 + 0x10;
    }
    if (Cars_gNumTrafficCars - __sdata_size < *(int *)((int)&AITune_MaxTraffic + iVar1)) {
      return 1;
    }
    pCVar2->desiredLatPos = 1;
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Execute__17AIState_Purgatory(struct AIState_Purgatory *this /*$a0*/)
 // line 1068, offset 0x800717d8
	/* begin block 1 */
		// Start line: 1069
		// Start offset: 0x800717D8
	/* end block 1 */
	// End offset: 0x80071838
	// End Line: 1087

/* WARNING: Type propagation algorithm not settling */

void Execute__17AIState_Purgatory(AIState_Purgatory *this)

{
  Car_tObj *pCVar1;
  
  ((this->AIState_NonActive).AIState_Base.carObj_)->AIFishtailEndTick = 0;
  (((this->AIState_NonActive).AIState_Base.carObj_)->N).collision.disableCollisionTimer = 0;
  pCVar1 = (this->AIState_NonActive).AIState_Base.carObj_;
  if (((pCVar1->carFlags & 0x20U) == 0) && (0x3bf < simGlobal.gameTicks)) {
    pCVar1->desiredLatPos = pCVar1->desiredLatPos - AI_elapsedTime;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartUp__17AIState_Purgatory()
 // line 1090, offset 0x80071840
	/* begin block 1 */
		// Start line: 1091
		// Start offset: 0x80071840
	/* end block 1 */
	// End offset: 0x80071840
	// End Line: 1092

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartUp__17AIState_Purgatory(void)

{
  __sdata_size = 0;
  return;
}



// decompiled code
// original method signature: 
// struct AIState_RovingTraffic * /*$ra*/ __21AIState_RovingTrafficP8Car_tObjP9trigger_t(struct AIState_RovingTraffic *this /*$s0*/, struct Car_tObj *carObj /*$a1*/, union trigger_t *trigger /*$s1*/)
 // line 1103, offset 0x8007184c
	/* begin block 1 */
		// Start line: 1104
		// Start offset: 0x8007184C
	/* end block 1 */
	// End offset: 0x8007184C
	// End Line: 1104

AIState_RovingTraffic *
__21AIState_RovingTrafficP8Car_tObjP9trigger_t
          (AIState_RovingTraffic *this,Car_tObj *carObj,trigger_t *trigger)

{
  uint uVar1;
  Car_tObj *pCVar2;
  
  __12AIState_BaseP8Car_tObj((AIState_Base *)this,carObj);
  (this->AIState_Base)._vf[0].value = 0x80055560;
  pCVar2 = (this->AIState_Base).carObj_;
  (this->AIState_Base)._vf[1].value = *(uint *)(*trigger + 0x3c);
  uVar1 = *(uint *)(*trigger + 0x38);
  (this->AIState_Base)._vf[3].value = 0;
  this->path_ = (trigger_pathPosition_t *)0x0;
  (this->AIState_Base)._vf[2].value = uVar1;
  pCVar2->carFlags = pCVar2->carFlags | 0x800;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckIfCarIsNearbyAndStop__21AIState_RovingTrafficP8Car_tObjRi(struct AIState_RovingTraffic *this /*$s2*/, struct Car_tObj *otherCarObj /*$s0*/, int *status /*$s3*/)
 // line 1130, offset 0x800718b4
	/* begin block 1 */
		// Start line: 1131
		// Start offset: 0x800718B4
		// Variables:
	// 		int distance; // $v1

		/* begin block 1.1 */
			// Start line: 1142
			// Start offset: 0x80071928

			/* begin block 1.1.1 */
				// Start line: 1143
				// Start offset: 0x80071938

				/* begin block 1.1.1.1 */
					// Start line: 1144
					// Start offset: 0x80071938

					/* begin block 1.1.1.1.1 */
						// Start line: 1145
						// Start offset: 0x80071980
						// Variables:
					// 		struct coorddef posDiff; // stack offset -40
					/* end block 1.1.1.1.1 */
					// End offset: 0x80071A3C
					// End Line: 1156
				/* end block 1.1.1.1 */
				// End offset: 0x80071A48
				// End Line: 1162
			/* end block 1.1.1 */
			// End offset: 0x80071A48
			// End Line: 1162
		/* end block 1.1 */
		// End offset: 0x80071A4C
		// End Line: 1168
	/* end block 1 */
	// End offset: 0x80071A4C
	// End Line: 1168

/* WARNING: Type propagation algorithm not settling */

void CheckIfCarIsNearbyAndStop__21AIState_RovingTrafficP8Car_tObjRi
               (AIState_RovingTraffic *this,Car_tObj *otherCarObj,int *status)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  Car_tObj *carObj;
  int iVar6;
  int iVar7;
  
  carObj = (this->AIState_Base).carObj_;
  if ((carObj == otherCarObj) || ((otherCarObj->N).active == '\0')) {
LAB_80071a40:
    *status = 2;
  }
  else {
    iVar1 = AIWorld_SplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
    if (iVar1 < 1) {
      iVar1 = AIWorld_SplineDistance__FP8Car_tObjT0((this->AIState_Base).carObj_,otherCarObj);
      iVar1 = -iVar1;
    }
    else {
      iVar1 = AIWorld_SplineDistance__FP8Car_tObjT0((this->AIState_Base).carObj_,otherCarObj);
    }
    if (0xc0000 < iVar1) {
      *status = 0;
      return;
    }
    iVar1 = (otherCarObj->speechInfo).playerCarIndex;
    iVar7 = (((this->AIState_Base).carObj_)->speechInfo).playerCarIndex;
    iVar6 = iVar7 - iVar1;
    if (iVar6 < 1) {
      if (0x9ffff < iVar1 - iVar7) goto LAB_80071a40;
    }
    else {
      if (0x9ffff < iVar6) {
        *status = 2;
        return;
      }
    }
    iVar1 = (otherCarObj->N).position.y;
    iVar7 = (((this->AIState_Base).carObj_)->N).position.y;
    iVar6 = (otherCarObj->N).position.z;
    iVar5 = (((this->AIState_Base).carObj_)->N).position.z;
    uVar2 = fixedmult((((this->AIState_Base).carObj_)->N).orientMat.m[6],
                      (otherCarObj->N).position.x - (((this->AIState_Base).carObj_)->N).position.x);
    uVar3 = fixedmult((((this->AIState_Base).carObj_)->N).orientMat.m[7],iVar1 - iVar7);
    uVar4 = fixedmult((((this->AIState_Base).carObj_)->N).orientMat.m[8],iVar6 - iVar5);
    if (0 < (int)(uVar2 + uVar3 + uVar4)) {
      AudioClc_HonkHorn__FP8Car_tObjiii((this->AIState_Base).carObj_,4,0x10,8);
      (((this->AIState_Base).carObj_)->script).lastReactionIndex[5] = 0;
      *status = 1;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Execute__21AIState_RovingTraffic(struct AIState_RovingTraffic *this /*$s2*/)
 // line 1172, offset 0x80071a68
	/* begin block 1 */
		// Start line: 1173
		// Start offset: 0x80071A68
		// Variables:
	// 		int search; // $s0
	// 		int status; // stack offset -32
	// 		struct coorddef centerBack; // stack offset -80
	// 		struct coorddef carRelativeForLatPos; // stack offset -64
	// 		struct coorddef carRelativeForDistance; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1209
			// Start offset: 0x80071D18

			/* begin block 1.1.1 */
				// Start line: 1209
				// Start offset: 0x80071D40
			/* end block 1.1.1 */
			// End offset: 0x80071D68
			// End Line: 1214
		/* end block 1.1 */
		// End offset: 0x80071D84
		// End Line: 1215

		/* begin block 1.2 */
			// Start line: 1217
			// Start offset: 0x80071D84

			/* begin block 1.2.1 */
				// Start line: 1218
				// Start offset: 0x80071D94

				/* begin block 1.2.1.1 */
					// Start line: 1219
					// Start offset: 0x80071D94

					/* begin block 1.2.1.1.1 */
						// Start line: 1219
						// Start offset: 0x80071DBC
					/* end block 1.2.1.1.1 */
					// End offset: 0x80071DD4
					// End Line: 1224
				/* end block 1.2.1.1 */
				// End offset: 0x80071DF0
				// End Line: 1225
			/* end block 1.2.1 */
			// End offset: 0x80071DF0
			// End Line: 1225
		/* end block 1.2 */
		// End offset: 0x80071DF0
		// End Line: 1225
	/* end block 1 */
	// End offset: 0x80071DF0
	// End Line: 1225

/* WARNING: Type propagation algorithm not settling */

void Execute__21AIState_RovingTraffic(AIState_RovingTraffic *this)

{
  int *piVar1;
  Trk_NewSlice *pTVar2;
  uint uVar3;
  int iVar4;
  Car_tObj *otherCarObj;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Car_tObj **ppCVar10;
  int local_20 [2];
  
  otherCarObj = (this->AIState_Base).carObj_;
  piVar1 = (int *)((this->AIState_Base)._vf[3].value * 0x14 + (this->AIState_Base)._vf[1].value);
  iVar8 = piVar1[1];
  iVar9 = piVar1[2];
  (otherCarObj->desiredVector).y = *piVar1;
  (otherCarObj->desiredVector).z = iVar8;
  otherCarObj->aCarWRTDesired = iVar9;
  (((this->AIState_Base).carObj_)->script).lastReactionIndex[5] =
       *(int *)((this->AIState_Base)._vf[3].value * 0x14 + (this->AIState_Base)._vf[1].value + 0xc)
       * 0x7247;
  pTVar2 = BWorldSm_slices + (int)(((this->AIState_Base).carObj_)->N).simRoadInfo.slice;
  iVar8 = (((this->AIState_Base).carObj_)->desiredVector).y - pTVar2->center[0];
  iVar9 = (((this->AIState_Base).carObj_)->desiredVector).z - pTVar2->center[1];
  iVar4 = ((this->AIState_Base).carObj_)->aCarWRTDesired - pTVar2->center[2];
  otherCarObj = (this->AIState_Base).carObj_;
  iVar5 = (otherCarObj->N).roadMatrix.m[0];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar6 = (otherCarObj->N).roadMatrix.m[1];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar7 = (otherCarObj->N).roadMatrix.m[2];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  (otherCarObj->angularAcc_ch).x =
       (iVar5 >> 8) * (iVar8 >> 8) + (iVar6 >> 8) * (iVar9 >> 8) + (iVar7 >> 8) * (iVar4 >> 8);
  otherCarObj = (this->AIState_Base).carObj_;
  iVar9 = (otherCarObj->desiredVector).y - (otherCarObj->N).position.x >> 0xc;
  otherCarObj = (this->AIState_Base).carObj_;
  iVar8 = otherCarObj->aCarWRTDesired - (otherCarObj->N).position.z >> 0xc;
  if (iVar9 * iVar9 + iVar8 * iVar8 < 10000) {
    if (this->path_ == (trigger_pathPosition_t *)0x0) {
      this->path_ = (trigger_pathPosition_t *)
                    (simGlobal.gameTicks +
                    *(int *)((this->AIState_Base)._vf[3].value * 0x14 +
                             (this->AIState_Base)._vf[1].value + 0x10));
    }
    if (simGlobal.gameTicks < (int)this->path_) {
      (((this->AIState_Base).carObj_)->script).lastReactionIndex[5] = 0;
    }
    else {
      uVar3 = (this->AIState_Base)._vf[3].value;
      this->path_ = (trigger_pathPosition_t *)0x0;
      (this->AIState_Base)._vf[3].value = uVar3 + 1;
    }
  }
  local_20[0] = 2;
  iVar8 = ((this->AIState_Base).carObj_)->sortIndex + 1;
  ppCVar10 = &__Cars_gSortedList_9__ + iVar8;
  while ((iVar8 < Cars_gNumCars && (local_20[0] == 2))) {
    otherCarObj = *ppCVar10;
    ppCVar10 = ppCVar10 + 1;
    iVar8 = iVar8 + 1;
    CheckIfCarIsNearbyAndStop__21AIState_RovingTrafficP8Car_tObjRi(this,otherCarObj,local_20);
  }
  if (local_20[0] != 1) {
    local_20[0] = 2;
    iVar8 = ((this->AIState_Base).carObj_)->sortIndex + -1;
    ppCVar10 = &__Cars_gSortedList_9__ + iVar8;
    while ((-1 < iVar8 && (local_20[0] == 2))) {
      otherCarObj = *ppCVar10;
      ppCVar10 = ppCVar10 + -1;
      iVar8 = iVar8 + -1;
      CheckIfCarIsNearbyAndStop__21AIState_RovingTrafficP8Car_tObjRi(this,otherCarObj,local_20);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._14AIState_Donuts(struct AIState_Donuts *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 1248, offset 0x80071e0c
	/* begin block 1 */
		// Start line: 1249
		// Start offset: 0x80071E0C
		// Variables:
	// 		struct AIState_Base *this; // $a0
	/* end block 1 */
	// End offset: 0x80071E0C
	// End Line: 1249

	/* begin block 2 */
		// Start line: 1249
		// Start offset: 0x80071E0C

		/* begin block 2.1 */
			// Start line: 1249
			// Start offset: 0x80071E0C
		/* end block 2.1 */
		// End offset: 0x80071E0C
		// End Line: 1249
	/* end block 2 */
	// End offset: 0x80071E60
	// End Line: 1254

void ___14AIState_Donuts(AIState_Donuts *this,int __in_chrg)

{
  Car_tObj *pCVar1;
  
  pCVar1 = (this->AIState_Base).carObj_;
  (this->AIState_Base)._vf[0].value = 0x80055540;
  pCVar1->aCarWRTDesired = 0;
  (pCVar1->desiredVector).z = 0;
  (pCVar1->desiredVector).y = 0;
  (((this->AIState_Base).carObj_)->angularAcc_ch).x = 0;
  ((this->AIState_Base).carObj_)->preferredLateralPosition = 0;
  (this->AIState_Base)._vf[0].value = 0x80055640;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Execute__14AIState_Donuts(struct AIState_Donuts *this /*$s0*/)
 // line 1256, offset 0x80071e70
	/* begin block 1 */
		// Start line: 1257
		// Start offset: 0x80071E70
		// Variables:
	// 		struct coorddef right; // stack offset -64
	// 		struct coorddef forward; // stack offset -48
	// 		struct coorddef targetPos; // stack offset -32
	// 		int latPos; // $s2
	// 		int slice; // $s1
	// 		int forwardDot; // $v0

		/* begin block 1.1 */
			// Start line: 1277
			// Start offset: 0x80071F3C

			/* begin block 1.1.1 */
				// Start line: 1278
				// Start offset: 0x80071F54
				// Variables:
			// 		int forwardSlice; // $v0
			// 		int forwardDot; // $v0
			// 		int dCarToCenter; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800720A8
			// End Line: 1292
		/* end block 1.1 */
		// End offset: 0x800722EC
		// End Line: 1323
	/* end block 1 */
	// End offset: 0x800722EC
	// End Line: 1327

/* WARNING: Type propagation algorithm not settling */

void Execute__14AIState_Donuts(AIState_Donuts *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Trk_NewSlice *pTVar5;
  Car_tObj *pCVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  Car_tObj *pCVar16;
  int iVar17;
  coorddef local_20;
  
  pCVar16 = (this->AIState_Base).carObj_;
  iVar12 = (pCVar16->N).orientMat.m[6];
  iVar17 = (int)(pCVar16->N).simRoadInfo.slice;
  if (iVar12 < 0) {
    iVar12 = iVar12 + 0xff;
  }
  iVar1 = (pCVar16->N).roadMatrix.m[6];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar13 = (pCVar16->N).orientMat.m[7];
  if (iVar13 < 0) {
    iVar13 = iVar13 + 0xff;
  }
  iVar2 = (pCVar16->N).roadMatrix.m[7];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar14 = (pCVar16->N).orientMat.m[8];
  if (iVar14 < 0) {
    iVar14 = iVar14 + 0xff;
  }
  iVar3 = (pCVar16->N).roadMatrix.m[8];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = 1;
  if ((iVar12 >> 8) * (iVar1 >> 8) + (iVar13 >> 8) * (iVar2 >> 8) + (iVar14 >> 8) * (iVar3 >> 8) < 1
     ) {
    iVar4 = -1;
  }
  (pCVar16->script).lastReactionIndex[3] = iVar4;
  (pCVar16->script).lastReactionIndex[2] = iVar4;
  uVar15 = (this->AIState_Base)._vf[2].value;
  if ((uVar15 == 1) || (uVar15 == 3)) {
    pCVar16 = (this->AIState_Base).carObj_;
    iVar12 = (pCVar16->N).orientMat.m[6];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar1 = (pCVar16->N).roadMatrix.m[6];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar13 = (pCVar16->N).orientMat.m[7];
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    iVar2 = (pCVar16->N).roadMatrix.m[7];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar14 = (pCVar16->N).orientMat.m[8];
    if (iVar14 < 0) {
      iVar14 = iVar14 + 0xff;
    }
    iVar3 = (pCVar16->N).roadMatrix.m[8];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar4 = iVar17 + 3;
    if ((iVar12 >> 8) * (iVar1 >> 8) + (iVar13 >> 8) * (iVar2 >> 8) + (iVar14 >> 8) * (iVar3 >> 8) <
        0) {
      iVar4 = iVar17 + -3;
      if (iVar4 < 0) {
        iVar4 = iVar17 + gNumSlices + -3;
      }
    }
    else {
      if (gNumSlices <= iVar4) {
        iVar4 = iVar17 - (gNumSlices + -3);
      }
    }
    pTVar5 = BWorldSm_slices + iVar4;
    local_20.x = pTVar5->center[0];
    local_20.y = pTVar5->center[1];
    local_20.z = pTVar5->center[2];
    iVar12 = (((this->AIState_Base).carObj_)->speechInfo).playerCarIndex;
    if (iVar12 < 0) {
      iVar12 = -iVar12;
    }
    iVar1 = 0;
    if (((this->AIState_Base)._vf[2].value == 1) && (iVar12 < 0x28000)) {
      (this->AIState_Base)._vf[2].value = 2;
    }
  }
  else {
    uVar15 = (this->AIState_Base)._vf[1].value - 0x10000;
    (this->AIState_Base)._vf[1].value = uVar15;
    if ((int)uVar15 < 0x8000) {
      randtemp = fastRandom * randSeed;
      fastRandom = randtemp & 0xffff;
      *(undefined **)&(this->AIState_Base)._vf[1].value =
           &DAT_00140000 + ((randtemp >> 8 & 0xffff) * 5 >> 0xe) * 0x10000;
    }
    pCVar16 = (this->AIState_Base).carObj_;
    iVar1 = (pCVar16->N).orientMat.m[1];
    iVar2 = (pCVar16->N).orientMat.m[2];
    pCVar6 = (this->AIState_Base).carObj_;
    iVar12 = (pCVar6->N).orientMat.m[6];
    iVar13 = (pCVar6->N).orientMat.m[7];
    iVar14 = (pCVar6->N).orientMat.m[8];
    uVar15 = fixedmult(0x60000,(pCVar16->N).orientMat.m[0]);
    uVar7 = fixedmult(0x60000,iVar1);
    uVar8 = fixedmult(0x60000,iVar2);
    uVar9 = fixedmult((this->AIState_Base)._vf[1].value,iVar12);
    uVar10 = fixedmult((this->AIState_Base)._vf[1].value,iVar13);
    uVar11 = fixedmult((this->AIState_Base)._vf[1].value,iVar14);
    local_20.x = (((this->AIState_Base).carObj_)->N).position.x + uVar15 + uVar9;
    local_20.y = (((this->AIState_Base).carObj_)->N).position.y + uVar7 + uVar10;
    local_20.z = (((this->AIState_Base).carObj_)->N).position.z + uVar8 + uVar11;
    pCVar16 = (this->AIState_Base).carObj_;
    iVar1 = Newton_CalculateRoadPositionFromSliceAndPosition__FiP8coorddefP10matrixtdef
                      ((int)(pCVar16->N).simRoadInfo.slice,&local_20,&(pCVar16->N).roadMatrix);
    iVar12 = (((this->AIState_Base).carObj_)->speechInfo).playerCarIndex;
    if (iVar12 < 0) {
      if ((int)-((uint)BWorldSm_slices[iVar17].avgPavedWidthLf * 0x8000 *
                (uint)(BWorldSm_slices[iVar17].laneCount >> 4)) <= iVar12 + -0x20000)
      goto LAB_800722ec;
    }
    else {
      if (iVar12 + 0x20000 <=
          (int)((uint)BWorldSm_slices[iVar17].avgPavedWidthRt * 0x8000 *
               ((uint)BWorldSm_slices[iVar17].laneCount & 0xf))) goto LAB_800722ec;
    }
    (this->AIState_Base)._vf[2].value = 1;
  }
LAB_800722ec:
  ((this->AIState_Base).carObj_)->preferredLateralPosition = (this->AIState_Base)._vf[2].value;
  AI_GenericBeginCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  AI_GenericCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  AI_GenericEndCycle__FP8Car_tObj((this->AIState_Base).carObj_);
  pCVar16 = (this->AIState_Base).carObj_;
  (pCVar16->desiredVector).y = local_20.x;
  (pCVar16->desiredVector).z = local_20.y;
  pCVar16->aCarWRTDesired = local_20.z;
  (((this->AIState_Base).carObj_)->angularAcc_ch).x = iVar1;
  (((this->AIState_Base).carObj_)->script).lastReactionIndex[5] = 0x471c7;
  return;
}



// decompiled code
// original method signature: 
// struct AIState_GotoSlice * /*$ra*/ __17AIState_GotoSliceP8Car_tObjii(struct AIState_GotoSlice *this /*$s0*/, struct Car_tObj *carObj /*$a1*/, int targetSlice /*$s1*/, int stopWhenArrivedAtSlice /*$s2*/)
 // line 1348, offset 0x8007236c
	/* begin block 1 */
		// Start line: 1349
		// Start offset: 0x8007236C
	/* end block 1 */
	// End offset: 0x8007236C
	// End Line: 1349

AIState_GotoSlice *
__17AIState_GotoSliceP8Car_tObjii
          (AIState_GotoSlice *this,Car_tObj *carObj,int targetSlice,int stopWhenArrivedAtSlice)

{
  __14AIState_NormalP8Car_tObj((AIState_Normal *)this,carObj);
  (this->AIState_Normal).AIState_Base._vf[0].value = 0x80055520;
  (this->AIState_Normal).AIState_Base._vf[1].value = targetSlice;
  (this->AIState_Normal).AIState_Base._vf[2].value = stopWhenArrivedAtSlice;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Execute__17AIState_GotoSlice(struct AIState_GotoSlice *this /*$s0*/)
 // line 1355, offset 0x800723c0
	/* begin block 1 */
		// Start line: 1356
		// Start offset: 0x800723C0
		// Variables:
	// 		int longMetersBetween; // $s1

		/* begin block 1.1 */
			// Start line: 1367
			// Start offset: 0x80072408

			/* begin block 1.1.1 */
				// Start line: 1371
				// Start offset: 0x80072420
				// Variables:
			// 		int distMeters; // $v1
			// 		int cap; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800724C4
			// End Line: 1389
		/* end block 1.1 */
		// End offset: 0x800724C4
		// End Line: 1389
	/* end block 1 */
	// End offset: 0x800724C4
	// End Line: 1389

/* WARNING: Type propagation algorithm not settling */

void Execute__17AIState_GotoSlice(AIState_GotoSlice *this)

{
  bool bVar1;
  int iVar2;
  Car_tObj *pCVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  iVar2 = AIWorld_ApxSplineDistance__FiP8Car_tObj
                    ((this->AIState_Normal).AIState_Base._vf[1].value,
                     (this->AIState_Normal).AIState_Base.carObj_);
  if (iVar2 < 0) {
    (((this->AIState_Normal).AIState_Base.carObj_)->script).lastReactionIndex[2] = -1;
  }
  else {
    (((this->AIState_Normal).AIState_Base.carObj_)->script).lastReactionIndex[2] = 1;
  }
  Execute__14AIState_Normal((AIState_Normal *)this);
  if ((this->AIState_Normal).AIState_Base._vf[2].value != 0) {
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    puVar4 = (undefined *)0xc80000;
    if (iVar2 < 0xc0000) {
      puVar4 = (undefined *)0x40000;
    }
    else {
      if (iVar2 < 0x320000) {
        puVar4 = &DAT_00140000;
      }
      else {
        if (iVar2 < 0x960000) {
          puVar4 = &DAT_00280000;
        }
        else {
          if (iVar2 < 0x1900000) {
            puVar4 = (undefined *)0x500000;
          }
        }
      }
    }
    pCVar3 = (this->AIState_Normal).AIState_Base.carObj_;
    puVar5 = (undefined *)(pCVar3->script).lastReactionIndex[5];
    if ((int)puVar5 < 0) {
      puVar4 = (undefined *)-(int)puVar4;
      bVar1 = (int)puVar4 < (int)puVar5;
    }
    else {
      bVar1 = (int)puVar5 < (int)puVar4;
    }
    if (bVar1) {
      puVar4 = puVar5;
    }
    *(undefined **)((pCVar3->script).lastReactionIndex + 5) = puVar4;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ InTargetSliceRange__17AIState_GotoSlicei(struct AIState_GotoSlice *this /*$v0*/, int rangeMeters /*$s0*/)
 // line 1395, offset 0x800724d8
	/* begin block 1 */
		// Start line: 1396
		// Start offset: 0x800724D8
		// Variables:
	// 		int distanceMeters; // $v0
	/* end block 1 */
	// End offset: 0x800724D8
	// End Line: 1396

int InTargetSliceRange__17AIState_GotoSlicei(AIState_GotoSlice *this,int rangeMeters)

{
  int iVar1;
  
  iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObji
                    ((this->AIState_Normal).AIState_Base.carObj_,
                     (this->AIState_Normal).AIState_Base._vf[1].value);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  return (uint)(iVar1 < rangeMeters);
}



// decompiled code
// original method signature: 
// struct AIState_Cruise * /*$ra*/ __14AIState_CruiseP8Car_tObj12cruiseMode_ti(struct AIState_Cruise *this /*$s0*/, struct Car_tObj *carObj /*$a1*/, enum cruiseMode_t cruiseMode /*$s1*/, int speedOrFactor /*$s2*/)
 // line 1403, offset 0x8007251c
	/* begin block 1 */
		// Start line: 1404
		// Start offset: 0x8007251C
	/* end block 1 */
	// End offset: 0x8007256C
	// End Line: 1409

AIState_Cruise *
__14AIState_CruiseP8Car_tObj12cruiseMode_ti
          (AIState_Cruise *this,Car_tObj *carObj,cruiseMode_t cruiseMode,int speedOrFactor)

{
  __14AIState_NormalP8Car_tObj((AIState_Normal *)this,carObj);
  (this->AIState_Normal).AIState_Base._vf[0].value = 0x80055500;
  (this->AIState_Normal).AIState_Base._vf[1].value = cruiseMode;
  if (cruiseMode == CRUISE_ATSETSPEED) {
    (this->AIState_Normal).AIState_Base._vf[2].value = speedOrFactor;
  }
  else {
    if (cruiseMode == CRUISE_ATFACTOR) {
      (this->AIState_Normal).AIState_Base._vf[3].value = speedOrFactor;
    }
  }
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Execute__14AIState_Cruise(struct AIState_Cruise *this /*$s0*/)
 // line 1414, offset 0x80072588
	/* begin block 1 */
		// Start line: 1415
		// Start offset: 0x80072588
	/* end block 1 */
	// End offset: 0x80072628
	// End Line: 1433

/* WARNING: Type propagation algorithm not settling */

void Execute__14AIState_Cruise(AIState_Cruise *this)

{
  uint uVar1;
  Car_tObj *pCVar2;
  
  uVar1 = (this->AIState_Normal).AIState_Base._vf[1].value;
  if (uVar1 == 1) {
    AISpeeds_CalcDesiredSpeed__FP8Car_tObj((this->AIState_Normal).AIState_Base.carObj_);
    uVar1 = fixedmult((((this->AIState_Normal).AIState_Base.carObj_)->script).lastReactionIndex[5],
                      (this->AIState_Normal).AIState_Base._vf[3].value);
    (((this->AIState_Normal).AIState_Base.carObj_)->script).lastReactionIndex[5] = uVar1;
  }
  else {
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) {
        pCVar2 = (this->AIState_Normal).AIState_Base.carObj_;
        (pCVar2->script).lastReactionIndex[5] =
             (this->AIState_Normal).AIState_Base._vf[2].value *
             (pCVar2->script).lastReactionIndex[3];
      }
    }
    else {
      if (uVar1 == 2) {
        AISpeeds_CalcTrafficTopSpeed__FP8Car_tObj((this->AIState_Normal).AIState_Base.carObj_);
      }
    }
  }
  AI_GenericBeginCycle__FP8Car_tObj((this->AIState_Normal).AIState_Base.carObj_);
  AI_GenericCycle__FP8Car_tObj((this->AIState_Normal).AIState_Base.carObj_);
  AI_GenericEndCycle__FP8Car_tObj((this->AIState_Normal).AIState_Base.carObj_);
  return;
}




