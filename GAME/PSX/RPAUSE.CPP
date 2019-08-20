#include "NFS4.H"
#include "RPAUSE.H"

// decompiled code
// original method signature: 
// void /*$ra*/ RPause_CopyBackToFrontBuffer__Fv()
 // line 25, offset 0x800dcec4
	/* begin block 1 */
		// Start line: 26
		// Start offset: 0x800DCEC4
		// Variables:
	// 		struct RECT rscreen; // stack offset -16
	// 		struct DRAWENV *drawenv; // $v0
	/* end block 1 */
	// End offset: 0x800DCEC4
	// End Line: 26

/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void RPause_CopyBackToFrontBuffer__Fv(void)

{
  DRAWENV *pDVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  pDVar1 = Draw_GetDRAWENV__Fii(Draw_gPlayer1View,1);
  local_10._0_2_ = (short)*(undefined4 *)&pDVar1->clip;
  local_c = CONCAT22(gPauseMenuRect.h,gPauseMenuRect.w);
  local_10 = CONCAT22((short)((uint)*(undefined4 *)&pDVar1->clip >> 0x10) + gPauseMenuRect.y,
                      (short)local_10 + gPauseMenuRect.x);
  pDVar1 = Draw_GetDRAWENV__Fii(Draw_gPlayer1View,0);
  MoveImage(&local_10,(int)(pDVar1->clip).x + (int)gPauseMenuRect.x,
            (int)(pDVar1->clip).y + (int)gPauseMenuRect.y);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RPause_StartPauseMenu__Fv()
 // line 46, offset 0x800dcf84
	/* begin block 1 */
		// Start line: 47
		// Start offset: 0x800DCF84
	/* end block 1 */
	// End offset: 0x800DCF84
	// End Line: 47

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RPause_StartPauseMenu__Fv(void)

{
  Draw_StartFrameRender__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RPause_StopPauseMenu__Fv()
 // line 52, offset 0x800dcfa4
	/* begin block 1 */
		// Start line: 53
		// Start offset: 0x800DCFA4
	/* end block 1 */
	// End offset: 0x800DCFA4
	// End Line: 53

/* WARNING: Unknown calling convention yet parameter storage is locked */

void RPause_StopPauseMenu__Fv(void)

{
  PutDispEnv((ushort *)&dflip_8011f43c);
  DrawSync(0);
  VSync(0);
  RPause_CopyBackToFrontBuffer__Fv();
  DrawOTag((&Draw_gView)[Render_gPauseMenuView].ot[gFlip] +
           (&Draw_gView)[Render_gPauseMenuView].otsize * 4 + -4);
  systemtask(0);
  gFlip = 1 - gFlip;
  return;
}




