#include "THISDUST.H"
#include "FEMEMCARD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ ChecksumData__FP12tMemCardData(struct tMemCardData *memCardData /*$s0*/)
 // line 63, offset 0x800342a0
	/* begin block 1 */
		// Start line: 64
		// Start offset: 0x800342A0
	/* end block 1 */
	// End offset: 0x800342A0
	// End Line: 64

	/* begin block 2 */
		// Start line: 126
	/* end block 2 */
	// End Line: 127

	/* begin block 3 */
		// Start line: 126
	/* end block 3 */
	// End Line: 127

void ChecksumData__FP12tMemCardData(tMemCardData *memCardData)

{
  uint uVar1;
  
  memCardData->fSize = 0x14ac;
  uVar1 = crc16((byte *)&memCardData->frontEnd,0x450);
  memCardData->frontEndCRC = uVar1;
  uVar1 = crc16((byte *)&memCardData->carInfo,0xe0);
  memCardData->carInfoCRC = uVar1;
  uVar1 = crc16((byte *)&memCardData->trackInfo,0x10);
  memCardData->trackInfoCRC = uVar1;
  uVar1 = crc16((byte *)&memCardData->tournament,0xb0);
  memCardData->tournamentCRC = uVar1;
  uVar1 = crc16((byte *)memCardData->records,0xe9c);
  memCardData->recordsCRC = uVar1;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ VerifySuccessfulRead__FP12tMemCardData(struct tMemCardData *memCardData /*$s1*/)
 // line 75, offset 0x80034318
	/* begin block 1 */
		// Start line: 76
		// Start offset: 0x80034318
		// Variables:
	// 		void * result; // $s0
	/* end block 1 */
	// End offset: 0x800343D8
	// End Line: 87

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

void * VerifySuccessfulRead__FP12tMemCardData(tMemCardData *memCardData)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = crc16((byte *)&memCardData->frontEnd,0x450);
  pvVar2 = (void *)(uint)(memCardData->frontEndCRC == uVar1);
  uVar1 = crc16((byte *)&memCardData->carInfo,0xe0);
  if (memCardData->carInfoCRC != uVar1) {
    pvVar2 = (void *)0x0;
  }
  uVar1 = crc16((byte *)&memCardData->trackInfo,0x10);
  if (memCardData->trackInfoCRC != uVar1) {
    pvVar2 = (void *)0x0;
  }
  uVar1 = crc16((byte *)&memCardData->tournament,0xb0);
  if (memCardData->tournamentCRC != uVar1) {
    pvVar2 = (void *)0x0;
  }
  uVar1 = crc16((byte *)memCardData->records,0xe9c);
  if (memCardData->recordsCRC != uVar1) {
    pvVar2 = (void *)0x0;
  }
  if ((undefined *)memCardData->fSize != &DAT_000014ac) {
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MakeWayForMemoryCard__Fv()
 // line 90, offset 0x800343f0
	/* begin block 1 */
		// Start line: 91
		// Start offset: 0x800343F0
	/* end block 1 */
	// End offset: 0x800343F0
	// End Line: 91

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

	/* begin block 3 */
		// Start line: 188
	/* end block 3 */
	// End Line: 189

	/* begin block 4 */
		// Start line: 188
	/* end block 4 */
	// End Line: 189

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MakeWayForMemoryCard__Fv(void)

{
  deltimer((int)Clock_MasterInterruptHandler__Fv);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BringThatBeatBack__Fv()
 // line 108, offset 0x80034414
	/* begin block 1 */
		// Start line: 109
		// Start offset: 0x80034414
	/* end block 1 */
	// End offset: 0x80034414
	// End Line: 109

	/* begin block 2 */
		// Start line: 226
	/* end block 2 */
	// End Line: 227

	/* begin block 3 */
		// Start line: 234
	/* end block 3 */
	// End Line: 235

	/* begin block 4 */
		// Start line: 234
	/* end block 4 */
	// End Line: 235

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BringThatBeatBack__Fv(void)

{
  addtimer((int)Clock_MasterInterruptHandler__Fv);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Confirm__Fii(int Text /*$s2*/, int yesText /*$s4*/)
 // line 124, offset 0x80034438
	/* begin block 1 */
		// Start line: 125
		// Start offset: 0x80034438
		// Variables:
	// 		struct tDialogYesNoMem MyDialog; // stack offset -192
	// 		void * putbackon; // $s3
	// 		int ret; // $s2

		/* begin block 1.1 */
			// Start line: 125
			// Start offset: 0x80034438
			// Variables:
		// 		struct tDialogYesNoMem *this; // $s0
		/* end block 1.1 */
		// End offset: 0x80034438
		// End Line: 125

		/* begin block 1.2 */
			// Start line: 125
			// Start offset: 0x80034438

			/* begin block 1.2.1 */
				// Start line: 125
				// Start offset: 0x80034438
				// Variables:
			// 		struct tDialogBase *this; // $a0

				/* begin block 1.2.1.1 */
					// Start line: 125
					// Start offset: 0x80034438
				/* end block 1.2.1.1 */
				// End offset: 0x80034438
				// End Line: 125
			/* end block 1.2.1 */
			// End offset: 0x80034438
			// End Line: 125
		/* end block 1.2 */
		// End offset: 0x8003449C
		// End Line: 133

		/* begin block 1.3 */
			// Start line: 133
			// Start offset: 0x8003449C
			// Variables:
		// 		int num; // $s2

			/* begin block 1.3.1 */
				// Start line: 133
				// Start offset: 0x8003449C
			/* end block 1.3.1 */
			// End offset: 0x8003449C
			// End Line: 133
		/* end block 1.3 */
		// End offset: 0x8003449C
		// End Line: 133

		/* begin block 1.4 */
			// Start line: 133
			// Start offset: 0x8003449C
			// Variables:
		// 		int yes; // $s4

			/* begin block 1.4.1 */
				// Start line: 133
				// Start offset: 0x8003449C
			/* end block 1.4.1 */
			// End offset: 0x8003449C
			// End Line: 133
		/* end block 1.4 */
		// End offset: 0x8003449C
		// End Line: 133

		/* begin block 1.5 */
			// Start line: 133
			// Start offset: 0x8003449C

			/* begin block 1.5.1 */
				// Start line: 139
				// Start offset: 0x800344CC

				/* begin block 1.5.1.1 */
					// Start line: 139
					// Start offset: 0x800344CC

					/* begin block 1.5.1.1.1 */
						// Start line: 139
						// Start offset: 0x800344CC
					/* end block 1.5.1.1.1 */
					// End offset: 0x800344D4
					// End Line: 139
				/* end block 1.5.1.1 */
				// End offset: 0x800344D4
				// End Line: 139
			/* end block 1.5.1 */
			// End offset: 0x800344D4
			// End Line: 139
		/* end block 1.5 */
		// End offset: 0x800344D4
		// End Line: 139

		/* begin block 1.6 */
			// Start line: 140
			// Start offset: 0x800344D4

			/* begin block 1.6.1 */
				// Start line: 143
				// Start offset: 0x800344F0

				/* begin block 1.6.1.1 */
					// Start line: 143
					// Start offset: 0x800344F0
					// Variables:
				// 		struct tDialogMessageString *this; // $s0

					/* begin block 1.6.1.1.1 */
						// Start line: 143
						// Start offset: 0x800344F0
					/* end block 1.6.1.1.1 */
					// End offset: 0x800344F0
					// End Line: 143
				/* end block 1.6.1.1 */
				// End offset: 0x800344F0
				// End Line: 143

				/* begin block 1.6.1.2 */
					// Start line: 146
					// Start offset: 0x80034514

					/* begin block 1.6.1.2.1 */
						// Start line: 146
						// Start offset: 0x80034514

						/* begin block 1.6.1.2.1.1 */
							// Start line: 146
							// Start offset: 0x80034514
						/* end block 1.6.1.2.1.1 */
						// End offset: 0x80034514
						// End Line: 146
					/* end block 1.6.1.2.1 */
					// End offset: 0x80034514
					// End Line: 146
				/* end block 1.6.1.2 */
				// End offset: 0x80034530
				// End Line: 147
			/* end block 1.6.1 */
			// End offset: 0x80034540
			// End Line: 148

			/* begin block 1.6.2 */
				// Start line: 152
				// Start offset: 0x80034550

				/* begin block 1.6.2.1 */
					// Start line: 152
					// Start offset: 0x80034550

					/* begin block 1.6.2.1.1 */
						// Start line: 156
						// Start offset: 0x80034564

						/* begin block 1.6.2.1.1.1 */
							// Start line: 156
							// Start offset: 0x80034564

							/* begin block 1.6.2.1.1.1.1 */
								// Start line: 157
								// Start offset: 0x8003456C

								/* begin block 1.6.2.1.1.1.1.1 */
									// Start line: 159
									// Start offset: 0x80034578

									/* begin block 1.6.2.1.1.1.1.1.1 */
										// Start line: 159
										// Start offset: 0x80034578

										/* begin block 1.6.2.1.1.1.1.1.1.1 */
											// Start line: 159
											// Start offset: 0x80034578
										/* end block 1.6.2.1.1.1.1.1.1.1 */
										// End offset: 0x80034578
										// End Line: 159
									/* end block 1.6.2.1.1.1.1.1.1 */
									// End offset: 0x80034578
									// End Line: 159
								/* end block 1.6.2.1.1.1.1.1 */
								// End offset: 0x80034594
								// End Line: 160
							/* end block 1.6.2.1.1.1.1 */
							// End offset: 0x800345A4
							// End Line: 160
						/* end block 1.6.2.1.1.1 */
						// End offset: 0x800345A4
						// End Line: 160
					/* end block 1.6.2.1.1 */
					// End offset: 0x800345A4
					// End Line: 160
				/* end block 1.6.2.1 */
				// End offset: 0x800345A4
				// End Line: 160
			/* end block 1.6.2 */
			// End offset: 0x800345A4
			// End Line: 160
		/* end block 1.6 */
		// End offset: 0x800345A4
		// End Line: 160

		/* begin block 1.7 */
			// Start line: 162
			// Start offset: 0x800345A4

			/* begin block 1.7.1 */
				// Start line: 162
				// Start offset: 0x800345A4

				/* begin block 1.7.1.1 */
					// Start line: 162
					// Start offset: 0x800345A4

					/* begin block 1.7.1.1.1 */
						// Start line: 162
						// Start offset: 0x800345A4

						/* begin block 1.7.1.1.1.1 */
							// Start line: 162
							// Start offset: 0x800345A4

							/* begin block 1.7.1.1.1.1.1 */
								// Start line: 162
								// Start offset: 0x800345A4
							/* end block 1.7.1.1.1.1.1 */
							// End offset: 0x800345A4
							// End Line: 162
						/* end block 1.7.1.1.1.1 */
						// End offset: 0x800345A4
						// End Line: 162
					/* end block 1.7.1.1.1 */
					// End offset: 0x800345A4
					// End Line: 162
				/* end block 1.7.1.1 */
				// End offset: 0x800345A4
				// End Line: 162
			/* end block 1.7.1 */
			// End offset: 0x800345A4
			// End Line: 162
		/* end block 1.7 */
		// End offset: 0x800345A4
		// End Line: 162
	/* end block 1 */
	// End offset: 0x800345A4
	// End Line: 162

	/* begin block 2 */
		// Start line: 254
	/* end block 2 */
	// End Line: 255

	/* begin block 3 */
		// Start line: 268
	/* end block 3 */
	// End Line: 269

	/* begin block 4 */
		// Start line: 268
	/* end block 4 */
	// End Line: 269

/* WARNING: Type propagation algorithm not settling */

int Confirm__Fii(int Text,int yesText)

{
  bool bVar1;
  tFEApplication *ptVar2;
  tFEApplication *ptVar3;
  short sVar4;
  char *pcVar5;
  int iVar6;
  undefined auStack192 [96];
  undefined *local_60;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_38;
  char *local_30;
  void *local_20;
  int local_1c;
  
  BringThatBeatBack__Fv();
  __12tDialogYesNo((tDialogYesNo *)auStack192);
  local_60 = &table;
  bVar1 = *(int *)((FEApp->NoInputMemCardDialog).tDialogMessageString.tDialogBase.tScreen._vf + 6)
          != 0;
  if (bVar1) {
    Hide__11tDialogBase((tDialogBase *)
                        &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
  }
  local_30 = TextSys_Word__Fi(Text);
  local_1c = 0x292;
  local_38 = 0;
  if (frontEnd.language == '\x03') {
    local_44 = 0;
    local_42 = 10;
  }
  local_20 = (void *)yesText;
  sVar4 = Run__18tDialogInteractive((tDialogInteractive *)(tDialogYesNo *)auStack192);
  ptVar2 = FEApp;
  iVar6 = (int)sVar4;
  if (iVar6 == -1) {
    pcVar5 = TextSys_Word__Fi(CURRENTPLAYER + 0x32b);
    ptVar3 = FEApp;
    *(char **)&(ptVar2->MemCardDialog).tDialogMessageString.tDialogBase.fFullyOpen = pcVar5;
    Display__11tDialogBase((tDialogBase *)ptVar3->waitingForOtherPlayer);
    while ((FEApp->MemCardDialog).tDialogMessageString.tDialogBase.timeOutTicks != 1) {
      Redraw__14tFEApplication(FEApp);
    }
    Redraw__14tFEApplication(FEApp);
  }
  else {
    if (iVar6 != 0) {
      if (bVar1) {
        Display__11tDialogBase
                  ((tDialogBase *)&(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText
                  );
        while ((FEApp->NoInputMemCardDialog).tDialogMessageString.tDialogBase.startTicks != 1) {
          Redraw__14tFEApplication(FEApp);
        }
      }
      goto LAB_800345a8;
    }
  }
  nomessage = &DAT_00000001;
LAB_800345a8:
  Redraw__14tFEApplication(FEApp);
  MakeWayForMemoryCard__Fv();
  ___7tScreen((tScreen *)auStack192,2);
  return iVar6;
}



// decompiled code
// original method signature: 
// int /*$ra*/ OverwriteConfirm__Fv()
 // line 171, offset 0x800345ec
	/* begin block 1 */
		// Start line: 172
		// Start offset: 0x800345EC
	/* end block 1 */
	// End offset: 0x800345EC
	// End Line: 172

	/* begin block 2 */
		// Start line: 359
	/* end block 2 */
	// End Line: 360

	/* begin block 3 */
		// Start line: 362
	/* end block 3 */
	// End Line: 363

	/* begin block 4 */
		// Start line: 362
	/* end block 4 */
	// End Line: 363

/* WARNING: Unknown calling convention yet parameter storage is locked */

int OverwriteConfirm__Fv(void)

{
  int iVar1;
  
  iVar1 = Confirm__Fii(CURRENTPLAYER + 0x323,0x28f);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ OverwriteAlwaysYes__Fv()
 // line 184, offset 0x80034618
	/* begin block 1 */
		// Start line: 185
		// Start offset: 0x80034618
	/* end block 1 */
	// End offset: 0x80034618
	// End Line: 186

	/* begin block 2 */
		// Start line: 388
	/* end block 2 */
	// End Line: 389

	/* begin block 3 */
		// Start line: 392
	/* end block 3 */
	// End Line: 393

	/* begin block 4 */
		// Start line: 392
	/* end block 4 */
	// End Line: 393

	/* begin block 5 */
		// Start line: 393
	/* end block 5 */
	// End Line: 394

	/* begin block 6 */
		// Start line: 393
	/* end block 6 */
	// End Line: 394

/* WARNING: Unknown calling convention yet parameter storage is locked */

int OverwriteAlwaysYes__Fv(void)

{
  return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FormatConfirm__Fv()
 // line 191, offset 0x80034620
	/* begin block 1 */
		// Start line: 192
		// Start offset: 0x80034620
	/* end block 1 */
	// End offset: 0x80034620
	// End Line: 192

	/* begin block 2 */
		// Start line: 400
	/* end block 2 */
	// End Line: 401

	/* begin block 3 */
		// Start line: 406
	/* end block 3 */
	// End Line: 407

	/* begin block 4 */
		// Start line: 406
	/* end block 4 */
	// End Line: 407

/* WARNING: Unknown calling convention yet parameter storage is locked */

int FormatConfirm__Fv(void)

{
  int iVar1;
  
  iVar1 = Confirm__Fii(CURRENTPLAYER + 0x327,0x290);
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadingProc__Fv()
 // line 209, offset 0x8003464c
	/* begin block 1 */
		// Start line: 210
		// Start offset: 0x8003464C
	/* end block 1 */
	// End offset: 0x8003464C
	// End Line: 210

	/* begin block 2 */
		// Start line: 443
	/* end block 2 */
	// End Line: 444

	/* begin block 3 */
		// Start line: 448
	/* end block 3 */
	// End Line: 449

	/* begin block 4 */
		// Start line: 448
	/* end block 4 */
	// End Line: 449

	/* begin block 5 */
		// Start line: 452
	/* end block 5 */
	// End Line: 453

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadingProc__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadingRedrawProc__Fv()
 // line 217, offset 0x80034654
	/* begin block 1 */
		// Start line: 218
		// Start offset: 0x80034654
	/* end block 1 */
	// End offset: 0x80034654
	// End Line: 218

	/* begin block 2 */
		// Start line: 460
	/* end block 2 */
	// End Line: 461

	/* begin block 3 */
		// Start line: 464
	/* end block 3 */
	// End Line: 465

	/* begin block 4 */
		// Start line: 464
	/* end block 4 */
	// End Line: 465

	/* begin block 5 */
		// Start line: 468
	/* end block 5 */
	// End Line: 469

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadingRedrawProc__Fv(void)

{
  Redraw__14tFEApplication(FEApp);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SavingProc__Fv()
 // line 226, offset 0x8003467c
	/* begin block 1 */
		// Start line: 227
		// Start offset: 0x8003467C
	/* end block 1 */
	// End offset: 0x8003467C
	// End Line: 227

	/* begin block 2 */
		// Start line: 481
	/* end block 2 */
	// End Line: 482

	/* begin block 3 */
		// Start line: 486
	/* end block 3 */
	// End Line: 487

	/* begin block 4 */
		// Start line: 486
	/* end block 4 */
	// End Line: 487

	/* begin block 5 */
		// Start line: 490
	/* end block 5 */
	// End Line: 491

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SavingProc__Fv(void)

{
  Redraw__14tFEApplication(FEApp);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init_Memcard__FbT0(void * redraw /*$s1*/, void * pinkslips /*$s0*/)
 // line 240, offset 0x800346a4
	/* begin block 1 */
		// Start line: 241
		// Start offset: 0x800346A4
		// Variables:
	// 		struct MCRDOPTS_def mcrdopts; // stack offset -56
	// 		int padrestorestarttick; // $v1

		/* begin block 1.1 */
			// Start line: 255
			// Start offset: 0x800346EC

			/* begin block 1.1.1 */
				// Start line: 255
				// Start offset: 0x800346EC
			/* end block 1.1.1 */
			// End offset: 0x800346EC
			// End Line: 255
		/* end block 1.1 */
		// End offset: 0x800346EC
		// End Line: 255

		/* begin block 1.2 */
			// Start line: 259
			// Start offset: 0x80034700

			/* begin block 1.2.1 */
				// Start line: 259
				// Start offset: 0x80034700

				/* begin block 1.2.1.1 */
					// Start line: 259
					// Start offset: 0x80034700
				/* end block 1.2.1.1 */
				// End offset: 0x80034700
				// End Line: 259
			/* end block 1.2.1 */
			// End offset: 0x80034700
			// End Line: 259
		/* end block 1.2 */
		// End offset: 0x80034718
		// End Line: 259
	/* end block 1 */
	// End offset: 0x800347EC
	// End Line: 312

	/* begin block 2 */
		// Start line: 508
	/* end block 2 */
	// End Line: 509

	/* begin block 3 */
		// Start line: 518
	/* end block 3 */
	// End Line: 519

	/* begin block 4 */
		// Start line: 518
	/* end block 4 */
	// End Line: 519

/* WARNING: Removing unreachable block (ram,0x80034718) */
/* WARNING: Removing unreachable block (ram,0x8003478c) */
/* WARNING: Removing unreachable block (ram,0x80034780) */
/* WARNING: Removing unreachable block (ram,0x80034794) */
/* WARNING: Removing unreachable block (ram,0x800347a8) */
/* WARNING: Removing unreachable block (ram,0x8003479c) */
/* WARNING: Removing unreachable block (ram,0x800347b0) */

void Init_Memcard__FbT0(void *redraw,void *pinkslips)

{
  if (MEMCARD_INITIALIZED != (void *)0x0) {
    return;
  }
  MEMCARD_INITIALIZED = &DAT_00000001;
  if (MEMCARDFRONTENDISINITTED != (void *)0x0) {
    AudioMus_StopSong__Fi(0);
    timedwait(5);
  }
  PAD_restore();
  do {
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DeInit_Memcard__Fv()
 // line 321, offset 0x80034800
	/* begin block 1 */
		// Start line: 322
		// Start offset: 0x80034800
		// Variables:
	// 		int padrestorestarttick; // $a0

		/* begin block 1.1 */
			// Start line: 326
			// Start offset: 0x80034818

			/* begin block 1.1.1 */
				// Start line: 326
				// Start offset: 0x80034818
			/* end block 1.1.1 */
			// End offset: 0x80034818
			// End Line: 326
		/* end block 1.1 */
		// End offset: 0x80034818
		// End Line: 326

		/* begin block 1.2 */
			// Start line: 341
			// Start offset: 0x80034850

			/* begin block 1.2.1 */
				// Start line: 341
				// Start offset: 0x80034850

				/* begin block 1.2.1.1 */
					// Start line: 341
					// Start offset: 0x80034850
				/* end block 1.2.1.1 */
				// End offset: 0x80034850
				// End Line: 341
			/* end block 1.2.1 */
			// End offset: 0x80034850
			// End Line: 341
		/* end block 1.2 */
		// End offset: 0x80034868
		// End Line: 341
	/* end block 1 */
	// End offset: 0x80034890
	// End Line: 346

	/* begin block 2 */
		// Start line: 692
	/* end block 2 */
	// End Line: 693

	/* begin block 3 */
		// Start line: 697
	/* end block 3 */
	// End Line: 698

	/* begin block 4 */
		// Start line: 697
	/* end block 4 */
	// End Line: 698

	/* begin block 5 */
		// Start line: 700
	/* end block 5 */
	// End Line: 701

/* WARNING: Removing unreachable block (ram,0x80034868) */
/* WARNING: Removing unreachable block (ram,0x80034884) */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void DeInit_Memcard__Fv(void)

{
  if (MEMCARD_INITIALIZED == (void *)0x0) {
    return;
  }
  MEMCARD_INITIALIZED = (void *)0x0;
  deltimer((int)Clock_MasterInterruptHandler__Fv);
  MCRD_restore();
  addtimer((int)Clock_MasterInterruptHandler__Fv);
  PAD_restore();
  do {
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init_MemcardFile__FR12MCRDFILE_defsb(struct MCRDFILE_def *memCardFile /*$s2*/, short cardnum /*$a1*/, void * notitle /*$s0*/)
 // line 357, offset 0x800348a0
	/* begin block 1 */
		// Start line: 358
		// Start offset: 0x800348A0
	/* end block 1 */
	// End offset: 0x80034954
	// End Line: 379

	/* begin block 2 */
		// Start line: 766
	/* end block 2 */
	// End Line: 767

	/* begin block 3 */
		// Start line: 772
	/* end block 3 */
	// End Line: 773

	/* begin block 4 */
		// Start line: 772
	/* end block 4 */
	// End Line: 773

void Init_MemcardFile__FR12MCRDFILE_defsb(MCRDFILE_def *memCardFile,short cardnum,void *notitle)

{
  void *pvVar1;
  char *__format;
  char *pcVar2;
  
  blockclear((undefined *)memCardFile,0x2c);
  memCardFile->name = (char *)0x800116dc;
  if (notitle == (void *)0x0) {
    pvVar1 = PlayerNameExist__Fi((uint)(cardnum == 5));
    if (pvVar1 == (void *)0x0) {
      __format = TextSys_Word__Fi(0x279);
      sprintf(TITLE,__format);
    }
    else {
      __format = TextSys_Word__Fi(0x278);
      pcVar2 = PlayerName__Fi((uint)(cardnum == 5));
      sprintf(TITLE,&DAT_800116e4,__format,pcVar2);
    }
  }
  else {
    TITLE[0] = '\0';
  }
  memCardFile->title = TITLE;
  memCardFile->size = 0x1500;
  memCardFile->offset = 0;
  memCardFile->flags = 0;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ SaveGame__Fs(short player /*$s5*/)
 // line 395, offset 0x80034988
	/* begin block 1 */
		// Start line: 396
		// Start offset: 0x80034988
		// Variables:
	// 		struct tMemCardData memCardData; // stack offset -5864
	// 		char memorycardbuffer[256]; // stack offset -568
	// 		struct tDialogNoInputMessage WarningDialog; // stack offset -312
	// 		short cardNum; // stack offset -48
	// 		struct MCRDFILE_def memCardFile; // stack offset -160
	// 		char *shapeFile; // $s7
	// 		char shapeFileName[64]; // stack offset -112
	// 		void * finished; // $s3
	// 		int event; // $s0
	// 		void * returnvalue; // $s6
	// 		int returnmessage; // $s2

		/* begin block 1.1 */
			// Start line: 396
			// Start offset: 0x80034988
			// Variables:
		// 		int i; // $a2
		/* end block 1.1 */
		// End offset: 0x80034A24
		// End Line: 411

		/* begin block 1.2 */
			// Start line: 413
			// Start offset: 0x80034A24

			/* begin block 1.2.1 */
				// Start line: 413
				// Start offset: 0x80034A24

				/* begin block 1.2.1.1 */
					// Start line: 413
					// Start offset: 0x80034A24

					/* begin block 1.2.1.1.1 */
						// Start line: 413
						// Start offset: 0x80034A24
					/* end block 1.2.1.1.1 */
					// End offset: 0x80034A24
					// End Line: 413
				/* end block 1.2.1.1 */
				// End offset: 0x80034A24
				// End Line: 413

				/* begin block 1.2.1.2 */
					// Start line: 413
					// Start offset: 0x80034A24
				/* end block 1.2.1.2 */
				// End offset: 0x80034A24
				// End Line: 413
			/* end block 1.2.1 */
			// End offset: 0x80034A24
			// End Line: 413
		/* end block 1.2 */
		// End offset: 0x80034A24
		// End Line: 413

		/* begin block 1.3 */
			// Start line: 413
			// Start offset: 0x80034A24

			/* begin block 1.3.1 */
				// Start line: 413
				// Start offset: 0x80034A24
			/* end block 1.3.1 */
			// End offset: 0x80034A24
			// End Line: 413
		/* end block 1.3 */
		// End offset: 0x80034A24
		// End Line: 413

		/* begin block 1.4 */
			// Start line: 413
			// Start offset: 0x80034A24

			/* begin block 1.4.1 */
				// Start line: 413
				// Start offset: 0x80034A24
			/* end block 1.4.1 */
			// End offset: 0x80034A24
			// End Line: 413
		/* end block 1.4 */
		// End offset: 0x80034A24
		// End Line: 413

		/* begin block 1.5 */
			// Start line: 417
			// Start offset: 0x80034AD0

			/* begin block 1.5.1 */
				// Start line: 417
				// Start offset: 0x80034AD0

				/* begin block 1.5.1.1 */
					// Start line: 417
					// Start offset: 0x80034AD0
				/* end block 1.5.1.1 */
				// End offset: 0x80034AD0
				// End Line: 417
			/* end block 1.5.1 */
			// End offset: 0x80034AD0
			// End Line: 417
		/* end block 1.5 */
		// End offset: 0x80034AE4
		// End Line: 418

		/* begin block 1.6 */
			// Start line: 419
			// Start offset: 0x80034AF8

			/* begin block 1.6.1 */
				// Start line: 475
				// Start offset: 0x80034C3C

				/* begin block 1.6.1.1 */
					// Start line: 477
					// Start offset: 0x80034C44

					/* begin block 1.6.1.1.1 */
						// Start line: 482
						// Start offset: 0x80034C8C

						/* begin block 1.6.1.1.1.1 */
							// Start line: 484
							// Start offset: 0x80034C8C

							/* begin block 1.6.1.1.1.1.1 */
								// Start line: 484
								// Start offset: 0x80034C8C

								/* begin block 1.6.1.1.1.1.1.1 */
									// Start line: 484
									// Start offset: 0x80034C8C
								/* end block 1.6.1.1.1.1.1.1 */
								// End offset: 0x80034C8C
								// End Line: 484
							/* end block 1.6.1.1.1.1.1 */
							// End offset: 0x80034C8C
							// End Line: 484
						/* end block 1.6.1.1.1.1 */
						// End offset: 0x80034C9C
						// End Line: 489

						/* begin block 1.6.1.1.1.2 */
							// Start line: 489
							// Start offset: 0x80034C9C
						/* end block 1.6.1.1.1.2 */
						// End offset: 0x80034C9C
						// End Line: 489

						/* begin block 1.6.1.1.1.3 */
							// Start line: 502
							// Start offset: 0x80034CAC
						/* end block 1.6.1.1.1.3 */
						// End offset: 0x80034CAC
						// End Line: 502

						/* begin block 1.6.1.1.1.4 */
							// Start line: 538
							// Start offset: 0x80034CE4
						/* end block 1.6.1.1.1.4 */
						// End offset: 0x80034CE4
						// End Line: 538

						/* begin block 1.6.1.1.1.5 */
							// Start line: 538
							// Start offset: 0x80034CE4
						/* end block 1.6.1.1.1.5 */
						// End offset: 0x80034CE4
						// End Line: 538
					/* end block 1.6.1.1.1 */
					// End offset: 0x80034CE4
					// End Line: 538
				/* end block 1.6.1.1 */
				// End offset: 0x80034CE4
				// End Line: 538
			/* end block 1.6.1 */
			// End offset: 0x80034CE4
			// End Line: 538
		/* end block 1.6 */
		// End offset: 0x80034D18
		// End Line: 557

		/* begin block 1.7 */
			// Start line: 557
			// Start offset: 0x80034D18

			/* begin block 1.7.1 */
				// Start line: 567
				// Start offset: 0x80034D3C

				/* begin block 1.7.1.1 */
					// Start line: 568
					// Start offset: 0x80034D3C
					// Variables:
				// 		struct tDialogMessageString *this; // $s0

					/* begin block 1.7.1.1.1 */
						// Start line: 568
						// Start offset: 0x80034D3C
					/* end block 1.7.1.1.1 */
					// End offset: 0x80034D3C
					// End Line: 568
				/* end block 1.7.1.1 */
				// End offset: 0x80034D3C
				// End Line: 568

				/* begin block 1.7.1.2 */
					// Start line: 571
					// Start offset: 0x80034D70

					/* begin block 1.7.1.2.1 */
						// Start line: 571
						// Start offset: 0x80034D70

						/* begin block 1.7.1.2.1.1 */
							// Start line: 571
							// Start offset: 0x80034D70
						/* end block 1.7.1.2.1.1 */
						// End offset: 0x80034D70
						// End Line: 571
					/* end block 1.7.1.2.1 */
					// End offset: 0x80034D70
					// End Line: 571
				/* end block 1.7.1.2 */
				// End offset: 0x80034D8C
				// End Line: 572
			/* end block 1.7.1 */
			// End offset: 0x80034DA4
			// End Line: 573
		/* end block 1.7 */
		// End offset: 0x80034DA4
		// End Line: 573

		/* begin block 1.8 */
			// Start line: 577
			// Start offset: 0x80034DA4

			/* begin block 1.8.1 */
				// Start line: 577
				// Start offset: 0x80034DA4

				/* begin block 1.8.1.1 */
					// Start line: 577
					// Start offset: 0x80034DA4

					/* begin block 1.8.1.1.1 */
						// Start line: 577
						// Start offset: 0x80034DA4
					/* end block 1.8.1.1.1 */
					// End offset: 0x80034DA4
					// End Line: 577
				/* end block 1.8.1.1 */
				// End offset: 0x80034DA4
				// End Line: 577
			/* end block 1.8.1 */
			// End offset: 0x80034DA4
			// End Line: 577
		/* end block 1.8 */
		// End offset: 0x80034DA4
		// End Line: 577
	/* end block 1 */
	// End offset: 0x80034DA4
	// End Line: 579

	/* begin block 2 */
		// Start line: 834
	/* end block 2 */
	// End Line: 835

	/* begin block 3 */
		// Start line: 848
	/* end block 3 */
	// End Line: 849

	/* begin block 4 */
		// Start line: 848
	/* end block 4 */
	// End Line: 849

void * SaveGame__Fs(short player)

{
  tFEApplication *ptVar1;
  tFEApplication *ptVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  CARDINFO_def *pCVar6;
  char *pcVar7;
  tfrontEnd *ptVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  undefined auStack5864 [4];
  undefined auStack5860 [4];
  undefined auStack5856 [1104];
  undefined auStack4752 [224];
  undefined auStack4528 [16];
  undefined auStack4512 [176];
  undefined auStack4336 [3740];
  ulong local_254;
  undefined auStack312 [96];
  undefined *local_d8;
  undefined2 local_d4;
  undefined2 local_d2;
  short local_d0;
  short local_ce;
  short local_cc;
  short local_ca;
  undefined4 local_c8;
  long local_c0;
  undefined2 local_bc;
  undefined2 local_ba;
  short local_b8;
  short local_b6;
  int local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  char *local_a8;
  undefined4 local_a4;
  MCRDFILE_def MStack160;
  char acStack112 [64];
  short local_30;
  
  iVar9 = 0;
  ptVar8 = &frontEnd;
  CURRENTPLAYER = (int)player;
  CURRENTLYUSINGMEMCARD = &DAT_00000001;
  do {
    ptVar8->AnalogOn[0] = (void *)0x1;
    if (*(char *)((int)gPadinfo.buf + (uint)(iVar9 != 0) * 0x20 + 1) != 's') {
      ptVar8->AnalogOn[0] = (void *)0x0;
    }
    iVar9 = iVar9 + 1;
    ptVar8 = (tfrontEnd *)&ptVar8->raceType;
  } while (iVar9 < 2);
  __7tScreen((tScreen *)(tDialogBase *)auStack312);
  local_c8 = 0;
  local_ca = 0;
  local_b6 = 0;
  local_ba = 0;
  local_bc = 0;
  local_cc = 0;
  local_ce = 0;
  local_d0 = 0;
  local_d2 = 0;
  local_b8 = 0x120;
  local_d4 = 0xffff;
  local_b0 = 0;
  local_a4 = 0;
  local_b4 = 0;
  local_c0 = 0;
  local_ac = 0x80;
  local_d8 = &table;
  local_a8 = TextSys_Word__Fi((int)player + 0x276);
  local_bc = 0;
  local_ba = 0x32;
  Display__11tDialogBase((tDialogBase *)auStack312);
  while (iVar9 = 0, local_b4 != 1) {
    Redraw__14tFEApplication(FEApp);
  }
  iVar11 = 0x28b;
  Redraw__14tFEApplication(FEApp);
  iVar10 = ((int)((uint)(ushort)player << 0x10) >> 0xe) + 1;
  local_30 = (short)iVar10;
  nomessage = (void *)0x0;
  MakeWayForMemoryCard__Fv();
  iVar10 = iVar10 * 0x10000;
  Init_MemcardFile__FR12MCRDFILE_defsb(&MStack160,(short)((uint)iVar10 >> 0x10),(void *)0x0);
  MStack160.pData = auStack5864;
  while (iVar5 = MCRD_handlecardevents(iVar10 >> 0x10), iVar5 == 0x15) {
    VSync(0);
  }
  blockmove((undefined4 *)&frontEnd,(undefined4 *)(auStack5864 + 8),0x450);
  SaveTournament__18tTournamentManagerR15tSaveTournament
            (&tournamentManager,(tSaveTournament *)(auStack5864 + 0x548));
  SaveTracks__13tTrackManagerR14tSaveTrackInfo
            (&trackManager,(tSaveTrackInfo *)(auStack5864 + 0x538));
  SaveCars__11tCarManagerR12tSaveCarInfo(&carManager,(tSaveCarInfo *)(auStack5864 + 0x458));
  blockmove((undefined4 *)Stats_gTrackRecords,(undefined4 *)(auStack5864 + 0x5f8),0xe9c);
  local_254 = rand();
  FECheat_SaveBonus__FRUl((ulong *)(auStack5864 + 4));
  sVar3 = local_30;
  sprintf(acStack112,s__szMem_psh_800116ec,PTR_801164e8);
  iVar10 = loadshapeadr(acStack112,0);
  MStack160.flags = 0x200;
  MStack160.icon[0] = (_func_53 *)shapepointer(iVar10,0);
  MStack160.icon[1] = (_func_53 *)0x0;
  MStack160.icon[2] = (_func_53 *)0x0;
  ChecksumData__FP12tMemCardData((tMemCardData *)auStack5864);
  pvVar12 = (void *)0;
  while (sVar4 = local_30, iVar9 == 0) {
    iVar5 = MCRD_handlecardevents((int)sVar3);
    systemtask(0);
    VSync(0);
    switch(iVar5) {
    case 2:
    case 3:
    case 7:
    case 10:
    case 0xb:
    case 0xd:
    case 0x17:
      pCVar6 = MCRD_getcard(((int)((uint)(ushort)player << 0x10) >> 0xe) + 1);
      iVar11 = 0x29d;
      if ((pCVar6->status != -3) && (iVar11 = 0x325, pCVar6->status == -1)) {
        iVar11 = 0x32b;
      }
      iVar9 = 1;
      break;
    case 0xc:
      iVar11 = 0x28b;
      iVar9 = 1;
      pvVar12 = (void *)iVar9;
      break;
    case 0x16:
      if (gMemCardInfo.bReady != 0) {
        MCRD_savefile((int)sVar3,&MStack160);
      }
    }
  }
  while (iVar9 = MCRD_handlecardevents((int)sVar4), iVar9 != 0x16) {
    VSync(0);
  }
  purgememadr(iVar10);
  BringThatBeatBack__Fv();
  if (nomessage == (void *)0x0) {
    Hide__11tDialogBase((tDialogBase *)
                        &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
    ptVar1 = FEApp;
    pcVar7 = TextSys_Word__Fi(iVar11 + (int)player);
    ptVar2 = FEApp;
    *(char **)&(ptVar1->MemCardDialog).tDialogMessageString.tDialogBase.fFullyOpen = pcVar7;
    Display__11tDialogBase((tDialogBase *)ptVar2->waitingForOtherPlayer);
    while ((FEApp->MemCardDialog).tDialogMessageString.tDialogBase.timeOutTicks != 1) {
      Redraw__14tFEApplication(FEApp);
    }
    Redraw__14tFEApplication(FEApp);
  }
  *(undefined4 *)&screenMemcard->player = 1;
  Hide__11tDialogBase((tDialogBase *)auStack312);
  Redraw__14tFEApplication(FEApp);
  CURRENTLYUSINGMEMCARD = (void *)0x0;
  ___7tScreen((tScreen *)(tDialogBase *)auStack312,2);
  return pvVar12;
}



// decompiled code
// original method signature: 
// short /*$ra*/ LoadGame__FsbT1(short player /*stack -56*/, void * PinkSlips /*stack 4*/, void * WithDialogs /*stack 8*/)
 // line 591, offset 0x80034e18
	/* begin block 1 */
		// Start line: 592
		// Start offset: 0x80034E18
		// Variables:
	// 		struct tMemCardData memCardData; // stack offset -5808
	// 		char memorycardbuffer[256]; // stack offset -512
	// 		short cardNum; // $s3
	// 		struct tDialogNoInputMessage WarningDialog; // stack offset -256
	// 		struct MCRDFILE_def memCardFile; // stack offset -104
	// 		void * finished; // $s1
	// 		int result; // $s4
	// 		int memCardResult; // $s0
	// 		int count; // $fp
	// 		int returnmessage; // $s2

		/* begin block 1.1 */
			// Start line: 592
			// Start offset: 0x80034E18

			/* begin block 1.1.1 */
				// Start line: 592
				// Start offset: 0x80034E18

				/* begin block 1.1.1.1 */
					// Start line: 592
					// Start offset: 0x80034E18

					/* begin block 1.1.1.1.1 */
						// Start line: 592
						// Start offset: 0x80034E18
					/* end block 1.1.1.1.1 */
					// End offset: 0x80034E18
					// End Line: 592
				/* end block 1.1.1.1 */
				// End offset: 0x80034E18
				// End Line: 592

				/* begin block 1.1.1.2 */
					// Start line: 592
					// Start offset: 0x80034E18
				/* end block 1.1.1.2 */
				// End offset: 0x80034E18
				// End Line: 592
			/* end block 1.1.1 */
			// End offset: 0x80034E18
			// End Line: 592
		/* end block 1.1 */
		// End offset: 0x80034E18
		// End Line: 592

		/* begin block 1.2 */
			// Start line: 592
			// Start offset: 0x80034E18

			/* begin block 1.2.1 */
				// Start line: 607
				// Start offset: 0x80034F10

				/* begin block 1.2.1.1 */
					// Start line: 607
					// Start offset: 0x80034F10

					/* begin block 1.2.1.1.1 */
						// Start line: 607
						// Start offset: 0x80034F10
					/* end block 1.2.1.1.1 */
					// End offset: 0x80034F10
					// End Line: 607
				/* end block 1.2.1.1 */
				// End offset: 0x80034F10
				// End Line: 607

				/* begin block 1.2.1.2 */
					// Start line: 607
					// Start offset: 0x80034F10

					/* begin block 1.2.1.2.1 */
						// Start line: 611
						// Start offset: 0x80034F28

						/* begin block 1.2.1.2.1.1 */
							// Start line: 611
							// Start offset: 0x80034F28

							/* begin block 1.2.1.2.1.1.1 */
								// Start line: 611
								// Start offset: 0x80034F28
							/* end block 1.2.1.2.1.1.1 */
							// End offset: 0x80034F34
							// End Line: 611
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x80034F34
						// End Line: 611
					/* end block 1.2.1.2.1 */
					// End offset: 0x80034F34
					// End Line: 611
				/* end block 1.2.1.2 */
				// End offset: 0x80034F34
				// End Line: 611

				/* begin block 1.2.1.3 */
					// Start line: 614
					// Start offset: 0x80034F40

					/* begin block 1.2.1.3.1 */
						// Start line: 614
						// Start offset: 0x80034F40

						/* begin block 1.2.1.3.1.1 */
							// Start line: 614
							// Start offset: 0x80034F40
						/* end block 1.2.1.3.1.1 */
						// End offset: 0x80034F40
						// End Line: 614
					/* end block 1.2.1.3.1 */
					// End offset: 0x80034F40
					// End Line: 614
				/* end block 1.2.1.3 */
				// End offset: 0x80034F54
				// End Line: 615
			/* end block 1.2.1 */
			// End offset: 0x80034F74
			// End Line: 616
		/* end block 1.2 */
		// End offset: 0x80034F74
		// End Line: 616

		/* begin block 1.3 */
			// Start line: 628
			// Start offset: 0x80034FA8

			/* begin block 1.3.1 */
				// Start line: 644
				// Start offset: 0x8003500C

				/* begin block 1.3.1.1 */
					// Start line: 646
					// Start offset: 0x80035014

					/* begin block 1.3.1.1.1 */
						// Start line: 653
						// Start offset: 0x8003505C
						// Variables:
					// 		struct CARDINFO_def *pCI; // $s0

						/* begin block 1.3.1.1.1.1 */
							// Start line: 658
							// Start offset: 0x8003505C
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x8003505C
						// End Line: 658

						/* begin block 1.3.1.1.1.2 */
							// Start line: 662
							// Start offset: 0x80035074

							/* begin block 1.3.1.1.1.2.1 */
								// Start line: 698
								// Start offset: 0x80035174

								/* begin block 1.3.1.1.1.2.1.1 */
									// Start line: 699
									// Start offset: 0x80035174

									/* begin block 1.3.1.1.1.2.1.1.1 */
										// Start line: 701
										// Start offset: 0x80035198

										/* begin block 1.3.1.1.1.2.1.1.1.1 */
											// Start line: 702
											// Start offset: 0x80035198
											// Variables:
										// 		struct tDialogMessageString *this; // $s0

											/* begin block 1.3.1.1.1.2.1.1.1.1.1 */
												// Start line: 702
												// Start offset: 0x80035198
											/* end block 1.3.1.1.1.2.1.1.1.1.1 */
											// End offset: 0x80035198
											// End Line: 702
										/* end block 1.3.1.1.1.2.1.1.1.1 */
										// End offset: 0x80035198
										// End Line: 702
									/* end block 1.3.1.1.1.2.1.1.1 */
									// End offset: 0x800351D4
									// End Line: 705
								/* end block 1.3.1.1.1.2.1.1 */
								// End offset: 0x800351D4
								// End Line: 705
							/* end block 1.3.1.1.1.2.1 */
							// End offset: 0x800351D4
							// End Line: 705
						/* end block 1.3.1.1.1.2 */
						// End offset: 0x800351D4
						// End Line: 705

						/* begin block 1.3.1.1.1.3 */
							// Start line: 711
							// Start offset: 0x800351D4
						/* end block 1.3.1.1.1.3 */
						// End offset: 0x800351D4
						// End Line: 711

						/* begin block 1.3.1.1.1.4 */
							// Start line: 754
							// Start offset: 0x80035230
						/* end block 1.3.1.1.1.4 */
						// End offset: 0x80035230
						// End Line: 754
					/* end block 1.3.1.1.1 */
					// End offset: 0x80035230
					// End Line: 754
				/* end block 1.3.1.1 */
				// End offset: 0x80035230
				// End Line: 754
			/* end block 1.3.1 */
			// End offset: 0x80035230
			// End Line: 754
		/* end block 1.3 */
		// End offset: 0x80035258
		// End Line: 772

		/* begin block 1.4 */
			// Start line: 777
			// Start offset: 0x80035274

			/* begin block 1.4.1 */
				// Start line: 778
				// Start offset: 0x80035294

				/* begin block 1.4.1.1 */
					// Start line: 779
					// Start offset: 0x80035294
					// Variables:
				// 		struct tDialogMessageString *this; // $s0

					/* begin block 1.4.1.1.1 */
						// Start line: 779
						// Start offset: 0x80035294
					/* end block 1.4.1.1.1 */
					// End offset: 0x80035294
					// End Line: 779
				/* end block 1.4.1.1 */
				// End offset: 0x80035294
				// End Line: 779

				/* begin block 1.4.1.2 */
					// Start line: 783
					// Start offset: 0x800352DC

					/* begin block 1.4.1.2.1 */
						// Start line: 783
						// Start offset: 0x800352DC

						/* begin block 1.4.1.2.1.1 */
							// Start line: 783
							// Start offset: 0x800352DC
						/* end block 1.4.1.2.1.1 */
						// End offset: 0x800352DC
						// End Line: 783
					/* end block 1.4.1.2.1 */
					// End offset: 0x800352DC
					// End Line: 783
				/* end block 1.4.1.2 */
				// End offset: 0x800352F8
				// End Line: 784
			/* end block 1.4.1 */
			// End offset: 0x80035310
			// End Line: 785
		/* end block 1.4 */
		// End offset: 0x80035310
		// End Line: 785

		/* begin block 1.5 */
			// Start line: 811
			// Start offset: 0x800353A8

			/* begin block 1.5.1 */
				// Start line: 811
				// Start offset: 0x800353A8

				/* begin block 1.5.1.1 */
					// Start line: 811
					// Start offset: 0x800353A8

					/* begin block 1.5.1.1.1 */
						// Start line: 811
						// Start offset: 0x800353A8
					/* end block 1.5.1.1.1 */
					// End offset: 0x800353A8
					// End Line: 811
				/* end block 1.5.1.1 */
				// End offset: 0x800353A8
				// End Line: 811
			/* end block 1.5.1 */
			// End offset: 0x800353A8
			// End Line: 811
		/* end block 1.5 */
		// End offset: 0x800353A8
		// End Line: 811
	/* end block 1 */
	// End offset: 0x800353A8
	// End Line: 811

	/* begin block 2 */
		// Start line: 1288
	/* end block 2 */
	// End Line: 1289

	/* begin block 3 */
		// Start line: 1296
	/* end block 3 */
	// End Line: 1297

	/* begin block 4 */
		// Start line: 1296
	/* end block 4 */
	// End Line: 1297

short LoadGame__FsbT1(short player,void *PinkSlips,void *WithDialogs)

{
  bool bVar1;
  tFEApplication *ptVar2;
  tFEApplication *ptVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  CARDINFO_def *pCVar7;
  int iVar8;
  char *pcVar9;
  int card;
  int iVar10;
  int iVar11;
  short sVar12;
  ushort cardnum;
  undefined auStack5808 [4];
  undefined auStack5804 [4];
  undefined auStack5800 [868];
  undefined auStack4932 [236];
  undefined auStack4696 [224];
  undefined auStack4472 [16];
  long local_1168;
  undefined auStack4280 [3740];
  ulong local_21c;
  undefined auStack256 [96];
  undefined *local_a0;
  undefined2 local_9c;
  undefined2 local_9a;
  short local_98;
  short local_96;
  short local_94;
  short local_92;
  undefined4 local_90;
  long local_88;
  undefined2 local_84;
  undefined2 local_82;
  short local_80;
  short local_7e;
  int local_7c;
  undefined2 local_78;
  undefined4 local_74;
  char *local_70;
  undefined4 local_6c;
  MCRDFILE_def MStack104;
  ushort local_38;
  int local_30;
  int local_2c;
  
  iVar10 = (int)player;
  cardnum = (ushort)(iVar10 << 2) | 1;
  CURRENTLYUSINGMEMCARD = &DAT_00000001;
  CURRENTPLAYER = iVar10;
  local_38 = player;
  __7tScreen((tScreen *)(tDialogBase *)auStack256);
  local_90 = 0;
  local_92 = 0;
  local_7e = 0;
  local_82 = 0;
  local_84 = 0;
  local_94 = 0;
  local_96 = 0;
  local_98 = 0;
  local_9a = 0;
  local_80 = 0x120;
  local_9c = 0xffff;
  local_78 = 0;
  local_6c = 0;
  local_7c = 0;
  local_88 = 0;
  local_74 = 0x80;
  local_a0 = &table;
  if ((WithDialogs != (void *)0x0) || (PinkSlips != (void *)0x0)) {
    local_70 = TextSys_Word__Fi(iVar10 + 0x276);
    if (PinkSlips == (void *)0x0) {
      local_84 = 0;
      local_82 = 0x32;
    }
    Display__11tDialogBase((tDialogBase *)auStack256);
    while (local_7c != 1) {
      Redraw__14tFEApplication(FEApp);
    }
    Redraw__14tFEApplication(FEApp);
  }
  bVar1 = false;
  sVar12 = 0;
  iVar10 = 0x2c;
  nomessage = (void *)0x0;
  if (WithDialogs != (void *)0x0) {
    iVar10 = 0;
  }
  iVar11 = 0x28d;
  local_30 = (uint)local_38 << 0x10;
LAB_80034fa8:
  iVar10 = iVar10 + 1;
  MakeWayForMemoryCard__Fv();
  card = (int)(short)cardnum;
  Init_MemcardFile__FR12MCRDFILE_defsb(&MStack104,cardnum,&DAT_00000001);
  while( true ) {
    iVar4 = MCRD_handlecardevents(card);
    iVar8 = local_30;
    if (iVar4 != 0x15) break;
    VSync(0);
  }
  MStack104.flags = 0;
  iVar4 = local_30 >> 0x10;
  local_2c = iVar4 * 4;
  MStack104.pData = auStack5808;
switchD_80035054_caseD_4:
  if (bVar1) goto LAB_80035238;
  iVar5 = MCRD_handlecardevents(card);
  systemtask(0);
  VSync(0);
  switch(iVar5) {
  case 2:
  case 3:
  case 7:
  case 10:
  case 0xb:
  case 0x10:
  case 0x17:
    pCVar7 = MCRD_getcard(local_2c + 1);
    Hide__11tDialogBase((tDialogBase *)
                        &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
    if (pCVar7->status == -2) {
      iVar11 = 0x29f;
      sVar12 = 2;
    }
    else {
      sVar12 = 1;
      if (pCVar7->status == -1) {
        sVar12 = 3;
        iVar11 = 0x32b;
      }
      else {
        iVar11 = 0x329;
      }
    }
    break;
  default:
    goto switchD_80035054_caseD_4;
  case 0xf:
    pvVar6 = VerifySuccessfulRead__FP12tMemCardData((tMemCardData *)auStack5808);
    if (pvVar6 != (void *)0x0) {
      sVar12 = 0;
      if (PinkSlips == (void *)0x0) {
        if (iVar4 == 0) {
          blockmove((undefined4 *)(auStack5808 + 8),(undefined4 *)&frontEnd,0x450);
          LoadTournament__18tTournamentManagerR15tSaveTournament
                    (&tournamentManager,(tSaveTournament *)(auStack5808 + 0x548));
          LoadTracks__13tTrackManagerR14tSaveTrackInfo
                    (&trackManager,(tSaveTrackInfo *)(auStack5808 + 0x538));
          blockmove((undefined4 *)(auStack5808 + 0x5f8),(undefined4 *)Stats_gTrackRecords,0xe9c);
          FECheat_LoadBonus__FRUl((ulong *)(auStack5808 + 4));
        }
        else {
          sprintf(frontEnd.playerNameList + iVar4 * 8,auStack5808 + 0x36c);
        }
        LoadCars__11tCarManagerR12tSaveCarInfos
                  (&carManager,(tSaveCarInfo *)(auStack5808 + 0x458),(short)((uint)local_30 >> 0x10)
                  );
      }
      else {
        frontEnd.gPinkSlipsNoCheat[iVar4] = local_21c;
        LoadPinkSlipsCars__11tCarManagerR12tSaveCarInfos
                  (&carManager,(tSaveCarInfo *)(auStack5808 + 0x458),(short)((uint)iVar8 >> 0x10));
        sprintf(frontEnd.playerNameList + iVar4 * 8,auStack5808 + 0x36c);
        frontEnd.pinkSlipsCash[iVar4] = local_1168;
      }
      iVar11 = 0x28d;
      SetPads__Fv();
      bVar1 = true;
      goto switchD_80035054_caseD_4;
    }
    sVar12 = 1;
    if (WithDialogs != (void *)0x0) {
      bVar1 = true;
      if (nomessage == (void *)0x0) {
        Hide__11tDialogBase((tDialogBase *)
                            &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
        Hide__11tDialogBase((tDialogBase *)FEApp->waitingForOtherPlayer);
        ptVar2 = FEApp;
        pcVar9 = TextSys_Word__Fi(iVar4 + 0x329);
        ptVar3 = FEApp;
        *(char **)&(ptVar2->MemCardDialog).tDialogMessageString.tDialogBase.fFullyOpen = pcVar9;
        Display__11tDialogBase((tDialogBase *)ptVar3->waitingForOtherPlayer);
        bVar1 = true;
      }
      goto switchD_80035054_caseD_4;
    }
    break;
  case 0x16:
    MCRD_loadfile(card,&MStack104,0);
    goto switchD_80035054_caseD_4;
  }
  bVar1 = true;
  goto switchD_80035054_caseD_4;
LAB_80035238:
  while (iVar8 = MCRD_handlecardevents(card), iVar8 != 0x16) {
    VSync(0);
  }
  BringThatBeatBack__Fv();
  if ((iVar11 == 0x28d) || (2 < iVar10)) {
    if ((WithDialogs != (void *)0x0) && (nomessage == (void *)0x0)) {
      Hide__11tDialogBase((tDialogBase *)
                          &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
      Hide__11tDialogBase((tDialogBase *)FEApp->waitingForOtherPlayer);
      ptVar2 = FEApp;
      pcVar9 = TextSys_Word__Fi(iVar11 + (int)(short)local_38);
      ptVar3 = FEApp;
      *(char **)&(ptVar2->MemCardDialog).tDialogMessageString.tDialogBase.fFullyOpen = pcVar9;
      Display__11tDialogBase((tDialogBase *)ptVar3->waitingForOtherPlayer);
      while ((FEApp->MemCardDialog).tDialogMessageString.tDialogBase.timeOutTicks != 1) {
        Redraw__14tFEApplication(FEApp);
      }
      Redraw__14tFEApplication(FEApp);
    }
    Front_ResetPSXController__Fii
              ((int)(short)local_38,(uint)(byte)frontEnd.controlConfig[(int)(short)local_38]);
    if (PinkSlips == (void *)0x0) {
      if (frontEnd.raceType == '\x06') {
        frontEnd.raceType = '\0';
      }
      gMasterSFXLevel = ZEXT14((byte)frontEnd.sfxVolume);
    }
    if ((WithDialogs != (void *)0x0) || (PinkSlips != (void *)0x0)) {
      Hide__11tDialogBase((tDialogBase *)auStack256);
    }
    if (WithDialogs != (void *)0x0) {
      Redraw__14tFEApplication(FEApp);
    }
    CURRENTLYUSINGMEMCARD = (void *)0x0;
    ___7tScreen((tScreen *)auStack256,2);
    return sVar12;
  }
  goto LAB_80034fa8;
}



// decompiled code
// original method signature: 
// enum PinkSlipsErrorCode /*$ra*/ SavePinkSlipsCars__Fss(short player /*$fp*/, short withoutCarInGarageNumber /*stack -56*/)
 // line 818, offset 0x800353f0
	/* begin block 1 */
		// Start line: 819
		// Start offset: 0x800353F0
		// Variables:
	// 		struct tMemCardData memCardData; // stack offset -5720
	// 		char memorycardbuffer[256]; // stack offset -424
	// 		char *shapeFile; // $s7
	// 		char shapeFileName[64]; // stack offset -168
	// 		short cardNum; // stack offset -48
	// 		struct MCRDFILE_def memCardFile; // stack offset -104
	// 		void * finished; // $s3
	// 		void * finishedsave; // $s5
	// 		enum PinkSlipsErrorCode result; // $s2
	// 		int memCardResult; // $s0
	// 		int event; // $s0

		/* begin block 1.1 */
			// Start line: 862
			// Start offset: 0x800354E8

			/* begin block 1.1.1 */
				// Start line: 864
				// Start offset: 0x800354F0

				/* begin block 1.1.1.1 */
					// Start line: 868
					// Start offset: 0x80035538

					/* begin block 1.1.1.1.1 */
						// Start line: 877
						// Start offset: 0x80035550

						/* begin block 1.1.1.1.1.1 */
							// Start line: 878
							// Start offset: 0x80035560

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 931
								// Start offset: 0x80035600

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 933
									// Start offset: 0x80035608

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 938
										// Start offset: 0x80035648

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 940
											// Start offset: 0x80035648

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 940
												// Start offset: 0x80035648

												/* begin block 1.1.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 940
													// Start offset: 0x80035648
												/* end block 1.1.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x80035648
												// End Line: 940
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x80035648
											// End Line: 940
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x80035658
										// End Line: 945

										/* begin block 1.1.1.1.1.1.1.1.1.2 */
											// Start line: 971
											// Start offset: 0x80035674
										/* end block 1.1.1.1.1.1.1.1.1.2 */
										// End offset: 0x800356B0
										// End Line: 986
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800356B0
									// End Line: 989
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800356B0
								// End Line: 989
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800356B0
							// End Line: 989
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800356B8
						// End Line: 996
					/* end block 1.1.1.1.1 */
					// End offset: 0x800356B8
					// End Line: 1008

					/* begin block 1.1.1.1.2 */
						// Start line: 1016
						// Start offset: 0x800356C0
					/* end block 1.1.1.1.2 */
					// End offset: 0x800356F4
					// End Line: 1032
				/* end block 1.1.1.1 */
				// End offset: 0x800356F4
				// End Line: 1042
			/* end block 1.1.1 */
			// End offset: 0x800356F4
			// End Line: 1042
		/* end block 1.1 */
		// End offset: 0x800356F4
		// End Line: 1042
	/* end block 1 */
	// End offset: 0x8003572C
	// End Line: 1062

	/* begin block 2 */
		// Start line: 1799
	/* end block 2 */
	// End Line: 1800

	/* begin block 3 */
		// Start line: 1805
	/* end block 3 */
	// End Line: 1806

	/* begin block 4 */
		// Start line: 1805
	/* end block 4 */
	// End Line: 1806

PinkSlipsErrorCode SavePinkSlipsCars__Fss(short player,short withoutCarInGarageNumber)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  PinkSlipsErrorCode PVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  CARDINFO_def *pCVar9;
  int card;
  PinkSlipsErrorCode PVar10;
  PinkSlipsErrorCode PVar11;
  tMemCardData tStack5720;
  char acStack168 [64];
  MCRDFILE_def MStack104;
  short local_38;
  short local_30;
  
  local_38 = withoutCarInGarageNumber;
  MakeWayForMemoryCard__Fv();
  CURRENTPLAYER = (int)player;
  iVar5 = CURRENTPLAYER * 4 + 1;
  PVar11 = 0;
  bVar1 = false;
  local_30 = (short)iVar5;
  iVar5 = iVar5 * 0x10000;
  CURRENTLYUSINGMEMCARD = &DAT_00000001;
  nomessage = (void *)0x0;
  sprintf(acStack168,s__szMem_psh_800116ec,PTR_801164e8);
  iVar6 = loadshapeadr(acStack168,0);
  Init_MemcardFile__FR12MCRDFILE_defsb(&MStack104,(short)((uint)iVar5 >> 0x10),&DAT_00000001);
  while (iVar7 = MCRD_handlecardevents(iVar5 >> 0x10), sVar2 = local_30, iVar7 == 0x15) {
    VSync(0);
  }
  iVar5 = (int)player;
  MStack104.pData = &tStack5720;
  MStack104.flags = 0;
  PVar4 = PinkSlipsNoError;
switchD_80035530_caseD_4:
  PVar10 = PVar4;
  sVar3 = local_30;
  if (PVar11 != PinkSlipsNoError) {
    while (iVar5 = MCRD_handlecardevents((int)sVar3), iVar5 != 0x16) {
      VSync(0);
    }
    purgememadr(iVar6);
    BringThatBeatBack__Fv();
    CURRENTLYUSINGMEMCARD = (void *)0x0;
    return PVar10;
  }
  card = (int)sVar2;
  iVar7 = MCRD_handlecardevents(card);
  systemtask(0);
  VSync(0);
  PVar4 = PVar10;
  switch(iVar7) {
  case 2:
  case 0x10:
    pCVar9 = MCRD_getcard(iVar5 * 4 + 1);
    PVar10 = PinkSlipsError_NotFormatted;
    if ((pCVar9->status != -2) && (PVar10 = PinkSlipsError_LoadFailed, pCVar9->status == -1)) {
      PVar10 = PinkSlipsError_CardNotFound;
    }
    break;
  case 3:
  case 7:
  case 10:
  case 0xb:
  case 0x17:
    PVar11 = 1;
    PVar4 = PinkSlipsError_LoadFailed;
  default:
    goto switchD_80035530_caseD_4;
  case 0xf:
    pvVar8 = VerifySuccessfulRead__FP12tMemCardData(&tStack5720);
    if (pvVar8 == (void *)0x0) {
      PVar10 = PinkSlipsError_LoadFailed;
    }
    else {
      PVar11 = PinkSlipsError_NotOriginalCard;
      PVar4 = PVar11;
      if (frontEnd.gPinkSlipsNoCheat[iVar5] != tStack5720.pinkSlipsNoCheat)
      goto switchD_80035530_caseD_4;
      SavePinkSlipsCars__11tCarManagerR12tSaveCarInfoss
                (&carManager,&tStack5720.carInfo,player,local_38);
      while (iVar7 = MCRD_handlecardevents(card), iVar7 == 0x15) {
        VSync(0);
      }
      MStack104.flags = 0x200;
      MStack104.icon[0] = (_func_53 *)shapepointer(iVar6,0);
      MStack104.icon[1] = (_func_53 *)0x0;
      MStack104.icon[2] = (_func_53 *)0x0;
      ChecksumData__FP12tMemCardData(&tStack5720);
      while (!bVar1) {
        iVar7 = MCRD_handlecardevents(card);
        systemtask(0);
        VSync(0);
        switch(iVar7) {
        case 2:
        case 3:
        case 7:
        case 10:
        case 0xb:
        case 0xd:
        case 0x17:
          Hide__11tDialogBase((tDialogBase *)
                              &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
          pCVar9 = MCRD_getcard(iVar5 * 4 + 1);
          PVar10 = 6;
          if ((pCVar9->status != -3) && (PVar10 = 3, pCVar9->status == -1)) {
            PVar10 = 4;
          }
          bVar1 = true;
          break;
        case 0xc:
          bVar1 = true;
          PVar10 = 0;
          break;
        case 0x16:
          if (gMemCardInfo.bReady != 0) {
            MCRD_savefile(card,&MStack104);
          }
        }
      }
    }
    break;
  case 0x16:
    MCRD_loadfile(card,&MStack104,0);
    PVar4 = PVar10;
    goto switchD_80035530_caseD_4;
  }
  PVar11 = 1;
  PVar4 = PVar10;
  goto switchD_80035530_caseD_4;
}



// decompiled code
// original method signature: 
// enum PinkSlipsErrorCode /*$ra*/ SavePinkSlipsCarsWithErrorDialogs__Fsss(short player /*$a0*/, short WillLoseCar /*$fp*/, short withoutCarInGarageNumber /*$a2*/)
 // line 1090, offset 0x80035778
	/* begin block 1 */
		// Start line: 1091
		// Start offset: 0x80035778
		// Variables:
	// 		struct tDialogYesNo RetryCancelDialog; // stack offset -1520
	// 		struct tDialogNoInputMessage WillLoseCarMessage; // stack offset -1352
	// 		char string[500]; // stack offset -1200
	// 		char string2[500]; // stack offset -696
	// 		enum PinkSlipsErrorCode err; // $s2
	// 		int retry; // $s6

		/* begin block 1.1 */
			// Start line: 1091
			// Start offset: 0x80035778

			/* begin block 1.1.1 */
				// Start line: 1091
				// Start offset: 0x80035778

				/* begin block 1.1.1.1 */
					// Start line: 1091
					// Start offset: 0x80035778

					/* begin block 1.1.1.1.1 */
						// Start line: 1091
						// Start offset: 0x80035778
					/* end block 1.1.1.1.1 */
					// End offset: 0x80035778
					// End Line: 1091
				/* end block 1.1.1.1 */
				// End offset: 0x80035778
				// End Line: 1091

				/* begin block 1.1.1.2 */
					// Start line: 1091
					// Start offset: 0x80035778
				/* end block 1.1.1.2 */
				// End offset: 0x80035778
				// End Line: 1091
			/* end block 1.1.1 */
			// End offset: 0x80035778
			// End Line: 1091
		/* end block 1.1 */
		// End offset: 0x80035778
		// End Line: 1091

		/* begin block 1.2 */
			// Start line: 1091
			// Start offset: 0x80035778
			// Variables:
		// 		struct tDialogYesNo *this; // $v1

			/* begin block 1.2.1 */
				// Start line: 1091
				// Start offset: 0x80035778
			/* end block 1.2.1 */
			// End offset: 0x80035778
			// End Line: 1091
		/* end block 1.2 */
		// End offset: 0x80035778
		// End Line: 1091

		/* begin block 1.3 */
			// Start line: 1091
			// Start offset: 0x80035778

			/* begin block 1.3.1 */
				// Start line: 1091
				// Start offset: 0x80035778
			/* end block 1.3.1 */
			// End offset: 0x80035778
			// End Line: 1091
		/* end block 1.3 */
		// End offset: 0x80035778
		// End Line: 1091

		/* begin block 1.4 */
			// Start line: 1107
			// Start offset: 0x80035870
			// Variables:
		// 		int count; // $s0
		// 		struct tDialogNoInputMessage WarningDialog; // stack offset -192

			/* begin block 1.4.1 */
				// Start line: 1110
				// Start offset: 0x8003587C

				/* begin block 1.4.1.1 */
					// Start line: 1110
					// Start offset: 0x8003587C

					/* begin block 1.4.1.1.1 */
						// Start line: 1110
						// Start offset: 0x8003587C
					/* end block 1.4.1.1.1 */
					// End offset: 0x8003587C
					// End Line: 1110
				/* end block 1.4.1.1 */
				// End offset: 0x8003587C
				// End Line: 1110
			/* end block 1.4.1 */
			// End offset: 0x80035898
			// End Line: 1111

			/* begin block 1.4.2 */
				// Start line: 1112
				// Start offset: 0x800358A8

				/* begin block 1.4.2.1 */
					// Start line: 1112
					// Start offset: 0x800358A8

					/* begin block 1.4.2.1.1 */
						// Start line: 1112
						// Start offset: 0x800358A8

						/* begin block 1.4.2.1.1.1 */
							// Start line: 1112
							// Start offset: 0x800358A8
						/* end block 1.4.2.1.1.1 */
						// End offset: 0x800358A8
						// End Line: 1112
					/* end block 1.4.2.1.1 */
					// End offset: 0x800358A8
					// End Line: 1112

					/* begin block 1.4.2.1.2 */
						// Start line: 1112
						// Start offset: 0x800358A8
					/* end block 1.4.2.1.2 */
					// End offset: 0x800358A8
					// End Line: 1112
				/* end block 1.4.2.1 */
				// End offset: 0x800358A8
				// End Line: 1112
			/* end block 1.4.2 */
			// End offset: 0x800358A8
			// End Line: 1112

			/* begin block 1.4.3 */
				// Start line: 1112
				// Start offset: 0x800358A8

				/* begin block 1.4.3.1 */
					// Start line: 1112
					// Start offset: 0x800358A8
				/* end block 1.4.3.1 */
				// End offset: 0x800358A8
				// End Line: 1112
			/* end block 1.4.3 */
			// End offset: 0x800358A8
			// End Line: 1112

			/* begin block 1.4.4 */
				// Start line: 1112
				// Start offset: 0x800358A8

				/* begin block 1.4.4.1 */
					// Start line: 1112
					// Start offset: 0x800358A8
				/* end block 1.4.4.1 */
				// End offset: 0x800358A8
				// End Line: 1112
			/* end block 1.4.4 */
			// End offset: 0x800358A8
			// End Line: 1112

			/* begin block 1.4.5 */
				// Start line: 1120
				// Start offset: 0x8003594C

				/* begin block 1.4.5.1 */
					// Start line: 1120
					// Start offset: 0x8003594C

					/* begin block 1.4.5.1.1 */
						// Start line: 1120
						// Start offset: 0x8003594C
					/* end block 1.4.5.1.1 */
					// End offset: 0x8003594C
					// End Line: 1120
				/* end block 1.4.5.1 */
				// End offset: 0x8003594C
				// End Line: 1120
			/* end block 1.4.5 */
			// End offset: 0x80035960
			// End Line: 1121

			/* begin block 1.4.6 */
				// Start line: 1136
				// Start offset: 0x800359B4

				/* begin block 1.4.6.1 */
					// Start line: 1141
					// Start offset: 0x800359D0

					/* begin block 1.4.6.1.1 */
						// Start line: 1142
						// Start offset: 0x800359D0

						/* begin block 1.4.6.1.1.1 */
							// Start line: 1147
							// Start offset: 0x80035A14

							/* begin block 1.4.6.1.1.1.1 */
								// Start line: 1148
								// Start offset: 0x80035A20

								/* begin block 1.4.6.1.1.1.1.1 */
									// Start line: 1148
									// Start offset: 0x80035A20
								/* end block 1.4.6.1.1.1.1.1 */
								// End offset: 0x80035A20
								// End Line: 1148
							/* end block 1.4.6.1.1.1.1 */
							// End offset: 0x80035A20
							// End Line: 1148

							/* begin block 1.4.6.1.1.1.2 */
								// Start line: 1148
								// Start offset: 0x80035A20

								/* begin block 1.4.6.1.1.1.2.1 */
									// Start line: 1148
									// Start offset: 0x80035A20
								/* end block 1.4.6.1.1.1.2.1 */
								// End offset: 0x80035A20
								// End Line: 1148
							/* end block 1.4.6.1.1.1.2 */
							// End offset: 0x80035A20
							// End Line: 1148
						/* end block 1.4.6.1.1.1 */
						// End offset: 0x80035A60
						// End Line: 1151
					/* end block 1.4.6.1.1 */
					// End offset: 0x80035A60
					// End Line: 1151

					/* begin block 1.4.6.1.2 */
						// Start line: 1151
						// Start offset: 0x80035A60
						// Variables:
					// 		struct tDialogMessageString *this; // $a0

						/* begin block 1.4.6.1.2.1 */
							// Start line: 1151
							// Start offset: 0x80035A60
						/* end block 1.4.6.1.2.1 */
						// End offset: 0x80035A60
						// End Line: 1151
					/* end block 1.4.6.1.2 */
					// End offset: 0x80035A60
					// End Line: 1151
				/* end block 1.4.6.1 */
				// End offset: 0x80035A80
				// End Line: 1158
			/* end block 1.4.6 */
			// End offset: 0x80035A80
			// End Line: 1158

			/* begin block 1.4.7 */
				// Start line: 1091
				// Start offset: 0x80035A80

				/* begin block 1.4.7.1 */
					// Start line: 1091
					// Start offset: 0x80035A80

					/* begin block 1.4.7.1.1 */
						// Start line: 1091
						// Start offset: 0x80035A80
					/* end block 1.4.7.1.1 */
					// End offset: 0x80035A80
					// End Line: 1091
				/* end block 1.4.7.1 */
				// End offset: 0x80035A80
				// End Line: 1091
			/* end block 1.4.7 */
			// End offset: 0x80035A80
			// End Line: 1091
		/* end block 1.4 */
		// End offset: 0x80035A80
		// End Line: 1091

		/* begin block 1.5 */
			// Start line: 1163
			// Start offset: 0x80035A9C

			/* begin block 1.5.1 */
				// Start line: 1091
				// Start offset: 0x80035A9C

				/* begin block 1.5.1.1 */
					// Start line: 1091
					// Start offset: 0x80035A9C

					/* begin block 1.5.1.1.1 */
						// Start line: 1091
						// Start offset: 0x80035A9C
					/* end block 1.5.1.1.1 */
					// End offset: 0x80035A9C
					// End Line: 1091
				/* end block 1.5.1.1 */
				// End offset: 0x80035A9C
				// End Line: 1091
			/* end block 1.5.1 */
			// End offset: 0x80035A9C
			// End Line: 1091

			/* begin block 1.5.2 */
				// Start line: 1091
				// Start offset: 0x80035A9C

				/* begin block 1.5.2.1 */
					// Start line: 1091
					// Start offset: 0x80035A9C

					/* begin block 1.5.2.1.1 */
						// Start line: 1091
						// Start offset: 0x80035A9C

						/* begin block 1.5.2.1.1.1 */
							// Start line: 1091
							// Start offset: 0x80035A9C
						/* end block 1.5.2.1.1.1 */
						// End offset: 0x80035A9C
						// End Line: 1091
					/* end block 1.5.2.1.1 */
					// End offset: 0x80035A9C
					// End Line: 1091
				/* end block 1.5.2.1 */
				// End offset: 0x80035A9C
				// End Line: 1091
			/* end block 1.5.2 */
			// End offset: 0x80035A9C
			// End Line: 1091
		/* end block 1.5 */
		// End offset: 0x80035A9C
		// End Line: 1091
	/* end block 1 */
	// End offset: 0x80035A9C
	// End Line: 1091

	/* begin block 2 */
		// Start line: 2374
	/* end block 2 */
	// End Line: 2375

	/* begin block 3 */
		// Start line: 2395
	/* end block 3 */
	// End Line: 2396

	/* begin block 4 */
		// Start line: 2395
	/* end block 4 */
	// End Line: 2396

PinkSlipsErrorCode
SavePinkSlipsCarsWithErrorDialogs__Fsss
          (short player,short WillLoseCar,short withoutCarInGarageNumber)

{
  short sVar1;
  PinkSlipsErrorCode PVar2;
  char *__format;
  char *pcVar3;
  int wordnum;
  int player_00;
  undefined auStack1520 [100];
  short local_58c;
  undefined2 local_568;
  char *local_560;
  void *local_550;
  int local_54c;
  undefined auStack1352 [96];
  undefined *local_4e8;
  undefined2 local_4e4;
  undefined2 local_4e2;
  undefined2 local_4e0;
  undefined2 local_4de;
  undefined2 local_4dc;
  undefined2 local_4da;
  undefined4 local_4d8;
  undefined4 local_4d0;
  undefined2 local_4cc;
  undefined2 local_4ca;
  undefined2 local_4c8;
  undefined2 local_4c6;
  undefined4 local_4c4;
  undefined2 local_4c0;
  undefined4 local_4bc;
  char *local_4b8;
  undefined4 local_4b4;
  char acStack1200 [504];
  char acStack696 [504];
  undefined auStack192 [96];
  undefined *local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  undefined4 local_50;
  long local_48;
  undefined2 local_44;
  undefined2 local_42;
  short local_40;
  short local_3e;
  int local_3c;
  undefined2 local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  
  __12tDialogYesNo((tDialogYesNo *)auStack1520);
  __7tScreen((tScreen *)(auStack1520 + 0xa8));
  sVar1 = 0;
  player_00 = (int)player;
  local_4d8 = 0;
  local_4da = 0;
  local_4c6 = 0;
  local_4ca = 0;
  local_4cc = 0;
  local_4dc = 0;
  local_4de = 0;
  local_4e0 = 0;
  local_4e2 = 0;
  local_4c8 = 0x120;
  local_4e4 = 0xffff;
  local_4c0 = 0;
  local_4b4 = 0;
  local_4c4 = 0;
  local_4d0 = 0;
  local_4bc = 0x80;
  local_4e8 = &table;
  local_550 = (void *)0x291;
  local_54c = 0x292;
  local_568 = 1;
  local_58c = player;
  do {
    Display__11tDialogBase
              ((tDialogBase *)&(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
    while ((FEApp->NoInputMemCardDialog).tDialogMessageString.tDialogBase.startTicks != 1) {
      Redraw__14tFEApplication(FEApp);
    }
    wordnum = 0;
    Redraw__14tFEApplication(FEApp);
    __7tScreen((tScreen *)(tDialogBase *)auStack192);
    local_50 = 0;
    local_52 = 0;
    local_3e = 0;
    local_42 = 0;
    local_44 = 0;
    local_54 = 0;
    local_56 = 0;
    local_58 = 0;
    local_5a = 0;
    local_40 = 0x120;
    local_5c = 0xffff;
    local_38 = 0;
    local_2c = 0;
    local_3c = 0;
    local_48 = 0;
    local_34 = 0x80;
    local_60 = &table;
    local_30 = TextSys_Word__Fi(player_00 + 0x276);
    local_44 = 0;
    local_42 = 0x32;
    Display__11tDialogBase((tDialogBase *)auStack192);
    while (local_3c != 1) {
      Redraw__14tFEApplication(FEApp);
    }
    Redraw__14tFEApplication(FEApp);
    do {
      PVar2 = SavePinkSlipsCars__Fss(player,withoutCarInGarageNumber);
      if (PVar2 != PinkSlipsNoError) {
        timedwait(5);
      }
      wordnum = wordnum + 1;
    } while ((PVar2 != PinkSlipsNoError) && (wordnum < 3));
    Hide__11tDialogBase((tDialogBase *)auStack192);
    Redraw__14tFEApplication(FEApp);
    if (PVar2 != PinkSlipsNoError) {
      Hide__11tDialogBase((tDialogBase *)
                          &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
      __format = TextSys_Word__Fi(textSysMemCardFail_Index[PVar2] + player_00);
      sprintf(acStack1200,__format);
      if (WillLoseCar != 0) {
        wordnum = 0x298;
        if (WillLoseCar == 2) {
          wordnum = 0x299;
        }
        __format = TextSys_Word__Fi(wordnum);
        pcVar3 = PlayerName__Fi(player_00);
        sprintf(acStack696,__format,pcVar3);
        local_4cc = 0;
        local_4ca = 0xffc4;
        local_4b8 = acStack696;
        Display__11tDialogBase((tDialogBase *)(auStack1520 + 0xa8));
      }
      local_560 = acStack1200;
      sVar1 = Run__18tDialogInteractive((tDialogInteractive *)auStack1520);
      Hide__11tDialogBase((tDialogBase *)(auStack1520 + 0xa8));
    }
    ___7tScreen((tScreen *)auStack192,2);
  } while ((PVar2 != PinkSlipsNoError) && (sVar1 != 0));
  ___7tScreen((tScreen *)(auStack1520 + 0xa8),2);
  ___7tScreen((tScreen *)auStack1520,2);
  return PVar2;
}





