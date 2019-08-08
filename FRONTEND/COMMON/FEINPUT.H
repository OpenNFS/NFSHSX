#ifndef FEINPUT_H
#define FEINPUT_H

extern void FEInput_VerifyControllerValues__Fi(int controller); // 0x80023898

extern int FEInput_GetNoDebounceKey__Fii(int key, int controller); // 0x800238F8

extern int FEInput_GetDebounceKey__Fii(int key, int controller); // 0x80023B74

extern enum tInputKeyType FEInput_GetKeyFromPlayer__F7tPlayerl(enum tPlayer player, long debounce); // 0x80023C88

#endif
