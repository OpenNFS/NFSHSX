#include "THISDUST.H"
#include "SCREENTRACKRECORDS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__19tScreenTrackRecordsRsT1PPcT3(struct tScreenTrackRecords *this /*$a0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$a3*/, char **swapFileName /*stack 16*/)
 // line 67, offset 0x80042648
	/* begin block 1 */
		// Start line: 68
		// Start offset: 0x80042648
	/* end block 1 */
	// End offset: 0x80042648
	// End Line: 68

	/* begin block 2 */
		// Start line: 134
	/* end block 2 */
	// End Line: 135

	/* begin block 3 */
		// Start line: 134
	/* end block 3 */
	// End Line: 135

void GetShapeInfo__19tScreenTrackRecordsRsT1PPcT3
               (tScreenTrackRecords *this,short *numPermShapes,short *numSwapShapes,
               char **permFileName,char **swapFileName)

{
  *numPermShapes = 0x28;
  *numSwapShapes = 0;
  *permFileName = &DAT_80011fd4;
  *swapFileName = (char *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__19tScreenTrackRecords(struct tScreenTrackRecords *this /*$s0*/)
 // line 78, offset 0x8004266c
	/* begin block 1 */
		// Start line: 79
		// Start offset: 0x8004266C
	/* end block 1 */
	// End offset: 0x8004266C
	// End Line: 79

	/* begin block 2 */
		// Start line: 152
	/* end block 2 */
	// End Line: 153

	/* begin block 3 */
		// Start line: 158
	/* end block 3 */
	// End Line: 159

	/* begin block 4 */
		// Start line: 158
	/* end block 4 */
	// End Line: 159

void Initialize__19tScreenTrackRecords(tScreenTrackRecords *this)

{
  short nShowTrack;
  short *psVar1;
  
  this->flare_intensity = 0;
  Initialize__7tScreen((tScreen *)this);
  psVar1 = reservememadr(s_trkrcrds_80011fdc,0x168,0x10);
  *(short **)((this->tScreen)._vf + 6) = psVar1;
  nShowTrack = Front_GetTrackRaced__Fv();
  Stattool_GetRecords__FsP13tRecordBuffer(nShowTrack,*(tRecordBuffer **)((this->tScreen)._vf + 6));
  this->flareextra = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__19tScreenTrackRecords(struct tScreenTrackRecords *this /*$s0*/)
 // line 97, offset 0x800426c4
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x800426C4
	/* end block 1 */
	// End offset: 0x800426C4
	// End Line: 98

	/* begin block 2 */
		// Start line: 191
	/* end block 2 */
	// End Line: 192

	/* begin block 3 */
		// Start line: 196
	/* end block 3 */
	// End Line: 197

	/* begin block 4 */
		// Start line: 196
	/* end block 4 */
	// End Line: 197

void Cleanup__19tScreenTrackRecords(tScreenTrackRecords *this)

{
  purgememadr(*(int *)((this->tScreen)._vf + 6));
  *(undefined4 *)((this->tScreen)._vf + 6) = 0;
  StatChk_ClearNewRecords__Fv();
  Cleanup__7tScreen((tScreen *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawOneRecord__19tScreenTrackRecordsibi(struct tScreenTrackRecords *this /*$s4*/, int index /*$s2*/, void * newrecord /*$s6*/, int y /*$s5*/)
 // line 113, offset 0x80042700
	/* begin block 1 */
		// Start line: 114
		// Start offset: 0x80042700
		// Variables:
	// 		char sBuildOutput[80]; // stack offset -112
	// 		enum tMenuTextState textState; // $s3
	/* end block 1 */
	// End offset: 0x80042940
	// End Line: 156

	/* begin block 2 */
		// Start line: 222
	/* end block 2 */
	// End Line: 223

	/* begin block 3 */
		// Start line: 228
	/* end block 3 */
	// End Line: 229

	/* begin block 4 */
		// Start line: 228
	/* end block 4 */
	// End Line: 229

void DrawOneRecord__19tScreenTrackRecordsibi
               (tScreenTrackRecords *this,int index,void *newrecord,int y)

{
  short y_00;
  int x;
  tMenuTextState textState;
  char *sMenuText;
  tRecordBuffer *ptVar1;
  tMenuTextState local_80;
  char acStack112 [80];
  
  local_80 = (uint)(newrecord != (void *)0x0) << 1;
  if (-1 < *(int *)(index * 0x14 + *(int *)((this->tScreen)._vf + 6) + 0x10)) {
    if (newrecord != (void *)0x0) {
      x = TextSys_WordX__Fi(0x247);
      ptVar1 = this->TrackRecords;
      Flare_2DHalo__Fiiiii
                (x + 3,y + 4,(int)(ptVar1->sName + ((uint)ptVar1 >> 0x1f)) >> 1,
                 ((int)ptVar1 << 1) / 3,0x17);
      x = TextSys_WordX__Fi(0x247);
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0,0,x,y,0,0,(tDrawShapeExtended *)0x0);
    }
    x = TextSys_WordX__Fi(0x24b);
    y_00 = (short)y;
    if (newrecord == (void *)0x0) {
      textState = textState_Selected;
    }
    else {
      textState = textState_Hilighted;
    }
    FETextRender_FullText__FPcss13tMenuTextType14tMenuTextStates
              ((char *)(*(int *)((this->tScreen)._vf + 6) + index * 0x14),(short)x,y_00,
               textType_TrackRecords,textState,0);
    sMenuText = TextSys_Word__Fi(*(int *)(index * 0x14 + *(int *)((this->tScreen)._vf + 6) + 8) +
                                 0x153);
    x = TextSys_WordX__Fi(0x24c);
    FETextRender_FullText__FPcss13tMenuTextType14tMenuTextStates
              (sMenuText,(short)x,y_00,textType_TrackRecords,local_80,0);
    x = *(int *)(index * 0x14 + *(int *)((this->tScreen)._vf + 6) + 0xc);
    if (x == 0) {
      sMenuText = TextSys_Word__Fi(0x261);
      sprintf(acStack112,sMenuText);
    }
    else {
      Stattool_ParseTime__FiPc(x,acStack112);
    }
    x = TextSys_WordX__Fi(0x24d);
    if (newrecord == (void *)0x0) {
      textState = (tMenuTextState)(index != 0);
    }
    else {
      textState = textState_Hilighted;
    }
    FETextRender_FullText__FPcss13tMenuTextType14tMenuTextStates
              (acStack112,(short)x,y_00,textType_TrackRecords,textState,0);
    Stattool_ParseTime__FiPc
              (*(int *)(index * 0x14 + *(int *)((this->tScreen)._vf + 6) + 0x10),acStack112);
    x = TextSys_WordX__Fi(0x24e);
    if ((index == 0) && (newrecord == (void *)0x0)) {
      local_80 = textState_Selected;
    }
    FETextRender_FullText__FPcss13tMenuTextType14tMenuTextStates
              (acStack112,(short)x,y_00,textType_TrackRecords,local_80,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawRecords__19tScreenTrackRecordss(struct tScreenTrackRecords *this /*$s4*/, short maxitem /*$fp*/)
 // line 161, offset 0x80042968
	/* begin block 1 */
		// Start line: 162
		// Start offset: 0x80042968
		// Variables:
	// 		short nLapIndicator; // $a0
	// 		short k; // $s2
	/* end block 1 */
	// End offset: 0x80042B18
	// End Line: 200

	/* begin block 2 */
		// Start line: 325
	/* end block 2 */
	// End Line: 326

	/* begin block 3 */
		// Start line: 331
	/* end block 3 */
	// End Line: 332

	/* begin block 4 */
		// Start line: 331
	/* end block 4 */
	// End Line: 332

void DrawRecords__19tScreenTrackRecordss(tScreenTrackRecords *this,short maxitem)

{
  int y;
  uint uVar1;
  char *sMenuText;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  tMenuTextState local_30;
  
  y = this->flare_intensity + 1;
  this->flare_intensity = y;
  if (0x3c < y) {
    this->flare_intensity = 0;
  }
  uVar4 = this->flare_intensity;
  uVar1 = uVar4 >> 0x1f;
  if (0x1e < (int)uVar4) {
    uVar1 = 0x3c - uVar4;
    uVar4 = uVar1 >> 0x1f;
  }
  this->TrackRecords = (tRecordBuffer *)((int)(uVar4 + uVar1) >> 1);
  this->TrackRecords = (tRecordBuffer *)((int)(this->TrackRecords + 1) * 0x80);
  y = Front_GetLapsForType__Fv();
  iVar5 = 9;
  if (y == 2) {
    iVar5 = 1;
  }
  iVar6 = 0;
  y = 0;
  do {
    y = y >> 0x10;
    if ((int)maxitem <= y) break;
    sMenuText = TextSys_Word__Fi(y + 599);
    iVar2 = TextSys_WordX__Fi(0x249);
    iVar3 = TextSys_WordY__Fi(y + 599);
    if (NewRecords[y] == (void *)0x0) {
      local_30 = textState_Unselected;
    }
    else {
      local_30 = textState_Hilighted;
    }
    FETextRender_FullText__FPcss13tMenuTextType14tMenuTextStates
              (sMenuText,(short)iVar2,(short)iVar3,textType_TrackRecords,local_30,0);
    iVar2 = (int)(short)iVar6;
    y = TextSys_WordY__Fi(iVar2 + 599);
    DrawOneRecord__19tScreenTrackRecordsibi(this,iVar2 + iVar5,NewRecords[iVar2],y);
    iVar6 = iVar6 + 1;
    y = iVar6 * 0x10000;
  } while (iVar6 * 0x10000 >> 0x10 < 8);
  if (8 < maxitem) {
    y = TextSys_WordY__Fi(0x260);
    DrawOneRecord__19tScreenTrackRecordsibi(this,0,NewBestLap,y);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__19tScreenTrackRecords(struct tScreenTrackRecords *this /*stack 0*/)
 // line 210, offset 0x80042b48
	/* begin block 1 */
		// Start line: 211
		// Start offset: 0x80042B48
		// Variables:
	// 		char string[50]; // stack offset -232
	// 		char string2[50]; // stack offset -176
	// 		int fade; // $v1
	// 		short linefadeval; // stack offset -96
	// 		short maxitem; // stack offset -88
	// 		short boxx; // stack offset -80
	// 		short boxy; // stack offset -72
	// 		short boxw; // stack offset -64
	// 		short midy; // stack offset -56
	// 		short j; // $s1
	// 		int Col; // $s6
	// 		int ColTextSel; // $fp
	// 		int ColTextBright; // $s2
	// 		struct tTexture_ShapeInfo *shape; // $a0
	// 		int lbx; // $s3
	// 		int tt; // $s2
	// 		struct tDrawShapeExtended drawflags; // stack offset -120

		/* begin block 1.1 */
			// Start line: 220
			// Start offset: 0x80042C24

			/* begin block 1.1.1 */
				// Start line: 220
				// Start offset: 0x80042C24
			/* end block 1.1.1 */
			// End offset: 0x80042C24
			// End Line: 220
		/* end block 1.1 */
		// End offset: 0x80042C24
		// End Line: 220

		/* begin block 1.2 */
			// Start line: 220
			// Start offset: 0x80042C24

			/* begin block 1.2.1 */
				// Start line: 220
				// Start offset: 0x80042C24
			/* end block 1.2.1 */
			// End offset: 0x80042C24
			// End Line: 220
		/* end block 1.2 */
		// End offset: 0x80042C24
		// End Line: 220

		/* begin block 1.3 */
			// Start line: 220
			// Start offset: 0x80042C24

			/* begin block 1.3.1 */
				// Start line: 220
				// Start offset: 0x80042C24
			/* end block 1.3.1 */
			// End offset: 0x80042C24
			// End Line: 220
		/* end block 1.3 */
		// End offset: 0x80042C24
		// End Line: 220

		/* begin block 1.4 */
			// Start line: 259
			// Start offset: 0x80042E38

			/* begin block 1.4.1 */
				// Start line: 268
				// Start offset: 0x80042EFC
				// Variables:
			// 		int xx; // $s0
			/* end block 1.4.1 */
			// End offset: 0x80042F7C
			// End Line: 275
		/* end block 1.4 */
		// End offset: 0x80042F84
		// End Line: 276
	/* end block 1 */
	// End offset: 0x800430AC
	// End Line: 291

	/* begin block 2 */
		// Start line: 418
	/* end block 2 */
	// End Line: 419

	/* begin block 3 */
		// Start line: 429
	/* end block 3 */
	// End Line: 430

	/* begin block 4 */
		// Start line: 429
	/* end block 4 */
	// End Line: 430

void DrawBackground__19tScreenTrackRecords(tScreenTrackRecords *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int col;
  char *__format;
  int w;
  int y;
  uint uVar4;
  short sVar5;
  int col_00;
  short sVar6;
  char acStack232 [56];
  char acStack176 [56];
  tDrawShapeExtended tStack120;
  short local_60;
  short local_58;
  short local_50;
  short local_48;
  short local_40;
  ushort local_38;
  int local_30;
  int local_2c;
  
  iVar2 = (int)(this->tScreen).fScreenFadeVal * 0x134;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x7f;
  }
  iVar2 = iVar2 >> 7;
  sVar1 = (short)iVar2;
  col_00 = iVar2 + -0xb4;
  sVar5 = (short)col_00;
  if (col_00 < 0) {
    sVar5 = 0;
  }
  if (0x80 < col_00) {
    sVar5 = 0x80;
  }
  if (iVar2 < 0) {
    sVar1 = 0;
  }
  if (0xb4 < iVar2) {
    sVar1 = 0xb4;
  }
  iVar2 = (iVar2 * 0x80) / 0xb4;
  sVar6 = (short)iVar2;
  if (iVar2 < 0) {
    sVar6 = 0;
  }
  if (0x80 < iVar2) {
    sVar6 = 0x80;
  }
  iVar2 = (0xb4 - (int)sVar1) / 0x14;
  col_00 = TextSys_WordX__Fi(0x248);
  iVar3 = TextSys_WordY__Fi(0x256);
  col = TextSys_WordX__Fi(0x24f);
  local_50 = (short)col_00;
  local_40 = (short)col - local_50;
  col_00 = TextSys_WordY__Fi(0x25f);
  local_38 = (ushort)col_00;
  col_00 = CalcFadeVal__Fii(kRGBVals[(uint)DAT_800515fe],(int)sVar5);
  col = CalcFadeVal__Fii(kRGBVals[(uint)DAT_800515ff],(int)sVar5);
  y = iVar2 * 0x10000;
  local_30 = y >> 0x10;
  DrawRecords__19tScreenTrackRecordss(this,(short)((uint)y >> 0x10));
  __format = TextSys_Word__Fi(0x251);
  y = Front_GetLapsForType__Fv();
  sprintf(acStack176,__format,y);
  sVar1 = Front_GetTrackRaced__Fv();
  __format = TextSys_Word__Fi((int)sVar1 + 0xd5);
  sprintf(acStack232,s__s__s_80011fe8,__format,acStack176);
  y = TextSys_WordY__Fi(0x255);
  FETextRender_FullTextRGB__FPcssics(acStack232,0x104,(short)y,col,0,2);
  col = textpixels(acStack232);
  y = TextSys_WordY__Fi(0x255);
  w = textpixels(acStack232);
  PSXDrawSquare__Fiiiii(0,0x104 - (col >> 1),y,w,9);
  uVar4 = (uint)*(ushort *)&gCurrentShapes[0x22].depth << 0x10;
  col = (int)uVar4 >> 0x10;
  y = (int)ticks % col;
  if (col == 0) {
    trap(0x1c00);
  }
  if ((col == -1) && (ticks == &DAT_80000000)) {
    trap(0x1800);
  }
  local_58 = (short)iVar2;
  iVar2 = (((int)uVar4 >> 0x11) + -2) - (int)*(short *)&gCurrentShapes[0x22].type;
  if ((int)(col + (uVar4 >> 0x1f)) >> 1 < y) {
    y = col - y;
  }
  local_60 = sVar6;
  local_48 = (short)iVar3;
  col = TextSys_WordY__Fi(0x255);
  local_2c = local_30;
  sVar1 = 0;
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x27,0,iVar2 + y,col + 1,(int)(this->tScreen).fScreenFadeVal,1,
             (tDrawShapeExtended *)0x0);
  col = TextSys_WordY__Fi(0x255);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x27,0,iVar2 - y,col + 1,(int)(this->tScreen).fScreenFadeVal,1,
             (tDrawShapeExtended *)0x0);
  tStack120.tint[0] = &DAT_00505050;
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x26,0x410,-2,0,(int)(this->tScreen).fScreenFadeVal,0,&tStack120);
  while (iVar2 = (int)sVar1, iVar2 < 3) {
    col = TextSys_WordX__Fi(iVar2 + 0x24c);
    __format = TextSys_Word__Fi(iVar2 + 0x252);
    FETextRender_FullTextRGB__FPcssics
              (__format,(short)col,(short)((uint)((iVar3 + 4) * 0x10000) >> 0x10),col_00,0,0);
    if (0 < local_2c) {
      iVar2 = -(int)sVar6 + 0x80;
      if (iVar2 < 0) {
        iVar2 = -(int)sVar6 + 0x8f;
      }
      PSXDrawSquare__Fiiiii((int)&DAT_00232323,col + -6,(int)(short)iVar3 + 2,2,iVar2 >> 4);
    }
    sVar1 = sVar1 + 1;
  }
  __format = TextSys_Word__Fi(0x262);
  iVar2 = TextSys_WordX__Fi(0x249);
  FETextRender_FullTextRGB__FPcssics
            (__format,(short)iVar2,(short)(((uint)local_38 + 3) * 0x10000 >> 0x10),col_00,0,0);
  iVar3 = (int)local_48;
  col_00 = (int)local_60;
  PSXDrawBrightEndLine__Fiiiiiiii
            ((int)&DAT_00232323,(int)local_50,iVar3 + 3,(int)local_40,-1,2,col_00,0x23);
  iVar2 = TextSys_WordX__Fi(0x24c);
  PSXDrawBrightEndLine__Fiiiiiiii
            ((int)&DAT_00232323,iVar2 + -6,iVar3 + 4,2,((int)(short)local_38 + -0xc) - iVar3,1,
             col_00,0);
  if (8 < local_58) {
    iVar2 = TextSys_WordX__Fi(0x24c);
    col_00 = TextSys_WordY__Fi(0x260);
    PSXDrawSquare__Fiiiii((int)&DAT_00232323,iVar2 + -6,col_00 + -1,2,8);
  }
  DrawBackgroundImage__7tScreeniiP18tTexture_ShapeInfoi((tScreen *)this,0xb,0x1b,gCurrentShapes,0);
  return;
}





