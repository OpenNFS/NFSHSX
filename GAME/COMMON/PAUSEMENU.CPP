#include "THISDUST.H"
#include "PAUSEMENU.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PauseMenu_FullText__FPcsss(char *sMenuText /*$a0*/, short x /*$s0*/, short flags /*$a2*/, short color /*$s2*/)
 // line 60, offset 0x800a6e60
	/* begin block 1 */
		// Start line: 61
		// Start offset: 0x800A6E60
		// Variables:
	// 		char *str; // $s1
	/* end block 1 */
	// End offset: 0x800A6EDC
	// End Line: 82

	/* begin block 2 */
		// Start line: 111
	/* end block 2 */
	// End Line: 112

	/* begin block 3 */
		// Start line: 116
	/* end block 3 */
	// End Line: 117

	/* begin block 4 */
		// Start line: 115
	/* end block 4 */
	// End Line: 116

	/* begin block 5 */
		// Start line: 115
	/* end block 5 */
	// End Line: 116

void PauseMenu_FullText__FPcsss(char *sMenuText,short x,short flags,short color)

{
  int iVar1;
  uint uVar2;
  
  if (gPause_CurrentY == (uchar *)0x62) {
    x = 0xa0;
    flags = 2;
    color = 6;
  }
  if (flags == 1) {
    iVar1 = textpixels(sMenuText);
    x = x - (short)iVar1;
  }
  else {
    if (flags == 2) {
      uVar2 = textpixels(sMenuText);
      x = x - (short)((int)((uVar2 >> 0x1f) + uVar2) >> 1);
    }
  }
  Font_TextColor__Fi((int)color);
  Font_TextXY__FPcii(sMenuText,(int)x,(int)gPause_CurrentY);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PauseMenu_MenuTextPositioned__Fssss(short index /*$a0*/, short selected /*$a1*/, short disabled /*$a2*/, short x /*$a3*/)
 // line 87, offset 0x800a6f14
	/* begin block 1 */
		// Start line: 88
		// Start offset: 0x800A6F14
		// Variables:
	// 		char *str; // $v0
	// 		short color; // $a3
	/* end block 1 */
	// End offset: 0x800A6F5C
	// End Line: 100

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

	/* begin block 3 */
		// Start line: 175
	/* end block 3 */
	// End Line: 176

	/* begin block 4 */
		// Start line: 175
	/* end block 4 */
	// End Line: 176

void PauseMenu_MenuTextPositioned__Fssss(short index,short selected,short disabled,short x)

{
  int iVar1;
  char *sMenuText;
  short color;
  
  iVar1 = TextSys_WordFlags__Fi((int)index);
  sMenuText = TextSys_Word__Fi((int)index);
  color = 4;
  if (selected != 0) {
    color = 3;
  }
  PauseMenu_FullText__FPcsss(sMenuText,x,(short)iVar1,color);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PauseMenu_MenuText__FsbT1(short index /*$a0*/, void * selected /*$s1*/, void * disabled /*$s2*/)
 // line 103, offset 0x800a6f8c
	/* begin block 1 */
		// Start line: 104
		// Start offset: 0x800A6F8C
	/* end block 1 */
	// End offset: 0x800A6F8C
	// End Line: 104

	/* begin block 2 */
		// Start line: 205
	/* end block 2 */
	// End Line: 206

	/* begin block 3 */
		// Start line: 209
	/* end block 3 */
	// End Line: 210

	/* begin block 4 */
		// Start line: 209
	/* end block 4 */
	// End Line: 210

void PauseMenu_MenuText__FsbT1(short index,void *selected,void *disabled)

{
  int iVar1;
  
  iVar1 = TextSys_WordX__Fi((int)index);
  PauseMenu_MenuTextPositioned__Fssss(index,(short)selected,(short)disabled,(short)iVar1);
  return;
}



// decompiled code
// original method signature: 
// struct tPListIterator * /*$ra*/ __14tPListIteratorPsPi(struct tPListIterator *this /*$v0*/, short *selection /*$a1*/, int *valPtr /*$a2*/)
 // line 123, offset 0x800a6ff0
	/* begin block 1 */
		// Start line: 124
		// Start offset: 0x800A6FF0
	/* end block 1 */
	// End offset: 0x800A6FF0
	// End Line: 124

	/* begin block 2 */
		// Start line: 238
	/* end block 2 */
	// End Line: 239

	/* begin block 3 */
		// Start line: 252
	/* end block 3 */
	// End Line: 253

	/* begin block 4 */
		// Start line: 252
	/* end block 4 */
	// End Line: 253

tPListIterator * __14tPListIteratorPsPi(tPListIterator *this,short *selection,int *valPtr)

{
  *(undefined4 *)this->_vf = 0x80056334;
  this->fSelectionList = selection;
  this->fValue = valPtr;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._14tPListIterator(struct tPListIterator *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 129, offset 0x800a700c
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x800A700C
	/* end block 1 */
	// End offset: 0x800A700C
	// End Line: 130

	/* begin block 2 */
		// Start line: 260
	/* end block 2 */
	// End Line: 261

	/* begin block 3 */
		// Start line: 264
	/* end block 3 */
	// End Line: 265

	/* begin block 4 */
		// Start line: 264
	/* end block 4 */
	// End Line: 265

void ___14tPListIterator(tPListIterator *this,int __in_chrg)

{
  *(undefined4 *)this->_vf = 0x80056334;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ Value__14tPListIterator7tPlayer(struct tPListIterator *this /*$a0*/)
 // line 134, offset 0x800a7040
	/* begin block 1 */
		// Start line: 135
		// Start offset: 0x800A7040
	/* end block 1 */
	// End offset: 0x800A7040
	// End Line: 136

	/* begin block 2 */
		// Start line: 269
	/* end block 2 */
	// End Line: 270

	/* begin block 3 */
		// Start line: 274
	/* end block 3 */
	// End Line: 275

	/* begin block 4 */
		// Start line: 274
	/* end block 4 */
	// End Line: 275

	/* begin block 5 */
		// Start line: 275
	/* end block 5 */
	// End Line: 276

	/* begin block 6 */
		// Start line: 275
	/* end block 6 */
	// End Line: 276

char Value__14tPListIterator7tPlayer(tPListIterator *this)

{
  return (char)*this->fValue;
}



// decompiled code
// original method signature: 
// short /*$ra*/ TextValue__14tPListIterator7tPlayer(struct tPListIterator *this /*$s0*/)
 // line 139, offset 0x800a7054
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x800A7054
	/* end block 1 */
	// End offset: 0x800A7054
	// End Line: 140

	/* begin block 2 */
		// Start line: 280
	/* end block 2 */
	// End Line: 281

	/* begin block 3 */
		// Start line: 284
	/* end block 3 */
	// End Line: 285

	/* begin block 4 */
		// Start line: 284
	/* end block 4 */
	// End Line: 285

short TextValue__14tPListIterator7tPlayer(tPListIterator *this)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(int *)this->_vf + 0x14))
                    ((int)&this->fSelectionList + (int)*(short *)(*(int *)this->_vf + 0x10),
                     0xffffffff);
  return this->fSelectionList[uVar1 & 0xff];
}



// decompiled code
// original method signature: 
// void /*$ra*/ Increment__14tPListIterator7tPlayer(struct tPListIterator *this /*$a0*/)
 // line 144, offset 0x800a70a4
	/* begin block 1 */
		// Start line: 145
		// Start offset: 0x800A70A4
	/* end block 1 */
	// End offset: 0x800A70F0
	// End Line: 149

	/* begin block 2 */
		// Start line: 290
	/* end block 2 */
	// End Line: 291

	/* begin block 3 */
		// Start line: 294
	/* end block 3 */
	// End Line: 295

	/* begin block 4 */
		// Start line: 294
	/* end block 4 */
	// End Line: 295

void Increment__14tPListIterator7tPlayer(tPListIterator *this)

{
  *this->fValue = *this->fValue + 1;
  if (this->fSelectionList[*this->fValue] == 0) {
    *this->fValue = 0;
  }
  AudioCmn_PlayPauseSound__Fi(5);
  gMPauseUpdateNextTime = &DAT_00000001;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decrement__14tPListIterator7tPlayer(struct tPListIterator *this /*$a0*/)
 // line 154, offset 0x800a7110
	/* begin block 1 */
		// Start line: 155
		// Start offset: 0x800A7110
	/* end block 1 */
	// End offset: 0x800A7190
	// End Line: 163

	/* begin block 2 */
		// Start line: 309
	/* end block 2 */
	// End Line: 310

	/* begin block 3 */
		// Start line: 314
	/* end block 3 */
	// End Line: 315

	/* begin block 4 */
		// Start line: 314
	/* end block 4 */
	// End Line: 315

void Decrement__14tPListIterator7tPlayer(tPListIterator *this)

{
  short sVar1;
  int *piVar2;
  
  piVar2 = this->fValue;
  if (*piVar2 == 0) {
    sVar1 = this->fSelectionList[1];
    while (0 < sVar1) {
      *piVar2 = *piVar2 + 1;
      piVar2 = this->fValue;
      sVar1 = this->fSelectionList[*piVar2 + 1];
    }
  }
  else {
    *piVar2 = *piVar2 + -1;
  }
  AudioCmn_PlayPauseSound__Fi(5);
  gMPauseUpdateNextTime = &DAT_00000001;
  return;
}



// decompiled code
// original method signature: 
// struct tPListIteratorIndexed * /*$ra*/ __21tPListIteratorIndexedPsPiPc(struct tPListIteratorIndexed *this /*$s0*/, short *selection /*$a1*/, int *valPtr /*$a2*/, char *index /*$s1*/)
 // line 197, offset 0x800a71b0
	/* begin block 1 */
		// Start line: 198
		// Start offset: 0x800A71B0
	/* end block 1 */
	// End offset: 0x800A71B0
	// End Line: 198

	/* begin block 2 */
		// Start line: 366
	/* end block 2 */
	// End Line: 367

	/* begin block 3 */
		// Start line: 400
	/* end block 3 */
	// End Line: 401

	/* begin block 4 */
		// Start line: 400
	/* end block 4 */
	// End Line: 401

tPListIteratorIndexed *
__21tPListIteratorIndexedPsPiPc
          (tPListIteratorIndexed *this,short *selection,int *valPtr,char *index)

{
  __14tPListIteratorPsPi((tPListIterator *)this,selection,valPtr);
  *(undefined4 *)(this->tPListIterator)._vf = 0x80056304;
  *(char **)((this->tPListIterator)._vf + 4) = index;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._21tPListIteratorIndexed(struct tPListIteratorIndexed *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 203, offset 0x800a71f4
	/* begin block 1 */
		// Start line: 204
		// Start offset: 0x800A71F4
	/* end block 1 */
	// End offset: 0x800A71F4
	// End Line: 204

	/* begin block 2 */
		// Start line: 410
	/* end block 2 */
	// End Line: 411

	/* begin block 3 */
		// Start line: 414
	/* end block 3 */
	// End Line: 415

	/* begin block 4 */
		// Start line: 414
	/* end block 4 */
	// End Line: 415

void ___21tPListIteratorIndexed(tPListIteratorIndexed *this,int __in_chrg)

{
  *(undefined4 *)(this->tPListIterator)._vf = 0x80056304;
  ___14tPListIterator((tPListIterator *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ Value__21tPListIteratorIndexed7tPlayer(struct tPListIteratorIndexed *this /*$a0*/)
 // line 207, offset 0x800a721c
	/* begin block 1 */
		// Start line: 208
		// Start offset: 0x800A721C
	/* end block 1 */
	// End offset: 0x800A721C
	// End Line: 209

	/* begin block 2 */
		// Start line: 418
	/* end block 2 */
	// End Line: 419

	/* begin block 3 */
		// Start line: 422
	/* end block 3 */
	// End Line: 423

	/* begin block 4 */
		// Start line: 422
	/* end block 4 */
	// End Line: 423

	/* begin block 5 */
		// Start line: 423
	/* end block 5 */
	// End Line: 424

	/* begin block 6 */
		// Start line: 423
	/* end block 6 */
	// End Line: 424

char Value__21tPListIteratorIndexed7tPlayer(tPListIteratorIndexed *this)

{
  return (char)(this->tPListIterator).fValue[(uint)**(byte **)((this->tPListIterator)._vf + 4)];
}



// decompiled code
// original method signature: 
// short /*$ra*/ TextValue__21tPListIteratorIndexed7tPlayer(struct tPListIteratorIndexed *this /*$s0*/)
 // line 212, offset 0x800a7240
	/* begin block 1 */
		// Start line: 213
		// Start offset: 0x800A7240
	/* end block 1 */
	// End offset: 0x800A7240
	// End Line: 213

	/* begin block 2 */
		// Start line: 428
	/* end block 2 */
	// End Line: 429

	/* begin block 3 */
		// Start line: 432
	/* end block 3 */
	// End Line: 433

	/* begin block 4 */
		// Start line: 432
	/* end block 4 */
	// End Line: 433

short TextValue__21tPListIteratorIndexed7tPlayer(tPListIteratorIndexed *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this->tPListIterator)._vf;
  uVar2 = (**(code **)(iVar1 + 0x14))
                    ((int)&(this->tPListIterator).fSelectionList + (int)*(short *)(iVar1 + 0x10),
                     0xffffffff);
  return (this->tPListIterator).fSelectionList[uVar2 & 0xff];
}



// decompiled code
// original method signature: 
// void /*$ra*/ Increment__21tPListIteratorIndexed7tPlayer(struct tPListIteratorIndexed *this /*$a0*/)
 // line 219, offset 0x800a7290
	/* begin block 1 */
		// Start line: 220
		// Start offset: 0x800A7290
	/* end block 1 */
	// End offset: 0x800A72FC
	// End Line: 224

	/* begin block 2 */
		// Start line: 440
	/* end block 2 */
	// End Line: 441

	/* begin block 3 */
		// Start line: 446
	/* end block 3 */
	// End Line: 447

	/* begin block 4 */
		// Start line: 446
	/* end block 4 */
	// End Line: 447

void Increment__21tPListIteratorIndexed7tPlayer(tPListIteratorIndexed *this)

{
  int *piVar1;
  
  piVar1 = (this->tPListIterator).fValue + (uint)**(byte **)((this->tPListIterator)._vf + 4);
  *piVar1 = *piVar1 + 1;
  piVar1 = (this->tPListIterator).fValue + (uint)**(byte **)((this->tPListIterator)._vf + 4);
  if ((this->tPListIterator).fSelectionList[*piVar1] == 0) {
    *piVar1 = 0;
  }
  AudioCmn_PlayPauseSound__Fi(5);
  gMPauseUpdateNextTime = &DAT_00000001;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decrement__21tPListIteratorIndexed7tPlayer(struct tPListIteratorIndexed *this /*$a0*/)
 // line 229, offset 0x800a731c
	/* begin block 1 */
		// Start line: 230
		// Start offset: 0x800A731C
	/* end block 1 */
	// End offset: 0x800A73C8
	// End Line: 238

	/* begin block 2 */
		// Start line: 461
	/* end block 2 */
	// End Line: 462

	/* begin block 3 */
		// Start line: 466
	/* end block 3 */
	// End Line: 467

	/* begin block 4 */
		// Start line: 466
	/* end block 4 */
	// End Line: 467

void Decrement__21tPListIteratorIndexed7tPlayer(tPListIteratorIndexed *this)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)((this->tPListIterator)._vf + 4);
  piVar3 = (this->tPListIterator).fValue;
  iVar2 = piVar3[(uint)*pbVar4];
  if (iVar2 == 0) {
    sVar1 = (this->tPListIterator).fSelectionList[1];
    while (0 < sVar1) {
      piVar3[(uint)*pbVar4] = piVar3[(uint)*pbVar4] + 1;
      pbVar4 = *(byte **)((this->tPListIterator)._vf + 4);
      piVar3 = (this->tPListIterator).fValue;
      sVar1 = (this->tPListIterator).fSelectionList[piVar3[(uint)*pbVar4] + 1];
    }
  }
  else {
    piVar3[(uint)*pbVar4] = iVar2 + -1;
  }
  AudioCmn_PlayPauseSound__Fi(5);
  gMPauseUpdateNextTime = &DAT_00000001;
  return;
}



// decompiled code
// original method signature: 
// struct tPMenuItem * /*$ra*/ __10tPMenuItemUi(struct tPMenuItem *this /*$v0*/, unsigned int textDescription /*$a1*/)
 // line 246, offset 0x800a73e8
	/* begin block 1 */
		// Start line: 247
		// Start offset: 0x800A73E8
	/* end block 1 */
	// End offset: 0x800A73E8
	// End Line: 247

	/* begin block 2 */
		// Start line: 492
	/* end block 2 */
	// End Line: 493

	/* begin block 3 */
		// Start line: 500
	/* end block 3 */
	// End Line: 501

	/* begin block 4 */
		// Start line: 500
	/* end block 4 */
	// End Line: 501

tPMenuItem * __10tPMenuItemUi(tPMenuItem *this,uint textDescription)

{
  *(undefined4 *)this->_vf = 0x800562cc;
  this->fTextDescription = textDescription;
  this->fFlags = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._10tPMenuItem(struct tPMenuItem *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 252, offset 0x800a7404
	/* begin block 1 */
		// Start line: 253
		// Start offset: 0x800A7404
	/* end block 1 */
	// End offset: 0x800A7404
	// End Line: 253

	/* begin block 2 */
		// Start line: 508
	/* end block 2 */
	// End Line: 509

	/* begin block 3 */
		// Start line: 512
	/* end block 3 */
	// End Line: 513

	/* begin block 4 */
		// Start line: 512
	/* end block 4 */
	// End Line: 513

void ___10tPMenuItem(tPMenuItem *this,int __in_chrg)

{
  *(undefined4 *)this->_vf = 0x800562cc;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// struct tPMenu * /*$ra*/ NextMenu__10tPMenuItem(struct tPMenuItem *this /*$a0*/)
 // line 256, offset 0x800a7438
	/* begin block 1 */
		// Start line: 257
		// Start offset: 0x800A7438
	/* end block 1 */
	// End offset: 0x800A7438
	// End Line: 258

	/* begin block 2 */
		// Start line: 516
	/* end block 2 */
	// End Line: 517

	/* begin block 3 */
		// Start line: 520
	/* end block 3 */
	// End Line: 521

	/* begin block 4 */
		// Start line: 520
	/* end block 4 */
	// End Line: 521

	/* begin block 5 */
		// Start line: 521
	/* end block 5 */
	// End Line: 522

	/* begin block 6 */
		// Start line: 521
	/* end block 6 */
	// End Line: 522

tPMenu * NextMenu__10tPMenuItem(tPMenuItem *this)

{
  return (tPMenu *)0x0;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ Debounce__10tPMenuItem(struct tPMenuItem *this /*$a0*/)
 // line 261, offset 0x800a7440
	/* begin block 1 */
		// Start line: 262
		// Start offset: 0x800A7440
	/* end block 1 */
	// End offset: 0x800A7440
	// End Line: 263

	/* begin block 2 */
		// Start line: 526
	/* end block 2 */
	// End Line: 527

	/* begin block 3 */
		// Start line: 530
	/* end block 3 */
	// End Line: 531

	/* begin block 4 */
		// Start line: 530
	/* end block 4 */
	// End Line: 531

	/* begin block 5 */
		// Start line: 531
	/* end block 5 */
	// End Line: 532

	/* begin block 6 */
		// Start line: 531
	/* end block 6 */
	// End Line: 532

void * Debounce__10tPMenuItem(tPMenuItem *this)

{
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__10tPMenuItemR13tInputKeyTypeR13tPMenuCommand(struct tPMenuItem *this /*$a0*/)
 // line 266, offset 0x800a7448
	/* begin block 1 */
		// Start line: 267
		// Start offset: 0x800A7448
	/* end block 1 */
	// End offset: 0x800A7448
	// End Line: 267

	/* begin block 2 */
		// Start line: 536
	/* end block 2 */
	// End Line: 537

	/* begin block 3 */
		// Start line: 540
	/* end block 3 */
	// End Line: 541

	/* begin block 4 */
		// Start line: 540
	/* end block 4 */
	// End Line: 541

	/* begin block 5 */
		// Start line: 541
	/* end block 5 */
	// End Line: 542

	/* begin block 6 */
		// Start line: 541
	/* end block 6 */
	// End Line: 542

void ProcessInput__10tPMenuItemR13tInputKeyTypeR13tPMenuCommand(tPMenuItem *this)

{
  return;
}



// decompiled code
// original method signature: 
// struct tPMenuItemNonInteractiveText * /*$ra*/ __28tPMenuItemNonInteractiveTextUi(struct tPMenuItemNonInteractiveText *this /*$s0*/, unsigned int textDescription /*$a1*/)
 // line 273, offset 0x800a7450
	/* begin block 1 */
		// Start line: 274
		// Start offset: 0x800A7450
	/* end block 1 */
	// End offset: 0x800A7450
	// End Line: 274

	/* begin block 2 */
		// Start line: 548
	/* end block 2 */
	// End Line: 549

	/* begin block 3 */
		// Start line: 554
	/* end block 3 */
	// End Line: 555

	/* begin block 4 */
		// Start line: 554
	/* end block 4 */
	// End Line: 555

tPMenuItemNonInteractiveText *
__28tPMenuItemNonInteractiveTextUi(tPMenuItemNonInteractiveText *this,uint textDescription)

{
  __10tPMenuItemUi((tPMenuItem *)this,textDescription);
  *(undefined4 *)(this->tPMenuItem)._vf = 0x80056294;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._28tPMenuItemNonInteractiveText(struct tPMenuItemNonInteractiveText *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 278, offset 0x800a7484
	/* begin block 1 */
		// Start line: 279
		// Start offset: 0x800A7484
	/* end block 1 */
	// End offset: 0x800A7484
	// End Line: 279

	/* begin block 2 */
		// Start line: 560
	/* end block 2 */
	// End Line: 561

	/* begin block 3 */
		// Start line: 564
	/* end block 3 */
	// End Line: 565

	/* begin block 4 */
		// Start line: 564
	/* end block 4 */
	// End Line: 565

void ___28tPMenuItemNonInteractiveText(tPMenuItemNonInteractiveText *this,int __in_chrg)

{
  *(undefined4 *)(this->tPMenuItem)._vf = 0x80056294;
  ___10tPMenuItem((tPMenuItem *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__28tPMenuItemNonInteractiveTextb(struct tPMenuItemNonInteractiveText *this /*$a0*/)
 // line 283, offset 0x800a74ac
	/* begin block 1 */
		// Start line: 284
		// Start offset: 0x800A74AC
	/* end block 1 */
	// End offset: 0x800A74AC
	// End Line: 284

	/* begin block 2 */
		// Start line: 569
	/* end block 2 */
	// End Line: 570

	/* begin block 3 */
		// Start line: 574
	/* end block 3 */
	// End Line: 575

	/* begin block 4 */
		// Start line: 574
	/* end block 4 */
	// End Line: 575

void Draw__28tPMenuItemNonInteractiveTextb(tPMenuItemNonInteractiveText *this)

{
  PauseMenu_MenuText__FsbT1(*(short *)&(this->tPMenuItem).fTextDescription,(void *)0x0,(void *)0x0);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsNavigable__28tPMenuItemNonInteractiveText(struct tPMenuItemNonInteractiveText *this /*$a0*/)
 // line 288, offset 0x800a86a0
	/* begin block 1 */
		// Start line: 289
		// Start offset: 0x800A86A0
	/* end block 1 */
	// End offset: 0x800A86A0
	// End Line: 290

	/* begin block 2 */
		// Start line: 1211
	/* end block 2 */
	// End Line: 1212

	/* begin block 3 */
		// Start line: 576
	/* end block 3 */
	// End Line: 577

	/* begin block 4 */
		// Start line: 1211
	/* end block 4 */
	// End Line: 1212

	/* begin block 5 */
		// Start line: 1212
	/* end block 5 */
	// End Line: 1213

	/* begin block 6 */
		// Start line: 1212
	/* end block 6 */
	// End Line: 1213

void * IsNavigable__28tPMenuItemNonInteractiveText(tPMenuItemNonInteractiveText *this)

{
  return (void *)0x0;
}



// decompiled code
// original method signature: 
// struct tPMenuItemInteractive * /*$ra*/ __21tPMenuItemInteractiveUi(struct tPMenuItemInteractive *this /*$s0*/, unsigned int textDescription /*$a1*/)
 // line 297, offset 0x800a74d4
	/* begin block 1 */
		// Start line: 298
		// Start offset: 0x800A74D4
	/* end block 1 */
	// End offset: 0x800A74D4
	// End Line: 298

	/* begin block 2 */
		// Start line: 590
	/* end block 2 */
	// End Line: 591

	/* begin block 3 */
		// Start line: 603
	/* end block 3 */
	// End Line: 604

	/* begin block 4 */
		// Start line: 603
	/* end block 4 */
	// End Line: 604

tPMenuItemInteractive *
__21tPMenuItemInteractiveUi(tPMenuItemInteractive *this,uint textDescription)

{
  __10tPMenuItemUi((tPMenuItem *)this,textDescription);
  *(undefined4 *)(this->tPMenuItem)._vf = 0x8005625c;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._21tPMenuItemInteractive(struct tPMenuItemInteractive *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 302, offset 0x800a7508
	/* begin block 1 */
		// Start line: 303
		// Start offset: 0x800A7508
	/* end block 1 */
	// End offset: 0x800A7508
	// End Line: 303

	/* begin block 2 */
		// Start line: 609
	/* end block 2 */
	// End Line: 610

	/* begin block 3 */
		// Start line: 613
	/* end block 3 */
	// End Line: 614

	/* begin block 4 */
		// Start line: 613
	/* end block 4 */
	// End Line: 614

void ___21tPMenuItemInteractive(tPMenuItemInteractive *this,int __in_chrg)

{
  *(undefined4 *)(this->tPMenuItem)._vf = 0x8005625c;
  ___10tPMenuItem((tPMenuItem *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsNavigable__21tPMenuItemInteractive(struct tPMenuItemInteractive *this /*$a0*/)
 // line 306, offset 0x800a8698
	/* begin block 1 */
		// Start line: 307
		// Start offset: 0x800A8698
	/* end block 1 */
	// End offset: 0x800A8698
	// End Line: 308

	/* begin block 2 */
		// Start line: 1228
	/* end block 2 */
	// End Line: 1229

	/* begin block 3 */
		// Start line: 612
	/* end block 3 */
	// End Line: 613

	/* begin block 4 */
		// Start line: 1228
	/* end block 4 */
	// End Line: 1229

	/* begin block 5 */
		// Start line: 1229
	/* end block 5 */
	// End Line: 1230

	/* begin block 6 */
		// Start line: 1229
	/* end block 6 */
	// End Line: 1230

void * IsNavigable__21tPMenuItemInteractive(tPMenuItemInteractive *this)

{
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__21tPMenuItemInteractiveb(struct tPMenuItemInteractive *this /*$a0*/, void * selected /*$a1*/)
 // line 311, offset 0x800a7530
	/* begin block 1 */
		// Start line: 312
		// Start offset: 0x800A7530

		/* begin block 1.1 */
			// Start line: 312
			// Start offset: 0x800A7530
			// Variables:
		// 		struct tPMenuItem *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 312
				// Start offset: 0x800A7530
			/* end block 1.1.1 */
			// End offset: 0x800A7530
			// End Line: 312
		/* end block 1.1 */
		// End offset: 0x800A7530
		// End Line: 312
	/* end block 1 */
	// End offset: 0x800A7530
	// End Line: 312

	/* begin block 2 */
		// Start line: 622
	/* end block 2 */
	// End Line: 623

	/* begin block 3 */
		// Start line: 631
	/* end block 3 */
	// End Line: 632

	/* begin block 4 */
		// Start line: 631
	/* end block 4 */
	// End Line: 632

void Draw__21tPMenuItemInteractiveb(tPMenuItemInteractive *this,void *selected)

{
  PauseMenu_MenuText__FsbT1
            (*(short *)&(this->tPMenuItem).fTextDescription,selected,
             (void *)((this->tPMenuItem).fFlags & 1));
  return;
}



// decompiled code
// original method signature: 
// struct tPMenuItemLeftRightChoice * /*$ra*/ __25tPMenuItemLeftRightChoiceUiP14tPListIterator(struct tPMenuItemLeftRightChoice *this /*$s0*/, unsigned int textDescription /*$a1*/, struct tPListIterator *dataPtr /*$s1*/)
 // line 319, offset 0x800a7558
	/* begin block 1 */
		// Start line: 320
		// Start offset: 0x800A7558
	/* end block 1 */
	// End offset: 0x800A7558
	// End Line: 320

	/* begin block 2 */
		// Start line: 640
	/* end block 2 */
	// End Line: 641

	/* begin block 3 */
		// Start line: 647
	/* end block 3 */
	// End Line: 648

	/* begin block 4 */
		// Start line: 647
	/* end block 4 */
	// End Line: 648

tPMenuItemLeftRightChoice *
__25tPMenuItemLeftRightChoiceUiP14tPListIterator
          (tPMenuItemLeftRightChoice *this,uint textDescription,tPListIterator *dataPtr)

{
  __21tPMenuItemInteractiveUi((tPMenuItemInteractive *)this,textDescription);
  *(undefined4 *)(this->tPMenuItemInteractive).tPMenuItem._vf = 0x80056224;
  *(tPListIterator **)((this->tPMenuItemInteractive).tPMenuItem._vf + 4) = dataPtr;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._25tPMenuItemLeftRightChoice(struct tPMenuItemLeftRightChoice *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 325, offset 0x800a759c
	/* begin block 1 */
		// Start line: 326
		// Start offset: 0x800A759C
	/* end block 1 */
	// End offset: 0x800A759C
	// End Line: 326

	/* begin block 2 */
		// Start line: 657
	/* end block 2 */
	// End Line: 658

	/* begin block 3 */
		// Start line: 661
	/* end block 3 */
	// End Line: 662

	/* begin block 4 */
		// Start line: 661
	/* end block 4 */
	// End Line: 662

void ___25tPMenuItemLeftRightChoice(tPMenuItemLeftRightChoice *this,int __in_chrg)

{
  *(undefined4 *)(this->tPMenuItemInteractive).tPMenuItem._vf = 0x80056224;
  ___21tPMenuItemInteractive((tPMenuItemInteractive *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__25tPMenuItemLeftRightChoiceR13tInputKeyTypeR13tPMenuCommand(struct tPMenuItemLeftRightChoice *this /*$a0*/, enum tInputKeyType *keyval /*$s0*/)
 // line 329, offset 0x800a75c4
	/* begin block 1 */
		// Start line: 330
		// Start offset: 0x800A75C4
	/* end block 1 */
	// End offset: 0x800A7640
	// End Line: 342

	/* begin block 2 */
		// Start line: 665
	/* end block 2 */
	// End Line: 666

	/* begin block 3 */
		// Start line: 669
	/* end block 3 */
	// End Line: 670

	/* begin block 4 */
		// Start line: 669
	/* end block 4 */
	// End Line: 670

void ProcessInput__25tPMenuItemLeftRightChoiceR13tInputKeyTypeR13tPMenuCommand
               (tPMenuItemLeftRightChoice *this,tInputKeyType *keyval)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  
  if (*keyval == kInput_KeyType_Left) {
    iVar3 = *(int *)((this->tPMenuItemInteractive).tPMenuItem._vf + 4);
    sVar1 = *(short *)(*(int *)(iVar3 + 8) + 0x28);
    pcVar2 = *(code **)(*(int *)(iVar3 + 8) + 0x2c);
  }
  else {
    if (*keyval != kInput_KeyType_Right) {
      return;
    }
    iVar3 = *(int *)((this->tPMenuItemInteractive).tPMenuItem._vf + 4);
    sVar1 = *(short *)(*(int *)(iVar3 + 8) + 0x20);
    pcVar2 = *(code **)(*(int *)(iVar3 + 8) + 0x24);
  }
  (*pcVar2)(iVar3 + (int)sVar1,0xffffffff);
  *keyval = kInput_KeyType_AlreadyProcessed;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__25tPMenuItemLeftRightChoiceb(struct tPMenuItemLeftRightChoice *this /*$s1*/, void * selected /*$s2*/)
 // line 346, offset 0x800a7650
	/* begin block 1 */
		// Start line: 347
		// Start offset: 0x800A7650
		// Variables:
	// 		int y; // $s1

		/* begin block 1.1 */
			// Start line: 347
			// Start offset: 0x800A7650
			// Variables:
		// 		struct tPMenuItem *this; // $s1

			/* begin block 1.1.1 */
				// Start line: 347
				// Start offset: 0x800A7650
			/* end block 1.1.1 */
			// End offset: 0x800A7650
			// End Line: 347
		/* end block 1.1 */
		// End offset: 0x800A7650
		// End Line: 347

		/* begin block 1.2 */
			// Start line: 347
			// Start offset: 0x800A7650
			// Variables:
		// 		struct tPMenuItem *this; // $s1

			/* begin block 1.2.1 */
				// Start line: 347
				// Start offset: 0x800A7650
			/* end block 1.2.1 */
			// End offset: 0x800A7650
			// End Line: 347
		/* end block 1.2 */
		// End offset: 0x800A7650
		// End Line: 347

		/* begin block 1.3 */
			// Start line: 347
			// Start offset: 0x800A7650

			/* begin block 1.3.1 */
				// Start line: 364
				// Start offset: 0x800A771C
				// Variables:
			// 		struct POLY_GT4 *prim; // $s0
			/* end block 1.3.1 */
			// End offset: 0x800A77FC
			// End Line: 370
		/* end block 1.3 */
		// End offset: 0x800A77FC
		// End Line: 370
	/* end block 1 */
	// End offset: 0x800A77FC
	// End Line: 370

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

void Draw__25tPMenuItemLeftRightChoiceb(tPMenuItemLeftRightChoice *this,void *selected)

{
  uint *puVar1;
  POLY_GT4 *prim;
  uchar *puVar2;
  short index;
  short x;
  int iVar3;
  char *string;
  int iVar4;
  uint uVar5;
  
  iVar3 = TextSys_WordX__Fi((this->tPMenuItemInteractive).tPMenuItem.fTextDescription);
  PauseMenu_MenuTextPositioned__Fssss
            (*(short *)&(this->tPMenuItemInteractive).tPMenuItem.fTextDescription,(short)selected,
             (ushort)(this->tPMenuItemInteractive).tPMenuItem.fFlags & 1,(short)iVar3);
  iVar4 = *(int *)((this->tPMenuItemInteractive).tPMenuItem._vf + 4);
  iVar3 = *(int *)(iVar4 + 8);
  index = (**(code **)(iVar3 + 0x1c))(iVar4 + (int)*(short *)(iVar3 + 0x18),0xffffffff);
  iVar3 = TextSys_WordX__Fi((int)index);
  x = (short)iVar3;
  PauseMenu_MenuTextPositioned__Fssss
            (index,(short)selected,(ushort)(this->tPMenuItemInteractive).tPMenuItem.fFlags & 1,x);
  puVar2 = gPause_CurrentY;
  prim = DAT_1f800004;
  puVar1 = DAT_1f800000;
  if ((selected != (void *)0x0) && (GameSetup_gData.userSetting.language == 0)) {
    DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar5 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 1;
    *puVar1 = *puVar1 & 0xff000000 | uVar5;
    string = TextSys_Word__Fi((int)index);
    iVar3 = textpixels(string);
    Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
              (prim,&HudPmx_tShape_80110e00,((int)x - iVar3) + -8,(int)(puVar2 + 5),
               (ulong)&DAT_0000bebe);
    prim = DAT_1f800004;
    puVar1 = DAT_1f800000;
    DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar5 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 1;
    *puVar1 = *puVar1 & 0xff000000 | uVar5;
    Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
              (prim,HudPmx_tShape_ARRAY_80110e14,(int)x + 4,(int)(puVar2 + 5),(ulong)&DAT_0000bebe);
  }
  return;
}



// decompiled code
// original method signature: 
// struct tPMenuItemLeftRightSlider * /*$ra*/ __25tPMenuItemLeftRightSliderUiPic(struct tPMenuItemLeftRightSlider *this /*$s0*/, unsigned int textDescription /*$a1*/, int *dataPtr /*$s1*/, char maxVal /*$a3*/)
 // line 441, offset 0x800a7828
	/* begin block 1 */
		// Start line: 442
		// Start offset: 0x800A7828
	/* end block 1 */
	// End offset: 0x800A7828
	// End Line: 442

	/* begin block 2 */
		// Start line: 824
	/* end block 2 */
	// End Line: 825

	/* begin block 3 */
		// Start line: 896
	/* end block 3 */
	// End Line: 897

	/* begin block 4 */
		// Start line: 896
	/* end block 4 */
	// End Line: 897

tPMenuItemLeftRightSlider *
__25tPMenuItemLeftRightSliderUiPic
          (tPMenuItemLeftRightSlider *this,uint textDescription,int *dataPtr,char maxVal)

{
  __21tPMenuItemInteractiveUi((tPMenuItemInteractive *)this,textDescription);
  *(undefined4 *)(this->tPMenuItemInteractive).tPMenuItem._vf = 0x800561ec;
  *(int **)((this->tPMenuItemInteractive).tPMenuItem._vf + 4) = dataPtr;
  *(char *)&this->fData = maxVal;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._25tPMenuItemLeftRightSlider(struct tPMenuItemLeftRightSlider *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 449, offset 0x800a787c
	/* begin block 1 */
		// Start line: 450
		// Start offset: 0x800A787C
	/* end block 1 */
	// End offset: 0x800A787C
	// End Line: 450

	/* begin block 2 */
		// Start line: 910
	/* end block 2 */
	// End Line: 911

	/* begin block 3 */
		// Start line: 915
	/* end block 3 */
	// End Line: 916

	/* begin block 4 */
		// Start line: 915
	/* end block 4 */
	// End Line: 916

void ___25tPMenuItemLeftRightSlider(tPMenuItemLeftRightSlider *this,int __in_chrg)

{
  *(undefined4 *)(this->tPMenuItemInteractive).tPMenuItem._vf = 0x800561ec;
  ___21tPMenuItemInteractive((tPMenuItemInteractive *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ Debounce__25tPMenuItemLeftRightSlider(struct tPMenuItemLeftRightSlider *this /*$a0*/)
 // line 453, offset 0x800a78a4
	/* begin block 1 */
		// Start line: 454
		// Start offset: 0x800A78A4
	/* end block 1 */
	// End offset: 0x800A78A4
	// End Line: 455

	/* begin block 2 */
		// Start line: 919
	/* end block 2 */
	// End Line: 920

	/* begin block 3 */
		// Start line: 923
	/* end block 3 */
	// End Line: 924

	/* begin block 4 */
		// Start line: 923
	/* end block 4 */
	// End Line: 924

	/* begin block 5 */
		// Start line: 924
	/* end block 5 */
	// End Line: 925

	/* begin block 6 */
		// Start line: 924
	/* end block 6 */
	// End Line: 925

void * Debounce__25tPMenuItemLeftRightSlider(tPMenuItemLeftRightSlider *this)

{
  return (void *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__25tPMenuItemLeftRightSliderR13tInputKeyTypeR13tPMenuCommand(struct tPMenuItemLeftRightSlider *this /*$a0*/, enum tInputKeyType *keyval /*$a1*/)
 // line 458, offset 0x800a78ac
	/* begin block 1 */
		// Start line: 459
		// Start offset: 0x800A78AC
		// Variables:
	// 		void * sound; // $a2
	/* end block 1 */
	// End offset: 0x800A79B8
	// End Line: 486

	/* begin block 2 */
		// Start line: 929
	/* end block 2 */
	// End Line: 930

	/* begin block 3 */
		// Start line: 933
	/* end block 3 */
	// End Line: 934

	/* begin block 4 */
		// Start line: 933
	/* end block 4 */
	// End Line: 934

void ProcessInput__25tPMenuItemLeftRightSliderR13tInputKeyTypeR13tPMenuCommand
               (tPMenuItemLeftRightSlider *this,tInputKeyType *keyval)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  
  bVar1 = false;
  if (*keyval == kInput_KeyType_Left) {
    if (0 < **(int **)((this->tPMenuItemInteractive).tPMenuItem._vf + 4)) {
      gMPauseUpdateNextTime = &DAT_00000001;
      piVar5 = *(int **)((this->tPMenuItemInteractive).tPMenuItem._vf + 4);
      iVar2 = *piVar5 - (uint)*(byte *)&this->fData / 0x1e;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      *piVar5 = iVar2;
LAB_800a799c:
      bVar1 = true;
    }
  }
  else {
    if (*keyval != kInput_KeyType_Right) goto LAB_800a79a8;
    if (**(int **)((this->tPMenuItemInteractive).tPMenuItem._vf + 4) <
        (int)(uint)*(byte *)&this->fData) {
      gMPauseUpdateNextTime = &DAT_00000001;
      uVar3 = (uint)*(byte *)&this->fData;
      puVar6 = *(uint **)((this->tPMenuItemInteractive).tPMenuItem._vf + 4);
      uVar4 = *puVar6 + uVar3 / 0x1e;
      if ((int)uVar4 <= (int)uVar3) {
        uVar3 = uVar4;
      }
      *puVar6 = uVar3;
      goto LAB_800a799c;
    }
  }
  *keyval = kInput_KeyType_AlreadyProcessed;
LAB_800a79a8:
  if (bVar1) {
    AudioCmn_PlayPauseSound__Fi(5);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__25tPMenuItemLeftRightSliderb(struct tPMenuItemLeftRightSlider *this /*stack 0*/, void * selected /*stack 4*/)
 // line 498, offset 0x800a79c8
	/* begin block 1 */
		// Start line: 499
		// Start offset: 0x800A79C8
		// Variables:
	// 		short x; // stack offset -48
	// 		short y; // $s3

		/* begin block 1.1 */
			// Start line: 499
			// Start offset: 0x800A79C8
			// Variables:
		// 		struct tPMenuItem *this; // stack offset 0

			/* begin block 1.1.1 */
				// Start line: 499
				// Start offset: 0x800A79C8
			/* end block 1.1.1 */
			// End offset: 0x800A79C8
			// End Line: 499
		/* end block 1.1 */
		// End offset: 0x800A79C8
		// End Line: 499

		/* begin block 1.2 */
			// Start line: 499
			// Start offset: 0x800A79C8
			// Variables:
		// 		int i; // $s5

			/* begin block 1.2.1 */
				// Start line: 509
				// Start offset: 0x800A7A54
				// Variables:
			// 		unsigned long col; // $s2
			// 		int xpos; // $fp

				/* begin block 1.2.1.1 */
					// Start line: 522
					// Start offset: 0x800A7AD4

					/* begin block 1.2.1.1.1 */
						// Start line: 523
						// Start offset: 0x800A7AF4
						// Variables:
					// 		struct POLY_GT4 *prim; // $a0
					/* end block 1.2.1.1.1 */
					// End offset: 0x800A7BC4
					// End Line: 529
				/* end block 1.2.1.1 */
				// End offset: 0x800A7BC4
				// End Line: 529
			/* end block 1.2.1 */
			// End offset: 0x800A7BC4
			// End Line: 532
		/* end block 1.2 */
		// End offset: 0x800A7C00
		// End Line: 533
	/* end block 1 */
	// End offset: 0x800A7C00
	// End Line: 535

	/* begin block 2 */
		// Start line: 1000
	/* end block 2 */
	// End Line: 1001

	/* begin block 3 */
		// Start line: 1013
	/* end block 3 */
	// End Line: 1014

	/* begin block 4 */
		// Start line: 1013
	/* end block 4 */
	// End Line: 1014

void Draw__25tPMenuItemLeftRightSliderb(tPMenuItemLeftRightSlider *this,void *selected)

{
  byte bVar1;
  uint *puVar2;
  POLY_GT4 *prim;
  int iVar3;
  short x;
  int y;
  undefined *col1;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = 0x42;
  iVar3 = TextSys_WordX__Fi((this->tPMenuItemInteractive).tPMenuItem.fTextDescription);
  x = (short)iVar3;
  iVar3 = (int)x;
  uVar4 = (uint)(ushort)gPause_CurrentY;
  PauseMenu_MenuTextPositioned__Fssss
            (*(short *)&(this->tPMenuItemInteractive).tPMenuItem.fTextDescription,(short)selected,
             (ushort)(this->tPMenuItemInteractive).tPMenuItem.fFlags & 1,x);
  iVar5 = uVar4 + 4;
  do {
    prim = DAT_1f800004;
    puVar2 = DAT_1f800000;
    if (0xe < iVar6) {
      Hud_FBuildF4__FiiiiiUlcc(0,(int)x + 0x3f,(iVar5 * 0x10000 >> 0x10) + 1,0x4f,7,0,0,0);
      return;
    }
    bVar1 = *(byte *)&this->fData;
    y = **(int **)((this->tPMenuItemInteractive).tPMenuItem._vf + 4) * 0xf;
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if (((uint)bVar1 == 0xffffffff) && (y == -0x80000000)) {
      trap(0x1800);
    }
    col1 = (undefined *)0x323232;
    if (iVar6 < y / (int)(uint)bVar1) {
      col1 = (undefined *)0x808080;
      if (selected != (void *)0x0) {
        col1 = &DAT_0000bebe;
        goto LAB_800a7ad4;
      }
    }
    else {
LAB_800a7ad4:
      if ((selected != (void *)0x0) && (GameSetup_gData.userSetting.language == 0)) {
        y = (iVar5 * 0x10000 >> 0x10) + 2;
        DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
        uVar4 = (uint)DAT_1f800004 & 0xffffff;
        DAT_1f800004 = DAT_1f800004 + 1;
        *puVar2 = *puVar2 & 0xff000000 | uVar4;
        Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
                  (prim,&HudPmx_tShape_80110e00,iVar3 + 0x35,y,(ulong)&DAT_0000bebe);
        prim = DAT_1f800004;
        puVar2 = DAT_1f800000;
        DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *DAT_1f800000 & 0xffffff;
        uVar4 = (uint)DAT_1f800004 & 0xffffff;
        DAT_1f800004 = DAT_1f800004 + 1;
        *puVar2 = *puVar2 & 0xff000000 | uVar4;
        Hud_BuildGT4__FP8POLY_GT4P13HudPmx_tShapeiiUl
                  (prim,HudPmx_tShape_ARRAY_80110e14,iVar3 + 0x90,y,(ulong)&DAT_0000bebe);
      }
    }
    Hud_FBuildF4__FiiiiiUlcc(0,iVar3 + iVar7,(iVar5 * 0x10000 >> 0x10) + 2,3,5,(ulong)col1,0,0);
    iVar7 = iVar7 + 5;
    iVar6 = iVar6 + 1;
  } while( true );
}



// decompiled code
// original method signature: 
// struct tPMenuItemLeftRightSliderIndexed * /*$ra*/ __32tPMenuItemLeftRightSliderIndexedUiPicPc(struct tPMenuItemLeftRightSliderIndexed *this /*$s0*/, unsigned int textDescription /*$a1*/, int *dataPtr /*$a2*/, char maxVal /*$a3*/, char *index /*stack 16*/)
 // line 541, offset 0x800a7c6c
	/* begin block 1 */
		// Start line: 542
		// Start offset: 0x800A7C6C
	/* end block 1 */
	// End offset: 0x800A7C6C
	// End Line: 542

	/* begin block 2 */
		// Start line: 1137
	/* end block 2 */
	// End Line: 1138

	/* begin block 3 */
		// Start line: 1144
	/* end block 3 */
	// End Line: 1145

	/* begin block 4 */
		// Start line: 1144
	/* end block 4 */
	// End Line: 1145

tPMenuItemLeftRightSliderIndexed *
__32tPMenuItemLeftRightSliderIndexedUiPicPc
          (tPMenuItemLeftRightSliderIndexed *this,uint textDescription,int *dataPtr,char maxVal,
          char *index)

{
  __25tPMenuItemLeftRightSliderUiPic
            ((tPMenuItemLeftRightSlider *)this,textDescription,dataPtr,maxVal);
  *(undefined4 *)(this->tPMenuItemLeftRightSlider).tPMenuItemInteractive.tPMenuItem._vf = 0x800561b4
  ;
  *(char **)&(this->tPMenuItemLeftRightSlider).fMaxVal = index;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._32tPMenuItemLeftRightSliderIndexed(struct tPMenuItemLeftRightSliderIndexed *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 547, offset 0x800a7cb4
	/* begin block 1 */
		// Start line: 548
		// Start offset: 0x800A7CB4
	/* end block 1 */
	// End offset: 0x800A7CB4
	// End Line: 548

	/* begin block 2 */
		// Start line: 1154
	/* end block 2 */
	// End Line: 1155

	/* begin block 3 */
		// Start line: 1158
	/* end block 3 */
	// End Line: 1159

	/* begin block 4 */
		// Start line: 1158
	/* end block 4 */
	// End Line: 1159

void ___32tPMenuItemLeftRightSliderIndexed(tPMenuItemLeftRightSliderIndexed *this,int __in_chrg)

{
  *(undefined4 *)(this->tPMenuItemLeftRightSlider).tPMenuItemInteractive.tPMenuItem._vf = 0x800561b4
  ;
  ___25tPMenuItemLeftRightSlider((tPMenuItemLeftRightSlider *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__32tPMenuItemLeftRightSliderIndexedR13tInputKeyTypeR13tPMenuCommand(struct tPMenuItemLeftRightSliderIndexed *this /*$s0*/, enum tInputKeyType *keyval /*$a1*/, struct tPMenuCommand *command /*$a2*/)
 // line 553, offset 0x800a7cdc
	/* begin block 1 */
		// Start line: 554
		// Start offset: 0x800A7CDC
		// Variables:
	// 		int *orgdata; // $s1
	/* end block 1 */
	// End offset: 0x800A7CDC
	// End Line: 554

	/* begin block 2 */
		// Start line: 1164
	/* end block 2 */
	// End Line: 1165

	/* begin block 3 */
		// Start line: 1170
	/* end block 3 */
	// End Line: 1171

	/* begin block 4 */
		// Start line: 1170
	/* end block 4 */
	// End Line: 1171

void ProcessInput__32tPMenuItemLeftRightSliderIndexedR13tInputKeyTypeR13tPMenuCommand
               (tPMenuItemLeftRightSliderIndexed *this,tInputKeyType *keyval,tPMenuCommand *command)

{
  int iVar1;
  
  iVar1 = *(int *)((this->tPMenuItemLeftRightSlider).tPMenuItemInteractive.tPMenuItem._vf + 4);
  *(uint *)((this->tPMenuItemLeftRightSlider).tPMenuItemInteractive.tPMenuItem._vf + 4) =
       iVar1 + (uint)**(byte **)&(this->tPMenuItemLeftRightSlider).fMaxVal * 4;
  ProcessInput__25tPMenuItemLeftRightSliderR13tInputKeyTypeR13tPMenuCommand
            ((tPMenuItemLeftRightSlider *)this,keyval);
  *(int *)((this->tPMenuItemLeftRightSlider).tPMenuItemInteractive.tPMenuItem._vf + 4) = iVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__32tPMenuItemLeftRightSliderIndexedb(struct tPMenuItemLeftRightSliderIndexed *this /*$s0*/, void * selected /*$a1*/)
 // line 561, offset 0x800a7d28
	/* begin block 1 */
		// Start line: 562
		// Start offset: 0x800A7D28
		// Variables:
	// 		int *orgdata; // $s1
	/* end block 1 */
	// End offset: 0x800A7D28
	// End Line: 562

	/* begin block 2 */
		// Start line: 1184
	/* end block 2 */
	// End Line: 1185

	/* begin block 3 */
		// Start line: 1187
	/* end block 3 */
	// End Line: 1188

	/* begin block 4 */
		// Start line: 1187
	/* end block 4 */
	// End Line: 1188

void Draw__32tPMenuItemLeftRightSliderIndexedb
               (tPMenuItemLeftRightSliderIndexed *this,void *selected)

{
  int iVar1;
  
  iVar1 = *(int *)((this->tPMenuItemLeftRightSlider).tPMenuItemInteractive.tPMenuItem._vf + 4);
  *(uint *)((this->tPMenuItemLeftRightSlider).tPMenuItemInteractive.tPMenuItem._vf + 4) =
       iVar1 + (uint)**(byte **)&(this->tPMenuItemLeftRightSlider).fMaxVal * 4;
  Draw__25tPMenuItemLeftRightSliderb((tPMenuItemLeftRightSlider *)this,selected);
  *(int *)((this->tPMenuItemLeftRightSlider).tPMenuItemInteractive.tPMenuItem._vf + 4) = iVar1;
  return;
}



// decompiled code
// original method signature: 
// struct tPMenuItemGoToMenuButton * /*$ra*/ __24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v(struct tPMenuItemGoToMenuButton *this /*$s0*/, unsigned int textDescription /*$a1*/, struct tPMenu *newMenu /*$s1*/, TDRFuncPtr___24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v3OnButtonPress OnButtonPress /*$s2*/)
 // line 573, offset 0x800a7d74
	/* begin block 1 */
		// Start line: 574
		// Start offset: 0x800A7D74
	/* end block 1 */
	// End offset: 0x800A7D74
	// End Line: 574

	/* begin block 2 */
		// Start line: 1205
	/* end block 2 */
	// End Line: 1206

	/* begin block 3 */
		// Start line: 1212
	/* end block 3 */
	// End Line: 1213

	/* begin block 4 */
		// Start line: 1212
	/* end block 4 */
	// End Line: 1213

tPMenuItemGoToMenuButton *
__24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v
          (tPMenuItemGoToMenuButton *this,uint textDescription,tPMenu *newMenu,
          TDRFuncPtr___24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v3OnButtonPress
          OnButtonPress)

{
  __21tPMenuItemInteractiveUi((tPMenuItemInteractive *)this,textDescription);
  *(undefined4 *)(this->tPMenuItemInteractive).tPMenuItem._vf = 0x8005617c;
  *(tPMenu **)((this->tPMenuItemInteractive).tPMenuItem._vf + 4) = newMenu;
  *(TDRFuncPtr___24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v3OnButtonPress *)
   &this->fNewMenu = OnButtonPress;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._24tPMenuItemGoToMenuButton(struct tPMenuItemGoToMenuButton *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 580, offset 0x800a7dc8
	/* begin block 1 */
		// Start line: 581
		// Start offset: 0x800A7DC8
	/* end block 1 */
	// End offset: 0x800A7DC8
	// End Line: 581

	/* begin block 2 */
		// Start line: 1225
	/* end block 2 */
	// End Line: 1226

	/* begin block 3 */
		// Start line: 1229
	/* end block 3 */
	// End Line: 1230

	/* begin block 4 */
		// Start line: 1229
	/* end block 4 */
	// End Line: 1230

void ___24tPMenuItemGoToMenuButton(tPMenuItemGoToMenuButton *this,int __in_chrg)

{
  *(undefined4 *)(this->tPMenuItemInteractive).tPMenuItem._vf = 0x8005617c;
  ___21tPMenuItemInteractive((tPMenuItemInteractive *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// struct tPMenu * /*$ra*/ NextMenu__24tPMenuItemGoToMenuButton(struct tPMenuItemGoToMenuButton *this /*$a0*/)
 // line 584, offset 0x800a7df0
	/* begin block 1 */
		// Start line: 585
		// Start offset: 0x800A7DF0
	/* end block 1 */
	// End offset: 0x800A7DF0
	// End Line: 586

	/* begin block 2 */
		// Start line: 1233
	/* end block 2 */
	// End Line: 1234

	/* begin block 3 */
		// Start line: 1237
	/* end block 3 */
	// End Line: 1238

	/* begin block 4 */
		// Start line: 1237
	/* end block 4 */
	// End Line: 1238

	/* begin block 5 */
		// Start line: 1238
	/* end block 5 */
	// End Line: 1239

	/* begin block 6 */
		// Start line: 1238
	/* end block 6 */
	// End Line: 1239

tPMenu * NextMenu__24tPMenuItemGoToMenuButton(tPMenuItemGoToMenuButton *this)

{
  return *(tPMenu **)((this->tPMenuItemInteractive).tPMenuItem._vf + 4);
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__24tPMenuItemGoToMenuButtonR13tInputKeyTypeR13tPMenuCommand(struct tPMenuItemGoToMenuButton *this /*$s0*/, enum tInputKeyType *keyval /*$s2*/, struct tPMenuCommand *command /*$s1*/)
 // line 589, offset 0x800a7dfc
	/* begin block 1 */
		// Start line: 590
		// Start offset: 0x800A7DFC
	/* end block 1 */
	// End offset: 0x800A7E98
	// End Line: 605

	/* begin block 2 */
		// Start line: 1243
	/* end block 2 */
	// End Line: 1244

	/* begin block 3 */
		// Start line: 1247
	/* end block 3 */
	// End Line: 1248

	/* begin block 4 */
		// Start line: 1247
	/* end block 4 */
	// End Line: 1248

void ProcessInput__24tPMenuItemGoToMenuButtonR13tInputKeyTypeR13tPMenuCommand
               (tPMenuItemGoToMenuButton *this,tInputKeyType *keyval,tPMenuCommand *command)

{
  int iVar1;
  tPMenu *ptVar2;
  
  if (*keyval == kInput_KeyType_Cross) {
    AudioCmn_PlayPauseSound__Fi(4);
    iVar1 = *(int *)(this->tPMenuItemInteractive).tPMenuItem._vf;
    iVar1 = (**(code **)(iVar1 + 0x14))
                      ((int)&(this->tPMenuItemInteractive).tPMenuItem.fFlags +
                       (int)*(short *)(iVar1 + 0x10));
    if (iVar1 != 0) {
      command->type = kMPause_GoToMenu;
      iVar1 = *(int *)(this->tPMenuItemInteractive).tPMenuItem._vf;
      ptVar2 = (tPMenu *)
               (**(code **)(iVar1 + 0x14))
                         ((int)&(this->tPMenuItemInteractive).tPMenuItem.fFlags +
                          (int)*(short *)(iVar1 + 0x10));
      command->nextMenu = ptVar2;
    }
    if (this->fNewMenu != (tPMenu *)0x0) {
      (*(code *)this->fNewMenu)(command);
    }
    *keyval = kInput_KeyType_AlreadyProcessed;
  }
  return;
}



// decompiled code
// original method signature: 
// struct tPMenuItemCommandButton * /*$ra*/ __23tPMenuItemCommandButtonUi17tPMenuCommandType(struct tPMenuItemCommandButton *this /*$s0*/, unsigned int textDescription /*$a1*/, enum tPMenuCommandType command /*$s1*/)
 // line 613, offset 0x800a7eb0
	/* begin block 1 */
		// Start line: 614
		// Start offset: 0x800A7EB0
	/* end block 1 */
	// End offset: 0x800A7EB0
	// End Line: 614

	/* begin block 2 */
		// Start line: 1286
	/* end block 2 */
	// End Line: 1287

	/* begin block 3 */
		// Start line: 1295
	/* end block 3 */
	// End Line: 1296

	/* begin block 4 */
		// Start line: 1295
	/* end block 4 */
	// End Line: 1296

tPMenuItemCommandButton *
__23tPMenuItemCommandButtonUi17tPMenuCommandType
          (tPMenuItemCommandButton *this,uint textDescription,tPMenuCommandType command)

{
  __21tPMenuItemInteractiveUi((tPMenuItemInteractive *)this,textDescription);
  *(undefined4 *)(this->tPMenuItemInteractive).tPMenuItem._vf = 0x80056144;
  *(tPMenuCommandType *)((this->tPMenuItemInteractive).tPMenuItem._vf + 4) = command;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._23tPMenuItemCommandButton(struct tPMenuItemCommandButton *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 619, offset 0x800a7ef4
	/* begin block 1 */
		// Start line: 620
		// Start offset: 0x800A7EF4
	/* end block 1 */
	// End offset: 0x800A7EF4
	// End Line: 620

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

void ___23tPMenuItemCommandButton(tPMenuItemCommandButton *this,int __in_chrg)

{
  *(undefined4 *)(this->tPMenuItemInteractive).tPMenuItem._vf = 0x80056144;
  ___21tPMenuItemInteractive((tPMenuItemInteractive *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__23tPMenuItemCommandButtonR13tInputKeyTypeR13tPMenuCommand(struct tPMenuItemCommandButton *this /*$s0*/, enum tInputKeyType *keyval /*$s1*/, struct tPMenuCommand *command /*$s2*/)
 // line 623, offset 0x800a7f1c
	/* begin block 1 */
		// Start line: 624
		// Start offset: 0x800A7F1C
	/* end block 1 */
	// End offset: 0x800A7F64
	// End Line: 633

	/* begin block 2 */
		// Start line: 1313
	/* end block 2 */
	// End Line: 1314

	/* begin block 3 */
		// Start line: 1317
	/* end block 3 */
	// End Line: 1318

	/* begin block 4 */
		// Start line: 1317
	/* end block 4 */
	// End Line: 1318

void ProcessInput__23tPMenuItemCommandButtonR13tInputKeyTypeR13tPMenuCommand
               (tPMenuItemCommandButton *this,tInputKeyType *keyval,tPMenuCommand *command)

{
  if (*keyval == kInput_KeyType_Cross) {
    AudioCmn_PlayPauseSound__Fi(4);
    command->type = *(tPMenuCommandType *)((this->tPMenuItemInteractive).tPMenuItem._vf + 4);
    *keyval = kInput_KeyType_AlreadyProcessed;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ tPMenuConstructor__6tPMenuP10tPMenuItemPv(struct tPMenu *this /*$a0*/, struct tPMenuItem *firstItem /*$a1*/, void *ap /*$a2*/)
 // line 640, offset 0x800a7f7c
	/* begin block 1 */
		// Start line: 641
		// Start offset: 0x800A7F7C
		// Variables:
	// 		struct tPMenuItem *p; // $v1
	/* end block 1 */
	// End offset: 0x800A7FC0
	// End Line: 660

	/* begin block 2 */
		// Start line: 1343
	/* end block 2 */
	// End Line: 1344

	/* begin block 3 */
		// Start line: 1351
	/* end block 3 */
	// End Line: 1352

	/* begin block 4 */
		// Start line: 1351
	/* end block 4 */
	// End Line: 1352

	/* begin block 5 */
		// Start line: 1362
	/* end block 5 */
	// End Line: 1363

void tPMenuConstructor__6tPMenuP10tPMenuItemPv(tPMenu *this,tPMenuItem *firstItem,void *ap)

{
  _func_33 *p_Var1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  *(tPMenuItem **)this->fItemList = firstItem;
  this->fNumItems = 0;
  p_Var1 = *(_func_33 **)ap;
  this->fItemList[1] = p_Var1;
  if (p_Var1 != (_func_33 *)0x0) {
    iVar3 = 4;
    piVar4 = (int *)((int)ap + 4);
    do {
      this->fNumItems = this->fNumItems + 1;
      iVar2 = *piVar4;
      *(int *)((int)this->fItemList + iVar3 + 4) = iVar2;
      iVar3 = iVar3 + 4;
      piVar4 = piVar4 + 1;
    } while (iVar2 != 0);
  }
  return;
}



// decompiled code
// original method signature: 
// struct tPMenu * /*$ra*/ __6tPMenuP10tPMenuIteme(struct tPMenu *this /*$s0*/, struct tPMenuItem *firstItem /*stack 4*/)
 // line 669, offset 0x800a7fc8
	/* begin block 1 */
		// Start line: 670
		// Start offset: 0x800A7FC8
	/* end block 1 */
	// End offset: 0x800A7FC8
	// End Line: 670

	/* begin block 2 */
		// Start line: 1334
	/* end block 2 */
	// End Line: 1335

	/* begin block 3 */
		// Start line: 1420
	/* end block 3 */
	// End Line: 1421

	/* begin block 4 */
		// Start line: 1420
	/* end block 4 */
	// End Line: 1421

tPMenu * __6tPMenuP10tPMenuIteme(tPMenu *this,tPMenuItem *firstItem)

{
  undefined local_res8 [8];
  
  *(undefined4 *)this->_vf = 0x8005611c;
  this->fCurrentItem = 0;
  tPMenuConstructor__6tPMenuP10tPMenuItemPv(this,firstItem,local_res8);
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6tPMenu(struct tPMenu *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 679, offset 0x800a8014
	/* begin block 1 */
		// Start line: 680
		// Start offset: 0x800A8014
	/* end block 1 */
	// End offset: 0x800A8014
	// End Line: 680

	/* begin block 2 */
		// Start line: 1442
	/* end block 2 */
	// End Line: 1443

	/* begin block 3 */
		// Start line: 1446
	/* end block 3 */
	// End Line: 1447

	/* begin block 4 */
		// Start line: 1446
	/* end block 4 */
	// End Line: 1447

void ___6tPMenu(tPMenu *this,int __in_chrg)

{
  *(undefined4 *)this->_vf = 0x8005611c;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__6tPMenu(struct tPMenu *this /*$s1*/)
 // line 683, offset 0x800a8048
	/* begin block 1 */
		// Start line: 684
		// Start offset: 0x800A8048

		/* begin block 1.1 */
			// Start line: 684
			// Start offset: 0x800A8048

			/* begin block 1.1.1 */
				// Start line: 684
				// Start offset: 0x800A8048
				// Variables:
			// 		struct tPMenuItem *this; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 684
					// Start offset: 0x800A8048
				/* end block 1.1.1.1 */
				// End offset: 0x800A8048
				// End Line: 684
			/* end block 1.1.1 */
			// End offset: 0x800A8048
			// End Line: 684
		/* end block 1.1 */
		// End offset: 0x800A80BC
		// End Line: 690

		/* begin block 1.2 */
			// Start line: 694
			// Start offset: 0x800A80BC

			/* begin block 1.2.1 */
				// Start line: 694
				// Start offset: 0x800A80DC

				/* begin block 1.2.1.1 */
					// Start line: 694
					// Start offset: 0x800A80DC
				/* end block 1.2.1.1 */
				// End offset: 0x800A80DC
				// End Line: 694
			/* end block 1.2.1 */
			// End offset: 0x800A80DC
			// End Line: 694
		/* end block 1.2 */
		// End offset: 0x800A8120
		// End Line: 695
	/* end block 1 */
	// End offset: 0x800A8134
	// End Line: 695

	/* begin block 2 */
		// Start line: 1450
	/* end block 2 */
	// End Line: 1451

	/* begin block 3 */
		// Start line: 1454
	/* end block 3 */
	// End Line: 1455

	/* begin block 4 */
		// Start line: 1454
	/* end block 4 */
	// End Line: 1455

void Initialize__6tPMenu(tPMenu *this)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  
  this->fCurrentItem = 0;
  *(undefined **)&this->fHighlight = &DAT_00000001;
  puVar3 = (uint *)this->fItemList[this->fCurrentItem];
  bVar1 = false;
  if (((*puVar3 ^ 1) & 1) != 0) {
    iVar2 = (**(code **)(puVar3[2] + 0x2c))((int)puVar3 + (int)*(short *)(puVar3[2] + 0x28));
    bVar1 = iVar2 != 0;
  }
  if (!bVar1) {
    while (puVar3 = (uint *)this->fItemList[this->fCurrentItem], puVar3 != (uint *)0x0) {
      bVar1 = false;
      if (((*puVar3 & 1) != 0) ||
         (iVar2 = (**(code **)(puVar3[2] + 0x2c))((int)puVar3 + (int)*(short *)(puVar3[2] + 0x28)),
         iVar2 == 0)) {
        bVar1 = true;
      }
      if (!bVar1) {
        return;
      }
      this->fCurrentItem = this->fCurrentItem + 1;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ Debounce__6tPMenu(struct tPMenu *this /*$a0*/)
 // line 698, offset 0x800a8148
	/* begin block 1 */
		// Start line: 699
		// Start offset: 0x800A8148
	/* end block 1 */
	// End offset: 0x800A8148
	// End Line: 699

	/* begin block 2 */
		// Start line: 1483
	/* end block 2 */
	// End Line: 1484

	/* begin block 3 */
		// Start line: 1486
	/* end block 3 */
	// End Line: 1487

	/* begin block 4 */
		// Start line: 1486
	/* end block 4 */
	// End Line: 1487

void * Debounce__6tPMenu(tPMenu *this)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(this->fItemList[this->fCurrentItem] + 8);
  pvVar2 = (void *)(**(code **)(iVar1 + 0x1c))
                             (this->fItemList[this->fCurrentItem] + (int)*(short *)(iVar1 + 0x18));
  return pvVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CheckForDisabled__6tPMenu(struct tPMenu *this /*$s0*/)
 // line 703, offset 0x800a8194
	/* begin block 1 */
		// Start line: 704
		// Start offset: 0x800A81A8

		/* begin block 1.1 */
			// Start line: 705
			// Start offset: 0x800A81A8

			/* begin block 1.1.1 */
				// Start line: 706
				// Start offset: 0x800A81E4
				// Variables:
			// 		struct tPMenuItem *this; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 706
					// Start offset: 0x800A81E4
				/* end block 1.1.1.1 */
				// End offset: 0x800A81E4
				// End Line: 706
			/* end block 1.1.1 */
			// End offset: 0x800A81E4
			// End Line: 706
		/* end block 1.1 */
		// End offset: 0x800A8280
		// End Line: 713
	/* end block 1 */
	// End offset: 0x800A8288
	// End Line: 713

	/* begin block 2 */
		// Start line: 1492
	/* end block 2 */
	// End Line: 1493

	/* begin block 3 */
		// Start line: 1496
	/* end block 3 */
	// End Line: 1497

	/* begin block 4 */
		// Start line: 1496
	/* end block 4 */
	// End Line: 1497

void CheckForDisabled__6tPMenu(tPMenu *this)

{
  bool bVar1;
  int iVar2;
  _func_33 *p_Var3;
  
  while( true ) {
    iVar2 = *(int *)(this->fItemList[this->fCurrentItem] + 8);
    bVar1 = false;
    iVar2 = (**(code **)(iVar2 + 0x2c))
                      (this->fItemList[this->fCurrentItem] + (int)*(short *)(iVar2 + 0x28));
    if ((iVar2 == 0) || ((*(uint *)this->fItemList[this->fCurrentItem] & 1) != 0)) {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar2 = this->fCurrentItem;
    if (iVar2 < 1) {
      p_Var3 = this->fItemList[iVar2 + 1];
      while (p_Var3 != (_func_33 *)0x0) {
        iVar2 = this->fCurrentItem;
        this->fCurrentItem = iVar2 + 1;
        p_Var3 = this->fItemList[iVar2 + 2];
      }
    }
    else {
      this->fCurrentItem = iVar2 + -1;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__6tPMenuR13tInputKeyTypeR13tPMenuCommand(struct tPMenu *this /*$s0*/, enum tInputKeyType *keyval /*$s2*/, struct tPMenuCommand *command /*$s1*/)
 // line 718, offset 0x800a829c
	/* begin block 1 */
		// Start line: 719
		// Start offset: 0x800A829C

		/* begin block 1.1 */
			// Start line: 725
			// Start offset: 0x800A82F0

			/* begin block 1.1.1 */
				// Start line: 726
				// Start offset: 0x800A8334

				/* begin block 1.1.1.1 */
					// Start line: 740
					// Start offset: 0x800A83DC
					// Variables:
				// 		struct tPMenuItem *this; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 740
						// Start offset: 0x800A83DC
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A83DC
					// End Line: 740
				/* end block 1.1.1.1 */
				// End offset: 0x800A83DC
				// End Line: 740

				/* begin block 1.1.1.2 */
					// Start line: 755
					// Start offset: 0x800A848C
					// Variables:
				// 		struct tPMenuItem *this; // $v0

					/* begin block 1.1.1.2.1 */
						// Start line: 755
						// Start offset: 0x800A848C
					/* end block 1.1.1.2.1 */
					// End offset: 0x800A848C
					// End Line: 755
				/* end block 1.1.1.2 */
				// End offset: 0x800A848C
				// End Line: 755
			/* end block 1.1.1 */
			// End offset: 0x800A84F8
			// End Line: 773
		/* end block 1.1 */
		// End offset: 0x800A84F8
		// End Line: 773
	/* end block 1 */
	// End offset: 0x800A84F8
	// End Line: 773

	/* begin block 2 */
		// Start line: 1520
	/* end block 2 */
	// End Line: 1521

	/* begin block 3 */
		// Start line: 1526
	/* end block 3 */
	// End Line: 1527

	/* begin block 4 */
		// Start line: 1526
	/* end block 4 */
	// End Line: 1527

void ProcessInput__6tPMenuR13tInputKeyTypeR13tPMenuCommand
               (tPMenu *this,tInputKeyType *keyval,tPMenuCommand *command)

{
  bool bVar1;
  int iVar2;
  _func_33 *p_Var3;
  tInputKeyType tVar4;
  
  p_Var3 = this->fItemList[this->fCurrentItem];
  if (p_Var3 != (_func_33 *)0x0) {
    (**(code **)(*(int *)(p_Var3 + 8) + 0x24))
              (p_Var3 + (int)*(short *)(*(int *)(p_Var3 + 8) + 0x20));
  }
  tVar4 = *keyval;
  if (tVar4 == kInput_KeyType_Up) {
    AudioCmn_PlayPauseSound__Fi(3);
    do {
      iVar2 = this->fCurrentItem;
      if (iVar2 < 1) {
        p_Var3 = this->fItemList[iVar2 + 1];
        while (p_Var3 != (_func_33 *)0x0) {
          iVar2 = this->fCurrentItem;
          this->fCurrentItem = iVar2 + 1;
          p_Var3 = this->fItemList[iVar2 + 2];
        }
      }
      else {
        this->fCurrentItem = iVar2 + -1;
      }
      iVar2 = *(int *)(this->fItemList[this->fCurrentItem] + 8);
      bVar1 = false;
      iVar2 = (**(code **)(iVar2 + 0x2c))
                        (this->fItemList[this->fCurrentItem] + (int)*(short *)(iVar2 + 0x28));
      if ((iVar2 == 0) || ((*(uint *)this->fItemList[this->fCurrentItem] & 1) != 0)) {
        bVar1 = true;
      }
    } while (bVar1);
    *keyval = kInput_KeyType_AlreadyProcessed;
    return;
  }
  if ((int)tVar4 < 0x201) {
    if (tVar4 != kInput_KeyType_Triangle) {
      return;
    }
    AudioCmn_PlayPauseSound__Fi(4);
    command->type = kMPause_BackupMenu;
  }
  else {
    if (tVar4 == kInput_KeyType_Down) {
      AudioCmn_PlayPauseSound__Fi(3);
      do {
        iVar2 = this->fCurrentItem + 1;
        this->fCurrentItem = iVar2;
        if (this->fItemList[iVar2] == (_func_33 *)0x0) {
          this->fCurrentItem = 0;
        }
        iVar2 = *(int *)(this->fItemList[this->fCurrentItem] + 8);
        bVar1 = false;
        iVar2 = (**(code **)(iVar2 + 0x2c))
                          (this->fItemList[this->fCurrentItem] + (int)*(short *)(iVar2 + 0x28));
        if ((iVar2 == 0) || ((*(uint *)this->fItemList[this->fCurrentItem] & 1) != 0)) {
          bVar1 = true;
        }
      } while (bVar1);
      *keyval = kInput_KeyType_AlreadyProcessed;
      return;
    }
    if (tVar4 != kInput_KeyType_Start) {
      return;
    }
    AudioCmn_PlayPauseSound__Fi(4);
    command->type = kMPause_Continue;
  }
  *keyval = kInput_KeyType_AlreadyProcessed;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw__6tPMenu(struct tPMenu *this /*$s1*/)
 // line 783, offset 0x800a8510
	/* begin block 1 */
		// Start line: 784
		// Start offset: 0x800A8510

		/* begin block 1.1 */
			// Start line: 784
			// Start offset: 0x800A8510
			// Variables:
		// 		short item; // $s0

			/* begin block 1.1.1 */
				// Start line: 791
				// Start offset: 0x800A855C

				/* begin block 1.1.1.1 */
					// Start line: 793
					// Start offset: 0x800A857C

					/* begin block 1.1.1.1.1 */
						// Start line: 793
						// Start offset: 0x800A857C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 793
							// Start offset: 0x800A857C
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800A857C
						// End Line: 793
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A857C
					// End Line: 793
				/* end block 1.1.1.1 */
				// End offset: 0x800A85E4
				// End Line: 800
			/* end block 1.1.1 */
			// End offset: 0x800A85E4
			// End Line: 800
		/* end block 1.1 */
		// End offset: 0x800A85EC
		// End Line: 802
	/* end block 1 */
	// End offset: 0x800A85EC
	// End Line: 802

	/* begin block 2 */
		// Start line: 1648
	/* end block 2 */
	// End Line: 1649

	/* begin block 3 */
		// Start line: 1659
	/* end block 3 */
	// End Line: 1660

	/* begin block 4 */
		// Start line: 1659
	/* end block 4 */
	// End Line: 1660

void Draw__6tPMenu(tPMenu *this)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  short sVar5;
  
  CheckForDisabled__6tPMenu(this);
  sVar5 = 1;
  iVar2 = *(int *)(this->fItemList[0] + 8);
  gPause_CurrentY = (uchar *)0x62;
  (**(code **)(iVar2 + 0x34))(this->fItemList[0] + (int)*(short *)(iVar2 + 0x30),0);
  gPause_CurrentY = (uchar *)0x75;
  while( true ) {
    puVar3 = (uint *)this->fItemList[(int)sVar5];
    if (puVar3 == (uint *)0x0) break;
    if (((*puVar3 ^ 1) & 1) != 0) {
      if (this->fHighlight == (void *)0x0) {
        uVar1 = puVar3[2];
        uVar4 = 0;
      }
      else {
        uVar1 = puVar3[2];
        uVar4 = (uint)((int)sVar5 == this->fCurrentItem);
      }
      (**(code **)(uVar1 + 0x34))((int)puVar3 + (int)*(short *)(uVar1 + 0x30),uVar4);
      gPause_CurrentY = gPause_CurrentY + 0xd;
    }
    sVar5 = sVar5 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ NumEnabledItems__6tPMenu(struct tPMenu *this /*$a0*/)
 // line 805, offset 0x800a8600
	/* begin block 1 */
		// Start line: 806
		// Start offset: 0x800A8600
		// Variables:
	// 		int ret; // $a1

		/* begin block 1.1 */
			// Start line: 806
			// Start offset: 0x800A8600
			// Variables:
		// 		struct tPMenu *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 806
				// Start offset: 0x800A8600
			/* end block 1.1.1 */
			// End offset: 0x800A8600
			// End Line: 806
		/* end block 1.1 */
		// End offset: 0x800A8600
		// End Line: 806

		/* begin block 1.2 */
			// Start line: 806
			// Start offset: 0x800A8600
			// Variables:
		// 		int i; // $v1

			/* begin block 1.2.1 */
				// Start line: 809
				// Start offset: 0x800A8610

				/* begin block 1.2.1.1 */
					// Start line: 809
					// Start offset: 0x800A8610
					// Variables:
				// 		struct tPMenu *this; // $a0

					/* begin block 1.2.1.1.1 */
						// Start line: 809
						// Start offset: 0x800A8610
					/* end block 1.2.1.1.1 */
					// End offset: 0x800A8610
					// End Line: 809
				/* end block 1.2.1.1 */
				// End offset: 0x800A8610
				// End Line: 809

				/* begin block 1.2.1.2 */
					// Start line: 811
					// Start offset: 0x800A861C

					/* begin block 1.2.1.2.1 */
						// Start line: 811
						// Start offset: 0x800A861C
						// Variables:
					// 		struct tPMenuItem *this; // $v0

						/* begin block 1.2.1.2.1.1 */
							// Start line: 811
							// Start offset: 0x800A861C
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x800A861C
						// End Line: 811
					/* end block 1.2.1.2.1 */
					// End offset: 0x800A861C
					// End Line: 811
				/* end block 1.2.1.2 */
				// End offset: 0x800A863C
				// End Line: 812
			/* end block 1.2.1 */
			// End offset: 0x800A863C
			// End Line: 812
		/* end block 1.2 */
		// End offset: 0x800A8648
		// End Line: 813
	/* end block 1 */
	// End offset: 0x800A8648
	// End Line: 815

	/* begin block 2 */
		// Start line: 1703
	/* end block 2 */
	// End Line: 1704

	/* begin block 3 */
		// Start line: 1707
	/* end block 3 */
	// End Line: 1708

	/* begin block 4 */
		// Start line: 1707
	/* end block 4 */
	// End Line: 1708

int NumEnabledItems__6tPMenu(tPMenu *this)

{
  int iVar1;
  void **ppvVar2;
  int iVar3;
  
  iVar1 = 1;
  ppvVar2 = &this->fHighlight;
  iVar3 = this->fNumItems;
  while (iVar1 <= this->fNumItems) {
    if ((*(uint *)ppvVar2[2] & 1) != 0) {
      iVar3 = iVar3 + -1;
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + 1;
  }
  return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ ItemEnabledNum__6tPMenui(struct tPMenu *this /*$a0*/, int num /*$a2*/)
 // line 818, offset 0x800a8650
	/* begin block 1 */
		// Start line: 819
		// Start offset: 0x800A8650
		// Variables:
	// 		int ret; // $a1

		/* begin block 1.1 */
			// Start line: 820
			// Start offset: 0x800A8650
			// Variables:
		// 		int i; // $v1

			/* begin block 1.1.1 */
				// Start line: 821
				// Start offset: 0x800A8658

				/* begin block 1.1.1.1 */
					// Start line: 823
					// Start offset: 0x800A8664

					/* begin block 1.1.1.1.1 */
						// Start line: 823
						// Start offset: 0x800A8664
						// Variables:
					// 		struct tPMenuItem *this; // $v0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 823
							// Start offset: 0x800A8664
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800A8664
						// End Line: 823
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A8664
					// End Line: 823
				/* end block 1.1.1.1 */
				// End offset: 0x800A8684
				// End Line: 824
			/* end block 1.1.1 */
			// End offset: 0x800A8684
			// End Line: 824
		/* end block 1.1 */
		// End offset: 0x800A8690
		// End Line: 825
	/* end block 1 */
	// End offset: 0x800A8690
	// End Line: 826

	/* begin block 2 */
		// Start line: 1729
	/* end block 2 */
	// End Line: 1730

	/* begin block 3 */
		// Start line: 1733
	/* end block 3 */
	// End Line: 1734

	/* begin block 4 */
		// Start line: 1733
	/* end block 4 */
	// End Line: 1734

	/* begin block 5 */
		// Start line: 1734
	/* end block 5 */
	// End Line: 1735

	/* begin block 6 */
		// Start line: 1734
	/* end block 6 */
	// End Line: 1735

int ItemEnabledNum__6tPMenui(tPMenu *this,int num)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = num;
  while (iVar1 < num) {
    if ((*(uint *)this->fItemList[0] & 1) != 0) {
      iVar2 = iVar2 + -1;
    }
    this = (tPMenu *)&this->fHighlight;
    iVar1 = iVar1 + 1;
  }
  return iVar2;
}





