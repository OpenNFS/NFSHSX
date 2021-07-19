#include "THISDUST.H"
#include "AIH_BTCCOP.H"


// decompiled code
// original method signature: 
// struct AIHigh_BTC_Cop * /*$ra*/ __14AIHigh_BTC_CopP8Car_tObji(struct AIHigh_BTC_Cop *this /*$s0*/, struct Car_tObj *carObj /*$a1*/, int copIndex /*$a2*/)
 // line 107, offset 0x8005cb6c
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x8005CB6C
	/* end block 1 */
	// End offset: 0x8005CB6C
	// End Line: 108

	/* begin block 2 */
		// Start line: 214
	/* end block 2 */
	// End Line: 215

	/* begin block 3 */
		// Start line: 214
	/* end block 3 */
	// End Line: 215

AIHigh_BTC_Cop * __14AIHigh_BTC_CopP8Car_tObji(AIHigh_BTC_Cop *this,Car_tObj *carObj,int copIndex)

{
  __15AIHigh_BasicCopP8Car_tObji((AIHigh_BasicCop *)this,carObj,copIndex);
  *(undefined4 *)(this->AIHigh_BasicCop).AIHigh_Base._vf = 0x80054f04;
  this->perpTarget_ = (AIHigh_BTC_Perp *)0x0;
  this->chaseIndex_ = 0;
  this->freezeMode_ = FREEZE_NONE;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AssignToPlayer__14AIHigh_BTC_CopP15AIHigh_BTC_Perp(struct AIHigh_BTC_Cop *this /*$s0*/, struct AIHigh_BTC_Perp *target /*$s1*/)
 // line 115, offset 0x8005cbac
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x8005CBAC
	/* end block 1 */
	// End offset: 0x8005CC08
	// End Line: 127

	/* begin block 2 */
		// Start line: 230
	/* end block 2 */
	// End Line: 231

	/* begin block 3 */
		// Start line: 234
	/* end block 3 */
	// End Line: 235

	/* begin block 4 */
		// Start line: 234
	/* end block 4 */
	// End Line: 235

void AssignToPlayer__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
               (AIHigh_BTC_Cop *this,AIHigh_BTC_Perp *target)

{
  if (this->perpTarget_ != (AIHigh_BTC_Perp *)0x0) {
    RemoveChaser__16AIHigh_BasicPerpii7copType
              ((AIHigh_BasicPerp *)this->perpTarget_,(this->AIHigh_BasicCop).copIndex_,
               ((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->carIndex,(this->AIHigh_BasicCop).type_
              );
  }
  this->perpTarget_ = target;
  if (target != (AIHigh_BTC_Perp *)0x0) {
    AddChaser__16AIHigh_BasicPerpii7copType
              ((AIHigh_BasicPerp *)target,(this->AIHigh_BasicCop).copIndex_,
               ((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->carIndex,(this->AIHigh_BasicCop).type_
              );
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetCheckChasePosition__14AIHigh_BTC_CopP8coorddef(struct AIHigh_BTC_Cop *this /*$s0*/, struct coorddef *pos /*$s2*/)
 // line 130, offset 0x8005cc1c
	/* begin block 1 */
		// Start line: 131
		// Start offset: 0x8005CC1C
		// Variables:
	// 		int newPosition; // $v0
	// 		int changed; // $s1
	/* end block 1 */
	// End offset: 0x8005CC68
	// End Line: 149

	/* begin block 2 */
		// Start line: 260
	/* end block 2 */
	// End Line: 261

	/* begin block 3 */
		// Start line: 264
	/* end block 3 */
	// End Line: 265

	/* begin block 4 */
		// Start line: 264
	/* end block 4 */
	// End Line: 265

int GetCheckChasePosition__14AIHigh_BTC_CopP8coorddef(AIHigh_BTC_Cop *this,coorddef *pos)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = CheckChaserPosition__16AIHigh_BasicPerpii
                    ((AIHigh_BasicPerp *)this->perpTarget_,(this->AIHigh_BasicCop).copIndex_,
                     ((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->carIndex);
  bVar1 = iVar2 != this->chaseIndex_;
  if (bVar1) {
    this->chaseIndex_ = iVar2;
  }
  iVar2 = this->chaseIndex_;
  iVar3 = AIH_BTCCop_chasePositions[iVar2].y;
  iVar4 = AIH_BTCCop_chasePositions[iVar2].z;
  pos->x = AIH_BTCCop_chasePositions[iVar2].x;
  pos->y = iVar3;
  pos->z = iVar4;
  return (uint)bVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckForNewTarget__14AIHigh_BTC_Cop(struct AIHigh_BTC_Cop *this /*$s5*/)
 // line 154, offset 0x8005ccb8
	/* begin block 1 */
		// Start line: 155
		// Start offset: 0x8005CCB8
		// Variables:
	// 		struct AIHigh_BTC_Perp *newTarget; // $s3
	// 		int newTargetDistance; // $s4
	// 		int perpLoop; // $s2
	// 		struct AIHigh_BTC_Perp *old; // $s6

		/* begin block 1.1 */
			// Start line: 155
			// Start offset: 0x8005CCB8

			/* begin block 1.1.1 */
				// Start line: 170
				// Start offset: 0x8005CD04
				// Variables:
			// 		struct Car_tObj *testPerpCarObj; // $a1
			// 		int thisPerpCarIndex; // $v0
			// 		struct AIHigh_BTC_Perp *thisPerpHigh; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 177
					// Start offset: 0x8005CD48

					/* begin block 1.1.1.1.1 */
						// Start line: 177
						// Start offset: 0x8005CD48

						/* begin block 1.1.1.1.1.1 */
							// Start line: 177
							// Start offset: 0x8005CD48
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8005CD48
						// End Line: 177
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005CD48
					// End Line: 177

					/* begin block 1.1.1.1.2 */
						// Start line: 181
						// Start offset: 0x8005CD70
						// Variables:
					// 		int copToTargetDistanceMeters; // $v1
					/* end block 1.1.1.1.2 */
					// End offset: 0x8005CD9C
					// End Line: 187
				/* end block 1.1.1.1 */
				// End offset: 0x8005CD9C
				// End Line: 187
			/* end block 1.1.1 */
			// End offset: 0x8005CD9C
			// End Line: 187
		/* end block 1.1 */
		// End offset: 0x8005CDA8
		// End Line: 193
	/* end block 1 */
	// End offset: 0x8005CDE4
	// End Line: 207

	/* begin block 2 */
		// Start line: 313
	/* end block 2 */
	// End Line: 314

	/* begin block 3 */
		// Start line: 319
	/* end block 3 */
	// End Line: 320

	/* begin block 4 */
		// Start line: 319
	/* end block 4 */
	// End Line: 320

int CheckForNewTarget__14AIHigh_BTC_Cop(AIHigh_BTC_Cop *this)

{
  int iVar1;
  Car_tObj *otherCarObj;
  AIHigh_BTC_Perp *pAVar2;
  Car_tObj **ppCVar3;
  int iVar4;
  AIHigh_BTC_Perp *target;
  int iVar5;
  AIHigh_BTC_Perp *pAVar6;
  
  target = (AIHigh_BTC_Perp *)0x0;
  iVar5 = 0x27100000;
  iVar4 = 0;
  ppCVar3 = &Cars_gRaceCarList9;
  pAVar6 = this->perpTarget_;
  while (iVar4 < Cars_gNumRaceCars) {
    otherCarObj = *ppCVar3;
    if ((((otherCarObj->N).active != '\0') && ((otherCarObj->carFlags & 0x200U) == 0)) &&
       (pAVar2 = (AIHigh_BTC_Perp *)(&highLevelAIObjs9)[otherCarObj->carIndex],
       (pAVar2->AIHigh_BasicPerp).basicPerpInfo_.crime_ != CRIME_NONE)) {
      iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0
                        ((this->AIHigh_BasicCop).AIHigh_Base.carObj_,otherCarObj);
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < iVar5) {
        target = pAVar2;
        iVar5 = iVar1;
      }
    }
    ppCVar3 = ppCVar3 + 1;
    iVar4 = iVar4 + 1;
  }
  if ((target == (AIHigh_BTC_Perp *)0x0) || (target == pAVar6)) {
    iVar5 = 0;
    if ((pAVar6 != (AIHigh_BTC_Perp *)0x0) && (target == (AIHigh_BTC_Perp *)0x0)) {
      AssignToPlayer__14AIHigh_BTC_CopP15AIHigh_BTC_Perp(this,(AIHigh_BTC_Perp *)0x0);
      iVar5 = 0;
    }
  }
  else {
    AssignToPlayer__14AIHigh_BTC_CopP15AIHigh_BTC_Perp(this,target);
    iVar5 = 1;
  }
  return iVar5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp(struct AIHigh_BTC_Cop *this /*$a0*/, struct AIHigh_BTC_Perp *arrestMe /*$a1*/)
 // line 213, offset 0x8005ce10
	/* begin block 1 */
		// Start line: 214
		// Start offset: 0x8005CE10
	/* end block 1 */
	// End offset: 0x8005CE70
	// End Line: 248

	/* begin block 2 */
		// Start line: 480
	/* end block 2 */
	// End Line: 481

	/* begin block 3 */
		// Start line: 487
	/* end block 3 */
	// End Line: 488

	/* begin block 4 */
		// Start line: 487
	/* end block 4 */
	// End Line: 488

void StartArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp(AIHigh_BTC_Cop *this,AIHigh_BTC_Perp *arrestMe)

{
  Speaker *pSVar1;
  Car_tObj *carObj;
  
  if (this->freezeMode_ == FREEZE_NONE) {
    carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
    this->freezeMode_ = FREEZE_ARREST;
    if ((carObj->carFlags & 0x200U) != 0) {
      pSVar1 = Mobile__6SpeechP8Car_tObj(carObj);
      (**(code **)(*(int *)pSVar1->_vf + 0x4c))
                ((int)&(pSVar1->fPosition).flags + (int)*(short *)(*(int *)pSVar1->_vf + 0x48),1);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FinishArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp(struct AIHigh_BTC_Cop *this /*$s0*/, struct AIHigh_BTC_Perp *arrestMe /*$a1*/)
 // line 253, offset 0x8005ce80
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x8005CE80
	/* end block 1 */
	// End offset: 0x8005CED0
	// End Line: 274

	/* begin block 2 */
		// Start line: 569
	/* end block 2 */
	// End Line: 570

	/* begin block 3 */
		// Start line: 572
	/* end block 3 */
	// End Line: 573

	/* begin block 4 */
		// Start line: 572
	/* end block 4 */
	// End Line: 573

void FinishArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
               (AIHigh_BTC_Cop *this,AIHigh_BTC_Perp *arrestMe)

{
  int iVar1;
  
  if ((this->freezeMode_ == FREEZE_ARREST) || (this->freezeMode_ == FREEZE_NONE)) {
    iVar1 = *(int *)(this->AIHigh_BasicCop).AIHigh_Base._vf;
    this->freezeMode_ = FREEZE_ARRESTDONE;
    (**(code **)(iVar1 + 0x1c))
              ((int)&(this->AIHigh_BasicCop).AIHigh_Base.carObj_ + (int)*(short *)(iVar1 + 0x18));
    HudOff__14AIHigh_BTC_Cop(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FalseArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp(struct AIHigh_BTC_Cop *this /*$a0*/, struct AIHigh_BTC_Perp *cantArrestMe /*$a1*/)
 // line 283, offset 0x8005cee0
	/* begin block 1 */
		// Start line: 284
		// Start offset: 0x8005CEE0
	/* end block 1 */
	// End offset: 0x8005CEF4
	// End Line: 293

	/* begin block 2 */
		// Start line: 631
	/* end block 2 */
	// End Line: 632

	/* begin block 3 */
		// Start line: 634
	/* end block 3 */
	// End Line: 635

	/* begin block 4 */
		// Start line: 634
	/* end block 4 */
	// End Line: 635

	/* begin block 5 */
		// Start line: 639
	/* end block 5 */
	// End Line: 640

void FalseArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
               (AIHigh_BTC_Cop *this,AIHigh_BTC_Perp *cantArrestMe)

{
  if (this->perpTarget_ == cantArrestMe) {
    this->freezeMode_ = FREEZE_NEWPERP_DONE;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreezeAndEndChase__14AIHigh_BTC_Cop(struct AIHigh_BTC_Cop *this /*$a0*/)
 // line 296, offset 0x8005cefc
	/* begin block 1 */
		// Start line: 297
		// Start offset: 0x8005CEFC
	/* end block 1 */
	// End offset: 0x8005CEFC
	// End Line: 297

	/* begin block 2 */
		// Start line: 657
	/* end block 2 */
	// End Line: 658

	/* begin block 3 */
		// Start line: 660
	/* end block 3 */
	// End Line: 661

	/* begin block 4 */
		// Start line: 660
	/* end block 4 */
	// End Line: 661

	/* begin block 5 */
		// Start line: 666
	/* end block 5 */
	// End Line: 667

void FreezeAndEndChase__14AIHigh_BTC_Cop(AIHigh_BTC_Cop *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HudOff__14AIHigh_BTC_Cop(struct AIHigh_BTC_Cop *this /*$a0*/)
 // line 305, offset 0x8005cf04
	/* begin block 1 */
		// Start line: 306
		// Start offset: 0x8005CF04
	/* end block 1 */
	// End offset: 0x8005CF24
	// End Line: 312

	/* begin block 2 */
		// Start line: 675
	/* end block 2 */
	// End Line: 676

	/* begin block 3 */
		// Start line: 678
	/* end block 3 */
	// End Line: 679

	/* begin block 4 */
		// Start line: 678
	/* end block 4 */
	// End Line: 679

void HudOff__14AIHigh_BTC_Cop(AIHigh_BTC_Cop *this)

{
  if ((this->AIHigh_BasicCop).copIndex_ == 0) {
    Hud_BustedOverlayOff__Fv();
  }
  return;
}



// decompiled code
// original method signature: 
// struct AIHigh_BTC_HumanCop * /*$ra*/ __19AIHigh_BTC_HumanCopP8Car_tObji(struct AIHigh_BTC_HumanCop *this /*$s1*/, struct Car_tObj *carObj /*$a1*/, int copIndex /*$s0*/)
 // line 326, offset 0x8005cf34
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x8005CF34

		/* begin block 1.1 */
			// Start line: 327
			// Start offset: 0x8005CF34
			// Variables:
		// 		struct AIHigh_BTC_HumanCop *this; // $s1

			/* begin block 1.1.1 */
				// Start line: 327
				// Start offset: 0x8005CF34
			/* end block 1.1.1 */
			// End offset: 0x8005CF34
			// End Line: 327
		/* end block 1.1 */
		// End offset: 0x8005CF34
		// End Line: 327

		/* begin block 1.2 */
			// Start line: 327
			// Start offset: 0x8005CF34
			// Variables:
		// 		struct AIHigh_BTC_HumanCop *this; // $s1

			/* begin block 1.2.1 */
				// Start line: 327
				// Start offset: 0x8005CF34
			/* end block 1.2.1 */
			// End offset: 0x8005CF34
			// End Line: 327
		/* end block 1.2 */
		// End offset: 0x8005CF34
		// End Line: 327

		/* begin block 1.3 */
			// Start line: 327
			// Start offset: 0x8005CF34
			// Variables:
		// 		struct AIHigh_BTC_HumanCop *this; // $s1

			/* begin block 1.3.1 */
				// Start line: 327
				// Start offset: 0x8005CF34
			/* end block 1.3.1 */
			// End offset: 0x8005CF34
			// End Line: 327
		/* end block 1.3 */
		// End offset: 0x8005CF34
		// End Line: 327

		/* begin block 1.4 */
			// Start line: 327
			// Start offset: 0x8005CF34

			/* begin block 1.4.1 */
				// Start line: 345
				// Start offset: 0x8005CFE0
				// Variables:
			// 		int startDirection; // $s0
			// 		int startMovement; // $s2
			// 		int startSlice; // $a0
			// 		int addToSlice; // $v0
			// 		int bend; // $v0
			/* end block 1.4.1 */
			// End offset: 0x8005D134
			// End Line: 370
		/* end block 1.4 */
		// End offset: 0x8005D134
		// End Line: 370
	/* end block 1 */
	// End offset: 0x8005D134
	// End Line: 370

	/* begin block 2 */
		// Start line: 705
	/* end block 2 */
	// End Line: 706

	/* begin block 3 */
		// Start line: 720
	/* end block 3 */
	// End Line: 721

	/* begin block 4 */
		// Start line: 720
	/* end block 4 */
	// End Line: 721

/* WARNING: Type propagation algorithm not settling */

AIHigh_BTC_HumanCop *
__19AIHigh_BTC_HumanCopP8Car_tObji(AIHigh_BTC_HumanCop *this,Car_tObj *carObj,int copIndex)

{
  int iVar1;
  Car_tObj *pCVar2;
  int direction;
  uint movement;
  
  __14AIHigh_BTC_CopP8Car_tObji((AIHigh_BTC_Cop *)this,carObj,copIndex);
  *(undefined4 *)(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base._vf = 0x80054ee4;
  this->initialDirection_ = 1;
  this->currentStage_ = -1;
  this->stageTimeMultiplier_ = 0x10000;
  *(undefined4 *)((int)&this->wingmanStatus_ + 4) = 0;
  this->needPerp_ = 0;
  this->initialMovement_ = 0;
  this->stageRepeatCount_ = 0;
  pCVar2 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
  this->timeLeft_ = AITune_BTC[GameSetup_gData.skill].baseChaseTime;
  pCVar2->unlap = 0;
  lastInputRequestTick_ = 0;
  AILife_PlaceCarAtLocation__FP8Car_tObjiiiii
            ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_,0,0,1,0,0);
  if (copIndex == 0) {
    direction = -1;
    if (((fastRandom * randSeed & 0xffff00) >> 8) * 1000 >> 0x10 < 500) {
      direction = 1;
    }
    randtemp = (fastRandom * randSeed & 0xffff) * randSeed;
    fastRandom = randtemp & 0xffff;
    movement = 0;
    if (((randtemp & 0xffff00) >> 8) * 1000 >> 0x10 < 0x2ee) {
      movement = (uint)(AIHigh_CopGameType != COP_GAME_BTC_1HC1HP);
    }
    FindRandomBarrierFreeArea__19AIHigh_BTC_HumanCopiii(this,0,100,500);
    iVar1 = AIWorld_CalcRoadBend__FP8Car_tObji
                      ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_,3);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if ((0x5eb8 < iVar1) && (AIHigh_CopGameType != COP_GAME_BTC_1HC1HP)) {
      movement = 1;
    }
    NewStage__19AIHigh_BTC_HumanCopiii
              (this,(int)(((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->N).
                         simRoadInfo.slice,direction,movement);
  }
  return this;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindRandomBarrierFreeArea__19AIHigh_BTC_HumanCopiii(struct AIHigh_BTC_HumanCop *this /*$a0*/, int startSlice /*$a1*/, int safetyZone /*$s5*/, int randomDistance /*$a3*/)
 // line 379, offset 0x8005d150
	/* begin block 1 */
		// Start line: 380
		// Start offset: 0x8005D150
		// Variables:
	// 		int newOffset; // $v0
	// 		int newSlice; // $s1

		/* begin block 1.1 */
			// Start line: 383
			// Start offset: 0x8005D200
			// Variables:
		// 		int maxRuns; // $s3

			/* begin block 1.1.1 */
				// Start line: 383
				// Start offset: 0x8005D224
				// Variables:
			// 		int startCheckSlice; // $s0
			// 		int leftLaneFree; // $s0
			// 		int rightLaneFree; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8005D2F0
			// End Line: 390
		/* end block 1.1 */
		// End offset: 0x8005D2F8
		// End Line: 391
	/* end block 1 */
	// End offset: 0x8005D2F8
	// End Line: 393

	/* begin block 2 */
		// Start line: 853
	/* end block 2 */
	// End Line: 854

	/* begin block 3 */
		// Start line: 863
	/* end block 3 */
	// End Line: 864

	/* begin block 4 */
		// Start line: 863
	/* end block 4 */
	// End Line: 864

	/* begin block 5 */
		// Start line: 864
	/* end block 5 */
	// End Line: 865

	/* begin block 6 */
		// Start line: 864
	/* end block 6 */
	// End Line: 865

int FindRandomBarrierFreeArea__19AIHigh_BTC_HumanCopiii
              (AIHigh_BTC_HumanCop *this,int startSlice,int safetyZone,int randomDistance)

{
  int iVar1;
  int startSlice_00;
  int iVar2;
  
  randtemp = fastRandom * randSeed;
  fastRandom = randtemp & 0xffff;
  randomDistance = (randomDistance * (randtemp >> 8 & 0xffff) * 2 >> 0x10) - randomDistance;
  if (randomDistance < 0) {
    startSlice = startSlice + randomDistance;
    if (startSlice < 0) {
      startSlice = startSlice + gNumSlices;
    }
  }
  else {
    startSlice = startSlice + randomDistance;
    if (gNumSlices <= startSlice) {
      startSlice = startSlice - gNumSlices;
    }
  }
  iVar2 = 0;
  do {
    if (0x1d < iVar2) {
      return startSlice;
    }
    startSlice_00 = startSlice - safetyZone;
    if (safetyZone < 1) {
      if (gNumSlices <= startSlice_00) {
        iVar1 = -gNumSlices;
LAB_8005d270:
        startSlice_00 = startSlice_00 + iVar1;
      }
    }
    else {
      iVar1 = gNumSlices;
      if (startSlice_00 < 0) goto LAB_8005d270;
    }
    iVar1 = AIWorld_IsDriveableLaneInSliceRange__Fiiii(startSlice_00,safetyZone << 1,1,6);
    startSlice_00 = AIWorld_IsDriveableLaneInSliceRange__Fiiii(startSlice_00,safetyZone << 1,1,7);
    if ((iVar1 != 0) && (startSlice_00 != 0)) {
      return startSlice;
    }
    startSlice = startSlice + safetyZone / 5;
    if (safetyZone / 5 < 0) {
      startSlice_00 = gNumSlices;
      if (startSlice < 0) goto LAB_8005d2ec;
    }
    else {
      if (gNumSlices <= startSlice) {
        startSlice_00 = -gNumSlices;
LAB_8005d2ec:
        startSlice = startSlice + startSlice_00;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseAndStartChase__19AIHigh_BTC_HumanCopP15AIHigh_BTC_Perp(struct AIHigh_BTC_HumanCop *this /*$s1*/, struct AIHigh_BTC_Perp *newPerp /*$s0*/)
 // line 399, offset 0x8005d320
	/* begin block 1 */
		// Start line: 400
		// Start offset: 0x8005D320
	/* end block 1 */
	// End offset: 0x8005D374
	// End Line: 420

	/* begin block 2 */
		// Start line: 898
	/* end block 2 */
	// End Line: 899

	/* begin block 3 */
		// Start line: 905
	/* end block 3 */
	// End Line: 906

	/* begin block 4 */
		// Start line: 905
	/* end block 4 */
	// End Line: 906

/* WARNING: Type propagation algorithm not settling */

void ReleaseAndStartChase__19AIHigh_BTC_HumanCopP15AIHigh_BTC_Perp
               (AIHigh_BTC_HumanCop *this,AIHigh_BTC_Perp *newPerp)

{
  Car_tObj *pCVar1;
  
  pCVar1 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
  (pCVar1->speechInfo).speechSource = (pCVar1->speechInfo).speechSource | 2;
  CheckForNewTarget__14AIHigh_BTC_Cop((AIHigh_BTC_Cop *)this);
  if ((this->AIHigh_BTC_Cop).perpTarget_ == newPerp) {
    (this->AIHigh_BTC_Cop).freezeMode_ = FREEZE_NEWPERP_DONE;
    this->chaseStartTime_ = simGlobal.gameTicks;
  }
  ResetClearTrafficToPurgatory__19AIHigh_BTC_HumanCop(this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreezeAndEndChase__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this /*$s2*/)
 // line 425, offset 0x8005d390
	/* begin block 1 */
		// Start line: 426
		// Start offset: 0x8005D390

		/* begin block 1.1 */
			// Start line: 426
			// Start offset: 0x8005D390

			/* begin block 1.1.1 */
				// Start line: 436
				// Start offset: 0x8005D3B8
				// Variables:
			// 		int startDirection; // $s0
			// 		int startSlice; // $a1
			// 		int startMovement; // $s1
			// 		int addToSlice; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8005D54C
			// End Line: 457
		/* end block 1.1 */
		// End offset: 0x8005D54C
		// End Line: 457
	/* end block 1 */
	// End offset: 0x8005D54C
	// End Line: 457

	/* begin block 2 */
		// Start line: 957
	/* end block 2 */
	// End Line: 958

	/* begin block 3 */
		// Start line: 963
	/* end block 3 */
	// End Line: 964

	/* begin block 4 */
		// Start line: 963
	/* end block 4 */
	// End Line: 964

/* WARNING: Type propagation algorithm not settling */

void FreezeAndEndChase__19AIHigh_BTC_HumanCop(AIHigh_BTC_HumanCop *this)

{
  int copSlice;
  int iVar1;
  int direction;
  uint movement;
  
  if ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.copIndex_ == 0) {
    direction = -1;
    if (((fastRandom * randSeed & 0xffff00) >> 8) * 1000 >> 0x10 < 500) {
      direction = 1;
    }
    randtemp = (fastRandom * randSeed & 0xffff) * randSeed;
    fastRandom = randtemp & 0xffff;
    movement = 0;
    if (((randtemp & 0xffff00) >> 8) * 1000 >> 0x10 < 0x2ee) {
      movement = (uint)(AIHigh_CopGameType != COP_GAME_BTC_1HC1HP);
    }
    copSlice = Get__25AIDataRecord_TrackCurve_ti
                         (AIDataRecord_TrackCurve,
                          (int)(((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->N).
                               simRoadInfo.slice);
    if ((0x41 < copSlice) && (AIHigh_CopGameType != COP_GAME_BTC_1HC1HP)) {
      movement = 1;
    }
    copSlice = FindRandomBarrierFreeArea__19AIHigh_BTC_HumanCopiii
                         (this,(int)(((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->N
                                    ).simRoadInfo.slice,100,1);
    if ((this->currentStage_ + 1U & 1) == 0) {
      iVar1 = direction * 7;
    }
    else {
      iVar1 = direction * -7;
    }
    if (iVar1 < 0) {
      copSlice = copSlice + iVar1;
      if (copSlice < 0) {
        copSlice = copSlice + gNumSlices;
      }
    }
    else {
      copSlice = copSlice + iVar1;
      if (gNumSlices <= copSlice) {
        copSlice = copSlice - gNumSlices;
      }
    }
    (((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->N).simRoadInfo.slice =
         (short)copSlice;
    NewStage__19AIHigh_BTC_HumanCopiii(this,copSlice,direction,movement);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckConditionWithCop0__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this /*$s1*/)
 // line 461, offset 0x8005d564
	/* begin block 1 */
		// Start line: 462
		// Start offset: 0x8005D564

		/* begin block 1.1 */
			// Start line: 462
			// Start offset: 0x8005D564

			/* begin block 1.1.1 */
				// Start line: 467
				// Start offset: 0x8005D588
				// Variables:
			// 		struct AIHigh_BTC_HumanCop *leadCop; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 468
					// Start offset: 0x8005D588

					/* begin block 1.1.1.1.1 */
						// Start line: 468
						// Start offset: 0x8005D588
						// Variables:
					// 		struct AIHigh_BTC_HumanCop *this; // $s0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 468
							// Start offset: 0x8005D588
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8005D588
						// End Line: 468
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005D588
					// End Line: 468

					/* begin block 1.1.1.1.2 */
						// Start line: 468
						// Start offset: 0x8005D588
						// Variables:
					// 		struct AIHigh_BTC_HumanCop *this; // $s1

						/* begin block 1.1.1.1.2.1 */
							// Start line: 468
							// Start offset: 0x8005D588
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x8005D588
						// End Line: 468
					/* end block 1.1.1.1.2 */
					// End offset: 0x8005D588
					// End Line: 468

					/* begin block 1.1.1.1.3 */
						// Start line: 470
						// Start offset: 0x8005D5A4
						// Variables:
					// 		int startDirection; // $a2
					// 		int startSlice; // $a1
					// 		int startMovement; // $a3
					// 		int addToSlice; // $v0

						/* begin block 1.1.1.1.3.1 */
							// Start line: 470
							// Start offset: 0x8005D5A4
							// Variables:
						// 		struct AIHigh_BTC_HumanCop *this; // $s0

							/* begin block 1.1.1.1.3.1.1 */
								// Start line: 470
								// Start offset: 0x8005D5A4
							/* end block 1.1.1.1.3.1.1 */
							// End offset: 0x8005D5A4
							// End Line: 470
						/* end block 1.1.1.1.3.1 */
						// End offset: 0x8005D5A4
						// End Line: 470

						/* begin block 1.1.1.1.3.2 */
							// Start line: 470
							// Start offset: 0x8005D5A4
							// Variables:
						// 		struct AIHigh_BTC_HumanCop *this; // $s0

							/* begin block 1.1.1.1.3.2.1 */
								// Start line: 470
								// Start offset: 0x8005D5A4
							/* end block 1.1.1.1.3.2.1 */
							// End offset: 0x8005D5A4
							// End Line: 470
						/* end block 1.1.1.1.3.2 */
						// End offset: 0x8005D5A4
						// End Line: 470

						/* begin block 1.1.1.1.3.3 */
							// Start line: 470
							// Start offset: 0x8005D5A4
							// Variables:
						// 		struct AIHigh_Base *this; // $s0

							/* begin block 1.1.1.1.3.3.1 */
								// Start line: 470
								// Start offset: 0x8005D5A4
							/* end block 1.1.1.1.3.3.1 */
							// End offset: 0x8005D5A4
							// End Line: 470
						/* end block 1.1.1.1.3.3 */
						// End offset: 0x8005D5A4
						// End Line: 470
					/* end block 1.1.1.1.3 */
					// End offset: 0x8005D628
					// End Line: 480
				/* end block 1.1.1.1 */
				// End offset: 0x8005D628
				// End Line: 480

				/* begin block 1.1.1.2 */
					// Start line: 480
					// Start offset: 0x8005D628
					// Variables:
				// 		struct AIHigh_Base *this; // $s0

					/* begin block 1.1.1.2.1 */
						// Start line: 480
						// Start offset: 0x8005D628
					/* end block 1.1.1.2.1 */
					// End offset: 0x8005D628
					// End Line: 480
				/* end block 1.1.1.2 */
				// End offset: 0x8005D628
				// End Line: 480
			/* end block 1.1.1 */
			// End offset: 0x8005D63C
			// End Line: 486
		/* end block 1.1 */
		// End offset: 0x8005D63C
		// End Line: 486
	/* end block 1 */
	// End offset: 0x8005D63C
	// End Line: 486

	/* begin block 2 */
		// Start line: 1031
	/* end block 2 */
	// End Line: 1032

	/* begin block 3 */
		// Start line: 1036
	/* end block 3 */
	// End Line: 1037

	/* begin block 4 */
		// Start line: 1036
	/* end block 4 */
	// End Line: 1037

/* WARNING: Type propagation algorithm not settling */

void CheckConditionWithCop0__19AIHigh_BTC_HumanCop(AIHigh_BTC_HumanCop *this)

{
  AIHigh_Base *pAVar1;
  int iVar2;
  int copSlice;
  stateType_t direction;
  
  pAVar1 = highLevelAIObjs9;
  if ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.copIndex_ != 0) {
    if (this->currentStage_ < (int)highLevelAIObjs9[4].state_) {
      direction = highLevelAIObjs9[5].stateType_;
      copSlice = (int)(highLevelAIObjs9->carObj_->N).simRoadInfo.slice;
      if ((this->currentStage_ + 1U & 1) == 0) {
        iVar2 = direction * -0xe;
      }
      else {
        iVar2 = direction * 0xe;
      }
      if (iVar2 < 0) {
        copSlice = copSlice + iVar2;
        if (copSlice < 0) {
          copSlice = copSlice + gNumSlices;
        }
      }
      else {
        copSlice = copSlice + iVar2;
        if (gNumSlices <= copSlice) {
          copSlice = copSlice - gNumSlices;
        }
      }
      NewStage__19AIHigh_BTC_HumanCopiii(this,copSlice,direction,highLevelAIObjs9[5].schedulingOff_)
      ;
    }
    (((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->script).lastReactionIndex[5] =
         (pAVar1->carObj_->script).lastReactionIndex[5];
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewStage__19AIHigh_BTC_HumanCopiii(struct AIHigh_BTC_HumanCop *this /*$s2*/, int copSlice /*$s3*/, int direction /*$s4*/, int movement /*$s0*/)
 // line 490, offset 0x8005d650
	/* begin block 1 */
		// Start line: 491
		// Start offset: 0x8005D650
		// Variables:
	// 		int nextStageTime; // $s0
	// 		int newLatPos; // stack offset -36
	// 		int throwAway; // stack offset -40

		/* begin block 1.1 */
			// Start line: 517
			// Start offset: 0x8005D6FC

			/* begin block 1.1.1 */
				// Start line: 517
				// Start offset: 0x8005D6FC
			/* end block 1.1.1 */
			// End offset: 0x8005D6FC
			// End Line: 517
		/* end block 1.1 */
		// End offset: 0x8005D6FC
		// End Line: 517

		/* begin block 1.2 */
			// Start line: 517
			// Start offset: 0x8005D6FC
			// Variables:
		// 		struct AIHigh_BTC_HumanCop *this; // $s2
		// 		int initialDirection; // $s4

			/* begin block 1.2.1 */
				// Start line: 517
				// Start offset: 0x8005D6FC
			/* end block 1.2.1 */
			// End offset: 0x8005D6FC
			// End Line: 517
		/* end block 1.2 */
		// End offset: 0x8005D6FC
		// End Line: 517

		/* begin block 1.3 */
			// Start line: 517
			// Start offset: 0x8005D6FC
			// Variables:
		// 		struct AIHigh_BTC_HumanCop *this; // $s2
		// 		int initialMovement; // $s0

			/* begin block 1.3.1 */
				// Start line: 517
				// Start offset: 0x8005D6FC
			/* end block 1.3.1 */
			// End offset: 0x8005D6FC
			// End Line: 517
		/* end block 1.3 */
		// End offset: 0x8005D6FC
		// End Line: 517

		/* begin block 1.4 */
			// Start line: 517
			// Start offset: 0x8005D6FC

			/* begin block 1.4.1 */
				// Start line: 545
				// Start offset: 0x8005D76C

				/* begin block 1.4.1.1 */
					// Start line: 545
					// Start offset: 0x8005D76C

					/* begin block 1.4.1.1.1 */
						// Start line: 555
						// Start offset: 0x8005D794
						// Variables:
					// 		int rightPos; // $s1
					// 		int leftPos; // $s0
					/* end block 1.4.1.1.1 */
					// End offset: 0x8005D8D8
					// End Line: 579
				/* end block 1.4.1.1 */
				// End offset: 0x8005D8D8
				// End Line: 579
			/* end block 1.4.1 */
			// End offset: 0x8005D8D8
			// End Line: 579
		/* end block 1.4 */
		// End offset: 0x8005D8D8
		// End Line: 579
	/* end block 1 */
	// End offset: 0x8005D99C
	// End Line: 618

	/* begin block 2 */
		// Start line: 1089
	/* end block 2 */
	// End Line: 1090

	/* begin block 3 */
		// Start line: 1094
	/* end block 3 */
	// End Line: 1095

	/* begin block 4 */
		// Start line: 1094
	/* end block 4 */
	// End Line: 1095

/* WARNING: Type propagation algorithm not settling */

void NewStage__19AIHigh_BTC_HumanCopiii
               (AIHigh_BTC_HumanCop *this,int copSlice,int direction,int movement)

{
  Car_tObj *pCVar1;
  int desiredLatPos;
  Trk_NewSlice *pTVar2;
  uint uVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  this->currentStage_ = this->currentStage_ + 1;
  GameSetup_gData.perpArrests = GameSetup_gData.perpArrests + 1;
  if (((AIHigh_CopGameType + ~COP_GAME_PURSUIT < 2) &&
      (GameSetup_gData.numPerps <= this->currentStage_)) ||
     ((AIHigh_CopGameType == COP_GAME_BTC_1HC1HP && (2 < this->currentStage_)))) {
    simVar.endSimGame = 1;
    return;
  }
  BWorld_InitSpikeBelt__Fv();
  AICop_spikeBelt.active_ = 0;
  Object_ClearCustomObjects__Fv();
  pCVar1 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
  this->needPerp_ = direction;
  this->initialDirection_ = movement;
  (pCVar1->N).simRoadInfo.slice = (short)copSlice;
  (((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->script).lastReactionIndex[3] =
       direction;
  AICop_gRoadBlockState = kAICop_RoadBlockState_None;
  local_24 = 0;
  local_28 = 0;
  AIWorld_FindBarrierLessLaneAndPosition__FP8Car_tObjPiT1
            ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_,&local_28,&local_24);
  if (AIHigh_CopGameType == COP_GAME_BTC_1HC1HP) {
    local_30 = 0;
    local_2c = 0;
    desiredLatPos = local_24;
    goto LAB_8005d8cc;
  }
  if (movement != 0) {
    local_30 = direction * 0xd5555;
    local_2c = 0;
    desiredLatPos = local_24;
    goto LAB_8005d8cc;
  }
  pTVar2 = BWorldSm_slices + copSlice;
  local_2c = (uint)pTVar2->avgPavedWidthRt * 0x8000 * ((uint)pTVar2->laneCount & 0xf);
  uVar3 = (uint)(pTVar2->laneCount >> 4);
  local_30 = (uint)pTVar2->avgPavedWidthLf * 0x8000 * uVar3;
  desiredLatPos = (int)pTVar2->rightDrive * 0x100 + -0x8000;
  if (local_2c < desiredLatPos) {
    desiredLatPos = local_2c;
  }
  local_2c = (int)pTVar2->leftDrive * 0x100 + -0x8000;
  if (local_30 < local_2c) {
    local_2c = local_30;
  }
  local_30 = AIWorld_IsDriveableLane__Fii(copSlice,6 - uVar3);
  if (local_30 == 0) {
    local_2c = local_2c + -0x20000;
  }
  local_30 = AIWorld_IsDriveableLane__Fii
                       (copSlice,((uint)BWorldSm_slices[copSlice].laneCount & 0xf) + 7);
  if (local_30 == 0) {
    desiredLatPos = desiredLatPos + -0x20000;
  }
  if ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.copIndex_ == 0) {
    if (AITune_driveSide != 1) goto LAB_8005d8b8;
LAB_8005d8a0:
    local_2c = direction * 0x100;
  }
  else {
    if (AITune_driveSide == -1) goto LAB_8005d8a0;
LAB_8005d8b8:
    desiredLatPos = -local_2c;
    local_2c = direction * -0x100;
  }
  local_2c = local_2c + 0x200;
  local_30 = 0;
LAB_8005d8cc:
  AILife_PlaceCarAtLocation__FP8Car_tObjiiiii
            ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_,copSlice,desiredLatPos,
             direction,local_30,local_2c);
  if (AIHigh_CopGameType == COP_GAME_BTC_1HC1HP) {
    desiredLatPos = AIH_BTC_Cop_1HC1HP_StageTimes[this->currentStage_];
  }
  else {
    desiredLatPos = GameSetup_gData.perpInfo[this->currentStage_].TimeLimit;
  }
  desiredLatPos = desiredLatPos << 5;
  if (desiredLatPos < 0) {
    desiredLatPos = 0;
  }
  desiredLatPos = desiredLatPos * this->stageTimeMultiplier_;
  if (desiredLatPos < 0) {
    desiredLatPos = desiredLatPos + 0xffff;
  }
  if ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.copIndex_ == 0) {
    Hud_BTC_BonusTime__Fl((desiredLatPos >> 0x10) << 1);
  }
  local_2c = this->timeLeft_;
  *(undefined4 *)((int)&this->wingmanStatus_ + 4) = 1;
  this->chaseStartTime_ = 0;
  *(undefined4 *)&this->wingmanStatus_ = 0;
  (this->AIHigh_BTC_Cop).freezeMode_ = FREEZE_NEWPERP_ROVE;
  this->timeLeft_ = local_2c + (desiredLatPos >> 0x10);
  TrgSfx_RestartTrgSfx__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateAndCheckTimeLeft__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this /*$s0*/)
 // line 624, offset 0x8005d9c0
	/* begin block 1 */
		// Start line: 625
		// Start offset: 0x8005D9C0
		// Variables:
	// 		static void * sayLose; // offset 0x4

		/* begin block 1.1 */
			// Start line: 633
			// Start offset: 0x8005DA00

			/* begin block 1.1.1 */
				// Start line: 634
				// Start offset: 0x8005DA10

				/* begin block 1.1.1.1 */
					// Start line: 634
					// Start offset: 0x8005DA10

					/* begin block 1.1.1.1.1 */
						// Start line: 634
						// Start offset: 0x8005DA10
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005DA10
					// End Line: 634
				/* end block 1.1.1.1 */
				// End offset: 0x8005DA10
				// End Line: 634
			/* end block 1.1.1 */
			// End offset: 0x8005DA10
			// End Line: 634
		/* end block 1.1 */
		// End offset: 0x8005DA44
		// End Line: 636
	/* end block 1 */
	// End offset: 0x8005DAC4
	// End Line: 651

	/* begin block 2 */
		// Start line: 1396
	/* end block 2 */
	// End Line: 1397

	/* begin block 3 */
		// Start line: 1402
	/* end block 3 */
	// End Line: 1403

	/* begin block 4 */
		// Start line: 1402
	/* end block 4 */
	// End Line: 1403

void UpdateAndCheckTimeLeft__19AIHigh_BTC_HumanCop(AIHigh_BTC_HumanCop *this)

{
  AIHigh_BTC_Perp *pAVar1;
  Speaker *pSVar2;
  __98 _Var3;
  char *perpname;
  int timeleft;
  int iVar4;
  
  _Var3 = (this->AIHigh_BTC_Cop).freezeMode_;
  if ((_Var3 != FREEZE_ARREST) && (_Var3 != FREEZE_NEWPERP_ROVE)) {
    this->timeLeft_ = this->timeLeft_ - AI_elapsedTime;
  }
  pAVar1 = (this->AIHigh_BTC_Cop).perpTarget_;
  if (pAVar1 == (AIHigh_BTC_Perp *)0x0) {
    perpname = (char *)0x0;
    iVar4 = ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->RSControl;
    timeleft = 0;
  }
  else {
    timeleft = this->timeLeft_;
    iVar4 = ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->RSControl;
    perpname = ((pAVar1->AIHigh_BasicPerp).AIHigh_Base.carObj_)->carInfo->driver;
  }
  Hud_BTC_Update__FPcib(perpname,timeleft,(void *)(uint)(iVar4 == 0));
  if (this->timeLeft_ < 0) {
    if (DAT_8013c564 != 0) {
      pSVar2 = Mobile__6SpeechP8Car_tObj((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)
      ;
      (**(code **)(*(int *)pSVar2->_vf + 0x3c))
                ((int)&(pSVar2->fPosition).flags + (int)*(short *)(*(int *)pSVar2->_vf + 0x38));
      DAT_8013c564 = 0;
    }
    if (this->timeLeft_ < -0xa0) {
      simVar.endSimGame = 1;
      DAT_8013c564 = 1;
      HudOn__19AIHigh_BTC_HumanCopP15AIHigh_BTC_PerpiP8Car_tObj
                (this,(this->AIHigh_BTC_Cop).perpTarget_,1,
                 (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateFreezeModeAndPullOverMode__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this /*$a1*/)
 // line 692, offset 0x8005dad4
	/* begin block 1 */
		// Start line: 693
		// Start offset: 0x8005DAD4

		/* begin block 1.1 */
			// Start line: 693
			// Start offset: 0x8005DAD4

			/* begin block 1.1.1 */
				// Start line: 696
				// Start offset: 0x8005DAE8

				/* begin block 1.1.1.1 */
					// Start line: 697
					// Start offset: 0x8005DAE8
					// Variables:
				// 		struct AIHigh_BTC_HumanCop *this; // $a1

					/* begin block 1.1.1.1.1 */
						// Start line: 697
						// Start offset: 0x8005DAE8
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005DAE8
					// End Line: 697
				/* end block 1.1.1.1 */
				// End offset: 0x8005DAE8
				// End Line: 697
			/* end block 1.1.1 */
			// End offset: 0x8005DAE8
			// End Line: 697

			/* begin block 1.1.2 */
				// Start line: 701
				// Start offset: 0x8005DB0C

				/* begin block 1.1.2.1 */
					// Start line: 701
					// Start offset: 0x8005DB0C

					/* begin block 1.1.2.1.1 */
						// Start line: 702
						// Start offset: 0x8005DB1C

						/* begin block 1.1.2.1.1.1 */
							// Start line: 703
							// Start offset: 0x8005DB1C
							// Variables:
						// 		struct AIHigh_BTC_HumanCop *this; // $a1

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 703
								// Start offset: 0x8005DB1C
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x8005DB1C
							// End Line: 703
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x8005DB1C
						// End Line: 703
					/* end block 1.1.2.1.1 */
					// End offset: 0x8005DB1C
					// End Line: 703

					/* begin block 1.1.2.1.2 */
						// Start line: 708
						// Start offset: 0x8005DB3C

						/* begin block 1.1.2.1.2.1 */
							// Start line: 708
							// Start offset: 0x8005DB3C

							/* begin block 1.1.2.1.2.1.1 */
								// Start line: 709
								// Start offset: 0x8005DB44

								/* begin block 1.1.2.1.2.1.1.1 */
									// Start line: 710
									// Start offset: 0x8005DB44
									// Variables:
								// 		struct AIHigh_BTC_HumanCop *this; // $a1

									/* begin block 1.1.2.1.2.1.1.1.1 */
										// Start line: 710
										// Start offset: 0x8005DB44
									/* end block 1.1.2.1.2.1.1.1.1 */
									// End offset: 0x8005DB44
									// End Line: 710
								/* end block 1.1.2.1.2.1.1.1 */
								// End offset: 0x8005DB44
								// End Line: 710

								/* begin block 1.1.2.1.2.1.1.2 */
									// Start line: 710
									// Start offset: 0x8005DB44
									// Variables:
								// 		struct AIHigh_BTC_HumanCop *this; // $a1

									/* begin block 1.1.2.1.2.1.1.2.1 */
										// Start line: 710
										// Start offset: 0x8005DB44
									/* end block 1.1.2.1.2.1.1.2.1 */
									// End offset: 0x8005DB44
									// End Line: 710
								/* end block 1.1.2.1.2.1.1.2 */
								// End offset: 0x8005DB44
								// End Line: 710

								/* begin block 1.1.2.1.2.1.1.3 */
									// Start line: 710
									// Start offset: 0x8005DB44

									/* begin block 1.1.2.1.2.1.1.3.1 */
										// Start line: 714
										// Start offset: 0x8005DB94

										/* begin block 1.1.2.1.2.1.1.3.1.1 */
											// Start line: 714
											// Start offset: 0x8005DB94
											// Variables:
										// 		struct AIHigh_BTC_HumanCop *this; // $a1

											/* begin block 1.1.2.1.2.1.1.3.1.1.1 */
												// Start line: 714
												// Start offset: 0x8005DB94
											/* end block 1.1.2.1.2.1.1.3.1.1.1 */
											// End offset: 0x8005DB94
											// End Line: 714
										/* end block 1.1.2.1.2.1.1.3.1.1 */
										// End offset: 0x8005DB94
										// End Line: 714
									/* end block 1.1.2.1.2.1.1.3.1 */
									// End offset: 0x8005DB94
									// End Line: 714
								/* end block 1.1.2.1.2.1.1.3 */
								// End offset: 0x8005DB94
								// End Line: 714
							/* end block 1.1.2.1.2.1.1 */
							// End offset: 0x8005DB94
							// End Line: 714

							/* begin block 1.1.2.1.2.1.2 */
								// Start line: 717
								// Start offset: 0x8005DB9C

								/* begin block 1.1.2.1.2.1.2.1 */
									// Start line: 719
									// Start offset: 0x8005DBD4
									// Variables:
								// 		struct AIHigh_BTC_HumanCop *this; // $a1

									/* begin block 1.1.2.1.2.1.2.1.1 */
										// Start line: 719
										// Start offset: 0x8005DBD4
									/* end block 1.1.2.1.2.1.2.1.1 */
									// End offset: 0x8005DBD4
									// End Line: 719
								/* end block 1.1.2.1.2.1.2.1 */
								// End offset: 0x8005DBD4
								// End Line: 719
							/* end block 1.1.2.1.2.1.2 */
							// End offset: 0x8005DBF0
							// End Line: 723
						/* end block 1.1.2.1.2.1 */
						// End offset: 0x8005DBF0
						// End Line: 723
					/* end block 1.1.2.1.2 */
					// End offset: 0x8005DBF0
					// End Line: 723
				/* end block 1.1.2.1 */
				// End offset: 0x8005DBF0
				// End Line: 723
			/* end block 1.1.2 */
			// End offset: 0x8005DBF0
			// End Line: 723
		/* end block 1.1 */
		// End offset: 0x8005DBF0
		// End Line: 723
	/* end block 1 */
	// End offset: 0x8005DBF0
	// End Line: 723

	/* begin block 2 */
		// Start line: 1499
	/* end block 2 */
	// End Line: 1500

	/* begin block 3 */
		// Start line: 1541
	/* end block 3 */
	// End Line: 1542

	/* begin block 4 */
		// Start line: 1541
	/* end block 4 */
	// End Line: 1542

/* WARNING: Type propagation algorithm not settling */

void UpdateFreezeModeAndPullOverMode__19AIHigh_BTC_HumanCop(AIHigh_BTC_HumanCop *this)

{
  Car_tObj *pCVar1;
  __98 _Var2;
  
  if (this->timeLeft_ < 0) {
    pCVar1 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    AIInit_forceHumanHandBrake = 1;
    pCVar1->RSControl = (pCVar1->script).lastReactionIndex[3];
    this->initialMovement_ = 0;
    return;
  }
  _Var2 = (this->AIHigh_BTC_Cop).freezeMode_;
  if (_Var2 == FREEZE_ARREST) {
    ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->RSControl = 0;
    ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->pullOver = 1;
    this->initialMovement_ = 0;
    return;
  }
  if (_Var2 == FREEZE_NEWPERP_ROVE) {
    pCVar1 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    (pCVar1->speechInfo).speechSource = (pCVar1->speechInfo).speechSource & 0xfffffffd;
    ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->RSControl = this->needPerp_;
    ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->pullOver =
         (uint)(this->initialDirection_ == 0);
    if (((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->pullOver != 0) {
      this->initialMovement_ = 0;
      return;
    }
  }
  else {
    pCVar1 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    if ((pCVar1->pullOver == 1) || (pCVar1->RSControl != 0)) {
      (pCVar1->speechInfo).speechSource = (pCVar1->speechInfo).speechSource | 2;
    }
    pCVar1 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    this->initialMovement_ = 0;
    (this->AIHigh_BTC_Cop).freezeMode_ = FREEZE_NONE;
    pCVar1->RSControl = 0;
    ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->pullOver = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RequestWingman__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this /*$s1*/)
 // line 727, offset 0x8005dbf8
	/* begin block 1 */
		// Start line: 728
		// Start offset: 0x8005DBF8
		// Variables:
	// 		int wingmanActivationTime; // $s0
	/* end block 1 */
	// End offset: 0x8005DD00
	// End Line: 745

	/* begin block 2 */
		// Start line: 1609
	/* end block 2 */
	// End Line: 1610

	/* begin block 3 */
		// Start line: 1614
	/* end block 3 */
	// End Line: 1615

	/* begin block 4 */
		// Start line: 1614
	/* end block 4 */
	// End Line: 1615

void RequestWingman__19AIHigh_BTC_HumanCop(AIHigh_BTC_HumanCop *this)

{
  Speaker *pSVar1;
  int iVar2;
  
  if (1 < (this->AIHigh_BTC_Cop).freezeMode_ + ~FREEZE_NEWPERP_DONE) {
    iVar2 = GameSetup_gData.perpInfo[this->currentStage_].WingmanTime * 0x40 +
            AITune_BTC[GameSetup_gData.skill].wingmanTime;
    pSVar1 = Mobile__6SpeechP8Car_tObj((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
    (**(code **)(*(int *)pSVar1->_vf + 100))
              ((int)&(pSVar1->fPosition).flags + (int)*(short *)(*(int *)pSVar1->_vf + 0x60));
    if ((((this->chaseStartTime_ == 0) || (iVar2 == 0)) ||
        (simGlobal.gameTicks - this->chaseStartTime_ <= iVar2)) ||
       (*(int *)&this->wingmanStatus_ == 4)) {
      pSVar1 = Dispatch__6Speech();
      (**(code **)(*(int *)pSVar1->_vf + 0x1c))
                ((int)&(pSVar1->fPosition).flags + (int)*(short *)(*(int *)pSVar1->_vf + 0x18));
    }
    else {
      *(undefined4 *)&this->wingmanStatus_ = 1;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RequestBlockader__19AIHigh_BTC_HumanCopi(struct AIHigh_BTC_HumanCop *this /*$s0*/, int spikeBeltRequest /*$s1*/)
 // line 752, offset 0x8005dd14
	/* begin block 1 */
		// Start line: 753
		// Start offset: 0x8005DD14
		// Variables:
	// 		int availableTime; // $v1
	/* end block 1 */
	// End offset: 0x8005DED8
	// End Line: 780

	/* begin block 2 */
		// Start line: 1664
	/* end block 2 */
	// End Line: 1665

	/* begin block 3 */
		// Start line: 1667
	/* end block 3 */
	// End Line: 1668

	/* begin block 4 */
		// Start line: 1667
	/* end block 4 */
	// End Line: 1668

void RequestBlockader__19AIHigh_BTC_HumanCopi(AIHigh_BTC_HumanCop *this,int spikeBeltRequest)

{
  Speaker *pSVar1;
  int iVar2;
  int iVar3;
  
  if (1 < (this->AIHigh_BTC_Cop).freezeMode_ + ~FREEZE_NEWPERP_DONE) {
    if (spikeBeltRequest == 0) {
      pSVar1 = Mobile__6SpeechP8Car_tObj((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)
      ;
      (**(code **)(*(int *)pSVar1->_vf + 0x54))
                ((int)&(pSVar1->fPosition).flags + (int)*(short *)(*(int *)pSVar1->_vf + 0x50));
      iVar3 = GameSetup_gData.perpInfo[this->currentStage_].BlockadeCopTime;
      iVar2 = AITune_BTC[GameSetup_gData.skill].blockaderTime;
    }
    else {
      pSVar1 = Mobile__6SpeechP8Car_tObj((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)
      ;
      (**(code **)(*(int *)pSVar1->_vf + 0x5c))
                ((int)&(pSVar1->fPosition).flags + (int)*(short *)(*(int *)pSVar1->_vf + 0x58));
      iVar3 = GameSetup_gData.perpInfo[this->currentStage_].SpikeBeltTime;
      iVar2 = AITune_BTC[GameSetup_gData.skill].spikeBeltTime;
    }
    iVar2 = iVar3 * 0x40 + iVar2;
    if ((((this->chaseStartTime_ == 0) || (iVar2 < 1)) ||
        (simGlobal.gameTicks - this->chaseStartTime_ <= iVar2)) ||
       (*(int *)&this->wingmanStatus_ == 5)) {
      pSVar1 = Dispatch__6Speech();
      (**(code **)(*(int *)pSVar1->_vf + 0x1c))
                ((int)&(pSVar1->fPosition).flags + (int)*(short *)(*(int *)pSVar1->_vf + 0x18));
    }
    else {
      pSVar1 = Dispatch__6Speech();
      (**(code **)(*(int *)pSVar1->_vf + 0x24))
                ((int)&(pSVar1->fPosition).flags + (int)*(short *)(*(int *)pSVar1->_vf + 0x20));
      if (spikeBeltRequest == 0) {
        *(undefined4 *)&this->wingmanStatus_ = 2;
      }
      else {
        *(undefined4 *)&this->wingmanStatus_ = 3;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckForWingmanRequest__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this /*$a0*/)
 // line 785, offset 0x8005deec
	/* begin block 1 */
		// Start line: 786
		// Start offset: 0x8005DEEC
	/* end block 1 */
	// End offset: 0x8005DF08
	// End Line: 791

	/* begin block 2 */
		// Start line: 1729
	/* end block 2 */
	// End Line: 1730

	/* begin block 3 */
		// Start line: 1733
	/* end block 3 */
	// End Line: 1734

	/* begin block 4 */
		// Start line: 1733
	/* end block 4 */
	// End Line: 1734

	/* begin block 5 */
		// Start line: 1734
	/* end block 5 */
	// End Line: 1735

	/* begin block 6 */
		// Start line: 1734
	/* end block 6 */
	// End Line: 1735

int CheckForWingmanRequest__19AIHigh_BTC_HumanCop(AIHigh_BTC_HumanCop *this)

{
  if (*(int *)&this->wingmanStatus_ == 1) {
    *(undefined4 *)&this->wingmanStatus_ = 4;
    return 1;
  }
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckForBlockaderRequest__19AIHigh_BTC_HumanCopPi(struct AIHigh_BTC_HumanCop *this /*$a0*/, int *spikeBeltRequest /*$a1*/)
 // line 794, offset 0x8005df10
	/* begin block 1 */
		// Start line: 795
		// Start offset: 0x8005DF10
	/* end block 1 */
	// End offset: 0x8005DF4C
	// End Line: 809

	/* begin block 2 */
		// Start line: 1750
	/* end block 2 */
	// End Line: 1751

	/* begin block 3 */
		// Start line: 1754
	/* end block 3 */
	// End Line: 1755

	/* begin block 4 */
		// Start line: 1754
	/* end block 4 */
	// End Line: 1755

	/* begin block 5 */
		// Start line: 1755
	/* end block 5 */
	// End Line: 1756

	/* begin block 6 */
		// Start line: 1755
	/* end block 6 */
	// End Line: 1756

int CheckForBlockaderRequest__19AIHigh_BTC_HumanCopPi
              (AIHigh_BTC_HumanCop *this,int *spikeBeltRequest)

{
  *spikeBeltRequest = 0;
  if (*(int *)&this->wingmanStatus_ - 2U < 2) {
    if (*(int *)&this->wingmanStatus_ == 3) {
      *spikeBeltRequest = 1;
    }
    *(undefined4 *)&this->wingmanStatus_ = 5;
    return 1;
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateWingmanRole__19AIHigh_BTC_HumanCop12Wingman_Role(struct AIHigh_BTC_HumanCop *this /*$a0*/, enum Wingman_Role currentRole /*$a1*/)
 // line 812, offset 0x8005df54
	/* begin block 1 */
		// Start line: 813
		// Start offset: 0x8005DF54
	/* end block 1 */
	// End offset: 0x8005DFA0
	// End Line: 827

	/* begin block 2 */
		// Start line: 1786
	/* end block 2 */
	// End Line: 1787

	/* begin block 3 */
		// Start line: 1790
	/* end block 3 */
	// End Line: 1791

	/* begin block 4 */
		// Start line: 1790
	/* end block 4 */
	// End Line: 1791

	/* begin block 5 */
		// Start line: 1791
	/* end block 5 */
	// End Line: 1792

	/* begin block 6 */
		// Start line: 1791
	/* end block 6 */
	// End Line: 1792

void UpdateWingmanRole__19AIHigh_BTC_HumanCop12Wingman_Role
               (AIHigh_BTC_HumanCop *this,Wingman_Role currentRole)

{
  if (currentRole == ROLE_WINGMAN) {
    *(undefined4 *)&this->wingmanStatus_ = 4;
    return;
  }
  if ((int)currentRole < 2) {
    if (currentRole == ROLE_IDLE) {
      *(undefined4 *)&this->wingmanStatus_ = 0;
      return;
    }
  }
  else {
    if ((int)currentRole < 4) {
      *(undefined4 *)&this->wingmanStatus_ = 5;
      return;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearTrafficToPurgatory__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this /*$a0*/)
 // line 832, offset 0x8005dfa0
	/* begin block 1 */
		// Start line: 833
		// Start offset: 0x8005DFA0

		/* begin block 1.1 */
			// Start line: 834
			// Start offset: 0x8005DFA0
			// Variables:
		// 		int trafficLoop; // $a0

			/* begin block 1.1.1 */
				// Start line: 834
				// Start offset: 0x8005DFC0
				// Variables:
			// 		struct Car_tObj *testTrafficCarObj; // $v0
			// 		struct AIHigh_Traffic *testTrafficHigh; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 836
					// Start offset: 0x8005DFCC
					// Variables:
				// 		struct AIHigh_Traffic *this; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 836
						// Start offset: 0x8005DFCC
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005DFCC
					// End Line: 836
				/* end block 1.1.1.1 */
				// End offset: 0x8005DFCC
				// End Line: 836
			/* end block 1.1.1 */
			// End offset: 0x8005DFCC
			// End Line: 836
		/* end block 1.1 */
		// End offset: 0x8005DFF0
		// End Line: 839
	/* end block 1 */
	// End offset: 0x8005DFF0
	// End Line: 839

	/* begin block 2 */
		// Start line: 1824
	/* end block 2 */
	// End Line: 1825

	/* begin block 3 */
		// Start line: 1824
	/* end block 3 */
	// End Line: 1825

	/* begin block 4 */
		// Start line: 1830
	/* end block 4 */
	// End Line: 1831

	/* begin block 5 */
		// Start line: 1830
	/* end block 5 */
	// End Line: 1831

	/* begin block 6 */
		// Start line: 1831
	/* end block 6 */
	// End Line: 1832

	/* begin block 7 */
		// Start line: 1831
	/* end block 7 */
	// End Line: 1832

void ClearTrafficToPurgatory__19AIHigh_BTC_HumanCop(AIHigh_BTC_HumanCop *this)

{
  bool bVar1;
  int iVar2;
  Car_tObj *pCVar3;
  Car_tObj **ppCVar4;
  int iVar5;
  
  iVar2 = Cars_gNumTrafficCars;
  iVar5 = 0;
  ppCVar4 = &Cars_gTrafficCarList9;
  while (bVar1 = iVar5 < iVar2, iVar5 = iVar5 + 1, bVar1) {
    pCVar3 = *ppCVar4;
    ppCVar4 = ppCVar4 + 1;
    (&highLevelAIObjs9)[pCVar3->carIndex][1].state_ = (AIState_Base *)0x1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResetClearTrafficToPurgatory__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this /*$a0*/)
 // line 842, offset 0x8005dff8
	/* begin block 1 */
		// Start line: 843
		// Start offset: 0x8005DFF8

		/* begin block 1.1 */
			// Start line: 844
			// Start offset: 0x8005DFF8
			// Variables:
		// 		int trafficLoop; // $a0

			/* begin block 1.1.1 */
				// Start line: 844
				// Start offset: 0x8005E014
				// Variables:
			// 		struct Car_tObj *testTrafficCarObj; // $v0
			// 		struct AIHigh_Traffic *testTrafficHigh; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 846
					// Start offset: 0x8005E020
					// Variables:
				// 		struct AIHigh_Traffic *this; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 846
						// Start offset: 0x8005E020
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005E020
					// End Line: 846
				/* end block 1.1.1.1 */
				// End offset: 0x8005E020
				// End Line: 846
			/* end block 1.1.1 */
			// End offset: 0x8005E020
			// End Line: 846
		/* end block 1.1 */
		// End offset: 0x8005E044
		// End Line: 849
	/* end block 1 */
	// End offset: 0x8005E044
	// End Line: 849

	/* begin block 2 */
		// Start line: 1848
	/* end block 2 */
	// End Line: 1849

	/* begin block 3 */
		// Start line: 1852
	/* end block 3 */
	// End Line: 1853

	/* begin block 4 */
		// Start line: 1852
	/* end block 4 */
	// End Line: 1853

	/* begin block 5 */
		// Start line: 1853
	/* end block 5 */
	// End Line: 1854

	/* begin block 6 */
		// Start line: 1853
	/* end block 6 */
	// End Line: 1854

void ResetClearTrafficToPurgatory__19AIHigh_BTC_HumanCop(AIHigh_BTC_HumanCop *this)

{
  bool bVar1;
  int iVar2;
  Car_tObj *pCVar3;
  Car_tObj **ppCVar4;
  int iVar5;
  
  iVar2 = Cars_gNumTrafficCars;
  iVar5 = 0;
  ppCVar4 = &Cars_gTrafficCarList9;
  while (bVar1 = iVar5 < iVar2, iVar5 = iVar5 + 1, bVar1) {
    pCVar3 = *ppCVar4;
    ppCVar4 = ppCVar4 + 1;
    (&highLevelAIObjs9)[pCVar3->carIndex][1].state_ = (AIState_Base *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDesiredSpeed__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this /*$s0*/)
 // line 854, offset 0x8005e04c
	/* begin block 1 */
		// Start line: 855
		// Start offset: 0x8005E04C

		/* begin block 1.1 */
			// Start line: 855
			// Start offset: 0x8005E04C

			/* begin block 1.1.1 */
				// Start line: 857
				// Start offset: 0x8005E074
				// Variables:
			// 		int curveSpeed; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 858
					// Start offset: 0x8005E074
					// Variables:
				// 		struct AIHigh_BTC_HumanCop *this; // $s0

					/* begin block 1.1.1.1.1 */
						// Start line: 858
						// Start offset: 0x8005E074
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005E074
					// End Line: 858
				/* end block 1.1.1.1 */
				// End offset: 0x8005E074
				// End Line: 858

				/* begin block 1.1.1.2 */
					// Start line: 859
					// Start offset: 0x8005E094
					// Variables:
				// 		struct AIHigh_BTC_HumanCop *this; // $s0

					/* begin block 1.1.1.2.1 */
						// Start line: 859
						// Start offset: 0x8005E094
					/* end block 1.1.1.2.1 */
					// End offset: 0x8005E098
					// End Line: 859
				/* end block 1.1.1.2 */
				// End offset: 0x8005E098
				// End Line: 859
			/* end block 1.1.1 */
			// End offset: 0x8005E09C
			// End Line: 859
		/* end block 1.1 */
		// End offset: 0x8005E09C
		// End Line: 859
	/* end block 1 */
	// End offset: 0x8005E09C
	// End Line: 859

	/* begin block 2 */
		// Start line: 1872
	/* end block 2 */
	// End Line: 1873

	/* begin block 3 */
		// Start line: 1878
	/* end block 3 */
	// End Line: 1879

	/* begin block 4 */
		// Start line: 1878
	/* end block 4 */
	// End Line: 1879

/* WARNING: Type propagation algorithm not settling */

void SetDesiredSpeed__19AIHigh_BTC_HumanCop(AIHigh_BTC_HumanCop *this)

{
  int iVar1;
  Car_tObj *carObj;
  
  carObj = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
  if (carObj->RSControl != 0) {
    iVar1 = AISpeeds_CalcHumanTopSpeed__FP8Car_tObj(carObj);
    if (this->initialMovement_ < iVar1) {
      iVar1 = this->initialMovement_;
    }
    (((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->script).lastReactionIndex[5] =
         iVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HighExecute__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this /*$s0*/)
 // line 863, offset 0x8005e0ac
	/* begin block 1 */
		// Start line: 864
		// Start offset: 0x8005E0AC

		/* begin block 1.1 */
			// Start line: 871
			// Start offset: 0x8005E0E8

			/* begin block 1.1.1 */
				// Start line: 872
				// Start offset: 0x8005E108

				/* begin block 1.1.1.1 */
					// Start line: 872
					// Start offset: 0x8005E108

					/* begin block 1.1.1.1.1 */
						// Start line: 872
						// Start offset: 0x8005E108
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005E108
					// End Line: 872
				/* end block 1.1.1.1 */
				// End offset: 0x8005E108
				// End Line: 872
			/* end block 1.1.1 */
			// End offset: 0x8005E11C
			// End Line: 882
		/* end block 1.1 */
		// End offset: 0x8005E11C
		// End Line: 882

		/* begin block 1.2 */
			// Start line: 887
			// Start offset: 0x8005E11C

			/* begin block 1.2.1 */
				// Start line: 893
				// Start offset: 0x8005E154
				// Variables:
			// 		struct coorddef notUsed; // stack offset -32
			/* end block 1.2.1 */
			// End offset: 0x8005E15C
			// End Line: 895
		/* end block 1.2 */
		// End offset: 0x8005E15C
		// End Line: 895
	/* end block 1 */
	// End offset: 0x8005E264
	// End Line: 932

	/* begin block 2 */
		// Start line: 1891
	/* end block 2 */
	// End Line: 1892

	/* begin block 3 */
		// Start line: 1896
	/* end block 3 */
	// End Line: 1897

	/* begin block 4 */
		// Start line: 1896
	/* end block 4 */
	// End Line: 1897

/* WARNING: Type propagation algorithm not settling */

void HighExecute__19AIHigh_BTC_HumanCop(AIHigh_BTC_HumanCop *this)

{
  Car_tObj *pCVar1;
  AIHigh_BTC_Perp *pAVar2;
  coorddef cStack32;
  
  if (((this->AIHigh_BTC_Cop).AIHigh_BasicCop.copIndex_ == 0) &&
     ((this->AIHigh_BTC_Cop).freezeMode_ == FREEZE_NEWPERP_ROVE)) {
    ClearTrafficToPurgatory__19AIHigh_BTC_HumanCop(this);
  }
  pAVar2 = (this->AIHigh_BTC_Cop).perpTarget_;
  if ((pAVar2 != (AIHigh_BTC_Perp *)0x0) &&
     ((this->AIHigh_BTC_Cop).freezeMode_ != FREEZE_NEWPERP_ROVE)) {
    (((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->script).lastReactionIndex[2] =
         (((pAVar2->AIHigh_BasicPerp).AIHigh_Base.carObj_)->script).lastReactionIndex[3];
  }
  SetDesiredSpeed__19AIHigh_BTC_HumanCop(this);
  CheckConditionWithCop0__19AIHigh_BTC_HumanCop(this);
  UpdateFreezeModeAndPullOverMode__19AIHigh_BTC_HumanCop(this);
  UpdateAndCheckTimeLeft__19AIHigh_BTC_HumanCop(this);
  CheckForNewTarget__14AIHigh_BTC_Cop((AIHigh_BTC_Cop *)this);
  if ((this->AIHigh_BTC_Cop).perpTarget_ != (AIHigh_BTC_Perp *)0x0) {
    GetCheckChasePosition__14AIHigh_BTC_CopP8coorddef((AIHigh_BTC_Cop *)this,&cStack32);
  }
  if (AIHigh_CopGameType == COP_GAME_BTC_1HC) {
    if (simGlobal.gameTicks - lastInputRequestTick_ < 0x281) {
      pCVar1 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
      if ((uint)(byte)(pCVar1->control).queuedEvent - 4 < 3) {
        (pCVar1->control).queuedEvent = '\0';
      }
    }
    else {
      if ((((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->control).queuedEvent ==
          '\x04') {
        RequestWingman__19AIHigh_BTC_HumanCop(this);
        (((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->control).queuedEvent = '\0';
        lastInputRequestTick_ = simGlobal.gameTicks;
      }
      if ((((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->control).queuedEvent ==
          '\x05') {
        RequestBlockader__19AIHigh_BTC_HumanCopi(this,0);
        (((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->control).queuedEvent = '\0';
        lastInputRequestTick_ = simGlobal.gameTicks;
      }
      if ((((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->control).queuedEvent ==
          '\x06') {
        RequestBlockader__19AIHigh_BTC_HumanCopi(this,1);
        (((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->control).queuedEvent = '\0';
        lastInputRequestTick_ = simGlobal.gameTicks;
      }
    }
  }
  StateExecute__12AIState_Base((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HudOn__19AIHigh_BTC_HumanCopP15AIHigh_BTC_PerpiP8Car_tObj(struct AIHigh_BTC_HumanCop *this /*$a0*/, struct AIHigh_BTC_Perp *arrestMe /*$a1*/, int gameOver /*$a2*/, struct Car_tObj *arrestingCop /*$a3*/)
 // line 938, offset 0x8005e284
	/* begin block 1 */
		// Start line: 939
		// Start offset: 0x8005E284
		// Variables:
	// 		struct Car_tObj *arrestingHumanCop; // $a3

		/* begin block 1.1 */
			// Start line: 947
			// Start offset: 0x8005E2A4

			/* begin block 1.1.1 */
				// Start line: 948
				// Start offset: 0x8005E2BC

				/* begin block 1.1.1.1 */
					// Start line: 948
					// Start offset: 0x8005E2BC
					// Variables:
				// 		struct AIHigh_Base *this; // $a1

					/* begin block 1.1.1.1.1 */
						// Start line: 948
						// Start offset: 0x8005E2BC
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005E2BC
					// End Line: 948
				/* end block 1.1.1.1 */
				// End offset: 0x8005E2BC
				// End Line: 948
			/* end block 1.1.1 */
			// End offset: 0x8005E2E0
			// End Line: 948
		/* end block 1.1 */
		// End offset: 0x8005E2E0
		// End Line: 948
	/* end block 1 */
	// End offset: 0x8005E2E0
	// End Line: 948

	/* begin block 2 */
		// Start line: 2039
	/* end block 2 */
	// End Line: 2040

	/* begin block 3 */
		// Start line: 2046
	/* end block 3 */
	// End Line: 2047

	/* begin block 4 */
		// Start line: 2046
	/* end block 4 */
	// End Line: 2047

void HudOn__19AIHigh_BTC_HumanCopP15AIHigh_BTC_PerpiP8Car_tObj
               (AIHigh_BTC_HumanCop *this,AIHigh_BTC_Perp *arrestMe,int gameOver,
               Car_tObj *arrestingCop)

{
  if ((arrestingCop->carFlags & 2U) != 0) {
    arrestingCop = Cars_gHumanRaceCarList9;
  }
  if (((this->AIHigh_BTC_Cop).AIHigh_BasicCop.copIndex_ == 0) || (gameOver != 0)) {
    Hud_BustedOverlayOn__FiPcbs
              (simGlobal.gameTicks - this->chaseStartTime_,
               ((arrestMe->AIHigh_BasicPerp).AIHigh_Base.carObj_)->carInfo->driver,
               (void *)(uint)(gameOver == 0),*(short *)&arrestingCop->carIndex);
  }
  return;
}



// decompiled code
// original method signature: 
// struct AIHigh_BTC_Wingman * /*$ra*/ __18AIHigh_BTC_WingmanP8Car_tObji(struct AIHigh_BTC_Wingman *this /*$s0*/, struct Car_tObj *carObj /*$a1*/, int copIndex /*$a2*/)
 // line 964, offset 0x8005e2f0
	/* begin block 1 */
		// Start line: 965
		// Start offset: 0x8005E2F0
	/* end block 1 */
	// End offset: 0x8005E2F0
	// End Line: 965

	/* begin block 2 */
		// Start line: 2081
	/* end block 2 */
	// End Line: 2082

	/* begin block 3 */
		// Start line: 2098
	/* end block 3 */
	// End Line: 2099

	/* begin block 4 */
		// Start line: 2098
	/* end block 4 */
	// End Line: 2099

AIHigh_BTC_Wingman *
__18AIHigh_BTC_WingmanP8Car_tObji(AIHigh_BTC_Wingman *this,Car_tObj *carObj,int copIndex)

{
  __14AIHigh_BTC_CopP8Car_tObji((AIHigh_BTC_Cop *)this,carObj,copIndex);
  *(undefined4 *)(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base._vf = 0x80054ec4;
  this->spikeBeltPlaced_ = 0;
  this->spikeBeltSlice_ = 0;
  this->spikeBeltInterceptReleaseTime_ = 0;
  this->currentRole_ = ROLE_IDLE;
  this->newRole_ = ROLE_IDLE;
  this->newHumanBoss_ = (AIHigh_BTC_HumanCop *)0x0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HighExecute__18AIHigh_BTC_Wingman(struct AIHigh_BTC_Wingman *this /*$s1*/)
 // line 976, offset 0x8005e33c
	/* begin block 1 */
		// Start line: 977
		// Start offset: 0x8005E33C

		/* begin block 1.1 */
			// Start line: 977
			// Start offset: 0x8005E33C

			/* begin block 1.1.1 */
				// Start line: 987
				// Start offset: 0x8005E390

				/* begin block 1.1.1.1 */
					// Start line: 989
					// Start offset: 0x8005E390

					/* begin block 1.1.1.1.1 */
						// Start line: 990
						// Start offset: 0x8005E390
						// Variables:
					// 		struct Car_tObj *carObj; // $s0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 990
							// Start offset: 0x8005E390

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 990
								// Start offset: 0x8005E390

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 990
									// Start offset: 0x8005E390
									// Variables:
								// 		struct coorddef trafficOffset; // stack offset -64
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8005E390
								// End Line: 990
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8005E390
							// End Line: 990
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8005E390
						// End Line: 990
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005E390
					// End Line: 990

					/* begin block 1.1.1.1.2 */
						// Start line: 990
						// Start offset: 0x8005E390
						// Variables:
					// 		struct AIHigh_Base *this; // $s1

						/* begin block 1.1.1.1.2.1 */
							// Start line: 990
							// Start offset: 0x8005E390
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x8005E43C
						// End Line: 991
					/* end block 1.1.1.1.2 */
					// End offset: 0x8005E43C
					// End Line: 991
				/* end block 1.1.1.1 */
				// End offset: 0x8005E43C
				// End Line: 991

				/* begin block 1.1.1.2 */
					// Start line: 997
					// Start offset: 0x8005E448

					/* begin block 1.1.1.2.1 */
						// Start line: 998
						// Start offset: 0x8005E448

						/* begin block 1.1.1.2.1.1 */
							// Start line: 1000
							// Start offset: 0x8005E480

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 1001
								// Start offset: 0x8005E480

								/* begin block 1.1.1.2.1.1.1.1 */
									// Start line: 1002
									// Start offset: 0x8005E494

									/* begin block 1.1.1.2.1.1.1.1.1 */
										// Start line: 1004
										// Start offset: 0x8005E494

										/* begin block 1.1.1.2.1.1.1.1.1.1 */
											// Start line: 1004
											// Start offset: 0x8005E494
										/* end block 1.1.1.2.1.1.1.1.1.1 */
										// End offset: 0x8005E494
										// End Line: 1004
									/* end block 1.1.1.2.1.1.1.1.1 */
									// End offset: 0x8005E494
									// End Line: 1004

									/* begin block 1.1.1.2.1.1.1.1.2 */
										// Start line: 1004
										// Start offset: 0x8005E494
										// Variables:
									// 		struct AIHigh_Base *this; // $s1

										/* begin block 1.1.1.2.1.1.1.1.2.1 */
											// Start line: 1004
											// Start offset: 0x8005E494
										/* end block 1.1.1.2.1.1.1.1.2.1 */
										// End offset: 0x8005E534
										// End Line: 1007
									/* end block 1.1.1.2.1.1.1.1.2 */
									// End offset: 0x8005E534
									// End Line: 1007
								/* end block 1.1.1.2.1.1.1.1 */
								// End offset: 0x8005E534
								// End Line: 1007
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x8005E534
							// End Line: 1007
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x8005E534
						// End Line: 1007

						/* begin block 1.1.1.2.1.2 */
							// Start line: 1012
							// Start offset: 0x8005E53C

							/* begin block 1.1.1.2.1.2.1 */
								// Start line: 1013
								// Start offset: 0x8005E53C

								/* begin block 1.1.1.2.1.2.1.1 */
									// Start line: 1015
									// Start offset: 0x8005E554
									// Variables:
								// 		struct coorddef pos; // stack offset -64

									/* begin block 1.1.1.2.1.2.1.1.1 */
										// Start line: 1019
										// Start offset: 0x8005E554
										// Variables:
									// 		struct AIHigh_Base *this; // $v0

										/* begin block 1.1.1.2.1.2.1.1.1.1 */
											// Start line: 1019
											// Start offset: 0x8005E554
										/* end block 1.1.1.2.1.2.1.1.1.1 */
										// End offset: 0x8005E554
										// End Line: 1019
									/* end block 1.1.1.2.1.2.1.1.1 */
									// End offset: 0x8005E554
									// End Line: 1019

									/* begin block 1.1.1.2.1.2.1.1.2 */
										// Start line: 1019
										// Start offset: 0x8005E554
										// Variables:
									// 		struct AIHigh_Base *this; // $s1
									// 		struct AIState_Base *newState; // $s0

										/* begin block 1.1.1.2.1.2.1.1.2.1 */
											// Start line: 1019
											// Start offset: 0x8005E554
										/* end block 1.1.1.2.1.2.1.1.2.1 */
										// End offset: 0x8005E5E0
										// End Line: 1022
									/* end block 1.1.1.2.1.2.1.1.2 */
									// End offset: 0x8005E5E0
									// End Line: 1022
								/* end block 1.1.1.2.1.2.1.1 */
								// End offset: 0x8005E5E0
								// End Line: 1023
							/* end block 1.1.1.2.1.2.1 */
							// End offset: 0x8005E5E0
							// End Line: 1023
						/* end block 1.1.1.2.1.2 */
						// End offset: 0x8005E5E0
						// End Line: 1023
					/* end block 1.1.1.2.1 */
					// End offset: 0x8005E5E0
					// End Line: 1023

					/* begin block 1.1.1.2.2 */
						// Start line: 1026
						// Start offset: 0x8005E5E0

						/* begin block 1.1.1.2.2.1 */
							// Start line: 1027
							// Start offset: 0x8005E5F0

							/* begin block 1.1.1.2.2.1.1 */
								// Start line: 1028
								// Start offset: 0x8005E5F0
								// Variables:
							// 		struct Car_tObj *carObj; // $s0

								/* begin block 1.1.1.2.2.1.1.1 */
									// Start line: 1028
									// Start offset: 0x8005E5F0

									/* begin block 1.1.1.2.2.1.1.1.1 */
										// Start line: 1028
										// Start offset: 0x8005E5F0

										/* begin block 1.1.1.2.2.1.1.1.1.1 */
											// Start line: 1028
											// Start offset: 0x8005E5F0
											// Variables:
										// 		struct coorddef trafficOffset; // stack offset -64
										/* end block 1.1.1.2.2.1.1.1.1.1 */
										// End offset: 0x8005E5F0
										// End Line: 1028
									/* end block 1.1.1.2.2.1.1.1.1 */
									// End offset: 0x8005E5F0
									// End Line: 1028
								/* end block 1.1.1.2.2.1.1.1 */
								// End offset: 0x8005E5F0
								// End Line: 1028
							/* end block 1.1.1.2.2.1.1 */
							// End offset: 0x8005E5F0
							// End Line: 1028

							/* begin block 1.1.1.2.2.1.2 */
								// Start line: 1028
								// Start offset: 0x8005E5F0
								// Variables:
							// 		struct AIHigh_Base *this; // $s1

								/* begin block 1.1.1.2.2.1.2.1 */
									// Start line: 1028
									// Start offset: 0x8005E5F0
								/* end block 1.1.1.2.2.1.2.1 */
								// End offset: 0x8005E648
								// End Line: 1029
							/* end block 1.1.1.2.2.1.2 */
							// End offset: 0x8005E648
							// End Line: 1029
						/* end block 1.1.1.2.2.1 */
						// End offset: 0x8005E648
						// End Line: 1029
					/* end block 1.1.1.2.2 */
					// End offset: 0x8005E648
					// End Line: 1029
				/* end block 1.1.1.2 */
				// End offset: 0x8005E648
				// End Line: 1029

				/* begin block 1.1.1.3 */
					// Start line: 1042
					// Start offset: 0x8005E650
					// Variables:
				// 		struct coorddef newPos; // stack offset -64
				// 		struct AIState_Chase *chaseState; // $s2

					/* begin block 1.1.1.3.1 */
						// Start line: 1044
						// Start offset: 0x8005E650

						/* begin block 1.1.1.3.1.1 */
							// Start line: 1052
							// Start offset: 0x8005E680

							/* begin block 1.1.1.3.1.1.1 */
								// Start line: 1052
								// Start offset: 0x8005E680
								// Variables:
							// 		struct AIHigh_Base *this; // $v0

								/* begin block 1.1.1.3.1.1.1.1 */
									// Start line: 1052
									// Start offset: 0x8005E680
								/* end block 1.1.1.3.1.1.1.1 */
								// End offset: 0x8005E680
								// End Line: 1052
							/* end block 1.1.1.3.1.1.1 */
							// End offset: 0x8005E680
							// End Line: 1052
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x8005E694
						// End Line: 1053
					/* end block 1.1.1.3.1 */
					// End offset: 0x8005E694
					// End Line: 1053

					/* begin block 1.1.1.3.2 */
						// Start line: 1057
						// Start offset: 0x8005E694

						/* begin block 1.1.1.3.2.1 */
							// Start line: 1057
							// Start offset: 0x8005E694
							// Variables:
						// 		struct AIState_Chase *this; // $s2

							/* begin block 1.1.1.3.2.1.1 */
								// Start line: 1057
								// Start offset: 0x8005E694
							/* end block 1.1.1.3.2.1.1 */
							// End offset: 0x8005E694
							// End Line: 1057
						/* end block 1.1.1.3.2.1 */
						// End offset: 0x8005E694
						// End Line: 1057

						/* begin block 1.1.1.3.2.2 */
							// Start line: 1058
							// Start offset: 0x8005E6A8
							// Variables:
						// 		int endSlice; // $s0

							/* begin block 1.1.1.3.2.2.1 */
								// Start line: 1059
								// Start offset: 0x8005E6A8
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.3.2.2.1.1 */
									// Start line: 1059
									// Start offset: 0x8005E6A8
								/* end block 1.1.1.3.2.2.1.1 */
								// End offset: 0x8005E708
								// End Line: 1061
							/* end block 1.1.1.3.2.2.1 */
							// End offset: 0x8005E708
							// End Line: 1061
						/* end block 1.1.1.3.2.2 */
						// End offset: 0x8005E708
						// End Line: 1062
					/* end block 1.1.1.3.2 */
					// End offset: 0x8005E708
					// End Line: 1062

					/* begin block 1.1.1.3.3 */
						// Start line: 1066
						// Start offset: 0x8005E708

						/* begin block 1.1.1.3.3.1 */
							// Start line: 1067
							// Start offset: 0x8005E718
							// Variables:
						// 		struct coorddef pos; // stack offset -48

							/* begin block 1.1.1.3.3.1.1 */
								// Start line: 1069
								// Start offset: 0x8005E718
								// Variables:
							// 		struct AIHigh_Base *this; // $v0

								/* begin block 1.1.1.3.3.1.1.1 */
									// Start line: 1069
									// Start offset: 0x8005E718
								/* end block 1.1.1.3.3.1.1.1 */
								// End offset: 0x8005E718
								// End Line: 1069
							/* end block 1.1.1.3.3.1.1 */
							// End offset: 0x8005E718
							// End Line: 1069
						/* end block 1.1.1.3.3.1 */
						// End offset: 0x8005E738
						// End Line: 1070
					/* end block 1.1.1.3.3 */
					// End offset: 0x8005E738
					// End Line: 1070

					/* begin block 1.1.1.3.4 */
						// Start line: 1073
						// Start offset: 0x8005E738

						/* begin block 1.1.1.3.4.1 */
							// Start line: 1073
							// Start offset: 0x8005E738
							// Variables:
						// 		struct AIState_Chase *this; // $s2

							/* begin block 1.1.1.3.4.1.1 */
								// Start line: 1073
								// Start offset: 0x8005E738
							/* end block 1.1.1.3.4.1.1 */
							// End offset: 0x8005E784
							// End Line: 1073
						/* end block 1.1.1.3.4.1 */
						// End offset: 0x8005E784
						// End Line: 1073
					/* end block 1.1.1.3.4 */
					// End offset: 0x8005E798
					// End Line: 1078

					/* begin block 1.1.1.3.5 */
						// Start line: 1082
						// Start offset: 0x8005E798

						/* begin block 1.1.1.3.5.1 */
							// Start line: 1083
							// Start offset: 0x8005E7A8

							/* begin block 1.1.1.3.5.1.1 */
								// Start line: 1085
								// Start offset: 0x8005E7A8
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.3.5.1.1.1 */
									// Start line: 1085
									// Start offset: 0x8005E7A8
								/* end block 1.1.1.3.5.1.1.1 */
								// End offset: 0x8005E800
								// End Line: 1086
							/* end block 1.1.1.3.5.1.1 */
							// End offset: 0x8005E800
							// End Line: 1086
						/* end block 1.1.1.3.5.1 */
						// End offset: 0x8005E800
						// End Line: 1087
					/* end block 1.1.1.3.5 */
					// End offset: 0x8005E800
					// End Line: 1087

					/* begin block 1.1.1.3.6 */
						// Start line: 1090
						// Start offset: 0x8005E800

						/* begin block 1.1.1.3.6.1 */
							// Start line: 1091
							// Start offset: 0x8005E814

							/* begin block 1.1.1.3.6.1.1 */
								// Start line: 1094
								// Start offset: 0x8005E814

								/* begin block 1.1.1.3.6.1.1.1 */
									// Start line: 1095
									// Start offset: 0x8005E820

									/* begin block 1.1.1.3.6.1.1.1.1 */
										// Start line: 1097
										// Start offset: 0x8005E820
										// Variables:
									// 		struct AIHigh_Base *this; // $s1
									// 		struct AIState_Base *newState; // $s0

										/* begin block 1.1.1.3.6.1.1.1.1.1 */
											// Start line: 1097
											// Start offset: 0x8005E820
										/* end block 1.1.1.3.6.1.1.1.1.1 */
										// End offset: 0x8005E87C
										// End Line: 1099
									/* end block 1.1.1.3.6.1.1.1.1 */
									// End offset: 0x8005E87C
									// End Line: 1099
								/* end block 1.1.1.3.6.1.1.1 */
								// End offset: 0x8005E8AC
								// End Line: 1101
							/* end block 1.1.1.3.6.1.1 */
							// End offset: 0x8005E8AC
							// End Line: 1101
						/* end block 1.1.1.3.6.1 */
						// End offset: 0x8005E8AC
						// End Line: 1101
					/* end block 1.1.1.3.6 */
					// End offset: 0x8005E8AC
					// End Line: 1101

					/* begin block 1.1.1.3.7 */
						// Start line: 1105
						// Start offset: 0x8005E8AC

						/* begin block 1.1.1.3.7.1 */
							// Start line: 1106
							// Start offset: 0x8005E8BC

							/* begin block 1.1.1.3.7.1.1 */
								// Start line: 1107
								// Start offset: 0x8005E8BC
								// Variables:
							// 		struct Car_tObj *carObj; // $s0

								/* begin block 1.1.1.3.7.1.1.1 */
									// Start line: 1107
									// Start offset: 0x8005E8BC

									/* begin block 1.1.1.3.7.1.1.1.1 */
										// Start line: 1107
										// Start offset: 0x8005E8BC

										/* begin block 1.1.1.3.7.1.1.1.1.1 */
											// Start line: 1107
											// Start offset: 0x8005E8BC
											// Variables:
										// 		struct coorddef trafficOffset; // stack offset -32
										/* end block 1.1.1.3.7.1.1.1.1.1 */
										// End offset: 0x8005E8BC
										// End Line: 1107
									/* end block 1.1.1.3.7.1.1.1.1 */
									// End offset: 0x8005E8BC
									// End Line: 1107
								/* end block 1.1.1.3.7.1.1.1 */
								// End offset: 0x8005E8BC
								// End Line: 1107
							/* end block 1.1.1.3.7.1.1 */
							// End offset: 0x8005E8BC
							// End Line: 1107

							/* begin block 1.1.1.3.7.1.2 */
								// Start line: 1107
								// Start offset: 0x8005E8BC
								// Variables:
							// 		struct AIHigh_Base *this; // $s1

								/* begin block 1.1.1.3.7.1.2.1 */
									// Start line: 1107
									// Start offset: 0x8005E8BC
								/* end block 1.1.1.3.7.1.2.1 */
								// End offset: 0x8005E914
								// End Line: 1108
							/* end block 1.1.1.3.7.1.2 */
							// End offset: 0x8005E914
							// End Line: 1108
						/* end block 1.1.1.3.7.1 */
						// End offset: 0x8005E914
						// End Line: 1108
					/* end block 1.1.1.3.7 */
					// End offset: 0x8005E914
					// End Line: 1108
				/* end block 1.1.1.3 */
				// End offset: 0x8005E914
				// End Line: 1108

				/* begin block 1.1.1.4 */
					// Start line: 1120
					// Start offset: 0x8005E91C
					// Variables:
				// 		int rbDistanceMeters; // $a0
				// 		int rbAbsDistanceMeters; // $a1
				// 		int release; // $s0
				// 		struct coorddef newPos; // stack offset -64

					/* begin block 1.1.1.4.1 */
						// Start line: 1123
						// Start offset: 0x8005E91C

						/* begin block 1.1.1.4.1.1 */
							// Start line: 1132
							// Start offset: 0x8005E948

							/* begin block 1.1.1.4.1.1.1 */
								// Start line: 1133
								// Start offset: 0x8005E948
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.4.1.1.1.1 */
									// Start line: 1133
									// Start offset: 0x8005E948
								/* end block 1.1.1.4.1.1.1.1 */
								// End offset: 0x8005E994
								// End Line: 1137
							/* end block 1.1.1.4.1.1.1 */
							// End offset: 0x8005E994
							// End Line: 1137
						/* end block 1.1.1.4.1.1 */
						// End offset: 0x8005E9A4
						// End Line: 1139
					/* end block 1.1.1.4.1 */
					// End offset: 0x8005E9A4
					// End Line: 1139

					/* begin block 1.1.1.4.2 */
						// Start line: 1145
						// Start offset: 0x8005E9A4

						/* begin block 1.1.1.4.2.1 */
							// Start line: 1148
							// Start offset: 0x8005E9C0

							/* begin block 1.1.1.4.2.1.1 */
								// Start line: 1148
								// Start offset: 0x8005E9C0
							/* end block 1.1.1.4.2.1.1 */
							// End offset: 0x8005E9C0
							// End Line: 1148
						/* end block 1.1.1.4.2.1 */
						// End offset: 0x8005E9C0
						// End Line: 1148

						/* begin block 1.1.1.4.2.2 */
							// Start line: 1149
							// Start offset: 0x8005E9D8

							/* begin block 1.1.1.4.2.2.1 */
								// Start line: 1150
								// Start offset: 0x8005E9D8
								// Variables:
							// 		int timeNow; // $v0

								/* begin block 1.1.1.4.2.2.1.1 */
									// Start line: 1150
									// Start offset: 0x8005E9D8
								/* end block 1.1.1.4.2.2.1.1 */
								// End offset: 0x8005E9E4
								// End Line: 1150
							/* end block 1.1.1.4.2.2.1 */
							// End offset: 0x8005E9E4
							// End Line: 1150
						/* end block 1.1.1.4.2.2 */
						// End offset: 0x8005E9E4
						// End Line: 1150
					/* end block 1.1.1.4.2 */
					// End offset: 0x8005E9E4
					// End Line: 1150

					/* begin block 1.1.1.4.3 */
						// Start line: 1150
						// Start offset: 0x8005E9E4
						// Variables:
					// 		struct AIHigh_Base *this; // $v0

						/* begin block 1.1.1.4.3.1 */
							// Start line: 1150
							// Start offset: 0x8005E9E4
						/* end block 1.1.1.4.3.1 */
						// End offset: 0x8005E9E4
						// End Line: 1150
					/* end block 1.1.1.4.3 */
					// End offset: 0x8005E9E4
					// End Line: 1150

					/* begin block 1.1.1.4.4 */
						// Start line: 1150
						// Start offset: 0x8005E9E4

						/* begin block 1.1.1.4.4.1 */
							// Start line: 1164
							// Start offset: 0x8005EA1C

							/* begin block 1.1.1.4.4.1.1 */
								// Start line: 1164
								// Start offset: 0x8005EA1C

								/* begin block 1.1.1.4.4.1.1.1 */
									// Start line: 1164
									// Start offset: 0x8005EA2C
									// Variables:
								// 		struct AIHigh_Base *this; // $v0

									/* begin block 1.1.1.4.4.1.1.1.1 */
										// Start line: 1164
										// Start offset: 0x8005EA2C
									/* end block 1.1.1.4.4.1.1.1.1 */
									// End offset: 0x8005EA2C
									// End Line: 1164
								/* end block 1.1.1.4.4.1.1.1 */
								// End offset: 0x8005EA2C
								// End Line: 1164

								/* begin block 1.1.1.4.4.1.1.2 */
									// Start line: 1164
									// Start offset: 0x8005EA4C

									/* begin block 1.1.1.4.4.1.1.2.1 */
										// Start line: 1164
										// Start offset: 0x8005EA4C
									/* end block 1.1.1.4.4.1.1.2.1 */
									// End offset: 0x8005EA4C
									// End Line: 1164
								/* end block 1.1.1.4.4.1.1.2 */
								// End offset: 0x8005EA4C
								// End Line: 1164

								/* begin block 1.1.1.4.4.1.1.3 */
									// Start line: 1164
									// Start offset: 0x8005EA4C

									/* begin block 1.1.1.4.4.1.1.3.1 */
										// Start line: 1164
										// Start offset: 0x8005EA4C
									/* end block 1.1.1.4.4.1.1.3.1 */
									// End offset: 0x8005EA4C
									// End Line: 1164
								/* end block 1.1.1.4.4.1.1.3 */
								// End offset: 0x8005EA4C
								// End Line: 1164

								/* begin block 1.1.1.4.4.1.1.4 */
									// Start line: 1165
									// Start offset: 0x8005EA60
									// Variables:
								// 		int timeToRB; // $v1

									/* begin block 1.1.1.4.4.1.1.4.1 */
										// Start line: 1165
										// Start offset: 0x8005EA60
										// Variables:
									// 		struct AIHigh_Base *this; // $v0

										/* begin block 1.1.1.4.4.1.1.4.1.1 */
											// Start line: 1165
											// Start offset: 0x8005EA60
										/* end block 1.1.1.4.4.1.1.4.1.1 */
										// End offset: 0x8005EA60
										// End Line: 1165
									/* end block 1.1.1.4.4.1.1.4.1 */
									// End offset: 0x8005EA60
									// End Line: 1165
								/* end block 1.1.1.4.4.1.1.4 */
								// End offset: 0x8005EAA0
								// End Line: 1171
							/* end block 1.1.1.4.4.1.1 */
							// End offset: 0x8005EAA0
							// End Line: 1171
						/* end block 1.1.1.4.4.1 */
						// End offset: 0x8005EAA0
						// End Line: 1171
					/* end block 1.1.1.4.4 */
					// End offset: 0x8005EAA0
					// End Line: 1171

					/* begin block 1.1.1.4.5 */
						// Start line: 1179
						// Start offset: 0x8005EAA0

						/* begin block 1.1.1.4.5.1 */
							// Start line: 1180
							// Start offset: 0x8005EAA8

							/* begin block 1.1.1.4.5.1.1 */
								// Start line: 1182
								// Start offset: 0x8005EAA8
								// Variables:
							// 		struct AIHigh_Base *this; // $v0

								/* begin block 1.1.1.4.5.1.1.1 */
									// Start line: 1182
									// Start offset: 0x8005EAA8
								/* end block 1.1.1.4.5.1.1.1 */
								// End offset: 0x8005EAA8
								// End Line: 1182
							/* end block 1.1.1.4.5.1.1 */
							// End offset: 0x8005EAA8
							// End Line: 1182

							/* begin block 1.1.1.4.5.1.2 */
								// Start line: 1182
								// Start offset: 0x8005EAA8
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.4.5.1.2.1 */
									// Start line: 1182
									// Start offset: 0x8005EAA8
								/* end block 1.1.1.4.5.1.2.1 */
								// End offset: 0x8005EB38
								// End Line: 1193
							/* end block 1.1.1.4.5.1.2 */
							// End offset: 0x8005EB38
							// End Line: 1193
						/* end block 1.1.1.4.5.1 */
						// End offset: 0x8005EB38
						// End Line: 1194
					/* end block 1.1.1.4.5 */
					// End offset: 0x8005EB38
					// End Line: 1194

					/* begin block 1.1.1.4.6 */
						// Start line: 1198
						// Start offset: 0x8005EB38

						/* begin block 1.1.1.4.6.1 */
							// Start line: 1199
							// Start offset: 0x8005EB54

							/* begin block 1.1.1.4.6.1.1 */
								// Start line: 1201
								// Start offset: 0x8005EB54
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.4.6.1.1.1 */
									// Start line: 1201
									// Start offset: 0x8005EB54
								/* end block 1.1.1.4.6.1.1.1 */
								// End offset: 0x8005EBA0
								// End Line: 1202
							/* end block 1.1.1.4.6.1.1 */
							// End offset: 0x8005EBA0
							// End Line: 1202
						/* end block 1.1.1.4.6.1 */
						// End offset: 0x8005EBA0
						// End Line: 1203
					/* end block 1.1.1.4.6 */
					// End offset: 0x8005EBA0
					// End Line: 1203

					/* begin block 1.1.1.4.7 */
						// Start line: 1207
						// Start offset: 0x8005EBA0

						/* begin block 1.1.1.4.7.1 */
							// Start line: 1208
							// Start offset: 0x8005EBB0

							/* begin block 1.1.1.4.7.1.1 */
								// Start line: 1209
								// Start offset: 0x8005EBB0
								// Variables:
							// 		struct Car_tObj *carObj; // $s0

								/* begin block 1.1.1.4.7.1.1.1 */
									// Start line: 1209
									// Start offset: 0x8005EBB0

									/* begin block 1.1.1.4.7.1.1.1.1 */
										// Start line: 1209
										// Start offset: 0x8005EBB0

										/* begin block 1.1.1.4.7.1.1.1.1.1 */
											// Start line: 1209
											// Start offset: 0x8005EBB0
											// Variables:
										// 		struct coorddef trafficOffset; // stack offset -48
										/* end block 1.1.1.4.7.1.1.1.1.1 */
										// End offset: 0x8005EBB0
										// End Line: 1209
									/* end block 1.1.1.4.7.1.1.1.1 */
									// End offset: 0x8005EBB0
									// End Line: 1209
								/* end block 1.1.1.4.7.1.1.1 */
								// End offset: 0x8005EBB0
								// End Line: 1209
							/* end block 1.1.1.4.7.1.1 */
							// End offset: 0x8005EBB0
							// End Line: 1209

							/* begin block 1.1.1.4.7.1.2 */
								// Start line: 1209
								// Start offset: 0x8005EBB0
								// Variables:
							// 		struct AIHigh_Base *this; // $s1

								/* begin block 1.1.1.4.7.1.2.1 */
									// Start line: 1209
									// Start offset: 0x8005EBB0
								/* end block 1.1.1.4.7.1.2.1 */
								// End offset: 0x8005EC50
								// End Line: 1210
							/* end block 1.1.1.4.7.1.2 */
							// End offset: 0x8005EC50
							// End Line: 1210
						/* end block 1.1.1.4.7.1 */
						// End offset: 0x8005EC50
						// End Line: 1210
					/* end block 1.1.1.4.7 */
					// End offset: 0x8005EC50
					// End Line: 1210
				/* end block 1.1.1.4 */
				// End offset: 0x8005EC50
				// End Line: 1210

				/* begin block 1.1.1.5 */
					// Start line: 1225
					// Start offset: 0x8005EC68

					/* begin block 1.1.1.5.1 */
						// Start line: 1226
						// Start offset: 0x8005EC68

						/* begin block 1.1.1.5.1.1 */
							// Start line: 1228
							// Start offset: 0x8005EC94

							/* begin block 1.1.1.5.1.1.1 */
								// Start line: 1229
								// Start offset: 0x8005EC94

								/* begin block 1.1.1.5.1.1.1.1 */
									// Start line: 1230
									// Start offset: 0x8005EC9C

									/* begin block 1.1.1.5.1.1.1.1.1 */
										// Start line: 1232
										// Start offset: 0x8005EC9C
										// Variables:
									// 		struct AIHigh_Base *this; // $s1
									// 		struct AIState_Base *newState; // $s0

										/* begin block 1.1.1.5.1.1.1.1.1.1 */
											// Start line: 1232
											// Start offset: 0x8005EC9C
										/* end block 1.1.1.5.1.1.1.1.1.1 */
										// End offset: 0x8005ECAC
										// End Line: 1234
									/* end block 1.1.1.5.1.1.1.1.1 */
									// End offset: 0x8005ECAC
									// End Line: 1234
								/* end block 1.1.1.5.1.1.1.1 */
								// End offset: 0x8005ECAC
								// End Line: 1234

								/* begin block 1.1.1.5.1.1.1.2 */
									// Start line: 1237
									// Start offset: 0x8005ECB4

									/* begin block 1.1.1.5.1.1.1.2.1 */
										// Start line: 1237
										// Start offset: 0x8005ECB4

										/* begin block 1.1.1.5.1.1.1.2.1.1 */
											// Start line: 1238
											// Start offset: 0x8005ECC0

											/* begin block 1.1.1.5.1.1.1.2.1.1.1 */
												// Start line: 1240
												// Start offset: 0x8005ECC0

												/* begin block 1.1.1.5.1.1.1.2.1.1.1.1 */
													// Start line: 1240
													// Start offset: 0x8005ECC0
												/* end block 1.1.1.5.1.1.1.2.1.1.1.1 */
												// End offset: 0x8005ECC0
												// End Line: 1240
											/* end block 1.1.1.5.1.1.1.2.1.1.1 */
											// End offset: 0x8005ECC0
											// End Line: 1240

											/* begin block 1.1.1.5.1.1.1.2.1.1.2 */
												// Start line: 1240
												// Start offset: 0x8005ECC0
												// Variables:
											// 		struct AIHigh_Base *this; // $s1

												/* begin block 1.1.1.5.1.1.1.2.1.1.2.1 */
													// Start line: 1240
													// Start offset: 0x8005ECC0
												/* end block 1.1.1.5.1.1.1.2.1.1.2.1 */
												// End offset: 0x8005ED2C
												// End Line: 1242
											/* end block 1.1.1.5.1.1.1.2.1.1.2 */
											// End offset: 0x8005ED2C
											// End Line: 1242
										/* end block 1.1.1.5.1.1.1.2.1.1 */
										// End offset: 0x8005ED2C
										// End Line: 1242
									/* end block 1.1.1.5.1.1.1.2.1 */
									// End offset: 0x8005ED2C
									// End Line: 1242
								/* end block 1.1.1.5.1.1.1.2 */
								// End offset: 0x8005ED2C
								// End Line: 1242
							/* end block 1.1.1.5.1.1.1 */
							// End offset: 0x8005ED2C
							// End Line: 1242
						/* end block 1.1.1.5.1.1 */
						// End offset: 0x8005ED2C
						// End Line: 1242
					/* end block 1.1.1.5.1 */
					// End offset: 0x8005ED2C
					// End Line: 1242
				/* end block 1.1.1.5 */
				// End offset: 0x8005ED2C
				// End Line: 1242

				/* begin block 1.1.1.6 */
					// Start line: 1252
					// Start offset: 0x8005ED34
					// Variables:
				// 		struct AIState_GotoSlice *gotoState; // $s0

					/* begin block 1.1.1.6.1 */
						// Start line: 1253
						// Start offset: 0x8005ED34

						/* begin block 1.1.1.6.1.1 */
							// Start line: 1256
							// Start offset: 0x8005ED58

							/* begin block 1.1.1.6.1.1.1 */
								// Start line: 1257
								// Start offset: 0x8005ED58
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.6.1.1.1.1 */
									// Start line: 1257
									// Start offset: 0x8005ED58
								/* end block 1.1.1.6.1.1.1.1 */
								// End offset: 0x8005EDA4
								// End Line: 1257
							/* end block 1.1.1.6.1.1.1 */
							// End offset: 0x8005EDA4
							// End Line: 1257
						/* end block 1.1.1.6.1.1 */
						// End offset: 0x8005EDA4
						// End Line: 1258
					/* end block 1.1.1.6.1 */
					// End offset: 0x8005EDA4
					// End Line: 1258
				/* end block 1.1.1.6 */
				// End offset: 0x8005EDA4
				// End Line: 1258
			/* end block 1.1.1 */
			// End offset: 0x8005EDA4
			// End Line: 1261
		/* end block 1.1 */
		// End offset: 0x8005EDA4
		// End Line: 1261
	/* end block 1 */
	// End offset: 0x8005EDB0
	// End Line: 1266

	/* begin block 2 */
		// Start line: 2124
	/* end block 2 */
	// End Line: 2125

	/* begin block 3 */
		// Start line: 2129
	/* end block 3 */
	// End Line: 2130

	/* begin block 4 */
		// Start line: 2129
	/* end block 4 */
	// End Line: 2130

/* WARNING: Type propagation algorithm not settling */

void HighExecute__18AIHigh_BTC_Wingman(AIHigh_BTC_Wingman *this)

{
  bool bVar1;
  AIState_GotoSlice *this_00;
  Speaker *pSVar2;
  uint uVar3;
  AIState_Chase *this_01;
  int targetSlice;
  AIState_Normal *this_02;
  stateType_t sVar4;
  AIState_Base *this_03;
  Wingman_Role WVar5;
  AIState_Base *pAVar6;
  Car_tObj *carObj;
  uint uVar7;
  coorddef *offset;
  coorddef cStack64;
  coorddef cStack48;
  coorddef cStack32;
  
  CheckSpikeBelt__15AIHigh_BasicCop((AIHigh_BasicCop *)this);
  CheckForActivation__18AIHigh_BTC_Wingman(this);
  switch((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.stateType_) {
  case STATE_NONE:
    carObj = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    (carObj->speechInfo).speechSource = (carObj->speechInfo).speechSource & 0xfffffffd;
    this_03 = (AIState_Base *)__builtin_new(8);
    carObj = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    __12AIState_BaseP8Car_tObj(this_03,carObj);
    *(undefined4 *)this_03->_vf = 0x80054f24;
    memset(&cStack64,0,0xc);
    cStack64.y = carObj->carIndex * 0xa0000;
    Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
              ((BO_tNewtonObj *)this_03->carObj_,0,&cStack64,1);
    (this_03->carObj_->N).active = '\0';
    pAVar6 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
    if (pAVar6 != (AIState_Base *)0x0) {
      (**(code **)(*(int *)pAVar6->_vf + 0x14))
                ((int)&pAVar6->carObj_ + (int)*(short *)(*(int *)pAVar6->_vf + 0x10),3);
    }
    sVar4 = STATE_NONACTIVE;
    (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_ = this_03;
    goto LAB_8005eda0;
  default:
    goto switchD_8005e388_caseD_1;
  case STATE_NORMAL:
    carObj = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    (carObj->speechInfo).speechSource = (carObj->speechInfo).speechSource & 0xfffffffd;
    if ((this->newRole_ == this->currentRole_) || (1 < this->newRole_ + ~ROLE_WINGMAN)) {
      CheckForNewTarget__14AIHigh_BTC_Cop((AIHigh_BTC_Cop *)this);
      if ((this->AIHigh_BTC_Cop).perpTarget_ != (AIHigh_BTC_Perp *)0x0) {
        GetCheckChasePosition__14AIHigh_BTC_CopP8coorddef((AIHigh_BTC_Cop *)this,&cStack64);
        this_01 = (AIState_Chase *)__builtin_new(0x94);
        this_01 = __13AIState_ChaseP8Car_tObjT1P8coorddefiiiii
                            (this_01,(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_,
                             (((this->AIHigh_BTC_Cop).perpTarget_)->AIHigh_BasicPerp).AIHigh_Base.
                             carObj_,&cStack64,0x200,0x3c0000,(int)&DAT_00190000,2,0x10000);
        this_03 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
        if (this_03 != (AIState_Base *)0x0) {
          (**(code **)(*(int *)this_03->_vf + 0x14))
                    ((int)&this_03->carObj_ + (int)*(short *)(*(int *)this_03->_vf + 0x10),3);
        }
        sVar4 = STATE_CHASE;
        goto LAB_8005e5d8;
      }
    }
    else {
      carObj = AILife_IsCarInAnyVisibleArea__FP8Car_tObj
                         ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
      if (carObj == (Car_tObj *)0x0) {
        pSVar2 = Mobile__6SpeechP8Car_tObj
                           ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
        (**(code **)(*(int *)pSVar2->_vf + 0x84))
                  ((int)&(pSVar2->fPosition).flags + (int)*(short *)(*(int *)pSVar2->_vf + 0x80));
        this->currentRole_ = this->newRole_;
        SetupBlockader__18AIHigh_BTC_WingmanP19AIHigh_BTC_HumanCopi
                  (this,this->newHumanBoss_,(uint)(this->newRole_ == ROLE_BLOCKADER_SPIKEBELT));
        this_01 = (AIState_Chase *)__builtin_new(0x10);
        __12AIState_BaseP8Car_tObj
                  ((AIState_Base *)this_01,
                   (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
        *(undefined4 *)(this_01->AIState_Base)._vf = 0x80055600;
        (this_01->delayCar_).basisCar_ = (Car_tObj *)&DAT_00000001;
        this_03 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
        if (this_03 != (AIState_Base *)0x0) {
          (**(code **)(*(int *)this_03->_vf + 0x14))
                    ((int)&this_03->carObj_ + (int)*(short *)(*(int *)this_03->_vf + 0x10),3);
        }
        sVar4 = STATE_IDLE;
LAB_8005e5d8:
        *(AIState_Chase **)&(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_ = this_01;
        (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.stateType_ = sVar4;
      }
    }
    targetSlice = UpdateFreezeModeAndPullOverMode__18AIHigh_BTC_Wingman(this);
    if (targetSlice == 0) goto switchD_8005e388_caseD_1;
    AssignToPlayer__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
              ((AIHigh_BTC_Cop *)this,(AIHigh_BTC_Perp *)0x0);
    this_03 = (AIState_Base *)__builtin_new(8);
    carObj = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    __12AIState_BaseP8Car_tObj(this_03,carObj);
    *(undefined4 *)this_03->_vf = 0x80054f24;
    memset(&cStack64,0,0xc);
    offset = &cStack64;
    cStack64.y = carObj->carIndex * 0xa0000;
    break;
  case STATE_IDLE:
    carObj = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    (carObj->speechInfo).speechSource = (carObj->speechInfo).speechSource | 2;
    CheckForNewTarget__14AIHigh_BTC_Cop((AIHigh_BTC_Cop *)this);
    bVar1 = false;
    if ((this->AIHigh_BTC_Cop).perpTarget_ == (AIHigh_BTC_Perp *)0x0) {
      this->newRole_ = ROLE_WINGMAN;
      this->currentRole_ = ROLE_WINGMAN;
      this_02 = (AIState_Normal *)__builtin_new(8);
      this_03 = (AIState_Base *)
                __14AIState_NormalP8Car_tObj
                          (this_02,(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
      pAVar6 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
      if (pAVar6 != (AIState_Base *)0x0) {
        (**(code **)(*(int *)pAVar6->_vf + 0x14))
                  ((int)&pAVar6->carObj_ + (int)*(short *)(*(int *)pAVar6->_vf + 0x10),3);
      }
      (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_ = this_03;
      (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.stateType_ = STATE_NORMAL;
      return;
    }
    GetCheckChasePosition__14AIHigh_BTC_CopP8coorddef((AIHigh_BTC_Cop *)this,&cStack64);
    if ((this->spikeBeltPlaced_ != 0) && (AICop_spikeBelt.slice_ == this->spikeBeltSlice_)) {
      AICop_spikeBelt.freshenTime_ = simGlobal.gameTicks;
    }
    uVar3 = AIWorld_ApxSplineDistance__FP8Car_tObjT0
                      ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_,
                       (((this->AIHigh_BTC_Cop).perpTarget_)->AIHigh_BasicPerp).AIHigh_Base.carObj_)
    ;
    uVar7 = uVar3;
    if ((int)uVar3 < 0) {
      uVar7 = -uVar3;
    }
    if ((int)uVar7 < 0x320000) {
LAB_8005ea9c:
      bVar1 = true;
    }
    else {
      if ((int)uVar7 < 0x12c0000) {
        targetSlice = (((((this->AIHigh_BTC_Cop).perpTarget_)->AIHigh_BasicPerp).AIHigh_Base.carObj_
                       )->script).lastActionTime;
        if (targetSlice < 1) {
          targetSlice = -targetSlice;
        }
        if (((0x471c7 < targetSlice) &&
            (targetSlice = fixeddiv(uVar3,(((((this->AIHigh_BTC_Cop).perpTarget_)->AIHigh_BasicPerp)
                                            .AIHigh_Base.carObj_)->script).lastActionTime),
            0 < targetSlice)) && (targetSlice < this->spikeBeltInterceptReleaseTime_))
        goto LAB_8005ea9c;
      }
    }
    if (bVar1) {
      this->spikeBeltPlaced_ = 0;
      this->newRole_ = ROLE_WINGMAN;
      this->currentRole_ = ROLE_WINGMAN;
      this_01 = (AIState_Chase *)__builtin_new(0x94);
      this_01 = __13AIState_ChaseP8Car_tObjT1P8coorddefiiiii
                          (this_01,(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_,
                           (((this->AIHigh_BTC_Cop).perpTarget_)->AIHigh_BasicPerp).AIHigh_Base.
                           carObj_,&cStack64,0x200,0x3c0000,(int)&DAT_00190000,2,0x10000);
      this_03 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
      if (this_03 != (AIState_Base *)0x0) {
        (**(code **)(*(int *)this_03->_vf + 0x14))
                  ((int)&this_03->carObj_ + (int)*(short *)(*(int *)this_03->_vf + 0x10),3);
      }
      *(AIState_Chase **)&(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_ = this_01;
      (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.stateType_ = STATE_CHASE;
    }
    if ((this->newRole_ != this->currentRole_) && (this->newRole_ == ROLE_WINGMAN)) {
      this->currentRole_ = ROLE_WINGMAN;
      this_02 = (AIState_Normal *)__builtin_new(8);
      this_03 = (AIState_Base *)
                __14AIState_NormalP8Car_tObj
                          (this_02,(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
      pAVar6 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
      if (pAVar6 != (AIState_Base *)0x0) {
        (**(code **)(*(int *)pAVar6->_vf + 0x14))
                  ((int)&pAVar6->carObj_ + (int)*(short *)(*(int *)pAVar6->_vf + 0x10),3);
      }
      (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_ = this_03;
      (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.stateType_ = STATE_NORMAL;
    }
    targetSlice = UpdateFreezeModeAndPullOverMode__18AIHigh_BTC_Wingman(this);
    if (targetSlice == 0) goto switchD_8005e388_caseD_1;
    AssignToPlayer__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
              ((AIHigh_BTC_Cop *)this,(AIHigh_BTC_Perp *)0x0);
    this_03 = (AIState_Base *)__builtin_new(8);
    carObj = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    __12AIState_BaseP8Car_tObj(this_03,carObj);
    *(undefined4 *)this_03->_vf = 0x80054f24;
    memset(&cStack48,0,0xc);
    offset = &cStack48;
    cStack48.y = carObj->carIndex * 0xa0000;
    break;
  case STATE_CHASE:
    carObj = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    this_01 = (AIState_Chase *)(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
    (carObj->speechInfo).speechSource = (carObj->speechInfo).speechSource | 2;
    HandleBlockadeSpeech__15AIHigh_BasicCop((AIHigh_BasicCop *)this);
    targetSlice = GetCheckChasePosition__14AIHigh_BTC_CopP8coorddef
                            ((AIHigh_BTC_Cop *)this,&cStack64);
    if (targetSlice != 0) {
      SetTarget__13AIState_ChaseP8Car_tObjP8coorddef
                (this_01,(((this->AIHigh_BTC_Cop).perpTarget_)->AIHigh_BasicPerp).AIHigh_Base.
                         carObj_,&cStack64);
    }
    if (0xa0 < this_01->barrierTicks32_) {
      targetSlice = FindBarrierEndSlice__13AIState_Chase(this_01);
      this_00 = (AIState_GotoSlice *)__builtin_new(0x10);
      this_00 = __17AIState_GotoSliceP8Car_tObjii
                          (this_00,(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_,
                           targetSlice,0);
      this_03 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
      if (this_03 != (AIState_Base *)0x0) {
        (**(code **)(*(int *)this_03->_vf + 0x14))
                  ((int)&this_03->carObj_ + (int)*(short *)(*(int *)this_03->_vf + 0x10),3);
      }
      *(AIState_GotoSlice **)&(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_ = this_00;
      (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.stateType_ = STATE_GOTOSLICE;
    }
    targetSlice = CheckForNewTarget__14AIHigh_BTC_Cop((AIHigh_BTC_Cop *)this);
    if (targetSlice != 0) {
      GetCheckChasePosition__14AIHigh_BTC_CopP8coorddef((AIHigh_BTC_Cop *)this,&cStack48);
      SetTarget__13AIState_ChaseP8Car_tObjP8coorddef
                (this_01,(((this->AIHigh_BTC_Cop).perpTarget_)->AIHigh_BasicPerp).AIHigh_Base.
                         carObj_,&cStack48);
    }
    bVar1 = false;
    if (8 < this_01->inTargetRegion_) {
      targetSlice = this_01->latMetersBetween_;
      if (targetSlice < 0) {
        targetSlice = -targetSlice;
      }
      if (targetSlice < 0xe0000) {
        targetSlice = this_01->longMetersBetween_;
        if (targetSlice < 0) {
          targetSlice = -targetSlice;
        }
        bVar1 = targetSlice < 0xf0000;
      }
    }
    if (bVar1) {
      SetMurderMode__13AIState_Chaseii(this_01,1,0x300);
    }
    if ((this->AIHigh_BTC_Cop).perpTarget_ == (AIHigh_BTC_Perp *)0x0) {
      AssignToPlayer__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
                ((AIHigh_BTC_Cop *)this,(AIHigh_BTC_Perp *)0x0);
      this_02 = (AIState_Normal *)__builtin_new(8);
      this_03 = (AIState_Base *)
                __14AIState_NormalP8Car_tObj
                          (this_02,(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
      pAVar6 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
      if (pAVar6 != (AIState_Base *)0x0) {
        (**(code **)(*(int *)pAVar6->_vf + 0x14))
                  ((int)&pAVar6->carObj_ + (int)*(short *)(*(int *)pAVar6->_vf + 0x10),3);
      }
      (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_ = this_03;
      (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.stateType_ = STATE_NORMAL;
    }
    if ((this->newRole_ != this->currentRole_) && (this->newRole_ + ~ROLE_WINGMAN < 2)) {
      carObj = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
      (carObj->script).lastReactionIndex[2] = -(carObj->script).lastReactionIndex[2];
      AssignToPlayer__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
                ((AIHigh_BTC_Cop *)this,(AIHigh_BTC_Perp *)0x0);
      this_02 = (AIState_Normal *)__builtin_new(8);
      this_03 = (AIState_Base *)
                __14AIState_NormalP8Car_tObj
                          (this_02,(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
      pAVar6 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
      if (pAVar6 != (AIState_Base *)0x0) {
        (**(code **)(*(int *)pAVar6->_vf + 0x14))
                  ((int)&pAVar6->carObj_ + (int)*(short *)(*(int *)pAVar6->_vf + 0x10),3);
      }
      carObj = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
      (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_ = this_03;
      (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.stateType_ = STATE_NORMAL;
      pSVar2 = Mobile__6SpeechP8Car_tObj(carObj);
      (**(code **)(*(int *)pSVar2->_vf + 0x3c))
                ((int)&(pSVar2->fPosition).flags + (int)*(short *)(*(int *)pSVar2->_vf + 0x38));
    }
    targetSlice = UpdateFreezeModeAndPullOverMode__18AIHigh_BTC_Wingman(this);
    if (targetSlice == 0) goto switchD_8005e388_caseD_1;
    AssignToPlayer__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
              ((AIHigh_BTC_Cop *)this,(AIHigh_BTC_Perp *)0x0);
    this_03 = (AIState_Base *)__builtin_new(8);
    carObj = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    __12AIState_BaseP8Car_tObj(this_03,carObj);
    *(undefined4 *)this_03->_vf = 0x80054f24;
    memset(&cStack32,0,0xc);
    offset = &cStack32;
    cStack32.y = carObj->carIndex * 0xa0000;
    break;
  case STATE_NONACTIVE:
    carObj = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    (carObj->speechInfo).speechSource = (carObj->speechInfo).speechSource & 0xfffffffd;
    WVar5 = this->newRole_;
    if (this->currentRole_ == WVar5) goto switchD_8005e388_caseD_1;
    if (WVar5 == ROLE_WINGMAN) {
      this->currentRole_ = ROLE_WINGMAN;
      SetupWingman__18AIHigh_BTC_WingmanP19AIHigh_BTC_HumanCop(this,this->newHumanBoss_);
      goto LAB_8005ed58;
    }
    if (1 < WVar5 + ~ROLE_WINGMAN) goto switchD_8005e388_caseD_1;
    this->currentRole_ = WVar5;
    SetupBlockader__18AIHigh_BTC_WingmanP19AIHigh_BTC_HumanCopi
              (this,this->newHumanBoss_,(uint)(this->newRole_ == ROLE_BLOCKADER_SPIKEBELT));
    this_03 = (AIState_Base *)__builtin_new(0x10);
    __12AIState_BaseP8Car_tObj(this_03,(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
    *(undefined4 *)this_03->_vf = 0x80055600;
    *(undefined4 *)this_03[1]._vf = 1;
    pAVar6 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
    if (pAVar6 != (AIState_Base *)0x0) {
      (**(code **)(*(int *)pAVar6->_vf + 0x14))
                ((int)&pAVar6->carObj_ + (int)*(short *)(*(int *)pAVar6->_vf + 0x10),3);
    }
    sVar4 = STATE_IDLE;
    goto LAB_8005ed9c;
  case STATE_GOTOSLICE:
    this_00 = (AIState_GotoSlice *)(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
    AssignToPlayer__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
              ((AIHigh_BTC_Cop *)this,(AIHigh_BTC_Perp *)0x0);
    targetSlice = InTargetSliceRange__17AIState_GotoSlicei(this_00,(int)&PTR_000a0000);
    if (targetSlice == 0) goto switchD_8005e388_caseD_1;
LAB_8005ed58:
    this_02 = (AIState_Normal *)__builtin_new(8);
    this_03 = (AIState_Base *)
              __14AIState_NormalP8Car_tObj
                        (this_02,(this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
    pAVar6 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
    if (pAVar6 != (AIState_Base *)0x0) {
      (**(code **)(*(int *)pAVar6->_vf + 0x14))
                ((int)&pAVar6->carObj_ + (int)*(short *)(*(int *)pAVar6->_vf + 0x10),3);
    }
    sVar4 = STATE_NORMAL;
LAB_8005ed9c:
    (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_ = this_03;
LAB_8005eda0:
    (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.stateType_ = sVar4;
    goto switchD_8005e388_caseD_1;
  }
  Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
            ((BO_tNewtonObj *)this_03->carObj_,0,offset,1);
  (this_03->carObj_->N).active = '\0';
  pAVar6 = (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_;
  if (pAVar6 != (AIState_Base *)0x0) {
    (**(code **)(*(int *)pAVar6->_vf + 0x14))
              ((int)&pAVar6->carObj_ + (int)*(short *)(*(int *)pAVar6->_vf + 0x10),3);
  }
  (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_ = this_03;
  (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.stateType_ = STATE_NONACTIVE;
  this->newRole_ = ROLE_IDLE;
  this->currentRole_ = ROLE_IDLE;
switchD_8005e388_caseD_1:
  StateExecute__12AIState_Base((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.state_);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckForActivation__18AIHigh_BTC_Wingman(struct AIHigh_BTC_Wingman *this /*$s1*/)
 // line 1270, offset 0x8005edc8
	/* begin block 1 */
		// Start line: 1271
		// Start offset: 0x8005EDC8
		// Variables:
	// 		int spikeBeltRequest; // stack offset -32

		/* begin block 1.1 */
			// Start line: 1271
			// Start offset: 0x8005EDC8
			// Variables:
		// 		int carLoop; // $s3

			/* begin block 1.1.1 */
				// Start line: 1277
				// Start offset: 0x8005EE00
				// Variables:
			// 		struct Car_tObj *otherCarObj; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 1279
					// Start offset: 0x8005EE18

					/* begin block 1.1.1.1.1 */
						// Start line: 1281
						// Start offset: 0x8005EE44
						// Variables:
					// 		struct AIHigh_BTC_HumanCop *copHigh; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005EEA0
					// End Line: 1295
				/* end block 1.1.1.1 */
				// End offset: 0x8005EEA0
				// End Line: 1295
			/* end block 1.1.1 */
			// End offset: 0x8005EEA0
			// End Line: 1295
		/* end block 1.1 */
		// End offset: 0x8005EEAC
		// End Line: 1298
	/* end block 1 */
	// End offset: 0x8005EEC8
	// End Line: 1303

	/* begin block 2 */
		// Start line: 2752
	/* end block 2 */
	// End Line: 2753

	/* begin block 3 */
		// Start line: 2756
	/* end block 3 */
	// End Line: 2757

	/* begin block 4 */
		// Start line: 2756
	/* end block 4 */
	// End Line: 2757

int CheckForActivation__18AIHigh_BTC_Wingman(AIHigh_BTC_Wingman *this)

{
  int iVar1;
  Car_tObj *pCVar2;
  Wingman_Role WVar3;
  AIHigh_BTC_HumanCop *this_00;
  Car_tObj **ppCVar4;
  int iVar5;
  int local_20 [2];
  
  iVar5 = 0;
  ppCVar4 = &Cars_gList9;
  local_20[0] = 0;
  while (iVar5 < Cars_gNumCars) {
    pCVar2 = *ppCVar4;
    if (((pCVar2->carFlags & 0x200U) != 0) && ((pCVar2->N).active != '\0')) {
      this_00 = (AIHigh_BTC_HumanCop *)(&highLevelAIObjs9)[pCVar2->carIndex];
      iVar1 = CheckForWingmanRequest__19AIHigh_BTC_HumanCop(this_00);
      if (iVar1 != 0) {
        this->newRole_ = ROLE_WINGMAN;
        this->newHumanBoss_ = this_00;
      }
      iVar1 = CheckForBlockaderRequest__19AIHigh_BTC_HumanCopPi(this_00,local_20);
      if (iVar1 != 0) {
        WVar3 = ROLE_BLOCKADER;
        if (local_20[0] != 0) {
          WVar3 = ROLE_BLOCKADER_SPIKEBELT;
        }
        this->newRole_ = WVar3;
        this->newHumanBoss_ = this_00;
      }
    }
    ppCVar4 = ppCVar4 + 1;
    iVar5 = iVar5 + 1;
  }
  if (this->newHumanBoss_ != (AIHigh_BTC_HumanCop *)0x0) {
    UpdateWingmanRole__19AIHigh_BTC_HumanCop12Wingman_Role(this->newHumanBoss_,this->currentRole_);
  }
  return (uint)(this->currentRole_ != this->newRole_);
}



// decompiled code
// original method signature: 
// int /*$ra*/ UpdateFreezeModeAndPullOverMode__18AIHigh_BTC_Wingman(struct AIHigh_BTC_Wingman *this /*$a0*/)
 // line 1311, offset 0x8005eef8
	/* begin block 1 */
		// Start line: 1312
		// Start offset: 0x8005EEF8

		/* begin block 1.1 */
			// Start line: 1314
			// Start offset: 0x8005EEF8

			/* begin block 1.1.1 */
				// Start line: 1330
				// Start offset: 0x8005EF28
			/* end block 1.1.1 */
			// End offset: 0x8005EF30
			// End Line: 1330
		/* end block 1.1 */
		// End offset: 0x8005EF30
		// End Line: 1330
	/* end block 1 */
	// End offset: 0x8005EF30
	// End Line: 1330

	/* begin block 2 */
		// Start line: 2853
	/* end block 2 */
	// End Line: 2854

	/* begin block 3 */
		// Start line: 2859
	/* end block 3 */
	// End Line: 2860

	/* begin block 4 */
		// Start line: 2859
	/* end block 4 */
	// End Line: 2860

	/* begin block 5 */
		// Start line: 2861
	/* end block 5 */
	// End Line: 2862

int UpdateFreezeModeAndPullOverMode__18AIHigh_BTC_Wingman(AIHigh_BTC_Wingman *this)

{
  __98 _Var1;
  
  if ((this->AIHigh_BTC_Cop).freezeMode_ != FREEZE_ARREST) {
    ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->pullOver = 0;
    _Var1 = (this->AIHigh_BTC_Cop).freezeMode_;
    (this->AIHigh_BTC_Cop).freezeMode_ = FREEZE_NONE;
    return (uint)(_Var1 == FREEZE_ARRESTDONE);
  }
  ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->pullOver = 1;
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupWingman__18AIHigh_BTC_WingmanP19AIHigh_BTC_HumanCop(struct AIHigh_BTC_Wingman *this /*$s0*/, struct AIHigh_BTC_HumanCop *humanCop /*$a1*/)
 // line 1334, offset 0x8005ef38
	/* begin block 1 */
		// Start line: 1335
		// Start offset: 0x8005EF38
		// Variables:
	// 		struct Car_tObj *otherCarObj; // $a0
	// 		int side; // $a3
	// 		int perpSide; // $a1

		/* begin block 1.1 */
			// Start line: 1335
			// Start offset: 0x8005EF38

			/* begin block 1.1.1 */
				// Start line: 1335
				// Start offset: 0x8005EF38
			/* end block 1.1.1 */
			// End offset: 0x8005EF38
			// End Line: 1335
		/* end block 1.1 */
		// End offset: 0x8005EF38
		// End Line: 1335
	/* end block 1 */
	// End offset: 0x8005F028
	// End Line: 1346

	/* begin block 2 */
		// Start line: 2917
	/* end block 2 */
	// End Line: 2918

	/* begin block 3 */
		// Start line: 2922
	/* end block 3 */
	// End Line: 2923

	/* begin block 4 */
		// Start line: 2922
	/* end block 4 */
	// End Line: 2923

/* WARNING: Type propagation algorithm not settling */

void SetupWingman__18AIHigh_BTC_WingmanP19AIHigh_BTC_HumanCop
               (AIHigh_BTC_Wingman *this,AIHigh_BTC_HumanCop *humanCop)

{
  Speaker *pSVar1;
  Car_tObj *pCVar2;
  int slice;
  int direction;
  
  pCVar2 = (humanCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
  direction = -1;
  if (-1 < (pCVar2->script).lastActionTime) {
    direction = 1;
  }
  randtemp = fastRandom * randSeed;
  fastRandom = randtemp & 0xffff;
  slice = -1;
  if ((randtemp >> 8 & 0xffff) * 1000 >> 0x10 < 500) {
    slice = 1;
  }
  slice = slice * direction * 0x1c;
  if (slice < 0) {
    slice = (int)(pCVar2->N).simRoadInfo.slice + slice;
    if (slice < 0) {
      slice = slice + gNumSlices;
    }
  }
  else {
    slice = (int)(pCVar2->N).simRoadInfo.slice + slice;
    if (gNumSlices <= slice) {
      slice = slice - gNumSlices;
    }
  }
  AILife_PlaceCarAtLocation__FP8Car_tObjiiiii
            ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_,slice,0,direction,
             (pCVar2->script).lastActionTime,0);
  pSVar1 = Dispatch__6Speech();
  (**(code **)(*(int *)pSVar1->_vf + 0x2c))
            ((int)&(pSVar1->fPosition).flags + (int)*(short *)(*(int *)pSVar1->_vf + 0x28),
             (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetupBlockader__18AIHigh_BTC_WingmanP19AIHigh_BTC_HumanCopi(struct AIHigh_BTC_Wingman *this /*$s2*/, struct AIHigh_BTC_HumanCop *humanCop /*$s5*/, int spikeBeltRequest /*$s6*/)
 // line 1352, offset 0x8005f074
	/* begin block 1 */
		// Start line: 1353
		// Start offset: 0x8005F074
		// Variables:
	// 		int initSlice; // $s0
	// 		struct Car_tObj *copObj; // $s3
	// 		int blockadeType; // $v1

		/* begin block 1.1 */
			// Start line: 1353
			// Start offset: 0x8005F074
			// Variables:
		// 		struct AIHigh_Base *this; // $s5

			/* begin block 1.1.1 */
				// Start line: 1353
				// Start offset: 0x8005F074
			/* end block 1.1.1 */
			// End offset: 0x8005F074
			// End Line: 1353
		/* end block 1.1 */
		// End offset: 0x8005F074
		// End Line: 1353

		/* begin block 1.2 */
			// Start line: 1353
			// Start offset: 0x8005F074

			/* begin block 1.2.1 */
				// Start line: 1353
				// Start offset: 0x8005F074
				// Variables:
			// 		struct AIHigh_BTC_Cop *this; // $s5

				/* begin block 1.2.1.1 */
					// Start line: 1353
					// Start offset: 0x8005F074
				/* end block 1.2.1.1 */
				// End offset: 0x8005F074
				// End Line: 1353
			/* end block 1.2.1 */
			// End offset: 0x8005F074
			// End Line: 1353

			/* begin block 1.2.2 */
				// Start line: 1369
				// Start offset: 0x8005F0B0
				// Variables:
			// 		int perpToHumanDistance; // $a1
			// 		int side; // $s1
			// 		int initializationDistance; // $v1
			// 		struct Car_tObj *perpObj; // $s4

				/* begin block 1.2.2.1 */
					// Start line: 1369
					// Start offset: 0x8005F0B0
					// Variables:
				// 		struct AIHigh_BTC_Cop *this; // $s5

					/* begin block 1.2.2.1.1 */
						// Start line: 1369
						// Start offset: 0x8005F0B0
					/* end block 1.2.2.1.1 */
					// End offset: 0x8005F0B0
					// End Line: 1369
				/* end block 1.2.2.1 */
				// End offset: 0x8005F0B0
				// End Line: 1369

				/* begin block 1.2.2.2 */
					// Start line: 1369
					// Start offset: 0x8005F0B0

					/* begin block 1.2.2.2.1 */
						// Start line: 1369
						// Start offset: 0x8005F0B0
					/* end block 1.2.2.2.1 */
					// End offset: 0x8005F0B0
					// End Line: 1369
				/* end block 1.2.2.2 */
				// End offset: 0x8005F0B0
				// End Line: 1369

				/* begin block 1.2.2.3 */
					// Start line: 1410
					// Start offset: 0x8005F1D4
					// Variables:
				// 		struct AIHigh_BTC_Cop *this; // $s5

					/* begin block 1.2.2.3.1 */
						// Start line: 1410
						// Start offset: 0x8005F1D4
					/* end block 1.2.2.3.1 */
					// End offset: 0x8005F1D4
					// End Line: 1410
				/* end block 1.2.2.3 */
				// End offset: 0x8005F1D4
				// End Line: 1410
			/* end block 1.2.2 */
			// End offset: 0x8005F1D4
			// End Line: 1410

			/* begin block 1.2.3 */
				// Start line: 1418
				// Start offset: 0x8005F1E8
				// Variables:
			// 		int side; // $v1

				/* begin block 1.2.3.1 */
					// Start line: 1420
					// Start offset: 0x8005F1E8

					/* begin block 1.2.3.1.1 */
						// Start line: 1420
						// Start offset: 0x8005F1E8
						// Variables:
					// 		struct AIHigh_Base *this; // $s5

						/* begin block 1.2.3.1.1.1 */
							// Start line: 1420
							// Start offset: 0x8005F1E8
						/* end block 1.2.3.1.1.1 */
						// End offset: 0x8005F1E8
						// End Line: 1420
					/* end block 1.2.3.1.1 */
					// End offset: 0x8005F1E8
					// End Line: 1420
				/* end block 1.2.3.1 */
				// End offset: 0x8005F1FC
				// End Line: 1423

				/* begin block 1.2.3.2 */
					// Start line: 1424
					// Start offset: 0x8005F210
					// Variables:
				// 		struct AIHigh_Base *this; // $s5

					/* begin block 1.2.3.2.1 */
						// Start line: 1424
						// Start offset: 0x8005F210
					/* end block 1.2.3.2.1 */
					// End offset: 0x8005F210
					// End Line: 1424
				/* end block 1.2.3.2 */
				// End offset: 0x8005F210
				// End Line: 1424

				/* begin block 1.2.3.3 */
					// Start line: 1424
					// Start offset: 0x8005F234
					// Variables:
				// 		struct AIHigh_Base *this; // $s5

					/* begin block 1.2.3.3.1 */
						// Start line: 1424
						// Start offset: 0x8005F234
					/* end block 1.2.3.3.1 */
					// End offset: 0x8005F234
					// End Line: 1424
				/* end block 1.2.3.3 */
				// End offset: 0x8005F234
				// End Line: 1424

				/* begin block 1.2.3.4 */
					// Start line: 1424
					// Start offset: 0x8005F234
					// Variables:
				// 		struct AIHigh_Base *this; // $s5

					/* begin block 1.2.3.4.1 */
						// Start line: 1424
						// Start offset: 0x8005F234
					/* end block 1.2.3.4.1 */
					// End offset: 0x8005F234
					// End Line: 1424
				/* end block 1.2.3.4 */
				// End offset: 0x8005F234
				// End Line: 1424

				/* begin block 1.2.3.5 */
					// Start line: 1424
					// Start offset: 0x8005F23C
					// Variables:
				// 		struct AIHigh_Base *this; // $s5

					/* begin block 1.2.3.5.1 */
						// Start line: 1424
						// Start offset: 0x8005F23C
					/* end block 1.2.3.5.1 */
					// End offset: 0x8005F23C
					// End Line: 1424
				/* end block 1.2.3.5 */
				// End offset: 0x8005F23C
				// End Line: 1424

				/* begin block 1.2.3.6 */
					// Start line: 1424
					// Start offset: 0x8005F250
					// Variables:
				// 		struct AIHigh_Base *this; // $s5

					/* begin block 1.2.3.6.1 */
						// Start line: 1424
						// Start offset: 0x8005F250
					/* end block 1.2.3.6.1 */
					// End offset: 0x8005F250
					// End Line: 1424
				/* end block 1.2.3.6 */
				// End offset: 0x8005F250
				// End Line: 1424

				/* begin block 1.2.3.7 */
					// Start line: 1424
					// Start offset: 0x8005F260
					// Variables:
				// 		struct AIHigh_Base *this; // $s5

					/* begin block 1.2.3.7.1 */
						// Start line: 1424
						// Start offset: 0x8005F260
					/* end block 1.2.3.7.1 */
					// End offset: 0x8005F260
					// End Line: 1424
				/* end block 1.2.3.7 */
				// End offset: 0x8005F260
				// End Line: 1424
			/* end block 1.2.3 */
			// End offset: 0x8005F268
			// End Line: 1427
		/* end block 1.2 */
		// End offset: 0x8005F268
		// End Line: 1427

		/* begin block 1.3 */
			// Start line: 1448
			// Start offset: 0x8005F3AC
			// Variables:
		// 		struct AIHigh_Base *this; // $s5

			/* begin block 1.3.1 */
				// Start line: 1448
				// Start offset: 0x8005F3AC
			/* end block 1.3.1 */
			// End offset: 0x8005F3AC
			// End Line: 1448
		/* end block 1.3 */
		// End offset: 0x8005F3AC
		// End Line: 1448

		/* begin block 1.4 */
			// Start line: 1448
			// Start offset: 0x8005F3AC

			/* begin block 1.4.1 */
				// Start line: 1461
				// Start offset: 0x8005F3D4
				// Variables:
			// 		int spikeBeltSide; // $v1
			// 		int left; // $s1
			// 		int right; // $v0

				/* begin block 1.4.1.1 */
					// Start line: 1471
					// Start offset: 0x8005F45C
					// Variables:
				// 		int slice; // $a3
				// 		int rightLatPos; // $v0

					/* begin block 1.4.1.1.1 */
						// Start line: 1471
						// Start offset: 0x8005F45C
					/* end block 1.4.1.1.1 */
					// End offset: 0x8005F45C
					// End Line: 1471
				/* end block 1.4.1.1 */
				// End offset: 0x8005F45C
				// End Line: 1471

				/* begin block 1.4.1.2 */
					// Start line: 1471
					// Start offset: 0x8005F45C
					// Variables:
				// 		int timeNow; // $v1

					/* begin block 1.4.1.2.1 */
						// Start line: 1471
						// Start offset: 0x8005F45C

						/* begin block 1.4.1.2.1.1 */
							// Start line: 1471
							// Start offset: 0x8005F45C
							// Variables:
						// 		int timeNow; // $v1

							/* begin block 1.4.1.2.1.1.1 */
								// Start line: 1471
								// Start offset: 0x8005F45C
							/* end block 1.4.1.2.1.1.1 */
							// End offset: 0x8005F45C
							// End Line: 1471
						/* end block 1.4.1.2.1.1 */
						// End offset: 0x8005F45C
						// End Line: 1471
					/* end block 1.4.1.2.1 */
					// End offset: 0x8005F45C
					// End Line: 1471
				/* end block 1.4.1.2 */
				// End offset: 0x8005F45C
				// End Line: 1471
			/* end block 1.4.1 */
			// End offset: 0x8005F578
			// End Line: 1482
		/* end block 1.4 */
		// End offset: 0x8005F578
		// End Line: 1482
	/* end block 1 */
	// End offset: 0x8005F578
	// End Line: 1485

	/* begin block 2 */
		// Start line: 2952
	/* end block 2 */
	// End Line: 2953

	/* begin block 3 */
		// Start line: 2958
	/* end block 3 */
	// End Line: 2959

	/* begin block 4 */
		// Start line: 2958
	/* end block 4 */
	// End Line: 2959

/* WARNING: Type propagation algorithm not settling */

void SetupBlockader__18AIHigh_BTC_WingmanP19AIHigh_BTC_HumanCopi
               (AIHigh_BTC_Wingman *this,AIHigh_BTC_HumanCop *humanCop,int spikeBeltRequest)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  Speaker *pSVar4;
  int iVar5;
  int iVar6;
  AIHigh_BTC_Perp *pAVar7;
  uint uVar8;
  Car_tObj *carObj;
  int slice;
  Car_tObj *otherCarObj;
  
  pAVar7 = (humanCop->AIHigh_BTC_Cop).perpTarget_;
  otherCarObj = (humanCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
  if (pAVar7 == (AIHigh_BTC_Perp *)0x0) {
    slice = -1;
    if (-1 < (otherCarObj->script).lastActionTime) {
      slice = 1;
    }
    slice = slice * 0x53;
    if (slice < 0) {
      slice = (int)(otherCarObj->N).simRoadInfo.slice + slice;
      if (slice < 0) {
        slice = slice + gNumSlices;
      }
    }
    else {
      slice = (int)(otherCarObj->N).simRoadInfo.slice + slice;
      if (gNumSlices <= slice) {
        slice = slice - gNumSlices;
      }
    }
    (this->AIHigh_BTC_Cop).AIHigh_BasicCop.blockade_.blockadeSpeechFlags = 0;
    (this->AIHigh_BTC_Cop).AIHigh_BasicCop.blockade_.target = (AIHigh_Player *)0x0;
    goto LAB_8005f268;
  }
  carObj = (pAVar7->AIHigh_BasicPerp).AIHigh_Base.carObj_;
  slice = -1;
  if (-1 < (carObj->script).lastActionTime) {
    slice = 1;
  }
  iVar3 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
  iVar6 = iVar3;
  if (iVar3 < 0) {
    iVar6 = -iVar3;
  }
  iVar5 = 0x1f40000;
  if (0x1f40000 < iVar6) {
    iVar5 = iVar6;
  }
  iVar6 = 0x5dc0000;
  if (iVar5 < 0x5dc0000) {
    iVar6 = iVar5;
  }
  iVar5 = iVar6 >> 0x1f;
  if (iVar3 * slice < 0) {
    slice = ((iVar6 / 6 + iVar5 >> 0x10) - iVar5) * slice;
    if (slice < 0) {
      slice = (int)(otherCarObj->N).simRoadInfo.slice + slice;
      goto LAB_8005f1bc;
    }
    sVar2 = (otherCarObj->N).simRoadInfo.slice;
LAB_8005f190:
    slice = (int)sVar2 + slice;
    if (gNumSlices <= slice) {
      slice = slice - gNumSlices;
    }
  }
  else {
    slice = ((iVar6 / 6 + iVar5 >> 0x10) - iVar5) * slice;
    if (-1 < slice) {
      sVar2 = (carObj->N).simRoadInfo.slice;
      goto LAB_8005f190;
    }
    slice = (int)(carObj->N).simRoadInfo.slice + slice;
LAB_8005f1bc:
    if (slice < 0) {
      slice = slice + gNumSlices;
    }
  }
  (this->AIHigh_BTC_Cop).AIHigh_BasicCop.blockade_.blockadeSpeechFlags = 1;
  (this->AIHigh_BTC_Cop).AIHigh_BasicCop.blockade_.target =
       (AIHigh_Player *)(humanCop->AIHigh_BTC_Cop).perpTarget_;
LAB_8005f268:
  iVar6 = (otherCarObj->script).lastReactionIndex[3];
  (this->AIHigh_BTC_Cop).AIHigh_BasicCop.blockade_.direction = iVar6;
  if (iVar6 < 1) {
    iVar6 = slice - iVar6;
    if (gNumSlices <= iVar6) {
      iVar6 = iVar6 - gNumSlices;
    }
  }
  else {
    iVar6 = slice - iVar6;
    if (iVar6 < 0) {
      iVar6 = iVar6 + gNumSlices;
    }
  }
  randtemp = fastRandom * randSeed;
  uVar8 = randtemp >> 8 & 0xffff;
  (this->AIHigh_BTC_Cop).AIHigh_BasicCop.blockade_.slice = iVar6;
  AICop_gRoadBlockState = kAICop_RoadBlockState_WaitingForPerp;
  fastRandom = randtemp & 0xffff;
  bVar1 = (&gBlockadeTypes)
          [uVar8 - (((uint)((ulonglong)uVar8 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar8 / 5)];
  (this->AIHigh_BTC_Cop).AIHigh_BasicCop.blockade_.flags = (uint)bVar1;
  if (bVar1 != 0) {
    if (stackSpeedUpEnbabledFlag == 0) {
      SetupBlockadeElements__15AIHigh_BasicCopP10blockade_t
                ((AIHigh_BasicCop *)this,&(this->AIHigh_BTC_Cop).AIHigh_BasicCop.blockade_);
    }
    else {
      gWSavePtr = SetSp();
      stackSpeedUpEnbabledFlag = 0;
      SetupBlockadeElements__15AIHigh_BasicCopP10blockade_t
                ((AIHigh_BasicCop *)this,&(this->AIHigh_BTC_Cop).AIHigh_BasicCop.blockade_);
      gWSavePtr = SetSp();
      stackSpeedUpEnbabledFlag = 1;
    }
  }
  AILife_ReencarnateCopByLatPosAndRotation__FP8Car_tObjiiii
            ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_,slice,
             (((humanCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->script).
             lastReactionIndex[3],0,0x100);
  if (spikeBeltRequest != 0) {
    slice = AIWorld_ApxSplineDistance__FP8Car_tObjT0
                      ((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_,otherCarObj);
    iVar6 = -1;
    if (-1 < slice) {
      iVar6 = 1;
    }
    iVar6 = iVar6 * 6;
    if (iVar6 < 0) {
      iVar6 = (int)(((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->N).simRoadInfo.
                   slice + iVar6;
      if (iVar6 < 0) {
        iVar6 = iVar6 + gNumSlices;
      }
    }
    else {
      iVar6 = (int)(((this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->N).simRoadInfo.
                   slice + iVar6;
      if (gNumSlices <= iVar6) {
        iVar6 = iVar6 - gNumSlices;
      }
    }
    this->spikeBeltSlice_ = iVar6;
    randtemp = fastRandom * randSeed;
    fastRandom = randtemp & 0xffff;
    *(undefined **)&this->spikeBeltInterceptReleaseTime_ =
         &DAT_0000d999 + ((randtemp >> 8 & 0xffff) * 0x14ccd >> 0x10);
    uVar8 = fixedmult((uint)BWorldSm_slices[this->spikeBeltSlice_].avgPavedWidthLf * 0x8000 *
                      (uint)(BWorldSm_slices[this->spikeBeltSlice_].laneCount >> 4),
                      (int)&DAT_0000cccc);
    AICop_spikeBelt.rightLatPos_ =
         fixedmult((uint)BWorldSm_slices[this->spikeBeltSlice_].avgPavedWidthRt * 0x8000 *
                   ((uint)BWorldSm_slices[this->spikeBeltSlice_].laneCount & 0xf),(int)&DAT_0000cccc
                  );
    AICop_spikeBelt.leftLatPos_ = -uVar8;
    AICop_spikeBelt.slice_ = this->spikeBeltSlice_;
    AICop_spikeBelt.active_ = 1;
    AICop_spikeBelt.freshenTime_ = simGlobal.gameTicks;
    BWorld_SetSpikeBelt__Fiii
              (this->spikeBeltSlice_,AICop_spikeBelt.leftLatPos_,
               uVar8 + AICop_spikeBelt.rightLatPos_);
    this->spikeBeltPlaced_ = 1;
  }
  pSVar4 = Dispatch__6Speech();
  (**(code **)(*(int *)pSVar4->_vf + 0x2c))
            ((int)&(pSVar4->fPosition).flags + (int)*(short *)(*(int *)pSVar4->_vf + 0x28),
             (this->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
  return;
}





