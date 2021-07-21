#ifndef FETOOLS_H
#define FETOOLS_H


extern void s_upper__FPc(char *string); // 0x800268F0

extern void s_lower__FPc(char *string); // 0x80026950

extern void FeTools_DrawPSXButton__FUcUsii(unsigned char padType, unsigned short button, int x, int y); // 0x800269B0

extern void FeTools_init__Fv(); // 0x80026BA8

extern void FeTools_deinit__Fv(); // 0x80026C90

extern void FeTools_FormatMoney__FPcl(char *string, long amount); // 0x80026CE0


#endif
