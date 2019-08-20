#include "NFS4.H"
#include "DASHHUD.H"

// decompiled code
// original method signature: 
// void /*$ra*/ DashHUD_InitHUD__Fv()
 // line 38, offset 0x8009aebc
	/* begin block 1 */
		// Start line: 39
		// Start offset: 0x8009AEBC
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x8009AFA4
	// End Line: 78

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DashHUD_InitHUD__Fv(void)

{
  int iVar1;
  GameSetup_tData *pGVar2;
  int iVar3;
  
  iVar3 = 0;
  pGVar2 = &GameSetup_gData;
  DashHUD_gInfo.splitscreen = ZEXT14(GameSetup_gData.commMode == 1);
  do {
    iVar1 = pGVar2->carInfo[0].HudSpeed;
    if (iVar1 == 0) {
      pGVar2->carInfo[0].HudSpeedMult = 0x23ca5;
    }
    else {
      if (iVar1 == 1) {
        pGVar2->carInfo[0].HudSpeedMult = 0x39999;
      }
    }
    iVar3 = iVar3 + 1;
    pGVar2 = (GameSetup_tData *)((pGVar2->controllerData).shockImpact + 1);
  } while (iVar3 <= DashHUD_gInfo.splitscreen);
  DashHUD_gInfo.showhud[0] = 1;
  DashHUD_gInfo.showhud[1] = 1;
  if (DashHUD_gInfo.splitscreen != 0) {
    DashHUD_gInfo.showmap[1] = 0;
  }
  DashHUD_gInfo.showmap[0] = ZEXT14(DashHUD_gInfo.splitscreen == 0);
  DashHUD_gInfo.wrongway[0] = 0;
  DashHUD_gInfo.wrongway[1] = 0;
  if (Replay_ReplayMode < 2) {
    DashHUD_gInfo.record = GameSetup_gData.userSetting.bestlap;
  }
  else {
    DashHUD_gInfo.record = 0;
  }
  DashHUD_gInfo.tutor = 0;
  DashHUD_gInfo.warning[0] = 0;
  DashHUD_gInfo.warning[1] = 0;
  DashHUD_gInfo.maxlaps = GameSetup_gData.numLaps;
  HudPmx_InitTextures__Fv();
  Hud_Init0__Fv();
  Hud_Init__Fv();
  Hud_PositionMap__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DashHUD_KillHUD__Fv()
 // line 101, offset 0x8009aff0
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x8009AFF0
	/* end block 1 */
	// End offset: 0x8009AFF0
	// End Line: 102

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DashHUD_KillHUD__Fv(void)

{
  Hud_Kill__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DashHUD_ResetHUD__Fv()
 // line 106, offset 0x8009b010
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x8009B010
	/* end block 1 */
	// End offset: 0x8009B06C
	// End Line: 119

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DashHUD_ResetHUD__Fv(void)

{
  if (Replay_ReplayMode < 2) {
    DashHUD_gInfo.showhud[0] = 1;
    DashHUD_gInfo.showhud[1] = 1;
    DashHUD_gInfo.record = GameSetup_gData.userSetting.bestlap;
  }
  else {
    DashHUD_gInfo.record = 0;
  }
  DashHUD_gInfo.warning[0] = 0;
  DashHUD_gInfo.warning[1] = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DashHUD_ToggleHud__Fi(int player /*$a0*/)
 // line 125, offset 0x8009b074
	/* begin block 1 */
		// Start line: 126
		// Start offset: 0x8009B074
	/* end block 1 */
	// End offset: 0x8009B074
	// End Line: 128

void DashHUD_ToggleHud__Fi(int player)

{
  DashHUD_gInfo.showhud[player] = DashHUD_gInfo.showhud[player] ^ 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DashHUD_CheckWrongWay__Fi(int player /*$a0*/)
 // line 151, offset 0x8009b098
	/* begin block 1 */
		// Start line: 152
		// Start offset: 0x8009B098
		// Variables:
	// 		int wrongway; // $a1
	// 		struct Car_tObj *car; // $v0
	/* end block 1 */
	// End offset: 0x8009B100
	// End Line: 165

void DashHUD_CheckWrongWay__Fi(int player)

{
  BO_tNewtonObj *pBVar1;
  int iVar2;
  
  pBVar1 = (&Camera_gInfo)[player].anchor[1].collision.lastOtherObj;
  iVar2 = 0;
  if ((0x3f < (int)pBVar1) && (iVar2 = 2, (int)pBVar1 < 0x94)) {
    iVar2 = 1;
  }
  if (iVar2 != DashHUD_gInfo.wrongway[player]) {
    DashHUD_gInfo.wrongway[player] = iVar2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DashHUD_HUDCalc__Fi(int player /*$a0*/)
 // line 171, offset 0x8009b108
	/* begin block 1 */
		// Start line: 172
		// Start offset: 0x8009B108
		// Variables:
	// 		struct Car_tObj *car; // $s1
	// 		static int resethud; // offset 0x0
	/* end block 1 */
	// End offset: 0x8009B3B4
	// End Line: 258

void DashHUD_HUDCalc__Fi(int player)

{
  int iVar1;
  Car_tObj *carObj;
  
  carObj = (&__Cars_gHumanRaceCarList_9__)[player];
  DashHUD_gInfo.lap = (carObj->stats).lap + 1;
  if (DashHUD_gInfo.lap < 1) {
    DashHUD_gInfo.lap = 1;
  }
  if (DashHUD_gInfo.maxlaps < DashHUD_gInfo.lap) {
    DashHUD_gInfo.lap = DashHUD_gInfo.maxlaps;
  }
  if (simGlobal.gameTicks < 0x200) {
    DashHUD_gInfo.laptime = 0;
    DashHUD_gInfo.flashtime = 0;
    goto LAB_8009b310;
  }
  iVar1 = (carObj->stats).lap;
  if ((iVar1 == 0) ||
     ((0x13f < simGlobal.gameTicks - (carObj->stats).lapTime && ((carObj->stats).finishType != 2))))
  {
    DashHUD_gInfo.flashtime = 0;
    DashHUD_gInfo.laptime = simGlobal.gameTicks - (carObj->stats).lapTime;
  }
  else {
    DashHUD_gInfo.laptime = (carObj->stats).time[iVar1 + -1];
    if (((GameSetup_gData.raceType != 4) && (Replay_ReplayMode < 2)) &&
       ((DashHUD_gInfo.record == 0 ||
        ((DashHUD_gInfo.laptime < DashHUD_gInfo.record || (GameSetup_gData.checkpointType == 4))))))
    {
      DashHUD_gInfo.flashtime = 1;
      DashHUD_gInfo.record = DashHUD_gInfo.laptime;
      goto LAB_8009b310;
    }
    if (DashHUD_gInfo.record == DashHUD_gInfo.laptime) {
      DashHUD_gInfo.flashtime = 1;
    }
    if ((carObj->stats).sliceTime + 0xc0 < simGlobal.gameTicks) {
      DashHUD_gInfo.flashtime = 0;
    }
    if ((DashHUD_gInfo.flashtime != 0) && ((simGlobal.gameTicks & 0x10U) != 0)) {
      if (DAT_00001864 == 0) {
        DAT_00001864 = 1;
      }
      goto LAB_8009b310;
    }
  }
  if (DAT_00001864 != 0) {
    DAT_00001864 = 0;
  }
LAB_8009b310:
  if ((simGlobal.gameTicks - (carObj->stats).lapTime < 0x140) &&
     (DashHUD_gInfo.lap == DashHUD_gInfo.maxlaps)) {
    DashHUD_gInfo.flashlap = 1;
  }
  else {
    DashHUD_gInfo.flashlap = 0;
  }
  DashHUD_gInfo.position = Stats_GetPosition__FP8Car_tObj(carObj);
  DashHUD_gInfo.opponents = Stats_GetNumOpponents__Fv();
  Cars_InitDashData__FP8Car_tObjPiT1(carObj,&DashHUD_gInfo.redline,&DashHUD_gInfo.topspeed);
  Cars_GetDashData__FP8Car_tObjPiN21
            (carObj,&DashHUD_gInfo.rpm,&DashHUD_gInfo.gear,&DashHUD_gInfo.speed);
  if (DashHUD_gInfo.speed < 0) {
    DashHUD_gInfo.speed = -DashHUD_gInfo.speed;
  }
  DashHUD_gInfo.topspeed = (int)DashHUD_gInfo.topspeed._2_2_;
  return;
}




