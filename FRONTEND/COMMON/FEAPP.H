#ifndef FEAPP_H
#define FEAPP_H

extern struct tFEApplication * __14tFEApplication(struct tFEApplication *this); // 0x80012FA0

extern void _._14tFEApplication(struct tFEApplication *this, int __in_chrg); // 0x800131C4

extern void PerformMenuInitialization__14tFEApplication(struct tFEApplication *this); // 0x80013234

extern void PerformMenuDestruction__14tFEApplication(struct tFEApplication *this); // 0x8001329C

extern void DrawHelpIcons__14tFEApplication(struct tFEApplication *this); // 0x80013344

extern void Redraw__14tFEApplication(struct tFEApplication *this); // 0x8001373C

extern void UpdateMusic__14tFEApplication(struct tFEApplication *this); // 0x80013D60

extern void SetMenu__14tFEApplicationsP5tMenu(struct tFEApplication *this, short i, struct tMenu *menu); // 0x80013E20

extern void SetScreen__14tFEApplicationsP7tScreen(struct tFEApplication *this, short i, struct tScreen *screen); // 0x80013F24

extern void DisplayHelp__14tFEApplications(struct tFEApplication *this, short variant); // 0x80013F74

extern void FreeHelpShapeCluts__Fv(); // 0x80013F98

extern void RunDemoVideo__14tFEApplication(struct tFEApplication *this); // 0x80014014

extern enum tAppCommand MainLoop__14tFEApplicationP5tMenu(struct tFEApplication *this, struct tMenu *newMenu); // 0x800142A4

extern enum tAppCommand RunPostGame__14tFEApplication(struct tFEApplication *this); // 0x80015430

extern enum tAppCommand RunFrontEnd__14tFEApplication(struct tFEApplication *this); // 0x80015738

#endif
