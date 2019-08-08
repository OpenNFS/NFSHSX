#include "NFS4.H"
#include "AUDIOMUS.H"

// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_RefreshStatus__Fv()
 // line 83, offset 0x80079ef4
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x80079EF4
	/* end block 1 */
	// End offset: 0x80079F48
	// End Line: 93

void AudioMus_RefreshStatus__Fv(void)
{
  if (*(int *)(iGp000001d4 + 0x74) < 0) {
    *(undefined4 *)(iGp000001d4 + 0x90) = 0;
  }
  else {
    SNDSTRM_status(*(int *)(iGp000001d4 + 0x74),iGp000001d4 + 0x90);
    if (0 < *(int *)(iGp000001d4 + 0x90)) {
      SNDSTRM_requeststatus(*(undefined4 *)(iGp000001d4 + 0x94),iGp000001d4 + 0x9c);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioMus_Threshold__Fv()
 // line 146, offset 0x80079f58
	/* begin block 1 */
		// Start line: 147
		// Start offset: 0x80079F58
	/* end block 1 */
	// End offset: 0x80079FD4
	// End Line: 160

int AudioMus_Threshold__Fv(void)
{
  if (((iGp000001d4 == 0) || (*(int *)(iGp000001d4 + 0x8c) == 0)) ||
     (*(int *)(iGp000001d4 + 0x20) != 0)) {
    return 0;
  }
  if (*(int *)(iGp000001d4 + 0x14) != 2) {
    if (*(int *)(iGp000001d4 + 0x90) == 0) {
      return 0;
    }
    if (*(int *)(iGp000001d4 + 0xa4) <= *(int *)(iGp000001d4 + 0xa8)) {
      return 0;
    }
  }
  return *(int *)(iGp000001d4 + 0x88);


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioMus_Buffered__Fv()
 // line 167, offset 0x80079fdc
	/* begin block 1 */
		// Start line: 168
		// Start offset: 0x80079FDC
	/* end block 1 */
	// End offset: 0x8007A020
	// End Line: 177

int AudioMus_Buffered__Fv(void)
{
  if ((iGp000001d4 != 0) && (*(int *)(iGp000001d4 + 0x8c) != 0)) {
    if (*(int *)(iGp000001d4 + 0x90) != 0) {
      return *(int *)(iGp000001d4 + 0xa8);
    }
    return 0;
  }
  return 0;


}




// decompiled code
// original method signature: 
// struct AudioMus_tCurrentSong * /*$ra*/ AudioMus_GetCurrentSong__Fv()
 // line 196, offset 0x8007a028
	/* begin block 1 */
		// Start line: 197
		// Start offset: 0x8007A028
		// Variables:
	// 		struct AudioMus_tCurrentSong *curr; // $a0
	// 		struct AudioMus_tSongEntry *info; // $a0
	/* end block 1 */
	// End offset: 0x8007A0DC
	// End Line: 230

AudioMus_tCurrentSong * AudioMus_GetCurrentSong__Fv(void)
{
  int iVar1;
  char *pcVar2;
  
  if (iGp000001d4 == 0) {
    return (AudioMus_tCurrentSong *)0x0;
  }
  *(undefined4 *)(iGp000001d4 + 0x114) = *(undefined4 *)(iGp000001d4 + 0xa4);
  iVar1 = *(int *)(iGp000001d4 + 0x20);
  if (iVar1 == 0) {
    iVar1 = *(int *)(iGp000001d4 + 0xc) + 1;
  }
  *(int *)(iGp000001d4 + 0x110) = iVar1;
  if (*(int *)(iGp000001d4 + 0x20) == -4) {
    pcVar2 = "BUFFER NOT ALLOCATED";
  }
  else {
    if (*(int *)(iGp000001d4 + 0x20) != -3) goto LAB_8007a0ac;
    pcVar2 = "STREAM NOT CREATED";
  }
  *(char **)(iGp000001d4 + 0x11c) = pcVar2;
LAB_8007a0ac:
  if (*(int *)(iGp000001d4 + 0x18) == 0) {
    *(undefined4 *)(iGp000001d4 + 0x10c) = 0;
  }
  else {
    *(undefined4 *)(iGp000001d4 + 0x18) = 0;
    *(undefined4 *)(iGp000001d4 + 0x10c) = 1;
  }
  return (AudioMus_tCurrentSong *)(iGp000001d4 + 0x10c);


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_SwitchSong__Fv()
 // line 242, offset 0x8007a0e4
	/* begin block 1 */
		// Start line: 243
		// Start offset: 0x8007A0E4

		/* begin block 1.1 */
			// Start line: 243
			// Start offset: 0x8007A0E4

			/* begin block 1.1.1 */
				// Start line: 245
				// Start offset: 0x8007A114
				// Variables:
			// 		struct AudioMus_tSongEntry *info; // $v0
			/* end block 1.1.1 */
			// End offset: 0x8007A1CC
			// End Line: 279
		/* end block 1.1 */
		// End offset: 0x8007A1CC
		// End Line: 279
	/* end block 1 */
	// End offset: 0x8007A1CC
	// End Line: 279

void AudioMus_SwitchSong__Fv(void)
{
  if (((false) && (iRam00000008 != 0)) && (0 < __front_dtors_size)) {
    uRam00000018 = 1;
    uRam0000002c = 0;
    uRam00000020 = 0;
    uRam00000114 = 0;
    uRam00000130 = 0;
    uRam00000118 = 0;
    uRam0000011c = 0;
    uRam00000120 = 0;
    uRam00000124 = 0;
    uRam0000012c = 0;
    if ((iRam00000014 == 0) && (-1 < iRam0000000c)) {
      SNDSTRM_autovol(uRam00000074,2000,0);
      uRam00000024 = 1000;
    }
    iRam0000000c = iRam0000000c + 1;
    if ((Hud_kTurnSongOffNext == 0) && (iRam0000000c < iRam00000008)) {
      iRam00000014 = 1;
    }
    else {
      Hud_kTurnSongOffNext = 0;
      _DAT_00000010 = 0;
      iRam00000014 = -1;
      iRam0000000c = -1;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_Fail__Fi(int errorcode /*$a0*/)
 // line 285, offset 0x8007a1dc
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x8007A1DC
	/* end block 1 */
	// End offset: 0x8007A228
	// End Line: 306

void AudioMus_Fail__Fi(int errorcode)
{
  int iVar1;
  
  iRam00000020 = errorcode;
  if (iRam00000090 != 0) {
    iRam00000020 = errorcode;
    iVar1 = AudioMus_Buffered__Fv();
    SNDSTRM_autovol(uRam00000074,iVar1,0);
    iRam00000024 = AudioMus_Buffered__Fv();
  }
  uRam0000000c = 0xffffffff;
  _DAT_00000010 = 0;
  uRam00000014 = 0xffffffff;
  uRam00000018 = 1;
  uRam0000002c = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_QueueRequestedSong__Fv()
 // line 316, offset 0x8007a258
	/* begin block 1 */
		// Start line: 317
		// Start offset: 0x8007A258
		// Variables:
	// 		long offset; // stack offset -16
	// 		struct AudioMus_tSongEntry *info; // $v0
	/* end block 1 */
	// End offset: 0x8007A2BC
	// End Line: 326

void AudioMus_QueueRequestedSong__Fv(void)
{
  int iVar1;
  undefined4 local_10 [2];
  
  uRam0000002c = locatebigentry(uRam0000008c,0,(uint)*(byte *)(iRam0000000c + 0xec),local_10,0);
  if (-1 < iRam00000074) {
    uRam00000078 = SNDSTRM_queuefile(iRam00000074,1000,0xac,local_10[0]);
  }
  uRam00000014 = 2;
  iVar1 = gettick();
  iRam0000001c = iVar1 + 0x280;
  uRam00000114 = 0;
  uRam00000118 = 0;
  uRam0000011c = 0;
  uRam00000120 = 0;
  uRam00000124 = 0;
  uRam0000012c = 0;
  uRam00000130 = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_SetEntry__FP19AudioMus_tSongEntry(struct AudioMus_tSongEntry *info /*$a0*/)
 // line 345, offset 0x8007a308
	/* begin block 1 */
		// Start line: 346
		// Start offset: 0x8007A308
		// Variables:
	// 		int titlechar; // $a1
	// 		int havefile; // $a3

		/* begin block 1.1 */
			// Start line: 347
			// Start offset: 0x8007A308
			// Variables:
		// 		char *p; // $a2
		/* end block 1.1 */
		// End offset: 0x8007A37C
		// End Line: 372
	/* end block 1 */
	// End offset: 0x8007A37C
	// End Line: 373

void AudioMus_SetEntry__FP19AudioMus_tSongEntry(AudioMus_tSongEntry *info)
{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = info->filename;
  iVar3 = 0;
  info->artist = (char *)0x0;
  info->label = (char *)0x0;
  info->date = (char *)0x0;
  info->notes = (char *)0x0;
  cVar1 = *pcVar4;
  bVar2 = false;
  do {
    if (cVar1 == '\0') {
LAB_8007a37c:
      info->strbuf[iVar3] = '\0';
      info->title = info->strbuf;
      return;
    }
    if (cVar1 == '-') {
      if (bVar2) {
        info->artist = pcVar4 + 1;
        goto LAB_8007a37c;
      }
      bVar2 = true;
      iVar3 = 0;
    }
    else {
      if (iVar3 < 0x1f) {
        info->strbuf[iVar3] = cVar1;
        iVar3 = iVar3 + 1;
      }
    }
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_SetCurrentSongInfo__Fv()
 // line 379, offset 0x8007a390
	/* begin block 1 */
		// Start line: 380
		// Start offset: 0x8007A390
		// Variables:
	// 		struct AudioMus_tSongEntry *info; // $a0
	/* end block 1 */
	// End offset: 0x8007A390
	// End Line: 380

void AudioMus_SetCurrentSongInfo__Fv(void)
{
  iRam00000114 = iRam000000a4;
  iRam00000130 = iRam000000a4 + _LAB_000000a0;
  uRam00000118 = uRam0000002c;
  AudioMus_SetEntry__FP19AudioMus_tSongEntry((AudioMus_tSongEntry *)0x118);
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioMus_Server__Fii(int mode /*$a0*/, int ticks /*$a1*/)
 // line 407, offset 0x8007a3d0
	/* begin block 1 */
		// Start line: 408
		// Start offset: 0x8007A3D0
	/* end block 1 */
	// End offset: 0x8007A864
	// End Line: 543

int AudioMus_Server__Fii(int mode,int ticks)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (iRam0000008c != 0) {
    if ((cRam000000ac == '.') || (iVar1 = CdDiskReady(1), iVar1 != 0x10)) {
      if (iRam00000020 == -2) {
        iVar1 = CdDiskReady(1);
        if (iVar1 != 2) {
          return 0;
        }
        iRam00000020 = -5;
        if (iRam0000000c < 0) {
          iRam00000020 = 0xfffffffb;
          return 0;
        }
        uRam00000018 = 1;
      }
      else {
        AudioMus_RefreshStatus__Fv();
        iVar1 = AudioMus_Threshold__Fv();
        if ((iVar1 != 0) && (iRam00000014 != 2)) {
          iVar1 = AudioMus_Buffered__Fv();
          if (iVar1 < 0x226) {
            AudioMus_Fail__Fi(-5);
          }
          else {
            iVar1 = AudioMus_Buffered__Fv();
            if (iVar1 < 0x5dc) {
              if (iRam00000084 == 0) {
                SNDSTRM_setgreedystate(iRam00000074,1);
                iRam00000084 = 1;
              }
            }
            else {
              iVar1 = AudioMus_Buffered__Fv();
              if ((iRam00000088 <= iVar1) && (iRam00000084 != 0)) {
                SNDSTRM_setgreedystate(iRam00000074,0);
                iRam00000084 = 0;
              }
            }
          }
        }
        iVar1 = iRam00000008;
        if (iRam00000014 == 0) {
          if (iRam00000090 != 0) {
            return 0;
          }
          if (iRam0000000c < 0) {
            return 0;
          }
          if (1 < iRam00000008) {
            if (iRam00000028 == 0) {
              iVar1 = iRam0000000c + 1;
              iRam0000000c = iVar1 % iRam00000008;
              if (iRam00000008 == 0) {
                trap(0x1c00);
              }
              if ((iRam00000008 == -1) && (iVar1 == -0x80000000)) {
                trap(0x1800);
              }
            }
            else {
              iVar3 = iRam00000008 + -1;
              iVar4 = iRam0000000c + 1;
              iVar2 = GetRCnt(0);
              if (iVar2 < 1) {
                iVar2 = GetRCnt(0);
                iVar2 = -iVar2;
              }
              else {
                iVar2 = GetRCnt(0);
              }
              if (iVar3 == 0) {
                trap(0x1c00);
              }
              if ((iVar3 == -1) && (iVar2 == -0x80000000)) {
                trap(0x1800);
              }
              iVar4 = iVar4 + iVar2 % iVar3;
              iRam0000000c = iVar4 % iVar1;
              if (iVar1 == 0) {
                trap(0x1c00);
              }
              if ((iVar1 == -1) && (iVar4 == -0x80000000)) {
                trap(0x1800);
              }
            }
          }
          SNDSTRM_vol(iRam00000074,0);
          AudioMus_QueueRequestedSong__Fv();
          _DAT_00000010 = 1;
          uRam00000018 = 1;
          return 0;
        }
        if (iRam00000014 == 2) {
          if (iRam00000070 == 0) {
            AudioMus_Fail__Fi(-4);
            return 0;
          }
          if (iRam00000074 < 0) {
            AudioMus_Fail__Fi(-3);
            return 0;
          }
          if (iRam00000090 == 0) {
            return 0;
          }
          if (iRam000000a8 <= iRam00000088) {
            return 0;
          }
          if (iRam00000020 == -5) {
            iRam00000020 = 0;
          }
          else {
            AudioMus_SetCurrentSongInfo__Fv();
          }
          SNDSTRM_autovol(iRam00000074,2000,__front_dtors_size);
          iRam00000014 = 0;
          return 0;
        }
        if ((iRam00000090 != 0) && (iVar1 = SNDSTRM_getvol(iRam00000074), iVar1 != 0)) {
          return 0;
        }
        if (-1 < iRam00000074) {
          SNDSTRM_purge();
        }
        uRam0000002c = 0;
        if (iRam00000014 != 1) {
          iRam00000014 = 0;
          uRam0000002c = 0;
          return 0;
        }
        uRam00000024 = 0;
        AudioMus_QueueRequestedSong__Fv();
      }
      iRam00000014 = 2;
      iRam0000001c = gettick();
      iRam0000001c = iRam0000001c + 0x280;
    }
    else {
      if (iRam00000020 == 0) {
        iRam00000020 = -2;
        uRam00000018 = 1;
        if (-1 < iRam0000000c) {
          iVar1 = AudioMus_Buffered__Fv();
          SNDSTRM_autovol(iRam00000074,iVar1,0);
        }
      }
    }
  }
  return 0;


}




// decompiled code
// original method signature: 
// struct AudioMus_tSongList * /*$ra*/ AudioMus_GetSongList__FPci(char *pattern /*$s5*/, int memtype /*$s2*/)
 // line 548, offset 0x8007a880
	/* begin block 1 */
		// Start line: 549
		// Start offset: 0x8007A880
		// Variables:
	// 		struct AudioMus_tSongList *list; // $s1
	// 		struct AudioMus_tSongEntry *song; // $s4
	// 		int numsongs; // $s1

		/* begin block 1.1 */
			// Start line: 549
			// Start offset: 0x8007A880

			/* begin block 1.1.1 */
				// Start line: 555
				// Start offset: 0x8007A8B4

				/* begin block 1.1.1.1 */
					// Start line: 556
					// Start offset: 0x8007A8B4
					// Variables:
				// 		int i; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x8007A914
				// End Line: 560

				/* begin block 1.1.1.2 */
					// Start line: 560
					// Start offset: 0x8007A914
					// Variables:
				// 		int i; // $s2

					/* begin block 1.1.1.2.1 */
						// Start line: 566
						// Start offset: 0x8007A948
						// Variables:
					// 		long size; // stack offset -40
					// 		char *songname; // $s0
					/* end block 1.1.1.2.1 */
					// End offset: 0x8007AA00
					// End Line: 584
				/* end block 1.1.1.2 */
				// End offset: 0x8007AA08
				// End Line: 586
			/* end block 1.1.1 */
			// End offset: 0x8007AA08
			// End Line: 586
		/* end block 1.1 */
		// End offset: 0x8007AA2C
		// End Line: 592
	/* end block 1 */
	// End offset: 0x8007AA2C
	// End Line: 594

AudioMus_tSongList * AudioMus_GetSongList__FPci(char *pattern,int memtype)
{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  AudioMus_tSongList *pAVar6;
  int *piVar7;
  AudioMus_tSongEntry *info;
  int local_28 [2];
  
  iVar5 = 0;
  if (iGp000001d4 == 0) {
    pAVar6 = (AudioMus_tSongList *)reservememadr("Song List",8,memtype);
    pAVar6->numsongs = 0;
    pAVar6->currentsong = -1;
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(iGp000001d4 + 4)) {
      do {
        uVar1 = locatebigentry(*(undefined4 *)(iGp000001d4 + 0x8c),0,iVar4,0,0);
        iVar2 = wildcard(uVar1,pattern);
        if (iVar2 != 0) {
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iGp000001d4 + 4));
    }
    pAVar6 = (AudioMus_tSongList *)reservememadr("Song List",iVar5 << 6 | 8,memtype);
    info = (AudioMus_tSongEntry *)(pAVar6 + 1);
    iVar5 = 0;
    piVar7 = &pAVar6[4].currentsong;
    pAVar6->numsongs = 0;
    pAVar6->currentsong = -1;
    while (iVar5 < *(int *)(iGp000001d4 + 4)) {
      pcVar3 = (char *)locatebigentry(*(undefined4 *)(iGp000001d4 + 0x8c),0,iVar5,0,local_28);
      iVar4 = wildcard(pcVar3,pattern);
      if (iVar4 != 0) {
        info->filename = pcVar3;
        AudioMus_SetEntry__FP19AudioMus_tSongEntry(info);
        *piVar7 = iVar5;
        piVar7[-1] = (local_28[0] * 10) / 0xfc;
        if (pcVar3 == *(char **)(iGp000001d4 + 0x2c)) {
          pAVar6->currentsong = iVar5;
        }
        piVar7 = piVar7 + 0x10;
        info = info + 1;
        pAVar6->numsongs = pAVar6->numsongs + 1;
      }
      iVar5 = iVar5 + 1;
    }
  }
  return pAVar6;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_InitGlobals__Fv()
 // line 599, offset 0x8007aa54
	/* begin block 1 */
		// Start line: 600
		// Start offset: 0x8007AA54
	/* end block 1 */
	// End offset: 0x8007AA54
	// End Line: 601

void AudioMus_InitGlobals__Fv(void)
{
  *(undefined4 *)(iGp000001d4 + 0x8c) = 0;
  *(undefined4 *)(iGp000001d4 + 0x70) = 0;
  *(undefined4 *)(iGp000001d4 + 0x74) = 0xffffffff;
  *(undefined4 *)(iGp000001d4 + 0x7c) = 0;
  *(undefined4 *)(iGp000001d4 + 0x80) = 0;
  *(undefined4 *)(iGp000001d4 + 4) = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_InitDriverGlobals__Fv()
 // line 611, offset 0x8007aa78
	/* begin block 1 */
		// Start line: 612
		// Start offset: 0x8007AA78
		// Variables:
	// 		struct AudioMus_tSongEntry *info; // $v1
	/* end block 1 */
	// End offset: 0x8007AA78
	// End Line: 613

void AudioMus_InitDriverGlobals__Fv(void)
{
  puGp000001d4[3] = 0xffffffff;
  *puGp000001d4 = 0;
  puGp000001d4[9] = 0;
  puGp000001d4[2] = 0;
  puGp000001d4[4] = 0;
  puGp000001d4[6] = 0;
  puGp000001d4[0xb] = 0;
  puGp000001d4[5] = 0;
  puGp000001d4[8] = 0;
  puGp000001d4[0x21] = 0;
  puGp000001d4[0x45] = 0;
  puGp000001d4[0x4c] = 0;
  puGp000001d4[0x46] = 0;
  puGp000001d4[0x47] = 0;
  puGp000001d4[0x48] = 0;
  puGp000001d4[0x49] = 0;
  puGp000001d4[0x4b] = 0;
  puGp000001d4[0x20] = 1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_DriverStartUp__Fii(int buffersize /*$s2*/, int spusize /*$s0*/)
 // line 642, offset 0x8007aad4
	/* begin block 1 */
		// Start line: 643
		// Start offset: 0x8007AAD4

		/* begin block 1.1 */
			// Start line: 643
			// Start offset: 0x8007AAD4

			/* begin block 1.1.1 */
				// Start line: 645
				// Start offset: 0x8007AAF8

				/* begin block 1.1.1.1 */
					// Start line: 649
					// Start offset: 0x8007AB10

					/* begin block 1.1.1.1.1 */
						// Start line: 652
						// Start offset: 0x8007AB28

						/* begin block 1.1.1.1.1.1 */
							// Start line: 653
							// Start offset: 0x8007AB28

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 654
								// Start offset: 0x8007AB38
								// Variables:
							// 		int chunks; // $s1
							// 		int size; // $s2
							// 		struct SNDLIMITS sndlimits; // stack offset -64
							// 		struct SNDPLAYOPTS opts; // stack offset -40
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8007ABC4
							// End Line: 682
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007ABC4
						// End Line: 686
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007ABC4
					// End Line: 686
				/* end block 1.1.1.1 */
				// End offset: 0x8007ABC4
				// End Line: 686
			/* end block 1.1.1 */
			// End offset: 0x8007AC00
			// End Line: 694
		/* end block 1.1 */
		// End offset: 0x8007AC00
		// End Line: 694
	/* end block 1 */
	// End offset: 0x8007AC00
	// End Line: 694

void AudioMus_DriverStartUp__Fii(int buffersize,int spusize)
{
  int iVar1;
  int iVar2;
  undefined auStack64 [16];
  int local_30;
  undefined auStack40 [8];
  undefined local_20;
  
  if (iGp000001d4 != 0) {
    if (*(int *)(iGp000001d4 + 0x80) == 0) {
      AudioMus_InitDriverGlobals__Fv();
    }
    *(int *)(iGp000001d4 + 0x88) = buffersize + spusize >> 5;
    if ((*(int *)(iGp000001d4 + 0x74) < 0) && (*(int *)(iGp000001d4 + 0x70) != 0)) {
      iVar2 = buffersize;
      if (buffersize < 0) {
        iVar2 = buffersize + 0x3ff;
      }
      iVar1 = SNDSTRM_overhead(1,iVar2 >> 10);
      SNDgetlimits(auStack64);
      local_30 = spusize;
      SNDsetlimits(auStack64);
      SNDplaysetdef(auStack40);
      local_20 = 0;
      iVar2 = SNDSTRM_create(auStack40,1,iVar2 >> 10,*(undefined4 *)(iGp000001d4 + 0x70),
                             buffersize + iVar1);
      *(int *)(iGp000001d4 + 0x74) = iVar2;
      if (-1 < iVar2) {
        SNDSTRM_setgreedylevel(iVar2,0);
        SNDSTRM_setpriority(*(undefined4 *)(iGp000001d4 + 0x74),0xff,5);
      }
    }
    gMusicHandle = *(undefined4 *)(iGp000001d4 + 0x74);
    if (*(int *)(iGp000001d4 + 0x7c) == 0) {
      addsystemtask(AudioMus_Server__Fii,0x19,0);
      *(undefined4 *)(iGp000001d4 + 0x7c) = 1;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_SysStartUp__FiiPc(int buffersize /*$s0*/, int spusize /*$s1*/, char *songs /*$s2*/)
 // line 701, offset 0x8007ac18
	/* begin block 1 */
		// Start line: 702
		// Start offset: 0x8007AC18
	/* end block 1 */
	// End offset: 0x8007ACF8
	// End Line: 750

void AudioMus_SysStartUp__FiiPc(int buffersize,int spusize,char *songs)
{
  undefined4 uVar1;
  int iVar2;
  
  if (iGp000001d4 == 0) {
    iGp000001d4 = reservememadr("Music Globals",0x158,0);
    if (iGp000001d4 != 0) {
      AudioMus_InitGlobals__Fv();
      iVar2 = buffersize;
      if (buffersize < 0) {
        iVar2 = buffersize + 0x3ff;
      }
      iVar2 = SNDSTRM_overhead(1,iVar2 >> 10);
      uVar1 = reservememadr("Music Buffer",buffersize + iVar2,0);
      *(undefined4 *)(iGp000001d4 + 0x70) = uVar1;
      AudioMus_DriverStartUp__Fii(buffersize,spusize);
      sprintf((char *)(iGp000001d4 + 0xac),"%szzz%s.viv",0,songs);
      iVar2 = loadbigfileheader(iGp000001d4 + 0xac,0);
      *(int *)(iGp000001d4 + 0x8c) = iVar2;
      if (iVar2 != 0) {
        uVar1 = bigcount(iVar2);
        *(undefined4 *)(iGp000001d4 + 4) = uVar1;
      }
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_DriverCleanUp__Fv()
 // line 757, offset 0x8007ad10
	/* begin block 1 */
		// Start line: 758
		// Start offset: 0x8007AD10
	/* end block 1 */
	// End offset: 0x8007AD7C
	// End Line: 771

void AudioMus_DriverCleanUp__Fv(void)
{
  if (iGp000001d4 != 0) {
    if (*(int *)(iGp000001d4 + 0x7c) != 0) {
      delsystemtask(AudioMus_Server__Fii);
      *(undefined4 *)(iGp000001d4 + 0x7c) = 0;
    }
    if (-1 < *(int *)(iGp000001d4 + 0x74)) {
      SNDSTRM_destroy();
      *(undefined4 *)(iGp000001d4 + 0x74) = 0xffffffff;
    }
    *(undefined4 *)(iGp000001d4 + 0x80) = 0;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_SysCleanUp__Fv()
 // line 777, offset 0x8007ad8c
	/* begin block 1 */
		// Start line: 778
		// Start offset: 0x8007AD8C
	/* end block 1 */
	// End offset: 0x8007ADF4
	// End Line: 790

void AudioMus_SysCleanUp__Fv(void)
{
  if (iGp000001d4 != 0) {
    AudioMus_DriverCleanUp__Fv();
    if (*(int *)(iGp000001d4 + 0x70) != 0) {
      purgememadr();
    }
    if (*(int *)(iGp000001d4 + 0x8c) != 0) {
      purgememadr();
    }
    purgememadr(iGp000001d4);
    iGp000001d4 = 0;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_StopSong__Fi(int fadeticks /*$s0*/)
 // line 796, offset 0x8007ae04
	/* begin block 1 */
		// Start line: 797
		// Start offset: 0x8007AE04
	/* end block 1 */
	// End offset: 0x8007AEC8
	// End Line: 829

void AudioMus_StopSong__Fi(int fadeticks)
{
  if ((iGp000001d4 != 0) && (-1 < *(int *)(iGp000001d4 + 0xc))) {
    if (fadeticks == 0) {
      if (-1 < *(int *)(iGp000001d4 + 0x74)) {
        SNDSTRM_purge();
      }
      *(undefined4 *)(iGp000001d4 + 0x24) = 0;
      *(undefined4 *)(iGp000001d4 + 0x2c) = 0;
      *(undefined4 *)(iGp000001d4 + 0x14) = 0;
    }
    else {
      if (*(int *)(iGp000001d4 + 0x14) == 0) {
        if (*(int *)(iGp000001d4 + 0x74) < 0) {
          *(undefined4 *)(iGp000001d4 + 0x24) = 0;
        }
        else {
          SNDSTRM_autovol(*(int *)(iGp000001d4 + 0x74),fadeticks,0);
          *(int *)(iGp000001d4 + 0x24) = fadeticks;
        }
        *(undefined4 *)(iGp000001d4 + 0x2c) = 0;
      }
      *(undefined4 *)(iGp000001d4 + 0x14) = 0xffffffff;
    }
    *(undefined4 *)(iGp000001d4 + 0xc) = 0xffffffff;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_BuildPlayList__FiPi(int numplaylistsongs /*$a0*/, int *playlist /*$a1*/)
 // line 836, offset 0x8007aed8
	/* begin block 1 */
		// Start line: 837
		// Start offset: 0x8007AED8

		/* begin block 1.1 */
			// Start line: 838
			// Start offset: 0x8007AED8

			/* begin block 1.1.1 */
				// Start line: 838
				// Start offset: 0x8007AEE8

				/* begin block 1.1.1.1 */
					// Start line: 838
					// Start offset: 0x8007AEE8
					// Variables:
				// 		int i; // $a3
				/* end block 1.1.1.1 */
				// End offset: 0x8007AF58
				// End Line: 850
			/* end block 1.1.1 */
			// End offset: 0x8007AF58
			// End Line: 850
		/* end block 1.1 */
		// End offset: 0x8007AF58
		// End Line: 850
	/* end block 1 */
	// End offset: 0x8007AF58
	// End Line: 850

void AudioMus_BuildPlayList__FiPi(int numplaylistsongs,int *playlist)
{
  int iVar1;
  
  if (iGp000001d4 != 0) {
    *(undefined4 *)(iGp000001d4 + 8) = 0;
    iVar1 = 0;
    if (0 < numplaylistsongs) {
      do {
        if ((-1 < *playlist) && (*playlist < *(int *)(iGp000001d4 + 4))) {
          *(undefined *)(iGp000001d4 + *(int *)(iGp000001d4 + 8) + 0xec) = *(undefined *)playlist;
          *(int *)(iGp000001d4 + 8) = *(int *)(iGp000001d4 + 8) + 1;
        }
        iVar1 = iVar1 + 1;
        playlist = playlist + 1;
      } while (iVar1 < numplaylistsongs);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_BuildPattern__FPc(char *pattern /*$s1*/)
 // line 856, offset 0x8007af60
	/* begin block 1 */
		// Start line: 857
		// Start offset: 0x8007AF60

		/* begin block 1.1 */
			// Start line: 857
			// Start offset: 0x8007AF60

			/* begin block 1.1.1 */
				// Start line: 858
				// Start offset: 0x8007AF7C

				/* begin block 1.1.1.1 */
					// Start line: 858
					// Start offset: 0x8007AF7C
					// Variables:
				// 		int i; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x8007B01C
				// End Line: 869
			/* end block 1.1.1 */
			// End offset: 0x8007B01C
			// End Line: 869
		/* end block 1.1 */
		// End offset: 0x8007B01C
		// End Line: 869
	/* end block 1 */
	// End offset: 0x8007B01C
	// End Line: 869

void AudioMus_BuildPattern__FPc(char *pattern)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (iGp000001d4 != 0) {
    iVar3 = 0;
    *(undefined4 *)(iGp000001d4 + 8) = 0;
    if (0 < *(int *)(iGp000001d4 + 4)) {
      do {
        if (0x1f < *(int *)(iGp000001d4 + 8)) {
          return;
        }
        uVar1 = locatebigentry(*(undefined4 *)(iGp000001d4 + 0x8c),0,iVar3,0,0);
        iVar2 = wildcard(uVar1,pattern);
        if (iVar2 != 0) {
          *(undefined *)(iGp000001d4 + *(int *)(iGp000001d4 + 8) + 0xec) = (char)iVar3;
          *(int *)(iGp000001d4 + 8) = *(int *)(iGp000001d4 + 8) + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iGp000001d4 + 4));
    }
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioMus_PlaySong__FPc(char *pattern /*$s3*/)
 // line 875, offset 0x8007b030
	/* begin block 1 */
		// Start line: 876
		// Start offset: 0x8007B030

		/* begin block 1.1 */
			// Start line: 876
			// Start offset: 0x8007B030

			/* begin block 1.1.1 */
				// Start line: 883
				// Start offset: 0x8007B054

				/* begin block 1.1.1.1 */
					// Start line: 884
					// Start offset: 0x8007B054

					/* begin block 1.1.1.1.1 */
						// Start line: 885
						// Start offset: 0x8007B05C

						/* begin block 1.1.1.1.1.1 */
							// Start line: 891
							// Start offset: 0x8007B05C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 894
								// Start offset: 0x8007B090
								// Variables:
							// 		char title[128]; // stack offset -152
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8007B0A8
							// End Line: 898
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007B0A8
						// End Line: 898
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007B0A8
					// End Line: 898
				/* end block 1.1.1.1 */
				// End offset: 0x8007B0A8
				// End Line: 898

				/* begin block 1.1.1.2 */
					// Start line: 914
					// Start offset: 0x8007B0C0

					/* begin block 1.1.1.2.1 */
						// Start line: 915
						// Start offset: 0x8007B0D0
						// Variables:
					// 		int newsong; // $s0
					/* end block 1.1.1.2.1 */
					// End offset: 0x8007B27C
					// End Line: 951
				/* end block 1.1.1.2 */
				// End offset: 0x8007B27C
				// End Line: 951
			/* end block 1.1.1 */
			// End offset: 0x8007B290
			// End Line: 953
		/* end block 1.1 */
		// End offset: 0x8007B294
		// End Line: 956
	/* end block 1 */
	// End offset: 0x8007B294
	// End Line: 956

int AudioMus_PlaySong__FPc(char *pattern)
{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char acStack152 [128];
  
  if (piGp000001d4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    if (((pattern != (char *)0x0) && (AudioMus_BuildPattern__FPc(pattern), piGp000001d4[2] == 0)) &&
       (sVar1 = strlen(pattern), sVar1 < 0x3d)) {
      sprintf(acStack152,"*-%s",pattern);
      AudioMus_BuildPattern__FPc(acStack152);
    }
    iVar2 = 0;
    if (*piGp000001d4 != 0) {
      iVar2 = piGp000001d4[2];
      if (iVar2 != 0) {
        piGp000001d4[10] = 1;
        if (iVar2 == 1) {
          iVar4 = 0;
        }
        else {
          if (pattern == (char *)0x0) {
            iVar3 = piGp000001d4[3];
            iVar5 = iVar2 + -1;
            iVar4 = GetRCnt(0);
            if (iVar4 < 1) {
              iVar4 = GetRCnt(0);
              iVar4 = -iVar4;
            }
            else {
              iVar4 = GetRCnt(0);
            }
            if (iVar5 == 0) {
              trap(0x1c00);
            }
            if ((iVar5 == -1) && (iVar4 == -0x80000000)) {
              trap(0x1800);
            }
            iVar3 = iVar3 + 1 + iVar4 % iVar5;
            iVar4 = iVar3 % iVar2;
            if (iVar2 == 0) {
              trap(0x1c00);
            }
            if ((iVar2 == -1) && (iVar3 == -0x80000000)) {
              trap(0x1800);
            }
          }
          else {
            iVar3 = GetRCnt(0);
            if (iVar3 < 1) {
              iVar3 = GetRCnt(0);
              iVar3 = -iVar3;
            }
            else {
              iVar3 = GetRCnt(0);
            }
            iVar4 = iVar3 % iVar2;
            if (iVar2 == 0) {
              trap(0x1c00);
            }
            if ((iVar2 == -1) && (iVar3 == -0x80000000)) {
              trap(0x1800);
            }
          }
        }
        if (piGp000001d4[5] == 0) {
          if (piGp000001d4[3] < 0) {
            piGp000001d4[9] = 0;
            SNDSTRM_vol(piGp000001d4[0x1d],0);
            piGp000001d4[3] = iVar4;
            AudioMus_QueueRequestedSong__Fv();
          }
          else {
            SNDSTRM_autovol(piGp000001d4[0x1d],2000,0);
            piGp000001d4[9] = 2000;
            piGp000001d4[5] = 1;
            piGp000001d4[3] = iVar4;
            piGp000001d4[0xb] = 0;
          }
        }
        else {
          piGp000001d4[5] = 1;
          piGp000001d4[3] = iVar4;
        }
        piGp000001d4[4] = 1;
        piGp000001d4[8] = 0;
        if (pattern != (char *)0x0) {
          piGp000001d4[6] = 1;
        }
      }
      iVar2 = piGp000001d4[2];
    }
  }
  return iVar2;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_Volume__Fi(int volume /*$s1*/)
 // line 961, offset 0x8007b2b0
	/* begin block 1 */
		// Start line: 962
		// Start offset: 0x8007B2B0

		/* begin block 1.1 */
			// Start line: 962
			// Start offset: 0x8007B2B0

			/* begin block 1.1.1 */
				// Start line: 964
				// Start offset: 0x8007B2CC

				/* begin block 1.1.1.1 */
					// Start line: 965
					// Start offset: 0x8007B2CC

					/* begin block 1.1.1.1.1 */
						// Start line: 966
						// Start offset: 0x8007B2DC
						// Variables:
					// 		int ticksleft; // $s0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 967
							// Start offset: 0x8007B2DC

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 975
								// Start offset: 0x8007B2F8

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 976
									// Start offset: 0x8007B2F8

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 977
										// Start offset: 0x8007B318
										// Variables:
									// 		int curvol; // $a0
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8007B388
									// End Line: 983
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8007B388
								// End Line: 983
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8007B458
							// End Line: 1001
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007B458
						// End Line: 1001
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007B458
					// End Line: 1001
				/* end block 1.1.1.1 */
				// End offset: 0x8007B458
				// End Line: 1001
			/* end block 1.1.1 */
			// End offset: 0x8007B458
			// End Line: 1001
		/* end block 1.1 */
		// End offset: 0x8007B458
		// End Line: 1001
	/* end block 1 */
	// End offset: 0x8007B458
	// End Line: 1001

void AudioMus_Volume__Fi(int volume)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((piGp000001d4 != (int *)0x0) && (*piGp000001d4 != volume)) {
    iVar3 = 0;
    if (volume == 0) {
      *piGp000001d4 = 0;
      AudioMus_StopSong__Fi(0);
    }
    else {
      if ((((piGp000001d4[9] != 0) && (-1 < piGp000001d4[0x1d])) &&
          (iVar1 = SNDSTRM_getvol(), 0 < iVar1)) && (iVar2 = *piGp000001d4, 0 < iVar2)) {
        iVar3 = (piGp000001d4[9] * iVar1) / iVar2;
        if (iVar2 == 0) {
          trap(0x1c00);
        }
        if ((iVar2 == -1) && (piGp000001d4[9] * iVar1 == -0x80000000)) {
          trap(0x1800);
        }
      }
      if (iVar3 == 0) {
        if ((-1 < piGp000001d4[0x1d]) && (piGp000001d4[5] != 2)) {
          SNDSTRM_vol(piGp000001d4[0x1d],volume);
        }
      }
      else {
        iVar1 = piGp000001d4[9];
        if (iVar1 == 0) {
          trap(0x1c00);
        }
        if ((iVar1 == -1) && (volume * iVar3 == -0x80000000)) {
          trap(0x1800);
        }
        SNDSTRM_vol(piGp000001d4[0x1d],(volume * iVar3) / iVar1);
        SNDSTRM_autovol(piGp000001d4[0x1d],iVar3,0);
      }
      if (*piGp000001d4 == 0) {
        *piGp000001d4 = volume;
        AudioMus_PlaySong__FPc((char *)0x0);
      }
      else {
        *piGp000001d4 = volume;
      }
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioMus_AutoVolume__Fii(int fadeticks /*$s1*/, int volume /*$s0*/)
 // line 1009, offset 0x8007b46c
	/* begin block 1 */
		// Start line: 1010
		// Start offset: 0x8007B46C
	/* end block 1 */
	// End offset: 0x8007B518
	// End Line: 1033

void AudioMus_AutoVolume__Fii(int fadeticks,int volume)
{
  if ((piGp000001d4 != (int *)0x0) && (*piGp000001d4 != volume)) {
    if (volume == 0) {
      *piGp000001d4 = 0;
      AudioMus_StopSong__Fi(0);
    }
    else {
      if (*piGp000001d4 == 0) {
        *piGp000001d4 = volume;
        AudioMus_PlaySong__FPc((char *)0x0);
      }
      else {
        *piGp000001d4 = volume;
      }
      if (((piGp000001d4[5] != 2) && (piGp000001d4[9] == 0)) && (-1 < piGp000001d4[0x1d])) {
        SNDSTRM_autovol(piGp000001d4[0x1d],fadeticks,volume);
      }
    }
  }
  return;


}





