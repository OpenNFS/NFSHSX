#ifndef PHYSICS_H
#define PHYSICS_H


extern void Physics_InitCarSpecs__FP8Car_tObjP10Udff_tInfo(struct Car_tObj *carObj, struct Udff_tInfo *handle); // 0x800A86C8

extern void Physics_CalculateDerivedCarSpecs__FP8Car_tObj(struct Car_tObj *carObj); // 0x800A8964

extern void Physics_CheckGamedata__Fv(); // 0x800A8E74

extern int Physics_AttenuateVelocity__FP8Car_tObjiP10matrixtdef(struct Car_tObj *carObj, int force, struct matrixtdef *roadMat); // 0x800A8E7C

extern void Physics_SetCurrentWallType__Fi(int wallType); // 0x800A92D8

extern int Physics_GetTorque__FP8Car_tObji(struct Car_tObj *carObj, int index); // 0x800A92E4

extern void Physics_CorrectPostCollisionYaw__FP8Car_tObjiG8coorddef(struct Car_tObj *carObj, int impactVel, struct coorddef barrierVec); // 0x800A9320

extern int Physics_DoBarrierCheck__FP8Car_tObj(struct Car_tObj *carObj); // 0x800A94B8

extern void Physics_AutoShift__FP8Car_tObj(struct Car_tObj *carObj); // 0x800A9A50

extern void Physics_RampCarControlValues__FP8Car_tObj(struct Car_tObj *carObj); // 0x800A9D0C

extern void Physics_FixEngineRpm__FP8Car_tObj(struct Car_tObj *carObj); // 0x800AA4E4

extern void Physics_ResetCar__FP8Car_tObj(struct Car_tObj *carObj); // 0x800AA63C

extern void Physics_StopCar__FP8Car_tObj(struct Car_tObj *carObj); // 0x800AA6D8

extern void Physics_TestForBarrierCollision__FP8Car_tObj(struct Car_tObj *carObj); // 0x800AA7B0

extern void Physics_CalculateRoadGripModifiers__FP8Car_tObj(struct Car_tObj *carObj); // 0x800AA808

extern int Physics_CalculateCarAcceleration__FP8Car_tObj(struct Car_tObj *carObj); // 0x800AA984

extern void Physics_CalcWheelLockAcc__FP8Car_tObjP23Physics_tWheelAccStruct(struct Car_tObj *carObj, struct Physics_tWheelAccStruct *wheel); // 0x800AB49C

extern void Physics_CalcTractionCircleAcc__FP8Car_tObjP23Physics_tWheelAccStruct(struct Car_tObj *carObj, struct Physics_tWheelAccStruct *wheel); // 0x800AB698

extern void Physics_CalculateTireForces__FP8Car_tObjP23Physics_tWheelAccStruct(struct Car_tObj *carObj, struct Physics_tWheelAccStruct *wheel); // 0x800ABA3C

extern int Physics_CalculateRSControlDesiredPosition__FP8Car_tObjii(struct Car_tObj *carObj, int sliceAhead, int lookAhead); // 0x800ABFA4

extern void Physics_Real__FP8Car_tObj(struct Car_tObj *carObj); // 0x800AC164

extern void Physics_SimCar__FP8Car_tObj(struct Car_tObj *carObj); // 0x800AD544


#endif
