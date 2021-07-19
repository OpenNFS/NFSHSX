#include "THISDUST.H"
#include "FECHEATS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FECheat_HandleActivation__F10tCheatCode(enum tCheatCode cheat /*$a1*/)
 // line 89, offset 0x80023240
	/* begin block 1 */
		// Start line: 90
		// Start offset: 0x80023240
		// Variables:
	// 		short i; // $s0

		/* begin block 1.1 */
			// Start line: 90
			// Start offset: 0x80023240

			/* begin block 1.1.1 */
				// Start line: 93
				// Start offset: 0x8002327C

				/* begin block 1.1.1.1 */
					// Start line: 118
					// Start offset: 0x80023328

					/* begin block 1.1.1.1.1 */
						// Start line: 118
						// Start offset: 0x80023328
					/* end block 1.1.1.1.1 */
					// End offset: 0x80023328
					// End Line: 118
				/* end block 1.1.1.1 */
				// End offset: 0x80023328
				// End Line: 118

				/* begin block 1.1.1.2 */
					// Start line: 122
					// Start offset: 0x80023328

					/* begin block 1.1.1.2.1 */
						// Start line: 122
						// Start offset: 0x80023328
					/* end block 1.1.1.2.1 */
					// End offset: 0x80023328
					// End Line: 122
				/* end block 1.1.1.2 */
				// End offset: 0x80023328
				// End Line: 122

				/* begin block 1.1.1.3 */
					// Start line: 125
					// Start offset: 0x80023344

					/* begin block 1.1.1.3.1 */
						// Start line: 125
						// Start offset: 0x80023344
					/* end block 1.1.1.3.1 */
					// End offset: 0x80023344
					// End Line: 125
				/* end block 1.1.1.3 */
				// End offset: 0x80023344
				// End Line: 125

				/* begin block 1.1.1.4 */
					// Start line: 148
					// Start offset: 0x800233CC

					/* begin block 1.1.1.4.1 */
						// Start line: 148
						// Start offset: 0x800233DC

						/* begin block 1.1.1.4.1.1 */
							// Start line: 148
							// Start offset: 0x800233F0
							// Variables:
						// 		short num; // $s0

							/* begin block 1.1.1.4.1.1.1 */
								// Start line: 148
								// Start offset: 0x800233F0
							/* end block 1.1.1.4.1.1.1 */
							// End offset: 0x800233F0
							// End Line: 148
						/* end block 1.1.1.4.1.1 */
						// End offset: 0x800233F0
						// End Line: 148
					/* end block 1.1.1.4.1 */
					// End offset: 0x800233F0
					// End Line: 148
				/* end block 1.1.1.4 */
				// End offset: 0x800233FC
				// End Line: 149
			/* end block 1.1.1 */
			// End offset: 0x800233FC
			// End Line: 153
		/* end block 1.1 */
		// End offset: 0x800233FC
		// End Line: 153
	/* end block 1 */
	// End offset: 0x800233FC
	// End Line: 153

	/* begin block 2 */
		// Start line: 178
	/* end block 2 */
	// End Line: 179

	/* begin block 3 */
		// Start line: 178
	/* end block 3 */
	// End Line: 179

