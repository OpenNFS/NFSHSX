#ifndef CAMERA_H
#define CAMERA_H


extern void EulerToMat__FP10matrixtdefiii(struct matrixtdef *m, int ax, int ay, int az); // 0x8008060C

extern void Camera_SetCamera__FP13DRender_tView(struct DRender_tView *cview); // 0x80080704

extern void Camera_LookBack__FP10matrixtdefT0(struct matrixtdef *src, struct matrixtdef *tgt); // 0x8008073C

extern void Camera_TunnelLimit__FiPi(int player, int *armheight); // 0x800807C4

extern void Camera_UpdateCollisionCam__Fi(int player); // 0x8008090C

extern void Camera_UpdateSimpleCam__Fi(int player); // 0x80080AC8

extern void Camera_UpdateBumperCam__Fi(int player); // 0x80080BAC

extern void Camera_UpdateTailCam__Fii(int player, int behavior); // 0x80080D84

extern void Camera_UpdateHeliCam__Fii(int player, int behavior); // 0x800813CC

extern void Camera_UpdateCircleCam__Fi(int player); // 0x80081AB8

extern void SetCameraZoom__Fii(int player, int targetDist); // 0x80081D38

extern void Camera_UpdateTVCam__Fi(int player); // 0x80081E48

extern void Camera_UpdateAnimCam__Fi(int player); // 0x80081F94

extern void Camera_UpdateFinishCam__Fi(int player); // 0x80082254

extern void Camera_UpdateBlimpCam__Fi(int player); // 0x8008237C

extern void Camera_SetSplineCam__Fi(int player); // 0x800824C0

extern void Camera_UpdateSplineCam__Fi(int player); // 0x800826C0

extern int Camera_IslandProfile__FUs(unsigned short before); // 0x80082C3C

extern void Camera_UpdatePulloverCam__Fi(int player); // 0x80082C94

extern void Camera_UpdateCopCam1__Fi(int player); // 0x80083010

extern void Camera_UpdateCopCam2__Fi(int player); // 0x800831A8

extern void Camera_UpdateBTCopCam__Fi(int player); // 0x800832B0

extern void Camera_Update__Fv(); // 0x800833D8

extern void Camera_Init__Fv(); // 0x80083858

extern void Camera_Kill__Fv(); // 0x80083BEC

extern void Camera_PitchAndRoll__Fi(int player); // 0x80083C74

extern int Camera_TooSteep__FiP12BWorldSm_Pos(int player, struct BWorldSm_Pos *slicePos); // 0x80083D28

extern void Camera_CheckWallCollisions__FiP8coorddef(int player, struct coorddef *pos); // 0x80083E98

extern void Camera_SetAboveGround__FiP8coorddef(int player, struct coorddef *pos); // 0x8008480C

extern void Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi(int player, struct coorddef *point, struct coorddef *pos, struct matrixtdef *rot, int hirez); // 0x80084898

extern void Camera_OpponentLookBehind__FiP8coorddefi(int player, struct coorddef *pos, int reset); // 0x80084C34

extern void Camera_GetViewInfo__FiP17DRender_tCalcViewi(int cviewP, struct DRender_tCalcView *cview, int viewID); // 0x80085008

extern void Camera_GetAudioViewInfo__FiP17DRender_tCalcViewPP8coorddef(int cviewP, struct DRender_tCalcView *cview, struct coorddef **cvel); // 0x8008533C

extern int Camera_GetMode__Fi(int cviewP); // 0x80085568

extern void Camera_SetMode__Fii(int cviewP, int mode); // 0x80085608

extern void Camera_NextMode__Fi(int cviewP); // 0x8008581C

extern void Camera_ReplayUpdate__FiP15Camera_tCamSlot(int cviewP, struct Camera_tCamSlot *ptr); // 0x80085BD0

extern void Camera_ResetRelPos__Fi(int bitMask); // 0x80085CD4


#endif
