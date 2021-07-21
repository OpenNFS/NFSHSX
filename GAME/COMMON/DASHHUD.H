#ifndef DASHHUD_H
#define DASHHUD_H


extern void DashHUD_InitHUD__Fv(); // 0x8009AEBC

extern void DashHUD_KillHUD__Fv(); // 0x8009AFF0

extern void DashHUD_ResetHUD__Fv(); // 0x8009B010

extern void DashHUD_ToggleHud__Fi(int player); // 0x8009B074

extern void DashHUD_CheckWrongWay__Fi(int player); // 0x8009B098

extern void DashHUD_HUDCalc__Fi(int player); // 0x8009B108


#endif
