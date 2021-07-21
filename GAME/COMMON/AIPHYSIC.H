#ifndef AIPHYSIC_H
#define AIPHYSIC_H


extern void AIPhysic_StopCar__FP8Car_tObjii(struct Car_tObj *carObj, int velScale, int rotScale); // 0x80069238

extern void AIPhysic_RevEngine__FP8Car_tObj(struct Car_tObj *carObj); // 0x800692FC

extern void AIPhysic_HandleShifting__FP8Car_tObj(struct Car_tObj *carObj); // 0x800693CC

extern enum Gear_t AIPhysic_CalculateGear__FP8Car_tObj(struct Car_tObj *carObj); // 0x80069534

extern int AIPhysic_GearInvSpeedRange__FP8Car_tObj6Gear_t(struct Car_tObj *carObj, enum Gear_t gear); // 0x80069638

extern int AIPhysic_GearTopSpeed__FP8Car_tObj6Gear_t(struct Car_tObj *carObj, enum Gear_t gear); // 0x80069660

extern int AIPhysic_GearBottomSpeed__FP8Car_tObj6Gear_t(struct Car_tObj *carObj, enum Gear_t gear); // 0x80069688

extern int AIPhysic_CalcAcceleration__FP8Car_tObji(struct Car_tObj *carObj, int speed); // 0x800696B0

extern int AIPhysic_ModifyAccelerationAccordingToScript__FP8Car_tObji(struct Car_tObj *carObj, int acc); // 0x80069990

extern int AIPhysic_CalcDeceleration__FP8Car_tObj(struct Car_tObj *carObj); // 0x800699E8

extern void AIPhysic_CheckDesiredDirection__FP8Car_tObj(struct Car_tObj *carObj); // 0x80069A34

extern void AIPhysic_HandleSignalling__FP8Car_tObj(struct Car_tObj *carObj); // 0x80069A7C

extern void AIPhysic_HandleWipeoutTimer__FP8Car_tObj(struct Car_tObj *carObj); // 0x80069AF0

extern void AIPhysic_Main__FP8Car_tObj(struct Car_tObj *carObj); // 0x80069B84

extern void AIPhysic_CheckForBadPosition__FP8Car_tObj(struct Car_tObj *carObj); // 0x80069E14

extern int AIPhysics_UseCoolPhysics__FP8Car_tObj(struct Car_tObj *carObj); // 0x80069EEC

extern void AIPhysic_SimplePhysics__FP8Car_tObj(struct Car_tObj *carObj); // 0x80069F30

extern void AIPhysic_SimplePhysics_LongVel__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006A29C

extern void AIPhysic_SimplePhysics_LatVel__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006A5F4

extern void AIPhysic_CoolPhysics__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006A718

extern void AIPhysic_HandleDirection__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006A7CC

extern void AIPhysic_Preperation__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006A8B4

extern int AIPhysic_CalculateRoadPosition__FP8coorddefi(struct coorddef *pos, int slice); // 0x8006AB1C

extern void AIPhysic_GetDesiredVector__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006AC3C

extern void AIPhysic_TargetedGetDesiredVector__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006B224

extern int AIPhysic_CheckIfOutOfControl__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006B260

extern void AIPhysic_OutOfControlPhysics__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006B400

extern int AIPhysic_GetRearEndDamageFactor__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006BA70

extern void AIPhysic_InControlPhysics__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006BAC8

extern void AIPhysic_FinishUp__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006C37C

extern void AIPhysic_CalculateRampedDesiredLatPos__FP8Car_tObj9eRampType(struct Car_tObj *carObj, enum eRampType rampType); // 0x8006C768

extern int AIPhysic_HitWallCheck__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006C870

extern void AIPhysic_ProcessBarrierCollision__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006C920

extern void AIPhysic_ProcessCollision__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006C974

extern void AIPhysic_ChangeDirection__FP8Car_tObji(struct Car_tObj *carObj, int time); // 0x8006C9F0

extern void AIPhysic_CheckForGripReduction__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006CAA8

extern void AIPhysic_StartUp__Fv(); // 0x8006CC3C

extern void AIPhysic_CleanUp__Fv(); // 0x8006CC44

extern void AIPhysic_Reset__Fv(); // 0x8006CC4C

extern void AIPhysic_ResetCar__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006CC54

extern void AIPhysic_InitCar__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006CC60

extern void AIPhysic_DeInitCar__FP8Car_tObj(struct Car_tObj *carObj); // 0x8006CDD4


#endif
