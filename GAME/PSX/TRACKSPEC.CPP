#include "THISDUST.H"
#include "TRACKSPEC.H"


// decompiled code
// original method signature: 
// void /*$ra*/ TrackSpec_SetDefault__FP10CTrackSpec(struct CTrackSpec *spec /*$a1*/)
 // line 44, offset 0x800e1544
	/* begin block 1 */
		// Start line: 45
		// Start offset: 0x800E1544
		// Variables:
	// 		int i; // $a2
	// 		int j; // $v1
	/* end block 1 */
	// End offset: 0x800E169C
	// End Line: 89

	/* begin block 2 */
		// Start line: 88
	/* end block 2 */
	// End Line: 89

	/* begin block 3 */
		// Start line: 88
	/* end block 3 */
	// End Line: 89

void TrackSpec_SetDefault__FP10CTrackSpec(CTrackSpec *spec)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  CTrackSpec *pCVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  spec->fogstate = 0;
  sVar2 = (short)GameSetup_gData.Weather;
  spec->horizonstate = 1;
  spec->skystate = 1;
  spec->weatherstate = sVar2;
  sVar2 = (short)GameSetup_gData.Time;
  (spec->fogspec).contrast = 0x10000;
  spec->depthcuestate = 1;
  (spec->fogspec).start = 200;
  (spec->fogspec).dist2base = 8;
  (spec->weatherspec).intensity_limit = 2;
  (spec->horizonspec).mirror = 1;
  (spec->horizonspec).yoffset = -0x1080;
  (spec->fogspec).color.r = -0x80;
  (spec->fogspec).color.g = -0x80;
  (spec->fogspec).color.b = -0x80;
  (spec->weatherspec).type = 0;
  (spec->horizonspec).angle = 0;
  (spec->horizonspec).height = 0x4b00;
  (spec->horizonspec).frontColor[0].r = -0x80;
  (spec->horizonspec).frontColor[0].g = -0x80;
  (spec->horizonspec).frontColor[0].b = -0x80;
  (spec->horizonspec).frontColor[1].r = -0x80;
  (spec->horizonspec).frontColor[1].g = -0x80;
  (spec->horizonspec).frontColor[1].b = -0x80;
  (spec->horizonspec).backColor[0].r = -0x80;
  (spec->horizonspec).backColor[0].g = -0x80;
  (spec->horizonspec).backColor[0].b = -0x80;
  (spec->horizonspec).backColor[1].r = -0x80;
  (spec->horizonspec).backColor[1].g = -0x80;
  (spec->horizonspec).backColor[1].b = -0x80;
  spec->nightstate = sVar2;
  bVar1 = true;
  do {
    iVar7 = (int)&spec->fogstate + iVar6;
    if (bVar1) {
      *(char *)(iVar7 + 0x48) = (char)iVar6;
    }
    else {
      *(char *)(iVar7 + 0x48) = '\x17' - (char)iVar6;
    }
    iVar6 = iVar6 + 1;
    bVar1 = iVar6 < 8;
  } while (iVar6 < 0x10);
  iVar6 = 0;
  iVar7 = 0;
  (spec->skyspec).type = 0;
  (spec->skyspec).flags = 4;
  pCVar5 = spec;
  do {
    iVar4 = 0;
    (pCVar5->skyspec).frontcolors[0].r = '2';
    (pCVar5->skyspec).frontcolors[0].g = '2';
    (pCVar5->skyspec).frontcolors[0].b = 'F';
    (pCVar5->skyspec).backcolors[0].r = '2';
    (pCVar5->skyspec).backcolors[0].g = '2';
    (pCVar5->skyspec).backcolors[0].b = 'F';
    iVar3 = iVar7;
    do {
      (spec->skyspec).cloudIndices[iVar3] = '\0';
      iVar4 = iVar4 + 1;
      iVar3 = iVar4 + iVar7;
    } while (iVar4 < 4);
    (pCVar5->skyspec).ringAngles[0] = iVar6 << 0xc;
    pCVar5 = (CTrackSpec *)&pCVar5->horizonstate;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 4;
  } while (iVar6 < 5);
  (spec->skyspec).sunAngleInSky = -0x1848;
  (spec->skyspec).sunHeightInSky = 0xee;
  (spec->skyspec).moonHeightInSky = 0xee;
  (spec->skyspec).numStars = 0x3c;
  (spec->skyspec).starAngleLow = 4000;
  (spec->skyspec).starAngleHigh = 10000;
  (spec->skyspec).starBrightMin = 0x40;
  (spec->skyspec).starBrightMax = 200;
  (spec->skyspec).starBaseColor.r = -1;
  (spec->skyspec).starBaseColor.g = -1;
  (spec->skyspec).starBaseColor.b = -1;
  (spec->skyspec).starRandomSeed = 0x3039;
  (spec->skyspec).sunBeamColor.r = '!';
  (spec->skyspec).sunBeamColor.g = '!';
  (spec->skyspec).sunHaloColor.r = '\x19';
  (spec->skyspec).clearcolor.g = '\x10';
  (spec->skyspec).sunBeamColor.b = '\x10';
  (spec->nightspec).nightcolor.g = '\x10';
  (spec->nightspec).nightcolor.b = '\x10';
  (spec->skyspec).sunHaloColor.g = '\n';
  (spec->depthcuespec).distance = 0x44;
  (spec->skyspec).clearcolor.r = '\b';
  (spec->skyspec).clearcolor.b = '\b';
  (spec->skyspec).moonAngleInSky = 0;
  (spec->skyspec).sunHaloColor.b = '\0';
  (spec->skyspec).yoffset = 0;
  (spec->nightspec).nightcolor.r = '\b';
  (spec->depthcuespec).color.r = -0x80;
  (spec->depthcuespec).color.g = -0x80;
  (spec->depthcuespec).color.b = -0x80;
  (spec->worldcolorspec).worldR = 0;
  (spec->worldcolorspec).worldG = 0;
  (spec->worldcolorspec).worldB = 0;
  (spec->worldcolorspec).type = 0;
  (spec->worldcolorspec).contrast = 0x4ccc;
  (spec->worldcolorspec).contrast_color.r = -0x80;
  (spec->worldcolorspec).contrast_color.g = -0x80;
  (spec->worldcolorspec).contrast_color.b = -0x80;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrackSpec_SetUp__Fv()
 // line 119, offset 0x800e177c
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x800E177C
	/* end block 1 */
	// End offset: 0x800E177C
	// End Line: 121

	/* begin block 2 */
		// Start line: 358
	/* end block 2 */
	// End Line: 359

	/* begin block 3 */
		// Start line: 364
	/* end block 3 */
	// End Line: 365

	/* begin block 4 */
		// Start line: 364
	/* end block 4 */
	// End Line: 365

	/* begin block 5 */
		// Start line: 365
	/* end block 5 */
	// End Line: 366

	/* begin block 6 */
		// Start line: 365
	/* end block 6 */
	// End Line: 366

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TrackSpec_SetUp__Fv(void)

