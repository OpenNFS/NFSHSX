#include "NFS4.H"
#include "NFS3.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Nfs2_SystemNLibStartUp__Fv()
 // line 118, offset 0x800a3dec
	/* begin block 1 */
		// Start line: 119
		// Start offset: 0x800A3DEC

		/* begin block 1.1 */
			// Start line: 119
			// Start offset: 0x800A3DEC

			/* begin block 1.1.1 */
				// Start line: 119
				// Start offset: 0x800A3DEC

				/* begin block 1.1.1.1 */
					// Start line: 119
					// Start offset: 0x800A3DEC

					/* begin block 1.1.1.1.1 */
						// Start line: 127
						// Start offset: 0x800A3E18

						/* begin block 1.1.1.1.1.1 */
							// Start line: 127
							// Start offset: 0x800A3E18

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 127
								// Start offset: 0x800A3E18

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 127
									// Start offset: 0x800A3E18
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800A3E18
								// End Line: 127
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800A3E18
							// End Line: 127
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800A3E18
						// End Line: 127
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A3E38
					// End Line: 127
				/* end block 1.1.1.1 */
				// End offset: 0x800A3E38
				// End Line: 127
			/* end block 1.1.1 */
			// End offset: 0x800A3E38
			// End Line: 127
		/* end block 1.1 */
		// End offset: 0x800A3E38
		// End Line: 127
	/* end block 1 */
	// End offset: 0x800A3E38
	// End Line: 136

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Nfs2_SystemNLibStartUp__Fv(void)

