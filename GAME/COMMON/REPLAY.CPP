#include "THISDUST.H"
#include "REPLAY.H"


// decompiled code
// original method signature: 
// char * /*$ra*/ Replay_Compress__FPc(char *uncompressed_data /*$a0*/)
 // line 72, offset 0x800b3c4c
	/* begin block 1 */
		// Start line: 73
		// Start offset: 0x800B3C4C
		// Variables:
	// 		int i; // $v1
	// 		int done; // $t1
	// 		int count; // $a1
	// 		int c_pointer; // $a3
	// 		char begin_byte; // $t0
	/* end block 1 */
	// End offset: 0x800B3CFC
	// End Line: 118

	/* begin block 2 */
		// Start line: 144
	/* end block 2 */
	// End Line: 145

	/* begin block 3 */
		// Start line: 144
	/* end block 3 */
	// End Line: 145

	/* begin block 4 */
		// Start line: 146
	/* end block 4 */
	// End Line: 147

char * Replay_Compress__FPc(char *uncompressed_data)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  bVar2 = false;
  iVar6 = 1;
  pcVar5 = &CHAR_00h_8011db99;
  pcVar7 = uncompressed_data + 0x20;
  do {
    cVar1 = *uncompressed_data;
    iVar4 = 0;
    do {
      uncompressed_data = uncompressed_data + 1;
      iVar4 = iVar4 + 1;
      if (*uncompressed_data != cVar1) break;
    } while ((int)uncompressed_data < (int)pcVar7);
    if (iVar4 < 3) {
      iVar3 = 0;
      if (0 < iVar4) {
        do {
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar3 < iVar4);
      }
    }
    else {
      *pcVar5 = -1;
      pcVar5 = pcVar5 + 3;
      (&CHAR_00h_8011db99)[iVar6] = (char)iVar4;
      (&CHAR_00h_8011db9a)[iVar6] = cVar1;
      iVar6 = iVar6 + 3;
    }
    if ((int)pcVar7 <= (int)uncompressed_data) {
      bVar2 = true;
    }
    if (bVar2) {
      compressed_data = (char)iVar6;
      (&compressed_data)[iVar6] = '\0';
      return &compressed_data;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// char * /*$ra*/ Replay_Decompress__FPc(char *compressed_data /*$a0*/)
 // line 127, offset 0x800b3d10
	/* begin block 1 */
		// Start line: 128
		// Start offset: 0x800B3D10
		// Variables:
	// 		int i; // $v1
	// 		int data_size; // $t1
	// 		int count; // $a3
	// 		int c_pointer; // $t0
	// 		char current_byte; // $v0
	/* end block 1 */
	// End offset: 0x800B3D94
	// End Line: 162

	/* begin block 2 */
		// Start line: 255
	/* end block 2 */
	// End Line: 256

	/* begin block 3 */
		// Start line: 261
	/* end block 3 */
	// End Line: 262

	/* begin block 4 */
		// Start line: 261
	/* end block 4 */
	// End Line: 262

	/* begin block 5 */
		// Start line: 269
	/* end block 5 */
	// End Line: 270

char * Replay_Decompress__FPc(char *compressed_data)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  bVar1 = *compressed_data;
  iVar5 = 1;
  if (1 < bVar1) {
    compressed_data = compressed_data + 1;
    pcVar4 = &uncompressed_data;
    do {
      if (*compressed_data == -1) {
        bVar2 = compressed_data[1];
        iVar3 = 0;
        if (bVar2 != 0) {
          do {
            iVar3 = iVar3 + 1;
            *pcVar4 = compressed_data[2];
            pcVar4 = pcVar4 + 1;
          } while (iVar3 < (int)(uint)bVar2);
        }
        compressed_data = compressed_data + 3;
        iVar5 = iVar5 + 3;
      }
      else {
        *pcVar4 = *compressed_data;
        pcVar4 = pcVar4 + 1;
        compressed_data = compressed_data + 1;
        iVar5 = iVar5 + 1;
      }
    } while (iVar5 < (int)(uint)bVar1);
  }
  return &uncompressed_data;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_InitReplay__Fv()
 // line 169, offset 0x800b3da0
	/* begin block 1 */
		// Start line: 170
		// Start offset: 0x800B3DA0

		/* begin block 1.1 */
			// Start line: 170
			// Start offset: 0x800B3DA0

			/* begin block 1.1.1 */
				// Start line: 181
				// Start offset: 0x800B3DD8
				// Variables:
			// 		struct GameSetup_tUserSetting temp; // stack offset -216
			/* end block 1.1.1 */
			// End offset: 0x800B3EBC
			// End Line: 189
		/* end block 1.1 */
		// End offset: 0x800B3F34
		// End Line: 195
	/* end block 1 */
	// End offset: 0x800B3F34
	// End Line: 195

	/* begin block 2 */
		// Start line: 342
	/* end block 2 */
	// End Line: 343

	/* begin block 3 */
		// Start line: 350
	/* end block 3 */
	// End Line: 351

	/* begin block 4 */
		// Start line: 350
	/* end block 4 */
	// End Line: 351

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Replay_InitReplay__Fv(void)

{
  GameSetup_tUserSetting *pGVar1;
  GameSetup_tData *pGVar2;
  tReplayBuffer *ptVar3;
  GameSetup_tUserSetting *pGVar4;
  GameSetup_tData *pGVar5;
  int *piVar6;
  int *piVar7;
  tReplayBuffer *ptVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_d8 [48];
  int aiStack24 [4];
  
  Replay_ReplayMode = GameSetup_gData.replayMode;
  Replay_LoadCameraFile__Fv();
  if (Replay_ReplayMode == 2) {
    pGVar1 = &GameSetup_gData.userSetting;
    piVar7 = local_d8;
    do {
      piVar6 = piVar7;
      pGVar4 = pGVar1;
      iVar9 = pGVar4->display;
      iVar10 = pGVar4->bestlap;
      iVar11 = pGVar4->audioMode;
      *piVar6 = pGVar4->language;
      piVar6[1] = iVar9;
      piVar6[2] = iVar10;
      piVar6[3] = iVar11;
      pGVar1 = (GameSetup_tUserSetting *)&pGVar4->musicLevel;
      piVar7 = piVar6 + 4;
    } while ((GameSetup_tUserSetting *)&pGVar4->musicLevel !=
             (GameSetup_tUserSetting *)(GameSetup_gData.userSetting.playlist + 0x25));
    iVar9 = pGVar4->sfxLevel;
    iVar10 = pGVar4->engineLevel;
    piVar6[4] = GameSetup_gData.userSetting.playlist[37];
    piVar6[5] = iVar9;
    piVar6[6] = iVar10;
    Replay_LoadReplay__Fv();
    ptVar8 = &Replay_ReplayBuffer;
    pGVar2 = &GameSetup_gData;
    do {
      pGVar5 = pGVar2;
      ptVar3 = ptVar8;
      iVar9 = (ptVar3->gameSetup).numLaps;
      iVar10 = (ptVar3->gameSetup).skill;
      iVar11 = (ptVar3->gameSetup).commMode;
      pGVar5->raceType = (ptVar3->gameSetup).raceType;
      pGVar5->numLaps = iVar9;
      pGVar5->skill = iVar10;
      pGVar5->commMode = iVar11;
      ptVar8 = (tReplayBuffer *)&(ptVar3->gameSetup).tournamentMultiplier;
      pGVar2 = (GameSetup_tData *)&pGVar5->tournamentMultiplier;
    } while (ptVar8 != (tReplayBuffer *)(Replay_ReplayBuffer.gameSetup.carInfo[8].Camera + 2));
    iVar9 = (ptVar3->gameSetup).cops;
    ((GameSetup_tData *)&pGVar5->tournamentMultiplier)->raceType =
         Replay_ReplayBuffer.gameSetup.carInfo[8].Camera[2];
    pGVar5->cops = iVar9;
    pGVar1 = &GameSetup_gData.userSetting;
    piVar7 = local_d8;
    do {
      piVar6 = piVar7;
      pGVar4 = pGVar1;
      iVar9 = piVar6[1];
      iVar10 = piVar6[2];
      iVar11 = piVar6[3];
      pGVar4->language = *piVar6;
      pGVar4->display = iVar9;
      pGVar4->bestlap = iVar10;
      pGVar4->audioMode = iVar11;
      piVar7 = piVar6 + 4;
      pGVar1 = (GameSetup_tUserSetting *)&pGVar4->musicLevel;
    } while (piVar7 != aiStack24);
    iVar9 = piVar6[5];
    iVar10 = piVar6[6];
    ((GameSetup_tUserSetting *)&pGVar4->musicLevel)->language = *piVar7;
    pGVar4->sfxLevel = iVar9;
    pGVar4->engineLevel = iVar10;
    Replay_ReplayGetPtr = 0;
    Replay_Size = Replay_ReplayBuffer.size;
  }
  else {
    pGVar2 = &GameSetup_gData;
    ptVar8 = &Replay_ReplayBuffer;
    do {
      ptVar3 = ptVar8;
      pGVar5 = pGVar2;
      iVar9 = pGVar5->numLaps;
      iVar10 = pGVar5->skill;
      iVar11 = pGVar5->commMode;
      (ptVar3->gameSetup).raceType = pGVar5->raceType;
      (ptVar3->gameSetup).numLaps = iVar9;
      (ptVar3->gameSetup).skill = iVar10;
      (ptVar3->gameSetup).commMode = iVar11;
      ptVar8 = (tReplayBuffer *)&(ptVar3->gameSetup).tournamentMultiplier;
      pGVar2 = (GameSetup_tData *)&pGVar5->tournamentMultiplier;
    } while ((GameSetup_tData *)&pGVar5->tournamentMultiplier !=
             (GameSetup_tData *)(GameSetup_gData.carInfo[8].Camera + 2));
    iVar9 = pGVar5->cops;
    (ptVar8->gameSetup).raceType = GameSetup_gData.carInfo[8].Camera[2];
    (ptVar3->gameSetup).cops = iVar9;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_ResetReplay__Fv()
 // line 202, offset 0x800b3f44
	/* begin block 1 */
		// Start line: 203
		// Start offset: 0x800B3F44
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x800B4070
	// End Line: 264

	/* begin block 2 */
		// Start line: 413
	/* end block 2 */
	// End Line: 414

	/* begin block 3 */
		// Start line: 421
	/* end block 3 */
	// End Line: 422

	/* begin block 4 */
		// Start line: 421
	/* end block 4 */
	// End Line: 422

	/* begin block 5 */
		// Start line: 425
	/* end block 5 */
	// End Line: 426

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Replay_ResetReplay__Fv(void)

{
  int player;
  int *piVar1;
  int iVar2;
  tReplayCameraModes *ptVar3;
  Car_tObj **ppCVar4;
  
  if ((uint)Replay_ReplayMode < 2) {
    iVar2 = 0x5fff;
    player = -0x7fee2e95;
    do {
      *(undefined *)(player + 0xa2c) = 0;
      iVar2 = iVar2 + -1;
      player = player + -1;
    } while (-1 < iVar2);
    Replay_ReplayStorePtr = 0;
    Replay_ReplayGetPtr = 0;
  }
  else {
    if (1 < Replay_ReplayMode) {
      player = 0;
      ptVar3 = &Replay_ReplayCamera;
      ppCVar4 = &Cars_gHumanRaceCarList9;
      Replay_ReplayInterface.pause = 0;
      Replay_ReplayInterface.speed = 2;
      Replay_ReplayGetPtr = 0;
      Replay_ReplayInterface.end = 0;
      Replay_ReplayInterface.camera = 0;
      Replay_ReplayInterface.selection = 4;
      Replay_ReplayInterface.depressed = 0;
      Replay_ReplayInterface.changeCamera = 0;
      do {
        if (numValidCams == 0) {
          iVar2 = 4;
        }
        else {
          if ((GameSetup_gData.commMode == 1) || (player == 0)) {
            Replay_ReplayFindClosestCamera__Fii(player,(int)((*ppCVar4)->N).simRoadInfo.slice);
          }
          iVar2 = 0x13;
        }
        ptVar3->cameraMode = iVar2;
        ptVar3->cutToNextCamera = 0;
        ptVar3 = ptVar3 + 1;
        player = player + 1;
        ppCVar4 = ppCVar4 + 1;
      } while (player < 2);
    }
  }
  player = 1;
  piVar1 = &INT_8013d404;
  do {
    *piVar1 = 0;
    player = player + -1;
    piVar1 = piVar1 + -1;
  } while (-1 < player);
  StatsTimer = 0;
  INT_8013d99c = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_StoringReplay__Fv()
 // line 270, offset 0x800b409c
	/* begin block 1 */
		// Start line: 271
		// Start offset: 0x800B409C
	/* end block 1 */
	// End offset: 0x800B409C
	// End Line: 271

	/* begin block 2 */
		// Start line: 576
	/* end block 2 */
	// End Line: 577

	/* begin block 3 */
		// Start line: 582
	/* end block 3 */
	// End Line: 583

	/* begin block 4 */
		// Start line: 582
	/* end block 4 */
	// End Line: 583

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Replay_StoringReplay__Fv(void)

{
  Replay_SaveReplay__Fv();
  numValidCams = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_StoringControllerData__FG15tControllerData(struct tControllerData controllerdata /*stack 0*/)
 // line 283, offset 0x800b40bc
	/* begin block 1 */
		// Start line: 284
		// Start offset: 0x800B40BC
		// Variables:
	// 		char packeddata[33]; // stack offset -48
	/* end block 1 */
	// End offset: 0x800B4478
	// End Line: 308

	/* begin block 2 */
		// Start line: 600
	/* end block 2 */
	// End Line: 601

	/* begin block 3 */
		// Start line: 608
	/* end block 3 */
	// End Line: 609

	/* begin block 4 */
		// Start line: 608
	/* end block 4 */
	// End Line: 609

	/* begin block 5 */
		// Start line: 611
	/* end block 5 */
	// End Line: 612

void Replay_StoringControllerData__FG15tControllerData(tControllerData controllerdata)

{
  undefined4 *puVar1;
  undefined4 *__src;
  undefined4 *__src_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined local_res0 [16];
  byte local_30 [40];
  
  if (Replay_ReplayStorePtr + 0x80 < 0x6000) {
    puVar1 = (undefined4 *)Replay_Compress__FPc((char *)register0x00000074);
    __src_00 = (undefined4 *)local_30;
    if (((uint)puVar1 & 3) == 0) {
      __src = puVar1 + 8;
      do {
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *__src_00 = *puVar1;
        __src_00[1] = uVar2;
        __src_00[2] = uVar3;
        __src_00[3] = uVar4;
        puVar1 = puVar1 + 4;
        __src_00 = __src_00 + 4;
      } while (puVar1 != __src);
    }
    else {
      __src = puVar1 + 8;
      do {
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *__src_00 = *puVar1;
        __src_00[1] = uVar2;
        __src_00[2] = uVar3;
        __src_00[3] = uVar4;
        puVar1 = puVar1 + 4;
        __src_00 = __src_00 + 4;
      } while (puVar1 != __src);
    }
    __src = (undefined4 *)local_30;
    *(char *)__src_00 = *(char *)puVar1;
    memcpy(Replay_ReplayBuffer.buffer + Replay_ReplayStorePtr,__src,(uint)local_30[0]);
    Replay_ReplayStorePtr = Replay_ReplayStorePtr + (uint)local_30[0];
    puVar1 = (undefined4 *)Replay_Compress__FPc(controllerdata.steering + 0x10);
    if (((uint)puVar1 & 3) == 0) {
      __src_00 = puVar1 + 8;
      do {
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *__src = *puVar1;
        __src[1] = uVar2;
        __src[2] = uVar3;
        __src[3] = uVar4;
        puVar1 = puVar1 + 4;
        __src = __src + 4;
      } while (puVar1 != __src_00);
    }
    else {
      __src_00 = puVar1 + 8;
      do {
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *__src = *puVar1;
        __src[1] = uVar2;
        __src[2] = uVar3;
        __src[3] = uVar4;
        puVar1 = puVar1 + 4;
        __src = __src + 4;
      } while (puVar1 != __src_00);
    }
    __src_00 = (undefined4 *)local_30;
    *(char *)__src = *(char *)puVar1;
    memcpy(Replay_ReplayBuffer.buffer + Replay_ReplayStorePtr,__src_00,(uint)local_30[0]);
    Replay_ReplayStorePtr = Replay_ReplayStorePtr + (uint)local_30[0];
    puVar1 = (undefined4 *)Replay_Compress__FPc((char *)(controllerdata.gas + 0x10));
    if (((uint)puVar1 & 3) == 0) {
      __src = puVar1 + 8;
      do {
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *__src_00 = *puVar1;
        __src_00[1] = uVar2;
        __src_00[2] = uVar3;
        __src_00[3] = uVar4;
        puVar1 = puVar1 + 4;
        __src_00 = __src_00 + 4;
      } while (puVar1 != __src);
    }
    else {
      __src = puVar1 + 8;
      do {
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *__src_00 = *puVar1;
        __src_00[1] = uVar2;
        __src_00[2] = uVar3;
        __src_00[3] = uVar4;
        puVar1 = puVar1 + 4;
        __src_00 = __src_00 + 4;
      } while (puVar1 != __src);
    }
    __src = (undefined4 *)local_30;
    *(char *)__src_00 = *(char *)puVar1;
    memcpy(Replay_ReplayBuffer.buffer + Replay_ReplayStorePtr,__src,(uint)local_30[0]);
    Replay_ReplayStorePtr = Replay_ReplayStorePtr + (uint)local_30[0];
    puVar1 = (undefined4 *)Replay_Compress__FPc((char *)(controllerdata.brake + 0x10));
    __src_00 = puVar1 + 8;
    if (((uint)puVar1 & 3) == 0) {
      do {
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *__src = *puVar1;
        __src[1] = uVar2;
        __src[2] = uVar3;
        __src[3] = uVar4;
        puVar1 = puVar1 + 4;
        __src = __src + 4;
      } while (puVar1 != __src_00);
    }
    else {
      do {
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *__src = *puVar1;
        __src[1] = uVar2;
        __src[2] = uVar3;
        __src[3] = uVar4;
        puVar1 = puVar1 + 4;
        __src = __src + 4;
      } while (puVar1 != __src_00);
    }
    *(char *)__src = *(char *)puVar1;
    memcpy(Replay_ReplayBuffer.buffer + Replay_ReplayStorePtr,local_30,(uint)local_30[0]);
    Replay_ReplayStorePtr = Replay_ReplayStorePtr + (uint)local_30[0];
  }
  else {
    Replay_ReplayMode = 1;
    Replay_Size = simGlobal.gameTicks;
  }
  return;
}



// decompiled code
// original method signature: 
// struct tControllerData /*$ra*/ Replay_RetreivingControllerData__Fv()
 // line 314, offset 0x800b4488
	/* begin block 1 */
		// Start line: 315
		// Start offset: 0x800B4488
		// Variables:
	// 		struct tControllerData controllerdata; // stack offset -192
	// 		char packeddata[33]; // stack offset -64
	/* end block 1 */
	// End offset: 0x800B4804
	// End Line: 335

	/* begin block 2 */
		// Start line: 671
	/* end block 2 */
	// End Line: 672

	/* begin block 3 */
		// Start line: 678
	/* end block 3 */
	// End Line: 679

	/* begin block 4 */
		// Start line: 678
	/* end block 4 */
	// End Line: 679

tControllerData * Replay_RetreivingControllerData__Fv(tControllerData *__return_storage_ptr__)

{
  undefined4 *puVar1;
  tControllerData *ptVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  byte local_40 [40];
  
  memcpy(local_40,Replay_ReplayBuffer.buffer + Replay_ReplayGetPtr,
         (uint)(byte)Replay_ReplayBuffer.buffer[Replay_ReplayGetPtr]);
  puVar1 = (undefined4 *)Replay_Decompress__FPc((char *)local_40);
  local_c0 = *puVar1;
  local_bc = puVar1[1];
  local_b8 = puVar1[2];
  local_b4 = puVar1[3];
  local_b0 = puVar1[4];
  local_ac = puVar1[5];
  local_a8 = puVar1[6];
  local_a4 = puVar1[7];
  Replay_ReplayGetPtr = Replay_ReplayGetPtr + (uint)local_40[0];
  memcpy(local_40,Replay_ReplayBuffer.buffer + Replay_ReplayGetPtr,
         (uint)(byte)Replay_ReplayBuffer.buffer[Replay_ReplayGetPtr]);
  puVar1 = (undefined4 *)Replay_Decompress__FPc((char *)local_40);
  local_a0 = *puVar1;
  local_9c = puVar1[1];
  local_98 = puVar1[2];
  local_94 = puVar1[3];
  local_90 = puVar1[4];
  local_8c = puVar1[5];
  local_88 = puVar1[6];
  local_84 = puVar1[7];
  Replay_ReplayGetPtr = Replay_ReplayGetPtr + (uint)local_40[0];
  memcpy(local_40,Replay_ReplayBuffer.buffer + Replay_ReplayGetPtr,
         (uint)(byte)Replay_ReplayBuffer.buffer[Replay_ReplayGetPtr]);
  puVar1 = (undefined4 *)Replay_Decompress__FPc((char *)local_40);
  local_80 = *puVar1;
  local_7c = puVar1[1];
  local_78 = puVar1[2];
  local_74 = puVar1[3];
  local_70 = puVar1[4];
  local_6c = puVar1[5];
  local_68 = puVar1[6];
  local_64 = puVar1[7];
  Replay_ReplayGetPtr = Replay_ReplayGetPtr + (uint)local_40[0];
  memcpy(local_40,Replay_ReplayBuffer.buffer + Replay_ReplayGetPtr,
         (uint)(byte)Replay_ReplayBuffer.buffer[Replay_ReplayGetPtr]);
  Replay_Decompress__FPc((char *)local_40);
  Replay_ReplayGetPtr = Replay_ReplayGetPtr + (uint)local_40[0];
  puVar1 = &local_c0;
  ptVar2 = __return_storage_ptr__;
  if (((uint)__return_storage_ptr__ & 3) == 0) {
    do {
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)ptVar2->steering = *puVar1;
      *(undefined4 *)(ptVar2->steering + 4) = uVar3;
      *(undefined4 *)(ptVar2->steering + 8) = uVar4;
      *(undefined4 *)(ptVar2->steering + 0xc) = uVar5;
      puVar1 = puVar1 + 4;
      ptVar2 = (tControllerData *)(ptVar2->steering + 0x10);
    } while (puVar1 != (undefined4 *)local_40);
  }
  else {
    do {
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)ptVar2->steering = *puVar1;
      *(undefined4 *)(ptVar2->steering + 4) = uVar3;
      *(undefined4 *)(ptVar2->steering + 8) = uVar4;
      *(undefined4 *)(ptVar2->steering + 0xc) = uVar5;
      puVar1 = puVar1 + 4;
      ptVar2 = (tControllerData *)(ptVar2->steering + 0x10);
    } while (puVar1 != (undefined4 *)local_40);
  }
  return __return_storage_ptr__;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_SaveInput__Fi(int car /*$s0*/)
 // line 342, offset 0x800b4824
	/* begin block 1 */
		// Start line: 343
		// Start offset: 0x800B4824
	/* end block 1 */
	// End offset: 0x800B4B28
	// End Line: 365

	/* begin block 2 */
		// Start line: 767
	/* end block 2 */
	// End Line: 768

	/* begin block 3 */
		// Start line: 774
	/* end block 3 */
	// End Line: 775

	/* begin block 4 */
		// Start line: 774
	/* end block 4 */
	// End Line: 775

/* WARNING: Removing unreachable block (ram,0x800b4a90) */
/* WARNING: Removing unreachable block (ram,0x800b4a94) */
/* WARNING: Removing unreachable block (ram,0x800b4ae0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Replay_SaveInput__Fi(int car)

{
  int iVar1;
  int *piVar2;
  Car_tObj **ppCVar3;
  tControllerData *ptVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_8;
  undefined4 uVar8;
  undefined4 local_4;
  undefined8 uStackX0;
  undefined in_stack_ffffff88 [112];
  
  Input_Fetch__Fi(car);
  piVar2 = &Replay_ReplayCounter + car;
  iVar1 = (int)Input_gSim.steering;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  controlData[car].steering[*piVar2] = (char)(iVar1 >> 2) + '@';
  controlData[car].gas[*piVar2] = Input_gSim.gas >> 3;
  controlData[car].brake[*piVar2] = Input_gSim.brake >> 3;
  controlData[car].states[*piVar2] = Input_gSim.flags;
  ppCVar3 = &Cars_gHumanRaceCarList9 + car;
  if ((*ppCVar3)->carInfo->RampSteering != 0) {
    controlData[car].steering[*piVar2] = controlData[car].steering[*piVar2] | 0x80;
  }
  if ((*ppCVar3)->carInfo->RampGas != 0) {
    controlData[car].gas[*piVar2] = controlData[car].gas[*piVar2] | 0x80;
  }
  if ((*ppCVar3)->carInfo->RampBrake != 0) {
    controlData[car].brake[*piVar2] = controlData[car].brake[*piVar2] | 0x80;
  }
  iVar1 = *piVar2;
  *piVar2 = iVar1 + 1;
  if (iVar1 + 1 == 0x20) {
    puVar5 = (undefined4 *)&stack0xffffff88;
    ptVar4 = (tControllerData *)(controlData[car].steering + 0x10);
    *piVar2 = 0;
    do {
      uVar6 = *(undefined4 *)(ptVar4->steering + 4);
      uVar7 = *(undefined4 *)(ptVar4->steering + 8);
      uVar8 = *(undefined4 *)(ptVar4->steering + 0xc);
      *puVar5 = *(undefined4 *)ptVar4->steering;
      puVar5[1] = uVar6;
      puVar5[2] = uVar7;
      puVar5[3] = uVar8;
      ptVar4 = (tControllerData *)(ptVar4->steering + 0x10);
      puVar5 = puVar5 + 4;
    } while (ptVar4 != controlData + car + 1);
    Replay_StoringControllerData__FG15tControllerData
              ((tControllerData)
               CONCAT8120(uStackX0,CONCAT4116(local_4,CONCAT4112(local_8,in_stack_ffffff88))));
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_GetInput__Fi(int car /*$s1*/)
 // line 371, offset 0x800b4b38
	/* begin block 1 */
		// Start line: 372
		// Start offset: 0x800B4B38
	/* end block 1 */
	// End offset: 0x800B4F84
	// End Line: 442

	/* begin block 2 */
		// Start line: 828
	/* end block 2 */
	// End Line: 829

	/* begin block 3 */
		// Start line: 835
	/* end block 3 */
	// End Line: 836

	/* begin block 4 */
		// Start line: 835
	/* end block 4 */
	// End Line: 836

/* WARNING: Removing unreachable block (ram,0x800b4bbc) */
/* WARNING: Removing unreachable block (ram,0x800b4bc0) */
/* WARNING: Removing unreachable block (ram,0x800b4c0c) */

void Replay_GetInput__Fi(int car)

{
  bool bVar1;
  tControllerData *ptVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  tControllerData *ptVar7;
  tControllerData local_90;
  
  Input_Fetch__Fi(car);
  if ((&Replay_ReplayCounter)[car] == 0) {
    if (Replay_ReplayBuffer.buffer[Replay_ReplayGetPtr] == '\0') {
      Replay_ReplayMode = 3;
    }
    else {
      ptVar7 = controlData + car;
      Replay_RetreivingControllerData__Fv(&local_90);
      ptVar2 = &local_90;
      do {
        uVar4 = *(undefined4 *)(ptVar2->steering + 4);
        uVar5 = *(undefined4 *)(ptVar2->steering + 8);
        uVar6 = *(undefined4 *)(ptVar2->steering + 0xc);
        *(undefined4 *)ptVar7->steering = *(undefined4 *)ptVar2->steering;
        *(undefined4 *)(ptVar7->steering + 4) = uVar4;
        *(undefined4 *)(ptVar7->steering + 8) = uVar5;
        *(undefined4 *)(ptVar7->steering + 0xc) = uVar6;
        ptVar2 = (tControllerData *)(ptVar2->steering + 0x10);
        ptVar7 = (tControllerData *)(ptVar7->steering + 0x10);
      } while (ptVar2 != (tControllerData *)&stack0xfffffff0);
    }
  }
  if (Replay_ReplayMode == 2) {
    if (((int)controlData[car].steering[(&Replay_ReplayCounter)[car]] & 0x80U) == 0) {
      (&Cars_gHumanRaceCarList9)[car]->carInfo->RampSteering = 0;
    }
    else {
      (&Cars_gHumanRaceCarList9)[car]->carInfo->RampSteering = 1;
    }
    if ((controlData[car].gas[(&Replay_ReplayCounter)[car]] & 0x80) == 0) {
      (&Cars_gHumanRaceCarList9)[car]->carInfo->RampGas = 0;
    }
    else {
      (&Cars_gHumanRaceCarList9)[car]->carInfo->RampGas = 1;
    }
    if ((controlData[car].brake[(&Replay_ReplayCounter)[car]] & 0x80) == 0) {
      (&Cars_gHumanRaceCarList9)[car]->carInfo->RampBrake = 0;
    }
    else {
      (&Cars_gHumanRaceCarList9)[car]->carInfo->RampBrake = 1;
    }
    piVar3 = &Replay_ReplayCounter + car;
    controlData[car].steering[*piVar3] = controlData[car].steering[*piVar3] & 0x7f;
    controlData[car].gas[*piVar3] = controlData[car].gas[*piVar3] & 0x7f;
    controlData[car].brake[*piVar3] = controlData[car].brake[*piVar3] & 0x7f;
    Input_gSim.steering = controlData[car].steering[*piVar3] * '\x04';
    Input_gSim.gas = controlData[car].gas[*piVar3] << 3;
    Input_gSim.brake = controlData[car].brake[*piVar3] << 3;
    Input_gSim.flags = controlData[car].states[*piVar3];
  }
  else {
    if (Replay_ReplayMode == 3) {
      Input_gSim.steering = '\0';
      Input_gSim.gas = '\0';
      Input_gSim.brake = '\0';
      Input_gSim.flags = '\0';
    }
  }
  bVar1 = numValidCams != 0;
  (&Replay_ReplayCounter)[car] = (&Replay_ReplayCounter)[car] + 1;
  if (((bVar1) && ((&Replay_ReplayCamera)[car].cameraMode == 0x13)) && (simGlobal.gameStarted != 0))
  {
    Replay_ReplayChooseCamera__Fii(car,(int)((&Cars_gHumanRaceCarList9)[car]->N).simRoadInfo.slice);
  }
  if ((&Replay_ReplayCounter)[car] == 0x20) {
    (&Replay_ReplayCounter)[car] = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_SaveReplay__Fv()
 // line 447, offset 0x800b4f98
	/* begin block 1 */
		// Start line: 448
		// Start offset: 0x800B4F98
	/* end block 1 */
	// End offset: 0x800B4FF8
	// End Line: 452

	/* begin block 2 */
		// Start line: 984
	/* end block 2 */
	// End Line: 985

	/* begin block 3 */
		// Start line: 990
	/* end block 3 */
	// End Line: 991

	/* begin block 4 */
		// Start line: 990
	/* end block 4 */
	// End Line: 991

	/* begin block 5 */
		// Start line: 991
	/* end block 5 */
	// End Line: 992

	/* begin block 6 */
		// Start line: 991
	/* end block 6 */
	// End Line: 992

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Replay_SaveReplay__Fv(void)

{
  GameSetup_tData *pGVar1;
  GameSetup_tData *pGVar2;
  tReplayBuffer *ptVar3;
  tReplayBuffer *ptVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (Replay_ReplayMode == 0) {
    Replay_Size = simGlobal.gameTicks;
  }
  pGVar1 = &GameSetup_gData;
  ptVar4 = &Replay_ReplayBuffer;
  do {
    ptVar3 = ptVar4;
    pGVar2 = pGVar1;
    iVar5 = pGVar2->numLaps;
    iVar6 = pGVar2->skill;
    iVar7 = pGVar2->commMode;
    (ptVar3->gameSetup).raceType = pGVar2->raceType;
    (ptVar3->gameSetup).numLaps = iVar5;
    (ptVar3->gameSetup).skill = iVar6;
    (ptVar3->gameSetup).commMode = iVar7;
    ptVar4 = (tReplayBuffer *)&(ptVar3->gameSetup).tournamentMultiplier;
    pGVar1 = (GameSetup_tData *)&pGVar2->tournamentMultiplier;
  } while ((GameSetup_tData *)&pGVar2->tournamentMultiplier !=
           (GameSetup_tData *)(GameSetup_gData.carInfo[8].Camera + 2));
  iVar5 = pGVar2->cops;
  (ptVar4->gameSetup).raceType = GameSetup_gData.carInfo[8].Camera[2];
  (ptVar3->gameSetup).cops = iVar5;
  Replay_ReplayBuffer.gameSetup.replayMode = 2;
  Replay_ReplayBuffer.size = Replay_Size;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_LoadReplay__Fv()
 // line 469, offset 0x800b5024
	/* begin block 1 */
		// Start line: 470
		// Start offset: 0x800B5024
	/* end block 1 */
	// End offset: 0x800B5024
	// End Line: 470

	/* begin block 2 */
		// Start line: 1019
	/* end block 2 */
	// End Line: 1020

	/* begin block 3 */
		// Start line: 1035
	/* end block 3 */
	// End Line: 1036

	/* begin block 4 */
		// Start line: 1035
	/* end block 4 */
	// End Line: 1036

	/* begin block 5 */
		// Start line: 1058
	/* end block 5 */
	// End Line: 1059

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Replay_LoadReplay__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_DoReplay__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 498, offset 0x800b502c
	/* begin block 1 */
		// Start line: 499
		// Start offset: 0x800B502C
	/* end block 1 */
	// End offset: 0x800B5060
	// End Line: 507

	/* begin block 2 */
		// Start line: 1087
	/* end block 2 */
	// End Line: 1088

	/* begin block 3 */
		// Start line: 1093
	/* end block 3 */
	// End Line: 1094

	/* begin block 4 */
		// Start line: 1093
	/* end block 4 */
	// End Line: 1094

	/* begin block 5 */
		// Start line: 1098
	/* end block 5 */
	// End Line: 1099

void Replay_DoReplay__FP8Car_tObj(Car_tObj *carObj)

{
  if ((uint)Replay_ReplayMode < 2) {
    Replay_SaveInput__Fi(carObj->humanIndex);
  }
  else {
    Replay_GetInput__Fi(carObj->humanIndex);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_GetInterfaceKey__Fv()
 // line 516, offset 0x800b5070
	/* begin block 1 */
		// Start line: 517
		// Start offset: 0x800B5070
		// Variables:
	// 		int i; // $s0
	// 		int Cameras; // $s4
	/* end block 1 */
	// End offset: 0x800B54D8
	// End Line: 648

	/* begin block 2 */
		// Start line: 1124
	/* end block 2 */
	// End Line: 1125

	/* begin block 3 */
		// Start line: 1134
	/* end block 3 */
	// End Line: 1135

	/* begin block 4 */
		// Start line: 1134
	/* end block 4 */
	// End Line: 1135

	/* begin block 5 */
		// Start line: 1139
	/* end block 5 */
	// End Line: 1140

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Replay_GetInterfaceKey__Fv(void)

{
  bool bVar1;
  int cviewP;
  int iVar2;
  Car_tObj **ppCVar3;
  camera_info *pcVar4;
  tReplayCameraModes *ptVar5;
  int iVar6;
  
  iVar6 = 1;
  if (GameSetup_gData.commMode == 1) {
    iVar6 = 2;
  }
  Replay_ReplayInterface.changeCamera = 0;
  if (Replay_ReplayInterface.depressed < 1) {
    if (Replay_ReplayInterface.statsScreen == 0) {
      cviewP = Input_Interface__FUli(3,1);
      if (cviewP == 0) {
        cviewP = Input_Interface__FUli(4,1);
        if (cviewP == 0) {
          cviewP = Input_Interface__FUli(5,1);
          if (cviewP == 0) {
            iVar6 = Input_Interface__FUli(6,1);
            if (iVar6 == 0) {
              iVar6 = Input_Interface__FUli(0x19,1);
              if (iVar6 != 0) {
                StatsTimer = 0;
                INT_8013d99c = 0;
                Replay_ReplayInterface.statsScreen = 1;
                AudioCmn_PlayPauseSound__Fi(4);
              }
            }
            else {
              Replay_ReplayInterface.depressed = 8;
              Replay_ReplayInterface.end = 1;
            }
          }
          else {
            AudioCmn_PlayPauseSound__Fi(4);
            Replay_ReplayInterface.depressed = 8;
            switch(Replay_ReplayInterface.selection) {
            case 0:
              Replay_ReplayInterface.end = 1;
              GameSetup_gData.instantReplay = 1;
              break;
            case 1:
              Replay_ReplayInterface.end = 1;
              break;
            case 2:
              Replay_ReplayInterface.pause = Replay_ReplayInterface.pause ^ 1;
              break;
            case 3:
              if (GameSetup_gData.commMode == 1) {
                Replay_ReplayInterface.speed = (Replay_ReplayInterface.speed + 1) % 3;
              }
              else {
                cviewP = Replay_ReplayInterface.speed + 1;
                iVar6 = cviewP;
                if (cviewP < 0) {
                  iVar6 = Replay_ReplayInterface.speed + 4;
                }
                Replay_ReplayInterface.speed = cviewP + (iVar6 >> 2) * -4;
              }
              break;
            case 4:
              Replay_ReplayInterface.changeCamera = 1;
              Replay_ReplayInterface.camera = (Replay_ReplayInterface.camera + 1) % 9;
              if (ReplayCameraList[Replay_ReplayInterface.camera] == 0x13) {
                cviewP = 0;
                if (iVar6 != 0) {
                  ptVar5 = &Replay_ReplayCamera;
                  ppCVar3 = &Cars_gHumanRaceCarList9;
                  pcVar4 = &Camera_gInfo;
                  do {
                    if (numValidCams == 0) {
                      Camera_SetMode__Fii(cviewP,10);
                    }
                    else {
                      *(Car_tObj **)&pcVar4->anchor = *ppCVar3;
                      *(Car_tObj **)&pcVar4->target = *ppCVar3;
                      Replay_ReplayFindClosestCamera__Fii
                                (cviewP,(int)((*ppCVar3)->N).simRoadInfo.slice);
                      ptVar5->cameraMode = 0x13;
                    }
                    ptVar5 = ptVar5 + 1;
                    ppCVar3 = ppCVar3 + 1;
                    cviewP = cviewP + 1;
                    pcVar4 = (camera_info *)&(pcVar4->slicePos).simQuad;
                  } while (cviewP < iVar6);
                }
              }
              else {
                if (iVar6 != 0) {
                  ppCVar3 = &Cars_gHumanRaceCarList9;
                  pcVar4 = &Camera_gInfo;
                  ptVar5 = &Replay_ReplayCamera;
                  cviewP = 0;
                  do {
                    ptVar5->defaultCamera = 0;
                    pcVar4->twist = 0;
                    *(Car_tObj **)&pcVar4->anchor = *ppCVar3;
                    *(Car_tObj **)&pcVar4->target = *ppCVar3;
                    iVar2 = cviewP + 1;
                    Camera_SetMode__Fii(cviewP,ReplayCameraList[Replay_ReplayInterface.camera]);
                    ppCVar3 = ppCVar3 + 1;
                    pcVar4 = (camera_info *)&(pcVar4->slicePos).simQuad;
                    ptVar5->cameraMode = ReplayCameraList[Replay_ReplayInterface.camera];
                    ptVar5 = ptVar5 + 1;
                    cviewP = iVar2;
                  } while (iVar2 < iVar6);
                }
              }
            }
          }
        }
        else {
          AudioCmn_PlayPauseSound__Fi(3);
          Replay_ReplayInterface.selection = (Replay_ReplayInterface.selection + 1) % 5;
        }
      }
      else {
        AudioCmn_PlayPauseSound__Fi(3);
        bVar1 = Replay_ReplayInterface.selection == 0;
        Replay_ReplayInterface.selection = Replay_ReplayInterface.selection + -1;
        if (bVar1) {
          Replay_ReplayInterface.selection = 4;
        }
      }
    }
    else {
      bVar1 = false;
      iVar6 = Input_Interface__FUli(5,1);
      if ((iVar6 != 0) || (iVar6 = Input_Interface__FUli(6,1), iVar6 != 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        Replay_ReplayInterface.depressed = 0x18;
        Replay_ReplayInterface.end = 1;
      }
      else {
        iVar6 = Input_Interface__FUli(0x19,1);
        if (iVar6 != 0) {
          AudioCmn_PlayPauseSound__Fi(4);
          Replay_ReplayInterface.statsScreen = 0;
        }
      }
    }
  }
  else {
    Replay_ReplayInterface.depressed = Replay_ReplayInterface.depressed + -1;
  }
  if (simVar.quickPauseSim != 0) {
    Camera_Update__Fv();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_LoadCameraFile__Fv()
 // line 665, offset 0x800b5500
	/* begin block 1 */
		// Start line: 666
		// Start offset: 0x800B5500

		/* begin block 1.1 */
			// Start line: 666
			// Start offset: 0x800B5500

			/* begin block 1.1.1 */
				// Start line: 671
				// Start offset: 0x800B5514
				// Variables:
			// 		struct Camera_tCamSlot *cameraFile; // $s0
			// 		char fname[80]; // stack offset -128
			// 		int bigFile; // stack offset -16

				/* begin block 1.1.1.1 */
					// Start line: 701
					// Start offset: 0x800B5580
					// Variables:
				// 		int i; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x800B55DC
				// End Line: 713

				/* begin block 1.1.1.2 */
					// Start line: 716
					// Start offset: 0x800B55DC

					/* begin block 1.1.1.2.1 */
						// Start line: 717
						// Start offset: 0x800B55E4
						// Variables:
					// 		int i; // $a3
					// 		int j; // $t1

						/* begin block 1.1.1.2.1.1 */
							// Start line: 733
							// Start offset: 0x800B566C

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 736
								// Start offset: 0x800B5680

								/* begin block 1.1.1.2.1.1.1.1 */
									// Start line: 738
									// Start offset: 0x800B568C

									/* begin block 1.1.1.2.1.1.1.1.1 */
										// Start line: 738
										// Start offset: 0x800B5694

										/* begin block 1.1.1.2.1.1.1.1.1.1 */
											// Start line: 740
											// Start offset: 0x800B56A0

											/* begin block 1.1.1.2.1.1.1.1.1.1.1 */
												// Start line: 742
												// Start offset: 0x800B56C8
												// Variables:
											// 		struct Camera_tCamSlot temp; // stack offset -48
											/* end block 1.1.1.2.1.1.1.1.1.1.1 */
											// End offset: 0x800B5788
											// End Line: 745
										/* end block 1.1.1.2.1.1.1.1.1.1 */
										// End offset: 0x800B5788
										// End Line: 745
									/* end block 1.1.1.2.1.1.1.1.1 */
									// End offset: 0x800B5788
									// End Line: 745
								/* end block 1.1.1.2.1.1.1.1 */
								// End offset: 0x800B5798
								// End Line: 747
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x800B5798
							// End Line: 747
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x800B57A0
						// End Line: 748

						/* begin block 1.1.1.2.1.2 */
							// Start line: 759
							// Start offset: 0x800B57A0

							/* begin block 1.1.1.2.1.2.1 */
								// Start line: 760
								// Start offset: 0x800B57B4
								// Variables:
							// 		int temp; // $a2
							/* end block 1.1.1.2.1.2.1 */
							// End offset: 0x800B5810
							// End Line: 768
						/* end block 1.1.1.2.1.2 */
						// End offset: 0x800B5810
						// End Line: 768
					/* end block 1.1.1.2.1 */
					// End offset: 0x800B585C
					// End Line: 777
				/* end block 1.1.1.2 */
				// End offset: 0x800B585C
				// End Line: 786
			/* end block 1.1.1 */
			// End offset: 0x800B585C
			// End Line: 786
		/* end block 1.1 */
		// End offset: 0x800B585C
		// End Line: 786
	/* end block 1 */
	// End offset: 0x800B585C
	// End Line: 786

	/* begin block 2 */
		// Start line: 1321
	/* end block 2 */
	// End Line: 1322

	/* begin block 3 */
		// Start line: 1442
	/* end block 3 */
	// End Line: 1443

	/* begin block 4 */
		// Start line: 1442
	/* end block 4 */
	// End Line: 1443

	/* begin block 5 */
		// Start line: 1445
	/* end block 5 */
	// End Line: 1446

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Replay_LoadCameraFile__Fv(void)

{
  short sVar1;
  short sVar2;
  undefined4 *puVar3;
  uint uVar4;
  Camera_tCamSlot *pCVar5;
  undefined4 *puVar6;
  char *__format;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  char acStack128 [112];
  uint local_10 [2];
  
  if (numValidCams == 0) {
    local_10[0] = 0;
    sprintf(acStack128,s__scamera_viv_8005654c,PTR_ARRAY_80116488[0]);
    FILE_addbigsync(acStack128,0x10,100,local_10);
    if (GameSetup_gData.reverseTrack == 0) {
      __format = s_tr_02d_rho_80056568;
    }
    else {
      __format = s_tr_02dr_rho_8005655c;
    }
    sprintf(acStack128,__format,GameSetup_gData.track);
    puVar3 = (undefined4 *)loadfileadrz(acStack128,0);
    numValidCams = 0;
    FILE_delbigsync(local_10[0],100);
    iVar7 = 0;
    pCVar5 = &gReplayCameraSlots;
    do {
      pCVar5->mode = '\x02';
      uVar4 = *(uint *)pCVar5;
      iVar7 = iVar7 + 1;
      (pCVar5->euler).y = -1;
      *(uint *)pCVar5 = uVar4 & 0xfffff9ff;
      pCVar5 = (Camera_tCamSlot *)&(pCVar5->euler).z;
    } while (iVar7 < 0x20);
    if (puVar3 != (undefined4 *)0x0) {
      pCVar5 = &gReplayCameraSlots;
      puVar6 = puVar3;
      do {
        uVar10 = puVar6[1];
        iVar7 = puVar6[2];
        iVar17 = puVar6[3];
        *(undefined4 *)pCVar5 = *puVar6;
        *(undefined4 *)&pCVar5->fov = uVar10;
        (pCVar5->pos).x = iVar7;
        (pCVar5->pos).y = iVar17;
        puVar6 = puVar6 + 4;
        pCVar5 = (Camera_tCamSlot *)&(pCVar5->pos).z;
      } while (puVar6 != puVar3 + 0x100);
      iVar7 = 0;
      pCVar5 = &gReplayCameraSlots;
      do {
        if (*(short *)&pCVar5->zoom == 0) {
          (pCVar5->euler).y = -1;
        }
        else {
          numValidCams = numValidCams + 1;
        }
        pCVar5 = (Camera_tCamSlot *)&(pCVar5->euler).z;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x20);
      purgememadr((int)puVar3);
      iVar7 = 0;
      while (iVar17 = 0, iVar7 < 0x1f) {
        iVar8 = 0x20;
        pCVar5 = &gReplayCameraSlots;
        while (iVar17 < 0x1f) {
          sVar1 = (pCVar5->euler).y;
          sVar2 = *(short *)((int)&gReplayCameraSlots.euler.y + iVar8);
          if (((sVar2 < sVar1) || (sVar1 < 0)) && (-1 < sVar2)) {
            uVar10 = *(undefined4 *)pCVar5;
            uVar11 = *(undefined4 *)&pCVar5->fov;
            iVar14 = (pCVar5->pos).x;
            iVar18 = (pCVar5->pos).y;
            iVar9 = (pCVar5->pos).z;
            iVar12 = pCVar5->height;
            iVar15 = pCVar5->splineOffset;
            uVar19 = *(undefined4 *)&pCVar5->euler;
            uVar13 = *(undefined4 *)((int)&gReplayCameraSlots.fov + iVar8);
            iVar16 = *(int *)((int)&gReplayCameraSlots.pos.x + iVar8);
            iVar20 = *(int *)((int)&gReplayCameraSlots.pos.y + iVar8);
            *(undefined4 *)pCVar5 = *(undefined4 *)(&gReplayCameraSlots.mode + iVar8);
            *(undefined4 *)&pCVar5->fov = uVar13;
            (pCVar5->pos).x = iVar16;
            (pCVar5->pos).y = iVar20;
            iVar16 = *(int *)((int)&gReplayCameraSlots.height + iVar8);
            iVar20 = *(int *)((int)&gReplayCameraSlots.splineOffset + iVar8);
            uVar13 = *(undefined4 *)((int)&gReplayCameraSlots.euler.x + iVar8);
            (pCVar5->pos).z = *(int *)((int)&gReplayCameraSlots.pos.z + iVar8);
            pCVar5->height = iVar16;
            pCVar5->splineOffset = iVar20;
            *(undefined4 *)&pCVar5->euler = uVar13;
            *(undefined4 *)(&gReplayCameraSlots.mode + iVar8) = uVar10;
            *(undefined4 *)((int)&gReplayCameraSlots.fov + iVar8) = uVar11;
            *(int *)((int)&gReplayCameraSlots.pos.x + iVar8) = iVar14;
            *(int *)((int)&gReplayCameraSlots.pos.y + iVar8) = iVar18;
            *(int *)((int)&gReplayCameraSlots.pos.z + iVar8) = iVar9;
            *(int *)((int)&gReplayCameraSlots.height + iVar8) = iVar12;
            *(int *)((int)&gReplayCameraSlots.splineOffset + iVar8) = iVar15;
            *(undefined4 *)((int)&gReplayCameraSlots.euler.x + iVar8) = uVar19;
          }
          pCVar5 = (Camera_tCamSlot *)&(pCVar5->euler).z;
          iVar8 = iVar8 + 0x20;
          iVar17 = iVar17 + 1;
        }
        iVar7 = iVar7 + 1;
      }
      if (GameSetup_gData.reverseTrack != 0) {
        iVar7 = numValidCams + -1;
        iVar17 = iVar7 * 0x20;
        __format = &gReplayCameraSlots.mode + iVar17;
        sVar1 = *(short *)((int)&gReplayCameraSlots.euler + iVar17 + 2);
        while (-1 < iVar7) {
          sVar2 = sVar1;
          if (iVar7 != 0) {
            *(undefined2 *)(__format + 0x1e) = *(undefined2 *)(s__8011dbda + iVar17);
            sVar2 = gReplayCameraSlots.euler.y;
          }
          gReplayCameraSlots.euler.y = sVar2;
          iVar7 = iVar7 + -1;
          __format = __format + -0x20;
          iVar17 = iVar17 + -0x20;
        }
      }
      iVar7 = numValidCams;
      iVar17 = 0;
      if (0 < numValidCams) {
        pCVar5 = &gReplayCameraSlots;
        do {
          iVar17 = iVar17 + 1;
          *(int *)&pCVar5->fov = *(int *)&pCVar5->fov << 6;
          (pCVar5->pos).y = (pCVar5->pos).y << 6;
          (pCVar5->pos).x = (pCVar5->pos).x << 6;
          pCVar5 = (Camera_tCamSlot *)&(pCVar5->euler).z;
        } while (iVar17 < iVar7);
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_ReplayChooseCamera__Fii(int player /*$t2*/, int slice /*$a1*/)
 // line 797, offset 0x800b586c
	/* begin block 1 */
		// Start line: 798
		// Start offset: 0x800B586C
		// Variables:
	// 		int currIndex; // $t1
	// 		int prevIndex; // $a3
	// 		int nextIndex; // $t0
	// 		int currDist; // $a2
	// 		int nextDist; // $v1
	/* end block 1 */
	// End offset: 0x800B5B04
	// End Line: 834

	/* begin block 2 */
		// Start line: 1708
	/* end block 2 */
	// End Line: 1709

	/* begin block 3 */
		// Start line: 1720
	/* end block 3 */
	// End Line: 1721

	/* begin block 4 */
		// Start line: 1720
	/* end block 4 */
	// End Line: 1721

void Replay_ReplayChooseCamera__Fii(int player,int slice)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (&Replay_ReplayCamera)[player].cutToNextCamera;
  iVar4 = iVar6 + -1;
  if (iVar4 < 0) {
    iVar4 = numValidCams + -1;
  }
  iVar5 = 0;
  if (iVar6 + 1 < numValidCams) {
    iVar5 = iVar6 + 1;
  }
  iVar3 = (int)*(short *)((int)&gReplayCameraSlots.euler + iVar6 * 0x20 + 2);
  iVar2 = (int)*(short *)((int)&gReplayCameraSlots.euler + iVar5 * 0x20 + 2);
  iVar1 = slice - iVar3;
  if (slice < iVar3) {
    if (iVar1 < 1) {
      iVar1 = iVar3 - slice;
    }
    if (iVar1 < 200) {
      (&Replay_ReplayCamera)[player].cutToNextCamera = iVar4;
      goto LAB_800b5978;
    }
  }
  if (iVar2 <= slice) {
    iVar4 = slice - iVar2;
    if (iVar4 < 1) {
      iVar4 = iVar2 - slice;
    }
    if (iVar4 < 200) {
      (&Replay_ReplayCamera)[player].cutToNextCamera = iVar5;
    }
  }
LAB_800b5978:
  if ((&Replay_ReplayCamera)[player].cutToNextCamera != iVar6) {
    if (((((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
         (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
          ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0)))))) ||
        ((&Cars_gHumanRaceCarList9)[player]->wrongway != 0)) &&
       ((&gReplayCameraSlots.mode)[(&Replay_ReplayCamera)[player].cutToNextCamera * 0x20] == '\v'))
    {
      iVar4 = player * 0x110;
      iVar6 = (&Replay_ReplayCamera)[player].cutToNextCamera;
      (&Replay_ReplayCamera)[player].defaultCamera = 0;
      *(uint *)(&Camera_gInfo.modechange + iVar4) =
           *(uint *)(&Camera_gInfo.modechange + iVar4) & 0xf9ffffff |
           (*(uint *)(&gReplayCameraSlots.mode + iVar6 * 0x20) >> 9 & 3) << 0x19;
      (&Camera_gInfo.direction)[iVar4] =
           (byte)(*(uint *)(&gReplayCameraSlots.mode +
                           (&Replay_ReplayCamera)[player].cutToNextCamera * 0x20) >> 0xb) & 7;
      Camera_SetMode__Fii(player,0xb);
    }
    else {
      iVar4 = (&Replay_ReplayCamera)[player].cutToNextCamera;
      (&Replay_ReplayCamera)[player].defaultCamera = 1;
      Camera_ReplayUpdate__FiP15Camera_tCamSlot
                (player,(Camera_tCamSlot *)(&gReplayCameraSlots.mode + iVar4 * 0x20));
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Replay_ReplayFindClosestCamera__Fii(int player /*$t8*/, int slice /*$a1*/)
 // line 841, offset 0x800b5b14
	/* begin block 1 */
		// Start line: 842
		// Start offset: 0x800B5B14
		// Variables:
	// 		int cameraIndex; // $t7

		/* begin block 1.1 */
			// Start line: 842
			// Start offset: 0x800B5B14
			// Variables:
		// 		int i; // $t6

			/* begin block 1.1.1 */
				// Start line: 845
				// Start offset: 0x800B5B50
				// Variables:
			// 		int currDist; // $t4
			// 		int nextDist; // $t3
			// 		int actualDist; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800B5EA0
			// End Line: 852
		/* end block 1.1 */
		// End offset: 0x800B5EA4
		// End Line: 855
	/* end block 1 */
	// End offset: 0x800B5F6C
	// End Line: 872

	/* begin block 2 */
		// Start line: 1806
	/* end block 2 */
	// End Line: 1807

	/* begin block 3 */
		// Start line: 1814
	/* end block 3 */
	// End Line: 1815

	/* begin block 4 */
		// Start line: 1814
	/* end block 4 */
	// End Line: 1815

void Replay_ReplayFindClosestCamera__Fii(int player,int slice)

{
  bool bVar1;
  int iVar2;
  Camera_tCamSlot *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Camera_tCamSlot *pCVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  pCVar8 = &gReplayCameraSlots;
  iVar6 = 1;
  iVar7 = (int)(gNumSlices + ((uint)gNumSlices >> 0x1f)) >> 1;
  while (iVar4 = 0, iVar10 < numValidCams) {
    iVar4 = slice - (int)(pCVar8->euler).y;
    if (iVar7 < iVar4) {
      if (0 < gNumSlices - iVar4) goto LAB_800b5b8c;
LAB_800b5bb0:
      iVar9 = (int)(pCVar8->euler).y;
      iVar4 = slice - iVar9;
      iVar2 = iVar4 - gNumSlices;
      if (iVar4 <= iVar7) {
        iVar2 = iVar9 - slice;
      }
    }
    else {
      if (iVar4 < 1) goto LAB_800b5bb0;
LAB_800b5b8c:
      iVar2 = slice - (int)(pCVar8->euler).y;
      if (iVar7 < iVar2) {
        iVar2 = gNumSlices - iVar2;
      }
    }
    bVar1 = iVar6 < numValidCams;
    iVar4 = 0;
    if (bVar1) {
      iVar4 = iVar6 << 5;
    }
    if (iVar7 < slice - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4)) {
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 << 5;
      }
      if (0 < gNumSlices - (slice - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4)))
      goto LAB_800b5c4c;
LAB_800b5cb8:
      bVar1 = iVar6 < numValidCams;
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 * 0x20;
      }
      if (iVar7 < slice - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4)) {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar9 = (slice - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4)) - gNumSlices;
      }
      else {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar9 = (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4) - slice;
      }
    }
    else {
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 << 5;
      }
      if (slice - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4) < 1) goto LAB_800b5cb8;
LAB_800b5c4c:
      bVar1 = iVar6 < numValidCams;
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 << 5;
      }
      if (iVar7 < slice - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4)) {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar9 = gNumSlices - (slice - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4));
      }
      else {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar9 = slice - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4);
      }
    }
    iVar5 = (int)(pCVar8->euler).y;
    bVar1 = iVar6 < numValidCams;
    iVar4 = 0;
    if (bVar1) {
      iVar4 = iVar6 << 5;
    }
    if (iVar7 < iVar5 - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4)) {
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 << 5;
      }
      if (0 < gNumSlices - (iVar5 - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4)))
      goto LAB_800b5da4;
LAB_800b5e14:
      iVar5 = (int)(pCVar8->euler).y;
      bVar1 = iVar6 < numValidCams;
      pCVar3 = &gReplayCameraSlots;
      if (bVar1) {
        pCVar3 = (Camera_tCamSlot *)(&gReplayCameraSlots.mode + iVar6 * 0x20);
      }
      if (iVar7 < iVar5 - (int)(pCVar3->euler).y) {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar5 = (iVar5 - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4)) - gNumSlices;
      }
      else {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar5 = (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4) - iVar5;
      }
    }
    else {
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 << 5;
      }
      if (iVar5 - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4) < 1) goto LAB_800b5e14;
LAB_800b5da4:
      iVar5 = (int)(pCVar8->euler).y;
      bVar1 = iVar6 < numValidCams;
      iVar4 = 0;
      if (bVar1) {
        iVar4 = iVar6 << 5;
      }
      if (iVar7 < iVar5 - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4)) {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar5 = gNumSlices - (iVar5 - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4));
      }
      else {
        iVar4 = 0;
        if (bVar1) {
          iVar4 = iVar6 << 5;
        }
        iVar5 = iVar5 - (int)*(short *)((int)&gReplayCameraSlots.euler.y + iVar4);
      }
    }
    pCVar8 = (Camera_tCamSlot *)&(pCVar8->euler).z;
    iVar4 = iVar10;
    if (iVar2 + iVar9 <= iVar5) break;
    iVar6 = iVar6 + 1;
    iVar10 = iVar10 + 1;
  }
  (&Replay_ReplayCamera)[player].cutToNextCamera = iVar4;
  if ((&gReplayCameraSlots.mode)[iVar4 * 0x20] == '\v') {
    iVar6 = player * 0x110;
    (&Replay_ReplayCamera)[player].defaultCamera = 0;
    *(uint *)(&Camera_gInfo.modechange + iVar6) =
         *(uint *)(&Camera_gInfo.modechange + iVar6) & 0xf9ffffff |
         (*(uint *)(&gReplayCameraSlots.mode + iVar4 * 0x20) >> 9 & 3) << 0x19;
    (&Camera_gInfo.direction)[iVar6] =
         (byte)(*(uint *)(&gReplayCameraSlots.mode +
                         (&Replay_ReplayCamera)[player].cutToNextCamera * 0x20) >> 0xb) & 7;
    Camera_SetMode__Fii(player,0xb);
  }
  else {
    iVar6 = (&Replay_ReplayCamera)[player].cutToNextCamera;
    (&Replay_ReplayCamera)[player].defaultCamera = 1;
    Camera_ReplayUpdate__FiP15Camera_tCamSlot
              (player,(Camera_tCamSlot *)(&gReplayCameraSlots.mode + iVar6 * 0x20));
  }
  return;
}





