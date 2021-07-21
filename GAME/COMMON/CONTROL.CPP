#include "THISDUST.H"
#include "CONTROL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Control_AI__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 40, offset 0x80091fdc
	/* begin block 1 */
		// Start line: 41
		// Start offset: 0x80091FDC
	/* end block 1 */
	// End offset: 0x80091FDC
	// End Line: 46

	/* begin block 2 */
		// Start line: 80
	/* end block 2 */
	// End Line: 81

	/* begin block 3 */
		// Start line: 80
	/* end block 3 */
	// End Line: 81

	/* begin block 4 */
		// Start line: 85
	/* end block 4 */
	// End Line: 86

	/* begin block 5 */
		// Start line: 112
	/* end block 5 */
	// End Line: 113

void Control_AI__FP8Car_tObj(Car_tObj *carObj)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Control_Human__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 80, offset 0x80091fe4
	/* begin block 1 */
		// Start line: 81
		// Start offset: 0x80091FE4

		/* begin block 1.1 */
			// Start line: 138
			// Start offset: 0x80092174

			/* begin block 1.1.1 */
				// Start line: 139
				// Start offset: 0x800921A8

				/* begin block 1.1.1.1 */
					// Start line: 230
					// Start offset: 0x8009236C

					/* begin block 1.1.1.1.1 */
						// Start line: 231
						// Start offset: 0x80092380

						/* begin block 1.1.1.1.1.1 */
							// Start line: 232
							// Start offset: 0x80092380

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 236
								// Start offset: 0x800923AC
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800923AC
							// End Line: 238
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800923AC
						// End Line: 238
					/* end block 1.1.1.1.1 */
					// End offset: 0x800923AC
					// End Line: 238
				/* end block 1.1.1.1 */
				// End offset: 0x800923AC
				// End Line: 238
			/* end block 1.1.1 */
			// End offset: 0x8009240C
			// End Line: 255
		/* end block 1.1 */
		// End offset: 0x8009240C
		// End Line: 255

		/* begin block 1.2 */
			// Start line: 257
			// Start offset: 0x8009240C
			// Variables:
		// 		int newGear; // $a1
		/* end block 1.2 */
		// End offset: 0x80092454
		// End Line: 263
	/* end block 1 */
	// End offset: 0x80092454
	// End Line: 263

	/* begin block 2 */
		// Start line: 152
	/* end block 2 */
	// End Line: 153

	/* begin block 3 */
		// Start line: 160
	/* end block 3 */
	// End Line: 161

	/* begin block 4 */
		// Start line: 160
	/* end block 4 */
	// End Line: 161

	/* begin block 5 */
		// Start line: 166
	/* end block 5 */
	// End Line: 167

