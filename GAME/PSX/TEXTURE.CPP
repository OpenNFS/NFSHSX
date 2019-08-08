#include "NFS4.H"
#include "TEXTURE.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Texture_InitPaletteSharing__Fv()
 // line 64, offset 0x800df5b4
	/* begin block 1 */
		// Start line: 65
		// Start offset: 0x800DF5B4
	/* end block 1 */
	// End offset: 0x800DF5B4
	// End Line: 65

void Texture_InitPaletteSharing__Fv(void)
{
  uGp000015c8 = 0;
  uGp000015cc = 0;
  uGp000015d0 = reservememadr("pshare 4",0x800,0x10);
  uGp000015d4 = reservememadr("pshare 8",0x100,0x10);
  uGp000015d8 = reservememadr("pal 4bit",0x800,0x10);
  uGp000015dc = reservememadr("pal 8bit",0x100,0x10);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_DeInitPaletteSharing__Fv()
 // line 74, offset 0x800df630
	/* begin block 1 */
		// Start line: 75
		// Start offset: 0x800DF630
	/* end block 1 */
	// End offset: 0x800DF630
	// End Line: 75

void Texture_DeInitPaletteSharing__Fv(void)
{
  purgememadr(uGp000015d0);
  purgememadr(uGp000015d4);
  purgememadr(uGp000015d8);
  purgememadr(uGp000015dc);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_ResetPaletteSharing__Fv()
 // line 84, offset 0x800df678
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x800DF678
	/* end block 1 */
	// End offset: 0x800DF678
	// End Line: 86

void Texture_ResetPaletteSharing__Fv(void)
{
  uGp000015c8 = 0;
  uGp000015cc = 0;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Texture_CheckForSharedPalette__FiPcP12Draw_tPixMapi(int test /*$a0*/, char *data /*$a1*/, struct Draw_tPixMap *pmx /*$a2*/, int bpp /*$a3*/)
 // line 90, offset 0x800df688
	/* begin block 1 */
		// Start line: 91
		// Start offset: 0x800DF688

		/* begin block 1.1 */
			// Start line: 95
			// Start offset: 0x800DF6FC

			/* begin block 1.1.1 */
				// Start line: 96
				// Start offset: 0x800DF704

				/* begin block 1.1.1.1 */
					// Start line: 97
					// Start offset: 0x800DF704
					// Variables:
				// 		int i; // $t1

					/* begin block 1.1.1.1.1 */
						// Start line: 97
						// Start offset: 0x800DF710
						// Variables:
					// 		int j; // $a0
					// 		int *indata; // $t0
					// 		int *checkdata; // $a3
					/* end block 1.1.1.1.1 */
					// End offset: 0x800DF754
					// End Line: 108
				/* end block 1.1.1.1 */
				// End offset: 0x800DF75C
				// End Line: 115
			/* end block 1.1.1 */
			// End offset: 0x800DF75C
			// End Line: 115

			/* begin block 1.1.2 */
				// Start line: 119
				// Start offset: 0x800DF75C

				/* begin block 1.1.2.1 */
					// Start line: 120
					// Start offset: 0x800DF75C
					// Variables:
				// 		int i; // $t1

					/* begin block 1.1.2.1.1 */
						// Start line: 120
						// Start offset: 0x800DF768
						// Variables:
					// 		int j; // $a0
					// 		int *indata; // $t0
					// 		int *checkdata; // $a3
					/* end block 1.1.2.1.1 */
					// End offset: 0x800DF7AC
					// End Line: 131
				/* end block 1.1.2.1 */
				// End offset: 0x800DF7B4
				// End Line: 137
			/* end block 1.1.2 */
			// End offset: 0x800DF7B4
			// End Line: 137
		/* end block 1.1 */
		// End offset: 0x800DF7B4
		// End Line: 137
	/* end block 1 */
	// End offset: 0x800DF7B4
	// End Line: 140

int Texture_CheckForSharedPalette__FiPcP12Draw_tPixMapi( (int test,char *data,Draw_tPixMap *pmx,int bpp)
{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int **ppiVar8;
  int **ppiVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (test == 0) {
    return 0;
  }
  iVar7 = 0;
  ppiVar9 = ppiGp000015d8;
  ppiVar8 = ppiGp000015dc;
  if (bpp == 0) {
    while (iVar7 < iGp000015c8) {
      piVar5 = *ppiVar9;
      iVar4 = 0;
      piVar6 = (int *)data;
      do {
        iVar3 = *piVar5;
        piVar5 = piVar5 + 1;
        iVar1 = *piVar6;
        piVar6 = piVar6 + 1;
        if (iVar1 != iVar3) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 8);
      iVar1 = iGp000015d0;
      if (iVar4 == 8) goto LAB_800df6a0;
      iVar7 = iVar7 + 1;
      ppiVar9 = ppiVar9 + 1;
    }
  }
  else {
    while (iVar7 < iGp000015cc) {
      piVar5 = *ppiVar8;
      iVar4 = 0;
      piVar6 = (int *)data;
      do {
        iVar3 = *piVar5;
        piVar5 = piVar5 + 1;
        iVar1 = *piVar6;
        piVar6 = piVar6 + 1;
        if (iVar1 != iVar3) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x80);
      iVar1 = iGp000015d4;
      if (iVar4 == 0x80) {
LAB_800df6a0:
        puVar2 = *(undefined4 **)(iVar7 * 4 + iVar1);
        uVar10 = puVar2[1];
        uVar11 = puVar2[2];
        uVar12 = puVar2[3];
        *(undefined4 *)pmx = *puVar2;
        *(undefined4 *)&pmx->u1 = uVar10;
        *(undefined4 *)&pmx->u2 = uVar11;
        *(undefined4 *)&pmx->u3 = uVar12;
        return 1;
      }
      iVar7 = iVar7 + 1;
      ppiVar8 = ppiVar8 + 1;
    }
  }
  return 0;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_AddSharedPalette__FPcP12Draw_tPixMapi(char *ptr_to_data /*$a3*/, struct Draw_tPixMap *ptr_to_pmx /*$t0*/, int bpp /*$a2*/)
 // line 143, offset 0x800df7bc
	/* begin block 1 */
		// Start line: 144
		// Start offset: 0x800DF7BC
	/* end block 1 */
	// End offset: 0x800DF82C
	// End Line: 157

void Texture_AddSharedPalette__FPcP12Draw_tPixMapi( (char *ptr_to_data,Draw_tPixMap *ptr_to_pmx,int bpp)
{
  int iVar1;
  
  if (bpp == 0) {
    *(char **)(iGp000015c8 * 4 + iGp000015d8) = ptr_to_data;
    *(Draw_tPixMap **)(iGp000015c8 * 4 + iGp000015d0) = ptr_to_pmx;
    iGp000015c8 = iGp000015c8 + 1;
    return;
  }
  if (bpp == 1) {
    iVar1 = iGp000015cc * 4;
    iGp000015cc = iGp000015cc + 1;
    *(char **)(iVar1 + iGp000015dc) = ptr_to_data;
    *(Draw_tPixMap **)(iVar1 + iGp000015d4) = ptr_to_pmx;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_InitClut__Fv()
 // line 182, offset 0x800df834
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x800DF834
		// Variables:
	// 		int x; // $a3
	// 		int y; // $a1
	/* end block 1 */
	// End offset: 0x800DF930
	// End Line: 216

void Texture_InitClut__Fv(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  
  iVar5 = 0;
  iGp000015e4 = 0;
  do {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = iGp000015e4 * 2;
      iGp000015e4 = iGp000015e4 + 1;
      *(ushort *)(iVar1 + iGp000015e0) = (ushort)iVar2 | (ushort)(iVar5 >> 4) & 0x3f;
      iVar2 = iVar3 * 0x40;
    } while (iVar3 < 0x78);
    iVar5 = iVar5 + 0x10;
  } while (iVar5 < 0x100);
  iVar5 = 0;
  do {
    iVar2 = 0;
    uVar4 = 0x2000;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = iGp000015e4 * 2;
      iGp000015e4 = iGp000015e4 + 1;
      *(ushort *)(iVar3 + iGp000015e0) = uVar4 | (ushort)(iVar5 >> 4) & 0x3f;
      uVar4 = uVar4 + 0x40;
    } while (iVar2 < 0x20);
    iVar5 = iVar5 + 0x10;
  } while (iVar5 < 0x80);
  iVar5 = 0;
  iGp000015ec = 0;
  do {
    iVar2 = 0;
    uVar4 = 0x1e00;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = iGp000015ec * 2;
      iGp000015ec = iGp000015ec + 1;
      *(ushort *)(iVar3 + iGp000015e8) = uVar4 | (ushort)(iVar5 >> 4) & 0x3f;
      uVar4 = uVar4 + 0x40;
    } while (iVar2 < 8);
    iVar5 = iVar5 + 0x100;
  } while (iVar5 < 0x100);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_GetClutId__FiPiT1(int bpp /*$a0*/, int *xclut /*$a1*/, int *yclut /*$a2*/)
 // line 221, offset 0x800df938
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x800DF938
		// Variables:
	// 		short id; // $v1
	/* end block 1 */
	// End offset: 0x800DF984
	// End Line: 254

void Texture_GetClutId__FiPiT1(int bpp,int *xclut,int *yclut)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (bpp == 0) {
    iVar3 = iGp000015e4 + -1;
    iVar5 = iGp000015e0;
    iVar1 = iVar3;
    iVar2 = iGp000015ec;
    if (iGp000015e4 == 0) goto code_r0x800df988;
  }
  else {
    iVar3 = iGp000015ec + -1;
    iVar5 = iGp000015e8;
    iVar1 = iGp000015e4;
    iVar2 = iVar3;
    if (iGp000015ec == 0) goto code_r0x800df988;
  }
  iGp000015ec = iVar2;
  iGp000015e4 = iVar1;
  uVar4 = (uint)*(ushort *)(iVar3 * 2 + iVar5);
code_r0x800df988:
  *xclut = (uVar4 & 0x3f) << 4;
  *yclut = (int)(uVar4 << 0x10) >> 0x16;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_MenuReleaseClutId__Fs(short id /*$a0*/)
 // line 304, offset 0x800df9a4
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x800DF9A4
		// Variables:
	// 		int yclut; // $v0
	/* end block 1 */
	// End offset: 0x800DF9FC
	// End Line: 321

void Texture_MenuReleaseClutId__Fs(short id)
{
  if ((int)((uint)(ushort)id << 0x10) >> 0x16 < 0x1e8) {
    *(short *)(iGp000015ec * 2 + iGp000015e8) = id;
    iGp000015ec = iGp000015ec + 1;
    return;
  }
  *(short *)(iGp000015e4 * 2 + iGp000015e0) = id;
  iGp000015e4 = iGp000015e4 + 1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_ColorCarPalette__FPcT0i(char *from /*$a0*/, char *to /*$a1*/, int numentry /*$v1*/)
 // line 327, offset 0x800dfa04
	/* begin block 1 */
		// Start line: 328
		// Start offset: 0x800DFA04
	/* end block 1 */
	// End offset: 0x800DFA34
	// End Line: 335

void Texture_ColorCarPalette__FPcT0i(char *from,char *to,int numentry)
{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = numentry + -1;
  puVar3 = (undefined2 *)(from + iGp000015bc * 0x20);
  if (numentry != 0) {
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
      *(undefined2 *)to = uVar1;
      to = (char *)((undefined2 *)to + 1);
    } while (iVar2 != -1);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_CopyPalette__FPciii(char *data /*$a0*/, int width /*$a1*/, int x /*$a2*/, int y /*$a3*/)
 // line 339, offset 0x800dfa3c
	/* begin block 1 */
		// Start line: 340
		// Start offset: 0x800DFA3C
		// Variables:
	// 		int i; // $t0
	// 		short *dest; // $t1
	// 		short *source; // $a0
	/* end block 1 */
	// End offset: 0x800DFA84
	// End Line: 353

void Texture_CopyPalette__FPciii(char *data,int width,int x,int y)
{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar2 = (int *)(iGp000015c4 * 0x208 + iGp000015c0);
  piVar4 = piVar2 + 2;
  *piVar2 = x;
  piVar2[1] = y;
  if (0 < width) {
    do {
      uVar1 = *(undefined2 *)data;
      data = (char *)((undefined2 *)data + 1);
      iVar3 = iVar3 + 1;
      *(undefined2 *)piVar4 = uVar1;
      piVar4 = (int *)((int)piVar4 + 2);
    } while (iVar3 < width);
  }
  iGp000015c4 = iGp000015c4 + 1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_ProcessPaletteCopy__FP15Texture_pal8bitii(struct Texture_pal8bit *palCopy /*$a0*/, int palStart /*$a1*/, int palNum /*$s3*/)
 // line 356, offset 0x800dfa9c
	/* begin block 1 */
		// Start line: 357
		// Start offset: 0x800DFA9C
		// Variables:
	// 		struct RECT r; // stack offset -64
	// 		int i; // $s1
	// 		short tmpPal[16]; // stack offset -56
	/* end block 1 */
	// End offset: 0x800DFB2C
	// End Line: 378

void Texture_ProcessPaletteCopy__FP15Texture_pal8bitii( (Texture_pal8bit *palCopy,int palStart,int palNum)
{
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  char acStack56 [32];
  
  if (palCopy != (Texture_pal8bit *)0x0) {
    local_3c = 0x10;
    local_3a = 1;
    if (palStart < palNum) {
      palCopy = palCopy + palStart;
      do {
        Texture_ColorCarPalette__FPcT0i((char *)palCopy->pal,acStack56,0x10);
        local_40 = *(undefined2 *)&palCopy->x;
        palStart = palStart + 1;
        local_3e = *(undefined2 *)&palCopy->y;
        palCopy = palCopy + 1;
        LoadImage(&local_40,acStack56);
      } while (palStart < palNum);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_LoadImage__FP4RECTPUl(struct RECT *imgrect /*$a0*/, unsigned long *p /*$a1*/)
 // line 393, offset 0x800dfb48
	/* begin block 1 */
		// Start line: 394
		// Start offset: 0x800DFB48
	/* end block 1 */
	// End offset: 0x800DFB74
	// End Line: 397

void Texture_LoadImage__FP4RECTPUl(RECT *imgrect,ulong *p)
{
  if ((imgrect->w & 1U) != 0) {
    imgrect->h = imgrect->h | 1;
  }
  LoadImage();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_Vramf__FP8shapetbliiii(struct shapetbl *shp /*$s0*/, int x /*$s3*/, int y /*$s4*/, int clutx /*$s1*/, int cluty /*stack 16*/)
 // line 406, offset 0x800dfb8c
	/* begin block 1 */
		// Start line: 407
		// Start offset: 0x800DFB8C
		// Variables:
	// 		struct RECT r; // stack offset -64
	/* end block 1 */
	// End offset: 0x800DFD0C
	// End Line: 458

void Texture_Vramf__FP8shapetbliiii(shapetbl *shp,int x,int y,int clutx,int cluty)
{
  int iVar1;
  int iVar2;
  byte bVar3;
  RECT local_40 [3];
  
  if (shp != (shapetbl *)0x0) {
    do {
      bVar3 = *(byte *)&shp->field_0x0 & 0xf7;
      if (bVar3 == 0x23) {
        if (-1 < clutx) {
          *(uint *)&shp->centerx =
               *(uint *)&shp->centerx & 0xf000f000 | clutx & 0xfffU | (cluty & 0xfffU) << 0x10;
          *(byte *)&shp->field_0x0 = *(byte *)&shp->field_0x0 | 8;
          local_40[0].x = (short)clutx;
          local_40[0].y = (short)cluty;
          local_40[0].w = *(short *)&shp->field_0x4;
          local_40[0].h = 1;
          goto LAB_800dfcd8;
        }
      }
      else {
        if (((0x22 < bVar3) && (bVar3 < 0x44)) && (0x3f < bVar3)) {
          *(uint *)&shp->centerx =
               *(uint *)&shp->centerx & 0xf000f000 | x & 0xfffU | (y & 0xfffU) << 0x10;
          *(byte *)&shp->field_0x0 = *(byte *)&shp->field_0x0 | 8;
          local_40[0].x = (short)x;
          local_40[0].y = (short)y;
          iVar1 = shapedepth(shp);
          iVar1 = (int)*(short *)&shp->field_0x4 * iVar1;
          iVar2 = iVar1 + 0xf;
          if (iVar2 < 0) {
            iVar2 = iVar1 + 0x1e;
          }
          local_40[0].w = (short)(iVar2 >> 4);
          local_40[0].h = *(short *)((int)&shp->field_0x4 + 2);
LAB_800dfcd8:
          Texture_LoadImage__FP4RECTPUl(local_40,&shp->field_0x10);
        }
      }
      if ((shp->field_0x0 & 0xffffff00) == 0) {
        shp = (shapetbl *)0x0;
      }
      else {
        shp = (shapetbl *)((int)&shp->field_0x0 + ((int)shp->field_0x0 >> 8));
      }
    } while (shp != (shapetbl *)0x0);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_Vramcf__FP8shapetbliiii(struct shapetbl *shp /*$s4*/, int x /*$s5*/, int y /*$s7*/, int clutx /*stack 12*/, int cluty /*stack 16*/)
 // line 468, offset 0x800dfd38
	/* begin block 1 */
		// Start line: 469
		// Start offset: 0x800DFD38
		// Variables:
	// 		int rowbytes; // $s0

		/* begin block 1.1 */
			// Start line: 469
			// Start offset: 0x800DFD38

			/* begin block 1.1.1 */
				// Start line: 475
				// Start offset: 0x800DFDBC
				// Variables:
			// 		struct RECT r; // stack offset -48
			// 		int height; // $s2
			// 		char *s; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800DFDBC
			// End Line: 480
		/* end block 1.1 */
		// End offset: 0x800DFE70
		// End Line: 508
	/* end block 1 */
	// End offset: 0x800DFE70
	// End Line: 508

void Texture_Vramcf__FP8shapetbliiii(shapetbl *shp,int x,int y,int clutx,int cluty)
{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  anon__struct_37_bitfield_3 *paVar5;
  uint uVar6;
  short local_30;
  short local_2e;
  short local_2c;
  undefined2 local_2a;
  
  iVar3 = shapedepth();
  uVar6 = (int)*(short *)&shp->field_0x4 * iVar3 + 0xfU & 0xfffffff0;
  uVar4 = (int)uVar6 >> 3;
  if (((uVar4 & 2) == 0) || (uVar1 = *(ushort *)((int)&shp->field_0x4 + 2), (uVar1 & 1) != 0)) {
    Texture_Vramf__FP8shapetbliiii(shp,x,y,clutx,cluty);
  }
  else {
    sVar2 = (short)y + uVar1;
    local_2e = sVar2 + -2;
    local_2c = 1;
    local_2a = 2;
    paVar5 = (anon__struct_37_bitfield_3 *)
             ((int)&shp->field_0x10 + ((int)(short)uVar1 + -1) * uVar4);
    local_30 = (short)x;
    LoadImage(&local_30,(int)paVar5 + -2);
    local_30 = (short)x + 1;
    local_2e = sVar2 + -1;
    local_2c = (short)((int)uVar6 >> 4) + -1;
    local_2a = 1;
    LoadImage(&local_30,(int)paVar5 + 2);
    *(short *)((int)&shp->field_0x4 + 2) = *(short *)((int)&shp->field_0x4 + 2) + -1;
    Texture_Vramf__FP8shapetbliiii(shp,x,y,clutx,cluty);
    *(ushort *)((int)&shp->field_0x4 + 2) = uVar1;
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Texture_GetTranslucencyMode__FP8shapetbl(struct shapetbl *shp /*$a0*/)
 // line 514, offset 0x800dfea0
	/* begin block 1 */
		// Start line: 515
		// Start offset: 0x800DFEA0

		/* begin block 1.1 */
			// Start line: 516
			// Start offset: 0x800DFEAC

			/* begin block 1.1.1 */
				// Start line: 519
				// Start offset: 0x800DFEB4

				/* begin block 1.1.1.1 */
					// Start line: 520
					// Start offset: 0x800DFEC4
					// Variables:
				// 		unsigned short abr; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x800DFEE4
				// End Line: 529
			/* end block 1.1.1 */
			// End offset: 0x800DFEE4
			// End Line: 529
		/* end block 1.1 */
		// End offset: 0x800DFF00
		// End Line: 531
	/* end block 1 */
	// End offset: 0x800DFF08
	// End Line: 533

int Texture_GetTranslucencyMode__FP8shapetbl(shapetbl *shp)
{
  uint uVar1;
  
  while( true ) {
    if (shp == (shapetbl *)0x0) {
      return 0;
    }
    if (*(char *)&shp->field_0x0 == 'k') break;
    if ((shp->field_0x0 & 0xffffff00) == 0) {
      shp = (shapetbl *)0x0;
    }
    else {
      shp = (shapetbl *)((int)&shp->field_0x0 + ((int)shp->field_0x0 >> 8));
    }
  }
  uVar1 = (uint)(*(ushort *)&shp->field_0x4 >> 5) & 3;
  if (uVar1 == 3) {
    return 2;
  }
  return uVar1;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap(char *f /*$a0*/, char *n /*$a1*/, int ctrl /*$s7*/, int rx /*$s1*/, int ry /*stack 16*/, int cx /*stack 20*/, int cy /*stack 24*/, struct Draw_tPixMap *pmx /*stack 28*/)
 // line 538, offset 0x800dff18
	/* begin block 1 */
		// Start line: 539
		// Start offset: 0x800DFF18
		// Variables:
	// 		struct shapetbl *shpptr; // $s0
	// 		int x; // $s5
	// 		int y; // $s6
	// 		int u; // $a0
	// 		int v; // $a1
	// 		int w; // stack offset -72
	// 		int h; // $fp
	// 		int rotated; // stack offset -68
	// 		int bpp; // $s4
	// 		int bshapex; // stack offset -64
	// 		int bshapey; // stack offset -60
	// 		int bwidth; // stack offset -56
	// 		int bheight; // stack offset -52

		/* begin block 1.1 */
			// Start line: 550
			// Start offset: 0x800DFF70

			/* begin block 1.1.1 */
				// Start line: 551
				// Start offset: 0x800DFF78
				// Variables:
			// 		int bpp_real; // stack offset -48

				/* begin block 1.1.1.1 */
					// Start line: 590
					// Start offset: 0x800E003C

					/* begin block 1.1.1.1.1 */
						// Start line: 591
						// Start offset: 0x800E0044
						// Variables:
					// 		struct shapetbl *clutptr; // $s1
					// 		int bwidthclut; // stack offset -44
					/* end block 1.1.1.1.1 */
					// End offset: 0x800E01E8
					// End Line: 651
				/* end block 1.1.1.1 */
				// End offset: 0x800E0208
				// End Line: 654
			/* end block 1.1.1 */
			// End offset: 0x800E0328
			// End Line: 668
		/* end block 1.1 */
		// End offset: 0x800E0328
		// End Line: 668
	/* end block 1 */
	// End offset: 0x800E0328
	// End Line: 668

void Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap( (char *f,char *n,int ctrl,int rx,int ry,int cx,int cy,Draw_tPixMap *pmx)
{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  uchar uVar5;
  undefined2 uVar6;
  ushort uVar7;
  int iVar8;
  int clutx;
  int iVar9;
  uint uVar10;
  uchar uVar11;
  uint bpp;
  char cVar12;
  int cluty;
  char local_48;
  
  if (f != (char *)0x0) {
    n = (char *)locateshapez();
  }
  if ((shapetbl *)n != (shapetbl *)0x0) {
    iVar8 = *(int *)&((shapetbl *)n)->centerx;
    bVar1 = *(byte *)&((shapetbl *)n)->field_0x0;
    bpp = (uint)bVar1 & 3;
    uVar2 = *(undefined2 *)&((shapetbl *)n)->field_0x4;
    uVar3 = *(undefined2 *)((int)&((shapetbl *)n)->field_0x4 + 2);
    if (((ctrl & 8U) != 0) && ((bVar1 & 3) != 0)) {
      bpp = 0;
    }
    uVar10 = *(uint *)&((shapetbl *)n)->centerx;
    if (rx == -1) {
      rx = 0;
      ry = 0xa0;
      *(undefined2 *)&((shapetbl *)n)->field_0x4 = 1;
      *(undefined2 *)((int)&((shapetbl *)n)->field_0x4 + 2) = 1;
    }
    else {
      rx = ((int)(uVar10 << 0x14) >> 0x14) + rx;
      ry = ((int)(uVar10 << 4) >> 0x14) + ry;
    }
    local_48 = (char)*(undefined2 *)&((shapetbl *)n)->field_0x4;
    cVar12 = (char)*(undefined2 *)((int)&((shapetbl *)n)->field_0x4 + 2);
    if ((ctrl & 1U) == 0) {
      local_48 = local_48 + -1;
      cVar12 = cVar12 + -1;
    }
    if (bpp == 2) {
      Texture_Vramcf__FP8shapetbliiii((shapetbl *)n,rx,ry,0,0);
    }
    else {
      iVar9 = (int)&((shapetbl *)n)->field_0x0 + ((int)((shapetbl *)n)->field_0x0 >> 8);
      sVar4 = *(short *)(iVar9 + 4);
      if (bpp == 0) {
        uVar6 = 0x10;
      }
      else {
        uVar6 = 0x100;
      }
      *(undefined2 *)(iVar9 + 4) = uVar6;
      clutx = Texture_CheckForSharedPalette__FiPcP12Draw_tPixMapi
                        (ctrl & 0x40,(char *)(iVar9 + 0x10),pmx,bpp);
      if (clutx == 0) {
        if (cx == -1) {
          Texture_GetClutId__FiPiT1(bpp,&cx,&cy);
        }
        else {
          if (cx == -3) {
            clutx = TextureProcess_DepthColorCluts__FPci
                              ((char *)(iVar9 + 0x10),(int)*(short *)(iVar9 + 4));
            pmx->pad2 = (ushort)clutx;
          }
          else {
            if (cx == -2) {
              cy = 0xa0;
              cx = 0;
              *(undefined2 *)(iVar9 + 4) = 1;
            }
          }
        }
        if ((ctrl & 2U) != 0) {
          clutx = TextureProcess_TransColorCheck__FPci
                            ((char *)(iVar9 + 0x10),(int)*(short *)(iVar9 + 4));
          pmx->flag = (ushort)(clutx << 1);
        }
        if (((ctrl & 8U) != 0) && ((bVar1 & 3) != 0)) {
          if (iGp000015c0 != 0) {
            Texture_CopyPalette__FPciii((char *)(iVar9 + 0x10),(int)sVar4,cx,cy);
          }
          if ((ctrl & 0x10U) != 0) {
            Texture_ColorCarPalette__FPcT0i((char *)(iVar9 + 0x10),(char *)(iVar9 + 0x10),0x10);
          }
        }
        if (cx < 0) {
          pmx->clut = 0xffff;
        }
        else {
          uVar7 = GetClut(cx,cy);
          pmx->clut = uVar7;
        }
        if ((ctrl & 0x40U) != 0) {
          Texture_AddSharedPalette__FPcP12Draw_tPixMapi((char *)(iVar9 + 0x10),pmx,bpp);
        }
      }
      clutx = cx;
      cluty = cy;
      if ((ctrl & 0x20U) != 0) {
        clutx = -1;
        cluty = -1;
      }
      Texture_Vramcf__FP8shapetbliiii((shapetbl *)n,rx,ry,clutx,cluty);
      *(short *)(iVar9 + 4) = sVar4;
    }
    iVar9 = Texture_GetTranslucencyMode__FP8shapetbl((shapetbl *)n);
    uVar7 = GetTPage(bpp,iVar9,rx,ry);
    pmx->tpage = uVar7;
    iVar9 = rx;
    if (rx < 0) {
      iVar9 = rx + 0x3f;
    }
    rx = rx + (iVar9 >> 6) * -0x40;
    if (bpp == 0) {
      rx = rx * 4;
    }
    uVar11 = (uchar)rx;
    if (bpp == 1) {
      uVar11 = (uchar)(rx << 1);
    }
    uVar5 = (uchar)ry;
    if ((uVar10 & 0x4000) == 0) {
      pmx->u0 = uVar11;
      pmx->v0 = uVar5;
      pmx->u1 = uVar11 + local_48;
      pmx->v1 = uVar5;
      pmx->u2 = uVar11;
      pmx->v2 = uVar5 + cVar12;
      pmx->u3 = uVar11 + local_48;
      pmx->v3 = uVar5 + cVar12;
    }
    else {
      pmx->u0 = uVar11;
      pmx->v0 = uVar5 + cVar12;
      pmx->u1 = uVar11;
      pmx->v1 = uVar5;
      pmx->u2 = uVar11 + local_48;
      pmx->v2 = uVar5 + cVar12;
      pmx->u3 = uVar11 + local_48;
      pmx->v3 = uVar5;
    }
    bpp = *(uint *)&((shapetbl *)n)->centerx;
    *(undefined2 *)&((shapetbl *)n)->field_0x4 = uVar2;
    *(undefined2 *)((int)&((shapetbl *)n)->field_0x4 + 2) = uVar3;
    *(uint *)&((shapetbl *)n)->centerx =
         bpp & 0xf000f000 | (iVar8 << 0x14) >> 0x14 & 0xfffU |
         ((iVar8 << 4) >> 0x14 & 0xfffU) << 0x10;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_CloneUVPmx__FP12Draw_tPixMapiT0(struct Draw_tPixMap *pmx /*$a0*/, int mode /*$a1*/, struct Draw_tPixMap *rpmx /*$a2*/)
 // line 672, offset 0x800e0358
	/* begin block 1 */
		// Start line: 673
		// Start offset: 0x800E0358
	/* end block 1 */
	// End offset: 0x800E04B0
	// End Line: 708

void Texture_CloneUVPmx__FP12Draw_tPixMapiT0(Draw_tPixMap *pmx,int mode,Draw_tPixMap *rpmx)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)&pmx->u1;
  uVar2 = *(undefined4 *)&pmx->u2;
  uVar3 = *(undefined4 *)&pmx->u3;
  *(undefined4 *)rpmx = *(undefined4 *)pmx;
  *(undefined4 *)&rpmx->u1 = uVar1;
  *(undefined4 *)&rpmx->u2 = uVar2;
  *(undefined4 *)&rpmx->u3 = uVar3;
  switch(mode) {
  case 0:
    *(undefined2 *)rpmx = *(undefined2 *)&pmx->u1;
    *(undefined2 *)&rpmx->u1 = *(undefined2 *)pmx;
    *(undefined2 *)&rpmx->u2 = *(undefined2 *)&pmx->u3;
    *(undefined2 *)&rpmx->u3 = *(undefined2 *)&pmx->u2;
    return;
  case 1:
    *(undefined2 *)&rpmx->u3 = *(undefined2 *)&pmx->u1;
    *(undefined2 *)&rpmx->u1 = *(undefined2 *)&pmx->u3;
    *(undefined2 *)&rpmx->u2 = *(undefined2 *)pmx;
    *(undefined2 *)rpmx = *(undefined2 *)&pmx->u2;
    return;
  case 2:
    *(undefined2 *)rpmx = *(undefined2 *)&pmx->u2;
    *(undefined2 *)&rpmx->u1 = *(undefined2 *)pmx;
    *(undefined2 *)&rpmx->u3 = *(undefined2 *)&pmx->u1;
    *(undefined2 *)&rpmx->u2 = *(undefined2 *)&pmx->u3;
    return;
  case 3:
    *(undefined2 *)rpmx = *(undefined2 *)&pmx->u3;
    *(undefined2 *)&rpmx->u1 = *(undefined2 *)&pmx->u2;
    *(undefined2 *)&rpmx->u3 = *(undefined2 *)pmx;
    *(undefined2 *)&rpmx->u2 = *(undefined2 *)&pmx->u1;
    return;
  case 4:
    *(undefined2 *)rpmx = *(undefined2 *)&pmx->u1;
    *(undefined2 *)&rpmx->u1 = *(undefined2 *)&pmx->u3;
    *(undefined2 *)&rpmx->u3 = *(undefined2 *)&pmx->u2;
    *(undefined2 *)&rpmx->u2 = *(undefined2 *)pmx;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_InitTrackTexture__Fv()
 // line 726, offset 0x800e04b8
	/* begin block 1 */
		// Start line: 727
		// Start offset: 0x800E04B8
	/* end block 1 */
	// End offset: 0x800E04B8
	// End Line: 727

void Texture_InitTrackTexture__Fv(void)
{
  _gFreePal4 = Platform_GetDCTBuffer__FiPc(0x13f0,"4 bit Cluts");
  _gFreePal8 = Platform_GetDCTBuffer__FiPc(0x10,"8 bit Cluts");
  Texture_InitPaletteSharing__Fv();
  TextureProcess_Init__Fv();
  Texture_InitClut__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_InitMenuClut__Fv()
 // line 743, offset 0x800e0510
	/* begin block 1 */
		// Start line: 744
		// Start offset: 0x800E0510

		/* begin block 1.1 */
			// Start line: 744
			// Start offset: 0x800E0510
			// Variables:
		// 		int x; // $a3
		// 		int y; // $a2
		/* end block 1.1 */
		// End offset: 0x800E05A4
		// End Line: 762

		/* begin block 1.2 */
			// Start line: 765
			// Start offset: 0x800E05A4
			// Variables:
		// 		int x; // $a3
		// 		int y; // $a2
		/* end block 1.2 */
		// End offset: 0x800E0600
		// End Line: 777
	/* end block 1 */
	// End offset: 0x800E0600
	// End Line: 777

void Texture_InitMenuClut__Fv(void)
{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  _gFreePal4 = reservememadr("4 bits cluts",0x300,0);
  _gFreePal8 = reservememadr("8 bits cluts",0x1180,0);
  iVar5 = _gFreePal4;
  iVar4 = 0;
  gNbFreePal4 = 0;
  do {
    iVar3 = 0;
    uVar2 = 0x7a00;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = gNbFreePal4 * 2;
      gNbFreePal4 = gNbFreePal4 + 1;
      *(ushort *)(iVar1 + iVar5) = uVar2 | (ushort)(iVar4 + 0x200 >> 4) & 0x3f;
      iVar1 = _gFreePal8;
      uVar2 = uVar2 + 0x40;
    } while (iVar3 < 0x18);
    iVar4 = iVar4 + 0x10;
  } while (iVar4 < 0x100);
  iVar5 = 0;
  gNbFreePal8 = 0;
  do {
    iVar4 = 0;
    uVar2 = 0x5700;
    do {
      iVar4 = iVar4 + 1;
      iVar3 = gNbFreePal8 * 2;
      gNbFreePal8 = gNbFreePal8 + 1;
      *(ushort *)(iVar3 + iVar1) = uVar2 | (ushort)(iVar5 + 0x200 >> 4) & 0x3f;
      uVar2 = uVar2 + 0x40;
    } while (iVar4 < 0x8c);
    iVar5 = iVar5 + 0x100;
  } while (iVar5 < 0x100);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_InitMenuTexture__Fv()
 // line 792, offset 0x800e0610
	/* begin block 1 */
		// Start line: 793
		// Start offset: 0x800E0610
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x800E0630
	// End Line: 796

void Texture_InitMenuTexture__Fv(void)
{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 7;
  puVar1 = &DAT_80120fec;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_CleanupMenuTexture__Fv()
 // line 799, offset 0x800e0638
	/* begin block 1 */
		// Start line: 800
		// Start offset: 0x800E0638
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x800E0684
	// End Line: 808

void Texture_CleanupMenuTexture__Fv(void)
{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &_gMenuPixmap;
  do {
    if (*piVar1 != 0) {
      Texture_MenuReleaseClutId__Fs(*(short *)(*piVar1 + 2));
    }
    *piVar1 = 0;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 8);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_LoadMenuTexture__Fv()
 // line 811, offset 0x800e0698
	/* begin block 1 */
		// Start line: 812
		// Start offset: 0x800E0698
		// Variables:
	// 		char name[255]; // stack offset -288
	// 		char *shpfile; // $s3

		/* begin block 1.1 */
			// Start line: 820
			// Start offset: 0x800E06C8
		/* end block 1.1 */
		// End offset: 0x800E06C8
		// End Line: 820

		/* begin block 1.2 */
			// Start line: 820
			// Start offset: 0x800E06C8
			// Variables:
		// 		struct Draw_tPixMap *pmx; // $s2
		/* end block 1.2 */
		// End offset: 0x800E06C8
		// End Line: 820

		/* begin block 1.3 */
			// Start line: 820
			// Start offset: 0x800E06C8
			// Variables:
		// 		struct Draw_tPixMap *pmx; // $s2
		/* end block 1.3 */
		// End offset: 0x800E06C8
		// End Line: 820

		/* begin block 1.4 */
			// Start line: 820
			// Start offset: 0x800E06C8
			// Variables:
		// 		struct Draw_tPixMap *pmx; // $s2
		/* end block 1.4 */
		// End offset: 0x800E06C8
		// End Line: 820

		/* begin block 1.5 */
			// Start line: 820
			// Start offset: 0x800E06C8
			// Variables:
		// 		struct Draw_tPixMap *pmx; // $s2
		/* end block 1.5 */
		// End offset: 0x800E06C8
		// End Line: 820

		/* begin block 1.6 */
			// Start line: 820
			// Start offset: 0x800E06C8
			// Variables:
		// 		struct Draw_tPixMap *pmx; // $s1
		/* end block 1.6 */
		// End offset: 0x800E06C8
		// End Line: 820
	/* end block 1 */
	// End offset: 0x800E0828
	// End Line: 844

void Texture_LoadMenuTexture__Fv(void)
{
  char *f;
  char acStack288 [256];
  
  if (_gMenuPixmap == (undefined *)0x0) {
    sprintf(acStack288,"%sshow.psh",0);
    f = (char *)loadfileadr(acStack288,0);
    Texture_ResetPaletteSharing__Fv();
    Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
              (f,"show",0,0x380,0x180,-1,-1,(Draw_tPixMap *)&gMenuPixmapAlloc);
    _gMenuPixmap = &gMenuPixmapAlloc;
    Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
              (f,"shad",0,0x380,0x180,-1,-1,(Draw_tPixMap *)&DAT_80121000);
    DAT_80120fd4 = &DAT_80121000;
    Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
              (f,"lgt3",0,0x380,0x180,-1,-1,(Draw_tPixMap *)&DAT_80121010);
    DAT_80120fdc = &DAT_80121010;
    Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
              (f,"lgta",0,0x380,0x180,-1,-1,(Draw_tPixMap *)&DAT_80121020);
    DAT_80120fe0 = &DAT_80121020;
    Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
              (f,"lgtb",0,0x380,0x180,-1,-1,(Draw_tPixMap *)&DAT_80121030);
    DAT_80120fe4 = &DAT_80121030;
    Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
              (f,"lgtc",0,0x380,0x180,-1,-1,(Draw_tPixMap *)&DAT_80121040);
    DAT_80120fe8 = &DAT_80121040;
    purgememadr(f);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_KillTrackTexture__Fv()
 // line 847, offset 0x800e084c
	/* begin block 1 */
		// Start line: 848
		// Start offset: 0x800E084C
	/* end block 1 */
	// End offset: 0x800E084C
	// End Line: 848

void Texture_KillTrackTexture__Fv(void)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Texture_KillMenuTexture__Fv()
 // line 855, offset 0x800e0854
	/* begin block 1 */
		// Start line: 856
		// Start offset: 0x800E0854
	/* end block 1 */
	// End offset: 0x800E0854
	// End Line: 856

void Texture_KillMenuTexture__Fv(void)
{
  purgememadr(uGp000015e0);
  purgememadr(uGp000015e8);
  return;


}





