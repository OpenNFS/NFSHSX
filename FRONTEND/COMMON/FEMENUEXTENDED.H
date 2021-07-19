#ifndef FEMENUEXTENDED_H
#define FEMENUEXTENDED_H


extern void MenuNFS4_SetHelpPos__FR4RECT(struct RECT *r); // 0x80019FE8

extern void MenuNFS4_DrawTextBox__FiR4RECTissbT5(int helpText, struct RECT *r, int initialWidth, short drawOffset, int fSelFade, void * drawArrows, void * reflected); // 0x8001A018

extern struct tMenuItemGoToMenuNFS4Button * __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii(struct tMenuItemGoToMenuNFS4Button *this, unsigned int textDescription, struct tMenu *newMenu, TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress OnButtonPress, int firstFrame, int numFrames); // 0x8001A4AC

extern void _._27tMenuItemGoToMenuNFS4Button(struct tMenuItemGoToMenuNFS4Button *this, int __in_chrg); // 0x8001A514

extern void Draw__27tMenuItemGoToMenuNFS4Buttoniib(struct tMenuItemGoToMenuNFS4Button *this, int x, int y, void * selected); // 0x8001A53C

extern void TransitionOn__27tMenuItemGoToMenuNFS4Button(struct tMenuItemGoToMenuNFS4Button *this); // 0x8001A7B8

extern void TransitionOff__27tMenuItemGoToMenuNFS4Button(struct tMenuItemGoToMenuNFS4Button *this); // 0x8001A7C8

extern void * TransitionIsFinished__27tMenuItemGoToMenuNFS4Button(struct tMenuItemGoToMenuNFS4Button *this); // 0x8001A7D4

extern void UpdateTransition__27tMenuItemGoToMenuNFS4Buttonb(struct tMenuItemGoToMenuNFS4Button *this, void * selected); // 0x8001A7E0

extern struct tMenuItemNFS4LeftRightChoice * __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii(struct tMenuItemNFS4LeftRightChoice *this, unsigned int textDescription, struct tListIterator *dataPtr, int firstFrame, int numFrames); // 0x8001A83C

extern void _._28tMenuItemNFS4LeftRightChoice(struct tMenuItemNFS4LeftRightChoice *this, int __in_chrg); // 0x8001A8A0

extern void Draw__28tMenuItemNFS4LeftRightChoiceiib(struct tMenuItemNFS4LeftRightChoice *this, int x, int y, void * selected); // 0x8001A8C8

extern void TransitionOn__28tMenuItemNFS4LeftRightChoice(struct tMenuItemNFS4LeftRightChoice *this); // 0x8001AB5C

extern void TransitionOff__28tMenuItemNFS4LeftRightChoice(struct tMenuItemNFS4LeftRightChoice *this); // 0x8001AB6C

extern void * TransitionIsFinished__28tMenuItemNFS4LeftRightChoice(struct tMenuItemNFS4LeftRightChoice *this); // 0x8001AB78

extern void UpdateTransition__28tMenuItemNFS4LeftRightChoiceb(struct tMenuItemNFS4LeftRightChoice *this, void * selected); // 0x8001AB84

extern void Draw__31tMenuItemOptionsLeftRightChoiceiib(struct tMenuItemOptionsLeftRightChoice *this, int x, int y, void * selected); // 0x8001ABE0

extern void TransitionOn__29tMenuItemOptionsTwoItemChoice(struct tMenuItemOptionsTwoItemChoice *this); // 0x8001ADB8

extern void Draw__29tMenuItemOptionsTwoItemChoiceiib(struct tMenuItemOptionsTwoItemChoice *this, int x, int y, void * selected); // 0x8001AE14

extern struct tMenuNFS4 * __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme(struct tMenuNFS4 *this, unsigned int flags, struct tScreen *screenHandler, struct tMenu *nextMenu, struct tMenu *optionsMenu, TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress OnButtonPress, int title, struct tMenuItem *firstItem); // 0x8001B098

extern struct tMenuNFS4 * __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs(struct tMenuNFS4 *this, unsigned int flags, struct tScreen *screenHandler, struct tMenu *nextMenu, struct tMenu *optionsMenu, TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress OnButtonPress, int title); // 0x8001B100

extern void _._9tMenuNFS4(struct tMenuNFS4 *this, int __in_chrg); // 0x8001B158

extern void Initialize__9tMenuNFS4(struct tMenuNFS4 *this); // 0x8001B180

extern void ProcessInput__9tMenuNFS47tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuNFS4 *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x8001B230

extern void TransitionOff__9tMenuNFS4(struct tMenuNFS4 *this); // 0x8001B250

extern void TransitionOn__9tMenuNFS4(struct tMenuNFS4 *this); // 0x8001B2D8

extern void * TransitionIsFinished__9tMenuNFS4(struct tMenuNFS4 *this); // 0x8001B360

extern void UpdateTransition__9tMenuNFS4(struct tMenuNFS4 *this); // 0x8001B400

