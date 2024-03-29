#include "THISDUST.H"
#include "AIH_BASICPERP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ CheckForCrimes__16AIHigh_BasicPerp(struct AIHigh_BasicPerp *this /*$s1*/)
 // line 43, offset 0x8005b500
	/* begin block 1 */
		// Start line: 44
		// Start offset: 0x8005B500
		// Variables:
	// 		enum crimeType crime; // $s0
	// 		enum crimeType originalCrime; // $s2
	// 		int legal; // $a1

		/* begin block 1.1 */
			// Start line: 44
			// Start offset: 0x8005B500

			/* begin block 1.1.1 */
				// Start line: 44
				// Start offset: 0x8005B500
			/* end block 1.1.1 */
			// End offset: 0x8005B500
			// End Line: 44
		/* end block 1.1 */
		// End offset: 0x8005B500
		// End Line: 44

		/* begin block 1.2 */
			// Start line: 121
			// Start offset: 0x8005B718

			/* begin block 1.2.1 */
				// Start line: 122
				// Start offset: 0x8005B720
				// Variables:
			// 		int carLoop; // $a1

				/* begin block 1.2.1.1 */
					// Start line: 126
					// Start offset: 0x8005B720

					/* begin block 1.2.1.1.1 */
						// Start line: 126
						// Start offset: 0x8005B730
						// Variables:
					// 		struct Car_tObj *carObj; // $v1

						/* begin block 1.2.1.1.1.1 */
							// Start line: 128
							// Start offset: 0x8005B73C

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 129
								// Start offset: 0x8005B768

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 129
									// Start offset: 0x8005B768
									// Variables:
								// 		enum crimeType crime; // $s0

									/* begin block 1.2.1.1.1.1.1.1.1 */
										// Start line: 129
										// Start offset: 0x8005B768
									/* end block 1.2.1.1.1.1.1.1.1 */
									// End offset: 0x8005B768
									// End Line: 129
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x8005B768
								// End Line: 129
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x8005B768
							// End Line: 129
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8005B768
						// End Line: 129
					/* end block 1.2.1.1.1 */
					// End offset: 0x8005B768
					// End Line: 129
				/* end block 1.2.1.1 */
				// End offset: 0x8005B774
				// End Line: 134
			/* end block 1.2.1 */
			// End offset: 0x8005B774
			// End Line: 134
		/* end block 1.2 */
		// End offset: 0x8005B774
		// End Line: 134
	/* end block 1 */
	// End offset: 0x8005B774
	// End Line: 136

	/* begin block 2 */
		// Start line: 86
	/* end block 2 */
	// End Line: 87

	/* begin block 3 */
		// Start line: 86
	/* end block 3 */
	// End Line: 87

/* WARNING: Type propagation algorithm not settling */

void CheckForCrimes__16AIHigh_BasicPerp(AIHigh_BasicPerp *this)

