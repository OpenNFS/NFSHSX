#include "THISDUST.H"
#include "STATCHK.H"


// decompiled code
// original method signature: 
// void * /*$ra*/ StatChk_IsRecordLapTime__FP10Car_tStatssPs(struct Car_tStats *dummyCars /*$s7*/, short nNumCars /*stack -64*/, short *nBestCarIndex /*stack 8*/)
 // line 50, offset 0x80049840
	/* begin block 1 */
		// Start line: 51
		// Start offset: 0x80049840
		// Variables:
	// 		short bBestLapFlag; // stack offset -56
	// 		short bCheckLapRecords; // $s6
	// 		short i; // $s3
	// 		int *nBestLapTimes; // $s5
	// 		short *nRankBestLapTimes; // $s4
	// 		short nBestCarIndexTemp; // $s0
	// 		short nNewRecordHolder; // $a0
	// 		struct tRecordBuffer RecordHolder; // stack offset -88
	// 		struct tRecordBuffer *TrackRecords; // $fp
	// 		struct tCarInfo *carInfo; // $v0
	/* end block 1 */
	// End offset: 0x80049B4C
	// End Line: 223

	/* begin block 2 */
		// Start line: 100
	/* end block 2 */
	// End Line: 101

	/* begin block 3 */
		// Start line: 100
	/* end block 3 */
	// End Line: 101

void * StatChk_IsRecordLapTime__FP10Car_tStatssPs
                 (Car_tStats *dummyCars,short nNumCars,short *nBestCarIndex)

