#include "NFS4.H"
#include "AIHIGH.H"

// decompiled code
// original method signature: 
// void /*$ra*/ AIHigh_StartUp__Fv()
 // line 58, offset 0x8005ad94
	/* begin block 1 */
		// Start line: 59
		// Start offset: 0x8005AD94
		// Variables:
	// 		int carLoop; // $s3
	// 		int copCounter; // $s2
	// 		int humanCopCounter; // $s4

		/* begin block 1.1 */
			// Start line: 59
			// Start offset: 0x8005AD94

			/* begin block 1.1.1 */
				// Start line: 67
				// Start offset: 0x8005AE30

				/* begin block 1.1.1.1 */
					// Start line: 68
					// Start offset: 0x8005AE30

					/* begin block 1.1.1.1.1 */
						// Start line: 68
						// Start offset: 0x8005AE3C
						// Variables:
					// 		struct Car_tObj *carObj; // $s1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 77
							// Start offset: 0x8005AEA0
							// Variables:
						// 		struct Car_tObj *carObj; // $s1

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 77
								// Start offset: 0x8005AEA0
								// Variables:
							// 		struct Car_tObj *carObj; // $s1

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 77
									// Start offset: 0x8005AEA0
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8005AEA0
								// End Line: 77
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8005AEA0
							// End Line: 77

							/* begin block 1.1.1.1.1.1.2 */
								// Start line: 77
								// Start offset: 0x8005AEA0
							/* end block 1.1.1.1.1.1.2 */
							// End offset: 0x8005AEA0
							// End Line: 77
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8005AEA0
						// End Line: 77

						/* begin block 1.1.1.1.1.2 */
							// Start line: 77
							// Start offset: 0x8005AF54
							// Variables:
						// 		struct Car_tObj *carObj; // $s1

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 77
								// Start offset: 0x8005AF54
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x8005AF54
							// End Line: 77
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x8005AF78
						// End Line: 77
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005AF94
					// End Line: 79
				/* end block 1.1.1.1 */
				// End offset: 0x8005AFA0
				// End Line: 80
			/* end block 1.1.1 */
			// End offset: 0x8005AFDC
			// End Line: 87

			/* begin block 1.1.2 */
				// Start line: 91
				// Start offset: 0x8005AFE8

				/* begin block 1.1.2.1 */
					// Start line: 92
					// Start offset: 0x8005AFE8

					/* begin block 1.1.2.1.1 */
						// Start line: 92
						// Start offset: 0x8005B004
						// Variables:
					// 		struct Car_tObj *carObj; // $s1

						/* begin block 1.1.2.1.1.1 */
							// Start line: 100
							// Start offset: 0x8005B0C8
							// Variables:
						// 		struct Car_tObj *carObj; // $s1

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 100
								// Start offset: 0x8005B0C8
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x8005B0C8
							// End Line: 100
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x8005B0E8
						// End Line: 100
					/* end block 1.1.2.1.1 */
					// End offset: 0x8005B0E8
					// End Line: 100
				/* end block 1.1.2.1 */
				// End offset: 0x8005B0FC
				// End Line: 102
			/* end block 1.1.2 */
			// End offset: 0x8005B114
			// End Line: 106
		/* end block 1.1 */
		// End offset: 0x8005B114
		// End Line: 106
	/* end block 1 */
	// End offset: 0x8005B114
	// End Line: 106