{
  GameSetup_gData.Weather = (int)TrackSpec_gSpec.weatherstate;
  GameSetup_gData.Time = (int)TrackSpec_gSpec.nightstate;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ read__FPPcPvi(char **handle /*$a0*/, void *buf /*$a1*/, int bytes /*$a2*/)
 // line 127, offset 0x800e17a0
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x800E17A0
		// Variables:
	// 		char *source; // $a3
	// 		char *dest; // $a1

		/* begin block 1.1 */
			// Start line: 128
			// Start offset: 0x800E17A0
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x800E17C8
		// End Line: 138
	/* end block 1 */
	// End offset: 0x800E17C8
	// End Line: 140

	/* begin block 2 */
		// Start line: 375
	/* end block 2 */
	// End Line: 376

	/* begin block 3 */
		// Start line: 381
	/* end block 3 */
	// End Line: 382

	/* begin block 4 */
		// Start line: 381
	/* end block 4 */
	// End Line: 382

	/* begin block 5 */
		// Start line: 385
	/* end block 5 */
	// End Line: 386

void read__FPPcPvi(char **handle,void *buf,int bytes)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = *handle;
  iVar2 = 0;
  if (0 < bytes) {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      iVar2 = iVar2 + 1;
      *(char *)buf = cVar1;
      buf = (char *)buf + 1;
    } while (iVar2 < bytes);
  }
  *handle = pcVar3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrackSpec_Read__Fi(int spec_num /*$s2*/)
 // line 145, offset 0x800e17d0
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x800E17D0
		// Variables:
	// 		char *currentpos; // stack offset -32
	// 		char *startpos; // $s3
	// 		char str[64]; // stack offset -104

		/* begin block 1.1 */
			// Start line: 146
			// Start offset: 0x800E17D0

			/* begin block 1.1.1 */
				// Start line: 158
				// Start offset: 0x800E1828
				// Variables:
			// 		struct CTrackSpecHeader header; // stack offset -40
			/* end block 1.1.1 */
			// End offset: 0x800E18B0
			// End Line: 185
		/* end block 1.1 */
		// End offset: 0x800E18B0
		// End Line: 185
	/* end block 1 */
	// End offset: 0x800E18B0
	// End Line: 185

	/* begin block 2 */
		// Start line: 412
	/* end block 2 */
	// End Line: 413

	/* begin block 3 */
		// Start line: 418
	/* end block 3 */
	// End Line: 419

	/* begin block 4 */
		// Start line: 418
	/* end block 4 */
	// End Line: 419

