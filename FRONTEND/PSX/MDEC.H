#ifndef MDEC_H
#define MDEC_H


extern int initmdec(int width, int height, int bpp, int memtype); // 0x800508C0

extern void restoremdec(int handle); // 0x80050A54

extern void mdecreset__Fv(); // 0x80050AA8

extern void mdec(int handle, char *src, int x, int y); // 0x80050AEC

extern int mdecdone(int handle); // 0x80050C04

extern void MDECCompleteHandler__Fv(); // 0x80050C20


#endif
