#include "THISDUST.H"
#include "FONT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Font_TextColor__Fi(int color /*$a0*/)
 // line 83, offset 0x800cb20c
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x800CB20C
	/* end block 1 */
	// End offset: 0x800CB20C
	// End Line: 85

	/* begin block 2 */
		// Start line: 166
	/* end block 2 */
	// End Line: 167

	/* begin block 3 */
		// Start line: 166
	/* end block 3 */
	// End Line: 167

	/* begin block 4 */
		// Start line: 167
	/* end block 4 */
	// End Line: 168

	/* begin block 5 */
		// Start line: 167
	/* end block 5 */
	// End Line: 168

void Font_TextColor__Fi(int color)

{
  uint uVar1;
  
  uVar1 = (uint)(ushort)font_clutx + color * 0x10;
  DAT_8011fdbc = (short)uVar1;
  gFontClut = DAT_8011fdbe << 6 | (ushort)(uVar1 >> 4) & 0x3f;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Font_TextTint__Fi(int rgb /*$a0*/)
 // line 89, offset 0x800cb244
	/* begin block 1 */
		// Start line: 90
		// Start offset: 0x800CB244
	/* end block 1 */
	// End offset: 0x800CB244
	// End Line: 91

	/* begin block 2 */
		// Start line: 176
	/* end block 2 */
	// End Line: 177

	/* begin block 3 */
		// Start line: 180
	/* end block 3 */
	// End Line: 181

	/* begin block 4 */
		// Start line: 180
	/* end block 4 */
	// End Line: 181

	/* begin block 5 */
		// Start line: 181
	/* end block 5 */
	// End Line: 182

	/* begin block 6 */
		// Start line: 181
	/* end block 6 */
	// End Line: 182

void Font_TextTint__Fi(int rgb)

{
  font_tint = rgb & 0xffffffU | 0x66000000;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Font_SetABR__Fi(int abr /*$a1*/)
 // line 96, offset 0x800cb264
	/* begin block 1 */
		// Start line: 97
		// Start offset: 0x800CB264
	/* end block 1 */
	// End offset: 0x800CB264
	// End Line: 97

	/* begin block 2 */
		// Start line: 188
	/* end block 2 */
	// End Line: 189

	/* begin block 3 */
		// Start line: 194
	/* end block 3 */
	// End Line: 195

	/* begin block 4 */
		// Start line: 194
	/* end block 4 */
	// End Line: 195

void Font_SetABR__Fi(int abr)

{
  uint uVar1;
  
  font_abr = abr;
  uVar1 = GetTPage((uint)*DAT_80135c28 & 3,abr,(*(int *)(DAT_80135c28 + 0xc) << 0x14) >> 0x14,
                   (*(int *)(DAT_80135c28 + 0xc) << 4) >> 0x14);
  font_currentTPage = (ushort)uVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Font_Blit__FiiPviiP12charactertbli(int x /*$a0*/, int y /*$a1*/, void *src /*$a2*/, int u /*$a3*/, int v /*stack 16*/, struct charactertbl *ch /*stack 20*/)
 // line 128, offset 0x800cb2ac
	/* begin block 1 */
		// Start line: 129
		// Start offset: 0x800CB2AC
		// Variables:
	// 		int width; // $t7
	// 		int height; // $t0
	// 		struct SPRT *sprt; // $t1
	// 		int dv; // $a2
	/* end block 1 */
	// End offset: 0x800CB2AC
	// End Line: 129

	/* begin block 2 */
		// Start line: 236
	/* end block 2 */
	// End Line: 237

	/* begin block 3 */
		// Start line: 263
	/* end block 3 */
	// End Line: 264

	/* begin block 4 */
		// Start line: 263
	/* end block 4 */
	// End Line: 264

void Font_Blit__FiiPviiP12charactertbli(int x,int y,void *src,int u,int v,charactertbl *ch)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  
  puVar4 = DAT_1f800004;
  puVar3 = DAT_1f800000;
  iVar6 = *(int *)((int)src + 0xc);
  bVar1 = ch->width;
  bVar2 = ch->height;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar7 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 5;
  *puVar3 = *puVar3 & 0xff000000 | uVar7;
  *(undefined *)((int)puVar4 + 3) = 4;
  uVar5 = font_tint;
  puVar4[2] = y << 0x10 | x;
  puVar4[1] = uVar5;
  uVar7 = (uint)gFontClut;
  puVar4[4] = (uint)bVar2 << 0x10 | (uint)bVar1;
  puVar4[3] = uVar7 << 0x10 | (((iVar6 << 4) >> 0x14) + v & 0xffU) << 8 | u;
  SetSemiTrans((int)puVar4,1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Font_ComputeColors__Fiiic(int colour /*$s4*/, int forecolour /*$a1*/, int backcolour /*$a2*/, char in_game /*$s6*/)
 // line 168, offset 0x800cb388
	/* begin block 1 */
		// Start line: 169
		// Start offset: 0x800CB388
		// Variables:
	// 		int i; // $t2
	// 		int r; // $v0
	// 		int g; // $v1
	// 		int b; // $a0
	// 		int fr; // $t8
	// 		int fg; // $t4
	// 		int fb; // $a3
	// 		int br; // $a2
	// 		int bg; // $a1
	// 		int bb; // $a0
	// 		int rgb; // $v0
	// 		int opaque; // $s5
	// 		struct CVECTOR fclr; // stack offset -64
	// 		struct CVECTOR bclr; // stack offset -56
	// 		int fr1; // $v1
	// 		int fg1; // $v0
	// 		int fb1; // $s0
	/* end block 1 */
	// End offset: 0x800CB64C
	// End Line: 255

	/* begin block 2 */
		// Start line: 425
	/* end block 2 */
	// End Line: 426

	/* begin block 3 */
		// Start line: 441
	/* end block 3 */
	// End Line: 442

	/* begin block 4 */
		// Start line: 441
	/* end block 4 */
	// End Line: 442

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Font_ComputeColors__Fiiic(int colour,int forecolour,int backcolour,char in_game)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  byte bStack63;
  byte bStack62;
  
  iVar7 = 0;
  bStack62 = (byte)((uint)forecolour >> 0x10);
  puVar8 = &shpfontclut;
  DAT_8011fdb4 = 0x10;
  bStack63 = (byte)((uint)forecolour >> 8);
  DAT_8011fdb6 = 1;
  DAT_8011fdb8 = 0;
  DAT_8011fdba = 0;
  _shpfontclut = 0x23;
  DAT_8011fdbc = (undefined2)font_clutx;
  DAT_8011fdbe = (undefined2)font_cluty;
  uVar1 = (int)((uint)bStack62 * 0x1f) / 0xff;
  uVar5 = ((int)((forecolour & 0xffU) * 0x1f) / 0xff) * 0x400;
  uVar3 = ((int)((uint)bStack63 * 0x1f) / 0xff) * 0x20;
  do {
    if ((in_game == '\0') || ((forecolour & 0xff000000U) != 0)) {
      iVar6 = 0xf - iVar7;
      if (3 < iVar7) {
        uVar4 = ((int)((forecolour & 0xffU) * iVar7 * 0x1f) / 0xef1 +
                (int)((backcolour & 0xffU) * iVar6 * 0x1f) / 0xef1) * 0x400 |
                ((int)((uint)bStack63 * iVar7 * 0x1f) / 0xef1 +
                (int)(((uint)backcolour >> 8 & 0xff) * iVar6 * 0x1f) / 0xef1) * 0x20 |
                (int)((uint)bStack62 * iVar7 * 0x1f) / 0xef1 +
                (int)(((uint)backcolour >> 0x10 & 0xff) * iVar6 * 0x1f) / 0xef1;
        if (colour == 0xf) {
          uVar4 = uVar4 | 0x8000;
        }
        goto LAB_800cb62c;
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      if ((7 < iVar7) &&
         (uVar2 = (ushort)uVar5 | (ushort)uVar3 | 0x8000 | (ushort)uVar1, 0xb < iVar7)) {
        uVar4 = uVar5 | uVar3 | uVar1;
LAB_800cb62c:
        uVar2 = (ushort)uVar4;
        if (uVar4 == 0) {
          uVar2 = 0x400;
        }
      }
    }
    *(ushort *)(puVar8 + 0x10) = uVar2;
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 2;
    if (0xf < iVar7) {
      Texture_Vramf__FP8shapetbliiii
                ((shapetbl *)&shpfontclut,font_clutx,font_cluty,font_clutx + colour * 0x10,
                 font_cluty);
      DrawSync(0);
      return;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// struct charactertbl * /*$ra*/ Font_textbsearch__FiPcUlUl(int key /*$s4*/, char *base /*$s2*/, unsigned long nmemb /*$a2*/, unsigned long size /*$s3*/)
 // line 262, offset 0x800cb6a0
	/* begin block 1 */
		// Start line: 263
		// Start offset: 0x800CB6A0
		// Variables:
	// 		int lim; // $s1
	// 		int cmp; // $v0
	// 		struct charactertbl *ch; // $s0
	/* end block 1 */
	// End offset: 0x800CB720
	// End Line: 281

	/* begin block 2 */
		// Start line: 806
	/* end block 2 */
	// End Line: 807

	/* begin block 3 */
		// Start line: 813
	/* end block 3 */
	// End Line: 814

	/* begin block 4 */
		// Start line: 813
	/* end block 4 */
	// End Line: 814

charactertbl * Font_textbsearch__FiPcUlUl(int key,char *base,ulong nmemb,ulong size)

{
  int iVar1;
  uint uVar2;
  charactertbl *pcVar3;
  
  if (nmemb != 0) {
    iVar1 = (int)nmemb >> 1;
    do {
      pcVar3 = (charactertbl *)((uchar *)base + iVar1 * size);
      uVar2 = geti((int *)pcVar3,2);
      if (key == uVar2) {
        return pcVar3;
      }
      if (0 < (int)(key - uVar2)) {
        base = (char *)(pcVar3->index + size);
        nmemb = nmemb - 1;
      }
      nmemb = (int)nmemb >> 1;
      iVar1 = (int)nmemb >> 1;
    } while (nmemb != 0);
  }
  return (charactertbl *)0x0;
}



// decompiled code
// original method signature: 
// struct charactertbl * /*$ra*/ Font_Getcharacter__Fi(int targetindex /*$s1*/)
 // line 286, offset 0x800cb740
	/* begin block 1 */
		// Start line: 287
		// Start offset: 0x800CB740
		// Variables:
	// 		struct charactertbl *ch; // $s0
	// 		char *base; // $s2
	/* end block 1 */
	// End offset: 0x800CB7B0
	// End Line: 300

	/* begin block 2 */
		// Start line: 860
	/* end block 2 */
	// End Line: 861

	/* begin block 3 */
		// Start line: 866
	/* end block 3 */
	// End Line: 867

	/* begin block 4 */
		// Start line: 866
	/* end block 4 */
	// End Line: 867

charactertbl * Font_Getcharacter__Fi(int targetindex)

{
  char *base;
  uint uVar1;
  charactertbl *pcVar2;
  
  base = DAT_80135c24;
  pcVar2 = (charactertbl *)(DAT_80135c24 + (targetindex + -0x20) * 0xb);
  uVar1 = geti((int *)pcVar2,2);
  if (uVar1 != targetindex) {
    pcVar2 = Font_textbsearch__FiPcUlUl(targetindex,base,DAT_80135c14,0xb);
  }
  return pcVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Font_SetBlitter__FPFiiPviiP12charactertbli_v(TDRFuncPtr_Font_SetBlitter__FPFiiPviiP12charactertbli_v0blitter blitter /*$a0*/)
 // line 305, offset 0x800cb7cc
	/* begin block 1 */
		// Start line: 306
		// Start offset: 0x800CB7CC
	/* end block 1 */
	// End offset: 0x800CB7CC
	// End Line: 307

	/* begin block 2 */
		// Start line: 913
	/* end block 2 */
	// End Line: 914

	/* begin block 3 */
		// Start line: 919
	/* end block 3 */
	// End Line: 920

	/* begin block 4 */
		// Start line: 919
	/* end block 4 */
	// End Line: 920

	/* begin block 5 */
		// Start line: 920
	/* end block 5 */
	// End Line: 921

	/* begin block 6 */
		// Start line: 920
	/* end block 6 */
	// End Line: 921

void Font_SetBlitter__FPFiiPviiP12charactertbli_v
               (TDRFuncPtr_Font_SetBlitter__FPFiiPviiP12charactertbli_v0blitter blitter)

{
  gCurrentBlitter = (uchar *)blitter;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Font_ReSetBlitter__Fv()
 // line 311, offset 0x800cb7d8
	/* begin block 1 */
		// Start line: 312
		// Start offset: 0x800CB7D8
	/* end block 1 */
	// End offset: 0x800CB7D8
	// End Line: 313

	/* begin block 2 */
		// Start line: 926
	/* end block 2 */
	// End Line: 927

	/* begin block 3 */
		// Start line: 931
	/* end block 3 */
	// End Line: 932

	/* begin block 4 */
		// Start line: 931
	/* end block 4 */
	// End Line: 932

	/* begin block 5 */
		// Start line: 932
	/* end block 5 */
	// End Line: 933

	/* begin block 6 */
		// Start line: 932
	/* end block 6 */
	// End Line: 933

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Font_ReSetBlitter__Fv(void)

{
  gCurrentBlitter = (uchar *)Font_Blit__FiiPviiP12charactertbli;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Font_SwitchFont__FPc(char *f1 /*$a0*/)
 // line 317, offset 0x800cb7ec
	/* begin block 1 */
		// Start line: 318
		// Start offset: 0x800CB7EC
	/* end block 1 */
	// End offset: 0x800CB7EC
	// End Line: 318

	/* begin block 2 */
		// Start line: 938
	/* end block 2 */
	// End Line: 939

	/* begin block 3 */
		// Start line: 943
	/* end block 3 */
	// End Line: 944

	/* begin block 4 */
		// Start line: 943
	/* end block 4 */
	// End Line: 944

void Font_SwitchFont__FPc(char *f1)

{
  uint uVar1;
  charactertbl *pcVar2;
  
  setfont((int)f1);
  DAT_80135c34 = 0;
  DAT_80135c38 = 0;
  DAT_80135c3c = 0;
  uVar1 = GetTPage((uint)*DAT_80135c28 & 3,font_abr,(*(int *)(DAT_80135c28 + 0xc) << 0x14) >> 0x14,
                   (*(int *)(DAT_80135c28 + 0xc) << 4) >> 0x14);
  font_currentTPage = (ushort)uVar1;
  pcVar2 = Font_Getcharacter__Fi(0x20);
  gFontSpaceWidth = pcVar2->advance;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Font_DeInit__Fv()
 // line 333, offset 0x800cb858
	/* begin block 1 */
		// Start line: 334
		// Start offset: 0x800CB858
	/* end block 1 */
	// End offset: 0x800CB890
	// End Line: 338

	/* begin block 2 */
		// Start line: 977
	/* end block 2 */
	// End Line: 978

	/* begin block 3 */
		// Start line: 981
	/* end block 3 */
	// End Line: 982

	/* begin block 4 */
		// Start line: 981
	/* end block 4 */
	// End Line: 982

	/* begin block 5 */
		// Start line: 982
	/* end block 5 */
	// End Line: 983

	/* begin block 6 */
		// Start line: 982
	/* end block 6 */
	// End Line: 983

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Font_DeInit__Fv(void)

{
  if (font_clutx != -1) {
    Texture_MenuReleaseClutId__Fs((short)font_cluty << 6 | (ushort)(font_clutx >> 4) & 0x3f);
  }
  font_clutx = -1;
  font_cluty = -1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Font_ExitFromGame__Fv()
 // line 342, offset 0x800cb8a8
	/* begin block 1 */
		// Start line: 343
		// Start offset: 0x800CB8A8
	/* end block 1 */
	// End offset: 0x800CB8A8
	// End Line: 344

	/* begin block 2 */
		// Start line: 997
	/* end block 2 */
	// End Line: 998

	/* begin block 3 */
		// Start line: 1001
	/* end block 3 */
	// End Line: 1002

	/* begin block 4 */
		// Start line: 1001
	/* end block 4 */
	// End Line: 1002

	/* begin block 5 */
		// Start line: 1002
	/* end block 5 */
	// End Line: 1003

	/* begin block 6 */
		// Start line: 1002
	/* end block 6 */
	// End Line: 1003

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Font_ExitFromGame__Fv(void)

{
  font_clutx = -1;
  font_cluty = -1;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Font_LoadFont__FPciic(char *f1 /*$s3*/, int x /*$s5*/, int y /*$s6*/, char in_game /*$s4*/)
 // line 348, offset 0x800cb8bc
	/* begin block 1 */
		// Start line: 349
		// Start offset: 0x800CB8BC
		// Variables:
	// 		struct shapetbl *shp; // $s2
	// 		int i; // $s0
	// 		int l; // $s1
	/* end block 1 */
	// End offset: 0x800CBA24
	// End Line: 390

	/* begin block 2 */
		// Start line: 1009
	/* end block 2 */
	// End Line: 1010

	/* begin block 3 */
		// Start line: 1013
	/* end block 3 */
	// End Line: 1014

	/* begin block 4 */
		// Start line: 1013
	/* end block 4 */
	// End Line: 1014

int Font_LoadFont__FPciic(char *f1,int x,int y,char in_game)

{
  shapetbl *shp;
  shapetbl *psVar1;
  int colour;
  int iVar2;
  int forecolour;
  long *plVar3;
  uint uVar4;
  
  setfont((int)f1);
  shp = DAT_80135c28;
  uVar4 = (int)*(short *)&DAT_80135c28->next * (int)*(short *)((int)&DAT_80135c28->next + 2);
  forecolour = (int)(uVar4 + (uVar4 >> 0x1f)) >> 1;
  colour = 0;
  psVar1 = DAT_80135c28;
  if (0 < forecolour) {
    do {
      colour = colour + 1;
      *(byte *)&psVar1->shapex =
           (byte)(((uint)*(byte *)&psVar1->shapex & 0xf) << 4) | *(byte *)&psVar1->shapex >> 4;
      psVar1 = (shapetbl *)((int)&shp->type + colour);
    } while (colour < forecolour);
  }
  if (font_clutx == -1) {
    Texture_GetClutId__FiPiT1(1,&font_clutx,&font_cluty);
  }
  colour = 0;
  Texture_Vramf__FP8shapetbliiii(shp,x,y,font_clutx,font_cluty);
  waitdraw();
  shp->type = (uint)*(byte *)&shp->type | (int)(&shpfontclut + -(int)shp) * 0x100;
  psVar1 = shp;
  if (0 < forecolour) {
    do {
      colour = colour + 1;
      *(byte *)&psVar1->shapex =
           (byte)(((uint)*(byte *)&psVar1->shapex & 0xf) << 4) | *(byte *)&psVar1->shapex >> 4;
      psVar1 = (shapetbl *)((int)&shp->type + colour);
    } while (colour < forecolour);
  }
  plVar3 = &colourRGB;
  colour = 0;
  do {
    forecolour = *plVar3;
    plVar3 = plVar3 + 1;
    iVar2 = colour + 1;
    Font_ComputeColors__Fiiic(colour,forecolour,0,in_game);
    colour = iVar2;
  } while (iVar2 < 0x10);
  Font_ReSetBlitter__Fv();
  Font_SwitchFont__FPc(f1);
  resizememadr((int)f1,(int)((int)DAT_80135c28 - (int)(f1 + -0x10)));
  Font_TextTint__Fi(0x808080);
  Font_TextColor__Fi(2);
  return y + (int)*(short *)((int)&shp->next + 2);
}



// decompiled code
// original method signature: 
// void /*$ra*/ Font_TextXY__FPcii(char *string /*$a0*/, int x /*$s2*/, int y /*$s6*/)
 // line 414, offset 0x800cba90
	/* begin block 1 */
		// Start line: 415
		// Start offset: 0x800CBA90
		// Variables:
	// 		char *str; // $s4
	// 		struct charactertbl *ch; // $s1
	// 		int code; // $s3

		/* begin block 1.1 */
			// Start line: 422
			// Start offset: 0x800CBACC

			/* begin block 1.1.1 */
				// Start line: 424
				// Start offset: 0x800CBAD4

				/* begin block 1.1.1.1 */
					// Start line: 427
					// Start offset: 0x800CBAE8

					/* begin block 1.1.1.1.1 */
						// Start line: 428
						// Start offset: 0x800CBAE8

						/* begin block 1.1.1.1.1.1 */
							// Start line: 431
							// Start offset: 0x800CBAFC
							// Variables:
						// 		int u; // $s0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800CBAFC
						// End Line: 434
					/* end block 1.1.1.1.1 */
					// End offset: 0x800CBAFC
					// End Line: 434
				/* end block 1.1.1.1 */
				// End offset: 0x800CBAFC
				// End Line: 434
			/* end block 1.1.1 */
			// End offset: 0x800CBB50
			// End Line: 447
		/* end block 1.1 */
		// End offset: 0x800CBB50
		// End Line: 447

		/* begin block 1.2 */
			// Start line: 450
			// Start offset: 0x800CBB5C
			// Variables:
		// 		struct DR_MODE *dr_mode; // $a0
		/* end block 1.2 */
		// End offset: 0x800CBB5C
		// End Line: 453
	/* end block 1 */
	// End offset: 0x800CBB5C
	// End Line: 453

	/* begin block 2 */
		// Start line: 1137
	/* end block 2 */
	// End Line: 1138

	/* begin block 3 */
		// Start line: 1152
	/* end block 3 */
	// End Line: 1153

	/* begin block 4 */
		// Start line: 1152
	/* end block 4 */
	// End Line: 1153

void Font_TextXY__FPcii(char *string,int x,int y)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  charactertbl *pcVar4;
  uint uVar5;
  uint uVar6;
  uint targetindex;
  
  targetindex = 0xffffffff;
  while (puVar3 = DAT_1f800004, puVar2 = DAT_1f800000, targetindex != 0) {
    bVar1 = *string;
    targetindex = (uint)bVar1;
    string = (char *)((byte *)string + 1);
    if (bVar1 < 0x21) {
      x = x + (uint)gFontSpaceWidth;
    }
    else {
      pcVar4 = Font_Getcharacter__Fi(targetindex);
      if (pcVar4 != (charactertbl *)0x0) {
        uVar5 = geti((int *)pcVar4->u,2);
        uVar6 = geti((int *)pcVar4->v,2);
        (*(code *)gCurrentBlitter)
                  (x + (int)pcVar4->xoffset,y + (int)pcVar4->yoffset,DAT_80135c28,uVar5,uVar6,pcVar4
                   ,DAT_80135c18);
        x = x + (int)pcVar4->advance;
      }
    }
  }
  uVar5 = (uint)font_currentTPage;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  targetindex = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 3;
  *puVar2 = *puVar2 & 0xff000000 | targetindex;
  SetDrawMode((int)puVar3,0,0,uVar5,(byte *)0x0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Font_GetUVWH__FcPiN41(char code /*$a0*/, int *u /*$s1*/, int *v /*$s2*/, int *w /*$s3*/, int *h /*stack 16*/, int *yoff /*stack 20*/)
 // line 541, offset 0x800cbbe8
	/* begin block 1 */
		// Start line: 542
		// Start offset: 0x800CBBE8
		// Variables:
	// 		struct charactertbl *ch; // $s0
	/* end block 1 */
	// End offset: 0x800CBBE8
	// End Line: 542

	/* begin block 2 */
		// Start line: 1338
	/* end block 2 */
	// End Line: 1339

	/* begin block 3 */
		// Start line: 1426
	/* end block 3 */
	// End Line: 1427

	/* begin block 4 */
		// Start line: 1426
	/* end block 4 */
	// End Line: 1427

void Font_GetUVWH__FcPiN41(char code,int *u,int *v,int *w,int *h,int *yoff)

{
  charactertbl *pcVar1;
  uint uVar2;
  
  pcVar1 = Font_Getcharacter__Fi((uint)(byte)code);
  uVar2 = geti((int *)pcVar1->u,2);
  *u = uVar2;
  uVar2 = geti((int *)pcVar1->v,2);
  *v = ((*(int *)(DAT_80135c28 + 0xc) << 0x14) >> 0x14) + uVar2;
  *w = (uint)pcVar1->width;
  *h = (uint)pcVar1->height;
  *yoff = (int)pcVar1->yoffset;
  return;
}





