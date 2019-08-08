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

void Sim_StartUp__Fv(void)
{
  simVar = 1;
  DAT_8011e0c8 = 0;
  DAT_8011e0cc = 0;
  DAT_8011e0d4 = 0;
  DAT_8011e0d8 = 0;
  DAT_8011e0dc = 0;
  DAT_8011e0d0 = 0;
  simGlobal = 0;
                    
  DAT_8011e0b0 = 0;
  DAT_8011e0bc = Sched_CreateNewSchedule__FPci("Sc32-1",0x46);
  DAT_8011e0c0 = Sched_CreateNewSchedule__FPci("Sc32-2",0xb);
  DAT_8011e0b8 = Sched_CreateNewSchedule__FPci("Sc64",0x1a);
  FastRandom_StartUp__FUi(0);
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
  Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi(DAT_8011e0b8,Camera_Update__Fv,(void *)0x0,100);
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

void Sim_Restart__Fv(void)
{
  quitType = 1;
  DAT_8011e0c8 = 0;
  DAT_8011e0cc = 0;
  DAT_8011e0d4 = 0;
  DAT_8011e0d8 = 0;
  DAT_8011e0dc = 0;
  simGlobal = 0;
  countdown = 0;
                    
  DAT_8011e0b0 = 0;
  DAT_801133a0 = 0;
  FastRandom_StartUp__FUi(0);
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
  DAT_8011e0b4 = Input_gTime;
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

void Sim_CleanUp__Fv(void)
{
  Force_Disable__Fv();
  SimQueue_CleanUp__Fv();
  Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv(DAT_8011e0b8,Camera_Update__Fv,(void *)0x0);
  AIInit_CleanUp2__Fv();
  AIHigh_CleanUp__Fv();
  Cars_CleanUp__Fv();
  R3DCar_CleanUp__Fv();
  CarIO_CleanUp__Fv();
  AIInit_CleanUp1__Fv();
  AICop_CleanUp__Fv();
  FastRandom_CleanUp__Fv();
  Sched_CleanUpSchedule__FP15Sched_tSchedule(DAT_8011e0bc);
  Sched_CleanUpSchedule__FP15Sched_tSchedule(DAT_8011e0c0);
  Sched_CleanUpSchedule__FP15Sched_tSchedule(DAT_8011e0b8);
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

void Sim_FadeInSFX__Fv(void)
{
  int iVar1;
  int iVar2;
  
  if (true) {
    DAT_801132e0 = gMasterSFXLevel;
    gMasterSFXLevel = 0;
    return;
  }
  if (false) {
    if (DAT_80117048 == 0) {
      iVar1 = -0x10;
      iVar2 = DAT_801132e0;
    }
    else {
      iVar1 = DAT_801132e0 >> 2;
      iVar2 = -0x10;
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

void Sim_ProcessSimSchedules__Fv(void)
{
  int iVar1;
  int iVar2;
  
  if (((GameSetup_gData == 1) || (GameSetup_gData == 5)) &&
     (((uRam00000260 & 0x200) != 0 ||
      ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))) {
    Sim_FadeInSFX__Fv();
    simGlobal = 1;
  }
  else {
    if (simGlobal == 0) {
      iVar1 = (uint)countdown - 1;
      iVar2 = iVar1;
      if (iVar1 < 0) {
        iVar2 = 0;
      }
      while (iVar1 < 4) {
        AudioCmn_GetAsyncSfx__Fiib(2,iVar2 + 0x23,0);
        iVar1 = iVar2 + 1;
        iVar2 = iVar1;
      }
      if (*(int *)(&counter + (uint)countdown * 4) < 1) {
        if (false) {
          simGlobal = 1;
        }
        AudioCmn_PlaySound__Fiiiii(-4,(uint)countdown + 0x23,0,0x7f,0x40);
        countdown = countdown + 1;
      }
      Sim_FadeInSFX__Fv();
    }
  }
  if (true) {
    systemtask(0);
    gWSavePtr = SetSp(0x1f8003fc);
    stackSpeedUpEnbabledFlag = 1;
    Stats_ClearPosition__Fv();
    Collide_ClearCollisionRegistry__Fv();
    Sched_Execute__FP15Sched_tSchedule(DAT_8011e0bc);
    Cars_ManageBureaucracy__Fv();
    gWSavePtr = SetSp(gWSavePtr);
    stackSpeedUpEnbabledFlag = 0;
    Cars_CheckForAccidentScenes__Fv();
  }
  gWSavePtr = SetSp(0x1f8003fc);
  stackSpeedUpEnbabledFlag = 1;
  Sched_Execute__FP15Sched_tSchedule(DAT_8011e0b8);
  gWSavePtr = SetSp(gWSavePtr);
  stackSpeedUpEnbabledFlag = 0;
  if (false) {
    gWSavePtr = SetSp(0x1f8003fc);
    stackSpeedUpEnbabledFlag = 1;
    AIHigh_Execute__Fv();
    gWSavePtr = SetSp(gWSavePtr);
    stackSpeedUpEnbabledFlag = 0;
    gWSavePtr = SetSp(0x1f8003fc);
    stackSpeedUpEnbabledFlag = 1;
    Sched_Execute__FP15Sched_tSchedule(DAT_8011e0c0);
    Stats_TrackEndGame__Fv();
    Stats_DoPlayerGlue__Fv();
    gWSavePtr = SetSp(gWSavePtr);
    stackSpeedUpEnbabledFlag = 0;
    AudioClc_SoundCars__Fv();
  }
  DAT_8011e0b0 = 1;
                    
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

void Sim_ProcessPause__Fv(void)
{
  int iVar1;
  
  if (iGp00000edc <= DAT_80110c2c) {
    iVar1 = MPause_Logic__Fv();
    if (iVar1 == 1) {
      if (DAT_8011e0d4 == 0) {
        AudioCmn_UnPause__Fv();
      }
      gSimQueue_BlockSelf = 0;
      DAT_8011e0cc = 0;
      Force_UnPause__Fv();
    }
    else {
      if (iVar1 == 2) {
        AudioCmn_UnPauseAndRestart__Fv();
        DAT_8011e0cc = 1;
        DAT_8011e0c8 = 1;
        simVar = 1;
      }
      else {
        if (1 < iVar1 - 4U) {
          return;
        }
        if (iVar1 == 5) {
          DAT_801132a4 = 0;
        }
        Hud_BTC_QuitOut__Fv();
        AudioCmn_UnPauseAndRestart__Fv();
        DAT_8011e0cc = 0;
        DAT_8011e0c8 = 1;
        simVar = 0;
        Stats_ExtrapolateOpponentTimes__Fi(1);
        uGp00000ee4 = 1;
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
  
  if ((((Replay_ReplayMode < 2) && (simVar == 0)) && (false)) &&
     (((checkInput != 0 && (iVar1 = Input_Interface__FUli(6,1), iVar1 != 0)) || (false)))) {
    iGp00000edc = DAT_80110c2c + 4;
    AudioCmn_Pause__Fv();
    gSimQueue_BlockSelf = 1;
    DAT_8011e0cc = 1;
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

void Sim_MainGameLoop__Fv(void)
{
  int iVar1;
  int cviewP;
  int iVar2;
  ulong key;
  int iVar3;
  
  uGp00000ee4 = 1;
  iVar3 = 0;
  DAT_8011e0b4 = Input_gTime;
  cviewP = DAT_80110c28 + 10000;
  do {
    if (DAT_8011e0c8 != 0) {
      if (Replay_ReplayMode < 2) {
        DAT_801133a4 = DAT_801133a0;
      }
      return;
    }
    systemtask(0);
    iVar1 = DAT_80110c28;
    DAT_8011e0d8 = -2;
    if (-2 - iVar3 < DAT_80110c28 - cviewP) {
      DAT_8011e0d8 = -1;
    }
    iVar3 = DAT_8011e0d8;
    if (0x10 < Input_gTime - DAT_8011e0b4) {
      DAT_8011e0b4 = Input_gTime;
    }
    while ((DAT_8011e0b4 <= Input_gTime && (DAT_8011e0c8 == 0))) {
      if ((Replay_ReplayMode == 2) &&
         ((DAT_8011e0cc == 0 && (Replay_GetInterfaceKey__Fv(), DAT_80117040 == 4)))) {
        DAT_80117040 = 0;
        DAT_8011e0c8 = DAT_80117034;
        if (DAT_80113214 == 0) {
          if ((DAT_80117034 == 0) || (DAT_8011e0d4 == 0)) {
            if (DAT_8011e0d4 != Replay_ReplayInterface) {
              DAT_8011e0d4 = Replay_ReplayInterface;
              if (Replay_ReplayInterface == 0) {
                AudioCmn_UnPause__Fv();
              }
              else {
                Camera_Update__Fv();
                AudioCmn_Pause__Fv();
              }
            }
          }
          else {
            DAT_8011e0d4 = 0;
            AudioCmn_UnPauseAndQuit__Fv();
          }
        }
        else {
          AudioCmn_UnPauseAndRestart__Fv();
        }
      }
      if (DAT_8011e0c8 == 0) {
        if (DAT_8011e0cc == 0) {
          cviewP = Input_Interface__FUli(0x15,1);
          if (cviewP != 0) {
            AudioMus_SwitchSong__Fv();
            Hud_ActivateCDPlayer = 1;
          }
          cviewP = 0;
          if (DAT_8011e0d0 == 0) {
            if (true) {
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
              } while (cviewP <= (int)(uint)(DAT_801131f8 == 1));
            }
          }
          else {
            cviewP = Input_Interface__FUli(DAT_8011e0d0,0);
            if (cviewP == 0) {
              DAT_8011e0d0 = 0;
            }
          }
        }
        else {
          Sim_ProcessPause__Fv();
          DAT_8011e0d0 = 0x18;
        }
      }
      DAT_8011e0b4 = DAT_8011e0b4 + 1;
    }
    iGp00000ee0 = 0;
    if (((DAT_8011e0cc == 0) && (DAT_8011e0d4 == 0)) && (DAT_8011e0c8 == 0)) {
      if (DAT_8011e0d8 < (int)DAT_8011e0dc) {
        iGp00000ee0 = 1;
      }
      else {
        do {
          if ((DAT_8011e0dc & 1) == 0) {
            SimQueue_SetCurrentInput__Fi((int)DAT_8011e0dc >> 1);
          }
          uGp00000ec0 = 0;
          if ((((Replay_ReplayMode == 2) && (DAT_80117030 != 2)) &&
              ((DAT_80117030 != 1 || ((DAT_8011e0dc & 1) != 0)))) &&
             ((DAT_80117030 != 0 || ((DAT_8011e0dc & 3) != 0)))) {
            if (DAT_80117030 == 3) {
              Sim_ProcessSimSchedules__Fv();
              goto LAB_800b716c;
            }
            uGp00000ec0 = 1;
            Camera_Update__Fv();
          }
          else {
LAB_800b716c:
            Sim_ProcessSimSchedules__Fv();
          }
          DAT_8011e0dc = DAT_8011e0dc + 1;
        } while ((int)DAT_8011e0dc <= DAT_8011e0d8);
      }
    }
    else {
      Camera_Update__Fv();
    }
    if (iGp00000ee0 == 0) {
      Render_Render__Fi(DAT_8011e0cc);
    }
    cviewP = Input_MainExitKey__Fv();
    if ((cviewP != 0) || ((cviewP = iVar1, Replay_ReplayMode == 3 && (cviewP = iVar1, false)))) {
      DAT_8011e0c8 = 1;
      cviewP = iVar1;
    }
  } while( true );


}





