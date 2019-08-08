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

void DashHUD_InitHUD__Fv(void)
{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &GameSetup_gData;
  DashHUD_gInfo = (uint)(DAT_801131f8 == 1);
  if (true) {
    do {
      if (puVar1[0x111] == 0) {
        puVar1[0x112] = 0x23ca5;
      }
      else {
        if (puVar1[0x111] == 1) {
          puVar1[0x112] = 0x39999;
        }
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x2d;
    } while (iVar2 <= (int)DashHUD_gInfo);
  }
  DAT_8011274c = 1;
  DAT_80112750 = 1;
  if (DashHUD_gInfo != 0) {
    DAT_80112758 = 0;
  }
  DAT_80112754 = (uint)(DashHUD_gInfo == 0);
  DAT_8011275c = 0;
  DAT_80112760 = 0;
  if (Replay_ReplayMode < 2) {
    DAT_8011278c = DAT_801132d4;
  }
  else {
    DAT_8011278c = 0;
  }
  DAT_80112790 = 0;
  DAT_80112794 = 0;
  DAT_80112798 = 0;
  DAT_8011276c = DAT_801131f0;
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

void DashHUD_ResetHUD__Fv(void)
{
  if (Replay_ReplayMode < 2) {
    DAT_8011274c = 1;
    DAT_80112750 = 1;
    DAT_8011278c = DAT_801132d4;
  }
  else {
    DAT_8011278c = 0;
  }
  DAT_80112794 = 0;
  DAT_80112798 = 0;
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
  (&DAT_8011274c)[player] = (&DAT_8011274c)[player] ^ 1;
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
  int iVar1;
  
  iVar1 = 0;
  if ((0x3f < *(int *)((&Camera_gInfo)[player * 0x44] + 0x3f0)) &&
     (iVar1 = 2, *(int *)((&Camera_gInfo)[player * 0x44] + 0x3f0) < 0x94)) {
    iVar1 = 1;
  }
  if (iVar1 != (&DAT_8011275c)[player]) {
    (&DAT_8011275c)[player] = iVar1;
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
  
  if (false) {
    return;
  }
  carObj = (Car_tObj *)(&_Cars_gHumanRaceCarList)[player];
  DAT_80112768 = (carObj->stats).lap + 1;
  if (DAT_80112768 < 1) {
    DAT_80112768 = 1;
  }
  if (DAT_8011276c < DAT_80112768) {
    DAT_80112768 = DAT_8011276c;
  }
  if (true) {
    DAT_80112764 = 0;
    DAT_80112744 = 0;
    goto LAB_8009b310;
  }
  iVar1 = (carObj->stats).lap;
  if ((iVar1 == 0) || ((0x13f < -(carObj->stats).lapTime && ((carObj->stats).finishType != 2)))) {
    DAT_80112744 = 0;
    DAT_80112764 = -(carObj->stats).lapTime;
  }
  else {
    DAT_80112764 = (carObj->stats).time[iVar1 + -1];
    if (((GameSetup_gData != 4) && (Replay_ReplayMode < 2)) &&
       ((DAT_8011278c == 0 || ((DAT_80112764 < DAT_8011278c || (false)))))) {
      DAT_80112744 = 1;
      DAT_8011278c = DAT_80112764;
      goto LAB_8009b310;
    }
    if (DAT_8011278c == DAT_80112764) {
      DAT_80112744 = 1;
    }
    if ((carObj->stats).sliceTime + 0xc0 < 0) {
      DAT_80112744 = 0;
    }
    if ((DAT_80112744 != 0) && (false)) {
      if (iGp00001864 == 0) {
        iGp00001864 = 1;
      }
      goto LAB_8009b310;
    }
  }
  if (iGp00001864 != 0) {
    iGp00001864 = 0;
  }
LAB_8009b310:
  if ((-(carObj->stats).lapTime < 0x140) && (DAT_80112768 == DAT_8011276c)) {
    DAT_80112748 = 1;
  }
  else {
    DAT_80112748 = 0;
  }
  DAT_80112784 = Stats_GetPosition__FP8Car_tObj(carObj);
  DAT_80112788 = Stats_GetNumOpponents__Fv();
  Cars_InitDashData__FP8Car_tObjPiT1(carObj,(int *)&DAT_80112774,(int *)&DAT_80112780);
  Cars_GetDashData__FP8Car_tObjPiN21(carObj,&DAT_80112770,&DAT_80112778,&DAT_8011277c);
  if (DAT_8011277c < 0) {
    DAT_8011277c = -DAT_8011277c;
  }
  _DAT_80112780 = 0;
  return;


}





