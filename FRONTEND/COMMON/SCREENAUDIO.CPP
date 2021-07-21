#include "THISDUST.H"
#include "SCREENAUDIO.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PlaySound__12tScreenAudio(struct tScreenAudio *this /*$s1*/)
 // line 39, offset 0x80045a28
	/* begin block 1 */
		// Start line: 40
		// Start offset: 0x80045A28

		/* begin block 1.1 */
			// Start line: 40
			// Start offset: 0x80045A28

			/* begin block 1.1.1 */
				// Start line: 40
				// Start offset: 0x80045A28

				/* begin block 1.1.1.1 */
					// Start line: 40
					// Start offset: 0x80045A28
				/* end block 1.1.1.1 */
				// End offset: 0x80045A28
				// End Line: 40
			/* end block 1.1.1 */
			// End offset: 0x80045A28
			// End Line: 40
		/* end block 1.1 */
		// End offset: 0x80045AA0
		// End Line: 51

		/* begin block 1.2 */
			// Start line: 63
			// Start offset: 0x80045AA0

			/* begin block 1.2.1 */
				// Start line: 69
				// Start offset: 0x80045AE8
				// Variables:
			// 		struct SNDSYSOPTS opts; // stack offset -88
			/* end block 1.2.1 */
			// End offset: 0x80045B64
			// End Line: 100
		/* end block 1.2 */
		// End offset: 0x80045B64
		// End Line: 100

		/* begin block 1.3 */
			// Start line: 105
			// Start offset: 0x80045B64

			/* begin block 1.3.1 */
				// Start line: 105
				// Start offset: 0x80045B64

				/* begin block 1.3.1.1 */
					// Start line: 105
					// Start offset: 0x80045B64
				/* end block 1.3.1.1 */
				// End offset: 0x80045B64
				// End Line: 105
			/* end block 1.3.1 */
			// End offset: 0x80045B64
			// End Line: 105

			/* begin block 1.3.2 */
				// Start line: 105
				// Start offset: 0x80045B80

				/* begin block 1.3.2.1 */
					// Start line: 105
					// Start offset: 0x80045B80
				/* end block 1.3.2.1 */
				// End offset: 0x80045B80
				// End Line: 105
			/* end block 1.3.2 */
			// End offset: 0x80045B80
			// End Line: 105

			/* begin block 1.3.3 */
				// Start line: 106
				// Start offset: 0x80045B8C
				// Variables:
			// 		int sndover; // $s3
			// 		int vol; // $s2
			// 		int RepresentativeSound; // $s0

				/* begin block 1.3.3.1 */
					// Start line: 107
					// Start offset: 0x80045B8C

					/* begin block 1.3.3.1.1 */
						// Start line: 132
						// Start offset: 0x80045C3C

						/* begin block 1.3.3.1.1.1 */
							// Start line: 132
							// Start offset: 0x80045C3C
						/* end block 1.3.3.1.1.1 */
						// End offset: 0x80045C3C
						// End Line: 132
					/* end block 1.3.3.1.1 */
					// End offset: 0x80045C3C
					// End Line: 132
				/* end block 1.3.3.1 */
				// End offset: 0x80045C3C
				// End Line: 132

				/* begin block 1.3.3.2 */
					// Start line: 142
					// Start offset: 0x80045C7C

					/* begin block 1.3.3.2.1 */
						// Start line: 142
						// Start offset: 0x80045C84

						/* begin block 1.3.3.2.1.1 */
							// Start line: 142
							// Start offset: 0x80045C84
						/* end block 1.3.3.2.1.1 */
						// End offset: 0x80045C84
						// End Line: 142
					/* end block 1.3.3.2.1 */
					// End offset: 0x80045C84
					// End Line: 142

					/* begin block 1.3.3.2.2 */
						// Start line: 143
						// Start offset: 0x80045C9C
						// Variables:
					// 		int azimuth; // $a2
					/* end block 1.3.3.2.2 */
					// End offset: 0x80045D6C
					// End Line: 178
				/* end block 1.3.3.2 */
				// End offset: 0x80045D6C
				// End Line: 178
			/* end block 1.3.3 */
			// End offset: 0x80045D6C
			// End Line: 184
		/* end block 1.3 */
		// End offset: 0x80045DA8
		// End Line: 192
	/* end block 1 */
	// End offset: 0x80045DA8
	// End Line: 192

	/* begin block 2 */
		// Start line: 78
	/* end block 2 */
	// End Line: 79

	/* begin block 3 */
		// Start line: 78
	/* end block 3 */
	// End Line: 79

