#ifndef FEMENU_H
#define FEMENU_H


extern struct tListIterator * __13tListIteratorPsPc(struct tListIterator *this, short *selection, char *valPtr); // 0x80023DD0

extern void _._13tListIterator(struct tListIterator *this, int __in_chrg); // 0x80023DF4

extern char Value__13tListIterator7tPlayer(struct tListIterator *this); // 0x80023E28

extern short TextValue__13tListIterator7tPlayer(struct tListIterator *this); // 0x80023E3C

extern void Increment__13tListIterator7tPlayer(struct tListIterator *this); // 0x80023E8C

extern void Decrement__13tListIterator7tPlayer(struct tListIterator *this); // 0x80023ED8

extern struct tListIteratorIndexed * __20tListIteratorIndexedPsPcT2(struct tListIteratorIndexed *this, short *selection, char *valPtr, char *index); // 0x80023F60

extern void _._20tListIteratorIndexed(struct tListIteratorIndexed *this, int __in_chrg); // 0x80023FA4

extern char Value__20tListIteratorIndexed7tPlayer(struct tListIteratorIndexed *this); // 0x80023FCC

extern short TextValue__20tListIteratorIndexed7tPlayer(struct tListIteratorIndexed *this); // 0x80023FF0

extern void Increment__20tListIteratorIndexed7tPlayer(struct tListIteratorIndexed *this); // 0x80024040

extern void Decrement__20tListIteratorIndexed7tPlayer(struct tListIteratorIndexed *this); // 0x800240A8

extern void _._26tListIteratorDoubleIndexed(struct tListIteratorDoubleIndexed *this, int __in_chrg); // 0x80024154

extern char Value__26tListIteratorDoubleIndexed7tPlayer(struct tListIteratorDoubleIndexed *this); // 0x8002417C

extern short TextValue__26tListIteratorDoubleIndexed7tPlayer(struct tListIteratorDoubleIndexed *this); // 0x800241B8

extern void Increment__26tListIteratorDoubleIndexed7tPlayer(struct tListIteratorDoubleIndexed *this); // 0x80024208

extern void Decrement__26tListIteratorDoubleIndexed7tPlayer(struct tListIteratorDoubleIndexed *this); // 0x800242A4

extern void _._24tListIteratorMultiPlayer(struct tListIteratorMultiPlayer *this, int __in_chrg); // 0x80024390

extern char Value__24tListIteratorMultiPlayer7tPlayer(struct tListIteratorMultiPlayer *this, enum tPlayer atIndex); // 0x800243B8

extern short TextValue__24tListIteratorMultiPlayer7tPlayer(struct tListIteratorMultiPlayer *this, enum tPlayer atIndex); // 0x800243E0

extern void Increment__24tListIteratorMultiPlayer7tPlayer(struct tListIteratorMultiPlayer *this, enum tPlayer atIndex); // 0x80024430

extern void Decrement__24tListIteratorMultiPlayer7tPlayer(struct tListIteratorMultiPlayer *this, enum tPlayer atIndex); // 0x80024494

extern struct tListIteratorRange * __18tListIteratorRangeccPc(struct tListIteratorRange *this, char minValue, char maxValue, char *valPtr); // 0x80024534

extern void _._18tListIteratorRange(struct tListIteratorRange *this, int __in_chrg); // 0x80024590

extern char Value__18tListIteratorRange7tPlayer(struct tListIteratorRange *this); // 0x800245B8

extern short TextValue__18tListIteratorRange7tPlayer(struct tListIteratorRange *this); // 0x800245CC

extern void Increment__18tListIteratorRange7tPlayer(struct tListIteratorRange *this); // 0x800245D4

extern void Decrement__18tListIteratorRange7tPlayer(struct tListIteratorRange *this); // 0x800245FC

extern struct tListIteratorRangeIndexed * __25tListIteratorRangeIndexedccPcT3(struct tListIteratorRangeIndexed *this, char minValue, char maxValue, char *valPtr, char *index); // 0x80024624

extern void _._25tListIteratorRangeIndexed(struct tListIteratorRangeIndexed *this, int __in_chrg); // 0x80024670

extern char Value__25tListIteratorRangeIndexed7tPlayer(struct tListIteratorRangeIndexed *this); // 0x80024698

extern void Increment__25tListIteratorRangeIndexed7tPlayer(struct tListIteratorRangeIndexed *this); // 0x800246BC

extern void Decrement__25tListIteratorRangeIndexed7tPlayer(struct tListIteratorRangeIndexed *this); // 0x800246F8

extern struct tMenuItem * __9tMenuItemUi(struct tMenuItem *this, unsigned int textDescription); // 0x80024734

extern void _._9tMenuItem(struct tMenuItem *this, int __in_chrg); // 0x80024764

extern long DebounceKeys__9tMenuItem(struct tMenuItem *this); // 0x80024798

extern void ProcessInput__9tMenuItem7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuItem *this); // 0x800247A0

extern void UpdateTransition__9tMenuItemb(struct tMenuItem *this, void * selected); // 0x800247A8

extern void * TransitionIsFinished__9tMenuItem(struct tMenuItem *this); // 0x800247C8

extern void UpdateSelFade__9tMenuItemb(struct tMenuItem *this, void * selected); // 0x800247D0

extern void Draw__9tMenuItemiib(struct tMenuItem *this, void * selected); // 0x80024828

extern void Draw__9tMenuItemiiib(struct tMenuItem *this, int x, int y, void * selected); // 0x80024864

extern struct tMenuItemInteractive * __20tMenuItemInteractiveUi(struct tMenuItemInteractive *this, unsigned int textDescription); // 0x800248A8

