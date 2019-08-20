#include "NFS4.H"
#include "AIH_BTCPERP.H"

// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseCops__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this /*$s2*/)
 // line 63, offset 0x8005f6b4
	/* begin block 1 */
		// Start line: 64
		// Start offset: 0x8005F6B4

		/* begin block 1.1 */
			// Start line: 64
			// Start offset: 0x8005F6B4
			// Variables:
		// 		int carLoop; // $s1

			/* begin block 1.1.1 */
				// Start line: 65
				// Start offset: 0x8005F6E4
				// Variables:
			// 		struct Car_tObj *otherCarObj; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 67
					// Start offset: 0x8005F6FC

					/* begin block 1.1.1.1.1 */
						// Start line: 69
						// Start offset: 0x8005F728
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005F744
					// End Line: 71
				/* end block 1.1.1.1 */
				// End offset: 0x8005F744
				// End Line: 71
			/* end block 1.1.1 */
			// End offset: 0x8005F744
			// End Line: 71
		/* end block 1.1 */
		// End offset: 0x8005F750
		// End Line: 74
	/* end block 1 */
	// End offset: 0x8005F750
	// End Line: 76

void ReleaseCops__15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this)

{
  Car_tObj *pCVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  ppCVar2 = &__Cars_gList_9__;
  while (iVar3 < Cars_gNumCars) {
    pCVar1 = *ppCVar2;
    if (((pCVar1->carFlags & 0x200U) != 0) && ((pCVar1->N).active != '\0')) {
      ReleaseAndStartChase__19AIHigh_BTC_HumanCopP15AIHigh_BTC_Perp
                ((AIHigh_BTC_HumanCop *)(&__highLevelAIObjs_9__)[pCVar1->carIndex],this);
    }
    ppCVar2 = ppCVar2 + 1;
    iVar3 = iVar3 + 1;
  }
  ((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->max_clacc = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HandleCops__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this /*$a0*/)
 // line 82, offset 0x8005f778
	/* begin block 1 */
		// Start line: 83
		// Start offset: 0x8005F778
	/* end block 1 */
	// End offset: 0x8005F778
	// End Line: 83

void HandleCops__15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this)

{
  HandlePullOver__15AIHigh_BTC_Perp(this);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ IsFalseArrest__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this /*$s3*/)
 // line 93, offset 0x8005f798
	/* begin block 1 */
		// Start line: 94
		// Start offset: 0x8005F798
		// Variables:
	// 		int randNum1000; // $v0

		/* begin block 1.1 */
			// Start line: 108
			// Start offset: 0x8005F82C
			// Variables:
		// 		int carLoop; // $s5

			/* begin block 1.1.1 */
				// Start line: 108
				// Start offset: 0x8005F838
				// Variables:
			// 		struct Car_tObj *cop; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 110
					// Start offset: 0x8005F850

					/* begin block 1.1.1.1.1 */
						// Start line: 112
						// Start offset: 0x8005F86C
						// Variables:
					// 		int xDot; // $s2
					// 		int zDot; // $s1
					// 		struct coorddef carCopVector; // stack offset -48
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005F984
					// End Line: 121
				/* end block 1.1.1.1 */
				// End offset: 0x8005F984
				// End Line: 121
			/* end block 1.1.1 */
			// End offset: 0x8005F984
			// End Line: 121
		/* end block 1.1 */
		// End offset: 0x8005F990
		// End Line: 125
	/* end block 1 */
	// End offset: 0x8005F994
	// End Line: 127

/* WARNING: Type propagation algorithm not settling */

int IsFalseArrest__15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  Car_tObj *pCVar7;
  int iVar8;
  Car_tObj **ppCVar9;
  int iVar10;
  
  randtemp = fastRandom * randSeed;
  fastRandom = randtemp & 0xffff;
  if (((((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->carFlags & 4U) == 0) &&
     (0x3d3 < (randtemp >> 8 & 0xffff) * 1000 >> 0x10)) {
    iVar10 = 0;
    ppCVar9 = &__Cars_gList_9__;
    while (iVar10 < Cars_gNumCars) {
      pCVar7 = *ppCVar9;
      if ((pCVar7->carFlags & 0x200U) != 0) {
        iVar6 = (pCVar7->N).position.x -
                (((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).position.x;
        iVar1 = (pCVar7->N).position.y -
                (((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).position.y;
        iVar2 = (pCVar7->N).position.z -
                (((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).position.z;
        uVar3 = fixedmult(iVar6,(((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).orientMat.m[0]);
        uVar4 = fixedmult(iVar1,(((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).orientMat.m[1]);
        uVar5 = fixedmult(iVar2,(((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).orientMat.m[2]);
        iVar8 = uVar3 + uVar4 + uVar5;
        uVar3 = fixedmult(iVar6,(((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).orientMat.m[6]);
        uVar4 = fixedmult(iVar1,(((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).orientMat.m[7]);
        uVar5 = fixedmult(iVar2,(((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).orientMat.m[8]);
        iVar1 = uVar3 + uVar4 + uVar5;
        if (iVar8 < 0) {
          iVar8 = -iVar8;
        }
        if (((0x30000 < iVar8) || (0x80000 < iVar1)) || (iVar1 < 0)) {
          AudioClc_HonkHorn__FP8Car_tObjiii
                    ((this->AIHigh_BasicPerp).AIHigh_Base.carObj_,2,0x80,0x20);
          return 1;
        }
      }
      ppCVar9 = ppCVar9 + 1;
      iVar10 = iVar10 + 1;
    }
  }
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckForControlsPressed__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this /*$a0*/)
 // line 130, offset 0x8005f9b8
	/* begin block 1 */
		// Start line: 131
		// Start offset: 0x8005F9B8
		// Variables:
	// 		int pressed; // $a0

		/* begin block 1.1 */
			// Start line: 132
			// Start offset: 0x8005F9B8

			/* begin block 1.1.1 */
				// Start line: 135
				// Start offset: 0x8005F9D8
				// Variables:
			// 		struct Car_tControl *control; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8005F9FC
			// End Line: 139
		/* end block 1.1 */
		// End offset: 0x8005F9FC
		// End Line: 139

		/* begin block 1.2 */
			// Start line: 141
			// Start offset: 0x8005F9FC

			/* begin block 1.2.1 */
				// Start line: 142
				// Start offset: 0x8005FA2C
				// Variables:
			// 		struct Car_tControl *control; // $v1
			/* end block 1.2.1 */
			// End offset: 0x8005FA50
			// End Line: 146
		/* end block 1.2 */
		// End offset: 0x8005FA50
		// End Line: 146
	/* end block 1 */
	// End offset: 0x8005FA50
	// End Line: 148

int CheckForControlsPressed__15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (((__Cars_gHumanRaceCarList_9__->carFlags & 0x200U) != 0) &&
     ((*(short *)&__Cars_gHumanRaceCarList_9__->control != 0 ||
      ((__Cars_gHumanRaceCarList_9__->control).handBrake == '\x01')))) {
    iVar1 = 1;
  }
  if (((Cars_gNumHumanRaceCars == 2) && ((PTR_8010fa4c->carFlags & 0x200U) != 0)) &&
     ((*(short *)&PTR_8010fa4c->control != 0 || ((PTR_8010fa4c->control).handBrake == '\x01')))) {
    iVar1 = 1;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HandlePullOver__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this /*$s0*/)
 // line 153, offset 0x8005fa58
	/* begin block 1 */
		// Start line: 154
		// Start offset: 0x8005FA58

		/* begin block 1.1 */
			// Start line: 154
			// Start offset: 0x8005FA58

			/* begin block 1.1.1 */
				// Start line: 160
				// Start offset: 0x8005FA7C
				// Variables:
			// 		int userReadyToContinue; // $a0

				/* begin block 1.1.1.1 */
					// Start line: 185
					// Start offset: 0x8005FB38

					/* begin block 1.1.1.1.1 */
						// Start line: 193
						// Start offset: 0x8005FB94

						/* begin block 1.1.1.1.1.1 */
							// Start line: 194
							// Start offset: 0x8005FB94

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 194
								// Start offset: 0x8005FB94
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8005FB94
							// End Line: 194
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8005FB94
						// End Line: 194
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005FB94
					// End Line: 194
				/* end block 1.1.1.1 */
				// End offset: 0x8005FB94
				// End Line: 194
			/* end block 1.1.1 */
			// End offset: 0x8005FB94
			// End Line: 194

			/* begin block 1.1.2 */
				// Start line: 212
				// Start offset: 0x8005FBC0

				/* begin block 1.1.2.1 */
					// Start line: 212
					// Start offset: 0x8005FBC0

					/* begin block 1.1.2.1.1 */
						// Start line: 212
						// Start offset: 0x8005FBC0
						// Variables:
					// 		struct AIHigh_BTC_HumanCop *this; // $v0

						/* begin block 1.1.2.1.1.1 */
							// Start line: 212
							// Start offset: 0x8005FBC0
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x8005FBC0
						// End Line: 212
					/* end block 1.1.2.1.1 */
					// End offset: 0x8005FBC0
					// End Line: 212
				/* end block 1.1.2.1 */
				// End offset: 0x8005FC1C
				// End Line: 223
			/* end block 1.1.2 */
			// End offset: 0x8005FC1C
			// End Line: 223
		/* end block 1.1 */
		// End offset: 0x8005FC1C
		// End Line: 223
	/* end block 1 */
	// End offset: 0x8005FC1C
	// End Line: 223

void HandlePullOver__15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this)

{
  bool bVar1;
  int iVar2;
  Speaker *pSVar3;
  uint uVar4;
  
  if ((this->AIHigh_BasicPerp).AIHigh_Base._vf[1].value == 0) {
    bVar1 = false;
    if (5 < *(int *)(this->caught_ + 0x70)) {
      iVar2 = CheckIfCaught__16AIHigh_BasicPerp((AIHigh_BasicPerp *)this);
      bVar1 = iVar2 != 0;
    }
    if (bVar1) {
      ((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->pullOver = 1;
      (this->AIHigh_BasicPerp).copVSPositionList_[4] = 0x60;
      iVar2 = simGlobal.gameTicks;
      (this->AIHigh_BasicPerp).AIHigh_Base._vf[1].value = 2;
      (this->AIHigh_BasicPerp).copVSPositionList_[5] = iVar2;
    }
  }
  else {
    NotifyCopsOfArrest__15AIHigh_BTC_Perp(this);
    iVar2 = (this->AIHigh_BasicPerp).copVSPositionList_[4] - AI_elapsedTime;
    (this->AIHigh_BasicPerp).copVSPositionList_[4] = iVar2;
    if ((iVar2 < 1) && ((this->AIHigh_BasicPerp).basicPerpInfo_.crime_ == CRIME_NONE)) {
      iVar2 = IsFalseArrest__15AIHigh_BTC_Perp(this);
      if (iVar2 == 0) {
        if ((this->AIHigh_BasicPerp).basicPerpInfo_.crime_ == CRIME_NONE) {
          NotifyHumanCopsOfArrestHud__15AIHigh_BTC_Perp(this);
          (this->AIHigh_BasicPerp).basicPerpInfo_.crime_ = CRIME_SPEEDER;
        }
      }
      else {
        (this->AIHigh_BasicPerp).copVSPositionList_[5] = simGlobal.gameTicks + -0x280;
        NotifyCopsOfFalseArrest__15AIHigh_BTC_Perp(this);
        ((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->pullOver = 0;
        (this->AIHigh_BasicPerp).AIHigh_Base._vf[1].value = 0;
        pSVar3 = Mobile__6SpeechP8Car_tObj(__Cars_gList_9__);
        uVar4 = pSVar3->_vf[0].value;
        (**(code **)(uVar4 + 0x3c))((int)&(pSVar3->fPosition).flags + (int)*(short *)(uVar4 + 0x38))
        ;
      }
    }
    iVar2 = CheckForControlsPressed__15AIHigh_BTC_Perp(this);
    if (((((this->AIHigh_BasicPerp).copVSPositionList_[4] < 1) &&
         ((this->AIHigh_BasicPerp).AIHigh_Base._vf[1].value != 0)) && (iVar2 != 0)) &&
       (((this->AIHigh_BasicPerp).basicPerpInfo_.crime_ == CRIME_SPEEDER &&
        (0x140 < simGlobal.gameTicks - (this->AIHigh_BasicPerp).copVSPositionList_[5])))) {
      (this->AIHigh_BasicPerp).copVSPositionList_[5] = simGlobal.gameTicks;
      (this->AIHigh_BasicPerp).basicPerpInfo_.copsAssigned_[0] = 0;
      NotifyCopsOfArrestComplete__15AIHigh_BTC_Perp(this);
      ((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->pullOver = 0;
      (this->AIHigh_BasicPerp).AIHigh_Base._vf[1].value = 0;
      (this->AIHigh_BasicPerp).basicPerpInfo_.copsAssigned_[1] = 1;
      (this->AIHigh_BasicPerp).basicPerpInfo_.crime_ = CRIME_NONE;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NotifyCopsOfArrest__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this /*$s3*/)
 // line 233, offset 0x8005fc30
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x8005FC30

		/* begin block 1.1 */
			// Start line: 234
			// Start offset: 0x8005FC30
			// Variables:
		// 		int carLoop; // $s1

			/* begin block 1.1.1 */
				// Start line: 237
				// Start offset: 0x8005FC60
				// Variables:
			// 		struct Car_tObj *otherCarObj; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 239
					// Start offset: 0x8005FC78

					/* begin block 1.1.1.1.1 */
						// Start line: 241
						// Start offset: 0x8005FCA4
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005FCC0
					// End Line: 243
				/* end block 1.1.1.1 */
				// End offset: 0x8005FCC0
				// End Line: 243
			/* end block 1.1.1 */
			// End offset: 0x8005FCC0
			// End Line: 243
		/* end block 1.1 */
		// End offset: 0x8005FCCC
		// End Line: 246
	/* end block 1 */
	// End offset: 0x8005FCCC
	// End Line: 246

void NotifyCopsOfArrest__15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this)

{
  Car_tObj *pCVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  ppCVar2 = &__Cars_gList_9__;
  while (iVar3 < Cars_gNumCars) {
    pCVar1 = *ppCVar2;
    if (((pCVar1->carFlags & 0x220U) != 0) && ((pCVar1->N).active != '\0')) {
      StartArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
                ((AIHigh_BTC_Cop *)(&__highLevelAIObjs_9__)[pCVar1->carIndex],this);
    }
    ppCVar2 = ppCVar2 + 1;
    iVar3 = iVar3 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NotifyCopsOfArrestComplete__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this /*$s3*/)
 // line 251, offset 0x8005fce8
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x8005FCE8

		/* begin block 1.1 */
			// Start line: 252
			// Start offset: 0x8005FCE8
			// Variables:
		// 		int carLoop; // $s1

			/* begin block 1.1.1 */
				// Start line: 258
				// Start offset: 0x8005FD18
				// Variables:
			// 		struct Car_tObj *otherCarObj; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 260
					// Start offset: 0x8005FD30

					/* begin block 1.1.1.1.1 */
						// Start line: 262
						// Start offset: 0x8005FD5C
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005FD78
					// End Line: 264
				/* end block 1.1.1.1 */
				// End offset: 0x8005FD78
				// End Line: 264
			/* end block 1.1.1 */
			// End offset: 0x8005FD78
			// End Line: 264
		/* end block 1.1 */
		// End offset: 0x8005FD84
		// End Line: 267
	/* end block 1 */
	// End offset: 0x8005FD84
	// End Line: 267

void NotifyCopsOfArrestComplete__15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this)

{
  Car_tObj *pCVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  ppCVar2 = &__Cars_gList_9__;
  while (iVar3 < Cars_gNumCars) {
    pCVar1 = *ppCVar2;
    if (((pCVar1->carFlags & 0x220U) != 0) && ((pCVar1->N).active != '\0')) {
      FinishArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
                ((AIHigh_BTC_Cop *)(&__highLevelAIObjs_9__)[pCVar1->carIndex],this);
    }
    ppCVar2 = ppCVar2 + 1;
    iVar3 = iVar3 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NotifyCopsOfFalseArrest__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this /*$s3*/)
 // line 271, offset 0x8005fda0
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x8005FDA0

		/* begin block 1.1 */
			// Start line: 272
			// Start offset: 0x8005FDA0
			// Variables:
		// 		int carLoop; // $s1

			/* begin block 1.1.1 */
				// Start line: 275
				// Start offset: 0x8005FDD0
				// Variables:
			// 		struct Car_tObj *otherCarObj; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 277
					// Start offset: 0x8005FDE8

					/* begin block 1.1.1.1.1 */
						// Start line: 279
						// Start offset: 0x8005FE14
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005FE30
					// End Line: 281
				/* end block 1.1.1.1 */
				// End offset: 0x8005FE30
				// End Line: 281
			/* end block 1.1.1 */
			// End offset: 0x8005FE30
			// End Line: 281
		/* end block 1.1 */
		// End offset: 0x8005FE3C
		// End Line: 284
	/* end block 1 */
	// End offset: 0x8005FE3C
	// End Line: 284

void NotifyCopsOfFalseArrest__15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this)

{
  Car_tObj *pCVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  ppCVar2 = &__Cars_gList_9__;
  while (iVar3 < Cars_gNumCars) {
    pCVar1 = *ppCVar2;
    if (((pCVar1->carFlags & 0x220U) != 0) && ((pCVar1->N).active != '\0')) {
      FalseArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
                ((AIHigh_BTC_Cop *)(&__highLevelAIObjs_9__)[pCVar1->carIndex],this);
    }
    ppCVar2 = ppCVar2 + 1;
    iVar3 = iVar3 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NotifyHumanCopsOfArrestHud__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this /*$s2*/)
 // line 288, offset 0x8005fe58
	/* begin block 1 */
		// Start line: 289
		// Start offset: 0x8005FE58

		/* begin block 1.1 */
			// Start line: 289
			// Start offset: 0x8005FE58
			// Variables:
		// 		int carLoop; // $s1

			/* begin block 1.1.1 */
				// Start line: 292
				// Start offset: 0x8005FE88
				// Variables:
			// 		struct Car_tObj *otherCarObj; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 294
					// Start offset: 0x8005FEA0

					/* begin block 1.1.1.1.1 */
						// Start line: 296
						// Start offset: 0x8005FECC
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005FEE8
					// End Line: 299
				/* end block 1.1.1.1 */
				// End offset: 0x8005FEE8
				// End Line: 299
			/* end block 1.1.1 */
			// End offset: 0x8005FEE8
			// End Line: 299
		/* end block 1.1 */
		// End offset: 0x8005FEF4
		// End Line: 302
	/* end block 1 */
	// End offset: 0x8005FEF4
	// End Line: 302

void NotifyHumanCopsOfArrestHud__15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this)

{
  Car_tObj *pCVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  ppCVar2 = &__Cars_gList_9__;
  while (iVar3 < Cars_gNumCars) {
    pCVar1 = *ppCVar2;
    if (((pCVar1->carFlags & 0x200U) != 0) && ((pCVar1->N).active != '\0')) {
      HudOn__19AIHigh_BTC_HumanCopP15AIHigh_BTC_PerpiP8Car_tObj
                ((AIHigh_BTC_HumanCop *)(&__highLevelAIObjs_9__)[pCVar1->carIndex],this,0,
                 (Car_tObj *)(this->AIHigh_BasicPerp).beatingTicksLeft_);
    }
    ppCVar2 = ppCVar2 + 1;
    iVar3 = iVar3 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearForNewStage__15AIHigh_BTC_PerpP19AIHigh_BTC_HumanCop(struct AIHigh_BTC_Perp *this /*$s0*/, struct AIHigh_BTC_HumanCop *chaserCop /*$s1*/)
 // line 304, offset 0x8005ff10
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x8005FF10

		/* begin block 1.1 */
			// Start line: 305
			// Start offset: 0x8005FF10

			/* begin block 1.1.1 */
				// Start line: 305
				// Start offset: 0x8005FF10

				/* begin block 1.1.1.1 */
					// Start line: 305
					// Start offset: 0x8005FF10

					/* begin block 1.1.1.1.1 */
						// Start line: 305
						// Start offset: 0x8005FF10
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005FF10
					// End Line: 305
				/* end block 1.1.1.1 */
				// End offset: 0x8005FF10
				// End Line: 305

				/* begin block 1.1.1.2 */
					// Start line: 305
					// Start offset: 0x8005FF10

					/* begin block 1.1.1.2.1 */
						// Start line: 305
						// Start offset: 0x8005FF10
					/* end block 1.1.1.2.1 */
					// End offset: 0x8005FF10
					// End Line: 305
				/* end block 1.1.1.2 */
				// End offset: 0x8005FF10
				// End Line: 305
			/* end block 1.1.1 */
			// End offset: 0x8005FF10
			// End Line: 305
		/* end block 1.1 */
		// End offset: 0x8005FF10
		// End Line: 305

		/* begin block 1.2 */
			// Start line: 305
			// Start offset: 0x8005FF10

			/* begin block 1.2.1 */
				// Start line: 305
				// Start offset: 0x8005FF10
			/* end block 1.2.1 */
			// End offset: 0x8005FF10
			// End Line: 305
		/* end block 1.2 */
		// End offset: 0x8005FF10
		// End Line: 305

		/* begin block 1.3 */
			// Start line: 305
			// Start offset: 0x8005FF10
			// Variables:
		// 		struct AIHigh_Base *this; // $s1

			/* begin block 1.3.1 */
				// Start line: 305
				// Start offset: 0x8005FF10
			/* end block 1.3.1 */
			// End offset: 0x8005FF10
			// End Line: 305
		/* end block 1.3 */
		// End offset: 0x8005FF10
		// End Line: 305

		/* begin block 1.4 */
			// Start line: 305
			// Start offset: 0x8005FF10
			// Variables:
		// 		struct AIHigh_BTC_HumanCop *this; // $s1

			/* begin block 1.4.1 */
				// Start line: 305
				// Start offset: 0x8005FF10
			/* end block 1.4.1 */
			// End offset: 0x8005FF10
			// End Line: 305
		/* end block 1.4 */
		// End offset: 0x8005FF10
		// End Line: 305
	/* end block 1 */
	// End offset: 0x8005FF10
	// End Line: 305

void ClearForNewStage__15AIHigh_BTC_PerpP19AIHigh_BTC_HumanCop
               (AIHigh_BTC_Perp *this,AIHigh_BTC_HumanCop *chaserCop)

{
  Car_tObj *pCVar1;
  
  Clear__16AIHigh_BasicPerp((AIHigh_BasicPerp *)this);
  pCVar1 = (this->AIHigh_BasicPerp).AIHigh_Base.carObj_;
  (this->AIHigh_BasicPerp).lastPullOverTime_ = 0;
  (this->AIHigh_BasicPerp).lastArrestingCop_ = (Car_tObj *)0x0;
  (this->AIHigh_BasicPerp).basicPerpInfo_.copsAssigned_[0] = 1;
  (this->AIHigh_BasicPerp).basicPerpInfo_.copsAssigned_[1] = 0;
  pCVar1->unlap = 0;
  ((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->lap =
       ((chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->lap;
  chaserCop->chaseStartTime_ = 0;
  return;
}



// decompiled code
// original method signature: 
// struct AIHigh_BTC_HumanCop * /*$ra*/ CheckForActivation__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this /*$t3*/)
 // line 322, offset 0x8005ff74
	/* begin block 1 */
		// Start line: 323
		// Start offset: 0x8005FF74

		/* begin block 1.1 */
			// Start line: 323
			// Start offset: 0x8005FF74
			// Variables:
		// 		int carLoop; // $a3

			/* begin block 1.1.1 */
				// Start line: 329
				// Start offset: 0x8005FF9C
				// Variables:
			// 		struct Car_tObj *humanCopCarObj; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 331
					// Start offset: 0x8005FFA8

					/* begin block 1.1.1.1.1 */
						// Start line: 333
						// Start offset: 0x8005FFD4
						// Variables:
					// 		struct AIHigh_BTC_HumanCop *carHigh; // $a1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 334
							// Start offset: 0x8005FFD4

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 334
								// Start offset: 0x8005FFD4
								// Variables:
							// 		struct AIHigh_BTC_HumanCop *this; // $a1

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 334
									// Start offset: 0x8005FFD4
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80060000
								// End Line: 334
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80060000
							// End Line: 334

							/* begin block 1.1.1.1.1.1.2 */
								// Start line: 336
								// Start offset: 0x8006000C

								/* begin block 1.1.1.1.1.1.2.1 */
									// Start line: 338
									// Start offset: 0x8006000C

									/* begin block 1.1.1.1.1.1.2.1.1 */
										// Start line: 343
										// Start offset: 0x80060030
										// Variables:
									// 		int carType; // $a0

										/* begin block 1.1.1.1.1.1.2.1.1.1 */
											// Start line: 343
											// Start offset: 0x80060030
											// Variables:
										// 		struct AIHigh_BTC_HumanCop *this; // $a1

											/* begin block 1.1.1.1.1.1.2.1.1.1.1 */
												// Start line: 343
												// Start offset: 0x80060030
											/* end block 1.1.1.1.1.1.2.1.1.1.1 */
											// End offset: 0x80060030
											// End Line: 343
										/* end block 1.1.1.1.1.1.2.1.1.1 */
										// End offset: 0x80060030
										// End Line: 343
									/* end block 1.1.1.1.1.1.2.1.1 */
									// End offset: 0x80060068
									// End Line: 348
								/* end block 1.1.1.1.1.1.2.1 */
								// End offset: 0x80060068
								// End Line: 348
							/* end block 1.1.1.1.1.1.2 */
							// End offset: 0x80060068
							// End Line: 348
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80060068
						// End Line: 348
					/* end block 1.1.1.1.1 */
					// End offset: 0x80060068
					// End Line: 348
				/* end block 1.1.1.1 */
				// End offset: 0x80060068
				// End Line: 348
			/* end block 1.1.1 */
			// End offset: 0x80060068
			// End Line: 348
		/* end block 1.1 */
		// End offset: 0x80060074
		// End Line: 353
	/* end block 1 */
	// End offset: 0x80060074
	// End Line: 355

/* WARNING: Type propagation algorithm not settling */

AIHigh_BTC_HumanCop * CheckForActivation__15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this)

{
  Car_tObj *pCVar1;
  int iVar2;
  AIHigh_BTC_HumanCop *pAVar3;
  Car_tObj **ppCVar4;
  int iVar5;
  
  iVar5 = 0;
  ppCVar4 = &__Cars_gList_9__;
  do {
    if (Cars_gNumCars <= iVar5) {
      return (AIHigh_BTC_HumanCop *)0x0;
    }
    pCVar1 = *ppCVar4;
    if (((pCVar1->carFlags & 0x200U) != 0) && ((pCVar1->N).active != '\0')) {
      pAVar3 = (AIHigh_BTC_HumanCop *)(&__highLevelAIObjs_9__)[pCVar1->carIndex];
      iVar2 = 0;
      if ((pAVar3->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base._vf[2].value == 0) {
        iVar2 = pAVar3->chaseStartTime_;
      }
      if ((iVar2 != 0) &&
         ((pCVar1 = (this->AIHigh_BasicPerp).AIHigh_Base.carObj_, (pCVar1->carFlags & 4U) != 0 ||
          (GameSetup_gData.perpInfo[(pAVar3->AIHigh_BTC_Cop).chaseIndex_].CarType ==
           pCVar1->carInfo->carType)))) {
        return pAVar3;
      }
    }
    ppCVar4 = ppCVar4 + 1;
    iVar5 = iVar5 + 1;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewStage__20AIHigh_BTC_HumanPerpP19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanPerp *this /*$s0*/, struct AIHigh_BTC_HumanCop *chaserCop /*$s2*/)
 // line 366, offset 0x8006007c
	/* begin block 1 */
		// Start line: 367
		// Start offset: 0x8006007C
		// Variables:
	// 		int placementSide; // $a3
	// 		int placementDirection; // $t0
	// 		int humanDirection; // $s1
	// 		int newLatPos; // stack offset -20
	// 		int throwAway; // stack offset -24

		/* begin block 1.1 */
			// Start line: 367
			// Start offset: 0x8006007C
			// Variables:
		// 		struct AIHigh_BTC_HumanCop *this; // $s2

			/* begin block 1.1.1 */
				// Start line: 367
				// Start offset: 0x8006007C
			/* end block 1.1.1 */
			// End offset: 0x8006007C
			// End Line: 367
		/* end block 1.1 */
		// End offset: 0x8006007C
		// End Line: 367

		/* begin block 1.2 */
			// Start line: 390
			// Start offset: 0x800600F0
			// Variables:
		// 		struct AIHigh_Base *this; // $s2

			/* begin block 1.2.1 */
				// Start line: 390
				// Start offset: 0x800600F0
			/* end block 1.2.1 */
			// End offset: 0x800600F0
			// End Line: 390
		/* end block 1.2 */
		// End offset: 0x800600F0
		// End Line: 390

		/* begin block 1.3 */
			// Start line: 390
			// Start offset: 0x80060114
			// Variables:
		// 		struct AIHigh_Base *this; // $s2

			/* begin block 1.3.1 */
				// Start line: 390
				// Start offset: 0x80060114
			/* end block 1.3.1 */
			// End offset: 0x80060114
			// End Line: 390
		/* end block 1.3 */
		// End offset: 0x80060114
		// End Line: 390

		/* begin block 1.4 */
			// Start line: 390
			// Start offset: 0x80060128
			// Variables:
		// 		struct AIHigh_Base *this; // $s2

			/* begin block 1.4.1 */
				// Start line: 390
				// Start offset: 0x80060128
			/* end block 1.4.1 */
			// End offset: 0x80060128
			// End Line: 390
		/* end block 1.4 */
		// End offset: 0x80060128
		// End Line: 390

		/* begin block 1.5 */
			// Start line: 390
			// Start offset: 0x80060134
			// Variables:
		// 		struct AIHigh_Base *this; // $s2

			/* begin block 1.5.1 */
				// Start line: 390
				// Start offset: 0x80060134
			/* end block 1.5.1 */
			// End offset: 0x80060134
			// End Line: 390
		/* end block 1.5 */
		// End offset: 0x80060134
		// End Line: 390

		/* begin block 1.6 */
			// Start line: 390
			// Start offset: 0x80060150
			// Variables:
		// 		struct AIHigh_Base *this; // $s2

			/* begin block 1.6.1 */
				// Start line: 390
				// Start offset: 0x80060150
			/* end block 1.6.1 */
			// End offset: 0x80060150
			// End Line: 390
		/* end block 1.6 */
		// End offset: 0x80060150
		// End Line: 390

		/* begin block 1.7 */
			// Start line: 390
			// Start offset: 0x80060160
			// Variables:
		// 		struct AIHigh_Base *this; // $s2

			/* begin block 1.7.1 */
				// Start line: 390
				// Start offset: 0x80060160
			/* end block 1.7.1 */
			// End offset: 0x80060160
			// End Line: 390
		/* end block 1.7 */
		// End offset: 0x80060160
		// End Line: 390

		/* begin block 1.8 */
			// Start line: 398
			// Start offset: 0x80060194
			// Variables:
		// 		struct AIHigh_Base *this; // $s2

			/* begin block 1.8.1 */
				// Start line: 398
				// Start offset: 0x80060194
			/* end block 1.8.1 */
			// End offset: 0x80060194
			// End Line: 398
		/* end block 1.8 */
		// End offset: 0x80060194
		// End Line: 398

		/* begin block 1.9 */
			// Start line: 398
			// Start offset: 0x80060194
			// Variables:
		// 		struct AIHigh_Base *this; // $s2

			/* begin block 1.9.1 */
				// Start line: 398
				// Start offset: 0x80060194
			/* end block 1.9.1 */
			// End offset: 0x80060194
			// End Line: 398
		/* end block 1.9 */
		// End offset: 0x80060194
		// End Line: 398

		/* begin block 1.10 */
			// Start line: 398
			// Start offset: 0x80060194
			// Variables:
		// 		struct AIHigh_Base *this; // $s2

			/* begin block 1.10.1 */
				// Start line: 398
				// Start offset: 0x80060194
			/* end block 1.10.1 */
			// End offset: 0x80060194
			// End Line: 398
		/* end block 1.10 */
		// End offset: 0x80060194
		// End Line: 398
	/* end block 1 */
	// End offset: 0x80060194
	// End Line: 398

/* WARNING: Removing unreachable block (ram,0x80060184) */
/* WARNING: Type propagation algorithm not settling */

void NewStage__20AIHigh_BTC_HumanPerpP19AIHigh_BTC_HumanCop
               (AIHigh_BTC_HumanPerp *this,AIHigh_BTC_HumanCop *chaserCop)

{
  short sVar1;
  short sVar2;
  Car_tObj *pCVar3;
  Speaker *pSVar4;
  uint uVar5;
  int iVar6;
  Car_tObj *pCVar7;
  int iVar8;
  int local_18;
  int local_14;
  
  iVar8 = *(int *)&chaserCop->wingmanStatus_;
  *(AIHigh_BTC_HumanCop **)&(this->AIHigh_BTC_Perp).caught_ = chaserCop;
  ClearForNewStage__15AIHigh_BTC_PerpP19AIHigh_BTC_HumanCop((AIHigh_BTC_Perp *)this,chaserCop);
  ReleaseCops__15AIHigh_BTC_Perp((AIHigh_BTC_Perp *)this);
  randtemp = fastRandom * randSeed;
  pCVar7 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  iVar6 = iVar8 * 0x10;
  fastRandom = randtemp & 0xffff;
  sVar2 = (short)iVar6;
  if (iVar6 < 0) {
    pCVar3 = (chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    sVar1 = (pCVar3->N).simRoadInfo.slice;
    if ((int)(pCVar3->N).simRoadInfo.slice + iVar6 < 0) {
      gNumSlices._0_2_ = (short)gNumSlices + sVar1 + sVar2;
    }
    else {
      gNumSlices._0_2_ = sVar1 + sVar2;
    }
    (pCVar7->N).simRoadInfo.slice = (short)gNumSlices;
  }
  else {
    pCVar3 = (chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
    sVar1 = (pCVar3->N).simRoadInfo.slice;
    if ((int)(pCVar3->N).simRoadInfo.slice + iVar6 < gNumSlices) {
      gNumSlices._0_2_ = sVar1 + sVar2;
    }
    else {
      gNumSlices._0_2_ = (sVar1 + sVar2) - (short)gNumSlices;
    }
    (pCVar7->N).simRoadInfo.slice = (short)gNumSlices;
  }
  (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->script).lastReactionIndex[2] =
       iVar8;
  pCVar7 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  (pCVar7->script).lastReactionIndex[3] = (pCVar7->script).lastReactionIndex[2];
  local_14 = 0;
  local_18 = 0;
  AIWorld_FindBarrierLessLaneAndPosition__FP8Car_tObjPiT1
            ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,&local_18,&local_14);
  pCVar7 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  AILife_PlaceCarAtLocation__FP8Car_tObjiiiii
            ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,
             (int)(pCVar7->N).simRoadInfo.slice,local_14,(pCVar7->script).lastReactionIndex[3],0,0);
  pSVar4 = Mobile__6SpeechP8Car_tObj
                     ((chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
  uVar5 = pSVar4->_vf[0].value;
  (**(code **)(uVar5 + 0x84))((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar5 + 0x80));
  pSVar4 = Dispatch__6Speech();
  uVar5 = pSVar4->_vf[0].value;
  (**(code **)(uVar5 + 0xc))
            ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar5 + 8),
             (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
  pSVar4 = Mobile__6SpeechP8Car_tObj
                     ((chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
  uVar5 = pSVar4->_vf[0].value;
  (**(code **)(uVar5 + 0xc))
            ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar5 + 8),
             (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
  pSVar4 = Mobile__6SpeechP8Car_tObj
                     ((chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
  uVar5 = pSVar4->_vf[0].value;
  (**(code **)(uVar5 + 0x34))
            ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar5 + 0x30),
             (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
  TrgSfx_RestartTrgSfx__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HighExecute__20AIHigh_BTC_HumanPerp(struct AIHigh_BTC_HumanPerp *this /*$s0*/)
 // line 421, offset 0x8006029c
	/* begin block 1 */
		// Start line: 422
		// Start offset: 0x8006029C
		// Variables:
	// 		struct AIHigh_BTC_HumanCop *chaserCop; // $v0
	/* end block 1 */
	// End offset: 0x800602E4
	// End Line: 428

void HighExecute__20AIHigh_BTC_HumanPerp(AIHigh_BTC_HumanPerp *this)

{
  AIHigh_BTC_HumanCop *chaserCop;
  
  if (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.basicPerpInfo_.copsAssigned_[1] == 1) &&
     (chaserCop = CheckForActivation__15AIHigh_BTC_Perp((AIHigh_BTC_Perp *)this),
     chaserCop != (AIHigh_BTC_HumanCop *)0x0)) {
    NewStage__20AIHigh_BTC_HumanPerpP19AIHigh_BTC_HumanCop(this,chaserCop);
  }
  else {
    HandleCops__15AIHigh_BTC_Perp((AIHigh_BTC_Perp *)this);
  }
  return;
}



// decompiled code
// original method signature: 
// struct AIHigh_BTC_AIPerp * /*$ra*/ __17AIHigh_BTC_AIPerpP8Car_tObj(struct AIHigh_BTC_AIPerp *this /*$s0*/, struct Car_tObj *carObj /*$a1*/)
 // line 441, offset 0x800602f4
	/* begin block 1 */
		// Start line: 442
		// Start offset: 0x800602F4
		// Variables:
	// 		struct AIHigh_BTC_Perp *this; // $s0

		/* begin block 1.1 */
			// Start line: 442
			// Start offset: 0x800602F4
		/* end block 1.1 */
		// End offset: 0x800602F4
		// End Line: 442
	/* end block 1 */
	// End offset: 0x800602F4
	// End Line: 442

	/* begin block 2 */
		// Start line: 442
		// Start offset: 0x800602F4
	/* end block 2 */
	// End offset: 0x800602F4
	// End Line: 442

/* WARNING: Type propagation algorithm not settling */

AIHigh_BTC_AIPerp * __17AIHigh_BTC_AIPerpP8Car_tObj(AIHigh_BTC_AIPerp *this,Car_tObj *carObj)

{
  Car_tObj *pCVar1;
  int iVar2;
  
  __16AIHigh_BasicPerpP8Car_tObj((AIHigh_BasicPerp *)this,carObj);
  (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base._vf[0].value = 0x80054fe0;
  (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.basicPerpInfo_.copsAssigned_[1] = 1;
  pCVar1 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base._vf[0].value = 0x80054fa0;
  (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.basicPerpInfo_.crime_ = CRIME_NONE;
  (this->AIHigh_BTC_Perp).caught_ = 0;
  (this->AIHigh_BTC_Perp).hudActivated_ = 0;
  (this->AIHigh_BTC_Perp).originalActivationCop_ = (AIHigh_BTC_HumanCop *)0x0;
  this->perpMode_ = PERPMODE_CRUISE;
  this->creationTime_ = 64000;
  this->madeContactTime_ = 0;
  this->timeUntilContact_ = (pCVar1->N).mass;
  iVar2 = (pCVar1->N).massInv;
  this->originalMass_ = 0;
  this->originalMassInv_ = 0;
  this->escapeDuration_ = iVar2;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._17AIHigh_BTC_AIPerp(struct AIHigh_BTC_AIPerp *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 461, offset 0x8006037c
	/* begin block 1 */
		// Start line: 462
		// Start offset: 0x8006037C
		// Variables:
	// 		struct AIHigh_BTC_Perp *this; // $a0
	/* end block 1 */
	// End offset: 0x8006037C
	// End Line: 462

	/* begin block 2 */
		// Start line: 462
		// Start offset: 0x8006037C
		// Variables:
	// 		struct AIHigh_BasicPerp *this; // $a0

		/* begin block 2.1 */
			// Start line: 462
			// Start offset: 0x8006037C

			/* begin block 2.1.1 */
				// Start line: 462
				// Start offset: 0x8006037C
			/* end block 2.1.1 */
			// End offset: 0x8006037C
			// End Line: 462
		/* end block 2.1 */
		// End offset: 0x8006037C
		// End Line: 462
	/* end block 2 */
	// End offset: 0x8006037C
	// End Line: 462

/* WARNING: Type propagation algorithm not settling */

void ___17AIHigh_BTC_AIPerp(AIHigh_BTC_AIPerp *this,int __in_chrg)

{
  int iVar1;
  Car_tObj *pCVar2;
  
  pCVar2 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  iVar1 = this->timeUntilContact_;
  (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base._vf[0].value = 0x80054fa0;
  (pCVar2->N).mass = iVar1;
  (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->N).massInv =
       this->escapeDuration_;
  (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base._vf[0].value = 0x80054e6c;
  ___11AIHigh_Base((AIHigh_Base *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AvoidCops__17AIHigh_BTC_AIPerp(struct AIHigh_BTC_AIPerp *this /*$t1*/)
 // line 488, offset 0x800603cc
	/* begin block 1 */
		// Start line: 489
		// Start offset: 0x800603CC
		// Variables:
	// 		int doBrake; // $t2

		/* begin block 1.1 */
			// Start line: 489
			// Start offset: 0x800603CC

			/* begin block 1.1.1 */
				// Start line: 493
				// Start offset: 0x80060428
				// Variables:
			// 		int xPosition; // $v1
			// 		int zPosition; // $a0
			// 		int xPositionIndex; // $t0
			// 		int zPositionIndex; // $a2
			/* end block 1.1.1 */
			// End offset: 0x800606F0
			// End Line: 544
		/* end block 1.1 */
		// End offset: 0x800606F0
		// End Line: 544
	/* end block 1 */
	// End offset: 0x80060708
	// End Line: 553

/* WARNING: Type propagation algorithm not settling */

void AvoidCops__17AIHigh_BTC_AIPerp(AIHigh_BTC_AIPerp *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Car_tObj *pCVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = this->originalMass_;
  bVar1 = false;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x460) == 0)) {
    pCVar4 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
    iVar3 = *(int *)(iVar2 + 0x554);
    if (iVar3 == (pCVar4->script).lastReactionIndex[3]) {
      iVar5 = this->originalMassInv_;
      iVar6 = iVar5;
      if (iVar5 < 0) {
        iVar6 = -iVar5;
      }
      if (iVar6 < 0x1f40000) {
        iVar6 = ((pCVar4->speechInfo).playerCarIndex - *(int *)(iVar2 + 0x574)) * iVar3;
        iVar5 = iVar5 * iVar3;
        iVar3 = 0;
        if ((-*(int *)(iVar2 + 0x134) <= iVar6) && (iVar3 = 1, *(int *)(iVar2 + 0x134) < iVar6)) {
          iVar3 = 2;
        }
        iVar2 = 0;
        if (iVar5 < 0x190001) {
          iVar6 = *(int *)(this->originalMass_ + 0x13c);
          iVar2 = 1;
          if (((iVar5 <= iVar6) && (iVar2 = 4, -0x190001 < iVar5)) && (iVar2 = 2, iVar5 < -iVar6)) {
            iVar2 = 3;
          }
        }
        if (((&strategyChart)[iVar3 + iVar2 * 3] & 1) != 0) {
          randtemp = fastRandom * randSeed;
          pCVar4 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
          fastRandom = randtemp & 0xffff;
          if ((randtemp >> 8 & 0xffff) * 1000 >> 0x10 <
              (uint)(AI_elapsedTime * 7 + pCVar4->pullOver * 500)) {
            iVar6 = *(int *)(this->originalMass_ + 0x564);
            if (iVar6 < 0) {
              iVar6 = -iVar6;
            }
            if (0x11c71c < iVar6) {
              iVar6 = (pCVar4->script).lastActionTime;
              if (iVar6 < 0) {
                iVar6 = -iVar6;
              }
              if (0x11c71c < iVar6) {
                bVar1 = true;
                goto LAB_800606f0;
              }
            }
          }
        }
        if (((&strategyChart)[iVar3 + iVar2 * 3] & 2) != 0) {
          randtemp = fastRandom * randSeed;
          fastRandom = randtemp & 0xffff;
          if ((randtemp >> 8 & 0xffff) * 1000 >> 0x10 <
              (uint)((&AIHigh_BTC_uTurnProb1000Skills)[GameSetup_gData.skill] * AI_elapsedTime)) {
            iVar2 = *(int *)(this->originalMass_ + 0x564);
            if (iVar2 < 0) {
              iVar2 = -iVar2;
            }
            if (0x11c71c < iVar2) {
              pCVar4 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
              iVar2 = (pCVar4->script).lastActionTime;
              if (iVar2 < 0) {
                iVar2 = -iVar2;
              }
              if ((0x11c71c < iVar2) &&
                 (iVar2 = (pCVar4->script).lastReactionIndex[3],
                 iVar2 == (pCVar4->script).lastReactionIndex[2])) {
                (pCVar4->script).lastReactionIndex[2] = -iVar2;
              }
            }
          }
        }
      }
    }
  }
LAB_800606f0:
  if (!bVar1) {
    ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->pullOver = 0;
    return;
  }
  ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->pullOver = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalculateTimeTillContact__17AIHigh_BTC_AIPerp(struct AIHigh_BTC_AIPerp *this /*$s0*/)
 // line 557, offset 0x80060710
	/* begin block 1 */
		// Start line: 558
		// Start offset: 0x80060710

		/* begin block 1.1 */
			// Start line: 558
			// Start offset: 0x80060710

			/* begin block 1.1.1 */
				// Start line: 564
				// Start offset: 0x80060744
				// Variables:
			// 		int distance; // $a0
			// 		int relVel; // $a1
			/* end block 1.1.1 */
			// End offset: 0x800607A4
			// End Line: 574
		/* end block 1.1 */
		// End offset: 0x800607A4
		// End Line: 574
	/* end block 1 */
	// End offset: 0x800607A4
	// End Line: 574

/* WARNING: Type propagation algorithm not settling */

void CalculateTimeTillContact__17AIHigh_BTC_AIPerp(AIHigh_BTC_AIPerp *this)

{
  int iVar1;
  uint uVar2;
  
  if ((this->originalMass_ != 0) && ((uint)(this->AIHigh_BTC_Perp).hudActivated_ < 2)) {
    uVar2 = (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->script).lastActionTime
            - *(int *)(this->originalMass_ + 0x564);
    iVar1 = 0x3e80000;
    if (0xfffe < uVar2 + 0x7fff) {
      iVar1 = fixeddiv(this->originalMassInv_,uVar2);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x3ff;
      }
      iVar1 = -(iVar1 >> 10);
    }
    this->creationTime_ = iVar1;
    if (-1 < this->creationTime_) {
      return;
    }
  }
  this->creationTime_ = 64000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FindClosestCop__17AIHigh_BTC_AIPerp(struct AIHigh_BTC_AIPerp *this /*$s5*/)
 // line 582, offset 0x800607b4
	/* begin block 1 */
		// Start line: 583
		// Start offset: 0x800607B4
		// Variables:
	// 		int closestCopInMeters; // $s4
	// 		int closestCopInMetersAbs; // $s2
	// 		int closestCarIndex; // $s3

		/* begin block 1.1 */
			// Start line: 583
			// Start offset: 0x800607B4
			// Variables:
		// 		int copLoop; // $s1

			/* begin block 1.1.1 */
				// Start line: 588
				// Start offset: 0x800607F0

				/* begin block 1.1.1.1 */
					// Start line: 590
					// Start offset: 0x80060808

					/* begin block 1.1.1.1.1 */
						// Start line: 591
						// Start offset: 0x80060824
						// Variables:
					// 		int longMetersBetween; // $v1
					// 		int absLongMetersBetween; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006085C
					// End Line: 598
				/* end block 1.1.1.1 */
				// End offset: 0x8006085C
				// End Line: 598
			/* end block 1.1.1 */
			// End offset: 0x8006085C
			// End Line: 598
		/* end block 1.1 */
		// End offset: 0x80060868
		// End Line: 601
	/* end block 1 */
	// End offset: 0x80060890
	// End Line: 610

void FindClosestCop__17AIHigh_BTC_AIPerp(AIHigh_BTC_AIPerp *this)

{
  int iVar1;
  Car_tObj *pCVar2;
  int iVar3;
  Car_tObj **ppCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0x270f0000;
  iVar6 = 0x270f0000;
  iVar7 = -1;
  iVar5 = 0;
  ppCVar4 = &__Cars_gHumanRaceCarList_9__;
  while (iVar5 < Cars_gNumHumanRaceCars) {
    if (((*ppCVar4)->carFlags & 0x200U) != 0) {
      iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0
                        ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,*ppCVar4);
      iVar3 = iVar1;
      if (iVar1 < 0) {
        iVar3 = -iVar1;
      }
      if (iVar3 < iVar6) {
        iVar7 = (*ppCVar4)->carIndex;
        iVar6 = iVar3;
        iVar8 = iVar1;
      }
    }
    ppCVar4 = ppCVar4 + 1;
    iVar5 = iVar5 + 1;
  }
  if (iVar7 == -1) {
    this->originalMass_ = 0;
  }
  else {
    pCVar2 = (&__Cars_gList_9__)[iVar7];
    this->originalMassInv_ = iVar8;
    *(Car_tObj **)&this->originalMass_ = pCVar2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HighExecute__17AIHigh_BTC_AIPerp(struct AIHigh_BTC_AIPerp *this /*$s1*/)
 // line 620, offset 0x800608b4
	/* begin block 1 */
		// Start line: 621
		// Start offset: 0x800608B4

		/* begin block 1.1 */
			// Start line: 632
			// Start offset: 0x800608F4

			/* begin block 1.1.1 */
				// Start line: 633
				// Start offset: 0x80060924

				/* begin block 1.1.1.1 */
					// Start line: 635
					// Start offset: 0x80060924

					/* begin block 1.1.1.1.1 */
						// Start line: 636
						// Start offset: 0x80060924
						// Variables:
					// 		struct Car_tObj *carObj; // $s0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 636
							// Start offset: 0x80060924

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 636
								// Start offset: 0x80060924

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 636
									// Start offset: 0x80060924
									// Variables:
								// 		struct coorddef trafficOffset; // stack offset -32
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80060924
								// End Line: 636
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80060924
							// End Line: 636
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80060924
						// End Line: 636
					/* end block 1.1.1.1.1 */
					// End offset: 0x80060924
					// End Line: 636

					/* begin block 1.1.1.1.2 */
						// Start line: 636
						// Start offset: 0x80060924
						// Variables:
					// 		struct AIHigh_Base *this; // $s1

						/* begin block 1.1.1.1.2.1 */
							// Start line: 636
							// Start offset: 0x80060924
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x80060924
						// End Line: 636
					/* end block 1.1.1.1.2 */
					// End offset: 0x80060924
					// End Line: 636
				/* end block 1.1.1.1 */
				// End offset: 0x80060924
				// End Line: 636

				/* begin block 1.1.1.2 */
					// Start line: 643
					// Start offset: 0x80060924

					/* begin block 1.1.1.2.1 */
						// Start line: 644
						// Start offset: 0x80060924

						/* begin block 1.1.1.2.1.1 */
							// Start line: 645
							// Start offset: 0x80060954

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 652
								// Start offset: 0x80060954

								/* begin block 1.1.1.2.1.1.1.1 */
									// Start line: 655
									// Start offset: 0x80060954

									/* begin block 1.1.1.2.1.1.1.1.1 */
										// Start line: 656
										// Start offset: 0x80060968

										/* begin block 1.1.1.2.1.1.1.1.1.1 */
											// Start line: 657
											// Start offset: 0x80060968

											/* begin block 1.1.1.2.1.1.1.1.1.1.1 */
												// Start line: 660
												// Start offset: 0x80060984

												/* begin block 1.1.1.2.1.1.1.1.1.1.1.1 */
													// Start line: 660
													// Start offset: 0x80060984
													// Variables:
												// 		struct AIHigh_Base *this; // $v0

													/* begin block 1.1.1.2.1.1.1.1.1.1.1.1.1 */
														// Start line: 660
														// Start offset: 0x80060984
													/* end block 1.1.1.2.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x80060984
													// End Line: 660
												/* end block 1.1.1.2.1.1.1.1.1.1.1.1 */
												// End offset: 0x80060984
												// End Line: 660
											/* end block 1.1.1.2.1.1.1.1.1.1.1 */
											// End offset: 0x800609B4
											// End Line: 660
										/* end block 1.1.1.2.1.1.1.1.1.1 */
										// End offset: 0x800609B4
										// End Line: 660
									/* end block 1.1.1.2.1.1.1.1.1 */
									// End offset: 0x800609B4
									// End Line: 662
								/* end block 1.1.1.2.1.1.1.1 */
								// End offset: 0x800609B4
								// End Line: 662
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x800609B4
							// End Line: 662

							/* begin block 1.1.1.2.1.1.2 */
								// Start line: 685
								// Start offset: 0x800609F8

								/* begin block 1.1.1.2.1.1.2.1 */
									// Start line: 693
									// Start offset: 0x80060A28

									/* begin block 1.1.1.2.1.1.2.1.1 */
										// Start line: 694
										// Start offset: 0x80060A48

										/* begin block 1.1.1.2.1.1.2.1.1.1 */
											// Start line: 695
											// Start offset: 0x80060A48

											/* begin block 1.1.1.2.1.1.2.1.1.1.1 */
												// Start line: 696
												// Start offset: 0x80060A5C

												/* begin block 1.1.1.2.1.1.2.1.1.1.1.1 */
													// Start line: 696
													// Start offset: 0x80060A5C
													// Variables:
												// 		struct AIHigh_Base *this; // $v0

													/* begin block 1.1.1.2.1.1.2.1.1.1.1.1.1 */
														// Start line: 696
														// Start offset: 0x80060A5C
													/* end block 1.1.1.2.1.1.2.1.1.1.1.1.1 */
													// End offset: 0x80060A5C
													// End Line: 696
												/* end block 1.1.1.2.1.1.2.1.1.1.1.1 */
												// End offset: 0x80060A5C
												// End Line: 696
											/* end block 1.1.1.2.1.1.2.1.1.1.1 */
											// End offset: 0x80060A94
											// End Line: 701
										/* end block 1.1.1.2.1.1.2.1.1.1 */
										// End offset: 0x80060A94
										// End Line: 701
									/* end block 1.1.1.2.1.1.2.1.1 */
									// End offset: 0x80060AC0
									// End Line: 706
								/* end block 1.1.1.2.1.1.2.1 */
								// End offset: 0x80060AC0
								// End Line: 706

								/* begin block 1.1.1.2.1.1.2.2 */
									// Start line: 713
									// Start offset: 0x80060AC0

									/* begin block 1.1.1.2.1.1.2.2.1 */
										// Start line: 713
										// Start offset: 0x80060AC0
										// Variables:
									// 		struct AIHigh_Base *this; // $v0

										/* begin block 1.1.1.2.1.1.2.2.1.1 */
											// Start line: 713
											// Start offset: 0x80060AC0
										/* end block 1.1.1.2.1.1.2.2.1.1 */
										// End offset: 0x80060AC0
										// End Line: 713
									/* end block 1.1.1.2.1.1.2.2.1 */
									// End offset: 0x80060AC0
									// End Line: 713

									/* begin block 1.1.1.2.1.1.2.2.2 */
										// Start line: 714
										// Start offset: 0x80060AE0

										/* begin block 1.1.1.2.1.1.2.2.2.1 */
											// Start line: 715
											// Start offset: 0x80060AE0

											/* begin block 1.1.1.2.1.1.2.2.2.1.1 */
												// Start line: 715
												// Start offset: 0x80060AE0

												/* begin block 1.1.1.2.1.1.2.2.2.1.1.1 */
													// Start line: 715
													// Start offset: 0x80060AE0
												/* end block 1.1.1.2.1.1.2.2.2.1.1.1 */
												// End offset: 0x80060AE0
												// End Line: 715
											/* end block 1.1.1.2.1.1.2.2.2.1.1 */
											// End offset: 0x80060AE0
											// End Line: 715

											/* begin block 1.1.1.2.1.1.2.2.2.1.2 */
												// Start line: 716
												// Start offset: 0x80060B08

												/* begin block 1.1.1.2.1.1.2.2.2.1.2.1 */
													// Start line: 716
													// Start offset: 0x80060B08
													// Variables:
												// 		struct AIHigh_BTC_HumanCop *this; // $v1

													/* begin block 1.1.1.2.1.1.2.2.2.1.2.1.1 */
														// Start line: 716
														// Start offset: 0x80060B08
													/* end block 1.1.1.2.1.1.2.2.2.1.2.1.1 */
													// End offset: 0x80060B30
													// End Line: 716
												/* end block 1.1.1.2.1.1.2.2.2.1.2.1 */
												// End offset: 0x80060B30
												// End Line: 716
											/* end block 1.1.1.2.1.1.2.2.2.1.2 */
											// End offset: 0x80060B30
											// End Line: 716
										/* end block 1.1.1.2.1.1.2.2.2.1 */
										// End offset: 0x80060B30
										// End Line: 716
									/* end block 1.1.1.2.1.1.2.2.2 */
									// End offset: 0x80060B30
									// End Line: 716
								/* end block 1.1.1.2.1.1.2.2 */
								// End offset: 0x80060B30
								// End Line: 716
							/* end block 1.1.1.2.1.1.2 */
							// End offset: 0x80060B30
							// End Line: 716
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x80060B30
						// End Line: 725
					/* end block 1.1.1.2.1 */
					// End offset: 0x80060B30
					// End Line: 725

					/* begin block 1.1.1.2.2 */
						// Start line: 729
						// Start offset: 0x80060B30

						/* begin block 1.1.1.2.2.1 */
							// Start line: 730
							// Start offset: 0x80060B40

							/* begin block 1.1.1.2.2.1.1 */
								// Start line: 735
								// Start offset: 0x80060B60

								/* begin block 1.1.1.2.2.1.1.1 */
									// Start line: 736
									// Start offset: 0x80060B70

									/* begin block 1.1.1.2.2.1.1.1.1 */
										// Start line: 737
										// Start offset: 0x80060B70
										// Variables:
									// 		struct Car_tObj *carObj; // $s0

										/* begin block 1.1.1.2.2.1.1.1.1.1 */
											// Start line: 737
											// Start offset: 0x80060B70

											/* begin block 1.1.1.2.2.1.1.1.1.1.1 */
												// Start line: 737
												// Start offset: 0x80060B70

												/* begin block 1.1.1.2.2.1.1.1.1.1.1.1 */
													// Start line: 737
													// Start offset: 0x80060B70
													// Variables:
												// 		struct coorddef trafficOffset; // stack offset -32
												/* end block 1.1.1.2.2.1.1.1.1.1.1.1 */
												// End offset: 0x80060B70
												// End Line: 737
											/* end block 1.1.1.2.2.1.1.1.1.1.1 */
											// End offset: 0x80060B70
											// End Line: 737
										/* end block 1.1.1.2.2.1.1.1.1.1 */
										// End offset: 0x80060B70
										// End Line: 737
									/* end block 1.1.1.2.2.1.1.1.1 */
									// End offset: 0x80060B70
									// End Line: 737

									/* begin block 1.1.1.2.2.1.1.1.2 */
										// Start line: 737
										// Start offset: 0x80060B70
										// Variables:
									// 		struct AIHigh_Base *this; // $s1

										/* begin block 1.1.1.2.2.1.1.1.2.1 */
											// Start line: 737
											// Start offset: 0x80060B70
										/* end block 1.1.1.2.2.1.1.1.2.1 */
										// End offset: 0x80060C08
										// End Line: 737
									/* end block 1.1.1.2.2.1.1.1.2 */
									// End offset: 0x80060C08
									// End Line: 737
								/* end block 1.1.1.2.2.1.1.1 */
								// End offset: 0x80060C08
								// End Line: 737
							/* end block 1.1.1.2.2.1.1 */
							// End offset: 0x80060C08
							// End Line: 737
						/* end block 1.1.1.2.2.1 */
						// End offset: 0x80060C08
						// End Line: 737
					/* end block 1.1.1.2.2 */
					// End offset: 0x80060C08
					// End Line: 737
				/* end block 1.1.1.2 */
				// End offset: 0x80060C08
				// End Line: 737

				/* begin block 1.1.1.3 */
					// Start line: 751
					// Start offset: 0x80060C1C
					// Variables:
				// 		struct AIHigh_BTC_HumanCop *chaserCop; // $v0

					/* begin block 1.1.1.3.1 */
						// Start line: 753
						// Start offset: 0x80060C1C

						/* begin block 1.1.1.3.1.1 */
							// Start line: 755
							// Start offset: 0x80060C2C

							/* begin block 1.1.1.3.1.1.1 */
								// Start line: 756
								// Start offset: 0x80060C2C
								// Variables:
							// 		struct AIHigh_Base *this; // $s1

								/* begin block 1.1.1.3.1.1.1.1 */
									// Start line: 756
									// Start offset: 0x80060C2C
								/* end block 1.1.1.3.1.1.1.1 */
								// End offset: 0x80060C2C
								// End Line: 756
							/* end block 1.1.1.3.1.1.1 */
							// End offset: 0x80060C2C
							// End Line: 756
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x80060C2C
						// End Line: 756

						/* begin block 1.1.1.3.1.2 */
							// Start line: 760
							// Start offset: 0x80060C3C

							/* begin block 1.1.1.3.1.2.1 */
								// Start line: 760
								// Start offset: 0x80060C3C
								// Variables:
							// 		struct AIHigh_Base *this; // $s1

								/* begin block 1.1.1.3.1.2.1.1 */
									// Start line: 760
									// Start offset: 0x80060C3C
								/* end block 1.1.1.3.1.2.1.1 */
								// End offset: 0x80060C3C
								// End Line: 760
							/* end block 1.1.1.3.1.2.1 */
							// End offset: 0x80060C3C
							// End Line: 760
						/* end block 1.1.1.3.1.2 */
						// End offset: 0x80060C3C
						// End Line: 760
					/* end block 1.1.1.3.1 */
					// End offset: 0x80060C3C
					// End Line: 760
				/* end block 1.1.1.3 */
				// End offset: 0x80060C3C
				// End Line: 760

				/* begin block 1.1.1.4 */
					// Start line: 772
					// Start offset: 0x80060C48

					/* begin block 1.1.1.4.1 */
						// Start line: 775
						// Start offset: 0x80060C48

						/* begin block 1.1.1.4.1.1 */
							// Start line: 776
							// Start offset: 0x80060C6C

							/* begin block 1.1.1.4.1.1.1 */
								// Start line: 777
								// Start offset: 0x80060C6C

								/* begin block 1.1.1.4.1.1.1.1 */
									// Start line: 780
									// Start offset: 0x80060C88

									/* begin block 1.1.1.4.1.1.1.1.1 */
										// Start line: 780
										// Start offset: 0x80060C88
										// Variables:
									// 		struct AIHigh_Base *this; // $v0

										/* begin block 1.1.1.4.1.1.1.1.1.1 */
											// Start line: 780
											// Start offset: 0x80060C88
										/* end block 1.1.1.4.1.1.1.1.1.1 */
										// End offset: 0x80060C88
										// End Line: 780
									/* end block 1.1.1.4.1.1.1.1.1 */
									// End offset: 0x80060C88
									// End Line: 780
								/* end block 1.1.1.4.1.1.1.1 */
								// End offset: 0x80060CB8
								// End Line: 780
							/* end block 1.1.1.4.1.1.1 */
							// End offset: 0x80060CB8
							// End Line: 780
						/* end block 1.1.1.4.1.1 */
						// End offset: 0x80060CB8
						// End Line: 782

						/* begin block 1.1.1.4.1.2 */
							// Start line: 791
							// Start offset: 0x80060CF0

							/* begin block 1.1.1.4.1.2.1 */
								// Start line: 791
								// Start offset: 0x80060CF0

								/* begin block 1.1.1.4.1.2.1.1 */
									// Start line: 792
									// Start offset: 0x80060D00

									/* begin block 1.1.1.4.1.2.1.1.1 */
										// Start line: 793
										// Start offset: 0x80060D00
										// Variables:
									// 		struct AIHigh_Base *this; // $s1
									// 		struct AIState_Base *newState; // $s0

										/* begin block 1.1.1.4.1.2.1.1.1.1 */
											// Start line: 793
											// Start offset: 0x80060D00
										/* end block 1.1.1.4.1.2.1.1.1.1 */
										// End offset: 0x80060D40
										// End Line: 793
									/* end block 1.1.1.4.1.2.1.1.1 */
									// End offset: 0x80060D40
									// End Line: 793
								/* end block 1.1.1.4.1.2.1.1 */
								// End offset: 0x80060D50
								// End Line: 796
							/* end block 1.1.1.4.1.2.1 */
							// End offset: 0x80060D50
							// End Line: 796
						/* end block 1.1.1.4.1.2 */
						// End offset: 0x80060D50
						// End Line: 796
					/* end block 1.1.1.4.1 */
					// End offset: 0x80060D50
					// End Line: 796
				/* end block 1.1.1.4 */
				// End offset: 0x80060D50
				// End Line: 796
			/* end block 1.1.1 */
			// End offset: 0x80060D50
			// End Line: 799
		/* end block 1.1 */
		// End offset: 0x80060D50
		// End Line: 799
	/* end block 1 */
	// End offset: 0x80060D50
	// End Line: 803

/* WARNING: Type propagation algorithm not settling */

void HighExecute__17AIHigh_BTC_AIPerp(AIHigh_BTC_AIPerp *this)

{
  int iVar1;
  AIHigh_BTC_HumanCop *chaserCop;
  Speaker *pSVar2;
  AIState_Normal *this_00;
  AIState_Base *this_01;
  uint uVar3;
  AIState_Base *pAVar4;
  Car_tObj *otherCarObj;
  Car_tObj *carObj;
  coorddef cStack32;
  
  if ((((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->N).active != '\0') {
    FindClosestCop__17AIHigh_BTC_AIPerp(this);
    CalculateTimeTillContact__17AIHigh_BTC_AIPerp(this);
  }
  switch((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.stateType_) {
  case STATE_NORMAL:
    uVar3 = (this->AIHigh_BTC_Perp).hudActivated_;
    switch(uVar3) {
    case 1:
      if (this->creationTime_ < 0x140) {
        this->perpMode_ = simGlobal.gameTicks;
        if ((this->AIHigh_BTC_Perp).hudActivated_ != 2) {
          pSVar2 = Mobile__6SpeechP8Car_tObj
                             (*(Car_tObj **)&((Car_tObj *)(this->AIHigh_BTC_Perp).caught_)->N);
          uVar3 = pSVar2->_vf[0].value;
          (**(code **)(uVar3 + 0xc))
                    ((int)&(pSVar2->fPosition).flags + (int)*(short *)(uVar3 + 8),
                     (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
        }
        (this->AIHigh_BTC_Perp).hudActivated_ = 2;
        Camera_gInfo.forceFocus = FOCUS_COPANDAI;
        Camera_gInfo.focusOnAICar =
             *(char *)&((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
        camera_info_8010f3bc.forceFocus = FOCUS_COPANDAI;
        camera_info_8010f3bc.focusOnAICar =
             *(char *)&((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
      }
      break;
    case 2:
      (this->AIHigh_BTC_Perp).hudActivated_ = 4;
      break;
    case 4:
      if (this->madeContactTime_ < (int)(simGlobal.gameTicks - this->perpMode_)) {
        (this->AIHigh_BTC_Perp).hudActivated_ = 5;
        ReleaseCops__15AIHigh_BTC_Perp((AIHigh_BTC_Perp *)this);
      }
      if (this->madeContactTime_ + -0x40 < (int)(simGlobal.gameTicks - this->perpMode_)) {
        if (Camera_gInfo.forceFocus != FOCUS_NORMAL) {
          pSVar2 = Mobile__6SpeechP8Car_tObj
                             (*(Car_tObj **)&((Car_tObj *)(this->AIHigh_BTC_Perp).caught_)->N);
          uVar3 = pSVar2->_vf[0].value;
          (**(code **)(uVar3 + 0x34))
                    ((int)&(pSVar2->fPosition).flags + (int)*(short *)(uVar3 + 0x30),
                     (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
          Camera_ResetRelPos__Fi(3);
        }
        Camera_gInfo.forceFocus = FOCUS_NORMAL;
        Camera_gInfo.focusOnAICar =
             *(char *)&((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
        camera_info_8010f3bc.forceFocus = FOCUS_NORMAL;
        camera_info_8010f3bc.focusOnAICar =
             *(char *)&((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
      }
      carObj = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
      otherCarObj = *(Car_tObj **)&((Car_tObj *)(this->AIHigh_BTC_Perp).caught_)->N;
      if ((otherCarObj->script).lastReactionIndex[3] == (carObj->script).lastReactionIndex[3]) {
        iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
        carObj = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
        if (0 < iVar1 * (carObj->script).lastReactionIndex[3]) {
          iVar1 = (carObj->script).lastActionTime;
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          uVar3 = fixedmult(iVar1,(int)&DAT_0000cccc);
          *(uint *)((this->AIHigh_BTC_Perp).caught_ + 0x88) = uVar3;
        }
      }
      break;
    default:
      goto switchD_8006094c_caseD_6;
    case 0:
    case 3:
    case 5:
      break;
    }
    uVar3 = (this->AIHigh_BTC_Perp).hudActivated_;
switchD_8006094c_caseD_6:
    if (uVar3 != 5) break;
    HandleCops__15AIHigh_BTC_Perp((AIHigh_BTC_Perp *)this);
    if ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base._vf[1].value != 2) {
      AvoidCops__17AIHigh_BTC_AIPerp(this);
    }
    if ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.basicPerpInfo_.copsAssigned_[1] == 0) break;
  case STATE_NONE:
    this_01 = (AIState_Base *)__builtin_new(8);
    carObj = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
    __12AIState_BaseP8Car_tObj(this_01,carObj);
    this_01->_vf[0].value = 0x80055000;
    memset(&cStack32,0,0xc);
    cStack32.y = carObj->carIndex * 0xa0000;
    Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
              ((BO_tNewtonObj *)this_01->carObj_,0,&cStack32,1);
    (this_01->carObj_->N).active = '\0';
    pAVar4 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_;
    if (pAVar4 != (AIState_Base *)0x0) {
      uVar3 = pAVar4->_vf[0].value;
      (**(code **)(uVar3 + 0x14))((int)&pAVar4->carObj_ + (int)*(short *)(uVar3 + 0x10),3);
    }
    (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_ = this_01;
    (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.stateType_ = STATE_NONACTIVE;
    (this->AIHigh_BTC_Perp).hudActivated_ = 0;
    break;
  case STATE_NONACTIVE:
    chaserCop = CheckForActivation__15AIHigh_BTC_Perp((AIHigh_BTC_Perp *)this);
    if (chaserCop == (AIHigh_BTC_HumanCop *)0x0) {
      (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.schedulingOff_ = 1;
    }
    else {
      NewStage__17AIHigh_BTC_AIPerpP19AIHigh_BTC_HumanCop(this,chaserCop);
      (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.schedulingOff_ = 0;
    }
    break;
  case STATE_CRUISE:
    if (((this->AIHigh_BTC_Perp).hudActivated_ == 0) && (this->creationTime_ < 0x140)) {
      this->perpMode_ = simGlobal.gameTicks;
      if ((this->AIHigh_BTC_Perp).hudActivated_ != 2) {
        pSVar2 = Mobile__6SpeechP8Car_tObj
                           (*(Car_tObj **)&((Car_tObj *)(this->AIHigh_BTC_Perp).caught_)->N);
        uVar3 = pSVar2->_vf[0].value;
        (**(code **)(uVar3 + 0xc))
                  ((int)&(pSVar2->fPosition).flags + (int)*(short *)(uVar3 + 8),
                   (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
      }
      (this->AIHigh_BTC_Perp).hudActivated_ = 2;
      Camera_gInfo.forceFocus = FOCUS_COPANDAI;
      Camera_gInfo.focusOnAICar =
           *(char *)&((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
      camera_info_8010f3bc.forceFocus = FOCUS_COPANDAI;
      camera_info_8010f3bc.focusOnAICar =
           *(char *)&((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
    }
    else {
      if ((this->AIHigh_BTC_Perp).hudActivated_ == 2) {
        this_00 = (AIState_Normal *)__builtin_new(8);
        this_01 = (AIState_Base *)
                  __14AIState_NormalP8Car_tObj
                            (this_00,(this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
        pAVar4 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_;
        if (pAVar4 != (AIState_Base *)0x0) {
          uVar3 = pAVar4->_vf[0].value;
          (**(code **)(uVar3 + 0x14))((int)&pAVar4->carObj_ + (int)*(short *)(uVar3 + 0x10),3);
        }
        (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_ = this_01;
        (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.stateType_ = STATE_NORMAL;
        (this->AIHigh_BTC_Perp).hudActivated_ = 4;
      }
    }
  }
  StateExecute__12AIState_Base((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NewStage__17AIHigh_BTC_AIPerpP19AIHigh_BTC_HumanCop(struct AIHigh_BTC_AIPerp *this /*$s3*/, struct AIHigh_BTC_HumanCop *chaserCop /*$s0*/)
 // line 807, offset 0x80060d74
	/* begin block 1 */
		// Start line: 808
		// Start offset: 0x80060D74
		// Variables:
	// 		int stage; // $s1
	// 		struct Car_tObj *humanCopCarObj; // $s5
	// 		int placementDistance; // $v1
	// 		int placementSide; // $a3
	// 		int placementDirection; // $t1
	// 		enum ._148 placementSpeed; // $s4
	// 		int randPlacement; // $v0
	// 		int humanDirection; // $t2
	// 		int humanMovement; // $v1
	// 		int newLatPos; // stack offset -36
	// 		int throwAway; // stack offset -40

		/* begin block 1.1 */
			// Start line: 808
			// Start offset: 0x80060D74
			// Variables:
		// 		struct AIHigh_BTC_HumanCop *this; // $s0

			/* begin block 1.1.1 */
				// Start line: 808
				// Start offset: 0x80060D74
			/* end block 1.1.1 */
			// End offset: 0x80060D74
			// End Line: 808
		/* end block 1.1 */
		// End offset: 0x80060D74
		// End Line: 808

		/* begin block 1.2 */
			// Start line: 808
			// Start offset: 0x80060D74
			// Variables:
		// 		struct AIHigh_Base *this; // $s0

			/* begin block 1.2.1 */
				// Start line: 808
				// Start offset: 0x80060D74
			/* end block 1.2.1 */
			// End offset: 0x80060D74
			// End Line: 808
		/* end block 1.2 */
		// End offset: 0x80060D74
		// End Line: 808

		/* begin block 1.3 */
			// Start line: 808
			// Start offset: 0x80060D74
			// Variables:
		// 		int i; // $a0
		/* end block 1.3 */
		// End offset: 0x80060DCC
		// End Line: 821

		/* begin block 1.4 */
			// Start line: 831
			// Start offset: 0x80060E10
			// Variables:
		// 		struct AIHigh_BTC_HumanCop *this; // $s0

			/* begin block 1.4.1 */
				// Start line: 831
				// Start offset: 0x80060E10
			/* end block 1.4.1 */
			// End offset: 0x80060E10
			// End Line: 831
		/* end block 1.4 */
		// End offset: 0x80060E10
		// End Line: 831

		/* begin block 1.5 */
			// Start line: 831
			// Start offset: 0x80060E10
			// Variables:
		// 		struct AIHigh_BTC_HumanCop *this; // $s0

			/* begin block 1.5.1 */
				// Start line: 831
				// Start offset: 0x80060E10
			/* end block 1.5.1 */
			// End offset: 0x80060E10
			// End Line: 831
		/* end block 1.5 */
		// End offset: 0x80060E10
		// End Line: 831

		/* begin block 1.6 */
			// Start line: 831
			// Start offset: 0x80060E10

			/* begin block 1.6.1 */
				// Start line: 863
				// Start offset: 0x80060ED8

				/* begin block 1.6.1.1 */
					// Start line: 867
					// Start offset: 0x80060ED8
					// Variables:
				// 		struct AIHigh_BTC_HumanCop *this; // $s0

					/* begin block 1.6.1.1.1 */
						// Start line: 867
						// Start offset: 0x80060ED8
					/* end block 1.6.1.1.1 */
					// End offset: 0x80060ED8
					// End Line: 867
				/* end block 1.6.1.1 */
				// End offset: 0x80060ED8
				// End Line: 867
			/* end block 1.6.1 */
			// End offset: 0x80060F04
			// End Line: 881

			/* begin block 1.6.2 */
				// Start line: 885
				// Start offset: 0x80060F14

				/* begin block 1.6.2.1 */
					// Start line: 885
					// Start offset: 0x80060F14

					/* begin block 1.6.2.1.1 */
						// Start line: 886
						// Start offset: 0x80060F1C

						/* begin block 1.6.2.1.1.1 */
							// Start line: 890
							// Start offset: 0x80060F1C
							// Variables:
						// 		struct AIHigh_BTC_HumanCop *this; // $s0

							/* begin block 1.6.2.1.1.1.1 */
								// Start line: 890
								// Start offset: 0x80060F1C
							/* end block 1.6.2.1.1.1.1 */
							// End offset: 0x80060F1C
							// End Line: 890
						/* end block 1.6.2.1.1.1 */
						// End offset: 0x80060F1C
						// End Line: 890
					/* end block 1.6.2.1.1 */
					// End offset: 0x80060F1C
					// End Line: 890

					/* begin block 1.6.2.1.2 */
						// Start line: 909
						// Start offset: 0x80060F40

						/* begin block 1.6.2.1.2.1 */
							// Start line: 913
							// Start offset: 0x80060F40
							// Variables:
						// 		struct AIHigh_BTC_HumanCop *this; // $s0

							/* begin block 1.6.2.1.2.1.1 */
								// Start line: 913
								// Start offset: 0x80060F40
							/* end block 1.6.2.1.2.1.1 */
							// End offset: 0x80060F40
							// End Line: 913
						/* end block 1.6.2.1.2.1 */
						// End offset: 0x80060F40
						// End Line: 913
					/* end block 1.6.2.1.2 */
					// End offset: 0x80060F64
					// End Line: 920
				/* end block 1.6.2.1 */
				// End offset: 0x80060F64
				// End Line: 920
			/* end block 1.6.2 */
			// End offset: 0x80060F64
			// End Line: 920
		/* end block 1.6 */
		// End offset: 0x80060F64
		// End Line: 920

		/* begin block 1.7 */
			// Start line: 947
			// Start offset: 0x80061098

			/* begin block 1.7.1 */
				// Start line: 986
				// Start offset: 0x80061200

				/* begin block 1.7.1.1 */
					// Start line: 987
					// Start offset: 0x80061200
					// Variables:
				// 		struct AIHigh_Base *this; // $s3
				// 		struct AIState_Base *newState; // $s0

					/* begin block 1.7.1.1.1 */
						// Start line: 987
						// Start offset: 0x80061200
					/* end block 1.7.1.1.1 */
					// End offset: 0x80061240
					// End Line: 987
				/* end block 1.7.1.1 */
				// End offset: 0x80061240
				// End Line: 987
			/* end block 1.7.1 */
			// End offset: 0x80061240
			// End Line: 987

			/* begin block 1.7.2 */
				// Start line: 993
				// Start offset: 0x80061254

				/* begin block 1.7.2.1 */
					// Start line: 995
					// Start offset: 0x80061254
					// Variables:
				// 		struct AIHigh_Base *this; // $s3
				// 		struct AIState_Base *newState; // $s0

					/* begin block 1.7.2.1.1 */
						// Start line: 995
						// Start offset: 0x80061254
					/* end block 1.7.2.1.1 */
					// End offset: 0x8006129C
					// End Line: 995
				/* end block 1.7.2.1 */
				// End offset: 0x8006129C
				// End Line: 995
			/* end block 1.7.2 */
			// End offset: 0x800612AC
			// End Line: 998
		/* end block 1.7 */
		// End offset: 0x800612AC
		// End Line: 998
	/* end block 1 */
	// End offset: 0x800612AC
	// End Line: 1002

/* WARNING: Type propagation algorithm not settling */

void NewStage__17AIHigh_BTC_AIPerpP19AIHigh_BTC_HumanCop
               (AIHigh_BTC_AIPerp *this,AIHigh_BTC_HumanCop *chaserCop)

{
  bool bVar1;
  short sVar2;
  bool bVar3;
  undefined *currentSpeed;
  uint uVar4;
  AIState_Normal *this_00;
  AIState_Cruise *this_01;
  Speaker *pSVar5;
  int iVar6;
  int iVar7;
  AIState_Base *pAVar8;
  AIState_Base *pAVar9;
  int iVar10;
  short sVar11;
  Car_tObj *pCVar12;
  int iVar13;
  int iVar14;
  Car_tObj *carObj;
  int local_28;
  int local_24;
  
  iVar14 = (chaserCop->AIHigh_BTC_Cop).chaseIndex_;
  carObj = (chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
  *(AIHigh_BTC_HumanCop **)&(this->AIHigh_BTC_Perp).caught_ = chaserCop;
  ClearForNewStage__15AIHigh_BTC_PerpP19AIHigh_BTC_HumanCop((AIHigh_BTC_Perp *)this,chaserCop);
  iVar6 = 0;
  do {
    iVar10 = iVar6 + 1;
    (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->N).damage[iVar6] = 0;
    iVar6 = iVar10;
  } while (iVar10 < 10);
  *(undefined2 *)&(((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).light = 0
  ;
  *(undefined2 *)
   ((int)&(((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).light + 2) = 0;
  if (GameSetup_gData.Time != 0) {
    *(undefined2 *)&(((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).light =
         0x33;
    *(undefined2 *)
     ((int)&(((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).light + 2) = 2;
  }
  *(undefined2 *)&(((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).palCopy =
       0;
  *(undefined2 *)
   ((int)&(((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).palCopy + 2) = 0;
  *(undefined2 *)
   ((int)&(((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).bodyPitch + 2) =
       0;
  ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->max_clacc = 1;
  Camera_gInfo.forceFocus = FOCUS_AI;
  Camera_gInfo.focusOnAICar =
       *(char *)&((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
  camera_info_8010f3bc.forceFocus = FOCUS_AI;
  camera_info_8010f3bc.focusOnAICar =
       *(char *)&((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
  Object_ClearCustomObjects__Fv();
  randtemp = fastRandom * randSeed;
  iVar13 = *(int *)&chaserCop->wingmanStatus_;
  AICop_gRoadBlockState = kAICop_RoadBlockState_None;
  fastRandom = randtemp & 0xffff;
  iVar6 = *(int *)((int)&chaserCop->wingmanStatus_ + 4);
  iVar10 = -1;
  if ((randtemp >> 8 & 0xffff) * 1000 >> 0x10 < 0x14d) {
    bVar1 = false;
    bVar3 = true;
    (carObj->script).lastReactionIndex[5] = 0xd5555;
    chaserCop->needPerp_ = 0xd5555;
    if (iVar6 == 0) {
      this->madeContactTime_ = 0x180;
      iVar7 = 400;
    }
    else {
      this->madeContactTime_ = 0x280;
      iVar7 = 0xe1;
    }
  }
  else {
    bVar1 = iVar6 != 0;
    iVar10 = 1;
    if (bVar1) {
      iVar7 = 0x28;
      (carObj->script).lastReactionIndex[5] = 0x2c71c7;
      chaserCop->needPerp_ = 0x2c71c7;
      iVar6 = 0x1e0;
    }
    else {
      iVar7 = 400;
      (carObj->script).lastReactionIndex[5] = 0x2c71c7;
      chaserCop->needPerp_ = 0x2c71c7;
      iVar6 = 0x180;
    }
    bVar3 = !bVar1;
    this->madeContactTime_ = iVar6;
  }
  iVar6 = (iVar7 / 6) * iVar10 * iVar13;
  pCVar12 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  if (iVar6 < 0) {
    sVar2 = (carObj->N).simRoadInfo.slice;
    sVar11 = sVar2 + (short)iVar6;
    if ((int)sVar2 + iVar6 < 0) {
      sVar11 = (short)gNumSlices + sVar11;
    }
    (pCVar12->N).simRoadInfo.slice = sVar11;
  }
  else {
    sVar2 = (carObj->N).simRoadInfo.slice;
    sVar11 = sVar2 + (short)iVar6;
    if (gNumSlices <= (int)sVar2 + iVar6) {
      sVar11 = sVar11 - (short)gNumSlices;
    }
    (pCVar12->N).simRoadInfo.slice = sVar11;
  }
  iVar10 = iVar10 * iVar13;
  if (bVar1) {
    (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->script).lastReactionIndex[2] =
         iVar10;
  }
  else {
    (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->script).lastReactionIndex[2] =
         -iVar10;
  }
  pCVar12 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  (pCVar12->script).lastReactionIndex[3] = (pCVar12->script).lastReactionIndex[2];
  local_24 = 0;
  local_28 = 0;
  AIWorld_FindBarrierLessLaneAndPosition__FP8Car_tObjPiT1
            ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,&local_28,&local_24);
  pCVar12 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  if (bVar3) {
    currentSpeed = &DAT_001f1c71;
  }
  else {
    currentSpeed = &DAT_0011c71c;
  }
  AILife_PlaceCarAtLocation__FP8Car_tObjiiiii
            ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,
             (int)(pCVar12->N).simRoadInfo.slice,local_24,(pCVar12->script).lastReactionIndex[3],
             (int)currentSpeed,0);
  Camera_Update__Fv();
  uVar4 = fixedmult(GameSetup_gData.perpInfo[iVar14].GlueFactor,
                    (&AITune_BTC)[GameSetup_gData.skill].glueMult);
  ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->rampDesiredLatPos = uVar4;
  uVar4 = fixedmult(GameSetup_gData.perpInfo[iVar14].SpeedFactor,
                    (&AITune_BTC)[GameSetup_gData.skill].speedMult);
  *(uint *)(((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->accTable + 0x5c) = uVar4
  ;
  uVar4 = fixedmult(this->timeUntilContact_,GameSetup_gData.perpInfo[iVar14].WeightFactor);
  uVar4 = fixedmult(uVar4,(&AITune_BTC)[GameSetup_gData.skill].weightMult);
  (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->N).mass = uVar4;
  iVar6 = fixeddiv(0x10000,(((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->N).mass)
  ;
  (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->N).massInv = iVar6;
  AIPerson_SetPersonality__FP8Car_tObji
            ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,
             GameSetup_gData.perpInfo[iVar14].Personality);
  R3DCar_ChangeTrafficColor__FP8Car_tObji
            ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,
             GameSetup_gData.perpInfo[iVar14].Colour);
  ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carInfo->SpeechColour =
       GameSetup_gData.perpInfo[iVar14].SpeechColour;
  ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carInfo->HudColour =
       GameSetup_gData.perpInfo[iVar14].HudColour;
  Hud_InitMap__Fv();
  *(int *)&(this->AIHigh_BTC_Perp).originalActivationCop_ = simGlobal.gameTicks;
  if (bVar3) {
    this_00 = (AIState_Normal *)__builtin_new(8);
    pAVar9 = (AIState_Base *)
             __14AIState_NormalP8Car_tObj
                       (this_00,(this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
    pAVar8 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_;
    if (pAVar8 != (AIState_Base *)0x0) {
      uVar4 = pAVar8->_vf[0].value;
      (**(code **)(uVar4 + 0x14))((int)&pAVar8->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
    }
    (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_ = pAVar9;
    (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.stateType_ = STATE_NORMAL;
    (this->AIHigh_BTC_Perp).hudActivated_ = 1;
  }
  else {
    this_01 = (AIState_Cruise *)__builtin_new(0x14);
    this_01 = __14AIState_CruiseP8Car_tObj12cruiseMode_ti
                        (this_01,(this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,
                         CRUISE_ATFACTOR,0x8000);
    pAVar9 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_;
    if (pAVar9 != (AIState_Base *)0x0) {
      uVar4 = pAVar9->_vf[0].value;
      (**(code **)(uVar4 + 0x14))((int)&pAVar9->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
    }
    *(AIState_Cruise **)&(this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_ = this_01;
    (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.stateType_ = STATE_CRUISE;
    (this->AIHigh_BTC_Perp).hudActivated_ = 0;
  }
  pSVar5 = Mobile__6SpeechP8Car_tObj(carObj);
  uVar4 = pSVar5->_vf[0].value;
  (**(code **)(uVar4 + 0x84))((int)&(pSVar5->fPosition).flags + (int)*(short *)(uVar4 + 0x80));
  pSVar5 = Dispatch__6Speech();
  uVar4 = pSVar5->_vf[0].value;
  (**(code **)(uVar4 + 0xc))
            ((int)&(pSVar5->fPosition).flags + (int)*(short *)(uVar4 + 8),
             (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
  TrgSfx_RestartTrgSfx__Fv();
  return;
}




