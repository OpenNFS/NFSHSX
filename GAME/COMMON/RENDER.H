#ifndef RENDER_H
#define RENDER_H


extern void Render_CreatePlayerViews__Fv(); // 0x800B30AC

extern void Render_CreatePauseMenuViews__Fv(); // 0x800B3198

extern void Render_CreateViews__Fv(); // 0x800B31E4

extern void Render_StartRenderingWorldView__Fi(int viewid); // 0x800B321C

extern void Render_StopRenderingWorldView__Fi(int viewid); // 0x800B3298

extern void Render_RenderWorld__FP13DRender_tView(struct DRender_tView *Vi); // 0x800B32B8

extern void Render_RenderPlayerView__Fii(int ViewID, int Player); // 0x800B335C

extern void Render_RenderDebugView__Fv(); // 0x800B33A8

extern void Render_StartFrameRender__Fv(); // 0x800B33B0

extern void Render_StopFrameRender__Fv(); // 0x800B33F0

extern void Render_InitPauseMenu__Fv(); // 0x800B3410

extern void Render_RenderPauseMenuView__Fv(); // 0x800B3430

extern void Render_KillPauseMenu__Fv(); // 0x800B3488

extern void Render_Render__Fi(int pause); // 0x800B34A8

extern void FlareThing__Fv(); // 0x800B35E8

extern void Render_InitTrackRender__Fv(); // 0x800B36F4

extern void Render_RestartTrackRender__Fv(); // 0x800B37AC

extern void Render_InitTrackRenderPostSim__Fv(); // 0x800B37F4

extern void Render_KillTrackRender__Fv(); // 0x800B3820

extern void Render_InitLibRender__Fv(); // 0x800B3888

extern void StampImage__Fii(int xo, int depth); // 0x800B38A8

extern void Render_InitBlurMode__Fv(); // 0x800B3A04

extern void Render_InsertDepthOfField__Fv(); // 0x800B3A6C


#endif