{
  int iVar1;
  BO_tNewtonObj *pBVar2;
  Car_tObj *pCVar3;
  int iVar4;
  uint uVar5;
  Car_tObj **ppCVar6;
  crimeType cVar7;
  crimeType cVar8;
  
  cVar7 = (this->basicPerpInfo_).crime_;
  iVar1 = AISpeeds_GetLegalSpeed__Fi((int)(((this->AIHigh_Base).carObj_)->N).simRoadInfo.slice);
  if (simGlobal.gameTicks - this->lastPullOverTime_ < 0x280) {
    return;
  }
  pCVar3 = (this->AIHigh_Base).carObj_;
  if (1 < (pCVar3->stats).finishType) {
    return;
  }
  cVar8 = cVar7;
  if (((simGlobal.gameTicks - (pCVar3->N).collision.lastTime < 0xf) &&
      (pBVar2 = (pCVar3->N).collision.lastOtherObj, cVar8 = cVar7, pBVar2 != (BO_tNewtonObj *)0x0))
     && (cVar8 = cVar7, (*(uint *)((int)pBVar2[1].simRoadInfo.quadPts + 0x10) & 0x20) != 0)) {
    if ((pCVar3->N).collision.lastImpulse < 0x140001) {
      cVar8 = cVar7;
      if (cVar7 == CRIME_NONE) {
        cVar8 = CRIME_BUMPCOP;
      }
    }
    else {
      cVar8 = CRIME_SMASHCOP;
    }
  }
  if ((cVar7 != CRIME_NONE) && (cVar8 != CRIME_SMASHCOP)) {
    return;
  }
  iVar4 = (((this->AIHigh_Base).carObj_)->script).lastActionTime;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if ((iVar1 < iVar4) && (cVar8 == CRIME_NONE)) {
    cVar8 = CRIME_SPEEDER;
  }
  if (AITune_oneWay == 0) {
    pCVar3 = (this->AIHigh_Base).carObj_;
    iVar1 = (pCVar3->script).lastActionTime;
    if (iVar1 * AITune_driveSide < 0) {
      if (*(int *)(pCVar3->accTable + 0x60) < 7) goto LAB_8005b700;
    }
    else {
      if (6 < *(int *)(pCVar3->accTable + 0x60)) goto LAB_8005b700;
    }
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
  }
  else {
    uVar5 = (((this->AIHigh_Base).carObj_)->script).lastActionTime;
    if (GameSetup_gData.reverseTrack != 0) {
      uVar5 = -uVar5;
    }
    if (uVar5 >> 0x1f == 0) goto LAB_8005b700;
    iVar1 = (((this->AIHigh_Base).carObj_)->script).lastActionTime;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
  }
  if ((0x40000 < iVar1) && (cVar8 == CRIME_NONE)) {
    cVar8 = CRIME_WRONGSIDE;
  }
LAB_8005b700:
  if (simGlobal.gameTicks < 0x200) {
    cVar8 = CRIME_NONE;
  }
  iVar1 = 0;
  if (cVar8 != CRIME_NONE) {
    ppCVar6 = &Cars_gList9;
    while (iVar1 < Cars_gNumCars) {
      if ((((*ppCVar6)->carFlags & 0x220U) != 0) && (((*ppCVar6)->N).active != '\0')) {
        (this->basicPerpInfo_).crime_ = cVar8;
        return;
      }
      ppCVar6 = ppCVar6 + 1;
      iVar1 = iVar1 + 1;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckIfCaught__16AIHigh_BasicPerp(struct AIHigh_BasicPerp *this /*$s3*/)
 // line 180, offset 0x8005b78c
	/* begin block 1 */
		// Start line: 181
		// Start offset: 0x8005B78C
		// Variables:
	// 		int absSpeed; // $v1
	// 		int perpUpright; // stack offset -48
	// 		int skill; // $a1

		/* begin block 1.1 */
			// Start line: 194
			// Start offset: 0x8005B7F8

			/* begin block 1.1.1 */
				// Start line: 194
				// Start offset: 0x8005B7F8

				/* begin block 1.1.1.1 */
					// Start line: 194
					// Start offset: 0x8005B7F8
				/* end block 1.1.1.1 */
				// End offset: 0x8005B7F8
				// End Line: 194
			/* end block 1.1.1 */
			// End offset: 0x8005B7F8
			// End Line: 194
		/* end block 1.1 */
		// End offset: 0x8005B808
		// End Line: 195

		/* begin block 1.2 */
			// Start line: 207
			// Start offset: 0x8005B864
			// Variables:
		// 		int carLoop; // $s6

			/* begin block 1.2.1 */
				// Start line: 210
				// Start offset: 0x8005B880
				// Variables:
			// 		struct Car_tObj *cop; // $s2
			// 		int diffSpeed; // $a1
			// 		int validCar; // $a0

				/* begin block 1.2.1.1 */
					// Start line: 237
					// Start offset: 0x8005B9B8

					/* begin block 1.2.1.1.1 */
						// Start line: 247
						// Start offset: 0x8005BA88
						// Variables:
					// 		int distanceAbsMeters; // $s1
					// 		int barrierInWay; // $s0

						/* begin block 1.2.1.1.1.1 */
							// Start line: 255
							// Start offset: 0x8005BB58

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 256
								// Start offset: 0x8005BB80
								// Variables:
							// 		int xDot; // $s4
							// 		int zDot; // $s1

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 258
									// Start offset: 0x8005BB80

									/* begin block 1.2.1.1.1.1.1.1.1 */
										// Start line: 262
										// Start offset: 0x8005BBEC
										// Variables:
									// 		struct coorddef carCopVector; // stack offset -64
									/* end block 1.2.1.1.1.1.1.1.1 */
									// End offset: 0x8005BCB8
									// End Line: 266
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x8005BCB8
								// End Line: 266
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x8005BD40
							// End Line: 284
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8005BD40
						// End Line: 284
					/* end block 1.2.1.1.1 */
					// End offset: 0x8005BD40
					// End Line: 284
				/* end block 1.2.1.1 */
				// End offset: 0x8005BD40
				// End Line: 284
			/* end block 1.2.1 */
			// End offset: 0x8005BD40
			// End Line: 284
		/* end block 1.2 */
		// End offset: 0x8005BD48
		// End Line: 289
	/* end block 1 */
	// End offset: 0x8005BD4C
	// End Line: 290

	/* begin block 2 */
		// Start line: 340
	/* end block 2 */
	// End Line: 341

	/* begin block 3 */
		// Start line: 384
	/* end block 3 */
	// End Line: 385

	/* begin block 4 */
		// Start line: 384
	/* end block 4 */
	// End Line: 385

/* WARNING: Type propagation algorithm not settling */

int CheckIfCaught__16AIHigh_BasicPerp(AIHigh_BasicPerp *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  speechSourceType sVar8;
  int iVar9;
  Car_tObj *pCVar10;
  Car_tObj *otherCarObj;
  int lane1;
  int slice;
  int lane0;
  
  iVar2 = GameSetup_gData.skill;
  otherCarObj = (this->AIHigh_Base).carObj_;
  if ((otherCarObj->carFlags & 2U) == 0) {
    iVar3 = (otherCarObj->N).speedXZ;
  }
  else {
    iVar3 = (otherCarObj->script).lastActionTime;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
  }
  if ((this->basicPerpInfo_).crime_ != CRIME_NONE) {
    if (AIHigh_BasicPerp_PlayerCaughtSpeed[GameSetup_gData.skill] < iVar3) {
      return 0;
    }
    if (simGlobal.gameTicks - this->lastPullOverTime_ < 0x3c0) {
      return 0;
    }
    otherCarObj = (this->AIHigh_Base).carObj_;
    iVar3 = 0;
    if ((otherCarObj->stats).finishType < 2) {
      iVar7 = (otherCarObj->N).orientMat.m[4];
      do {
        while( true ) {
          if (Cars_gNumCars <= iVar3) {
            return 0;
          }
          otherCarObj = (&Cars_gList9)[iVar3];
          bVar1 = false;
          if (((((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
               (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
                ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0)))
                ))) && ((otherCarObj->carFlags & 0x200U) != 0)) ||
             ((((GameSetup_gData.raceType != 1 && (GameSetup_gData.raceType != 5)) ||
               (((Cars_gHumanRaceCarList9->carFlags & 0x200U) == 0 &&
                ((Cars_gNumHumanRaceCars != 2 || ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) == 0)))
                ))) && ((otherCarObj->carFlags & 0x20U) != 0)))) {
            bVar1 = true;
          }
          if (((((bVar1) && (sVar8 = (otherCarObj->speechInfo).speechSource, (sVar8 & 2) != 0)) &&
               ((otherCarObj->N).flightTime == 0)) &&
              (((otherCarObj->N).active != '\0' && ((sVar8 & 4) == 0)))) &&
             ((0x9999 < (otherCarObj->N).orientMat.m[4] &&
              ((((this->AIHigh_Base).carObj_)->script).lastActionTime -
               (otherCarObj->script).lastActionTime < AIHigh_BasicPerp_MinDeltaSpeed[iVar2]))))
          break;
LAB_8005bd40:
          iVar3 = iVar3 + 1;
        }
        iVar9 = (otherCarObj->script).lastActionTime;
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        if (AIHigh_BasicPerp_CopCaughtSpeed[iVar2] <= iVar9) goto LAB_8005bd40;
        slice = (otherCarObj->N).position.y;
        lane1 = (((this->AIHigh_Base).carObj_)->N).position.y;
        iVar9 = slice - lane1;
        if (iVar9 < 1) {
          iVar9 = lane1 - slice;
        }
        if (AIHigh_BasicPerp_PlayerCaughtDeltaY[iVar2] <= iVar9) goto LAB_8005bd40;
        iVar9 = AIWorld_ApxSplineDistance__FP8Car_tObjT0((this->AIHigh_Base).carObj_,otherCarObj);
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        pCVar10 = (this->AIHigh_Base).carObj_;
        lane1 = *(int *)(pCVar10->accTable + 0x60);
        bVar1 = false;
        if (((int)(7 - (uint)(BWorldSm_slices[(int)(pCVar10->N).simRoadInfo.slice].laneCount >> 4))
             <= lane1) &&
           (lane1 <= (int)(((uint)BWorldSm_slices[(int)(pCVar10->N).simRoadInfo.slice].laneCount &
                           0xf) + 6))) {
          slice = (int)(otherCarObj->N).simRoadInfo.slice;
          lane0 = *(int *)(otherCarObj->accTable + 0x60);
          if (((int)(7 - (uint)(BWorldSm_slices[slice].laneCount >> 4)) <= lane0) &&
             ((lane0 <= (int)(((uint)BWorldSm_slices[slice].laneCount & 0xf) + 6) &&
              (lane1 = AIWorld_CheckForBarrierBetweenLanes__Fiii(slice,lane0,lane1), lane1 != 0))))
          {
            pCVar10 = (this->AIHigh_Base).carObj_;
            lane1 = AIWorld_CheckForBarrierBetweenLanes__Fiii
                              ((int)(pCVar10->N).simRoadInfo.slice,
                               *(int *)(otherCarObj->accTable + 0x60),
                               *(int *)(pCVar10->accTable + 0x60));
            bVar1 = lane1 != 0;
          }
        }
        if ((AIHigh_BasicPerp_CaughtDistance[iVar2] <= iVar9) || (iVar9 = 0, bVar1))
        goto LAB_8005bd40;
        lane1 = 0x10000;
        if (((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
           (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
            ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0))))))
        {
          lane0 = (otherCarObj->N).position.x - (((this->AIHigh_Base).carObj_)->N).position.x;
          lane1 = (otherCarObj->N).position.y - (((this->AIHigh_Base).carObj_)->N).position.y;
          slice = (otherCarObj->N).position.z - (((this->AIHigh_Base).carObj_)->N).position.z;
          uVar4 = fixedmult(lane0,(((this->AIHigh_Base).carObj_)->N).orientMat.m[0]);
          uVar5 = fixedmult(lane1,(((this->AIHigh_Base).carObj_)->N).orientMat.m[1]);
          uVar6 = fixedmult(slice,(((this->AIHigh_Base).carObj_)->N).orientMat.m[2]);
          iVar9 = uVar4 + uVar5 + uVar6;
          uVar4 = fixedmult(lane0,(((this->AIHigh_Base).carObj_)->N).orientMat.m[6]);
          uVar5 = fixedmult(lane1,(((this->AIHigh_Base).carObj_)->N).orientMat.m[7]);
          uVar6 = fixedmult(slice,(((this->AIHigh_Base).carObj_)->N).orientMat.m[8]);
          lane1 = uVar4 + uVar5 + uVar6;
        }
        if ((iVar7 < 0x999a) ||
           (((int)(otherCarObj->speechInfo).speechMode < 0x471c7 &&
            ((int)(((this->AIHigh_Base).carObj_)->speechInfo).speechMode < 0x471c7)))) break;
        if (iVar9 < 0) {
          iVar9 = -iVar9;
        }
        if ((0x8ffff < iVar9) || (lane1 < 0)) goto LAB_8005bd40;
        iVar3 = iVar3 + 1;
      } while (0x8ffff < lane1);
      if (this->lastArrestingCop_ == (Car_tObj *)0x0) {
        this->lastArrestingCop_ = otherCarObj;
        return 1;
      }
      return 1;
    }
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveCloseCops__16AIHigh_BasicPerp(struct AIHigh_BasicPerp *this /*$s6*/)
 // line 296, offset 0x8005bd7c
	/* begin block 1 */
		// Start line: 297
		// Start offset: 0x8005BD7C

		/* begin block 1.1 */
			// Start line: 297
			// Start offset: 0x8005BD7C
			// Variables:
		// 		int copLoop; // $s2

			/* begin block 1.1.1 */
				// Start line: 298
				// Start offset: 0x8005BDC4
				// Variables:
			// 		struct Car_tObj *cop; // $s0
			// 		int distance; // $a2

				/* begin block 1.1.1.1 */
					// Start line: 304
					// Start offset: 0x8005BDF8

					/* begin block 1.1.1.1.1 */
						// Start line: 308
						// Start offset: 0x8005BE24
						// Variables:
					// 		struct AIHigh_Cop *thisCop; // $a0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 311
							// Start offset: 0x8005BE44

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 315
								// Start offset: 0x8005BE60

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 315
									// Start offset: 0x8005BE60
									// Variables:
								// 		struct AIHigh_BasicCop *this; // $a0

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 315
										// Start offset: 0x8005BE60
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8005BE60
									// End Line: 315
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8005BE60
								// End Line: 315
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8005BE60
							// End Line: 315

							/* begin block 1.1.1.1.1.1.2 */
								// Start line: 317
								// Start offset: 0x8005BE68

								/* begin block 1.1.1.1.1.1.2.1 */
									// Start line: 317
									// Start offset: 0x8005BE68
									// Variables:
								// 		struct AIHigh_BasicCop *this; // $a0

									/* begin block 1.1.1.1.1.1.2.1.1 */
										// Start line: 317
										// Start offset: 0x8005BE68
									/* end block 1.1.1.1.1.1.2.1.1 */
									// End offset: 0x8005BE70
									// End Line: 317
								/* end block 1.1.1.1.1.1.2.1 */
								// End offset: 0x8005BE70
								// End Line: 317
							/* end block 1.1.1.1.1.1.2 */
							// End offset: 0x8005BE70
							// End Line: 317
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8005BE70
						// End Line: 317

						/* begin block 1.1.1.1.1.2 */
							// Start line: 317
							// Start offset: 0x8005BE70
							// Variables:
						// 		struct AIHigh_Base *this; // $a0

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 317
								// Start offset: 0x8005BE70
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x8005BE70
							// End Line: 317
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x8005BE70
						// End Line: 317
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005BE98
					// End Line: 319
				/* end block 1.1.1.1 */
				// End offset: 0x8005BE98
				// End Line: 323
			/* end block 1.1.1 */
			// End offset: 0x8005BE98
			// End Line: 323
		/* end block 1.1 */
		// End offset: 0x8005BEA4
		// End Line: 326
	/* end block 1 */
	// End offset: 0x8005BEA4
	// End Line: 326

	/* begin block 2 */
		// Start line: 619
	/* end block 2 */
	// End Line: 620

	/* begin block 3 */
		// Start line: 626
	/* end block 3 */
	// End Line: 627

	/* begin block 4 */
		// Start line: 626
	/* end block 4 */
	// End Line: 627

