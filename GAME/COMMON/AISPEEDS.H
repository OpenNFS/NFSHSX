#ifndef AISPEEDS_H
#define AISPEEDS_H

extern void AISpeeds_StartUp__Fv(); // 0x8006D5B4

extern void AISpeeds_ReadTuningInfo__Fv(); // 0x8006D5EC

extern void AISpeeds_CleanUp__Fv(); // 0x8006D870

extern int AISpeeds_SuperDuperSpeedUpTheCarsAtTheStartBecauseWeCannotActuallyHandleRenderingTheseCars__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006D89C

extern int AISpeeds_CalcOpponentTopSpeed__FP8Car_tObjPi(struct Car_tObj *carObj, int *unFetteredDesiredSpeed); // 0x8006D938

extern int AISpeeds_NeedToSlowDownForCurve__FP8Car_tObjiii(struct Car_tObj *carObj, int distanceMeters, int currentSpeed, int futureCurveSpeed); // 0x8006DE90

extern int AISpeeds_CalcOpponentCurveSpeed__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006DF34

extern int AISpeeds_BTCGetGlueFactor__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006E09C

extern struct Car_tObj * AISpeeds_GetNextAICar__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006E258

extern struct Car_tObj * AISpeeds_GetPrevAICar__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006E264

extern int AISpeeds_GetCaravanFactor__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006E2D0

extern int AISpeeds_GetGlueFactor__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006E68C

extern int AISpeeds_GetDamageFactor__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006E898

extern int AISpeeds_LimitGlueMultiplier__FP8Car_tObji(struct Car_tObj *carObj, int f_final); // 0x8006E9B0

extern int AISpeeds_CalcCopTopSpeed__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006EAA4

extern int AISpeeds_CalcTrafficTopSpeed__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006EB6C

extern int AISpeeds_GetLegalSpeed__Fi(int slice); // 0x8006ED0C

extern int AISpeeds_RandomizeTrafficSpeed__FP8Car_tObji(struct Car_tObj *carObj, int oldsafe); // 0x8006ED50

extern void AISpeeds_CalcDesiredSpeed__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006EDDC

extern int AISpeeds_CalculateOncomingCarSpeed__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006EE80

extern void AISpeeds_SetTrafficSpeedRandomFactor__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006EF28

extern void AISpeeds_MaintainLeaderBoard__Fv(); // 0x8006EFA4

extern int AISpeeds_GetScriptFactor__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006F0A4

extern int AISpeeds_GetUpgradeAccMult__Fi(int carIndex); // 0x8006F10C

extern int AISpeeds_GetUpgradeBrakeMult__Fi(int carIndex); // 0x8006F1C8

extern int AISpeeds_GetUpgradeHandlingMult__Fi(int carIndex); // 0x8006F284

extern int AISpeeds_GetUpgradeTopSpeedMult__Fi(int carIndex); // 0x8006F340

extern int AISpeeds_CalcHumanTopSpeed__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006F3FC

extern int AISpeeds_CalcHumanCurveSpeed__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006F41C

#endif
