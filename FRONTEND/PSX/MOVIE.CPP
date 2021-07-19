#include "THISDUST.H"
#include "MOVIE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Movie_Init__Fc(char movie /*$a3*/)
 // line 130, offset 0x8004c608
	/* begin block 1 */
		// Start line: 131
		// Start offset: 0x8004C608
	/* end block 1 */
	// End offset: 0x8004C650
	// End Line: 144

	/* begin block 2 */
		// Start line: 260
	/* end block 2 */
	// End Line: 261

	/* begin block 3 */
		// Start line: 260
	/* end block 3 */
	// End Line: 261

/* WARNING: Removing unreachable block (ram,0x8004c63c) */

void Movie_Init__Fc(char movie)

{
  PPWTop = 3;
  PPWBottom = 2;
  gMovieWidth = moviewidth[(uint)(byte)movie];
  gMovieHeight = movieheight[(uint)(byte)movie];
  Movie_SetDecodeOffset__Fssss(0,0,0,0x100);
  gMovieFrame = 0;
  gEndFrame = 0;
  bMovieLoaded = (void *)0x0;
  settrans(0);
  download = 0;
  vlcbuf0 = (ulong *)reservememadr(s_vlcbuf0_80012790,(int)&LAB_00028000,0x10);
  vlcbuf1 = (ulong *)reservememadr(s_vlcbuf1_80012798,(int)&LAB_00028000,0x10);
  if ((int)PPWBottom == 0) {
    trap(0x1c00);
  }
  imgbuf = (ushort *)
           reservememadr(s_imgbuf_800127a0,((uint)((int)PPWTop << 5) / (uint)(int)PPWBottom) * 0x1e0
                         ,0x10);
  sect_buff = (ulong *)reservememadr(s_sect_buff_800127a8,0x10000,0x10);
  Platform_ResetDCTBuffer__Fv();
  CD_Restart(0);
  CdControlB(0xb,(undefined *)0x0,(undefined *)0x0);
  CdControlB(9,(undefined *)0x0,(undefined *)0x0);
  CdControlB(0xc,(undefined *)0x0,(undefined *)0x0);
  DecDCToutCallback();
  CdDataCallback();
  CdReadyCallback(0);
  DecDCTvlcSize(0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Movie_DeInit__Fv()
 // line 175, offset 0x8004c7d8
	/* begin block 1 */
		// Start line: 176
		// Start offset: 0x8004C7D8
		// Variables:
	// 		unsigned char param[8]; // stack offset -16
	/* end block 1 */
	// End offset: 0x8004C7D8
	// End Line: 176

	/* begin block 2 */
		// Start line: 356
	/* end block 2 */
	// End Line: 357

	/* begin block 3 */
		// Start line: 362
	/* end block 3 */
	// End Line: 363

	/* begin block 4 */
		// Start line: 362
	/* end block 4 */
	// End Line: 363

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Movie_DeInit__Fv(void)

{
  undefined local_10 [8];
  
  bMovieLoaded = (void *)0x0;
  local_10[0] = 0x80;
  CdControlB(0xe,local_10,(undefined *)0x0);
  DecDCToutCallback();
  StUnSetRing();
  CdDataCallback();
  CdReadyCallback(0);
  CdControlB(0xb,(undefined *)0x0,(undefined *)0x0);
  CdControlB(9,(undefined *)0x0,(undefined *)0x0);
  CdControlB(0xc,(undefined *)0x0,(undefined *)0x0);
  purgememadr((int)vlcbuf0);
  purgememadr((int)vlcbuf1);
  purgememadr((int)imgbuf);
  purgememadr((int)sect_buff);
  Platform_ResetDCTBuffer__Fv();
  CD_Restart(0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Movie_SetDecodeOffset__Fssss(short x0 /*$a0*/, short y0 /*$a1*/, short x1 /*$a2*/, short y1 /*$a3*/)
 // line 206, offset 0x8004c8b0
	/* begin block 1 */
		// Start line: 207
		// Start offset: 0x8004C8B0
	/* end block 1 */
	// End offset: 0x8004C8B0
	// End Line: 207

	/* begin block 2 */
		// Start line: 426
	/* end block 2 */
	// End Line: 427

	/* begin block 3 */
		// Start line: 432
	/* end block 3 */
	// End Line: 433

	/* begin block 4 */
		// Start line: 432
	/* end block 4 */
	// End Line: 433

	/* begin block 5 */
		// Start line: 433
	/* end block 5 */
	// End Line: 434

	/* begin block 6 */
		// Start line: 433
	/* end block 6 */
	// End Line: 434

void Movie_SetDecodeOffset__Fssss(short x0,short y0,short x1,short y1)

{
  int iVar1;
  
  iVar1 = (int)PPWBottom;
  if (iVar1 == 0) {
    trap(0x1c00);
  }
  if ((iVar1 == -1) && ((int)gMovieWidth * (int)PPWTop == -0x80000000)) {
    trap(0x1800);
  }
  dec.rect[0].h = gMovieHeight;
  dec.rect[1].h = gMovieHeight;
  dec.rect[0].w = (short)(((int)gMovieWidth * (int)PPWTop) / iVar1);
  dec.rect[0].x = x0;
  dec.rect[0].y = y0;
  dec.rect[1].x = x1;
  dec.rect[1].y = y1;
  dec.rect[1].w = dec.rect[0].w;
  ClearImage((short *)dec.rect,0,0,0);
  ClearImage((short *)(dec.rect + 1),0,0,0);
  DrawSync(0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Movie_Load__Fc(char movie /*$s0*/)
 // line 218, offset 0x8004c984
	/* begin block 1 */
		// Start line: 219
		// Start offset: 0x8004C984
		// Variables:
	// 		struct CdlFILE file; // stack offset -120
	// 		char gFEFileName[80]; // stack offset -96
	/* end block 1 */
	// End offset: 0x8004CB18
	// End Line: 278

	/* begin block 2 */
		// Start line: 463
	/* end block 2 */
	// End Line: 464

	/* begin block 3 */
		// Start line: 469
	/* end block 3 */
	// End Line: 470

	/* begin block 4 */
		// Start line: 469
	/* end block 4 */
	// End Line: 470

void Movie_Load__Fc(char movie)

{
  uint uVar1;
  undefined4 *puVar2;
  uchar local_78;
  uchar local_77;
  uchar local_76;
  char acStack96 [80];
  
  bMovieLoaded = (void *)0x0;
  bRewindMovie = 0;
  bStopMovie = (void *)0x0;
  download = 0;
  isFirstSlice = 1;
  ResetCallback();
  uVar1 = (uint)(byte)movie;
  sprintf(acStack96,s__MOVIES__s_1_800127b4,movienames5[uVar1]);
  gMovieFrame = 0;
  gEndFrame = (int)movieframes[uVar1] - 1;
  gIsRGB24 = movie24bit[uVar1];
  gMovieWidth = moviewidth[uVar1];
  gMovieHeight = movieheight[uVar1];
  if (gIsRGB24 == (void *)0x0) {
    PPWTop = 1;
    PPWBottom = 1;
    gMode = 2;
  }
  else {
    PPWTop = 3;
    PPWBottom = 2;
    gMode = 3;
  }
  puVar2 = CdSearchFile((undefined4 *)&local_78,acStack96);
  if (puVar2 != (undefined4 *)0x0) {
    loc.minute = local_78;
    loc.sector = local_76;
    loc.second = local_77;
    strSetDefDecEnv__FP6DECENV(&dec);
    strInit__FP6CdlLOCiPFe_vT2
              (&loc,0xfffffff,strCallback__Fv,(TDRFuncPtr_strInit__FP6CdlLOCiPFe_vT23endcallback)0x0
              );
    strNextVlc__FP6DECENV(&dec);
    bMovieLoaded = &DAT_00000001;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Movie_NextFrame__Fv()
 // line 287, offset 0x8004cb30
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x8004CB30
	/* end block 1 */
	// End offset: 0x8004CC54
	// End Line: 300

	/* begin block 2 */
		// Start line: 630
	/* end block 2 */
	// End Line: 631

	/* begin block 3 */
		// Start line: 635
	/* end block 3 */
	// End Line: 636

	/* begin block 4 */
		// Start line: 635
	/* end block 4 */
	// End Line: 636

/* WARNING: Unknown calling convention yet parameter storage is locked */

int Movie_NextFrame__Fv(void)

{
  int iVar1;
  int iVar2;
  
  DecDCTin((uint *)dec.vlcbuf[dec.vlcid],(int)gMode);
  DecDCTinSync(1);
  iVar1 = (int)PPWBottom;
  iVar2 = ((int)PPWTop << 4) / iVar1;
  if (iVar1 == 0) {
    trap(0x1c00);
  }
  if ((iVar1 == -1) && ((int)PPWTop << 4 == -0x80000000)) {
    trap(0x1800);
  }
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && ((int)dec.slice.w + -1 == -0x80000000)) {
    trap(0x1800);
  }
  iVar1 = (int)dec.slice.h + -1;
  if (iVar1 < 0) {
    iVar1 = (int)dec.slice.h + 0xe;
  }
  DecDCTout(dec.imgbuf,
            (((int)dec.slice.w + -1) / iVar2 + 1) * iVar2 * 0x10 * ((iVar1 >> 4) + 1) >> 1);
  iVar1 = strNextVlc__FP6DECENV(&dec);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    strSync__FP6DECENVi(&dec);
    VSync(0);
    iVar1 = 0;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Movie_DownloadFrame__Fv()
 // line 306, offset 0x8004cc64
	/* begin block 1 */
		// Start line: 307
		// Start offset: 0x8004CC64
	/* end block 1 */
	// End offset: 0x8004CC64
	// End Line: 308

	/* begin block 2 */
		// Start line: 673
	/* end block 2 */
	// End Line: 674

	/* begin block 3 */
		// Start line: 680
	/* end block 3 */
	// End Line: 681

	/* begin block 4 */
		// Start line: 680
	/* end block 4 */
	// End Line: 681

	/* begin block 5 */
		// Start line: 681
	/* end block 5 */
	// End Line: 682

	/* begin block 6 */
		// Start line: 681
	/* end block 6 */
	// End Line: 682

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Movie_DownloadFrame__Fv(void)

{
  download = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Movie_Stop__Fv()
 // line 313, offset 0x8004cc74
	/* begin block 1 */
		// Start line: 314
		// Start offset: 0x8004CC74
	/* end block 1 */
	// End offset: 0x8004CC74
	// End Line: 315

	/* begin block 2 */
		// Start line: 688
	/* end block 2 */
	// End Line: 689

	/* begin block 3 */
		// Start line: 694
	/* end block 3 */
	// End Line: 695

	/* begin block 4 */
		// Start line: 694
	/* end block 4 */
	// End Line: 695

	/* begin block 5 */
		// Start line: 695
	/* end block 5 */
	// End Line: 696

	/* begin block 6 */
		// Start line: 695
	/* end block 6 */
	// End Line: 696

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Movie_Stop__Fv(void)

{
  bStopMovie = &DAT_00000001;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ Movie_Finished__Fv()
 // line 320, offset 0x8004cc84
	/* begin block 1 */
		// Start line: 321
		// Start offset: 0x8004CC84
	/* end block 1 */
	// End offset: 0x8004CCDC
	// End Line: 322

	/* begin block 2 */
		// Start line: 702
	/* end block 2 */
	// End Line: 703

	/* begin block 3 */
		// Start line: 708
	/* end block 3 */
	// End Line: 709

	/* begin block 4 */
		// Start line: 708
	/* end block 4 */
	// End Line: 709

	/* begin block 5 */
		// Start line: 709
	/* end block 5 */
	// End Line: 710

	/* begin block 6 */
		// Start line: 709
	/* end block 6 */
	// End Line: 710

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * Movie_Finished__Fv(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((((gEndFrame <= gMovieFrame) || (bMovieLoaded == (void *)0x0)) || (bStopMovie != (void *)0x0))
     || (bRewindMovie != 0)) {
    puVar1 = &DAT_00000001;
  }
  return puVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Movie_Play__Fc(char movie /*$s0*/)
 // line 327, offset 0x8004cce4
	/* begin block 1 */
		// Start line: 328
		// Start offset: 0x8004CCE4
		// Variables:
	// 		struct DISPENV disp; // stack offset -160
	// 		struct DRAWENV draw; // stack offset -136
	// 		int joyval; // $s0
	/* end block 1 */
	// End offset: 0x8004CE90
	// End Line: 398

	/* begin block 2 */
		// Start line: 716
	/* end block 2 */
	// End Line: 717

	/* begin block 3 */
		// Start line: 722
	/* end block 3 */
	// End Line: 723

	/* begin block 4 */
		// Start line: 722
	/* end block 4 */
	// End Line: 723

	/* begin block 5 */
		// Start line: 729
	/* end block 5 */
	// End Line: 730

int Movie_Play__Fc(char movie)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ushort auStack160 [2];
  short local_9c;
  undefined2 local_92;
  undefined local_8f;
  undefined4 auStack136 [28];
  
  SNDcdvol(gMasterMusicLevel * 0x7f >> 7);
  Movie_Init__Fc(movie);
  Movie_Load__Fc(movie);
  while ((puVar3 = (undefined *)Movie_Finished__Fv(), puVar3 != &DAT_00000001 &&
         (iVar4 = Movie_NextFrame__Fv(), iVar4 != -1))) {
    uVar5 = (uint)(dec.rectid == 0);
    SetDefDispEnv(auStack160,dec.rect[uVar5].x,dec.rect[uVar5].y,dec.rect[uVar5].w,
                  (int)dec.rect[uVar5].h);
    local_92 = 0xf0;
    SetDefDrawEnv((undefined2 *)auStack136,dec.rect[uVar5].x,dec.rect[uVar5].y,dec.rect[uVar5].w,
                  (int)dec.rect[uVar5].h);
    if (gIsRGB24 != (void *)0x0) {
      local_8f = 1;
      local_9c = (short)((ulonglong)((longlong)((int)local_9c << 1) * 0x55555556) >> 0x20) -
                 (short)(((int)local_9c << 1) >> 0x1f);
    }
    PutDispEnv(auStack160);
    PutDrawEnv(auStack136);
    SetDispMask(1);
    if (gIsRGB24 == (void *)0x0) {
      FntFlush(-1);
    }
    Movie_DownloadFrame__Fv();
    download = 1;
    PAD_update();
    uVar1 = PAD_state(0);
    uVar2 = PAD_state(4);
    if (((uVar1 | uVar2) != 0) && ((Movie_Stop__Fv(), skip_all != '\0' || ((uVar1 | uVar2) == 8))))
    {
      user_exit = 1;
    }
  }
  Movie_DeInit__Fv();
  ClearImage((short *)dec.rect,0,0,0);
  ClearImage((short *)(dec.rect + 1),0,0,0);
  DrawSync(0);
  return (int)user_exit;
}



// decompiled code
// original method signature: 
// int /*$ra*/ play_movie__Fc(char movie /*$a0*/)
 // line 410, offset 0x8004cef4
	/* begin block 1 */
		// Start line: 411
		// Start offset: 0x8004CEF4
	/* end block 1 */
	// End offset: 0x8004CEF4
	// End Line: 411

	/* begin block 2 */
		// Start line: 950
	/* end block 2 */
	// End Line: 951

	/* begin block 3 */
		// Start line: 954
	/* end block 3 */
	// End Line: 955

	/* begin block 4 */
		// Start line: 954
	/* end block 4 */
	// End Line: 955

int play_movie__Fc(char movie)

{
  int iVar1;
  
  iVar1 = Movie_Play__Fc(movie);
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ strSetDefDecEnv__FP6DECENV(struct DECENV *dec /*$a0*/)
 // line 420, offset 0x8004cf14
	/* begin block 1 */
		// Start line: 421
		// Start offset: 0x8004CF14
	/* end block 1 */
	// End offset: 0x8004CF14
	// End Line: 429

	/* begin block 2 */
		// Start line: 966
	/* end block 2 */
	// End Line: 967

	/* begin block 3 */
		// Start line: 974
	/* end block 3 */
	// End Line: 975

	/* begin block 4 */
		// Start line: 974
	/* end block 4 */
	// End Line: 975

	/* begin block 5 */
		// Start line: 982
	/* end block 5 */
	// End Line: 983

void strSetDefDecEnv__FP6DECENV(DECENV *dec)

{
  short sVar1;
  ulong *puVar2;
  ulong *puVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  
  puVar4 = imgbuf;
  puVar3 = vlcbuf1;
  puVar2 = vlcbuf0;
  sVar1 = gMovieHeight;
  iVar6 = (int)PPWTop;
  iVar5 = (int)PPWBottom;
  if (iVar5 == 0) {
    trap(0x1c00);
  }
  if ((iVar5 == -1) && (iVar6 << 4 == -0x80000000)) {
    trap(0x1800);
  }
  dec->vlcid = 0;
  dec->rectid = 0;
  dec->isdone = 0;
  (dec->slice).x = 0;
  (dec->slice).y = 0;
  *(ulong **)(dec->vlcbuf + 1) = puVar3;
  dec->imgbuf = puVar4;
  (dec->slice).h = sVar1;
  *(ulong **)dec->vlcbuf = puVar2;
  (dec->slice).w = (short)((iVar6 << 4) / iVar5);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ strInit__FP6CdlLOCiPFe_vT2(struct CdlLOC *loc /*$s3*/, int frame_size /*$s2*/, TDRFuncPtr_strInit__FP6CdlLOCiPFe_vT22callback callback /*$s0*/, TDRFuncPtr_strInit__FP6CdlLOCiPFe_vT23endcallback endcallback /*$s1*/)
 // line 433, offset 0x8004cfa0
	/* begin block 1 */
		// Start line: 434
		// Start offset: 0x8004CFA0
	/* end block 1 */
	// End offset: 0x8004CFA0
	// End Line: 434

	/* begin block 2 */
		// Start line: 1027
	/* end block 2 */
	// End Line: 1028

	/* begin block 3 */
		// Start line: 1032
	/* end block 3 */
	// End Line: 1033

	/* begin block 4 */
		// Start line: 1032
	/* end block 4 */
	// End Line: 1033

void strInit__FP6CdlLOCiPFe_vT2
               (CdlLOC *loc,int frame_size,TDRFuncPtr_strInit__FP6CdlLOCiPFe_vT22callback callback,
               TDRFuncPtr_strInit__FP6CdlLOCiPFe_vT23endcallback endcallback)

{
  DecDCTReset(0);
  bRewindMovie = 0;
  DecDCToutCallback();
  StSetRing(sect_buff,0x20);
  StClearRing();
  StSetStream((uint)gIsRGB24,1,frame_size,0,endcallback);
  strKickCD__FP6CdlLOC(loc);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ strCallback__Fv()
 // line 450, offset 0x8004d038
	/* begin block 1 */
		// Start line: 451
		// Start offset: 0x8004D038

		/* begin block 1.1 */
			// Start line: 451
			// Start offset: 0x8004D038

			/* begin block 1.1.1 */
				// Start line: 455
				// Start offset: 0x8004D050
			/* end block 1.1.1 */
			// End offset: 0x8004D070
			// End Line: 460
		/* end block 1.1 */
		// End offset: 0x8004D070
		// End Line: 460
	/* end block 1 */
	// End offset: 0x8004D324
	// End Line: 489

	/* begin block 2 */
		// Start line: 1063
	/* end block 2 */
	// End Line: 1064

	/* begin block 3 */
		// Start line: 1068
	/* end block 3 */
	// End Line: 1069

	/* begin block 4 */
		// Start line: 1068
	/* end block 4 */
	// End Line: 1069

	/* begin block 5 */
		// Start line: 1071
	/* end block 5 */
	// End Line: 1072

/* WARNING: Unknown calling convention yet parameter storage is locked */

void strCallback__Fv(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((gIsRGB24 != (void *)0x0) && (StCdIntrFlag != 0)) {
    StCdInterrupt();
    StCdIntrFlag = 0;
  }
  if (download != 0) {
    LoadImage((short *)&dec.slice,dec.imgbuf);
  }
  if (isFirstSlice != 0) {
    iVar3 = (int)PPWBottom;
    iVar2 = (int)PPWTop << 4;
    iVar5 = iVar2 / iVar3;
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    if ((iVar3 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    iVar2 = (int)dec.rect[dec.rectid].w;
    iVar4 = iVar2 % iVar5;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    iVar2 = iVar4 * (int)PPWTop;
    if (iVar4 != 0) {
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar2 == -0x80000000)) {
        trap(0x1800);
      }
      isFirstSlice = 0;
      sVar1 = (short)(iVar2 / iVar3);
      goto LAB_8004d1e0;
    }
  }
  iVar2 = (int)PPWBottom;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && ((int)PPWTop << 4 == -0x80000000)) {
    trap(0x1800);
  }
  sVar1 = (short)(((int)PPWTop << 4) / iVar2);
LAB_8004d1e0:
  dec.slice.x = dec.slice.x + sVar1;
  if ((int)dec.slice.x < (int)dec.rect[dec.rectid].x + (int)dec.rect[dec.rectid].w) {
    iVar2 = (int)PPWBottom;
    iVar3 = ((int)PPWTop << 4) / iVar2;
    if (iVar2 == 0) {
      trap(0x1c00);
    }
    if ((iVar2 == -1) && ((int)PPWTop << 4 == -0x80000000)) {
      trap(0x1800);
    }
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    if ((iVar3 == -1) && ((int)dec.slice.w + -1 == -0x80000000)) {
      trap(0x1800);
    }
    iVar2 = (int)dec.slice.h + -1;
    if (iVar2 < 0) {
      iVar2 = (int)dec.slice.h + 0xe;
    }
    DecDCTout(dec.imgbuf,
              (((int)dec.slice.w + -1) / iVar3 + 1) * iVar3 * 0x10 * ((iVar2 >> 4) + 1) >> 1);
  }
  else {
    dec.rectid = ZEXT14(dec.rectid == 0);
    dec.isdone = 1;
    dec.slice.x = dec.rect[dec.rectid].x;
    isFirstSlice = 1;
    dec.slice.y = dec.rect[dec.rectid].y +
                  (short)((int)((0xf0U - height) + (0xf0U - height >> 0x1f)) >> 1);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ strNextVlc__FP6DECENV(struct DECENV *dec /*$s2*/)
 // line 493, offset 0x8004d334
	/* begin block 1 */
		// Start line: 494
		// Start offset: 0x8004D334
		// Variables:
	// 		int cnt; // $s0
	// 		unsigned long *next; // $s1
	/* end block 1 */
	// End offset: 0x8004D3BC
	// End Line: 519

	/* begin block 2 */
		// Start line: 1162
	/* end block 2 */
	// End Line: 1163

	/* begin block 3 */
		// Start line: 1167
	/* end block 3 */
	// End Line: 1168

	/* begin block 4 */
		// Start line: 1167
	/* end block 4 */
	// End Line: 1168

int strNextVlc__FP6DECENV(DECENV *dec)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 10;
  do {
    puVar1 = strNext__FP6DECENV(dec);
    iVar3 = iVar3 + -1;
    if (puVar1 != (ulong *)0x0) {
      uVar2 = (uint)(dec->vlcid == 0);
      dec->vlcid = uVar2;
      iVar3 = DecDCTvlc(puVar1,(uint *)dec->vlcbuf[uVar2]);
      while (iVar3 != 0) {
        iVar3 = DecDCTvlc((uint *)0x0,(uint *)0x0);
      }
      StFreeRing((int)puVar1);
      return 0;
    }
  } while (iVar3 != 0);
  return -1;
}



// decompiled code
// original method signature: 
// unsigned long * /*$ra*/ strNext__FP6DECENV(struct DECENV *dec /*$s1*/)
 // line 537, offset 0x8004d3d4
	/* begin block 1 */
		// Start line: 538
		// Start offset: 0x8004D3D4
		// Variables:
	// 		unsigned long *addr; // stack offset -24
	// 		struct CDSECTOR *sector; // stack offset -20
	// 		int cnt; // $s0

		/* begin block 1.1 */
			// Start line: 586
			// Start offset: 0x8004D494

			/* begin block 1.1.1 */
				// Start line: 587
				// Start offset: 0x8004D4C8
				// Variables:
			// 		struct RECT rect; // stack offset -32
			/* end block 1.1.1 */
			// End offset: 0x8004D554
			// End Line: 594
		/* end block 1.1 */
		// End offset: 0x8004D554
		// End Line: 594
	/* end block 1 */
	// End offset: 0x8004D5C8
	// End Line: 601

	/* begin block 2 */
		// Start line: 1241
	/* end block 2 */
	// End Line: 1242

	/* begin block 3 */
		// Start line: 1260
	/* end block 3 */
	// End Line: 1261

	/* begin block 4 */
		// Start line: 1260
	/* end block 4 */
	// End Line: 1261

ulong * strNext__FP6DECENV(DECENV *dec)

{
  uint uVar1;
  ulong uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  ulong *local_18;
  short *local_14;
  
  iVar4 = 50000;
  while( true ) {
    uVar1 = StGetNext((int *)&local_18,&local_14);
    iVar4 = iVar4 + -1;
    if (uVar1 == 0) break;
    if (iVar4 == 0) {
      return (ulong *)0x0;
    }
  }
  if ((*local_18 == *(ulong *)(local_14 + 10)) && (local_18[1] == *(ulong *)(local_14 + 0xc))) {
    uVar2 = *(ulong *)(local_14 + 4);
    if ((uVar2 < gMovieFrame) || (gEndFrame <= uVar2)) {
      bRewindMovie = 1;
      uVar2 = gMovieFrame;
    }
    gMovieFrame = uVar2;
    if ((width != (uint)(ushort)local_14[8]) || (height != (uint)(ushort)local_14[9])) {
      iVar4 = (int)PPWBottom;
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      if ((iVar4 == -1) && ((int)PPWTop * 0x280 == -0x80000000)) {
        trap(0x1800);
      }
      local_20 = 0;
      local_1e = 0;
      local_1a = 0x1e0;
      local_1c = (undefined2)(((int)PPWTop * 0x280) / iVar4);
      ClearImage(&local_20,0,0,0);
      width = ZEXT24((ushort)local_14[8]);
      height = ZEXT24((ushort)local_14[9]);
    }
    iVar5 = width * (int)PPWTop;
    iVar4 = (int)PPWBottom;
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    dec->rect[1].h = (short)height;
    dec->rect[0].h = (short)height;
    (dec->slice).h = (short)height;
    sVar3 = (short)(iVar5 / iVar4);
    dec->rect[1].w = sVar3;
    dec->rect[0].w = sVar3;
    return local_18;
  }
  StFreeRing((int)local_18);
  return (ulong *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ strSync__FP6DECENVi(struct DECENV *dec /*$a0*/)
 // line 604, offset 0x8004d5dc
	/* begin block 1 */
		// Start line: 605
		// Start offset: 0x8004D5DC
		// Variables:
	// 		unsigned long cnt; // stack offset -8
	/* end block 1 */
	// End offset: 0x8004D680
	// End Line: 622

	/* begin block 2 */
		// Start line: 1404
	/* end block 2 */
	// End Line: 1405

	/* begin block 3 */
		// Start line: 1408
	/* end block 3 */
	// End Line: 1409

	/* begin block 4 */
		// Start line: 1408
	/* end block 4 */
	// End Line: 1409

void strSync__FP6DECENVi(DECENV *dec)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0x800000;
  if (dec->isdone == 0) {
    uVar1 = 0xf0 - height;
    do {
      local_8 = local_8 + -1;
      if (local_8 == 0) {
        dec->isdone = 1;
        uVar2 = (uint)(dec->rectid == 0);
        dec->rectid = uVar2;
        iVar3 = dec->rectid;
        (dec->slice).x = dec->rect[uVar2].x;
        (dec->slice).y = dec->rect[iVar3].y + (short)((int)(uVar1 + (uVar1 >> 0x1f)) >> 1);
      }
    } while (dec->isdone == 0);
  }
  dec->isdone = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ strKickCD__FP6CdlLOC(struct CdlLOC *loc /*$s0*/)
 // line 627, offset 0x8004d68c
	/* begin block 1 */
		// Start line: 628
		// Start offset: 0x8004D69C
	/* end block 1 */
	// End offset: 0x8004D6C4
	// End Line: 630

	/* begin block 2 */
		// Start line: 1452
	/* end block 2 */
	// End Line: 1453

	/* begin block 3 */
		// Start line: 1458
	/* end block 3 */
	// End Line: 1459

	/* begin block 4 */
		// Start line: 1458
	/* end block 4 */
	// End Line: 1459

void strKickCD__FP6CdlLOC(CdlLOC *loc)

{
  int iVar1;
  
  do {
    iVar1 = CdControl(0x15,(undefined *)loc,(undefined *)0x0);
  } while (iVar1 == 0);
  do {
    iVar1 = CdRead2(0x1c0);
  } while (iVar1 == 0);
  return;
}





