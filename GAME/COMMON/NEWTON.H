#ifndef NEWTON_H
#define NEWTON_H

extern void Newton_AddDamageZone__FP13BO_tNewtonObjiii(struct BO_tNewtonObj *newtonObj, int impulse, int zone, int type); // 0x8009EF2C

extern void Newton_FindClosestQuad__FP13BO_tNewtonObj(struct BO_tNewtonObj *n); // 0x8009F704

extern int Newton_CalculateSliceYaw__Fi(int slice); // 0x8009F730

extern void Newton_UpdateRoadGeometry__FP13BO_tNewtonObj(struct BO_tNewtonObj *n); // 0x8009F7A0

extern int Newton_FindGroundElevationGeneral__FP8coorddefN20(struct coorddef *point, struct coorddef *normal, struct coorddef *pointOnQuad); // 0x8009FB30

extern int Newton_FindGroundElevationRough__FP8coorddefN20(struct coorddef *point, struct coorddef *normal, struct coorddef *pointOnQuad); // 0x8009FC8C

extern int Newton_FindGroundElevationAndNormalFast__FP13BO_tNewtonObjP8coorddef(struct BO_tNewtonObj *newtonObj, struct coorddef *normal); // 0x8009FE60

extern int Newton_FindGroundElevationAndNormal__FP13BO_tNewtonObjP8coorddef(struct BO_tNewtonObj *newtonObj, struct coorddef *normal); // 0x8009FF80

extern void Newton_LimitCarsToDrivableDist__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj); // 0x800A0DA4

extern int Newton_CalcPerpenHeightOfLowestPointFromGround__FP13BO_tNewtonObjP8coorddefT1(struct BO_tNewtonObj *newtonObj, struct coorddef *normal, struct coorddef *samplePoint); // 0x800A0DE8

extern int Newton_CalcPerpenHeightOfCenterPointFromGround__FP13BO_tNewtonObjP8coorddefT1(struct BO_tNewtonObj *newtonObj, struct coorddef *normal, struct coorddef *samplePoint); // 0x800A116C

extern void Newton_CalcDistToClosestPlayerCar__FP13BO_tNewtonObj(struct BO_tNewtonObj *n); // 0x800A1248

extern void Newton_UpdateRoadInfo__FP13BO_tNewtonObj(struct BO_tNewtonObj *n); // 0x800A1568

extern void Newton_CopyRoadMatrixToOrientMat__FP13BO_tNewtonObji(struct BO_tNewtonObj *n, int backwards); // 0x800A15F4

extern void Newton_CopyRoadMatrixToShadowMat__FP13BO_tNewtonObji(struct BO_tNewtonObj *n, int backwards); // 0x800A16C8

extern void Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi(struct BO_tNewtonObj *n, int slice, struct coorddef *offset, int direction); // 0x800A179C

extern void Newton_InitBaseNewtonObj__FP13BO_tNewtonObjiiiiii(struct BO_tNewtonObj *newtonObj, int index, int mass, int moInertia, int dimX, int dimY, int dimZ); // 0x800A1BE8

extern void Newton_QDUpdateVel__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj); // 0x800A1E68

extern int Newton_OptzRotxform__FP10matrixtdefiiiPiiT4(struct matrixtdef *m, int ax, int ay, int az, int *reOrthoNeeded, int reOrthoLimit, int *cumulatedRot); // 0x800A1F4C

extern void Newton_QDUpdateRot64Hz__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj); // 0x800A20E8

extern void Newton_QDUpdateRot32Hz__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj); // 0x800A21F8

extern void Newton_CalculateGroundShadowMatrix__FP13BO_tNewtonObjP8coorddefi(struct BO_tNewtonObj *newtonObj, struct coorddef *normal, int orientToGround); // 0x800A2318

extern void Newton_CalcRealShadowCoordinates__FP8Car_tObji(struct Car_tObj *carObj, int currentTick); // 0x800A268C

extern void Newton_CheckForSpikeBelts__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj); // 0x800A2A2C

extern void Newton_DoPostBarrierCollisionHandling__FP13BO_tNewtonObjG8coorddef(struct BO_tNewtonObj *newtonObj, struct coorddef normal); // 0x800A2AF0

extern void Newton_GenerateVector__FiP8coorddefP12BWorldSm_Pos(int type, struct coorddef *vector, struct BWorldSm_Pos *testSimRoadInfo); // 0x800A2C98

extern int Netwon_CheckForBadQuad__FP13BO_tNewtonObjP12BWorldSm_Posi(struct BO_tNewtonObj *newtonObj, struct BWorldSm_Pos *testSimRoadInfo, int wheel); // 0x800A2E24

extern void Newton_TestForUndrivableSurfaces__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj); // 0x800A2E84

extern void Newton_LimitAngularVelocity__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj); // 0x800A35DC

extern void Newton_ApplyTheLawOfGravity__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj); // 0x800A3674

extern int Newton_CalculateRoadPositionFromSliceAndPosition__FiP8coorddefP10matrixtdef(int slice, struct coorddef *position, struct matrixtdef *matrix); // 0x800A3B60

extern int Newton_CalculateRoadPosition__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj); // 0x800A3C54

#endif
