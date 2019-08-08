#include "NFS4.H"
#include "DRAW.H"

// decompiled code
// original method signature: 
// int /*$ra*/ Draw_SetView__Fiiiiiiiii(int x0 /*$a0*/, int y0 /*$v1*/, int x1 /*$fp*/, int y1 /*stack 12*/, int w /*stack 16*/, int h /*stack 20*/, int dtd /*stack 24*/, int isbg /*stack 28*/, int otsize /*stack 32*/)
 // line 72, offset 0x800bdac0
	/* begin block 1 */
		// Start line: 73
		// Start offset: 0x800BDAC0
		// Variables:
	// 		struct Draw_tView *newview; // $s0
	// 		struct DRAWENV *e00; // $s2
	// 		struct DRAWENV *e10; // $s1
	/* end block 1 */
	// End offset: 0x800BDAC0
	// End Line: 73

int Draw_SetView__Fiiiiiiiii(int x0,int y0,int x1,int y1,int w,int h,int dtd,int isbg,int otsize)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = iGp00001260 * 200;
  iVar1 = iGp00001260 * 0x32;
  SetDefDrawEnv(&DAT_8011ec5c + iVar3,x0,y0,w,h);
  SetDefDrawEnv(&UNK_8011ecb8 + iVar3,x1,y1,w,h);
  (&DAT_8011ec75)[iVar3] = 0;
  (&DAT_8011ec76)[iVar3] = 0;
  (&DAT_8011ec77)[iVar3] = 0;
  (&DAT_8011ecd1)[iVar3] = 0;
  (&DAT_8011ecd2)[iVar3] = 0;
  (&DAT_8011ecd3)[iVar3] = 0;
  (&DAT_8011ecd0)[iVar3] = (char)isbg;
  (&DAT_8011ec74)[iVar3] = (char)isbg;
  (&DAT_8011ecce)[iVar3] = (char)dtd;
  (&DAT_8011ec72)[iVar3] = (char)dtd;
  iVar2 = iGp00001260;
  (&Draw_gView)[iVar1] = otsize;
  *(undefined4 *)(&DAT_8011ec58 + iVar3) = 0;
  iGp00001260 = iGp00001260 + 1;
  return iVar2;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_InitViews__Fv()
 // line 113, offset 0x800bdbd4
	/* begin block 1 */
		// Start line: 114
		// Start offset: 0x800BDBD4
	/* end block 1 */
	// End offset: 0x800BDBD4
	// End Line: 115

