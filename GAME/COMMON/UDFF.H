#ifndef UDFF_H
#define UDFF_H

extern struct Udff_tInfo * Udff_Opena__FPcT0i(char *name, char *mem, int abortFlag); // 0x800BBA08

extern void Udff_Close__FP10Udff_tInfo(struct Udff_tInfo *handle); // 0x800BBAD0

extern int Udff_GetInt__FP10Udff_tInfo(struct Udff_tInfo *handle); // 0x800BBB24

extern void Udff_GetBuffer__FP10Udff_tInfoPci(struct Udff_tInfo *handle, char *mem, int size); // 0x800BBB3C

#endif
