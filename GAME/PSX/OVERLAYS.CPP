#include "NFS4.H"
#include "OVERLAYS.H"

// decompiled code
// original method signature: 
// void /*$ra*/ OptionsBarThing__Fiiii(int x /*$s3*/, int y /*$s0*/, int w /*$s4*/, int h /*$s2*/)
 // line 39, offset 0x800d9968
	/* begin block 1 */
		// Start line: 40
		// Start offset: 0x800D9968
	/* end block 1 */
	// End offset: 0x800D9968
	// End Line: 40

void OptionsBarThing__Fiiii(int x,int y,int w,int h)
{
  char *str;
  char *str_00;
  int iVar1;
  
  Hud_GoTpage__Fi(1);
  str = TextSys_Word__Fi(0x40);
  str_00 = TextSys_Word__Fi(0x40);
  iVar1 = Hud_BuildString__FPciiiib(str_00,0,0,0,0,1);
  Hud_BuildString__FPciiiib(str,0xa0 - (iVar1 >> 1),y + h + -6,0xbebe,0,0);
  Hud_FBuildF4__FiiiiiUlcc(0,x,y + h + -8,w,8,0,0,0);
  Hud_GoTpage__Fi(0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ RaceSummary__Fv()
 // line 53, offset 0x800d9a48
	/* begin block 1 */
		// Start line: 54
		// Start offset: 0x800D9A48
		// Variables:
	// 		short i; // $s3
	// 		char string[40]; // stack offset -152
	// 		short HUD_STATS_POS_X; // $s6
	// 		short HUD_STATS_SIZE_W; // stack offset -112
	// 		short HUD_STATS_SIZE_H; // stack offset -104
	// 		short HUD_STATS_POS_Y; // stack offset -96
	// 		short colpos; // stack offset -80
	// 		short colname; // stack offset -72
	// 		short colcar; // stack offset -64
	// 		short coltime; // stack offset -56
	// 		short colbestlap; // stack offset -48

		/* begin block 1.1 */
			// Start line: 105
			// Start offset: 0x800D9CC8

			/* begin block 1.1.1 */
				// Start line: 105
				// Start offset: 0x800D9CDC
				// Variables:
			// 		int pos; // $s2
			/* end block 1.1.1 */
			// End offset: 0x800D9F38
			// End Line: 150
		/* end block 1.1 */
		// End offset: 0x800D9F40
		// End Line: 153
	/* end block 1 */
	// End offset: 0x800D9F40
	// End Line: 156

void RaceSummary__Fv(void)
{
  char *string;
  int y;
  uint w;
  int y_00;
  int *piVar1;
  ushort uVar2;
  int x;
  int iVar3;
  char acStack152 [40];
  ushort local_70;
  short local_68;
  short local_60;
  int local_58;
  int local_54;
  ushort local_50;
  ushort local_48;
  ushort local_40;
  ushort local_38;
  ushort local_30;
  
  x = 8;
  if (DAT_801131f0 == 1) {
    x = 0x28;
  }
  local_70 = 0x130;
  if (DAT_801131f0 == 1) {
    local_70 = 0xef;
  }
  y_00 = (Cars_gNumRaceCars + 1) * 0xc + 0x1e;
  local_68 = (short)y_00;
  y_00 = y_00 * 0x10000;
  local_58 = y_00 >> 0x10;
  y_00 = y_00 >> 0x11;
  local_54 = 0x78 - y_00;
  string = TextSys_Word__Fi(0x38);
  y = textpixels(string);
  y_00 = -y_00;
  Font_TextColor__Fi(6);
  string = TextSys_Word__Fi(0x38);
  Font_TextXY__FPcii(string,(0xa0 - (y >> 1)) * 0x10000 >> 0x10,y_00 + 0x76);
  Font_TextColor__Fi(3);
  string = TextSys_Word__Fi(0x2e);
  y = (y_00 + 0x85) * 0x10000 >> 0x10;
  Font_TextXY__FPcii(string,x + 0x11,y);
  string = TextSys_Word__Fi(0x3a);
  Font_TextXY__FPcii(string,x + 0x5f,y);
  string = TextSys_Word__Fi(0x3b);
  Font_TextXY__FPcii(string,x + 0xa7,y);
  local_50 = (ushort)x;
  local_48 = (ushort)(x + 0x11);
  local_40 = (ushort)(x + 0x5f);
  local_38 = (ushort)(x + 0xa7);
  local_60 = (short)local_54;
  local_30 = (ushort)(x + 0xe1);
  if (DAT_801131f0 != 1) {
    string = TextSys_Word__Fi(0x3c);
    Font_TextXY__FPcii(string,x + 0xe1,y);
  }
  iVar3 = (y_00 + 0x87) * 0x10000 >> 0x10;
  Hud_FBuildF4__FiiiiiUlcc(0,x,iVar3 + 0xc,(uint)local_70,1,0,0,0);
  y_00 = local_54;
  y = local_58 + -8;
  Hud_FBuildF4__FiiiiiUlcc(0,x + 0xf,local_54,1,y,0,0,0);
  Hud_FBuildF4__FiiiiiUlcc(0,x + 0x5d,y_00,1,y,0,0,0);
  Hud_FBuildF4__FiiiiiUlcc(0,x + 0xa5,y_00,1,y,0,0,0);
  if (DAT_801131f0 != 1) {
    Hud_FBuildF4__FiiiiiUlcc(0,x + 0xdf,y_00,1,y,0,0,0);
  }
  uVar2 = 0;
  do {
    if (Cars_gNumRaceCars <= (int)(short)uVar2) {
      y = (int)local_60;
      w = (uint)local_70;
      y_00 = (int)local_68;
      OptionsBarThing__Fiiii(x,y,w,y_00);
      Hud_RenderPauseBox__Fiiii(x,y,w,y_00);
      return;
    }
    y_00 = *(int *)((&_Cars_gRaceCarList)[(int)(short)uVar2] + 0x3d0);
    if (y_00 * 2 + 4 < iGp0000144c) {
      y = 4;
      if ((*(uint *)((&_Cars_gRaceCarList)[(int)(short)uVar2] + 0x260) & 4) != 0) {
        y = 3;
      }
      Font_TextColor__Fi(y);
      sprintf(acStack152,"%d",y_00);
      y = iVar3 + y_00 * 0xc;
      Font_TextXY__FPcii(acStack152,(uint)local_50 | 1,y);
      Font_TextColor__Fi(3);
      piVar1 = (int *)((int)&_Cars_gRaceCarList + ((int)((uint)uVar2 << 0x10) >> 0xe));
      sprintf(acStack152,"%s",*(int *)(*piVar1 + 0x288) + 0x5c);
      Font_TextXY__FPcii(acStack152,(uint)local_48,y);
      y = 4;
      if ((*(uint *)(*piVar1 + 0x260) & 4) != 0) {
        y = 3;
      }
      Font_TextColor__Fi(y);
      sprintf(acStack152,"%s",(&_Cars_gRaceCarList)[(int)(short)uVar2] + 0x249);
      Font_TextXY__FPcii(acStack152,(uint)local_40,iVar3 + y_00 * 0xc);
      if (DAT_801132a4 == (int)(short)uVar2) {
        y = 0x36;
LAB_800d9ea4:
        string = TextSys_Word__Fi(y);
        sprintf(acStack152,string);
      }
      else {
        if ((GameSetup_gData == 1) &&
           (y = 0x3d, *(int *)((&_Cars_gRaceCarList)[(int)(short)uVar2] + 0x3c8) != 0))
        goto LAB_800d9ea4;
        y = *(int *)((int)&_Cars_gRaceCarList + ((int)((uint)uVar2 << 0x10) >> 0xe));
        if (*(int *)(y + 0x3cc) != 2) {
          y = 0x35;
          goto LAB_800d9ea4;
        }
        Hud_ParseTime__FiPc(*(int *)(y + 0x3d4),acStack152);
      }
      Font_TextXY__FPcii(acStack152,(uint)local_38,iVar3 + y_00 * 0xc);
      if (DAT_801131f0 != 1) {
        y = *(int *)(*(int *)((int)&_Cars_gRaceCarList + ((int)((uint)uVar2 << 0x10) >> 0xe)) + 1000
                    );
        if (y == 0) {
          y = 0;
        }
        Hud_ParseTime__FiPc(y,acStack152);
        Font_TextXY__FPcii(acStack152,(uint)local_30,iVar3 + y_00 * 0xc);
      }
    }
    uVar2 = uVar2 + 1;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ RaceStatistics__Fv()
 // line 165, offset 0x800d9fbc
	/* begin block 1 */
		// Start line: 166
		// Start offset: 0x800D9FBC
		// Variables:
	// 		short i; // $s7
	// 		short j; // $s1
	// 		short col1; // $s6
	// 		short col2; // $s5
	// 		char string[40]; // stack offset -144
	// 		short HUD_STATS_POS_X; // stack offset -104
	// 		short HUD_STATS_SIZE_W; // stack offset -96
	// 		short HUD_STATS_SIZE_H; // stack offset -88
	// 		short HUD_STATS_POS_Y; // stack offset -80
	// 		short HUD_STATS_HOTPURSUIT_Y; // stack offset -64

		/* begin block 1.1 */
			// Start line: 217
			// Start offset: 0x800DA1A4

			/* begin block 1.1.1 */
				// Start line: 217
				// Start offset: 0x800DA1D0
				// Variables:
			// 		int colmid; // $s2
			/* end block 1.1.1 */
			// End offset: 0x800DA68C
			// End Line: 316
		/* end block 1.1 */
		// End offset: 0x800DA69C
		// End Line: 319
	/* end block 1 */
	// End offset: 0x800DA69C
	// End Line: 321

void RaceStatistics__Fv(void)
{
  char *string;
  int x;
  int h;
  int color;
  int y;
  int y_00;
  short sVar1;
  int w;
  short sVar2;
  ushort uVar3;
  int iVar4;
  char acStack144 [40];
  short local_68;
  short local_60;
  ushort local_58;
  short local_50;
  int local_48;
  int local_44;
  short local_40;
  int local_38;
  int local_34;
  int local_30;
  
  sVar1 = (short)Cars_gNumHumanRaceCars * 0x96;
  sVar2 = ((short)DAT_801131f0 + 1) * 0xc;
  local_58 = sVar2 + 0x28;
  h = Cars_gNumHumanRaceCars * -0x4b;
  w = h + 0xa0;
  local_68 = (short)w;
  if (DAT_801131f0 == 1) {
    local_58 = sVar2 + 0x1c;
  }
  if (GameSetup_gData == 1) {
    local_58 = local_58 + 0x1b;
  }
  local_48 = (uint)local_58 << 0x10;
  y = local_48 >> 0x11;
  local_44 = 0x78 - y;
  local_60 = sVar1;
  string = TextSys_Word__Fi(0x39);
  x = textpixels(string);
  h = h + 0xaa;
  sVar2 = 0xa0;
  local_50 = (short)local_44;
  y = -y;
  y_00 = y + 0x76;
  iVar4 = y_00 + (DAT_801131f0 + 2) * 0xc + 0x13;
  local_40 = (short)iVar4;
  if (1 < Cars_gNumHumanRaceCars) {
    sVar2 = 0x55;
  }
  Font_TextColor__Fi(6);
  string = TextSys_Word__Fi(0x39);
  Font_TextXY__FPcii(string,(0xa0 - (x >> 1)) * 0x10000 >> 0x10,y_00);
  x = w * 0x10000 >> 0x10;
  w = (y + 0x87) * 0x10000 >> 0x10;
  Hud_FBuildF4__FiiiiiUlcc(0,x,w + 0xb,(int)sVar1,1,0,0,0);
  if (GameSetup_gData == 1) {
    Hud_FBuildF4__FiiiiiUlcc(0,x,iVar4 * 0x10000 >> 0x10,(int)sVar1,1,0,0,0);
  }
  uVar3 = 0;
  local_34 = local_44;
  local_38 = local_48 >> 0x10;
  local_30 = local_38 + -8;
  do {
    y = (int)(short)uVar3;
    if (Cars_gNumHumanRaceCars <= y) {
      x = (int)local_68;
      y = (int)local_50;
      w = (int)local_60;
      h = (int)(short)local_58;
      OptionsBarThing__Fiiii(x,y,w,h);
      Hud_RenderPauseBox__Fiiii(x,y,w,h);
      return;
    }
    x = textpixels((char *)(*(int *)((&_Cars_gRaceCarList)[y] + 0x288) + 0x5c));
    Hud_FBuildF4__FiiiiiUlcc(0,(int)sVar2 + -2,w + 0xb,1,local_38 - ((w - local_34) + 0x13),0,0,0);
    sVar1 = (short)h;
    if (0 < y) {
      Hud_FBuildF4__FiiiiiUlcc(0,(int)sVar1 + -2,local_34,1,local_30,0,0,0);
    }
    if (2 < iGp00001450) {
      Font_TextColor__Fi(3);
      sprintf(acStack144,"%s",*(int *)((&_Cars_gRaceCarList)[y] + 0x288) + 0x5c);
      Font_TextXY__FPcii(acStack144,(int)sVar2 - ((x >> 1) + 2),w + -4);
    }
    if ((DAT_801131f0 != 1) && (x = 0, 0 < DAT_801131f0)) {
      y_00 = 0;
      do {
        if ((y_00 >> 0x10) * 2 + 4 < iGp00001450) {
          iVar4 = (&_Cars_gHumanRaceCarList)[y];
          y_00 = *(int *)(iVar4 + (y_00 >> 0x10) * 4 + 0x3d8);
          if ((y_00 == 0) || (color = 3, y_00 != *(int *)(iVar4 + 1000))) {
            color = 4;
          }
          Font_TextColor__Fi(color);
          string = TextSys_Word__Fi(0x34);
          y_00 = (int)(short)x;
          sprintf(acStack144,string,y_00 + 1);
          Font_TextXY__FPcii(acStack144,(int)sVar1,w + y_00 * 0xc + 0xc);
          y_00 = *(int *)((&_Cars_gHumanRaceCarList)[y] + y_00 * 4 + 0x3d8);
          if (y_00 == 0) {
            y_00 = 0;
          }
          Hud_ParseTime__FiPc(y_00,acStack144);
          Font_TextXY__FPcii(acStack144,(int)sVar2 + 5,w + (int)(short)x * 0xc + 0xc);
        }
        x = x + 1;
        y_00 = x * 0x10000;
      } while (x * 0x10000 >> 0x10 < DAT_801131f0);
    }
    if (DAT_801131f0 * 2 + 4 < iGp00001450) {
      string = TextSys_Word__Fi(0x37);
      sprintf(acStack144,string);
      Font_TextColor__Fi(3);
      y = w + DAT_801131f0 * 0xc;
      if (DAT_801131f0 != 1) {
        y = y + 0xc;
      }
      Font_TextXY__FPcii(acStack144,(int)sVar1,y);
      if (DAT_801132a4 == (int)(short)uVar3) {
        x = 0x36;
LAB_800da4e8:
        string = TextSys_Word__Fi(x);
        sprintf(acStack144,string);
      }
      else {
        y = (&_Cars_gHumanRaceCarList)[(int)(short)uVar3];
        if (*(int *)(y + 0x3cc) != 2) {
          if ((GameSetup_gData != 1) || (x = 0x3d, *(int *)(y + 0x3c8) == 0)) {
            x = 0x35;
          }
          goto LAB_800da4e8;
        }
        Hud_ParseTime__FiPc(*(int *)(y + 0x3d4),acStack144);
      }
      y = w;
      if (DAT_801131f0 != 1) {
        y = w + DAT_801131f0 * 0xc;
      }
      Font_TextXY__FPcii(acStack144,(int)sVar2 + 5,y + 0xc);
    }
    if (GameSetup_gData == 1) {
      if (DAT_801131f0 * 2 + 6 < iGp00001450) {
        string = TextSys_Word__Fi(0x3e);
        sprintf(acStack144,string);
        Font_TextColor__Fi(3);
        y = (int)local_40;
        Font_TextXY__FPcii(acStack144,(int)sVar1,y + 1);
        sprintf(acStack144,"%d",
                *(undefined4 *)
                 (*(int *)((int)&_Cars_gHumanRaceCarList + ((int)((uint)uVar3 << 0x10) >> 0xe)) +
                 0x3c0));
        Font_TextXY__FPcii(acStack144,(int)sVar2 + 5,y + 1);
      }
      if (DAT_801131f0 * 2 + 8 < iGp00001450) {
        string = TextSys_Word__Fi(0x3f);
        sprintf(acStack144,string);
        Font_TextColor__Fi(3);
        y = (int)local_40;
        Font_TextXY__FPcii(acStack144,(int)sVar1,y + 0xd);
        sprintf(acStack144,"%d",
                *(undefined4 *)
                 (*(int *)((int)&_Cars_gHumanRaceCarList + ((int)((uint)uVar3 << 0x10) >> 0xe)) +
                 0x3c4));
        Font_TextXY__FPcii(acStack144,(int)sVar2 + 5,y + 0xd);
      }
    }
    h = h + 0x96;
    sVar2 = sVar2 + 0x96;
    uVar3 = uVar3 + 1;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_BTCStats__Fsb(short player /*stack -88*/, unsigned int postgame /*stack 4*/)
 // line 326, offset 0x800da728
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x800DA728
		// Variables:
	// 		short i; // $s5
	// 		short col[4]; // stack offset -136
	// 		short startY; // $s6
	// 		char string[40]; // stack offset -128
	// 		unsigned int chasinghuman; // $fp
	// 		unsigned int showname; // $s4
	// 		short PLAYERWIDTH; // $a2
	// 		unsigned int showtimeleft; // stack offset -80
	// 		short HUD_STATS_POS_X; // stack offset -72
	// 		short HUD_STATS_SIZE_W; // stack offset -64
	// 		short HUD_STATS_SIZE_H; // $s7
	// 		short HUD_STATS_POS_Y; // stack offset -56
	// 		short HUD_STATS_TEXT_START_X; // $s3
	// 		short HUD_STATS_TITLE_START_X; // $s5
	// 		short HUD_STATS_TITLE_START_Y; // $s0
	// 		short HUD_STATS_TEXT_START_Y; // $a2
	/* end block 1 */
	// End offset: 0x800DAE30
	// End Line: 442

void Hud_BTCStats__Fsb(short player,uint postgame)
{
  short sVar1;
  bool bVar2;
  bool bVar3;
  char *string;
  int h;
  int y;
  int wordnum;
  short sVar4;
  uint uVar5;
  int iVar6;
  int y_00;
  short sVar7;
  int wordnum_00;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  char acStack128 [40];
  ushort local_58;
  int local_50;
  short local_48;
  ushort local_40;
  short local_38;
  int local_30;
  
  bVar2 = false;
  bVar3 = false;
  if (1 < Cars_gNumHumanRaceCars) {
    if ((*(uint *)((&_Cars_gHumanRaceCarList)[1 - (int)player] + 0x260) & 0x200) == 0) {
      bVar2 = true;
    }
    else {
      bVar3 = true;
    }
  }
  uVar5 = 0xe7;
  if (bVar2) {
    uVar5 = 0xa1;
  }
  local_50 = 0;
  if ((postgame == 0) ||
     (*(int *)(&DAT_80120bcc +
              ((int)(short)(&Hud_NextPerp)[(int)player] + -1) * 0x10 + (int)player * 0xa0) != 0)) {
    local_50 = 1;
  }
  local_40 = (short)uVar5 + 6;
  y = ((int)*(short *)((int)&Hud_NextPerp + ((int)((uint)(ushort)player << 0x10) >> 0xf)) + 1) * 0xc
  ;
  wordnum_00 = y + 0x16;
  sVar4 = -(short)(uVar5 >> 1);
  local_48 = sVar4 + 0xa0;
  if (local_50 != 0) {
    wordnum_00 = y + 0x22;
  }
  if (postgame != 0) {
    wordnum_00 = wordnum_00 + 8;
  }
  sVar7 = (short)wordnum_00;
  y = wordnum_00 << 0x10;
  if (bVar3) {
    sVar7 = (short)(wordnum_00 + 0xc);
    y = (wordnum_00 + 0xc) * 0x10000;
  }
  local_38 = 0x78 - (short)(y >> 0x11);
  wordnum_00 = 0x47;
  if (postgame != 0) {
    wordnum_00 = 0x48;
  }
  local_58 = player;
  string = TextSys_Word__Fi(wordnum_00);
  wordnum_00 = textpixels(string);
  y = -(y >> 0x11);
  iVar6 = y + 0x85;
  local_88 = sVar4 + 0xa3;
  if (bVar2) {
    local_86 = sVar4 + 0xb3;
    local_84 = 0xc;
  }
  else {
    local_86 = sVar4 + 0xb6;
    local_84 = 0x50;
  }
  local_84 = sVar4 + 0xa7 + local_84;
  if (bVar2) {
    local_82 = 0x50;
  }
  else {
    local_82 = 0x96;
  }
  local_82 = sVar4 + 0xa7 + local_82;
  Font_TextColor__Fi(6);
  wordnum = 0x47;
  if (postgame != 0) {
    wordnum = 0x48;
  }
  string = TextSys_Word__Fi(wordnum);
  Font_TextXY__FPcii(string,(0xa0 - (wordnum_00 >> 1)) * 0x10000 >> 0x10,
                     (int)(short)((short)y + 0x76));
  if (bVar3) {
    Font_TextColor__Fi(4);
    sVar4 = (short)iVar6;
    iVar6 = y + 0x91;
    Font_TextXY__FPcii((char *)(*(int *)(*(int *)((int)&_Cars_gRaceCarList +
                                                 ((int)((uint)local_58 << 0x10) >> 0xe)) + 0x288) +
                               0x5c),(int)local_84,(int)sVar4);
  }
  Font_TextColor__Fi(3);
  sVar4 = (short)iVar6;
  if (!bVar2) {
    string = TextSys_Word__Fi(0x4a);
    Font_TextXY__FPcii(string,(int)local_86,(int)sVar4);
  }
  string = TextSys_Word__Fi(0x4b);
  y_00 = (int)sVar4;
  wordnum = 1;
  Font_TextXY__FPcii(string,(int)local_84,y_00);
  string = TextSys_Word__Fi(0x4c);
  Font_TextXY__FPcii(string,(int)local_82,y_00);
  y_00 = y_00 + 0xf;
  Hud_FBuildF4__FiiiiiUlcc(0,(int)local_48,y_00,(uint)local_40,1,0,0,0);
  y = (int)local_38;
  wordnum_00 = 0x10000;
  do {
    h = y_00 - y;
    if (postgame != 0) {
      h = (y_00 - y) + 8;
    }
    h = (int)sVar7 - h;
    if (local_50 != 0) {
      h = h + -0x10;
    }
    Hud_FBuildF4__FiiiiiUlcc
              (0,(int)*(short *)((int)&local_88 + (wordnum_00 >> 0xf)) + -2,y_00,1,h,0,0,0);
    wordnum = wordnum + 1;
    wordnum_00 = wordnum * 0x10000;
  } while (wordnum * 0x10000 >> 0x10 < 4);
  if (local_50 != 0) {
    wordnum_00 = (int)sVar4 + 0xf + (int)sVar7;
    y = ((int)sVar4 + 0xf) - (int)local_38;
    if (postgame == 0) {
      y = (wordnum_00 - y) + -0x10;
    }
    else {
      y = (wordnum_00 - y) + -0x18;
    }
    Hud_FBuildF4__FiiiiiUlcc(0,(int)local_48,y,(uint)local_40,1,0,0,0);
  }
  iVar6 = iVar6 + 0xf;
  wordnum_00 = (uint)local_58 << 0x10;
  y = 0;
  sVar4 = 0;
  if (0 < *(short *)((int)&Hud_NextPerp + (wordnum_00 >> 0xf))) {
    local_30 = iVar6 * 0x10000 >> 0x10;
    do {
      wordnum_00 = wordnum_00 >> 0x10;
      wordnum = (int)(short)y;
      if (wordnum * 2 + 4 < (int)(&StatsTimer)[wordnum_00]) {
        Font_TextColor__Fi(4);
        sprintf(acStack128,"%d",wordnum + 1);
        y_00 = local_30 + wordnum * 0xc;
        Font_TextXY__FPcii(acStack128,(int)local_88,y_00);
        if (!bVar2) {
          sprintf(acStack128,"%s",&BTCPerpInfo + wordnum_00 * 0xa0 + wordnum * 0x10);
          Font_TextXY__FPcii(acStack128,(int)local_86,y_00);
        }
        wordnum = wordnum * 0x10 + wordnum_00 * 0xa0;
        Hud_ParseTime__FiPc(*(int *)(&DAT_80120bc8 + wordnum),acStack128);
        Font_TextXY__FPcii(acStack128,(int)local_84,y_00);
        wordnum_00 = 0x49;
        if (*(int *)(&DAT_80120bcc + wordnum) != 0) {
          wordnum_00 = 0x3d;
        }
        string = TextSys_Word__Fi(wordnum_00);
        Font_TextXY__FPcii(string,(int)local_82,y_00);
      }
      y = y + 1;
      sVar4 = (short)y;
      wordnum_00 = (uint)local_58 << 0x10;
    } while (y * 0x10000 >> 0x10 < (int)*(short *)((int)&Hud_NextPerp + (wordnum_00 >> 0xf)));
  }
  if ((local_50 != 0) &&
     ((int)sVar4 * 2 + 4 < *(int *)((int)&StatsTimer + ((int)((uint)local_58 << 0x10) >> 0xe)))) {
    Font_TextColor__Fi(3);
    Hud_ParseTime__FiPc(0,acStack128);
    string = TextSys_Word__Fi(0x4d);
    Font_TextXY__FPcii(string,(int)local_88,(int)(short)iVar6 + (int)sVar4 * 0xc + 2);
    sVar1 = local_84;
    if (bVar2) {
      sVar1 = local_82;
    }
    Font_TextXY__FPcii(acStack128,(int)sVar1,(iVar6 * 0x10000 >> 0x10) + (int)sVar4 * 0xc + 2);
  }
  if (postgame != 0) {
    OptionsBarThing__Fiiii((int)local_48,(int)local_38,(uint)local_40,(int)sVar7);
  }
  Hud_RenderPauseBox__Fiiii((int)local_48,(int)local_38,(uint)local_40,(int)sVar7);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Hud_RenderStatsView__Fv()
 // line 450, offset 0x800dae8c
	/* begin block 1 */
		// Start line: 451
		// Start offset: 0x800DAE8C
		// Variables:
	// 		int screen; // $a0
	/* end block 1 */
	// End offset: 0x800DB0A8
	// End Line: 508

void Hud_RenderStatsView__Fv(void)
{
  bool bVar1;
  short player;
  
  bVar1 = false;
  if ((uRam00000260 & 0x200) == 0) {
    if (DAT_801131f8 == 1) goto LAB_800daef0;
    if (Cars_gNumRaceCars != 1) goto LAB_800dafe8;
LAB_800dafe4:
    bVar1 = true;
  }
  else {
    if (DAT_801131f8 != 1) {
LAB_800daed0:
      bVar1 = false;
      goto LAB_800dafe8;
    }
LAB_800daef0:
    if ((uRam00000260 & 0x200) == 0) {
      if ((uRam00000260 & 0x200) != 0) goto LAB_800daf4c;
    }
    else {
      if ((uRam00000260 & 0x200) == 0) {
        bVar1 = false;
        goto LAB_800dafe8;
      }
LAB_800daf4c:
      if ((uRam00000260 & 0x200) == 0) goto LAB_800dafe4;
      if ((sGp00001448 != 0) || (DAT_801131f8 != 1)) goto LAB_800daed0;
    }
    if (((uRam00000260 & 0x200) != 0) && ((DAT_801131f8 == 1 && (sGp0000144a != 0)))) {
      bVar1 = true;
    }
  }
LAB_800dafe8:
  if (bVar1) {
    iGp0000144c = 0;
    iGp00001450 = iGp00001450 + 1;
    if (10000 < iGp00001450) {
      iGp00001450 = 10000;
    }
    if (((uRam00000260 & 0x200) == 0) || (player = 1, DAT_801131f8 != 1)) {
      RaceStatistics__Fv();
      return;
    }
  }
  else {
    iGp00001450 = 0;
    iGp0000144c = iGp0000144c + 1;
    if (10000 < iGp0000144c) {
      iGp0000144c = 10000;
    }
    player = 0;
    if ((uRam00000260 & 0x200) == 0) {
      RaceSummary__Fv();
      return;
    }
  }
  Hud_BTCStats__Fsb(player,1);
  return;


}





