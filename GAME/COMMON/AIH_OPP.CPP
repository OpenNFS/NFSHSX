#include "THISDUST.H"
#include "AIH_OPP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ CheckForWipeOut__15AIHigh_Opponent(struct AIHigh_Opponent *this /*$t0*/)
 // line 38, offset 0x80063308
	/* begin block 1 */
		// Start line: 39
		// Start offset: 0x80063308
		// Variables:
	// 		int perTickProb; // $a0
	// 		int randVal; // $t1
	// 		int oppLevel; // $t7
	// 		int oppFines; // $t6

		/* begin block 1.1 */
			// Start line: 39
			// Start offset: 0x80063308

			/* begin block 1.1.1 */
				// Start line: 39
				// Start offset: 0x80063308
			/* end block 1.1.1 */
			// End offset: 0x80063308
			// End Line: 39
		/* end block 1.1 */
		// End offset: 0x80063308
		// End Line: 39

		/* begin block 1.2 */
			// Start line: 50
			// Start offset: 0x80063340

			/* begin block 1.2.1 */
				// Start line: 50
				// Start offset: 0x80063340

				/* begin block 1.2.1.1 */
					// Start line: 50
					// Start offset: 0x80063340
				/* end block 1.2.1.1 */
				// End offset: 0x80063340
				// End Line: 50
			/* end block 1.2.1 */
			// End offset: 0x80063340
			// End Line: 50

			/* begin block 1.2.2 */
				// Start line: 50
				// Start offset: 0x80063350

				/* begin block 1.2.2.1 */
					// Start line: 50
					// Start offset: 0x80063350
				/* end block 1.2.2.1 */
				// End offset: 0x80063350
				// End Line: 50
			/* end block 1.2.2 */
			// End offset: 0x80063350
			// End Line: 50

			/* begin block 1.2.3 */
				// Start line: 50
				// Start offset: 0x80063350

				/* begin block 1.2.3.1 */
					// Start line: 50
					// Start offset: 0x80063350
				/* end block 1.2.3.1 */
				// End offset: 0x80063350
				// End Line: 50
			/* end block 1.2.3 */
			// End offset: 0x80063350
			// End Line: 50
		/* end block 1.2 */
		// End offset: 0x80063374
		// End Line: 51

		/* begin block 1.3 */
			// Start line: 69
			// Start offset: 0x800633FC

			/* begin block 1.3.1 */
				// Start line: 69
				// Start offset: 0x800633FC
				// Variables:
			// 		struct AICop_PerpChaseInfo *this; // $v1

				/* begin block 1.3.1.1 */
					// Start line: 69
					// Start offset: 0x800633FC
				/* end block 1.3.1.1 */
				// End offset: 0x800633FC
				// End Line: 69
			/* end block 1.3.1 */
			// End offset: 0x800633FC
			// End Line: 69

			/* begin block 1.3.2 */
				// Start line: 69
				// Start offset: 0x800633FC

				/* begin block 1.3.2.1 */
					// Start line: 69
					// Start offset: 0x800633FC
				/* end block 1.3.2.1 */
				// End offset: 0x800633FC
				// End Line: 69
			/* end block 1.3.2 */
			// End offset: 0x800633FC
			// End Line: 69
		/* end block 1.3 */
		// End offset: 0x8006341C
		// End Line: 70

		/* begin block 1.4 */
			// Start line: 73
			// Start offset: 0x8006341C
			// Variables:
		// 		int hLoop; // $a3

			/* begin block 1.4.1 */
				// Start line: 73
				// Start offset: 0x80063450
				// Variables:
			// 		struct Car_tObj *thisPlayerObj; // $a0
			// 		struct AIHigh_Player *thisPlayer; // $v0
			// 		int playFines; // $v1

				/* begin block 1.4.1.1 */
					// Start line: 75
					// Start offset: 0x8006345C

					/* begin block 1.4.1.1.1 */
						// Start line: 75
						// Start offset: 0x8006345C
					/* end block 1.4.1.1.1 */
					// End offset: 0x8006345C
					// End Line: 75
				/* end block 1.4.1.1 */
				// End offset: 0x8006345C
				// End Line: 75
			/* end block 1.4.1 */
			// End offset: 0x800634D4
			// End Line: 88
		/* end block 1.4 */
		// End offset: 0x800634E0
		// End Line: 94
	/* end block 1 */
	// End offset: 0x800634E0
	// End Line: 94

	/* begin block 2 */
		// Start line: 76
	/* end block 2 */
	// End Line: 77

	/* begin block 3 */
		// Start line: 76
	/* end block 3 */
	// End Line: 77