void FECheat_HandleActivation__F10tCheatCode(tCheatCode cheat)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  switch(cheat) {
  case cheat_Roadster:
  case cheat_Pony:
  case cheat_Saloon:
  case cheat_Sports:
  case cheat_SuperCar:
  case cheat_GTRCar:
  case cheat_BonusCar:
  case cheat_CopCar:
    SetClassAvailable__11tCarManager13tCarClassTypeb(&carManager,cheat,&DAT_00000001);
    break;
  case cheat_AllCars:
    iVar1 = 0;
    iVar3 = 0;
    do {
      FECheat_HandleActivation__F10tCheatCode(iVar3 >> 0x10);
      iVar1 = iVar1 + 1;
      iVar3 = iVar1 * 0x10000;
    } while (iVar1 * 0x10000 >> 0x10 < 7);
    break;
  case cheat_AllTracks:
    SetClassAvailable__13tTrackManager15tTrackClassTypeb(&trackManager,tct_Beginner,&DAT_00000001);
    SetClassAvailable__13tTrackManager15tTrackClassTypeb
              (&trackManager,tct_Intermediate,&DAT_00000001);
    SetClassAvailable__13tTrackManager15tTrackClassTypeb(&trackManager,tct_Expert,&DAT_00000001);
    SetClassAvailable__13tTrackManager15tTrackClassTypeb(&trackManager,tct_GTR,&DAT_00000001);
    SetClassAvailable__13tTrackManager15tTrackClassTypeb(&trackManager,tct_Bonus,&DAT_00000001);
    break;
  case cheat_MoreMoney:
  case cheat_BonusMoney:
    tournamentManager.fMoney = tournamentManager.fMoney + 50000;
    break;
  case cheat_AllCheats:
    gFECheats = 0xffffffff;
    iVar3 = 0;
    iVar1 = 0;
    do {
      if (iVar1 >> 0x10 != cheat_AllCheats) {
        FECheat_HandleActivation__F10tCheatCode(iVar1 >> 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar3 * 0x10000;
    } while (iVar3 * 0x10000 >> 0x10 < 0x1f);
    break;
  case cheat_NFSTeamRecords:
    Stattool_GetAllDefaultRecords__FP13tRecordBufferb(Stats_gTrackRecords,&DAT_00000001);
    break;
  case cheat_LotsaMoney:
    tournamentManager.fMoney = tournamentManager.fMoney + 100000000;
    break;
  case cheat_AllNotRaced:
  case cheat_AllGold:
  case cheat_AllSilver:
  case cheat_AllBronze:
    sVar2 = 0;
    while ((int)sVar2 < 0x40) {
      tournamentManager.fBestPlacement[(int)sVar2] = (char)cheat + -0x1b;
      sVar2 = sVar2 + 1;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FECheat_EncodeString__FPcT0(char *input /*$a2*/, char *output /*$a1*/)
 // line 159, offset 0x80023410
	/* begin block 1 */
		// Start line: 160
		// Start offset: 0x80023410
		// Variables:
	// 		int i; // $a3
	// 		int j; // $a2
	// 		char buffer[8]; // stack offset -8
	/* end block 1 */
	// End offset: 0x80023494
	// End Line: 182

	/* begin block 2 */
		// Start line: 313
	/* end block 2 */
	// End Line: 314

	/* begin block 3 */
		// Start line: 320
	/* end block 3 */
	// End Line: 321

	/* begin block 4 */
		// Start line: 320
	/* end block 4 */
	// End Line: 321

void FECheat_EncodeString__FPcT0(char *input,char *output)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  byte local_8 [8];
  
  iVar5 = 0;
  do {
    pbVar2 = local_8 + iVar5;
    pbVar3 = (byte *)(input + iVar5);
    pcVar1 = output + iVar5;
    iVar5 = iVar5 + 1;
    *pbVar2 = *pbVar3;
    *pcVar1 = '\0';
  } while (iVar5 < 8);
  iVar5 = 0;
  do {
    uVar4 = 0;
    do {
      pbVar3 = local_8 + uVar4;
      output[iVar5] = output[iVar5] | (byte)(((uint)*pbVar3 & 1) << (uVar4 & 0x1f));
      uVar4 = uVar4 + 1;
      *pbVar3 = *pbVar3 >> 1;
    } while ((int)uVar4 < 8);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FECheat_EncodeString2__FPcT0(char *input /*$a2*/, char *output /*$t0*/)
 // line 188, offset 0x8002349c
	/* begin block 1 */
		// Start line: 189
		// Start offset: 0x8002349C
		// Variables:
	// 		int i; // $a3
	// 		char buffer[8]; // stack offset -8
	/* end block 1 */
	// End offset: 0x800235D0
	// End Line: 222

	/* begin block 2 */
		// Start line: 375
	/* end block 2 */
	// End Line: 376

	/* begin block 3 */
		// Start line: 382
	/* end block 3 */
	// End Line: 383

	/* begin block 4 */
		// Start line: 382
	/* end block 4 */
	// End Line: 383

void FECheat_EncodeString2__FPcT0(char *input,char *output)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte local_8 [8];
  
  iVar6 = 0;
  pbVar5 = (byte *)input;
  do {
    local_8[iVar6] = ~*pbVar5;
    pbVar4 = (byte *)(output + iVar6);
    iVar6 = iVar6 + 1;
    *pbVar4 = ~*pbVar5;
    pbVar5 = (byte *)(input + iVar6);
  } while (iVar6 < 8);
  uVar7 = 0;
  do {
    pbVar5 = (byte *)(output + uVar7);
    *output = *output ^ (byte)(((int)(uint)(byte)*output >> (uVar7 & 0x1f) & 1U) << (uVar7 & 0x1f));
    *pbVar5 = *pbVar5 ^ (byte)(((int)(uint)*pbVar5 >> (uVar7 & 0x1f) & 1U) << (uVar7 & 0x1f));
    *output = *output | (byte)(((int)(uint)local_8[uVar7] >> (uVar7 & 0x1f) & 1U) << (uVar7 & 0x1f))
    ;
    uVar2 = uVar7 & 0x1f;
    uVar1 = uVar7 & 0x1f;
    uVar7 = uVar7 + 1;
    *pbVar5 = *pbVar5 | (byte)(((int)(uint)local_8[0] >> uVar2 & 1U) << uVar1);
  } while ((int)uVar7 < 8);
  iVar6 = 1;
  do {
    pbVar4 = (byte *)(output + iVar6);
    uVar7 = iVar6 - 1;
    pbVar5 = local_8 + iVar6;
    bVar3 = *pbVar4 & 0xfe;
    *pbVar4 = bVar3;
    bVar3 = bVar3 ^ (byte)(((int)(uint)bVar3 >> (uVar7 & 0x1f) & 1U) << (uVar7 & 0x1f));
    *pbVar4 = bVar3;
    bVar3 = bVar3 | (byte)((int)(uint)*pbVar5 >> (uVar7 & 0x1f)) & 1;
    *pbVar4 = bVar3;
    iVar6 = iVar6 + 1;
    *pbVar4 = bVar3 | (byte)(((uint)*pbVar5 & 1) << (uVar7 & 0x1f));
  } while (iVar6 < 8);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FECheat_ActivateBonus__F10tCheatCode(enum tCheatCode cheat /*$s0*/)
 // line 232, offset 0x800235d8
	/* begin block 1 */
		// Start line: 233
		// Start offset: 0x800235D8
	/* end block 1 */
	// End offset: 0x800235D8
	// End Line: 233

	/* begin block 2 */
		// Start line: 470
	/* end block 2 */
	// End Line: 471

	/* begin block 3 */
		// Start line: 481
	/* end block 3 */
	// End Line: 482

	/* begin block 4 */
		// Start line: 481
	/* end block 4 */
	// End Line: 482

void FECheat_ActivateBonus__F10tCheatCode(tCheatCode cheat)

{
  FECheat_HandleActivation__F10tCheatCode(cheat);
  gFEBonus = gFEBonus | 1 << (cheat & 0x1f);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ FECheat_ActivateCheat__FPc(char *cheat /*$a0*/)
 // line 242, offset 0x80023614
	/* begin block 1 */
		// Start line: 243
		// Start offset: 0x80023614
		// Variables:
	// 		int i; // $s2
	// 		int j; // $a1
	// 		char buffer[8]; // stack offset -24
	// 		void * result; // $s1

		/* begin block 1.1 */
			// Start line: 243
			// Start offset: 0x80023614

			/* begin block 1.1.1 */
				// Start line: 250
				// Start offset: 0x80023648

				/* begin block 1.1.1.1 */
					// Start line: 256
					// Start offset: 0x80023684

					/* begin block 1.1.1.1.1 */
						// Start line: 256
						// Start offset: 0x80023690

						/* begin block 1.1.1.1.1.1 */
							// Start line: 256
							// Start offset: 0x80023690
							// Variables:
						// 		struct tDialogMessageString *this; // $s0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 256
								// Start offset: 0x80023690
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80023690
							// End Line: 256
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80023690
						// End Line: 256
					/* end block 1.1.1.1.1 */
					// End offset: 0x80023698
					// End Line: 256
				/* end block 1.1.1.1 */
				// End offset: 0x80023698
				// End Line: 256
			/* end block 1.1.1 */
			// End offset: 0x80023698
			// End Line: 256
		/* end block 1.1 */
		// End offset: 0x80023700
		// End Line: 269
	/* end block 1 */
	// End offset: 0x80023700
	// End Line: 272

	/* begin block 2 */
		// Start line: 493
	/* end block 2 */
	// End Line: 494

	/* begin block 3 */
		// Start line: 501
	/* end block 3 */
	// End Line: 502

	/* begin block 4 */
		// Start line: 501
	/* end block 4 */
	// End Line: 502

void * FECheat_ActivateCheat__FPc(char *cheat)

{
  tFEApplication *ptVar1;
  tFEApplication *ptVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar local_18 [8];
  
  FECheat_EncodeString__FPcT0(cheat,(char *)local_18);
  iVar7 = 0;
  iVar6 = 0;
  do {
    iVar5 = 0;
    iVar3 = iVar6;
    if (9 < iVar7) {
      return (void *)0x0;
    }
    do {
      if (cheatList[0].name[iVar3] != local_18[iVar5]) break;
      iVar5 = iVar5 + 1;
      iVar3 = iVar5 + iVar6;
    } while (iVar5 < 8);
    iVar6 = iVar6 + 0xc;
    if (iVar5 == 8) {
      AudioCmn_PlayFESFX__Fi(0x1a);
      ptVar1 = FEApp;
      pcVar4 = TextSys_Word__Fi(0x27a);
      ptVar2 = FEApp;
      *(char **)&(ptVar1->MemCardDialog).tDialogMessageString.tDialogBase.fFullyOpen = pcVar4;
      Display__11tDialogBase((tDialogBase *)ptVar2->waitingForOtherPlayer);
      FECheat_HandleActivation__F10tCheatCode(cheatList[iVar7].cheat);
      gFECheats = gFECheats | 1 << (cheatList[iVar7].cheat & 0x1f);
      return &DAT_00000001;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



// decompiled code
// original method signature: 
// void * /*$ra*/ FECheat_IsCheatEnabled__F10tCheatCode(enum tCheatCode cheat /*$a0*/)
 // line 277, offset 0x8002371c
	/* begin block 1 */
		// Start line: 278
		// Start offset: 0x8002371C
	/* end block 1 */
	// End offset: 0x8002371C
	// End Line: 279

	/* begin block 2 */
		// Start line: 570
	/* end block 2 */
	// End Line: 571

	/* begin block 3 */
		// Start line: 576
	/* end block 3 */
	// End Line: 577

	/* begin block 4 */
		// Start line: 576
	/* end block 4 */
	// End Line: 577

	/* begin block 5 */
		// Start line: 577
	/* end block 5 */
	// End Line: 578

	/* begin block 6 */
		// Start line: 577
	/* end block 6 */
	// End Line: 578

void * FECheat_IsCheatEnabled__F10tCheatCode(tCheatCode cheat)

{
  return (void *)(uint)(((gFECheats | gFEBonus) & 1 << (cheat & 0x1f)) != 0);
}



// decompiled code
// original method signature: 
// void /*$ra*/ FECheat_SaveBonus__FRUl(unsigned long *cheat /*$a0*/)
 // line 285, offset 0x80023748
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x80023748
	/* end block 1 */
	// End offset: 0x80023748
	// End Line: 287

	/* begin block 2 */
		// Start line: 585
	/* end block 2 */
	// End Line: 586

	/* begin block 3 */
		// Start line: 592
	/* end block 3 */
	// End Line: 593

	/* begin block 4 */
		// Start line: 592
	/* end block 4 */
	// End Line: 593

	/* begin block 5 */
		// Start line: 593
	/* end block 5 */
	// End Line: 594

	/* begin block 6 */
		// Start line: 593
	/* end block 6 */
	// End Line: 594

void FECheat_SaveBonus__FRUl(ulong *cheat)

{
  *cheat = gFEBonus;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FECheat_LoadBonus__FRUl(unsigned long *cheat /*$a0*/)
 // line 293, offset 0x80023758
	/* begin block 1 */
		// Start line: 294
		// Start offset: 0x80023758
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x800237B8
	// End Line: 306

	/* begin block 2 */
		// Start line: 601
	/* end block 2 */
	// End Line: 602

	/* begin block 3 */
		// Start line: 608
	/* end block 3 */
	// End Line: 609

	/* begin block 4 */
		// Start line: 608
	/* end block 4 */
	// End Line: 609

void FECheat_LoadBonus__FRUl(ulong *cheat)

{
  tCheatCode cheat_00;
  
  cheat_00 = cheat_Roadster;
  gFEBonus = *cheat;
  gFECheats = 0;
  do {
    if ((gFEBonus & 1 << (cheat_00 & 0x1f)) != 0) {
      FECheat_HandleActivation__F10tCheatCode(cheat_00);
    }
    cheat_00 = cheat_00 + cheat_Pony;
  } while ((int)cheat_00 < 0x1f);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ FECheat_IsTheUserACryBabyCheater__Fv()
 // line 312, offset 0x800237d0
	/* begin block 1 */
		// Start line: 313
		// Start offset: 0x800237D0
	/* end block 1 */
	// End offset: 0x800237D0
	// End Line: 317

	/* begin block 2 */
		// Start line: 658
	/* end block 2 */
	// End Line: 659

	/* begin block 3 */
		// Start line: 665
	/* end block 3 */
	// End Line: 666

	/* begin block 4 */
		// Start line: 665
	/* end block 4 */
	// End Line: 666

	/* begin block 5 */
		// Start line: 669
	/* end block 5 */
	// End Line: 670

/* WARNING: Unknown calling convention yet parameter storage is locked */

void * FECheat_IsTheUserACryBabyCheater__Fv(void)

{
  return (void *)(uint)(gFECheats != 0);
}



// decompiled code
// original method signature: 
// void * /*$ra*/ FECheat_ActivateBonusByCode__FPc(char *code /*$a0*/)
 // line 324, offset 0x800237e0
	/* begin block 1 */
		// Start line: 325
		// Start offset: 0x800237E0
		// Variables:
	// 		int i; // $a3
	// 		int j; // $a1
	// 		char buffer[8]; // stack offset -24
	// 		void * result; // $s1
	/* end block 1 */
	// End offset: 0x80023880
	// End Line: 350

	/* begin block 2 */
		// Start line: 681
	/* end block 2 */
	// End Line: 682

	/* begin block 3 */
		// Start line: 689
	/* end block 3 */
	// End Line: 690

	/* begin block 4 */
		// Start line: 689
	/* end block 4 */
	// End Line: 690

void * FECheat_ActivateBonusByCode__FPc(char *code)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  tCheat *ptVar5;
  uchar local_18 [8];
  
  FECheat_EncodeString2__FPcT0(code,(char *)local_18);
  iVar4 = 0;
  ptVar5 = &bonusList;
  iVar3 = 0;
  do {
    iVar2 = 0;
    iVar1 = iVar3;
    do {
      if (bonusList.name[iVar1] != local_18[iVar2]) break;
      iVar2 = iVar2 + 1;
      iVar1 = iVar2 + iVar3;
    } while (iVar2 < 8);
    iVar4 = iVar4 + 1;
    if (iVar2 == 8) {
      AudioCmn_PlayFESFX__Fi(0x1a);
      FECheat_ActivateBonus__F10tCheatCode(ptVar5->cheat);
      return &DAT_00000001;
    }
    ptVar5 = ptVar5 + 1;
    iVar3 = iVar3 + 0xc;
    if (2 < iVar4) {
      return (void *)0x0;
    }
  } while( true );
}





