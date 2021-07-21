#include "THISDUST.H"
#include "SCREENUSERNAME.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__15tScreenUserName(struct tScreenUserName *this /*$s2*/)
 // line 33, offset 0x8004af88
	/* begin block 1 */
		// Start line: 34
		// Start offset: 0x8004AF88
		// Variables:
	// 		short i; // $s1
	/* end block 1 */
	// End offset: 0x8004B024
	// End Line: 50

	/* begin block 2 */
		// Start line: 66
	/* end block 2 */
	// End Line: 67

	/* begin block 3 */
		// Start line: 66
	/* end block 3 */
	// End Line: 67

void Initialize__15tScreenUserName(tScreenUserName *this)

{
  char *__format;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (int)menu_kUserNameRows;
  *(undefined2 *)&this->callingMenu = 0x80;
  MENUUSERNAME_STARTY = 0x82 - (short)(iVar1 * 0xf >> 1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      __format = TextSys_Word__Fi((iVar1 >> 0x10) + 0x1fb);
      sprintf((char *)((int)&this->fInTransition + (iVar1 >> 0x10) * 9),__format);
      iVar2 = iVar2 + 1;
      iVar1 = iVar2 * 0x10000;
    } while (iVar2 * 0x10000 >> 0x10 < (int)menu_kUserNameRows);
  }
  Initialize__7tScreen((tScreen *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__15tScreenUserNameRsT1PPcT3(struct tScreenUserName *this /*$a0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$s1*/, char **swapFileName /*stack 16*/)
 // line 54, offset 0x8004b048
	/* begin block 1 */
		// Start line: 55
		// Start offset: 0x8004B048
	/* end block 1 */
	// End offset: 0x8004B048
	// End Line: 55

	/* begin block 2 */
		// Start line: 120
	/* end block 2 */
	// End Line: 121

	/* begin block 3 */
		// Start line: 125
	/* end block 3 */
	// End Line: 126

	/* begin block 4 */
		// Start line: 125
	/* end block 4 */
	// End Line: 126

void GetShapeInfo__15tScreenUserNameRsT1PPcT3
               (tScreenUserName *this,short *numPermShapes,short *numSwapShapes,char **permFileName,
               char **swapFileName)

{
  *swapFileName = (char *)0x0;
  *numSwapShapes = 0;
  *numPermShapes = 0x5c;
  sprintf(UserPermFileName,s_zUser_d_800125e0,(uint)(byte)frontEnd.language);
  *permFileName = UserPermFileName;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawVerticalLine__15tScreenUserNamesss(struct tScreenUserName *this /*$a0*/, short x /*$a1*/, short y /*$a2*/, short gridpos /*$a3*/)
 // line 65, offset 0x8004b0a8
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8004B0A8
	/* end block 1 */
	// End offset: 0x8004B0DC
	// End Line: 70

	/* begin block 2 */
		// Start line: 153
	/* end block 2 */
	// End Line: 154

	/* begin block 3 */
		// Start line: 158
	/* end block 3 */
	// End Line: 159

	/* begin block 4 */
		// Start line: 158
	/* end block 4 */
	// End Line: 159

void DrawVerticalLine__15tScreenUserNamesss(tScreenUserName *this,short x,short y,short gridpos)

{
  uint uVar1;
  
  uVar1 = (uint)(ushort)gridpos;
  if ((gridpos < 1) || (gridpos < 0x40)) {
    if (gridpos < 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x40;
  }
  PSXDrawBrightEndLine__Fiiiiiiii
            ((int)&DAT_00785a5a,(int)x,(int)y,2,0xa2,1,(int)(uVar1 << 0x10) >> 0xf,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawHorizontalLine__15tScreenUserNamesss(struct tScreenUserName *this /*$a0*/, short x /*$a1*/, short y /*$a2*/, short gridpos /*$a3*/)
 // line 73, offset 0x8004b128
	/* begin block 1 */
		// Start line: 74
		// Start offset: 0x8004B128
	/* end block 1 */
	// End offset: 0x8004B15C
	// End Line: 77

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

	/* begin block 3 */
		// Start line: 174
	/* end block 3 */
	// End Line: 175

	/* begin block 4 */
		// Start line: 174
	/* end block 4 */
	// End Line: 175

void DrawHorizontalLine__15tScreenUserNamesss(tScreenUserName *this,short x,short y,short gridpos)

{
  uint uVar1;
  
  uVar1 = (uint)(ushort)gridpos;
  if ((gridpos < 1) || (gridpos < 0x40)) {
    if (gridpos < 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x40;
  }
  PSXDrawBrightEndLine__Fiiiiiiii
            ((int)&DAT_00785a5a,(int)x,(int)y,0xc0,1,2,(int)(uVar1 << 0x10) >> 0xf,0xc);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__15tScreenUserName(struct tScreenUserName *this /*stack 0*/)
 // line 80, offset 0x8004b1ac
	/* begin block 1 */
		// Start line: 81
		// Start offset: 0x8004B1AC
		// Variables:
	// 		short i; // $s0
	// 		short k; // $s0
	// 		short x; // $s1
	// 		short y; // $s5
	// 		int gray; // $s0
	// 		short fade; // $a1
	// 		short fadebox; // stack offset -72
	// 		short gridpos; // stack offset -64
	// 		short row; // stack offset -56
	// 		short col; // stack offset -48
	// 		char output[2]; // stack offset -80

		/* begin block 1.1 */
			// Start line: 81
			// Start offset: 0x8004B1AC
			// Variables:
		// 		struct tOptionsMenu *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 81
				// Start offset: 0x8004B1AC
			/* end block 1.1.1 */
			// End offset: 0x8004B1AC
			// End Line: 81
		/* end block 1.1 */
		// End offset: 0x8004B1AC
		// End Line: 81

		/* begin block 1.2 */
			// Start line: 120
			// Start offset: 0x8004B2F0

			/* begin block 1.2.1 */
				// Start line: 124
				// Start offset: 0x8004B320

				/* begin block 1.2.1.1 */
					// Start line: 127
					// Start offset: 0x8004B340

					/* begin block 1.2.1.1.1 */
						// Start line: 129
						// Start offset: 0x8004B354
						// Variables:
					// 		int colText; // $s0
					/* end block 1.2.1.1.1 */
					// End offset: 0x8004B604
					// End Line: 180
				/* end block 1.2.1.1 */
				// End offset: 0x8004B618
				// End Line: 181
			/* end block 1.2.1 */
			// End offset: 0x8004B618
			// End Line: 185
		/* end block 1.2 */
		// End offset: 0x8004B62C
		// End Line: 186
	/* end block 1 */
	// End offset: 0x8004B7A4
	// End Line: 234

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

	/* begin block 3 */
		// Start line: 188
	/* end block 3 */
	// End Line: 189

	/* begin block 4 */
		// Start line: 188
	/* end block 4 */
	// End Line: 189

void DrawBackground__15tScreenUserName(tScreenUserName *this)

{
  char cVar1;
  short x;
  int fade;
  char *sMenuText;
  int iVar2;
  int wordnum;
  short y;
  uint uVar3;
  char local_50;
  undefined local_4f;
  short local_48;
  ushort local_40;
  short local_38;
  short local_30;
  
  _x = *(int *)(*(int *)((this->tScreen)._vf + 6) + 0x74);
  x = (short)_x;
  iVar2 = ((_x << 0x10) >> 0x11) + -0x80;
  local_48 = (short)iVar2;
  if ((iVar2 < 0x80) && (iVar2 < 1)) {
    local_48 = 0;
  }
  else {
    if (0x80 < iVar2) {
      local_48 = 0x80;
    }
  }
  _x = (_x << 0x10) >> 0x12;
  if (((0x7f < _x) || (local_40 = 0, 0 < _x)) && (local_40 = x >> 2, 0x80 < _x)) {
    local_40 = 0x80;
  }
  if ((x < 0x80) && (x < 1)) {
    *(undefined2 *)&this->callingMenu = 0;
  }
  else {
    if (0x80 < x) {
      x = 0x80;
    }
    *(short *)&this->callingMenu = x;
  }
  SubtractiveBox__Fiiiiiiii(0xf0,0x2a,0xc2,0x55,(int)&LAB_00080808,(int)&LAB_00080808,0,0);
  SubtractiveBox__Fiiiiiiii(0xf0,0x7f,0xc2,0x55,0,0,(int)&LAB_00080808,(int)&LAB_00080808);
  uVar3 = (uint)(ushort)MENUUSERNAME_STARTY;
  local_38 = 0;
  local_50 = DAT_800125e8;
  local_4f = DAT_800125e9;
  do {
    if (menu_kUserNameRows <= local_38) {
      SubtractiveBox__Fiiiiiiii(0xf0,0x2a,0xc2,0x55,(int)&DAT_00505050,(int)&DAT_00505050,0,0);
      SubtractiveBox__Fiiiiiiii(0xf0,0x7f,0xc2,0x55,0,0,(int)&DAT_00505050,(int)&DAT_00505050);
      x = 0xfc;
      _x = 0;
      do {
        DrawVerticalLine__15tScreenUserNamesss
                  (this,x,0x2e,(short)(((uint)local_40 - ((_x << 0x10) >> 0xf)) * 0x10000 >> 0x10));
        _x = _x + 1;
        x = x + 0x1c;
      } while (_x * 0x10000 >> 0x10 < 7);
      _x = 0;
      x = MENUUSERNAME_STARTY + -3;
      if (0 < (int)menu_kUserNameRows + 1) {
        do {
          DrawHorizontalLine__15tScreenUserNamesss
                    (this,0xf0,x,
                     (short)(((uint)local_40 + ((int)menu_kUserNameRows - (int)(short)_x) * -2) *
                             0x10000 >> 0x10));
          _x = _x + 1;
          x = x + 0xf;
        } while (_x * 0x10000 >> 0x10 < (int)menu_kUserNameRows + 1);
      }
      _x = 0;
      fade = (int)local_48;
      iVar2 = 0;
      do {
        DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                  (iVar2 >> 0x10,0,0,0,fade,0,(tDrawShapeExtended *)0x0);
        _x = _x + 1;
        iVar2 = _x * 0x10000;
      } while (_x * 0x10000 >> 0x10 < 0x20);
      return;
    }
    _x = 0x102;
    local_30 = 0;
    iVar2 = (int)(short)uVar3;
    while (cVar1 = *(char *)((int)&this->fInTransition + (int)local_30 + (int)local_38 * 9),
          cVar1 != '\0') {
      local_50 = cVar1;
      fade = CalcFadeVal__Fii(0xb54200,(int)*(short *)&this->callingMenu);
      y = (short)((uVar3 - 1) * 0x10000 >> 0x10);
      x = (short)_x;
      switch(local_50) {
      case '!':
        wordnum = 0x205;
        goto LAB_8004b500;
      default:
        FETextRender_FullTextRGB__FPcssics
                  (&local_50,(short)((uint)((_x + 8) * 0x10000) >> 0x10),y,fade,1,2);
        break;
      case '#':
        wordnum = 0x206;
        goto LAB_8004b500;
      case '$':
        sMenuText = TextSys_Word__Fi(0x206);
        FETextRender_FullTextRGB__FPcssics
                  (sMenuText,(short)((uint)((_x + 0x24) * 0x10000) >> 0x10),y,fade,1,2);
        fade = 1;
        do {
          PSXDrawSquare__Fiiiii(0,(int)x + (int)(short)fade * 0x1c + -6,iVar2 + -2,2,0xe);
          fade = fade + 1;
        } while (fade * 0x10000 >> 0x10 < 3);
        break;
      case '&':
        wordnum = 0x207;
LAB_8004b500:
        sMenuText = TextSys_Word__Fi(wordnum);
        FETextRender_FullTextRGB__FPcssics
                  (sMenuText,(short)((uint)((_x + 0x16) * 0x10000) >> 0x10),y,fade,1,2);
        PSXDrawSquare__Fiiiii(0,(int)x + 0x16,iVar2 + -2,2,0xe);
        break;
      case '-':
        break;
      case '@':
        sMenuText = TextSys_Word__Fi(0x205);
        FETextRender_FullTextRGB__FPcssics
                  (sMenuText,(short)((uint)((_x + 0x24) * 0x10000) >> 0x10),y,fade,1,2);
        fade = 1;
        do {
          PSXDrawSquare__Fiiiii(0,(int)x + (int)(short)fade * 0x1c + -6,iVar2 + -2,2,0xe);
          fade = fade + 1;
        } while (fade * 0x10000 >> 0x10 < 3);
        break;
      case '^':
        sMenuText = TextSys_Word__Fi(0x207);
        FETextRender_FullTextRGB__FPcssics
                  (sMenuText,(short)((uint)((_x + 0x4e) * 0x10000) >> 0x10),y,fade,1,2);
        fade = 1;
        do {
          PSXDrawSquare__Fiiiii(0,(int)x + (int)(short)fade * 0x1c + -6,iVar2 + -2,2,0xe);
          fade = fade + 1;
        } while (fade * 0x10000 >> 0x10 < 6);
      }
      _x = _x + 0x1c;
      local_30 = local_30 + 1;
    }
    uVar3 = uVar3 + 0xf;
    local_38 = local_38 + 1;
  } while( true );
}