void Draw_InitViews__Fv(void)
{
  uGp00001260 = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_InitViewOT__Fv()
 // line 127, offset 0x800bdbe0
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x800BDBE0

		/* begin block 1.1 */
			// Start line: 128
			// Start offset: 0x800BDBE0
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 129
				// Start offset: 0x800BDBFC
			/* end block 1.1.1 */
			// End offset: 0x800BDC10
			// End Line: 133
		/* end block 1.1 */
		// End offset: 0x800BDC50
		// End Line: 135
	/* end block 1 */
	// End offset: 0x800BDC50
	// End Line: 135

void Draw_InitViewOT__Fv(void)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &Draw_gView;
  while (iVar3 < iGp00001260) {
    iVar3 = iVar3 + 1;
    iVar1 = reservememadr(&DAT_8013d798,*piVar2 << 2,0x10);
    piVar2[0x30] = iVar1;
    iVar1 = reservememadr(&DAT_8013d79c,*piVar2 << 2,0x10);
    piVar2[0x31] = iVar1;
    piVar2 = piVar2 + 0x32;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_InitViewOTInGame__Fv()
 // line 138, offset 0x800bdc64
	/* begin block 1 */
		// Start line: 139
		// Start offset: 0x800BDC64

		/* begin block 1.1 */
			// Start line: 139
			// Start offset: 0x800BDC64
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 140
				// Start offset: 0x800BDC80
			/* end block 1.1.1 */
			// End offset: 0x800BDC94
			// End Line: 144
		/* end block 1.1 */
		// End offset: 0x800BDCCC
		// End Line: 146
	/* end block 1 */
	// End offset: 0x800BDCCC
	// End Line: 146

void Draw_InitViewOTInGame__Fv(void)
{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &Draw_gView;
  while (iVar3 < iGp00001260) {
    iVar3 = iVar3 + 1;
    pcVar1 = Platform_ReserveMemory__FiPc(*piVar2 << 2,"ot0");
    *(char **)(piVar2 + 0x30) = pcVar1;
    pcVar1 = Platform_ReserveMemory__FiPc(*piVar2 << 2,"ot1");
    *(char **)(piVar2 + 0x31) = pcVar1;
    piVar2 = piVar2 + 0x32;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_DeInitViews__Fv()
 // line 157, offset 0x800bdce0
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x800BDCE0

		/* begin block 1.1 */
			// Start line: 158
			// Start offset: 0x800BDCE0
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 160
				// Start offset: 0x800BDCFC
			/* end block 1.1.1 */
			// End offset: 0x800BDD40
			// End Line: 167
		/* end block 1.1 */
		// End offset: 0x800BDD54
		// End Line: 169
	/* end block 1 */
	// End offset: 0x800BDD54
	// End Line: 169

void Draw_DeInitViews__Fv(void)
{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &Draw_gView;
  while (iVar2 < iGp00001260) {
    if (puVar1[0x30] != 0) {
      purgememadr();
    }
    if (puVar1[0x31] != 0) {
      purgememadr();
    }
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1 = puVar1 + 0x32;
    iVar2 = iVar2 + 1;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_DeInitViewsInGame__Fv()
 // line 172, offset 0x800bdd68
	/* begin block 1 */
		// Start line: 173
		// Start offset: 0x800BDD68

		/* begin block 1.1 */
			// Start line: 175
			// Start offset: 0x800BDD68
			// Variables:
		// 		int i; // $a0

			/* begin block 1.1.1 */
				// Start line: 175
				// Start offset: 0x800BDD78
			/* end block 1.1.1 */
			// End offset: 0x800BDD84
			// End Line: 182
		/* end block 1.1 */
		// End offset: 0x800BDD94
		// End Line: 184
	/* end block 1 */
	// End offset: 0x800BDD94
	// End Line: 184

void Draw_DeInitViewsInGame__Fv(void)
{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &Draw_gView;
  while (bVar1 = iVar3 < iGp00001260, iVar3 = iVar3 + 1, bVar1) {
    puVar2[0x30] = 0;
    puVar2[0x31] = 0;
    puVar2 = puVar2 + 0x32;
  }
  return;


}




// decompiled code
// original method signature: 
// struct DRAWENV * /*$ra*/ Draw_GetDRAWENV__Fii(int viewid /*$a0*/, int page /*$a1*/)
 // line 187, offset 0x800bdd9c
	/* begin block 1 */
		// Start line: 188
		// Start offset: 0x800BDD9C
	/* end block 1 */
	// End offset: 0x800BDD9C
	// End Line: 189

DRAWENV * Draw_GetDRAWENV__Fii(int viewid,int page)
{
  return (DRAWENV *)(&DAT_8011ec5c + page * 0x5c + viewid * 200);


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_SetViewMemBudget__Fii(int viewid /*$a0*/, int totalmem /*$a1*/)
 // line 197, offset 0x800bddd8
	/* begin block 1 */
		// Start line: 198
		// Start offset: 0x800BDDD8
	/* end block 1 */
	// End offset: 0x800BDDD8
	// End Line: 199

void Draw_SetViewMemBudget__Fii(int viewid,int totalmem)
{
  *(int *)(&DAT_8011ec58 + viewid * 200) = totalmem;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_SetViewColor__Fiiii(int viewid /*$a0*/, int r /*$a1*/, int g /*$a2*/, int b /*$a3*/)
 // line 213, offset 0x800bde00
	/* begin block 1 */
		// Start line: 214
		// Start offset: 0x800BDE00
		// Variables:
	// 		struct Draw_tView *view; // $v1
	/* end block 1 */
	// End offset: 0x800BDE58
	// End Line: 220

void Draw_SetViewColor__Fiiii(int viewid,int r,int g,int b)
{
  viewid = viewid * 200;
  if ((&DAT_8011ec74)[viewid] != '\0') {
    (&DAT_8011ec75)[viewid] = (char)r;
    (&DAT_8011ec76)[viewid] = (char)g;
    (&DAT_8011ec77)[viewid] = (char)b;
  }
  if ((&DAT_8011ecd0)[viewid] != '\0') {
    (&DAT_8011ecd1)[viewid] = (char)r;
    (&DAT_8011ecd2)[viewid] = (char)g;
    (&DAT_8011ecd3)[viewid] = (char)b;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AllocatePrimitivesBuffer__Fv()
 // line 237, offset 0x800bde60
	/* begin block 1 */
		// Start line: 238
		// Start offset: 0x800BDE60

		/* begin block 1.1 */
			// Start line: 260
			// Start offset: 0x800BDEBC

			/* begin block 1.1.1 */
				// Start line: 270
				// Start offset: 0x800BDF00
				// Variables:
			// 		struct Draw_tView *view0; // $v0
			// 		struct Draw_tView *view1; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800BDF00
			// End Line: 274

			/* begin block 1.1.2 */
				// Start line: 286
				// Start offset: 0x800BDF58
				// Variables:
			// 		struct Draw_tView *view; // $v0
			/* end block 1.1.2 */
			// End offset: 0x800BDF8C
			// End Line: 293
		/* end block 1.1 */
		// End offset: 0x800BDF8C
		// End Line: 293
	/* end block 1 */
	// End offset: 0x800BDF8C
	// End Line: 293

void AllocatePrimitivesBuffer__Fv(void)
{
  int iVar1;
  
  if (DAT_801131f8 == 1) {
    Draw_InitViewOT__Fv();
  }
  else {
    Draw_InitViewOTInGame__Fv();
  }
  if (DAT_801131f8 == 1) {
    iGp00001278 = 0x22500;
  }
  else {
    iGp00001278 = 0x1f600;
  }
  DAT_8011f438 = Platform_ReserveMemory__FiPc(iGp00001278,"ps0");
  DAT_8011f450 = Platform_ReserveMemory__FiPc(iGp00001278,"ps1");
  iVar1 = iGp00001278;
  if (DAT_801131f8 == 1) {
    iVar1 = iGp00001278 >> 1;
  }
  _DAT_8011ec58 = iVar1 + -0x1a00;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ ClearPrimitivesBuffer__Fv()
 // line 312, offset 0x800bdf9c
	/* begin block 1 */
		// Start line: 313
		// Start offset: 0x800BDF9C
	/* end block 1 */
	// End offset: 0x800BDFE8
	// End Line: 319

void ClearPrimitivesBuffer__Fv(void)
{
  DrawSync(0);
  if (DAT_8011f438 != 0) {
    purgememadr();
  }
  if (DAT_8011f450 != 0) {
    purgememadr();
  }
  DAT_8011f450 = 0;
  DAT_8011f438 = 0;
  Draw_DeInitViews__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ ClearPlatformPrimitivesBuffer__Fv()
 // line 325, offset 0x800be004
	/* begin block 1 */
		// Start line: 326
		// Start offset: 0x800BE004
	/* end block 1 */
	// End offset: 0x800BE050
	// End Line: 340

void ClearPlatformPrimitivesBuffer__Fv(void)
{
  DrawSync(0);
  DAT_8011f450 = 0;
  DAT_8011f438 = 0;
  if (DAT_801131f8 == 1) {
    Draw_DeInitViews__Fv();
  }
  else {
    Draw_DeInitViewsInGame__Fv();
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_StartRenderingView__Fi(int viewid /*$t0*/)
 // line 352, offset 0x800be060
	/* begin block 1 */
		// Start line: 353
		// Start offset: 0x800BE060
		// Variables:
	// 		struct Draw_DCache *sd; // $a3
	// 		struct Draw_tView *view; // $a2
	/* end block 1 */
	// End offset: 0x800BE110
	// End Line: 375

void Draw_StartRenderingView__Fi(int viewid)
{
  int iVar1;
  int iVar2;
  
  iVar1 = viewid * 200;
  Draw_gViewOtSize = (&Draw_gView)[viewid * 0x32];
  iVar2 = Draw_gViewOtSize * 7;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 7;
  }
  if ((viewid == 0) || (viewid == 0)) {
    _DAT_1f800008 = _DAT_1f800004 + *(int *)(&DAT_8011ec58 + iVar1);
  }
  else {
    _DAT_1f800008 = _Draw_gMaxPrim;
  }
  _DAT_1f800000 = (&Draw_gView + viewid * 0x32)[gFlip + 0x30];
  _DAT_1f80000c = 0;
  _DAT_1f800010 = *(undefined2 *)(&DAT_8011ec60 + iVar1);
  _DAT_1f800012 = *(undefined2 *)(&DAT_8011ec62 + iVar1);
  Draw_gMidGroundOtz = iVar2 >> 3;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_StopRenderingView__Fi(int viewid /*$a0*/)
 // line 387, offset 0x800be118
	/* begin block 1 */
		// Start line: 388
		// Start offset: 0x800BE118
		// Variables:
	// 		struct DRAWENV LEnv; // stack offset -104
	// 		struct DR_ENV *pEnv; // $a0
	// 		struct Draw_tView *view; // $a1
	/* end block 1 */
	// End offset: 0x800BE194
	// End Line: 397

void Draw_StopRenderingView__Fi(int viewid)
{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_68 [24];
  
  piVar5 = &Draw_gView + viewid * 0x32;
  iVar9 = gFlip * 0x17;
  piVar4 = piVar5 + iVar9 + 2;
  piVar2 = local_68;
  do {
    piVar7 = piVar2;
    piVar3 = piVar4;
    iVar8 = piVar3[1];
    iVar10 = piVar3[2];
    iVar11 = piVar3[3];
    *piVar7 = *piVar3;
    piVar7[1] = iVar8;
    piVar7[2] = iVar10;
    piVar7[3] = iVar11;
    piVar4 = piVar3 + 4;
    piVar2 = piVar7 + 4;
  } while (piVar4 != piVar5 + iVar9 + 0x16);
  iVar9 = piVar3[5];
  iVar8 = piVar3[6];
  piVar7[4] = *piVar4;
  piVar7[5] = iVar9;
  piVar7[6] = iVar8;
  puVar1 = _DAT_1f800004;
  iVar9 = _DAT_1f800000;
  *_DAT_1f800004 =
       *_DAT_1f800004 & 0xff000000 | *(uint *)(*piVar5 * 4 + _DAT_1f800000 + -4) & 0xffffff;
  iVar9 = *piVar5 * 4 + iVar9;
  uVar6 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 0x10;
  *(uint *)(iVar9 + -4) = *(uint *)(iVar9 + -4) & 0xff000000 | uVar6;
  SetDrawEnv(puVar1,local_68);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_CheckFirstFrameRender__Fv()
 // line 409, offset 0x800be230
	/* begin block 1 */
		// Start line: 410
		// Start offset: 0x800BE230
	/* end block 1 */
	// End offset: 0x800BE2B0
	// End Line: 420

void Draw_CheckFirstFrameRender__Fv(void)
{
  if (gFlip == -1) {
    Draw_DirectSetEnvironment__Fiiiiiiiiii(0x140,0x100,0x140,0xf0,1,0,1,0,0,0);
    Draw_DirectSetEnvironment__Fiiiiiiiiii(0,0x100,0x140,0xf0,1,1,1,0,0,0);
    gFlip = 1;
    AllocatePrimitivesBuffer__Fv();
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_StartFrameRender__Fv()
 // line 432, offset 0x800be2c0
	/* begin block 1 */
		// Start line: 433
		// Start offset: 0x800BE2C0

		/* begin block 1.1 */
			// Start line: 433
			// Start offset: 0x800BE2C0
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 435
				// Start offset: 0x800BE2DC
			/* end block 1.1.1 */
			// End offset: 0x800BE2F0
			// End Line: 439
		/* end block 1.1 */
		// End offset: 0x800BE314
		// End Line: 440
	/* end block 1 */
	// End offset: 0x800BE314
	// End Line: 442

void Draw_StartFrameRender__Fv(void)
{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar4 = &Draw_gView;
  while (bVar2 = iVar5 < 0, iVar5 = iVar5 + 1, bVar2) {
    uVar3 = *puVar4;
    puVar1 = puVar4 + gFlip + 0x30;
    puVar4 = puVar4 + 0x32;
    ClearOTagR(*puVar1,uVar3);
  }
  _DAT_1f800004 = (&DAT_8011f438)[gFlip * 6];
  _Draw_gMaxPrim = (&DAT_8011f438)[gFlip * 6];
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_SetDrawSyncCallback__FPFv_v(void (*p)() /*$a0*/)
 // line 448, offset 0x800be360
	/* begin block 1 */
		// Start line: 449
		// Start offset: 0x800BE360
	/* end block 1 */
	// End offset: 0x800BE360
	// End Line: 450

void Draw_SetDrawSyncCallback__FPFv_v(p *p)
{
  Draw_gSyncCallback = p;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_StopFrameRender__Fv()
 // line 463, offset 0x800be36c
	/* begin block 1 */
		// Start line: 464
		// Start offset: 0x800BE36C

		/* begin block 1.1 */
			// Start line: 478
			// Start offset: 0x800BE3BC
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 480
				// Start offset: 0x800BE3E8
			/* end block 1.1.1 */
			// End offset: 0x800BE3FC
			// End Line: 484
		/* end block 1.1 */
		// End offset: 0x800BE42C
		// End Line: 485
	/* end block 1 */
	// End offset: 0x800BE42C
	// End Line: 488

void Draw_StopFrameRender__Fv(void)
{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  DrawSync(0);
  gLoop = gLoop + 1;
  if (Draw_gSyncCallback != (code *)0x0) {
    (*Draw_gSyncCallback)();
  }
  if (Draw_gDoVSync != 0) {
    VSync(0);
  }
  iVar3 = 0;
  PutDispEnv(&gEnviro + gFlip * 0x18);
  piVar2 = &Draw_gView;
  while (bVar1 = iVar3 < 0, iVar3 = iVar3 + 1, bVar1) {
    DrawOTag(piVar2[gFlip + 0x30] + *piVar2 * 4 + -4);
    piVar2 = piVar2 + 0x32;
  }
  gFlip = 1 - gFlip;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_DrawDirectScreen__FP8shapetblii(struct shapetbl *tile /*$a0*/, int x /*$a1*/, int y /*$a2*/)
 // line 493, offset 0x800be450
	/* begin block 1 */
		// Start line: 494
		// Start offset: 0x800BE450
	/* end block 1 */
	// End offset: 0x800BE450
	// End Line: 494

void Draw_DrawDirectScreen__FP8shapetblii(shapetbl *tile,int x,int y)
{
  Texture_Vramcf__FP8shapetbliiii(tile,x,y + 0x100,0,0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_DirectSetEnvironment__Fiiiiiiiiii(int x /*$s1*/, int y /*$s2*/, int w /*$s3*/, int h /*$s4*/, int edraw /*stack 16*/, int edisplay /*stack 20*/, int erase /*stack 24*/, int r /*stack 28*/, int g /*stack 32*/, int b /*stack 36*/)
 // line 513, offset 0x800be478
	/* begin block 1 */
		// Start line: 514
		// Start offset: 0x800BE478

		/* begin block 1.1 */
			// Start line: 514
			// Start offset: 0x800BE478

			/* begin block 1.1.1 */
				// Start line: 517
				// Start offset: 0x800BE4B8
				// Variables:
			// 		struct DRAWENV e; // stack offset -128
			/* end block 1.1.1 */
			// End offset: 0x800BE514
			// End Line: 531
		/* end block 1.1 */
		// End offset: 0x800BE514
		// End Line: 531

		/* begin block 1.2 */
			// Start line: 534
			// Start offset: 0x800BE514

			/* begin block 1.2.1 */
				// Start line: 535
				// Start offset: 0x800BE51C
				// Variables:
			// 		struct DISPENV e; // stack offset -128
			/* end block 1.2.1 */
			// End offset: 0x800BE558
			// End Line: 547
		/* end block 1.2 */
		// End offset: 0x800BE558
		// End Line: 547
	/* end block 1 */
	// End offset: 0x800BE558
	// End Line: 547

void Draw_DirectSetEnvironment__Fiiiiiiiiii( (int x,int y,int w,int h,int edraw,int edisplay,int erase,int r,int g,int b)
{
  undefined auStack128 [24];
  bool local_68;
  undefined local_67;
  undefined local_66;
  undefined local_65;
  
  if (edraw != 0) {
    SetDefDrawEnv(auStack128,x,y,w,h);
    local_68 = erase != 0;
    if (local_68) {
      local_67 = (undefined)r;
      local_66 = (undefined)g;
      local_65 = (undefined)b;
    }
    PutDrawEnv(auStack128);
  }
  if (edisplay != 0) {
    SetDefDispEnv(auStack128,x,y,w,h);
    SetDispMask(0);
    PutDispEnv(auStack128);
    timedwait(timerhz >> 1);
    SetDispMask(1);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_SetEnvironment__Fiiiiiiii(int w /*$t0*/, int h /*$t1*/, int edraw /*$a2*/, int edisplay /*$a3*/, int erase /*stack 16*/, int r /*stack 20*/, int g /*stack 24*/, int b /*stack 28*/)
 // line 551, offset 0x800be57c
	/* begin block 1 */
		// Start line: 552
		// Start offset: 0x800BE57C
	/* end block 1 */
	// End offset: 0x800BE57C
	// End Line: 552

void Draw_SetEnvironment__Fiiiiiiii(int w,int h,int edraw,int edisplay,int erase,int r,int g,int b)
{
  Draw_DirectSetEnvironment__Fiiiiiiiiii(0,0x100,w,h,edraw,edisplay,erase,r,g,b);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_InitRenderEngine__Fiiiiii(int x0 /*$v0*/, int y0 /*$v1*/, int x1 /*$s3*/, int y1 /*$s4*/, int w /*stack 16*/, int h /*stack 20*/)
 // line 577, offset 0x800be5d8
	/* begin block 1 */
		// Start line: 578
		// Start offset: 0x800BE5D8
	/* end block 1 */
	// End offset: 0x800BE5D8
	// End Line: 578

void Draw_InitRenderEngine__Fiiiiii(int x0,int y0,int x1,int y1,int w,int h)
{
  gFlip = 0xffffffff;
  DAT_8011f438 = 0;
  DAT_8011f450 = 0;
  SetDefDispEnv(&gEnviro,x0,y0,w,h);
  SetDefDispEnv(&DAT_8011f43c,x1,y1,w,h);
  Draw_SetDrawSyncCallback__FPFv_v((p *)0x0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_RestartRenderEngine__Fv()
 // line 596, offset 0x800be67c
	/* begin block 1 */
		// Start line: 597
		// Start offset: 0x800BE67C
	/* end block 1 */
	// End offset: 0x800BE67C
	// End Line: 597

void Draw_RestartRenderEngine__Fv(void)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_DeInitRenderEngine__Fv()
 // line 600, offset 0x800be684
	/* begin block 1 */
		// Start line: 601
		// Start offset: 0x800BE684
	/* end block 1 */
	// End offset: 0x800BE684
	// End Line: 601

void Draw_DeInitRenderEngine__Fv(void)
{
  ClearPlatformPrimitivesBuffer__Fv();
  gFlip = 0xffffffff;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Draw_InitLibRender__Fv()
 // line 609, offset 0x800be6a8
	/* begin block 1 */
		// Start line: 610
		// Start offset: 0x800BE6A8
	/* end block 1 */
	// End offset: 0x800BE6A8
	// End Line: 610

void Draw_InitLibRender__Fv(void)
{
  gLoop = 1;
  InitGeom();
  return;


}





