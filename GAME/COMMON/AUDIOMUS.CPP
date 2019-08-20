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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_RefreshStatus__Fv(void)

{
  if (*(int *)(DAT_000001d4 + 0x74) < 0) {
    *(undefined4 *)(DAT_000001d4 + 0x90) = 0;
  }
  else {
    SNDSTRM_status(*(int *)(DAT_000001d4 + 0x74),(int *)(DAT_000001d4 + 0x90));
    if (0 < *(int *)(DAT_000001d4 + 0x90)) {
      SNDSTRM_requeststatus(*(uint *)(DAT_000001d4 + 0x94),(undefined4 *)(DAT_000001d4 + 0x9c));
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AudioMus_Threshold__Fv(void)

{
  if (((DAT_000001d4 == 0) || (*(int *)(DAT_000001d4 + 0x8c) == 0)) ||
     (*(int *)(DAT_000001d4 + 0x20) != 0)) {
    return 0;
  }
  if (*(int *)(DAT_000001d4 + 0x14) != 2) {
    if (*(int *)(DAT_000001d4 + 0x90) == 0) {
      return 0;
    }
    if (*(int *)(DAT_000001d4 + 0xa4) <= *(int *)(DAT_000001d4 + 0xa8)) {
      return 0;
    }
  }
  return *(int *)(DAT_000001d4 + 0x88);
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AudioMus_Buffered__Fv(void)

{
  if ((DAT_000001d4 != 0) && (*(int *)(DAT_000001d4 + 0x8c) != 0)) {
    if (*(int *)(DAT_000001d4 + 0x90) != 0) {
      return *(int *)(DAT_000001d4 + 0xa8);
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

AudioMus_tCurrentSong * AudioMus_GetCurrentSong__Fv(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = DAT_000001d4;
  if (DAT_000001d4 == 0) {
    return (AudioMus_tCurrentSong *)0x0;
  }
  *(undefined4 *)(DAT_000001d4 + 0x114) = *(undefined4 *)(DAT_000001d4 + 0xa4);
  iVar2 = *(int *)(iVar1 + 0x20);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 0xc) + 1;
  }
  *(int *)(iVar1 + 0x110) = iVar2;
  if (*(int *)(DAT_000001d4 + 0x20) == -4) {
    pcVar3 = s_BUFFER_NOT_ALLOCATED_80055778;
  }
  else {
    if (*(int *)(DAT_000001d4 + 0x20) != -3) goto LAB_8007a0ac;
    pcVar3 = s_STREAM_NOT_CREATED_80055790;
  }
  *(char **)(iVar1 + 0x11c) = pcVar3;
LAB_8007a0ac:
  iVar1 = DAT_000001d4;
  if (*(int *)(DAT_000001d4 + 0x18) == 0) {
    *(undefined4 *)(DAT_000001d4 + 0x10c) = 0;
  }
  else {
    *(undefined4 *)(DAT_000001d4 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x10c) = 1;
  }
  return (AudioMus_tCurrentSong *)(DAT_000001d4 + 0x10c);
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_SwitchSong__Fv(void)

{
  bool bVar1;
  int iVar2;
  
  if (((piGp000001d4 != (int *)0x0) && (piGp000001d4[2] != 0)) && (0 < *piGp000001d4)) {
    piGp000001d4[6] = 1;
    piGp000001d4[0xb] = 0;
    piGp000001d4[8] = 0;
    piGp000001d4[0x45] = 0;
    piGp000001d4[0x4c] = 0;
    piGp000001d4[0x46] = 0;
    piGp000001d4[0x47] = 0;
    piGp000001d4[0x48] = 0;
    piGp000001d4[0x49] = 0;
    piGp000001d4[0x4b] = 0;
    if ((piGp000001d4[5] == 0) && (-1 < piGp000001d4[3])) {
      SNDSTRM_autovol(piGp000001d4[0x1d],2000,0);
      piGp000001d4[9] = 1000;
    }
    iVar2 = piGp000001d4[3];
    bVar1 = Hud_kTurnSongOffNext == (void *)0x0;
    piGp000001d4[3] = iVar2 + 1;
    if ((bVar1) && (iVar2 + 1 < piGp000001d4[2])) {
      piGp000001d4[5] = 1;
    }
    else {
      Hud_kTurnSongOffNext = (void *)0x0;
      piGp000001d4[4] = 0;
      piGp000001d4[5] = -1;
      piGp000001d4[3] = -1;
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
  
  *(int *)(iGp000001d4 + 0x20) = errorcode;
  if (*(int *)(iGp000001d4 + 0x90) != 0) {
    iVar1 = AudioMus_Buffered__Fv();
    SNDSTRM_autovol(*(int *)(iGp000001d4 + 0x74),iVar1,0);
    iVar1 = AudioMus_Buffered__Fv();
    *(int *)(iGp000001d4 + 0x24) = iVar1;
  }
  *(undefined4 *)(iGp000001d4 + 0x18) = 1;
  *(undefined4 *)(iGp000001d4 + 0x10) = 0;
  *(undefined4 *)(iGp000001d4 + 0x2c) = 0;
  *(undefined4 *)(iGp000001d4 + 0x14) = 0xffffffff;
  *(undefined4 *)(iGp000001d4 + 0xc) = 0xffffffff;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_QueueRequestedSong__Fv(void)

{
  undefined4 uVar1;
  uchar *puVar2;
  uint local_10 [2];
  
  uVar1 = locatebigentry(*(byte **)(iGp000001d4 + 0x8c),(byte *)0x0,
                         (uint)*(byte *)(iGp000001d4 + *(int *)(iGp000001d4 + 0xc) + 0xec),local_10,
                         (uint *)0x0);
  *(undefined4 *)(iGp000001d4 + 0x2c) = uVar1;
  if (-1 < (int)*(uint *)(iGp000001d4 + 0x74)) {
    uVar1 = SNDSTRM_queuefile(*(uint *)(iGp000001d4 + 0x74),1000,(uint *)(iGp000001d4 + 0xac),
                              local_10[0]);
    *(undefined4 *)(iGp000001d4 + 0x78) = uVar1;
  }
  *(undefined4 *)(iGp000001d4 + 0x14) = 2;
  puVar2 = gettick();
  *(uchar **)(iGp000001d4 + 0x1c) = puVar2 + 0x280;
  *(undefined4 *)(iGp000001d4 + 0x114) = 0;
  *(undefined4 *)(iGp000001d4 + 0x130) = 0;
  *(undefined4 *)(iGp000001d4 + 0x118) = 0;
  *(undefined4 *)(iGp000001d4 + 0x11c) = 0;
  *(undefined4 *)(iGp000001d4 + 0x120) = 0;
  *(undefined4 *)(iGp000001d4 + 0x124) = 0;
  *(undefined4 *)(iGp000001d4 + 300) = 0;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_SetCurrentSongInfo__Fv(void)

{
  *(int *)(iGp000001d4 + 0x114) = *(int *)(iGp000001d4 + 0xa4);
  *(int *)(iGp000001d4 + 0x130) = *(int *)(iGp000001d4 + 0xa4) + *(int *)(iGp000001d4 + 0xa0);
  *(undefined4 *)(iGp000001d4 + 0x118) = *(undefined4 *)(iGp000001d4 + 0x2c);
  AudioMus_SetEntry__FP19AudioMus_tSongEntry((AudioMus_tSongEntry *)(iGp000001d4 + 0x118));
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
  int *piVar1;
  int iVar2;
  uchar *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (piGp000001d4[0x23] != 0) {
    if ((*(char *)(piGp000001d4 + 0x2b) == '.') || (iVar2 = CdDiskReady(1), iVar2 != 0x10)) {
      if (piGp000001d4[8] == -2) {
        iVar2 = CdDiskReady(1);
        if (iVar2 != 2) {
          return 0;
        }
        piGp000001d4[8] = -5;
        if (piGp000001d4[3] < 0) {
          return 0;
        }
        piGp000001d4[6] = 1;
        piGp000001d4[5] = 2;
      }
      else {
        AudioMus_RefreshStatus__Fv();
        iVar2 = AudioMus_Threshold__Fv();
        if ((iVar2 != 0) && (piGp000001d4[5] != 2)) {
          iVar2 = AudioMus_Buffered__Fv();
          if (iVar2 < 0x226) {
            AudioMus_Fail__Fi(-5);
          }
          else {
            iVar2 = AudioMus_Buffered__Fv();
            if (iVar2 < 0x5dc) {
              if (piGp000001d4[0x21] == 0) {
                SNDSTRM_setgreedystate(piGp000001d4[0x1d],1);
                piGp000001d4[0x21] = 1;
              }
            }
            else {
              iVar2 = AudioMus_Buffered__Fv();
              if ((piGp000001d4[0x22] <= iVar2) && (piGp000001d4[0x21] != 0)) {
                SNDSTRM_setgreedystate(piGp000001d4[0x1d],0);
                piGp000001d4[0x21] = 0;
              }
            }
          }
        }
        piVar1 = piGp000001d4;
        if (piGp000001d4[5] == 0) {
          if (piGp000001d4[0x24] != 0) {
            return 0;
          }
          iVar2 = piGp000001d4[3];
          if (iVar2 < 0) {
            return 0;
          }
          iVar5 = piGp000001d4[2];
          if (1 < iVar5) {
            if (piGp000001d4[10] == 0) {
              if (iVar5 == 0) {
                trap(0x1c00);
              }
              if ((iVar5 == -1) && (iVar2 + 1 == -0x80000000)) {
                trap(0x1800);
              }
              piGp000001d4[3] = (iVar2 + 1) % iVar5;
            }
            else {
              iVar6 = iVar5 + -1;
              uVar4 = GetRCnt(0);
              if ((int)uVar4 < 1) {
                uVar4 = GetRCnt(0);
                uVar4 = -uVar4;
              }
              else {
                uVar4 = GetRCnt(0);
              }
              if (iVar6 == 0) {
                trap(0x1c00);
              }
              if ((iVar6 == -1) && (uVar4 == 0x80000000)) {
                trap(0x1800);
              }
              iVar2 = iVar2 + 1 + (int)uVar4 % iVar6;
              if (iVar5 == 0) {
                trap(0x1c00);
              }
              if ((iVar5 == -1) && (iVar2 == -0x80000000)) {
                trap(0x1800);
              }
              piVar1[3] = iVar2 % iVar5;
            }
          }
          SNDSTRM_vol(piGp000001d4[0x1d],0);
          AudioMus_QueueRequestedSong__Fv();
          piGp000001d4[6] = 1;
          piGp000001d4[4] = 1;
          return 0;
        }
        if (piGp000001d4[5] == 2) {
          if (piGp000001d4[0x1c] == 0) {
            AudioMus_Fail__Fi(-4);
            return 0;
          }
          if (piGp000001d4[0x1d] < 0) {
            AudioMus_Fail__Fi(-3);
            return 0;
          }
          if (piGp000001d4[0x24] == 0) {
            return 0;
          }
          if (piGp000001d4[0x2a] <= piGp000001d4[0x22]) {
            return 0;
          }
          if (piGp000001d4[8] == -5) {
            iVar2 = piGp000001d4[0x1d];
            iVar5 = *piGp000001d4;
            piGp000001d4[8] = 0;
          }
          else {
            AudioMus_SetCurrentSongInfo__Fv();
            iVar2 = piGp000001d4[0x1d];
            iVar5 = *piGp000001d4;
          }
          SNDSTRM_autovol(iVar2,2000,iVar5);
          piGp000001d4[5] = 0;
          return 0;
        }
        if ((piGp000001d4[0x24] != 0) && (iVar2 = SNDSTRM_getvol(piGp000001d4[0x1d]), iVar2 != 0)) {
          return 0;
        }
        if (-1 < piGp000001d4[0x1d]) {
          SNDSTRM_purge(piGp000001d4[0x1d]);
        }
        piGp000001d4[0xb] = 0;
        if (piGp000001d4[5] != 1) {
          piGp000001d4[5] = 0;
          return 0;
        }
        piGp000001d4[9] = 0;
        AudioMus_QueueRequestedSong__Fv();
        piGp000001d4[5] = 2;
      }
      puVar3 = gettick();
      *(uchar **)(piGp000001d4 + 7) = puVar3 + 0x280;
    }
    else {
      if (piGp000001d4[8] == 0) {
        piGp000001d4[8] = -2;
        piGp000001d4[6] = 1;
        if (-1 < piGp000001d4[3]) {
          iVar2 = AudioMus_Buffered__Fv();
          SNDSTRM_autovol(piGp000001d4[0x1d],iVar2,0);
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
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  AudioMus_tSongList *pAVar5;
  int *piVar6;
  AudioMus_tSongEntry *info;
  uint local_28 [2];
  
  iVar4 = 0;
  if (DAT_000001d4 == 0) {
    pAVar5 = (AudioMus_tSongList *)reservememadr(s_Song_List_800557a4,8,memtype);
    pAVar5->numsongs = 0;
    pAVar5->currentsong = -1;
  }
  else {
    iVar3 = 0;
    if (0 < *(int *)(DAT_000001d4 + 4)) {
      do {
        pbVar1 = (byte *)locatebigentry(*(byte **)(DAT_000001d4 + 0x8c),(byte *)0x0,iVar3,
                                        (uint *)0x0,(uint *)0x0);
        uVar2 = wildcard(pbVar1,(byte *)pattern);
        if (uVar2 != 0) {
          iVar4 = iVar4 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(DAT_000001d4 + 4));
    }
    pAVar5 = (AudioMus_tSongList *)reservememadr(s_Song_List_800557a4,iVar4 << 6 | 8,memtype);
    info = (AudioMus_tSongEntry *)(pAVar5 + 1);
    iVar4 = 0;
    piVar6 = &pAVar5[4].currentsong;
    pAVar5->numsongs = 0;
    pAVar5->currentsong = -1;
    while (iVar4 < *(int *)(DAT_000001d4 + 4)) {
      pbVar1 = (byte *)locatebigentry(*(byte **)(DAT_000001d4 + 0x8c),(byte *)0x0,iVar4,(uint *)0x0,
                                      local_28);
      uVar2 = wildcard(pbVar1,(byte *)pattern);
      if (uVar2 != 0) {
        *(byte **)&info->filename = pbVar1;
        AudioMus_SetEntry__FP19AudioMus_tSongEntry(info);
        *piVar6 = iVar4;
        iVar3 = DAT_000001d4;
        piVar6[-1] = (int)(local_28[0] * 10) / 0xfc;
        if (pbVar1 == *(byte **)(iVar3 + 0x2c)) {
          pAVar5->currentsong = iVar4;
        }
        piVar6 = piVar6 + 0x10;
        info = info + 1;
        pAVar5->numsongs = pAVar5->numsongs + 1;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return pAVar5;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_InitGlobals__Fv(void)

{
  int iVar1;
  
  iVar1 = DAT_000001d4;
  *(undefined4 *)(DAT_000001d4 + 0x8c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_InitDriverGlobals__Fv(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_000001d4;
  DAT_000001d4[3] = 0xffffffff;
  *puVar1 = 0;
  puVar1[9] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  puVar1[0xb] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[0x21] = 0;
  puVar1[0x45] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x20] = 1;
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
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 auStack64 [4];
  int local_30;
  int aiStack40 [2];
  undefined local_20;
  
  if (DAT_000001d4 != 0) {
    if (*(int *)(DAT_000001d4 + 0x80) == 0) {
      AudioMus_InitDriverGlobals__Fv();
    }
    iVar3 = DAT_000001d4;
    piVar1 = (int *)(DAT_000001d4 + 0x74);
    *(int *)(DAT_000001d4 + 0x88) = buffersize + spusize >> 5;
    if ((*piVar1 < 0) && (*(int *)(iVar3 + 0x70) != 0)) {
      iVar3 = buffersize;
      if (buffersize < 0) {
        iVar3 = buffersize + 0x3ff;
      }
      iVar2 = SNDSTRM_overhead(1,iVar3 >> 10);
      SNDgetlimits(auStack64);
      local_30 = spusize;
      SNDsetlimits(auStack64);
      SNDplaysetdef(aiStack40);
      local_20 = 0;
      iVar3 = SNDSTRM_create(aiStack40,1,iVar3 >> 10,*(int **)(DAT_000001d4 + 0x70),
                             buffersize + iVar2);
      *(int *)(DAT_000001d4 + 0x74) = iVar3;
      if (-1 < iVar3) {
        SNDSTRM_setgreedylevel(iVar3,0);
        SNDSTRM_setpriority(*(int *)(DAT_000001d4 + 0x74),0xff,5);
      }
    }
    gMusicHandle = *(int *)(DAT_000001d4 + 0x74);
    if (*(int *)(DAT_000001d4 + 0x7c) == 0) {
      addsystemtask((int)AudioMus_Server__Fii,0x19,0);
      *(undefined4 *)(DAT_000001d4 + 0x7c) = 1;
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
  short *psVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  if (DAT_000001d4 == (short *)0x0) {
    DAT_000001d4 = reservememadr(s_Music_Globals_800557b0,0x158,0);
    if (DAT_000001d4 != (short *)0x0) {
      AudioMus_InitGlobals__Fv();
      iVar4 = buffersize;
      if (buffersize < 0) {
        iVar4 = buffersize + 0x3ff;
      }
      iVar4 = SNDSTRM_overhead(1,iVar4 >> 10);
      psVar1 = reservememadr(s_Music_Buffer_800557c0,buffersize + iVar4,0);
      *(short **)(DAT_000001d4 + 0x38) = psVar1;
      AudioMus_DriverStartUp__Fii(buffersize,spusize);
      sprintf((char *)(DAT_000001d4 + 0x56),s__szzz_s_viv_800557d0,PTR_801164d4,songs);
      pbVar2 = (byte *)loadbigfileheader(DAT_000001d4 + 0x56,0);
      *(byte **)(DAT_000001d4 + 0x46) = pbVar2;
      if (pbVar2 != (byte *)0x0) {
        uVar3 = bigcount(pbVar2);
        *(uint *)(DAT_000001d4 + 2) = uVar3;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_DriverCleanUp__Fv(void)

{
  if (DAT_000001d4 != 0) {
    if (*(int *)(DAT_000001d4 + 0x7c) != 0) {
      delsystemtask((int)AudioMus_Server__Fii);
      *(undefined4 *)(DAT_000001d4 + 0x7c) = 0;
    }
    if (-1 < *(int *)(DAT_000001d4 + 0x74)) {
      SNDSTRM_destroy(*(int *)(DAT_000001d4 + 0x74));
      *(undefined4 *)(DAT_000001d4 + 0x74) = 0xffffffff;
    }
    *(undefined4 *)(DAT_000001d4 + 0x80) = 0;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_SysCleanUp__Fv(void)

{
  if (DAT_000001d4 != 0) {
    AudioMus_DriverCleanUp__Fv();
    if (*(int *)(DAT_000001d4 + 0x70) != 0) {
      purgememadr(*(int *)(DAT_000001d4 + 0x70));
    }
    if (*(int *)(DAT_000001d4 + 0x8c) != 0) {
      purgememadr(*(int *)(DAT_000001d4 + 0x8c));
    }
    purgememadr(DAT_000001d4);
    DAT_000001d4 = 0;
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
  int iVar1;
  
  if ((DAT_000001d4 != 0) && (-1 < *(int *)(DAT_000001d4 + 0xc))) {
    if (fadeticks == 0) {
      if (-1 < *(int *)(DAT_000001d4 + 0x74)) {
        SNDSTRM_purge(*(int *)(DAT_000001d4 + 0x74));
      }
      iVar1 = DAT_000001d4;
      *(undefined4 *)(DAT_000001d4 + 0x24) = 0;
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
    else {
      if (*(int *)(DAT_000001d4 + 0x14) == 0) {
        if (*(int *)(DAT_000001d4 + 0x74) < 0) {
          *(undefined4 *)(DAT_000001d4 + 0x24) = 0;
        }
        else {
          SNDSTRM_autovol(*(int *)(DAT_000001d4 + 0x74),fadeticks,0);
          *(int *)(DAT_000001d4 + 0x24) = fadeticks;
        }
        *(undefined4 *)(DAT_000001d4 + 0x2c) = 0;
      }
      *(undefined4 *)(DAT_000001d4 + 0x14) = 0xffffffff;
    }
    *(undefined4 *)(DAT_000001d4 + 0xc) = 0xffffffff;
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
  
  if (DAT_000001d4 != 0) {
    *(undefined4 *)(DAT_000001d4 + 8) = 0;
    iVar1 = 0;
    if (0 < numplaylistsongs) {
      do {
        if ((-1 < *playlist) && (*playlist < *(int *)(DAT_000001d4 + 4))) {
          *(undefined *)(DAT_000001d4 + *(int *)(DAT_000001d4 + 8) + 0xec) = *(undefined *)playlist;
          *(int *)(DAT_000001d4 + 8) = *(int *)(DAT_000001d4 + 8) + 1;
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
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  if (DAT_000001d4 != 0) {
    piVar1 = (int *)(DAT_000001d4 + 4);
    iVar4 = 0;
    *(undefined4 *)(DAT_000001d4 + 8) = 0;
    if (0 < *piVar1) {
      do {
        if (0x1f < *(int *)(DAT_000001d4 + 8)) {
          return;
        }
        pbVar2 = (byte *)locatebigentry(*(byte **)(DAT_000001d4 + 0x8c),(byte *)0x0,iVar4,
                                        (uint *)0x0,(uint *)0x0);
        uVar3 = wildcard(pbVar2,(byte *)pattern);
        if (uVar3 != 0) {
          *(undefined *)(DAT_000001d4 + *(int *)(DAT_000001d4 + 8) + 0xec) = (char)iVar4;
          *(int *)(DAT_000001d4 + 8) = *(int *)(DAT_000001d4 + 8) + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(DAT_000001d4 + 4));
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
  int *piVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char acStack152 [128];
  
  if (DAT_000001d4 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    if (((pattern != (char *)0x0) && (AudioMus_BuildPattern__FPc(pattern), DAT_000001d4[2] == 0)) &&
       (sVar2 = strlen(pattern), sVar2 < 0x3d)) {
      sprintf(acStack152,&DAT_8013c724,pattern);
      AudioMus_BuildPattern__FPc(acStack152);
    }
    piVar1 = DAT_000001d4;
    iVar3 = 0;
    if (*DAT_000001d4 != 0) {
      iVar3 = DAT_000001d4[2];
      if (iVar3 != 0) {
        DAT_000001d4[10] = 1;
        if (iVar3 == 1) {
          iVar6 = 0;
        }
        else {
          if (pattern == (char *)0x0) {
            iVar5 = piVar1[3];
            iVar6 = iVar3 + -1;
            uVar4 = GetRCnt(0);
            if ((int)uVar4 < 1) {
              uVar4 = GetRCnt(0);
              uVar4 = -uVar4;
            }
            else {
              uVar4 = GetRCnt(0);
            }
            if (iVar6 == 0) {
              trap(0x1c00);
            }
            if ((iVar6 == -1) && (uVar4 == 0x80000000)) {
              trap(0x1800);
            }
            iVar5 = iVar5 + 1 + (int)uVar4 % iVar6;
            iVar6 = iVar5 % iVar3;
            if (iVar3 == 0) {
              trap(0x1c00);
            }
            if ((iVar3 == -1) && (iVar5 == -0x80000000)) {
              trap(0x1800);
            }
          }
          else {
            uVar4 = GetRCnt(0);
            if ((int)uVar4 < 1) {
              uVar4 = GetRCnt(0);
              uVar4 = -uVar4;
            }
            else {
              uVar4 = GetRCnt(0);
            }
            iVar6 = (int)uVar4 % iVar3;
            if (iVar3 == 0) {
              trap(0x1c00);
            }
            if ((iVar3 == -1) && (uVar4 == 0x80000000)) {
              trap(0x1800);
            }
          }
        }
        piVar1 = DAT_000001d4;
        if (DAT_000001d4[5] == 0) {
          if (DAT_000001d4[3] < 0) {
            piVar1 = DAT_000001d4 + 0x1d;
            DAT_000001d4[9] = 0;
            SNDSTRM_vol(*piVar1,0);
            DAT_000001d4[3] = iVar6;
            AudioMus_QueueRequestedSong__Fv();
          }
          else {
            SNDSTRM_autovol(DAT_000001d4[0x1d],2000,0);
            piVar1 = DAT_000001d4;
            DAT_000001d4[9] = 2000;
            piVar1[5] = 1;
            piVar1[3] = iVar6;
            piVar1[0xb] = 0;
          }
        }
        else {
          DAT_000001d4[5] = 1;
          piVar1[3] = iVar6;
        }
        piVar1 = DAT_000001d4;
        DAT_000001d4[4] = 1;
        piVar1[8] = 0;
        if (pattern != (char *)0x0) {
          piVar1[6] = 1;
        }
      }
      iVar3 = DAT_000001d4[2];
    }
  }
  return iVar3;
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
  
  if ((DAT_000001d4 != (int *)0x0) && (*DAT_000001d4 != volume)) {
    iVar3 = 0;
    if (volume == 0) {
      *DAT_000001d4 = 0;
      AudioMus_StopSong__Fi(0);
    }
    else {
      if ((((DAT_000001d4[9] != 0) && (-1 < DAT_000001d4[0x1d])) &&
          (iVar1 = SNDSTRM_getvol(DAT_000001d4[0x1d]), 0 < iVar1)) &&
         (iVar2 = *DAT_000001d4, 0 < iVar2)) {
        iVar3 = (DAT_000001d4[9] * iVar1) / iVar2;
        if (iVar2 == 0) {
          trap(0x1c00);
        }
        if ((iVar2 == -1) && (DAT_000001d4[9] * iVar1 == -0x80000000)) {
          trap(0x1800);
        }
      }
      if (iVar3 == 0) {
        if ((-1 < DAT_000001d4[0x1d]) && (DAT_000001d4[5] != 2)) {
          SNDSTRM_vol(DAT_000001d4[0x1d],volume);
        }
      }
      else {
        iVar1 = DAT_000001d4[9];
        if (iVar1 == 0) {
          trap(0x1c00);
        }
        if ((iVar1 == -1) && (volume * iVar3 == -0x80000000)) {
          trap(0x1800);
        }
        SNDSTRM_vol(DAT_000001d4[0x1d],(volume * iVar3) / iVar1);
        SNDSTRM_autovol(DAT_000001d4[0x1d],iVar3,0);
      }
      if (*DAT_000001d4 == 0) {
        *DAT_000001d4 = volume;
        AudioMus_PlaySong__FPc((char *)0x0);
      }
      else {
        *DAT_000001d4 = volume;
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
  if ((DAT_000001d4 != (int *)0x0) && (*DAT_000001d4 != volume)) {
    if (volume == 0) {
      *DAT_000001d4 = 0;
      AudioMus_StopSong__Fi(0);
    }
    else {
      if (*DAT_000001d4 == 0) {
        *DAT_000001d4 = volume;
        AudioMus_PlaySong__FPc((char *)0x0);
      }
      else {
        *DAT_000001d4 = volume;
      }
      if (((DAT_000001d4[5] != 2) && (DAT_000001d4[9] == 0)) && (-1 < DAT_000001d4[0x1d])) {
        SNDSTRM_autovol(DAT_000001d4[0x1d],fadeticks,volume);
      }
    }
  }
  return;
}




