#include "THISDUST.H"
#include "MPAUSE.H"


// decompiled code
// original method signature: 
// struct tPauseMenuDefs * /*$ra*/ __14tPauseMenuDefs(struct tPauseMenuDefs *this /*$s0*/)
 // line 172, offset 0x8009ded4
	/* begin block 1 */
		// Start line: 173
		// Start offset: 0x8009DED4
	/* end block 1 */
	// End offset: 0x8009DED4
	// End Line: 173

	/* begin block 2 */
		// Start line: 344
	/* end block 2 */
	// End Line: 345

	/* begin block 3 */
		// Start line: 344
	/* end block 3 */
	// End Line: 345

/* WARNING: Type propagation algorithm not settling */

tPauseMenuDefs * __14tPauseMenuDefs(tPauseMenuDefs *this)

{
  tPMenu *newMenu;
  tPMenu *newMenu_00;
  tPListIterator *this_00;
  tPListIteratorIndexed *this_01;
  tPMenuItem *firstItem;
  tPMenu *newMenu_01;
  
  __28tPMenuItemNonInteractiveTextUi((tPMenuItemNonInteractiveText *)this,0);
  __23tPMenuItemCommandButtonUi17tPMenuCommandType
            ((tPMenuItemCommandButton *)((this->itemGamePaused).tPMenuItem._vf + 4),1,
             kMPause_Continue);
  __23tPMenuItemCommandButtonUi17tPMenuCommandType
            ((tPMenuItemCommandButton *)
             ((this->itemContinue).tPMenuItemInteractive.tPMenuItem._vf + 4),2,kMPause_Restart);
  newMenu_01 = (tPMenu *)(this->itemAudioSettings).tPMenuItemInteractive.tPMenuItem._vf;
  __24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v
            ((tPMenuItemGoToMenuButton *)(this->itemRestart).tPMenuItemInteractive.tPMenuItem._vf,3,
             newMenu_01,
             (TDRFuncPtr___24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v3OnButtonPress)
             0x0);
  __23tPMenuItemCommandButtonUi17tPMenuCommandType
            ((tPMenuItemCommandButton *)(this->itemOptions).tPMenuItemInteractive.tPMenuItem._vf,4,
             kMPause_QuitToRaceSummary);
  __23tPMenuItemCommandButtonUi17tPMenuCommandType
            (&this->itemQuitRace,5,kMPause_ForfeitToRaceSummary);
  __6tPMenuP10tPMenuIteme((tPMenu *)&(this->itemQuitRace).fCommand,(tPMenuItem *)this);
  firstItem = (tPMenuItem *)((this->menuPause).fItemList + 0xd);
  __28tPMenuItemNonInteractiveTextUi((tPMenuItemNonInteractiveText *)firstItem,6);
  newMenu = (tPMenu *)&(this->itemAudioSettingsFXVolume).fMaxVal;
  __24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v
            ((tPMenuItemGoToMenuButton *)&(this->menuPause).fNextMenu,7,newMenu,
             (TDRFuncPtr___24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v3OnButtonPress)
             0x0);
  newMenu_00 = (tPMenu *)((this->iteratorConfig).tPListIterator._vf + 4);
  __24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v
            ((tPMenuItemGoToMenuButton *)&(this->itemOptionsTitle).tPMenuItem.fTextDescription,8,
             newMenu_00,
             (TDRFuncPtr___24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v3OnButtonPress)
             0x0);
  __6tPMenuP10tPMenuIteme(newMenu_01,firstItem);
  firstItem = (tPMenuItem *)((this->menuOptions).fItemList + 9);
  __28tPMenuItemNonInteractiveTextUi((tPMenuItemNonInteractiveText *)firstItem,10);
  this_00 = (tPListIterator *)((this->menuOptions).fItemList + 0xc);
  __14tPListIteratorPsPi(this_00,InGameSelectListAudioMode,&GameSetup_gData.userSetting.audioMode);
  __25tPMenuItemLeftRightChoiceUiP14tPListIterator
            ((tPMenuItemLeftRightChoice *)((this->menuOptions).fItemList + 0xf),0xb,this_00);
  __25tPMenuItemLeftRightSliderUiPic
            ((tPMenuItemLeftRightSlider *)((this->menuOptions)._vf + 4),0xc,&gMasterMusicLevel,
             '\x7f');
  __25tPMenuItemLeftRightSliderUiPic
            ((tPMenuItemLeftRightSlider *)&this->iteratorAudioMode,0xd,&gMasterSFXLevel,'\x7f');
  __25tPMenuItemLeftRightSliderUiPic
            ((tPMenuItemLeftRightSlider *)
             &(this->itemAudioSettingsAudioMode).tPMenuItemInteractive.tPMenuItem.fTextDescription,
             0xe,&gMasterFENarrationLevel,'\x7f');
  __25tPMenuItemLeftRightSliderUiPic
            ((tPMenuItemLeftRightSlider *)
             &(this->itemAudioSettingsMusicVolume).tPMenuItemInteractive.tPMenuItem.fTextDescription
             ,0xf,&gMasterEngineLevel,'\x7f');
  __25tPMenuItemLeftRightSliderUiPic
            (&this->itemAudioSettingsFXVolume,0x10,&gMasterAmbientLevel,'\x7f');
  __6tPMenuP10tPMenuIteme(newMenu,firstItem);
  this_01 = (tPListIteratorIndexed *)(this->menuAudioSettings).fItemList;
  __21tPListIteratorIndexedPsPiPc
            (this_01,SelectListConfig,(int *)&GameSetup_gData.controllerData,&Device_gPausePortIndex
            );
  firstItem = (tPMenuItem *)((this->menuAudioSettings).fItemList + 4);
  __28tPMenuItemNonInteractiveTextUi((tPMenuItemNonInteractiveText *)firstItem,0x14);
  __25tPMenuItemLeftRightChoiceUiP14tPListIterator
            ((tPMenuItemLeftRightChoice *)((this->menuAudioSettings).fItemList + 7),0x15,
             (tPListIterator *)this_01);
  __32tPMenuItemLeftRightSliderIndexedUiPicPc
            ((tPMenuItemLeftRightSliderIndexed *)((this->menuAudioSettings).fItemList + 0xb),0x1b,
             GameSetup_gData.controllerData.shockMode,'\x7f',&Device_gPausePortIndex);
  __32tPMenuItemLeftRightSliderIndexedUiPicPc
            ((tPMenuItemLeftRightSliderIndexed *)&(this->menuAudioSettings).fNumItems,0x1c,
             GameSetup_gData.controllerData.shockImpact,'\x7f',&Device_gPausePortIndex);
  __6tPMenuP10tPMenuIteme(newMenu_00,firstItem);
  firstItem = (tPMenuItem *)
              ((this->itemControllerShockImpact).tPMenuItemLeftRightSlider.tPMenuItemInteractive.
               tPMenuItem._vf + 4);
  __28tPMenuItemNonInteractiveTextUi((tPMenuItemNonInteractiveText *)firstItem,4);
  __28tPMenuItemNonInteractiveTextUi
            ((tPMenuItemNonInteractiveText *)&(this->itemControllerShockImpact).fIndex,0x24);
  __23tPMenuItemCommandButtonUi17tPMenuCommandType
            ((tPMenuItemCommandButton *)(this->menuControllerConfig).fItemList,0x26,
             kMPause_BackupMenu);
  __23tPMenuItemCommandButtonUi17tPMenuCommandType
            ((tPMenuItemCommandButton *)((this->menuControllerConfig).fItemList + 4),0x25,
             kMPause_BackupMenu);
  __6tPMenuP10tPMenuIteme((tPMenu *)((this->menuControllerConfig).fItemList + 8),firstItem);
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._14tPauseMenuDefs(struct tPauseMenuDefs *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 268, offset 0x8009e234
	/* begin block 1 */
		// Start line: 269
		// Start offset: 0x8009E234
	/* end block 1 */
	// End offset: 0x8009E234
	// End Line: 269

	/* begin block 2 */
		// Start line: 532
	/* end block 2 */
	// End Line: 533

	/* begin block 3 */
		// Start line: 536
	/* end block 3 */
	// End Line: 537

	/* begin block 4 */
		// Start line: 536
	/* end block 4 */
	// End Line: 537

/* WARNING: Type propagation algorithm not settling */

void ___14tPauseMenuDefs(tPauseMenuDefs *this,int __in_chrg)

{
  ___6tPMenu((tPMenu *)((this->menuControllerConfig).fItemList + 8),2);
  ___23tPMenuItemCommandButton
            ((tPMenuItemCommandButton *)((this->menuControllerConfig).fItemList + 4),2);
  ___23tPMenuItemCommandButton((tPMenuItemCommandButton *)(this->menuControllerConfig).fItemList,2);
  ___28tPMenuItemNonInteractiveText
            ((tPMenuItemNonInteractiveText *)&(this->itemControllerShockImpact).fIndex,2);
  ___28tPMenuItemNonInteractiveText
            ((tPMenuItemNonInteractiveText *)
             ((this->itemControllerShockImpact).tPMenuItemLeftRightSlider.tPMenuItemInteractive.
              tPMenuItem._vf + 4),2);
  ___6tPMenu((tPMenu *)((this->iteratorConfig).tPListIterator._vf + 4),2);
  ___32tPMenuItemLeftRightSliderIndexed
            ((tPMenuItemLeftRightSliderIndexed *)&(this->menuAudioSettings).fNumItems,2);
  ___32tPMenuItemLeftRightSliderIndexed
            ((tPMenuItemLeftRightSliderIndexed *)((this->menuAudioSettings).fItemList + 0xb),2);
  ___25tPMenuItemLeftRightChoice
            ((tPMenuItemLeftRightChoice *)((this->menuAudioSettings).fItemList + 7),2);
  ___28tPMenuItemNonInteractiveText
            ((tPMenuItemNonInteractiveText *)((this->menuAudioSettings).fItemList + 4),2);
  ___21tPListIteratorIndexed((tPListIteratorIndexed *)(this->menuAudioSettings).fItemList,2);
  ___6tPMenu((tPMenu *)&(this->itemAudioSettingsFXVolume).fMaxVal,2);
  ___25tPMenuItemLeftRightSlider(&this->itemAudioSettingsFXVolume,2);
  ___25tPMenuItemLeftRightSlider
            ((tPMenuItemLeftRightSlider *)
             &(this->itemAudioSettingsMusicVolume).tPMenuItemInteractive.tPMenuItem.fTextDescription
             ,2);
  ___25tPMenuItemLeftRightSlider
            ((tPMenuItemLeftRightSlider *)
             &(this->itemAudioSettingsAudioMode).tPMenuItemInteractive.tPMenuItem.fTextDescription,2
            );
  ___25tPMenuItemLeftRightSlider((tPMenuItemLeftRightSlider *)&this->iteratorAudioMode,2);
  ___25tPMenuItemLeftRightSlider((tPMenuItemLeftRightSlider *)((this->menuOptions)._vf + 4),2);
  ___25tPMenuItemLeftRightChoice
            ((tPMenuItemLeftRightChoice *)((this->menuOptions).fItemList + 0xf),2);
  ___14tPListIterator((tPListIterator *)((this->menuOptions).fItemList + 0xc),2);
  ___28tPMenuItemNonInteractiveText
            ((tPMenuItemNonInteractiveText *)((this->menuOptions).fItemList + 9),2);
  ___6tPMenu((tPMenu *)(this->itemAudioSettings).tPMenuItemInteractive.tPMenuItem._vf,2);
  ___24tPMenuItemGoToMenuButton
            ((tPMenuItemGoToMenuButton *)&(this->itemOptionsTitle).tPMenuItem.fTextDescription,2);
  ___24tPMenuItemGoToMenuButton((tPMenuItemGoToMenuButton *)&(this->menuPause).fNextMenu,2);
  ___28tPMenuItemNonInteractiveText
            ((tPMenuItemNonInteractiveText *)((this->menuPause).fItemList + 0xd),2);
  ___6tPMenu((tPMenu *)&(this->itemQuitRace).fCommand,2);
  ___23tPMenuItemCommandButton(&this->itemQuitRace,2);
  ___23tPMenuItemCommandButton
            ((tPMenuItemCommandButton *)(this->itemOptions).tPMenuItemInteractive.tPMenuItem._vf,2);
  ___24tPMenuItemGoToMenuButton
            ((tPMenuItemGoToMenuButton *)(this->itemRestart).tPMenuItemInteractive.tPMenuItem._vf,2)
  ;
  ___23tPMenuItemCommandButton
            ((tPMenuItemCommandButton *)
             ((this->itemContinue).tPMenuItemInteractive.tPMenuItem._vf + 4),2);
  ___23tPMenuItemCommandButton
            ((tPMenuItemCommandButton *)((this->itemGamePaused).tPMenuItem._vf + 4),2);
  ___28tPMenuItemNonInteractiveText((tPMenuItemNonInteractiveText *)this,2);
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MPause_MusicLogic__Fc(char active /*$s2*/)
 // line 290, offset 0x8009e3e8
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x8009E3E8
		// Variables:
	// 		static char wasActive; // offset 0x14
	// 		static char testSFX; // offset 0x15
	// 		static char playingSFX; // offset 0x16
	// 		static int vol; // offset 0x18
	// 		static int SFXHandle; // offset 0x1c
	// 		static int lastplaytick; // offset 0x20
	// 		int sndover; // $s0
	// 		int samp; // $s1

		/* begin block 1.1 */
			// Start line: 320
			// Start offset: 0x8009E480

			/* begin block 1.1.1 */
				// Start line: 321
				// Start offset: 0x8009E488

				/* begin block 1.1.1.1 */
					// Start line: 330
					// Start offset: 0x8009E4B4

					/* begin block 1.1.1.1.1 */
						// Start line: 330
						// Start offset: 0x8009E4B4
						// Variables:
					// 		struct tPMenu *this; // $v0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 330
							// Start offset: 0x8009E4B4
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8009E4B4
						// End Line: 330
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009E4B4
					// End Line: 330

					/* begin block 1.1.1.1.2 */
						// Start line: 330
						// Start offset: 0x8009E4CC

						/* begin block 1.1.1.1.2.1 */
							// Start line: 330
							// Start offset: 0x8009E4CC
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x8009E4CC
						// End Line: 330
					/* end block 1.1.1.1.2 */
					// End offset: 0x8009E4CC
					// End Line: 330
				/* end block 1.1.1.1 */
				// End offset: 0x8009E4FC
				// End Line: 331

				/* begin block 1.1.1.2 */
					// Start line: 333
					// Start offset: 0x8009E4FC

					/* begin block 1.1.1.2.1 */
						// Start line: 333
						// Start offset: 0x8009E4FC
						// Variables:
					// 		struct tPMenu *this; // $a0

						/* begin block 1.1.1.2.1.1 */
							// Start line: 333
							// Start offset: 0x8009E4FC
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x8009E4FC
						// End Line: 333
					/* end block 1.1.1.2.1 */
					// End offset: 0x8009E4FC
					// End Line: 333
				/* end block 1.1.1.2 */
				// End offset: 0x8009E52C
				// End Line: 335

				/* begin block 1.1.1.3 */
					// Start line: 336
					// Start offset: 0x8009E52C

					/* begin block 1.1.1.3.1 */
						// Start line: 336
						// Start offset: 0x8009E52C

						/* begin block 1.1.1.3.1.1 */
							// Start line: 336
							// Start offset: 0x8009E52C
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x8009E52C
						// End Line: 336
					/* end block 1.1.1.3.1 */
					// End offset: 0x8009E52C
					// End Line: 336
				/* end block 1.1.1.3 */
				// End offset: 0x8009E554
				// End Line: 337

				/* begin block 1.1.1.4 */
					// Start line: 338
					// Start offset: 0x8009E554

					/* begin block 1.1.1.4.1 */
						// Start line: 338
						// Start offset: 0x8009E554

						/* begin block 1.1.1.4.1.1 */
							// Start line: 338
							// Start offset: 0x8009E554
						/* end block 1.1.1.4.1.1 */
						// End offset: 0x8009E554
						// End Line: 338
					/* end block 1.1.1.4.1 */
					// End offset: 0x8009E554
					// End Line: 338
				/* end block 1.1.1.4 */
				// End offset: 0x8009E578
				// End Line: 339

				/* begin block 1.1.1.5 */
					// Start line: 340
					// Start offset: 0x8009E578

					/* begin block 1.1.1.5.1 */
						// Start line: 340
						// Start offset: 0x8009E578

						/* begin block 1.1.1.5.1.1 */
							// Start line: 340
							// Start offset: 0x8009E578
						/* end block 1.1.1.5.1.1 */
						// End offset: 0x8009E578
						// End Line: 340
					/* end block 1.1.1.5.1 */
					// End offset: 0x8009E578
					// End Line: 340
				/* end block 1.1.1.5 */
				// End offset: 0x8009E59C
				// End Line: 341

				/* begin block 1.1.1.6 */
					// Start line: 343
					// Start offset: 0x8009E59C

					/* begin block 1.1.1.6.1 */
						// Start line: 344
						// Start offset: 0x8009E5AC

						/* begin block 1.1.1.6.1.1 */
							// Start line: 349
							// Start offset: 0x8009E5D8

							/* begin block 1.1.1.6.1.1.1 */
								// Start line: 349
								// Start offset: 0x8009E5E0

								/* begin block 1.1.1.6.1.1.1.1 */
									// Start line: 349
									// Start offset: 0x8009E5E0
								/* end block 1.1.1.6.1.1.1.1 */
								// End offset: 0x8009E5E0
								// End Line: 349
							/* end block 1.1.1.6.1.1.1 */
							// End offset: 0x8009E5E0
							// End Line: 349

							/* begin block 1.1.1.6.1.1.2 */
								// Start line: 350
								// Start offset: 0x8009E600

								/* begin block 1.1.1.6.1.1.2.1 */
									// Start line: 350
									// Start offset: 0x8009E600

									/* begin block 1.1.1.6.1.1.2.1.1 */
										// Start line: 350
										// Start offset: 0x8009E600
									/* end block 1.1.1.6.1.1.2.1.1 */
									// End offset: 0x8009E600
									// End Line: 350
								/* end block 1.1.1.6.1.1.2.1 */
								// End offset: 0x8009E600
								// End Line: 350
							/* end block 1.1.1.6.1.1.2 */
							// End offset: 0x8009E600
							// End Line: 350
						/* end block 1.1.1.6.1.1 */
						// End offset: 0x8009E600
						// End Line: 350
					/* end block 1.1.1.6.1 */
					// End offset: 0x8009E600
					// End Line: 350
				/* end block 1.1.1.6 */
				// End offset: 0x8009E644
				// End Line: 357
			/* end block 1.1.1 */
			// End offset: 0x8009E644
			// End Line: 357
		/* end block 1.1 */
		// End offset: 0x8009E684
		// End Line: 368
	/* end block 1 */
	// End offset: 0x8009E684
	// End Line: 372

	/* begin block 2 */
		// Start line: 558
	/* end block 2 */
	// End Line: 559

	/* begin block 3 */
		// Start line: 580
	/* end block 3 */
	// End Line: 581

	/* begin block 4 */
		// Start line: 580
	/* end block 4 */
	// End Line: 581

	/* begin block 5 */
		// Start line: 593
	/* end block 5 */
	// End Line: 594

void MPause_MusicLogic__Fc(char active)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int volume;
  uint uVar5;
  
  uVar5 = 1;
  if (GameSetup_gData.userSetting.audioMode == 1) {
    gStereoMode = 0;
    Audio_direct3davail = 0;
  }
  else {
    if (GameSetup_gData.userSetting.audioMode < 2) {
      if (GameSetup_gData.userSetting.audioMode == 0) {
        gStereoMode = 1;
        Audio_direct3davail = 0;
      }
    }
    else {
      if (GameSetup_gData.userSetting.audioMode == 2) {
        gStereoMode = 1;
        Audio_direct3davail = 1;
      }
    }
  }
  if (active == '\0') {
    if (DAT_8013d254 != '\0') {
      SNDstop(DAT_8013d25c);
      AudioMus_AutoVolume__Fii(500,0);
    }
  }
  else {
    if (DAT_8013d254 == '\0') {
      volume = AudioCmn_MusicLevel__Fi(gMasterMusicLevel);
      AudioMus_AutoVolume__Fii(500,volume);
    }
    bVar1 = false;
    if ((*(int *)gPauseCurrentMenu == 1) || (*(int *)gPauseCurrentMenu == 2)) {
      bVar1 = true;
    }
    if (bVar1) {
      volume = AudioCmn_MusicLevel__Fi(gMasterMusicLevel);
      AudioMus_Volume__Fi(volume);
    }
    bVar1 = *(int *)gPauseCurrentMenu == 3;
    if (bVar1) {
      DAT_8013d258 = gMasterSFXLevel;
    }
    volume = *(int *)gPauseCurrentMenu;
    bVar2 = volume == 4;
    if (bVar2) {
      DAT_8013d258 = gMasterFENarrationLevel;
      volume = *(int *)gPauseCurrentMenu;
    }
    DAT_8013d255 = bVar2 || bVar1;
    bVar3 = volume == 5;
    if (bVar3) {
      DAT_8013d258 = gMasterEngineLevel;
    }
    DAT_8013d255 = bVar3 || DAT_8013d255;
    bVar4 = *(int *)gPauseCurrentMenu == 6;
    if (bVar4) {
      DAT_8013d258 = gMasterAmbientLevel;
    }
    DAT_8013d255 = bVar4 || DAT_8013d255;
    if (bVar4 || (bVar3 || (bVar2 || bVar1))) {
      if (DAT_8013d256 == '\0') {
        DAT_8013d256 = '\x01';
      }
      else {
        uVar5 = SNDover(DAT_8013d25c);
      }
      if ((uVar5 != 0) && (0xc0 < (int)(ticks + -(int)DAT_8013d260))) {
        DAT_8013d260 = ticks;
        DAT_8013d25c = AudioCmn_PlaySound__Fiiiii
                                 (SndBnk_t_ARRAY_8010e8cc[0].bnkID,0x10,0,DAT_8013d258,0x40);
      }
    }
    else {
      if (DAT_8013d256 == '\x01') {
        SNDstop(DAT_8013d25c);
        DAT_8013d256 = '\0';
      }
    }
  }
  DAT_8013d254 = active;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MPause_ControllerLogic__Fv()
 // line 376, offset 0x8009e6a0
	/* begin block 1 */
		// Start line: 377
		// Start offset: 0x8009E6A0

		/* begin block 1.1 */
			// Start line: 377
			// Start offset: 0x8009E6A0

			/* begin block 1.1.1 */
				// Start line: 379
				// Start offset: 0x8009E6CC

				/* begin block 1.1.1.1 */
					// Start line: 379
					// Start offset: 0x8009E6CC

					/* begin block 1.1.1.1.1 */
						// Start line: 379
						// Start offset: 0x8009E6CC
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009E6F4
					// End Line: 379
				/* end block 1.1.1.1 */
				// End offset: 0x8009E6F4
				// End Line: 379

				/* begin block 1.1.1.2 */
					// Start line: 379
					// Start offset: 0x8009E6F4

					/* begin block 1.1.1.2.1 */
						// Start line: 379
						// Start offset: 0x8009E6F4
					/* end block 1.1.1.2.1 */
					// End offset: 0x8009E708
					// End Line: 379
				/* end block 1.1.1.2 */
				// End offset: 0x8009E708
				// End Line: 379
			/* end block 1.1.1 */
			// End offset: 0x8009E708
			// End Line: 379

			/* begin block 1.1.2 */
				// Start line: 384
				// Start offset: 0x8009E71C

				/* begin block 1.1.2.1 */
					// Start line: 384
					// Start offset: 0x8009E71C

					/* begin block 1.1.2.1.1 */
						// Start line: 384
						// Start offset: 0x8009E71C
					/* end block 1.1.2.1.1 */
					// End offset: 0x8009E748
					// End Line: 384
				/* end block 1.1.2.1 */
				// End offset: 0x8009E748
				// End Line: 384

				/* begin block 1.1.2.2 */
					// Start line: 384
					// Start offset: 0x8009E748

					/* begin block 1.1.2.2.1 */
						// Start line: 384
						// Start offset: 0x8009E748
					/* end block 1.1.2.2.1 */
					// End offset: 0x8009E774
					// End Line: 384
				/* end block 1.1.2.2 */
				// End offset: 0x8009E774
				// End Line: 384
			/* end block 1.1.2 */
			// End offset: 0x8009E774
			// End Line: 386
		/* end block 1.1 */
		// End offset: 0x8009E774
		// End Line: 386
	/* end block 1 */
	// End offset: 0x8009E774
	// End Line: 386

	/* begin block 2 */
		// Start line: 783
	/* end block 2 */
	// End Line: 784

	/* begin block 3 */
		// Start line: 788
	/* end block 3 */
	// End Line: 789

	/* begin block 4 */
		// Start line: 788
	/* end block 4 */
	// End Line: 789

	/* begin block 5 */
		// Start line: 789
	/* end block 5 */
	// End Line: 790

	/* begin block 6 */
		// Start line: 789
	/* end block 6 */
	// End Line: 790

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MPause_ControllerLogic__Fv(void)

{
  uint uVar1;
  void *pvVar2;
  tPauseMenuDefs *ptVar3;
  
  uVar1 = PadGetState();
  ptVar3 = gPauseMenuDefs;
  if (uVar1 == 2) {
    pvVar2 = IsEnabled__10tPMenuItem
                       ((tPMenuItem *)((gPauseMenuDefs->menuAudioSettings).fItemList + 0xb));
    if (pvVar2 != (void *)0x0) {
      ChangedEnabling = &DAT_00000001;
      (ptVar3->menuAudioSettings).fItemList[0xb] =
           (_func_33 *)((uint)(ptVar3->menuAudioSettings).fItemList[0xb] | 1);
    }
    ptVar3 = gPauseMenuDefs;
    pvVar2 = IsEnabled__10tPMenuItem((tPMenuItem *)&(gPauseMenuDefs->menuAudioSettings).fNumItems);
    if (pvVar2 == (void *)0x0) {
      return;
    }
    uVar1 = (ptVar3->menuAudioSettings).fNumItems | 1;
  }
  else {
    pvVar2 = IsDisabled__10tPMenuItem
                       ((tPMenuItem *)((gPauseMenuDefs->menuAudioSettings).fItemList + 0xb));
    if (pvVar2 != (void *)0x0) {
      ChangedEnabling = &DAT_00000001;
      (ptVar3->menuAudioSettings).fItemList[0xb] =
           (_func_33 *)((uint)(ptVar3->menuAudioSettings).fItemList[0xb] & 0xfffffffe);
    }
    ptVar3 = gPauseMenuDefs;
    pvVar2 = IsDisabled__10tPMenuItem((tPMenuItem *)&(gPauseMenuDefs->menuAudioSettings).fNumItems);
    if (pvVar2 == (void *)0x0) {
      return;
    }
    uVar1 = (ptVar3->menuAudioSettings).fNumItems & 0xfffffffe;
  }
  ChangedEnabling = &DAT_00000001;
  (ptVar3->menuAudioSettings).fNumItems = uVar1;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MPause_Logic__Fv()
 // line 390, offset 0x8009e784
	/* begin block 1 */
		// Start line: 391
		// Start offset: 0x8009E784
		// Variables:
	// 		struct tPMenuCommand command; // stack offset -32
	// 		enum tInputKeyType keyVal; // stack offset -24
	// 		void * debounce; // $s0

		/* begin block 1.1 */
			// Start line: 413
			// Start offset: 0x8009E834

			/* begin block 1.1.1 */
				// Start line: 419
				// Start offset: 0x8009E844

				/* begin block 1.1.1.1 */
					// Start line: 419
					// Start offset: 0x8009E844

					/* begin block 1.1.1.1.1 */
						// Start line: 420
						// Start offset: 0x8009E854

						/* begin block 1.1.1.1.1.1 */
							// Start line: 420
							// Start offset: 0x8009E854
							// Variables:
						// 		struct tPMenu *this; // $v1

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 420
								// Start offset: 0x8009E854
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8009E854
							// End Line: 420
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8009E854
						// End Line: 420

						/* begin block 1.1.1.1.1.2 */
							// Start line: 420
							// Start offset: 0x8009E854
							// Variables:
						// 		struct tPMenu *this; // $a0

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 420
								// Start offset: 0x8009E854
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x8009E854
							// End Line: 420
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x8009E854
						// End Line: 420

						/* begin block 1.1.1.1.1.3 */
							// Start line: 420
							// Start offset: 0x8009E854

							/* begin block 1.1.1.1.1.3.1 */
								// Start line: 427
								// Start offset: 0x8009E898
								// Variables:
							// 		int start; // $s0
							// 		int finish; // $v1
							/* end block 1.1.1.1.1.3.1 */
							// End offset: 0x8009E898
							// End Line: 428
						/* end block 1.1.1.1.1.3 */
						// End offset: 0x8009E898
						// End Line: 428
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009E898
					// End Line: 428
				/* end block 1.1.1.1 */
				// End offset: 0x8009E950
				// End Line: 443
			/* end block 1.1.1 */
			// End offset: 0x8009E950
			// End Line: 443
		/* end block 1.1 */
		// End offset: 0x8009E950
		// End Line: 443

		/* begin block 1.2 */
			// Start line: 445
			// Start offset: 0x8009E950

			/* begin block 1.2.1 */
				// Start line: 446
				// Start offset: 0x8009E960

				/* begin block 1.2.1.1 */
					// Start line: 448
					// Start offset: 0x8009E960

					/* begin block 1.2.1.1.1 */
						// Start line: 449
						// Start offset: 0x8009E968

						/* begin block 1.2.1.1.1.1 */
							// Start line: 449
							// Start offset: 0x8009E968
							// Variables:
						// 		struct tPMenu *this; // $v1

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 449
								// Start offset: 0x8009E968

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 449
									// Start offset: 0x8009E968
									// Variables:
								// 		struct tPMenuItem *this; // $v0

									/* begin block 1.2.1.1.1.1.1.1.1 */
										// Start line: 449
										// Start offset: 0x8009E968
									/* end block 1.2.1.1.1.1.1.1.1 */
									// End offset: 0x8009E968
									// End Line: 449
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x8009E968
								// End Line: 449
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x8009E968
							// End Line: 449
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8009E968
						// End Line: 449

						/* begin block 1.2.1.1.1.2 */
							// Start line: 449
							// Start offset: 0x8009E968

							/* begin block 1.2.1.1.1.2.1 */
								// Start line: 449
								// Start offset: 0x8009E968
							/* end block 1.2.1.1.1.2.1 */
							// End offset: 0x8009E968
							// End Line: 449
						/* end block 1.2.1.1.1.2 */
						// End offset: 0x8009E968
						// End Line: 449

						/* begin block 1.2.1.1.1.3 */
							// Start line: 449
							// Start offset: 0x8009E968

							/* begin block 1.2.1.1.1.3.1 */
								// Start line: 449
								// Start offset: 0x8009E968
							/* end block 1.2.1.1.1.3.1 */
							// End offset: 0x8009E968
							// End Line: 449
						/* end block 1.2.1.1.1.3 */
						// End offset: 0x8009E968
						// End Line: 449

						/* begin block 1.2.1.1.1.4 */
							// Start line: 449
							// Start offset: 0x8009E968
							// Variables:
						// 		struct tPMenu *this; // $v1

							/* begin block 1.2.1.1.1.4.1 */
								// Start line: 449
								// Start offset: 0x8009E968
							/* end block 1.2.1.1.1.4.1 */
							// End offset: 0x8009E968
							// End Line: 449
						/* end block 1.2.1.1.1.4 */
						// End offset: 0x8009E968
						// End Line: 449
					/* end block 1.2.1.1.1 */
					// End offset: 0x8009E9B0
					// End Line: 454
				/* end block 1.2.1.1 */
				// End offset: 0x8009E9B0
				// End Line: 454
			/* end block 1.2.1 */
			// End offset: 0x8009EA68
			// End Line: 482
		/* end block 1.2 */
		// End offset: 0x8009EA68
		// End Line: 482
	/* end block 1 */
	// End offset: 0x8009EA8C
	// End Line: 487

	/* begin block 2 */
		// Start line: 812
	/* end block 2 */
	// End Line: 813

	/* begin block 3 */
		// Start line: 817
	/* end block 3 */
	// End Line: 818

	/* begin block 4 */
		// Start line: 817
	/* end block 4 */
	// End Line: 818

	/* begin block 5 */
		// Start line: 822
	/* end block 5 */
	// End Line: 823

/* WARNING: Unknown calling convention yet parameter storage is locked */

int MPause_Logic__Fv(void)

{
  short sVar1;
  tPauseMenuDefs *ptVar2;
  void *debounce;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  undefined4 uVar6;
  uint local_20;
  tPMenu *local_1c;
  int local_18 [2];
  
  local_18[0] = 0;
  debounce = Debounce__6tPMenu((tPMenu *)gPauseCurrentMenu);
  iVar3 = Input_Interface__FUli(5,1);
  iVar4 = 2;
  if (iVar3 == 0) {
    iVar3 = Input_Interface__FUli(1,1);
    iVar4 = 0x200;
    if (iVar3 != 0) goto LAB_8009e830;
    iVar3 = Input_Interface__FUli(2,1);
    iVar4 = 0x400;
    if (iVar3 != 0) goto LAB_8009e830;
    iVar3 = Input_Interface__FUli(3,(int)debounce);
    iVar4 = 0x800;
    if (iVar3 != 0) goto LAB_8009e830;
    iVar3 = Input_Interface__FUli(4,(int)debounce);
    iVar4 = 0x1000;
    if (iVar3 != 0) goto LAB_8009e830;
    iVar3 = Input_Interface__FUli(6,1);
    iVar4 = 0x2000;
    if (iVar3 != 0) goto LAB_8009e830;
    iVar3 = Input_Interface__FUli(0x18,1);
    iVar4 = 0x10;
    if (iVar3 != 0) goto LAB_8009e830;
  }
  else {
LAB_8009e830:
    local_18[0] = iVar4;
  }
  local_20 = 0;
  if ((short)kMovingHighlight == 0) {
    if (local_18[0] != 0) {
      gMPauseUpdate = &DAT_00000001;
      uVar6 = *(undefined4 *)gPauseCurrentMenu;
      (**(code **)(*(int *)(gPauseCurrentMenu + 0x50) + 0x1c))
                (gPauseCurrentMenu + (int)*(short *)(*(int *)(gPauseCurrentMenu + 0x50) + 0x18),
                 local_18,&local_20);
      sVar1 = *(short *)gPauseCurrentMenu;
      if ((int)(short)uVar6 != (int)sVar1) {
        iVar3 = ItemEnabledNum__6tPMenui((tPMenu *)gPauseCurrentMenu,(int)(short)uVar6);
        iVar4 = iVar3 * 0xd + 0x6a;
        iVar3 = ItemEnabledNum__6tPMenui((tPMenu *)gPauseCurrentMenu,(int)sVar1);
        iVar3 = iVar3 * 0xd + 0x6a;
        kMovingHighlight._0_2_ = (short)iVar4 - (short)iVar3;
        kMovingHighlight._2_2_ = (undefined2)((iVar3 - iVar4) / 10);
      }
      goto LAB_8009e950;
    }
    if (ChangedEnabling == (void *)0x0) {
      if (gMPauseUpdateNextTime == (void *)0x0) {
        gMPauseUpdate = (void *)0x0;
      }
      else {
        gMPauseUpdate = &DAT_00000001;
        gMPauseUpdateNextTime = (void *)0x0;
      }
      goto LAB_8009e950;
    }
  }
  gMPauseUpdate = &DAT_00000001;
LAB_8009e950:
  ptVar2 = gPauseMenuDefs;
  if (local_20 != 0) {
    if ((local_20 & 0x100) != 0) {
      (gPauseMenuDefs->itemControllerShockImpact).tPMenuItemLeftRightSlider.fData =
           *(int **)(*(int *)(gPauseCurrentMenu + *(int *)gPauseCurrentMenu * 4 + 8) + 4);
      (ptVar2->menuControllerConfig).fItemList[8] = (_func_33 *)0x0;
      (ptVar2->menuControllerConfig).fItemList[7] = (_func_33 *)(local_20 & 0xff);
      local_1c = (tPMenu *)((ptVar2->menuControllerConfig).fItemList + 8);
      local_20 = 6;
    }
    if (local_20 == 6) {
      *(uchar **)(gBackList6 + (int)gBackDepth) = gPauseCurrentMenu;
      iVar3 = *(int *)local_1c->_vf;
      puVar5 = gBackDepth + 1;
      gPauseCurrentMenu = (uchar *)local_1c;
    }
    else {
      if (local_20 != 7) {
        return local_20;
      }
      puVar5 = gBackDepth + -1;
      if ((int)gBackDepth < 1) {
        return 1;
      }
      iVar3 = *(int *)gBackList6[(int)puVar5]->_vf;
      gPauseCurrentMenu = (uchar *)gBackList6[(int)puVar5];
    }
    gBackDepth = puVar5;
    (**(code **)(iVar3 + 0x14))
              ((int)&((tPMenu *)gPauseCurrentMenu)->fCurrentItem + (int)*(short *)(iVar3 + 0x10));
  }
  MPause_MusicLogic__Fc
            (gPauseCurrentMenu == (uchar *)&(gPauseMenuDefs->itemAudioSettingsFXVolume).fMaxVal);
  MPause_ControllerLogic__Fv();
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MPause_Render__Fv()
 // line 490, offset 0x8009eaa0
	/* begin block 1 */
		// Start line: 491
		// Start offset: 0x8009EAA0
		// Variables:
	// 		int numItems; // $s0
	// 		int currentItem; // $a1

		/* begin block 1.1 */
			// Start line: 510
			// Start offset: 0x8009EB10

			/* begin block 1.1.1 */
				// Start line: 511
				// Start offset: 0x8009EB20

				/* begin block 1.1.1.1 */
					// Start line: 511
					// Start offset: 0x8009EB20
					// Variables:
				// 		struct tPMenu *this; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 511
						// Start offset: 0x8009EB20
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009EB20
					// End Line: 511
				/* end block 1.1.1.1 */
				// End offset: 0x8009EB20
				// End Line: 511
			/* end block 1.1.1 */
			// End offset: 0x8009EB20
			// End Line: 511

			/* begin block 1.1.2 */
				// Start line: 512
				// Start offset: 0x8009EB2C

				/* begin block 1.1.2.1 */
					// Start line: 512
					// Start offset: 0x8009EB2C
					// Variables:
				// 		struct tPMenu *this; // $v1

					/* begin block 1.1.2.1.1 */
						// Start line: 512
						// Start offset: 0x8009EB2C
					/* end block 1.1.2.1.1 */
					// End offset: 0x8009EB38
					// End Line: 512
				/* end block 1.1.2.1 */
				// End offset: 0x8009EB38
				// End Line: 512
			/* end block 1.1.2 */
			// End offset: 0x8009EB38
			// End Line: 512
		/* end block 1.1 */
		// End offset: 0x8009EB38
		// End Line: 512

		/* begin block 1.2 */
			// Start line: 514
			// Start offset: 0x8009EB38
			// Variables:
		// 		struct tPMenu *this; // $a0

			/* begin block 1.2.1 */
				// Start line: 514
				// Start offset: 0x8009EB38
			/* end block 1.2.1 */
			// End offset: 0x8009EB38
			// End Line: 514
		/* end block 1.2 */
		// End offset: 0x8009EB38
		// End Line: 514

		/* begin block 1.3 */
			// Start line: 514
			// Start offset: 0x8009EB38

			/* begin block 1.3.1 */
				// Start line: 521
				// Start offset: 0x8009EB84
			/* end block 1.3.1 */
			// End offset: 0x8009EB84
			// End Line: 523
		/* end block 1.3 */
		// End offset: 0x8009EC10
		// End Line: 528
	/* end block 1 */
	// End offset: 0x8009EC10
	// End Line: 531

	/* begin block 2 */
		// Start line: 1026
	/* end block 2 */
	// End Line: 1027

	/* begin block 3 */
		// Start line: 1030
	/* end block 3 */
	// End Line: 1031

	/* begin block 4 */
		// Start line: 1030
	/* end block 4 */
	// End Line: 1031

	/* begin block 5 */
		// Start line: 1038
	/* end block 5 */
	// End Line: 1039

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MPause_Render__Fv(void)

{
  int iVar1;
  int y;
  
  ChangedEnabling = (void *)0x0;
  if ((short)(ushort)kMovingHighlight < 1) {
    if ((-1 < (short)(ushort)kMovingHighlight) ||
       (kMovingHighlight._0_2_ = (ushort)kMovingHighlight + kMovingHighlight._2_2_,
       (int)((uint)(ushort)kMovingHighlight << 0x10) < 1)) goto LAB_8009eb10;
  }
  else {
    kMovingHighlight._0_2_ = (ushort)kMovingHighlight + kMovingHighlight._2_2_;
    if (-1 < (int)((uint)(ushort)kMovingHighlight << 0x10)) goto LAB_8009eb10;
  }
  kMovingHighlight._0_2_ = 0;
LAB_8009eb10:
  if ((ushort)kMovingHighlight == 0) {
    *(undefined4 *)(gPauseCurrentMenu + 4) = 1;
  }
  else {
    *(undefined4 *)(gPauseCurrentMenu + 4) = 0;
  }
  (**(code **)(*(int *)(gPauseCurrentMenu + 0x50) + 0x24))
            (gPauseCurrentMenu + (int)*(short *)(*(int *)(gPauseCurrentMenu + 0x50) + 0x20));
  iVar1 = NumEnabledItems__6tPMenu((tPMenu *)gPauseCurrentMenu);
  if ((ushort)kMovingHighlight == 0) {
    y = ItemEnabledNum__6tPMenui((tPMenu *)gPauseCurrentMenu,*(int *)gPauseCurrentMenu);
    y = y * 0xd + 0x6a;
  }
  else {
    y = ItemEnabledNum__6tPMenui((tPMenu *)gPauseCurrentMenu,*(int *)gPauseCurrentMenu);
    y = y * 0xd + (int)(short)(ushort)kMovingHighlight + 0x6a;
  }
  Hud_FBuildF4__FiiiiiUlcc(1,0x50,y,0xa0,0xd,0,0,0);
  Hud_RenderPauseBox__Fiiii(0x50,100,0xa0,(iVar1 + 1) * 0xd + 0x14);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MPause_InitMPause__Fv()
 // line 540, offset 0x8009ec48
	/* begin block 1 */
		// Start line: 541
		// Start offset: 0x8009EC48
	/* end block 1 */
	// End offset: 0x8009EC48
	// End Line: 541

	/* begin block 2 */
		// Start line: 1131
	/* end block 2 */
	// End Line: 1132

	/* begin block 3 */
		// Start line: 1141
	/* end block 3 */
	// End Line: 1142

	/* begin block 4 */
		// Start line: 1141
	/* end block 4 */
	// End Line: 1142

	/* begin block 5 */
		// Start line: 1142
	/* end block 5 */
	// End Line: 1143

	/* begin block 6 */
		// Start line: 1142
	/* end block 6 */
	// End Line: 1143

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MPause_InitMPause__Fv(void)

{
  tPauseMenuDefs *this;
  
  TextSys_LoadInGame__Fi(GameSetup_gData.userSetting.language);
  this = (tPauseMenuDefs *)__builtin_new(0x358);
  gPauseMenuDefs = __14tPauseMenuDefs(this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MPause_StartPauseMenu__Fv()
 // line 548, offset 0x8009ec80
	/* begin block 1 */
		// Start line: 549
		// Start offset: 0x8009EC80

		/* begin block 1.1 */
			// Start line: 549
			// Start offset: 0x8009EC80

			/* begin block 1.1.1 */
				// Start line: 558
				// Start offset: 0x8009ECD0

				/* begin block 1.1.1.1 */
					// Start line: 558
					// Start offset: 0x8009ECD0

					/* begin block 1.1.1.1.1 */
						// Start line: 558
						// Start offset: 0x8009ECD0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009ECE4
					// End Line: 558
				/* end block 1.1.1.1 */
				// End offset: 0x8009ECE4
				// End Line: 558
			/* end block 1.1.1 */
			// End offset: 0x8009ECE4
			// End Line: 558

			/* begin block 1.1.2 */
				// Start line: 560
				// Start offset: 0x8009ECFC

				/* begin block 1.1.2.1 */
					// Start line: 560
					// Start offset: 0x8009ECFC

					/* begin block 1.1.2.1.1 */
						// Start line: 560
						// Start offset: 0x8009ECFC
					/* end block 1.1.2.1.1 */
					// End offset: 0x8009ED24
					// End Line: 560
				/* end block 1.1.2.1 */
				// End offset: 0x8009ED24
				// End Line: 560
			/* end block 1.1.2 */
			// End offset: 0x8009ED24
			// End Line: 560
		/* end block 1.1 */
		// End offset: 0x8009ED24
		// End Line: 560

		/* begin block 1.2 */
			// Start line: 562
			// Start offset: 0x8009ED24

			/* begin block 1.2.1 */
				// Start line: 563
				// Start offset: 0x8009ED38

				/* begin block 1.2.1.1 */
					// Start line: 563
					// Start offset: 0x8009ED38

					/* begin block 1.2.1.1.1 */
						// Start line: 563
						// Start offset: 0x8009ED38
					/* end block 1.2.1.1.1 */
					// End offset: 0x8009ED64
					// End Line: 563
				/* end block 1.2.1.1 */
				// End offset: 0x8009ED64
				// End Line: 563

				/* begin block 1.2.1.2 */
					// Start line: 563
					// Start offset: 0x8009ED64

					/* begin block 1.2.1.2.1 */
						// Start line: 563
						// Start offset: 0x8009ED64
					/* end block 1.2.1.2.1 */
					// End offset: 0x8009ED78
					// End Line: 563
				/* end block 1.2.1.2 */
				// End offset: 0x8009ED78
				// End Line: 563
			/* end block 1.2.1 */
			// End offset: 0x8009ED78
			// End Line: 563

			/* begin block 1.2.2 */
				// Start line: 568
				// Start offset: 0x8009ED8C

				/* begin block 1.2.2.1 */
					// Start line: 568
					// Start offset: 0x8009ED8C

					/* begin block 1.2.2.1.1 */
						// Start line: 568
						// Start offset: 0x8009ED8C
					/* end block 1.2.2.1.1 */
					// End offset: 0x8009EDB4
					// End Line: 568
				/* end block 1.2.2.1 */
				// End offset: 0x8009EDB4
				// End Line: 568

				/* begin block 1.2.2.2 */
					// Start line: 568
					// Start offset: 0x8009EDB4

					/* begin block 1.2.2.2.1 */
						// Start line: 568
						// Start offset: 0x8009EDB4
					/* end block 1.2.2.2.1 */
					// End offset: 0x8009EDE0
					// End Line: 568
				/* end block 1.2.2.2 */
				// End offset: 0x8009EDE0
				// End Line: 568
			/* end block 1.2.2 */
			// End offset: 0x8009EDE0
			// End Line: 570
		/* end block 1.2 */
		// End offset: 0x8009EDE0
		// End Line: 570

		/* begin block 1.3 */
			// Start line: 580
			// Start offset: 0x8009EDE0

			/* begin block 1.3.1 */
				// Start line: 580
				// Start offset: 0x8009EDE0

				/* begin block 1.3.1.1 */
					// Start line: 580
					// Start offset: 0x8009EDE0
				/* end block 1.3.1.1 */
				// End offset: 0x8009EE0C
				// End Line: 580
			/* end block 1.3.1 */
			// End offset: 0x8009EE0C
			// End Line: 580
		/* end block 1.3 */
		// End offset: 0x8009EE0C
		// End Line: 581

		/* begin block 1.4 */
			// Start line: 584
			// Start offset: 0x8009EE0C

			/* begin block 1.4.1 */
				// Start line: 585
				// Start offset: 0x8009EE24

				/* begin block 1.4.1.1 */
					// Start line: 585
					// Start offset: 0x8009EE24
					// Variables:
				// 		struct tPMenuItemCommandButton *this; // $a0

					/* begin block 1.4.1.1.1 */
						// Start line: 585
						// Start offset: 0x8009EE24
					/* end block 1.4.1.1.1 */
					// End offset: 0x8009EE24
					// End Line: 585
				/* end block 1.4.1.1 */
				// End offset: 0x8009EE24
				// End Line: 585

				/* begin block 1.4.1.2 */
					// Start line: 585
					// Start offset: 0x8009EE24
					// Variables:
				// 		struct tPMenuItemCommandButton *this; // $a0

					/* begin block 1.4.1.2.1 */
						// Start line: 585
						// Start offset: 0x8009EE24
					/* end block 1.4.1.2.1 */
					// End offset: 0x8009EE24
					// End Line: 585
				/* end block 1.4.1.2 */
				// End offset: 0x8009EE24
				// End Line: 585

				/* begin block 1.4.1.3 */
					// Start line: 585
					// Start offset: 0x8009EE24
					// Variables:
				// 		struct tPMenuItemCommandButton *this; // $v1

					/* begin block 1.4.1.3.1 */
						// Start line: 585
						// Start offset: 0x8009EE24
					/* end block 1.4.1.3.1 */
					// End offset: 0x8009EE24
					// End Line: 585
				/* end block 1.4.1.3 */
				// End offset: 0x8009EE24
				// End Line: 585
			/* end block 1.4.1 */
			// End offset: 0x8009EE24
			// End Line: 585

			/* begin block 1.4.2 */
				// Start line: 591
				// Start offset: 0x8009EE60

				/* begin block 1.4.2.1 */
					// Start line: 591
					// Start offset: 0x8009EE60
					// Variables:
				// 		struct tPMenuItemCommandButton *this; // $a0

					/* begin block 1.4.2.1.1 */
						// Start line: 591
						// Start offset: 0x8009EE60
					/* end block 1.4.2.1.1 */
					// End offset: 0x8009EE60
					// End Line: 591
				/* end block 1.4.2.1 */
				// End offset: 0x8009EE60
				// End Line: 591

				/* begin block 1.4.2.2 */
					// Start line: 591
					// Start offset: 0x8009EE60
					// Variables:
				// 		struct tPMenuItemCommandButton *this; // $a0

					/* begin block 1.4.2.2.1 */
						// Start line: 591
						// Start offset: 0x8009EE60
					/* end block 1.4.2.2.1 */
					// End offset: 0x8009EE60
					// End Line: 591
				/* end block 1.4.2.2 */
				// End offset: 0x8009EE60
				// End Line: 591

				/* begin block 1.4.2.3 */
					// Start line: 591
					// Start offset: 0x8009EE60
					// Variables:
				// 		struct tPMenuItemCommandButton *this; // $v1

					/* begin block 1.4.2.3.1 */
						// Start line: 591
						// Start offset: 0x8009EE60
					/* end block 1.4.2.3.1 */
					// End offset: 0x8009EEA0
					// End Line: 591
				/* end block 1.4.2.3 */
				// End offset: 0x8009EEA0
				// End Line: 591
			/* end block 1.4.2 */
			// End offset: 0x8009EEA0
			// End Line: 594
		/* end block 1.4 */
		// End offset: 0x8009EEA0
		// End Line: 594
	/* end block 1 */
	// End offset: 0x8009EEA0
	// End Line: 594

	/* begin block 2 */
		// Start line: 1156
	/* end block 2 */
	// End Line: 1157

	/* begin block 3 */
		// Start line: 1160
	/* end block 3 */
	// End Line: 1161

	/* begin block 4 */
		// Start line: 1160
	/* end block 4 */
	// End Line: 1161

	/* begin block 5 */
		// Start line: 1161
	/* end block 5 */
	// End Line: 1162

	/* begin block 6 */
		// Start line: 1161
	/* end block 6 */
	// End Line: 1162

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MPause_StartPauseMenu__Fv(void)

{
  _func_33 *p_Var1;
  void *pvVar2;
  uint uVar3;
  tPauseMenuDefs *ptVar4;
  
  gPauseCurrentMenu = (uchar *)&(gPauseMenuDefs->itemQuitRace).fCommand;
  p_Var1 = (gPauseMenuDefs->menuPause).fItemList[0xc];
  (**(code **)(p_Var1 + 0x14))((int)gPauseCurrentMenu + (int)*(short *)(p_Var1 + 0x10));
  ptVar4 = gPauseMenuDefs;
  gBackDepth = (uchar *)0x0;
  if ((GameSetup_gData.raceType == 6) || (GameSetup_gData.raceType == 2)) {
    pvVar2 = IsEnabled__10tPMenuItem
                       ((tPMenuItem *)
                        ((gPauseMenuDefs->itemContinue).tPMenuItemInteractive.tPMenuItem._vf + 4));
    if (pvVar2 != (void *)0x0) {
      uVar3 = *(uint *)((ptVar4->itemContinue).tPMenuItemInteractive.tPMenuItem._vf + 4) | 1;
      goto LAB_8009ed20;
    }
  }
  else {
    pvVar2 = IsDisabled__10tPMenuItem
                       ((tPMenuItem *)
                        ((gPauseMenuDefs->itemContinue).tPMenuItemInteractive.tPMenuItem._vf + 4));
    if (pvVar2 != (void *)0x0) {
      uVar3 = *(uint *)((ptVar4->itemContinue).tPMenuItemInteractive.tPMenuItem._vf + 4) &
              0xfffffffe;
LAB_8009ed20:
      ChangedEnabling = &DAT_00000001;
      *(uint *)((ptVar4->itemContinue).tPMenuItemInteractive.tPMenuItem._vf + 4) = uVar3;
    }
  }
  ptVar4 = gPauseMenuDefs;
  if (GameSetup_gData.raceType == 6) {
    pvVar2 = IsDisabled__10tPMenuItem((tPMenuItem *)&gPauseMenuDefs->itemQuitRace);
    if (pvVar2 != (void *)0x0) {
      ChangedEnabling = &DAT_00000001;
      (ptVar4->itemQuitRace).tPMenuItemInteractive.tPMenuItem.fFlags =
           (ptVar4->itemQuitRace).tPMenuItemInteractive.tPMenuItem.fFlags & 0xfffffffe;
    }
    ptVar4 = gPauseMenuDefs;
    pvVar2 = IsEnabled__10tPMenuItem
                       ((tPMenuItem *)
                        (gPauseMenuDefs->itemOptions).tPMenuItemInteractive.tPMenuItem._vf);
    if (pvVar2 == (void *)0x0) goto LAB_8009ede0;
    uVar3 = *(uint *)(ptVar4->itemOptions).tPMenuItemInteractive.tPMenuItem._vf | 1;
  }
  else {
    pvVar2 = IsEnabled__10tPMenuItem((tPMenuItem *)&gPauseMenuDefs->itemQuitRace);
    if (pvVar2 != (void *)0x0) {
      ChangedEnabling = &DAT_00000001;
      (ptVar4->itemQuitRace).tPMenuItemInteractive.tPMenuItem.fFlags =
           (ptVar4->itemQuitRace).tPMenuItemInteractive.tPMenuItem.fFlags | 1;
    }
    ptVar4 = gPauseMenuDefs;
    pvVar2 = IsDisabled__10tPMenuItem
                       ((tPMenuItem *)
                        (gPauseMenuDefs->itemOptions).tPMenuItemInteractive.tPMenuItem._vf);
    if (pvVar2 == (void *)0x0) goto LAB_8009ede0;
    uVar3 = *(uint *)(ptVar4->itemOptions).tPMenuItemInteractive.tPMenuItem._vf & 0xfffffffe;
  }
  ChangedEnabling = &DAT_00000001;
  *(uint *)(ptVar4->itemOptions).tPMenuItemInteractive.tPMenuItem._vf = uVar3;
LAB_8009ede0:
  ptVar4 = gPauseMenuDefs;
  pvVar2 = IsDisabled__10tPMenuItem((tPMenuItem *)((gPauseMenuDefs->menuOptions)._vf + 4));
  if (pvVar2 != (void *)0x0) {
    ChangedEnabling = &DAT_00000001;
    *(uint *)((ptVar4->menuOptions)._vf + 4) = *(uint *)((ptVar4->menuOptions)._vf + 4) & 0xfffffffe
    ;
  }
  ptVar4 = gPauseMenuDefs;
  if (Replay_ReplayMode < 2) {
    (gPauseMenuDefs->itemOptions).fOnButtonPress =
         (_func_37 *)((uint)(gPauseMenuDefs->itemOptions).fOnButtonPress | 0x100);
    (ptVar4->itemRestart).tPMenuItemInteractive.tPMenuItem.fTextDescription =
         (ptVar4->itemRestart).tPMenuItemInteractive.tPMenuItem.fTextDescription | 0x100;
    uVar3 = *(uint *)((ptVar4->itemQuitRace).tPMenuItemInteractive.tPMenuItem._vf + 4) | 0x100;
  }
  else {
    (gPauseMenuDefs->itemOptions).fOnButtonPress =
         (_func_37 *)((uint)(gPauseMenuDefs->itemOptions).fOnButtonPress & 0xfffffeff);
    (ptVar4->itemRestart).tPMenuItemInteractive.tPMenuItem.fTextDescription =
         (ptVar4->itemRestart).tPMenuItemInteractive.tPMenuItem.fTextDescription & 0xfffffeff;
    uVar3 = *(uint *)((ptVar4->itemQuitRace).tPMenuItemInteractive.tPMenuItem._vf + 4) & 0xfffffeff;
  }
  *(uint *)((ptVar4->itemQuitRace).tPMenuItemInteractive.tPMenuItem._vf + 4) = uVar3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MPause_EndPauseMenu__Fv()
 // line 598, offset 0x8009eeb0
	/* begin block 1 */
		// Start line: 599
		// Start offset: 0x8009EEB0
	/* end block 1 */
	// End offset: 0x8009EEB0
	// End Line: 599

	/* begin block 2 */
		// Start line: 1261
	/* end block 2 */
	// End Line: 1262

	/* begin block 3 */
		// Start line: 1266
	/* end block 3 */
	// End Line: 1267

	/* begin block 4 */
		// Start line: 1266
	/* end block 4 */
	// End Line: 1267

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MPause_EndPauseMenu__Fv(void)

{
  InGame_ResetPSXController__Fii
            ((uint)(byte)Device_gPausePortIndex,
             GameSetup_gData.controllerData.controllerConfig[(uint)(byte)Device_gPausePortIndex]);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MPause_KillMPause__Fv()
 // line 605, offset 0x8009eeec
	/* begin block 1 */
		// Start line: 606
		// Start offset: 0x8009EEEC
	/* end block 1 */
	// End offset: 0x8009EF14
	// End Line: 611

	/* begin block 2 */
		// Start line: 1277
	/* end block 2 */
	// End Line: 1278

	/* begin block 3 */
		// Start line: 1282
	/* end block 3 */
	// End Line: 1283

	/* begin block 4 */
		// Start line: 1282
	/* end block 4 */
	// End Line: 1283

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MPause_KillMPause__Fv(void)

{
  DrawSync(0);
  if (gPauseMenuDefs != (tPauseMenuDefs *)0x0) {
    ___14tPauseMenuDefs(gPauseMenuDefs,3);
  }
  TextSys_UnloadWords__Fv();
  return;
}





