#ifndef AIINIT_H
#define AIINIT_H


extern void AIInit_StartUp1__Fv(); // 0x80066BB0

extern void AIInit_StartUp2__Fv(); // 0x80066C24

extern void AIInit_Reset1__Fv(); // 0x80066CFC

extern void AIInit_Reset2__Fv(); // 0x80066D08

extern void AIInit_CleanUp1__Fv(); // 0x80066E0C

extern void AIInit_CleanUp2__Fv(); // 0x80066E44

extern void AI_TrafficStartUp__Fv(); // 0x80066F0C

extern void AI_TrafficCleanUp__Fv(); // 0x80066FA8

extern void AIInit_LoadConfigs__Fv(); // 0x80066FF8

extern void AIInit_LoadPhysicsConfig__FP10Udff_tInfo(struct Udff_tInfo *handle); // 0x80067054

extern void AIInit_ClearAICar__FP8Car_tObj(struct Car_tObj *carObj); // 0x80067174

extern void AIInit_RestartAICar__FP8Car_tObj(struct Car_tObj *carObj); // 0x800671EC

extern void AIInit_InitAICar__FP8Car_tObjP10Udff_tInfo(struct Car_tObj *carObj, struct Udff_tInfo *handle); // 0x80067314

extern void AIInit_DeInitAICar__FP8Car_tObj(struct Car_tObj *carObj); // 0x800674E8

extern void AIInit_InitAICar2__FP8Car_tObj(struct Car_tObj *carObj); // 0x80067568

extern void AIInit_DeInitAICar2__FP8Car_tObj(struct Car_tObj *carObj); // 0x800675D0

extern int AIInit_IsNonStandardCarFile__Fi(int index); // 0x800675D8


#endif
