#ifndef HUD_H
#define HUD_H


extern void Hud_CreateHudViews__Fv(); // 0x800D1A80

extern void Hud_GoTpage__Fi(int page); // 0x800D1D6C

extern void Hud_DebugInfo__Fv(); // 0x800D1DFC

extern void Hud_DebugCrap__Fv(); // 0x800D1F90

extern void Hud_BuildSprite__FP4SPRTiiiUli(struct SPRT *sprt, int shapeIdx, int x, int y, unsigned long color, int trans); // 0x800D1F98

extern void Hud_BuildSprite2__FP4SPRTiii(struct SPRT *sprt, int shapeIdx, int x, int y); // 0x800D2044

extern void Hud_FBuildSprite__FiiiUli(int shapeIdx, int x, int y, unsigned long color, int trans); // 0x800D2070

extern void Hud_BuildSpriteFromFont__FP4SPRTcii(struct SPRT *sprt, char ch, int x, int y); // 0x800D2104

extern void Hud_BuildF3__FP7POLY_F3P13HudPmx_tShapeiiUl(struct POLY_F3 *prim, struct HudPmx_tShape *shape, int x, int y, unsigned long color); // 0x800D21C4

extern void Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl(struct POLY_GT4 *prim, struct HudPmx_tShape *shape, int x, int y, unsigned long color); // 0x800D2288

extern void Hud_BuildFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli(struct POLY_FT4 *prim, struct HudPmx_tShape *shape, int x, int y, unsigned long color, int trans); // 0x800D2334

extern void Hud_BuildMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli(struct POLY_FT4 *prim, struct HudPmx_tShape *shape, int x, int y, unsigned long color, int trans); // 0x800D2424

extern void Hud_BuildMapMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli(struct POLY_FT4 *prim, struct HudPmx_tShape *shape, int x, int y, unsigned long color, int trans); // 0x800D2528

extern void Hud_BuildF4__FP7POLY_F4iiiiiUl(struct POLY_F4 *prim, int trans, int x, int y, int w, int h, unsigned long color); // 0x800D2634

extern void Hud_BuildG4__FP7POLY_G4iiiiiUlUlUlUl(struct POLY_G4 *prim, int trans, int x, int y, int w, int h, unsigned long col1, unsigned long col2, unsigned long col3, unsigned long col4); // 0x800D26D8

extern void Hud_BuildF4o__FP7POLY_F4iiiiiUlScSc(struct POLY_F4 *prim, int trans, int x, int y, int w, int h, unsigned long color, int x0off, int x1off); // 0x800D2794

extern void Hud_FBuildGT4__FP13HudPmx_tShapeiiUl(struct HudPmx_tShape *shape, int x, int y, unsigned long col1); // 0x800D2868

extern void Hud_FBuildFT4__FP13HudPmx_tShapeiiUl(struct HudPmx_tShape *shape, int x, int y, unsigned long col1); // 0x800D28F4

extern void Hud_FBuildF4__FiiiiiUlcc(int transparent, int x, int y, int w, int h, unsigned long col1, int x0off, int x1off); // 0x800D2984

extern void uppercase__FPc(char *string); // 0x800D2A44

extern void Hud_Kill__Fv(); // 0x800D2AA4

extern void Hud_Init0__Fv(); // 0x800D2AF4

extern void Hud_InitMapFrame__Fii(int i, int mode); // 0x800D2B4C

extern void Hud_BuildTimeSprites__FP4SPRTPcii(struct SPRT *sprt, char *str, int x, int y); // 0x800D2EF8

extern void Hud_Init__Fv(); // 0x800D302C

extern void Hud_InitTables__Fv(); // 0x800D39EC

extern void Hud_BuildETimeString__FP4SPRTi(struct SPRT *sprt, int time); // 0x800D3A18

extern void * Hud_BuildDistanceString__FP4SPRTi(struct SPRT *sprt, int player); // 0x800D3BA4

extern void Hud_BuildTimeString__FP4SPRTi(struct SPRT *sprt, int time); // 0x800D3D44

extern void Hud_BuildTach__Fi(int player); // 0x800D3E94

extern int Hud_BuildString__FPciiiib(char *str, int x, int y, int color, int player, void * justwidth); // 0x800D42C8

extern void Hud_BuildNumbers0__Fi(int player); // 0x800D4624

extern void Hud_BuildNumbers__Fi(int player); // 0x800D4E70

extern void Hud_InitMap__Fv(); // 0x800D5A48

extern void Hud_BuildMapMarkers__Fi(int player); // 0x800D5AE8

extern void Hud_WingmanFlash__Fii(int player, int index); // 0x800D5FB8

extern void Hud_BuildWingmanInterface__Fi(int player); // 0x800D606C

extern void Hud_InitCdPlayer__Fv(); // 0x800D63B8

extern void Hud_BuildCdPlayer__Fii(int type); // 0x800D63DC

extern int Hud_BuildRadar__Fi(int player); // 0x800D6B48

extern void Hud_BuildReplay__Fv(); // 0x800D7250

extern int Hud_NextPlayer__Fi(int player); // 0x800D754C

extern char * Hud_NextPlayerNameOrCarOrTime__Fi(int player); // 0x800D76B0

extern void Hud_RenderMapView__Fv(); // 0x800D7838

extern void Hud_BlackThinBox__Fiiii(int x, int y, int w, int h); // 0x800D7ABC

extern void Hud_Draw321Num__Fiiiiii(int x, int y, int num, int flare_intensity); // 0x800D7CA8

extern void Hud_Render321Go__Fv(); // 0x800D7E64

extern void BigBTCTime__Fi(int secs); // 0x800D7FB0

extern void Hud_RenderHudView__Fv(); // 0x800D82D0

extern void Hud_RenderTacView__Fv(); // 0x800D8C48

extern void Hud_ParseTime__FiPc(int nTime, char *sLapTime); // 0x800D8D64

extern void Hud_RenderPauseBox__Fiiii(int x, int y, int w, int h); // 0x800D8ED0

extern void Hud_Render__Fv(); // 0x800D9058

extern void Hud_PositionMap__Fv(); // 0x800D94C0

extern void Hud_BTC_Update__FPcib(char *perpname, int timeleft, void * userHasControl); // 0x800D95C8

extern void Hud_BustedOverlayOn__FiPcbs(int time, char *name, void * caught, short player); // 0x800D962C

extern void Hud_BustedOverlayOff__Fv(); // 0x800D97E4

extern void Hud_Reset__Fv(); // 0x800D97F0

extern void Hud_BTC_QuitOut__Fv(); // 0x800D9848

extern void Hud_BTC_BonusTime__Fl(long extratime); // 0x800D990C

extern void Hud_Perp_OverlayOn__Fii(int player, int level); // 0x800D9924

extern void Hud_Perp_OverlayOff__Fi(int player); // 0x800D9950


#endif
