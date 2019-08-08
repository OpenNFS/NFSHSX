#ifndef PLATFORM_H
#define PLATFORM_H

extern void Platform_InitMemory__Fv(); // 0x800DC2B8

extern char * Platform_ReserveMemory__FiPc(int size, char *string); // 0x800DC2E8

extern char * Platform_TempReserveMemory__FiPc(int size, char *string); // 0x800DC334

extern void Platform_SysStartUp__Fv(); // 0x800DC378

extern void Platform_DebuggerPollHost__Fv(); // 0x800DC450

extern void nfs2eacinit__Fv(); // 0x800DC458

extern void Platform_ResetDCTBuffer__Fv(); // 0x800DC4A0

extern char * Platform_GetDCTBuffer__FiPc(int size, char *string); // 0x800DC4B4

#endif
