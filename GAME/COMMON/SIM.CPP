#include "NFS4.H"
#include "SIM.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Sim_StartUp__Fv()
 // line 186, offset 0x800b6574
	/* begin block 1 */
		// Start line: 187
		// Start offset: 0x800B6574
	/* end block 1 */
	// End offset: 0x800B6574
	// End Line: 187

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Sim_StartUp__Fv(void)

{
  simVar.restartGame = 1;
  simVar.endSimGame = 0;
  simVar.pauseSim = 0;
  simVar.quickPauseSim = 0;
  simVar.goalClockTicks = 0;
  simVar.currentClockTicks = 0;
  simVar.keyRelease = 0;
  simGlobal.gameStarted = 0;
  simGlobal.gameTicks = 0;
  simGlobal.schedule32Hz = Sched_CreateNewSchedule__FPci(s_Sc32_1_8013d410,0x46);
  simGlobal.schedule32Hz2 = Sched_CreateNewSchedule__FPci(s_Sc32_2_8013d418,0xb);
  simGlobal.schedule64Hz = Sched_CreateNewSchedule__FPci(&DAT_8013d420,0x1a);
  FastRandom_StartUp__FUi(GameSetup_gData.randSeed);
  AICop_StartUp__Fv();
  AIInit_StartUp1__Fv();
  R3DCar_StartUp__Fv();
  CarIO_StartUp__Fv();
  Cars_StartUp__Fv();
  R3DCar_PostStartUp__Fv();
  AIHigh_StartUp__Fv();
  Loading_UpdateLoadingScreen__Fi(8);
  Loading_UpdateLoadingScreen__Fi(9);
  AIInit_StartUp2__Fv();
  Loading_UpdateLoadingScreen__Fi(10);
  AudioCmn_Init__Fv();
  Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
            (simGlobal.schedule64Hz,Camera_Update__Fv,(void *)0x0,100);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sim_Restart__Fv()
 // line 231, offset 0x800b6688
	/* begin block 1 */
		// Start line: 232
		// Start offset: 0x800B6688
	/* end block 1 */
	// End offset: 0x800B6688
	// End Line: 232

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Sim_Restart__Fv(void)

{
  uGp00000ee4 = 1;
  simVar.endSimGame = 0;
  simVar.pauseSim = 0;
  simVar.quickPauseSim = 0;
  simVar.goalClockTicks = 0;
  simVar.currentClockTicks = 0;
  simGlobal.gameStarted = 0;
  countdown = '\0';
  simGlobal.gameTicks = 0;
  GameSetup_gData.perpArrests = 0;
  FastRandom_StartUp__FUi(GameSetup_gData.randSeed);
  AICop_Restart__Fv();
  AIInit_Reset1__Fv();
  R3DCar_Restart__Fv();
  AIHigh_Restart1__Fv();
  Cars_Restart__Fv();
  AIHigh_Restart2__Fv();
  AIInit_Reset2__Fv();
  Hud_Reset__Fv();
  Render_RestartTrackRender__Fv();
  SimQueue_Reset__Fv();
  simGlobal.time32Hz = Input_gTime;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sim_CleanUp__Fv()
 // line 264, offset 0x800b6754
	/* begin block 1 */
		// Start line: 265
		// Start offset: 0x800B6754
	/* end block 1 */
	// End offset: 0x800B6754
	// End Line: 265

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Sim_CleanUp__Fv(void)

{
  Force_Disable__Fv();
  SimQueue_CleanUp__Fv();
  Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv
            (simGlobal.schedule64Hz,Camera_Update__Fv,(void *)0x0);
  AIInit_CleanUp2__Fv();
  AIHigh_CleanUp__Fv();
  Cars_CleanUp__Fv();
  R3DCar_CleanUp__Fv();
  CarIO_CleanUp__Fv();
  AIInit_CleanUp1__Fv();
  AICop_CleanUp__Fv();
  FastRandom_CleanUp__Fv();
  Sched_CleanUpSchedule__FP15Sched_tSchedule(simGlobal.schedule32Hz);
  Sched_CleanUpSchedule__FP15Sched_tSchedule(simGlobal.schedule32Hz2);
  Sched_CleanUpSchedule__FP15Sched_tSchedule(simGlobal.schedule64Hz);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sim_FadeInSFX__Fv()
 // line 290, offset 0x800b67f8
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x800B67F8
	/* end block 1 */
	// End offset: 0x800B6870
	// End Line: 302

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Sim_FadeInSFX__Fv(void)

{
  int iVar1;
  int iVar2;
  
  if (simGlobal.gameTicks == 0) {
    GameSetup_gData.userSetting.sfxLevel = gMasterSFXLevel;
    gMasterSFXLevel = 0;
    return;
  }
  if (simGlobal.gameTicks - 0x11U < 0x40) {
    if (Replay_ReplayInterface.statsScreen == 0) {
      iVar1 = simGlobal.gameTicks + -0x10;
      iVar2 = GameSetup_gData.userSetting.sfxLevel;
    }
    else {
      iVar1 = GameSetup_gData.userSetting.sfxLevel >> 2;
      iVar2 = simGlobal.gameTicks + -0x10;
    }
    gMasterSFXLevel = iVar2 * iVar1 >> 6;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sim_ProcessSimSchedules__Fv()
 // line 312, offset 0x800b6878
	/* begin block 1 */
		// Start line: 313
		// Start offset: 0x800B6878

		/* begin block 1.1 */
			// Start line: 313
			// Start offset: 0x800B6878

			/* begin block 1.1.1 */
				// Start line: 316
				// Start offset: 0x800B68F4

				/* begin block 1.1.1.1 */
					// Start line: 317
					// Start offset: 0x800B68F4

					/* begin block 1.1.1.1.1 */
						// Start line: 318
						// Start offset: 0x800B6904

						/* begin block 1.1.1.1.1.1 */
							// Start line: 319
							// Start offset: 0x800B6904
							// Variables:
						// 		int i; // $s0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800B6950
						// End Line: 329
					/* end block 1.1.1.1.1 */
					// End offset: 0x800B69C8
					// End Line: 342
				/* end block 1.1.1.1 */
				// End offset: 0x800B69C8
				// End Line: 342
			/* end block 1.1.1 */
			// End offset: 0x800B69C8
			// End Line: 342
		/* end block 1.1 */
		// End offset: 0x800B69EC
		// End Line: 349
	/* end block 1 */
	// End offset: 0x800B6B78
	// End Line: 455

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Sim_ProcessSimSchedules__Fv(void)

{
  int iVar1;
  int iVar2;
  
  if (((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
     (((__Cars_gHumanRaceCarList_9__->carFlags & 0x200U) != 0 ||
      ((Cars_gNumHumanRaceCars == 2 && ((PTR_8010fa4c->carFlags & 0x200U) != 0)))))) {
    Sim_FadeInSFX__Fv();
    simGlobal.gameStarted = 1;
  }
  else {
    if (simGlobal.gameStarted == 0) {
      iVar1 = (uint)(byte)countdown - 1;
      iVar2 = iVar1;
      if (iVar1 < 0) {
        iVar2 = 0;
      }
      while (iVar1 < 4) {
        AudioCmn_GetAsyncSfx__Fiib(2,iVar2 + 0x23,(void *)0x0);
        iVar1 = iVar2 + 1;
        iVar2 = iVar1;
      }
      if ((&counter)[(uint)(byte)countdown] <= simGlobal.gameTicks) {
        if (0x1ff < simGlobal.gameTicks) {
          simGlobal.gameStarted = 1;
        }
        AudioCmn_PlaySound__Fiiiii(-4,(uint)(byte)countdown + 0x23,0,0x7f,0x40);
        countdown = countdown + '\x01';
      }
      Sim_FadeInSFX__Fv();
    }
  }
  if ((simGlobal.gameTicks & 1U) == 0) {
    systemtask(0);
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 1;
    Stats_ClearPosition__Fv();
    Collide_ClearCollisionRegistry__Fv();
    Sched_Execute__FP15Sched_tSchedule(simGlobal.schedule32Hz);
    Cars_ManageBureaucracy__Fv();
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 0;
    Cars_CheckForAccidentScenes__Fv();
  }
  gWSavePtr = SetSp();
  stackSpeedUpEnbabledFlag = 1;
  Sched_Execute__FP15Sched_tSchedule(simGlobal.schedule64Hz);
  gWSavePtr = SetSp();
  stackSpeedUpEnbabledFlag = 0;
  if ((simGlobal.gameTicks & 1U) != 0) {
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 1;
    AIHigh_Execute__Fv();
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 0;
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 1;
    Sched_Execute__FP15Sched_tSchedule(simGlobal.schedule32Hz2);
    Stats_TrackEndGame__Fv();
    Stats_DoPlayerGlue__Fv();
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 0;
    AudioClc_SoundCars__Fv();
  }
  simGlobal.gameTicks = simGlobal.gameTicks + 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sim_ProcessPause__Fv()
 // line 467, offset 0x800b6b9c
	/* begin block 1 */
		// Start line: 468
		// Start offset: 0x800B6B9C
		// Variables:
	// 		int r; // $v1
	/* end block 1 */
	// End offset: 0x800B6C90
	// End Line: 517

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Sim_ProcessPause__Fv(void)

{
  int iVar1;
  
  if (DAT_00000edc <= clock_realTime.time32Hz) {
    iVar1 = MPause_Logic__Fv();
    if (iVar1 == 1) {
      if (simVar.quickPauseSim == 0) {
        AudioCmn_UnPause__Fv();
      }
      gSimQueue_BlockSelf = 0;
      simVar.pauseSim = 0;
      Force_UnPause__Fv();
    }
    else {
      if (iVar1 == 2) {
        AudioCmn_UnPauseAndRestart__Fv();
        simVar.pauseSim = 1;
        simVar.endSimGame = 1;
        simVar.restartGame = 1;
      }
      else {
        if (1 < iVar1 - 4U) {
          return;
        }
        if (iVar1 == 5) {
          GameSetup_gData.pinkSlipsForfeit = ZEXT14(Device_gPausePortIndex != '\0');
        }
        Hud_BTC_QuitOut__Fv();
        AudioCmn_UnPauseAndRestart__Fv();
        simVar.pauseSim = 0;
        simVar.endSimGame = 1;
        simVar.restartGame = 0;
        Stats_ExtrapolateOpponentTimes__Fi(1);
        DAT_00000ee4 = 1;
      }
    }
    MPause_EndPauseMenu__Fv();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sim_CheckForPause__Fi(int checkInput /*$a0*/)
 // line 536, offset 0x800b6ca0
	/* begin block 1 */
		// Start line: 537
		// Start offset: 0x800B6CA0
	/* end block 1 */
	// End offset: 0x800B6D3C
	// End Line: 549

void Sim_CheckForPause__Fi(int checkInput)

{
  int iVar1;
  
  if ((((Replay_ReplayMode < 2) && (simVar.restartGame == 0)) && (0x20 < simGlobal.gameTicks)) &&
     (((checkInput != 0 && (iVar1 = Input_Interface__FUli(6,1), iVar1 != 0)) ||
      (Device_gForcePause != 0)))) {
    DAT_00000edc = clock_realTime.time32Hz + 4;
    AudioCmn_Pause__Fv();
    gSimQueue_BlockSelf = 1;
    simVar.pauseSim = 1;
    Force_Pause__Fv();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sim_MainGameLoop__Fv()
 // line 554, offset 0x800b6d4c
	/* begin block 1 */
		// Start line: 555
		// Start offset: 0x800B6D4C
		// Variables:
	// 		int lastRealTick; // $s6
	// 		int lastGoalTick; // $s7

		/* begin block 1.1 */
			// Start line: 562
			// Start offset: 0x800B6DB8

			/* begin block 1.1.1 */
				// Start line: 564
				// Start offset: 0x800B6DC8
				// Variables:
			// 		int realTick; // $a1
			// 		int diffReal; // $v1
			// 		int diffGoal; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800B6E00
			// End Line: 581

			/* begin block 1.1.2 */
				// Start line: 633
				// Start offset: 0x800B6E2C

				/* begin block 1.1.2.1 */
					// Start line: 674
					// Start offset: 0x800B6F1C

					/* begin block 1.1.2.1.1 */
						// Start line: 675
						// Start offset: 0x800B6F2C

						/* begin block 1.1.2.1.1.1 */
							// Start line: 676
							// Start offset: 0x800B6F2C

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 682
								// Start offset: 0x800B6F50

								/* begin block 1.1.2.1.1.1.1.1 */
									// Start line: 699
									// Start offset: 0x800B6F74

									/* begin block 1.1.2.1.1.1.1.1.1 */
										// Start line: 702
										// Start offset: 0x800B6F9C

										/* begin block 1.1.2.1.1.1.1.1.1.1 */
											// Start line: 702
											// Start offset: 0x800B6F9C
											// Variables:
										// 		int i; // $s0
										/* end block 1.1.2.1.1.1.1.1.1.1 */
										// End offset: 0x800B7050
										// End Line: 718
									/* end block 1.1.2.1.1.1.1.1.1 */
									// End offset: 0x800B7050
									// End Line: 718
								/* end block 1.1.2.1.1.1.1.1 */
								// End offset: 0x800B7050
								// End Line: 718
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x800B7050
							// End Line: 718
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x800B7050
						// End Line: 718
					/* end block 1.1.2.1.1 */
					// End offset: 0x800B7050
					// End Line: 718
				/* end block 1.1.2.1 */
				// End offset: 0x800B7050
				// End Line: 718
			/* end block 1.1.2 */
			// End offset: 0x800B7050
			// End Line: 722
		/* end block 1.1 */
		// End offset: 0x800B71F0
		// End Line: 822
	/* end block 1 */
	// End offset: 0x800B7220
	// End Line: 827

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Sim_MainGameLoop__Fv(void)

{
  int iVar1;
  int cviewP;
  int iVar2;
  ulong key;
  undefined *puVar3;
  int iVar4;
  
  DAT_00000ee4 = 1;
  iVar4 = 0;
  simGlobal.time32Hz = Input_gTime;
  puVar3 = &DAT_00002710 + clock_realTime.time64Hz;
  do {
    if (simVar.endSimGame != 0) {
      if (Replay_ReplayMode < 2) {
        GameSetup_gData.finalPerpArrests = GameSetup_gData.perpArrests;
      }
      return;
    }
    systemtask(0);
    iVar1 = clock_realTime.time64Hz;
    simVar.goalClockTicks = gSimQueue_Ticker * 2;
    if (simVar.goalClockTicks - iVar4 < clock_realTime.time64Hz - (int)puVar3) {
      simVar.goalClockTicks = simVar.goalClockTicks + 1;
    }
    iVar4 = simVar.goalClockTicks;
    if (0x10 < Input_gTime - simGlobal.time32Hz) {
      simGlobal.time32Hz = Input_gTime;
    }
    while ((simGlobal.time32Hz <= Input_gTime && (simVar.endSimGame == 0))) {
      if ((Replay_ReplayMode == 2) &&
         ((simVar.pauseSim == 0 &&
          (Replay_GetInterfaceKey__Fv(), Replay_ReplayInterface.depressed == 4)))) {
        Replay_ReplayInterface.depressed = 0;
        simVar.endSimGame = Replay_ReplayInterface.end;
        if (GameSetup_gData.instantReplay == 0) {
          if ((Replay_ReplayInterface.end == 0) || (simVar.quickPauseSim == 0)) {
            if (simVar.quickPauseSim != Replay_ReplayInterface.pause) {
              simVar.quickPauseSim = Replay_ReplayInterface.pause;
              if (Replay_ReplayInterface.pause == 0) {
                AudioCmn_UnPause__Fv();
              }
              else {
                Camera_Update__Fv();
                AudioCmn_Pause__Fv();
              }
            }
          }
          else {
            simVar.quickPauseSim = 0;
            AudioCmn_UnPauseAndQuit__Fv();
          }
        }
        else {
          AudioCmn_UnPauseAndRestart__Fv();
        }
      }
      if (simVar.endSimGame == 0) {
        if (simVar.pauseSim == 0) {
          cviewP = Input_Interface__FUli(0x15,1);
          if (cviewP != 0) {
            AudioMus_SwitchSong__Fv();
            Hud_ActivateCDPlayer = 1;
          }
          cviewP = 0;
          if (simVar.keyRelease == 0) {
            do {
              key = 0x1a;
              if (cviewP != 0) {
                key = 0x1b;
              }
              iVar2 = Input_Interface__FUli(key,1);
              if ((iVar2 != 0) && (Replay_ReplayMode < 2)) {
                Camera_NextMode__Fi(cviewP);
              }
              key = 0x1c;
              if (cviewP != 0) {
                key = 0x1d;
              }
              iVar2 = Input_Interface__FUli(key,1);
              if (iVar2 != 0) {
                DashHUD_ToggleHud__Fi(cviewP);
              }
              iVar2 = Input_Interface__FUli(cviewP + 0x16,0);
              (&Input_gLookBehind)[cviewP] = iVar2;
              Sim_CheckForPause__Fi(1);
              cviewP = cviewP + 1;
            } while (cviewP <= (int)(uint)(GameSetup_gData.commMode == 1));
          }
          else {
            cviewP = Input_Interface__FUli(simVar.keyRelease,0);
            if (cviewP == 0) {
              simVar.keyRelease = 0;
            }
          }
        }
        else {
          Sim_ProcessPause__Fv();
          simVar.keyRelease = 0x18;
        }
      }
      simGlobal.time32Hz = simGlobal.time32Hz + 1;
    }
    DAT_00000ee0 = 0;
    if (((simVar.pauseSim == 0) && (simVar.quickPauseSim == 0)) && (simVar.endSimGame == 0)) {
      if (simVar.goalClockTicks < simVar.currentClockTicks) {
        DAT_00000ee0 = 1;
      }
      else {
        do {
          if ((simVar.currentClockTicks & 1U) == 0) {
            SimQueue_SetCurrentInput__Fi(simVar.currentClockTicks >> 1);
          }
          DAT_00000ec0 = 0;
          if ((((Replay_ReplayMode == 2) && (Replay_ReplayInterface.speed != 2)) &&
              ((Replay_ReplayInterface.speed != 1 || ((simVar.currentClockTicks & 1U) != 0)))) &&
             ((Replay_ReplayInterface.speed != 0 || ((simVar.currentClockTicks & 3U) != 0)))) {
            if (Replay_ReplayInterface.speed == 3) {
              Sim_ProcessSimSchedules__Fv();
              goto LAB_800b716c;
            }
            DAT_00000ec0 = 1;
            Camera_Update__Fv();
          }
          else {
LAB_800b716c:
            Sim_ProcessSimSchedules__Fv();
          }
          simVar.currentClockTicks = simVar.currentClockTicks + 1;
        } while (simVar.currentClockTicks <= simVar.goalClockTicks);
      }
    }
    else {
      Camera_Update__Fv();
    }
    if (DAT_00000ee0 == 0) {
      Render_Render__Fi(simVar.pauseSim);
    }
    cviewP = Input_MainExitKey__Fv();
    if ((cviewP != 0) ||
       ((puVar3 = (undefined *)iVar1, Replay_ReplayMode == 3 &&
        (puVar3 = (undefined *)iVar1, 0x40 < simGlobal.gameTicks)))) {
      simVar.endSimGame = 1;
      puVar3 = (undefined *)iVar1;
    }
  } while( true );
}




