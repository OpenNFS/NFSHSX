#ifndef SIMQUEUE_H
#define SIMQUEUE_H

extern void SimQueue_StartUp__Fv(); // 0x800B72EC

extern void SimQueue_Reset__Fv(); // 0x800B7318

extern void SimQueue_CleanUp__Fv(); // 0x800B73B8

extern int SimQueue_Put__FiP14Input_tResults(int pIndex, struct Input_tResults *val); // 0x800B73CC

extern void SimQueue_SetCurrentInput__Fi(int time); // 0x800B74E4

extern void SimQueue_GetCurrentInput__FiP14Input_tResults(int pIndex, struct Input_tResults *out); // 0x800B75A4

extern void SimQueue_SetLag__Fv(); // 0x800B75CC

extern int SimQueue_IsBlocking__Fi(int pIndex); // 0x800B75F8

#endif
