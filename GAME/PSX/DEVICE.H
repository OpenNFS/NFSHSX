#ifndef DEVICE_H
#define DEVICE_H


extern int Device_VerifyType__Fi(int port); // 0x800BD3C0

extern int Device_Fail__Fi(int port); // 0x800BD468

extern void Device_Update__Fv(); // 0x800BD4D8

extern void Device_StartUp__Fv(); // 0x800BD5B8

extern void Device_SetHardCodedKeys__Fv(); // 0x800BD5E0

extern int Device_PSXPad__FUl(unsigned long param); // 0x800BD644

extern void * Device_ReadPad__FiUl(int port, unsigned long param); // 0x800BD6AC

extern int Device_PSXPadMulti__FUl(unsigned long param); // 0x800BD8DC

extern int Device_Analog__FUl(unsigned long param); // 0x800BD9B8

extern int Device_Null__FUl(unsigned long param); // 0x800BDAB8


#endif
