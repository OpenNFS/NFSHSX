#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 104
	/* end block 2 */
	// End Line: 105

	/* begin block 3 */
		// Start line: 104
	/* end block 3 */
	// End Line: 105

	/* begin block 4 */
		// Start line: 114
	/* end block 4 */
	// End Line: 115

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Stats_DoPlayerGlue__Fv(void)

{
  int iVar1;
  undefined **ppuVar2;
  Car_tObj *pCVar3;
  Car_tObj **ppCVar4;
  int iVar5;
  Stats_tPosition *pSVar6;
  int iVar7;
  
  iVar7 = 99;
  iVar5 = 0;
  if (0 < Cars_gNumRaceCars) {
    pSVar6 = &Stats_racePosition;
    ppCVar4 = &Cars_gRaceCarList9;
    do {
      iVar1 = Stats_GetPosition__FP8Car_tObj(*ppCVar4);
      ((*ppCVar4)->stats).position = iVar1;
      if ((pSVar6->isHuman != 0) && (iVar7 == 99)) {
        iVar7 = iVar5;
      }
      pSVar6 = pSVar6 + 1;
      iVar5 = iVar5 + 1;
      ppCVar4 = ppCVar4 + 1;
    } while (iVar5 < Cars_gNumRaceCars);
  }
  if ((GameSetup_gData.catchupLogic != 0) && (GameSetup_gData.commMode == 1)) {
    ppCVar4 = &Cars_gHumanRaceCarList9;
    if (((Cars_gHumanRaceCarList9->stats).finishType == 2) ||
       ((PTR_ARRAY_8010fa4c[0]->stats).finishType == 2)) {
      Cars_gHumanRaceCarList9->glue = 0x10000;
      PTR_ARRAY_8010fa4c[0]->glue = 0x10000;
    }
    else {
      iVar5 = 0;
      if (0 < Cars_gNumHumanRaceCars) {
        do {
          pCVar3 = *ppCVar4;
          iVar1 = (&Stats_racePosition)[iVar7].slice - (pCVar3->stats).sliceTotal;
          if (iVar1 < 5) {
            pCVar3->glue = 0x10000;
          }
          else {
            if (iVar1 < 10) {
              ppuVar2 = &PTR_00010666;
            }
            else {
              if (iVar1 < 0x1e) {
                ppuVar2 = &PTR_00010ccc;
              }
              else {
                if (iVar1 < 0x3c) {
                  ppuVar2 = (undefined **)&DAT_00011333;
                }
                else {
                  ppuVar2 = (undefined **)&DAT_00011999;
                }
              }
            }
            *(undefined ***)&pCVar3->glue = ppuVar2;
          }
          iVar5 = iVar5 + 1;
          ppCVar4 = ppCVar4 + 1;
        } while (iVar5 < Cars_gNumHumanRaceCars);
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

	/* begin block 2 */
		// Start line: 242
	/* end block 2 */
	// End Line: 243

	/* begin block 3 */
		// Start line: 247
	/* end block 3 */
	// End Line: 248

	/* begin block 4 */
		// Start line: 247
	/* end block 4 */
	// End Line: 248

	/* begin block 5 */
		// Start line: 249
	/* end block 5 */
	// End Line: 250

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Stats_ClearPosition__Fv(void)

{
  Stats_tPosition *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  pSVar1 = &Stats_racePosition;
  do {
    pSVar1->car = -1;
    pSVar1->slice = -99999;
    pSVar1->sliceTime = 0;
    pSVar1->isHuman = 0;
    iVar2 = iVar2 + 1;
    pSVar1 = pSVar1 + 1;
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

	/* begin block 2 */
		// Start line: 269
	/* end block 2 */
	// End Line: 270

	/* begin block 3 */
		// Start line: 275
	/* end block 3 */
	// End Line: 276

	/* begin block 4 */
		// Start line: 275
	/* end block 4 */
	// End Line: 276

	/* begin block 5 */
		// Start line: 277
	/* end block 5 */
	// End Line: 278

	/* begin block 6 */
		// Start line: 279
	/* end block 6 */
	// End Line: 280

int Stats_GetPosition__FP8Car_tObj(Car_tObj *carObj)

{
  Stats_tPosition *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < Cars_gNumRaceCars) {
    pSVar1 = &Stats_racePosition;
    do {
      if (pSVar1->car == carObj->carIndex) {
        return iVar2 + 1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
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

	/* begin block 2 */
		// Start line: 309
	/* end block 2 */
	// End Line: 310

	/* begin block 3 */
		// Start line: 315
	/* end block 3 */
	// End Line: 316

	/* begin block 4 */
		// Start line: 315
	/* end block 4 */
	// End Line: 316

	/* begin block 5 */
		// Start line: 319
	/* end block 5 */
	// End Line: 320

/* WARNING: Unknown calling convention yet parameter storage is locked */

int Stats_GetNumOpponents__Fv(void)

{
  Stats_tPosition *pSVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < Cars_gNumRaceCars) {
    pSVar1 = &Stats_racePosition;
    do {
      if (pSVar1->car != -1) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      pSVar1 = pSVar1 + 1;
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

	/* begin block 2 */
		// Start line: 341
	/* end block 2 */
	// End Line: 342

	/* begin block 3 */
		// Start line: 347
	/* end block 3 */
	// End Line: 348

	/* begin block 4 */
		// Start line: 347
	/* end block 4 */
	// End Line: 348

	/* begin block 5 */
		// Start line: 349
	/* end block 5 */
	// End Line: 350

void Stats_TrackStats__FP8Car_tObj(Car_tObj *carObj)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Stats_tPosition *pSVar9;
  Stats_tPosition *pSVar10;
  
  iVar5 = gNumSlices;
  iVar6 = simGlobal.gameTicks;
  if ((simGlobal.gameTicks & 1U) == 0) {
    iVar3 = (carObj->stats).lap;
    if ((iVar3 < 4) &&
       (piVar4 = &(carObj->N).objID + iVar3, piVar4[0xde] < (carObj->linearVel_ch).z)) {
      if (((carObj->carFlags & 8U) == 0) || (0x12 < carObj->carInfo->carType)) {
        (carObj->stats).topSpeed[(carObj->stats).lap] = (carObj->linearVel_ch).z;
      }
      else {
        iVar3 = rand();
        iVar2 = (carObj->linearVel_ch).z;
        if (Cars_topSpeedCap[carObj->carInfo->carType] + iVar3 * -3 < iVar2) {
          iVar3 = rand();
          iVar2 = Cars_topSpeedCap[carObj->carInfo->carType] + iVar3 * -3;
        }
        piVar4[0xde] = iVar2;
      }
    }
    iVar3 = (carObj->stats).lap;
    if ((iVar3 != carObj->lap) && ((carObj->stats).finishType == 0)) {
      if (((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
         (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
          ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0)))))) {
        (carObj->stats).time[iVar3] = 99999;
      }
      else {
        (carObj->stats).time[(carObj->stats).lap] = iVar6 - (carObj->stats).lapTime;
      }
      iVar3 = carObj->lap;
      (carObj->stats).lapTime = iVar6;
      (carObj->stats).lap = iVar3;
      if ((iVar3 == GameSetup_gData.numLaps) &&
         (((GameSetup_gData.raceType != 1 && (GameSetup_gData.raceType != 5)) ||
          (((Cars_gHumanRaceCarList9->carFlags & 0x200U) == 0 &&
           ((Cars_gNumHumanRaceCars != 2 || ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) == 0))))))))
      {
        (carObj->stats).sliceTime = iVar6;
        (carObj->stats).finishType = 2;
        (carObj->stats).lapTime = (carObj->stats).lapTime + -0x200;
        (carObj->stats).sliceTotal = ((carObj->stats).lap + 1) * iVar5;
      }
    }
    if (GameSetup_gData.reverseTrack == 0) {
      iVar3 = (int)(carObj->N).simRoadInfo.slice;
    }
    else {
      iVar3 = (iVar5 - (int)(carObj->N).simRoadInfo.slice) + -1;
    }
    if (((carObj->stats).slice != iVar3) &&
       ((carObj->stats).slice = iVar3, (carObj->stats).finishType == 0)) {
      iVar3 = carObj->unlap;
      (carObj->stats).sliceTime = iVar6;
      (carObj->stats).sliceTotal = ((carObj->stats).lap - iVar3) * iVar5 + (carObj->stats).slice;
    }
    iVar6 = 0;
    pSVar10 = &Stats_racePosition;
    while (iVar6 < Cars_gNumRaceCars) {
      iVar5 = (carObj->stats).sliceTotal;
      iVar3 = Cars_gNumRaceCars + -2;
      if ((pSVar10->slice < iVar5) ||
         ((iVar5 == pSVar10->slice && ((carObj->stats).sliceTime < pSVar10->sliceTime)))) {
        pSVar9 = &Stats_racePosition + iVar3;
        iVar5 = iVar3 * 0x10 + 0x10;
        while (iVar6 <= iVar3) {
          piVar4 = &pSVar9->car;
          iVar2 = pSVar9->slice;
          iVar7 = pSVar9->sliceTime;
          iVar8 = pSVar9->isHuman;
          pSVar9 = pSVar9 + -1;
          iVar3 = iVar3 + -1;
          *(int *)((int)&Stats_racePosition.car + iVar5) = *piVar4;
          *(int *)((int)&Stats_racePosition.slice + iVar5) = iVar2;
          *(int *)((int)&Stats_racePosition.sliceTime + iVar5) = iVar7;
          *(int *)((int)&Stats_racePosition.isHuman + iVar5) = iVar8;
          iVar5 = iVar5 + -0x10;
        }
        iVar6 = (carObj->stats).sliceTotal;
        uVar1 = carObj->carFlags;
        iVar5 = (carObj->stats).sliceTime;
        pSVar10->car = carObj->carIndex;
        pSVar10->slice = iVar6;
        pSVar10->sliceTime = iVar5;
        pSVar10->isHuman = uVar1 & 4;
        return;
      }
      pSVar10 = pSVar10 + 1;
      iVar6 = iVar6 + 1;
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

	/* begin block 2 */
		// Start line: 615
	/* end block 2 */
	// End Line: 616

	/* begin block 3 */
		// Start line: 620
	/* end block 3 */
	// End Line: 621

	/* begin block 4 */
		// Start line: 620
	/* end block 4 */
	// End Line: 621

void Stats_ExtrapolateOpponentTimes__Fi(int type)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Car_tObj *pCVar7;
  int iVar8;
  Car_tObj **ppCVar9;
  Car_tObj **ppCVar10;
  int iVar11;
  
  iVar2 = Input_Interface__FUli(3,0);
  bVar1 = iVar2 != 0;
  iVar2 = 0;
  ppCVar10 = &Cars_gHumanRaceCarList9;
  while (iVar2 < Cars_gNumHumanRaceCars) {
    pCVar7 = *ppCVar10;
    if ((pCVar7->stats).finishType != 2) {
      iVar5 = (pCVar7->stats).sliceTotal;
      if (iVar5 < 1) {
        iVar5 = 1;
      }
      iVar8 = (pCVar7->stats).sliceTime + -0x200;
      if (iVar5 < 100) {
        iVar8 = iVar5 * 0xd;
      }
      iVar8 = iVar8 * (gNumSlices * GameSetup_gData.numLaps + (pCVar7->stats).extractSlice);
      iVar11 = iVar8 / iVar5;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar8 == -0x80000000)) {
        trap(0x1800);
      }
      if (bVar1) {
        (pCVar7->stats).lapTime = iVar11;
      }
      else {
        (pCVar7->stats).lapTime = iVar11 << 1;
      }
      if ((GameSetup_gData.raceType != 2) || (GameSetup_gData.localCar == iVar2)) {
        if (bVar1) {
          ((*ppCVar10)->stats).finishType = 2;
        }
        else {
          ((*ppCVar10)->stats).finishType = 1;
        }
      }
    }
    if (type == 1) {
      if (GameSetup_gData.raceType == 2) {
        pCVar7 = *ppCVar10;
        if (((pCVar7->stats).finishType != 2) && (GameSetup_gData.localCar == iVar2)) {
          if (bVar1) {
            (pCVar7->stats).finishType = 2;
          }
          else {
            (pCVar7->stats).finishType = 1;
          }
        }
      }
      else {
        if (bVar1) {
          ((*ppCVar10)->stats).finishType = 2;
        }
        else {
          if (((*ppCVar10)->stats).finishType != 2) {
            ((*ppCVar10)->stats).finishType = 1;
          }
        }
      }
      iVar5 = Stats_GetPosition__FP8Car_tObj(*ppCVar10);
      ((*ppCVar10)->stats).finalPosition = iVar5;
      ((*ppCVar10)->stats).finalTotalTime = ((*ppCVar10)->stats).lapTime;
      iVar5 = 0;
      if (0 < GameSetup_gData.numLaps) {
        do {
          piVar3 = &((*ppCVar10)->N).objID + iVar5;
          piVar3[0xf6] = piVar3[0xda];
          iVar5 = iVar5 + 1;
        } while (iVar5 < GameSetup_gData.numLaps);
      }
    }
    iVar5 = Stats_GetPosition__FP8Car_tObj(*ppCVar10);
    ((*ppCVar10)->stats).finalPosition = iVar5;
    iVar5 = Stats_GetPosition__FP8Car_tObj(*ppCVar10);
    ((*ppCVar10)->stats).finalPosition = iVar5;
    ((*ppCVar10)->stats).finalTotalTime = ((*ppCVar10)->stats).lapTime;
    ((*ppCVar10)->stats).finalFinishType = ((*ppCVar10)->stats).finishType;
    ((*ppCVar10)->stats).finalBestLap = ((*ppCVar10)->stats).time[0];
    ((*ppCVar10)->stats).finalNumWarnings = ((*ppCVar10)->stats).numWarnings;
    ((*ppCVar10)->stats).finalNumFines = ((*ppCVar10)->stats).numFines;
    iVar5 = 0;
    ((*ppCVar10)->stats).finalNumArrests = ((*ppCVar10)->stats).numArrests;
    ((*ppCVar10)->stats).finalDamage = 0;
    do {
      pCVar7 = *ppCVar10;
      piVar3 = (pCVar7->N).damage + iVar5;
      iVar5 = iVar5 + 1;
      (pCVar7->stats).finalDamage = (pCVar7->stats).finalDamage + *piVar3;
    } while (iVar5 < 10);
    iVar5 = 0;
    if (0 < GameSetup_gData.numLaps) {
      do {
        piVar3 = &((*ppCVar10)->N).objID + iVar5;
        piVar3[0xf6] = piVar3[0xda];
        pCVar7 = *ppCVar10;
        iVar8 = (pCVar7->stats).finalLapTime[iVar5];
        if ((iVar8 < (pCVar7->stats).finalBestLap) && (iVar8 != 0)) {
          (pCVar7->stats).finalBestLap = iVar8;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < GameSetup_gData.numLaps);
    }
    ppCVar10 = ppCVar10 + 1;
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  ppCVar10 = Cars_gAIRaceCarList9;
  while (iVar5 = Cars_gNumRaceCars, iVar2 < Cars_gNumAIRaceCars) {
    pCVar7 = *ppCVar10;
    if ((pCVar7->stats).finishType != 2) {
      iVar5 = (pCVar7->stats).sliceTotal;
      if (iVar5 < 1) {
        iVar5 = 1;
      }
      iVar8 = (pCVar7->stats).sliceTime + -0x200;
      if (iVar5 < 100) {
        iVar8 = iVar5 * 0xd;
      }
      iVar8 = iVar8 * (gNumSlices * GameSetup_gData.numLaps + (pCVar7->stats).extractSlice);
      iVar11 = iVar8 / iVar5;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar8 == -0x80000000)) {
        trap(0x1800);
      }
      if ((bVar1) || ((Cars_gHumanRaceCarList9->stats).finishType == 2)) {
        ((*ppCVar10)->stats).lapTime = iVar11;
      }
      else {
        iVar5 = rand();
        iVar5 = GameSetup_gData.numLaps * iVar5;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0x7f;
        }
        ((*ppCVar10)->stats).lapTime = iVar11 + (iVar5 >> 7);
      }
      ((*ppCVar10)->stats).finishType = 2;
    }
    iVar5 = Stats_GetPosition__FP8Car_tObj(*ppCVar10);
    ((*ppCVar10)->stats).finalPosition = iVar5;
    ((*ppCVar10)->stats).finalTotalTime = ((*ppCVar10)->stats).lapTime;
    ((*ppCVar10)->stats).finalFinishType = ((*ppCVar10)->stats).finishType;
    ((*ppCVar10)->stats).finalNumArrests = ((*ppCVar10)->stats).numArrests;
    ((*ppCVar10)->stats).finalBestLap = 99999;
    iVar5 = 0;
    if (0 < GameSetup_gData.numLaps) {
      do {
        pCVar7 = *ppCVar10;
        iVar8 = (pCVar7->stats).time[iVar5];
        if ((iVar8 < (pCVar7->stats).finalBestLap) && (0 < iVar8)) {
          (pCVar7->stats).finalBestLap = iVar8;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < GameSetup_gData.numLaps);
    }
    iVar5 = rand();
    pCVar7 = *ppCVar10;
    iVar8 = (pCVar7->stats).finalTotalTime;
    if (GameSetup_gData.numLaps == 0) {
      trap(0x1c00);
    }
    if ((GameSetup_gData.numLaps == -1) && (iVar8 == -0x80000000)) {
      trap(0x1800);
    }
    iVar5 = iVar8 / GameSetup_gData.numLaps - ((iVar5 / 6 + (iVar5 >> 0x1f) >> 3) - (iVar5 >> 0x1f))
    ;
    if (iVar5 < (pCVar7->stats).finalBestLap) {
      (pCVar7->stats).finalBestLap = iVar5;
    }
    iVar5 = 0;
    if (0 < GameSetup_gData.numLaps) {
      do {
        piVar3 = &((*ppCVar10)->N).objID + iVar5;
        piVar3[0xf6] = piVar3[0xda];
        pCVar7 = *ppCVar10;
        iVar8 = (pCVar7->stats).finalLapTime[iVar5];
        if ((iVar8 < (pCVar7->stats).finalBestLap) && (iVar8 != 0)) {
          (pCVar7->stats).finalBestLap = iVar8;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < GameSetup_gData.numLaps);
    }
    ppCVar10 = ppCVar10 + 1;
    iVar2 = iVar2 + 1;
  }
  iVar2 = 0;
  if (!bVar1) {
    ppCVar10 = &Cars_gRaceCarList9;
    while (iVar8 = 1, iVar2 < iVar5) {
      iVar11 = 0;
      ppCVar9 = &Cars_gRaceCarList9;
      if (0 < iVar5) {
        do {
          if (iVar2 != iVar11) {
            iVar6 = ((*ppCVar10)->stats).finalTotalTime;
            iVar4 = ((*ppCVar9)->stats).finalTotalTime;
            if ((iVar4 < iVar6) || ((iVar6 == iVar4 && (iVar11 < iVar2)))) {
              iVar8 = iVar8 + 1;
            }
          }
          iVar11 = iVar11 + 1;
          ppCVar9 = ppCVar9 + 1;
        } while (iVar11 < Cars_gNumRaceCars);
      }
      pCVar7 = *ppCVar10;
      ppCVar10 = ppCVar10 + 1;
      iVar2 = iVar2 + 1;
      (pCVar7->stats).finalPosition = iVar8;
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

	/* begin block 2 */
		// Start line: 1014
	/* end block 2 */
	// End Line: 1015

	/* begin block 3 */
		// Start line: 1021
	/* end block 3 */
	// End Line: 1022

	/* begin block 4 */
		// Start line: 1021
	/* end block 4 */
	// End Line: 1022

	/* begin block 5 */
		// Start line: 1030
	/* end block 5 */
	// End Line: 1031

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Stats_TrackEndGame__Fv(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Car_tObj *pCVar5;
  Car_tObj **ppCVar6;
  Car_tObj **ppCVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_38;
  int local_34;
  
  local_38 = 0;
  if (1 < Cars_gNumRaceCars) {
    iVar1 = simGlobal.gameTicks;
    if (simGlobal.gameTicks < 0) {
      iVar1 = simGlobal.gameTicks + 0x3f;
    }
    if ((iVar1 >> 6) << 6 == simGlobal.gameTicks + -1) {
      iVar11 = GameSetup_gData.numLaps * gNumSlices;
      iVar1 = 0;
      ppCVar6 = &Cars_gHumanRaceCarList9;
      while (iVar1 < Cars_gNumHumanRaceCars) {
        iVar4 = ((*ppCVar6)->stats).sliceTotal;
        local_34 = iVar11;
        if (iVar4 <= iVar11) {
          local_34 = iVar4;
        }
        iVar2 = Stats_GetPosition__FP8Car_tObj(*ppCVar6);
        iVar10 = 0;
        iVar4 = 0;
        if (iVar2 == 1) {
          iVar9 = 2;
        }
        else {
          iVar9 = 1;
          if (GameSetup_gData.checkpointType != 1) {
            iVar9 = iVar2 + -1;
          }
        }
        iVar8 = 0;
        ppCVar7 = &Cars_gRaceCarList9;
        while (iVar8 < Cars_gNumRaceCars) {
          iVar3 = Stats_GetPosition__FP8Car_tObj(*ppCVar7);
          if (iVar3 == iVar9) {
            iVar4 = ((*ppCVar7)->stats).sliceTotal;
            iVar10 = iVar11;
            if (iVar4 <= iVar11) {
              iVar10 = iVar4;
            }
            if (iVar2 == 1) {
              iVar4 = ((&Cars_gRaceCarList9)[iVar8]->linearVel_ch).z;
              if (iVar4 < 0) {
                iVar4 = -iVar4;
              }
              iVar4 = iVar4 >> 0x10;
            }
            else {
              iVar4 = (int)*(short *)((int)&((*ppCVar6)->linearVel_ch).z + 2);
            }
            break;
          }
          ppCVar7 = ppCVar7 + 1;
          iVar8 = iVar8 + 1;
        }
        ((*ppCVar6)->stats).checkpointUpdate = iVar10 - local_34;
        if ((iVar4 < 0x10) || (pCVar5 = *ppCVar6, (pCVar5->stats).finishType == 2)) {
          ((*ppCVar6)->stats).checkpointDifference = 0;
          ((*ppCVar6)->stats).checkpointDisplay = 0;
        }
        else {
          iVar10 = (pCVar5->stats).checkpointUpdate * 0x180;
          if (iVar4 == 0) {
            trap(0x1c00);
          }
          if ((iVar4 == -1) && (iVar10 == -0x80000000)) {
            trap(0x1800);
          }
          (pCVar5->stats).checkpointDifference = iVar10 / iVar4;
          ((*ppCVar6)->stats).checkpointDisplay = 1;
        }
        ppCVar6 = ppCVar6 + 1;
        iVar1 = iVar1 + 1;
      }
    }
  }
  if (simVar.endSimGame == 0) {
    iVar1 = 0;
    if (0 < Cars_gNumHumanRaceCars) {
      ppCVar6 = &Cars_gHumanRaceCarList9;
      do {
        if (((1 < ((*ppCVar6)->stats).finishType) &&
            (iVar11 = ((*ppCVar6)->stats).sliceTime, iVar11 + 0x140 < simGlobal.gameTicks)) &&
           (((CopSpeak_gQueuePlay == CopSpeak_gQueueHead && (CopSpeak_gSpchHandle == -1)) ||
            (iVar11 + 0x280 < simGlobal.gameTicks)))) {
          local_38 = local_38 + 1;
        }
        iVar1 = iVar1 + 1;
        ppCVar6 = ppCVar6 + 1;
      } while (iVar1 < Cars_gNumHumanRaceCars);
    }
    if (local_38 == Cars_gNumHumanRaceCars) {
      simVar.endSimGame = 1;
      Stats_ExtrapolateOpponentTimes__Fi(2);
    }
  }
  return;
}