void RemoveCloseCops__16AIHigh_BasicPerp(AIHigh_BasicPerp *this)

{
  int iVar1;
  Speaker *pSVar2;
  AIHigh_Base *pAVar3;
  int iVar4;
  Car_tObj *carObj;
  Car_tObj **ppCVar5;
  int iVar6;
  
  iVar6 = 0;
  ppCVar5 = &Cars_gCopCarList9;
  while (iVar6 < Cars_gNumCopCars) {
    carObj = *ppCVar5;
    if (((carObj->speechInfo).speechSource & 4) == 0) {
      iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj,(this->AIHigh_Base).carObj_);
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < 0x960000) {
        pAVar3 = (&highLevelAIObjs9)[carObj->carIndex];
        iVar4 = 1;
        if (GameSetup_gData.reverseTrack == 0) {
          iVar4 = -1;
        }
        (carObj->script).lastReactionIndex[3] = iVar4;
        (carObj->script).lastReactionIndex[2] = iVar4;
        carObj->speedFactor = 1;
        if (iVar1 < 0x1e0000) {
          (&pAVar3->carObj_)[0x15] = (Car_tObj *)&DAT_00000001;
        }
        else {
          (&pAVar3->carObj_)[0x15] = (Car_tObj *)0x2;
        }
        pSVar2 = Mobile__6SpeechP8Car_tObj(pAVar3->carObj_);
        (**(code **)(*(int *)pSVar2->_vf + 0x84))
                  ((int)&(pSVar2->fPosition).flags + (int)*(short *)(*(int *)pSVar2->_vf + 0x80));
      }
    }
    ppCVar5 = ppCVar5 + 1;
    iVar6 = iVar6 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveChaser__16AIHigh_BasicPerpii7copType(struct AIHigh_BasicPerp *this /*$a0*/, int copIndex /*$a1*/, int carIndex /*$a2*/, enum copType type /*$a3*/)
 // line 331, offset 0x8005becc
	/* begin block 1 */
		// Start line: 332
		// Start offset: 0x8005BECC
		// Variables:
	// 		int pos; // $v1

		/* begin block 1.1 */
			// Start line: 333
			// Start offset: 0x8005BECC
			// Variables:
		// 		struct AICop_BasicPerpInfo *this; // $a2

			/* begin block 1.1.1 */
				// Start line: 333
				// Start offset: 0x8005BECC
			/* end block 1.1.1 */
			// End offset: 0x8005BECC
			// End Line: 333
		/* end block 1.1 */
		// End offset: 0x8005BECC
		// End Line: 333
	/* end block 1 */
	// End offset: 0x8005BECC
	// End Line: 333

	/* begin block 2 */
		// Start line: 702
	/* end block 2 */
	// End Line: 703

	/* begin block 3 */
		// Start line: 708
	/* end block 3 */
	// End Line: 709

	/* begin block 4 */
		// Start line: 708
	/* end block 4 */
	// End Line: 709

	/* begin block 5 */
		// Start line: 709
	/* end block 5 */
	// End Line: 710

	/* begin block 6 */
		// Start line: 709
	/* end block 6 */
	// End Line: 710

