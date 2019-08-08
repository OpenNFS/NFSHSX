#include "NFS4.H"
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
  pcVar5 = &DAT_8011db99;
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
      (&DAT_8011db99)[iVar6] = (char)iVar4;
      (&DAT_8011db9a)[iVar6] = cVar1;
      iVar6 = iVar6 + 3;
    }
    if ((int)pcVar7 <= (int)uncompressed_data) {
      bVar2 = true;
    }
    if (bVar2) {
      compressed_data = (undefined)iVar6;
      (&compressed_data)[iVar6] = 0;
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

void Replay_InitReplay__Fv(void)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_d8 [48];
  undefined4 auStack24 [4];
  
  iGp00000ea8 = DAT_80113210;
  Replay_LoadCameraFile__Fv();
  if (iGp00000ea8 == 2) {
    puVar1 = &DAT_801132cc;
    puVar4 = local_d8;
    do {
      puVar3 = puVar4;
      puVar2 = puVar1;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      puVar1 = puVar2 + 4;
      puVar4 = puVar3 + 4;
    } while (puVar2 + 4 != (undefined4 *)&UNK_8011338c);
    uVar5 = puVar2[5];
    uVar6 = puVar2[6];
    puVar3[4] = 0;
    puVar3[5] = uVar5;
    puVar3[6] = uVar6;
    Replay_LoadReplay__Fv();
    puVar1 = &Replay_ReplayBuffer;
    puVar4 = &GameSetup_gData;
    do {
      puVar3 = puVar4;
      puVar2 = puVar1;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      puVar1 = puVar2 + 4;
      puVar4 = puVar3 + 4;
    } while (puVar2 + 4 != (undefined4 *)&UNK_80117b8c);
    uVar5 = puVar2[5];
    puVar3[4] = 0;
    puVar3[5] = uVar5;
    puVar1 = &DAT_801132cc;
    puVar4 = local_d8;
    do {
      puVar3 = puVar4;
      puVar2 = puVar1;
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      *puVar2 = *puVar3;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar4 = puVar3 + 4;
      puVar1 = puVar2 + 4;
    } while (puVar4 != auStack24);
    uVar5 = puVar3[5];
    uVar6 = puVar3[6];
    puVar2[4] = *puVar4;
    puVar2[5] = uVar5;
    puVar2[6] = uVar6;
    uGp00000eb0 = 0;
    uGp00000ea0 = DAT_80117b94;
  }
  else {
    puVar1 = &GameSetup_gData;
    puVar4 = &Replay_ReplayBuffer;
    do {
      puVar3 = puVar4;
      puVar2 = puVar1;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      puVar1 = puVar2 + 4;
      puVar4 = puVar3 + 4;
    } while (puVar2 + 4 != (undefined4 *)&UNK_80113c0c);
    uVar5 = puVar2[5];
    puVar3[4] = 0;
    puVar3[5] = uVar5;
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

void Replay_ResetReplay__Fv(void)
{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int player;
  int *piVar4;
  
  if (uGp00000ea8 < 2) {
    player = 0x5fff;
    puVar1 = &UNK_8011d16b;
    do {
      puVar1[0xa2c] = 0;
      player = player + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < player);
    uGp00000eac = 0;
    uGp00000eb0 = 0;
  }
  else {
    if (1 < (int)uGp00000ea8) {
      player = 0;
      puVar3 = &Replay_ReplayCamera;
      piVar4 = &_Cars_gHumanRaceCarList;
      Replay_ReplayInterface = 0;
      DAT_80117030 = 2;
      uGp00000eb0 = 0;
      DAT_80117034 = 0;
      DAT_80117038 = 0;
      DAT_8011703c = 4;
      DAT_80117040 = 0;
      DAT_80117044 = 0;
      do {
        if (iGp00000ea4 == 0) {
          uVar2 = 4;
        }
        else {
          if ((DAT_801131f8 == 1) || (player == 0)) {
            Replay_ReplayFindClosestCamera__Fii(player,(int)*(short *)(*piVar4 + 8));
          }
          uVar2 = 0x13;
        }
        puVar3[2] = uVar2;
        puVar3[3] = 0;
        puVar3 = puVar3 + 4;
        player = player + 1;
        piVar4 = piVar4 + 1;
      } while (player < 2);
    }
  }
  player = 1;
  puVar3 = &DAT_8013d404;
  do {
    *puVar3 = 0;
    player = player + -1;
    puVar3 = puVar3 + -1;
  } while (-1 < player);
  StatsTimer = 0;
  DAT_8013d99c = 0;
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
    memcpy(&DAT_80117b98 + Replay_ReplayStorePtr,__src,(uint)local_30[0]);
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
    memcpy(&DAT_80117b98 + Replay_ReplayStorePtr,__src_00,(uint)local_30[0]);
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
    memcpy(&DAT_80117b98 + Replay_ReplayStorePtr,__src,(uint)local_30[0]);
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
    memcpy(&DAT_80117b98 + Replay_ReplayStorePtr,local_30,(uint)local_30[0]);
    Replay_ReplayStorePtr = Replay_ReplayStorePtr + (uint)local_30[0];
  }
  else {
    Replay_ReplayMode = 1;
    Replay_Size = 0;
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
  
  memcpy(local_40,&DAT_80117b98 + Replay_ReplayGetPtr,
         (uint)(byte)(&DAT_80117b98)[Replay_ReplayGetPtr]);
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
  memcpy(local_40,&DAT_80117b98 + Replay_ReplayGetPtr,
         (uint)(byte)(&DAT_80117b98)[Replay_ReplayGetPtr]);
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
  memcpy(local_40,&DAT_80117b98 + Replay_ReplayGetPtr,
         (uint)(byte)(&DAT_80117b98)[Replay_ReplayGetPtr]);
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
  memcpy(local_40,&DAT_80117b98 + Replay_ReplayGetPtr,
         (uint)(byte)(&DAT_80117b98)[Replay_ReplayGetPtr]);
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

void Replay_SaveInput__Fi(int car)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_8;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_4;
  undefined8 uStackX0;
  undefined in_stack_ffffff88 [112];
  
  Input_Fetch__Fi(car);
  piVar2 = &Replay_ReplayCounter + car;
  iVar8 = car * 0x80;
  iVar1 = (int)Input_gSim;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  (&controlData)[*piVar2 + iVar8] = (char)(iVar1 >> 2) + '@';
  (&DAT_8011708c)[*piVar2 + iVar8] = DAT_8013d22d >> 3;
  (&DAT_801170ac)[*piVar2 + iVar8] = DAT_8013d22e >> 3;
  (&DAT_801170cc)[*piVar2 + iVar8] = DAT_8013d22f;
  piVar3 = &_Cars_gHumanRaceCarList + car;
  if (*(int *)(*(int *)(*piVar3 + 0x288) + 0x18) != 0) {
    (&controlData)[*piVar2 + iVar8] = (&controlData)[*piVar2 + iVar8] | 0x80;
  }
  if (*(int *)(*(int *)(*piVar3 + 0x288) + 0x1c) != 0) {
    (&DAT_8011708c)[*piVar2 + iVar8] = (&DAT_8011708c)[*piVar2 + iVar8] | 0x80;
  }
  if (*(int *)(*(int *)(*piVar3 + 0x288) + 0x20) != 0) {
    (&DAT_801170ac)[*piVar2 + iVar8] = (&DAT_801170ac)[*piVar2 + iVar8] | 0x80;
  }
  iVar1 = *piVar2;
  *piVar2 = iVar1 + 1;
  if (iVar1 + 1 == 0x20) {
    puVar5 = (undefined4 *)&stack0xffffff88;
    puVar4 = (undefined4 *)(&DAT_8011707c + iVar8);
    *piVar2 = 0;
    if (true) {
      do {
        uVar6 = puVar4[1];
        uVar7 = puVar4[2];
        uVar9 = puVar4[3];
        *puVar5 = *puVar4;
        puVar5[1] = uVar6;
        puVar5[2] = uVar7;
        puVar5[3] = uVar9;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar4 != (undefined4 *)(&UNK_801170ec + iVar8));
    }
    else {
      do {
        uVar6 = puVar4[1];
        uVar7 = puVar4[2];
        uVar9 = puVar4[3];
        *puVar5 = *puVar4;
        puVar5[1] = uVar6;
        puVar5[2] = uVar7;
        puVar5[3] = uVar9;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar4 != (undefined4 *)(&UNK_801170ec + iVar8));
    }
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

void Replay_GetInput__Fi(int car)
{
  tControllerData *ptVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  tControllerData local_90;
  
  Input_Fetch__Fi(car);
  if ((&Replay_ReplayCounter)[car] == 0) {
    if ((&DAT_80117b98)[iGp00000eb0] == '\0') {
      iGp00000ea8 = 3;
    }
    else {
      puVar7 = (undefined4 *)(&controlData + car * 0x80);
      Replay_RetreivingControllerData__Fv(&local_90);
      ptVar1 = &local_90;
      if (true) {
        do {
          uVar4 = *(undefined4 *)(ptVar1->steering + 4);
          uVar5 = *(undefined4 *)(ptVar1->steering + 8);
          uVar6 = *(undefined4 *)(ptVar1->steering + 0xc);
          *puVar7 = *(undefined4 *)ptVar1->steering;
          puVar7[1] = uVar4;
          puVar7[2] = uVar5;
          puVar7[3] = uVar6;
          ptVar1 = (tControllerData *)(ptVar1->steering + 0x10);
          puVar7 = puVar7 + 4;
        } while (ptVar1 != (tControllerData *)&stack0xfffffff0);
      }
      else {
        do {
          uVar4 = *(undefined4 *)(ptVar1->steering + 4);
          uVar5 = *(undefined4 *)(ptVar1->steering + 8);
          uVar6 = *(undefined4 *)(ptVar1->steering + 0xc);
          *puVar7 = *(undefined4 *)ptVar1->steering;
          puVar7[1] = uVar4;
          puVar7[2] = uVar5;
          puVar7[3] = uVar6;
          ptVar1 = (tControllerData *)(ptVar1->steering + 0x10);
          puVar7 = puVar7 + 4;
        } while (ptVar1 != (tControllerData *)&stack0xfffffff0);
      }
    }
  }
  if (iGp00000ea8 == 2) {
    if (((int)(char)(&controlData)[(&Replay_ReplayCounter)[car] + car * 0x80] & 0x80U) == 0) {
      *(undefined4 *)(*(int *)((&_Cars_gHumanRaceCarList)[car] + 0x288) + 0x18) = 0;
    }
    else {
      *(undefined4 *)(*(int *)((&_Cars_gHumanRaceCarList)[car] + 0x288) + 0x18) = 1;
    }
    if (((&DAT_8011708c)[(&Replay_ReplayCounter)[car] + car * 0x80] & 0x80) == 0) {
      *(undefined4 *)(*(int *)((&_Cars_gHumanRaceCarList)[car] + 0x288) + 0x1c) = 0;
    }
    else {
      *(undefined4 *)(*(int *)((&_Cars_gHumanRaceCarList)[car] + 0x288) + 0x1c) = 1;
    }
    if (((&DAT_801170ac)[(&Replay_ReplayCounter)[car] + car * 0x80] & 0x80) == 0) {
      *(undefined4 *)(*(int *)((&_Cars_gHumanRaceCarList)[car] + 0x288) + 0x20) = 0;
    }
    else {
      *(undefined4 *)(*(int *)((&_Cars_gHumanRaceCarList)[car] + 0x288) + 0x20) = 1;
    }
    piVar2 = &Replay_ReplayCounter + car;
    iVar3 = car * 0x80;
    (&controlData)[*piVar2 + iVar3] = (&controlData)[*piVar2 + iVar3] & 0x7f;
    (&DAT_8011708c)[*piVar2 + iVar3] = (&DAT_8011708c)[*piVar2 + iVar3] & 0x7f;
    (&DAT_801170ac)[*piVar2 + iVar3] = (&DAT_801170ac)[*piVar2 + iVar3] & 0x7f;
    Input_gSim = (&controlData)[*piVar2 + iVar3] * '\x04';
    DAT_8013d22d = (&DAT_8011708c)[*piVar2 + iVar3] << 3;
    DAT_8013d22e = (&DAT_801170ac)[*piVar2 + iVar3] << 3;
    DAT_8013d22f = (&DAT_801170cc)[*piVar2 + iVar3];
  }
  else {
    if (iGp00000ea8 == 3) {
      Input_gSim = '\0';
      DAT_8013d22d = '\0';
      DAT_8013d22e = '\0';
      DAT_8013d22f = 0;
    }
  }
  (&Replay_ReplayCounter)[car] = (&Replay_ReplayCounter)[car] + 1;
  if (((iGp00000ea4 != 0) && ((&DAT_80117054)[car * 4] == 0x13)) && (simGlobal != 0)) {
    Replay_ReplayChooseCamera__Fii(car,(int)*(short *)((&_Cars_gHumanRaceCarList)[car] + 8));
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

void Replay_SaveReplay__Fv(void)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (iGp00000ea8 == 0) {
    uGp00000ea0 = 0;
  }
  puVar1 = &GameSetup_gData;
  puVar2 = &Replay_ReplayBuffer;
  do {
    puVar4 = puVar2;
    puVar3 = puVar1;
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    *puVar4 = *puVar3;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar1 = puVar3 + 4;
    puVar2 = puVar4 + 4;
  } while (puVar3 + 4 != (undefined4 *)&UNK_80113c0c);
  uVar5 = puVar3[5];
  puVar4[4] = 0;
  puVar4[5] = uVar5;
  DAT_80117190 = 2;
  DAT_80117b94 = uGp00000ea0;
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

void Replay_DoReplay__FP8Car_tObj(Car_tObj *carObj)
{
  if (uGp00000ea8 < 2) {
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

void Replay_GetInterfaceKey__Fv(void)
{
  bool bVar1;
  int cviewP;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = 1;
  if (DAT_801131f8 == 1) {
    iVar8 = 2;
  }
  DAT_80117044 = 0;
  if (DAT_80117040 < 1) {
    if (DAT_80117048 == 0) {
      cviewP = Input_Interface__FUli(3,1);
      if (cviewP == 0) {
        cviewP = Input_Interface__FUli(4,1);
        if (cviewP == 0) {
          cviewP = Input_Interface__FUli(5,1);
          if (cviewP == 0) {
            iVar8 = Input_Interface__FUli(6,1);
            if (iVar8 == 0) {
              iVar8 = Input_Interface__FUli(0x19,1);
              if (iVar8 != 0) {
                StatsTimer = 0;
                DAT_8013d99c = 0;
                DAT_80117048 = 1;
                AudioCmn_PlayPauseSound__Fi(4);
              }
            }
            else {
              DAT_80117040 = 8;
              DAT_80117034 = 1;
            }
          }
          else {
            AudioCmn_PlayPauseSound__Fi(4);
            DAT_80117040 = 8;
            switch(DAT_8011703c) {
            case 0:
              DAT_80117034 = 1;
              DAT_80113214 = 1;
              break;
            case 1:
              DAT_80117034 = 1;
              break;
            case 2:
              Replay_ReplayInterface = Replay_ReplayInterface ^ 1;
              break;
            case 3:
              if (DAT_801131f8 == 1) {
                DAT_80117030 = (DAT_80117030 + 1) % 3;
              }
              else {
                cviewP = DAT_80117030 + 1;
                iVar8 = cviewP;
                if (cviewP < 0) {
                  iVar8 = DAT_80117030 + 4;
                }
                DAT_80117030 = cviewP + (iVar8 >> 2) * -4;
              }
              break;
            case 4:
              DAT_80117044 = 1;
              DAT_80117038 = (DAT_80117038 + 1) % 9;
              if (*(int *)(&ReplayCameraList + DAT_80117038 * 4) == 0x13) {
                cviewP = 0;
                if (iVar8 != 0) {
                  puVar4 = &Replay_ReplayCamera;
                  piVar3 = &_Cars_gHumanRaceCarList;
                  piVar5 = &Camera_gInfo;
                  do {
                    if (iGp00000ea4 == 0) {
                      Camera_SetMode__Fii(cviewP,10);
                    }
                    else {
                      *piVar5 = *piVar3;
                      piVar5[1] = *piVar3;
                      Replay_ReplayFindClosestCamera__Fii(cviewP,(int)*(short *)(*piVar3 + 8));
                      puVar4[2] = 0x13;
                    }
                    puVar4 = puVar4 + 4;
                    piVar3 = piVar3 + 1;
                    cviewP = cviewP + 1;
                    piVar5 = piVar5 + 0x44;
                  } while (cviewP < iVar8);
                }
              }
              else {
                if (iVar8 != 0) {
                  puVar7 = &_Cars_gHumanRaceCarList;
                  puVar4 = &Camera_gInfo;
                  puVar6 = &Replay_ReplayCamera;
                  cviewP = 0;
                  do {
                    *puVar6 = 0;
                    puVar4[0x15] = 0;
                    *puVar4 = *puVar7;
                    puVar4[1] = *puVar7;
                    iVar2 = cviewP + 1;
                    Camera_SetMode__Fii(cviewP,*(int *)(&ReplayCameraList + DAT_80117038 * 4));
                    puVar7 = puVar7 + 1;
                    puVar4 = puVar4 + 0x44;
                    puVar6[2] = *(undefined4 *)(&ReplayCameraList + DAT_80117038 * 4);
                    puVar6 = puVar6 + 4;
                    cviewP = iVar2;
                  } while (iVar2 < iVar8);
                }
              }
            }
          }
        }
        else {
          AudioCmn_PlayPauseSound__Fi(3);
          DAT_8011703c = (DAT_8011703c + 1) % 5;
        }
      }
      else {
        AudioCmn_PlayPauseSound__Fi(3);
        bVar1 = DAT_8011703c == 0;
        DAT_8011703c = DAT_8011703c + -1;
        if (bVar1) {
          DAT_8011703c = 4;
        }
      }
    }
    else {
      bVar1 = false;
      iVar8 = Input_Interface__FUli(5,1);
      if ((iVar8 != 0) || (iVar8 = Input_Interface__FUli(6,1), iVar8 != 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        DAT_80117040 = 0x18;
        DAT_80117034 = 1;
      }
      else {
        iVar8 = Input_Interface__FUli(0x19,1);
        if (iVar8 != 0) {
          AudioCmn_PlayPauseSound__Fi(4);
          DAT_80117048 = 0;
        }
      }
    }
  }
  else {
    DAT_80117040 = DAT_80117040 + -1;
  }
  if (DAT_8011e0d4 != 0) {
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

void Replay_LoadCameraFile__Fv(void)
{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  char *__format;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  char acStack128 [112];
  undefined4 local_10 [2];
  
  if (iGp00000ea4 == 0) {
    local_10[0] = 0;
    sprintf(acStack128,"%scamera.viv",0);
    FILE_addbigsync(acStack128,0x10,100,local_10);
    if (true) {
      __format = "tr%02d.rho";
    }
    else {
      __format = "tr%02dr.rho";
    }
    sprintf(acStack128,__format,0);
    puVar8 = (undefined4 *)loadfileadrz(acStack128,0);
    iGp00000ea4 = 0;
    FILE_delbigsync(local_10[0],100);
    iVar7 = 0;
    puVar4 = (uint *)&gReplayCameraSlots;
    do {
      *(undefined *)puVar4 = 2;
      iVar7 = iVar7 + 1;
      *(undefined2 *)((int)puVar4 + 0x1e) = 0xffff;
      *puVar4 = *puVar4 & 0xfffff9ff;
      puVar4 = puVar4 + 8;
    } while (iVar7 < 0x20);
    if (puVar8 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)&gReplayCameraSlots;
      puVar5 = puVar8;
      do {
        uVar11 = puVar5[1];
        uVar14 = puVar5[2];
        uVar18 = puVar5[3];
        *puVar3 = *puVar5;
        puVar3[1] = uVar11;
        puVar3[2] = uVar14;
        puVar3[3] = uVar18;
        puVar5 = puVar5 + 4;
        puVar3 = puVar3 + 4;
      } while (puVar5 != puVar8 + 0x100);
      iVar7 = 0;
      puVar6 = &gReplayCameraSlots;
      do {
        if (*(short *)(puVar6 + 2) == 0) {
          *(undefined2 *)(puVar6 + 0x1e) = 0xffff;
        }
        else {
          iGp00000ea4 = iGp00000ea4 + 1;
        }
        puVar6 = puVar6 + 0x20;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x20);
      purgememadr(puVar8);
      iVar7 = 0;
      while (iVar9 = 0, iVar7 < 0x1f) {
        iVar10 = 0x20;
        puVar8 = (undefined4 *)&gReplayCameraSlots;
        while (iVar9 < 0x1f) {
          if (((*(short *)((int)&DAT_8011dbfa + iVar10) < *(short *)((int)puVar8 + 0x1e)) ||
              (*(short *)((int)puVar8 + 0x1e) < 0)) &&
             (-1 < *(short *)((int)&DAT_8011dbfa + iVar10))) {
            uVar11 = *puVar8;
            uVar18 = puVar8[1];
            uVar15 = puVar8[2];
            uVar19 = puVar8[3];
            uVar14 = puVar8[4];
            uVar12 = puVar8[5];
            uVar16 = puVar8[6];
            uVar20 = puVar8[7];
            uVar13 = *(undefined4 *)((int)&DAT_8011dbe0 + iVar10);
            uVar17 = *(undefined4 *)((int)&DAT_8011dbe4 + iVar10);
            uVar21 = *(undefined4 *)((int)&DAT_8011dbe8 + iVar10);
            *puVar8 = *(undefined4 *)(&gReplayCameraSlots + iVar10);
            puVar8[1] = uVar13;
            puVar8[2] = uVar17;
            puVar8[3] = uVar21;
            uVar13 = *(undefined4 *)((int)&DAT_8011dbf0 + iVar10);
            uVar17 = *(undefined4 *)((int)&DAT_8011dbf4 + iVar10);
            uVar21 = *(undefined4 *)(&DAT_8011dbf8 + iVar10);
            puVar8[4] = *(undefined4 *)((int)&DAT_8011dbec + iVar10);
            puVar8[5] = uVar13;
            puVar8[6] = uVar17;
            puVar8[7] = uVar21;
            *(undefined4 *)(&gReplayCameraSlots + iVar10) = uVar11;
            *(undefined4 *)((int)&DAT_8011dbe0 + iVar10) = uVar18;
            *(undefined4 *)((int)&DAT_8011dbe4 + iVar10) = uVar15;
            *(undefined4 *)((int)&DAT_8011dbe8 + iVar10) = uVar19;
            *(undefined4 *)((int)&DAT_8011dbec + iVar10) = uVar14;
            *(undefined4 *)((int)&DAT_8011dbf0 + iVar10) = uVar12;
            *(undefined4 *)((int)&DAT_8011dbf4 + iVar10) = uVar16;
            *(undefined4 *)(&DAT_8011dbf8 + iVar10) = uVar20;
          }
          puVar8 = puVar8 + 8;
          iVar10 = iVar10 + 0x20;
          iVar9 = iVar9 + 1;
        }
        iVar7 = iVar7 + 1;
      }
      if (false) {
        iVar7 = iGp00000ea4 + -1;
        puVar6 = &gReplayCameraSlots + iVar7 * 0x20;
        uVar1 = (&DAT_8011dbfa)[iVar7 * 0x10];
        iVar9 = iVar7 * 0x20;
        while (-1 < iVar7) {
          uVar2 = uVar1;
          if (iVar7 != 0) {
            *(undefined2 *)(puVar6 + 0x1e) = *(undefined2 *)(&DAT_8011dbda + iVar9);
            uVar2 = DAT_8011dbfa;
          }
          DAT_8011dbfa = uVar2;
          iVar7 = iVar7 + -1;
          puVar6 = puVar6 + -0x20;
          iVar9 = iVar9 + -0x20;
        }
      }
      iVar7 = 0;
      if (0 < iGp00000ea4) {
        puVar6 = &gReplayCameraSlots;
        do {
          iVar7 = iVar7 + 1;
          *(int *)(puVar6 + 4) = *(int *)(puVar6 + 4) << 6;
          *(int *)(puVar6 + 0xc) = *(int *)(puVar6 + 0xc) << 6;
          *(int *)(puVar6 + 8) = *(int *)(puVar6 + 8) << 6;
          puVar6 = puVar6 + 0x20;
        } while (iVar7 < iGp00000ea4);
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

void Replay_ReplayChooseCamera__Fii(int player,int slice)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (&DAT_80117058)[player * 4];
  iVar4 = iVar6 + -1;
  if (iVar4 < 0) {
    iVar4 = iGp00000ea4 + -1;
  }
  iVar5 = 0;
  if (iVar6 + 1 < iGp00000ea4) {
    iVar5 = iVar6 + 1;
  }
  iVar3 = (int)(short)(&DAT_8011dbfa)[iVar6 * 0x10];
  iVar2 = (int)(short)(&DAT_8011dbfa)[iVar5 * 0x10];
  iVar1 = slice - iVar3;
  if (slice < iVar3) {
    if (iVar1 < 1) {
      iVar1 = iVar3 - slice;
    }
    if (iVar1 < 200) {
      (&DAT_80117058)[player * 4] = iVar4;
      goto LAB_800b5978;
    }
  }
  if (iVar2 <= slice) {
    iVar4 = slice - iVar2;
    if (iVar4 < 1) {
      iVar4 = iVar2 - slice;
    }
    if (iVar4 < 200) {
      (&DAT_80117058)[player * 4] = iVar5;
    }
  }
LAB_800b5978:
  if ((&DAT_80117058)[player * 4] != iVar6) {
    if (((((GameSetup_gData == 1) || (GameSetup_gData == 5)) &&
         (((uRam00000260 & 0x200) != 0 ||
          ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))) ||
        (*(int *)((&_Cars_gHumanRaceCarList)[player] + 0x3f0) != 0)) &&
       ((&gReplayCameraSlots)[(&DAT_80117058)[player * 4] * 0x20] == '\v')) {
      (&Replay_ReplayCamera)[player * 4] = 0;
      (&DAT_8010f320)[player * 0x44] =
           (&DAT_8010f320)[player * 0x44] & 0xf9ffffff |
           (*(uint *)(&gReplayCameraSlots + (&DAT_80117058)[player * 4] * 0x20) >> 9 & 3) << 0x19;
      (&DAT_8010f32a)[player * 0x110] =
           (byte)(*(uint *)(&gReplayCameraSlots + (&DAT_80117058)[player * 4] * 0x20) >> 0xb) & 7;
      Camera_SetMode__Fii(player,0xb);
    }
    else {
      (&Replay_ReplayCamera)[player * 4] = 1;
      Camera_ReplayUpdate__FiP15Camera_tCamSlot
                (player,(Camera_tCamSlot *)
                        (&gReplayCameraSlots + (&DAT_80117058)[player * 4] * 0x20));
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

void Replay_ReplayFindClosestCamera__Fii(int player,int slice)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  
  iVar9 = 0;
  puVar8 = &gReplayCameraSlots;
  iVar7 = 1;
  while (iVar5 = 0, iVar9 < iGp00000ea4) {
    iVar5 = slice - (int)*(short *)(puVar8 + 0x1e);
    if (iVar5 < 1) {
      if (iVar5 < 1) goto LAB_800b5bb0;
LAB_800b5b8c:
      iVar2 = slice - (int)*(short *)(puVar8 + 0x1e);
      if (0 < iVar2) {
        iVar2 = -iVar2;
      }
    }
    else {
      if (iVar5 < 0) goto LAB_800b5b8c;
LAB_800b5bb0:
      iVar2 = slice - (int)*(short *)(puVar8 + 0x1e);
      if (iVar2 < 1) {
        iVar2 = (int)*(short *)(puVar8 + 0x1e) - slice;
      }
    }
    bVar1 = iVar7 < iGp00000ea4;
    iVar5 = 0;
    if (bVar1) {
      iVar5 = iVar7 << 5;
    }
    if (slice - (int)*(short *)((int)&DAT_8011dbfa + iVar5) < 1) {
      iVar5 = 0;
      if (bVar1) {
        iVar5 = iVar7 << 5;
      }
      if (slice - (int)*(short *)((int)&DAT_8011dbfa + iVar5) < 1) goto LAB_800b5cb8;
LAB_800b5c4c:
      bVar1 = iVar7 < iGp00000ea4;
      iVar5 = 0;
      if (bVar1) {
        iVar5 = iVar7 << 5;
      }
      if (slice - (int)*(short *)((int)&DAT_8011dbfa + iVar5) < 1) {
        iVar5 = 0;
        if (bVar1) {
          iVar5 = iVar7 << 5;
        }
        iVar3 = slice - (int)*(short *)((int)&DAT_8011dbfa + iVar5);
      }
      else {
        iVar5 = 0;
        if (bVar1) {
          iVar5 = iVar7 << 5;
        }
        iVar3 = -(slice - (int)*(short *)((int)&DAT_8011dbfa + iVar5));
      }
    }
    else {
      iVar5 = 0;
      if (bVar1) {
        iVar5 = iVar7 << 5;
      }
      if (slice - (int)*(short *)((int)&DAT_8011dbfa + iVar5) < 0) goto LAB_800b5c4c;
LAB_800b5cb8:
      bVar1 = iVar7 < iGp00000ea4;
      iVar5 = 0;
      if (bVar1) {
        iVar5 = iVar7 * 0x20;
      }
      if (slice - (int)*(short *)((int)&DAT_8011dbfa + iVar5) < 1) {
        iVar5 = 0;
        if (bVar1) {
          iVar5 = iVar7 << 5;
        }
        iVar3 = (int)*(short *)((int)&DAT_8011dbfa + iVar5) - slice;
      }
      else {
        iVar5 = 0;
        if (bVar1) {
          iVar5 = iVar7 << 5;
        }
        iVar3 = slice - (int)*(short *)((int)&DAT_8011dbfa + iVar5);
      }
    }
    iVar6 = (int)*(short *)(puVar8 + 0x1e);
    bVar1 = iVar7 < iGp00000ea4;
    iVar5 = 0;
    if (bVar1) {
      iVar5 = iVar7 << 5;
    }
    if (iVar6 - (int)*(short *)((int)&DAT_8011dbfa + iVar5) < 1) {
      iVar5 = 0;
      if (bVar1) {
        iVar5 = iVar7 << 5;
      }
      if (iVar6 - (int)*(short *)((int)&DAT_8011dbfa + iVar5) < 1) goto LAB_800b5e14;
LAB_800b5da4:
      iVar6 = (int)*(short *)(puVar8 + 0x1e);
      bVar1 = iVar7 < iGp00000ea4;
      iVar5 = 0;
      if (bVar1) {
        iVar5 = iVar7 << 5;
      }
      if (iVar6 - (int)*(short *)((int)&DAT_8011dbfa + iVar5) < 1) {
        iVar5 = 0;
        if (bVar1) {
          iVar5 = iVar7 << 5;
        }
        iVar6 = iVar6 - (int)*(short *)((int)&DAT_8011dbfa + iVar5);
      }
      else {
        iVar5 = 0;
        if (bVar1) {
          iVar5 = iVar7 << 5;
        }
        iVar6 = -(iVar6 - (int)*(short *)((int)&DAT_8011dbfa + iVar5));
      }
    }
    else {
      iVar5 = 0;
      if (bVar1) {
        iVar5 = iVar7 << 5;
      }
      if (iVar6 - (int)*(short *)((int)&DAT_8011dbfa + iVar5) < 0) goto LAB_800b5da4;
LAB_800b5e14:
      iVar6 = (int)*(short *)(puVar8 + 0x1e);
      bVar1 = iVar7 < iGp00000ea4;
      puVar4 = &gReplayCameraSlots;
      if (bVar1) {
        puVar4 = &gReplayCameraSlots + iVar7 * 0x20;
      }
      if (iVar6 - (int)*(short *)(puVar4 + 0x1e) < 1) {
        iVar5 = 0;
        if (bVar1) {
          iVar5 = iVar7 << 5;
        }
        iVar6 = (int)*(short *)((int)&DAT_8011dbfa + iVar5) - iVar6;
      }
      else {
        iVar5 = 0;
        if (bVar1) {
          iVar5 = iVar7 << 5;
        }
        iVar6 = iVar6 - (int)*(short *)((int)&DAT_8011dbfa + iVar5);
      }
    }
    puVar8 = puVar8 + 0x20;
    iVar5 = iVar9;
    if (iVar2 + iVar3 <= iVar6) break;
    iVar7 = iVar7 + 1;
    iVar9 = iVar9 + 1;
  }
  (&DAT_80117058)[player * 4] = iVar5;
  if ((&gReplayCameraSlots)[iVar5 * 0x20] == '\v') {
    (&Replay_ReplayCamera)[player * 4] = 0;
    (&DAT_8010f320)[player * 0x44] =
         (&DAT_8010f320)[player * 0x44] & 0xf9ffffff |
         (*(uint *)(&gReplayCameraSlots + iVar5 * 0x20) >> 9 & 3) << 0x19;
    (&DAT_8010f32a)[player * 0x110] =
         (byte)(*(uint *)(&gReplayCameraSlots + (&DAT_80117058)[player * 4] * 0x20) >> 0xb) & 7;
    Camera_SetMode__Fii(player,0xb);
  }
  else {
    (&Replay_ReplayCamera)[player * 4] = 1;
    Camera_ReplayUpdate__FiP15Camera_tCamSlot
              (player,(Camera_tCamSlot *)(&gReplayCameraSlots + (&DAT_80117058)[player * 4] * 0x20))
    ;
  }
  return;


}





