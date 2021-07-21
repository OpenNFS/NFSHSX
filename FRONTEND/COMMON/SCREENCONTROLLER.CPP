#include "THISDUST.H"
#include "SCREENCONTROLLER.H"


// decompiled code
// original method signature: 
// void /*$ra*/ ClearActuators__23tScreenControllerConfig(struct tScreenControllerConfig *this /*$a0*/)
 // line 41, offset 0x80043118
	/* begin block 1 */
		// Start line: 42
		// Start offset: 0x80043118
	/* end block 1 */
	// End offset: 0x80043118
	// End Line: 43

	/* begin block 2 */
		// Start line: 82
	/* end block 2 */
	// End Line: 83

	/* begin block 3 */
		// Start line: 82
	/* end block 3 */
	// End Line: 83

	/* begin block 4 */
		// Start line: 83
	/* end block 4 */
	// End Line: 84

	/* begin block 5 */
		// Start line: 83
	/* end block 5 */
	// End Line: 84

void ClearActuators__23tScreenControllerConfig(tScreenControllerConfig *this)

{
  (this->fShaker).low = '\0';
  (this->fShaker).jolt = '\0';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetActuators__23tScreenControllerConfigi(struct tScreenControllerConfig *this /*$a0*/, int max /*$a1*/)
 // line 47, offset 0x80043124
	/* begin block 1 */
		// Start line: 48
		// Start offset: 0x80043124

		/* begin block 1.1 */
			// Start line: 59
			// Start offset: 0x80043158

			/* begin block 1.1.1 */
				// Start line: 60
				// Start offset: 0x80043168

				/* begin block 1.1.1.1 */
					// Start line: 60
					// Start offset: 0x80043168

					/* begin block 1.1.1.1.1 */
						// Start line: 60
						// Start offset: 0x80043168
					/* end block 1.1.1.1.1 */
					// End offset: 0x80043168
					// End Line: 60
				/* end block 1.1.1.1 */
				// End offset: 0x80043168
				// End Line: 60
			/* end block 1.1.1 */
			// End offset: 0x80043168
			// End Line: 60
		/* end block 1.1 */
		// End offset: 0x8004319C
		// End Line: 66
	/* end block 1 */
	// End offset: 0x8004319C
	// End Line: 66

	/* begin block 2 */
		// Start line: 90
	/* end block 2 */
	// End Line: 91

	/* begin block 3 */
		// Start line: 94
	/* end block 3 */
	// End Line: 95

	/* begin block 4 */
		// Start line: 94
	/* end block 4 */
	// End Line: 95

void SetActuators__23tScreenControllerConfigi(tScreenControllerConfig *this,int max)

{
  uchar uVar1;
  byte bVar2;
  uchar uVar3;
  
  uVar3 = '@';
  if (this->fPlayedInSound == (void *)0x0) {
    uVar1 = (this->fShaker).active;
    uVar3 = uVar1 + -1;
    if (uVar1 == '\0') goto LAB_80043194;
  }
  else {
    this->fPlayedInSound = (void *)0x0;
  }
  (this->fShaker).active = uVar3;
  if ((this->fShaker).active != '\0') {
    bVar2 = Force_rand_256[(int)ticks >> 2 & 0xff];
    (this->fShaker).jolt = (uchar)max;
    *(bool *)&(this->fShaker).low = (int)(uint)bVar2 < max;
    return;
  }
LAB_80043194:
  ClearActuators__23tScreenControllerConfig(this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TurnOffShakers__23tScreenControllerConfig(struct tScreenControllerConfig *this /*$a0*/)
 // line 70, offset 0x800431ac
	/* begin block 1 */
		// Start line: 71
		// Start offset: 0x800431AC
	/* end block 1 */
	// End offset: 0x800431AC
	// End Line: 72

	/* begin block 2 */
		// Start line: 136
	/* end block 2 */
	// End Line: 137

	/* begin block 3 */
		// Start line: 141
	/* end block 3 */
	// End Line: 142

	/* begin block 4 */
		// Start line: 141
	/* end block 4 */
	// End Line: 142

	/* begin block 5 */
		// Start line: 142
	/* end block 5 */
	// End Line: 143

	/* begin block 6 */
		// Start line: 142
	/* end block 6 */
	// End Line: 143

void TurnOffShakers__23tScreenControllerConfig(tScreenControllerConfig *this)

{
  (this->tScreen)._vf[6] = (__vtbl_ptr_type)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ShakeIt__23tScreenControllerConfig(struct tScreenControllerConfig *this /*$s1*/)
 // line 76, offset 0x800431b4
	/* begin block 1 */
		// Start line: 77
		// Start offset: 0x800431B4
		// Variables:
	// 		int padnum; // $s0
	// 		int padState; // $v1
	/* end block 1 */
	// End offset: 0x8004323C
	// End Line: 91

	/* begin block 2 */
		// Start line: 148
	/* end block 2 */
	// End Line: 149

	/* begin block 3 */
		// Start line: 153
	/* end block 3 */
	// End Line: 154

	/* begin block 4 */
		// Start line: 153
	/* end block 4 */
	// End Line: 154

void ShakeIt__23tScreenControllerConfig(tScreenControllerConfig *this)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)this->fResetShakeTimeOut << 4;
  uVar1 = PadGetState();
  if (uVar1 == 6) {
    if ((this->tScreen)._vf[6] == (__vtbl_ptr_type)0x0) {
      (this->tScreen)._vf[6] = (__vtbl_ptr_type)0x1;
      PadSetAct(iVar2,&(this->fShaker).low,2);
      PadSetActAlign(iVar2,Force_gActAlign);
    }
  }
  else {
    if ((int)uVar1 < 4) {
      (this->tScreen)._vf[6] = (__vtbl_ptr_type)0x0;
    }
    ClearActuators__23tScreenControllerConfig(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Controller_SetRamp__Fv()
 // line 791, offset 0x80043250
	/* begin block 1 */
		// Start line: 792
		// Start offset: 0x80043250

		/* begin block 1.1 */
			// Start line: 792
			// Start offset: 0x80043250
			// Variables:
		// 		short i; // $s2

			/* begin block 1.1.1 */
				// Start line: 795
				// Start offset: 0x80043288
				// Variables:
			// 		int type; // $v1
			// 		int config; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80043370
			// End Line: 805
		/* end block 1.1 */
		// End offset: 0x80043378
		// End Line: 806
	/* end block 1 */
	// End offset: 0x80043378
	// End Line: 806

	/* begin block 2 */
		// Start line: 882
	/* end block 2 */
	// End Line: 883

	/* begin block 3 */
		// Start line: 1583
	/* end block 3 */
	// End Line: 1584

	/* begin block 4 */
		// Start line: 1583
	/* end block 4 */
	// End Line: 1584

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Controller_SetRamp__Fv(void)

{
  short sVar1;
  int iVar2;
  int control;
  int control_00;
  short sVar3;
  
  sVar3 = 0;
  while ((int)sVar3 < 2) {
    sVar1 = frontEnd.controlType[(int)sVar3];
    if (sVar1 == 0x23) {
      control_00 = 0;
    }
    else {
      if ((sVar1 == 0x53) || (sVar1 == 0x73)) {
        control_00 = 1;
      }
      else {
        control_00 = 2;
      }
    }
    iVar2 = (int)sVar3;
    frontEnd.rampGas[iVar2] = '\x01';
    frontEnd.rampBrake[iVar2] = '\x01';
    frontEnd.rampSteer[iVar2] = '\x01';
    control_00 = (uint)(byte)frontEnd.controlConfig[iVar2] * 0x27 + control_00;
    control = GetPSXPadValue__Fii((&mappings)[control_00],0);
    control = InGame_GetDevice__Fi(control);
    if (control == 1) {
      frontEnd.rampSteer[iVar2] = '\0';
    }
    control = GetPSXPadValue__Fii((int)(&PTR_DAT_80120e14)[control_00],0);
    control = InGame_GetDevice__Fi(control);
    if (control == 1) {
      frontEnd.rampGas[iVar2] = '\0';
    }
    control_00 = GetPSXPadValue__Fii((int)(&PTR_DAT_80120e20)[control_00],0);
    control_00 = InGame_GetDevice__Fi(control_00);
    if (control_00 == 1) {
      frontEnd.rampBrake[iVar2] = '\0';
    }
    sVar3 = sVar3 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ AnimKeyPoints__23tScreenControllerConfigbT1(struct tScreenControllerConfig *this /*$a0*/, void * forward /*$a1*/, void * pt /*$a2*/)
 // line 817, offset 0x8004339c
	/* begin block 1 */
		// Start line: 818
		// Start offset: 0x8004339C
	/* end block 1 */
	// End offset: 0x800433F0
	// End Line: 830

	/* begin block 2 */
		// Start line: 1635
	/* end block 2 */
	// End Line: 1636

	/* begin block 3 */
		// Start line: 1647
	/* end block 3 */
	// End Line: 1648

	/* begin block 4 */
		// Start line: 1647
	/* end block 4 */
	// End Line: 1648

	/* begin block 5 */
		// Start line: 1648
	/* end block 5 */
	// End Line: 1649

	/* begin block 6 */
		// Start line: 1648
	/* end block 6 */
	// End Line: 1649

short AnimKeyPoints__23tScreenControllerConfigbT1
                (tScreenControllerConfig *this,void *forward,void *pt)

{
  short sVar1;
  
  if (*(char *)&this->fShakingItem == '\x02') {
    if (forward == (void *)0x0) {
      sVar1 = 0x14;
      if (pt != (void *)0x0) {
        return 0x28;
      }
    }
    else {
      sVar1 = 0x14;
      if (pt != (void *)0x0) {
        return 0;
      }
    }
  }
  else {
    if (((uint)pt & (uint)forward) != 0) {
      return 0;
    }
    if ((pt != (void *)0x0) || (sVar1 = 0, forward != (void *)0x0)) {
      return 0x18;
    }
  }
  return sVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckConfigs__23tScreenControllerConfig(struct tScreenControllerConfig *this /*$s0*/)
 // line 833, offset 0x80043400
	/* begin block 1 */
		// Start line: 834
		// Start offset: 0x80043400
	/* end block 1 */
	// End offset: 0x800436D8
	// End Line: 927

	/* begin block 2 */
		// Start line: 1675
	/* end block 2 */
	// End Line: 1676

	/* begin block 3 */
		// Start line: 1679
	/* end block 3 */
	// End Line: 1680

	/* begin block 4 */
		// Start line: 1679
	/* end block 4 */
	// End Line: 1680

void CheckConfigs__23tScreenControllerConfig(tScreenControllerConfig *this)

{
  byte bVar1;
  uchar uVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  uint config;
  void *pvVar6;
  
  if (*(uchar *)&this->fShakingItem == (this->fShaker).actuator[1]) {
    config = (uint)*(byte *)((int)this->fResetShakeTimeOut + -0x7feeb69e);
    if (config == (uint)(this->fShaker).time) {
      return;
    }
    Front_ResetPSXController__Fii((int)this->fResetShakeTimeOut,config);
    if ((*(int *)&this->fPrevConfig == 0) && (*(short *)((int)&this->fStartTick + 2) == 0)) {
      bVar1 = *(byte *)&this->fShakingItem;
      pvVar6 = this->fResetShakeTimeOut;
      *(undefined2 *)((int)&this->fStartTick + 2) = 1;
      this->fAnimStop = (ushort)bVar1;
      bVar1 = *(byte *)((int)pvVar6 + -0x7feeb69e);
      bVar3 = (this->fShaker).time;
      if (((bVar3 < bVar1) && ((bVar1 != 2 || (bVar3 != 0)))) || ((bVar1 == 0 && (bVar3 == 2)))) {
        sVar4 = AnimKeyPoints__23tScreenControllerConfigbT1(this,&DAT_00000001,&DAT_00000001);
        this->fAnim = sVar4;
        sVar4 = AnimKeyPoints__23tScreenControllerConfigbT1(this,&DAT_00000001,(void *)0x0);
        this->fAnimFrame = sVar4;
        sVar4 = 1;
      }
      else {
        sVar4 = AnimKeyPoints__23tScreenControllerConfigbT1(this,(void *)0x0,&DAT_00000001);
        this->fAnim = sVar4;
        sVar4 = AnimKeyPoints__23tScreenControllerConfigbT1(this,(void *)0x0,(void *)0x0);
        this->fAnimFrame = sVar4;
        sVar4 = -1;
      }
      this->fAnimStart = sVar4;
      this->fGotTick = this->fAnim;
    }
    (this->fShaker).time = *(uchar *)((int)this->fResetShakeTimeOut + -0x7feeb69e);
    return;
  }
  TurnOffShakers__23tScreenControllerConfig(this);
  Front_ResetPSXController__Fii
            ((int)this->fResetShakeTimeOut,
             (uint)*(byte *)((int)this->fResetShakeTimeOut + -0x7feeb69e));
  if (*(short *)((int)&this->fStartTick + 2) != 0) {
    return;
  }
  if (*(char *)&this->fShakingItem == '\0') {
    if (this->fAnimController != 0) {
      return;
    }
    bVar1 = (this->fShaker).actuator[1];
    *(undefined2 *)&this->fPrevConfig = 1;
    this->fFade[0] = (ushort)bVar1;
    (this->fShaker).actuator[1] = *(uchar *)&this->fShakingItem;
    return;
  }
  if ((this->fShaker).actuator[1] == '\0') {
    if (this->fAnimController != 0) {
      return;
    }
    sVar4 = *(short *)&this->fTransitioningOut;
    this->fAnimStep = 1;
    *(undefined2 *)&this->fTextController = 1;
    this->fFade[1] = (ushort)*(byte *)&this->fShakingItem;
  }
  else {
    if (((int)this->fAnimFadeFrame != -1) &&
       (iVar5 = strcmp(fileNames7[(uint)*(byte *)&this->fShakingItem],
                       fileNames7[(int)this->fAnimFadeFrame]), iVar5 == 0)) {
      uVar2 = (this->fShaker).actuator[1];
      *(undefined4 *)&this->fTextTypeOn = 1;
      if (((uVar2 == '\x05') || (uVar2 == '\x03')) &&
         ((*(char *)&this->fShakingItem == '\x04' || (*(char *)&this->fShakingItem == '\x06')))) {
        SwapInController__23tScreenControllerConfig(this);
      }
      goto LAB_800435ac;
    }
    if (this->fAnimController != 0) {
      return;
    }
    bVar1 = (this->fShaker).actuator[1];
    sVar4 = *(short *)&this->fTransitioningOut;
    *(undefined2 *)&this->fPrevConfig = 1;
    this->fAnimStep = 1;
    *(undefined2 *)&this->fTextController = 1;
    this->fFade[0] = (ushort)bVar1;
    this->fFade[1] = (ushort)*(byte *)&this->fShakingItem;
  }
  if (0x7f < sVar4) {
    (this->fShaker).actuator[0] = *(uchar *)&this->fShakingItem;
  }
  if ((this->fShaker).actuator[0] == '\x06') {
    (this->fShaker).actuator[0] = '\x05';
  }
LAB_800435ac:
  (this->fShaker).actuator[1] = *(uchar *)&this->fShakingItem;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SwapInController__23tScreenControllerConfig(struct tScreenControllerConfig *this /*$s0*/)
 // line 934, offset 0x800436ec
	/* begin block 1 */
		// Start line: 935
		// Start offset: 0x800436EC
	/* end block 1 */
	// End offset: 0x80043768
	// End Line: 939

	/* begin block 2 */
		// Start line: 1902
	/* end block 2 */
	// End Line: 1903

	/* begin block 3 */
		// Start line: 1910
	/* end block 3 */
	// End Line: 1911

	/* begin block 4 */
		// Start line: 1910
	/* end block 4 */
	// End Line: 1911

void SwapInController__23tScreenControllerConfig(tScreenControllerConfig *this)

{
  int iVar1;
  
  if (((int)this->fAnimFadeFrame == -1) ||
     (iVar1 = strcmp(fileNames7[(uint)*(byte *)&this->fShakingItem],
                     fileNames7[(int)this->fAnimFadeFrame]), iVar1 != 0)) {
    AsyncLoadSwapShapeFile__7tScreenPc
              ((tScreen *)this,fileNames7[(uint)*(byte *)&this->fShakingItem]);
    this->fAnimFadeFrame = (ushort)*(byte *)&this->fShakingItem;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetCurrentController__23tScreenControllerConfigb(struct tScreenControllerConfig *this /*$s1*/, void * firsttime /*$s5*/)
 // line 943, offset 0x80043778
	/* begin block 1 */
		// Start line: 944
		// Start offset: 0x80043778
		// Variables:
	// 		struct tInsideBoxMenu *fSetMenu; // $s2
	// 		void * setmenutonull; // $s4

		/* begin block 1.1 */
			// Start line: 944
			// Start offset: 0x80043778
			// Variables:
		// 		struct tDialogMessageString *this; // $s0

			/* begin block 1.1.1 */
				// Start line: 944
				// Start offset: 0x80043778
			/* end block 1.1.1 */
			// End offset: 0x80043778
			// End Line: 944
		/* end block 1.1 */
		// End offset: 0x80043778
		// End Line: 944

		/* begin block 1.2 */
			// Start line: 944
			// Start offset: 0x80043778

			/* begin block 1.2.1 */
				// Start line: 944
				// Start offset: 0x80043778
			/* end block 1.2.1 */
			// End offset: 0x80043778
			// End Line: 944
		/* end block 1.2 */
		// End offset: 0x80043778
		// End Line: 944

		/* begin block 1.3 */
			// Start line: 944
			// Start offset: 0x80043778

			/* begin block 1.3.1 */
				// Start line: 961
				// Start offset: 0x80043818

				/* begin block 1.3.1.1 */
					// Start line: 962
					// Start offset: 0x80043818

					/* begin block 1.3.1.1.1 */
						// Start line: 963
						// Start offset: 0x8004385C

						/* begin block 1.3.1.1.1.1 */
							// Start line: 965
							// Start offset: 0x8004385C

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 967
								// Start offset: 0x8004387C

								/* begin block 1.3.1.1.1.1.1.1 */
									// Start line: 968
									// Start offset: 0x8004387C

									/* begin block 1.3.1.1.1.1.1.1.1 */
										// Start line: 968
										// Start offset: 0x8004387C

										/* begin block 1.3.1.1.1.1.1.1.1.1 */
											// Start line: 968
											// Start offset: 0x8004387C
										/* end block 1.3.1.1.1.1.1.1.1.1 */
										// End offset: 0x8004387C
										// End Line: 968
									/* end block 1.3.1.1.1.1.1.1.1 */
									// End offset: 0x8004387C
									// End Line: 968

									/* begin block 1.3.1.1.1.1.1.1.2 */
										// Start line: 968
										// Start offset: 0x8004388C

										/* begin block 1.3.1.1.1.1.1.1.2.1 */
											// Start line: 968
											// Start offset: 0x8004388C
										/* end block 1.3.1.1.1.1.1.1.2.1 */
										// End offset: 0x8004388C
										// End Line: 968
									/* end block 1.3.1.1.1.1.1.1.2 */
									// End offset: 0x8004388C
									// End Line: 968
								/* end block 1.3.1.1.1.1.1.1 */
								// End offset: 0x800438EC
								// End Line: 981
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x800438EC
							// End Line: 981
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x80043904
						// End Line: 989

						/* begin block 1.3.1.1.1.2 */
							// Start line: 993
							// Start offset: 0x80043914

							/* begin block 1.3.1.1.1.2.1 */
								// Start line: 999
								// Start offset: 0x80043944

								/* begin block 1.3.1.1.1.2.1.1 */
									// Start line: 999
									// Start offset: 0x80043944

									/* begin block 1.3.1.1.1.2.1.1.1 */
										// Start line: 1001
										// Start offset: 0x80043994

										/* begin block 1.3.1.1.1.2.1.1.1.1 */
											// Start line: 1001
											// Start offset: 0x80043994
										/* end block 1.3.1.1.1.2.1.1.1.1 */
										// End offset: 0x80043994
										// End Line: 1001
									/* end block 1.3.1.1.1.2.1.1.1 */
									// End offset: 0x80043994
									// End Line: 1001

									/* begin block 1.3.1.1.1.2.1.1.2 */
										// Start line: 1008
										// Start offset: 0x800439CC

										/* begin block 1.3.1.1.1.2.1.1.2.1 */
											// Start line: 1009
											// Start offset: 0x800439CC

											/* begin block 1.3.1.1.1.2.1.1.2.1.1 */
												// Start line: 1010
												// Start offset: 0x800439DC

												/* begin block 1.3.1.1.1.2.1.1.2.1.1.1 */
													// Start line: 1010
													// Start offset: 0x800439DC

													/* begin block 1.3.1.1.1.2.1.1.2.1.1.1.1 */
														// Start line: 1010
														// Start offset: 0x800439DC
													/* end block 1.3.1.1.1.2.1.1.2.1.1.1.1 */
													// End offset: 0x800439DC
													// End Line: 1010
												/* end block 1.3.1.1.1.2.1.1.2.1.1.1 */
												// End offset: 0x800439DC
												// End Line: 1010
											/* end block 1.3.1.1.1.2.1.1.2.1.1 */
											// End offset: 0x800439DC
											// End Line: 1010
										/* end block 1.3.1.1.1.2.1.1.2.1 */
										// End offset: 0x800439DC
										// End Line: 1010
									/* end block 1.3.1.1.1.2.1.1.2 */
									// End offset: 0x800439DC
									// End Line: 1010
								/* end block 1.3.1.1.1.2.1.1 */
								// End offset: 0x800439DC
								// End Line: 1010
							/* end block 1.3.1.1.1.2.1 */
							// End offset: 0x800439DC
							// End Line: 1010
						/* end block 1.3.1.1.1.2 */
						// End offset: 0x800439DC
						// End Line: 1010
					/* end block 1.3.1.1.1 */
					// End offset: 0x80043A60
					// End Line: 1031
				/* end block 1.3.1.1 */
				// End offset: 0x80043A60
				// End Line: 1031
			/* end block 1.3.1 */
			// End offset: 0x80043A60
			// End Line: 1031
		/* end block 1.3 */
		// End offset: 0x80043A60
		// End Line: 1031

		/* begin block 1.4 */
			// Start line: 1040
			// Start offset: 0x80043A84

			/* begin block 1.4.1 */
				// Start line: 1044
				// Start offset: 0x80043AB0

				/* begin block 1.4.1.1 */
					// Start line: 1044
					// Start offset: 0x80043AB0

					/* begin block 1.4.1.1.1 */
						// Start line: 1044
						// Start offset: 0x80043AB0
					/* end block 1.4.1.1.1 */
					// End offset: 0x80043AB0
					// End Line: 1044
				/* end block 1.4.1.1 */
				// End offset: 0x80043AB0
				// End Line: 1044
			/* end block 1.4.1 */
			// End offset: 0x80043AB0
			// End Line: 1044

			/* begin block 1.4.2 */
				// Start line: 1050
				// Start offset: 0x80043AC0

				/* begin block 1.4.2.1 */
					// Start line: 1050
					// Start offset: 0x80043AC0

					/* begin block 1.4.2.1.1 */
						// Start line: 1050
						// Start offset: 0x80043AC0
					/* end block 1.4.2.1.1 */
					// End offset: 0x80043ACC
					// End Line: 1050
				/* end block 1.4.2.1 */
				// End offset: 0x80043ACC
				// End Line: 1050
			/* end block 1.4.2 */
			// End offset: 0x80043ACC
			// End Line: 1051
		/* end block 1.4 */
		// End offset: 0x80043ACC
		// End Line: 1051
	/* end block 1 */
	// End offset: 0x80043ACC
	// End Line: 1051

	/* begin block 2 */
		// Start line: 1923
	/* end block 2 */
	// End Line: 1924

	/* begin block 3 */
		// Start line: 1928
	/* end block 3 */
	// End Line: 1929

	/* begin block 4 */
		// Start line: 1928
	/* end block 4 */
	// End Line: 1929

/* WARNING: Type propagation algorithm not settling */

void SetCurrentController__23tScreenControllerConfigb(tScreenControllerConfig *this,void *firsttime)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  tGlobalMenuDefs *ptVar4;
  short sVar5;
  char *pcVar6;
  uint uVar7;
  undefined uVar8;
  tInsideBoxMenu *menu;
  
  menu = (tInsideBoxMenu *)0x0;
  pcVar6 = TextSys_Word__Fi(0x20b);
  *(char **)&(this->negconPopUp).tDialogInteractive.tDialogMessageString.tDialogBase.fDefault =
       pcVar6;
  (this->negconPopUp).tDialogInteractive.ReadyToReturnValue = (void *)0x20c;
  (this->negconPopUp).tDialogInteractive.fCurrentlyRunning = (void *)0x20d;
  (this->negconPopUp).tDialogInteractive.tDialogMessageString.tDialogBase.MaxW = 1;
  uVar7 = -(uint)(this->fResetShakeTimeOut != (void *)0x0) & 0x20;
  bVar3 = false;
  if ((&gPadinfo.buf[0].nopad)[uVar7] != '\0') {
    *(undefined *)&this->fShakingItem = 0;
    if (0x7f < *(short *)&this->fTransitioningOut) {
      this->fAnimFadeFrame = 0;
    }
    bVar3 = true;
    goto LAB_80043a60;
  }
  bVar1 = (&gPadinfo.buf[0].ID)[uVar7];
  if (bVar1 == 0x53) {
LAB_800439e8:
    (this->negconPopUp).yesnowords[0] = 0;
    uVar7 = PadGetState();
    if (uVar7 == 6) {
      *(undefined *)&this->fShakingItem = 6;
      menu = (tInsideBoxMenu *)((menuDefs->menuDisplayOptions).tMenu.fItemList + 7);
    }
    else {
      uVar7 = PadGetState();
      if (uVar7 == 2) {
        *(undefined *)&this->fShakingItem = 5;
        menu = (tInsideBoxMenu *)
               ((menuDefs->itemDisplaySplitTime).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
                tMenuItemInteractive.tMenuItem._vf + 8);
      }
    }
  }
  else {
    if (bVar1 < 0x54) {
      if (bVar1 == 0x23) {
        (this->negconPopUp).yesnowords[0] = 0;
        if (((firsttime == (void *)0x0) && (*(char *)&this->fShakingItem != '\x02')) &&
           (*(char *)&this->fShakingItem != '\x01')) {
          bVar2 = false;
          if (*(int *)&(this->negconPopUp).tDialogInteractive.tDialogMessageString.tDialogBase.top
              == 0) {
            bVar2 = (this->negconPopUp).tDialogInteractive.tDialogMessageString.Centerit ==
                    (void *)0x0;
          }
          if ((bVar2) && (this->fAnimFadeController == -1)) {
            *(undefined *)&this->fShakingItem = 0;
            *(undefined2 *)&this->fTransitioningOut = 0x80;
            sVar5 = Run__18tDialogInteractive((tDialogInteractive *)&this->mult);
            this->fAnimFadeController = sVar5;
            uVar8 = 1;
            if (sVar5 != 0) {
              uVar8 = 2;
            }
            *(undefined *)&this->fShakingItem = uVar8;
            ptVar4 = menuDefs;
            this->fAnimFadeController = -1;
            menu = (tInsideBoxMenu *)
                   &(ptVar4->itemControllerConfigSelected).tMenuItemLeftRightFade.
                    tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.fTextDescription;
          }
          else {
            bVar3 = true;
            firsttime = &DAT_00000001;
            *(undefined2 *)&this->fTransitioningOut = 0x80;
            *(undefined *)&this->fShakingItem = 0;
          }
        }
        else {
          menu = (tInsideBoxMenu *)
                 &(menuDefs->itemControllerConfigSelected).tMenuItemLeftRightFade.
                  tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.fTextDescription;
        }
        goto LAB_80043a60;
      }
      if (bVar1 == 0x41) {
        uVar7 = PadGetState();
        bVar2 = false;
        if (uVar7 == 6) {
          *(undefined *)&this->fShakingItem = 4;
          ptVar4 = menuDefs;
          (this->negconPopUp).yesnowords[0] = 0;
          menu = (tInsideBoxMenu *)
                 ((ptVar4->itemDisplayPosition).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
                  tMenuItemInteractive.tMenuItem._vf + 4);
          goto LAB_80043a60;
        }
        uVar7 = PadGetState();
        if ((uVar7 == 2) ||
           ((((this->negconPopUp).yesnowords[0] != 0 && (uVar7 = PadGetState(), uVar7 == 1)) &&
            (0x60 < (int)(ticks + -(this->negconPopUp).yesnowords[0]))))) {
          bVar2 = true;
        }
        if ((!bVar2) && (*(char *)&this->fShakingItem != '\x03')) {
          if ((this->negconPopUp).yesnowords[0] == 0) {
            *(uchar **)(this->negconPopUp).yesnowords = ticks;
          }
          goto LAB_80043a60;
        }
      }
    }
    else {
      if (bVar1 == 0x73) goto LAB_800439e8;
    }
    bVar3 = true;
    (this->negconPopUp).yesnowords[0] = 0;
    *(undefined *)&this->fShakingItem = 3;
  }
LAB_80043a60:
  if ((menu != (tInsideBoxMenu *)0x0) || (bVar3)) {
    SetMenu__20tMenuItemSlidingMenubP14tInsideBoxMenu
              ((tMenuItemSlidingMenu *)
               &(menuDefs->itemAmbientVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.
                tMenuItem.fButtonImage,firsttime,menu);
  }
  if (((uint)*(byte *)&this->fShakingItem - 5 < 2) && ((this->fShaker).fade < 2)) {
    *(undefined2 *)&(menuDefs->itemSlidingPlayList).tMenuItemSlidingMenu.fClosing = 1;
  }
  else {
    *(undefined2 *)&(menuDefs->itemSlidingPlayList).tMenuItemSlidingMenu.fClosing = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalcAnimFrame__23tScreenControllerConfigi(struct tScreenControllerConfig *this /*$a0*/, int frame /*$a1*/)
 // line 1086, offset 0x80043af0
	/* begin block 1 */
		// Start line: 1087
		// Start offset: 0x80043AF0
	/* end block 1 */
	// End offset: 0x80043B74
	// End Line: 1102

	/* begin block 2 */
		// Start line: 2189
	/* end block 2 */
	// End Line: 2190

	/* begin block 3 */
		// Start line: 2225
	/* end block 3 */
	// End Line: 2226

	/* begin block 4 */
		// Start line: 2225
	/* end block 4 */
	// End Line: 2226

	/* begin block 5 */
		// Start line: 2226
	/* end block 5 */
	// End Line: 2227

	/* begin block 6 */
		// Start line: 2226
	/* end block 6 */
	// End Line: 2227

int CalcAnimFrame__23tScreenControllerConfigi(tScreenControllerConfig *this,int frame)

{
  int iVar1;
  
  if (*(char *)&this->fShakingItem == '\x02') {
    if (((frame == 0) || (frame == 0x14)) || (frame == 0x28)) {
      frame = 1;
    }
    else {
      if (frame < 0xb) {
        if (9 < frame) {
          frame = 9;
        }
        frame = frame + 2;
      }
      else {
        iVar1 = 0x16;
        if ((frame < 0x14) || (iVar1 = 0x38, 0x1e < frame)) {
          frame = iVar1 - frame;
        }
        else {
          frame = frame + -0x14;
          if (9 < frame) {
            frame = 9;
          }
          frame = frame + 0x10;
        }
      }
    }
  }
  return frame;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ActualDrawController__23tScreenControllerConfigiiiii(struct tScreenControllerConfig *this /*$s1*/, int frame /*$a0*/, int fadelevelmain /*$s3*/, int fadeleveltop /*$s6*/, int shakex /*stack 16*/, int shakey /*stack 20*/)
 // line 1105, offset 0x80043b7c
	/* begin block 1 */
		// Start line: 1106
		// Start offset: 0x80043B7C
		// Variables:
	// 		struct tDrawShapeExtended drawFlags; // stack offset -80

		/* begin block 1.1 */
			// Start line: 1127
			// Start offset: 0x80043C98

			/* begin block 1.1.1 */
				// Start line: 1132
				// Start offset: 0x80043CDC
				// Variables:
			// 		struct tDrawShapeExtended drawFlags; // stack offset -56

				/* begin block 1.1.1.1 */
					// Start line: 1135
					// Start offset: 0x80043CDC
					// Variables:
				// 		int i; // $s2
				/* end block 1.1.1.1 */
				// End offset: 0x80043DBC
				// End Line: 1150
			/* end block 1.1.1 */
			// End offset: 0x80043DBC
			// End Line: 1150
		/* end block 1.1 */
		// End offset: 0x80043DBC
		// End Line: 1150
	/* end block 1 */
	// End offset: 0x80043DBC
	// End Line: 1150

	/* begin block 2 */
		// Start line: 2259
	/* end block 2 */
	// End Line: 2260

	/* begin block 3 */
		// Start line: 2263
	/* end block 3 */
	// End Line: 2264

	/* begin block 4 */
		// Start line: 2263
	/* end block 4 */
	// End Line: 2264

void ActualDrawController__23tScreenControllerConfigiiiii
               (tScreenControllerConfig *this,int frame,int fadelevelmain,int fadeleveltop,
               int shakex,int shakey)

{
  short *psVar1;
  short *psVar2;
  byte bVar3;
  byte bVar4;
  int index;
  int iVar5;
  int flags;
  tDrawShapeExtended tStack80;
  tDrawShapeExtended tStack56;
  
  if (this->fAnimFadeFrame == 0) {
    return;
  }
  tStack80.custom_shapes = (this->tScreen).fSwapShapes.fShapes;
  if ((frame == 0) && ((int)this->fAnimFadeFrame != 1)) {
    flags = 0x600;
    if (fadelevelmain != 0) {
      flags = 0x601;
    }
    index = 1;
    iVar5 = (int)this->fAnimFadeFrame * 2;
    bVar3 = (&Offset)[iVar5];
    bVar4 = s__800520d9[iVar5];
  }
  else {
    flags = 0x600;
    if (fadelevelmain != 0) {
      flags = 0x601;
    }
    index = (int)this->fAnimFadeFrame * 2;
    ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended
              (frame + 1,flags,(uint)(&Offset)[index],(uint)s__800520d9[index],fadelevelmain,0,
               &tStack80);
    if (this->fAnimFadeFrame != 2) goto LAB_80043ca8;
    flags = 0x600;
    if (fadelevelmain != 0) {
      flags = 0x601;
    }
    index = 0;
    bVar3 = UCHAR_E4h_800520dc;
    bVar4 = s_u_800520dd[0];
  }
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (index,flags,(uint)bVar3 + shakex,(uint)bVar4 + shakey,fadelevelmain,0,&tStack80);
  if (this->fAnimFadeFrame == 2) {
    index = 0x30;
    tStack56.tint[0] = CalcFadeVal__Fii(0xc8c8c8,(int)*(short *)&this->fTransitioningOut);
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0x1a,0x18,0x9e,0x92,0,1,&tStack56);
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0x1b,0x18,0x9e,0xa1,0,1,&tStack56);
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0x1c,0x18,0x9e,0xac,0,1,&tStack56);
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0x1d,0x18,0x9e,0xbb,0,1,&tStack56);
    flags = -0x7ffadcbc;
    do {
      psVar1 = (short *)(flags + 4);
      psVar2 = (short *)(flags + 6);
      flags = flags + 0xc;
      index = index + 1;
      PSXDrawSquare__Fiiiii(tStack56.tint[0],(int)*psVar1 + -2,(int)*psVar2 + -2,5,3);
    } while (index < 0x36);
    return;
  }
LAB_80043ca8:
  flags = 0x200;
  if (fadeleveltop != 0) {
    flags = 0x201;
  }
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0,flags,0,0,fadeleveltop,0,&tStack80);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawController__23tScreenControllerConfig(struct tScreenControllerConfig *this /*$s1*/)
 // line 1156, offset 0x80043de4
	/* begin block 1 */
		// Start line: 1157
		// Start offset: 0x80043DE4
		// Variables:
	// 		struct tDrawShapeExtended drawFlags; // stack offset -56
	// 		short shakex; // $s6
	// 		short shakey; // $s5
	// 		short maxshakex; // $s2
	// 		short maxshakey; // $s3
	// 		int fadelevel; // $s0
	// 		static int flare_intensity; // offset 0x7ec
	// 		static int max_fi; // offset 0x7f0
	// 		static int max_fidir; // offset 0x7f4

		/* begin block 1.1 */
			// Start line: 1157
			// Start offset: 0x80043DE4

			/* begin block 1.1.1 */
				// Start line: 1172
				// Start offset: 0x80043E38

				/* begin block 1.1.1.1 */
					// Start line: 1172
					// Start offset: 0x80043E38
				/* end block 1.1.1.1 */
				// End offset: 0x80043E38
				// End Line: 1172
			/* end block 1.1.1 */
			// End offset: 0x80043E38
			// End Line: 1172

			/* begin block 1.1.2 */
				// Start line: 1172
				// Start offset: 0x80043E60

				/* begin block 1.1.2.1 */
					// Start line: 1172
					// Start offset: 0x80043E60
				/* end block 1.1.2.1 */
				// End offset: 0x80043E60
				// End Line: 1172
			/* end block 1.1.2 */
			// End offset: 0x80043E60
			// End Line: 1172

			/* begin block 1.1.3 */
				// Start line: 1172
				// Start offset: 0x80043E78

				/* begin block 1.1.3.1 */
					// Start line: 1172
					// Start offset: 0x80043E78
				/* end block 1.1.3.1 */
				// End offset: 0x80043E78
				// End Line: 1172
			/* end block 1.1.3 */
			// End offset: 0x80043E78
			// End Line: 1172

			/* begin block 1.1.4 */
				// Start line: 1186
				// Start offset: 0x80043F14

				/* begin block 1.1.4.1 */
					// Start line: 1186
					// Start offset: 0x80043F14

					/* begin block 1.1.4.1.1 */
						// Start line: 1193
						// Start offset: 0x80043F24

						/* begin block 1.1.4.1.1.1 */
							// Start line: 1193
							// Start offset: 0x80043F24
						/* end block 1.1.4.1.1.1 */
						// End offset: 0x80043F24
						// End Line: 1193
					/* end block 1.1.4.1.1 */
					// End offset: 0x80043F24
					// End Line: 1193

					/* begin block 1.1.4.1.2 */
						// Start line: 1193
						// Start offset: 0x80043F4C

						/* begin block 1.1.4.1.2.1 */
							// Start line: 1193
							// Start offset: 0x80043F4C
						/* end block 1.1.4.1.2.1 */
						// End offset: 0x80043F4C
						// End Line: 1193
					/* end block 1.1.4.1.2 */
					// End offset: 0x80043F4C
					// End Line: 1193

					/* begin block 1.1.4.1.3 */
						// Start line: 1193
						// Start offset: 0x80043F64

						/* begin block 1.1.4.1.3.1 */
							// Start line: 1193
							// Start offset: 0x80043F64
						/* end block 1.1.4.1.3.1 */
						// End offset: 0x80043F64
						// End Line: 1193
					/* end block 1.1.4.1.3 */
					// End offset: 0x80043F64
					// End Line: 1193
				/* end block 1.1.4.1 */
				// End offset: 0x80044000
				// End Line: 1209
			/* end block 1.1.4 */
			// End offset: 0x80044000
			// End Line: 1209
		/* end block 1.1 */
		// End offset: 0x80044000
		// End Line: 1209

		/* begin block 1.2 */
			// Start line: 1268
			// Start offset: 0x800441C8

			/* begin block 1.2.1 */
				// Start line: 1269
				// Start offset: 0x800441DC

				/* begin block 1.2.1.1 */
					// Start line: 1270
					// Start offset: 0x800441DC
					// Variables:
				// 		int ii; // $s0
				/* end block 1.2.1.1 */
				// End offset: 0x80044250
				// End Line: 1273
			/* end block 1.2.1 */
			// End offset: 0x80044250
			// End Line: 1273
		/* end block 1.2 */
		// End offset: 0x80044250
		// End Line: 1273

		/* begin block 1.3 */
			// Start line: 1349
			// Start offset: 0x800443EC

			/* begin block 1.3.1 */
				// Start line: 1350
				// Start offset: 0x800443FC

				/* begin block 1.3.1.1 */
					// Start line: 1351
					// Start offset: 0x800443FC

					/* begin block 1.3.1.1.1 */
						// Start line: 1352
						// Start offset: 0x8004440C

						/* begin block 1.3.1.1.1.1 */
							// Start line: 1353
							// Start offset: 0x8004440C

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 1353
								// Start offset: 0x8004440C
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x8004440C
							// End Line: 1353
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x8004440C
						// End Line: 1353
					/* end block 1.3.1.1.1 */
					// End offset: 0x80044420
					// End Line: 1355
				/* end block 1.3.1.1 */
				// End offset: 0x80044420
				// End Line: 1355

				/* begin block 1.3.1.2 */
					// Start line: 1358
					// Start offset: 0x80044420

					/* begin block 1.3.1.2.1 */
						// Start line: 1358
						// Start offset: 0x80044420

						/* begin block 1.3.1.2.1.1 */
							// Start line: 1358
							// Start offset: 0x80044420
						/* end block 1.3.1.2.1.1 */
						// End offset: 0x80044420
						// End Line: 1358
					/* end block 1.3.1.2.1 */
					// End offset: 0x80044420
					// End Line: 1358
				/* end block 1.3.1.2 */
				// End offset: 0x8004446C
				// End Line: 1361

				/* begin block 1.3.1.3 */
					// Start line: 1361
					// Start offset: 0x8004446C

					/* begin block 1.3.1.3.1 */
						// Start line: 1361
						// Start offset: 0x8004446C
					/* end block 1.3.1.3.1 */
					// End offset: 0x8004446C
					// End Line: 1361
				/* end block 1.3.1.3 */
				// End offset: 0x8004446C
				// End Line: 1361
			/* end block 1.3.1 */
			// End offset: 0x800445AC
			// End Line: 1399

			/* begin block 1.3.2 */
				// Start line: 1401
				// Start offset: 0x800445C8

				/* begin block 1.3.2.1 */
					// Start line: 1401
					// Start offset: 0x800445C8

					/* begin block 1.3.2.1.1 */
						// Start line: 1402
						// Start offset: 0x800445D8

						/* begin block 1.3.2.1.1.1 */
							// Start line: 1404
							// Start offset: 0x800445D8

							/* begin block 1.3.2.1.1.1.1 */
								// Start line: 1405
								// Start offset: 0x800445E8

								/* begin block 1.3.2.1.1.1.1.1 */
									// Start line: 1406
									// Start offset: 0x800445E8

									/* begin block 1.3.2.1.1.1.1.1.1 */
										// Start line: 1406
										// Start offset: 0x800445E8
									/* end block 1.3.2.1.1.1.1.1.1 */
									// End offset: 0x800445E8
									// End Line: 1406
								/* end block 1.3.2.1.1.1.1.1 */
								// End offset: 0x800445E8
								// End Line: 1406
							/* end block 1.3.2.1.1.1.1 */
							// End offset: 0x80044604
							// End Line: 1408
						/* end block 1.3.2.1.1.1 */
						// End offset: 0x80044604
						// End Line: 1408

						/* begin block 1.3.2.1.1.2 */
							// Start line: 1408
							// Start offset: 0x80044604

							/* begin block 1.3.2.1.1.2.1 */
								// Start line: 1408
								// Start offset: 0x80044604
							/* end block 1.3.2.1.1.2.1 */
							// End offset: 0x80044604
							// End Line: 1408
						/* end block 1.3.2.1.1.2 */
						// End offset: 0x80044604
						// End Line: 1408

						/* begin block 1.3.2.1.1.3 */
							// Start line: 1417
							// Start offset: 0x80044690

							/* begin block 1.3.2.1.1.3.1 */
								// Start line: 1417
								// Start offset: 0x80044690
							/* end block 1.3.2.1.1.3.1 */
							// End offset: 0x80044690
							// End Line: 1417
						/* end block 1.3.2.1.1.3 */
						// End offset: 0x80044690
						// End Line: 1417
					/* end block 1.3.2.1.1 */
					// End offset: 0x80044748
					// End Line: 1432

					/* begin block 1.3.2.1.2 */
						// Start line: 1436
						// Start offset: 0x80044768

						/* begin block 1.3.2.1.2.1 */
							// Start line: 1437
							// Start offset: 0x80044768

							/* begin block 1.3.2.1.2.1.1 */
								// Start line: 1439
								// Start offset: 0x80044780
								// Variables:
							// 		char frame; // $a0

								/* begin block 1.3.2.1.2.1.1.1 */
									// Start line: 1440
									// Start offset: 0x80044780

									/* begin block 1.3.2.1.2.1.1.1.1 */
										// Start line: 1444
										// Start offset: 0x800447A8

										/* begin block 1.3.2.1.2.1.1.1.1.1 */
											// Start line: 1157
											// Start offset: 0x800447A8
											// Variables:
										// 		int player; // $v1

											/* begin block 1.3.2.1.2.1.1.1.1.1.1 */
												// Start line: 1157
												// Start offset: 0x800447A8
												// Variables:
											// 		int range2; // $v0
											// 		int range1; // $a0
											// 		short ret; // $a1
											/* end block 1.3.2.1.2.1.1.1.1.1.1 */
											// End offset: 0x800447FC
											// End Line: 1157
										/* end block 1.3.2.1.2.1.1.1.1.1 */
										// End offset: 0x800447FC
										// End Line: 1157
									/* end block 1.3.2.1.2.1.1.1.1 */
									// End offset: 0x8004484C
									// End Line: 1450
								/* end block 1.3.2.1.2.1.1.1 */
								// End offset: 0x8004484C
								// End Line: 1450

								/* begin block 1.3.2.1.2.1.1.2 */
									// Start line: 1454
									// Start offset: 0x8004484C

									/* begin block 1.3.2.1.2.1.1.2.1 */
										// Start line: 1456
										// Start offset: 0x80044878

										/* begin block 1.3.2.1.2.1.1.2.1.1 */
											// Start line: 1157
											// Start offset: 0x80044878
											// Variables:
										// 		int player; // $v1

											/* begin block 1.3.2.1.2.1.1.2.1.1.1 */
												// Start line: 1157
												// Start offset: 0x80044878
												// Variables:
											// 		int range2; // $v0
											// 		int range1; // $a0
											// 		short ret; // $a1
											/* end block 1.3.2.1.2.1.1.2.1.1.1 */
											// End offset: 0x800448C8
											// End Line: 1157
										/* end block 1.3.2.1.2.1.1.2.1.1 */
										// End offset: 0x800448C8
										// End Line: 1157
									/* end block 1.3.2.1.2.1.1.2.1 */
									// End offset: 0x80044918
									// End Line: 1462
								/* end block 1.3.2.1.2.1.1.2 */
								// End offset: 0x80044918
								// End Line: 1462
							/* end block 1.3.2.1.2.1.1 */
							// End offset: 0x80044954
							// End Line: 1468
						/* end block 1.3.2.1.2.1 */
						// End offset: 0x80044954
						// End Line: 1468

						/* begin block 1.3.2.1.2.2 */
							// Start line: 1475
							// Start offset: 0x80044954

							/* begin block 1.3.2.1.2.2.1 */
								// Start line: 1478
								// Start offset: 0x80044994
								// Variables:
							// 		int frame; // $a1

								/* begin block 1.3.2.1.2.2.1.1 */
									// Start line: 1157
									// Start offset: 0x80044994
									// Variables:
								// 		int player; // $v0

									/* begin block 1.3.2.1.2.2.1.1.1 */
										// Start line: 1157
										// Start offset: 0x80044994
										// Variables:
									// 		short range; // $v0
									/* end block 1.3.2.1.2.2.1.1.1 */
									// End offset: 0x80044994
									// End Line: 1157
								/* end block 1.3.2.1.2.2.1.1 */
								// End offset: 0x80044994
								// End Line: 1157
							/* end block 1.3.2.1.2.2.1 */
							// End offset: 0x80044A5C
							// End Line: 1490
						/* end block 1.3.2.1.2.2 */
						// End offset: 0x80044ACC
						// End Line: 1501
					/* end block 1.3.2.1.2 */
					// End offset: 0x80044ACC
					// End Line: 1501
				/* end block 1.3.2.1 */
				// End offset: 0x80044ACC
				// End Line: 1501
			/* end block 1.3.2 */
			// End offset: 0x80044ACC
			// End Line: 1501
		/* end block 1.3 */
		// End offset: 0x80044ACC
		// End Line: 1501
	/* end block 1 */
	// End offset: 0x80044ACC
	// End Line: 1501

	/* begin block 2 */
		// Start line: 2366
	/* end block 2 */
	// End Line: 2367

	/* begin block 3 */
		// Start line: 2369
	/* end block 3 */
	// End Line: 2370

	/* begin block 4 */
		// Start line: 2369
	/* end block 4 */
	// End Line: 2370

/* WARNING: Type propagation algorithm not settling */

void DrawController__23tScreenControllerConfig(tScreenControllerConfig *this)

{
  byte bVar1;
  bool bVar2;
  uchar *puVar3;
  short sVar4;
  int iVar5;
  uint frame;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int fadelevelmain;
  short sVar9;
  int fadeleveltop;
  short sVar10;
  short sVar11;
  undefined8 uVar12;
  tDrawShapeExtended tStack56;
  
  sVar11 = 0;
  sVar10 = 0;
  sVar9 = 0;
  fadeleveltop = 0;
  tStack56.custom_shapes = (this->tScreen).fSwapShapes.fShapes;
  bVar2 = false;
  if ((((*(char *)&this->fShakingItem == '\x04') &&
       (*(short *)&(menuDefs->itemDisplayPosition).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
                   fData == 0)) ||
      ((*(char *)&this->fShakingItem == '\x06' &&
       (*(short *)((menuDefs->menuDisplayOptions).tMenu.fItemList + 9) == 0)))) &&
     (*(short *)(menuDefs->itemAudioMode).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
                tMenuItemInteractive.tMenuItem._vf == 1)) {
    bVar2 = true;
  }
  if ((bVar2) && (*(char *)((int)this->fResetShakeTimeOut + -0x7feeb6a7) != '\0')) {
    if (*(short *)&this->SuperFastFadeOut != 0) {
      *(undefined2 *)&this->SuperFastFadeOut = 0;
      *(undefined **)&this->fPlayedInSound = &DAT_00000001;
    }
    SetActuators__23tScreenControllerConfigi
              (this,(uint)*(byte *)((int)this->fResetShakeTimeOut + -0x7feeb6a7) << 1);
    bVar1 = *(byte *)((int)this->fResetShakeTimeOut + -0x7feeb6a7);
    sVar9 = (ushort)(bVar1 >> 5) + 2;
    fadeleveltop = (uint)(bVar1 >> 6) + 2;
  }
  else {
    bVar2 = false;
    if ((((*(char *)&this->fShakingItem == '\x04') &&
         (*(short *)&(menuDefs->itemDisplayPosition).tMenuItemLeftRightFade.tMenuItemLeftRightChoice
                     .fData == 1)) ||
        ((*(char *)&this->fShakingItem == '\x06' &&
         (*(short *)((menuDefs->menuDisplayOptions).tMenu.fItemList + 9) == 1)))) &&
       (*(short *)(menuDefs->itemAudioMode).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
                  tMenuItemInteractive.tMenuItem._vf == 1)) {
      bVar2 = true;
    }
    if ((bVar2) && (bVar1 = *(byte *)((int)this->fResetShakeTimeOut + -0x7feeb6a5), bVar1 != 0)) {
      SetActuators__23tScreenControllerConfigi(this,(uint)bVar1 << 1);
      bVar1 = *(byte *)((int)this->fResetShakeTimeOut + -0x7feeb6a5);
      sVar9 = (ushort)(bVar1 >> 5) + 2;
      fadeleveltop = (uint)(bVar1 >> 6) + 2;
      if (*(short *)&this->SuperFastFadeOut != 1) {
        *(undefined2 *)&this->SuperFastFadeOut = 1;
        *(undefined **)&this->fPlayedInSound = &DAT_00000001;
      }
    }
    else {
      *(undefined2 *)&this->SuperFastFadeOut = 0xffff;
      ClearActuators__23tScreenControllerConfig(this);
    }
  }
  ShakeIt__23tScreenControllerConfig(this);
  fadelevelmain = (int)sVar9;
  if ((fadelevelmain != 0) || (fadeleveltop != 0)) {
    iVar5 = rand();
    if (fadelevelmain == 0) {
      trap(0x1c00);
    }
    if ((fadelevelmain == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    sVar11 = (short)(iVar5 % fadelevelmain) - (sVar9 >> 1);
    fadelevelmain = rand();
    iVar5 = (int)(short)fadeleveltop;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (fadelevelmain == -0x80000000)) {
      trap(0x1800);
    }
    sVar10 = (short)(fadelevelmain % iVar5) - ((short)fadeleveltop >> 1);
  }
  IsShapeFileLoaded__7tScreenR17tShapeInformation((tScreen *)this,&(this->tScreen).fSwapShapes);
  if ((this->tScreen).fSwapShapes.fFile != (char *)0x0) {
    UploadSwapShapes__7tScreeni((tScreen *)this,0x42);
    return;
  }
  if (((this->tScreen).fSwapShapes.fFlags & 1) == 0) {
    *(undefined2 *)&this->fStartTick = 0;
    return;
  }
  if (((((uint)*(byte *)&this->fShakingItem - 5 < 2) &&
       (*(short *)((int)&this->fStartTick + 2) == 0)) && (*(int *)&this->fPrevConfig == 0)) &&
     (this->fAnimController == 0)) {
    DAT_800528c4 = DAT_800528c4 + 0xfa;
    if ((int)DAT_800528c8 <= (int)DAT_800528c4) {
      DAT_800528c8 = DAT_800528c8 + DAT_800528cc;
      if (0x128e < (int)DAT_800528c8) {
        DAT_800528c8 = &DAT_0000128e;
        DAT_800528cc = -0x37;
      }
      if ((int)DAT_800528c8 < 0xea6) {
        DAT_800528c8 = (undefined *)0xea6;
        DAT_800528cc = 0x37;
      }
      DAT_800528c4 = DAT_800528c8;
    }
  }
  else {
    DAT_800528c8 = (undefined *)0xea6;
    DAT_800528c4 = DAT_800528c4 + -0xfa;
    if ((int)DAT_800528c4 < 0) {
      DAT_800528c4 = (undefined *)0x0;
    }
  }
  if (0 < (int)DAT_800528c4) {
    fadeleveltop = 0;
    do {
      fadelevelmain = (uint)*(byte *)&this->fShakingItem * 2;
      puVar8 = DAT_800528c4;
      if ((int)DAT_800528c4 < 0) {
        puVar8 = DAT_800528c4 + 3;
      }
      Flare_2DHalo__Fiiiii
                ((uint)(&Offset)[fadelevelmain] + (int)sVar11 + 0x7e,
                 (uint)s__800520d9[fadelevelmain] + fadeleveltop + 0x3f + (int)sVar10,
                 (int)DAT_800528c4,(int)puVar8 >> 2,0x15);
      fadeleveltop = fadeleveltop + 1;
    } while (fadeleveltop < 2);
  }
  if ((*(short *)&this->fPrevConfig == 0) || (this->fAnimController != 0)) {
    if (*(short *)&this->fTextController == 0) {
LAB_80044394:
      if (*(short *)&this->fPrevConfig == 0) {
        if ((*(short *)&this->fTextController == 0) || (this->fAnimController != 1))
        goto LAB_800443ec;
        sVar9 = this->fAnimStep;
        *(undefined2 *)&this->fTextController = 0;
      }
      else {
LAB_800443a4:
        sVar9 = this->fAnimStep;
        *(undefined2 *)&this->fPrevConfig = 0;
      }
joined_r0x80044318:
      if (sVar9 == 0) goto LAB_800443ec;
      SwapInController__23tScreenControllerConfig(this);
    }
    else {
      if (this->fAnimController == 0) {
        sVar9 = this->fFade[1];
        *(undefined2 *)&this->fTextController = 0;
        this->fAnimController = 1;
        this->fAnimFadeStop = sVar9;
        sVar9 = AnimKeyPoints__23tScreenControllerConfigbT1(this,&DAT_00000001,&DAT_00000001);
        this->fSwap = sVar9;
        sVar4 = AnimKeyPoints__23tScreenControllerConfigbT1(this,&DAT_00000001,(void *)0x0);
        sVar9 = this->fAnimStep;
        this->fAnimFade = sVar4;
        this->fAnimFadeStart = this->fSwap;
        goto joined_r0x80044318;
      }
      if (this->fAnimController != 1) goto LAB_80044394;
      if (*(short *)&this->fPrevConfig != 0) goto LAB_800443a4;
      sVar9 = this->fFade[1];
      *(undefined2 *)&this->fTextController = 0;
      this->fAnimController = 1;
      this->fAnimFadeStop = sVar9;
      sVar9 = AnimKeyPoints__23tScreenControllerConfigbT1(this,&DAT_00000001,&DAT_00000001);
      this->fSwap = sVar9;
      sVar9 = AnimKeyPoints__23tScreenControllerConfigbT1(this,&DAT_00000001,(void *)0x0);
      this->fAnimFade = sVar9;
      this->fAnimFadeStart = this->fSwap;
      if (this->fAnimStep == 0) goto LAB_800443ec;
      SwapInController__23tScreenControllerConfig(this);
      *(undefined2 *)&this->fStartTick = 0;
    }
    this->fAnimStep = 0;
  }
  else {
    *(undefined2 *)&this->fPrevConfig = 0;
    this->fAnimController = -1;
    this->fAnimFadeStop = this->fFade[0];
    sVar9 = AnimKeyPoints__23tScreenControllerConfigbT1(this,(void *)0x0,&DAT_00000001);
    this->fSwap = sVar9;
    sVar9 = AnimKeyPoints__23tScreenControllerConfigbT1(this,(void *)0x0,(void *)0x0);
    this->fAnimFade = sVar9;
    this->fAnimFadeStart = this->fSwap;
  }
LAB_800443ec:
  puVar3 = ticks;
  if (this->fAnimController != 0) {
    if (*(short *)&this->fStartTick == 0) {
      *(undefined2 *)&this->fStartTick = 1;
      this->fTimeOutStartTick = 0;
      *(uchar **)this->fFadeController = puVar3;
    }
    if (((10 < (int)(ticks + -*(int *)this->fFadeController)) && (this->fTimeOutStartTick == 0)) &&
       (this->fAnimController == 1)) {
      AudioCmn_PlayFESFX__Fi(0xf);
      this->fTimeOutStartTick = 1;
    }
    fadeleveltop = (uint)(ushort)this->fSwap +
                   ((int)(ticks + -*(int *)this->fFadeController) / 6) * (int)this->fAnimController;
    this->fAnimFadeStart = (short)fadeleveltop;
    fadeleveltop = fadeleveltop * 0x10000 >> 0x10;
    if ((((int)this->fAnimFade < fadeleveltop) && ((int)this->fAnimController == 1)) ||
       ((fadeleveltop < (int)this->fAnimFade && (this->fAnimController == -1)))) {
      *(undefined2 *)&this->fStartTick = 0;
      this->fAnimFadeStart = this->fAnimFade;
      if (this->fAnimController == 1) {
        this->fArrowFade = 0;
        *(undefined2 *)&this->fTransitioningOut = 0x80;
      }
    }
    fadelevelmain = ((int)this->fAnimFadeStart - (int)this->fSwap) * 0x80;
    iVar5 = (int)this->fAnimFade - (int)this->fSwap;
    fadeleveltop = fadelevelmain / iVar5;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (fadelevelmain == -0x80000000)) {
      trap(0x1800);
    }
    if (fadeleveltop < 0) {
      fadeleveltop = -fadeleveltop;
    }
    fadelevelmain = fadeleveltop << 1;
    if ((this->negconPopUp).yesnowords[1] != 0) {
      fadelevelmain = fadeleveltop << 2;
    }
    if (0x80 < fadelevelmain) {
      fadelevelmain = 0x80;
    }
    if (this->fAnimController == 1) {
      fadelevelmain = 0x80 - fadelevelmain;
    }
    if (*(short *)&this->fStartTick == 0) {
      this->fAnimController = 0;
    }
    frame = CalcAnimFrame__23tScreenControllerConfigi(this,(int)this->fAnimFadeStart);
    fadeleveltop = fadelevelmain;
    goto LAB_80044a68;
  }
  if (*(short *)((int)&this->fStartTick + 2) != 0) {
    if (*(short *)&this->fStartTick == 0) {
      AudioCmn_PlayFESFX__Fi(0xf);
      puVar3 = ticks;
      *(undefined2 *)&this->fStartTick = 1;
      *(uchar **)this->fFadeController = puVar3;
    }
    fadeleveltop = (uint)(ushort)this->fAnim +
                   ((int)(ticks + -*(int *)this->fFadeController) / 6) * (int)this->fAnimStart;
    this->fGotTick = (short)fadeleveltop;
    fadeleveltop = fadeleveltop * 0x10000 >> 0x10;
    if ((((int)this->fAnimFrame < fadeleveltop) && ((int)this->fAnimStart == 1)) ||
       ((fadeleveltop < (int)this->fAnimFrame && (this->fAnimStart == -1)))) {
      sVar9 = this->fAnimFrame;
      *(undefined2 *)((int)&this->fStartTick + 2) = 0;
      *(undefined2 *)&this->fStartTick = 0;
      this->fGotTick = sVar9;
    }
    frame = __floatsisf((int)(ticks + -*(int *)this->fFadeController));
    uVar6 = __floatsisf(((int)this->fAnimFrame - (int)this->fAnim) * (int)this->fAnimStart * 6);
    frame = __divsf3(frame,uVar6);
    uVar12 = __extendsfdf2(frame);
    uVar12 = __muldf3((uint)((ulonglong)uVar12 >> 0x20),(uint)uVar12,0,0x40700000);
    uVar6 = __fixdfsi((uint)((ulonglong)uVar12 >> 0x20),(uint)uVar12);
    frame = uVar6;
    if (0x100 < (int)uVar6) {
      frame = 0x100;
    }
    if (0x80 < (int)uVar6) {
      frame = 0x100 - frame;
    }
    fadelevelmain = frame + 10;
    fadeleveltop = fadelevelmain;
    if (fadelevelmain < 0) {
      fadeleveltop = 0;
    }
    if (0x80 < fadelevelmain) {
      fadeleveltop = 0x80;
    }
    frame = CalcAnimFrame__23tScreenControllerConfigi(this,(int)this->fGotTick);
    fadelevelmain = 0;
    goto LAB_80044a68;
  }
  if ((uint)*(byte *)&this->fShakingItem - 5 < 2) {
    frame = 0;
    if ((*(int *)((menuDefs->iteratorDisplayOpponentID).tListIterator._vf + 2) != 0) ||
       ((menuDefs->iteratorDisplaySplitTime).fSelectionList != (short *)0x0)) {
      fadeleveltop = (int)this->fResetShakeTimeOut * 0x20;
      fadelevelmain = 0x80 - (uint)*(byte *)((int)gPadinfo.buf + fadeleveltop + 7);
      iVar5 = 0x80 - (uint)*(byte *)((int)gPadinfo.buf + fadeleveltop + 6);
      fadeleveltop = iVar5;
      if (iVar5 < 0) {
        fadeleveltop = -iVar5;
      }
      iVar7 = fadelevelmain;
      if (fadelevelmain < 0) {
        iVar7 = -fadelevelmain;
      }
      if (iVar7 < fadeleveltop) {
        fadelevelmain = iVar5;
      }
      fadeleveltop = (fadelevelmain << 0x10) >> 0x10;
      if (fadeleveltop < 0) {
        frame = -fadeleveltop / 0xd + 0x24;
      }
      else {
        frame = ((fadeleveltop / 0xd + (fadeleveltop >> 0x1f)) - ((fadelevelmain << 0x10) >> 0x1f))
                + 0x1a;
      }
    }
    if (((menuDefs->menuAudio).tMenu.fItemList[9] != (_func_21 *)0x0) ||
       (*(int *)&(menuDefs->menuAudio).fTransitionDirection != 0)) {
      fadeleveltop = (int)this->fResetShakeTimeOut * 0x20;
      fadelevelmain = 0x80 - (uint)*(byte *)((int)gPadinfo.buf + fadeleveltop + 5);
      iVar5 = 0x80 - (uint)*(byte *)((int)gPadinfo.buf + fadeleveltop + 4);
      fadeleveltop = iVar5;
      if (iVar5 < 0) {
        fadeleveltop = -iVar5;
      }
      iVar7 = fadelevelmain;
      if (fadelevelmain < 0) {
        iVar7 = -fadelevelmain;
      }
      if (iVar7 < fadeleveltop) {
        fadelevelmain = iVar5;
      }
      fadeleveltop = (fadelevelmain << 0x10) >> 0x10;
      if (fadeleveltop < 0) {
        frame = -fadeleveltop / 0xd + 0x38;
      }
      else {
        frame = ((fadeleveltop / 0xd + (fadeleveltop >> 0x1f)) - ((fadelevelmain << 0x10) >> 0x1f))
                + 0x2e;
      }
    }
    if ((frame & 0xff) != 0) {
      fadeleveltop = (int)this->fAnimFadeFrame * 2;
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (frame & 0xff,0x600,(uint)(&Offset)[fadeleveltop],(uint)s__800520d9[fadeleveltop],0,
                 0,&tStack56);
    }
  }
  bVar1 = *(byte *)&this->fShakingItem;
  if ((1 < (uint)bVar1 - 1) ||
     ((*(int *)((menuDefs->itemDisplaySpeedometer).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
                tMenuItemInteractive.tMenuItem._vf + 8) == 0 &&
      ((menuDefs->itemDisplayMap).tMenuItemLeftRightFade.flareextra == 0)))) {
    if (*(char *)&this->fShakingItem != '\0') {
      ActualDrawController__23tScreenControllerConfigiiiii(this,0,0,0,(int)sVar11,(int)sVar10);
      return;
    }
    (this->fShaker).actuator[0] = '\0';
    *(undefined2 *)&this->fTransitioningOut = 0x80;
    this->fArrowFade = 0;
    return;
  }
  fadeleveltop = (uint)*(byte *)((int)gPadinfo.buf + (int)this->fResetShakeTimeOut * 0x20 + 4) -
                 0x80;
  if (fadeleveltop < 0xb) {
    fadelevelmain = 0x23;
    if (fadeleveltop < -10) {
      fadeleveltop = -fadeleveltop;
      if (bVar1 != 2) goto LAB_80044a2c;
      fadelevelmain = 0x10;
      goto LAB_800449d8;
    }
    frame = (uint)(bVar1 == 2);
  }
  else {
    fadelevelmain = 0x1a;
    if (bVar1 == 2) {
      fadelevelmain = 2;
LAB_800449d8:
      frame = fadelevelmain + (fadeleveltop * 0xd) / 0x81;
    }
    else {
LAB_80044a2c:
      frame = fadelevelmain + (fadeleveltop << 3) / 0x81;
    }
  }
  fadelevelmain = 0;
  fadeleveltop = fadelevelmain;
LAB_80044a68:
  ActualDrawController__23tScreenControllerConfigiiiii(this,frame,fadelevelmain,fadeleveltop,0,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HorzVertLine__23tScreenControllerConfigPsb(struct tScreenControllerConfig *this /*$s6*/, short *ArrowLoc /*$a1*/, void * type /*$s5*/)
 // line 1518, offset 0x80044af4
	/* begin block 1 */
		// Start line: 1519
		// Start offset: 0x80044AF4
		// Variables:
	// 		int startx; // $s0
	// 		int starty; // $s2
	// 		int endx; // $s1
	// 		int endy; // $s3
	// 		int LineCol; // $s7

		/* begin block 1.1 */
			// Start line: 1533
			// Start offset: 0x80044B80

			/* begin block 1.1.1 */
				// Start line: 1534
				// Start offset: 0x80044B88
				// Variables:
			// 		int extrabitoff; // $s4
			// 		int extrabit; // $s0
			// 		short length; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 1538
					// Start offset: 0x80044BAC

					/* begin block 1.1.1.1.1 */
						// Start line: 1541
						// Start offset: 0x80044BC0
						// Variables:
					// 		int brightlength; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80044C18
					// End Line: 1544
				/* end block 1.1.1.1 */
				// End offset: 0x80044C18
				// End Line: 1544
			/* end block 1.1.1 */
			// End offset: 0x80044C18
			// End Line: 1547

			/* begin block 1.1.2 */
				// Start line: 1550
				// Start offset: 0x80044C48
				// Variables:
			// 		int extrabit; // $s0
			// 		short length; // $s4

				/* begin block 1.1.2.1 */
					// Start line: 1552
					// Start offset: 0x80044C48

					/* begin block 1.1.2.1.1 */
						// Start line: 1558
						// Start offset: 0x80044C64

						/* begin block 1.1.2.1.1.1 */
							// Start line: 1559
							// Start offset: 0x80044C64

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 1561
								// Start offset: 0x80044C9C
								// Variables:
							// 		int brightlength; // $a3
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x80044CD0
							// End Line: 1562
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x80044CD0
						// End Line: 1562
					/* end block 1.1.2.1.1 */
					// End offset: 0x80044CD0
					// End Line: 1562
				/* end block 1.1.2.1 */
				// End offset: 0x80044CD0
				// End Line: 1562
			/* end block 1.1.2 */
			// End offset: 0x80044D14
			// End Line: 1566
		/* end block 1.1 */
		// End offset: 0x80044D14
		// End Line: 1566
	/* end block 1 */
	// End offset: 0x80044D14
	// End Line: 1566

	/* begin block 2 */
		// Start line: 3131
	/* end block 2 */
	// End Line: 3132

	/* begin block 3 */
		// Start line: 3145
	/* end block 3 */
	// End Line: 3146

	/* begin block 4 */
		// Start line: 3145
	/* end block 4 */
	// End Line: 3146

void HorzVertLine__23tScreenControllerConfigPsb
               (tScreenControllerConfig *this,short *ArrowLoc,void *type)

{
  int iVar1;
  int iVar2;
  int x;
  short sVar3;
  int y;
  int local_30;
  uint uVar4;
  int iVar5;
  int y_00;
  uint uVar6;
  undefined *col;
  
  local_30 = (int)ArrowLoc[2];
  x = (int)ArrowLoc[4];
  y_00 = (int)ArrowLoc[3];
  y = (int)ArrowLoc[5];
  if (type != (void *)0x0) {
    local_30 = (int)*ArrowLoc;
    y_00 = (int)ArrowLoc[1];
    x = (int)ArrowLoc[2];
    y = (int)ArrowLoc[3];
  }
  col = &DAT_001e1e1e;
  if (0 < *(short *)((int)&this->fTransitioningOut + 2)) {
    col = (undefined *)CalcFadeVal__Fii((int)&DAT_001e1e1e,(int)*(short *)&this->fTransitioningOut);
  }
  sVar3 = (short)(x - local_30);
  if (local_30 == x) {
    uVar6 = 0;
    if (type == (void *)0x0) {
      uVar6 = (uint)(y < y_00) ^ 1;
    }
    uVar4 = 0;
    if ((undefined *)type == &DAT_00000001) {
      uVar4 = (uint)(y < y_00) ^ 1;
    }
    sVar3 = (short)(y - y_00);
    if ((int)*(short *)&this->fFadeTextOut != 0x40) {
      local_30 = ((y - y_00) * 0x10000 >> 0x10) * (int)*(short *)&this->fFadeTextOut >> 6;
      sVar3 = (short)local_30;
      local_30 = local_30 << 0x10;
      y_00 = local_30 >> 0x13;
      PSXDrawTransSquare__Fiiiiis
                (0xffffff,x,y - ((((local_30 >> 0x10) - y_00) - uVar6) + uVar4),2,-y_00,2);
    }
    y = y + uVar4;
    y_00 = 2;
    local_30 = -(((int)sVar3 - uVar6) + uVar4);
  }
  else {
    iVar5 = ((uint)(x < local_30) ^ 1) * 2;
    if ((int)*(short *)&this->fFadeTextOut != 0x40) {
      iVar1 = ((x - local_30) * 0x10000 >> 0x10) * (int)*(short *)&this->fFadeTextOut >> 6;
      sVar3 = (short)iVar1;
      iVar1 = iVar1 << 0x10;
      iVar2 = iVar1 >> 0x10;
      local_30 = iVar2;
      if (iVar2 < 0) {
        local_30 = -iVar2;
      }
      if (local_30 <= iVar5) {
        return;
      }
      iVar1 = iVar1 >> 0x13;
      PSXDrawTransSquare__Fiiiiis(0xffffff,(x - (iVar2 - iVar1)) + iVar5,y_00,-(iVar1 + iVar5),1,2);
    }
    y_00 = (int)sVar3;
    local_30 = y_00;
    if (y_00 < 0) {
      local_30 = -y_00;
    }
    if (local_30 <= iVar5) {
      return;
    }
    x = x + iVar5;
    y_00 = -(y_00 + iVar5);
    local_30 = 1;
  }
  PSXDrawTransSquare__Fiiiiis((int)col,x,y,y_00,local_30,2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawArrow__23tScreenControllerConfigPs(struct tScreenControllerConfig *this /*$s0*/, short *ArrowLoc /*$s1*/)
 // line 1571, offset 0x80044d40
	/* begin block 1 */
		// Start line: 1572
		// Start offset: 0x80044D40
	/* end block 1 */
	// End offset: 0x80044E0C
	// End Line: 1600

	/* begin block 2 */
		// Start line: 3249
	/* end block 2 */
	// End Line: 3250

	/* begin block 3 */
		// Start line: 3255
	/* end block 3 */
	// End Line: 3256

	/* begin block 4 */
		// Start line: 3255
	/* end block 4 */
	// End Line: 3256

void DrawArrow__23tScreenControllerConfigPs(tScreenControllerConfig *this,short *ArrowLoc)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  
  *(undefined2 *)&this->fFadeTextOut = 0;
  settrans(1);
  FeDraw_SetABRMode__Fi(0);
  if (*ArrowLoc != 0) {
    if (*(short *)((int)&this->fTransitioningOut + 2) < 0) {
      iVar2 = 0x40 - (uint)*(ushort *)&this->fTransitioningOut;
      *(short *)&this->fFadeTextOut = (short)iVar2;
      if (iVar2 * 0x10000 < 0) {
        *(undefined2 *)&this->fFadeTextOut = 0;
      }
    }
    else {
      *(undefined2 *)&this->fFadeTextOut = 0x40;
    }
    HorzVertLine__23tScreenControllerConfigPsb(this,ArrowLoc,&DAT_00000001);
  }
  uVar1 = 0x40;
  if (*(short *)((int)&this->fTransitioningOut + 2) < 0) {
    iVar2 = 0x80 - (uint)*(ushort *)&this->fTransitioningOut;
    iVar4 = iVar2 * 0x10000 >> 0x10;
    uVar3 = (undefined2)iVar2;
    *(undefined2 *)&this->fFadeTextOut = uVar3;
    if (((iVar4 < 1) || (uVar1 = 0x40, iVar4 < 0x40)) && (uVar1 = uVar3, iVar4 < 0)) {
      uVar1 = 0;
    }
  }
  *(undefined2 *)&this->fFadeTextOut = uVar1;
  HorzVertLine__23tScreenControllerConfigPsb(this,ArrowLoc,(void *)0x0);
  FeDraw_SetABRMode__Fi(1);
  settrans(0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__23tScreenControllerConfig(struct tScreenControllerConfig *this /*$s0*/)
 // line 1608, offset 0x80044e40
	/* begin block 1 */
		// Start line: 1609
		// Start offset: 0x80044E40
		// Variables:
	// 		short fade; // $s1

		/* begin block 1.1 */
			// Start line: 1609
			// Start offset: 0x80044E40
			// Variables:
		// 		struct tOptionsMenu *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 1609
				// Start offset: 0x80044E40
			/* end block 1.1.1 */
			// End offset: 0x80044E40
			// End Line: 1609
		/* end block 1.1 */
		// End offset: 0x80044E40
		// End Line: 1609

		/* begin block 1.2 */
			// Start line: 1652
			// Start offset: 0x80045014
			// Variables:
		// 		int i; // $s0
		/* end block 1.2 */
		// End offset: 0x80045050
		// End Line: 1653
	/* end block 1 */
	// End offset: 0x80045050
	// End Line: 1653

	/* begin block 2 */
		// Start line: 3327
	/* end block 2 */
	// End Line: 3328

	/* begin block 3 */
		// Start line: 3333
	/* end block 3 */
	// End Line: 3334

	/* begin block 4 */
		// Start line: 3333
	/* end block 4 */
	// End Line: 3334

/* WARNING: Type propagation algorithm not settling */

void DrawBackground__23tScreenControllerConfig(tScreenControllerConfig *this)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  void *pvVar5;
  undefined *puVar6;
  int index;
  int iVar7;
  int iVar8;
  
  sVar2 = (short)((int)(menuDefs->menuPlayListMenu).tInsideBoxMenu.tMenu.fFlags >> 1);
  if (0x80 < sVar2) {
    sVar2 = 0x80;
  }
  if ((*(int *)&this->negconChoice == 0) &&
     (pvVar5 = TransitionIsFinished__12tOptionsMenu
                         ((tOptionsMenu *)
                          &(menuDefs->itemAudioMode).tMenuItemLeftRightFade.tMenuItemLeftRightChoice
                           .tMenuItemInteractive.tMenuItem.fNumFrames), pvVar5 != (void *)0x0)) {
    *(undefined4 *)&this->negconChoice = 1;
  }
  if (((sVar2 < 0x81) && (this->fTransitionedIn == (void *)0x0)) &&
     (*(char *)&this->fShakingItem != '\0')) {
    this->fAnimController = 1;
    sVar3 = AnimKeyPoints__23tScreenControllerConfigbT1(this,&DAT_00000001,&DAT_00000001);
    this->fSwap = sVar3;
    sVar3 = AnimKeyPoints__23tScreenControllerConfigbT1(this,&DAT_00000001,(void *)0x0);
    this->fAnimFade = sVar3;
    *(undefined **)&this->fTransitionedIn = &DAT_00000001;
    this->fAnimFadeStart = this->fSwap;
    this->fAnimFadeStop = (ushort)*(byte *)&this->fShakingItem;
  }
  puVar6 = (undefined *)
           TransitionIsFinished__12tOptionsMenu
                     ((tOptionsMenu *)
                      &(menuDefs->itemAudioMode).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
                       tMenuItemInteractive.tMenuItem.fNumFrames);
  if ((puVar6 != &DAT_00000001) && (*(int *)&this->negconChoice != 0)) {
    if (this->fTransitioningIn != (void *)0x0) goto LAB_80044fdc;
    if (*(char *)&this->fShakingItem != '\0') {
      this->fAnimController = -1;
      sVar3 = AnimKeyPoints__23tScreenControllerConfigbT1(this,(void *)0x0,&DAT_00000001);
      this->fSwap = sVar3;
      sVar4 = AnimKeyPoints__23tScreenControllerConfigbT1(this,(void *)0x0,(void *)0x0);
      sVar3 = this->fSwap;
      bVar1 = *(byte *)&this->fShakingItem;
      this->fAnimFade = sVar4;
      *(undefined **)&this->fTransitioningIn = &DAT_00000001;
      (this->negconPopUp).yesnowords[1] = 1;
      this->fAnimFadeStart = sVar3;
      this->fAnimFadeStop = (ushort)bVar1;
    }
  }
  if (this->fTransitioningIn == (void *)0x0) {
    SetCurrentController__23tScreenControllerConfigb(this,(void *)0x0);
    CheckConfigs__23tScreenControllerConfig(this);
  }
LAB_80044fdc:
  if (((this->fAnimController != 0) || (this->fTransitioningIn == (void *)0x0)) &&
     (this->fTransitionedIn != (void *)0x0)) {
    DrawController__23tScreenControllerConfig(this);
  }
  index = 10;
  iVar7 = 0;
  do {
    ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended
              (index,0,0,0,(int)sVar2,0,(tDrawShapeExtended *)0x0);
    iVar8 = iVar7 + 1;
    index = iVar7 + 0xb;
    iVar7 = iVar8;
  } while (iVar8 < 0xc);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawForeground__23tScreenControllerConfig(struct tScreenControllerConfig *this /*$s3*/)
 // line 1659, offset 0x80045064
	/* begin block 1 */
		// Start line: 1660
		// Start offset: 0x80045064
		// Variables:
	// 		short TL[5]; // stack offset -152
	// 		short i; // $s5
	// 		short j; // $s0
	// 		char string1[40]; // stack offset -136
	// 		char string2[40]; // stack offset -96
	// 		char brightstring[2]; // stack offset -56
	// 		char *astringpointer; // $s0
	// 		int brightX; // $s1
	// 		short sl; // $s6
	// 		short fade; // $v1

		/* begin block 1.1 */
			// Start line: 1710
			// Start offset: 0x800451F0

			/* begin block 1.1.1 */
				// Start line: 1711
				// Start offset: 0x80045200
				// Variables:
			// 		int ColText; // $fp
			// 		int ColText2; // stack offset -48

				/* begin block 1.1.1.1 */
					// Start line: 1711
					// Start offset: 0x80045200

					/* begin block 1.1.1.1.1 */
						// Start line: 1711
						// Start offset: 0x80045200
					/* end block 1.1.1.1.1 */
					// End offset: 0x80045200
					// End Line: 1711
				/* end block 1.1.1.1 */
				// End offset: 0x80045200
				// End Line: 1711

				/* begin block 1.1.1.2 */
					// Start line: 1711
					// Start offset: 0x80045200

					/* begin block 1.1.1.2.1 */
						// Start line: 1721
						// Start offset: 0x80045250
						// Variables:
					// 		int TextIndex; // $v0

						/* begin block 1.1.1.2.1.1 */
							// Start line: 1724
							// Start offset: 0x80045290

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 1726
								// Start offset: 0x800452BC
								// Variables:
							// 		int k; // $s2

								/* begin block 1.1.1.2.1.1.1.1 */
									// Start line: 1732
									// Start offset: 0x8004532C

									/* begin block 1.1.1.2.1.1.1.1.1 */
										// Start line: 1735
										// Start offset: 0x80045344
										// Variables:
									// 		int howfarout; // $s0
									/* end block 1.1.1.2.1.1.1.1.1 */
									// End offset: 0x800454A8
									// End Line: 1773
								/* end block 1.1.1.2.1.1.1.1 */
								// End offset: 0x800454EC
								// End Line: 1779

								/* begin block 1.1.1.2.1.1.1.2 */
									// Start line: 1786
									// Start offset: 0x800454EC
								/* end block 1.1.1.2.1.1.1.2 */
								// End offset: 0x80045548
								// End Line: 1791
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x80045548
							// End Line: 1791
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x80045548
						// End Line: 1791
					/* end block 1.1.1.2.1 */
					// End offset: 0x80045548
					// End Line: 1791
				/* end block 1.1.1.2 */
				// End offset: 0x80045550
				// End Line: 1794
			/* end block 1.1.1 */
			// End offset: 0x80045550
			// End Line: 1794
		/* end block 1.1 */
		// End offset: 0x80045550
		// End Line: 1794

		/* begin block 1.2 */
			// Start line: 1798
			// Start offset: 0x80045550

			/* begin block 1.2.1 */
				// Start line: 1798
				// Start offset: 0x8004556C

				/* begin block 1.2.1.1 */
					// Start line: 1800
					// Start offset: 0x800455A4

					/* begin block 1.2.1.1.1 */
						// Start line: 1800
						// Start offset: 0x800455A4
						// Variables:
					// 		struct tDialogBase *this; // $a1

						/* begin block 1.2.1.1.1.1 */
							// Start line: 1800
							// Start offset: 0x800455A4
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800455A4
						// End Line: 1800
					/* end block 1.2.1.1.1 */
					// End offset: 0x800455A4
					// End Line: 1800

					/* begin block 1.2.1.1.2 */
						// Start line: 1800
						// Start offset: 0x800455B4

						/* begin block 1.2.1.1.2.1 */
							// Start line: 1800
							// Start offset: 0x800455B4
						/* end block 1.2.1.1.2.1 */
						// End offset: 0x800455B4
						// End Line: 1800
					/* end block 1.2.1.1.2 */
					// End offset: 0x800455B4
					// End Line: 1800
				/* end block 1.2.1.1 */
				// End offset: 0x80045608
				// End Line: 1803
			/* end block 1.2.1 */
			// End offset: 0x80045608
			// End Line: 1803
		/* end block 1.2 */
		// End offset: 0x80045610
		// End Line: 1805

		/* begin block 1.3 */
			// Start line: 1807
			// Start offset: 0x80045610

			/* begin block 1.3.1 */
				// Start line: 1807
				// Start offset: 0x80045610
			/* end block 1.3.1 */
			// End offset: 0x80045610
			// End Line: 1807
		/* end block 1.3 */
		// End offset: 0x80045610
		// End Line: 1807
	/* end block 1 */
	// End offset: 0x8004569C
	// End Line: 1814

	/* begin block 2 */
		// Start line: 3441
	/* end block 2 */
	// End Line: 3442

	/* begin block 3 */
		// Start line: 3448
	/* end block 3 */
	// End Line: 3449

	/* begin block 4 */
		// Start line: 3448
	/* end block 4 */
	// End Line: 3449

/* WARNING: Type propagation algorithm not settling */

void DrawForeground__23tScreenControllerConfig(tScreenControllerConfig *this)

{
  uchar uVar1;
  bool bVar2;
  undefined2 uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  void *pvVar8;
  int w;
  char *__s;
  size_t sVar9;
  int iVar10;
  short *psVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  short *psVar15;
  char *string;
  int col1;
  short local_98;
  short local_96;
  short local_94;
  short local_92;
  char acStack137 [41];
  char local_60 [40];
  char local_38;
  undefined local_37;
  int local_30;
  
  SetCurrentController__23tScreenControllerConfigb(this,(void *)0x0);
  CheckConfigs__23tScreenControllerConfig(this);
  local_37 = 0;
  uVar3 = 8;
  if ((((*(int *)&this->fTextTypeOn == 0) &&
       (uVar3 = 8, *(short *)((int)&this->fStartTick + 2) == 0)) &&
      (uVar3 = 8, this->fAnimController == 0)) && (uVar3 = 8, *(int *)&this->fPrevConfig == 0)) {
    pvVar8 = TransitionIsFinished__12tOptionsMenu
                       ((tOptionsMenu *)
                        &(menuDefs->itemAudioMode).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
                         tMenuItemInteractive.tMenuItem.fNumFrames);
    uVar3 = 8;
    if (((pvVar8 != (void *)0x0) && (uVar3 = 8, this->fTransitioningIn == (void *)0x0)) &&
       (uVar3 = 0xfff8, 0 < *(short *)((int)&this->fTransitioningOut + 2))) {
      this->fArrowFade = 0;
    }
  }
  *(undefined2 *)((int)&this->fTransitioningOut + 2) = uVar3;
  uVar4 = *(short *)&this->fTransitioningOut + *(short *)((int)&this->fTransitioningOut + 2);
  *(ushort *)&this->fTransitioningOut = uVar4;
  if ((int)((uint)uVar4 << 0x10) < 0) {
    *(undefined2 *)&this->fTransitioningOut = 0;
  }
  if (*(short *)&this->fTransitioningOut < 0x80) {
    if (*(short *)&this->fTransitioningOut == 0) {
      this->fArrowFade = this->fArrowFade + 1;
    }
    if (100 < this->fArrowFade) {
      this->fArrowFade = 100;
    }
    if (*(short *)&this->fTransitioningOut != 0) {
      FETextRender_SetABR__Fib(1,&DAT_00000001);
    }
    if ((this->fShaker).actuator[0] != '\0') {
      sVar7 = 0;
      string = acStack137 + 1;
      col1 = kRGBVals[(uint)DAT_800515fd];
      local_30 = CalcFadeVal__Fiiii(col1,0xffffff,100,(int)*(short *)&this->fTransitioningOut);
      col1 = CalcFadeVal__Fii(col1,(int)*(short *)&this->fTransitioningOut);
      while( true ) {
        uVar13 = (uint)(this->fShaker).fade;
        w = (uint)(this->fShaker).actuator[0] - 1;
        if ((int)NumTexts[w * 3 + uVar13] <= (int)sVar7) break;
        psVar15 = &local_98;
        if ((int)(&ControllerItemIndex)[(int)sVar7 * 2 + uVar13 * 0x20 + w * 0x60] != -1) {
          iVar14 = 4;
          psVar11 = &TextLocations +
                    (int)(&ControllerItemIndex)[(int)sVar7 * 2 + uVar13 * 0x20 + w * 0x60] * 5;
          do {
            sVar12 = *psVar11;
            psVar11 = psVar11 + 1;
            iVar14 = iVar14 + -1;
            *psVar15 = sVar12;
            psVar15 = psVar15 + 1;
          } while (iVar14 != -1);
          __s = TextSys_Word__Fi((int)local_94);
          sVar9 = strlen(__s);
          sVar5 = (short)sVar9;
          w = (int)sVar5;
          sVar12 = this->fArrowFade;
          if (w < (int)this->fArrowFade) {
            sVar12 = sVar5;
          }
          iVar14 = (int)sVar12;
          if ((int)this->fArrowFade < w) {
            __s = TextSys_Word__Fi((int)local_94);
            sprintf(local_60,__s);
            iVar10 = sVar9 - iVar14;
            sVar12 = (short)iVar10;
            if (local_92 == 0) {
              w = 0;
              sVar12 = 0;
              if (0 < this->fArrowFade) {
                do {
                  sVar12 = (short)w;
                  sVar9 = strlen(local_60);
                  iVar14 = w << 0x10;
                  iVar10 = iVar14 >> 0x10;
                  w = w + 1;
                  if ((int)(sVar9 << 0x10) <= iVar14) break;
                  string[iVar10] = local_60[iVar10];
                  sVar12 = (short)w;
                } while (w * 0x10000 >> 0x10 < (int)this->fArrowFade);
              }
              string[(int)sVar12] = '\0';
              local_38 = acStack137[(int)sVar12];
            }
            else {
              if (iVar10 * 0x10000 >> 0x10 < w) {
                do {
                  sVar6 = (short)iVar10;
                  iVar10 = iVar10 + 1;
                  sVar12 = (short)iVar10;
                  string[(int)sVar6 - (w - iVar14)] = local_60[(int)sVar6];
                } while (iVar10 * 0x10000 >> 0x10 < w);
              }
              string[(int)sVar12 - ((int)sVar5 - iVar14)] = '\0';
              local_38 = acStack137[1];
            }
            FETextRender_SetFont__Fi(0);
            iVar14 = (int)local_98;
            w = textpixels(string);
            sVar9 = strlen(string);
            w = w - sVar9;
            if (local_92 == 1) {
              w = -w;
            }
            __s = acStack137 + 1;
            FETextRender_FullTextRGB__FPcssics
                      (&local_38,(short)((uint)((iVar14 + w) * 0x10000) >> 0x10),local_96,local_30,0
                       ,(uint)(local_92 == 0));
          }
          else {
            __s = TextSys_Word__Fi((int)local_94);
          }
          FETextRender_FullTextRGB__FPcssics(__s,local_98,local_96,col1,0,(int)local_92);
          w = textpixels(__s);
          sVar9 = strlen(__s);
          w = w - sVar9;
          if (local_92 != 0) {
            w = -w;
          }
          PSXDrawSquare__Fiiiii(0,(int)local_98,(int)local_96,w,7);
        }
        sVar7 = sVar7 + 1;
      }
    }
    sVar7 = 0;
    while( true ) {
      uVar13 = (uint)(this->fShaker).fade;
      col1 = (uint)(this->fShaker).actuator[0] - 1;
      if ((int)NumTexts[col1 * 3 + uVar13] <= (int)sVar7) break;
      bVar2 = false;
      if (*(int *)&(this->negconPopUp).tDialogInteractive.tDialogMessageString.tDialogBase.top == 0)
      {
        bVar2 = (this->negconPopUp).tDialogInteractive.tDialogMessageString.Centerit == (void *)0x0;
      }
      if (((bVar2) && (-1 < col1)) &&
         ((int)s______800526e5[(int)sVar7 * 2 + uVar13 * 0x20 + col1 * 0x60] != -1)) {
        DrawArrow__23tScreenControllerConfigPs
                  (this,ArrowLocations +
                        (int)s______800526e5[(int)sVar7 * 2 + uVar13 * 0x20 + col1 * 0x60] * 6);
      }
      sVar7 = sVar7 + 1;
    }
    FETextRender_SetABR__Fib(0,(void *)0x0);
    sVar7 = (short)((int)(menuDefs->menuPlayListMenu).tInsideBoxMenu.tMenu.fFlags >> 1);
    col1 = 0;
    if (0x80 < sVar7) {
      sVar7 = 0x80;
    }
    w = 0;
    do {
      ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended
                ((w >> 0x10) + 0x16,0,0,0,(int)sVar7,0,(tDrawShapeExtended *)0x0);
      col1 = col1 + 1;
      w = col1 * 0x10000;
    } while (col1 * 0x10000 >> 0x10 < 2);
  }
  else {
    uVar1 = *(uchar *)&this->fShakingItem;
    *(undefined2 *)&this->fTransitioningOut = 0x80;
    (this->fShaker).actuator[0] = uVar1;
    if (uVar1 == '\x06') {
      (this->fShaker).actuator[0] = '\x05';
    }
    uVar1 = *(uchar *)((int)this->fResetShakeTimeOut + -0x7feeb69e);
    *(undefined4 *)&this->fTextTypeOn = 0;
    (this->fShaker).fade = uVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__23tScreenControllerConfigRsT1PPcT3(struct tScreenControllerConfig *this /*$a0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$a3*/, char **swapFileName /*stack 16*/)
 // line 1819, offset 0x800456cc
	/* begin block 1 */
		// Start line: 1820
		// Start offset: 0x800456CC
	/* end block 1 */
	// End offset: 0x800456CC
	// End Line: 1820

	/* begin block 2 */
		// Start line: 3780
	/* end block 2 */
	// End Line: 3781

	/* begin block 3 */
		// Start line: 3783
	/* end block 3 */
	// End Line: 3784

	/* begin block 4 */
		// Start line: 3783
	/* end block 4 */
	// End Line: 3784

void GetShapeInfo__23tScreenControllerConfigRsT1PPcT3
               (tScreenControllerConfig *this,short *numPermShapes,short *numSwapShapes,
               char **permFileName,char **swapFileName)

{
  *numPermShapes = 0x18;
  *permFileName = s_zpCtrl_8001206c;
  *numSwapShapes = 0x42;
  *swapFileName = s_aCtrl_80012064;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__23tScreenControllerConfig(struct tScreenControllerConfig *this /*$s0*/)
 // line 1831, offset 0x800456fc
	/* begin block 1 */
		// Start line: 1832
		// Start offset: 0x800456FC
	/* end block 1 */
	// End offset: 0x800457B4
	// End Line: 1858

	/* begin block 2 */
		// Start line: 3802
	/* end block 2 */
	// End Line: 3803

	/* begin block 3 */
		// Start line: 3807
	/* end block 3 */
	// End Line: 3808

	/* begin block 4 */
		// Start line: 3807
	/* end block 4 */
	// End Line: 3808

void Initialize__23tScreenControllerConfig(tScreenControllerConfig *this)

{
  byte bVar1;
  uchar uVar2;
  short sVar3;
  tFEApplication *ptVar4;
  
  (this->tScreen)._vf[6] = (__vtbl_ptr_type)0x0;
  TurnOffShakers__23tScreenControllerConfig(this);
  ClearActuators__23tScreenControllerConfig(this);
  *(undefined **)&this->fPlayedInSound = &DAT_00000001;
  ptVar4 = FEApp;
  *(undefined2 *)&this->SuperFastFadeOut = 0xffff;
  bVar1 = *(byte *)((int)&(ptVar4->helpPopup).numItems + 1);
  (this->negconPopUp).yesnowords[0] = 0;
  this->fAnimFadeFrame = -1;
  this->fAnimFadeController = -1;
  this->fResetShakeTimeOut = (void *)(uint)bVar1;
  Initialize__7tScreen((tScreen *)this);
  *(undefined *)&this->fShakingItem = 0;
  SetMenu__20tMenuItemSlidingMenubP14tInsideBoxMenu
            ((tMenuItemSlidingMenu *)
             &(menuDefs->itemAmbientVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
              fButtonImage,&DAT_00000001,(tInsideBoxMenu *)0x0);
  SetCurrentController__23tScreenControllerConfigb(this,&DAT_00000001);
  SwapInController__23tScreenControllerConfig(this);
  sVar3 = *(short *)&this->fTransitioningOut;
  uVar2 = *(uchar *)&this->fShakingItem;
  (this->fShaker).actuator[1] = uVar2;
  if (0x7f < sVar3) {
    (this->fShaker).actuator[0] = uVar2;
  }
  if ((this->fShaker).actuator[0] == '\x06') {
    (this->fShaker).actuator[0] = '\x05';
  }
  uVar2 = *(uchar *)((int)this->fResetShakeTimeOut + -0x7feeb69e);
  (this->fShaker).time = uVar2;
  (this->fShaker).fade = uVar2;
  CheckConfigs__23tScreenControllerConfig(this);
  *(undefined2 *)&this->fStartTick = 0;
  *(undefined2 *)((int)&this->fStartTick + 2) = 0;
  this->fAnimController = 0;
  *(undefined2 *)&this->fPrevConfig = 0;
  *(undefined2 *)&this->fTextController = 0;
  *(undefined2 *)&this->fTransitioningOut = 0x80;
  *(undefined2 *)((int)&this->fTransitioningOut + 2) = 0;
  this->fArrowFade = 0;
  this->fTimeOutStartTick = 0;
  *(undefined4 *)&this->negconChoice = 0;
  this->fTransitionedIn = (void *)0x0;
  this->fTransitioningIn = (void *)0x0;
  (this->negconPopUp).yesnowords[1] = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__23tScreenControllerConfig(struct tScreenControllerConfig *this /*$s0*/)
 // line 1881, offset 0x80045820
	/* begin block 1 */
		// Start line: 1882
		// Start offset: 0x80045820
	/* end block 1 */
	// End offset: 0x80045820
	// End Line: 1882

	/* begin block 2 */
		// Start line: 3923
	/* end block 2 */
	// End Line: 3924

	/* begin block 3 */
		// Start line: 3927
	/* end block 3 */
	// End Line: 3928

	/* begin block 4 */
		// Start line: 3927
	/* end block 4 */
	// End Line: 3928

void Cleanup__23tScreenControllerConfig(tScreenControllerConfig *this)

{
  ClearActuators__23tScreenControllerConfig(this);
  TurnOffShakers__23tScreenControllerConfig(this);
  PadStartCom();
  Cleanup__7tScreen((tScreen *)this);
  return;
}



// decompiled code
// original method signature: 
// struct tScreenControllerConfig * /*$ra*/ __23tScreenControllerConfig(struct tScreenControllerConfig *this /*$s0*/)
 // line 1889, offset 0x8004585c
	/* begin block 1 */
		// Start line: 1890
		// Start offset: 0x8004585C
	/* end block 1 */
	// End offset: 0x8004585C
	// End Line: 1890

	/* begin block 2 */
		// Start line: 3939
	/* end block 2 */
	// End Line: 3940

	/* begin block 3 */
		// Start line: 3943
	/* end block 3 */
	// End Line: 3944

	/* begin block 4 */
		// Start line: 3943
	/* end block 4 */
	// End Line: 3944

tScreenControllerConfig * __23tScreenControllerConfig(tScreenControllerConfig *this)

{
  __7tScreen((tScreen *)this);
  *(undefined4 *)((this->tScreen)._vf + 2) = 0x80012078;
  __12tDialogYesNo((tDialogYesNo *)&this->mult);
  *(undefined2 *)&this->fStartTick = 0;
  *(undefined2 *)((int)&this->fStartTick + 2) = 0;
  *(undefined2 *)&this->fTextController = 0;
  *(undefined2 *)&this->fPrevConfig = 0;
  this->fResetShakeTimeOut = (void *)0x0;
  return this;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetHelpText__23tScreenControllerConfig(struct tScreenControllerConfig *this /*$a0*/)
 // line 1897, offset 0x800458ac
	/* begin block 1 */
		// Start line: 1898
		// Start offset: 0x800458AC
		// Variables:
	// 		int retvalue; // $v0
	/* end block 1 */
	// End offset: 0x80045904
	// End Line: 1915

	/* begin block 2 */
		// Start line: 3958
	/* end block 2 */
	// End Line: 3959

	/* begin block 3 */
		// Start line: 3962
	/* end block 3 */
	// End Line: 3963

	/* begin block 4 */
		// Start line: 3962
	/* end block 4 */
	// End Line: 3963

	/* begin block 5 */
		// Start line: 3964
	/* end block 5 */
	// End Line: 3965

int GetHelpText__23tScreenControllerConfig(tScreenControllerConfig *this)

{
  byte bVar1;
  
  bVar1 = *(byte *)&this->fShakingItem;
  if (bVar1 == 2) {
    return 0x21a;
  }
  if (bVar1 < 3) {
    if (bVar1 == 1) {
      return 0x219;
    }
  }
  else {
    if ((bVar1 < 7) && (4 < bVar1)) {
      return 0x218;
    }
  }
  return -1;
}





