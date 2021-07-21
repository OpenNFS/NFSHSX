#ifndef AITRIGER_H
#define AITRIGER_H


extern void Init__24AITrigger_TriggerManagerPc(struct AITrigger_TriggerManager *this, char *rawTriggers); // 0x8007286C

extern int InsertTrigger__24AITrigger_TriggerManagerP9trigger_tb(struct AITrigger_TriggerManager *this, union trigger_t *trigger, void * fromFile); // 0x80072948

extern union trigger_t * GetNextTrigger__24AITrigger_TriggerManageri(struct AITrigger_TriggerManager *this, int car); // 0x80072A44

extern union trigger_t * GetPrevTrigger__24AITrigger_TriggerManageri(struct AITrigger_TriggerManager *this, int car); // 0x80072AB4

extern int CheckForTriggerAtSlice__24AITrigger_TriggerManagerii(struct AITrigger_TriggerManager *this, int car, int slice); // 0x80072B24

extern union trigger_t * GetTrigger__24AITrigger_TriggerManageriPi(struct AITrigger_TriggerManager *this, int trigger, int *used); // 0x80072CD8

extern int CheckForClosestTriggerOfType__24AITrigger_TriggerManageri11triggerTypei(struct AITrigger_TriggerManager *this, int slice, enum triggerType type, int direction); // 0x80072D40

extern void DescribeTrigger__24AITrigger_TriggerManagerP9trigger_t(struct AITrigger_TriggerManager *this, union trigger_t *trigger); // 0x80072E10

extern int AITrigger_Compare__FPCvT0(void *op1, void *op2); // 0x80072E18

extern void Sort__24AITrigger_TriggerManager(struct AITrigger_TriggerManager *this); // 0x80072E30


#endif
