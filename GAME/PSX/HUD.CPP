#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 546
	/* end block 2 */
	// End Line: 547

	/* begin block 3 */
		// Start line: 546
	/* end block 3 */
	// End Line: 547

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_CreateHudViews__Fv(void)

{
  int iVar1;
  GameSetup_tData *pGVar2;
  
  Hud_InitTables__Fv();
  pGVar2 = &GameSetup_gData;
  Hud_BeTheCop = (void *)0x0;
  iVar1 = 0;
  if (0 < GameSetup_gData.numCars) {
    do {
      if ((pGVar2->carInfo[0].carClass & 0x40U) != 0) {
        Hud_BeTheCop = &DAT_00000001;
      }
      iVar1 = iVar1 + 1;
      pGVar2 = (GameSetup_tData *)((pGVar2->controllerData).shockImpact + 1);
    } while (iVar1 < GameSetup_gData.numCars);
  }
  if (GameSetup_gData.numPlayerRaceCars < 2) {
    if ((GameSetup_gData.numPlayerRaceCars + GameSetup_gData.numOpponentRaceCars == 1) ||
       (Hud_BeTheCop != (void *)0x0)) {
      HudMapOffsetY = 8;
    }
    else {
      HudMapOffsetY = 0;
    }
  }
  else {
    HudMapOffsetY = -6;
  }
  if (GameSetup_gData.commMode == 1) {
    Hud_gMapView = Draw_SetView__Fiiiiiiiii
                             (0x105,HudMapOffsetY + 0x13e,0x245,HudMapOffsetY + 0x13e,0x2d,0x30,0,0,
                              1);
    INT_8013d95c = Draw_SetView__Fiiiiiiiii
                             (0x105,HudMapOffsetY + 0x1a9,0x245,HudMapOffsetY + 0x1a9,0x2d,0x30,0,0,
                              1);
    Hud_gHudView = Draw_SetView__Fiiiiiiiii(0,0x100,0x140,0x100,0x140,0x78,0,0,1);
    INT_8013d954 = Draw_SetView__Fiiiiiiiii(0,0x178,0x140,0x178,0x140,0x78,0,0,1);
    Hud_gTacView = Draw_SetView__Fiiiiiiiii(0x115,0x113,0x255,0x113,0x1c,0x1c,0,0,1);
    INT_8013d964 = Draw_SetView__Fiiiiiiiii(0x115,0x17c,0x255,0x17c,0x1c,0x1c,0,0,1);
  }
  else {
    Hud_gMapView = Draw_SetView__Fiiiiiiiii
                             (0xff,HudMapOffsetY + 0x1a4,0x23f,HudMapOffsetY + 0x1a4,0x2d,0x30,0,0,1
                             );
    Hud_gHudView = Draw_SetView__Fiiiiiiiii(0,0x100,0x140,0x100,0x140,0xf0,0,0,1);
    Hud_gTacView = Draw_SetView__Fiiiiiiiii(0xb8,0x115,0x1f8,0x115,0x1c,0x1c,0,0,1);
  }
  Hud_gStatsView = Draw_SetView__Fiiiiiiiii(0,0x100,0x140,0x100,0x140,0xf0,0,0,1);
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

	/* begin block 2 */
		// Start line: 797
	/* end block 2 */
	// End Line: 798

	/* begin block 3 */
		// Start line: 802
	/* end block 3 */
	// End Line: 803

	/* begin block 4 */
		// Start line: 802
	/* end block 4 */
	// End Line: 803

void Hud_GoTpage__Fi(int page)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = DAT_1f800004;
  puVar1 = DAT_1f800000;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar3 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 3;
  *puVar1 = *puVar1 & 0xff000000 | uVar3;
  SetDrawMode((int)puVar2,0,0,(page * 0x40 + 0x80U & 0x3ff) >> 6,(byte *)0x0);
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

	/* begin block 2 */
		// Start line: 906
	/* end block 2 */
	// End Line: 907

	/* begin block 3 */
		// Start line: 1002
	/* end block 3 */
	// End Line: 1003

	/* begin block 4 */
		// Start line: 1002
	/* end block 4 */
	// End Line: 1003

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_DebugInfo__Fv(void)

{
  int iVar1;
  int iVar2;
  char acStack40 [24];
  
  sprintf(acStack40,s_SLC__d_8013d8c4,(int)(Cars_gList9->N).simRoadInfo.slice);
  Font_TextXY__FPcii(acStack40,0xe6,0x2d);
  iVar1 = textpixels(acStack40);
  Hud_FBuildF4__FiiiiiUlcc(1,0xe6,0x30,iVar1 + 5,10,(ulong)&DAT_00050505,0,0);
  iVar1 = AudioMus_Buffered__Fv();
  iVar2 = AudioMus_Threshold__Fv();
  sprintf(acStack40,s_AUD__d__d__d__d_800568dc,iVar1 / 1000,(iVar1 % 1000) / 100,iVar2 / 1000,
          (iVar2 % 1000) / 100);
  Font_TextXY__FPcii(acStack40,0xe6,0x23);
  iVar1 = textpixels(acStack40);
  Hud_FBuildF4__FiiiiiUlcc(1,0xe6,0x26,iVar1 + 5,10,(ulong)&DAT_00050505,0,0);
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

	/* begin block 2 */
		// Start line: 1192
	/* end block 2 */
	// End Line: 1193

	/* begin block 3 */
		// Start line: 1197
	/* end block 3 */
	// End Line: 1198

	/* begin block 4 */
		// Start line: 1197
	/* end block 4 */
	// End Line: 1198

	/* begin block 5 */
		// Start line: 1212
	/* end block 5 */
	// End Line: 1213

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 1232
	/* end block 2 */
	// End Line: 1233

	/* begin block 3 */
		// Start line: 1237
	/* end block 3 */
	// End Line: 1238

	/* begin block 4 */
		// Start line: 1237
	/* end block 4 */
	// End Line: 1238

void Hud_BuildSprite__FP4SPRTiiiUli(SPRT *sprt,int shapeIdx,int x,int y,ulong color,int trans)

{
  SetSemiTrans((int)sprt,trans);
  *(undefined *)((int)&sprt->tag + 3) = 4;
  *(ulong *)&sprt->r0 = color | 0x66000000;
  *(int *)&sprt->x0 = y << 0x10 | x;
  *(undefined4 *)&sprt->u0 = *(undefined4 *)&(&HudPmx_gShapes)[shapeIdx].pixmap;
  *(int *)&sprt->w =
       (int)(&HudPmx_gShapes)[shapeIdx].height << 0x10 | (int)(&HudPmx_gShapes)[shapeIdx].width;
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

	/* begin block 2 */
		// Start line: 1271
	/* end block 2 */
	// End Line: 1272

	/* begin block 3 */
		// Start line: 1275
	/* end block 3 */
	// End Line: 1276

	/* begin block 4 */
		// Start line: 1275
	/* end block 4 */
	// End Line: 1276

	/* begin block 5 */
		// Start line: 1276
	/* end block 5 */
	// End Line: 1277

	/* begin block 6 */
		// Start line: 1276
	/* end block 6 */
	// End Line: 1277

void Hud_BuildSprite2__FP4SPRTiii(SPRT *sprt,int shapeIdx,int x,int y)

{
  Hud_BuildSprite__FP4SPRTiiiUli
            (sprt,shapeIdx,x,y,(ulong)currentSpriteColor,(uint)(byte)currentSpriteTransparent);
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

	/* begin block 2 */
		// Start line: 1283
	/* end block 2 */
	// End Line: 1284

	/* begin block 3 */
		// Start line: 1288
	/* end block 3 */
	// End Line: 1289

	/* begin block 4 */
		// Start line: 1288
	/* end block 4 */
	// End Line: 1289

void Hud_FBuildSprite__FiiiUli(int shapeIdx,int x,int y,ulong color,int trans)

{
  uint *puVar1;
  SPRT *sprt;
  uint uVar2;
  
  sprt = DAT_1f800004;
  puVar1 = DAT_1f800000;
  DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar2 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 1;
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

	/* begin block 2 */
		// Start line: 1303
	/* end block 2 */
	// End Line: 1304

	/* begin block 3 */
		// Start line: 1307
	/* end block 3 */
	// End Line: 1308

	/* begin block 4 */
		// Start line: 1307
	/* end block 4 */
	// End Line: 1308

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
  *(uint *)&sprt->r0 = (uint)currentSpriteColor | 0x66000000;
  *(int *)&sprt->x0 = (y + local_18[0]) * 0x10000 | x;
  sprt->u0 = local_28[0];
  sprt->v0 = local_24[0];
  sprt->clut = gFontClut;
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

	/* begin block 2 */
		// Start line: 1363
	/* end block 2 */
	// End Line: 1364

	/* begin block 3 */
		// Start line: 1383
	/* end block 3 */
	// End Line: 1384

	/* begin block 4 */
		// Start line: 1383
	/* end block 4 */
	// End Line: 1384

void Hud_BuildF3__FP7POLY_F3P13HudPmx_tShapeiiUl
               (POLY_F3 *prim,HudPmx_tShape *shape,int x,int y,ulong color)

{
  uint uVar1;
  
  *(ulong *)&prim->r0 = color;
  SetPolyF3((int)prim);
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

	/* begin block 2 */
		// Start line: 1397
	/* end block 2 */
	// End Line: 1398

	/* begin block 3 */
		// Start line: 1401
	/* end block 3 */
	// End Line: 1402

	/* begin block 4 */
		// Start line: 1401
	/* end block 4 */
	// End Line: 1402

	/* begin block 5 */
		// Start line: 1402
	/* end block 5 */
	// End Line: 1403

	/* begin block 6 */
		// Start line: 1402
	/* end block 6 */
	// End Line: 1403

void Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
               (POLY_GT4 *prim,HudPmx_tShape *shape,int x,int y,ulong color)

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

	/* begin block 2 */
		// Start line: 1445
	/* end block 2 */
	// End Line: 1446

	/* begin block 3 */
		// Start line: 1449
	/* end block 3 */
	// End Line: 1450

	/* begin block 4 */
		// Start line: 1449
	/* end block 4 */
	// End Line: 1450

void Hud_BuildFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli
               (POLY_FT4 *prim,HudPmx_tShape *shape,int x,int y,ulong color,int trans)

{
  *(ulong *)&prim->r0 = color;
  SetPolyFT4((int)prim);
  SetSemiTrans((int)prim,trans);
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

	/* begin block 2 */
		// Start line: 1475
	/* end block 2 */
	// End Line: 1476

	/* begin block 3 */
		// Start line: 1479
	/* end block 3 */
	// End Line: 1480

	/* begin block 4 */
		// Start line: 1479
	/* end block 4 */
	// End Line: 1480

void Hud_BuildMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli
               (POLY_FT4 *prim,HudPmx_tShape *shape,int x,int y,ulong color,int trans)

{
  undefined4 uVar1;
  
  *(ulong *)&prim->r0 = color;
  SetPolyFT4((int)prim);
  SetSemiTrans((int)prim,trans);
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

	/* begin block 2 */
		// Start line: 1515
	/* end block 2 */
	// End Line: 1516

	/* begin block 3 */
		// Start line: 1520
	/* end block 3 */
	// End Line: 1521

	/* begin block 4 */
		// Start line: 1520
	/* end block 4 */
	// End Line: 1521

void Hud_BuildMapMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli
               (POLY_FT4 *prim,HudPmx_tShape *shape,int x,int y,ulong color,int trans)

{
  undefined4 uVar1;
  
  *(ulong *)&prim->r0 = color;
  SetPolyFT4((int)prim);
  SetSemiTrans((int)prim,trans);
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

	/* begin block 2 */
		// Start line: 1587
	/* end block 2 */
	// End Line: 1588

	/* begin block 3 */
		// Start line: 1595
	/* end block 3 */
	// End Line: 1596

	/* begin block 4 */
		// Start line: 1595
	/* end block 4 */
	// End Line: 1596

void Hud_BuildF4__FP7POLY_F4iiiiiUl(POLY_F4 *prim,int trans,int x,int y,int w,int h,ulong color)

{
  uint uVar1;
  
  *(ulong *)&prim->r0 = color;
  SetPolyF4((int)prim);
  SetSemiTrans((int)prim,trans);
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

	/* begin block 2 */
		// Start line: 1626
	/* end block 2 */
	// End Line: 1627

	/* begin block 3 */
		// Start line: 1630
	/* end block 3 */
	// End Line: 1631

	/* begin block 4 */
		// Start line: 1630
	/* end block 4 */
	// End Line: 1631

void Hud_BuildG4__FP7POLY_G4iiiiiUlUlUlUl
               (POLY_G4 *prim,int trans,int x,int y,int w,int h,ulong col1,ulong col2,ulong col3,
               ulong col4)

{
  uint uVar1;
  
  *(ulong *)&prim->r0 = col1;
  *(ulong *)&prim->r1 = col2;
  *(ulong *)&prim->r2 = col3;
  *(ulong *)&prim->r3 = col4;
  SetPolyG4((int)prim);
  SetSemiTrans((int)prim,trans);
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

	/* begin block 2 */
		// Start line: 1667
	/* end block 2 */
	// End Line: 1668

	/* begin block 3 */
		// Start line: 1671
	/* end block 3 */
	// End Line: 1672

	/* begin block 4 */
		// Start line: 1671
	/* end block 4 */
	// End Line: 1672

void Hud_BuildF4o__FP7POLY_F4iiiiiUlScSc
               (POLY_F4 *prim,int trans,int x,int y,int w,int h,ulong color,int x0off,int x1off)

{
  uint uVar1;
  
  *(ulong *)&prim->r0 = color;
  SetPolyF4((int)prim);
  SetSemiTrans((int)prim,trans);
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

	/* begin block 2 */
		// Start line: 1699
	/* end block 2 */
	// End Line: 1700

	/* begin block 3 */
		// Start line: 1704
	/* end block 3 */
	// End Line: 1705

	/* begin block 4 */
		// Start line: 1704
	/* end block 4 */
	// End Line: 1705

void Hud_FBuildGT4__FP13HudPmx_tShapeiiUl(HudPmx_tShape *shape,int x,int y,ulong col1)

{
  uint *puVar1;
  POLY_GT4 *prim;
  uint uVar2;
  
  prim = DAT_1f800004;
  puVar1 = DAT_1f800000;
  DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar2 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 1;
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

	/* begin block 2 */
		// Start line: 1716
	/* end block 2 */
	// End Line: 1717

	/* begin block 3 */
		// Start line: 1719
	/* end block 3 */
	// End Line: 1720

	/* begin block 4 */
		// Start line: 1719
	/* end block 4 */
	// End Line: 1720

void Hud_FBuildFT4__FP13HudPmx_tShapeiiUl(HudPmx_tShape *shape,int x,int y,ulong col1)

{
  uint *puVar1;
  POLY_FT4 *prim;
  uint uVar2;
  
  prim = DAT_1f800004;
  puVar1 = DAT_1f800000;
  DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar2 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 1;
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

	/* begin block 2 */
		// Start line: 1733
	/* end block 2 */
	// End Line: 1734

	/* begin block 3 */
		// Start line: 1738
	/* end block 3 */
	// End Line: 1739

	/* begin block 4 */
		// Start line: 1738
	/* end block 4 */
	// End Line: 1739

void Hud_FBuildF4__FiiiiiUlcc
               (int transparent,int x,int y,int w,int h,ulong col1,int x0off,int x1off)

{
  uint *puVar1;
  POLY_F4 *prim;
  uint uVar2;
  
  prim = DAT_1f800004;
  puVar1 = DAT_1f800000;
  DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar2 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 1;
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

	/* begin block 2 */
		// Start line: 1576
	/* end block 2 */
	// End Line: 1577

	/* begin block 3 */
		// Start line: 1764
	/* end block 3 */
	// End Line: 1765

	/* begin block 4 */
		// Start line: 1764
	/* end block 4 */
	// End Line: 1765

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

	/* begin block 2 */
		// Start line: 1779
	/* end block 2 */
	// End Line: 1780

	/* begin block 3 */
		// Start line: 1784
	/* end block 3 */
	// End Line: 1785

	/* begin block 4 */
		// Start line: 1784
	/* end block 4 */
	// End Line: 1785

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_Kill__Fv(void)

{
  HudPmx_Kill__Fv();
  if (gSprite0 != (uchar *)0x0) {
    purgememadr((int)gSprite0);
  }
  gSprite0 = (uchar *)0x0;
  if (gSprite1 != (uchar *)0x0) {
    purgememadr((int)gSprite1);
  }
  gSprite1 = (uchar *)0x0;
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

	/* begin block 2 */
		// Start line: 1806
	/* end block 2 */
	// End Line: 1807

	/* begin block 3 */
		// Start line: 1811
	/* end block 3 */
	// End Line: 1812

	/* begin block 4 */
		// Start line: 1811
	/* end block 4 */
	// End Line: 1812

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_Init0__Fv(void)

{
  gSprite0 = (uchar *)reservememadr(&DAT_8013d8cc,0x80c,0);
  if (GameSetup_gData.commMode == 1) {
    gSprite1 = (uchar *)reservememadr(&DAT_8013d8d4,0x80c,0);
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

	/* begin block 2 */
		// Start line: 1835
	/* end block 2 */
	// End Line: 1836

	/* begin block 3 */
		// Start line: 1842
	/* end block 3 */
	// End Line: 1843

	/* begin block 4 */
		// Start line: 1842
	/* end block 4 */
	// End Line: 1843

void Hud_InitMapFrame__Fii(int i,int mode)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  int x;
  POLY_FT4 *prim;
  int iVar6;
  int iVar7;
  int iVar8;
  POLY_F4 *local_38;
  
  puVar5 = gSprite0;
  if (i != 0) {
    puVar5 = gSprite1;
  }
  local_38 = gHudF4;
  if (i != 0) {
    local_38 = &POLY_F4_8013e4f8;
  }
  prim = gHudFT4;
  if (i != 0) {
    prim = &POLY_FT4_8013e668;
  }
  iVar4 = 0;
  if (i != 0) {
    iVar4 = -0xd;
  }
  iVar6 = (int)HudPmx_tShape_80110db0.height;
  iVar7 = (int)HudPmx_tShape_80110db0.width;
  iVar1 = (int)HudPmx_tShape_ARRAY_80110e14[1].height;
  iVar2 = (int)HudPmx_tShape_ARRAY_80110e14[5].width;
  x = (int)*(short *)(g1Player + 0x38);
  iVar8 = (int)HudPmx_tShape_ARRAY_80110e14[5].height;
  iVar3 = (int)HudPmx_tShape_ARRAY_80110e14[1].width;
  if (mode == 1) {
    x = x + -0x1e;
  }
  currentSpriteColor = (uchar *)0xff5721;
  currentSpriteTransparent._0_1_ = 0;
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(puVar5 + 0x4ec),0xe,x,(int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + iVar4
            );
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(puVar5 + 0x500),0xf,(int)*(short *)(g1Player + 0x38) + iVar7 + iVar3,
             (int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + iVar4);
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(puVar5 + 0x514),0x10,x,
             (int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + iVar6 + iVar8 + iVar4);
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(puVar5 + 0x528),0x11,(int)*(short *)(g1Player + 0x38) + iVar7 + iVar3,
             (int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + iVar6 + iVar8 + iVar4);
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(puVar5 + 0x53c),mode + 0x14,x + iVar7,
             (int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + iVar4);
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(puVar5 + 0x550),mode + 0x14,x + iVar7,
             (((int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + iVar6 * 2 + iVar8) - iVar1) +
             iVar4);
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(puVar5 + 0x564),0x18,x,
             (int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + iVar6 + iVar4);
  Hud_BuildSprite2__FP4SPRTiii
            ((SPRT *)(puVar5 + 0x578),0x18,
             ((int)*(short *)(g1Player + 0x38) + iVar7 * 2 + iVar3) - iVar2,
             (int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + iVar6 + iVar4);
  Hud_BuildF4__FP7POLY_F4iiiiiUl(local_38 + 4,1,0,0,0x2d,0x30,0);
  if (GameSetup_gData.mirrorTrack == 0) {
    Hud_BuildFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli(prim,HudPmx_tShape_ARRAY_801115f8,0,0,0x808080,1)
    ;
  }
  else {
    Hud_BuildMapMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli
              (prim,HudPmx_tShape_ARRAY_801115f8,0,0,0x808080,1);
  }
  Hud_BuildFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli(prim + 1,&HudPmx_tShape_80111558,0,0,0x808080,1);
  Hud_BuildMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli
            (prim + 2,&HudPmx_tShape_80111558,(int)HudPmx_tShape_80111558.width,0,0x808080,1);
  Hud_BuildFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli(prim + 3,&HudPmx_tShape_8011156c,0,0,0x808080,1);
  Hud_BuildMirrorFT4__FP8POLY_FT4P13HudPmx_tShapeiiUli
            (prim + 4,&HudPmx_tShape_8011156c,(int)HudPmx_tShape_8011156c.width,0,0x808080,1);
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

	/* begin block 2 */
		// Start line: 1960
	/* end block 2 */
	// End Line: 1961

	/* begin block 3 */
		// Start line: 1969
	/* end block 3 */
	// End Line: 1970

	/* begin block 4 */
		// Start line: 1969
	/* end block 4 */
	// End Line: 1970

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
  
  ch = *str;
  bVar2 = *(byte *)((int)&local_38 + GameSetup_gData.userSetting.language);
  bVar3 = *(byte *)((int)&local_30 + GameSetup_gData.userSetting.language);
  local_38 = DAT_8013d8dc;
  local_34 = DAT_8013d8e0;
  local_33 = DAT_8013d8e1;
  local_30 = DAT_8013d8e4;
  local_2c = DAT_8013d8e8;
  local_2b = DAT_8013d8e9;
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

	/* begin block 2 */
		// Start line: 2069
	/* end block 2 */
	// End Line: 2070

	/* begin block 3 */
		// Start line: 2076
	/* end block 3 */
	// End Line: 2077

	/* begin block 4 */
		// Start line: 2076
	/* end block 4 */
	// End Line: 2077

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_Init__Fv(void)

{
  short sVar1;
  short sVar2;
  uchar *puVar3;
  uint uVar4;
  uchar **ppuVar5;
  uchar **ppuVar6;
  char *str;
  DR_MODE *pDVar7;
  DR_MODE *pDVar8;
  int y;
  int y_00;
  int shapeIdx;
  int w;
  int y_01;
  SPRT *sprt;
  POLY_G4 *prim;
  int iVar9;
  int x;
  POLY_F4 *local_3c;
  int local_30;
  GameSetup_tData *local_2c;
  
  x = 0;
  y_01 = 0;
  do {
    shapeIdx = 0;
    pDVar7 = &gTPage0;
    pDVar8 = &gTPage1;
    do {
      SetDrawMode((int)&pDVar7->tag + y_01,0,0,2,(byte *)0x0);
      SetDrawMode((int)&pDVar8->tag + y_01,0,0,3,(byte *)0x0);
      pDVar8 = pDVar8 + 1;
      shapeIdx = shapeIdx + 1;
      pDVar7 = pDVar7 + 1;
    } while (shapeIdx < 4);
    x = x + 1;
    y_01 = y_01 + 0x30;
  } while (x < 2);
  y_01 = 0;
  local_30 = 0;
  local_2c = &GameSetup_gData;
  while (puVar3 = gSprite0, y_01 <= DashHUD_gInfo.splitscreen) {
    sprt = (SPRT *)gSprite0;
    if (y_01 != 0) {
      sprt = (SPRT *)gSprite1;
    }
    local_3c = gHudF4;
    if (y_01 != 0) {
      local_3c = &POLY_F4_8013e4f8;
    }
    prim = gHudG4;
    if (y_01 != 0) {
      prim = &POLY_G4_8013e7c0;
    }
    x = 0;
    if (y_01 != 0) {
      x = -0xf;
    }
    shapeIdx = (uint)(local_2c->carInfo[0].HudTime == 0) * 0x10;
    if (local_2c->carInfo[0].HudLapnum == 0) {
      shapeIdx = shapeIdx + 0x10;
    }
    Hud_BuildSprite__FP4SPRTiiiUli
              (sprt,0x68,(int)*(short *)g1Player,((int)*(short *)(g1Player + 2) + x) - shapeIdx,
               (ulong)&DAT_0000bebe,0);
    currentSpriteColor = (uchar *)0x808080;
    Hud_BuildSprite2__FP4SPRTiii
              (sprt + 1,0x80,(int)*(short *)(g1Player + 4),(int)*(short *)(g1Player + 6) + x);
    shapeIdx = 0x81;
    if (y_01 != 0) {
      shapeIdx = 0x83;
    }
    Hud_BuildSprite2__FP4SPRTiii(sprt + 2,shapeIdx,0,0);
    *(undefined4 *)&sprt[2].w = 0x1c001c;
    shapeIdx = (int)HudPmx_tShape_ARRAY_801114a4[4].width;
    w = 0x46;
    if (Hud_BeTheCop != (void *)0x0) {
      w = 0x2e;
    }
    sVar1 = *(short *)(g1Player + 8);
    y = (int)*(short *)(g1Player + 10) + x;
    Hud_BuildSprite2__FP4SPRTiii(sprt + 4,0x69,(int)sVar1,y);
    shapeIdx = (int)sVar1 + shapeIdx;
    Hud_BuildG4__FP7POLY_G4iiiiiUlUlUlUl
              (prim,1,shapeIdx,y,w,10,0,(ulong)&DAT_00707070,0,(ulong)&DAT_00707070);
    shapeIdx = shapeIdx + w;
    Hud_BuildSprite2__FP4SPRTiii(sprt + 5,0x7d,shapeIdx,y);
    Hud_BuildF4__FP7POLY_F4iiiiiUl(local_3c,1,shapeIdx,y + 7,7,3,(ulong)&DAT_00707070);
    shapeIdx = (int)HudPmx_tShape_ARRAY_801114a4[4].width;
    sVar1 = *(short *)(g1Player + 0xc);
    uVar4 = (uint)(local_2c->carInfo[0].HudTime == 0);
    w = (int)*(short *)(g1Player + 0xe) + x + uVar4 * -0x10;
    Hud_BuildSprite2__FP4SPRTiii(sprt + 6,0x6b,(int)sVar1,w);
    shapeIdx = (int)sVar1 + shapeIdx;
    Hud_BuildG4__FP7POLY_G4iiiiiUlUlUlUl
              (prim + 1,1,shapeIdx,w,0x1d,10,0,(ulong)&DAT_00707070,0,(ulong)&DAT_00707070);
    shapeIdx = shapeIdx + 0x1d;
    Hud_BuildF4__FP7POLY_F4iiiiiUl(local_3c + 1,1,shapeIdx,w + 7,7,3,(ulong)&DAT_00707070);
    Hud_BuildSprite2__FP4SPRTiii(sprt + 7,0x7d,shapeIdx,w);
    shapeIdx = (int)HudPmx_tShape_ARRAY_801114a4[4].width;
    sVar1 = *(short *)(g1Player + 0x10);
    w = (int)*(short *)(g1Player + 0x12) + x;
    Hud_BuildSprite2__FP4SPRTiii(sprt + 8,0x69,(int)sVar1,w);
    shapeIdx = (int)sVar1 + shapeIdx;
    Hud_BuildG4__FP7POLY_G4iiiiiUlUlUlUl
              (prim + 3,1,shapeIdx,w,0x3c,10,0,(ulong)&DAT_00707070,0,(ulong)&DAT_00707070);
    shapeIdx = shapeIdx + 0x3c;
    Hud_BuildF4__FP7POLY_F4iiiiiUl(local_3c + 2,1,shapeIdx,w + 7,7,3,(ulong)&DAT_00707070);
    Hud_BuildSprite2__FP4SPRTiii(sprt + 9,0x7d,shapeIdx,w);
    w = (int)HudPmx_tShape_801115d0.width;
    shapeIdx = 0x26;
    if ((Hud_BeTheCop == (void *)0x0) &&
       (shapeIdx = 0x32, *(int *)((int)GameSetup_gData.checkpointHUD + local_30) == 0)) {
      shapeIdx = 0x3d;
    }
    if (Hud_BeTheCop == (void *)0x0) {
      y = (int)*(short *)(g1Player + 0x14);
      y_00 = (int)*(short *)(g1Player + 0x16) + x;
    }
    else {
      y = (int)*(short *)(g1Player + 8) + 0xe;
      y_00 = (int)*(short *)(g1Player + 10) + x + 0xe;
    }
    Hud_BuildSprite2__FP4SPRTiii(sprt + 10,0x76,y,y_00);
    Hud_BuildG4__FP7POLY_G4iiiiiUlUlUlUl
              (prim + 2,1,y + w,y_00,shapeIdx,10,0,(ulong)&DAT_00707070,0,(ulong)&DAT_00707070);
    shapeIdx = y + w + shapeIdx;
    Hud_BuildF4__FP7POLY_F4iiiiiUl(local_3c + 3,1,shapeIdx,y_00 + 7,7,3,(ulong)&DAT_00707070);
    Hud_BuildSprite__FP4SPRTiiiUli(sprt + 0xb,0x7d,shapeIdx,y_00,0x808080,0);
    currentSpriteColor = (uchar *)0xa0a0a0;
    Hud_BuildTimeSprites__FP4SPRTPcii
              (sprt + 0xc,s_00M00S00_800568ec,
               (int)*(short *)(g1Player + 8) + (int)*(short *)(g1Player + 0x18),
               (int)*(short *)(g1Player + 10) + x + (int)*(short *)(g1Player + 0x1a));
    Hud_BuildTimeSprites__FP4SPRTPcii
              (sprt + 0x14,(char *)&PTR_DAT_8013d8ec,
               (int)*(short *)(g1Player + 0xc) + (int)*(short *)(g1Player + 0x1c),
               (int)*(short *)(g1Player + 0xe) + (int)*(short *)(g1Player + 0x1e) + x +
               uVar4 * -0x10);
    currentSpriteColor = (uchar *)0xa0a0a0;
    Hud_BuildTimeSprites__FP4SPRTPcii
              (sprt + 0x17,s_0M00S00_8013d8f0,
               (int)*(short *)(g1Player + 0x10) + (int)*(short *)(g1Player + 0x20),
               (int)*(short *)(g1Player + 0x12) + (int)*(short *)(g1Player + 0x22) + x + 1);
    if (Hud_BeTheCop == (void *)0x0) {
      shapeIdx = (int)*(short *)(g1Player + 0x14) + (int)*(short *)(g1Player + 0x24);
      w = (int)*(short *)(g1Player + 0x16) + x + 1;
    }
    else {
      shapeIdx = (int)*(short *)(g1Player + 8) + 0x10;
      w = (int)*(short *)(g1Player + 10) + x + 0xc;
    }
    if (*(int *)((int)GameSetup_gData.checkpointHUD + local_30) == 0) {
      str = s_0M00S00_8013d8f0;
    }
    else {
      str = s_0_000_8013d8f8;
    }
    Hud_BuildTimeSprites__FP4SPRTPcii
              (sprt + 0x1e,str,shapeIdx + (int)HudPmx_tShape_801115d0.width,w);
    *(int *)((int)HudSplitTimeDiff1 + local_30) = (int)sprt[0x1f].y0 - (int)sprt[0x1e].y0;
    puVar3 = g1Player;
    currentSpriteColor = (uchar *)0xa0a0a0;
    *(int *)((int)HudSplitTimeDiff2 + local_30) = (int)sprt[0x22].y0 - (int)sprt[0x1e].y0;
    shapeIdx = (int)HudPmx_tShape_ARRAY_80111008[0].width;
    sVar1 = *(short *)(puVar3 + 0x38);
    sVar2 = *(short *)(puVar3 + 0x28);
    y = (int)HudPmx_tShape_ARRAY_8011115c[10].width;
    w = (int)*(short *)(puVar3 + 0x3a) + HudMapOffsetY + (int)*(short *)(puVar3 + 0x2a) + x;
    if ((y_01 == 0) && (DashHUD_gInfo.splitscreen != 0)) {
      w = w + -2;
    }
    y_00 = 0;
    iVar9 = 0x334;
    Hud_BuildSprite__FP4SPRTiiiUli
              (sprt + 0x28,0x3e,(int)*(short *)(g1Player + 0x38) + 0x13,w + -1,0x808080,0);
    Hud_BuildSprite2__FP4SPRTiii(sprt + 0x25,0x2c,(int)sVar1 + (int)sVar2,w);
    shapeIdx = (int)sVar1 + (int)sVar2 + shapeIdx;
    Hud_BuildSprite2__FP4SPRTiii(sprt + 0x26,0x47,shapeIdx,w);
    Hud_BuildSprite2__FP4SPRTiii(sprt + 0x27,0x36,shapeIdx + y,w);
    currentSpriteColor = (uchar *)0x808080;
    shapeIdx = (int)*(short *)(g1Player + 4) + (int)*(short *)(g1Player + 0x2c);
    x = (int)*(short *)(g1Player + 6) + (int)*(short *)(g1Player + 0x2e) + x;
    Hud_BuildSprite2__FP4SPRTiii(sprt + 0x31,0x1a,shapeIdx + -1,x);
    Hud_BuildSprite2__FP4SPRTiii(sprt + 0x32,0x1b,shapeIdx + -2,x + -1);
    do {
      Hud_BuildSprite2__FP4SPRTiii((SPRT *)((int)&sprt->tag + iVar9),y_00 + 0x1c,shapeIdx + 2,x + 6)
      ;
      y_00 = y_00 + 1;
      iVar9 = iVar9 + 0x14;
    } while (y_00 < 8);
    Hud_InitMapFrame__Fii(y_01,0);
    y_01 = y_01 + 1;
    local_30 = local_30 + 4;
    local_2c = (GameSetup_tData *)((local_2c->controllerData).shockImpact + 1);
  }
  shapeIdx = 0;
  currentSpriteColor = (uchar *)0x808080;
  currentSpriteTransparent._0_1_ = 1;
  x = (int)*(short *)(g1Player + 0x34);
  y_01 = (int)*(short *)(g1Player + 0x36);
  Hud_BuildSprite2__FP4SPRTiii((SPRT *)(gSprite0 + 0x44c),0x6f,x,y_01);
  Hud_BuildSprite2__FP4SPRTiii((SPRT *)(puVar3 + 0x3fc),0x6c,x + 0x12,y_01);
  Hud_BuildSprite2__FP4SPRTiii((SPRT *)(puVar3 + 0x410),0x6e,x + 0x25,y_01);
  Hud_BuildSprite2__FP4SPRTiii((SPRT *)(puVar3 + 0x424),0x3f,x + 0x3a,y_01);
  Hud_BuildSprite2__FP4SPRTiii((SPRT *)(puVar3 + 0x460),0x72,x + 0x4a,y_01);
  Hud_BuildSprite2__FP4SPRTiii((SPRT *)(puVar3 + 0x438),0,x + 0x6d,y_01 + -7);
  Hud_BuildSprite2__FP4SPRTiii((SPRT *)(puVar3 + 0x474),3,0,y_01 + 4);
  currentSpriteTransparent._0_1_ = 0;
  Hud_InitCdPlayer__Fv();
  Hud_Reset__Fv();
  ppuVar6 = &PerpOverlayMessage;
  ppuVar5 = &PerpOverlayOn;
  BTC_BonusTime = (uchar *)0x0;
  BTC_Countdown = 0;
  FinalBTC_Countdown = 0;
  BTC_UserHasControl[0] = (uchar *)0x0;
  HudBustedOverlay = (void *)0x0;
  do {
    *ppuVar5 = (uchar *)0x0;
    *ppuVar6 = (uchar *)0x0;
    ppuVar6 = ppuVar6 + 1;
    shapeIdx = shapeIdx + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (shapeIdx < 2);
  Hud_kTurnSongOffNext = (void *)0x0;
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

	/* begin block 2 */
		// Start line: 2874
	/* end block 2 */
	// End Line: 2875

	/* begin block 3 */
		// Start line: 2948
	/* end block 3 */
	// End Line: 2949

	/* begin block 4 */
		// Start line: 2948
	/* end block 4 */
	// End Line: 2949

	/* begin block 5 */
		// Start line: 2949
	/* end block 5 */
	// End Line: 2950

	/* begin block 6 */
		// Start line: 2949
	/* end block 6 */
	// End Line: 2950

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_InitTables__Fv(void)

{
  tSmallCoordXY *ptVar1;
  
  ptVar1 = Hud_gElementPositions;
  if (1 < GameSetup_gData.numPlayerRaceCars) {
    ptVar1 = (tSmallCoordXY *)PTR_ARRAY_80120970;
  }
  g1Player = (uchar *)ptVar1;
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

	/* begin block 2 */
		// Start line: 2954
	/* end block 2 */
	// End Line: 2955

	/* begin block 3 */
		// Start line: 2958
	/* end block 3 */
	// End Line: 2959

	/* begin block 4 */
		// Start line: 2958
	/* end block 4 */
	// End Line: 2959

	/* begin block 5 */
		// Start line: 2959
	/* end block 5 */
	// End Line: 2960

	/* begin block 6 */
		// Start line: 2959
	/* end block 6 */
	// End Line: 2960

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
  *(HudPmx_tUV *)&sprt->u0 = HudPmx_gHudNumberUV[iVar4 / 10];
  *(HudPmx_tUV *)&sprt[1].u0 = HudPmx_gHudNumberUV[iVar4 % 10];
  *(HudPmx_tUV *)&sprt[3].u0 = HudPmx_gHudNumberUV[iVar2 / 10];
  *(HudPmx_tUV *)&sprt[4].u0 = HudPmx_gHudNumberUV[iVar2 % 10];
  iVar1 = (iVar3 / 10 + (iVar3 >> 0x1f)) - (iVar5 >> 0x1f);
  *(HudPmx_tUV *)&sprt[6].u0 = HudPmx_gHudNumberUV[iVar1];
  *(HudPmx_tUV *)&sprt[7].u0 = HudPmx_gHudNumberUV[iVar3 + iVar1 * -10];
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ Hud_BuildDistanceString__FP4SPRTi(struct SPRT *sprt /*$t2*/, int player /*$a1*/)
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

	/* begin block 2 */
		// Start line: 3014
	/* end block 2 */
	// End Line: 3015

	/* begin block 3 */
		// Start line: 3019
	/* end block 3 */
	// End Line: 3020

	/* begin block 4 */
		// Start line: 3019
	/* end block 4 */
	// End Line: 3020

	/* begin block 5 */
		// Start line: 3020
	/* end block 5 */
	// End Line: 3021

	/* begin block 6 */
		// Start line: 3020
	/* end block 6 */
	// End Line: 3021

void * Hud_BuildDistanceString__FP4SPRTi(SPRT *sprt,int player)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ((&Cars_gHumanRaceCarList9)[player]->stats).checkpointUpdate;
  iVar1 = iVar2 * 6;
  if (iVar1 < 0) {
    iVar1 = iVar2 * -6;
  }
  if (GameSetup_gData.checkpointHUD[player] == 2) {
    iVar1 = (iVar1 * 1000) / 0x647;
  }
  if (iVar1 < 10000) {
    *(HudPmx_tUV *)&sprt->u0 = HudPmx_gHudNumberUV[iVar1 / 1000];
    *(HudPmx_tUV *)&sprt[2].u0 = HudPmx_gHudNumberUV[(iVar1 % 1000) / 100];
    *(HudPmx_tUV *)&sprt[3].u0 = HudPmx_gHudNumberUV[(iVar1 % 100) / 10];
    *(HudPmx_tUV *)&sprt[4].u0 = HudPmx_gHudNumberUV[iVar1 % 10];
    return &DAT_00000001;
  }
  return (void *)0x0;
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

	/* begin block 2 */
		// Start line: 3075
	/* end block 2 */
	// End Line: 3076

	/* begin block 3 */
		// Start line: 3079
	/* end block 3 */
	// End Line: 3080

	/* begin block 4 */
		// Start line: 3079
	/* end block 4 */
	// End Line: 3080

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
  *(HudPmx_tUV *)&sprt->u0 = HudPmx_gHudNumberUV[iVar2 % 10];
  *(HudPmx_tUV *)&sprt[2].u0 = HudPmx_gHudNumberUV[iVar1 / 10];
  *(HudPmx_tUV *)&sprt[3].u0 = HudPmx_gHudNumberUV[iVar1 % 10];
  iVar2 = (iVar3 / 10 + (iVar3 >> 0x1f)) - (iVar4 >> 0x1f);
  *(HudPmx_tUV *)&sprt[5].u0 = HudPmx_gHudNumberUV[iVar2];
  *(HudPmx_tUV *)&sprt[6].u0 = HudPmx_gHudNumberUV[iVar3 + iVar2 * -10];
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

	/* begin block 2 */
		// Start line: 3214
	/* end block 2 */
	// End Line: 3215

	/* begin block 3 */
		// Start line: 3302
	/* end block 3 */
	// End Line: 3303

	/* begin block 4 */
		// Start line: 3302
	/* end block 4 */
	// End Line: 3303

/* WARNING: Could not reconcile some variable overlaps */

void Hud_BuildTach__Fi(int player)

{
  uint *puVar1;
  POLY_F3 *prim;
  short sVar2;
  HudPmx_tShape *pHVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  uint uVar8;
  POLY_F3 *prim_00;
  uint uVar9;
  int y;
  undefined *puVar10;
  int local_40;
  int local_3c;
  uchar *local_38;
  int local_34;
  ulong local_30;
  
  if (player == 0) {
    local_38 = gSprite0;
  }
  else {
    local_38 = gSprite1;
  }
  iVar6 = GameSetup_gData.carInfo[player].carType;
  y = 0x1d;
  if (iVar6 < 0x1e) {
    y = iVar6;
  }
  if (GameSetup_gData.Time == 0) {
    puVar7 = day_needle;
  }
  else {
    puVar7 = night_needle;
  }
  local_30 = puVar7[y];
  puVar10 = &DAT_00005999 + (DashHUD_gInfo.rpm * 0x10000) / 0x2a30;
  if ((int)puVar10 < 0x5999) {
    puVar10 = &DAT_00005999;
  }
  if (0x13334 < (int)puVar10) {
    puVar10 = &LAB_00013334;
  }
  fixedsincos((uint)puVar10,&local_40,&local_3c);
  if (player == 0) {
    pHVar3 = &HudPmx_tShape_801116ac;
  }
  else {
    pHVar3 = &HudPmx_tShape_801116d4;
  }
  uVar9 = *(uint *)&pHVar3->pixmap;
  uVar4 = fixedmult(local_3c,0x1d);
  uVar5 = fixedmult(local_40,0x1d);
  uVar8 = uVar4 + 0x1d;
  if (player != 0) {
    uVar8 = uVar4 + 0x75;
  }
  *(uint *)(local_38 + 0x34) = uVar9 & 0xffff0000 | (uVar5 + 0x9d) * 0x100 | uVar8;
  uVar8 = fixedmult(local_3c,10);
  local_34 = uVar8 + 0xe;
  uVar8 = fixedmult(local_40,10);
  prim = DAT_1f800004;
  puVar1 = DAT_1f800000;
  y = uVar8 + 0xe;
  prim_00 = DAT_1f800004 + 1;
  DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
  *puVar1 = *puVar1 & 0xff000000 | (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004[1].tag = DAT_1f800004[1].tag & 0xff000000 | (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = (POLY_F3 *)&DAT_1f800004[1].x2;
  *puVar1 = *puVar1 & 0xff000000 | (uint)prim_00 & 0xffffff;
  *(undefined *)((int)&prim[1].tag + 3) = 3;
  prim[1].x0 = 0xe - (short)uVar4;
  *(ulong *)&prim[1].r0 = local_30 + 0x484848 | 0x42000000;
  prim[1].y0 = 0xe - (short)uVar5;
  prim[1].y1 = (short)y;
  prim[1].x1 = (short)local_34;
  prim_00 = DAT_1f800004;
  puVar1 = DAT_1f800000;
  DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar8 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 1;
  *puVar1 = *puVar1 & 0xff000000 | uVar8;
  Hud_BuildF3__FP7POLY_F3P13HudPmx_tShapeiiUl(prim,&HudPmx_tShape_801116c0,local_34,y,local_30);
  Hud_BuildF3__FP7POLY_F3P13HudPmx_tShapeiiUl(prim_00,&HudPmx_tShape_801116c0,local_34,y,0);
  prim->code = prim->code & 0xfd;
  fixedsincos((uint)(puVar10 + -0x200),&local_40,&local_3c);
  uVar8 = fixedmult(local_3c,0x20);
  sVar2 = 0xe - (short)uVar8;
  prim->x1 = sVar2;
  prim_00->x1 = sVar2;
  uVar8 = fixedmult(local_40,0x20);
  sVar2 = 0xe - (short)uVar8;
  prim->y1 = sVar2;
  prim_00->y1 = sVar2;
  fixedsincos((uint)(puVar10 + 0x200),&local_40,&local_3c);
  uVar8 = fixedmult(local_3c,0x20);
  sVar2 = 0xe - (short)uVar8;
  prim->x2 = sVar2;
  prim_00->x2 = sVar2;
  uVar8 = fixedmult(local_40,0x20);
  sVar2 = -(short)uVar8 + 0xe;
  prim->y2 = sVar2;
  prim_00->y2 = sVar2;
  puVar1 = DAT_1f800000;
  prim_00->y0 = prim_00->y0 + 2;
  prim_00->y2 = -(short)uVar8 + 0x10;
  prim_00->y1 = prim_00->y1 + 2;
  *(uint *)(local_38 + 0x28) = *(uint *)(local_38 + 0x28) & 0xff000000 | *puVar1 & 0xffffff;
  *puVar1 = *puVar1 & 0xff000000 | (uint)(local_38 + 0x28) & 0xffffff;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Hud_BuildString__FPciiiib(char *str /*$s2*/, int x /*$s1*/, int y /*$s6*/, int color /*$s7*/, int player /*stack 16*/, void * justwidth /*stack 20*/)
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

	/* begin block 2 */
		// Start line: 3527
	/* end block 2 */
	// End Line: 3528

	/* begin block 3 */
		// Start line: 3535
	/* end block 3 */
	// End Line: 3536

	/* begin block 4 */
		// Start line: 3535
	/* end block 4 */
	// End Line: 3536

int Hud_BuildString__FPciiiib(char *str,int x,int y,int color,int player,void *justwidth)

{
  char cVar1;
  short sVar2;
  size_t sVar3;
  int iVar4;
  byte bVar5;
  int x_00;
  int local_38;
  
  Hud_GoTpage__Fi(1);
  sVar3 = strlen(str);
  local_38 = 0;
  player = player * 0x20;
  x_00 = x;
  do {
    if ((int)sVar3 <= local_38) {
      Hud_GoTpage__Fi(0);
      return x_00 - x;
    }
    cVar1 = *str;
    if (cVar1 == ' ') {
      x_00 = x_00 + 3;
    }
    else {
      if (cVar1 == '*') {
        if (gPadinfo.buf[0].ID == '#') {
          sVar2 = HudPmx_tShape_80111a1c.width;
          if (justwidth == (void *)0x0) {
            Hud_FBuildSprite__FiiiUli(0xad,x_00 + 2,y,color,0);
            sVar2 = HudPmx_tShape_80111a1c.width;
          }
        }
        else {
          sVar2 = HudPmx_tShape_801119e0.width;
          if (justwidth == (void *)0x0) {
            Hud_FBuildSprite__FiiiUli(0xaa,x_00 + 2,y,color,0);
            sVar2 = HudPmx_tShape_801119e0.width;
          }
        }
        x_00 = x_00 + 5 + (int)sVar2;
        if (GameSetup_gData.commMode == 1) {
          if (gPadinfo.buf[3].data._1_1_ == '#') {
            if (gPadinfo.buf[0].ID != '#') {
LAB_800d443c:
              if (gPadinfo.buf[3].data._1_1_ == '#') {
                if (justwidth == (void *)0x0) {
                  Hud_FBuildSprite__FiiiUli(0xad,x_00,y,color,0);
                }
                iVar4 = (int)HudPmx_tShape_80111a1c.width;
                x_00 = x_00 + 3;
              }
              else {
                if (justwidth == (void *)0x0) {
                  Hud_FBuildSprite__FiiiUli(0xaa,x_00,y,color,0);
                }
                iVar4 = (int)HudPmx_tShape_801119e0.width;
                x_00 = x_00 + 3;
              }
              goto LAB_800d45cc;
            }
          }
          else {
            if (gPadinfo.buf[0].ID == '#') goto LAB_800d443c;
          }
        }
      }
      else {
        iVar4 = 0;
        if (cVar1 == '^') {
          bVar5 = 0xaa;
          if (*(char *)((int)gPadinfo.buf + player + 1) == '#') {
            bVar5 = 0xad;
          }
        }
        else {
          if (cVar1 == '(') {
            bVar5 = 0xa9;
            if (*(char *)((int)gPadinfo.buf + player + 1) == '#') {
              bVar5 = 0xab;
            }
          }
          else {
            if (cVar1 == ')') {
              bVar5 = 0xa8;
              if (*(char *)((int)gPadinfo.buf + player + 1) == '#') {
                bVar5 = 0xac;
              }
            }
            else {
              if (cVar1 == '&') {
                bVar5 = 0xae;
              }
              else {
                bVar5 = cVar1 + 0x6e;
                if (9 < (byte)(cVar1 - 0x30U)) {
                  if (cVar1 == '-') {
                    bVar5 = 0x48;
                  }
                  else {
                    if (cVar1 == ':') {
                      bVar5 = 0x49;
                    }
                    else {
                      bVar5 = cVar1 + 0x8a;
                      if ((byte)(cVar1 + 0x40U) < 0x1d) {
                        iVar4 = -1;
                      }
                      else {
                        bVar5 = *str + 0x43;
                        if (*str == -0x1b) {
                          bVar5 = 0x67;
                          iVar4 = -1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (justwidth == (void *)0x0) {
          Hud_FBuildSprite__FiiiUli((uint)bVar5,x_00,y + iVar4,color,0);
        }
        iVar4 = (int)(&HudPmx_gShapes)[(uint)bVar5].width;
        x_00 = x_00 + 1;
LAB_800d45cc:
        x_00 = x_00 + iVar4;
      }
    }
    str = str + 1;
    local_38 = local_38 + 1;
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

	/* begin block 2 */
		// Start line: 3732
	/* end block 2 */
	// End Line: 3733

	/* begin block 3 */
		// Start line: 3739
	/* end block 3 */
	// End Line: 3740

	/* begin block 4 */
		// Start line: 3739
	/* end block 4 */
	// End Line: 3740

void Hud_BuildNumbers0__Fi(int player)

{
  bool bVar1;
  uint *puVar2;
  short sVar3;
  void *pvVar4;
  short sVar5;
  short sVar6;
  int time;
  SPRT *sprt;
  uint *puVar7;
  int iVar8;
  uchar *time_00;
  uint *puVar9;
  uchar *puVar10;
  POLY_G4 *pPVar11;
  POLY_F4 *pPVar12;
  uint uVar13;
  
  puVar10 = gSprite0;
  if (player != 0) {
    puVar10 = gSprite1;
  }
  pPVar12 = gHudF4;
  if (player != 0) {
    pPVar12 = &POLY_F4_8013e4f8;
  }
  pPVar11 = gHudG4;
  if (player != 0) {
    pPVar11 = &POLY_G4_8013e7c0;
  }
  sVar3 = 0;
  if (player != 0) {
    sVar3 = -0xf;
  }
  if (GameSetup_gData.carInfo[player].HudTime != 0) {
    if ((DashHUD_gInfo.flashtime == 0) || ((simGlobal.gameTicks & 0x10U) == 0)) {
      time = DashHUD_gInfo.laptime;
      if (Hud_BeTheCop != (void *)0x0) {
        time = BTC_Countdown;
      }
      Hud_BuildETimeString__FP4SPRTi((SPRT *)(puVar10 + 0xf0),time);
    }
    puVar9 = DAT_1f800000;
    time = 8;
    if (Hud_BeTheCop != (void *)0x0) {
      time = 5;
    }
    iVar8 = 0xc;
    if (0xc < time + 0xcU) {
      puVar7 = (uint *)(puVar10 + 0xf0);
      do {
        iVar8 = iVar8 + 1;
        *puVar7 = *puVar7 & 0xff000000 | *puVar9 & 0xffffff;
        *puVar9 = *puVar9 & 0xff000000 | (uint)puVar7 & 0xffffff;
        puVar7 = puVar7 + 5;
      } while (iVar8 < (int)(time + 0xcU));
    }
    puVar9 = DAT_1f800000;
    time = 4;
    puVar7 = (uint *)(puVar10 + 0x50);
    do {
      time = time + 1;
      *puVar7 = *puVar7 & 0xff000000 | *puVar9 & 0xffffff;
      *puVar9 = *puVar9 & 0xff000000 | (uint)puVar7 & 0xffffff;
      puVar2 = DAT_1f800000;
      puVar7 = puVar7 + 5;
    } while (time < 6);
    pPVar11->tag = pPVar11->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
    *puVar2 = *puVar2 & 0xff000000 | (uint)pPVar11 & 0xffffff;
    pPVar12->tag = pPVar12->tag & 0xff000000 | (uint)pPVar11 & 0xffffff;
    *puVar2 = *puVar2 & 0xff000000 | (uint)pPVar12 & 0xffffff;
  }
  if (Hud_BeTheCop == (void *)0x0) {
    sVar5 = *(short *)(g1Player + 0x16) + sVar3 + *(short *)(g1Player + 0x26);
    sVar3 = sVar5 + 10;
    *(short *)(puVar10 + 0xd2) = sVar5;
    pPVar11[2].y0 = sVar5;
    pPVar11[2].y1 = sVar5;
    pPVar11[2].y2 = sVar3;
    pPVar11[2].y3 = sVar3;
    *(short *)(puVar10 + 0xe6) = sVar5;
    sVar6 = sVar5 + 1;
    pPVar12[3].y0 = sVar5 + 7;
    pPVar12[3].y1 = sVar5 + 7;
    pPVar12[3].y2 = sVar3;
    pPVar12[3].y3 = sVar3;
    *(short *)(puVar10 + 0x262) = sVar6;
    sVar3 = *(short *)(HudSplitTimeDiff1 + player);
    *(short *)(puVar10 + 0x28a) = sVar6;
    *(short *)(puVar10 + 0x29e) = sVar6;
    *(short *)(puVar10 + 0x276) = sVar3 + sVar6;
    sVar3 = *(short *)(HudSplitTimeDiff2 + player);
    *(short *)(puVar10 + 0x2c6) = sVar6;
    *(short *)(puVar10 + 0x2da) = sVar6;
    *(short *)(puVar10 + 0x2b2) = sVar3 + sVar6;
  }
  time_00 = BTC_BonusTime;
  if ((BTC_BonusTime == (uchar *)0x0) || (Hud_BeTheCop == (void *)0x0)) {
    if (GameSetup_gData.checkpointType == 0) {
      return;
    }
    if (GameSetup_gData.checkpointHUD[player] == 0) {
      if (((&Cars_gHumanRaceCarList9)[player]->stats).checkpointDisplay < 1) {
        return;
      }
      time = ((&Cars_gHumanRaceCarList9)[player]->stats).checkpointDifference;
      if (time < -0x95ff) {
        return;
      }
      if (0x95ff < time) {
        return;
      }
      if (Hud_BeTheCop != (void *)0x0) {
        return;
      }
      if (DashHUD_gInfo.wrongway[player] != 0) {
        return;
      }
      if (time < 0) {
        *(undefined4 *)(puVar10 + 0xd4) = HudPmx_tShape_801115e4.pixmap._0_4_;
      }
      else {
        *(undefined4 *)(puVar10 + 0xd4) = HudPmx_tShape_801115d0.pixmap._0_4_;
      }
      sprt = (SPRT *)(puVar10 + 600);
      time = 0x1e;
      Hud_BuildTimeString__FP4SPRTi
                (sprt,((&Cars_gHumanRaceCarList9)[player]->stats).checkpointDifference);
      puVar9 = DAT_1f800000;
      do {
        time = time + 1;
        sprt->tag = sprt->tag & 0xff000000 | *puVar9 & 0xffffff;
        *puVar9 = *puVar9 & 0xff000000 | (uint)sprt & 0xffffff;
        sprt = sprt + 1;
      } while (time < 0x25);
      time = 10;
      puVar9 = (uint *)(puVar10 + 200);
      uVar13 = (uint)puVar9 & 0xffffff;
      do {
        puVar7 = DAT_1f800000;
        if (time == 10) {
          Hud_GoTpage__Fi(0);
          puVar7 = DAT_1f800000;
          *(uint *)(puVar10 + 200) =
               *(uint *)(puVar10 + 200) & 0xff000000 | *DAT_1f800000 & 0xffffff;
          *puVar7 = *puVar7 & 0xff000000 | uVar13;
          Hud_GoTpage__Fi(1);
        }
        else {
          *puVar9 = *puVar9 & 0xff000000 | *DAT_1f800000 & 0xffffff;
          *puVar7 = *puVar7 & 0xff000000 | (uint)puVar9 & 0xffffff;
        }
        puVar9 = puVar9 + 5;
        time = time + 1;
      } while (time < 0xc);
    }
    else {
      pvVar4 = Hud_BuildDistanceString__FP4SPRTi((SPRT *)(puVar10 + 600),player);
      if (pvVar4 == (void *)0x0) {
        return;
      }
      if (((&Cars_gHumanRaceCarList9)[player]->stats).checkpointUpdate < 0) {
        *(undefined4 *)(puVar10 + 0xd4) = HudPmx_tShape_801115e4.pixmap._0_4_;
      }
      else {
        *(undefined4 *)(puVar10 + 0xd4) = HudPmx_tShape_801115d0.pixmap._0_4_;
      }
      puVar9 = DAT_1f800000;
      time = 0x1e;
      puVar7 = (uint *)(puVar10 + 600);
      do {
        time = time + 1;
        *puVar7 = *puVar7 & 0xff000000 | *puVar9 & 0xffffff;
        *puVar9 = *puVar9 & 0xff000000 | (uint)puVar7 & 0xffffff;
        puVar7 = puVar7 + 5;
      } while (time < 0x23);
      time = 10;
      puVar9 = (uint *)(puVar10 + 200);
      uVar13 = (uint)puVar9 & 0xffffff;
      do {
        puVar7 = DAT_1f800000;
        if (time == 10) {
          Hud_GoTpage__Fi(0);
          puVar7 = DAT_1f800000;
          *(uint *)(puVar10 + 200) =
               *(uint *)(puVar10 + 200) & 0xff000000 | *DAT_1f800000 & 0xffffff;
          *puVar7 = *puVar7 & 0xff000000 | uVar13;
          Hud_GoTpage__Fi(1);
        }
        else {
          *puVar9 = *puVar9 & 0xff000000 | *DAT_1f800000 & 0xffffff;
          *puVar7 = *puVar7 & 0xff000000 | (uint)puVar9 & 0xffffff;
        }
        puVar9 = puVar9 + 5;
        time = time + 1;
      } while (time < 0xc);
    }
  }
  else {
    if (GameSetup_gData.carInfo[player].HudTime == 0) {
      return;
    }
    sprt = (SPRT *)(puVar10 + 600);
    bVar1 = (int)BTC_BonusTime < 0;
    *(undefined4 *)(puVar10 + 0xd4) = HudPmx_tShape_801115d0.pixmap._0_4_;
    if (bVar1) {
      time_00 = (uchar *)0x0;
    }
    Hud_BuildTimeString__FP4SPRTi(sprt,(int)time_00);
    puVar9 = DAT_1f800000;
    time = 0x1e;
    do {
      time = time + 1;
      sprt->tag = sprt->tag & 0xff000000 | *puVar9 & 0xffffff;
      *puVar9 = *puVar9 & 0xff000000 | (uint)sprt & 0xffffff;
      sprt = sprt + 1;
    } while (time < 0x22);
    time = 10;
    puVar9 = (uint *)(puVar10 + 200);
    uVar13 = (uint)puVar9 & 0xffffff;
    do {
      puVar7 = DAT_1f800000;
      if (time == 10) {
        Hud_GoTpage__Fi(0);
        puVar7 = DAT_1f800000;
        *(uint *)(puVar10 + 200) = *(uint *)(puVar10 + 200) & 0xff000000 | *DAT_1f800000 & 0xffffff;
        *puVar7 = *puVar7 & 0xff000000 | uVar13;
        Hud_GoTpage__Fi(1);
      }
      else {
        *puVar9 = *puVar9 & 0xff000000 | *DAT_1f800000 & 0xffffff;
        *puVar7 = *puVar7 & 0xff000000 | (uint)puVar9 & 0xffffff;
      }
      puVar9 = puVar9 + 5;
      time = time + 1;
    } while (time < 0xc);
  }
  puVar9 = DAT_1f800000;
  pPVar11[2].tag = pPVar11[2].tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
  *puVar9 = *puVar9 & 0xff000000 | (uint)(pPVar11 + 2) & 0xffffff;
  pPVar12[3].tag = pPVar12[3].tag & 0xff000000 | (uint)(pPVar11 + 2) & 0xffffff;
  *puVar9 = *puVar9 & 0xff000000 | (uint)(pPVar12 + 3) & 0xffffff;
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

	/* begin block 2 */
		// Start line: 4097
	/* end block 2 */
	// End Line: 4098

	/* begin block 3 */
		// Start line: 4106
	/* end block 3 */
	// End Line: 4107

	/* begin block 4 */
		// Start line: 4106
	/* end block 4 */
	// End Line: 4107

void Hud_BuildNumbers__Fi(int player)

{
  short sVar1;
  short sVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint *puVar5;
  POLY_GT4 *prim;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  POLY_G4 *pPVar13;
  int iVar14;
  POLY_F4 *pPVar15;
  int x;
  int iVar16;
  int iVar17;
  uint *puVar18;
  int y;
  int iVar19;
  
  puVar18 = (uint *)gSprite0;
  if (player != 0) {
    puVar18 = (uint *)gSprite1;
  }
  pPVar15 = gHudF4;
  if (player != 0) {
    pPVar15 = &POLY_F4_8013e4f8;
  }
  pPVar13 = gHudG4;
  if (player != 0) {
    pPVar13 = &POLY_G4_8013e7c0;
  }
  y = 0;
  if (player != 0) {
    y = -0xf;
  }
  if (((GameSetup_gData.carInfo[player].HudLapnum != 0) && (Hud_BeTheCop == (void *)0x0)) &&
     (iVar9 = 0x14, DashHUD_gInfo.maxlaps != 1)) {
    *(HudPmx_tUV *)(puVar18 + 0x67) = HudPmx_gHudNumberUV[DashHUD_gInfo.lap];
    puVar6 = puVar18 + 100;
    *(HudPmx_tUV *)(puVar18 + 0x71) = HudPmx_gHudNumberUV[DashHUD_gInfo.maxlaps];
    puVar8 = DAT_1f800000;
    do {
      iVar9 = iVar9 + 1;
      *puVar6 = *puVar6 & 0xff000000 | *puVar8 & 0xffffff;
      *puVar8 = *puVar8 & 0xff000000 | (uint)puVar6 & 0xffffff;
      puVar5 = DAT_1f800000;
      puVar6 = puVar6 + 5;
    } while (iVar9 < 0x17);
    iVar9 = 6;
    puVar8 = puVar18 + 0x1e;
    do {
      iVar9 = iVar9 + 1;
      *puVar8 = *puVar8 & 0xff000000 | *puVar5 & 0xffffff;
      *puVar5 = *puVar5 & 0xff000000 | (uint)puVar8 & 0xffffff;
      puVar6 = DAT_1f800000;
      puVar8 = puVar8 + 5;
    } while (iVar9 < 8);
    pPVar13[1].tag = pPVar13[1].tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
    *puVar6 = *puVar6 & 0xff000000 | (uint)(pPVar13 + 1) & 0xffffff;
    pPVar15[1].tag = pPVar15[1].tag & 0xff000000 | (uint)(pPVar13 + 1) & 0xffffff;
    *puVar6 = *puVar6 & 0xff000000 | (uint)(pPVar15 + 1) & 0xffffff;
  }
  if ((((GameSetup_gData.carInfo[player].HudTime != 0) && (DashHUD_gInfo.record != 0)) &&
      ((DashHUD_gInfo.record < 0x9600 &&
       ((Hud_BeTheCop == (void *)0x0 && (Hud_gShowedCDPlayer == (void *)0x0)))))) &&
     (DashHUD_gInfo.maxlaps != 1)) {
    if ((DashHUD_gInfo.flashtime == 0) || ((simGlobal.gameTicks & 0x10U) == 0)) {
      Hud_BuildTimeString__FP4SPRTi((SPRT *)(puVar18 + 0x73),DashHUD_gInfo.record);
    }
    puVar8 = DAT_1f800000;
    iVar9 = 0x17;
    puVar6 = puVar18 + 0x73;
    do {
      iVar9 = iVar9 + 1;
      *puVar6 = *puVar6 & 0xff000000 | *puVar8 & 0xffffff;
      *puVar8 = *puVar8 & 0xff000000 | (uint)puVar6 & 0xffffff;
      puVar5 = DAT_1f800000;
      puVar6 = puVar6 + 5;
    } while (iVar9 < 0x1e);
    iVar9 = 8;
    puVar8 = puVar18 + 0x28;
    do {
      iVar9 = iVar9 + 1;
      *puVar8 = *puVar8 & 0xff000000 | *puVar5 & 0xffffff;
      *puVar5 = *puVar5 & 0xff000000 | (uint)puVar8 & 0xffffff;
      puVar6 = DAT_1f800000;
      puVar8 = puVar8 + 5;
    } while (iVar9 < 10);
    pPVar13[3].tag = pPVar13[3].tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
    *puVar6 = *puVar6 & 0xff000000 | (uint)(pPVar13 + 3) & 0xffffff;
    pPVar15[2].tag = pPVar15[2].tag & 0xff000000 | (uint)(pPVar13 + 3) & 0xffffff;
    *puVar6 = *puVar6 & 0xff000000 | (uint)(pPVar15 + 2) & 0xffffff;
  }
  if (((GameSetup_gData.carInfo[player].HudPosition != 0) && (Hud_BeTheCop == (void *)0x0)) &&
     (1 < DashHUD_gInfo.opponents)) {
    *(short *)(puVar18 + 0xbb) =
         (*(short *)(g1Player + 0x38) + *(short *)(g1Player + 0x28) +
         HudPmx_tShape_ARRAY_80111008[0].width + -2) -
         (&HudPmx_gShapes)[DashHUD_gInfo.position + 0x2c].width;
    puVar18[0xbc] = *(uint *)&HudPmx_tShape_ARRAY_80111008[DashHUD_gInfo.position].pixmap;
    iVar9 = 0x25;
    *(short *)(puVar18 + 0xbd) = (&HudPmx_gShapes)[DashHUD_gInfo.position + 0x2c].width;
    puVar18[0xc6] = *(uint *)&HudPmx_tShape_ARRAY_801110bc[DashHUD_gInfo.opponents].pixmap;
    puVar8 = DAT_1f800000;
    puVar6 = puVar18 + 0xb9;
    *(short *)(puVar18 + 199) = (&HudPmx_gShapes)[DashHUD_gInfo.opponents + 0x35].width;
    do {
      iVar9 = iVar9 + 1;
      *puVar6 = *puVar6 & 0xff000000 | *puVar8 & 0xffffff;
      *puVar8 = *puVar8 & 0xff000000 | (uint)puVar6 & 0xffffff;
      puVar6 = puVar6 + 5;
    } while (iVar9 < 0x28);
    if (GameSetup_gData.carInfo[iVar9].HudMap != 0) {
      Hud_GoTpage__Fi(0);
      puVar8 = DAT_1f800000;
      puVar18[200] = puVar18[200] & 0xff000000 | *DAT_1f800000 & 0xffffff;
      *puVar8 = *puVar8 & 0xff000000 | (uint)(puVar18 + 200) & 0xffffff;
      Hud_GoTpage__Fi(1);
    }
  }
  Hud_GoTpage__Fi(0);
  puVar8 = DAT_1f800000;
  if (GameSetup_gData.carInfo[player].HudTach == 0) goto LAB_800d5640;
  if (DashHUD_gInfo.gear == 0) {
    puVar6 = puVar18 + 0xf0;
    puVar18[0xf0] = puVar18[0xf0] & 0xff000000 | *DAT_1f800000 & 0xffffff;
LAB_800d551c:
    *puVar8 = *puVar8 & 0xff000000 | (uint)puVar6 & 0xffffff;
  }
  else {
    if (DashHUD_gInfo.gear == 1) {
      puVar6 = puVar18 + 0xeb;
      puVar18[0xeb] = puVar18[0xeb] & 0xff000000 | *DAT_1f800000 & 0xffffff;
      goto LAB_800d551c;
    }
    (puVar18 + DashHUD_gInfo.gear * 5)[0xc3] =
         (puVar18 + DashHUD_gInfo.gear * 5)[0xc3] & 0xff000000 | *DAT_1f800000 & 0xffffff;
    *puVar8 = *puVar8 & 0xff000000 | (uint)(puVar18 + DashHUD_gInfo.gear * 5 + 0xc3) & 0xffffff;
  }
  puVar8 = DAT_1f800000;
  if (GameSetup_gData.carInfo[player].HudSpeed == 0) {
    puVar6 = puVar18 + 0xfa;
    puVar18[0xfa] = puVar18[0xfa] & 0xff000000 | *DAT_1f800000 & 0xffffff;
  }
  else {
    puVar6 = puVar18 + 0xf5;
    puVar18[0xf5] = puVar18[0xf5] & 0xff000000 | *DAT_1f800000 & 0xffffff;
  }
  *puVar8 = *puVar8 & 0xff000000 | (uint)puVar6 & 0xffffff;
LAB_800d5640:
  Hud_GoTpage__Fi(1);
  if (GameSetup_gData.carInfo[player].HudTach != 0) {
    uVar7 = fixedmult(GameSetup_gData.carInfo[player].HudSpeedMult,DashHUD_gInfo.speed);
    prim = DAT_1f800004;
    puVar8 = DAT_1f800000;
    if ((int)uVar7 < 0) {
      uVar7 = uVar7 + 0xffff;
    }
    iVar10 = (int)uVar7 >> 0x10;
    iVar9 = (int)HudPmx_tShape_ARRAY_80111008[1].width;
    iVar12 = (int)HudPmx_tShape_ARRAY_80111008[7].width;
    iVar16 = (int)HudPmx_tShape_ARRAY_80111008[0].width + 1;
    x = iVar16 * 2 + (int)*(short *)(g1Player + 4) + (int)*(short *)(g1Player + 0x30) + 4;
    puVar3 = &DAT_1f800004->tag;
    sVar1 = *(short *)(g1Player + 0x32);
    sVar2 = *(short *)(g1Player + 6);
    uVar11 = (uint)DAT_1f800004 & 0xffffff;
    puVar4 = &DAT_1f800004->tag;
    DAT_1f800004 = DAT_1f800004 + 1;
    *puVar4 = *puVar3 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    y = (int)sVar2 + (int)sVar1 + y;
    *puVar8 = *puVar8 & 0xff000000 | uVar11;
    iVar17 = iVar16 + iVar9 >> 1;
    iVar9 = (iVar10 / 10 + (iVar10 >> 0x1f)) - ((int)uVar7 >> 0x1f);
    iVar14 = (iVar10 / 100 + (iVar10 >> 0x1f)) - ((int)uVar7 >> 0x1f);
    iVar19 = iVar9 + iVar14 * -10;
    Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
              (prim,HudPmx_tShape_ARRAY_80111008 + iVar10 + iVar9 * -10,x,y,0xc8c8c8);
    *(undefined4 *)&prim->r3 = 0x505050;
    *(undefined4 *)&prim->r2 = 0x505050;
    prim = DAT_1f800004;
    puVar8 = DAT_1f800000;
    if (iVar19 == 1) {
      x = x - iVar17;
    }
    else {
      if (iVar19 == 7) {
        x = x - (iVar16 + iVar12 >> 1);
      }
      else {
        x = x - iVar16;
      }
    }
    if ((iVar14 != 0) || (iVar19 != 0)) {
      DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
      uVar7 = (uint)DAT_1f800004 & 0xffffff;
      DAT_1f800004 = DAT_1f800004 + 1;
      *puVar8 = *puVar8 & 0xff000000 | uVar7;
      Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
                (prim,HudPmx_tShape_ARRAY_80111008 + iVar19,x,y,0xc8c8c8);
      *(undefined4 *)&prim->r3 = 0x505050;
      *(undefined4 *)&prim->r2 = 0x505050;
    }
    prim = DAT_1f800004;
    puVar8 = DAT_1f800000;
    if (iVar19 == 1) {
      x = x - (iVar16 - iVar17);
    }
    sVar1 = (&HudPmx_gShapes)[iVar14 + 0x2c].width;
    if (iVar14 != 0) {
      DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
      uVar7 = (uint)DAT_1f800004 & 0xffffff;
      DAT_1f800004 = DAT_1f800004 + 1;
      *puVar8 = *puVar8 & 0xff000000 | uVar7;
      Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
                (prim,HudPmx_tShape_ARRAY_80111008 + iVar14,(x + -1) - (int)sVar1,y,0xc8c8c8);
      *(undefined4 *)&prim->r3 = 0x505050;
      *(undefined4 *)&prim->r2 = 0x505050;
    }
  }
  puVar8 = DAT_1f800000;
  if ((DashHUD_gInfo.wrongway[player] != 0) && ((simGlobal.gameTicks >> 5 & 1U) != 0)) {
    *puVar18 = *puVar18 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    *puVar8 = *puVar8 & 0xff000000 | (uint)puVar18 & 0xffffff;
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

	/* begin block 2 */
		// Start line: 4837
	/* end block 2 */
	// End Line: 4838

	/* begin block 3 */
		// Start line: 4857
	/* end block 3 */
	// End Line: 4858

	/* begin block 4 */
		// Start line: 4857
	/* end block 4 */
	// End Line: 4858

	/* begin block 5 */
		// Start line: 4862
	/* end block 5 */
	// End Line: 4863

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_InitMap__Fv(void)

{
  int iVar1;
  Car_tObj *pCVar2;
  int iVar3;
  Car_tObj **ppCVar4;
  CVECTOR *pCVar5;
  
  iVar1 = Cars_gNumRaceCars;
  iVar3 = 0;
  if (0 < Cars_gNumRaceCars) {
    pCVar5 = &Hud_gMarkerColor;
    ppCVar4 = &Cars_gRaceCarList9;
    do {
      pCVar2 = *ppCVar4;
      ppCVar4 = ppCVar4 + 1;
      iVar3 = iVar3 + 1;
      *pCVar5 = *(CVECTOR *)&pCVar2->carInfo->HudColour;
      pCVar5 = pCVar5 + 1;
    } while (iVar3 < iVar1);
  }
  iVar1 = Cars_gNumCopCars;
  iVar3 = 0;
  if (0 < Cars_gNumCopCars) {
    pCVar5 = &Hud_gCopMarkerColor;
    ppCVar4 = &Cars_gCopCarList9;
    do {
      pCVar2 = *ppCVar4;
      ppCVar4 = ppCVar4 + 1;
      iVar3 = iVar3 + 1;
      *pCVar5 = *(CVECTOR *)&pCVar2->carInfo->HudColour;
      pCVar5 = pCVar5 + 1;
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

	/* begin block 2 */
		// Start line: 4968
	/* end block 2 */
	// End Line: 4969

	/* begin block 3 */
		// Start line: 5061
	/* end block 3 */
	// End Line: 5062

	/* begin block 4 */
		// Start line: 5061
	/* end block 4 */
	// End Line: 5062

void Hud_BuildMapMarkers__Fi(int player)

{
  uint *puVar1;
  SPRT *sprt;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CVECTOR color;
  uint uVar6;
  int iVar7;
  Car_tObj **ppCVar8;
  CVECTOR *pCVar9;
  int iVar10;
  int shapeIdx;
  int iVar11;
  
  iVar2 = gMapOffX;
  iVar10 = 0;
  ppCVar8 = &Cars_gCopCarList9;
  iVar3 = gMapOffY + 2;
  while (iVar10 < Cars_gNumCopCars) {
    if (((*ppCVar8)->N).active != '\0') {
      iVar7 = BWorldSm_slices[(int)((*ppCVar8)->N).simRoadInfo.slice].center[0];
      shapeIdx = iVar7 / gMapScaleX;
      if (gMapScaleX == 0) {
        trap(0x1c00);
      }
      if ((gMapScaleX == -1) && (iVar7 == -0x80000000)) {
        trap(0x1800);
      }
      iVar7 = BWorldSm_slices[(int)((*ppCVar8)->N).simRoadInfo.slice].center[2];
      iVar11 = iVar7 / gMapScaleY;
      if (gMapScaleY == 0) {
        trap(0x1c00);
      }
      if ((gMapScaleY == -1) && (iVar7 == -0x80000000)) {
        trap(0x1800);
      }
      uVar4 = fixedmult(mapMarkerMCos,shapeIdx);
      uVar5 = fixedmult(mapMarkerMSin,iVar11);
      iVar7 = (iVar2 + uVar4) - uVar5;
      uVar4 = fixedmult(mapMarkerMSin,shapeIdx);
      uVar5 = fixedmult(mapMarkerMCos,iVar11);
      sprt = DAT_1f800004;
      puVar1 = DAT_1f800000;
      if (GameSetup_gData.mirrorTrack != 0) {
        iVar7 = -iVar7;
      }
      DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
      *puVar1 = *puVar1 & 0xff000000 | (uint)DAT_1f800004 & 0xffffff;
      DAT_1f800004 = DAT_1f800004 + 1;
      if ((((*ppCVar8)->speechInfo).speechSource & 2) == 0) {
        currentSpriteColor = *(uchar **)(&Hud_gCopMarkerColor + iVar10);
      }
      else {
        currentSpriteColor = (uchar *)0xff;
        if ((gFlip == 0) && (currentSpriteColor = (uchar *)0xff, simVar.quickPauseSim == 0)) {
          currentSpriteColor = (uchar *)0xff0000;
        }
      }
      Hud_BuildSprite__FP4SPRTiiiUli
                (sprt,0x7a,iVar7 + 0x14U & 0xffff,0x18 - (iVar3 + uVar4 + uVar5) & 0xffff,
                 (ulong)currentSpriteColor,0);
    }
    ppCVar8 = ppCVar8 + 1;
    iVar10 = iVar10 + 1;
  }
  iVar10 = 0;
  pCVar9 = &Hud_gMarkerColor;
  ppCVar8 = &Cars_gRaceCarList9;
  while (iVar10 < Cars_gNumRaceCars) {
    if (((*ppCVar8)->N).active != '\0') {
      iVar7 = BWorldSm_slices[(int)((*ppCVar8)->N).simRoadInfo.slice].center[0];
      shapeIdx = iVar7 / gMapScaleX;
      if (gMapScaleX == 0) {
        trap(0x1c00);
      }
      if ((gMapScaleX == -1) && (iVar7 == -0x80000000)) {
        trap(0x1800);
      }
      iVar7 = BWorldSm_slices[(int)((*ppCVar8)->N).simRoadInfo.slice].center[2];
      iVar11 = iVar7 / gMapScaleY;
      if (gMapScaleY == 0) {
        trap(0x1c00);
      }
      if ((gMapScaleY == -1) && (iVar7 == -0x80000000)) {
        trap(0x1800);
      }
      uVar4 = fixedmult(mapMarkerMCos,shapeIdx);
      uVar5 = fixedmult(mapMarkerMSin,iVar11);
      iVar7 = (iVar2 + uVar4) - uVar5;
      uVar4 = fixedmult(mapMarkerMSin,shapeIdx);
      uVar5 = fixedmult(mapMarkerMCos,iVar11);
      sprt = DAT_1f800004;
      puVar1 = DAT_1f800000;
      if (GameSetup_gData.mirrorTrack != 0) {
        iVar7 = -iVar7;
      }
      DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
      *puVar1 = *puVar1 & 0xff000000 | (uint)DAT_1f800004 & 0xffffff;
      uVar6 = (*ppCVar8)->carFlags;
      DAT_1f800004 = DAT_1f800004 + 1;
      if ((uVar6 & 0x200) == 0) {
        if ((uVar6 & 4) == 0) {
          shapeIdx = 0x7a;
          uVar6 = iVar7 + 0x14;
        }
        else {
          shapeIdx = 0x79;
          uVar6 = iVar7 + 0x13;
        }
        color = *pCVar9;
      }
      else {
        if ((((*ppCVar8)->speechInfo).speechSource & 2) == 0) {
          color = *pCVar9;
        }
        else {
          color = (CVECTOR)0xff;
          if ((gFlip == 0) && (color = (CVECTOR)0xff, simVar.quickPauseSim == 0)) {
            color = (CVECTOR)0xff0000;
          }
        }
        shapeIdx = 0x79;
        uVar6 = iVar7 + 0x13;
        currentSpriteColor = (uchar *)color;
      }
      Hud_BuildSprite__FP4SPRTiiiUli
                (sprt,shapeIdx,uVar6 & 0xffff,0x18 - (iVar3 + uVar4 + uVar5) & 0xffff,(ulong)color,0
                );
    }
    pCVar9 = pCVar9 + 1;
    ppCVar8 = ppCVar8 + 1;
    iVar10 = iVar10 + 1;
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

	/* begin block 2 */
		// Start line: 5449
	/* end block 2 */
	// End Line: 5450

	/* begin block 3 */
		// Start line: 5464
	/* end block 3 */
	// End Line: 5465

	/* begin block 4 */
		// Start line: 5464
	/* end block 4 */
	// End Line: 5465

	/* begin block 5 */
		// Start line: 5465
	/* end block 5 */
	// End Line: 5466

	/* begin block 6 */
		// Start line: 5465
	/* end block 6 */
	// End Line: 5466

void Hud_WingmanFlash__Fii(int player,int index)

{
  if ((Replay_ReplayMode < 2) && (HudBustedOverlay == (void *)0x0)) {
    if (Hud_gWingmanInterface[player] != '\x01') {
      Hud_InitMapFrame__Fii(player,1);
      Hud_gWingmanInterface[player] = '\x01';
    }
    Hud_gWingmanFlashIcon[player] = (char)index;
    *(uchar **)(Hud_gWingmanFlashTicks + player) = ticks + 100;
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

	/* begin block 2 */
		// Start line: 5489
	/* end block 2 */
	// End Line: 5490

	/* begin block 3 */
		// Start line: 5494
	/* end block 3 */
	// End Line: 5495

	/* begin block 4 */
		// Start line: 5494
	/* end block 4 */
	// End Line: 5495

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
  iVar4 = Hud_gWingmanFlashTicks[player] - (int)ticks;
  iVar3 = (int)*(short *)(g1Player + 0x38);
  y_00 = (int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + x + 2;
  str = TextSys_Word__Fi(0x29);
  x = iVar3 + -0x1b;
  Hud_BuildString__FPciiiib(str,x,y_00 + 3,0x808080,0,(void *)0x0);
  str = TextSys_Word__Fi(0x2a);
  Hud_BuildString__FPciiiib(str,x,y_00 + 0xc,0x808080,player,(void *)0x0);
  str = TextSys_Word__Fi(0x2b);
  Hud_BuildString__FPciiiib(str,x,y_00 + 0x15,0x808080,player,(void *)0x0);
  str = TextSys_Word__Fi(0x2c);
  Hud_BuildString__FPciiiib(str,x,y_00 + 0x1e,0x808080,player,(void *)0x0);
  str = TextSys_Word__Fi(0x2d);
  Hud_BuildString__FPciiiib(str,x,y_00 + 0x27,0x808080,player,(void *)0x0);
  prim = DAT_1f800004;
  puVar1 = DAT_1f800000;
  if (0 < iVar4) {
    DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar2 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 1;
    *puVar1 = *puVar1 & 0xff000000 | uVar2;
    Hud_BuildF4__FP7POLY_F4iiiiiUl
              (prim,0,iVar3 + -0x10,y_00 + ((uint)(byte)Hud_gWingmanFlashIcon[player] + 1) * 9 + 2,
               0x3f,8,(iVar4 % 0x14) * 10);
  }
  iVar4 = 0;
  x = 2;
  do {
    prim = DAT_1f800004;
    puVar1 = DAT_1f800000;
    y = y_00 + x;
    x = x + 9;
    iVar4 = iVar4 + 1;
    DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar2 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 1;
    *puVar1 = *puVar1 & 0xff000000 | uVar2;
    Hud_BuildF4__FP7POLY_F4iiiiiUl(prim,0,iVar3 + -0x1c,y,0x4b,7,0);
    prim = DAT_1f800004;
    puVar1 = DAT_1f800000;
  } while (iVar4 < 5);
  DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar2 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 1;
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

	/* begin block 2 */
		// Start line: 5621
	/* end block 2 */
	// End Line: 5622

	/* begin block 3 */
		// Start line: 5640
	/* end block 3 */
	// End Line: 5641

	/* begin block 4 */
		// Start line: 5640
	/* end block 4 */
	// End Line: 5641

	/* begin block 5 */
		// Start line: 5644
	/* end block 5 */
	// End Line: 5645

/* WARNING: Unknown calling convention yet parameter storage is locked */

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
	// 		static void * keepup; // offset 0x64
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

	/* begin block 2 */
		// Start line: 5657
	/* end block 2 */
	// End Line: 5658

	/* begin block 3 */
		// Start line: 5663
	/* end block 3 */
	// End Line: 5664

	/* begin block 4 */
		// Start line: 5663
	/* end block 4 */
	// End Line: 5664

	/* begin block 5 */
		// Start line: 5664
	/* end block 5 */
	// End Line: 5665

	/* begin block 6 */
		// Start line: 5664
	/* end block 6 */
	// End Line: 5665

void Hud_BuildCdPlayer__Fii(int type)

{
  short sVar1;
  bool bVar2;
  ushort uVar3;
  int y;
  AudioMus_tCurrentSong *pAVar4;
  int iVar5;
  byte *pbVar6;
  int wordnum;
  byte *pbVar7;
  char *__s;
  byte *__s_00;
  int y_00;
  int w;
  int local_b8;
  int x;
  char acStack168 [8];
  byte local_a0 [32];
  char acStack128 [32];
  byte local_60 [32];
  char acStack64 [17];
  undefined local_2f;
  
  sVar1 = *(short *)(g1Player + 0x3c);
  y = (int)*(short *)(g1Player + 0x3e);
  x = (int)sVar1 + 2;
  if (type == 0) {
    DAT_8013d900 = 1;
  }
  y_00 = 0;
  local_2f = 0;
  pAVar4 = AudioMus_GetCurrentSong__Fv();
  if (pAVar4 == (AudioMus_tCurrentSong *)0x0) {
    return;
  }
  if (Hud_gCdActive == 0) {
    bVar2 = false;
    if ((((simGlobal.gameTicks < 0x240) || (((byte)countdown < 4 && (Hud_BeTheCop == (void *)0x0))))
        || ((uVar3 = PAD_state(4), (uVar3 & 0x400) != 0 && (DashHUD_gInfo.splitscreen != 0)))) ||
       ((uVar3 = PAD_state(0), (uVar3 & 0x400) != 0 &&
        ((Hud_BeTheCop == (void *)0x0 || (DashHUD_gInfo.splitscreen != 0)))))) {
      bVar2 = true;
    }
    if ((bVar2) ||
       ((((gPadinfo.buf[0].ID == '#' && (0xbf < gPadinfo.buf[0].data._5_1_)) &&
         ((Hud_BeTheCop == (void *)0x0 || (DashHUD_gInfo.splitscreen != 0)))) ||
        (((gPadinfo.buf[3].data._1_1_ == '#' && (0xbf < gPadinfo.buf[3].data._7_1_)) &&
         (DashHUD_gInfo.splitscreen != 0)))))) {
      Hud_gCdActive = 1;
      Hud_ActivateCDPlayer = 1;
    }
  }
  if (Hud_ActivateCDPlayer != 0) {
    if (Hud_BeTheCop != (void *)0x0) {
      Hud_gCdActive = 1;
    }
    Hud_ActivateCDPlayer = 0;
    Hud_gCdScrollTitle = 1;
    Hud_gCdLastTick = (int)ticks;
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
  local_b8 = pAVar4->remaining;
  w = pAVar4->index;
  __s_00 = local_60;
  if ((pAVar4->info).title == (char *)0x0) {
    __s_00 = (byte *)0x0;
  }
  else {
    sprintf((char *)__s_00,(char *)&PTR_DAT_8013d904);
  }
  __s = acStack128;
  if ((pAVar4->info).artist == (char *)0x0) {
    __s = (char *)0x0;
  }
  else {
    sprintf(__s,(char *)&PTR_DAT_8013d904);
  }
  uppercase__FPc((char *)__s_00);
  if ((type == 0) && (__s != (char *)0x0)) {
    uppercase__FPc(__s);
  }
  if (Hud_gCdActive == 0) {
    Hud_kTurnSongOffNext = &DAT_00000001;
    return;
  }
  if (w < 1) {
    if (w == 0) {
      sprintf(acStack168,(char *)&PTR_DAT_8013d910);
      wordnum = 0x44;
    }
    else {
      if (w == -2) {
        sprintf(acStack168,(char *)&PTR_DAT_8013d910);
        wordnum = 0x45;
      }
      else {
        sprintf(acStack168,(char *)&PTR_DAT_8013d910);
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
      Hud_gCdLastTick = (int)ticks;
      goto LAB_800d68a4;
    }
  }
  else {
    sprintf(acStack168,&DAT_8013d908,w);
    if (__s_00 == (byte *)0x0) {
      Hud_gCdScrollTitle = 1;
      Hud_gCdLastTick = (int)ticks;
      goto LAB_800d6724;
    }
  }
  y_00 = Hud_BuildString__FPciiiib((char *)__s_00,0,0,0,0,&DAT_00000001);
  if (Hud_gCdScrollTitle < y_00 + 0x4c) {
    while (Hud_gCdLastTick < (int)ticks) {
      Hud_gCdScrollTitle = Hud_gCdScrollTitle + 1;
      Hud_gCdLastTick = Hud_gCdLastTick + 4;
    }
  }
  else {
    if (Hud_gCdLastTick + 0x80 < (int)ticks) {
      Hud_gCdActive = 0;
    }
  }
  y_00 = 0;
  pbVar7 = local_a0;
  wordnum = 0x4c - Hud_gCdScrollTitle;
  if (*__s_00 != 0) {
    pbVar6 = __s_00;
    do {
      if ((int)(__s_00 + 0x3f) <= (int)pbVar6) break;
      if (*pbVar6 == 0x20) {
        iVar5 = 3;
      }
      else {
        if ((uint)*pbVar6 - 0x30 < 10) {
          iVar5 = (uint)*pbVar6 + 0x6e;
        }
        else {
          iVar5 = (uint)*pbVar6 + 0x43;
        }
        iVar5 = (int)(&HudPmx_gShapes)[iVar5].width + 1;
      }
      if (0x4b < wordnum + iVar5) break;
      if (wordnum < 0) {
        y_00 = y_00 + iVar5;
      }
      else {
        *pbVar7 = *pbVar6;
        pbVar7 = pbVar7 + 1;
      }
      pbVar6 = pbVar6 + 1;
      wordnum = wordnum + iVar5;
    } while (*pbVar6 != 0);
  }
  *pbVar7 = 0;
LAB_800d68a4:
  if (type == 0) {
    if (__s_00 == (byte *)0x0) {
      return;
    }
    Hud_gShowedCDPlayer = &DAT_00000001;
    Hud_BuildString__FPciiiib
              ((char *)local_a0,(x + y_00 + 10) - (Hud_gCdScrollTitle + -0x4c),y + 0xc,
               (int)&DAT_0000bebe,0,(void *)0x0);
    if (__s != (char *)0x0) {
      Hud_BuildString__FPciiiib(__s,(int)sVar1 + 0xc,y + 0x15,0x808080,0,(void *)0x0);
    }
    Hud_GoTpage__Fi(0);
    Hud_BlackThinBox__Fiiii
              ((int)*(short *)(g1Player + 0x3c) + 10,(int)*(short *)(g1Player + 0x3e) + 10,0x50,0x12
              );
    y = 0;
    w = 0x50;
    local_b8 = 0x12;
    x = (int)*(short *)(g1Player + 0x3c) + 10;
    y_00 = (int)*(short *)(g1Player + 0x3e) + 10;
  }
  else {
    Hud_gShowedCDPlayer = &DAT_00000001;
    Font_TextColor__Fi(4);
    Font_TextXY__FPcii(acStack168,x,y);
    if (__s_00 != (byte *)0x0) {
      Font_TextColor__Fi(3);
      Hud_BuildString__FPciiiib
                ((char *)local_a0,(x + y_00 + 0x16) - (Hud_gCdScrollTitle + -0x4c),y + 5,
                 (int)&DAT_0000bebe,0,(void *)0x0);
      Hud_GoTpage__Fi(0);
      if (w != 0) {
        sprintf(acStack64,s__1d_c_02d_800568f8,local_b8 / 60000,
                (uint)(byte)HudminChar[GameSetup_gData.userSetting.language],
                (local_b8 % 60000) / 1000);
        Font_TextColor__Fi(4);
        y_00 = textpixels(acStack64);
        Font_TextXY__FPcii(acStack64,(x - y_00) + 0x5c,y + 0xe);
      }
    }
    Hud_BlackThinBox__Fiiii
              ((int)*(short *)(g1Player + 0x3c),(int)*(short *)(g1Player + 0x3e),0x66,0x1c);
    Hud_FBuildF4__FiiiiiUlcc
              (0,(int)*(short *)(g1Player + 0x3c),(int)*(short *)(g1Player + 0x3e),0x66,0xe,0,0,0);
    Hud_FBuildF4__FiiiiiUlcc
              (0,(int)*(short *)(g1Player + 0x3c),(int)*(short *)(g1Player + 0x3e) + 0x1b,0x66,1,0,0
               ,0);
    y = 1;
    w = 0x66;
    x = (int)*(short *)(g1Player + 0x3c);
    y_00 = (int)*(short *)(g1Player + 0x3e);
    local_b8 = 0x1c;
  }
  Hud_FBuildF4__FiiiiiUlcc(y,x,y_00,w,local_b8,0,0,0);
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

	/* begin block 2 */
		// Start line: 6217
	/* end block 2 */
	// End Line: 6218

	/* begin block 3 */
		// Start line: 6227
	/* end block 3 */
	// End Line: 6228

	/* begin block 4 */
		// Start line: 6227
	/* end block 4 */
	// End Line: 6228

int Hud_BuildRadar__Fi(int player)

{
  bool bVar1;
  uint *puVar2;
  SPRT *sprt;
  BO_tNewtonObj *pBVar3;
  int iVar4;
  uint uVar5;
  CVECTOR color;
  Car_tObj *pCVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  Car_tObj **ppCVar10;
  int iVar11;
  int iVar12;
  int shapeIdx;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  CVECTOR *pCVar17;
  int iVar18;
  int local_e0 [46];
  
  iVar16 = 0;
  iVar18 = 0;
  pBVar3 = (&Camera_gInfo.anchor)[player * 0x44];
  iVar15 = (pBVar3->orientMat).m[0] >> 8;
  iVar14 = (pBVar3->orientMat).m[6] >> 8;
  iVar13 = (pBVar3->orientMat).m[2] >> 8;
  iVar7 = (pBVar3->orientMat).m[8] >> 8;
  shapeIdx = (pBVar3->position).x >> 8;
  iVar12 = -(pBVar3->position).z >> 8;
  if (0 < Cars_gNumRaceCars) {
    ppCVar10 = &Cars_gRaceCarList9;
    iVar11 = 0;
    do {
      iVar8 = (((*ppCVar10)->N).position.x >> 8) - shapeIdx;
      iVar4 = (-((*ppCVar10)->N).position.z >> 8) - iVar12;
      piVar9 = (int *)((int)local_e0 + iVar11);
      *piVar9 = iVar15 * iVar8 + iVar14 * iVar4 >> 0x10;
      *(int *)((int)local_e0 + iVar11 + 8) = iVar13 * iVar8 + iVar7 * iVar4 >> 0x11;
      if (GameSetup_gData.mirrorTrack != 0) {
        *piVar9 = -*piVar9;
      }
      if (((((((*ppCVar10)->N).active != '\0') && ((*ppCVar10)->carIndex != player)) &&
           (-0x16 < *piVar9)) &&
          ((*piVar9 < 0x16 && (iVar4 = *(int *)((int)local_e0 + iVar11 + 8), -0x18 < iVar4)))) &&
         (iVar4 < 0x18)) {
        iVar18 = 1;
      }
      ppCVar10 = ppCVar10 + 1;
      iVar16 = iVar16 + 1;
      iVar11 = iVar11 + 0xc;
    } while (iVar16 < Cars_gNumRaceCars);
  }
  iVar16 = 0;
  if (0 < Cars_gNumCopCars) {
    ppCVar10 = &Cars_gCopCarList9;
    iVar11 = Cars_gNumRaceCars;
    do {
      pCVar6 = *ppCVar10;
      if ((pCVar6->N).active != '\0') {
        iVar8 = ((pCVar6->N).position.x >> 8) - shapeIdx;
        iVar4 = (-(pCVar6->N).position.z >> 8) - iVar12;
        piVar9 = local_e0 + iVar11 * 3;
        *piVar9 = iVar15 * iVar8 + iVar14 * iVar4 >> 0x10;
        local_e0[iVar11 * 3 + 2] = iVar13 * iVar8 + iVar7 * iVar4 >> 0x11;
        if (GameSetup_gData.mirrorTrack != 0) {
          *piVar9 = -*piVar9;
        }
        if (((-0x16 < *piVar9) && (*piVar9 < 0x16)) &&
           ((-0x18 < local_e0[iVar11 * 3 + 2] && (local_e0[iVar11 * 3 + 2] < 0x18)))) {
          iVar18 = 1;
        }
      }
      iVar11 = iVar11 + 1;
      iVar16 = iVar16 + 1;
      ppCVar10 = ppCVar10 + 1;
    } while (iVar16 < Cars_gNumCopCars);
  }
  iVar7 = Cars_gNumRaceCars;
  if (iVar18 == 0) {
    iVar12 = 0;
    if (0 < Cars_gNumRaceCars) {
      piVar9 = local_e0;
      ppCVar10 = &Cars_gRaceCarList9;
      do {
        if (((*ppCVar10)->N).active != '\0') {
          shapeIdx = piVar9[2] >> 2;
          *piVar9 = *piVar9 >> 2;
          piVar9[2] = shapeIdx;
          if (((((*ppCVar10)->carIndex != player) && (-0x16 < *piVar9)) && (*piVar9 < 0x16)) &&
             ((-0x18 < shapeIdx && (shapeIdx < 0x18)))) {
            iVar18 = 2;
          }
        }
        piVar9 = piVar9 + 3;
        iVar12 = iVar12 + 1;
        ppCVar10 = ppCVar10 + 1;
      } while (iVar12 < iVar7);
    }
    iVar12 = Cars_gNumCopCars;
    iVar7 = Cars_gNumRaceCars;
    iVar13 = 0;
    shapeIdx = Cars_gNumRaceCars;
    if (0 < Cars_gNumCopCars) {
      do {
        piVar9 = local_e0 + shapeIdx * 3;
        *piVar9 = *piVar9 >> 2;
        iVar15 = *piVar9;
        iVar14 = local_e0[shapeIdx * 3 + 2] >> 2;
        local_e0[shapeIdx * 3 + 2] = iVar14;
        if (((-0x16 < iVar15) && (iVar15 < 0x16)) && ((-0x18 < iVar14 && (iVar14 < 0x18)))) {
          iVar18 = 2;
        }
        iVar13 = iVar13 + 1;
        shapeIdx = iVar13 + iVar7;
      } while (iVar13 < iVar12);
    }
  }
  iVar7 = 0;
  ppCVar10 = &Cars_gCopCarList9;
  while (sprt = DAT_1f800004, puVar2 = DAT_1f800000, iVar7 < Cars_gNumCopCars) {
    if (((*ppCVar10)->N).active != '\0') {
      DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
      uVar5 = (uint)DAT_1f800004 & 0xffffff;
      bVar1 = gFlip != 0;
      DAT_1f800004 = DAT_1f800004 + 1;
      *puVar2 = *puVar2 & 0xff000000 | uVar5;
      if ((bVar1) || (currentSpriteColor = (uchar *)0xff0000, simVar.quickPauseSim != 0)) {
        currentSpriteColor = (uchar *)0xff;
      }
      Hud_BuildSprite__FP4SPRTiiiUli
                (sprt,0x7a,local_e0[(iVar7 + Cars_gNumRaceCars) * 3] + 0x14U & 0xffff,
                 local_e0[(iVar7 + Cars_gNumRaceCars) * 3 + 2] + 0x18U & 0xffff,
                 (ulong)currentSpriteColor,0);
    }
    ppCVar10 = ppCVar10 + 1;
    iVar7 = iVar7 + 1;
  }
  iVar7 = 0;
  iVar12 = 0;
  pCVar17 = &Hud_gMarkerColor;
  ppCVar10 = &Cars_gRaceCarList9;
  while (sprt = DAT_1f800004, puVar2 = DAT_1f800000, iVar7 < Cars_gNumRaceCars) {
    if ((iVar7 != player) && (((*ppCVar10)->N).active != '\0')) {
      DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
      *puVar2 = *puVar2 & 0xff000000 | (uint)DAT_1f800004 & 0xffffff;
      DAT_1f800004 = DAT_1f800004 + 1;
      if (((*ppCVar10)->carFlags & 4U) == 0) {
        iVar13 = *(int *)((int)local_e0 + iVar12 + 8);
        color = (&Hud_gMarkerColor)[iVar7];
        shapeIdx = 0x7a;
        uVar5 = *(int *)((int)local_e0 + iVar12) + 0x14;
      }
      else {
        iVar13 = *(int *)((int)local_e0 + iVar12 + 8);
        color = *pCVar17;
        shapeIdx = 0x79;
        uVar5 = *(int *)((int)local_e0 + iVar12) + 0x13;
      }
      Hud_BuildSprite__FP4SPRTiiiUli
                (sprt,shapeIdx,uVar5 & 0xffff,iVar13 + 0x18U & 0xffff,(ulong)color,0);
    }
    iVar12 = iVar12 + 0xc;
    pCVar17 = pCVar17 + 1;
    ppCVar10 = ppCVar10 + 1;
    iVar7 = iVar7 + 1;
  }
  return iVar18;
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

	/* begin block 2 */
		// Start line: 6680
	/* end block 2 */
	// End Line: 6681

	/* begin block 3 */
		// Start line: 6818
	/* end block 3 */
	// End Line: 6819

	/* begin block 4 */
		// Start line: 6818
	/* end block 4 */
	// End Line: 6819

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_BuildReplay__Fv(void)

{
  uint *puVar1;
  uint *puVar2;
  uchar *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  byte local_8 [8];
  
  iVar7 = 0x33;
  iVar5 = 0x3fc;
  do {
    puVar3 = gSprite0;
    iVar7 = iVar7 + 1;
    *(undefined4 *)(gSprite0 + iVar5 + 4) = 0x66808080;
    iVar5 = iVar5 + 0x14;
  } while (iVar7 < 0x3f);
  *(undefined4 *)(puVar3 + (uint)local_8[Replay_ReplayInterface.selection] * 0x14 + 0x400) =
       0x6600bebe;
  if (Replay_ReplayInterface.selection == 3) {
    *(undefined4 *)(puVar3 + 0x464) = 0x6600bebe;
  }
  *(undefined4 *)(gSprite0 + 0x41c) =
       *(undefined4 *)
        ((int)HudPmx_tShape_ARRAY_801114a4 + Replay_ReplayInterface.pause * -0x14 + 0x8c);
  if (Replay_ReplayInterface.speed == 1) {
    iVar5 = 0x73;
  }
  else {
    if (Replay_ReplayInterface.speed < 2) {
      iVar5 = 0x74;
      if (Replay_ReplayInterface.speed == 0) {
        iVar5 = 0x72;
      }
    }
    else {
      iVar5 = 0x74;
      if (Replay_ReplayInterface.speed == 2) {
        iVar5 = 0x75;
      }
    }
  }
  gSprite0[0x46c] = (&HudPmx_gShapes)[iVar5].pixmap.u0;
  gSprite0[0x46d] = (&HudPmx_gShapes)[iVar5].pixmap.v0;
  puVar3 = gSprite0;
  *(undefined4 *)(gSprite0 + 0x480) =
       *(undefined4 *)&HudPmx_tShape_ARRAY_80110cc0[Replay_ReplayInterface.camera].pixmap;
  *(short *)(puVar3 + 0x47c) = *(short *)(g1Player + 0x34) + 0x75;
  if (Replay_ReplayInterface.selection == 4) {
    uVar4 = 0x6600bebe;
  }
  else {
    uVar4 = 0x66808080;
  }
  *(undefined4 *)(puVar3 + 0x478) = uVar4;
  puVar3 = gSprite0;
  puVar1 = DAT_1f800000;
  iVar5 = 0x33;
  puVar6 = (uint *)(gSprite0 + 0x3fc);
  *(uint *)(gSprite0 + 0x474) = *(uint *)(gSprite0 + 0x474) & 0xff000000 | *DAT_1f800000 & 0xffffff;
  *puVar1 = *puVar1 & 0xff000000 | (uint)(puVar3 + 0x474) & 0xffffff;
  do {
    iVar5 = iVar5 + 1;
    *puVar6 = *puVar6 & 0xff000000 | *puVar1 & 0xffffff;
    *puVar1 = *puVar1 & 0xff000000 | (uint)puVar6 & 0xffffff;
    puVar3 = gSprite0;
    puVar2 = DAT_1f800000;
    puVar6 = puVar6 + 5;
  } while (iVar5 < 0x38);
  *(uint *)(gSprite0 + 0x460) = *(uint *)(gSprite0 + 0x460) & 0xff000000 | *DAT_1f800000 & 0xffffff;
  *puVar2 = *puVar2 & 0xff000000 | (uint)(puVar3 + 0x460) & 0xffffff;
  DAT_8013e414 = DAT_8013e414 & 0xff000000 | (uint)(puVar3 + 0x460) & 0xffffff;
  *puVar2 = *puVar2 & 0xff000000 | 0x13e414;
  DAT_8013e3b4 = DAT_8013e3b4 & 0xff000000 | 0x13e414;
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

	/* begin block 2 */
		// Start line: 7055
	/* end block 2 */
	// End Line: 7056

	/* begin block 3 */
		// Start line: 7068
	/* end block 3 */
	// End Line: 7069

	/* begin block 4 */
		// Start line: 7068
	/* end block 4 */
	// End Line: 7069

int Hud_NextPlayer__Fi(int player)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  Car_tObj *carObj;
  
  bVar1 = 0 < (&Input_gLookBehind)[player] != 0 < DashHUD_gInfo.wrongway[player];
  carObj = (&Cars_gHumanRaceCarList9)[player];
  if (1 < Cars_gNumRaceCars) {
    iVar2 = Stats_GetPosition__FP8Car_tObj(carObj);
    iVar5 = 0;
    if ((iVar2 != 1) || (bVar1)) {
      iVar2 = carObj->sortIndex;
      if (0 < Cars_gNumCars + -1) {
        do {
          if ((uint)bVar1 == GameSetup_gData.reverseTrack) {
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
          uVar4 = *(uint *)(*(int *)((int)&Cars_gSortedList9 + iVar3) + 0x260);
          if ((uVar4 & 4) != 0) {
            if (player == 0) {
              return 8;
            }
            return 7;
          }
          iVar5 = iVar5 + 1;
          if ((uVar4 & 8) != 0) {
            return *(int *)(*(int *)((int)&Cars_gSortedList9 + iVar3) + 0x4ec);
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

	/* begin block 2 */
		// Start line: 7147
	/* end block 2 */
	// End Line: 7148

	/* begin block 3 */
		// Start line: 7153
	/* end block 3 */
	// End Line: 7154

	/* begin block 4 */
		// Start line: 7153
	/* end block 4 */
	// End Line: 7154

char * Hud_NextPlayerNameOrCarOrTime__Fi(int player)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Car_tObj *carObj;
  
  bVar1 = 0 < (&Input_gLookBehind)[player] != 0 < DashHUD_gInfo.wrongway[player];
  carObj = (&Cars_gHumanRaceCarList9)[player];
  if (1 < Cars_gNumRaceCars) {
    iVar2 = Stats_GetPosition__FP8Car_tObj(carObj);
    iVar4 = 0;
    if ((iVar2 != 1) || (bVar1)) {
      iVar2 = carObj->sortIndex;
      if (0 < Cars_gNumCars + -1) {
        do {
          if ((uint)bVar1 == GameSetup_gData.reverseTrack) {
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
          iVar3 = *(int *)((int)&Cars_gSortedList9 + iVar3);
          if ((*(uint *)(iVar3 + 0x260) & 0xc) != 0) {
            if (GameSetup_gData.carInfo[player].HudOpponentID != 2) {
              return (char *)(*(int *)(iVar3 + 0x288) + 0x5c);
            }
            return (char *)(iVar3 + 0x249);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < Cars_gNumCars + -1);
      }
    }
  }
  return &DAT_8013d91c;
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

	/* begin block 2 */
		// Start line: 7241
	/* end block 2 */
	// End Line: 7242

	/* begin block 3 */
		// Start line: 7252
	/* end block 3 */
	// End Line: 7253

	/* begin block 4 */
		// Start line: 7252
	/* end block 4 */
	// End Line: 7253

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_RenderMapView__Fv(void)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  POLY_FT4 *pPVar4;
  int player;
  int iVar5;
  GameSetup_tData *pGVar6;
  int iVar7;
  
  player = 0;
  iVar5 = 0;
  iVar7 = 0;
  pGVar6 = &GameSetup_gData;
  while (player <= DashHUD_gInfo.splitscreen) {
    if (((pGVar6->carInfo[0].HudMap != 0) && (*(int *)((int)DashHUD_gInfo.showhud + iVar5) != 0)) &&
       (Hud_gWingmanInterface[player] == '\0')) {
      pPVar4 = gHudFT4;
      if (player != 0) {
        pPVar4 = &POLY_FT4_8013e668;
      }
      Draw_StartRenderingView__Fi(*(int *)((int)&Hud_gMapView + iVar5));
      if (pGVar6->carInfo[0].HudMap == 1) {
        Hud_BuildMapMarkers__Fi(player);
        puVar1 = DAT_1f800000;
        pPVar4->tag = pPVar4->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
        *puVar1 = *puVar1 & 0xff000000 | (uint)pPVar4 & 0xffffff;
      }
      else {
        iVar2 = Hud_BuildRadar__Fi(player);
        puVar1 = DAT_1f800000;
        if (iVar2 == 1) {
          pPVar4[1].tag = pPVar4[1].tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
          *puVar1 = *puVar1 & 0xff000000 | (uint)(pPVar4 + 1) & 0xffffff;
          pPVar4[2].tag = pPVar4[2].tag & 0xff000000 | (uint)(pPVar4 + 1) & 0xffffff;
          iVar2 = 0x50;
        }
        else {
          pPVar4[3].tag = pPVar4[3].tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
          *puVar1 = *puVar1 & 0xff000000 | (uint)(pPVar4 + 3) & 0xffffff;
          pPVar4[4].tag = pPVar4[4].tag & 0xff000000 | (uint)(pPVar4 + 3) & 0xffffff;
          iVar2 = 0xa0;
        }
        *puVar1 = *puVar1 & 0xff000000 | (int)&pPVar4->tag + iVar2 & 0xffffffU;
      }
      puVar1 = DAT_1f800000;
      puVar3 = (uint *)((int)&DR_MODE_8013e3fc.tag + iVar7);
      *puVar3 = *puVar3 & 0xff000000 | *DAT_1f800000 & 0xffffff;
      *puVar1 = *puVar1 & 0xff000000 | (uint)puVar3 & 0xffffff;
      Draw_StopRenderingView__Fi(*(int *)((int)&Hud_gMapView + iVar5));
    }
    iVar5 = iVar5 + 4;
    iVar7 = iVar7 + 0x30;
    pGVar6 = (GameSetup_tData *)((pGVar6->controllerData).shockImpact + 1);
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

	/* begin block 2 */
		// Start line: 7460
	/* end block 2 */
	// End Line: 7461

	/* begin block 3 */
		// Start line: 7562
	/* end block 3 */
	// End Line: 7563

	/* begin block 4 */
		// Start line: 7562
	/* end block 4 */
	// End Line: 7563

void Hud_BlackThinBox__Fiiii(int x,int y,int w,int h)

{
  short sVar1;
  int y_00;
  int h_00;
  int y_01;
  int iVar2;
  int w_00;
  int x_00;
  int x_01;
  int x_02;
  
  sVar1 = HudPmx_tShape_80110dec.height;
  y_00 = y + -2;
  x_00 = (int)HudPmx_tShape_80110dec.width;
  x_01 = x + x_00 + -2;
  w_00 = w + x_00 * -2 + 2;
  Hud_FBuildF4__FiiiiiUlcc(0,x_01,y_00,w_00,2,0,0,0);
  x_02 = x + -2;
  iVar2 = (int)sVar1;
  y_01 = y + iVar2 + -2;
  h_00 = h + iVar2 * -2 + 4;
  Hud_FBuildF4__FiiiiiUlcc(0,x_02,y_01,2,h_00,0,0,0);
  Hud_FBuildF4__FiiiiiUlcc(0,x + w + -2,y_01,2,h_00,0,0,0);
  Hud_FBuildF4__FiiiiiUlcc(0,x_01,y + h,w_00,2,0,0,0);
  Hud_FBuildGT4__FP13HudPmx_tShapeiiUl(&HudPmx_tShape_80110db0,x_02,y_00,0);
  x_00 = (x + w) - x_00;
  Hud_FBuildGT4__FP13HudPmx_tShapeiiUl(&HudPmx_tShape_80110dc4,x_00,y_00,0);
  y_00 = (y + h) - (iVar2 + -2);
  Hud_FBuildGT4__FP13HudPmx_tShapeiiUl(&HudPmx_tShape_80110dd8,x_02,y_00,0);
  Hud_FBuildGT4__FP13HudPmx_tShapeiiUl(&HudPmx_tShape_80110dec,x_00,y_00,0);
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

	/* begin block 2 */
		// Start line: 7690
	/* end block 2 */
	// End Line: 7691

	/* begin block 3 */
		// Start line: 7729
	/* end block 3 */
	// End Line: 7730

	/* begin block 4 */
		// Start line: 7729
	/* end block 4 */
	// End Line: 7730

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
        if ((Hud_Character[num] & 1 << (uVar4 & 0x1f)) != 0) {
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
                ((uint)((Hud_Character[num] & 1 << uVar1) != 0) | 0x3c,x_00,iVar6 + 1,0x808080,0);
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

	/* begin block 2 */
		// Start line: 7940
	/* end block 2 */
	// End Line: 7941

	/* begin block 3 */
		// Start line: 7947
	/* end block 3 */
	// End Line: 7948

	/* begin block 4 */
		// Start line: 7947
	/* end block 4 */
	// End Line: 7948

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_Render321Go__Fv(void)

{
  uchar *puVar1;
  undefined *flare_intensity;
  int num;
  int y;
  
  gCView.id = Hud_gStatsView;
  Draw_StartRenderingView__Fi(Hud_gStatsView);
  y = (int)*(short *)(g1Player + 0x46);
  if ((int)DAT_8013d91d != (uint)(byte)countdown) {
    DAT_8013d91d = countdown;
    countdownTick_216 = ticks;
  }
  puVar1 = ticks + -(int)countdownTick_216;
  if (countdown == '\x04') {
    if (puVar1 < &DAT_00000064) {
      flare_intensity = &DAT_00001f40 + (int)puVar1 * -0x50;
      goto LAB_800d7f18;
    }
  }
  else {
    if (puVar1 < &DAT_00000064) {
      flare_intensity = &DAT_00001770 + (int)puVar1 * -0x3c;
      goto LAB_800d7f18;
    }
  }
  flare_intensity = (undefined *)0x0;
LAB_800d7f18:
  num = 4 - (uint)(byte)countdown;
  if (countdown != '\x04') {
    Hud_Draw321Num__Fiiiiii(0x48,y,num,(int)flare_intensity);
    Hud_Draw321Num__Fiiiiii(0x87,y,num,(int)flare_intensity);
    Hud_Draw321Num__Fiiiiii(0xc6,y,num,(int)flare_intensity);
  }
  Draw_StopRenderingView__Fi(Hud_gStatsView);
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

	/* begin block 2 */
		// Start line: 8115
	/* end block 2 */
	// End Line: 8116

	/* begin block 3 */
		// Start line: 8121
	/* end block 3 */
	// End Line: 8122

	/* begin block 4 */
		// Start line: 8121
	/* end block 4 */
	// End Line: 8122

	/* begin block 5 */
		// Start line: 8122
	/* end block 5 */
	// End Line: 8123

	/* begin block 6 */
		// Start line: 8122
	/* end block 6 */
	// End Line: 8123

void BigBTCTime__Fi(int secs)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  POLY_GT4 *prim;
  int iVar4;
  uint uVar5;
  int x;
  undefined *puVar6;
  undefined *color;
  int iVar7;
  int y;
  
  if (((BTC_BonusTime == (uchar *)0x0) && (HudBustedOverlay == (void *)0x0)) && (-1 < secs)) {
    if (secs != DAT_8013d920) {
      DAT_8013d924 = ticks;
      DAT_8013d920 = secs;
    }
    y = (int)*(short *)(g1Player + 0x3e);
    x = (int)*(short *)(g1Player + 0x3c) + 2;
    iVar4 = (int)HudPmx_tShape_ARRAY_80111008[1].width;
    iVar7 = (int)HudPmx_tShape_ARRAY_80111008[0].width + 1;
    if (secs < 0xb) {
      if ((int)(ticks + -(int)DAT_8013d924) < 0x40) {
        Hud_BlackThinBox__Fiiii(x,y,iVar7 * 2,0xe);
        Hud_FBuildF4__FiiiiiUlcc(0,x,y,iVar7 * 2,0xe,0,0,0);
        BTC_playedsoundalready = (void *)0x0;
        return;
      }
      color = (undefined *)0xc8;
      if (BTC_playedsoundalready == (void *)0x0) {
        AudioCmn_PlayWrongWaySFX__Fv();
        BTC_playedsoundalready = &DAT_00000001;
      }
      puVar6 = (undefined *)0x64;
    }
    else {
      color = &DAT_0000c800;
      BTC_playedsoundalready = (void *)0x0;
      puVar6 = &DAT_00006400;
    }
    prim = DAT_1f800004;
    puVar3 = DAT_1f800000;
    DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar5 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 1;
    *puVar3 = *puVar3 & 0xff000000 | uVar5;
    iVar2 = secs / 10;
    Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
              (prim,HudPmx_tShape_ARRAY_80111008 + secs % 10,x + iVar7 + -1,y,(ulong)color);
    *(undefined **)&prim->r3 = puVar6;
    *(undefined **)&prim->r2 = puVar6;
    prim = DAT_1f800004;
    puVar3 = DAT_1f800000;
    if (iVar2 != 0) {
      iVar1 = iVar7;
      if (iVar2 == 1) {
        iVar1 = iVar4 + 1;
      }
      DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
      uVar5 = (uint)DAT_1f800004 & 0xffffff;
      DAT_1f800004 = DAT_1f800004 + 1;
      *puVar3 = *puVar3 & 0xff000000 | uVar5;
      Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
                (prim,HudPmx_tShape_ARRAY_80111008 + iVar2,(x + iVar7) - iVar1,y,(ulong)color);
      *(undefined **)&prim->r3 = puVar6;
      *(undefined **)&prim->r2 = puVar6;
    }
    Hud_BlackThinBox__Fiiii(x,y,iVar7 * 2,0xe);
    Hud_FBuildF4__FiiiiiUlcc(0,x,y,iVar7 * 2,0xe,0,0,0);
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

	/* begin block 2 */
		// Start line: 8291
	/* end block 2 */
	// End Line: 8292

	/* begin block 3 */
		// Start line: 8294
	/* end block 3 */
	// End Line: 8295

	/* begin block 4 */
		// Start line: 8294
	/* end block 4 */
	// End Line: 8295

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_RenderHudView__Fv(void)

{
  uint *puVar1;
  char *string;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int scalex;
  int type;
  int type_00;
  ulong col1;
  int iVar5;
  uint uVar6;
  uchar *puVar7;
  int y;
  int y_00;
  int player;
  char acStack128 [64];
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  GameSetup_tData *local_2c;
  
  player = 0;
  local_38 = 0xffffff;
  local_34 = 0;
  local_30 = 0;
  local_2c = &GameSetup_gData;
  while (player <= DashHUD_gInfo.splitscreen) {
    local_40 = 0;
    if (player != 0) {
      local_40 = -0xf;
    }
    Draw_StartRenderingView__Fi(*(int *)((int)&Hud_gHudView + local_34));
    Hud_DebugInfo__Fv();
    Hud_DebugCrap__Fv();
    if ((GameSetup_gData.raceType == 1) && (*(int *)((int)&PerpOverlayOn + local_34) != 0)) {
      piVar4 = (int *)((int)&PerpOverlayMessage + local_34);
      string = TextSys_Word__Fi(*piVar4 + 0x41);
      local_3c = textpixels(string);
      y_00 = (int)*(short *)(g1Player + 0x4a) + local_40;
      Font_TextColor__Fi(4);
      string = TextSys_Word__Fi(*piVar4 + 0x41);
      uVar6 = local_3c >> 1;
      Font_TextXY__FPcii(string,0xa0 - (uVar6 + 1),y_00);
      uVar2 = simGlobal.gameTicks >> 4 & 1;
      col1 = 0x800000;
      if (uVar2 != 0) {
        col1 = 0x80;
      }
      type = 10;
      if (uVar2 != 0) {
        type = 8;
      }
      iVar5 = -uVar6;
      y = y_00 + 8;
      scalex = (simGlobal.gameTicks % 0xf) * -0xfa + 4000;
      Flare_2DHalo__Fiiiii(iVar5 + 0x7d,y,scalex,scalex,type);
      Flare_2DHalo__Fiiiii(iVar5 + 0x73,y,scalex,scalex,type);
      type = y_00 + 5;
      Hud_FBuildGT4__FP13HudPmx_tShapeiiUl(HudPmx_tShape_ARRAY_8011115c,iVar5 + 0x7a,type,col1);
      Hud_FBuildGT4__FP13HudPmx_tShapeiiUl(HudPmx_tShape_ARRAY_8011115c,iVar5 + 0x70,type,col1);
      uVar2 = simGlobal.gameTicks >> 4 & 1;
      col1 = 0x800000;
      if (uVar2 == 0) {
        col1 = 0x80;
      }
      type_00 = 10;
      if (uVar2 == 0) {
        type_00 = 8;
      }
      Flare_2DHalo__Fiiiii(uVar6 + 0xc0,y,scalex,scalex,type_00);
      Flare_2DHalo__Fiiiii(uVar6 + 0xca,y,scalex,scalex,type_00);
      Hud_FBuildGT4__FP13HudPmx_tShapeiiUl(HudPmx_tShape_ARRAY_8011115c,uVar6 + 0xbd,type,col1);
      Hud_FBuildGT4__FP13HudPmx_tShapeiiUl(HudPmx_tShape_ARRAY_8011115c,uVar6 + 199,type,col1);
      Hud_BlackThinBox__Fiiii(iVar5 + 0x6f,y_00,local_3c + 0x62,0x11);
      Hud_FBuildF4__FiiiiiUlcc(0,iVar5 + 0x6f,y_00,0x17,0x11,0,0,0);
      Hud_FBuildF4__FiiiiiUlcc(0,uVar6 + 0xba,y_00,0x15,0x11,0,0,0);
      Hud_FBuildF4__FiiiiiUlcc(0,uVar6 + 0xba,y_00 + 3,0x16,0xb,0,0,0);
      Hud_FBuildF4__FiiiiiUlcc(1,iVar5 + 0x86,y_00,local_3c + 0x36,0x11,(ulong)&DAT_00461414,0,0);
    }
    if (player == DashHUD_gInfo.splitscreen) {
      if ((BTC_Countdown >> 6) - 1U < 0x1e) {
        BigBTCTime__Fi(BTC_Countdown >> 6);
      }
      else {
        y_00 = 0;
        if (((0x23f < simGlobal.gameTicks) && (y_00 = 1, (byte)countdown < 4)) &&
           (Hud_BeTheCop == (void *)0x0)) {
          y_00 = 0;
        }
        Hud_BuildCdPlayer__Fii(y_00);
      }
    }
    if (*(int *)((int)DashHUD_gInfo.showhud + local_34) != 0) {
      puVar7 = gSprite0;
      if (player != 0) {
        puVar7 = gSprite1;
      }
      DashHUD_CheckWrongWay__Fi(player);
      DashHUD_HUDCalc__Fi(player);
      Hud_BuildNumbers0__Fi(player);
      Hud_BuildNumbers__Fi(player);
      puVar1 = DAT_1f800000;
      puVar3 = (uint *)((int)&gTPage0.tag + local_30);
      *puVar3 = *puVar3 & 0xff000000 | *DAT_1f800000 & local_38;
      uVar2 = *puVar1 & 0xff000000 | (uint)puVar3 & local_38;
      *puVar1 = uVar2;
      if (local_2c->carInfo[0].HudTach != 0) {
        *(uint *)(puVar7 + 0x14) = *(uint *)(puVar7 + 0x14) & 0xff000000 | uVar2 & local_38;
        *puVar1 = *puVar1 & 0xff000000 | (uint)(puVar7 + 0x14) & local_38;
      }
      if (local_2c->carInfo[0].HudMap != 0) {
        if (((local_2c->carInfo[0].HudOpponentID != 0) && (Hud_BeTheCop == (void *)0x0)) &&
           (GameSetup_gData.commMode != 1)) {
          y_00 = Hud_NextPlayer__Fi(player);
          if (((-1 < y_00) && (y_00 < 9)) && (Hud_BeTheCop == (void *)0x0)) {
            type = (int)HudPmx_tShape_ARRAY_801115f8[0].width;
            iVar5 = (int)HudPmx_tShape_80110db0.width;
            scalex = (int)HudPmx_tShape_ARRAY_80110e14[1].width;
            string = Hud_NextPlayerNameOrCarOrTime__Fi(player);
            sprintf(acStack128,(char *)&PTR_DAT_8013d904,string);
            Hud_GoTpage__Fi(1);
            uppercase__FPc(acStack128);
            y_00 = Hud_BuildString__FPciiiib(acStack128,0,0,0,0,&DAT_00000001);
            Hud_BuildString__FPciiiib
                      (acStack128,(int)*(short *)(g1Player + 0x38) + ((type + 2) - y_00 >> 1),
                       (((int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + local_40) -
                       (int)HudPmx_tShape_80110db0.height) + 1,0x808080,0,(void *)0x0);
            Hud_GoTpage__Fi(0);
            Hud_FBuildGT4__FP13HudPmx_tShapeiiUl
                      (&HudPmx_tShape_80110db0,(int)*(short *)(g1Player + 0x38),
                       ((int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + local_40) -
                       (int)HudPmx_tShape_80110db0.height,0x808080);
            Hud_FBuildGT4__FP13HudPmx_tShapeiiUl
                      (&HudPmx_tShape_80110dc4,(int)*(short *)(g1Player + 0x38) + iVar5 + scalex,
                       ((int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + local_40) -
                       (int)HudPmx_tShape_80110dc4.height,0x808080);
            Hud_FBuildF4__FiiiiiUlcc
                      (0,(int)*(short *)(g1Player + 0x38) + 2,
                       ((int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + local_40) -
                       (int)HudPmx_tShape_80110db0.height,iVar5 + scalex + 3,
                       (int)HudPmx_tShape_80110db0.height,0,0,0);
            y_00 = 2;
            if (Hud_gWingmanInterface[player] == '\0') {
              y_00 = 3;
            }
            Hud_FBuildF4__FiiiiiUlcc
                      (0,(int)*(short *)(g1Player + 0x38),
                       (int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + local_40,3,y_00,0,0,0);
            Hud_FBuildF4__FiiiiiUlcc
                      (0,(int)*(short *)(g1Player + 0x38) + iVar5 + scalex +
                         (int)HudPmx_tShape_80110dc4.width + -3,
                       (int)*(short *)(g1Player + 0x3a) + HudMapOffsetY + local_40,3,3,0,0,0);
          }
        }
        puVar1 = DAT_1f800000;
        y_00 = 0x3f;
        puVar3 = (uint *)(puVar7 + 0x4ec);
        do {
          y_00 = y_00 + 1;
          *puVar3 = *puVar3 & 0xff000000 | *puVar1 & local_38;
          *puVar1 = *puVar1 & 0xff000000 | (uint)puVar3 & local_38;
          puVar3 = puVar3 + 5;
        } while (y_00 < 0x47);
      }
    }
    if (((player == 0) && (1 < Replay_ReplayMode)) && (Replay_ReplayInterface.statsScreen == 0)) {
      Hud_BuildReplay__Fv();
    }
    puVar1 = DAT_1f800000;
    puVar3 = (uint *)((int)&gTPage1.tag + local_30);
    *puVar3 = *puVar3 & 0xff000000 | *DAT_1f800000 & local_38;
    *puVar1 = *puVar1 & 0xff000000 | (uint)puVar3 & local_38;
    if (((*(int *)((int)DashHUD_gInfo.showhud + local_34) != 0) &&
        (Hud_gWingmanInterface[player] != '\0')) && (Replay_ReplayMode < 2)) {
      Hud_BuildWingmanInterface__Fi(player);
    }
    puVar1 = DAT_1f800000;
    piVar4 = (int *)((int)&Hud_gHudView + local_34);
    local_34 = local_34 + 4;
    puVar3 = (uint *)((int)&DR_MODE_8013e39c.tag + local_30);
    local_30 = local_30 + 0x30;
    *puVar3 = *puVar3 & 0xff000000 | *DAT_1f800000 & local_38;
    local_2c = (GameSetup_tData *)((local_2c->controllerData).shockImpact + 1);
    *puVar1 = *puVar1 & 0xff000000 | (uint)puVar3 & local_38;
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

	/* begin block 2 */
		// Start line: 8988
	/* end block 2 */
	// End Line: 8989

	/* begin block 3 */
		// Start line: 8996
	/* end block 3 */
	// End Line: 8997

	/* begin block 4 */
		// Start line: 8996
	/* end block 4 */
	// End Line: 8997

	/* begin block 5 */
		// Start line: 8998
	/* end block 5 */
	// End Line: 8999

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_RenderTacView__Fv(void)

{
  uint *puVar1;
  int player;
  uint *puVar2;
  GameSetup_tData *pGVar3;
  
  player = 0;
  if (-1 < DashHUD_gInfo.splitscreen) {
    puVar2 = &DAT_8013e408;
    pGVar3 = &GameSetup_gData;
    do {
      if ((pGVar3->carInfo[0].HudTach != 0) && (DashHUD_gInfo.showhud[player] != 0)) {
        Draw_StartRenderingView__Fi((&Hud_gTacView)[player]);
        DashHUD_HUDCalc__Fi(player);
        Hud_BuildTach__Fi(player);
        puVar1 = DAT_1f800000;
        *puVar2 = *puVar2 & 0xff000000 | *DAT_1f800000 & 0xffffff;
        *puVar1 = *puVar1 & 0xff000000 | (uint)puVar2 & 0xffffff;
        Draw_StopRenderingView__Fi((&Hud_gTacView)[player]);
      }
      puVar2 = puVar2 + 0xc;
      player = player + 1;
      pGVar3 = (GameSetup_tData *)((pGVar3->controllerData).shockImpact + 1);
    } while (player <= DashHUD_gInfo.splitscreen);
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
	// 		void * showtime; // $a3
	/* end block 1 */
	// End offset: 0x800D8EC0
	// End Line: 3802

	/* begin block 2 */
		// Start line: 9046
	/* end block 2 */
	// End Line: 9047

	/* begin block 3 */
		// Start line: 9052
	/* end block 3 */
	// End Line: 9053

	/* begin block 4 */
		// Start line: 9052
	/* end block 4 */
	// End Line: 9053

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
    sprintf(sLapTime,s__01d_c_02d_c_02d_80056904,iVar1,
            (uint)(byte)HudminChar[GameSetup_gData.userSetting.language],iVar3,
            (uint)(byte)HudsecChar[GameSetup_gData.userSetting.language],
            (iVar2 + iVar3 * -100) * 0x10000 >> 0x10);
  }
  else {
    sprintf(sLapTime,s_____c______c_____80056918,
            (uint)(byte)HudminChar[GameSetup_gData.userSetting.language],
            (uint)(byte)HudsecChar[GameSetup_gData.userSetting.language]);
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

	/* begin block 2 */
		// Start line: 9127
	/* end block 2 */
	// End Line: 9128

	/* begin block 3 */
		// Start line: 9138
	/* end block 3 */
	// End Line: 9139

	/* begin block 4 */
		// Start line: 9138
	/* end block 4 */
	// End Line: 9139

void Hud_RenderPauseBox__Fiiii(int x,int y,int w,int h)

{
  short sVar1;
  short sVar2;
  int y_00;
  int x_00;
  
  sVar2 = HudPmx_tShape_80110dec.height;
  sVar1 = HudPmx_tShape_80110dec.width;
  Hud_FBuildFT4__FP13HudPmx_tShapeiiUl(&HudPmx_tShape_80110db0,x + -2,y + 10,0);
  x_00 = (x + w) - (int)sVar1;
  Hud_FBuildFT4__FP13HudPmx_tShapeiiUl(&HudPmx_tShape_80110dc4,x_00,y + 10,0);
  y_00 = (y + h) - (int)sVar2;
  Hud_FBuildFT4__FP13HudPmx_tShapeiiUl(&HudPmx_tShape_80110dd8,x + -2,y_00,0);
  Hud_FBuildFT4__FP13HudPmx_tShapeiiUl(&HudPmx_tShape_80110dec,x_00,y_00,0);
  Hud_FBuildF4__FiiiiiUlcc(0,x,y + h + -2,w,2,0,0,0);
  Hud_BlackThinBox__Fiiii(x,y,w,h);
  Hud_FBuildF4__FiiiiiUlcc(0,x,y,w,0xc,0,0,0);
  Hud_FBuildF4__FiiiiiUlcc(1,x,y + 0xc,w,h + -0xc,(ulong)&DAT_00461414,0,0);
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

	/* begin block 2 */
		// Start line: 9226
	/* end block 2 */
	// End Line: 9227

	/* begin block 3 */
		// Start line: 9233
	/* end block 3 */
	// End Line: 9234

	/* begin block 4 */
		// Start line: 9233
	/* end block 4 */
	// End Line: 9234

	/* begin block 5 */
		// Start line: 9240
	/* end block 5 */
	// End Line: 9241

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_Render__Fv(void)

{
  short player;
  int *piVar1;
  uint mode;
  uchar *puVar2;
  int type;
  uchar *puVar3;
  int player_00;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  
  player = HudBustedOverlayPlayer;
  if (Replay_ReplayInterface.statsScreen != 0) {
    if (simGlobal.gameTicks < 0x240) {
      DashHUD_gInfo.showhud[0] = 0;
      DashHUD_gInfo.showhud[1] = 0;
    }
    gCView.id = Hud_gStatsView;
    Draw_StartRenderingView__Fi(Hud_gStatsView);
    Hud_DebugCrap__Fv();
    Hud_RenderStatsView__Fv();
    Draw_StopRenderingView__Fi(Hud_gStatsView);
    return;
  }
  if (((HudBustedOverlay != (void *)0x0) || (BTC_BonusTime == (uchar *)0x0)) ||
     ((int)(ticks + -(int)BTC_BonusTimeTick) < 0xfb)) goto LAB_800d91ac;
  if (DashHUD_gInfo.splitscreen == 0) {
LAB_800d9168:
    puVar2 = (uchar *)0x32;
  }
  else {
    if ((Cars_gRaceCarList9->carFlags & 0x200U) == 0) {
      puVar2 = (uchar *)0xfa;
    }
    else {
      puVar2 = (uchar *)0xfa;
      if ((PTR_ARRAY_8010fa04[0]->carFlags & 0x200U) != 0) goto LAB_800d9168;
    }
  }
  puVar3 = puVar2;
  if ((int)BTC_BonusTime < (int)puVar2) {
    puVar3 = BTC_BonusTime;
  }
  BTC_BonusTime = BTC_BonusTime + -(int)puVar2;
  BTC_Countdown = (int)(puVar3 + BTC_Countdown);
  if ((int)BTC_BonusTime < 0) {
    BTC_BonusTime = (uchar *)0x0;
  }
LAB_800d91ac:
  if ((Hud_BeTheCop == (void *)0x0) || (BTC_UserHasControl[0] != (uchar *)0x0)) {
    if ((HudBustedOverlay != (void *)0x0) && (Replay_ReplayMode < 2)) {
      gCView.id = Hud_gStatsView;
      Draw_StartRenderingView__Fi(Hud_gStatsView);
      (&StatsTimer)[(int)player] = (&StatsTimer)[(int)player] + 1;
      Hud_BTCStats__Fsb(player,(void *)0x0);
      Draw_StopRenderingView__Fi(Hud_gStatsView);
    }
    player_00 = 0;
    pcVar6 = Hud_gWingmanInterface;
    while (player_00 < 2) {
      mode = Input_WingCommandMode__Fi(player_00);
      if (((uint)(byte)*pcVar6 == mode) && (HudBustedOverlay != (void *)0x0)) {
LAB_800d9424:
        *pcVar6 = 0;
        Hud_InitMapFrame__Fii(player_00,0);
      }
      else {
        if (Hud_gWingmanFlashTicks[player_00] < (int)ticks) {
          if ((uint)(byte)*pcVar6 != mode) {
            if (1 < Replay_ReplayMode) goto LAB_800d9424;
            if (HudBustedOverlay == (void *)0x0) {
              Hud_InitMapFrame__Fii(player_00,mode);
              *pcVar6 = (byte)mode;
            }
          }
          if (1 < Replay_ReplayMode) goto LAB_800d9424;
        }
      }
      pcVar6 = (char *)((byte *)pcVar6 + 1);
      player_00 = player_00 + 1;
    }
    Hud_gShowedCDPlayer = (void *)0x0;
    if (((simGlobal.gameTicks < 0x240) && (countdown != '\0')) && (Hud_BeTheCop == (void *)0x0)) {
      Hud_Render321Go__Fv();
    }
    Hud_RenderHudView__Fv();
    Hud_RenderMapView__Fv();
    Hud_RenderTacView__Fv();
  }
  else {
    player_00 = 0;
    if (-1 < DashHUD_gInfo.splitscreen) {
      iVar4 = 0;
      piVar5 = &Hud_gHudView;
      do {
        Draw_StartRenderingView__Fi(*piVar5);
        Hud_GoTpage__Fi(1);
        if (((player_00 == 0) && (1 < Replay_ReplayMode)) &&
           (Replay_ReplayInterface.statsScreen == 0)) {
          Hud_BuildReplay__Fv();
        }
        if (player_00 == DashHUD_gInfo.splitscreen) {
          type = 1;
          if ((simGlobal.gameTicks < 0x240) && (countdown == '\0')) {
            type = 0;
          }
          Hud_BuildCdPlayer__Fii(type);
        }
        if (*(int *)((int)DashHUD_gInfo.showhud + iVar4) != 0) {
          Hud_DebugInfo__Fv();
          Hud_BuildNumbers0__Fi(player_00);
        }
        Hud_GoTpage__Fi(0);
        piVar1 = (int *)((int)&Hud_gHudView + iVar4);
        iVar4 = iVar4 + 4;
        piVar5 = piVar5 + 1;
        Draw_StopRenderingView__Fi(*piVar1);
        player_00 = player_00 + 1;
      } while (player_00 <= DashHUD_gInfo.splitscreen);
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

	/* begin block 2 */
		// Start line: 9503
	/* end block 2 */
	// End Line: 9504

	/* begin block 3 */
		// Start line: 9516
	/* end block 3 */
	// End Line: 9517

	/* begin block 4 */
		// Start line: 9516
	/* end block 4 */
	// End Line: 9517

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_PositionMap__Fv(void)

{
  uint uVar1;
  int iVar2;
  double __z;
  
  iVar2 = GameSetup_gData.track;
  uVar1 = __mulsf3((uint)fMapScaleX[GameSetup_gData.track],0x47800000);
  gMapScaleX = __fixsfsi(uVar1);
  uVar1 = __mulsf3((uint)fMapScaleY[iVar2],0x47800000);
  gMapScaleY = __fixsfsi(uVar1);
  gMapOffX = (int)fMapOffX[iVar2];
  if (GameSetup_gData.mirrorTrack != 0) {
    gMapOffX = (int)fMapOffX[iVar2] + -2;
  }
  gMapRotate = (long)fMapRotate[iVar2];
  iVar2 = (int)fMapOffY[iVar2];
  gMapOffY = iVar2;
  ccos(__z);
  iVar2 = iVar2 << 4;
  mapMarkerMCos = iVar2;
  csin(__z);
  mapMarkerMSin = iVar2 << 4;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BTC_Update__FPcib(char *perpname /*$v0*/, int timeleft /*$s1*/, void * userHasControl /*$s0*/)
 // line 3998, offset 0x800d95c8
	/* begin block 1 */
		// Start line: 3999
		// Start offset: 0x800D95C8
	/* end block 1 */
	// End offset: 0x800D9618
	// End Line: 4005

	/* begin block 2 */
		// Start line: 9556
	/* end block 2 */
	// End Line: 9557

	/* begin block 3 */
		// Start line: 9561
	/* end block 3 */
	// End Line: 9562

	/* begin block 4 */
		// Start line: 9561
	/* end block 4 */
	// End Line: 9562

void Hud_BTC_Update__FPcib(char *perpname,int timeleft,void *userHasControl)

{
  sprintf(BTC_CurrentPerpName,perpname);
  if ((BTC_BonusTime == (uchar *)0x0) && (HudBustedOverlay == (void *)0x0)) {
    BTC_Countdown = timeleft << 1;
  }
  BTC_UserHasControl[0] = (uchar *)userHasControl;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BustedOverlayOn__FiPcbs(int time /*$s4*/, char *name /*$a1*/, void * caught /*$s2*/, short player /*$s5*/)
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

	/* begin block 2 */
		// Start line: 9581
	/* end block 2 */
	// End Line: 9582

	/* begin block 3 */
		// Start line: 9586
	/* end block 3 */
	// End Line: 9587

	/* begin block 4 */
		// Start line: 9586
	/* end block 4 */
	// End Line: 9587

void Hud_BustedOverlayOn__FiPcbs(int time,char *name,void *caught,short player)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = (int)player;
  (&StatsTimer)[iVar1] = 0;
  if (Replay_ReplayMode < 2) {
    psVar3 = &Hud_NextPerp + iVar1;
    FinalBTC_Countdown = BTC_Countdown;
    sprintf((char *)(BTCPerpInfo + (int)*psVar3 + iVar1 * 10),name);
    if (caught == (void *)0x0) {
      iVar4 = 0;
      iVar1 = 0;
      do {
        psVar3 = &Hud_NextPerp + iVar4;
        iVar2 = (int)*psVar3;
        if ((iVar2 == 0) || (*(int *)((int)&BTCPerpInfo[iVar2 + -1].caught + iVar1) != 0)) {
          *(undefined4 *)((int)&BTCPerpInfo[iVar2].caught + iVar1) = 0;
          *(undefined4 *)((int)&BTCPerpInfo[(int)*psVar3].time + iVar1) = 0;
          sprintf(BTCPerpInfo[(int)*psVar3].name + iVar1,BTC_CurrentPerpName);
          *psVar3 = *psVar3 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 0xa0;
      } while (iVar4 < 2);
    }
    else {
      BTCPerpInfo[iVar1 * 10 + (int)*psVar3].caught = (void *)0x1;
      BTCPerpInfo[iVar1 * 10 + (int)*psVar3].time = time;
      *psVar3 = *psVar3 + 1;
    }
    HudBustedOverlay = &DAT_00000001;
    HudBustedOverlayPlayer = player;
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

	/* begin block 2 */
		// Start line: 9679
	/* end block 2 */
	// End Line: 9680

	/* begin block 3 */
		// Start line: 9684
	/* end block 3 */
	// End Line: 9685

	/* begin block 4 */
		// Start line: 9684
	/* end block 4 */
	// End Line: 9685

	/* begin block 5 */
		// Start line: 9685
	/* end block 5 */
	// End Line: 9686

	/* begin block 6 */
		// Start line: 9685
	/* end block 6 */
	// End Line: 9686

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_BustedOverlayOff__Fv(void)

{
  HudBustedOverlay = (void *)0x0;
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

	/* begin block 2 */
		// Start line: 9690
	/* end block 2 */
	// End Line: 9691

	/* begin block 3 */
		// Start line: 9694
	/* end block 3 */
	// End Line: 9695

	/* begin block 4 */
		// Start line: 9694
	/* end block 4 */
	// End Line: 9695

	/* begin block 5 */
		// Start line: 9695
	/* end block 5 */
	// End Line: 9696

	/* begin block 6 */
		// Start line: 9695
	/* end block 6 */
	// End Line: 9696

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_Reset__Fv(void)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  if (Replay_ReplayMode < 2) {
    psVar1 = &Hud_NextPerp;
    do {
      *psVar1 = 0;
      psVar1 = psVar1 + 1;
      iVar2 = iVar2 + 1;
      BTC_CurrentPerpName[0] = '\0';
    } while (iVar2 < 2);
  }
  HudBustedOverlay = (void *)0x0;
  BTC_BonusTime = (uchar *)0x0;
  BTC_UserHasControl[0] = (uchar *)0x0;
  PerpOverlayOn = (uchar *)0x0;
  PTR_8013de3c = (uchar *)0x0;
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

	/* begin block 2 */
		// Start line: 9725
	/* end block 2 */
	// End Line: 9726

	/* begin block 3 */
		// Start line: 9730
	/* end block 3 */
	// End Line: 9731

	/* begin block 4 */
		// Start line: 9730
	/* end block 4 */
	// End Line: 9731

	/* begin block 5 */
		// Start line: 9731
	/* end block 5 */
	// End Line: 9732

	/* begin block 6 */
		// Start line: 9731
	/* end block 6 */
	// End Line: 9732

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Hud_BTC_QuitOut__Fv(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  if (HudBustedOverlay == (void *)0x0) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      psVar1 = &Hud_NextPerp + iVar3;
      sprintf(BTCPerpInfo[(int)*psVar1].name + iVar2,BTC_CurrentPerpName);
      *(undefined4 *)((int)&BTCPerpInfo[(int)*psVar1].caught + iVar2) = 0;
      iVar3 = iVar3 + 1;
      *(undefined4 *)((int)&BTCPerpInfo[(int)*psVar1].time + iVar2) = 0;
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

	/* begin block 2 */
		// Start line: 9765
	/* end block 2 */
	// End Line: 9766

	/* begin block 3 */
		// Start line: 9770
	/* end block 3 */
	// End Line: 9771

	/* begin block 4 */
		// Start line: 9770
	/* end block 4 */
	// End Line: 9771

void Hud_BTC_BonusTime__Fl(long extratime)

{
  BTC_BonusTime = (uchar *)extratime;
  BTC_BonusTimeTick = ticks;
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

	/* begin block 2 */
		// Start line: 9785
	/* end block 2 */
	// End Line: 9786

	/* begin block 3 */
		// Start line: 9785
	/* end block 3 */
	// End Line: 9786

	/* begin block 4 */
		// Start line: 9789
	/* end block 4 */
	// End Line: 9790

	/* begin block 5 */
		// Start line: 9789
	/* end block 5 */
	// End Line: 9790

	/* begin block 6 */
		// Start line: 9790
	/* end block 6 */
	// End Line: 9791

	/* begin block 7 */
		// Start line: 9790
	/* end block 7 */
	// End Line: 9791

void Hud_Perp_OverlayOn__Fii(int player,int level)

{
  (&PerpOverlayOn)[player] = (uchar *)0x1;
  *(int *)(&PerpOverlayMessage + player) = level;
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

	/* begin block 2 */
		// Start line: 9797
	/* end block 2 */
	// End Line: 9798

	/* begin block 3 */
		// Start line: 9801
	/* end block 3 */
	// End Line: 9802

	/* begin block 4 */
		// Start line: 9801
	/* end block 4 */
	// End Line: 9802

	/* begin block 5 */
		// Start line: 9802
	/* end block 5 */
	// End Line: 9803

	/* begin block 6 */
		// Start line: 9802
	/* end block 6 */
	// End Line: 9803

void Hud_Perp_OverlayOff__Fi(int player)

{
  (&PerpOverlayOn)[player] = (uchar *)0x0;
  return;
}





