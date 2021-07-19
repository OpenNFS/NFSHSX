#include "THISDUST.H"
#include "FEDIALOG.H"


// decompiled code
// original method signature: 
// short /*$ra*/ ShouldTimeOut__11tDialogBase(struct tDialogBase *this /*$a0*/)
 // line 73, offset 0x800186c8
	/* begin block 1 */
		// Start line: 74
		// Start offset: 0x800186C8

		/* begin block 1.1 */
			// Start line: 75
			// Start offset: 0x800186C8

			/* begin block 1.1.1 */
				// Start line: 75
				// Start offset: 0x800186D8

				/* begin block 1.1.1.1 */
					// Start line: 75
					// Start offset: 0x800186D8
				/* end block 1.1.1.1 */
				// End offset: 0x800186D8
				// End Line: 75
			/* end block 1.1.1 */
			// End offset: 0x800186D8
			// End Line: 75
		/* end block 1.1 */
		// End offset: 0x800186F8
		// End Line: 77
	/* end block 1 */
	// End offset: 0x800186F8
	// End Line: 77

	/* begin block 2 */
		// Start line: 146
	/* end block 2 */
	// End Line: 147

	/* begin block 3 */
		// Start line: 146
	/* end block 3 */
	// End Line: 147

	/* begin block 4 */
		// Start line: 147
	/* end block 4 */
	// End Line: 148

	/* begin block 5 */
		// Start line: 147
	/* end block 5 */
	// End Line: 148

short ShouldTimeOut__11tDialogBase(tDialogBase *this)

