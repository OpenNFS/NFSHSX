#ifndef AI_H
#define AI_H


extern void AI_StartUp__Fv(); // 0x8005797C

extern void AI_CleanUp__Fv(); // 0x80057984

extern void AI_Main_OverallSetup__Fv(); // 0x8005798C

extern void AI_CarAvoidance__FP8Car_tObj(struct Car_tObj *carObj); // 0x80057994

extern void AI_WorldAvoidance__FP8Car_tObj(struct Car_tObj *carObj); // 0x800579D8

extern void AI_InitAIInfo__FP8Car_tObj(struct Car_tObj *carObj); // 0x80057A24

extern void AI_GenericBeginCycle__FP8Car_tObj(struct Car_tObj *carObj); // 0x80057A6C

extern void AI_GenericCycle__FP8Car_tObj(struct Car_tObj *carObj); // 0x80057A94

extern void AI_GenericEndCycle__FP8Car_tObj(struct Car_tObj *carObj); // 0x80057AE8

extern void AI_TargetLane__FP8Car_tObji(struct Car_tObj *carObj, int lane); // 0x80057B1C

extern void AI_ClearLaneMerits__Fv(); // 0x80057B6C

extern void AI_DoReactions__FP8Car_tObj(struct Car_tObj *carObj); // 0x80057B94

extern void AI_CheckForPlayerActions__FP8Car_tObjT0(struct Car_tObj *carObj, struct Car_tObj *otherCarObj); // 0x80057DD4

extern void AI_DoReactionsAndBehavior__FP8Car_tObj(struct Car_tObj *carObj); // 0x80058014

extern void AI_OpponentBlockPlayer__FP8Car_tObjT0(struct Car_tObj *carObj, struct Car_tObj *otherCarObj); // 0x800580D8

extern void AI_CheckForBarriers__FP8Car_tObj(struct Car_tObj *carObj); // 0x800582D4

extern void AI_SetupOncomingLaneDemerits__FP8Car_tObj(struct Car_tObj *carObj); // 0x80058694

extern void AI_HandleChangeInNumLanes__FP8Car_tObj(struct Car_tObj *carObj); // 0x800587EC

extern void AI_HandleShouldersAndOffRoad__FP8Car_tObj(struct Car_tObj *carObj); // 0x8005895C

extern void AI_CalculateLaneSpeeds__FP8Car_tObj(struct Car_tObj *carObj); // 0x80058D20

extern void AI_CalcMeritsBasedOnSpeed__FP8Car_tObj(struct Car_tObj *carObj); // 0x800590B4

extern void AI_CheckForClearLanes__FP8Car_tObj(struct Car_tObj *carObj); // 0x80059434

extern void AI_CalcBestLineMerits__FP8Car_tObj(struct Car_tObj *carObj); // 0x800596A4

extern void AI_AddCollidableObjects__FP8Car_tObjP5Group(struct Car_tObj *carObj, struct Group *groupSimObjs); // 0x8005972C

extern void AI_AvoidObjects__FP8Car_tObj(struct Car_tObj *carObj); // 0x80059928

extern void AI_AvoidSpikeBelt__FP8Car_tObj(struct Car_tObj *carObj); // 0x8005995C

extern void AI_SubmitObstacle__FP8Car_tObjiiii(struct Car_tObj *carObj, int importance, int leftLatPosition, int rightLatPosition, int slice); // 0x800599E4

extern void AI_HandleTrafficHonking__FP8Car_tObj(struct Car_tObj *carObj); // 0x80059B88

extern void AI_CheckForCarsOnSide__FP8Car_tObj(struct Car_tObj *carObj); // 0x80059C8C

extern void AI_ProcessObservationsAndChooseLane__FP8Car_tObj(struct Car_tObj *carObj); // 0x80059DDC

extern void AI_ChooseBestLane__FP8Car_tObj(struct Car_tObj *carObj); // 0x80059E20

extern int AI_CheckPreferredLateralPosition__FP8Car_tObj(struct Car_tObj *carObj); // 0x80059EAC

extern int AI_TryToShareLanes__FP8Car_tObjT0(struct Car_tObj *carObj, struct Car_tObj *carInWay); // 0x8005A060

extern void AI_CalculateDesiredLatPosition__FP8Car_tObj(struct Car_tObj *carObj); // 0x8005A15C

extern void AI_CalculateAdjustedDesiredSpeed__FP8Car_tObj(struct Car_tObj *carObj); // 0x8005A390

extern int AI_IsMellowZone__FP8Car_tObji(struct Car_tObj *carObj, int delay); // 0x8005A628

extern void AI_KeepCarsInLane__FP8Car_tObj(struct Car_tObj *carObj); // 0x8005A714

extern void AI_PushFinishedCarsToSide__FP8Car_tObj(struct Car_tObj *carObj); // 0x8005A724

extern void AI_MaybeChangeLaneSlack__FP8Car_tObj(struct Car_tObj *carObj); // 0x8005A8C0

extern void AI_ChooseNewLaneSlack__FP8Car_tObj(struct Car_tObj *carObj); // 0x8005A9DC


#endif
