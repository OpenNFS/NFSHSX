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

void Nfs2_BefuddleCode__Fv(void)
{
  char *__src;
  int iVar1;
  
  iVar1 = 0;
  __src = "qpl";
  do {
    strcpy("",__src);
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
  uint *puVar13;
  int iVar14;
  char acStack80 [64];
  
  if (false) {
    if (DAT_801131f8 == 1) {
      pcVar8 = "zHPurs2.mis";
    }
    else {
      pcVar8 = "zHPurs.mis";
    }
    sprintf(acStack80,"%s%s",0,pcVar8);
    piVar2 = (int *)loadfileadr(acStack80,0x10);
    sprintf(acStack80,"%s%s",0,"fecars.car");
    puVar3 = (uint *)loadfileadr(acStack80,0x10);
    puVar13 = &DAT_801133a8;
    iVar14 = 0;
    uVar11 = *puVar3;
    piVar10 = piVar2 + *piVar2 + piVar2[1] * 5 + 3;
    if (false) {
      puVar12 = puVar3 + 1;
      puVar7 = &DAT_801133b4;
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
        *puVar13 = (uint)*(byte *)((int)puVar12 + (iVar4 + uVar6) * 0x44 + 1);
        puVar7[-2] = (uint)*pbVar9;
        puVar7[1] = (uint)pbVar9[1];
        puVar7[2] = (int)*(short *)(pbVar9 + 3);
        if (DAT_801131f8 == 1) {
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
        puVar13 = puVar13 + 0xd;
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
      } while (iVar14 * 0x10000 >> 0x10 < 0);
    }
    purgememadr(piVar2);
    purgememadr(puVar3);
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
  if ((GameSetup_gData == 1) && (fgSpeech == (Speech *)0x0)) {
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
  if (DAT_801131f8 == 1) {
    iVar2 = 0x13000;
  }
  else {
    iVar2 = 0xb000;
  }
  if (iVar2 < iVar1) {
    AudioMus_SysStartUp__FiiPc(0x6000,0x14000,"ymus");
  }
  AudioMus_BuildPlayList__FiPi(0,(int *)&DAT_801132f8);
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

void Nfs2_CleanUpGameModule__Fv(void)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  Render_KillTrackRender__Fv();
  Render_KillPauseMenu__Fv();
  iVar6 = 0;
  if (false) {
    iVar5 = 0;
    do {
      piVar4 = &_Cars_gList + (iVar5 >> 0x10);
      *(undefined4 *)(*piVar4 + 0x3ac) = **(undefined4 **)(*piVar4 + 0x288);
      *(undefined4 *)(*piVar4 + 0x3b0) = *(undefined4 *)(*(int *)(*piVar4 + 0x288) + 4);
      *(undefined4 *)(*piVar4 + 0x3b4) = *(undefined4 *)(*(int *)(*piVar4 + 0x288) + 0x58);
      *(undefined4 *)(*piVar4 + 0x3b8) = *(undefined4 *)(*piVar4 + 0x260);
      iVar1 = *piVar4;
      puVar3 = &Cars_gNewCarStatsList + (iVar5 >> 0x10) * 0x28;
      puVar2 = (undefined4 *)(iVar1 + 0x34c);
      do {
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        puVar2 = puVar2 + 4;
        puVar3 = puVar3 + 4;
      } while (puVar2 != (undefined4 *)(iVar1 + 0x3ec));
      iVar6 = iVar6 + 1;
      iVar5 = iVar6 * 0x10000;
    } while (iVar6 * 0x10000 >> 0x10 < 0);
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

void LoadFrontendOverlay__Fv(void)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = asyncloadfileat("front.bin",&bigBuf);
  while (iVar2 = getasyncreadstatus(uVar1), iVar2 == 0) {
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

void LoadOverlay__Fv(void)
{
  undefined4 uVar1;
  int iVar2;
  char acStack72 [64];
  
  LoadFrontendOverlay__Fv();
  sprintf(acStack72,"%sDCT.BIN",DAT_801164e8);
  uVar1 = asyncloadfileat(acStack72,&CF_DVLC);
  while (iVar2 = getasyncreadstatus(uVar1), iVar2 == 0) {
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

void NFS4_LoadingIcon__Fv(void)
{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char acStack104 [80];
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  sprintf(acStack104,"%sldic.psh",0);
  uVar1 = loadfileadr(acStack104,0);
  uVar3 = (uint)DAT_80114940;
  if (5 < DAT_80114940) {
    uVar3 = 0;
  }
  iVar2 = shapepointer(uVar1,uVar3);
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
  purgememadr(uVar1);
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

void NFS3_CheckForFileOperations__Fv(void)
{
  int *piVar1;
  
  piVar1 = _DAT_8013eaa0;
  if (_DAT_8013eaa0 < _DAT_8013eaa4) {
    do {
      if (*piVar1 != 0) {
        trap(0x666);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 < _DAT_8013eaa4);
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

int main(void)
{
  int *stream;
  int iVar1;
  char *pattern;
  tFront_ProcessingType role;
  
  __main();
  DAT_80113210._0_2_ = 0;
  Platform_DebuggerPollHost__Fv();
  Nfs2_SystemNLibStartUp__Fv();
  Audio_InitDriver__Fii(0,0);
  Audio_DeInitDriver__Fv();
  SetVideoMode(0);
  DAT_80114940 = 0xff;
  LoadFrontendOverlay__Fv();
  ComingIntoTheFrontEndTheVeryFirstTime = 1;
  Initialize__11tCarManager((tCarManager *)&carManager);
  LoadDescription__11tCarManager((tCarManager *)&carManager);
  FECheat_ActivateBonus__F10tCheatCode(cheat_Roadster);
  SetClassViewable__11tCarManager13tCarClassTypeb((tCarManager *)&carManager,cct_Roadster,1);
  SetClassViewable__11tCarManager13tCarClassTypeb((tCarManager *)&carManager,cct_PonyCar,1);
  SetClassViewable__11tCarManager13tCarClassTypeb((tCarManager *)&carManager,cct_SaloonCar,1);
  SetClassViewable__11tCarManager13tCarClassTypeb((tCarManager *)&carManager,cct_SportsCar,1);
  SetClassViewable__11tCarManager13tCarClassTypeb((tCarManager *)&carManager,cct_SuperCar,1);
  SetClassViewable__11tCarManager13tCarClassTypeb((tCarManager *)&carManager,cct_GTRCar,1);
  Initialize__18tTournamentManager((tTournamentManager *)&tournamentManager);
  Initialize__15tMissionManager((tMissionManager *)&missionManager);
  Initialize__13tTrackManager((tTrackManager *)&trackManager);
  LoadDescription__18tTournamentManager((tTournamentManager *)&tournamentManager);
  LoadDescription__13tTrackManager((tTrackManager *)&trackManager);
  Front_InitGraphics__Fv();
  Front_Menu__F21tFront_ProcessingType(kFront_InitialLoad);
  do {
    NFS3_CheckForFileOperations__Fv();
    stream = MinFront_ParseOptions__Fv();
    if (true) {
      stream = Front_BuildStream__FPi(stream);
    }
    ReleaseDescription__13tTrackManager((tTrackManager *)&trackManager);
    ReleaseDescription__15tMissionManager((tMissionManager *)&missionManager);
    ReleaseDescription__18tTournamentManager((tTournamentManager *)&tournamentManager);
    ReleaseDescription__11tCarManager((tCarManager *)&carManager);
    initlinkmode(0,1,1);
    NFS3_CheckForFileOperations__Fv();
    Nfs2_GameModuleStartUp__FPi(stream);
    NFS3_CheckForFileOperations__Fv();
    while (simVar != 0) {
      simVar = 0;
      Nfs2_ResetGame__Fv();
      Sim_MainGameLoop__Fv();
      if ((DAT_80113210 < 2) || (DAT_80113214 != 0)) {
        if ((simVar == 0) || (DAT_80113214 != 0)) {
          DAT_80113210 = 2;
          if (DAT_80113214 == 0) {
            DAT_80117048 = 1;
            iVar1 = Stats_GetNumOpponents__Fv();
            if ((1 < iVar1) &&
               (((GameSetup_gData != 1 && (GameSetup_gData != 5)) ||
                (((uRam00000260 & 0x200) == 0 &&
                 ((Cars_gNumHumanRaceCars != 2 || ((uRam00000260 & 0x200) == 0)))))))) {
              if (iRam000003d0 == 1) {
                pattern = "win*";
              }
              else {
                pattern = "lose*";
              }
              AudioMus_PlaySong__FPc(pattern);
            }
          }
          else {
            DAT_80117048 = 0;
          }
          Replay_ReplayMode = 2;
          simVar = 1;
          DAT_80113214 = 0;
        }
      }
      else {
        DAT_80117048 = 0;
      }
    }
    Nfs2_CleanUpGameModule__Fv();
    NFS4_LoadingIcon__Fv();
    LoadOverlay__Fv();
    NFS3_CheckForFileOperations__Fv();
    Front_InitGraphicsAndDisplayLoading__Fv();
    DAT_80113210 = (int)(short)DAT_80113210;
    Front_GetInGameVars__Fv();
    LoadDescription__11tCarManager((tCarManager *)&carManager);
    LoadDescription__18tTournamentManager((tTournamentManager *)&tournamentManager);
    LoadDescription__13tTrackManager((tTrackManager *)&trackManager);
    role = kFront_QuitToGameSetup;
    if (quitType == 1) {
      role = kFront_QuitToPostGame;
    }
    Front_Menu__F21tFront_ProcessingType(role);
    NFS3_CheckForFileOperations__Fv();
  } while( true );


}





