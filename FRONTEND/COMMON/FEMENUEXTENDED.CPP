#include "THISDUST.H"
#include "FEMENUEXTENDED.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MenuNFS4_SetHelpPos__FR4RECT(struct RECT *r /*$a0*/)
 // line 58, offset 0x80019fe8
	/* begin block 1 */
		// Start line: 59
		// Start offset: 0x80019FE8
	/* end block 1 */
	// End offset: 0x80019FE8
	// End Line: 60

	/* begin block 2 */
		// Start line: 116
	/* end block 2 */
	// End Line: 117

	/* begin block 3 */
		// Start line: 116
	/* end block 3 */
	// End Line: 117

	/* begin block 4 */
		// Start line: 117
	/* end block 4 */
	// End Line: 118

	/* begin block 5 */
		// Start line: 117
	/* end block 5 */
	// End Line: 118

void MenuNFS4_SetHelpPos__FR4RECT(RECT *r)

{
  gHelpPos.x = r->x;
  gHelpPos.y = r->y;
  gHelpPos.w = r->w;
  gHelpPos.h = r->h;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MenuNFS4_DrawTextBox__FiR4RECTissbT5(int helpText /*$s1*/, struct RECT *r /*$s3*/, int initialWidth /*$s5*/, short drawOffset /*$a3*/, int fSelFade /*stack 16*/, void * drawArrows /*stack 20*/, void * reflected /*stack 24*/)
 // line 66, offset 0x8001a018
	/* begin block 1 */
		// Start line: 67
		// Start offset: 0x8001A018
		// Variables:
	// 		struct DRAWENV *drenv; // $fp
	// 		struct DR_AREA *daprim; // $a0
	// 		struct RECT temp; // stack offset -136
	// 		int textpix; // $s4
	// 		int dist; // $s5
	// 		struct tDrawShapeExtended drawFlags; // stack offset -128
	// 		char buffer[64]; // stack offset -104
	// 		struct tTexture_ShapeInfo *shape; // $s0

		/* begin block 1.1 */
			// Start line: 82
			// Start offset: 0x8001A0B4

			/* begin block 1.1.1 */
				// Start line: 85
				// Start offset: 0x8001A0C4
				// Variables:
			// 		int col; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 100
					// Start offset: 0x8001A1C8

					/* begin block 1.1.1.1.1 */
						// Start line: 104
						// Start offset: 0x8001A254
						// Variables:
					// 		int ypos; // $s2
					/* end block 1.1.1.1.1 */
					// End offset: 0x8001A32C
					// End Line: 117
				/* end block 1.1.1.1 */
				// End offset: 0x8001A32C
				// End Line: 117
			/* end block 1.1.1 */
			// End offset: 0x8001A3D0
			// End Line: 128
		/* end block 1.1 */
		// End offset: 0x8001A3D0
		// End Line: 128
	/* end block 1 */
	// End offset: 0x8001A3D0
	// End Line: 137

	/* begin block 2 */
		// Start line: 129
	/* end block 2 */
	// End Line: 130

	/* begin block 3 */
		// Start line: 133
	/* end block 3 */
	// End Line: 134

	/* begin block 4 */
		// Start line: 133
	/* end block 4 */
	// End Line: 134

/* WARNING: Could not reconcile some variable overlaps */

void MenuNFS4_DrawTextBox__FiR4RECTissbT5
               (int helpText,RECT *r,int initialWidth,short drawOffset,int fSelFade,void *drawArrows
               ,void *reflected)

{
  uint *puVar1;
  uint *puVar2;
  tTexture_ShapeInfo *ptVar3;
  DRAWENV *pDVar4;
  char *sMenuText;
  int iVar5;
  size_t sVar6;
  int col2;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 local_88;
  undefined4 local_84;
  tDrawShapeExtended tStack128;
  char acStack104 [64];
  
  pDVar4 = Draw_GetDRAWENV__Fii(Draw_gPlayer1View,gFlip);
  tStack128.tint[0] = CalcFadeVal__Fiii(0xb54200,(int)&DAT_0000bebe,(int)(short)fSelFade);
  if (reflected != (void *)0x0) {
    tStack128.tint[0] = CalcFadeVal__Fiii(0,tStack128.tint[0],0xe0 - (int)r->y);
  }
  DrawShape_SubtractNFS4RectEdges__FR4RECT(r);
  puVar2 = DAT_1f800004;
  puVar1 = DAT_1f800000;
  if (-1 < helpText) {
    local_84 = 0xf00200;
    local_88 = (uint)(ushort)(pDVar4->clip).y << 0x10;
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar7 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 3;
    *puVar1 = *puVar1 & 0xff000000 | uVar7;
    SetDrawArea((int)puVar2,(ushort *)&local_88);
    FETextRender_SetFont__Fi(0);
    sMenuText = TextSys_Word__Fi(helpText);
    sprintf(acStack104,(char *)&PTR_DAT_8001061c,sMenuText);
    s_upper__FPc(acStack104);
    iVar5 = textpixels(acStack104);
    sVar6 = strlen(acStack104);
    iVar5 = iVar5 - sVar6;
    iVar10 = iVar5;
    if (iVar5 < initialWidth) {
      iVar10 = initialWidth;
    }
    iVar10 = iVar10 + 0x19;
    col2 = CalcTextFadeSelToHi__F13tMenuTextTypess(textType_FlybyHelp,(short)fSelFade,0);
    if (reflected != (void *)0x0) {
      col2 = CalcFadeVal__Fiii(0,col2,0xf0 - (int)r->y);
    }
    sMenuText = TextSys_Word__Fi(helpText);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,(short)(((uint)(ushort)r->x + (uint)(ushort)drawOffset) * 0x10000 >> 0x10),
               (short)(((uint)(ushort)r->y + 4) * 0x10000 >> 0x10),col2,0,0);
    sMenuText = TextSys_Word__Fi(helpText);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,
               (short)((((uint)(ushort)r->x + (uint)(ushort)drawOffset) - iVar10) * 0x10000 >> 0x10)
               ,(short)(((uint)(ushort)r->y + 4) * 0x10000 >> 0x10),col2,0,0);
    if (drawArrows != (void *)0x0) {
      col2 = (int)r->y + ((int)((uint)(ushort)r->h << 0x10) >> 0x11);
      if (reflected == (void *)0x0) {
        col2 = col2 + 2;
      }
      iVar9 = (int)drawOffset;
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (10,0x118,(int)r->x + iVar9 + -10,col2,0,0,&tStack128);
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (0xb,0x118,(int)r->x + iVar9 + iVar5 + 8,col2,0,0,&tStack128);
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (10,0x118,(((int)r->x + iVar9) - iVar10) + -10,col2,0,0,&tStack128);
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (0xb,0x118,(((int)r->x + iVar9) - iVar10) + iVar5 + 8,col2,0,0,&tStack128);
    }
    puVar2 = DAT_1f800004;
    puVar1 = DAT_1f800000;
    local_88._2_2_ = (short)((uint)*(undefined4 *)r >> 0x10);
    local_84._0_2_ = (short)*(uint *)&r->w;
    local_88 = CONCAT22(local_88._2_2_ + (pDVar4->clip).y,(short)*(undefined4 *)r + 2);
    local_84 = *(uint *)&r->w & 0xffff0000 | (uint)(ushort)((short)local_84 - 4);
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar7 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 3;
    *puVar1 = *puVar1 & 0xff000000 | uVar7;
    SetDrawArea((int)puVar2,(ushort *)&local_88);
  }
  ptVar3 = gHelpShapes;
  local_88._2_2_ = (short)(*(uint *)r >> 0x10);
  uVar7 = *(uint *)r & 0xffff;
  local_88 = uVar7 | (uint)(ushort)(local_88._2_2_ + 1U) << 0x10;
  local_84._2_2_ = (short)(*(uint *)&r->w >> 0x10);
  uVar8 = ((*(uint *)&r->w & 0xffff) - 1) -
          ((int)((uint)*(ushort *)&gHelpShapes[0x1b].clutID << 0x10) >> 0x11);
  local_88._0_2_ = (short)uVar7;
  local_84 = uVar8 & 0xffff | (uint)(ushort)(local_84._2_2_ - 2) << 0x10;
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x1e,8,(int)(short)local_88 + ((int)(uVar8 * 0x10000) >> 0x10),
             (int)(short)(local_88._2_2_ + 1U),0,0,(tDrawShapeExtended *)0x0);
  PSXDrawSquare__Fiiiii
            (0,(int)(short)local_88,(int)local_88._2_2_,(int)(short)local_84,
             (int)*(short *)((int)&ptVar3[0x1b].clutID + 2));
  return;
}



// decompiled code
// original method signature: 
// struct tMenuItemGoToMenuNFS4Button * /*$ra*/ __27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii(struct tMenuItemGoToMenuNFS4Button *this /*$s0*/, unsigned int textDescription /*$a1*/, struct tMenu *newMenu /*$a2*/, TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress OnButtonPress /*$a3*/, int firstFrame /*stack 16*/, int numFrames /*stack 20*/)
 // line 152, offset 0x8001a4ac
	/* begin block 1 */
		// Start line: 153
		// Start offset: 0x8001A4AC
	/* end block 1 */
	// End offset: 0x8001A4AC
	// End Line: 153

	/* begin block 2 */
		// Start line: 300
	/* end block 2 */
	// End Line: 301

	/* begin block 3 */
		// Start line: 330
	/* end block 3 */
	// End Line: 331

	/* begin block 4 */
		// Start line: 330
	/* end block 4 */
	// End Line: 331

tMenuItemGoToMenuNFS4Button *
__27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii
          (tMenuItemGoToMenuNFS4Button *this,uint textDescription,tMenu *newMenu,
          TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress
          OnButtonPress,int firstFrame,int numFrames)

