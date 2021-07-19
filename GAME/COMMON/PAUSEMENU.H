#ifndef PAUSEMENU_H
#define PAUSEMENU_H


extern void PauseMenu_FullText__FPcsss(char *sMenuText, short x, short flags, short color); // 0x800A6E60

extern void PauseMenu_MenuTextPositioned__Fssss(short index, short selected, short disabled, short x); // 0x800A6F14

extern void PauseMenu_MenuText__FsbT1(short index, void * selected, void * disabled); // 0x800A6F8C

extern struct tPListIterator * __14tPListIteratorPsPi(struct tPListIterator *this, short *selection, int *valPtr); // 0x800A6FF0

extern void _._14tPListIterator(struct tPListIterator *this, int __in_chrg); // 0x800A700C

extern char Value__14tPListIterator7tPlayer(struct tPListIterator *this); // 0x800A7040

extern short TextValue__14tPListIterator7tPlayer(struct tPListIterator *this); // 0x800A7054

extern void Increment__14tPListIterator7tPlayer(struct tPListIterator *this); // 0x800A70A4

extern void Decrement__14tPListIterator7tPlayer(struct tPListIterator *this); // 0x800A7110

extern struct tPListIteratorIndexed * __21tPListIteratorIndexedPsPiPc(struct tPListIteratorIndexed *this, short *selection, int *valPtr, char *index); // 0x800A71B0

extern void _._21tPListIteratorIndexed(struct tPListIteratorIndexed *this, int __in_chrg); // 0x800A71F4

extern char Value__21tPListIteratorIndexed7tPlayer(struct tPListIteratorIndexed *this); // 0x800A721C

extern short TextValue__21tPListIteratorIndexed7tPlayer(struct tPListIteratorIndexed *this); // 0x800A7240

extern void Increment__21tPListIteratorIndexed7tPlayer(struct tPListIteratorIndexed *this); // 0x800A7290

extern void Decrement__21tPListIteratorIndexed7tPlayer(struct tPListIteratorIndexed *this); // 0x800A731C

extern struct tPMenuItem * __10tPMenuItemUi(struct tPMenuItem *this, unsigned int textDescription); // 0x800A73E8

extern void _._10tPMenuItem(struct tPMenuItem *this, int __in_chrg); // 0x800A7404

extern struct tPMenu * NextMenu__10tPMenuItem(struct tPMenuItem *this); // 0x800A7438

extern void * Debounce__10tPMenuItem(struct tPMenuItem *this); // 0x800A7440

extern void ProcessInput__10tPMenuItemR13tInputKeyTypeR13tPMenuCommand(struct tPMenuItem *this); // 0x800A7448

extern struct tPMenuItemNonInteractiveText * __28tPMenuItemNonInteractiveTextUi(struct tPMenuItemNonInteractiveText *this, unsigned int textDescription); // 0x800A7450

extern void _._28tPMenuItemNonInteractiveText(struct tPMenuItemNonInteractiveText *this, int __in_chrg); // 0x800A7484

extern void Draw__28tPMenuItemNonInteractiveTextb(struct tPMenuItemNonInteractiveText *this); // 0x800A74AC

extern void * IsNavigable__28tPMenuItemNonInteractiveText(struct tPMenuItemNonInteractiveText *this); // 0x800A86A0

extern struct tPMenuItemInteractive * __21tPMenuItemInteractiveUi(struct tPMenuItemInteractive *this, unsigned int textDescription); // 0x800A74D4

extern void _._21tPMenuItemInteractive(struct tPMenuItemInteractive *this, int __in_chrg); // 0x800A7508

extern void * IsNavigable__21tPMenuItemInteractive(struct tPMenuItemInteractive *this); // 0x800A8698

extern void Draw__21tPMenuItemInteractiveb(struct tPMenuItemInteractive *this, void * selected); // 0x800A7530

extern struct tPMenuItemLeftRightChoice * __25tPMenuItemLeftRightChoiceUiP14tPListIterator(struct tPMenuItemLeftRightChoice *this, unsigned int textDescription, struct tPListIterator *dataPtr); // 0x800A7558

extern void _._25tPMenuItemLeftRightChoice(struct tPMenuItemLeftRightChoice *this, int __in_chrg); // 0x800A759C

extern void ProcessInput__25tPMenuItemLeftRightChoiceR13tInputKeyTypeR13tPMenuCommand(struct tPMenuItemLeftRightChoice *this, enum tInputKeyType *keyval); // 0x800A75C4

extern void Draw__25tPMenuItemLeftRightChoiceb(struct tPMenuItemLeftRightChoice *this, void * selected); // 0x800A7650

extern struct tPMenuItemLeftRightSlider * __25tPMenuItemLeftRightSliderUiPic(struct tPMenuItemLeftRightSlider *this, unsigned int textDescription, int *dataPtr, char maxVal); // 0x800A7828

extern void _._25tPMenuItemLeftRightSlider(struct tPMenuItemLeftRightSlider *this, int __in_chrg); // 0x800A787C

extern void * Debounce__25tPMenuItemLeftRightSlider(struct tPMenuItemLeftRightSlider *this); // 0x800A78A4

extern void ProcessInput__25tPMenuItemLeftRightSliderR13tInputKeyTypeR13tPMenuCommand(struct tPMenuItemLeftRightSlider *this, enum tInputKeyType *keyval); // 0x800A78AC

extern void Draw__25tPMenuItemLeftRightSliderb(struct tPMenuItemLeftRightSlider *this, void * selected); // 0x800A79C8

