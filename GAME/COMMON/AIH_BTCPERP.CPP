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
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &_Cars_gList;
  while (iVar3 < Cars_gNumCars) {
    iVar1 = *piVar2;
    if (((*(uint *)(iVar1 + 0x260) & 0x200) != 0) && (*(char *)(iVar1 + 0x91) != '\0')) {
      ReleaseAndStartChase__19AIHigh_BTC_HumanCopP15AIHigh_BTC_Perp
                ((AIHigh_BTC_HumanCop *)(&_highLevelAIObjs)[*(int *)(iVar1 + 0x254)],this);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
  }
  ((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->wipeOutStartTick = 0;
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

int IsFalseArrest__15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  randtemp = fastRandom;
  uVar1 = fastRandom & 0xffff;
  uVar6 = fastRandom >> 8;
  fastRandom = uVar1;
  if (((((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->carFlags & 4U) == 0) &&
     (fastRandom = uVar1, 0x3d3 < (uVar6 & 0xffff) * 1000 >> 0x10)) {
    iVar10 = 0;
    piVar9 = &_Cars_gList;
    fastRandom = uVar1;
    while (iVar10 < Cars_gNumCars) {
      iVar8 = *piVar9;
      if ((*(uint *)(iVar8 + 0x260) & 0x200) != 0) {
        iVar7 = *(int *)(iVar8 + 0xa0) -
                (((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).position.x;
        iVar2 = *(int *)(iVar8 + 0xa4) -
                (((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).position.y;
        iVar3 = *(int *)(iVar8 + 0xa8) -
                (((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).position.z;
        iVar4 = fixedmult(iVar7,(((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).orientMat.m[0]);
        iVar5 = fixedmult(iVar2,(((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).orientMat.m[1]);
        iVar8 = fixedmult(iVar3,(((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).orientMat.m[2]);
        iVar8 = iVar4 + iVar5 + iVar8;
        iVar4 = fixedmult(iVar7,(((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).orientMat.m[6]);
        iVar2 = fixedmult(iVar2,(((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).orientMat.m[7]);
        iVar3 = fixedmult(iVar3,(((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->N).orientMat.m[8]);
        iVar3 = iVar4 + iVar2 + iVar3;
        if (iVar8 < 0) {
          iVar8 = -iVar8;
        }
        if (((0x30000 < iVar8) || (0x80000 < iVar3)) || (iVar3 < 0)) {
          AudioClc_HonkHorn__FP8Car_tObjiii
                    ((this->AIHigh_BasicPerp).AIHigh_Base.carObj_,2,0x80,0x20);
          return 1;
        }
      }
      piVar9 = piVar9 + 1;
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
  if (((uRam00000260 & 0x200) != 0) && ((sRam0000043c != 0 || (cRam00000445 == '\x01')))) {
    iVar1 = 1;
  }
  if (((Cars_gNumHumanRaceCars == 2) && ((uRam00000260 & 0x200) != 0)) &&
     ((sRam0000043c != 0 || (cRam00000445 == '\x01')))) {
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
  
  if ((this->AIHigh_BasicPerp).AIHigh_Base._vf[1] == (__vtbl_ptr_type *)0x0) {
    bVar1 = false;
    if (5 < *(int *)(this->caught_ + 0x70)) {
      iVar2 = CheckIfCaught__16AIHigh_BasicPerp((AIHigh_BasicPerp *)this);
      bVar1 = iVar2 != 0;
    }
    if (bVar1) {
      ((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->pullOver = 1;
      (this->AIHigh_BasicPerp).copVSPositionList_[4] = 0x60;
      (this->AIHigh_BasicPerp).AIHigh_Base._vf[1] = (__vtbl_ptr_type *)0x2;
      (this->AIHigh_BasicPerp).copVSPositionList_[5] = 0;
    }
  }
  else {
    NotifyCopsOfArrest__15AIHigh_BTC_Perp(this);
    iVar2 = (this->AIHigh_BasicPerp).copVSPositionList_[4];
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
        (this->AIHigh_BasicPerp).copVSPositionList_[5] = -0x280;
        NotifyCopsOfFalseArrest__15AIHigh_BTC_Perp(this);
        ((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->pullOver = 0;
        (this->AIHigh_BasicPerp).AIHigh_Base._vf[1] = (__vtbl_ptr_type *)0x0;
        pSVar3 = Mobile__6SpeechP8Car_tObj(_Cars_gList);
        (**(code **)(pSVar3->_vf[0] + 0x3c))
                  ((int)&(pSVar3->fPosition).flags + (int)*(short *)(pSVar3->_vf[0] + 0x38));
      }
    }
    iVar2 = CheckForControlsPressed__15AIHigh_BTC_Perp(this);
    if (((((this->AIHigh_BasicPerp).copVSPositionList_[4] < 1) &&
         ((this->AIHigh_BasicPerp).AIHigh_Base._vf[1] != (__vtbl_ptr_type *)0x0)) && (iVar2 != 0))
       && (((this->AIHigh_BasicPerp).basicPerpInfo_.crime_ == CRIME_SPEEDER &&
           (0x140 < -(this->AIHigh_BasicPerp).copVSPositionList_[5])))) {
      (this->AIHigh_BasicPerp).copVSPositionList_[5] = 0;
      (this->AIHigh_BasicPerp).basicPerpInfo_.copsAssigned_[0] = 0;
      NotifyCopsOfArrestComplete__15AIHigh_BTC_Perp(this);
      ((this->AIHigh_BasicPerp).AIHigh_Base.carObj_)->pullOver = 0;
      (this->AIHigh_BasicPerp).AIHigh_Base._vf[1] = (__vtbl_ptr_type *)0x0;
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
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &_Cars_gList;
  while (iVar3 < Cars_gNumCars) {
    iVar1 = *piVar2;
    if (((*(uint *)(iVar1 + 0x260) & 0x220) != 0) && (*(char *)(iVar1 + 0x91) != '\0')) {
      StartArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
                ((AIHigh_BTC_Cop *)(&_highLevelAIObjs)[*(int *)(iVar1 + 0x254)],this);
    }
    piVar2 = piVar2 + 1;
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
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &_Cars_gList;
  while (iVar3 < Cars_gNumCars) {
    iVar1 = *piVar2;
    if (((*(uint *)(iVar1 + 0x260) & 0x220) != 0) && (*(char *)(iVar1 + 0x91) != '\0')) {
      FinishArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
                ((AIHigh_BTC_Cop *)(&_highLevelAIObjs)[*(int *)(iVar1 + 0x254)],this);
    }
    piVar2 = piVar2 + 1;
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
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &_Cars_gList;
  while (iVar3 < Cars_gNumCars) {
    iVar1 = *piVar2;
    if (((*(uint *)(iVar1 + 0x260) & 0x220) != 0) && (*(char *)(iVar1 + 0x91) != '\0')) {
      FalseArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp
                ((AIHigh_BTC_Cop *)(&_highLevelAIObjs)[*(int *)(iVar1 + 0x254)],this);
    }
    piVar2 = piVar2 + 1;
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
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &_Cars_gList;
  while (iVar3 < Cars_gNumCars) {
    iVar1 = *piVar2;
    if (((*(uint *)(iVar1 + 0x260) & 0x200) != 0) && (*(char *)(iVar1 + 0x91) != '\0')) {
      HudOn__19AIHigh_BTC_HumanCopP15AIHigh_BTC_PerpiP8Car_tObj
                ((AIHigh_BTC_HumanCop *)(&_highLevelAIObjs)[*(int *)(iVar1 + 0x254)],this,0,
                 (Car_tObj *)(this->AIHigh_BasicPerp).beatingTicksLeft_);
    }
    piVar2 = piVar2 + 1;
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

void ClearForNewStage__15AIHigh_BTC_PerpP19AIHigh_BTC_HumanCop( (AIHigh_BTC_Perp *this,AIHigh_BTC_HumanCop *chaserCop)
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

AIHigh_BTC_HumanCop * CheckForActivation__15AIHigh_BTC_Perp(AIHigh_BTC_Perp *this)
{
  int iVar1;
  Car_tObj *pCVar2;
  AIHigh_BTC_HumanCop *pAVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar4 = &_Cars_gList;
  do {
    if (Cars_gNumCars <= iVar5) {
      return (AIHigh_BTC_HumanCop *)0x0;
    }
    iVar1 = *piVar4;
    if (((*(uint *)(iVar1 + 0x260) & 0x200) != 0) && (*(char *)(iVar1 + 0x91) != '\0')) {
      pAVar3 = (AIHigh_BTC_HumanCop *)(&_highLevelAIObjs)[*(int *)(iVar1 + 0x254)];
      iVar1 = 0;
      if ((pAVar3->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base._vf[2] == (__vtbl_ptr_type *)0x0) {
        iVar1 = pAVar3->chaseStartTime_;
      }
      if ((iVar1 != 0) &&
         ((pCVar2 = (this->AIHigh_BasicPerp).AIHigh_Base.carObj_, (pCVar2->carFlags & 4U) != 0 ||
          ((&DAT_801133a8)[(pAVar3->AIHigh_BTC_Cop).chaseIndex_ * 0xd] == pCVar2->carInfo->carType))
         )) {
        return pAVar3;
      }
    }
    piVar4 = piVar4 + 1;
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

void NewStage__20AIHigh_BTC_HumanPerpP19AIHigh_BTC_HumanCop( (AIHigh_BTC_HumanPerp *this,AIHigh_BTC_HumanCop *chaserCop)
{
  short sVar1;
  Speaker *pSVar2;
  Car_tObj *pCVar3;
  speechIntensityType sVar4;
  int local_18;
  int local_14;
  
  sVar4 = chaserCop->wingmanStatus_;
  *(AIHigh_BTC_HumanCop **)&(this->AIHigh_BTC_Perp).caught_ = chaserCop;
  ClearForNewStage__15AIHigh_BTC_PerpP19AIHigh_BTC_HumanCop((AIHigh_BTC_Perp *)this,chaserCop);
  ReleaseCops__15AIHigh_BTC_Perp((AIHigh_BTC_Perp *)this);
  randtemp = fastRandom;
  pCVar3 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  fastRandom = fastRandom & 0xffff;
  sVar1 = (short)(sVar4 * 0x10);
  if ((int)(sVar4 * 0x10) < 0) {
    (pCVar3->N).simRoadInfo.slice =
         (((chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->N).simRoadInfo.slice +
         sVar1;
  }
  else {
    (pCVar3->N).simRoadInfo.slice =
         (((chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_)->N).simRoadInfo.slice +
         sVar1;
  }
  if (false) {
    (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->speechInfo).speechIntensity =
         -sVar4;
  }
  else {
    (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->speechInfo).speechIntensity =
         sVar4;
  }
  pCVar3 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  (pCVar3->speechInfo).speechSource = (pCVar3->speechInfo).speechIntensity;
  local_14 = 0;
  local_18 = 0;
  AIWorld_FindBarrierLessLaneAndPosition__FP8Car_tObjPiT1
            ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,&local_18,&local_14);
  pCVar3 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  AILife_PlaceCarAtLocation__FP8Car_tObjiiiii
            ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,
             (int)(pCVar3->N).simRoadInfo.slice,local_14,(pCVar3->speechInfo).speechSource,0,0);
  pSVar2 = Mobile__6SpeechP8Car_tObj
                     ((chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
  (**(code **)(pSVar2->_vf[0] + 0x84))
            ((int)&(pSVar2->fPosition).flags + (int)*(short *)(pSVar2->_vf[0] + 0x80));
  pSVar2 = Dispatch__6Speech();
  (**(code **)(pSVar2->_vf[0] + 0xc))
            ((int)&(pSVar2->fPosition).flags + (int)*(short *)(pSVar2->_vf[0] + 8),
             (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
  pSVar2 = Mobile__6SpeechP8Car_tObj
                     ((chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
  (**(code **)(pSVar2->_vf[0] + 0xc))
            ((int)&(pSVar2->fPosition).flags + (int)*(short *)(pSVar2->_vf[0] + 8),
             (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
  pSVar2 = Mobile__6SpeechP8Car_tObj
                     ((chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_);
  (**(code **)(pSVar2->_vf[0] + 0x34))
            ((int)&(pSVar2->fPosition).flags + (int)*(short *)(pSVar2->_vf[0] + 0x30),
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

AIHigh_BTC_AIPerp * __17AIHigh_BTC_AIPerpP8Car_tObj(AIHigh_BTC_AIPerp *this,Car_tObj *carObj)
{
  Car_tObj *pCVar1;
  int iVar2;
  
  __16AIHigh_BasicPerpP8Car_tObj((AIHigh_BasicPerp *)this,carObj);
  (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base._vf[0] = (__vtbl_ptr_type *)&DAT_80054fe0;
  (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.basicPerpInfo_.copsAssigned_[1] = 1;
  pCVar1 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base._vf[0] = (__vtbl_ptr_type *)&table;
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




// autogenerated function stub: 
// void /*$ra*/ _._17AIHigh_BTC_AIPerp(struct AIHigh_BTC_AIPerp *this /*$a0*/, int __in_chrg /*$a1*/)
void _._17AIHigh_BTC_AIPerp _._17AIHigh_BTC_AIPerp(AIHigh_BTC_AIPerp *this /*$a0*/this, int __in_chrg /*$a1*/ __in_chrg)
{ // line 461, offset 0x8006037c
	/* begin block 1 */
		// Start line: 462
		// Start offset: 0x8006037C
		// Variables:
			struct AIHigh_BTC_Perp *this; // $a0
	/* end block 1 */
	// End offset: 0x8006037C
	// End Line: 462

	/* begin block 2 */
		// Start line: 462
		// Start offset: 0x8006037C
		// Variables:
			struct AIHigh_BasicPerp *this; // $a0

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

void AvoidCops__17AIHigh_BTC_AIPerp(AIHigh_BTC_AIPerp *this)
{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  speechIntensityType sVar5;
  speechSourceType sVar6;
  Car_tObj *pCVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = this->originalMass_;
  bVar1 = false;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x460) == 0)) {
    pCVar7 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
    sVar6 = *(speechSourceType *)(iVar4 + 0x554);
    if (sVar6 == (pCVar7->speechInfo).speechSource) {
      iVar8 = this->originalMassInv_;
      iVar9 = iVar8;
      if (iVar8 < 0) {
        iVar9 = -iVar8;
      }
      if (iVar9 < 0x1f40000) {
        iVar10 = (pCVar7->desiredSpeed - *(int *)(iVar4 + 0x574)) * sVar6;
        iVar8 = iVar8 * sVar6;
        iVar9 = 0;
        if ((-*(int *)(iVar4 + 0x134) <= iVar10) && (iVar9 = 1, *(int *)(iVar4 + 0x134) < iVar10)) {
          iVar9 = 2;
        }
        iVar4 = 0;
        if (iVar8 < 0x190001) {
          iVar10 = *(int *)(this->originalMass_ + 0x13c);
          iVar4 = 1;
          if (((iVar8 <= iVar10) && (iVar4 = 4, -0x190001 < iVar8)) && (iVar4 = 2, iVar8 < -iVar10))
          {
            iVar4 = 3;
          }
        }
        if (((&strategyChart)[iVar9 + iVar4 * 3] & 1) != 0) {
          randtemp = fastRandom;
          pCVar7 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
          uVar3 = fastRandom & 0xffff;
          uVar2 = fastRandom >> 8;
          fastRandom = uVar3;
          if ((uVar2 & 0xffff) * 1000 >> 0x10 < (uint)(pCVar7->pullOver * 500)) {
            iVar8 = *(int *)(this->originalMass_ + 0x564);
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            fastRandom = uVar3;
            if (0x11c71c < iVar8) {
              iVar8 = pCVar7->carInLane;
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              fastRandom = uVar3;
              if (0x11c71c < iVar8) {
                bVar1 = true;
                fastRandom = uVar3;
                goto LAB_800606f0;
              }
            }
          }
        }
        if (((&strategyChart)[iVar9 + iVar4 * 3] & 2) != 0) {
          randtemp = fastRandom;
          uVar2 = fastRandom & 0xffff;
          fastRandom = uVar2;
          if (false) {
            iVar4 = *(int *)(this->originalMass_ + 0x564);
            if (iVar4 < 0) {
              iVar4 = -iVar4;
            }
            fastRandom = uVar2;
            if (0x11c71c < iVar4) {
              pCVar7 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
              iVar4 = pCVar7->carInLane;
              if (iVar4 < 0) {
                iVar4 = -iVar4;
              }
              fastRandom = uVar2;
              if ((0x11c71c < iVar4) &&
                 (sVar5 = (pCVar7->speechInfo).speechSource, fastRandom = uVar2,
                 sVar5 == (pCVar7->speechInfo).speechIntensity)) {
                fastRandom = uVar2;
                (pCVar7->speechInfo).speechIntensity = -sVar5;
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

void CalculateTimeTillContact__17AIHigh_BTC_AIPerp(AIHigh_BTC_AIPerp *this)
{
  int iVar1;
  
  if ((this->originalMass_ != 0) && ((uint)(this->AIHigh_BTC_Perp).hudActivated_ < 2)) {
    iVar1 = 0x3e80000;
    if (0xfffe < (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carInLane -
                 *(int *)(this->originalMass_ + 0x564)) + 0x7fffU) {
      iVar1 = fixeddiv(this->originalMassInv_);
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
  int iVar2;
  Car_tObj **ppCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0x270f0000;
  iVar5 = 0x270f0000;
  iVar6 = -1;
  iVar4 = 0;
  ppCVar3 = (Car_tObj **)&_Cars_gHumanRaceCarList;
  while (iVar4 < Cars_gNumHumanRaceCars) {
    if (((*ppCVar3)->carFlags & 0x200U) != 0) {
      iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0
                        ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,*ppCVar3);
      iVar2 = iVar1;
      if (iVar1 < 0) {
        iVar2 = -iVar1;
      }
      if (iVar2 < iVar5) {
        iVar6 = (*ppCVar3)->carIndex;
        iVar5 = iVar2;
        iVar7 = iVar1;
      }
    }
    ppCVar3 = ppCVar3 + 1;
    iVar4 = iVar4 + 1;
  }
  if (iVar6 == -1) {
    this->originalMass_ = 0;
  }
  else {
    iVar5 = (&_Cars_gList)[iVar6];
    this->originalMassInv_ = iVar7;
    this->originalMass_ = iVar5;
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

void HighExecute__17AIHigh_BTC_AIPerp(AIHigh_BTC_AIPerp *this)
{
  int iVar1;
  undefined4 uVar2;
  AIHigh_BTC_HumanCop *chaserCop;
  Speaker *pSVar3;
  AIState_Normal *this_00;
  AIState_Base *this_01;
  uint uVar4;
  AIState_Base *pAVar5;
  Car_tObj *otherCarObj;
  Car_tObj *carObj;
  coorddef cStack32;
  
  if ((((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->N).active != '\0') {
    FindClosestCop__17AIHigh_BTC_AIPerp(this);
    CalculateTimeTillContact__17AIHigh_BTC_AIPerp(this);
  }
  if (false) goto switchD_8006091c_caseD_1;
  switch((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.stateType_) {
  case STATE_NORMAL:
    uVar4 = (this->AIHigh_BTC_Perp).hudActivated_;
    switch(uVar4) {
    case 1:
      if (this->creationTime_ < 0x140) {
        this->perpMode_ = PERPMODE_CRUISE;
        if ((this->AIHigh_BTC_Perp).hudActivated_ != 2) {
          pSVar3 = Mobile__6SpeechP8Car_tObj
                             (*(Car_tObj **)&((Car_tObj *)(this->AIHigh_BTC_Perp).caught_)->N);
          (**(code **)(pSVar3->_vf[0] + 0xc))
                    ((int)&(pSVar3->fPosition).flags + (int)*(short *)(pSVar3->_vf[0] + 8),
                     (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
        }
        (this->AIHigh_BTC_Perp).hudActivated_ = 2;
        DAT_8010f32c = 2;
        DAT_8010f330 = *(undefined *)
                        &((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
        DAT_8010f43c = 2;
        DAT_8010f440 = *(undefined *)
                        &((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
      }
      break;
    case 2:
      (this->AIHigh_BTC_Perp).hudActivated_ = 4;
      break;
    case 4:
      if (this->madeContactTime_ < (int)-this->perpMode_) {
        (this->AIHigh_BTC_Perp).hudActivated_ = 5;
        ReleaseCops__15AIHigh_BTC_Perp((AIHigh_BTC_Perp *)this);
      }
      if (this->madeContactTime_ + -0x40 < (int)-this->perpMode_) {
        if (DAT_8010f32c != 0) {
          pSVar3 = Mobile__6SpeechP8Car_tObj
                             (*(Car_tObj **)&((Car_tObj *)(this->AIHigh_BTC_Perp).caught_)->N);
          (**(code **)(pSVar3->_vf[0] + 0x34))
                    ((int)&(pSVar3->fPosition).flags + (int)*(short *)(pSVar3->_vf[0] + 0x30),
                     (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
          Camera_ResetRelPos__Fi(3);
        }
        DAT_8010f32c = 0;
        DAT_8010f330 = *(undefined *)
                        &((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
        DAT_8010f43c = 0;
        DAT_8010f440 = *(undefined *)
                        &((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
      }
      carObj = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
      otherCarObj = *(Car_tObj **)&((Car_tObj *)(this->AIHigh_BTC_Perp).caught_)->N;
      if ((otherCarObj->speechInfo).speechSource == (carObj->speechInfo).speechSource) {
        iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
        carObj = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
        if (0 < (int)(iVar1 * (carObj->speechInfo).speechSource)) {
          iVar1 = carObj->carInLane;
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          uVar2 = fixedmult(iVar1,0xcccc);
          *(undefined4 *)((this->AIHigh_BTC_Perp).caught_ + 0x88) = uVar2;
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
    uVar4 = (this->AIHigh_BTC_Perp).hudActivated_;
switchD_8006094c_caseD_6:
    if (uVar4 != 5) break;
    HandleCops__15AIHigh_BTC_Perp((AIHigh_BTC_Perp *)this);
    if ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base._vf[1] != (__vtbl_ptr_type *)0x2) {
      AvoidCops__17AIHigh_BTC_AIPerp(this);
    }
    if ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.basicPerpInfo_.copsAssigned_[1] == 0) break;
  case STATE_NONE:
    this_01 = (AIState_Base *)__builtin_new(8);
    carObj = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
    __12AIState_BaseP8Car_tObj(this_01,carObj);
    this_01->_vf[0] = (__vtbl_ptr_type *)&DAT_80055000;
    memset(&cStack32,0,0xc);
    cStack32.y = carObj->carIndex * 0xa0000;
    Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
              ((BO_tNewtonObj *)this_01->carObj_,0,&cStack32,1);
    (this_01->carObj_->N).active = '\0';
    pAVar5 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_;
    if (pAVar5 != (AIState_Base *)0x0) {
      (**(code **)(pAVar5->_vf[0] + 0x14))
                ((int)&pAVar5->carObj_ + (int)*(short *)(pAVar5->_vf[0] + 0x10),3);
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
      this->perpMode_ = PERPMODE_CRUISE;
      if ((this->AIHigh_BTC_Perp).hudActivated_ != 2) {
        pSVar3 = Mobile__6SpeechP8Car_tObj
                           (*(Car_tObj **)&((Car_tObj *)(this->AIHigh_BTC_Perp).caught_)->N);
        (**(code **)(pSVar3->_vf[0] + 0xc))
                  ((int)&(pSVar3->fPosition).flags + (int)*(short *)(pSVar3->_vf[0] + 8),
                   (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
      }
      (this->AIHigh_BTC_Perp).hudActivated_ = 2;
      DAT_8010f32c = 2;
      DAT_8010f330 = *(undefined *)
                      &((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
      DAT_8010f43c = 2;
      DAT_8010f440 = *(undefined *)
                      &((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
    }
    else {
      if ((this->AIHigh_BTC_Perp).hudActivated_ == 2) {
        this_00 = (AIState_Normal *)__builtin_new(8);
        this_01 = (AIState_Base *)
                  __14AIState_NormalP8Car_tObj
                            (this_00,(this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
        pAVar5 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_;
        if (pAVar5 != (AIState_Base *)0x0) {
          (**(code **)(pAVar5->_vf[0] + 0x14))
                    ((int)&pAVar5->carObj_ + (int)*(short *)(pAVar5->_vf[0] + 0x10),3);
        }
        (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_ = this_01;
        (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.stateType_ = STATE_NORMAL;
        (this->AIHigh_BTC_Perp).hudActivated_ = 4;
      }
    }
  }
switchD_8006091c_caseD_1:
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
	// 		enum Placement_Speeds placementSpeed; // $s4
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

void NewStage__17AIHigh_BTC_AIPerpP19AIHigh_BTC_HumanCop( (AIHigh_BTC_AIPerp *this,AIHigh_BTC_HumanCop *chaserCop)
{
  bool bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  AIState_Normal *this_00;
  AIState_Cruise *this_01;
  Speaker *pSVar6;
  int currentSpeed;
  int iVar7;
  AIState_Base *pAVar8;
  AIState_Base *pAVar9;
  int iVar10;
  Car_tObj *pCVar11;
  Wingman_Status WVar12;
  int iVar13;
  Car_tObj *carObj;
  speechIntensityType sVar14;
  int local_28;
  int local_24;
  
  iVar13 = (chaserCop->AIHigh_BTC_Cop).chaseIndex_;
  carObj = (chaserCop->AIHigh_BTC_Cop).AIHigh_BasicCop.AIHigh_Base.carObj_;
  *(AIHigh_BTC_HumanCop **)&(this->AIHigh_BTC_Perp).caught_ = chaserCop;
  ClearForNewStage__15AIHigh_BTC_PerpP19AIHigh_BTC_HumanCop((AIHigh_BTC_Perp *)this,chaserCop);
  currentSpeed = 0;
  do {
    iVar10 = currentSpeed + 1;
    (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->N).damage[currentSpeed] = 0;
    currentSpeed = iVar10;
  } while (iVar10 < 10);
  (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).palCopyNum[9] = 0;
  (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).palCopyNum[10] = 0;
  if (DAT_80113240 != 0) {
    (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).palCopyNum[9] = 0x33;
    (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).palCopyNum[10] = 2;
  }
  (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).palCopyNum[0xb] = 0;
  (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).palCopyNum[0xc] = 0;
  *(undefined2 *)
   ((int)&(((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->render).world_otz + 2) =
       0;
  ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->wipeOutStartTick = 1;
  DAT_8010f32c = 1;
  DAT_8010f330 = *(undefined *)
                  &((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
  DAT_8010f43c = 1;
  DAT_8010f440 = *(undefined *)
                  &((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carIndex;
  Object_ClearCustomObjects__Fv();
  randtemp = fastRandom;
  WVar12 = chaserCop->wingmanStatus_;
  AICop_gRoadBlockState = 0;
  uVar4 = fastRandom & 0xffff;
  currentSpeed = chaserCop->needPerp_;
  iVar10 = -1;
  if ((fastRandom >> 8 & 0xffff) * 1000 >> 0x10 < 0x14d) {
    bVar1 = false;
    bVar2 = true;
    fastRandom = uVar4;
    (carObj->speechInfo).copCarIndex = 0xd5555;
    chaserCop->initialDirection_ = 0xd5555;
    if (currentSpeed == 0) {
      this->madeContactTime_ = 0x180;
      iVar7 = 400;
    }
    else {
      this->madeContactTime_ = 0x280;
      iVar7 = 0xe1;
    }
  }
  else {
    bVar1 = currentSpeed != 0;
    iVar10 = 1;
    if (bVar1) {
      iVar7 = 0x28;
      fastRandom = uVar4;
      (carObj->speechInfo).copCarIndex = 0x2c71c7;
      chaserCop->initialDirection_ = 0x2c71c7;
      currentSpeed = 0x1e0;
    }
    else {
      iVar7 = 400;
      fastRandom = uVar4;
      (carObj->speechInfo).copCarIndex = 0x2c71c7;
      chaserCop->initialDirection_ = 0x2c71c7;
      currentSpeed = 0x180;
    }
    bVar2 = !bVar1;
    this->madeContactTime_ = currentSpeed;
  }
  currentSpeed = (iVar7 / 6) * iVar10 * WVar12;
  pCVar11 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  sVar3 = (short)currentSpeed;
  if (currentSpeed < 0) {
    (pCVar11->N).simRoadInfo.slice = (carObj->N).simRoadInfo.slice + sVar3;
  }
  else {
    (pCVar11->N).simRoadInfo.slice = (carObj->N).simRoadInfo.slice + sVar3;
  }
  sVar14 = iVar10 * WVar12;
  if (bVar1) {
    (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->speechInfo).speechIntensity =
         sVar14;
  }
  else {
    (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->speechInfo).speechIntensity =
         -sVar14;
  }
  pCVar11 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  (pCVar11->speechInfo).speechSource = (pCVar11->speechInfo).speechIntensity;
  local_24 = 0;
  local_28 = 0;
  AIWorld_FindBarrierLessLaneAndPosition__FP8Car_tObjPiT1
            ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,&local_28,&local_24);
  pCVar11 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_;
  if (bVar2) {
    currentSpeed = 0x1f1c71;
  }
  else {
    currentSpeed = 0x11c71c;
  }
  AILife_PlaceCarAtLocation__FP8Car_tObjiiiii
            ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,
             (int)(pCVar11->N).simRoadInfo.slice,local_24,(pCVar11->speechInfo).speechSource,
             currentSpeed,0);
  Camera_Update__Fv();
  currentSpeed = fixedmult((&DAT_801133d8)[iVar13 * 0xd],(&AITune_BTC)[DAT_801131f4 * 7]);
  ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->drag = currentSpeed;
  uVar5 = fixedmult((&DAT_801133d0)[iVar13 * 0xd],(&DAT_8010de18)[DAT_801131f4 * 7]);
  *(undefined4 *)(((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->accTable + 0x6a) =
       uVar5;
  uVar5 = fixedmult(this->timeUntilContact_,(&DAT_801133d4)[iVar13 * 0xd]);
  currentSpeed = fixedmult(uVar5,(&DAT_8010de1c)[DAT_801131f4 * 7]);
  (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->N).mass = currentSpeed;
  currentSpeed = fixeddiv(0x10000,(((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->N
                                  ).mass);
  (((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->N).massInv = currentSpeed;
  AIPerson_SetPersonality__FP8Car_tObji
            ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,
             (&DAT_801133b8)[iVar13 * 0xd]);
  R3DCar_ChangeTrafficColor__FP8Car_tObji
            ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_,
             (&DAT_801133ac)[iVar13 * 0xd]);
  ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carInfo->SpeechColour =
       (&DAT_801133b0)[iVar13 * 0xd];
  ((this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_)->carInfo->HudColour =
       (&DAT_801133b4)[iVar13 * 0xd];
  Hud_InitMap__Fv();
  (this->AIHigh_BTC_Perp).originalActivationCop_ = (AIHigh_BTC_HumanCop *)0x0;
  if (bVar2) {
    this_00 = (AIState_Normal *)__builtin_new(8);
    pAVar9 = (AIState_Base *)
             __14AIState_NormalP8Car_tObj
                       (this_00,(this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
    pAVar8 = (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_;
    if (pAVar8 != (AIState_Base *)0x0) {
      (**(code **)(pAVar8->_vf[0] + 0x14))
                ((int)&pAVar8->carObj_ + (int)*(short *)(pAVar8->_vf[0] + 0x10),3);
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
      (**(code **)(pAVar9->_vf[0] + 0x14))
                ((int)&pAVar9->carObj_ + (int)*(short *)(pAVar9->_vf[0] + 0x10),3);
    }
    *(AIState_Cruise **)&(this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.state_ = this_01;
    (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.stateType_ = STATE_CRUISE;
    (this->AIHigh_BTC_Perp).hudActivated_ = 0;
  }
  pSVar6 = Mobile__6SpeechP8Car_tObj(carObj);
  (**(code **)(pSVar6->_vf[0] + 0x84))
            ((int)&(pSVar6->fPosition).flags + (int)*(short *)(pSVar6->_vf[0] + 0x80));
  pSVar6 = Dispatch__6Speech();
  (**(code **)(pSVar6->_vf[0] + 0xc))
            ((int)&(pSVar6->fPosition).flags + (int)*(short *)(pSVar6->_vf[0] + 8),
             (this->AIHigh_BTC_Perp).AIHigh_BasicPerp.AIHigh_Base.carObj_);
  TrgSfx_RestartTrgSfx__Fv();
  return;


}





