#include "NFS4.H"
#include "AUDIOCMN.H"

// decompiled code
// original method signature: 
// int /*$ra*/ AudioCmn_MusicLevel__Fi(int level /*$a0*/)
 // line 278, offset 0x80076420
	/* begin block 1 */
		// Start line: 279
		// Start offset: 0x80076420
	/* end block 1 */
	// End offset: 0x80076478
	// End Line: 280

int AudioCmn_MusicLevel__Fi(int level)
{
  uint uVar1;
  
  if (level < 0x56) {
    return level * 0x46 >> 7;
  }
  uVar1 = (level + -0x55) * 7;
  return (((int)(uVar1 + (uVar1 >> 0x1f)) >> 1) + 0x55) * 0x46 >> 7;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioCmn_GetTrackRecordLapTime__Fv()
 // line 283, offset 0x80076480
	/* begin block 1 */
		// Start line: 284
		// Start offset: 0x80076480
	/* end block 1 */
	// End offset: 0x80076480
	// End Line: 288

int AudioCmn_GetTrackRecordLapTime__Fv(void)
{
  return DAT_801132d4;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_InitThunder__Fv()
 // line 303, offset 0x80076490
	/* begin block 1 */
		// Start line: 304
		// Start offset: 0x80076490
	/* end block 1 */
	// End offset: 0x80076490
	// End Line: 305

void AudioCmn_InitThunder__Fv(void)
{
  AudioCmn_ThunderAmp = 0;
  AudioCmn_ThunderAzi = 0;
  AudioCmn_ThunderDel = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_PlayThunder__Fii(int intensity /*$a0*/, int azimuth /*$a1*/)
 // line 310, offset 0x800764a4
	/* begin block 1 */
		// Start line: 311
		// Start offset: 0x800764A4
	/* end block 1 */
	// End offset: 0x800764C8
	// End Line: 316

void AudioCmn_PlayThunder__Fii(int intensity,int azimuth)
{
  if (AudioCmn_ThunderAmp < intensity) {
    AudioCmn_ThunderDel = 0x87 - intensity;
    AudioCmn_ThunderAmp = intensity;
    AudioCmn_ThunderAzi = azimuth;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_UpdateThunder__Fv()
 // line 320, offset 0x800764d0
	/* begin block 1 */
		// Start line: 321
		// Start offset: 0x800764D0
	/* end block 1 */
	// End offset: 0x8007656C
	// End Line: 335

void AudioCmn_UpdateThunder__Fv(void)
{
  uint uVar1;
  long lVar2;
  
  if ((0 < AudioCmn_ThunderAmp) &&
     (AudioCmn_ThunderDel = AudioCmn_ThunderDel - 1, (int)AudioCmn_ThunderDel < 0)) {
    AudioCmn_PlaySound__Fiiiii(0,0x16,AudioCmn_ThunderAzi,AudioCmn_ThunderAmp,0x40);
    if (AudioCmn_ThunderAmp < 0x2e) {
      uVar1 = random();
      uVar1 = uVar1 & 7;
      AudioCmn_ThunderAmp = AudioCmn_ThunderAmp + 2;
    }
    else {
      uVar1 = random();
      uVar1 = uVar1 & 0xf;
      AudioCmn_ThunderAmp = AudioCmn_ThunderAmp + 3;
    }
    AudioCmn_ThunderAmp = AudioCmn_ThunderAmp - uVar1;
    lVar2 = random();
    AudioCmn_ThunderDel = lVar2 + 0x14U & 3;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_InitAsyncSfx__Fv()
 // line 454, offset 0x8007657c
	/* begin block 1 */
		// Start line: 455
		// Start offset: 0x8007657C

		/* begin block 1.1 */
			// Start line: 456
			// Start offset: 0x8007657C
			// Variables:
		// 		int i; // $a0

			/* begin block 1.1.1 */
				// Start line: 456
				// Start offset: 0x8007658C
			/* end block 1.1.1 */
			// End offset: 0x80076598
			// End Line: 459
		/* end block 1.1 */
		// End offset: 0x800765AC
		// End Line: 462
	/* end block 1 */
	// End offset: 0x800765AC
	// End Line: 462

void AudioCmn_InitAsyncSfx__Fv(void)
{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &AudioCmn_gSfxSlot;
  while (bVar1 = iVar3 < 0x20, iVar3 = iVar3 + 1, bVar1) {
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    puVar2[5] = 0;
    puVar2 = puVar2 + 6;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_RemoveAsyncSfx__Fi(int slot /*$a0*/)
 // line 467, offset 0x800765b4
	/* begin block 1 */
		// Start line: 468
		// Start offset: 0x800765B4
		// Variables:
	// 		struct AudioCmn_tAsyncSfxSlot *s; // $s0
	/* end block 1 */
	// End offset: 0x80076628
	// End Line: 487

void AudioCmn_RemoveAsyncSfx__Fi(int slot)
{
  if ((&DAT_8010eb38)[slot * 6] != -1) {
    if ((&DAT_8010eb3c)[slot * 6] != -1) {
      SNDbankremove();
      (&DAT_8010eb3c)[slot * 6] = 0xffffffff;
      if ((&DAT_8010eb48)[slot * 6] != 0) {
        purgememadr();
        (&DAT_8010eb48)[slot * 6] = 0;
      }
    }
    (&DAT_8010eb38)[slot * 6] = 0xffffffff;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_DeInitAsyncSfx__Fv()
 // line 493, offset 0x8007663c
	/* begin block 1 */
		// Start line: 494
		// Start offset: 0x8007663C

		/* begin block 1.1 */
			// Start line: 494
			// Start offset: 0x8007663C
			// Variables:
		// 		int i; // $s0
		/* end block 1.1 */
		// End offset: 0x80076664
		// End Line: 496
	/* end block 1 */
	// End offset: 0x80076664
	// End Line: 496

void AudioCmn_DeInitAsyncSfx__Fv(void)
{
  int slot;
  
  slot = 0;
  do {
    AudioCmn_RemoveAsyncSfx__Fi(slot);
    slot = slot + 1;
  } while (slot < 0x20);
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioCmn_RemoveOldestAsyncSfx__Fi(int bank /*$a0*/)
 // line 501, offset 0x80076674
	/* begin block 1 */
		// Start line: 502
		// Start offset: 0x80076674
		// Variables:
	// 		int oldest; // $s0
	// 		int ticks; // $v1

		/* begin block 1.1 */
			// Start line: 502
			// Start offset: 0x80076674
			// Variables:
		// 		int i; // $a3

			/* begin block 1.1.1 */
				// Start line: 506
				// Start offset: 0x800766A0
			/* end block 1.1.1 */
			// End offset: 0x800766D8
			// End Line: 513
		/* end block 1.1 */
		// End offset: 0x800766E4
		// End Line: 515

		/* begin block 1.2 */
			// Start line: 516
			// Start offset: 0x800766E4

			/* begin block 1.2.1 */
				// Start line: 517
				// Start offset: 0x800766EC

				/* begin block 1.2.1.1 */
					// Start line: 518
					// Start offset: 0x800766EC
					// Variables:
				// 		int i; // $a1

					/* begin block 1.2.1.1.1 */
						// Start line: 518
						// Start offset: 0x800766F8
					/* end block 1.2.1.1.1 */
					// End offset: 0x8007672C
					// End Line: 523
				/* end block 1.2.1.1 */
				// End offset: 0x80076738
				// End Line: 524
			/* end block 1.2.1 */
			// End offset: 0x80076738
			// End Line: 524
		/* end block 1.2 */
		// End offset: 0x80076738
		// End Line: 524
	/* end block 1 */
	// End offset: 0x80076748
	// End Line: 528

int AudioCmn_RemoveOldestAsyncSfx__Fi(int bank)
{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int slot;
  
  slot = -1;
  iVar4 = 0;
  puVar3 = &AudioCmn_gSfxSlot;
  iVar1 = -0x10;
  while (iVar4 < 0x20) {
    if ((puVar3[1] != -1) && ((int)puVar3[3] < iVar1)) {
      iVar1 = puVar3[3];
      slot = iVar4;
    }
    puVar3 = puVar3 + 6;
    iVar4 = iVar4 + 1;
  }
  iVar1 = 0;
  if (slot == -1) {
    piVar2 = &AudioCmn_gSfxSlot;
    while (iVar1 < 0x20) {
      if ((piVar2[1] != -1) && (*piVar2 < bank)) {
        slot = iVar1;
      }
      piVar2 = piVar2 + 6;
      iVar1 = iVar1 + 1;
    }
  }
  if (-1 < slot) {
    AudioCmn_RemoveAsyncSfx__Fi(slot);
  }
  return slot;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_LoadAsyncSfx__FiiPvi(int bank /*$s2*/, int patch /*$s6*/, void *pbank /*$s7*/, int size /*$s3*/)
 // line 534, offset 0x8007675c
	/* begin block 1 */
		// Start line: 535
		// Start offset: 0x8007675C
		// Variables:
	// 		int slot; // $v1
	// 		int check; // stack offset -48
	/* end block 1 */
	// End offset: 0x800768D4
	// End Line: 599

void AudioCmn_LoadAsyncSfx__FiiPvi(int bank,int patch,void *pbank,int size)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_30 [2];
  
  iVar2 = 0;
  piVar3 = &AudioCmn_gSfxSlot;
  while (((patch != piVar3[1] || (bank != *piVar3)) || (piVar3[2] != -1))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 6;
    if (0x1f < iVar2) {
      return;
    }
  }
  if (size != 0) {
    do {
      iVar2 = SNDmemlargestunused(local_30);
      if (size <= iVar2 + -0x1000) {
        local_30[0] = SNDbankadd(piVar3 + 2,pbank);
        if (local_30[0] == 7) {
          uVar1 = SNDbankheadersize(piVar3[2]);
          iVar2 = reservememadr("SFXHDR",uVar1,0x10);
          piVar3[5] = iVar2;
          if (iVar2 != 0) {
            SNDbankheadercopy(iVar2,piVar3[2]);
            piVar3[1] = patch;
            piVar3[3] = 0;
            return;
          }
        }
        if (bank == 2) {
          puts("SNDbankadd failed on speech!\n");
        }
        SNDbankheadersize(piVar3[2]);
        if (-1 < local_30[0]) {
          SNDbankremove(piVar3[2]);
        }
        goto LAB_800768b8;
      }
      iVar2 = AudioCmn_RemoveOldestAsyncSfx__Fi(bank);
    } while (iVar2 != -1);
    if (bank == 2) {
      puts("out of SPU ram on speech!\n");
      piVar3[2] = -1;
      goto LAB_800768bc;
    }
  }
LAB_800768b8:
  piVar3[2] = -1;
LAB_800768bc:
  piVar3[1] = -1;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioCmn_GetAsyncSfx__Fiib(int bank /*$s1*/, int patch /*$s2*/, unsigned int checkonly /*$s3*/)
 // line 620, offset 0x80076900
	/* begin block 1 */
		// Start line: 621
		// Start offset: 0x80076900
		// Variables:
	// 		int slot; // $s0
	// 		struct CopSpeak_tRequest r; // stack offset -56

		/* begin block 1.1 */
			// Start line: 621
			// Start offset: 0x80076900

			/* begin block 1.1.1 */
				// Start line: 625
				// Start offset: 0x80076930
				// Variables:
			// 		struct AudioCmn_tAsyncSfxSlot *s; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8007695C
			// End Line: 629
		/* end block 1.1 */
		// End offset: 0x80076968
		// End Line: 638
	/* end block 1 */
	// End offset: 0x80076A58
	// End Line: 671

int AudioCmn_GetAsyncSfx__Fiib(int bank,int patch,uint checkonly)
{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  CopSpeak_tRequest CStack56;
  
  iVar4 = 0;
  piVar3 = &AudioCmn_gSfxSlot;
  while (iVar4 < 0x20) {
    if ((patch == piVar3[1]) && (bank == *piVar3)) {
      piVar3[3] = 0;
      return piVar3[2];
    }
    piVar3 = piVar3 + 6;
    iVar4 = iVar4 + 1;
  }
  uVar5 = 0;
  puVar2 = &AudioCmn_gSfxSlot;
  do {
    if (puVar2[1] == -1) break;
    uVar5 = uVar5 + 1;
    puVar2 = puVar2 + 6;
  } while ((int)uVar5 < 0x20);
  bVar1 = uVar5 < 0x20;
  if ((checkonly == 0) && (bVar1 = uVar5 < 0x20, uVar5 == 0x20)) {
    uVar5 = AudioCmn_RemoveOldestAsyncSfx__Fi(bank);
    bVar1 = uVar5 < 0x20;
  }
  if (!bVar1) {
    return -1;
  }
  if (checkonly == 0) {
    iVar4 = CopSpeak_SfxQueued__Fv();
    if (5 < iVar4) {
      return -1;
    }
    CopSpeak_InitRequest__FP17CopSpeak_tRequest(&CStack56);
    CStack56.sfx = '\x01';
    CStack56.bank = (char)bank;
    CStack56.phrase = patch;
    iVar4 = CopSpeak_Request__FP17CopSpeak_tRequest(&CStack56);
    if (iVar4 == -1) {
      return -1;
    }
  }
  (&AudioCmn_gSfxSlot)[uVar5 * 6] = bank;
  (&DAT_8010eb38)[uVar5 * 6] = patch;
  (&DAT_8010eb40)[uVar5 * 6] = 0;
  return -1;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_Init__Fv()
 // line 678, offset 0x80076a74
	/* begin block 1 */
		// Start line: 679
		// Start offset: 0x80076A74
		// Variables:
	// 		int j; // $v1
	// 		int temptrack; // $a0
	/* end block 1 */
	// End offset: 0x80076B84
	// End Line: 724

void AudioCmn_Init__Fv(void)
{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (iGp000000f8 != 0) {
    AudioCmn_InitChannelArray__Fv();
    iVar2 = 0;
    uGp000000e0 = 0;
    if (false) {
      iVar2 = 5;
    }
    if (false) {
      puVar1 = &falseLapTrigNumsBackward;
    }
    else {
      puVar1 = &falseLapTrigNumsForward;
    }
    uGp00000168 = *(undefined4 *)(puVar1 + iVar2 * 8);
    uGp0000016c = *(undefined4 *)(puVar1 + iVar2 * 8 + 1);
    uGp000000e4 = 0;
    uGp000000e8 = 0;
  }
  iVar2 = 0;
  puVar7 = &AudioCmn_gPlayerArrested;
  puVar6 = &gtotallaptimes;
  puVar5 = &PlayersRampedGasLevel;
  puVar4 = &bestLapTime;
  puVar3 = &AudioCmn_gReTrig;
  do {
    *puVar3 = 0;
    (&fAmbientRangeON)[iVar2] = 0;
    (&fMysticWindON)[iVar2] = 0;
    (&currentLap)[iVar2] = 0;
    *puVar4 = 0;
    *puVar5 = 0;
    *puVar6 = 0x200;
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 8;
  } while (iVar2 < 2);
  AudioCmn_InitThunder__Fv();
  AudioCmn_InitAsyncSfx__Fv();
  AudioTrk_StartUp__Fv();
  uGp0000012c = 0;
  uGp0000012d = 0;
  uGp000000f1 = 0;
  uGp000000f2 = 0;
  iGp000000f4 = AudioCmn_GetTrackRecordLapTime__Fv();
  DAT_801132e0 = uGp00000108;
  uGp000000dc = 4;
  uGp00000190 = 0x7f;
  uGp0000019c = 0;
  uGp000001a0 = 0;
  uGp000001c4 = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_Reset__Fv()
 // line 749, offset 0x80076bec
	/* begin block 1 */
		// Start line: 750
		// Start offset: 0x80076BEC

		/* begin block 1.1 */
			// Start line: 750
			// Start offset: 0x80076BEC
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x80076C6C
		// End Line: 767

		/* begin block 1.2 */
			// Start line: 774
			// Start offset: 0x80076C84

			/* begin block 1.2.1 */
				// Start line: 782
				// Start offset: 0x80076C9C
				// Variables:
			// 		int ticks; // $s6
			// 		int goodtogo; // $s1

				/* begin block 1.2.1.1 */
					// Start line: 789
					// Start offset: 0x80076CB4
					// Variables:
				// 		int check; // stack offset -40

					/* begin block 1.2.1.1.1 */
						// Start line: 791
						// Start offset: 0x80076CD0

						/* begin block 1.2.1.1.1.1 */
							// Start line: 799
							// Start offset: 0x80076CF8

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 800
								// Start offset: 0x80076CF8

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 801
									// Start offset: 0x80076D08

									/* begin block 1.2.1.1.1.1.1.1.1 */
										// Start line: 801
										// Start offset: 0x80076D08
										// Variables:
									// 		int i; // $s0
									/* end block 1.2.1.1.1.1.1.1.1 */
									// End offset: 0x80076D34
									// End Line: 805
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x80076D34
								// End Line: 805
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x80076D34
							// End Line: 805

							/* begin block 1.2.1.1.1.1.2 */
								// Start line: 809
								// Start offset: 0x80076D60
								// Variables:
							// 		int i; // $s2

								/* begin block 1.2.1.1.1.1.2.1 */
									// Start line: 809
									// Start offset: 0x80076D64

									/* begin block 1.2.1.1.1.1.2.1.1 */
										// Start line: 811
										// Start offset: 0x80076D78

										/* begin block 1.2.1.1.1.1.2.1.1.1 */
											// Start line: 812
											// Start offset: 0x80076D88
											// Variables:
										// 		int patch; // $v0
										/* end block 1.2.1.1.1.1.2.1.1.1 */
										// End offset: 0x80076DE0
										// End Line: 825
									/* end block 1.2.1.1.1.1.2.1.1 */
									// End offset: 0x80076DE0
									// End Line: 825
								/* end block 1.2.1.1.1.1.2.1 */
								// End offset: 0x80076DE0
								// End Line: 825
							/* end block 1.2.1.1.1.1.2 */
							// End offset: 0x80076DEC
							// End Line: 827
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80076DEC
						// End Line: 827
					/* end block 1.2.1.1.1 */
					// End offset: 0x80076DEC
					// End Line: 827
				/* end block 1.2.1.1 */
				// End offset: 0x80076DEC
				// End Line: 827
			/* end block 1.2.1 */
			// End offset: 0x80076DEC
			// End Line: 863
		/* end block 1.2 */
		// End offset: 0x80076DEC
		// End Line: 863

		/* begin block 1.3 */
			// Start line: 868
			// Start offset: 0x80076DEC

			/* begin block 1.3.1 */
				// Start line: 875
				// Start offset: 0x80076E04
				// Variables:
			// 		int ticks; // $s3

				/* begin block 1.3.1.1 */
					// Start line: 893
					// Start offset: 0x80076EBC

					/* begin block 1.3.1.1.1 */
						// Start line: 899
						// Start offset: 0x80076EFC
					/* end block 1.3.1.1.1 */
					// End offset: 0x80076F04
					// End Line: 901
				/* end block 1.3.1.1 */
				// End offset: 0x80076F04
				// End Line: 901
			/* end block 1.3.1 */
			// End offset: 0x80076F1C
			// End Line: 904
		/* end block 1.3 */
		// End offset: 0x80076F1C
		// End Line: 904
	/* end block 1 */
	// End offset: 0x80076F1C
	// End Line: 904

void AudioCmn_Reset__Fv(void)
{
  bool bVar1;
  int iVar2;
  int patch;
  int *piVar3;
  undefined4 *puVar4;
  int volume;
  undefined auStack40 [8];
  
  CopSpeak_SilenceCop__FP8Car_tObji((Car_tObj *)0x0,0);
  volume = 0;
  CopSpeak_Cancel__Fv();
  SPCH_ClearEventQueue();
  AudioCmn_DeInitAsyncSfx__Fv();
  piVar3 = &gaChannel;
  do {
    if (*piVar3 != -1) {
      SNDstop();
      *piVar3 = -1;
      piVar3[1] = -1;
    }
    volume = volume + 1;
    piVar3 = piVar3 + 2;
  } while (volume < 0x47);
  if (cGp0000012c != '\0') {
    AudioCmn_ReverbOff__Fv();
  }
  AudioCmn_Init__Fv();
  if (0 < iGp00000114) {
    bVar1 = false;
    volume = gettick();
    while ((!bVar1 && (iVar2 = gettick(), iVar2 < volume + 0x280))) {
      bVar1 = true;
      CopSpeak_Server__Fv();
      systemtask(0);
      iVar2 = SNDmemlargestunused(auStack40);
      if (0x8000 < iVar2) {
        if (GameSetup_gData == 1) {
          iVar2 = 0;
          do {
            patch = AudioCmn_GetAsyncSfx__Fiib(2,iVar2 + 0x2f,0);
            if (patch == -1) {
              bVar1 = false;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 4);
        }
        if ((DAT_80113234 == 1) && (iVar2 = AudioCmn_GetAsyncSfx__Fiib(1,0,0), iVar2 == -1)) {
          bVar1 = false;
        }
        iVar2 = 0;
        puVar4 = &GameSetup_gData;
        while (iVar2 < 0) {
          if (puVar4[0xf6] == 2) {
            patch = CopSpeak_GetEnginePatch__Fii(puVar4[0xf5],0);
            if ((-1 < patch) && (patch = AudioCmn_GetAsyncSfx__Fiib(1,patch,0), patch == -1)) {
              bVar1 = false;
            }
            patch = CopSpeak_GetEnginePatch__Fii(puVar4[0xf5],1);
            if ((-1 < patch) && (patch = AudioCmn_GetAsyncSfx__Fiib(1,patch,0), patch == -1)) {
              bVar1 = false;
            }
          }
          puVar4 = puVar4 + 0x2d;
          iVar2 = iVar2 + 1;
        }
      }
    }
  }
  AudioTrk_PreLoad__Fv();
  if (iGp00000104 == 0) {
    return;
  }
  volume = AudioCmn_MusicLevel__Fi(iGp00000104);
  AudioMus_Volume__Fi(volume);
  SNDSTRM_setpriority(gMusicHandle,0xff,0xff);
  volume = gettick();
  gettick();
  AudioMus_Buffered__Fv();
  AudioMus_Threshold__Fv();
  do {
    bVar1 = false;
    iVar2 = gettick();
    if ((iVar2 < volume + 0x40) || (iVar2 = AudioMus_Threshold__Fv(), iVar2 < 1)) {
LAB_80076e8c:
      iVar2 = gettick();
      if (iVar2 < volume + 0x100) {
        bVar1 = true;
      }
    }
    else {
      iVar2 = AudioMus_Buffered__Fv();
      patch = AudioMus_Threshold__Fv();
      if (iVar2 < patch) goto LAB_80076e8c;
    }
    if (!bVar1) {
      volume = AudioMus_Buffered__Fv();
      iVar2 = AudioMus_Threshold__Fv();
      if (volume < iVar2 + -100) {
        DAT_801132dc = 0;
        iGp00000104 = 0;
        volume = AudioCmn_MusicLevel__Fi(0);
        AudioMus_Volume__Fi(volume);
      }
      else {
        gettick();
      }
      gettick();
      AudioMus_Buffered__Fv();
      AudioMus_Threshold__Fv();
      return;
    }
    systemtask(0);
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_DeInit__Fv()
 // line 911, offset 0x80076f44
	/* begin block 1 */
		// Start line: 912
		// Start offset: 0x80076F44

		/* begin block 1.1 */
			// Start line: 912
			// Start offset: 0x80076F44
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x80076FCC
		// End Line: 931
	/* end block 1 */
	// End offset: 0x80076FFC
	// End Line: 938

void AudioCmn_DeInit__Fv(void)
{
  int *piVar1;
  int iVar2;
  
  AudioEng_StopServer__Fv();
  iVar2 = 0;
  AudioEng_CleanUp__Fv();
  CopSpeak_Stop__Fv();
  uGp00000108 = DAT_801132e0;
  uGp00000104 = DAT_801132dc;
  AudioTrk_CleanUp__Fv();
  AudioCmn_DeInitAsyncSfx__Fv();
  piVar1 = &gaChannel;
  do {
    if (*piVar1 != -1) {
      SNDstop();
      *piVar1 = -1;
      piVar1[1] = -1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (iVar2 < 0x47);
  SNDstopall();
  SNDbankremove(0xffffffff);
  Audio_CleanUp__Fv();
  if (cGp0000012c != '\0') {
    AudioCmn_ReverbOff__Fv();
  }
  uGp000000fc = uGp00000120;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_SetLevels__Fv()
 // line 942, offset 0x8007701c
	/* begin block 1 */
		// Start line: 943
		// Start offset: 0x8007701C
	/* end block 1 */
	// End offset: 0x80077064
	// End Line: 947

void AudioCmn_SetLevels__Fv(void)
{
  if (DAT_80117048 != 0) {
    uGp00000190 = 0x20;
    iGp00000108 = (DAT_801132e0 * 0x40) / 0x7f;
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioCmn_GetTimePhrase__Fi(int time /*$a0*/)
 // line 955, offset 0x8007706c
	/* begin block 1 */
		// Start line: 956
		// Start offset: 0x8007706C
		// Variables:
	// 		int seconds; // $a0
	// 		static char compareTimes[25]; // offset 0x288
	// 		int index; // $v1
	/* end block 1 */
	// End offset: 0x800770B4
	// End Line: 989

int AudioCmn_GetTimePhrase__Fi(int time)
{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  if (time < 0) {
    time = time + -1 >> 6;
  }
  else {
    time = time >> 6;
  }
  pcVar1 = "\x1e\f\x06\x05\x04\x03\x02\x01";
  iVar2 = 0;
  do {
    iVar3 = iVar2;
    if ((int)*pcVar1 <= time) break;
    iVar3 = iVar2 + 1;
    pcVar1 = &DAT_8010e759 + iVar2;
    iVar2 = iVar3;
  } while (iVar3 < 0x19);
  return iVar3 + 0x35;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_CheckState__FP8Car_tObj(struct Car_tObj *car /*$s2*/)
 // line 994, offset 0x800770bc
	/* begin block 1 */
		// Start line: 995
		// Start offset: 0x800770BC
		// Variables:
	// 		char carnum; // $s4
	// 		int carspeed; // $a0

		/* begin block 1.1 */
			// Start line: 1033
			// Start offset: 0x80077174

			/* begin block 1.1.1 */
				// Start line: 1034
				// Start offset: 0x800771D8
				// Variables:
			// 		int opponents; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 1044
					// Start offset: 0x80077280

					/* begin block 1.1.1.1.1 */
						// Start line: 1046
						// Start offset: 0x80077298
						// Variables:
					// 		int position; // $s1
					/* end block 1.1.1.1.1 */
					// End offset: 0x80077330
					// End Line: 1064
				/* end block 1.1.1.1 */
				// End offset: 0x80077330
				// End Line: 1064
			/* end block 1.1.1 */
			// End offset: 0x8007736C
			// End Line: 1073
		/* end block 1.1 */
		// End offset: 0x8007736C
		// End Line: 1073

		/* begin block 1.2 */
			// Start line: 1079
			// Start offset: 0x8007736C

			/* begin block 1.2.1 */
				// Start line: 1080
				// Start offset: 0x800773AC
				// Variables:
			// 		struct CopSpeak_tRequest r; // stack offset -56
			// 		unsigned int saidplayer; // $s3
			// 		int opponents; // $s0

				/* begin block 1.2.1.1 */
					// Start line: 1113
					// Start offset: 0x800774E0

					/* begin block 1.2.1.1.1 */
						// Start line: 1116
						// Start offset: 0x800774F8
						// Variables:
					// 		int position; // $a1

						/* begin block 1.2.1.1.1.1 */
							// Start line: 1117
							// Start offset: 0x800774F8

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 1120
								// Start offset: 0x80077520

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 1121
									// Start offset: 0x80077520

									/* begin block 1.2.1.1.1.1.1.1.1 */
										// Start line: 1129
										// Start offset: 0x80077558
										// Variables:
									// 		int phrase; // $s0
									/* end block 1.2.1.1.1.1.1.1.1 */
									// End offset: 0x800775B4
									// End Line: 1145
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x800775B4
								// End Line: 1145
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x800775D0
							// End Line: 1149
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8007765C
						// End Line: 1165
					/* end block 1.2.1.1.1 */
					// End offset: 0x80077664
					// End Line: 1168
				/* end block 1.2.1.1 */
				// End offset: 0x80077664
				// End Line: 1168
			/* end block 1.2.1 */
			// End offset: 0x80077718
			// End Line: 1193
		/* end block 1.2 */
		// End offset: 0x80077718
		// End Line: 1193
	/* end block 1 */
	// End offset: 0x80077718
	// End Line: 1193

void AudioCmn_CheckState__FP8Car_tObj(Car_tObj *car)
{
  byte bVar1;
  bool bVar2;
  int patch;
  int patch_00;
  uint uVar3;
  CopSpeak_tRequest CStack56;
  
  bVar1 = *(byte *)&car->carIndex;
  uVar3 = (uint)bVar1;
  if ((GameSetup_gData == 1) || (GameSetup_gData == 5)) {
    if ((uRam00000260 & 0x200) != 0) {
      return;
    }
    if ((Cars_gNumHumanRaceCars == 2) && ((uRam00000260 & 0x200) != 0)) {
      return;
    }
  }
  if (DAT_801131f0 == 1) {
    return;
  }
  patch_00 = car->carInLane;
  if (false) {
    patch_00 = -patch_00;
  }
  if (((car->stats).lap < DAT_801131f0) &&
     (patch_00 = fixedmult(patch_00,0x50000),
     0 < (car->stats).sliceTotal +
         ((patch_00 / 6 + (patch_00 >> 0x1f) >> 0x10) - (patch_00 >> 0x1f)))) {
    if ((iGp000000f4 == 0) || ((int)-(&gtotallaptimes)[uVar3] < iGp000000f4)) {
      AudioCmn_GetAsyncSfx__Fiib(2,1,0);
    }
    if (((car->stats).lap != 0) && ((int)-(&gtotallaptimes)[uVar3] < (int)(&bestLapTime)[uVar3])) {
      AudioCmn_GetAsyncSfx__Fiib(2,0,0);
    }
    patch_00 = Stats_GetNumOpponents__Fv();
    if (1 < patch_00) {
      if ((patch_00 < 3) && ((car->stats).checkpointDisplay != 0)) {
        patch = AudioCmn_GetTimePhrase__Fi(-(car->stats).checkpointDifference);
      }
      else {
        patch = Stats_GetPosition__FP8Car_tObj(car);
        if (patch == patch_00) {
          patch = 8;
        }
        patch = patch + 0x4f;
      }
      if (DAT_801131f8 == 1) {
        AudioCmn_GetAsyncSfx__Fiib(2,uVar3 + 0x33,0);
        patch = patch + (uVar3 + 1) * 0x23;
      }
      AudioCmn_GetAsyncSfx__Fiib(2,patch,0);
    }
    patch_00 = (car->stats).lap;
    if (patch_00 < DAT_801131f0 + -1) {
      if (patch_00 < DAT_801131f0 + -2) {
        patch_00 = patch_00 + 5;
      }
      else {
        patch_00 = 2;
      }
      AudioCmn_GetAsyncSfx__Fiib(2,patch_00,0);
    }
  }
  if (car->lap == (uint)(byte)(&currentLap)[uVar3]) {
    return;
  }
  if ((&AudioCmn_gPlayerArrested)[uVar3] != 0) {
    return;
  }
  CopSpeak_InitRequest__FP17CopSpeak_tRequest(&CStack56);
  bVar2 = false;
  if ((DAT_801131f8 == 1) &&
     ((car->stats).time[(car->stats).lap + -1] < (int)(&bestLapTime)[car->carIndex])) {
    CStack56.phrase = uVar3 + 0x33;
    CopSpeak_Request__FP17CopSpeak_tRequest(&CStack56);
    bVar2 = true;
  }
  if ((iGp000000f4 == 0) ||
     (patch_00 = (car->stats).time[(car->stats).lap + -1], patch_00 < iGp000000f4)) {
    CStack56.phrase = 1;
    iGp000000f4 = (car->stats).time[(car->stats).lap + -1];
    (&bestLapTime)[car->carIndex] = iGp000000f4;
  }
  else {
    if ((int)(&bestLapTime)[car->carIndex] <= patch_00) goto LAB_800774e0;
    CStack56.phrase = 0;
    (&bestLapTime)[car->carIndex] = (car->stats).time[(car->stats).lap + -1];
  }
  CopSpeak_Request__FP17CopSpeak_tRequest(&CStack56);
LAB_800774e0:
  patch_00 = Stats_GetNumOpponents__Fv();
  if (1 < patch_00) {
    patch = Stats_GetPosition__FP8Car_tObj(car);
    if (car->lap < DAT_801131f0) {
      if ((patch_00 < 3) && ((car->stats).checkpointDisplay != 0)) {
        patch_00 = AudioCmn_GetTimePhrase__Fi(-(car->stats).checkpointDifference);
        CStack56.phrase = patch_00;
        if (((DAT_801131f8 == 1) && (CStack56.phrase = patch_00, !bVar2)) &&
           ((patch_00 - 0x3bU < 3 || (CStack56.phrase = patch_00, patch_00 - 0x3fU < 0xf)))) {
          CStack56.phrase = uVar3 + 0x33;
          CopSpeak_Request__FP17CopSpeak_tRequest(&CStack56);
          bVar2 = true;
          CStack56.phrase = patch_00;
        }
      }
      else {
        CStack56.phrase = patch + 0x4e;
        if (patch == patch_00) {
          CStack56.phrase = 0x57;
        }
      }
      if ((DAT_801131f8 == 1) && (!bVar2)) {
        CStack56.phrase = CStack56.phrase + (uVar3 + 1) * 0x23;
      }
    }
    else {
      if ((DAT_801131f8 != 1) || (bVar2)) {
        CStack56.phrase = patch + 10;
        if ((patch == patch_00) && (CStack56.phrase = patch + 10, 2 < patch)) {
          CStack56.phrase = 0x12;
        }
      }
      else {
        if ((patch == patch_00) && (2 < patch)) {
          CStack56.phrase = 0x22;
          if (bVar1 == 0) {
            CStack56.phrase = 0x1a;
          }
        }
        else {
          CStack56.phrase = patch + 0x1a;
          if (bVar1 == 0) {
            CStack56.phrase = patch + 0x12;
          }
        }
      }
    }
    CopSpeak_Request__FP17CopSpeak_tRequest(&CStack56);
  }
  patch_00 = (car->stats).lap;
  if (patch_00 < DAT_801131f0) {
    CStack56.phrase = patch_00 + 4;
    if (DAT_801131f0 + -1 <= patch_00) {
      CStack56.phrase = 2;
    }
    CopSpeak_Request__FP17CopSpeak_tRequest(&CStack56);
  }
  if ((&currentLap)[uVar3] == '\0') {
    (&bestLapTime)[uVar3] = -(&gtotallaptimes)[uVar3];
  }
  (&currentLap)[uVar3] = *(char *)&car->lap;
  (&gtotallaptimes)[uVar3] = (car->stats).lapTime;
  iGp000000e4 = car->lap;
  iGp000000e8 = car->lap;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_LoadFESamples__Fv()
 // line 1201, offset 0x80077738
	/* begin block 1 */
		// Start line: 1202
		// Start offset: 0x80077738
		// Variables:
	// 		char filename[100]; // stack offset -112
	/* end block 1 */
	// End offset: 0x80077738
	// End Line: 1202

void AudioCmn_LoadFESamples__Fv(void)
{
  char acStack112 [104];
  
  strcpy(acStack112,(char *)0x0);
  strcat(acStack112,"fesfx");
  AudioCmn_LoadBank__FPci(acStack112,0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_LoadGameSamples__Fv()
 // line 1214, offset 0x8007777c
	/* begin block 1 */
		// Start line: 1215
		// Start offset: 0x8007777C
		// Variables:
	// 		char filename[100]; // stack offset -168
	// 		char *TrackGenBank[11]; // stack offset -64
	/* end block 1 */
	// End offset: 0x80077840
	// End Line: 1231

void AudioCmn_LoadGameSamples__Fv(void)
{
  char **ppcVar1;
  char **ppcVar2;
  char **ppcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char acStack168 [104];
  char *local_40 [12];
  
  AudioEng_StartUp__FiPc(0,"MSLK");
  if (DAT_801131f8 == 1) {
    AudioEng_StartUp__FiPc(1,"MSLK");
  }
  AudioEng_StartServer__Fv();
  strcpy(acStack168,(char *)0x0);
  strcat(acStack168,"Gen");
  ppcVar1 = &PTR_DAT_8005570c;
  ppcVar2 = local_40;
  do {
    ppcVar4 = ppcVar2;
    ppcVar3 = ppcVar1;
    pcVar5 = ppcVar3[1];
    pcVar6 = ppcVar3[2];
    pcVar7 = ppcVar3[3];
    *ppcVar4 = *ppcVar3;
    ppcVar4[1] = pcVar5;
    ppcVar4[2] = pcVar6;
    ppcVar4[3] = pcVar7;
    ppcVar1 = ppcVar3 + 4;
    ppcVar2 = ppcVar4 + 4;
  } while (ppcVar3 + 4 != &PTR_DAT_8005572c);
  pcVar5 = ppcVar3[5];
  pcVar6 = ppcVar3[6];
  ppcVar4[4] = "eng";
  ppcVar4[5] = pcVar5;
  ppcVar4[6] = pcVar6;
  strcat(acStack168,local_40[0]);
  AudioCmn_LoadBank__FPci(acStack168,3);
  DAT_8010e8c0 = 0xfffffffd;
  DAT_8010e8e4 = 0xfffffffe;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_InitChannelArray__Fv()
 // line 1244, offset 0x800778b0
	/* begin block 1 */
		// Start line: 1245
		// Start offset: 0x800778B0
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x800778D8
	// End Line: 1255

void AudioCmn_InitChannelArray__Fv(void)
{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &gaChannel;
  do {
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0x47);
  uGp0000018c = 0xffffffff;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ scaleFrequency__Fiii(int sndPlayer /*$a0*/, int iSFXnum /*$a1*/, int tweakedForce /*$a2*/)
 // line 1259, offset 0x800778e8
	/* begin block 1 */
		// Start line: 1260
		// Start offset: 0x800778E8
		// Variables:
	// 		int scaledFreq; // $a1
	/* end block 1 */
	// End offset: 0x800779AC
	// End Line: 1291

int scaleFrequency__Fiii(int sndPlayer,int iSFXnum,int tweakedForce)
{
  uint uVar1;
  uint uVar2;
  
  if ((sndPlayer - 0x12U < 2) || (sndPlayer - 0x14U < 2)) {
    uVar1 = (tweakedForce * 0x7f) / 0xa0000;
    uVar2 = 0x7f;
    if ((int)uVar1 < 0x80) {
      uVar2 = uVar1;
    }
  }
  else {
    if ((&DAT_8010e900)[sndPlayer * 2] == iSFXnum) {
      uVar2 = (uint)(byte)SkidInitMaxFreq[sndPlayer];
    }
    else {
      uVar1 = (tweakedForce * 0x7f) / 0xa0000;
      uVar2 = 0x7f;
      if ((int)uVar1 < 0x80) {
        uVar2 = uVar1;
      }
      SkidInitMaxFreq[sndPlayer] = (char)uVar2;
    }
  }
  return uVar2;


}




// decompiled code
// original method signature: 
// int /*$ra*/ ChooseImpactSample__Fi6s_typeT1(int force /*$a0*/, enum s_type surface1 /*$s0*/, enum s_type surface2 /*$a2*/)
 // line 1296, offset 0x800779b4
	/* begin block 1 */
		// Start line: 1297
		// Start offset: 0x800779B4
		// Variables:
	// 		static int lastImpactSample; // offset 0x84
	// 		int iSFXnum; // $v1
	/* end block 1 */
	// End offset: 0x80077C80
	// End Line: 1424

int ChooseImpactSample__Fi6s_typeT1(int force,s_type surface1,s_type surface2)
{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (surface1 == kBackFire) {
    return 0x13;
  }
  if ((surface1 == kTires) && (surface2 == kAsphalt)) {
    return 0x1f;
  }
  if (surface1 == kCarBody) {
    if (surface2 == kWoodWall) {
      return 0x1e;
    }
    if (surface2 == kGrassWall) {
      return 0x1d;
    }
    if (surface2 == kWall) {
      if (0x6e < force) {
        return 0x21;
      }
      uVar1 = random();
      iVar2 = 0x20;
      goto LAB_80077c70;
    }
    if (surface2 == kWallSpark) {
      uVar1 = random();
      uVar1 = uVar1 & 3;
      if (uVar1 == 1) {
        return 0x22;
      }
      if (uVar1 == 0) {
        return 0x23;
      }
      if (uVar1 == 2) {
        return 0x20;
      }
      if (uVar1 == 3) {
        return 0x25;
      }
      return 0x23;
    }
    if (surface2 == kSign) {
      return 0x1d;
    }
  }
  if (surface2 == kBlowOut) {
    return 0x12;
  }
  if ((surface1 == kCarBody) && ((surface2 == kAsphalt || (surface2 == kGravel)))) {
    if (force < 0x51) {
      if (force - 0x17U < 0x3a) {
        uVar1 = 0x22;
      }
      else {
        if (force - 0x11U < 6) {
          uVar1 = 0x20;
        }
        else {
          if (force < 0x11) {
            uVar1 = 0x1d;
          }
        }
      }
    }
    else {
      uVar1 = 0x21;
    }
    if (uVar1 != uGp00000160) {
      return uVar1;
    }
    if (uVar1 == 0x21) {
      return 0x21;
    }
    if (uVar1 == 0x20) {
      uVar1 = random();
      iVar2 = 0x22;
    }
    else {
      if (uVar1 < 0x21) {
        if (uVar1 != 0x1d) {
          return uVar1;
        }
        uVar1 = random();
        if ((uVar1 & 1) != 0) {
          return 0x22;
        }
        return 0x20;
      }
      if (uVar1 != 0x22) {
        return uVar1;
      }
      uVar1 = random();
      iVar2 = 0x20;
    }
    if ((uVar1 & 1) != 0) {
      return 0x1d;
    }
    return iVar2;
  }
  if (force < 0x5b) {
    if (force - 0x47U < 0x14) {
      uVar1 = 0x20;
    }
    else {
      if (force - 0x33U < 0x14) {
        uVar1 = 0x25;
      }
      else {
        if (force - 0x1aU < 0x19) {
          uVar1 = 0x22;
        }
        else {
          if (force < 0x1a) {
            uVar1 = 0x1e;
          }
        }
      }
    }
  }
  else {
    uVar1 = 0x21;
  }
  if (uVar1 != uGp00000160) {
    return uVar1;
  }
  if (uVar1 == 0x21) {
    return 0x21;
  }
  if (uVar1 != 0x20) {
    if (uVar1 < 0x21) {
      if (uVar1 == 0x1e) {
        return 0x22;
      }
      return uVar1;
    }
    if (uVar1 == 0x22) {
      uVar1 = random();
      iVar2 = 0x25;
    }
    else {
      if (uVar1 != 0x25) {
        return uVar1;
      }
      uVar1 = random();
      iVar2 = 0x22;
    }
    if ((uVar1 & 1) != 0) {
      return 0x1e;
    }
    return iVar2;
  }
  uVar1 = random();
  iVar2 = 0x22;
LAB_80077c70:
  if ((uVar1 & 1) != 0) {
    return 0x25;
  }
  return iVar2;


}




// decompiled code
// original method signature: 
// int /*$ra*/ ChooseLoopedSample__F6s_typeT0(enum s_type surface1 /*$a0*/, enum s_type surface2 /*$a1*/)
 // line 1428, offset 0x80077c94
	/* begin block 1 */
		// Start line: 1429
		// Start offset: 0x80077C94
		// Variables:
	// 		int SFXnum; // $v1
	/* end block 1 */
	// End offset: 0x80077D48
	// End Line: 1452

int ChooseLoopedSample__F6s_typeT0(s_type surface1,s_type surface2)
{
  int iVar1;
  
  iVar1 = 0x2c;
  if (surface1 == kTires) {
    if (surface2 == kAsphalt) {
      iVar1 = 0x2a;
    }
    if (surface2 == kWetAsphalt) {
      iVar1 = 0x2d;
    }
    if (surface2 == kRaceTireOnAsphalt) {
      iVar1 = 0x2e;
    }
    if (surface2 == kRainTireOnAsphalt) {
      iVar1 = 0x2f;
    }
    if (surface2 == kSnow) {
      iVar1 = 0x2b;
    }
    if (surface2 != kGrass) goto LAB_80077cec;
  }
  iVar1 = 0x2c;
LAB_80077cec:
  if ((surface1 == kCarBody) &&
     ((((surface2 == kAsphalt || (surface2 == kWetAsphalt)) || (surface2 == kGravel)) ||
      (surface2 == kSnow)))) {
    iVar1 = 0x28;
  }
  if ((surface1 == kTires) && (surface2 == kGravel)) {
    iVar1 = 0x29;
  }
  if ((surface1 == kCarBody) && (surface2 == kGrass)) {
    iVar1 = 0x2c;
  }
  return iVar1;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_SFX__Fi6s_typeT1iii(int sndPlayer /*$s5*/, enum s_type surface1 /*$a1*/, enum s_type surface2 /*$a2*/, int tweakedForce /*$s0*/, int Distsq /*stack 16*/, int azimuth /*stack 20*/)
 // line 1458, offset 0x80077d50
	/* begin block 1 */
		// Start line: 1459
		// Start offset: 0x80077D50
		// Variables:
	// 		int iSFXnumber; // $s1
	// 		int amplitude; // $s3
	// 		int frequency; // $s4

		/* begin block 1.1 */
			// Start line: 1503
			// Start offset: 0x80077DC8

			/* begin block 1.1.1 */
				// Start line: 1504
				// Start offset: 0x80077DD0

				/* begin block 1.1.1.1 */
					// Start line: 1506
					// Start offset: 0x80077E00

					/* begin block 1.1.1.1.1 */
						// Start line: 1511
						// Start offset: 0x80077E18
						// Variables:
					// 		int tempAmp; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80077E54
					// End Line: 1514
				/* end block 1.1.1.1 */
				// End offset: 0x80077EE8
				// End Line: 1524
			/* end block 1.1.1 */
			// End offset: 0x80077EE8
			// End Line: 1524

			/* begin block 1.1.2 */
				// Start line: 1529
				// Start offset: 0x80077EF4

				/* begin block 1.1.2.1 */
					// Start line: 1529
					// Start offset: 0x80077EF4

					/* begin block 1.1.2.1.1 */
						// Start line: 1540
						// Start offset: 0x80077F38

						/* begin block 1.1.2.1.1.1 */
							// Start line: 1541
							// Start offset: 0x80077F38

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 1546
								// Start offset: 0x80077F68

								/* begin block 1.1.2.1.1.1.1.1 */
									// Start line: 1548
									// Start offset: 0x80077F98

									/* begin block 1.1.2.1.1.1.1.1.1 */
										// Start line: 1551
										// Start offset: 0x80077FB0
										// Variables:
									// 		struct Car_tObj *c; // $s0
									/* end block 1.1.2.1.1.1.1.1.1 */
									// End offset: 0x80078020
									// End Line: 1559
								/* end block 1.1.2.1.1.1.1.1 */
								// End offset: 0x80078070
								// End Line: 1567
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x80078070
							// End Line: 1567
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x80078070
						// End Line: 1567
					/* end block 1.1.2.1.1 */
					// End offset: 0x800780A8
					// End Line: 1575
				/* end block 1.1.2.1 */
				// End offset: 0x800780A8
				// End Line: 1575
			/* end block 1.1.2 */
			// End offset: 0x800780A8
			// End Line: 1575
		/* end block 1.1 */
		// End offset: 0x800780A8
		// End Line: 1575
	/* end block 1 */
	// End offset: 0x800780A8
	// End Line: 1575

void AudioCmn_SFX__Fi6s_typeT1iii( (int sndPlayer,s_type surface1,s_type surface2,int tweakedForce,int Distsq, int azimuth)
{
  int iSFXnum;
  int force;
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_28;
  
  if (iGp000000f8 != 0) {
    if (Distsq < 0x1324) {
      local_28 = ((0x1324 - Distsq) * 0x7f) / 0x1324;
    }
    else {
      local_28 = 0;
    }
    if (sndPlayer < 0) {
      iSFXnum = (tweakedForce * 0x7f) / 0xa0000;
      force = 0x7f;
      if (iSFXnum < 0x80) {
        force = iSFXnum;
      }
      iSFXnum = ChooseImpactSample__Fi6s_typeT1(force,surface1,surface2);
      if (iSFXnum == 0x1f) {
        iVar2 = ((local_28 * force) / 0x7f) * 2;
        if (0x7f < iVar2) {
          iVar2 = 0x7f;
        }
        AudioCmn_PlaySFX__Fiiiiii(0x31,0x1f,0x40,0x10000,local_28,azimuth);
        sndPlayer = 0x31;
        iSFXnum = 0x23;
        force = 0x40;
        local_28 = iVar2;
      }
      else {
        sndPlayer = 0x31;
        if (iSFXnum == 0x12) {
          AudioCmn_PlaySound__Fiiiii(0,0x12,azimuth,0x7f,0x40);
          AudioCmn_PlaySound__Fiiiii(0,0x16,azimuth,0x7f,0x40);
          AudioCmn_PlaySound__Fiiiii(0,0x23,azimuth,local_28,0x40);
          return;
        }
        force = 0x40;
      }
    }
    else {
      if (tweakedForce < 1) {
        freeVoiceChannel__Fi(sndPlayer);
        if (1 < sndPlayer - 0x12U) {
          return;
        }
        freeVoiceChannel__Fi(sndPlayer + 4);
        *(undefined4 *)((&_Cars_gList)[sndPlayer - 0x12U] + 0x790) = 0;
        return;
      }
      iSFXnum = ChooseLoopedSample__F6s_typeT0(surface1,surface2);
      force = scaleFrequency__Fiii(sndPlayer,iSFXnum,tweakedForce);
      uVar3 = sndPlayer - 0x12;
      if (uVar3 < 2) {
        iVar2 = (tweakedForce * 0x7f) / 0xa0000;
        iVar1 = 0x7f;
        if (iVar2 < 0x80) {
          iVar1 = iVar2;
        }
        local_28 = local_28 * iVar1 >> 7;
        if (local_28 < 0x1f) {
          freeVoiceChannel__Fi(sndPlayer + 4);
          *(undefined4 *)((&_Cars_gList)[uVar3] + 0x790) = 0;
        }
        else {
          iVar2 = (&_Cars_gList)[uVar3];
          if ((**(int **)(iVar2 + 0x288) < 0x1c) &&
             (((0 < *(int *)(iVar2 + 0x854) && (0x1e0000 < *(int *)(iVar2 + 0x234))) ||
              ((*(int *)(iVar2 + 0x854) < 0 && (0x1e0000 < *(int *)(iVar2 + 0x224))))))) {
            AudioCmn_PlaySFX__Fiiiiii(sndPlayer + 4,0x28,force + 10,0x10000,local_28 * 3,azimuth);
            *(int *)(iVar2 + 0x790) = local_28;
          }
        }
      }
      if ((iSFXnum == 0x2c) && (force = force + -0x3c, force < 0)) {
        force = 0;
      }
    }
    AudioCmn_PlaySFX__Fiiiiii(sndPlayer,iSFXnum,force,0x10000,local_28,azimuth);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ freeVoiceChannel__Fi(int sndPlayer /*$a0*/)
 // line 1580, offset 0x800780d0
	/* begin block 1 */
		// Start line: 1581
		// Start offset: 0x800780D0
	/* end block 1 */
	// End offset: 0x8007812C
	// End Line: 1593

void freeVoiceChannel__Fi(int sndPlayer)
{
  int iVar1;
  
  if ((true) && (sndPlayer != -1)) {
    iVar1 = (&gaChannel)[sndPlayer * 2];
    if (iVar1 != -1) {
      SNDautovol(iVar1,5,0xffffffff);
      (&gaChannel)[sndPlayer * 2] = -1;
      (&DAT_8010e900)[sndPlayer * 2] = 0xffffffff;
      NumSFXOn = NumSFXOn + -1;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioCmn_PlayDoppleredSound__Fiiiiii(int bhandle /*$s1*/, int patchNum /*$s2*/, int azimuth /*$s3*/, int vol /*$s0*/, int bend /*stack 16*/, int doppler /*stack 20*/)
 // line 1615, offset 0x80078140
	/* begin block 1 */
		// Start line: 1616
		// Start offset: 0x80078140
		// Variables:
	// 		int shandle; // $v0
	// 		struct SNDPLAYOPTS playopts; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1678
			// Start offset: 0x80078320

			/* begin block 1.1.1 */
				// Start line: 1679
				// Start offset: 0x80078334
				// Variables:
			// 		int bank; // $a0
			/* end block 1.1.1 */
			// End offset: 0x80078360
			// End Line: 1690
		/* end block 1.1 */
		// End offset: 0x80078360
		// End Line: 1690
	/* end block 1 */
	// End offset: 0x80078378
	// End Line: 1709

int AudioCmn_PlayDoppleredSound__Fiiiiii( (int bhandle,int patchNum,int azimuth,int vol,int bend,int doppler)
{
  int iVar1;
  int iVar2;
  uint bank;
  int local_30;
  char local_2c;
  undefined local_29;
  undefined local_28;
  undefined local_27;
  bool local_25;
  undefined2 local_24;
  undefined2 local_20;
  
  SNDplaysetdef(&local_30);
  local_2c = (char)bhandle;
  if (patchNum == 0x7d) {
    local_28 = (undefined)(gMasterSFXLevel * vol >> 7);
    goto LAB_8007828c;
  }
  if (bhandle == -4) {
    local_28 = (undefined)(gMasterFENarrationLevel * 0x81 >> 7);
    goto LAB_8007828c;
  }
  if (bhandle == DAT_8010e8c0) {
    iVar1 = vol * 0x28;
    iVar2 = gMasterAmbientLevel;
LAB_8007827c:
    iVar1 = iVar1 - vol;
  }
  else {
    if (bhandle != DAT_8010e8e4) {
      if ((patchNum == 0x16) || (patchNum == 0x12)) {
        local_28 = (undefined)(gMasterSFXLevel * vol >> 7);
        goto LAB_8007828c;
      }
      if ((patchNum != 3) ||
         ((iVar1 = vol << 7, iVar2 = gMasterSFXLevel, bhandle != gSndBnk &&
          (iVar2 = gMasterSFXLevel, bhandle != DAT_8010e8c0)))) {
        if (patchNum == 0) {
          iVar1 = vol * 0xe;
          iVar2 = gMasterEngineLevel;
          goto LAB_80078280;
        }
        iVar1 = vol * 0x28;
        iVar2 = gMasterSFXLevel;
      }
      goto LAB_8007827c;
    }
    iVar1 = vol * 0x82;
    iVar2 = gMasterAmbientLevel;
  }
LAB_80078280:
  local_28 = (undefined)(iVar2 * iVar1 >> 0xe);
LAB_8007828c:
  local_30 = patchNum;
  if (patchNum == 99) {
    local_30 = 1;
  }
  local_27 = (undefined)bend;
  local_24 = (undefined2)(doppler >> 4);
  local_25 = Audio_direct3davail != 0;
  if (Audio_direct3davail == 0) {
    if (gStereoMode == 0) {
      local_29 = 0x40;
    }
    else {
      if (azimuth - 0x4000U < 0x8000) {
        local_29 = (undefined)((uint)(0xbfff - azimuth) >> 8);
      }
      else {
        local_29 = (undefined)((uint)(azimuth + 0x4000) >> 8);
      }
    }
  }
  else {
    local_20 = (undefined2)azimuth;
  }
  if (local_2c < -1) {
    if (local_2c == -4) {
      bank = 2;
    }
    else {
      bank = (uint)(local_2c == -3);
    }
    iVar2 = AudioCmn_GetAsyncSfx__Fiib(bank,patchNum,0);
    local_2c = (char)iVar2;
    local_30 = 0;
  }
  iVar2 = -1;
  if (-1 < local_2c) {
    iVar2 = SNDplay(&local_30);
  }
  NumSFXOn = NumSFXOn + 1;
  return iVar2;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioCmn_PlaySound__Fiiiii(int bhandle /*$a0*/, int patchNum /*$a1*/, int azimuth /*$a2*/, int vol /*$a3*/, int bend /*stack 16*/)
 // line 1716, offset 0x800783a0
	/* begin block 1 */
		// Start line: 1717
		// Start offset: 0x800783A0
	/* end block 1 */
	// End offset: 0x800783A0
	// End Line: 1717

int AudioCmn_PlaySound__Fiiiii(int bhandle,int patchNum,int azimuth,int vol,int bend)
{
  int iVar1;
  
  iVar1 = AudioCmn_PlayDoppleredSound__Fiiiiii(bhandle,patchNum,azimuth,vol,bend,0x10000);
  return iVar1;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioCmn_PlaySFX__Fiiiiii(int sndPlayer /*$s4*/, int iSFXnum /*$s3*/, int iFreqIn /*$a2*/, int iDopplerIn /*$fp*/, int iAmpIn /*stack 16*/, int azimuth /*stack 20*/)
 // line 1731, offset 0x800783cc
	/* begin block 1 */
		// Start line: 1732
		// Start offset: 0x800783CC
		// Variables:
	// 		int iPartial; // $v0
	// 		int iFreq; // $s5
	// 		int iAmp; // $s1
	// 		long PatchBank; // $s2

		/* begin block 1.1 */
			// Start line: 1807
			// Start offset: 0x80078544

			/* begin block 1.1.1 */
				// Start line: 1820
				// Start offset: 0x80078590

				/* begin block 1.1.1.1 */
					// Start line: 1822
					// Start offset: 0x80078590

					/* begin block 1.1.1.1.1 */
						// Start line: 1823
						// Start offset: 0x800785AC
					/* end block 1.1.1.1.1 */
					// End offset: 0x80078600
					// End Line: 1842
				/* end block 1.1.1.1 */
				// End offset: 0x80078600
				// End Line: 1842
			/* end block 1.1.1 */
			// End offset: 0x80078878
			// End Line: 1898
		/* end block 1.1 */
		// End offset: 0x80078878
		// End Line: 1898
	/* end block 1 */
	// End offset: 0x80078878
	// End Line: 1903

int AudioCmn_PlaySFX__Fiiiiii( (int sndPlayer,int iSFXnum,int iFreqIn,int iDopplerIn,int iAmpIn,int azimuth)
{
  int iVar1;
  int bend;
  int vol;
  uint uVar2;
  int bhandle;
  undefined4 *puVar3;
  int *piVar4;
  
  if (iFreqIn < 0) {
    iFreqIn = 0;
  }
  bend = 0x7f;
  if (iFreqIn < 0x80) {
    bend = iFreqIn;
  }
  if (iAmpIn < 0) {
    iAmpIn = 0;
  }
  vol = 0x7f;
  if (iAmpIn < 0x80) {
    vol = iAmpIn;
  }
  bhandle = DAT_8010e8e4;
  if (((((3 < sndPlayer - 0x1cU) && (bhandle = DAT_8010e8e4, 3 < sndPlayer - 0x32U)) &&
       (bhandle = DAT_8010e8e4, sndPlayer != 0x24)) &&
      ((bhandle = DAT_8010e8e4, sndPlayer != 0x36 &&
       (bhandle = DAT_8010e8e4, 0xf < sndPlayer - 0x37U)))) &&
     ((bhandle = DAT_8010e8c0, 7 < sndPlayer - 10U &&
      ((bhandle = DAT_8010e8c0, 1 < sndPlayer - 0x1aU && (bhandle = DAT_8010e8e4, iSFXnum != 0x7d)))
      ))) {
    if ((iSFXnum < 0x7e) &&
       ((iSFXnum == 8 || (((7 < iSFXnum && (iSFXnum < 0xc)) && (9 < iSFXnum)))))) {
      bhandle = 0;
    }
    else {
      bhandle = (&gSndBnk)[(uint)(byte)(&gBankNumLookupTable)[sndPlayer * 4] * 3];
    }
  }
  if (sndPlayer == 0x31) {
    DAT_8010ea84 = AudioCmn_PlayDoppleredSound__Fiiiiii(bhandle,iSFXnum,azimuth,vol,bend,iDopplerIn)
    ;
    NumSFXOn = NumSFXOn + -1;
    DAT_8010ea88 = iSFXnum;
  }
  else {
    puVar3 = &gaChannel + sndPlayer * 2;
    if ((&DAT_8010e900)[sndPlayer * 2] == iSFXnum) {
      iVar1 = SNDover(*puVar3);
      if (iVar1 != 0) {
        *puVar3 = 0xffffffff;
        (&DAT_8010e900)[sndPlayer * 2] = 0xffffffff;
      }
      if ((bhandle < -1) &&
         (iVar1 = AudioCmn_GetAsyncSfx__Fiib((uint)(bhandle == -3),iSFXnum,0), iVar1 == -1)) {
        *puVar3 = 0xffffffff;
        (&DAT_8010e900)[sndPlayer * 2] = 0xffffffff;
      }
      if ((&DAT_8010e900)[sndPlayer * 2] == iSFXnum) {
        iVar1 = (&gaChannel)[sndPlayer * 2];
        if (iVar1 == -1) {
          (&DAT_8010e900)[sndPlayer * 2] = 0xffffffff;
        }
        else {
          if (iSFXnum == 0x7d) {
            bhandle = gMasterSFXLevel * vol >> 7;
          }
          else {
            if (bhandle == DAT_8010e8c0) {
              bhandle = gMasterAmbientLevel * vol * 0x27;
            }
            else {
              if (bhandle == DAT_8010e8e4) {
                bhandle = gMasterAmbientLevel * vol * 0x82;
              }
              else {
                if (iSFXnum == 99) {
                  bhandle = gMasterAmbientLevel * vol * 0x27;
                }
                else {
                  if ((iSFXnum == 3) && ((bhandle == gSndBnk || (bhandle == DAT_8010e8c0)))) {
                    bhandle = gMasterSFXLevel * vol * 0x7f;
                  }
                  else {
                    if (iSFXnum == 0) {
                      vol = vol * 0xe;
                      bhandle = gMasterEngineLevel;
                    }
                    else {
                      vol = vol * 0x27;
                      bhandle = gMasterSFXLevel;
                    }
                    bhandle = bhandle * vol;
                    iVar1 = (&gaChannel)[sndPlayer * 2];
                  }
                }
              }
            }
            bhandle = bhandle >> 0xe;
          }
          SNDvol(iVar1,bhandle);
          if (Audio_direct3davail == 0) {
            if (gStereoMode != 0) {
              if (azimuth - 0x4000U < 0x8000) {
                uVar2 = 0xbfff - azimuth;
              }
              else {
                uVar2 = azimuth + 0x4000U & 0xffff;
              }
              SNDpan((&gaChannel)[sndPlayer * 2],(int)uVar2 >> 8);
            }
          }
          else {
            SND3dpos((&gaChannel)[sndPlayer * 2],azimuth,0);
          }
          SNDpitchbend((&gaChannel)[sndPlayer * 2],bend);
          SNDpitchmult((&gaChannel)[sndPlayer * 2],iDopplerIn >> 4);
        }
        goto LAB_8007887c;
      }
    }
    piVar4 = &gaChannel + sndPlayer * 2;
    if (*piVar4 != -1) {
      SNDstop();
      NumSFXOn = NumSFXOn + -1;
    }
    bend = AudioCmn_PlayDoppleredSound__Fiiiiii(bhandle,iSFXnum,azimuth,vol,bend,iDopplerIn);
    if (bend == -1) {
      *piVar4 = -1;
      (&DAT_8010e900)[sndPlayer * 2] = 0xffffffff;
    }
    else {
      *piVar4 = bend;
      (&DAT_8010e900)[sndPlayer * 2] = iSFXnum;
    }
  }
LAB_8007887c:
  return (&gaChannel)[sndPlayer * 2];


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_SoundCar__FP8Car_tObjiiiiiii(struct Car_tObj *car /*$s4*/, int dst /*$fp*/, int iFreqIn /*$s2*/, int doppler /*stack 12*/, int azimuth /*stack 16*/, int trackazim /*stack 20*/, int relvel /*stack 24*/, int cardir /*stack 28*/)
 // line 1908, offset 0x800788bc
	/* begin block 1 */
		// Start line: 1909
		// Start offset: 0x800788BC
		// Variables:
	// 		int CurCarGasLevel; // $s0
	// 		int freq; // $s6
	// 		int roadSurface; // $s5
	// 		int cobbleMod; // $s3
	// 		int cobblestoneAmp; // $s0
	// 		char SPSC; // $s7
	// 		int PlayerPan; // $s2
	// 		static char cobbleCount; // offset 0x88
	// 		int loadAmp; // $s2
	// 		int amplitude; // $a2
	// 		int roadNoiseAmp; // $s1
	// 		int wetNoiseAmp; // $s3
	// 		int roadNoiseFreq; // stack offset -56
	// 		int wetNoiseFreq; // $s7
	// 		int iAmpIn; // stack offset -52
	// 		int tuntrig; // stack offset -48
	// 		int cam; // $s5
	// 		int roadNoisePatch; // $a1

		/* begin block 1.1 */
			// Start line: 2181
			// Start offset: 0x80079044
			// Variables:
		// 		int gas; // $a3
		/* end block 1.1 */
		// End offset: 0x800790D4
		// End Line: 2185
	/* end block 1 */
	// End offset: 0x800790D4
	// End Line: 2185

void AudioCmn_SoundCar__FP8Car_tObjiiiiiii( (Car_tObj *car,int dst,int iFreqIn,int doppler,int azimuth,int trackazim,int relvel, int cardir)
{
  byte bVar1;
  short sVar2;
  bool bVar3;
  int azimuth_00;
  int bend;
  uint uVar4;
  int iAmpIn;
  undefined4 uVar5;
  int sndPlayer;
  int sndPlayer_00;
  uint uVar6;
  int iVar7;
  int gas;
  int iVar8;
  uint uVar9;
  int local_38;
  
  AudioCmn_CheckState__FP8Car_tObj(car);
  if (iGp000000f8 == 0) {
    return;
  }
  uVar5 = 0x8000000;
  if ((&DAT_8010f31c)[car->carIndex * 0x88] == 0xc) {
    uVar5 = 0x10000000;
    sndPlayer_00 = 0x10000;
  }
  else {
    sndPlayer_00 = 0x20000;
  }
  sndPlayer_00 = fixeddiv(uVar5,dst + sndPlayer_00);
  if (sndPlayer_00 < 0) {
    sndPlayer_00 = sndPlayer_00 + 0xffff;
  }
  sndPlayer_00 = sndPlayer_00 >> 0x10;
  azimuth_00 = (car->linearVel_ch).z;
  if (azimuth_00 < 0) {
    azimuth_00 = -azimuth_00;
  }
  iVar7 = 0;
  if (-1 < azimuth_00 + -0xd8000) {
    iVar7 = azimuth_00 + -0xd8000 >> 0xf;
  }
  azimuth_00 = azimuth_00 >> 0xf;
  if (0x7f < azimuth_00) {
    azimuth_00 = 0x7f;
  }
  bend = azimuth_00;
  if (azimuth_00 < 0) {
    bend = azimuth_00 + 0xf;
  }
  bend = 8 - (bend >> 4);
  if (bend < 3) {
    bend = 3;
  }
  local_38 = 0x40;
  if (0x96 < iFreqIn) {
    iFreqIn = 0x96;
  }
  if (iFreqIn < 0) {
    iFreqIn = 0;
  }
  iVar8 = (car->N).driveSurfaceType;
  uVar4 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(&(car->N).simRoadInfo);
  if (uVar4 == 0) {
    if (bGp0000012d < 0x20) {
      bGp0000012d = 0x20;
      SNDfxmasterlevel(0);
      uGp0000012c = 1;
    }
    else {
      if (0x20 < bGp0000012d) {
        uVar6 = 0x20;
        if (0x1f < (int)((uint)bGp0000012d - 5)) {
          uVar6 = (uint)bGp0000012d - 5;
        }
        bGp0000012d = (byte)uVar6;
        SNDfxmasterlevel(0,uVar6 & 0xff);
      }
    }
  }
  else {
    if ((DAT_801131f8 != 1) && (bGp0000012d < 100)) {
      uVar6 = 100;
      if ((uint)bGp0000012d + 10 < 0x65) {
        uVar6 = (uint)bGp0000012d + 10;
      }
      bGp0000012d = (byte)uVar6;
      SNDfxmasterlevel(0,uVar6 & 0xff);
      uGp0000012c = 1;
    }
    iVar7 = iVar7 + 0x14;
    local_38 = 0x5e;
  }
  bVar3 = false;
  if (DAT_801131f8 == 1) {
    bVar3 = true;
    gas = 0xc002;
    if (car->carIndex != 0) {
      gas = 0x3ffe;
    }
  }
  else {
    gas = 0;
  }
  if (car->blowout != 0) {
    iVar8 = 4;
    azimuth_00 = azimuth_00 << 1;
  }
  if (dst < 0x460000) {
    iAmpIn = fixedmult(dst,dst);
    azimuth_00 = ((0x13240000 - iAmpIn) / 0x1324) * azimuth_00;
    uVar6 = azimuth_00 >> 0x10;
    if (azimuth_00 < 0) {
      uVar6 = azimuth_00 + 0xffff >> 0x10;
    }
  }
  else {
    uVar6 = 0;
  }
  if (true) {
    switch(iVar8) {
    case 2:
    case 10:
    case 0xb:
    case 0xd:
      azimuth_00 = iVar7;
      if (iVar7 < 0) {
        azimuth_00 = iVar7 + 3;
      }
      iVar7 = iVar7 + (azimuth_00 >> 2);
      local_38 = 0x18;
      break;
    case 4:
    case 7:
    case 0xc:
      uVar9 = (int)(uint)(byte)(cGp00000164 + 1) % bend;
      if (bend == 0) {
        trap(0x1c00);
      }
      if ((bend == -1) && ((uint)(byte)(cGp00000164 + 1) == 0x80000000)) {
        trap(0x1800);
      }
      cGp00000164 = (char)uVar9;
      if ((((uVar9 & 0xff) == 0) && ((car->N).objAltitude < 0x3333)) && (0 < iGp00000108)) {
        azimuth_00 = 0;
        if (bVar3) {
          azimuth_00 = gas;
        }
        bend = 0x40;
        if (iVar8 == 7) {
          bend = 0x28;
        }
        AudioCmn_PlaySound__Fiiiii(0,0x1d,azimuth_00,(int)(uVar6 + (uVar6 >> 0x1f)) >> 1,bend);
      }
    }
  }
  if (iGp0000010c == 0) {
    return;
  }
  sVar2 = (&DAT_8010f31c)[car->carIndex * 0x88];
  if ((sVar2 < 0) ||
     ((bend = 0, azimuth_00 = iVar7, 1 < sVar2 && (bend = 1, azimuth_00 = iVar7 >> 1, 4 < sVar2))))
  {
    bend = 2;
    azimuth_00 = iVar7 >> 1;
  }
  uVar6 = (uint)(byte)(car->control).gasLevel;
  iVar7 = (&PlayersRampedGasLevel)[car->carIndex];
  if (iVar7 < (int)uVar6) {
    iVar8 = (int)((uVar6 - iVar7) + (uVar6 - iVar7 >> 0x1f)) >> 1;
    gas = iVar7 + iVar8;
    if (iVar8 < 1) {
      gas = iVar7 + 1;
    }
  }
  else {
    iVar8 = uVar6 - iVar7;
    if (iVar7 <= (int)uVar6) goto LAB_80078d54;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 7;
    }
    gas = iVar7 + -1;
    if (iVar8 >> 3 < 0) {
      gas = iVar7 + (iVar8 >> 3);
    }
  }
  (&PlayersRampedGasLevel)[car->carIndex] = gas;
LAB_80078d54:
  iVar7 = (&PlayersRampedGasLevel)[car->carIndex];
  if (0xff < iVar7) {
    iVar7 = 0xff;
  }
  iVar8 = sndPlayer_00 * (iFreqIn + 0x28);
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0x7f;
  }
  gas = iVar8 >> 7;
  if (iVar8 >> 7 < sndPlayer_00) {
    gas = sndPlayer_00;
  }
  iVar8 = gas * 0x7f >> 7;
  sndPlayer_00 = azimuth_00 * gas >> 7;
  if (uVar4 == 0) {
    azimuth_00 = Weather_GetNumParticles__Fi(car->carIndex);
  }
  else {
    azimuth_00 = 0;
  }
  gas = azimuth_00 >> 3;
  if (0x7f < azimuth_00) {
    azimuth_00 = 0x7f;
    gas = 0xf;
  }
  iAmpIn = 0x7f;
  if (sndPlayer_00 < 0x80) {
    iAmpIn = sndPlayer_00;
  }
  if ((relvel != 0) || ((&DAT_8010f31c)[car->carIndex * 0x88] == 0xb)) {
    sndPlayer_00 = iVar8 << 0x10;
    iVar8 = sndPlayer_00 / doppler;
    if (doppler == 0) {
      trap(0x1c00);
    }
    if ((doppler == -1) && (sndPlayer_00 == -0x80000000)) {
      trap(0x1800);
    }
  }
  sndPlayer_00 = 0xe;
  if ((bend == 0) && (sndPlayer_00 = 0, DAT_801131f8 == 1)) {
    sndPlayer_00 = 0xe;
  }
  if (iAmpIn == 0) {
    sndPlayer_00 = 0x19;
    if (car->carIndex == 0) {
      sndPlayer_00 = 0x18;
    }
    freeVoiceChannel__Fi(sndPlayer_00);
  }
  else {
    sndPlayer = 0x19;
    if (car->carIndex == 0) {
      sndPlayer = 0x18;
    }
    AudioCmn_PlaySFX__Fiiiiii(sndPlayer,sndPlayer_00,local_38,doppler,iAmpIn,azimuth);
  }
  if (car->carIndex == 0) {
    if ((DAT_80113234 == 1) && (azimuth_00 != 0)) {
      AudioCmn_PlaySFX__Fiiiiii(0x1a,0,0x48 - gas,doppler,azimuth_00,0);
    }
    else {
      freeVoiceChannel__Fi(0x1a);
    }
  }
  sndPlayer_00 = iVar7;
  if (((((car->control).gearShiftTimer != '\0') &&
       (bVar1 = (car->control).lastGear, sndPlayer_00 = iVar7, bVar1 < (byte)(car->control).gear))
      && (sndPlayer_00 = iVar7, bVar1 != 1)) && (sndPlayer_00 = iVar7, iVar7 != 0)) {
    bVar1 = (car->control).gearShiftTimer;
    sndPlayer_00 = car->specs->gearShiftDelay;
    if (sndPlayer_00 == 0) {
      trap(0x1c00);
    }
    if ((sndPlayer_00 == -1) && (iVar8 * (uint)bVar1 == -0x80000000)) {
      trap(0x1800);
    }
    iVar8 = iVar8 + (int)(iVar8 * (uint)bVar1) / sndPlayer_00 >> 1;
    sndPlayer_00 = iVar7 >> 2;
    if (bVar1 == 5) {
      sndPlayer_00 = iVar7 - sndPlayer_00;
    }
    else {
      if (bVar1 == 4) {
        sndPlayer_00 = iVar7 >> 1;
      }
      else {
        if ((bVar1 != 3) && (sndPlayer_00 = iVar7, bVar1 < 3)) {
          sndPlayer_00 = 0;
        }
      }
    }
    (&PlayersRampedGasLevel)[car->carIndex] = sndPlayer_00;
  }
  iVar7 = car->specs->redline;
  azimuth_00 = car->flywheelRpm << 0x10;
  if (iVar7 == 0) {
    trap(0x1c00);
  }
  if ((iVar7 == -1) && (azimuth_00 == -0x80000000)) {
    trap(0x1800);
  }
  gas = 0x7f;
  if (car->revLimit == 0) {
    gas = sndPlayer_00 >> 1;
  }
  AudioEng_Set__Fiiiiiiii
            (car->carIndex,iGp0000010c * iVar8 * 0xe >> 0xe,azimuth_00 / iVar7,gas,bend,doppler,
             azimuth,cardir);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_TrafficSFX__Fiiiiiiii(int iChan /*$s5*/, int iSFXnum /*$fp*/, int freq /*stack 8*/, int doppler /*stack 12*/, int dst /*stack 16*/, int azimuth /*stack 20*/, int relvel /*stack 24*/, int dir /*stack 28*/)
 // line 2193, offset 0x80079104
	/* begin block 1 */
		// Start line: 2194
		// Start offset: 0x80079104
		// Variables:
	// 		int iAmpIn; // $s4
	// 		int player; // $a0
	// 		int pitchmult; // $s0
	/* end block 1 */
	// End offset: 0x80079360
	// End Line: 2238

void AudioCmn_TrafficSFX__Fiiiiiiii( (int iChan,int iSFXnum,int freq,int doppler,int dst,int azimuth,int relvel,int dir)
{
  int iSFXnum_00;
  int iSFXnum_01;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iDopplerIn;
  
  uVar1 = 0;
  if (DAT_801131f8 == 1) {
    uVar1 = (uint)(iChan < 8) ^ 1;
  }
  uVar2 = 0x8000000;
  if ((&DAT_8010f31c)[uVar1 * 0x88] == 0xc) {
    uVar2 = 0x10000000;
    iVar3 = 0x10000;
  }
  else {
    iVar3 = 0x20000;
  }
  iVar3 = fixeddiv(uVar2,dst + iVar3);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xffff;
  }
  iVar3 = iVar3 >> 0x10;
  if ((iVar3 == 0) && (iChan != -1)) {
    if ((&gaChannel)[iChan * 2] != -1) {
      freeVoiceChannel__Fi(iChan);
    }
    if ((&gaChannel)[(iChan + 4) * 2] != -1) {
      freeVoiceChannel__Fi(iChan + 4);
    }
    if ((&gaChannel)[(iChan + 8) * 2] != -1) {
      freeVoiceChannel__Fi(iChan + 8);
    }
  }
  else {
    iSFXnum_00 = fixedmult(freq + 0x3333,doppler);
    iSFXnum_01 = CopSpeak_GetEnginePatch__Fii(iSFXnum,0);
    iDopplerIn = (iSFXnum_00 * 0x50 >> 10) << 4;
    AudioCmn_PlaySFX__Fiiiiii
              (iChan + 4,iSFXnum_01,0x40,iDopplerIn,
               (int)(iVar3 * (uint)(byte)(&UNK_8010e6cc)[(dir >> 0xc) - (dir >> 10)]) >> 7,azimuth);
    iSFXnum_00 = CopSpeak_GetEnginePatch__Fii(iSFXnum,1);
    AudioCmn_PlaySFX__Fiiiiii
              (iChan + 8,iSFXnum_00,0x40,iDopplerIn,
               (int)(iVar3 * (uint)(byte)(&Xfade)[(dir >> 10) - ((dir >> 0xc) + -0x40)]) >> 7,
               azimuth);
    if (0x280000 < relvel) {
      relvel = 0x280000;
    }
    AudioCmn_PlaySFX__Fiiiiii(iChan,99,freq,doppler,(iVar3 * relvel) / 0x280000,azimuth);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_TrafficSkidSFX__Fi6s_typeT1iii(int sndPlayer /*$t1*/, enum s_type surface1 /*$a1*/, enum s_type surface2 /*$a2*/, int force /*$a3*/, int Distsq /*stack 16*/, int azimuth /*stack 20*/)
 // line 2244, offset 0x80079390
	/* begin block 1 */
		// Start line: 2245
		// Start offset: 0x80079390
		// Variables:
	// 		int iAmpIn; // $v0
	/* end block 1 */
	// End offset: 0x80079434
	// End Line: 2270

void AudioCmn_TrafficSkidSFX__Fi6s_typeT1iii( (int sndPlayer,s_type surface1,s_type surface2,int force,int Distsq,int azimuth)
{
  int iVar1;
  
  if (iGp000000f8 != 0) {
    if (Distsq < 0x1324) {
      iVar1 = ((0x1324 - Distsq) * 0x7f) / 0x1324;
    }
    else {
      iVar1 = 0;
    }
    if ((iVar1 == 0) && (sndPlayer != -1)) {
      if ((&gaChannel)[sndPlayer * 2] != -1) {
        freeVoiceChannel__Fi(sndPlayer);
      }
    }
    else {
      AudioCmn_SFX__Fi6s_typeT1iii(sndPlayer,surface1,surface2,force,Distsq,azimuth);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_PlayerHornOn__Fiiiii(int carIndex /*$t0*/, int Distsq /*$a1*/, int iFreqIn /*$s4*/, int azimuth /*$s3*/, int doppler /*stack 16*/)
 // line 2275, offset 0x80079444
	/* begin block 1 */
		// Start line: 2276
		// Start offset: 0x80079444
		// Variables:
	// 		int iAmpIn; // $s2
	// 		int sfx; // $s1
	// 		int player; // $s0
	/* end block 1 */
	// End offset: 0x80079528
	// End Line: 2301

void AudioCmn_PlayerHornOn__Fiiiii(int carIndex,int Distsq,int iFreqIn,int azimuth,int doppler)
{
  int iVar1;
  int sndPlayer;
  int iSFXnum;
  int iAmpIn;
  
  if (iGp000000f8 != 0) {
    if (Distsq < 0x1324) {
      iAmpIn = ((0x1324 - Distsq) * 0x7f) / 0x1324;
    }
    else {
      iAmpIn = 0;
    }
    iSFXnum = 3;
    if (DAT_801131f8 == 1) {
      iSFXnum = 10;
      sndPlayer = 0x2a;
      if (carIndex == 0) {
        sndPlayer = 0x29;
      }
    }
    else {
      sndPlayer = 0x29;
    }
    if (((&gaChannel)[sndPlayer * 2] == -1) || (iVar1 = SNDover(), iVar1 == 0)) {
      AudioCmn_PlaySFX__Fiiiiii(sndPlayer,iSFXnum,iFreqIn,doppler,iAmpIn,azimuth);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioCmn_PlayerHornOff__Fi(int carIndex /*$a0*/)
 // line 2305, offset 0x80079548
	/* begin block 1 */
		// Start line: 2306
		// Start offset: 0x80079548
		// Variables:
	// 		int player; // $s0
	/* end block 1 */
	// End offset: 0x800795F4
	// End Line: 2322

int AudioCmn_PlayerHornOff__Fi(int carIndex)
{
  int iVar1;
  int sndPlayer;
  
  if (iGp000000f8 == 0) {
    return 0;
  }
  sndPlayer = 0x29;
  if (carIndex == 0) {
LAB_8007957c:
    if (DAT_801131f8 == 1) goto LAB_800795e8;
  }
  else {
    if (DAT_801131f8 == 1) {
      sndPlayer = 0x2a;
      goto LAB_8007957c;
    }
  }
  if (((**(int **)((&_Cars_gList)[carIndex] + 0x288) == 0x14) && ((&gaChannel)[sndPlayer * 2] != -1)
      ) && (iVar1 = SNDover(), iVar1 == 0)) {
    return 1;
  }
LAB_800795e8:
  freeVoiceChannel__Fi(sndPlayer);
  return 0;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_PlayFESFX__Fi(int SFXnum /*$a0*/)
 // line 2327, offset 0x80079604
	/* begin block 1 */
		// Start line: 2328
		// Start offset: 0x80079604
	/* end block 1 */
	// End offset: 0x80079604
	// End Line: 2328

void AudioCmn_PlayFESFX__Fi(int SFXnum)
{
  AudioCmn_PlayFESFXVol__Fii(SFXnum,0x7f);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_PlayFESFXVol__Fii(int SFXnum /*$s1*/, int vol /*$s0*/)
 // line 2332, offset 0x80079624
	/* begin block 1 */
		// Start line: 2333
		// Start offset: 0x80079624
		// Variables:
	// 		struct SNDPLAYOPTS playopts; // stack offset -40
	/* end block 1 */
	// End offset: 0x80079624
	// End Line: 2333

void AudioCmn_PlayFESFXVol__Fii(int SFXnum,int vol)
{
  int local_28;
  undefined local_24;
  undefined local_21;
  undefined local_20;
  undefined local_1f;
  undefined local_1d;
  
  SNDplaysetdef(&local_28);
  local_1d = 0;
  local_1f = 0x40;
  local_21 = 0x40;
  local_24 = (undefined)gSndBnk;
  local_20 = (undefined)(iGp00000108 * vol * 0x78 >> 0xe);
  local_28 = SFXnum;
  SNDplay(&local_28);
  iGp00000124 = iGp00000124 + 1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_PlayWrongWaySFX__Fv()
 // line 2370, offset 0x800796ac
	/* begin block 1 */
		// Start line: 2371
		// Start offset: 0x800796AC
	/* end block 1 */
	// End offset: 0x800796AC
	// End Line: 2371

void AudioCmn_PlayWrongWaySFX__Fv(void)
{
  AudioCmn_PlaySound__Fiiiii(0,0x10,0,0x7f,0x40);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_PlayPauseSound__Fi(int patch /*$a0*/)
 // line 2375, offset 0x800796e4
	/* begin block 1 */
		// Start line: 2376
		// Start offset: 0x800796E4
	/* end block 1 */
	// End offset: 0x800796E4
	// End Line: 2376

void AudioCmn_PlayPauseSound__Fi(int patch)
{
  iGp0000018c = AudioCmn_PlaySound__Fiiiii(0,patch,0,0x7f,0x40);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ quickSirenOn__Fi(int sirennum /*$s0*/)
 // line 2412, offset 0x8007971c
	/* begin block 1 */
		// Start line: 2413
		// Start offset: 0x8007971C
		// Variables:
	// 		int patch; // $a1
	/* end block 1 */
	// End offset: 0x8007973C
	// End Line: 2415

void quickSirenOn__Fi(int sirennum)
{
  int patchNum;
  
  patchNum = 8;
  if ((sirennum & 1U) != 0) {
    patchNum = 6;
  }
  patchNum = AudioCmn_PlaySound__Fiiiii
                       (0,patchNum,0x40,0,*(int *)(&sirenCurrentPitch + sirennum * 4));
  (&gaChannel)[(sirennum + 0x2b) * 2] = patchNum;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ SuperCopSirenOn__Fi(int sirennum /*$s0*/)
 // line 2418, offset 0x80079790
	/* begin block 1 */
		// Start line: 2419
		// Start offset: 0x80079790
	/* end block 1 */
	// End offset: 0x80079790
	// End Line: 2419

void SuperCopSirenOn__Fi(int sirennum)
{
  int iVar1;
  
  iVar1 = AudioCmn_PlaySound__Fiiiii(0,9,0x40,0,*(int *)(&sirenCurrentPitch + sirennum * 4));
  (&gaChannel)[(sirennum + 0x2b) * 2] = iVar1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ SirenOn__Fii(int sirennum /*$a0*/, int supercop /*$a1*/)
 // line 2423, offset 0x800797f8
	/* begin block 1 */
		// Start line: 2424
		// Start offset: 0x800797F8
	/* end block 1 */
	// End offset: 0x80079890
	// End Line: 2438

void SirenOn__Fii(int sirennum,int supercop)
{
  int iVar1;
  
  iVar1 = sirennum * 4;
  if (*(int *)(&bSirenOn + iVar1) == 0) {
    *(int *)(&bSirenOn + iVar1) = 1;
    if (supercop == 0) {
      *(undefined4 *)(&quickSirenActive + iVar1) = 1;
      *(int *)(&sirenCount + iVar1) = iGp000001c4;
      quickSirenOn__Fi(sirennum);
      iGp000001c4 = iGp000001c4 + 1;
    }
    else {
      *(undefined4 *)(&quickSirenActive + iVar1) = 1;
      *(undefined4 *)(&sirenCount + iVar1) = 0xffffffff;
      SuperCopSirenOn__Fi(sirennum);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ SirenOff__Fi(int sirennum /*$a0*/)
 // line 2442, offset 0x800798a0
	/* begin block 1 */
		// Start line: 2443
		// Start offset: 0x800798A0
	/* end block 1 */
	// End offset: 0x800798A0
	// End Line: 2443

void SirenOff__Fi(int sirennum)
{
  int iVar1;
  
  iVar1 = sirennum * 4;
  *(undefined4 *)(&bSirenOn + iVar1) = 0;
  *(undefined4 *)(&bSirenPitchingUp + iVar1) = 1;
  *(undefined4 *)(&quickSirenActive + iVar1) = 0;
  *(undefined4 *)(&sirenCurrentPitch + iVar1) = 0x20;
  *(undefined4 *)(&slowSirenReps + iVar1) = 3;
  *(undefined4 *)(&reachedSirenMin + iVar1) = 0;
  *(undefined4 *)(&quickSirenTimeCount + iVar1) = 0;
  SNDautovol((&gaChannel)[(sirennum + 0x2b) * 2],5,0xffffffff);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ UpdateSiren__Fiiiii(int sirennum /*$s1*/, int amp /*$s2*/, int dop /*$s5*/, int azimuth /*$s4*/, int supercop /*stack 16*/)
 // line 2454, offset 0x8007995c
	/* begin block 1 */
		// Start line: 2455
		// Start offset: 0x8007995C
		// Variables:
	// 		int iFreq; // $a2
	/* end block 1 */
	// End offset: 0x80079B3C
	// End Line: 2485

void UpdateSiren__Fiiiii(int sirennum,int amp,int dop,int azimuth,int supercop)
{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(&bSirenOn + sirennum * 4) != 0) {
    iVar1 = SNDover((&gaChannel)[(sirennum + 0x2b) * 2]);
    if (iVar1 != 0) {
      if (supercop == 0) {
        quickSirenOn__Fi(sirennum);
      }
      else {
        SuperCopSirenOn__Fi(sirennum);
      }
    }
    *(int *)(&quickSirenTimeCount + sirennum * 4) =
         *(int *)(&quickSirenTimeCount + sirennum * 4) + 1;
    if (dop < 0) {
      dop = dop + 0x3ff;
    }
    dop = dop >> 10;
    if (dop < 0) {
      dop = 0;
    }
    iVar1 = 0x7f;
    if (dop < 0x80) {
      iVar1 = dop;
    }
    SNDpitchbend((&gaChannel)[(sirennum + 0x2b) * 2],iVar1);
    if (*(int *)(&sirenCount + sirennum * 4) == -1) {
      amp = amp * 0x25;
    }
    else {
      amp = amp * 0x2f;
    }
    SNDvol((&gaChannel)[(sirennum + 0x2b) * 2],iGp00000114 * amp >> 0xe);
    if (Audio_direct3davail == 0) {
      if (iGp00000128 != 0) {
        if (azimuth - 0x4000U < 0x8000) {
          uVar2 = 0xbfff - azimuth;
        }
        else {
          uVar2 = azimuth + 0x4000U & 0xffff;
        }
        SNDpan((&gaChannel)[(sirennum + 0x2b) * 2],(int)uVar2 >> 8);
      }
    }
    else {
      SND3dpos((&gaChannel)[(sirennum + 0x2b) * 2],azimuth,0);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_Pause__Fv()
 // line 2511, offset 0x80079b60
	/* begin block 1 */
		// Start line: 2512
		// Start offset: 0x80079B60

		/* begin block 1.1 */
			// Start line: 2512
			// Start offset: 0x80079B60
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x80079BB8
		// End Line: 2519
	/* end block 1 */
	// End offset: 0x80079BD8
	// End Line: 2523

void AudioCmn_Pause__Fv(void)
{
  int *piVar1;
  int iVar2;
  
  CopSpeak_SilenceCop__FP8Car_tObji((Car_tObj *)0x0,0);
  iVar2 = 0;
  piVar1 = &gaChannel;
  do {
    if (*piVar1 != -1) {
      SNDvol(*piVar1,0);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 2;
  } while (iVar2 < 0x47);
  AudioMus_Volume__Fi(0);
  if (cGp0000012c != '\0') {
    AudioCmn_ReverbOff__Fv();
  }
  AudioEng_Pause__Fv();
  SNDstopall();
  uGp00000104 = DAT_801132dc;
  uGp00000108 = DAT_801132e0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_UnPause__Fv()
 // line 2533, offset 0x80079c18
	/* begin block 1 */
		// Start line: 2534
		// Start offset: 0x80079C18
	/* end block 1 */
	// End offset: 0x80079C6C
	// End Line: 2537

void AudioCmn_UnPause__Fv(void)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  SNDmastervol(0x7f);
  iVar2 = iGp00000104 << 3;
  iVar3 = iGp00000104;
  if (0x55 < iGp00000104) {
    uVar1 = (iGp00000104 + -0x55) * 7;
    iVar3 = ((int)(uVar1 + (uVar1 >> 0x1f)) >> 1) + 0x55;
    iVar2 = iVar3 * 8;
  }
  AudioMus_Volume__Fi((iVar2 * 4 + iVar3 * 3) * 2 >> 7);
  AudioEng_Resume__Fv();
  DAT_801132dc = iGp00000104;
  DAT_801132e0 = uGp00000108;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_UnPauseAndQuit__Fv()
 // line 2546, offset 0x80079ca4
	/* begin block 1 */
		// Start line: 2547
		// Start offset: 0x80079CB8
		// Variables:
	// 		int i; // $s0

		/* begin block 1.1 */
			// Start line: 2554
			// Start offset: 0x80079CDC
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x80079D30
		// End Line: 2566
	/* end block 1 */
	// End offset: 0x80079D74
	// End Line: 2573

void AudioCmn_UnPauseAndQuit__Fv(void)
{
  int iVar1;
  int *piVar2;
  
  while (iVar1 = SNDover(uGp0000018c), iVar1 == 0) {
    systemtask(0);
  }
  iVar1 = 0;
  CopSpeak_Stop__Fv();
  SNDmastervol(0);
  AudioMus_StopSong__Fi(0);
  piVar2 = &gaChannel;
  do {
    if (*piVar2 != -1) {
      SNDstop();
      *piVar2 = -1;
      piVar2[1] = -1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 0x47);
  DAT_801132e0 = uGp00000108;
  DAT_801132dc = uGp00000104;
  if (cGp0000012c != '\0') {
    AudioCmn_ReverbOff__Fv();
  }
  iVar1 = 0;
  do {
    SNDmastervol(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x80);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_UnPauseAndRestart__Fv()
 // line 2577, offset 0x80079d8c
	/* begin block 1 */
		// Start line: 2578
		// Start offset: 0x80079D8C
		// Variables:
	// 		int i; // $s0

		/* begin block 1.1 */
			// Start line: 2587
			// Start offset: 0x80079DC8
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x80079E20
		// End Line: 2600
	/* end block 1 */
	// End offset: 0x80079E54
	// End Line: 2605

void AudioCmn_UnPauseAndRestart__Fv(void)
{
  int iVar1;
  int *piVar2;
  
  SPCH_ClearEventQueue();
  while (iVar1 = SNDover(uGp0000018c), iVar1 == 0) {
    systemtask(0);
  }
  iVar1 = 0;
  CopSpeak_Cancel__Fv();
  SNDmastervol(0);
  AudioCmn_DeInitAsyncSfx__Fv();
  AudioMus_StopSong__Fi(0);
  piVar2 = &gaChannel;
  do {
    if (*piVar2 != -1) {
      SNDstop();
      *piVar2 = -1;
      piVar2[1] = -1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 0x47);
  iVar1 = 0;
  do {
    SNDmastervol(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x80);
  if (cGp0000012c != '\0') {
    AudioCmn_ReverbOff__Fv();
  }
  DAT_801132e0 = uGp00000108;
  DAT_801132dc = uGp00000104;
  AudioCmn_Init__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_InitReverb__Fv()
 // line 2612, offset 0x80079e88
	/* begin block 1 */
		// Start line: 2613
		// Start offset: 0x80079E88
	/* end block 1 */
	// End offset: 0x80079E88
	// End Line: 2613

void AudioCmn_InitReverb__Fv(void)
{
  SNDfxinitbus(0,0x7f,10,0xffffffff,0xffffffff);
  uGp0000012d = 0;
  SNDfxmasterlevel(0,0);
  uGp0000012c = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioCmn_ReverbOff__Fv()
 // line 2631, offset 0x80079ecc
	/* begin block 1 */
		// Start line: 2632
		// Start offset: 0x80079ECC
	/* end block 1 */
	// End offset: 0x80079ECC
	// End Line: 2632

void AudioCmn_ReverbOff__Fv(void)
{
  SNDfxmasterlevel(0,0);
  uGp0000012c = 0;
  uGp0000012d = 0;
  return;


}





