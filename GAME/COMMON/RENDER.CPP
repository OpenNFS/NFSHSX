#include "THISDUST.H"
#include "RENDER.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Render_CreatePlayerViews__Fv()
 // line 92, offset 0x800b30ac
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x800B30AC
	/* end block 1 */
	// End offset: 0x800B317C
	// End Line: 125

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

	/* begin block 3 */
		// Start line: 184
	/* end block 3 */
	// End Line: 185

	/* begin block 4 */
		// Start line: 186
	/* end block 4 */
	// End Line: 187

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_CreatePlayerViews__Fv(void)

{
  if (GameSetup_gData.commMode == 1) {
    Draw_gPlayer1View = Draw_SetView__Fiiiiiiiii(0,0x100,0x140,0x100,0x140,0x78,0,1,2000);
    Draw_gPlayer2View = Draw_SetView__Fiiiiiiiii(0,0x178,0x140,0x178,0x140,0x78,0,1,2000);
  }
  else {
    Draw_gPlayer1View = Draw_SetView__Fiiiiiiiii(0,0x100,0x140,0x100,0x140,0xf0,0,1,3000);
    Draw_gPlayer2View = -1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_CreatePauseMenuViews__Fv()
 // line 140, offset 0x800b3198
	/* begin block 1 */
		// Start line: 141
		// Start offset: 0x800B3198
	/* end block 1 */
	// End offset: 0x800B3198
	// End Line: 141

	/* begin block 2 */
		// Start line: 273
	/* end block 2 */
	// End Line: 274

	/* begin block 3 */
		// Start line: 289
	/* end block 3 */
	// End Line: 290

	/* begin block 4 */
		// Start line: 289
	/* end block 4 */
	// End Line: 290

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_CreatePauseMenuViews__Fv(void)

{
  Render_gPauseMenuView = Draw_SetView__Fiiiiiiiii(0,0x100,0x140,0x100,0x140,0xf0,0,0,1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_CreateViews__Fv()
 // line 151, offset 0x800b31e4
	/* begin block 1 */
		// Start line: 152
		// Start offset: 0x800B31E4
	/* end block 1 */
	// End offset: 0x800B31E4
	// End Line: 152

	/* begin block 2 */
		// Start line: 310
	/* end block 2 */
	// End Line: 311

	/* begin block 3 */
		// Start line: 316
	/* end block 3 */
	// End Line: 317

	/* begin block 4 */
		// Start line: 316
	/* end block 4 */
	// End Line: 317

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_CreateViews__Fv(void)

{
  Draw_InitViews__Fv();
  Render_CreatePlayerViews__Fv();
  Hud_CreateHudViews__Fv();
  Render_CreatePauseMenuViews__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_StartRenderingWorldView__Fi(int viewid /*$s1*/)
 // line 169, offset 0x800b321c
	/* begin block 1 */
		// Start line: 170
		// Start offset: 0x800B321C
	/* end block 1 */
	// End offset: 0x800B321C
	// End Line: 170

	/* begin block 2 */
		// Start line: 346
	/* end block 2 */
	// End Line: 347

	/* begin block 3 */
		// Start line: 352
	/* end block 3 */
	// End Line: 353

	/* begin block 4 */
		// Start line: 352
	/* end block 4 */
	// End Line: 353

void Render_StartRenderingWorldView__Fi(int viewid)

{
  Camera_SetCamera__FP13DRender_tView(&gCView);
  Track_AnimateTrackLighting__Fv();
  Draw_StartRenderingView__Fi(viewid);
  DAT_1f80000c = GameSetup_gData.mirrorTrack;
  Fog_Update__Fi(gCView.player);
  DrawC_SetEnviroment__Fv();
  TrsProj_ResetTransPrecision__Fv();
  Night_SetEnviroment__FP13DRender_tView(&gCView);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_StopRenderingWorldView__Fi(int viewid /*$a0*/)
 // line 215, offset 0x800b3298
	/* begin block 1 */
		// Start line: 216
		// Start offset: 0x800B3298
	/* end block 1 */
	// End offset: 0x800B3298
	// End Line: 216

	/* begin block 2 */
		// Start line: 446
	/* end block 2 */
	// End Line: 447

	/* begin block 3 */
		// Start line: 452
	/* end block 3 */
	// End Line: 453

	/* begin block 4 */
		// Start line: 452
	/* end block 4 */
	// End Line: 453

void Render_StopRenderingWorldView__Fi(int viewid)

{
  Draw_StopRenderingView__Fi(viewid);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_RenderWorld__FP13DRender_tView(struct DRender_tView *Vi /*$s0*/)
 // line 223, offset 0x800b32b8
	/* begin block 1 */
		// Start line: 224
		// Start offset: 0x800B32B8
		// Variables:
	// 		int savesp; // $s1
	/* end block 1 */
	// End offset: 0x800B32B8
	// End Line: 224

	/* begin block 2 */
		// Start line: 462
	/* end block 2 */
	// End Line: 463

	/* begin block 3 */
		// Start line: 468
	/* end block 3 */
	// End Line: 469

	/* begin block 4 */
		// Start line: 468
	/* end block 4 */
	// End Line: 469

void Render_RenderWorld__FP13DRender_tView(DRender_tView *Vi)

{
  BWorld_OnyxBuildFacets__FP13DRender_tView(Vi);
  SetSp();
  Skidmark_OnyxBuildFacets__FP13DRender_tView(Vi);
  SetSp();
  SetSp();
  Souffle_InsertFacet__FP13DRender_tView(Vi);
  SetSp();
  R3DCar_InsertAllListFacet__FP13DRender_tView(Vi);
  Hrz_BuildHorizon__FP13DRender_tView(Vi);
  SetSp();
  Weather_BuildWeather__FP13DRender_tView(Vi);
  SetSp();
  Render_InsertDepthOfField__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_RenderPlayerView__Fii(int ViewID /*$s1*/, int Player /*$a1*/)
 // line 270, offset 0x800b335c
	/* begin block 1 */
		// Start line: 271
		// Start offset: 0x800B335C
	/* end block 1 */
	// End offset: 0x800B335C
	// End Line: 271

	/* begin block 2 */
		// Start line: 547
	/* end block 2 */
	// End Line: 548

	/* begin block 3 */
		// Start line: 562
	/* end block 3 */
	// End Line: 563

	/* begin block 4 */
		// Start line: 562
	/* end block 4 */
	// End Line: 563

void Render_RenderPlayerView__Fii(int ViewID,int Player)

{
  gCView.id = ViewID;
  gCView.player = Player;
  Render_StartRenderingWorldView__Fi(ViewID);
  Render_RenderWorld__FP13DRender_tView(&gCView);
  Render_StopRenderingWorldView__Fi(ViewID);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_RenderDebugView__Fv()
 // line 332, offset 0x800b33a8
	/* begin block 1 */
		// Start line: 333
		// Start offset: 0x800B33A8
	/* end block 1 */
	// End offset: 0x800B33A8
	// End Line: 333

	/* begin block 2 */
		// Start line: 636
	/* end block 2 */
	// End Line: 637

	/* begin block 3 */
		// Start line: 688
	/* end block 3 */
	// End Line: 689

	/* begin block 4 */
		// Start line: 688
	/* end block 4 */
	// End Line: 689

	/* begin block 5 */
		// Start line: 710
	/* end block 5 */
	// End Line: 711

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_RenderDebugView__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_StartFrameRender__Fv()
 // line 359, offset 0x800b33b0
	/* begin block 1 */
		// Start line: 360
		// Start offset: 0x800B33B0
	/* end block 1 */
	// End offset: 0x800B33B0
	// End Line: 360

	/* begin block 2 */
		// Start line: 737
	/* end block 2 */
	// End Line: 738

	/* begin block 3 */
		// Start line: 742
	/* end block 3 */
	// End Line: 743

	/* begin block 4 */
		// Start line: 742
	/* end block 4 */
	// End Line: 743

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_StartFrameRender__Fv(void)

{
  BWorld_StartLoop__Fv();
  Track_AnimateTextures__Fv();
  Souffle_DoSouffle__Fv();
  Draw_CheckFirstFrameRender__Fv();
  Draw_StartFrameRender__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_StopFrameRender__Fv()
 // line 375, offset 0x800b33f0
	/* begin block 1 */
		// Start line: 376
		// Start offset: 0x800B33F0
	/* end block 1 */
	// End offset: 0x800B33F0
	// End Line: 376

	/* begin block 2 */
		// Start line: 770
	/* end block 2 */
	// End Line: 771

	/* begin block 3 */
		// Start line: 774
	/* end block 3 */
	// End Line: 775

	/* begin block 4 */
		// Start line: 774
	/* end block 4 */
	// End Line: 775

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_StopFrameRender__Fv(void)

{
  Draw_StopFrameRender__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_InitPauseMenu__Fv()
 // line 387, offset 0x800b3410
	/* begin block 1 */
		// Start line: 388
		// Start offset: 0x800B3410
	/* end block 1 */
	// End offset: 0x800B3410
	// End Line: 388

	/* begin block 2 */
		// Start line: 790
	/* end block 2 */
	// End Line: 791

	/* begin block 3 */
		// Start line: 798
	/* end block 3 */
	// End Line: 799

	/* begin block 4 */
		// Start line: 798
	/* end block 4 */
	// End Line: 799

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_InitPauseMenu__Fv(void)

{
  MPause_InitMPause__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_RenderPauseMenuView__Fv()
 // line 393, offset 0x800b3430
	/* begin block 1 */
		// Start line: 394
		// Start offset: 0x800B3430
		// Variables:
	// 		int ogFlip; // $s0
	/* end block 1 */
	// End offset: 0x800B3430
	// End Line: 394

	/* begin block 2 */
		// Start line: 806
	/* end block 2 */
	// End Line: 807

	/* begin block 3 */
		// Start line: 810
	/* end block 3 */
	// End Line: 811

	/* begin block 4 */
		// Start line: 810
	/* end block 4 */
	// End Line: 811

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_RenderPauseMenuView__Fv(void)

{
  int iVar1;
  
  gCView.id = Render_gPauseMenuView;
  Draw_StartRenderingView__Fi(Render_gPauseMenuView);
  MPause_Render__Fv();
  iVar1 = gFlip;
  gFlip = 0;
  Draw_StopRenderingView__Fi(Render_gPauseMenuView);
  gFlip = iVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_KillPauseMenu__Fv()
 // line 411, offset 0x800b3488
	/* begin block 1 */
		// Start line: 412
		// Start offset: 0x800B3488
	/* end block 1 */
	// End offset: 0x800B3488
	// End Line: 412

	/* begin block 2 */
		// Start line: 848
	/* end block 2 */
	// End Line: 849

	/* begin block 3 */
		// Start line: 852
	/* end block 3 */
	// End Line: 853

	/* begin block 4 */
		// Start line: 852
	/* end block 4 */
	// End Line: 853

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_KillPauseMenu__Fv(void)

{
  MPause_KillMPause__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_Render__Fi(int pause /*$a0*/)
 // line 417, offset 0x800b34a8
	/* begin block 1 */
		// Start line: 418
		// Start offset: 0x800B34A8
	/* end block 1 */
	// End offset: 0x800B35D8
	// End Line: 526

	/* begin block 2 */
		// Start line: 860
	/* end block 2 */
	// End Line: 861

	/* begin block 3 */
		// Start line: 864
	/* end block 3 */
	// End Line: 865

	/* begin block 4 */
		// Start line: 864
	/* end block 4 */
	// End Line: 865

void Render_Render__Fi(int pause)

{
  bool bVar1;
  int ViewID;
  
  if (pause == 0) {
    if (gPauseRender == 0) {
      bVar1 = GameSetup_gData.commMode != 1;
      if (bVar1) {
        Render_StartFrameRender__Fv();
        ViewID = Draw_gPlayer1View;
      }
      else {
        Render_StartFrameRender__Fv();
        Render_RenderPlayerView__Fii(Draw_gPlayer1View,0);
        ViewID = Draw_gPlayer2View;
      }
      Render_RenderPlayerView__Fii(ViewID,(uint)!bVar1);
      Hud_Render__Fv();
      Render_RenderDebugView__Fv();
      Render_StopFrameRender__Fv();
    }
    else {
      gPauseRender = 0;
    }
  }
  else {
    if (gPauseRender == 0) {
      gPauseMenuRect.w = 0x140;
      gPauseRender = 1;
      gPauseMenuRect.x = 0;
      gPauseMenuRect.y = 0;
      gPauseMenuRect.h = 0xf0;
      DrawSync(0);
      RPause_CopyBackToFrontBuffer__Fv();
      MPause_StartPauseMenu__Fv();
      gMPauseUpdate = &DAT_00000001;
      gMPauseUpdateNextTime = (void *)0x0;
    }
    gPauseMenuRect.x = 0x4e;
    gPauseMenuRect.y = 0x62;
    gPauseMenuRect.w = 0xa4;
    gPauseMenuRect.h = 0x8b;
    if (gMPauseUpdate != (void *)0x0) {
      RPause_StartPauseMenu__Fv();
      Render_RenderPauseMenuView__Fv();
      RPause_StopPauseMenu__Fv();
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FlareThing__Fv()
 // line 535, offset 0x800b35e8
	/* begin block 1 */
		// Start line: 536
		// Start offset: 0x800B35E8
		// Variables:
	// 		int players; // $s4

		/* begin block 1.1 */
			// Start line: 543
			// Start offset: 0x800B3624
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 543
				// Start offset: 0x800B3644

				/* begin block 1.1.1.1 */
					// Start line: 545
					// Start offset: 0x800B3650

					/* begin block 1.1.1.1.1 */
						// Start line: 546
						// Start offset: 0x800B3660
						// Variables:
					// 		struct RECT rec; // stack offset -48
					/* end block 1.1.1.1.1 */
					// End offset: 0x800B36B8
					// End Line: 554
				/* end block 1.1.1.1 */
				// End offset: 0x800B36B8
				// End Line: 554
			/* end block 1.1.1 */
			// End offset: 0x800B36B8
			// End Line: 554
		/* end block 1.1 */
		// End offset: 0x800B36C8
		// End Line: 556
	/* end block 1 */
	// End offset: 0x800B36C8
	// End Line: 556

	/* begin block 2 */
		// Start line: 1101
	/* end block 2 */
	// End Line: 1102

	/* begin block 3 */
		// Start line: 1111
	/* end block 3 */
	// End Line: 1112

	/* begin block 4 */
		// Start line: 1111
	/* end block 4 */
	// End Line: 1112

	/* begin block 5 */
		// Start line: 1115
	/* end block 5 */
	// End Line: 1116

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FlareThing__Fv(void)

{
  FLARE_DEF *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_30;
  short local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  iVar4 = 1;
  if (GameSetup_gData.commMode == 1) {
    iVar4 = 2;
  }
  iVar2 = 0;
  pFVar1 = &gFlare_LensFlare;
  iVar3 = -0x7fedfd78;
  while (iVar2 < iVar4) {
    if (gFlare_LensFlare.isDrawn[iVar2] != '\0') {
      local_30 = (&gEnviro)[gFlip].disp.disp.x + pFVar1->oldpos[0].vx + -2;
      local_2c = 5;
      local_2a = 5;
      local_2e = (&gEnviro)[gFlip].disp.disp.y + pFVar1->oldpos[0].vy + -2;
      StoreImage(&local_30,iVar3);
      gFlare_LensFlare.isDrawn[iVar2] = '\0';
    }
    iVar3 = iVar3 + 0x32;
    pFVar1 = (FLARE_DEF *)(pFVar1->pos + 1);
    iVar2 = iVar2 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_InitTrackRender__Fv()
 // line 563, offset 0x800b36f4
	/* begin block 1 */
		// Start line: 564
		// Start offset: 0x800B36F4
	/* end block 1 */
	// End offset: 0x800B36F4
	// End Line: 564

	/* begin block 2 */
		// Start line: 1171
	/* end block 2 */
	// End Line: 1172

	/* begin block 3 */
		// Start line: 1179
	/* end block 3 */
	// End Line: 1180

	/* begin block 4 */
		// Start line: 1179
	/* end block 4 */
	// End Line: 1180

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_InitTrackRender__Fv(void)

{
  TrackSpec_Load__Fii(GameSetup_gData.Weather,GameSetup_gData.Time);
  Render_CreateViews__Fv();
  Draw_InitRenderEngine__Fiiiiii(0x140,0x100,0,0x100,0x140,0xf0);
  DrawC_BuildRenderingData__Fv();
  Texture_InitTrackTexture__Fv();
  GenericPMX_LoadTexture__Fv();
  Souffle_InitTrackSouffle__Fv();
  Skidmark_InitSkidmark__Fv();
  TrgSfx_InitTrgSfx__Fv();
  DashHUD_InitHUD__Fv();
  Loading_UpdateLoadingScreen__Fi(3);
  Fog_InitFogTriggers__Fv();
  Draw_SetDrawSyncCallback__FPFv_v(FlareThing__Fv);
  Render_InitBlurMode__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_RestartTrackRender__Fv()
 // line 600, offset 0x800b37ac
	/* begin block 1 */
		// Start line: 601
		// Start offset: 0x800B37AC
	/* end block 1 */
	// End offset: 0x800B37AC
	// End Line: 601

	/* begin block 2 */
		// Start line: 1251
	/* end block 2 */
	// End Line: 1252

	/* begin block 3 */
		// Start line: 1255
	/* end block 3 */
	// End Line: 1256

	/* begin block 4 */
		// Start line: 1255
	/* end block 4 */
	// End Line: 1256

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_RestartTrackRender__Fv(void)

{
  Draw_RestartRenderEngine__Fv();
  DepthCue_Init__Fv();
  Night_RestartNightDriving__Fv();
  Skidmark_RestartSkidmark__Fv();
  Souffle_RestartTrackSouffle__Fv();
  TrgSfx_RestartTrgSfx__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_InitTrackRenderPostSim__Fv()
 // line 612, offset 0x800b37f4
	/* begin block 1 */
		// Start line: 613
		// Start offset: 0x800B37F4
	/* end block 1 */
	// End offset: 0x800B37F4
	// End Line: 613

	/* begin block 2 */
		// Start line: 1275
	/* end block 2 */
	// End Line: 1276

	/* begin block 3 */
		// Start line: 1279
	/* end block 3 */
	// End Line: 1280

	/* begin block 4 */
		// Start line: 1279
	/* end block 4 */
	// End Line: 1280

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_InitTrackRenderPostSim__Fv(void)

{
  gPauseRender = 0;
  Texture_DeInitPaletteSharing__Fv();
  CV_InitColorVertices__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_KillTrackRender__Fv()
 // line 624, offset 0x800b3820
	/* begin block 1 */
		// Start line: 625
		// Start offset: 0x800B3820
	/* end block 1 */
	// End offset: 0x800B3820
	// End Line: 625

	/* begin block 2 */
		// Start line: 1298
	/* end block 2 */
	// End Line: 1299

	/* begin block 3 */
		// Start line: 1303
	/* end block 3 */
	// End Line: 1304

	/* begin block 4 */
		// Start line: 1303
	/* end block 4 */
	// End Line: 1304

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_KillTrackRender__Fv(void)

{
  Draw_DeInitRenderEngine__Fv();
  DrawC_KillRenderingData__Fv();
  Night_KillNightDriving__Fv();
  Texture_KillTrackTexture__Fv();
  Souffle_KillTrackSouffle__Fv();
  Skidmark_KillSkidmark__Fv();
  TrgSfx_KillTrgSfx__Fv();
  DashHUD_KillHUD__Fv();
  Draw_SetDrawSyncCallback__FPFv_v((TDRFuncPtr_Draw_SetDrawSyncCallback__FPFv_v0p)0x0);
  Fog_DeInitFogTriggers__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_InitLibRender__Fv()
 // line 640, offset 0x800b3888
	/* begin block 1 */
		// Start line: 641
		// Start offset: 0x800B3888
	/* end block 1 */
	// End offset: 0x800B3888
	// End Line: 641

	/* begin block 2 */
		// Start line: 1329
	/* end block 2 */
	// End Line: 1330

	/* begin block 3 */
		// Start line: 1335
	/* end block 3 */
	// End Line: 1336

	/* begin block 4 */
		// Start line: 1335
	/* end block 4 */
	// End Line: 1336

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_InitLibRender__Fv(void)

{
  Draw_InitLibRender__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StampImage__Fii(int xo /*$a0*/, int depth /*$a1*/)
 // line 711, offset 0x800b38a8
	/* begin block 1 */
		// Start line: 712
		// Start offset: 0x800B38A8
		// Variables:
	// 		struct POLY_FT4 *ft4_p; // $a2
	// 		int frame; // $t5

		/* begin block 1.1 */
			// Start line: 733
			// Start offset: 0x800B38F4
			// Variables:
		// 		int i; // $t0
		/* end block 1.1 */
		// End offset: 0x800B39FC
		// End Line: 770
	/* end block 1 */
	// End offset: 0x800B39FC
	// End Line: 770

	/* begin block 2 */
		// Start line: 1357
	/* end block 2 */
	// End Line: 1358

	/* begin block 3 */
		// Start line: 1472
	/* end block 3 */
	// End Line: 1473

	/* begin block 4 */
		// Start line: 1472
	/* end block 4 */
	// End Line: 1473

	/* begin block 5 */
		// Start line: 1476
	/* end block 5 */
	// End Line: 1477

void StampImage__Fii(int xo,int depth)

{
  short sVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = gFlip;
  if ((Render_gBlurEffectMode & 2U) == 0) {
    iVar7 = 1 - gFlip;
  }
  uVar5 = 0;
  if ((Render_gBlurEffectMode & 4U) == 0) {
    xo = 0;
  }
  uVar6 = 0x140;
  do {
    puVar2 = DAT_1f800004;
    puVar4 = (uint *)(depth * 4 + DAT_1f800000);
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *puVar4 & 0xffffff;
    uVar3 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 10;
    *puVar4 = *puVar4 & 0xff000000 | uVar3;
    *(undefined *)((int)puVar2 + 3) = 9;
    *(undefined *)((int)puVar2 + 7) = 0x2e;
    sVar1 = (short)xo;
    *(short *)(puVar2 + 4) = sVar1 + 0x40;
    *(short *)(puVar2 + 8) = sVar1 + 0x40;
    *(undefined *)(puVar2 + 3) = 0;
    *(undefined *)((int)puVar2 + 0xd) = 0;
    *(undefined *)(puVar2 + 5) = 0x40;
    *(undefined *)((int)puVar2 + 0x15) = 0;
    *(undefined *)(puVar2 + 7) = 0;
    *(undefined *)((int)puVar2 + 0x1d) = 0xf0;
    *(undefined *)(puVar2 + 9) = 0x40;
    *(undefined *)((int)puVar2 + 0x25) = 0xf0;
    *(short *)(puVar2 + 2) = sVar1;
    *(undefined2 *)((int)puVar2 + 10) = 0;
    *(undefined2 *)((int)puVar2 + 0x12) = 0;
    *(short *)(puVar2 + 6) = sVar1;
    *(undefined2 *)((int)puVar2 + 0x1a) = 0xf0;
    *(undefined2 *)((int)puVar2 + 0x22) = 0xf0;
    *(undefined *)(puVar2 + 1) = 0x80;
    *(undefined *)((int)puVar2 + 5) = 0x80;
    *(undefined *)((int)puVar2 + 6) = 0x80;
    if (iVar7 == 0) {
      uVar3 = uVar6 & 0x3ff;
    }
    else {
      uVar3 = (uVar5 & 0xf) << 6;
    }
    *(ushort *)((int)puVar2 + 0x16) = (ushort)((int)uVar3 >> 6) | 0x110;
    uVar6 = uVar6 + 0x40;
    uVar5 = uVar5 + 1;
    xo = xo + 0x40;
  } while ((int)uVar5 < 5);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_InitBlurMode__Fv()
 // line 773, offset 0x800b3a04
	/* begin block 1 */
		// Start line: 774
		// Start offset: 0x800B3A04
	/* end block 1 */
	// End offset: 0x800B3A64
	// End Line: 786

	/* begin block 2 */
		// Start line: 1595
	/* end block 2 */
	// End Line: 1596

	/* begin block 3 */
		// Start line: 1599
	/* end block 3 */
	// End Line: 1600

	/* begin block 4 */
		// Start line: 1599
	/* end block 4 */
	// End Line: 1600

	/* begin block 5 */
		// Start line: 1600
	/* end block 5 */
	// End Line: 1601

	/* begin block 6 */
		// Start line: 1600
	/* end block 6 */
	// End Line: 1601

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_InitBlurMode__Fv(void)

{
  if (GameSetup_gData.sgge == 0x20) {
    Render_gBlurEffectMode = 0x1b;
    return;
  }
  if (GameSetup_gData.sgge < 0x21) {
    if (GameSetup_gData.sgge != 0x10) {
      return;
    }
    Render_gBlurEffectMode = 0xb;
    return;
  }
  if (GameSetup_gData.sgge != 0x40) {
    return;
  }
  Render_gBlurEffectMode = 0x1f;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Render_InsertDepthOfField__Fv()
 // line 790, offset 0x800b3a6c
	/* begin block 1 */
		// Start line: 791
		// Start offset: 0x800B3A6C

		/* begin block 1.1 */
			// Start line: 813
			// Start offset: 0x800B3AC8
			// Variables:
		// 		struct POLY_F4 *prim; // $a2
		/* end block 1.1 */
		// End offset: 0x800B3AC8
		// End Line: 817

		/* begin block 1.2 */
			// Start line: 817
			// Start offset: 0x800B3AC8
			// Variables:
		// 		struct DR_STP *stp_prim; // $a0
		/* end block 1.2 */
		// End offset: 0x800B3AC8
		// End Line: 817

		/* begin block 1.3 */
			// Start line: 817
			// Start offset: 0x800B3AC8
			// Variables:
		// 		struct DR_MODE *dr_mode; // $s0
		/* end block 1.3 */
		// End offset: 0x800B3C30
		// End Line: 835
	/* end block 1 */
	// End offset: 0x800B3C30
	// End Line: 835

	/* begin block 2 */
		// Start line: 1628
	/* end block 2 */
	// End Line: 1629

	/* begin block 3 */
		// Start line: 1633
	/* end block 3 */
	// End Line: 1634

	/* begin block 4 */
		// Start line: 1633
	/* end block 4 */
	// End Line: 1634

	/* begin block 5 */
		// Start line: 1646
	/* end block 5 */
	// End Line: 1647

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Render_InsertDepthOfField__Fv(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if ((Render_gBlurEffectMode & 1U) != 0) {
    if ((Render_gBlurEffectMode & 8U) != 0) {
      StampImage__Fii(1,Render_gBlurEffectDepth1);
    }
    if ((Render_gBlurEffectMode & 0x10U) != 0) {
      StampImage__Fii(2,Render_gBlurEffectDepth2);
    }
    puVar3 = DAT_1f800004;
    puVar2 = (uint *)(Render_gBlurEffectDepth1 * 4 + DAT_1f800000);
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *puVar2 & 0xffffff;
    uVar1 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 6;
    *puVar2 = *puVar2 & 0xff000000 | uVar1;
    *(undefined *)((int)puVar3 + 3) = 5;
    *(undefined *)((int)puVar3 + 7) = 0x2a;
    *(undefined2 *)(puVar3 + 2) = 0;
    *(undefined2 *)((int)puVar3 + 10) = 0;
    *(undefined2 *)(puVar3 + 3) = 0x140;
    *(undefined2 *)((int)puVar3 + 0xe) = 0;
    *(undefined2 *)(puVar3 + 4) = 0;
    *(undefined *)(puVar3 + 1) = 0;
    *(undefined *)((int)puVar3 + 5) = 0;
    *(undefined *)((int)puVar3 + 6) = 0;
    puVar2 = DAT_1f800004;
    *(undefined2 *)((int)puVar3 + 0x12) = 0xf0;
    *(undefined2 *)(puVar3 + 5) = 0x140;
    *(undefined2 *)((int)puVar3 + 0x16) = 0xf0;
    puVar3 = (uint *)(Render_gBlurEffectDepth1 * 4 + DAT_1f800000);
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *puVar3 & 0xffffff;
    uVar1 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 3;
    *puVar3 = *puVar3 & 0xff000000 | uVar1;
    SetDrawStp((int)puVar2,1);
    puVar3 = DAT_1f800004;
    puVar2 = (uint *)(Render_gBlurEffectDepth1 * 4 + DAT_1f800000);
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *puVar2 & 0xffffff;
    uVar1 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 3;
    *puVar2 = *puVar2 & 0xff000000 | uVar1;
    uVar1 = GetTPage(2,1,0,0x100);
    SetDrawMode((int)puVar3,0,0,uVar1 & 0xffff,(byte *)0x0);
  }
  return;
}





