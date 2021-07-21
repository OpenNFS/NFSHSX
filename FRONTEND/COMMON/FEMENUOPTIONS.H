#ifndef FEMENUOPTIONS_H
#define FEMENUOPTIONS_H


extern void CalcPulsateYellow__Fv(); // 0x8001BF48

extern void DrawLeftFlare__FiiiRi(int y, int fSelFade, int fFadeVal, int *flareextra); // 0x8001BFA0

extern void SubtractiveBox__Fiiiiiiii(int x, int y, int w, int h, int col1, int col2, int col3, int col4); // 0x8001C0FC

extern void TransitionOff__27tMenuItemGoToMenuButtonFade(struct tMenuItemGoToMenuButtonFade *this); // 0x8001C25C

extern void TransitionOn__27tMenuItemGoToMenuButtonFade(struct tMenuItemGoToMenuButtonFade *this); // 0x8001C268

extern void * TransitionIsFinished__27tMenuItemGoToMenuButtonFade(struct tMenuItemGoToMenuButtonFade *this); // 0x8001C284

extern void UpdateTransition__27tMenuItemGoToMenuButtonFadeb(struct tMenuItemGoToMenuButtonFade *this, void * selected); // 0x8001C2DC

extern struct tMenuItemLeftRightFade * __22tMenuItemLeftRightFadeUiP13tListIterator(struct tMenuItemLeftRightFade *this, unsigned int textDescription, struct tListIterator *dataPtr); // 0x8001C358

extern void TransitionOff__22tMenuItemLeftRightFade(struct tMenuItemLeftRightFade *this); // 0x8001C394

extern void TransitionOn__22tMenuItemLeftRightFade(struct tMenuItemLeftRightFade *this); // 0x8001C3AC

extern void * TransitionIsFinished__22tMenuItemLeftRightFade(struct tMenuItemLeftRightFade *this); // 0x8001C3D0

extern void UpdateTransition__22tMenuItemLeftRightFadeb(struct tMenuItemLeftRightFade *this, void * selected); // 0x8001C438

extern struct tOptionsMenu * __12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme(struct tOptionsMenu *this, unsigned int flags, struct tScreen *screenHandler, struct tMenu *nextMenu, struct tMenu *optionsMenu, TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress OnButtonPress, int title, int firstframe, int numframes, struct tMenuItem *firstItem); // 0x8001C4B4

extern void _._12tOptionsMenu(struct tOptionsMenu *this, int __in_chrg); // 0x8001C544

extern long DebounceKeys__12tOptionsMenu(struct tOptionsMenu *this); // 0x8001C56C

extern void TransitionOff__12tOptionsMenu(struct tOptionsMenu *this); // 0x8001C5D8

extern void TransitionOn__12tOptionsMenu(struct tOptionsMenu *this); // 0x8001C670

extern void * TransitionIsFinished__12tOptionsMenu(struct tOptionsMenu *this); // 0x8001C70C

extern void UpdateTransition__12tOptionsMenu(struct tOptionsMenu *this); // 0x8001C854

extern void Draw__12tOptionsMenu(struct tOptionsMenu *this); // 0x8001CB04

extern void ProcessInput__12tOptionsMenu7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tOptionsMenu *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x8001CD08

extern struct tInsideBoxMenu * __14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme(struct tInsideBoxMenu *this, unsigned int flags, struct tScreen *screenHandler, struct tMenu *nextMenu, struct tMenu *optionsMenu, TDRFuncPtr___14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress OnButtonPress, int title, struct tMenuItem *firstItem); // 0x8001CD90

extern void _._14tInsideBoxMenu(struct tInsideBoxMenu *this, int __in_chrg); // 0x8001CE04

extern void ProcessInput__14tInsideBoxMenu7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tInsideBoxMenu *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x8001CE2C

extern void Draw__14tInsideBoxMenusssss(struct tInsideBoxMenu *this, short x, short y, short w, int slideOffset); // 0x8001CEFC

extern struct tMenuItemSlidingMenu * __20tMenuItemSlidingMenuUissssb(struct tMenuItemSlidingMenu *this, unsigned int textDescription, short width, short height, int diffx, int diffy, void * fillback); // 0x8001D160