extern void DrawItem__9tMenuNFS4i(struct tMenuNFS4 *this, int item); // 0x8001B494

extern void Draw__9tMenuNFS4(struct tMenuNFS4 *this); // 0x8001B4F4

extern struct tMenuNFS4TwoPlayer * __18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme(struct tMenuNFS4TwoPlayer *this, unsigned int flags, struct tScreen *screenHandler, struct tMenu *nextMenu, struct tMenu *optionsMenu, TDRFuncPtr___18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress OnButtonPress, int title, struct tMenuItem *firstItem); // 0x8001B63C

extern void _._18tMenuNFS4TwoPlayer(struct tMenuNFS4TwoPlayer *this, int __in_chrg); // 0x8001B6A8

extern void DrawItem__18tMenuNFS4TwoPlayeri(struct tMenuNFS4TwoPlayer *this, int item); // 0x8001B6D0

extern struct tMenuNFS4Bottom * __15tMenuNFS4BottomUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme(struct tMenuNFS4Bottom *this, unsigned int flags, struct tScreen *screenHandler, struct tMenu *nextMenu, struct tMenu *optionsMenu, TDRFuncPtr___15tMenuNFS4BottomUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress OnButtonPress, int title, struct tMenuItem *firstItem); // 0x8001B748

extern void _._15tMenuNFS4Bottom(struct tMenuNFS4Bottom *this, int __in_chrg); // 0x8001B7B0

extern void Draw__15tMenuNFS4Bottom(struct tMenuNFS4Bottom *this); // 0x8001B7D8

extern struct tMenuBlank * __10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs(struct tMenuBlank *this, unsigned int flags, struct tScreen *screenHandler, struct tMenu *nextMenu, struct tMenu *optionsMenu, TDRFuncPtr___10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress OnButtonPress, int title); // 0x8001B898

extern void _._10tMenuBlank(struct tMenuBlank *this, int __in_chrg); // 0x8001B8FC

extern void Draw__10tMenuBlank(struct tMenuBlank *this); // 0x8001B924

extern void ProcessInput__10tMenuBlank7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuBlank *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x8001B988

extern void Initialize__10tMenuBlank(struct tMenuBlank *this); // 0x8001B9CC

extern long DebounceKeys__10tMenuBlank(struct tMenuBlank *this); // 0x8001B9D4

extern void TransitionOff__10tMenuBlank(struct tMenuBlank *this); // 0x8001B9DC

extern void TransitionOn__10tMenuBlank(struct tMenuBlank *this); // 0x8001B9F8

extern void * TransitionIsFinished__10tMenuBlank(struct tMenuBlank *this); // 0x8001BA10

extern struct tMenuOptions * __12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme(struct tMenuOptions *this, unsigned int flags, struct tScreen *screenHandler, struct tMenu *nextMenu, struct tMenu *optionsMenu, TDRFuncPtr___12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme5OnButtonPress OnButtonPress, int title, int player, struct tMenuItem *firstItem); // 0x8001BA4C

extern void _._12tMenuOptions(struct tMenuOptions *this, int __in_chrg); // 0x8001BAC4

extern void Draw__12tMenuOptions(struct tMenuOptions *this); // 0x8001BAEC

extern void TransitionOff__12tMenuOptions(struct tMenuOptions *this); // 0x8001BDC4

extern void TransitionOn__12tMenuOptions(struct tMenuOptions *this); // 0x8001BE00

extern void * TransitionIsFinished__12tMenuOptions(struct tMenuOptions *this); // 0x8001BE98

extern void ProcessInput__12tMenuOptions7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuOptions *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x8001BEBC

extern void * IsSubMenu__12tMenuOptions(struct tMenuOptions *this); // 0x8001BEF0


typedef void (*TDRFuncPtr___10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)();

typedef void (*TDRFuncPtr___12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme5OnButtonPress)();

typedef void (*TDRFuncPtr___15tMenuNFS4BottomUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress)();

typedef void (*TDRFuncPtr___18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress)();

typedef void (*TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress)();

typedef void (*TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)();

typedef void (*TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress)();

extern void Draw__27tMenuItemGoToMenuNFS4Buttonb(struct tMenuItemGoToMenuNFS4Button *this); // 0x8001BF40

extern void Draw__33tBlankMenuItemNFS4LeftRightChoiceiib(struct tBlankMenuItemNFS4LeftRightChoice *this); // 0x80032200

extern void * TransitionIsFinished__33tBlankMenuItemNFS4LeftRightChoice(struct tBlankMenuItemNFS4LeftRightChoice *this); // 0x800321F8

extern void _._33tBlankMenuItemNFS4LeftRightChoice(struct tBlankMenuItemNFS4LeftRightChoice *this, int __in_chrg); // 0x80032208

extern void _._31tMenuItemOptionsLeftRightChoice(struct tMenuItemOptionsLeftRightChoice *this, int __in_chrg); // 0x8001BF20

