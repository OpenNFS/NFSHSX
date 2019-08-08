#ifndef DRAW_H
#define DRAW_H

extern int Draw_SetView__Fiiiiiiiii(int x0, int y0, int x1, int y1, int w, int h, int dtd, int isbg, int otsize); // 0x800BDAC0

extern void Draw_InitViews__Fv(); // 0x800BDBD4

extern void Draw_InitViewOT__Fv(); // 0x800BDBE0

extern void Draw_InitViewOTInGame__Fv(); // 0x800BDC64

extern void Draw_DeInitViews__Fv(); // 0x800BDCE0

extern void Draw_DeInitViewsInGame__Fv(); // 0x800BDD68

extern struct DRAWENV * Draw_GetDRAWENV__Fii(int viewid, int page); // 0x800BDD9C

extern void Draw_SetViewMemBudget__Fii(int viewid, int totalmem); // 0x800BDDD8

extern void Draw_SetViewColor__Fiiii(int viewid, int r, int g, int b); // 0x800BDE00

extern void AllocatePrimitivesBuffer__Fv(); // 0x800BDE60

extern void ClearPrimitivesBuffer__Fv(); // 0x800BDF9C

extern void ClearPlatformPrimitivesBuffer__Fv(); // 0x800BE004

extern void Draw_StartRenderingView__Fi(int viewid); // 0x800BE060

extern void Draw_StopRenderingView__Fi(int viewid); // 0x800BE118

extern void Draw_CheckFirstFrameRender__Fv(); // 0x800BE230

extern void Draw_StartFrameRender__Fv(); // 0x800BE2C0

extern void Draw_SetDrawSyncCallback__FPFv_v(void (*p)()); // 0x800BE360

extern void Draw_StopFrameRender__Fv(); // 0x800BE36C

extern void Draw_DrawDirectScreen__FP8shapetblii(struct shapetbl *tile, int x, int y); // 0x800BE450

extern void Draw_DirectSetEnvironment__Fiiiiiiiiii(int x, int y, int w, int h, int edraw, int edisplay, int erase, int r, int g, int b); // 0x800BE478

extern void Draw_SetEnvironment__Fiiiiiiii(int w, int h, int edraw, int edisplay, int erase, int r, int g, int b); // 0x800BE57C

extern void Draw_InitRenderEngine__Fiiiiii(int x0, int y0, int x1, int y1, int w, int h); // 0x800BE5D8

extern void Draw_RestartRenderEngine__Fv(); // 0x800BE67C

extern void Draw_DeInitRenderEngine__Fv(); // 0x800BE684

extern void Draw_InitLibRender__Fv(); // 0x800BE6A8

#endif