extern void _._20tMenuItemSlidingMenu(struct tMenuItemSlidingMenu *this, int __in_chrg); // 0x8001D208

extern void TransitionOff__20tMenuItemSlidingMenu(struct tMenuItemSlidingMenu *this); // 0x8001D230

extern void TransitionOn__20tMenuItemSlidingMenu(struct tMenuItemSlidingMenu *this); // 0x8001D25C

extern void * TransitionIsFinished__20tMenuItemSlidingMenu(struct tMenuItemSlidingMenu *this); // 0x8001D294

extern void UpdateTransition__20tMenuItemSlidingMenub(struct tMenuItemSlidingMenu *this, void * selected); // 0x8001D31C

extern long DebounceKeys__20tMenuItemSlidingMenu(struct tMenuItemSlidingMenu *this); // 0x8001D398

extern void Draw__20tMenuItemSlidingMenub(struct tMenuItemSlidingMenu *this, void * selected); // 0x8001D3E0

extern void UpdatefOpenHeight__20tMenuItemSlidingMenub(struct tMenuItemSlidingMenu *this, void * selected); // 0x8001D41C

extern void Draw__20tMenuItemSlidingMenuiib(struct tMenuItemSlidingMenu *this, int offx, int offy, void * selected); // 0x8001D63C

extern void ProcessInput__20tMenuItemSlidingMenu7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuItemSlidingMenu *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x8001DC80

extern void SetMenu__20tMenuItemSlidingMenubP14tInsideBoxMenu(struct tMenuItemSlidingMenu *this, void * bothmenus, struct tInsideBoxMenu *menu); // 0x8001DD28

extern void UpdatefOpenHeight__25tMenuItemSlidingActivatedb(struct tMenuItemSlidingActivated *this); // 0x8001DD6C

extern void TransitionOff__25tMenuItemSlidingActivated(struct tMenuItemSlidingActivated *this); // 0x8001DDD4

extern void TransitionOn__25tMenuItemSlidingActivated(struct tMenuItemSlidingActivated *this); // 0x8001DE00

extern void * TransitionIsFinished__25tMenuItemSlidingActivated(struct tMenuItemSlidingActivated *this); // 0x8001DE40

extern void UpdateTransition__25tMenuItemSlidingActivatedb(struct tMenuItemSlidingActivated *this, void * selected); // 0x8001DEC8

extern void ProcessInput__25tMenuItemSlidingActivated7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuItemSlidingActivated *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x8001DF44

extern void MyLeftRightDraw__22tMenuItemLeftRightFadeii(struct tMenuItemLeftRightFade *this, int x, int y); // 0x8001E13C

extern void Draw__31tMenuItemDisplayLeftRightChoiceiib(struct tMenuItemDisplayLeftRightChoice *this, int offx, int offy); // 0x8001E230

extern void TransitionOn__29tMenuItemOnOffLeftRightChoice(struct tMenuItemOnOffLeftRightChoice *this); // 0x8001E320

extern void Draw__29tMenuItemOnOffLeftRightChoiceiib(struct tMenuItemOnOffLeftRightChoice *this, int offx, int offy); // 0x8001E384

extern struct tMenuItemLeftRightAudioSlider * __29tMenuItemLeftRightAudioSliderUiP13tListIteratori(struct tMenuItemLeftRightAudioSlider *this, unsigned int textDescription, struct tListIterator *dataPtr, int AudioArt); // 0x8001E4FC

extern void _._29tMenuItemLeftRightAudioSlider(struct tMenuItemLeftRightAudioSlider *this, int __in_chrg); // 0x8001E548

extern void Draw__29tMenuItemLeftRightAudioSlideriib(struct tMenuItemLeftRightAudioSlider *this, int ox, int oy); // 0x8001E570

extern int Percentage__29tMenuItemLeftRightAudioSlider(struct tMenuItemLeftRightAudioSlider *this); // 0x8001E77C

