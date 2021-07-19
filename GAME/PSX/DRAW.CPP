#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 144
	/* end block 2 */
	// End Line: 145

	/* begin block 3 */
		// Start line: 144
	/* end block 3 */
	// End Line: 145

	/* begin block 4 */
		// Start line: 150
	/* end block 4 */
	// End Line: 151

int Draw_SetView__Fiiiiiiiii(int x0,int y0,int x1,int y1,int w,int h,int dtd,int isbg,int otsize)

{
  int iVar1;
  int iVar2;
  Draw_tView *pDVar3;
  
  iVar1 = Draw_gNumView;
  pDVar3 = Draw_gView + Draw_gNumView;
  SetDefDrawEnv((undefined2 *)Draw_gView[Draw_gNumView].drawenv,(short)x0,(short)y0,(short)w,h);
  SetDefDrawEnv((undefined2 *)(Draw_gView[iVar1].drawenv + 1),(short)x1,(short)y1,(short)w,h);
  Draw_gView[iVar1].drawenv[0].r0 = '\0';
  Draw_gView[iVar1].drawenv[0].g0 = '\0';
  Draw_gView[iVar1].drawenv[0].b0 = '\0';
  Draw_gView[iVar1].drawenv[1].r0 = '\0';
  Draw_gView[iVar1].drawenv[1].g0 = '\0';
  Draw_gView[iVar1].drawenv[1].b0 = '\0';
  Draw_gView[iVar1].drawenv[1].isbg = (uchar)isbg;
  Draw_gView[iVar1].drawenv[0].isbg = (uchar)isbg;
  Draw_gView[iVar1].drawenv[1].dtd = (uchar)dtd;
  Draw_gView[iVar1].drawenv[0].dtd = (uchar)dtd;
  iVar2 = Draw_gNumView;
  pDVar3->otsize = otsize;
  Draw_gView[iVar1].membudget = 0;
  Draw_gNumView = Draw_gNumView + 1;
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

	/* begin block 2 */
		// Start line: 251
	/* end block 2 */
	// End Line: 252

	/* begin block 3 */
		// Start line: 263
	/* end block 3 */
	// End Line: 264

	/* begin block 4 */
		// Start line: 263
	/* end block 4 */
	// End Line: 264

	/* begin block 5 */
		// Start line: 264
	/* end block 5 */
	// End Line: 265

	/* begin block 6 */
		// Start line: 264
	/* end block 6 */
	// End Line: 265

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Draw_InitViews__Fv(void)

{
  Draw_gNumView = 0;
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

	/* begin block 2 */
		// Start line: 278
	/* end block 2 */
	// End Line: 279

	/* begin block 3 */
		// Start line: 291
	/* end block 3 */
	// End Line: 292

	/* begin block 4 */
		// Start line: 291
	/* end block 4 */
	// End Line: 292

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Draw_InitViewOT__Fv(void)

{
  short *psVar1;
  Draw_tView *pDVar2;
  int iVar3;
  
  iVar3 = 0;
  pDVar2 = Draw_gView;
  while (iVar3 < Draw_gNumView) {
    iVar3 = iVar3 + 1;
    psVar1 = reservememadr((char *)&PTR_DAT_8013d798,pDVar2->otsize << 2,0x10);
    *(short **)pDVar2->ot = psVar1;
    psVar1 = reservememadr((char *)&PTR_DAT_8013d79c,pDVar2->otsize << 2,0x10);
    *(short **)(pDVar2->ot + 1) = psVar1;
    pDVar2 = pDVar2 + 1;
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

	/* begin block 2 */
		// Start line: 314
	/* end block 2 */
	// End Line: 315

	/* begin block 3 */
		// Start line: 318
	/* end block 3 */
	// End Line: 319

	/* begin block 4 */
		// Start line: 318
	/* end block 4 */
	// End Line: 319

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Draw_InitViewOTInGame__Fv(void)

{
  _func_42 *p_Var1;
  Draw_tView *pDVar2;
  int iVar3;
  
  iVar3 = 0;
  pDVar2 = Draw_gView;
  while (iVar3 < Draw_gNumView) {
    iVar3 = iVar3 + 1;
    p_Var1 = (_func_42 *)Platform_ReserveMemory__FiPc(pDVar2->otsize << 2,(char *)&PTR_DAT_8013d798)
    ;
    pDVar2->ot[0] = p_Var1;
    p_Var1 = (_func_42 *)Platform_ReserveMemory__FiPc(pDVar2->otsize << 2,(char *)&PTR_DAT_8013d79c)
    ;
    pDVar2->ot[1] = p_Var1;
    pDVar2 = pDVar2 + 1;
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

	/* begin block 2 */
		// Start line: 349
	/* end block 2 */
	// End Line: 350

	/* begin block 3 */
		// Start line: 361
	/* end block 3 */
	// End Line: 362

	/* begin block 4 */
		// Start line: 361
	/* end block 4 */
	// End Line: 362

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Draw_DeInitViews__Fv(void)

{
  Draw_tView *pDVar1;
  int iVar2;
  
  iVar2 = 0;
  pDVar1 = Draw_gView;
  while (iVar2 < Draw_gNumView) {
    if (pDVar1->ot[0] != (_func_42 *)0x0) {
      purgememadr((int)pDVar1->ot[0]);
    }
    if (pDVar1->ot[1] != (_func_42 *)0x0) {
      purgememadr((int)pDVar1->ot[1]);
    }
    pDVar1->ot[0] = (_func_42 *)0x0;
    pDVar1->ot[1] = (_func_42 *)0x0;
    pDVar1 = pDVar1 + 1;
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

	/* begin block 2 */
		// Start line: 391
	/* end block 2 */
	// End Line: 392

	/* begin block 3 */
		// Start line: 395
	/* end block 3 */
	// End Line: 396

	/* begin block 4 */
		// Start line: 395
	/* end block 4 */
	// End Line: 396

	/* begin block 5 */
		// Start line: 397
	/* end block 5 */
	// End Line: 398

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Draw_DeInitViewsInGame__Fv(void)

{
  bool bVar1;
  int iVar2;
  Draw_tView *pDVar3;
  int iVar4;
  
  iVar2 = Draw_gNumView;
  iVar4 = 0;
  pDVar3 = Draw_gView;
  while (bVar1 = iVar4 < iVar2, iVar4 = iVar4 + 1, bVar1) {
    pDVar3->ot[0] = (_func_42 *)0x0;
    pDVar3->ot[1] = (_func_42 *)0x0;
    pDVar3 = pDVar3 + 1;
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

	/* begin block 2 */
		// Start line: 421
	/* end block 2 */
	// End Line: 422

	/* begin block 3 */
		// Start line: 425
	/* end block 3 */
	// End Line: 426

	/* begin block 4 */
		// Start line: 425
	/* end block 4 */
	// End Line: 426

	/* begin block 5 */
		// Start line: 426
	/* end block 5 */
	// End Line: 427

	/* begin block 6 */
		// Start line: 426
	/* end block 6 */
	// End Line: 427

DRAWENV * Draw_GetDRAWENV__Fii(int viewid,int page)

{
  return (DRAWENV *)(viewid * 200 + -0x7fee13a4 + page * 0x5c);
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

	/* begin block 2 */
		// Start line: 390
	/* end block 2 */
	// End Line: 391

	/* begin block 3 */
		// Start line: 440
	/* end block 3 */
	// End Line: 441

	/* begin block 4 */
		// Start line: 440
	/* end block 4 */
	// End Line: 441

	/* begin block 5 */
		// Start line: 441
	/* end block 5 */
	// End Line: 442

	/* begin block 6 */
		// Start line: 441
	/* end block 6 */
	// End Line: 442

void Draw_SetViewMemBudget__Fii(int viewid,int totalmem)

{
  Draw_gView[viewid].membudget = totalmem;
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

	/* begin block 2 */
		// Start line: 416
	/* end block 2 */
	// End Line: 417

	/* begin block 3 */
		// Start line: 467
	/* end block 3 */
	// End Line: 468

	/* begin block 4 */
		// Start line: 467
	/* end block 4 */
	// End Line: 468

	/* begin block 5 */
		// Start line: 470
	/* end block 5 */
	// End Line: 471

void Draw_SetViewColor__Fiiii(int viewid,int r,int g,int b)

{
  if (Draw_gView[viewid].drawenv[0].isbg != '\0') {
    Draw_gView[viewid].drawenv[0].r0 = (uchar)r;
    Draw_gView[viewid].drawenv[0].g0 = (uchar)g;
    Draw_gView[viewid].drawenv[0].b0 = (uchar)b;
  }
  if (Draw_gView[viewid].drawenv[1].isbg != '\0') {
    Draw_gView[viewid].drawenv[1].r0 = (uchar)r;
    Draw_gView[viewid].drawenv[1].g0 = (uchar)g;
    Draw_gView[viewid].drawenv[1].b0 = (uchar)b;
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

	/* begin block 2 */
		// Start line: 497
	/* end block 2 */
	// End Line: 498

	/* begin block 3 */
		// Start line: 515
	/* end block 3 */
	// End Line: 516

	/* begin block 4 */
		// Start line: 515
	/* end block 4 */
	// End Line: 516

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AllocatePrimitivesBuffer__Fv(void)

{
  int iVar1;
  int iVar2;
  
  if (GameSetup_gData.commMode == 1) {
    Draw_InitViewOT__Fv();
  }
  else {
    Draw_InitViewOTInGame__Fv();
  }
  if (GameSetup_gData.commMode == 1) {
    gTotalMem = (int)&LAB_00022500;
  }
  else {
    gTotalMem = (int)&LAB_0001f600;
  }
  gEnviro.server = Platform_ReserveMemory__FiPc(gTotalMem,(char *)&PTR_DAT_8013d7a0);
  dflip_8011f43c.server = Platform_ReserveMemory__FiPc(gTotalMem,(char *)&PTR_DAT_8013d7a4);
  iVar1 = Draw_gPlayer2View;
  if (GameSetup_gData.commMode == 1) {
    iVar2 = (gTotalMem >> 1) + -0x1a00;
    Draw_gView[Draw_gPlayer1View].membudget = iVar2;
  }
  else {
    iVar2 = gTotalMem + -0x1a00;
    iVar1 = Draw_gPlayer1View;
  }
  Draw_gView[iVar1].membudget = iVar2;
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

	/* begin block 2 */
		// Start line: 655
	/* end block 2 */
	// End Line: 656

	/* begin block 3 */
		// Start line: 675
	/* end block 3 */
	// End Line: 676

	/* begin block 4 */
		// Start line: 675
	/* end block 4 */
	// End Line: 676

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearPrimitivesBuffer__Fv(void)

{
  DrawSync(0);
  if (gEnviro.server != (char *)0x0) {
    purgememadr((int)gEnviro.server);
  }
  if (dflip_8011f43c.server != (char *)0x0) {
    purgememadr((int)dflip_8011f43c.server);
  }
  dflip_8011f43c.server = (char *)0x0;
  gEnviro.server = (char *)0x0;
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

	/* begin block 2 */
		// Start line: 698
	/* end block 2 */
	// End Line: 699

	/* begin block 3 */
		// Start line: 703
	/* end block 3 */
	// End Line: 704

	/* begin block 4 */
		// Start line: 703
	/* end block 4 */
	// End Line: 704

/* WARNING: Unknown calling convention yet parameter storage is locked */

void ClearPlatformPrimitivesBuffer__Fv(void)

{
  DrawSync(0);
  dflip_8011f43c.server = (char *)0x0;
  gEnviro.server = (char *)0x0;
  if (GameSetup_gData.commMode == 1) {
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

	/* begin block 2 */
		// Start line: 744
	/* end block 2 */
	// End Line: 745

	/* begin block 3 */
		// Start line: 757
	/* end block 3 */
	// End Line: 758

	/* begin block 4 */
		// Start line: 757
	/* end block 4 */
	// End Line: 758

void Draw_StartRenderingView__Fi(int viewid)

{
  int iVar1;
  
  Draw_gViewOtSize = Draw_gView[viewid].otsize;
  iVar1 = Draw_gViewOtSize * 7;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  if ((viewid == Draw_gPlayer1View) || (viewid == Draw_gPlayer2View)) {
    DAT_1f800008 = (char *)(DAT_1f800004 + Draw_gView[viewid].membudget);
  }
  else {
    DAT_1f800008 = Draw_gMaxPrim;
  }
  DAT_1f800000 = (&Draw_gView[viewid].otsize)[gFlip + 0x30];
  DAT_1f80000c = 0;
  DAT_1f800010 = Draw_gView[viewid].drawenv[0].clip.w;
  DAT_1f800012 = Draw_gView[viewid].drawenv[0].clip.h;
  Draw_gMidGroundOtz = iVar1 >> 3;
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

	/* begin block 2 */
		// Start line: 833
	/* end block 2 */
	// End Line: 834

	/* begin block 3 */
		// Start line: 846
	/* end block 3 */
	// End Line: 847

	/* begin block 4 */
		// Start line: 846
	/* end block 4 */
	// End Line: 847

void Draw_StopRenderingView__Fi(int viewid)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  Draw_tView *pDVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_68 [24];
  
  pDVar5 = Draw_gView + viewid;
  iVar9 = gFlip * 0x17;
  piVar4 = &pDVar5->otsize + iVar9 + 2;
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
  } while (piVar4 != &pDVar5->otsize + iVar9 + 0x16);
  iVar9 = piVar3[5];
  iVar8 = piVar3[6];
  piVar7[4] = *piVar4;
  piVar7[5] = iVar9;
  piVar7[6] = iVar8;
  puVar1 = DAT_1f800004;
  iVar9 = DAT_1f800000;
  *DAT_1f800004 =
       *DAT_1f800004 & 0xff000000 | *(uint *)(pDVar5->otsize * 4 + DAT_1f800000 + -4) & 0xffffff;
  iVar9 = pDVar5->otsize * 4 + iVar9;
  uVar6 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 0x10;
  *(uint *)(iVar9 + -4) = *(uint *)(iVar9 + -4) & 0xff000000 | uVar6;
  SetDrawEnv((int)puVar1,(ushort *)local_68);
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

	/* begin block 2 */
		// Start line: 890
	/* end block 2 */
	// End Line: 891

	/* begin block 3 */
		// Start line: 901
	/* end block 3 */
	// End Line: 902

	/* begin block 4 */
		// Start line: 901
	/* end block 4 */
	// End Line: 902

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 936
	/* end block 2 */
	// End Line: 937

	/* begin block 3 */
		// Start line: 949
	/* end block 3 */
	// End Line: 950

	/* begin block 4 */
		// Start line: 949
	/* end block 4 */
	// End Line: 950

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Draw_StartFrameRender__Fv(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  Draw_tView *pDVar4;
  int iVar5;
  
  iVar5 = 0;
  pDVar4 = Draw_gView;
  while (bVar1 = iVar5 < Draw_gNumView, iVar5 = iVar5 + 1, bVar1) {
    piVar2 = &pDVar4->otsize;
    piVar3 = &pDVar4->otsize;
    pDVar4 = pDVar4 + 1;
    ClearOTagR((undefined4 *)piVar3[gFlip + 0x30],*piVar2);
  }
  DAT_1f800004 = (&gEnviro)[gFlip].server;
  Draw_gMaxPrim = (&gEnviro)[gFlip].server + gTotalMem;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw_SetDrawSyncCallback__FPFv_v(TDRFuncPtr_Draw_SetDrawSyncCallback__FPFv_v0p p /*$a0*/)
 // line 448, offset 0x800be360
	/* begin block 1 */
		// Start line: 449
		// Start offset: 0x800BE360
	/* end block 1 */
	// End offset: 0x800BE360
	// End Line: 450

	/* begin block 2 */
		// Start line: 982
	/* end block 2 */
	// End Line: 983

	/* begin block 3 */
		// Start line: 987
	/* end block 3 */
	// End Line: 988

	/* begin block 4 */
		// Start line: 987
	/* end block 4 */
	// End Line: 988

	/* begin block 5 */
		// Start line: 988
	/* end block 5 */
	// End Line: 989

	/* begin block 6 */
		// Start line: 988
	/* end block 6 */
	// End Line: 989

void Draw_SetDrawSyncCallback__FPFv_v(TDRFuncPtr_Draw_SetDrawSyncCallback__FPFv_v0p p)

{
  Draw_gSyncCallback = (uchar *)p;
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

	/* begin block 2 */
		// Start line: 1003
	/* end block 2 */
	// End Line: 1004

	/* begin block 3 */
		// Start line: 1017
	/* end block 3 */
	// End Line: 1018

	/* begin block 4 */
		// Start line: 1017
	/* end block 4 */
	// End Line: 1018

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Draw_StopFrameRender__Fv(void)

{
  bool bVar1;
  Draw_tView *pDVar2;
  int iVar3;
  
  DrawSync(0);
  gLoop = gLoop + 1;
  if (Draw_gSyncCallback != (uchar *)0x0) {
    (*(code *)Draw_gSyncCallback)();
  }
  if (Draw_gDoVSync != 0) {
    VSync(0);
  }
  iVar3 = 0;
  PutDispEnv((ushort *)(&gEnviro + gFlip));
  pDVar2 = Draw_gView;
  while (bVar1 = iVar3 < Draw_gNumView, iVar3 = iVar3 + 1, bVar1) {
    DrawOTag((&pDVar2->otsize)[gFlip + 0x30] + pDVar2->otsize * 4 + -4);
    pDVar2 = pDVar2 + 1;
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

	/* begin block 2 */
		// Start line: 1079
	/* end block 2 */
	// End Line: 1080

	/* begin block 3 */
		// Start line: 1085
	/* end block 3 */
	// End Line: 1086

	/* begin block 4 */
		// Start line: 1085
	/* end block 4 */
	// End Line: 1086

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

	/* begin block 2 */
		// Start line: 1115
	/* end block 2 */
	// End Line: 1116

	/* begin block 3 */
		// Start line: 1130
	/* end block 3 */
	// End Line: 1131

	/* begin block 4 */
		// Start line: 1130
	/* end block 4 */
	// End Line: 1131

void Draw_DirectSetEnvironment__Fiiiiiiiiii
               (int x,int y,int w,int h,int edraw,int edisplay,int erase,int r,int g,int b)

{
  undefined4 auStack128 [6];
  bool local_68;
  undefined local_67;
  undefined local_66;
  undefined local_65;
  
  if (edraw != 0) {
    SetDefDrawEnv((undefined2 *)auStack128,(short)x,(short)y,(short)w,h);
    local_68 = erase != 0;
    if (local_68) {
      local_67 = (undefined)r;
      local_66 = (undefined)g;
      local_65 = (undefined)b;
    }
    PutDrawEnv(auStack128);
  }
  if (edisplay != 0) {
    SetDefDispEnv((undefined2 *)auStack128,(short)x,(short)y,(short)w,h);
    SetDispMask(0);
    PutDispEnv((ushort *)auStack128);
    timedwait((int)timerhz >> 1);
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

	/* begin block 2 */
		// Start line: 1201
	/* end block 2 */
	// End Line: 1202

	/* begin block 3 */
		// Start line: 1206
	/* end block 3 */
	// End Line: 1207

	/* begin block 4 */
		// Start line: 1206
	/* end block 4 */
	// End Line: 1207

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

	/* begin block 2 */
		// Start line: 1142
	/* end block 2 */
	// End Line: 1143

	/* begin block 3 */
		// Start line: 1248
	/* end block 3 */
	// End Line: 1249

	/* begin block 4 */
		// Start line: 1248
	/* end block 4 */
	// End Line: 1249

void Draw_InitRenderEngine__Fiiiiii(int x0,int y0,int x1,int y1,int w,int h)

{
  gFlip = -1;
  gEnviro.server = (char *)0x0;
  dflip_8011f43c.server = (char *)0x0;
  SetDefDispEnv((undefined2 *)&gEnviro,(short)x0,(short)y0,(short)w,h);
  SetDefDispEnv((undefined2 *)&dflip_8011f43c,(short)x1,(short)y1,(short)w,h);
  Draw_SetDrawSyncCallback__FPFv_v((TDRFuncPtr_Draw_SetDrawSyncCallback__FPFv_v0p)0x0);
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

	/* begin block 2 */
		// Start line: 1297
	/* end block 2 */
	// End Line: 1298

	/* begin block 3 */
		// Start line: 1302
	/* end block 3 */
	// End Line: 1303

	/* begin block 4 */
		// Start line: 1302
	/* end block 4 */
	// End Line: 1303

	/* begin block 5 */
		// Start line: 1303
	/* end block 5 */
	// End Line: 1304

	/* begin block 6 */
		// Start line: 1303
	/* end block 6 */
	// End Line: 1304

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 1307
	/* end block 2 */
	// End Line: 1308

	/* begin block 3 */
		// Start line: 1310
	/* end block 3 */
	// End Line: 1311

	/* begin block 4 */
		// Start line: 1310
	/* end block 4 */
	// End Line: 1311

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Draw_DeInitRenderEngine__Fv(void)

{
  ClearPlatformPrimitivesBuffer__Fv();
  gFlip = -1;
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

	/* begin block 2 */
		// Start line: 1322
	/* end block 2 */
	// End Line: 1323

	/* begin block 3 */
		// Start line: 1328
	/* end block 3 */
	// End Line: 1329

	/* begin block 4 */
		// Start line: 1328
	/* end block 4 */
	// End Line: 1329

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Draw_InitLibRender__Fv(void)

{
  gLoop = 1;
  InitGeom();
  return;
}





