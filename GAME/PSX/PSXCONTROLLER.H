#ifndef PSXCONTROLLER_H
#define PSXCONTROLLER_H

extern void InGame_ResetPSXController__Fii(int player, int config); // 0x800DC4CC

extern int InGame_GetPSXPadValue__Fii(int value, int player); // 0x800DC990

extern int InGame_GetDevice__Fi(int control); // 0x800DCD34

extern void InGame_SetRamp__Fv(); // 0x800DCD3C

#endif
