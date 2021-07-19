#ifndef FONT_H
#define FONT_H


extern void Font_TextColor__Fi(int color); // 0x800CB20C

extern void Font_TextTint__Fi(int rgb); // 0x800CB244

extern void Font_SetABR__Fi(int abr); // 0x800CB264

extern void Font_Blit__FiiPviiP12charactertbli(int x, int y, void *src, int u, int v, struct charactertbl *ch); // 0x800CB2AC

extern void Font_ComputeColors__Fiiic(int colour, int forecolour, int backcolour, char in_game); // 0x800CB388

extern struct charactertbl * Font_textbsearch__FiPcUlUl(int key, char *base, unsigned long nmemb, unsigned long size); // 0x800CB6A0

extern struct charactertbl * Font_Getcharacter__Fi(int targetindex); // 0x800CB740

extern void Font_SetBlitter__FPFiiPviiP12charactertbli_v(TDRFuncPtr_Font_SetBlitter__FPFiiPviiP12charactertbli_v0blitter blitter); // 0x800CB7CC

extern void Font_ReSetBlitter__Fv(); // 0x800CB7D8

extern void Font_SwitchFont__FPc(char *f1); // 0x800CB7EC

extern void Font_DeInit__Fv(); // 0x800CB858

extern void Font_ExitFromGame__Fv(); // 0x800CB8A8

extern int Font_LoadFont__FPciic(char *f1, int x, int y, char in_game); // 0x800CB8BC

extern void Font_TextXY__FPcii(char *string, int x, int y); // 0x800CBA90

extern void Font_GetUVWH__FcPiN41(char code, int *u, int *v, int *w, int *h, int *yoff); // 0x800CBBE8


typedef void (*TDRFuncPtr_Font_SetBlitter__FPFiiPviiP12charactertbli_v0blitter)();




#endif