void AIHigh_StartUp__Fv(void)
{
  AIHigh_BTC_HumanCop *this;
  AIHigh_BTC_AIPerp *this_00;
  AIHigh_BTC_Wingman *this_01;
  __vtbl_ptr_type *p_Var1;
  AIHigh_Human *this_02;
  AIHigh_Opponent *this_03;
  AIHigh_Traffic *this_04;
  AIHigh_Cop *this_05;
  uint uVar2;
  Car_tObj *carObj;
  int iVar3;
  int iVar4;
  int copIndex;
  int copIndex_00;
  Car_tObj **ppCVar5;
  AIHigh_Opponent **ppAVar6;
  
  copIndex_00 = 0;
  AIState_StartUp__Fv();
  if (((GameSetup_gData == 1) || (GameSetup_gData == 5)) &&
     (((uRam00000260 & 0x200) != 0 ||
      ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))) {
    iVar4 = 0;
    ppCVar5 = (Car_tObj **)&_Cars_gList;
    copIndex = 0;
    while (iVar4 < Cars_gNumCars) {
      carObj = *ppCVar5;
      uVar2 = carObj->carFlags;
      if ((uVar2 & 0x200) == 0) {
        if ((uVar2 & 4) == 0) {
          if ((uVar2 & 8) == 0) {
            if ((uVar2 & 0x10) == 0) {
              if ((uVar2 & 0x20) == 0) {
                this_00 = (AIHigh_BTC_AIPerp *)__builtin_new(0x18);
                __11AIHigh_BaseP8Car_tObj((AIHigh_Base *)this_00,carObj);
                p_Var1 = (__vtbl_ptr_type *)&DAT_80054dec;
                goto LAB_8005af74;
              }
              this_01 = (AIHigh_BTC_Wingman *)__builtin_new(0x7c);
              iVar3 = copIndex + 1;
              this_00 = (AIHigh_BTC_AIPerp *)
                        __18AIHigh_BTC_WingmanP8Car_tObji(this_01,carObj,copIndex);
            }
            else {
              this_04 = (AIHigh_Traffic *)__builtin_new(0x24);
              this_00 = (AIHigh_BTC_AIPerp *)__14AIHigh_TrafficP8Car_tObj(this_04,carObj);
              iVar3 = copIndex;
            }
          }
          else {
            this_00 = (AIHigh_BTC_AIPerp *)__builtin_new(0xac);
            this_00 = __17AIHigh_BTC_AIPerpP8Car_tObj(this_00,carObj);
            iVar3 = copIndex;
          }
        }
        else {
          this_00 = (AIHigh_BTC_AIPerp *)__builtin_new(0x88);
          __16AIHigh_BasicPerpP8Car_tObj((AIHigh_BasicPerp *)this_00,carObj);
          (this_00->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base._vf[0] =
               (__vtbl_ptr_type *)&DAT_80054dcc;
          (this_00->AIHigh_BTC_Perp).AIHigh_BasicPerp.basicPerpInfo_.copsAssigned_[1] = 1;
          p_Var1 = (__vtbl_ptr_type *)&table;
          (this_00->AIHigh_BTC_Perp).AIHigh_BasicPerp.basicPerpInfo_.crime_ = CRIME_NONE;
          (this_00->AIHigh_BTC_Perp).caught_ = 0;
LAB_8005af74:
          (this_00->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base._vf[0] = p_Var1;
          iVar3 = copIndex;
        }
      }
      else {
        this = (AIHigh_BTC_HumanCop *)__builtin_new(0x8c);
        this_00 = (AIHigh_BTC_AIPerp *)__19AIHigh_BTC_HumanCopP8Car_tObji(this,carObj,copIndex);
        iVar3 = copIndex + 1;
      }
      *(AIHigh_BTC_AIPerp **)(&_highLevelAIObjs + iVar4) = this_00;
      if ((carObj->carFlags & 0x200U) != 0) {
        copIndex_00 = copIndex_00 + 1;
      }
      ppCVar5 = ppCVar5 + 1;
      iVar4 = iVar4 + 1;
      copIndex = iVar3;
    }
    if (copIndex_00 == 2) {
      uGp00000010 = 3;
    }
    else {
      if ((copIndex_00 == 1) && (copIndex == 1)) {
        uGp00000010 = 4;
      }
      else {
        uGp00000010 = 2;
      }
    }
  }
  else {
    copIndex_00 = 0;
    ppAVar6 = (AIHigh_Opponent **)&_highLevelAIObjs;
    ppCVar5 = (Car_tObj **)&_Cars_gList;
    copIndex = copIndex_00;
    while (copIndex < Cars_gNumCars) {
      carObj = *ppCVar5;
      uVar2 = carObj->carFlags;
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 8) == 0) {
          if ((uVar2 & 0x10) == 0) {
            if ((uVar2 & 0x20) == 0) {
              this_03 = (AIHigh_Opponent *)__builtin_new(0x18);
              __11AIHigh_BaseP8Car_tObj((AIHigh_Base *)this_03,carObj);
              (this_03->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base._vf[0] =
                   (__vtbl_ptr_type *)&DAT_80054dec;
              *ppAVar6 = this_03;
            }
            else {
              this_05 = (AIHigh_Cop *)__builtin_new(0x6c);
              this_03 = (AIHigh_Opponent *)__10AIHigh_CopP8Car_tObji(this_05,carObj,copIndex_00);
              *ppAVar6 = this_03;
              copIndex_00 = copIndex_00 + 1;
            }
          }
          else {
            this_04 = (AIHigh_Traffic *)__builtin_new(0x24);
            this_03 = (AIHigh_Opponent *)__14AIHigh_TrafficP8Car_tObj(this_04,carObj);
            *ppAVar6 = this_03;
          }
        }
        else {
          this_03 = (AIHigh_Opponent *)__builtin_new(0xc0);
          this_03 = __15AIHigh_OpponentP8Car_tObj(this_03,carObj);
          *ppAVar6 = this_03;
        }
      }
      else {
        this_02 = (AIHigh_Human *)__builtin_new(0xb0);
        this_03 = (AIHigh_Opponent *)__12AIHigh_HumanP8Car_tObj(this_02,carObj);
        *ppAVar6 = this_03;
      }
      ppAVar6 = ppAVar6 + 1;
      ppCVar5 = ppCVar5 + 1;
      copIndex = copIndex + 1;
    }
    if (copIndex_00 < 1) {
      uGp00000010 = 0;
    }
    else {
      uGp00000010 = 1;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIHigh_Restart1__Fv()
 // line 110, offset 0x8005b13c
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x8005B13C
	/* end block 1 */
	// End offset: 0x8005B13C
	// End Line: 111

void AIHigh_Restart1__Fv(void)
{
  AIHigh_CleanUp__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIHigh_Restart2__Fv()
 // line 115, offset 0x8005b15c
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x8005B15C
	/* end block 1 */
	// End offset: 0x8005B15C
	// End Line: 116

void AIHigh_Restart2__Fv(void)
{
  AIState_Restart__Fv();
  AIHigh_StartUp__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIHigh_CleanUp__Fv()
 // line 122, offset 0x8005b184
	/* begin block 1 */
		// Start line: 123
		// Start offset: 0x8005B184

		/* begin block 1.1 */
			// Start line: 123
			// Start offset: 0x8005B184
			// Variables:
		// 		int carLoop; // $s1
		/* end block 1.1 */
		// End offset: 0x8005B1F4
		// End Line: 131
	/* end block 1 */
	// End offset: 0x8005B1F4
	// End Line: 132

void AIHigh_CleanUp__Fv(void)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < Cars_gNumCars) {
    piVar2 = &_highLevelAIObjs;
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x14) + 0x14))
                  (iVar1 + (int)*(short *)(*(int *)(iVar1 + 0x14) + 0x10),3);
        *piVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < Cars_gNumCars);
  }
  AIState_CleanUp__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AIHigh_Execute__Fv()
 // line 134, offset 0x8005b210
	/* begin block 1 */
		// Start line: 135
		// Start offset: 0x8005B210

		/* begin block 1.1 */
			// Start line: 135
			// Start offset: 0x8005B210
			// Variables:
		// 		int carLoop; // $s3

			/* begin block 1.1.1 */
				// Start line: 137
				// Start offset: 0x8005B23C
				// Variables:
			// 		struct Car_tObj *carObj; // $a3

				/* begin block 1.1.1.1 */
					// Start line: 139
					// Start offset: 0x8005B254

					/* begin block 1.1.1.1.1 */
						// Start line: 142
						// Start offset: 0x8005B264

						/* begin block 1.1.1.1.1.1 */
							// Start line: 143
							// Start offset: 0x8005B264

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 143
								// Start offset: 0x8005B264

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 143
									// Start offset: 0x8005B264
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8005B264
								// End Line: 143
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8005B264
							// End Line: 143
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8005B2EC
						// End Line: 146
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005B2EC
					// End Line: 146
				/* end block 1.1.1.1 */
				// End offset: 0x8005B2EC
				// End Line: 146
			/* end block 1.1.1 */
			// End offset: 0x8005B2EC
			// End Line: 146
		/* end block 1.1 */
		// End offset: 0x8005B2FC
		// End Line: 149
	/* end block 1 */
	// End offset: 0x8005B2FC
	// End Line: 149