/* WARNING: Type propagation algorithm not settling */

void PlaySound__12tScreenAudio(tScreenAudio *this)

{
  byte bVar1;
  short sVar2;
  int patchNum;
  short sVar3;
  int azimuth;
  uint vol;
  uint uVar4;
  undefined4 auStack88 [4];
  undefined local_48;
  
  if ((*(int *)&(menuDefs->menuPinkSlipCarOptionsPlayerTwo).tMenuNFS4.tMenu.VertHelp != 0) &&
     (*(short *)&this->audioTestHandle != this->fPrevSelectedSong)) {
    AudioMus_StopSong__Fi(10);
    AudioMus_PlaySong__FPc
              (*(char **)(*(int *)&this->fSelectedSong + (int)this->fPrevSelectedSong * 0x40 + 8));
    *(short *)&this->audioTestHandle = this->fPrevSelectedSong;
  }
  AudioMus_Volume__Fi((int)((uint)(byte)frontEnd.musicVolume * 0x23) >> 6);
  gMasterFENarrationLevel = ZEXT14((byte)frontEnd.narrationVolume);
  if ((__vtbl_ptr_type)frontEnd.audioMode != (this->tScreen)._vf[8]) {
    gStereoMode = 1;
    Audio_direct3davail = 0;
    this->fShapeCount = 1;
    SNDSYS_getopts(auStack88);
    if (frontEnd.audioMode == '\x01') {
      local_48 = 1;
      gStereoMode = 0;
      this->fShapeCount = 2;
    }
    else {
      if (frontEnd.audioMode == '\0') {
        local_48 = 2;
      }
      else {
        local_48 = 2;
        Audio_direct3davail = 1;
      }
    }
    SNDSYS_setopts((int)auStack88);
    *(char *)((this->tScreen)._vf + 8) = frontEnd.audioMode;
  }
  sVar3 = *(short *)((menuDefs->menuShowroom).tMenuNFS4.tMenu._vf + 6);
  if (sVar3 < 1 || 5 < sVar3) {
    if (this->fShapeCount == 0) {
      return;
    }
    gMasterSFXLevel = ZEXT14((byte)frontEnd.sfxVolume);
    SNDstop(*(uint *)&this->audioTest);
    this->fShapeCount = 0;
    return;
  }
  uVar4 = 1;
  bVar1 = frontEnd.engineVolume;
  if (sVar3 == 2) {
LAB_80045c08:
    vol = (uint)bVar1;
    patchNum = rand();
    patchNum = patchNum % 6 + 0x29;
  }
  else {
    if (sVar3 < 3) {
      bVar1 = frontEnd.sfxVolume;
      if (sVar3 != 1) goto LAB_80045c08;
      vol = (uint)(byte)frontEnd.sfxVolume;
      patchNum = 0x1f;
    }
    else {
      if (sVar3 == 3) {
        vol = (uint)(byte)frontEnd.narrationVolume;
        patchNum = -1;
      }
      else {
        bVar1 = frontEnd.sfxVolume;
        if (sVar3 != 4) goto LAB_80045c08;
        vol = (uint)(byte)frontEnd.ambientVolume;
        patchNum = 0x1e;
      }
    }
  }
  if (this->fShapeCount == 0) {
    sVar3 = 1;
    if (frontEnd.audioMode == '\x01') {
      sVar3 = 2;
    }
    gMasterSFXLevel = vol;
    this->fShapeCount = sVar3;
  }
  else {
    gMasterSFXLevel = vol;
    uVar4 = SNDover(*(uint *)&this->audioTest);
  }
  if (((uVar4 == 0) || (ginfo._16_2_ != 0)) || (sVar3 = 1, patchNum == 0)) goto LAB_80045d6c;
  sVar2 = this->fShapeCount;
  azimuth = 0;
  if (sVar2 == 1) {
    azimuth = 0xc000;
    sVar3 = 3;
    if (frontEnd.audioMode == '\x02') {
      sVar3 = 2;
    }
LAB_80045d2c:
    this->fShapeCount = sVar3;
  }
  else {
    if (sVar2 == 2) {
      sVar3 = 3;
      if (frontEnd.audioMode == '\x01') {
        sVar3 = 2;
      }
    }
    else {
      if (sVar2 != 3) {
        if (sVar2 == 4) {
          azimuth = 0x8000;
          goto LAB_80045d2c;
        }
        goto LAB_80045d34;
      }
      azimuth = 0x3fff;
      sVar3 = 1;
      if (frontEnd.audioMode == '\x02') {
        sVar3 = 4;
      }
    }
    this->fShapeCount = sVar3;
  }
LAB_80045d34:
  if (patchNum == -1) {
    FeAudio_AsyncPlaySpeech__Fii(2,3);
    *(undefined4 *)&this->audioTest = 0;
  }
  else {
    patchNum = AudioCmn_PlaySound__Fiiiii(gSndBnk.bnkID,patchNum,azimuth,vol,0x40);
    *(int *)&this->audioTest = patchNum;
  }
LAB_80045d6c:
  gMasterSFXLevel = (uint)(byte)frontEnd.sfxVolume;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawForeground__12tScreenAudio(struct tScreenAudio *this /*$a0*/)
 // line 195, offset 0x80045dc8
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x80045DC8
		// Variables:
	// 		short fade; // $s2

		/* begin block 1.1 */
			// Start line: 196
			// Start offset: 0x80045DC8

			/* begin block 1.1.1 */
				// Start line: 196
				// Start offset: 0x80045DC8
			/* end block 1.1.1 */
			// End offset: 0x80045DC8
			// End Line: 196
		/* end block 1.1 */
		// End offset: 0x80045DC8
		// End Line: 196

		/* begin block 1.2 */
			// Start line: 198
			// Start offset: 0x80045E20
			// Variables:
		// 		int i; // $s0
		/* end block 1.2 */
		// End offset: 0x80045E5C
		// End Line: 203
	/* end block 1 */
	// End offset: 0x80045EC0
	// End Line: 213

	/* begin block 2 */
		// Start line: 417
	/* end block 2 */
	// End Line: 418

	/* begin block 3 */
		// Start line: 421
	/* end block 3 */
	// End Line: 422

	/* begin block 4 */
		// Start line: 421
	/* end block 4 */
	// End Line: 422

/* WARNING: Type propagation algorithm not settling */

void DrawForeground__12tScreenAudio(tScreenAudio *this)

{
  short sVar1;
  char *string;
  int iVar2;
  int index;
  int iVar3;
  
  sVar1 = (short)(*(int *)((menuDefs->itemOptionsDisplay).tMenuItemGoToMenuButton.
                           tMenuItemInteractive.tMenuItem._vf + 8) >> 1);
  if ((sVar1 < 0x80) && (sVar1 < 1)) {
    sVar1 = 0;
  }
  else {
    if (0x80 < sVar1) {
      sVar1 = 0x80;
    }
  }
  index = 0x30;
  iVar2 = 0;
  do {
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (index,1,0,0,(int)sVar1,0,(tDrawShapeExtended *)0x0);
    iVar3 = iVar2 + 1;
    index = iVar2 + 0x31;
    iVar2 = iVar3;
  } while (iVar3 < 4);
  if (99 < sVar1) {
    FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
              (0x27d,0x1e0,0xdc,1,textState_Selected,textType_ScreenInfo);
    string = TextSys_Word__Fi(0x27d);
    iVar2 = textpixels(string);
    PSXDrawSquare__Fiiiii(0,0x1e0,0xdc,-5 - iVar2,7);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__12tScreenAudio(struct tScreenAudio *this /*$a0*/)
 // line 220, offset 0x80045ed8
	/* begin block 1 */
		// Start line: 221
		// Start offset: 0x80045ED8
		// Variables:
	// 		static int lastpercentage; // offset 0x0
	// 		static int perfade; // offset 0x4
	// 		short fade; // $s3
	// 		int percent; // $s0

		/* begin block 1.1 */
			// Start line: 221
			// Start offset: 0x80045ED8
			// Variables:
		// 		struct tOptionsMenu *this; // $v1

			/* begin block 1.1.1 */
				// Start line: 221
				// Start offset: 0x80045ED8
			/* end block 1.1.1 */
			// End offset: 0x80045ED8
			// End Line: 221
		/* end block 1.1 */
		// End offset: 0x80045ED8
		// End Line: 221

		/* begin block 1.2 */
			// Start line: 234
			// Start offset: 0x80045F2C

			/* begin block 1.2.1 */
				// Start line: 252
				// Start offset: 0x80045FBC

				/* begin block 1.2.1.1 */
					// Start line: 252
					// Start offset: 0x80045FBC
				/* end block 1.2.1.1 */
				// End offset: 0x80045FBC
				// End Line: 252
			/* end block 1.2.1 */
			// End offset: 0x80045FBC
			// End Line: 252
		/* end block 1.2 */
		// End offset: 0x80045FBC
		// End Line: 252

		/* begin block 1.3 */
			// Start line: 256
			// Start offset: 0x80045FC4

			/* begin block 1.3.1 */
				// Start line: 259
				// Start offset: 0x80045FDC
				// Variables:
			// 		int ColText; // $s2
			// 		char sBuildOutput[255]; // stack offset -280

				/* begin block 1.3.1.1 */
					// Start line: 264
					// Start offset: 0x80046048

					/* begin block 1.3.1.1.1 */
						// Start line: 264
						// Start offset: 0x80046048
					/* end block 1.3.1.1.1 */
					// End offset: 0x80046048
					// End Line: 264
				/* end block 1.3.1.1 */
				// End offset: 0x80046048
				// End Line: 264
			/* end block 1.3.1 */
			// End offset: 0x800460E8
			// End Line: 275
		/* end block 1.3 */
		// End offset: 0x800460E8
		// End Line: 275

		/* begin block 1.4 */
			// Start line: 279
			// Start offset: 0x800460E8
			// Variables:
		// 		int i; // $s0
		/* end block 1.4 */
		// End offset: 0x80046124
		// End Line: 282
	/* end block 1 */
	// End offset: 0x80046124
	// End Line: 282

	/* begin block 2 */
		// Start line: 463
	/* end block 2 */
	// End Line: 464

	/* begin block 3 */
		// Start line: 471
	/* end block 3 */
	// End Line: 472

	/* begin block 4 */
		// Start line: 471
	/* end block 4 */
	// End Line: 472

/* WARNING: Type propagation algorithm not settling */

void DrawBackground__12tScreenAudio(tScreenAudio *this)

{
  short sVar1;
  undefined *puVar2;
  int col;
  int iVar3;
  tMenuItemLeftRightAudioSlider *this_00;
  int iVar4;
  char acStack280 [256];
  
  PlaySound__12tScreenAudio(this);
  sVar1 = (short)(*(int *)((menuDefs->itemOptionsDisplay).tMenuItemGoToMenuButton.
                           tMenuItemInteractive.tMenuItem._vf + 8) >> 1);
  if (0x80 < sVar1) {
    sVar1 = 0x80;
  }
  iVar4 = -1;
  switch(*(ushort *)((menuDefs->menuShowroom).tMenuNFS4.tMenu._vf + 6)) {
  case 0:
    this_00 = (tMenuItemLeftRightAudioSlider *)
              &(menuDefs->menuCarOptionsPlayerOne).tMenuNFS4.fNumItems;
    break;
  case 1:
    this_00 = (tMenuItemLeftRightAudioSlider *)
              ((menuDefs->menuCarOptionsPlayerTwo).tMenuNFS4.tMenu.fItemList + 7);
    break;
  case 2:
    this_00 = (tMenuItemLeftRightAudioSlider *)
              &(menuDefs->menuCarOptionsPlayerTwo).tMenuNFS4.tMenu.VertHelp;
    break;
  case 3:
    this_00 = (tMenuItemLeftRightAudioSlider *)
              (menuDefs->menuPinkSlipCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList;
    break;
  case 4:
    this_00 = (tMenuItemLeftRightAudioSlider *)
              ((menuDefs->menuPinkSlipCarOptionsPlayerOne).tMenuNFS4.tMenu.fItemList + 0xe);
    break;
  default:
    goto switchD_80045f58_caseD_5;
  }
  iVar4 = Percentage__29tMenuItemLeftRightAudioSlider(this_00);
switchD_80045f58_caseD_5:
  col = iVar4;
  if ((-1 < iVar4) || (col = DAT_800528e0, -1 < DAT_800528e0)) {
    DAT_800528e0 = col;
    if ((iVar4 == -1) ||
       (puVar2 = (undefined *)
                 TransitionIsFinished__12tOptionsMenu
                           ((tOptionsMenu *)&(menuDefs->menuShowroom).tMenuNFS4.tMenu.VertHelp),
       puVar2 != &DAT_00000001)) {
      DAT_800528e4 = DAT_800528e4 + 4;
    }
    else {
      DAT_800528e4 = DAT_800528e4 + -4;
    }
    if (0x80 < DAT_800528e4) {
      DAT_800528e4 = 0x80;
    }
    if (DAT_800528e4 < 0) {
      DAT_800528e4 = 0;
    }
    col = CalcFadeVal__Fiiii(kRGBVals[(uint)DAT_800515e1],0,(int)sVar1,DAT_800528e4);
    if (iVar4 < 0) {
      iVar4 = DAT_800528e0;
    }
    sprintf(acStack280,&DAT_8001212c,iVar4);
    if (DAT_800528e4 != 0x80) {
      iVar4 = TextSys_WordX__Fi(0x1dc);
      iVar3 = TextSys_WordY__Fi(0x1dc);
      FETextRender_FullTextRGB__FPcssics(acStack280,(short)iVar4,(short)iVar3,col,0,1);
    }
  }
  col = 6;
  iVar4 = 0;
  do {
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (col,1,0,0,(int)sVar1,0,(tDrawShapeExtended *)0x0);
    iVar3 = iVar4 + 1;
    col = iVar4 + 7;
    iVar4 = iVar3;
  } while (iVar3 < 0x20);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__12tScreenAudioRsT1PPcT3(struct tScreenAudio *this /*$a0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$a3*/, char **swapFileName /*stack 16*/)
 // line 288, offset 0x80046140
	/* begin block 1 */
		// Start line: 289
		// Start offset: 0x80046140
	/* end block 1 */
	// End offset: 0x80046140
	// End Line: 289

	/* begin block 2 */
		// Start line: 639
	/* end block 2 */
	// End Line: 640

	/* begin block 3 */
		// Start line: 646
	/* end block 3 */
	// End Line: 647

	/* begin block 4 */
		// Start line: 646
	/* end block 4 */
	// End Line: 647

void GetShapeInfo__12tScreenAudioRsT1PPcT3
               (tScreenAudio *this,short *numPermShapes,short *numSwapShapes,char **permFileName,
               char **swapFileName)

{
  *numSwapShapes = 0;
  *swapFileName = (char *)0x0;
  *numPermShapes = 0x34;
  *permFileName = s_zAudio_8001214c;
  return;
}



// decompiled code
// original method signature: 
// struct tScreenAudio * /*$ra*/ __12tScreenAudio(struct tScreenAudio *this /*$s0*/)
 // line 297, offset 0x80046164
	/* begin block 1 */
		// Start line: 298
		// Start offset: 0x80046164
	/* end block 1 */
	// End offset: 0x80046164
	// End Line: 298

	/* begin block 2 */
		// Start line: 659
	/* end block 2 */
	// End Line: 660

	/* begin block 3 */
		// Start line: 664
	/* end block 3 */
	// End Line: 665

	/* begin block 4 */
		// Start line: 664
	/* end block 4 */
	// End Line: 665

tScreenAudio * __12tScreenAudio(tScreenAudio *this)

{
  __7tScreen((tScreen *)this);
  *(undefined4 *)((this->tScreen)._vf + 2) = 0x80012158;
  this->fPrevSelectedSong = 0;
  *(undefined *)((int)&this->audioTestHandle + 2) = 0;
  *(undefined4 *)&this->fSelectedSong = 0;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__12tScreenAudio(struct tScreenAudio *this /*$s0*/)
 // line 305, offset 0x800461a4
	/* begin block 1 */
		// Start line: 306
		// Start offset: 0x800461A4
	/* end block 1 */
	// End offset: 0x800461A4
	// End Line: 306

	/* begin block 2 */
		// Start line: 678
	/* end block 2 */
	// End Line: 679

	/* begin block 3 */
		// Start line: 683
	/* end block 3 */
	// End Line: 684

	/* begin block 4 */
		// Start line: 683
	/* end block 4 */
	// End Line: 684

void Initialize__12tScreenAudio(tScreenAudio *this)

{
  tGlobalMenuDefs *ptVar1;
  char cVar2;
  
  ptVar1 = menuDefs;
  *(undefined2 *)&this->audioTestHandle = 0xffff;
  SetMenu__20tMenuItemSlidingMenubP14tInsideBoxMenu
            ((tMenuItemSlidingMenu *)
             ((ptVar1->menuPinkSlipCarOptionsPlayerTwo).tMenuNFS4.tMenu.fItemList + 4),&DAT_00000001
             ,(tInsideBoxMenu *)((ptVar1->menuPinkSlipCarOptionsPlayerTwo).tMenuNFS4.tMenu._vf + 2))
  ;
  Initialize__7tScreen((tScreen *)this);
  cVar2 = frontEnd.audioMode;
  this->fShapeCount = 0;
  *(undefined4 *)&this->audioTest = 0;
  *(undefined4 *)&this->fSelectedSong = 0;
  *(char *)((this->tScreen)._vf + 8) = cVar2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__12tScreenAudio(struct tScreenAudio *this /*$s1*/)
 // line 318, offset 0x80046204
	/* begin block 1 */
		// Start line: 319
		// Start offset: 0x80046204

		/* begin block 1.1 */
			// Start line: 340
			// Start offset: 0x800462C8

			/* begin block 1.1.1 */
				// Start line: 340
				// Start offset: 0x800462C8

				/* begin block 1.1.1.1 */
					// Start line: 340
					// Start offset: 0x800462C8
				/* end block 1.1.1.1 */
				// End offset: 0x800462C8
				// End Line: 340
			/* end block 1.1.1 */
			// End offset: 0x800462C8
			// End Line: 340
		/* end block 1.1 */
		// End offset: 0x800462D8
		// End Line: 340
	/* end block 1 */
	// End offset: 0x800462E8
	// End Line: 340

	/* begin block 2 */
		// Start line: 713
	/* end block 2 */
	// End Line: 714

	/* begin block 3 */
		// Start line: 717
	/* end block 3 */
	// End Line: 718

	/* begin block 4 */
		// Start line: 717
	/* end block 4 */
	// End Line: 718

void Cleanup__12tScreenAudio(tScreenAudio *this)

{
  if (this->fShapeCount != 0) {
    SNDstop(*(uint *)&this->audioTest);
    this->fShapeCount = 0;
  }
  AudioMus_Volume__Fi((int)((uint)(byte)frontEnd.musicVolume * 0x23) >> 6);
  gMasterMusicLevel = ZEXT14((byte)frontEnd.musicVolume);
  gMasterSFXLevel = ZEXT14((byte)frontEnd.sfxVolume);
  gMasterFENarrationLevel = ZEXT14((byte)frontEnd.narrationVolume);
  gMasterEngineLevel = ZEXT14((byte)frontEnd.engineVolume);
  gMasterAmbientLevel = ZEXT14((byte)frontEnd.ambientVolume);
  AudioMus_Volume__Fi(gMasterMusicLevel * 0x23 >> 6);
  Cleanup__7tScreen((tScreen *)this);
  while (ginfo._16_2_ != 0) {
    FeAudio_systemtask__Fi(0);
  }
  return;
}





