#include "THISDUST.H"
#include "STATTOOL.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Stattool_nCreateIndex__FiPiPs(int nNumber /*$s1*/, int *nInput /*$s3*/, short *nIndex /*$s2*/)
 // line 110, offset 0x8004a868
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x8004A868
		// Variables:
	// 		int i; // $a2
	// 		int j; // $s0
	// 		int nADummy; // $t0
	// 		int nBDummy; // $t3
	// 		int *nTemp; // $a0
	/* end block 1 */
	// End offset: 0x8004A980
	// End Line: 180

	/* begin block 2 */
		// Start line: 220
	/* end block 2 */
	// End Line: 221

	/* begin block 3 */
		// Start line: 220
	/* end block 3 */
	// End Line: 221

void Stattool_nCreateIndex__FiPiPs(int nNumber,int *nInput,short *nIndex)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int *piVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  
  piVar2 = (int *)reservememadr(s_TempSort_80012514,(nNumber + 1) * 4,0x10);
  iVar9 = 0;
  psVar4 = nIndex;
  piVar6 = piVar2;
  if (0 < nNumber) {
    do {
      *psVar4 = (short)iVar9;
      iVar3 = *nInput;
      nInput = nInput + 1;
      iVar9 = iVar9 + 1;
      *piVar6 = iVar3;
      psVar4 = psVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar9 < nNumber);
  }
  iVar9 = 1;
  if ((nNumber != 1) && (psVar4 = nIndex + 1, piVar6 = piVar2, 1 < nNumber)) {
    do {
      iVar3 = iVar9 + -1;
      iVar8 = piVar6[1];
      sVar1 = *psVar4;
      if (-1 < iVar3) {
        psVar7 = nIndex + iVar3;
        piVar5 = piVar2 + iVar3;
        do {
          if (*piVar5 <= iVar8) break;
          piVar5[1] = *piVar5;
          piVar5 = piVar5 + -1;
          iVar3 = iVar3 + -1;
          psVar7[1] = *psVar7;
          psVar7 = psVar7 + -1;
        } while (-1 < iVar3);
      }
      psVar4 = psVar4 + 1;
      iVar9 = iVar9 + 1;
      piVar2[iVar3 + 1] = iVar8;
      nIndex[iVar3 + 1] = sVar1;
      piVar6 = piVar6 + 1;
    } while (iVar9 < nNumber);
  }
  purgememadr((int)piVar2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Stattool_ParseTime__FiPc(int nTime /*$t2*/, char *sLapTime /*$s0*/)
 // line 190, offset 0x8004a99c
	/* begin block 1 */
		// Start line: 191
		// Start offset: 0x8004A99C
	/* end block 1 */
	// End offset: 0x8004A99C
	// End Line: 191

	/* begin block 2 */
		// Start line: 412
	/* end block 2 */
	// End Line: 413

	/* begin block 3 */
		// Start line: 422
	/* end block 3 */
	// End Line: 423

	/* begin block 4 */
		// Start line: 422
	/* end block 4 */
	// End Line: 423

void Stattool_ParseTime__FiPc(int nTime,char *sLapTime)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = __floatsisf(nTime);
  uVar1 = __divsf3(uVar1,0x3f23d70a);
  uVar1 = __fixsfsi(uVar1);
  iVar2 = ((int)uVar1 / 6000) * 0x10000 >> 0x10;
  iVar4 = uVar1 + iVar2 * -6000;
  iVar3 = (iVar4 / 100) * 0x10000 >> 0x10;
  sprintf(sLapTime,s__02d_c_02d_c_02d_80012520,iVar2,
          (uint)(byte)minChar[(uint)(byte)frontEnd.language],iVar3,
          (uint)(byte)secChar[(uint)(byte)frontEnd.language],
          (iVar4 + iVar3 * -100) * 0x10000 >> 0x10);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UserNameUpperCaseOneLetter__FPc(char *c /*$a0*/)
 // line 211, offset 0x8004aab4
	/* begin block 1 */
		// Start line: 212
		// Start offset: 0x8004AAB4
	/* end block 1 */
	// End offset: 0x8004ABC8
	// End Line: 244

	/* begin block 2 */
		// Start line: 472
	/* end block 2 */
	// End Line: 473

	/* begin block 3 */
		// Start line: 477
	/* end block 3 */
	// End Line: 478

	/* begin block 4 */
		// Start line: 477
	/* end block 4 */
	// End Line: 478

	/* begin block 5 */
		// Start line: 479
	/* end block 5 */
	// End Line: 480

void UserNameUpperCaseOneLetter__FPc(char *c)

{
  char cVar1;
  
  if (0x19 < (uint)(byte)*c - 0x61) {
    switch(*c) {
    case -0x20:
      *c = -0x40;
      return;
    case -0x1f:
      *c = 'A';
      return;
    default:
      return;
    case -0x1c:
      *c = -0x3c;
      return;
    case -0x1b:
      *c = -0x3b;
      return;
    case -0x18:
      cVar1 = 'E';
      if (frontEnd.language == '\x04') {
        cVar1 = -0x38;
      }
      *c = cVar1;
switchD_8004ab00_caseD_ec:
      *c = -0x34;
      return;
    case -0x17:
      *c = 'E';
      return;
    case -0x14:
      goto switchD_8004ab00_caseD_ec;
    case -0x13:
      *c = 'I';
      return;
    case -0xf:
      *c = -0x2f;
      return;
    case -0xe:
      *c = -0x2e;
      return;
    case -0xd:
      *c = 'O';
      return;
    case -10:
      *c = -0x2a;
      return;
    case -7:
      *c = -0x27;
      return;
    case -6:
      *c = 'U';
      return;
    case -4:
      *c = -0x24;
      return;
    }
  }
  *c = *c - 0x20;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Stattool_SamNelsonsUpperLowerStringConverterForRecords__FPc(char *string /*$s0*/)
 // line 250, offset 0x8004abd0
	/* begin block 1 */
		// Start line: 251
		// Start offset: 0x8004ABD0
		// Variables:
	// 		char previousLetter; // $s1
	/* end block 1 */
	// End offset: 0x8004AC34
	// End Line: 265

	/* begin block 2 */
		// Start line: 548
	/* end block 2 */
	// End Line: 549

	/* begin block 3 */
		// Start line: 555
	/* end block 3 */
	// End Line: 556

	/* begin block 4 */
		// Start line: 555
	/* end block 4 */
	// End Line: 556

void Stattool_SamNelsonsUpperLowerStringConverterForRecords__FPc(char *string)

{
  char cVar1;
  char cVar2;
  
  s_lower__FPc(string);
  cVar1 = *string;
  UserNameUpperCaseOneLetter__FPc(string);
  string = string + 1;
  cVar2 = *string;
  while (cVar2 != '\0') {
    if (cVar1 == ' ') {
      UserNameUpperCaseOneLetter__FPc(string);
    }
    cVar1 = *string;
    string = string + 1;
    cVar2 = *string;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StatTool_UpperCaseItKeepingInMindThoseBloodySpecialCharacters__FPc(char *string /*$s0*/)
 // line 269, offset 0x8004ac4c
	/* begin block 1 */
		// Start line: 270
		// Start offset: 0x8004AC4C
	/* end block 1 */
	// End offset: 0x8004AC88
	// End Line: 274

	/* begin block 2 */
		// Start line: 588
	/* end block 2 */
	// End Line: 589

	/* begin block 3 */
		// Start line: 593
	/* end block 3 */
	// End Line: 594

	/* begin block 4 */
		// Start line: 593
	/* end block 4 */
	// End Line: 594

void StatTool_UpperCaseItKeepingInMindThoseBloodySpecialCharacters__FPc(char *string)

{
  char cVar1;
  
  cVar1 = *string;
  while (cVar1 != '\0') {
    UserNameUpperCaseOneLetter__FPc(string);
    string = string + 1;
    cVar1 = *string;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Stattool_GetAllDefaultRecords__FP13tRecordBufferb(struct tRecordBuffer *TrackRecords /*$s6*/, void * cheatones /*$s0*/)
 // line 279, offset 0x8004ac98
	/* begin block 1 */
		// Start line: 280
		// Start offset: 0x8004AC98
		// Variables:
	// 		int i; // $s2
	// 		int n; // $s4
	// 		int s; // $v0
	// 		struct tRecordBuffer *AllRecords; // $s5
	/* end block 1 */
	// End offset: 0x8004AD60
	// End Line: 302

	/* begin block 2 */
		// Start line: 607
	/* end block 2 */
	// End Line: 608

	/* begin block 3 */
		// Start line: 613
	/* end block 3 */
	// End Line: 614

	/* begin block 4 */
		// Start line: 613
	/* end block 4 */
	// End Line: 614

void Stattool_GetAllDefaultRecords__FP13tRecordBufferb(tRecordBuffer *TrackRecords,void *cheatones)

{
  tRecordBuffer *Records;
  int iVar1;
  tRecordBuffer *__src;
  tRecordBuffer *__dest;
  int iVar2;
  int iVar3;
  int iVar4;
  
  Records = (tRecordBuffer *)reservememadr(s_records_800125ac,0xe9c,0x10);
  Stattool_ReadDefaultRecords__FP13tRecordBufferb(Records,cheatones);
  iVar4 = 0;
  iVar3 = 0;
  do {
    iVar2 = 0;
    iVar1 = iVar3;
    do {
      __dest = TrackRecords + iVar1;
      __src = Records + iVar1;
      strcpy((char *)__dest,(char *)__src);
      Stattool_SamNelsonsUpperLowerStringConverterForRecords__FPc((char *)__dest);
      __dest->nCar = __src->nCar;
      __dest->nTime = __src->nTime;
      iVar2 = iVar2 + 1;
      __dest->nBestLap = __src->nBestLap;
      iVar1 = iVar3 + iVar2;
    } while (iVar2 < 0x11);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x11;
  } while (iVar4 < 0xb);
  purgememadr((int)Records);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Stattool_ReadDefaultRecords__FP13tRecordBufferb(struct tRecordBuffer *Records /*$s0*/, void * cheatones /*$a1*/)
 // line 323, offset 0x8004ad90
	/* begin block 1 */
		// Start line: 324
		// Start offset: 0x8004AD90
		// Variables:
	// 		char filename[80]; // stack offset -88
	/* end block 1 */
	// End offset: 0x8004AE08
	// End Line: 351

	/* begin block 2 */
		// Start line: 686
	/* end block 2 */
	// End Line: 687

	/* begin block 3 */
		// Start line: 708
	/* end block 3 */
	// End Line: 709

	/* begin block 4 */
		// Start line: 708
	/* end block 4 */
	// End Line: 709

void Stattool_ReadDefaultRecords__FP13tRecordBufferb(tRecordBuffer *Records,void *cheatones)

{
  int iVar1;
  char *__format;
  char acStack88 [80];
  
  if (cheatones == (void *)0x0) {
    __format = s__szrecord_dat_800125c4;
  }
  else {
    __format = s__sznfsrec_dat_800125b4;
  }
  sprintf(acStack88,__format,PTR_801164f8);
  iVar1 = filesize(acStack88);
  if (iVar1 == 0xe9c) {
    loadfileatadrz(acStack88,Records);
  }
  else {
    blockclear((undefined *)Records,0xe9c);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Stattool_GetRecords__FsP13tRecordBuffer(short nShowTrack /*$a0*/, struct tRecordBuffer *TrackRecords /*$a1*/)
 // line 364, offset 0x8004ae18
	/* begin block 1 */
		// Start line: 365
		// Start offset: 0x8004AE18
	/* end block 1 */
	// End offset: 0x8004AE18
	// End Line: 365

	/* begin block 2 */
		// Start line: 776
	/* end block 2 */
	// End Line: 777

	/* begin block 3 */
		// Start line: 790
	/* end block 3 */
	// End Line: 791

	/* begin block 4 */
		// Start line: 790
	/* end block 4 */
	// End Line: 791

void Stattool_GetRecords__FsP13tRecordBuffer(short nShowTrack,tRecordBuffer *TrackRecords)

{
  blockmove((undefined4 *)(Stats_gTrackRecords + (int)nShowTrack * 0x11),(undefined4 *)TrackRecords,
            0x154);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Stattool_ReturnRecordLapTime__Fs(short nTrack /*$a0*/)
 // line 377, offset 0x8004ae60
	/* begin block 1 */
		// Start line: 378
		// Start offset: 0x8004AE60
		// Variables:
	// 		struct tRecordBuffer RecordLapHolder; // stack offset -32
	// 		struct tRecordBuffer *TrackRecords; // $s0
	/* end block 1 */
	// End offset: 0x8004AE60
	// End Line: 378

	/* begin block 2 */
		// Start line: 819
	/* end block 2 */
	// End Line: 820

	/* begin block 3 */
		// Start line: 824
	/* end block 3 */
	// End Line: 825

	/* begin block 4 */
		// Start line: 824
	/* end block 4 */
	// End Line: 825

int Stattool_ReturnRecordLapTime__Fs(short nTrack)

{
  tRecordBuffer *TrackRecords;
  undefined auStack32 [16];
  int local_10;
  
  TrackRecords = (tRecordBuffer *)reservememadr(s_trkrcrds_800125d4,0x168,0x10);
  Stattool_GetRecords__FsP13tRecordBuffer(nTrack,TrackRecords);
  memcpy(auStack32,TrackRecords,0x14);
  purgememadr((int)TrackRecords);
  return local_10;
}



// decompiled code
// original method signature: 
// short /*$ra*/ Stattool_CheckForHumanCar__FP10Car_tStats(struct Car_tStats *dummyCars /*$a0*/)
 // line 413, offset 0x8004aec4
	/* begin block 1 */
		// Start line: 414
		// Start offset: 0x8004AEC4
		// Variables:
	// 		short k; // $a1
	// 		short bHumanFlag; // $a2
	/* end block 1 */
	// End offset: 0x8004AF44
	// End Line: 441

	/* begin block 2 */
		// Start line: 908
	/* end block 2 */
	// End Line: 909

	/* begin block 3 */
		// Start line: 917
	/* end block 3 */
	// End Line: 918

	/* begin block 4 */
		// Start line: 917
	/* end block 4 */
	// End Line: 918

	/* begin block 5 */
		// Start line: 920
	/* end block 5 */
	// End Line: 921

short Stattool_CheckForHumanCar__FP10Car_tStats(Car_tStats *dummyCars)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  sVar4 = 0;
  iVar2 = (int)(((uint)(ushort)GameSetup_gData.numPlayerRaceCars +
                (uint)(ushort)GameSetup_gData.numOpponentRaceCars) * 0x10000) >> 0x10;
  iVar3 = 0;
  if (0 < iVar2) {
    iVar1 = 0;
    sVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      if ((dummyCars[iVar1 >> 0x10].carFlags & 4U) != 0) {
        sVar4 = 1;
      }
    } while ((sVar4 != 1) && (iVar1 = iVar3 * 0x10000, iVar3 * 0x10000 >> 0x10 < iVar2));
  }
  return sVar4;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ Stattool_GetAINameFromPersonality__F14tPersonalities(enum tPersonalities personality /*$a0*/)
 // line 456, offset 0x8004af4c
	/* begin block 1 */
		// Start line: 457
		// Start offset: 0x8004AF4C
	/* end block 1 */
	// End offset: 0x8004AF78
	// End Line: 460

	/* begin block 2 */
		// Start line: 987
	/* end block 2 */
	// End Line: 988

	/* begin block 3 */
		// Start line: 1003
	/* end block 3 */
	// End Line: 1004

	/* begin block 4 */
		// Start line: 1003
	/* end block 4 */
	// End Line: 1004

char * Stattool_GetAINameFromPersonality__F14tPersonalities(tPersonalities personality)

{
  char *pcVar1;
  
  if (personality < 0xf) {
    pcVar1 = GameSetup_gPersonalityNames + personality * 8;
  }
  else {
    pcVar1 = TextSys_Word__Fi(0x2ee);
  }
  return pcVar1;
}





