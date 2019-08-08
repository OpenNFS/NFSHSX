#ifndef AISTATE_H
#define AISTATE_H

extern void AIState_StartUp__Fv(); // 0x8006F9A4

extern void AIState_Restart__Fv(); // 0x8006F9C4

extern void AIState_CleanUp__Fv(); // 0x8006F9E4

extern void StateExecute__12AIState_Base(struct AIState_Base *this); // 0x8006F9EC

extern struct AIState_Base * __12AIState_BaseP8Car_tObj(struct AIState_Base *this, struct Car_tObj *carObj); // 0x8006FA74

extern void Execute__14AIState_Normal(struct AIState_Normal *this); // 0x8006FA8C

extern struct AIState_Normal * __14AIState_NormalP8Car_tObj(struct AIState_Normal *this, struct Car_tObj *carObj); // 0x8006FADC

extern void Execute__12AIState_Idle(struct AIState_Idle *this); // 0x8006FB34

extern void SetIdlePosition__12AIState_Idlei(struct AIState_Idle *this, int roadPosition); // 0x8006FBF0

extern struct AIState_Chase * __13AIState_ChaseP8Car_tObjT1P8coorddefiiiii(struct AIState_Chase *this, struct Car_tObj *carObj, struct Car_tObj *targetCar, struct coorddef *relPosition, int nitrousTicks, int nitrousMinForeDistance, int nitrousMinAftDistance, int aggressionLevel, int delayTime); // 0x8006FBFC

extern void _._13AIState_Chase(struct AIState_Chase *this, int __in_chrg); // 0x8006FD04

extern void SetTarget__13AIState_ChaseP8Car_tObjP8coorddef(struct AIState_Chase *this, struct Car_tObj *targetCar, struct coorddef *relPosition); // 0x8006FD8C

extern void SetMurderMode__13AIState_Chaseii(struct AIState_Chase *this, int murderMode, int murderTicks); // 0x8006FE6C

extern void SetUp__13AIState_Chase(struct AIState_Chase *this); // 0x8006FE98

extern void DoSlowNitrous__13AIState_Chase(struct AIState_Chase *this); // 0x8006FFF4

extern void DoNitrous__13AIState_Chasei(struct AIState_Chase *this, int checkForHumans); // 0x80070010

extern void Execute__13AIState_Chase(struct AIState_Chase *this); // 0x8007015C

extern void FarTargeting__13AIState_Chase(struct AIState_Chase *this); // 0x800702D0

extern int CalculateCloseTargettingAheadSlowDownFactor__13AIState_Chase(struct AIState_Chase *this); // 0x8007037C

extern void CloseTargeting__13AIState_Chase(struct AIState_Chase *this); // 0x80070408

extern void ApproachTargeting__13AIState_Chasei(struct AIState_Chase *this, int intercept); // 0x800708B8

extern void CheckForBarriersAndTargetAroundThem__13AIState_Chase(struct AIState_Chase *this); // 0x80070BC4

extern int FindBarrierEndSlice__13AIState_Chase(struct AIState_Chase *this); // 0x80070D14

extern void _._15AIState_Offroad(struct AIState_Offroad *this, int __in_chrg); // 0x800710AC

extern struct AIState_Offroad * __15AIState_OffroadP8Car_tObjiP8coorddefP10matrixtdefiii(struct AIState_Offroad *this, struct Car_tObj *carObj, int startSlice, struct coorddef *position, struct matrixtdef *orientation, int maxSpeedKPH, int releaseTime, int endSlice); // 0x80071120

extern void UnleashIfInRange__15AIState_OffroadP8Car_tObj(struct AIState_Offroad *this, struct Car_tObj *car); // 0x80071268

extern void Execute__15AIState_Offroad(struct AIState_Offroad *this); // 0x800712E0

extern struct AIState_Purgatory * __17AIState_PurgatoryP8Car_tObj(struct AIState_Purgatory *this, struct Car_tObj *carObj); // 0x8007148C

extern void _._17AIState_Purgatory(struct AIState_Purgatory *this, int __in_chrg); // 0x8007163C

extern int TestForRelease__17AIState_Purgatory(struct AIState_Purgatory *this); // 0x8007175C

extern void Execute__17AIState_Purgatory(struct AIState_Purgatory *this); // 0x800717D8

extern void StartUp__17AIState_Purgatory(); // 0x80071840

extern struct AIState_RovingTraffic * __21AIState_RovingTrafficP8Car_tObjP9trigger_t(struct AIState_RovingTraffic *this, struct Car_tObj *carObj, union trigger_t *trigger); // 0x8007184C

extern void CheckIfCarIsNearbyAndStop__21AIState_RovingTrafficP8Car_tObjRi(struct AIState_RovingTraffic *this, struct Car_tObj *otherCarObj, int *status); // 0x800718B4

extern void Execute__21AIState_RovingTraffic(struct AIState_RovingTraffic *this); // 0x80071A68

extern void _._14AIState_Donuts(struct AIState_Donuts *this, int __in_chrg); // 0x80071E0C

extern void Execute__14AIState_Donuts(struct AIState_Donuts *this); // 0x80071E70

extern struct AIState_GotoSlice * __17AIState_GotoSliceP8Car_tObjii(struct AIState_GotoSlice *this, struct Car_tObj *carObj, int targetSlice, int stopWhenArrivedAtSlice); // 0x8007236C

extern void Execute__17AIState_GotoSlice(struct AIState_GotoSlice *this); // 0x800723C0

extern int InTargetSliceRange__17AIState_GotoSlicei(struct AIState_GotoSlice *this, int rangeMeters); // 0x800724D8

extern struct AIState_Cruise * __14AIState_CruiseP8Car_tObj12cruiseMode_ti(struct AIState_Cruise *this, struct Car_tObj *carObj, enum cruiseMode_t cruiseMode, int speedOrFactor); // 0x8007251C

extern void Execute__14AIState_Cruise(struct AIState_Cruise *this); // 0x80072588

#endif