void Control_Human__FP8Car_tObj(Car_tObj *carObj)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int player;
  speechSourceType sVar4;
  int index;
  uint head;
  
  if ((simGlobal.gameTicks & 3U) != 0) {
    return;
  }
  if ((0 < Cars_gNumAICars) && (carObj->carIndex == 0)) {
    AI_Main_OverallSetup__Fv();
  }
  InGame_SetRamp__Fv();
  (*carObj->funcReplay)(carObj);
  if (carObj->RSControl == 0) {
    (carObj->control).desiredGasLevel = Input_gSim.gas & 0xf8;
    (carObj->control).desiredBrakeLevel = Input_gSim.brake & 0xf8;
    if (GameSetup_gData.mirrorTrack == 1) {
      player = (int)Input_gSim.steering;
      if (player < 0) {
        player = player + 3;
      }
      player = (player >> 2) * -4;
    }
    else {
      player = (int)Input_gSim.steering;
      if (player < 0) {
        player = player + 3;
      }
      player = (player >> 2) << 2;
    }
    (carObj->control).desiredSteering = player;
    (carObj->control).handBrake = Input_gSim.flags & 1;
    (carObj->control).horn = Input_gSim.flags >> 1 & 1;
    *(bool *)&(carObj->control).abort = Input_gSim.flags >> 3 == 3;
    (carObj->control).event = Input_gSim.flags >> 3;
  }
  else {
    player = carObj->RSSteering;
    (carObj->control).desiredGasLevel = carObj->RSGasLevel & 0xf8;
    if (player < 0) {
      player = player + 3;
    }
    (carObj->control).desiredSteering = (player >> 2) << 2;
    (carObj->control).desiredBrakeLevel = '\0';
    (carObj->control).handBrake = '\0';
    (carObj->control).horn = '\0';
    (carObj->control).abort = '\0';
    (carObj->control).event = '\0';
  }
  switch((carObj->control).event) {
  case '\x04':
    if (HudBustedOverlay != (void *)0x0) goto switchD_800921a0_caseD_9;
    player = carObj->carIndex;
    cVar2 = (carObj->control).event;
    index = 0;
    break;
  case '\x05':
    if (HudBustedOverlay != (void *)0x0) goto switchD_800921a0_caseD_9;
    player = carObj->carIndex;
    cVar2 = (carObj->control).event;
    index = 1;
    break;
  case '\x06':
    if (HudBustedOverlay != (void *)0x0) goto switchD_800921a0_caseD_9;
    player = carObj->carIndex;
    cVar2 = (carObj->control).event;
    index = 2;
    break;
  case '\a':
    if (carObj->carInfo->carType - 0x16U < 6) goto switchD_800921a0_caseD_9;
    bVar3 = (carObj->control).lights;
    if ((bVar3 & 8) == 0) {
      uVar1 = *(ushort *)&(carObj->render).palCopy;
      (carObj->control).lights = bVar3 & 0xef | 8;
      *(undefined2 *)((int)&(carObj->render).palCopy + 2) = 0;
      *(ushort *)&(carObj->render).palCopy = uVar1 | 0x80;
      goto switchD_800921a0_caseD_9;
    }
    goto LAB_8009235c;
  case '\b':
    if (5 < carObj->carInfo->carType - 0x16U) {
      bVar3 = (carObj->control).lights;
      if ((bVar3 & 0x10) == 0) {
        uVar1 = *(ushort *)((int)&(carObj->render).palCopy + 2);
        (carObj->control).lights = bVar3 & 0xf7 | 0x10;
        *(undefined2 *)&(carObj->render).palCopy = 0;
        *(ushort *)((int)&(carObj->render).palCopy + 2) = uVar1 | 0x80;
      }
      else {
        (carObj->control).lights = bVar3 & 0xe7;
        *(undefined2 *)((int)&(carObj->render).palCopy + 2) = 0;
        *(undefined2 *)&(carObj->render).palCopy = 0;
      }
    }
  default:
    goto switchD_800921a0_caseD_9;
  case '\v':
    if (carObj->carInfo->carType - 0x16U < 6) {
      sVar4 = (carObj->speechInfo).speechSource;
      if ((sVar4 & 2) == 0) {
        (carObj->speechInfo).speechSource = sVar4 | 2;
      }
      else {
        (carObj->speechInfo).speechSource = sVar4 & 0xfffffffd;
      }
      goto switchD_800921a0_caseD_9;
    }
    bVar3 = (carObj->control).lights;
    if ((bVar3 & 0x18) == 0) {
      (carObj->control).lights = bVar3 | 0x18;
      uVar1 = *(ushort *)((int)&(carObj->render).palCopy + 2);
      *(ushort *)&(carObj->render).palCopy = *(ushort *)&(carObj->render).palCopy | 0x80;
      *(ushort *)((int)&(carObj->render).palCopy + 2) = uVar1 | 0x80;
      goto switchD_800921a0_caseD_9;
    }
LAB_8009235c:
    (carObj->control).lights = bVar3 & 0xe7;
    *(undefined2 *)&(carObj->render).palCopy = 0;
    *(undefined2 *)((int)&(carObj->render).palCopy + 2) = 0;
    goto switchD_800921a0_caseD_9;
  case '\f':
    if (((carObj->speechInfo).speechSource & 2) != 0) goto switchD_800921a0_caseD_9;
    bVar3 = (carObj->control).lights ^ 3;
    (carObj->control).lights = bVar3;
    if ((bVar3 & 2) != 0) {
      R3DCar_TurnHeadLightOn__FP8Car_tObji(carObj,1);
      goto switchD_800921a0_caseD_9;
    }
    head = (uint)((bVar3 & 4) == 0);
    goto LAB_80092404;
  case '\x0e':
    bVar3 = (carObj->control).lights ^ 4;
    (carObj->control).lights = bVar3;
    if (((bVar3 & 2) != 0) || (((carObj->speechInfo).speechSource & 2) != 0))
    goto switchD_800921a0_caseD_9;
    if ((bVar3 & 4) != 0) {
      R3DCar_TurnHeadLightOn__FP8Car_tObji(carObj,0);
      goto switchD_800921a0_caseD_9;
    }
    head = 1;
LAB_80092404:
    R3DCar_TurnHeadLightOff__FP8Car_tObji(carObj,head);
    goto switchD_800921a0_caseD_9;
  }
  (carObj->control).queuedEvent = cVar2;
  Hud_WingmanFlash__Fii(player,index);
switchD_800921a0_caseD_9:
  bVar3 = Input_Gear__Fci((carObj->control).gear,carObj->specs->numGears);
  if ((carObj->flywheelRpm <= carObj->specs->redline) || ((byte)(carObj->control).gear <= bVar3)) {
    (carObj->control).desiredGear = bVar3;
  }
  return;
}





