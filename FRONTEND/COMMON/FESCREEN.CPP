#include "THISDUST.H"
#include "FESCREEN.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DisplayLoadingText__7tScreen()
 // line 36, offset 0x80025ab8
	/* begin block 1 */
		// Start line: 37
		// Start offset: 0x80025AB8
		// Variables:
	// 		int oldIsBg; // $s2
	// 		short i; // $s0
	/* end block 1 */
	// End offset: 0x80025BE0
	// End Line: 67

	/* begin block 2 */
		// Start line: 72
	/* end block 2 */
	// End Line: 73

	/* begin block 3 */
		// Start line: 72
	/* end block 3 */
	// End Line: 73

	/* begin block 4 */
		// Start line: 73
	/* end block 4 */
	// End Line: 74

	/* begin block 5 */
		// Start line: 73
	/* end block 5 */
	// End Line: 74

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DisplayLoadingText__7tScreen(void)

{
  uchar uVar1;
  char *string;
  int iVar2;
  int iVar3;
  
  iVar2 = Draw_gPlayer1View;
  if (fSuppressLoadingText == 0) {
    iVar3 = 0;
    uVar1 = Draw_gView[Draw_gPlayer1View].drawenv[0].isbg;
    Draw_gView[Draw_gPlayer1View].drawenv[1].isbg = '\0';
    Draw_gView[iVar2].drawenv[0].isbg = '\0';
    do {
      Draw_StartFrameRender__Fv();
      Draw_StartRenderingView__Fi(Draw_gPlayer1View);
      FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
                (0x27d,0x1e0,0xdc,1,textState_Selected,textType_ScreenInfo);
      string = TextSys_Word__Fi(0x27d);
      iVar2 = textpixels(string);
      PSXDrawSquare__Fiiiii(0,0x1e0,0xdc,-5 - iVar2,7);
      Draw_StopRenderingView__Fi(Draw_gPlayer1View);
      Draw_StopFrameRender__Fv();
      iVar2 = Draw_gPlayer1View;
      iVar3 = iVar3 + 1;
    } while (iVar3 * 0x10000 >> 0x10 < 2);
    Draw_gView[Draw_gPlayer1View].drawenv[1].isbg = uVar1;
    Draw_gView[iVar2].drawenv[0].isbg = uVar1;
  }
  else {
    fSuppressLoadingText = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GoNonInterlaced__7tScreen()
 // line 144, offset 0x80025bf8
	/* begin block 1 */
		// Start line: 145
		// Start offset: 0x80025BF8
	/* end block 1 */
	// End offset: 0x80025BF8
	// End Line: 145

	/* begin block 2 */
		// Start line: 218
	/* end block 2 */
	// End Line: 219

	/* begin block 3 */
		// Start line: 295
	/* end block 3 */
	// End Line: 296

	/* begin block 4 */
		// Start line: 295
	/* end block 4 */
	// End Line: 296

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GoNonInterlaced__7tScreen(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Draw_gPlayer1View;
  screenheight = (uchar *)0xf0;
  gEnviro.disp.isinter = '\0';
  dflip_8011f43c.disp.isinter = '\0';
  gEnviro.disp.disp.y = 0x100;
  dflip_8011f43c.disp.disp.y = 0;
  gEnviro.disp.disp.h = 0xf0;
  gEnviro.disp.screen.h = 0xf0;
  dflip_8011f43c.disp.screen.h = 0xf0;
  Draw_gView[Draw_gPlayer1View].drawenv[0].dfe = '\0';
  iVar2 = Draw_gPlayer1View;
  Draw_gView[iVar1].drawenv[0].clip.y = 0;
  Draw_gView[iVar1].drawenv[0].clip.h = 0xf0;
  Draw_gView[iVar1].drawenv[0].ofs[0] = 0;
  Draw_gView[iVar1].drawenv[0].ofs[1] = 0;
  Draw_gView[iVar2].drawenv[1].clip.y = 0x100;
  Draw_gView[iVar2].drawenv[1].ofs[0] = 0;
  Draw_gView[iVar2].drawenv[1].ofs[1] = 0x100;
  Draw_gView[iVar2].drawenv[1].dfe = '\0';
  Draw_gView[iVar2].drawenv[1].clip.h = (short)screenheight;
  DrawSync(0);
  VSync(0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackgroundImage__7tScreeniiP18tTexture_ShapeInfoi(struct tScreen *this /*$s2*/, int startShape /*$s3*/, int numShapes /*$s4*/, struct tTexture_ShapeInfo *shapes /*$a3*/, int flip_axis /*stack 16*/)
 // line 185, offset 0x80025cc8
	/* begin block 1 */
		// Start line: 186
		// Start offset: 0x80025CC8
		// Variables:
	// 		struct tDrawShapeExtended drawFlags; // stack offset -56
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80025D74
	// End Line: 198

	/* begin block 2 */
		// Start line: 415
	/* end block 2 */
	// End Line: 416

	/* begin block 3 */
		// Start line: 427
	/* end block 3 */
	// End Line: 428

	/* begin block 4 */
		// Start line: 427
	/* end block 4 */
	// End Line: 428

void DrawBackgroundImage__7tScreeniiP18tTexture_ShapeInfoi
               (tScreen *this,int startShape,int numShapes,tTexture_ShapeInfo *shapes,int flip_axis)

{
  int index;
  tDrawShapeExtended local_38;
  
  local_38.flip_axis = (short)flip_axis;
  if (startShape < startShape + numShapes) {
    index = startShape;
    local_38.custom_shapes = shapes;
    do {
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (index,0x200,0,0,(int)this->fScreenFadeVal,0,&local_38);
      if (0 < flip_axis) {
        DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                  (index,0x260,0,0,(int)this->fScreenFadeVal,0,&local_38);
      }
      index = index + 1;
    } while (index < startShape + numShapes);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AsyncLoadPermanentShapeFile__7tScreenPc(struct tScreen *this /*$a0*/, char *fileName /*$a1*/)
 // line 201, offset 0x80025d98
	/* begin block 1 */
		// Start line: 202
		// Start offset: 0x80025D98
	/* end block 1 */
	// End offset: 0x80025D98
	// End Line: 202

	/* begin block 2 */
		// Start line: 469
	/* end block 2 */
	// End Line: 470

	/* begin block 3 */
		// Start line: 473
	/* end block 3 */
	// End Line: 474

	/* begin block 4 */
		// Start line: 473
	/* end block 4 */
	// End Line: 474

void AsyncLoadPermanentShapeFile__7tScreenPc(tScreen *this,char *fileName)

{
  AsyncLoadShapeFile__7tScreenPcR17tShapeInformation(this,fileName,(tShapeInformation *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AsyncLoadSwapShapeFile__7tScreenPc(struct tScreen *this /*$s0*/, char *fileName /*$a2*/)
 // line 206, offset 0x80025db8
	/* begin block 1 */
		// Start line: 207
		// Start offset: 0x80025DB8
		// Variables:
	// 		char buffer[32]; // stack offset -40
	/* end block 1 */
	// End offset: 0x80025DFC
	// End Line: 215

	/* begin block 2 */
		// Start line: 479
	/* end block 2 */
	// End Line: 480

	/* begin block 3 */
		// Start line: 483
	/* end block 3 */
	// End Line: 484

	/* begin block 4 */
		// Start line: 483
	/* end block 4 */
	// End Line: 484

void AsyncLoadSwapShapeFile__7tScreenPc(tScreen *this,char *fileName)

{
  char *name;
  char acStack40 [32];
  
  if (fileName == (char *)0x0) {
    name = (char *)0x0;
  }
  else {
    sprintf(acStack40,(char *)&PTR_DAT_800113f8);
    name = acStack40;
  }
  AsyncLoadShapeFile__7tScreenPcR17tShapeInformation(this,name,&this->fSwapShapes);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsShapeFileLoaded__7tScreenR17tShapeInformation(struct tScreen *this /*$s2*/, struct tShapeInformation *shapes /*$s0*/)
 // line 218, offset 0x80025e0c
	/* begin block 1 */
		// Start line: 219
		// Start offset: 0x80025E0C
		// Variables:
	// 		void * result; // $s1
	// 		int async_status; // $v1
	// 		char *bogus; // $v0
	/* end block 1 */
	// End offset: 0x80025F68
	// End Line: 271

	/* begin block 2 */
		// Start line: 503
	/* end block 2 */
	// End Line: 504

	/* begin block 3 */
		// Start line: 507
	/* end block 3 */
	// End Line: 508

	/* begin block 4 */
		// Start line: 507
	/* end block 4 */
	// End Line: 508

void * IsShapeFileLoaded__7tScreenR17tShapeInformation(tScreen *this,tShapeInformation *shapes)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar3;
  
  if (shapes->async_handle == 0) {
    puVar3 = &DAT_00000001;
    if (shapes->fLoadCancelled != (void *)0x0) {
      if (shapes->fFile != (char *)0x0) {
        if (shapes->fDestFile == (char *)0x0) {
          purgememadr((int)shapes->fFile);
        }
        shapes->fFile = (char *)0x0;
      }
      shapes->fLoadCancelled = (void *)0x0;
      AsyncLoadShapeFile__7tScreenPcR17tShapeInformation(this,shapes->fFilename,shapes);
      IsShapeFileLoaded__7tScreenR17tShapeInformation(this,shapes);
      puVar3 = (undefined *)0x0;
    }
  }
  else {
    uVar1 = getasyncreadstatus(shapes->async_handle);
    if ((int)uVar1 < 1) {
      if (uVar1 == 0xffffffff) {
        uVar1 = getasyncreadadr(shapes->async_handle);
        if (uVar1 != 0) {
          purgememadr(uVar1);
        }
        AsyncLoadShapeFile__7tScreenPcR17tShapeInformation(this,shapes->fFilename,shapes);
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = (undefined *)0x0;
        if (uVar1 == 0xfffffffe) {
          AsyncLoadShapeFile__7tScreenPcR17tShapeInformation(this,shapes->fFilename,shapes);
          puVar3 = (undefined *)0x0;
        }
      }
    }
    else {
      pcVar2 = shapes->fDestFile;
      if (pcVar2 == (char *)0x0) {
        pcVar2 = (char *)getasyncreadadr(shapes->async_handle);
      }
      shapes->fFile = pcVar2;
      shapes->async_handle = 0;
      puVar3 = &DAT_00000001;
      if ((shapes->fFile != (char *)0x0) &&
         (puVar3 = &DAT_00000001, shapes->fLoadCancelled != (void *)0x0)) {
        if (shapes->fDestFile == (char *)0x0) {
          purgememadr((int)shapes->fFile);
        }
        shapes->fFile = (char *)0x0;
        puVar3 = &DAT_00000001;
      }
    }
  }
  return puVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UploadPermanentShapes__7tScreeni(struct tScreen *this /*$s0*/, int numPermanentShapes /*$a1*/)
 // line 284, offset 0x80025f84
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x80025F84
	/* end block 1 */
	// End offset: 0x80025F84
	// End Line: 285

	/* begin block 2 */
		// Start line: 564
	/* end block 2 */
	// End Line: 565

	/* begin block 3 */
		// Start line: 629
	/* end block 3 */
	// End Line: 630

	/* begin block 4 */
		// Start line: 629
	/* end block 4 */
	// End Line: 630

void UploadPermanentShapes__7tScreeni(tScreen *this,int numPermanentShapes)

{
  UploadShapes__7tScreenR17tShapeInformationssss
            (this,(tShapeInformation *)this,0,0,(int)(short)numPermanentShapes,0);
  gCurrentShapes = (this->fPermShapes).fShapes;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UploadSwapShapes__7tScreeni(struct tScreen *this /*$a0*/, int numSwapShapes /*$a1*/)
 // line 290, offset 0x80025fd0
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x80025FD0
	/* end block 1 */
	// End offset: 0x80025FD0
	// End Line: 291

	/* begin block 2 */
		// Start line: 638
	/* end block 2 */
	// End Line: 639

	/* begin block 3 */
		// Start line: 642
	/* end block 3 */
	// End Line: 643

	/* begin block 4 */
		// Start line: 642
	/* end block 4 */
	// End Line: 643

void UploadSwapShapes__7tScreeni(tScreen *this,int numSwapShapes)

{
  UploadShapes__7tScreenR17tShapeInformationssss
            (this,&this->fSwapShapes,0,0,(int)(short)numSwapShapes,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__7tScreenRsT1PPcT3(struct tScreen *this /*$a0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$a3*/, char **swapFileName /*stack 16*/)
 // line 321, offset 0x80026008
	/* begin block 1 */
		// Start line: 322
		// Start offset: 0x80026008
	/* end block 1 */
	// End offset: 0x80026008
	// End Line: 322

	/* begin block 2 */
		// Start line: 634
	/* end block 2 */
	// End Line: 635

	/* begin block 3 */
		// Start line: 685
	/* end block 3 */
	// End Line: 686

	/* begin block 4 */
		// Start line: 685
	/* end block 4 */
	// End Line: 686

void GetShapeInfo__7tScreenRsT1PPcT3
               (tScreen *this,short *numPermShapes,short *numSwapShapes,char **permFileName,
               char **swapFileName)

{
  *numSwapShapes = 0;
  *numPermShapes = 0;
  *swapFileName = (char *)0x0;
  *permFileName = (char *)0x0;
  return;
}



// decompiled code
// original method signature: 
// struct tScreen * /*$ra*/ __7tScreen(struct tScreen *this /*$s0*/)
 // line 332, offset 0x80026020
	/* begin block 1 */
		// Start line: 333
		// Start offset: 0x80026020
	/* end block 1 */
	// End offset: 0x80026020
	// End Line: 333

	/* begin block 2 */
		// Start line: 701
	/* end block 2 */
	// End Line: 702

	/* begin block 3 */
		// Start line: 707
	/* end block 3 */
	// End Line: 708

	/* begin block 4 */
		// Start line: 707
	/* end block 4 */
	// End Line: 708

tScreen * __7tScreen(tScreen *this)

{
  *(undefined4 *)(this->_vf + 2) = 0x80011418;
  (this->fPermShapes).fShapes = (tTexture_ShapeInfo *)0x0;
  InitializeShapes__7tScreenR17tShapeInformationUi(this,(tShapeInformation *)this,0);
  (this->fSwapShapes).fShapes = (tTexture_ShapeInfo *)0x0;
  InitializeShapes__7tScreenR17tShapeInformationUi(this,&this->fSwapShapes,0);
  this->fScreenFadeVal = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._7tScreen(struct tScreen *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 341, offset 0x80026078
	/* begin block 1 */
		// Start line: 342
		// Start offset: 0x80026078
	/* end block 1 */
	// End offset: 0x80026078
	// End Line: 342

	/* begin block 2 */
		// Start line: 723
	/* end block 2 */
	// End Line: 724

	/* begin block 3 */
		// Start line: 727
	/* end block 3 */
	// End Line: 728

	/* begin block 4 */
		// Start line: 727
	/* end block 4 */
	// End Line: 728

void ___7tScreen(tScreen *this,int __in_chrg)

{
  *(undefined4 *)(this->_vf + 2) = 0x80011418;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__7tScreen(struct tScreen *this /*$s1*/)
 // line 345, offset 0x800260ac
	/* begin block 1 */
		// Start line: 346
		// Start offset: 0x800260AC
		// Variables:
	// 		short numPermShapes; // stack offset -32
	// 		short numSwapShapes; // stack offset -30
	// 		char *permFileName; // stack offset -28
	// 		char *swapFileName; // stack offset -24
	// 		void * shapesLoaded; // $s0
	/* end block 1 */
	// End offset: 0x80026178
	// End Line: 372

	/* begin block 2 */
		// Start line: 731
	/* end block 2 */
	// End Line: 732

	/* begin block 3 */
		// Start line: 735
	/* end block 3 */
	// End Line: 736

	/* begin block 4 */
		// Start line: 735
	/* end block 4 */
	// End Line: 736

void Initialize__7tScreen(tScreen *this)

{
  bool bVar1;
  void *pvVar2;
  ushort local_20;
  ushort local_1e;
  undefined auStack28 [4];
  undefined auStack24 [8];
  
  DisplayLoadingText__7tScreen();
  (**(code **)(*(int *)(this->_vf + 2) + 0x2c))
            ((int)&(this->fPermShapes).fShapes + (int)*(short *)(*(int *)(this->_vf + 2) + 0x28));
  (**(code **)(*(int *)(this->_vf + 2) + 0xc))
            ((int)&(this->fPermShapes).fShapes + (int)*(short *)(*(int *)(this->_vf + 2) + 8),
             &local_20,&local_1e,auStack28,auStack24);
  do {
    FeAudio_systemtask__Fi(0);
    pvVar2 = IsShapeFileLoaded__7tScreenR17tShapeInformation(this,(tShapeInformation *)this);
    if ((this->fPermShapes).fFile != (char *)0x0) {
      UploadPermanentShapes__7tScreeni(this,(int)(short)local_20);
    }
    bVar1 = false;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = IsShapeFileLoaded__7tScreenR17tShapeInformation(this,&this->fSwapShapes);
      bVar1 = pvVar2 != (void *)0x0;
    }
    if ((this->fSwapShapes).fFile != (char *)0x0) {
      UploadSwapShapes__7tScreeni(this,(int)(short)local_1e);
    }
  } while (!bVar1);
  (this->fPermShapes).fNumShapes = local_20;
  (this->fSwapShapes).fNumShapes = local_1e;
  GoNonInterlaced__7tScreen();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__7tScreen(struct tScreen *this /*$s0*/)
 // line 385, offset 0x800261a0
	/* begin block 1 */
		// Start line: 386
		// Start offset: 0x800261A0
	/* end block 1 */
	// End offset: 0x800261A0
	// End Line: 386

	/* begin block 2 */
		// Start line: 808
	/* end block 2 */
	// End Line: 809

	/* begin block 3 */
		// Start line: 816
	/* end block 3 */
	// End Line: 817

	/* begin block 4 */
		// Start line: 816
	/* end block 4 */
	// End Line: 817

void Cleanup__7tScreen(tScreen *this)

{
  AsyncLoadPermanentShapeFile__7tScreenPc(this,(char *)0x0);
  AsyncLoadSwapShapeFile__7tScreenPc(this,(char *)0x0);
  FreeShapes__7tScreenR17tShapeInformation(this,(tShapeInformation *)this);
  FreeShapes__7tScreenR17tShapeInformation(this,&this->fSwapShapes);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__7tScreenb(struct tScreen *this /*$v1*/, void * drawBackground /*$a1*/)
 // line 397, offset 0x800261ec
	/* begin block 1 */
		// Start line: 398
		// Start offset: 0x800261EC
	/* end block 1 */
	// End offset: 0x80026230
	// End Line: 402

	/* begin block 2 */
		// Start line: 835
	/* end block 2 */
	// End Line: 836

	/* begin block 3 */
		// Start line: 840
	/* end block 3 */
	// End Line: 841

	/* begin block 4 */
		// Start line: 840
	/* end block 4 */
	// End Line: 841

void Draw__7tScreenb(tScreen *this,void *drawBackground)

{
  short sVar1;
  code *pcVar2;
  
  if (drawBackground == (void *)0x0) {
    sVar1 = *(short *)(*(int *)(this->_vf + 2) + 0x18);
    pcVar2 = *(code **)(*(int *)(this->_vf + 2) + 0x1c);
  }
  else {
    sVar1 = *(short *)(*(int *)(this->_vf + 2) + 0x10);
    pcVar2 = *(code **)(*(int *)(this->_vf + 2) + 0x14);
  }
  (*pcVar2)((int)&(this->fPermShapes).fShapes + (int)sVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AsyncLoadShapeFile__7tScreenPcR17tShapeInformation(struct tScreen *this /*$s2*/, char *name /*$s1*/, struct tShapeInformation *data /*$s0*/)
 // line 409, offset 0x80026240
	/* begin block 1 */
		// Start line: 410
		// Start offset: 0x80026240
		// Variables:
	// 		char buffer[128]; // stack offset -144
	/* end block 1 */
	// End offset: 0x8002633C
	// End Line: 452

	/* begin block 2 */
		// Start line: 856
	/* end block 2 */
	// End Line: 857

	/* begin block 3 */
		// Start line: 864
	/* end block 3 */
	// End Line: 865

	/* begin block 4 */
		// Start line: 864
	/* end block 4 */
	// End Line: 865

void AsyncLoadShapeFile__7tScreenPcR17tShapeInformation
               (tScreen *this,char *name,tShapeInformation *data)

{
  uint uVar1;
  char acStack144 [128];
  
  if ((name == (char *)0x0) && (data->async_handle != 0)) {
    cancelasyncload(data->async_handle);
    data->async_handle = 0;
  }
  CancelAsyncLoad__7tScreenR17tShapeInformation(this,data);
  if (data->fFile != (char *)0x0) {
    if (data->fDestFile == (char *)0x0) {
      purgememadr((int)data->fFile);
    }
    data->fFile = (char *)0x0;
  }
  data->fFlags = data->fFlags & 0xfffe;
  if (name != (char *)0x0) {
    sprintf(data->fFilename,(char *)&PTR_DAT_800113fc,name);
    sprintf(acStack144,s__s_s_psh_80011400,PTR_801164e8,name);
    if (data->fLoadCancelled == (void *)0x0) {
      data->fLoadCancelled = (void *)0x0;
      if (data->fDestFile == (char *)0x0) {
        uVar1 = asyncloadfile(acStack144,0x10);
        data->async_handle = uVar1;
      }
      else {
        uVar1 = asyncloadfileat(acStack144,(uint)data->fDestFile);
        data->async_handle = uVar1;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CancelAsyncLoad__7tScreenR17tShapeInformation(struct tScreen *this /*$a0*/, struct tShapeInformation *data /*$s0*/)
 // line 459, offset 0x80026354
	/* begin block 1 */
		// Start line: 460
		// Start offset: 0x80026354
	/* end block 1 */
	// End offset: 0x800263DC
	// End Line: 480

	/* begin block 2 */
		// Start line: 956
	/* end block 2 */
	// End Line: 957

	/* begin block 3 */
		// Start line: 964
	/* end block 3 */
	// End Line: 965

	/* begin block 4 */
		// Start line: 964
	/* end block 4 */
	// End Line: 965

void CancelAsyncLoad__7tScreenR17tShapeInformation(tScreen *this,tShapeInformation *data)

{
  uint uVar1;
  char *pcVar2;
  
  if (data->async_handle != 0) {
    uVar1 = getasyncreadstatus(data->async_handle);
    if (uVar1 == 0) {
      *(undefined **)&data->fLoadCancelled = &DAT_00000001;
    }
    else {
      if (data->fDestFile == (char *)0x0) {
        pcVar2 = (char *)getasyncreadadr(data->async_handle);
        data->fFile = pcVar2;
      }
      if (data->fFile != (char *)0x0) {
        if (data->fDestFile == (char *)0x0) {
          purgememadr((int)data->fFile);
        }
        data->fFile = (char *)0x0;
      }
      data->async_handle = 0;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitializeShapes__7tScreenR17tShapeInformationUi(struct tScreen *this /*$a0*/, struct tShapeInformation *data /*$s0*/, unsigned int numShapes /*$s1*/)
 // line 485, offset 0x800263ec
	/* begin block 1 */
		// Start line: 486
		// Start offset: 0x800263EC
		// Variables:
	// 		unsigned short i; // $a0
	/* end block 1 */
	// End offset: 0x80026480
	// End Line: 510

	/* begin block 2 */
		// Start line: 1010
	/* end block 2 */
	// End Line: 1011

	/* begin block 3 */
		// Start line: 1016
	/* end block 3 */
	// End Line: 1017

	/* begin block 4 */
		// Start line: 1016
	/* end block 4 */
	// End Line: 1017

void InitializeShapes__7tScreenR17tShapeInformationUi
               (tScreen *this,tShapeInformation *data,uint numShapes)

{
  tTexture_ShapeInfo *ptVar1;
  uint uVar2;
  uint uVar3;
  
  if (data->fShapes != (tTexture_ShapeInfo *)0x0) {
    purgememadr((int)data->fShapes);
    data->fShapes = (tTexture_ShapeInfo *)0x0;
  }
  data->fFlags = 0;
  data->fNumShapes = (ushort)numShapes;
  data->async_handle = 0;
  data->fFile = (char *)0x0;
  data->fDestFile = (char *)0x0;
  data->fLoadCancelled = (void *)0x0;
  if (numShapes != 0) {
    ptVar1 = (tTexture_ShapeInfo *)reservememadr(s_Shapes_8001140c,numShapes << 5,0);
    data->fShapes = ptVar1;
    uVar3 = 0;
    if (numShapes != 0) {
      uVar2 = 0;
      do {
        uVar3 = uVar3 + 1;
        (&data->fShapes->clutID)[uVar2 * 8] = 0;
        uVar2 = uVar3 & 0xffff;
      } while ((uVar3 & 0xffff) < numShapes);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FreeShapes__7tScreenR17tShapeInformation(struct tScreen *this /*$a0*/, struct tShapeInformation *data /*$s0*/)
 // line 514, offset 0x80026494
	/* begin block 1 */
		// Start line: 515
		// Start offset: 0x80026494
		// Variables:
	// 		short i; // $s1
	// 		int async_status; // $v0
	/* end block 1 */
	// End offset: 0x800265DC
	// End Line: 556

	/* begin block 2 */
		// Start line: 1069
	/* end block 2 */
	// End Line: 1070

	/* begin block 3 */
		// Start line: 1074
	/* end block 3 */
	// End Line: 1075

	/* begin block 4 */
		// Start line: 1074
	/* end block 4 */
	// End Line: 1075

void FreeShapes__7tScreenR17tShapeInformation(tScreen *this,tShapeInformation *data)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  CancelAsyncLoad__7tScreenR17tShapeInformation(this,data);
  uVar1 = data->async_handle;
  do {
    if (uVar1 == 0) {
      if (data->fFile != (char *)0x0) {
        if (data->fDestFile == (char *)0x0) {
          purgememadr((int)data->fFile);
        }
        data->fFile = (char *)0x0;
      }
      if (data->fShapes != (tTexture_ShapeInfo *)0x0) {
        iVar4 = 0;
        if (data->fNumShapes != 0) {
          iVar3 = 0;
          do {
            iVar3 = (int)&data->fShapes->shpptr + (iVar3 >> 0xb);
            if (*(int *)(iVar3 + 4) != 0) {
              Texture_MenuReleaseClutId__Fs(*(short *)(iVar3 + 4));
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar4 * 0x10000;
          } while (iVar4 * 0x10000 >> 0x10 < (int)(uint)data->fNumShapes);
        }
        purgememadr((int)data->fShapes);
        data->fShapes = (tTexture_ShapeInfo *)0x0;
      }
      return;
    }
    uVar1 = getasyncreadstatus(data->async_handle);
    if (((int)uVar1 < 1) && (uVar1 != 0xffffffff)) {
      if (uVar1 == 0xfffffffe) goto LAB_80026518;
    }
    else {
      if (data->fDestFile == (char *)0x0) {
        pcVar2 = (char *)getasyncreadadr(data->async_handle);
        data->fFile = pcVar2;
      }
      else {
        data->fFile = (char *)0x0;
      }
LAB_80026518:
      data->async_handle = 0;
    }
    FeAudio_systemtask__Fi(0);
    uVar1 = data->async_handle;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ UploadShapes__7tScreenR17tShapeInformationssss(struct tScreen *this /*$a0*/, struct tShapeInformation *data /*$s2*/, short x /*$fp*/, short y /*$s7*/, int numShapes /*stack 16*/, int index /*stack 20*/)
 // line 559, offset 0x800265f4
	/* begin block 1 */
		// Start line: 560
		// Start offset: 0x800265F4
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x80026750
	// End Line: 597

	/* begin block 2 */
		// Start line: 1160
	/* end block 2 */
	// End Line: 1161

	/* begin block 3 */
		// Start line: 1164
	/* end block 3 */
	// End Line: 1165

	/* begin block 4 */
		// Start line: 1164
	/* end block 4 */
	// End Line: 1165

void UploadShapes__7tScreenR17tShapeInformationssss
               (tScreen *this,tShapeInformation *data,short x,short y,int numShapes,int index)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  shapetbl **ppsVar4;
  int index_00;
  
  uVar3 = (ushort)numShapes;
  if (data->fFile != (char *)0x0) {
    if ((numShapes & 0xffffU) == 0) {
      uVar3 = data->fNumShapes;
    }
    index_00 = 0;
    sVar1 = (short)index;
    if (0 < (int)(short)uVar3) {
      iVar2 = (int)sVar1;
      do {
        ppsVar4 = &data->fShapes->shpptr + iVar2 * 8;
        if (ppsVar4[1] != (shapetbl *)0x0) {
          Texture_MenuReleaseClutId__Fs(*(short *)(ppsVar4 + 1));
          (&data->fShapes->clutID)[iVar2 * 8] = 0;
        }
        index_00 = index_00 + 1;
        iVar2 = index_00 + (int)sVar1;
      } while (index_00 < (int)(short)uVar3);
    }
    data->fFlags = data->fFlags & 0xfffe;
    if (0 < (int)(short)uVar3) {
      index_00 = 0;
      do {
        iVar2 = index_00 + 1;
        FETexture_LoadPmxAtOffset__FPciP18tTexture_ShapeInfoii
                  (data->fFile,index_00,
                   (tTexture_ShapeInfo *)(&data->fShapes->shpptr + (index_00 + (int)sVar1) * 8),
                   (int)y,(int)x);
        index_00 = iVar2;
      } while (iVar2 < (int)(short)uVar3);
    }
    data->fFlags = data->fFlags | 1;
    if (data->fDestFile == (char *)0x0) {
      purgememadr((int)data->fFile);
    }
    data->fFile = (char *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PreLoad__7tScreen(struct tScreen *this /*$s0*/)
 // line 600, offset 0x80026780
	/* begin block 1 */
		// Start line: 601
		// Start offset: 0x80026780
		// Variables:
	// 		short numPermShapes; // stack offset -24
	// 		short numSwapShapes; // stack offset -22
	// 		char *permFileName; // stack offset -20
	// 		char *swapFileName; // stack offset -16
	/* end block 1 */
	// End offset: 0x80026780
	// End Line: 601

	/* begin block 2 */
		// Start line: 1250
	/* end block 2 */
	// End Line: 1251

	/* begin block 3 */
		// Start line: 1253
	/* end block 3 */
	// End Line: 1254

	/* begin block 4 */
		// Start line: 1253
	/* end block 4 */
	// End Line: 1254

void PreLoad__7tScreen(tScreen *this)

{
  short local_18;
  short local_16;
  char *local_14;
  char *local_10 [2];
  
  (**(code **)(*(int *)(this->_vf + 2) + 0xc))
            ((int)&(this->fPermShapes).fShapes + (int)*(short *)(*(int *)(this->_vf + 2) + 8),
             &local_18,&local_16,&local_14,local_10);
  InitializeShapes__7tScreenR17tShapeInformationUi(this,(tShapeInformation *)this,(int)local_18);
  InitializeShapes__7tScreenR17tShapeInformationUi(this,&this->fSwapShapes,(int)local_16);
  AsyncLoadPermanentShapeFile__7tScreenPc(this,local_14);
  AsyncLoadSwapShapeFile__7tScreenPc(this,local_10[0]);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOff__7tScreen22tScreen_TransitionTypeP5tMenu(struct tScreen *this /*$a0*/, enum tScreen_TransitionType type /*$a1*/)
 // line 621, offset 0x80026804
	/* begin block 1 */
		// Start line: 622
		// Start offset: 0x80026804

		/* begin block 1.1 */
			// Start line: 623
			// Start offset: 0x80026804

			/* begin block 1.1.1 */
				// Start line: 623
				// Start offset: 0x80026804
			/* end block 1.1.1 */
			// End offset: 0x80026804
			// End Line: 623
		/* end block 1.1 */
		// End offset: 0x80026804
		// End Line: 623
	/* end block 1 */
	// End offset: 0x80026804
	// End Line: 623

	/* begin block 2 */
		// Start line: 1292
	/* end block 2 */
	// End Line: 1293

	/* begin block 3 */
		// Start line: 1300
	/* end block 3 */
	// End Line: 1301

	/* begin block 4 */
		// Start line: 1300
	/* end block 4 */
	// End Line: 1301

	/* begin block 5 */
		// Start line: 1301
	/* end block 5 */
	// End Line: 1302

	/* begin block 6 */
		// Start line: 1301
	/* end block 6 */
	// End Line: 1302

void TransitionOff__7tScreen22tScreen_TransitionTypeP5tMenu
               (tScreen *this,tScreen_TransitionType type)

{
  uchar *puVar1;
  
  puVar1 = ticks;
  this->fScreenFadeVal = 0;
  this->fInternalScreenFadeVal = 0;
  *(undefined **)&this->fTransitionOff = &DAT_00000001;
  *(uchar **)&this->fTransitionTicks = puVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TransitionOn__7tScreen22tScreen_TransitionTypeP5tMenu(struct tScreen *this /*$a0*/, enum tScreen_TransitionType type /*$a1*/)
 // line 629, offset 0x80026824
	/* begin block 1 */
		// Start line: 630
		// Start offset: 0x80026824

		/* begin block 1.1 */
			// Start line: 631
			// Start offset: 0x80026824

			/* begin block 1.1.1 */
				// Start line: 631
				// Start offset: 0x80026824
			/* end block 1.1.1 */
			// End offset: 0x80026824
			// End Line: 631
		/* end block 1.1 */
		// End offset: 0x80026824
		// End Line: 631
	/* end block 1 */
	// End offset: 0x80026824
	// End Line: 631

	/* begin block 2 */
		// Start line: 1316
	/* end block 2 */
	// End Line: 1317

	/* begin block 3 */
		// Start line: 1316
	/* end block 3 */
	// End Line: 1317

	/* begin block 4 */
		// Start line: 1320
	/* end block 4 */
	// End Line: 1321

	/* begin block 5 */
		// Start line: 1320
	/* end block 5 */
	// End Line: 1321

	/* begin block 6 */
		// Start line: 1321
	/* end block 6 */
	// End Line: 1322

	/* begin block 7 */
		// Start line: 1321
	/* end block 7 */
	// End Line: 1322

void TransitionOn__7tScreen22tScreen_TransitionTypeP5tMenu
               (tScreen *this,tScreen_TransitionType type)

{
  uchar *puVar1;
  
  this->fScreenFadeVal = 0x80;
  puVar1 = ticks;
  this->fInternalScreenFadeVal = 0x80;
  this->fTransitionOff = (void *)0x0;
  *(uchar **)&this->fTransitionTicks = puVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTransition__7tScreen(struct tScreen *this /*$a0*/)
 // line 637, offset 0x80026848
	/* begin block 1 */
		// Start line: 638
		// Start offset: 0x80026848
	/* end block 1 */
	// End offset: 0x800268B8
	// End Line: 647

	/* begin block 2 */
		// Start line: 1333
	/* end block 2 */
	// End Line: 1334

	/* begin block 3 */
		// Start line: 1333
	/* end block 3 */
	// End Line: 1334

	/* begin block 4 */
		// Start line: 1337
	/* end block 4 */
	// End Line: 1338

	/* begin block 5 */
		// Start line: 1337
	/* end block 5 */
	// End Line: 1338

	/* begin block 6 */
		// Start line: 1338
	/* end block 6 */
	// End Line: 1339

	/* begin block 7 */
		// Start line: 1338
	/* end block 7 */
	// End Line: 1339

void UpdateTransition__7tScreen(tScreen *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = this->fInternalScreenFadeVal + 0xc;
  if (this->fTransitionOff == (void *)0x0) {
    iVar2 = this->fInternalScreenFadeVal + -0xc;
  }
  this->fInternalScreenFadeVal = iVar2;
  iVar3 = iVar2;
  if (iVar2 < -0x32) {
    iVar3 = -0x32;
  }
  if (0x96 < iVar2) {
    iVar3 = 0x96;
  }
  this->fInternalScreenFadeVal = iVar3;
  sVar1 = *(short *)&this->fInternalScreenFadeVal;
  this->fScreenFadeVal = sVar1;
  if (sVar1 < 0) {
    this->fScreenFadeVal = 0;
    return;
  }
  if (0x80 < sVar1) {
    this->fScreenFadeVal = 0x80;
  }
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ TransitionIsFinished__7tScreen(struct tScreen *this /*$a0*/)
 // line 651, offset 0x800268c0
	/* begin block 1 */
		// Start line: 652
		// Start offset: 0x800268C0
	/* end block 1 */
	// End offset: 0x800268C0
	// End Line: 653

	/* begin block 2 */
		// Start line: 1360
	/* end block 2 */
	// End Line: 1361

	/* begin block 3 */
		// Start line: 1365
	/* end block 3 */
	// End Line: 1366

	/* begin block 4 */
		// Start line: 1365
	/* end block 4 */
	// End Line: 1366

	/* begin block 5 */
		// Start line: 1366
	/* end block 5 */
	// End Line: 1367

	/* begin block 6 */
		// Start line: 1366
	/* end block 6 */
	// End Line: 1367

void * TransitionIsFinished__7tScreen(tScreen *this)

{
  return (void *)((uint)(this->fInternalScreenFadeVal + 0x18U < 0xa7) ^ 1);
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__7tScreen7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreen *this /*$a0*/, enum tPlayer fromPlayer /*$a1*/, enum tInputKeyType *keyval /*$a2*/, struct tMenuCommand *command /*$a3*/)
 // line 663, offset 0x800268d8
	/* begin block 1 */
		// Start line: 664
		// Start offset: 0x800268D8
	/* end block 1 */
	// End offset: 0x800268D8
	// End Line: 664

	/* begin block 2 */
		// Start line: 1378
	/* end block 2 */
	// End Line: 1379

	/* begin block 3 */
		// Start line: 1389
	/* end block 3 */
	// End Line: 1390

	/* begin block 4 */
		// Start line: 1389
	/* end block 4 */
	// End Line: 1390

	/* begin block 5 */
		// Start line: 1391
	/* end block 5 */
	// End Line: 1392

void ProcessInput__7tScreen7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tScreen *this,tPlayer fromPlayer,tInputKeyType *keyval,tMenuCommand *command)

{
  return;
}