extern void _._29tMenuItemOptionsTwoItemChoice(struct tMenuItemOptionsTwoItemChoice *this, int __in_chrg); // 0x8001BF00

extern void UpdateTransition__10tMenuBlank(struct tMenuBlank *this); // 0x8001BEF8


// decompiled code
// original method signature: 
// void /*$ra*/ Draw__27tMenuItemGoToMenuNFS4Buttonb(struct tMenuItemGoToMenuNFS4Button *this /*$a0*/)
 // line 46, offset 0x8001bf40
	/* begin block 1 */
		// Start line: 47
		// Start offset: 0x8001BF40
	/* end block 1 */
	// End offset: 0x8001BF40
	// End Line: 47

	/* begin block 2 */
		// Start line: 2685
	/* end block 2 */
	// End Line: 2686

	/* begin block 3 */
		// Start line: 92
	/* end block 3 */
	// End Line: 93

	/* begin block 4 */
		// Start line: 2685
	/* end block 4 */
	// End Line: 2686

void Draw__27tMenuItemGoToMenuNFS4Buttonb(tMenuItemGoToMenuNFS4Button *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__33tBlankMenuItemNFS4LeftRightChoiceiib(struct tBlankMenuItemNFS4LeftRightChoice *this /*$a0*/)
 // line 80, offset 0x80032200
	/* begin block 1 */
		// Start line: 81
		// Start offset: 0x80032200
	/* end block 1 */
	// End offset: 0x80032200
	// End Line: 81

	/* begin block 2 */
		// Start line: 161
	/* end block 2 */
	// End Line: 162

	/* begin block 3 */
		// Start line: 160
	/* end block 3 */
	// End Line: 161

	/* begin block 4 */
		// Start line: 161
	/* end block 4 */
	// End Line: 162

void Draw__33tBlankMenuItemNFS4LeftRightChoiceiib(tBlankMenuItemNFS4LeftRightChoice *this)

{
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__33tBlankMenuItemNFS4LeftRightChoice(struct tBlankMenuItemNFS4LeftRightChoice *this /*$a0*/)
 // line 81, offset 0x800321f8
	/* begin block 1 */
		// Start line: 82
		// Start offset: 0x800321F8
	/* end block 1 */
	// End offset: 0x800321F8
	// End Line: 82

	/* begin block 2 */
		// Start line: 162
	/* end block 2 */
	// End Line: 163

void * TransitionIsFinished__33tBlankMenuItemNFS4LeftRightChoice
                 (tBlankMenuItemNFS4LeftRightChoice *this)

{
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._33tBlankMenuItemNFS4LeftRightChoice(struct tBlankMenuItemNFS4LeftRightChoice *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 83, offset 0x80032208
	/* begin block 1 */
		// Start line: 164
	/* end block 1 */
	// End Line: 165

	/* begin block 2 */
		// Start line: 2247
	/* end block 2 */
	// End Line: 2248

	/* begin block 3 */
		// Start line: 166
	/* end block 3 */
	// End Line: 167

void ___33tBlankMenuItemNFS4LeftRightChoice(tBlankMenuItemNFS4LeftRightChoice *this,int __in_chrg)

{
  ___28tMenuItemNFS4LeftRightChoice((tMenuItemNFS4LeftRightChoice *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._31tMenuItemOptionsLeftRightChoice(struct tMenuItemOptionsLeftRightChoice *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 99, offset 0x8001bf20
	/* begin block 1 */
		// Start line: 196
	/* end block 1 */
	// End Line: 197

	/* begin block 2 */
		// Start line: 1928
	/* end block 2 */
	// End Line: 1929

	/* begin block 3 */
		// Start line: 198
	/* end block 3 */
	// End Line: 199

void ___31tMenuItemOptionsLeftRightChoice(tMenuItemOptionsLeftRightChoice *this,int __in_chrg)

{
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._29tMenuItemOptionsTwoItemChoice(struct tMenuItemOptionsTwoItemChoice *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 110, offset 0x8001bf00
	/* begin block 1 */
		// Start line: 217
	/* end block 1 */
	// End Line: 218

	/* begin block 2 */
		// Start line: 1127
	/* end block 2 */
	// End Line: 1128

	/* begin block 3 */
		// Start line: 220
	/* end block 3 */
	// End Line: 221

void ___29tMenuItemOptionsTwoItemChoice(tMenuItemOptionsTwoItemChoice *this,int __in_chrg)

{
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__10tMenuBlank(struct tMenuBlank *this /*$a0*/)
 // line 215, offset 0x8001bef8
	/* begin block 1 */
		// Start line: 216
		// Start offset: 0x8001BEF8
	/* end block 1 */
	// End offset: 0x8001BEF8
	// End Line: 216

	/* begin block 2 */
		// Start line: 430
	/* end block 2 */
	// End Line: 431

void UpdateTransition__10tMenuBlank(tMenuBlank *this)

{
  return;
}





#endif