extern void TransitionOff__29tMenuItemLeftRightAudioSlider(struct tMenuItemLeftRightAudioSlider *this); // 0x8001E850

extern void TransitionOn__29tMenuItemLeftRightAudioSlider(struct tMenuItemLeftRightAudioSlider *this); // 0x8001E860

extern void * TransitionIsFinished__29tMenuItemLeftRightAudioSlider(struct tMenuItemLeftRightAudioSlider *this); // 0x8001E878

extern void UpdateTransition__29tMenuItemLeftRightAudioSliderb(struct tMenuItemLeftRightAudioSlider *this, void * selected); // 0x8001E8D4

extern struct tInsideBoxSongMenu * __18tInsideBoxSongMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme(struct tInsideBoxSongMenu *this, unsigned int flags, struct tScreen *screenHandler, struct tMenu *nextMenu, struct tMenu *optionsMenu, TDRFuncPtr___18tInsideBoxSongMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress OnButtonPress, int title, struct tMenuItem *firstItem); // 0x8001E920

extern void _._18tInsideBoxSongMenu(struct tInsideBoxSongMenu *this, int __in_chrg); // 0x8001E9B0

extern void Draw__18tInsideBoxSongMenusssss(struct tInsideBoxSongMenu *this, short x, short y, short w, int slideOffset, int maxheight); // 0x8001E9D8

extern void DrawOneSong__18tInsideBoxSongMenussssss(struct tInsideBoxSongMenu *this, short songnum, short x, short y, int w, int fOnOffFade, int fSelFade); // 0x8001EC48

extern long DebounceKeys__18tInsideBoxSongMenu(struct tInsideBoxSongMenu *this); // 0x8001EE74

extern void ProcessInput__18tInsideBoxSongMenu7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tInsideBoxSongMenu *this, enum tInputKeyType *keyval); // 0x8001EE7C

extern void Draw__34tMenuItemControllerLeftRightChoiceiib(struct tMenuItemControllerLeftRightChoice *this, int ox, int oy); // 0x8001F084

extern struct tInsideBoxLeftRightSlider * __25tInsideBoxLeftRightSliderUiP13tListIterator(struct tInsideBoxLeftRightSlider *this, unsigned int textDescription, struct tListIterator *dataPtr); // 0x8001F288

extern void _._25tInsideBoxLeftRightSlider(struct tInsideBoxLeftRightSlider *this, int __in_chrg); // 0x8001F2C8

extern void Draw__25tInsideBoxLeftRightSlideriiib(struct tInsideBoxLeftRightSlider *this, int x, int y, int w); // 0x8001F2F0

extern struct tInsideBoxTwoWaySlider * __22tInsideBoxTwoWaySliderUiP13tListIteratori(struct tInsideBoxTwoWaySlider *this, unsigned int textDescription, struct tListIterator *dataPtr, int type); // 0x8001F474

extern void _._22tInsideBoxTwoWaySlider(struct tInsideBoxTwoWaySlider *this, int __in_chrg); // 0x8001F4C8

extern void ProcessInput__22tInsideBoxTwoWaySlider7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tInsideBoxTwoWaySlider *this, enum tInputKeyType *keyval); // 0x8001F4F0

extern void Draw__22tInsideBoxTwoWaySlideriiib(struct tInsideBoxTwoWaySlider *this, int x, int y, int w); // 0x8001F5A0

extern char GetCurrentStickRange__Fi(int player); // 0x8001F860

extern char GetCurrentStickRange2__Fi(int player); // 0x8001F8BC

extern void Calibrate__22tInsideBoxTwoWaySlider(struct tInsideBoxTwoWaySlider *this); // 0x8001F918

extern struct tUserNameMenuItem * __17tUserNameMenuItemUi(struct tUserNameMenuItem *this, unsigned int textDescription); // 0x8001FC38

extern void * CheckForCheats__FPc(char *fData); // 0x8001FCAC

extern void ProcessInput__17tUserNameMenuItem7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tUserNameMenuItem *this, enum tInputKeyType *keyval); // 0x8001FD2C

extern int SpecialCharacter__Fc(char current); // 0x800200EC

