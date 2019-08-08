#include "NFS4.H"
#include "HUD.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Hud_CreateHudViews__Fv()
 // line 273, offset 0x800d1a80
	/* begin block 1 */
		// Start line: 274
		// Start offset: 0x800D1A80

		/* begin block 1.1 */
			// Start line: 274
			// Start offset: 0x800D1A80
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x800D1AE4
		// End Line: 284
	/* end block 1 */
	// End offset: 0x800D1D1C
	// End Line: 376

void Hud_CreateHudViews__Fv(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  Hud_InitTables__Fv();
  puVar2 = &GameSetup_gData;
  iGp000013f0 = 0;
  iVar1 = 0;
  if (false) {
    do {
      if ((puVar2[0xf6] & 0x40) != 0) {
        iGp000013f0 = 1;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x2d;
    } while (iVar1 < 0);
  }
  if (true) {
    if ((false) || (iGp000013f0 != 0)) {
      iGp00001420 = 8;
    }
    else {
      iGp00001420 = 0;
    }
  }
  else {
    iGp00001420 = -6;
  }
  if (DAT_801131f8 == 1) {
    iGp0000140c = Draw_SetView__Fiiiiiiiii
                            (0x105,iGp00001420 + 0x13e,0x245,iGp00001420 + 0x13e,0x2d,0x30,0,0,1);
    iGp00001410 = Draw_SetView__Fiiiiiiiii
                            (0x105,iGp00001420 + 0x1a9,0x245,iGp00001420 + 0x1a9,0x2d,0x30,0,0,1);
    iGp00001404 = Draw_SetView__Fiiiiiiiii(0,0x100,0x140,0x100,0x140,0x78,0,0,1);
    iGp00001408 = Draw_SetView__Fiiiiiiiii(0,0x178,0x140,0x178,0x140,0x78,0,0,1);
    iGp00001414 = Draw_SetView__Fiiiiiiiii(0x115,0x113,0x255,0x113,0x1c,0x1c,0,0,1);
    iGp00001418 = Draw_SetView__Fiiiiiiiii(0x115,0x17c,0x255,0x17c,0x1c,0x1c,0,0,1);
  }
  else {
    iGp0000140c = Draw_SetView__Fiiiiiiiii
                            (0xff,iGp00001420 + 0x1a4,0x23f,iGp00001420 + 0x1a4,0x2d,0x30,0,0,1);
    iGp00001404 = Draw_SetView__Fiiiiiiiii(0,0x100,0x140,0x100,0x140,0xf0,0,0,1);
    iGp00001414 = Draw_SetView__Fiiiiiiiii(0xb8,0x115,0x1f8,0x115,0x1c,0x1c,0,0,1);
  }
  iGp0000141c = Draw_SetView__Fiiiiiiiii(0,0x100,0x140,0x100,0x140,0xf0,0,0,1);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_GoTpage__Fi(int page /*$a0*/)
 // line 380, offset 0x800d1d6c
	/* begin block 1 */
		// Start line: 381
		// Start offset: 0x800D1D6C
		// Variables:
	// 		struct DR_MODE *prim; // $a2
	/* end block 1 */
	// End offset: 0x800D1D6C
	// End Line: 381

void Hud_GoTpage__Fi(int page)
{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = _DAT_1f800004;
  puVar1 = _DAT_1f800000;
  *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  uVar3 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 3;
  *puVar1 = *puVar1 & 0xff000000 | uVar3;
  SetDrawMode(puVar2,0,0,(page * 0x40 + 0x80U & 0x3ff) >> 6,0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_DebugInfo__Fv()
 // line 479, offset 0x800d1dfc
	/* begin block 1 */
		// Start line: 480
		// Start offset: 0x800D1DFC
		// Variables:
	// 		char string[20]; // stack offset -40
	// 		int b; // $s0
	// 		int t; // $v0
	/* end block 1 */
	// End offset: 0x800D1DFC
	// End Line: 480

void Hud_DebugInfo__Fv(void)
{
  int iVar1;
  int iVar2;
  char acStack40 [24];
  
  sprintf(acStack40,"SLC %d",(int)*(short *)(_Cars_gList + 8));
  Font_TextXY__FPcii(acStack40,0xe6,0x2d);
  iVar1 = textpixels(acStack40);
  Hud_FBuildF4__FiiiiiUlcc(1,0xe6,0x30,iVar1 + 5,10,0x50505,0,0);
  iVar1 = AudioMus_Buffered__Fv();
  iVar2 = AudioMus_Threshold__Fv();
  sprintf(acStack40,"AUD %d.%d/%d.%d",iVar1 / 1000,(iVar1 % 1000) / 100,iVar2 / 1000,
          (iVar2 % 1000) / 100);
  Font_TextXY__FPcii(acStack40,0xe6,0x23);
  iVar1 = textpixels(acStack40);
  Hud_FBuildF4__FiiiiiUlcc(1,0xe6,0x26,iVar1 + 5,10,0x50505,0,0);
  CopSpeak_Debug__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_DebugCrap__Fv()
 // line 536, offset 0x800d1f90
	/* begin block 1 */
		// Start line: 537
		// Start offset: 0x800D1F90
	/* end block 1 */
	// End offset: 0x800D1F90
	// End Line: 537

void Hud_DebugCrap__Fv(void)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildSprite__FP4SPRTiiiUli(struct SPRT *sprt /*$s3*/, int shapeIdx /*$a1*/, int x /*$s4*/, int y /*$s2*/, unsigned long color /*stack 16*/, int trans /*stack 20*/)
 // line 556, offset 0x800d1f98
	/* begin block 1 */
		// Start line: 557
		// Start offset: 0x800D1F98
		// Variables:
	// 		struct HudPmx_tShape *shape; // $s0
	/* end block 1 */
	// End offset: 0x800D1F98
	// End Line: 557

void Hud_BuildSprite__FP4SPRTiiiUli(SPRT *sprt,int shapeIdx,int x,int y,ulong color,int trans)
{
  shapeIdx = shapeIdx * 0x14;
  SetSemiTrans(sprt,trans);
  *(undefined *)((int)&sprt->tag + 3) = 4;
  *(ulong *)&sprt->r0 = color | 0x66000000;
  *(int *)&sprt->x0 = y << 0x10 | x;
  *(undefined4 *)&sprt->u0 = *(undefined4 *)(&HudPmx_gShapes + shapeIdx);
  *(int *)&sprt->w =
       (int)*(short *)(&DAT_80110caa + shapeIdx) << 0x10 | (int)*(short *)(&DAT_80110ca8 + shapeIdx)
  ;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildSprite2__FP4SPRTiii(struct SPRT *sprt /*$a0*/, int shapeIdx /*$a1*/, int x /*$a2*/, int y /*$a3*/)
 // line 573, offset 0x800d2044
	/* begin block 1 */
		// Start line: 574
		// Start offset: 0x800D2044
	/* end block 1 */
	// End offset: 0x800D2044
	// End Line: 574

void Hud_BuildSprite2__FP4SPRTiii(SPRT *sprt,int shapeIdx,int x,int y)
{
  Hud_BuildSprite__FP4SPRTiiiUli(sprt,shapeIdx,x,y,0,0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_FBuildSprite__FiiiUli(int shapeIdx /*$t3*/, int x /*$t4*/, int y /*$t5*/, unsigned long color /*$a3*/, int trans /*stack 16*/)
 // line 579, offset 0x800d2070
	/* begin block 1 */
		// Start line: 580
		// Start offset: 0x800D2070
		// Variables:
	// 		struct SPRT *prim; // $a0
	/* end block 1 */
	// End offset: 0x800D2070
	// End Line: 580

void Hud_FBuildSprite__FiiiUli(int shapeIdx,int x,int y,ulong color,int trans)
{
  uint *puVar1;
  SPRT *sprt;
  uint uVar2;
  
  sprt = _DAT_1f800004;
  puVar1 = _DAT_1f800000;
  _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  uVar2 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 1;
  *puVar1 = *puVar1 & 0xff000000 | uVar2;
  Hud_BuildSprite__FP4SPRTiiiUli(sprt,shapeIdx,x,y,color,trans);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildSpriteFromFont__FP4SPRTcii(struct SPRT *sprt /*$s1*/, char ch /*$a1*/, int x /*$s2*/, int y /*$s0*/)
 // line 586, offset 0x800d2104
	/* begin block 1 */
		// Start line: 587
		// Start offset: 0x800D2104
		// Variables:
	// 		int u; // stack offset -40
	// 		int v; // stack offset -36
	// 		int w; // stack offset -32
	// 		int h; // stack offset -28
	// 		int yo; // stack offset -24
	/* end block 1 */
	// End offset: 0x800D2104
	// End Line: 587

void Hud_BuildSpriteFromFont__FP4SPRTcii(SPRT *sprt,char ch,int x,int y)
{
  uchar local_28 [4];
  uchar local_24 [4];
  short local_20 [2];
  short local_1c [2];
  int local_18 [2];
  
  Font_GetUVWH__FcPiN41(ch,(int *)local_28,(int *)local_24,(int *)local_20,(int *)local_1c,local_18)
  ;
  *(undefined *)((int)&sprt->tag + 3) = 4;
  *(undefined4 *)&sprt->r0 = 0x66000000;
  *(int *)&sprt->x0 = (y + local_18[0]) * 0x10000 | x;
  sprt->u0 = local_28[0];
  sprt->v0 = local_24[0];
  sprt->clut = 0;
  sprt->w = local_20[0];
  sprt->h = local_1c[0];
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildF3__FP7POLY_F3P13HudPmx_tShapeiiUl(struct POLY_F3 *prim /*$s2*/, struct HudPmx_tShape *shape /*$s3*/, int x /*$s1*/, int y /*$s0*/, unsigned long color /*stack 16*/)
 // line 620, offset 0x800d21c4
	/* begin block 1 */
		// Start line: 621
		// Start offset: 0x800D21C4
	/* end block 1 */
	// End offset: 0x800D21C4
	// End Line: 621

void Hud_BuildF3__FP7POLY_F3P13HudPmx_tShapeiiUl( (POLY_F3 *prim,HudPmx_tShape *shape,int x,int y,ulong color)
{
  uint uVar1;
  
  *(ulong *)&prim->r0 = color;
  SetPolyF3();
  *(int *)&prim->x0 = y << 0x10 | x;
  uVar1 = (uint)(ushort)shape->height << 0x10;
  *(int *)&prim->x1 =
       (y - ((int)(((int)uVar1 >> 0x10) + (uVar1 >> 0x1f)) >> 1)) * 0x10000 | x + (int)shape->width;
  uVar1 = (uint)(ushort)shape->height << 0x10;
  *(int *)&prim->x2 =
       (y + ((int)(((int)uVar1 >> 0x10) + (uVar1 >> 0x1f)) >> 1)) * 0x10000 | x + (int)shape->width;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl(struct POLY_GT4 *prim /*$a0*/, struct HudPmx_tShape *shape /*$a1*/, int x /*$a2*/, int y /*$a3*/, unsigned long color /*stack 16*/)
 // line 629, offset 0x800d2288
	/* begin block 1 */
		// Start line: 630
		// Start offset: 0x800D2288
	/* end block 1 */
	// End offset: 0x800D2288
	// End Line: 630

void Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl( (POLY_GT4 *prim,HudPmx_tShape *shape,int x,int y,ulong color)
{
  *(undefined *)((int)&prim->tag + 3) = 0xc;
  *(int *)&prim->x0 = y << 0x10 | x;
  *(ulong *)&prim->r0 = color | 0x3e000000;
  *(ulong *)&prim->r1 = color;
  *(ulong *)&prim->r2 = color;
  *(ulong *)&prim->r3 = color;
  *(undefined4 *)&prim->u0 = *(undefined4 *)&shape->pixmap;
  *(int *)&prim->x1 = y << 0x10 | x + (int)shape->width;
  *(undefined4 *)&prim->u1 = *(undefined4 *)&(shape->pixmap).u1;
  *(int *)&prim->x2 = (y + (int)shape->height) * 0x10000 | x;
  *(undefined4 *)&prim->u2 = *(undefined4 *)&(shape->pixmap).u2;
  *(int *)&prim->x3 = (y + (int)shape->height) * 0x10000 | x + (int)shape->width;
  *(undefined4 *)&prim->u3 = *(undefined4 *)&(shape->pixmap).u3;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli(struct POLY_FT4 *prim /*$s0*/, struct HudPmx_tShape *shape /*$s2*/, int x /*$s3*/, int y /*$s1*/, unsigned long color /*stack 16*/, int trans /*stack 20*/)
 // line 647, offset 0x800d2334
	/* begin block 1 */
		// Start line: 648
		// Start offset: 0x800D2334
	/* end block 1 */
	// End offset: 0x800D2334
	// End Line: 648

void Hud_BuildFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli( (POLY_FT4 *prim,HudPmx_tShape *shape,int x,int y,ulong color,int trans)
{
  *(ulong *)&prim->r0 = color;
  SetPolyFT4();
  SetSemiTrans(prim,trans);
  *(int *)&prim->x0 = y << 0x10 | x;
  *(undefined4 *)&prim->u0 = *(undefined4 *)&shape->pixmap;
  *(int *)&prim->x1 = y << 0x10 | x + (int)shape->width;
  *(undefined4 *)&prim->u1 = *(undefined4 *)&(shape->pixmap).u1;
  *(int *)&prim->x2 = (y + (int)shape->height) * 0x10000 | x;
  *(undefined4 *)&prim->u2 = *(undefined4 *)&(shape->pixmap).u2;
  *(int *)&prim->x3 = (y + (int)shape->height) * 0x10000 | x + (int)shape->width;
  *(undefined4 *)&prim->u3 = *(undefined4 *)&(shape->pixmap).u3;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli(struct POLY_FT4 *prim /*$s0*/, struct HudPmx_tShape *shape /*$s2*/, int x /*$s4*/, int y /*$s1*/, unsigned long color /*stack 16*/, int trans /*stack 20*/)
 // line 662, offset 0x800d2424
	/* begin block 1 */
		// Start line: 663
		// Start offset: 0x800D2424
	/* end block 1 */
	// End offset: 0x800D2424
	// End Line: 663

void Hud_BuildMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli( (POLY_FT4 *prim,HudPmx_tShape *shape,int x,int y,ulong color,int trans)
{
  undefined4 uVar1;
  
  *(ulong *)&prim->r0 = color;
  SetPolyFT4();
  SetSemiTrans(prim,trans);
  *(int *)&prim->x0 = y << 0x10 | x + (int)shape->width;
  uVar1 = *(undefined4 *)&shape->pixmap;
  *(int *)&prim->x1 = y << 0x10 | x;
  *(undefined4 *)&prim->u0 = uVar1;
  *(undefined4 *)&prim->u1 = *(undefined4 *)&(shape->pixmap).u1;
  prim->u1 = prim->u1 + -1;
  *(int *)&prim->x2 = (y + (int)shape->height) * 0x10000 | x + (int)shape->width;
  *(undefined4 *)&prim->u2 = *(undefined4 *)&(shape->pixmap).u2;
  *(int *)&prim->x3 = (y + (int)shape->height) * 0x10000 | x;
  *(undefined4 *)&prim->u3 = *(undefined4 *)&(shape->pixmap).u3;
  prim->u3 = prim->u3 + -1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildMapMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli(struct POLY_FT4 *prim /*$s0*/, struct HudPmx_tShape *shape /*$s2*/, int x /*$s4*/, int y /*$s1*/, unsigned long color /*stack 16*/, int trans /*stack 20*/)
 // line 682, offset 0x800d2528
	/* begin block 1 */
		// Start line: 683
		// Start offset: 0x800D2528
	/* end block 1 */
	// End offset: 0x800D2528
	// End Line: 683

void Hud_BuildMapMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli( (POLY_FT4 *prim,HudPmx_tShape *shape,int x,int y,ulong color,int trans)
{
  undefined4 uVar1;
  
  *(ulong *)&prim->r0 = color;
  SetPolyFT4();
  SetSemiTrans(prim,trans);
  *(int *)&prim->x0 = y << 0x10 | x + (int)shape->width;
  uVar1 = *(undefined4 *)&shape->pixmap;
  *(int *)&prim->x1 = y << 0x10 | x;
  *(undefined4 *)&prim->u0 = uVar1;
  uVar1 = *(undefined4 *)&(shape->pixmap).u1;
  prim->x1 = prim->x1 + -3;
  prim->x0 = prim->x0 + -3;
  *(undefined4 *)&prim->u1 = uVar1;
  *(int *)&prim->x2 = (y + (int)shape->height) * 0x10000 | x + (int)shape->width;
  *(undefined4 *)&prim->u2 = *(undefined4 *)&(shape->pixmap).u2;
  *(int *)&prim->x3 = (y + (int)shape->height) * 0x10000 | x;
  uVar1 = *(undefined4 *)&(shape->pixmap).u3;
  prim->x2 = prim->x2 + -3;
  *(undefined4 *)&prim->u3 = uVar1;
  prim->x3 = prim->x3 + -3;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildF4__FP7POLY_F4iiiiiUl(struct POLY_F4 *prim /*$s1*/, int trans /*$s4*/, int x /*$s2*/, int y /*$s0*/, int w /*stack 16*/, int h /*stack 20*/, unsigned long color /*stack 24*/)
 // line 712, offset 0x800d2634
	/* begin block 1 */
		// Start line: 713
		// Start offset: 0x800D2634
	/* end block 1 */
	// End offset: 0x800D2634
	// End Line: 713

void Hud_BuildF4__FP7POLY_F4iiiiiUl(POLY_F4 *prim,int trans,int x,int y,int w,int h,ulong color)
{
  uint uVar1;
  
  *(ulong *)&prim->r0 = color;
  SetPolyF4();
  SetSemiTrans(prim,trans);
  uVar1 = (y + h) * 0x10000;
  *(int *)&prim->x0 = y << 0x10 | x;
  *(int *)&prim->x1 = y << 0x10 | x + w;
  *(uint *)&prim->x2 = uVar1 | x;
  *(uint *)&prim->x3 = uVar1 | x + w;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildG4__FP7POLY_G4iiiiiUlUlUlUl(struct POLY_G4 *prim /*$s1*/, int trans /*$s4*/, int x /*$s2*/, int y /*$s0*/, int w /*stack 16*/, int h /*stack 20*/, unsigned long col1 /*stack 24*/, unsigned long col2 /*stack 28*/, unsigned long col3 /*stack 32*/, unsigned long col4 /*stack 36*/)
 // line 728, offset 0x800d26d8
	/* begin block 1 */
		// Start line: 729
		// Start offset: 0x800D26D8
	/* end block 1 */
	// End offset: 0x800D26D8
	// End Line: 729

void Hud_BuildG4__FP7POLY_G4iiiiiUlUlUlUl( (POLY_G4 *prim,int trans,int x,int y,int w,int h,ulong col1,ulong col2,ulong col3, ulong col4)
{
  uint uVar1;
  
  *(ulong *)&prim->r0 = col1;
  *(ulong *)&prim->r1 = col2;
  *(ulong *)&prim->r2 = col3;
  *(ulong *)&prim->r3 = col4;
  SetPolyG4();
  SetSemiTrans(prim,trans);
  uVar1 = (y + h) * 0x10000;
  *(int *)&prim->x0 = y << 0x10 | x;
  *(int *)&prim->x1 = y << 0x10 | x + w;
  *(uint *)&prim->x2 = uVar1 | x;
  *(uint *)&prim->x3 = uVar1 | x + w;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildF4o__FP7POLY_F4iiiiiUlScSc(struct POLY_F4 *prim /*$s3*/, int trans /*$s6*/, int x /*$s4*/, int y /*$s2*/, int w /*stack 16*/, int h /*stack 20*/, unsigned long color /*stack 24*/, int x0off /*stack 28*/, int x1off /*stack 32*/)
 // line 747, offset 0x800d2794
	/* begin block 1 */
		// Start line: 748
		// Start offset: 0x800D2794
	/* end block 1 */
	// End offset: 0x800D2794
	// End Line: 748

void Hud_BuildF4o__FP7POLY_F4iiiiiUlScSc( (POLY_F4 *prim,int trans,int x,int y,int w,int h,ulong color,int x0off,int x1off)
{
  uint uVar1;
  
  *(ulong *)&prim->r0 = color;
  SetPolyF4();
  SetSemiTrans(prim,trans);
  uVar1 = (y + h) * 0x10000;
  *(int *)&prim->x0 = y << 0x10 | x + (int)(char)x0off;
  *(int *)&prim->x1 = y << 0x10 | x + w + (int)(char)x1off;
  *(uint *)&prim->x2 = uVar1 | x;
  *(uint *)&prim->x3 = uVar1 | x + w;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_FBuildGT4__FP13HudPmx_tShapeiiUl(struct HudPmx_tShape *shape /*$t2*/, int x /*$t3*/, int y /*$t4*/, unsigned long col1 /*$a3*/)
 // line 762, offset 0x800d2868
	/* begin block 1 */
		// Start line: 763
		// Start offset: 0x800D2868
		// Variables:
	// 		struct POLY_GT4 *prim; // $a0
	/* end block 1 */
	// End offset: 0x800D2868
	// End Line: 763

void Hud_FBuildGT4__FP13HudPmx_tShapeiiUl(HudPmx_tShape *shape,int x,int y,ulong col1)
{
  uint *puVar1;
  POLY_GT4 *prim;
  uint uVar2;
  
  prim = _DAT_1f800004;
  puVar1 = _DAT_1f800000;
  _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  uVar2 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 1;
  *puVar1 = *puVar1 & 0xff000000 | uVar2;
  Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl(prim,shape,x,y,col1);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_FBuildFT4__FP13HudPmx_tShapeiiUl(struct HudPmx_tShape *shape /*$t2*/, int x /*$t3*/, int y /*$t4*/, unsigned long col1 /*$a3*/)
 // line 768, offset 0x800d28f4
	/* begin block 1 */
		// Start line: 769
		// Start offset: 0x800D28F4
		// Variables:
	// 		struct POLY_FT4 *prim; // $a0
	/* end block 1 */
	// End offset: 0x800D28F4
	// End Line: 769

void Hud_FBuildFT4__FP13HudPmx_tShapeiiUl(HudPmx_tShape *shape,int x,int y,ulong col1)
{
  uint *puVar1;
  POLY_FT4 *prim;
  uint uVar2;
  
  prim = _DAT_1f800004;
  puVar1 = _DAT_1f800000;
  _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  uVar2 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 1;
  *puVar1 = *puVar1 & 0xff000000 | uVar2;
  Hud_BuildFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli(prim,shape,x,y,col1,0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_FBuildF4__FiiiiiUlcc(int transparent /*$t6*/, int x /*$t7*/, int y /*$s0*/, int w /*$a3*/, int h /*stack 16*/, unsigned long col1 /*stack 20*/, int x0off /*stack 24*/, int x1off /*stack 28*/)
 // line 776, offset 0x800d2984
	/* begin block 1 */
		// Start line: 777
		// Start offset: 0x800D2984
		// Variables:
	// 		struct POLY_F4 *prim; // $a0
	/* end block 1 */
	// End offset: 0x800D2984
	// End Line: 777

void Hud_FBuildF4__FiiiiiUlcc( (int transparent,int x,int y,int w,int h,ulong col1,int x0off,int x1off)
{
  uint *puVar1;
  POLY_F4 *prim;
  uint uVar2;
  
  prim = _DAT_1f800004;
  puVar1 = _DAT_1f800000;
  _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  uVar2 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 1;
  *puVar1 = *puVar1 & 0xff000000 | uVar2;
  Hud_BuildF4o__FP7POLY_F4iiiiiUlScSc
            (prim,transparent,x,y,w,h,col1,(int)(char)x0off,(int)(char)x1off);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ uppercase__FPc(char *string /*$s0*/)
 // line 790, offset 0x800d2a44
	/* begin block 1 */
		// Start line: 791
		// Start offset: 0x800D2A44
		// Variables:
	// 		int n; // $a0
	// 		int len; // $a2
	/* end block 1 */
	// End offset: 0x800D2A94
	// End Line: 796

void uppercase__FPc(char *string)
{
  size_t sVar1;
  int iVar2;
  byte *pbVar3;
  
  sVar1 = strlen(string);
  iVar2 = 0;
  pbVar3 = (byte *)string;
  if (0 < (int)sVar1) {
    do {
      if ((uint)*pbVar3 - 0x61 < 0x1a) {
        *pbVar3 = *pbVar3 - 0x20;
      }
      iVar2 = iVar2 + 1;
      pbVar3 = (byte *)(string + iVar2);
    } while (iVar2 < (int)sVar1);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_Kill__Fv()
 // line 800, offset 0x800d2aa4
	/* begin block 1 */
		// Start line: 801
		// Start offset: 0x800D2AA4
	/* end block 1 */
	// End offset: 0x800D2AE4
	// End Line: 809

void Hud_Kill__Fv(void)
{
  HudPmx_Kill__Fv();
  if (iGp000018bc != 0) {
    purgememadr();
  }
  iGp000018bc = 0;
  if (iGp000018c0 != 0) {
    purgememadr();
  }
  iGp000018c0 = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_Init0__Fv()
 // line 813, offset 0x800d2af4
	/* begin block 1 */
		// Start line: 814
		// Start offset: 0x800D2AF4
	/* end block 1 */
	// End offset: 0x800D2B3C
	// End Line: 821

void Hud_Init0__Fv(void)
{
  uGp000018bc = reservememadr(&DAT_8013d8cc,0x80c,0);
  if (DAT_801131f8 == 1) {
    uGp000018c0 = reservememadr(&DAT_8013d8d4,0x80c,0);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_InitMapFrame__Fii(int i /*$a0*/, int mode /*$s0*/)
 // line 827, offset 0x800d2b4c
	/* begin block 1 */
		// Start line: 828
		// Start offset: 0x800D2B4C
		// Variables:
	// 		struct SPRT *gSprt1; // $s3
	// 		struct POLY_F4 *HudF4; // stack offset -56
	// 		struct POLY_FT4 *HudFT4; // $s5
	// 		long splitY; // $s2

		/* begin block 1.1 */
			// Start line: 835
			// Start offset: 0x800D2BC8
			// Variables:
		// 		int lx; // $s4
		// 		int h1; // $s6
		// 		int h2; // $fp
		// 		int h3; // stack offset -52
		// 		int w1; // $s7
		// 		int w2; // stack offset -48
		// 		int w3; // stack offset -44
		/* end block 1.1 */
		// End offset: 0x800D2E3C
		// End Line: 872
	/* end block 1 */
	// End offset: 0x800D2E3C
	// End Line: 872

void Hud_InitMapFrame__Fii(int i,int mode)
{
  int iVar1;
  int iVar2;
  int x;
  POLY_FT4 *prim;
  undefined *local_38;
  
  iVar2 = iGp000018bc;
  if (i != 0) {
    iVar2 = iGp000018c0;
  }
  local_38 = &gHudF4;
  if (i != 0) {
    local_38 = &DAT_8013e4f8;
  }
  prim = (POLY_FT4 *)&gHudFT4;
  if (i != 0) {
    prim = (POLY_FT4 *)&DAT_8013e668;
  }
  iVar1 = 0;
  if (i != 0) {
    iVar1 = -0xd;
  }
  x = (int)*(short *)(iGp000018b8 + 0x38);
  if (mode == 1) {
    x = x + -0x1e;
  }
  uGp000018c8 = 0xff5721;
  uGp000018c4 = 0;
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(iVar2 + 0x4ec),0xe,x,(int)*(short *)(iGp000018b8 + 0x3a) + iGp00001420 + iVar1
            );
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(iVar2 + 0x500),0xf,(int)*(short *)(iGp000018b8 + 0x38),
             (int)*(short *)(iGp000018b8 + 0x3a) + iGp00001420 + iVar1);
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(iVar2 + 0x514),0x10,x,
             (int)*(short *)(iGp000018b8 + 0x3a) + iGp00001420 + iVar1);
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(iVar2 + 0x528),0x11,(int)*(short *)(iGp000018b8 + 0x38),
             (int)*(short *)(iGp000018b8 + 0x3a) + iGp00001420 + iVar1);
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(iVar2 + 0x53c),mode + 0x14,x,
             (int)*(short *)(iGp000018b8 + 0x3a) + iGp00001420 + iVar1);
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(iVar2 + 0x550),mode + 0x14,x,
             (int)*(short *)(iGp000018b8 + 0x3a) + iGp00001420 + iVar1);
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(iVar2 + 0x564),0x18,x,
             (int)*(short *)(iGp000018b8 + 0x3a) + iGp00001420 + iVar1);
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(iVar2 + 0x578),0x18,(int)*(short *)(iGp000018b8 + 0x38),
             (int)*(short *)(iGp000018b8 + 0x3a) + iGp00001420 + iVar1);
  Hud_BuildF4__FP7POLY_F4iiiiiUl((POLY_F4 *)(local_38 + 0x60),1,0,0,0x2d,0x30,0);
  if (true) {
    Hud_BuildFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli
              (prim,(HudPmx_tShape *)&DAT_801115f8,0,0,0x808080,1);
  }
  else {
    Hud_BuildMapMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli
              (prim,(HudPmx_tShape *)&DAT_801115f8,0,0,0x808080,1);
  }
  Hud_BuildFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli
            (prim + 1,(HudPmx_tShape *)&DAT_80111558,0,0,0x808080,1);
  Hud_BuildMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli
            (prim + 2,(HudPmx_tShape *)&DAT_80111558,0,0,0x808080,1);
  Hud_BuildFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli
            (prim + 3,(HudPmx_tShape *)&DAT_8011156c,0,0,0x808080,1);
  Hud_BuildMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli
            (prim + 4,(HudPmx_tShape *)&DAT_8011156c,0,0,0x808080,1);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildTimeSprites__FP4SPRTPcii(struct SPRT *sprt /*$a0*/, char *str /*$s2*/, int x /*$s4*/, int y /*$fp*/)
 // line 883, offset 0x800d2ef8
	/* begin block 1 */
		// Start line: 884
		// Start offset: 0x800D2EF8
		// Variables:
	// 		char minSep[6]; // stack offset -56
	// 		char secSep[6]; // stack offset -48
	// 		char langMin; // $s6
	// 		char langSec; // $s5
	// 		int c; // $s1
	// 		int w; // $s0
	/* end block 1 */
	// End offset: 0x800D2FFC
	// End Line: 924

void Hud_BuildTimeSprites__FP4SPRTPcii(SPRT *sprt,char *str,int x,int y)
{
  char cVar1;
  byte ch;
  byte bVar2;
  byte bVar3;
  charactertbl *pcVar4;
  undefined4 local_38;
  undefined local_34;
  undefined local_33;
  undefined4 local_30;
  undefined local_2c;
  undefined local_2b;
  
  local_38 = 0x27273a3a;
  local_34 = 0x27;
  local_33 = 0x2e;
  local_30 = 0x22223a2e;
  local_2c = 0x22;
  local_2b = 0x2c;
  ch = *str;
  bVar2 = *(byte *)((int)&local_38 + DAT_801132cc);
  bVar3 = *(byte *)((int)&local_30 + DAT_801132cc);
  while (ch != 0) {
    if (ch == 0x4d) {
      ch = bVar2;
    }
    if (ch == 0x53) {
      ch = bVar3;
    }
    pcVar4 = Font_Getcharacter__Fi((uint)ch);
    cVar1 = pcVar4->advance;
    Hud_BuildSpriteFromFont__FP4SPRTcii(sprt,ch,x,y);
    str = (char *)((byte *)str + 1);
    ch = *str;
    x = x + (int)cVar1 + 1;
    sprt = sprt + 1;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_Init__Fv()
 // line 930, offset 0x800d302c
	/* begin block 1 */
		// Start line: 931
		// Start offset: 0x800D302C
		// Variables:
	// 		int x; // $s0
	// 		int y; // $s1
	// 		int i; // $fp
	// 		int j; // $s2
	// 		int w1; // $s4
	// 		int w2; // $s3
	// 		unsigned long textcolour; // stack offset -64

		/* begin block 1.1 */
			// Start line: 962
			// Start offset: 0x800D30E0

			/* begin block 1.1.1 */
				// Start line: 962
				// Start offset: 0x800D310C
				// Variables:
			// 		struct SPRT *gSprt1; // $s5
			// 		struct POLY_F4 *HudF4; // stack offset -60
			// 		struct POLY_G4 *HudG4; // $s6
			// 		long splitY; // $s7
			// 		int timelapshift; // $s2
			/* end block 1.1.1 */
			// End offset: 0x800D3888
			// End Line: 1111
		/* end block 1.1 */
		// End offset: 0x800D38B4
		// End Line: 1112

		/* begin block 1.2 */
			// Start line: 1115
			// Start offset: 0x800D38B4
			// Variables:
		// 		struct SPRT *spriteReplay; // $a0
		// 		int baseX; // $s2
		// 		int baseY; // $s0
		/* end block 1.2 */
		// End offset: 0x800D38B4
		// End Line: 1116
	/* end block 1 */
	// End offset: 0x800D39B8
	// End Line: 1154

void Hud_Init__Fv(void)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *str;
  undefined *puVar3;
  int x;
  undefined *puVar4;
  int y;
  int y_00;
  int shapeIdx;
  int y_01;
  SPRT *sprt;
  POLY_G4 *prim;
  int x_00;
  POLY_F4 *local_3c;
  int local_30;
  undefined4 *local_2c;
  
  x_00 = 0;
  y_01 = 0;
  do {
    shapeIdx = 0;
    puVar3 = &gTPage0;
    puVar4 = &gTPage1;
    do {
      SetDrawMode(puVar3 + y_01,0,0,2,0);
      SetDrawMode(puVar4 + y_01,0,0,3,0);
      puVar4 = puVar4 + 0xc;
      shapeIdx = shapeIdx + 1;
      puVar3 = puVar3 + 0xc;
    } while (shapeIdx < 4);
    x_00 = x_00 + 1;
    y_01 = y_01 + 0x30;
  } while (x_00 < 2);
  y_01 = 0;
  local_30 = 0;
  local_2c = &GameSetup_gData;
  while (sprt = pSGp000018bc, y_01 <= DashHUD_gInfo) {
    sprt = pSGp000018bc;
    if (y_01 != 0) {
      sprt = pSGp000018c0;
    }
    local_3c = (POLY_F4 *)&gHudF4;
    if (y_01 != 0) {
      local_3c = (POLY_F4 *)&DAT_8013e4f8;
    }
    prim = (POLY_G4 *)&gHudG4;
    if (y_01 != 0) {
      prim = (POLY_G4 *)&DAT_8013e7c0;
    }
    x_00 = 0;
    if (y_01 != 0) {
      x_00 = -0xf;
    }
    shapeIdx = (uint)(local_2c[0x116] == 0) * 0x10;
    if (local_2c[0x117] == 0) {
      shapeIdx = shapeIdx + 0x10;
    }
    Hud_BuildSprite__FP4SPRTiiiUli
              (sprt,0x68,(int)*psGp000018b8,((int)psGp000018b8[1] + x_00) - shapeIdx,0xbebe,0);
    uGp000018c8 = 0x808080;
    Hud_BuildSprite2__FP4SPRTiii(sprt + 1,0x80,(int)psGp000018b8[2],(int)psGp000018b8[3] + x_00);
    shapeIdx = 0x81;
    if (y_01 != 0) {
      shapeIdx = 0x83;
    }
    Hud_BuildSprite2__FP4SPRTiii(sprt + 2,shapeIdx,0,0);
    *(undefined4 *)&sprt[2].w = 0x1c001c;
    shapeIdx = 0x46;
    if (iGp000013f0 != 0) {
      shapeIdx = 0x2e;
    }
    x = (int)psGp000018b8[4];
    y = (int)psGp000018b8[5] + x_00;
    Hud_BuildSprite2__FP4SPRTiii(sprt + 4,0x69,x,y);
    Hud_BuildG4__FP7POLY_G4iiiiiUlUlUlUl(prim,1,x,y,shapeIdx,10,0,0x707070,0,0x707070);
    Hud_BuildSprite2__FP4SPRTiii(sprt + 5,0x7d,x + shapeIdx,y);
    Hud_BuildF4__FP7POLY_F4iiiiiUl(local_3c,1,x + shapeIdx,y + 7,7,3,0x707070);
    shapeIdx = local_2c[0x116];
    x = (int)psGp000018b8[6];
    y = (int)psGp000018b8[7] + x_00 + (uint)(shapeIdx == 0) * -0x10;
    Hud_BuildSprite2__FP4SPRTiii(sprt + 6,0x6b,x,y);
    Hud_BuildG4__FP7POLY_G4iiiiiUlUlUlUl(prim + 1,1,x,y,0x1d,10,0,0x707070,0,0x707070);
    Hud_BuildF4__FP7POLY_F4iiiiiUl(local_3c + 1,1,x + 0x1d,y + 7,7,3,0x707070);
    Hud_BuildSprite2__FP4SPRTiii(sprt + 7,0x7d,x + 0x1d,y);
    x = (int)psGp000018b8[8];
    y = (int)psGp000018b8[9] + x_00;
    Hud_BuildSprite2__FP4SPRTiii(sprt + 8,0x69,x,y);
    Hud_BuildG4__FP7POLY_G4iiiiiUlUlUlUl(prim + 3,1,x,y,0x3c,10,0,0x707070,0,0x707070);
    Hud_BuildF4__FP7POLY_F4iiiiiUl(local_3c + 2,1,x + 0x3c,y + 7,7,3,0x707070);
    Hud_BuildSprite2__FP4SPRTiii(sprt + 9,0x7d,x + 0x3c,y);
    x = 0x26;
    if ((iGp000013f0 == 0) && (x = 0x32, *(int *)(&DAT_801132ac + local_30) == 0)) {
      x = 0x3d;
    }
    if (iGp000013f0 == 0) {
      y = (int)psGp000018b8[10];
      y_00 = (int)psGp000018b8[0xb] + x_00;
    }
    else {
      y = (int)psGp000018b8[4] + 0xe;
      y_00 = (int)psGp000018b8[5] + x_00 + 0xe;
    }
    Hud_BuildSprite2__FP4SPRTiii(sprt + 10,0x76,y,y_00);
    Hud_BuildG4__FP7POLY_G4iiiiiUlUlUlUl(prim + 2,1,y,y_00,x,10,0,0x707070,0,0x707070);
    Hud_BuildF4__FP7POLY_F4iiiiiUl(local_3c + 3,1,y + x,y_00 + 7,7,3,0x707070);
    Hud_BuildSprite__FP4SPRTiiiUli(sprt + 0xb,0x7d,y + x,y_00,0x808080,0);
    uGp000018c8 = 0xa0a0a0;
    Hud_BuildTimeSprites__FP4SPRTPcii
              (sprt + 0xc,"00M00S00",(int)psGp000018b8[4] + (int)psGp000018b8[0xc],
               (int)psGp000018b8[5] + x_00 + (int)psGp000018b8[0xd]);
    Hud_BuildTimeSprites__FP4SPRTPcii
              (sprt + 0x14,"0/0",(int)psGp000018b8[6] + (int)psGp000018b8[0xe],
               (int)psGp000018b8[7] + (int)psGp000018b8[0xf] + x_00 + (uint)(shapeIdx == 0) * -0x10)
    ;
    uGp000018c8 = 0xa0a0a0;
    Hud_BuildTimeSprites__FP4SPRTPcii
              (sprt + 0x17,"0M00S00",(int)psGp000018b8[8] + (int)psGp000018b8[0x10],
               (int)psGp000018b8[9] + (int)psGp000018b8[0x11] + x_00 + 1);
    if (iGp000013f0 == 0) {
      shapeIdx = (int)psGp000018b8[10] + (int)psGp000018b8[0x12];
      x = (int)psGp000018b8[0xb] + x_00 + 1;
    }
    else {
      shapeIdx = (int)psGp000018b8[4] + 0x10;
      x = (int)psGp000018b8[5] + x_00 + 0xc;
    }
    if (*(int *)(&DAT_801132ac + local_30) == 0) {
      str = "0M00S00";
    }
    else {
      str = "0.000";
    }
    Hud_BuildTimeSprites__FP4SPRTPcii(sprt + 0x1e,str,shapeIdx,x);
    *(int *)(&HudSplitTimeDiff1 + local_30) = (int)sprt[0x1f].y0 - (int)sprt[0x1e].y0;
    uGp000018c8 = 0xa0a0a0;
    *(int *)(&HudSplitTimeDiff2 + local_30) = (int)sprt[0x22].y0 - (int)sprt[0x1e].y0;
    shapeIdx = (int)psGp000018b8[0x1c] + (int)psGp000018b8[0x14];
    x = (int)psGp000018b8[0x1d] + iGp00001420 + (int)psGp000018b8[0x15] + x_00;
    if ((y_01 == 0) && (DashHUD_gInfo != 0)) {
      x = x + -2;
    }
    y = 0;
    y_00 = 0x334;
    Hud_BuildSprite__FP4SPRTiiiUli
              (sprt + 0x28,0x3e,(int)psGp000018b8[0x1c] + 0x13,x + -1,0x808080,0);
    Hud_BuildSprite2__FP4SPRTiii(sprt + 0x25,0x2c,shapeIdx,x);
    Hud_BuildSprite2__FP4SPRTiii(sprt + 0x26,0x47,shapeIdx,x);
    Hud_BuildSprite2__FP4SPRTiii(sprt + 0x27,0x36,shapeIdx,x);
    uGp000018c8 = 0x808080;
    shapeIdx = (int)psGp000018b8[2] + (int)psGp000018b8[0x16];
    x_00 = (int)psGp000018b8[3] + (int)psGp000018b8[0x17] + x_00;
    Hud_BuildSprite2__FP4SPRTiii(sprt + 0x31,0x1a,shapeIdx + -1,x_00);
    Hud_BuildSprite2__FP4SPRTiii(sprt + 0x32,0x1b,shapeIdx + -2,x_00 + -1);
    do {
      Hud_BuildSprite2__FP4SPRTiii((SPRT *)((int)&sprt->tag + y_00),y + 0x1c,shapeIdx + 2,x_00 + 6);
      y = y + 1;
      y_00 = y_00 + 0x14;
    } while (y < 8);
    Hud_InitMapFrame__Fii(y_01,0);
    y_01 = y_01 + 1;
    local_30 = local_30 + 4;
    local_2c = local_2c + 0x2d;
  }
  shapeIdx = 0;
  uGp000018c8 = 0x808080;
  uGp000018c4 = 1;
  x_00 = (int)psGp000018b8[0x1a];
  y_01 = (int)psGp000018b8[0x1b];
  Hud_BuildSprite2__FP4SPRTiii(pSGp000018bc + 0x37,0x6f,x_00,y_01);
  Hud_BuildSprite2__FP4SPRTiii(sprt + 0x33,0x6c,x_00 + 0x12,y_01);
  Hud_BuildSprite2__FP4SPRTiii(sprt + 0x34,0x6e,x_00 + 0x25,y_01);
  Hud_BuildSprite2__FP4SPRTiii(sprt + 0x35,0x3f,x_00 + 0x3a,y_01);
  Hud_BuildSprite2__FP4SPRTiii(sprt + 0x38,0x72,x_00 + 0x4a,y_01);
  Hud_BuildSprite2__FP4SPRTiii(sprt + 0x36,0,x_00 + 0x6d,y_01 + -7);
  Hud_BuildSprite2__FP4SPRTiii(sprt + 0x39,3,0,y_01 + 4);
  uGp000018c4 = 0;
  Hud_InitCdPlayer__Fv();
  Hud_Reset__Fv();
  puVar2 = &PerpOverlayMessage;
  puVar1 = &PerpOverlayOn;
  do {
    *puVar1 = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    shapeIdx = shapeIdx + 1;
    puVar1 = puVar1 + 1;
  } while (shapeIdx < 2);
  uGp000013dc = 0;
  uGp000013e8 = 0;
  uGp000013ec = 0;
  uGp000013f4 = 0;
  uGp000018dc = 0;
  uGp000018e4 = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_InitTables__Fv()
 // line 1227, offset 0x800d39ec
	/* begin block 1 */
		// Start line: 1228
		// Start offset: 0x800D39EC
	/* end block 1 */
	// End offset: 0x800D3A0C
	// End Line: 1229

void Hud_InitTables__Fv(void)
{
  puGp000018b8 = &Hud_gElementPositions;
  if (false) {
    puGp000018b8 = &DAT_80120970;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildETimeString__FP4SPRTi(struct SPRT *sprt /*$t0*/, int time /*$a1*/)
 // line 1232, offset 0x800d3a18
	/* begin block 1 */
		// Start line: 1233
		// Start offset: 0x800D3A18
		// Variables:
	// 		int min; // $t1
	// 		int sec; // $t2
	// 		int hun; // $a1
	// 		int temp1; // $a1
	// 		int temp2; // $v1
	/* end block 1 */
	// End offset: 0x800D3ABC
	// End Line: 1244

void Hud_BuildETimeString__FP4SPRTi(SPRT *sprt,int time)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (time < 0) {
    time = 0;
  }
  if (time < 0) {
    time = -time;
  }
  iVar1 = time;
  if (time < 0) {
    iVar1 = time + 0x3f;
  }
  iVar2 = iVar1 >> 6;
  iVar1 = (iVar2 / 0x3c + (iVar2 >> 0x1f)) - (iVar1 >> 0x1f);
  iVar5 = (time + iVar2 * -0x40) * 100;
  iVar4 = iVar1 % 0x3c;
  iVar2 = iVar2 + iVar1 * -0x3c;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x3f;
  }
  iVar3 = iVar5 >> 6;
  *(undefined4 *)&sprt->u0 = (&HudPmx_gHudNumberUV)[iVar4 / 10];
  *(undefined4 *)&sprt[1].u0 = (&HudPmx_gHudNumberUV)[iVar4 % 10];
  *(undefined4 *)&sprt[3].u0 = (&HudPmx_gHudNumberUV)[iVar2 / 10];
  *(undefined4 *)&sprt[4].u0 = (&HudPmx_gHudNumberUV)[iVar2 % 10];
  iVar1 = (iVar3 / 10 + (iVar3 >> 0x1f)) - (iVar5 >> 0x1f);
  *(undefined4 *)&sprt[6].u0 = (&HudPmx_gHudNumberUV)[iVar1];
  *(undefined4 *)&sprt[7].u0 = (&HudPmx_gHudNumberUV)[iVar3 + iVar1 * -10];
  return;


}




// decompiled code
// original method signature: 
// unsigned int /*$ra*/ Hud_BuildDistanceString__FP4SPRTi(struct SPRT *sprt /*$t2*/, int player /*$a1*/)
 // line 1253, offset 0x800d3ba4
	/* begin block 1 */
		// Start line: 1254
		// Start offset: 0x800D3BA4
		// Variables:
	// 		int slices; // $v1
	// 		int dist; // $t1
	/* end block 1 */
	// End offset: 0x800D3D3C
	// End Line: 1270

uint Hud_BuildDistanceString__FP4SPRTi(SPRT *sprt,int player)
{
  int iVar1;
  
  iVar1 = *(int *)((&_Cars_gHumanRaceCarList)[player] + 0x398) * 6;
  if (iVar1 < 0) {
    iVar1 = *(int *)((&_Cars_gHumanRaceCarList)[player] + 0x398) * -6;
  }
  if (*(int *)(&DAT_801132ac + player * 4) == 2) {
    iVar1 = (iVar1 * 1000) / 0x647;
  }
  if (iVar1 < 10000) {
    *(undefined4 *)&sprt->u0 = (&HudPmx_gHudNumberUV)[iVar1 / 1000];
    *(undefined4 *)&sprt[2].u0 = (&HudPmx_gHudNumberUV)[(iVar1 % 1000) / 100];
    *(undefined4 *)&sprt[3].u0 = (&HudPmx_gHudNumberUV)[(iVar1 % 100) / 10];
    *(undefined4 *)&sprt[4].u0 = (&HudPmx_gHudNumberUV)[iVar1 % 10];
    return 1;
  }
  return 0;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildTimeString__FP4SPRTi(struct SPRT *sprt /*$t0*/, int time /*$a1*/)
 // line 1273, offset 0x800d3d44
	/* begin block 1 */
		// Start line: 1274
		// Start offset: 0x800D3D44
		// Variables:
	// 		int min; // $a1
	// 		int sec; // $t1
	// 		int hun; // $a1
	// 		int temp1; // $a0
	// 		int temp2; // $v1
	/* end block 1 */
	// End offset: 0x800D3DBC
	// End Line: 1285

void Hud_BuildTimeString__FP4SPRTi(SPRT *sprt,int time)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (time < 0) {
    time = -time;
  }
  iVar2 = time;
  if (time < 0) {
    iVar2 = time + 0x3f;
  }
  iVar1 = iVar2 >> 6;
  iVar4 = (time + iVar1 * -0x40) * 100;
  iVar2 = (iVar1 / 0x3c + (iVar1 >> 0x1f)) - (iVar2 >> 0x1f);
  iVar1 = iVar1 + iVar2 * -0x3c;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x3f;
  }
  iVar3 = iVar4 >> 6;
  *(undefined4 *)&sprt->u0 = (&HudPmx_gHudNumberUV)[iVar2 % 10];
  *(undefined4 *)&sprt[2].u0 = (&HudPmx_gHudNumberUV)[iVar1 / 10];
  *(undefined4 *)&sprt[3].u0 = (&HudPmx_gHudNumberUV)[iVar1 % 10];
  iVar2 = (iVar3 / 10 + (iVar3 >> 0x1f)) - (iVar4 >> 0x1f);
  *(undefined4 *)&sprt[5].u0 = (&HudPmx_gHudNumberUV)[iVar2];
  *(undefined4 *)&sprt[6].u0 = (&HudPmx_gHudNumberUV)[iVar3 + iVar2 * -10];
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildTach__Fi(int player /*$s1*/)
 // line 1376, offset 0x800d3e94
	/* begin block 1 */
		// Start line: 1377
		// Start offset: 0x800D3E94
		// Variables:
	// 		int fangle; // $fp
	// 		int sin; // stack offset -64
	// 		int cos; // stack offset -60
	// 		int rpm; // $v0
	// 		struct SPRT *gSprt1; // stack offset -56
	// 		unsigned long clut; // $s0
	// 		unsigned long x; // $s7
	// 		unsigned long y; // $s4
	// 		int cos1; // stack offset -52
	// 		int sin1; // $s6
	// 		int carType; // $a0
	// 		unsigned long color; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1402
			// Start offset: 0x800D401C
			// Variables:
		// 		struct POLY_F3 *prim; // $s2
		// 		struct POLY_F3 *prim2; // $s0

			/* begin block 1.1.1 */
				// Start line: 1402
				// Start offset: 0x800D401C
			/* end block 1.1.1 */
			// End offset: 0x800D401C
			// End Line: 1402
		/* end block 1.1 */
		// End offset: 0x800D401C
		// End Line: 1402
	/* end block 1 */
	// End offset: 0x800D401C
	// End Line: 1404

void Hud_BuildTach__Fi(int player)
{
  POLY_F3 *prim;
  short sVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int y;
  undefined *puVar5;
  uint uVar6;
  POLY_F3 *prim_00;
  uint uVar7;
  short sVar8;
  int iVar9;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  ulong local_30;
  
  if (player == 0) {
    local_38 = iGp000018bc;
  }
  else {
    local_38 = iGp000018c0;
  }
  iVar9 = 0x1d;
  if ((int)(&DAT_801135c0)[player * 0x2d] < 0x1e) {
    iVar9 = (&DAT_801135c0)[player * 0x2d];
  }
  if (DAT_80113240 == 0) {
    puVar5 = &day_needle;
  }
  else {
    puVar5 = &night_needle;
  }
  local_30 = *(ulong *)(puVar5 + iVar9 * 4);
  iVar9 = 0x5999;
  if (false) {
    iVar9 = 0x13334;
  }
  fixedsincos(iVar9,&local_40,&local_3c);
  if (player == 0) {
    puVar2 = &DAT_801116ac;
  }
  else {
    puVar2 = &DAT_801116d4;
  }
  uVar7 = *puVar2;
  iVar3 = fixedmult(local_3c,0x1d);
  iVar4 = fixedmult(local_40,0x1d);
  uVar6 = iVar3 + 0x1d;
  if (player != 0) {
    uVar6 = iVar3 + 0x75;
  }
  *(uint *)(local_38 + 0x34) = uVar7 & 0xffff0000 | (iVar4 + 0x9d) * 0x100 | uVar6;
  local_34 = fixedmult(local_3c,10);
  local_34 = local_34 + 0xe;
  y = fixedmult(local_40,10);
  prim = _DAT_1f800004;
  puVar2 = _DAT_1f800000;
  y = y + 0xe;
  prim_00 = _DAT_1f800004 + 1;
  _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  *puVar2 = *puVar2 & 0xff000000 | (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004[1].tag = _DAT_1f800004[1].tag & 0xff000000 | (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = (POLY_F3 *)&_DAT_1f800004[1].x2;
  *puVar2 = *puVar2 & 0xff000000 | (uint)prim_00 & 0xffffff;
  *(undefined *)((int)&prim[1].tag + 3) = 3;
  prim[1].x0 = 0xe - (short)iVar3;
  *(ulong *)&prim[1].r0 = local_30 + 0x484848 | 0x42000000;
  prim[1].y0 = 0xe - (short)iVar4;
  prim[1].y1 = (short)y;
  prim[1].x1 = (short)local_34;
  prim_00 = _DAT_1f800004;
  puVar2 = _DAT_1f800000;
  _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  uVar6 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 1;
  *puVar2 = *puVar2 & 0xff000000 | uVar6;
  Hud_BuildF3__FP7POLY_F3P13HudPmx_tShapeiiUl
            (prim,(HudPmx_tShape *)&DAT_801116c0,local_34,y,local_30);
  Hud_BuildF3__FP7POLY_F3P13HudPmx_tShapeiiUl(prim_00,(HudPmx_tShape *)&DAT_801116c0,local_34,y,0);
  prim->code = prim->code & 0xfd;
  fixedsincos(iVar9 + -0x200,&local_40,&local_3c);
  sVar1 = fixedmult(local_3c,0x20);
  prim->x1 = 0xe - sVar1;
  prim_00->x1 = 0xe - sVar1;
  sVar1 = fixedmult(local_40,0x20);
  prim->y1 = 0xe - sVar1;
  prim_00->y1 = 0xe - sVar1;
  fixedsincos(iVar9 + 0x200,&local_40,&local_3c);
  sVar1 = fixedmult(local_3c,0x20);
  prim->x2 = 0xe - sVar1;
  prim_00->x2 = 0xe - sVar1;
  sVar1 = fixedmult(local_40,0x20);
  sVar8 = -sVar1 + 0xe;
  prim->y2 = sVar8;
  prim_00->y2 = sVar8;
  puVar2 = _DAT_1f800000;
  prim_00->y0 = prim_00->y0 + 2;
  prim_00->y2 = -sVar1 + 0x10;
  prim_00->y1 = prim_00->y1 + 2;
  *(uint *)(local_38 + 0x28) = *(uint *)(local_38 + 0x28) & 0xff000000 | *puVar2 & 0xffffff;
  *puVar2 = *puVar2 & 0xff000000 | local_38 + 0x28U & 0xffffff;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Hud_BuildString__FPciiiib(char *str /*$s2*/, int x /*$s1*/, int y /*$s6*/, int color /*$s7*/, int player /*stack 16*/, unsigned int justwidth /*stack 20*/)
 // line 1450, offset 0x800d42c8
	/* begin block 1 */
		// Start line: 1451
		// Start offset: 0x800D42C8
		// Variables:
	// 		char alphShape; // $s0
	// 		int i; // stack offset -56
	// 		int ox; // stack offset -52
	// 		int ix; // $s1
	// 		int numch; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1451
			// Start offset: 0x800D42C8

			/* begin block 1.1.1 */
				// Start line: 1459
				// Start offset: 0x800D433C

				/* begin block 1.1.1.1 */
					// Start line: 1461
					// Start offset: 0x800D4354

					/* begin block 1.1.1.1.1 */
						// Start line: 1463
						// Start offset: 0x800D4370

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1463
							// Start offset: 0x800D4370

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1510
								// Start offset: 0x800D44B4
								// Variables:
							// 		int offy; // $a2
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800D45D0
							// End Line: 1540
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800D45D0
						// End Line: 1540
					/* end block 1.1.1.1.1 */
					// End offset: 0x800D45D0
					// End Line: 1540
				/* end block 1.1.1.1 */
				// End offset: 0x800D45D0
				// End Line: 1540
			/* end block 1.1.1 */
			// End offset: 0x800D45D0
			// End Line: 1540
		/* end block 1.1 */
		// End offset: 0x800D45E4
		// End Line: 1542
	/* end block 1 */
	// End offset: 0x800D45E4
	// End Line: 1543

int Hud_BuildString__FPciiiib(char *str,int x,int y,int color,int player,uint justwidth)
{
  char cVar1;
  size_t sVar2;
  int x_00;
  byte bVar3;
  int x_01;
  int local_38;
  
  Hud_GoTpage__Fi(1);
  sVar2 = strlen(str);
  local_38 = 0;
  player = player * 0x20;
  x_00 = x;
  do {
    if ((int)sVar2 <= local_38) {
      Hud_GoTpage__Fi(0);
      return x_00 - x;
    }
    cVar1 = *str;
    if (cVar1 == ' ') {
      x_01 = x_00 + 3;
    }
    else {
      if (cVar1 == '*') {
        if (DAT_8013e8a1 == '#') {
          if (justwidth == 0) {
            Hud_FBuildSprite__FiiiUli(0xad,x_00 + 2,y,color,0);
          }
        }
        else {
          if (justwidth == 0) {
            Hud_FBuildSprite__FiiiUli(0xaa,x_00 + 2,y,color,0);
          }
        }
        x_01 = x_00 + 5;
        if (DAT_801131f8 == 1) {
          if (DAT_8013e8c1 == '#') {
            if (DAT_8013e8a1 != '#') {
LAB_800d443c:
              if (DAT_8013e8c1 == '#') {
                if (justwidth == 0) {
                  Hud_FBuildSprite__FiiiUli(0xad,x_01,y,color,0);
                }
                x_01 = 0;
                x_00 = x_00 + 8;
              }
              else {
                if (justwidth == 0) {
                  Hud_FBuildSprite__FiiiUli(0xaa,x_01,y,color,0);
                }
                x_01 = 0;
                x_00 = x_00 + 8;
              }
              goto LAB_800d45cc;
            }
          }
          else {
            if (DAT_8013e8a1 == '#') goto LAB_800d443c;
          }
        }
      }
      else {
        x_01 = 0;
        if (cVar1 == '^') {
          bVar3 = 0xaa;
          if ((&DAT_8013e8a1)[player] == '#') {
            bVar3 = 0xad;
          }
        }
        else {
          if (cVar1 == '(') {
            bVar3 = 0xa9;
            if ((&DAT_8013e8a1)[player] == '#') {
              bVar3 = 0xab;
            }
          }
          else {
            if (cVar1 == ')') {
              bVar3 = 0xa8;
              if ((&DAT_8013e8a1)[player] == '#') {
                bVar3 = 0xac;
              }
            }
            else {
              if (cVar1 == '&') {
                bVar3 = 0xae;
              }
              else {
                bVar3 = cVar1 + 0x6e;
                if (9 < (byte)(cVar1 - 0x30U)) {
                  if (cVar1 == '-') {
                    bVar3 = 0x48;
                  }
                  else {
                    if (cVar1 == ':') {
                      bVar3 = 0x49;
                    }
                    else {
                      bVar3 = cVar1 + 0x8a;
                      if ((byte)(cVar1 + 0x40U) < 0x1d) {
                        x_01 = -1;
                      }
                      else {
                        bVar3 = *str + 0x43;
                        if (*str == -0x1b) {
                          bVar3 = 0x67;
                          x_01 = -1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (justwidth == 0) {
          Hud_FBuildSprite__FiiiUli((uint)bVar3,x_00,y + x_01,color,0);
        }
        x_01 = (int)*(short *)(&DAT_80110ca8 + (uint)bVar3 * 0x14);
        x_00 = x_00 + 1;
LAB_800d45cc:
        x_01 = x_00 + x_01;
      }
    }
    str = str + 1;
    local_38 = local_38 + 1;
    x_00 = x_01;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildNumbers0__Fi(int player /*$v1*/)
 // line 1551, offset 0x800d4624
	/* begin block 1 */
		// Start line: 1552
		// Start offset: 0x800D4624
		// Variables:
	// 		int i; // $s1
	// 		struct SPRT *pSprt; // $s3
	// 		struct POLY_F4 *HudF4; // $s6
	// 		struct POLY_G4 *HudG4; // $s5
	// 		int splitY; // $s0
	// 		int y; // $v1

		/* begin block 1.1 */
			// Start line: 1560
			// Start offset: 0x800D4694

			/* begin block 1.1.1 */
				// Start line: 1561
				// Start offset: 0x800D46C4
				// Variables:
			// 		int j; // $a1
			// 		int num; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800D4854
			// End Line: 1574
		/* end block 1.1 */
		// End offset: 0x800D4854
		// End Line: 1574

		/* begin block 1.2 */
			// Start line: 1608
			// Start offset: 0x800D48F8

			/* begin block 1.2.1 */
				// Start line: 1609
				// Start offset: 0x800D4918

				/* begin block 1.2.1.1 */
					// Start line: 1610
					// Start offset: 0x800D4918

					/* begin block 1.2.1.1.1 */
						// Start line: 1611
						// Start offset: 0x800D4944
						// Variables:
					// 		int j; // $s0
					/* end block 1.2.1.1.1 */
					// End offset: 0x800D4A74
					// End Line: 1630
				/* end block 1.2.1.1 */
				// End offset: 0x800D4A74
				// End Line: 1630
			/* end block 1.2.1 */
			// End offset: 0x800D4A74
			// End Line: 1630

			/* begin block 1.2.2 */
				// Start line: 1634
				// Start offset: 0x800D4A7C

				/* begin block 1.2.2.1 */
					// Start line: 1634
					// Start offset: 0x800D4A7C

					/* begin block 1.2.2.1.1 */
						// Start line: 1635
						// Start offset: 0x800D4A94

						/* begin block 1.2.2.1.1.1 */
							// Start line: 1637
							// Start offset: 0x800D4A94

							/* begin block 1.2.2.1.1.1.1 */
								// Start line: 1638
								// Start offset: 0x800D4AA8

								/* begin block 1.2.2.1.1.1.1.1 */
									// Start line: 1640
									// Start offset: 0x800D4AA8

									/* begin block 1.2.2.1.1.1.1.1.1 */
										// Start line: 1644
										// Start offset: 0x800D4B14

										/* begin block 1.2.2.1.1.1.1.1.1.1 */
											// Start line: 1656
											// Start offset: 0x800D4B38
											// Variables:
										// 		int j; // $s1
										/* end block 1.2.2.1.1.1.1.1.1.1 */
										// End offset: 0x800D4C6C
										// End Line: 1676
									/* end block 1.2.2.1.1.1.1.1.1 */
									// End offset: 0x800D4C6C
									// End Line: 1676
								/* end block 1.2.2.1.1.1.1.1 */
								// End offset: 0x800D4C6C
								// End Line: 1676
							/* end block 1.2.2.1.1.1.1 */
							// End offset: 0x800D4C6C
							// End Line: 1676

							/* begin block 1.2.2.1.1.1.2 */
								// Start line: 1683
								// Start offset: 0x800D4C74

								/* begin block 1.2.2.1.1.1.2.1 */
									// Start line: 1686
									// Start offset: 0x800D4C74

									/* begin block 1.2.2.1.1.1.2.1.1 */
										// Start line: 1687
										// Start offset: 0x800D4C84

										/* begin block 1.2.2.1.1.1.2.1.1.1 */
											// Start line: 1697
											// Start offset: 0x800D4CC0
											// Variables:
										// 		int j; // $s0
										/* end block 1.2.2.1.1.1.2.1.1.1 */
										// End offset: 0x800D4E44
										// End Line: 1713
									/* end block 1.2.2.1.1.1.2.1.1 */
									// End offset: 0x800D4E44
									// End Line: 1713
								/* end block 1.2.2.1.1.1.2.1 */
								// End offset: 0x800D4E44
								// End Line: 1713
							/* end block 1.2.2.1.1.1.2 */
							// End offset: 0x800D4E44
							// End Line: 1713
						/* end block 1.2.2.1.1.1 */
						// End offset: 0x800D4E44
						// End Line: 1713
					/* end block 1.2.2.1.1 */
					// End offset: 0x800D4E44
					// End Line: 1713
				/* end block 1.2.2.1 */
				// End offset: 0x800D4E44
				// End Line: 1713
			/* end block 1.2.2 */
			// End offset: 0x800D4E44
			// End Line: 1713
		/* end block 1.2 */
		// End offset: 0x800D4E44
		// End Line: 1713
	/* end block 1 */
	// End offset: 0x800D4E44
	// End Line: 1713

void Hud_BuildNumbers0__Fi(int player)
{
  uint *puVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;
  int time;
  short sVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar9 = (uint *)&gHudF4;
  if (player != 0) {
    puVar9 = (uint *)&DAT_8013e4f8;
  }
  puVar8 = (uint *)&gHudG4;
  if (player != 0) {
    puVar8 = (uint *)&DAT_8013e7c0;
  }
  sVar2 = 0;
  if (player != 0) {
    sVar2 = -0xf;
  }
  if ((&DAT_80113644)[player * 0x2d] != 0) {
    if ((DAT_80112744 == 0) || (true)) {
      time = DAT_80112764;
      if (false) {
        time = 0;
      }
      Hud_BuildETimeString__FP4SPRTi((SPRT *)0xf0,time);
    }
    puVar3 = _DAT_1f800000;
    time = 8;
    if (false) {
      time = 5;
    }
    iVar7 = 0xc;
    if (0xc < time + 0xcU) {
      puVar6 = (uint *)0xf0;
      do {
        iVar7 = iVar7 + 1;
        *puVar6 = *puVar6 & 0xff000000 | *puVar3 & 0xffffff;
        *puVar3 = *puVar3 & 0xff000000 | (uint)puVar6 & 0xffffff;
        puVar6 = puVar6 + 5;
      } while (iVar7 < (int)(time + 0xcU));
    }
    puVar6 = _DAT_1f800000;
    time = 4;
    puVar3 = (uint *)&DAT_00000050;
    do {
      time = time + 1;
      *puVar3 = *puVar3 & 0xff000000 | *puVar6 & 0xffffff;
      *puVar6 = *puVar6 & 0xff000000 | (uint)puVar3 & 0xffffff;
      puVar1 = _DAT_1f800000;
      puVar3 = puVar3 + 5;
    } while (time < 6);
    *puVar8 = *puVar8 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
    *puVar1 = *puVar1 & 0xff000000 | (uint)puVar8 & 0xffffff;
    *puVar9 = *puVar9 & 0xff000000 | (uint)puVar8 & 0xffffff;
    *puVar1 = *puVar1 & 0xff000000 | (uint)puVar9 & 0xffffff;
  }
  if (true) {
    sRam000000e6 = sRam00000016 + sVar2 + sRam00000026;
    sVar2 = sRam000000e6 + 10;
    sVar5 = sRam000000e6 + 7;
    sRam000000d2 = sRam000000e6;
    *(short *)((int)puVar8 + 0x52) = sRam000000e6;
    *(short *)((int)puVar8 + 0x5a) = sRam000000e6;
    *(short *)((int)puVar8 + 0x62) = sVar2;
    *(short *)((int)puVar8 + 0x6a) = sVar2;
    sRam00000262 = sRam000000e6 + 1;
    *(short *)((int)puVar9 + 0x52) = sVar5;
    *(short *)((int)puVar9 + 0x56) = sVar5;
    *(short *)((int)puVar9 + 0x5a) = sVar2;
    *(short *)((int)puVar9 + 0x5e) = sVar2;
    sRam00000276 = *(short *)(&HudSplitTimeDiff1 + player * 4) + sRam00000262;
    sRam000002b2 = *(short *)(&HudSplitTimeDiff2 + player * 4) + sRam00000262;
    sRam0000028a = sRam00000262;
    sRam0000029e = sRam00000262;
    sRam000002c6 = sRam00000262;
    sRam000002da = sRam00000262;
  }
  if ((true) || (true)) {
    if (true) {
      return;
    }
    if (*(int *)(&DAT_801132ac + player * 4) == 0) {
      if (*(int *)((&_Cars_gHumanRaceCarList)[player] + 0x39c) < 1) {
        return;
      }
      time = *(int *)((&_Cars_gHumanRaceCarList)[player] + 0x394);
      if (time < -0x95ff) {
        return;
      }
      if (0x95ff < time) {
        return;
      }
      if (false) {
        return;
      }
      if ((&DAT_8011275c)[player] != 0) {
        return;
      }
      uRam000000d4 = 0;
      puVar6 = (uint *)0x258;
      time = 0x1e;
      Hud_BuildTimeString__FP4SPRTi
                ((SPRT *)0x258,*(int *)((&_Cars_gHumanRaceCarList)[player] + 0x394));
      puVar3 = _DAT_1f800000;
      do {
        time = time + 1;
        *puVar6 = *puVar6 & 0xff000000 | *puVar3 & 0xffffff;
        *puVar3 = *puVar3 & 0xff000000 | (uint)puVar6 & 0xffffff;
        puVar6 = puVar6 + 5;
      } while (time < 0x25);
      time = 10;
      puVar3 = (uint *)0xc8;
      do {
        puVar6 = _DAT_1f800000;
        if (time == 10) {
          Hud_GoTpage__Fi(0);
          uRam000000c8 = uRam000000c8 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
          *_DAT_1f800000 = *_DAT_1f800000 & 0xff000000 | 200;
          Hud_GoTpage__Fi(1);
        }
        else {
          *puVar3 = *puVar3 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
          *puVar6 = *puVar6 & 0xff000000 | (uint)puVar3 & 0xffffff;
        }
        puVar3 = puVar3 + 5;
        time = time + 1;
      } while (time < 0xc);
    }
    else {
      uVar4 = Hud_BuildDistanceString__FP4SPRTi((SPRT *)0x258,player);
      puVar3 = _DAT_1f800000;
      if (uVar4 == 0) {
        return;
      }
      uRam000000d4 = 0;
      time = 0x1e;
      puVar6 = (uint *)0x258;
      do {
        time = time + 1;
        *puVar6 = *puVar6 & 0xff000000 | *puVar3 & 0xffffff;
        *puVar3 = *puVar3 & 0xff000000 | (uint)puVar6 & 0xffffff;
        puVar6 = puVar6 + 5;
      } while (time < 0x23);
      time = 10;
      puVar3 = (uint *)0xc8;
      do {
        puVar6 = _DAT_1f800000;
        if (time == 10) {
          Hud_GoTpage__Fi(0);
          uRam000000c8 = uRam000000c8 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
          *_DAT_1f800000 = *_DAT_1f800000 & 0xff000000 | 200;
          Hud_GoTpage__Fi(1);
        }
        else {
          *puVar3 = *puVar3 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
          *puVar6 = *puVar6 & 0xff000000 | (uint)puVar3 & 0xffffff;
        }
        puVar3 = puVar3 + 5;
        time = time + 1;
      } while (time < 0xc);
    }
  }
  else {
    if ((&DAT_80113644)[player * 0x2d] == 0) {
      return;
    }
    puVar6 = (uint *)0x258;
    uRam000000d4 = 0;
    Hud_BuildTimeString__FP4SPRTi((SPRT *)0x258,0);
    puVar3 = _DAT_1f800000;
    time = 0x1e;
    do {
      time = time + 1;
      *puVar6 = *puVar6 & 0xff000000 | *puVar3 & 0xffffff;
      *puVar3 = *puVar3 & 0xff000000 | (uint)puVar6 & 0xffffff;
      puVar6 = puVar6 + 5;
    } while (time < 0x22);
    time = 10;
    puVar3 = (uint *)0xc8;
    do {
      puVar6 = _DAT_1f800000;
      if (time == 10) {
        Hud_GoTpage__Fi(0);
        uRam000000c8 = uRam000000c8 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
        *_DAT_1f800000 = *_DAT_1f800000 & 0xff000000 | 200;
        Hud_GoTpage__Fi(1);
      }
      else {
        *puVar3 = *puVar3 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
        *puVar6 = *puVar6 & 0xff000000 | (uint)puVar3 & 0xffffff;
      }
      puVar3 = puVar3 + 5;
      time = time + 1;
    } while (time < 0xc);
  }
  puVar3 = _DAT_1f800000;
  puVar8[0x12] = puVar8[0x12] & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  *puVar3 = *puVar3 & 0xff000000 | (uint)(puVar8 + 0x12) & 0xffffff;
  puVar9[0x12] = puVar9[0x12] & 0xff000000 | (uint)(puVar8 + 0x12) & 0xffffff;
  *puVar3 = *puVar3 & 0xff000000 | (uint)(puVar9 + 0x12) & 0xffffff;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildNumbers__Fi(int player /*$s2*/)
 // line 1721, offset 0x800d4e70
	/* begin block 1 */
		// Start line: 1722
		// Start offset: 0x800D4E70
		// Variables:
	// 		int i; // $fp
	// 		struct SPRT *pSprt; // $s5
	// 		struct POLY_F4 *HudF4; // $s1
	// 		struct POLY_G4 *HudG4; // $s0
	// 		int splitY; // $s6

		/* begin block 1.1 */
			// Start line: 1730
			// Start offset: 0x800D4EE4

			/* begin block 1.1.1 */
				// Start line: 1731
				// Start offset: 0x800D4F3C
				// Variables:
			// 		int j; // $a2
			/* end block 1.1.1 */
			// End offset: 0x800D5090
			// End Line: 1742
		/* end block 1.1 */
		// End offset: 0x800D5090
		// End Line: 1742

		/* begin block 1.2 */
			// Start line: 1747
			// Start offset: 0x800D5090

			/* begin block 1.2.1 */
				// Start line: 1749
				// Start offset: 0x800D5110
				// Variables:
			// 		int j; // $a1
			/* end block 1.2.1 */
			// End offset: 0x800D5264
			// End Line: 1760
		/* end block 1.2 */
		// End offset: 0x800D5264
		// End Line: 1760

		/* begin block 1.3 */
			// Start line: 1764
			// Start offset: 0x800D5264

			/* begin block 1.3.1 */
				// Start line: 1765
				// Start offset: 0x800D52BC
				// Variables:
			// 		int j; // $a3
			/* end block 1.3.1 */
			// End offset: 0x800D5460
			// End Line: 1784
		/* end block 1.3 */
		// End offset: 0x800D5460
		// End Line: 1784

		/* begin block 1.4 */
			// Start line: 1829
			// Start offset: 0x800D5640

			/* begin block 1.4.1 */
				// Start line: 1833
				// Start offset: 0x800D5678
				// Variables:
			// 		int speed; // $t1
			// 		int hun; // $s0
			// 		int ten; // $s6
			// 		int x; // $s2
			// 		int y; // stack offset -56
			// 		int w1; // $s3
			// 		int w2; // $s4
			// 		int w3; // stack offset -52
			// 		int w7; // $s7
			// 		int color2; // stack offset -48
			// 		struct POLY_GT4 *prim; // $s1
			// 		unsigned long SpeedColor; // stack offset -44
			/* end block 1.4.1 */
			// End offset: 0x800D59A4
			// End Line: 1890
		/* end block 1.4 */
		// End offset: 0x800D59A4
		// End Line: 1890
	/* end block 1 */
	// End offset: 0x800D5A18
	// End Line: 1898

void Hud_BuildNumbers__Fi(int player)
{
  short sVar1;
  short sVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint *puVar5;
  POLY_GT4 *prim;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  int x;
  uint *puVar15;
  int y;
  int iVar16;
  
  puVar15 = puGp000018bc;
  if (player != 0) {
    puVar15 = puGp000018c0;
  }
  puVar13 = &gHudF4;
  if (player != 0) {
    puVar13 = &DAT_8013e4f8;
  }
  puVar12 = &gHudG4;
  if (player != 0) {
    puVar12 = &DAT_8013e7c0;
  }
  y = 0;
  if (player != 0) {
    y = -0xf;
  }
  if ((((&DAT_80113648)[player * 0x2d] != 0) && (iGp000013f0 == 0)) &&
     (iVar9 = 0x14, DAT_8011276c != 1)) {
    puVar15[0x67] = (&HudPmx_gHudNumberUV)[DAT_80112768];
    puVar6 = puVar15 + 100;
    puVar15[0x71] = (&HudPmx_gHudNumberUV)[DAT_8011276c];
    puVar8 = _DAT_1f800000;
    do {
      iVar9 = iVar9 + 1;
      *puVar6 = *puVar6 & 0xff000000 | *puVar8 & 0xffffff;
      *puVar8 = *puVar8 & 0xff000000 | (uint)puVar6 & 0xffffff;
      puVar5 = _DAT_1f800000;
      puVar6 = puVar6 + 5;
    } while (iVar9 < 0x17);
    iVar9 = 6;
    puVar8 = puVar15 + 0x1e;
    do {
      iVar9 = iVar9 + 1;
      *puVar8 = *puVar8 & 0xff000000 | *puVar5 & 0xffffff;
      *puVar5 = *puVar5 & 0xff000000 | (uint)puVar8 & 0xffffff;
      puVar6 = _DAT_1f800000;
      puVar8 = puVar8 + 5;
    } while (iVar9 < 8);
    *(uint *)(puVar12 + 0x24) = *(uint *)(puVar12 + 0x24) & 0xff000000 | *_DAT_1f800000 & 0xffffff;
    *puVar6 = *puVar6 & 0xff000000 | (uint)(puVar12 + 0x24) & 0xffffff;
    *(uint *)(puVar13 + 0x18) =
         *(uint *)(puVar13 + 0x18) & 0xff000000 | (uint)(puVar12 + 0x24) & 0xffffff;
    *puVar6 = *puVar6 & 0xff000000 | (uint)(puVar13 + 0x18) & 0xffffff;
  }
  if (((((&DAT_80113644)[player * 0x2d] != 0) && (DAT_8011278c != 0)) &&
      ((DAT_8011278c < 0x9600 && ((iGp000013f0 == 0 && (iGp000018fc == 0)))))) &&
     (DAT_8011276c != 1)) {
    if ((DAT_80112744 == 0) || (true)) {
      Hud_BuildTimeString__FP4SPRTi((SPRT *)(puVar15 + 0x73),DAT_8011278c);
    }
    puVar8 = _DAT_1f800000;
    iVar9 = 0x17;
    puVar6 = puVar15 + 0x73;
    do {
      iVar9 = iVar9 + 1;
      *puVar6 = *puVar6 & 0xff000000 | *puVar8 & 0xffffff;
      *puVar8 = *puVar8 & 0xff000000 | (uint)puVar6 & 0xffffff;
      puVar5 = _DAT_1f800000;
      puVar6 = puVar6 + 5;
    } while (iVar9 < 0x1e);
    iVar9 = 8;
    puVar8 = puVar15 + 0x28;
    do {
      iVar9 = iVar9 + 1;
      *puVar8 = *puVar8 & 0xff000000 | *puVar5 & 0xffffff;
      *puVar5 = *puVar5 & 0xff000000 | (uint)puVar8 & 0xffffff;
      puVar6 = _DAT_1f800000;
      puVar8 = puVar8 + 5;
    } while (iVar9 < 10);
    *(uint *)(puVar12 + 0x6c) = *(uint *)(puVar12 + 0x6c) & 0xff000000 | *_DAT_1f800000 & 0xffffff;
    *puVar6 = *puVar6 & 0xff000000 | (uint)(puVar12 + 0x6c) & 0xffffff;
    *(uint *)(puVar13 + 0x30) =
         *(uint *)(puVar13 + 0x30) & 0xff000000 | (uint)(puVar12 + 0x6c) & 0xffffff;
    *puVar6 = *puVar6 & 0xff000000 | (uint)(puVar13 + 0x30) & 0xffffff;
  }
  if ((((&DAT_8011364c)[player * 0x2d] != 0) && (iGp000013f0 == 0)) && (1 < DAT_80112788)) {
    *(short *)(puVar15 + 0xbb) =
         (*(short *)(iGp000018b8 + 0x38) + *(short *)(iGp000018b8 + 0x28) + -2) -
         *(short *)(&DAT_80110ca8 + (DAT_80112784 + 0x2c) * 0x14);
    puVar15[0xbc] = *(uint *)(&DAT_80111008 + DAT_80112784 * 0x14);
    iVar9 = 0x25;
    *(undefined2 *)(puVar15 + 0xbd) = *(undefined2 *)(&DAT_80110ca8 + (DAT_80112784 + 0x2c) * 0x14);
    puVar15[0xc6] = *(uint *)(&DAT_801110bc + DAT_80112788 * 0x14);
    puVar8 = _DAT_1f800000;
    puVar6 = puVar15 + 0xb9;
    *(undefined2 *)(puVar15 + 199) = *(undefined2 *)(&DAT_80110ca8 + (DAT_80112788 + 0x35) * 0x14);
    do {
      iVar9 = iVar9 + 1;
      *puVar6 = *puVar6 & 0xff000000 | *puVar8 & 0xffffff;
      *puVar8 = *puVar8 & 0xff000000 | (uint)puVar6 & 0xffffff;
      puVar6 = puVar6 + 5;
    } while (iVar9 < 0x28);
    if ((&DAT_8011363c)[iVar9 * 0x2d] != 0) {
      Hud_GoTpage__Fi(0);
      puVar8 = _DAT_1f800000;
      puVar15[200] = puVar15[200] & 0xff000000 | *_DAT_1f800000 & 0xffffff;
      *puVar8 = *puVar8 & 0xff000000 | (uint)(puVar15 + 200) & 0xffffff;
      Hud_GoTpage__Fi(1);
    }
  }
  Hud_GoTpage__Fi(0);
  puVar8 = _DAT_1f800000;
  if ((&DAT_80113638)[player * 0x2d] == 0) goto LAB_800d5640;
  if (true) {
    puVar6 = puVar15 + 0xf0;
    puVar15[0xf0] = puVar15[0xf0] & 0xff000000 | *_DAT_1f800000 & 0xffffff;
LAB_800d551c:
    *puVar8 = *puVar8 & 0xff000000 | (uint)puVar6 & 0xffffff;
  }
  else {
    if (false) {
      puVar6 = puVar15 + 0xeb;
      puVar15[0xeb] = puVar15[0xeb] & 0xff000000 | *_DAT_1f800000 & 0xffffff;
      goto LAB_800d551c;
    }
    puVar15[0xc3] = puVar15[0xc3] & 0xff000000 | *_DAT_1f800000 & 0xffffff;
    *puVar8 = *puVar8 & 0xff000000 | (uint)(puVar15 + 0xc3) & 0xffffff;
  }
  puVar8 = _DAT_1f800000;
  if ((&DAT_80113630)[player * 0x2d] == 0) {
    puVar6 = puVar15 + 0xfa;
    puVar15[0xfa] = puVar15[0xfa] & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  }
  else {
    puVar6 = puVar15 + 0xf5;
    puVar15[0xf5] = puVar15[0xf5] & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  }
  *puVar8 = *puVar8 & 0xff000000 | (uint)puVar6 & 0xffffff;
LAB_800d5640:
  Hud_GoTpage__Fi(1);
  if ((&DAT_80113638)[player * 0x2d] != 0) {
    iVar9 = fixedmult((&DAT_80113634)[player * 0x2d],DAT_8011277c);
    prim = _DAT_1f800004;
    puVar8 = _DAT_1f800000;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xffff;
    }
    iVar10 = iVar9 >> 0x10;
    iVar14 = (int)*(short *)(iGp000018b8 + 4) + (int)*(short *)(iGp000018b8 + 0x30);
    x = iVar14 + 6;
    puVar3 = &_DAT_1f800004->tag;
    sVar1 = *(short *)(iGp000018b8 + 0x32);
    sVar2 = *(short *)(iGp000018b8 + 6);
    uVar11 = (uint)_DAT_1f800004 & 0xffffff;
    puVar4 = &_DAT_1f800004->tag;
    _DAT_1f800004 = _DAT_1f800004 + 1;
    *puVar4 = *puVar3 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
    y = (int)sVar2 + (int)sVar1 + y;
    *puVar8 = *puVar8 & 0xff000000 | uVar11;
    iVar7 = (iVar10 / 10 + (iVar10 >> 0x1f)) - (iVar9 >> 0x1f);
    iVar9 = (iVar10 / 100 + (iVar10 >> 0x1f)) - (iVar9 >> 0x1f);
    iVar16 = iVar7 + iVar9 * -10;
    Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
              (prim,(HudPmx_tShape *)(&DAT_80111008 + (iVar10 + iVar7 * -10) * 0x14),x,y,0xc8c8c8);
    *(undefined4 *)&prim->r3 = 0x505050;
    *(undefined4 *)&prim->r2 = 0x505050;
    prim = _DAT_1f800004;
    puVar8 = _DAT_1f800000;
    if ((iVar16 != 1) && (iVar16 != 7)) {
      x = iVar14 + 5;
    }
    if ((iVar9 != 0) || (iVar16 != 0)) {
      _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
      uVar11 = (uint)_DAT_1f800004 & 0xffffff;
      _DAT_1f800004 = _DAT_1f800004 + 1;
      *puVar8 = *puVar8 & 0xff000000 | uVar11;
      Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
                (prim,(HudPmx_tShape *)(&DAT_80111008 + iVar16 * 0x14),x,y,0xc8c8c8);
      *(undefined4 *)&prim->r3 = 0x505050;
      *(undefined4 *)&prim->r2 = 0x505050;
    }
    prim = _DAT_1f800004;
    puVar8 = _DAT_1f800000;
    if (iVar16 == 1) {
      x = x + -1;
    }
    sVar1 = *(short *)(&DAT_80110ca8 + (iVar9 + 0x2c) * 0x14);
    if (iVar9 != 0) {
      _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
      uVar11 = (uint)_DAT_1f800004 & 0xffffff;
      _DAT_1f800004 = _DAT_1f800004 + 1;
      *puVar8 = *puVar8 & 0xff000000 | uVar11;
      Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
                (prim,(HudPmx_tShape *)(&DAT_80111008 + iVar9 * 0x14),(x + -1) - (int)sVar1,y,
                 0xc8c8c8);
      *(undefined4 *)&prim->r3 = 0x505050;
      *(undefined4 *)&prim->r2 = 0x505050;
    }
  }
  puVar8 = _DAT_1f800000;
  if (((&DAT_8011275c)[player] != 0) && (false)) {
    *puVar15 = *puVar15 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
    *puVar8 = *puVar8 & 0xff000000 | (uint)puVar15 & 0xffffff;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_InitMap__Fv()
 // line 1917, offset 0x800d5a48
	/* begin block 1 */
		// Start line: 1918
		// Start offset: 0x800D5A48
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x800D5AE0
	// End Line: 1927

void Hud_InitMap__Fv(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = Cars_gNumRaceCars;
  iVar3 = 0;
  if (0 < Cars_gNumRaceCars) {
    puVar5 = &Hud_gMarkerColor;
    piVar4 = &_Cars_gRaceCarList;
    do {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + 1;
      *puVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x288) + 0x94);
      puVar5 = puVar5 + 1;
    } while (iVar3 < iVar1);
  }
  iVar1 = Cars_gNumCopCars;
  iVar3 = 0;
  if (0 < Cars_gNumCopCars) {
    puVar5 = &Hud_gCopMarkerColor;
    piVar4 = &_Cars_gCopCarList;
    do {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + 1;
      *puVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x288) + 0x94);
      puVar5 = puVar5 + 1;
    } while (iVar3 < iVar1);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildMapMarkers__Fi(int player /*$a0*/)
 // line 2019, offset 0x800d5ae8
	/* begin block 1 */
		// Start line: 2020
		// Start offset: 0x800D5AE8
		// Variables:
	// 		int i; // $s5
	// 		int rx; // $s2
	// 		int rz; // $s1
	// 		int x; // $s3
	// 		int z; // $s0
	// 		int cenX; // stack offset -48
	// 		int cenZ; // stack offset -44
	// 		int mapy; // $fp

		/* begin block 1.1 */
			// Start line: 2020
			// Start offset: 0x800D5AE8

			/* begin block 1.1.1 */
				// Start line: 2051
				// Start offset: 0x800D5B40

				/* begin block 1.1.1.1 */
					// Start line: 2053
					// Start offset: 0x800D5B58

					/* begin block 1.1.1.1.1 */
						// Start line: 2054
						// Start offset: 0x800D5B70
						// Variables:
					// 		struct SPRT *sprt; // $a2
					// 		int slice; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800D5D2C
					// End Line: 2084
				/* end block 1.1.1.1 */
				// End offset: 0x800D5D2C
				// End Line: 2084
			/* end block 1.1.1 */
			// End offset: 0x800D5D2C
			// End Line: 2084
		/* end block 1.1 */
		// End offset: 0x800D5D38
		// End Line: 2086

		/* begin block 1.2 */
			// Start line: 2088
			// Start offset: 0x800D5D38

			/* begin block 1.2.1 */
				// Start line: 2088
				// Start offset: 0x800D5D50

				/* begin block 1.2.1.1 */
					// Start line: 2090
					// Start offset: 0x800D5D68

					/* begin block 1.2.1.1.1 */
						// Start line: 2091
						// Start offset: 0x800D5D80
						// Variables:
					// 		struct SPRT *sprt; // $a3
					// 		int slice; // $v1
					/* end block 1.2.1.1.1 */
					// End offset: 0x800D5F78
					// End Line: 2128
				/* end block 1.2.1.1 */
				// End offset: 0x800D5F78
				// End Line: 2128
			/* end block 1.2.1 */
			// End offset: 0x800D5F78
			// End Line: 2128
		/* end block 1.2 */
		// End offset: 0x800D5F88
		// End Line: 2134
	/* end block 1 */
	// End offset: 0x800D5F88
	// End Line: 2134

void Hud_BuildMapMarkers__Fi(int player)
{
  uint *puVar1;
  SPRT *sprt;
  int iVar2;
  int iVar3;
  int shapeIdx;
  ulong color;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  ulong *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar2 = iGp00001430;
  iVar9 = 0;
  piVar7 = &_Cars_gCopCarList;
  iVar3 = iGp00001434 + 2;
  while (iVar9 < Cars_gNumCopCars) {
    if (*(char *)(*piVar7 + 0x91) != '\0') {
      piVar4 = (int *)((int)*(short *)(*piVar7 + 8) * 0x20);
      iVar6 = *piVar4;
      iVar10 = iVar6 / iGp00001428;
      if (iGp00001428 == 0) {
        trap(0x1c00);
      }
      if ((iGp00001428 == -1) && (iVar6 == -0x80000000)) {
        trap(0x1800);
      }
      iVar6 = piVar4[2];
      iVar11 = iVar6 / iGp0000142c;
      if (iGp0000142c == 0) {
        trap(0x1c00);
      }
      if ((iGp0000142c == -1) && (iVar6 == -0x80000000)) {
        trap(0x1800);
      }
      shapeIdx = fixedmult(uGp000013fc,iVar10);
      iVar6 = fixedmult(uGp00001400,iVar11);
      iVar6 = (iVar2 + shapeIdx) - iVar6;
      iVar10 = fixedmult(uGp00001400,iVar10);
      iVar11 = fixedmult(uGp000013fc,iVar11);
      sprt = _DAT_1f800004;
      puVar1 = _DAT_1f800000;
      if (false) {
        iVar6 = -iVar6;
      }
      _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
      *puVar1 = *puVar1 & 0xff000000 | (uint)_DAT_1f800004 & 0xffffff;
      _DAT_1f800004 = _DAT_1f800004 + 1;
      if ((*(uint *)(*piVar7 + 0x570) & 2) == 0) {
        uGp000018c8 = (&Hud_gCopMarkerColor)[iVar9];
      }
      else {
        uGp000018c8 = 0xff;
        if ((gFlip == 0) && (uGp000018c8 = 0xff, DAT_8011e0d4 == 0)) {
          uGp000018c8 = 0xff0000;
        }
      }
      Hud_BuildSprite__FP4SPRTiiiUli
                (sprt,0x7a,iVar6 + 0x14U & 0xffff,0x18U - (iVar3 + iVar10 + iVar11) & 0xffff,
                 uGp000018c8,0);
    }
    piVar7 = piVar7 + 1;
    iVar9 = iVar9 + 1;
  }
  iVar9 = 0;
  puVar8 = &Hud_gMarkerColor;
  piVar7 = &_Cars_gRaceCarList;
  while (iVar9 < Cars_gNumRaceCars) {
    if (*(char *)(*piVar7 + 0x91) != '\0') {
      piVar4 = (int *)((int)*(short *)(*piVar7 + 8) * 0x20);
      iVar6 = *piVar4;
      iVar10 = iVar6 / iGp00001428;
      if (iGp00001428 == 0) {
        trap(0x1c00);
      }
      if ((iGp00001428 == -1) && (iVar6 == -0x80000000)) {
        trap(0x1800);
      }
      iVar6 = piVar4[2];
      iVar11 = iVar6 / iGp0000142c;
      if (iGp0000142c == 0) {
        trap(0x1c00);
      }
      if ((iGp0000142c == -1) && (iVar6 == -0x80000000)) {
        trap(0x1800);
      }
      shapeIdx = fixedmult(uGp000013fc,iVar10);
      iVar6 = fixedmult(uGp00001400,iVar11);
      iVar6 = (iVar2 + shapeIdx) - iVar6;
      iVar10 = fixedmult(uGp00001400,iVar10);
      iVar11 = fixedmult(uGp000013fc,iVar11);
      sprt = _DAT_1f800004;
      puVar1 = _DAT_1f800000;
      if (false) {
        iVar6 = -iVar6;
      }
      _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
      *puVar1 = *puVar1 & 0xff000000 | (uint)_DAT_1f800004 & 0xffffff;
      uVar5 = *(uint *)(*piVar7 + 0x260);
      _DAT_1f800004 = _DAT_1f800004 + 1;
      if ((uVar5 & 0x200) == 0) {
        if ((uVar5 & 4) == 0) {
          shapeIdx = 0x7a;
          uVar5 = iVar6 + 0x14;
        }
        else {
          shapeIdx = 0x79;
          uVar5 = iVar6 + 0x13;
        }
        color = *puVar8;
      }
      else {
        if ((*(uint *)(*piVar7 + 0x570) & 2) == 0) {
          color = *puVar8;
        }
        else {
          color = 0xff;
          if ((gFlip == 0) && (color = 0xff, DAT_8011e0d4 == 0)) {
            color = 0xff0000;
          }
        }
        shapeIdx = 0x79;
        uVar5 = iVar6 + 0x13;
        uGp000018c8 = color;
      }
      Hud_BuildSprite__FP4SPRTiiiUli
                (sprt,shapeIdx,uVar5 & 0xffff,0x18U - (iVar3 + iVar10 + iVar11) & 0xffff,color,0);
    }
    puVar8 = puVar8 + 1;
    piVar7 = piVar7 + 1;
    iVar9 = iVar9 + 1;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_WingmanFlash__Fii(int player /*$s1*/, int index /*$s3*/)
 // line 2148, offset 0x800d5fb8
	/* begin block 1 */
		// Start line: 2149
		// Start offset: 0x800D5FB8

		/* begin block 1.1 */
			// Start line: 2149
			// Start offset: 0x800D5FB8

			/* begin block 1.1.1 */
				// Start line: 2151
				// Start offset: 0x800D5FF8

				/* begin block 1.1.1.1 */
					// Start line: 2157
					// Start offset: 0x800D6020

					/* begin block 1.1.1.1.1 */
						// Start line: 2157
						// Start offset: 0x800D6020
					/* end block 1.1.1.1.1 */
					// End offset: 0x800D6020
					// End Line: 2157
				/* end block 1.1.1.1 */
				// End offset: 0x800D6020
				// End Line: 2157
			/* end block 1.1.1 */
			// End offset: 0x800D6050
			// End Line: 2158
		/* end block 1.1 */
		// End offset: 0x800D6050
		// End Line: 2158
	/* end block 1 */
	// End offset: 0x800D6050
	// End Line: 2158

void Hud_WingmanFlash__Fii(int player,int index)
{
  if ((Replay_ReplayMode < 2) && (iGp000013dc == 0)) {
    if ((&Hud_gWingmanInterface)[player] != '\x01') {
      Hud_InitMapFrame__Fii(player,1);
      (&Hud_gWingmanInterface)[player] = '\x01';
    }
    (&Hud_gWingmanFlashIcon)[player] = (char)index;
    (&Hud_gWingmanFlashTicks)[player] = ticks + 100;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildWingmanInterface__Fi(int player /*$s2*/)
 // line 2162, offset 0x800d606c
	/* begin block 1 */
		// Start line: 2163
		// Start offset: 0x800D606C
		// Variables:
	// 		int splitY; // $t0
	// 		int flashTicks; // $s3
	// 		struct POLY_F4 *poly; // $a0
	// 		int x; // $s7
	// 		int y; // $s4

		/* begin block 1.1 */
			// Start line: 2167
			// Start offset: 0x800D60A4

			/* begin block 1.1.1 */
				// Start line: 2167
				// Start offset: 0x800D60A4
			/* end block 1.1.1 */
			// End offset: 0x800D60A4
			// End Line: 2167
		/* end block 1.1 */
		// End offset: 0x800D60A4
		// End Line: 2167

		/* begin block 1.2 */
			// Start line: 2167
			// Start offset: 0x800D60A4

			/* begin block 1.2.1 */
				// Start line: 2181
				// Start offset: 0x800D61B8
			/* end block 1.2.1 */
			// End offset: 0x800D6284
			// End Line: 2184
		/* end block 1.2 */
		// End offset: 0x800D6284
		// End Line: 2184

		/* begin block 1.3 */
			// Start line: 2187
			// Start offset: 0x800D6284
			// Variables:
		// 		int i; // $s2
		/* end block 1.3 */
		// End offset: 0x800D6318
		// End Line: 2195
	/* end block 1 */
	// End offset: 0x800D6318
	// End Line: 2196

void Hud_BuildWingmanInterface__Fi(int player)
{
  uint *puVar1;
  POLY_F4 *prim;
  char *str;
  uint uVar2;
  int y;
  int x;
  int iVar3;
  int iVar4;
  int y_00;
  
  x = 0;
  if (player != 0) {
    x = -0xf;
  }
  iVar4 = (&Hud_gWingmanFlashTicks)[player] - ticks;
  iVar3 = (int)sRam00000038;
  y_00 = (int)sRam0000003a + x + 2;
  str = TextSys_Word__Fi(0x29);
  x = iVar3 + -0x1b;
  Hud_BuildString__FPciiiib(str,x,y_00 + 3,0x808080,0,0);
  str = TextSys_Word__Fi(0x2a);
  Hud_BuildString__FPciiiib(str,x,y_00 + 0xc,0x808080,player,0);
  str = TextSys_Word__Fi(0x2b);
  Hud_BuildString__FPciiiib(str,x,y_00 + 0x15,0x808080,player,0);
  str = TextSys_Word__Fi(0x2c);
  Hud_BuildString__FPciiiib(str,x,y_00 + 0x1e,0x808080,player,0);
  str = TextSys_Word__Fi(0x2d);
  Hud_BuildString__FPciiiib(str,x,y_00 + 0x27,0x808080,player,0);
  prim = _DAT_1f800004;
  puVar1 = _DAT_1f800000;
  if (0 < iVar4) {
    _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
    uVar2 = (uint)_DAT_1f800004 & 0xffffff;
    _DAT_1f800004 = _DAT_1f800004 + 1;
    *puVar1 = *puVar1 & 0xff000000 | uVar2;
    Hud_BuildF4__FP7POLY_F4iiiiiUl
              (prim,0,iVar3 + -0x10,
               y_00 + ((uint)(byte)(&Hud_gWingmanFlashIcon)[player] + 1) * 9 + 2,0x3f,8,
               (iVar4 % 0x14) * 10);
  }
  iVar4 = 0;
  x = 2;
  do {
    prim = _DAT_1f800004;
    puVar1 = _DAT_1f800000;
    y = y_00 + x;
    x = x + 9;
    iVar4 = iVar4 + 1;
    _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
    uVar2 = (uint)_DAT_1f800004 & 0xffffff;
    _DAT_1f800004 = _DAT_1f800004 + 1;
    *puVar1 = *puVar1 & 0xff000000 | uVar2;
    Hud_BuildF4__FP7POLY_F4iiiiiUl(prim,0,iVar3 + -0x1c,y,0x4b,7,0);
    prim = _DAT_1f800004;
    puVar1 = _DAT_1f800000;
  } while (iVar4 < 5);
  _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  uVar2 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 1;
  *puVar1 = *puVar1 & 0xff000000 | uVar2;
  Hud_BuildF4__FP7POLY_F4iiiiiUl(prim,1,iVar3 + -0x1c,y_00,0x4b,0x30,0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_InitCdPlayer__Fv()
 // line 2215, offset 0x800d63b8
	/* begin block 1 */
		// Start line: 2216
		// Start offset: 0x800D63B8
	/* end block 1 */
	// End offset: 0x800D63B8
	// End Line: 2220

void Hud_InitCdPlayer__Fv(void)
{
  Hud_gCdActive = 0;
  Hud_ActivateCDPlayer = (uint)(Replay_ReplayMode < 2);
  Hud_gCdLastTick = 0;
  Hud_gCdScrollTitle = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildCdPlayer__Fii(int type /*$s6*/)
 // line 2225, offset 0x800d63dc
	/* begin block 1 */
		// Start line: 2226
		// Start offset: 0x800D63DC
		// Variables:
	// 		int x; // $s7
	// 		int y; // $fp
	// 		int index; // $s4
	// 		int time; // $s5
	// 		char *title; // $s1
	// 		char *artist; // $s0
	// 		static unsigned int keepup; // offset 0x64
	// 		int tx; // $a1
	// 		int dx; // $s3
	// 		int w; // $v1
	// 		int min; // $a2
	// 		int sec; // $v0
	// 		char *s; // $a2
	// 		char strindex[4]; // stack offset -168
	// 		char strscrolltitle[30]; // stack offset -160
	// 		char strartist[30]; // stack offset -128
	// 		char strtitle[30]; // stack offset -96
	// 		char strtime[10]; // stack offset -64
	// 		char strtest[2]; // stack offset -48
	// 		struct AudioMus_tCurrentSong *currentSong; // $s2

		/* begin block 1.1 */
			// Start line: 2274
			// Start offset: 0x800D6588

			/* begin block 1.1.1 */
				// Start line: 2275
				// Start offset: 0x800D6598

				/* begin block 1.1.1.1 */
					// Start line: 2281
					// Start offset: 0x800D65AC

					/* begin block 1.1.1.1.1 */
						// Start line: 2281
						// Start offset: 0x800D65AC
					/* end block 1.1.1.1.1 */
					// End offset: 0x800D65AC
					// End Line: 2281
				/* end block 1.1.1.1 */
				// End offset: 0x800D65AC
				// End Line: 2281
			/* end block 1.1.1 */
			// End offset: 0x800D65DC
			// End Line: 2288
		/* end block 1.1 */
		// End offset: 0x800D65DC
		// End Line: 2288

		/* begin block 1.2 */
			// Start line: 2324
			// Start offset: 0x800D666C

			/* begin block 1.2.1 */
				// Start line: 2329
				// Start offset: 0x800D6688

				/* begin block 1.2.1.1 */
					// Start line: 2330
					// Start offset: 0x800D6688

					/* begin block 1.2.1.1.1 */
						// Start line: 2331
						// Start offset: 0x800D6690

						/* begin block 1.2.1.1.1.1 */
							// Start line: 2332
							// Start offset: 0x800D6690

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 2334
								// Start offset: 0x800D66A8

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 2334
									// Start offset: 0x800D66A8

									/* begin block 1.2.1.1.1.1.1.1.1 */
										// Start line: 2334
										// Start offset: 0x800D66A8
									/* end block 1.2.1.1.1.1.1.1.1 */
									// End offset: 0x800D66A8
									// End Line: 2334
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x800D66A8
								// End Line: 2334
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x800D66A8
							// End Line: 2334
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800D66A8
						// End Line: 2334
					/* end block 1.2.1.1.1 */
					// End offset: 0x800D66A8
					// End Line: 2334
				/* end block 1.2.1.1 */
				// End offset: 0x800D6724
				// End Line: 2356

				/* begin block 1.2.1.2 */
					// Start line: 2361
					// Start offset: 0x800D6724

					/* begin block 1.2.1.2.1 */
						// Start line: 2362
						// Start offset: 0x800D672C

						/* begin block 1.2.1.2.1.1 */
							// Start line: 2365
							// Start offset: 0x800D672C

							/* begin block 1.2.1.2.1.1.1 */
								// Start line: 2386
								// Start offset: 0x800D675C

								/* begin block 1.2.1.2.1.1.1.1 */
									// Start line: 2387
									// Start offset: 0x800D675C

									/* begin block 1.2.1.2.1.1.1.1.1 */
										// Start line: 2387
										// Start offset: 0x800D675C

										/* begin block 1.2.1.2.1.1.1.1.1.1 */
											// Start line: 2387
											// Start offset: 0x800D675C
										/* end block 1.2.1.2.1.1.1.1.1.1 */
										// End offset: 0x800D675C
										// End Line: 2387
									/* end block 1.2.1.2.1.1.1.1.1 */
									// End offset: 0x800D675C
									// End Line: 2387
								/* end block 1.2.1.2.1.1.1.1 */
								// End offset: 0x800D6778
								// End Line: 2389
							/* end block 1.2.1.2.1.1.1 */
							// End offset: 0x800D6790
							// End Line: 2390

							/* begin block 1.2.1.2.1.1.2 */
								// Start line: 2393
								// Start offset: 0x800D6790

								/* begin block 1.2.1.2.1.1.2.1 */
									// Start line: 2393
									// Start offset: 0x800D6790

									/* begin block 1.2.1.2.1.1.2.1.1 */
										// Start line: 2393
										// Start offset: 0x800D6790

										/* begin block 1.2.1.2.1.1.2.1.1.1 */
											// Start line: 2393
											// Start offset: 0x800D6790
										/* end block 1.2.1.2.1.1.2.1.1.1 */
										// End offset: 0x800D6790
										// End Line: 2393
									/* end block 1.2.1.2.1.1.2.1.1 */
									// End offset: 0x800D6790
									// End Line: 2393
								/* end block 1.2.1.2.1.1.2.1 */
								// End offset: 0x800D67B0
								// End Line: 2394
							/* end block 1.2.1.2.1.1.2 */
							// End offset: 0x800D67B0
							// End Line: 2394
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x800D67B0
						// End Line: 2394
					/* end block 1.2.1.2.1 */
					// End offset: 0x800D688C
					// End Line: 2427

					/* begin block 1.2.1.2.2 */
						// Start line: 2432
						// Start offset: 0x800D6894

						/* begin block 1.2.1.2.2.1 */
							// Start line: 2432
							// Start offset: 0x800D6894

							/* begin block 1.2.1.2.2.1.1 */
								// Start line: 2432
								// Start offset: 0x800D6894
							/* end block 1.2.1.2.2.1.1 */
							// End offset: 0x800D6894
							// End Line: 2432
						/* end block 1.2.1.2.2.1 */
						// End offset: 0x800D6894
						// End Line: 2432
					/* end block 1.2.1.2.2 */
					// End offset: 0x800D68A4
					// End Line: 2434
				/* end block 1.2.1.2 */
				// End offset: 0x800D68A4
				// End Line: 2434
			/* end block 1.2.1 */
			// End offset: 0x800D6B18
			// End Line: 2485
		/* end block 1.2 */
		// End offset: 0x800D6B18
		// End Line: 2485
	/* end block 1 */
	// End offset: 0x800D6B18
	// End Line: 2485

void Hud_BuildCdPlayer__Fii(int type)
{
  bool bVar1;
  ushort uVar2;
  int y;
  AudioMus_tCurrentSong *pAVar3;
  int x;
  int iVar4;
  byte *pbVar5;
  int wordnum;
  byte *pbVar6;
  char *__s;
  byte *__s_00;
  int w;
  int local_b8;
  int iVar7;
  int x_00;
  char acStack168 [8];
  byte local_a0 [32];
  char acStack128 [32];
  byte local_60 [32];
  char acStack64 [17];
  undefined local_2f;
  
  x = (int)sRam0000003c;
  y = (int)sRam0000003e;
  x_00 = x + 2;
  if (type == 0) {
    DAT_8013d900 = 1;
  }
  w = 0;
  local_2f = 0;
  pAVar3 = AudioMus_GetCurrentSong__Fv();
  if (pAVar3 == (AudioMus_tCurrentSong *)0x0) {
    return;
  }
  if (Hud_gCdActive == 0) {
    bVar1 = false;
    if ((((true) || ((countdown < 4 && (true)))) ||
        ((uVar2 = PAD_state(4), (uVar2 & 0x400) != 0 && (DashHUD_gInfo != 0)))) ||
       ((uVar2 = PAD_state(0), (uVar2 & 0x400) != 0 && ((true || (DashHUD_gInfo != 0)))))) {
      bVar1 = true;
    }
    if ((bVar1) ||
       ((((DAT_8013e8a1 == '#' && (0xbf < DAT_8013e8a7)) && ((true || (DashHUD_gInfo != 0)))) ||
        (((DAT_8013e8c1 == '#' && (0xbf < DAT_8013e8c7)) && (DashHUD_gInfo != 0)))))) {
      Hud_gCdActive = 1;
      Hud_ActivateCDPlayer = 1;
    }
  }
  if (Hud_ActivateCDPlayer != 0) {
    if (false) {
      Hud_gCdActive = 1;
    }
    Hud_ActivateCDPlayer = 0;
    Hud_gCdScrollTitle = 1;
    Hud_gCdLastTick = ticks;
    if (type == 0) {
      DAT_8013d900 = 1;
    }
    else {
      DAT_8013d900 = 0;
    }
  }
  if (DAT_8013d900 != 0) {
    type = 0;
  }
  iVar7 = pAVar3->remaining;
  local_b8 = pAVar3->index;
  __s_00 = local_60;
  if ((pAVar3->info).title == (char *)0x0) {
    __s_00 = (byte *)0x0;
  }
  else {
    sprintf((char *)__s_00,"%s");
  }
  __s = acStack128;
  if ((pAVar3->info).artist == (char *)0x0) {
    __s = (char *)0x0;
  }
  else {
    sprintf(__s,"%s");
  }
  uppercase__FPc((char *)__s_00);
  if ((type == 0) && (__s != (char *)0x0)) {
    uppercase__FPc(__s);
  }
  if (Hud_gCdActive == 0) {
    Hud_kTurnSongOffNext = 1;
    return;
  }
  if (local_b8 < 1) {
    if (local_b8 == 0) {
      sprintf(acStack168,"- -");
      wordnum = 0x44;
    }
    else {
      if (local_b8 == -2) {
        sprintf(acStack168,"- -");
        wordnum = 0x45;
      }
      else {
        sprintf(acStack168,"- -");
        __s = (char *)0x0;
        if (__s_00 != (byte *)0x0) goto LAB_800d6724;
        wordnum = 0x46;
      }
    }
    __s = (char *)0x0;
    __s_00 = (byte *)TextSys_Word__Fi(wordnum);
LAB_800d6724:
    if (__s_00 == (byte *)0x0) {
      DAT_8013d900 = 0;
      Hud_gCdLastTick = ticks;
      goto LAB_800d68a4;
    }
  }
  else {
    sprintf(acStack168,"%02d",local_b8);
    if (__s_00 == (byte *)0x0) {
      Hud_gCdScrollTitle = 1;
      Hud_gCdLastTick = ticks;
      goto LAB_800d6724;
    }
  }
  w = Hud_BuildString__FPciiiib((char *)__s_00,0,0,0,0,1);
  if (Hud_gCdScrollTitle < w + 0x4c) {
    while (Hud_gCdLastTick < ticks) {
      Hud_gCdScrollTitle = Hud_gCdScrollTitle + 1;
      Hud_gCdLastTick = Hud_gCdLastTick + 4;
    }
  }
  else {
    if (Hud_gCdLastTick + 0x80 < ticks) {
      Hud_gCdActive = 0;
    }
  }
  w = 0;
  pbVar6 = local_a0;
  wordnum = 0x4c - Hud_gCdScrollTitle;
  if (*__s_00 != 0) {
    pbVar5 = __s_00;
    do {
      if ((int)(__s_00 + 0x3f) <= (int)pbVar5) break;
      if (*pbVar5 == 0x20) {
        iVar4 = 3;
      }
      else {
        if ((uint)*pbVar5 - 0x30 < 10) {
          iVar4 = (uint)*pbVar5 + 0x6e;
        }
        else {
          iVar4 = (uint)*pbVar5 + 0x43;
        }
        iVar4 = (int)*(short *)(&DAT_80110ca8 + iVar4 * 0x14) + 1;
      }
      if (0x4b < wordnum + iVar4) break;
      if (wordnum < 0) {
        w = w + iVar4;
      }
      else {
        *pbVar6 = *pbVar5;
        pbVar6 = pbVar6 + 1;
      }
      pbVar5 = pbVar5 + 1;
      wordnum = wordnum + iVar4;
    } while (*pbVar5 != 0);
  }
  *pbVar6 = 0;
LAB_800d68a4:
  if (type == 0) {
    if (__s_00 == (byte *)0x0) {
      return;
    }
    Hud_gShowedCDPlayer = 1;
    Hud_BuildString__FPciiiib
              ((char *)local_a0,(x_00 + w + 10) - (Hud_gCdScrollTitle + -0x4c),y + 0xc,0xbebe,0,0);
    if (__s != (char *)0x0) {
      Hud_BuildString__FPciiiib(__s,x + 0xc,y + 0x15,0x808080,0,0);
    }
    Hud_GoTpage__Fi(0);
    Hud_BlackThinBox__Fiiii((int)sRam0000003c + 10,(int)sRam0000003e + 10,0x50,0x12);
    y = 0;
    w = 0x50;
    local_b8 = 0x12;
    x = (int)sRam0000003c + 10;
    x_00 = (int)sRam0000003e + 10;
  }
  else {
    Hud_gShowedCDPlayer = 1;
    Font_TextColor__Fi(4);
    Font_TextXY__FPcii(acStack168,x_00,y);
    if (__s_00 != (byte *)0x0) {
      Font_TextColor__Fi(3);
      Hud_BuildString__FPciiiib
                ((char *)local_a0,(x_00 + w + 0x16) - (Hud_gCdScrollTitle + -0x4c),y + 5,0xbebe,0,0)
      ;
      Hud_GoTpage__Fi(0);
      if (local_b8 != 0) {
        sprintf(acStack64,"%1d%c%02d",iVar7 / 60000,(uint)(byte)"::\'\'\'."[DAT_801132cc],
                (iVar7 % 60000) / 1000);
        Font_TextColor__Fi(4);
        x = textpixels(acStack64);
        Font_TextXY__FPcii(acStack64,(x_00 - x) + 0x5c,y + 0xe);
      }
    }
    Hud_BlackThinBox__Fiiii((int)sRam0000003c,(int)sRam0000003e,0x66,0x1c);
    Hud_FBuildF4__FiiiiiUlcc(0,(int)sRam0000003c,(int)sRam0000003e,0x66,0xe,0,0,0);
    Hud_FBuildF4__FiiiiiUlcc(0,(int)sRam0000003c,(int)sRam0000003e + 0x1b,0x66,1,0,0,0);
    y = 1;
    w = 0x66;
    x = (int)sRam0000003c;
    x_00 = (int)sRam0000003e;
    local_b8 = 0x1c;
  }
  Hud_FBuildF4__FiiiiiUlcc(y,x,x_00,w,local_b8,0,0,0);
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Hud_BuildRadar__Fi(int player /*stack 0*/)
 // line 2497, offset 0x800d6b48
	/* begin block 1 */
		// Start line: 2498
		// Start offset: 0x800D6B48
		// Variables:
	// 		struct BO_tNewtonObj *car; // $v0
	// 		int i; // $s0
	// 		int x; // $a1
	// 		int z; // $v0
	// 		int cenX; // $t3
	// 		int cenZ; // $t2
	// 		int mapx; // $fp
	// 		int mapz; // $s7
	// 		int m00; // $t6
	// 		int m01; // $t5
	// 		int m10; // $t4
	// 		int m11; // $a0
	// 		struct coorddef scr[15]; // stack offset -224
	// 		int visible; // $s6

		/* begin block 1.1 */
			// Start line: 2580
			// Start offset: 0x800D6FC4

			/* begin block 1.1.1 */
				// Start line: 2581
				// Start offset: 0x800D6FC4

				/* begin block 1.1.1.1 */
					// Start line: 2581
					// Start offset: 0x800D6FE4

					/* begin block 1.1.1.1.1 */
						// Start line: 2583
						// Start offset: 0x800D6FFC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2584
							// Start offset: 0x800D7014
							// Variables:
						// 		struct SPRT *sprt; // $a2
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800D70D0
						// End Line: 2591
					/* end block 1.1.1.1.1 */
					// End offset: 0x800D70D0
					// End Line: 2591
				/* end block 1.1.1.1 */
				// End offset: 0x800D70D0
				// End Line: 2591
			/* end block 1.1.1 */
			// End offset: 0x800D70DC
			// End Line: 2593

			/* begin block 1.1.2 */
				// Start line: 2595
				// Start offset: 0x800D70DC

				/* begin block 1.1.2.1 */
					// Start line: 2595
					// Start offset: 0x800D7100
					// Variables:
				// 		struct SPRT *sprt; // $a1
				/* end block 1.1.2.1 */
				// End offset: 0x800D720C
				// End Line: 2610
			/* end block 1.1.2 */
			// End offset: 0x800D7220
			// End Line: 2612
		/* end block 1.1 */
		// End offset: 0x800D7220
		// End Line: 2612
	/* end block 1 */
	// End offset: 0x800D7220
	// End Line: 2615

int Hud_BuildRadar__Fi(int player)
{
  bool bVar1;
  uint *puVar2;
  SPRT *sprt;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong color;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int shapeIdx;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong *puVar15;
  int iVar16;
  int local_e0 [46];
  
  iVar14 = 0;
  iVar16 = 0;
  iVar3 = (&Camera_gInfo)[player * 0x44];
  iVar13 = *(int *)(iVar3 + 0xf0) >> 8;
  iVar12 = *(int *)(iVar3 + 0x108) >> 8;
  iVar11 = *(int *)(iVar3 + 0xf8) >> 8;
  iVar6 = *(int *)(iVar3 + 0x110) >> 8;
  shapeIdx = *(int *)(iVar3 + 0xa0) >> 8;
  iVar3 = -*(int *)(iVar3 + 0xa8) >> 8;
  if (0 < Cars_gNumRaceCars) {
    piVar9 = &_Cars_gRaceCarList;
    iVar10 = 0;
    do {
      iVar7 = (*(int *)(*piVar9 + 0xa0) >> 8) - shapeIdx;
      iVar4 = (-*(int *)(*piVar9 + 0xa8) >> 8) - iVar3;
      piVar8 = (int *)((int)local_e0 + iVar10);
      *piVar8 = iVar13 * iVar7 + iVar12 * iVar4 >> 0x10;
      *(int *)((int)local_e0 + iVar10 + 8) = iVar11 * iVar7 + iVar6 * iVar4 >> 0x11;
      if (false) {
        *piVar8 = -*piVar8;
      }
      if (((((*(char *)(*piVar9 + 0x91) != '\0') && (*(int *)(*piVar9 + 0x254) != player)) &&
           (-0x16 < *piVar8)) &&
          ((*piVar8 < 0x16 && (iVar4 = *(int *)((int)local_e0 + iVar10 + 8), -0x18 < iVar4)))) &&
         (iVar4 < 0x18)) {
        iVar16 = 1;
      }
      piVar9 = piVar9 + 1;
      iVar14 = iVar14 + 1;
      iVar10 = iVar10 + 0xc;
    } while (iVar14 < Cars_gNumRaceCars);
  }
  iVar14 = 0;
  if (0 < Cars_gNumCopCars) {
    piVar9 = &_Cars_gCopCarList;
    iVar10 = Cars_gNumRaceCars;
    do {
      iVar4 = *piVar9;
      if (*(char *)(iVar4 + 0x91) != '\0') {
        iVar7 = (*(int *)(iVar4 + 0xa0) >> 8) - shapeIdx;
        iVar4 = (-*(int *)(iVar4 + 0xa8) >> 8) - iVar3;
        piVar8 = local_e0 + iVar10 * 3;
        *piVar8 = iVar13 * iVar7 + iVar12 * iVar4 >> 0x10;
        local_e0[iVar10 * 3 + 2] = iVar11 * iVar7 + iVar6 * iVar4 >> 0x11;
        if (false) {
          *piVar8 = -*piVar8;
        }
        if (((-0x16 < *piVar8) && (*piVar8 < 0x16)) &&
           ((-0x18 < local_e0[iVar10 * 3 + 2] && (local_e0[iVar10 * 3 + 2] < 0x18)))) {
          iVar16 = 1;
        }
      }
      iVar10 = iVar10 + 1;
      iVar14 = iVar14 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar14 < Cars_gNumCopCars);
  }
  iVar3 = Cars_gNumRaceCars;
  if (iVar16 == 0) {
    iVar6 = 0;
    if (0 < Cars_gNumRaceCars) {
      piVar8 = local_e0;
      piVar9 = &_Cars_gRaceCarList;
      do {
        if (*(char *)(*piVar9 + 0x91) != '\0') {
          shapeIdx = piVar8[2] >> 2;
          *piVar8 = *piVar8 >> 2;
          piVar8[2] = shapeIdx;
          if ((((*(int *)(*piVar9 + 0x254) != player) && (-0x16 < *piVar8)) && (*piVar8 < 0x16)) &&
             ((-0x18 < shapeIdx && (shapeIdx < 0x18)))) {
            iVar16 = 2;
          }
        }
        piVar8 = piVar8 + 3;
        iVar6 = iVar6 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar6 < iVar3);
    }
    iVar6 = Cars_gNumCopCars;
    iVar3 = Cars_gNumRaceCars;
    iVar11 = 0;
    shapeIdx = Cars_gNumRaceCars;
    if (0 < Cars_gNumCopCars) {
      do {
        piVar9 = local_e0 + shapeIdx * 3;
        *piVar9 = *piVar9 >> 2;
        iVar13 = *piVar9;
        iVar12 = local_e0[shapeIdx * 3 + 2] >> 2;
        local_e0[shapeIdx * 3 + 2] = iVar12;
        if (((-0x16 < iVar13) && (iVar13 < 0x16)) && ((-0x18 < iVar12 && (iVar12 < 0x18)))) {
          iVar16 = 2;
        }
        iVar11 = iVar11 + 1;
        shapeIdx = iVar11 + iVar3;
      } while (iVar11 < iVar6);
    }
  }
  iVar3 = 0;
  piVar9 = &_Cars_gCopCarList;
  while (sprt = _DAT_1f800004, puVar2 = _DAT_1f800000, iVar3 < Cars_gNumCopCars) {
    if (*(char *)(*piVar9 + 0x91) != '\0') {
      _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
      uVar5 = (uint)_DAT_1f800004 & 0xffffff;
      bVar1 = gFlip != 0;
      _DAT_1f800004 = _DAT_1f800004 + 1;
      *puVar2 = *puVar2 & 0xff000000 | uVar5;
      if ((bVar1) || (uGp000018c8 = 0xff0000, DAT_8011e0d4 != 0)) {
        uGp000018c8 = 0xff;
      }
      Hud_BuildSprite__FP4SPRTiiiUli
                (sprt,0x7a,local_e0[(iVar3 + Cars_gNumRaceCars) * 3] + 0x14U & 0xffff,
                 local_e0[(iVar3 + Cars_gNumRaceCars) * 3 + 2] + 0x18U & 0xffff,uGp000018c8,0);
    }
    piVar9 = piVar9 + 1;
    iVar3 = iVar3 + 1;
  }
  iVar3 = 0;
  iVar6 = 0;
  puVar15 = &Hud_gMarkerColor;
  piVar9 = &_Cars_gRaceCarList;
  while (sprt = _DAT_1f800004, puVar2 = _DAT_1f800000, iVar3 < Cars_gNumRaceCars) {
    if ((iVar3 != player) && (*(char *)(*piVar9 + 0x91) != '\0')) {
      _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
      *puVar2 = *puVar2 & 0xff000000 | (uint)_DAT_1f800004 & 0xffffff;
      _DAT_1f800004 = _DAT_1f800004 + 1;
      if ((*(uint *)(*piVar9 + 0x260) & 4) == 0) {
        iVar11 = *(int *)((int)local_e0 + iVar6 + 8);
        color = (&Hud_gMarkerColor)[iVar3];
        shapeIdx = 0x7a;
        uVar5 = *(int *)((int)local_e0 + iVar6) + 0x14;
      }
      else {
        iVar11 = *(int *)((int)local_e0 + iVar6 + 8);
        color = *puVar15;
        shapeIdx = 0x79;
        uVar5 = *(int *)((int)local_e0 + iVar6) + 0x13;
      }
      Hud_BuildSprite__FP4SPRTiiiUli(sprt,shapeIdx,uVar5 & 0xffff,iVar11 + 0x18U & 0xffff,color,0);
    }
    iVar6 = iVar6 + 0xc;
    puVar15 = puVar15 + 1;
    piVar9 = piVar9 + 1;
    iVar3 = iVar3 + 1;
  }
  return iVar16;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BuildReplay__Fv()
 // line 2752, offset 0x800d7250
	/* begin block 1 */
		// Start line: 2753
		// Start offset: 0x800D7250
		// Variables:
	// 		int i; // $t1
	// 		char hilite[5]; // stack offset -8
	// 		int spr; // $v1
	/* end block 1 */
	// End offset: 0x800D749C
	// End Line: 2842

void Hud_BuildReplay__Fv(void)
{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  byte local_8 [8];
  
  iVar7 = 0x33;
  iVar4 = 0x3fc;
  do {
    iVar7 = iVar7 + 1;
    *(undefined4 *)(iVar4 + iGp000018bc + 4) = 0x66808080;
    iVar4 = iVar4 + 0x14;
  } while (iVar7 < 0x3f);
  *(undefined4 *)((uint)local_8[DAT_8011703c] * 0x14 + iGp000018bc + 0x400) = 0x6600bebe;
  if (DAT_8011703c == 3) {
    *(undefined4 *)(iGp000018bc + 0x464) = 0x6600bebe;
  }
  *(undefined4 *)(iGp000018bc + 0x41c) =
       *(undefined4 *)(&UNK_80111530 + Replay_ReplayInterface * -0x14);
  if (DAT_80117030 == 1) {
    iVar4 = 0x73;
  }
  else {
    if (DAT_80117030 < 2) {
      iVar4 = 0x74;
      if (DAT_80117030 == 0) {
        iVar4 = 0x72;
      }
    }
    else {
      iVar4 = 0x74;
      if (DAT_80117030 == 2) {
        iVar4 = 0x75;
      }
    }
  }
  *(undefined *)(iGp000018bc + 0x46c) = (&HudPmx_gShapes)[iVar4 * 0x14];
  *(undefined *)(iGp000018bc + 0x46d) = (&UNK_80110c99)[iVar4 * 0x14];
  *(undefined4 *)(iGp000018bc + 0x480) = *(undefined4 *)(&DAT_80110cc0 + DAT_80117038 * 0x14);
  *(short *)(iGp000018bc + 0x47c) = *(short *)(iGp000018b8 + 0x34) + 0x75;
  if (DAT_8011703c == 4) {
    uVar3 = 0x6600bebe;
  }
  else {
    uVar3 = 0x66808080;
  }
  *(undefined4 *)(iGp000018bc + 0x478) = uVar3;
  puVar1 = _DAT_1f800000;
  iVar4 = 0x33;
  puVar6 = (uint *)(iGp000018bc + 0x3fc);
  *(uint *)(iGp000018bc + 0x474) =
       *(uint *)(iGp000018bc + 0x474) & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  *puVar1 = *puVar1 & 0xff000000 | iGp000018bc + 0x474U & 0xffffff;
  do {
    iVar4 = iVar4 + 1;
    *puVar6 = *puVar6 & 0xff000000 | *puVar1 & 0xffffff;
    *puVar1 = *puVar1 & 0xff000000 | (uint)puVar6 & 0xffffff;
    puVar2 = _DAT_1f800000;
    puVar6 = puVar6 + 5;
  } while (iVar4 < 0x38);
  *(uint *)(iGp000018bc + 0x460) =
       *(uint *)(iGp000018bc + 0x460) & 0xff000000 | *_DAT_1f800000 & 0xffffff;
  uVar5 = iGp000018bc + 0x460U & 0xffffff;
  *puVar2 = *puVar2 & 0xff000000 | uVar5;
  _DAT_8013e414 = _DAT_8013e414 & 0xff000000 | uVar5;
  *puVar2 = *puVar2 & 0xff000000 | 0x13e414;
  _DAT_8013e3b4 = _DAT_8013e3b4 & 0xff000000 | 0x13e414;
  *puVar2 = *puVar2 & 0xff000000 | 0x13e3b4;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Hud_NextPlayer__Fi(int player /*$s2*/)
 // line 2862, offset 0x800d754c
	/* begin block 1 */
		// Start line: 2863
		// Start offset: 0x800D754C
		// Variables:
	// 		int i; // $a2
	// 		int j; // $a0
	// 		int direction; // $s1
	// 		struct Car_tObj *carObj; // $s0
	/* end block 1 */
	// End offset: 0x800D7698
	// End Line: 2890

int Hud_NextPlayer__Fi(int player)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  Car_tObj *carObj;
  
  bVar1 = 0 < (int)(&Input_gLookBehind)[player] == 0 < (int)(&DAT_8011275c)[player];
  carObj = (Car_tObj *)(&_Cars_gHumanRaceCarList)[player];
  if (1 < Cars_gNumRaceCars) {
    iVar2 = Stats_GetPosition__FP8Car_tObj(carObj);
    iVar5 = 0;
    if ((iVar2 != 1) || (!bVar1)) {
      iVar2 = carObj->sortIndex;
      if (0 < Cars_gNumCars + -1) {
        do {
          if (bVar1) {
            iVar2 = iVar2 + 1;
          }
          else {
            iVar2 = iVar2 + -1;
          }
          if (iVar2 < 0) {
            iVar2 = iVar2 + Cars_gNumCars;
          }
          iVar3 = iVar2 << 2;
          if (Cars_gNumCars <= iVar2) {
            iVar2 = 0;
            iVar3 = 0;
          }
          uVar4 = *(uint *)(*(int *)((int)&_Cars_gSortedList + iVar3) + 0x260);
          if ((uVar4 & 4) != 0) {
            if (player == 0) {
              return 8;
            }
            return 7;
          }
          iVar5 = iVar5 + 1;
          if ((uVar4 & 8) != 0) {
            return *(int *)(*(int *)((int)&_Cars_gSortedList + iVar3) + 0x4ec);
          }
        } while (iVar5 < Cars_gNumCars + -1);
      }
    }
  }
  return -1;


}




// decompiled code
// original method signature: 
// char * /*$ra*/ Hud_NextPlayerNameOrCarOrTime__Fi(int player /*$s2*/)
 // line 2895, offset 0x800d76b0
	/* begin block 1 */
		// Start line: 2896
		// Start offset: 0x800D76B0
		// Variables:
	// 		int i; // $a2
	// 		int j; // $a0
	// 		int direction; // $s1
	// 		struct Car_tObj *carObj; // $s0
	/* end block 1 */
	// End offset: 0x800D7820
	// End Line: 2925

char * Hud_NextPlayerNameOrCarOrTime__Fi(int player)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Car_tObj *carObj;
  
  bVar1 = 0 < (int)(&Input_gLookBehind)[player] == 0 < (int)(&DAT_8011275c)[player];
  carObj = (Car_tObj *)(&_Cars_gHumanRaceCarList)[player];
  if (1 < Cars_gNumRaceCars) {
    iVar2 = Stats_GetPosition__FP8Car_tObj(carObj);
    iVar4 = 0;
    if ((iVar2 != 1) || (!bVar1)) {
      iVar2 = carObj->sortIndex;
      if (0 < Cars_gNumCars + -1) {
        do {
          if (bVar1) {
            iVar2 = iVar2 + 1;
          }
          else {
            iVar2 = iVar2 + -1;
          }
          if (iVar2 < 0) {
            iVar2 = iVar2 + Cars_gNumCars;
          }
          iVar3 = iVar2 << 2;
          if (Cars_gNumCars <= iVar2) {
            iVar2 = 0;
            iVar3 = 0;
          }
          iVar3 = *(int *)((int)&_Cars_gSortedList + iVar3);
          if ((*(uint *)(iVar3 + 0x260) & 0xc) != 0) {
            if ((&DAT_80113640)[player * 0x2d] != 2) {
              return (char *)(*(int *)(iVar3 + 0x288) + 0x5c);
            }
            return (char *)(iVar3 + 0x249);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < Cars_gNumCars + -1);
      }
    }
  }
  return "";


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_RenderMapView__Fv()
 // line 2935, offset 0x800d7838
	/* begin block 1 */
		// Start line: 2936
		// Start offset: 0x800D7838

		/* begin block 1.1 */
			// Start line: 2936
			// Start offset: 0x800D7838
			// Variables:
		// 		int j; // $s3

			/* begin block 1.1.1 */
				// Start line: 2938
				// Start offset: 0x800D7890

				/* begin block 1.1.1.1 */
					// Start line: 2940
					// Start offset: 0x800D78A8

					/* begin block 1.1.1.1.1 */
						// Start line: 2941
						// Start offset: 0x800D78E4
						// Variables:
					// 		struct POLY_FT4 *HudFT4; // $s0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2945
							// Start offset: 0x800D78F0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2959
								// Start offset: 0x800D7958
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800D7A20
							// End Line: 2969
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800D7A20
						// End Line: 2969
					/* end block 1.1.1.1.1 */
					// End offset: 0x800D7A78
					// End Line: 2979
				/* end block 1.1.1.1 */
				// End offset: 0x800D7A78
				// End Line: 2979
			/* end block 1.1.1 */
			// End offset: 0x800D7A78
			// End Line: 2979
		/* end block 1.1 */
		// End offset: 0x800D7A8C
		// End Line: 2981
	/* end block 1 */
	// End offset: 0x800D7A8C
	// End Line: 2981

void Hud_RenderMapView__Fv(void)
{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int player;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  player = 0;
  iVar4 = 0;
  iVar6 = 0;
  puVar5 = &GameSetup_gData;
  while (player <= DashHUD_gInfo) {
    if (((puVar5[0x114] != 0) && (*(int *)((int)&DAT_8011274c + iVar4) != 0)) &&
       ((&Hud_gWingmanInterface)[player] == '\0')) {
      puVar2 = (uint *)&gHudFT4;
      if (player != 0) {
        puVar2 = (uint *)&DAT_8013e668;
      }
      Draw_StartRenderingView__Fi(*(int *)((int)&Hud_gMapView + iVar4));
      if (puVar5[0x114] == 1) {
        Hud_BuildMapMarkers__Fi(player);
        puVar3 = _DAT_1f800000;
        *puVar2 = *puVar2 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
        *puVar3 = *puVar3 & 0xff000000 | (uint)puVar2 & 0xffffff;
      }
      else {
        iVar1 = Hud_BuildRadar__Fi(player);
        puVar3 = _DAT_1f800000;
        if (iVar1 == 1) {
          puVar2[10] = puVar2[10] & 0xff000000 | *_DAT_1f800000 & 0xffffff;
          *puVar3 = *puVar3 & 0xff000000 | (uint)(puVar2 + 10) & 0xffffff;
          puVar2[0x14] = puVar2[0x14] & 0xff000000 | (uint)(puVar2 + 10) & 0xffffff;
          puVar2 = puVar2 + 0x14;
        }
        else {
          puVar2[0x1e] = puVar2[0x1e] & 0xff000000 | *_DAT_1f800000 & 0xffffff;
          *puVar3 = *puVar3 & 0xff000000 | (uint)(puVar2 + 0x1e) & 0xffffff;
          puVar2[0x28] = puVar2[0x28] & 0xff000000 | (uint)(puVar2 + 0x1e) & 0xffffff;
          puVar2 = puVar2 + 0x28;
        }
        *puVar3 = *puVar3 & 0xff000000 | (uint)puVar2 & 0xffffff;
      }
      puVar2 = _DAT_1f800000;
      puVar3 = (uint *)(&DAT_8013e3fc + iVar6);
      *puVar3 = *puVar3 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
      *puVar2 = *puVar2 & 0xff000000 | (uint)puVar3 & 0xffffff;
      Draw_StopRenderingView__Fi(*(int *)((int)&Hud_gMapView + iVar4));
    }
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 0x30;
    puVar5 = puVar5 + 0x2d;
    player = player + 1;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BlackThinBox__Fiiii(int x /*$s4*/, int y /*$s5*/, int w /*stack 8*/, int h /*stack 12*/)
 // line 3082, offset 0x800d7abc
	/* begin block 1 */
		// Start line: 3083
		// Start offset: 0x800D7ABC
		// Variables:
	// 		short CORNERHEIGHT; // $s2
	/* end block 1 */
	// End offset: 0x800D7ABC
	// End Line: 3083

void Hud_BlackThinBox__Fiiii(int x,int y,int w,int h)
{
  int y_00;
  int x_00;
  int x_01;
  
  y_00 = y + -2;
  Hud_FBuildF4__FiiiiiUlcc(0,x + -2,y_00,w + 2,2,0,0,0);
  x_01 = x + -2;
  Hud_FBuildF4__FiiiiiUlcc(0,x_01,y + -2,2,h + 4,0,0,0);
  x_00 = x + w;
  Hud_FBuildF4__FiiiiiUlcc(0,x_00 + -2,y + -2,2,h + 4,0,0,0);
  Hud_FBuildF4__FiiiiiUlcc(0,x + -2,y + h,w + 2,2,0,0,0);
  Hud_FBuildGT4__FP13HudPmx_tShapeiiUl((HudPmx_tShape *)&DAT_80110db0,x_01,y_00,0);
  Hud_FBuildGT4__FP13HudPmx_tShapeiiUl((HudPmx_tShape *)&DAT_80110dc4,x_00,y_00,0);
  y_00 = y + h + 2;
  Hud_FBuildGT4__FP13HudPmx_tShapeiiUl((HudPmx_tShape *)&DAT_80110dd8,x_01,y_00,0);
  Hud_FBuildGT4__FP13HudPmx_tShapeiiUl((HudPmx_tShape *)&DAT_80110dec,x_00,y_00,0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_Draw321Num__Fiiiiii(int x /*$fp*/, int y /*stack 4*/, int num /*stack 8*/, int flare_intensity /*$s6*/)
 // line 3155, offset 0x800d7ca8
	/* begin block 1 */
		// Start line: 3156
		// Start offset: 0x800D7CA8
		// Variables:
	// 		int i; // $s0
	// 		int j; // $s3
	// 		int k; // $s2
	// 		int by; // $s5
	// 		int index; // $v1
	/* end block 1 */
	// End offset: 0x800D7E00
	// End Line: 3253

void Hud_Draw321Num__Fiiiiii(int x,int y,int num,int flare_intensity)
{
  uint uVar1;
  int x_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (flare_intensity != 0) {
    uVar4 = 0;
    iVar5 = 0;
    iVar6 = y;
    do {
      x_00 = 0;
      iVar3 = x;
      do {
        if ((*(uint *)(&Hud_Character + num * 4) & 1 << (uVar4 & 0x1f)) != 0) {
          Flare_2DHalo__Fiiiii(iVar3 + 4,iVar6 + 4,flare_intensity,flare_intensity,6);
        }
        iVar3 = iVar3 + 10;
        x_00 = x_00 + 1;
        uVar4 = uVar4 + 1;
      } while (x_00 < 5);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 9;
    } while (iVar5 < 5);
  }
  Hud_BlackThinBox__Fiiii(x + -3,y + -2,0x38,0x31);
  uVar4 = 0;
  iVar5 = 0;
  iVar6 = y;
  do {
    iVar2 = 0;
    x_00 = x + 1;
    iVar3 = x;
    do {
      iVar2 = iVar2 + 1;
      uVar1 = uVar4 & 0x1f;
      uVar4 = uVar4 + 1;
      Hud_FBuildSprite__FiiiUli
                ((uint)((*(uint *)(&Hud_Character + num * 4) & 1 << uVar1) != 0) | 0x3c,x_00,
                 iVar6 + 1,0x808080,0);
      x_00 = iVar3 + 0xb;
      iVar3 = iVar3 + 10;
    } while (iVar2 < 5);
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 9;
  } while (iVar5 < 5);
  Hud_FBuildF4__FiiiiiUlcc(0,x + -3,y + -2,0x38,0x31,0,0,0);
  Hud_GoTpage__Fi(1);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_Render321Go__Fv()
 // line 3261, offset 0x800d7e64
	/* begin block 1 */
		// Start line: 3262
		// Start offset: 0x800D7E64
		// Variables:
	// 		static char oldCountdown; // offset 0x81
	// 		static unsigned long countdownTick; // offset 0x0
	// 		unsigned long currentTick; // $v1
	// 		unsigned long x; // $s4
	// 		unsigned long y; // $s3
	// 		int flare_intensity; // $s1
	// 		int num; // $s2

		/* begin block 1.1 */
			// Start line: 3262
			// Start offset: 0x800D7E64

			/* begin block 1.1.1 */
				// Start line: 3284
				// Start offset: 0x800D7EAC

				/* begin block 1.1.1.1 */
					// Start line: 3285
					// Start offset: 0x800D7EAC

					/* begin block 1.1.1.1.1 */
						// Start line: 3285
						// Start offset: 0x800D7EAC
					/* end block 1.1.1.1.1 */
					// End offset: 0x800D7EAC
					// End Line: 3285
				/* end block 1.1.1.1 */
				// End offset: 0x800D7EAC
				// End Line: 3285
			/* end block 1.1.1 */
			// End offset: 0x800D7EBC
			// End Line: 3286
		/* end block 1.1 */
		// End offset: 0x800D7EBC
		// End Line: 3286

		/* begin block 1.2 */
			// Start line: 3286
			// Start offset: 0x800D7EBC

			/* begin block 1.2.1 */
				// Start line: 3286
				// Start offset: 0x800D7EBC
			/* end block 1.2.1 */
			// End offset: 0x800D7EBC
			// End Line: 3286
		/* end block 1.2 */
		// End offset: 0x800D7EBC
		// End Line: 3286
	/* end block 1 */
	// End offset: 0x800D7F84
	// End Line: 3340

void Hud_Render321Go__Fv(void)
{
  uint uVar1;
  int flare_intensity;
  int num;
  int y;
  
  gCView = iGp0000141c;
  Draw_StartRenderingView__Fi(iGp0000141c);
  y = (int)*(short *)(iGp000018b8 + 0x46);
  if ((int)(char)bGp000013d1 != (uint)countdown) {
    bGp000013d1 = countdown;
    iGp000018b4 = ticks;
  }
  uVar1 = ticks - iGp000018b4;
  if (countdown == 4) {
    if (uVar1 < 100) {
      flare_intensity = uVar1 * -0x50 + 8000;
      goto LAB_800d7f18;
    }
  }
  else {
    if (uVar1 < 100) {
      flare_intensity = uVar1 * -0x3c + 6000;
      goto LAB_800d7f18;
    }
  }
  flare_intensity = 0;
LAB_800d7f18:
  num = 4 - (uint)countdown;
  if (countdown != 4) {
    Hud_Draw321Num__Fiiiiii(0x48,y,num,flare_intensity);
    Hud_Draw321Num__Fiiiiii(0x87,y,num,flare_intensity);
    Hud_Draw321Num__Fiiiiii(0xc6,y,num,flare_intensity);
  }
  Draw_StopRenderingView__Fi(iGp0000141c);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ BigBTCTime__Fi(int secs /*$s3*/)
 // line 3345, offset 0x800d7fb0
	/* begin block 1 */
		// Start line: 3346
		// Start offset: 0x800D7FB0
		// Variables:
	// 		static int lastsec; // offset 0x84
	// 		static int lastsectick; // offset 0x88
	// 		struct POLY_GT4 *prim; // $s1
	// 		int x; // $s2
	// 		int y; // $s7
	// 		int xx; // $fp
	// 		int yy; // stack offset -48
	// 		int Col; // $s5
	// 		int Col2; // $s4
	// 		int w1; // $s6
	// 		int w2; // stack offset -44
	// 		int ten; // $s0

		/* begin block 1.1 */
			// Start line: 3354
			// Start offset: 0x800D8000

			/* begin block 1.1.1 */
				// Start line: 3355
				// Start offset: 0x800D8010

				/* begin block 1.1.1.1 */
					// Start line: 3356
					// Start offset: 0x800D8010

					/* begin block 1.1.1.1.1 */
						// Start line: 3356
						// Start offset: 0x800D8010
					/* end block 1.1.1.1.1 */
					// End offset: 0x800D8010
					// End Line: 3356
				/* end block 1.1.1.1 */
				// End offset: 0x800D8010
				// End Line: 3356
			/* end block 1.1.1 */
			// End offset: 0x800D8020
			// End Line: 3357
		/* end block 1.1 */
		// End offset: 0x800D8020
		// End Line: 3357

		/* begin block 1.2 */
			// Start line: 3362
			// Start offset: 0x800D8020

			/* begin block 1.2.1 */
				// Start line: 3379
				// Start offset: 0x800D8074
				// Variables:
			// 		int diff; // $v0

				/* begin block 1.2.1.1 */
					// Start line: 3379
					// Start offset: 0x800D8074

					/* begin block 1.2.1.1.1 */
						// Start line: 3379
						// Start offset: 0x800D8074
					/* end block 1.2.1.1.1 */
					// End offset: 0x800D8074
					// End Line: 3379
				/* end block 1.2.1.1 */
				// End offset: 0x800D8074
				// End Line: 3379
			/* end block 1.2.1 */
			// End offset: 0x800D8100
			// End Line: 3397
		/* end block 1.2 */
		// End offset: 0x800D8100
		// End Line: 3397
	/* end block 1 */
	// End offset: 0x800D82A0
	// End Line: 3422

void BigBTCTime__Fi(int secs)
{
  short sVar1;
  uint *puVar2;
  POLY_GT4 *prim;
  uint uVar3;
  int x;
  undefined4 uVar4;
  ulong color;
  int y;
  
  if (((iGp000018dc == 0) && (iGp000013dc == 0)) && (-1 < secs)) {
    if (secs != iGp000013d4) {
      iGp000013d8 = ticks;
      iGp000013d4 = secs;
    }
    sVar1 = *(short *)(iGp000018b8 + 0x3c);
    y = (int)*(short *)(iGp000018b8 + 0x3e);
    x = (int)sVar1 + 2;
    if (secs < 0xb) {
      if (ticks - iGp000013d8 < 0x40) {
        Hud_BlackThinBox__Fiiii(x,y,2,0xe);
        Hud_FBuildF4__FiiiiiUlcc(0,x,y,2,0xe,0,0,0);
        iGp00001360 = 0;
        return;
      }
      color = 200;
      if (iGp00001360 == 0) {
        AudioCmn_PlayWrongWaySFX__Fv();
        iGp00001360 = 1;
      }
      uVar4 = 100;
    }
    else {
      color = 0xc800;
      iGp00001360 = 0;
      uVar4 = 0x6400;
    }
    prim = _DAT_1f800004;
    puVar2 = _DAT_1f800000;
    _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
    uVar3 = (uint)_DAT_1f800004 & 0xffffff;
    _DAT_1f800004 = _DAT_1f800004 + 1;
    *puVar2 = *puVar2 & 0xff000000 | uVar3;
    Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
              (prim,(HudPmx_tShape *)(&DAT_80111008 + (secs % 10) * 0x14),x,y,color);
    *(undefined4 *)&prim->r3 = uVar4;
    *(undefined4 *)&prim->r2 = uVar4;
    prim = _DAT_1f800004;
    puVar2 = _DAT_1f800000;
    if (secs / 10 != 0) {
      _DAT_1f800004->tag = _DAT_1f800004->tag & 0xff000000 | *_DAT_1f800000 & 0xffffff;
      uVar3 = (uint)_DAT_1f800004 & 0xffffff;
      _DAT_1f800004 = _DAT_1f800004 + 1;
      *puVar2 = *puVar2 & 0xff000000 | uVar3;
      Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
                (prim,(HudPmx_tShape *)(&DAT_80111008 + (secs / 10) * 0x14),(int)sVar1 + 2,y,color);
      *(undefined4 *)&prim->r3 = uVar4;
      *(undefined4 *)&prim->r2 = uVar4;
    }
    Hud_BlackThinBox__Fiiii(x,y,2,0xe);
    Hud_FBuildF4__FiiiiiUlcc(0,x,y,2,0xe,0,0,0);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_RenderHudView__Fv()
 // line 3426, offset 0x800d82d0
	/* begin block 1 */
		// Start line: 3427
		// Start offset: 0x800D82D0
		// Variables:
	// 		char sBuildOutput[64]; // stack offset -128

		/* begin block 1.1 */
			// Start line: 3427
			// Start offset: 0x800D82D0
			// Variables:
		// 		int j; // $fp

			/* begin block 1.1.1 */
				// Start line: 3431
				// Start offset: 0x800D8320
				// Variables:
			// 		int splitY; // stack offset -64

				/* begin block 1.1.1.1 */
					// Start line: 3436
					// Start offset: 0x800D8348

					/* begin block 1.1.1.1.1 */
						// Start line: 3489
						// Start offset: 0x800D83A8
						// Variables:
					// 		int flare_intensity; // $s0
					// 		unsigned long x; // $s0
					// 		unsigned long y; // $s6
					// 		unsigned long ww; // stack offset -60
					// 		unsigned long ww2; // $s4
					// 		unsigned long color; // $s2
					// 		int flare_type; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800D8648
					// End Line: 3565
				/* end block 1.1.1.1 */
				// End offset: 0x800D8648
				// End Line: 3565

				/* begin block 1.1.1.2 */
					// Start line: 3581
					// Start offset: 0x800D86D4

					/* begin block 1.1.1.2.1 */
						// Start line: 3582
						// Start offset: 0x800D86F4
						// Variables:
					// 		struct SPRT *gSprt1; // $s4
					// 		int nextplayer; // $v0

						/* begin block 1.1.1.2.1.1 */
							// Start line: 3623
							// Start offset: 0x800D87C0

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 3624
								// Start offset: 0x800D87D8

								/* begin block 1.1.1.2.1.1.1.1 */
									// Start line: 3626
									// Start offset: 0x800D87D8

									/* begin block 1.1.1.2.1.1.1.1.1 */
										// Start line: 3627
										// Start offset: 0x800D880C

										/* begin block 1.1.1.2.1.1.1.1.1.1 */
											// Start line: 3668
											// Start offset: 0x800D880C

											/* begin block 1.1.1.2.1.1.1.1.1.1.1 */
												// Start line: 3669
												// Start offset: 0x800D8834
												// Variables:
											// 		int w1; // $s2
											// 		int w2; // $s3
											// 		int totalwidth; // $s0
											// 		int h; // $v1
											/* end block 1.1.1.2.1.1.1.1.1.1.1 */
											// End offset: 0x800D8A48
											// End Line: 3698
										/* end block 1.1.1.2.1.1.1.1.1.1 */
										// End offset: 0x800D8A48
										// End Line: 3698
									/* end block 1.1.1.2.1.1.1.1.1 */
									// End offset: 0x800D8A48
									// End Line: 3698
								/* end block 1.1.1.2.1.1.1.1 */
								// End offset: 0x800D8A48
								// End Line: 3698

								/* begin block 1.1.1.2.1.1.1.2 */
									// Start line: 3702
									// Start offset: 0x800D8A48
									// Variables:
								// 		int i; // $a2
								/* end block 1.1.1.2.1.1.1.2 */
								// End offset: 0x800D8AA0
								// End Line: 3703
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x800D8AA0
							// End Line: 3703
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x800D8AA0
						// End Line: 3703
					/* end block 1.1.1.2.1 */
					// End offset: 0x800D8AA0
					// End Line: 3703
				/* end block 1.1.1.2 */
				// End offset: 0x800D8AA0
				// End Line: 3703
			/* end block 1.1.1 */
			// End offset: 0x800D8B84
			// End Line: 3733
		/* end block 1.1 */
		// End offset: 0x800D8C18
		// End Line: 3737
	/* end block 1 */
	// End offset: 0x800D8C18
	// End Line: 3737

void Hud_RenderHudView__Fv(void)
{
  int iVar1;
  uint *puVar2;
  char *string;
  uint *puVar3;
  int *piVar4;
  int type;
  int type_00;
  ulong col1;
  uint uVar5;
  int y;
  int y_00;
  int player;
  char acStack128 [64];
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  undefined4 *local_2c;
  
  player = 0;
  local_38 = 0xffffff;
  local_34 = 0;
  local_30 = 0;
  local_2c = &GameSetup_gData;
  while (player <= DashHUD_gInfo) {
    local_40 = 0;
    if (player != 0) {
      local_40 = -0xf;
    }
    Draw_StartRenderingView__Fi(*(int *)((int)&Hud_gHudView + local_34));
    Hud_DebugInfo__Fv();
    Hud_DebugCrap__Fv();
    if ((GameSetup_gData == 1) && (*(int *)((int)&PerpOverlayOn + local_34) != 0)) {
      piVar4 = (int *)((int)&PerpOverlayMessage + local_34);
      string = TextSys_Word__Fi(*piVar4 + 0x41);
      local_3c = textpixels(string);
      y_00 = (int)sRam0000004a + local_40;
      Font_TextColor__Fi(4);
      string = TextSys_Word__Fi(*piVar4 + 0x41);
      uVar5 = local_3c >> 1;
      Font_TextXY__FPcii(string,0xa0 - (uVar5 + 1),y_00);
      col1 = 0x800000;
      if (false) {
        col1 = 0x80;
      }
      type = 10;
      if (false) {
        type = 8;
      }
      iVar1 = -uVar5;
      y = y_00 + 8;
      Flare_2DHalo__Fiiiii(iVar1 + 0x7d,y,4000,4000,type);
      Flare_2DHalo__Fiiiii(iVar1 + 0x73,y,4000,4000,type);
      type = y_00 + 5;
      Hud_FBuildGT4__FP13HudPmx_tShapeiiUl((HudPmx_tShape *)&DAT_8011115c,iVar1 + 0x7a,type,col1);
      Hud_FBuildGT4__FP13HudPmx_tShapeiiUl((HudPmx_tShape *)&DAT_8011115c,iVar1 + 0x70,type,col1);
      col1 = 0x800000;
      if (true) {
        col1 = 0x80;
      }
      type_00 = 10;
      if (true) {
        type_00 = 8;
      }
      Flare_2DHalo__Fiiiii(uVar5 + 0xc0,y,4000,4000,type_00);
      Flare_2DHalo__Fiiiii(uVar5 + 0xca,y,4000,4000,type_00);
      Hud_FBuildGT4__FP13HudPmx_tShapeiiUl((HudPmx_tShape *)&DAT_8011115c,uVar5 + 0xbd,type,col1);
      Hud_FBuildGT4__FP13HudPmx_tShapeiiUl((HudPmx_tShape *)&DAT_8011115c,uVar5 + 199,type,col1);
      Hud_BlackThinBox__Fiiii(iVar1 + 0x6f,y_00,local_3c + 0x62,0x11);
      Hud_FBuildF4__FiiiiiUlcc(0,iVar1 + 0x6f,y_00,0x17,0x11,0,0,0);
      Hud_FBuildF4__FiiiiiUlcc(0,uVar5 + 0xba,y_00,0x15,0x11,0,0,0);
      Hud_FBuildF4__FiiiiiUlcc(0,uVar5 + 0xba,y_00 + 3,0x16,0xb,0,0,0);
      Hud_FBuildF4__FiiiiiUlcc(1,iVar1 + 0x86,y_00,local_3c + 0x36,0x11,0x461414,0,0);
    }
    if (player == DashHUD_gInfo) {
      if (true) {
        y_00 = 0;
        if (((false) && (y_00 = 1, countdown < 4)) && (true)) {
          y_00 = 0;
        }
        Hud_BuildCdPlayer__Fii(y_00);
      }
      else {
        BigBTCTime__Fi(0);
      }
    }
    if (*(int *)((int)&DAT_8011274c + local_34) != 0) {
      DashHUD_CheckWrongWay__Fi(player);
      DashHUD_HUDCalc__Fi(player);
      Hud_BuildNumbers0__Fi(player);
      Hud_BuildNumbers__Fi(player);
      puVar2 = _DAT_1f800000;
      puVar3 = (uint *)(&gTPage0 + local_30);
      *puVar3 = *puVar3 & 0xff000000 | *_DAT_1f800000 & local_38;
      uVar5 = *puVar2 & 0xff000000 | (uint)puVar3 & local_38;
      *puVar2 = uVar5;
      if (local_2c[0x113] != 0) {
        uRam00000014 = uRam00000014 & 0xff000000 | uVar5 & local_38;
        *puVar2 = *puVar2 & 0xff000000 | local_38 & 0x14;
      }
      if (local_2c[0x114] != 0) {
        if (((local_2c[0x115] != 0) && (true)) && (DAT_801131f8 != 1)) {
          y_00 = Hud_NextPlayer__Fi(player);
          if (((-1 < y_00) && (y_00 < 9)) && (true)) {
            string = Hud_NextPlayerNameOrCarOrTime__Fi(player);
            sprintf(acStack128,"%s",string);
            Hud_GoTpage__Fi(1);
            uppercase__FPc(acStack128);
            y_00 = Hud_BuildString__FPciiiib(acStack128,0,0,0,0,1);
            Hud_BuildString__FPciiiib
                      (acStack128,(int)sRam00000038 + (2 - y_00 >> 1),
                       (int)sRam0000003a + local_40 + 1,0x808080,0,0);
            Hud_GoTpage__Fi(0);
            Hud_FBuildGT4__FP13HudPmx_tShapeiiUl
                      ((HudPmx_tShape *)&DAT_80110db0,(int)sRam00000038,(int)sRam0000003a + local_40
                       ,0x808080);
            Hud_FBuildGT4__FP13HudPmx_tShapeiiUl
                      ((HudPmx_tShape *)&DAT_80110dc4,(int)sRam00000038,(int)sRam0000003a + local_40
                       ,0x808080);
            Hud_FBuildF4__FiiiiiUlcc(0,(int)sRam00000038 + 2,(int)sRam0000003a + local_40,3,0,0,0,0)
            ;
            y_00 = 2;
            if ((&Hud_gWingmanInterface)[player] == '\0') {
              y_00 = 3;
            }
            Hud_FBuildF4__FiiiiiUlcc(0,(int)sRam00000038,(int)sRam0000003a + local_40,3,y_00,0,0,0);
            Hud_FBuildF4__FiiiiiUlcc
                      (0,(int)sRam00000038 + -3,(int)sRam0000003a + local_40,3,3,0,0,0);
          }
        }
        puVar2 = _DAT_1f800000;
        y_00 = 0x3f;
        puVar3 = (uint *)0x4ec;
        do {
          y_00 = y_00 + 1;
          *puVar3 = *puVar3 & 0xff000000 | *puVar2 & local_38;
          *puVar2 = *puVar2 & 0xff000000 | (uint)puVar3 & local_38;
          puVar3 = puVar3 + 5;
        } while (y_00 < 0x47);
      }
    }
    if (((player == 0) && (1 < Replay_ReplayMode)) && (DAT_80117048 == 0)) {
      Hud_BuildReplay__Fv();
    }
    puVar2 = _DAT_1f800000;
    puVar3 = (uint *)(&gTPage1 + local_30);
    *puVar3 = *puVar3 & 0xff000000 | *_DAT_1f800000 & local_38;
    *puVar2 = *puVar2 & 0xff000000 | (uint)puVar3 & local_38;
    if (((*(int *)((int)&DAT_8011274c + local_34) != 0) &&
        ((&Hud_gWingmanInterface)[player] != '\0')) && (Replay_ReplayMode < 2)) {
      Hud_BuildWingmanInterface__Fi(player);
    }
    puVar2 = _DAT_1f800000;
    piVar4 = (int *)((int)&Hud_gHudView + local_34);
    local_34 = local_34 + 4;
    puVar3 = (uint *)(local_30 + -0x7fec1c64);
    local_30 = local_30 + 0x30;
    *puVar3 = *puVar3 & 0xff000000 | *_DAT_1f800000 & local_38;
    local_2c = local_2c + 0x2d;
    *puVar2 = *puVar2 & 0xff000000 | (uint)puVar3 & local_38;
    player = player + 1;
    Draw_StopRenderingView__Fi(*piVar4);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_RenderTacView__Fv()
 // line 3744, offset 0x800d8c48
	/* begin block 1 */
		// Start line: 3745
		// Start offset: 0x800D8C48

		/* begin block 1.1 */
			// Start line: 3745
			// Start offset: 0x800D8C48
			// Variables:
		// 		int j; // $s1
		/* end block 1.1 */
		// End offset: 0x800D8D40
		// End Line: 3765
	/* end block 1 */
	// End offset: 0x800D8D40
	// End Line: 3765

void Hud_RenderTacView__Fv(void)
{
  uint *puVar1;
  int player;
  uint *puVar2;
  undefined4 *puVar3;
  
  player = 0;
  if (-1 < DashHUD_gInfo) {
    puVar2 = (uint *)&DAT_8013e408;
    puVar3 = &GameSetup_gData;
    do {
      if ((puVar3[0x113] != 0) && ((&DAT_8011274c)[player] != 0)) {
        Draw_StartRenderingView__Fi((&Hud_gTacView)[player]);
        DashHUD_HUDCalc__Fi(player);
        Hud_BuildTach__Fi(player);
        puVar1 = _DAT_1f800000;
        *puVar2 = *puVar2 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
        *puVar1 = *puVar1 & 0xff000000 | (uint)puVar2 & 0xffffff;
        Draw_StopRenderingView__Fi((&Hud_gTacView)[player]);
      }
      puVar2 = puVar2 + 0xc;
      player = player + 1;
      puVar3 = puVar3 + 0x2d;
    } while (player <= DashHUD_gInfo);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_ParseTime__FiPc(int nTime /*$t1*/, char *sLapTime /*$a1*/)
 // line 3770, offset 0x800d8d64
	/* begin block 1 */
		// Start line: 3771
		// Start offset: 0x800D8D64
		// Variables:
	// 		unsigned int showtime; // $a3
	/* end block 1 */
	// End offset: 0x800D8EC0
	// End Line: 3802

void Hud_ParseTime__FiPc(int nTime,char *sLapTime)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (nTime < 0) {
    nTime = 0;
  }
  iVar1 = nTime * 0x6400;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x3fff;
  }
  iVar2 = iVar1 >> 0xe;
  iVar1 = ((iVar2 / 6000 + (iVar2 >> 0x1f)) - (iVar1 >> 0x1f)) * 0x10000 >> 0x10;
  iVar2 = iVar2 + iVar1 * -6000;
  iVar3 = (iVar2 / 100) * 0x10000 >> 0x10;
  if (iVar1 < 0x3c && nTime != 0) {
    sprintf(sLapTime,"%01d%c%02d%c%02d",iVar1,(uint)(byte)"::\'\'\'."[DAT_801132cc],iVar3,
            (uint)(byte)".:\"\"\","[DAT_801132cc],(iVar2 + iVar3 * -100) * 0x10000 >> 0x10);
  }
  else {
    sprintf(sLapTime," - %c - - %c - -",(uint)(byte)"::\'\'\'."[DAT_801132cc],
            (uint)(byte)".:\"\"\","[DAT_801132cc]);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_RenderPauseBox__Fiiii(int x /*$s4*/, int y /*$s5*/, int w /*$s6*/, int h /*$s7*/)
 // line 3812, offset 0x800d8ed0
	/* begin block 1 */
		// Start line: 3813
		// Start offset: 0x800D8ED0
		// Variables:
	// 		short CORNERWIDTH; // $s0
	// 		short CORNERHEIGHT; // $s1
	/* end block 1 */
	// End offset: 0x800D8ED0
	// End Line: 3813

void Hud_RenderPauseBox__Fiiii(int x,int y,int w,int h)
{
  int y_00;
  
  Hud_FBuildFT4__FP13HudPmx_tShapeiiUl((HudPmx_tShape *)&DAT_80110db0,x + -2,y + 10,0);
  Hud_FBuildFT4__FP13HudPmx_tShapeiiUl((HudPmx_tShape *)&DAT_80110dc4,x + w,y + 10,0);
  y_00 = y + h;
  Hud_FBuildFT4__FP13HudPmx_tShapeiiUl((HudPmx_tShape *)&DAT_80110dd8,x + -2,y_00,0);
  Hud_FBuildFT4__FP13HudPmx_tShapeiiUl((HudPmx_tShape *)&DAT_80110dec,x + w,y_00,0);
  Hud_FBuildF4__FiiiiiUlcc(0,x,y_00 + -2,w,2,0,0,0);
  Hud_BlackThinBox__Fiiii(x,y,w,h);
  Hud_FBuildF4__FiiiiiUlcc(0,x,y,w,0xc,0,0,0);
  Hud_FBuildF4__FiiiiiUlcc(1,x,y + 0xc,w,h + -0xc,0x461414,0,0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_Render__Fv()
 // line 3846, offset 0x800d9058
	/* begin block 1 */
		// Start line: 3847
		// Start offset: 0x800D9058
		// Variables:
	// 		int i; // $s0

		/* begin block 1.1 */
			// Start line: 3847
			// Start offset: 0x800D9058

			/* begin block 1.1.1 */
				// Start line: 3876
				// Start offset: 0x800D90E0

				/* begin block 1.1.1.1 */
					// Start line: 3878
					// Start offset: 0x800D90E0

					/* begin block 1.1.1.1.1 */
						// Start line: 3879
						// Start offset: 0x800D9100

						/* begin block 1.1.1.1.1.1 */
							// Start line: 3880
							// Start offset: 0x800D9100

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 3880
								// Start offset: 0x800D9100

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 3880
									// Start offset: 0x800D9100
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800D9100
								// End Line: 3880
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800D9100
							// End Line: 3880

							/* begin block 1.1.1.1.1.1.2 */
								// Start line: 3881
								// Start offset: 0x800D9120
								// Variables:
							// 		int countamount; // $a0
							/* end block 1.1.1.1.1.1.2 */
							// End offset: 0x800D91AC
							// End Line: 3888
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800D91AC
						// End Line: 3888
					/* end block 1.1.1.1.1 */
					// End offset: 0x800D91AC
					// End Line: 3888
				/* end block 1.1.1.1 */
				// End offset: 0x800D91AC
				// End Line: 3888

				/* begin block 1.1.1.2 */
					// Start line: 3893
					// Start offset: 0x800D91AC

					/* begin block 1.1.1.2.1 */
						// Start line: 3894
						// Start offset: 0x800D91CC

						/* begin block 1.1.1.2.1.1 */
							// Start line: 3895
							// Start offset: 0x800D91CC
							// Variables:
						// 		int count; // $s0
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x800D92E8
						// End Line: 3913
					/* end block 1.1.1.2.1 */
					// End offset: 0x800D92E8
					// End Line: 3913

					/* begin block 1.1.1.2.2 */
						// Start line: 3916
						// Start offset: 0x800D92F0

						/* begin block 1.1.1.2.2.1 */
							// Start line: 3917
							// Start offset: 0x800D92F0

							/* begin block 1.1.1.2.2.1.1 */
								// Start line: 3918
								// Start offset: 0x800D9318
								// Variables:
							// 		short player; // $s0
							/* end block 1.1.1.2.2.1.1 */
							// End offset: 0x800D9364
							// End Line: 3926
						/* end block 1.1.1.2.2.1 */
						// End offset: 0x800D9364
						// End Line: 3926

						/* begin block 1.1.1.2.2.2 */
							// Start line: 3930
							// Start offset: 0x800D9364

							/* begin block 1.1.1.2.2.2.1 */
								// Start line: 3930
								// Start offset: 0x800D936C
								// Variables:
							// 		int wingmode; // $s1

								/* begin block 1.1.1.2.2.2.1.1 */
									// Start line: 3932
									// Start offset: 0x800D9378

									/* begin block 1.1.1.2.2.2.1.1.1 */
										// Start line: 3938
										// Start offset: 0x800D93A0

										/* begin block 1.1.1.2.2.2.1.1.1.1 */
											// Start line: 3938
											// Start offset: 0x800D93A0

											/* begin block 1.1.1.2.2.2.1.1.1.1.1 */
												// Start line: 3938
												// Start offset: 0x800D93A0

												/* begin block 1.1.1.2.2.2.1.1.1.1.1.1 */
													// Start line: 3938
													// Start offset: 0x800D93A0
												/* end block 1.1.1.2.2.2.1.1.1.1.1.1 */
												// End offset: 0x800D93A0
												// End Line: 3938
											/* end block 1.1.1.2.2.2.1.1.1.1.1 */
											// End offset: 0x800D93A0
											// End Line: 3938
										/* end block 1.1.1.2.2.2.1.1.1.1 */
										// End offset: 0x800D9434
										// End Line: 3949
									/* end block 1.1.1.2.2.2.1.1.1 */
									// End offset: 0x800D9434
									// End Line: 3949
								/* end block 1.1.1.2.2.2.1.1 */
								// End offset: 0x800D9434
								// End Line: 3949
							/* end block 1.1.1.2.2.2.1 */
							// End offset: 0x800D9434
							// End Line: 3949
						/* end block 1.1.1.2.2.2 */
						// End offset: 0x800D9440
						// End Line: 3952
					/* end block 1.1.1.2.2 */
					// End offset: 0x800D9498
					// End Line: 3968
				/* end block 1.1.1.2 */
				// End offset: 0x800D9498
				// End Line: 3968
			/* end block 1.1.1 */
			// End offset: 0x800D9498
			// End Line: 3968
		/* end block 1.1 */
		// End offset: 0x800D9498
		// End Line: 3968
	/* end block 1 */
	// End offset: 0x800D9498
	// End Line: 3968

void Hud_Render__Fv(void)
{
  short player;
  int *piVar1;
  uint mode;
  int player_00;
  int type;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  
  player = sGp000013f8;
  if (DAT_80117048 != 0) {
    if (true) {
      DAT_8011274c = 0;
      DAT_80112750 = 0;
    }
    gCView = iGp0000141c;
    Draw_StartRenderingView__Fi(iGp0000141c);
    Hud_DebugCrap__Fv();
    Hud_RenderStatsView__Fv();
    Draw_StopRenderingView__Fi(iGp0000141c);
    return;
  }
  if (((iGp000013dc != 0) || (iGp000018dc == 0)) || (ticks - iGp000018e0 < 0xfb)) goto LAB_800d91ac;
  if (DashHUD_gInfo == 0) {
LAB_800d9168:
    player_00 = 0x32;
  }
  else {
    if ((*(uint *)(_Cars_gRaceCarList + 0x260) & 0x200) == 0) {
      player_00 = 0xfa;
    }
    else {
      player_00 = 0xfa;
      if ((uRam00000260 & 0x200) != 0) goto LAB_800d9168;
    }
  }
  iVar2 = player_00;
  if (iGp000018dc < player_00) {
    iVar2 = iGp000018dc;
  }
  iGp000018dc = iGp000018dc - player_00;
  iGp000013e8 = iGp000013e8 + iVar2;
  if (iGp000018dc < 0) {
    iGp000018dc = 0;
  }
LAB_800d91ac:
  if ((iGp000013f0 == 0) || (iGp000018e4 != 0)) {
    if ((iGp000013dc != 0) && (Replay_ReplayMode < 2)) {
      gCView = iGp0000141c;
      Draw_StartRenderingView__Fi(iGp0000141c);
      (&StatsTimer)[(int)player] = (&StatsTimer)[(int)player] + 1;
      Hud_BTCStats__Fsb(player,0);
      Draw_StopRenderingView__Fi(iGp0000141c);
    }
    player_00 = 0;
    pbVar4 = &Hud_gWingmanInterface;
    while (player_00 < 2) {
      mode = Input_WingCommandMode__Fi(player_00);
      if (((uint)*pbVar4 == mode) && (iGp000013dc != 0)) {
LAB_800d9424:
        *pbVar4 = 0;
        Hud_InitMapFrame__Fii(player_00,0);
      }
      else {
        if ((int)(&Hud_gWingmanFlashTicks)[player_00] < ticks) {
          if ((uint)*pbVar4 != mode) {
            if (1 < Replay_ReplayMode) goto LAB_800d9424;
            if (iGp000013dc == 0) {
              Hud_InitMapFrame__Fii(player_00,mode);
              *pbVar4 = (byte)mode;
            }
          }
          if (1 < Replay_ReplayMode) goto LAB_800d9424;
        }
      }
      pbVar4 = pbVar4 + 1;
      player_00 = player_00 + 1;
    }
    uGp000018fc = 0;
    if (((true) && (countdown != '\0')) && (iGp000013f0 == 0)) {
      Hud_Render321Go__Fv();
    }
    Hud_RenderHudView__Fv();
    Hud_RenderMapView__Fv();
    Hud_RenderTacView__Fv();
  }
  else {
    player_00 = 0;
    if (-1 < DashHUD_gInfo) {
      iVar2 = 0;
      piVar3 = &Hud_gHudView;
      do {
        Draw_StartRenderingView__Fi(*piVar3);
        Hud_GoTpage__Fi(1);
        if (((player_00 == 0) && (1 < Replay_ReplayMode)) && (DAT_80117048 == 0)) {
          Hud_BuildReplay__Fv();
        }
        if (player_00 == DashHUD_gInfo) {
          type = 1;
          if ((true) && (countdown == '\0')) {
            type = 0;
          }
          Hud_BuildCdPlayer__Fii(type);
        }
        if (*(int *)((int)&DAT_8011274c + iVar2) != 0) {
          Hud_DebugInfo__Fv();
          Hud_BuildNumbers0__Fi(player_00);
        }
        Hud_GoTpage__Fi(0);
        piVar1 = (int *)((int)&Hud_gHudView + iVar2);
        iVar2 = iVar2 + 4;
        piVar3 = piVar3 + 1;
        Draw_StopRenderingView__Fi(*piVar1);
        player_00 = player_00 + 1;
      } while (player_00 <= DashHUD_gInfo);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_PositionMap__Fv()
 // line 3980, offset 0x800d94c0
	/* begin block 1 */
		// Start line: 3981
		// Start offset: 0x800D94C0
	/* end block 1 */
	// End offset: 0x800D955C
	// End Line: 3988

void Hud_PositionMap__Fv(void)
{
  undefined4 uVar1;
  int iVar2;
  double __z;
  
  uVar1 = __mulsf3(0x421e0000,0x47800000);
  uGp00001428 = __fixsfsi(uVar1);
  uVar1 = __mulsf3(0x42233333,0x47800000);
  uGp0000142c = __fixsfsi(uVar1);
  uGp00001430 = 7;
  if (false) {
    uGp00001430 = 5;
  }
  uGp00001424 = 0xfc0;
  iVar2 = 7;
  iGp00001434 = iVar2;
  ccos(__z);
  iVar2 = iVar2 << 4;
  iGp000013fc = iVar2;
  csin(__z);
  iGp00001400 = iVar2 << 4;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BTC_Update__FPcib(char *perpname /*$v0*/, int timeleft /*$s1*/, unsigned int userHasControl /*$s0*/)
 // line 3998, offset 0x800d95c8
	/* begin block 1 */
		// Start line: 3999
		// Start offset: 0x800D95C8
	/* end block 1 */
	// End offset: 0x800D9618
	// End Line: 4005

void Hud_BTC_Update__FPcib(char *perpname,int timeleft,uint userHasControl)
{
  sprintf(&BTC_CurrentPerpName,perpname);
  if ((iGp000018dc == 0) && (iGp000013dc == 0)) {
    iGp000013e8 = timeleft << 1;
  }
  uGp000018e4 = userHasControl;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BustedOverlayOn__FiPcbs(int time /*$s4*/, char *name /*$a1*/, unsigned int caught /*$s2*/, short player /*$s5*/)
 // line 4009, offset 0x800d962c
	/* begin block 1 */
		// Start line: 4010
		// Start offset: 0x800D962C

		/* begin block 1.1 */
			// Start line: 4010
			// Start offset: 0x800D962C

			/* begin block 1.1.1 */
				// Start line: 4021
				// Start offset: 0x800D9688

				/* begin block 1.1.1.1 */
					// Start line: 4022
					// Start offset: 0x800D9688

					/* begin block 1.1.1.1.1 */
						// Start line: 4031
						// Start offset: 0x800D9710

						/* begin block 1.1.1.1.1.1 */
							// Start line: 4032
							// Start offset: 0x800D9710
							// Variables:
						// 		int i; // $s2
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800D97B4
						// End Line: 4042
					/* end block 1.1.1.1.1 */
					// End offset: 0x800D97B4
					// End Line: 4042
				/* end block 1.1.1.1 */
				// End offset: 0x800D97B4
				// End Line: 4042
			/* end block 1.1.1 */
			// End offset: 0x800D97C0
			// End Line: 4047
		/* end block 1.1 */
		// End offset: 0x800D97C0
		// End Line: 4047
	/* end block 1 */
	// End offset: 0x800D97C0
	// End Line: 4047

void Hud_BustedOverlayOn__FiPcbs(int time,char *name,uint caught,short player)
{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = (int)player;
  (&StatsTimer)[iVar1] = 0;
  if (Replay_ReplayMode < 2) {
    psVar3 = &Hud_NextPerp + iVar1;
    iVar1 = iVar1 * 0xa0;
    uGp000013ec = uGp000013e8;
    sprintf(&BTCPerpInfo + iVar1 + (int)*psVar3 * 0x10,name);
    if (caught == 0) {
      iVar4 = 0;
      iVar1 = 0;
      do {
        psVar3 = &Hud_NextPerp + iVar4;
        iVar2 = (int)*psVar3;
        if ((iVar2 == 0) || (*(int *)(&DAT_80120bcc + (iVar2 + -1) * 0x10 + iVar1) != 0)) {
          *(undefined4 *)(&DAT_80120bcc + iVar2 * 0x10 + iVar1) = 0;
          *(undefined4 *)(&DAT_80120bc8 + (int)*psVar3 * 0x10 + iVar1) = 0;
          sprintf(&BTCPerpInfo + iVar1 + (int)*psVar3 * 0x10,&BTC_CurrentPerpName);
          *psVar3 = *psVar3 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 0xa0;
      } while (iVar4 < 2);
    }
    else {
      *(undefined4 *)(&DAT_80120bcc + (int)*psVar3 * 0x10 + iVar1) = 1;
      *(int *)(&DAT_80120bc8 + (int)*psVar3 * 0x10 + iVar1) = time;
      *psVar3 = *psVar3 + 1;
    }
    uGp000013dc = 1;
    sGp000013f8 = player;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BustedOverlayOff__Fv()
 // line 4051, offset 0x800d97e4
	/* begin block 1 */
		// Start line: 4052
		// Start offset: 0x800D97E4
	/* end block 1 */
	// End offset: 0x800D97E4
	// End Line: 4053

void Hud_BustedOverlayOff__Fv(void)
{
  uGp000013dc = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_Reset__Fv()
 // line 4056, offset 0x800d97f0
	/* begin block 1 */
		// Start line: 4057
		// Start offset: 0x800D97F0

		/* begin block 1.1 */
			// Start line: 4058
			// Start offset: 0x800D97F0

			/* begin block 1.1.1 */
				// Start line: 4059
				// Start offset: 0x800D9808

				/* begin block 1.1.1.1 */
					// Start line: 4060
					// Start offset: 0x800D9808
					// Variables:
				// 		int i; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x800D982C
				// End Line: 4064
			/* end block 1.1.1 */
			// End offset: 0x800D982C
			// End Line: 4064
		/* end block 1.1 */
		// End offset: 0x800D982C
		// End Line: 4064
	/* end block 1 */
	// End offset: 0x800D982C
	// End Line: 4066

void Hud_Reset__Fv(void)
{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (Replay_ReplayMode < 2) {
    puVar1 = &Hud_NextPerp;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 1;
      BTC_CurrentPerpName = 0;
    } while (iVar2 < 2);
  }
  uGp000013dc = 0;
  uGp000018dc = 0;
  uGp000018e4 = 0;
  uGp000018ec = 0;
  uGp000018f0 = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BTC_QuitOut__Fv()
 // line 4074, offset 0x800d9848
	/* begin block 1 */
		// Start line: 4075
		// Start offset: 0x800D9848

		/* begin block 1.1 */
			// Start line: 4075
			// Start offset: 0x800D9848

			/* begin block 1.1.1 */
				// Start line: 4077
				// Start offset: 0x800D9868

				/* begin block 1.1.1.1 */
					// Start line: 4078
					// Start offset: 0x800D9868
					// Variables:
				// 		int i; // $s2
				/* end block 1.1.1.1 */
				// End offset: 0x800D98F0
				// End Line: 4087
			/* end block 1.1.1 */
			// End offset: 0x800D98F0
			// End Line: 4087
		/* end block 1.1 */
		// End offset: 0x800D98F0
		// End Line: 4087
	/* end block 1 */
	// End offset: 0x800D98F0
	// End Line: 4087

void Hud_BTC_QuitOut__Fv(void)
{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  if (iGp000013dc == 0) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      psVar1 = &Hud_NextPerp + iVar3;
      sprintf(&BTCPerpInfo + iVar2 + (int)*psVar1 * 0x10,&BTC_CurrentPerpName);
      *(undefined4 *)(&DAT_80120bcc + (int)*psVar1 * 0x10 + iVar2) = 0;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(&DAT_80120bc8 + (int)*psVar1 * 0x10 + iVar2) = 0;
      *psVar1 = *psVar1 + 1;
      iVar2 = iVar2 + 0xa0;
    } while (iVar3 < 2);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BTC_BonusTime__Fl(long extratime /*$a0*/)
 // line 4091, offset 0x800d990c
	/* begin block 1 */
		// Start line: 4092
		// Start offset: 0x800D990C

		/* begin block 1.1 */
			// Start line: 4092
			// Start offset: 0x800D990C

			/* begin block 1.1.1 */
				// Start line: 4092
				// Start offset: 0x800D990C
			/* end block 1.1.1 */
			// End offset: 0x800D990C
			// End Line: 4092
		/* end block 1.1 */
		// End offset: 0x800D990C
		// End Line: 4092
	/* end block 1 */
	// End offset: 0x800D990C
	// End Line: 4092

void Hud_BTC_BonusTime__Fl(long extratime)
{
  lGp000018dc = extratime;
  uGp000018e0 = ticks;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_Perp_OverlayOn__Fii(int player /*$a0*/, int level /*$a1*/)
 // line 4100, offset 0x800d9924
	/* begin block 1 */
		// Start line: 4101
		// Start offset: 0x800D9924
	/* end block 1 */
	// End offset: 0x800D9924
	// End Line: 4102

void Hud_Perp_OverlayOn__Fii(int player,int level)
{
  (&PerpOverlayOn)[player] = 1;
  (&PerpOverlayMessage)[player] = level;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_Perp_OverlayOff__Fi(int player /*$a0*/)
 // line 4106, offset 0x800d9950
	/* begin block 1 */
		// Start line: 4107
		// Start offset: 0x800D9950
	/* end block 1 */
	// End offset: 0x800D9950
	// End Line: 4108

void Hud_Perp_OverlayOff__Fi(int player)
{
  (&PerpOverlayOn)[player] = 0;
  return;


}





