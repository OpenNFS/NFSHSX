#include "THISDUST.H"
#include "PSXFRONT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Quick_DD__Fiii(int a /*$a0*/, int b /*$a1*/, int c /*$a2*/)
 // line 97, offset 0x8004d778
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x8004D778
	/* end block 1 */
	// End offset: 0x8004D778
	// End Line: 98

	/* begin block 2 */
		// Start line: 194
	/* end block 2 */
	// End Line: 195

	/* begin block 3 */
		// Start line: 194
	/* end block 3 */
	// End Line: 195

void Quick_DD__Fiii(int a,int b,int c)

{
  Draw_DirectSetEnvironment__Fiiiiiiiiii(0,0,0x200,0xf0,a,b,c,0,0,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSXFront_AllocateDrawMemory__Fv()
 // line 141, offset 0x8004d7bc
	/* begin block 1 */
		// Start line: 142
		// Start offset: 0x8004D7BC
	/* end block 1 */
	// End offset: 0x8004D7BC
	// End Line: 142

	/* begin block 2 */
		// Start line: 249
	/* end block 2 */
	// End Line: 250

	/* begin block 3 */
		// Start line: 273
	/* end block 3 */
	// End Line: 274

	/* begin block 4 */
		// Start line: 273
	/* end block 4 */
	// End Line: 274

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PSXFront_AllocateDrawMemory__Fv(void)

{
  Draw_InitViewOT__Fv();
  gEnviro.server = (char *)reservememadr((char *)&PTR_DAT_800127ec,(int)&LAB_00013880,0x10);
  dflip_8011f43c.server = (char *)reservememadr((char *)&PTR_DAT_800127f0,(int)&LAB_00013880,0x10);
  Draw_SetViewMemBudget__Fii(Draw_gPlayer1View,(int)&LAB_00013880);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSXFront_FreeDrawMemory__Fv()
 // line 158, offset 0x8004d830
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x8004D830
	/* end block 1 */
	// End offset: 0x8004D830
	// End Line: 159

	/* begin block 2 */
		// Start line: 304
	/* end block 2 */
	// End Line: 305

	/* begin block 3 */
		// Start line: 308
	/* end block 3 */
	// End Line: 309

	/* begin block 4 */
		// Start line: 308
	/* end block 4 */
	// End Line: 309

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PSXFront_FreeDrawMemory__Fv(void)

{
  ClearPrimitivesBuffer__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitializeSpinningCars__Fv()
 // line 163, offset 0x8004d850
	/* begin block 1 */
		// Start line: 164
		// Start offset: 0x8004D850

		/* begin block 1.1 */
			// Start line: 173
			// Start offset: 0x8004D87C
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 173
				// Start offset: 0x8004D87C

				/* begin block 1.1.1.1 */
					// Start line: 193
					// Start offset: 0x8004D8D4
				/* end block 1.1.1.1 */
				// End offset: 0x8004D8E0
				// End Line: 195
			/* end block 1.1.1 */
			// End offset: 0x8004D950
			// End Line: 211
		/* end block 1.1 */
		// End offset: 0x8004D950
		// End Line: 211
	/* end block 1 */
	// End offset: 0x8004D9A8
	// End Line: 224

	/* begin block 2 */
		// Start line: 314
	/* end block 2 */
	// End Line: 315

	/* begin block 3 */
		// Start line: 318
	/* end block 3 */
	// End Line: 319

	/* begin block 4 */
		// Start line: 318
	/* end block 4 */
	// End Line: 319

	/* begin block 5 */
		// Start line: 319
	/* end block 5 */
	// End Line: 320

	/* begin block 6 */
		// Start line: 319
	/* end block 6 */
	// End Line: 320

/* WARNING: Unknown calling convention yet parameter storage is locked */

void InitializeSpinningCars__Fv(void)

{
  Car_tObj *carObj;
  uint index;
  GameSetup_tCarData *pGVar1;
  Car_tObj **ppCVar2;
  
  if (rendering3DEnvironmentInitialized == '\0') {
    R3DCar_InMenu = 1;
    Platform_ResetDCTBuffer__Fv();
    Texture_InitMenuTexture__Fv();
    inFrontEnd = 1;
    CarIO_StartUp__Fv();
    index = 0;
    R3DCar_StartUp__Fv();
    inFrontEnd = 0;
    DrawC_ReadeMapData__Fv();
    Fe3D_InitShowroom__Fv();
    pGVar1 = GameSetup_gData.carInfo;
    ppCVar2 = &gCarObj2;
    GameSetup_gData.Weather = 0;
    while ((int)index < 2) {
      carObj = (Car_tObj *)reservememadr(s_carObj_800127f4,0x8dc,0);
      *ppCVar2 = carObj;
      blockclear((undefined *)carObj,0x8dc);
      carObj->carInfo = pGVar1;
      pGVar1->carType = 1;
      pGVar1 = pGVar1 + 1;
      ppCVar2 = ppCVar2 + 1;
      strcpy(carObj->carName,GameSetup_gCarNames + carObj->carInfo->carType * 5);
      (carObj->N).objID = index | 0x100;
      R3DCar_Instantiate3DCar__FP8Car_tObji(carObj,index);
      index = index + 1;
      (carObj->N).active = '\x01';
    }
    R3DCar_PostStartUp__Fv();
    INT_80051268 = 0;
    gMenuRotate = 0;
    blockclear((undefined *)&gCView,0x8c);
    INT_8013d804 = -1;
    DrawC_gMenuColor = -1;
    DrawC_gMenuLights = 0;
    DrawC_gMenuLightsDirection = 0;
    rendering3DEnvironmentInitialized = '\x01';
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CleanupSpinningCars__Fv()
 // line 227, offset 0x8004d9cc
	/* begin block 1 */
		// Start line: 228
		// Start offset: 0x8004D9CC

		/* begin block 1.1 */
			// Start line: 235
			// Start offset: 0x8004D9E8
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x8004DA20
		// End Line: 245

		/* begin block 1.2 */
			// Start line: 248
			// Start offset: 0x8004DA20
			// Variables:
		// 		int handle; // $s0
		// 		char fname[60]; // stack offset -80
		/* end block 1.2 */
		// End offset: 0x8004DAB0
		// End Line: 274
	/* end block 1 */
	// End offset: 0x8004DAB0
	// End Line: 274

	/* begin block 2 */
		// Start line: 484
	/* end block 2 */
	// End Line: 485

	/* begin block 3 */
		// Start line: 487
	/* end block 3 */
	// End Line: 488

	/* begin block 4 */
		// Start line: 487
	/* end block 4 */
	// End Line: 488

	/* begin block 5 */
		// Start line: 488
	/* end block 5 */
	// End Line: 489

	/* begin block 6 */
		// Start line: 488
	/* end block 6 */
	// End Line: 489

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CleanupSpinningCars__Fv(void)

{
  uint uVar1;
  uint uVar2;
  Car_tObj *pCVar3;
  Car_tObj **ppCVar4;
  int iVar5;
  char acStack80 [64];
  
  if (rendering3DEnvironmentInitialized != '\0') {
    DrawSync(0);
    iVar5 = 0;
    ppCVar4 = &gCarObj2;
    do {
      iVar5 = iVar5 + 1;
      R3DCar_DeInstantiate3DCar__FP8Car_tObj(*ppCVar4);
      pCVar3 = *ppCVar4;
      ppCVar4 = ppCVar4 + 1;
      purgememadr((int)pCVar3);
    } while (iVar5 < 2);
    inFrontEnd = 1;
    R3DCar_CleanUp__Fv();
    CarIO_CleanUp__Fv();
    inFrontEnd = 0;
    Texture_KillMenuTexture__Fv();
    PSXFront_FreeDrawMemory__Fv();
    R3DCar_InMenu = 0;
    gFlip = -1;
    rendering3DEnvironmentInitialized = '\0';
    Platform_ResetDCTBuffer__Fv();
    sprintf(acStack80,s__sDCT_BIN_800127fc,PTR_801164e8);
    uVar1 = asyncloadfileat(acStack80,(uint)&CF_DVLC);
    while (uVar2 = getasyncreadstatus(uVar1), uVar2 == 0) {
      systemtask(0);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CleanupSpinningCarsMenu__Fv()
 // line 281, offset 0x8004dac4
	/* begin block 1 */
		// Start line: 282
		// Start offset: 0x8004DAC4

		/* begin block 1.1 */
			// Start line: 289
			// Start offset: 0x8004DAE0
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x8004DB10
		// End Line: 294
	/* end block 1 */
	// End offset: 0x8004DB20
	// End Line: 299

	/* begin block 2 */
		// Start line: 593
	/* end block 2 */
	// End Line: 594

	/* begin block 3 */
		// Start line: 599
	/* end block 3 */
	// End Line: 600

	/* begin block 4 */
		// Start line: 599
	/* end block 4 */
	// End Line: 600

	/* begin block 5 */
		// Start line: 600
	/* end block 5 */
	// End Line: 601

	/* begin block 6 */
		// Start line: 600
	/* end block 6 */
	// End Line: 601

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CleanupSpinningCarsMenu__Fv(void)

{
  Car_tObj *carObj;
  Car_tObj **ppCVar1;
  int iVar2;
  
  if (rendering3DEnvironmentInitialized != '\0') {
    DrawSync(0);
    iVar2 = 0;
    ppCVar1 = &gCarObj2;
    do {
      carObj = *ppCVar1;
      ppCVar1 = ppCVar1 + 1;
      iVar2 = iVar2 + 1;
      R3DCar_DeInstantiate3DCarMenu__FP8Car_tObj(carObj);
    } while (iVar2 < 2);
    Texture_CleanupMenuTexture__Fv();
    CarIO_ReStart__Fv();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoTitleScreen__Fv()
 // line 304, offset 0x8004db34
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x8004DB34
		// Variables:
	// 		struct shapetbl *tempShp2; // $s0
	// 		char fileName[48]; // stack offset -88

		/* begin block 1.1 */
			// Start line: 305
			// Start offset: 0x8004DB34

			/* begin block 1.1.1 */
				// Start line: 313
				// Start offset: 0x8004DB5C
				// Variables:
			// 		char artfilename[20]; // stack offset -40
			/* end block 1.1.1 */
			// End offset: 0x8004DB5C
			// End Line: 324
		/* end block 1.1 */
		// End offset: 0x8004DB5C
		// End Line: 324
	/* end block 1 */
	// End offset: 0x8004DC20
	// End Line: 355

	/* begin block 2 */
		// Start line: 641
	/* end block 2 */
	// End Line: 642

	/* begin block 3 */
		// Start line: 646
	/* end block 3 */
	// End Line: 647

	/* begin block 4 */
		// Start line: 646
	/* end block 4 */
	// End Line: 647

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoTitleScreen__Fv(void)

{
  int iVar1;
  char acStack88 [48];
  char acStack40 [24];
  
  elapsedticks();
  if (creditShapeFile == (char *)0x0) {
    sprintf(acStack40,s_title_psh_80012808);
    sprintf(acStack88,STR_FRMT,PTR_801164e8,acStack40);
    creditShapeFile = (char *)loadshapeadr(acStack88,0);
    systemtask(0);
    if (creditShapeFile == (char *)0x0) {
      return;
    }
  }
  iVar1 = locateshapez((int)creditShapeFile,(int *)&DAT_80012814);
  Quick_DD__Fiii(1,0,1);
  settrans(0);
  movfxya(iVar1,0,0);
  settrans(1);
  Quick_DD__Fiii(0,1,0);
  purgememadr((int)creditShapeFile);
  creditShapeFile = (char *)0x0;
  titleScreenDisplayed = '\x01';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DoLanguageScreen__Fv()
 // line 439, offset 0x8004dc34
	/* begin block 1 */
		// Start line: 440
		// Start offset: 0x8004DC34
	/* end block 1 */
	// End offset: 0x8004DC60
	// End Line: 570

	/* begin block 2 */
		// Start line: 838
	/* end block 2 */
	// End Line: 839

	/* begin block 3 */
		// Start line: 874
	/* end block 3 */
	// End Line: 875

	/* begin block 4 */
		// Start line: 874
	/* end block 4 */
	// End Line: 875

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DoLanguageScreen__Fv(void)

{
  Front_InitialMemCardCheck__Fv();
  if (frontEnd.language == -1) {
    frontEnd.language = '\0';
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSXExitFrontend__Fv()
 // line 666, offset 0x8004dc70
	/* begin block 1 */
		// Start line: 667
		// Start offset: 0x8004DC70
	/* end block 1 */
	// End offset: 0x8004DCB0
	// End Line: 679

	/* begin block 2 */
		// Start line: 1324
	/* end block 2 */
	// End Line: 1325

	/* begin block 3 */
		// Start line: 1239
	/* end block 3 */
	// End Line: 1240

	/* begin block 4 */
		// Start line: 1239
	/* end block 4 */
	// End Line: 1240

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PSXExitFrontend__Fv(void)

{
  CleanupSpinningCars__Fv();
  deltimer((int)PAD_update);
  Audio_DeInitDriver__Fv();
  if (gHelpShapes != (tTexture_ShapeInfo *)0x0) {
    purgememadr((int)gHelpShapes);
    gHelpShapes = (tTexture_ShapeInfo *)0x0;
  }
  ComingIntoTheFrontEndTheVeryFirstTime = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSX_AllocShapes__Fv()
 // line 682, offset 0x8004dcc8
	/* begin block 1 */
		// Start line: 683
		// Start offset: 0x8004DCC8
	/* end block 1 */
	// End offset: 0x8004DCC8
	// End Line: 683

	/* begin block 2 */
		// Start line: 1267
	/* end block 2 */
	// End Line: 1268

	/* begin block 3 */
		// Start line: 1271
	/* end block 3 */
	// End Line: 1272

	/* begin block 4 */
		// Start line: 1271
	/* end block 4 */
	// End Line: 1272

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PSX_AllocShapes__Fv(void)

{
  gHelpShapes = (tTexture_ShapeInfo *)reservememadr(s_gHelpShapes_80012830,0x760,0);
  blockclear((undefined *)gHelpShapes,0x760);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init_RenderingEnvironment__Fv()
 // line 696, offset 0x8004dd0c
	/* begin block 1 */
		// Start line: 697
		// Start offset: 0x8004DD0C
	/* end block 1 */
	// End offset: 0x8004DD0C
	// End Line: 697

	/* begin block 2 */
		// Start line: 1289
	/* end block 2 */
	// End Line: 1290

	/* begin block 3 */
		// Start line: 1301
	/* end block 3 */
	// End Line: 1302

	/* begin block 4 */
		// Start line: 1301
	/* end block 4 */
	// End Line: 1302

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Init_RenderingEnvironment__Fv(void)

{
  SetDefDispEnv((undefined2 *)&gEnviro,0,0x100,0x200,0xf0);
  SetDefDispEnv((undefined2 *)&dflip_8011f43c,0,0,0x200,0xf0);
  Draw_InitViews__Fv();
  Draw_gRearView = -1;
  Draw_gPlayer1View = Draw_SetView__Fiiiiiiiii(0,0,0,0x100,0x200,0xf0,0,1,10);
  blockclear((undefined *)&gCView,0x8c);
  gCView.id = Draw_gPlayer1View;
  PSXFront_AllocateDrawMemory__Fv();
  Draw_gDoVSync = 1;
  FETextRender_SetABR__Fib(0,(void *)0x0);
  gFlip = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Init_PSX_FrontEnd__Fv()
 // line 726, offset 0x8004ddf8
	/* begin block 1 */
		// Start line: 727
		// Start offset: 0x8004DDF8
	/* end block 1 */
	// End offset: 0x8004DEF0
	// End Line: 779

	/* begin block 2 */
		// Start line: 1368
	/* end block 2 */
	// End Line: 1369

	/* begin block 3 */
		// Start line: 1374
	/* end block 3 */
	// End Line: 1375

	/* begin block 4 */
		// Start line: 1374
	/* end block 4 */
	// End Line: 1375

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Init_PSX_FrontEnd__Fv(void)

{
  int iVar1;
  
  gFlip = -1;
  addtimer((int)PAD_update);
  InitGeom();
  PSX_AllocShapes__Fv();
  Texture_InitMenuClut__Fv();
  screenwidth = (uchar *)0x200;
  screenbpp = (uchar *)&DAT_00000010;
  if (ComingIntoTheFrontEndTheVeryFirstTime == 0) {
    Init_RenderingEnvironment__Fv();
    TextSys_LoadWords__Fi((uint)(byte)frontEnd.language);
  }
  else {
    iVar1 = play_movie__Fc('\x04');
    if (iVar1 != 1) {
      play_movie__Fc('\0');
    }
    initlinkmode(0,1,1);
    Init_RenderingEnvironment__Fv();
    initlinkmode(0,0x14,0);
    DoLanguageScreen__Fv();
    TextSys_LoadWords__Fi((uint)(byte)frontEnd.language);
    DoTitleScreen__Fv();
    initlinkmode(0,1,1);
    Front_SecondaryMemCardCheck__Fv();
  }
  FeTools_init__Fv();
  Audio_InitDriver__Fii((int)&DAT_0000d800,0x18000);
  SetPlayList__Fi((int)frontEnd.GotAPlayList);
  AudioCmn_LoadFESamples__Fv();
  LoadAllHelpShapes__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AdjustShapeDrawing__FP18tTexture_ShapeInfoRiN21iPiP18tDrawShapeExtended(struct tTexture_ShapeInfo *tShp /*$t0*/, int *x /*$a1*/, int *y /*$a2*/, int *flags /*$a3*/, int bright /*stack 16*/, int *color /*stack 20*/, struct tDrawShapeExtended *extra /*stack 24*/)
 // line 839, offset 0x8004df38
	/* begin block 1 */
		// Start line: 840
		// Start offset: 0x8004DF38
		// Variables:
	// 		short fadetop; // $a3
	// 		short fadebottom; // $a0

		/* begin block 1.1 */
			// Start line: 876
			// Start offset: 0x8004E03C

			/* begin block 1.1.1 */
				// Start line: 884
				// Start offset: 0x8004E0C4

				/* begin block 1.1.1.1 */
					// Start line: 884
					// Start offset: 0x8004E0C4

					/* begin block 1.1.1.1.1 */
						// Start line: 885
						// Start offset: 0x8004E0CC
						// Variables:
					// 		short i; // $t0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8004E168
					// End Line: 895

					/* begin block 1.1.1.1.2 */
						// Start line: 897
						// Start offset: 0x8004E170

						/* begin block 1.1.1.1.2.1 */
							// Start line: 897
							// Start offset: 0x8004E170

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 898
								// Start offset: 0x8004E178
								// Variables:
							// 		int fbot; // $v0
							// 		int ftop; // $a1
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x8004E200
							// End Line: 913
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x8004E25C
						// End Line: 923
					/* end block 1.1.1.1.2 */
					// End offset: 0x8004E25C
					// End Line: 923
				/* end block 1.1.1.1 */
				// End offset: 0x8004E25C
				// End Line: 923
			/* end block 1.1.1 */
			// End offset: 0x8004E25C
			// End Line: 923
		/* end block 1.1 */
		// End offset: 0x8004E25C
		// End Line: 923
	/* end block 1 */
	// End offset: 0x8004E25C
	// End Line: 923

	/* begin block 2 */
		// Start line: 1563
	/* end block 2 */
	// End Line: 1564

	/* begin block 3 */
		// Start line: 1619
	/* end block 3 */
	// End Line: 1620

	/* begin block 4 */
		// Start line: 1619
	/* end block 4 */
	// End Line: 1620

	/* begin block 5 */
		// Start line: 1622
	/* end block 5 */
	// End Line: 1623

void AdjustShapeDrawing__FP18tTexture_ShapeInfoRiN21iPiP18tDrawShapeExtended
               (tTexture_ShapeInfo *tShp,int *x,int *y,int *flags,int bright,int *color,
               tDrawShapeExtended *extra)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((*flags & 0x400U) == 0) {
    if (0 < *y) goto LAB_8004dfb4;
    *x = *x - (int)tShp->width;
    iVar2 = -((int)tShp->height + *y);
  }
  else {
    *x = *x - (int)tShp->width;
    iVar2 = *y - (int)tShp->height;
  }
  *y = iVar2;
LAB_8004dfb4:
  if ((*flags & 0x100U) != 0) {
    *x = *x - ((int)((uint)*(ushort *)&tShp->next << 0x10) >> 0x11);
    *y = *y - ((int)((uint)*(ushort *)((int)&tShp->next + 2) << 0x10) >> 0x11);
  }
  if ((*flags & 0x20U) != 0) {
    *y = ((int)extra->flip_axis * 2 - (*y + (int)*(short *)((int)&tShp->next + 2))) + 1;
    *flags = *flags | 2;
  }
  uVar4 = *flags;
  if ((uVar4 & 0x10) != 0) {
    iVar2 = (uint)*(byte *)((int)extra->tint + 2) * bright;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    iVar5 = (extra->tint[0] >> 8 & 0xffU) * bright;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x7f;
    }
    bright = (uint)*(byte *)extra->tint * bright;
    if (bright < 0) {
      bright = bright + 0x7f;
    }
    *color = (iVar2 >> 7) << 0x10 | (iVar5 >> 7) << 8 | bright >> 7;
    return;
  }
  if ((uVar4 & 0x80) != 0) {
    iVar2 = 0;
    iVar5 = 0;
    do {
      iVar8 = (int)&extra->flip_axis + (iVar5 >> 0xe);
      iVar6 = (uint)*(byte *)(iVar8 + 6) * bright;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x7f;
      }
      iVar7 = (*(int *)(iVar8 + 4) >> 8 & 0xffU) * bright;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x7f;
      }
      iVar8 = (uint)*(byte *)(iVar8 + 4) * bright;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x7f;
      }
      *(uint *)((iVar5 >> 0xe) + (int)color) = (iVar6 >> 7) << 0x10 | (iVar7 >> 7) << 8 | iVar8 >> 7
      ;
      iVar2 = iVar2 + 1;
      iVar5 = iVar2 * 0x10000;
    } while (iVar2 * 0x10000 >> 0x10 < 4);
    return;
  }
  if ((uVar4 & 0x40) != 0) {
    iVar2 = ((uint)(ushort)extra->flip_axis - (uint)*(ushort *)y) + 1;
    if (iVar2 * 0x10000 < 0) {
      iVar2 = -iVar2;
    }
    sVar1 = (short)(iVar2 << 1);
    if (0x80 < (iVar2 << 0x11) >> 0x10) {
      sVar1 = 0x80;
    }
    iVar2 = ((uint)(ushort)extra->flip_axis -
            ((uint)*(ushort *)y + (uint)*(ushort *)((int)&tShp->next + 2))) + 1;
    if (iVar2 * 0x10000 < 0) {
      iVar2 = -iVar2;
    }
    iVar5 = iVar2 << 0x11;
    if (0x80 < (iVar2 << 0x11) >> 0x10) {
      iVar5 = 0x800000;
    }
    uVar4 = 0x80 - (iVar5 >> 0x10);
    uVar4 = uVar4 * 0x10000 | uVar4 * 0x100 | uVar4;
    uVar3 = 0x80 - (int)sVar1;
    *color = uVar4;
    color[1] = uVar4;
    uVar3 = uVar3 * 0x10000 | uVar3 * 0x100 | uVar3;
    color[2] = uVar3;
    color[3] = uVar3;
    return;
  }
  *color = bright << 0x10 | bright << 8 | bright;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawGouraudShape__FP18tTexture_ShapeInfoiiiPii(struct tTexture_ShapeInfo *shp /*$s4*/, int flags /*$t6*/, int x /*$t2*/, int y /*$s7*/, int *color /*stack 16*/, int abr /*stack 20*/)
 // line 928, offset 0x8004e264
	/* begin block 1 */
		// Start line: 929
		// Start offset: 0x8004E264
		// Variables:
	// 		struct POLY_GT4 *prim; // $s0
	// 		short width; // stack offset -88
	// 		short height; // $v1
	// 		short u; // $s2
	// 		short v; // $t4
	// 		short vh; // stack offset -80
	// 		short bpp; // $a1
	// 		short i; // $s1
	// 		short w; // $s5
	// 		short w1; // $a1

		/* begin block 1.1 */
			// Start line: 951
			// Start offset: 0x8004E2FC
			// Variables:
		// 		int addw; // $a2
		/* end block 1.1 */
		// End offset: 0x8004E600
		// End Line: 986
	/* end block 1 */
	// End offset: 0x8004E608
	// End Line: 986

	/* begin block 2 */
		// Start line: 1798
	/* end block 2 */
	// End Line: 1799

	/* begin block 3 */
		// Start line: 1804
	/* end block 3 */
	// End Line: 1805

	/* begin block 4 */
		// Start line: 1804
	/* end block 4 */
	// End Line: 1805

void DrawGouraudShape__FP18tTexture_ShapeInfoiiiPii
               (tTexture_ShapeInfo *shp,int flags,int x,int y,int *color,int abr)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint *puVar7;
  uint *puVar8;
  short sVar9;
  uint uVar10;
  char cVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  char cVar17;
  int iVar18;
  char cVar19;
  short sVar20;
  short sVar21;
  int iVar22;
  
  sVar20 = (short)y;
  sVar21 = *(short *)((int)&shp->next + 2);
  sVar2 = *(short *)&shp->next;
  bVar1 = shp->depth;
  uVar14 = (uint)bVar1;
  if ((flags & 2U) != 0) {
    sVar20 = sVar20 + sVar21;
    sVar21 = -sVar21;
  }
  cVar17 = *(char *)&shp->centery;
  uVar3 = *(undefined2 *)((int)&shp->next + 2);
  if ((flags & 2U) != 0) {
    cVar17 = cVar17 + -1;
  }
  iVar18 = 0;
  sVar21 = sVar21 + sVar20;
  while( true ) {
    puVar8 = DAT_1f800004;
    puVar7 = DAT_1f800000;
    sVar9 = (short)iVar18;
    iVar15 = (int)sVar9;
    iVar22 = iVar15 * uVar14;
    if ((int)*(short *)&shp->next <= iVar15) break;
    if (iVar22 < 0) {
      iVar22 = iVar22 + 0xf;
    }
    iVar13 = (int)((uint)(ushort)shp->centerx << 0x10) >> 0xc;
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if ((uVar14 == 0xffffffff) && (iVar13 == -0x80000000)) {
      trap(0x1800);
    }
    uVar16 = (uint)(ushort)shp->centerx + (iVar22 >> 4);
    iVar22 = (int)((uVar16 & 0xffffffc0) << 0x10) >> 0xc;
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if ((uVar14 == 0xffffffff) && (iVar22 == -0x80000000)) {
      trap(0x1800);
    }
    iVar22 = (iVar18 + iVar13 / (int)uVar14) - iVar22 / (int)uVar14;
    cVar19 = (char)iVar22;
    iVar22 = 0xff - (iVar22 * 0x10000 >> 0x10);
    iVar15 = (int)*(short *)&shp->next - iVar15;
    if (iVar15 < iVar22) {
      iVar22 = iVar15;
    }
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar10 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 0xd;
    *puVar7 = *puVar7 & 0xff000000 | uVar10;
    puVar8[1] = *color;
    puVar8[4] = color[1];
    puVar8[7] = color[2];
    uVar10 = color[3];
    *(char *)((int)puVar8 + 7) = ((byte)flags & 1) * '\x02' + '<';
    *(undefined *)((int)puVar8 + 3) = 0xc;
    puVar8[10] = uVar10;
    uVar10 = GetClut((shp->clutID & 0x3fU) << 4,shp->clutID >> 6);
    *(undefined2 *)((int)puVar8 + 0xe) = (short)uVar10;
    *(ushort *)((int)puVar8 + 0x1a) =
         (ushort)(((uint)*(byte *)&shp->field_0x9 & 3) << 7) | (ushort)((abr & 3U) << 5) |
         (short)(shp->centery & 0x100U) >> 4 | (ushort)((uVar16 & 0x3c0) >> 6) |
         (ushort)(((uint)(ushort)shp->centery & 0x200) << 2);
    sVar12 = 0;
    if (((flags & 4U) != 0) && (*(short *)&shp->next < 0xff)) {
      cVar19 = cVar19 + -1;
      sVar12 = 1;
    }
    cVar11 = cVar19 + (char)iVar22;
    *(char *)(puVar8 + 3) = cVar19;
    *(char *)((int)puVar8 + 0xd) = cVar17;
    *(char *)(puVar8 + 6) = cVar11;
    *(char *)((int)puVar8 + 0x19) = cVar17;
    *(char *)(puVar8 + 9) = cVar19;
    *(char *)(puVar8 + 0xc) = cVar11;
    cVar19 = (char)uVar3 + cVar17;
    *(char *)((int)puVar8 + 0x25) = cVar19;
    *(char *)((int)puVar8 + 0x31) = cVar19;
    if (iVar22 << 0x10 < 1) {
      iVar22 = 1;
    }
    sVar12 = sVar12 + -1;
    sVar5 = (short)x;
    if ((flags & 4U) == 0) {
      sVar9 = sVar9 + sVar5;
      sVar12 = (short)iVar22 + sVar9;
      *(short *)(puVar8 + 2) = sVar9;
      *(short *)((int)puVar8 + 10) = sVar20;
      *(short *)(puVar8 + 5) = sVar12;
      *(short *)((int)puVar8 + 0x16) = sVar20;
      *(short *)(puVar8 + 8) = sVar9;
      *(short *)((int)puVar8 + 0x22) = sVar21;
      *(short *)(puVar8 + 0xb) = sVar12;
      *(short *)((int)puVar8 + 0x2e) = sVar21;
    }
    else {
      *(short *)(puVar8 + 2) = ((sVar2 + sVar5) - sVar9) + sVar12;
      *(short *)((int)puVar8 + 10) = sVar20;
      sVar4 = *(short *)&shp->next;
      sVar6 = sVar9 + (short)iVar22;
      *(short *)((int)puVar8 + 0x16) = sVar20;
      *(short *)(puVar8 + 5) = ((sVar4 + sVar5) - sVar6) + sVar12;
      sVar4 = *(short *)&shp->next;
      *(short *)((int)puVar8 + 0x22) = sVar21;
      *(short *)(puVar8 + 8) = ((sVar4 + sVar5) - sVar9) + sVar12;
      sVar9 = *(short *)&shp->next;
      *(short *)((int)puVar8 + 0x2e) = sVar21;
      *(short *)(puVar8 + 0xb) = ((sVar9 + sVar5) - sVar6) + sVar12;
    }
    iVar18 = iVar18 + iVar22;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawFlatShape__FP18tTexture_ShapeInfoiiiPii(struct tTexture_ShapeInfo *shp /*$a0*/, int flags /*$a1*/, int x /*$a2*/, int y /*$a3*/, int *color /*stack 16*/, int abr /*stack 20*/)
 // line 991, offset 0x8004e638
	/* begin block 1 */
		// Start line: 992
		// Start offset: 0x8004E638
	/* end block 1 */
	// End offset: 0x8004E638
	// End Line: 992

	/* begin block 2 */
		// Start line: 1953
	/* end block 2 */
	// End Line: 1954

	/* begin block 3 */
		// Start line: 1959
	/* end block 3 */
	// End Line: 1960

	/* begin block 4 */
		// Start line: 1959
	/* end block 4 */
	// End Line: 1960

void DrawFlatShape__FP18tTexture_ShapeInfoiiiPii
               (tTexture_ShapeInfo *shp,int flags,int x,int y,int *color,int abr)

{
  int iVar1;
  
  iVar1 = *color;
  color[3] = iVar1;
  color[2] = iVar1;
  color[1] = iVar1;
  DrawGouraudShape__FP18tTexture_ShapeInfoiiiPii(shp,flags,x,y,color,abr);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(int index /*$t0*/, int flags /*stack 4*/, int x /*stack 8*/, int y /*stack 12*/, int fade /*stack 16*/, int abr /*stack 20*/, struct tDrawShapeExtended *extra /*stack 24*/)
 // line 1060, offset 0x8004e678
	/* begin block 1 */
		// Start line: 1061
		// Start offset: 0x8004E678
		// Variables:
	// 		struct tTexture_ShapeInfo *tShp; // $s0
	// 		int color[4]; // stack offset -32
	/* end block 1 */
	// End offset: 0x8004E764
	// End Line: 1085

	/* begin block 2 */
		// Start line: 2031
	/* end block 2 */
	// End Line: 2032

	/* begin block 3 */
		// Start line: 2097
	/* end block 3 */
	// End Line: 2098

	/* begin block 4 */
		// Start line: 2097
	/* end block 4 */
	// End Line: 2098

void DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
               (int index,int flags,int x,int y,int fade,int abr,tDrawShapeExtended *extra)

{
  tTexture_ShapeInfo *tShp;
  uint local_res4;
  int local_res8;
  int local_resc;
  int aiStack32 [4];
  
  tShp = gCurrentShapes;
  if ((flags & 8U) != 0) {
    tShp = gHelpShapes;
  }
  tShp = (tTexture_ShapeInfo *)(&tShp->shpptr + index * 8);
  if ((flags & 0x200U) != 0) {
    tShp = (tTexture_ShapeInfo *)(&extra->custom_shapes->shpptr + index * 8);
  }
  local_res4 = flags;
  local_res8 = x;
  local_resc = y;
  AdjustShapeDrawing__FP18tTexture_ShapeInfoRiN21iPiP18tDrawShapeExtended
            (tShp,&local_res8,&local_resc,(int *)&local_res4,(0x80 - fade) * 0x10000 >> 0x10,
             aiStack32,extra);
  if ((local_res4 & 0xc0) == 0) {
    DrawFlatShape__FP18tTexture_ShapeInfoiiiPii(tShp,local_res4,local_res8,local_resc,aiStack32,abr)
    ;
  }
  else {
    DrawGouraudShape__FP18tTexture_ShapeInfoiiiPii
              (tShp,local_res4,local_res8,local_resc,aiStack32,abr);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ScaleGouraudShape__FP18tTexture_ShapeInfoiiiiiPii(struct tTexture_ShapeInfo *shp /*$s4*/, int flags /*$s7*/, int x /*$s6*/, int y /*$s5*/, int scalex /*stack 16*/, int scaley /*stack 20*/, int *color /*stack 24*/, int abr /*stack 28*/)
 // line 1089, offset 0x8004e77c
	/* begin block 1 */
		// Start line: 1090
		// Start offset: 0x8004E77C
		// Variables:
	// 		struct POLY_GT4 *prim; // $s3
	// 		short width; // $s2
	// 		short height; // $s1
	// 		char u; // $a1
	// 		char v; // $v0
	// 		char uw; // $a2
	// 		char vh; // $a0
	// 		short bpp; // stack offset -48
	/* end block 1 */
	// End offset: 0x8004E9E4
	// End Line: 1139

	/* begin block 2 */
		// Start line: 2151
	/* end block 2 */
	// End Line: 2152

	/* begin block 3 */
		// Start line: 2156
	/* end block 3 */
	// End Line: 2157

	/* begin block 4 */
		// Start line: 2156
	/* end block 4 */
	// End Line: 2157

void ScaleGouraudShape__FP18tTexture_ShapeInfoiiiiiPii
               (tTexture_ShapeInfo *shp,int flags,int x,int y,int scalex,int scaley,int *color,
               int abr)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  
  puVar4 = DAT_1f800004;
  puVar3 = DAT_1f800000;
  sVar12 = (short)x;
  sVar11 = (short)y;
  sVar10 = *(short *)&shp->next;
  sVar9 = *(short *)((int)&shp->next + 2);
  bVar1 = shp->depth;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar8 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 0xd;
  *puVar3 = *puVar3 & 0xff000000 | uVar8;
  puVar4[1] = *color;
  puVar4[4] = color[1];
  puVar4[7] = color[2];
  puVar4[10] = color[3];
  SetPolyGT4((int)puVar4);
  SetSemiTrans((int)puVar4,flags & 1);
  uVar8 = GetClut((shp->clutID & 0x3fU) << 4,shp->clutID >> 6);
  *(undefined2 *)((int)puVar4 + 0xe) = (short)uVar8;
  *(ushort *)((int)puVar4 + 0x1a) =
       (ushort)(((uint)*(byte *)&shp->field_0x9 & 3) << 7) | (ushort)((abr & 3U) << 5) |
       (short)(shp->centery & 0x100U) >> 4 | (ushort)(((uint)(ushort)shp->centerx & 0x3c0) >> 6) |
       (ushort)(((uint)(ushort)shp->centery & 0x200) << 2);
  if ((flags & 4U) != 0) {
    uVar8 = fixedmult(scalex,(int)sVar10);
    sVar12 = sVar12 + (short)uVar8;
    sVar10 = -sVar10;
  }
  if ((flags & 2U) != 0) {
    uVar8 = fixedmult(scaley,(int)sVar9);
    sVar11 = sVar11 + (short)uVar8;
    sVar9 = -sVar9;
  }
  *(short *)(puVar4 + 2) = sVar12;
  *(short *)((int)puVar4 + 10) = sVar11;
  uVar8 = fixedmult(scalex,(int)sVar10);
  *(short *)(puVar4 + 5) = sVar12 + -1 + (short)uVar8;
  *(short *)((int)puVar4 + 0x16) = sVar11;
  *(short *)(puVar4 + 8) = sVar12;
  uVar8 = fixedmult(scaley,(int)sVar9);
  *(short *)((int)puVar4 + 0x22) = sVar11 + (short)uVar8;
  uVar8 = fixedmult(scalex,(int)sVar10);
  *(short *)(puVar4 + 0xb) = sVar12 + -1 + (short)uVar8;
  uVar8 = fixedmult(scaley,(int)sVar9);
  *(short *)((int)puVar4 + 0x2e) = sVar11 + (short)uVar8;
  uVar8 = (uint)(ushort)shp->centerx & 0x3f;
  cVar7 = (char)((int)(uVar8 << 4) / (int)(uint)bVar1);
  if (bVar1 == 0) {
    trap(0x1c00);
  }
  if (((uint)bVar1 == 0xffffffff) && (uVar8 == 0x8000000)) {
    trap(0x1800);
  }
  cVar2 = *(char *)((int)&shp->next + 2);
  cVar5 = *(char *)&shp->centery;
  if ((flags & 4U) != 0) {
    cVar7 = cVar7 + -1;
  }
  cVar6 = cVar7 + *(char *)&shp->next;
  if ((flags & 2U) != 0) {
    cVar5 = cVar5 + -1;
  }
  *(char *)((int)puVar4 + 0xd) = cVar5;
  *(char *)((int)puVar4 + 0x19) = cVar5;
  cVar5 = cVar5 + cVar2;
  *(char *)(puVar4 + 3) = cVar7;
  *(char *)(puVar4 + 6) = cVar6;
  *(char *)(puVar4 + 9) = cVar7;
  *(char *)((int)puVar4 + 0x25) = cVar5;
  *(char *)(puVar4 + 0xc) = cVar6;
  *(char *)((int)puVar4 + 0x31) = cVar5;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ScaleFlatShape__FP18tTexture_ShapeInfoiiiiiPii(struct tTexture_ShapeInfo *shp /*$a0*/, int flags /*$a1*/, int x /*$a2*/, int y /*$a3*/, int scalex /*stack 16*/, int scaley /*stack 20*/, int *color /*stack 24*/, int abr /*stack 28*/)
 // line 1143, offset 0x8004ea38
	/* begin block 1 */
		// Start line: 1144
		// Start offset: 0x8004EA38
	/* end block 1 */
	// End offset: 0x8004EA38
	// End Line: 1144

	/* begin block 2 */
		// Start line: 2284
	/* end block 2 */
	// End Line: 2285

	/* begin block 3 */
		// Start line: 2289
	/* end block 3 */
	// End Line: 2290

	/* begin block 4 */
		// Start line: 2289
	/* end block 4 */
	// End Line: 2290

void ScaleFlatShape__FP18tTexture_ShapeInfoiiiiiPii
               (tTexture_ShapeInfo *shp,int flags,int x,int y,int scalex,int scaley,int *color,
               int abr)

{
  int iVar1;
  
  iVar1 = *color;
  color[3] = iVar1;
  color[2] = iVar1;
  color[1] = iVar1;
  ScaleGouraudShape__FP18tTexture_ShapeInfoiiiiiPii(shp,flags,x,y,scalex,scaley,color,abr);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended(int index /*$t1*/, int flags /*stack 4*/, int x /*stack 8*/, int y /*stack 12*/, int fade /*stack 16*/, int abr /*stack 20*/, struct tDrawShapeExtended *extra /*stack 24*/)
 // line 1205, offset 0x8004ea88
	/* begin block 1 */
		// Start line: 1206
		// Start offset: 0x8004EA88
		// Variables:
	// 		int scalex; // $s2
	// 		int scaley; // $s3
	// 		struct tTexture_ShapeInfo *tShp; // $s0
	// 		int color[4]; // stack offset -40
	/* end block 1 */
	// End offset: 0x8004EB94
	// End Line: 1231

	/* begin block 2 */
		// Start line: 2354
	/* end block 2 */
	// End Line: 2355

	/* begin block 3 */
		// Start line: 2413
	/* end block 3 */
	// End Line: 2414

	/* begin block 4 */
		// Start line: 2413
	/* end block 4 */
	// End Line: 2414

void ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended
               (int index,int flags,int x,int y,int fade,int abr,tDrawShapeExtended *extra)

{
  tTexture_ShapeInfo *tShp;
  uint local_res4;
  int local_res8;
  int local_resc;
  int aiStack40 [4];
  
  tShp = gCurrentShapes;
  if ((flags & 8U) != 0) {
    tShp = gHelpShapes;
  }
  tShp = (tTexture_ShapeInfo *)(&tShp->shpptr + index * 8);
  if ((flags & 0x200U) != 0) {
    tShp = (tTexture_ShapeInfo *)(&extra->custom_shapes->shpptr + index * 8);
  }
  local_res4 = flags;
  local_res8 = x;
  local_resc = y;
  AdjustShapeDrawing__FP18tTexture_ShapeInfoRiN21iPiP18tDrawShapeExtended
            (tShp,&local_res8,&local_resc,(int *)&local_res4,(0x80 - fade) * 0x10000 >> 0x10,
             aiStack40,extra);
  if ((local_res4 & 0xc0) == 0) {
    ScaleFlatShape__FP18tTexture_ShapeInfoiiiiiPii
              (tShp,local_res4,local_res8,local_resc,0x20000,0x10000,aiStack40,abr);
  }
  else {
    ScaleGouraudShape__FP18tTexture_ShapeInfoiiiiiPii
              (tShp,local_res4,local_res8,local_resc,0x20000,0x10000,aiStack40,abr);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadAllHelpShapes__Fv()
 // line 1236, offset 0x8004ebb4
	/* begin block 1 */
		// Start line: 1237
		// Start offset: 0x8004EBB4
		// Variables:
	// 		char fullName[48]; // stack offset -64
	// 		char *permFile; // $s1
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8004EC2C
	// End Line: 1260

	/* begin block 2 */
		// Start line: 2474
	/* end block 2 */
	// End Line: 2475

	/* begin block 3 */
		// Start line: 2480
	/* end block 3 */
	// End Line: 2481

	/* begin block 4 */
		// Start line: 2480
	/* end block 4 */
	// End Line: 2481

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadAllHelpShapes__Fv(void)

{
  char *f;
  int index;
  int iVar1;
  char acStack64 [48];
  
  sprintf(acStack64,s__szperm_psh_8001283c,PTR_801164e8);
  f = (char *)loadshapeadr(acStack64,0);
  index = 0;
  if (f != (char *)0x0) {
    do {
      iVar1 = index + 1;
      FETexture_LoadPmx__FPciP18tTexture_ShapeInfo
                (f,index,(tTexture_ShapeInfo *)(&gHelpShapes->shpptr + index * 8));
      index = iVar1;
    } while (iVar1 < 0x3b);
    purgememadr((int)f);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSXDrawSquare__Fiiiii(int col /*$a0*/, int x /*$a1*/, int y /*$a2*/, int w /*$a3*/, int h /*stack 16*/)
 // line 1338, offset 0x8004ec44
	/* begin block 1 */
		// Start line: 1339
		// Start offset: 0x8004EC44
		// Variables:
	// 		struct POLY_F4 *prim; // $t0
	/* end block 1 */
	// End offset: 0x8004EC44
	// End Line: 1342

	/* begin block 2 */
		// Start line: 2631
	/* end block 2 */
	// End Line: 2632

	/* begin block 3 */
		// Start line: 2655
	/* end block 3 */
	// End Line: 2656

	/* begin block 4 */
		// Start line: 2655
	/* end block 4 */
	// End Line: 2656

	/* begin block 5 */
		// Start line: 2658
	/* end block 5 */
	// End Line: 2659

void PSXDrawSquare__Fiiiii(int col,int x,int y,int w,int h)

{
  short sVar1;
  uint *puVar2;
  uint *puVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  
  puVar3 = DAT_1f800004;
  puVar2 = DAT_1f800000;
  sVar1 = (short)x;
  sVar5 = sVar1 + (short)w;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar6 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 6;
  *puVar2 = *puVar2 & 0xff000000 | uVar6;
  puVar3[1] = col;
  *(undefined *)((int)puVar3 + 7) = 0x28;
  sVar4 = (short)y;
  *(short *)((int)puVar3 + 10) = sVar4;
  *(short *)((int)puVar3 + 0xe) = sVar4;
  sVar4 = sVar4 + (short)h;
  *(undefined *)((int)puVar3 + 3) = 5;
  *(short *)(puVar3 + 2) = sVar1;
  *(short *)(puVar3 + 3) = sVar5;
  *(short *)(puVar3 + 4) = sVar1;
  *(short *)((int)puVar3 + 0x12) = sVar4;
  *(short *)(puVar3 + 5) = sVar5;
  *(short *)((int)puVar3 + 0x16) = sVar4;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSXDrawGouraudSquare__Fiiiiiiii(int x /*$s3*/, int y /*$s1*/, int w /*$s2*/, int h /*$s4*/, int c1 /*stack 16*/, int c2 /*stack 20*/, int c3 /*stack 24*/, int c4 /*stack 28*/)
 // line 1354, offset 0x8004ecdc
	/* begin block 1 */
		// Start line: 1355
		// Start offset: 0x8004ECDC
		// Variables:
	// 		struct POLY_G4 *prim; // $s0
	/* end block 1 */
	// End offset: 0x8004ECDC
	// End Line: 1355

	/* begin block 2 */
		// Start line: 2698
	/* end block 2 */
	// End Line: 2699

	/* begin block 3 */
		// Start line: 2703
	/* end block 3 */
	// End Line: 2704

	/* begin block 4 */
		// Start line: 2703
	/* end block 4 */
	// End Line: 2704

void PSXDrawGouraudSquare__Fiiiiiiii(int x,int y,int w,int h,int c1,int c2,int c3,int c4)

{
  short sVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  
  puVar3 = DAT_1f800004;
  puVar2 = DAT_1f800000;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar4 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 9;
  *puVar2 = *puVar2 & 0xff000000 | uVar4;
  puVar3[1] = c1;
  puVar3[3] = c2;
  puVar3[5] = c3;
  puVar3[7] = c4;
  SetPolyG4((int)puVar3);
  sVar1 = (short)x;
  sVar6 = sVar1 + (short)w;
  sVar5 = (short)y;
  *(short *)((int)puVar3 + 10) = sVar5;
  *(short *)((int)puVar3 + 0x12) = sVar5;
  sVar5 = sVar5 + (short)h;
  *(short *)(puVar3 + 2) = sVar1;
  *(short *)(puVar3 + 4) = sVar6;
  *(short *)(puVar3 + 6) = sVar1;
  *(short *)((int)puVar3 + 0x1a) = sVar5;
  *(short *)(puVar3 + 8) = sVar6;
  *(short *)((int)puVar3 + 0x22) = sVar5;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSXDrawTransGouraudSquare__Fiiiiiiiii(int x /*$t5*/, int y /*$a1*/, int w /*$a2*/, int h /*$a3*/, int opacity /*stack 16*/, int c1 /*stack 20*/, int c2 /*stack 24*/, int c3 /*stack 28*/, int c4 /*stack 32*/)
 // line 1377, offset 0x8004edcc
	/* begin block 1 */
		// Start line: 1378
		// Start offset: 0x8004EDCC
		// Variables:
	// 		struct POLY_G4 *prim; // $a0

		/* begin block 1.1 */
			// Start line: 1378
			// Start offset: 0x8004EDCC
			// Variables:
		// 		int i; // $t0
		/* end block 1.1 */
		// End offset: 0x8004EEB4
		// End Line: 1399
	/* end block 1 */
	// End offset: 0x8004EEB4
	// End Line: 1399

	/* begin block 2 */
		// Start line: 2755
	/* end block 2 */
	// End Line: 2756

	/* begin block 3 */
		// Start line: 2764
	/* end block 3 */
	// End Line: 2765

	/* begin block 4 */
		// Start line: 2764
	/* end block 4 */
	// End Line: 2765

void PSXDrawTransGouraudSquare__Fiiiiiiiii
               (int x,int y,int w,int h,int opacity,int c1,int c2,int c3,int c4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < opacity) {
    uVar4 = (y + h) * 0x10000;
    do {
      puVar2 = DAT_1f800004;
      puVar1 = DAT_1f800000;
      iVar5 = iVar5 + 1;
      *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
      uVar3 = (uint)DAT_1f800004 & 0xffffff;
      DAT_1f800004 = DAT_1f800004 + 9;
      *puVar1 = *puVar1 & 0xff000000 | uVar3;
      puVar2[2] = y << 0x10 | x;
      puVar2[6] = uVar4 | x;
      puVar2[1] = c1;
      puVar2[3] = c2;
      puVar2[5] = c3;
      puVar2[7] = c4;
      *(undefined *)((int)puVar2 + 7) = 0x39;
      *(undefined *)((int)puVar2 + 3) = 8;
      puVar2[4] = y << 0x10 | x + w;
      puVar2[8] = uVar4 | x + w;
    } while (iVar5 < opacity);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSXDrawTransSquare__Fiiiiis(int col /*$s1*/, int x /*$t5*/, int y /*$t6*/, int w /*$a3*/, int h /*stack 16*/, int opacity /*stack 20*/)
 // line 1404, offset 0x8004eed0
	/* begin block 1 */
		// Start line: 1405
		// Start offset: 0x8004EED0
		// Variables:
	// 		struct POLY_F4 *prim; // $a0
	// 		short i; // $t3
	/* end block 1 */
	// End offset: 0x8004EFA4
	// End Line: 1417

	/* begin block 2 */
		// Start line: 2854
	/* end block 2 */
	// End Line: 2855

	/* begin block 3 */
		// Start line: 2860
	/* end block 3 */
	// End Line: 2861

	/* begin block 4 */
		// Start line: 2860
	/* end block 4 */
	// End Line: 2861

void PSXDrawTransSquare__Fiiiiis(int col,int x,int y,int w,int h,int opacity)

{
  short sVar1;
  short sVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  
  iVar8 = 0;
  if (0 < (int)(short)opacity) {
    sVar1 = (short)x;
    sVar6 = sVar1 + (short)w;
    sVar2 = (short)y;
    sVar7 = sVar2 + (short)h;
    do {
      puVar4 = DAT_1f800004;
      puVar3 = DAT_1f800000;
      iVar8 = iVar8 + 1;
      *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
      uVar5 = (uint)DAT_1f800004 & 0xffffff;
      DAT_1f800004 = DAT_1f800004 + 6;
      *puVar3 = *puVar3 & 0xff000000 | uVar5;
      puVar4[1] = col;
      *(undefined *)((int)puVar4 + 7) = 0x2a;
      *(undefined *)((int)puVar4 + 3) = 5;
      *(short *)(puVar4 + 2) = sVar1;
      *(short *)((int)puVar4 + 10) = sVar2;
      *(short *)(puVar4 + 3) = sVar6;
      *(short *)((int)puVar4 + 0xe) = sVar2;
      *(short *)(puVar4 + 4) = sVar1;
      *(short *)((int)puVar4 + 0x12) = sVar7;
      *(short *)(puVar4 + 5) = sVar6;
      *(short *)((int)puVar4 + 0x16) = sVar7;
    } while (iVar8 * 0x10000 >> 0x10 < (int)(short)opacity);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FontUpsideDownBlit__FiiPviiP12charactertbli(int x /*$a0*/, int y /*$t8*/, void *src /*$a2*/, int u /*$a3*/, int v /*stack 16*/, struct charactertbl *ch /*stack 20*/)
 // line 1434, offset 0x8004efb4
	/* begin block 1 */
		// Start line: 1435
		// Start offset: 0x8004EFB4
		// Variables:
	// 		struct POLY_FT4 *prim; // $t1
	// 		int width; // $t7
	// 		int height; // $t6
	// 		int dv; // $t0
	/* end block 1 */
	// End offset: 0x8004EFB4
	// End Line: 1435

	/* begin block 2 */
		// Start line: 2908
	/* end block 2 */
	// End Line: 2909

	/* begin block 3 */
		// Start line: 2926
	/* end block 3 */
	// End Line: 2927

	/* begin block 4 */
		// Start line: 2926
	/* end block 4 */
	// End Line: 2927

void FontUpsideDownBlit__FiiPviiP12charactertbli(int x,int y,void *src,int u,int v,charactertbl *ch)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  short sVar14;
  
  puVar8 = DAT_1f800004;
  puVar7 = DAT_1f800000;
  bVar2 = ch->width;
  bVar3 = ch->height;
  cVar1 = ch->yoffset;
  cVar12 = (char)((*(int *)((int)src + 0xc) << 4) >> 0x14) + (char)v + -1;
  uVar13 = (uint)DAT_1f800004 & 0xffffff;
  puVar10 = DAT_1f800004 + 10;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  DAT_1f800004 = puVar10;
  uVar9 = font_tint;
  *puVar7 = *puVar7 & 0xff000000 | uVar13;
  puVar8[1] = uVar9;
  *(undefined *)((int)puVar8 + 3) = 9;
  *(undefined *)((int)puVar8 + 7) = 0x2c;
  sVar5 = ((short)y + (short)cVar1 * -2 + 5) - (ushort)bVar3;
  *(ushort *)((int)puVar8 + 0xe) = gFontClut;
  bVar4 = *(byte *)src;
  uVar13 = *(uint *)((int)src + 0xc);
  cVar1 = (char)u;
  cVar11 = cVar1 + bVar2;
  *(char *)((int)puVar8 + 0xd) = cVar12;
  *(char *)((int)puVar8 + 0x15) = cVar12;
  sVar6 = (short)x;
  sVar14 = sVar6 + (ushort)bVar2;
  *(char *)(puVar8 + 3) = cVar1;
  *(char *)(puVar8 + 5) = cVar11;
  *(char *)(puVar8 + 7) = cVar1;
  *(char *)((int)puVar8 + 0x1d) = cVar12 + bVar3;
  *(char *)(puVar8 + 9) = cVar11;
  *(char *)((int)puVar8 + 0x25) = cVar12 + bVar3;
  *(short *)(puVar8 + 2) = sVar6;
  *(ushort *)((int)puVar8 + 0x16) =
       (ushort)(((uint)bVar4 & 3) << 7) | (ushort)(uVar13 >> 0x14) & 0x10 |
       (ushort)((int)(uVar13 & 0x3ff) >> 6);
  *(short *)((int)puVar8 + 10) = sVar5 + (ushort)bVar3;
  *(short *)(puVar8 + 4) = sVar14;
  *(short *)((int)puVar8 + 0x12) = sVar5 + (ushort)bVar3;
  *(short *)(puVar8 + 6) = sVar6;
  *(short *)((int)puVar8 + 0x1a) = sVar5;
  *(short *)(puVar8 + 8) = sVar14;
  *(short *)((int)puVar8 + 0x22) = sVar5;
  return;
}