{
  __23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v
            ((tMenuItemGoToMenuButton *)this,textDescription,newMenu,
             (TDRFuncPtr___23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v3OnButtonPress)
             OnButtonPress);
  *(undefined4 *)(this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf = 0x80010908;
  *(undefined2 *)&(this->tMenuItemGoToMenuButton).fOnButtonPress = 0xe;
  *(undefined2 *)((int)&(this->tMenuItemGoToMenuButton).fOnButtonPress + 2) = 0;
  *(undefined2 *)&this->fOrdinalPos = 0;
  *(undefined2 *)((int)&this->fOrdinalPos + 2) = 0;
  (this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem.fNumFrames = numFrames;
  (this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem.fButtonImage = firstFrame;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._27tMenuItemGoToMenuNFS4Button(struct tMenuItemGoToMenuNFS4Button *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 164, offset 0x8001a514
	/* begin block 1 */
		// Start line: 165
		// Start offset: 0x8001A514
	/* end block 1 */
	// End offset: 0x8001A514
	// End Line: 165

	/* begin block 2 */
		// Start line: 363
	/* end block 2 */
	// End Line: 364

	/* begin block 3 */
		// Start line: 367
	/* end block 3 */
	// End Line: 368

	/* begin block 4 */
		// Start line: 367
	/* end block 4 */
	// End Line: 368

void ___27tMenuItemGoToMenuNFS4Button(tMenuItemGoToMenuNFS4Button *this,int __in_chrg)

{
  *(undefined4 *)(this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf = 0x80010908;
  ___23tMenuItemGoToMenuButton((tMenuItemGoToMenuButton *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__27tMenuItemGoToMenuNFS4Buttoniib(struct tMenuItemGoToMenuNFS4Button *this /*$s1*/, int x /*$s3*/, int y /*$s4*/, void * selected /*$s2*/)
 // line 168, offset 0x8001a53c
	/* begin block 1 */
		// Start line: 169
		// Start offset: 0x8001A53C
		// Variables:
	// 		struct RECT rect; // stack offset -96
	// 		short dist; // $a0
	// 		char buffer[64]; // stack offset -88

		/* begin block 1.1 */
			// Start line: 191
			// Start offset: 0x8001A618

			/* begin block 1.1.1 */
				// Start line: 191
				// Start offset: 0x8001A618
				// Variables:
			// 		struct tMenuItem *this; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 191
					// Start offset: 0x8001A618
				/* end block 1.1.1.1 */
				// End offset: 0x8001A618
				// End Line: 191
			/* end block 1.1.1 */
			// End offset: 0x8001A618
			// End Line: 191
		/* end block 1.1 */
		// End offset: 0x8001A64C
		// End Line: 194
	/* end block 1 */
	// End offset: 0x8001A798
	// End Line: 212

	/* begin block 2 */
		// Start line: 371
	/* end block 2 */
	// End Line: 372

	/* begin block 3 */
		// Start line: 375
	/* end block 3 */
	// End Line: 376

	/* begin block 4 */
		// Start line: 375
	/* end block 4 */
	// End Line: 376

void Draw__27tMenuItemGoToMenuNFS4Buttoniib
               (tMenuItemGoToMenuNFS4Button *this,int x,int y,void *selected)

{
  short sVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  short sVar5;
  RECT local_60;
  char acStack88 [64];
  
  if ((selected != (void *)0x0) ||
     (sVar5 = 0xe, 1 < (int)*(short *)&(this->tMenuItemGoToMenuButton).fOnButtonPress + -0xe)) {
    FETextRender_SetFont__Fi(0);
    pcVar2 = TextSys_Word__Fi((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem.
                              fTextDescription);
    sprintf(acStack88,(char *)&PTR_DAT_8001061c,pcVar2);
    s_upper__FPc(acStack88);
    iVar3 = textpixels(acStack88);
    sVar4 = strlen(acStack88);
    sVar5 = 0xa5;
    if (0x8b < (int)((iVar3 - sVar4) * 0x10000) >> 0x10) {
      sVar5 = (short)(iVar3 - sVar4) + 0x19;
    }
    sVar1 = *(short *)&(this->tMenuItemGoToMenuButton).fOnButtonPress;
    *(short *)&(this->tMenuItemGoToMenuButton).fOnButtonPress = sVar1 + -2;
    if (selected == (void *)0x0) {
      *(short *)&(this->tMenuItemGoToMenuButton).fOnButtonPress = sVar1 + -4;
    }
    sVar5 = *(short *)&(this->tMenuItemGoToMenuButton).fOnButtonPress + sVar5;
    if (-1 < *(short *)&(this->tMenuItemGoToMenuButton).fOnButtonPress) goto LAB_8001a618;
  }
  *(short *)&(this->tMenuItemGoToMenuButton).fOnButtonPress = sVar5;
LAB_8001a618:
  if ((((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem.fFlags ^ 1) & 1) == 0) {
    sVar5 = *(short *)((int)&this->fOrdinalPos + 2) + -0xc;
  }
  else {
    sVar5 = *(short *)((int)&this->fOrdinalPos + 2) + 0xc;
  }
  *(short *)((int)&this->fOrdinalPos + 2) = sVar5;
  sVar5 = *(short *)((int)&this->fOrdinalPos + 2);
  if (sVar5 < 0) {
    *(undefined2 *)((int)&this->fOrdinalPos + 2) = 0;
  }
  else {
    if (0x80 < sVar5) {
      *(undefined2 *)((int)&this->fOrdinalPos + 2) = 0x80;
    }
  }
  local_60.h = 0xb;
  sVar5 = *(short *)((int)&(this->tMenuItemGoToMenuButton).fOnButtonPress + 2);
  if (*(short *)((int)&this->fOrdinalPos + 2) <
      *(short *)((int)&(this->tMenuItemGoToMenuButton).fOnButtonPress + 2)) {
    sVar5 = *(short *)((int)&this->fOrdinalPos + 2);
  }
  iVar3 = (int)sVar5 * 0x73;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x7f;
  }
  local_60.w = (short)(iVar3 >> 7);
  local_60.x = (short)x;
  local_60.y = (short)y;
  MenuNFS4_DrawTextBox__FiR4RECTissbT5
            ((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem.fTextDescription,
             &local_60,0x8c,*(short *)&(this->tMenuItemGoToMenuButton).fOnButtonPress,
             (int)(this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem.fSelFade,
             (void *)0x0,(void *)0x0);
  if (((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem.fFlags & 0x200) != 0) {
    Font_SetBlitter__FPFiiPviiP12charactertbli_v(FontUpsideDownBlit__FiiPviiP12charactertbli);
    local_60.y = 0x118 - (short)y;
    local_60.h = 0xb;
    sVar5 = *(short *)((int)&(this->tMenuItemGoToMenuButton).fOnButtonPress + 2);
    if (*(short *)((int)&this->fOrdinalPos + 2) <
        *(short *)((int)&(this->tMenuItemGoToMenuButton).fOnButtonPress + 2)) {
      sVar5 = *(short *)((int)&this->fOrdinalPos + 2);
    }
    iVar3 = (int)sVar5 * 0x73;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7f;
    }
    local_60.w = (short)(iVar3 >> 7);
    local_60.x = (short)x;
    MenuNFS4_DrawTextBox__FiR4RECTissbT5
              ((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem.fTextDescription,
               &local_60,0x8c,*(short *)&(this->tMenuItemGoToMenuButton).fOnButtonPress,
               (int)(this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem.fSelFade,
               (void *)0x0,&DAT_00000001);
    Font_ReSetBlitter__Fv();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__27tMenuItemGoToMenuNFS4Button(struct tMenuItemGoToMenuNFS4Button *this /*$a0*/)
 // line 216, offset 0x8001a7b8
	/* begin block 1 */
		// Start line: 217
		// Start offset: 0x8001A7B8
	/* end block 1 */
	// End offset: 0x8001A7B8
	// End Line: 218

	/* begin block 2 */
		// Start line: 466
	/* end block 2 */
	// End Line: 467

	/* begin block 3 */
		// Start line: 471
	/* end block 3 */
	// End Line: 472

	/* begin block 4 */
		// Start line: 471
	/* end block 4 */
	// End Line: 472

	/* begin block 5 */
		// Start line: 472
	/* end block 5 */
	// End Line: 473

	/* begin block 6 */
		// Start line: 472
	/* end block 6 */
	// End Line: 473

	/* begin block 7 */
		// Start line: 473
	/* end block 7 */
	// End Line: 474

	/* begin block 8 */
		// Start line: 473
	/* end block 8 */
	// End Line: 474

void TransitionOn__27tMenuItemGoToMenuNFS4Button(tMenuItemGoToMenuNFS4Button *this)

{
  *(undefined2 *)((int)&this->fOrdinalPos + 2) = 0;
  *(undefined2 *)&this->fOrdinalPos = 0xc;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__27tMenuItemGoToMenuNFS4Button(struct tMenuItemGoToMenuNFS4Button *this /*$a0*/)
 // line 222, offset 0x8001a7c8
	/* begin block 1 */
		// Start line: 223
		// Start offset: 0x8001A7C8
	/* end block 1 */
	// End offset: 0x8001A7C8
	// End Line: 224

	/* begin block 2 */
		// Start line: 480
	/* end block 2 */
	// End Line: 481

	/* begin block 3 */
		// Start line: 484
	/* end block 3 */
	// End Line: 485

	/* begin block 4 */
		// Start line: 484
	/* end block 4 */
	// End Line: 485

	/* begin block 5 */
		// Start line: 485
	/* end block 5 */
	// End Line: 486

	/* begin block 6 */
		// Start line: 485
	/* end block 6 */
	// End Line: 486

void TransitionOff__27tMenuItemGoToMenuNFS4Button(tMenuItemGoToMenuNFS4Button *this)

{
  *(undefined2 *)&this->fOrdinalPos = 0xfff4;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__27tMenuItemGoToMenuNFS4Button(struct tMenuItemGoToMenuNFS4Button *this /*$a0*/)
 // line 227, offset 0x8001a7d4
	/* begin block 1 */
		// Start line: 228
		// Start offset: 0x8001A7D4
	/* end block 1 */
	// End offset: 0x8001A7D4
	// End Line: 229

	/* begin block 2 */
		// Start line: 490
	/* end block 2 */
	// End Line: 491

	/* begin block 3 */
		// Start line: 494
	/* end block 3 */
	// End Line: 495

	/* begin block 4 */
		// Start line: 494
	/* end block 4 */
	// End Line: 495

	/* begin block 5 */
		// Start line: 495
	/* end block 5 */
	// End Line: 496

	/* begin block 6 */
		// Start line: 495
	/* end block 6 */
	// End Line: 496

void * TransitionIsFinished__27tMenuItemGoToMenuNFS4Button(tMenuItemGoToMenuNFS4Button *this)

{
  return (void *)(uint)(*(short *)&this->fOrdinalPos == 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__27tMenuItemGoToMenuNFS4Buttonb(struct tMenuItemGoToMenuNFS4Button *this /*$a0*/, void * selected /*$a1*/)
 // line 232, offset 0x8001a7e0
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x8001A7E0
	/* end block 1 */
	// End offset: 0x8001A824
	// End Line: 245

	/* begin block 2 */
		// Start line: 500
	/* end block 2 */
	// End Line: 501

	/* begin block 3 */
		// Start line: 504
	/* end block 3 */
	// End Line: 505

	/* begin block 4 */
		// Start line: 504
	/* end block 4 */
	// End Line: 505

void UpdateTransition__27tMenuItemGoToMenuNFS4Buttonb
               (tMenuItemGoToMenuNFS4Button *this,void *selected)

{
  short sVar1;
  
  sVar1 = *(short *)((int)&(this->tMenuItemGoToMenuButton).fOnButtonPress + 2) +
          *(short *)&this->fOrdinalPos;
  *(short *)((int)&(this->tMenuItemGoToMenuButton).fOnButtonPress + 2) = sVar1;
  if (sVar1 < 0) {
    *(undefined2 *)((int)&(this->tMenuItemGoToMenuButton).fOnButtonPress + 2) = 0;
  }
  else {
    if (sVar1 < 0x81) goto LAB_8001a824;
    *(undefined2 *)((int)&(this->tMenuItemGoToMenuButton).fOnButtonPress + 2) = 0x80;
  }
  *(undefined2 *)&this->fOrdinalPos = 0;
LAB_8001a824:
  UpdateTransition__9tMenuItemb((tMenuItem *)this,selected);
  return;
}



// decompiled code
// original method signature: 
// struct tMenuItemNFS4LeftRightChoice * /*$ra*/ __28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii(struct tMenuItemNFS4LeftRightChoice *this /*$s0*/, unsigned int textDescription /*$a1*/, struct tListIterator *dataPtr /*$a2*/, int firstFrame /*$s1*/, int numFrames /*stack 16*/)
 // line 248, offset 0x8001a83c
	/* begin block 1 */
		// Start line: 249
		// Start offset: 0x8001A83C
	/* end block 1 */
	// End offset: 0x8001A83C
	// End Line: 249

	/* begin block 2 */
		// Start line: 532
	/* end block 2 */
	// End Line: 533

	/* begin block 3 */
		// Start line: 536
	/* end block 3 */
	// End Line: 537

	/* begin block 4 */
		// Start line: 536
	/* end block 4 */
	// End Line: 537

tMenuItemNFS4LeftRightChoice *
__28tMenuItemNFS4LeftRightChoiceUiP13tListIteratorii
          (tMenuItemNFS4LeftRightChoice *this,uint textDescription,tListIterator *dataPtr,
          int firstFrame,int numFrames)

{
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)this,textDescription,dataPtr);
  *(undefined4 *)(this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf = 0x800108b0;
  (this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fButtonImage = firstFrame;
  *(undefined2 *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) = 0xe;
  *(undefined2 *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10) = 0;
  *(undefined2 *)&(this->tMenuItemLeftRightChoice).fData = 0;
  (this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fNumFrames = numFrames;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._28tMenuItemNFS4LeftRightChoice(struct tMenuItemNFS4LeftRightChoice *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 258, offset 0x8001a8a0
	/* begin block 1 */
		// Start line: 259
		// Start offset: 0x8001A8A0
	/* end block 1 */
	// End offset: 0x8001A8A0
	// End Line: 259

	/* begin block 2 */
		// Start line: 563
	/* end block 2 */
	// End Line: 564

	/* begin block 3 */
		// Start line: 567
	/* end block 3 */
	// End Line: 568

	/* begin block 4 */
		// Start line: 567
	/* end block 4 */
	// End Line: 568

void ___28tMenuItemNFS4LeftRightChoice(tMenuItemNFS4LeftRightChoice *this,int __in_chrg)

{
  *(undefined4 *)(this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf = 0x800108b0;
  ___24tMenuItemLeftRightChoice((tMenuItemLeftRightChoice *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__28tMenuItemNFS4LeftRightChoiceiib(struct tMenuItemNFS4LeftRightChoice *this /*$s0*/, int x /*$s2*/, int y /*$s3*/, void * selected /*$s1*/)
 // line 262, offset 0x8001a8c8
	/* begin block 1 */
		// Start line: 263
		// Start offset: 0x8001A8C8
		// Variables:
	// 		struct RECT rect; // stack offset -32
	// 		short dist; // $a0

		/* begin block 1.1 */
			// Start line: 282
			// Start offset: 0x8001A974

			/* begin block 1.1.1 */
				// Start line: 282
				// Start offset: 0x8001A974
				// Variables:
			// 		struct tMenuItem *this; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 282
					// Start offset: 0x8001A974
				/* end block 1.1.1.1 */
				// End offset: 0x8001A974
				// End Line: 282
			/* end block 1.1.1 */
			// End offset: 0x8001A974
			// End Line: 282
		/* end block 1.1 */
		// End offset: 0x8001A9A8
		// End Line: 285
	/* end block 1 */
	// End offset: 0x8001AB40
	// End Line: 303

	/* begin block 2 */
		// Start line: 571
	/* end block 2 */
	// End Line: 572

	/* begin block 3 */
		// Start line: 575
	/* end block 3 */
	// End Line: 576

	/* begin block 4 */
		// Start line: 575
	/* end block 4 */
	// End Line: 576

void Draw__28tMenuItemNFS4LeftRightChoiceiib
               (tMenuItemNFS4LeftRightChoice *this,int x,int y,void *selected)

{
  short sVar1;
  char *string;
  int iVar2;
  short sVar3;
  undefined *drawArrows;
  RECT local_20;
  
  if ((selected != (void *)0x0) ||
     (sVar3 = 0xe,
     1 < (int)*(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) +
         -0xe)) {
    FETextRender_SetFont__Fi(0);
    string = TextSys_Word__Fi((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.
                              fTextDescription);
    iVar2 = textpixels(string);
    sVar3 = 0xa5;
    if (0x8b < (short)iVar2) {
      sVar3 = (short)iVar2 + 0x19;
    }
    sVar1 = *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8);
    *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) = sVar1 + -2
    ;
    if (selected == (void *)0x0) {
      *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) =
           sVar1 + -4;
    }
    sVar3 = *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) +
            sVar3;
    if (-1 < *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8))
    goto LAB_8001a974;
  }
  *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) = sVar3;
LAB_8001a974:
  if ((((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fFlags ^ 1) & 1) == 0) {
    sVar3 = *(short *)((int)&(this->tMenuItemLeftRightChoice).fData + 2) + -0xc;
  }
  else {
    sVar3 = *(short *)((int)&(this->tMenuItemLeftRightChoice).fData + 2) + 0xc;
  }
  *(short *)((int)&(this->tMenuItemLeftRightChoice).fData + 2) = sVar3;
  sVar3 = *(short *)((int)&(this->tMenuItemLeftRightChoice).fData + 2);
  if (sVar3 < 0) {
    *(undefined2 *)((int)&(this->tMenuItemLeftRightChoice).fData + 2) = 0;
  }
  else {
    if (0x80 < sVar3) {
      *(undefined2 *)((int)&(this->tMenuItemLeftRightChoice).fData + 2) = 0x80;
    }
  }
  local_20.h = 0xb;
  sVar3 = *(short *)((int)&(this->tMenuItemLeftRightChoice).fData + 2);
  if (*(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10) <
      *(short *)((int)&(this->tMenuItemLeftRightChoice).fData + 2)) {
    sVar3 = *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10);
  }
  iVar2 = (int)sVar3 * 0x73;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x7f;
  }
  local_20.w = (short)(iVar2 >> 7);
  drawArrows = (undefined *)0x0;
  if ((selected != (void *)0x0) ||
     (*(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) != 0xe)) {
    drawArrows = &DAT_00000001;
  }
  local_20.x = (short)x;
  local_20.y = (short)y;
  MenuNFS4_DrawTextBox__FiR4RECTissbT5
            ((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fTextDescription,
             &local_20,0x8c,
             *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8),
             (int)(this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fSelFade,
             drawArrows,(void *)0x0);
  if (((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fFlags & 0x200) != 0) {
    Font_SetBlitter__FPFiiPviiP12charactertbli_v(FontUpsideDownBlit__FiiPviiP12charactertbli);
    local_20.y = 0x118 - (short)y;
    local_20.h = 0xb;
    sVar3 = *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10);
    if (*(short *)((int)&(this->tMenuItemLeftRightChoice).fData + 2) <
        *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10)) {
      sVar3 = *(short *)((int)&(this->tMenuItemLeftRightChoice).fData + 2);
    }
    iVar2 = (int)sVar3 * 0x73;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    local_20.w = (short)(iVar2 >> 7);
    drawArrows = (undefined *)0x0;
    if ((selected != (void *)0x0) ||
       (*(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) != 0xe))
    {
      drawArrows = &DAT_00000001;
    }
    local_20.x = (short)x;
    MenuNFS4_DrawTextBox__FiR4RECTissbT5
              ((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fTextDescription,
               &local_20,0x8c,
               *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8),
               (int)(this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fSelFade,
               drawArrows,&DAT_00000001);
    Font_ReSetBlitter__Fv();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__28tMenuItemNFS4LeftRightChoice(struct tMenuItemNFS4LeftRightChoice *this /*$a0*/)
 // line 307, offset 0x8001ab5c
	/* begin block 1 */
		// Start line: 308
		// Start offset: 0x8001AB5C
	/* end block 1 */
	// End offset: 0x8001AB5C
	// End Line: 309

	/* begin block 2 */
		// Start line: 660
	/* end block 2 */
	// End Line: 661

	/* begin block 3 */
		// Start line: 665
	/* end block 3 */
	// End Line: 666

	/* begin block 4 */
		// Start line: 665
	/* end block 4 */
	// End Line: 666

	/* begin block 5 */
		// Start line: 666
	/* end block 5 */
	// End Line: 667

	/* begin block 6 */
		// Start line: 666
	/* end block 6 */
	// End Line: 667

	/* begin block 7 */
		// Start line: 667
	/* end block 7 */
	// End Line: 668

	/* begin block 8 */
		// Start line: 667
	/* end block 8 */
	// End Line: 668

void TransitionOn__28tMenuItemNFS4LeftRightChoice(tMenuItemNFS4LeftRightChoice *this)

{
  *(undefined2 *)((int)&(this->tMenuItemLeftRightChoice).fData + 2) = 0;
  *(undefined2 *)&(this->tMenuItemLeftRightChoice).fData = 0xc;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__28tMenuItemNFS4LeftRightChoice(struct tMenuItemNFS4LeftRightChoice *this /*$a0*/)
 // line 313, offset 0x8001ab6c
	/* begin block 1 */
		// Start line: 314
		// Start offset: 0x8001AB6C
	/* end block 1 */
	// End offset: 0x8001AB6C
	// End Line: 315

	/* begin block 2 */
		// Start line: 674
	/* end block 2 */
	// End Line: 675

	/* begin block 3 */
		// Start line: 678
	/* end block 3 */
	// End Line: 679

	/* begin block 4 */
		// Start line: 678
	/* end block 4 */
	// End Line: 679

	/* begin block 5 */
		// Start line: 679
	/* end block 5 */
	// End Line: 680

	/* begin block 6 */
		// Start line: 679
	/* end block 6 */
	// End Line: 680

void TransitionOff__28tMenuItemNFS4LeftRightChoice(tMenuItemNFS4LeftRightChoice *this)

{
  *(undefined2 *)&(this->tMenuItemLeftRightChoice).fData = 0xfff4;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__28tMenuItemNFS4LeftRightChoice(struct tMenuItemNFS4LeftRightChoice *this /*$a0*/)
 // line 318, offset 0x8001ab78
	/* begin block 1 */
		// Start line: 319
		// Start offset: 0x8001AB78
	/* end block 1 */
	// End offset: 0x8001AB78
	// End Line: 320

	/* begin block 2 */
		// Start line: 684
	/* end block 2 */
	// End Line: 685

	/* begin block 3 */
		// Start line: 688
	/* end block 3 */
	// End Line: 689

	/* begin block 4 */
		// Start line: 688
	/* end block 4 */
	// End Line: 689

	/* begin block 5 */
		// Start line: 689
	/* end block 5 */
	// End Line: 690

	/* begin block 6 */
		// Start line: 689
	/* end block 6 */
	// End Line: 690

void * TransitionIsFinished__28tMenuItemNFS4LeftRightChoice(tMenuItemNFS4LeftRightChoice *this)

{
  return (void *)(uint)(*(short *)&(this->tMenuItemLeftRightChoice).fData == 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__28tMenuItemNFS4LeftRightChoiceb(struct tMenuItemNFS4LeftRightChoice *this /*$a0*/, void * selected /*$a1*/)
 // line 323, offset 0x8001ab84
	/* begin block 1 */
		// Start line: 324
		// Start offset: 0x8001AB84
	/* end block 1 */
	// End offset: 0x8001ABC8
	// End Line: 336

	/* begin block 2 */
		// Start line: 694
	/* end block 2 */
	// End Line: 695

	/* begin block 3 */
		// Start line: 698
	/* end block 3 */
	// End Line: 699

	/* begin block 4 */
		// Start line: 698
	/* end block 4 */
	// End Line: 699

void UpdateTransition__28tMenuItemNFS4LeftRightChoiceb
               (tMenuItemNFS4LeftRightChoice *this,void *selected)

{
  short sVar1;
  
  sVar1 = *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10) +
          *(short *)&(this->tMenuItemLeftRightChoice).fData;
  *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10) = sVar1;
  if (sVar1 < 0) {
    *(undefined2 *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10) = 0;
  }
  else {
    if (sVar1 < 0x81) goto LAB_8001abc8;
    *(undefined2 *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10) = 0x80
    ;
  }
  *(undefined2 *)&(this->tMenuItemLeftRightChoice).fData = 0;
LAB_8001abc8:
  UpdateTransition__9tMenuItemb((tMenuItem *)this,selected);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__31tMenuItemOptionsLeftRightChoiceiib(struct tMenuItemOptionsLeftRightChoice *this /*$s1*/, int x /*$s4*/, int y /*$s5*/, void * selected /*$s6*/)
 // line 346, offset 0x8001abe0
	/* begin block 1 */
		// Start line: 347
		// Start offset: 0x8001ABE0
		// Variables:
	// 		struct RECT r; // stack offset -72
	// 		struct tTexture_ShapeInfo *left; // $s3
	// 		int col; // $s2
	// 		struct tDrawShapeExtended drawFlags; // stack offset -64
	/* end block 1 */
	// End offset: 0x8001AD4C
	// End Line: 371

	/* begin block 2 */
		// Start line: 733
	/* end block 2 */
	// End Line: 734

	/* begin block 3 */
		// Start line: 744
	/* end block 3 */
	// End Line: 745

	/* begin block 4 */
		// Start line: 744
	/* end block 4 */
	// End Line: 745

void Draw__31tMenuItemOptionsLeftRightChoiceiib
               (tMenuItemOptionsLeftRightChoice *this,int x,int y,void *selected)

{
  tTexture_ShapeInfo *ptVar1;
  short sVar2;
  int col;
  char *sMenuText;
  int iVar3;
  int iVar4;
  short y_00;
  RECT local_48;
  tDrawShapeExtended tStack64;
  
  ptVar1 = gHelpShapes;
  col = CalcTextFadeSelToHi__F13tMenuTextTypess
                  (textType_Options,
                   (this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fSelFade,0);
  sMenuText = TextSys_Word__Fi((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.
                               fTextDescription);
  y_00 = (short)((uint)((y + 3) * 0x10000) >> 0x10);
  FETextRender_FullTextRGB__FPcssics
            (sMenuText,(short)((uint)((x + 0x94) * 0x10000) >> 0x10),y_00,col,0,1);
  iVar4 = *(int *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 4);
  iVar3 = *(int *)(iVar4 + 0xc);
  sVar2 = (**(code **)(iVar3 + 0x1c))(iVar4 + (int)*(short *)(iVar3 + 0x18),0xffffffff);
  sMenuText = TextSys_Word__Fi((int)sVar2);
  FETextRender_FullTextRGB__FPcssics
            (sMenuText,
             (short)((uint)((((int)((uint)ptVar1[0x24].tpage << 0x10) >> 0x11) + x + 0xd9) * 0x10000
                           ) >> 0x10),y_00,col,0,2);
  tStack64.tint[0] =
       CalcFadeVal__Fiii(0xb54200,(int)&DAT_0000bebe,
                         (int)(this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.
                              fSelFade);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (10,0x118,x + 0xa6,y + 6,0,(uint)(selected == (void *)0x0),&tStack64);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0xb,0x118,(x - (int)(short)ptVar1[0x24].tpage) + 0x12f,y + 6,0,
             (uint)(selected == (void *)0x0),&tStack64);
  local_48.x = (short)x;
  local_48.y = (short)y;
  local_48.w = 0x129;
  local_48.h = ptVar1[0x24].clut;
  DrawShape_NFS4RoundRectangle__FiR4RECTs(-1,&local_48,(short)selected);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__29tMenuItemOptionsTwoItemChoice(struct tMenuItemOptionsTwoItemChoice *this /*$s0*/)
 // line 378, offset 0x8001adb8
	/* begin block 1 */
		// Start line: 379
		// Start offset: 0x8001ADB8
	/* end block 1 */
	// End offset: 0x8001ADB8
	// End Line: 379

	/* begin block 2 */
		// Start line: 818
	/* end block 2 */
	// End Line: 819

	/* begin block 3 */
		// Start line: 822
	/* end block 3 */
	// End Line: 823

	/* begin block 4 */
		// Start line: 822
	/* end block 4 */
	// End Line: 823

void TransitionOn__29tMenuItemOptionsTwoItemChoice(tMenuItemOptionsTwoItemChoice *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 4);
  iVar3 = *(int *)(iVar1 + 0xc);
  uVar2 = (**(code **)(iVar3 + 0x14))(iVar1 + (int)*(short *)(iVar3 + 0x10),0xffffffff);
  *(ushort *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) =
       (ushort)((uVar2 & 0xff) != 0) << 7;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__29tMenuItemOptionsTwoItemChoiceiib(struct tMenuItemOptionsTwoItemChoice *this /*$s2*/, int x /*$s4*/, int y /*$s5*/, void * selected /*$s6*/)
 // line 383, offset 0x8001ae14
	/* begin block 1 */
		// Start line: 384
		// Start offset: 0x8001AE14
		// Variables:
	// 		struct RECT r; // stack offset -72
	// 		struct tTexture_ShapeInfo *left; // $s3
	// 		int ColTextOn; // stack offset -40
	// 		int ColTextOff; // stack offset -36
	// 		int Col; // $s1
	// 		struct tDrawShapeExtended drawFlags; // stack offset -64

		/* begin block 1.1 */
			// Start line: 401
			// Start offset: 0x8001AEC0
			// Variables:
		// 		struct tListIterator *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 401
				// Start offset: 0x8001AEC0
			/* end block 1.1.1 */
			// End offset: 0x8001AEC0
			// End Line: 401
		/* end block 1.1 */
		// End offset: 0x8001AEC0
		// End Line: 401

		/* begin block 1.2 */
			// Start line: 401
			// Start offset: 0x8001AEC0
			// Variables:
		// 		struct tListIterator *this; // $v0

			/* begin block 1.2.1 */
				// Start line: 401
				// Start offset: 0x8001AEC0
			/* end block 1.2.1 */
			// End offset: 0x8001AEC0
			// End Line: 401
		/* end block 1.2 */
		// End offset: 0x8001AEC0
		// End Line: 401
	/* end block 1 */
	// End offset: 0x8001B030
	// End Line: 426

	/* begin block 2 */
		// Start line: 828
	/* end block 2 */
	// End Line: 829

	/* begin block 3 */
		// Start line: 832
	/* end block 3 */
	// End Line: 833

	/* begin block 4 */
		// Start line: 832
	/* end block 4 */
	// End Line: 833

void Draw__29tMenuItemOptionsTwoItemChoiceiib
               (tMenuItemOptionsTwoItemChoice *this,int x,int y,void *selected)

{
  tTexture_ShapeInfo *ptVar1;
  undefined2 uVar2;
  int col;
  uint uVar3;
  char *sMenuText;
  short fSelFade;
  int iVar4;
  RECT local_48;
  tDrawShapeExtended tStack64;
  int local_28;
  int local_24;
  
  ptVar1 = gHelpShapes;
  col = *(int *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 4);
  iVar4 = *(int *)(col + 0xc);
  uVar3 = (**(code **)(iVar4 + 0x14))(col + (int)*(short *)(iVar4 + 0x10),0xffffffff);
  if ((uVar3 & 0xff) == 0) {
    fSelFade = *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) +
               -0x40;
  }
  else {
    fSelFade = *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) +
               0x40;
  }
  *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) = fSelFade;
  fSelFade = *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8);
  if (((fSelFade < 1) || (uVar2 = 0x80, fSelFade < 0x80)) &&
     (uVar2 = *(undefined2 *)
               ((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8),
     fSelFade < 0)) {
    uVar2 = 0;
  }
  fSelFade = (this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fSelFade;
  *(undefined2 *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) = uVar2;
  col = CalcTextFadeSelToHi__F13tMenuTextTypess(textType_Options,fSelFade,0);
  CalcOnOffFade__F13tMenuTextTypesssRiT4
            (textType_Options,
             *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8),
             (this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fSelFade,0,&local_28,
             &local_24);
  sMenuText = TextSys_Word__Fi((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.
                               fTextDescription);
  fSelFade = (short)((uint)((y + 3) * 0x10000) >> 0x10);
  FETextRender_FullTextRGB__FPcssics
            (sMenuText,(short)((uint)((x + 0x94) * 0x10000) >> 0x10),fSelFade,col,0,1);
  sMenuText = TextSys_Word__Fi((int)***(short ***)
                                       ((this->tMenuItemLeftRightChoice).tMenuItemInteractive.
                                        tMenuItem._vf + 4));
  FETextRender_FullTextRGB__FPcssics
            (sMenuText,(short)((uint)((x + 0xb0) * 0x10000) >> 0x10),fSelFade,local_24,0,0);
  sMenuText = TextSys_Word__Fi((int)*(short *)(**(int **)((this->tMenuItemLeftRightChoice).
                                                          tMenuItemInteractive.tMenuItem._vf + 4) +
                                              2));
  FETextRender_FullTextRGB__FPcssics
            (sMenuText,(short)(((x - (uint)ptVar1[0x24].tpage) + 0x126) * 0x10000 >> 0x10),fSelFade,
             local_28,0,1);
  tStack64.tint[0] =
       CalcFadeVal__Fiii(0xb54200,(int)&DAT_0000bebe,
                         (int)(this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.
                              fSelFade);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (10,0x118,x + 0xa6,y + 6,0,(uint)(selected == (void *)0x0),&tStack64);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0xb,0x118,(x - (int)(short)ptVar1[0x24].tpage) + 0x12f,y + 6,0,
             (uint)(selected == (void *)0x0),&tStack64);
  local_48.x = (short)x;
  local_48.y = (short)y;
  local_48.w = 0x129;
  local_48.h = ptVar1[0x24].clut;
  DrawShape_NFS4RoundRectangle__FiR4RECTs(-1,&local_48,(short)selected);
  return;
}



// decompiled code
// original method signature: 
// struct tMenuNFS4 * /*$ra*/ __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme(struct tMenuNFS4 *this /*$s0*/, unsigned int flags /*$a1*/, struct tScreen *screenHandler /*$a2*/, struct tMenu *nextMenu /*$a3*/, struct tMenu *optionsMenu /*stack 16*/, TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress OnButtonPress /*stack 20*/, int title /*stack 24*/, struct tMenuItem *firstItem /*stack 28*/)
 // line 439, offset 0x8001b098
	/* begin block 1 */
		// Start line: 440
		// Start offset: 0x8001B098
	/* end block 1 */
	// End offset: 0x8001B098
	// End Line: 440

	/* begin block 2 */
		// Start line: 968
	/* end block 2 */
	// End Line: 969

	/* begin block 3 */
		// Start line: 979
	/* end block 3 */
	// End Line: 980

	/* begin block 4 */
		// Start line: 979
	/* end block 4 */
	// End Line: 980

tMenuNFS4 *
__9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
          (tMenuNFS4 *this,uint flags,tScreen *screenHandler,tMenu *nextMenu,tMenu *optionsMenu,
          TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
          OnButtonPress,int title,tMenuItem *firstItem)

{
  __5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenu *)this,flags,screenHandler,nextMenu,optionsMenu,
             (TDRFuncPtr___5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)
             OnButtonPress,(int)(short)title);
  *(undefined4 *)((this->tMenu)._vf + 2) = 0x800107a0;
  tMenuConstructor__5tMenuP9tMenuItemPv((tMenu *)this,firstItem,&stack0x00000020);
  return this;
}



// decompiled code
// original method signature: 
// struct tMenuNFS4 * /*$ra*/ __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs(struct tMenuNFS4 *this /*$s0*/, unsigned int flags /*$a1*/, struct tScreen *screenHandler /*$a2*/, struct tMenu *nextMenu /*$a3*/, struct tMenu *optionsMenu /*stack 16*/, TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress OnButtonPress /*stack 20*/, int title /*stack 24*/)
 // line 454, offset 0x8001b100
	/* begin block 1 */
		// Start line: 455
		// Start offset: 0x8001B100
	/* end block 1 */
	// End offset: 0x8001B100
	// End Line: 455

	/* begin block 2 */
		// Start line: 1009
	/* end block 2 */
	// End Line: 1010

	/* begin block 3 */
		// Start line: 1019
	/* end block 3 */
	// End Line: 1020

	/* begin block 4 */
		// Start line: 1019
	/* end block 4 */
	// End Line: 1020

tMenuNFS4 *
__9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
          (tMenuNFS4 *this,uint flags,tScreen *screenHandler,tMenu *nextMenu,tMenu *optionsMenu,
          TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress
          OnButtonPress,int title)

{
  __5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenu *)this,flags,screenHandler,nextMenu,optionsMenu,
             (TDRFuncPtr___5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)
             OnButtonPress,(int)(short)title);
  *(undefined4 *)((this->tMenu)._vf + 2) = 0x800107a0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._9tMenuNFS4(struct tMenuNFS4 *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 459, offset 0x8001b158
	/* begin block 1 */
		// Start line: 460
		// Start offset: 0x8001B158
	/* end block 1 */
	// End offset: 0x8001B158
	// End Line: 460

	/* begin block 2 */
		// Start line: 1026
	/* end block 2 */
	// End Line: 1027

	/* begin block 3 */
		// Start line: 1026
	/* end block 3 */
	// End Line: 1027

	/* begin block 4 */
		// Start line: 1030
	/* end block 4 */
	// End Line: 1031

	/* begin block 5 */
		// Start line: 1030
	/* end block 5 */
	// End Line: 1031

void ___9tMenuNFS4(tMenuNFS4 *this,int __in_chrg)

{
  *(undefined4 *)((this->tMenu)._vf + 2) = 0x800107a0;
  ___5tMenu((tMenu *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__9tMenuNFS4(struct tMenuNFS4 *this /*$s0*/)
 // line 463, offset 0x8001b180
	/* begin block 1 */
		// Start line: 464
		// Start offset: 0x8001B180

		/* begin block 1.1 */
			// Start line: 474
			// Start offset: 0x8001B1DC

			/* begin block 1.1.1 */
				// Start line: 475
				// Start offset: 0x8001B1F0

				/* begin block 1.1.1.1 */
					// Start line: 476
					// Start offset: 0x8001B1F0
					// Variables:
				// 		short item; // $a0

					/* begin block 1.1.1.1.1 */
						// Start line: 476
						// Start offset: 0x8001B1F0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 476
							// Start offset: 0x8001B20C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 476
								// Start offset: 0x8001B20C
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8001B20C
							// End Line: 476
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8001B20C
						// End Line: 476
					/* end block 1.1.1.1.1 */
					// End offset: 0x8001B20C
					// End Line: 476
				/* end block 1.1.1.1 */
				// End offset: 0x8001B220
				// End Line: 477
			/* end block 1.1.1 */
			// End offset: 0x8001B220
			// End Line: 477
		/* end block 1.1 */
		// End offset: 0x8001B220
		// End Line: 477
	/* end block 1 */
	// End offset: 0x8001B220
	// End Line: 477

	/* begin block 2 */
		// Start line: 1034
	/* end block 2 */
	// End Line: 1035

	/* begin block 3 */
		// Start line: 1038
	/* end block 3 */
	// End Line: 1039

	/* begin block 4 */
		// Start line: 1038
	/* end block 4 */
	// End Line: 1039

void Initialize__9tMenuNFS4(tMenuNFS4 *this)

{
  undefined uVar1;
  byte bVar2;
  _func_21 *p_Var3;
  uint *puVar4;
  int iVar5;
  
  Initialize__5tMenu((tMenu *)this);
  uVar1 = *(undefined *)&(this->tMenu).fCurrentItem;
  p_Var3 = (this->tMenu).fItemList[0];
  *(undefined4 *)((this->tMenu)._vf + 6) = 0;
  *(undefined4 *)((this->tMenu)._vf + 10) = 0;
  *(undefined *)&this->fInMenuTransition = 0;
  *(undefined *)((int)&this->fInItemTransition + 3) = uVar1;
  while (p_Var3 != (_func_21 *)0x0) {
    bVar2 = *(char *)&this->fInMenuTransition + 1;
    *(byte *)&this->fInMenuTransition = bVar2;
    p_Var3 = (this->tMenu).fItemList[(uint)bVar2];
  }
  iVar5 = 0;
  if (((this->tMenu).fFlags & 0x200) != 0) {
    while( true ) {
      puVar4 = *(uint **)((int)(this->tMenu).fItemList + ((iVar5 << 0x10) >> 0xe));
      iVar5 = iVar5 + 1;
      if (puVar4 == (uint *)0x0) break;
      *puVar4 = *puVar4 | 0x200;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__9tMenuNFS47tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuNFS4 *this /*$a0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyval /*$a2*/, struct tMenuCommand *command /*$a3*/)
 // line 481, offset 0x8001b230
	/* begin block 1 */
		// Start line: 482
		// Start offset: 0x8001B230
	/* end block 1 */
	// End offset: 0x8001B230
	// End Line: 482

	/* begin block 2 */
		// Start line: 1074
	/* end block 2 */
	// End Line: 1075

	/* begin block 3 */
		// Start line: 1079
	/* end block 3 */
	// End Line: 1080

	/* begin block 4 */
		// Start line: 1079
	/* end block 4 */
	// End Line: 1080

void ProcessInput__9tMenuNFS47tPlayerR13tInputKeyTypeR12tMenuCommand
               (tMenuNFS4 *this,tPlayer fromPlayer,tInputKeyType *keyval,tMenuCommand *command)

{
  ProcessInput__5tMenu7tPlayerR13tInputKeyTypeR12tMenuCommand
            ((tMenu *)this,fromPlayer,keyval,command);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__9tMenuNFS4(struct tMenuNFS4 *this /*$s1*/)
 // line 490, offset 0x8001b250
	/* begin block 1 */
		// Start line: 491
		// Start offset: 0x8001B250
		// Variables:
	// 		short i; // $s0
	/* end block 1 */
	// End offset: 0x8001B2C4
	// End Line: 494

	/* begin block 2 */
		// Start line: 1089
	/* end block 2 */
	// End Line: 1090

	/* begin block 3 */
		// Start line: 1097
	/* end block 3 */
	// End Line: 1098

	/* begin block 4 */
		// Start line: 1097
	/* end block 4 */
	// End Line: 1098

void TransitionOff__9tMenuNFS4(tMenuNFS4 *this)

{
  _func_21 *p_Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  p_Var1 = (this->tMenu).fItemList[0];
  iVar4 = 0;
  while (p_Var1 != (_func_21 *)0x0) {
    iVar3 = *(int *)((int)(this->tMenu).fItemList + ((iVar4 << 0x10) >> 0xe));
    iVar2 = *(int *)(iVar3 + 0x18);
    (**(code **)(iVar2 + 0x3c))(iVar3 + (int)*(short *)(iVar2 + 0x38));
    iVar4 = iVar4 + 1;
    p_Var1 = *(_func_21 **)((int)(this->tMenu).fItemList + (iVar4 * 0x10000 >> 0xe));
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__9tMenuNFS4(struct tMenuNFS4 *this /*$s1*/)
 // line 497, offset 0x8001b2d8
	/* begin block 1 */
		// Start line: 498
		// Start offset: 0x8001B2D8
		// Variables:
	// 		short i; // $s0
	/* end block 1 */
	// End offset: 0x8001B34C
	// End Line: 501

	/* begin block 2 */
		// Start line: 1107
	/* end block 2 */
	// End Line: 1108

	/* begin block 3 */
		// Start line: 1111
	/* end block 3 */
	// End Line: 1112

	/* begin block 4 */
		// Start line: 1111
	/* end block 4 */
	// End Line: 1112

void TransitionOn__9tMenuNFS4(tMenuNFS4 *this)

{
  _func_21 *p_Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  p_Var1 = (this->tMenu).fItemList[0];
  iVar4 = 0;
  while (p_Var1 != (_func_21 *)0x0) {
    iVar3 = *(int *)((int)(this->tMenu).fItemList + ((iVar4 << 0x10) >> 0xe));
    iVar2 = *(int *)(iVar3 + 0x18);
    (**(code **)(iVar2 + 0x44))(iVar3 + (int)*(short *)(iVar2 + 0x40));
    iVar4 = iVar4 + 1;
    p_Var1 = *(_func_21 **)((int)(this->tMenu).fItemList + (iVar4 * 0x10000 >> 0xe));
  }
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__9tMenuNFS4(struct tMenuNFS4 *this /*$s2*/)
 // line 504, offset 0x8001b360
	/* begin block 1 */
		// Start line: 505
		// Start offset: 0x8001B360
		// Variables:
	// 		short i; // $s1
	// 		void * result; // $s0
	/* end block 1 */
	// End offset: 0x8001B3E4
	// End Line: 512

	/* begin block 2 */
		// Start line: 1121
	/* end block 2 */
	// End Line: 1122

	/* begin block 3 */
		// Start line: 1125
	/* end block 3 */
	// End Line: 1126

	/* begin block 4 */
		// Start line: 1125
	/* end block 4 */
	// End Line: 1126

void * TransitionIsFinished__9tMenuNFS4(tMenuNFS4 *this)

{
  _func_21 *p_Var1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  
  puVar5 = &DAT_00000001;
  p_Var1 = (this->tMenu).fItemList[0];
  iVar6 = 0;
  while (p_Var1 != (_func_21 *)0x0) {
    iVar4 = *(int *)((int)(this->tMenu).fItemList + ((iVar6 << 0x10) >> 0xe));
    iVar2 = *(int *)(iVar4 + 0x18);
    uVar3 = (**(code **)(iVar2 + 0x4c))(iVar4 + (int)*(short *)(iVar2 + 0x48));
    puVar5 = (undefined *)(uint)(((uint)puVar5 & uVar3) != 0);
    iVar6 = iVar6 + 1;
    p_Var1 = *(_func_21 **)((int)(this->tMenu).fItemList + (iVar6 * 0x10000 >> 0xe));
  }
  return puVar5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__9tMenuNFS4(struct tMenuNFS4 *this /*$s1*/)
 // line 515, offset 0x8001b400
	/* begin block 1 */
		// Start line: 516
		// Start offset: 0x8001B400
		// Variables:
	// 		short i; // $s0
	/* end block 1 */
	// End offset: 0x8001B480
	// End Line: 520

	/* begin block 2 */
		// Start line: 1145
	/* end block 2 */
	// End Line: 1146

	/* begin block 3 */
		// Start line: 1149
	/* end block 3 */
	// End Line: 1150

	/* begin block 4 */
		// Start line: 1149
	/* end block 4 */
	// End Line: 1150

void UpdateTransition__9tMenuNFS4(tMenuNFS4 *this)

{
  _func_21 *p_Var1;
  int iVar2;
  int iVar3;
  
  p_Var1 = (this->tMenu).fItemList[0];
  iVar3 = 0;
  while (p_Var1 != (_func_21 *)0x0) {
    p_Var1 = (this->tMenu).fItemList[(int)(short)iVar3];
    iVar2 = *(int *)(p_Var1 + 0x18);
    (**(code **)(iVar2 + 0x54))
              (p_Var1 + (int)*(short *)(iVar2 + 0x50),
               (uint)((int)(short)iVar3 == (this->tMenu).fCurrentItem));
    iVar3 = iVar3 + 1;
    p_Var1 = *(_func_21 **)((int)(this->tMenu).fItemList + (iVar3 * 0x10000 >> 0xe));
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawItem__9tMenuNFS4i(struct tMenuNFS4 *this /*$a0*/, int item /*$a3*/)
 // line 523, offset 0x8001b494
	/* begin block 1 */
		// Start line: 524
		// Start offset: 0x8001B494
	/* end block 1 */
	// End offset: 0x8001B494
	// End Line: 524

	/* begin block 2 */
		// Start line: 1161
	/* end block 2 */
	// End Line: 1162

	/* begin block 3 */
		// Start line: 1165
	/* end block 3 */
	// End Line: 1166

	/* begin block 4 */
		// Start line: 1165
	/* end block 4 */
	// End Line: 1166

void DrawItem__9tMenuNFS4i(tMenuNFS4 *this,int item)

{
  _func_21 *p_Var1;
  int iVar2;
  
  p_Var1 = (this->tMenu).fItemList[item];
  iVar2 = *(int *)(p_Var1 + 0x18);
  (**(code **)(iVar2 + 0x2c))
            (p_Var1 + (int)*(short *)(iVar2 + 0x28),10,item * 0x12 + 0x2b,
             (uint)(item == (this->tMenu).fCurrentItem));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__9tMenuNFS4(struct tMenuNFS4 *this /*$s1*/)
 // line 534, offset 0x8001b4f4
	/* begin block 1 */
		// Start line: 535
		// Start offset: 0x8001B4F4
		// Variables:
	// 		short i; // $s0
	// 		struct tDrawShapeExtended drawFlags; // stack offset -40

		/* begin block 1.1 */
			// Start line: 544
			// Start offset: 0x8001B520
			// Variables:
		// 		struct tMenuItem *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 544
				// Start offset: 0x8001B520
			/* end block 1.1.1 */
			// End offset: 0x8001B520
			// End Line: 544
		/* end block 1.1 */
		// End offset: 0x8001B520
		// End Line: 544

		/* begin block 1.2 */
			// Start line: 544
			// Start offset: 0x8001B520

			/* begin block 1.2.1 */
				// Start line: 544
				// Start offset: 0x8001B520
			/* end block 1.2.1 */
			// End offset: 0x8001B520
			// End Line: 544
		/* end block 1.2 */
		// End offset: 0x8001B520
		// End Line: 544

		/* begin block 1.3 */
			// Start line: 544
			// Start offset: 0x8001B520

			/* begin block 1.3.1 */
				// Start line: 550
				// Start offset: 0x8001B558

				/* begin block 1.3.1.1 */
					// Start line: 551
					// Start offset: 0x8001B558

					/* begin block 1.3.1.1.1 */
						// Start line: 551
						// Start offset: 0x8001B558
					/* end block 1.3.1.1.1 */
					// End offset: 0x8001B558
					// End Line: 551
				/* end block 1.3.1.1 */
				// End offset: 0x8001B558
				// End Line: 551

				/* begin block 1.3.1.2 */
					// Start line: 551
					// Start offset: 0x8001B558
					// Variables:
				// 		struct tFEApplication *this; // $v0

					/* begin block 1.3.1.2.1 */
						// Start line: 551
						// Start offset: 0x8001B558
					/* end block 1.3.1.2.1 */
					// End offset: 0x8001B558
					// End Line: 551
				/* end block 1.3.1.2 */
				// End offset: 0x8001B558
				// End Line: 551
			/* end block 1.3.1 */
			// End offset: 0x8001B5D8
			// End Line: 552
		/* end block 1.3 */
		// End offset: 0x8001B5D8
		// End Line: 552
	/* end block 1 */
	// End offset: 0x8001B628
	// End Line: 557

	/* begin block 2 */
		// Start line: 1186
	/* end block 2 */
	// End Line: 1187

	/* begin block 3 */
		// Start line: 1192
	/* end block 3 */
	// End Line: 1193

	/* begin block 4 */
		// Start line: 1192
	/* end block 4 */
	// End Line: 1193

void Draw__9tMenuNFS4(tMenuNFS4 *this)

{
  short index;
  _func_21 *p_Var1;
  int iVar2;
  int iVar3;
  int y;
  tDrawShapeExtended tStack40;
  
  index = (this->tMenu).fTitle;
  if (-1 < index) {
    FETextRender_Title__Fs(index);
  }
  Initialize__5tMenu((tMenu *)this);
  p_Var1 = (this->tMenu).fItemList[(this->tMenu).fCurrentItem];
  iVar3 = *(int *)(p_Var1 + 0xc);
  iVar2 = *(int *)(p_Var1 + 0x10);
  if ((-1 < iVar3) && (0 < iVar2)) {
    if (iVar2 == 0) {
      trap(0x1c00);
    }
    if ((iVar2 == -1) && ((int)ticks >> 4 == -0x80000000)) {
      trap(0x1800);
    }
    y = 0x10;
    tStack40.tint[0] = 0xcec844;
    if (*(char *)&(FEApp->helpPopup).numItems != '\0') {
      y = 0x79;
    }
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (iVar3 + ((int)ticks >> 4) % iVar2,0x410,0x10,y,0,0,&tStack40);
  }
  p_Var1 = (this->tMenu).fItemList[0];
  iVar2 = 0;
  while (p_Var1 != (_func_21 *)0x0) {
    iVar3 = *(int *)((this->tMenu)._vf + 2);
    (**(code **)(iVar3 + 0x5c))
              ((int)&(this->tMenu).fFlags + (int)*(short *)(iVar3 + 0x58),(int)(short)iVar2);
    iVar2 = iVar2 + 1;
    p_Var1 = *(_func_21 **)((int)(this->tMenu).fItemList + (iVar2 * 0x10000 >> 0xe));
  }
  return;
}



// decompiled code
// original method signature: 
// struct tMenuNFS4TwoPlayer * /*$ra*/ __18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme(struct tMenuNFS4TwoPlayer *this /*$s0*/, unsigned int flags /*$a1*/, struct tScreen *screenHandler /*$a2*/, struct tMenu *nextMenu /*$a3*/, struct tMenu *optionsMenu /*stack 16*/, TDRFuncPtr___18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress OnButtonPress /*stack 20*/, int title /*stack 24*/, struct tMenuItem *firstItem /*stack 28*/)
 // line 566, offset 0x8001b63c
	/* begin block 1 */
		// Start line: 567
		// Start offset: 0x8001B63C
	/* end block 1 */
	// End offset: 0x8001B63C
	// End Line: 567

	/* begin block 2 */
		// Start line: 1247
	/* end block 2 */
	// End Line: 1248

	/* begin block 3 */
		// Start line: 1257
	/* end block 3 */
	// End Line: 1258

	/* begin block 4 */
		// Start line: 1257
	/* end block 4 */
	// End Line: 1258

tMenuNFS4TwoPlayer *
__18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
          (tMenuNFS4TwoPlayer *this,uint flags,tScreen *screenHandler,tMenu *nextMenu,
          tMenu *optionsMenu,
                    
          TDRFuncPtr___18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
          OnButtonPress,int title,tMenuItem *firstItem)

{
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenuNFS4 *)this,flags,screenHandler,nextMenu,optionsMenu,
             (TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)
             OnButtonPress,(int)(short)title);
  *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 2) = 0x80010740;
  (this->tMenuNFS4).tMenu.fChildMenu = (tMenu *)0x0;
  tMenuConstructor__5tMenuP9tMenuItemPv((tMenu *)this,firstItem,&stack0x00000020);
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._18tMenuNFS4TwoPlayer(struct tMenuNFS4TwoPlayer *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 575, offset 0x8001b6a8
	/* begin block 1 */
		// Start line: 576
		// Start offset: 0x8001B6A8
	/* end block 1 */
	// End offset: 0x8001B6A8
	// End Line: 576

	/* begin block 2 */
		// Start line: 1281
	/* end block 2 */
	// End Line: 1282

	/* begin block 3 */
		// Start line: 1285
	/* end block 3 */
	// End Line: 1286

	/* begin block 4 */
		// Start line: 1285
	/* end block 4 */
	// End Line: 1286

void ___18tMenuNFS4TwoPlayer(tMenuNFS4TwoPlayer *this,int __in_chrg)

{
  *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 2) = 0x80010740;
  ___9tMenuNFS4((tMenuNFS4 *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawItem__18tMenuNFS4TwoPlayeri(struct tMenuNFS4TwoPlayer *this /*$a0*/, int item /*$a1*/)
 // line 579, offset 0x8001b6d0
	/* begin block 1 */
		// Start line: 580
		// Start offset: 0x8001B6D0
		// Variables:
	// 		short y; // $t0

		/* begin block 1.1 */
			// Start line: 580
			// Start offset: 0x8001B6D0

			/* begin block 1.1.1 */
				// Start line: 580
				// Start offset: 0x8001B6D0
				// Variables:
			// 		struct tFEApplication *this; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 580
					// Start offset: 0x8001B6D0
				/* end block 1.1.1.1 */
				// End offset: 0x8001B6D0
				// End Line: 580
			/* end block 1.1.1 */
			// End offset: 0x8001B6D0
			// End Line: 580
		/* end block 1.1 */
		// End offset: 0x8001B6F4
		// End Line: 583
	/* end block 1 */
	// End offset: 0x8001B6F4
	// End Line: 588

	/* begin block 2 */
		// Start line: 1289
	/* end block 2 */
	// End Line: 1290

	/* begin block 3 */
		// Start line: 1293
	/* end block 3 */
	// End Line: 1294

	/* begin block 4 */
		// Start line: 1293
	/* end block 4 */
	// End Line: 1294

void DrawItem__18tMenuNFS4TwoPlayeri(tMenuNFS4TwoPlayer *this,int item)

{
  _func_21 *p_Var1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x2b;
  if (*(char *)&(FEApp->helpPopup).numItems == '\x01') {
    iVar3 = 0x94;
  }
  p_Var1 = (this->tMenuNFS4).tMenu.fItemList[item];
  iVar2 = *(int *)(p_Var1 + 0x18);
  (**(code **)(iVar2 + 0x2c))
            (p_Var1 + (int)*(short *)(iVar2 + 0x28),10,iVar3 + item * 0x12,
             (uint)(item == (this->tMenuNFS4).tMenu.fCurrentItem));
  return;
}



// decompiled code
// original method signature: 
// struct tMenuNFS4Bottom * /*$ra*/ __15tMenuNFS4BottomUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme(struct tMenuNFS4Bottom *this /*$s0*/, unsigned int flags /*$a1*/, struct tScreen *screenHandler /*$a2*/, struct tMenu *nextMenu /*$a3*/, struct tMenu *optionsMenu /*stack 16*/, TDRFuncPtr___15tMenuNFS4BottomUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress OnButtonPress /*stack 20*/, int title /*stack 24*/, struct tMenuItem *firstItem /*stack 28*/)
 // line 607, offset 0x8001b748
	/* begin block 1 */
		// Start line: 608
		// Start offset: 0x8001B748
	/* end block 1 */
	// End offset: 0x8001B748
	// End Line: 608

	/* begin block 2 */
		// Start line: 1329
	/* end block 2 */
	// End Line: 1330

	/* begin block 3 */
		// Start line: 1349
	/* end block 3 */
	// End Line: 1350

	/* begin block 4 */
		// Start line: 1349
	/* end block 4 */
	// End Line: 1350

tMenuNFS4Bottom *
__15tMenuNFS4BottomUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
          (tMenuNFS4Bottom *this,uint flags,tScreen *screenHandler,tMenu *nextMenu,
          tMenu *optionsMenu,
                    
          TDRFuncPtr___15tMenuNFS4BottomUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
          OnButtonPress,int title,tMenuItem *firstItem)

{
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenuNFS4 *)this,flags,screenHandler,nextMenu,optionsMenu,
             (TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)
             OnButtonPress,(int)(short)title);
  *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 2) = 0x800106e0;
  tMenuConstructor__5tMenuP9tMenuItemPv((tMenu *)this,firstItem,&stack0x00000020);
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._15tMenuNFS4Bottom(struct tMenuNFS4Bottom *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 615, offset 0x8001b7b0
	/* begin block 1 */
		// Start line: 616
		// Start offset: 0x8001B7B0
	/* end block 1 */
	// End offset: 0x8001B7B0
	// End Line: 616

	/* begin block 2 */
		// Start line: 1369
	/* end block 2 */
	// End Line: 1370

	/* begin block 3 */
		// Start line: 1373
	/* end block 3 */
	// End Line: 1374

	/* begin block 4 */
		// Start line: 1373
	/* end block 4 */
	// End Line: 1374

void ___15tMenuNFS4Bottom(tMenuNFS4Bottom *this,int __in_chrg)

{
  *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 2) = 0x800106e0;
  ___9tMenuNFS4((tMenuNFS4 *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__15tMenuNFS4Bottom(struct tMenuNFS4Bottom *this /*$s1*/)
 // line 636, offset 0x8001b7d8
	/* begin block 1 */
		// Start line: 637
		// Start offset: 0x8001B7D8
		// Variables:
	// 		short i; // $s0
	// 		struct RECT r; // stack offset -24
	/* end block 1 */
	// End offset: 0x8001B884
	// End Line: 652

	/* begin block 2 */
		// Start line: 1394
	/* end block 2 */
	// End Line: 1395

	/* begin block 3 */
		// Start line: 1415
	/* end block 3 */
	// End Line: 1416

	/* begin block 4 */
		// Start line: 1415
	/* end block 4 */
	// End Line: 1416

void Draw__15tMenuNFS4Bottom(tMenuNFS4Bottom *this)

{
  _func_21 *p_Var1;
  int iVar2;
  int iVar3;
  RECT local_18;
  
  local_18.x = 0x39;
  local_18.y = 0xc6;
  local_18.w = 0x72;
  local_18.h = 0xb;
  MenuNFS4_SetHelpPos__FR4RECT(&local_18);
  p_Var1 = (this->tMenuNFS4).tMenu.fItemList[0];
  iVar3 = 0;
  while (p_Var1 != (_func_21 *)0x0) {
    p_Var1 = (this->tMenuNFS4).tMenu.fItemList[(int)(short)iVar3];
    iVar2 = *(int *)(p_Var1 + 0x18);
    (**(code **)(iVar2 + 0x2c))
              (p_Var1 + (int)*(short *)(iVar2 + 0x28),0,0,
               (uint)((int)(short)iVar3 == (this->tMenuNFS4).tMenu.fCurrentItem));
    iVar3 = iVar3 + 1;
    p_Var1 = *(_func_21 **)((int)(this->tMenuNFS4).tMenu.fItemList + (iVar3 * 0x10000 >> 0xe));
  }
  return;
}



// decompiled code
// original method signature: 
// struct tMenuBlank * /*$ra*/ __10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs(struct tMenuBlank *this /*$s0*/, unsigned int flags /*$a1*/, struct tScreen *screenHandler /*$a2*/, struct tMenu *nextMenu /*$a3*/, struct tMenu *optionsMenu /*stack 16*/, TDRFuncPtr___10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress OnButtonPress /*stack 20*/, int title /*stack 24*/)
 // line 659, offset 0x8001b898
	/* begin block 1 */
		// Start line: 660
		// Start offset: 0x8001B898
	/* end block 1 */
	// End offset: 0x8001B898
	// End Line: 660

	/* begin block 2 */
		// Start line: 1464
	/* end block 2 */
	// End Line: 1465

	/* begin block 3 */
		// Start line: 1472
	/* end block 3 */
	// End Line: 1473

	/* begin block 4 */
		// Start line: 1472
	/* end block 4 */
	// End Line: 1473

tMenuBlank *
__10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
          (tMenuBlank *this,uint flags,tScreen *screenHandler,tMenu *nextMenu,tMenu *optionsMenu,
          TDRFuncPtr___10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress
          OnButtonPress,int title)

{
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenuNFS4 *)this,flags,screenHandler,nextMenu,optionsMenu,
             (TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)
             OnButtonPress,(int)(short)title);
  *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 2) = 0x80010680;
  *(undefined **)&(this->tMenuNFS4).tMenu.fNeverAnyEnabled = &DAT_00000001;
  (this->tMenuNFS4).tMenu.VertHelp = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._10tMenuBlank(struct tMenuBlank *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 667, offset 0x8001b8fc
	/* begin block 1 */
		// Start line: 668
		// Start offset: 0x8001B8FC
	/* end block 1 */
	// End offset: 0x8001B8FC
	// End Line: 668

	/* begin block 2 */
		// Start line: 1488
	/* end block 2 */
	// End Line: 1489

	/* begin block 3 */
		// Start line: 1492
	/* end block 3 */
	// End Line: 1493

	/* begin block 4 */
		// Start line: 1492
	/* end block 4 */
	// End Line: 1493

void ___10tMenuBlank(tMenuBlank *this,int __in_chrg)

{
  *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 2) = 0x80010680;
  ___9tMenuNFS4((tMenuNFS4 *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__10tMenuBlank(struct tMenuBlank *this /*$s0*/)
 // line 671, offset 0x8001b924
	/* begin block 1 */
		// Start line: 672
		// Start offset: 0x8001B924
	/* end block 1 */
	// End offset: 0x8001B978
	// End Line: 683

	/* begin block 2 */
		// Start line: 1496
	/* end block 2 */
	// End Line: 1497

	/* begin block 3 */
		// Start line: 1500
	/* end block 3 */
	// End Line: 1501

	/* begin block 4 */
		// Start line: 1500
	/* end block 4 */
	// End Line: 1501

void Draw__10tMenuBlank(tMenuBlank *this)

{
  int iVar1;
  
  if (*(int *)((this->tMenuNFS4).tMenu._vf + 10) != 0) {
    iVar1 = *(int *)((this->tMenuNFS4).tMenu._vf + 2);
    (**(code **)(iVar1 + 0x3c))
              ((int)&(this->tMenuNFS4).tMenu.fFlags + (int)*(short *)(iVar1 + 0x38));
    *(short *)&(this->tMenuNFS4).fInItemTransition =
         *(short *)&(this->tMenuNFS4).fInItemTransition +
         (short)*(char *)((int)&(this->tMenuNFS4).fInItemTransition + 2);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__10tMenuBlank7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuBlank *this /*$a0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyval /*$a2*/, struct tMenuCommand *command /*$a3*/)
 // line 688, offset 0x8001b988
	/* begin block 1 */
		// Start line: 689
		// Start offset: 0x8001B988
	/* end block 1 */
	// End offset: 0x8001B9BC
	// End Line: 701

	/* begin block 2 */
		// Start line: 1528
	/* end block 2 */
	// End Line: 1529

	/* begin block 3 */
		// Start line: 1534
	/* end block 3 */
	// End Line: 1535

	/* begin block 4 */
		// Start line: 1534
	/* end block 4 */
	// End Line: 1535

void ProcessInput__10tMenuBlank7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tMenuBlank *this,tPlayer fromPlayer,tInputKeyType *keyval,tMenuCommand *command)

{
  if ((*keyval == kInput_KeyType_Up) || (*keyval == kInput_KeyType_Down)) {
    *keyval = kInput_KeyType_AlreadyProcessed;
  }
  else {
    (this->tMenuNFS4).tMenu.fItemList[0] = (_func_21 *)0x0;
    ProcessInput__5tMenu7tPlayerR13tInputKeyTypeR12tMenuCommand
              ((tMenu *)this,fromPlayer,keyval,command);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__10tMenuBlank(struct tMenuBlank *this /*$a0*/)
 // line 705, offset 0x8001b9cc
	/* begin block 1 */
		// Start line: 706
		// Start offset: 0x8001B9CC
	/* end block 1 */
	// End offset: 0x8001B9CC
	// End Line: 706

	/* begin block 2 */
		// Start line: 1563
	/* end block 2 */
	// End Line: 1564

	/* begin block 3 */
		// Start line: 1568
	/* end block 3 */
	// End Line: 1569

	/* begin block 4 */
		// Start line: 1568
	/* end block 4 */
	// End Line: 1569

	/* begin block 5 */
		// Start line: 1569
	/* end block 5 */
	// End Line: 1570

	/* begin block 6 */
		// Start line: 1569
	/* end block 6 */
	// End Line: 1570

void Initialize__10tMenuBlank(tMenuBlank *this)

{
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ DebounceKeys__10tMenuBlank(struct tMenuBlank *this /*$a0*/)
 // line 720, offset 0x8001b9d4
	/* begin block 1 */
		// Start line: 721
		// Start offset: 0x8001B9D4
	/* end block 1 */
	// End offset: 0x8001B9D4
	// End Line: 722

	/* begin block 2 */
		// Start line: 1584
	/* end block 2 */
	// End Line: 1585

	/* begin block 3 */
		// Start line: 1598
	/* end block 3 */
	// End Line: 1599

	/* begin block 4 */
		// Start line: 1598
	/* end block 4 */
	// End Line: 1599

	/* begin block 5 */
		// Start line: 1599
	/* end block 5 */
	// End Line: 1600

	/* begin block 6 */
		// Start line: 1599
	/* end block 6 */
	// End Line: 1600

long DebounceKeys__10tMenuBlank(tMenuBlank *this)

{
  return -1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__10tMenuBlank(struct tMenuBlank *this /*$a0*/)
 // line 728, offset 0x8001b9dc
	/* begin block 1 */
		// Start line: 729
		// Start offset: 0x8001B9DC
	/* end block 1 */
	// End offset: 0x8001B9DC
	// End Line: 730

	/* begin block 2 */
		// Start line: 1607
	/* end block 2 */
	// End Line: 1608

	/* begin block 3 */
		// Start line: 1614
	/* end block 3 */
	// End Line: 1615

	/* begin block 4 */
		// Start line: 1614
	/* end block 4 */
	// End Line: 1615

	/* begin block 5 */
		// Start line: 1615
	/* end block 5 */
	// End Line: 1616

	/* begin block 6 */
		// Start line: 1615
	/* end block 6 */
	// End Line: 1616

void TransitionOff__10tMenuBlank(tMenuBlank *this)

{
  *(undefined *)((int)&(this->tMenuNFS4).fInItemTransition + 2) = 8;
  *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 10) = 1;
  *(undefined2 *)&(this->tMenuNFS4).fInItemTransition = 0xff90;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__10tMenuBlank(struct tMenuBlank *this /*$a0*/)
 // line 735, offset 0x8001b9f8
	/* begin block 1 */
		// Start line: 736
		// Start offset: 0x8001B9F8
	/* end block 1 */
	// End offset: 0x8001B9F8
	// End Line: 737

	/* begin block 2 */
		// Start line: 1624
	/* end block 2 */
	// End Line: 1625

	/* begin block 3 */
		// Start line: 1628
	/* end block 3 */
	// End Line: 1629

	/* begin block 4 */
		// Start line: 1628
	/* end block 4 */
	// End Line: 1629

	/* begin block 5 */
		// Start line: 1629
	/* end block 5 */
	// End Line: 1630

	/* begin block 6 */
		// Start line: 1629
	/* end block 6 */
	// End Line: 1630

void TransitionOn__10tMenuBlank(tMenuBlank *this)

{
  *(undefined *)((int)&(this->tMenuNFS4).fInItemTransition + 2) = 0xf8;
  *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 10) = 1;
  *(undefined2 *)&(this->tMenuNFS4).fInItemTransition = 0;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__10tMenuBlank(struct tMenuBlank *this /*$a0*/)
 // line 742, offset 0x8001ba10
	/* begin block 1 */
		// Start line: 743
		// Start offset: 0x8001BA10
	/* end block 1 */
	// End offset: 0x8001BA40
	// End Line: 752

	/* begin block 2 */
		// Start line: 1638
	/* end block 2 */
	// End Line: 1639

	/* begin block 3 */
		// Start line: 1642
	/* end block 3 */
	// End Line: 1643

	/* begin block 4 */
		// Start line: 1642
	/* end block 4 */
	// End Line: 1643

	/* begin block 5 */
		// Start line: 1643
	/* end block 5 */
	// End Line: 1644

	/* begin block 6 */
		// Start line: 1643
	/* end block 6 */
	// End Line: 1644

void * TransitionIsFinished__10tMenuBlank(tMenuBlank *this)

{
  uint uVar1;
  
  if (*(char *)((int)&(this->tMenuNFS4).fInItemTransition + 2) < '\x01') {
    uVar1 = (uint)(*(short *)&(this->tMenuNFS4).fInItemTransition < -0x6f) ^ 1;
  }
  else {
    uVar1 = (uint)(int)*(short *)&(this->tMenuNFS4).fInItemTransition >> 0x1f;
  }
  *(uint *)((this->tMenuNFS4).tMenu._vf + 10) = uVar1;
  return (void *)(*(uint *)((this->tMenuNFS4).tMenu._vf + 10) ^ 1);
}



// decompiled code
// original method signature: 
// struct tMenuOptions * /*$ra*/ __12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme(struct tMenuOptions *this /*$s0*/, unsigned int flags /*$a1*/, struct tScreen *screenHandler /*$a2*/, struct tMenu *nextMenu /*$a3*/, struct tMenu *optionsMenu /*stack 16*/, TDRFuncPtr___12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme5OnButtonPress OnButtonPress /*stack 20*/, int title /*stack 24*/, int player /*stack 28*/, struct tMenuItem *firstItem /*stack 32*/)
 // line 762, offset 0x8001ba4c
	/* begin block 1 */
		// Start line: 763
		// Start offset: 0x8001BA4C
	/* end block 1 */
	// End offset: 0x8001BA4C
	// End Line: 763

	/* begin block 2 */
		// Start line: 1671
	/* end block 2 */
	// End Line: 1672

	/* begin block 3 */
		// Start line: 1682
	/* end block 3 */
	// End Line: 1683

	/* begin block 4 */
		// Start line: 1682
	/* end block 4 */
	// End Line: 1683

tMenuOptions *
__12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme
          (tMenuOptions *this,uint flags,tScreen *screenHandler,tMenu *nextMenu,tMenu *optionsMenu,
                    
          TDRFuncPtr___12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme5OnButtonPress
          OnButtonPress,int title,int player,tMenuItem *firstItem)

{
  __9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenuNFS4 *)this,flags,screenHandler,nextMenu,optionsMenu,
             (TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)
             OnButtonPress,(int)(short)title);
  *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 2) = 0x80010620;
  tMenuConstructor__5tMenuP9tMenuItemPv((tMenu *)this,firstItem,&stack0x00000024);
  *(short *)&(this->tMenuNFS4).fNumItems = (short)player;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._12tMenuOptions(struct tMenuOptions *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 771, offset 0x8001bac4
	/* begin block 1 */
		// Start line: 772
		// Start offset: 0x8001BAC4
	/* end block 1 */
	// End offset: 0x8001BAC4
	// End Line: 772

	/* begin block 2 */
		// Start line: 1704
	/* end block 2 */
	// End Line: 1705

	/* begin block 3 */
		// Start line: 1708
	/* end block 3 */
	// End Line: 1709

	/* begin block 4 */
		// Start line: 1708
	/* end block 4 */
	// End Line: 1709

void ___12tMenuOptions(tMenuOptions *this,int __in_chrg)

{
  *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 2) = 0x80010620;
  ___9tMenuNFS4((tMenuNFS4 *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__12tMenuOptions(struct tMenuOptions *this /*$s2*/)
 // line 781, offset 0x8001baec
	/* begin block 1 */
		// Start line: 782
		// Start offset: 0x8001BAEC
		// Variables:
	// 		short numItems; // $s0
	// 		short i; // $s0
	// 		unsigned long deltaTicks; // $v1
	// 		long x; // $s4
	// 		long y; // $s3
	// 		long w; // $s6
	// 		long h; // $s5
	// 		long itemY; // $s1

		/* begin block 1.1 */
			// Start line: 782
			// Start offset: 0x8001BAEC

			/* begin block 1.1.1 */
				// Start line: 793
				// Start offset: 0x8001BB58

				/* begin block 1.1.1.1 */
					// Start line: 793
					// Start offset: 0x8001BB58

					/* begin block 1.1.1.1.1 */
						// Start line: 793
						// Start offset: 0x8001BB58
					/* end block 1.1.1.1.1 */
					// End offset: 0x8001BB58
					// End Line: 793
				/* end block 1.1.1.1 */
				// End offset: 0x8001BB58
				// End Line: 793
			/* end block 1.1.1 */
			// End offset: 0x8001BBB8
			// End Line: 810
		/* end block 1.1 */
		// End offset: 0x8001BBF0
		// End Line: 815

		/* begin block 1.2 */
			// Start line: 826
			// Start offset: 0x8001BC34

			/* begin block 1.2.1 */
				// Start line: 827
				// Start offset: 0x8001BC44

				/* begin block 1.2.1.1 */
					// Start line: 831
					// Start offset: 0x8001BC84

					/* begin block 1.2.1.1.1 */
						// Start line: 832
						// Start offset: 0x8001BC8C

						/* begin block 1.2.1.1.1.1 */
							// Start line: 834
							// Start offset: 0x8001BCAC

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 834
								// Start offset: 0x8001BCAC

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 834
									// Start offset: 0x8001BCAC
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x8001BCAC
								// End Line: 834
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x8001BCAC
							// End Line: 834
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8001BCF0
						// End Line: 837
					/* end block 1.2.1.1.1 */
					// End offset: 0x8001BCF0
					// End Line: 837
				/* end block 1.2.1.1 */
				// End offset: 0x8001BCF8
				// End Line: 839
			/* end block 1.2.1 */
			// End offset: 0x8001BCF8
			// End Line: 839
		/* end block 1.2 */
		// End offset: 0x8001BCF8
		// End Line: 839
	/* end block 1 */
	// End offset: 0x8001BD9C
	// End Line: 852

	/* begin block 2 */
		// Start line: 1718
	/* end block 2 */
	// End Line: 1719

	/* begin block 3 */
		// Start line: 1728
	/* end block 3 */
	// End Line: 1729

	/* begin block 4 */
		// Start line: 1728
	/* end block 4 */
	// End Line: 1729

void Draw__12tMenuOptions(tMenuOptions *this)

{
  char cVar1;
  short index;
  int iVar2;
  uchar *puVar3;
  uint *puVar4;
  int iVar5;
  int y;
  int x;
  uint uVar6;
  int h;
  uint w;
  
  index = GetNumberEnabledItems__5tMenu((tMenu *)this);
  w = 0x140;
  iVar2 = *(int *)((this->tMenuNFS4).tMenu._vf + 2);
  (**(code **)(iVar2 + 0x3c))((int)&(this->tMenuNFS4).tMenu.fFlags + (int)*(short *)(iVar2 + 0x38));
  uVar6 = (int)index * 0x12;
  if (*(int *)((this->tMenuNFS4).tMenu._vf + 10) == 0) {
    if (*(char *)((int)&(this->tMenuNFS4).fInItemTransition + 2) < '\0') {
      return;
    }
  }
  else {
    puVar3 = ticks + -*(int *)&(this->tMenuNFS4).fTransitionVal;
    if ((uchar *)0x20 < puVar3) {
      cVar1 = *(char *)((int)&(this->tMenuNFS4).fInItemTransition + 2);
      puVar3 = (uchar *)0x20;
      *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 10) = 0;
      if (cVar1 < '\0') {
        return;
      }
    }
    if (*(char *)((int)&(this->tMenuNFS4).fInItemTransition + 2) < '\0') {
      w = 0x140 - ((uint)((int)puVar3 * 0x140) >> 5);
      uVar6 = uVar6 - (uVar6 * (int)puVar3 >> 5);
    }
    else {
      w = (uint)((int)puVar3 * 0x140) >> 5;
      uVar6 = uVar6 * (int)puVar3 >> 5;
    }
  }
  h = uVar6 + 0x12;
  y = 0xf0 - h >> 1;
  index = *(short *)&(this->tMenuNFS4).fNumItems;
  x = (int)(screenwidth + -w) >> 1;
  iVar2 = 0xf0 - h >> 2;
  if (index == 0) {
    y = y - iVar2;
  }
  else {
    if (index == 1) {
      y = y + iVar2;
    }
  }
  if (*(int *)((this->tMenuNFS4).tMenu._vf + 10) == 0) {
    index = (this->tMenuNFS4).tMenu.fTitle;
    if (-1 < index) {
      FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
                (index,(short)((uint)((x + ((int)w >> 1)) * 0x10000) >> 0x10),
                 (short)((uint)((y + 2) * 0x10000) >> 0x10),2,textState_Hilighted,
                 textType_PopUpTitle);
    }
    index = 0;
    iVar2 = y + 0x12;
    while( true ) {
      puVar4 = (uint *)(this->tMenuNFS4).tMenu.fItemList[(int)index];
      if (puVar4 == (uint *)0x0) break;
      iVar5 = iVar2;
      if (((*puVar4 ^ 1) & 1) != 0) {
        iVar5 = iVar2 + 0x12;
        (**(code **)(puVar4[6] + 0x2c))
                  ((int)puVar4 + (int)*(short *)(puVar4[6] + 0x28),x + 10,iVar2,
                   (uint)((int)index == (this->tMenuNFS4).tMenu.fCurrentItem));
      }
      index = index + 1;
      iVar2 = iVar5;
    }
  }
  PSXDrawSquare__Fiiiii(0,x,y,w,0xc);
  PSXDrawTransSquare__Fiiiiis(0,x,y + h,w,-2,1);
  PSXDrawTransSquare__Fiiiiis(0,x,y + 0xc,4,uVar6 + 4,1);
  PSXDrawTransSquare__Fiiiiis(0,x + w,y + 0xc,-4,uVar6 + 4,1);
  PSXDrawTransSquare__Fiiiiis(0,x,y,w,h,1);
  FeDraw_SetABRMode__Fi(0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__12tMenuOptions(struct tMenuOptions *this /*$a0*/)
 // line 855, offset 0x8001bdc4
	/* begin block 1 */
		// Start line: 856
		// Start offset: 0x8001BDC4

		/* begin block 1.1 */
			// Start line: 856
			// Start offset: 0x8001BDC4

			/* begin block 1.1.1 */
				// Start line: 856
				// Start offset: 0x8001BDC4
			/* end block 1.1.1 */
			// End offset: 0x8001BDC4
			// End Line: 856
		/* end block 1.1 */
		// End offset: 0x8001BDC4
		// End Line: 856
	/* end block 1 */
	// End offset: 0x8001BDC4
	// End Line: 856

	/* begin block 2 */
		// Start line: 1888
	/* end block 2 */
	// End Line: 1889

	/* begin block 3 */
		// Start line: 1891
	/* end block 3 */
	// End Line: 1892

	/* begin block 4 */
		// Start line: 1891
	/* end block 4 */
	// End Line: 1892

void TransitionOff__12tMenuOptions(tMenuOptions *this)

{
  uchar *puVar1;
  
  *(undefined *)((int)&(this->tMenuNFS4).fInItemTransition + 2) = 0xff;
  puVar1 = ticks;
  *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 10) = 1;
  *(uchar **)&(this->tMenuNFS4).fTransitionVal = puVar1;
  AudioCmn_PlayFESFX__Fi(0x12);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__12tMenuOptions(struct tMenuOptions *this /*$s1*/)
 // line 863, offset 0x8001be00
	/* begin block 1 */
		// Start line: 864
		// Start offset: 0x8001BE00

		/* begin block 1.1 */
			// Start line: 864
			// Start offset: 0x8001BE00

			/* begin block 1.1.1 */
				// Start line: 865
				// Start offset: 0x8001BE18

				/* begin block 1.1.1.1 */
					// Start line: 867
					// Start offset: 0x8001BE28

					/* begin block 1.1.1.1.1 */
						// Start line: 867
						// Start offset: 0x8001BE28

						/* begin block 1.1.1.1.1.1 */
							// Start line: 867
							// Start offset: 0x8001BE28
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8001BE28
						// End Line: 867
					/* end block 1.1.1.1.1 */
					// End offset: 0x8001BE28
					// End Line: 867
				/* end block 1.1.1.1 */
				// End offset: 0x8001BE5C
				// End Line: 869
			/* end block 1.1.1 */
			// End offset: 0x8001BE5C
			// End Line: 869
		/* end block 1.1 */
		// End offset: 0x8001BE64
		// End Line: 871

		/* begin block 1.2 */
			// Start line: 872
			// Start offset: 0x8001BE64

			/* begin block 1.2.1 */
				// Start line: 872
				// Start offset: 0x8001BE64
			/* end block 1.2.1 */
			// End offset: 0x8001BE64
			// End Line: 872
		/* end block 1.2 */
		// End offset: 0x8001BE64
		// End Line: 872
	/* end block 1 */
	// End offset: 0x8001BE64
	// End Line: 875

	/* begin block 2 */
		// Start line: 1904
	/* end block 2 */
	// End Line: 1905

	/* begin block 3 */
		// Start line: 1908
	/* end block 3 */
	// End Line: 1909

	/* begin block 4 */
		// Start line: 1908
	/* end block 4 */
	// End Line: 1909

void TransitionOn__12tMenuOptions(tMenuOptions *this)

{
  uchar *puVar1;
  uint *puVar2;
  tMenuOptions *ptVar3;
  
  ptVar3 = this;
  while (puVar2 = (uint *)(ptVar3->tMenuNFS4).tMenu.fItemList[0], puVar2 != (uint *)0x0) {
    if (((*puVar2 ^ 1) & 1) != 0) {
      (**(code **)(puVar2[6] + 0x44))((int)puVar2 + (int)*(short *)(puVar2[6] + 0x40));
    }
    ptVar3 = (tMenuOptions *)&(ptVar3->tMenuNFS4).tMenu.fTitle;
  }
  *(undefined *)((int)&(this->tMenuNFS4).fInItemTransition + 2) = 1;
  puVar1 = ticks;
  *(undefined4 *)((this->tMenuNFS4).tMenu._vf + 10) = 1;
  *(uchar **)&(this->tMenuNFS4).fTransitionVal = puVar1;
  AudioCmn_PlayFESFX__Fi(0xf);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__12tMenuOptions(struct tMenuOptions *this /*$a0*/)
 // line 878, offset 0x8001be98
	/* begin block 1 */
		// Start line: 879
		// Start offset: 0x8001BE98

		/* begin block 1.1 */
			// Start line: 879
			// Start offset: 0x8001BE98

			/* begin block 1.1.1 */
				// Start line: 879
				// Start offset: 0x8001BE98
			/* end block 1.1.1 */
			// End offset: 0x8001BE98
			// End Line: 879
		/* end block 1.1 */
		// End offset: 0x8001BE98
		// End Line: 879
	/* end block 1 */
	// End offset: 0x8001BE98
	// End Line: 879

	/* begin block 2 */
		// Start line: 1938
	/* end block 2 */
	// End Line: 1939

	/* begin block 3 */
		// Start line: 1942
	/* end block 3 */
	// End Line: 1943

	/* begin block 4 */
		// Start line: 1942
	/* end block 4 */
	// End Line: 1943

void * TransitionIsFinished__12tMenuOptions(tMenuOptions *this)

{
  uchar *puVar1;
  
  puVar1 = ticks + -*(int *)&(this->tMenuNFS4).fTransitionVal;
  *(uint *)((this->tMenuNFS4).tMenu._vf + 10) = (uint)(puVar1 < (uchar *)0x20);
  return (void *)((uint)(puVar1 < (uchar *)0x20) ^ 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__12tMenuOptions7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuOptions *this /*$a0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyval /*$a2*/, struct tMenuCommand *command /*$a3*/)
 // line 884, offset 0x8001bebc
	/* begin block 1 */
		// Start line: 885
		// Start offset: 0x8001BEBC
	/* end block 1 */
	// End offset: 0x8001BED8
	// End Line: 890

	/* begin block 2 */
		// Start line: 1950
	/* end block 2 */
	// End Line: 1951

	/* begin block 3 */
		// Start line: 1954
	/* end block 3 */
	// End Line: 1955

	/* begin block 4 */
		// Start line: 1954
	/* end block 4 */
	// End Line: 1955

void ProcessInput__12tMenuOptions7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tMenuOptions *this,tPlayer fromPlayer,tInputKeyType *keyval,tMenuCommand *command)

{
  if (*keyval == kInput_KeyType_Square) {
    *keyval = kInput_KeyType_Triangle;
  }
  ProcessInput__9tMenuNFS47tPlayerR13tInputKeyTypeR12tMenuCommand
            ((tMenuNFS4 *)this,fromPlayer,keyval,command);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsSubMenu__12tMenuOptions(struct tMenuOptions *this /*$a0*/)
 // line 893, offset 0x8001bef0
	/* begin block 1 */
		// Start line: 894
		// Start offset: 0x8001BEF0
	/* end block 1 */
	// End offset: 0x8001BEF0
	// End Line: 895

	/* begin block 2 */
		// Start line: 1968
	/* end block 2 */
	// End Line: 1969

	/* begin block 3 */
		// Start line: 1972
	/* end block 3 */
	// End Line: 1973

	/* begin block 4 */
		// Start line: 1972
	/* end block 4 */
	// End Line: 1973

	/* begin block 5 */
		// Start line: 1973
	/* end block 5 */
	// End Line: 1974

	/* begin block 6 */
		// Start line: 1973
	/* end block 6 */
	// End Line: 1974

void * IsSubMenu__12tMenuOptions(tMenuOptions *this)

{
  return &DAT_00000001;
}