void TrackSpec_Read__Fi(int spec_num)

{
  char *pcVar1;
  char acStack104 [64];
  undefined auStack40 [4];
  int local_24;
  char *local_20 [2];
  
  sprintf(acStack104,s__sTr_02d_bin_80056ac4,PTR_ARRAY_80116480[0],GameSetup_gData.track);
  pcVar1 = (char *)loadfileadr(acStack104,0);
  if (pcVar1 != (char *)0x0) {
    TrackSpec_gPrevSpec = spec_num;
    TrackSpec_gCurrentSpec = spec_num;
    local_20[0] = pcVar1;
    read__FPPcPvi(local_20,auStack40,8);
    if (spec_num < local_24) {
      TrackSpec_gMaxSpec = local_24 + 1;
      local_20[0] = local_20[0] + spec_num * 0x108;
      read__FPPcPvi(local_20,&TrackSpec_gSpec,0x108);
      TrackSpec_SetUp__Fv();
    }
    else {
      TrackSpec_SetDefault__FP10CTrackSpec(&TrackSpec_gSpec);
    }
    purgememadr((int)pcVar1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrackSpec_Load__Fii(int weather /*$a0*/, int night /*$a1*/)
 // line 205, offset 0x800e18cc
	/* begin block 1 */
		// Start line: 206
		// Start offset: 0x800E18CC
		// Variables:
	// 		int spec[2][2]; // stack offset -24
	/* end block 1 */
	// End offset: 0x800E18CC
	// End Line: 206

	/* begin block 2 */
		// Start line: 548
	/* end block 2 */
	// End Line: 549

	/* begin block 3 */
		// Start line: 553
	/* end block 3 */
	// End Line: 554

	/* begin block 4 */
		// Start line: 553
	/* end block 4 */
	// End Line: 554

void TrackSpec_Load__Fii(int weather,int night)

{
  int local_18 [4];
  
  local_18[0] = DAT_80056ad4;
  local_18[1] = DAT_80056ad8;
  local_18[2] = DAT_80056adc;
  local_18[3] = DAT_80056ae0;
  TrackSpec_Read__Fi(local_18[weather * 2 + night]);
  return;
}