extern void _._20tMenuItemInteractive(struct tMenuItemInteractive *this, int __in_chrg); // 0x800248DC

extern struct tMenuItemLeftRightChoice * __24tMenuItemLeftRightChoiceUiP13tListIterator(struct tMenuItemLeftRightChoice *this, unsigned int textDescription, struct tListIterator *dataPtr); // 0x80024904

extern void _._24tMenuItemLeftRightChoice(struct tMenuItemLeftRightChoice *this, int __in_chrg); // 0x80024954

extern void ProcessInput__24tMenuItemLeftRightChoice7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuItemLeftRightChoice *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval); // 0x8002497C

extern void Draw__24tMenuItemLeftRightChoiceb(struct tMenuItemLeftRightChoice *this, void * selected); // 0x80024A2C

extern struct tMenuItemLeftRightSlider * __24tMenuItemLeftRightSliderUiP13tListIterator(struct tMenuItemLeftRightSlider *this, unsigned int textDescription, struct tListIterator *dataPtr); // 0x80024AF8

extern void _._24tMenuItemLeftRightSlider(struct tMenuItemLeftRightSlider *this, int __in_chrg); // 0x80024B54

extern long DebounceKeys__24tMenuItemLeftRightSlider(struct tMenuItemLeftRightSlider *this); // 0x80024B7C

extern void ProcessInput__24tMenuItemLeftRightSlider7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuItemLeftRightSlider *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval); // 0x80024B84

extern void DrawSlider__FsssssssssbT9ss(short value, short min, short max, short fX, int fY, int fWidth, int fHeight, int rectwidth, int rectspace, void * reverse, void * shadow, int fSelFade, int fFadeVal); // 0x80024C2C

extern void Draw__24tMenuItemLeftRightSliderb(struct tMenuItemLeftRightSlider *this, void * selected); // 0x800251E4

extern void SetDimensions__24tMenuItemLeftRightSliderssss(struct tMenuItemLeftRightSlider *this, short x, short y, short width, int height); // 0x80025310

extern struct tMenuItemGoToMenuButton * __23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v(struct tMenuItemGoToMenuButton *this, unsigned int textDescription, struct tMenu *newMenu, TDRFuncPtr___23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v3OnButtonPress OnButtonPress); // 0x80025328

extern void _._23tMenuItemGoToMenuButton(struct tMenuItemGoToMenuButton *this, int __in_chrg); // 0x8002537C

extern void ProcessInput__23tMenuItemGoToMenuButton7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuItemGoToMenuButton *this, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x800253A4

extern void tMenuConstructor__5tMenuP9tMenuItemPv(struct tMenu *this, struct tMenuItem *firstItem, void *ap); // 0x80025434

extern struct tMenu * __5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs(struct tMenu *this, unsigned int flags, struct tScreen *screenHandler, struct tMenu *nextMenu, struct tMenu *optionsMenu, TDRFuncPtr___5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress OnButtonPress, int title); // 0x8002546C

extern void _._5tMenu(struct tMenu *this, int __in_chrg); // 0x800254B0

extern void Initialize__5tMenu(struct tMenu *this); // 0x800254E4

extern void ProcessInput__5tMenu7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenu *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x80025578

extern short GetNumberEnabledItems__5tMenu(struct tMenu *this); // 0x80025894

extern void Draw__5tMenu(struct tMenu *this); // 0x800258FC

extern void UpdateTransition__5tMenu(struct tMenu *this); // 0x800259A8

extern void TransitionOff__5tMenu(struct tMenu *this); // 0x80025A3C

extern void TransitionOn__5tMenu(struct tMenu *this); // 0x80025A44

extern void * TransitionIsFinished__5tMenu(struct tMenu *this); // 0x80025A4C

extern void * IsSubMenu__5tMenu(struct tMenu *this); // 0x80025A54

extern long DebounceKeys__5tMenu(struct tMenu *this); // 0x80025A5C


typedef void (*TDRFuncPtr___23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v3OnButtonPress)();

typedef void (*TDRFuncPtr___5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)();

extern void TransitionOff__9tMenuItem(struct tMenuItem *this); // 0x80025AB0

extern void TransitionOn__9tMenuItem(struct tMenuItem *this); // 0x80025AA8


// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__9tMenuItem(struct tMenuItem *this /*$a0*/)
 // line 274, offset 0x80025ab0
	/* begin block 1 */
		// Start line: 275
		// Start offset: 0x80025AB0
	/* end block 1 */
	// End offset: 0x80025AB0
	// End Line: 275

	/* begin block 2 */
		// Start line: 717
	/* end block 2 */
	// End Line: 718

	/* begin block 3 */
		// Start line: 548
	/* end block 3 */
	// End Line: 549

	/* begin block 4 */
		// Start line: 717
	/* end block 4 */
	// End Line: 718

void TransitionOff__9tMenuItem(tMenuItem *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__9tMenuItem(struct tMenuItem *this /*$a0*/)
 // line 275, offset 0x80025aa8
	/* begin block 1 */
		// Start line: 276
		// Start offset: 0x80025AA8
	/* end block 1 */
	// End offset: 0x80025AA8
	// End Line: 276

	/* begin block 2 */
		// Start line: 718
	/* end block 2 */
	// End Line: 719

	/* begin block 3 */
		// Start line: 556
	/* end block 3 */
	// End Line: 557

	/* begin block 4 */
		// Start line: 550
	/* end block 4 */
	// End Line: 551

	/* begin block 5 */
		// Start line: 718
	/* end block 5 */
	// End Line: 719

void TransitionOn__9tMenuItem(tMenuItem *this)

{
  return;
}





#endif