{
  short sVar1;
  short nShowTrack;
  void *pvVar2;
  int *nInput;
  short *nIndex;
  tRecordBuffer *TrackRecords;
  int iVar3;
  tCarInfo *ptVar4;
  int iVar5;
  Car_tStats *pCVar6;
  int iVar7;
  undefined auStack88 [16];
  int local_48;
  short local_40;
  ushort local_38;
  int local_30;
  
  local_38 = 0;
  sVar1 = Stattool_CheckForHumanCar__FP10Car_tStats(dummyCars);
  if (sVar1 == 1) {
    iVar5 = (int)nNumCars;
    local_40 = nNumCars;
    nInput = (int *)reservememadr(s_ranklap_800124bc,iVar5 << 2,0x10);
    nIndex = reservememadr(s_rankbst_800124c4,iVar5 << 1,0x10);
    TrackRecords = (tRecordBuffer *)reservememadr(s_trkrcrds_800124cc,0x168,0x10);
    iVar7 = 0;
    if (0 < iVar5) {
      iVar3 = 0;
      local_30 = iVar5;
      do {
        iVar3 = iVar3 >> 0x10;
        pCVar6 = dummyCars + iVar3;
        ptVar4 = GetCarFromSimID__11tCarManagers(&carManager,*(short *)&pCVar6->carType);
        if ((pCVar6->carFlags & 0x200U) != 0) {
          purgememadr((int)nInput);
          purgememadr((int)nIndex);
          purgememadr((int)TrackRecords);
          return (void *)0x0;
        }
        if ((uint)ptVar4->fCarClass - 7 < 2) {
          nInput[iVar3] = (iVar3 + 1) * 0x23280;
        }
        else {
          nInput[iVar3] = pCVar6->finalBestLap;
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar7 * 0x10000;
      } while (iVar7 * 0x10000 >> 0x10 < local_30);
    }
    if ((int)local_40 < 2) {
      *nIndex = 0;
    }
    else {
      Stattool_nCreateIndex__FiPiPs((int)local_40,nInput,nIndex);
    }
    iVar7 = 0;
    if (0 < (int)local_40) {
      do {
        iVar5 = (int)*(short *)(((iVar7 << 0x10) >> 0xf) + (int)nIndex);
        if (((dummyCars[iVar5].carFlags & 4U) != 0) &&
           (sVar1 = 1, 0 < dummyCars[(int)nIndex[iVar5]].finalBestLap)) break;
        iVar7 = iVar7 + 1;
        sVar1 = 0;
      } while (iVar7 * 0x10000 >> 0x10 < (int)local_40);
    }
    if (sVar1 != 0) {
      sVar1 = *(short *)(((iVar7 << 0x10) >> 0xf) + (int)nIndex);
      nShowTrack = Front_GetTrackRaced__Fv();
      Stattool_GetRecords__FsP13tRecordBuffer(nShowTrack,TrackRecords);
      memcpy(auStack88,TrackRecords,0x14);
      if (((dummyCars[(int)sVar1].finalBestLap < local_48) || (local_48 == 0)) &&
         (0 < dummyCars[(int)sVar1].finalBestLap)) {
        local_38 = 1;
      }
      *nBestCarIndex = sVar1;
    }
    purgememadr((int)nInput);
    purgememadr((int)nIndex);
    purgememadr((int)TrackRecords);
    pvVar2 = (void *)(uint)local_38;
  }
  else {
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StatChk_SaveRecordLapTime__FP10Car_tStatsss(struct Car_tStats *dummyCars /*$s4*/, short nNumCars /*$a1*/, short nBestCarIndex /*$s3*/)
 // line 227, offset 0x80049b7c
	/* begin block 1 */
		// Start line: 228
		// Start offset: 0x80049B7C
		// Variables:
	// 		struct tRecordBuffer RecordHolder; // stack offset -72
	// 		struct tRecordBuffer DummyRaceResult; // stack offset -48
	// 		struct tRecordBuffer *TrackRecords; // $s1
	// 		struct tCarInfo *carInfo; // $s2
	/* end block 1 */
	// End offset: 0x80049CEC
	// End Line: 276

	/* begin block 2 */
		// Start line: 562
	/* end block 2 */
	// End Line: 563

	/* begin block 3 */
		// Start line: 567
	/* end block 3 */
	// End Line: 568

	/* begin block 4 */
		// Start line: 567
	/* end block 4 */
	// End Line: 568

void StatChk_SaveRecordLapTime__FP10Car_tStatsss
               (Car_tStats *dummyCars,short nNumCars,short nBestCarIndex)

{
  short nShowTrack;
  tCarInfo *ptVar1;
  tRecordBuffer *TrackRecords;
  char *__src;
  Car_tStats *pCVar2;
  undefined auStack72 [24];
  char acStack48 [8];
  int local_28;
  int local_24;
  int local_20;
  
  pCVar2 = dummyCars + (int)nBestCarIndex;
  ptVar1 = GetCarFromSimID__11tCarManagers(&carManager,*(short *)&pCVar2->carType);
  if (1 < (uint)ptVar1->fCarClass - 7) {
    TrackRecords = (tRecordBuffer *)reservememadr(s_trkrcrds_800124cc,0x168,0x10);
    nShowTrack = Front_GetTrackRaced__Fv();
    Stattool_GetRecords__FsP13tRecordBuffer(nShowTrack,TrackRecords);
    memcpy(auStack72,TrackRecords + 1,0x14);
    if ((pCVar2->finalNumArrests == 0) && (pCVar2->finalFinishType == 2)) {
      local_24 = pCVar2->finalTotalTime;
    }
    else {
      local_24 = 0;
    }
    local_20 = dummyCars[(int)nBestCarIndex].finalBestLap;
    local_28 = (int)ptVar1->fCarID;
    __src = PlayerName__Fi((int)nBestCarIndex);
    strcpy(acStack48,__src);
    memcpy(TrackRecords,acStack48,0x14);
    nShowTrack = Front_GetTrackRaced__Fv();
    blockmove((undefined4 *)TrackRecords,
              (undefined4 *)(Stats_gTrackRecords + (int)nShowTrack * 0x11),0x154);
    NewBestLap = &DAT_00000001;
    purgememadr((int)TrackRecords);
  }
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ StatChk_IsTopTime__FP10Car_tStatss(struct Car_tStats *dummyCars /*$s6*/, short nNumCars /*stack -56*/)
 // line 285, offset 0x80049d0c
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x80049D0C
		// Variables:
	// 		int retvalue; // $s0
	// 		short bDoRecordCheck; // $s7
	// 		short nLaps; // $s3
	// 		short nLapIndicator; // $a0
	// 		int nCheckTotalTime; // $a0
	// 		short k; // $a0
	// 		short nCar; // $s1
	// 		int *nCarTotalTimes; // stack offset -48
	// 		short *nRankCarTotalTimes; // $s2
	// 		struct tRecordBuffer *RecordHolders; // $fp
	// 		int LASTPLACE[2]; // stack offset -80
	// 		int TOPLIST[2]; // stack offset -72
	// 		int NUMBERONE[2]; // stack offset -64

		/* begin block 1.1 */
			// Start line: 345
			// Start offset: 0x80049E54

			/* begin block 1.1.1 */
				// Start line: 345
				// Start offset: 0x80049E70
				// Variables:
			// 		struct tCarInfo *carInfo; // $a0
			/* end block 1.1.1 */
			// End offset: 0x8004A03C
			// End Line: 407
		/* end block 1.1 */
		// End offset: 0x8004A044
		// End Line: 412
	/* end block 1 */
	// End offset: 0x8004A188
	// End Line: 460

	/* begin block 2 */
		// Start line: 706
	/* end block 2 */
	// End Line: 707

	/* begin block 3 */
		// Start line: 711
	/* end block 3 */
	// End Line: 712

	/* begin block 4 */
		// Start line: 711
	/* end block 4 */
	// End Line: 712

short StatChk_IsTopTime__FP10Car_tStatss(Car_tStats *dummyCars,short nNumCars)

{
  bool bVar1;
  short nShowTrack;
  int iVar2;
  tRecordBuffer *TrackRecords;
  short *psVar3;
  tCarInfo *ptVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  char *pcVar10;
  int local_50 [4];
  int local_40;
  int local_3c;
  ushort local_38;
  short *local_30;
  
  bVar1 = false;
  iVar2 = Front_GetLapsForType__Fv();
  memset(local_50,0,8);
  memset(local_50 + 2,0,8);
  memset(local_50 + 4,0,8);
  TrackRecords = (tRecordBuffer *)reservememadr(s_toprcrds_800124d8,0x168,0x10);
  iVar9 = (int)nNumCars;
  local_30 = reservememadr(s_carttime_800124e4,iVar9 << 2,0x10);
  psVar3 = reservememadr(s_carttrnk_800124f0,iVar9 << 1,0x10);
  uVar8 = 0;
  if (0 < iVar9) {
    iVar5 = 0;
    do {
      psVar3[dummyCars[iVar5 >> 0x10].position + -1] = uVar8;
      uVar8 = uVar8 + 1;
      iVar5 = (uint)uVar8 << 0x10;
    } while ((int)(short)uVar8 < iVar9);
  }
  local_38 = nNumCars;
  nShowTrack = Front_GetTrackRaced__Fv();
  Stattool_GetRecords__FsP13tRecordBuffer(nShowTrack,TrackRecords);
  uVar7 = 9;
  if ((short)iVar2 == 2) {
    uVar7 = 1;
  }
  iVar2 = 0;
  pcVar10 = TrackRecords->sName + (uVar7 << 2 | uVar7) * 4;
  while (iVar9 = (iVar2 << 0x10) >> 0x10, iVar2 << 0x10 < (int)((uint)local_38 << 0x10)) {
    ptVar4 = GetCarFromSimID__11tCarManagers(&carManager,*(short *)&dummyCars[iVar9].carType);
    uVar7 = dummyCars[(int)psVar3[iVar9]].carFlags;
    if ((uVar7 & 0x200) != 0) {
      purgememadr((int)TrackRecords);
      purgememadr((int)local_30);
      purgememadr((int)psVar3);
      return 0;
    }
    if (1 < (uint)ptVar4->fCarClass - 7) {
      if ((((byte)frontEnd.gameMode < 3) && ((uVar7 & 4) != 0)) &&
         (dummyCars[(int)psVar3[iVar9]].finalFinishType == 2)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar9 = (int)*(short *)(((iVar2 << 0x10) >> 0xf) + (int)psVar3);
        iVar5 = dummyCars[iVar9].finalTotalTime;
        bVar1 = false;
        if ((iVar5 < *(int *)(pcVar10 + 0x84)) || ((*(int *)(pcVar10 + 0x98) == 0 && (0 < iVar5))))
        {
          local_50[iVar9 + 2] = 1;
        }
        else {
          if ((iVar5 < *(int *)(pcVar10 + 0x98)) || ((*(int *)(pcVar10 + 0x98) == 0 && (0 < iVar5)))
             ) {
            psVar6 = (short *)(((iVar2 << 0x10) >> 0xf) + (int)psVar3);
            local_50[(int)*psVar6 + 2] = 1;
            local_50[(int)*psVar6] = 1;
          }
        }
        if ((iVar5 < *(int *)(pcVar10 + 0xc)) || ((*(int *)(pcVar10 + 0x98) == 0 && (0 < iVar5)))) {
          psVar6 = (short *)(((iVar2 << 0x10) >> 0xf) + (int)psVar3);
          local_50[(int)*psVar6 + 2] = 1;
          local_50[(int)*psVar6 + 4] = 1;
        }
      }
    }
    iVar2 = iVar2 + 1;
  }
  if (local_50[0] == 0) {
LAB_8004a09c:
    if ((local_50[1] == 0) || (local_50[2] == 0)) goto LAB_8004a0c0;
  }
  else {
    if (local_50[1] == 0) {
      if (local_50[3] != 0) {
        local_50[2] = 0;
        goto LAB_8004a0c0;
      }
      goto LAB_8004a09c;
    }
    if (dummyCars[1].finalTotalTime < dummyCars->finalTotalTime) {
      local_50[2] = 0;
      goto LAB_8004a0c0;
    }
  }
  local_50[3] = 0;
LAB_8004a0c0:
  if ((local_40 != 0) && (local_3c != 0)) {
    if (dummyCars[1].finalTotalTime < dummyCars->finalTotalTime) {
      local_40 = 0;
    }
    else {
      local_3c = 0;
    }
  }
  uVar8 = (ushort)(local_50[2] != 0);
  if (local_40 != 0) {
    uVar8 = (ushort)(local_50[2] != 0) | 2;
  }
  if (local_50[3] != 0) {
    uVar8 = uVar8 | 4;
  }
  if (local_3c != 0) {
    uVar8 = uVar8 | 8;
  }
  purgememadr((int)TrackRecords);
  purgememadr((int)local_30);
  purgememadr((int)psVar3);
  return (short)uVar8;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StatChk_SaveTopTime__FP10Car_tStatss(struct Car_tStats *dummyCars /*$fp*/, short nNumCars /*stack -80*/)
 // line 464, offset 0x8004a1b8
	/* begin block 1 */
		// Start line: 465
		// Start offset: 0x8004A1B8
		// Variables:
	// 		void * bTopTenFlag; // stack offset -72
	// 		void * bDoRecordCheck; // $s7
	// 		short nLapIndicator; // stack offset -64
	// 		short nPlace; // stack offset -56
	// 		int nTopTenSort[8]; // stack offset -160
	// 		short nTopTenIndex[8]; // stack offset -128
	// 		int nCheckTotalTime; // $v1
	// 		short k; // $s0
	// 		short nCar; // $s2
	// 		char *buffer; // stack offset -48
	// 		int *nCarTotalTimes; // stack offset -44
	// 		short *nRankCarTotalTimes; // $s5
	// 		struct tRecordBuffer DummyRaceResult; // stack offset -112
	// 		struct tRecordBuffer *RecordHolders; // $s6
	// 		struct tCarInfo *carInfo; // $a2
	// 		int topPlacements[2]; // stack offset -88
	/* end block 1 */
	// End offset: 0x8004A7E0
	// End Line: 652

	/* begin block 2 */
		// Start line: 1210
	/* end block 2 */
	// End Line: 1211

	/* begin block 3 */
		// Start line: 1215
	/* end block 3 */
	// End Line: 1216

	/* begin block 4 */
		// Start line: 1215
	/* end block 4 */
	// End Line: 1216

void StatChk_SaveTopTime__FP10Car_tStatss(Car_tStats *dummyCars,short nNumCars)

{
  bool bVar1;
  short nShowTrack;
  ushort uVar2;
  int iVar3;
  tRecordBuffer *TrackRecords;
  short *psVar4;
  tCarInfo *ptVar5;
  int iVar6;
  char *__src;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  short *psVar11;
  uint uVar12;
  tRecordBuffer *__src_00;
  int local_a0 [8];
  short local_80 [8];
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_58 [2];
  ushort local_50;
  int local_48;
  ushort local_40;
  short local_38;
  short *local_30;
  short *local_2c;
  
  bVar1 = false;
  iVar10 = 0;
  local_48 = 0;
  local_38 = 0;
  iVar3 = 0;
  do {
    *(undefined4 *)((int)local_58 + (iVar3 >> 0xe)) = 0;
    iVar10 = iVar10 + 1;
    iVar3 = iVar10 * 0x10000;
  } while (iVar10 * 0x10000 >> 0x10 < 2);
  local_50 = nNumCars;
  TrackRecords = (tRecordBuffer *)reservememadr(s_toprcrds_800124d8,0x168,0x10);
  iVar3 = (int)(short)local_50;
  local_2c = reservememadr(s_carttime_800124e4,iVar3 << 2,0x10);
  psVar4 = reservememadr(s_carttrnk_800124f0,iVar3 << 1,0x10);
  local_30 = reservememadr(s_records_800124fc,0xa0,0x10);
  uVar9 = 0;
  if (0 < iVar3) {
    iVar10 = 0;
    do {
      psVar4[dummyCars[iVar10 >> 0x10].position + -1] = uVar9;
      uVar9 = uVar9 + 1;
      iVar10 = (uint)uVar9 << 0x10;
    } while ((int)(short)uVar9 < iVar3);
  }
  nShowTrack = Front_GetTrackRaced__Fv();
  Stattool_GetRecords__FsP13tRecordBuffer(nShowTrack,TrackRecords);
  iVar3 = Front_GetLapsForType__Fv();
  local_40 = 9;
  if (iVar3 == 2) {
    local_40 = 1;
  }
  iVar3 = 0;
  if (0 < (int)((uint)local_50 << 0x10)) {
    uVar8 = (uint)local_40;
    __src_00 = TrackRecords + uVar8;
    iVar10 = 0;
    do {
      psVar11 = (short *)((iVar10 >> 0xf) + (int)psVar4);
      ptVar5 = GetCarFromSimID__11tCarManagers
                         (&carManager,*(short *)&dummyCars[(int)*psVar11].carType);
      if (1 < (uint)ptVar5->fCarClass - 7) {
        if ((byte)frontEnd.gameMode < 3) {
          iVar10 = (int)*psVar11;
LAB_8004a41c:
          if (((dummyCars[iVar10].carFlags & 4U) != 0) && (dummyCars[iVar10].finalFinishType == 2))
          {
            bVar1 = true;
          }
        }
        else {
          iVar10 = (int)*psVar11;
          if (iVar10 == GameSetup_gData.localCar) goto LAB_8004a41c;
        }
        if (bVar1) {
          psVar11 = (short *)(((iVar3 << 0x10) >> 0xf) + (int)psVar4);
          iVar10 = dummyCars[(int)*psVar11].finalTotalTime;
          bVar1 = false;
          if ((iVar10 < __src_00[7].nTime) || ((__src_00[7].nTime == 0 && (0 < iVar10)))) {
            local_68 = (int)ptVar5->fCarID;
            uVar12 = (uint)local_40;
            local_48 = 1;
            local_60 = dummyCars[(int)*psVar11].finalBestLap;
            *(undefined4 *)__src_00[7].sName = local_70;
            *(undefined4 *)(__src_00[7].sName + 4) = local_6c;
            __src_00[7].nCar = local_68;
            __src_00[7].nTime = iVar10;
            __src_00[7].nBestLap = local_60;
            if (uVar8 < uVar8 + 8) {
              do {
                iVar7 = (int)(short)uVar12;
                iVar6 = TrackRecords[iVar7].nTime;
                local_a0[iVar7 - uVar8] = iVar6;
                if (iVar6 == 0) {
                  local_a0[iVar7 - uVar8] = (iVar7 + 1) * 0x23280;
                }
                uVar12 = uVar12 + 1;
              } while ((int)(uVar12 * 0x10000) >> 0x10 < (int)(uVar8 + 8));
            }
            local_64 = iVar10;
            Stattool_nCreateIndex__FiPiPs(8,local_a0,local_80);
            iVar10 = 0;
            uVar9 = 0;
            do {
              uVar2 = uVar9 + 1;
              if (*(short *)((int)local_80 + (iVar10 >> 0xf)) == 7) {
                local_38 = uVar9 + 1;
              }
              iVar10 = (uint)uVar2 << 0x10;
              uVar9 = uVar2;
            } while ((short)uVar2 < 8);
            iVar6 = 0;
            iVar10 = 0;
            do {
              iVar10 = (int)*(short *)((int)local_80 + (iVar10 >> 0xf));
              if (iVar10 == (int)*(short *)(((iVar3 << 0x10) >> 0xf) + (int)psVar4)) {
                local_58[iVar10] = (int)local_38;
                break;
              }
              iVar6 = iVar6 + 1;
              iVar10 = iVar6 * 0x10000;
            } while (iVar6 * 0x10000 >> 0x10 < 8);
            iVar10 = 0;
            __src = PlayerName__Fi((int)*(short *)(((iVar3 << 0x10) >> 0xf) + (int)psVar4));
            strcpy((char *)&local_70,__src);
            *(undefined4 *)__src_00[7].sName = local_70;
            *(undefined4 *)(__src_00[7].sName + 4) = local_6c;
            __src_00[7].nCar = local_68;
            __src_00[7].nTime = local_64;
            __src_00[7].nBestLap = local_60;
            memcpy(local_30,__src_00,0xa0);
            iVar6 = 0;
            do {
              memcpy(TrackRecords + uVar8 + (iVar6 >> 0x10),
                     local_30 + (int)local_80[iVar6 >> 0x10] * 10,0x14);
              iVar10 = iVar10 + 1;
              iVar6 = iVar10 * 0x10000;
            } while (iVar10 * 0x10000 >> 0x10 < 8);
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar10 = iVar3 * 0x10000;
    } while (iVar3 * 0x10000 < (int)((uint)local_50 << 0x10));
  }
  if (local_48 == 1) {
    nShowTrack = Front_GetTrackRaced__Fv();
    blockmove((undefined4 *)TrackRecords,
              (undefined4 *)(Stats_gTrackRecords + (int)nShowTrack * 0x11),0x154);
  }
  if (local_58[0] == local_58[1]) {
    local_58[1] = local_58[0] + 1;
  }
  else {
    if ((local_58[1] != 0) && (local_58[1] < local_58[0])) {
      local_58[0] = local_58[0] + 1;
    }
  }
  iVar10 = 0;
  iVar3 = 0;
  do {
    iVar3 = *(int *)((int)local_58 + (iVar3 >> 0xe));
    if ((iVar3 != 0) && (iVar3 < 9)) {
      NewRecords[iVar3 + -1] = (void *)0x1;
    }
    iVar10 = iVar10 + 1;
    iVar3 = iVar10 * 0x10000;
  } while (iVar10 * 0x10000 >> 0x10 < 2);
  purgememadr((int)local_30);
  purgememadr((int)TrackRecords);
  purgememadr((int)local_2c);
  purgememadr((int)psVar4);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StatChk_ClearNewRecords__Fv()
 // line 664, offset 0x8004a838
	/* begin block 1 */
		// Start line: 665
		// Start offset: 0x8004A838
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8004A858
	// End Line: 669

	/* begin block 2 */
		// Start line: 1732
	/* end block 2 */
	// End Line: 1733

	/* begin block 3 */
		// Start line: 1742
	/* end block 3 */
	// End Line: 1743

	/* begin block 4 */
		// Start line: 1742
	/* end block 4 */
	// End Line: 1743

	/* begin block 5 */
		// Start line: 1744
	/* end block 5 */
	// End Line: 1745

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StatChk_ClearNewRecords__Fv(void)

{
  void **ppvVar1;
  int iVar2;
  
  iVar2 = 7;
  ppvVar1 = &PTR_80052994;
  do {
    *ppvVar1 = (void *)0x0;
    iVar2 = iVar2 + -1;
    ppvVar1 = ppvVar1 + -1;
  } while (-1 < iVar2);
  NewBestLap = (void *)0x0;
  return;
}





