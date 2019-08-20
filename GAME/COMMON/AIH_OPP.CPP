#include "NFS4.H"
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
  
  iVar10 = (this->AIHigh_Player).perpChaseInfo_.engagementTime_;
  pCVar4 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  iVar9 = (pCVar4->stats).numFines;
  if ((Cars_gNumCopCars != 0) && (pCVar4->targetLatPos <= simGlobal.gameTicks)) {
    bVar1 = false;
    if (((this->AIHigh_Player).AIHigh_BasicPerp.basicPerpInfo_.copsAssigned_[0] == 0) ||
       ((int)&(((this->AIHigh_Player).AIHigh_BasicPerp.lastArrestingCop_)->N).objID +
        (this->AIHigh_Player).AIHigh_BasicPerp.lastPullOverTime_ == 0)) {
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
      if ((this->AIHigh_Player).perpChaseInfo_.copGameInfo_ !=
          (copGame_t *)(*(int *)(this->AIHigh_Player).lastTriggerCheckSlice_ + -1)) {
        ppCVar6 = &__Cars_gHumanRaceCarList_9__;
        while (iVar7 < iVar3) {
          pCVar4 = *ppCVar6;
          iVar5 = (pCVar4->script).lastActionTime;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if (((0xd5554 < iVar5) &&
              ((((int)(&__highLevelAIObjs_9__)[pCVar4->carIndex][4]._vf[0].value < 2 && (2 < iVar10)
                ) || (1 < (pCVar4->stats).numFines - iVar9)))) && ((int)uVar8 < iVar2 * 0x74)) {
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
    carObj_00 = (&__Cars_gList_9__)[iVar1];
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
      ppCVar6 = &__Cars_gHumanRaceCarList_9__;
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

/* WARNING: Type propagation algorithm not settling */

void HighExecute__15AIHigh_Opponent(AIHigh_Opponent *this)

{
  int aggressionLevel;
  AIState_Chase *this_00;
  Car_tObj *pCVar1;
  AIState_Normal *this_01;
  uint uVar2;
  AIState_Base *pAVar3;
  int iVar4;
  AIState_Base *pAVar5;
  undefined4 uVar6;
  int iVar7;
  coorddef cStack40;
  
  switch((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.stateType_) {
  case STATE_NONE:
    this_01 = (AIState_Normal *)__builtin_new(8);
    pAVar3 = (AIState_Base *)
             __14AIState_NormalP8Car_tObj
                       (this_01,(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_);
    pAVar5 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_;
    if (pAVar5 != (AIState_Base *)0x0) {
      uVar2 = pAVar5->_vf[0].value;
      (**(code **)(uVar2 + 0x14))((int)&pAVar5->carObj_ + (int)*(short *)(uVar2 + 0x10),3);
    }
    (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_ = pAVar3;
    (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.stateType_ = STATE_NORMAL;
    return;
  case STATE_NORMAL:
    HandleCops__13AIHigh_Player((AIHigh_Player *)this);
    CheckForWipeOut__15AIHigh_Opponent(this);
    iVar4 = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                      (&((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_)->script,
                       AISCRIPT_AIREACTION_ATTACK);
    if (iVar4 == -1) {
      iVar4 = DoRearEnder__15AIHigh_Opponent(this);
      if (iVar4 != -1) {
        aggressionLevel = 1;
        goto LAB_800638c0;
      }
      iVar4 = DoProvokedAttack__15AIHigh_Opponent(this);
      aggressionLevel = 3;
      if (iVar4 != -1) goto LAB_800638c0;
    }
    else {
      aggressionLevel = 2;
LAB_800638c0:
      (this->AIHigh_Player).perpChaseInfo_.engagementPercentIncreasePerTick_ = aggressionLevel;
    }
    if ((this->AIHigh_Player).perpChaseInfo_.engagementPercentIncreasePerTick_ != 0) {
      memset(&cStack40,0,0xc);
      iVar7 = (this->AIHigh_Player).perpChaseInfo_.engagementPercentIncreasePerTick_ + -1;
      aggressionLevel = 2;
      if (1 < iVar7) {
        aggressionLevel = iVar7;
      }
      this_00 = (AIState_Chase *)__builtin_new(0x94);
      this_00 = __13AIState_ChaseP8Car_tObjT1P8coorddefiiiii
                          (this_00,(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_,
                           (&__Cars_gList_9__)[iVar4],&cStack40,0x20,0x960000,0x960000,
                           aggressionLevel,0x10000);
      pAVar3 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_;
      if (pAVar3 != (AIState_Base *)0x0) {
        uVar2 = pAVar3->_vf[0].value;
        (**(code **)(uVar2 + 0x14))((int)&pAVar3->carObj_ + (int)*(short *)(uVar2 + 0x10),3);
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
    iVar4 = (this->AIHigh_Player).perpChaseInfo_.engagementPercentIncreasePerTick_;
    if (iVar4 == 2) {
      iVar4 = AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
                        (&((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_)->script,
                         AISCRIPT_AIREACTION_ATTACK);
      if (iVar4 == -1) {
        (this->AIHigh_Player).perpChaseInfo_.engagementPercentIncreasePerTick_ = 0;
      }
    }
    else {
      if (iVar4 < 3) {
        if ((iVar4 == 1) && (iVar4 = DoRearEnder__15AIHigh_Opponent(this), iVar4 == -1)) {
          (this->AIHigh_Player).perpChaseInfo_.engagementPercentIncreasePerTick_ = 0;
        }
      }
      else {
        if ((iVar4 == 3) &&
           (pCVar1 = (Car_tObj *)((int)this->lastHumanHitter_ - AI_elapsedTime),
           this->lastHumanHitter_ = pCVar1, (int)pCVar1 < 1)) {
          (this->AIHigh_Player).perpChaseInfo_.engagementPercentIncreasePerTick_ = 0;
        }
      }
    }
    if ((this->AIHigh_Player).perpChaseInfo_.engagementPercentIncreasePerTick_ == 0) {
      uVar6 = 0xffffffff;
      if (GameSetup_gData.reverseTrack == 0) {
        uVar6 = 1;
      }
      (((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_)->script).lastReactionIndex[2] =
           uVar6;
      this_01 = (AIState_Normal *)__builtin_new(8);
      pAVar3 = (AIState_Base *)
               __14AIState_NormalP8Car_tObj
                         (this_01,(this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_);
      pAVar5 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_;
      if (pAVar5 != (AIState_Base *)0x0) {
        uVar2 = pAVar5->_vf[0].value;
        (**(code **)(uVar2 + 0x14))((int)&pAVar5->carObj_ + (int)*(short *)(uVar2 + 0x10),3);
      }
      (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_ = pAVar3;
      (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.stateType_ = STATE_NORMAL;
      (this->AIHigh_Player).perpChaseInfo_.engagementPercentIncreasePerTick_ = 0;
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

AIHigh_Opponent * __15AIHigh_OpponentP8Car_tObj(AIHigh_Opponent *this,Car_tObj *carObj)

{
  __13AIHigh_PlayerP8Car_tObj((AIHigh_Player *)this,carObj);
  (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base._vf[0].value = 0x800550f8;
  (this->AIHigh_Player).perpChaseInfo_.engagementPercentIncreasePerTick_ = 0;
  (this->AIHigh_Player).perpChaseInfo_.copFreeTicks_ = 0;
  this->attackMode_ = NO_ATTACK;
  this->lastHumanHitter_ = (Car_tObj *)0x0;
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

/* WARNING: Type propagation algorithm not settling */

int DoProvokedAttack__15AIHigh_Opponent(AIHigh_Opponent *this)

{
  AIHigh_tAttackMode AVar1;
  Car_tObj *pCVar2;
  AIPerson_t *pAVar3;
  int iVar4;
  
  pCVar2 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  if (((simGlobal.gameTicks - (pCVar2->N).collision.lastTime < 0xf) &&
      (iVar4 = (int)(pCVar2->N).collision.lastOtherObj, iVar4 != 0)) &&
     ((*(uint *)(iVar4 + 0x260) & 4) != 0)) {
    if ((this->AIHigh_Player).perpChaseInfo_.copFreeTicks_ != iVar4) {
      (this->AIHigh_Player).perpChaseInfo_.copFreeTicks_ = iVar4;
      this->attackMode_ = NO_ATTACK;
    }
    pCVar2 = (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_;
    AVar1 = this->attackMode_ + REAR_END;
    this->attackMode_ = AVar1;
    pAVar3 = pCVar2->personality;
    if (pAVar3->attackActivationHits < (int)AVar1) {
      pCVar2 = (Car_tObj *)pAVar3->attackTime;
      this->attackMode_ = NO_ATTACK;
      this->lastHumanHitter_ = pCVar2;
      return *(int *)(iVar4 + 0x254);
    }
  }
  return -1;
}