extern void Draw__17tUserNameMenuItemb(struct tUserNameMenuItem *this); // 0x8002017C

extern void TransitionOff__17tUserNameMenuItem(struct tUserNameMenuItem *this); // 0x80020574

extern void TransitionOn__17tUserNameMenuItem(struct tUserNameMenuItem *this); // 0x80020580

extern void * TransitionIsFinished__17tUserNameMenuItem(struct tUserNameMenuItem *this); // 0x800207B4

extern void UpdateTransition__17tUserNameMenuItemb(struct tUserNameMenuItem *this, void * selected); // 0x80020820

extern void Draw__19tMemoryCardMenuItemb(struct tMemoryCardMenuItem *this); // 0x8002089C

extern void ProcessInput__35tInsideBoxControllerLeftRightSlider7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tInsideBoxControllerLeftRightSlider *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x80020AF4


typedef void (*TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress)();

typedef void (*TDRFuncPtr___14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress)();

typedef void (*TDRFuncPtr___18tInsideBoxSongMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress)();

extern void _._22tMenuItemLeftRightFade(struct tMenuItemLeftRightFade *this, int __in_chrg); // 0x80020CB8

extern void _._25tMenuItemSlidingActivated(struct tMenuItemSlidingActivated *this, int __in_chrg); // 0x80020C98

extern void _._31tMenuItemDisplayLeftRightChoice(struct tMenuItemDisplayLeftRightChoice *this, int __in_chrg); // 0x80020C78

extern void _._29tMenuItemOnOffLeftRightChoice(struct tMenuItemOnOffLeftRightChoice *this, int __in_chrg); // 0x80020C58

extern void _._34tMenuItemControllerLeftRightChoice(struct tMenuItemControllerLeftRightChoice *this, int __in_chrg); // 0x80020C38

extern void _._17tUserNameMenuItem(struct tUserNameMenuItem *this, int __in_chrg); // 0x80020C18

extern void _._27tMenuItemGoToMenuButtonFade(struct tMenuItemGoToMenuButtonFade *this, int __in_chrg); // 0x80020BF8

extern void _._19tMemoryCardMenuItem(struct tMemoryCardMenuItem *this, int __in_chrg); // 0x80020BD8

extern void Draw__32tBlankMenuItemGoToMenuNFS4Buttonb(struct tBlankMenuItemGoToMenuNFS4Button *this); // 0x800321D0

extern void Draw__32tBlankMenuItemGoToMenuNFS4Buttoniib(struct tBlankMenuItemGoToMenuNFS4Button *this); // 0x800321C8

extern void * TransitionIsFinished__32tBlankMenuItemGoToMenuNFS4Button(struct tBlankMenuItemGoToMenuNFS4Button *this); // 0x800321C0

extern void _._32tBlankMenuItemGoToMenuNFS4Button(struct tBlankMenuItemGoToMenuNFS4Button *this, int __in_chrg); // 0x800321D8

extern void _._35tInsideBoxControllerLeftRightSlider(struct tInsideBoxControllerLeftRightSlider *this, int __in_chrg); // 0x80020BB8


// decompiled code
// original method signature: 
// void /*$ra*/ _._22tMenuItemLeftRightFade(struct tMenuItemLeftRightFade *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 46, offset 0x80020cb8
	/* begin block 1 */
		// Start line: 133
	/* end block 1 */
	// End Line: 134

	/* begin block 2 */
		// Start line: 13179
	/* end block 2 */
	// End Line: 13180

	/* begin block 3 */
		// Start line: 92
	/* end block 3 */
	// End Line: 93

void ___22tMenuItemLeftRightFade(tMenuItemLeftRightFade *this,int __in_chrg)

