#include "THISDUST.H"
#include "FEAPP.H"


// decompiled code
// original method signature: 
// struct tFEApplication * /*$ra*/ __14tFEApplication(struct tFEApplication *this /*$s7*/)
 // line 89, offset 0x80012fa0
	/* begin block 1 */
		// Start line: 90
		// Start offset: 0x80012FA0
		// Variables:
	// 		struct tDialogMessageString *this; // $s0

		/* begin block 1.1 */
			// Start line: 90
			// Start offset: 0x80012FA0
			// Variables:
		// 		struct tDialogBase *this; // $s0

			/* begin block 1.1.1 */
				// Start line: 90
				// Start offset: 0x80012FA0
			/* end block 1.1.1 */
			// End offset: 0x80012FA0
			// End Line: 90
		/* end block 1.1 */
		// End offset: 0x80012FA0
		// End Line: 90

		/* begin block 1.2 */
			// Start line: 90
			// Start offset: 0x80012FA0
		/* end block 1.2 */
		// End offset: 0x80012FA0
		// End Line: 90
	/* end block 1 */
	// End offset: 0x80012FA0
	// End Line: 90

	/* begin block 2 */
		// Start line: 90
		// Start offset: 0x80012FA0
		// Variables:
	// 		struct tDialogHelp *this; // $s1

		/* begin block 2.1 */
			// Start line: 90
			// Start offset: 0x80012FA0
			// Variables:
		// 		struct tDialogBase *this; // $s1

			/* begin block 2.1.1 */
				// Start line: 90
				// Start offset: 0x80012FA0
			/* end block 2.1.1 */
			// End offset: 0x80012FA0
			// End Line: 90
		/* end block 2.1 */
		// End offset: 0x80012FA0
		// End Line: 90

		/* begin block 2.2 */
			// Start line: 90
			// Start offset: 0x80012FA0
		/* end block 2.2 */
		// End offset: 0x80012FA0
		// End Line: 90
	/* end block 2 */
	// End offset: 0x80012FA0
	// End Line: 90

	/* begin block 3 */
		// Start line: 90
		// Start offset: 0x80012FA0
		// Variables:
	// 		struct tDialogMessageStringWithTimeout *this; // $s0

		/* begin block 3.1 */
			// Start line: 90
			// Start offset: 0x80012FA0
			// Variables:
		// 		struct tDialogMessageString *this; // $s0

			/* begin block 3.1.1 */
				// Start line: 90
				// Start offset: 0x80012FA0
				// Variables:
			// 		struct tDialogBase *this; // $s0

				/* begin block 3.1.1.1 */
					// Start line: 90
					// Start offset: 0x80012FA0
				/* end block 3.1.1.1 */
				// End offset: 0x80012FA0
				// End Line: 90
			/* end block 3.1.1 */
			// End offset: 0x80012FA0
			// End Line: 90

			/* begin block 3.1.2 */
				// Start line: 90
				// Start offset: 0x80012FA0
			/* end block 3.1.2 */
			// End offset: 0x80012FA0
			// End Line: 90
		/* end block 3.1 */
		// End offset: 0x80012FA0
		// End Line: 90

		/* begin block 3.2 */
			// Start line: 90
			// Start offset: 0x80012FA0
		/* end block 3.2 */
		// End offset: 0x80012FA0
		// End Line: 90
	/* end block 3 */
	// End offset: 0x80012FA0
	// End Line: 90

	/* begin block 4 */
		// Start line: 90
		// Start offset: 0x80012FA0
		// Variables:
	// 		struct tDialogNoInputMessage *this; // $s1

		/* begin block 4.1 */
			// Start line: 90
			// Start offset: 0x80012FA0
			// Variables:
		// 		struct tDialogMessageString *this; // $s1

			/* begin block 4.1.1 */
				// Start line: 90
				// Start offset: 0x80012FA0
				// Variables:
			// 		struct tDialogBase *this; // $s1

				/* begin block 4.1.1.1 */
					// Start line: 90
					// Start offset: 0x80012FA0
				/* end block 4.1.1.1 */
				// End offset: 0x80012FA0
				// End Line: 90
			/* end block 4.1.1 */
			// End offset: 0x80012FA0
			// End Line: 90

			/* begin block 4.1.2 */
				// Start line: 90
				// Start offset: 0x80012FA0
			/* end block 4.1.2 */
			// End offset: 0x80012FA0
			// End Line: 90
		/* end block 4.1 */
		// End offset: 0x80012FA0
		// End Line: 90
	/* end block 4 */
	// End offset: 0x80012FA0
	// End Line: 90

	/* begin block 5 */
		// Start line: 90
		// Start offset: 0x80012FA0

		/* begin block 5.1 */
			// Start line: 90
			// Start offset: 0x80012FA0
			// Variables:
		// 		int i; // $a0
		/* end block 5.1 */
		// End offset: 0x80013194
		// End Line: 96
	/* end block 5 */
	// End offset: 0x80013194
	// End Line: 96

	/* begin block 6 */
		// Start line: 178
	/* end block 6 */
	// End Line: 179

	/* begin block 7 */
		// Start line: 178
	/* end block 7 */
	// End Line: 179

/* WARNING: Type propagation algorithm not settling */

tFEApplication * __14tFEApplication(tFEApplication *this)

