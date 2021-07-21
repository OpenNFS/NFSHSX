#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 166
	/* end block 2 */
	// End Line: 167

	/* begin block 3 */
		// Start line: 166
	/* end block 3 */
	// End Line: 167

	/* begin block 4 */
		// Start line: 167
	/* end block 4 */
	// End Line: 168

	/* begin block 5 */
		// Start line: 167
	/* end block 5 */
	// End Line: 168

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_RefreshStatus__Fv(void)

{
  if (AudioMus_g->streamhandle < 0) {
    (AudioMus_g->streamstatus).outstandingrequests = 0;
  }
  else {
    SNDSTRM_status(AudioMus_g->streamhandle,(int *)&AudioMus_g->streamstatus);
    if (0 < (AudioMus_g->streamstatus).outstandingrequests) {
      SNDSTRM_requeststatus
                ((AudioMus_g->streamstatus).currentrequest,(undefined4 *)&AudioMus_g->requeststatus)
      ;
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

	/* begin block 2 */
		// Start line: 239
	/* end block 2 */
	// End Line: 240

	/* begin block 3 */
		// Start line: 293
	/* end block 3 */
	// End Line: 294

	/* begin block 4 */
		// Start line: 293
	/* end block 4 */
	// End Line: 294

	/* begin block 5 */
		// Start line: 295
	/* end block 5 */
	// End Line: 296

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AudioMus_Threshold__Fv(void)

{
  if (((AudioMus_g == (AudioMus_tMusicGlobals *)0x0) || (AudioMus_g->bigfileheader == (char *)0x0))
     || (AudioMus_g->errorcode != 0)) {
    return 0;
  }
  if (AudioMus_g->switchsong != 2) {
    if ((AudioMus_g->streamstatus).outstandingrequests == 0) {
      return 0;
    }
    if ((AudioMus_g->requeststatus).timetoend <= (AudioMus_g->requeststatus).timebuffered) {
      return 0;
    }
  }
  return AudioMus_g->threshold;
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

	/* begin block 2 */
		// Start line: 327
	/* end block 2 */
	// End Line: 328

	/* begin block 3 */
		// Start line: 335
	/* end block 3 */
	// End Line: 336

	/* begin block 4 */
		// Start line: 335
	/* end block 4 */
	// End Line: 336

	/* begin block 5 */
		// Start line: 337
	/* end block 5 */
	// End Line: 338

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AudioMus_Buffered__Fv(void)

{
  if ((AudioMus_g != (AudioMus_tMusicGlobals *)0x0) && (AudioMus_g->bigfileheader != (char *)0x0)) {
    if ((AudioMus_g->streamstatus).outstandingrequests != 0) {
      return (AudioMus_g->requeststatus).timebuffered;
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

	/* begin block 2 */
		// Start line: 386
	/* end block 2 */
	// End Line: 387

	/* begin block 3 */
		// Start line: 379
	/* end block 3 */
	// End Line: 380

	/* begin block 4 */
		// Start line: 379
	/* end block 4 */
	// End Line: 380

	/* begin block 5 */
		// Start line: 380
	/* end block 5 */
	// End Line: 381

	/* begin block 6 */
		// Start line: 380
	/* end block 6 */
	// End Line: 381

/* WARNING: Unknown calling convention yet parameter storage is locked */

AudioMus_tCurrentSong * AudioMus_GetCurrentSong__Fv(void)

{
  AudioMus_tMusicGlobals *pAVar1;
  int iVar2;
  char *pcVar3;
  
  pAVar1 = AudioMus_g;
  if (AudioMus_g == (AudioMus_tMusicGlobals *)0x0) {
    return (AudioMus_tCurrentSong *)0x0;
  }
  (AudioMus_g->current).remaining = (AudioMus_g->requeststatus).timetoend;
  iVar2 = pAVar1->errorcode;
  if (iVar2 == 0) {
    iVar2 = pAVar1->requestsong + 1;
  }
  (pAVar1->current).index = iVar2;
  if (AudioMus_g->errorcode == -4) {
    pcVar3 = s_BUFFER_NOT_ALLOCATED_80055778;
  }
  else {
    if (AudioMus_g->errorcode != -3) goto LAB_8007a0ac;
    pcVar3 = s_STREAM_NOT_CREATED_80055790;
  }
  (pAVar1->current).info.title = pcVar3;
LAB_8007a0ac:
  pAVar1 = AudioMus_g;
  if (AudioMus_g->newswitch == 0) {
    (AudioMus_g->current).newsong = 0;
  }
  else {
    AudioMus_g->newswitch = 0;
    (pAVar1->current).newsong = 1;
  }
  return &AudioMus_g->current;
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

	/* begin block 2 */
		// Start line: 478
	/* end block 2 */
	// End Line: 479

	/* begin block 3 */
		// Start line: 465
	/* end block 3 */
	// End Line: 466

	/* begin block 4 */
		// Start line: 465
	/* end block 4 */
	// End Line: 466

	/* begin block 5 */
		// Start line: 466
	/* end block 5 */
	// End Line: 467

	/* begin block 6 */
		// Start line: 466
	/* end block 6 */
	// End Line: 467

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_SwitchSong__Fv(void)

{
  bool bVar1;
  AudioMus_tMusicGlobals *pAVar2;
  int iVar3;
  
  pAVar2 = AudioMus_g;
  if (((AudioMus_g != (AudioMus_tMusicGlobals *)0x0) && (AudioMus_g->availablesongs != 0)) &&
     (0 < AudioMus_g->volume)) {
    AudioMus_g->newswitch = 1;
    pAVar2->songname = (char *)0x0;
    pAVar2->errorcode = 0;
    (pAVar2->current).remaining = 0;
    (pAVar2->current).info.length = 0;
    (pAVar2->current).info.filename = (char *)0x0;
    (pAVar2->current).info.title = (char *)0x0;
    (pAVar2->current).info.artist = (char *)0x0;
    (pAVar2->current).info.label = (char *)0x0;
    (pAVar2->current).info.notes = (char *)0x0;
    if ((pAVar2->switchsong == 0) && (-1 < pAVar2->requestsong)) {
      SNDSTRM_autovol(pAVar2->streamhandle,2000,0);
      AudioMus_g->fadetime = 1000;
    }
    pAVar2 = AudioMus_g;
    iVar3 = AudioMus_g->requestsong + 1;
    bVar1 = Hud_kTurnSongOffNext == (void *)0x0;
    AudioMus_g->requestsong = iVar3;
    if ((bVar1) && (iVar3 < pAVar2->availablesongs)) {
      pAVar2->switchsong = 1;
    }
    else {
      Hud_kTurnSongOffNext = (void *)0x0;
      pAVar2->firstswitch = 0;
      pAVar2->switchsong = -1;
      pAVar2->requestsong = -1;
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

	/* begin block 2 */
		// Start line: 557
	/* end block 2 */
	// End Line: 558

	/* begin block 3 */
		// Start line: 564
	/* end block 3 */
	// End Line: 565

	/* begin block 4 */
		// Start line: 564
	/* end block 4 */
	// End Line: 565

	/* begin block 5 */
		// Start line: 565
	/* end block 5 */
	// End Line: 566

	/* begin block 6 */
		// Start line: 565
	/* end block 6 */
	// End Line: 566

void AudioMus_Fail__Fi(int errorcode)

{
  AudioMus_tMusicGlobals *pAVar1;
  int iVar2;
  
  iVar2 = (AudioMus_g->streamstatus).outstandingrequests;
  AudioMus_g->errorcode = errorcode;
  if (iVar2 != 0) {
    iVar2 = AudioMus_Buffered__Fv();
    SNDSTRM_autovol(AudioMus_g->streamhandle,iVar2,0);
    iVar2 = AudioMus_Buffered__Fv();
    AudioMus_g->fadetime = iVar2;
  }
  pAVar1 = AudioMus_g;
  AudioMus_g->newswitch = 1;
  pAVar1->firstswitch = 0;
  pAVar1->songname = (char *)0x0;
  pAVar1->switchsong = -1;
  pAVar1->requestsong = -1;
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

	/* begin block 2 */
		// Start line: 622
	/* end block 2 */
	// End Line: 623

	/* begin block 3 */
		// Start line: 629
	/* end block 3 */
	// End Line: 630

	/* begin block 4 */
		// Start line: 629
	/* end block 4 */
	// End Line: 630

	/* begin block 5 */
		// Start line: 632
	/* end block 5 */
	// End Line: 633

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_QueueRequestedSong__Fv(void)

{
  uint *puVar1;
  AudioMus_tMusicGlobals *pAVar2;
  char *pcVar3;
  int iVar4;
  uchar *puVar5;
  uint local_10 [2];
  
  pcVar3 = (char *)locatebigentry((byte *)AudioMus_g->bigfileheader,(byte *)0x0,
                                  (uint)(byte)AudioMus_g->playlist[AudioMus_g->requestsong],local_10
                                  ,(uint *)0x0);
  pAVar2 = AudioMus_g;
  puVar1 = (uint *)&AudioMus_g->streamhandle;
  AudioMus_g->songname = pcVar3;
  if (-1 < (int)*puVar1) {
    iVar4 = SNDSTRM_queuefile(*puVar1,1000,(uint *)pAVar2->bigfilename,local_10[0]);
    AudioMus_g->requesthandle = iVar4;
  }
  AudioMus_g->switchsong = 2;
  puVar5 = gettick();
  pAVar2 = AudioMus_g;
  *(uchar **)&AudioMus_g->failby = puVar5 + 0x280;
  (pAVar2->current).remaining = 0;
  (pAVar2->current).info.length = 0;
  (pAVar2->current).info.filename = (char *)0x0;
  (pAVar2->current).info.title = (char *)0x0;
  (pAVar2->current).info.artist = (char *)0x0;
  (pAVar2->current).info.label = (char *)0x0;
  (pAVar2->current).info.notes = (char *)0x0;
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

	/* begin block 2 */
		// Start line: 686
	/* end block 2 */
	// End Line: 687

	/* begin block 3 */
		// Start line: 692
	/* end block 3 */
	// End Line: 693

	/* begin block 4 */
		// Start line: 692
	/* end block 4 */
	// End Line: 693

	/* begin block 5 */
		// Start line: 693
	/* end block 5 */
	// End Line: 694

	/* begin block 6 */
		// Start line: 693
	/* end block 6 */
	// End Line: 694

	/* begin block 7 */
		// Start line: 701
	/* end block 7 */
	// End Line: 702

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

	/* begin block 2 */
		// Start line: 762
	/* end block 2 */
	// End Line: 763

	/* begin block 3 */
		// Start line: 768
	/* end block 3 */
	// End Line: 769

	/* begin block 4 */
		// Start line: 768
	/* end block 4 */
	// End Line: 769

	/* begin block 5 */
		// Start line: 769
	/* end block 5 */
	// End Line: 770

	/* begin block 6 */
		// Start line: 769
	/* end block 6 */
	// End Line: 770

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_SetCurrentSongInfo__Fv(void)

{
  AudioMus_tCurrentSong *pAVar1;
  AudioMus_tMusicGlobals *pAVar2;
  int iVar3;
  int iVar4;
  
  pAVar2 = AudioMus_g;
  iVar3 = (AudioMus_g->requeststatus).timetoend;
  iVar4 = (AudioMus_g->requeststatus).currenttime;
  pAVar1 = &AudioMus_g->current;
  (AudioMus_g->current).remaining = iVar3;
  (pAVar2->current).info.length = iVar3 + iVar4;
  (pAVar2->current).info.filename = pAVar2->songname;
  AudioMus_SetEntry__FP19AudioMus_tSongEntry(&pAVar1->info);
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

	/* begin block 2 */
		// Start line: 811
	/* end block 2 */
	// End Line: 812

	/* begin block 3 */
		// Start line: 829
	/* end block 3 */
	// End Line: 830

	/* begin block 4 */
		// Start line: 829
	/* end block 4 */
	// End Line: 830

	/* begin block 5 */
		// Start line: 830
	/* end block 5 */
	// End Line: 831

	/* begin block 6 */
		// Start line: 830
	/* end block 6 */
	// End Line: 831

int AudioMus_Server__Fii(int mode,int ticks)

{
  int *piVar1;
  AudioMus_tMusicGlobals *pAVar2;
  int iVar3;
  uchar *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (AudioMus_g->bigfileheader != (char *)0x0) {
    if ((AudioMus_g->bigfilename[0] == '.') ||
       (iVar3 = CdDiskReady(1), pAVar2 = AudioMus_g, iVar3 != 0x10)) {
      if (AudioMus_g->errorcode == -2) {
        iVar3 = CdDiskReady(1);
        pAVar2 = AudioMus_g;
        if (iVar3 != 2) {
          return 0;
        }
        piVar1 = &AudioMus_g->requestsong;
        AudioMus_g->errorcode = -5;
        if (*piVar1 < 0) {
          return 0;
        }
        pAVar2->newswitch = 1;
        pAVar2->switchsong = 2;
      }
      else {
        AudioMus_RefreshStatus__Fv();
        iVar3 = AudioMus_Threshold__Fv();
        if ((iVar3 != 0) && (AudioMus_g->switchsong != 2)) {
          iVar3 = AudioMus_Buffered__Fv();
          if (iVar3 < 0x226) {
            AudioMus_Fail__Fi(-5);
          }
          else {
            iVar3 = AudioMus_Buffered__Fv();
            if (iVar3 < 0x5dc) {
              if (AudioMus_g->greedy == 0) {
                SNDSTRM_setgreedystate(AudioMus_g->streamhandle,1);
                AudioMus_g->greedy = 1;
              }
            }
            else {
              iVar3 = AudioMus_Buffered__Fv();
              if ((AudioMus_g->threshold <= iVar3) && (AudioMus_g->greedy != 0)) {
                SNDSTRM_setgreedystate(AudioMus_g->streamhandle,0);
                AudioMus_g->greedy = 0;
              }
            }
          }
        }
        pAVar2 = AudioMus_g;
        if (AudioMus_g->switchsong == 0) {
          if ((AudioMus_g->streamstatus).outstandingrequests != 0) {
            return 0;
          }
          iVar3 = AudioMus_g->requestsong;
          if (iVar3 < 0) {
            return 0;
          }
          iVar6 = AudioMus_g->availablesongs;
          if (1 < iVar6) {
            if (AudioMus_g->randomize == 0) {
              if (iVar6 == 0) {
                trap(0x1c00);
              }
              if ((iVar6 == -1) && (iVar3 + 1 == -0x80000000)) {
                trap(0x1800);
              }
              AudioMus_g->requestsong = (iVar3 + 1) % iVar6;
            }
            else {
              iVar7 = iVar6 + -1;
              uVar5 = GetRCnt(0);
              if ((int)uVar5 < 1) {
                uVar5 = GetRCnt(0);
                uVar5 = -uVar5;
              }
              else {
                uVar5 = GetRCnt(0);
              }
              if (iVar7 == 0) {
                trap(0x1c00);
              }
              if ((iVar7 == -1) && (uVar5 == 0x80000000)) {
                trap(0x1800);
              }
              iVar3 = iVar3 + 1 + (int)uVar5 % iVar7;
              if (iVar6 == 0) {
                trap(0x1c00);
              }
              if ((iVar6 == -1) && (iVar3 == -0x80000000)) {
                trap(0x1800);
              }
              pAVar2->requestsong = iVar3 % iVar6;
            }
          }
          SNDSTRM_vol(AudioMus_g->streamhandle,0);
          AudioMus_QueueRequestedSong__Fv();
          pAVar2 = AudioMus_g;
          AudioMus_g->newswitch = 1;
          pAVar2->firstswitch = 1;
          return 0;
        }
        if (AudioMus_g->switchsong == 2) {
          if (AudioMus_g->streambuffer == (char *)0x0) {
            AudioMus_Fail__Fi(-4);
            return 0;
          }
          if (AudioMus_g->streamhandle < 0) {
            AudioMus_Fail__Fi(-3);
            return 0;
          }
          if ((AudioMus_g->streamstatus).outstandingrequests == 0) {
            return 0;
          }
          if ((AudioMus_g->requeststatus).timebuffered <= AudioMus_g->threshold) {
            return 0;
          }
          if (AudioMus_g->errorcode == -5) {
            iVar3 = AudioMus_g->streamhandle;
            iVar6 = AudioMus_g->volume;
            AudioMus_g->errorcode = 0;
          }
          else {
            AudioMus_SetCurrentSongInfo__Fv();
            iVar3 = AudioMus_g->streamhandle;
            iVar6 = AudioMus_g->volume;
          }
          SNDSTRM_autovol(iVar3,2000,iVar6);
          AudioMus_g->switchsong = 0;
          return 0;
        }
        if (((AudioMus_g->streamstatus).outstandingrequests != 0) &&
           (iVar3 = SNDSTRM_getvol(AudioMus_g->streamhandle), iVar3 != 0)) {
          return 0;
        }
        if (-1 < AudioMus_g->streamhandle) {
          SNDSTRM_purge(AudioMus_g->streamhandle);
        }
        pAVar2 = AudioMus_g;
        piVar1 = &AudioMus_g->switchsong;
        AudioMus_g->songname = (char *)0x0;
        if (*piVar1 != 1) {
          pAVar2->switchsong = 0;
          return 0;
        }
        pAVar2->fadetime = 0;
        AudioMus_QueueRequestedSong__Fv();
        AudioMus_g->switchsong = 2;
      }
      puVar4 = gettick();
      *(uchar **)&AudioMus_g->failby = puVar4 + 0x280;
    }
    else {
      if (AudioMus_g->errorcode == 0) {
        iVar3 = AudioMus_g->requestsong;
        AudioMus_g->errorcode = -2;
        pAVar2->newswitch = 1;
        if (-1 < iVar3) {
          iVar3 = AudioMus_Buffered__Fv();
          SNDSTRM_autovol(AudioMus_g->streamhandle,iVar3,0);
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

	/* begin block 2 */
		// Start line: 1111
	/* end block 2 */
	// End Line: 1112

	/* begin block 3 */
		// Start line: 1117
	/* end block 3 */
	// End Line: 1118

	/* begin block 4 */
		// Start line: 1117
	/* end block 4 */
	// End Line: 1118

	/* begin block 5 */
		// Start line: 1122
	/* end block 5 */
	// End Line: 1123

AudioMus_tSongList * AudioMus_GetSongList__FPci(char *pattern,int memtype)

{
  AudioMus_tMusicGlobals *pAVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  AudioMus_tSongList *pAVar6;
  int *piVar7;
  AudioMus_tSongEntry *info;
  uint local_28 [2];
  
  iVar5 = 0;
  if (AudioMus_g == (AudioMus_tMusicGlobals *)0x0) {
    pAVar6 = (AudioMus_tSongList *)reservememadr(s_Song_List_800557a4,8,memtype);
    pAVar6->numsongs = 0;
    pAVar6->currentsong = -1;
  }
  else {
    iVar4 = 0;
    if (0 < AudioMus_g->totalsongs) {
      do {
        pbVar2 = (byte *)locatebigentry((byte *)AudioMus_g->bigfileheader,(byte *)0x0,iVar4,
                                        (uint *)0x0,(uint *)0x0);
        uVar3 = wildcard(pbVar2,(byte *)pattern);
        if (uVar3 != 0) {
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < AudioMus_g->totalsongs);
    }
    pAVar6 = (AudioMus_tSongList *)reservememadr(s_Song_List_800557a4,iVar5 << 6 | 8,memtype);
    info = (AudioMus_tSongEntry *)(pAVar6 + 1);
    iVar5 = 0;
    piVar7 = &pAVar6[4].currentsong;
    pAVar6->numsongs = 0;
    pAVar6->currentsong = -1;
    while (iVar5 < AudioMus_g->totalsongs) {
      pbVar2 = (byte *)locatebigentry((byte *)AudioMus_g->bigfileheader,(byte *)0x0,iVar5,
                                      (uint *)0x0,local_28);
      uVar3 = wildcard(pbVar2,(byte *)pattern);
      if (uVar3 != 0) {
        *(byte **)&info->filename = pbVar2;
        AudioMus_SetEntry__FP19AudioMus_tSongEntry(info);
        *piVar7 = iVar5;
        pAVar1 = AudioMus_g;
        piVar7[-1] = (int)(local_28[0] * 10) / 0xfc;
        if (pbVar2 == (byte *)pAVar1->songname) {
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

	/* begin block 2 */
		// Start line: 1230
	/* end block 2 */
	// End Line: 1231

	/* begin block 3 */
		// Start line: 1236
	/* end block 3 */
	// End Line: 1237

	/* begin block 4 */
		// Start line: 1236
	/* end block 4 */
	// End Line: 1237

	/* begin block 5 */
		// Start line: 1237
	/* end block 5 */
	// End Line: 1238

	/* begin block 6 */
		// Start line: 1237
	/* end block 6 */
	// End Line: 1238

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_InitGlobals__Fv(void)

{
  AudioMus_tMusicGlobals *pAVar1;
  
  pAVar1 = AudioMus_g;
  AudioMus_g->bigfileheader = (char *)0x0;
  pAVar1->streambuffer = (char *)0x0;
  pAVar1->streamhandle = -1;
  pAVar1->serveractive = 0;
  pAVar1->driveractive = 0;
  pAVar1->totalsongs = 0;
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

	/* begin block 2 */
		// Start line: 1256
	/* end block 2 */
	// End Line: 1257

	/* begin block 3 */
		// Start line: 1262
	/* end block 3 */
	// End Line: 1263

	/* begin block 4 */
		// Start line: 1262
	/* end block 4 */
	// End Line: 1263

	/* begin block 5 */
		// Start line: 1263
	/* end block 5 */
	// End Line: 1264

	/* begin block 6 */
		// Start line: 1263
	/* end block 6 */
	// End Line: 1264

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_InitDriverGlobals__Fv(void)

{
  AudioMus_tMusicGlobals *pAVar1;
  
  pAVar1 = AudioMus_g;
  AudioMus_g->requestsong = -1;
  pAVar1->volume = 0;
  pAVar1->fadetime = 0;
  pAVar1->availablesongs = 0;
  pAVar1->firstswitch = 0;
  pAVar1->newswitch = 0;
  pAVar1->songname = (char *)0x0;
  pAVar1->switchsong = 0;
  pAVar1->errorcode = 0;
  pAVar1->greedy = 0;
  (pAVar1->current).remaining = 0;
  (pAVar1->current).info.length = 0;
  (pAVar1->current).info.filename = (char *)0x0;
  (pAVar1->current).info.title = (char *)0x0;
  (pAVar1->current).info.artist = (char *)0x0;
  (pAVar1->current).info.label = (char *)0x0;
  (pAVar1->current).info.notes = (char *)0x0;
  pAVar1->driveractive = 1;
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

	/* begin block 2 */
		// Start line: 1333
	/* end block 2 */
	// End Line: 1334

	/* begin block 3 */
		// Start line: 1339
	/* end block 3 */
	// End Line: 1340

	/* begin block 4 */
		// Start line: 1339
	/* end block 4 */
	// End Line: 1340

	/* begin block 5 */
		// Start line: 1340
	/* end block 5 */
	// End Line: 1341

	/* begin block 6 */
		// Start line: 1340
	/* end block 6 */
	// End Line: 1341

void AudioMus_DriverStartUp__Fii(int buffersize,int spusize)

{
  int *piVar1;
  AudioMus_tMusicGlobals *pAVar2;
  int iVar3;
  int iVar4;
  undefined4 auStack64 [4];
  int local_30;
  int aiStack40 [2];
  undefined local_20;
  
  if (AudioMus_g != (AudioMus_tMusicGlobals *)0x0) {
    if (AudioMus_g->driveractive == 0) {
      AudioMus_InitDriverGlobals__Fv();
    }
    pAVar2 = AudioMus_g;
    piVar1 = &AudioMus_g->streamhandle;
    AudioMus_g->threshold = buffersize + spusize >> 5;
    if ((*piVar1 < 0) && (pAVar2->streambuffer != (char *)0x0)) {
      iVar4 = buffersize;
      if (buffersize < 0) {
        iVar4 = buffersize + 0x3ff;
      }
      iVar3 = SNDSTRM_overhead(1,iVar4 >> 10);
      SNDgetlimits(auStack64);
      local_30 = spusize;
      SNDsetlimits(auStack64);
      SNDplaysetdef(aiStack40);
      local_20 = 0;
      iVar4 = SNDSTRM_create(aiStack40,1,iVar4 >> 10,(int *)AudioMus_g->streambuffer,
                             buffersize + iVar3);
      AudioMus_g->streamhandle = iVar4;
      if (-1 < iVar4) {
        SNDSTRM_setgreedylevel(iVar4,0);
        SNDSTRM_setpriority(AudioMus_g->streamhandle,0xff,5);
      }
    }
    gMusicHandle = AudioMus_g->streamhandle;
    if (AudioMus_g->serveractive == 0) {
      addsystemtask((int)AudioMus_Server__Fii,0x19,0);
      AudioMus_g->serveractive = 1;
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

	/* begin block 2 */
		// Start line: 1457
	/* end block 2 */
	// End Line: 1458

	/* begin block 3 */
		// Start line: 1465
	/* end block 3 */
	// End Line: 1466

	/* begin block 4 */
		// Start line: 1465
	/* end block 4 */
	// End Line: 1466

	/* begin block 5 */
		// Start line: 1467
	/* end block 5 */
	// End Line: 1468

void AudioMus_SysStartUp__FiiPc(int buffersize,int spusize,char *songs)

{
  short *psVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  if (AudioMus_g == (AudioMus_tMusicGlobals *)0x0) {
    AudioMus_g = (AudioMus_tMusicGlobals *)reservememadr(s_Music_Globals_800557b0,0x158,0);
    if (AudioMus_g != (AudioMus_tMusicGlobals *)0x0) {
      AudioMus_InitGlobals__Fv();
      iVar4 = buffersize;
      if (buffersize < 0) {
        iVar4 = buffersize + 0x3ff;
      }
      iVar4 = SNDSTRM_overhead(1,iVar4 >> 10);
      psVar1 = reservememadr(s_Music_Buffer_800557c0,buffersize + iVar4,0);
      *(short **)&AudioMus_g->streambuffer = psVar1;
      AudioMus_DriverStartUp__Fii(buffersize,spusize);
      sprintf(AudioMus_g->bigfilename,s__szzz_s_viv_800557d0,PTR_801164d4,songs);
      pbVar2 = (byte *)loadbigfileheader(AudioMus_g->bigfilename,0);
      *(byte **)&AudioMus_g->bigfileheader = pbVar2;
      if (pbVar2 != (byte *)0x0) {
        uVar3 = bigcount(pbVar2);
        AudioMus_g->totalsongs = uVar3;
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

	/* begin block 2 */
		// Start line: 1579
	/* end block 2 */
	// End Line: 1580

	/* begin block 3 */
		// Start line: 1584
	/* end block 3 */
	// End Line: 1585

	/* begin block 4 */
		// Start line: 1584
	/* end block 4 */
	// End Line: 1585

	/* begin block 5 */
		// Start line: 1585
	/* end block 5 */
	// End Line: 1586

	/* begin block 6 */
		// Start line: 1585
	/* end block 6 */
	// End Line: 1586

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_DriverCleanUp__Fv(void)

{
  if (AudioMus_g != (AudioMus_tMusicGlobals *)0x0) {
    if (AudioMus_g->serveractive != 0) {
      delsystemtask((int)AudioMus_Server__Fii);
      AudioMus_g->serveractive = 0;
    }
    if (-1 < AudioMus_g->streamhandle) {
      SNDSTRM_destroy(AudioMus_g->streamhandle);
      AudioMus_g->streamhandle = -1;
    }
    AudioMus_g->driveractive = 0;
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

	/* begin block 2 */
		// Start line: 1618
	/* end block 2 */
	// End Line: 1619

	/* begin block 3 */
		// Start line: 1625
	/* end block 3 */
	// End Line: 1626

	/* begin block 4 */
		// Start line: 1625
	/* end block 4 */
	// End Line: 1626

	/* begin block 5 */
		// Start line: 1626
	/* end block 5 */
	// End Line: 1627

	/* begin block 6 */
		// Start line: 1626
	/* end block 6 */
	// End Line: 1627

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioMus_SysCleanUp__Fv(void)

{
  if (AudioMus_g != (AudioMus_tMusicGlobals *)0x0) {
    AudioMus_DriverCleanUp__Fv();
    if (AudioMus_g->streambuffer != (char *)0x0) {
      purgememadr((int)AudioMus_g->streambuffer);
    }
    if (AudioMus_g->bigfileheader != (char *)0x0) {
      purgememadr((int)AudioMus_g->bigfileheader);
    }
    purgememadr((int)AudioMus_g);
    AudioMus_g = (AudioMus_tMusicGlobals *)0x0;
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

	/* begin block 2 */
		// Start line: 1657
	/* end block 2 */
	// End Line: 1658

	/* begin block 3 */
		// Start line: 1664
	/* end block 3 */
	// End Line: 1665

	/* begin block 4 */
		// Start line: 1664
	/* end block 4 */
	// End Line: 1665

void AudioMus_StopSong__Fi(int fadeticks)

{
  AudioMus_tMusicGlobals *pAVar1;
  
  if ((AudioMus_g != (AudioMus_tMusicGlobals *)0x0) && (-1 < AudioMus_g->requestsong)) {
    if (fadeticks == 0) {
      if (-1 < AudioMus_g->streamhandle) {
        SNDSTRM_purge(AudioMus_g->streamhandle);
      }
      pAVar1 = AudioMus_g;
      AudioMus_g->fadetime = 0;
      pAVar1->songname = (char *)0x0;
      pAVar1->switchsong = 0;
    }
    else {
      if (AudioMus_g->switchsong == 0) {
        if (AudioMus_g->streamhandle < 0) {
          AudioMus_g->fadetime = 0;
        }
        else {
          SNDSTRM_autovol(AudioMus_g->streamhandle,fadeticks,0);
          AudioMus_g->fadetime = fadeticks;
        }
        AudioMus_g->songname = (char *)0x0;
      }
      AudioMus_g->switchsong = -1;
    }
    AudioMus_g->requestsong = -1;
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

	/* begin block 2 */
		// Start line: 1736
	/* end block 2 */
	// End Line: 1737

	/* begin block 3 */
		// Start line: 1744
	/* end block 3 */
	// End Line: 1745

	/* begin block 4 */
		// Start line: 1744
	/* end block 4 */
	// End Line: 1745

	/* begin block 5 */
		// Start line: 1745
	/* end block 5 */
	// End Line: 1746

	/* begin block 6 */
		// Start line: 1745
	/* end block 6 */
	// End Line: 1746

void AudioMus_BuildPlayList__FiPi(int numplaylistsongs,int *playlist)

{
  int iVar1;
  
  if (AudioMus_g != (AudioMus_tMusicGlobals *)0x0) {
    AudioMus_g->availablesongs = 0;
    iVar1 = 0;
    if (0 < numplaylistsongs) {
      do {
        if ((-1 < *playlist) && (*playlist < AudioMus_g->totalsongs)) {
          AudioMus_g->playlist[AudioMus_g->availablesongs] = *(char *)playlist;
          AudioMus_g->availablesongs = AudioMus_g->availablesongs + 1;
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

	/* begin block 2 */
		// Start line: 1777
	/* end block 2 */
	// End Line: 1778

	/* begin block 3 */
		// Start line: 1784
	/* end block 3 */
	// End Line: 1785

	/* begin block 4 */
		// Start line: 1784
	/* end block 4 */
	// End Line: 1785

	/* begin block 5 */
		// Start line: 1785
	/* end block 5 */
	// End Line: 1786

	/* begin block 6 */
		// Start line: 1785
	/* end block 6 */
	// End Line: 1786

void AudioMus_BuildPattern__FPc(char *pattern)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  if (AudioMus_g != (AudioMus_tMusicGlobals *)0x0) {
    piVar1 = &AudioMus_g->totalsongs;
    iVar4 = 0;
    AudioMus_g->availablesongs = 0;
    if (0 < *piVar1) {
      do {
        if (0x1f < AudioMus_g->availablesongs) {
          return;
        }
        pbVar2 = (byte *)locatebigentry((byte *)AudioMus_g->bigfileheader,(byte *)0x0,iVar4,
                                        (uint *)0x0,(uint *)0x0);
        uVar3 = wildcard(pbVar2,(byte *)pattern);
        if (uVar3 != 0) {
          AudioMus_g->playlist[AudioMus_g->availablesongs] = (char)iVar4;
          AudioMus_g->availablesongs = AudioMus_g->availablesongs + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < AudioMus_g->totalsongs);
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

	/* begin block 2 */
		// Start line: 1816
	/* end block 2 */
	// End Line: 1817

	/* begin block 3 */
		// Start line: 1823
	/* end block 3 */
	// End Line: 1824

	/* begin block 4 */
		// Start line: 1823
	/* end block 4 */
	// End Line: 1824

	/* begin block 5 */
		// Start line: 1829
	/* end block 5 */
	// End Line: 1830

int AudioMus_PlaySong__FPc(char *pattern)

{
  int *piVar1;
  AudioMus_tMusicGlobals *pAVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char acStack152 [128];
  
  if (AudioMus_g == (AudioMus_tMusicGlobals *)0x0) {
    iVar4 = 0;
  }
  else {
    if (((pattern != (char *)0x0) &&
        (AudioMus_BuildPattern__FPc(pattern), AudioMus_g->availablesongs == 0)) &&
       (sVar3 = strlen(pattern), sVar3 < 0x3d)) {
      sprintf(acStack152,&DAT_8013c724,pattern);
      AudioMus_BuildPattern__FPc(acStack152);
    }
    pAVar2 = AudioMus_g;
    iVar4 = 0;
    if (AudioMus_g->volume != 0) {
      iVar4 = AudioMus_g->availablesongs;
      if (iVar4 != 0) {
        AudioMus_g->randomize = 1;
        if (iVar4 == 1) {
          iVar7 = 0;
        }
        else {
          if (pattern == (char *)0x0) {
            iVar6 = pAVar2->requestsong;
            iVar7 = iVar4 + -1;
            uVar5 = GetRCnt(0);
            if ((int)uVar5 < 1) {
              uVar5 = GetRCnt(0);
              uVar5 = -uVar5;
            }
            else {
              uVar5 = GetRCnt(0);
            }
            if (iVar7 == 0) {
              trap(0x1c00);
            }
            if ((iVar7 == -1) && (uVar5 == 0x80000000)) {
              trap(0x1800);
            }
            iVar6 = iVar6 + 1 + (int)uVar5 % iVar7;
            iVar7 = iVar6 % iVar4;
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && (iVar6 == -0x80000000)) {
              trap(0x1800);
            }
          }
          else {
            uVar5 = GetRCnt(0);
            if ((int)uVar5 < 1) {
              uVar5 = GetRCnt(0);
              uVar5 = -uVar5;
            }
            else {
              uVar5 = GetRCnt(0);
            }
            iVar7 = (int)uVar5 % iVar4;
            if (iVar4 == 0) {
              trap(0x1c00);
            }
            if ((iVar4 == -1) && (uVar5 == 0x80000000)) {
              trap(0x1800);
            }
          }
        }
        pAVar2 = AudioMus_g;
        if (AudioMus_g->switchsong == 0) {
          if (AudioMus_g->requestsong < 0) {
            piVar1 = &AudioMus_g->streamhandle;
            AudioMus_g->fadetime = 0;
            SNDSTRM_vol(*piVar1,0);
            AudioMus_g->requestsong = iVar7;
            AudioMus_QueueRequestedSong__Fv();
          }
          else {
            SNDSTRM_autovol(AudioMus_g->streamhandle,2000,0);
            pAVar2 = AudioMus_g;
            AudioMus_g->fadetime = 2000;
            pAVar2->switchsong = 1;
            pAVar2->requestsong = iVar7;
            pAVar2->songname = (char *)0x0;
          }
        }
        else {
          AudioMus_g->switchsong = 1;
          pAVar2->requestsong = iVar7;
        }
        pAVar2 = AudioMus_g;
        AudioMus_g->firstswitch = 1;
        pAVar2->errorcode = 0;
        if (pattern != (char *)0x0) {
          pAVar2->newswitch = 1;
        }
      }
      iVar4 = AudioMus_g->availablesongs;
    }
  }
  return iVar4;
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

	/* begin block 2 */
		// Start line: 1995
	/* end block 2 */
	// End Line: 1996

	/* begin block 3 */
		// Start line: 2001
	/* end block 3 */
	// End Line: 2002

	/* begin block 4 */
		// Start line: 2001
	/* end block 4 */
	// End Line: 2002

void AudioMus_Volume__Fi(int volume)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((AudioMus_g != (AudioMus_tMusicGlobals *)0x0) && (AudioMus_g->volume != volume)) {
    iVar3 = 0;
    if (volume == 0) {
      AudioMus_g->volume = 0;
      AudioMus_StopSong__Fi(0);
    }
    else {
      if ((((AudioMus_g->fadetime != 0) && (-1 < AudioMus_g->streamhandle)) &&
          (iVar1 = SNDSTRM_getvol(AudioMus_g->streamhandle), 0 < iVar1)) &&
         (iVar2 = AudioMus_g->volume, 0 < iVar2)) {
        iVar1 = AudioMus_g->fadetime * iVar1;
        iVar3 = iVar1 / iVar2;
        if (iVar2 == 0) {
          trap(0x1c00);
        }
        if ((iVar2 == -1) && (iVar1 == -0x80000000)) {
          trap(0x1800);
        }
      }
      if (iVar3 == 0) {
        if ((-1 < AudioMus_g->streamhandle) && (AudioMus_g->switchsong != 2)) {
          SNDSTRM_vol(AudioMus_g->streamhandle,volume);
        }
      }
      else {
        iVar1 = AudioMus_g->fadetime;
        if (iVar1 == 0) {
          trap(0x1c00);
        }
        if ((iVar1 == -1) && (volume * iVar3 == -0x80000000)) {
          trap(0x1800);
        }
        SNDSTRM_vol(AudioMus_g->streamhandle,(volume * iVar3) / iVar1);
        SNDSTRM_autovol(AudioMus_g->streamhandle,iVar3,0);
      }
      if (AudioMus_g->volume == 0) {
        AudioMus_g->volume = volume;
        AudioMus_PlaySong__FPc((char *)0x0);
      }
      else {
        AudioMus_g->volume = volume;
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

	/* begin block 2 */
		// Start line: 2089
	/* end block 2 */
	// End Line: 2090

	/* begin block 3 */
		// Start line: 2098
	/* end block 3 */
	// End Line: 2099

	/* begin block 4 */
		// Start line: 2098
	/* end block 4 */
	// End Line: 2099

	/* begin block 5 */
		// Start line: 2099
	/* end block 5 */
	// End Line: 2100

	/* begin block 6 */
		// Start line: 2099
	/* end block 6 */
	// End Line: 2100

void AudioMus_AutoVolume__Fii(int fadeticks,int volume)

{
  if ((AudioMus_g != (AudioMus_tMusicGlobals *)0x0) && (AudioMus_g->volume != volume)) {
    if (volume == 0) {
      AudioMus_g->volume = 0;
      AudioMus_StopSong__Fi(0);
    }
    else {
      if (AudioMus_g->volume == 0) {
        AudioMus_g->volume = volume;
        AudioMus_PlaySong__FPc((char *)0x0);
      }
      else {
        AudioMus_g->volume = volume;
      }
      if (((AudioMus_g->switchsong != 2) && (AudioMus_g->fadetime == 0)) &&
         (-1 < AudioMus_g->streamhandle)) {
        SNDSTRM_autovol(AudioMus_g->streamhandle,fadeticks,volume);
      }
    }
  }
  return;
}





