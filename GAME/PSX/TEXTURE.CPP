#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 128
	/* end block 2 */
	// End Line: 129

	/* begin block 3 */
		// Start line: 128
	/* end block 3 */
	// End Line: 129

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Texture_InitPaletteSharing__Fv(void)

{
  Texture_gNum4bitPal = 0;
  Texture_gNum8bitPal = 0;
  Texture_gP4bitPmx = (Draw_tPixMap **)reservememadr(s_pshare_4_80056a20,0x800,0x10);
  Texture_gP8bitPmx = (Draw_tPixMap **)reservememadr(s_pshare_8_80056a2c,0x100,0x10);
  Texture_gPalette4bit = (char **)reservememadr(s_pal_4bit_80056a38,0x800,0x10);
  Texture_gPalette8bit = (char **)reservememadr(s_pal_8bit_80056a44,0x100,0x10);
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

	/* begin block 2 */
		// Start line: 150
	/* end block 2 */
	// End Line: 151

	/* begin block 3 */
		// Start line: 154
	/* end block 3 */
	// End Line: 155

	/* begin block 4 */
		// Start line: 154
	/* end block 4 */
	// End Line: 155

	/* begin block 5 */
		// Start line: 155
	/* end block 5 */
	// End Line: 156

	/* begin block 6 */
		// Start line: 155
	/* end block 6 */
	// End Line: 156

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Texture_DeInitPaletteSharing__Fv(void)

{
  purgememadr((int)Texture_gP4bitPmx);
  purgememadr((int)Texture_gP8bitPmx);
  purgememadr((int)Texture_gPalette4bit);
  purgememadr((int)Texture_gPalette8bit);
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

	/* begin block 2 */
		// Start line: 169
	/* end block 2 */
	// End Line: 170

	/* begin block 3 */
		// Start line: 175
	/* end block 3 */
	// End Line: 176

	/* begin block 4 */
		// Start line: 175
	/* end block 4 */
	// End Line: 176

	/* begin block 5 */
		// Start line: 176
	/* end block 5 */
	// End Line: 177

	/* begin block 6 */
		// Start line: 176
	/* end block 6 */
	// End Line: 177

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Texture_ResetPaletteSharing__Fv(void)

{
  Texture_gNum4bitPal = 0;
  Texture_gNum8bitPal = 0;
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

	/* begin block 2 */
		// Start line: 183
	/* end block 2 */
	// End Line: 184

	/* begin block 3 */
		// Start line: 187
	/* end block 3 */
	// End Line: 188

	/* begin block 4 */
		// Start line: 187
	/* end block 4 */
	// End Line: 188

	/* begin block 5 */
		// Start line: 189
	/* end block 5 */
	// End Line: 190

int Texture_CheckForSharedPalette__FiPcP12Draw_tPixMapi
              (int test,char *data,Draw_tPixMap *pmx,int bpp)

{
  int iVar1;
  Draw_tPixMap **ppDVar2;
  Draw_tPixMap *pDVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int **ppiVar9;
  int **ppiVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (test == 0) {
    return 0;
  }
  iVar8 = 0;
  ppiVar10 = (int **)Texture_gPalette4bit;
  ppiVar9 = (int **)Texture_gPalette8bit;
  if (bpp == 0) {
    while (iVar8 < Texture_gNum4bitPal) {
      piVar6 = *ppiVar10;
      iVar5 = 0;
      piVar7 = (int *)data;
      do {
        iVar4 = *piVar6;
        piVar6 = piVar6 + 1;
        iVar1 = *piVar7;
        piVar7 = piVar7 + 1;
        if (iVar1 != iVar4) break;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 8);
      ppDVar2 = Texture_gP4bitPmx;
      if (iVar5 == 8) goto LAB_800df6a0;
      iVar8 = iVar8 + 1;
      ppiVar10 = ppiVar10 + 1;
    }
  }
  else {
    while (iVar8 < Texture_gNum8bitPal) {
      piVar6 = *ppiVar9;
      iVar5 = 0;
      piVar7 = (int *)data;
      do {
        iVar4 = *piVar6;
        piVar6 = piVar6 + 1;
        iVar1 = *piVar7;
        piVar7 = piVar7 + 1;
        if (iVar1 != iVar4) break;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x80);
      ppDVar2 = Texture_gP8bitPmx;
      if (iVar5 == 0x80) {
LAB_800df6a0:
        pDVar3 = ppDVar2[iVar8];
        uVar11 = *(undefined4 *)&pDVar3->u1;
        uVar12 = *(undefined4 *)&pDVar3->u2;
        uVar13 = *(undefined4 *)&pDVar3->u3;
        *(undefined4 *)pmx = *(undefined4 *)pDVar3;
        *(undefined4 *)&pmx->u1 = uVar11;
        *(undefined4 *)&pmx->u2 = uVar12;
        *(undefined4 *)&pmx->u3 = uVar13;
        return 1;
      }
      iVar8 = iVar8 + 1;
      ppiVar9 = ppiVar9 + 1;
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

	/* begin block 2 */
		// Start line: 331
	/* end block 2 */
	// End Line: 332

	/* begin block 3 */
		// Start line: 335
	/* end block 3 */
	// End Line: 336

	/* begin block 4 */
		// Start line: 335
	/* end block 4 */
	// End Line: 336

void Texture_AddSharedPalette__FPcP12Draw_tPixMapi
               (char *ptr_to_data,Draw_tPixMap *ptr_to_pmx,int bpp)

{
  char **ppcVar1;
  Draw_tPixMap **ppDVar2;
  
  if (bpp == 0) {
    ppDVar2 = Texture_gP4bitPmx + Texture_gNum4bitPal;
    Texture_gPalette4bit[Texture_gNum4bitPal] = ptr_to_data;
    *ppDVar2 = ptr_to_pmx;
    Texture_gNum4bitPal = Texture_gNum4bitPal + 1;
    return;
  }
  if (bpp == 1) {
    ppcVar1 = Texture_gPalette8bit + Texture_gNum8bitPal;
    ppDVar2 = Texture_gP8bitPmx + Texture_gNum8bitPal;
    Texture_gNum8bitPal = Texture_gNum8bitPal + 1;
    *ppcVar1 = ptr_to_data;
    *ppDVar2 = ptr_to_pmx;
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

	/* begin block 2 */
		// Start line: 393
	/* end block 2 */
	// End Line: 394

	/* begin block 3 */
		// Start line: 419
	/* end block 3 */
	// End Line: 420

	/* begin block 4 */
		// Start line: 419
	/* end block 4 */
	// End Line: 420

	/* begin block 5 */
		// Start line: 425
	/* end block 5 */
	// End Line: 426

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Texture_InitClut__Fv(void)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  
  psVar1 = gFreePal4;
  iVar7 = 0;
  gNbFreePal4 = 0;
  do {
    iVar5 = 0;
    iVar3 = 0;
    do {
      iVar5 = iVar5 + 1;
      iVar4 = gNbFreePal4 + 1;
      psVar1[gNbFreePal4] = (ushort)iVar3 | (ushort)(iVar7 >> 4) & 0x3f;
      psVar2 = gFreePal4;
      iVar3 = iVar5 * 0x40;
      gNbFreePal4 = iVar4;
    } while (iVar5 < 0x78);
    iVar7 = iVar7 + 0x10;
    gNbFreePal4 = iVar4;
  } while (iVar7 < 0x100);
  iVar7 = 0;
  gNbFreePal4 = iVar4;
  do {
    iVar3 = 0;
    uVar6 = 0x2000;
    do {
      iVar3 = iVar3 + 1;
      iVar5 = gNbFreePal4 + 1;
      psVar2[gNbFreePal4] = uVar6 | (ushort)(iVar7 >> 4) & 0x3f;
      psVar1 = gFreePal8;
      uVar6 = uVar6 + 0x40;
      gNbFreePal4 = iVar5;
    } while (iVar3 < 0x20);
    iVar7 = iVar7 + 0x10;
    gNbFreePal4 = iVar5;
  } while (iVar7 < 0x80);
  iVar7 = 0;
  gNbFreePal8 = 0;
  gNbFreePal4 = iVar5;
  do {
    iVar3 = 0;
    uVar6 = 0x1e00;
    do {
      iVar3 = iVar3 + 1;
      iVar5 = gNbFreePal8 + 1;
      psVar1[gNbFreePal8] = uVar6 | (ushort)(iVar7 >> 4) & 0x3f;
      uVar6 = uVar6 + 0x40;
      gNbFreePal8 = iVar5;
    } while (iVar3 < 8);
    iVar7 = iVar7 + 0x100;
    gNbFreePal8 = iVar5;
  } while (iVar7 < 0x100);
  gNbFreePal8 = iVar5;
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

	/* begin block 2 */
		// Start line: 501
	/* end block 2 */
	// End Line: 502

	/* begin block 3 */
		// Start line: 507
	/* end block 3 */
	// End Line: 508

	/* begin block 4 */
		// Start line: 507
	/* end block 4 */
	// End Line: 508

	/* begin block 5 */
		// Start line: 511
	/* end block 5 */
	// End Line: 512

void Texture_GetClutId__FiPiT1(int bpp,int *xclut,int *yclut)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  
  uVar4 = 0;
  if (bpp == 0) {
    iVar3 = gNbFreePal4 + -1;
    psVar5 = gFreePal4;
    iVar1 = iVar3;
    iVar2 = gNbFreePal8;
    if (gNbFreePal4 == 0) goto code_r0x800df988;
  }
  else {
    iVar3 = gNbFreePal8 + -1;
    psVar5 = gFreePal8;
    iVar1 = gNbFreePal4;
    iVar2 = iVar3;
    if (gNbFreePal8 == 0) goto code_r0x800df988;
  }
  gNbFreePal8 = iVar2;
  gNbFreePal4 = iVar1;
  uVar4 = (uint)(ushort)psVar5[iVar3];
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

	/* begin block 2 */
		// Start line: 581
	/* end block 2 */
	// End Line: 582

	/* begin block 3 */
		// Start line: 650
	/* end block 3 */
	// End Line: 651

	/* begin block 4 */
		// Start line: 650
	/* end block 4 */
	// End Line: 651

void Texture_MenuReleaseClutId__Fs(short id)

{
  if ((int)((uint)(ushort)id << 0x10) >> 0x16 < 0x1e8) {
    gFreePal8[gNbFreePal8] = id;
    gNbFreePal8 = gNbFreePal8 + 1;
    return;
  }
  gFreePal4[gNbFreePal4] = id;
  gNbFreePal4 = gNbFreePal4 + 1;
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

	/* begin block 2 */
		// Start line: 689
	/* end block 2 */
	// End Line: 690

	/* begin block 3 */
		// Start line: 696
	/* end block 3 */
	// End Line: 697

	/* begin block 4 */
		// Start line: 696
	/* end block 4 */
	// End Line: 697

	/* begin block 5 */
		// Start line: 697
	/* end block 5 */
	// End Line: 698

	/* begin block 6 */
		// Start line: 697
	/* end block 6 */
	// End Line: 698

void Texture_ColorCarPalette__FPcT0i(char *from,char *to,int numentry)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = numentry + -1;
  puVar3 = (undefined2 *)(from + Texture_CarColor * 0x20);
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

	/* begin block 2 */
		// Start line: 719
	/* end block 2 */
	// End Line: 720

	/* begin block 3 */
		// Start line: 724
	/* end block 3 */
	// End Line: 725

	/* begin block 4 */
		// Start line: 724
	/* end block 4 */
	// End Line: 725

	/* begin block 5 */
		// Start line: 729
	/* end block 5 */
	// End Line: 730

void Texture_CopyPalette__FPciii(char *data,int width,int x,int y)

{
  short sVar1;
  Texture_pal8bit *pTVar2;
  int iVar3;
  short *psVar4;
  
  iVar3 = 0;
  pTVar2 = Texture_palCopy + Texture_palNum;
  psVar4 = pTVar2->pal;
  pTVar2->x = x;
  pTVar2->y = y;
  if (0 < width) {
    do {
      sVar1 = *(short *)data;
      data = (char *)((short *)data + 1);
      iVar3 = iVar3 + 1;
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
    } while (iVar3 < width);
  }
  Texture_palNum = Texture_palNum + 1;
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

	/* begin block 2 */
		// Start line: 763
	/* end block 2 */
	// End Line: 764

	/* begin block 3 */
		// Start line: 767
	/* end block 3 */
	// End Line: 768

	/* begin block 4 */
		// Start line: 767
	/* end block 4 */
	// End Line: 768

void Texture_ProcessPaletteCopy__FP15Texture_pal8bitii
               (Texture_pal8bit *palCopy,int palStart,int palNum)

{
  short local_40;
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
        local_40 = *(short *)&palCopy->x;
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

	/* begin block 2 */
		// Start line: 837
	/* end block 2 */
	// End Line: 838

	/* begin block 3 */
		// Start line: 852
	/* end block 3 */
	// End Line: 853

	/* begin block 4 */
		// Start line: 852
	/* end block 4 */
	// End Line: 853

void Texture_LoadImage__FP4RECTPUl(RECT *imgrect,ulong *p)

{
  if ((imgrect->w & 1U) != 0) {
    imgrect->h = imgrect->h | 1;
  }
  LoadImage((short *)imgrect,p);
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

	/* begin block 2 */
		// Start line: 868
	/* end block 2 */
	// End Line: 869

	/* begin block 3 */
		// Start line: 878
	/* end block 3 */
	// End Line: 879

	/* begin block 4 */
		// Start line: 878
	/* end block 4 */
	// End Line: 879

void Texture_Vramf__FP8shapetbliiii(shapetbl *shp,int x,int y,int clutx,int cluty)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  RECT local_40 [3];
  
  if (shp != (shapetbl *)0x0) {
    do {
      bVar3 = *(byte *)&shp->type & 0xf7;
      if (bVar3 == 0x23) {
        if (-1 < clutx) {
          *(uint *)&shp->centerx =
               *(uint *)&shp->centerx & 0xf000f000 | clutx & 0xfffU | (cluty & 0xfffU) << 0x10;
          *(byte *)&shp->type = *(byte *)&shp->type | 8;
          local_40[0].x = (short)clutx;
          local_40[0].y = (short)cluty;
          local_40[0].w = *(short *)&shp->next;
          local_40[0].h = 1;
          goto LAB_800dfcd8;
        }
      }
      else {
        if (((0x22 < bVar3) && (bVar3 < 0x44)) && (0x3f < bVar3)) {
          *(uint *)&shp->centerx =
               *(uint *)&shp->centerx & 0xf000f000 | x & 0xfffU | (y & 0xfffU) << 0x10;
          *(byte *)&shp->type = *(byte *)&shp->type | 8;
          local_40[0].x = (short)x;
          local_40[0].y = (short)y;
          iVar1 = shapedepth((byte *)shp);
          iVar1 = (int)*(short *)&shp->next * iVar1;
          iVar2 = iVar1 + 0xf;
          if (iVar2 < 0) {
            iVar2 = iVar1 + 0x1e;
          }
          local_40[0].w = (short)(iVar2 >> 4);
          local_40[0].h = *(short *)((int)&shp->next + 2);
LAB_800dfcd8:
          Texture_LoadImage__FP4RECTPUl(local_40,(ulong *)&shp->shapex);
        }
      }
      if ((shp->type & 0xffffff00) == 0) {
        shp = (shapetbl *)0x0;
      }
      else {
        shp = (shapetbl *)((int)&shp->type + ((int)shp->type >> 8));
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

	/* begin block 2 */
		// Start line: 1014
	/* end block 2 */
	// End Line: 1015

	/* begin block 3 */
		// Start line: 1025
	/* end block 3 */
	// End Line: 1026

	/* begin block 4 */
		// Start line: 1025
	/* end block 4 */
	// End Line: 1026

void Texture_Vramcf__FP8shapetbliiii(shapetbl *shp,int x,int y,int clutx,int cluty)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  short local_30;
  short local_2e;
  short local_2c;
  undefined2 local_2a;
  
  iVar3 = shapedepth((byte *)shp);
  uVar6 = (int)*(short *)&shp->next * iVar3 + 0xfU & 0xfffffff0;
  uVar4 = (int)uVar6 >> 3;
  if (((uVar4 & 2) == 0) || (uVar1 = *(ushort *)((int)&shp->next + 2), (uVar1 & 1) != 0)) {
    Texture_Vramf__FP8shapetbliiii(shp,x,y,clutx,cluty);
  }
  else {
    sVar2 = (short)y + uVar1;
    local_2e = sVar2 + -2;
    local_2c = 1;
    local_2a = 2;
    piVar5 = (int *)((int)&shp->shapex + ((int)(short)uVar1 + -1) * uVar4);
    local_30 = (short)x;
    LoadImage(&local_30,(int)piVar5 + -2);
    local_30 = (short)x + 1;
    local_2e = sVar2 + -1;
    local_2c = (short)((int)uVar6 >> 4) + -1;
    local_2a = 1;
    LoadImage(&local_30,(int)piVar5 + 2);
    *(short *)((int)&shp->next + 2) = *(short *)((int)&shp->next + 2) + -1;
    Texture_Vramf__FP8shapetbliiii(shp,x,y,clutx,cluty);
    *(ushort *)((int)&shp->next + 2) = uVar1;
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

	/* begin block 2 */
		// Start line: 1129
	/* end block 2 */
	// End Line: 1130

	/* begin block 3 */
		// Start line: 1136
	/* end block 3 */
	// End Line: 1137

	/* begin block 4 */
		// Start line: 1136
	/* end block 4 */
	// End Line: 1137

	/* begin block 5 */
		// Start line: 1137
	/* end block 5 */
	// End Line: 1138

	/* begin block 6 */
		// Start line: 1137
	/* end block 6 */
	// End Line: 1138

int Texture_GetTranslucencyMode__FP8shapetbl(shapetbl *shp)

{
  uint uVar1;
  
  while( true ) {
    if (shp == (shapetbl *)0x0) {
      return 0;
    }
    if (*(char *)&shp->type == 'k') break;
    if ((shp->type & 0xffffff00) == 0) {
      shp = (shapetbl *)0x0;
    }
    else {
      shp = (shapetbl *)((int)&shp->type + ((int)shp->type >> 8));
    }
  }
  uVar1 = (uint)(*(ushort *)&shp->next >> 5) & 3;
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

	/* begin block 2 */
		// Start line: 1178
	/* end block 2 */
	// End Line: 1179

	/* begin block 3 */
		// Start line: 1184
	/* end block 3 */
	// End Line: 1185

	/* begin block 4 */
		// Start line: 1184
	/* end block 4 */
	// End Line: 1185

void Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
               (char *f,char *n,int ctrl,int rx,int ry,int cx,int cy,Draw_tPixMap *pmx)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  uchar uVar5;
  undefined2 uVar6;
  int iVar7;
  int clutx;
  uint uVar8;
  uint uVar9;
  uchar uVar10;
  int iVar11;
  uint bpp;
  uint x;
  uint y;
  char cVar12;
  int cluty;
  char local_48;
  
  if (f != (char *)0x0) {
    n = (char *)locateshapez((int)f,(int *)n);
  }
  if ((shapetbl *)n != (shapetbl *)0x0) {
    iVar7 = *(int *)&((shapetbl *)n)->centerx;
    bVar1 = *(byte *)&((shapetbl *)n)->type;
    bpp = (uint)bVar1 & 3;
    uVar2 = *(undefined2 *)&((shapetbl *)n)->next;
    uVar3 = *(undefined2 *)((int)&((shapetbl *)n)->next + 2);
    if (((ctrl & 8U) != 0) && ((bVar1 & 3) != 0)) {
      bpp = 0;
    }
    uVar9 = *(uint *)&((shapetbl *)n)->centerx;
    if (rx == -1) {
      x = 0;
      y = 0xa0;
      *(undefined2 *)&((shapetbl *)n)->next = 1;
      *(undefined2 *)((int)&((shapetbl *)n)->next + 2) = 1;
    }
    else {
      x = ((int)(uVar9 << 0x14) >> 0x14) + rx;
      y = ((int)(uVar9 << 4) >> 0x14) + ry;
    }
    local_48 = (char)*(undefined2 *)&((shapetbl *)n)->next;
    cVar12 = (char)*(undefined2 *)((int)&((shapetbl *)n)->next + 2);
    if ((ctrl & 1U) == 0) {
      local_48 = local_48 + -1;
      cVar12 = cVar12 + -1;
    }
    if (bpp == 2) {
      Texture_Vramcf__FP8shapetbliiii((shapetbl *)n,x,y,0,0);
    }
    else {
      iVar11 = (int)&((shapetbl *)n)->type + ((int)((shapetbl *)n)->type >> 8);
      sVar4 = *(short *)(iVar11 + 4);
      if (bpp == 0) {
        uVar6 = 0x10;
      }
      else {
        uVar6 = 0x100;
      }
      *(undefined2 *)(iVar11 + 4) = uVar6;
      clutx = Texture_CheckForSharedPalette__FiPcP12Draw_tPixMapi
                        (ctrl & 0x40,(char *)(iVar11 + 0x10),pmx,bpp);
      if (clutx == 0) {
        if (cx == -1) {
          Texture_GetClutId__FiPiT1(bpp,&cx,&cy);
        }
        else {
          if (cx == -3) {
            clutx = TextureProcess_DepthColorCluts__FPci
                              ((char *)(iVar11 + 0x10),(int)*(short *)(iVar11 + 4));
            pmx->pad2 = (ushort)clutx;
          }
          else {
            if (cx == -2) {
              cy = 0xa0;
              cx = 0;
              *(undefined2 *)(iVar11 + 4) = 1;
            }
          }
        }
        if ((ctrl & 2U) != 0) {
          clutx = TextureProcess_TransColorCheck__FPci
                            ((char *)(iVar11 + 0x10),(int)*(short *)(iVar11 + 4));
          pmx->flag = (ushort)(clutx << 1);
        }
        if (((ctrl & 8U) != 0) && ((bVar1 & 3) != 0)) {
          if (Texture_palCopy != (Texture_pal8bit *)0x0) {
            Texture_CopyPalette__FPciii((char *)(iVar11 + 0x10),(int)sVar4,cx,cy);
          }
          if ((ctrl & 0x10U) != 0) {
            Texture_ColorCarPalette__FPcT0i((char *)(iVar11 + 0x10),(char *)(iVar11 + 0x10),0x10);
          }
        }
        if (cx < 0) {
          pmx->clut = 0xffff;
        }
        else {
          uVar8 = GetClut(cx,cy);
          pmx->clut = (ushort)uVar8;
        }
        if ((ctrl & 0x40U) != 0) {
          Texture_AddSharedPalette__FPcP12Draw_tPixMapi((char *)(iVar11 + 0x10),pmx,bpp);
        }
      }
      clutx = cx;
      cluty = cy;
      if ((ctrl & 0x20U) != 0) {
        clutx = -1;
        cluty = -1;
      }
      Texture_Vramcf__FP8shapetbliiii((shapetbl *)n,x,y,clutx,cluty);
      *(short *)(iVar11 + 4) = sVar4;
    }
    uVar8 = Texture_GetTranslucencyMode__FP8shapetbl((shapetbl *)n);
    uVar8 = GetTPage(bpp,uVar8,x,y);
    pmx->tpage = (ushort)uVar8;
    uVar8 = x;
    if ((int)x < 0) {
      uVar8 = x + 0x3f;
    }
    iVar11 = x + ((int)uVar8 >> 6) * -0x40;
    if (bpp == 0) {
      iVar11 = iVar11 * 4;
    }
    uVar10 = (uchar)iVar11;
    if (bpp == 1) {
      uVar10 = (uchar)(iVar11 << 1);
    }
    uVar5 = (uchar)y;
    if ((uVar9 & 0x4000) == 0) {
      pmx->u0 = uVar10;
      pmx->v0 = uVar5;
      pmx->u1 = uVar10 + local_48;
      pmx->v1 = uVar5;
      pmx->u2 = uVar10;
      pmx->v2 = uVar5 + cVar12;
      pmx->u3 = uVar10 + local_48;
      pmx->v3 = uVar5 + cVar12;
    }
    else {
      pmx->u0 = uVar10;
      pmx->v0 = uVar5 + cVar12;
      pmx->u1 = uVar10;
      pmx->v1 = uVar5;
      pmx->u2 = uVar10 + local_48;
      pmx->v2 = uVar5 + cVar12;
      pmx->u3 = uVar10 + local_48;
      pmx->v3 = uVar5;
    }
    bpp = *(uint *)&((shapetbl *)n)->centerx;
    *(undefined2 *)&((shapetbl *)n)->next = uVar2;
    *(undefined2 *)((int)&((shapetbl *)n)->next + 2) = uVar3;
    *(uint *)&((shapetbl *)n)->centerx =
         bpp & 0xf000f000 | (iVar7 << 0x14) >> 0x14 & 0xfffU |
         ((iVar7 << 4) >> 0x14 & 0xfffU) << 0x10;
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

	/* begin block 2 */
		// Start line: 1476
	/* end block 2 */
	// End Line: 1477

	/* begin block 3 */
		// Start line: 1481
	/* end block 3 */
	// End Line: 1482

	/* begin block 4 */
		// Start line: 1481
	/* end block 4 */
	// End Line: 1482

	/* begin block 5 */
		// Start line: 1483
	/* end block 5 */
	// End Line: 1484

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

	/* begin block 2 */
		// Start line: 1442
	/* end block 2 */
	// End Line: 1443

	/* begin block 3 */
		// Start line: 1580
	/* end block 3 */
	// End Line: 1581

	/* begin block 4 */
		// Start line: 1580
	/* end block 4 */
	// End Line: 1581

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Texture_InitTrackTexture__Fv(void)

{
  gFreePal4 = (short *)Platform_GetDCTBuffer__FiPc((int)&DAT_000013f0,s_4_bit_Cluts_80056a50);
  gFreePal8 = (short *)Platform_GetDCTBuffer__FiPc(0x10,s_8_bit_Cluts_80056a5c);
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

	/* begin block 2 */
		// Start line: 1614
	/* end block 2 */
	// End Line: 1615

	/* begin block 3 */
		// Start line: 1619
	/* end block 3 */
	// End Line: 1620

	/* begin block 4 */
		// Start line: 1619
	/* end block 4 */
	// End Line: 1620

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Texture_InitMenuClut__Fv(void)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  gFreePal4 = reservememadr(s_4_bits_cluts_80056a68,0x300,0);
  gFreePal8 = reservememadr(s_8_bits_cluts_80056a78,(int)&DAT_00001180,0);
  psVar1 = gFreePal4;
  iVar6 = 0;
  gNbFreePal4 = 0;
  do {
    iVar5 = 0;
    uVar4 = 0x7a00;
    do {
      iVar5 = iVar5 + 1;
      iVar3 = gNbFreePal4 + 1;
      psVar1[gNbFreePal4] = uVar4 | (ushort)(iVar6 + 0x200 >> 4) & 0x3f;
      psVar2 = gFreePal8;
      uVar4 = uVar4 + 0x40;
      gNbFreePal4 = iVar3;
    } while (iVar5 < 0x18);
    iVar6 = iVar6 + 0x10;
    gNbFreePal4 = iVar3;
  } while (iVar6 < 0x100);
  iVar6 = 0;
  gNbFreePal8 = 0;
  gNbFreePal4 = iVar3;
  do {
    iVar5 = 0;
    uVar4 = 0x5700;
    do {
      iVar5 = iVar5 + 1;
      iVar3 = gNbFreePal8 + 1;
      psVar2[gNbFreePal8] = uVar4 | (ushort)(iVar6 + 0x200 >> 4) & 0x3f;
      uVar4 = uVar4 + 0x40;
      gNbFreePal8 = iVar3;
    } while (iVar5 < 0x8c);
    iVar6 = iVar6 + 0x100;
    gNbFreePal8 = iVar3;
  } while (iVar6 < 0x100);
  gNbFreePal8 = iVar3;
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

	/* begin block 2 */
		// Start line: 1719
	/* end block 2 */
	// End Line: 1720

	/* begin block 3 */
		// Start line: 1735
	/* end block 3 */
	// End Line: 1736

	/* begin block 4 */
		// Start line: 1735
	/* end block 4 */
	// End Line: 1736

	/* begin block 5 */
		// Start line: 1738
	/* end block 5 */
	// End Line: 1739

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Texture_InitMenuTexture__Fv(void)

{
  Draw_tPixMap **ppDVar1;
  int iVar2;
  
  iVar2 = 7;
  ppDVar1 = &PTR_80120fec;
  do {
    *ppDVar1 = (Draw_tPixMap *)0x0;
    iVar2 = iVar2 + -1;
    ppDVar1 = ppDVar1 + -1;
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

	/* begin block 2 */
		// Start line: 1745
	/* end block 2 */
	// End Line: 1746

	/* begin block 3 */
		// Start line: 1749
	/* end block 3 */
	// End Line: 1750

	/* begin block 4 */
		// Start line: 1749
	/* end block 4 */
	// End Line: 1750

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Texture_CleanupMenuTexture__Fv(void)

{
  Draw_tPixMap **ppDVar1;
  int iVar2;
  
  iVar2 = 0;
  ppDVar1 = &gMenuPixmap8;
  do {
    if (*ppDVar1 != (Draw_tPixMap *)0x0) {
      Texture_MenuReleaseClutId__Fs((*ppDVar1)->clut);
    }
    *ppDVar1 = (Draw_tPixMap *)0x0;
    iVar2 = iVar2 + 1;
    ppDVar1 = ppDVar1 + 1;
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

	/* begin block 2 */
		// Start line: 1775
	/* end block 2 */
	// End Line: 1776

	/* begin block 3 */
		// Start line: 1779
	/* end block 3 */
	// End Line: 1780

	/* begin block 4 */
		// Start line: 1779
	/* end block 4 */
	// End Line: 1780

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Texture_LoadMenuTexture__Fv(void)

{
  char *f;
  char acStack288 [256];
  
  if (gMenuPixmap8 == (Draw_tPixMap *)0x0) {
    sprintf(acStack288,s__sshow_psh_80056a88,PTR_801164cc);
    f = (char *)loadfileadr(acStack288,0);
    Texture_ResetPaletteSharing__Fv();
    Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
              (f,(char *)PTR_ARRAY_8013dad8,0,0x380,0x180,-1,-1,&gMenuPixmapAlloc);
    gMenuPixmap8 = &gMenuPixmapAlloc;
    Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
              (f,(char *)PTR_ARRAY_8013dae0,0,0x380,0x180,-1,-1,&Draw_tPixMap_80121000);
    PTR_ARRAY_80120fd4[0] = &Draw_tPixMap_80121000;
    Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
              (f,(char *)PTR_ARRAY_8013dae8,0,0x380,0x180,-1,-1,&Draw_tPixMap_80121010);
    PTR_80120fdc = &Draw_tPixMap_80121010;
    Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
              (f,(char *)PTR_ARRAY_8013daf0,0,0x380,0x180,-1,-1,&Draw_tPixMap_80121020);
    PTR_80120fe0 = &Draw_tPixMap_80121020;
    Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
              (f,(char *)PTR_ARRAY_8013daf8,0,0x380,0x180,-1,-1,&Draw_tPixMap_80121030);
    PTR_80120fe4 = &Draw_tPixMap_80121030;
    Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap
              (f,(char *)PTR_ARRAY_8013db00,0,0x380,0x180,-1,-1,Draw_tPixMap_ARRAY_80121040);
    PTR_80120fe8 = Draw_tPixMap_ARRAY_80121040;
    purgememadr((int)f);
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

	/* begin block 2 */
		// Start line: 1861
	/* end block 2 */
	// End Line: 1862

	/* begin block 3 */
		// Start line: 1864
	/* end block 3 */
	// End Line: 1865

	/* begin block 4 */
		// Start line: 1864
	/* end block 4 */
	// End Line: 1865

	/* begin block 5 */
		// Start line: 1868
	/* end block 5 */
	// End Line: 1869

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

	/* begin block 2 */
		// Start line: 1876
	/* end block 2 */
	// End Line: 1877

	/* begin block 3 */
		// Start line: 1880
	/* end block 3 */
	// End Line: 1881

	/* begin block 4 */
		// Start line: 1880
	/* end block 4 */
	// End Line: 1881

	/* begin block 5 */
		// Start line: 1882
	/* end block 5 */
	// End Line: 1883

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Texture_KillMenuTexture__Fv(void)

{
  purgememadr((int)gFreePal4);
  purgememadr((int)gFreePal8);
  return;
}