void AIHigh_Execute__Fv(void)
{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int **ppiVar5;
  int iVar6;
  
  iVar6 = 0;
  piVar4 = &_highLevelAIObjs;
  ppiVar5 = (int **)&_Cars_gList;
  do {
    if (Cars_gNumCars <= iVar6) {
      return;
    }
    piVar3 = *ppiVar5;
    if (*piVar4 != 0) {
      bVar1 = false;
      if (*(int *)(*piVar4 + 0xc) == 0) {
        iVar2 = Sched_ExecuteCheck__FiiiiPiN24i
                          (1,0,piVar3[0x23],*piVar3,(int *)&AI_time,&AI_elapsedTime,(int *)&AI_iTime
                           ,piVar3[0x1d7]);
        if (iVar2 != 0) goto LAB_8005b2bc;
      }
      else {
LAB_8005b2bc:
        bVar1 = true;
      }
      if (bVar1) {
        iVar2 = *(int *)(*piVar4 + 0x14);
        (**(code **)(iVar2 + 0xc))(*piVar4 + (int)*(short *)(iVar2 + 8));
      }
    }
    piVar4 = piVar4 + 1;
    ppiVar5 = ppiVar5 + 1;
    iVar6 = iVar6 + 1;
  } while( true );


}




// decompiled code
// original method signature: 
// struct AIHigh_Base * /*$ra*/ __11AIHigh_BaseP8Car_tObj(struct AIHigh_Base *this /*$s0*/, struct Car_tObj *carObj /*$a1*/)
 // line 158, offset 0x8005b318
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x8005B318

		/* begin block 1.1 */
			// Start line: 159
			// Start offset: 0x8005B318

			/* begin block 1.1.1 */
				// Start line: 159
				// Start offset: 0x8005B318
			/* end block 1.1.1 */
			// End offset: 0x8005B318
			// End Line: 159
		/* end block 1.1 */
		// End offset: 0x8005B318
		// End Line: 159

		/* begin block 1.2 */
			// Start line: 159
			// Start offset: 0x8005B318
			// Variables:
		// 		struct AIHigh_Base *this; // $s0

			/* begin block 1.2.1 */
				// Start line: 159
				// Start offset: 0x8005B318
			/* end block 1.2.1 */
			// End offset: 0x8005B394
			// End Line: 163
		/* end block 1.2 */
		// End offset: 0x8005B394
		// End Line: 163

		/* begin block 1.3 */
			// Start line: 163
			// Start offset: 0x8005B394
			// Variables:
		// 		struct AIHigh_Base *this; // $s0

			/* begin block 1.3.1 */
				// Start line: 163
				// Start offset: 0x8005B394
			/* end block 1.3.1 */
			// End offset: 0x8005B394
			// End Line: 163
		/* end block 1.3 */
		// End offset: 0x8005B394
		// End Line: 163
	/* end block 1 */
	// End offset: 0x8005B394
	// End Line: 163