void RemoveChaser__16AIHigh_BasicPerpii7copType
               (AIHigh_BasicPerp *this,int copIndex,int carIndex,copType type)

{
  Car_tObj **ppCVar1;
  int *piVar2;
  
  piVar2 = (this->basicPerpInfo_).copsAssigned_ + type;
  ppCVar1 = &(this->AIHigh_Base).carObj_ + this->copVSPositionList_[copIndex] * 2;
  *piVar2 = *piVar2 + -1;
  ppCVar1[7] = (Car_tObj *)0xffffffff;
  ppCVar1[8] = (Car_tObj *)0xffffffff;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddChaser__16AIHigh_BasicPerpii7copType(struct AIHigh_BasicPerp *this /*$a0*/, int copIndex /*$a1*/, int carIndex /*$a2*/, enum copType type /*$a3*/)
 // line 343, offset 0x8005bf08
	/* begin block 1 */
		// Start line: 344
		// Start offset: 0x8005BF08
		// Variables:
	// 		int pos; // $v1

		/* begin block 1.1 */
			// Start line: 344
			// Start offset: 0x8005BF08
			// Variables:
		// 		struct AICop_BasicPerpInfo *this; // $v1

			/* begin block 1.1.1 */
				// Start line: 344
				// Start offset: 0x8005BF08
			/* end block 1.1.1 */
			// End offset: 0x8005BF08
			// End Line: 344
		/* end block 1.1 */
		// End offset: 0x8005BF08
		// End Line: 344
	/* end block 1 */
	// End offset: 0x8005BF08
	// End Line: 344

	/* begin block 2 */
		// Start line: 726
	/* end block 2 */
	// End Line: 727

	/* begin block 3 */
		// Start line: 732
	/* end block 3 */
	// End Line: 733

	/* begin block 4 */
		// Start line: 732
	/* end block 4 */
	// End Line: 733

int AddChaser__16AIHigh_BasicPerpii7copType
              (AIHigh_BasicPerp *this,int copIndex,int carIndex,copType type)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (this->basicPerpInfo_).copsAssigned_ + type;
  *piVar2 = *piVar2 + 1;
  this->positionVSCopList_[5].copIndex = copIndex;
  this->positionVSCopList_[5].carIndex = carIndex;
  this->copVSPositionList_[copIndex] = 5;
  iVar1 = CheckChaserPosition__16AIHigh_BasicPerpii(this,copIndex,carIndex);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CheckChaserPosition__16AIHigh_BasicPerpii(struct AIHigh_BasicPerp *this /*$s2*/, int copIndex /*$s4*/, int carIndex /*$s5*/)
 // line 359, offset 0x8005bf5c
	/* begin block 1 */
		// Start line: 360
		// Start offset: 0x8005BF5C
		// Variables:
	// 		int pos; // $s0
	// 		int thisCopSlice; // $s7

		/* begin block 1.1 */
			// Start line: 360
			// Start offset: 0x8005BF5C
			// Variables:
		// 		struct AIHigh_Base *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 360
				// Start offset: 0x8005BF5C
			/* end block 1.1.1 */
			// End offset: 0x8005BF5C
			// End Line: 360
		/* end block 1.1 */
		// End offset: 0x8005BF5C
		// End Line: 360

		/* begin block 1.2 */
			// Start line: 360
			// Start offset: 0x8005BF5C

			/* begin block 1.2.1 */
				// Start line: 372
				// Start offset: 0x8005BFC4
				// Variables:
			// 		int nextCopIndex; // $s1
			// 		int nextCarIndex; // $v0

				/* begin block 1.2.1.1 */
					// Start line: 378
					// Start offset: 0x8005BFE0

					/* begin block 1.2.1.1.1 */
						// Start line: 379
						// Start offset: 0x8005BFF8
						// Variables:
					// 		struct AIHigh_Base *this; // $v0

						/* begin block 1.2.1.1.1.1 */
							// Start line: 379
							// Start offset: 0x8005BFF8
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8005BFF8
						// End Line: 379
					/* end block 1.2.1.1.1 */
					// End offset: 0x8005BFF8
					// End Line: 379
				/* end block 1.2.1.1 */
				// End offset: 0x8005C07C
				// End Line: 395
			/* end block 1.2.1 */
			// End offset: 0x8005C084
			// End Line: 396
		/* end block 1.2 */
		// End offset: 0x8005C084
		// End Line: 396
	/* end block 1 */
	// End offset: 0x8005C084
	// End Line: 401

	/* begin block 2 */
		// Start line: 761
	/* end block 2 */
	// End Line: 762

	/* begin block 3 */
		// Start line: 765
	/* end block 3 */
	// End Line: 766

	/* begin block 4 */
		// Start line: 765
	/* end block 4 */
	// End Line: 766

/* WARNING: Type propagation algorithm not settling */

int CheckChaserPosition__16AIHigh_BasicPerpii(AIHigh_BasicPerp *this,int copIndex,int carIndex)

{
  short sVar1;
  Car_tObj *pCVar2;
  Car_tObj **ppCVar3;
  Car_tObj *pCVar4;
  int iVar5;
  Car_tObj **ppCVar6;
  Car_tObj **ppCVar7;
  Car_tObj *pCVar8;
  
  ppCVar6 = &(this->AIHigh_Base).carObj_ + copIndex;
  sVar1 = ((&highLevelAIObjs9)[carIndex]->carObj_->N).simRoadInfo.slice;
  pCVar2 = ppCVar6[0x13];
  while( true ) {
    if ((int)pCVar2 < 1) {
      return (int)pCVar2;
    }
    ppCVar3 = &(this->AIHigh_Base).carObj_ + &(pCVar2->N).simRoadInfo.field_0x7 * 2;
    pCVar8 = ppCVar3[7];
    pCVar4 = ppCVar3[8];
    if ((int)pCVar2 < 1) break;
    if (pCVar8 != (Car_tObj *)0xffffffff) {
      if ((pCVar4 != (Car_tObj *)0xffffffff) &&
         (iVar5 = AIWorld_ApxSplineDistance__FP8Car_tObji
                            ((&highLevelAIObjs9)[(int)pCVar4]->carObj_,(int)sVar1),
         -0xc0001 < iVar5 * (((this->AIHigh_Base).carObj_)->script).lastReactionIndex[3])) {
        return (int)pCVar2;
      }
      *(Car_tObj **)(this->copVSPositionList_ + (int)pCVar8) = pCVar2;
    }
    pCVar4 = (Car_tObj *)&(pCVar2->N).simRoadInfo.field_0x7;
    ppCVar3 = &(this->AIHigh_Base).carObj_ + (int)pCVar4 * 2;
    ppCVar6[0x13] = pCVar4;
    ppCVar7 = &(this->AIHigh_Base).carObj_ + (int)pCVar2 * 2;
    ppCVar7[7] = ppCVar3[7];
    ppCVar7[8] = ppCVar3[8];
    *(int *)(ppCVar3 + 7) = copIndex;
    *(int *)(ppCVar3 + 8) = carIndex;
    pCVar2 = pCVar4;
  }
  return (int)pCVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Clear__16AIHigh_BasicPerp(struct AIHigh_BasicPerp *this /*$a0*/)
 // line 406, offset 0x8005c0b8
	/* begin block 1 */
		// Start line: 407
		// Start offset: 0x8005C0B8

		/* begin block 1.1 */
			// Start line: 408
			// Start offset: 0x8005C0B8
			// Variables:
		// 		int loop; // $a1
		/* end block 1.1 */
		// End offset: 0x8005C0DC
		// End Line: 412
	/* end block 1 */
	// End offset: 0x8005C0DC
	// End Line: 413

	/* begin block 2 */
		// Start line: 868
	/* end block 2 */
	// End Line: 869

	/* begin block 3 */
		// Start line: 874
	/* end block 3 */
	// End Line: 875

	/* begin block 4 */
		// Start line: 874
	/* end block 4 */
	// End Line: 875

	/* begin block 5 */
		// Start line: 875
	/* end block 5 */
	// End Line: 876

	/* begin block 6 */
		// Start line: 875
	/* end block 6 */
	// End Line: 876

void Clear__16AIHigh_BasicPerp(AIHigh_BasicPerp *this)

{
  AIHigh_BasicPerp *pAVar1;
  int iVar2;
  
  iVar2 = 0;
  pAVar1 = this;
  do {
    pAVar1->positionVSCopList_[0].copIndex = -1;
    pAVar1->positionVSCopList_[0].carIndex = -1;
    iVar2 = iVar2 + 1;
    pAVar1 = (AIHigh_BasicPerp *)&(pAVar1->AIHigh_Base).stateType_;
  } while (iVar2 < 6);
  this->pullOverMode_ = PULLOVER_NONE;
  this->beatingTicksLeft_ = 0;
  this->lastPullOverTime_ = -0x280;
  this->lastArrestingCop_ = (Car_tObj *)0x0;
  return;
}



// decompiled code
// original method signature: 
// struct AIHigh_BasicPerp * /*$ra*/ __16AIHigh_BasicPerpP8Car_tObj(struct AIHigh_BasicPerp *this /*$s0*/, struct Car_tObj *carObj /*$a1*/)
 // line 419, offset 0x8005c0f4
	/* begin block 1 */
		// Start line: 420
		// Start offset: 0x8005C0F4

		/* begin block 1.1 */
			// Start line: 420
			// Start offset: 0x8005C0F4

			/* begin block 1.1.1 */
				// Start line: 420
				// Start offset: 0x8005C0F4

				/* begin block 1.1.1.1 */
					// Start line: 420
					// Start offset: 0x8005C0F4

					/* begin block 1.1.1.1.1 */
						// Start line: 420
						// Start offset: 0x8005C0F4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 420
							// Start offset: 0x8005C0F4
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8005C0F4
						// End Line: 420
					/* end block 1.1.1.1.1 */
					// End offset: 0x8005C0F4
					// End Line: 420

					/* begin block 1.1.1.1.2 */
						// Start line: 420
						// Start offset: 0x8005C0F4

						/* begin block 1.1.1.1.2.1 */
							// Start line: 420
							// Start offset: 0x8005C0F4
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x8005C0F4
						// End Line: 420
					/* end block 1.1.1.1.2 */
					// End offset: 0x8005C0F4
					// End Line: 420
				/* end block 1.1.1.1 */
				// End offset: 0x8005C0F4
				// End Line: 420
			/* end block 1.1.1 */
			// End offset: 0x8005C0F4
			// End Line: 420
		/* end block 1.1 */
		// End offset: 0x8005C0F4
		// End Line: 420
	/* end block 1 */
	// End offset: 0x8005C0F4
	// End Line: 420

	/* begin block 2 */
		// Start line: 420
		// Start offset: 0x8005C0F4
	/* end block 2 */
	// End offset: 0x8005C0F4
	// End Line: 420

	/* begin block 3 */
		// Start line: 898
	/* end block 3 */
	// End Line: 899

	/* begin block 4 */
		// Start line: 902
	/* end block 4 */
	// End Line: 903

	/* begin block 5 */
		// Start line: 902
	/* end block 5 */
	// End Line: 903

AIHigh_BasicPerp * __16AIHigh_BasicPerpP8Car_tObj(AIHigh_BasicPerp *this,Car_tObj *carObj)

{
  __11AIHigh_BaseP8Car_tObj((AIHigh_Base *)this,carObj);
  *(undefined4 *)(this->AIHigh_Base)._vf = 0x80054e6c;
  (this->basicPerpInfo_).copsAssigned_[0] = 0;
  (this->basicPerpInfo_).copsAssigned_[1] = 0;
  (this->basicPerpInfo_).crime_ = CRIME_NONE;
  Clear__16AIHigh_BasicPerp(this);
  return this;
}





