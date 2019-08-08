#ifndef FEFADES_H
#define FEFADES_H

extern int CalcFadeVal__Fiii(int col1, int col2, int amount); // 0x8004B7F8

extern int CalcFadeVal__Fii(int col1, int amount); // 0x8004B888

extern int CalcFadeVal__Fiiii(int col1, int col2, int amount, int fFade); // 0x8004B8AC

extern int CalcTextFadeUnselToSel__F13tMenuTextTypess(enum tMenuTextType type, short fSelFade, short fFade); // 0x8004B8E0

extern int CalcTextFadeSelToHi__F13tMenuTextTypess(enum tMenuTextType type, short fSelFade, short fFade); // 0x8004B950

extern void CalcOnOffFade__F13tMenuTextTypesssRiT4(enum tMenuTextType type, short fOnOffFade, short fSelFade, short fFade, int *OnColor, int *OffColor); // 0x8004B9D4

#endif