{
  Platform_SysStartUp__Fv();
  Loading_GetInitialMemory__Fv();
  if (fgUndefined == (void *)0x0) {
    fgUndefined = __builtin_new(0x50);
    *(undefined4 *)((int)fgUndefined + 0x4c) = 0x80055dc4;
    *(undefined4 *)((int)fgUndefined + 0x48) = 0;
  }
  Render_InitLibRender__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Nfs2_BefuddleCode__Fv()
 // line 178, offset 0x800a3e50
	/* begin block 1 */
		// Start line: 179
		// Start offset: 0x800A3E50
		// Variables:
	// 		int loop; // $s1
	/* end block 1 */
	// End offset: 0x800A3E90
	// End Line: 182

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Nfs2_BefuddleCode__Fv(void)

{
  char *__src;
  int iVar1;
  
  iVar1 = 0;
  __src = &befuddleExtensions;
  do {
    strcpy(&befuddleTemp,__src);
    iVar1 = iVar1 + 1;
    __src = __src + 4;
  } while (iVar1 < 0xe);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Nfs2_ResetGame__Fv()
 // line 186, offset 0x800a3ea8
	/* begin block 1 */
		// Start line: 187
		// Start offset: 0x800A3EA8
	/* end block 1 */
	// End offset: 0x800A3EA8
	// End Line: 187

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Nfs2_ResetGame__Fv(void)

{
  Replay_ResetReplay__Fv();
  BWorld_Restart__Fv();
  Sim_Restart__Fv();
  Camera_Init__Fv();
  Weather_Restart__Fv();
  AudioCmn_Reset__Fv();
  Reset__6Speech();
  AudioClc_StartUp__Fv();
  DashHUD_ResetHUD__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NFS4_LoadPerps__Fv()
 // line 247, offset 0x800a3f08
	/* begin block 1 */
		// Start line: 248
		// Start offset: 0x800A3F08
		// Variables:
	// 		char *buffer; // $s0
	// 		char *data; // $t0
	// 		char *cars; // $s1
	// 		struct tCarInfo *carData; // $t2
	// 		char filename[64]; // stack offset -80
	// 		unsigned long numTiers; // $v1
	// 		unsigned long numMissions; // $a0
	// 		unsigned long numCars; // $t1
	// 		short i; // $t4
	// 		unsigned long j; // $a0
	// 		struct GameSetup_tPerpData *perpInfo; // $t3
	/* end block 1 */
	// End offset: 0x800A4194
	// End Line: 349

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NFS4_LoadPerps__Fv(void)

{
  byte bVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  byte *pbVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  GameSetup_tPerpData *pGVar13;
  int iVar14;
  char acStack80 [64];
  
  if (0 < GameSetup_gData.numPerps) {
    if (GameSetup_gData.commMode == 1) {
      pcVar8 = s_zHPurs2_mis_8005600c;
    }
    else {
      pcVar8 = s_zHPurs_mis_80056000;
    }
    sprintf(acStack80,&DAT_8013d294,PTR_801164fc,pcVar8);
    piVar2 = (int *)loadfileadr(acStack80,0x10);
    sprintf(acStack80,&DAT_8013d294,PTR_801164fc,s_fecars_car_80056018);
    puVar3 = (uint *)loadfileadr(acStack80,0x10);
    pGVar13 = GameSetup_gData.perpInfo;
    iVar14 = 0;
    uVar11 = *puVar3;
    piVar10 = piVar2 + *piVar2 + piVar2[1] * 5 + GameSetup_gData.stageOffset * 0xb + 3;
    if (0 < GameSetup_gData.numPerps) {
      puVar12 = puVar3 + 1;
      puVar7 = (uint *)&GameSetup_gData.perpInfo[0].HudColour;
      pbVar9 = (byte *)((int)piVar10 + 1);
      do {
        uVar6 = 0;
        if (uVar11 == 0) {
LAB_800a4054:
          uVar6 = 0;
          iVar4 = 0;
        }
        else {
          puVar5 = puVar12;
          do {
            if ((int)*(char *)puVar5 == (uint)*(byte *)piVar10) break;
            uVar6 = uVar6 + 1;
            puVar5 = puVar5 + 0x33;
          } while (uVar6 < uVar11);
          iVar4 = uVar6 << 1;
          if (uVar11 <= uVar6) goto LAB_800a4054;
        }
        pGVar13->CarType = (uint)*(byte *)((int)puVar12 + (iVar4 + uVar6) * 0x44 + 1);
        puVar7[-2] = (uint)*pbVar9;
        puVar7[1] = (uint)pbVar9[1];
        puVar7[2] = (int)*(short *)(pbVar9 + 3);
        if (GameSetup_gData.commMode == 1) {
          puVar7[3] = 0xffffffff;
          puVar7[4] = 0xffffffff;
          puVar7[5] = 0xffffffff;
        }
        else {
          puVar7[3] = (int)*(short *)(pbVar9 + 5);
          puVar7[4] = (int)*(short *)(pbVar9 + 7);
          puVar7[5] = (int)*(short *)(pbVar9 + 9);
        }
        piVar10 = piVar10 + 0xb;
        pGVar13 = pGVar13 + 1;
        puVar7[6] = (uint)*(ushort *)(pbVar9 + 0xd);
        iVar14 = iVar14 + 1;
        puVar7[7] = *(uint *)(pbVar9 + 0xf);
        puVar7[8] = *(uint *)(pbVar9 + 0x13);
        puVar7[9] = *(uint *)(pbVar9 + 0x17);
        puVar5 = puVar12 + uVar6 * 0x33;
        puVar7[-1] = (uint)*(byte *)((int)puVar5 + (uint)*pbVar9 + 0x84);
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 0x2c;
        uVar6 = (puVar5 + (uint)bVar1)[0x11];
        *puVar7 = (uint)*(byte *)((int)(puVar5 + (uint)bVar1) + 0x46) | uVar6 & 0xff00 |
                  (uVar6 & 0xff) << 0x10;
        puVar7 = puVar7 + 0xd;
      } while (iVar14 * 0x10000 >> 0x10 < GameSetup_gData.numPerps);
    }
    purgememadr((int)piVar2);
    purgememadr((int)puVar3);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Nfs2_GameModuleStartUp__FPi(int *FrontEndDataStream /*$s0*/)
 // line 357, offset 0x800a41a8
	/* begin block 1 */
		// Start line: 358
		// Start offset: 0x800A41A8

		/* begin block 1.1 */
			// Start line: 358
			// Start offset: 0x800A41A8

			/* begin block 1.1.1 */
				// Start line: 418
				// Start offset: 0x800A4248

				/* begin block 1.1.1.1 */
					// Start line: 418
					// Start offset: 0x800A4248

					/* begin block 1.1.1.1.1 */
						// Start line: 418
						// Start offset: 0x800A4248
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A4274
					// End Line: 418
				/* end block 1.1.1.1 */
				// End offset: 0x800A4274
				// End Line: 418
			/* end block 1.1.1 */
			// End offset: 0x800A4274
			// End Line: 418
		/* end block 1.1 */
		// End offset: 0x800A4274
		// End Line: 418
	/* end block 1 */
	// End offset: 0x800A4328
	// End Line: 459

void Nfs2_GameModuleStartUp__FPi(int *FrontEndDataStream)

{
  Speech *this;
  int iVar1;
  int iVar2;
  
  Audio_InitDriver__Fii(0,0);
  restoretextdraw();
  Platform_InitMemory__Fv();
  Platform_ResetDCTBuffer__Fv();
  GameSetup_StartUp__FPi(FrontEndDataStream);
  Replay_InitReplay__Fv();
  Nfs2_BefuddleCode__Fv();
  Loading_DrawLoadingScreen__Fv();
  Loading_UpdateLoadingScreen__Fi(1);
  NFS4_LoadPerps__Fv();
  Loading_UpdateLoadingScreen__Fi(2);
  Physics_CheckGamedata__Fv();
  Clock_SystemStartUp__Fv();
  AudioCmn_LoadGameSamples__Fv();
  CopSpeak_StartUp__Fv();
  if ((GameSetup_gData.raceType == 1) && (fgSpeech == (Speech *)0x0)) {
    this = (Speech *)__builtin_new(0x3a4);
    fgSpeech = __6Speech(this);
  }
  Render_InitPauseMenu__Fv();
  Render_InitTrackRender__Fv();
  Loading_UpdateLoadingScreen__Fi(4);
  BWorld_Init__Fv();
  Loading_UpdateLoadingScreen__Fi(6);
  Hrz_InitHorizon__Fv();
  Night_InitNightDriving__Fv();
  Weather_Init__Fv();
  Loading_UpdateLoadingScreen__Fi(7);
  Sim_StartUp__Fv();
  Render_InitTrackRenderPostSim__Fv();
  Hud_InitMap__Fv();
  SimQueue_StartUp__Fv();
  iVar1 = largestunused();
  if (GameSetup_gData.commMode == 1) {
    iVar2 = 0x13000;
  }
  else {
    iVar2 = 0xb000;
  }
  if (iVar2 < iVar1) {
    AudioMus_SysStartUp__FiiPc(0x6000,(int)&DAT_00014000,&DAT_8013d29c);
  }
  AudioMus_BuildPlayList__FiPi
            (GameSetup_gData.userSetting.numplaylistsongs,GameSetup_gData.userSetting.playlist);
  largestunused();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Nfs2_CleanUpGameModule__Fv()
 // line 464, offset 0x800a4354
	/* begin block 1 */
		// Start line: 465
		// Start offset: 0x800A4354
		// Variables:
	// 		short k; // $a3

		/* begin block 1.1 */
			// Start line: 527
			// Start offset: 0x800A446C

			/* begin block 1.1.1 */
				// Start line: 527
				// Start offset: 0x800A446C
			/* end block 1.1.1 */
			// End offset: 0x800A44A0
			// End Line: 528
		/* end block 1.1 */
		// End offset: 0x800A44A0
		// End Line: 528
	/* end block 1 */
	// End offset: 0x800A44A0
	// End Line: 531

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Nfs2_CleanUpGameModule__Fv(void)

{
  Car_tObj *pCVar1;
  Car_tStats *pCVar2;
  Car_tStats *pCVar3;
  Car_tObj **ppCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  Render_KillTrackRender__Fv();
  Render_KillPauseMenu__Fv();
  iVar6 = 0;
  if (0 < GameSetup_gData.numCars) {
    iVar5 = 0;
    do {
      ppCVar4 = &__Cars_gList_9__ + (iVar5 >> 0x10);
      ((*ppCVar4)->stats).carType = (*ppCVar4)->carInfo->carType;
      ((*ppCVar4)->stats).carClass = (*ppCVar4)->carInfo->carClass;
      ((*ppCVar4)->stats).carNameIndex = (*ppCVar4)->carInfo->carNameIndex;
      ((*ppCVar4)->stats).carFlags = (*ppCVar4)->carFlags;
      pCVar1 = *ppCVar4;
      pCVar3 = &Cars_gNewCarStatsList + (iVar5 >> 0x10);
      pCVar2 = &pCVar1->stats;
      do {
        iVar5 = pCVar2->sliceTotal;
        iVar7 = pCVar2->sliceTime;
        iVar8 = pCVar2->slice;
        pCVar3->extractSlice = pCVar2->extractSlice;
        pCVar3->sliceTotal = iVar5;
        pCVar3->sliceTime = iVar7;
        pCVar3->slice = iVar8;
        pCVar2 = (Car_tStats *)&pCVar2->lastSlice;
        pCVar3 = (Car_tStats *)&pCVar3->lastSlice;
      } while (pCVar2 != (Car_tStats *)&pCVar1->crash);
      iVar6 = iVar6 + 1;
      iVar5 = iVar6 * 0x10000;
    } while (iVar6 * 0x10000 >> 0x10 < GameSetup_gData.numCars);
  }
  Replay_StoringReplay__Fv();
  AudioCmn_DeInit__Fv();
  if (fgSpeech != (Speech *)0x0) {
    ___6Speech(fgSpeech,3);
    fgSpeech = (Speech *)0x0;
  }
  CopSpeak_CleanUp__Fv();
  Clock_SystemCleanUp__Fv();
  GameSetup_CleanUp__Fv();
  Sim_CleanUp__Fv();
  Hrz_KillHorizon__Fv();
  BWorld_DeInit__Fv();
  Camera_Kill__Fv();
  Weather_DeInit__Fv();
  Audio_DeInitDriver__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadFrontendOverlay__Fv()
 // line 560, offset 0x800a44f8
	/* begin block 1 */
		// Start line: 561
		// Start offset: 0x800A44F8
		// Variables:
	// 		int handle; // $s0
	/* end block 1 */
	// End offset: 0x800A453C
	// End Line: 581

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadFrontendOverlay__Fv(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = asyncloadfileat(s_front_bin_80056024,(uint)&bigBuf);
  while (uVar2 = getasyncreadstatus(uVar1), uVar2 == 0) {
    systemtask(0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadOverlay__Fv()
 // line 589, offset 0x800a454c
	/* begin block 1 */
		// Start line: 590
		// Start offset: 0x800A454C
		// Variables:
	// 		int handle; // $s0
	// 		char fname[60]; // stack offset -72
	/* end block 1 */
	// End offset: 0x800A45A8
	// End Line: 597

/* WARNING: Unknown calling convention yet parameter storage is locked */

void LoadOverlay__Fv(void)

{
  uint uVar1;
  uint uVar2;
  char acStack72 [64];
  
  LoadFrontendOverlay__Fv();
  sprintf(acStack72,s__sDCT_BIN_80056030,PTR_801164e8);
  uVar1 = asyncloadfileat(acStack72,(uint)&CF_DVLC);
  while (uVar2 = getasyncreadstatus(uVar1), uVar2 == 0) {
    systemtask(0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NFS4_LoadingIcon__Fv()
 // line 626, offset 0x800a45b8
	/* begin block 1 */
		// Start line: 627
		// Start offset: 0x800A45B8
		// Variables:
	// 		char fname[80]; // stack offset -104
	// 		int lang; // $a1
	// 		char *ldfile; // $s1
	// 		struct shapetbl *shp; // $s0

		/* begin block 1.1 */
			// Start line: 639
			// Start offset: 0x800A4608
			// Variables:
		// 		struct RECT r; // stack offset -24
		/* end block 1.1 */
		// End offset: 0x800A4608
		// End Line: 639
	/* end block 1 */
	// End offset: 0x800A4608
	// End Line: 639

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NFS4_LoadingIcon__Fv(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char acStack104 [80];
  short local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  sprintf(acStack104,s__sldic_psh_8005603c,PTR_801164fc);
  iVar1 = loadfileadr(acStack104,0);
  uVar3 = (uint)(byte)frontEnd.language;
  if (5 < (byte)frontEnd.language) {
    uVar3 = 0;
  }
  iVar2 = shapepointer(iVar1,uVar3);
  local_14 = 0x400;
  local_18 = 0;
  local_16 = 0;
  local_12 = 0x200;
  ClearImage(&local_18,0,0,0);
  DrawSync(0);
  initlinkmode(0,100,0);
  Draw_DirectSetEnvironment__Fiiiiiiiiii(0,0,0x200,0xf0,1,1,1,0,0,0);
  settrans(0);
  movfxya(iVar2,0x1e2 - (int)*(short *)(iVar2 + 4),0xd2);
  DrawSync(0);
  purgememadr(iVar1);
  initlinkmode(0,1,1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NFS3_CheckForFileOperations__Fv()
 // line 686, offset 0x800a46dc
	/* begin block 1 */
		// Start line: 687
		// Start offset: 0x800A46DC

		/* begin block 1.1 */
			// Start line: 688
			// Start offset: 0x800A46DC
			// Variables:
		// 		int *p; // $v1
		/* end block 1.1 */
		// End offset: 0x800A4728
		// End Line: 695
	/* end block 1 */
	// End offset: 0x800A4728
	// End Line: 695

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NFS3_CheckForFileOperations__Fv(void)

{
  int *piVar1;
  
  piVar1 = DAT_8013eaa0;
  if (DAT_8013eaa0 < DAT_8013eaa4) {
    do {
      if (*piVar1 != 0) {
        trap(0x666);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 < DAT_8013eaa4);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ main()
 // line 703, offset 0x800a4730
	/* begin block 1 */
		// Start line: 704
		// Start offset: 0x800A4730
		// Variables:
	// 		int *setup; // $s0
	// 		short oldReplayMode; // $s5

		/* begin block 1.1 */
			// Start line: 805
			// Start offset: 0x800A4870

			/* begin block 1.1.1 */
				// Start line: 902
				// Start offset: 0x800A4A54
			/* end block 1.1.1 */
			// End offset: 0x800A4AC8
			// End Line: 932
		/* end block 1.1 */
		// End offset: 0x800A4AC8
		// End Line: 932
	/* end block 1 */
	// End offset: 0x800A4AE4
	// End Line: 955

/* WARNING: Unknown calling convention yet parameter storage is locked */

int main(void)

{
  int *stream;
  int iVar1;
  char *pattern;
  tFront_ProcessingType role;
  
  __main();
  GameSetup_gData.replayMode._0_2_ = 0;
  Platform_DebuggerPollHost__Fv();
  Nfs2_SystemNLibStartUp__Fv();
  Audio_InitDriver__Fii(0,0);
  Audio_DeInitDriver__Fv();
  SetVideoMode(0);
  frontEnd.language = -1;
  LoadFrontendOverlay__Fv();
  ComingIntoTheFrontEndTheVeryFirstTime = 1;
  Initialize__11tCarManager(&carManager);
  LoadDescription__11tCarManager(&carManager);
  FECheat_ActivateBonus__F10tCheatCode(cheat_Roadster);
  SetClassViewable__11tCarManager13tCarClassTypeb(&carManager,cct_Roadster,&DAT_00000001);
  SetClassViewable__11tCarManager13tCarClassTypeb(&carManager,cct_PonyCar,&DAT_00000001);
  SetClassViewable__11tCarManager13tCarClassTypeb(&carManager,cct_SaloonCar,&DAT_00000001);
  SetClassViewable__11tCarManager13tCarClassTypeb(&carManager,cct_SportsCar,&DAT_00000001);
  SetClassViewable__11tCarManager13tCarClassTypeb(&carManager,cct_SuperCar,&DAT_00000001);
  SetClassViewable__11tCarManager13tCarClassTypeb(&carManager,cct_GTRCar,&DAT_00000001);
  Initialize__18tTournamentManager(&tournamentManager);
  Initialize__15tMissionManager(&missionManager);
  Initialize__13tTrackManager(&trackManager);
  LoadDescription__18tTournamentManager(&tournamentManager);
  LoadDescription__13tTrackManager(&trackManager);
  Front_InitGraphics__Fv();
  Front_Menu__F21tFront_ProcessingType(kFront_InitialLoad);
  do {
    NFS3_CheckForFileOperations__Fv();
    stream = MinFront_ParseOptions__Fv();
    if (iGp00000d28 != 0) {
      stream = Front_BuildStream__FPi(stream);
    }
    ReleaseDescription__13tTrackManager(&trackManager);
    ReleaseDescription__15tMissionManager(&missionManager);
    ReleaseDescription__18tTournamentManager(&tournamentManager);
    ReleaseDescription__11tCarManager(&carManager);
    initlinkmode(0,1,1);
    NFS3_CheckForFileOperations__Fv();
    Nfs2_GameModuleStartUp__FPi(stream);
    NFS3_CheckForFileOperations__Fv();
    while (simVar.restartGame != 0) {
      simVar.restartGame = 0;
      Nfs2_ResetGame__Fv();
      Sim_MainGameLoop__Fv();
      if ((GameSetup_gData.replayMode < 2) || (GameSetup_gData.instantReplay != 0)) {
        if ((simVar.restartGame == 0) || (GameSetup_gData.instantReplay != 0)) {
          GameSetup_gData.replayMode = 2;
          if (GameSetup_gData.instantReplay == 0) {
            Replay_ReplayInterface.statsScreen = 1;
            iVar1 = Stats_GetNumOpponents__Fv();
            if ((1 < iVar1) &&
               (((GameSetup_gData.raceType != 1 && (GameSetup_gData.raceType != 5)) ||
                (((__Cars_gHumanRaceCarList_9__->carFlags & 0x200U) == 0 &&
                 ((Cars_gNumHumanRaceCars != 2 || ((PTR_8010fa4c->carFlags & 0x200U) == 0)))))))) {
              if ((__Cars_gHumanRaceCarList_9__->stats).finalPosition == 1) {
                pattern = &DAT_8013d2a4;
              }
              else {
                pattern = s_lose__8013d2ac;
              }
              AudioMus_PlaySong__FPc(pattern);
            }
          }
          else {
            Replay_ReplayInterface.statsScreen = 0;
          }
          Replay_ReplayMode = 2;
          simVar.restartGame = 1;
          GameSetup_gData.instantReplay = 0;
        }
      }
      else {
        Replay_ReplayInterface.statsScreen = 0;
      }
    }
    Nfs2_CleanUpGameModule__Fv();
    NFS4_LoadingIcon__Fv();
    LoadOverlay__Fv();
    NFS3_CheckForFileOperations__Fv();
    Front_InitGraphicsAndDisplayLoading__Fv();
    GameSetup_gData.replayMode = (int)(short)GameSetup_gData.replayMode;
    Front_GetInGameVars__Fv();
    LoadDescription__11tCarManager(&carManager);
    LoadDescription__18tTournamentManager(&tournamentManager);
    LoadDescription__13tTrackManager(&trackManager);
    role = kFront_QuitToGameSetup;
    if (quitType == 1) {
      role = kFront_QuitToPostGame;
    }
    Front_Menu__F21tFront_ProcessingType(role);
    NFS3_CheckForFileOperations__Fv();
  } while( true );
}