extern struct tPMenuItemLeftRightSliderIndexed * __32tPMenuItemLeftRightSliderIndexedUiPicPc(struct tPMenuItemLeftRightSliderIndexed *this, unsigned int textDescription, int *dataPtr, char maxVal, char *index); // 0x800A7C6C

extern void _._32tPMenuItemLeftRightSliderIndexed(struct tPMenuItemLeftRightSliderIndexed *this, int __in_chrg); // 0x800A7CB4

extern void ProcessInput__32tPMenuItemLeftRightSliderIndexedR13tInputKeyTypeR13tPMenuCommand(struct tPMenuItemLeftRightSliderIndexed *this, enum tInputKeyType *keyval, struct tPMenuCommand *command); // 0x800A7CDC

extern void Draw__32tPMenuItemLeftRightSliderIndexedb(struct tPMenuItemLeftRightSliderIndexed *this, void * selected); // 0x800A7D28

extern struct tPMenuItemGoToMenuButton * __24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v(struct tPMenuItemGoToMenuButton *this, unsigned int textDescription, struct tPMenu *newMenu, TDRFuncPtr___24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v3OnButtonPress OnButtonPress); // 0x800A7D74

extern void _._24tPMenuItemGoToMenuButton(struct tPMenuItemGoToMenuButton *this, int __in_chrg); // 0x800A7DC8

extern struct tPMenu * NextMenu__24tPMenuItemGoToMenuButton(struct tPMenuItemGoToMenuButton *this); // 0x800A7DF0

extern void ProcessInput__24tPMenuItemGoToMenuButtonR13tInputKeyTypeR13tPMenuCommand(struct tPMenuItemGoToMenuButton *this, enum tInputKeyType *keyval, struct tPMenuCommand *command); // 0x800A7DFC

extern struct tPMenuItemCommandButton * __23tPMenuItemCommandButtonUi17tPMenuCommandType(struct tPMenuItemCommandButton *this, unsigned int textDescription, enum tPMenuCommandType command); // 0x800A7EB0

extern void _._23tPMenuItemCommandButton(struct tPMenuItemCommandButton *this, int __in_chrg); // 0x800A7EF4

extern void ProcessInput__23tPMenuItemCommandButtonR13tInputKeyTypeR13tPMenuCommand(struct tPMenuItemCommandButton *this, enum tInputKeyType *keyval, struct tPMenuCommand *command); // 0x800A7F1C

extern void tPMenuConstructor__6tPMenuP10tPMenuItemPv(struct tPMenu *this, struct tPMenuItem *firstItem, void *ap); // 0x800A7F7C

extern struct tPMenu * __6tPMenuP10tPMenuIteme(struct tPMenu *this, struct tPMenuItem *firstItem); // 0x800A7FC8

extern void _._6tPMenu(struct tPMenu *this, int __in_chrg); // 0x800A8014

extern void Initialize__6tPMenu(struct tPMenu *this); // 0x800A8048

extern void * Debounce__6tPMenu(struct tPMenu *this); // 0x800A8148

extern void CheckForDisabled__6tPMenu(struct tPMenu *this); // 0x800A8194

extern void ProcessInput__6tPMenuR13tInputKeyTypeR13tPMenuCommand(struct tPMenu *this, enum tInputKeyType *keyval, struct tPMenuCommand *command); // 0x800A829C

extern void Draw__6tPMenu(struct tPMenu *this); // 0x800A8510

extern int NumEnabledItems__6tPMenu(struct tPMenu *this); // 0x800A8600

extern int ItemEnabledNum__6tPMenui(struct tPMenu *this, int num); // 0x800A8650


typedef void (*TDRFuncPtr___24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v3OnButtonPress)();

extern void * IsDisabled__10tPMenuItem(struct tPMenuItem *this); // 0x800A86BC

extern void * IsEnabled__10tPMenuItem(struct tPMenuItem *this); // 0x800A86A8


// decompiled code
// original method signature: 
// void * /*$ra*/ IsDisabled__10tPMenuItem(struct tPMenuItem *this /*$a0*/)
 // line 115, offset 0x800a86bc
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x800A86BC
	/* end block 1 */
	// End offset: 0x800A86BC
	// End Line: 116

	/* begin block 2 */
		// Start line: 392
	/* end block 2 */
	// End Line: 393

	/* begin block 3 */
		// Start line: 230
	/* end block 3 */
	// End Line: 231

	/* begin block 4 */
		// Start line: 392
	/* end block 4 */
	// End Line: 393

void * IsDisabled__10tPMenuItem(tPMenuItem *this)

{
  return (void *)(this->fFlags & 1);
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsEnabled__10tPMenuItem(struct tPMenuItem *this /*$a0*/)
 // line 116, offset 0x800a86a8
	/* begin block 1 */
		// Start line: 117
		// Start offset: 0x800A86A8
	/* end block 1 */
	// End offset: 0x800A86A8
	// End Line: 117

	/* begin block 2 */
		// Start line: 393
	/* end block 2 */
	// End Line: 394

	/* begin block 3 */
		// Start line: 338
	/* end block 3 */
	// End Line: 339

	/* begin block 4 */
		// Start line: 232
	/* end block 4 */
	// End Line: 233

	/* begin block 5 */
		// Start line: 393
	/* end block 5 */
	// End Line: 394

void * IsEnabled__10tPMenuItem(tPMenuItem *this)

{
  return (void *)((this->fFlags ^ 1) & 1);
}





#endif
