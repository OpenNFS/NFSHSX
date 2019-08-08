#ifndef FE3DMENU_H
#define FE3DMENU_H

extern void Fe3D_InitShowroom__Fv(); // 0x80012938

extern void CameraLookAt__FP10matrixtdefP8coorddef(struct matrixtdef *mat, struct coorddef *camPoint); // 0x80012AE4

extern void Draw_MenuRenderingView__FP8Car_tObjP13DRender_tViewiiiUliffii(struct Car_tObj *carObj, struct DRender_tView *Vi, int posX, int posY, int player, unsigned long rotation, int camRot, float camY, float camZ, int light, int reflection); // 0x80012BF8

#endif