{
  tFEApplication *ptVar1;
  int iVar2;
  
  __7tScreen((tScreen *)&this->messagePopup);
  *(undefined4 *)((this->messagePopup).tDialogBase.tScreen._vf + 2) = 0x800105b0;
  *(undefined4 *)&(this->messagePopup).tDialogBase.height = 0;
  (this->messagePopup).tDialogBase.width = 0;
  (this->messagePopup).tDialogBase.OffsetY = 0;
  *(undefined2 *)((int)&(this->messagePopup).tDialogBase.timeOutTicks + 2) = 0;
  *(undefined2 *)&(this->messagePopup).tDialogBase.timeOutTicks = 0;
  (this->messagePopup).tDialogBase.top = 0;
  (this->messagePopup).tDialogBase.left = 0;
  (this->messagePopup).tDialogBase.specificPlayer = 0;
  *(undefined2 *)((this->messagePopup).tDialogBase.tScreen._vf + 8) = 0;
  (this->messagePopup).tDialogBase.OffsetX = 0x120;
  *(undefined2 *)((this->messagePopup).tDialogBase.tScreen._vf + 6) = 0xffff;
  *(undefined2 *)&(this->messagePopup).tDialogBase.fFullyOpen = 0;
  (this->messagePopup).tDialogBase.startTicks = 0;
  *(undefined4 *)((this->messagePopup).tDialogBase.tScreen._vf + 2) = 0x800104f0;
  (this->messagePopup).string = (char *)0x0;
  *(undefined4 *)&(this->messagePopup).tDialogBase.MaxW = 0;
  (this->messagePopup).tDialogBase.startTicks = 0;
  *(undefined4 *)&(this->messagePopup).tDialogBase.fDefault = 0x80;
  __7tScreen((tScreen *)&this->fYOffset);
  *(undefined4 *)&(this->helpPopup).tDialogBase.tScreen.fScreenFadeVal = 0x800105b0;
  *(undefined4 *)&(this->helpPopup).tDialogBase.tScreen.fScreenFadeVal = 0x80010550;
  *(undefined4 *)&(this->helpPopup).tDialogBase.top = 0;
  (this->helpPopup).tDialogBase.left = 0;
  *(undefined2 *)((int)&(this->helpPopup).tDialogBase.timeOutTicks + 2) = 0;
  *(undefined2 *)((int)&(this->helpPopup).tDialogBase.startTicks + 2) = 0;
  *(undefined2 *)&(this->helpPopup).tDialogBase.startTicks = 0;
  (this->helpPopup).tDialogBase.specificPlayer = 0;
  *(undefined2 *)((this->helpPopup).tDialogBase.tScreen._vf + 8) = 0;
  *(undefined2 *)((this->helpPopup).tDialogBase.tScreen._vf + 6) = 0;
  *(undefined2 *)((this->helpPopup).tDialogBase.tScreen._vf + 4) = 0;
  *(undefined2 *)&(this->helpPopup).tDialogBase.timeOutTicks = 0x120;
  *(undefined2 *)((this->helpPopup).tDialogBase.tScreen._vf + 2) = 0xffff;
  (this->helpPopup).tDialogBase.MaxW = 0;
  (this->helpPopup).tDialogBase.currentlyOn = (void *)0x0;
  (this->helpPopup).tDialogBase.fDefault = -1;
  *(undefined **)&(this->helpPopup).tDialogBase.currentlyOn = &DAT_00000578;
  __7tScreen((tScreen *)this->waitingForOtherPlayer);
  (this->MemCardDialog).tDialogMessageString.tDialogBase.tScreen.fInternalScreenFadeVal =
       -0x7ffefa50;
  (this->MemCardDialog).tDialogMessageString.tDialogBase.tScreen.fInternalScreenFadeVal =
       -0x7ffefb10;
  (this->MemCardDialog).tDialogMessageString.tDialogBase.tScreen.fInternalScreenFadeVal =
       -0x7ffeff68;
  *(undefined4 *)&(this->MemCardDialog).tDialogMessageString.tDialogBase.specificPlayer = 0;
  *(undefined2 *)((this->MemCardDialog).tDialogMessageString.tDialogBase.tScreen._vf + 8) = 0;
  *(undefined2 *)((int)&(this->MemCardDialog).tDialogMessageString.tDialogBase.startTicks + 2) = 0;
  *(undefined2 *)((int)&(this->MemCardDialog).tDialogMessageString.tDialogBase.currentlyOn + 2) = 0;
  *(undefined2 *)&(this->MemCardDialog).tDialogMessageString.tDialogBase.currentlyOn = 0;
  *(undefined2 *)((this->MemCardDialog).tDialogMessageString.tDialogBase.tScreen._vf + 6) = 0;
  *(undefined2 *)((this->MemCardDialog).tDialogMessageString.tDialogBase.tScreen._vf + 4) = 0;
  *(undefined2 *)((this->MemCardDialog).tDialogMessageString.tDialogBase.tScreen._vf + 2) = 0;
  *(undefined2 *)(this->MemCardDialog).tDialogMessageString.tDialogBase.tScreen._vf = 0;
  *(undefined2 *)&(this->MemCardDialog).tDialogMessageString.tDialogBase.startTicks = 0x120;
  (this->MemCardDialog).tDialogMessageString.tDialogBase.tScreen.fScreenFadeVal = -1;
  (this->MemCardDialog).tDialogMessageString.tDialogBase.OffsetX = 0;
  *(undefined4 *)&(this->MemCardDialog).tDialogMessageString.tDialogBase.height = 0;
  *(undefined4 *)&(this->MemCardDialog).tDialogMessageString.tDialogBase.fDefault = 0;
  (this->MemCardDialog).tDialogMessageString.tDialogBase.timeOutTicks = 0;
  *(undefined4 *)&(this->MemCardDialog).tDialogMessageString.tDialogBase.height = 0;
  *(undefined4 *)&(this->MemCardDialog).tDialogMessageString.tDialogBase.MaxW = 0x80;
  *(undefined4 *)&(this->MemCardDialog).tDialogMessageString.tDialogBase.height = 0x480;
  __7tScreen((tScreen *)&(this->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
  iVar2 = 0;
  *(undefined **)
   &(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.tScreen.fTransitionOff = &table;
  *(undefined4 *)((this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.tScreen._vf + 6) = 0
  ;
  *(undefined2 *)((this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.tScreen._vf + 4) = 0
  ;
  *(undefined2 *)
   ((int)&(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.currentlyOn + 2) = 0;
  (this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.reservedheight = 0;
  (this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.height = 0;
  *(undefined2 *)((this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.tScreen._vf + 2) = 0
  ;
  *(undefined2 *)(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.tScreen._vf = 0;
  (this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.tScreen.fScreenFadeVal = 0;
  *(undefined2 *)
   ((int)&(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.tScreen.
          fInternalScreenFadeVal + 2) = 0;
  *(undefined2 *)&(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.currentlyOn = 0x120;
  *(undefined2 *)
   &(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.tScreen.fInternalScreenFadeVal =
       0xffff;
  *(undefined2 *)&(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.timeOutTicks = 0;
  *(undefined4 *)&(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.top = 0;
  *(undefined **)
   &(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.tScreen.fTransitionOff = &table;
  (this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.fFullyOpen = (void *)0x0;
  (this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.startTicks = 0;
  *(undefined4 *)&(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.top = 0;
  *(undefined4 *)&(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.OffsetX = 0x80;
  *(undefined **)
   &(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.tScreen.fTransitionOff = &table;
  ptVar1 = this;
  do {
    *(undefined4 *)&(ptVar1->NoInputMemCardDialog).tDialogMessageString.tDialogBase.fDefault = 0;
    (ptVar1->NoInputMemCardDialog).tDialogMessageString.string = (char *)0x0;
    ptVar1->gotName[0] = (void *)0xffffffff;
    iVar2 = iVar2 + 1;
    ptVar1 = (tFEApplication *)ptVar1->fCurrentMenu;
  } while (iVar2 < 2);
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._14tFEApplication(struct tFEApplication *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 101, offset 0x800131c4
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x800131C4
	/* end block 1 */
	// End offset: 0x800131C4
	// End Line: 102

	/* begin block 2 */
		// Start line: 102
		// Start offset: 0x800131C4

		/* begin block 2.1 */
			// Start line: 102
			// Start offset: 0x800131C4

			/* begin block 2.1.1 */
				// Start line: 102
				// Start offset: 0x800131C4
			/* end block 2.1.1 */
			// End offset: 0x800131C4
			// End Line: 102
		/* end block 2.1 */
		// End offset: 0x800131C4
		// End Line: 102
	/* end block 2 */
	// End offset: 0x800131C4
	// End Line: 102

	/* begin block 3 */
		// Start line: 102
		// Start offset: 0x800131C4

		/* begin block 3.1 */
			// Start line: 102
			// Start offset: 0x800131C4

			/* begin block 3.1.1 */
				// Start line: 102
				// Start offset: 0x800131C4
			/* end block 3.1.1 */
			// End offset: 0x800131C4
			// End Line: 102
		/* end block 3.1 */
		// End offset: 0x800131C4
		// End Line: 102
	/* end block 3 */
	// End offset: 0x800131C4
	// End Line: 102

	/* begin block 4 */
		// Start line: 102
		// Start offset: 0x800131C4

		/* begin block 4.1 */
			// Start line: 102
			// Start offset: 0x800131C4
		/* end block 4.1 */
		// End offset: 0x800131C4
		// End Line: 102
	/* end block 4 */
	// End offset: 0x800131C4
	// End Line: 102

	/* begin block 5 */
		// Start line: 102
		// Start offset: 0x800131C4

		/* begin block 5.1 */
			// Start line: 102
			// Start offset: 0x800131C4
		/* end block 5.1 */
		// End offset: 0x800131C4
		// End Line: 102
	/* end block 5 */
	// End offset: 0x800131C4
	// End Line: 102

	/* begin block 6 */
		// Start line: 197
	/* end block 6 */
	// End Line: 198

	/* begin block 7 */
		// Start line: 203
	/* end block 7 */
	// End Line: 204

	/* begin block 8 */
		// Start line: 203
	/* end block 8 */
	// End Line: 204

void ___14tFEApplication(tFEApplication *this,int __in_chrg)

{
  ___7tScreen((tScreen *)&(this->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText,2);
  ___7tScreen((tScreen *)this->waitingForOtherPlayer,2);
  ___7tScreen((tScreen *)&this->fYOffset,2);
  ___7tScreen((tScreen *)&this->messagePopup,2);
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PerformMenuInitialization__14tFEApplication(struct tFEApplication *this /*$a0*/)
 // line 105, offset 0x80013234
	/* begin block 1 */
		// Start line: 106
		// Start offset: 0x80013234
	/* end block 1 */
	// End offset: 0x80013234
	// End Line: 106

	/* begin block 2 */
		// Start line: 208
	/* end block 2 */
	// End Line: 209

	/* begin block 3 */
		// Start line: 211
	/* end block 3 */
	// End Line: 212

	/* begin block 4 */
		// Start line: 211
	/* end block 4 */
	// End Line: 212

void PerformMenuInitialization__14tFEApplication(tFEApplication *this)

{
  this->fCurrentMusic = 0;
  AudioMus_Volume__Fi((int)((uint)(byte)frontEnd.musicVolume * 0x23) >> 6);
  InitializeClass__11tDialogBase();
  Clock_SystemStartUp__Fv();
  Draw_gDoVSync = 1;
  FETextRender_SetABR__Fib(0,(void *)0x0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PerformMenuDestruction__14tFEApplication(struct tFEApplication *this /*$s2*/)
 // line 126, offset 0x8001329c
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x8001329C
		// Variables:
	// 		short i; // $s1
	/* end block 1 */
	// End offset: 0x80013310
	// End Line: 142

	/* begin block 2 */
		// Start line: 256
	/* end block 2 */
	// End Line: 257

	/* begin block 3 */
		// Start line: 260
	/* end block 3 */
	// End Line: 261

	/* begin block 4 */
		// Start line: 260
	/* end block 4 */
	// End Line: 261

void PerformMenuDestruction__14tFEApplication(tFEApplication *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  Clock_SystemCleanUp__Fv();
  iVar3 = 0;
  do {
    iVar2 = (int)&this->fCurrentMusic + ((iVar3 << 0x10) >> 0xe);
    iVar1 = *(int *)(iVar2 + 0xc);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x60) + 0x3c))
                (iVar1 + (int)*(short *)(*(int *)(iVar1 + 0x60) + 0x38));
    }
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar2 + 0xc) = 0;
  } while (iVar3 * 0x10000 >> 0x10 < 2);
  AudioMus_StopSong__Fi(1000);
  Draw_gDoVSync = 0;
  FETextRender_SetABR__Fib(0,(void *)0x0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawHelpIcons__14tFEApplication(struct tFEApplication *this /*$s1*/)
 // line 151, offset 0x80013344
	/* begin block 1 */
		// Start line: 152
		// Start offset: 0x80013344
		// Variables:
	// 		struct tDrawShapeExtended flags; // stack offset -80
	// 		int Col; // $s5
	// 		int x; // $s3
	// 		int y; // $s2

		/* begin block 1.1 */
			// Start line: 152
			// Start offset: 0x80013344

			/* begin block 1.1.1 */
				// Start line: 161
				// Start offset: 0x80013390

				/* begin block 1.1.1.1 */
					// Start line: 161
					// Start offset: 0x80013390
				/* end block 1.1.1.1 */
				// End offset: 0x80013390
				// End Line: 161
			/* end block 1.1.1 */
			// End offset: 0x80013390
			// End Line: 161

			/* begin block 1.1.2 */
				// Start line: 162
				// Start offset: 0x800133A0
				// Variables:
			// 		char string[12]; // stack offset -56
			// 		char string2[2]; // stack offset -40

				/* begin block 1.1.2.1 */
					// Start line: 165
					// Start offset: 0x800133A0
					// Variables:
				// 		int i; // $s0
				/* end block 1.1.2.1 */
				// End offset: 0x80013410
				// End Line: 174
			/* end block 1.1.2 */
			// End offset: 0x800134A8
			// End Line: 185

			/* begin block 1.1.3 */
				// Start line: 190
				// Start offset: 0x800134D4

				/* begin block 1.1.3.1 */
					// Start line: 203
					// Start offset: 0x80013594

					/* begin block 1.1.3.1.1 */
						// Start line: 203
						// Start offset: 0x80013594
						// Variables:
					// 		struct tMenu *this; // $v0

						/* begin block 1.1.3.1.1.1 */
							// Start line: 203
							// Start offset: 0x80013594
						/* end block 1.1.3.1.1.1 */
						// End offset: 0x80013594
						// End Line: 203
					/* end block 1.1.3.1.1 */
					// End offset: 0x80013594
					// End Line: 203

					/* begin block 1.1.3.1.2 */
						// Start line: 207
						// Start offset: 0x80013614

						/* begin block 1.1.3.1.2.1 */
							// Start line: 207
							// Start offset: 0x80013614
						/* end block 1.1.3.1.2.1 */
						// End offset: 0x80013614
						// End Line: 207
					/* end block 1.1.3.1.2 */
					// End offset: 0x80013614
					// End Line: 207
				/* end block 1.1.3.1 */
				// End offset: 0x80013718
				// End Line: 220
			/* end block 1.1.3 */
			// End offset: 0x80013718
			// End Line: 220
		/* end block 1.1 */
		// End offset: 0x80013718
		// End Line: 220
	/* end block 1 */
	// End offset: 0x80013718
	// End Line: 220

	/* begin block 2 */
		// Start line: 304
	/* end block 2 */
	// End Line: 305

	/* begin block 3 */
		// Start line: 310
	/* end block 3 */
	// End Line: 311

	/* begin block 4 */
		// Start line: 310
	/* end block 4 */
	// End Line: 311

void DrawHelpIcons__14tFEApplication(tFEApplication *this)

{
  bool bVar1;
  char *sMenuText;
  size_t sVar2;
  int iVar3;
  short x;
  uchar *y;
  uchar *puVar4;
  int x_00;
  undefined auStack80 [4];
  undefined *local_4c;
  char acStack57 [17];
  char local_28;
  undefined local_27;
  
  x_00 = 0xe;
  local_4c = &DAT_00786e14;
  y = screenheight + -0x19;
  if ((this->fCurrentMenu[0] == (_func_45 *)0x0) || (*(short *)(this->fCurrentMenu[0] + 100) == 0))
  {
    if (((gPadinfo.buf[0].nopad == '\0') && (gPadinfo.buf[0].ID != '#')) ||
       (((char)gPadinfo.buf[3].data == '\0' && (gPadinfo.buf[3].data._1_1_ != '#')))) {
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (0x35,0x18,0xe,(int)y,0,0,(tDrawShapeExtended *)auStack80);
      x_00 = 0x1c;
    }
    if ((gPadinfo.buf[0].ID == '#') || (gPadinfo.buf[3].data._1_1_ == '#')) {
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (0x36,0x18,x_00,(int)y,0,0,(tDrawShapeExtended *)auStack80);
      x_00 = x_00 + 0xf;
    }
    sMenuText = TextSys_Word__Fi(0xfc);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,(short)x_00,(short)((uint)((int)y * 0x10000) >> 0x10),(int)&DAT_00786e14,0,
               0);
    sMenuText = TextSys_Word__Fi(0xfc);
    iVar3 = textpixels(sMenuText);
    sMenuText = TextSys_Word__Fi(0xfc);
    sVar2 = strlen(sMenuText);
    x_00 = x_00 + 5 + (iVar3 - sVar2);
    bVar1 = false;
    if ((*(int *)(this->fCurrentMenu[0] + 0x5c) != 0) ||
       ((this->fCurrentMenu[1] != (_func_45 *)0x0 && (*(int *)(this->fCurrentMenu[1] + 0x5c) != 0)))
       ) {
      bVar1 = true;
    }
    if (bVar1) {
      if (((gPadinfo.buf[0].nopad == '\0') && (gPadinfo.buf[0].ID != '#')) ||
         (((char)gPadinfo.buf[3].data == '\0' && (gPadinfo.buf[3].data._1_1_ != '#')))) {
        DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                  (0x37,0x18,x_00,(int)y,0,0,(tDrawShapeExtended *)auStack80);
        x_00 = x_00 + 0xe;
      }
      x = (short)x_00;
      if ((gPadinfo.buf[0].ID == '#') || (gPadinfo.buf[3].data._1_1_ == '#')) {
        DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                  (0x38,0x18,x_00,(int)y,0,0,(tDrawShapeExtended *)auStack80);
        x = x + 0xf;
      }
      sMenuText = TextSys_Word__Fi(0xfd);
      FETextRender_FullTextRGB__FPcssics
                (sMenuText,x,(short)((uint)((int)y * 0x10000) >> 0x10),(int)&DAT_00786e14,0,0);
    }
  }
  else {
    local_27 = 0;
    sMenuText = TextSys_Word__Fi(0xfc);
    sprintf(acStack57[1],sMenuText);
    sVar2 = strlen(acStack57[1]);
    while (sVar2 = sVar2 - 1, -1 < (int)sVar2) {
      x = (short)y;
      y = y + -8;
      local_28 = acStack57[1][sVar2];
      FETextRender_FullTextRGB__FPcssics(&local_28,0xe,x,(int)&DAT_00786e14,0,0);
    }
    if (((gPadinfo.buf[0].nopad == '\0') && (gPadinfo.buf[0].ID != '#')) ||
       ((puVar4 = y + 8, (char)gPadinfo.buf[3].data == '\0' &&
        (puVar4 = y + 8, gPadinfo.buf[3].data._1_1_ != '#')))) {
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (0x35,0x18,0xe,(int)y,0,0,(tDrawShapeExtended *)auStack80);
      puVar4 = y;
    }
    if ((gPadinfo.buf[0].ID == '#') || (gPadinfo.buf[3].data._1_1_ == '#')) {
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (0x36,0x18,0xd,(int)(puVar4 + -9),0,0,(tDrawShapeExtended *)auStack80);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Redraw__14tFEApplication(struct tFEApplication *this /*$s2*/)
 // line 225, offset 0x8001373c
	/* begin block 1 */
		// Start line: 226
		// Start offset: 0x8001373C
		// Variables:
	// 		short i; // $s3
	// 		char saveFPlayer; // $s6
	// 		short height; // $s4
	// 		char buffer[32]; // stack offset -88
	// 		struct DRAWENV *drenv; // $s5
	// 		struct DR_AREA *daprim; // $a0
	// 		struct RECT r; // stack offset -56

		/* begin block 1.1 */
			// Start line: 295
			// Start offset: 0x80013850

			/* begin block 1.1.1 */
				// Start line: 299
				// Start offset: 0x80013888
				// Variables:
			// 		struct tMenuCommand emptycommand; // stack offset -48
			// 		enum tInputKeyType JustOneToPass; // stack offset -40

				/* begin block 1.1.1.1 */
					// Start line: 299
					// Start offset: 0x80013888

					/* begin block 1.1.1.1.1 */
						// Start line: 299
						// Start offset: 0x80013888
					/* end block 1.1.1.1.1 */
					// End offset: 0x80013888
					// End Line: 299
				/* end block 1.1.1.1 */
				// End offset: 0x80013888
				// End Line: 299

				/* begin block 1.1.1.2 */
					// Start line: 299
					// Start offset: 0x80013888

					/* begin block 1.1.1.2.1 */
						// Start line: 299
						// Start offset: 0x80013888
						// Variables:
					// 		struct tFEApplication *this; // $s2

						/* begin block 1.1.1.2.1.1 */
							// Start line: 299
							// Start offset: 0x80013888
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x80013888
						// End Line: 299
					/* end block 1.1.1.2.1 */
					// End offset: 0x80013888
					// End Line: 299

					/* begin block 1.1.1.2.2 */
						// Start line: 299
						// Start offset: 0x80013888

						/* begin block 1.1.1.2.2.1 */
							// Start line: 299
							// Start offset: 0x80013888
						/* end block 1.1.1.2.2.1 */
						// End offset: 0x80013888
						// End Line: 299
					/* end block 1.1.1.2.2 */
					// End offset: 0x80013888
					// End Line: 299
				/* end block 1.1.1.2 */
				// End offset: 0x800138CC
				// End Line: 304
			/* end block 1.1.1 */
			// End offset: 0x800138CC
			// End Line: 304

			/* begin block 1.1.2 */
				// Start line: 307
				// Start offset: 0x800138E8

				/* begin block 1.1.2.1 */
					// Start line: 307
					// Start offset: 0x800138E8

					/* begin block 1.1.2.1.1 */
						// Start line: 307
						// Start offset: 0x800138E8
					/* end block 1.1.2.1.1 */
					// End offset: 0x80013900
					// End Line: 307
				/* end block 1.1.2.1 */
				// End offset: 0x80013900
				// End Line: 307
			/* end block 1.1.2 */
			// End offset: 0x80013900
			// End Line: 307
		/* end block 1.1 */
		// End offset: 0x80013900
		// End Line: 307

		/* begin block 1.2 */
			// Start line: 309
			// Start offset: 0x80013900

			/* begin block 1.2.1 */
				// Start line: 310
				// Start offset: 0x80013914
				// Variables:
			// 		struct tMenuCommand emptycommand; // stack offset -48
			// 		enum tInputKeyType JustOneToPass; // stack offset -36

				/* begin block 1.2.1.1 */
					// Start line: 310
					// Start offset: 0x80013914
					// Variables:
				// 		struct tMenuItem *this; // $a0

					/* begin block 1.2.1.1.1 */
						// Start line: 310
						// Start offset: 0x80013914
					/* end block 1.2.1.1.1 */
					// End offset: 0x80013914
					// End Line: 310
				/* end block 1.2.1.1 */
				// End offset: 0x80013914
				// End Line: 310

				/* begin block 1.2.1.2 */
					// Start line: 310
					// Start offset: 0x80013914

					/* begin block 1.2.1.2.1 */
						// Start line: 310
						// Start offset: 0x80013914
						// Variables:
					// 		struct tFEApplication *this; // $s2

						/* begin block 1.2.1.2.1.1 */
							// Start line: 310
							// Start offset: 0x80013914
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x80013914
						// End Line: 310
					/* end block 1.2.1.2.1 */
					// End offset: 0x80013914
					// End Line: 310

					/* begin block 1.2.1.2.2 */
						// Start line: 310
						// Start offset: 0x80013914

						/* begin block 1.2.1.2.2.1 */
							// Start line: 310
							// Start offset: 0x80013914
						/* end block 1.2.1.2.2.1 */
						// End offset: 0x80013914
						// End Line: 310
					/* end block 1.2.1.2.2 */
					// End offset: 0x80013914
					// End Line: 310
				/* end block 1.2.1.2 */
				// End offset: 0x80013954
				// End Line: 315
			/* end block 1.2.1 */
			// End offset: 0x80013954
			// End Line: 315

			/* begin block 1.2.2 */
				// Start line: 318
				// Start offset: 0x80013970

				/* begin block 1.2.2.1 */
					// Start line: 318
					// Start offset: 0x80013970
					// Variables:
				// 		struct tMenuItem *this; // $a0

					/* begin block 1.2.2.1.1 */
						// Start line: 318
						// Start offset: 0x80013970
					/* end block 1.2.2.1.1 */
					// End offset: 0x80013988
					// End Line: 318
				/* end block 1.2.2.1 */
				// End offset: 0x80013988
				// End Line: 318
			/* end block 1.2.2 */
			// End offset: 0x80013988
			// End Line: 318
		/* end block 1.2 */
		// End offset: 0x80013988
		// End Line: 318
	/* end block 1 */
	// End offset: 0x80013D1C
	// End Line: 381

	/* begin block 2 */
		// Start line: 468
	/* end block 2 */
	// End Line: 469

	/* begin block 3 */
		// Start line: 474
	/* end block 3 */
	// End Line: 475

	/* begin block 4 */
		// Start line: 474
	/* end block 4 */
	// End Line: 475

void Redraw__14tFEApplication(tFEApplication *this)

{
  undefined uVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  tGlobalMenuDefs *ptVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  DRAWENV *pDVar9;
  tGlobalMenuDefs *ptVar10;
  uint uVar11;
  _func_45 *p_Var12;
  _func_49 *p_Var13;
  uint uVar14;
  short sVar15;
  char acStack88 [32];
  ushort local_38;
  short local_36;
  undefined2 local_34;
  short local_32;
  tMenuCommand tStack48;
  tInputKeyType local_28;
  tInputKeyType local_24;
  
  uVar1 = *(undefined *)&(this->helpPopup).numItems;
  FeAudio_systemtask__Fi(0);
  Draw_StartFrameRender__Fv();
  Draw_StartRenderingView__Fi(Draw_gPlayer1View);
  uVar6 = largestunused();
  sprintf(acStack88,(char *)&PTR_DAT_80010044,uVar6);
  FETextRender_FullText__FPcss13tMenuTextType14tMenuTextStates
            (acStack88,0x100,0xd7,textType_FramedInfo,textState_Selected,0);
  iVar7 = AudioMus_Buffered__Fv();
  iVar8 = AudioMus_Threshold__Fv();
  sprintf(acStack88,s__d__d_80010048,iVar7,iVar8);
  FETextRender_FullText__FPcss13tMenuTextType14tMenuTextStates
            (acStack88,0x10,0xd7,textType_FramedInfo,textState_Hilighted,0);
  pDVar9 = Draw_GetDRAWENV__Fii(Draw_gPlayer1View,gFlip);
  if (this->fCurrentMenu[1] == (_func_45 *)0x0) {
    sVar15 = (short)screenheight;
  }
  else {
    sVar15 = (short)((uint)(screenheight + ((uint)screenheight >> 0x1f)) >> 1);
  }
  DrawAllDialogs__11tDialogBase();
  DrawHelpIcons__14tFEApplication(this);
  ptVar5 = menuDefs;
  if ((gPadinfo.buf[0].nopad == '\0') && ((char)gPadinfo.buf[3].data == '\0')) {
    *(uint *)&(menuDefs->itemMainOnePlayerRace).fOffset =
         *(uint *)&(menuDefs->itemMainOnePlayerRace).fOffset & 0xfffffffe;
  }
  else {
    *(uint *)&(menuDefs->itemMainOnePlayerRace).fOffset =
         *(uint *)&(menuDefs->itemMainOnePlayerRace).fOffset | 1;
    local_28 = kInput_KeyType_Up;
    if (*(short **)(this->fCurrentMenu[0] + *(int *)(this->fCurrentMenu[0] + 8) * 4 + 0x10) ==
        &(ptVar5->itemMainOnePlayerRace).fOffset) {
      ProcessInput__9tMenuNFS47tPlayerR13tInputKeyTypeR12tMenuCommand
                ((tMenuNFS4 *)
                 &(ptVar5->itemMainOptions).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
                  fNewMenu,kPlayerOne,&local_28,&tStack48);
    }
  }
  ptVar5 = menuDefs;
  if (gPadinfo.buf[0].nopad == '\0') {
    (menuDefs->itemMainOnePlayerRace).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fFlags
         = (menuDefs->itemMainOnePlayerRace).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
           fFlags & 0xfffffffe;
  }
  else {
    (menuDefs->itemMainOnePlayerRace).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fFlags
         = (menuDefs->itemMainOnePlayerRace).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
           fFlags | 1;
    ptVar10 = *(tGlobalMenuDefs **)
               (this->fCurrentMenu[0] + *(int *)(this->fCurrentMenu[0] + 8) * 4 + 0x10);
    local_24 = kInput_KeyType_Down;
    if (ptVar10 == ptVar5) {
      ProcessInput__9tMenuNFS47tPlayerR13tInputKeyTypeR12tMenuCommand
                ((tMenuNFS4 *)
                 &(ptVar10->itemMainOptions).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
                  fNewMenu,kPlayerOne,&local_24,&tStack48);
    }
  }
  puVar4 = DAT_1f800004;
  puVar3 = DAT_1f800000;
  uVar14 = 1;
  local_38 = 0;
  local_36 = (pDVar9->clip).y;
  local_34 = 0x200;
  local_32 = (short)screenheight;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar11 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 3;
  *puVar3 = *puVar3 & 0xff000000 | uVar11;
  SetDrawArea((int)puVar4,&local_38);
  do {
    *(char *)&(this->helpPopup).numItems = (char)uVar14;
    *(ushort *)(this->fLastKeyPressed + 1) = ((ushort)uVar14 & 0xff) * sVar15;
    p_Var12 = this->fCurrentMenu[uVar14 & 0xff];
    if (p_Var12 != (_func_45 *)0x0) {
      (**(code **)(*(int *)(p_Var12 + 0x68) + 0x54))
                (p_Var12 + (int)*(short *)(*(int *)(p_Var12 + 0x68) + 0x50));
    }
    p_Var13 = this->fParentMenu[(uint)*(byte *)&(this->helpPopup).numItems];
    if (p_Var13 != (_func_49 *)0x0) {
      (**(code **)(*(int *)(p_Var13 + 0x68) + 0x54))
                (p_Var13 + (int)*(short *)(*(int *)(p_Var13 + 0x68) + 0x50));
    }
    if ((tScreen *)this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems] !=
        (tScreen *)0x0) {
      UpdateTransition__7tScreen
                ((tScreen *)this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems]);
    }
    p_Var12 = this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems];
    if ((p_Var12 != (_func_45 *)0x0) &&
       (iVar7 = (**(code **)(*(int *)(p_Var12 + 0x68) + 0x44))
                          (p_Var12 + (int)*(short *)(*(int *)(p_Var12 + 0x68) + 0x40)), iVar7 != 0))
    {
      iVar7 = *(int *)(this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] + 0x68);
      (**(code **)(iVar7 + 0x4c))
                (this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] +
                 (int)*(short *)(iVar7 + 0x48));
    }
    if ((tScreen *)this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems] !=
        (tScreen *)0x0) {
      Draw__7tScreenb((tScreen *)this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems],
                      (void *)0x0);
    }
    uVar11 = (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[1];
    if (uVar11 != 0) {
      bVar2 = false;
      if ((&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[0x8c] == 0) {
LAB_80013bfc:
        iVar7 = *(int *)(this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] + 0x68);
        (**(code **)(iVar7 + 0x4c))
                  (this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] +
                   (int)*(short *)(iVar7 + 0x48));
      }
      else {
        iVar7 = (**(code **)(*(int *)(uVar11 + 0x68) + 0x3c))
                          (uVar11 + (int)*(short *)(*(int *)(uVar11 + 0x68) + 0x38));
        if (iVar7 == 0) {
          iVar7 = *(int *)(this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] + 0x68);
          iVar7 = (**(code **)(iVar7 + 0x44))
                            (this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] +
                             (int)*(short *)(iVar7 + 0x40));
          bVar2 = iVar7 == 0;
        }
        if (bVar2) goto LAB_80013bfc;
      }
      p_Var13 = this->fParentMenu[(uint)*(byte *)&(this->helpPopup).numItems];
      if (p_Var13 != (_func_49 *)0x0) {
        (**(code **)(*(int *)(p_Var13 + 0x68) + 0x4c))
                  (p_Var13 + (int)*(short *)(*(int *)(p_Var13 + 0x68) + 0x48));
      }
    }
    if ((tScreen *)this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems] !=
        (tScreen *)0x0) {
      Draw__7tScreenb((tScreen *)this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems],
                      &DAT_00000001);
    }
    puVar4 = DAT_1f800004;
    puVar3 = DAT_1f800000;
    local_38 = 0;
    local_36 = (pDVar9->clip).y + *(short *)(this->fLastKeyPressed + 1);
    local_34 = 0x200;
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar11 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 3;
    *puVar3 = *puVar3 & 0xff000000 | uVar11;
    local_32 = sVar15;
    SetDrawArea((int)puVar4,&local_38);
    uVar14 = uVar14 - 1;
    if ((int)(uVar14 * 0x10000) < 0) {
      *(undefined *)&(this->helpPopup).numItems = uVar1;
      Draw_StopRenderingView__Fi(Draw_gPlayer1View);
      Draw_StopFrameRender__Fv();
      return;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateMusic__14tFEApplication(struct tFEApplication *this /*$s0*/)
 // line 404, offset 0x80013d60
	/* begin block 1 */
		// Start line: 405
		// Start offset: 0x80013D60
	/* end block 1 */
	// End offset: 0x80013E10
	// End Line: 418

	/* begin block 2 */
		// Start line: 838
	/* end block 2 */
	// End Line: 839

	/* begin block 3 */
		// Start line: 847
	/* end block 3 */
	// End Line: 848

	/* begin block 4 */
		// Start line: 847
	/* end block 4 */
	// End Line: 848

	/* begin block 5 */
		// Start line: 849
	/* end block 5 */
	// End Line: 850

void UpdateMusic__14tFEApplication(tFEApplication *this)

{
  uint uVar1;
  
  AudioMus_Volume__Fi((int)((uint)(byte)frontEnd.musicVolume * 0x23) >> 6);
  uVar1 = this->fCurrentMusic;
  if ((uVar1 & 0x1000) == 0) {
    if ((uVar1 & 0x2000) == 0) {
      if ((uVar1 & 0x4000) == 0) {
        if ((uVar1 & 0x8000) == 0) {
          AudioMus_StopSong__Fi(1000);
        }
        else {
          AudioMus_PlaySong__FPc(s_victory__8001006c);
        }
      }
      else {
        AudioMus_PlaySong__FPc(s_showcase__80010060);
      }
    }
    else {
      AudioMus_PlaySong__FPc(s_garage__80010058);
    }
  }
  else {
    AudioMus_PlaySong__FPc(s_zmenu__80010050);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMenu__14tFEApplicationsP5tMenu(struct tFEApplication *this /*$s1*/, short i /*$s2*/, struct tMenu *menu /*$s0*/)
 // line 422, offset 0x80013e20
	/* begin block 1 */
		// Start line: 423
		// Start offset: 0x80013E20

		/* begin block 1.1 */
			// Start line: 423
			// Start offset: 0x80013E20

			/* begin block 1.1.1 */
				// Start line: 427
				// Start offset: 0x80013E5C

				/* begin block 1.1.1.1 */
					// Start line: 428
					// Start offset: 0x80013E5C

					/* begin block 1.1.1.1.1 */
						// Start line: 429
						// Start offset: 0x80013E64

						/* begin block 1.1.1.1.1.1 */
							// Start line: 429
							// Start offset: 0x80013E64
							// Variables:
						// 		struct tMenu *this; // $s0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 429
								// Start offset: 0x80013E64
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80013E64
							// End Line: 429
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80013E64
						// End Line: 429
					/* end block 1.1.1.1.1 */
					// End offset: 0x80013E80
					// End Line: 434
				/* end block 1.1.1.1 */
				// End offset: 0x80013E80
				// End Line: 434

				/* begin block 1.1.1.2 */
					// Start line: 446
					// Start offset: 0x80013EF8
					// Variables:
				// 		struct tMenu *this; // $s0

					/* begin block 1.1.1.2.1 */
						// Start line: 446
						// Start offset: 0x80013EF8
					/* end block 1.1.1.2.1 */
					// End offset: 0x80013EF8
					// End Line: 446
				/* end block 1.1.1.2 */
				// End offset: 0x80013EF8
				// End Line: 446
			/* end block 1.1.1 */
			// End offset: 0x80013F0C
			// End Line: 449
		/* end block 1.1 */
		// End offset: 0x80013F0C
		// End Line: 449
	/* end block 1 */
	// End offset: 0x80013F0C
	// End Line: 449

	/* begin block 2 */
		// Start line: 880
	/* end block 2 */
	// End Line: 881

	/* begin block 3 */
		// Start line: 885
	/* end block 3 */
	// End Line: 886

	/* begin block 4 */
		// Start line: 885
	/* end block 4 */
	// End Line: 886

void SetMenu__14tFEApplicationsP5tMenu(tFEApplication *this,short i,tMenu *menu)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (menu != (tMenu *)this->fCurrentMenu[(int)i]) {
    if (((int)i == 0) && (uVar1 = menu->fFlags & 0xf000, uVar1 != this->fCurrentMusic)) {
      this->fCurrentMusic = uVar1;
      UpdateMusic__14tFEApplication(this);
    }
    iVar2 = (**(code **)(*(int *)(menu->_vf + 2) + 0x44))
                      ((int)&menu->fFlags + (int)*(short *)(*(int *)(menu->_vf + 2) + 0x40));
    iVar3 = (int)((uint)(ushort)i << 0x10) >> 0xe;
    if (iVar2 == 1) {
      *(tMenu **)((int)this->fTransitionToMenu + iVar3) = menu;
    }
    else {
      iVar3 = (int)&this->fCurrentMusic + iVar3;
      iVar2 = *(int *)(iVar3 + 4);
      *(tMenu **)(iVar3 + 0x14) = menu;
      if ((iVar2 != 0) && (menu != (tMenu *)0x0)) {
        (**(code **)(*(int *)(iVar2 + 0x68) + 0x2c))
                  (iVar2 + (int)*(short *)(*(int *)(iVar2 + 0x68) + 0x28));
      }
    }
    SetScreen__14tFEApplicationsP7tScreen(this,i,menu->fScreen);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetScreen__14tFEApplicationsP7tScreen(struct tFEApplication *this /*$a0*/, short i /*$a1*/, struct tScreen *screen /*$a2*/)
 // line 453, offset 0x80013f24
	/* begin block 1 */
		// Start line: 454
		// Start offset: 0x80013F24
	/* end block 1 */
	// End offset: 0x80013F64
	// End Line: 459

	/* begin block 2 */
		// Start line: 945
	/* end block 2 */
	// End Line: 946

	/* begin block 3 */
		// Start line: 950
	/* end block 3 */
	// End Line: 951

	/* begin block 4 */
		// Start line: 950
	/* end block 4 */
	// End Line: 951

void SetScreen__14tFEApplicationsP7tScreen(tFEApplication *this,short i,tScreen *screen)

{
  tScreen *this_00;
  int iVar1;
  
  iVar1 = (int)&this->fCurrentMusic + ((int)((uint)(ushort)i << 0x10) >> 0xe);
  this_00 = *(tScreen **)(iVar1 + 0xc);
  if (((screen != this_00) && (*(tScreen **)(iVar1 + 0x1c) = screen, this_00 != (tScreen *)0x0)) &&
     (screen != (tScreen *)0x0)) {
    TransitionOff__7tScreen22tScreen_TransitionTypeP5tMenu(this_00,kScreen_TransitionTypeScreen);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DisplayHelp__14tFEApplications(struct tFEApplication *this /*$a0*/, short variant /*$a1*/)
 // line 463, offset 0x80013f74
	/* begin block 1 */
		// Start line: 464
		// Start offset: 0x80013F74

		/* begin block 1.1 */
			// Start line: 464
			// Start offset: 0x80013F74
			// Variables:
		// 		struct tDialogHelp *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 464
				// Start offset: 0x80013F74
			/* end block 1.1.1 */
			// End offset: 0x80013F74
			// End Line: 464
		/* end block 1.1 */
		// End offset: 0x80013F74
		// End Line: 464
	/* end block 1 */
	// End offset: 0x80013F74
	// End Line: 464

	/* begin block 2 */
		// Start line: 966
	/* end block 2 */
	// End Line: 967

	/* begin block 3 */
		// Start line: 971
	/* end block 3 */
	// End Line: 972

	/* begin block 4 */
		// Start line: 971
	/* end block 4 */
	// End Line: 972

void DisplayHelp__14tFEApplications(tFEApplication *this,short variant)

{
  (this->helpPopup).tDialogBase.fDefault = variant;
  Display__11tDialogBase((tDialogBase *)&this->fYOffset);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeHelpShapeCluts__Fv()
 // line 469, offset 0x80013f98
	/* begin block 1 */
		// Start line: 470
		// Start offset: 0x80013F98
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80013FFC
	// End Line: 480

	/* begin block 2 */
		// Start line: 979
	/* end block 2 */
	// End Line: 980

	/* begin block 3 */
		// Start line: 983
	/* end block 3 */
	// End Line: 984

	/* begin block 4 */
		// Start line: 983
	/* end block 4 */
	// End Line: 984

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FreeHelpShapeCluts__Fv(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&gHelpShapes->shpptr + iVar1 * 8)[1] != (shapetbl *)0x0) {
      Texture_MenuReleaseClutId__Fs(*(short *)(&gHelpShapes->shpptr + iVar1 * 8 + 1));
      (&gHelpShapes->clutID)[iVar1 * 8] = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x3b);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RunDemoVideo__14tFEApplication(struct tFEApplication *this /*$s2*/)
 // line 483, offset 0x80014014
	/* begin block 1 */
		// Start line: 484
		// Start offset: 0x80014014
		// Variables:
	// 		static int currentVideo; // offset 0x4
	// 		char buffer[40]; // stack offset -56
	/* end block 1 */
	// End offset: 0x8001428C
	// End Line: 555

	/* begin block 2 */
		// Start line: 1013
	/* end block 2 */
	// End Line: 1014

	/* begin block 3 */
		// Start line: 1017
	/* end block 3 */
	// End Line: 1018

	/* begin block 4 */
		// Start line: 1017
	/* end block 4 */
	// End Line: 1018

	/* begin block 5 */
		// Start line: 1023
	/* end block 5 */
	// End Line: 1024

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RunDemoVideo__14tFEApplication(tFEApplication *this)

{
  bool bVar1;
  int iVar2;
  
  if ((tMenu *)this->fCurrentMenu[0] ==
      (tMenu *)&(menuDefs->itemMainOptions).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
                fNewMenu) {
    AudioMus_StopSong__Fi(0x78);
    FeAudio_systemtask__Fi(0);
    iVar2 = *(int *)(this->fCurrentMenu[0] + 0x68);
    (**(code **)(iVar2 + 0x2c))(this->fCurrentMenu[0] + (int)*(short *)(iVar2 + 0x28));
    TransitionOff__7tScreen22tScreen_TransitionTypeP5tMenu
              ((tScreen *)this->fCurrentScreen[0],kScreen_TransitionTypeScreen);
    while( true ) {
      iVar2 = *(int *)(this->fCurrentMenu[0] + 0x68);
      bVar1 = false;
      iVar2 = (**(code **)(iVar2 + 0x3c))(this->fCurrentMenu[0] + (int)*(short *)(iVar2 + 0x38));
      if ((iVar2 == 0) ||
         (iVar2 = *(int *)(this->fCurrentScreen[0] + 0x60),
         iVar2 = (**(code **)(iVar2 + 0x44))
                           (this->fCurrentScreen[0] + (int)*(short *)(iVar2 + 0x40)), iVar2 == 0)) {
        bVar1 = true;
      }
      if (!bVar1) break;
      Redraw__14tFEApplication(this);
      FeAudio_systemtask__Fi(0);
    }
    iVar2 = *(int *)(this->fCurrentScreen[0] + 0x60);
    (**(code **)(iVar2 + 0x3c))(this->fCurrentScreen[0] + (int)*(short *)(iVar2 + 0x38));
    Audio_FECleanUp__Fv();
    Audio_DeInitDriver__Fv();
    PSXFront_FreeDrawMemory__Fv();
    FeTools_deinit__Fv();
    FreeHelpShapeCluts__Fv();
    gLargestUnused = largestunused();
    play_movie__Fc(DAT_800514bc + '\x01');
    gLargestUnused = largestunused();
    PSXFront_AllocateDrawMemory__Fv();
    FeTools_init__Fv();
    DisplayLoadingText__7tScreen();
    Audio_InitDriver__Fii((int)&DAT_0000d800,0x18000);
    AudioCmn_LoadFESamples__Fv();
    LoadAllHelpShapes__Fv();
    UpdateMusic__14tFEApplication(this);
    AudioMus_Volume__Fi((int)((uint)(byte)frontEnd.musicVolume * 0x23) >> 6);
    gLargestUnused = largestunused();
    iVar2 = *(int *)(this->fCurrentMenu[0] + 0x68);
    (**(code **)(iVar2 + 0x14))(this->fCurrentMenu[0] + (int)*(short *)(iVar2 + 0x10));
    iVar2 = *(int *)(this->fCurrentScreen[0] + 0x60);
    (**(code **)(iVar2 + 0x34))(this->fCurrentScreen[0] + (int)*(short *)(iVar2 + 0x30));
    iVar2 = *(int *)(this->fCurrentMenu[0] + 0x68);
    (**(code **)(iVar2 + 0x34))(this->fCurrentMenu[0] + (int)*(short *)(iVar2 + 0x30));
    TransitionOn__7tScreen22tScreen_TransitionTypeP5tMenu
              ((tScreen *)this->fCurrentScreen[0],kScreen_TransitionTypeScreen);
    _DAT_800514bc = (_DAT_800514bc + 1) % 3;
  }
  return;
}



// decompiled code
// original method signature: 
// enum tAppCommand /*$ra*/ MainLoop__14tFEApplicationP5tMenu(struct tFEApplication *this /*$s2*/, struct tMenu *newMenu /*$s0*/)
 // line 560, offset 0x800142a4
	/* begin block 1 */
		// Start line: 561
		// Start offset: 0x800142A4
		// Variables:
	// 		short stackBackupPin; // stack offset -72
	// 		void * wasSubMenu; // $s0
	// 		void * needToSetChildMenu; // stack offset -64
	// 		void * doRedraw; // stack offset -60
	// 		unsigned long ticksAtLastInput[2]; // stack offset -392
	// 		unsigned long tick; // stack offset -56
	// 		short inputStartPlayer; // $s1
	// 		short inputEndPlayer; // $fp
	// 		short i; // $s6
	// 		int demoLoopLastInputTick; // stack offset -52
	// 		char string[80]; // stack offset -384

		/* begin block 1.1 */
			// Start line: 561
			// Start offset: 0x800142A4

			/* begin block 1.1.1 */
				// Start line: 561
				// Start offset: 0x800142A4
			/* end block 1.1.1 */
			// End offset: 0x800142A4
			// End Line: 561
		/* end block 1.1 */
		// End offset: 0x800142A4
		// End Line: 561

		/* begin block 1.2 */
			// Start line: 599
			// Start offset: 0x800143EC
			// Variables:
		// 		struct tMenuCommand command[2]; // stack offset -304
		// 		enum tInputKeyType keyVal[2]; // stack offset -288

			/* begin block 1.2.1 */
				// Start line: 599
				// Start offset: 0x800143EC

				/* begin block 1.2.1.1 */
					// Start line: 599
					// Start offset: 0x800143EC
				/* end block 1.2.1.1 */
				// End offset: 0x800143EC
				// End Line: 599
			/* end block 1.2.1 */
			// End offset: 0x800143EC
			// End Line: 599

			/* begin block 1.2.2 */
				// Start line: 599
				// Start offset: 0x800143EC

				/* begin block 1.2.2.1 */
					// Start line: 619
					// Start offset: 0x8001440C

					/* begin block 1.2.2.1.1 */
						// Start line: 622
						// Start offset: 0x80014420

						/* begin block 1.2.2.1.1.1 */
							// Start line: 623
							// Start offset: 0x800144BC

							/* begin block 1.2.2.1.1.1.1 */
								// Start line: 634
								// Start offset: 0x80014568

								/* begin block 1.2.2.1.1.1.1.1 */
									// Start line: 648
									// Start offset: 0x80014604

									/* begin block 1.2.2.1.1.1.1.1.1 */
										// Start line: 649
										// Start offset: 0x80014604

										/* begin block 1.2.2.1.1.1.1.1.1.1 */
											// Start line: 651
											// Start offset: 0x80014648

											/* begin block 1.2.2.1.1.1.1.1.1.1.1 */
												// Start line: 652
												// Start offset: 0x80014648
												// Variables:
											// 		struct tMenu *this; // $v0

												/* begin block 1.2.2.1.1.1.1.1.1.1.1.1 */
													// Start line: 652
													// Start offset: 0x80014648
												/* end block 1.2.2.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x80014648
												// End Line: 652
											/* end block 1.2.2.1.1.1.1.1.1.1.1 */
											// End offset: 0x80014648
											// End Line: 652
										/* end block 1.2.2.1.1.1.1.1.1.1 */
										// End offset: 0x80014670
										// End Line: 652
									/* end block 1.2.2.1.1.1.1.1.1 */
									// End offset: 0x80014670
									// End Line: 652
								/* end block 1.2.2.1.1.1.1.1 */
								// End offset: 0x80014670
								// End Line: 652
							/* end block 1.2.2.1.1.1.1 */
							// End offset: 0x80014670
							// End Line: 653

							/* begin block 1.2.2.1.1.1.2 */
								// Start line: 653
								// Start offset: 0x80014670

								/* begin block 1.2.2.1.1.1.2.1 */
									// Start line: 653
									// Start offset: 0x80014670
								/* end block 1.2.2.1.1.1.2.1 */
								// End offset: 0x80014680
								// End Line: 653
							/* end block 1.2.2.1.1.1.2 */
							// End offset: 0x80014680
							// End Line: 653
						/* end block 1.2.2.1.1.1 */
						// End offset: 0x80014680
						// End Line: 656
					/* end block 1.2.2.1.1 */
					// End offset: 0x80014680
					// End Line: 656

					/* begin block 1.2.2.1.2 */
						// Start line: 688
						// Start offset: 0x800148B0

						/* begin block 1.2.2.1.2.1 */
							// Start line: 689
							// Start offset: 0x800148D0

							/* begin block 1.2.2.1.2.1.1 */
								// Start line: 691
								// Start offset: 0x800148D0

								/* begin block 1.2.2.1.2.1.1.1 */
									// Start line: 691
									// Start offset: 0x800148D0

									/* begin block 1.2.2.1.2.1.1.1.1 */
										// Start line: 691
										// Start offset: 0x800148D0
									/* end block 1.2.2.1.2.1.1.1.1 */
									// End offset: 0x800148D0
									// End Line: 691
								/* end block 1.2.2.1.2.1.1.1 */
								// End offset: 0x800148D0
								// End Line: 691

								/* begin block 1.2.2.1.2.1.1.2 */
									// Start line: 694
									// Start offset: 0x80014900

									/* begin block 1.2.2.1.2.1.1.2.1 */
										// Start line: 694
										// Start offset: 0x80014900
									/* end block 1.2.2.1.2.1.1.2.1 */
									// End offset: 0x80014900
									// End Line: 694
								/* end block 1.2.2.1.2.1.1.2 */
								// End offset: 0x80014900
								// End Line: 694
							/* end block 1.2.2.1.2.1.1 */
							// End offset: 0x8001491C
							// End Line: 697

							/* begin block 1.2.2.1.2.1.2 */
								// Start line: 699
								// Start offset: 0x8001491C

								/* begin block 1.2.2.1.2.1.2.1 */
									// Start line: 699
									// Start offset: 0x8001491C
									// Variables:
								// 		struct tMenu *this; // $a1

									/* begin block 1.2.2.1.2.1.2.1.1 */
										// Start line: 699
										// Start offset: 0x8001491C
									/* end block 1.2.2.1.2.1.2.1.1 */
									// End offset: 0x8001491C
									// End Line: 699
								/* end block 1.2.2.1.2.1.2.1 */
								// End offset: 0x8001491C
								// End Line: 699
							/* end block 1.2.2.1.2.1.2 */
							// End offset: 0x80014954
							// End Line: 701

							/* begin block 1.2.2.1.2.1.3 */
								// Start line: 703
								// Start offset: 0x80014954

								/* begin block 1.2.2.1.2.1.3.1 */
									// Start line: 703
									// Start offset: 0x80014954

									/* begin block 1.2.2.1.2.1.3.1.1 */
										// Start line: 703
										// Start offset: 0x80014954
									/* end block 1.2.2.1.2.1.3.1.1 */
									// End offset: 0x80014954
									// End Line: 703
								/* end block 1.2.2.1.2.1.3.1 */
								// End offset: 0x80014954
								// End Line: 703
							/* end block 1.2.2.1.2.1.3 */
							// End offset: 0x80014964
							// End Line: 705

							/* begin block 1.2.2.1.2.1.4 */
								// Start line: 707
								// Start offset: 0x80014964

								/* begin block 1.2.2.1.2.1.4.1 */
									// Start line: 707
									// Start offset: 0x80014964

									/* begin block 1.2.2.1.2.1.4.1.1 */
										// Start line: 707
										// Start offset: 0x80014964
									/* end block 1.2.2.1.2.1.4.1.1 */
									// End offset: 0x80014964
									// End Line: 707
								/* end block 1.2.2.1.2.1.4.1 */
								// End offset: 0x80014964
								// End Line: 707
							/* end block 1.2.2.1.2.1.4 */
							// End offset: 0x80014974
							// End Line: 709

							/* begin block 1.2.2.1.2.1.5 */
								// Start line: 714
								// Start offset: 0x80014974

								/* begin block 1.2.2.1.2.1.5.1 */
									// Start line: 715
									// Start offset: 0x800149E8
									// Variables:
								// 		unsigned long debounce; // stack offset -48

									/* begin block 1.2.2.1.2.1.5.1.1 */
										// Start line: 716
										// Start offset: 0x800149E8

										/* begin block 1.2.2.1.2.1.5.1.1.1 */
											// Start line: 719
											// Start offset: 0x80014A20

											/* begin block 1.2.2.1.2.1.5.1.1.1.1 */
												// Start line: 735
												// Start offset: 0x80014AA8

												/* begin block 1.2.2.1.2.1.5.1.1.1.1.1 */
													// Start line: 736
													// Start offset: 0x80014AC8
													// Variables:
												// 		struct tDialogBase *dialog; // $s0

													/* begin block 1.2.2.1.2.1.5.1.1.1.1.1.1 */
														// Start line: 737
														// Start offset: 0x80014AC8

														/* begin block 1.2.2.1.2.1.5.1.1.1.1.1.1.1 */
															// Start line: 741
															// Start offset: 0x80014AF4
															// Variables:
														// 		struct tDialogBase *this; // $a0

															/* begin block 1.2.2.1.2.1.5.1.1.1.1.1.1.1.1 */
																// Start line: 741
																// Start offset: 0x80014AF4
															/* end block 1.2.2.1.2.1.5.1.1.1.1.1.1.1.1 */
															// End offset: 0x80014AF4
															// End Line: 741
														/* end block 1.2.2.1.2.1.5.1.1.1.1.1.1.1 */
														// End offset: 0x80014AF4
														// End Line: 741
													/* end block 1.2.2.1.2.1.5.1.1.1.1.1.1 */
													// End offset: 0x80014B0C
													// End Line: 744
												/* end block 1.2.2.1.2.1.5.1.1.1.1.1 */
												// End offset: 0x80014BF8
												// End Line: 753
											/* end block 1.2.2.1.2.1.5.1.1.1.1 */
											// End offset: 0x80014BF8
											// End Line: 753

											/* begin block 1.2.2.1.2.1.5.1.1.1.2 */
												// Start line: 757
												// Start offset: 0x80014BF8

												/* begin block 1.2.2.1.2.1.5.1.1.1.2.1 */
													// Start line: 758
													// Start offset: 0x80014C14

													/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1 */
														// Start line: 759
														// Start offset: 0x80014C14

														/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1 */
															// Start line: 760
															// Start offset: 0x80014C3C

															/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1 */
																// Start line: 858
																// Start offset: 0x80015108

																/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1 */
																	// Start line: 860
																	// Start offset: 0x80015124
																	// Variables:
																// 		int err; // $s3
																// 		int player; // $s1

																	/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1 */
																		// Start line: 861
																		// Start offset: 0x80015124

																		/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1 */
																			// Start line: 871
																			// Start offset: 0x80015148

																			/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.1 */
																				// Start line: 871
																				// Start offset: 0x8001515C
																				// Variables:
																			// 		struct tDialogMessageString *this; // $s0

																				/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.1.1 */
																					// Start line: 871
																					// Start offset: 0x8001515C
																				/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.1.1 */
																				// End offset: 0x8001515C
																				// End Line: 871
																			/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.1 */
																			// End offset: 0x8001515C
																			// End Line: 871

																			/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.2 */
																				// Start line: 875
																				// Start offset: 0x80015178

																				/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.2.1 */
																					// Start line: 875
																					// Start offset: 0x80015178

																					/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.2.1.1 */
																						// Start line: 875
																						// Start offset: 0x80015178
																					/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.2.1.1 */
																					// End offset: 0x80015178
																					// End Line: 875
																				/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.2.1 */
																				// End offset: 0x80015178
																				// End Line: 875
																			/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.2 */
																			// End offset: 0x80015194
																			// End Line: 877

																			/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.3 */
																				// Start line: 878
																				// Start offset: 0x800151A4

																				/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.3.1 */
																					// Start line: 884
																					// Start offset: 0x800151D4

																					/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.3.1.1 */
																						// Start line: 885
																						// Start offset: 0x800151D4

																						/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.3.1.1.1 */
																							// Start line: 885
																							// Start offset: 0x800151D4
																						/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.3.1.1.1 */
																						// End offset: 0x800151D4
																						// End Line: 885
																					/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.3.1.1 */
																					// End offset: 0x800151D4
																					// End Line: 885
																				/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.3.1 */
																				// End offset: 0x80015214
																				// End Line: 888
																			/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1.3 */
																			// End offset: 0x80015214
																			// End Line: 888
																		/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1.1 */
																		// End offset: 0x80015214
																		// End Line: 891
																	/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1.1 */
																	// End offset: 0x8001522C
																	// End Line: 892
																/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1.1 */
																// End offset: 0x80015274
																// End Line: 901
															/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.1 */
															// End offset: 0x80015274
															// End Line: 901

															/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.2 */
																// Start line: 911
																// Start offset: 0x80015274
																// Variables:
															// 		struct tCarInfo carInfo; // stack offset -280
															// 		unsigned long ticks; // $s0

																/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.2.1 */
																	// Start line: 929
																	// Start offset: 0x80015334

																	/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.2.1.1 */
																		// Start line: 929
																		// Start offset: 0x80015334
																	/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.2.1.1 */
																	// End offset: 0x8001533C
																	// End Line: 929
																/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.2.1 */
																// End offset: 0x8001533C
																// End Line: 929

																/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.2.2 */
																	// Start line: 936
																	// Start offset: 0x8001533C

																	/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.2.2.1 */
																		// Start line: 936
																		// Start offset: 0x8001533C

																		/* begin block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.2.2.1.1 */
																			// Start line: 936
																			// Start offset: 0x8001533C
																		/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.2.2.1.1 */
																		// End offset: 0x8001533C
																		// End Line: 936
																	/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.2.2.1 */
																	// End offset: 0x8001533C
																	// End Line: 936
																/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.2.2 */
																// End offset: 0x80015358
																// End Line: 937
															/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1.2 */
															// End offset: 0x8001537C
															// End Line: 947
														/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1.1 */
														// End offset: 0x80015398
														// End Line: 964
													/* end block 1.2.2.1.2.1.5.1.1.1.2.1.1 */
													// End offset: 0x80015398
													// End Line: 964
												/* end block 1.2.2.1.2.1.5.1.1.1.2.1 */
												// End offset: 0x80015398
												// End Line: 964
											/* end block 1.2.2.1.2.1.5.1.1.1.2 */
											// End offset: 0x80015398
											// End Line: 964
										/* end block 1.2.2.1.2.1.5.1.1.1 */
										// End offset: 0x80015398
										// End Line: 964
									/* end block 1.2.2.1.2.1.5.1.1 */
									// End offset: 0x800153A0
									// End Line: 967
								/* end block 1.2.2.1.2.1.5.1 */
								// End offset: 0x800153A0
								// End Line: 967
							/* end block 1.2.2.1.2.1.5 */
							// End offset: 0x800153A0
							// End Line: 967
						/* end block 1.2.2.1.2.1 */
						// End offset: 0x800153A0
						// End Line: 967
					/* end block 1.2.2.1.2 */
					// End offset: 0x800153A0
					// End Line: 967
				/* end block 1.2.2.1 */
				// End offset: 0x800153A0
				// End Line: 967
			/* end block 1.2.2 */
			// End offset: 0x800153B4
			// End Line: 970

			/* begin block 1.2.3 */
				// Start line: 983
				// Start offset: 0x800153CC

				/* begin block 1.2.3.1 */
					// Start line: 984
					// Start offset: 0x800153E8

					/* begin block 1.2.3.1.1 */
						// Start line: 985
						// Start offset: 0x800153E8

						/* begin block 1.2.3.1.1.1 */
							// Start line: 985
							// Start offset: 0x800153E8
						/* end block 1.2.3.1.1.1 */
						// End offset: 0x800153E8
						// End Line: 985
					/* end block 1.2.3.1.1 */
					// End offset: 0x800153E8
					// End Line: 985
				/* end block 1.2.3.1 */
				// End offset: 0x800153E8
				// End Line: 985
			/* end block 1.2.3 */
			// End offset: 0x800153E8
			// End Line: 985
		/* end block 1.2 */
		// End offset: 0x800153E8
		// End Line: 985
	/* end block 1 */
	// End offset: 0x80015400
	// End Line: 986

	/* begin block 2 */
		// Start line: 1175
	/* end block 2 */
	// End Line: 1176

	/* begin block 3 */
		// Start line: 1181
	/* end block 3 */
	// End Line: 1182

	/* begin block 4 */
		// Start line: 1181
	/* end block 4 */
	// End Line: 1182

tAppCommand MainLoop__14tFEApplicationP5tMenu(tFEApplication *this,tMenu *newMenu)

{
  bool bVar1;
  uchar *puVar2;
  tFEApplication *ptVar3;
  tFEApplication *ptVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  tInputKeyType tVar8;
  tDialogBase *ptVar9;
  int iVar10;
  char *__format;
  char *pcVar11;
  uint uVar12;
  _func_46 *p_Var13;
  _func_45 *p_Var14;
  _func_49 *p_Var15;
  uint uVar16;
  uint *puVar17;
  tInputKeyType *ptVar18;
  uint uVar19;
  tPlayer player;
  int *piVar20;
  PinkSlipsErrorCode PVar21;
  uchar *apuStack392 [2];
  char acStack384 [80];
  int iStack304;
  tMenu *aptStack300 [3];
  undefined auStack288 [8];
  tCarInfo tStack280;
  ushort local_48;
  int local_40;
  int local_3c;
  uchar *local_38;
  uchar *local_34;
  tInputKeyType local_30;
  undefined *local_2c;
  
  local_48 = 0xffff;
  local_40 = 0;
  memset(apuStack392,0,8);
  *(undefined *)((int)&(this->helpPopup).numItems + 1) = 0;
  PerformMenuInitialization__14tFEApplication(this);
  local_34 = ticks;
  gFlip = 0;
  *(undefined *)&(this->helpPopup).numItems = 0;
  do {
    this->backList[(uint)*(byte *)&(this->helpPopup).numItems + 0x1f] = (_func_50 *)0x0;
    this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] = (_func_45 *)0x0;
    this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems] = (_func_46 *)0x0;
    this->fTransitionToMenu[(uint)*(byte *)&(this->helpPopup).numItems] = (_func_47 *)0x0;
    this->fTransitionToScreen[(uint)*(byte *)&(this->helpPopup).numItems] = (_func_48 *)0x0;
    *(undefined4 *)(&(this->helpPopup).lefttext + (uint)*(byte *)&(this->helpPopup).numItems * 2) =
         0;
    this->backDepth[(uint)*(byte *)&(this->helpPopup).numItems + 1] = 0;
    this->fParentMenu[(uint)*(byte *)&(this->helpPopup).numItems] = (_func_49 *)0x0;
    bVar5 = *(char *)&(this->helpPopup).numItems + 1;
    *(byte *)&(this->helpPopup).numItems = bVar5;
  } while (bVar5 < 2);
  SetMenu__14tFEApplicationsP5tMenu(this,0,newMenu);
  do {
    local_3c = 1;
    local_2c = auStack288;
    local_38 = ticks;
    *(undefined *)&(this->helpPopup).numItems = 0;
    while (*(byte *)&(this->helpPopup).numItems < 2) {
      if ((&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[5] != 0) {
        uVar12 = (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[1];
        uVar19 = 0;
        if (uVar12 != 0) {
          iVar7 = (**(code **)(*(int *)(uVar12 + 0x68) + 0x3c))
                            (uVar12 + (int)*(short *)(*(int *)(uVar12 + 0x68) + 0x38));
          if ((iVar7 != 0) &&
             (p_Var13 = this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems],
             p_Var13 != (_func_46 *)0x0)) {
            iVar7 = (**(code **)(*(int *)(p_Var13 + 0x60) + 0x44))
                              (p_Var13 + (int)*(short *)(*(int *)(p_Var13 + 0x60) + 0x40));
            uVar19 = (uint)(iVar7 != 0);
          }
          if (uVar19 == 0) goto LAB_80014680;
          p_Var14 = this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems];
          uVar19 = 0;
          if (p_Var14 != (_func_45 *)0x0) {
            uVar19 = (**(code **)(*(int *)(p_Var14 + 0x68) + 0x44))
                               (p_Var14 + (int)*(short *)(*(int *)(p_Var14 + 0x68) + 0x40));
          }
        }
        iVar7 = *(int *)(this->fTransitionToMenu[(uint)*(byte *)&(this->helpPopup).numItems] + 0x68)
        ;
        iVar7 = (**(code **)(iVar7 + 0x44))
                          (this->fTransitionToMenu[(uint)*(byte *)&(this->helpPopup).numItems] +
                           (int)*(short *)(iVar7 + 0x40));
        if (iVar7 == 0) {
          this->fParentMenu[(uint)*(byte *)&(this->helpPopup).numItems] = (_func_49 *)0x0;
        }
        else {
          (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[9] =
               (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[1];
        }
        (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[1] =
             (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[5];
        iVar7 = *(int *)(this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] + 0x68);
        (**(code **)(iVar7 + 0x14))
                  (this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] +
                   (int)*(short *)(iVar7 + 0x10));
        this->fTransitionToMenu[(uint)*(byte *)&(this->helpPopup).numItems] = (_func_47 *)0x0;
        if ((uVar19 == 0) || (this->fTransitionToScreen[0] != (_func_48 *)0x0)) {
          iVar7 = *(int *)(this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] + 0x68);
          (**(code **)(iVar7 + 0x34))
                    (this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] +
                     (int)*(short *)(iVar7 + 0x30));
          if (local_40 != 0) {
            local_40 = 0;
            SetMenu__14tFEApplicationsP5tMenu
                      (this,1,*(tMenu **)
                               (this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] +
                               0x58));
          }
        }
        else {
          local_3c = 0;
          (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[0x51] =
               (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[0x51] - 1;
        }
        local_34 = ticks;
      }
LAB_80014680:
      bVar5 = *(byte *)&(this->helpPopup).numItems;
      uVar19 = (uint)bVar5;
      if (bVar5 == 1) {
        p_Var14 = this->fCurrentMenu[uVar19];
        if ((((p_Var14 != (_func_45 *)0x0) &&
             (iVar7 = (**(code **)(*(int *)(p_Var14 + 0x68) + 0x3c))
                                (p_Var14 + (int)*(short *)(*(int *)(p_Var14 + 0x68) + 0x38)),
             iVar7 != 0)) && ((int)((uint)local_48 << 0x10) < 0)) &&
           ((p_Var15 = this->fParentMenu[(uint)*(byte *)&(this->helpPopup).numItems],
            p_Var15 == (_func_49 *)0x0 ||
            (iVar7 = (**(code **)(*(int *)(p_Var15 + 0x68) + 0x3c))
                               (p_Var15 + (int)*(short *)(*(int *)(p_Var15 + 0x68) + 0x38)),
            iVar7 != 0)))) {
          this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] = (_func_45 *)0x0;
          p_Var13 = this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems];
          if (p_Var13 != (_func_46 *)0x0) {
            (**(code **)(*(int *)(p_Var13 + 0x60) + 0x3c))
                      (p_Var13 + (int)*(short *)(*(int *)(p_Var13 + 0x60) + 0x38));
          }
          this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems] = (_func_46 *)0x0;
        }
        uVar19 = (uint)*(byte *)&(this->helpPopup).numItems;
      }
      if ((&this->fCurrentMusic + uVar19)[7] != 0) {
        uVar19 = (&this->fCurrentMusic + uVar19)[3];
        if (uVar19 != 0) {
          iVar7 = (**(code **)(*(int *)(uVar19 + 0x60) + 0x44))
                            (uVar19 + (int)*(short *)(*(int *)(uVar19 + 0x60) + 0x40));
          if ((iVar7 == 0) ||
             ((&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[5] != 0))
          goto LAB_800148b0;
          uVar19 = (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[3];
          if (uVar19 != 0) {
            (**(code **)(*(int *)(uVar19 + 0x60) + 0x3c))
                      (uVar19 + (int)*(short *)(*(int *)(uVar19 + 0x60) + 0x38));
          }
        }
        (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[3] =
             (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[7];
        gLargestUnused = largestunused();
        iVar7 = *(int *)(this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems] + 0x60);
        (**(code **)(iVar7 + 0x34))
                  (this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems] +
                   (int)*(short *)(iVar7 + 0x30));
        this->fTransitionToScreen[(uint)*(byte *)&(this->helpPopup).numItems] = (_func_48 *)0x0;
        TransitionOn__7tScreen22tScreen_TransitionTypeP5tMenu
                  ((tScreen *)this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems],
                   kScreen_TransitionTypeScreen);
      }
LAB_800148b0:
      bVar1 = false;
      if ((uint *)this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] != (uint *)0x0) {
        uVar12 = (uint)*(byte *)&(this->helpPopup).numItems;
        uVar19 = *(uint *)this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems];
        if (((uVar19 & 0x10) != 0) || ((frontEnd.gameMode == '\x01' && ((uVar19 & 8) == 0)))) {
          bVar1 = true;
        }
        uVar19 = uVar12;
        if (bVar1) {
          uVar12 = 0;
          uVar19 = 1;
        }
        puVar17 = (uint *)this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems];
        uVar16 = *puVar17;
        if ((uVar16 & 0x20) != 0) {
          uVar12 = (uint)*(byte *)((int)&(this->helpPopup).numItems + 1);
          uVar19 = uVar12;
        }
        if ((uVar16 & 0x40) != 0) {
          uVar19 = 0;
          uVar12 = 0;
        }
        if ((uVar16 & 0x80) != 0) {
          uVar19 = 1;
          uVar12 = 1;
        }
        bVar1 = false;
        if (((puVar17 != (uint *)0x0) &&
            (iVar7 = (**(code **)(puVar17[0x1a] + 0x3c))
                               ((int)puVar17 + (int)*(short *)(puVar17[0x1a] + 0x38)), iVar7 != 0))
           && (p_Var13 = this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems],
              p_Var13 != (_func_46 *)0x0)) {
          iVar7 = (**(code **)(*(int *)(p_Var13 + 0x60) + 0x44))
                            (p_Var13 + (int)*(short *)(*(int *)(p_Var13 + 0x60) + 0x40));
          bVar1 = iVar7 != 0;
        }
        if (bVar1) {
          iVar7 = *(int *)(this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] + 0x68);
          local_30 = (**(code **)(iVar7 + 0x24))
                               (this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] +
                                (int)*(short *)(iVar7 + 0x20));
LAB_80014a20:
          sVar6 = (short)uVar12;
          player = SEXT24(sVar6);
          if ((int)uVar19 < (int)player) goto LAB_800153a0;
          (&iStack304)[player * 2] = 0;
          tVar8 = FEInput_GetKeyFromPlayer__F7tPlayerl(player,local_30);
          ptVar18 = (tInputKeyType *)(local_2c + player * 4);
          *ptVar18 = tVar8;
          if (tVar8 != kInput_KeyType_NoKey) {
            *(undefined *)((int)&(this->helpPopup).numItems + 1) = (char)uVar12;
          }
          if (((uchar *)0xf < ticks + -(int)apuStack392[player]) ||
             ((local_30 & *ptVar18) == kInput_KeyType_NoKey)) {
            this->backDepth[player + kPlayerTwo] = *ptVar18;
          }
          iVar7 = (int)(uVar12 << 0x10) >> 0xe;
          piVar20 = (int *)(local_2c + iVar7);
          if (*piVar20 != 0) {
            ptVar9 = GetTopMostDialog__11tDialogBase();
            local_34 = local_38;
            *(uchar **)((int)apuStack392 + iVar7) = local_38;
            if ((*piVar20 == 4) && (*(int *)&(this->helpPopup).tDialogBase.top != 0)) {
              *piVar20 = 1;
              Hide__11tDialogBase((tDialogBase *)&this->fYOffset);
            }
            if (ptVar9 != (tDialogBase *)0x0) {
              iVar7 = (int)sVar6;
              if (*(int *)(local_2c + iVar7 * 4) != 4) {
                iVar10 = *(int *)((ptVar9->tScreen)._vf + 2);
                (**(code **)(iVar10 + 0x4c))
                          ((int)&(ptVar9->tScreen).fPermShapes.fShapes +
                           (int)*(short *)(iVar10 + 0x48),iVar7,local_2c + iVar7 * 4,
                           &iStack304 + iVar7 * 2);
              }
            }
            p_Var13 = this->fCurrentScreen[(uint)*(byte *)&(this->helpPopup).numItems];
            if (p_Var13 != (_func_46 *)0x0) {
              iVar7 = (int)sVar6;
              (**(code **)(*(int *)(p_Var13 + 0x60) + 0x4c))
                        (p_Var13 + (int)*(short *)(*(int *)(p_Var13 + 0x60) + 0x48),iVar7,
                         local_2c + iVar7 * 4,&iStack304 + iVar7 * 2);
            }
            iVar7 = (int)sVar6;
            if (*(int *)(local_2c + iVar7 * 4) != 1) {
              iVar10 = *(int *)(this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] +
                               0x68);
              (**(code **)(iVar10 + 0x1c))
                        (this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] +
                         (int)*(short *)(iVar10 + 0x18),iVar7,local_2c + iVar7 * 4,
                         &iStack304 + iVar7 * 2);
            }
          }
          iVar7 = *(int *)((int)&iStack304 + ((int)(uVar12 << 0x10) >> 0xd));
          if (iVar7 == 0) goto switchD_80014c34_caseD_8;
          switch(iVar7) {
          case 1:
            AudioCmn_PlayFESFX__Fi(0);
            uVar16 = (uint)*(byte *)&(this->helpPopup).numItems;
            (&(this->messagePopup).Centerit)[uVar16 * 0x10 + (&this->fCurrentMusic + uVar16)[0x51]]
                 = (void *)(&this->fCurrentMusic + uVar16)[1];
            (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[0x51] =
                 (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[0x51] + 1;
            goto LAB_80014cb0;
          case 2:
            AudioCmn_PlayFESFX__Fi(0);
            this->backList[(uint)*(byte *)&(this->helpPopup).numItems + 0x1f] = (_func_50 *)0x0;
LAB_80014cb0:
            SetMenu__14tFEApplicationsP5tMenu
                      (this,(ushort)*(byte *)&(this->helpPopup).numItems,
                       *(tMenu **)((int)aptStack300 + ((int)(uVar12 << 0x10) >> 0xd)));
            uVar12 = uVar12 + 1;
            goto LAB_80014a20;
          case 3:
            AudioCmn_PlayFESFX__Fi(0);
            uVar16 = (uint)*(byte *)&(this->helpPopup).numItems;
            (&(this->messagePopup).Centerit)[uVar16 * 0x10 + (&this->fCurrentMusic + uVar16)[0x51]]
                 = (void *)(&this->fCurrentMusic + uVar16)[1];
            local_40 = 1;
            (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[0x51] =
                 (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[0x51] + 1;
            bVar5 = *(byte *)&(this->helpPopup).numItems;
            local_48 = *(ushort *)(this->backList + (uint)bVar5 + 0x1f);
            SetMenu__14tFEApplicationsP5tMenu
                      (this,(ushort)bVar5,
                       *(tMenu **)((int)aptStack300 + ((int)(uVar12 << 0x10) >> 0xd)));
            this->backDepth[0] = 0;
            break;
          case 4:
            bVar5 = *(byte *)&(this->helpPopup).numItems;
            if (((bVar5 != 0) || ((int)this->backList[(uint)bVar5 + 0x1f] <= (int)(short)local_48))
               && ((bVar5 != 1 ||
                   ((int)this->backList[(uint)*(byte *)&(this->helpPopup).numItems + 0x1f] < 1)))) {
              uVar16 = (uint)*(byte *)&(this->helpPopup).numItems;
              if ((&this->fCurrentMusic + uVar16)[0x8c] != 0) {
                (&this->fCurrentMusic + uVar16)[0x8c] = 0;
                break;
              }
              *(undefined4 *)(&(this->helpPopup).lefttext + (1 - uVar16) * 2) = 0;
              *(undefined4 *)
               (&(this->helpPopup).lefttext + (uint)*(byte *)&(this->helpPopup).numItems * 2) = 0;
            }
            bVar5 = *(byte *)&(this->helpPopup).numItems;
            uVar16 = (uint)bVar5;
            if (bVar5 == 0) {
              if ((this->backList[uVar16 + 0x1f] != (_func_50 *)(int)(short)local_48) ||
                 (this->fCurrentMenu[1] == (_func_45 *)0x0)) {
                uVar16 = (uint)*(byte *)&(this->helpPopup).numItems;
                goto LAB_80014ef0;
              }
              p_Var15 = this->fParentMenu[0];
              if (p_Var15 != (_func_49 *)0x0) {
                (**(code **)(*(int *)(p_Var15 + 0x68) + 0x2c))
                          (p_Var15 + (int)*(short *)(*(int *)(p_Var15 + 0x68) + 0x28));
              }
              p_Var15 = this->fParentMenu[1];
              if (p_Var15 != (_func_49 *)0x0) {
                (**(code **)(*(int *)(p_Var15 + 0x68) + 0x2c))
                          (p_Var15 + (int)*(short *)(*(int *)(p_Var15 + 0x68) + 0x28));
              }
              iVar7 = *(int *)(this->fCurrentMenu[1] + 0x68);
              local_48 = 0xffff;
              (**(code **)(iVar7 + 0x2c))(this->fCurrentMenu[1] + (int)*(short *)(iVar7 + 0x28));
              TransitionOff__7tScreen22tScreen_TransitionTypeP5tMenu
                        ((tScreen *)this->fCurrentScreen[1],kScreen_TransitionTypeScreen);
              this->backDepth[0] = 0;
LAB_80014fdc:
              bVar5 = *(byte *)&(this->helpPopup).numItems;
              if ((int)this->backList[(uint)bVar5 + 0x1f] < 1) {
                if (bVar5 != 1) break;
                AudioCmn_PlayFESFX__Fi(1);
                uVar12 = uVar12 + 1;
                goto LAB_80014a20;
              }
            }
            else {
LAB_80014ef0:
              if (uVar16 != 1) goto LAB_80014fdc;
              if ((int)this->backList[0x20] < 1) {
                if (this->fCurrentMenu[1] != (_func_45 *)0x0) {
                  p_Var14 = this->fCurrentMenu[1];
                  this->backList[0x1f] = (_func_50 *)((int)(short)local_48 + -1);
                  iVar7 = *(int *)(p_Var14 + 0x68);
                  (**(code **)(iVar7 + 0x2c))(p_Var14 + (int)*(short *)(iVar7 + 0x28));
                  p_Var15 = this->fParentMenu[0];
                  if (p_Var15 != (_func_49 *)0x0) {
                    (**(code **)(*(int *)(p_Var15 + 0x68) + 0x2c))
                              (p_Var15 + (int)*(short *)(*(int *)(p_Var15 + 0x68) + 0x28));
                  }
                  p_Var15 = this->fParentMenu[1];
                  if (p_Var15 != (_func_49 *)0x0) {
                    (**(code **)(*(int *)(p_Var15 + 0x68) + 0x2c))
                              (p_Var15 + (int)*(short *)(*(int *)(p_Var15 + 0x68) + 0x28));
                  }
                  local_48 = 0xffff;
                  TransitionOff__7tScreen22tScreen_TransitionTypeP5tMenu
                            ((tScreen *)this->fCurrentScreen[1],kScreen_TransitionTypeScreen);
                  SetMenu__14tFEApplicationsP5tMenu
                            (this,0,(tMenu *)(&(this->messagePopup).Centerit)
                                             [(int)this->backList[0x1f]]);
                }
                goto LAB_80014fdc;
              }
            }
            AudioCmn_PlayFESFX__Fi(1);
            (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[0x51] =
                 (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[0x51] - 1;
            bVar5 = *(byte *)&(this->helpPopup).numItems;
            SetMenu__14tFEApplicationsP5tMenu
                      (this,(ushort)bVar5,
                       (tMenu *)(&(this->messagePopup).Centerit)
                                [(int)(this->backList[(uint)bVar5 + 0x1f] + (uint)bVar5 * 0x10)]);
            iVar7 = *(int *)(this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] + 0x68);
            iVar7 = (**(code **)(iVar7 + 0x44))
                              (this->fCurrentMenu[(uint)*(byte *)&(this->helpPopup).numItems] +
                               (int)*(short *)(iVar7 + 0x40));
            if (iVar7 != 0) {
              (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[0x51] =
                   (&this->fCurrentMusic + (uint)*(byte *)&(this->helpPopup).numItems)[0x51] + 1;
            }
            break;
          case 5:
          case 7:
LAB_80015278:
            if (frontEnd.raceType == '\x06') {
              bVar5 = *(byte *)&(this->helpPopup).numItems;
              GetPinkSlipsCar__11tCarManagersR8tCarInfos
                        (&carManager,(ushort)(byte)frontEnd.pinkSlipsCar[(uint)bVar5],&tStack280,
                         (ushort)bVar5);
              goto LAB_8001531c;
            }
LAB_8001528c:
            if (frontEnd.carListType == '\0') {
              GetStockCar__11tCarManagersR8tCarInfo
                        (&carManager,
                         (ushort)(byte)frontEnd.playerCar
                                       [(uint)*(byte *)&(this->helpPopup).numItems],&tStack280);
            }
            else {
              bVar5 = *(byte *)&(this->helpPopup).numItems;
              GetGarageCar__11tCarManagersR8tCarInfos
                        (&carManager,(ushort)(byte)frontEnd.garageCar[(uint)bVar5],&tStack280,
                         (ushort)bVar5);
            }
LAB_8001531c:
            puVar2 = ticks;
            if (tStack280.fEnginePatch != 0) {
              AudioCmn_PlayFESFX__Fi((uint)tStack280.fEnginePatch);
              puVar2 = ticks;
            }
            while (ticks + -(int)puVar2 < (uchar *)0x100) {
              FeAudio_systemtask__Fi(0);
            }
            GameSetup_gData.replayMode = 0;
            PerformMenuDestruction__14tFEApplication(this);
            return kApp_Command_StartRace;
          case 6:
            uVar16 = (uint)*(byte *)&(this->helpPopup).numItems;
            if ((&this->fCurrentMusic + (1 - uVar16))[0x8c] == 0) {
              *(undefined4 *)(&(this->helpPopup).lefttext + uVar16 * 2) = 1;
              break;
            }
            (&this->fCurrentMusic + (1 - uVar16))[0x8c] = 0;
            if (frontEnd.raceType != '\x06') goto LAB_8001528c;
            AudioMus_StopSong__Fi(400);
            Init_Memcard__FbT0((void *)0x0,&DAT_00000001);
            PVar21 = PinkSlipsNoError;
            iVar7 = 0;
            bVar1 = true;
            while ((ptVar3 = FEApp, bVar1 && (PVar21 == PinkSlipsNoError))) {
              __format = TextSys_Word__Fi(iVar7 + 0x295);
              ptVar4 = FEApp;
              *(char **)&(ptVar3->NoInputMemCardDialog).tDialogMessageString.tDialogBase.MaxW =
                   __format;
              Display__11tDialogBase
                        ((tDialogBase *)
                         &(ptVar4->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
              while ((FEApp->NoInputMemCardDialog).tDialogMessageString.tDialogBase.startTicks != 1)
              {
                Redraw__14tFEApplication(FEApp);
              }
              PVar21 = SavePinkSlipsCarsWithErrorDialogs__Fsss
                                 ((short)iVar7,0,(ushort)(byte)frontEnd.pinkSlipsCar[iVar7]);
              if ((PVar21 != PinkSlipsNoError) && (iVar7 == 1)) {
                __format = TextSys_Word__Fi(0x297);
                pcVar11 = PlayerName__Fi(0);
                sprintf(acStack384,__format,pcVar11,1);
                *(char **)&(FEApp->NoInputMemCardDialog).tDialogMessageString.tDialogBase.MaxW =
                     acStack384;
                SavePinkSlipsCarsWithErrorDialogs__Fsss(0,1,-1);
              }
              iVar7 = iVar7 + 1;
              Hide__11tDialogBase((tDialogBase *)
                                  &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText
                                 );
              bVar1 = iVar7 < 2;
            }
            DeInit_Memcard__Fv();
            if (PVar21 == PinkSlipsNoError) goto LAB_80015278;
            UpdateMusic__14tFEApplication(this);
            AudioMus_Volume__Fi((int)((uint)(byte)frontEnd.musicVolume * 0x23) >> 6);
            uVar12 = uVar12 + 1;
            goto LAB_80014a20;
          case 8:
            GameSetup_gData.replayMode = 2;
            PerformMenuDestruction__14tFEApplication(this);
            return kApp_Command_StartReplay;
          }
switchD_80014c34_caseD_8:
          uVar12 = uVar12 + 1;
          goto LAB_80014a20;
        }
      }
LAB_800153a0:
      *(char *)&(this->helpPopup).numItems = *(char *)&(this->helpPopup).numItems + '\x01';
    }
    if (local_3c != 0) {
      Redraw__14tFEApplication(this);
    }
    if (0xf00 < (int)(local_38 + -(int)local_34)) {
      RunDemoVideo__14tFEApplication(this);
      local_34 = ticks;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// enum tAppCommand /*$ra*/ RunPostGame__14tFEApplication(struct tFEApplication *this /*$s2*/)
 // line 992, offset 0x80015430
	/* begin block 1 */
		// Start line: 993
		// Start offset: 0x80015430
		// Variables:
	// 		struct tMenuCommand command; // stack offset -48

		/* begin block 1.1 */
			// Start line: 993
			// Start offset: 0x80015430

			/* begin block 1.1.1 */
				// Start line: 997
				// Start offset: 0x80015480
				// Variables:
			// 		int ret; // $a0
			// 		struct Car_tStats *dummyCars; // $s5
			// 		int i; // $s1
			// 		short nBestCarIndex; // stack offset -40

				/* begin block 1.1.1.1 */
					// Start line: 997
					// Start offset: 0x80015480

					/* begin block 1.1.1.1.1 */
						// Start line: 997
						// Start offset: 0x80015480
					/* end block 1.1.1.1.1 */
					// End offset: 0x80015480
					// End Line: 997
				/* end block 1.1.1.1 */
				// End offset: 0x80015480
				// End Line: 997

				/* begin block 1.1.1.2 */
					// Start line: 1103
					// Start offset: 0x80015658

					/* begin block 1.1.1.2.1 */
						// Start line: 1104
						// Start offset: 0x80015668

						/* begin block 1.1.1.2.1.1 */
							// Start line: 1104
							// Start offset: 0x80015668
							// Variables:
						// 		struct tUserNameMenuItem *this; // $v1

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 1104
								// Start offset: 0x80015668
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x80015668
							// End Line: 1104
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x80015668
						// End Line: 1104

						/* begin block 1.1.1.2.1.2 */
							// Start line: 1104
							// Start offset: 0x80015668
							// Variables:
						// 		struct tScreenUserName *this; // $a2
						// 		struct tOptionsMenu *m; // $a1

							/* begin block 1.1.1.2.1.2.1 */
								// Start line: 1104
								// Start offset: 0x80015668
							/* end block 1.1.1.2.1.2.1 */
							// End offset: 0x80015668
							// End Line: 1104
						/* end block 1.1.1.2.1.2 */
						// End offset: 0x80015668
						// End Line: 1104
					/* end block 1.1.1.2.1 */
					// End offset: 0x800156A8
					// End Line: 1108
				/* end block 1.1.1.2 */
				// End offset: 0x800156A8
				// End Line: 1108

				/* begin block 1.1.1.3 */
					// Start line: 1110
					// Start offset: 0x800156A8

					/* begin block 1.1.1.3.1 */
						// Start line: 1111
						// Start offset: 0x800156B8

						/* begin block 1.1.1.3.1.1 */
							// Start line: 1111
							// Start offset: 0x800156B8
							// Variables:
						// 		struct tUserNameMenuItem *this; // $v1

							/* begin block 1.1.1.3.1.1.1 */
								// Start line: 1111
								// Start offset: 0x800156B8
							/* end block 1.1.1.3.1.1.1 */
							// End offset: 0x800156B8
							// End Line: 1111
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x800156B8
						// End Line: 1111

						/* begin block 1.1.1.3.1.2 */
							// Start line: 1111
							// Start offset: 0x800156B8
							// Variables:
						// 		struct tScreenUserName *this; // $a2
						// 		struct tOptionsMenu *m; // $a1

							/* begin block 1.1.1.3.1.2.1 */
								// Start line: 1111
								// Start offset: 0x800156B8
							/* end block 1.1.1.3.1.2.1 */
							// End offset: 0x800156B8
							// End Line: 1111
						/* end block 1.1.1.3.1.2 */
						// End offset: 0x800156B8
						// End Line: 1111
					/* end block 1.1.1.3.1 */
					// End offset: 0x800156FC
					// End Line: 1115
				/* end block 1.1.1.3 */
				// End offset: 0x800156FC
				// End Line: 1115
			/* end block 1.1.1 */
			// End offset: 0x800156FC
			// End Line: 1115
		/* end block 1.1 */
		// End offset: 0x800156FC
		// End Line: 1115
	/* end block 1 */
	// End offset: 0x80015714
	// End Line: 1123

	/* begin block 2 */
		// Start line: 2066
	/* end block 2 */
	// End Line: 2067

	/* begin block 3 */
		// Start line: 2073
	/* end block 3 */
	// End Line: 2074

	/* begin block 4 */
		// Start line: 2073
	/* end block 4 */
	// End Line: 2074

/* WARNING: Type propagation algorithm not settling */

tAppCommand RunPostGame__14tFEApplication(tFEApplication *this)

{
  tGlobalMenuDefs *ptVar1;
  tScreenUserName *ptVar2;
  ushort uVar3;
  void *pvVar4;
  undefined *puVar5;
  tAppCommand tVar6;
  tFEApplication *ptVar7;
  int player;
  int iVar8;
  tMenuCommand tStack48;
  short local_28 [4];
  
  if ((frontEnd.raceType != '\x06') &&
     ((frontEnd.raceType != '\0' || (frontEnd.carListType != '\0')))) {
    StatChk_ClearNewRecords__Fv();
    ptVar7 = this;
    player = 0;
    do {
      iVar8 = player + 1;
      Front_ResetPSXController__Fii(player,(uint)(byte)frontEnd.controlConfig[player]);
      *(undefined4 *)&(ptVar7->NoInputMemCardDialog).tDialogMessageString.tDialogBase.fDefault = 0;
      (ptVar7->NoInputMemCardDialog).tDialogMessageString.string = (char *)0x0;
      ptVar7->gotName[0] = (void *)0xffffffff;
      ptVar7 = (tFEApplication *)ptVar7->fCurrentMenu;
      player = iVar8;
    } while (iVar8 < 2);
    pvVar4 = StatChk_IsRecordLapTime__FP10Car_tStatssPs
                       (&Cars_gNewCarStatsList,(short)Cars_gNumRaceCars,local_28);
    if (pvVar4 != (void *)0x0) {
      if (frontEnd.gameMode == '\x01') {
        pvVar4 = (void *)0x7;
        if ((int)local_28[0] != 0) {
          pvVar4 = (void *)0x8;
        }
        this->gotName[(int)local_28[0]] = pvVar4;
      }
      else {
        this->gotName[(int)local_28[0]] = (void *)0x6;
      }
      (&(this->NoInputMemCardDialog).tDialogMessageString.string)[(int)local_28[0]] = &DAT_00000001;
    }
    uVar3 = StatChk_IsTopTime__FP10Car_tStatss(&Cars_gNewCarStatsList,(short)Cars_gNumRaceCars);
    if (uVar3 != 0) {
      if (frontEnd.gameMode == '\x01') {
        if ((uVar3 & 3) != 0) {
          (this->NoInputMemCardDialog).tDialogMessageString.string = &DAT_00000001;
          if ((this->gotName[0] == (void *)0xffffffff) || (local_28[0] != 0)) {
            puVar5 = &DAT_00000001;
            if ((uVar3 & 2) == 0) {
              puVar5 = &DAT_00000004;
            }
          }
          else {
            puVar5 = &DAT_0000000a;
            if ((uVar3 & 2) == 0) {
              puVar5 = (undefined *)0xd;
            }
          }
          *(undefined **)this->gotName = puVar5;
        }
        if ((uVar3 & 0xc) != 0) {
          pvVar4 = this->gotName[1];
          *(undefined **)&(this->NoInputMemCardDialog).tDialogMessageString.Centerit = &DAT_00000001
          ;
          if ((pvVar4 == (void *)0xffffffff) || (local_28[0] != 1)) {
            if ((uVar3 & 8) == 0) {
              this->gotName[1] = (void *)0x5;
            }
            else {
              this->gotName[1] = (void *)0x2;
            }
          }
          else {
            if ((uVar3 & 8) == 0) {
              this->gotName[1] = (void *)0xe;
            }
            else {
              this->gotName[1] = (void *)0xb;
            }
          }
        }
      }
      else {
        (this->NoInputMemCardDialog).tDialogMessageString.string = &DAT_00000001;
        if (this->gotName[0] == (void *)0xffffffff) {
          pvVar4 = (void *)0x3;
          if ((uVar3 & 2) != 0) {
            this->gotName[0] = (void *)0x0;
            goto LAB_80015658;
          }
        }
        else {
          pvVar4 = (void *)0x9;
          if ((uVar3 & 2) == 0) {
            pvVar4 = (void *)0xc;
          }
        }
        this->gotName[0] = pvVar4;
      }
    }
LAB_80015658:
    ptVar1 = menuDefs;
    if ((this->NoInputMemCardDialog).tDialogMessageString.string != (char *)0x0) {
      tStack48.nextMenu = (tMenu *)&(menuDefs->menuItemUserName).fData;
      *(undefined4 *)
       &(menuDefs->itemControllerDeadSpot1).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
        fSelFade = 0x80114964;
      ptVar2 = screenUserName;
      *(undefined2 *)
       ((ptVar1->itemControllerSteeringRange2).tMenuItemLeftRightSlider.tMenuItemInteractive.
        tMenuItem._vf + 8) = 0;
      *(undefined2 *)
       &(ptVar1->itemControllerDeadSpot1).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
        fButtonImage = 7;
      *(undefined2 *)
       &(ptVar1->itemControllerDeadSpot1).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
        fNumFrames = 0;
      *(undefined2 *)
       ((int)&(ptVar1->itemControllerDeadSpot1).tMenuItemLeftRightSlider.tMenuItemInteractive.
              tMenuItem.fButtonImage + 2) = 0;
      *(tMenu **)((ptVar2->tScreen)._vf + 6) = tStack48.nextMenu;
      goto LAB_8001570c;
    }
    if ((this->NoInputMemCardDialog).tDialogMessageString.Centerit != (void *)0x0) {
      tStack48.nextMenu = (tMenu *)&(menuDefs->menuItemUserName1).tMenuItem.fNumFrames;
      *(undefined2 *)
       &(menuDefs->itemControllerJoyRange).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
        fNewMenu = 1;
      (ptVar1->iteratorControllerDeadSpot2).fIndex = frontEnd.playerNameList + 8;
      ptVar2 = screenUserName;
      *(undefined2 *)
       &(ptVar1->itemControllerDeadSpot2).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
        fFlags = 7;
      *(undefined2 *)
       &(ptVar1->itemControllerDeadSpot2).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
        fTextDescription = 0;
      *(undefined2 *)
       ((int)&(ptVar1->itemControllerDeadSpot2).tMenuItemLeftRightSlider.tMenuItemInteractive.
              tMenuItem.fFlags + 2) = 0;
      *(tMenu **)((ptVar2->tScreen)._vf + 6) = tStack48.nextMenu;
      goto LAB_8001570c;
    }
  }
  MenuExtended_PostGameMenu__FR12tMenuCommand(&tStack48);
LAB_8001570c:
  tVar6 = MainLoop__14tFEApplicationP5tMenu(this,tStack48.nextMenu);
  return tVar6;
}



// decompiled code
// original method signature: 
// enum tAppCommand /*$ra*/ RunFrontEnd__14tFEApplication(struct tFEApplication *this /*$a0*/)
 // line 1126, offset 0x80015738
	/* begin block 1 */
		// Start line: 1127
		// Start offset: 0x80015738
	/* end block 1 */
	// End offset: 0x80015738
	// End Line: 1127

	/* begin block 2 */
		// Start line: 2343
	/* end block 2 */
	// End Line: 2344

	/* begin block 3 */
		// Start line: 2347
	/* end block 3 */
	// End Line: 2348

	/* begin block 4 */
		// Start line: 2347
	/* end block 4 */
	// End Line: 2348

	/* begin block 5 */
		// Start line: 2355
	/* end block 5 */
	// End Line: 2356

tAppCommand RunFrontEnd__14tFEApplication(tFEApplication *this)

{
  tAppCommand tVar1;
  
  tVar1 = MainLoop__14tFEApplicationP5tMenu
                    (this,(tMenu *)&(menuDefs->itemMainOptions).tMenuItemGoToMenuButton.
                                    tMenuItemInteractive.tMenuItem.fNewMenu);
  return tVar1;
}





