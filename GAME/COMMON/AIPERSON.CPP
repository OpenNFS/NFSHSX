#include "NFS4.H"
#include "AIPERSON.H"

// decompiled code
// original method signature: 
// void /*$ra*/ AIPerson_LoadGridAndSetPersonalityIndexes__Fv()
 // line 31, offset 0x800689e8
	/* begin block 1 */
		// Start line: 32
		// Start offset: 0x800689E8

		/* begin block 1.1 */
			// Start line: 33
			// Start offset: 0x800689E8
			// Variables:
		// 		int carLoop; // $a0
		/* end block 1.1 */
		// End offset: 0x80068A2C
		// End Line: 40
	/* end block 1 */
	// End offset: 0x80068A2C
	// End Line: 40

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AIPerson_LoadGridAndSetPersonalityIndexes__Fv(void)

{
  GameSetup_tCarData *pGVar1;
  int iVar2;
  int iVar3;
  Car_tObj **ppCVar4;
  GameSetup_tData *pGVar5;
  
  iVar2 = Cars_gNumCars;
  iVar3 = 0;
  if (0 < Cars_gNumCars) {
    pGVar5 = &GameSetup_gData;
    ppCVar4 = &__Cars_gList_9__;
    do {
      pGVar1 = pGVar5->carInfo;
      pGVar5 = (GameSetup_tData *)((pGVar5->controllerData).shockImpact + 1);
      iVar3 = iVar3 + 1;
      (*ppCVar4)->personalityIndex = pGVar1->Personality;
      ppCVar4 = ppCVar4 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIPerson_SetPersonality__FP8Car_tObji(struct Car_tObj *carObj /*$s1*/, int personalityIndex /*$s0*/)
 // line 79, offset 0x80068a34
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x80068A34
	/* end block 1 */
	// End offset: 0x80068A78
	// End Line: 84

void AIPerson_SetPersonality__FP8Car_tObji(Car_tObj *carObj,int personalityIndex)

{
  if ((carObj->carFlags & 4U) == 0) {
    strcpy(carObj->carInfo->driver,&GameSetup_gPersonalityNames + personalityIndex * 8);
  }
  personalityIndex = personalityIndex % 5;
  carObj->personalityIndex = personalityIndex;
  carObj->personality = &AIPerson_PersonalityData + personalityIndex;
  AIScript_Assign__FP10AIScript_tPA7_25AIScript_tReactionDetails
            (&carObj->script,
             (AIScript_tReactionDetails (*) [7])(&AIPerson_ScriptData + personalityIndex * 7));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIPerson_SetPersonalityPointers__Fv()
 // line 112, offset 0x80068afc
	/* begin block 1 */
		// Start line: 113
		// Start offset: 0x80068AFC

		/* begin block 1.1 */
			// Start line: 113
			// Start offset: 0x80068AFC
			// Variables:
		// 		int carLoop; // $s1

			/* begin block 1.1.1 */
				// Start line: 114
				// Start offset: 0x80068B18
				// Variables:
			// 		struct Car_tObj *carObj; // $a0
			/* end block 1.1.1 */
			// End offset: 0x80068B30
			// End Line: 116
		/* end block 1.1 */
		// End offset: 0x80068B4C
		// End Line: 118
	/* end block 1 */
	// End offset: 0x80068B4C
	// End Line: 118

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AIPerson_SetPersonalityPointers__Fv(void)

{
  Car_tObj *carObj;
  Car_tObj **ppCVar1;
  int iVar2;
  
  iVar2 = 0;
  ppCVar1 = &__Cars_gList_9__;
  while (iVar2 < Cars_gNumCars) {
    carObj = *ppCVar1;
    ppCVar1 = ppCVar1 + 1;
    iVar2 = iVar2 + 1;
    AIPerson_SetPersonality__FP8Car_tObji(carObj,carObj->personalityIndex);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIPerson_LoadPersonalityData__FP10Udff_tInfo(struct Udff_tInfo *handle /*stack 0*/)
 // line 121, offset 0x80068b60
	/* begin block 1 */
		// Start line: 122
		// Start offset: 0x80068B60

		/* begin block 1.1 */
			// Start line: 122
			// Start offset: 0x80068B60
			// Variables:
		// 		int perLoop; // stack offset -64

			/* begin block 1.1.1 */
				// Start line: 130
				// Start offset: 0x80068BA0
				// Variables:
			// 		int blockingDistance; // $s0
			// 		int cutOffDistance; // $s2
			// 		int lookAhead; // $s3
			// 		int swervyness; // $s4
			// 		int braking; // $s7
			// 		int roadRage; // $s6
			// 		int fishtailControl; // stack offset -60
			// 		int wipeOutFreq; // $s1
			// 		int corneringAbility; // $s5
			// 		int bestLineAbility; // stack offset -56
			// 		int rearEndingTendency; // $a1
			// 		int aggression; // $a2
			/* end block 1.1.1 */
			// End offset: 0x80068BB4
			// End Line: 139
		/* end block 1.1 */
		// End offset: 0x80068E74
		// End Line: 199
	/* end block 1 */
	// End offset: 0x80068E74
	// End Line: 199

void AIPerson_LoadPersonalityData__FP10Udff_tInfo(Udff_tInfo *handle)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  AIPerson_t *pAVar15;
  int local_40;
  
  Udff_GetInt__FP10Udff_tInfo(handle);
  pAVar15 = &AIPerson_PersonalityData;
  local_40 = 0;
  while (local_40 < 9) {
    iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar2 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar3 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar4 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar5 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar6 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar7 = Udff_GetInt__FP10Udff_tInfo(handle);
    Udff_GetInt__FP10Udff_tInfo(handle);
    iVar8 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar9 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar10 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar11 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar12 = Udff_GetInt__FP10Udff_tInfo(handle);
    uVar13 = Udff_GetInt__FP10Udff_tInfo(handle);
    pAVar15->blockMaxDistance = (&AIPerson_blockMaxDistance)[iVar1];
    pAVar15->blockMinDistance = (&AIPerson_blockMinDistance)[iVar2];
    pAVar15->oncomingLookAhead = (&AIPerson_oncomingLookAhead)[iVar3];
    pAVar15->laneSwerve[0] = (&AIPerson_laneSwerve)[iVar4 * 4];
    pAVar15->laneSwerve[1] = (&INT_8010d600)[iVar4 * 4];
    pAVar15->laneSwerve[2] = (&INT_8010d604)[iVar4 * 4];
    pAVar15->laneSwerve[3] = (&INT_8010d608)[iVar4 * 4];
    pAVar15->swerveChangeProb = (&AIPerson_swerveChangeProb)[iVar4];
    pAVar15->brakeMultiplier = (&AIPerson_brakeMultiplier)[iVar5];
    pAVar15->attackActivationHits = (&AIPerson_attackActivationHits)[iVar6];
    pAVar15->attackTime = (&AIPerson_attackTimes)[iVar6];
    pAVar15->fishtailAngle = (&AIPerson_fishtailAngles)[iVar7];
    pAVar15->minimumBetweenWipeoutTicks =
         (&AIPerson_minimumWipeOutTicks)[iVar8 + GameSetup_gData.Weather];
    pAVar15->randomBetweenWipeoutTicks =
         (&AIPerson_randomWipeOutTicks)[iVar8 + GameSetup_gData.Weather];
    pAVar15->gripLossProbPerSecond = (&AIPerson_gripLossProbPerSecond)[iVar9];
    pAVar15->gripLossMinFactor = (&AIPerson_gripLossMinFactor)[iVar9];
    pAVar15->gripLossRecoveryPerTick = (&AIPerson_gripLossRecoveryPerTick)[iVar9];
    pAVar15->bestLineAbility = (&AIPerson_bestLineAbilities)[iVar10];
    pAVar15->rearBumpProbMask = (&AIPerson_rearEndProbMask)[iVar11];
    uVar14 = (&AIPerson_smackProbMask)[iVar12];
    local_40 = local_40 + 1;
    pAVar15->copCollisionFirmness = uVar13;
    pAVar15->smackProbMask = uVar14;
    pAVar15 = pAVar15 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIPerson_LoadScriptData__FP10Udff_tInfo(struct Udff_tInfo *handle /*$s6*/)
 // line 208, offset 0x80068ea4
	/* begin block 1 */
		// Start line: 209
		// Start offset: 0x80068EA4

		/* begin block 1.1 */
			// Start line: 209
			// Start offset: 0x80068EA4
			// Variables:
		// 		int perLoop; // $s7

			/* begin block 1.1.1 */
				// Start line: 218
				// Start offset: 0x80068EE8

				/* begin block 1.1.1.1 */
					// Start line: 226
					// Start offset: 0x80068EF4
					// Variables:
				// 		int actionLoop; // $s2

					/* begin block 1.1.1.1.1 */
						// Start line: 226
						// Start offset: 0x80068EF4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 235
							// Start offset: 0x80068F00
							// Variables:
						// 		int reactionLoop; // $s1
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80068F3C
						// End Line: 246
					/* end block 1.1.1.1.1 */
					// End offset: 0x80068F3C
					// End Line: 246
				/* end block 1.1.1.1 */
				// End offset: 0x80068F44
				// End Line: 247
			/* end block 1.1.1 */
			// End offset: 0x80068F44
			// End Line: 247
		/* end block 1.1 */
		// End offset: 0x80068F50
		// End Line: 250
	/* end block 1 */
	// End offset: 0x80068F50
	// End Line: 250

void AIPerson_LoadScriptData__FP10Udff_tInfo(Udff_tInfo *handle)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  Udff_GetInt__FP10Udff_tInfo(handle);
  iVar6 = 0;
  iVar5 = 0;
  while (iVar4 = 0, iVar6 < 9) {
    while (iVar2 = 0, iVar4 < 7) {
      do {
        iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
        (&AIPerson_ScriptData)[iVar4].reaction[iVar5 + iVar2] = (char)iVar1;
        iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
        iVar3 = iVar2 + 1;
        (&AIPerson_ScriptData)[iVar4].halfSeconds[iVar5 + iVar2] = (char)iVar1;
        iVar2 = iVar3;
      } while (iVar3 < 4);
      iVar4 = iVar4 + 1;
    }
    iVar5 = iVar5 + 0x38;
    iVar6 = iVar6 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIPerson_LoadGlue__FP10Udff_tInfo(struct Udff_tInfo *handle /*$s0*/)
 // line 449, offset 0x80068f80
	/* begin block 1 */
		// Start line: 450
		// Start offset: 0x80068F80

		/* begin block 1.1 */
			// Start line: 450
			// Start offset: 0x80068F80

			/* begin block 1.1.1 */
				// Start line: 458
				// Start offset: 0x80069028
				// Variables:
			// 		int glueLoop; // $s1
			/* end block 1.1.1 */
			// End offset: 0x80069078
			// End Line: 471
		/* end block 1.1 */
		// End offset: 0x80069078
		// End Line: 471
	/* end block 1 */
	// End offset: 0x80069078
	// End Line: 471

void AIPerson_LoadGlue__FP10Udff_tInfo(Udff_tInfo *handle)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  
  Udff_GetInt__FP10Udff_tInfo(handle);
  Udff_GetBuffer__FP10Udff_tInfoPci(handle,(char *)&AIPerson_glueTable,0x54);
  if ((Cars_gNumCopCars != 0) &&
     (((GameSetup_gData.raceType != 1 && (GameSetup_gData.raceType != 5)) ||
      (((__Cars_gHumanRaceCarList_9__->carFlags & 0x200U) == 0 &&
       ((Cars_gNumHumanRaceCars != 2 || ((PTR_8010fa4c->carFlags & 0x200U) == 0)))))))) {
    iVar4 = 0;
    piVar3 = &AIPerson_glueTable;
    do {
      uVar1 = *piVar3;
      if ((int)uVar1 < 0x10001) {
        puVar2 = &DAT_0000d999;
        if ((int)uVar1 < 0x10000) goto LAB_8006905c;
      }
      else {
        puVar2 = &DAT_00012666;
LAB_8006905c:
        uVar1 = fixedmult(uVar1,(int)puVar2);
        *piVar3 = uVar1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = (int *)((uint *)piVar3 + 1);
    } while (iVar4 < 0x15);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIPerson_Startup__Fv()
 // line 488, offset 0x8006908c
	/* begin block 1 */
		// Start line: 489
		// Start offset: 0x8006908C
		// Variables:
	// 		struct Udff_tInfo *handle; // $s0
	// 		char filename[110]; // stack offset -128
	/* end block 1 */
	// End offset: 0x800691F0
	// End Line: 534

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AIPerson_Startup__Fv(void)

{
  Udff_tInfo *handle;
  char *__format;
  char acStack128 [112];
  
  AIPerson_LoadGridAndSetPersonalityIndexes__Fv();
  sprintf(acStack128,s__sprsonal_bin_80055354,PTR_80116470);
  handle = Udff_Opena__FPcT0i(acStack128,(char *)0x0,1);
  AIPerson_LoadPersonalityData__FP10Udff_tInfo(handle);
  Udff_Close__FP10Udff_tInfo(handle);
  sprintf(acStack128,s__sscripts_bin_80055364,PTR_80116470);
  handle = Udff_Opena__FPcT0i(acStack128,(char *)0x0,1);
  AIPerson_LoadScriptData__FP10Udff_tInfo(handle);
  Udff_Close__FP10Udff_tInfo(handle);
  if (((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
     (((__Cars_gHumanRaceCarList_9__->carFlags & 0x200U) != 0 ||
      ((Cars_gNumHumanRaceCars == 2 && ((PTR_8010fa4c->carFlags & 0x200U) != 0)))))) {
    __format = s__sbtcglue_bin_80055374;
  }
  else {
    if (((uint)GameSetup_gData.raceType < 2) && (Cars_gNumAIRaceCars == 1)) {
      __format = s__shhglue_bin_80055384;
    }
    else {
      __format = s__sglue_bin_80055394;
    }
  }
  sprintf(acStack128,__format,PTR_80116470);
  handle = Udff_Opena__FPcT0i(acStack128,(char *)0x0,1);
  AIPerson_LoadGlue__FP10Udff_tInfo(handle);
  Udff_Close__FP10Udff_tInfo(handle);
  AIPerson_SetPersonalityPointers__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIPerson_Cleanup__Fv()
 // line 541, offset 0x80069230
	/* begin block 1 */
		// Start line: 542
		// Start offset: 0x80069230
	/* end block 1 */
	// End offset: 0x80069230
	// End Line: 542

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AIPerson_Cleanup__Fv(void)

{
  return;
}




