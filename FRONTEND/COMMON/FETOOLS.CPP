#include "THISDUST.H"
#include "FETOOLS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ s_upper__FPc(char *string /*$s0*/)
 // line 90, offset 0x800268f0
	/* begin block 1 */
		// Start line: 91
		// Start offset: 0x800268F0
		// Variables:
	// 		int n; // $a0
	// 		int len; // $a2
	/* end block 1 */
	// End offset: 0x80026940
	// End Line: 96

	/* begin block 2 */
		// Start line: 180
	/* end block 2 */
	// End Line: 181

	/* begin block 3 */
		// Start line: 180
	/* end block 3 */
	// End Line: 181

void s_upper__FPc(char *string)

{
  size_t sVar1;
  int iVar2;
  byte *pbVar3;
  
  sVar1 = strlen(string);
  iVar2 = 0;
  pbVar3 = (byte *)string;
  if (0 < (int)sVar1) {
    do {
      if ((uint)*pbVar3 - 0x61 < 0x1a) {
        *pbVar3 = *pbVar3 - 0x20;
      }
      iVar2 = iVar2 + 1;
      pbVar3 = (byte *)(string + iVar2);
    } while (iVar2 < (int)sVar1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ s_lower__FPc(char *string /*$s0*/)
 // line 98, offset 0x80026950
	/* begin block 1 */
		// Start line: 99
		// Start offset: 0x80026950
		// Variables:
	// 		int n; // $a0
	// 		int len; // $a2
	/* end block 1 */
	// End offset: 0x800269A0
	// End Line: 104

	/* begin block 2 */
		// Start line: 193
	/* end block 2 */
	// End Line: 194

	/* begin block 3 */
		// Start line: 196
	/* end block 3 */
	// End Line: 197

	/* begin block 4 */
		// Start line: 196
	/* end block 4 */
	// End Line: 197

void s_lower__FPc(char *string)

{
  size_t sVar1;
  int iVar2;
  byte *pbVar3;
  
  sVar1 = strlen(string);
  iVar2 = 0;
  pbVar3 = (byte *)string;
  if (0 < (int)sVar1) {
    do {
      if ((uint)*pbVar3 - 0x41 < 0x1a) {
        *pbVar3 = *pbVar3 + 0x20;
      }
      iVar2 = iVar2 + 1;
      pbVar3 = (byte *)(string + iVar2);
    } while (iVar2 < (int)sVar1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeTools_DrawPSXButton__FUcUsii(unsigned char padType /*$a0*/, unsigned short button /*$a1*/, int x /*$s2*/, int y /*$s1*/)
 // line 182, offset 0x800269b0
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x800269B0
		// Variables:
	// 		struct tDrawShapeExtended drawFlags; // stack offset -40
	// 		int type; // $t0
	/* end block 1 */
	// End offset: 0x80026B90
	// End Line: 279

	/* begin block 2 */
		// Start line: 340
	/* end block 2 */
	// End Line: 341

	/* begin block 3 */
		// Start line: 309
	/* end block 3 */
	// End Line: 310

	/* begin block 4 */
		// Start line: 309
	/* end block 4 */
	// End Line: 310

void FeTools_DrawPSXButton__FUcUsii(uchar padType,ushort button,int x,int y)

{
  int index;
  int y_00;
  tDrawShapeExtended tStack40;
  
  y_00 = y + 1;
  tStack40.tint[0] = &DAT_0000bebe;
  if (button == 0x50) {
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0x1a,0x18,x + 3,y + -1,0,0,&tStack40);
    index = 0x1b;
    x = x + 4;
    y_00 = y + 5;
  }
  else {
    if (button == 0xa0) {
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(0x1c,0x18,x,y,0,0,&tStack40);
      index = 0x1d;
      x = x + 10;
      y_00 = y;
    }
    else {
      if (padType == '#') {
        if (button == 0x1000) {
          index = 0x12;
          y_00 = y + -2;
        }
        else {
          if (button < 0x1001) {
            index = 0;
            if (button == 8) {
              index = 0x15;
              y_00 = y;
            }
          }
          else {
            if (button == 0x4000) {
              index = 0x13;
              y_00 = y + -3;
            }
            else {
              index = 0;
              if (button == 0x8000) {
                index = 0x14;
                y_00 = y + -1;
              }
            }
          }
        }
      }
      else {
        if (button == 0x1000) {
          index = 0xf;
          y_00 = y + -2;
        }
        else {
          if (button < 0x1001) {
            index = 0;
            if (button == 8) {
              index = 0x10;
              x = x + 2;
            }
          }
          else {
            if (button == 0x4000) {
              index = 0xc;
              y_00 = y + -2;
            }
            else {
              index = 0;
              if (button == 0x8000) {
                index = 0xe;
                y_00 = y + -2;
              }
            }
          }
        }
      }
    }
  }
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(index,0x18,x,y_00,0,0,&tStack40);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeTools_init__Fv()
 // line 287, offset 0x80026ba8
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x80026BA8
		// Variables:
	// 		char filename[256]; // stack offset -264
	/* end block 1 */
	// End offset: 0x80026BA8
	// End Line: 288

	/* begin block 2 */
		// Start line: 528
	/* end block 2 */
	// End Line: 529

	/* begin block 3 */
		// Start line: 537
	/* end block 3 */
	// End Line: 538

	/* begin block 4 */
		// Start line: 537
	/* end block 4 */
	// End Line: 538

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeTools_init__Fv(void)

{
  char acStack264 [256];
  
  Font_ExitFromGame__Fv();
  sprintf(acStack264,s__stiny_pfn_80011474,PTR_801164ec);
  font12 = (char *)loadfileadrz(acStack264,0);
  Font_LoadFont__FPciic(font12,0x3c0,0x181,'\0');
  sprintf(acStack264,s__ssmall_pfn_80011480,PTR_801164ec);
  font18 = (char *)loadfileadrz(acStack264,0);
  Font_LoadFont__FPciic(font18,0x380,0x100,'\0');
  sprintf(acStack264,s__stitle_pfn_8001148c,PTR_801164ec);
  fontTitle = (char *)loadfileadrz(acStack264,0);
  Font_LoadFont__FPciic(fontTitle,0x3c0,0x100,'\0');
  currentSize = 3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeTools_deinit__Fv()
 // line 337, offset 0x80026c90
	/* begin block 1 */
		// Start line: 338
		// Start offset: 0x80026C90
	/* end block 1 */
	// End offset: 0x80026C90
	// End Line: 338

	/* begin block 2 */
		// Start line: 660
	/* end block 2 */
	// End Line: 661

	/* begin block 3 */
		// Start line: 666
	/* end block 3 */
	// End Line: 667

	/* begin block 4 */
		// Start line: 666
	/* end block 4 */
	// End Line: 667

	/* begin block 5 */
		// Start line: 668
	/* end block 5 */
	// End Line: 669

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeTools_deinit__Fv(void)

{
  purgememadr((int)font18);
  purgememadr((int)fontTitle);
  purgememadr((int)font12);
  Font_DeInit__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeTools_FormatMoney__FPcl(char *string /*$s2*/, long amount /*$a1*/)
 // line 369, offset 0x80026ce0
	/* begin block 1 */
		// Start line: 370
		// Start offset: 0x80026CE0
		// Variables:
	// 		long absnum; // $s0
	// 		char neg; // $s1
	/* end block 1 */
	// End offset: 0x80026E3C
	// End Line: 378

	/* begin block 2 */
		// Start line: 705
	/* end block 2 */
	// End Line: 706

	/* begin block 3 */
		// Start line: 732
	/* end block 3 */
	// End Line: 733

	/* begin block 4 */
		// Start line: 732
	/* end block 4 */
	// End Line: 733

void FeTools_FormatMoney__FPcl(char *string,long amount)

{
  char *__format;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x20;
  if (amount < 0) {
    amount = -amount;
    uVar3 = 0x2d;
  }
  if (amount < 1000) {
    __format = TextSys_Word__Fi(0x83);
    sprintf(string,__format,uVar3,amount);
  }
  else {
    if (amount < 1000000) {
      __format = TextSys_Word__Fi(0x84);
      iVar2 = amount / 1000;
      iVar1 = amount % 1000;
    }
    else {
      __format = TextSys_Word__Fi(0x85);
      iVar2 = amount / 1000000;
      iVar1 = (amount % 1000000) / 1000;
    }
    sprintf(string,__format,uVar3,iVar2,iVar1);
  }
  return;
}





