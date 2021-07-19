#ifndef AILIFE_H
#define AILIFE_H


extern int AILife_EvaluateLife__FP8Car_tObj(struct Car_tObj *carObj); // 0x80067650

extern void AILife_RCSetSpeeds__FP8Car_tObj(struct Car_tObj *carObj); // 0x800676B4

extern void AILife_RCPickSliceAndDirection__FP8Car_tObj(struct Car_tObj *carObj); // 0x800676E4

extern void AILife_RCPickDesiredLatPosition__FP8Car_tObj(struct Car_tObj *carObj); // 0x80067B1C

extern void AILife_PlaceCarAtLocation__FP8Car_tObjiiiii(struct Car_tObj *carObj, int slice, int desiredLatPos, int direction, int currentSpeed, int rotation1024); // 0x80067C50

extern void AILife_SetInitialSlicePositionOrientationEtc__FP8Car_tObj(struct Car_tObj *carObj); // 0x80067C8C

extern void AILife_PlaceCarAtLocation__FP8Car_tObji(struct Car_tObj *carObj, int rotation1024); // 0x80067CE0

extern void AILife_ReencarnateTraffic__FP8Car_tObj(struct Car_tObj *carObj); // 0x80067EE4

extern void AILife_ReencarnateTrafficByPosition__FP8Car_tObjiiP8coorddefP10matrixtdef(struct Car_tObj *carObj, int slice, int travelDirection, struct coorddef *pos, struct matrixtdef *ori); // 0x80067F94

extern void AILife_ReencarnateCopBySlice__FP8Car_tObjiiii(struct Car_tObj *carObj, int slice, int travelDirection, int roadSide, int moving); // 0x800681A0

extern void AILife_ReencarnateCopByPosition__FP8Car_tObjiiP8coorddefP10matrixtdef(struct Car_tObj *carObj, int slice, int travelDirection, struct coorddef *pos, struct matrixtdef *ori); // 0x80068324

extern void AILife_ReencarnateCopByLatPosAndRotation__FP8Car_tObjiiii(struct Car_tObj *carObj, int slice, int travelDirection, int latPos, int rotation1024); // 0x800684D4

extern int AILife_IsCoordInThisLiveArea__FP8coorddefP8Car_tObj(struct coorddef *tPos, struct Car_tObj *racer); // 0x80068658

extern struct Car_tObj * AILife_IsTrafficCarInAnyLiveArea__FP8Car_tObj(struct Car_tObj *traffic); // 0x80068704

extern int AILife_IsCoordInThisVisibleArea__FP8coorddefP8Car_tObj(struct coorddef *tPos, struct Car_tObj *racer); // 0x80068788

extern struct Car_tObj * AILife_IsCarInAnyVisibleArea__FP8Car_tObj(struct Car_tObj *carObj); // 0x800687EC

extern struct Car_tObj * AILife_IsSliceInAnyVisibleArea__Fi(int slice); // 0x8006880C

extern struct Car_tObj * AILife_IsSliceCloseToAnyCopCar__Fi(int slice); // 0x800688AC

extern struct Car_tObj * AILife_IsPositionInAnyVisibleArea__FP8coorddef(struct coorddef *pos); // 0x8006894C

extern void AILife_Debug__FPce(char *format); // 0x800689D0


#endif