{
  short sVar1;
  
  if ((this->startTicks < 1) ||
     (sVar1 = 1, (int)(ticks + -(int)this->currentlyOn) < this->startTicks)) {
    sVar1 = 0;
  }
  return sVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitializeClass__11tDialogBase()
 // line 83, offset 0x80018700
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x80018700
	/* end block 1 */
	// End offset: 0x80018700
	// End Line: 84

	/* begin block 2 */
		// Start line: 159
	/* end block 2 */
	// End Line: 160

	/* begin block 3 */
		// Start line: 166
	/* end block 3 */
	// End Line: 167

	/* begin block 4 */
		// Start line: 166
	/* end block 4 */
	// End Line: 167

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitializeClass__11tDialogBase(void)

{
  HideAllDialogs__11tDialogBase();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawAllDialogs__11tDialogBase()
 // line 90, offset 0x80018720
	/* begin block 1 */
		// Start line: 91
		// Start offset: 0x80018720

		/* begin block 1.1 */
			// Start line: 91
			// Start offset: 0x80018720
			// Variables:
		// 		short i; // $s1
		/* end block 1.1 */
		// End offset: 0x800187D8
		// End Line: 102
	/* end block 1 */
	// End offset: 0x800187D8
	// End Line: 102

	/* begin block 2 */
		// Start line: 174
	/* end block 2 */
	// End Line: 175

	/* begin block 3 */
		// Start line: 180
	/* end block 3 */
	// End Line: 181

	/* begin block 4 */
		// Start line: 180
	/* end block 4 */
	// End Line: 181

	/* begin block 5 */
		// Start line: 181
	/* end block 5 */
	// End Line: 182

	/* begin block 6 */
		// Start line: 181
	/* end block 6 */
	// End Line: 182

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawAllDialogs__11tDialogBase(void)

{
  short sVar1;
  int iVar2;
  tDialogBase **pptVar3;
  int iVar4;
  
  iVar4 = 0;
  if (DialogVisibilityList8 != (tDialogBase *)0x0) {
    do {
      if (7 < (int)(short)iVar4) {
        return;
      }
      pptVar3 = &DialogVisibilityList8 + (int)(short)iVar4;
      sVar1 = ShouldTimeOut__11tDialogBase(*pptVar3);
      if ((sVar1 != 0) && (Hide__11tDialogBase(*pptVar3), *pptVar3 == (tDialogBase *)0x0)) {
        return;
      }
      iVar2 = *(int *)(((*pptVar3)->tScreen)._vf + 2);
      (**(code **)(iVar2 + 0x5c))
                ((int)&((*pptVar3)->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar2 + 0x58));
      iVar4 = iVar4 + 1;
    } while (*(int *)((int)&DialogVisibilityList8 + (iVar4 * 0x10000 >> 0xe)) != 0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HideAllDialogs__11tDialogBase()
 // line 107, offset 0x800187f0
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x800187F0

		/* begin block 1.1 */
			// Start line: 109
			// Start offset: 0x800187F0
			// Variables:
		// 		short i; // $v1
		/* end block 1.1 */
		// End offset: 0x80018828
		// End Line: 112
	/* end block 1 */
	// End offset: 0x80018828
	// End Line: 112

	/* begin block 2 */
		// Start line: 210
	/* end block 2 */
	// End Line: 211

	/* begin block 3 */
		// Start line: 216
	/* end block 3 */
	// End Line: 217

	/* begin block 4 */
		// Start line: 216
	/* end block 4 */
	// End Line: 217

	/* begin block 5 */
		// Start line: 217
	/* end block 5 */
	// End Line: 218

	/* begin block 6 */
		// Start line: 217
	/* end block 6 */
	// End Line: 218

/* WARNING: Unknown calling convention yet parameter storage is locked */

void HideAllDialogs__11tDialogBase(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)((int)&DialogVisibilityList8 + (iVar1 >> 0xe)) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 0x10000;
  } while (iVar2 * 0x10000 >> 0x10 < 8);
  return;
}



// decompiled code
// original method signature: 
// struct tDialogBase * /*$ra*/ GetTopMostDialog__11tDialogBase()
 // line 117, offset 0x80018830
	/* begin block 1 */
		// Start line: 118
		// Start offset: 0x80018830
	/* end block 1 */
	// End offset: 0x80018830
	// End Line: 121

	/* begin block 2 */
		// Start line: 230
	/* end block 2 */
	// End Line: 231

	/* begin block 3 */
		// Start line: 236
	/* end block 3 */
	// End Line: 237

	/* begin block 4 */
		// Start line: 236
	/* end block 4 */
	// End Line: 237

	/* begin block 5 */
		// Start line: 239
	/* end block 5 */
	// End Line: 240

/* WARNING: Unknown calling convention yet parameter storage is locked */

tDialogBase * GetTopMostDialog__11tDialogBase(void)

{
  return DialogVisibilityList8;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Display__11tDialogBase(struct tDialogBase *this /*$s1*/)
 // line 126, offset 0x80018840
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x80018840

		/* begin block 1.1 */
			// Start line: 129
			// Start offset: 0x80018864
			// Variables:
		// 		short i; // $a1
		/* end block 1.1 */
		// End offset: 0x800188B4
		// End Line: 144

		/* begin block 1.2 */
			// Start line: 147
			// Start offset: 0x800188B4

			/* begin block 1.2.1 */
				// Start line: 147
				// Start offset: 0x800188B4
			/* end block 1.2.1 */
			// End offset: 0x800188B4
			// End Line: 147
		/* end block 1.2 */
		// End offset: 0x800188B4
		// End Line: 147
	/* end block 1 */
	// End offset: 0x800188F0
	// End Line: 154

	/* begin block 2 */
		// Start line: 248
	/* end block 2 */
	// End Line: 249

	/* begin block 3 */
		// Start line: 254
	/* end block 3 */
	// End Line: 255

	/* begin block 4 */
		// Start line: 254
	/* end block 4 */
	// End Line: 255

void Display__11tDialogBase(tDialogBase *this)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 7;
  if (*(int *)&this->height == 0) {
    *(undefined4 *)&this->height = 1;
    *(undefined4 *)&this->MaxW = 0;
    *(undefined2 *)((int)&this->fFullyOpen + 2) = *(undefined2 *)&this->fFullyOpen;
    do {
      sVar1 = (short)iVar2;
      iVar2 = iVar2 + -1;
      (&DialogVisibilityList8)[(int)sVar1] = (&DialogVisibilityList8)[(int)sVar1 + -1];
    } while (0 < iVar2 * 0x10000);
    DialogVisibilityList8 = this;
    ShouldTimeOut__11tDialogBase(this);
    ShouldTimeOut__11tDialogBase(DialogVisibilityList8);
    *(uchar **)&this->currentlyOn = ticks;
    AudioCmn_PlayFESFX__Fi(0xf);
    *(undefined4 *)&this->MaxW = 0;
    *(undefined4 *)&this->fDefault = 0x80;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hide__11tDialogBase(struct tDialogBase *this /*$s2*/)
 // line 159, offset 0x80018904
	/* begin block 1 */
		// Start line: 160
		// Start offset: 0x80018904

		/* begin block 1.1 */
			// Start line: 162
			// Start offset: 0x8001892C
			// Variables:
		// 		short i; // $s0
		/* end block 1.1 */
		// End offset: 0x800189A0
		// End Line: 181
	/* end block 1 */
	// End offset: 0x800189A0
	// End Line: 181

	/* begin block 2 */
		// Start line: 330
	/* end block 2 */
	// End Line: 331

	/* begin block 3 */
		// Start line: 335
	/* end block 3 */
	// End Line: 336

	/* begin block 4 */
		// Start line: 335
	/* end block 4 */
	// End Line: 336

void Hide__11tDialogBase(tDialogBase *this)

{
  int iVar1;
  tDialogBase **pptVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)&this->height != 0) {
    *(undefined4 *)&this->height = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 >> 0x10;
      pptVar2 = &DialogVisibilityList8 + iVar1;
      if (*pptVar2 == this) {
        *(undefined4 *)&this->height = 0;
        *pptVar2 = (tDialogBase *)0x0;
        blockmove(PTR_ARRAY_80052b3c + iVar1,pptVar2,(7 - iVar1) * 4);
        PTR_80052b54 = (tDialogBase *)0x0;
        AudioCmn_PlayFESFX__Fi(0x12);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar3 * 0x10000;
    } while (iVar3 * 0x10000 >> 0x10 < 8);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__11tDialogBase(struct tDialogBase *this /*$s0*/)
 // line 200, offset 0x800189b8
	/* begin block 1 */
		// Start line: 201
		// Start offset: 0x800189B8
	/* end block 1 */
	// End offset: 0x800189B8
	// End Line: 201

	/* begin block 2 */
		// Start line: 404
	/* end block 2 */
	// End Line: 405

	/* begin block 3 */
		// Start line: 423
	/* end block 3 */
	// End Line: 424

	/* begin block 4 */
		// Start line: 423
	/* end block 4 */
	// End Line: 424

void Draw__11tDialogBase(tDialogBase *this)

{
  PSXDrawTransSquare__Fiiiiis
            (0,(int)*(short *)((this->tScreen)._vf + 8),(int)this->specificPlayer,4,(int)this->top,4
            );
  PSXDrawTransSquare__Fiiiiis
            (0,(int)*(short *)((this->tScreen)._vf + 8) + (int)this->left + -4,
             (int)this->specificPlayer,4,(int)this->top,4);
  PSXDrawTransSquare__Fiiiiis
            (0,(int)*(short *)((this->tScreen)._vf + 8) + 4,(int)this->specificPlayer,
             (int)this->left + -8,2,4);
  PSXDrawTransSquare__Fiiiiis
            (0,(int)*(short *)((this->tScreen)._vf + 8) + 4,
             (int)this->specificPlayer + (int)this->top + -2,(int)this->left + -8,2,4);
  PSXDrawTransSquare__Fiiiiis
            (0,(int)*(short *)((this->tScreen)._vf + 8) + 4,(int)this->specificPlayer + 2,
             (int)this->left + -8,(int)this->top + -4,2);
  FeDraw_SetABRMode__Fi(0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__11tDialogBase7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tDialogBase *this /*$a0*/, enum tInputKeyType *keyval /*$s1*/)
 // line 217, offset 0x80018ac8
	/* begin block 1 */
		// Start line: 218
		// Start offset: 0x80018AC8
	/* end block 1 */
	// End offset: 0x80018AF8
	// End Line: 246

	/* begin block 2 */
		// Start line: 452
	/* end block 2 */
	// End Line: 453

	/* begin block 3 */
		// Start line: 459
	/* end block 3 */
	// End Line: 460

	/* begin block 4 */
		// Start line: 459
	/* end block 4 */
	// End Line: 460

void ProcessInput__11tDialogBase7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tDialogBase *this,tInputKeyType *keyval)

{
  int *in_a2;
  
  if (*in_a2 != 1) {
    Hide__11tDialogBase(this);
    *in_a2 = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddItem__11tDialogHelpss(struct tDialogHelp *this /*$s0*/, short textID /*$a1*/, short controllerID /*$a2*/)
 // line 260, offset 0x80018b0c
	/* begin block 1 */
		// Start line: 261
		// Start offset: 0x80018B0C
	/* end block 1 */
	// End offset: 0x80018B7C
	// End Line: 266

	/* begin block 2 */
		// Start line: 530
	/* end block 2 */
	// End Line: 531

	/* begin block 3 */
		// Start line: 545
	/* end block 3 */
	// End Line: 546

	/* begin block 4 */
		// Start line: 545
	/* end block 4 */
	// End Line: 546

void AddItem__11tDialogHelpss(tDialogHelp *this,short textID,short controllerID)

{
  char *pcVar1;
  
  if (*(short *)(this->cont + 6) < 7) {
    pcVar1 = TextSys_Word__Fi((int)textID);
    *(char **)(&this->variant + (int)*(short *)(this->cont + 6) * 2) = pcVar1;
    this->text[(int)*(short *)(this->cont + 6) + 6] = (_func_44 *)(int)controllerID;
    *(short *)(this->cont + 6) = *(short *)(this->cont + 6) + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalculateDimensions__11tDialogHelp(struct tDialogHelp *this /*$s3*/)
 // line 286, offset 0x80018b90
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x80018B90
		// Variables:
	// 		struct tHelpData helpArray[1]; // stack offset -56
	// 		short i; // $s1
	// 		int newWidth; // $v0
	// 		enum tPlayer player; // $s5

		/* begin block 1.1 */
			// Start line: 322
			// Start offset: 0x80018C38

			/* begin block 1.1.1 */
				// Start line: 323
				// Start offset: 0x80018C60
				// Variables:
			// 		void * showLeftRight; // $s2
			// 		void * showCross; // $s4
			// 		struct tMenu *menu; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 324
					// Start offset: 0x80018C60
					// Variables:
				// 		struct tFEApplication *this; // $v0
				// 		enum tPlayer player; // $s5

					/* begin block 1.1.1.1.1 */
						// Start line: 324
						// Start offset: 0x80018C60
					/* end block 1.1.1.1.1 */
					// End offset: 0x80018C60
					// End Line: 324
				/* end block 1.1.1.1 */
				// End offset: 0x80018C60
				// End Line: 324

				/* begin block 1.1.1.2 */
					// Start line: 331
					// Start offset: 0x80018C80

					/* begin block 1.1.1.2.1 */
						// Start line: 331
						// Start offset: 0x80018C80
						// Variables:
					// 		enum tPlayer player; // $s5

						/* begin block 1.1.1.2.1.1 */
							// Start line: 331
							// Start offset: 0x80018C80
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x80018C80
						// End Line: 331
					/* end block 1.1.1.2.1 */
					// End offset: 0x80018C80
					// End Line: 331

					/* begin block 1.1.1.2.2 */
						// Start line: 331
						// Start offset: 0x80018C80

						/* begin block 1.1.1.2.2.1 */
							// Start line: 331
							// Start offset: 0x80018C80
						/* end block 1.1.1.2.2.1 */
						// End offset: 0x80018C80
						// End Line: 331
					/* end block 1.1.1.2.2 */
					// End offset: 0x80018C80
					// End Line: 331

					/* begin block 1.1.1.2.3 */
						// Start line: 333
						// Start offset: 0x80018C9C

						/* begin block 1.1.1.2.3.1 */
							// Start line: 333
							// Start offset: 0x80018C9C

							/* begin block 1.1.1.2.3.1.1 */
								// Start line: 333
								// Start offset: 0x80018C9C
							/* end block 1.1.1.2.3.1.1 */
							// End offset: 0x80018C9C
							// End Line: 333
						/* end block 1.1.1.2.3.1 */
						// End offset: 0x80018C9C
						// End Line: 333

						/* begin block 1.1.1.2.3.2 */
							// Start line: 334
							// Start offset: 0x80018CB4

							/* begin block 1.1.1.2.3.2.1 */
								// Start line: 335
								// Start offset: 0x80018CB4

								/* begin block 1.1.1.2.3.2.1.1 */
									// Start line: 335
									// Start offset: 0x80018CB4

									/* begin block 1.1.1.2.3.2.1.1.1 */
										// Start line: 335
										// Start offset: 0x80018CB4
									/* end block 1.1.1.2.3.2.1.1.1 */
									// End offset: 0x80018CB4
									// End Line: 335
								/* end block 1.1.1.2.3.2.1.1 */
								// End offset: 0x80018CB4
								// End Line: 335
							/* end block 1.1.1.2.3.2.1 */
							// End offset: 0x80018CC8
							// End Line: 338
						/* end block 1.1.1.2.3.2 */
						// End offset: 0x80018CC8
						// End Line: 338
					/* end block 1.1.1.2.3 */
					// End offset: 0x80018CC8
					// End Line: 338
				/* end block 1.1.1.2 */
				// End offset: 0x80018CC8
				// End Line: 340

				/* begin block 1.1.1.3 */
					// Start line: 347
					// Start offset: 0x80018D0C

					/* begin block 1.1.1.3.1 */
						// Start line: 348
						// Start offset: 0x80018D14

						/* begin block 1.1.1.3.1.1 */
							// Start line: 349
							// Start offset: 0x80018D14

							/* begin block 1.1.1.3.1.1.1 */
								// Start line: 349
								// Start offset: 0x80018D14
								// Variables:
							// 		struct tMenu *this; // $s0

								/* begin block 1.1.1.3.1.1.1.1 */
									// Start line: 349
									// Start offset: 0x80018D14
								/* end block 1.1.1.3.1.1.1.1 */
								// End offset: 0x80018D14
								// End Line: 349
							/* end block 1.1.1.3.1.1.1 */
							// End offset: 0x80018D14
							// End Line: 349

							/* begin block 1.1.1.3.1.1.2 */
								// Start line: 349
								// Start offset: 0x80018D28
								// Variables:
							// 		struct tMenu *this; // $s0

								/* begin block 1.1.1.3.1.1.2.1 */
									// Start line: 349
									// Start offset: 0x80018D28
								/* end block 1.1.1.3.1.1.2.1 */
								// End offset: 0x80018D28
								// End Line: 349
							/* end block 1.1.1.3.1.1.2 */
							// End offset: 0x80018D28
							// End Line: 349
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x80018D58
						// End Line: 352
					/* end block 1.1.1.3.1 */
					// End offset: 0x80018D58
					// End Line: 352
				/* end block 1.1.1.3 */
				// End offset: 0x80018D58
				// End Line: 352

				/* begin block 1.1.1.4 */
					// Start line: 355
					// Start offset: 0x80018D58

					/* begin block 1.1.1.4.1 */
						// Start line: 355
						// Start offset: 0x80018D58
						// Variables:
					// 		struct tFEApplication *this; // $v0
					// 		enum tPlayer player; // $s5

						/* begin block 1.1.1.4.1.1 */
							// Start line: 355
							// Start offset: 0x80018D58
						/* end block 1.1.1.4.1.1 */
						// End offset: 0x80018D58
						// End Line: 355
					/* end block 1.1.1.4.1 */
					// End offset: 0x80018D58
					// End Line: 355
				/* end block 1.1.1.4 */
				// End offset: 0x80018D84
				// End Line: 356

				/* begin block 1.1.1.5 */
					// Start line: 357
					// Start offset: 0x80018D84

					/* begin block 1.1.1.5.1 */
						// Start line: 357
						// Start offset: 0x80018D84
						// Variables:
					// 		struct tMenu *this; // $s0

						/* begin block 1.1.1.5.1.1 */
							// Start line: 357
							// Start offset: 0x80018D84
						/* end block 1.1.1.5.1.1 */
						// End offset: 0x80018D84
						// End Line: 357
					/* end block 1.1.1.5.1 */
					// End offset: 0x80018D84
					// End Line: 357
				/* end block 1.1.1.5 */
				// End offset: 0x80018DA0
				// End Line: 358

				/* begin block 1.1.1.6 */
					// Start line: 360
					// Start offset: 0x80018DA0

					/* begin block 1.1.1.6.1 */
						// Start line: 360
						// Start offset: 0x80018DA0
						// Variables:
					// 		struct tMenu *this; // $s0

						/* begin block 1.1.1.6.1.1 */
							// Start line: 360
							// Start offset: 0x80018DA0
						/* end block 1.1.1.6.1.1 */
						// End offset: 0x80018DA0
						// End Line: 360
					/* end block 1.1.1.6.1 */
					// End offset: 0x80018DA0
					// End Line: 360

					/* begin block 1.1.1.6.2 */
						// Start line: 363
						// Start offset: 0x80018DBC

						/* begin block 1.1.1.6.2.1 */
							// Start line: 363
							// Start offset: 0x80018DBC

							/* begin block 1.1.1.6.2.1.1 */
								// Start line: 363
								// Start offset: 0x80018DBC
								// Variables:
							// 		struct tMenu *this; // $s0

								/* begin block 1.1.1.6.2.1.1.1 */
									// Start line: 363
									// Start offset: 0x80018DBC
								/* end block 1.1.1.6.2.1.1.1 */
								// End offset: 0x80018DEC
								// End Line: 363
							/* end block 1.1.1.6.2.1.1 */
							// End offset: 0x80018DEC
							// End Line: 363

							/* begin block 1.1.1.6.2.1.2 */
								// Start line: 366
								// Start offset: 0x80018DF4

								/* begin block 1.1.1.6.2.1.2.1 */
									// Start line: 366
									// Start offset: 0x80018DF4

									/* begin block 1.1.1.6.2.1.2.1.1 */
										// Start line: 366
										// Start offset: 0x80018DF4
										// Variables:
									// 		struct tMenu *this; // $s0

										/* begin block 1.1.1.6.2.1.2.1.1.1 */
											// Start line: 366
											// Start offset: 0x80018DF4
										/* end block 1.1.1.6.2.1.2.1.1.1 */
										// End offset: 0x80018DF4
										// End Line: 366
									/* end block 1.1.1.6.2.1.2.1.1 */
									// End offset: 0x80018DF4
									// End Line: 366
								/* end block 1.1.1.6.2.1.2.1 */
								// End offset: 0x80018E14
								// End Line: 367
							/* end block 1.1.1.6.2.1.2 */
							// End offset: 0x80018E14
							// End Line: 367
						/* end block 1.1.1.6.2.1 */
						// End offset: 0x80018E14
						// End Line: 367
					/* end block 1.1.1.6.2 */
					// End offset: 0x80018E14
					// End Line: 367
				/* end block 1.1.1.6 */
				// End offset: 0x80018E14
				// End Line: 367
			/* end block 1.1.1 */
			// End offset: 0x80018E14
			// End Line: 367
		/* end block 1.1 */
		// End offset: 0x80018E14
		// End Line: 367

		/* begin block 1.2 */
			// Start line: 426
			// Start offset: 0x80019034

			/* begin block 1.2.1 */
				// Start line: 426
				// Start offset: 0x80019034
			/* end block 1.2.1 */
			// End offset: 0x80019034
			// End Line: 426
		/* end block 1.2 */
		// End offset: 0x80019034
		// End Line: 426

		/* begin block 1.3 */
			// Start line: 426
			// Start offset: 0x80019034

			/* begin block 1.3.1 */
				// Start line: 432
				// Start offset: 0x80019068
			/* end block 1.3.1 */
			// End offset: 0x800190F0
			// End Line: 437
		/* end block 1.3 */
		// End offset: 0x800190F0
		// End Line: 437
	/* end block 1 */
	// End offset: 0x800190F0
	// End Line: 452

	/* begin block 2 */
		// Start line: 576
	/* end block 2 */
	// End Line: 577

	/* begin block 3 */
		// Start line: 597
	/* end block 3 */
	// End Line: 598

	/* begin block 4 */
		// Start line: 597
	/* end block 4 */
	// End Line: 598

void CalculateDimensions__11tDialogHelp(tDialogHelp *this)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  tTexture_ShapeInfo *ptVar5;
  uchar *puVar6;
  short textID;
  ushort uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uchar *puVar11;
  tMenu *this_00;
  int iVar12;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  
  local_38 = DAT_80010244;
  local_34 = DAT_80010248;
  local_30 = DAT_8001024c;
  local_2c = DAT_80010250;
  local_28 = DAT_80010254;
  FETextRender_SetFont__Fi(0);
  *(undefined2 *)(this->cont + 6) = 0;
  AddItem__11tDialogHelpss(this,0x59,0);
  iVar9 = (int)*(short *)((this->tDialogBase).tScreen._vf + 6);
  iVar12 = 0;
  if (iVar9 != -1) {
    iVar12 = iVar9;
  }
  bVar3 = false;
  if (*(char *)((int)&local_38 + (int)*(short *)&(this->tDialogBase).fFadeText * 0x12) != '\0') {
    bVar4 = false;
    this_00 = (tMenu *)FEApp->fCurrentMenu[iVar12];
    iVar9 = 0;
    while (puVar8 = *(uint **)((int)this_00->fItemList + ((iVar9 << 0x10) >> 0xe)),
          puVar8 != (uint *)0x0) {
      uVar10 = *puVar8;
      if (((uVar10 ^ 1) & 1) != 0) {
        if ((uVar10 & 0x400) == 0) {
          bVar4 = true;
        }
        else {
          bVar3 = true;
        }
      }
      iVar9 = iVar9 + 1;
    }
    textID = GetNumberEnabledItems__5tMenu(this_00);
    if (1 < textID) {
      AddItem__11tDialogHelpss(this,0x52,0x50);
    }
    if (bVar3) {
      AddItem__11tDialogHelpss(this,0x53,0xa0);
    }
    if (bVar4) {
      bVar3 = false;
      if (((this_00->fFlags & 0x10000) != 0) || ((this_00->fFlags & 0x20000) != 0)) {
        bVar3 = true;
      }
      if (bVar3) {
        textID = 0x56;
      }
      else {
        textID = 0x55;
      }
      AddItem__11tDialogHelpss(this,textID,0x4000);
    }
    if (0 < (int)FEApp->backList[iVar12 + 0x1f]) {
      AddItem__11tDialogHelpss(this,0x54,0x1000);
    }
    if (this_00->fOptionsMenu != (tMenu *)0x0) {
      AddItem__11tDialogHelpss(this,0x57,-0x8000);
    }
    if ((this_00->fFlags & 0x800) == 0) {
      bVar3 = false;
      if (((this_00->fNextMenu != (tMenu *)0x0) || ((this_00->fFlags & 0x400) != 0)) ||
         (this_00->fOnButtonPress != (_func_22 *)0x0)) {
        bVar3 = true;
      }
      if ((!bVar3) && ((this_00->fFlags & 4) == 0)) goto LAB_80018e14;
      textID = 0x56;
    }
    else {
      textID = 0x58;
    }
    AddItem__11tDialogHelpss(this,textID,8);
  }
LAB_80018e14:
  textID = *(short *)((int)&local_38 + (int)*(short *)&(this->tDialogBase).fFadeText * 0x12 + 2);
  sVar2 = *(short *)&(this->tDialogBase).fFadeText;
  iVar12 = 0;
  while (textID != 0) {
    iVar9 = ((iVar12 << 0x10) >> 0xe) + (int)sVar2 * 0x12;
    AddItem__11tDialogHelpss
              (this,*(short *)((int)&local_38 + iVar9 + 2),*(short *)((int)&local_34 + iVar9));
    iVar12 = iVar12 + 1;
    textID = *(short *)((int)&local_38 +
                       (iVar12 * 0x10000 >> 0xe) +
                       (int)*(short *)&(this->tDialogBase).fFadeText * 0x12 + 2);
    sVar2 = *(short *)&(this->tDialogBase).fFadeText;
  }
  *(undefined2 *)((int)this->cont + 0x1a) = 0;
  PAD_update();
  if (gPadinfo.buf[0].nopad == '\0') {
    uVar1 = *(ushort *)((int)this->cont + 0x1a);
    uVar7 = uVar1 | 1;
    if (gPadinfo.buf[0].ID == '#') {
      uVar7 = uVar1 | 2;
    }
    *(ushort *)((int)this->cont + 0x1a) = uVar7;
  }
  if ((char)gPadinfo.buf[3].data == '\0') {
    uVar1 = *(ushort *)((int)this->cont + 0x1a);
    uVar7 = uVar1 | 1;
    if (gPadinfo.buf[3].data._1_1_ == '#') {
      uVar7 = uVar1 | 2;
    }
    *(ushort *)((int)this->cont + 0x1a) = uVar7;
  }
  textID = *(short *)(this->cont + 6);
  iVar12 = 0;
  (this->tDialogBase).left = 0;
  if (0 < textID) {
    iVar9 = 0;
    do {
      iVar9 = textpixels(*(char **)((int)&this->variant + (iVar9 >> 0xe)));
      if ((int)(this->tDialogBase).left < iVar9) {
        (this->tDialogBase).left = (short)iVar9;
      }
      iVar12 = iVar12 + 1;
      iVar9 = iVar12 * 0x10000;
    } while (iVar12 * 0x10000 >> 0x10 < (int)*(short *)(this->cont + 6));
  }
  if (*(short *)((int)this->cont + 0x1a) == 3) {
    textID = (this->tDialogBase).left;
    this->numItems = 0x46;
    textID = textID + 0x46;
  }
  else {
    textID = (this->tDialogBase).left;
    this->numItems = 0x28;
    textID = textID + 0x28;
  }
  (this->tDialogBase).left = textID;
  if (*(short *)(this->cont + 6) < 2) {
    (this->tDialogBase).top = 0;
  }
  else {
    (this->tDialogBase).top = *(short *)(this->cont + 6) * 0xf;
  }
  ptVar5 = gHelpShapes;
  textID = (this->tDialogBase).top;
  *(short *)((this->tDialogBase).tScreen._vf + 8) =
       (short)((int)(screenwidth + -(int)(this->tDialogBase).left +
                    ((uint)(screenwidth + -(int)(this->tDialogBase).left) >> 0x1f)) >> 1);
  uVar10 = 0xf0 - (int)textID;
  (this->tDialogBase).specificPlayer = (short)((int)(uVar10 + (uVar10 >> 0x1f)) >> 1);
  if ((int)(this->tDialogBase).left < (int)*(short *)&ptVar5[3].clutID + 0x14) {
    (this->tDialogBase).left = *(short *)&ptVar5[3].clutID + 0x14;
  }
  puVar6 = ticks;
  (this->tDialogBase).left = (this->tDialogBase).left + 0x14;
  puVar11 = puVar6 + -(int)(this->tDialogBase).currentlyOn;
  (this->tDialogBase).top = (this->tDialogBase).top + 10;
  if (puVar11 < (uchar *)0x32) {
    textID = gHelpShapes[0x25].shapey;
    (this->tDialogBase).left =
         gHelpShapes[0x25].shapex * 2 +
         (short)((uint)(((int)(this->tDialogBase).left -
                        (((int)gHelpShapes[0x25].shapex << 0x11) >> 0x10)) * (int)puVar11) / 0x32);
    (this->tDialogBase).top =
         textID * 2 +
         (short)((uint)(((int)(this->tDialogBase).top - (((int)textID << 0x11) >> 0x10)) *
                       (int)(puVar6 + -(int)(this->tDialogBase).currentlyOn)) / 0x32);
  }
  (this->tDialogBase).specificPlayer = 0x14;
  *(short *)((this->tDialogBase).tScreen._vf + 8) = 0x1f9 - (this->tDialogBase).left;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__11tDialogHelp(struct tDialogHelp *this /*$s2*/)
 // line 459, offset 0x8001912c
	/* begin block 1 */
		// Start line: 460
		// Start offset: 0x8001912C
		// Variables:
	// 		short i; // $s3
	// 		short j; // $a1
	// 		char buffer[80]; // stack offset -112
	// 		short y; // $s4
	// 		long ticks; // $a0
	// 		int numLetters; // $s5

		/* begin block 1.1 */
			// Start line: 460
			// Start offset: 0x8001912C

			/* begin block 1.1.1 */
				// Start line: 460
				// Start offset: 0x8001912C
			/* end block 1.1.1 */
			// End offset: 0x8001912C
			// End Line: 460
		/* end block 1.1 */
		// End offset: 0x8001912C
		// End Line: 460

		/* begin block 1.2 */
			// Start line: 488
			// Start offset: 0x80019190

			/* begin block 1.2.1 */
				// Start line: 493
				// Start offset: 0x800191B4

				/* begin block 1.2.1.1 */
					// Start line: 501
					// Start offset: 0x800191F4

					/* begin block 1.2.1.1.1 */
						// Start line: 502
						// Start offset: 0x80019204
						// Variables:
					// 		int control; // $a1
					/* end block 1.2.1.1.1 */
					// End offset: 0x800192EC
					// End Line: 522
				/* end block 1.2.1.1 */
				// End offset: 0x800192EC
				// End Line: 522
			/* end block 1.2.1 */
			// End offset: 0x800193E0
			// End Line: 541
		/* end block 1.2 */
		// End offset: 0x800193E8
		// End Line: 543
	/* end block 1 */
	// End offset: 0x800193F0
	// End Line: 546

	/* begin block 2 */
		// Start line: 993
	/* end block 2 */
	// End Line: 994

	/* begin block 3 */
		// Start line: 993
	/* end block 3 */
	// End Line: 994

	/* begin block 4 */
		// Start line: 1001
	/* end block 4 */
	// End Line: 1002

	/* begin block 5 */
		// Start line: 1001
	/* end block 5 */
	// End Line: 1002

/* WARNING: Type propagation algorithm not settling */

void Draw__11tDialogHelp(tDialogHelp *this)

{
  short sVar1;
  int iVar2;
  size_t sVar3;
  int y;
  uchar padType;
  tTexture_ShapeInfo *sMenuText;
  short x;
  void *pvVar4;
  _func_44 *p_Var5;
  int x_00;
  tMenuTextType textType;
  tTexture_ShapeInfo **pptVar6;
  uint uVar7;
  short y_00;
  tTexture_ShapeInfo local_70 [2];
  
  iVar2 = *(int *)((this->tDialogBase).tScreen._vf + 2);
  (**(code **)(iVar2 + 0x54))
            ((int)&(this->tDialogBase).tScreen.fPermShapes.fShapes + (int)*(short *)(iVar2 + 0x50));
  pvVar4 = (this->tDialogBase).currentlyOn;
  if ((int)pvVar4 + 0x32 <= (int)ticks) {
    iVar2 = (int)(ticks + (-0x32 - (int)pvVar4)) / 3;
    uVar7 = 0;
    y = 0;
    while (y >> 0x10 < (int)*(short *)(this->cont + 6)) {
      if (y >> 0x10 == 0) {
        y_00 = (this->tDialogBase).specificPlayer + 4;
      }
      else {
        y_00 = (this->tDialogBase).specificPlayer + ((short)((uint)y >> 0x10) + -1) * 0xf + 0x13;
      }
      sVar1 = (short)uVar7;
      y = (int)sVar1;
      if (0 < y) {
        x = *(short *)((int)this->cont + 0x1a);
        p_Var5 = this->text[y + 6];
        if (x == 2) {
          padType = '#';
          y = y + -1;
LAB_800192c8:
          x_00 = (int)*(short *)((this->tDialogBase).tScreen._vf + 8) + 0x14;
          y = y * 0xf + (int)(this->tDialogBase).specificPlayer + 0x13;
        }
        else {
          if ((x < 3) || (x != 3)) {
            padType = 'A';
            y = y + -1;
            goto LAB_800192c8;
          }
          if (((p_Var5 == (_func_44 *)0xa0) || (p_Var5 == (_func_44 *)0x50)) ||
             (p_Var5 == (_func_44 *)0x40)) {
            padType = 'A';
            y = (int)sVar1 + -1;
            goto LAB_800192c8;
          }
          y = (y + -1) * 0xf + 0xf;
          FeTools_DrawPSXButton__FUcUsii
                    ('A',(ushort)p_Var5,(int)*(short *)((this->tDialogBase).tScreen._vf + 8) + 0x14,
                     (int)(this->tDialogBase).specificPlayer + y + 4);
          padType = '#';
          x_00 = (int)*(short *)((this->tDialogBase).tScreen._vf + 8) + 0x28;
          y = (int)(this->tDialogBase).specificPlayer + y + 4;
        }
        FeTools_DrawPSXButton__FUcUsii(padType,(ushort)p_Var5,x_00,y);
      }
      pptVar6 = &(this->tDialogBase).tScreen.fPermShapes.fShapes + (int)sVar1;
      sVar3 = strlen((char *)pptVar6[0x25]);
      textType = textType_PopUpText;
      if (iVar2 < (int)sVar3) {
        y = 0;
        if (0 < iVar2) {
          do {
            sVar1 = (short)y;
            y = y + 1;
            *(undefined *)((int)&local_70[0].shpptr + (int)sVar1) =
                 *(undefined *)((int)&pptVar6[0x25]->shpptr + (int)sVar1);
          } while (y * 0x10000 >> 0x10 < iVar2);
        }
        *(undefined *)((int)&local_70[0].shpptr + iVar2) = 0;
        x = (short)(((uint)*(ushort *)((this->tDialogBase).tScreen._vf + 8) +
                    (uint)(ushort)this->numItems) * 0x10000 >> 0x10);
        textType = textType_PopUpText;
        sMenuText = local_70;
        if ((uVar7 & 0xffff) == 0) {
          textType = textType_PopUpTitle;
          sMenuText = local_70;
        }
      }
      else {
        x = (short)(((uint)*(ushort *)((this->tDialogBase).tScreen._vf + 8) +
                    (uint)(ushort)this->numItems) * 0x10000 >> 0x10);
        if ((int)sVar1 == 0) {
          textType = textType_PopUpTitle;
        }
        sMenuText = pptVar6[0x25];
      }
      uVar7 = uVar7 + 1;
      FETextRender_FullText__FPcss13tMenuTextType14tMenuTextStates
                ((char *)sMenuText,x,y_00,textType,textState_Selected,0);
      y = uVar7 * 0x10000;
    }
  }
  Draw__11tDialogBase((tDialogBase *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalculateDimensions__20tDialogMessageString(struct tDialogMessageString *this /*$s0*/)
 // line 551, offset 0x80019418
	/* begin block 1 */
		// Start line: 552
		// Start offset: 0x80019418
		// Variables:
	// 		int ticks; // $t0

		/* begin block 1.1 */
			// Start line: 552
			// Start offset: 0x80019418

			/* begin block 1.1.1 */
				// Start line: 552
				// Start offset: 0x80019418
			/* end block 1.1.1 */
			// End offset: 0x80019418
			// End Line: 552
		/* end block 1.1 */
		// End offset: 0x80019418
		// End Line: 552

		/* begin block 1.2 */
			// Start line: 581
			// Start offset: 0x80019500

			/* begin block 1.2.1 */
				// Start line: 581
				// Start offset: 0x80019500
			/* end block 1.2.1 */
			// End offset: 0x80019500
			// End Line: 581
		/* end block 1.2 */
		// End offset: 0x80019500
		// End Line: 581

		/* begin block 1.3 */
			// Start line: 581
			// Start offset: 0x80019500

			/* begin block 1.3.1 */
				// Start line: 587
				// Start offset: 0x80019520
			/* end block 1.3.1 */
			// End offset: 0x80019520
			// End Line: 588
		/* end block 1.3 */
		// End offset: 0x800195CC
		// End Line: 597
	/* end block 1 */
	// End offset: 0x800195CC
	// End Line: 600

	/* begin block 2 */
		// Start line: 1189
	/* end block 2 */
	// End Line: 1190

	/* begin block 3 */
		// Start line: 1194
	/* end block 3 */
	// End Line: 1195

	/* begin block 4 */
		// Start line: 1194
	/* end block 4 */
	// End Line: 1195

void CalculateDimensions__20tDialogMessageString(tDialogMessageString *this)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uchar *puVar4;
  uint uVar5;
  uchar *puVar6;
  
  iVar3 = 0x80 - ((int)(ticks + (-0x32 - (int)(this->tDialogBase).currentlyOn)) * 0x80) / 100;
  *(int *)&(this->tDialogBase).fDefault = iVar3;
  if (0x80 < iVar3) {
    iVar3 = 0x80;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  *(int *)&(this->tDialogBase).fDefault = iVar3;
  if (iVar3 != 0) {
    *(undefined4 *)&(this->tDialogBase).MaxW = 0;
  }
  sVar2 = (this->tDialogBase).OffsetX;
  (this->tDialogBase).left = sVar2;
  if ((this->tDialogBase).OffsetY == 0) {
    iVar3 = FETextRender_WordWrapHeight__FsPc(sVar2 + -0x28,(char *)(this->tDialogBase).fFadeText);
    (this->tDialogBase).top = (short)iVar3;
    if ((short)iVar3 == 8) {
      this->string = &DAT_00000001;
    }
    else {
      this->string = (char *)0x0;
    }
    sVar2 = (this->tDialogBase).top + 0x10;
  }
  else {
    sVar2 = (this->tDialogBase).OffsetY;
    this->string = (char *)0x0;
  }
  (this->tDialogBase).top = sVar2;
  puVar6 = ticks + -(int)(this->tDialogBase).currentlyOn;
  if ((int)puVar6 < 0x32) {
    sVar2 = gHelpShapes[0x25].shapex;
    sVar1 = gHelpShapes[0x25].shapey;
    puVar4 = ticks + -(int)(this->tDialogBase).currentlyOn;
    *(undefined4 *)&(this->tDialogBase).MaxW = 0;
    (this->tDialogBase).left =
         sVar2 * 2 +
         (short)((((int)(this->tDialogBase).left - (((int)sVar2 << 0x11) >> 0x10)) * (int)puVar6) /
                0x32);
    (this->tDialogBase).top =
         sVar1 * 2 +
         (short)((((int)(this->tDialogBase).top - (((int)sVar1 << 0x11) >> 0x10)) * (int)puVar4) /
                0x32);
  }
  else {
    *(undefined4 *)&(this->tDialogBase).MaxW = 1;
  }
  *(short *)((this->tDialogBase).tScreen._vf + 8) =
       *(short *)&(this->tDialogBase).timeOutTicks +
       (short)((int)(screenwidth + -(int)(this->tDialogBase).left +
                    ((uint)(screenwidth + -(int)(this->tDialogBase).left) >> 0x1f)) >> 1);
  uVar5 = 0xf0 - (int)(this->tDialogBase).top;
  (this->tDialogBase).specificPlayer =
       *(short *)((int)&(this->tDialogBase).timeOutTicks + 2) +
       (short)((int)(uVar5 + (uVar5 >> 0x1f)) >> 1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__20tDialogMessageString(struct tDialogMessageString *this /*$s0*/)
 // line 607, offset 0x8001962c
	/* begin block 1 */
		// Start line: 608
		// Start offset: 0x8001962C
		// Variables:
	// 		int col; // $s1
	// 		struct RECT r; // stack offset -24

		/* begin block 1.1 */
			// Start line: 608
			// Start offset: 0x8001962C

			/* begin block 1.1.1 */
				// Start line: 608
				// Start offset: 0x8001962C
			/* end block 1.1.1 */
			// End offset: 0x8001962C
			// End Line: 608
		/* end block 1.1 */
		// End offset: 0x8001962C
		// End Line: 608

		/* begin block 1.2 */
			// Start line: 629
			// Start offset: 0x80019694

			/* begin block 1.2.1 */
				// Start line: 629
				// Start offset: 0x80019694
			/* end block 1.2.1 */
			// End offset: 0x80019694
			// End Line: 629
		/* end block 1.2 */
		// End offset: 0x80019694
		// End Line: 629
	/* end block 1 */
	// End offset: 0x8001977C
	// End Line: 651

	/* begin block 2 */
		// Start line: 1312
	/* end block 2 */
	// End Line: 1313

	/* begin block 3 */
		// Start line: 1319
	/* end block 3 */
	// End Line: 1320

	/* begin block 4 */
		// Start line: 1319
	/* end block 4 */
	// End Line: 1320

void Draw__20tDialogMessageString(tDialogMessageString *this)

{
  int Col;
  RECT local_18;
  
  Col = *(int *)((this->tDialogBase).tScreen._vf + 2);
  (**(code **)(Col + 0x54))
            ((int)&(this->tDialogBase).tScreen.fPermShapes.fShapes + (int)*(short *)(Col + 0x50));
  if ((int)ticks < (int)(this->tDialogBase).currentlyOn + 0x32) {
    *(undefined4 *)&(this->tDialogBase).MaxW = 0;
  }
  else {
    if (*(int *)&(this->tDialogBase).fDefault != 0) {
      *(undefined4 *)&(this->tDialogBase).MaxW = 0;
    }
    Col = CalcFadeVal__Fii(kRGBVals[(uint)DAT_800515ec],*(int *)&(this->tDialogBase).fDefault);
    local_18.x = *(short *)((this->tDialogBase).tScreen._vf + 8) + 0x11;
    local_18.y = (this->tDialogBase).specificPlayer + 10;
    local_18.w = (this->tDialogBase).left + -0x14;
    local_18.h = (this->tDialogBase).top - ((this->tDialogBase).width + 8);
    FETextRender_SetABR__Fib(1,&DAT_00000001);
    if (this->string == (char *)0x0) {
      FETextRender_WordWrapTextRGB__FPcR4RECTi((char *)(this->tDialogBase).fFadeText,&local_18,Col);
    }
    else {
      FETextRender_FullTextRGB__FPcssics
                ((char *)(this->tDialogBase).fFadeText,
                 (short)(((uint)*(ushort *)((this->tDialogBase).tScreen._vf + 8) +
                         ((int)((uint)(ushort)(this->tDialogBase).left << 0x10) >> 0x11)) * 0x10000
                        >> 0x10),
                 (short)(((uint)(ushort)(this->tDialogBase).specificPlayer + 8) * 0x10000 >> 0x10),
                 Col,0,2);
    }
    FETextRender_SetABR__Fib(0,(void *)0x0);
  }
  Draw__11tDialogBase((tDialogBase *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__17tDialogBackUpOnly7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tDialogBackUpOnly *this /*$a0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyval /*$a2*/)
 // line 654, offset 0x80019790
	/* begin block 1 */
		// Start line: 655
		// Start offset: 0x80019790
	/* end block 1 */
	// End offset: 0x800197D8
	// End Line: 669

	/* begin block 2 */
		// Start line: 1417
	/* end block 2 */
	// End Line: 1418

	/* begin block 3 */
		// Start line: 1420
	/* end block 3 */
	// End Line: 1421

	/* begin block 4 */
		// Start line: 1420
	/* end block 4 */
	// End Line: 1421

void ProcessInput__17tDialogBackUpOnly7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tDialogBackUpOnly *this,tPlayer fromPlayer,tInputKeyType *keyval)

{
  tPlayer tVar1;
  
  tVar1 = SEXT24(*(short *)((this->tDialogMessageString).tDialogBase.tScreen._vf + 6));
  if ((tVar1 == ~kPlayerOne) || (fromPlayer == tVar1)) {
    if (*keyval == kInput_KeyType_Triangle) {
      Hide__11tDialogBase((tDialogBase *)this);
    }
    else {
      if (*keyval != kInput_KeyType_Circle) {
        *keyval = kInput_KeyType_AlreadyProcessed;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ Run__18tDialogInteractive(struct tDialogInteractive *this /*$s3*/)
 // line 684, offset 0x800197e8
	/* begin block 1 */
		// Start line: 685
		// Start offset: 0x800197E8

		/* begin block 1.1 */
			// Start line: 691
			// Start offset: 0x80019848
			// Variables:
		// 		enum tInputKeyType keyVal[2]; // stack offset -56
		// 		struct tMenuCommand command; // stack offset -48
		// 		unsigned long debounce; // $s6

			/* begin block 1.1.1 */
				// Start line: 695
				// Start offset: 0x80019858
				// Variables:
			// 		int i; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 708
					// Start offset: 0x80019868

					/* begin block 1.1.1.1.1 */
						// Start line: 714
						// Start offset: 0x80019888

						/* begin block 1.1.1.1.1.1 */
							// Start line: 715
							// Start offset: 0x80019898

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 716
								// Start offset: 0x80019898

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 716
									// Start offset: 0x80019898

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 716
										// Start offset: 0x80019898
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80019898
									// End Line: 716
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80019898
								// End Line: 716

								/* begin block 1.1.1.1.1.1.1.2 */
									// Start line: 716
									// Start offset: 0x800198B0
									// Variables:
								// 		enum tPlayer player; // $s1

									/* begin block 1.1.1.1.1.1.1.2.1 */
										// Start line: 716
										// Start offset: 0x800198B0
									/* end block 1.1.1.1.1.1.1.2.1 */
									// End offset: 0x800198B0
									// End Line: 716
								/* end block 1.1.1.1.1.1.1.2 */
								// End offset: 0x800198B0
								// End Line: 716

								/* begin block 1.1.1.1.1.1.1.3 */
									// Start line: 717
									// Start offset: 0x800198C8

									/* begin block 1.1.1.1.1.1.1.3.1 */
										// Start line: 717
										// Start offset: 0x800198C8
										// Variables:
									// 		enum tPlayer player; // $s1

										/* begin block 1.1.1.1.1.1.1.3.1.1 */
											// Start line: 717
											// Start offset: 0x800198C8
										/* end block 1.1.1.1.1.1.1.3.1.1 */
										// End offset: 0x800198C8
										// End Line: 717
									/* end block 1.1.1.1.1.1.1.3.1 */
									// End offset: 0x800198C8
									// End Line: 717
								/* end block 1.1.1.1.1.1.1.3 */
								// End offset: 0x800198F4
								// End Line: 719
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800198F4
							// End Line: 719
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800198F4
						// End Line: 719
					/* end block 1.1.1.1.1 */
					// End offset: 0x800198F4
					// End Line: 719

					/* begin block 1.1.1.1.2 */
						// Start line: 723
						// Start offset: 0x800198F4

						/* begin block 1.1.1.1.2.1 */
							// Start line: 724
							// Start offset: 0x80019904

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 725
								// Start offset: 0x80019904

								/* begin block 1.1.1.1.2.1.1.1 */
									// Start line: 725
									// Start offset: 0x80019904
									// Variables:
								// 		struct tDialogBase *this; // $a0

									/* begin block 1.1.1.1.2.1.1.1.1 */
										// Start line: 725
										// Start offset: 0x80019904
									/* end block 1.1.1.1.2.1.1.1.1 */
									// End offset: 0x80019904
									// End Line: 725
								/* end block 1.1.1.1.2.1.1.1 */
								// End offset: 0x80019904
								// End Line: 725
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x8001992C
							// End Line: 728
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x8001992C
						// End Line: 728
					/* end block 1.1.1.1.2 */
					// End offset: 0x8001992C
					// End Line: 728
				/* end block 1.1.1.1 */
				// End offset: 0x8001995C
				// End Line: 733
			/* end block 1.1.1 */
			// End offset: 0x8001996C
			// End Line: 734
		/* end block 1.1 */
		// End offset: 0x8001996C
		// End Line: 735
	/* end block 1 */
	// End offset: 0x80019980
	// End Line: 737

	/* begin block 2 */
		// Start line: 1466
	/* end block 2 */
	// End Line: 1467

	/* begin block 3 */
		// Start line: 1480
	/* end block 3 */
	// End Line: 1481

	/* begin block 4 */
		// Start line: 1480
	/* end block 4 */
	// End Line: 1481

short Run__18tDialogInteractive(tDialogInteractive *this)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  tInputKeyType tVar4;
  int iVar5;
  int iVar6;
  tInputKeyType *ptVar7;
  tPlayer player;
  tInputKeyType local_38 [2];
  undefined4 local_30 [2];
  
  *(undefined **)&this->ReadyToReturnValue = &DAT_00000001;
  Display__11tDialogBase((tDialogBase *)this);
  iVar3 = *(int *)((this->tDialogMessageString).tDialogBase.tScreen._vf + 2);
  (**(code **)(iVar3 + 0x54))
            ((int)&(this->tDialogMessageString).tDialogBase.tScreen.fPermShapes.fShapes +
             (int)*(short *)(iVar3 + 0x50));
  (this->tDialogMessageString).Centerit = (void *)0x0;
  while ((this->tDialogMessageString).Centerit == (void *)0x0) {
    local_30[0] = 0;
    player = kPlayerOne;
    iVar3 = 0;
    ptVar7 = local_38;
    while ((int)player < 2) {
      tVar4 = FEInput_GetKeyFromPlayer__F7tPlayerl(player,-1);
      *ptVar7 = tVar4;
      if (tVar4 == kInput_KeyType_NoKey) {
        *ptVar7 = kInput_KeyType_AlreadyProcessed;
      }
      if (*ptVar7 == kInput_KeyType_Circle) {
        bVar2 = false;
        if (*(int *)&(FEApp->helpPopup).tDialogBase.top == 0) {
          bVar2 = *(int *)((int)FEApp->fCurrentMenu + iVar3) != 0;
        }
        if (bVar2) {
          iVar6 = *(int *)((int)FEApp->fCurrentMenu + iVar3);
          iVar5 = *(int *)(iVar6 + 0x68);
          (**(code **)(iVar5 + 0x1c))(iVar6 + (int)*(short *)(iVar5 + 0x18),player,ptVar7,local_30);
          *ptVar7 = kInput_KeyType_AlreadyProcessed;
        }
      }
      tVar4 = *ptVar7;
      if (tVar4 != kInput_KeyType_AlreadyProcessed) {
        if (*(int *)&(FEApp->helpPopup).tDialogBase.top != 0) {
          Hide__11tDialogBase((tDialogBase *)&FEApp->fYOffset);
          *ptVar7 = kInput_KeyType_AlreadyProcessed;
        }
        tVar4 = *ptVar7;
      }
      if (tVar4 != kInput_KeyType_NoKey) {
        iVar5 = *(int *)((this->tDialogMessageString).tDialogBase.tScreen._vf + 2);
        (**(code **)(iVar5 + 0x4c))
                  ((int)&(this->tDialogMessageString).tDialogBase.tScreen.fPermShapes.fShapes +
                   (int)*(short *)(iVar5 + 0x48),player,ptVar7,local_30);
      }
      ptVar7 = ptVar7 + 1;
      iVar3 = iVar3 + 4;
      player = player + kPlayerTwo;
    }
    Redraw__14tFEApplication(FEApp);
  }
  AudioCmn_PlayFESFX__Fi(0);
  Hide__11tDialogBase((tDialogBase *)this);
  Redraw__14tFEApplication(FEApp);
  sVar1 = *(short *)((int)&(this->tDialogMessageString).tDialogBase.fFullyOpen + 2);
  this->ReadyToReturnValue = (void *)0x0;
  return sVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalculateDimensions__12tDialogYesNo(struct tDialogYesNo *this /*$s0*/)
 // line 748, offset 0x800199d4
	/* begin block 1 */
		// Start line: 749
		// Start offset: 0x800199D4

		/* begin block 1.1 */
			// Start line: 749
			// Start offset: 0x800199D4

			/* begin block 1.1.1 */
				// Start line: 752
				// Start offset: 0x800199F8

				/* begin block 1.1.1.1 */
					// Start line: 752
					// Start offset: 0x800199F8

					/* begin block 1.1.1.1.1 */
						// Start line: 752
						// Start offset: 0x800199F8
					/* end block 1.1.1.1.1 */
					// End offset: 0x800199F8
					// End Line: 752
				/* end block 1.1.1.1 */
				// End offset: 0x800199F8
				// End Line: 752
			/* end block 1.1.1 */
			// End offset: 0x80019A7C
			// End Line: 760
		/* end block 1.1 */
		// End offset: 0x80019A7C
		// End Line: 760
	/* end block 1 */
	// End offset: 0x80019A7C
	// End Line: 760

	/* begin block 2 */
		// Start line: 1608
	/* end block 2 */
	// End Line: 1609

	/* begin block 3 */
		// Start line: 1614
	/* end block 3 */
	// End Line: 1615

	/* begin block 4 */
		// Start line: 1614
	/* end block 4 */
	// End Line: 1615

void CalculateDimensions__12tDialogYesNo(tDialogYesNo *this)

{
  short sVar1;
  uint uVar2;
  
  CalculateDimensions__20tDialogMessageString((tDialogMessageString *)this);
  if ((this->tDialogInteractive).tDialogMessageString.tDialogBase.OffsetY == 0) {
    if ((int)(ticks + -(int)(this->tDialogInteractive).tDialogMessageString.tDialogBase.currentlyOn)
        < 0x32) {
      sVar1 = (this->tDialogInteractive).tDialogMessageString.tDialogBase.top +
              (short)(((int)(ticks + -(int)(this->tDialogInteractive).tDialogMessageString.
                                           tDialogBase.currentlyOn) * 0xf) / 0x32);
    }
    else {
      sVar1 = (this->tDialogInteractive).tDialogMessageString.tDialogBase.top + 0xf;
    }
    (this->tDialogInteractive).tDialogMessageString.tDialogBase.top = sVar1;
    sVar1 = (this->tDialogInteractive).tDialogMessageString.tDialogBase.top;
    (this->tDialogInteractive).tDialogMessageString.tDialogBase.width = 0xf;
    uVar2 = 0xf0 - (int)sVar1;
    (this->tDialogInteractive).tDialogMessageString.tDialogBase.specificPlayer =
         *(short *)((int)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.timeOutTicks +
                   2) + (short)((int)(uVar2 + (uVar2 >> 0x1f)) >> 1);
  }
  return;
}



// decompiled code
// original method signature: 
// struct tDialogYesNo * /*$ra*/ __12tDialogYesNo(struct tDialogYesNo *this /*$s0*/)
 // line 765, offset 0x80019a8c
	/* begin block 1 */
		// Start line: 766
		// Start offset: 0x80019A8C
		// Variables:
	// 		struct tDialogInteractive *this; // $s0

		/* begin block 1.1 */
			// Start line: 766
			// Start offset: 0x80019A8C
			// Variables:
		// 		struct tDialogMessageString *this; // $s0

			/* begin block 1.1.1 */
				// Start line: 766
				// Start offset: 0x80019A8C
				// Variables:
			// 		struct tDialogBase *this; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 766
					// Start offset: 0x80019A8C
				/* end block 1.1.1.1 */
				// End offset: 0x80019A8C
				// End Line: 766
			/* end block 1.1.1 */
			// End offset: 0x80019A8C
			// End Line: 766

			/* begin block 1.1.2 */
				// Start line: 766
				// Start offset: 0x80019A8C
			/* end block 1.1.2 */
			// End offset: 0x80019A8C
			// End Line: 766
		/* end block 1.1 */
		// End offset: 0x80019A8C
		// End Line: 766

		/* begin block 1.2 */
			// Start line: 766
			// Start offset: 0x80019A8C
		/* end block 1.2 */
		// End offset: 0x80019A8C
		// End Line: 766
	/* end block 1 */
	// End offset: 0x80019A8C
	// End Line: 766

	/* begin block 2 */
		// Start line: 766
		// Start offset: 0x80019A8C
	/* end block 2 */
	// End offset: 0x80019A8C
	// End Line: 766

	/* begin block 3 */
		// Start line: 1643
	/* end block 3 */
	// End Line: 1644

	/* begin block 4 */
		// Start line: 1643
	/* end block 4 */
	// End Line: 1644

	/* begin block 5 */
		// Start line: 1649
	/* end block 5 */
	// End Line: 1650

	/* begin block 6 */
		// Start line: 1649
	/* end block 6 */
	// End Line: 1650

/* WARNING: Type propagation algorithm not settling */

tDialogYesNo * __12tDialogYesNo(tDialogYesNo *this)

{
  __7tScreen((tScreen *)this);
  *(undefined4 *)((this->tDialogInteractive).tDialogMessageString.tDialogBase.tScreen._vf + 2) =
       0x800105b0;
  (this->tDialogInteractive).tDialogMessageString.tDialogBase.OffsetX = 0x120;
  *(undefined2 *)((this->tDialogInteractive).tDialogMessageString.tDialogBase.tScreen._vf + 6) =
       0xffff;
  *(undefined4 *)((this->tDialogInteractive).tDialogMessageString.tDialogBase.tScreen._vf + 2) =
       0x800104f0;
  *(undefined4 *)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.fDefault = 0x80;
  *(undefined4 *)((this->tDialogInteractive).tDialogMessageString.tDialogBase.tScreen._vf + 2) =
       0x800103d0;
  *(undefined4 *)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.height = 0;
  (this->tDialogInteractive).tDialogMessageString.tDialogBase.width = 0;
  (this->tDialogInteractive).tDialogMessageString.tDialogBase.OffsetY = 0;
  *(undefined2 *)
   ((int)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.timeOutTicks + 2) = 0;
  *(undefined2 *)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.timeOutTicks = 0;
  (this->tDialogInteractive).tDialogMessageString.tDialogBase.top = 0;
  (this->tDialogInteractive).tDialogMessageString.tDialogBase.left = 0;
  (this->tDialogInteractive).tDialogMessageString.tDialogBase.specificPlayer = 0;
  *(undefined2 *)((this->tDialogInteractive).tDialogMessageString.tDialogBase.tScreen._vf + 8) = 0;
  *(undefined2 *)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.fFullyOpen = 0;
  (this->tDialogInteractive).tDialogMessageString.tDialogBase.startTicks = 0;
  (this->tDialogInteractive).tDialogMessageString.string = (char *)0x0;
  *(undefined4 *)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.MaxW = 0;
  (this->tDialogInteractive).tDialogMessageString.tDialogBase.startTicks = 0;
  (this->tDialogInteractive).tDialogMessageString.tDialogBase.startTicks = 0;
  (this->tDialogInteractive).ReadyToReturnValue = (void *)0x0;
  *(undefined4 *)((this->tDialogInteractive).tDialogMessageString.tDialogBase.tScreen._vf + 2) =
       0x80010370;
  *(undefined2 *)((int)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.fFullyOpen + 2)
       = 0;
  (this->tDialogInteractive).tDialogMessageString.Centerit = (void *)0x0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__12tDialogYesNo(struct tDialogYesNo *this /*$s2*/)
 // line 773, offset 0x80019b44
	/* begin block 1 */
		// Start line: 774
		// Start offset: 0x80019B44
		// Variables:
	// 		int i; // $s3
	// 		int x; // $s4
	// 		int y; // $s0
	// 		int col; // $s1

		/* begin block 1.1 */
			// Start line: 783
			// Start offset: 0x80019BA0

			/* begin block 1.1.1 */
				// Start line: 783
				// Start offset: 0x80019BA0
			/* end block 1.1.1 */
			// End offset: 0x80019BA0
			// End Line: 783
		/* end block 1.1 */
		// End offset: 0x80019BA0
		// End Line: 783

		/* begin block 1.2 */
			// Start line: 783
			// Start offset: 0x80019BA0

			/* begin block 1.2.1 */
				// Start line: 788
				// Start offset: 0x80019BBC

				/* begin block 1.2.1.1 */
					// Start line: 789
					// Start offset: 0x80019BBC

					/* begin block 1.2.1.1.1 */
						// Start line: 798
						// Start offset: 0x80019BE4

						/* begin block 1.2.1.1.1.1 */
							// Start line: 800
							// Start offset: 0x80019C04

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 800
								// Start offset: 0x80019C04
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x80019C04
							// End Line: 800
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80019C04
						// End Line: 800
					/* end block 1.2.1.1.1 */
					// End offset: 0x80019C04
					// End Line: 800
				/* end block 1.2.1.1 */
				// End offset: 0x80019C98
				// End Line: 813
			/* end block 1.2.1 */
			// End offset: 0x80019C98
			// End Line: 813
		/* end block 1.2 */
		// End offset: 0x80019C98
		// End Line: 813
	/* end block 1 */
	// End offset: 0x80019C98
	// End Line: 816

	/* begin block 2 */
		// Start line: 1661
	/* end block 2 */
	// End Line: 1662

	/* begin block 3 */
		// Start line: 1667
	/* end block 3 */
	// End Line: 1668

	/* begin block 4 */
		// Start line: 1667
	/* end block 4 */
	// End Line: 1668

/* WARNING: Type propagation algorithm not settling */

void Draw__12tDialogYesNo(tDialogYesNo *this)

{
  short sVar1;
  short sVar2;
  int iVar3;
  char *sMenuText;
  int col;
  int iVar4;
  tDialogYesNo *ptVar5;
  
  iVar3 = *(int *)((this->tDialogInteractive).tDialogMessageString.tDialogBase.tScreen._vf + 2);
  (**(code **)(iVar3 + 0x54))
            ((int)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.tScreen.fPermShapes.
                   fShapes + (int)*(short *)(iVar3 + 0x50));
  if (*(int *)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.fDefault != 0) {
    *(undefined4 *)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.MaxW = 0;
  }
  iVar3 = 0;
  if (0x31 < (int)(ticks + -(int)(this->tDialogInteractive).tDialogMessageString.tDialogBase.
                                 currentlyOn)) {
    iVar4 = (int)*(short *)((this->tDialogInteractive).tDialogMessageString.tDialogBase.tScreen._vf
                           + 8) +
            ((int)((uint)(ushort)(this->tDialogInteractive).tDialogMessageString.tDialogBase.left <<
                  0x10) >> 0x12);
    ptVar5 = this;
    while (iVar3 < 2) {
      col = 2;
      if (iVar3 == (int)*(short *)((int)&(this->tDialogInteractive).tDialogMessageString.tDialogBase
                                         .fFullyOpen + 2)) {
        col = 1;
      }
      iVar3 = iVar3 + 1;
      col = CalcFadeVal__Fii(kRGBVals[(uint)*(byte *)(col + -0x7ffaea15)],
                             *(int *)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.
                                      fDefault);
      sVar1 = (this->tDialogInteractive).tDialogMessageString.tDialogBase.specificPlayer;
      sVar2 = (this->tDialogInteractive).tDialogMessageString.tDialogBase.top;
      FETextRender_SetABR__Fib(1,&DAT_00000001);
      sMenuText = TextSys_Word__Fi((int)(ptVar5->tDialogInteractive).fCurrentlyRunning);
      FETextRender_FullTextRGB__FPcssics
                (sMenuText,(short)iVar4,
                 (short)((uint)(((int)sVar1 + (int)sVar2 + -0xb) * 0x10000) >> 0x10),col,0,2);
      FETextRender_SetABR__Fib(0,(void *)0x0);
      ptVar5 = (tDialogYesNo *)
               &(ptVar5->tDialogInteractive).tDialogMessageString.tDialogBase.tScreen.fPermShapes.
                fFile;
      iVar4 = iVar4 + ((int)((uint)(ushort)(this->tDialogInteractive).tDialogMessageString.
                                           tDialogBase.left << 0x10) >> 0x11);
    }
  }
  Draw__20tDialogMessageString((tDialogMessageString *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__12tDialogYesNo7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tDialogYesNo *this /*$s0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyVal /*$a2*/, struct tMenuCommand *command /*$a3*/)
 // line 823, offset 0x80019ccc
	/* begin block 1 */
		// Start line: 824
		// Start offset: 0x80019CCC

		/* begin block 1.1 */
			// Start line: 828
			// Start offset: 0x80019CF4

			/* begin block 1.1.1 */
				// Start line: 828
				// Start offset: 0x80019CF4
				// Variables:
			// 		struct tDialogMessageString *this; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 828
					// Start offset: 0x80019CF4
				/* end block 1.1.1.1 */
				// End offset: 0x80019CF4
				// End Line: 828
			/* end block 1.1.1 */
			// End offset: 0x80019CF4
			// End Line: 828
		/* end block 1.1 */
		// End offset: 0x80019D08
		// End Line: 829
	/* end block 1 */
	// End offset: 0x80019D88
	// End Line: 850

	/* begin block 2 */
		// Start line: 1772
	/* end block 2 */
	// End Line: 1773

	/* begin block 3 */
		// Start line: 1780
	/* end block 3 */
	// End Line: 1781

	/* begin block 4 */
		// Start line: 1780
	/* end block 4 */
	// End Line: 1781

/* WARNING: Type propagation algorithm not settling */

void ProcessInput__12tDialogYesNo7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tDialogYesNo *this,tPlayer fromPlayer,tInputKeyType *keyVal,tMenuCommand *command)

{
  tPlayer tVar1;
  tInputKeyType tVar2;
  
  tVar1 = SEXT24(*(short *)((this->tDialogInteractive).tDialogMessageString.tDialogBase.tScreen._vf
                           + 6));
  if (((tVar1 == ~kPlayerOne) || (fromPlayer == tVar1)) &&
     (*(int *)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.MaxW == 1)) {
    tVar2 = *keyVal;
    if (tVar2 == kInput_KeyType_Left) {
      AudioCmn_PlayFESFX__Fi(5);
      *(undefined2 *)
       ((int)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.fFullyOpen + 2) = 1;
    }
    else {
      if ((int)tVar2 < 0x801) {
        if (tVar2 != kInput_KeyType_Cross) {
          return;
        }
      }
      else {
        if (tVar2 == kInput_KeyType_Right) {
          AudioCmn_PlayFESFX__Fi(6);
          *(undefined2 *)
           ((int)&(this->tDialogInteractive).tDialogMessageString.tDialogBase.fFullyOpen + 2) = 0;
          return;
        }
        if (tVar2 != kInput_KeyType_Start) {
          return;
        }
      }
      AudioCmn_PlayFESFX__Fi(0);
      *(undefined **)&(this->tDialogInteractive).tDialogMessageString.Centerit = &DAT_00000001;
      Hide__11tDialogBase((tDialogBase *)this);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__15tDialogYesNoMem7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tDialogYesNoMem *this /*$s2*/, enum tPlayer fromPlayer /*$s3*/, enum tInputKeyType *keyVal /*$s4*/, struct tMenuCommand *command /*$s5*/)
 // line 859, offset 0x80019d98
	/* begin block 1 */
		// Start line: 860
		// Start offset: 0x80019D98
		// Variables:
	// 		int card; // $s1
	// 		void * fMemCardGone; // $s0
	/* end block 1 */
	// End offset: 0x80019E58
	// End Line: 902

	/* begin block 2 */
		// Start line: 1846
	/* end block 2 */
	// End Line: 1847

	/* begin block 3 */
		// Start line: 1852
	/* end block 3 */
	// End Line: 1853

	/* begin block 4 */
		// Start line: 1852
	/* end block 4 */
	// End Line: 1853

	/* begin block 5 */
		// Start line: 1855
	/* end block 5 */
	// End Line: 1856

/* WARNING: Type propagation algorithm not settling */

void ProcessInput__15tDialogYesNoMem7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tDialogYesNoMem *this,tPlayer fromPlayer,tInputKeyType *keyVal,tMenuCommand *command
               )

{
  bool bVar1;
  int iVar2;
  CARDINFO_def *pCVar3;
  int card;
  
  bVar1 = false;
  card = CURRENTPLAYER * 4 + 1;
  iVar2 = MCRD_handlecardevents(card);
  switch(iVar2) {
  case 2:
  case 3:
  case 7:
  case 10:
  case 0xb:
  case 0x10:
  case 0x13:
  case 0x17:
    bVar1 = true;
  }
  pCVar3 = MCRD_getcard(card);
  if (pCVar3->status == -1) {
    bVar1 = true;
  }
  if (bVar1) {
    *(undefined **)&(this->tDialogYesNo).tDialogInteractive.tDialogMessageString.Centerit =
         &DAT_00000001;
    *(undefined2 *)
     ((int)&(this->tDialogYesNo).tDialogInteractive.tDialogMessageString.tDialogBase.fFullyOpen + 2)
         = 0xffff;
  }
  else {
    ProcessInput__12tDialogYesNo7tPlayerR13tInputKeyTypeR12tMenuCommand
              ((tDialogYesNo *)this,fromPlayer,keyVal,command);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__15tDialogYesNoTri7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tDialogYesNoTri *this /*$a0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyVal /*$a2*/, struct tMenuCommand *command /*$a3*/)
 // line 909, offset 0x80019e7c
	/* begin block 1 */
		// Start line: 910
		// Start offset: 0x80019E7C
	/* end block 1 */
	// End offset: 0x80019EAC
	// End Line: 917

	/* begin block 2 */
		// Start line: 1952
	/* end block 2 */
	// End Line: 1953

	/* begin block 3 */
		// Start line: 1960
	/* end block 3 */
	// End Line: 1961

	/* begin block 4 */
		// Start line: 1960
	/* end block 4 */
	// End Line: 1961

/* WARNING: Type propagation algorithm not settling */

void ProcessInput__15tDialogYesNoTri7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tDialogYesNoTri *this,tPlayer fromPlayer,tInputKeyType *keyVal,tMenuCommand *command
               )

{
  if (*keyVal == kInput_KeyType_Triangle) {
    *(undefined **)&(this->tDialogYesNo).tDialogInteractive.tDialogMessageString.Centerit =
         &DAT_00000001;
    *(undefined2 *)
     ((int)&(this->tDialogYesNo).tDialogInteractive.tDialogMessageString.tDialogBase.fFullyOpen + 2)
         = 0xffff;
  }
  else {
    ProcessInput__12tDialogYesNo7tPlayerR13tInputKeyTypeR12tMenuCommand
              ((tDialogYesNo *)this,fromPlayer,keyVal,command);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__21tDialogNoInputMessage7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tDialogNoInputMessage *this /*$a0*/)
 // line 921, offset 0x80019ebc
	/* begin block 1 */
		// Start line: 922
		// Start offset: 0x80019EBC
	/* end block 1 */
	// End offset: 0x80019EBC
	// End Line: 922

	/* begin block 2 */
		// Start line: 1979
	/* end block 2 */
	// End Line: 1980

	/* begin block 3 */
		// Start line: 1984
	/* end block 3 */
	// End Line: 1985

	/* begin block 4 */
		// Start line: 1984
	/* end block 4 */
	// End Line: 1985

	/* begin block 5 */
		// Start line: 1994
	/* end block 5 */
	// End Line: 1995

void ProcessInput__21tDialogNoInputMessage7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tDialogNoInputMessage *this)

{
  return;
}





