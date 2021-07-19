#include "THISDUST.H"
#include "FEMENUOPTIONS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ CalcPulsateYellow__Fv()
 // line 77, offset 0x8001bf48
	/* begin block 1 */
		// Start line: 78
		// Start offset: 0x8001BF48
		// Variables:
	// 		int pulsateval; // $a1

		/* begin block 1.1 */
			// Start line: 78
			// Start offset: 0x8001BF48

			/* begin block 1.1.1 */
				// Start line: 78
				// Start offset: 0x8001BF48
			/* end block 1.1.1 */
			// End offset: 0x8001BF48
			// End Line: 78
		/* end block 1.1 */
		// End offset: 0x8001BF48
		// End Line: 78
	/* end block 1 */
	// End offset: 0x8001BF84
	// End Line: 83

	/* begin block 2 */
		// Start line: 154
	/* end block 2 */
	// End Line: 155

	/* begin block 3 */
		// Start line: 154
	/* end block 3 */
	// End Line: 155

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CalcPulsateYellow__Fv(void)

{
  uchar *amount;
  
  amount = ticks;
  if ((int)ticks < 0) {
    amount = ticks + 0x7f;
  }
  amount = ticks + ((int)amount >> 7) * -0x80;
  if (0x40 < (int)amount) {
    amount = (uchar *)(0x80 - (int)amount);
  }
  PulsateYellow = CalcFadeVal__Fii((int)&DAT_0000bebe,(int)amount);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawLeftFlare__FiiiRi(int y /*$s4*/, int fSelFade /*$a1*/, int fFadeVal /*$a2*/, int *flareextra /*$a3*/)
 // line 86, offset 0x8001bfa0
	/* begin block 1 */
		// Start line: 87
		// Start offset: 0x8001BFA0
		// Variables:
	// 		int flare_intensity; // $s1
	// 		int glintFade; // $s3

		/* begin block 1.1 */
			// Start line: 101
			// Start offset: 0x8001C068

			/* begin block 1.1.1 */
				// Start line: 102
				// Start offset: 0x8001C070
				// Variables:
			// 		int x; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8001C0DC
			// End Line: 109
		/* end block 1.1 */
		// End offset: 0x8001C0DC
		// End Line: 109
	/* end block 1 */
	// End offset: 0x8001C0DC
	// End Line: 109

	/* begin block 2 */
		// Start line: 168
	/* end block 2 */
	// End Line: 169

	/* begin block 3 */
		// Start line: 172
	/* end block 3 */
	// End Line: 173

	/* begin block 4 */
		// Start line: 172
	/* end block 4 */
	// End Line: 173

void DrawLeftFlare__FiiiRi(int y,int fSelFade,int fFadeVal,int *flareextra)

{
  int fade;
  int x;
  uint uVar1;
  int iVar2;
  
  if (fSelFade == 0x80) {
    fade = *flareextra + 1;
  }
  else {
    fade = *flareextra + 5;
    if (*flareextra == 0) goto LAB_8001bfe8;
  }
  *flareextra = fade;
LAB_8001bfe8:
  if (0x3c < *flareextra) {
    *flareextra = 0;
  }
  uVar1 = *flareextra;
  if ((int)uVar1 < 0x1f) {
    fade = uVar1 + (uVar1 >> 0x1f);
  }
  else {
    fade = (0x3c - uVar1) + (0x3c - uVar1 >> 0x1f);
  }
  uVar1 = ((fade >> 1) + 0x14) * fSelFade * (0x80 - fFadeVal);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 0x7f;
  }
  iVar2 = (int)uVar1 >> 7;
  fade = 0x80 - fSelFade;
  if (0x80 - fSelFade < fFadeVal) {
    fade = fFadeVal;
  }
  if (0 < iVar2) {
    x = TextSys_WordX__Fi(0x1de);
    Flare_2DHalo__Fiiiii(x,y + 5,(int)(iVar2 + (uVar1 >> 0x1f)) >> 1,(iVar2 << 1) / 3,0x17);
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (0,0,x + -3,y + -1,fade,(uint)(fade != 0),(tDrawShapeExtended *)0x0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SubtractiveBox__Fiiiiiiii(int x /*$s1*/, int y /*$t4*/, int w /*$a2*/, int h /*$a3*/, int col1 /*stack 16*/, int col2 /*stack 20*/, int col3 /*stack 24*/, int col4 /*stack 28*/)
 // line 115, offset 0x8001c0fc
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x8001C0FC
		// Variables:
	// 		struct DR_MODE *dr_mode; // $s0
	// 		struct POLY_G4 *prim; // $t0
	/* end block 1 */
	// End offset: 0x8001C0FC
	// End Line: 116

	/* begin block 2 */
		// Start line: 226
	/* end block 2 */
	// End Line: 227

	/* begin block 3 */
		// Start line: 233
	/* end block 3 */
	// End Line: 234

	/* begin block 4 */
		// Start line: 233
	/* end block 4 */
	// End Line: 234

void SubtractiveBox__Fiiiiiiii(int x,int y,int w,int h,int col1,int col2,int col3,int col4)

{
  short sVar1;
  short sVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  
  puVar4 = DAT_1f800004;
  puVar3 = DAT_1f800000;
  sVar1 = (short)x;
  sVar7 = sVar1 + (short)w;
  sVar2 = (short)y;
  sVar6 = sVar2 + (short)h;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar5 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 9;
  *puVar3 = *puVar3 & 0xff000000 | uVar5;
  *(undefined *)((int)puVar4 + 3) = 8;
  puVar4[1] = col1;
  puVar4[3] = col2;
  puVar4[5] = col3;
  puVar4[7] = col4;
  *(undefined *)((int)puVar4 + 7) = 0x3a;
  *(short *)(puVar4 + 2) = sVar1;
  *(short *)((int)puVar4 + 10) = sVar2;
  *(short *)(puVar4 + 4) = sVar7;
  *(short *)((int)puVar4 + 0x12) = sVar2;
  *(short *)(puVar4 + 6) = sVar1;
  *(short *)((int)puVar4 + 0x1a) = sVar6;
  *(short *)(puVar4 + 8) = sVar7;
  *(short *)((int)puVar4 + 0x22) = sVar6;
  puVar4 = DAT_1f800004;
  puVar3 = DAT_1f800000;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar5 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 3;
  *puVar3 = *puVar3 & 0xff000000 | uVar5;
  uVar5 = GetTPage(2,2,0,0x100);
  SetDrawMode((int)puVar4,0,0,uVar5 & 0xffff,(byte *)0x0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__27tMenuItemGoToMenuButtonFade(struct tMenuItemGoToMenuButtonFade *this /*$a0*/)
 // line 168, offset 0x8001c25c
	/* begin block 1 */
		// Start line: 169
		// Start offset: 0x8001C25C
	/* end block 1 */
	// End offset: 0x8001C25C
	// End Line: 170

	/* begin block 2 */
		// Start line: 448
	/* end block 2 */
	// End Line: 449

	/* begin block 3 */
		// Start line: 468
	/* end block 3 */
	// End Line: 469

	/* begin block 4 */
		// Start line: 468
	/* end block 4 */
	// End Line: 469

	/* begin block 5 */
		// Start line: 469
	/* end block 5 */
	// End Line: 470

	/* begin block 6 */
		// Start line: 469
	/* end block 6 */
	// End Line: 470

void TransitionOff__27tMenuItemGoToMenuButtonFade(tMenuItemGoToMenuButtonFade *this)

{
  *(undefined2 *)((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf + 10) = 0x1e;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__27tMenuItemGoToMenuButtonFade(struct tMenuItemGoToMenuButtonFade *this /*$a0*/)
 // line 173, offset 0x8001c268
	/* begin block 1 */
		// Start line: 174
		// Start offset: 0x8001C268
	/* end block 1 */
	// End offset: 0x8001C268
	// End Line: 176

	/* begin block 2 */
		// Start line: 474
	/* end block 2 */
	// End Line: 475

	/* begin block 3 */
		// Start line: 478
	/* end block 3 */
	// End Line: 479

	/* begin block 4 */
		// Start line: 478
	/* end block 4 */
	// End Line: 479

	/* begin block 5 */
		// Start line: 480
	/* end block 5 */
	// End Line: 481

void TransitionOn__27tMenuItemGoToMenuButtonFade(tMenuItemGoToMenuButtonFade *this)

{
  *(undefined2 *)((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf + 8) = 0x80;
  *(undefined2 *)((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf + 10) = 0xffe2;
  (this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem.fSelFade = 0;
  this->fFadeVal = 0;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__27tMenuItemGoToMenuButtonFade(struct tMenuItemGoToMenuButtonFade *this /*$a0*/)
 // line 183, offset 0x8001c284
	/* begin block 1 */
		// Start line: 184
		// Start offset: 0x8001C284
	/* end block 1 */
	// End offset: 0x8001C2D0
	// End Line: 192

	/* begin block 2 */
		// Start line: 494
	/* end block 2 */
	// End Line: 495

	/* begin block 3 */
		// Start line: 498
	/* end block 3 */
	// End Line: 499

	/* begin block 4 */
		// Start line: 498
	/* end block 4 */
	// End Line: 499

	/* begin block 5 */
		// Start line: 501
	/* end block 5 */
	// End Line: 502

void * TransitionIsFinished__27tMenuItemGoToMenuButtonFade(tMenuItemGoToMenuButtonFade *this)

{
  short sVar1;
  
  sVar1 = *(short *)((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf + 10);
  (this->tMenuItemGoToMenuButton).fOnButtonPress = (_func_43 *)0x0;
  if (((sVar1 < 0) &&
      (0 < *(short *)((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf + 8))) ||
     ((0 < *(short *)((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf + 10) &&
      (*(short *)((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf + 8) < 0x80))))
  {
    (this->tMenuItemGoToMenuButton).fOnButtonPress = &DAT_00000001;
  }
  return (void *)((uint)(this->tMenuItemGoToMenuButton).fOnButtonPress ^ 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__27tMenuItemGoToMenuButtonFadeb(struct tMenuItemGoToMenuButtonFade *this /*$s0*/, void * selected /*$s1*/)
 // line 195, offset 0x8001c2dc
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x8001C2DC
	/* end block 1 */
	// End offset: 0x8001C31C
	// End Line: 198

	/* begin block 2 */
		// Start line: 518
	/* end block 2 */
	// End Line: 519

	/* begin block 3 */
		// Start line: 522
	/* end block 3 */
	// End Line: 523

	/* begin block 4 */
		// Start line: 522
	/* end block 4 */
	// End Line: 523

void UpdateTransition__27tMenuItemGoToMenuButtonFadeb
               (tMenuItemGoToMenuButtonFade *this,void *selected)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf + 8) +
          (int)*(short *)((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf + 10);
  if (0x80 < iVar2) {
    iVar2 = 0x80;
  }
  uVar1 = (undefined2)iVar2;
  if (iVar2 < 0) {
    uVar1 = 0;
  }
  iVar2 = *(int *)(this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf;
  *(undefined2 *)((this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem._vf + 8) = uVar1;
  (**(code **)(iVar2 + 0x4c))
            ((int)&(this->tMenuItemGoToMenuButton).tMenuItemInteractive.tMenuItem.fFlags +
             (int)*(short *)(iVar2 + 0x48));
  UpdateTransition__9tMenuItemb((tMenuItem *)this,selected);
  return;
}



// decompiled code
// original method signature: 
// struct tMenuItemLeftRightFade * /*$ra*/ __22tMenuItemLeftRightFadeUiP13tListIterator(struct tMenuItemLeftRightFade *this /*$s0*/, unsigned int textDescription /*$a1*/, struct tListIterator *dataPtr /*$a2*/)
 // line 204, offset 0x8001c358
	/* begin block 1 */
		// Start line: 205
		// Start offset: 0x8001C358
	/* end block 1 */
	// End offset: 0x8001C358
	// End Line: 205

	/* begin block 2 */
		// Start line: 536
	/* end block 2 */
	// End Line: 537

	/* begin block 3 */
		// Start line: 541
	/* end block 3 */
	// End Line: 542

	/* begin block 4 */
		// Start line: 541
	/* end block 4 */
	// End Line: 542

tMenuItemLeftRightFade *
__22tMenuItemLeftRightFadeUiP13tListIterator
          (tMenuItemLeftRightFade *this,uint textDescription,tListIterator *dataPtr)

{
  __24tMenuItemLeftRightChoiceUiP13tListIterator
            ((tMenuItemLeftRightChoice *)this,textDescription,dataPtr);
  *(undefined4 *)(this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf = 0x80010f60;
  *(undefined4 *)&this->fFadeVal = 0;
  (this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fSelFade = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__22tMenuItemLeftRightFade(struct tMenuItemLeftRightFade *this /*$a0*/)
 // line 215, offset 0x8001c394
	/* begin block 1 */
		// Start line: 216
		// Start offset: 0x8001C394
	/* end block 1 */
	// End offset: 0x8001C394
	// End Line: 217

	/* begin block 2 */
		// Start line: 564
	/* end block 2 */
	// End Line: 565

	/* begin block 3 */
		// Start line: 569
	/* end block 3 */
	// End Line: 570

	/* begin block 4 */
		// Start line: 569
	/* end block 4 */
	// End Line: 570

	/* begin block 5 */
		// Start line: 570
	/* end block 5 */
	// End Line: 571

	/* begin block 6 */
		// Start line: 570
	/* end block 6 */
	// End Line: 571

void TransitionOff__22tMenuItemLeftRightFade(tMenuItemLeftRightFade *this)

{
  (this->tMenuItemLeftRightChoice).fData = (tListIterator *)&DAT_00000001;
  *(undefined2 *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10) = 0x1e;
  *(undefined2 *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__22tMenuItemLeftRightFade(struct tMenuItemLeftRightFade *this /*$a0*/)
 // line 221, offset 0x8001c3ac
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x8001C3AC
	/* end block 1 */
	// End offset: 0x8001C3AC
	// End Line: 223

	/* begin block 2 */
		// Start line: 578
	/* end block 2 */
	// End Line: 579

	/* begin block 3 */
		// Start line: 581
	/* end block 3 */
	// End Line: 582

	/* begin block 4 */
		// Start line: 581
	/* end block 4 */
	// End Line: 582

	/* begin block 5 */
		// Start line: 582
	/* end block 5 */
	// End Line: 583

	/* begin block 6 */
		// Start line: 582
	/* end block 6 */
	// End Line: 583

	/* begin block 7 */
		// Start line: 585
	/* end block 7 */
	// End Line: 586

void TransitionOn__22tMenuItemLeftRightFade(tMenuItemLeftRightFade *this)

{
  (this->tMenuItemLeftRightChoice).fData = (tListIterator *)&DAT_00000001;
  *(undefined2 *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10) = 0xffe2
  ;
  *(undefined4 *)&this->fFadeVal = 0;
  (this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fSelFade = 0;
  *(undefined2 *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) = 0x80;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__22tMenuItemLeftRightFade(struct tMenuItemLeftRightFade *this /*$a0*/)
 // line 231, offset 0x8001c3d0
	/* begin block 1 */
		// Start line: 232
		// Start offset: 0x8001C3D0
	/* end block 1 */
	// End offset: 0x8001C42C
	// End Line: 242

	/* begin block 2 */
		// Start line: 602
	/* end block 2 */
	// End Line: 603

	/* begin block 3 */
		// Start line: 606
	/* end block 3 */
	// End Line: 607

	/* begin block 4 */
		// Start line: 606
	/* end block 4 */
	// End Line: 607

	/* begin block 5 */
		// Start line: 607
	/* end block 5 */
	// End Line: 608

	/* begin block 6 */
		// Start line: 607
	/* end block 6 */
	// End Line: 608

void * TransitionIsFinished__22tMenuItemLeftRightFade(tMenuItemLeftRightFade *this)

{
  short sVar1;
  
  sVar1 = *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10);
  if (sVar1 != 0) {
    if (sVar1 < 0) {
      if (*(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) < 1)
      goto LAB_8001c41c;
      sVar1 = *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10);
    }
    if ((sVar1 < 1) ||
       (*(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) < 0x80))
    {
      (this->tMenuItemLeftRightChoice).fData = (tListIterator *)&DAT_00000001;
      goto LAB_8001c42c;
    }
  }
LAB_8001c41c:
  (this->tMenuItemLeftRightChoice).fData = (tListIterator *)0x0;
LAB_8001c42c:
  return (void *)((uint)(this->tMenuItemLeftRightChoice).fData ^ 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__22tMenuItemLeftRightFadeb(struct tMenuItemLeftRightFade *this /*$s0*/, void * selected /*$s1*/)
 // line 245, offset 0x8001c438
	/* begin block 1 */
		// Start line: 246
		// Start offset: 0x8001C438
	/* end block 1 */
	// End offset: 0x8001C478
	// End Line: 248

	/* begin block 2 */
		// Start line: 630
	/* end block 2 */
	// End Line: 631

	/* begin block 3 */
		// Start line: 634
	/* end block 3 */
	// End Line: 635

	/* begin block 4 */
		// Start line: 634
	/* end block 4 */
	// End Line: 635

void UpdateTransition__22tMenuItemLeftRightFadeb(tMenuItemLeftRightFade *this,void *selected)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) +
          (int)*(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 10);
  if (0x80 < iVar2) {
    iVar2 = 0x80;
  }
  uVar1 = (undefined2)iVar2;
  if (iVar2 < 0) {
    uVar1 = 0;
  }
  iVar2 = *(int *)(this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf;
  *(undefined2 *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8) = uVar1;
  (**(code **)(iVar2 + 0x4c))
            ((int)&(this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fFlags +
             (int)*(short *)(iVar2 + 0x48));
  UpdateTransition__9tMenuItemb((tMenuItem *)this,selected);
  return;
}



// decompiled code
// original method signature: 
// struct tOptionsMenu * /*$ra*/ __12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme(struct tOptionsMenu *this /*$s0*/, unsigned int flags /*$a1*/, struct tScreen *screenHandler /*$a2*/, struct tMenu *nextMenu /*$a3*/, struct tMenu *optionsMenu /*stack 16*/, TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress OnButtonPress /*stack 20*/, int title /*stack 24*/, int firstframe /*stack 28*/, int numframes /*stack 32*/, struct tMenuItem *firstItem /*stack 36*/)
 // line 267, offset 0x8001c4b4
	/* begin block 1 */
		// Start line: 268
		// Start offset: 0x8001C4B4
	/* end block 1 */
	// End offset: 0x8001C4B4
	// End Line: 268

	/* begin block 2 */
		// Start line: 661
	/* end block 2 */
	// End Line: 662

	/* begin block 3 */
		// Start line: 679
	/* end block 3 */
	// End Line: 680

	/* begin block 4 */
		// Start line: 679
	/* end block 4 */
	// End Line: 680

tOptionsMenu *
__12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme
          (tOptionsMenu *this,uint flags,tScreen *screenHandler,tMenu *nextMenu,tMenu *optionsMenu,
                    
          TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress
          OnButtonPress,int title,int firstframe,int numframes,tMenuItem *firstItem)

{
  __5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenu *)this,flags,screenHandler,nextMenu,optionsMenu,
             (TDRFuncPtr___5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)
             OnButtonPress,(int)(short)title);
  *(undefined4 *)((this->tMenu)._vf + 2) = 0x80010f08;
  tMenuConstructor__5tMenuP9tMenuItemPv((tMenu *)this,firstItem,&stack0x00000028);
  this->fInMenuTransition = (void *)0x0;
  *(undefined2 *)&(this->tMenu).field_0x72 = 0;
  *(int *)&this->fTransitionDirection = firstframe;
  this->fScreenFade = numframes;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._12tOptionsMenu(struct tOptionsMenu *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 281, offset 0x8001c544
	/* begin block 1 */
		// Start line: 282
		// Start offset: 0x8001C544
	/* end block 1 */
	// End offset: 0x8001C544
	// End Line: 282

	/* begin block 2 */
		// Start line: 714
	/* end block 2 */
	// End Line: 715

	/* begin block 3 */
		// Start line: 719
	/* end block 3 */
	// End Line: 720

	/* begin block 4 */
		// Start line: 719
	/* end block 4 */
	// End Line: 720

void ___12tOptionsMenu(tOptionsMenu *this,int __in_chrg)

{
  *(undefined4 *)((this->tMenu)._vf + 2) = 0x80010f08;
  ___5tMenu((tMenu *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ DebounceKeys__12tOptionsMenu(struct tOptionsMenu *this /*$a0*/)
 // line 286, offset 0x8001c56c
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x8001C56C

		/* begin block 1.1 */
			// Start line: 287
			// Start offset: 0x8001C56C

			/* begin block 1.1.1 */
				// Start line: 288
				// Start offset: 0x8001C594

				/* begin block 1.1.1.1 */
					// Start line: 288
					// Start offset: 0x8001C594
				/* end block 1.1.1.1 */
				// End offset: 0x8001C594
				// End Line: 288
			/* end block 1.1.1 */
			// End offset: 0x8001C594
			// End Line: 288
		/* end block 1.1 */
		// End offset: 0x8001C5C8
		// End Line: 290
	/* end block 1 */
	// End offset: 0x8001C5C8
	// End Line: 290

	/* begin block 2 */
		// Start line: 724
	/* end block 2 */
	// End Line: 725

	/* begin block 3 */
		// Start line: 729
	/* end block 3 */
	// End Line: 730

	/* begin block 4 */
		// Start line: 729
	/* end block 4 */
	// End Line: 730

long DebounceKeys__12tOptionsMenu(tOptionsMenu *this)

{
  long lVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(this->tMenu).fItemList[(this->tMenu).fCurrentItem];
  lVar1 = 0;
  if ((puVar2 != (uint *)0x0) && (lVar1 = 0, (*puVar2 & 1) != 1)) {
    lVar1 = (**(code **)(puVar2[6] + 0x14))((int)puVar2 + (int)*(short *)(puVar2[6] + 0x10));
  }
  return lVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__12tOptionsMenu(struct tOptionsMenu *this /*$s1*/)
 // line 293, offset 0x8001c5d8
	/* begin block 1 */
		// Start line: 294
		// Start offset: 0x8001C5D8
		// Variables:
	// 		short i; // $s0
	/* end block 1 */
	// End offset: 0x8001C654
	// End Line: 304

	/* begin block 2 */
		// Start line: 739
	/* end block 2 */
	// End Line: 740

	/* begin block 3 */
		// Start line: 743
	/* end block 3 */
	// End Line: 744

	/* begin block 4 */
		// Start line: 743
	/* end block 4 */
	// End Line: 744

void TransitionOff__12tOptionsMenu(tOptionsMenu *this)

{
  int iVar1;
  _func_21 *p_Var2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  p_Var2 = (this->tMenu).fItemList[0];
  (this->tMenu)._vf[10] = (__vtbl_ptr_type)0x28;
  this->fInMenuTransition = (void *)0x0;
  while (p_Var2 != (_func_21 *)0x0) {
    iVar3 = *(int *)((int)(this->tMenu).fItemList + ((iVar4 << 0x10) >> 0xe));
    iVar1 = *(int *)(iVar3 + 0x18);
    (**(code **)(iVar1 + 0x3c))(iVar3 + (int)*(short *)(iVar1 + 0x38));
    iVar4 = iVar4 + 1;
    p_Var2 = *(_func_21 **)((int)(this->tMenu).fItemList + (iVar4 * 0x10000 >> 0xe));
  }
  *(undefined4 *)((this->tMenu)._vf + 6) = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__12tOptionsMenu(struct tOptionsMenu *this /*$s1*/)
 // line 308, offset 0x8001c670
	/* begin block 1 */
		// Start line: 309
		// Start offset: 0x8001C670
		// Variables:
	// 		short i; // $s0
	/* end block 1 */
	// End offset: 0x8001C6F8
	// End Line: 321

	/* begin block 2 */
		// Start line: 778
	/* end block 2 */
	// End Line: 779

	/* begin block 3 */
		// Start line: 783
	/* end block 3 */
	// End Line: 784

	/* begin block 4 */
		// Start line: 783
	/* end block 4 */
	// End Line: 784

void TransitionOn__12tOptionsMenu(tOptionsMenu *this)

{
  int iVar1;
  _func_21 *p_Var2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  p_Var2 = (this->tMenu).fItemList[0];
  (this->tMenu)._vf[10] = (__vtbl_ptr_type)0xd8;
  *(undefined4 *)((this->tMenu)._vf + 6) = 1;
  this->fInMenuTransition = (void *)0x228;
  while (p_Var2 != (_func_21 *)0x0) {
    iVar3 = *(int *)((int)(this->tMenu).fItemList + ((iVar4 << 0x10) >> 0xe));
    iVar1 = *(int *)(iVar3 + 0x18);
    (**(code **)(iVar1 + 0x44))(iVar3 + (int)*(short *)(iVar1 + 0x40));
    iVar4 = iVar4 + 1;
    p_Var2 = *(_func_21 **)((int)(this->tMenu).fItemList + (iVar4 * 0x10000 >> 0xe));
  }
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__12tOptionsMenu(struct tOptionsMenu *this /*$s1*/)
 // line 325, offset 0x8001c70c
	/* begin block 1 */
		// Start line: 326
		// Start offset: 0x8001C70C
		// Variables:
	// 		short i; // $s0

		/* begin block 1.1 */
			// Start line: 349
			// Start offset: 0x8001C7F4
			// Variables:
		// 		struct tFEApplication *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 349
				// Start offset: 0x8001C7F4
			/* end block 1.1.1 */
			// End offset: 0x8001C7F4
			// End Line: 349
		/* end block 1.1 */
		// End offset: 0x8001C7F4
		// End Line: 349
	/* end block 1 */
	// End offset: 0x8001C834
	// End Line: 359

	/* begin block 2 */
		// Start line: 828
	/* end block 2 */
	// End Line: 829

	/* begin block 3 */
		// Start line: 833
	/* end block 3 */
	// End Line: 834

	/* begin block 4 */
		// Start line: 833
	/* end block 4 */
	// End Line: 834

void * TransitionIsFinished__12tOptionsMenu(tOptionsMenu *this)

{
  _func_21 *p_Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((((int)this->fInMenuTransition < 0x228) || ((char)(this->tMenu)._vf[10] < '\x01')) &&
     ((0 < (int)this->fInMenuTransition || (-1 < (char)(this->tMenu)._vf[10])))) {
    *(undefined4 *)((this->tMenu)._vf + 6) = 1;
  }
  else {
    *(undefined4 *)((this->tMenu)._vf + 6) = 0;
  }
  if (*(int *)((this->tMenu)._vf + 6) == 0) {
    p_Var1 = (this->tMenu).fItemList[0];
    iVar4 = 0;
    while (p_Var1 != (_func_21 *)0x0) {
      iVar3 = *(int *)((int)(this->tMenu).fItemList + ((iVar4 << 0x10) >> 0xe));
      iVar2 = *(int *)(iVar3 + 0x18);
      iVar2 = (**(code **)(iVar2 + 0x4c))(iVar3 + (int)*(short *)(iVar2 + 0x48));
      iVar4 = iVar4 + 1;
      if (iVar2 != 1) {
        *(undefined4 *)((this->tMenu)._vf + 6) = 1;
      }
      p_Var1 = *(_func_21 **)((int)(this->tMenu).fItemList + (iVar4 * 0x10000 >> 0xe));
    }
  }
  iVar4 = *(int *)(FEApp->fCurrentScreen[0] + 0x60);
  iVar4 = (**(code **)(iVar4 + 0x44))(FEApp->fCurrentScreen[0] + (int)*(short *)(iVar4 + 0x40));
  if (iVar4 != 1) {
    *(undefined4 *)((this->tMenu)._vf + 6) = 1;
  }
  return (void *)(*(uint *)((this->tMenu)._vf + 6) ^ 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__12tOptionsMenu(struct tOptionsMenu *this /*$s1*/)
 // line 364, offset 0x8001c854
	/* begin block 1 */
		// Start line: 365
		// Start offset: 0x8001C854
		// Variables:
	// 		short i; // $s0
	/* end block 1 */
	// End offset: 0x8001CAD0
	// End Line: 423

	/* begin block 2 */
		// Start line: 905
	/* end block 2 */
	// End Line: 906

	/* begin block 3 */
		// Start line: 911
	/* end block 3 */
	// End Line: 912

	/* begin block 4 */
		// Start line: 911
	/* end block 4 */
	// End Line: 912

void UpdateTransition__12tOptionsMenu(tOptionsMenu *this)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  _func_21 *p_Var5;
  uint uVar6;
  short sVar7;
  
  if (*(int *)((this->tMenu)._vf + 6) == 0) {
    p_Var5 = (this->tMenu).fItemList[0];
    iVar3 = 0;
    while (p_Var5 != (_func_21 *)0x0) {
      p_Var5 = (this->tMenu).fItemList[(int)(short)iVar3];
      iVar1 = *(int *)(p_Var5 + 0x18);
      uVar6 = 0;
      if (*(int *)((this->tMenu)._vf + 6) == 0) {
        uVar6 = (uint)((int)(short)iVar3 == (this->tMenu).fCurrentItem);
      }
      (**(code **)(iVar1 + 0x54))(p_Var5 + (int)*(short *)(iVar1 + 0x50),uVar6);
      iVar3 = iVar3 + 1;
      p_Var5 = *(_func_21 **)((int)(this->tMenu).fItemList + (iVar3 * 0x10000 >> 0xe));
    }
    goto LAB_8001cad0;
  }
  iVar3 = (int)(char)(this->tMenu)._vf[10];
  if (iVar3 < 0) {
    pvVar2 = (void *)((int)this->fInMenuTransition + iVar3);
    if (0 < (int)this->fInMenuTransition) {
      this->fInMenuTransition = pvVar2;
      if ((int)pvVar2 < 0) {
        this->fInMenuTransition = (void *)0x0;
      }
      goto LAB_8001cad0;
    }
    iVar3 = 0;
    if ((this->tMenu).fItemList[0] == (_func_21 *)0x0) goto LAB_8001cad0;
    do {
      iVar4 = *(int *)((int)(this->tMenu).fItemList + ((iVar3 << 0x10) >> 0xe));
      iVar1 = *(int *)(iVar4 + 0x18);
      iVar1 = (**(code **)(iVar1 + 0x4c))(iVar4 + (int)*(short *)(iVar1 + 0x48));
      iVar4 = iVar3 + 1;
      if (iVar1 == 0) break;
      iVar3 = iVar4;
    } while (*(int *)((int)(this->tMenu).fItemList + (iVar4 * 0x10000 >> 0xe)) != 0);
    p_Var5 = *(_func_21 **)((int)(this->tMenu).fItemList + ((iVar3 << 0x10) >> 0xe));
    if (p_Var5 == (_func_21 *)0x0) goto LAB_8001cad0;
code_r0x8001c9ec:
    (**(code **)(*(int *)(p_Var5 + 0x18) + 0x54))
              (p_Var5 + (int)*(short *)(*(int *)(p_Var5 + 0x18) + 0x50),0);
  }
  else {
    p_Var5 = (this->tMenu).fItemList[0];
    iVar3 = 0;
    while (p_Var5 != (_func_21 *)0x0) {
      iVar3 = iVar3 + 1;
      p_Var5 = *(_func_21 **)((int)(this->tMenu).fItemList + (iVar3 * 0x10000 >> 0xe));
    }
    iVar3 = iVar3 + -1;
    if (iVar3 * 0x10000 >> 0x10 != -1) {
      do {
        sVar7 = (short)iVar3;
        iVar4 = *(int *)((int)(this->tMenu).fItemList + ((iVar3 << 0x10) >> 0xe));
        iVar1 = *(int *)(iVar4 + 0x18);
        iVar1 = (**(code **)(iVar1 + 0x4c))(iVar4 + (int)*(short *)(iVar1 + 0x48));
        iVar3 = iVar3 + -1;
        if (iVar1 == 0) break;
        sVar7 = (short)iVar3;
      } while (iVar3 * 0x10000 >> 0x10 != -1);
      if ((int)sVar7 != -1) {
        p_Var5 = (this->tMenu).fItemList[(int)sVar7];
        goto code_r0x8001c9ec;
      }
    }
    if (((int)this->fInMenuTransition < 0x228) &&
       (pvVar2 = (void *)((int)this->fInMenuTransition + (int)(char)(this->tMenu)._vf[10]),
       this->fInMenuTransition = pvVar2, 0x228 < (int)pvVar2)) {
      this->fInMenuTransition = (void *)0x228;
    }
  }
LAB_8001cad0:
  iVar3 = *(int *)((this->tMenu)._vf + 2);
  (**(code **)(iVar3 + 0x3c))((int)&(this->tMenu).fFlags + (int)*(short *)(iVar3 + 0x38));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__12tOptionsMenu(struct tOptionsMenu *this /*$s0*/)
 // line 426, offset 0x8001cb04
	/* begin block 1 */
		// Start line: 427
		// Start offset: 0x8001CB04
		// Variables:
	// 		short i; // $s1
	// 		struct tDrawShapeExtended drawFlags; // stack offset -40

		/* begin block 1.1 */
			// Start line: 427
			// Start offset: 0x8001CB04

			/* begin block 1.1.1 */
				// Start line: 432
				// Start offset: 0x8001CB3C

				/* begin block 1.1.1.1 */
					// Start line: 432
					// Start offset: 0x8001CB3C
				/* end block 1.1.1.1 */
				// End offset: 0x8001CB3C
				// End Line: 432
			/* end block 1.1.1 */
			// End offset: 0x8001CB3C
			// End Line: 432
		/* end block 1.1 */
		// End offset: 0x8001CB54
		// End Line: 433

		/* begin block 1.2 */
			// Start line: 434
			// Start offset: 0x8001CB54

			/* begin block 1.2.1 */
				// Start line: 434
				// Start offset: 0x8001CB54
				// Variables:
			// 		struct tMenuItem *this; // $v0

				/* begin block 1.2.1.1 */
					// Start line: 434
					// Start offset: 0x8001CB54
				/* end block 1.2.1.1 */
				// End offset: 0x8001CB54
				// End Line: 434
			/* end block 1.2.1 */
			// End offset: 0x8001CB54
			// End Line: 434
		/* end block 1.2 */
		// End offset: 0x8001CB98
		// End Line: 435

		/* begin block 1.3 */
			// Start line: 436
			// Start offset: 0x8001CBA0

			/* begin block 1.3.1 */
				// Start line: 436
				// Start offset: 0x8001CBA0
				// Variables:
			// 		struct tMenuItem *this; // $v0

				/* begin block 1.3.1.1 */
					// Start line: 436
					// Start offset: 0x8001CBA0
				/* end block 1.3.1.1 */
				// End offset: 0x8001CBA0
				// End Line: 436
			/* end block 1.3.1 */
			// End offset: 0x8001CBA0
			// End Line: 436
		/* end block 1.3 */
		// End offset: 0x8001CBD4
		// End Line: 437

		/* begin block 1.4 */
			// Start line: 440
			// Start offset: 0x8001CBDC

			/* begin block 1.4.1 */
				// Start line: 441
				// Start offset: 0x8001CBFC

				/* begin block 1.4.1.1 */
					// Start line: 442
					// Start offset: 0x8001CBFC

					/* begin block 1.4.1.1.1 */
						// Start line: 442
						// Start offset: 0x8001CBFC
					/* end block 1.4.1.1.1 */
					// End offset: 0x8001CBFC
					// End Line: 442
				/* end block 1.4.1.1 */
				// End offset: 0x8001CBFC
				// End Line: 442
			/* end block 1.4.1 */
			// End offset: 0x8001CC68
			// End Line: 443
		/* end block 1.4 */
		// End offset: 0x8001CC68
		// End Line: 443
	/* end block 1 */
	// End offset: 0x8001CCF4
	// End Line: 457

	/* begin block 2 */
		// Start line: 1031
	/* end block 2 */
	// End Line: 1032

	/* begin block 3 */
		// Start line: 1035
	/* end block 3 */
	// End Line: 1036

	/* begin block 4 */
		// Start line: 1035
	/* end block 4 */
	// End Line: 1036

void Draw__12tOptionsMenu(tOptionsMenu *this)

{
  uint *puVar1;
  _func_21 *p_Var2;
  int iVar3;
  int iVar4;
  uint uVar5;
  tDrawShapeExtended tStack40;
  
  CalcPulsateYellow__Fv();
  puVar1 = (uint *)(this->tMenu).fItemList[(this->tMenu).fCurrentItem];
  if ((puVar1 == (uint *)0x0) || ((*puVar1 & 1) != 0)) {
    (this->tMenu).fCurrentItem = 0;
  }
  while ((iVar3 = (this->tMenu).fCurrentItem, iVar4 = iVar3 + 1,
         (*(uint *)(this->tMenu).fItemList[iVar3] & 1) != 0 &&
         ((this->tMenu).fItemList[iVar4] != (_func_21 *)0x0))) {
    (this->tMenu).fCurrentItem = iVar4;
  }
  while ((iVar3 = (this->tMenu).fCurrentItem, (*(uint *)(this->tMenu).fItemList[iVar3] & 1) != 0 &&
         (0 < iVar3))) {
    (this->tMenu).fCurrentItem = iVar3 + -1;
  }
  if ((-1 < *(int *)&this->fTransitionDirection) && (0 < this->fScreenFade)) {
    tStack40.tint[0] = 0xcec844;
    iVar3 = this->fScreenFade;
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    if ((iVar3 == -1) && ((int)ticks >> 4 == -0x80000000)) {
      trap(0x1800);
    }
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (*(int *)&this->fTransitionDirection + ((int)ticks >> 4) % iVar3,0x410,0x10,0x10,0,0,
               &tStack40);
  }
  p_Var2 = (this->tMenu).fItemList[0];
  iVar3 = 0;
  while (p_Var2 != (_func_21 *)0x0) {
    p_Var2 = (this->tMenu).fItemList[(int)(short)iVar3];
    iVar4 = *(int *)(p_Var2 + 0x18);
    uVar5 = 0;
    if (*(int *)((this->tMenu)._vf + 6) == 0) {
      uVar5 = (uint)((int)(short)iVar3 == (this->tMenu).fCurrentItem);
    }
    (**(code **)(iVar4 + 0x2c))(p_Var2 + (int)*(short *)(iVar4 + 0x28),0,0,uVar5);
    iVar3 = iVar3 + 1;
    p_Var2 = *(_func_21 **)((int)(this->tMenu).fItemList + (iVar3 * 0x10000 >> 0xe));
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__12tOptionsMenu7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tOptionsMenu *this /*$s0*/, enum tPlayer fromPlayer /*$s2*/, enum tInputKeyType *keyval /*$s1*/, struct tMenuCommand *command /*$s3*/)
 // line 462, offset 0x8001cd08
	/* begin block 1 */
		// Start line: 463
		// Start offset: 0x8001CD08
	/* end block 1 */
	// End offset: 0x8001CD60
	// End Line: 505

	/* begin block 2 */
		// Start line: 1101
	/* end block 2 */
	// End Line: 1102

	/* begin block 3 */
		// Start line: 1107
	/* end block 3 */
	// End Line: 1108

	/* begin block 4 */
		// Start line: 1107
	/* end block 4 */
	// End Line: 1108

void ProcessInput__12tOptionsMenu7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tOptionsMenu *this,tPlayer fromPlayer,tInputKeyType *keyval,tMenuCommand *command)

{
  short sVar1;
  
  sVar1 = GetNumberEnabledItems__5tMenu((tMenu *)this);
  if (sVar1 == 0) {
    (this->tMenu).fCurrentItem = 0;
    if ((*keyval != kInput_KeyType_Triangle) && (*keyval != kInput_KeyType_Circle)) {
      *keyval = kInput_KeyType_AlreadyProcessed;
    }
  }
  ProcessInput__5tMenu7tPlayerR13tInputKeyTypeR12tMenuCommand
            ((tMenu *)this,fromPlayer,keyval,command);
  return;
}



// decompiled code
// original method signature: 
// struct tInsideBoxMenu * /*$ra*/ __14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme(struct tInsideBoxMenu *this /*$s0*/, unsigned int flags /*$a1*/, struct tScreen *screenHandler /*$a2*/, struct tMenu *nextMenu /*$a3*/, struct tMenu *optionsMenu /*stack 16*/, TDRFuncPtr___14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress OnButtonPress /*stack 20*/, int title /*stack 24*/, struct tMenuItem *firstItem /*stack 28*/)
 // line 520, offset 0x8001cd90
	/* begin block 1 */
		// Start line: 521
		// Start offset: 0x8001CD90
	/* end block 1 */
	// End offset: 0x8001CD90
	// End Line: 521

	/* begin block 2 */
		// Start line: 1207
	/* end block 2 */
	// End Line: 1208

	/* begin block 3 */
		// Start line: 1223
	/* end block 3 */
	// End Line: 1224

	/* begin block 4 */
		// Start line: 1223
	/* end block 4 */
	// End Line: 1224

tInsideBoxMenu *
__14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
          (tInsideBoxMenu *this,uint flags,tScreen *screenHandler,tMenu *nextMenu,tMenu *optionsMenu
          ,
           TDRFuncPtr___14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
           OnButtonPress,int title,tMenuItem *firstItem)

{
  __5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenu *)this,flags,screenHandler,nextMenu,optionsMenu,
             (TDRFuncPtr___5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)
             OnButtonPress,(int)(short)title);
  *(undefined4 *)((this->tMenu)._vf + 2) = 0x80010ea8;
  tMenuConstructor__5tMenuP9tMenuItemPv((tMenu *)this,firstItem,&stack0x00000020);
  *(undefined2 *)((this->tMenu)._vf + 6) = 0;
  *(undefined2 *)((this->tMenu)._vf + 8) = 0;
  *(undefined2 *)((this->tMenu)._vf + 10) = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._14tInsideBoxMenu(struct tInsideBoxMenu *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 532, offset 0x8001ce04
	/* begin block 1 */
		// Start line: 533
		// Start offset: 0x8001CE04
	/* end block 1 */
	// End offset: 0x8001CE04
	// End Line: 533

	/* begin block 2 */
		// Start line: 1253
	/* end block 2 */
	// End Line: 1254

	/* begin block 3 */
		// Start line: 1257
	/* end block 3 */
	// End Line: 1258

	/* begin block 4 */
		// Start line: 1257
	/* end block 4 */
	// End Line: 1258

void ___14tInsideBoxMenu(tInsideBoxMenu *this,int __in_chrg)

{
  *(undefined4 *)((this->tMenu)._vf + 2) = 0x80010ea8;
  ___5tMenu((tMenu *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__14tInsideBoxMenu7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tInsideBoxMenu *this /*$a0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyval /*$a2*/, struct tMenuCommand *command /*$a3*/)
 // line 537, offset 0x8001ce2c
	/* begin block 1 */
		// Start line: 538
		// Start offset: 0x8001CE2C
	/* end block 1 */
	// End offset: 0x8001CEEC
	// End Line: 554

	/* begin block 2 */
		// Start line: 1262
	/* end block 2 */
	// End Line: 1263

	/* begin block 3 */
		// Start line: 1267
	/* end block 3 */
	// End Line: 1268

	/* begin block 4 */
		// Start line: 1267
	/* end block 4 */
	// End Line: 1268

void ProcessInput__14tInsideBoxMenu7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tInsideBoxMenu *this,tPlayer fromPlayer,tInputKeyType *keyval,tMenuCommand *command)

{
  int iVar1;
  tInputKeyType tVar2;
  _func_21 *p_Var3;
  
  if (*(short *)((this->tMenu)._vf + 8) != 0) {
    tVar2 = *keyval;
    if ((tVar2 != kInput_KeyType_Up) && (tVar2 != kInput_KeyType_Down)) goto LAB_8001ce6c;
    *keyval = kInput_KeyType_AlreadyProcessed;
  }
  tVar2 = *keyval;
LAB_8001ce6c:
  if ((tVar2 == kInput_KeyType_Up) && ((this->tMenu).fCurrentItem == 0)) {
    p_Var3 = (this->tMenu).fItemList[0];
    iVar1 = *(int *)(p_Var3 + 0x18);
    (**(code **)(iVar1 + 0x1c))(p_Var3 + (int)*(short *)(iVar1 + 0x18));
  }
  else {
    if ((*keyval != kInput_KeyType_Down) ||
       ((this->tMenu).fItemList[(this->tMenu).fCurrentItem + 1] != (_func_21 *)0x0)) {
      ProcessInput__5tMenu7tPlayerR13tInputKeyTypeR12tMenuCommand
                ((tMenu *)this,fromPlayer,keyval,command);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__14tInsideBoxMenusssss(struct tInsideBoxMenu *this /*$s0*/, short x /*$a1*/, short y /*$a2*/, short w /*$a3*/, int slideOffset /*stack 16*/)
 // line 558, offset 0x8001cefc
	/* begin block 1 */
		// Start line: 559
		// Start offset: 0x8001CEFC
		// Variables:
	// 		short i; // $s2
	// 		short j; // $s1
	/* end block 1 */
	// End offset: 0x8001D138
	// End Line: 603

	/* begin block 2 */
		// Start line: 1305
	/* end block 2 */
	// End Line: 1306

	/* begin block 3 */
		// Start line: 1309
	/* end block 3 */
	// End Line: 1310

	/* begin block 4 */
		// Start line: 1309
	/* end block 4 */
	// End Line: 1310

void Draw__14tInsideBoxMenusssss(tInsideBoxMenu *this,short x,short y,short w,int slideOffset)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  _func_21 *p_Var7;
  int iVar8;
  uint local_28;
  
  iVar4 = (int)*(short *)((this->tMenu)._vf + 6);
  iVar6 = (this->tMenu).fCurrentItem;
  if (iVar6 != iVar4) {
    if (iVar4 < iVar6) {
      *(undefined2 *)((this->tMenu)._vf + 8) = 0x18;
      uVar2 = 0xfffc;
    }
    else {
      *(undefined2 *)((this->tMenu)._vf + 8) = 0xffe8;
      uVar2 = 4;
    }
    *(undefined2 *)((this->tMenu)._vf + 10) = uVar2;
    *(undefined2 *)((this->tMenu)._vf + 6) = *(undefined2 *)&(this->tMenu).fCurrentItem;
  }
  if (*(short *)((this->tMenu)._vf + 8) != 0) {
    sVar1 = *(short *)((this->tMenu)._vf + 10);
    uVar3 = *(short *)((this->tMenu)._vf + 8) + *(short *)((this->tMenu)._vf + 10);
    *(ushort *)((this->tMenu)._vf + 8) = uVar3;
    if ((sVar1 < 0) && ((int)((uint)uVar3 << 0x10) < 0)) {
      *(undefined2 *)((this->tMenu)._vf + 8) = 0;
    }
    if ((0 < *(short *)((this->tMenu)._vf + 10)) && (0 < *(short *)((this->tMenu)._vf + 8))) {
      *(undefined2 *)((this->tMenu)._vf + 8) = 0;
    }
  }
  iVar4 = 0;
  do {
    iVar6 = (uint)*(ushort *)&(this->tMenu).fCurrentItem + iVar4 + -2;
    if ((3 < (short)iVar4) &&
       (*(int *)((int)&(this->tMenu).fNeverAnyEnabled + (iVar6 * 0x10000 >> 0xe)) == 0)) {
      return;
    }
    iVar8 = iVar6 * 0x10000 >> 0x10;
    if ((-1 < iVar8) && (p_Var7 = (this->tMenu).fItemList[iVar8], p_Var7 != (_func_21 *)0x0)) {
      if (*(short *)((this->tMenu)._vf + 8) == 0) {
        local_28 = (uint)(iVar8 == (this->tMenu).fCurrentItem);
      }
      else {
        local_28 = 0;
      }
      (**(code **)(*(int *)(p_Var7 + 0x18) + 0x54))
                (p_Var7 + (int)*(short *)(*(int *)(p_Var7 + 0x18) + 0x50),local_28);
      p_Var7 = (this->tMenu).fItemList[(int)(short)iVar6];
      iVar8 = *(int *)(p_Var7 + 0x18);
      iVar5 = (int)*(short *)((this->tMenu)._vf + 8);
      if (iVar5 == 0) {
        local_28 = (uint)((int)(short)iVar6 == (this->tMenu).fCurrentItem);
      }
      else {
        local_28 = 0;
      }
      (**(code **)(iVar8 + 0x34))
                (p_Var7 + (int)*(short *)(iVar8 + 0x30),(int)x,
                 iVar5 + (int)y + (int)(short)slideOffset + ((int)(short)iVar4 + -1) * 0x18 + 5,
                 (int)w,local_28);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 * 0x10000 >> 0x10 < 5);
  return;
}



// decompiled code
// original method signature: 
// struct tMenuItemSlidingMenu * /*$ra*/ __20tMenuItemSlidingMenuUissssb(struct tMenuItemSlidingMenu *this /*$s0*/, unsigned int textDescription /*$a1*/, short width /*$a2*/, short height /*$a3*/, int diffx /*stack 16*/, int diffy /*stack 20*/, void * fillback /*stack 24*/)
 // line 612, offset 0x8001d160
	/* begin block 1 */
		// Start line: 613
		// Start offset: 0x8001D160
	/* end block 1 */
	// End offset: 0x8001D160
	// End Line: 613

	/* begin block 2 */
		// Start line: 1412
	/* end block 2 */
	// End Line: 1413

	/* begin block 3 */
		// Start line: 1419
	/* end block 3 */
	// End Line: 1420

	/* begin block 4 */
		// Start line: 1419
	/* end block 4 */
	// End Line: 1420

tMenuItemSlidingMenu *
__20tMenuItemSlidingMenuUissssb
          (tMenuItemSlidingMenu *this,uint textDescription,short width,short height,int diffx,
          int diffy,void *fillback)

{
  uint uVar1;
  
  __9tMenuItemUi((tMenuItem *)this,textDescription);
  uVar1 = (this->tMenuItem).fFlags;
  *(undefined4 *)((this->tMenuItem)._vf + 4) = 0;
  *(undefined4 *)((this->tMenuItem)._vf + 8) = 0;
  *(short *)&this->currMenu = width;
  *(short *)((int)&this->currMenu + 2) = height;
  (this->tMenuItem).fSelFade = 0;
  (this->tMenuItem).fFlags = uVar1 | 0x80;
  uVar1 = (this->tMenuItem).fFlags;
  *(undefined4 *)(this->tMenuItem)._vf = 0x80010e48;
  *(short *)&this->fTransitioningOut = (short)diffx;
  *(undefined2 *)((int)&this->fTransitioningOut + 2) = (short)diffy;
  this->fClosing = fillback;
  (this->tMenuItem).fFlags = uVar1 | 0x80;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._20tMenuItemSlidingMenu(struct tMenuItemSlidingMenu *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 628, offset 0x8001d208
	/* begin block 1 */
		// Start line: 629
		// Start offset: 0x8001D208
	/* end block 1 */
	// End offset: 0x8001D208
	// End Line: 629

	/* begin block 2 */
		// Start line: 1478
	/* end block 2 */
	// End Line: 1479

	/* begin block 3 */
		// Start line: 1482
	/* end block 3 */
	// End Line: 1483

	/* begin block 4 */
		// Start line: 1482
	/* end block 4 */
	// End Line: 1483

void ___20tMenuItemSlidingMenu(tMenuItemSlidingMenu *this,int __in_chrg)

{
  *(undefined4 *)(this->tMenuItem)._vf = 0x80010e48;
  ___9tMenuItem((tMenuItem *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__20tMenuItemSlidingMenu(struct tMenuItemSlidingMenu *this /*$a0*/)
 // line 634, offset 0x8001d230
	/* begin block 1 */
		// Start line: 635
		// Start offset: 0x8001D230
	/* end block 1 */
	// End offset: 0x8001D254
	// End Line: 642

	/* begin block 2 */
		// Start line: 1488
	/* end block 2 */
	// End Line: 1489

	/* begin block 3 */
		// Start line: 1494
	/* end block 3 */
	// End Line: 1495

	/* begin block 4 */
		// Start line: 1494
	/* end block 4 */
	// End Line: 1495

	/* begin block 5 */
		// Start line: 1497
	/* end block 5 */
	// End Line: 1498

void TransitionOff__20tMenuItemSlidingMenu(tMenuItemSlidingMenu *this)

{
  int iVar1;
  
  iVar1 = *(int *)((this->tMenuItem)._vf + 4);
  this->fHeight = 0;
  *(undefined4 *)&this->fFadeVal = 1;
  if (iVar1 != 0) {
    *(undefined4 *)&this->fOpenHeight = 1;
    this->fHeight = 0x1e;
    this->fWidth = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__20tMenuItemSlidingMenu(struct tMenuItemSlidingMenu *this /*$a0*/)
 // line 648, offset 0x8001d25c
	/* begin block 1 */
		// Start line: 649
		// Start offset: 0x8001D25C
	/* end block 1 */
	// End offset: 0x8001D25C
	// End Line: 651

	/* begin block 2 */
		// Start line: 1518
	/* end block 2 */
	// End Line: 1519

	/* begin block 3 */
		// Start line: 1525
	/* end block 3 */
	// End Line: 1526

	/* begin block 4 */
		// Start line: 1525
	/* end block 4 */
	// End Line: 1526

	/* begin block 5 */
		// Start line: 1527
	/* end block 5 */
	// End Line: 1528

	/* begin block 6 */
		// Start line: 1297
	/* end block 6 */
	// End Line: 1298

void TransitionOn__20tMenuItemSlidingMenu(tMenuItemSlidingMenu *this)

{
  short sVar1;
  
  sVar1 = *(short *)((int)&this->currMenu + 2);
  this->fHeight = -0x1e;
  *(undefined4 *)&this->fOpenHeight = 1;
  *(undefined2 *)&this->nextMenu = 0;
  *(undefined4 *)&this->fFadeVal = 0;
  this->fWidth = 0x80;
  *(short *)((int)&this->nextMenu + 2) = sVar1 + (sVar1 >> 1);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__20tMenuItemSlidingMenu(struct tMenuItemSlidingMenu *this /*$a0*/)
 // line 661, offset 0x8001d294
	/* begin block 1 */
		// Start line: 662
		// Start offset: 0x8001D294
	/* end block 1 */
	// End offset: 0x8001D310
	// End Line: 677

	/* begin block 2 */
		// Start line: 1563
	/* end block 2 */
	// End Line: 1564

	/* begin block 3 */
		// Start line: 1567
	/* end block 3 */
	// End Line: 1568

	/* begin block 4 */
		// Start line: 1567
	/* end block 4 */
	// End Line: 1568

	/* begin block 5 */
		// Start line: 1568
	/* end block 5 */
	// End Line: 1569

	/* begin block 6 */
		// Start line: 1568
	/* end block 6 */
	// End Line: 1569

void * TransitionIsFinished__20tMenuItemSlidingMenu(tMenuItemSlidingMenu *this)

{
  short sVar1;
  
  if ((*(int *)((this->tMenuItem)._vf + 4) == 0) || (*(int *)((this->tMenuItem)._vf + 8) == 0)) {
    this->fHeight = 0;
  }
  else {
    sVar1 = this->fHeight;
    if (sVar1 != 0) {
      if (sVar1 < 0) {
        if (this->fWidth < 1) goto LAB_8001d2b8;
        sVar1 = this->fHeight;
      }
      if ((sVar1 < 1) || (this->fWidth < 0x80)) {
        *(undefined4 *)&this->fOpenHeight = 1;
        goto LAB_8001d310;
      }
    }
  }
LAB_8001d2b8:
  *(undefined4 *)&this->fOpenHeight = 0;
LAB_8001d310:
  return (void *)(*(uint *)&this->fOpenHeight ^ 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__20tMenuItemSlidingMenub(struct tMenuItemSlidingMenu *this /*$s0*/, void * selected /*$s1*/)
 // line 680, offset 0x8001d31c
	/* begin block 1 */
		// Start line: 681
		// Start offset: 0x8001D31C
	/* end block 1 */
	// End offset: 0x8001D35C
	// End Line: 690

	/* begin block 2 */
		// Start line: 1601
	/* end block 2 */
	// End Line: 1602

	/* begin block 3 */
		// Start line: 1605
	/* end block 3 */
	// End Line: 1606

	/* begin block 4 */
		// Start line: 1605
	/* end block 4 */
	// End Line: 1606

void UpdateTransition__20tMenuItemSlidingMenub(tMenuItemSlidingMenu *this,void *selected)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)this->fWidth + (int)this->fHeight;
  if (0x80 < iVar2) {
    iVar2 = 0x80;
  }
  sVar1 = (short)iVar2;
  if (iVar2 < 0) {
    sVar1 = 0;
  }
  iVar2 = *(int *)(this->tMenuItem)._vf;
  this->fWidth = sVar1;
  (**(code **)(iVar2 + 0x4c))((int)&(this->tMenuItem).fFlags + (int)*(short *)(iVar2 + 0x48));
  UpdateTransition__9tMenuItemb((tMenuItem *)this,selected);
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ DebounceKeys__20tMenuItemSlidingMenu(struct tMenuItemSlidingMenu *this /*$a0*/)
 // line 696, offset 0x8001d398
	/* begin block 1 */
		// Start line: 697
		// Start offset: 0x8001D398
	/* end block 1 */
	// End offset: 0x8001D3D0
	// End Line: 699

	/* begin block 2 */
		// Start line: 1633
	/* end block 2 */
	// End Line: 1634

	/* begin block 3 */
		// Start line: 1639
	/* end block 3 */
	// End Line: 1640

	/* begin block 4 */
		// Start line: 1639
	/* end block 4 */
	// End Line: 1640

long DebounceKeys__20tMenuItemSlidingMenu(tMenuItemSlidingMenu *this)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((this->tMenuItem)._vf + 4);
  uVar1 = 0x600;
  if (iVar2 != 0) {
    uVar1 = (**(code **)(*(int *)(iVar2 + 0x68) + 0x24))
                      (iVar2 + (int)*(short *)(*(int *)(iVar2 + 0x68) + 0x20));
    uVar1 = uVar1 | 0x600;
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__20tMenuItemSlidingMenub(struct tMenuItemSlidingMenu *this /*$a0*/, void * selected /*$a3*/)
 // line 705, offset 0x8001d3e0
	/* begin block 1 */
		// Start line: 706
		// Start offset: 0x8001D3E0
	/* end block 1 */
	// End offset: 0x8001D3E0
	// End Line: 706

	/* begin block 2 */
		// Start line: 1650
	/* end block 2 */
	// End Line: 1651

	/* begin block 3 */
		// Start line: 1657
	/* end block 3 */
	// End Line: 1658

	/* begin block 4 */
		// Start line: 1657
	/* end block 4 */
	// End Line: 1658

void Draw__20tMenuItemSlidingMenub(tMenuItemSlidingMenu *this,void *selected)

{
  int iVar1;
  
  iVar1 = *(int *)(this->tMenuItem)._vf;
  (**(code **)(iVar1 + 0x2c))
            ((int)&(this->tMenuItem).fFlags + (int)*(short *)(iVar1 + 0x28),0,0,selected);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdatefOpenHeight__20tMenuItemSlidingMenub(struct tMenuItemSlidingMenu *this /*$a0*/, void * selected /*$a1*/)
 // line 711, offset 0x8001d41c
	/* begin block 1 */
		// Start line: 712
		// Start offset: 0x8001D41C
	/* end block 1 */
	// End offset: 0x8001D634
	// End Line: 770

	/* begin block 2 */
		// Start line: 1665
	/* end block 2 */
	// End Line: 1666

	/* begin block 3 */
		// Start line: 1670
	/* end block 3 */
	// End Line: 1671

	/* begin block 4 */
		// Start line: 1670
	/* end block 4 */
	// End Line: 1671

	/* begin block 5 */
		// Start line: 1673
	/* end block 5 */
	// End Line: 1674

void UpdatefOpenHeight__20tMenuItemSlidingMenub(tMenuItemSlidingMenu *this,void *selected)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  
  this->fInTransition = (void *)0x0;
  if (*(short *)&this->nextMenu == 0) {
    sVar2 = *(short *)((int)&this->currMenu + 2);
    *(short *)((int)&this->nextMenu + 2) = sVar2 + (sVar2 >> 1);
  }
  if (*(int *)((this->tMenuItem)._vf + 8) != *(int *)((this->tMenuItem)._vf + 4)) {
    _uVar1 = (int)*(short *)&this->nextMenu + -4;
    uVar1 = (undefined2)_uVar1;
    if (0 < (int)*(short *)&this->nextMenu) {
      if (_uVar1 < 0) {
        uVar1 = 0;
      }
      *(undefined2 *)&this->nextMenu = uVar1;
      *(undefined **)&this->fInTransition = &DAT_00000001;
      goto LAB_8001d598;
    }
  }
  if (*(int *)((this->tMenuItem)._vf + 8) == 0) {
    _uVar1 = (int)this->fWidth;
    if (0x7f < _uVar1) goto code_r0x8001d4c8;
    _uVar1 = _uVar1 + 0x28;
    sVar2 = (short)_uVar1;
    if (*(int *)&this->fOpenHeight != 0) goto LAB_8001d598;
  }
  else {
    _uVar1 = (int)this->fWidth;
code_r0x8001d4c8:
    if (((0 < _uVar1) && (*(int *)((this->tMenuItem)._vf + 4) == 0)) &&
       (*(int *)((this->tMenuItem)._vf + 8) != 0)) {
      sVar2 = (short)(_uVar1 + -0x28);
      if (*(int *)&this->fOpenHeight == 0) {
        if (_uVar1 + -0x28 < 0) {
          sVar2 = 0;
        }
        this->fWidth = sVar2;
      }
      if (*(int *)&this->fFadeVal == 0) {
        *(undefined4 *)((this->tMenuItem)._vf + 4) = *(undefined4 *)((this->tMenuItem)._vf + 8);
      }
      goto LAB_8001d598;
    }
    iVar3 = *(int *)((this->tMenuItem)._vf + 8);
    _uVar1 = *(int *)&this->fFadeVal;
    *(int *)((this->tMenuItem)._vf + 4) = iVar3;
    if ((_uVar1 != 0) || (*(int *)&this->fOpenHeight != 0)) goto LAB_8001d598;
    if (iVar3 != 0) {
      _uVar1 = (int)this->fWidth + -0x28;
      sVar2 = (short)_uVar1;
      if (_uVar1 < 0) {
        sVar2 = 0;
      }
      this->fWidth = sVar2;
      goto LAB_8001d598;
    }
    _uVar1 = (int)this->fWidth + 0x28;
    sVar2 = (short)_uVar1;
  }
  if (0x80 < _uVar1) {
    sVar2 = 0x80;
  }
  this->fWidth = sVar2;
LAB_8001d598:
  if (*(int *)((this->tMenuItem)._vf + 4) != 0) {
    if (selected != (void *)0x0) {
      if (this->fInTransition == (void *)0x0) {
        sVar2 = *(short *)((int)&this->currMenu + 2);
        _uVar1 = (int)*(short *)&this->nextMenu + 4;
        if ((int)*(short *)&this->nextMenu < (int)sVar2) {
          if (_uVar1 < (int)sVar2) {
            sVar2 = (short)_uVar1;
          }
          *(short *)&this->nextMenu = sVar2;
        }
        else {
          _uVar1 = (int)*(short *)((int)&this->nextMenu + 2) + -6;
          uVar1 = (undefined2)_uVar1;
          if (_uVar1 < 0) {
            uVar1 = 0;
          }
          *(undefined2 *)((int)&this->nextMenu + 2) = uVar1;
        }
      }
      if (selected != (void *)0x0) {
        return;
      }
    }
    _uVar1 = (int)*(short *)&this->nextMenu + -4;
    uVar1 = (undefined2)_uVar1;
    if (0 < (int)*(short *)&this->nextMenu) {
      if (_uVar1 < 0) {
        uVar1 = 0;
      }
      *(undefined2 *)&this->nextMenu = uVar1;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__20tMenuItemSlidingMenuiib(struct tMenuItemSlidingMenu *this /*$s6*/, int offx /*$s0*/, int offy /*$s1*/, void * selected /*$a3*/)
 // line 777, offset 0x8001d63c
	/* begin block 1 */
		// Start line: 778
		// Start offset: 0x8001D63C
		// Variables:
	// 		int ColText; // stack offset -64
	// 		int x; // stack offset -60
	// 		int y; // stack offset -56
	// 		struct tTexture_ShapeInfo *shape; // stack offset -52
	// 		static int flareextra; // offset 0x0
	// 		void * fPlayList; // stack offset -48

		/* begin block 1.1 */
			// Start line: 809
			// Start offset: 0x8001D728

			/* begin block 1.1.1 */
				// Start line: 810
				// Start offset: 0x8001D748
				// Variables:
			// 		struct tDrawShapeExtended drawFlags; // stack offset -88
			// 		int width; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8001D824
			// End Line: 818
		/* end block 1.1 */
		// End offset: 0x8001D824
		// End Line: 818

		/* begin block 1.2 */
			// Start line: 821
			// Start offset: 0x8001D824

			/* begin block 1.2.1 */
				// Start line: 822
				// Start offset: 0x8001D834
				// Variables:
			// 		int xx; // $s4
			// 		int yy; // $s5
			// 		int ww; // $fp
			// 		int hh; // $s2
			// 		struct DRAWENV *drenv; // stack offset -44
			// 		struct DR_AREA *daprim; // $a0
			// 		struct RECT full; // stack offset -88
			// 		struct RECT temp; // stack offset -80
			// 		int gray; // $s1
			// 		struct tTexture_ShapeInfo *shapetop; // $s7
			// 		struct tTexture_ShapeInfo *shapebottom; // $s3
			/* end block 1.2.1 */
			// End offset: 0x8001DC50
			// End Line: 884
		/* end block 1.2 */
		// End offset: 0x8001DC50
		// End Line: 884
	/* end block 1 */
	// End offset: 0x8001DC50
	// End Line: 884

	/* begin block 2 */
		// Start line: 1794
	/* end block 2 */
	// End Line: 1795

	/* begin block 3 */
		// Start line: 1802
	/* end block 3 */
	// End Line: 1803

	/* begin block 4 */
		// Start line: 1802
	/* end block 4 */
	// End Line: 1803

void Draw__20tMenuItemSlidingMenuiib(tMenuItemSlidingMenu *this,int offx,int offy,void *selected)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  tTexture_ShapeInfo *ptVar4;
  int h;
  char *sMenuText;
  uint uVar5;
  int y;
  int x;
  int y_00;
  int w;
  ushort local_58;
  short local_56;
  int local_54;
  undefined2 local_50;
  short local_4e;
  short local_4c;
  ushort local_4a;
  int local_40;
  int local_3c;
  int local_38;
  short *local_34;
  uint local_30;
  DRAWENV *local_2c;
  
  h = *(int *)(this->tMenuItem)._vf;
  (**(code **)(h + 0x5c))((int)&(this->tMenuItem).fFlags + (int)*(short *)(h + 0x58),selected);
  local_40 = CalcTextFadeSelToHi__F13tMenuTextTypess
                       (textType_Options,(this->tMenuItem).fSelFade,this->fWidth);
  local_3c = TextSys_WordX__Fi((this->tMenuItem).fTextDescription);
  local_3c = local_3c + offx;
  local_38 = TextSys_WordY__Fi((this->tMenuItem).fTextDescription);
  fHelpText = -1;
  local_38 = local_38 + offy;
  local_34 = &gHelpShapes[0x1a].centerx;
  bVar1 = *(__vtbl_ptr_type **)((this->tMenuItem)._vf + 4) ==
          (menuDefs->menuPinkSlipCarOptionsPlayerTwo).tMenuNFS4.tMenu._vf + 2;
  local_30 = (uint)bVar1;
  if (((int)this->fWidth != 0x80) && (bVar1)) {
    DrawLeftFlare__FiiiRi
              (local_38,(int)(this->tMenuItem).fSelFade,(int)this->fWidth,(int *)&DAT_800515a8);
  }
  h = *(int *)((this->tMenuItem)._vf + 4);
  if ((h != 0) || (local_30 != 0)) {
    h = 0xdc;
    if (local_30 == 0) {
      h = (int)*(short *)&this->currMenu;
    }
    local_54 = CalcFadeVal__Fiiii(0,(int)&DAT_0000bebe,(int)(this->tMenuItem).fSelFade,
                                  (int)this->fWidth);
    y = local_38 + -2;
    h = local_3c + h;
    if (local_30 != 0) {
      y = local_38 + -3;
    }
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (0x39,0x18,(h - (int)local_34[8]) + -10,y,0,1,(tDrawShapeExtended *)&local_58);
    y = local_38 + 4;
    if (local_30 != 0) {
      y = local_38 + 3;
    }
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (0x3a,0x18,(h - (int)local_34[8]) + -10,y,0,1,(tDrawShapeExtended *)&local_58);
    h = *(int *)((this->tMenuItem)._vf + 4);
  }
  if (h != 0) {
    local_4a = *(ushort *)&this->nextMenu;
    local_4c = *(short *)&this->currMenu;
    w = (int)local_4c;
    x = local_3c + (int)*(short *)&this->fTransitioningOut;
    y_00 = local_38 + (int)*(short *)((int)&this->fTransitioningOut + 2);
    local_2c = Draw_GetDRAWENV__Fii(Draw_gPlayer1View,gFlip);
    puVar3 = DAT_1f800004;
    puVar2 = DAT_1f800000;
    local_58 = 0;
    local_56 = (local_2c->clip).y;
    local_54 = CONCAT22(screenheight._0_2_,0x200);
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar5 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 3;
    *puVar2 = *puVar2 & 0xff000000 | uVar5;
    SetDrawArea((int)puVar3,(ushort *)&local_58);
    h = (int)((uint)local_4a << 0x10) >> 0x11;
    SubtractiveBox__Fiiiiiiii(x,y_00,w,h,(int)&DAT_00505050,(int)&DAT_00505050,0,0);
    SubtractiveBox__Fiiiiiiii(x,y_00 + h,w,h,0,0,(int)&DAT_00505050,(int)&DAT_00505050);
    ptVar4 = gHelpShapes;
    h = *(int *)((this->tMenuItem)._vf + 4);
    y = *(int *)(h + 0x68);
    (**(code **)(y + 0x5c))
              (h + (int)*(short *)(y + 0x58),x * 0x10000 >> 0x10,y_00 * 0x10000 >> 0x10,w,
               (int)((uint)*(ushort *)((int)&this->nextMenu + 2) << 0x11) >> 0x10,
               (int)*(short *)((int)&this->currMenu + 2));
    h = (int)((uint)local_4a << 0x10) >> 0x10;
    if ((this->fClosing != (void *)0x0) && ((int)*(short *)((int)&ptVar4[0x1c].shpptr + 2) < h)) {
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0x1f,0xc,x,y_00,0,0,(tDrawShapeExtended *)0x0)
      ;
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (0x1f,8,(x + w) - (int)*(short *)&ptVar4[0x1c].shpptr,y_00,0,0,
                 (tDrawShapeExtended *)0x0);
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (0x20,0xc,x,(y_00 + h) - (int)(short)ptVar4[0x1c].clut,0,0,(tDrawShapeExtended *)0x0
                );
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (0x20,8,(x + w) - (int)(short)ptVar4[0x1c].tpage,
                 (y_00 + h) - (int)(short)ptVar4[0x1c].clut,0,0,(tDrawShapeExtended *)0x0);
    }
    PSXDrawSquare__Fiiiii
              (0,x + (int)*(short *)&ptVar4[0x1c].shpptr + 5,y_00,
               ((w - (int)*(short *)&ptVar4[0x1c].shpptr) - (int)(short)ptVar4[0x1c].tpage) + -10,h)
    ;
    y = (int)*(short *)((int)&ptVar4[0x1c].shpptr + 2);
    if (y + (int)(short)ptVar4[0x1c].clut < h) {
      PSXDrawSquare__Fiiiii(0,x,y_00 + y,w,(h - y) - (int)(short)ptVar4[0x1c].clut);
    }
    puVar3 = DAT_1f800004;
    puVar2 = DAT_1f800000;
    local_50 = (undefined2)x;
    local_4e = (local_2c->clip).y + (short)y_00;
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar5 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 3;
    *puVar2 = *puVar2 & 0xff000000 | uVar5;
    SetDrawArea((int)puVar3,(ushort *)(&local_58 + 8));
    if (fHelpText != -1) {
      sMenuText = TextSys_Word__Fi(fHelpText);
      h = TextSys_WordX__Fi(fHelpText);
      y = TextSys_WordY__Fi(fHelpText);
      FETextRender_FullTextRGB__FPcssics(sMenuText,(short)h,(short)y,PulsateYellow,0,2);
    }
    sMenuText = TextSys_Word__Fi((this->tMenuItem).fTextDescription);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,(short)local_3c,(short)local_38,local_40,0,(uint)(local_30 != 0));
    h = local_38 + -2;
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (0x1e,8,(local_3c + (int)*(short *)&this->currMenu) - (int)local_34[8],h,
               (int)this->fWidth,0,(tDrawShapeExtended *)0x0);
    if (this->fClosing != (void *)0x0) {
      PSXDrawSquare__Fiiiii
                (0,local_3c,h,(int)*(short *)&this->currMenu - (int)local_34[8],(int)local_34[9]);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__20tMenuItemSlidingMenu7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuItemSlidingMenu *this /*$s0*/, enum tPlayer fromPlayer /*$s2*/, enum tInputKeyType *keyval /*$s1*/, struct tMenuCommand *command /*$s3*/)
 // line 890, offset 0x8001dc80
	/* begin block 1 */
		// Start line: 891
		// Start offset: 0x8001DC80
	/* end block 1 */
	// End offset: 0x8001DCFC
	// End Line: 901

	/* begin block 2 */
		// Start line: 2122
	/* end block 2 */
	// End Line: 2123

	/* begin block 3 */
		// Start line: 2129
	/* end block 3 */
	// End Line: 2130

	/* begin block 4 */
		// Start line: 2129
	/* end block 4 */
	// End Line: 2130

void ProcessInput__20tMenuItemSlidingMenu7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tMenuItemSlidingMenu *this,tPlayer fromPlayer,tInputKeyType *keyval,
               tMenuCommand *command)

{
  int iVar1;
  
  if ((*(short *)&this->nextMenu == *(short *)((int)&this->currMenu + 2)) &&
     (iVar1 = *(int *)((this->tMenuItem)._vf + 4), iVar1 != 0)) {
    (**(code **)(*(int *)(iVar1 + 0x68) + 0x1c))
              (iVar1 + (int)*(short *)(*(int *)(iVar1 + 0x68) + 0x18));
  }
  if (*keyval == kInput_KeyType_Down) {
    *keyval = kInput_KeyType_AlreadyProcessed;
  }
  ProcessInput__9tMenuItem7tPlayerR13tInputKeyTypeR12tMenuCommand((tMenuItem *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetMenu__20tMenuItemSlidingMenubP14tInsideBoxMenu(struct tMenuItemSlidingMenu *this /*$a0*/, void * bothmenus /*$a1*/, struct tInsideBoxMenu *menu /*$a2*/)
 // line 904, offset 0x8001dd28
	/* begin block 1 */
		// Start line: 905
		// Start offset: 0x8001DD28

		/* begin block 1.1 */
			// Start line: 911
			// Start offset: 0x8001DD34

			/* begin block 1.1.1 */
				// Start line: 912
				// Start offset: 0x8001DD44

				/* begin block 1.1.1.1 */
					// Start line: 912
					// Start offset: 0x8001DD44
					// Variables:
				// 		struct tMenuItem *this; // $a0

					/* begin block 1.1.1.1.1 */
						// Start line: 912
						// Start offset: 0x8001DD44
					/* end block 1.1.1.1.1 */
					// End offset: 0x8001DD44
					// End Line: 912
				/* end block 1.1.1.1 */
				// End offset: 0x8001DD44
				// End Line: 912
			/* end block 1.1.1 */
			// End offset: 0x8001DD44
			// End Line: 912

			/* begin block 1.1.2 */
				// Start line: 917
				// Start offset: 0x8001DD58

				/* begin block 1.1.2.1 */
					// Start line: 917
					// Start offset: 0x8001DD58
					// Variables:
				// 		struct tMenuItem *this; // $a0

					/* begin block 1.1.2.1.1 */
						// Start line: 917
						// Start offset: 0x8001DD58
					/* end block 1.1.2.1.1 */
					// End offset: 0x8001DD64
					// End Line: 917
				/* end block 1.1.2.1 */
				// End offset: 0x8001DD64
				// End Line: 917
			/* end block 1.1.2 */
			// End offset: 0x8001DD64
			// End Line: 919
		/* end block 1.1 */
		// End offset: 0x8001DD64
		// End Line: 919
	/* end block 1 */
	// End offset: 0x8001DD64
	// End Line: 919

	/* begin block 2 */
		// Start line: 2153
	/* end block 2 */
	// End Line: 2154

	/* begin block 3 */
		// Start line: 2157
	/* end block 3 */
	// End Line: 2158

	/* begin block 4 */
		// Start line: 2157
	/* end block 4 */
	// End Line: 2158

	/* begin block 5 */
		// Start line: 2159
	/* end block 5 */
	// End Line: 2160

void SetMenu__20tMenuItemSlidingMenubP14tInsideBoxMenu
               (tMenuItemSlidingMenu *this,void *bothmenus,tInsideBoxMenu *menu)

{
  *(tInsideBoxMenu **)((this->tMenuItem)._vf + 8) = menu;
  if (bothmenus != (void *)0x0) {
    *(tInsideBoxMenu **)((this->tMenuItem)._vf + 4) = menu;
  }
  if (*(int *)((this->tMenuItem)._vf + 8) == 0) {
    (this->tMenuItem).fFlags = (this->tMenuItem).fFlags | 1;
    return;
  }
  (this->tMenuItem).fFlags = (this->tMenuItem).fFlags & 0xfffffffe;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdatefOpenHeight__25tMenuItemSlidingActivatedb(struct tMenuItemSlidingActivated *this /*$a0*/)
 // line 925, offset 0x8001dd6c
	/* begin block 1 */
		// Start line: 926
		// Start offset: 0x8001DD6C
	/* end block 1 */
	// End offset: 0x8001DDCC
	// End Line: 932

	/* begin block 2 */
		// Start line: 2192
	/* end block 2 */
	// End Line: 2193

	/* begin block 3 */
		// Start line: 2199
	/* end block 3 */
	// End Line: 2200

	/* begin block 4 */
		// Start line: 2199
	/* end block 4 */
	// End Line: 2200

	/* begin block 5 */
		// Start line: 2200
	/* end block 5 */
	// End Line: 2201

	/* begin block 6 */
		// Start line: 2200
	/* end block 6 */
	// End Line: 2201

void UpdatefOpenHeight__25tMenuItemSlidingActivatedb(tMenuItemSlidingActivated *this)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  
  if (*(int *)&(this->tMenuItemSlidingMenu).fDiffX == 0) {
    sVar1 = *(short *)((int)&(this->tMenuItemSlidingMenu).nextMenu + 2) + 3;
  }
  else {
    sVar1 = *(short *)((int)&(this->tMenuItemSlidingMenu).nextMenu + 2) + -3;
  }
  *(short *)((int)&(this->tMenuItemSlidingMenu).nextMenu + 2) = sVar1;
  iVar4 = (int)*(short *)((int)&(this->tMenuItemSlidingMenu).nextMenu + 2);
  iVar2 = (uint)*(ushort *)((int)&(this->tMenuItemSlidingMenu).currMenu + 2) << 0x10;
  iVar2 = (iVar2 >> 0x10) + (iVar2 >> 0x11);
  if (iVar4 < iVar2) {
    iVar2 = iVar4;
  }
  uVar3 = (undefined2)iVar2;
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  *(undefined2 *)((int)&(this->tMenuItemSlidingMenu).nextMenu + 2) = uVar3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__25tMenuItemSlidingActivated(struct tMenuItemSlidingActivated *this /*$a0*/)
 // line 937, offset 0x8001ddd4
	/* begin block 1 */
		// Start line: 938
		// Start offset: 0x8001DDD4
	/* end block 1 */
	// End offset: 0x8001DDF8
	// End Line: 945

	/* begin block 2 */
		// Start line: 2217
	/* end block 2 */
	// End Line: 2218

	/* begin block 3 */
		// Start line: 2223
	/* end block 3 */
	// End Line: 2224

	/* begin block 4 */
		// Start line: 2223
	/* end block 4 */
	// End Line: 2224

	/* begin block 5 */
		// Start line: 2226
	/* end block 5 */
	// End Line: 2227

void TransitionOff__25tMenuItemSlidingActivated(tMenuItemSlidingActivated *this)

{
  int iVar1;
  
  iVar1 = *(int *)((this->tMenuItemSlidingMenu).tMenuItem._vf + 4);
  (this->tMenuItemSlidingMenu).fHeight = 0;
  *(undefined4 *)&(this->tMenuItemSlidingMenu).fFadeVal = 1;
  if (iVar1 != 0) {
    *(undefined4 *)&(this->tMenuItemSlidingMenu).fOpenHeight = 1;
    (this->tMenuItemSlidingMenu).fHeight = 0x1e;
    (this->tMenuItemSlidingMenu).fWidth = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__25tMenuItemSlidingActivated(struct tMenuItemSlidingActivated *this /*$a0*/)
 // line 949, offset 0x8001de00
	/* begin block 1 */
		// Start line: 950
		// Start offset: 0x8001DE00
	/* end block 1 */
	// End offset: 0x8001DE00
	// End Line: 951

	/* begin block 2 */
		// Start line: 2245
	/* end block 2 */
	// End Line: 2246

	/* begin block 3 */
		// Start line: 2250
	/* end block 3 */
	// End Line: 2251

	/* begin block 4 */
		// Start line: 2250
	/* end block 4 */
	// End Line: 2251

	/* begin block 5 */
		// Start line: 2251
	/* end block 5 */
	// End Line: 2252

	/* begin block 6 */
		// Start line: 2251
	/* end block 6 */
	// End Line: 2252

	/* begin block 7 */
		// Start line: 2253
	/* end block 7 */
	// End Line: 2254

void TransitionOn__25tMenuItemSlidingActivated(tMenuItemSlidingActivated *this)

{
  short sVar1;
  
  sVar1 = *(short *)((int)&(this->tMenuItemSlidingMenu).currMenu + 2);
  (this->tMenuItemSlidingMenu).fHeight = -0x1e;
  *(undefined4 *)&(this->tMenuItemSlidingMenu).fOpenHeight = 1;
  *(undefined4 *)&(this->tMenuItemSlidingMenu).fDiffX = 0;
  *(undefined4 *)&(this->tMenuItemSlidingMenu).fFadeVal = 0;
  (this->tMenuItemSlidingMenu).fWidth = 0x80;
  *(short *)((int)&(this->tMenuItemSlidingMenu).nextMenu + 2) = sVar1 + (sVar1 >> 1);
  *(short *)&(this->tMenuItemSlidingMenu).nextMenu = sVar1;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__25tMenuItemSlidingActivated(struct tMenuItemSlidingActivated *this /*$a0*/)
 // line 964, offset 0x8001de40
	/* begin block 1 */
		// Start line: 965
		// Start offset: 0x8001DE40
	/* end block 1 */
	// End offset: 0x8001DEBC
	// End Line: 980

	/* begin block 2 */
		// Start line: 2295
	/* end block 2 */
	// End Line: 2296

	/* begin block 3 */
		// Start line: 2299
	/* end block 3 */
	// End Line: 2300

	/* begin block 4 */
		// Start line: 2299
	/* end block 4 */
	// End Line: 2300

	/* begin block 5 */
		// Start line: 2300
	/* end block 5 */
	// End Line: 2301

	/* begin block 6 */
		// Start line: 2300
	/* end block 6 */
	// End Line: 2301

void * TransitionIsFinished__25tMenuItemSlidingActivated(tMenuItemSlidingActivated *this)

{
  short sVar1;
  
  if ((*(int *)((this->tMenuItemSlidingMenu).tMenuItem._vf + 4) == 0) ||
     (*(int *)((this->tMenuItemSlidingMenu).tMenuItem._vf + 8) == 0)) {
    (this->tMenuItemSlidingMenu).fHeight = 0;
  }
  else {
    sVar1 = (this->tMenuItemSlidingMenu).fHeight;
    if (sVar1 != 0) {
      if (sVar1 < 0) {
        if ((this->tMenuItemSlidingMenu).fWidth < 1) goto LAB_8001de64;
        sVar1 = (this->tMenuItemSlidingMenu).fHeight;
      }
      if ((sVar1 < 1) || ((this->tMenuItemSlidingMenu).fWidth < 0x80)) {
        *(undefined4 *)&(this->tMenuItemSlidingMenu).fOpenHeight = 1;
        goto LAB_8001debc;
      }
    }
  }
LAB_8001de64:
  *(undefined4 *)&(this->tMenuItemSlidingMenu).fOpenHeight = 0;
LAB_8001debc:
  return (void *)(*(uint *)&(this->tMenuItemSlidingMenu).fOpenHeight ^ 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__25tMenuItemSlidingActivatedb(struct tMenuItemSlidingActivated *this /*$s0*/, void * selected /*$s1*/)
 // line 983, offset 0x8001dec8
	/* begin block 1 */
		// Start line: 984
		// Start offset: 0x8001DEC8
	/* end block 1 */
	// End offset: 0x8001DF08
	// End Line: 986

	/* begin block 2 */
		// Start line: 2333
	/* end block 2 */
	// End Line: 2334

	/* begin block 3 */
		// Start line: 2337
	/* end block 3 */
	// End Line: 2338

	/* begin block 4 */
		// Start line: 2337
	/* end block 4 */
	// End Line: 2338

void UpdateTransition__25tMenuItemSlidingActivatedb(tMenuItemSlidingActivated *this,void *selected)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)(this->tMenuItemSlidingMenu).fWidth + (int)(this->tMenuItemSlidingMenu).fHeight;
  if (0x80 < iVar2) {
    iVar2 = 0x80;
  }
  sVar1 = (short)iVar2;
  if (iVar2 < 0) {
    sVar1 = 0;
  }
  iVar2 = *(int *)(this->tMenuItemSlidingMenu).tMenuItem._vf;
  (this->tMenuItemSlidingMenu).fWidth = sVar1;
  (**(code **)(iVar2 + 0x4c))
            ((int)&(this->tMenuItemSlidingMenu).tMenuItem.fFlags + (int)*(short *)(iVar2 + 0x48));
  UpdateTransition__9tMenuItemb((tMenuItem *)this,selected);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__25tMenuItemSlidingActivated7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tMenuItemSlidingActivated *this /*$s1*/, enum tPlayer fromPlayer /*$s3*/, enum tInputKeyType *keyval /*$s2*/, struct tMenuCommand *command /*$s4*/)
 // line 990, offset 0x8001df44
	/* begin block 1 */
		// Start line: 991
		// Start offset: 0x8001DF44
	/* end block 1 */
	// End offset: 0x8001E108
	// End Line: 1045

	/* begin block 2 */
		// Start line: 2348
	/* end block 2 */
	// End Line: 2349

	/* begin block 3 */
		// Start line: 2352
	/* end block 3 */
	// End Line: 2353

	/* begin block 4 */
		// Start line: 2352
	/* end block 4 */
	// End Line: 2353

void ProcessInput__25tMenuItemSlidingActivated7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tMenuItemSlidingActivated *this,tPlayer fromPlayer,tInputKeyType *keyval,
               tMenuCommand *command)

{
  AudioMus_tSongList *pAVar1;
  int iVar2;
  int iVar3;
  
  if (*keyval == kInput_KeyType_Cross) {
    if (*(int *)&(this->tMenuItemSlidingMenu).fDiffX == 0) {
      AudioCmn_PlayFESFX__Fi(0);
      *(undefined4 *)&(this->tMenuItemSlidingMenu).fDiffX = 1;
      *keyval = kInput_KeyType_AlreadyProcessed;
      AudioMus_StopSong__Fi(0x14);
      AudioMus_SysCleanUp__Fv();
      AudioMus_SysStartUp__FiiPc(0xc000,0x18000,&DAT_8001097c);
      AudioMus_PlaySong__FPc(s_game__80010984);
      pAVar1 = AudioMus_GetSongList__FPci(&DAT_8001098c,0);
      *(AudioMus_tSongList **)&screenAudio->fSelectedSong = pAVar1;
    }
  }
  else {
    if ((*keyval == kInput_KeyType_Triangle) && (*(int *)&(this->tMenuItemSlidingMenu).fDiffX != 0))
    {
      AudioCmn_PlayFESFX__Fi(1);
      *(undefined4 *)&(this->tMenuItemSlidingMenu).fDiffX = 0;
      *keyval = kInput_KeyType_AlreadyProcessed;
      AudioMus_StopSong__Fi(0x14);
      if (*(int *)&screenAudio->fSelectedSong != 0) {
        purgememadr(*(int *)&screenAudio->fSelectedSong);
      }
      *(undefined4 *)&screenAudio->fSelectedSong = 0;
      AudioMus_SysCleanUp__Fv();
      AudioMus_SysStartUp__FiiPc((int)&DAT_0000d800,0x18000,&DAT_8001096c);
      AudioMus_PlaySong__FPc(s_zmenu__80010974);
    }
  }
  if (*(short *)((int)&(this->tMenuItemSlidingMenu).nextMenu + 2) == 0) {
    iVar2 = *(int *)&(this->tMenuItemSlidingMenu).fDiffX;
    if (iVar2 == 0) goto LAB_8001e10c;
    iVar3 = *(int *)((this->tMenuItemSlidingMenu).tMenuItem._vf + 4);
    if (iVar3 != 0) {
      (**(code **)(*(int *)(iVar3 + 0x68) + 0x1c))
                (iVar3 + (int)*(short *)(*(int *)(iVar3 + 0x68) + 0x18),fromPlayer,keyval,command);
      goto LAB_8001e0d8;
    }
  }
  else {
LAB_8001e0d8:
    iVar2 = *(int *)&(this->tMenuItemSlidingMenu).fDiffX;
  }
  if ((iVar2 != 0) && ((*keyval == kInput_KeyType_Up || (*keyval == kInput_KeyType_Down)))) {
    *keyval = kInput_KeyType_AlreadyProcessed;
  }
LAB_8001e10c:
  ProcessInput__9tMenuItem7tPlayerR13tInputKeyTypeR12tMenuCommand((tMenuItem *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MyLeftRightDraw__22tMenuItemLeftRightFadeii(struct tMenuItemLeftRightFade *this /*$s0*/, int x /*$s2*/, int y /*$s1*/)
 // line 1063, offset 0x8001e13c
	/* begin block 1 */
		// Start line: 1064
		// Start offset: 0x8001E13C
		// Variables:
	// 		struct tDrawShapeExtended aCol; // stack offset -40
	// 		int ColText; // $s0
	/* end block 1 */
	// End offset: 0x8001E13C
	// End Line: 1064

	/* begin block 2 */
		// Start line: 2484
	/* end block 2 */
	// End Line: 2485

	/* begin block 3 */
		// Start line: 2503
	/* end block 3 */
	// End Line: 2504

	/* begin block 4 */
		// Start line: 2503
	/* end block 4 */
	// End Line: 2504

void MyLeftRightDraw__22tMenuItemLeftRightFadeii(tMenuItemLeftRightFade *this,int x,int y)

{
  int col;
  char *sMenuText;
  tDrawShapeExtended tStack40;
  
  tStack40.tint[0] =
       CalcFadeVal__Fiiii(0xc83c1e,(int)&DAT_0000bebe,
                          (int)(this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.
                               fSelFade,
                          (int)*(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.
                                          tMenuItem._vf + 8));
  DrawLeftFlare__FiiiRi
            (y,(int)(this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fSelFade,
             (int)*(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf + 8
                            ),(int *)&this->fFadeVal);
  col = CalcTextFadeSelToHi__F13tMenuTextTypess
                  (textType_Options,
                   (this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.fSelFade,
                   *(short *)((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem._vf +
                             8));
  sMenuText = TextSys_Word__Fi((this->tMenuItemLeftRightChoice).tMenuItemInteractive.tMenuItem.
                               fTextDescription);
  FETextRender_FullTextRGB__FPcssics(sMenuText,(short)x,(short)y,col,0,1);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0x2e,0x18,x + 0x1a,y + 1,0,0,&tStack40);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0x2f,0x18,x + 200,y + 1,0,0,&tStack40);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__31tMenuItemDisplayLeftRightChoiceiib(struct tMenuItemDisplayLeftRightChoice *this /*$s3*/, int offx /*$s0*/, int offy /*$s2*/)
 // line 1085, offset 0x8001e230
	/* begin block 1 */
		// Start line: 1086
		// Start offset: 0x8001E230
		// Variables:
	// 		int ColText; // $s2
	/* end block 1 */
	// End offset: 0x8001E304
	// End Line: 1100

	/* begin block 2 */
		// Start line: 2542
	/* end block 2 */
	// End Line: 2543

	/* begin block 3 */
		// Start line: 2552
	/* end block 3 */
	// End Line: 2553

	/* begin block 4 */
		// Start line: 2552
	/* end block 4 */
	// End Line: 2553

/* WARNING: Type propagation algorithm not settling */

void Draw__31tMenuItemDisplayLeftRightChoiceiib
               (tMenuItemDisplayLeftRightChoice *this,int offx,int offy)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int col;
  char *sMenuText;
  int iVar4;
  int iVar5;
  
  if (*(short *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.tMenuItemInteractive.
                 tMenuItem._vf + 8) != 0x80) {
    iVar2 = TextSys_WordX__Fi((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                              tMenuItemInteractive.tMenuItem.fTextDescription);
    iVar3 = TextSys_WordY__Fi((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                              tMenuItemInteractive.tMenuItem.fTextDescription);
    col = CalcTextFadeSelToHi__F13tMenuTextTypess
                    (textType_Options,
                     (this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.tMenuItemInteractive.
                     tMenuItem.fSelFade,
                     *(short *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                                tMenuItemInteractive.tMenuItem._vf + 8));
    iVar5 = (iVar3 + offy) * 0x10000;
    MyLeftRightDraw__22tMenuItemLeftRightFadeii
              ((tMenuItemLeftRightFade *)this,(iVar2 + offx) * 0x10000 >> 0x10,iVar5 >> 0x10);
    iVar4 = *(int *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.tMenuItemInteractive.
                     tMenuItem._vf + 4);
    iVar3 = *(int *)(iVar4 + 0xc);
    sVar1 = (**(code **)(iVar3 + 0x1c))(iVar4 + (int)*(short *)(iVar3 + 0x18),gMenu_SubMenuPlayer);
    sMenuText = TextSys_Word__Fi((int)sVar1);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,(short)((uint)((iVar2 + offx + 0x73) * 0x10000) >> 0x10),
               (short)((uint)iVar5 >> 0x10),col,0,2);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__29tMenuItemOnOffLeftRightChoice(struct tMenuItemOnOffLeftRightChoice *this /*$s0*/)
 // line 1105, offset 0x8001e320
	/* begin block 1 */
		// Start line: 1106
		// Start offset: 0x8001E320
	/* end block 1 */
	// End offset: 0x8001E320
	// End Line: 1106

	/* begin block 2 */
		// Start line: 2589
	/* end block 2 */
	// End Line: 2590

	/* begin block 3 */
		// Start line: 2592
	/* end block 3 */
	// End Line: 2593

	/* begin block 4 */
		// Start line: 2592
	/* end block 4 */
	// End Line: 2593

/* WARNING: Type propagation algorithm not settling */

void TransitionOn__29tMenuItemOnOffLeftRightChoice(tMenuItemOnOffLeftRightChoice *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.tMenuItemInteractive.
                   tMenuItem._vf + 4);
  iVar3 = *(int *)(iVar1 + 0xc);
  uVar2 = (**(code **)(iVar3 + 0x14))(iVar1 + (int)*(short *)(iVar3 + 0x10),0xffffffff);
  *(ushort *)&(this->tMenuItemLeftRightFade).fInTransition = (ushort)((uVar2 & 0xff) != 0) << 7;
  TransitionOn__22tMenuItemLeftRightFade((tMenuItemLeftRightFade *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__29tMenuItemOnOffLeftRightChoiceiib(struct tMenuItemOnOffLeftRightChoice *this /*$s2*/, int offx /*$s0*/, int offy /*$s3*/)
 // line 1111, offset 0x8001e384
	/* begin block 1 */
		// Start line: 1112
		// Start offset: 0x8001E384
		// Variables:
	// 		int ColTextOn; // stack offset -32
	// 		int ColTextOff; // stack offset -28
	/* end block 1 */
	// End offset: 0x8001E4E0
	// End Line: 1139

	/* begin block 2 */
		// Start line: 2601
	/* end block 2 */
	// End Line: 2602

	/* begin block 3 */
		// Start line: 2605
	/* end block 3 */
	// End Line: 2606

	/* begin block 4 */
		// Start line: 2605
	/* end block 4 */
	// End Line: 2606

/* WARNING: Type propagation algorithm not settling */

void Draw__29tMenuItemOnOffLeftRightChoiceiib(tMenuItemOnOffLeftRightChoice *this,int offx,int offy)

{
  int iVar1;
  uint uVar2;
  char *sMenuText;
  int iVar3;
  short y;
  int local_20;
  int local_1c;
  
  if (*(short *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.tMenuItemInteractive.
                 tMenuItem._vf + 8) != 0x80) {
    iVar3 = *(int *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.tMenuItemInteractive.
                     tMenuItem._vf + 4);
    iVar1 = *(int *)(iVar3 + 0xc);
    uVar2 = (**(code **)(iVar1 + 0x14))(iVar3 + (int)*(short *)(iVar1 + 0x10),0xffffffff);
    if ((uVar2 & 0xff) == 0) {
      y = *(short *)&(this->tMenuItemLeftRightFade).fInTransition + -0x20;
    }
    else {
      y = *(short *)&(this->tMenuItemLeftRightFade).fInTransition + 0x20;
    }
    *(short *)&(this->tMenuItemLeftRightFade).fInTransition = y;
    if (0x80 < *(short *)&(this->tMenuItemLeftRightFade).fInTransition) {
      *(undefined2 *)&(this->tMenuItemLeftRightFade).fInTransition = 0x80;
    }
    if (*(short *)&(this->tMenuItemLeftRightFade).fInTransition < 0) {
      *(undefined2 *)&(this->tMenuItemLeftRightFade).fInTransition = 0;
    }
    iVar1 = TextSys_WordX__Fi((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                              tMenuItemInteractive.tMenuItem.fTextDescription);
    iVar1 = iVar1 + offx;
    iVar3 = TextSys_WordY__Fi((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                              tMenuItemInteractive.tMenuItem.fTextDescription);
    CalcOnOffFade__F13tMenuTextTypesssRiT4
              (textType_Options,*(short *)&(this->tMenuItemLeftRightFade).fInTransition,
               (this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.tMenuItemInteractive.
               tMenuItem.fSelFade,
               *(short *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                          tMenuItemInteractive.tMenuItem._vf + 8),&local_20,&local_1c);
    iVar3 = (iVar3 + offy) * 0x10000;
    MyLeftRightDraw__22tMenuItemLeftRightFadeii
              ((tMenuItemLeftRightFade *)this,iVar1 * 0x10000 >> 0x10,iVar3 >> 0x10);
    sMenuText = TextSys_Word__Fi(0x66);
    y = (short)((uint)iVar3 >> 0x10);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,(short)((uint)((iVar1 + 0x37) * 0x10000) >> 0x10),y,local_20,0,0);
    sMenuText = TextSys_Word__Fi(0x67);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,(short)((uint)((iVar1 + 0x9e) * 0x10000) >> 0x10),y,local_1c,0,0);
  }
  return;
}



// decompiled code
// original method signature: 
// struct tMenuItemLeftRightAudioSlider * /*$ra*/ __29tMenuItemLeftRightAudioSliderUiP13tListIteratori(struct tMenuItemLeftRightAudioSlider *this /*$s0*/, unsigned int textDescription /*$a1*/, struct tListIterator *dataPtr /*$a2*/, int AudioArt /*$s1*/)
 // line 1152, offset 0x8001e4fc
	/* begin block 1 */
		// Start line: 1153
		// Start offset: 0x8001E4FC
	/* end block 1 */
	// End offset: 0x8001E4FC
	// End Line: 1153

	/* begin block 2 */
		// Start line: 2678
	/* end block 2 */
	// End Line: 2679

	/* begin block 3 */
		// Start line: 2690
	/* end block 3 */
	// End Line: 2691

	/* begin block 4 */
		// Start line: 2690
	/* end block 4 */
	// End Line: 2691

tMenuItemLeftRightAudioSlider *
__29tMenuItemLeftRightAudioSliderUiP13tListIteratori
          (tMenuItemLeftRightAudioSlider *this,uint textDescription,tListIterator *dataPtr,
          int AudioArt)

{
  __24tMenuItemLeftRightSliderUiP13tListIterator
            ((tMenuItemLeftRightSlider *)this,textDescription,dataPtr);
  *(undefined4 *)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf = 0x80010ce0;
  this->fFadeVal = (short)AudioArt;
  this->fInTransition = (void *)0x0;
  (this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._29tMenuItemLeftRightAudioSlider(struct tMenuItemLeftRightAudioSlider *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 1160, offset 0x8001e548
	/* begin block 1 */
		// Start line: 1161
		// Start offset: 0x8001E548
	/* end block 1 */
	// End offset: 0x8001E548
	// End Line: 1161

	/* begin block 2 */
		// Start line: 2706
	/* end block 2 */
	// End Line: 2707

	/* begin block 3 */
		// Start line: 2710
	/* end block 3 */
	// End Line: 2711

	/* begin block 4 */
		// Start line: 2710
	/* end block 4 */
	// End Line: 2711

void ___29tMenuItemLeftRightAudioSlider(tMenuItemLeftRightAudioSlider *this,int __in_chrg)

{
  *(undefined4 *)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf = 0x80010ce0;
  ___24tMenuItemLeftRightSlider((tMenuItemLeftRightSlider *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__29tMenuItemLeftRightAudioSlideriib(struct tMenuItemLeftRightAudioSlider *this /*$s3*/, int ox /*$s0*/, int oy /*$s1*/)
 // line 1167, offset 0x8001e570
	/* begin block 1 */
		// Start line: 1168
		// Start offset: 0x8001E570
		// Variables:
	// 		int coltext; // $s0
	// 		struct tDrawShapeExtended tCol; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1168
			// Start offset: 0x8001E570

			/* begin block 1.1.1 */
				// Start line: 1168
				// Start offset: 0x8001E570
			/* end block 1.1.1 */
			// End offset: 0x8001E570
			// End Line: 1168
		/* end block 1.1 */
		// End offset: 0x8001E570
		// End Line: 1168

		/* begin block 1.2 */
			// Start line: 1168
			// Start offset: 0x8001E570

			/* begin block 1.2.1 */
				// Start line: 1168
				// Start offset: 0x8001E570
			/* end block 1.2.1 */
			// End offset: 0x8001E570
			// End Line: 1168
		/* end block 1.2 */
		// End offset: 0x8001E570
		// End Line: 1168

		/* begin block 1.3 */
			// Start line: 1200
			// Start offset: 0x8001E6D0
			// Variables:
		// 		struct tListIterator *this; // $v0

			/* begin block 1.3.1 */
				// Start line: 1200
				// Start offset: 0x8001E6D0
			/* end block 1.3.1 */
			// End offset: 0x8001E6D0
			// End Line: 1200
		/* end block 1.3 */
		// End offset: 0x8001E6D0
		// End Line: 1200

		/* begin block 1.4 */
			// Start line: 1200
			// Start offset: 0x8001E6D0

			/* begin block 1.4.1 */
				// Start line: 1200
				// Start offset: 0x8001E6D0
			/* end block 1.4.1 */
			// End offset: 0x8001E6D0
			// End Line: 1200
		/* end block 1.4 */
		// End offset: 0x8001E6D0
		// End Line: 1200
	/* end block 1 */
	// End offset: 0x8001E760
	// End Line: 1200

	/* begin block 2 */
		// Start line: 2717
	/* end block 2 */
	// End Line: 2718

	/* begin block 3 */
		// Start line: 2724
	/* end block 3 */
	// End Line: 2725

	/* begin block 4 */
		// Start line: 2724
	/* end block 4 */
	// End Line: 2725

void Draw__29tMenuItemLeftRightAudioSlideriib(tMenuItemLeftRightAudioSlider *this,int ox,int oy)

{
  short sVar1;
  ushort uVar2;
  int col1;
  char *sMenuText;
  uint wordnum;
  int col2;
  tDrawShapeExtended tStack48;
  
  col1 = TextSys_WordX__Fi((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.
                           fTextDescription);
  wordnum = (this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fTextDescription;
  *(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 8) =
       (short)col1 + (short)ox;
  col1 = TextSys_WordY__Fi(wordnum);
  sVar1 = *(short *)&(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.
                     fTextDescription;
  *(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 10) =
       (short)col1 + (short)oy;
  col1 = TextSys_WordFlags__Fi((int)sVar1);
  col2 = kRGBVals[(uint)(byte)s__800515bd[col1 * 6]];
  col1 = TextSys_WordFlags__Fi
                   ((int)*(short *)&(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.
                                    fTextDescription);
  col1 = kRGBVals[(uint)(byte)(&CHAR_09h_800515bc)[col1 * 6]];
  DrawLeftFlare__FiiiRi
            ((int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                            10),
             (int)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade,
             (int)(this->tMenuItemLeftRightSlider).fX,(int *)&this->fInTransition);
  col1 = CalcFadeVal__Fiiii(col1,col2,
                            (int)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.
                                 fSelFade,(int)(this->tMenuItemLeftRightSlider).fX);
  if ((this->tMenuItemLeftRightSlider).fX != 0x80) {
    sMenuText = TextSys_Word__Fi((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.
                                 fTextDescription);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,
               *(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 8),
               *(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 10),
               col1,0,1);
    tStack48.tint[0] =
         CalcFadeVal__Fiiii((int)&DAT_00551e00,(int)&DAT_0000bebe,
                            (int)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.
                                 fSelFade,(int)(this->tMenuItemLeftRightSlider).fX);
    if ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade != 0) {
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                ((int)this->fFadeVal + 1,0x10,0,0,0,0,&tStack48);
    }
    col2 = *(int *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 4);
    col1 = *(int *)(col2 + 0xc);
    uVar2 = (**(code **)(col1 + 0x14))(col2 + (int)*(short *)(col1 + 0x10),0xffffffff);
    col1 = *(int *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 4);
    DrawSlider__FsssssssssbT9ss
              (uVar2 & 0xff,(ushort)*(byte *)(col1 + 8),(ushort)*(byte *)(col1 + 9),
               (short)(((uint)*(ushort *)
                               ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf
                               + 8) + 0x14) * 0x10000 >> 0x10),
               (int)(((uint)*(ushort *)
                             ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                             10) + 1) * 0x10000) >> 0x10,
               (int)*(short *)&(this->tMenuItemLeftRightSlider).fData,
               (int)*(short *)((int)&(this->tMenuItemLeftRightSlider).fData + 2),4,4,(void *)0x0,
               (void *)0x0,
               (int)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade,
               (int)(this->tMenuItemLeftRightSlider).fX);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Percentage__29tMenuItemLeftRightAudioSlider(struct tMenuItemLeftRightAudioSlider *this /*$s0*/)
 // line 1204, offset 0x8001e77c
	/* begin block 1 */
		// Start line: 1205
		// Start offset: 0x8001E77C
		// Variables:
	// 		int percent; // $s0

		/* begin block 1.1 */
			// Start line: 1205
			// Start offset: 0x8001E77C
			// Variables:
		// 		struct tListIterator *this; // $a2

			/* begin block 1.1.1 */
				// Start line: 1205
				// Start offset: 0x8001E77C
			/* end block 1.1.1 */
			// End offset: 0x8001E77C
			// End Line: 1205
		/* end block 1.1 */
		// End offset: 0x8001E77C
		// End Line: 1205

		/* begin block 1.2 */
			// Start line: 1205
			// Start offset: 0x8001E77C

			/* begin block 1.2.1 */
				// Start line: 1205
				// Start offset: 0x8001E77C
			/* end block 1.2.1 */
			// End offset: 0x8001E77C
			// End Line: 1205
		/* end block 1.2 */
		// End offset: 0x8001E77C
		// End Line: 1205

		/* begin block 1.3 */
			// Start line: 1205
			// Start offset: 0x8001E77C

			/* begin block 1.3.1 */
				// Start line: 1205
				// Start offset: 0x8001E77C
			/* end block 1.3.1 */
			// End offset: 0x8001E77C
			// End Line: 1205
		/* end block 1.3 */
		// End offset: 0x8001E77C
		// End Line: 1205
	/* end block 1 */
	// End offset: 0x8001E83C
	// End Line: 1210

	/* begin block 2 */
		// Start line: 2796
	/* end block 2 */
	// End Line: 2797

	/* begin block 3 */
		// Start line: 2799
	/* end block 3 */
	// End Line: 2800

	/* begin block 4 */
		// Start line: 2799
	/* end block 4 */
	// End Line: 2800

int Percentage__29tMenuItemLeftRightAudioSlider(tMenuItemLeftRightAudioSlider *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 4);
  iVar1 = *(int *)(iVar3 + 0xc);
  uVar2 = (**(code **)(iVar1 + 0x14))(iVar3 + (int)*(short *)(iVar1 + 0x10),0xffffffff);
  iVar4 = *(int *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 4);
  iVar5 = ((uVar2 & 0xff) - (uint)*(byte *)(iVar4 + 8)) * 100;
  iVar1 = (uint)*(byte *)(iVar4 + 9) - (uint)*(byte *)(iVar4 + 8);
  iVar3 = iVar5 / iVar1;
  if (iVar1 == 0) {
    trap(0x1c00);
  }
  if ((iVar1 == -1) && (iVar5 == -0x80000000)) {
    trap(0x1800);
  }
  uVar2 = (**(code **)(*(int *)(iVar4 + 0xc) + 0x14))
                    (iVar4 + (int)*(short *)(*(int *)(iVar4 + 0xc) + 0x10),0xffffffff);
  if (((uVar2 & 0xff) != 0) && (iVar3 < 100)) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__29tMenuItemLeftRightAudioSlider(struct tMenuItemLeftRightAudioSlider *this /*$a0*/)
 // line 1212, offset 0x8001e850
	/* begin block 1 */
		// Start line: 1213
		// Start offset: 0x8001E850
	/* end block 1 */
	// End offset: 0x8001E850
	// End Line: 1214

	/* begin block 2 */
		// Start line: 2815
	/* end block 2 */
	// End Line: 2816

	/* begin block 3 */
		// Start line: 2818
	/* end block 3 */
	// End Line: 2819

	/* begin block 4 */
		// Start line: 2818
	/* end block 4 */
	// End Line: 2819

	/* begin block 5 */
		// Start line: 2819
	/* end block 5 */
	// End Line: 2820

	/* begin block 6 */
		// Start line: 2819
	/* end block 6 */
	// End Line: 2820

	/* begin block 7 */
		// Start line: 2820
	/* end block 7 */
	// End Line: 2821

	/* begin block 8 */
		// Start line: 2820
	/* end block 8 */
	// End Line: 2821

void TransitionOff__29tMenuItemLeftRightAudioSlider(tMenuItemLeftRightAudioSlider *this)

{
  (this->tMenuItemLeftRightSlider).fX = 0;
  (this->tMenuItemLeftRightSlider).fY = 0x3c;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__29tMenuItemLeftRightAudioSlider(struct tMenuItemLeftRightAudioSlider *this /*$a0*/)
 // line 1217, offset 0x8001e860
	/* begin block 1 */
		// Start line: 1218
		// Start offset: 0x8001E860
	/* end block 1 */
	// End offset: 0x8001E860
	// End Line: 1219

	/* begin block 2 */
		// Start line: 2826
	/* end block 2 */
	// End Line: 2827

	/* begin block 3 */
		// Start line: 2829
	/* end block 3 */
	// End Line: 2830

	/* begin block 4 */
		// Start line: 2829
	/* end block 4 */
	// End Line: 2830

	/* begin block 5 */
		// Start line: 2830
	/* end block 5 */
	// End Line: 2831

	/* begin block 6 */
		// Start line: 2830
	/* end block 6 */
	// End Line: 2831

void TransitionOn__29tMenuItemLeftRightAudioSlider(tMenuItemLeftRightAudioSlider *this)

{
  (this->tMenuItemLeftRightSlider).fX = 0x80;
  (this->tMenuItemLeftRightSlider).fY = -0x3c;
  (this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade = 0;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__29tMenuItemLeftRightAudioSlider(struct tMenuItemLeftRightAudioSlider *this /*$a0*/)
 // line 1223, offset 0x8001e878
	/* begin block 1 */
		// Start line: 1224
		// Start offset: 0x8001E878
	/* end block 1 */
	// End offset: 0x8001E8C8
	// End Line: 1232

	/* begin block 2 */
		// Start line: 2838
	/* end block 2 */
	// End Line: 2839

	/* begin block 3 */
		// Start line: 2841
	/* end block 3 */
	// End Line: 2842

	/* begin block 4 */
		// Start line: 2841
	/* end block 4 */
	// End Line: 2842

	/* begin block 5 */
		// Start line: 2844
	/* end block 5 */
	// End Line: 2845

void * TransitionIsFinished__29tMenuItemLeftRightAudioSlider(tMenuItemLeftRightAudioSlider *this)

{
  *(undefined4 *)&(this->tMenuItemLeftRightSlider).fWidth = 0;
  if (((this->tMenuItemLeftRightSlider).fY < 0) && (0 < (this->tMenuItemLeftRightSlider).fX)) {
    *(undefined4 *)&(this->tMenuItemLeftRightSlider).fWidth = 1;
  }
  if ((0 < (this->tMenuItemLeftRightSlider).fY) && ((this->tMenuItemLeftRightSlider).fX < 0x80)) {
    *(undefined4 *)&(this->tMenuItemLeftRightSlider).fWidth = 1;
  }
  return (void *)(*(uint *)&(this->tMenuItemLeftRightSlider).fWidth ^ 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__29tMenuItemLeftRightAudioSliderb(struct tMenuItemLeftRightAudioSlider *this /*$a0*/, void * selected /*$a1*/)
 // line 1234, offset 0x8001e8d4
	/* begin block 1 */
		// Start line: 1235
		// Start offset: 0x8001E8D4
	/* end block 1 */
	// End offset: 0x8001E908
	// End Line: 1236

	/* begin block 2 */
		// Start line: 2860
	/* end block 2 */
	// End Line: 2861

	/* begin block 3 */
		// Start line: 2863
	/* end block 3 */
	// End Line: 2864

	/* begin block 4 */
		// Start line: 2863
	/* end block 4 */
	// End Line: 2864

void UpdateTransition__29tMenuItemLeftRightAudioSliderb
               (tMenuItemLeftRightAudioSlider *this,void *selected)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)(this->tMenuItemLeftRightSlider).fX + (int)(this->tMenuItemLeftRightSlider).fY;
  if (0x80 < iVar2) {
    iVar2 = 0x80;
  }
  sVar1 = (short)iVar2;
  if (iVar2 < 0) {
    sVar1 = 0;
  }
  (this->tMenuItemLeftRightSlider).fX = sVar1;
  UpdateTransition__9tMenuItemb((tMenuItem *)this,selected);
  return;
}



// decompiled code
// original method signature: 
// struct tInsideBoxSongMenu * /*$ra*/ __18tInsideBoxSongMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme(struct tInsideBoxSongMenu *this /*$s0*/, unsigned int flags /*$a1*/, struct tScreen *screenHandler /*$a2*/, struct tMenu *nextMenu /*$a3*/, struct tMenu *optionsMenu /*stack 16*/, TDRFuncPtr___18tInsideBoxSongMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress OnButtonPress /*stack 20*/, int title /*stack 24*/, struct tMenuItem *firstItem /*stack 28*/)
 // line 1247, offset 0x8001e920
	/* begin block 1 */
		// Start line: 1248
		// Start offset: 0x8001E920
		// Variables:
	// 		struct tInsideBoxMenu *this; // $s0
	// 		struct tMenu *optionsMenu; // $t0
	// 		void (*OnButtonPress)(); // $t1

		/* begin block 1.1 */
			// Start line: 1248
			// Start offset: 0x8001E920
		/* end block 1.1 */
		// End offset: 0x8001E920
		// End Line: 1248
	/* end block 1 */
	// End offset: 0x8001E920
	// End Line: 1248

	/* begin block 2 */
		// Start line: 1248
		// Start offset: 0x8001E920
		// Variables:
	// 		int j; // $a0
	/* end block 2 */
	// End offset: 0x8001E984
	// End Line: 1258

	/* begin block 3 */
		// Start line: 2878
	/* end block 3 */
	// End Line: 2879

	/* begin block 4 */
		// Start line: 2889
	/* end block 4 */
	// End Line: 2890

	/* begin block 5 */
		// Start line: 2889
	/* end block 5 */
	// End Line: 2890

tInsideBoxSongMenu *
__18tInsideBoxSongMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme
          (tInsideBoxSongMenu *this,uint flags,tScreen *screenHandler,tMenu *nextMenu,
          tMenu *optionsMenu,
                    
          TDRFuncPtr___18tInsideBoxSongMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress
          OnButtonPress,int title,tMenuItem *firstItem)

{
  tInsideBoxSongMenu *ptVar1;
  int iVar2;
  
  __5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs
            ((tMenu *)this,flags,screenHandler,nextMenu,optionsMenu,
             (TDRFuncPtr___5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)
             OnButtonPress,(int)(short)title);
  iVar2 = 0;
  *(undefined4 *)((this->tInsideBoxMenu).tMenu._vf + 2) = 0x80010c78;
  ptVar1 = this;
  do {
    ptVar1->fOnOffFade[1] = 0;
    (ptVar1->tInsideBoxMenu).fPrevItem = 0;
    iVar2 = iVar2 + 1;
    ptVar1 = (tInsideBoxSongMenu *)((int)&(ptVar1->tInsideBoxMenu).tMenu.fFlags + 2);
  } while (iVar2 < 5);
  tMenuConstructor__5tMenuP9tMenuItemPv((tMenu *)this,firstItem,&stack0x00000020);
  *(undefined2 *)((this->tInsideBoxMenu).tMenu._vf + 8) = 0;
  *(undefined2 *)((this->tInsideBoxMenu).tMenu._vf + 10) = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._18tInsideBoxSongMenu(struct tInsideBoxSongMenu *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 1263, offset 0x8001e9b0
	/* begin block 1 */
		// Start line: 1264
		// Start offset: 0x8001E9B0
	/* end block 1 */
	// End offset: 0x8001E9B0
	// End Line: 1264

	/* begin block 2 */
		// Start line: 2920
	/* end block 2 */
	// End Line: 2921

	/* begin block 3 */
		// Start line: 2924
	/* end block 3 */
	// End Line: 2925

	/* begin block 4 */
		// Start line: 2924
	/* end block 4 */
	// End Line: 2925

void ___18tInsideBoxSongMenu(tInsideBoxSongMenu *this,int __in_chrg)

{
  *(undefined4 *)((this->tInsideBoxMenu).tMenu._vf + 2) = 0x80010c78;
  ___14tInsideBoxMenu((tInsideBoxMenu *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__18tInsideBoxSongMenusssss(struct tInsideBoxSongMenu *this /*$s2*/, short x /*$s7*/, short y /*$a2*/, short w /*$a3*/, int slideOffset /*stack 16*/, int maxheight /*stack 20*/)
 // line 1271, offset 0x8001e9d8
	/* begin block 1 */
		// Start line: 1272
		// Start offset: 0x8001E9D8
		// Variables:
	// 		int j; // $s1
	// 		int drawY; // $s5
	// 		int song; // $a1
	/* end block 1 */
	// End offset: 0x8001EC18
	// End Line: 1313

	/* begin block 2 */
		// Start line: 2932
	/* end block 2 */
	// End Line: 2933

	/* begin block 3 */
		// Start line: 2940
	/* end block 3 */
	// End Line: 2941

	/* begin block 4 */
		// Start line: 2940
	/* end block 4 */
	// End Line: 2941

void Draw__18tInsideBoxSongMenusssss
               (tInsideBoxSongMenu *this,short x,short y,short w,int slideOffset,int maxheight)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  tInsideBoxSongMenu *ptVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)&screenAudio->fSelectedSong != 0) {
    iVar8 = 0;
    ptVar5 = this;
    do {
      if (iVar8 != 2) {
        _sVar3 = (int)ptVar5->fOnOffFade[1] + -8;
        sVar3 = (short)_sVar3;
        if (_sVar3 < 0) {
          sVar3 = 0;
        }
        ptVar5->fOnOffFade[1] = sVar3;
      }
      iVar8 = iVar8 + 1;
      ptVar5 = (tInsideBoxSongMenu *)((int)&(ptVar5->tInsideBoxMenu).tMenu.fFlags + 2);
    } while (iVar8 < 5);
    iVar8 = (int)this->fOnOffFade[3] + 8;
    sVar3 = (short)iVar8;
    if (0x80 < iVar8) {
      sVar3 = 0x80;
    }
    sVar1 = *(short *)((this->tInsideBoxMenu).tMenu._vf + 8);
    sVar2 = *(short *)((this->tInsideBoxMenu).tMenu._vf + 8);
    this->fOnOffFade[3] = sVar3;
    if (sVar1 != 0) {
      sVar3 = *(short *)((this->tInsideBoxMenu).tMenu._vf + 10);
      uVar4 = sVar2 + *(short *)((this->tInsideBoxMenu).tMenu._vf + 10) * 2;
      *(ushort *)((this->tInsideBoxMenu).tMenu._vf + 8) = uVar4;
      if ((sVar3 < 0) && ((int)((uint)uVar4 << 0x10) < 0)) {
        *(undefined2 *)((this->tInsideBoxMenu).tMenu._vf + 8) = 0;
      }
      if ((0 < *(short *)((this->tInsideBoxMenu).tMenu._vf + 10)) &&
         (0 < *(short *)((this->tInsideBoxMenu).tMenu._vf + 8))) {
        *(undefined2 *)((this->tInsideBoxMenu).tMenu._vf + 8) = 0;
      }
    }
    iVar8 = 0;
    _sVar3 = -0x28;
    ptVar5 = this;
    do {
      iVar7 = (int)screenAudio->fPrevSelectedSong + iVar8 + -2;
      if ((-1 < iVar7) && (iVar7 < **(int **)&screenAudio->fSelectedSong)) {
        if (frontEnd.FEPlayList[iVar7] == (void *)0x0) {
          sVar3 = (ptVar5->tInsideBoxMenu).fPrevItem + -0x20;
        }
        else {
          sVar3 = (ptVar5->tInsideBoxMenu).fPrevItem + 0x20;
        }
        (ptVar5->tInsideBoxMenu).fPrevItem = sVar3;
        if (0x80 < (ptVar5->tInsideBoxMenu).fPrevItem) {
          (ptVar5->tInsideBoxMenu).fPrevItem = 0x80;
        }
        if ((ptVar5->tInsideBoxMenu).fPrevItem < 0) {
          (ptVar5->tInsideBoxMenu).fPrevItem = 0;
        }
        iVar6 = *(int *)((this->tInsideBoxMenu).tMenu._vf + 2);
        (**(code **)(iVar6 + 100))
                  ((int)&(this->tInsideBoxMenu).tMenu.fFlags + (int)*(short *)(iVar6 + 0x60),
                   iVar7 * 0x10000 >> 0x10,(int)x,
                   (int)(((slideOffset & 0xffffU) +
                         (uint)*(ushort *)((this->tInsideBoxMenu).tMenu._vf + 8) +
                         (int)y + ((int)(short)maxheight + -0x15 >> 1) + _sVar3) * 0x10000) >> 0x10,
                   (int)w,(int)(ptVar5->tInsideBoxMenu).fPrevItem,(int)ptVar5->fOnOffFade[1]);
      }
      _sVar3 = _sVar3 + 0x15;
      iVar8 = iVar8 + 1;
      ptVar5 = (tInsideBoxSongMenu *)((int)&(ptVar5->tInsideBoxMenu).tMenu.fFlags + 2);
    } while (iVar8 < 5);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawOneSong__18tInsideBoxSongMenussssss(struct tInsideBoxSongMenu *this /*$a0*/, short songnum /*$a1*/, short x /*$a2*/, short y /*$a3*/, int w /*stack 16*/, int fOnOffFade /*stack 20*/, int fSelFade /*stack 24*/)
 // line 1317, offset 0x8001ec48
	/* begin block 1 */
		// Start line: 1318
		// Start offset: 0x8001EC48
		// Variables:
	// 		int Col; // $s6
	// 		int ColTextOn; // stack offset -40
	// 		int ColTextOff; // stack offset -36
	// 		int ColText; // $s0
	/* end block 1 */
	// End offset: 0x8001EC48
	// End Line: 1318

	/* begin block 2 */
		// Start line: 3040
	/* end block 2 */
	// End Line: 3041

	/* begin block 3 */
		// Start line: 3043
	/* end block 3 */
	// End Line: 3044

	/* begin block 4 */
		// Start line: 3043
	/* end block 4 */
	// End Line: 3044

void DrawOneSong__18tInsideBoxSongMenussssss
               (tInsideBoxSongMenu *this,short songnum,short x,short y,int w,int fOnOffFade,
               int fSelFade)

{
  int col;
  int col_00;
  char *sMenuText;
  short y_00;
  uint uVar1;
  uint uVar2;
  int x_00;
  int w_00;
  int local_28;
  int local_24;
  
  uVar2 = (uint)(ushort)y;
  uVar1 = (uint)(ushort)x;
  col = CalcFadeVal__Fii((int)&DAT_00551e00,0x28);
  CalcOnOffFade__F13tMenuTextTypesssRiT4
            (textType_Options,(short)fOnOffFade,(short)fSelFade,0,&local_28,&local_24);
  col_00 = CalcTextFadeSelToHi__F13tMenuTextTypess(textType_Options,(short)fSelFade,0);
  x_00 = (int)((uint)(ushort)songnum << 0x10) >> 10;
  FETextRender_FullTextRGB__FPcssics
            (*(char **)(*(int *)&screenAudio->fSelectedSong + x_00 + 0xc),
             (short)((uVar1 + 3) * 0x10000 >> 0x10),(short)((uVar2 + 2) * 0x10000 >> 0x10),col_00,0,
             0);
  FETextRender_FullTextRGB__FPcssics
            (*(char **)(*(int *)&screenAudio->fSelectedSong + x_00 + 0x10),
             (short)((uVar1 + 2) * 0x10000 >> 0x10),(short)((uVar2 + 10) * 0x10000 >> 0x10),col_00,0
             ,0);
  sMenuText = TextSys_Word__Fi(0x66);
  y_00 = (short)((uVar2 + 6) * 0x10000 >> 0x10);
  FETextRender_FullTextRGB__FPcssics
            (sMenuText,(short)((uVar1 + w + -0x5a) * 0x10000 >> 0x10),y_00,local_28,0,2);
  sMenuText = TextSys_Word__Fi(0x67);
  FETextRender_FullTextRGB__FPcssics
            (sMenuText,(short)((uVar1 + w + -0x1e) * 0x10000 >> 0x10),y_00,local_24,0,2);
  x_00 = (int)x;
  w_00 = (int)(short)w;
  col_00 = (int)y;
  PSXDrawSquare__Fiiiii(col,x_00 + w_00 + -0x78,col_00,2,0x13);
  PSXDrawSquare__Fiiiii(col,x_00 + w_00 + -0x3c,col_00,2,0x13);
  PSXDrawSquare__Fiiiii(col,x_00,col_00,w_00,1);
  PSXDrawSquare__Fiiiii(col,x_00,col_00 + 0x13,w_00,-1);
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ DebounceKeys__18tInsideBoxSongMenu(struct tInsideBoxSongMenu *this /*$a0*/)
 // line 1344, offset 0x8001ee74
	/* begin block 1 */
		// Start line: 1345
		// Start offset: 0x8001EE74
	/* end block 1 */
	// End offset: 0x8001EE74
	// End Line: 1346

	/* begin block 2 */
		// Start line: 3102
	/* end block 2 */
	// End Line: 3103

	/* begin block 3 */
		// Start line: 3106
	/* end block 3 */
	// End Line: 3107

	/* begin block 4 */
		// Start line: 3106
	/* end block 4 */
	// End Line: 3107

	/* begin block 5 */
		// Start line: 3107
	/* end block 5 */
	// End Line: 3108

	/* begin block 6 */
		// Start line: 3107
	/* end block 6 */
	// End Line: 3108

long DebounceKeys__18tInsideBoxSongMenu(tInsideBoxSongMenu *this)

{
  return 0x1e00;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__18tInsideBoxSongMenu7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tInsideBoxSongMenu *this /*$s0*/, enum tInputKeyType *keyval /*$s1*/)
 // line 1350, offset 0x8001ee7c
	/* begin block 1 */
		// Start line: 1351
		// Start offset: 0x8001EE7C
		// Variables:
	// 		int j; // $a1
	/* end block 1 */
	// End offset: 0x8001F070
	// End Line: 1409

	/* begin block 2 */
		// Start line: 3113
	/* end block 2 */
	// End Line: 3114

	/* begin block 3 */
		// Start line: 3118
	/* end block 3 */
	// End Line: 3119

	/* begin block 4 */
		// Start line: 3118
	/* end block 4 */
	// End Line: 3119

	/* begin block 5 */
		// Start line: 3120
	/* end block 5 */
	// End Line: 3121

void ProcessInput__18tInsideBoxSongMenu7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tInsideBoxSongMenu *this,tInputKeyType *keyval)

{
  short sVar1;
  uint *puVar2;
  tScreenAudio *ptVar3;
  int SFXnum;
  int iVar4;
  uint *puVar5;
  int *in_a2;
  
  if (*(int *)&screenAudio->fSelectedSong == 0) {
    return;
  }
  if (*in_a2 == 0x800) {
    SFXnum = 5;
LAB_8001eec8:
    AudioCmn_PlayFESFX__Fi(SFXnum);
  }
  else {
    SFXnum = 6;
    if (*in_a2 == 0x1000) goto LAB_8001eec8;
  }
  SFXnum = *in_a2;
  if (SFXnum == 0x400) {
    if ((**(int **)&screenAudio->fSelectedSong + -1 <= (int)screenAudio->fPrevSelectedSong) ||
       (*(short *)((this->tInsideBoxMenu).tMenu._vf + 8) != 0)) goto LAB_8001f06c;
    iVar4 = 0;
    *(undefined2 *)((this->tInsideBoxMenu).tMenu._vf + 8) = 0x15;
    *(undefined2 *)((this->tInsideBoxMenu).tMenu._vf + 10) = 0xfffc;
    SFXnum = 0;
    do {
      iVar4 = iVar4 + 1;
      puVar2 = (uint *)((int)&(this->tInsideBoxMenu).tMenu.fFlags + iVar4 * 2);
      SFXnum = (int)&(this->tInsideBoxMenu).tMenu.fFlags + SFXnum;
      *(undefined2 *)(SFXnum + 0x74) = *(undefined2 *)(puVar2 + 0x1d);
      *(undefined2 *)(SFXnum + 0x7e) = *(undefined2 *)((int)puVar2 + 0x7e);
      ptVar3 = screenAudio;
      SFXnum = iVar4 * 2;
    } while (iVar4 < 4);
    this->fOnOffFade[0] = 0;
    this->fSelFade[0] = 0;
    SFXnum = 4;
    sVar1 = ptVar3->fPrevSelectedSong + 1;
  }
  else {
    if (0x400 < SFXnum) {
      if ((SFXnum != 0x800) && (SFXnum != 0x1000)) {
        return;
      }
      frontEnd.FEPlayList[(int)screenAudio->fPrevSelectedSong] =
           (void *)(uint)(frontEnd.FEPlayList[(int)screenAudio->fPrevSelectedSong] == (void *)0x0);
      goto LAB_8001f06c;
    }
    if (SFXnum != 0x200) {
      return;
    }
    if ((screenAudio->fPrevSelectedSong < 1) ||
       (*(short *)((this->tInsideBoxMenu).tMenu._vf + 8) != 0)) goto LAB_8001f06c;
    SFXnum = 4;
    *(undefined2 *)((this->tInsideBoxMenu).tMenu._vf + 8) = 0xffeb;
    *(undefined2 *)((this->tInsideBoxMenu).tMenu._vf + 10) = 4;
    do {
      iVar4 = SFXnum * 2;
      SFXnum = SFXnum + -1;
      puVar2 = (uint *)((int)&(this->tInsideBoxMenu).tMenu.fFlags + SFXnum * 2);
      puVar5 = (uint *)((int)&(this->tInsideBoxMenu).tMenu.fFlags + iVar4);
      *(undefined2 *)(puVar5 + 0x1d) = *(undefined2 *)(puVar2 + 0x1d);
      *(undefined2 *)((int)puVar5 + 0x7e) = *(undefined2 *)((int)puVar2 + 0x7e);
      ptVar3 = screenAudio;
    } while (0 < SFXnum);
    (this->tInsideBoxMenu).fPrevItem = 0;
    this->fOnOffFade[1] = 0;
    SFXnum = 3;
    sVar1 = ptVar3->fPrevSelectedSong + -1;
  }
  ptVar3->fPrevSelectedSong = sVar1;
  AudioCmn_PlayFESFX__Fi(SFXnum);
LAB_8001f06c:
  *in_a2 = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__34tMenuItemControllerLeftRightChoiceiib(struct tMenuItemControllerLeftRightChoice *this /*$s4*/, int ox /*$s0*/, int oy /*$s1*/)
 // line 1423, offset 0x8001f084
	/* begin block 1 */
		// Start line: 1424
		// Start offset: 0x8001F084
		// Variables:
	// 		struct tTexture_ShapeInfo *shape; // $s5
	// 		int Col; // $s0
	// 		int ColText; // $s1
	// 		struct tDrawShapeExtended drawFlags; // stack offset -56

		/* begin block 1.1 */
			// Start line: 1424
			// Start offset: 0x8001F084

			/* begin block 1.1.1 */
				// Start line: 1436
				// Start offset: 0x8001F114
				// Variables:
			// 		struct tDrawShapeExtended tCol; // stack offset -56
			/* end block 1.1.1 */
			// End offset: 0x8001F1A0
			// End Line: 1448
		/* end block 1.1 */
		// End offset: 0x8001F1A0
		// End Line: 1448
	/* end block 1 */
	// End offset: 0x8001F1A0
	// End Line: 1453

	/* begin block 2 */
		// Start line: 3261
	/* end block 2 */
	// End Line: 3262

	/* begin block 3 */
		// Start line: 3276
	/* end block 3 */
	// End Line: 3277

	/* begin block 4 */
		// Start line: 3276
	/* end block 4 */
	// End Line: 3277

/* WARNING: Type propagation algorithm not settling */

void Draw__34tMenuItemControllerLeftRightChoiceiib
               (tMenuItemControllerLeftRightChoice *this,int ox,int oy)

{
  tTexture_ShapeInfo *ptVar1;
  short sVar2;
  int y;
  int iVar3;
  int x;
  int col;
  char *sMenuText;
  short y_00;
  int iVar4;
  tDrawShapeExtended tStack56;
  
  y = TextSys_WordX__Fi((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.tMenuItemInteractive
                        .tMenuItem.fTextDescription);
  y = y + ox;
  iVar3 = TextSys_WordY__Fi((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                            tMenuItemInteractive.tMenuItem.fTextDescription);
  ptVar1 = gHelpShapes;
  x = CalcFadeVal__Fiiii(0xc83c1e,(int)&DAT_0000bebe,
                         (int)(this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                              tMenuItemInteractive.tMenuItem.fSelFade,
                         (int)*(short *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                                         tMenuItemInteractive.tMenuItem._vf + 8));
  col = CalcTextFadeSelToHi__F13tMenuTextTypess
                  (textType_Options,
                   (this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.tMenuItemInteractive.
                   tMenuItem.fSelFade,
                   *(short *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                              tMenuItemInteractive.tMenuItem._vf + 8));
  if (*(short *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.tMenuItemInteractive.
                 tMenuItem._vf + 8) != 0x80) {
    tStack56.tint[0] = x;
    sMenuText = TextSys_Word__Fi((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                                 tMenuItemInteractive.tMenuItem.fTextDescription);
    y_00 = (short)((uint)((iVar3 + oy) * 0x10000) >> 0x10);
    FETextRender_FullTextRGB__FPcssics(sMenuText,(short)((uint)(y * 0x10000) >> 0x10),y_00,col,0,0);
    iVar4 = *(int *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.tMenuItemInteractive.
                     tMenuItem._vf + 4);
    x = *(int *)(iVar4 + 0xc);
    sVar2 = (**(code **)(x + 0x1c))(iVar4 + (int)*(short *)(x + 0x18),gMenu_SubMenuPlayer);
    sMenuText = TextSys_Word__Fi((int)sVar2);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,(short)((uint)((y + 0x97) * 0x10000) >> 0x10),y_00,col,0,2);
  }
  tStack56.tint[0] =
       CalcFadeVal__Fiiii(0,(int)&DAT_0000bebe,
                          (int)(this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                               tMenuItemInteractive.tMenuItem.fSelFade,
                          (int)*(short *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                                          tMenuItemInteractive.tMenuItem._vf + 8));
  x = y * 0x10000 >> 0x10;
  y = (iVar3 + oy) * 0x10000 >> 0x10;
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(10,0x18,x + 0x83,y,0,1,&tStack56);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0xb,0x18,x + 0xa1,y,0,1,&tStack56);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x1e,8,x - ((int)*(short *)&ptVar1[0x1b].clutID + -0xb0),y + -3,
             (int)*(short *)((this->tMenuItemLeftRightFade).tMenuItemLeftRightChoice.
                             tMenuItemInteractive.tMenuItem._vf + 8),0,(tDrawShapeExtended *)0x0);
  PSXDrawSquare__Fiiiii
            (0,x,y + -3,0xb0 - (int)*(short *)&ptVar1[0x1b].clutID,
             (int)*(short *)((int)&ptVar1[0x1b].clutID + 2));
  return;
}



// decompiled code
// original method signature: 
// struct tInsideBoxLeftRightSlider * /*$ra*/ __25tInsideBoxLeftRightSliderUiP13tListIterator(struct tInsideBoxLeftRightSlider *this /*$s0*/, unsigned int textDescription /*$a1*/, struct tListIterator *dataPtr /*$a2*/)
 // line 1465, offset 0x8001f288
	/* begin block 1 */
		// Start line: 1466
		// Start offset: 0x8001F288
	/* end block 1 */
	// End offset: 0x8001F288
	// End Line: 1466

	/* begin block 2 */
		// Start line: 3362
	/* end block 2 */
	// End Line: 3363

	/* begin block 3 */
		// Start line: 3368
	/* end block 3 */
	// End Line: 3369

	/* begin block 4 */
		// Start line: 3368
	/* end block 4 */
	// End Line: 3369

tInsideBoxLeftRightSlider *
__25tInsideBoxLeftRightSliderUiP13tListIterator
          (tInsideBoxLeftRightSlider *this,uint textDescription,tListIterator *dataPtr)

{
  __24tMenuItemLeftRightSliderUiP13tListIterator
            ((tMenuItemLeftRightSlider *)this,textDescription,dataPtr);
  *(undefined4 *)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf = 0x80010bc8;
  (this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade = 0;
  *(undefined2 *)((int)&(this->tMenuItemLeftRightSlider).fData + 2) = 5;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._25tInsideBoxLeftRightSlider(struct tInsideBoxLeftRightSlider *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 1473, offset 0x8001f2c8
	/* begin block 1 */
		// Start line: 1474
		// Start offset: 0x8001F2C8
	/* end block 1 */
	// End offset: 0x8001F2C8
	// End Line: 1474

	/* begin block 2 */
		// Start line: 3386
	/* end block 2 */
	// End Line: 3387

	/* begin block 3 */
		// Start line: 3390
	/* end block 3 */
	// End Line: 3391

	/* begin block 4 */
		// Start line: 3390
	/* end block 4 */
	// End Line: 3391

void ___25tInsideBoxLeftRightSlider(tInsideBoxLeftRightSlider *this,int __in_chrg)

{
  *(undefined4 *)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf = 0x80010bc8;
  ___24tMenuItemLeftRightSlider((tMenuItemLeftRightSlider *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__25tInsideBoxLeftRightSlideriiib(struct tInsideBoxLeftRightSlider *this /*$s0*/, int x /*$a1*/, int y /*$a2*/, int w /*$s1*/)
 // line 1480, offset 0x8001f2f0
	/* begin block 1 */
		// Start line: 1481
		// Start offset: 0x8001F2F0
		// Variables:
	// 		int col; // $s3
	// 		int coltext; // $s4

		/* begin block 1.1 */
			// Start line: 1481
			// Start offset: 0x8001F2F0
			// Variables:
		// 		struct tListIterator *this; // $v1

			/* begin block 1.1.1 */
				// Start line: 1481
				// Start offset: 0x8001F2F0
			/* end block 1.1.1 */
			// End offset: 0x8001F2F0
			// End Line: 1481
		/* end block 1.1 */
		// End offset: 0x8001F2F0
		// End Line: 1481

		/* begin block 1.2 */
			// Start line: 1481
			// Start offset: 0x8001F2F0

			/* begin block 1.2.1 */
				// Start line: 1481
				// Start offset: 0x8001F2F0
			/* end block 1.2.1 */
			// End offset: 0x8001F2F0
			// End Line: 1481
		/* end block 1.2 */
		// End offset: 0x8001F2F0
		// End Line: 1481
	/* end block 1 */
	// End offset: 0x8001F2F0
	// End Line: 1481

	/* begin block 2 */
		// Start line: 3397
	/* end block 2 */
	// End Line: 3398

	/* begin block 3 */
		// Start line: 3404
	/* end block 3 */
	// End Line: 3405

	/* begin block 4 */
		// Start line: 3404
	/* end block 4 */
	// End Line: 3405

void Draw__25tInsideBoxLeftRightSlideriiib(tInsideBoxLeftRightSlider *this,int x,int y,int w)

{
  ushort uVar1;
  int col;
  int col_00;
  char *sMenuText;
  
  *(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 8) = (short)x;
  *(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 10) = (short)y;
  col = CalcFadeVal__Fiii((int)&DAT_00551e00,0xc83c1e,
                          (int)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.
                               fSelFade);
  col_00 = CalcTextFadeUnselToSel__F13tMenuTextTypess
                     (textType_Options,
                      (this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade,0);
  PSXDrawSquare__Fiiiii
            (col,(int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf
                                + 8),
             (int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                            10),w,1);
  PSXDrawSquare__Fiiiii
            (col,(int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf
                                + 8),
             (int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                            10) + 8,w,1);
  sMenuText = TextSys_Word__Fi((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.
                               fTextDescription);
  FETextRender_FullTextRGB__FPcssics
            (sMenuText,
             (short)(((uint)*(ushort *)
                             ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                             8) + 4) * 0x10000 >> 0x10),
             (short)(((uint)*(ushort *)
                             ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                             10) + 10) * 0x10000 >> 0x10),col_00,0,0);
  col_00 = *(int *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 4);
  col = *(int *)(col_00 + 0xc);
  uVar1 = (**(code **)(col + 0x14))(col_00 + (int)*(short *)(col + 0x10),0xffffffff);
  col = *(int *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 4);
  DrawSlider__FsssssssssbT9ss
            (uVar1 & 0xff,(ushort)*(byte *)(col + 8),(ushort)*(byte *)(col + 9),
             (short)(((uint)*(ushort *)
                             ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                             8) + 4) * 0x10000 >> 0x10),
             (int)(((uint)*(ushort *)
                           ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 10
                           ) + 2) * 0x10000) >> 0x10,(w + -8) * 0x10000 >> 0x10,
             (int)*(short *)((int)&(this->tMenuItemLeftRightSlider).fData + 2),4,4,(void *)0x0,
             (void *)0x0,
             (int)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade,0);
  return;
}



// decompiled code
// original method signature: 
// struct tInsideBoxTwoWaySlider * /*$ra*/ __22tInsideBoxTwoWaySliderUiP13tListIteratori(struct tInsideBoxTwoWaySlider *this /*$s0*/, unsigned int textDescription /*$a1*/, struct tListIterator *dataPtr /*$a2*/, int type /*$s1*/)
 // line 1497, offset 0x8001f474
	/* begin block 1 */
		// Start line: 1498
		// Start offset: 0x8001F474
	/* end block 1 */
	// End offset: 0x8001F474
	// End Line: 1498

	/* begin block 2 */
		// Start line: 3446
	/* end block 2 */
	// End Line: 3447

	/* begin block 3 */
		// Start line: 3450
	/* end block 3 */
	// End Line: 3451

	/* begin block 4 */
		// Start line: 3450
	/* end block 4 */
	// End Line: 3451

tInsideBoxTwoWaySlider *
__22tInsideBoxTwoWaySliderUiP13tListIteratori
          (tInsideBoxTwoWaySlider *this,uint textDescription,tListIterator *dataPtr,int type)

{
  __24tMenuItemLeftRightSliderUiP13tListIterator
            ((tMenuItemLeftRightSlider *)this,textDescription,dataPtr);
  *(undefined4 *)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf = 0x80010b70;
  (this->tMenuItemLeftRightSlider).fX = (short)type;
  (this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade = 0;
  *(undefined2 *)((int)&(this->tMenuItemLeftRightSlider).fData + 2) = 5;
  *(undefined4 *)&(this->tMenuItemLeftRightSlider).fWidth = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._22tInsideBoxTwoWaySlider(struct tInsideBoxTwoWaySlider *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 1508, offset 0x8001f4c8
	/* begin block 1 */
		// Start line: 1509
		// Start offset: 0x8001F4C8
	/* end block 1 */
	// End offset: 0x8001F4C8
	// End Line: 1509

	/* begin block 2 */
		// Start line: 3478
	/* end block 2 */
	// End Line: 3479

	/* begin block 3 */
		// Start line: 3482
	/* end block 3 */
	// End Line: 3483

	/* begin block 4 */
		// Start line: 3482
	/* end block 4 */
	// End Line: 3483

void ___22tInsideBoxTwoWaySlider(tInsideBoxTwoWaySlider *this,int __in_chrg)

{
  *(undefined4 *)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf = 0x80010b70;
  ___24tMenuItemLeftRightSlider((tMenuItemLeftRightSlider *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__22tInsideBoxTwoWaySlider7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tInsideBoxTwoWaySlider *this /*$s1*/, enum tInputKeyType *keyval /*$s0*/)
 // line 1512, offset 0x8001f4f0
	/* begin block 1 */
		// Start line: 1513
		// Start offset: 0x8001F4F0
	/* end block 1 */
	// End offset: 0x8001F58C
	// End Line: 1537

	/* begin block 2 */
		// Start line: 3486
	/* end block 2 */
	// End Line: 3487

	/* begin block 3 */
		// Start line: 3490
	/* end block 3 */
	// End Line: 3491

	/* begin block 4 */
		// Start line: 3490
	/* end block 4 */
	// End Line: 3491

void ProcessInput__22tInsideBoxTwoWaySlider7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tInsideBoxTwoWaySlider *this,tInputKeyType *keyval)

{
  int iVar1;
  int *in_a2;
  
  iVar1 = *in_a2;
  if (iVar1 == 2) {
    AudioCmn_PlayFESFX__Fi(0);
    *(undefined4 *)&(this->tMenuItemLeftRightSlider).fWidth = 1;
    *in_a2 = 1;
    iVar1 = *in_a2;
  }
  if (iVar1 == 0x80) {
    if (*(int *)&(this->tMenuItemLeftRightSlider).fWidth != 0) {
      AudioCmn_PlayFESFX__Fi(1);
      *(undefined4 *)&(this->tMenuItemLeftRightSlider).fWidth = 0;
      *in_a2 = 1;
      goto LAB_8001f55c;
    }
  }
  else {
LAB_8001f55c:
    if (*(int *)&(this->tMenuItemLeftRightSlider).fWidth != 0) goto LAB_8001f588;
    iVar1 = *in_a2;
  }
  if ((iVar1 != 0x800) && (iVar1 != 0x1000)) {
    return;
  }
LAB_8001f588:
  *in_a2 = 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__22tInsideBoxTwoWaySlideriiib(struct tInsideBoxTwoWaySlider *this /*$s6*/, int x /*$s0*/, int y /*$s1*/, int w /*$s2*/)
 // line 1543, offset 0x8001f5a0
	/* begin block 1 */
		// Start line: 1544
		// Start offset: 0x8001F5A0
		// Variables:
	// 		int ww; // $s1
	// 		int col; // $s0
	// 		int col2; // $s4
	// 		int coltext; // $s5

		/* begin block 1.1 */
			// Start line: 1550
			// Start offset: 0x8001F5E8
			// Variables:
		// 		struct tListIterator *this; // $v1

			/* begin block 1.1.1 */
				// Start line: 1550
				// Start offset: 0x8001F5E8
			/* end block 1.1.1 */
			// End offset: 0x8001F5E8
			// End Line: 1550
		/* end block 1.1 */
		// End offset: 0x8001F5E8
		// End Line: 1550

		/* begin block 1.2 */
			// Start line: 1550
			// Start offset: 0x8001F5E8

			/* begin block 1.2.1 */
				// Start line: 1550
				// Start offset: 0x8001F5E8
			/* end block 1.2.1 */
			// End offset: 0x8001F5E8
			// End Line: 1550
		/* end block 1.2 */
		// End offset: 0x8001F5E8
		// End Line: 1550

		/* begin block 1.3 */
			// Start line: 1550
			// Start offset: 0x8001F5E8
			// Variables:
		// 		struct tListIterator *this; // $v0

			/* begin block 1.3.1 */
				// Start line: 1550
				// Start offset: 0x8001F5E8
			/* end block 1.3.1 */
			// End offset: 0x8001F5E8
			// End Line: 1550
		/* end block 1.3 */
		// End offset: 0x8001F5E8
		// End Line: 1550

		/* begin block 1.4 */
			// Start line: 1550
			// Start offset: 0x8001F5E8

			/* begin block 1.4.1 */
				// Start line: 1550
				// Start offset: 0x8001F5E8
			/* end block 1.4.1 */
			// End offset: 0x8001F5E8
			// End Line: 1550
		/* end block 1.4 */
		// End offset: 0x8001F5E8
		// End Line: 1550
	/* end block 1 */
	// End offset: 0x8001F5E8
	// End Line: 1556

	/* begin block 2 */
		// Start line: 3546
	/* end block 2 */
	// End Line: 3547

	/* begin block 3 */
		// Start line: 3553
	/* end block 3 */
	// End Line: 3554

	/* begin block 4 */
		// Start line: 3553
	/* end block 4 */
	// End Line: 3554

void Draw__22tInsideBoxTwoWaySlideriiib(tInsideBoxTwoWaySlider *this,int x,int y,int w)

{
  short sVar1;
  ushort uVar2;
  int col;
  int col_00;
  int col_01;
  char *sMenuText;
  int w_00;
  
  if (*(int *)&(this->tMenuItemLeftRightSlider).fWidth != 0) {
    Calibrate__22tInsideBoxTwoWaySlider(this);
  }
  sVar1 = (this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade;
  *(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 8) = (short)x;
  *(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 10) = (short)y;
  col = CalcFadeVal__Fiii((int)&DAT_00551e00,0xc83c1e,(int)sVar1);
  col_00 = CalcFadeVal__Fiii((int)&DAT_00551e00,(int)&DAT_0000bebe,
                             (int)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.
                                  fSelFade);
  col_01 = CalcTextFadeUnselToSel__F13tMenuTextTypess
                     (textType_Options,
                      (this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade,0);
  w_00 = (w >> 1) + -4;
  PSXDrawSquare__Fiiiii
            (col,(int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf
                                + 8),
             (int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                            10),w_00,1);
  PSXDrawSquare__Fiiiii
            (col,(int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf
                                + 8) + w_00 + 8,
             (int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                            10),w_00,1);
  PSXDrawSquare__Fiiiii
            (col,(int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf
                                + 8),
             (int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                            10) + 8,w_00,1);
  PSXDrawSquare__Fiiiii
            (col,(int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf
                                + 8) + w_00 + 9,
             (int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                            10) + 8,w_00,1);
  PSXDrawSquare__Fiiiii
            (col_00,(int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.
                                    _vf + 8) + w_00 + 3,
             (int)*(short *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                            10),2,9);
  sMenuText = TextSys_Word__Fi((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.
                               fTextDescription);
  FETextRender_FullTextRGB__FPcssics
            (sMenuText,
             (short)(((uint)*(ushort *)
                             ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                             8) + 4) * 0x10000 >> 0x10),
             (short)(((uint)*(ushort *)
                             ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                             10) + 10) * 0x10000 >> 0x10),col_01,0,0);
  col_00 = *(int *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 4);
  col = *(int *)(col_00 + 0xc);
  uVar2 = (**(code **)(col + 0x14))(col_00 + (int)*(short *)(col + 0x10),0xffffffff);
  col_01 = ((w >> 1) + -8) * 0x10000 >> 0x10;
  col = *(int *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 4);
  DrawSlider__FsssssssssbT9ss
            (uVar2 & 0xff,(ushort)*(byte *)(col + 8),(ushort)*(byte *)(col + 9),
             (short)(((uint)*(ushort *)
                             ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                             8) + 1) * 0x10000 >> 0x10),
             (int)(((uint)*(ushort *)
                           ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 10
                           ) + 2) * 0x10000) >> 0x10,col_01,
             (int)*(short *)((int)&(this->tMenuItemLeftRightSlider).fData + 2),4,4,&DAT_00000001,
             (void *)0x0,
             (int)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade,0);
  col_00 = *(int *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 4);
  col = *(int *)(col_00 + 0xc);
  uVar2 = (**(code **)(col + 0x14))(col_00 + (int)*(short *)(col + 0x10),0xffffffff);
  col = *(int *)((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 4);
  DrawSlider__FsssssssssbT9ss
            (uVar2 & 0xff,(ushort)*(byte *)(col + 8),(ushort)*(byte *)(col + 9),
             (short)(((uint)*(ushort *)
                             ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf +
                             8) + w_00 + 10) * 0x10000 >> 0x10),
             (int)(((uint)*(ushort *)
                           ((this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem._vf + 10
                           ) + 2) * 0x10000) >> 0x10,col_01,
             (int)*(short *)((int)&(this->tMenuItemLeftRightSlider).fData + 2),4,4,(void *)0x0,
             (void *)0x0,
             (int)(this->tMenuItemLeftRightSlider).tMenuItemInteractive.tMenuItem.fSelFade,0);
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ GetCurrentStickRange__Fi(int player /*$a0*/)
 // line 1578, offset 0x8001f860
	/* begin block 1 */
		// Start line: 1579
		// Start offset: 0x8001F860
		// Variables:
	// 		int range1; // $a1
	// 		int range2; // $v0
	/* end block 1 */
	// End offset: 0x8001F8B4
	// End Line: 1583

	/* begin block 2 */
		// Start line: 3632
	/* end block 2 */
	// End Line: 3633

	/* begin block 3 */
		// Start line: 3637
	/* end block 3 */
	// End Line: 3638

	/* begin block 4 */
		// Start line: 3637
	/* end block 4 */
	// End Line: 3638

	/* begin block 5 */
		// Start line: 3639
	/* end block 5 */
	// End Line: 3640

char GetCurrentStickRange__Fi(int player)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  uVar1 = (uint)*(byte *)((int)gPadinfo.buf + player * 0x20 + 4);
  iVar4 = 0x80 - uVar1;
  if (iVar4 < 1) {
    iVar4 = uVar1 - 0x80;
  }
  uVar1 = (uint)*(byte *)((int)gPadinfo.buf + player * 0x20 + 5);
  iVar2 = 0x80 - uVar1;
  if (iVar2 < 1) {
    iVar2 = uVar1 - 0x80;
  }
  cVar3 = (char)iVar2;
  if (iVar2 < iVar4) {
    cVar3 = (char)iVar4;
  }
  return cVar3;
}



// decompiled code
// original method signature: 
// char /*$ra*/ GetCurrentStickRange2__Fi(int player /*$a0*/)
 // line 1586, offset 0x8001f8bc
	/* begin block 1 */
		// Start line: 1587
		// Start offset: 0x8001F8BC
		// Variables:
	// 		int range1; // $a1
	// 		int range2; // $v0
	/* end block 1 */
	// End offset: 0x8001F910
	// End Line: 1591

	/* begin block 2 */
		// Start line: 3649
	/* end block 2 */
	// End Line: 3650

	/* begin block 3 */
		// Start line: 3653
	/* end block 3 */
	// End Line: 3654

	/* begin block 4 */
		// Start line: 3653
	/* end block 4 */
	// End Line: 3654

	/* begin block 5 */
		// Start line: 3655
	/* end block 5 */
	// End Line: 3656

char GetCurrentStickRange2__Fi(int player)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  uVar1 = (uint)*(byte *)((int)gPadinfo.buf + player * 0x20 + 6);
  iVar4 = 0x80 - uVar1;
  if (iVar4 < 1) {
    iVar4 = uVar1 - 0x80;
  }
  uVar1 = (uint)*(byte *)((int)gPadinfo.buf + player * 0x20 + 7);
  iVar2 = 0x80 - uVar1;
  if (iVar2 < 1) {
    iVar2 = uVar1 - 0x80;
  }
  cVar3 = (char)iVar2;
  if (iVar2 < iVar4) {
    cVar3 = (char)iVar4;
  }
  return cVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Calibrate__22tInsideBoxTwoWaySlider(struct tInsideBoxTwoWaySlider *this /*$s0*/)
 // line 1595, offset 0x8001f918
	/* begin block 1 */
		// Start line: 1596
		// Start offset: 0x8001F918
		// Variables:
	// 		int range; // $a1
	// 		int player; // $s2
	/* end block 1 */
	// End offset: 0x8001FC20
	// End Line: 1679

	/* begin block 2 */
		// Start line: 3666
	/* end block 2 */
	// End Line: 3667

	/* begin block 3 */
		// Start line: 3671
	/* end block 3 */
	// End Line: 3672

	/* begin block 4 */
		// Start line: 3671
	/* end block 4 */
	// End Line: 3672

/* WARNING: Removing unreachable block (ram,0x8001fb28) */
/* WARNING: Removing unreachable block (ram,0x8001fb8c) */

void Calibrate__22tInsideBoxTwoWaySlider(tInsideBoxTwoWaySlider *this)

{
  short sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  uint player;
  
  player = (uint)*(byte *)((int)&(FEApp->helpPopup).numItems + 1);
  iVar4 = player * 0x20;
  fHelpText = GetHelpText__23tScreenControllerConfig(screenControllerConfig);
  sVar1 = (this->tMenuItemLeftRightSlider).fX;
  if (sVar1 == 1) {
    cVar7 = *(char *)((int)gPadinfo.buf + iVar4 + 1);
    if (cVar7 == '#') {
      bVar2 = *(byte *)((int)gPadinfo.buf + iVar4 + 4);
      if (bVar2 < 0x80) {
        iVar4 = 0x80 - (uint)bVar2;
      }
      else {
        iVar4 = (uint)bVar2 - 0x80;
      }
      iVar8 = (uint)(byte)frontEnd.steeringRange[player] - 10;
      if (iVar8 < iVar4) {
        iVar4 = iVar8;
      }
      cVar7 = (char)iVar4;
      if (iVar4 < 0) {
        cVar7 = '\0';
      }
      frontEnd.deadSpot[player] = cVar7;
    }
    else {
      if ((cVar7 == 'S') || (cVar7 == 's')) {
        bVar2 = GetCurrentStickRange__Fi(player);
        uVar6 = (uint)(byte)frontEnd.J1MAX[player] - 10;
        uVar5 = (uint)bVar2;
        if ((int)uVar6 < (int)(uint)bVar2) {
          uVar5 = uVar6;
        }
        cVar7 = (char)uVar5;
        if ((int)uVar5 < 0) {
          cVar7 = '\0';
        }
        frontEnd.J1MIN[player] = cVar7;
      }
    }
  }
  else {
    if (sVar1 < 2) {
      if (sVar1 == 0) {
        cVar7 = *(char *)((int)gPadinfo.buf + iVar4 + 1);
        if (cVar7 == '#') {
          bVar2 = *(byte *)((int)gPadinfo.buf + iVar4 + 4);
          if (bVar2 < 0x80) {
            iVar4 = 0x80 - (uint)bVar2;
          }
          else {
            iVar4 = (uint)bVar2 - 0x80;
          }
          cVar7 = (char)iVar4;
          iVar8 = (uint)(byte)frontEnd.deadSpot[player] + 10;
          if (iVar4 < iVar8) {
            cVar7 = (char)iVar8;
          }
          frontEnd.steeringRange[player] = cVar7;
        }
        else {
          if ((cVar7 == 'S') || (cVar7 == 's')) {
            bVar2 = GetCurrentStickRange__Fi(player);
            uVar5 = (uint)(byte)frontEnd.J1MIN[player] + 10;
            if ((uint)bVar2 < uVar5) {
              bVar2 = (byte)uVar5;
            }
            frontEnd.J1MAX[player] = bVar2;
          }
        }
      }
    }
    else {
      if (sVar1 == 2) {
        cVar7 = *(char *)((int)gPadinfo.buf + iVar4 + 1);
        if (cVar7 == '#') {
          frontEnd.ImaxRange[player] = *(char *)((int)gPadinfo.buf + iVar4 + 5);
        }
        else {
          if ((cVar7 == 'S') || (cVar7 == 's')) {
            bVar2 = GetCurrentStickRange2__Fi(player);
            uVar5 = (uint)(byte)frontEnd.J2MIN[player] + 10;
            if ((uint)bVar2 < uVar5) {
              bVar2 = (byte)uVar5;
            }
            frontEnd.J2MAX[player] = bVar2;
            frontEnd.J2MAX[player] = bVar2;
          }
        }
      }
      else {
        if (sVar1 == 3) {
          cVar7 = *(char *)((int)gPadinfo.buf + iVar4 + 1);
          if (cVar7 == '#') {
            bVar2 = *(byte *)((int)gPadinfo.buf + iVar4 + 6);
            bVar3 = 10;
            if (9 < bVar2) {
              bVar3 = bVar2;
            }
            frontEnd.IImaxRange[player] = bVar3;
          }
          else {
            if ((cVar7 == 'S') || (cVar7 == 's')) {
              bVar2 = GetCurrentStickRange2__Fi(player);
              uVar6 = (uint)(byte)frontEnd.J2MAX[player] - 10;
              uVar5 = (uint)bVar2;
              if ((int)uVar6 < (int)(uint)bVar2) {
                uVar5 = uVar6;
              }
              cVar7 = (char)uVar5;
              if ((int)uVar5 < 0) {
                cVar7 = '\0';
              }
              frontEnd.J2MIN[player] = cVar7;
            }
          }
        }
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// struct tUserNameMenuItem * /*$ra*/ __17tUserNameMenuItemUi(struct tUserNameMenuItem *this /*$s0*/, unsigned int textDescription /*$a1*/)
 // line 1688, offset 0x8001fc38
	/* begin block 1 */
		// Start line: 1689
		// Start offset: 0x8001FC38
		// Variables:
	// 		short i; // $a0
	/* end block 1 */
	// End offset: 0x8001FC98
	// End Line: 1698

	/* begin block 2 */
		// Start line: 3864
	/* end block 2 */
	// End Line: 3865

	/* begin block 3 */
		// Start line: 3874
	/* end block 3 */
	// End Line: 3875

	/* begin block 4 */
		// Start line: 3874
	/* end block 4 */
	// End Line: 3875

tUserNameMenuItem * __17tUserNameMenuItemUi(tUserNameMenuItem *this,uint textDescription)

{
  int iVar1;
  
  __9tMenuItemUi((tMenuItem *)this,textDescription);
  iVar1 = 0;
  *(undefined4 *)(this->tMenuItem)._vf = 0x80010b18;
  *(undefined2 *)&this->fData = 0;
  *(undefined2 *)((this->tMenuItem)._vf + 10) = 0;
  do {
    *(undefined *)((int)&this->fData + (int)(short)iVar1 * 9 + 2) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 * 0x10000 >> 0x10 < 10);
  *(undefined4 *)((this->tMenuItem)._vf + 4) = 0;
  return this;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CheckForCheats__FPc(char *fData /*$s0*/)
 // line 1701, offset 0x8001fcac
	/* begin block 1 */
		// Start line: 1702
		// Start offset: 0x8001FCAC
		// Variables:
	// 		int len; // $v1
	/* end block 1 */
	// End offset: 0x8001FD14
	// End Line: 1709

	/* begin block 2 */
		// Start line: 3901
	/* end block 2 */
	// End Line: 3902

	/* begin block 3 */
		// Start line: 3905
	/* end block 3 */
	// End Line: 3906

	/* begin block 4 */
		// Start line: 3905
	/* end block 4 */
	// End Line: 3906

void * CheckForCheats__FPc(char *fData)

{
  size_t sVar1;
  void *pvVar2;
  
  sVar1 = strlen(fData);
  while ((int)sVar1 < 8) {
    fData[sVar1] = '\0';
    sVar1 = sVar1 + 1;
  }
  pvVar2 = FECheat_ActivateCheat__FPc(fData);
  if ((pvVar2 == (void *)0x0) &&
     (pvVar2 = FECheat_ActivateBonusByCode__FPc(fData), pvVar2 == (void *)0x0)) {
    return (void *)0x0;
  }
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__17tUserNameMenuItem7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tUserNameMenuItem *this /*$s0*/, enum tInputKeyType *keyval /*$s1*/)
 // line 1712, offset 0x8001fd2c
	/* begin block 1 */
		// Start line: 1713
		// Start offset: 0x8001FD2C

		/* begin block 1.1 */
			// Start line: 1713
			// Start offset: 0x8001FD2C

			/* begin block 1.1.1 */
				// Start line: 1718
				// Start offset: 0x8001FD90

				/* begin block 1.1.1.1 */
					// Start line: 1779
					// Start offset: 0x8001FEF0

					/* begin block 1.1.1.1.1 */
						// Start line: 1791
						// Start offset: 0x8001FF4C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1791
							// Start offset: 0x8001FF4C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1792
								// Start offset: 0x8001FF64

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1793
									// Start offset: 0x8001FF64

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1798
										// Start offset: 0x8001FF84

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1799
											// Start offset: 0x8001FF84

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1799
												// Start offset: 0x8001FF84
												// Variables:
											// 		struct tFEApplication *this; // $v0

												/* begin block 1.1.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 1799
													// Start offset: 0x8001FF84
												/* end block 1.1.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x8001FF84
												// End Line: 1799
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8001FF84
											// End Line: 1799

											/* begin block 1.1.1.1.1.1.1.1.1.1.2 */
												// Start line: 1799
												// Start offset: 0x8001FF84

												/* begin block 1.1.1.1.1.1.1.1.1.1.2.1 */
													// Start line: 1799
													// Start offset: 0x8001FF84
												/* end block 1.1.1.1.1.1.1.1.1.1.2.1 */
												// End offset: 0x8001FF84
												// End Line: 1799
											/* end block 1.1.1.1.1.1.1.1.1.1.2 */
											// End offset: 0x8001FF84
											// End Line: 1799
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x8001FFAC
										// End Line: 1805
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8001FFAC
									// End Line: 1808
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8001FFAC
								// End Line: 1808
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8001FFB4
							// End Line: 1810
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80020060
						// End Line: 1836
					/* end block 1.1.1.1.1 */
					// End offset: 0x80020060
					// End Line: 1836
				/* end block 1.1.1.1 */
				// End offset: 0x80020060
				// End Line: 1836
			/* end block 1.1.1 */
			// End offset: 0x80020060
			// End Line: 1840
		/* end block 1.1 */
		// End offset: 0x80020060
		// End Line: 1840
	/* end block 1 */
	// End offset: 0x800200CC
	// End Line: 1850

	/* begin block 2 */
		// Start line: 3923
	/* end block 2 */
	// End Line: 3924

	/* begin block 3 */
		// Start line: 3927
	/* end block 3 */
	// End Line: 3928

	/* begin block 4 */
		// Start line: 3927
	/* end block 4 */
	// End Line: 3928

void ProcessInput__17tUserNameMenuItem7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tUserNameMenuItem *this,tInputKeyType *keyval)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  size_t sVar6;
  void *pvVar7;
  int SFXnum;
  int iVar8;
  int *in_a2;
  
  sVar5 = menu_kUserNameRows;
  SFXnum = *in_a2;
  if (SFXnum == 0x400) {
LAB_8001fd94:
    if (SFXnum == 0x200) {
      uVar3 = *(short *)&this->fData - 1;
      *(ushort *)&this->fData = uVar3;
      SFXnum = 3;
      if ((int)((uint)uVar3 << 0x10) < 0) {
        *(short *)&this->fData = menu_kUserNameRows + -1;
      }
    }
    else {
      sVar4 = *(short *)&this->fData + 1;
      *(short *)&this->fData = sVar4;
      SFXnum = 4;
      if (sVar5 <= sVar4) {
        *(undefined2 *)&this->fData = 0;
      }
    }
    AudioCmn_PlayFESFX__Fi(SFXnum);
    if (*(short *)((this->tMenuItem)._vf + 10) < 0) {
      *(undefined2 *)((this->tMenuItem)._vf + 10) = 0;
    }
LAB_8002005c:
    *in_a2 = 1;
  }
  else {
    if (SFXnum < 0x401) {
      if (SFXnum == 2) {
        sVar6 = strlen(*(char **)((this->tMenuItem)._vf + 4));
        bVar1 = *(byte *)((int)&this->fData +
                         (int)*(short *)((this->tMenuItem)._vf + 10) +
                         (int)*(short *)&this->fData * 9 + 2);
        sVar5 = (short)sVar6;
        if ((uint)bVar1 - 0x23 < 2) {
          SFXnum = 0x15;
          if (0 < (int)sVar5) {
            *(undefined *)((int)sVar5 + *(int *)((this->tMenuItem)._vf + 4) + -1) = 0;
            goto LAB_80020050;
          }
          goto LAB_8002005c;
        }
        if ((bVar1 == 0x21) || (bVar1 == 0x40)) {
          pvVar7 = CheckForCheats__FPc(*(char **)((this->tMenuItem)._vf + 4));
          if (pvVar7 != (void *)0x0) {
            **(undefined **)((this->tMenuItem)._vf + 4) = 0;
            goto LAB_80020060;
          }
          SFXnum = 0x10;
          if ((*(uint *)FEApp->fCurrentMenu[0] & 0x100) == 0) {
            SFXnum = 0x2000;
          }
          *in_a2 = SFXnum;
        }
        else {
          if ((bVar1 == 0x26) || (bVar1 == 0x5e)) {
            SFXnum = (int)sVar5;
            if (SFXnum < (int)*(short *)((this->tMenuItem)._vf + 8)) {
              *(undefined *)(*(int *)((this->tMenuItem)._vf + 4) + SFXnum) = 0x20;
              *(undefined *)(SFXnum + *(int *)((this->tMenuItem)._vf + 4) + 1) = 0;
              AudioCmn_PlayFESFX__Fi(0x15);
              goto LAB_80020060;
            }
          }
          else {
            iVar8 = (int)sVar5;
            SFXnum = 0x15;
            if (iVar8 < (int)*(short *)((this->tMenuItem)._vf + 8)) {
              *(byte *)(*(int *)((this->tMenuItem)._vf + 4) + iVar8) = bVar1;
              *(undefined *)(iVar8 + *(int *)((this->tMenuItem)._vf + 4) + 1) = 0;
              goto LAB_80020050;
            }
          }
        }
        AudioCmn_PlayFESFX__Fi(1);
      }
      else {
        if (SFXnum == 0x200) goto LAB_8001fd94;
      }
    }
    else {
      if (SFXnum == 0x800) {
        uVar3 = *(short *)((this->tMenuItem)._vf + 10) - 1;
        *(ushort *)((this->tMenuItem)._vf + 10) = uVar3;
        SFXnum = 3;
        if ((int)((uint)uVar3 << 0x10) < 0) {
          *(undefined2 *)((this->tMenuItem)._vf + 10) = 5;
        }
LAB_80020050:
        AudioCmn_PlayFESFX__Fi(SFXnum);
        goto LAB_8002005c;
      }
      if (SFXnum == 0x1000) {
        sVar5 = *(short *)((this->tMenuItem)._vf + 10) + 1;
        *(short *)((this->tMenuItem)._vf + 10) = sVar5;
        if (5 < sVar5) {
          *(undefined2 *)((this->tMenuItem)._vf + 10) = 0;
        }
        AudioCmn_PlayFESFX__Fi(4);
        *in_a2 = 1;
        sVar5 = *(short *)((this->tMenuItem)._vf + 10);
        SFXnum = (int)*(short *)&this->fData * 9;
        if (*(char *)((int)&this->fData + (int)*(short *)((this->tMenuItem)._vf + 10) + SFXnum + 2)
            != '-') goto LAB_800200cc;
        do {
          *(short *)((this->tMenuItem)._vf + 10) = sVar5 + 1;
          if (5 < (short)(sVar5 + 1)) {
            *(undefined2 *)((this->tMenuItem)._vf + 10) = 0;
          }
          sVar5 = *(short *)((this->tMenuItem)._vf + 10);
        } while (*(char *)((int)&this->fData +
                          (int)*(short *)((this->tMenuItem)._vf + 10) + SFXnum + 2) == '-');
      }
    }
  }
LAB_80020060:
  sVar5 = *(short *)((this->tMenuItem)._vf + 10);
  SFXnum = (int)*(short *)&this->fData * 9;
  cVar2 = *(char *)((int)&this->fData + (int)*(short *)((this->tMenuItem)._vf + 10) + SFXnum + 2);
  while (cVar2 == '-') {
    *(ushort *)((this->tMenuItem)._vf + 10) = sVar5 - 1U;
    if ((int)((uint)(ushort)(sVar5 - 1U) << 0x10) < 0) {
      *(undefined2 *)((this->tMenuItem)._vf + 10) = 5;
    }
    cVar2 = *(char *)((int)&this->fData + (int)*(short *)((this->tMenuItem)._vf + 10) + SFXnum + 2);
    sVar5 = *(short *)((this->tMenuItem)._vf + 10);
  }
LAB_800200cc:
  Stattool_SamNelsonsUpperLowerStringConverterForRecords__FPc(*(char **)((this->tMenuItem)._vf + 4))
  ;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ SpecialCharacter__Fc(char current /*$a0*/)
 // line 1853, offset 0x800200ec
	/* begin block 1 */
		// Start line: 1854
		// Start offset: 0x800200EC
		// Variables:
	// 		int ret; // $a1
	/* end block 1 */
	// End offset: 0x80020174
	// End Line: 1870

	/* begin block 2 */
		// Start line: 4210
	/* end block 2 */
	// End Line: 4211

	/* begin block 3 */
		// Start line: 4214
	/* end block 3 */
	// End Line: 4215

	/* begin block 4 */
		// Start line: 4214
	/* end block 4 */
	// End Line: 4215

	/* begin block 5 */
		// Start line: 4216
	/* end block 5 */
	// End Line: 4217

int SpecialCharacter__Fc(char current)

{
  int iVar1;
  
  iVar1 = 0;
  switch(current) {
  case -0x1f:
    iVar1 = 0x56;
    break;
  case -0x1c:
    iVar1 = 0x51;
    break;
  case -0x1b:
    iVar1 = 0x5b;
    break;
  case -0x18:
    iVar1 = 0x55;
    break;
  case -0x17:
    iVar1 = 0x54;
    break;
  case -0x13:
    iVar1 = 0x57;
    break;
  case -0xf:
    iVar1 = 0x5a;
    break;
  case -0xd:
    iVar1 = 0x58;
    break;
  case -10:
    iVar1 = 0x52;
    break;
  case -6:
    iVar1 = 0x59;
    break;
  case -4:
    iVar1 = 0x53;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__17tUserNameMenuItemb(struct tUserNameMenuItem *this /*$s2*/)
 // line 1874, offset 0x8002017c
	/* begin block 1 */
		// Start line: 1875
		// Start offset: 0x8002017C
		// Variables:
	// 		int x; // stack offset -48
	// 		int y; // $fp
	// 		struct tTexture_ShapeInfo *shape; // $s6

		/* begin block 1.1 */
			// Start line: 1875
			// Start offset: 0x8002017C

			/* begin block 1.1.1 */
				// Start line: 1886
				// Start offset: 0x800201E4
				// Variables:
			// 		short j; // $s0
			// 		char output[2]; // stack offset -104
			// 		int ColText; // $s3
			// 		int Col; // $s7
			// 		struct tDrawShapeExtended tCol; // stack offset -96
			// 		short sl; // stack offset -44
			// 		short startx; // $s1
			// 		int xx; // $s1
			// 		int yy; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 1919
					// Start offset: 0x8002035C

					/* begin block 1.1.1.1.1 */
						// Start line: 1923
						// Start offset: 0x80020394
						// Variables:
					// 		struct tDrawShapeExtended fFlags; // stack offset -72
					// 		char current; // $v1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1925
							// Start offset: 0x80020394

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1932
								// Start offset: 0x800203E8

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1932
									// Start offset: 0x800203E8

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1938
										// Start offset: 0x80020408

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1938
											// Start offset: 0x80020408

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1944
												// Start offset: 0x80020428
												// Variables:
											// 		int shapetodraw; // $v0
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x80020490
											// End Line: 1953
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x80020490
										// End Line: 1953
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80020490
									// End Line: 1953
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80020490
								// End Line: 1953
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80020490
							// End Line: 1953
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80020490
						// End Line: 1953
					/* end block 1.1.1.1.1 */
					// End offset: 0x80020490
					// End Line: 1953
				/* end block 1.1.1.1 */
				// End offset: 0x80020490
				// End Line: 1953
			/* end block 1.1.1 */
			// End offset: 0x80020490
			// End Line: 1953
		/* end block 1.1 */
		// End offset: 0x80020490
		// End Line: 1953
	/* end block 1 */
	// End offset: 0x80020490
	// End Line: 1960

	/* begin block 2 */
		// Start line: 4251
	/* end block 2 */
	// End Line: 4252

	/* begin block 3 */
		// Start line: 4256
	/* end block 3 */
	// End Line: 4257

	/* begin block 4 */
		// Start line: 4256
	/* end block 4 */
	// End Line: 4257

void Draw__17tUserNameMenuItemb(tUserNameMenuItem *this)

{
  char current;
  short sVar1;
  short sVar2;
  tTexture_ShapeInfo *ptVar3;
  int iVar4;
  int col;
  int col_00;
  char *sMenuText;
  size_t sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char local_68;
  undefined local_67;
  int local_5c;
  tDrawShapeExtended tStack72;
  int local_30;
  ushort local_2c;
  
  local_30 = TextSys_WordX__Fi((this->tMenuItem).fTextDescription);
  iVar4 = TextSys_WordY__Fi((this->tMenuItem).fTextDescription);
  ptVar3 = gHelpShapes;
  if (*(short *)(this->fRowList + 0x54) != 0x80) {
    local_67 = 0;
    col = CalcFadeVal__Fii((int)&DAT_0000bebe,(int)*(short *)(this->fRowList + 0x54));
    col_00 = CalcFadeVal__Fii((int)&DAT_0000bebe,(int)*(short *)(this->fRowList + 0x54));
    iVar7 = 0;
    local_5c = col_00;
    sMenuText = TextSys_Word__Fi((this->tMenuItem).fTextDescription);
    FETextRender_FullTextRGB__FPcssics(sMenuText,(short)local_30,(short)iVar4,col,0,0);
    sVar5 = strlen(*(char **)((this->tMenuItem)._vf + 4));
    local_2c = (ushort)sVar5;
    iVar9 = local_30 + 0x4e + (int)*(short *)((this->tMenuItem)._vf + 8) * -10;
    iVar6 = (int)(short)local_2c;
    if (0 < iVar6) {
      do {
        local_68 = *(char *)(*(int *)((this->tMenuItem)._vf + 4) + (int)(short)iVar7);
        FETextRender_FullTextRGB__FPcssics
                  (&local_68,(short)((uint)((iVar9 + (int)(short)iVar7 * 0x14) * 0x10000) >> 0x10),
                   (short)((uint)((iVar4 + 0x11) * 0x10000) >> 0x10),col,1,0);
        iVar7 = iVar7 + 1;
      } while (iVar7 * 0x10000 >> 0x10 < iVar6);
    }
    uVar8 = (uint)local_2c;
    if ((short)local_2c < *(short *)((this->tMenuItem)._vf + 8)) {
      do {
        PSXDrawSquare__Fiiiii
                  (col_00,(iVar9 * 0x10000 >> 0x10) + (int)(short)uVar8 * 0x14,iVar4 + 0x19,0x11,1);
        uVar8 = uVar8 + 1;
      } while ((int)(uVar8 * 0x10000) >> 0x10 < (int)*(short *)((this->tMenuItem)._vf + 8));
    }
    sVar1 = *(short *)((this->tMenuItem)._vf + 10);
    sVar2 = *(short *)&this->fData;
    col = (int)MENUUSERNAME_STARTY;
    if (*(short *)(this->fRowList + 0x54) == 0) {
      tStack72.tint[0] = PulsateYellow;
      col_00 = (int)&(this->tMenuItem).fFlags +
               (int)*(short *)((this->tMenuItem)._vf + 10) + (int)*(short *)&this->fData * 9;
      current = *(char *)(col_00 + 0x26);
      if ((current == '!') || (current == '@')) {
        col_00 = 0x4e;
      }
      else {
        if ((byte)(current - 0x23U) < 2) {
          col_00 = 0x4f;
        }
        else {
          if ((current == '&') || (current == '^')) {
            col_00 = 0x50;
          }
          else {
            if ((byte)(current + 0x9fU) < 0x1a) {
              col_00 = (uint)*(byte *)(col_00 + 0x26) - 0x37;
            }
            else {
              if ((byte)(current - 0x30U) < 10) {
                col_00 = (uint)*(byte *)(col_00 + 0x26) + 0x14;
              }
              else {
                col_00 = SpecialCharacter__Fc(current);
              }
            }
          }
        }
      }
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (col_00,0x10,(int)sVar1 * 0x1c + 0xfd,col + (int)sVar2 * 0xf + -3,0,0,&tStack72);
    }
  }
  col = local_30 + 0x9c;
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x1e,8,col - (int)*(short *)&ptVar3[0x1b].clutID,iVar4 + -3,
             (int)*(short *)(this->fRowList + 0x54),0,(tDrawShapeExtended *)0x0);
  PSXDrawSquare__Fiiiii
            (0,local_30,iVar4 + -3,0x9c - (int)*(short *)&ptVar3[0x1b].clutID,
             (int)*(short *)((int)&ptVar3[0x1b].clutID + 2));
  ptVar3 = gHelpShapes;
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x21,8,col - (int)gHelpShapes[0x1d].shapex,iVar4 + 0xc,
             (int)*(short *)(this->fRowList + 0x54),0,(tDrawShapeExtended *)0x0);
  PSXDrawSquare__Fiiiii
            (0,local_30,iVar4 + 0xc,0x9c - (int)ptVar3[0x1d].shapex,(int)ptVar3[0x1d].shapey);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__17tUserNameMenuItem(struct tUserNameMenuItem *this /*$a0*/)
 // line 1973, offset 0x80020574
	/* begin block 1 */
		// Start line: 1974
		// Start offset: 0x80020574
	/* end block 1 */
	// End offset: 0x80020574
	// End Line: 1975

	/* begin block 2 */
		// Start line: 4469
	/* end block 2 */
	// End Line: 4470

	/* begin block 3 */
		// Start line: 4476
	/* end block 3 */
	// End Line: 4477

	/* begin block 4 */
		// Start line: 4476
	/* end block 4 */
	// End Line: 4477

	/* begin block 5 */
		// Start line: 4477
	/* end block 5 */
	// End Line: 4478

	/* begin block 6 */
		// Start line: 4477
	/* end block 6 */
	// End Line: 4478

void TransitionOff__17tUserNameMenuItem(tUserNameMenuItem *this)

{
  *(undefined2 *)(this->fRowList + 0x56) = 0x1e;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__17tUserNameMenuItem(struct tUserNameMenuItem *this /*$s1*/)
 // line 1978, offset 0x80020580
	/* begin block 1 */
		// Start line: 1979
		// Start offset: 0x80020580
		// Variables:
	// 		short i; // $s2
	// 		short NumberOfRows[6]; // stack offset -40
	/* end block 1 */
	// End offset: 0x80020798
	// End Line: 2014

	/* begin block 2 */
		// Start line: 4482
	/* end block 2 */
	// End Line: 4483

	/* begin block 3 */
		// Start line: 4486
	/* end block 3 */
	// End Line: 4487

	/* begin block 4 */
		// Start line: 4486
	/* end block 4 */
	// End Line: 4487

void TransitionOn__17tUserNameMenuItem(tUserNameMenuItem *this)

{
  char cVar1;
  short sVar2;
  char *__format;
  size_t sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  
  iVar6 = 0;
  do {
    __format = TextSys_Word__Fi((int)(short)iVar6 + 0x1fb);
    sprintf((char *)((int)&this->fData + (int)(short)iVar6 * 9 + 2),__format);
    iVar6 = iVar6 + 1;
  } while (iVar6 * 0x10000 >> 0x10 < 10);
  iVar6 = 0;
  local_28 = PTR_DAT_80010a00;
  local_24 = PTR_PTR_80010a04;
  local_20 = PTR_DAT_80010a08;
  menu_kUserNameRows = *(short *)((int)&local_28 + (uint)(byte)frontEnd.language * 2);
  sVar4 = *(short *)((this->tMenuItem)._vf + 10);
  *(undefined2 *)&this->fData = 0;
  cVar1 = *(char *)((int)&this->fData + (int)sVar4 + 2);
  if ((cVar1 != '!') && (cVar1 != '@')) {
    while (iVar6 < (int)menu_kUserNameRows) {
      sVar4 = *(short *)&this->fData;
      *(undefined2 *)((this->tMenuItem)._vf + 10) = 0;
      iVar6 = (int)sVar4 * 9;
      cVar1 = *(char *)((int)&this->fData + iVar6 + 2);
      iVar5 = 0;
      if ((cVar1 != '!') && (cVar1 != '@')) {
        while (sVar3 = strlen((char *)((int)&this->fData + iVar6 + 2)), iVar5 < (int)sVar3) {
          sVar4 = *(short *)((this->tMenuItem)._vf + 10) + 1;
          iVar5 = (int)sVar4;
          iVar6 = (int)*(short *)&this->fData * 9;
          *(short *)((this->tMenuItem)._vf + 10) = sVar4;
          cVar1 = *(char *)((int)&this->fData + iVar5 + iVar6 + 2);
          if ((cVar1 == '!') || (cVar1 == '@')) break;
        }
      }
      sVar4 = *(short *)&this->fData + 1;
      iVar6 = (int)sVar4;
      *(short *)&this->fData = sVar4;
      cVar1 = *(char *)((int)&this->fData +
                       (int)*(short *)((this->tMenuItem)._vf + 10) + iVar6 * 9 + 2);
      if ((cVar1 == '!') || (cVar1 == '@')) break;
    }
  }
  sVar2 = *(short *)&this->fData;
  *(undefined2 *)(this->fRowList + 0x54) = 0x80;
  *(undefined2 *)(this->fRowList + 0x56) = 0xffe2;
  sVar4 = *(short *)(this->fRowList + 0x52);
  (this->tMenuItem).fSelFade = 0;
  *(short *)&this->fData = sVar2 + -1;
  if (FEApp->gotName[(int)sVar4] != (void *)0xffffffff) {
    FeAudio_AsyncPlaySpeech__Fii(2,(int)FEApp->gotName[(int)sVar4]);
    FEApp->gotName[(int)*(short *)(this->fRowList + 0x52)] = (void *)0xffffffff;
  }
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__17tUserNameMenuItem(struct tUserNameMenuItem *this /*$a0*/)
 // line 2018, offset 0x800207b4
	/* begin block 1 */
		// Start line: 2019
		// Start offset: 0x800207B4

		/* begin block 1.1 */
			// Start line: 2020
			// Start offset: 0x800207B4

			/* begin block 1.1.1 */
				// Start line: 2024
				// Start offset: 0x800207D4

				/* begin block 1.1.1.1 */
					// Start line: 2024
					// Start offset: 0x800207D4

					/* begin block 1.1.1.1.1 */
						// Start line: 2026
						// Start offset: 0x800207F8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2026
							// Start offset: 0x800207F8

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2026
								// Start offset: 0x800207F8

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 2026
									// Start offset: 0x800207F8
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800207F8
								// End Line: 2026
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800207F8
							// End Line: 2026
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80020814
						// End Line: 2027
					/* end block 1.1.1.1.1 */
					// End offset: 0x80020814
					// End Line: 2027
				/* end block 1.1.1.1 */
				// End offset: 0x80020814
				// End Line: 2027
			/* end block 1.1.1 */
			// End offset: 0x80020814
			// End Line: 2027
		/* end block 1.1 */
		// End offset: 0x80020814
		// End Line: 2027
	/* end block 1 */
	// End offset: 0x80020814
	// End Line: 2029

	/* begin block 2 */
		// Start line: 4582
	/* end block 2 */
	// End Line: 4583

	/* begin block 3 */
		// Start line: 4587
	/* end block 3 */
	// End Line: 4588

	/* begin block 4 */
		// Start line: 4587
	/* end block 4 */
	// End Line: 4588

	/* begin block 5 */
		// Start line: 4588
	/* end block 5 */
	// End Line: 4589

	/* begin block 6 */
		// Start line: 4588
	/* end block 6 */
	// End Line: 4589

	/* begin block 7 */
		// Start line: 4590
	/* end block 7 */
	// End Line: 4591

void * TransitionIsFinished__17tUserNameMenuItem(tUserNameMenuItem *this)

{
  short sVar1;
  
  sVar1 = *(short *)(this->fRowList + 0x56);
  *(undefined4 *)&this->fPlayer = 0;
  if (((sVar1 < 0) && (0 < *(short *)(this->fRowList + 0x54))) ||
     ((0 < *(short *)(this->fRowList + 0x56) &&
      ((*(short *)(this->fRowList + 0x54) < 0x80 || (ginfo._16_2_ != 0)))))) {
    *(undefined4 *)&this->fPlayer = 1;
  }
  return (void *)(*(uint *)&this->fPlayer ^ 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__17tUserNameMenuItemb(struct tUserNameMenuItem *this /*$s0*/, void * selected /*$s1*/)
 // line 2032, offset 0x80020820
	/* begin block 1 */
		// Start line: 2033
		// Start offset: 0x80020820
	/* end block 1 */
	// End offset: 0x80020860
	// End Line: 2037

	/* begin block 2 */
		// Start line: 4611
	/* end block 2 */
	// End Line: 4612

	/* begin block 3 */
		// Start line: 4615
	/* end block 3 */
	// End Line: 4616

	/* begin block 4 */
		// Start line: 4615
	/* end block 4 */
	// End Line: 4616

void UpdateTransition__17tUserNameMenuItemb(tUserNameMenuItem *this,void *selected)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(this->fRowList + 0x54) + (int)*(short *)(this->fRowList + 0x56);
  if (0x80 < iVar2) {
    iVar2 = 0x80;
  }
  uVar1 = (undefined2)iVar2;
  if (iVar2 < 0) {
    uVar1 = 0;
  }
  iVar2 = *(int *)(this->tMenuItem)._vf;
  *(undefined2 *)(this->fRowList + 0x54) = uVar1;
  (**(code **)(iVar2 + 0x4c))((int)&(this->tMenuItem).fFlags + (int)*(short *)(iVar2 + 0x48));
  UpdateTransition__9tMenuItemb((tMenuItem *)this,selected);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__19tMemoryCardMenuItemb(struct tMemoryCardMenuItem *this /*$s2*/)
 // line 2048, offset 0x8002089c
	/* begin block 1 */
		// Start line: 2049
		// Start offset: 0x8002089C
		// Variables:
	// 		int fEnableFade; // $s0
	// 		int fEnableSlide; // $s3
	// 		int x; // $s4
	// 		int y; // $s6
	// 		int ColText; // $s1
	// 		int Col; // $s0
	// 		struct tDrawShapeExtended tCol; // stack offset -56
	// 		int fWidth; // $s0
	// 		struct tTexture_ShapeInfo *shape; // $s1

		/* begin block 1.1 */
			// Start line: 2049
			// Start offset: 0x8002089C

			/* begin block 1.1.1 */
				// Start line: 2049
				// Start offset: 0x8002089C
				// Variables:
			// 		struct tMenuItem *this; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 2049
					// Start offset: 0x8002089C
				/* end block 1.1.1.1 */
				// End offset: 0x8002089C
				// End Line: 2049
			/* end block 1.1.1 */
			// End offset: 0x8002089C
			// End Line: 2049
		/* end block 1.1 */
		// End offset: 0x800208F4
		// End Line: 2050
	/* end block 1 */
	// End offset: 0x80020ACC
	// End Line: 2082

	/* begin block 2 */
		// Start line: 4640
	/* end block 2 */
	// End Line: 4641

	/* begin block 3 */
		// Start line: 4650
	/* end block 3 */
	// End Line: 4651

	/* begin block 4 */
		// Start line: 4650
	/* end block 4 */
	// End Line: 4651

/* WARNING: Type propagation algorithm not settling */

void Draw__19tMemoryCardMenuItemb(tMemoryCardMenuItem *this)

{
  tTexture_ShapeInfo *ptVar1;
  short sVar2;
  int iVar3;
  int col1;
  int col1_00;
  char *sMenuText;
  short sVar4;
  int x;
  int col;
  int iVar5;
  
  if (((this->tMenuItemGoToMenuButtonFade).tMenuItemGoToMenuButton.tMenuItemInteractive.tMenuItem.
       fFlags & 1) == 0) {
    sVar2 = (this->tMenuItemGoToMenuButtonFade).fFadeVal + 8;
  }
  else {
    sVar2 = (this->tMenuItemGoToMenuButtonFade).fFadeVal + -8;
  }
  (this->tMenuItemGoToMenuButtonFade).fFadeVal = sVar2;
  sVar2 = (this->tMenuItemGoToMenuButtonFade).fFadeVal;
  sVar4 = (this->tMenuItemGoToMenuButtonFade).fFadeVal;
  if ((sVar2 < 0x100) && (sVar2 < 1)) {
    sVar4 = 0;
  }
  else {
    if (0x100 < sVar2) {
      sVar4 = 0x100;
    }
  }
  (this->tMenuItemGoToMenuButtonFade).fFadeVal = sVar4;
  x = (int)sVar4;
  col = x + -0x80;
  if (0x80 < col) {
    col = 0x80;
  }
  if (col < 0) {
    col = 0;
  }
  iVar5 = 0x80;
  if (((x < 0x80) && (iVar5 = 0, 0 < x)) && (iVar5 = x, x >= 0x80)) {
    iVar5 = 0x80;
  }
  if ((*(short *)((this->tMenuItemGoToMenuButtonFade).tMenuItemGoToMenuButton.tMenuItemInteractive.
                  tMenuItem._vf + 8) != 0x80) && ((this->tMenuItemGoToMenuButtonFade).fFadeVal != 0)
     ) {
    x = TextSys_WordX__Fi((this->tMenuItemGoToMenuButtonFade).tMenuItemGoToMenuButton.
                          tMenuItemInteractive.tMenuItem.fTextDescription);
    iVar3 = TextSys_WordY__Fi((this->tMenuItemGoToMenuButtonFade).tMenuItemGoToMenuButton.
                              tMenuItemInteractive.tMenuItem.fTextDescription);
    col1 = CalcTextFadeSelToHi__F13tMenuTextTypess
                     (textType_Options,
                      (this->tMenuItemGoToMenuButtonFade).tMenuItemGoToMenuButton.
                      tMenuItemInteractive.tMenuItem.fSelFade,
                      *(short *)((this->tMenuItemGoToMenuButtonFade).tMenuItemGoToMenuButton.
                                 tMenuItemInteractive.tMenuItem._vf + 8));
    col1_00 = CalcFadeVal__Fiiii(0xc83c1e,(int)&DAT_0000bebe,
                                 (int)(this->tMenuItemGoToMenuButtonFade).tMenuItemGoToMenuButton.
                                      tMenuItemInteractive.tMenuItem.fSelFade,
                                 (int)*(short *)((this->tMenuItemGoToMenuButtonFade).
                                                 tMenuItemGoToMenuButton.tMenuItemInteractive.
                                                 tMenuItem._vf + 8));
    CalcFadeVal__Fii(col1_00,0x80 - col);
    col = CalcFadeVal__Fii(col1,0x80 - col);
    if (col != 0) {
      sMenuText = TextSys_Word__Fi((this->tMenuItemGoToMenuButtonFade).tMenuItemGoToMenuButton.
                                   tMenuItemInteractive.tMenuItem.fTextDescription);
      FETextRender_FullTextRGB__FPcssics(sMenuText,(short)x,(short)iVar3,col,0,0);
    }
    ptVar1 = gHelpShapes;
    iVar5 = iVar5 * 0x96;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x7f;
    }
    col = (iVar5 >> 7) *
          (0x80 - (int)*(short *)((this->tMenuItemGoToMenuButtonFade).tMenuItemGoToMenuButton.
                                  tMenuItemInteractive.tMenuItem._vf + 8));
    if (col < 0) {
      col = col + 0x7f;
    }
    col = col >> 7;
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (0x1e,8,(x + col) - (int)*(short *)&gHelpShapes[0x1b].clutID,iVar3 + -3,0,0,
               (tDrawShapeExtended *)0x0);
    iVar5 = (int)*(short *)&ptVar1[0x1b].clutID;
    if (iVar5 < col) {
      PSXDrawSquare__Fiiiii
                (0,x,iVar3 + -3,col - iVar5,(int)*(short *)((int)&ptVar1[0x1b].clutID + 2));
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__35tInsideBoxControllerLeftRightSlider7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tInsideBoxControllerLeftRightSlider *this /*$s0*/, enum tPlayer fromPlayer /*$s2*/, enum tInputKeyType *keyval /*$s1*/, struct tMenuCommand *command /*$s3*/)
 // line 2088, offset 0x80020af4
	/* begin block 1 */
		// Start line: 2089
		// Start offset: 0x80020AF4

		/* begin block 1.1 */
			// Start line: 2089
			// Start offset: 0x80020AF4

			/* begin block 1.1.1 */
				// Start line: 2091
				// Start offset: 0x80020B34

				/* begin block 1.1.1.1 */
					// Start line: 2092
					// Start offset: 0x80020B34

					/* begin block 1.1.1.1.1 */
						// Start line: 2092
						// Start offset: 0x80020B40
						// Variables:
					// 		struct tListIterator *this; // $v1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2092
							// Start offset: 0x80020B40
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80020B40
						// End Line: 2092
					/* end block 1.1.1.1.1 */
					// End offset: 0x80020B40
					// End Line: 2092

					/* begin block 1.1.1.1.2 */
						// Start line: 2093
						// Start offset: 0x80020B7C

						/* begin block 1.1.1.1.2.1 */
							// Start line: 2093
							// Start offset: 0x80020B7C
							// Variables:
						// 		struct tScreenControllerConfig *this; // $v1

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 2093
								// Start offset: 0x80020B7C
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x80020B88
							// End Line: 2093
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x80020B88
						// End Line: 2093
					/* end block 1.1.1.1.2 */
					// End offset: 0x80020B88
					// End Line: 2093
				/* end block 1.1.1.1 */
				// End offset: 0x80020B88
				// End Line: 2093
			/* end block 1.1.1 */
			// End offset: 0x80020B88
			// End Line: 2093
		/* end block 1.1 */
		// End offset: 0x80020B88
		// End Line: 2093
	/* end block 1 */
	// End offset: 0x80020B88
	// End Line: 2095

	/* begin block 2 */
		// Start line: 4733
	/* end block 2 */
	// End Line: 4734

	/* begin block 3 */
		// Start line: 4736
	/* end block 3 */
	// End Line: 4737

	/* begin block 4 */
		// Start line: 4736
	/* end block 4 */
	// End Line: 4737

/* WARNING: Type propagation algorithm not settling */

void ProcessInput__35tInsideBoxControllerLeftRightSlider7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tInsideBoxControllerLeftRightSlider *this,tPlayer fromPlayer,tInputKeyType *keyval,
               tMenuCommand *command)

{
  int iVar1;
  uint uVar2;
  tInputKeyType tVar3;
  int iVar4;
  
  tVar3 = *keyval;
  if (((tVar3 == kInput_KeyType_Left) || (tVar3 == kInput_KeyType_Right)) &&
     ((tVar3 != kInput_KeyType_Right ||
      (iVar4 = *(int *)((this->tInsideBoxLeftRightSlider).tMenuItemLeftRightSlider.
                        tMenuItemInteractive.tMenuItem._vf + 4), iVar1 = *(int *)(iVar4 + 0xc),
      uVar2 = (**(code **)(iVar1 + 0x14))(iVar4 + (int)*(short *)(iVar1 + 0x10),0xffffffff),
      (uVar2 & 0xff) !=
      (uint)*(byte *)(*(int *)((this->tInsideBoxLeftRightSlider).tMenuItemLeftRightSlider.
                               tMenuItemInteractive.tMenuItem._vf + 4) + 9))))) {
    *(undefined **)&screenControllerConfig->fPlayedInSound = &DAT_00000001;
  }
  ProcessInput__24tMenuItemLeftRightSlider7tPlayerR13tInputKeyTypeR12tMenuCommand
            ((tMenuItemLeftRightSlider *)this,fromPlayer,keyval);
  return;
}