/* WARNING: Type propagation algorithm not settling */

void CheckForWipeOut__15AIHigh_Opponent(AIHigh_Opponent *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Car_tObj *pCVar4;
  int iVar5;
  Car_tObj **ppCVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = (this->AIHigh_Player).perpChaseInfo_.chaseLevelIndex_;
  pCVar4 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  iVar9 = (pCVar4->stats).numFines;
  if ((Cars_gNumCopCars != 0) && (pCVar4->targetLatPos <= simGlobal.gameTicks)) {
    bVar1 = false;
    if (((this->AIHigh_Player).AIHigh_BasicPerp.basicPerpInfo_.crime_ == CRIME_NONE) ||
       ((this->AIHigh_Player).AIHigh_BasicPerp.basicPerpInfo_.copsAssigned_[0] +
        (this->AIHigh_Player).AIHigh_BasicPerp.basicPerpInfo_.copsAssigned_[1] == 0)) {
      bVar1 = true;
    }
    if ((!bVar1) &&
       (0x27f < simGlobal.gameTicks -
                ((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_)->targetLatPos)) {
      randtemp = fastRandom * randSeed;
      fastRandom = randtemp & 0xffff;
      uVar8 = randtemp >> 8 & 0xffff;
      if ((int)uVar8 < AI_elapsedTime * 3) {
        ((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_)->targetLatPos =
             simGlobal.gameTicks + 0xc0;
      }
      iVar3 = Cars_gNumHumanRaceCars;
      iVar2 = AI_elapsedTime;
      iVar7 = 0;
      if ((this->AIHigh_Player).perpChaseInfo_.bestChaseLevelIndex_ !=
          ((this->AIHigh_Player).perpChaseInfo_.copGameInfo_)->numLevels + -1) {
        ppCVar6 = &Cars_gHumanRaceCarList9;
        while (iVar7 < iVar3) {
          pCVar4 = *ppCVar6;
          iVar5 = (pCVar4->script).lastActionTime;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if (((0xd5554 < iVar5) &&
              ((((int)(&highLevelAIObjs9)[pCVar4->carIndex][6].state_ < 2 && (2 < iVar10)) ||
               (1 < (pCVar4->stats).numFines - iVar9)))) && ((int)uVar8 < iVar2 * 0x74)) {
            ((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_)->targetLatPos =
                 simGlobal.gameTicks + 0xc0;
          }
          ppCVar6 = ppCVar6 + 1;
          iVar7 = iVar7 + 1;
        }
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DoRearEnder__15AIHigh_Opponent(struct AIHigh_Opponent *this /*$s3*/)
 // line 97, offset 0x800634e8
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x800634E8
		// Variables:
	// 		int attackIndex; // $s1

		/* begin block 1.1 */
			// Start line: 98
			// Start offset: 0x800634E8

			/* begin block 1.1.1 */
				// Start line: 104
				// Start offset: 0x80063528
				// Variables:
			// 		struct Car_tObj *otherCarObj; // $s0
			// 		int longDistance; // $a2
			// 		int latDistance; // $a1
			/* end block 1.1.1 */
			// End offset: 0x800635D4
			// End Line: 141
		/* end block 1.1 */
		// End offset: 0x800635D4
		// End Line: 141

		/* begin block 1.2 */
			// Start line: 120
			// Start offset: 0x800635D4

			/* begin block 1.2.1 */
				// Start line: 121
				// Start offset: 0x8006360C

				/* begin block 1.2.1.1 */
					// Start line: 123
					// Start offset: 0x8006360C
					// Variables:
				// 		int racerLoop; // $s2

					/* begin block 1.2.1.1.1 */
						// Start line: 123
						// Start offset: 0x8006361C
						// Variables:
					// 		struct Car_tObj *otherCarObj; // $s0
					// 		int longDistance; // $a3
					// 		int latDistance; // $a1
					/* end block 1.2.1.1.1 */
					// End offset: 0x8006378C
					// End Line: 139
				/* end block 1.2.1.1 */
				// End offset: 0x80063798
				// End Line: 144
			/* end block 1.2.1 */
			// End offset: 0x80063798
			// End Line: 144
		/* end block 1.2 */
		// End offset: 0x80063798
		// End Line: 144
	/* end block 1 */
	// End offset: 0x8006379C
	// End Line: 147

	/* begin block 2 */
		// Start line: 209
	/* end block 2 */
	// End Line: 210

	/* begin block 3 */
		// Start line: 212
	/* end block 3 */
	// End Line: 213

	/* begin block 4 */
		// Start line: 212
	/* end block 4 */
	// End Line: 213

/* WARNING: Type propagation algorithm not settling */

int DoRearEnder__15AIHigh_Opponent(AIHigh_Opponent *this)

{
  int iVar1;
  int iVar2;
  Trk_NewSlice *pTVar3;
  uint uVar4;
  Car_tObj *carObj;
  int iVar5;
  Car_tObj *carObj_00;
  Car_tObj **ppCVar6;
  
  iVar1 = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                    (&((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_)->script,
                     AISCRIPT_AIREACTION_REAR_END);
  if (iVar1 != -1) {
    carObj_00 = (&Cars_gList9)[iVar1];
    iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0
                      (carObj_00,(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_);
    carObj = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_;
    iVar2 = iVar2 * (carObj->script).lastReactionIndex[3];
    iVar5 = (carObj->speechInfo).playerCarIndex - (carObj_00->speechInfo).playerCarIndex;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if ((iVar2 - 0x10001U < 0x26ffff) && (iVar5 < iVar2 * 2)) {
      iVar5 = (carObj_00->script).lastActionTime;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (0xb1c71 < iVar5) {
        return iVar1;
      }
    }
  }
  carObj = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  if ((carObj->N).simOptz == '\0') {
    iVar1 = (carObj->script).lastActionTime;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar5 = 0;
    if (0x140000 < iVar1) {
      ppCVar6 = &Cars_gHumanRaceCarList9;
      while (iVar5 < Cars_gNumHumanRaceCars) {
        carObj = *ppCVar6;
        pTVar3 = BWorldSm_slices + (int)(carObj->N).simRoadInfo.slice;
        iVar1 = (carObj->speechInfo).playerCarIndex;
        if (((int)-((uint)pTVar3->avgPavedWidthLf * 0x8000 * (uint)(pTVar3->laneCount >> 4)) <=
             iVar1) &&
           (iVar1 <= (int)((uint)pTVar3->avgPavedWidthRt * 0x8000 * ((uint)pTVar3->laneCount & 0xf))
           )) {
          iVar2 = AIWorld_SplineDistance__FP8Car_tObjT0
                            (carObj,(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_);
          carObj_00 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_;
          iVar2 = iVar2 * (carObj_00->script).lastReactionIndex[3];
          iVar1 = (carObj_00->speechInfo).playerCarIndex - (carObj->speechInfo).playerCarIndex;
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if ((((iVar2 - 0x10001U < 0x26ffff) && (iVar1 < iVar2 * 2)) &&
              (uVar4 = carObj_00->personality->rearBumpProbMask,
              (simGlobal.gameTicks + carObj_00->carIndex * 0x7b & uVar4) == uVar4)) ||
             ((iVar2 + 0x3ffffU < 0x7ffff &&
              (carObj_00 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_,
              uVar4 = carObj_00->personality->smackProbMask,
              (simGlobal.gameTicks + carObj_00->carIndex * 0x7b & uVar4) == uVar4)))) {
            return carObj->carIndex;
          }
        }
        ppCVar6 = ppCVar6 + 1;
        iVar5 = iVar5 + 1;
      }
    }
  }
  return -1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HighExecute__15AIHigh_Opponent(struct AIHigh_Opponent *this /*$s2*/)
 // line 150, offset 0x800637bc
	/* begin block 1 */
		// Start line: 151
		// Start offset: 0x800637BC

		/* begin block 1.1 */
			// Start line: 151
			// Start offset: 0x800637BC

			/* begin block 1.1.1 */
				// Start line: 156
				// Start offset: 0x80063808

				/* begin block 1.1.1.1 */
					// Start line: 158
					// Start offset: 0x80063808
					// Variables:
				// 		struct AIHigh_Base *this; // $s2
				// 		struct AIState_Base *newState; // $s0

					/* begin block 1.1.1.1.1 */
						// Start line: 158
						// Start offset: 0x80063808
					/* end block 1.1.1.1.1 */
					// End offset: 0x80063848
					// End Line: 158
				/* end block 1.1.1.1 */
				// End offset: 0x80063848
				// End Line: 158

				/* begin block 1.1.1.2 */
					// Start line: 163
					// Start offset: 0x80063858
					// Variables:
				// 		int attackIndex; // $s1

					/* begin block 1.1.1.2.1 */
						// Start line: 182
						// Start offset: 0x800638C4

						/* begin block 1.1.1.2.1.1 */
							// Start line: 183
							// Start offset: 0x800638D4
							// Variables:
						// 		struct coorddef pos; // stack offset -40
						// 		int aggression; // $s0

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 186
								// Start offset: 0x800638FC
								// Variables:
							// 		struct AIHigh_Base *this; // $s2
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.2.1.1.1.1 */
									// Start line: 186
									// Start offset: 0x800638FC
								/* end block 1.1.1.2.1.1.1.1 */
								// End offset: 0x80063978
								// End Line: 188
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x80063978
							// End Line: 188
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x80063978
						// End Line: 188
					/* end block 1.1.1.2.1 */
					// End offset: 0x80063978
					// End Line: 188
				/* end block 1.1.1.2 */
				// End offset: 0x80063978
				// End Line: 188

				/* begin block 1.1.1.3 */
					// Start line: 194
					// Start offset: 0x80063988
					// Variables:
				// 		struct AIState_Chase *attackState; // $s0

					/* begin block 1.1.1.3.1 */
						// Start line: 222
						// Start offset: 0x80063A48

						/* begin block 1.1.1.3.1.1 */
							// Start line: 223
							// Start offset: 0x80063A58

							/* begin block 1.1.1.3.1.1.1 */
								// Start line: 224
								// Start offset: 0x80063A6C
								// Variables:
							// 		struct AIHigh_Base *this; // $s2
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.3.1.1.1.1 */
									// Start line: 224
									// Start offset: 0x80063A6C
								/* end block 1.1.1.3.1.1.1.1 */
								// End offset: 0x80063AB0
								// End Line: 225
							/* end block 1.1.1.3.1.1.1 */
							// End offset: 0x80063AB0
							// End Line: 225
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x80063AC0
						// End Line: 227
					/* end block 1.1.1.3.1 */
					// End offset: 0x80063AC0
					// End Line: 227
				/* end block 1.1.1.3 */
				// End offset: 0x80063AC0
				// End Line: 227
			/* end block 1.1.1 */
			// End offset: 0x80063AC0
			// End Line: 239
		/* end block 1.1 */
		// End offset: 0x80063AC0
		// End Line: 239
	/* end block 1 */
	// End offset: 0x80063ACC
	// End Line: 247

	/* begin block 2 */
		// Start line: 374
	/* end block 2 */
	// End Line: 375

	/* begin block 3 */
		// Start line: 378
	/* end block 3 */
	// End Line: 379

	/* begin block 4 */
		// Start line: 378
	/* end block 4 */
	// End Line: 379

/* WARNING: Type propagation algorithm not settling */

void HighExecute__15AIHigh_Opponent(AIHigh_Opponent *this)

{
  AIState_Chase *this_00;
  int iVar1;
  AIState_Normal *this_01;
  int aggressionLevel;
  AIState_Base *pAVar2;
  AIHigh_tAttackMode AVar3;
  AIState_Base *pAVar4;
  undefined4 uVar5;
  int iVar6;
  coorddef cStack40;
  
  switch((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.stateType_) {
  case STATE_NONE:
    this_01 = (AIState_Normal *)__builtin_new(8);
    pAVar2 = (AIState_Base *)
             __14AIState_NormalP8Car_tObj
                       (this_01,(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_);
    pAVar4 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_;
    if (pAVar4 != (AIState_Base *)0x0) {
      (**(code **)(*(int *)pAVar4->_vf + 0x14))
                ((int)&pAVar4->carObj_ + (int)*(short *)(*(int *)pAVar4->_vf + 0x10),3);
    }
    (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_ = pAVar2;
    (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.stateType_ = STATE_NORMAL;
    return;
  case STATE_NORMAL:
    HandleCops__13AIHigh_Player((AIHigh_Player *)this);
    CheckForWipeOut__15AIHigh_Opponent(this);
    iVar1 = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                      (&((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_)->script,
                       AISCRIPT_AIREACTION_ATTACK);
    if (iVar1 == -1) {
      iVar1 = DoRearEnder__15AIHigh_Opponent(this);
      if (iVar1 != -1) {
        AVar3 = REAR_END;
        goto LAB_800638c0;
      }
      iVar1 = DoProvokedAttack__15AIHigh_Opponent(this);
      AVar3 = PROVOKED_ATTACK;
      if (iVar1 != -1) goto LAB_800638c0;
    }
    else {
      AVar3 = SCRIPT_ATTACK;
LAB_800638c0:
      this->attackMode_ = AVar3;
    }
    if (this->attackMode_ != NO_ATTACK) {
      memset(&cStack40,0,0xc);
      iVar6 = this->attackMode_ + ~NO_ATTACK;
      aggressionLevel = 2;
      if (1 < iVar6) {
        aggressionLevel = iVar6;
      }
      this_00 = (AIState_Chase *)__builtin_new(0x94);
      this_00 = __13AIState_ChaseP8Car_tObjT1P8coorddefiiiii
                          (this_00,(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_,
                           (&Cars_gList9)[iVar1],&cStack40,0x20,0x960000,0x960000,aggressionLevel,
                           0x10000);
      pAVar2 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_;
      if (pAVar2 != (AIState_Base *)0x0) {
        (**(code **)(*(int *)pAVar2->_vf + 0x14))
                  ((int)&pAVar2->carObj_ + (int)*(short *)(*(int *)pAVar2->_vf + 0x10),3);
      }
      *(AIState_Chase **)&(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_ = this_00;
      (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.stateType_ = STATE_CHASE;
    }
    break;
  case STATE_CHASE:
    this_00 = (AIState_Chase *)(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_;
    HandleCops__13AIHigh_Player((AIHigh_Player *)this);
    CheckForWipeOut__15AIHigh_Opponent(this);
    SetMurderMode__13AIState_Chaseii(this_00,1,0xf);
    AVar3 = this->attackMode_;
    if (AVar3 == SCRIPT_ATTACK) {
      iVar1 = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                        (&((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_)->script,
                         AISCRIPT_AIREACTION_ATTACK);
      if (iVar1 == -1) {
        this->attackMode_ = NO_ATTACK;
      }
    }
    else {
      if ((int)AVar3 < 3) {
        if ((AVar3 == REAR_END) && (iVar1 = DoRearEnder__15AIHigh_Opponent(this), iVar1 == -1)) {
          this->attackMode_ = NO_ATTACK;
        }
      }
      else {
        if ((AVar3 == PROVOKED_ATTACK) &&
           (iVar1 = this->attackTicksLeft_ - AI_elapsedTime, this->attackTicksLeft_ = iVar1,
           iVar1 < 1)) {
          this->attackMode_ = NO_ATTACK;
        }
      }
    }
    if (this->attackMode_ == NO_ATTACK) {
      uVar5 = 0xffffffff;
      if (GameSetup_gData.reverseTrack == 0) {
        uVar5 = 1;
      }
      (((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_)->script).lastReactionIndex[2] =
           uVar5;
      this_01 = (AIState_Normal *)__builtin_new(8);
      pAVar2 = (AIState_Base *)
               __14AIState_NormalP8Car_tObj
                         (this_01,(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_);
      pAVar4 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_;
      if (pAVar4 != (AIState_Base *)0x0) {
        (**(code **)(*(int *)pAVar4->_vf + 0x14))
                  ((int)&pAVar4->carObj_ + (int)*(short *)(*(int *)pAVar4->_vf + 0x10),3);
      }
      (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_ = pAVar2;
      (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.stateType_ = STATE_NORMAL;
      this->attackMode_ = NO_ATTACK;
    }
  }
  StateExecute__12AIState_Base((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_);
  return;
}



// decompiled code
// original method signature: 
// struct AIHigh_Opponent * /*$ra*/ __15AIHigh_OpponentP8Car_tObj(struct AIHigh_Opponent *this /*$s0*/, struct Car_tObj *carObj /*$a1*/)
 // line 250, offset 0x80063ae8
	/* begin block 1 */
		// Start line: 251
		// Start offset: 0x80063AE8
	/* end block 1 */
	// End offset: 0x80063AE8
	// End Line: 251

	/* begin block 2 */
		// Start line: 576
	/* end block 2 */
	// End Line: 577

	/* begin block 3 */
		// Start line: 579
	/* end block 3 */
	// End Line: 580

	/* begin block 4 */
		// Start line: 579
	/* end block 4 */
	// End Line: 580

AIHigh_Opponent * __15AIHigh_OpponentP8Car_tObj(AIHigh_Opponent *this,Car_tObj *carObj)

{
  __13AIHigh_PlayerP8Car_tObj((AIHigh_Player *)this,carObj);
  *(undefined4 *)(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base._vf = 0x800550f8;
  this->attackMode_ = NO_ATTACK;
  this->lastHumanHitter_ = (Car_tObj *)0x0;
  this->hitCount_ = 0;
  this->attackTicksLeft_ = 0;
  return this;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DoProvokedAttack__15AIHigh_Opponent(struct AIHigh_Opponent *this /*$a0*/)
 // line 260, offset 0x80063b2c
	/* begin block 1 */
		// Start line: 261
		// Start offset: 0x80063B2C

		/* begin block 1.1 */
			// Start line: 264
			// Start offset: 0x80063B2C

			/* begin block 1.1.1 */
				// Start line: 265
				// Start offset: 0x80063B74
			/* end block 1.1.1 */
			// End offset: 0x80063BD0
			// End Line: 278
		/* end block 1.1 */
		// End offset: 0x80063BD0
		// End Line: 278
	/* end block 1 */
	// End offset: 0x80063BD0
	// End Line: 281

	/* begin block 2 */
		// Start line: 599
	/* end block 2 */
	// End Line: 600

	/* begin block 3 */
		// Start line: 604
	/* end block 3 */
	// End Line: 605

	/* begin block 4 */
		// Start line: 604
	/* end block 4 */
	// End Line: 605

	/* begin block 5 */
		// Start line: 607
	/* end block 5 */
	// End Line: 608

/* WARNING: Type propagation algorithm not settling */

int DoProvokedAttack__15AIHigh_Opponent(AIHigh_Opponent *this)

{
  int iVar1;
  Car_tObj *pCVar2;
  Car_tObj *pCVar3;
  AIPerson_t *pAVar4;
  
  pCVar3 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  if (((simGlobal.gameTicks - (pCVar3->N).collision.lastTime < 0xf) &&
      (pCVar3 = (Car_tObj *)(pCVar3->N).collision.lastOtherObj, pCVar3 != (Car_tObj *)0x0)) &&
     ((pCVar3->carFlags & 4U) != 0)) {
    if (this->lastHumanHitter_ != pCVar3) {
      this->lastHumanHitter_ = pCVar3;
      this->hitCount_ = 0;
    }
    pCVar2 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_;
    iVar1 = this->hitCount_ + 1;
    this->hitCount_ = iVar1;
    pAVar4 = pCVar2->personality;
    if (pAVar4->attackActivationHits < iVar1) {
      iVar1 = pAVar4->attackTime;
      this->hitCount_ = 0;
      this->attackTicksLeft_ = iVar1;
      return pCVar3->carIndex;
    }
  }
  return -1;
}