{
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._25tMenuItemSlidingActivated(struct tMenuItemSlidingActivated *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 193, offset 0x80020c98
	/* begin block 1 */
		// Start line: 378
	/* end block 1 */
	// End Line: 379

	/* begin block 2 */
		// Start line: 13209
	/* end block 2 */
	// End Line: 13210

	/* begin block 3 */
		// Start line: 386
	/* end block 3 */
	// End Line: 387

void ___25tMenuItemSlidingActivated(tMenuItemSlidingActivated *this,int __in_chrg)

{
  ___20tMenuItemSlidingMenu((tMenuItemSlidingMenu *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._31tMenuItemDisplayLeftRightChoice(struct tMenuItemDisplayLeftRightChoice *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 206, offset 0x80020c78
	/* begin block 1 */
		// Start line: 207
		// Start offset: 0x80020C78
	/* end block 1 */
	// End offset: 0x80020C78
	// End Line: 207

	/* begin block 2 */
		// Start line: 410
	/* end block 2 */
	// End Line: 411

	/* begin block 3 */
		// Start line: 11312
	/* end block 3 */
	// End Line: 11313

	/* begin block 4 */
		// Start line: 412
	/* end block 4 */
	// End Line: 413

void ___31tMenuItemDisplayLeftRightChoice(tMenuItemDisplayLeftRightChoice *this,int __in_chrg)

{
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._29tMenuItemOnOffLeftRightChoice(struct tMenuItemOnOffLeftRightChoice *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 217, offset 0x80020c58
	/* begin block 1 */
		// Start line: 218
		// Start offset: 0x80020C58
	/* end block 1 */
	// End offset: 0x80020C58
	// End Line: 218

	/* begin block 2 */
		// Start line: 432
	/* end block 2 */
	// End Line: 433

	/* begin block 3 */
		// Start line: 9432
	/* end block 3 */
	// End Line: 9433

	/* begin block 4 */
		// Start line: 434
	/* end block 4 */
	// End Line: 435

void ___29tMenuItemOnOffLeftRightChoice(tMenuItemOnOffLeftRightChoice *this,int __in_chrg)

{
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._34tMenuItemControllerLeftRightChoice(struct tMenuItemControllerLeftRightChoice *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 290, offset 0x80020c38
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x80020C38
	/* end block 1 */
	// End offset: 0x80020C38
	// End Line: 291

	/* begin block 2 */
		// Start line: 578
	/* end block 2 */
	// End Line: 579

	/* begin block 3 */
		// Start line: 7625
	/* end block 3 */
	// End Line: 7626

	/* begin block 4 */
		// Start line: 580
	/* end block 4 */
	// End Line: 581

void ___34tMenuItemControllerLeftRightChoice(tMenuItemControllerLeftRightChoice *this,int __in_chrg)

{
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._17tUserNameMenuItem(struct tUserNameMenuItem *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 375, offset 0x80020c18
	/* begin block 1 */
		// Start line: 743
	/* end block 1 */
	// End Line: 744

	/* begin block 2 */
		// Start line: 5903
	/* end block 2 */
	// End Line: 5904

	/* begin block 3 */
		// Start line: 750
	/* end block 3 */
	// End Line: 751

void ___17tUserNameMenuItem(tUserNameMenuItem *this,int __in_chrg)

{
  ___9tMenuItem((tMenuItem *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._27tMenuItemGoToMenuButtonFade(struct tMenuItemGoToMenuButtonFade *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 396, offset 0x80020bf8
	/* begin block 1 */
		// Start line: 785
	/* end block 1 */
	// End Line: 786

	/* begin block 2 */
		// Start line: 4197
	/* end block 2 */
	// End Line: 4198

	/* begin block 3 */
		// Start line: 792
	/* end block 3 */
	// End Line: 793

void ___27tMenuItemGoToMenuButtonFade(tMenuItemGoToMenuButtonFade *this,int __in_chrg)

{
  ___23tMenuItemGoToMenuButton((tMenuItemGoToMenuButton *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._19tMemoryCardMenuItem(struct tMemoryCardMenuItem *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 407, offset 0x80020bd8
	/* begin block 1 */
		// Start line: 408
		// Start offset: 0x80020BD8
	/* end block 1 */
	// End offset: 0x80020BD8
	// End Line: 408

	/* begin block 2 */
		// Start line: 811
	/* end block 2 */
	// End Line: 812

	/* begin block 3 */
		// Start line: 4193
	/* end block 3 */
	// End Line: 4194

	/* begin block 4 */
		// Start line: 814
	/* end block 4 */
	// End Line: 815

void ___19tMemoryCardMenuItem(tMemoryCardMenuItem *this,int __in_chrg)

{
  ___23tMenuItemGoToMenuButton((tMenuItemGoToMenuButton *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__32tBlankMenuItemGoToMenuNFS4Buttonb(struct tBlankMenuItemGoToMenuNFS4Button *this /*$a0*/)
 // line 415, offset 0x800321d0
	/* begin block 1 */
		// Start line: 416
		// Start offset: 0x800321D0
	/* end block 1 */
	// End offset: 0x800321D0
	// End Line: 416

	/* begin block 2 */
		// Start line: 832
	/* end block 2 */
	// End Line: 833

	/* begin block 3 */
		// Start line: 830
	/* end block 3 */
	// End Line: 831

	/* begin block 4 */
		// Start line: 832
	/* end block 4 */
	// End Line: 833

void Draw__32tBlankMenuItemGoToMenuNFS4Buttonb(tBlankMenuItemGoToMenuNFS4Button *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__32tBlankMenuItemGoToMenuNFS4Buttoniib(struct tBlankMenuItemGoToMenuNFS4Button *this /*$a0*/)
 // line 416, offset 0x800321c8
	/* begin block 1 */
		// Start line: 417
		// Start offset: 0x800321C8
	/* end block 1 */
	// End offset: 0x800321C8
	// End Line: 417

	/* begin block 2 */
		// Start line: 833
	/* end block 2 */
	// End Line: 834

	/* begin block 3 */
		// Start line: 832
	/* end block 3 */
	// End Line: 833

	/* begin block 4 */
		// Start line: 833
	/* end block 4 */
	// End Line: 834

void Draw__32tBlankMenuItemGoToMenuNFS4Buttoniib(tBlankMenuItemGoToMenuNFS4Button *this)

{
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__32tBlankMenuItemGoToMenuNFS4Button(struct tBlankMenuItemGoToMenuNFS4Button *this /*$a0*/)
 // line 417, offset 0x800321c0
	/* begin block 1 */
		// Start line: 418
		// Start offset: 0x800321C0
	/* end block 1 */
	// End offset: 0x800321C0
	// End Line: 418

	/* begin block 2 */
		// Start line: 834
	/* end block 2 */
	// End Line: 835

void * TransitionIsFinished__32tBlankMenuItemGoToMenuNFS4Button
                 (tBlankMenuItemGoToMenuNFS4Button *this)

{
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._32tBlankMenuItemGoToMenuNFS4Button(struct tBlankMenuItemGoToMenuNFS4Button *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 418, offset 0x800321d8
	/* begin block 1 */
		// Start line: 835
	/* end block 1 */
	// End Line: 836

	/* begin block 2 */
		// Start line: 2583
	/* end block 2 */
	// End Line: 2584

	/* begin block 3 */
		// Start line: 836
	/* end block 3 */
	// End Line: 837

void ___32tBlankMenuItemGoToMenuNFS4Button(tBlankMenuItemGoToMenuNFS4Button *this,int __in_chrg)

{
  ___27tMenuItemGoToMenuNFS4Button((tMenuItemGoToMenuNFS4Button *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._35tInsideBoxControllerLeftRightSlider(struct tInsideBoxControllerLeftRightSlider *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 428, offset 0x80020bb8
	/* begin block 1 */
		// Start line: 853
	/* end block 1 */
	// End Line: 854

	/* begin block 2 */
		// Start line: 853
	/* end block 2 */
	// End Line: 854

	/* begin block 3 */
		// Start line: 2523
	/* end block 3 */
	// End Line: 2524

	/* begin block 4 */
		// Start line: 856
	/* end block 4 */
	// End Line: 857

void ___35tInsideBoxControllerLeftRightSlider
               (tInsideBoxControllerLeftRightSlider *this,int __in_chrg)

{
  ___25tInsideBoxLeftRightSlider((tInsideBoxLeftRightSlider *)this,__in_chrg);
  return;
}





#endif