AIHigh_Base * __11AIHigh_BaseP8Car_tObj(AIHigh_Base *this,Car_tObj *carObj)
{
  AIState_Base *this_00;
  AIState_Base *pAVar1;
  
  this->_vf[0] = (__vtbl_ptr_type *)&table;
  this->carObj_ = carObj;
  this->state_ = (AIState_Base *)0x0;
  this->stateType_ = STATE_NONE;
  this_00 = (AIState_Base *)__builtin_new(8);
  __12AIState_BaseP8Car_tObj(this_00,this->carObj_);
  this_00->_vf[0] = (__vtbl_ptr_type *)&DAT_80054e1c;
  pAVar1 = this->state_;
  if (pAVar1 != (AIState_Base *)0x0) {
    (**(code **)(pAVar1->_vf[0] + 0x14))
              ((int)&pAVar1->carObj_ + (int)*(short *)(pAVar1->_vf[0] + 0x10),3);
  }
  this->state_ = this_00;
  this->stateType_ = STATE_NONE;
  this->schedulingOff_ = 0;
  this->lastTrafficTriggerCheckSlice_ = (int)(this->carObj_->N).simRoadInfo.slice;
  return this;


}




// autogenerated function stub: 
// void /*$ra*/ _._11AIHigh_Base(struct AIHigh_Base *this /*$s0*/, int __in_chrg /*$s1*/)
void _._11AIHigh_Base _._11AIHigh_Base(AIHigh_Base *this /*$s0*/this, int __in_chrg /*$s1*/ __in_chrg)
{ // line 169, offset 0x8005b3c4
	/* begin block 1 */
		// Start line: 170
		// Start offset: 0x8005B3C4
	/* end block 1 */
	// End offset: 0x8005B410
	// End Line: 174

}



