#include "THISDUST.H"
#include "FETEXTRENDER.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_SetFont__Fi(int size /*$a0*/)
 // line 72, offset 0x80020cd8
	/* begin block 1 */
		// Start line: 73
		// Start offset: 0x80020CD8
	/* end block 1 */
	// End offset: 0x80020D3C
	// End Line: 89

	/* begin block 2 */
		// Start line: 144
	/* end block 2 */
	// End Line: 145

	/* begin block 3 */
		// Start line: 144
	/* end block 3 */
	// End Line: 145

	/* begin block 4 */
		// Start line: 145
	/* end block 4 */
	// End Line: 146

	/* begin block 5 */
		// Start line: 145
	/* end block 5 */
	// End Line: 146

void FETextRender_SetFont__Fi(int size)

{
  char *f1;
  
  if ((int)currentSize != size) {
    currentSize = (short)size;
    f1 = font12;
    if ((currentSize != 0) && (f1 = fontTitle, currentSize != 3)) {
      f1 = font18;
    }
    Font_SwitchFont__FPc(f1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_FullTextRGB__FPcssics(char *sMenuText /*$a0*/, short x /*$s2*/, short y /*$s5*/, int col /*$s7*/, int size /*stack 16*/, int justify /*stack 20*/)
 // line 94, offset 0x80020d4c
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x80020D4C
		// Variables:
	// 		char *str; // $s1
	// 		char buffer[128]; // stack offset -168
	/* end block 1 */
	// End offset: 0x80020E94
	// End Line: 128

	/* begin block 2 */
		// Start line: 183
	/* end block 2 */
	// End Line: 184

	/* begin block 3 */
		// Start line: 189
	/* end block 3 */
	// End Line: 190

	/* begin block 4 */
		// Start line: 189
	/* end block 4 */
	// End Line: 190

void FETextRender_FullTextRGB__FPcssics
               (char *sMenuText,short x,short y,int col,int size,int justify)

{
  short sVar1;
  int color;
  uint uVar2;
  char acStack168 [128];
  
  FETextRender_SetFont__Fi(size & 0xff);
  if ((char)size == '\0') {
    sprintf(acStack168,(char *)&PTR_DAT_80010fc4,sMenuText);
    s_lower__FPc(acStack168);
    sMenuText = acStack168;
  }
  sVar1 = (short)justify;
  if (((sVar1 == 1) || (sVar1 == 4)) || (sVar1 == 6)) {
    color = textpixels(sMenuText);
    sVar1 = (short)color;
  }
  else {
    if ((sVar1 != 2) && (sVar1 != 5)) goto LAB_80020e24;
    uVar2 = textpixels(sMenuText);
    sVar1 = (short)((int)((uVar2 >> 0x1f) + uVar2) >> 1);
  }
  x = x - sVar1;
LAB_80020e24:
  color = 1;
  if (gSemiTransText != (void *)0x0) {
    color = 0xf;
  }
  Font_TextColor__Fi(color);
  Font_TextTint__Fi(col);
  Font_TextXY__FPcii(sMenuText,(int)x,(int)y);
  if ((justify - 3U & 0xffff) < 3) {
    Font_TextTint__Fi(0);
    Font_TextXY__FPcii(sMenuText,(int)x + 2,(int)y + 1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_FullText__FPcss13tMenuTextType14tMenuTextStates(char *sMenuText /*$a0*/, short x /*$a1*/, short y /*$a2*/, enum tMenuTextType textType /*$a3*/, enum tMenuTextState textState /*stack 16*/, int justify /*stack 20*/)
 // line 136, offset 0x80020ec0
	/* begin block 1 */
		// Start line: 137
		// Start offset: 0x80020EC0
		// Variables:
	// 		int textcol; // $a3
	/* end block 1 */
	// End offset: 0x80020EC0
	// End Line: 137

	/* begin block 2 */
		// Start line: 295
	/* end block 2 */
	// End Line: 296

	/* begin block 3 */
		// Start line: 304
	/* end block 3 */
	// End Line: 305

	/* begin block 4 */
		// Start line: 304
	/* end block 4 */
	// End Line: 305

void FETextRender_FullText__FPcss13tMenuTextType14tMenuTextStates
               (char *sMenuText,short x,short y,tMenuTextType textType,tMenuTextState textState,
               int justify)

{
  FETextRender_FullTextRGB__FPcssics
            (sMenuText,x,y,kRGBVals[(uint)(byte)(&CHAR_09h_800515bb)[textState + textType * 6]],
             (uint)(byte)(&textDefinitions)[textType * 6],(int)(short)justify);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates(int fade /*$a0*/, char *sMenuText /*$s5*/, short x /*$a2*/, short y /*$a3*/, enum tMenuTextType textType /*stack 16*/, enum tMenuTextState textState /*stack 20*/, int justify /*stack 24*/)
 // line 144, offset 0x80020f44
	/* begin block 1 */
		// Start line: 145
		// Start offset: 0x80020F44
	/* end block 1 */
	// End offset: 0x80020F44
	// End Line: 145

	/* begin block 2 */
		// Start line: 326
	/* end block 2 */
	// End Line: 327

	/* begin block 3 */
		// Start line: 331
	/* end block 3 */
	// End Line: 332

	/* begin block 4 */
		// Start line: 331
	/* end block 4 */
	// End Line: 332

void FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
               (int fade,char *sMenuText,short x,short y,tMenuTextType textType,
               tMenuTextState textState,int justify)

{
  int col;
  
  col = CalcFadeVal__Fii(kRGBVals[(uint)(byte)(&CHAR_09h_800515bb)[textState + textType * 6]],fade);
  FETextRender_FullTextRGB__FPcssics
            (sMenuText,x,y,col,(uint)(byte)(&textDefinitions)[textType * 6],(int)(short)justify);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_MenuTextPositioned__Fsss14tMenuTextState13tMenuTextType(short index /*$a0*/, short x /*$a1*/, short y /*$a2*/, enum tMenuTextState textState /*$s3*/, enum tMenuTextType textType /*stack 16*/)
 // line 152, offset 0x80021014
	/* begin block 1 */
		// Start line: 153
		// Start offset: 0x80021014
	/* end block 1 */
	// End offset: 0x80021058
	// End Line: 156

	/* begin block 2 */
		// Start line: 348
	/* end block 2 */
	// End Line: 349

	/* begin block 3 */
		// Start line: 353
	/* end block 3 */
	// End Line: 354

	/* begin block 4 */
		// Start line: 353
	/* end block 4 */
	// End Line: 354

void FETextRender_MenuTextPositioned__Fsss14tMenuTextState13tMenuTextType
               (short index,short x,short y,tMenuTextState textState,tMenuTextType textType)

{
  if (textType == textType_NumTypes) {
    textType = TextSys_WordFlags__Fi((int)index);
  }
  FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
            (index,x,y,(ushort)(byte)s__800515b9[textType * 6],textState,textType);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_MenuTextFade__Fis14tMenuTextState13tMenuTextType(int fade /*$s5*/, short index /*$a1*/, enum tMenuTextState textState /*$s4*/, enum tMenuTextType textType /*$s0*/)
 // line 171, offset 0x800210b4
	/* begin block 1 */
		// Start line: 172
		// Start offset: 0x800210B4
		// Variables:
	// 		int x; // $s3
	// 		int y; // $s2
	/* end block 1 */
	// End offset: 0x80021118
	// End Line: 180

	/* begin block 2 */
		// Start line: 338
	/* end block 2 */
	// End Line: 339

	/* begin block 3 */
		// Start line: 379
	/* end block 3 */
	// End Line: 380

	/* begin block 4 */
		// Start line: 379
	/* end block 4 */
	// End Line: 380

void FETextRender_MenuTextFade__Fis14tMenuTextState13tMenuTextType
               (int fade,short index,tMenuTextState textState,tMenuTextType textType)

{
  int iVar1;
  int iVar2;
  int wordnum;
  
  wordnum = (int)index;
  iVar1 = TextSys_WordX__Fi(wordnum);
  iVar2 = TextSys_WordY__Fi(wordnum);
  if (textType == textType_NumTypes) {
    textType = TextSys_WordFlags__Fi(wordnum);
  }
  FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType
            (fade,index,(short)iVar1,(short)iVar2,(uint)(byte)s__800515b9[textType * 6],textState,
             textType);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType(short index /*$a0*/, short x /*$a1*/, short y /*$a2*/, short justify /*$a3*/, enum tMenuTextState state /*stack 16*/, enum tMenuTextType type /*stack 20*/)
 // line 193, offset 0x80021180
	/* begin block 1 */
		// Start line: 194
		// Start offset: 0x80021180
	/* end block 1 */
	// End offset: 0x80021180
	// End Line: 194

	/* begin block 2 */
		// Start line: 382
	/* end block 2 */
	// End Line: 383

	/* begin block 3 */
		// Start line: 419
	/* end block 3 */
	// End Line: 420

	/* begin block 4 */
		// Start line: 419
	/* end block 4 */
	// End Line: 420

void FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
               (short index,short x,short y,short justify,tMenuTextState state,tMenuTextType type)

{
  FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType
            (0,index,x,y,(int)justify,state,type);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType(int fade /*$s5*/, short index /*$a1*/, short x /*$a2*/, short y /*$a3*/, int justify /*stack 16*/, enum tMenuTextState textState /*stack 20*/, enum tMenuTextType textType /*stack 24*/)
 // line 198, offset 0x800211d4
	/* begin block 1 */
		// Start line: 199
		// Start offset: 0x800211D4
	/* end block 1 */
	// End offset: 0x80021280
	// End Line: 213

	/* begin block 2 */
		// Start line: 427
	/* end block 2 */
	// End Line: 428

	/* begin block 3 */
		// Start line: 431
	/* end block 3 */
	// End Line: 432

	/* begin block 4 */
		// Start line: 431
	/* end block 4 */
	// End Line: 432

void FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType
               (int fade,short index,short x,short y,int justify,tMenuTextState textState,
               tMenuTextType textType)

{
  char *sMenuText;
  
  if (((int)(short)justify == 6) || (textType == textType_Title)) {
    FETextRender_Title__Fs(index);
  }
  else {
    if (textType == textType_NumTypes) {
      textType = TextSys_WordFlags__Fi((int)index);
    }
    sMenuText = TextSys_Word__Fi((int)index);
    FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates
              (fade,sMenuText,x,y,textType,textState,(int)(short)justify);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FETextRender_WordWrapTextRGBJustify__FPcR4RECTiiib(char *str /*$s0*/, struct RECT *r /*$s7*/, int col /*stack 8*/, int justify /*stack 12*/, int size /*stack 16*/, void * JustGrabHeight /*stack 20*/)
 // line 216, offset 0x800212a4
	/* begin block 1 */
		// Start line: 217
		// Start offset: 0x800212A4
		// Variables:
	// 		int OriginalY; // stack offset -56
	// 		short x; // $v1
	// 		unsigned short index1; // $s4
	// 		unsigned short index2; // $s1
	// 		long strLength; // $fp
	// 		char buffer[128]; // stack offset -696
	// 		char source[512]; // stack offset -568
	// 		short spacing; // stack offset -48
	/* end block 1 */
	// End offset: 0x800216DC
	// End Line: 356

	/* begin block 2 */
		// Start line: 464
	/* end block 2 */
	// End Line: 465

	/* begin block 3 */
		// Start line: 467
	/* end block 3 */
	// End Line: 468

	/* begin block 4 */
		// Start line: 467
	/* end block 4 */
	// End Line: 468

int FETextRender_WordWrapTextRGBJustify__FPcR4RECTiiib
              (char *str,RECT *r,int col,int justify,int size,void *JustGrabHeight)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  int color;
  uint uVar6;
  uint uVar7;
  undefined4 uStack696;
  undefined4 local_238 [128];
  int local_38;
  short local_30;
  
  local_38 = (int)r->y;
  FETextRender_SetFont__Fi(size);
  if (size == 1) {
    local_30 = 10;
  }
  else {
    local_30 = 0x10;
    if ((size < 2) && (size == 0)) {
      local_30 = 8;
    }
  }
  uVar7 = 0;
  sVar2 = strlen(str);
  color = 1;
  if (gSemiTransText != (void *)0x0) {
    color = 0xf;
  }
  Font_TextColor__Fi(color);
  Font_TextTint__Fi(col);
  blockmove((undefined4 *)str,local_238,sVar2 + 1);
  if (size == 0) {
    s_lower__FPc((char *)local_238);
  }
  if (0 < (int)sVar2) {
    uVar3 = 0;
    do {
      cVar1 = *(char *)((int)local_238 + uVar3);
      uVar3 = uVar7;
      while (cVar1 == ' ') {
        uVar3 = uVar3 + 1;
        cVar1 = *(char *)((int)local_238 + (uVar3 & 0xffff));
      }
      uVar7 = uVar3 + ((int)((uint)(ushort)r->w << 0x10) >> 0x13) + 10;
      uVar6 = uVar3 & 0xffff;
      if ((int)sVar2 < (int)(uVar7 & 0xffff)) {
        uVar7 = sVar2;
      }
      color = (uVar7 & 0xffff) - uVar6;
      blockmove((undefined4 *)((int)local_238 + uVar6),&uStack696,color + 1);
      *(undefined *)((int)&uStack696 + color) = 0;
      color = textpixels((char *)&uStack696);
      uVar5 = uVar7 & 0xffff;
      if (r->w < (short)color) {
        do {
          if (*(char *)((int)local_238 + uVar5) == ' ') goto LAB_80021494;
          do {
            if (uVar5 <= uVar6) break;
            uVar7 = uVar7 - 1;
            uVar5 = uVar7 & 0xffff;
          } while (*(char *)((int)local_238 + uVar5) != ' ');
          cVar1 = *(char *)((int)local_238 + (uVar7 & 0xffff));
          while (cVar1 == ' ') {
LAB_80021494:
            if ((uVar7 & 0xffff) <= uVar6) break;
            uVar7 = uVar7 - 1;
            cVar1 = *(char *)((int)local_238 + (uVar7 & 0xffff));
          }
          *(undefined *)((int)&uStack696 + ((uVar7 & 0xffff) - uVar6) + 1) = 0;
          color = textpixels((char *)&uStack696);
        } while ((r->w < (short)color) && (uVar5 = uVar7 & 0xffff, uVar6 < (uVar7 & 0xffff)));
        uVar5 = uVar7 & 0xffff;
      }
      if (uVar5 == (uVar3 & 0xffff)) {
        uStack696._1_1_ = *(undefined *)((int)local_238 + uVar5 + 1);
        cVar1 = *(char *)((int)local_238 + uVar5);
        while ((cVar1 != '\0' && (*(char *)((int)local_238 + uVar5) != ' '))) {
          uVar7 = uVar7 + 1;
          uVar5 = uVar7 & 0xffff;
          cVar1 = *(char *)((int)local_238 + uVar5);
        }
        *(undefined *)((int)&uStack696 + ((uVar7 & 0xffff) - (uVar3 & 0xffff))) = 0;
      }
      uVar6 = uVar7 & 0xffff;
      cVar1 = *(char *)((int)local_238 + uVar6);
      while (cVar1 != '\0') {
        if (*(char *)((int)local_238 + uVar6) == ' ') goto LAB_800215d4;
        uVar7 = uVar7 + 1;
        uVar6 = uVar7 & 0xffff;
        cVar1 = *(char *)((int)local_238 + uVar6);
      }
      cVar1 = *(char *)((int)local_238 + (uVar7 & 0xffff));
      while (cVar1 == ' ') {
LAB_800215d4:
        uVar7 = uVar7 + 1;
        cVar1 = *(char *)((int)local_238 + (uVar7 & 0xffff));
      }
      *(undefined *)((int)&uStack696 + ((uVar7 & 0xffff) - (uVar3 & 0xffff))) = 0;
      color = textpixels((char *)&uStack696);
      sVar4 = r->x;
      if ((justify == 1) || (justify == 4)) {
        sVar4 = sVar4 - (short)color;
      }
      else {
        if ((justify == 2) || (justify == 5)) {
          sVar4 = sVar4 - ((short)color >> 1);
        }
      }
      if (JustGrabHeight == (void *)0x0) {
        Font_TextXY__FPcii((char *)&uStack696,(int)sVar4,(int)r->y);
        if (justify - 3U < 3) {
          Font_TextTint__Fi(0);
          Font_TextXY__FPcii((char *)&uStack696,(int)sVar4 + 2,(int)r->y + 1);
          Font_TextTint__Fi(col);
        }
      }
      r->y = r->y + local_30;
      uVar3 = uVar7 & 0xffff;
    } while ((int)(uVar7 & 0xffff) < (int)sVar2);
  }
  return (int)r->y - local_38;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_WordWrapTextRGB__FPcR4RECTi(char *str /*$a0*/, struct RECT *r /*$a1*/, int Col /*$a2*/)
 // line 359, offset 0x80021718
	/* begin block 1 */
		// Start line: 360
		// Start offset: 0x80021718
	/* end block 1 */
	// End offset: 0x80021718
	// End Line: 360

	/* begin block 2 */
		// Start line: 754
	/* end block 2 */
	// End Line: 755

	/* begin block 3 */
		// Start line: 758
	/* end block 3 */
	// End Line: 759

	/* begin block 4 */
		// Start line: 758
	/* end block 4 */
	// End Line: 759

void FETextRender_WordWrapTextRGB__FPcR4RECTi(char *str,RECT *r,int Col)

{
  FETextRender_WordWrapTextRGBJustify__FPcR4RECTiiib(str,r,Col,0,0,(void *)0x0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_WordWrapTextFade__FiPcR4RECT14tMenuTextState13tMenuTextType(int fade /*$t0*/, char *str /*$s2*/, struct RECT *r /*$s3*/, enum tMenuTextState textState /*$a3*/, enum tMenuTextType textType /*stack 16*/)
 // line 364, offset 0x80021740
	/* begin block 1 */
		// Start line: 365
		// Start offset: 0x80021740
	/* end block 1 */
	// End offset: 0x80021740
	// End Line: 365

	/* begin block 2 */
		// Start line: 765
	/* end block 2 */
	// End Line: 766

	/* begin block 3 */
		// Start line: 769
	/* end block 3 */
	// End Line: 770

	/* begin block 4 */
		// Start line: 769
	/* end block 4 */
	// End Line: 770

void FETextRender_WordWrapTextFade__FiPcR4RECT14tMenuTextState13tMenuTextType
               (int fade,char *str,RECT *r,tMenuTextState textState,tMenuTextType textType)

{
  int col;
  int iVar1;
  
  iVar1 = textType * 6;
  col = CalcFadeVal__Fii(kRGBVals[(uint)(byte)(&CHAR_09h_800515bb)[textState + iVar1]],fade);
  FETextRender_WordWrapTextRGBJustify__FPcR4RECTiiib
            (str,r,col,(uint)(byte)s__800515b9[iVar1],(uint)(byte)(&textDefinitions)[iVar1],
             (void *)0x0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_WordWrapText__FPcR4RECT14tMenuTextState13tMenuTextType(char *str /*$v0*/, struct RECT *r /*$v1*/, enum tMenuTextState textState /*$t0*/, enum tMenuTextType textType /*$a3*/)
 // line 375, offset 0x800217e8
	/* begin block 1 */
		// Start line: 376
		// Start offset: 0x800217E8
	/* end block 1 */
	// End offset: 0x800217E8
	// End Line: 376

	/* begin block 2 */
		// Start line: 801
	/* end block 2 */
	// End Line: 802

	/* begin block 3 */
		// Start line: 805
	/* end block 3 */
	// End Line: 806

	/* begin block 4 */
		// Start line: 805
	/* end block 4 */
	// End Line: 806

void FETextRender_WordWrapText__FPcR4RECT14tMenuTextState13tMenuTextType
               (char *str,RECT *r,tMenuTextState textState,tMenuTextType textType)

{
  FETextRender_WordWrapTextFade__FiPcR4RECT14tMenuTextState13tMenuTextType
            (0,str,r,textState,textType);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_WordWrapFade__FisR4RECT14tMenuTextState13tMenuTextType(int fade /*$s1*/, short index /*$a1*/, struct RECT *r /*$s2*/, enum tMenuTextState state /*$s3*/, enum tMenuTextType type /*stack 16*/)
 // line 380, offset 0x80021824
	/* begin block 1 */
		// Start line: 381
		// Start offset: 0x80021824
	/* end block 1 */
	// End offset: 0x80021824
	// End Line: 381

	/* begin block 2 */
		// Start line: 812
	/* end block 2 */
	// End Line: 813

	/* begin block 3 */
		// Start line: 816
	/* end block 3 */
	// End Line: 817

	/* begin block 4 */
		// Start line: 816
	/* end block 4 */
	// End Line: 817

void FETextRender_WordWrapFade__FisR4RECT14tMenuTextState13tMenuTextType
               (int fade,short index,RECT *r,tMenuTextState state,tMenuTextType type)

{
  char *str;
  
  str = TextSys_Word__Fi((int)index);
  FETextRender_WordWrapTextFade__FiPcR4RECT14tMenuTextState13tMenuTextType(fade,str,r,state,type);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_WordWrap__FsR4RECT14tMenuTextState13tMenuTextType(short index /*$a0*/, struct RECT *r /*$v0*/, enum tMenuTextState textState /*$v1*/, enum tMenuTextType textType /*$a3*/)
 // line 388, offset 0x8002188c
	/* begin block 1 */
		// Start line: 389
		// Start offset: 0x8002188C
	/* end block 1 */
	// End offset: 0x8002188C
	// End Line: 389

	/* begin block 2 */
		// Start line: 829
	/* end block 2 */
	// End Line: 830

	/* begin block 3 */
		// Start line: 834
	/* end block 3 */
	// End Line: 835

	/* begin block 4 */
		// Start line: 834
	/* end block 4 */
	// End Line: 835

void FETextRender_WordWrap__FsR4RECT14tMenuTextState13tMenuTextType
               (short index,RECT *r,tMenuTextState textState,tMenuTextType textType)

{
  FETextRender_WordWrapFade__FisR4RECT14tMenuTextState13tMenuTextType(0,index,r,textState,textType);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FETextRender_WordWrapHeight__FsPc(short width /*$a0*/, char *str /*$a1*/)
 // line 394, offset 0x800218c8
	/* begin block 1 */
		// Start line: 395
		// Start offset: 0x800218C8
		// Variables:
	// 		struct RECT r; // stack offset -16
	/* end block 1 */
	// End offset: 0x800218C8
	// End Line: 395

	/* begin block 2 */
		// Start line: 842
	/* end block 2 */
	// End Line: 843

	/* begin block 3 */
		// Start line: 847
	/* end block 3 */
	// End Line: 848

	/* begin block 4 */
		// Start line: 847
	/* end block 4 */
	// End Line: 848

int FETextRender_WordWrapHeight__FsPc(short width,char *str)

{
  int iVar1;
  RECT local_10;
  
  local_10.h = 500;
  local_10.x = 0;
  local_10.y = 0;
  local_10.w = width;
  iVar1 = FETextRender_WordWrapTextRGBJustify__FPcR4RECTiiib(str,&local_10,0,0,0,&DAT_00000001);
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_Title__Fs(short index /*$a0*/)
 // line 420, offset 0x80021914
	/* begin block 1 */
		// Start line: 421
		// Start offset: 0x80021914
		// Variables:
	// 		char upstr[80]; // stack offset -104
	// 		struct RECT r; // stack offset -24
	// 		short offset; // $s0

		/* begin block 1.1 */
			// Start line: 421
			// Start offset: 0x80021914

			/* begin block 1.1.1 */
				// Start line: 421
				// Start offset: 0x80021914
				// Variables:
			// 		struct tFEApplication *this; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 421
					// Start offset: 0x80021914
				/* end block 1.1.1.1 */
				// End offset: 0x80021914
				// End Line: 421
			/* end block 1.1.1 */
			// End offset: 0x80021914
			// End Line: 421
		/* end block 1.1 */
		// End offset: 0x80021940
		// End Line: 427
	/* end block 1 */
	// End offset: 0x80021940
	// End Line: 429

	/* begin block 2 */
		// Start line: 880
	/* end block 2 */
	// End Line: 881

	/* begin block 3 */
		// Start line: 903
	/* end block 3 */
	// End Line: 904

	/* begin block 4 */
		// Start line: 903
	/* end block 4 */
	// End Line: 904

void FETextRender_Title__Fs(short index)

{
  char *__src;
  int iVar1;
  ushort uVar2;
  char acStack104 [80];
  short local_18;
  short local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  uVar2 = 0;
  if (*(char *)&(FEApp->helpPopup).numItems == '\x01') {
    uVar2 = 0x69;
  }
  __src = TextSys_Word__Fi((int)index);
  strcpy(acStack104,__src);
  s_lower__FPc(acStack104);
  FETextRender_FullText__FPcss13tMenuTextType14tMenuTextStates
            (acStack104,0x30,uVar2 | 0x10,textType_Title,textState_Selected,0);
  local_18 = 0x2b;
  local_16 = uVar2 + 0x12;
  iVar1 = textpixels(acStack104);
  local_14 = (undefined2)(iVar1 + 10);
  local_12 = 0xc;
  PSXDrawTransSquare__Fiiiiis(0,(int)local_18,(int)local_16,(iVar1 + 10) * 0x10000 >> 0x10,0xc,2);
  FeDraw_SetABRMode__Fi(0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETextRender_SetABR__Fib(int abr /*$a0*/, void * trans /*$a1*/)
 // line 441, offset 0x800219e8
	/* begin block 1 */
		// Start line: 442
		// Start offset: 0x800219E8
	/* end block 1 */
	// End offset: 0x800219E8
	// End Line: 442

	/* begin block 2 */
		// Start line: 943
	/* end block 2 */
	// End Line: 944

	/* begin block 3 */
		// Start line: 947
	/* end block 3 */
	// End Line: 948

	/* begin block 4 */
		// Start line: 947
	/* end block 4 */
	// End Line: 948

void FETextRender_SetABR__Fib(int abr,void *trans)

{
  gSemiTransText = trans;
  Font_SetABR__Fi(abr);
  return;
}





