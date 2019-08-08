#include "NFS4.H"
#include "STATS.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Stats_DoPlayerGlue__Fv()
 // line 52, offset 0x800b7f58
	/* begin block 1 */
		// Start line: 53
		// Start offset: 0x800B7F58
		// Variables:
	// 		int i; // $s1
	// 		int dist; // $v1
	// 		int humanLeader; // $s3
	/* end block 1 */
	// End offset: 0x800B80F8
	// End Line: 103

void Stats_DoPlayerGlue__Fv(void)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  Car_tObj **ppCVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = 99;
  iVar6 = 0;
  if (0 < Cars_gNumRaceCars) {
    puVar7 = &Stats_racePosition;
    ppCVar5 = (Car_tObj **)&_Cars_gRaceCarList;
    do {
      iVar1 = Stats_GetPosition__FP8Car_tObj(*ppCVar5);
      ((*ppCVar5)->stats).position = iVar1;
      if ((puVar7[3] != 0) && (iVar8 == 99)) {
        iVar8 = iVar6;
      }
      puVar7 = puVar7 + 4;
      iVar6 = iVar6 + 1;
      ppCVar5 = ppCVar5 + 1;
    } while (iVar6 < Cars_gNumRaceCars);
  }
  if ((false) && (DAT_801131f8 == 1)) {
    piVar4 = &_Cars_gHumanRaceCarList;
    if ((iRam00000390 == 2) || (iRam00000390 == 2)) {
      uRam00000270 = 0x10000;
    }
    else {
      iVar6 = 0;
      if (0 < Cars_gNumHumanRaceCars) {
        do {
          iVar3 = *piVar4;
          iVar1 = (&DAT_8011e0e4)[iVar8 * 4] - *(int *)(iVar3 + 0x350);
          if (iVar1 < 5) {
            *(undefined4 *)(iVar3 + 0x270) = 0x10000;
          }
          else {
            if (iVar1 < 10) {
              uVar2 = 0x10666;
            }
            else {
              if (iVar1 < 0x1e) {
                uVar2 = 0x10ccc;
              }
              else {
                if (iVar1 < 0x3c) {
                  uVar2 = 0x11333;
                }
                else {
                  uVar2 = 0x11999;
                }
              }
            }
            *(undefined4 *)(iVar3 + 0x270) = uVar2;
          }
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar6 < Cars_gNumHumanRaceCars);
      }
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Stats_ClearPosition__Fv()
 // line 112, offset 0x800b8114
	/* begin block 1 */
		// Start line: 113
		// Start offset: 0x800B8114

		/* begin block 1.1 */
			// Start line: 115
			// Start offset: 0x800B8114
			// Variables:
		// 		int i; // $a0
		/* end block 1.1 */
		// End offset: 0x800B814C
		// End Line: 121
	/* end block 1 */
	// End offset: 0x800B814C
	// End Line: 121

void Stats_ClearPosition__Fv(void)
{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &Stats_racePosition;
  do {
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xfffe7961;
    puVar1[2] = 0;
    puVar1[3] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 6);
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Stats_GetPosition__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 126, offset 0x800b8154
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x800B8154
		// Variables:
	// 		int position; // $a2
	// 		int carindex; // $a3

		/* begin block 1.1 */
			// Start line: 129
			// Start offset: 0x800B8154
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x800B81A0
		// End Line: 138
	/* end block 1 */
	// End offset: 0x800B81A0
	// End Line: 140

int Stats_GetPosition__FP8Car_tObj(Car_tObj *carObj)
{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < Cars_gNumRaceCars) {
    piVar1 = &Stats_racePosition;
    do {
      if (*piVar1 == carObj->carIndex) {
        return iVar2 + 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar2 < Cars_gNumRaceCars);
  }
  return 0;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Stats_GetNumOpponents__Fv()
 // line 145, offset 0x800b81a8
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x800B81A8
		// Variables:
	// 		int i; // $a1
	// 		int numCars; // $a0
	/* end block 1 */
	// End offset: 0x800B81F4
	// End Line: 156

int Stats_GetNumOpponents__Fv(void)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < Cars_gNumRaceCars) {
    piVar1 = &Stats_racePosition;
    do {
      if (*piVar1 != -1) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar3 < Cars_gNumRaceCars);
  }
  return iVar2;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Stats_TrackStats__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 161, offset 0x800b81fc
	/* begin block 1 */
		// Start line: 162
		// Start offset: 0x800B81FC

		/* begin block 1.1 */
			// Start line: 170
			// Start offset: 0x800B822C
			// Variables:
		// 		int trackSlices; // $s4
		// 		int currentTime; // $s3

			/* begin block 1.1.1 */
				// Start line: 209
				// Start offset: 0x800B8498
				// Variables:
			// 		int roadSlice; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800B850C
			// End Line: 225
		/* end block 1.1 */
		// End offset: 0x800B850C
		// End Line: 225

		/* begin block 1.2 */
			// Start line: 232
			// Start offset: 0x800B850C
			// Variables:
		// 		int i; // $t3

			/* begin block 1.2.1 */
				// Start line: 235
				// Start offset: 0x800B850C

				/* begin block 1.2.1.1 */
					// Start line: 235
					// Start offset: 0x800B8524

					/* begin block 1.2.1.1.1 */
						// Start line: 237
						// Start offset: 0x800B8530

						/* begin block 1.2.1.1.1.1 */
							// Start line: 240
							// Start offset: 0x800B8568
							// Variables:
						// 		int j; // $t0

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 243
								// Start offset: 0x800B8568

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 243
									// Start offset: 0x800B8574
									// Variables:
								// 		int r1; // $v1
								// 		int r2; // $a0
								// 		int r3; // $a1
								// 		int r4; // $a2
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x800B8580
								// End Line: 246
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x800B85B0
							// End Line: 254

							/* begin block 1.2.1.1.1.1.2 */
								// Start line: 256
								// Start offset: 0x800B85B0
								// Variables:
							// 		int r1; // $v1
							// 		int r2; // $a0
							// 		int r3; // $a1
							// 		int r4; // $v0
							/* end block 1.2.1.1.1.1.2 */
							// End offset: 0x800B85B0
							// End Line: 257
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800B85D8
						// End Line: 266
					/* end block 1.2.1.1.1 */
					// End offset: 0x800B85D8
					// End Line: 266
				/* end block 1.2.1.1 */
				// End offset: 0x800B85D8
				// End Line: 266
			/* end block 1.2.1 */
			// End offset: 0x800B85E4
			// End Line: 268
		/* end block 1.2 */
		// End offset: 0x800B85E4
		// End Line: 268
	/* end block 1 */
	// End offset: 0x800B85E4
	// End Line: 268

void Stats_TrackStats__FP8Car_tObj(Car_tObj *carObj)
{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  
  if (true) {
    iVar4 = (carObj->stats).lap;
    if ((iVar4 < 4) &&
       (piVar10 = &(carObj->N).objID + iVar4, piVar10[0xde] < (carObj->linearVel_ch).z)) {
      if (((carObj->carFlags & 8U) == 0) || (0x12 < carObj->carInfo->carType)) {
        (carObj->stats).topSpeed[(carObj->stats).lap] = (carObj->linearVel_ch).z;
      }
      else {
        iVar4 = rand();
        iVar2 = (carObj->linearVel_ch).z;
        if (*(int *)(&Cars_topSpeedCap + carObj->carInfo->carType * 4) + iVar4 * -3 < iVar2) {
          iVar4 = rand();
          iVar2 = *(int *)(&Cars_topSpeedCap + carObj->carInfo->carType * 4) + iVar4 * -3;
        }
        piVar10[0xde] = iVar2;
      }
    }
    iVar4 = (carObj->stats).lap;
    if ((iVar4 != carObj->lap) && ((carObj->stats).finishType == 0)) {
      if (((GameSetup_gData == 1) || (GameSetup_gData == 5)) &&
         (((uRam00000260 & 0x200) != 0 ||
          ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))) {
        (carObj->stats).time[iVar4] = 99999;
      }
      else {
        (carObj->stats).time[(carObj->stats).lap] = -(carObj->stats).lapTime;
      }
      iVar4 = carObj->lap;
      (carObj->stats).lapTime = 0;
      (carObj->stats).lap = iVar4;
      if ((iVar4 == DAT_801131f0) &&
         (((GameSetup_gData != 1 && (GameSetup_gData != 5)) ||
          (((uRam00000260 & 0x200) == 0 &&
           ((Cars_gNumHumanRaceCars != 2 || ((uRam00000260 & 0x200) == 0)))))))) {
        (carObj->stats).sliceTime = 0;
        (carObj->stats).finishType = 2;
        (carObj->stats).lapTime = (carObj->stats).lapTime + -0x200;
        (carObj->stats).sliceTotal = 0;
      }
    }
    if (true) {
      iVar4 = (int)(carObj->N).simRoadInfo.slice;
    }
    else {
      iVar4 = -1 - (int)(carObj->N).simRoadInfo.slice;
    }
    if (((carObj->stats).slice != iVar4) &&
       ((carObj->stats).slice = iVar4, (carObj->stats).finishType == 0)) {
      (carObj->stats).sliceTime = 0;
      (carObj->stats).sliceTotal = (carObj->stats).slice;
    }
    iVar4 = 0;
    piVar10 = &Stats_racePosition;
    while (iVar4 < Cars_gNumRaceCars) {
      iVar2 = (carObj->stats).sliceTotal;
      iVar9 = Cars_gNumRaceCars + -2;
      if ((piVar10[1] < iVar2) ||
         ((iVar2 == piVar10[1] && ((carObj->stats).sliceTime < piVar10[2])))) {
        puVar8 = &Stats_racePosition + iVar9 * 4;
        iVar2 = iVar9 * 0x10 + 0x10;
        while (iVar4 <= iVar9) {
          uVar3 = *puVar8;
          uVar5 = puVar8[1];
          uVar6 = puVar8[2];
          uVar7 = puVar8[3];
          puVar8 = puVar8 + -4;
          iVar9 = iVar9 + -1;
          *(undefined4 *)((int)&Stats_racePosition + iVar2) = uVar3;
          *(undefined4 *)((int)&DAT_8011e0e4 + iVar2) = uVar5;
          *(undefined4 *)((int)&DAT_8011e0e8 + iVar2) = uVar6;
          *(undefined4 *)((int)&DAT_8011e0ec + iVar2) = uVar7;
          iVar2 = iVar2 + -0x10;
        }
        iVar4 = (carObj->stats).sliceTotal;
        uVar1 = carObj->carFlags;
        iVar2 = (carObj->stats).sliceTime;
        *piVar10 = carObj->carIndex;
        piVar10[1] = iVar4;
        piVar10[2] = iVar2;
        piVar10[3] = uVar1 & 4;
        return;
      }
      piVar10 = piVar10 + 4;
      iVar4 = iVar4 + 1;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Stats_ExtrapolateOpponentTimes__Fi(int type /*$s6*/)
 // line 278, offset 0x800b8604
	/* begin block 1 */
		// Start line: 279
		// Start offset: 0x800B8604
		// Variables:
	// 		int i; // $s2
	// 		int j; // $a1
	// 		int extrapolatedTime; // $s0
	// 		int quick_finish; // $s3

		/* begin block 1.1 */
			// Start line: 279
			// Start offset: 0x800B8604

			/* begin block 1.1.1 */
				// Start line: 295
				// Start offset: 0x800B8658

				/* begin block 1.1.1.1 */
					// Start line: 297
					// Start offset: 0x800B8670

					/* begin block 1.1.1.1.1 */
						// Start line: 298
						// Start offset: 0x800B8688
						// Variables:
					// 		int sliceTotal; // $a0
					// 		int startingTime; // $a2
					/* end block 1.1.1.1.1 */
					// End offset: 0x800B8784
					// End Line: 329
				/* end block 1.1.1.1 */
				// End offset: 0x800B8784
				// End Line: 329

				/* begin block 1.1.1.2 */
					// Start line: 365
					// Start offset: 0x800B8884
					// Variables:
				// 		int m; // $a1
				/* end block 1.1.1.2 */
				// End offset: 0x800B8960
				// End Line: 376
			/* end block 1.1.1 */
			// End offset: 0x800B89D8
			// End Line: 386
		/* end block 1.1 */
		// End offset: 0x800B89E4
		// End Line: 387

		/* begin block 1.2 */
			// Start line: 389
			// Start offset: 0x800B89E4

			/* begin block 1.2.1 */
				// Start line: 389
				// Start offset: 0x800B89F8

				/* begin block 1.2.1.1 */
					// Start line: 391
					// Start offset: 0x800B8A10

					/* begin block 1.2.1.1.1 */
						// Start line: 392
						// Start offset: 0x800B8A28
						// Variables:
					// 		int sliceTotal; // $a0
					// 		int startingTime; // $a2
					/* end block 1.2.1.1.1 */
					// End offset: 0x800B8B30
					// End Line: 408
				/* end block 1.2.1.1 */
				// End offset: 0x800B8B30
				// End Line: 408

				/* begin block 1.2.1.2 */
					// Start line: 426
					// Start offset: 0x800B8BF0
					// Variables:
				// 		int averageLap; // $a0
				/* end block 1.2.1.2 */
				// End offset: 0x800B8C68
				// End Line: 429
			/* end block 1.2.1 */
			// End offset: 0x800B8CE0
			// End Line: 438
		/* end block 1.2 */
		// End offset: 0x800B8CEC
		// End Line: 439

		/* begin block 1.3 */
			// Start line: 442
			// Start offset: 0x800B8CEC

			/* begin block 1.3.1 */
				// Start line: 443
				// Start offset: 0x800B8CF4

				/* begin block 1.3.1.1 */
					// Start line: 444
					// Start offset: 0x800B8CF4
					// Variables:
				// 		int x; // $t0

					/* begin block 1.3.1.1.1 */
						// Start line: 444
						// Start offset: 0x800B8D08
						// Variables:
					// 		int position; // $a2

						/* begin block 1.3.1.1.1.1 */
							// Start line: 444
							// Start offset: 0x800B8D14
							// Variables:
						// 		int y; // $a1
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x800B8D78
						// End Line: 462
					/* end block 1.3.1.1.1 */
					// End offset: 0x800B8D78
					// End Line: 463
				/* end block 1.3.1.1 */
				// End offset: 0x800B8D8C
				// End Line: 464
			/* end block 1.3.1 */
			// End offset: 0x800B8D8C
			// End Line: 464
		/* end block 1.3 */
		// End offset: 0x800B8D8C
		// End Line: 464
	/* end block 1 */
	// End offset: 0x800B8D8C
	// End Line: 464

void Stats_ExtrapolateOpponentTimes__Fi(int type)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  Car_tObj *pCVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  Car_tObj **ppCVar8;
  int iVar9;
  
  iVar2 = Input_Interface__FUli(3,0);
  bVar1 = iVar2 != 0;
  iVar2 = 0;
  ppCVar8 = (Car_tObj **)&_Cars_gHumanRaceCarList;
  while (iVar2 < Cars_gNumHumanRaceCars) {
    pCVar4 = *ppCVar8;
    if ((pCVar4->stats).finishType != 2) {
      iVar3 = (pCVar4->stats).sliceTotal;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      iVar5 = (pCVar4->stats).sliceTime + -0x200;
      if (iVar3 < 100) {
        iVar5 = iVar3 * 0xd;
      }
      iVar5 = iVar5 * (pCVar4->stats).extractSlice;
      iVar9 = iVar5 / iVar3;
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar5 == -0x80000000)) {
        trap(0x1800);
      }
      if (bVar1) {
        (pCVar4->stats).lapTime = iVar9;
      }
      else {
        (pCVar4->stats).lapTime = iVar9 << 1;
      }
      if ((GameSetup_gData != 2) || (DAT_80113208 == iVar2)) {
        if (bVar1) {
          ((*ppCVar8)->stats).finishType = 2;
        }
        else {
          ((*ppCVar8)->stats).finishType = 1;
        }
      }
    }
    if (type == 1) {
      if (GameSetup_gData == 2) {
        pCVar4 = *ppCVar8;
        if (((pCVar4->stats).finishType != 2) && (DAT_80113208 == iVar2)) {
          if (bVar1) {
            (pCVar4->stats).finishType = 2;
          }
          else {
            (pCVar4->stats).finishType = 1;
          }
        }
      }
      else {
        if (bVar1) {
          ((*ppCVar8)->stats).finishType = 2;
        }
        else {
          if (((*ppCVar8)->stats).finishType != 2) {
            ((*ppCVar8)->stats).finishType = 1;
          }
        }
      }
      iVar3 = Stats_GetPosition__FP8Car_tObj(*ppCVar8);
      ((*ppCVar8)->stats).finalPosition = iVar3;
      ((*ppCVar8)->stats).finalTotalTime = ((*ppCVar8)->stats).lapTime;
      iVar3 = 0;
      if (0 < DAT_801131f0) {
        do {
          piVar7 = &((*ppCVar8)->N).objID + iVar3;
          piVar7[0xf6] = piVar7[0xda];
          iVar3 = iVar3 + 1;
        } while (iVar3 < DAT_801131f0);
      }
    }
    iVar3 = Stats_GetPosition__FP8Car_tObj(*ppCVar8);
    ((*ppCVar8)->stats).finalPosition = iVar3;
    iVar3 = Stats_GetPosition__FP8Car_tObj(*ppCVar8);
    ((*ppCVar8)->stats).finalPosition = iVar3;
    ((*ppCVar8)->stats).finalTotalTime = ((*ppCVar8)->stats).lapTime;
    ((*ppCVar8)->stats).finalFinishType = ((*ppCVar8)->stats).finishType;
    ((*ppCVar8)->stats).finalBestLap = ((*ppCVar8)->stats).time[0];
    ((*ppCVar8)->stats).finalNumWarnings = ((*ppCVar8)->stats).numWarnings;
    ((*ppCVar8)->stats).finalNumFines = ((*ppCVar8)->stats).numFines;
    iVar3 = 0;
    ((*ppCVar8)->stats).finalNumArrests = ((*ppCVar8)->stats).numArrests;
    ((*ppCVar8)->stats).finalDamage = 0;
    do {
      pCVar4 = *ppCVar8;
      piVar7 = (pCVar4->N).damage + iVar3;
      iVar3 = iVar3 + 1;
      (pCVar4->stats).finalDamage = (pCVar4->stats).finalDamage + *piVar7;
    } while (iVar3 < 10);
    iVar3 = 0;
    if (0 < DAT_801131f0) {
      do {
        piVar7 = &((*ppCVar8)->N).objID + iVar3;
        piVar7[0xf6] = piVar7[0xda];
        pCVar4 = *ppCVar8;
        iVar5 = (pCVar4->stats).finalLapTime[iVar3];
        if ((iVar5 < (pCVar4->stats).finalBestLap) && (iVar5 != 0)) {
          (pCVar4->stats).finalBestLap = iVar5;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_801131f0);
    }
    ppCVar8 = ppCVar8 + 1;
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  ppCVar8 = (Car_tObj **)&_Cars_gAIRaceCarList;
  while (iVar3 = Cars_gNumRaceCars, iVar2 < Cars_gNumAIRaceCars) {
    pCVar4 = *ppCVar8;
    if ((pCVar4->stats).finishType != 2) {
      iVar3 = (pCVar4->stats).sliceTotal;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      iVar5 = (pCVar4->stats).sliceTime + -0x200;
      if (iVar3 < 100) {
        iVar5 = iVar3 * 0xd;
      }
      iVar5 = iVar5 * (pCVar4->stats).extractSlice;
      iVar9 = iVar5 / iVar3;
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar5 == -0x80000000)) {
        trap(0x1800);
      }
      if ((bVar1) || (iRam00000390 == 2)) {
        ((*ppCVar8)->stats).lapTime = iVar9;
      }
      else {
        iVar3 = rand();
        iVar3 = DAT_801131f0 * iVar3;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0x7f;
        }
        ((*ppCVar8)->stats).lapTime = iVar9 + (iVar3 >> 7);
      }
      ((*ppCVar8)->stats).finishType = 2;
    }
    iVar3 = Stats_GetPosition__FP8Car_tObj(*ppCVar8);
    ((*ppCVar8)->stats).finalPosition = iVar3;
    ((*ppCVar8)->stats).finalTotalTime = ((*ppCVar8)->stats).lapTime;
    ((*ppCVar8)->stats).finalFinishType = ((*ppCVar8)->stats).finishType;
    ((*ppCVar8)->stats).finalNumArrests = ((*ppCVar8)->stats).numArrests;
    ((*ppCVar8)->stats).finalBestLap = 99999;
    iVar3 = 0;
    if (0 < DAT_801131f0) {
      do {
        pCVar4 = *ppCVar8;
        iVar5 = (pCVar4->stats).time[iVar3];
        if ((iVar5 < (pCVar4->stats).finalBestLap) && (0 < iVar5)) {
          (pCVar4->stats).finalBestLap = iVar5;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_801131f0);
    }
    iVar3 = rand();
    pCVar4 = *ppCVar8;
    iVar5 = (pCVar4->stats).finalTotalTime;
    if (DAT_801131f0 == 0) {
      trap(0x1c00);
    }
    if ((DAT_801131f0 == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    iVar3 = iVar5 / DAT_801131f0 - ((iVar3 / 6 + (iVar3 >> 0x1f) >> 3) - (iVar3 >> 0x1f));
    if (iVar3 < (pCVar4->stats).finalBestLap) {
      (pCVar4->stats).finalBestLap = iVar3;
    }
    iVar3 = 0;
    if (0 < DAT_801131f0) {
      do {
        piVar7 = &((*ppCVar8)->N).objID + iVar3;
        piVar7[0xf6] = piVar7[0xda];
        pCVar4 = *ppCVar8;
        iVar5 = (pCVar4->stats).finalLapTime[iVar3];
        if ((iVar5 < (pCVar4->stats).finalBestLap) && (iVar5 != 0)) {
          (pCVar4->stats).finalBestLap = iVar5;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_801131f0);
    }
    ppCVar8 = ppCVar8 + 1;
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  if (!bVar1) {
    piVar7 = &_Cars_gRaceCarList;
    while (iVar5 = 1, iVar2 < iVar3) {
      iVar9 = 0;
      piVar6 = &_Cars_gRaceCarList;
      if (0 < iVar3) {
        do {
          if (iVar2 != iVar9) {
            if ((*(int *)(*piVar6 + 0x3d4) < *(int *)(*piVar7 + 0x3d4)) ||
               ((*(int *)(*piVar7 + 0x3d4) == *(int *)(*piVar6 + 0x3d4) && (iVar9 < iVar2)))) {
              iVar5 = iVar5 + 1;
            }
          }
          iVar9 = iVar9 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar9 < Cars_gNumRaceCars);
      }
      iVar9 = *piVar7;
      piVar7 = piVar7 + 1;
      iVar2 = iVar2 + 1;
      *(int *)(iVar9 + 0x3d0) = iVar5;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Stats_TrackEndGame__Fv()
 // line 470, offset 0x800b8db8
	/* begin block 1 */
		// Start line: 471
		// Start offset: 0x800B8DB8
		// Variables:
	// 		int i; // $a2
	// 		int Stats_PlayersFinishedRace; // stack offset -56

		/* begin block 1.1 */
			// Start line: 471
			// Start offset: 0x800B8DB8

			/* begin block 1.1.1 */
				// Start line: 481
				// Start offset: 0x800B8E24
				// Variables:
			// 		int trackSlices; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 482
					// Start offset: 0x800B8E24

					/* begin block 1.1.1.1.1 */
						// Start line: 484
						// Start offset: 0x800B8E4C
						// Variables:
					// 		int PlayerSlice; // stack offset -52
					// 		int PlayerPosition; // $s5
					// 		int DesiredComparison; // $s2
					// 		int DesiredSlice; // $s7
					// 		int DesiredSpeed; // $s4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 501
							// Start offset: 0x800B8EF8
							// Variables:
						// 		int j; // $s1

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 501
								// Start offset: 0x800B8F08
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800B8F80
							// End Line: 511
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800B8F8C
						// End Line: 513
					/* end block 1.1.1.1.1 */
					// End offset: 0x800B902C
					// End Line: 526
				/* end block 1.1.1.1 */
				// End offset: 0x800B9038
				// End Line: 528
			/* end block 1.1.1 */
			// End offset: 0x800B9038
			// End Line: 528
		/* end block 1.1 */
		// End offset: 0x800B9038
		// End Line: 528
	/* end block 1 */
	// End offset: 0x800B9128
	// End Line: 551

void Stats_TrackEndGame__Fv(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  Car_tObj *pCVar4;
  int *piVar5;
  int iVar6;
  Car_tObj **ppCVar7;
  int iVar8;
  int iVar9;
  Car_tObj **ppCVar10;
  int iVar11;
  int local_38;
  int local_34;
  
  local_38 = 0;
  if ((1 < Cars_gNumRaceCars) && (false)) {
    iVar6 = 0;
    ppCVar10 = (Car_tObj **)&_Cars_gHumanRaceCarList;
    while (iVar6 < Cars_gNumHumanRaceCars) {
      iVar3 = ((*ppCVar10)->stats).sliceTotal;
      local_34 = 0;
      if (iVar3 < 1) {
        local_34 = iVar3;
      }
      iVar1 = Stats_GetPosition__FP8Car_tObj(*ppCVar10);
      iVar11 = 0;
      iVar3 = 0;
      if (iVar1 == 1) {
        iVar9 = 2;
      }
      else {
        iVar9 = 1;
        if (true) {
          iVar9 = iVar1 + -1;
        }
      }
      iVar8 = 0;
      ppCVar7 = (Car_tObj **)&_Cars_gRaceCarList;
      while (iVar8 < Cars_gNumRaceCars) {
        iVar2 = Stats_GetPosition__FP8Car_tObj(*ppCVar7);
        if (iVar2 == iVar9) {
          iVar3 = ((*ppCVar7)->stats).sliceTotal;
          iVar11 = 0;
          if (iVar3 < 1) {
            iVar11 = iVar3;
          }
          if (iVar1 == 1) {
            iVar3 = *(int *)((&_Cars_gRaceCarList)[iVar8] + 0x420);
            if (iVar3 < 0) {
              iVar3 = -iVar3;
            }
            iVar3 = iVar3 >> 0x10;
          }
          else {
            iVar3 = (int)*(short *)((int)&((*ppCVar10)->linearVel_ch).z + 2);
          }
          break;
        }
        ppCVar7 = ppCVar7 + 1;
        iVar8 = iVar8 + 1;
      }
      ((*ppCVar10)->stats).checkpointUpdate = iVar11 - local_34;
      if ((iVar3 < 0x10) || (pCVar4 = *ppCVar10, (pCVar4->stats).finishType == 2)) {
        ((*ppCVar10)->stats).checkpointDifference = 0;
        ((*ppCVar10)->stats).checkpointDisplay = 0;
      }
      else {
        iVar11 = (pCVar4->stats).checkpointUpdate * 0x180;
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && (iVar11 == -0x80000000)) {
          trap(0x1800);
        }
        (pCVar4->stats).checkpointDifference = iVar11 / iVar3;
        ((*ppCVar10)->stats).checkpointDisplay = 1;
      }
      ppCVar10 = ppCVar10 + 1;
      iVar6 = iVar6 + 1;
    }
  }
  if (DAT_8011e0c8 == 0) {
    iVar6 = 0;
    if (0 < Cars_gNumHumanRaceCars) {
      piVar5 = &_Cars_gHumanRaceCarList;
      do {
        if (((1 < *(int *)(*piVar5 + 0x390)) &&
            (iVar3 = *(int *)(*piVar5 + 0x354), iVar3 + 0x140 < 0)) &&
           (((CopSpeak_gQueueHead == 0 && (false)) || (iVar3 + 0x280 < 0)))) {
          local_38 = local_38 + 1;
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < Cars_gNumHumanRaceCars);
    }
    if (local_38 == Cars_gNumHumanRaceCars) {
      DAT_8011e0c8 = 1;
      Stats_ExtrapolateOpponentTimes__Fi(2);
    }
  }
  return;


}





