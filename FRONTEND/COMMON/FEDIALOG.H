#ifndef FEDIALOG_H
#define FEDIALOG_H

extern short ShouldTimeOut__11tDialogBase(struct tDialogBase *this); // 0x800186C8

extern void InitializeClass__11tDialogBase(); // 0x80018700

extern void DrawAllDialogs__11tDialogBase(); // 0x80018720

extern void HideAllDialogs__11tDialogBase(); // 0x800187F0

extern struct tDialogBase * GetTopMostDialog__11tDialogBase(); // 0x80018830

extern void Display__11tDialogBase(struct tDialogBase *this); // 0x80018840

extern void Hide__11tDialogBase(struct tDialogBase *this); // 0x80018904

extern void Draw__11tDialogBase(struct tDialogBase *this); // 0x800189B8

extern void ProcessInput__11tDialogBase7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tDialogBase *this, enum tInputKeyType *keyval); // 0x80018AC8

extern void AddItem__11tDialogHelpss(struct tDialogHelp *this, short textID, short controllerID); // 0x80018B0C

extern void CalculateDimensions__11tDialogHelp(struct tDialogHelp *this); // 0x80018B90

extern void Draw__11tDialogHelp(struct tDialogHelp *this); // 0x8001912C

extern void CalculateDimensions__20tDialogMessageString(struct tDialogMessageString *this); // 0x80019418

extern void Draw__20tDialogMessageString(struct tDialogMessageString *this); // 0x8001962C

extern void ProcessInput__17tDialogBackUpOnly7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tDialogBackUpOnly *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval); // 0x80019790

extern short Run__18tDialogInteractive(struct tDialogInteractive *this); // 0x800197E8

extern void CalculateDimensions__12tDialogYesNo(struct tDialogYesNo *this); // 0x800199D4

extern struct tDialogYesNo * __12tDialogYesNo(struct tDialogYesNo *this); // 0x80019A8C

extern void Draw__12tDialogYesNo(struct tDialogYesNo *this); // 0x80019B44

extern void ProcessInput__12tDialogYesNo7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tDialogYesNo *this, enum tPlayer fromPlayer, enum tInputKeyType *keyVal, struct tMenuCommand *command); // 0x80019CCC

extern void ProcessInput__15tDialogYesNoMem7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tDialogYesNoMem *this, enum tPlayer fromPlayer, enum tInputKeyType *keyVal, struct tMenuCommand *command); // 0x80019D98

extern void ProcessInput__15tDialogYesNoTri7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tDialogYesNoTri *this, enum tPlayer fromPlayer, enum tInputKeyType *keyVal, struct tMenuCommand *command); // 0x80019E7C

extern void ProcessInput__21tDialogNoInputMessage7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tDialogNoInputMessage *this); // 0x80019EBC

#endif
