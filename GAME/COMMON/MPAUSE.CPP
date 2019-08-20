#include "NFS4.H"
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

tPauseMenuDefs * __14tPauseMenuDefs(tPauseMenuDefs *this)

{
  tPMenu *newMenu;
  tPListIterator *this_00;
  tPListIteratorIndexed *this_01;
  tPMenuItem *firstItem;
  tPMenu *newMenu_00;
  
  __28tPMenuItemNonInteractiveTextUi((tPMenuItemNonInteractiveText *)this,0);
  __23tPMenuItemCommandButtonUi17tPMenuCommandType
            ((tPMenuItemCommandButton *)((this->itemGamePaused).tPMenuItem._vf + 1),1,
             kMPause_Continue);
  __23tPMenuItemCommandButtonUi17tPMenuCommandType
            ((tPMenuItemCommandButton *)((this->itemGamePaused).tPMenuItem._vf + 5),2,
             kMPause_Restart);
  newMenu_00 = (tPMenu *)((this->itemForfeitRace).tPMenuItemInteractive.tPMenuItem._vf + 6);
  __24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v
            ((tPMenuItemGoToMenuButton *)(this->itemContinue).tPMenuItemInteractive.tPMenuItem._vf,3
             ,newMenu_00,
             (TDRFuncPtr___24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v3OnButtonPress)
             0x0);
  __23tPMenuItemCommandButtonUi17tPMenuCommandType
            ((tPMenuItemCommandButton *)
             ((this->itemContinue).tPMenuItemInteractive.tPMenuItem._vf + 5),4,
             kMPause_QuitToRaceSummary);
  __23tPMenuItemCommandButtonUi17tPMenuCommandType
            ((tPMenuItemCommandButton *)
             &(this->itemRestart).tPMenuItemInteractive.tPMenuItem.fTextDescription,5,
             kMPause_ForfeitToRaceSummary);
  __6tPMenuP10tPMenuIteme
            ((tPMenu *)((this->itemRestart).tPMenuItemInteractive.tPMenuItem._vf + 3),
             (tPMenuItem *)this);
  firstItem = (tPMenuItem *)((this->itemQuitRace).tPMenuItemInteractive.tPMenuItem._vf + 3);
  __28tPMenuItemNonInteractiveTextUi((tPMenuItemNonInteractiveText *)firstItem,6);
  newMenu = (tPMenu *)&(this->itemControllerSettings).fNewMenu;
  __24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v
            ((tPMenuItemGoToMenuButton *)
             ((this->itemQuitRace).tPMenuItemInteractive.tPMenuItem._vf + 6),7,newMenu,
             (TDRFuncPtr___24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v3OnButtonPress)
             0x0);
  __24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v
            ((tPMenuItemGoToMenuButton *)
             ((this->itemForfeitRace).tPMenuItemInteractive.tPMenuItem._vf + 1),8,
             (tPMenu *)&this->itemAudioSettingsAudioMode,
             (TDRFuncPtr___24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v3OnButtonPress)
             0x0);
  __6tPMenuP10tPMenuIteme(newMenu_00,firstItem);
  firstItem = (tPMenuItem *)&(this->menuPause).fNumItems;
  __28tPMenuItemNonInteractiveTextUi((tPMenuItemNonInteractiveText *)firstItem,10);
  this_00 = (tPListIterator *)((this->menuPause)._vf + 2);
  __14tPListIteratorPsPi(this_00,&InGameSelectListAudioMode,&GameSetup_gData.userSetting.audioMode);
  __25tPMenuItemLeftRightChoiceUiP14tPListIterator
            ((tPMenuItemLeftRightChoice *)&this->itemOptionsTitle,0xb,this_00);
  __25tPMenuItemLeftRightSliderUiPic
            ((tPMenuItemLeftRightSlider *)((this->itemOptionsTitle).tPMenuItem._vf + 2),0xc,
             &gMasterMusicLevel,'\x7f');
  __25tPMenuItemLeftRightSliderUiPic
            ((tPMenuItemLeftRightSlider *)&this->itemAudioSettings,0xd,&gMasterSFXLevel,'\x7f');
  __25tPMenuItemLeftRightSliderUiPic
            ((tPMenuItemLeftRightSlider *)
             ((this->itemAudioSettings).tPMenuItemInteractive.tPMenuItem._vf + 3),0xe,
             &gMasterFENarrationLevel,'\x7f');
  __25tPMenuItemLeftRightSliderUiPic
            ((tPMenuItemLeftRightSlider *)&(this->itemAudioSettings).fOnButtonPress,0xf,
             &gMasterEngineLevel,'\x7f');
  __25tPMenuItemLeftRightSliderUiPic
            ((tPMenuItemLeftRightSlider *)
             ((this->itemControllerSettings).tPMenuItemInteractive.tPMenuItem._vf + 2),0x10,
             &gMasterAmbientLevel,'\x7f');
  __6tPMenuP10tPMenuIteme(newMenu,firstItem);
  this_01 = (tPListIteratorIndexed *)&(this->menuOptions).fNumItems;
  __21tPListIteratorIndexedPsPiPc
            (this_01,&SelectListConfig,(int *)&GameSetup_gData.controllerData,
             &Device_gPausePortIndex);
  firstItem = (tPMenuItem *)((this->menuOptions)._vf + 3);
  __28tPMenuItemNonInteractiveTextUi((tPMenuItemNonInteractiveText *)firstItem,0x14);
  __25tPMenuItemLeftRightChoiceUiP14tPListIterator
            ((tPMenuItemLeftRightChoice *)
             &(this->itemAudioSettingsTitle).tPMenuItem.fTextDescription,0x15,
             (tPListIterator *)this_01);
  __32tPMenuItemLeftRightSliderIndexedUiPicPc
            ((tPMenuItemLeftRightSliderIndexed *)((this->itemAudioSettingsTitle).tPMenuItem._vf + 3)
             ,0x1b,GameSetup_gData.controllerData.shockMode,'\x7f',&Device_gPausePortIndex);
  __32tPMenuItemLeftRightSliderIndexedUiPicPc
            ((tPMenuItemLeftRightSliderIndexed *)(this->iteratorAudioMode)._vf,0x1c,
             GameSetup_gData.controllerData.shockImpact,'\x7f',&Device_gPausePortIndex);
  __6tPMenuP10tPMenuIteme((tPMenu *)&this->itemAudioSettingsAudioMode,firstItem);
  __28tPMenuItemNonInteractiveTextUi
            ((tPMenuItemNonInteractiveText *)&this->itemAudioSettingsFXVolume,4);
  __28tPMenuItemNonInteractiveTextUi
            ((tPMenuItemNonInteractiveText *)
             ((this->itemAudioSettingsFXVolume).tPMenuItemInteractive.tPMenuItem._vf + 1),0x24);
  __23tPMenuItemCommandButtonUi17tPMenuCommandType
            ((tPMenuItemCommandButton *)
             ((this->itemAudioSettingsFXVolume).tPMenuItemInteractive.tPMenuItem._vf + 4),0x26,
             kMPause_BackupMenu);
  __23tPMenuItemCommandButtonUi17tPMenuCommandType
            ((tPMenuItemCommandButton *)&(this->itemAudioSettingsFXVolume).fMaxVal,0x25,
             kMPause_BackupMenu);
  __6tPMenuP10tPMenuIteme
            ((tPMenu *)
             ((this->itemAudioSettingsSpeechVolume).tPMenuItemInteractive.tPMenuItem._vf + 1),
             (tPMenuItem *)&this->itemAudioSettingsFXVolume);
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

void ___14tPauseMenuDefs(tPauseMenuDefs *this,int __in_chrg)

{
  ___6tPMenu((tPMenu *)
             ((this->itemAudioSettingsSpeechVolume).tPMenuItemInteractive.tPMenuItem._vf + 1),2);
  ___23tPMenuItemCommandButton
            ((tPMenuItemCommandButton *)&(this->itemAudioSettingsFXVolume).fMaxVal,2);
  ___23tPMenuItemCommandButton
            ((tPMenuItemCommandButton *)
             ((this->itemAudioSettingsFXVolume).tPMenuItemInteractive.tPMenuItem._vf + 4),2);
  ___28tPMenuItemNonInteractiveText
            ((tPMenuItemNonInteractiveText *)
             ((this->itemAudioSettingsFXVolume).tPMenuItemInteractive.tPMenuItem._vf + 1),2);
  ___28tPMenuItemNonInteractiveText
            ((tPMenuItemNonInteractiveText *)&this->itemAudioSettingsFXVolume,2);
  ___6tPMenu((tPMenu *)&this->itemAudioSettingsAudioMode,2);
  ___32tPMenuItemLeftRightSliderIndexed
            ((tPMenuItemLeftRightSliderIndexed *)(this->iteratorAudioMode)._vf,2);
  ___32tPMenuItemLeftRightSliderIndexed
            ((tPMenuItemLeftRightSliderIndexed *)((this->itemAudioSettingsTitle).tPMenuItem._vf + 3)
             ,2);
  ___25tPMenuItemLeftRightChoice
            ((tPMenuItemLeftRightChoice *)
             &(this->itemAudioSettingsTitle).tPMenuItem.fTextDescription,2);
  ___28tPMenuItemNonInteractiveText((tPMenuItemNonInteractiveText *)((this->menuOptions)._vf + 3),2)
  ;
  ___21tPListIteratorIndexed((tPListIteratorIndexed *)&(this->menuOptions).fNumItems,2);
  ___6tPMenu((tPMenu *)&(this->itemControllerSettings).fNewMenu,2);
  ___25tPMenuItemLeftRightSlider
            ((tPMenuItemLeftRightSlider *)
             ((this->itemControllerSettings).tPMenuItemInteractive.tPMenuItem._vf + 2),2);
  ___25tPMenuItemLeftRightSlider
            ((tPMenuItemLeftRightSlider *)&(this->itemAudioSettings).fOnButtonPress,2);
  ___25tPMenuItemLeftRightSlider
            ((tPMenuItemLeftRightSlider *)
             ((this->itemAudioSettings).tPMenuItemInteractive.tPMenuItem._vf + 3),2);
  ___25tPMenuItemLeftRightSlider((tPMenuItemLeftRightSlider *)&this->itemAudioSettings,2);
  ___25tPMenuItemLeftRightSlider
            ((tPMenuItemLeftRightSlider *)((this->itemOptionsTitle).tPMenuItem._vf + 2),2);
  ___25tPMenuItemLeftRightChoice((tPMenuItemLeftRightChoice *)&this->itemOptionsTitle,2);
  ___14tPListIterator((tPListIterator *)((this->menuPause)._vf + 2),2);
  ___28tPMenuItemNonInteractiveText((tPMenuItemNonInteractiveText *)&(this->menuPause).fNumItems,2);
  ___6tPMenu((tPMenu *)((this->itemForfeitRace).tPMenuItemInteractive.tPMenuItem._vf + 6),2);
  ___24tPMenuItemGoToMenuButton
            ((tPMenuItemGoToMenuButton *)
             ((this->itemForfeitRace).tPMenuItemInteractive.tPMenuItem._vf + 1),2);
  ___24tPMenuItemGoToMenuButton
            ((tPMenuItemGoToMenuButton *)
             ((this->itemQuitRace).tPMenuItemInteractive.tPMenuItem._vf + 6),2);
  ___28tPMenuItemNonInteractiveText
            ((tPMenuItemNonInteractiveText *)
             ((this->itemQuitRace).tPMenuItemInteractive.tPMenuItem._vf + 3),2);
  ___6tPMenu((tPMenu *)((this->itemRestart).tPMenuItemInteractive.tPMenuItem._vf + 3),2);
  ___23tPMenuItemCommandButton
            ((tPMenuItemCommandButton *)
             &(this->itemRestart).tPMenuItemInteractive.tPMenuItem.fTextDescription,2);
  ___23tPMenuItemCommandButton
            ((tPMenuItemCommandButton *)
             ((this->itemContinue).tPMenuItemInteractive.tPMenuItem._vf + 5),2);
  ___24tPMenuItemGoToMenuButton
            ((tPMenuItemGoToMenuButton *)(this->itemContinue).tPMenuItemInteractive.tPMenuItem._vf,2
            );
  ___23tPMenuItemCommandButton
            ((tPMenuItemCommandButton *)((this->itemGamePaused).tPMenuItem._vf + 5),2);
  ___23tPMenuItemCommandButton
            ((tPMenuItemCommandButton *)((this->itemGamePaused).tPMenuItem._vf + 1),2);
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
    if (cGp00000d08 != '\0') {
      SNDstop(uGp00000d10);
      AudioMus_AutoVolume__Fii(500,0);
    }
  }
  else {
    if (cGp00000d08 == '\0') {
      volume = AudioCmn_MusicLevel__Fi(gMasterMusicLevel);
      AudioMus_AutoVolume__Fii(500,volume);
    }
    bVar1 = false;
    if ((*piGp00001874 == 1) || (*piGp00001874 == 2)) {
      bVar1 = true;
    }
    if (bVar1) {
      volume = AudioCmn_MusicLevel__Fi(gMasterMusicLevel);
      AudioMus_Volume__Fi(volume);
    }
    bVar1 = *piGp00001874 == 3;
    if (bVar1) {
      iGp00000d0c = gMasterSFXLevel;
    }
    volume = *piGp00001874;
    bVar2 = volume == 4;
    if (bVar2) {
      iGp00000d0c = gMasterFENarrationLevel;
      volume = *piGp00001874;
    }
    bGp00000d09 = bVar2 || bVar1;
    bVar3 = volume == 5;
    if (bVar3) {
      iGp00000d0c = gMasterEngineLevel;
    }
    bGp00000d09 = bVar3 || bGp00000d09;
    bVar4 = *piGp00001874 == 6;
    if (bVar4) {
      iGp00000d0c = gMasterAmbientLevel;
    }
    bGp00000d09 = bVar4 || bGp00000d09;
    if (bVar4 || (bVar3 || (bVar2 || bVar1))) {
      if (cGp00000d0a == '\0') {
        cGp00000d0a = '\x01';
      }
      else {
        uVar5 = SNDover(uGp00000d10);
      }
      if ((uVar5 != 0) && (0xc0 < (int)(ticks + -(int)puGp00000d14))) {
        puGp00000d14 = ticks;
        uGp00000d10 = AudioCmn_PlaySound__Fiiiii(SndBnk_t_8010e8cc.bnkID,0x10,0,iGp00000d0c,0x40);
      }
    }
    else {
      if (cGp00000d0a == '\x01') {
        SNDstop(uGp00000d10);
        cGp00000d0a = '\0';
      }
    }
  }
  cGp00000d08 = active;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MPause_ControllerLogic__Fv(void)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  
  uVar2 = PadGetState();
  iVar1 = iGp00000d1c;
  if (uVar2 == 2) {
    pvVar3 = IsEnabled__10tPMenuItem((tPMenuItem *)(iGp00000d1c + 0x248));
    iVar4 = iGp00000d1c;
    if (pvVar3 != (void *)0x0) {
      ChangedEnabling = &DAT_00000001;
      *(uint *)(iVar1 + 0x248) = *(uint *)(iVar1 + 0x248) | 1;
    }
    pvVar3 = IsEnabled__10tPMenuItem((tPMenuItem *)(iGp00000d1c + 0x260));
    if (pvVar3 == (void *)0x0) {
      return;
    }
    uVar2 = *(uint *)(iVar4 + 0x260) | 1;
  }
  else {
    pvVar3 = IsDisabled__10tPMenuItem((tPMenuItem *)(iGp00000d1c + 0x248));
    iVar4 = iGp00000d1c;
    if (pvVar3 != (void *)0x0) {
      ChangedEnabling = &DAT_00000001;
      *(uint *)(iVar1 + 0x248) = *(uint *)(iVar1 + 0x248) & 0xfffffffe;
    }
    pvVar3 = IsDisabled__10tPMenuItem((tPMenuItem *)(iGp00000d1c + 0x260));
    if (pvVar3 == (void *)0x0) {
      return;
    }
    uVar2 = *(uint *)(iVar4 + 0x260) & 0xfffffffe;
  }
  ChangedEnabling = &DAT_00000001;
  *(uint *)(iVar4 + 0x260) = uVar2;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

int MPause_Logic__Fv(void)

{
  short sVar1;
  void *debounce;
  int num;
  int iVar2;
  uint uVar3;
  uint local_20;
  tPMenu *local_1c;
  int local_18 [2];
  
  local_18[0] = 0;
  debounce = Debounce__6tPMenu(ptGp00001874);
  num = Input_Interface__FUli(5,1);
  iVar2 = 2;
  if (num == 0) {
    num = Input_Interface__FUli(1,1);
    iVar2 = 0x200;
    if (num != 0) goto LAB_8009e830;
    num = Input_Interface__FUli(2,1);
    iVar2 = 0x400;
    if (num != 0) goto LAB_8009e830;
    num = Input_Interface__FUli(3,(int)debounce);
    iVar2 = 0x800;
    if (num != 0) goto LAB_8009e830;
    num = Input_Interface__FUli(4,(int)debounce);
    iVar2 = 0x1000;
    if (num != 0) goto LAB_8009e830;
    num = Input_Interface__FUli(6,1);
    iVar2 = 0x2000;
    if (num != 0) goto LAB_8009e830;
    num = Input_Interface__FUli(0x18,1);
    iVar2 = 0x10;
    if (num != 0) goto LAB_8009e830;
  }
  else {
LAB_8009e830:
    local_18[0] = iVar2;
  }
  local_20 = 0;
  if (sGp0000186c == 0) {
    if (local_18[0] != 0) {
      uGp00000d18 = 1;
      uVar3 = ptGp00001874->_vf[0].value;
      num = ptGp00001874->fCurrentItem;
      (**(code **)(uVar3 + 0x1c))
                ((int)&ptGp00001874->fCurrentItem + (int)*(short *)(uVar3 + 0x18),local_18,&local_20
                );
      sVar1 = *(short *)&ptGp00001874->fCurrentItem;
      num = (int)(short)num;
      if (num != (int)sVar1) {
        num = ItemEnabledNum__6tPMenui(ptGp00001874,num);
        iVar2 = num * 0xd + 0x6a;
        num = ItemEnabledNum__6tPMenui(ptGp00001874,(int)sVar1);
        num = num * 0xd + 0x6a;
        sGp0000186c = (short)iVar2 - (short)num;
        uGp0000186e = (undefined2)((num - iVar2) / 10);
      }
      goto LAB_8009e950;
    }
    if (ChangedEnabling == (void *)0x0) {
      if (iGp00000cf4 == 0) {
        uGp00000d18 = 0;
      }
      else {
        uGp00000d18 = 1;
        iGp00000cf4 = 0;
      }
      goto LAB_8009e950;
    }
  }
  uGp00000d18 = 1;
LAB_8009e950:
  if (local_20 != 0) {
    if ((local_20 & 0x100) != 0) {
      *(undefined4 *)(iGp00000d1c + 0x2d0) =
           *(undefined4 *)(ptGp00001874->fItemList[ptGp00001874->fCurrentItem] + 4);
      *(undefined4 *)(iGp00000d1c + 0x304) = 0;
      *(uint *)(iGp00000d1c + 0x300) = local_20 & 0xff;
      local_1c = (tPMenu *)(iGp00000d1c + 0x304);
      local_20 = 6;
    }
    if (local_20 == 6) {
      (&__gBackList_6__)[iGp00001870] = ptGp00001874;
      uVar3 = local_1c->_vf[0].value;
      num = iGp00001870 + 1;
      ptGp00001874 = local_1c;
    }
    else {
      if (local_20 != 7) {
        return local_20;
      }
      num = iGp00001870 + -1;
      if (iGp00001870 < 1) {
        return 1;
      }
      uVar3 = (&__gBackList_6__)[num]->_vf[0].value;
      ptGp00001874 = (&__gBackList_6__)[num];
    }
    iGp00001870 = num;
    (**(code **)(uVar3 + 0x14))((int)&ptGp00001874->fCurrentItem + (int)*(short *)(uVar3 + 0x10));
  }
  MPause_MusicLogic__Fc(ptGp00001874 == (tPMenu *)(iGp00000d1c + 0x1c8));
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MPause_Render__Fv(void)

{
  uint uVar1;
  int iVar2;
  int y;
  
  ChangedEnabling = (void *)0x0;
  if ((short)DAT_0000186c < 1) {
    if ((-1 < (short)DAT_0000186c) ||
       (DAT_0000186c = DAT_0000186c + DAT_0000186e, (int)((uint)DAT_0000186c << 0x10) < 1))
    goto LAB_8009eb10;
  }
  else {
    DAT_0000186c = DAT_0000186c + DAT_0000186e;
    if (-1 < (int)((uint)DAT_0000186c << 0x10)) goto LAB_8009eb10;
  }
  DAT_0000186c = 0;
LAB_8009eb10:
  if (DAT_0000186c == 0) {
    *(undefined **)&DAT_00001874->fHighlight = &DAT_00000001;
  }
  else {
    DAT_00001874->fHighlight = (void *)0x0;
  }
  uVar1 = DAT_00001874->_vf[0].value;
  (**(code **)(uVar1 + 0x24))((int)&DAT_00001874->fCurrentItem + (int)*(short *)(uVar1 + 0x20));
  iVar2 = NumEnabledItems__6tPMenu(DAT_00001874);
  if (DAT_0000186c == 0) {
    y = ItemEnabledNum__6tPMenui(DAT_00001874,DAT_00001874->fCurrentItem);
    y = y * 0xd + 0x6a;
  }
  else {
    y = ItemEnabledNum__6tPMenui(DAT_00001874,DAT_00001874->fCurrentItem);
    y = y * 0xd + (int)(short)DAT_0000186c + 0x6a;
  }
  Hud_FBuildF4__FiiiiiUlcc(1,0x50,y,0xa0,0xd,0,0,0);
  Hud_RenderPauseBox__Fiiii(0x50,100,0xa0,(iVar2 + 1) * 0xd + 0x14);
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MPause_InitMPause__Fv(void)

{
  tPauseMenuDefs *this;
  
  TextSys_LoadInGame__Fi(GameSetup_gData.userSetting.language);
  this = (tPauseMenuDefs *)__builtin_new(0x358);
  DAT_00000d1c = __14tPauseMenuDefs(this);
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MPause_StartPauseMenu__Fv(void)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  
  DAT_00001874 = DAT_00000d1c + 0x60;
  (**(code **)(*(int *)(DAT_00000d1c + 0xb0) + 0x14))
            (DAT_00001874 + (int)*(short *)(*(int *)(DAT_00000d1c + 0xb0) + 0x10));
  iVar3 = DAT_00000d1c;
  DAT_00001870 = 0;
  if ((GameSetup_gData.raceType == 6) || (GameSetup_gData.raceType == 2)) {
    pvVar1 = IsEnabled__10tPMenuItem((tPMenuItem *)(DAT_00000d1c + 0x1c));
    if (pvVar1 != (void *)0x0) {
      uVar2 = *(uint *)(iVar3 + 0x1c) | 1;
      goto LAB_8009ed20;
    }
  }
  else {
    pvVar1 = IsDisabled__10tPMenuItem((tPMenuItem *)(DAT_00000d1c + 0x1c));
    if (pvVar1 != (void *)0x0) {
      uVar2 = *(uint *)(iVar3 + 0x1c) & 0xfffffffe;
LAB_8009ed20:
      ChangedEnabling = &DAT_00000001;
      *(uint *)(iVar3 + 0x1c) = uVar2;
    }
  }
  iVar3 = DAT_00000d1c;
  if (GameSetup_gData.raceType == 6) {
    pvVar1 = IsDisabled__10tPMenuItem((tPMenuItem *)(DAT_00000d1c + 0x50));
    if (pvVar1 != (void *)0x0) {
      ChangedEnabling = &DAT_00000001;
      *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) & 0xfffffffe;
    }
    iVar3 = DAT_00000d1c;
    pvVar1 = IsEnabled__10tPMenuItem((tPMenuItem *)(DAT_00000d1c + 0x40));
    if (pvVar1 == (void *)0x0) goto LAB_8009ede0;
    uVar2 = *(uint *)(iVar3 + 0x40) | 1;
  }
  else {
    pvVar1 = IsEnabled__10tPMenuItem((tPMenuItem *)(DAT_00000d1c + 0x50));
    if (pvVar1 != (void *)0x0) {
      ChangedEnabling = &DAT_00000001;
      *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) | 1;
    }
    iVar3 = DAT_00000d1c;
    pvVar1 = IsDisabled__10tPMenuItem((tPMenuItem *)(DAT_00000d1c + 0x40));
    if (pvVar1 == (void *)0x0) goto LAB_8009ede0;
    uVar2 = *(uint *)(iVar3 + 0x40) & 0xfffffffe;
  }
  ChangedEnabling = &DAT_00000001;
  *(uint *)(iVar3 + 0x40) = uVar2;
LAB_8009ede0:
  iVar3 = DAT_00000d1c;
  pvVar1 = IsDisabled__10tPMenuItem((tPMenuItem *)(DAT_00000d1c + 0x164));
  if (pvVar1 != (void *)0x0) {
    ChangedEnabling = &DAT_00000001;
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) & 0xfffffffe;
  }
  iVar3 = DAT_00000d1c;
  if (Replay_ReplayMode < 2) {
    *(uint *)(DAT_00000d1c + 0x4c) = *(uint *)(DAT_00000d1c + 0x4c) | 0x100;
    *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x28) | 0x100;
    uVar2 = *(uint *)(iVar3 + 0x5c) | 0x100;
  }
  else {
    *(uint *)(DAT_00000d1c + 0x4c) = *(uint *)(DAT_00000d1c + 0x4c) & 0xfffffeff;
    *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x28) & 0xfffffeff;
    uVar2 = *(uint *)(iVar3 + 0x5c) & 0xfffffeff;
  }
  *(uint *)(iVar3 + 0x5c) = uVar2;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MPause_KillMPause__Fv(void)

{
  DrawSync(0);
  if (DAT_00000d1c != (tPauseMenuDefs *)0x0) {
    ___14tPauseMenuDefs(DAT_00000d1c,3);
  }
  TextSys_UnloadWords__Fv();
  return;
}




