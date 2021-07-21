#ifndef CARS_H
#define CARS_H


extern void Cars_DoGravityEffectsOnAcc__FP8Car_tObji(struct Car_tObj *carObj, int arcade); // 0x80085D84

extern void Cars_GetDashData__FP8Car_tObjPiN21(struct Car_tObj *carObj, int *rpm, int *gear, int *speed); // 0x80085EC4

extern void Cars_QDUpdateVelGlue__FP8Car_tObj(struct Car_tObj *carObj); // 0x80085EE8

extern void Cars_InitDashData__FP8Car_tObjPiT1(struct Car_tObj *carObj, int *redline, int *topspeed); // 0x80085F64

extern void Cars_SetAudioCalls__FP8Car_tObjiiiiii(struct Car_tObj *carObj, int type, int chan, int s1, int s2, int force, int pan); // 0x80085F8C

extern void Cars_ResetCarCounters__Fv(); // 0x80086054

extern void Cars_InitStats__FP8Car_tObj(struct Car_tObj *carObj); // 0x8008607C

extern void Cars_InitializeCarTablesFlagsAndCounters__FP8Car_tObj(struct Car_tObj *carObj); // 0x800860E4

extern void Cars_ResetVariablesAfterACollision__FP8Car_tObj(struct Car_tObj *carObj); // 0x800865FC

extern void Cars_ResetCollidedCars__FP8Car_tObjii(struct Car_tObj *carObj, int forceReset, int forceParkAtSide); // 0x80086664

extern void Cars_SetCarUpForHiRezSim__FP8Car_tObj(struct Car_tObj *carObj); // 0x80086AC4

extern void Cars_DoExtraCarCollisionProcessing__FP8Car_tObj(struct Car_tObj *carObj); // 0x80086B38

extern void Cars_AddCarSfx__FP8Car_tObjiP8coorddefiii(struct Car_tObj *carObj, int wheel, struct coorddef *skidpt, int roadSurface, int surfaceType, int drawSkid); // 0x8008748C

extern void Car_TireSkiddingStuff__FP8Car_tObj(struct Car_tObj *carObj); // 0x800878CC

extern void Cars_FindTotalSlice__FP8Car_tObj(struct Car_tObj *carObj); // 0x80089760

extern void Car_DoSkiddingStuff__FP8Car_tObj(struct Car_tObj *carObj); // 0x800897CC

extern void Car_DoPostCollisionStuff__FP8Car_tObj(struct Car_tObj *carObj); // 0x800898DC

extern void Cars_CalculateStartingGridOffset__FP8Car_tObjPiP8coorddef(struct Car_tObj *carObj, int *slice, struct coorddef *offset); // 0x80089B44

extern void Cars_IniCarObjects__FP8Car_tObji(struct Car_tObj *carObj, int index); // 0x80089D88

extern void Cars_InitCar__FP8Car_tObji(struct Car_tObj *carObj, int index); // 0x8008A174

extern void Cars_DeInitCar__FP8Car_tObj(struct Car_tObj *carObj); // 0x8008A484

extern void Cars_Restart__Fv(); // 0x8008A4CC

extern void Cars_Initialize__FPci(char *mem, int size); // 0x8008A5B4

extern void Cars_StartUp__Fv(); // 0x8008A5D8

extern void Cars_CleanUp__Fv(); // 0x8008AA40

extern void Cars_FindCurrentLap__FP8Car_tObj(struct Car_tObj *carObj); // 0x8008ABC8

extern int Cars_CalculateRoadSpan__FP8Car_tObj(struct Car_tObj *carObj); // 0x8008AC80

extern int Cars_CalculateRoadPosition__FP8Car_tObj(struct Car_tObj *carObj); // 0x8008AEC8

extern int Cars_CalcVelDownRoad__FP8Car_tObj(struct Car_tObj *carObj); // 0x8008AEE8

extern void Cars_Randomize__Fv(); // 0x8008AF84

extern void Cars_ManageBureaucracy__Fv(); // 0x8008AFFC

extern void Cars_CheckForAccidentScenes__Fv(); // 0x8008B1C4

extern void Cars_SortCars__Fv(); // 0x8008B28C


#endif
