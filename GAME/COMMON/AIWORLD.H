#ifndef AIWORLD_H
#define AIWORLD_H


extern int AIWorld_ZSplineDistance__FP8Car_tObjT0(struct Car_tObj *carObj, struct Car_tObj *otherCarObj); // 0x80072F90

extern int AIWorld_ZSplineDistance__FP8coorddefT0P10matrixtdef(struct coorddef *pos1, struct coorddef *pos2, struct matrixtdef *roadMatrix); // 0x80073024

extern int AIWorld_ApxSplineDistance__FP8Car_tObjT0(struct Car_tObj *carObj, struct Car_tObj *otherCarObj); // 0x800730B8

extern int AIWorld_ApxSplineDistance__FP8Car_tObji(struct Car_tObj *carObj, int location); // 0x80073128

extern int AIWorld_ApxSplineDistance__FiP8Car_tObj(int location, struct Car_tObj *carObj); // 0x80073194

extern int AIWorld_ApxSplineDistance__Fii(int locationA, int locationB); // 0x800731BC

extern int AIWorld_SplineDistance__FP8Car_tObjT0(struct Car_tObj *carObj, struct Car_tObj *otherCarObj); // 0x80073224

extern int AIWorld_SplineDistance__FP8Car_tObjiP8coorddef(struct Car_tObj *carObj, int location, struct coorddef *position); // 0x8007327C

extern int AIWorld_GameOdometer__FP8Car_tObj(struct Car_tObj *carObj); // 0x800732D8

extern int AIWorld_IsDriveableLaneInSliceRange__Fiiii(int startSlice, int numSlicesToCheck, int direction, int laneIndex); // 0x800732F0

extern int AIWorld_IsDriveableLane__Fii(int slice, int laneIndex); // 0x800733A8

extern int AIWorld_GetProfileMask__Fi(int laneIndex); // 0x800733FC

extern int AIWorld_IsDriveableLane_UsingMask__Fii(int slice, int mask); // 0x8007343C

extern int AIWorld_CheckForBarrierBetweenLanes__Fiii(int slice, int lane0, int lane1); // 0x80073458

extern int AIWorld_LaneIndex__Fii(int slice, int position); // 0x800734CC

extern void AIWorld_CalculateLaneInfo__FP8Car_tObj(struct Car_tObj *carObj); // 0x80073594

extern int AIWorld_CalculateDeltaRoadYaw__FP8Car_tObj(struct Car_tObj *carObj); // 0x80073658

extern int AIWorld_CalcRoadBend__FP8Car_tObji(struct Car_tObj *carObj, int lookAhead); // 0x800736E0

extern int AIWorld_CalcFutureLateralVel__FP8Car_tObji(struct Car_tObj *carObj, int slicesAhead); // 0x800737BC

extern void AIWorld_CalcSpeed__FP8Car_tObj(struct Car_tObj *carObj); // 0x800738D4

extern int AIWorld_CalcLateralVelocity__FP8Car_tObj(struct Car_tObj *carObj); // 0x8007391C

extern void AIWorld_FindBarrierLessLaneAndPosition__FP8Car_tObjPiT1(struct Car_tObj *carObj, int *goodLane, int *goodPosition); // 0x80073978


#endif
