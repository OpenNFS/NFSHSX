#include "THISDUST.H"
#include "FEMENUDEFS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetOnePlayer__FR12tMenuCommand(struct tMenuCommand *command /*$a0*/)
 // line 145, offset 0x8002c0e0
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x8002C0E0
	/* end block 1 */
	// End offset: 0x8002C11C
	// End Line: 154

	/* begin block 2 */
		// Start line: 290
	/* end block 2 */
	// End Line: 291

	/* begin block 3 */
		// Start line: 290
	/* end block 3 */
	// End Line: 291

	/* begin block 4 */
		// Start line: 291
	/* end block 4 */
	// End Line: 292

	/* begin block 5 */
		// Start line: 291
	/* end block 5 */
	// End Line: 292

void MenuExtended_SetOnePlayer__FR12tMenuCommand(tMenuCommand *command)

{
  if (*(char *)((int)&(FEApp->helpPopup).numItems + 1) == '\x01') {
    command->type = kMenu_Command_None;
  }
  else {
    frontEnd.gameMode = '\0';
    SwapBackground__11tScreenMaini(screenMain,-1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetTwoPlayer__FR12tMenuCommand(struct tMenuCommand *command /*$a0*/)
 // line 158, offset 0x8002c12c
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x8002C12C
	/* end block 1 */
	// End offset: 0x8002C16C
	// End Line: 168

	/* begin block 2 */
		// Start line: 312
	/* end block 2 */
	// End Line: 313

	/* begin block 3 */
		// Start line: 317
	/* end block 3 */
	// End Line: 318

	/* begin block 4 */
		// Start line: 317
	/* end block 4 */
	// End Line: 318

	/* begin block 5 */
		// Start line: 318
	/* end block 5 */
	// End Line: 319

	/* begin block 6 */
		// Start line: 318
	/* end block 6 */
	// End Line: 319

void MenuExtended_SetTwoPlayer__FR12tMenuCommand(tMenuCommand *command)

{
  if ((char)gPadinfo.buf[3].data == '\0') {
    frontEnd.gameMode = '\x01';
    frontEnd.oppNumber = '\0';
    SwapBackground__11tScreenMaini(screenMain,-1);
  }
  else {
    command->type = kMenu_Command_None;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetTestDrive__FR12tMenuCommand()
 // line 172, offset 0x8002c17c
	/* begin block 1 */
		// Start line: 173
		// Start offset: 0x8002C17C
	/* end block 1 */
	// End offset: 0x8002C17C
	// End Line: 174

	/* begin block 2 */
		// Start line: 341
	/* end block 2 */
	// End Line: 342

	/* begin block 3 */
		// Start line: 346
	/* end block 3 */
	// End Line: 347

	/* begin block 4 */
		// Start line: 346
	/* end block 4 */
	// End Line: 347

	/* begin block 5 */
		// Start line: 347
	/* end block 5 */
	// End Line: 348

	/* begin block 6 */
		// Start line: 347
	/* end block 6 */
	// End Line: 348

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetTestDrive__FR12tMenuCommand(void)

{
  frontEnd.raceType = '\0';
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.carListType = '\0';
  frontEnd.oppNumber = '\0';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetSingleRace__FR12tMenuCommand()
 // line 180, offset 0x8002c198
	/* begin block 1 */
		// Start line: 181
		// Start offset: 0x8002C198
	/* end block 1 */
	// End offset: 0x8002C198
	// End Line: 181

	/* begin block 2 */
		// Start line: 358
	/* end block 2 */
	// End Line: 359

	/* begin block 3 */
		// Start line: 362
	/* end block 3 */
	// End Line: 363

	/* begin block 4 */
		// Start line: 362
	/* end block 4 */
	// End Line: 363

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetSingleRace__FR12tMenuCommand(void)

{
  frontEnd.carListType = '\x01';
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.raceType = '\0';
  SwapBackground__11tScreenMaini(screenMain,-1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetTournament__FR12tMenuCommand()
 // line 195, offset 0x8002c1d8
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x8002C1D8
	/* end block 1 */
	// End offset: 0x8002C1D8
	// End Line: 196

	/* begin block 2 */
		// Start line: 386
	/* end block 2 */
	// End Line: 387

	/* begin block 3 */
		// Start line: 386
	/* end block 3 */
	// End Line: 387

	/* begin block 4 */
		// Start line: 386
	/* end block 4 */
	// End Line: 387

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetTournament__FR12tMenuCommand(void)

{
  frontEnd.carListType = '\x01';
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.tier = '\0';
  frontEnd.raceType = '\x02';
  SwapBackground__11tScreenMaini(screenMain,-1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetSpecialEvent__FR12tMenuCommand()
 // line 204, offset 0x8002c220
	/* begin block 1 */
		// Start line: 205
		// Start offset: 0x8002C220
	/* end block 1 */
	// End offset: 0x8002C220
	// End Line: 205

	/* begin block 2 */
		// Start line: 403
	/* end block 2 */
	// End Line: 404

	/* begin block 3 */
		// Start line: 407
	/* end block 3 */
	// End Line: 408

	/* begin block 4 */
		// Start line: 407
	/* end block 4 */
	// End Line: 408

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetSpecialEvent__FR12tMenuCommand(void)

{
  frontEnd.carListType = '\x01';
  frontEnd.tier = '\x01';
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.raceType = '\x02';
  SwapBackground__11tScreenMaini(screenMain,-1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetSoloRace__FR12tMenuCommand()
 // line 213, offset 0x8002c268
	/* begin block 1 */
		// Start line: 214
		// Start offset: 0x8002C268
	/* end block 1 */
	// End offset: 0x8002C268
	// End Line: 215

	/* begin block 2 */
		// Start line: 424
	/* end block 2 */
	// End Line: 425

	/* begin block 3 */
		// Start line: 428
	/* end block 3 */
	// End Line: 429

	/* begin block 4 */
		// Start line: 428
	/* end block 4 */
	// End Line: 429

	/* begin block 5 */
		// Start line: 429
	/* end block 5 */
	// End Line: 430

	/* begin block 6 */
		// Start line: 429
	/* end block 6 */
	// End Line: 430

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetSoloRace__FR12tMenuCommand(void)

{
  frontEnd.raceType = '\0';
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.carListType = '\x01';
  frontEnd.oppNumber = '\0';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToTwoPlayerSingleRace__FR12tMenuCommand(struct tMenuCommand *command /*$s1*/)
 // line 221, offset 0x8002c288
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x8002C288
		// Variables:
	// 		struct tDialogYesNoTri YesNoDialog; // stack offset -184

		/* begin block 1.1 */
			// Start line: 222
			// Start offset: 0x8002C288
			// Variables:
		// 		struct tDialogYesNoTri *this; // $s0
		/* end block 1.1 */
		// End offset: 0x8002C288
		// End Line: 222

		/* begin block 1.2 */
			// Start line: 222
			// Start offset: 0x8002C288

			/* begin block 1.2.1 */
				// Start line: 226
				// Start offset: 0x8002C2D0

				/* begin block 1.2.1.1 */
					// Start line: 226
					// Start offset: 0x8002C2D0

					/* begin block 1.2.1.1.1 */
						// Start line: 226
						// Start offset: 0x8002C2D0
					/* end block 1.2.1.1.1 */
					// End offset: 0x8002C2D0
					// End Line: 226
				/* end block 1.2.1.1 */
				// End offset: 0x8002C2D0
				// End Line: 226

				/* begin block 1.2.1.2 */
					// Start line: 226
					// Start offset: 0x8002C2D0

					/* begin block 1.2.1.2.1 */
						// Start line: 226
						// Start offset: 0x8002C2D0
					/* end block 1.2.1.2.1 */
					// End offset: 0x8002C2D0
					// End Line: 226
				/* end block 1.2.1.2 */
				// End offset: 0x8002C2D0
				// End Line: 226
			/* end block 1.2.1 */
			// End offset: 0x8002C30C
			// End Line: 232
		/* end block 1.2 */
		// End offset: 0x8002C37C
		// End Line: 244

		/* begin block 1.3 */
			// Start line: 223
			// Start offset: 0x8002C37C

			/* begin block 1.3.1 */
				// Start line: 223
				// Start offset: 0x8002C37C

				/* begin block 1.3.1.1 */
					// Start line: 223
					// Start offset: 0x8002C37C

					/* begin block 1.3.1.1.1 */
						// Start line: 223
						// Start offset: 0x8002C37C

						/* begin block 1.3.1.1.1.1 */
							// Start line: 223
							// Start offset: 0x8002C37C
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x8002C37C
						// End Line: 223
					/* end block 1.3.1.1.1 */
					// End offset: 0x8002C37C
					// End Line: 223
				/* end block 1.3.1.1 */
				// End offset: 0x8002C37C
				// End Line: 223
			/* end block 1.3.1 */
			// End offset: 0x8002C37C
			// End Line: 223
		/* end block 1.3 */
		// End offset: 0x8002C37C
		// End Line: 223
	/* end block 1 */
	// End offset: 0x8002C37C
	// End Line: 223

	/* begin block 2 */
		// Start line: 443
	/* end block 2 */
	// End Line: 444

	/* begin block 3 */
		// Start line: 447
	/* end block 3 */
	// End Line: 448

	/* begin block 4 */
		// Start line: 447
	/* end block 4 */
	// End Line: 448

/* WARNING: Type propagation algorithm not settling */

void MenuExtended_GoToTwoPlayerSingleRace__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  tScreenCarSelect *this;
  ushort uVar2;
  short sVar3;
  undefined auStack184 [96];
  undefined *local_58;
  undefined2 local_30;
  char *local_28;
  void *local_18;
  int local_14;
  
  __12tDialogYesNo((tDialogYesNo *)auStack184);
  local_58 = &table;
  uVar2 = GetNumOwnedCars__11tCarManagers(&carManager,0);
  if ((int)((uint)uVar2 << 0x10) < 1) {
    local_28 = TextSys_Word__Fi(0x42);
    local_18 = (void *)0x321;
    local_14 = 0x322;
    local_30 = 0;
    sVar3 = Run__18tDialogInteractive((tDialogInteractive *)(tDialogYesNo *)auStack184);
    ptVar1 = menuDefs;
    if (sVar3 == 1) {
      frontEnd.raceType = '\0';
      command->type = kMenu_Command_GoToMenu;
      Decrement__16tListIteratorCar7tPlayer
                ((tListIteratorCar *)&(ptVar1->menuPlayerTwoGarage).tMenuNFS4.tMenu.fNeverAnyEnabled
                 ,~kPlayerOne);
      Increment__16tListIteratorCar7tPlayer
                ((tListIteratorCar *)
                 &(menuDefs->menuPlayerTwoGarage).tMenuNFS4.tMenu.fNeverAnyEnabled,~kPlayerOne);
      this = screenCarSelect;
      command->nextMenu =
           (tMenu *)((menuDefs->itemPinkSlipCarP1).tMenuItemLeftRightChoice.tMenuItemInteractive.
                     tMenuItem._vf + 4);
      SetState__16tScreenCarSelecti(this,2);
    }
  }
  else {
    MenuExtended_SetSoloRace__FR12tMenuCommand();
    ptVar1 = menuDefs;
    command->type = kMenu_Command_GoToMenu;
    command->nextMenu = (tMenu *)((ptVar1->menuPinkSlipsBestOfThree).tMenu.fItemList + 2);
  }
  ___7tScreen((tScreen *)auStack184,2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetDuelRace__FR12tMenuCommand()
 // line 247, offset 0x8002c39c
	/* begin block 1 */
		// Start line: 248
		// Start offset: 0x8002C39C
	/* end block 1 */
	// End offset: 0x8002C39C
	// End Line: 248

	/* begin block 2 */
		// Start line: 524
	/* end block 2 */
	// End Line: 525

	/* begin block 3 */
		// Start line: 526
	/* end block 3 */
	// End Line: 527

	/* begin block 4 */
		// Start line: 526
	/* end block 4 */
	// End Line: 527

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetDuelRace__FR12tMenuCommand(void)

{
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.raceType = '\0';
  frontEnd.oppNumber = '\x01';
  SwapBackground__11tScreenMaini(screenMain,-1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetFullGrid__FR12tMenuCommand()
 // line 255, offset 0x8002c3dc
	/* begin block 1 */
		// Start line: 256
		// Start offset: 0x8002C3DC
	/* end block 1 */
	// End offset: 0x8002C3DC
	// End Line: 256

	/* begin block 2 */
		// Start line: 541
	/* end block 2 */
	// End Line: 542

	/* begin block 3 */
		// Start line: 545
	/* end block 3 */
	// End Line: 546

	/* begin block 4 */
		// Start line: 545
	/* end block 4 */
	// End Line: 546

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetFullGrid__FR12tMenuCommand(void)

{
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.raceType = '\0';
  frontEnd.oppNumber = '\x02';
  SwapBackground__11tScreenMaini(screenMain,-1);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AskTheUserToSaveTheGame__Fv()
 // line 274, offset 0x8002c41c
	/* begin block 1 */
		// Start line: 275
		// Start offset: 0x8002C41C

		/* begin block 1.1 */
			// Start line: 275
			// Start offset: 0x8002C41C

			/* begin block 1.1.1 */
				// Start line: 276
				// Start offset: 0x8002C438
				// Variables:
			// 		struct tDialogYesNo YesNoDialog; // stack offset -176
			// 		int answer; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 276
					// Start offset: 0x8002C438
					// Variables:
				// 		struct tDialogMessageString *this; // $s0

					/* begin block 1.1.1.1.1 */
						// Start line: 276
						// Start offset: 0x8002C438
					/* end block 1.1.1.1.1 */
					// End offset: 0x8002C438
					// End Line: 276
				/* end block 1.1.1.1 */
				// End offset: 0x8002C438
				// End Line: 276

				/* begin block 1.1.1.2 */
					// Start line: 276
					// Start offset: 0x8002C438

					/* begin block 1.1.1.2.1 */
						// Start line: 276
						// Start offset: 0x8002C438
					/* end block 1.1.1.2.1 */
					// End offset: 0x8002C438
					// End Line: 276
				/* end block 1.1.1.2 */
				// End offset: 0x8002C438
				// End Line: 276

				/* begin block 1.1.1.3 */
					// Start line: 276
					// Start offset: 0x8002C438

					/* begin block 1.1.1.3.1 */
						// Start line: 276
						// Start offset: 0x8002C438

						/* begin block 1.1.1.3.1.1 */
							// Start line: 276
							// Start offset: 0x8002C438

							/* begin block 1.1.1.3.1.1.1 */
								// Start line: 276
								// Start offset: 0x8002C438

								/* begin block 1.1.1.3.1.1.1.1 */
									// Start line: 276
									// Start offset: 0x8002C438
								/* end block 1.1.1.3.1.1.1.1 */
								// End offset: 0x8002C438
								// End Line: 276
							/* end block 1.1.1.3.1.1.1 */
							// End offset: 0x8002C438
							// End Line: 276
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x8002C438
						// End Line: 276
					/* end block 1.1.1.3.1 */
					// End offset: 0x8002C438
					// End Line: 276
				/* end block 1.1.1.3 */
				// End offset: 0x8002C438
				// End Line: 276
			/* end block 1.1.1 */
			// End offset: 0x8002C438
			// End Line: 291
		/* end block 1.1 */
		// End offset: 0x8002C438
		// End Line: 291
	/* end block 1 */
	// End offset: 0x8002C484
	// End Line: 291

	/* begin block 2 */
		// Start line: 543
	/* end block 2 */
	// End Line: 544

	/* begin block 3 */
		// Start line: 576
	/* end block 3 */
	// End Line: 577

	/* begin block 4 */
		// Start line: 576
	/* end block 4 */
	// End Line: 577

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AskTheUserToSaveTheGame__Fv(void)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  undefined auStack176 [136];
  undefined2 local_28;
  char *local_20;
  void *local_10;
  int local_c;
  
  puVar2 = (undefined *)FECheat_IsTheUserACryBabyCheater__Fv();
  iVar3 = 0;
  if (puVar2 != &DAT_00000001) {
    __12tDialogYesNo((tDialogYesNo *)auStack176);
    local_20 = TextSys_Word__Fi(0x331);
    local_10 = (void *)0x321;
    local_c = 0x322;
    local_28 = 0;
    sVar1 = Run__18tDialogInteractive((tDialogInteractive *)auStack176);
    iVar3 = (int)sVar1;
    ___7tScreen((tScreen *)(tDialogInteractive *)auStack176,2);
  }
  return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_TransitionFromPostGameToMainMenu__FR12tMenuCommand(struct tMenuCommand *command /*$a0*/)
 // line 295, offset 0x8002c494
	/* begin block 1 */
		// Start line: 296
		// Start offset: 0x8002C494
	/* end block 1 */
	// End offset: 0x8002C494
	// End Line: 297

	/* begin block 2 */
		// Start line: 625
	/* end block 2 */
	// End Line: 626

	/* begin block 3 */
		// Start line: 625
	/* end block 3 */
	// End Line: 626

	/* begin block 4 */
		// Start line: 630
	/* end block 4 */
	// End Line: 631

	/* begin block 5 */
		// Start line: 630
	/* end block 5 */
	// End Line: 631

	/* begin block 6 */
		// Start line: 631
	/* end block 6 */
	// End Line: 632

	/* begin block 7 */
		// Start line: 631
	/* end block 7 */
	// End Line: 632

void MenuExtended_TransitionFromPostGameToMainMenu__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  
  ptVar1 = menuDefs;
  command->type = kMenu_Command_GoToMenuOneWay;
  command->nextMenu =
       (tMenu *)&(ptVar1->itemMainOptions).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
                 fNewMenu;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_TransitionFromPostGameToMainMenuAndSaveGame__FR12tMenuCommand(struct tMenuCommand *command /*$s0*/)
 // line 301, offset 0x8002c4b0
	/* begin block 1 */
		// Start line: 302
		// Start offset: 0x8002C4B0
	/* end block 1 */
	// End offset: 0x8002C4EC
	// End Line: 309

	/* begin block 2 */
		// Start line: 639
	/* end block 2 */
	// End Line: 640

	/* begin block 3 */
		// Start line: 639
	/* end block 3 */
	// End Line: 640

	/* begin block 4 */
		// Start line: 643
	/* end block 4 */
	// End Line: 644

	/* begin block 5 */
		// Start line: 643
	/* end block 5 */
	// End Line: 644

void MenuExtended_TransitionFromPostGameToMainMenuAndSaveGame__FR12tMenuCommand
               (tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  int iVar2;
  
  iVar2 = AskTheUserToSaveTheGame__Fv();
  ptVar1 = menuDefs;
  if (iVar2 == 0) {
    MenuExtended_TransitionFromPostGameToMainMenu__FR12tMenuCommand(command);
  }
  else {
    command->type = kMenu_Command_GoToMenuOneWay;
    command->nextMenu = (tMenu *)&(ptVar1->menuPinkSlipStandings).fTransitionVal;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToCarSelect__FR12tMenuCommand(struct tMenuCommand *command /*$s2*/)
 // line 313, offset 0x8002c4fc
	/* begin block 1 */
		// Start line: 314
		// Start offset: 0x8002C4FC
		// Variables:
	// 		struct tTrackInformation trackInfo; // stack offset -64

		/* begin block 1.1 */
			// Start line: 314
			// Start offset: 0x8002C4FC
			// Variables:
		// 		struct tFEApplication *this; // $v1

			/* begin block 1.1.1 */
				// Start line: 314
				// Start offset: 0x8002C4FC
			/* end block 1.1.1 */
			// End offset: 0x8002C4FC
			// End Line: 314
		/* end block 1.1 */
		// End offset: 0x8002C4FC
		// End Line: 314

		/* begin block 1.2 */
			// Start line: 314
			// Start offset: 0x8002C4FC

			/* begin block 1.2.1 */
				// Start line: 321
				// Start offset: 0x8002C554

				/* begin block 1.2.1.1 */
					// Start line: 321
					// Start offset: 0x8002C554

					/* begin block 1.2.1.1.1 */
						// Start line: 321
						// Start offset: 0x8002C554
					/* end block 1.2.1.1.1 */
					// End offset: 0x8002C554
					// End Line: 321
				/* end block 1.2.1.1 */
				// End offset: 0x8002C554
				// End Line: 321
			/* end block 1.2.1 */
			// End offset: 0x8002C570
			// End Line: 324
		/* end block 1.2 */
		// End offset: 0x8002C570
		// End Line: 324

		/* begin block 1.3 */
			// Start line: 363
			// Start offset: 0x8002C680

			/* begin block 1.3.1 */
				// Start line: 364
				// Start offset: 0x8002C6A8

				/* begin block 1.3.1.1 */
					// Start line: 366
					// Start offset: 0x8002C6A8

					/* begin block 1.3.1.1.1 */
						// Start line: 367
						// Start offset: 0x8002C6C8

						/* begin block 1.3.1.1.1.1 */
							// Start line: 367
							// Start offset: 0x8002C6C8

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 367
								// Start offset: 0x8002C6C8
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x8002C6C8
							// End Line: 367
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x8002C6C8
						// End Line: 367
					/* end block 1.3.1.1.1 */
					// End offset: 0x8002C6C8
					// End Line: 367

					/* begin block 1.3.1.1.2 */
						// Start line: 368
						// Start offset: 0x8002C6D8

						/* begin block 1.3.1.1.2.1 */
							// Start line: 368
							// Start offset: 0x8002C6D8

							/* begin block 1.3.1.1.2.1.1 */
								// Start line: 368
								// Start offset: 0x8002C6D8
							/* end block 1.3.1.1.2.1.1 */
							// End offset: 0x8002C6D8
							// End Line: 368
						/* end block 1.3.1.1.2.1 */
						// End offset: 0x8002C6D8
						// End Line: 368
					/* end block 1.3.1.1.2 */
					// End offset: 0x8002C6D8
					// End Line: 368
				/* end block 1.3.1.1 */
				// End offset: 0x8002C6D8
				// End Line: 368

				/* begin block 1.3.1.2 */
					// Start line: 369
					// Start offset: 0x8002C6E4

					/* begin block 1.3.1.2.1 */
						// Start line: 369
						// Start offset: 0x8002C6E4
					/* end block 1.3.1.2.1 */
					// End offset: 0x8002C6E4
					// End Line: 369
				/* end block 1.3.1.2 */
				// End offset: 0x8002C6E4
				// End Line: 369

				/* begin block 1.3.1.3 */
					// Start line: 376
					// Start offset: 0x8002C6F8

					/* begin block 1.3.1.3.1 */
						// Start line: 377
						// Start offset: 0x8002C708

						/* begin block 1.3.1.3.1.1 */
							// Start line: 377
							// Start offset: 0x8002C708

							/* begin block 1.3.1.3.1.1.1 */
								// Start line: 377
								// Start offset: 0x8002C708
							/* end block 1.3.1.3.1.1.1 */
							// End offset: 0x8002C708
							// End Line: 377
						/* end block 1.3.1.3.1.1 */
						// End offset: 0x8002C708
						// End Line: 377
					/* end block 1.3.1.3.1 */
					// End offset: 0x8002C708
					// End Line: 377

					/* begin block 1.3.1.3.2 */
						// Start line: 378
						// Start offset: 0x8002C718

						/* begin block 1.3.1.3.2.1 */
							// Start line: 378
							// Start offset: 0x8002C718

							/* begin block 1.3.1.3.2.1.1 */
								// Start line: 379
								// Start offset: 0x8002C728

								/* begin block 1.3.1.3.2.1.1.1 */
									// Start line: 379
									// Start offset: 0x8002C728

									/* begin block 1.3.1.3.2.1.1.1.1 */
										// Start line: 379
										// Start offset: 0x8002C728
									/* end block 1.3.1.3.2.1.1.1.1 */
									// End offset: 0x8002C728
									// End Line: 379
								/* end block 1.3.1.3.2.1.1.1 */
								// End offset: 0x8002C728
								// End Line: 379
							/* end block 1.3.1.3.2.1.1 */
							// End offset: 0x8002C728
							// End Line: 379

							/* begin block 1.3.1.3.2.1.2 */
								// Start line: 381
								// Start offset: 0x8002C738

								/* begin block 1.3.1.3.2.1.2.1 */
									// Start line: 381
									// Start offset: 0x8002C738

									/* begin block 1.3.1.3.2.1.2.1.1 */
										// Start line: 381
										// Start offset: 0x8002C738
									/* end block 1.3.1.3.2.1.2.1.1 */
									// End offset: 0x8002C744
									// End Line: 381
								/* end block 1.3.1.3.2.1.2.1 */
								// End offset: 0x8002C744
								// End Line: 381
							/* end block 1.3.1.3.2.1.2 */
							// End offset: 0x8002C744
							// End Line: 381
						/* end block 1.3.1.3.2.1 */
						// End offset: 0x8002C744
						// End Line: 381
					/* end block 1.3.1.3.2 */
					// End offset: 0x8002C744
					// End Line: 381
				/* end block 1.3.1.3 */
				// End offset: 0x8002C744
				// End Line: 381
			/* end block 1.3.1 */
			// End offset: 0x8002C744
			// End Line: 382
		/* end block 1.3 */
		// End offset: 0x8002C744
		// End Line: 382

		/* begin block 1.4 */
			// Start line: 413
			// Start offset: 0x8002C828

			/* begin block 1.4.1 */
				// Start line: 415
				// Start offset: 0x8002C84C

				/* begin block 1.4.1.1 */
					// Start line: 416
					// Start offset: 0x8002C84C

					/* begin block 1.4.1.1.1 */
						// Start line: 416
						// Start offset: 0x8002C84C
					/* end block 1.4.1.1.1 */
					// End offset: 0x8002C878
					// End Line: 417
				/* end block 1.4.1.1 */
				// End offset: 0x8002C878
				// End Line: 417
			/* end block 1.4.1 */
			// End offset: 0x8002C878
			// End Line: 419
		/* end block 1.4 */
		// End offset: 0x8002C878
		// End Line: 419
	/* end block 1 */
	// End offset: 0x8002C878
	// End Line: 419

	/* begin block 2 */
		// Start line: 663
	/* end block 2 */
	// End Line: 664

	/* begin block 3 */
		// Start line: 668
	/* end block 3 */
	// End Line: 669

	/* begin block 4 */
		// Start line: 668
	/* end block 4 */
	// End Line: 669

/* WARNING: Type propagation algorithm not settling */

void MenuExtended_GoToCarSelect__FR12tMenuCommand(tMenuCommand *command)

{
  tFEApplication *ptVar1;
  ushort uVar2;
  char *pcVar3;
  tMenu *ptVar4;
  tScreenCarSelectDuel *this;
  tListIteratorCar *this_00;
  uint state;
  tDialogMessageString *this_01;
  tTrackInformation tStack64;
  
  ptVar1 = FEApp;
  this_01 = &FEApp->messagePopup;
  GetTrack__13tTrackManagersR17tTrackInformation
            (&trackManager,(ushort)(byte)frontEnd.track[(uint)(byte)frontEnd.pinkSlipsTrackIndex],
             &tStack64);
  if (tStack64.fAvailable == '\0') {
    pcVar3 = TextSys_Word__Fi(0xeb);
    *(char **)&(ptVar1->messagePopup).tDialogBase.fFadeText = pcVar3;
    Display__11tDialogBase((tDialogBase *)this_01);
    return;
  }
  if (frontEnd.gameMode == '\x01') {
    command->type = kMenu_Command_GoToMenuTwoPlayer;
    if (frontEnd.raceType == '\x06') {
      command->nextMenu =
           (tMenu *)((menuDefs->itemCarP2).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
                     _vf + 4);
    }
    else {
      if (frontEnd.carListType == '\0') {
        command->nextMenu = (tMenu *)&menuDefs->iteratorOpponentCar;
      }
      else {
        command->nextMenu = (tMenu *)((menuDefs->menuHPDuelCarSelect).tMenu.fItemList + 8);
      }
    }
  }
  else {
    if (frontEnd.oppNumber == '\x01') {
      command->type = kMenu_Command_GoToMenu;
      if (frontEnd.raceType == '\x01') {
        ptVar4 = (tMenu *)(menuDefs->menuCarGarage).tMenu.fItemList;
      }
      else {
        ptVar4 = (tMenu *)&(menuDefs->itemGarageCar).fTransitionSpeed;
      }
      command->nextMenu = ptVar4;
      state = 7;
      this = screenCarSelectDuel;
    }
    else {
      command->type = kMenu_Command_GoToMenu;
      this = (tScreenCarSelectDuel *)screenCarSelect;
      if (frontEnd.carListType != '\0') {
        ptVar4 = (tMenu *)((menuDefs->menuTrackInfo).tMenu._vf + 10);
      }
      else {
        ptVar4 = (tMenu *)((menuDefs->menuTrackRecords).tMenu.fItemList + 1);
      }
      state = (uint)(frontEnd.carListType != '\0');
      command->nextMenu = ptVar4;
    }
    SetState__16tScreenCarSelecti((tScreenCarSelect *)this,state);
  }
  if (frontEnd.raceType == '\x01') {
    if ((frontEnd.oppNumber == '\0') ||
       ((uint)(byte)frontEnd.gameMode == (uint)(byte)frontEnd.raceType)) {
      (menuDefs->menuTrackOptions).tMenuNFS4.tMenu.fFlags = 9;
    }
    else {
      (menuDefs->menuTrackOptions).tMenuNFS4.tMenu.fFlags = (uint)(byte)frontEnd.raceType;
    }
  }
  else {
    if (frontEnd.raceType == '\x06') {
      (menuDefs->menuPlayerOneCarSelect).tMenuNFS4.fInItemTransition = (void *)0x20;
    }
    else {
      if (frontEnd.carListType == '\0') {
        (menuDefs->menuTrackOptions).tMenuNFS4.tMenu.fFlags = 1;
      }
      else {
        if (frontEnd.raceType == '\x02') {
          *(undefined4 *)
           (menuDefs->itemTrackInfoContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
           _vf = 0x40;
        }
        else {
          *(undefined4 *)
           (menuDefs->itemTrackInfoContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
           _vf = 2;
        }
      }
    }
  }
  if (frontEnd.carListType == '\0') {
    Decrement__16tListIteratorCar7tPlayer
              ((tListIteratorCar *)
               ((menuDefs->itemLocalSpeech).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
                _vf + 4),kPlayerOne);
    Increment__16tListIteratorCar7tPlayer
              ((tListIteratorCar *)
               ((menuDefs->itemLocalSpeech).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
                _vf + 4),kPlayerOne);
    Decrement__16tListIteratorCar7tPlayer
              ((tListIteratorCar *)
               ((menuDefs->itemLocalSpeech).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
                _vf + 4),kPlayerTwo);
    this_00 = (tListIteratorCar *)
              ((menuDefs->itemLocalSpeech).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
               _vf + 4);
LAB_8002c820:
    Increment__16tListIteratorCar7tPlayer(this_00,kPlayerTwo);
  }
  else {
    uVar2 = GetNumOwnedCars__11tCarManagers(&carManager,0);
    if ((int)((uint)uVar2 << 0x10) < 1) {
      if (frontEnd.raceType == '\x01') {
        if (frontEnd.oppNumber == '\x01') goto LAB_8002c83c;
        goto LAB_8002c7d8;
      }
    }
    else {
LAB_8002c7d8:
      Decrement__16tListIteratorCar7tPlayer
                ((tListIteratorCar *)
                 &(menuDefs->itemTrackInfoContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.
                  tMenuItem.fSelFade,kPlayerOne);
      Increment__16tListIteratorCar7tPlayer
                ((tListIteratorCar *)
                 &(menuDefs->itemTrackInfoContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.
                  tMenuItem.fSelFade,kPlayerOne);
      if (frontEnd.gameMode == '\x01') {
        Decrement__16tListIteratorCar7tPlayer
                  ((tListIteratorCar *)
                   &(menuDefs->itemTrackInfoContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.
                    tMenuItem.fSelFade,kPlayerTwo);
        this_00 = (tListIteratorCar *)
                  &(menuDefs->itemTrackInfoContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.
                   tMenuItem.fSelFade;
        goto LAB_8002c820;
      }
    }
  }
  if (frontEnd.oppNumber != '\x01') {
    return;
  }
LAB_8002c83c:
  if (frontEnd.raceType != '\x02') {
    Decrement__16tListIteratorCar7tPlayer
              ((tListIteratorCar *)
               &(menuDefs->itemShowcase).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
                fNewMenu,~kPlayerOne);
    Increment__16tListIteratorCar7tPlayer
              ((tListIteratorCar *)
               &(menuDefs->itemShowcase).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
                fNewMenu,~kPlayerOne);
    (menuDefs->itemShowcase).tMenuItemGoToMenuButton.fOnButtonPress = &DAT_00000001;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToDealer__FR12tMenuCommand(struct tMenuCommand *command /*$a2*/)
 // line 423, offset 0x8002c890
	/* begin block 1 */
		// Start line: 424
		// Start offset: 0x8002C890
	/* end block 1 */
	// End offset: 0x8002C890
	// End Line: 424

	/* begin block 2 */
		// Start line: 897
	/* end block 2 */
	// End Line: 898

	/* begin block 3 */
		// Start line: 900
	/* end block 3 */
	// End Line: 901

	/* begin block 4 */
		// Start line: 900
	/* end block 4 */
	// End Line: 901

/* WARNING: Type propagation algorithm not settling */

void MenuExtended_GoToDealer__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  tScreenCarSelect *this;
  
  this = screenCarSelect;
  ptVar1 = menuDefs;
  command->type = kMenu_Command_GoToMenu;
  command->nextMenu =
       (tMenu *)((ptVar1->itemPinkSlipCarP1).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem
                 ._vf + 4);
  SetState__16tScreenCarSelecti(this,2);
  Decrement__16tListIteratorCar7tPlayer
            ((tListIteratorCar *)&(menuDefs->menuPlayerTwoGarage).tMenuNFS4.tMenu.fNeverAnyEnabled,
             ~kPlayerOne);
  Increment__16tListIteratorCar7tPlayer
            ((tListIteratorCar *)&(menuDefs->menuPlayerTwoGarage).tMenuNFS4.tMenu.fNeverAnyEnabled,
             ~kPlayerOne);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToSeller__FR12tMenuCommand(struct tMenuCommand *command /*$a2*/)
 // line 432, offset 0x8002c8f8
	/* begin block 1 */
		// Start line: 433
		// Start offset: 0x8002C8F8
	/* end block 1 */
	// End offset: 0x8002C8F8
	// End Line: 433

	/* begin block 2 */
		// Start line: 920
	/* end block 2 */
	// End Line: 921

	/* begin block 3 */
		// Start line: 924
	/* end block 3 */
	// End Line: 925

	/* begin block 4 */
		// Start line: 924
	/* end block 4 */
	// End Line: 925

/* WARNING: Type propagation algorithm not settling */

void MenuExtended_GoToSeller__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  tScreenCarSelect *this;
  
  this = screenCarSelect;
  ptVar1 = menuDefs;
  command->type = kMenu_Command_GoToMenu;
  command->nextMenu =
       (tMenu *)((ptVar1->itemPinkSlipCarP2).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem
                 ._vf + 8);
  SetState__16tScreenCarSelecti(this,3);
  Decrement__16tListIteratorCar7tPlayer
            ((tListIteratorCar *)
             ((menuDefs->menuPlayerOnePinkSlipCarSelect).tMenuNFS4.tMenu._vf + 2),~kPlayerOne);
  Increment__16tListIteratorCar7tPlayer
            ((tListIteratorCar *)
             ((menuDefs->menuPlayerOnePinkSlipCarSelect).tMenuNFS4.tMenu._vf + 2),~kPlayerOne);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToUpgrades__FR12tMenuCommand(struct tMenuCommand *command /*$a0*/)
 // line 441, offset 0x8002c960
	/* begin block 1 */
		// Start line: 442
		// Start offset: 0x8002C960
	/* end block 1 */
	// End offset: 0x8002C960
	// End Line: 442

	/* begin block 2 */
		// Start line: 944
	/* end block 2 */
	// End Line: 945

	/* begin block 3 */
		// Start line: 948
	/* end block 3 */
	// End Line: 949

	/* begin block 4 */
		// Start line: 948
	/* end block 4 */
	// End Line: 949

void MenuExtended_GoToUpgrades__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  
  ptVar1 = menuDefs;
  command->type = kMenu_Command_GoToMenu;
  command->nextMenu = (tMenu *)&(ptVar1->menuGoToCarDealer).tMenu.fTitle;
  SetState__16tScreenCarSelecti(screenCarSelect,4);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GenericMenuSaveGame__Fi(int showdialog /*$s0*/)
 // line 448, offset 0x8002c9a0
	/* begin block 1 */
		// Start line: 449
		// Start offset: 0x8002C9A0
		// Variables:
	// 		void * successful; // $s0
	// 		void * uninitafter; // $s2

		/* begin block 1.1 */
			// Start line: 449
			// Start offset: 0x8002C9A0
			// Variables:
		// 		struct tScreenMemcard *this; // $v1

			/* begin block 1.1.1 */
				// Start line: 449
				// Start offset: 0x8002C9A0
			/* end block 1.1.1 */
			// End offset: 0x8002C9A0
			// End Line: 449
		/* end block 1.1 */
		// End offset: 0x8002C9A0
		// End Line: 449

		/* begin block 1.2 */
			// Start line: 449
			// Start offset: 0x8002C9A0

			/* begin block 1.2.1 */
				// Start line: 457
				// Start offset: 0x8002C9F0

				/* begin block 1.2.1.1 */
					// Start line: 457
					// Start offset: 0x8002C9F0
					// Variables:
				// 		struct tDialogMessageString *this; // $s0

					/* begin block 1.2.1.1.1 */
						// Start line: 457
						// Start offset: 0x8002C9F0
					/* end block 1.2.1.1.1 */
					// End offset: 0x8002C9F0
					// End Line: 457
				/* end block 1.2.1.1 */
				// End offset: 0x8002C9F0
				// End Line: 457

				/* begin block 1.2.1.2 */
					// Start line: 460
					// Start offset: 0x8002CA10

					/* begin block 1.2.1.2.1 */
						// Start line: 460
						// Start offset: 0x8002CA10

						/* begin block 1.2.1.2.1.1 */
							// Start line: 460
							// Start offset: 0x8002CA10
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x8002CA10
						// End Line: 460
					/* end block 1.2.1.2.1 */
					// End offset: 0x8002CA10
					// End Line: 460
				/* end block 1.2.1.2 */
				// End offset: 0x8002CA2C
				// End Line: 461
			/* end block 1.2.1 */
			// End offset: 0x8002CA68
			// End Line: 467
		/* end block 1.2 */
		// End offset: 0x8002CA68
		// End Line: 467

		/* begin block 1.3 */
			// Start line: 471
			// Start offset: 0x8002CA68
			// Variables:
		// 		struct tScreenMemcard *this; // $a0

			/* begin block 1.3.1 */
				// Start line: 471
				// Start offset: 0x8002CA68
			/* end block 1.3.1 */
			// End offset: 0x8002CA68
			// End Line: 471
		/* end block 1.3 */
		// End offset: 0x8002CA68
		// End Line: 471
	/* end block 1 */
	// End offset: 0x8002CA90
	// End Line: 477

	/* begin block 2 */
		// Start line: 960
	/* end block 2 */
	// End Line: 961

	/* begin block 3 */
		// Start line: 964
	/* end block 3 */
	// End Line: 965

	/* begin block 4 */
		// Start line: 964
	/* end block 4 */
	// End Line: 965

void * GenericMenuSaveGame__Fi(int showdialog)

{
  bool bVar1;
  tFEApplication *this;
  tFEApplication *ptVar2;
  char *pcVar3;
  void *pvVar4;
  
  this = FEApp;
  screenMemcard->fMemCardMessageTextSys = 0x27e;
  Redraw__14tFEApplication(this);
  this = FEApp;
  bVar1 = false;
  if ((MEMCARD_INITIALIZED == (void *)0x0) || (showdialog != 0)) {
    pcVar3 = TextSys_Word__Fi(0x282);
    ptVar2 = FEApp;
    *(char **)&(this->NoInputMemCardDialog).tDialogMessageString.tDialogBase.MaxW = pcVar3;
    Display__11tDialogBase
              ((tDialogBase *)&(ptVar2->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
    while ((FEApp->NoInputMemCardDialog).tDialogMessageString.tDialogBase.startTicks != 1) {
      Redraw__14tFEApplication(FEApp);
    }
    Redraw__14tFEApplication(FEApp);
    if (MEMCARD_INITIALIZED == (void *)0x0) {
      bVar1 = true;
      Init_Memcard__FbT0(&DAT_00000001,(void *)0x0);
    }
  }
  pvVar4 = SaveGame__Fs(0);
  screenMemcard->fMemCardMessageTextSys = -1;
  if (bVar1) {
    DeInit_Memcard__Fv();
  }
  Hide__11tDialogBase((tDialogBase *)
                      &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
  return pvVar4;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ PinkSlipsPreSave__Fv()
 // line 484, offset 0x8002cabc
	/* begin block 1 */
		// Start line: 485
		// Start offset: 0x8002CABC

		/* begin block 1.1 */
			// Start line: 485
			// Start offset: 0x8002CABC

			/* begin block 1.1.1 */
				// Start line: 487
				// Start offset: 0x8002CADC
				// Variables:
			// 		void * ret; // $s1
			// 		struct tDialogYesNoTri YesNoDialog; // stack offset -184
			// 		int answer; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 488
					// Start offset: 0x8002CADC
					// Variables:
				// 		struct tDialogYesNoTri *this; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x8002CADC
				// End Line: 488

				/* begin block 1.1.1.2 */
					// Start line: 488
					// Start offset: 0x8002CADC

					/* begin block 1.1.1.2.1 */
						// Start line: 488
						// Start offset: 0x8002CADC
					/* end block 1.1.1.2.1 */
					// End offset: 0x8002CADC
					// End Line: 488
				/* end block 1.1.1.2 */
				// End offset: 0x8002CADC
				// End Line: 488

				/* begin block 1.1.1.3 */
					// Start line: 488
					// Start offset: 0x8002CADC

					/* begin block 1.1.1.3.1 */
						// Start line: 488
						// Start offset: 0x8002CADC
					/* end block 1.1.1.3.1 */
					// End offset: 0x8002CADC
					// End Line: 488
				/* end block 1.1.1.3 */
				// End offset: 0x8002CADC
				// End Line: 488

				/* begin block 1.1.1.4 */
					// Start line: 488
					// Start offset: 0x8002CADC

					/* begin block 1.1.1.4.1 */
						// Start line: 504
						// Start offset: 0x8002CB4C

						/* begin block 1.1.1.4.1.1 */
							// Start line: 504
							// Start offset: 0x8002CB4C

							/* begin block 1.1.1.4.1.1.1 */
								// Start line: 504
								// Start offset: 0x8002CB4C

								/* begin block 1.1.1.4.1.1.1.1 */
									// Start line: 504
									// Start offset: 0x8002CB4C

									/* begin block 1.1.1.4.1.1.1.1.1 */
										// Start line: 504
										// Start offset: 0x8002CB4C

										/* begin block 1.1.1.4.1.1.1.1.1.1 */
											// Start line: 504
											// Start offset: 0x8002CB4C

											/* begin block 1.1.1.4.1.1.1.1.1.1.1 */
												// Start line: 504
												// Start offset: 0x8002CB4C

												/* begin block 1.1.1.4.1.1.1.1.1.1.1.1 */
													// Start line: 504
													// Start offset: 0x8002CB4C

													/* begin block 1.1.1.4.1.1.1.1.1.1.1.1.1 */
														// Start line: 504
														// Start offset: 0x8002CB4C
													/* end block 1.1.1.4.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x8002CB4C
													// End Line: 504
												/* end block 1.1.1.4.1.1.1.1.1.1.1.1 */
												// End offset: 0x8002CB4C
												// End Line: 504
											/* end block 1.1.1.4.1.1.1.1.1.1.1 */
											// End offset: 0x8002CB4C
											// End Line: 504
										/* end block 1.1.1.4.1.1.1.1.1.1 */
										// End offset: 0x8002CB4C
										// End Line: 504
									/* end block 1.1.1.4.1.1.1.1.1 */
									// End offset: 0x8002CB4C
									// End Line: 504
								/* end block 1.1.1.4.1.1.1.1 */
								// End offset: 0x8002CB4C
								// End Line: 504
							/* end block 1.1.1.4.1.1.1 */
							// End offset: 0x8002CB58
							// End Line: 504
						/* end block 1.1.1.4.1.1 */
						// End offset: 0x8002CB58
						// End Line: 504
					/* end block 1.1.1.4.1 */
					// End offset: 0x8002CB58
					// End Line: 504
				/* end block 1.1.1.4 */
				// End offset: 0x8002CB58
				// End Line: 504

				/* begin block 1.1.1.5 */
					// Start line: 503
					// Start offset: 0x8002CB58

					/* begin block 1.1.1.5.1 */
						// Start line: 485
						// Start offset: 0x8002CB58

						/* begin block 1.1.1.5.1.1 */
							// Start line: 485
							// Start offset: 0x8002CB58

							/* begin block 1.1.1.5.1.1.1 */
								// Start line: 485
								// Start offset: 0x8002CB58

								/* begin block 1.1.1.5.1.1.1.1 */
									// Start line: 485
									// Start offset: 0x8002CB58

									/* begin block 1.1.1.5.1.1.1.1.1 */
										// Start line: 485
										// Start offset: 0x8002CB58
									/* end block 1.1.1.5.1.1.1.1.1 */
									// End offset: 0x8002CB58
									// End Line: 485
								/* end block 1.1.1.5.1.1.1.1 */
								// End offset: 0x8002CB58
								// End Line: 485
							/* end block 1.1.1.5.1.1.1 */
							// End offset: 0x8002CB58
							// End Line: 485
						/* end block 1.1.1.5.1.1 */
						// End offset: 0x8002CB58
						// End Line: 485
					/* end block 1.1.1.5.1 */
					// End offset: 0x8002CB58
					// End Line: 485
				/* end block 1.1.1.5 */
				// End offset: 0x8002CB58
				// End Line: 485
			/* end block 1.1.1 */
			// End offset: 0x8002CB6C
			// End Line: 504
		/* end block 1.1 */
		// End offset: 0x8002CB70
		// End Line: 505
	/* end block 1 */
	// End offset: 0x8002CB70
	// End Line: 505

	/* begin block 2 */
		// Start line: 1040
	/* end block 2 */
	// End Line: 1041

	/* begin block 3 */
		// Start line: 1046
	/* end block 3 */
	// End Line: 1047

	/* begin block 4 */
		// Start line: 1046
	/* end block 4 */
	// End Line: 1047

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * PinkSlipsPreSave__Fv(void)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined auStack184 [96];
  undefined *local_58;
  undefined2 local_30;
  char *local_28;
  void *local_18;
  int local_14;
  
  puVar2 = (undefined *)FECheat_IsTheUserACryBabyCheater__Fv();
  puVar3 = &DAT_00000001;
  if (puVar2 == &DAT_00000001) {
    puVar3 = &DAT_00000001;
  }
  else {
    __12tDialogYesNo((tDialogYesNo *)auStack184);
    local_58 = &table;
    local_28 = TextSys_Word__Fi(0x273);
    local_18 = (void *)0x321;
    local_14 = 0x322;
    local_30 = 0;
    sVar1 = Run__18tDialogInteractive((tDialogInteractive *)(tDialogYesNo *)auStack184);
    if (sVar1 == 1) {
      puVar3 = (undefined *)GenericMenuSaveGame__Fi(1);
    }
    else {
      if (sVar1 == -1) {
        ___7tScreen((tScreen *)(tDialogYesNo *)auStack184,2);
        return (void *)0x0;
      }
    }
    ___7tScreen((tScreen *)auStack184,2);
  }
  return puVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToBestOfOne__FR12tMenuCommand(struct tMenuCommand *command /*$s0*/)
 // line 508, offset 0x8002cb84
	/* begin block 1 */
		// Start line: 509
		// Start offset: 0x8002CB84
	/* end block 1 */
	// End offset: 0x8002CBBC
	// End Line: 519

	/* begin block 2 */
		// Start line: 1096
	/* end block 2 */
	// End Line: 1097

	/* begin block 3 */
		// Start line: 1100
	/* end block 3 */
	// End Line: 1101

	/* begin block 4 */
		// Start line: 1100
	/* end block 4 */
	// End Line: 1101

void MenuExtended_GoToBestOfOne__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  void *pvVar2;
  
  pvVar2 = PinkSlipsPreSave__Fv();
  ptVar1 = menuDefs;
  if (pvVar2 == (void *)0x0) {
    command->type = kMenu_Command_None;
  }
  else {
    command->type = kMenu_Command_GoToMenu;
    command->nextMenu = (tMenu *)((ptVar1->menuPinkSlipsBestOfThree).tMenu.fItemList + 2);
  }
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.pinkSlipsNumTracks = '\x01';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToBestOfThree__FR12tMenuCommand(struct tMenuCommand *command /*$s0*/)
 // line 523, offset 0x8002cbe0
	/* begin block 1 */
		// Start line: 524
		// Start offset: 0x8002CBE0
	/* end block 1 */
	// End offset: 0x8002CC18
	// End Line: 533

	/* begin block 2 */
		// Start line: 1128
	/* end block 2 */
	// End Line: 1129

	/* begin block 3 */
		// Start line: 1132
	/* end block 3 */
	// End Line: 1133

	/* begin block 4 */
		// Start line: 1132
	/* end block 4 */
	// End Line: 1133

void MenuExtended_GoToBestOfThree__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  void *pvVar2;
  
  pvVar2 = PinkSlipsPreSave__Fv();
  ptVar1 = menuDefs;
  if (pvVar2 == (void *)0x0) {
    command->type = kMenu_Command_None;
  }
  else {
    command->type = kMenu_Command_GoToMenu;
    command->nextMenu = (tMenu *)((ptVar1->menuPinkSlipSelect).tMenu.fItemList + 8);
  }
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.pinkSlipsNumTracks = '\x03';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToBestOfFive__FR12tMenuCommand(struct tMenuCommand *command /*$s0*/)
 // line 537, offset 0x8002cc3c
	/* begin block 1 */
		// Start line: 538
		// Start offset: 0x8002CC3C
	/* end block 1 */
	// End offset: 0x8002CC74
	// End Line: 547

	/* begin block 2 */
		// Start line: 1158
	/* end block 2 */
	// End Line: 1159

	/* begin block 3 */
		// Start line: 1162
	/* end block 3 */
	// End Line: 1163

	/* begin block 4 */
		// Start line: 1162
	/* end block 4 */
	// End Line: 1163

void MenuExtended_GoToBestOfFive__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  void *pvVar2;
  
  pvVar2 = PinkSlipsPreSave__Fv();
  ptVar1 = menuDefs;
  if (pvVar2 == (void *)0x0) {
    command->type = kMenu_Command_None;
  }
  else {
    command->type = kMenu_Command_GoToMenu;
    command->nextMenu = (tMenu *)&(ptVar1->itemPinkSlipsContinue).fOrdinalPos;
  }
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.pinkSlipsNumTracks = '\x05';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToRace__FR12tMenuCommand(struct tMenuCommand *command /*$s3*/)
 // line 551, offset 0x8002cc98
	/* begin block 1 */
		// Start line: 552
		// Start offset: 0x8002CC98
		// Variables:
	// 		struct tDialogMessageString *popUp; // $s1
	// 		struct tCarInfo carInfo; // stack offset -232

		/* begin block 1.1 */
			// Start line: 552
			// Start offset: 0x8002CC98
			// Variables:
		// 		struct tFEApplication *this; // $v1

			/* begin block 1.1.1 */
				// Start line: 552
				// Start offset: 0x8002CC98
			/* end block 1.1.1 */
			// End offset: 0x8002CC98
			// End Line: 552
		/* end block 1.1 */
		// End offset: 0x8002CC98
		// End Line: 552

		/* begin block 1.2 */
			// Start line: 552
			// Start offset: 0x8002CC98

			/* begin block 1.2.1 */
				// Start line: 558
				// Start offset: 0x8002CCE0

				/* begin block 1.2.1.1 */
					// Start line: 559
					// Start offset: 0x8002CCE0

					/* begin block 1.2.1.1.1 */
						// Start line: 561
						// Start offset: 0x8002CD14

						/* begin block 1.2.1.1.1.1 */
							// Start line: 561
							// Start offset: 0x8002CD14
							// Variables:
						// 		struct tDialogMessageString *this; // $s1

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 561
								// Start offset: 0x8002CD14
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x8002CD14
							// End Line: 561
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8002CD14
						// End Line: 561
					/* end block 1.2.1.1.1 */
					// End offset: 0x8002CD14
					// End Line: 565
				/* end block 1.2.1.1 */
				// End offset: 0x8002CD14
				// End Line: 565
			/* end block 1.2.1 */
			// End offset: 0x8002CD14
			// End Line: 565
		/* end block 1.2 */
		// End offset: 0x8002CD14
		// End Line: 565

		/* begin block 1.3 */
			// Start line: 569
			// Start offset: 0x8002CD14

			/* begin block 1.3.1 */
				// Start line: 570
				// Start offset: 0x8002CD28

				/* begin block 1.3.1.1 */
					// Start line: 571
					// Start offset: 0x8002CD28

					/* begin block 1.3.1.1.1 */
						// Start line: 572
						// Start offset: 0x8002CD44

						/* begin block 1.3.1.1.1.1 */
							// Start line: 572
							// Start offset: 0x8002CD44
							// Variables:
						// 		struct tDialogMessageString *this; // $s1

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 572
								// Start offset: 0x8002CD44
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x8002CD44
							// End Line: 572
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x8002CD44
						// End Line: 572
					/* end block 1.3.1.1.1 */
					// End offset: 0x8002CD4C
					// End Line: 580
				/* end block 1.3.1.1 */
				// End offset: 0x8002CD4C
				// End Line: 580
			/* end block 1.3.1 */
			// End offset: 0x8002CD4C
			// End Line: 580
		/* end block 1.3 */
		// End offset: 0x8002CD4C
		// End Line: 580

		/* begin block 1.4 */
			// Start line: 585
			// Start offset: 0x8002CD4C

			/* begin block 1.4.1 */
				// Start line: 586
				// Start offset: 0x8002CD60

				/* begin block 1.4.1.1 */
					// Start line: 587
					// Start offset: 0x8002CD60

					/* begin block 1.4.1.1.1 */
						// Start line: 589
						// Start offset: 0x8002CD84

						/* begin block 1.4.1.1.1.1 */
							// Start line: 589
							// Start offset: 0x8002CD84
							// Variables:
						// 		struct tDialogMessageString *this; // $s1

							/* begin block 1.4.1.1.1.1.1 */
								// Start line: 589
								// Start offset: 0x8002CD84
							/* end block 1.4.1.1.1.1.1 */
							// End offset: 0x8002CD84
							// End Line: 589
						/* end block 1.4.1.1.1.1 */
						// End offset: 0x8002CD84
						// End Line: 589
					/* end block 1.4.1.1.1 */
					// End offset: 0x8002CD8C
					// End Line: 593
				/* end block 1.4.1.1 */
				// End offset: 0x8002CD8C
				// End Line: 593
			/* end block 1.4.1 */
			// End offset: 0x8002CD8C
			// End Line: 593
		/* end block 1.4 */
		// End offset: 0x8002CD8C
		// End Line: 593

		/* begin block 1.5 */
			// Start line: 597
			// Start offset: 0x8002CD8C

			/* begin block 1.5.1 */
				// Start line: 598
				// Start offset: 0x8002CDA0

				/* begin block 1.5.1.1 */
					// Start line: 599
					// Start offset: 0x8002CDA0

					/* begin block 1.5.1.1.1 */
						// Start line: 601
						// Start offset: 0x8002CDC0

						/* begin block 1.5.1.1.1.1 */
							// Start line: 601
							// Start offset: 0x8002CDC0
							// Variables:
						// 		struct tDialogMessageString *this; // $s1

							/* begin block 1.5.1.1.1.1.1 */
								// Start line: 601
								// Start offset: 0x8002CDC0
							/* end block 1.5.1.1.1.1.1 */
							// End offset: 0x8002CDC0
							// End Line: 601
						/* end block 1.5.1.1.1.1 */
						// End offset: 0x8002CDC0
						// End Line: 601
					/* end block 1.5.1.1.1 */
					// End offset: 0x8002CDD8
					// End Line: 605
				/* end block 1.5.1.1 */
				// End offset: 0x8002CDD8
				// End Line: 605
			/* end block 1.5.1 */
			// End offset: 0x8002CDD8
			// End Line: 605
		/* end block 1.5 */
		// End offset: 0x8002CDD8
		// End Line: 605
	/* end block 1 */
	// End offset: 0x8002CDD8
	// End Line: 605

	/* begin block 2 */
		// Start line: 1188
	/* end block 2 */
	// End Line: 1189

	/* begin block 3 */
		// Start line: 1192
	/* end block 3 */
	// End Line: 1193

	/* begin block 4 */
		// Start line: 1192
	/* end block 4 */
	// End Line: 1193

void MenuExtended_GoToRace__FR12tMenuCommand(tMenuCommand *command)

{
  tFEApplication *ptVar1;
  ushort uVar2;
  char *pcVar3;
  int wordnum;
  tCarInfo tStack232;
  
  ptVar1 = FEApp;
  command->type = kMenu_Command_StartRace;
  if ((((frontEnd.carListType != '\x01') ||
       (uVar2 = GetNumOwnedCars__11tCarManagers(&carManager,0), 0 < (int)((uint)uVar2 << 0x10))) ||
      (frontEnd.raceType == '\x01')) || (wordnum = 0xaa, frontEnd.raceType == '\x06')) {
    if ((frontEnd.raceType == '\x02') &&
       (uVar2 = GetNumTourneyCars__11tCarManagers(&carManager,0), (int)((uint)uVar2 << 0x10) < 1)) {
      wordnum = 0xf1;
    }
    else {
      if ((frontEnd.raceType == '\x01') &&
         (GetStockCar__11tCarManagersR8tCarInfo
                    (&carManager,(ushort)(byte)frontEnd.playerCar[0],&tStack232),
         tStack232.fPursuitAvailable == '\0')) {
        wordnum = 0xf2;
      }
      else {
        if (frontEnd.carListType != '\0') {
          return;
        }
        GetStockCar__11tCarManagersR8tCarInfo
                  (&carManager,(ushort)(byte)frontEnd.playerCar[0],&tStack232);
        wordnum = 0xf3;
        if (tStack232.fAvailable != '\0') {
          return;
        }
      }
    }
  }
  pcVar3 = TextSys_Word__Fi(wordnum);
  *(char **)&(ptVar1->messagePopup).tDialogBase.fFadeText = pcVar3;
  Display__11tDialogBase((tDialogBase *)&ptVar1->messagePopup);
  command->type = kMenu_Command_None;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoTo2PlayerRace__FR12tMenuCommand(struct tMenuCommand *command /*$s3*/)
 // line 610, offset 0x8002cdf4
	/* begin block 1 */
		// Start line: 611
		// Start offset: 0x8002CDF4
		// Variables:
	// 		struct tDialogMessageString *popUp; // $s2
	// 		struct tCarInfo carInfo; // stack offset -232

		/* begin block 1.1 */
			// Start line: 611
			// Start offset: 0x8002CDF4
			// Variables:
		// 		struct tFEApplication *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 611
				// Start offset: 0x8002CDF4
			/* end block 1.1.1 */
			// End offset: 0x8002CDF4
			// End Line: 611
		/* end block 1.1 */
		// End offset: 0x8002CDF4
		// End Line: 611

		/* begin block 1.2 */
			// Start line: 620
			// Start offset: 0x8002CE38

			/* begin block 1.2.1 */
				// Start line: 621
				// Start offset: 0x8002CE48

				/* begin block 1.2.1.1 */
					// Start line: 622
					// Start offset: 0x8002CE48

					/* begin block 1.2.1.1.1 */
						// Start line: 624
						// Start offset: 0x8002CE74

						/* begin block 1.2.1.1.1.1 */
							// Start line: 624
							// Start offset: 0x8002CE74
							// Variables:
						// 		struct tDialogMessageString *this; // $s2

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 624
								// Start offset: 0x8002CE74
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x8002CE74
							// End Line: 624
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8002CE74
						// End Line: 624
					/* end block 1.2.1.1.1 */
					// End offset: 0x8002CE74
					// End Line: 628
				/* end block 1.2.1.1 */
				// End offset: 0x8002CE74
				// End Line: 628
			/* end block 1.2.1 */
			// End offset: 0x8002CE74
			// End Line: 628
		/* end block 1.2 */
		// End offset: 0x8002CE74
		// End Line: 628

		/* begin block 1.3 */
			// Start line: 632
			// Start offset: 0x8002CE74

			/* begin block 1.3.1 */
				// Start line: 633
				// Start offset: 0x8002CE8C

				/* begin block 1.3.1.1 */
					// Start line: 633
					// Start offset: 0x8002CE8C
					// Variables:
				// 		struct tFEApplication *this; // $v0

					/* begin block 1.3.1.1.1 */
						// Start line: 633
						// Start offset: 0x8002CE8C
					/* end block 1.3.1.1.1 */
					// End offset: 0x8002CE8C
					// End Line: 633
				/* end block 1.3.1.1 */
				// End offset: 0x8002CE8C
				// End Line: 633

				/* begin block 1.3.1.2 */
					// Start line: 633
					// Start offset: 0x8002CE8C

					/* begin block 1.3.1.2.1 */
						// Start line: 636
						// Start offset: 0x8002CEC0

						/* begin block 1.3.1.2.1.1 */
							// Start line: 636
							// Start offset: 0x8002CEC0
							// Variables:
						// 		struct tDialogMessageString *this; // $s2

							/* begin block 1.3.1.2.1.1.1 */
								// Start line: 636
								// Start offset: 0x8002CEC0
							/* end block 1.3.1.2.1.1.1 */
							// End offset: 0x8002CEC0
							// End Line: 636
						/* end block 1.3.1.2.1.1 */
						// End offset: 0x8002CEC0
						// End Line: 636
					/* end block 1.3.1.2.1 */
					// End offset: 0x8002CEC8
					// End Line: 640
				/* end block 1.3.1.2 */
				// End offset: 0x8002CEC8
				// End Line: 640
			/* end block 1.3.1 */
			// End offset: 0x8002CEC8
			// End Line: 640
		/* end block 1.3 */
		// End offset: 0x8002CEC8
		// End Line: 640

		/* begin block 1.4 */
			// Start line: 645
			// Start offset: 0x8002CEC8

			/* begin block 1.4.1 */
				// Start line: 646
				// Start offset: 0x8002CEDC

				/* begin block 1.4.1.1 */
					// Start line: 646
					// Start offset: 0x8002CEDC
					// Variables:
				// 		struct tFEApplication *this; // $v0

					/* begin block 1.4.1.1.1 */
						// Start line: 646
						// Start offset: 0x8002CEDC
					/* end block 1.4.1.1.1 */
					// End offset: 0x8002CEDC
					// End Line: 646
				/* end block 1.4.1.1 */
				// End offset: 0x8002CEDC
				// End Line: 646

				/* begin block 1.4.1.2 */
					// Start line: 646
					// Start offset: 0x8002CEDC

					/* begin block 1.4.1.2.1 */
						// Start line: 649
						// Start offset: 0x8002CF0C

						/* begin block 1.4.1.2.1.1 */
							// Start line: 649
							// Start offset: 0x8002CF0C
							// Variables:
						// 		struct tDialogMessageString *this; // $s2

							/* begin block 1.4.1.2.1.1.1 */
								// Start line: 649
								// Start offset: 0x8002CF0C
							/* end block 1.4.1.2.1.1.1 */
							// End offset: 0x8002CF0C
							// End Line: 649
						/* end block 1.4.1.2.1.1 */
						// End offset: 0x8002CF0C
						// End Line: 649
					/* end block 1.4.1.2.1 */
					// End offset: 0x8002CF24
					// End Line: 653
				/* end block 1.4.1.2 */
				// End offset: 0x8002CF24
				// End Line: 653
			/* end block 1.4.1 */
			// End offset: 0x8002CF24
			// End Line: 653
		/* end block 1.4 */
		// End offset: 0x8002CF24
		// End Line: 653
	/* end block 1 */
	// End offset: 0x8002CF24
	// End Line: 653

	/* begin block 2 */
		// Start line: 1311
	/* end block 2 */
	// End Line: 1312

	/* begin block 3 */
		// Start line: 1314
	/* end block 3 */
	// End Line: 1315

	/* begin block 4 */
		// Start line: 1314
	/* end block 4 */
	// End Line: 1315

void MenuExtended_GoTo2PlayerRace__FR12tMenuCommand(tMenuCommand *command)

{
  tFEApplication *ptVar1;
  ushort uVar2;
  char *pcVar3;
  int wordnum;
  tCarInfo tStack232;
  
  ptVar1 = FEApp;
  command->type = kMenu_Command_Start2PlayerRace;
  if (frontEnd.raceType == '\x06') {
    return;
  }
  if (((frontEnd.carListType != '\x01') ||
      (uVar2 = GetNumOwnedCars__11tCarManagers(&carManager,0), 0 < (int)((uint)uVar2 << 0x10))) ||
     (wordnum = 0xaa, frontEnd.raceType == '\x01')) {
    if ((frontEnd.carListType == '\0') &&
       (GetStockCar__11tCarManagersR8tCarInfo
                  (&carManager,
                   (ushort)(byte)frontEnd.playerCar[(uint)*(byte *)&(FEApp->helpPopup).numItems],
                   &tStack232), tStack232.fAvailable == '\0')) {
      wordnum = 0xf3;
    }
    else {
      if (frontEnd.raceType != '\x01') {
        return;
      }
      GetStockCar__11tCarManagersR8tCarInfo
                (&carManager,
                 (ushort)(byte)frontEnd.playerCar[(uint)*(byte *)&(FEApp->helpPopup).numItems],
                 &tStack232);
      wordnum = 0xf2;
      if (tStack232.fPursuitAvailable != '\0') {
        return;
      }
    }
  }
  pcVar3 = TextSys_Word__Fi(wordnum);
  *(char **)&(ptVar1->messagePopup).tDialogBase.fFadeText = pcVar3;
  Display__11tDialogBase((tDialogBase *)&ptVar1->messagePopup);
  command->type = kMenu_Command_None;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToTournTrackInfo__FR12tMenuCommand(struct tMenuCommand *command /*$s3*/)
 // line 658, offset 0x8002cf40
	/* begin block 1 */
		// Start line: 659
		// Start offset: 0x8002CF40
		// Variables:
	// 		struct tTourneyInfo *tourn; // $s2

		/* begin block 1.1 */
			// Start line: 659
			// Start offset: 0x8002CF40

			/* begin block 1.1.1 */
				// Start line: 659
				// Start offset: 0x8002CF40
			/* end block 1.1.1 */
			// End offset: 0x8002CF40
			// End Line: 659
		/* end block 1.1 */
		// End offset: 0x8002CF40
		// End Line: 659

		/* begin block 1.2 */
			// Start line: 659
			// Start offset: 0x8002CF40

			/* begin block 1.2.1 */
				// Start line: 665
				// Start offset: 0x8002CFB0

				/* begin block 1.2.1.1 */
					// Start line: 670
					// Start offset: 0x8002CFB0

					/* begin block 1.2.1.1.1 */
						// Start line: 670
						// Start offset: 0x8002CFB0

						/* begin block 1.2.1.1.1.1 */
							// Start line: 670
							// Start offset: 0x8002CFB0
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8002CFB0
						// End Line: 670
					/* end block 1.2.1.1.1 */
					// End offset: 0x8002CFB0
					// End Line: 670

					/* begin block 1.2.1.1.2 */
						// Start line: 671
						// Start offset: 0x8002CFC4

						/* begin block 1.2.1.1.2.1 */
							// Start line: 671
							// Start offset: 0x8002CFC4
							// Variables:
						// 		struct tFEApplication *this; // $s0

							/* begin block 1.2.1.1.2.1.1 */
								// Start line: 671
								// Start offset: 0x8002CFC4
							/* end block 1.2.1.1.2.1.1 */
							// End offset: 0x8002CFC4
							// End Line: 671
						/* end block 1.2.1.1.2.1 */
						// End offset: 0x8002CFC4
						// End Line: 671

						/* begin block 1.2.1.1.2.2 */
							// Start line: 671
							// Start offset: 0x8002CFC4

							/* begin block 1.2.1.1.2.2.1 */
								// Start line: 671
								// Start offset: 0x8002CFC4
							/* end block 1.2.1.1.2.2.1 */
							// End offset: 0x8002CFC4
							// End Line: 671
						/* end block 1.2.1.1.2.2 */
						// End offset: 0x8002CFC4
						// End Line: 671
					/* end block 1.2.1.1.2 */
					// End offset: 0x8002CFE8
					// End Line: 675

					/* begin block 1.2.1.1.3 */
						// Start line: 678
						// Start offset: 0x8002CFE8
						// Variables:
					// 		struct tDialogYesNo popUp; // stack offset -192

						/* begin block 1.2.1.1.3.1 */
							// Start line: 679
							// Start offset: 0x8002CFE8
							// Variables:
						// 		struct tDialogMessageString *this; // $s0

							/* begin block 1.2.1.1.3.1.1 */
								// Start line: 679
								// Start offset: 0x8002CFE8
							/* end block 1.2.1.1.3.1.1 */
							// End offset: 0x8002CFE8
							// End Line: 679
						/* end block 1.2.1.1.3.1 */
						// End offset: 0x8002CFE8
						// End Line: 679

						/* begin block 1.2.1.1.3.2 */
							// Start line: 679
							// Start offset: 0x8002CFE8

							/* begin block 1.2.1.1.3.2.1 */
								// Start line: 679
								// Start offset: 0x8002CFE8
							/* end block 1.2.1.1.3.2.1 */
							// End offset: 0x8002CFE8
							// End Line: 679
						/* end block 1.2.1.1.3.2 */
						// End offset: 0x8002CFE8
						// End Line: 679

						/* begin block 1.2.1.1.3.3 */
							// Start line: 679
							// Start offset: 0x8002CFE8

							/* begin block 1.2.1.1.3.3.1 */
								// Start line: 682
								// Start offset: 0x8002D028

								/* begin block 1.2.1.1.3.3.1.1 */
									// Start line: 682
									// Start offset: 0x8002D028
									// Variables:
								// 		long amount; // $v1

									/* begin block 1.2.1.1.3.3.1.1.1 */
										// Start line: 682
										// Start offset: 0x8002D028
									/* end block 1.2.1.1.3.3.1.1.1 */
									// End offset: 0x8002D028
									// End Line: 682
								/* end block 1.2.1.1.3.3.1.1 */
								// End offset: 0x8002D028
								// End Line: 682
							/* end block 1.2.1.1.3.3.1 */
							// End offset: 0x8002D028
							// End Line: 682

							/* begin block 1.2.1.1.3.3.2 */
								// Start line: 689
								// Start offset: 0x8002D038

								/* begin block 1.2.1.1.3.3.2.1 */
									// Start line: 689
									// Start offset: 0x8002D038

									/* begin block 1.2.1.1.3.3.2.1.1 */
										// Start line: 689
										// Start offset: 0x8002D038

										/* begin block 1.2.1.1.3.3.2.1.1.1 */
											// Start line: 689
											// Start offset: 0x8002D038

											/* begin block 1.2.1.1.3.3.2.1.1.1.1 */
												// Start line: 689
												// Start offset: 0x8002D038

												/* begin block 1.2.1.1.3.3.2.1.1.1.1.1 */
													// Start line: 689
													// Start offset: 0x8002D038
												/* end block 1.2.1.1.3.3.2.1.1.1.1.1 */
												// End offset: 0x8002D038
												// End Line: 689
											/* end block 1.2.1.1.3.3.2.1.1.1.1 */
											// End offset: 0x8002D038
											// End Line: 689
										/* end block 1.2.1.1.3.3.2.1.1.1 */
										// End offset: 0x8002D038
										// End Line: 689
									/* end block 1.2.1.1.3.3.2.1.1 */
									// End offset: 0x8002D038
									// End Line: 689
								/* end block 1.2.1.1.3.3.2.1 */
								// End offset: 0x8002D038
								// End Line: 689
							/* end block 1.2.1.1.3.3.2 */
							// End offset: 0x8002D038
							// End Line: 689
						/* end block 1.2.1.1.3.3 */
						// End offset: 0x8002D038
						// End Line: 689

						/* begin block 1.2.1.1.3.4 */
							// Start line: 684
							// Start offset: 0x8002D038

							/* begin block 1.2.1.1.3.4.1 */
								// Start line: 684
								// Start offset: 0x8002D038

								/* begin block 1.2.1.1.3.4.1.1 */
									// Start line: 684
									// Start offset: 0x8002D038

									/* begin block 1.2.1.1.3.4.1.1.1 */
										// Start line: 684
										// Start offset: 0x8002D038
									/* end block 1.2.1.1.3.4.1.1.1 */
									// End offset: 0x8002D05C
									// End Line: 684
								/* end block 1.2.1.1.3.4.1.1 */
								// End offset: 0x8002D05C
								// End Line: 684
							/* end block 1.2.1.1.3.4.1 */
							// End offset: 0x8002D05C
							// End Line: 684
						/* end block 1.2.1.1.3.4 */
						// End offset: 0x8002D05C
						// End Line: 684
					/* end block 1.2.1.1.3 */
					// End offset: 0x8002D05C
					// End Line: 689
				/* end block 1.2.1.1 */
				// End offset: 0x8002D05C
				// End Line: 689
			/* end block 1.2.1 */
			// End offset: 0x8002D05C
			// End Line: 689
		/* end block 1.2 */
		// End offset: 0x8002D05C
		// End Line: 689
	/* end block 1 */
	// End offset: 0x8002D08C
	// End Line: 693

	/* begin block 2 */
		// Start line: 1419
	/* end block 2 */
	// End Line: 1420

	/* begin block 3 */
		// Start line: 1422
	/* end block 3 */
	// End Line: 1423

	/* begin block 4 */
		// Start line: 1422
	/* end block 4 */
	// End Line: 1423

void MenuExtended_GoToTournTrackInfo__FR12tMenuCommand(tMenuCommand *command)

{
  byte bVar1;
  tTourneyInfo *ptVar2;
  tFEApplication *ptVar3;
  tGlobalMenuDefs *ptVar4;
  short sVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  tDialogMessageString *this;
  undefined auStack192 [136];
  undefined2 local_38;
  char *local_30;
  void *local_20;
  int local_1c;
  
  ptVar3 = FEApp;
  uVar6 = (uint)(byte)frontEnd.tournament;
  frontEnd.tier = '\0';
  bVar1 = (tournamentManager.fDefinition)->fTiers[0].fTournOffset;
  ptVar2 = (tournamentManager.fDefinition)->fTournaments;
  iVar8 = ptVar2[(uint)bVar1 + uVar6].fEntranceFee;
  if (0 < iVar8) {
    if (tournamentManager.fMoney < iVar8) {
      this = &FEApp->messagePopup;
      pcVar7 = TextSys_Word__Fi(0xf6);
      *(char **)&(ptVar3->messagePopup).tDialogBase.fFadeText = pcVar7;
      Display__11tDialogBase((tDialogBase *)this);
      return;
    }
    __12tDialogYesNo((tDialogYesNo *)auStack192);
    local_30 = TextSys_Word__Fi(0xf7);
    local_20 = (void *)0x322;
    local_1c = 0x321;
    local_38 = 0;
    sVar5 = Run__18tDialogInteractive((tDialogInteractive *)auStack192);
    if (sVar5 == 0) {
      ___7tScreen((tScreen *)(tDialogInteractive *)auStack192,2);
      return;
    }
    AudioCmn_PlayFESFX__Fi(0x1a);
    tournamentManager.fMoney = tournamentManager.fMoney - ptVar2[(uint)bVar1 + uVar6].fEntranceFee;
    ___7tScreen((tScreen *)(tDialogInteractive *)auStack192,2);
  }
  StartNewTournament__18tTournamentManagerUcUc(&tournamentManager,'\0',frontEnd.tournament);
  ptVar4 = menuDefs;
  command->type = kMenu_Command_GoToMenu;
  command->nextMenu = (tMenu *)&(ptVar4->itemTimeOfDay).tMenuItemLeftRightChoice.fData;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToSpecialEventTrackInfo__FR12tMenuCommand(struct tMenuCommand *command /*$s3*/)
 // line 696, offset 0x8002d0a8
	/* begin block 1 */
		// Start line: 697
		// Start offset: 0x8002D0A8
		// Variables:
	// 		struct tTourneyInfo *tourn; // $s2

		/* begin block 1.1 */
			// Start line: 697
			// Start offset: 0x8002D0A8

			/* begin block 1.1.1 */
				// Start line: 697
				// Start offset: 0x8002D0A8
			/* end block 1.1.1 */
			// End offset: 0x8002D0A8
			// End Line: 697
		/* end block 1.1 */
		// End offset: 0x8002D0A8
		// End Line: 697

		/* begin block 1.2 */
			// Start line: 697
			// Start offset: 0x8002D0A8

			/* begin block 1.2.1 */
				// Start line: 706
				// Start offset: 0x8002D11C

				/* begin block 1.2.1.1 */
					// Start line: 708
					// Start offset: 0x8002D11C

					/* begin block 1.2.1.1.1 */
						// Start line: 708
						// Start offset: 0x8002D11C

						/* begin block 1.2.1.1.1.1 */
							// Start line: 708
							// Start offset: 0x8002D11C
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8002D11C
						// End Line: 708
					/* end block 1.2.1.1.1 */
					// End offset: 0x8002D11C
					// End Line: 708

					/* begin block 1.2.1.1.2 */
						// Start line: 709
						// Start offset: 0x8002D130

						/* begin block 1.2.1.1.2.1 */
							// Start line: 709
							// Start offset: 0x8002D130
							// Variables:
						// 		struct tFEApplication *this; // $s0

							/* begin block 1.2.1.1.2.1.1 */
								// Start line: 709
								// Start offset: 0x8002D130
							/* end block 1.2.1.1.2.1.1 */
							// End offset: 0x8002D130
							// End Line: 709
						/* end block 1.2.1.1.2.1 */
						// End offset: 0x8002D130
						// End Line: 709

						/* begin block 1.2.1.1.2.2 */
							// Start line: 709
							// Start offset: 0x8002D130

							/* begin block 1.2.1.1.2.2.1 */
								// Start line: 709
								// Start offset: 0x8002D130
							/* end block 1.2.1.1.2.2.1 */
							// End offset: 0x8002D130
							// End Line: 709
						/* end block 1.2.1.1.2.2 */
						// End offset: 0x8002D130
						// End Line: 709
					/* end block 1.2.1.1.2 */
					// End offset: 0x8002D154
					// End Line: 713

					/* begin block 1.2.1.1.3 */
						// Start line: 716
						// Start offset: 0x8002D154
						// Variables:
					// 		struct tDialogYesNo popUp; // stack offset -192

						/* begin block 1.2.1.1.3.1 */
							// Start line: 717
							// Start offset: 0x8002D154
							// Variables:
						// 		struct tDialogMessageString *this; // $s0

							/* begin block 1.2.1.1.3.1.1 */
								// Start line: 717
								// Start offset: 0x8002D154
							/* end block 1.2.1.1.3.1.1 */
							// End offset: 0x8002D154
							// End Line: 717
						/* end block 1.2.1.1.3.1 */
						// End offset: 0x8002D154
						// End Line: 717

						/* begin block 1.2.1.1.3.2 */
							// Start line: 717
							// Start offset: 0x8002D154

							/* begin block 1.2.1.1.3.2.1 */
								// Start line: 717
								// Start offset: 0x8002D154
							/* end block 1.2.1.1.3.2.1 */
							// End offset: 0x8002D154
							// End Line: 717
						/* end block 1.2.1.1.3.2 */
						// End offset: 0x8002D154
						// End Line: 717

						/* begin block 1.2.1.1.3.3 */
							// Start line: 717
							// Start offset: 0x8002D154

							/* begin block 1.2.1.1.3.3.1 */
								// Start line: 720
								// Start offset: 0x8002D194

								/* begin block 1.2.1.1.3.3.1.1 */
									// Start line: 720
									// Start offset: 0x8002D194
									// Variables:
								// 		long amount; // $v1

									/* begin block 1.2.1.1.3.3.1.1.1 */
										// Start line: 720
										// Start offset: 0x8002D194
									/* end block 1.2.1.1.3.3.1.1.1 */
									// End offset: 0x8002D194
									// End Line: 720
								/* end block 1.2.1.1.3.3.1.1 */
								// End offset: 0x8002D194
								// End Line: 720
							/* end block 1.2.1.1.3.3.1 */
							// End offset: 0x8002D194
							// End Line: 720

							/* begin block 1.2.1.1.3.3.2 */
								// Start line: 727
								// Start offset: 0x8002D1A4

								/* begin block 1.2.1.1.3.3.2.1 */
									// Start line: 727
									// Start offset: 0x8002D1A4

									/* begin block 1.2.1.1.3.3.2.1.1 */
										// Start line: 727
										// Start offset: 0x8002D1A4

										/* begin block 1.2.1.1.3.3.2.1.1.1 */
											// Start line: 727
											// Start offset: 0x8002D1A4

											/* begin block 1.2.1.1.3.3.2.1.1.1.1 */
												// Start line: 727
												// Start offset: 0x8002D1A4

												/* begin block 1.2.1.1.3.3.2.1.1.1.1.1 */
													// Start line: 727
													// Start offset: 0x8002D1A4
												/* end block 1.2.1.1.3.3.2.1.1.1.1.1 */
												// End offset: 0x8002D1A4
												// End Line: 727
											/* end block 1.2.1.1.3.3.2.1.1.1.1 */
											// End offset: 0x8002D1A4
											// End Line: 727
										/* end block 1.2.1.1.3.3.2.1.1.1 */
										// End offset: 0x8002D1A4
										// End Line: 727
									/* end block 1.2.1.1.3.3.2.1.1 */
									// End offset: 0x8002D1A4
									// End Line: 727
								/* end block 1.2.1.1.3.3.2.1 */
								// End offset: 0x8002D1A4
								// End Line: 727
							/* end block 1.2.1.1.3.3.2 */
							// End offset: 0x8002D1A4
							// End Line: 727
						/* end block 1.2.1.1.3.3 */
						// End offset: 0x8002D1A4
						// End Line: 727

						/* begin block 1.2.1.1.3.4 */
							// Start line: 722
							// Start offset: 0x8002D1A4

							/* begin block 1.2.1.1.3.4.1 */
								// Start line: 722
								// Start offset: 0x8002D1A4

								/* begin block 1.2.1.1.3.4.1.1 */
									// Start line: 722
									// Start offset: 0x8002D1A4

									/* begin block 1.2.1.1.3.4.1.1.1 */
										// Start line: 722
										// Start offset: 0x8002D1A4
									/* end block 1.2.1.1.3.4.1.1.1 */
									// End offset: 0x8002D1C8
									// End Line: 722
								/* end block 1.2.1.1.3.4.1.1 */
								// End offset: 0x8002D1C8
								// End Line: 722
							/* end block 1.2.1.1.3.4.1 */
							// End offset: 0x8002D1C8
							// End Line: 722
						/* end block 1.2.1.1.3.4 */
						// End offset: 0x8002D1C8
						// End Line: 722
					/* end block 1.2.1.1.3 */
					// End offset: 0x8002D1C8
					// End Line: 727
				/* end block 1.2.1.1 */
				// End offset: 0x8002D1C8
				// End Line: 727
			/* end block 1.2.1 */
			// End offset: 0x8002D1C8
			// End Line: 727
		/* end block 1.2 */
		// End offset: 0x8002D1C8
		// End Line: 727
	/* end block 1 */
	// End offset: 0x8002D1F8
	// End Line: 731

	/* begin block 2 */
		// Start line: 1507
	/* end block 2 */
	// End Line: 1508

	/* begin block 3 */
		// Start line: 1510
	/* end block 3 */
	// End Line: 1511

	/* begin block 4 */
		// Start line: 1510
	/* end block 4 */
	// End Line: 1511

void MenuExtended_GoToSpecialEventTrackInfo__FR12tMenuCommand(tMenuCommand *command)

{
  byte bVar1;
  tTourneyInfo *ptVar2;
  tFEApplication *ptVar3;
  tGlobalMenuDefs *ptVar4;
  short sVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  tDialogMessageString *this;
  undefined auStack192 [136];
  undefined2 local_38;
  char *local_30;
  void *local_20;
  int local_1c;
  
  ptVar3 = FEApp;
  frontEnd.tier = '\x01';
  uVar6 = (uint)(byte)frontEnd.specialevent;
  bVar1 = (tournamentManager.fDefinition)->fTiers[1].fTournOffset;
  ptVar2 = (tournamentManager.fDefinition)->fTournaments;
  iVar8 = ptVar2[(uint)bVar1 + uVar6].fEntranceFee;
  if (0 < iVar8) {
    if (tournamentManager.fMoney < iVar8) {
      this = &FEApp->messagePopup;
      pcVar7 = TextSys_Word__Fi(0xf6);
      *(char **)&(ptVar3->messagePopup).tDialogBase.fFadeText = pcVar7;
      Display__11tDialogBase((tDialogBase *)this);
      return;
    }
    __12tDialogYesNo((tDialogYesNo *)auStack192);
    local_30 = TextSys_Word__Fi(0xf7);
    local_20 = (void *)0x321;
    local_1c = 0x322;
    local_38 = 0;
    sVar5 = Run__18tDialogInteractive((tDialogInteractive *)auStack192);
    if (sVar5 == 0) {
      ___7tScreen((tScreen *)(tDialogInteractive *)auStack192,2);
      return;
    }
    AudioCmn_PlayFESFX__Fi(0x1a);
    tournamentManager.fMoney = tournamentManager.fMoney - ptVar2[(uint)bVar1 + uVar6].fEntranceFee;
    ___7tScreen((tScreen *)(tDialogInteractive *)auStack192,2);
  }
  StartNewTournament__18tTournamentManagerUcUc(&tournamentManager,'\x01',frontEnd.specialevent);
  ptVar4 = menuDefs;
  command->type = kMenu_Command_GoToMenu;
  command->nextMenu = (tMenu *)&(ptVar4->itemTimeOfDay).tMenuItemLeftRightChoice.fData;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_EnterUserName__FR12tMenuCommand(struct tMenuCommand *command /*$a0*/)
 // line 734, offset 0x8002d214
	/* begin block 1 */
		// Start line: 735
		// Start offset: 0x8002D214

		/* begin block 1.1 */
			// Start line: 736
			// Start offset: 0x8002D214
			// Variables:
		// 		struct tUserNameMenuItem *this; // $a1
		// 		char *data; // $v1

			/* begin block 1.1.1 */
				// Start line: 736
				// Start offset: 0x8002D214
			/* end block 1.1.1 */
			// End offset: 0x8002D214
			// End Line: 736
		/* end block 1.1 */
		// End offset: 0x8002D214
		// End Line: 736

		/* begin block 1.2 */
			// Start line: 736
			// Start offset: 0x8002D214
			// Variables:
		// 		struct tScreenUserName *this; // $v0
		// 		struct tOptionsMenu *m; // $a2

			/* begin block 1.2.1 */
				// Start line: 736
				// Start offset: 0x8002D214
			/* end block 1.2.1 */
			// End offset: 0x8002D214
			// End Line: 736
		/* end block 1.2 */
		// End offset: 0x8002D214
		// End Line: 736
	/* end block 1 */
	// End offset: 0x8002D214
	// End Line: 736

	/* begin block 2 */
		// Start line: 1592
	/* end block 2 */
	// End Line: 1593

	/* begin block 3 */
		// Start line: 1595
	/* end block 3 */
	// End Line: 1596

	/* begin block 4 */
		// Start line: 1595
	/* end block 4 */
	// End Line: 1596

	/* begin block 5 */
		// Start line: 1596
	/* end block 5 */
	// End Line: 1597

	/* begin block 6 */
		// Start line: 1596
	/* end block 6 */
	// End Line: 1597

/* WARNING: Type propagation algorithm not settling */

void MenuExtended_EnterUserName__FR12tMenuCommand(tMenuCommand *command)

{
  byte bVar1;
  byte bVar2;
  tGlobalMenuDefs *ptVar3;
  tScreenUserName *ptVar4;
  tMenu *ptVar5;
  
  ptVar3 = menuDefs;
  bVar1 = *(byte *)((int)&(FEApp->helpPopup).numItems + 1);
  bVar2 = *(byte *)((int)&(FEApp->helpPopup).numItems + 1);
  *(undefined2 *)
   &(menuDefs->itemControllerShockImpact).tInsideBoxLeftRightSlider.tMenuItemLeftRightSlider.
    tMenuItemInteractive.tMenuItem.fNumFrames = 7;
  ptVar4 = screenUserName;
  ptVar5 = (tMenu *)((ptVar3->itemControllerJoyRange).tMenuItemLeftRightSlider.tMenuItemInteractive.
                     tMenuItem._vf + 8);
  *(undefined2 *)
   &(ptVar3->itemControllerShockImpact).tInsideBoxLeftRightSlider.tMenuItemLeftRightSlider.
    tMenuItemInteractive.tMenuItem.fNewMenu = 0;
  *(undefined2 *)
   ((int)&(ptVar3->itemControllerShockImpact).tInsideBoxLeftRightSlider.tMenuItemLeftRightSlider.
          tMenuItemInteractive.tMenuItem.fNumFrames + 2) = 0;
  (ptVar3->itemControllerSteeringRange1).tMenuItemLeftRightSlider.fWidth = (ushort)bVar1;
  (ptVar3->itemControllerShockImpact).tInsideBoxLeftRightSlider.tMenuItemLeftRightSlider.
  tMenuItemInteractive.tMenuItem.fButtonImage = (uint)bVar2 * 8 + -0x7feeb69c;
  *(tMenu **)((ptVar4->tScreen)._vf + 6) = ptVar5;
  command->type = kMenu_Command_GoToMenu;
  command->nextMenu = ptVar5;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToShowroom__FR12tMenuCommand(struct tMenuCommand *command /*$a0*/)
 // line 750, offset 0x8002d278
	/* begin block 1 */
		// Start line: 751
		// Start offset: 0x8002D278
	/* end block 1 */
	// End offset: 0x8002D278
	// End Line: 751

	/* begin block 2 */
		// Start line: 1496
	/* end block 2 */
	// End Line: 1497

	/* begin block 3 */
		// Start line: 1620
	/* end block 3 */
	// End Line: 1621

	/* begin block 4 */
		// Start line: 1620
	/* end block 4 */
	// End Line: 1621

void MenuExtended_GoToShowroom__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  
  ptVar1 = menuDefs;
  command->type = kMenu_Command_GoToMenu;
  command->nextMenu = (tMenu *)((ptVar1->iteratorTransmission).tListIterator._vf + 2);
  SetState__16tScreenCarSelecti(screenCarSelect,5);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToDealerShowroom__FR12tMenuCommand(struct tMenuCommand *command /*$a0*/)
 // line 757, offset 0x8002d2b8
	/* begin block 1 */
		// Start line: 758
		// Start offset: 0x8002D2B8
	/* end block 1 */
	// End offset: 0x8002D2B8
	// End Line: 758

	/* begin block 2 */
		// Start line: 1632
	/* end block 2 */
	// End Line: 1633

	/* begin block 3 */
		// Start line: 1636
	/* end block 3 */
	// End Line: 1637

	/* begin block 4 */
		// Start line: 1636
	/* end block 4 */
	// End Line: 1637

void MenuExtended_GoToDealerShowroom__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  
  ptVar1 = menuDefs;
  command->type = kMenu_Command_GoToMenu;
  command->nextMenu = (tMenu *)((ptVar1->iteratorTransmission).tListIterator._vf + 2);
  SetState__16tScreenCarSelecti(screenCarSelect,6);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetHPSoloRace__FR12tMenuCommand()
 // line 764, offset 0x8002d2f8
	/* begin block 1 */
		// Start line: 765
		// Start offset: 0x8002D2F8

		/* begin block 1.1 */
			// Start line: 766
			// Start offset: 0x8002D2F8

			/* begin block 1.1.1 */
				// Start line: 766
				// Start offset: 0x8002D2F8
			/* end block 1.1.1 */
			// End offset: 0x8002D2F8
			// End Line: 766
		/* end block 1.1 */
		// End offset: 0x8002D2F8
		// End Line: 766
	/* end block 1 */
	// End offset: 0x8002D2F8
	// End Line: 766

	/* begin block 2 */
		// Start line: 1648
	/* end block 2 */
	// End Line: 1649

	/* begin block 3 */
		// Start line: 1652
	/* end block 3 */
	// End Line: 1653

	/* begin block 4 */
		// Start line: 1652
	/* end block 4 */
	// End Line: 1653

	/* begin block 5 */
		// Start line: 1653
	/* end block 5 */
	// End Line: 1654

	/* begin block 6 */
		// Start line: 1653
	/* end block 6 */
	// End Line: 1654

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetHPSoloRace__FR12tMenuCommand(void)

{
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.raceType = '\x01';
  frontEnd.oppNumber = '\0';
  (menuDefs->menuTrackOptions).tMenuNFS4.tMenu.fFlags = 0xb;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetHPDuelRace__FR12tMenuCommand()
 // line 772, offset 0x8002d324
	/* begin block 1 */
		// Start line: 773
		// Start offset: 0x8002D324

		/* begin block 1.1 */
			// Start line: 774
			// Start offset: 0x8002D324

			/* begin block 1.1.1 */
				// Start line: 774
				// Start offset: 0x8002D324
			/* end block 1.1.1 */
			// End offset: 0x8002D324
			// End Line: 774
		/* end block 1.1 */
		// End offset: 0x8002D324
		// End Line: 774
	/* end block 1 */
	// End offset: 0x8002D324
	// End Line: 774

	/* begin block 2 */
		// Start line: 1665
	/* end block 2 */
	// End Line: 1666

	/* begin block 3 */
		// Start line: 1669
	/* end block 3 */
	// End Line: 1670

	/* begin block 4 */
		// Start line: 1669
	/* end block 4 */
	// End Line: 1670

	/* begin block 5 */
		// Start line: 1670
	/* end block 5 */
	// End Line: 1671

	/* begin block 6 */
		// Start line: 1670
	/* end block 6 */
	// End Line: 1671

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetHPDuelRace__FR12tMenuCommand(void)

{
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.raceType = '\x01';
  frontEnd.oppNumber = '\x01';
  (menuDefs->menuTrackOptions).tMenuNFS4.tMenu.fFlags = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetHotPursuit__FR12tMenuCommand()
 // line 780, offset 0x8002d350
	/* begin block 1 */
		// Start line: 781
		// Start offset: 0x8002D350

		/* begin block 1.1 */
			// Start line: 782
			// Start offset: 0x8002D350

			/* begin block 1.1.1 */
				// Start line: 786
				// Start offset: 0x8002D378

				/* begin block 1.1.1.1 */
					// Start line: 786
					// Start offset: 0x8002D378

					/* begin block 1.1.1.1.1 */
						// Start line: 786
						// Start offset: 0x8002D378
					/* end block 1.1.1.1.1 */
					// End offset: 0x8002D378
					// End Line: 786
				/* end block 1.1.1.1 */
				// End offset: 0x8002D378
				// End Line: 786
			/* end block 1.1.1 */
			// End offset: 0x8002D378
			// End Line: 786

			/* begin block 1.1.2 */
				// Start line: 788
				// Start offset: 0x8002D388

				/* begin block 1.1.2.1 */
					// Start line: 788
					// Start offset: 0x8002D388

					/* begin block 1.1.2.1.1 */
						// Start line: 788
						// Start offset: 0x8002D388
					/* end block 1.1.2.1.1 */
					// End offset: 0x8002D394
					// End Line: 788
				/* end block 1.1.2.1 */
				// End offset: 0x8002D394
				// End Line: 788
			/* end block 1.1.2 */
			// End offset: 0x8002D394
			// End Line: 788
		/* end block 1.1 */
		// End offset: 0x8002D394
		// End Line: 788
	/* end block 1 */
	// End offset: 0x8002D394
	// End Line: 789

	/* begin block 2 */
		// Start line: 1682
	/* end block 2 */
	// End Line: 1683

	/* begin block 3 */
		// Start line: 1686
	/* end block 3 */
	// End Line: 1687

	/* begin block 4 */
		// Start line: 1686
	/* end block 4 */
	// End Line: 1687

	/* begin block 5 */
		// Start line: 1687
	/* end block 5 */
	// End Line: 1688

	/* begin block 6 */
		// Start line: 1687
	/* end block 6 */
	// End Line: 1688

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetHotPursuit__FR12tMenuCommand(void)

{
  frontEnd.carListType = '\0';
  frontEnd.pinkSlipsTrackIndex = '\0';
  frontEnd.raceType = '\x01';
  if (frontEnd.gameMode == '\x01') {
    (menuDefs->menuTrackOptions).tMenuNFS4.tMenu.fFlags = 9;
  }
  else {
    (menuDefs->menuTrackOptions).tMenuNFS4.tMenu.fFlags = 1;
  }
  frontEnd.oppNumber = '\0';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SellCar__FR12tMenuCommand()
 // line 792, offset 0x8002d3a0
	/* begin block 1 */
		// Start line: 793
		// Start offset: 0x8002D3A0
		// Variables:
	// 		long money; // $s0

		/* begin block 1.1 */
			// Start line: 793
			// Start offset: 0x8002D3A0

			/* begin block 1.1.1 */
				// Start line: 793
				// Start offset: 0x8002D3A0
			/* end block 1.1.1 */
			// End offset: 0x8002D3A0
			// End Line: 793
		/* end block 1.1 */
		// End offset: 0x8002D3A0
		// End Line: 793

		/* begin block 1.2 */
			// Start line: 793
			// Start offset: 0x8002D3A0

			/* begin block 1.2.1 */
				// Start line: 798
				// Start offset: 0x8002D41C
				// Variables:
			// 		struct tDialogYesNo popUp; // stack offset -184

				/* begin block 1.2.1.1 */
					// Start line: 799
					// Start offset: 0x8002D41C
					// Variables:
				// 		struct tDialogMessageString *this; // $s1

					/* begin block 1.2.1.1.1 */
						// Start line: 799
						// Start offset: 0x8002D41C
					/* end block 1.2.1.1.1 */
					// End offset: 0x8002D41C
					// End Line: 799
				/* end block 1.2.1.1 */
				// End offset: 0x8002D41C
				// End Line: 799

				/* begin block 1.2.1.2 */
					// Start line: 799
					// Start offset: 0x8002D41C

					/* begin block 1.2.1.2.1 */
						// Start line: 799
						// Start offset: 0x8002D41C
					/* end block 1.2.1.2.1 */
					// End offset: 0x8002D41C
					// End Line: 799
				/* end block 1.2.1.2 */
				// End offset: 0x8002D41C
				// End Line: 799

				/* begin block 1.2.1.3 */
					// Start line: 799
					// Start offset: 0x8002D41C

					/* begin block 1.2.1.3.1 */
						// Start line: 804
						// Start offset: 0x8002D45C

						/* begin block 1.2.1.3.1.1 */
							// Start line: 805
							// Start offset: 0x8002D45C

							/* begin block 1.2.1.3.1.1.1 */
								// Start line: 805
								// Start offset: 0x8002D45C
							/* end block 1.2.1.3.1.1.1 */
							// End offset: 0x8002D45C
							// End Line: 805
						/* end block 1.2.1.3.1.1 */
						// End offset: 0x8002D45C
						// End Line: 805
					/* end block 1.2.1.3.1 */
					// End offset: 0x8002D4B0
					// End Line: 808
				/* end block 1.2.1.3 */
				// End offset: 0x8002D4B0
				// End Line: 808

				/* begin block 1.2.1.4 */
					// Start line: 793
					// Start offset: 0x8002D4B0

					/* begin block 1.2.1.4.1 */
						// Start line: 793
						// Start offset: 0x8002D4B0

						/* begin block 1.2.1.4.1.1 */
							// Start line: 793
							// Start offset: 0x8002D4B0

							/* begin block 1.2.1.4.1.1.1 */
								// Start line: 793
								// Start offset: 0x8002D4B0
							/* end block 1.2.1.4.1.1.1 */
							// End offset: 0x8002D4B0
							// End Line: 793
						/* end block 1.2.1.4.1.1 */
						// End offset: 0x8002D4B0
						// End Line: 793
					/* end block 1.2.1.4.1 */
					// End offset: 0x8002D4B0
					// End Line: 793
				/* end block 1.2.1.4 */
				// End offset: 0x8002D4B0
				// End Line: 793
			/* end block 1.2.1 */
			// End offset: 0x8002D4B0
			// End Line: 793

			/* begin block 1.2.2 */
				// Start line: 812
				// Start offset: 0x8002D4C4

				/* begin block 1.2.2.1 */
					// Start line: 812
					// Start offset: 0x8002D4C4
					// Variables:
				// 		struct tFEApplication *this; // $s0

					/* begin block 1.2.2.1.1 */
						// Start line: 812
						// Start offset: 0x8002D4C4
					/* end block 1.2.2.1.1 */
					// End offset: 0x8002D4C4
					// End Line: 812
				/* end block 1.2.2.1 */
				// End offset: 0x8002D4C4
				// End Line: 812

				/* begin block 1.2.2.2 */
					// Start line: 812
					// Start offset: 0x8002D4C4

					/* begin block 1.2.2.2.1 */
						// Start line: 812
						// Start offset: 0x8002D4C4
					/* end block 1.2.2.2.1 */
					// End offset: 0x8002D4C4
					// End Line: 812
				/* end block 1.2.2.2 */
				// End offset: 0x8002D4C4
				// End Line: 812
			/* end block 1.2.2 */
			// End offset: 0x8002D4E0
			// End Line: 815
		/* end block 1.2 */
		// End offset: 0x8002D4E0
		// End Line: 815
	/* end block 1 */
	// End offset: 0x8002D4E0
	// End Line: 815

	/* begin block 2 */
		// Start line: 1708
	/* end block 2 */
	// End Line: 1709

	/* begin block 3 */
		// Start line: 1712
	/* end block 3 */
	// End Line: 1713

	/* begin block 4 */
		// Start line: 1712
	/* end block 4 */
	// End Line: 1713

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SellCar__FR12tMenuCommand(void)

{
  bool bVar1;
  tFEApplication *ptVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  tDialogMessageString *this;
  undefined auStack184 [136];
  undefined2 local_30;
  char *local_28;
  void *local_18;
  int local_14;
  
  lVar6 = tournamentManager.fMoney;
  bVar1 = false;
  lVar4 = CalcUsedPrice__11tCarManagers(&carManager,(ushort)(byte)frontEnd.garageCar[0]);
  sVar3 = GetNumOwnedCars__11tCarManagers(&carManager,0);
  if ((1 < sVar3) ||
     (lVar5 = CheapestCarStockPrice__11tCarManager(&carManager), lVar5 <= lVar6 + lVar4)) {
    bVar1 = true;
  }
  ptVar2 = FEApp;
  if (bVar1) {
    __12tDialogYesNo((tDialogYesNo *)auStack184);
    local_28 = TextSys_Word__Fi(0xa5);
    local_18 = (void *)0x321;
    local_14 = 0x322;
    local_30 = 0;
    sVar3 = Run__18tDialogInteractive((tDialogInteractive *)auStack184);
    if (sVar3 != 0) {
      lVar6 = SellCar__11tCarManagerss(&carManager,(ushort)(byte)frontEnd.sellerCar,0);
      tournamentManager.fMoney = tournamentManager.fMoney + lVar6;
      Decrement__16tListIteratorCar7tPlayer
                ((tListIteratorCar *)
                 ((menuDefs->menuPlayerOnePinkSlipCarSelect).tMenuNFS4.tMenu._vf + 2),kPlayerOne);
      Increment__16tListIteratorCar7tPlayer
                ((tListIteratorCar *)
                 ((menuDefs->menuPlayerOnePinkSlipCarSelect).tMenuNFS4.tMenu._vf + 2),kPlayerOne);
      AudioCmn_PlayFESFX__Fi(0x1a);
    }
    ___7tScreen((tScreen *)(tDialogInteractive *)auStack184,2);
  }
  else {
    this = &FEApp->messagePopup;
    pcVar7 = TextSys_Word__Fi(0xa9);
    *(char **)&(ptVar2->messagePopup).tDialogBase.fFadeText = pcVar7;
    Display__11tDialogBase((tDialogBase *)this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_BuyCar__FR12tMenuCommand()
 // line 819, offset 0x8002d4f8
	/* begin block 1 */
		// Start line: 820
		// Start offset: 0x8002D4F8
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -400
	// 		struct tDialogMessageString *popUp; // $s1

		/* begin block 1.1 */
			// Start line: 820
			// Start offset: 0x8002D4F8
			// Variables:
		// 		struct tFEApplication *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 820
				// Start offset: 0x8002D4F8
			/* end block 1.1.1 */
			// End offset: 0x8002D4F8
			// End Line: 820
		/* end block 1.1 */
		// End offset: 0x8002D4F8
		// End Line: 820

		/* begin block 1.2 */
			// Start line: 820
			// Start offset: 0x8002D4F8

			/* begin block 1.2.1 */
				// Start line: 827
				// Start offset: 0x8002D55C

				/* begin block 1.2.1.1 */
					// Start line: 828
					// Start offset: 0x8002D55C

					/* begin block 1.2.1.1.1 */
						// Start line: 828
						// Start offset: 0x8002D55C

						/* begin block 1.2.1.1.1.1 */
							// Start line: 828
							// Start offset: 0x8002D55C
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8002D55C
						// End Line: 828
					/* end block 1.2.1.1.1 */
					// End offset: 0x8002D55C
					// End Line: 828

					/* begin block 1.2.1.1.2 */
						// Start line: 829
						// Start offset: 0x8002D57C
						// Variables:
					// 		struct tDialogYesNo yesNo; // stack offset -192

						/* begin block 1.2.1.1.2.1 */
							// Start line: 830
							// Start offset: 0x8002D57C

							/* begin block 1.2.1.1.2.1.1 */
								// Start line: 830
								// Start offset: 0x8002D57C
							/* end block 1.2.1.1.2.1.1 */
							// End offset: 0x8002D57C
							// End Line: 830
						/* end block 1.2.1.1.2.1 */
						// End offset: 0x8002D57C
						// End Line: 830

						/* begin block 1.2.1.1.2.2 */
							// Start line: 830
							// Start offset: 0x8002D57C

							/* begin block 1.2.1.1.2.2.1 */
								// Start line: 830
								// Start offset: 0x8002D57C
							/* end block 1.2.1.1.2.2.1 */
							// End offset: 0x8002D57C
							// End Line: 830
						/* end block 1.2.1.1.2.2 */
						// End offset: 0x8002D57C
						// End Line: 830

						/* begin block 1.2.1.1.2.3 */
							// Start line: 830
							// Start offset: 0x8002D57C

							/* begin block 1.2.1.1.2.3.1 */
								// Start line: 835
								// Start offset: 0x8002D5BC

								/* begin block 1.2.1.1.2.3.1.1 */
									// Start line: 836
									// Start offset: 0x8002D5BC

									/* begin block 1.2.1.1.2.3.1.1.1 */
										// Start line: 836
										// Start offset: 0x8002D5BC
									/* end block 1.2.1.1.2.3.1.1.1 */
									// End offset: 0x8002D5BC
									// End Line: 836
								/* end block 1.2.1.1.2.3.1.1 */
								// End offset: 0x8002D5BC
								// End Line: 836
							/* end block 1.2.1.1.2.3.1 */
							// End offset: 0x8002D5E8
							// End Line: 837
						/* end block 1.2.1.1.2.3 */
						// End offset: 0x8002D5E8
						// End Line: 837

						/* begin block 1.2.1.1.2.4 */
							// Start line: 820
							// Start offset: 0x8002D5E8

							/* begin block 1.2.1.1.2.4.1 */
								// Start line: 820
								// Start offset: 0x8002D5E8

								/* begin block 1.2.1.1.2.4.1.1 */
									// Start line: 820
									// Start offset: 0x8002D5E8

									/* begin block 1.2.1.1.2.4.1.1.1 */
										// Start line: 820
										// Start offset: 0x8002D5E8
									/* end block 1.2.1.1.2.4.1.1.1 */
									// End offset: 0x8002D5E8
									// End Line: 820
								/* end block 1.2.1.1.2.4.1.1 */
								// End offset: 0x8002D5E8
								// End Line: 820
							/* end block 1.2.1.1.2.4.1 */
							// End offset: 0x8002D5E8
							// End Line: 820
						/* end block 1.2.1.1.2.4 */
						// End offset: 0x8002D5E8
						// End Line: 820
					/* end block 1.2.1.1.2 */
					// End offset: 0x8002D5E8
					// End Line: 820

					/* begin block 1.2.1.1.3 */
						// Start line: 841
						// Start offset: 0x8002D5FC

						/* begin block 1.2.1.1.3.1 */
							// Start line: 842
							// Start offset: 0x8002D5FC
							// Variables:
						// 		struct tDialogMessageString *this; // $s1

							/* begin block 1.2.1.1.3.1.1 */
								// Start line: 842
								// Start offset: 0x8002D5FC
							/* end block 1.2.1.1.3.1.1 */
							// End offset: 0x8002D5FC
							// End Line: 842
						/* end block 1.2.1.1.3.1 */
						// End offset: 0x8002D5FC
						// End Line: 842
					/* end block 1.2.1.1.3 */
					// End offset: 0x8002D5FC
					// End Line: 842
				/* end block 1.2.1.1 */
				// End offset: 0x8002D5FC
				// End Line: 842
			/* end block 1.2.1 */
			// End offset: 0x8002D5FC
			// End Line: 842

			/* begin block 1.2.2 */
				// Start line: 848
				// Start offset: 0x8002D618

				/* begin block 1.2.2.1 */
					// Start line: 848
					// Start offset: 0x8002D618
					// Variables:
				// 		struct tDialogMessageString *this; // $s1

					/* begin block 1.2.2.1.1 */
						// Start line: 848
						// Start offset: 0x8002D618
					/* end block 1.2.2.1.1 */
					// End offset: 0x8002D618
					// End Line: 848
				/* end block 1.2.2.1 */
				// End offset: 0x8002D618
				// End Line: 848
			/* end block 1.2.2 */
			// End offset: 0x8002D630
			// End Line: 850
		/* end block 1.2 */
		// End offset: 0x8002D630
		// End Line: 850
	/* end block 1 */
	// End offset: 0x8002D630
	// End Line: 850

	/* begin block 2 */
		// Start line: 1764
	/* end block 2 */
	// End Line: 1765

	/* begin block 3 */
		// Start line: 1769
	/* end block 3 */
	// End Line: 1770

	/* begin block 4 */
		// Start line: 1769
	/* end block 4 */
	// End Line: 1770

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_BuyCar__FR12tMenuCommand(void)

{
  tFEApplication *ptVar1;
  short sVar2;
  long lVar3;
  char *pcVar4;
  tDialogMessageString *this;
  tCarInfo local_190;
  undefined auStack192 [136];
  undefined2 local_38;
  char *local_30;
  void *local_20;
  int local_1c;
  
  ptVar1 = FEApp;
  this = &FEApp->messagePopup;
  GetStockCar__11tCarManagersR8tCarInfo(&carManager,(ushort)(byte)frontEnd.dealerCar,&local_190);
  sVar2 = GetNumOwnedCars__11tCarManagers(&carManager,0);
  if (sVar2 < 0x20) {
    if (local_190.fPrices[0] <= tournamentManager.fMoney) {
      __12tDialogYesNo((tDialogYesNo *)auStack192);
      local_30 = TextSys_Word__Fi(0xa4);
      local_20 = (void *)0x321;
      local_1c = 0x322;
      local_38 = 0;
      sVar2 = Run__18tDialogInteractive((tDialogInteractive *)(tDialogYesNo *)auStack192);
      if (sVar2 != 0) {
        lVar3 = PurchaseCar__11tCarManagersss
                          (&carManager,(short)local_190.fCarID,
                           (ushort)(byte)frontEnd.carColors[(int)local_190.fCarID],0);
        tournamentManager.fMoney = tournamentManager.fMoney - lVar3;
        AudioCmn_PlayFESFX__Fi(0x1a);
      }
      ___7tScreen((tScreen *)(tDialogYesNo *)auStack192,2);
      return;
    }
    AudioCmn_PlayFESFX__Fi(10);
    pcVar4 = TextSys_Word__Fi(0xa7);
    *(char **)&(ptVar1->messagePopup).tDialogBase.fFadeText = pcVar4;
  }
  else {
    pcVar4 = TextSys_Word__Fi(0x4b);
    *(char **)&(ptVar1->messagePopup).tDialogBase.fFadeText = pcVar4;
  }
  Display__11tDialogBase((tDialogBase *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_PurchaseUpgrade__Fi(int upgradeNumber /*$s0*/)
 // line 854, offset 0x8002d64c
	/* begin block 1 */
		// Start line: 855
		// Start offset: 0x8002D64C
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -400
	// 		int upgradeFlag; // $s2

		/* begin block 1.1 */
			// Start line: 855
			// Start offset: 0x8002D64C

			/* begin block 1.1.1 */
				// Start line: 861
				// Start offset: 0x8002D6AC

				/* begin block 1.1.1.1 */
					// Start line: 862
					// Start offset: 0x8002D6AC

					/* begin block 1.1.1.1.1 */
						// Start line: 862
						// Start offset: 0x8002D6AC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 862
							// Start offset: 0x8002D6AC
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8002D6AC
						// End Line: 862
					/* end block 1.1.1.1.1 */
					// End offset: 0x8002D6AC
					// End Line: 862

					/* begin block 1.1.1.1.2 */
						// Start line: 863
						// Start offset: 0x8002D6D4
						// Variables:
					// 		struct tDialogYesNo popUp; // stack offset -192

						/* begin block 1.1.1.1.2.1 */
							// Start line: 864
							// Start offset: 0x8002D6D4

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 864
								// Start offset: 0x8002D6D4
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x8002D6D4
							// End Line: 864
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x8002D6D4
						// End Line: 864

						/* begin block 1.1.1.1.2.2 */
							// Start line: 864
							// Start offset: 0x8002D6D4

							/* begin block 1.1.1.1.2.2.1 */
								// Start line: 864
								// Start offset: 0x8002D6D4
							/* end block 1.1.1.1.2.2.1 */
							// End offset: 0x8002D6D4
							// End Line: 864
						/* end block 1.1.1.1.2.2 */
						// End offset: 0x8002D6D4
						// End Line: 864

						/* begin block 1.1.1.1.2.3 */
							// Start line: 864
							// Start offset: 0x8002D6D4

							/* begin block 1.1.1.1.2.3.1 */
								// Start line: 869
								// Start offset: 0x8002D714

								/* begin block 1.1.1.1.2.3.1.1 */
									// Start line: 870
									// Start offset: 0x8002D714

									/* begin block 1.1.1.1.2.3.1.1.1 */
										// Start line: 870
										// Start offset: 0x8002D714
									/* end block 1.1.1.1.2.3.1.1.1 */
									// End offset: 0x8002D714
									// End Line: 870
								/* end block 1.1.1.1.2.3.1.1 */
								// End offset: 0x8002D714
								// End Line: 870
							/* end block 1.1.1.1.2.3.1 */
							// End offset: 0x8002D73C
							// End Line: 871
						/* end block 1.1.1.1.2.3 */
						// End offset: 0x8002D73C
						// End Line: 871

						/* begin block 1.1.1.1.2.4 */
							// Start line: 855
							// Start offset: 0x8002D73C

							/* begin block 1.1.1.1.2.4.1 */
								// Start line: 855
								// Start offset: 0x8002D73C

								/* begin block 1.1.1.1.2.4.1.1 */
									// Start line: 855
									// Start offset: 0x8002D73C

									/* begin block 1.1.1.1.2.4.1.1.1 */
										// Start line: 855
										// Start offset: 0x8002D73C
									/* end block 1.1.1.1.2.4.1.1.1 */
									// End offset: 0x8002D73C
									// End Line: 855
								/* end block 1.1.1.1.2.4.1.1 */
								// End offset: 0x8002D73C
								// End Line: 855
							/* end block 1.1.1.1.2.4.1 */
							// End offset: 0x8002D73C
							// End Line: 855
						/* end block 1.1.1.1.2.4 */
						// End offset: 0x8002D73C
						// End Line: 855
					/* end block 1.1.1.1.2 */
					// End offset: 0x8002D73C
					// End Line: 855

					/* begin block 1.1.1.1.3 */
						// Start line: 875
						// Start offset: 0x8002D750

						/* begin block 1.1.1.1.3.1 */
							// Start line: 875
							// Start offset: 0x8002D750
							// Variables:
						// 		struct tFEApplication *this; // $s0

							/* begin block 1.1.1.1.3.1.1 */
								// Start line: 875
								// Start offset: 0x8002D750
							/* end block 1.1.1.1.3.1.1 */
							// End offset: 0x8002D750
							// End Line: 875
						/* end block 1.1.1.1.3.1 */
						// End offset: 0x8002D750
						// End Line: 875

						/* begin block 1.1.1.1.3.2 */
							// Start line: 875
							// Start offset: 0x8002D750

							/* begin block 1.1.1.1.3.2.1 */
								// Start line: 875
								// Start offset: 0x8002D750
							/* end block 1.1.1.1.3.2.1 */
							// End offset: 0x8002D750
							// End Line: 875
						/* end block 1.1.1.1.3.2 */
						// End offset: 0x8002D750
						// End Line: 875
					/* end block 1.1.1.1.3 */
					// End offset: 0x8002D76C
					// End Line: 878
				/* end block 1.1.1.1 */
				// End offset: 0x8002D76C
				// End Line: 878
			/* end block 1.1.1 */
			// End offset: 0x8002D76C
			// End Line: 878
		/* end block 1.1 */
		// End offset: 0x8002D76C
		// End Line: 878
	/* end block 1 */
	// End offset: 0x8002D76C
	// End Line: 878

	/* begin block 2 */
		// Start line: 1846
	/* end block 2 */
	// End Line: 1847

	/* begin block 3 */
		// Start line: 1851
	/* end block 3 */
	// End Line: 1852

	/* begin block 4 */
		// Start line: 1851
	/* end block 4 */
	// End Line: 1852

void MenuExtended_PurchaseUpgrade__Fi(int upgradeNumber)

{
  tFEApplication *ptVar1;
  short sVar2;
  long lVar3;
  char *pcVar4;
  tDialogMessageString *this;
  uint uVar5;
  tCarInfo tStack400;
  undefined auStack192 [136];
  undefined2 local_38;
  char *local_30;
  void *local_20;
  int local_1c;
  
  uVar5 = 1 << (upgradeNumber & 0x1fU);
  GetGarageCar__11tCarManagersR8tCarInfos
            (&carManager,(ushort)(byte)frontEnd.garageCar[0],&tStack400,0);
  ptVar1 = FEApp;
  if (((uint)tStack400.fUpgrades & uVar5) == 0) {
    if (tournamentManager.fMoney < tStack400.fPrices[upgradeNumber + 1]) {
      this = &FEApp->messagePopup;
      pcVar4 = TextSys_Word__Fi(0xa8);
      *(char **)&(ptVar1->messagePopup).tDialogBase.fFadeText = pcVar4;
      Display__11tDialogBase((tDialogBase *)this);
    }
    else {
      __12tDialogYesNo((tDialogYesNo *)auStack192);
      local_30 = TextSys_Word__Fi(0xa6);
      local_20 = (void *)0x321;
      local_1c = 0x322;
      local_38 = 0;
      sVar2 = Run__18tDialogInteractive((tDialogInteractive *)(tDialogYesNo *)auStack192);
      if (sVar2 != 0) {
        lVar3 = PurchaseUpgrade__11tCarManagersss
                          (&carManager,(ushort)(byte)frontEnd.garageCar[0],(short)uVar5,0);
        tournamentManager.fMoney = tournamentManager.fMoney - lVar3;
        AudioCmn_PlayFESFX__Fi(0x1a);
      }
      ___7tScreen((tScreen *)(tDialogYesNo *)auStack192,2);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_PurchaseUpgrade1__FR12tMenuCommand()
 // line 883, offset 0x8002d78c
	/* begin block 1 */
		// Start line: 884
		// Start offset: 0x8002D78C
	/* end block 1 */
	// End offset: 0x8002D78C
	// End Line: 884

	/* begin block 2 */
		// Start line: 1915
	/* end block 2 */
	// End Line: 1916

	/* begin block 3 */
		// Start line: 1921
	/* end block 3 */
	// End Line: 1922

	/* begin block 4 */
		// Start line: 1921
	/* end block 4 */
	// End Line: 1922

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_PurchaseUpgrade1__FR12tMenuCommand(void)

{
  MenuExtended_PurchaseUpgrade__Fi(1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_PurchaseUpgrade2__FR12tMenuCommand()
 // line 888, offset 0x8002d7ac
	/* begin block 1 */
		// Start line: 889
		// Start offset: 0x8002D7AC
	/* end block 1 */
	// End offset: 0x8002D7AC
	// End Line: 889

	/* begin block 2 */
		// Start line: 1927
	/* end block 2 */
	// End Line: 1928

	/* begin block 3 */
		// Start line: 1931
	/* end block 3 */
	// End Line: 1932

	/* begin block 4 */
		// Start line: 1931
	/* end block 4 */
	// End Line: 1932

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_PurchaseUpgrade2__FR12tMenuCommand(void)

{
  MenuExtended_PurchaseUpgrade__Fi(2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_PurchaseUpgrade3__FR12tMenuCommand()
 // line 893, offset 0x8002d7cc
	/* begin block 1 */
		// Start line: 894
		// Start offset: 0x8002D7CC
	/* end block 1 */
	// End offset: 0x8002D7CC
	// End Line: 894

	/* begin block 2 */
		// Start line: 1937
	/* end block 2 */
	// End Line: 1938

	/* begin block 3 */
		// Start line: 1941
	/* end block 3 */
	// End Line: 1942

	/* begin block 4 */
		// Start line: 1941
	/* end block 4 */
	// End Line: 1942

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_PurchaseUpgrade3__FR12tMenuCommand(void)

{
  MenuExtended_PurchaseUpgrade__Fi(0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SaveGame__FR12tMenuCommand()
 // line 898, offset 0x8002d7ec
	/* begin block 1 */
		// Start line: 899
		// Start offset: 0x8002D7EC

		/* begin block 1.1 */
			// Start line: 899
			// Start offset: 0x8002D7EC

			/* begin block 1.1.1 */
				// Start line: 900
				// Start offset: 0x8002D800

				/* begin block 1.1.1.1 */
					// Start line: 900
					// Start offset: 0x8002D800
				/* end block 1.1.1.1 */
				// End offset: 0x8002D800
				// End Line: 900
			/* end block 1.1.1 */
			// End offset: 0x8002D800
			// End Line: 900
		/* end block 1.1 */
		// End offset: 0x8002D82C
		// End Line: 902
	/* end block 1 */
	// End offset: 0x8002D82C
	// End Line: 902

	/* begin block 2 */
		// Start line: 1947
	/* end block 2 */
	// End Line: 1948

	/* begin block 3 */
		// Start line: 1951
	/* end block 3 */
	// End Line: 1952

	/* begin block 4 */
		// Start line: 1951
	/* end block 4 */
	// End Line: 1952

	/* begin block 5 */
		// Start line: 1952
	/* end block 5 */
	// End Line: 1953

	/* begin block 6 */
		// Start line: 1952
	/* end block 6 */
	// End Line: 1953

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SaveGame__FR12tMenuCommand(void)

{
  if ((CURRENTLYUSINGMEMCARD == (void *)0x0) &&
     (((*(uint *)&(menuDefs->itemControllerSettings).fDiffX ^ 1) & 1) != 0)) {
    GenericMenuSaveGame__Fi(0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GenericMenuLoadGame__Fi(int player /*$s2*/)
 // line 922, offset 0x8002d83c
	/* begin block 1 */
		// Start line: 923
		// Start offset: 0x8002D83C

		/* begin block 1.1 */
			// Start line: 923
			// Start offset: 0x8002D83C

			/* begin block 1.1.1 */
				// Start line: 925
				// Start offset: 0x8002D860

				/* begin block 1.1.1.1 */
					// Start line: 925
					// Start offset: 0x8002D860
					// Variables:
				// 		struct tScreenMemcard *this; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 925
						// Start offset: 0x8002D860
					/* end block 1.1.1.1.1 */
					// End offset: 0x8002D860
					// End Line: 925
				/* end block 1.1.1.1 */
				// End offset: 0x8002D860
				// End Line: 925

				/* begin block 1.1.1.2 */
					// Start line: 925
					// Start offset: 0x8002D860
					// Variables:
				// 		struct tScreenMemcard *this; // $v1

					/* begin block 1.1.1.2.1 */
						// Start line: 925
						// Start offset: 0x8002D860
					/* end block 1.1.1.2.1 */
					// End offset: 0x8002D860
					// End Line: 925
				/* end block 1.1.1.2 */
				// End offset: 0x8002D860
				// End Line: 925
			/* end block 1.1.1 */
			// End offset: 0x8002D8A8
			// End Line: 930
		/* end block 1.1 */
		// End offset: 0x8002D8A8
		// End Line: 930
	/* end block 1 */
	// End offset: 0x8002D8A8
	// End Line: 942

	/* begin block 2 */
		// Start line: 1979
	/* end block 2 */
	// End Line: 1980

	/* begin block 3 */
		// Start line: 2000
	/* end block 3 */
	// End Line: 2001

	/* begin block 4 */
		// Start line: 2000
	/* end block 4 */
	// End Line: 2001

	/* begin block 5 */
		// Start line: 2001
	/* end block 5 */
	// End Line: 2002

	/* begin block 6 */
		// Start line: 2001
	/* end block 6 */
	// End Line: 2002

void GenericMenuLoadGame__Fi(int player)

{
  tDialogMessageStringWithTimeout *ptVar1;
  tFEApplication *this;
  
  this = FEApp;
  if (CURRENTLYUSINGMEMCARD == (void *)0x0) {
    screenMemcard->fMemCardMessageTextSys = 0x27d;
    Redraw__14tFEApplication(this);
    LoadGame__FsbT1((short)player,(void *)0x0,&DAT_00000001);
    ptVar1 = &FEApp->MemCardDialog;
    screenMemcard->fMemCardMessageTextSys = -1;
    Hide__11tDialogBase((tDialogBase *)&(ptVar1->tDialogMessageString).tDialogBase.fFadeText);
  }
  Hide__11tDialogBase((tDialogBase *)
                      &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_LoadGame__FR12tMenuCommand()
 // line 945, offset 0x8002d8d0
	/* begin block 1 */
		// Start line: 946
		// Start offset: 0x8002D8D0
		// Variables:
	// 		struct tDialogYesNo AreYouSure; // stack offset -184

		/* begin block 1.1 */
			// Start line: 946
			// Start offset: 0x8002D8D0

			/* begin block 1.1.1 */
				// Start line: 946
				// Start offset: 0x8002D8D0

				/* begin block 1.1.1.1 */
					// Start line: 946
					// Start offset: 0x8002D8D0
				/* end block 1.1.1.1 */
				// End offset: 0x8002D8D0
				// End Line: 946
			/* end block 1.1.1 */
			// End offset: 0x8002D8D0
			// End Line: 946
		/* end block 1.1 */
		// End offset: 0x8002D8F8
		// End Line: 948

		/* begin block 1.2 */
			// Start line: 950
			// Start offset: 0x8002D8F8
			// Variables:
		// 		struct tDialogYesNo *this; // $s0

			/* begin block 1.2.1 */
				// Start line: 950
				// Start offset: 0x8002D8F8
			/* end block 1.2.1 */
			// End offset: 0x8002D8F8
			// End Line: 950
		/* end block 1.2 */
		// End offset: 0x8002D8F8
		// End Line: 950

		/* begin block 1.3 */
			// Start line: 950
			// Start offset: 0x8002D8F8

			/* begin block 1.3.1 */
				// Start line: 950
				// Start offset: 0x8002D8F8
			/* end block 1.3.1 */
			// End offset: 0x8002D8F8
			// End Line: 950
		/* end block 1.3 */
		// End offset: 0x8002D8F8
		// End Line: 950

		/* begin block 1.4 */
			// Start line: 946
			// Start offset: 0x8002D94C

			/* begin block 1.4.1 */
				// Start line: 946
				// Start offset: 0x8002D94C

				/* begin block 1.4.1.1 */
					// Start line: 946
					// Start offset: 0x8002D94C

					/* begin block 1.4.1.1.1 */
						// Start line: 946
						// Start offset: 0x8002D94C
					/* end block 1.4.1.1.1 */
					// End offset: 0x8002D958
					// End Line: 946
				/* end block 1.4.1.1 */
				// End offset: 0x8002D958
				// End Line: 946
			/* end block 1.4.1 */
			// End offset: 0x8002D958
			// End Line: 946
		/* end block 1.4 */
		// End offset: 0x8002D958
		// End Line: 946
	/* end block 1 */
	// End offset: 0x8002D958
	// End Line: 958

	/* begin block 2 */
		// Start line: 2043
	/* end block 2 */
	// End Line: 2044

	/* begin block 3 */
		// Start line: 2047
	/* end block 3 */
	// End Line: 2048

	/* begin block 4 */
		// Start line: 2047
	/* end block 4 */
	// End Line: 2048

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_LoadGame__FR12tMenuCommand(void)

{
  short sVar1;
  undefined auStack184 [136];
  undefined2 local_30;
  char *local_28;
  void *local_18;
  int local_14;
  
  if (((uint)(menuDefs->menuControllerConfig).tMenu.fItemList[5] & 1) == 0) {
    __12tDialogYesNo((tDialogYesNo *)auStack184);
    local_18 = (void *)0x321;
    local_14 = 0x322;
    local_30 = 0;
    local_28 = TextSys_Word__Fi(0x2c0);
    sVar1 = Run__18tDialogInteractive((tDialogInteractive *)auStack184);
    if (sVar1 != 0) {
      GenericMenuLoadGame__Fi((int)*(short *)&screenMemcard->fScreenFadeReadyTick);
    }
    ___7tScreen((tScreen *)(tDialogInteractive *)auStack184,2);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_TierFinished__FR12tMenuCommand(struct tMenuCommand *command /*$s0*/)
 // line 960, offset 0x8002d968
	/* begin block 1 */
		// Start line: 961
		// Start offset: 0x8002D968
		// Variables:
	// 		struct tAwardInformation award; // stack offset -80
	/* end block 1 */
	// End offset: 0x8002D9D8
	// End Line: 977

	/* begin block 2 */
		// Start line: 2074
	/* end block 2 */
	// End Line: 2075

	/* begin block 3 */
		// Start line: 2077
	/* end block 3 */
	// End Line: 2078

	/* begin block 4 */
		// Start line: 2077
	/* end block 4 */
	// End Line: 2078

void MenuExtended_TierFinished__FR12tMenuCommand(tMenuCommand *command)

{
  int iVar1;
  tMenu *ptVar2;
  tAwardInformation tStack80;
  
  command->type = kMenu_Command_GoToMenuOneWay;
  GetAwardInformation__18tTournamentManagerR17tAwardInformation(&tournamentManager,&tStack80);
  if (tStack80.fCompletedTier == (void *)0x0) {
    iVar1 = AskTheUserToSaveTheGame__Fv();
    if (iVar1 == 0) {
      ptVar2 = (tMenu *)&(menuDefs->itemMainOptions).tMenuItemGoToMenuButton.tMenuItemInteractive.
                         tMenuItem.fNewMenu;
    }
    else {
      ptVar2 = (tMenu *)&(menuDefs->menuPinkSlipStandings).fTransitionVal;
    }
  }
  else {
    ptVar2 = (tMenu *)((menuDefs->menuTrophyRoom).tMenuNFS4.tMenu.fItemList + 0xd);
  }
  command->nextMenu = ptVar2;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ MenuExtended_DidUserWinBeTheCop__Fv()
 // line 1011, offset 0x8002d9e8
	/* begin block 1 */
		// Start line: 1012
		// Start offset: 0x8002D9E8
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -232
	// 		struct tCarInfo *activateCar; // $s0
	// 		void * result; // $s3
	/* end block 1 */
	// End offset: 0x8002DAE4
	// End Line: 1037

	/* begin block 2 */
		// Start line: 1994
	/* end block 2 */
	// End Line: 1995

	/* begin block 3 */
		// Start line: 2177
	/* end block 3 */
	// End Line: 2178

	/* begin block 4 */
		// Start line: 2177
	/* end block 4 */
	// End Line: 2178

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * MenuExtended_DidUserWinBeTheCop__Fv(void)

{
  tCarInfo *ptVar1;
  undefined *puVar2;
  tCarInfo local_e8;
  
  GetStockCar__11tCarManagersR8tCarInfo(&carManager,(ushort)(byte)frontEnd.playerCar[0],&local_e8);
  puVar2 = (undefined *)0x0;
  if ((((local_e8.fCarClass == '\a') && (puVar2 = (undefined *)0x0, frontEnd.raceType == '\x01')) &&
      (puVar2 = (undefined *)0x0, frontEnd.gameMode != '\x01')) &&
     (puVar2 = (undefined *)0x0, GameSetup_gData.numPerps < GameSetup_gData.finalPerpArrests)) {
    ptVar1 = GetCarFromID__11tCarManagers
                       (&carManager,
                        *(short *)(gCarActivation +
                                  ((int)local_e8.fCarID + -0x16) * 5 +
                                  (int)frontEnd.carCountry[(int)local_e8.fCarID]));
    puVar2 = (undefined *)0x0;
    if (ptVar1->fAvailable == '\0') {
      SetCarAvailable__11tCarManager10tCarModelsb(&carManager,(int)ptVar1->fCarID,&DAT_00000001);
      frontEnd.congratsCopCar = ptVar1->fCarID;
      frontEnd.congratsCopCountry = frontEnd.carCountry[(int)local_e8.fCarID];
      puVar2 = &DAT_00000001;
    }
  }
  return puVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_PostGameMenu__FR12tMenuCommand(struct tMenuCommand *command /*$s0*/)
 // line 1040, offset 0x8002db04
	/* begin block 1 */
		// Start line: 1041
		// Start offset: 0x8002DB04

		/* begin block 1.1 */
			// Start line: 1041
			// Start offset: 0x8002DB04

			/* begin block 1.1.1 */
				// Start line: 1057
				// Start offset: 0x8002DB60

				/* begin block 1.1.1.1 */
					// Start line: 1059
					// Start offset: 0x8002DB60

					/* begin block 1.1.1.1.1 */
						// Start line: 1060
						// Start offset: 0x8002DB78

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1061
							// Start offset: 0x8002DB78
							// Variables:
						// 		struct tScreenTournamentStandings *this; // $v1

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1061
								// Start offset: 0x8002DB78
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8002DB78
							// End Line: 1061
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8002DB78
						// End Line: 1061
					/* end block 1.1.1.1.1 */
					// End offset: 0x8002DB78
					// End Line: 1061

					/* begin block 1.1.1.1.2 */
						// Start line: 1065
						// Start offset: 0x8002DB98

						/* begin block 1.1.1.1.2.1 */
							// Start line: 1066
							// Start offset: 0x8002DB98
							// Variables:
						// 		struct tScreenTournamentStandings *this; // $v1

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 1066
								// Start offset: 0x8002DB98
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x8002DB98
							// End Line: 1066
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x8002DB98
						// End Line: 1066
					/* end block 1.1.1.1.2 */
					// End offset: 0x8002DB98
					// End Line: 1066
				/* end block 1.1.1.1 */
				// End offset: 0x8002DB98
				// End Line: 1066
			/* end block 1.1.1 */
			// End offset: 0x8002DBF4
			// End Line: 1083
		/* end block 1.1 */
		// End offset: 0x8002DBF4
		// End Line: 1083
	/* end block 1 */
	// End offset: 0x8002DBF4
	// End Line: 1083

	/* begin block 2 */
		// Start line: 2250
	/* end block 2 */
	// End Line: 2251

	/* begin block 3 */
		// Start line: 2254
	/* end block 3 */
	// End Line: 2255

	/* begin block 4 */
		// Start line: 2254
	/* end block 4 */
	// End Line: 2255

/* WARNING: Type propagation algorithm not settling */

void MenuExtended_PostGameMenu__FR12tMenuCommand(tMenuCommand *command)

{
  short sVar1;
  void *pvVar2;
  tMenu *ptVar3;
  tScreenTournamentStandings *ptVar4;
  
  StatChk_ClearNewRecords__Fv();
  command->type = kMenu_Command_GoToMenuOneWay;
  if (frontEnd.raceType == '\x02') {
    sVar1 = IsTournamentFinished__18tTournamentManager(&tournamentManager);
    if (sVar1 == 0) {
      command->nextMenu = (tMenu *)((menuDefs->menuControllerDualShockAnalog).tMenu._vf + 6);
      ptVar4 = (tScreenTournamentStandings *)screenTournamentStandings3item;
    }
    else {
      command->nextMenu =
           (tMenu *)((menuDefs->itemSaveGame).tMenuItemGoToMenuButtonFade.tMenuItemGoToMenuButton.
                     tMenuItemInteractive.tMenuItem._vf + 4);
      ptVar4 = screenTournamentStandings;
    }
    *(undefined **)&ptVar4->gotbilled = &DAT_00000001;
    return;
  }
  if ((byte)frontEnd.raceType < 3) {
    if ((frontEnd.raceType == '\x01') &&
       (pvVar2 = MenuExtended_DidUserWinBeTheCop__Fv(), pvVar2 != (void *)0x0)) {
      ptVar3 = (tMenu *)&(menuDefs->iteratorChangeTrophy).fMinValue;
      goto LAB_8002dbf0;
    }
  }
  else {
    if (frontEnd.raceType == '\x06') {
      ptVar3 = (tMenu *)((menuDefs->menuControllerAnalog).tMenu.fItemList + 1);
      goto LAB_8002dbf0;
    }
  }
  ptVar3 = (tMenu *)&(menuDefs->itemMainOptions).tMenuItemGoToMenuButton.tMenuItemInteractive.
                     tMenuItem.fNewMenu;
LAB_8002dbf0:
  command->nextMenu = ptVar3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_FinishedPlayer1GetName__FR12tMenuCommand(struct tMenuCommand *command /*$s2*/)
 // line 1090, offset 0x8002dc04
	/* begin block 1 */
		// Start line: 1091
		// Start offset: 0x8002DC04

		/* begin block 1.1 */
			// Start line: 1091
			// Start offset: 0x8002DC04

			/* begin block 1.1.1 */
				// Start line: 1094
				// Start offset: 0x8002DC4C

				/* begin block 1.1.1.1 */
					// Start line: 1094
					// Start offset: 0x8002DC4C
					// Variables:
				// 		struct tUserNameMenuItem *this; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 1094
						// Start offset: 0x8002DC4C
					/* end block 1.1.1.1.1 */
					// End offset: 0x8002DC4C
					// End Line: 1094
				/* end block 1.1.1.1 */
				// End offset: 0x8002DC4C
				// End Line: 1094

				/* begin block 1.1.1.2 */
					// Start line: 1094
					// Start offset: 0x8002DC4C
					// Variables:
				// 		struct tScreenUserName *this; // $v0
				// 		struct tOptionsMenu *m; // $a0

					/* begin block 1.1.1.2.1 */
						// Start line: 1094
						// Start offset: 0x8002DC4C
					/* end block 1.1.1.2.1 */
					// End offset: 0x8002DC4C
					// End Line: 1094
				/* end block 1.1.1.2 */
				// End offset: 0x8002DC4C
				// End Line: 1094
			/* end block 1.1.1 */
			// End offset: 0x8002DC4C
			// End Line: 1094

			/* begin block 1.1.2 */
				// Start line: 1101
				// Start offset: 0x8002DC94
				// Variables:
			// 		struct Car_tStats *dummyCars; // $s1
			// 		short nBestCarIndex; // stack offset -24

				/* begin block 1.1.2.1 */
					// Start line: 1101
					// Start offset: 0x8002DC94

					/* begin block 1.1.2.1.1 */
						// Start line: 1101
						// Start offset: 0x8002DC94
					/* end block 1.1.2.1.1 */
					// End offset: 0x8002DC94
					// End Line: 1101
				/* end block 1.1.2.1 */
				// End offset: 0x8002DC94
				// End Line: 1101
			/* end block 1.1.2 */
			// End offset: 0x8002DCFC
			// End Line: 1121
		/* end block 1.1 */
		// End offset: 0x8002DCFC
		// End Line: 1121
	/* end block 1 */
	// End offset: 0x8002DCFC
	// End Line: 1121

	/* begin block 2 */
		// Start line: 2352
	/* end block 2 */
	// End Line: 2353

	/* begin block 3 */
		// Start line: 2360
	/* end block 3 */
	// End Line: 2361

	/* begin block 4 */
		// Start line: 2360
	/* end block 4 */
	// End Line: 2361

void MenuExtended_FinishedPlayer1GetName__FR12tMenuCommand(tMenuCommand *command)

{
  tFEApplication *ptVar1;
  tGlobalMenuDefs *ptVar2;
  tScreenUserName *ptVar3;
  short sVar4;
  void *pvVar5;
  tMenu *ptVar6;
  short local_18 [4];
  
  ptVar1 = FEApp;
  command->type = kMenu_Command_GoToMenuOneWay;
  ptVar2 = menuDefs;
  if (((ptVar1->NoInputMemCardDialog).tDialogMessageString.Centerit == (void *)0x0) ||
     ((ptVar1->NoInputMemCardDialog).tDialogMessageString.tDialogBase.fFadeText != 0)) {
    pvVar5 = StatChk_IsRecordLapTime__FP10Car_tStatssPs
                       (&Cars_gNewCarStatsList,(short)Cars_gNumRaceCars,local_18);
    if (pvVar5 != (void *)0x0) {
      StatChk_SaveRecordLapTime__FP10Car_tStatsss
                (&Cars_gNewCarStatsList,(short)Cars_gNumRaceCars,local_18[0]);
    }
    sVar4 = StatChk_IsTopTime__FP10Car_tStatss(&Cars_gNewCarStatsList,(short)Cars_gNumRaceCars);
    if (sVar4 != 0) {
      StatChk_SaveTopTime__FP10Car_tStatss(&Cars_gNewCarStatsList,(short)Cars_gNumRaceCars);
    }
    command->nextMenu = (tMenu *)&(menuDefs->menuItemUserName2).fMaxStringLength;
  }
  else {
    *(undefined2 *)
     &(menuDefs->itemControllerJoyRange).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
      fNewMenu = 1;
    (ptVar2->iteratorControllerDeadSpot2).fIndex = frontEnd.playerNameList + 8;
    *(undefined2 *)
     &(ptVar2->itemControllerDeadSpot2).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
      fFlags = 7;
    ptVar3 = screenUserName;
    ptVar6 = (tMenu *)&(ptVar2->menuItemUserName1).tMenuItem.fNumFrames;
    *(undefined2 *)
     &(ptVar2->itemControllerDeadSpot2).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
      fTextDescription = 0;
    *(undefined2 *)
     ((int)&(ptVar2->itemControllerDeadSpot2).tMenuItemLeftRightSlider.tMenuItemInteractive.
            tMenuItem.fFlags + 2) = 0;
    *(tMenu **)((ptVar3->tScreen)._vf + 6) = ptVar6;
    command->nextMenu = ptVar6;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_FinishedPlayer2GetName__FR12tMenuCommand(struct tMenuCommand *command /*$s2*/)
 // line 1125, offset 0x8002dd14
	/* begin block 1 */
		// Start line: 1126
		// Start offset: 0x8002DD14
		// Variables:
	// 		struct Car_tStats *dummyCars; // $s1
	// 		short nBestCarIndex; // stack offset -24

		/* begin block 1.1 */
			// Start line: 1126
			// Start offset: 0x8002DD14

			/* begin block 1.1.1 */
				// Start line: 1126
				// Start offset: 0x8002DD14
			/* end block 1.1.1 */
			// End offset: 0x8002DD14
			// End Line: 1126
		/* end block 1.1 */
		// End offset: 0x8002DD14
		// End Line: 1126
	/* end block 1 */
	// End offset: 0x8002DD84
	// End Line: 1143

	/* begin block 2 */
		// Start line: 2427
	/* end block 2 */
	// End Line: 2428

	/* begin block 3 */
		// Start line: 2432
	/* end block 3 */
	// End Line: 2433

	/* begin block 4 */
		// Start line: 2432
	/* end block 4 */
	// End Line: 2433

void MenuExtended_FinishedPlayer2GetName__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  short sVar2;
  void *pvVar3;
  short local_18 [4];
  
  pvVar3 = StatChk_IsRecordLapTime__FP10Car_tStatssPs
                     (&Cars_gNewCarStatsList,(short)Cars_gNumRaceCars,local_18);
  if (pvVar3 != (void *)0x0) {
    StatChk_SaveRecordLapTime__FP10Car_tStatsss
              (&Cars_gNewCarStatsList,(short)Cars_gNumRaceCars,local_18[0]);
  }
  sVar2 = StatChk_IsTopTime__FP10Car_tStatss(&Cars_gNewCarStatsList,(short)Cars_gNumRaceCars);
  if (sVar2 != 0) {
    StatChk_SaveTopTime__FP10Car_tStatss(&Cars_gNewCarStatsList,(short)Cars_gNumRaceCars);
  }
  ptVar1 = menuDefs;
  command->type = kMenu_Command_GoToMenuOneWay;
  command->nextMenu = (tMenu *)&(ptVar1->menuItemUserName2).fMaxStringLength;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetPinkSlips__FR12tMenuCommand()
 // line 1146, offset 0x8002ddb4
	/* begin block 1 */
		// Start line: 1147
		// Start offset: 0x8002DDB4
		// Variables:
	// 		short i; // $v1
	/* end block 1 */
	// End offset: 0x8002DE64
	// End Line: 1160

	/* begin block 2 */
		// Start line: 2483
	/* end block 2 */
	// End Line: 2484

	/* begin block 3 */
		// Start line: 2487
	/* end block 3 */
	// End Line: 2488

	/* begin block 4 */
		// Start line: 2487
	/* end block 4 */
	// End Line: 2488

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetPinkSlips__FR12tMenuCommand(void)

{
  int iVar1;
  int iVar2;
  
  SwapBackground__11tScreenMaini(screenMain,-1);
  iVar2 = 0;
  frontEnd.raceType = '\x06';
  frontEnd.gameMode = '\x01';
  frontEnd.oppNumber = '\0';
  frontEnd.pinkSlipsForfeit = -1;
  frontEnd.pinkSlipsTrackIndex = '\0';
  iVar1 = 0;
  do {
    frontEnd.pinkSlipsWins[iVar1 >> 0x10] = '\0';
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 0x10000;
  } while (iVar2 * 0x10000 >> 0x10 < 2);
  iVar1 = 0;
  do {
    *(undefined2 *)((int)frontEnd.pinkSlipsWinner + ((iVar1 << 0x10) >> 0xf)) = 0xffff;
    iVar1 = iVar1 + 1;
  } while (iVar1 * 0x10000 >> 0x10 < 5);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_AwardPinkSlipsCar__FR12tMenuCommand(struct tMenuCommand *command /*$s5*/)
 // line 1163, offset 0x8002de74
	/* begin block 1 */
		// Start line: 1164
		// Start offset: 0x8002DE74
		// Variables:
	// 		char string[80]; // stack offset -488
	// 		struct tDialogYesNo RetryCancelDialog; // stack offset -408
	// 		int fWinner; // $s3
	// 		struct tCarInfo carInfo; // stack offset -240

		/* begin block 1.1 */
			// Start line: 1164
			// Start offset: 0x8002DE74

			/* begin block 1.1.1 */
				// Start line: 1164
				// Start offset: 0x8002DE74
			/* end block 1.1.1 */
			// End offset: 0x8002DE74
			// End Line: 1164
		/* end block 1.1 */
		// End offset: 0x8002DE74
		// End Line: 1164

		/* begin block 1.2 */
			// Start line: 1164
			// Start offset: 0x8002DE74
			// Variables:
		// 		struct tScreenPinkSlipCongrats *this; // $v1

			/* begin block 1.2.1 */
				// Start line: 1164
				// Start offset: 0x8002DE74
			/* end block 1.2.1 */
			// End offset: 0x8002DE74
			// End Line: 1164
		/* end block 1.2 */
		// End offset: 0x8002DE74
		// End Line: 1164

		/* begin block 1.3 */
			// Start line: 1164
			// Start offset: 0x8002DE74
			// Variables:
		// 		struct tDialogMessageString *this; // $a0
		// 		char *mess; // $v0

			/* begin block 1.3.1 */
				// Start line: 1164
				// Start offset: 0x8002DE74
			/* end block 1.3.1 */
			// End offset: 0x8002DE74
			// End Line: 1164
		/* end block 1.3 */
		// End offset: 0x8002DE74
		// End Line: 1164

		/* begin block 1.4 */
			// Start line: 1181
			// Start offset: 0x8002DF0C

			/* begin block 1.4.1 */
				// Start line: 1181
				// Start offset: 0x8002DF0C

				/* begin block 1.4.1.1 */
					// Start line: 1181
					// Start offset: 0x8002DF0C
				/* end block 1.4.1.1 */
				// End offset: 0x8002DF0C
				// End Line: 1181
			/* end block 1.4.1 */
			// End offset: 0x8002DF0C
			// End Line: 1181
		/* end block 1.4 */
		// End offset: 0x8002DF28
		// End Line: 1182

		/* begin block 1.5 */
			// Start line: 1183
			// Start offset: 0x8002DF38
			// Variables:
		// 		struct tDialogMessageString *this; // $s0

			/* begin block 1.5.1 */
				// Start line: 1183
				// Start offset: 0x8002DF38
			/* end block 1.5.1 */
			// End offset: 0x8002DF38
			// End Line: 1183
		/* end block 1.5 */
		// End offset: 0x8002DF38
		// End Line: 1183

		/* begin block 1.6 */
			// Start line: 1204
			// Start offset: 0x8002E004

			/* begin block 1.6.1 */
				// Start line: 1204
				// Start offset: 0x8002E004

				/* begin block 1.6.1.1 */
					// Start line: 1204
					// Start offset: 0x8002E004
				/* end block 1.6.1.1 */
				// End offset: 0x8002E004
				// End Line: 1204
			/* end block 1.6.1 */
			// End offset: 0x8002E004
			// End Line: 1204
		/* end block 1.6 */
		// End offset: 0x8002E020
		// End Line: 1205

		/* begin block 1.7 */
			// Start line: 1206
			// Start offset: 0x8002E030

			/* begin block 1.7.1 */
				// Start line: 1206
				// Start offset: 0x8002E030

				/* begin block 1.7.1.1 */
					// Start line: 1206
					// Start offset: 0x8002E030

					/* begin block 1.7.1.1.1 */
						// Start line: 1206
						// Start offset: 0x8002E030
					/* end block 1.7.1.1.1 */
					// End offset: 0x8002E030
					// End Line: 1206
				/* end block 1.7.1.1 */
				// End offset: 0x8002E030
				// End Line: 1206
			/* end block 1.7.1 */
			// End offset: 0x8002E030
			// End Line: 1206
		/* end block 1.7 */
		// End offset: 0x8002E030
		// End Line: 1206
	/* end block 1 */
	// End offset: 0x8002E030
	// End Line: 1206

	/* begin block 2 */
		// Start line: 2534
	/* end block 2 */
	// End Line: 2535

	/* begin block 3 */
		// Start line: 2538
	/* end block 3 */
	// End Line: 2539

	/* begin block 4 */
		// Start line: 2538
	/* end block 4 */
	// End Line: 2539

void MenuExtended_AwardPinkSlipsCar__FR12tMenuCommand(tMenuCommand *command)

{
  short playerNum;
  tDialogMessageStringWithTimeout *ptVar1;
  tFEApplication *ptVar2;
  tFEApplication *ptVar3;
  tGlobalMenuDefs *ptVar4;
  char *__format;
  char *pcVar5;
  int player;
  char acStack488 [80];
  undefined auStack408 [136];
  undefined2 local_110;
  void *local_f8;
  int local_f4;
  char local_f0 [196];
  byte local_2c;
  byte local_2b;
  
  __12tDialogYesNo((tDialogYesNo *)auStack408);
  local_f8 = (void *)0x291;
  local_f4 = 0x292;
  local_110 = 1;
  playerNum = *(short *)&(screenPinkSlipCongrats->tScreenCongrats).fCarCY;
  player = (int)playerNum;
  __format = TextSys_Word__Fi(0x29a);
  pcVar5 = PlayerName__Fi(player);
  sprintf(acStack488,__format,pcVar5,player + 1);
  ptVar1 = &FEApp->MemCardDialog;
  *(char **)&(FEApp->NoInputMemCardDialog).tDialogMessageString.tDialogBase.MaxW = acStack488;
  Display__11tDialogBase((tDialogBase *)&(ptVar1->tDialogMessageString).tDialogBase.fFadeText);
  while ((FEApp->NoInputMemCardDialog).tDialogMessageString.tDialogBase.startTicks != 1) {
    Redraw__14tFEApplication(FEApp);
  }
  Redraw__14tFEApplication(FEApp);
  Init_Memcard__FbT0((void *)0x0,&DAT_00000001);
  GetPinkSlipsCar__11tCarManagersR8tCarInfos
            (&carManager,(ushort)*(byte *)((int)&frontEnd + -player + 0x126),
             (tCarInfo *)(auStack408 + 0xa8),(short)((uint)((-player + 1) * 0x10000) >> 0x10));
  AddToPinkSlipsList__11tCarManagersss(&carManager,(short)local_f0[0],(ushort)local_2b,playerNum);
  AddUpgradesToPinkSlipsList__11tCarManagersss
            (&carManager,(ushort)(byte)frontEnd.pinkSlipsCar[player],(ushort)local_2c,playerNum);
  SavePinkSlipsCarsWithErrorDialogs__Fsss(playerNum,2,-1);
  Hide__11tDialogBase((tDialogBase *)
                      &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
  command->type = kMenu_Command_GoToMenuOneWay;
  ptVar2 = FEApp;
  command->nextMenu =
       (tMenu *)&(menuDefs->itemMainOptions).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
                 fNewMenu;
  __format = TextSys_Word__Fi(0x274);
  ptVar3 = FEApp;
  *(char **)&(ptVar2->NoInputMemCardDialog).tDialogMessageString.tDialogBase.MaxW = __format;
  Display__11tDialogBase
            ((tDialogBase *)&(ptVar3->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
  while ((FEApp->NoInputMemCardDialog).tDialogMessageString.tDialogBase.startTicks != 1) {
    Redraw__14tFEApplication(FEApp);
  }
  Redraw__14tFEApplication(FEApp);
  GenericMenuLoadGame__Fi(0);
  DeInit_Memcard__Fv();
  Hide__11tDialogBase((tDialogBase *)
                      &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
  ptVar4 = menuDefs;
  command->type = kMenu_Command_GoToMenuOneWay;
  command->nextMenu =
       (tMenu *)&(ptVar4->itemMainOptions).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
                 fNewMenu;
  ___7tScreen((tScreen *)auStack408,2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToGarage__FR12tMenuCommand(struct tMenuCommand *command /*$s1*/)
 // line 1222, offset 0x8002e09c
	/* begin block 1 */
		// Start line: 1223
		// Start offset: 0x8002E09C

		/* begin block 1.1 */
			// Start line: 1223
			// Start offset: 0x8002E09C
			// Variables:
		// 		struct tListIteratorCar *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 1223
				// Start offset: 0x8002E09C
			/* end block 1.1.1 */
			// End offset: 0x8002E09C
			// End Line: 1223
		/* end block 1.1 */
		// End offset: 0x8002E09C
		// End Line: 1223

		/* begin block 1.2 */
			// Start line: 1223
			// Start offset: 0x8002E09C

			/* begin block 1.2.1 */
				// Start line: 1223
				// Start offset: 0x8002E09C

				/* begin block 1.2.1.1 */
					// Start line: 1223
					// Start offset: 0x8002E09C
				/* end block 1.2.1.1 */
				// End offset: 0x8002E09C
				// End Line: 1223
			/* end block 1.2.1 */
			// End offset: 0x8002E09C
			// End Line: 1223
		/* end block 1.2 */
		// End offset: 0x8002E120
		// End Line: 1231
	/* end block 1 */
	// End offset: 0x8002E120
	// End Line: 1232

	/* begin block 2 */
		// Start line: 2664
	/* end block 2 */
	// End Line: 2665

	/* begin block 3 */
		// Start line: 2668
	/* end block 3 */
	// End Line: 2669

	/* begin block 4 */
		// Start line: 2668
	/* end block 4 */
	// End Line: 2669

void MenuExtended_GoToGarage__FR12tMenuCommand(tMenuCommand *command)

{
  tMenuItemGoToMenuNFS4Button *ptVar1;
  tMenu *ptVar2;
  
  frontEnd.carListType = '\x01';
  ptVar1 = &menuDefs->itemTrackInfoContinue;
  *(undefined4 *)
   (menuDefs->itemTrackInfoContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf =
       0x40;
  Decrement__16tListIteratorCar7tPlayer
            ((tListIteratorCar *)
             &(ptVar1->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem.fSelFade,~kPlayerOne)
  ;
  Increment__16tListIteratorCar7tPlayer
            ((tListIteratorCar *)
             &(menuDefs->itemTrackInfoContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.
              tMenuItem.fSelFade,~kPlayerOne);
  command->type = kMenu_Command_GoToMenu;
  if (tournamentManager.fCurrentTrack == 0) {
    ptVar2 = (tMenu *)((menuDefs->menuTrackInfo).tMenu._vf + 10);
  }
  else {
    ptVar2 = (tMenu *)&(menuDefs->itemCarSelectRace).fOffset;
  }
  command->nextMenu = ptVar2;
  SetState__16tScreenCarSelecti(screenCarSelect,1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToTournTrophyRoom__FR12tMenuCommand()
 // line 1235, offset 0x8002e144
	/* begin block 1 */
		// Start line: 1236
		// Start offset: 0x8002E144
	/* end block 1 */
	// End offset: 0x8002E144
	// End Line: 1237

	/* begin block 2 */
		// Start line: 2694
	/* end block 2 */
	// End Line: 2695

	/* begin block 3 */
		// Start line: 2698
	/* end block 3 */
	// End Line: 2699

	/* begin block 4 */
		// Start line: 2698
	/* end block 4 */
	// End Line: 2699

	/* begin block 5 */
		// Start line: 2699
	/* end block 5 */
	// End Line: 2700

	/* begin block 6 */
		// Start line: 2699
	/* end block 6 */
	// End Line: 2700

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_GoToTournTrophyRoom__FR12tMenuCommand(void)

{
  frontEnd.tier = '\0';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_GoToSETrophyRoom__FR12tMenuCommand()
 // line 1240, offset 0x8002e150
	/* begin block 1 */
		// Start line: 1241
		// Start offset: 0x8002E150
	/* end block 1 */
	// End offset: 0x8002E150
	// End Line: 1242

	/* begin block 2 */
		// Start line: 2704
	/* end block 2 */
	// End Line: 2705

	/* begin block 3 */
		// Start line: 2708
	/* end block 3 */
	// End Line: 2709

	/* begin block 4 */
		// Start line: 2708
	/* end block 4 */
	// End Line: 2709

	/* begin block 5 */
		// Start line: 2709
	/* end block 5 */
	// End Line: 2710

	/* begin block 6 */
		// Start line: 2709
	/* end block 6 */
	// End Line: 2710

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_GoToSETrophyRoom__FR12tMenuCommand(void)

{
  frontEnd.tier = '\x01';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetBeginner__FR12tMenuCommand()
 // line 1245, offset 0x8002e160
	/* begin block 1 */
		// Start line: 1246
		// Start offset: 0x8002E160
	/* end block 1 */
	// End offset: 0x8002E160
	// End Line: 1247

	/* begin block 2 */
		// Start line: 2714
	/* end block 2 */
	// End Line: 2715

	/* begin block 3 */
		// Start line: 2718
	/* end block 3 */
	// End Line: 2719

	/* begin block 4 */
		// Start line: 2718
	/* end block 4 */
	// End Line: 2719

	/* begin block 5 */
		// Start line: 2719
	/* end block 5 */
	// End Line: 2720

	/* begin block 6 */
		// Start line: 2719
	/* end block 6 */
	// End Line: 2720

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetBeginner__FR12tMenuCommand(void)

{
  frontEnd.skillLevel = '\0';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetIntermediate__FR12tMenuCommand()
 // line 1250, offset 0x8002e16c
	/* begin block 1 */
		// Start line: 1251
		// Start offset: 0x8002E16C
	/* end block 1 */
	// End offset: 0x8002E16C
	// End Line: 1252

	/* begin block 2 */
		// Start line: 2724
	/* end block 2 */
	// End Line: 2725

	/* begin block 3 */
		// Start line: 2728
	/* end block 3 */
	// End Line: 2729

	/* begin block 4 */
		// Start line: 2728
	/* end block 4 */
	// End Line: 2729

	/* begin block 5 */
		// Start line: 2729
	/* end block 5 */
	// End Line: 2730

	/* begin block 6 */
		// Start line: 2729
	/* end block 6 */
	// End Line: 2730

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetIntermediate__FR12tMenuCommand(void)

{
  frontEnd.skillLevel = '\x01';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_SetExpert__FR12tMenuCommand()
 // line 1255, offset 0x8002e17c
	/* begin block 1 */
		// Start line: 1256
		// Start offset: 0x8002E17C
	/* end block 1 */
	// End offset: 0x8002E17C
	// End Line: 1257

	/* begin block 2 */
		// Start line: 2734
	/* end block 2 */
	// End Line: 2735

	/* begin block 3 */
		// Start line: 2738
	/* end block 3 */
	// End Line: 2739

	/* begin block 4 */
		// Start line: 2738
	/* end block 4 */
	// End Line: 2739

	/* begin block 5 */
		// Start line: 2739
	/* end block 5 */
	// End Line: 2740

	/* begin block 6 */
		// Start line: 2739
	/* end block 6 */
	// End Line: 2740

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MenuExtended_SetExpert__FR12tMenuCommand(void)

{
  frontEnd.skillLevel = '\x02';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_ExitTourney__FR12tMenuCommand(struct tMenuCommand *command /*$s1*/)
 // line 1260, offset 0x8002e18c
	/* begin block 1 */
		// Start line: 1261
		// Start offset: 0x8002E18C
		// Variables:
	// 		struct tDialogYesNo AreYouSure; // stack offset -184

		/* begin block 1.1 */
			// Start line: 1261
			// Start offset: 0x8002E18C
			// Variables:
		// 		struct tDialogYesNo *this; // $s0

			/* begin block 1.1.1 */
				// Start line: 1261
				// Start offset: 0x8002E18C
			/* end block 1.1.1 */
			// End offset: 0x8002E18C
			// End Line: 1261
		/* end block 1.1 */
		// End offset: 0x8002E18C
		// End Line: 1261

		/* begin block 1.2 */
			// Start line: 1261
			// Start offset: 0x8002E18C

			/* begin block 1.2.1 */
				// Start line: 1261
				// Start offset: 0x8002E18C
			/* end block 1.2.1 */
			// End offset: 0x8002E18C
			// End Line: 1261
		/* end block 1.2 */
		// End offset: 0x8002E18C
		// End Line: 1261

		/* begin block 1.3 */
			// Start line: 1261
			// Start offset: 0x8002E1FC

			/* begin block 1.3.1 */
				// Start line: 1261
				// Start offset: 0x8002E1FC

				/* begin block 1.3.1.1 */
					// Start line: 1261
					// Start offset: 0x8002E1FC

					/* begin block 1.3.1.1.1 */
						// Start line: 1261
						// Start offset: 0x8002E1FC
					/* end block 1.3.1.1.1 */
					// End offset: 0x8002E1FC
					// End Line: 1261
				/* end block 1.3.1.1 */
				// End offset: 0x8002E1FC
				// End Line: 1261
			/* end block 1.3.1 */
			// End offset: 0x8002E1FC
			// End Line: 1261
		/* end block 1.3 */
		// End offset: 0x8002E1FC
		// End Line: 1261
	/* end block 1 */
	// End offset: 0x8002E1FC
	// End Line: 1261

	/* begin block 2 */
		// Start line: 2744
	/* end block 2 */
	// End Line: 2745

	/* begin block 3 */
		// Start line: 2748
	/* end block 3 */
	// End Line: 2749

	/* begin block 4 */
		// Start line: 2748
	/* end block 4 */
	// End Line: 2749

void MenuExtended_ExitTourney__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  short sVar2;
  undefined auStack184 [136];
  undefined2 local_30;
  char *local_28;
  void *local_18;
  int local_14;
  
  __12tDialogYesNo((tDialogYesNo *)auStack184);
  local_18 = (void *)0x321;
  local_14 = 0x322;
  local_30 = 0;
  local_28 = TextSys_Word__Fi(0x9d);
  sVar2 = Run__18tDialogInteractive((tDialogInteractive *)auStack184);
  ptVar1 = menuDefs;
  if (sVar2 == 0) {
    command->type = kMenu_Command_None;
  }
  else {
    command->type = kMenu_Command_GoToMenuOneWay;
    command->nextMenu =
         (tMenu *)&(ptVar1->itemMainOptions).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
                   fNewMenu;
  }
  ___7tScreen((tScreen *)auStack184,2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_ExitPinkSlipsEarly__FR12tMenuCommand(struct tMenuCommand *command /*$s3*/)
 // line 1274, offset 0x8002e21c
	/* begin block 1 */
		// Start line: 1275
		// Start offset: 0x8002E21C
		// Variables:
	// 		struct tDialogYesNo AreYouSure; // stack offset -272

		/* begin block 1.1 */
			// Start line: 1275
			// Start offset: 0x8002E21C
			// Variables:
		// 		struct tDialogYesNo *this; // $s0

			/* begin block 1.1.1 */
				// Start line: 1275
				// Start offset: 0x8002E21C
			/* end block 1.1.1 */
			// End offset: 0x8002E21C
			// End Line: 1275
		/* end block 1.1 */
		// End offset: 0x8002E21C
		// End Line: 1275

		/* begin block 1.2 */
			// Start line: 1275
			// Start offset: 0x8002E21C

			/* begin block 1.2.1 */
				// Start line: 1275
				// Start offset: 0x8002E21C
			/* end block 1.2.1 */
			// End offset: 0x8002E21C
			// End Line: 1275
		/* end block 1.2 */
		// End offset: 0x8002E21C
		// End Line: 1275

		/* begin block 1.3 */
			// Start line: 1275
			// Start offset: 0x8002E21C

			/* begin block 1.3.1 */
				// Start line: 1280
				// Start offset: 0x8002E278
				// Variables:
			// 		char string[80]; // stack offset -104

				/* begin block 1.3.1.1 */
					// Start line: 1284
					// Start offset: 0x8002E278
					// Variables:
				// 		int player; // $s1

					/* begin block 1.3.1.1.1 */
						// Start line: 1286
						// Start offset: 0x8002E288

						/* begin block 1.3.1.1.1.1 */
							// Start line: 1288
							// Start offset: 0x8002E294

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 1288
								// Start offset: 0x8002E294
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x8002E294
							// End Line: 1288
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x8002E294
						// End Line: 1288
					/* end block 1.3.1.1.1 */
					// End offset: 0x8002E294
					// End Line: 1288
				/* end block 1.3.1.1 */
				// End offset: 0x8002E2EC
				// End Line: 1291
			/* end block 1.3.1 */
			// End offset: 0x8002E324
			// End Line: 1299
		/* end block 1.3 */
		// End offset: 0x8002E324
		// End Line: 1299

		/* begin block 1.4 */
			// Start line: 1275
			// Start offset: 0x8002E324

			/* begin block 1.4.1 */
				// Start line: 1275
				// Start offset: 0x8002E324

				/* begin block 1.4.1.1 */
					// Start line: 1275
					// Start offset: 0x8002E324

					/* begin block 1.4.1.1.1 */
						// Start line: 1275
						// Start offset: 0x8002E324
					/* end block 1.4.1.1.1 */
					// End offset: 0x8002E324
					// End Line: 1275
				/* end block 1.4.1.1 */
				// End offset: 0x8002E324
				// End Line: 1275
			/* end block 1.4.1 */
			// End offset: 0x8002E324
			// End Line: 1275
		/* end block 1.4 */
		// End offset: 0x8002E324
		// End Line: 1275
	/* end block 1 */
	// End offset: 0x8002E324
	// End Line: 1275

	/* begin block 2 */
		// Start line: 2775
	/* end block 2 */
	// End Line: 2776

	/* begin block 3 */
		// Start line: 2778
	/* end block 3 */
	// End Line: 2779

	/* begin block 4 */
		// Start line: 2778
	/* end block 4 */
	// End Line: 2779

void MenuExtended_ExitPinkSlipsEarly__FR12tMenuCommand(tMenuCommand *command)

{
  bool bVar1;
  tGlobalMenuDefs *ptVar2;
  short sVar3;
  char *__format;
  char *pcVar4;
  int iVar5;
  int player;
  undefined auStack272 [136];
  undefined2 local_88;
  char *local_80;
  void *local_70;
  int local_6c;
  undefined auStack104 [80];
  
  __12tDialogYesNo((tDialogYesNo *)auStack272);
  local_70 = (void *)0x321;
  local_6c = 0x322;
  local_88 = 0;
  local_80 = TextSys_Word__Fi(0x9d);
  sVar3 = Run__18tDialogInteractive((tDialogInteractive *)auStack272);
  if (sVar3 != 0) {
    Init_Memcard__FbT0((void *)0x0,&DAT_00000001);
    bVar1 = true;
    player = 0;
    while (bVar1) {
      __format = TextSys_Word__Fi(0x297);
      pcVar4 = PlayerName__Fi(player);
      iVar5 = player + 1;
      sprintf(auStack272 + 0xa8,__format,pcVar4,iVar5);
      *(undefined **)&(FEApp->NoInputMemCardDialog).tDialogMessageString.tDialogBase.MaxW =
           auStack272 + 0xa8;
      SavePinkSlipsCarsWithErrorDialogs__Fsss((short)player,1,-1);
      bVar1 = iVar5 < 2;
      player = iVar5;
    }
    DeInit_Memcard__Fv();
    Hide__11tDialogBase((tDialogBase *)
                        &(FEApp->MemCardDialog).tDialogMessageString.tDialogBase.fFadeText);
    ptVar2 = menuDefs;
    command->type = kMenu_Command_GoToMenuOneWay;
    command->nextMenu =
         (tMenu *)&(ptVar2->itemMainOptions).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
                   fNewMenu;
    frontEnd.raceType = '\0';
  }
  ___7tScreen((tScreen *)auStack272,2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuExtended_PinkSlipsContinue__FR12tMenuCommand(struct tMenuCommand *command /*$a0*/)
 // line 1304, offset 0x8002e34c
	/* begin block 1 */
		// Start line: 1305
		// Start offset: 0x8002E34C
	/* end block 1 */
	// End offset: 0x8002E3B0
	// End Line: 1316

	/* begin block 2 */
		// Start line: 2837
	/* end block 2 */
	// End Line: 2838

	/* begin block 3 */
		// Start line: 2841
	/* end block 3 */
	// End Line: 2842

	/* begin block 4 */
		// Start line: 2841
	/* end block 4 */
	// End Line: 2842

	/* begin block 5 */
		// Start line: 2844
	/* end block 5 */
	// End Line: 2845

void MenuExtended_PinkSlipsContinue__FR12tMenuCommand(tMenuCommand *command)

{
  tGlobalMenuDefs *ptVar1;
  byte bVar2;
  
  ptVar1 = menuDefs;
  bVar2 = ((byte)frontEnd.pinkSlipsNumTracks >> 1) + 1;
  if (((byte)frontEnd.pinkSlipsWins[0] < bVar2) && ((byte)frontEnd.pinkSlipsWins[1] < bVar2)) {
    frontEnd.pinkSlipsTrackIndex = frontEnd.pinkSlipsTrackIndex + '\x01';
    command->type = kMenu_Command_StartRace;
    return;
  }
  command->type = kMenu_Command_GoToMenuOneWay;
  command->nextMenu = (tMenu *)((ptVar1->menuUserName).tMenu.fItemList + 1);
  return;
}



// decompiled code
// original method signature: 
// struct tGlobalMenuDefs * /*$ra*/ __15tGlobalMenuDefs(struct tGlobalMenuDefs *this /*stack 0*/)
 // line 1353, offset 0x8002e3b8
	/* begin block 1 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsLeftRightChoice *this; // $s6

		/* begin block 1.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 1.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 1 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 2 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsLeftRightChoice *this; // $s7

		/* begin block 2.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 2.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 2 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 3 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsTwoItemChoice *this; // $fp

		/* begin block 3.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 3.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 3 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 4 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsTwoItemChoice *this; // stack offset -408

		/* begin block 4.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 4.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 4 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 5 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsTwoItemChoice *this; // stack offset -404

		/* begin block 5.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 5.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 5 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 6 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsTwoItemChoice *this; // stack offset -400

		/* begin block 6.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 6.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 6 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 7 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsTwoItemChoice *this; // stack offset -396

		/* begin block 7.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 7.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 7 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 8 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tBlankMenuItemGoToMenuNFS4Button *this; // $s0

		/* begin block 8.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 8.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 8 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 9 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsLeftRightChoice *this; // stack offset -268

		/* begin block 9.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 9.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 9 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 10 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsLeftRightChoice *this; // stack offset -264

		/* begin block 10.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 10.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 10 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 11 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsLeftRightChoice *this; // stack offset -260

		/* begin block 11.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 11.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 11 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 12 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsLeftRightChoice *this; // $fp

		/* begin block 12.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 12.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 12 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 13 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsLeftRightChoice *this; // stack offset -256

		/* begin block 13.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 13.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 13 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 14 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsLeftRightChoice *this; // $s3

		/* begin block 14.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 14.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 14 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 15 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOptionsLeftRightChoice *this; // stack offset -252

		/* begin block 15.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 15.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 15 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 16 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemDisplayLeftRightChoice *this; // stack offset -192

		/* begin block 16.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 16.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 16 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 17 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemSlidingActivated *this; // $s0

		/* begin block 17.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 17.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 17 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 18 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemDisplayLeftRightChoice *this; // $s5

		/* begin block 18.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 18.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 18 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 19 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemDisplayLeftRightChoice *this; // $fp

		/* begin block 19.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 19.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 19 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 20 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemDisplayLeftRightChoice *this; // stack offset -164

		/* begin block 20.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 20.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 20 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 21 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOnOffLeftRightChoice *this; // stack offset -160

		/* begin block 21.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 21.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 21 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 22 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOnOffLeftRightChoice *this; // stack offset -156

		/* begin block 22.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 22.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 22 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 23 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemOnOffLeftRightChoice *this; // $s3

		/* begin block 23.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 23.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 23 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 24 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemDisplayLeftRightChoice *this; // stack offset -152

		/* begin block 24.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 24.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 24 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 25 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemDisplayLeftRightChoice *this; // $s0

		/* begin block 25.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 25.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 25 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 26 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMenuItemControllerLeftRightChoice *this; // $s0

		/* begin block 26.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 26.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 26 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 27 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tInsideBoxControllerLeftRightSlider *this; // stack offset -140

		/* begin block 27.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 27.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 27 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 28 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tInsideBoxControllerLeftRightSlider *this; // stack offset -132

		/* begin block 28.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 28.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 28 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 29 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMemoryCardMenuItem *this; // $fp

		/* begin block 29.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
			// Variables:
		// 		struct tMenuItemGoToMenuButtonFade *this; // $fp

			/* begin block 29.1.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 29.1.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 29.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 29.2 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 29.2 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 29 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 30 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMemoryCardMenuItem *this; // $s0

		/* begin block 30.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
			// Variables:
		// 		struct tMenuItemGoToMenuButtonFade *this; // $s0

			/* begin block 30.1.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 30.1.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 30.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 30.2 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 30.2 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 30 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 31 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tBlankMenuItemNFS4LeftRightChoice *this; // $s0

		/* begin block 31.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 31.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 31 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 32 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tBlankMenuItemGoToMenuNFS4Button *this; // $s0

		/* begin block 32.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 32.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 32 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 33 */
		// Start line: 1354
		// Start offset: 0x8002E3B8
		// Variables:
	// 		struct tMemoryCardMenuItem *this; // $s0

		/* begin block 33.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
			// Variables:
		// 		struct tMenuItemGoToMenuButtonFade *this; // $s0

			/* begin block 33.1.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 33.1.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 33.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 33.2 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
		/* end block 33.2 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 33 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 34 */
		// Start line: 1354
		// Start offset: 0x8002E3B8

		/* begin block 34.1 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
			// Variables:
		// 		struct tMenu *child; // $v0

			/* begin block 34.1.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.1.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.1 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.2 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
			// Variables:
		// 		struct tMenu *child; // $v0

			/* begin block 34.2.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.2.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.2 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.3 */
			// Start line: 1354
			// Start offset: 0x8002E3B8
			// Variables:
		// 		struct tMenu *child; // $v0

			/* begin block 34.3.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.3.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.3 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.4 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.4.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.4.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.4 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.5 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.5.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.5.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.5 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.6 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.6.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.6.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.6 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.7 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.7.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.7.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.7 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.8 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.8.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.8.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.8 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.9 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.9.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.9.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.9 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.10 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.10.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.10.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.10 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.11 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.11.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.11.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.11 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.12 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.12.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.12.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.12 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.13 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.13.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.13.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.13 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.14 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.14.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.14.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.14 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.15 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.15.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.15.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.15 */
		// End offset: 0x8002E3B8
		// End Line: 1354

		/* begin block 34.16 */
			// Start line: 1354
			// Start offset: 0x8002E3B8

			/* begin block 34.16.1 */
				// Start line: 1354
				// Start offset: 0x8002E3B8
			/* end block 34.16.1 */
			// End offset: 0x8002E3B8
			// End Line: 1354
		/* end block 34.16 */
		// End offset: 0x8002E3B8
		// End Line: 1354
	/* end block 34 */
	// End offset: 0x8002E3B8
	// End Line: 1354

	/* begin block 35 */
		// Start line: 2902
	/* end block 35 */
	// End Line: 2903

	/* begin block 36 */
		// Start line: 2940
	/* end block 36 */
	// End Line: 2941

	/* begin block 37 */
		// Start line: 2940
	/* end block 37 */
	// End Line: 2941

/* WARNING: Type propagation algorithm not settling */

tGlobalMenuDefs * __15tGlobalMenuDefs(tGlobalMenuDefs *this)

{
  tDialogHelp *ptVar1;
  tFEApplication *ptVar2;
  tScreenTrophyRoom *screenHandler;
  tScreenTrackRecords *screenHandler_00;
  tScreenDisplay *screenHandler_01;
  tScreenMemcard *screenHandler_02;
  uint uVar3;
  tMenuNFS4 *this_00;
  tMenuNFS4 *this_01;
  tMenuItemGoToMenuNFS4Button *this_02;
  tMenuNFS4 *this_03;
  tMenuNFS4 *this_04;
  tMenuNFS4 *this_05;
  tMenuNFS4 *this_06;
  tOptionsMenu *this_07;
  tListIteratorCar *this_08;
  tListIteratorCar *this_09;
  tMenuOptions *this_10;
  tMenuOptions *this_11;
  tMenuItemNFS4LeftRightChoice *this_12;
  tListIterator *dataPtr;
  tListIterator *this_13;
  tMenuItemLeftRightAudioSlider *this_14;
  tUserNameMenuItem *this_15;
  tMenuBlank *this_16;
  tMenuNFS4 *this_17;
  tMenuNFS4 *this_18;
  tListIteratorTournament *this_19;
  tMenuOptions *this_20;
  tListIteratorIndexed *this_21;
  tListIteratorIndexed *this_22;
  tListIteratorIndexed *this_23;
  tListIteratorIndexed *this_24;
  tListIteratorIndexed *this_25;
  tListIterator *this_26;
  tListIteratorCarColor *this_27;
  tMenuOptions *this_28;
  tMenuItemGoToMenuNFS4Button *this_29;
  tMenuOptions *this_30;
  tOptionsMenu *this_31;
  tOptionsMenu *this_32;
  tInsideBoxLeftRightSlider *this_33;
  tInsideBoxTwoWaySlider *this_34;
  tInsideBoxTwoWaySlider *this_35;
  tMenu *newMenu;
  tListIteratorTrack *this_36;
  tListIterator *dataPtr_00;
  tListIteratorRangeIndexed *this_37;
  tMenuItemGoToMenuButton *this_38;
  tUserNameMenuItem *this_39;
  tListIterator *this_40;
  tListIteratorIndexed *this_41;
  tListIteratorCar *this_42;
  tListIterator *dataPtr_01;
  tMenuItemLeftRightFade *this_43;
  tMenuItemLeftRightChoice *this_44;
  tMenuNFS4 *this_45;
  tMenuItemLeftRightChoice *this_46;
  
  this_00 = (tMenuNFS4 *)
            &(this->itemOnePlayerPursuit).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
             fButtonImage;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)this,0x5b,(tMenu *)this_00,
             MenuExtended_SetOnePlayer__FR12tMenuCommand,0x1e,10);
  this_17 = (tMenuNFS4 *)((this->menuSpecialEvent).tMenu.fItemList + 9);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemMainOnePlayerRace).fOffset,0x5c,
             (tMenu *)this_17,MenuExtended_SetTwoPlayer__FR12tMenuCommand,0x28,10);
  this_01 = (tMenuNFS4 *)&(this->itemTournTrophyRoom).fTransitionSpeed;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemMainTwoPlayerRace).tMenuItemGoToMenuButton.fOnButtonPress,0x5e,
             (tMenu *)this_01,
             (TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
             )0x0,0x32,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemMainTrophyRoom).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf
             + 4),0x5d,(tMenu *)((this->menuCarOptions).tMenuNFS4.tMenu.fItemList + 8),
             (TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
             )0x0,0x3c,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4 *)
             &(this->itemMainOptions).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fNewMenu,(uint)&DAT_00001014,(tScreen *)screenMain,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0xb4,(tMenuItem *)this);
  this_02 = (tMenuItemGoToMenuNFS4Button *)&(this->menuMain).tMenu.fOptionsMenu;
  newMenu = (tMenu *)&(this->iteratorControllerIIMax).tListIteratorRange.tListIterator.fMinValue;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,99,newMenu,MenuExtended_GoToTournTrophyRoom__FR12tMenuCommand,0x32,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemTournTrophyRoom).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fTextDescription,0x69,newMenu,MenuExtended_GoToSETrophyRoom__FR12tMenuCommand,0x32,10)
  ;
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_01,(uint)&DAT_00001014,(tScreen *)screenMain,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0x5f,(tMenuItem *)this_02);
  __10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenuBlank *)((this->menuTrophyRoomSelect).tMenu.fItemList + 0xd),0x4000,
             (tScreen *)screenTrophyInfo,(tMenu *)0x0,(tMenu *)0x0,
             (TDRFuncPtr___10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)0x0,-1
            );
  this_02 = (tMenuItemGoToMenuNFS4Button *)((this->menuTrophyInfo).tMenuNFS4.tMenu.fItemList + 0xb);
  this_01 = (tMenuNFS4 *)((this->menuPinkSlipsBestOfThree).tMenu.fItemList + 2);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0xa1,(tMenu *)this_01,MenuExtended_SetBeginner__FR12tMenuCommand,0x8c,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)((this->menuTrophyInfo).tMenuNFS4.tMenu._vf + 2),0xa2,
             (tMenu *)this_01,MenuExtended_SetIntermediate__FR12tMenuCommand,0x96,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemSkillBeginner).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fNumFrames,0xa3,(tMenu *)this_01,MenuExtended_SetExpert__FR12tMenuCommand,0xa0,10);
  this_45 = (tMenuNFS4 *)
            &(this->itemSkillIntermediate).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
             fSelFade;
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_45,(uint)&DAT_00001004,(tScreen *)screenMain,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0xb7,(tMenuItem *)this_02);
  this_02 = (tMenuItemGoToMenuNFS4Button *)((this->menuSkillLevel).tMenu.fItemList + 3);
  this_03 = (tMenuNFS4 *)(this->menuPinkSlipsBestOfFive).tMenu.fItemList;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x60,(tMenu *)this_03,MenuExtended_SetTestDrive__FR12tMenuCommand,0xf0,10);
  this_04 = (tMenuNFS4 *)((this->menuOnePlayer).tMenu._vf + 10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)((this->menuSkillLevel).tMenu.fItemList + 0xe),0x72,
             (tMenu *)this_04,MenuExtended_SetSingleRace__FR12tMenuCommand,0x46,10);
  this_05 = (tMenuNFS4 *)((this->menuSingleRace).tMenu.fItemList + 5);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuSkillLevel).fInItemTransition,0x71,
             (tMenu *)this_05,MenuExtended_SetHotPursuit__FR12tMenuCommand,0x50,10);
  this_06 = (tMenuNFS4 *)((this->menuHotPursuit).tMenu.fItemList + 3);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemOnePlayerTestDrive).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              _vf + 4),99,(tMenu *)this_06,MenuExtended_SetTournament__FR12tMenuCommand,0x5a,10);
  this_18 = (tMenuNFS4 *)&(this->menuTournament).tMenu.fTitle;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemOnePlayerSingleRace).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem
              .fNewMenu,0x69,(tMenu *)this_18,MenuExtended_SetSpecialEvent__FR12tMenuCommand,100,10)
  ;
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_00,(uint)&DAT_00001004,(tScreen *)screenMain,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0xb5,(tMenuItem *)this_02);
  this_02 = (tMenuItemGoToMenuNFS4Button *)
            ((this->itemOnePlayerSpecialEvents).tMenuItemGoToMenuButton.tMenuItemInteractive.
             tMenuItem._vf + 8);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x6c,(tMenu *)this_01,MenuExtended_SetSoloRace__FR12tMenuCommand,0x6e,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)((this->menuOnePlayer).tMenu.fItemList + 2),0x6d,
             (tMenu *)this_45,MenuExtended_SetDuelRace__FR12tMenuCommand,0x78,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)((this->menuOnePlayer).tMenu.fItemList + 0xd),0x6f,
             (tMenu *)this_45,MenuExtended_SetFullGrid__FR12tMenuCommand,0x82,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_04,(uint)&DAT_00001004,(tScreen *)screenMain,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0xb6,(tMenuItem *)this_02);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (&this->itemSingleRaceFullGrid,0x6c,(tMenu *)this_45,
             MenuExtended_SetHPSoloRace__FR12tMenuCommand,0x6e,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemSingleRaceFullGrid).fOffset,0x6d,
             (tMenu *)this_45,MenuExtended_SetHPDuelRace__FR12tMenuCommand,0x78,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_05,(uint)&DAT_00001004,(tScreen *)screenMain,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0xb6,(tMenuItem *)&this->itemSingleRaceFullGrid);
  this_19 = (tListIteratorTournament *)
            ((this->itemHotPursuitSolo).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf +
            4);
  __23tListIteratorTournamentPcP18tTournamentManager
            (this_19,&frontEnd.tournament,&tournamentManager);
  this_02 = (tMenuItemGoToMenuNFS4Button *)&(this->itemHotPursuitSolo).fTransitionSpeed;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x5a,(tMenu *)0x0,MenuExtended_GoToTournTrackInfo__FR12tMenuCommand,0x22,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)&(this->itemHotPursuitDuel).fOrdinalPos,0x94,
             (tListIterator *)this_19,0x2c,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_06,0x1000,(tScreen *)screenTournSelect,(tMenu *)0x0,(tMenu *)0x0,
             MenuExtended_GoToTournTrackInfo__FR12tMenuCommand,0x65,(tMenuItem *)this_02);
  __23tListIteratorTournamentPcP18tTournamentManager
            ((tListIteratorTournament *)&this->itemTournamentContinue,&frontEnd.specialevent,
             &tournamentManager);
  this_02 = (tMenuItemGoToMenuNFS4Button *)
            &(this->itemTournamentContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
             fNewMenu;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x5a,(tMenu *)0x0,MenuExtended_GoToSpecialEventTrackInfo__FR12tMenuCommand,0x22
             ,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)
             &(this->itemTournamentSelect).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
              fButtonImage,0x69,(tListIterator *)&this->itemTournamentContinue,0x36,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_18,0x1000,(tScreen *)screenTournSelect,(tMenu *)0x0,(tMenu *)0x0,
             MenuExtended_GoToSpecialEventTrackInfo__FR12tMenuCommand,100,(tMenuItem *)this_02);
  this_02 = (tMenuItemGoToMenuNFS4Button *)&(this->menuTournament).fNumItems;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x60,(tMenu *)this_03,MenuExtended_SetTestDrive__FR12tMenuCommand,0xf0,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemSpecialEventContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.
              tMenuItem.fNewMenu,0x72,(tMenu *)0x0,
             MenuExtended_GoToTwoPlayerSingleRace__FR12tMenuCommand,0x46,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemSpecialEventSelect).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem
              .fButtonImage,0x71,(tMenu *)this_45,MenuExtended_SetHotPursuit__FR12tMenuCommand,0x50,
             10);
  this_00 = (tMenuNFS4 *)
            &(this->itemTwoPlayerPinkSlips).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
             fNewMenu;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuSpecialEvent).tMenu.fCurrentItem,0x6a,
             (tMenu *)this_00,MenuExtended_SetPinkSlips__FR12tMenuCommand,0xaa,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_17,(uint)&DAT_00001004,(tScreen *)screenMain,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0xb5,(tMenuItem *)this_02);
  this_02 = (tMenuItemGoToMenuNFS4Button *)&(this->itemTwoPlayerTestDrive).fOffset;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0xc0,(tMenu *)this_01,MenuExtended_GoToBestOfOne__FR12tMenuCommand,0xaa,10);
  this_04 = (tMenuNFS4 *)((this->menuPinkSlipSelect).tMenu.fItemList + 8);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemTwoPlayerDuel).tMenuItemGoToMenuButton.fOnButtonPress,0xc1,(tMenu *)this_04
             ,MenuExtended_GoToBestOfThree__FR12tMenuCommand,0xaa,10);
  this_05 = (tMenuNFS4 *)&(this->itemPinkSlipsContinue).fOrdinalPos;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemTwoPlayerHotPursuit).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem
              ._vf + 4),0xc2,(tMenu *)this_05,MenuExtended_GoToBestOfFive__FR12tMenuCommand,0xaa,10)
  ;
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_00,0x1000,(tScreen *)screenMain,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0xb6,(tMenuItem *)this_02);
  this_02 = (tMenuItemGoToMenuNFS4Button *)&(this->menuTwoPlayer).tMenu.fOptionsMenu;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x5a,(tMenu *)0x0,MenuExtended_GoToCarSelect__FR12tMenuCommand,0x24,10);
  this_36 = (tListIteratorTrack *)
            &(this->itemTrack3).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.fNumFrames;
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)
             &(this->itemBestOfOne).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fTextDescription,0xc3,(tListIterator *)this_36,0x2e,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)&(this->itemBestOfOne).fOffset,0xc4,
             (tListIterator *)this_36,0x2e,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)
             ((this->itemBestOfThree).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf + 8
             ),0xc5,(tListIterator *)this_36,0x2e,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)
             &(this->itemBestOfFive).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fNewMenu
             ,0xc6,(tListIterator *)this_36,0x2e,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)&(this->menuPinkSlipSelect).tMenu.fCurrentItem,199,
             (tListIterator *)this_36,0x2e,10);
  this_20 = (tMenuOptions *)&(this->menuTestDriveTrackSelect).tMenu.fScreen;
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_04,(uint)&DAT_00001400,(tScreen *)screenPinkSlips,(tMenu *)0x0,(tMenu *)this_20,
             MenuExtended_GoToCarSelect__FR12tMenuCommand,0xbe,(tMenuItem *)this_02);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_05,(uint)&DAT_00001400,(tScreen *)screenPinkSlips,(tMenu *)0x0,(tMenu *)this_20,
             MenuExtended_GoToCarSelect__FR12tMenuCommand,0xbf,(tMenuItem *)this_02);
  __18tListIteratorTrackPcT1P13tTrackManager
            (this_36,frontEnd.track,&frontEnd.pinkSlipsTrackIndex,&trackManager);
  this_02 = (tMenuItemGoToMenuNFS4Button *)&(this->itemTrack3).fOffset;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x5a,(tMenu *)0x0,MenuExtended_GoToCarSelect__FR12tMenuCommand,0x1c,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)&(this->itemTrack4).tMenuItemLeftRightChoice.fData,0x93
             ,(tListIterator *)this_36,0x26,10);
  this_07 = (tOptionsMenu *)&(this->iteratorLocalSpeech).fValue;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemTrack5).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf + 4),
             0xd4,(tMenu *)this_07,
             (TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
             )0x0,0x3a,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_01,(uint)&DAT_00001600,(tScreen *)screenTrackSelect,(tMenu *)0x0,(tMenu *)this_20,
             MenuExtended_GoToCarSelect__FR12tMenuCommand,200,(tMenuItem *)this_02);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_03,(uint)&DAT_00001600,(tScreen *)screenTrackSelect,(tMenu *)0x0,(tMenu *)0x0,
             MenuExtended_GoToCarSelect__FR12tMenuCommand,200,(tMenuItem *)this_02);
  this_21 = (tListIteratorIndexed *)
            &(this->iteratorTrack).tListIteratorIndexed.tListIterator.fMinValue;
  __20tListIteratorIndexedPsPcT2
            (this_21,SelectListNormal,frontEnd.lapind,&frontEnd.pinkSlipsTrackIndex);
  this_22 = (tListIteratorIndexed *)
            &(this->itemTrackContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
             fTextDescription;
  __20tListIteratorIndexedPsPcT2
            (this_22,SelectListTrackDirection,frontEnd.trackdirection,&frontEnd.pinkSlipsTrackIndex)
  ;
  this_23 = (tListIteratorIndexed *)
            (this->itemTrackContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf;
  __20tListIteratorIndexedPsPcT2
            (this_23,SelectListOffOn,frontEnd.trackmirrored,&frontEnd.pinkSlipsTrackIndex);
  this_41 = (tListIteratorIndexed *)&(this->itemTrackContinue).fOffset;
  __20tListIteratorIndexedPsPcT2
            (this_41,SelectListOffOn,frontEnd.timeOfDay,&frontEnd.pinkSlipsTrackIndex);
  this_24 = (tListIteratorIndexed *)
            &(this->itemTrack).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.fButtonImage;
  __20tListIteratorIndexedPsPcT2
            (this_24,SelectListOffOn,frontEnd.weather,&frontEnd.pinkSlipsTrackIndex);
  this_25 = (tListIteratorIndexed *)
            ((this->itemTrack).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf + 8);
  __20tListIteratorIndexedPsPcT2
            (this_25,SelectListOffOn,frontEnd.traffic,&frontEnd.pinkSlipsTrackIndex);
  this_26 = (tListIterator *)
            &(this->itemTrackRecords).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
             fTextDescription;
  __13tListIteratorPsPc(this_26,SelectListOffOn,&frontEnd.localSpeech);
  this_44 = (tMenuItemLeftRightChoice *)
            &(this->itemTrackRecords).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
             fNewMenu;
  __24tMenuItemLeftRightChoiceUiP13tListIterator(this_44,0xca,(tListIterator *)this_21);
  *(undefined4 *)&(this->itemTrackRecords).fOffset = 0x80010858;
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)&this->menuSingleTrackSelect,0xcc,(tListIterator *)this_22)
  ;
  (this->menuSingleTrackSelect).tMenu.fItemList[2] = (_func_21 *)0x80010858;
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)((this->menuSingleTrackSelect).tMenu.fItemList + 4),0xcd,
             (tListIterator *)this_23);
  (this->menuSingleTrackSelect).tMenu.fItemList[10] = (_func_21 *)0x80010800;
  *(undefined2 *)((this->menuSingleTrackSelect).tMenu.fItemList + 0xc) = 0x80;
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)((this->menuSingleTrackSelect).tMenu.fItemList + 0xd),0xce,
             (tListIterator *)this_41);
  (this->menuSingleTrackSelect).tMenu.fOptionsMenu = (tMenu *)&table;
  (this->menuSingleTrackSelect).tMenu.VertHelp = 0x80;
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)((this->menuSingleTrackSelect).tMenu._vf + 2),0xcf,
             (tListIterator *)this_24);
  *(undefined4 *)&(this->menuSingleTrackSelect).fNumItems = 0x80010800;
  (this->menuTestDriveTrackSelect).tMenu.fTitle = 0x80;
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)&(this->menuTestDriveTrackSelect).tMenu.fCurrentItem,0xd0,
             (tListIterator *)this_25);
  (this->menuTestDriveTrackSelect).tMenu.fItemList[4] = (_func_21 *)0x80010800;
  *(undefined2 *)((this->menuTestDriveTrackSelect).tMenu.fItemList + 6) = 0x80;
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)((this->menuTestDriveTrackSelect).tMenu.fItemList + 7),0xd2
             ,this_26);
  (this->menuTestDriveTrackSelect).tMenu.fItemList[0xd] = (_func_21 *)0x80010800;
  *(undefined2 *)((this->menuTestDriveTrackSelect).tMenu.fItemList + 0xf) = 0x80;
  __12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme
            (this_20,0x1000,(tScreen *)0x0,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme5OnButtonPress
              )0x0,0xb9,-1,(tMenuItem *)this_44);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&this->iteratorWeather,0,(tMenu *)0x0,
             (TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
             )0x0,-1,-1);
  screenHandler_00 = screenTrackRecords;
  (this->iteratorTraffic).tListIterator.fValue = &DAT_800114d8;
  __12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme
            (this_07,0x1000,(tScreen *)screenHandler_00,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress
              )0x0,0xd4,1,10,(tMenuItem *)0x0);
  this_02 = (tMenuItemGoToMenuNFS4Button *)&(this->itemTrackMirrored).tMenuItemLeftRightChoice.fData
  ;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x5a,(tMenu *)0x0,MenuExtended_GoToGarage__FR12tMenuCommand,0x21,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4 *)&(this->itemTimeOfDay).tMenuItemLeftRightChoice.fData,(uint)&DAT_00001004,
             (tScreen *)screenTrackInfo,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0xf9,(tMenuItem *)this_02);
  this_08 = (tListIteratorCar *)
            ((this->itemLocalSpeech).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf + 4
            );
  __16tListIteratorCarPcP11tCarManager(this_08,frontEnd.playerCar,&carManager);
  this_27 = (tListIteratorCarColor *)&(this->menuTrackOptions).tMenuNFS4.tMenu.fNeverAnyEnabled;
  __21tListIteratorCarColorPcN21iP11tCarManager
            (this_27,frontEnd.carColors,(char *)&(FEApp->helpPopup).numItems,frontEnd.playerCar,0x30
             ,&carManager);
  this_02 = (tMenuItemGoToMenuNFS4Button *)((this->menuTrackOptions).tMenuNFS4.tMenu.fItemList + 7);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0xbd,(tMenu *)0x0,MenuExtended_GoToRace__FR12tMenuCommand,0x80,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)&(this->menuTrackOptions).tMenuNFS4.tMenu.fChildMenu,
             0x92,(tListIterator *)this_08,0x1c,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)&(this->menuTrackOptions).tMenuNFS4.fNumItems,0x120,
             (tListIterator *)this_27,0x26,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->menuTrackRecordsItem).tMenuItemGoToMenuNFS4Button.tMenuItemGoToMenuButton.
              tMenuItemInteractive.tMenuItem._vf + 4),0x112,(tMenu *)0x0,
             MenuExtended_GoToShowroom__FR12tMenuCommand,0x30,10);
  this_20 = (tMenuOptions *)((this->menuCarDealer).tMenu.fItemList + 4);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4 *)((this->menuTrackRecords).tMenu.fItemList + 1),(uint)&DAT_00001a00,
             (tScreen *)screenCarSelect,(tMenu *)0x0,(tMenu *)this_20,
             MenuExtended_GoToRace__FR12tMenuCommand,0xba,(tMenuItem *)this_02);
  this_09 = (tListIteratorCar *)
            &(this->itemTrackInfoContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
             fSelFade;
  __16tListIteratorCarPcP11tCarManager(this_09,frontEnd.garageCar,&carManager);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)
             &(this->itemTrackInfoContinue).tMenuItemGoToMenuButton.fOnButtonPress,0x92,
             (tListIterator *)this_09,0x1c,10);
  this_00 = (tMenuNFS4 *)&(this->menuPlayerOneGarage).tMenuNFS4.fInMenuTransition;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)((this->menuTrackInfo).tMenu.fItemList + 2),0x74,
             (tMenu *)this_00,
             (TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
             )0x0,0x3a,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)((this->menuTrackInfo).tMenu.fItemList + 0xd),0x91,
             (tMenu *)0x0,MenuExtended_GoToUpgrades__FR12tMenuCommand,0x44,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4 *)((this->menuTrackInfo).tMenu._vf + 10),(uint)&DAT_00001a00,
             (tScreen *)screenCarSelect,(tMenu *)0x0,(tMenu *)this_20,
             MenuExtended_GoToRace__FR12tMenuCommand,0x8f,(tMenuItem *)this_02);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4 *)&(this->itemCarSelectRace).fOffset,(uint)&DAT_00001a00,
             (tScreen *)screenCarSelect,(tMenu *)0x0,(tMenu *)this_20,
             MenuExtended_GoToRace__FR12tMenuCommand,0x8f,(tMenuItem *)this_02);
  this_42 = (tListIteratorCar *)
            &(this->itemShowcase).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fNewMenu;
  __16tListIteratorCarPcP11tCarManager(this_42,&frontEnd.oppCar,&carManager);
  this_02 = (tMenuItemGoToMenuNFS4Button *)&(this->itemShowcase).fTransitionSpeed;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0xbd,(tMenu *)0x0,MenuExtended_GoToRace__FR12tMenuCommand,0x2a,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)((this->menuSingleCarSelect).tMenu.fItemList + 6),0x92,
             (tListIterator *)this_08,0xc,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)&(this->menuSingleCarSelect).tMenu.fScreen,0x120,
             (tListIterator *)this_27,0x16,10);
  this_01 = (tMenuNFS4 *)
            ((this->itemPinkSlipCarP1).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf +
            4);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuSingleCarSelect).fInMenuTransition,0x78,
             (tMenu *)this_01,MenuExtended_GoToDealer__FR12tMenuCommand,-1,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)
             &(this->itemGarageCar).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
              fTextDescription,0xbc,(tListIterator *)this_42,0x20,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4 *)&(this->itemGarageCar).fTransitionSpeed,0x1800,
             (tScreen *)screenCarSelectDuel,(tMenu *)0x0,(tMenu *)this_20,
             MenuExtended_GoToRace__FR12tMenuCommand,0xba,(tMenuItem *)this_02);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4 *)(this->menuCarGarage).tMenu.fItemList,0x1800,
             (tScreen *)screenCarSelectDuel,(tMenu *)0x0,(tMenu *)this_20,
             MenuExtended_GoToRace__FR12tMenuCommand,0xba,(tMenuItem *)this_02);
  this_02 = (tMenuItemGoToMenuNFS4Button *)&(this->menuPostCarGarage).tMenu.fCurrentItem;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0xbd,(tMenu *)0x0,MenuExtended_GoTo2PlayerRace__FR12tMenuCommand,0x2a,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)((this->menuPostCarGarage).tMenu.fItemList + 9),0x92,
             (tListIterator *)this_08,0xc,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)&(this->menuPostCarGarage).tMenu.fOptionsMenu,0x120,
             (tListIterator *)this_27,0x16,10);
  this_28 = (tMenuOptions *)
            &(this->itemSellerCar).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
             fTextDescription;
  __18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4TwoPlayer *)&this->iteratorOpponentCar,(uint)&DAT_00001008,
             (tScreen *)screenCarSelectTwoPlayer,(tMenu *)0x0,(tMenu *)this_28,
             MenuExtended_GoTo2PlayerRace__FR12tMenuCommand,0xba,(tMenuItem *)this_02);
  this_29 = (tMenuItemGoToMenuNFS4Button *)&(this->itemCar2).fTransitionSpeed;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_29,0xbd,(tMenu *)0x0,MenuExtended_GoTo2PlayerRace__FR12tMenuCommand,0x2a,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)&(this->itemColor2).fOffset,0x92,
             (tListIterator *)this_08,0xc,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)
             ((this->itemGoToDuelBuyCar).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf
             + 8),0x120,(tListIterator *)this_27,0x16,10);
  this_10 = (tMenuOptions *)((this->menuCarSeller).tMenu.fItemList + 5);
  __18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4TwoPlayer *)
             &(this->itemOpponentCar).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
              fNewMenu,(uint)&DAT_00001008,(tScreen *)screenCarSelectPlayerTwo,(tMenu *)0x0,
             (tMenu *)this_10,MenuExtended_GoTo2PlayerRace__FR12tMenuCommand,0xba,
             (tMenuItem *)this_29);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuDuelCarSelect).tMenu.fOnButtonPress,0xbd,
             (tMenu *)0x0,MenuExtended_GoTo2PlayerRace__FR12tMenuCommand,0x2a,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)&(this->menuHPDuelCarSelect).tMenu.fCurrentItem,0x92,
             (tListIterator *)this_09,0xc,10);
  __18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4TwoPlayer *)((this->menuHPDuelCarSelect).tMenu.fItemList + 8),
             (uint)&DAT_00001008,(tScreen *)screenCarSelectTwoPlayer,(tMenu *)0x0,(tMenu *)this_28,
             MenuExtended_GoTo2PlayerRace__FR12tMenuCommand,0xba,(tMenuItem *)this_02);
  this_02 = (tMenuItemGoToMenuNFS4Button *)&(this->itemPlayerOneRace).fOrdinalPos;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0xbd,(tMenu *)0x0,MenuExtended_GoTo2PlayerRace__FR12tMenuCommand,0x2a,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)
             ((this->itemCarP1).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf + 8),
             0x92,(tListIterator *)this_09,0xc,10);
  __18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4TwoPlayer *)
             (this->itemColorP1).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf,
             (uint)&DAT_00001008,(tScreen *)screenCarSelectPlayerTwo,(tMenu *)0x0,(tMenu *)this_10,
             MenuExtended_GoTo2PlayerRace__FR12tMenuCommand,0xba,(tMenuItem *)this_02);
  this_08 = (tListIteratorCar *)&(this->menuPlayerOneCarSelect).tMenuNFS4.tMenu.VertHelp;
  __16tListIteratorCarPcP11tCarManager(this_08,frontEnd.pinkSlipsCar,&carManager);
  this_02 = (tMenuItemGoToMenuNFS4Button *)&(this->menuPlayerOneCarSelect).tMenuNFS4.fNumItems;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0xbd,(tMenu *)0x0,MenuExtended_GoTo2PlayerRace__FR12tMenuCommand,0x2a,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)&(this->itemPlayerTwoRace).fOrdinalPos,0x92,
             (tListIterator *)this_08,0xc,10);
  this_30 = (tMenuOptions *)&(this->itemPurchaseUpgrade1).tMenuItemGoToMenuButton.fOnButtonPress;
  __18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4TwoPlayer *)
             ((this->itemCarP2).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf + 4),
             (uint)&DAT_00001008,(tScreen *)screenPinkSlipsCarSelectTwoPlayer,(tMenu *)0x0,
             (tMenu *)this_30,MenuExtended_GoTo2PlayerRace__FR12tMenuCommand,0xba,
             (tMenuItem *)this_02);
  this_02 = (tMenuItemGoToMenuNFS4Button *)
            ((this->menuPlayerTwoCarSelect).tMenuNFS4.tMenu.fItemList + 10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0xbd,(tMenu *)0x0,MenuExtended_GoTo2PlayerRace__FR12tMenuCommand,0x2a,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)
             &(this->menuPlayerTwoCarSelect).tMenuNFS4.tMenu.VertHelp,0x92,(tListIterator *)this_08,
             0xc,10);
  this_11 = (tMenuOptions *)&(this->menuCarUpgrades).tMenu.fNeverAnyEnabled;
  __18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4TwoPlayer *)
             &(this->itemPlayerOneGarageRace).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem
              .fSelFade,(uint)&DAT_00001008,(tScreen *)screenPinkSlipsCarSelectPlayerTwo,
             (tMenu *)0x0,(tMenu *)this_11,MenuExtended_GoTo2PlayerRace__FR12tMenuCommand,0xba,
             (tMenuItem *)this_02);
  this_02 = (tMenuItemGoToMenuNFS4Button *)
            ((this->menuPlayerOneGarage).tMenuNFS4.tMenu.fItemList + 4);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x78,(tMenu *)this_01,MenuExtended_GoToDealer__FR12tMenuCommand,0x58,10);
  this_03 = (tMenuNFS4 *)
            ((this->itemPinkSlipCarP2).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf +
            8);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->menuPlayerOneGarage).tMenuNFS4.tMenu.fItemList + 0xf),0x79,(tMenu *)this_03,
             MenuExtended_GoToSeller__FR12tMenuCommand,0x4e,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_00,(uint)&DAT_00001200,(tScreen *)screenCarSelect,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0x90,(tMenuItem *)this_02);
  this_08 = (tListIteratorCar *)&(this->menuPlayerTwoGarage).tMenuNFS4.tMenu.fNeverAnyEnabled;
  __16tListIteratorCarPcP11tCarManager(this_08,&frontEnd.dealerCar,&carManager);
  this_27 = (tListIteratorCarColor *)((this->menuPlayerTwoGarage).tMenuNFS4.tMenu.fItemList + 6);
  __21tListIteratorCarColorPcN21iP11tCarManager
            (this_27,frontEnd.carColors,(char *)&(FEApp->helpPopup).numItems,&frontEnd.dealerCar,
             0x30,&carManager);
  this_12 = (tMenuItemNFS4LeftRightChoice *)
            ((this->menuPlayerTwoGarage).tMenuNFS4.tMenu.fItemList + 0xe);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            (this_12,0x92,(tListIterator *)this_08,0x1c,10);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)((this->menuPlayerTwoGarage).tMenuNFS4.tMenu._vf + 10),
             0x120,(tListIterator *)this_27,0x26,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&(this->iteratorPinkSlipsCar).fCarManager,0x75,
             (tMenu *)0x0,MenuExtended_BuyCar__FR12tMenuCommand,0x58,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemPlayerOnePinkSlipRace).tMenuItemGoToMenuButton.fOnButtonPress,0x112,
             (tMenu *)0x0,MenuExtended_GoToDealerShowroom__FR12tMenuCommand,0x30,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_01,(uint)&DAT_00002240,(tScreen *)screenCarSelect,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0x90,(tMenuItem *)this_12);
  this_08 = (tListIteratorCar *)((this->menuPlayerOnePinkSlipCarSelect).tMenuNFS4.tMenu._vf + 2);
  __16tListIteratorCarPcP11tCarManager(this_08,&frontEnd.sellerCar,&carManager);
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
            ((tMenuItemNFS4LeftRightChoice *)&this->itemPlayerTwoPinkSlipRace,0x92,
             (tListIterator *)this_08,0x1c,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemPlayerTwoPinkSlipRace).fOrdinalPos,0x77,
             (tMenu *)0x0,MenuExtended_SellCar__FR12tMenuCommand,0x4e,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            (this_03,(uint)&DAT_00002200,(tScreen *)screenCarSelect,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0x90,(tMenuItem *)&this->itemPlayerTwoPinkSlipRace);
  this_02 = (tMenuItemGoToMenuNFS4Button *)
            ((this->menuPlayerTwoPinkSlipCarSelect).tMenuNFS4.tMenu._vf + 6);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x96,(tMenu *)0x0,MenuExtended_PurchaseUpgrade1__FR12tMenuCommand,0x62,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemGoToBuyCar).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fNewMenu
             ,0x97,(tMenu *)0x0,MenuExtended_PurchaseUpgrade2__FR12tMenuCommand,0x6c,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemGoToSellCar).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fButtonImage,0x98,(tMenu *)0x0,MenuExtended_PurchaseUpgrade3__FR12tMenuCommand,0x76,10
            );
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4 *)&(this->menuGoToCarDealer).tMenu.fTitle,(uint)&DAT_00002200,
             (tScreen *)screenCarSelect,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0x91,(tMenuItem *)this_02);
  this_21 = (tListIteratorIndexed *)&(this->menuGoToCarDealer).fNumItems;
  __20tListIteratorIndexedPsPcT2
            (this_21,SelectListTransmission,frontEnd.transmission,
             (char *)&(FEApp->helpPopup).numItems);
  this_22 = (tListIteratorIndexed *)&(this->iteratorDealerCar).fCarListFilter;
  __20tListIteratorIndexedPsPcT2
            (this_22,SelectListOffOn,frontEnd.ABS,(char *)&(FEApp->helpPopup).numItems);
  this_26 = (tListIterator *)&(this->iteratorDealerColor).tListIterator.fMinValue;
  __13tListIteratorPsPc(this_26,SelectListOffOn,&frontEnd.damage);
  this_40 = (tListIterator *)&(this->iteratorDealerColor).fIndexSize;
  __13tListIteratorPsPc(this_40,SelectListOpponentUpgrades,&frontEnd.opponentUpgrades);
  this_44 = (tMenuItemLeftRightChoice *)
            &(this->itemDealerCar).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.fSelFade;
  __24tMenuItemLeftRightChoiceUiP13tListIterator(this_44,0x10a,(tListIterator *)this_21);
  *(undefined4 *)
   ((this->itemDealerCar).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf + 8) =
       0x80010858;
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)&(this->itemDealerCar).fOffset,0x10b,
             (tListIterator *)this_22);
  (this->itemDealerColor).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.fNumFrames =
       -0x7ffef7a8;
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)
             (this->itemDealerColor).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf,
             0x111,this_26);
  this_46 = (tMenuItemLeftRightChoice *)
            &(this->itemBuyCar).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fSelFade;
  (this->itemBuyCar).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fFlags = 0x80010858;
  __24tMenuItemLeftRightChoiceUiP13tListIterator(this_46,0x10a,(tListIterator *)this_21);
  *(undefined4 *)((this->itemBuyCar).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf + 8)
       = 0x80010858;
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)&(this->itemBuyCar).fOrdinalPos,0x10b,
             (tListIterator *)this_22);
  (this->itemDealerShowroom).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fButtonImage =
       -0x7ffef7a8;
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)
             &(this->itemDealerShowroom).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fNewMenu,0x111,this_26);
  *(undefined4 *)&(this->itemDealerShowroom).fOffset = 0x80010858;
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)&this->menuCarDealer,0x10e,this_40);
  (this->menuCarDealer).tMenu.fItemList[2] = (_func_21 *)0x80010858;
  __12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme
            (this_20,0x1000,(tScreen *)0x0,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme5OnButtonPress
              )0x0,0xbb,-1,(tMenuItem *)this_44);
  __12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme
            (this_28,(uint)&DAT_00001008,(tScreen *)screenCarSelectTwoPlayer,(tMenu *)0x0,
             (tMenu *)0x0,
             (
              TDRFuncPtr___12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme5OnButtonPress
              )0x0,0xbb,0,(tMenuItem *)this_44);
  __12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme
            (this_10,(uint)&DAT_00001008,(tScreen *)screenCarSelectPlayerTwo,(tMenu *)0x0,
             (tMenu *)0x0,
             (
              TDRFuncPtr___12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme5OnButtonPress
              )0x0,0xbb,1,(tMenuItem *)this_46);
  __12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme
            (this_30,(uint)&DAT_00001008,(tScreen *)screenPinkSlipsCarSelectTwoPlayer,(tMenu *)0x0,
             (tMenu *)0x0,
             (
              TDRFuncPtr___12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme5OnButtonPress
              )0x0,0xbb,0,(tMenuItem *)this_44);
  __12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme
            (this_11,(uint)&DAT_00001008,(tScreen *)screenPinkSlipsCarSelectPlayerTwo,(tMenu *)0x0,
             (tMenu *)0x0,
             (
              TDRFuncPtr___12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme5OnButtonPress
              )0x0,0xbb,1,(tMenuItem *)this_46);
  __10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenuBlank *)((this->iteratorTransmission).tListIterator._vf + 2),0x4000,
             (tScreen *)0x0,(tMenu *)0x0,(tMenu *)0x0,
             (TDRFuncPtr___10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)0x0,-1
            );
  this_02 = (tMenuItemGoToMenuNFS4Button *)
            (this->itemABS).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf;
  this_31 = (tOptionsMenu *)&(this->menuShowroom).tMenuNFS4.tMenu.VertHelp;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x1c5,(tMenu *)this_31,
             (TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
             )0x0,0xb4,10);
  this_07 = (tOptionsMenu *)
            &(this->itemSoundEffectsVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
             fButtonImage;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemDamage).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf + 4),
             0x1c6,(tMenu *)this_07,
             (TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
             )0x0,0xbe,10);
  this_32 = (tOptionsMenu *)
            &(this->itemAudioMode).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
             tMenuItemInteractive.tMenuItem.fNumFrames;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemTransmission2).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf
             + 8),0x1c8,(tMenu *)this_32,
             (TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
             )0x0,200,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemABS2).tMenuItemLeftRightChoice.fData,0x1c9,
             (tMenu *)&(this->menuControllerConfig).tMenu.fScreen,
             (TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
             )0x0,0xd2,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&this->itemOpponentUpgrades,0x1ca,(tMenu *)0x0,
             MenuExtended_EnterUserName__FR12tMenuCommand,0xdc,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuCarOptions).tMenuNFS4.tMenu.fTitle,0x1cc,
             (tMenu *)&(this->itemPinkSlipStandingsExit).tMenuItemGoToMenuButton.
                       tMenuItemInteractive.tMenuItem.fSelFade,
             (TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
             )0x0,0xe6,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4 *)((this->menuCarOptions).tMenuNFS4.tMenu.fItemList + 8),(uint)&DAT_00001014
             ,(tScreen *)screenMain,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0x5d,(tMenuItem *)this_02);
  dataPtr_00 = (tListIterator *)((this->menuCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList + 4);
  __18tListIteratorRangeccPc((tListIteratorRange *)dataPtr_00,'\0','\x7f',&frontEnd.musicVolume);
  this_26 = (tListIterator *)((this->menuCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList + 8);
  __18tListIteratorRangeccPc((tListIteratorRange *)this_26,'\0','\x7f',&frontEnd.sfxVolume);
  dataPtr_01 = (tListIterator *)((this->menuCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList + 0xc);
  __18tListIteratorRangeccPc((tListIteratorRange *)dataPtr_01,'\0','\x7f',&frontEnd.engineVolume);
  this_40 = (tListIterator *)&(this->menuCarOptionsPlayerOne).tMenuNFS4.tMenu.fScreen;
  __18tListIteratorRangeccPc((tListIteratorRange *)this_40,'\0','\x7f',&frontEnd.narrationVolume);
  dataPtr = (tListIterator *)&(this->menuCarOptionsPlayerOne).tMenuNFS4.tMenu.fOnButtonPress;
  __18tListIteratorRangeccPc((tListIteratorRange *)dataPtr,'\0','\x7f',&frontEnd.ambientVolume);
  this_13 = (tListIterator *)((this->menuCarOptionsPlayerOne).tMenuNFS4.tMenu._vf + 10);
  __13tListIteratorPsPc(this_13,SelectListAudioMode,&frontEnd.audioMode);
  this_14 = (tMenuItemLeftRightAudioSlider *)&(this->menuCarOptionsPlayerOne).tMenuNFS4.fNumItems;
  __29tMenuItemLeftRightAudioSliderUiP13tListIteratori(this_14,0x1d5,dataPtr_00,0);
  __29tMenuItemLeftRightAudioSliderUiP13tListIteratori
            ((tMenuItemLeftRightAudioSlider *)
             ((this->menuCarOptionsPlayerTwo).tMenuNFS4.tMenu.fItemList + 7),0x1d6,this_26,1);
  __29tMenuItemLeftRightAudioSliderUiP13tListIteratori
            ((tMenuItemLeftRightAudioSlider *)
             &(this->menuCarOptionsPlayerTwo).tMenuNFS4.tMenu.VertHelp,0x1d7,dataPtr_01,2);
  __29tMenuItemLeftRightAudioSliderUiP13tListIteratori
            ((tMenuItemLeftRightAudioSlider *)
             (this->menuPinkSlipCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList,0x1d8,this_40,3);
  __29tMenuItemLeftRightAudioSliderUiP13tListIteratori
            ((tMenuItemLeftRightAudioSlider *)
             ((this->menuPinkSlipCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList + 0xe),0x1d9,dataPtr
             ,4);
  __22tMenuItemLeftRightFadeUiP13tListIterator
            ((tMenuItemLeftRightFade *)&(this->menuPinkSlipCarOptionsPlayerOne).tMenuNFS4.fNumItems,
             0x1da,this_13);
  *(undefined **)&(this->menuPinkSlipCarOptionsPlayerTwo).tMenuNFS4.tMenu.fNeverAnyEnabled = &table;
  __20tMenuItemSlidingMenuUissssb
            ((tMenuItemSlidingMenu *)
             ((this->menuPinkSlipCarOptionsPlayerTwo).tMenuNFS4.tMenu.fItemList + 4),0x1db,0x15e,
             0x2b,-0x66,0xd,(void *)0x0);
  (this->menuPinkSlipCarOptionsPlayerTwo).tMenuNFS4.tMenu.fItemList[10] = (_func_21 *)0x80010de8;
  __18tInsideBoxSongMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tInsideBoxSongMenu *)((this->menuPinkSlipCarOptionsPlayerTwo).tMenuNFS4.tMenu._vf + 2)
             ,0x1000,(tScreen *)0x0,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___18tInsideBoxSongMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0,(tMenuItem *)0x0);
  __12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme
            (this_31,(uint)&DAT_00001010,(tScreen *)screenAudio,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress
              )0x0,0x263,0x26,10,(tMenuItem *)this_14);
  this_21 = (tListIteratorIndexed *)&(this->itemOptionsDisplay).fOffset;
  __20tListIteratorIndexedPsPcT2
            (this_21,SelectListDisplaySpeed,frontEnd.displaySpeed,
             (char *)((int)&(FEApp->helpPopup).numItems + 1));
  this_22 = (tListIteratorIndexed *)
            &(this->itemOptionsControllers).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
             fButtonImage;
  __20tListIteratorIndexedPsPcT2
            (this_22,SelectListDisplayMap,frontEnd.displayMap,
             (char *)((int)&(FEApp->helpPopup).numItems + 1));
  this_41 = (tListIteratorIndexed *)
            ((this->itemOptionsControllers).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
             _vf + 8);
  __20tListIteratorIndexedPsPcT2
            (this_41,SelectListDisplayOpponentID,frontEnd.displayOpponentID,
             (char *)((int)&(FEApp->helpPopup).numItems + 1));
  __20tListIteratorIndexedPsPcT2
            ((tListIteratorIndexed *)&this->itemOptionsMemoryCard,SelectListOffOn,
             frontEnd.displayTime,(char *)((int)&(FEApp->helpPopup).numItems + 1));
  this_25 = (tListIteratorIndexed *)
            &(this->itemOptionsMemoryCard).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
             fNewMenu;
  __20tListIteratorIndexedPsPcT2
            (this_25,SelectListOffOn,frontEnd.displayPosition,
             (char *)((int)&(FEApp->helpPopup).numItems + 1));
  this_23 = (tListIteratorIndexed *)&(this->itemOptionsMemoryCard).fOrdinalPos;
  __20tListIteratorIndexedPsPcT2
            (this_23,SelectListOffOn,frontEnd.displayLapNumber,
             (char *)((int)&(FEApp->helpPopup).numItems + 1));
  this_26 = (tListIterator *)
            &(this->itemOptionsUsername).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
             fSelFade;
  __13tListIteratorPsPc(this_26,SelectListSplitTime,&frontEnd.checkPointType);
  this_24 = (tListIteratorIndexed *)
            (this->itemOptionsUsername).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf;
  __20tListIteratorIndexedPsPcT2
            (this_24,SelectListSplitDisplay,frontEnd.checkPointDisplay,
             (char *)((int)&(FEApp->helpPopup).numItems + 1));
  this_43 = (tMenuItemLeftRightFade *)&(this->itemOptionsUsername).fOffset;
  __22tMenuItemLeftRightFadeUiP13tListIterator(this_43,0x1df,(tListIterator *)this_21);
  (this->itemOptionsCredits).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fNumFrames =
       -0x7ffef270;
  __22tMenuItemLeftRightFadeUiP13tListIterator
            ((tMenuItemLeftRightFade *)
             &(this->itemOptionsCredits).tMenuItemGoToMenuButton.fOnButtonPress,0x1e1,
             (tListIterator *)this_22);
  (this->menuOptions).tMenu.fCurrentItem = -0x7ffef270;
  __22tMenuItemLeftRightFadeUiP13tListIterator
            ((tMenuItemLeftRightFade *)((this->menuOptions).tMenu.fItemList + 3),0x1e2,
             (tListIterator *)this_41);
  (this->menuOptions).tMenu.fItemList[9] = (_func_21 *)0x80010d90;
  __22tMenuItemLeftRightFadeUiP13tListIterator
            ((tMenuItemLeftRightFade *)((this->menuOptions).tMenu.fItemList + 0xe),0x1e3,
             (tListIterator *)&this->itemOptionsMemoryCard);
  (this->menuOptions).tMenu.fOnButtonPress = &table;
  __22tMenuItemLeftRightFadeUiP13tListIterator
            ((tMenuItemLeftRightFade *)&(this->menuOptions).fInMenuTransition,0x1e6,
             (tListIterator *)this_25);
  *(undefined4 *)((this->iteratorMusicVolume).tListIterator._vf + 2) = 0x80010d38;
  __22tMenuItemLeftRightFadeUiP13tListIterator
            ((tMenuItemLeftRightFade *)&(this->iteratorEngineVolume).tListIterator.fValue,0x1e7,
             (tListIterator *)this_23);
  *(undefined4 *)((this->iteratorSpeechVolume).tListIterator._vf + 2) = 0x80010d38;
  __22tMenuItemLeftRightFadeUiP13tListIterator
            ((tMenuItemLeftRightFade *)&(this->iteratorAudioMode).fValue,0x1e4,this_26);
  (this->itemMusicVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.fButtonImage =
       -0x7ffef270;
  __22tMenuItemLeftRightFadeUiP13tListIterator
            ((tMenuItemLeftRightFade *)
             ((this->itemMusicVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem._vf +
             8),0x1e5,(tListIterator *)this_24);
  screenHandler_01 = screenDisplay;
  *(undefined4 *)&(this->itemMusicVolume).fAudioArt = 0x80010d90;
  __12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme
            (this_07,(uint)&DAT_00001020,(tScreen *)screenHandler_01,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress
              )0x0,0x1dd,1,10,(tMenuItem *)this_43);
  this_21 = (tListIteratorIndexed *)
            &(this->itemSpeechVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
             fButtonImage;
  __20tListIteratorIndexedPsPcT2
            (this_21,SelectListControllerConfig,frontEnd.controlConfig,
             (char *)((int)&(FEApp->helpPopup).numItems + 1));
  this_43 = (tMenuItemLeftRightFade *)
            ((this->itemSpeechVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem._vf +
            8);
  __22tMenuItemLeftRightFadeUiP13tListIterator(this_43,0x209,(tListIterator *)this_21);
  *(undefined4 *)&(this->itemSpeechVolume).fAudioArt = 0x80010c20;
  __20tMenuItemSlidingMenuUissssb
            ((tMenuItemSlidingMenu *)
             &(this->itemAmbientVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
              fButtonImage,0x20a,0xac,0x48,0,0xd,&DAT_00000001);
  __12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme
            (this_32,(uint)&DAT_00001020,(tScreen *)screenControllerConfig,(tMenu *)0x0,(tMenu *)0x0
             ,(
               TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress
               )0x0,0x208,0,10,(tMenuItem *)this_43);
  this_37 = (tListIteratorRangeIndexed *)
            &(this->menuPlayListMenu).tInsideBoxMenu.tMenu.fNeverAnyEnabled;
  __25tListIteratorRangeIndexedccPcT3
            (this_37,'\0','\x7f',frontEnd.shockMode,(char *)((int)&(FEApp->helpPopup).numItems + 1))
  ;
  this_33 = (tInsideBoxLeftRightSlider *)
            ((this->menuPlayListMenu).tInsideBoxMenu.tMenu.fItemList + 4);
  __25tInsideBoxLeftRightSliderUiP13tListIterator(this_33,0x20e,(tListIterator *)this_37);
  ptVar2 = FEApp;
  this_37 = (tListIteratorRangeIndexed *)
            ((this->menuPlayListMenu).tInsideBoxMenu.tMenu.fItemList + 0xe);
  (this->menuPlayListMenu).tInsideBoxMenu.tMenu.fItemList[10] = (_func_21 *)0x80010a10;
  __25tListIteratorRangeIndexedccPcT3
            (this_37,'\0','\x7f',frontEnd.shockImpact,
             (char *)((int)&(ptVar2->helpPopup).numItems + 1));
  __25tInsideBoxLeftRightSliderUiP13tListIterator
            ((tInsideBoxLeftRightSlider *)
             &(this->menuPlayListMenu).tInsideBoxMenu.tMenu.fOptionsMenu,0x20f,
             (tListIterator *)this_37);
  this_37 = (tListIteratorRangeIndexed *)((this->menuPlayListMenu).fOnOffFade + 4);
  ptVar1 = &FEApp->helpPopup;
  *(undefined4 *)&(this->menuPlayListMenu).tInsideBoxMenu.fPrevItem = 0x80010a10;
  __25tListIteratorRangeIndexedccPcT3
            (this_37,'\0','\x7f',frontEnd.J1MAX,(char *)((int)&ptVar1->numItems + 1));
  this_34 = (tInsideBoxTwoWaySlider *)&(this->menuAudio).tMenu.fCurrentItem;
  __22tInsideBoxTwoWaySliderUiP13tListIteratori(this_34,0x211,(tListIterator *)this_37,0);
  this_37 = (tListIteratorRangeIndexed *)((this->menuAudio).tMenu.fItemList + 10);
  __25tListIteratorRangeIndexedccPcT3
            (this_37,'\0','\x7f',frontEnd.J1MIN,(char *)((int)&(FEApp->helpPopup).numItems + 1));
  __22tInsideBoxTwoWaySliderUiP13tListIteratori
            ((tInsideBoxTwoWaySlider *)((this->menuAudio).tMenu.fItemList + 0xf),0x213,
             (tListIterator *)this_37,1);
  this_37 = (tListIteratorRangeIndexed *)&(this->menuAudio).fScreenFade;
  __25tListIteratorRangeIndexedccPcT3
            (this_37,'\0','\x7f',frontEnd.J2MAX,(char *)((int)&(FEApp->helpPopup).numItems + 1));
  __22tInsideBoxTwoWaySliderUiP13tListIteratori
            ((tInsideBoxTwoWaySlider *)&(this->iteratorDisplaySpeedometer).tListIterator.fMinValue,
             0x210,(tListIterator *)this_37,2);
  this_37 = (tListIteratorRangeIndexed *)&(this->iteratorDisplayOpponentID).fIndex;
  __25tListIteratorRangeIndexedccPcT3
            (this_37,'\0','\x7f',frontEnd.J2MIN,(char *)((int)&(FEApp->helpPopup).numItems + 1));
  __22tInsideBoxTwoWaySliderUiP13tListIteratori
            ((tInsideBoxTwoWaySlider *)&(this->iteratorDisplayTime).fIndex,0x212,
             (tListIterator *)this_37,3);
  this_37 = (tListIteratorRangeIndexed *)&(this->iteratorDisplaySplitTime).fValue;
  __25tListIteratorRangeIndexedccPcT3
            (this_37,'\0','\x7f',frontEnd.steeringRange,
             (char *)((int)&(FEApp->helpPopup).numItems + 1));
  this_35 = (tInsideBoxTwoWaySlider *)&(this->iteratorDisplaySplitDisplay).tListIterator.fMinValue;
  __22tInsideBoxTwoWaySliderUiP13tListIteratori(this_35,0x214,(tListIterator *)this_37,0);
  this_37 = (tListIteratorRangeIndexed *)
            &(this->itemDisplaySpeedometer).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.fData;
  __25tListIteratorRangeIndexedccPcT3
            (this_37,'\0','\x7f',frontEnd.deadSpot,(char *)((int)&(FEApp->helpPopup).numItems + 1));
  __22tInsideBoxTwoWaySliderUiP13tListIteratori
            ((tInsideBoxTwoWaySlider *)
             &(this->itemDisplayMap).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
              tMenuItemInteractive.tMenuItem.fTextDescription,0x215,(tListIterator *)this_37,1);
  __25tListIteratorRangeIndexedccPcT3
            ((tListIteratorRangeIndexed *)&this->itemDisplayOpponentID,'\0',-1,frontEnd.ImaxRange,
             (char *)((int)&(FEApp->helpPopup).numItems + 1));
  __22tInsideBoxTwoWaySliderUiP13tListIteratori
            ((tInsideBoxTwoWaySlider *)
             &(this->itemDisplayOpponentID).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
              tMenuItemInteractive.tMenuItem.fNewMenu,0x216,
             (tListIterator *)&this->itemDisplayOpponentID,2);
  this_37 = (tListIteratorRangeIndexed *)
            &(this->itemDisplayTime).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
             tMenuItemInteractive.tMenuItem.fNumFrames;
  __25tListIteratorRangeIndexedccPcT3
            (this_37,'\0',-1,frontEnd.IImaxRange,(char *)((int)&(FEApp->helpPopup).numItems + 1));
  __22tInsideBoxTwoWaySliderUiP13tListIteratori
            ((tInsideBoxTwoWaySlider *)
             &(this->itemDisplayTime).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.fData,0x217,
             (tListIterator *)this_37,3);
  __14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tInsideBoxMenu *)
             ((this->itemDisplayPosition).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
              tMenuItemInteractive.tMenuItem._vf + 4),0x1000,(tScreen *)0x0,(tMenu *)0x0,
             (tMenu *)0x0,
             (
              TDRFuncPtr___14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0,(tMenuItem *)this_33);
  __14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tInsideBoxMenu *)
             ((this->itemDisplaySplitTime).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
              tMenuItemInteractive.tMenuItem._vf + 8),0x1000,(tScreen *)0x0,(tMenu *)0x0,
             (tMenu *)0x0,
             (
              TDRFuncPtr___14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0,(tMenuItem *)this_34);
  __14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tInsideBoxMenu *)((this->menuDisplayOptions).tMenu.fItemList + 7),0x1000,
             (tScreen *)0x0,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0,(tMenuItem *)this_33);
  __14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tInsideBoxMenu *)
             &(this->itemControllerConfigSelected).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
              tMenuItemInteractive.tMenuItem.fTextDescription,0x1000,(tScreen *)0x0,(tMenu *)0x0,
             (tMenu *)0x0,
             (
              TDRFuncPtr___14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0,(tMenuItem *)this_35);
  __23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v
            ((tMenuItemGoToMenuButton *)&(this->itemControllerSettings).fDiffX,0x286,(tMenu *)0x0,
             MenuExtended_SaveGame__FR12tMenuCommand);
  (this->menuControllerConfig).tMenu.fItemList[0] = &table;
  this_38 = (tMenuItemGoToMenuButton *)((this->menuControllerConfig).tMenu.fItemList + 5);
  __23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v
            (this_38,0x287,(tMenu *)0x0,MenuExtended_LoadGame__FR12tMenuCommand);
  screenHandler_02 = screenMemcard;
  (this->menuControllerConfig).tMenu.fItemList[0xb] = (_func_21 *)0x80010a68;
  __12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme
            ((tOptionsMenu *)&(this->menuControllerConfig).tMenu.fScreen,(uint)&DAT_00001020,
             (tScreen *)screenHandler_02,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress
              )0x0,-1,0x2e,10,(tMenuItem *)this_38);
  this_39 = (tUserNameMenuItem *)
            &(this->iteratorControllerShockImpact).tListIteratorRange.tListIterator.fValue;
  __17tUserNameMenuItemUi(this_39,0x1f8);
  __17tUserNameMenuItemUi((tUserNameMenuItem *)&this->iteratorControllerDeadSpot1,0x1f8);
  this_15 = (tUserNameMenuItem *)
            &(this->itemControllerSteeringRange2).tMenuItemLeftRightSlider.fWidth;
  __17tUserNameMenuItemUi(this_15,0x1f8);
  __12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme
            ((tOptionsMenu *)
             ((this->itemControllerJoyRange).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem
              ._vf + 8),(uint)&DAT_00001120,(tScreen *)screenUserName,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress
              )0x0,-1,0x20,10,(tMenuItem *)this_39);
  this_26 = (tListIterator *)
            &(this->itemControllerIMax).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
             fSelFade;
  __13tListIteratorPsPc
            (this_26,screenTrophyRoom->fRealCurrentTourn,(char *)(screenTrophyRoom->fTextInfo + 0xe)
            );
  this_12 = (tMenuItemNFS4LeftRightChoice *)
            (this->itemControllerIMax).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem._vf;
  __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii(this_12,0x5e,this_26,-1,0);
  screenHandler = screenTrophyRoom;
  *(undefined4 *)&(this->itemControllerIMax).fType = 0x80011530;
  __15tMenuNFS4BottomUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4Bottom *)
             &(this->iteratorControllerIIMax).tListIteratorRange.tListIterator.fMinValue,
             (uint)&DAT_00004010,(tScreen *)screenHandler,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___15tMenuNFS4BottomUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,-1,(tMenuItem *)this_12);
  this_02 = (tMenuItemGoToMenuNFS4Button *)((this->menuControllerDualShock).tMenu.fItemList + 10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x5a,(tMenu *)0x0,MenuExtended_PinkSlipsContinue__FR12tMenuCommand,0,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuControllerDualShock).tMenu.VertHelp,0x9c,
             (tMenu *)0x0,MenuExtended_ExitPinkSlipsEarly__FR12tMenuCommand,0,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4 *)((this->menuControllerAnalog).tMenu.fItemList + 1),(uint)&DAT_00001004,
             (tScreen *)screenPinkSlipStandings,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0x2f4,(tMenuItem *)this_02);
  this_02 = (tMenuItemGoToMenuNFS4Button *)
            ((this->menuControllerDualShockAnalog).tMenu.fItemList + 1);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x5a,(tMenu *)&(this->itemTimeOfDay).tMenuItemLeftRightChoice.fData,
             (TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
             )0x0,0,10);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->menuControllerDualShockAnalog).tMenu.fItemList + 0xc),0x9b,(tMenu *)0x0,
             MenuExtended_ExitTourney__FR12tMenuCommand,0,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4 *)((this->menuControllerDualShockAnalog).tMenu._vf + 6),(uint)&DAT_00001004,
             (tScreen *)screenTournamentStandings3item,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0x2f4,(tMenuItem *)this_02);
  this_02 = (tMenuItemGoToMenuNFS4Button *)((this->menuControllerNegcon).tMenu._vf + 6);
  this_16 = (tMenuBlank *)((this->menuMemory).tMenu.fItemList + 8);
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x5a,(tMenu *)this_16,
             (TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
             )0x0,0,10);
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
            ((tMenuNFS4 *)
             ((this->itemSaveGame).tMenuItemGoToMenuButtonFade.tMenuItemGoToMenuButton.
              tMenuItemInteractive.tMenuItem._vf + 4),(uint)&DAT_00001004,
             (tScreen *)screenTournamentStandings,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
              )0x0,0x2f4,(tMenuItem *)this_02);
  __10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            (this_16,0x8000,(tScreen *)screenTournamentTrophy,(tMenu *)0x0,(tMenu *)0x0,
             MenuExtended_TierFinished__FR12tMenuCommand,-1);
  __12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme
            ((tOptionsMenu *)&(this->menuItemUserName).fData,(uint)&DAT_00001040,
             (tScreen *)screenUserName,(tMenu *)0x0,(tMenu *)0x0,
             MenuExtended_FinishedPlayer1GetName__FR12tMenuCommand,-1,0x20,10,
             (tMenuItem *)(tUserNameMenuItem *)&this->iteratorControllerDeadSpot1);
  __12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme
            ((tOptionsMenu *)&(this->menuItemUserName1).tMenuItem.fNumFrames,(uint)&DAT_00001080,
             (tScreen *)screenUserName,(tMenu *)0x0,(tMenu *)0x0,
             MenuExtended_FinishedPlayer2GetName__FR12tMenuCommand,-1,0x20,10,(tMenuItem *)this_15);
  this_02 = (tMenuItemGoToMenuNFS4Button *)&(this->menuItemUserName1).fInTransition;
  __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
            (this_02,0x5a,(tMenu *)0x0,MenuExtended_PostGameMenu__FR12tMenuCommand,-1,-1);
  screenHandler_00 = screenTrackRecords;
  (this->menuItemUserName2).tMenuItem.fNewMenu = (tMenu *)&DAT_800114d8;
  __12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme
            ((tOptionsMenu *)&(this->menuItemUserName2).fMaxStringLength,(uint)&LAB_00021004,
             (tScreen *)screenHandler_00,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress
              )0x0,0xd4,1,10,(tMenuItem *)this_02);
  __10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenuBlank *)((this->menuUserName).tMenu.fItemList + 1),0x8000,
             (tScreen *)screenPinkSlipCongrats,(tMenu *)0x0,(tMenu *)0x0,
             MenuExtended_AwardPinkSlipsCar__FR12tMenuCommand,-1);
  __10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenuBlank *)&(this->iteratorChangeTrophy).fMinValue,0x8000,
             (tScreen *)screenBeTheCopCongrats,(tMenu *)0x0,(tMenu *)0x0,
             MenuExtended_TransitionFromPostGameToMainMenuAndSaveGame__FR12tMenuCommand,-1);
  __10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenuBlank *)((this->menuTrophyRoom).tMenuNFS4.tMenu.fItemList + 0xd),0x8000,
             (tScreen *)screenTournamentCongrats,(tMenu *)0x0,(tMenu *)0x0,
             MenuExtended_TransitionFromPostGameToMainMenuAndSaveGame__FR12tMenuCommand,-1);
  __10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenuBlank *)
             &(this->itemPinkSlipStandingsExit).tMenuItemGoToMenuButton.tMenuItemInteractive.
              tMenuItem.fSelFade,(uint)&DAT_00001010,(tScreen *)screenMain,(tMenu *)0x0,(tMenu *)0x0
             ,(TDRFuncPtr___10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)0x0,
             -1);
  this_38 = (tMenuItemGoToMenuButton *)&(this->menuPinkSlipStandings).tMenu.fScreen;
  __23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v
            (this_38,0x28a,(tMenu *)0x0,
             MenuExtended_TransitionFromPostGameToMainMenu__FR12tMenuCommand);
  screenHandler_02 = screenMemcard;
  *(undefined4 *)((this->menuPinkSlipStandings).tMenu._vf + 2) = 0x80010a68;
  __12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme
            ((tOptionsMenu *)&(this->menuPinkSlipStandings).fTransitionVal,(uint)&DAT_00001040,
             (tScreen *)screenHandler_02,(tMenu *)0x0,(tMenu *)0x0,
             (
              TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress
              )0x0,-1,0x2e,10,(tMenuItem *)this_38);
  *(tMenu **)&(this->itemCar2).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.fSelFade =
       (tMenu *)&(this->itemOpponentCar).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
                 fNewMenu;
  *(__vtbl_ptr_type **)
   &(this->itemPlayerOneRace).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
    fTextDescription =
       (this->itemColorP1).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf;
  *(short **)((this->menuPlayerTwoCarSelect).tMenuNFS4.tMenu.fItemList + 1) =
       &(this->itemPlayerOneGarageRace).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
        fSelFade;
  SetDimensions__24tMenuItemLeftRightSliderssss
            ((tMenuItemLeftRightSlider *)&(this->menuCarOptionsPlayerOne).tMenuNFS4.fNumItems,0,0,
             0x78,5);
  SetDimensions__24tMenuItemLeftRightSliderssss
            ((tMenuItemLeftRightSlider *)
             ((this->menuCarOptionsPlayerTwo).tMenuNFS4.tMenu.fItemList + 7),0,0,0x78,5);
  SetDimensions__24tMenuItemLeftRightSliderssss
            ((tMenuItemLeftRightSlider *)&(this->menuCarOptionsPlayerTwo).tMenuNFS4.tMenu.VertHelp,0
             ,0,0x78,5);
  SetDimensions__24tMenuItemLeftRightSliderssss
            ((tMenuItemLeftRightSlider *)
             (this->menuPinkSlipCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList,0,0,0x78,5);
  SetDimensions__24tMenuItemLeftRightSliderssss
            ((tMenuItemLeftRightSlider *)
             ((this->menuPinkSlipCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList + 0xe),0,0,0x78,5);
  uVar3 = *(uint *)((this->menuControllerNegcon).tMenu._vf + 6);
  (this->menuPlayerOneCarSelect).tMenuNFS4.fInItemTransition = (void *)0x20;
  *(undefined4 *)
   (this->itemTrackInfoContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf = 2;
  (this->menuPlayerTwoGarage).tMenuNFS4.tMenu.fItemList[3] = (_func_21 *)0x1;
  (this->menuPlayerOnePinkSlipCarSelect).tMenuNFS4.fInMenuTransition = (void *)0x2;
  *(undefined2 *)
   &(this->itemOptionsDisplay).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fNumFrames = 0
  ;
  (this->itemEngineVolume).fFadeVal = 0;
  *(undefined2 *)&(this->itemSlidingPlayList).tMenuItemSlidingMenu.fClosing = 1;
  *(uint *)((this->menuControllerNegcon).tMenu._vf + 6) = uVar3 | 0x40;
  *(undefined2 *)
   (this->itemControllerShockMode).tInsideBoxLeftRightSlider.tMenuItemLeftRightSlider.
   tMenuItemInteractive.tMenuItem._vf = 0;
  *(undefined2 *)&(this->iteratorControllerIMax).tListIteratorRange.tListIterator.fSelectionList = 0
  ;
  (this->itemTrackMirrored).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.fSelFade = 1;
  *(undefined2 *)((this->menuTrophyInfo).tMenuNFS4.tMenu.fItemList + 5) = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._15tGlobalMenuDefs(struct tGlobalMenuDefs *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 2204, offset 0x800315d4
	/* begin block 1 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 1 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 2 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 2.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 2.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 2 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 3 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 3 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 4 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 4 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 5 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 5 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 6 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 6 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 7 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 7 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 8 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 8.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 8.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 8 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 9 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 9.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 9.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 9 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 10 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 10 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 11 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 11 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 12 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 12.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 12.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 12 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 13 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 13.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 13.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 13 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 14 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 14.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 14.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 14 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 15 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 15.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 15.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 15 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 16 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 16.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 16.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 16 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 17 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 17.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 17.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 17 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 18 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 18.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 18.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 18 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 19 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 19.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 19.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 19 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 20 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 20.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 20.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 20 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 21 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 21 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 22 */
		// Start line: 2205
		// Start offset: 0x800315D4

		/* begin block 22.1 */
			// Start line: 2205
			// Start offset: 0x800315D4
		/* end block 22.1 */
		// End offset: 0x800315D4
		// End Line: 2205
	/* end block 22 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 23 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 23 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 24 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 24 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 25 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 25 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 26 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 26 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 27 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 27 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 28 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 28 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 29 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 29 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 30 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 30 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 31 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 31 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 32 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 32 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 33 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 33 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 34 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 34 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 35 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 35 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 36 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 36 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 37 */
		// Start line: 2205
		// Start offset: 0x800315D4
	/* end block 37 */
	// End offset: 0x800315D4
	// End Line: 2205

	/* begin block 38 */
		// Start line: 4658
	/* end block 38 */
	// End Line: 4659

	/* begin block 39 */
		// Start line: 4662
	/* end block 39 */
	// End Line: 4663

	/* begin block 40 */
		// Start line: 4662
	/* end block 40 */
	// End Line: 4663

/* WARNING: Type propagation algorithm not settling */

void ___15tGlobalMenuDefs(tGlobalMenuDefs *this,int __in_chrg)

{
  ___12tOptionsMenu((tOptionsMenu *)&(this->menuPinkSlipStandings).fTransitionVal,2);
  ___23tMenuItemGoToMenuButton
            ((tMenuItemGoToMenuButton *)&(this->menuPinkSlipStandings).tMenu.fScreen,2);
  ___10tMenuBlank((tMenuBlank *)
                  &(this->itemPinkSlipStandingsExit).tMenuItemGoToMenuButton.tMenuItemInteractive.
                   tMenuItem.fSelFade,2);
  ___10tMenuBlank((tMenuBlank *)((this->menuTrophyRoom).tMenuNFS4.tMenu.fItemList + 0xd),2);
  ___10tMenuBlank((tMenuBlank *)&(this->iteratorChangeTrophy).fMinValue,2);
  ___10tMenuBlank((tMenuBlank *)((this->menuUserName).tMenu.fItemList + 1),2);
  ___12tOptionsMenu((tOptionsMenu *)&(this->menuItemUserName2).fMaxStringLength,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuItemUserName1).fInTransition,2);
  ___12tOptionsMenu((tOptionsMenu *)&(this->menuItemUserName1).tMenuItem.fNumFrames,2);
  ___12tOptionsMenu((tOptionsMenu *)&(this->menuItemUserName).fData,2);
  ___10tMenuBlank((tMenuBlank *)((this->menuMemory).tMenu.fItemList + 8),2);
  ___9tMenuNFS4((tMenuNFS4 *)
                ((this->itemSaveGame).tMenuItemGoToMenuButtonFade.tMenuItemGoToMenuButton.
                 tMenuItemInteractive.tMenuItem._vf + 4),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)((this->menuControllerNegcon).tMenu._vf + 6),2);
  ___9tMenuNFS4((tMenuNFS4 *)((this->menuControllerDualShockAnalog).tMenu._vf + 6),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->menuControllerDualShockAnalog).tMenu.fItemList + 0xc),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->menuControllerDualShockAnalog).tMenu.fItemList + 1),2);
  ___9tMenuNFS4((tMenuNFS4 *)((this->menuControllerAnalog).tMenu.fItemList + 1),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuControllerDualShock).tMenu.VertHelp,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)((this->menuControllerDualShock).tMenu.fItemList + 10),2
            );
  ___15tMenuNFS4Bottom
            ((tMenuNFS4Bottom *)
             &(this->iteratorControllerIIMax).tListIteratorRange.tListIterator.fMinValue,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)
             (this->itemControllerIMax).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem._vf,
             2);
  ___13tListIterator((tListIterator *)
                     &(this->itemControllerIMax).tMenuItemLeftRightSlider.tMenuItemInteractive.
                      tMenuItem.fSelFade,2);
  ___12tOptionsMenu((tOptionsMenu *)
                    ((this->itemControllerJoyRange).tMenuItemLeftRightSlider.tMenuItemInteractive.
                     tMenuItem._vf + 8),2);
  ___9tMenuItem((tMenuItem *)&(this->itemControllerSteeringRange2).tMenuItemLeftRightSlider.fWidth,2
               );
  ___9tMenuItem((tMenuItem *)&this->iteratorControllerDeadSpot1,2);
  ___9tMenuItem((tMenuItem *)
                &(this->iteratorControllerShockImpact).tListIteratorRange.tListIterator.fValue,2);
  ___12tOptionsMenu((tOptionsMenu *)&(this->menuControllerConfig).tMenu.fScreen,2);
  ___23tMenuItemGoToMenuButton
            ((tMenuItemGoToMenuButton *)((this->menuControllerConfig).tMenu.fItemList + 5),2);
  ___23tMenuItemGoToMenuButton((tMenuItemGoToMenuButton *)&(this->itemControllerSettings).fDiffX,2);
  ___14tInsideBoxMenu((tInsideBoxMenu *)
                      &(this->itemControllerConfigSelected).tMenuItemLeftRightFade.
                       tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.fTextDescription,2);
  ___14tInsideBoxMenu((tInsideBoxMenu *)((this->menuDisplayOptions).tMenu.fItemList + 7),2);
  ___14tInsideBoxMenu((tInsideBoxMenu *)
                      ((this->itemDisplaySplitTime).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
                       tMenuItemInteractive.tMenuItem._vf + 8),2);
  ___14tInsideBoxMenu((tInsideBoxMenu *)
                      ((this->itemDisplayPosition).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
                       tMenuItemInteractive.tMenuItem._vf + 4),2);
  ___22tInsideBoxTwoWaySlider
            ((tInsideBoxTwoWaySlider *)
             &(this->itemDisplayTime).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.fData,2);
  ___25tListIteratorRangeIndexed
            ((tListIteratorRangeIndexed *)
             &(this->itemDisplayTime).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
              tMenuItemInteractive.tMenuItem.fNumFrames,2);
  ___22tInsideBoxTwoWaySlider
            ((tInsideBoxTwoWaySlider *)
             &(this->itemDisplayOpponentID).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
              tMenuItemInteractive.tMenuItem.fNewMenu,2);
  ___25tListIteratorRangeIndexed((tListIteratorRangeIndexed *)&this->itemDisplayOpponentID,2);
  ___22tInsideBoxTwoWaySlider
            ((tInsideBoxTwoWaySlider *)
             &(this->itemDisplayMap).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
              tMenuItemInteractive.tMenuItem.fTextDescription,2);
  ___25tListIteratorRangeIndexed
            ((tListIteratorRangeIndexed *)
             &(this->itemDisplaySpeedometer).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.fData,2
            );
  ___22tInsideBoxTwoWaySlider
            ((tInsideBoxTwoWaySlider *)&(this->iteratorDisplaySplitDisplay).tListIterator.fMinValue,
             2);
  ___25tListIteratorRangeIndexed
            ((tListIteratorRangeIndexed *)&(this->iteratorDisplaySplitTime).fValue,2);
  ___22tInsideBoxTwoWaySlider((tInsideBoxTwoWaySlider *)&(this->iteratorDisplayTime).fIndex,2);
  ___25tListIteratorRangeIndexed
            ((tListIteratorRangeIndexed *)&(this->iteratorDisplayOpponentID).fIndex,2);
  ___22tInsideBoxTwoWaySlider
            ((tInsideBoxTwoWaySlider *)&(this->iteratorDisplaySpeedometer).tListIterator.fMinValue,2
            );
  ___25tListIteratorRangeIndexed((tListIteratorRangeIndexed *)&(this->menuAudio).fScreenFade,2);
  ___22tInsideBoxTwoWaySlider((tInsideBoxTwoWaySlider *)((this->menuAudio).tMenu.fItemList + 0xf),2)
  ;
  ___25tListIteratorRangeIndexed
            ((tListIteratorRangeIndexed *)((this->menuAudio).tMenu.fItemList + 10),2);
  ___22tInsideBoxTwoWaySlider((tInsideBoxTwoWaySlider *)&(this->menuAudio).tMenu.fCurrentItem,2);
  ___25tListIteratorRangeIndexed
            ((tListIteratorRangeIndexed *)((this->menuPlayListMenu).fOnOffFade + 4),2);
  ___25tInsideBoxLeftRightSlider
            ((tInsideBoxLeftRightSlider *)
             &(this->menuPlayListMenu).tInsideBoxMenu.tMenu.fOptionsMenu,2);
  ___25tListIteratorRangeIndexed
            ((tListIteratorRangeIndexed *)
             ((this->menuPlayListMenu).tInsideBoxMenu.tMenu.fItemList + 0xe),2);
  ___25tInsideBoxLeftRightSlider
            ((tInsideBoxLeftRightSlider *)
             ((this->menuPlayListMenu).tInsideBoxMenu.tMenu.fItemList + 4),2);
  ___25tListIteratorRangeIndexed
            ((tListIteratorRangeIndexed *)
             &(this->menuPlayListMenu).tInsideBoxMenu.tMenu.fNeverAnyEnabled,2);
  ___12tOptionsMenu((tOptionsMenu *)
                    &(this->itemAudioMode).tMenuItemLeftRightFade.tMenuItemLeftRightChoice.
                     tMenuItemInteractive.tMenuItem.fNumFrames,2);
  ___20tMenuItemSlidingMenu
            ((tMenuItemSlidingMenu *)
             &(this->itemAmbientVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
              fButtonImage,2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)
             ((this->itemSpeechVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem._vf +
             8),2);
  ___20tListIteratorIndexed
            ((tListIteratorIndexed *)
             &(this->itemSpeechVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem.
              fButtonImage,2);
  ___12tOptionsMenu((tOptionsMenu *)
                    &(this->itemSoundEffectsVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.
                     tMenuItem.fButtonImage,2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)
             ((this->itemMusicVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.tMenuItem._vf +
             8),2);
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)&(this->iteratorAudioMode).fValue,2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)&(this->iteratorEngineVolume).tListIterator.fValue,2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)&(this->menuOptions).fInMenuTransition,2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)((this->menuOptions).tMenu.fItemList + 0xe),2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)((this->menuOptions).tMenu.fItemList + 3),2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)
             &(this->itemOptionsCredits).tMenuItemGoToMenuButton.fOnButtonPress,2);
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)&(this->itemOptionsUsername).fOffset,2);
  ___20tListIteratorIndexed
            ((tListIteratorIndexed *)
             (this->itemOptionsUsername).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf,
             2);
  ___13tListIterator((tListIterator *)
                     &(this->itemOptionsUsername).tMenuItemGoToMenuButton.tMenuItemInteractive.
                      tMenuItem.fSelFade,2);
  ___20tListIteratorIndexed((tListIteratorIndexed *)&(this->itemOptionsMemoryCard).fOrdinalPos,2);
  ___20tListIteratorIndexed
            ((tListIteratorIndexed *)
             &(this->itemOptionsMemoryCard).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fNewMenu,2);
  ___20tListIteratorIndexed((tListIteratorIndexed *)&this->itemOptionsMemoryCard,2);
  ___20tListIteratorIndexed
            ((tListIteratorIndexed *)
             ((this->itemOptionsControllers).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              _vf + 8),2);
  ___20tListIteratorIndexed
            ((tListIteratorIndexed *)
             &(this->itemOptionsControllers).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fButtonImage,2);
  ___20tListIteratorIndexed((tListIteratorIndexed *)&(this->itemOptionsDisplay).fOffset,2);
  ___12tOptionsMenu((tOptionsMenu *)&(this->menuShowroom).tMenuNFS4.tMenu.VertHelp,2);
  ___18tInsideBoxSongMenu
            ((tInsideBoxSongMenu *)((this->menuPinkSlipCarOptionsPlayerTwo).tMenuNFS4.tMenu._vf + 2)
             ,2);
  ___20tMenuItemSlidingMenu
            ((tMenuItemSlidingMenu *)
             ((this->menuPinkSlipCarOptionsPlayerTwo).tMenuNFS4.tMenu.fItemList + 4),2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)
             &(this->menuPinkSlipCarOptionsPlayerOne).tMenuNFS4.fNumItems,2);
  ___29tMenuItemLeftRightAudioSlider
            ((tMenuItemLeftRightAudioSlider *)
             ((this->menuPinkSlipCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList + 0xe),2);
  ___29tMenuItemLeftRightAudioSlider
            ((tMenuItemLeftRightAudioSlider *)
             (this->menuPinkSlipCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList,2);
  ___29tMenuItemLeftRightAudioSlider
            ((tMenuItemLeftRightAudioSlider *)
             &(this->menuCarOptionsPlayerTwo).tMenuNFS4.tMenu.VertHelp,2);
  ___29tMenuItemLeftRightAudioSlider
            ((tMenuItemLeftRightAudioSlider *)
             ((this->menuCarOptionsPlayerTwo).tMenuNFS4.tMenu.fItemList + 7),2);
  ___29tMenuItemLeftRightAudioSlider
            ((tMenuItemLeftRightAudioSlider *)&(this->menuCarOptionsPlayerOne).tMenuNFS4.fNumItems,2
            );
  ___13tListIterator((tListIterator *)((this->menuCarOptionsPlayerOne).tMenuNFS4.tMenu._vf + 10),2);
  ___18tListIteratorRange
            ((tListIteratorRange *)&(this->menuCarOptionsPlayerOne).tMenuNFS4.tMenu.fOnButtonPress,2
            );
  ___18tListIteratorRange
            ((tListIteratorRange *)&(this->menuCarOptionsPlayerOne).tMenuNFS4.tMenu.fScreen,2);
  ___18tListIteratorRange
            ((tListIteratorRange *)((this->menuCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList + 0xc)
             ,2);
  ___18tListIteratorRange
            ((tListIteratorRange *)((this->menuCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList + 8),2
            );
  ___18tListIteratorRange
            ((tListIteratorRange *)((this->menuCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList + 4),2
            );
  ___9tMenuNFS4((tMenuNFS4 *)((this->menuCarOptions).tMenuNFS4.tMenu.fItemList + 8),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuCarOptions).tMenuNFS4.tMenu.fTitle,2);
  ___27tMenuItemGoToMenuNFS4Button((tMenuItemGoToMenuNFS4Button *)&this->itemOpponentUpgrades,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemABS2).tMenuItemLeftRightChoice.fData,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemTransmission2).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf
             + 8),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemDamage).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf + 4),2)
  ;
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             (this->itemABS).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf,2);
  ___10tMenuBlank((tMenuBlank *)((this->iteratorTransmission).tListIterator._vf + 2),2);
  ___12tMenuOptions((tMenuOptions *)&(this->menuCarUpgrades).tMenu.fNeverAnyEnabled,2);
  ___12tMenuOptions((tMenuOptions *)
                    &(this->itemPurchaseUpgrade1).tMenuItemGoToMenuButton.fOnButtonPress,2);
  ___12tMenuOptions((tMenuOptions *)((this->menuCarSeller).tMenu.fItemList + 5),2);
  ___12tMenuOptions((tMenuOptions *)
                    &(this->itemSellerCar).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
                     fTextDescription,2);
  ___12tMenuOptions((tMenuOptions *)((this->menuCarDealer).tMenu.fItemList + 4),2);
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)&this->menuCarDealer,2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)
             &(this->itemDealerShowroom).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fNewMenu,2);
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)&(this->itemBuyCar).fOrdinalPos,2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)
             &(this->itemBuyCar).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fSelFade,2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)
             (this->itemDealerColor).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf,2);
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)&(this->itemDealerCar).fOffset,2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)
             &(this->itemDealerCar).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.fSelFade
             ,2);
  ___13tListIterator((tListIterator *)&(this->iteratorDealerColor).fIndexSize,2);
  ___13tListIterator((tListIterator *)&(this->iteratorDealerColor).tListIterator.fMinValue,2);
  ___20tListIteratorIndexed((tListIteratorIndexed *)&(this->iteratorDealerCar).fCarListFilter,2);
  ___20tListIteratorIndexed((tListIteratorIndexed *)&(this->menuGoToCarDealer).fNumItems,2);
  ___9tMenuNFS4((tMenuNFS4 *)&(this->menuGoToCarDealer).tMenu.fTitle,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemGoToSellCar).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fButtonImage,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemGoToBuyCar).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fNewMenu
             ,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->menuPlayerTwoPinkSlipCarSelect).tMenuNFS4.tMenu._vf + 6),2);
  ___9tMenuNFS4((tMenuNFS4 *)
                ((this->itemPinkSlipCarP2).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
                 _vf + 8),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemPlayerTwoPinkSlipRace).fOrdinalPos,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)&this->itemPlayerTwoPinkSlipRace,2);
  ___16tListIteratorCar
            ((tListIteratorCar *)((this->menuPlayerOnePinkSlipCarSelect).tMenuNFS4.tMenu._vf + 2),2)
  ;
  ___9tMenuNFS4((tMenuNFS4 *)
                ((this->itemPinkSlipCarP1).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
                 _vf + 4),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemPlayerOnePinkSlipRace).tMenuItemGoToMenuButton.fOnButtonPress,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->iteratorPinkSlipsCar).fCarManager,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)((this->menuPlayerTwoGarage).tMenuNFS4.tMenu._vf + 10),
             2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)
             ((this->menuPlayerTwoGarage).tMenuNFS4.tMenu.fItemList + 0xe),2);
  ___21tListIteratorCarColor
            ((tListIteratorCarColor *)((this->menuPlayerTwoGarage).tMenuNFS4.tMenu.fItemList + 6),2)
  ;
  ___16tListIteratorCar
            ((tListIteratorCar *)&(this->menuPlayerTwoGarage).tMenuNFS4.tMenu.fNeverAnyEnabled,2);
  ___9tMenuNFS4((tMenuNFS4 *)&(this->menuPlayerOneGarage).tMenuNFS4.fInMenuTransition,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->menuPlayerOneGarage).tMenuNFS4.tMenu.fItemList + 0xf),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->menuPlayerOneGarage).tMenuNFS4.tMenu.fItemList + 4),2);
  ___18tMenuNFS4TwoPlayer
            ((tMenuNFS4TwoPlayer *)
             &(this->itemPlayerOneGarageRace).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem
              .fSelFade,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)
             &(this->menuPlayerTwoCarSelect).tMenuNFS4.tMenu.VertHelp,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->menuPlayerTwoCarSelect).tMenuNFS4.tMenu.fItemList + 10),2);
  ___18tMenuNFS4TwoPlayer
            ((tMenuNFS4TwoPlayer *)
             ((this->itemCarP2).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf + 4),2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)&(this->itemPlayerTwoRace).fOrdinalPos,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuPlayerOneCarSelect).tMenuNFS4.fNumItems,2);
  ___16tListIteratorCar
            ((tListIteratorCar *)&(this->menuPlayerOneCarSelect).tMenuNFS4.tMenu.VertHelp,2);
  ___18tMenuNFS4TwoPlayer
            ((tMenuNFS4TwoPlayer *)
             (this->itemColorP1).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)
             ((this->itemCarP1).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf + 8),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemPlayerOneRace).fOrdinalPos,2);
  ___18tMenuNFS4TwoPlayer((tMenuNFS4TwoPlayer *)((this->menuHPDuelCarSelect).tMenu.fItemList + 8),2)
  ;
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)&(this->menuHPDuelCarSelect).tMenu.fCurrentItem,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuDuelCarSelect).tMenu.fOnButtonPress,2);
  ___18tMenuNFS4TwoPlayer
            ((tMenuNFS4TwoPlayer *)
             &(this->itemOpponentCar).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
              fNewMenu,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)
             ((this->itemGoToDuelBuyCar).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf
             + 8),2);
  ___28tMenuItemNFS4LeftRightChoice((tMenuItemNFS4LeftRightChoice *)&(this->itemColor2).fOffset,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemCar2).fTransitionSpeed,2);
  ___18tMenuNFS4TwoPlayer((tMenuNFS4TwoPlayer *)&this->iteratorOpponentCar,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)&(this->menuPostCarGarage).tMenu.fOptionsMenu,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)((this->menuPostCarGarage).tMenu.fItemList + 9),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuPostCarGarage).tMenu.fCurrentItem,2);
  ___9tMenuNFS4((tMenuNFS4 *)(this->menuCarGarage).tMenu.fItemList,2);
  ___9tMenuNFS4((tMenuNFS4 *)&(this->itemGarageCar).fTransitionSpeed,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)
             &(this->itemGarageCar).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
              fTextDescription,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuSingleCarSelect).fInMenuTransition,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)&(this->menuSingleCarSelect).tMenu.fScreen,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)((this->menuSingleCarSelect).tMenu.fItemList + 6),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemShowcase).fTransitionSpeed,2);
  ___16tListIteratorCar
            ((tListIteratorCar *)
             &(this->itemShowcase).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fNewMenu,2
            );
  ___9tMenuNFS4((tMenuNFS4 *)&(this->itemCarSelectRace).fOffset,2);
  ___9tMenuNFS4((tMenuNFS4 *)((this->menuTrackInfo).tMenu._vf + 10),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)((this->menuTrackInfo).tMenu.fItemList + 0xd),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)((this->menuTrackInfo).tMenu.fItemList + 2),2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)
             &(this->itemTrackInfoContinue).tMenuItemGoToMenuButton.fOnButtonPress,2);
  ___16tListIteratorCar
            ((tListIteratorCar *)
             &(this->itemTrackInfoContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fSelFade,2);
  ___9tMenuNFS4((tMenuNFS4 *)((this->menuTrackRecords).tMenu.fItemList + 1),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->menuTrackRecordsItem).tMenuItemGoToMenuNFS4Button.tMenuItemGoToMenuButton.
              tMenuItemInteractive.tMenuItem._vf + 4),2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)&(this->menuTrackOptions).tMenuNFS4.fNumItems,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)&(this->menuTrackOptions).tMenuNFS4.tMenu.fChildMenu,2)
  ;
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)((this->menuTrackOptions).tMenuNFS4.tMenu.fItemList + 7)
             ,2);
  ___21tListIteratorCarColor
            ((tListIteratorCarColor *)&(this->menuTrackOptions).tMenuNFS4.tMenu.fNeverAnyEnabled,2);
  ___16tListIteratorCar
            ((tListIteratorCar *)
             ((this->itemLocalSpeech).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf +
             4),2);
  ___9tMenuNFS4((tMenuNFS4 *)&(this->itemTimeOfDay).tMenuItemLeftRightChoice.fData,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemTrackMirrored).tMenuItemLeftRightChoice.fData,2);
  ___12tOptionsMenu((tOptionsMenu *)&(this->iteratorLocalSpeech).fValue,2);
  ___27tMenuItemGoToMenuNFS4Button((tMenuItemGoToMenuNFS4Button *)&this->iteratorWeather,2);
  ___12tMenuOptions((tMenuOptions *)&(this->menuTestDriveTrackSelect).tMenu.fScreen,2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)((this->menuTestDriveTrackSelect).tMenu.fItemList + 7),2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)&(this->menuTestDriveTrackSelect).tMenu.fCurrentItem,2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)((this->menuSingleTrackSelect).tMenu._vf + 2),2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)((this->menuSingleTrackSelect).tMenu.fItemList + 0xd),2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)((this->menuSingleTrackSelect).tMenu.fItemList + 4),2);
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)&this->menuSingleTrackSelect,2);
  ___24tMenuItemLeftRightChoice
            ((tMenuItemLeftRightChoice *)
             &(this->itemTrackRecords).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fNewMenu,2);
  ___13tListIterator((tListIterator *)
                     &(this->itemTrackRecords).tMenuItemGoToMenuButton.tMenuItemInteractive.
                      tMenuItem.fTextDescription,2);
  ___20tListIteratorIndexed
            ((tListIteratorIndexed *)
             ((this->itemTrack).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf + 8),2);
  ___20tListIteratorIndexed
            ((tListIteratorIndexed *)
             &(this->itemTrack).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.fButtonImage
             ,2);
  ___20tListIteratorIndexed((tListIteratorIndexed *)&(this->itemTrackContinue).fOffset,2);
  ___20tListIteratorIndexed
            ((tListIteratorIndexed *)
             (this->itemTrackContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf,2)
  ;
  ___20tListIteratorIndexed
            ((tListIteratorIndexed *)
             &(this->itemTrackContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fTextDescription,2);
  ___20tListIteratorIndexed
            ((tListIteratorIndexed *)
             &(this->iteratorTrack).tListIteratorIndexed.tListIterator.fMinValue,2);
  ___9tMenuNFS4((tMenuNFS4 *)(this->menuPinkSlipsBestOfFive).tMenu.fItemList,2);
  ___9tMenuNFS4((tMenuNFS4 *)((this->menuPinkSlipsBestOfThree).tMenu.fItemList + 2),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemTrack5).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem._vf + 4),2)
  ;
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)&(this->itemTrack4).tMenuItemLeftRightChoice.fData,2);
  ___27tMenuItemGoToMenuNFS4Button((tMenuItemGoToMenuNFS4Button *)&(this->itemTrack3).fOffset,2);
  ___18tListIteratorTrack
            ((tListIteratorTrack *)
             &(this->itemTrack3).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.fNumFrames,
             2);
  ___9tMenuNFS4((tMenuNFS4 *)&(this->itemPinkSlipsContinue).fOrdinalPos,2);
  ___9tMenuNFS4((tMenuNFS4 *)((this->menuPinkSlipSelect).tMenu.fItemList + 8),2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)&(this->menuPinkSlipSelect).tMenu.fCurrentItem,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)
             &(this->itemBestOfFive).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.fNewMenu
             ,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)
             ((this->itemBestOfThree).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf + 8
             ),2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)&(this->itemBestOfOne).fOffset,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)
             &(this->itemBestOfOne).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fTextDescription,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuTwoPlayer).tMenu.fOptionsMenu,2);
  ___9tMenuNFS4((tMenuNFS4 *)
                &(this->itemTwoPlayerPinkSlips).tMenuItemGoToMenuButton.tMenuItemInteractive.
                 tMenuItem.fNewMenu,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemTwoPlayerHotPursuit).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem
              ._vf + 4),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemTwoPlayerDuel).tMenuItemGoToMenuButton.fOnButtonPress,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemTwoPlayerTestDrive).fOffset,2);
  ___9tMenuNFS4((tMenuNFS4 *)((this->menuSpecialEvent).tMenu.fItemList + 9),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuSpecialEvent).tMenu.fCurrentItem,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemSpecialEventSelect).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem
              .fButtonImage,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemSpecialEventContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.
              tMenuItem.fNewMenu,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuTournament).fNumItems,2);
  ___9tMenuNFS4((tMenuNFS4 *)&(this->menuTournament).tMenu.fTitle,2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)
             &(this->itemTournamentSelect).tMenuItemLeftRightChoice.tMenuItemInteractive.tMenuItem.
              fButtonImage,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemTournamentContinue).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fNewMenu,2);
  ___23tListIteratorTournament((tListIteratorTournament *)&this->itemTournamentContinue,2);
  ___9tMenuNFS4((tMenuNFS4 *)((this->menuHotPursuit).tMenu.fItemList + 3),2);
  ___28tMenuItemNFS4LeftRightChoice
            ((tMenuItemNFS4LeftRightChoice *)&(this->itemHotPursuitDuel).fOrdinalPos,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemHotPursuitSolo).fTransitionSpeed,2);
  ___23tListIteratorTournament
            ((tListIteratorTournament *)
             ((this->itemHotPursuitSolo).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf
             + 4),2);
  ___9tMenuNFS4((tMenuNFS4 *)((this->menuSingleRace).tMenu.fItemList + 5),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemSingleRaceFullGrid).fOffset,2);
  ___27tMenuItemGoToMenuNFS4Button(&this->itemSingleRaceFullGrid,2);
  ___9tMenuNFS4((tMenuNFS4 *)((this->menuOnePlayer).tMenu._vf + 10),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)((this->menuOnePlayer).tMenu.fItemList + 0xd),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)((this->menuOnePlayer).tMenu.fItemList + 2),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemOnePlayerSpecialEvents).tMenuItemGoToMenuButton.tMenuItemInteractive.
              tMenuItem._vf + 8),2);
  ___9tMenuNFS4((tMenuNFS4 *)
                &(this->itemOnePlayerPursuit).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem
                 .fButtonImage,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemOnePlayerSingleRace).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem
              .fNewMenu,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemOnePlayerTestDrive).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              _vf + 4),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuSkillLevel).fInItemTransition,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)((this->menuSkillLevel).tMenu.fItemList + 0xe),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)((this->menuSkillLevel).tMenu.fItemList + 3),2);
  ___9tMenuNFS4((tMenuNFS4 *)
                &(this->itemSkillIntermediate).tMenuItemGoToMenuButton.tMenuItemInteractive.
                 tMenuItem.fSelFade,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemSkillBeginner).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fNumFrames,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)((this->menuTrophyInfo).tMenuNFS4.tMenu._vf + 2),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)((this->menuTrophyInfo).tMenuNFS4.tMenu.fItemList + 0xb)
             ,2);
  ___10tMenuBlank((tMenuBlank *)((this->menuTrophyRoomSelect).tMenu.fItemList + 0xd),2);
  ___9tMenuNFS4((tMenuNFS4 *)&(this->itemTournTrophyRoom).fTransitionSpeed,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemTournTrophyRoom).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
              fTextDescription,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->menuMain).tMenu.fOptionsMenu,2);
  ___9tMenuNFS4((tMenuNFS4 *)
                &(this->itemMainOptions).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
                 fNewMenu,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             ((this->itemMainTrophyRoom).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem._vf
             + 4),2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)
             &(this->itemMainTwoPlayerRace).tMenuItemGoToMenuButton.fOnButtonPress,2);
  ___27tMenuItemGoToMenuNFS4Button
            ((tMenuItemGoToMenuNFS4Button *)&(this->itemMainOnePlayerRace).fOffset,2);
  ___27tMenuItemGoToMenuNFS4Button((tMenuItemGoToMenuNFS4Button *)this,2);
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}





