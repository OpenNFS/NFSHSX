#ifndef SCHEDULE_H
#define SCHEDULE_H


extern int Sched_ExecuteCheck__FiiiiPiN24i(int staggered, int module, int distance, int carId, int *time, int *elapsedTime, int *iTime, int forceNoSimOptz); // 0x800B61BC

extern struct Sched_tSchedule * Sched_CreateNewSchedule__FPci(char *scheduleName, int maxFunctions); // 0x800B62F0

extern void Sched_CleanUpSchedule__FP15Sched_tSchedule(struct Sched_tSchedule *schedule); // 0x800B6360

extern void Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi(struct Sched_tSchedule *schedule, TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function function, void *var1, int priority); // 0x800B6380

extern void Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv(struct Sched_tSchedule *schedule, TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function function, void *var1); // 0x800B6434

extern void Sched_Execute__FP15Sched_tSchedule(struct Sched_tSchedule *schedule); // 0x800B6500


typedef void (*TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function)();

typedef void (*TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function)();




#endif
