#include "THISDUST.H"
#include "COPSPEAK.H"


// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_RadioStaticInit__Fv()
 // line 198, offset 0x800993dc
	/* begin block 1 */
		// Start line: 199
		// Start offset: 0x800993DC

		/* begin block 1.1 */
			// Start line: 200
			// Start offset: 0x800993DC
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x80099410
		// End Line: 204
	/* end block 1 */
	// End offset: 0x80099410
	// End Line: 204

	/* begin block 2 */
		// Start line: 396
	/* end block 2 */
	// End Line: 397

	/* begin block 3 */
		// Start line: 396
	/* end block 3 */
	// End Line: 397

	/* begin block 4 */
		// Start line: 397
	/* end block 4 */
	// End Line: 398

	/* begin block 5 */
		// Start line: 397
	/* end block 5 */
	// End Line: 398

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_RadioStaticInit__Fv(void)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = &CopSpeak_gStaticHandle;
  do {
    *piVar3 = -1;
    pcVar1 = &CopSpeak_gStaticPatch + iVar2;
    iVar2 = iVar2 + 1;
    *pcVar1 = -1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_RadioStaticActive__Fi(int noise /*$a0*/)
 // line 210, offset 0x80099418
	/* begin block 1 */
		// Start line: 211
		// Start offset: 0x80099418
		// Variables:
	// 		int numpatches; // $s5

		/* begin block 1.1 */
			// Start line: 225
			// Start offset: 0x8009944C
			// Variables:
		// 		int i; // $s3

			/* begin block 1.1.1 */
				// Start line: 225
				// Start offset: 0x8009945C

				/* begin block 1.1.1.1 */
					// Start line: 230
					// Start offset: 0x800994A8

					/* begin block 1.1.1.1.1 */
						// Start line: 231
						// Start offset: 0x800994C8
						// Variables:
					// 		int bhandle; // $s0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 232
							// Start offset: 0x800994C8

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 235
								// Start offset: 0x800994E4
								// Variables:
							// 		struct SNDPLAYOPTS playopts; // stack offset -56
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80099530
							// End Line: 246
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80099530
						// End Line: 246
					/* end block 1.1.1.1.1 */
					// End offset: 0x80099530
					// End Line: 246
				/* end block 1.1.1.1 */
				// End offset: 0x80099554
				// End Line: 252
			/* end block 1.1.1 */
			// End offset: 0x80099554
			// End Line: 252
		/* end block 1.1 */
		// End offset: 0x80099560
		// End Line: 253
	/* end block 1 */
	// End offset: 0x80099560
	// End Line: 253

	/* begin block 2 */
		// Start line: 414
	/* end block 2 */
	// End Line: 415

	/* begin block 3 */
		// Start line: 421
	/* end block 3 */
	// End Line: 422

	/* begin block 4 */
		// Start line: 421
	/* end block 4 */
	// End Line: 422

void CopSpeak_RadioStaticActive__Fi(int noise)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int local_38;
  undefined local_34;
  undefined local_30;
  
  uVar7 = 3;
  if (0x60 < noise) {
    uVar7 = 4;
  }
  iVar6 = 0;
  bVar1 = true;
LAB_80099460:
  do {
    if (!bVar1) {
      return;
    }
    pcVar5 = &CopSpeak_gStaticPatch + iVar6;
    if (*pcVar5 == -1) {
      uVar2 = random();
      if (uVar7 == 0) {
        trap(0x1c00);
      }
      *pcVar5 = (char)(uVar2 % uVar7);
    }
    puVar4 = (uint *)(&CopSpeak_gStaticHandle + iVar6);
    if (*puVar4 == 0xffffffff) {
      iVar3 = AudioCmn_GetAsyncSfx__Fiib(2,(int)*pcVar5 + 0x2f,(void *)0x0);
      if (-1 < iVar3) {
        SNDplaysetdef(&local_38);
        local_34 = (undefined)iVar3;
        local_38 = 0;
        local_30 = (undefined)(gMasterFENarrationLevel * noise * 0x81 >> 0xe);
        uVar2 = SNDplay(&local_38);
        *puVar4 = uVar2;
        *pcVar5 = -1;
        if ((int)*puVar4 < 0) {
          iVar6 = iVar6 + 1;
          AudioClc_SndError__Fi(*puVar4);
          bVar1 = iVar6 < 2;
          goto LAB_80099460;
        }
      }
    }
    else {
      uVar2 = SNDover(*puVar4);
      if (uVar2 != 0) {
        *puVar4 = 0xffffffff;
      }
    }
    iVar6 = iVar6 + 1;
    bVar1 = iVar6 < 2;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_RadioStaticSquelch__Fv()
 // line 259, offset 0x80099588
	/* begin block 1 */
		// Start line: 260
		// Start offset: 0x80099588

		/* begin block 1.1 */
			// Start line: 260
			// Start offset: 0x80099588
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x800995D8
		// End Line: 268
	/* end block 1 */
	// End offset: 0x800995D8
	// End Line: 268

	/* begin block 2 */
		// Start line: 527
	/* end block 2 */
	// End Line: 528

	/* begin block 3 */
		// Start line: 534
	/* end block 3 */
	// End Line: 535

	/* begin block 4 */
		// Start line: 534
	/* end block 4 */
	// End Line: 535

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_RadioStaticSquelch__Fv(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &CopSpeak_gStaticHandle;
  do {
    if (*piVar1 != 0xffffffff) {
      SNDstop(*piVar1);
      *piVar1 = 0xffffffff;
    }
    iVar2 = iVar2 + 1;
    piVar1 = (int *)((uint *)piVar1 + 1);
  } while (iVar2 < 2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_InitRequest__FP17CopSpeak_tRequest(struct CopSpeak_tRequest *r /*$a0*/)
 // line 276, offset 0x800995f0
	/* begin block 1 */
		// Start line: 277
		// Start offset: 0x800995F0
	/* end block 1 */
	// End offset: 0x800995F0
	// End Line: 278

	/* begin block 2 */
		// Start line: 562
	/* end block 2 */
	// End Line: 563

	/* begin block 3 */
		// Start line: 571
	/* end block 3 */
	// End Line: 572

	/* begin block 4 */
		// Start line: 571
	/* end block 4 */
	// End Line: 572

	/* begin block 5 */
		// Start line: 572
	/* end block 5 */
	// End Line: 573

	/* begin block 6 */
		// Start line: 572
	/* end block 6 */
	// End Line: 573

	/* begin block 7 */
		// Start line: 573
	/* end block 7 */
	// End Line: 574

	/* begin block 8 */
		// Start line: 573
	/* end block 8 */
	// End Line: 574

void CopSpeak_InitRequest__FP17CopSpeak_tRequest(CopSpeak_tRequest *r)

{
  r->buffer = -1;
  r->phrase = -1;
  r->car = (Car_tObj *)0x0;
  r->offset = 0;
  r->size = 0;
  r->player = '\0';
  r->sfx = '\0';
  r->bank = '\x02';
  r->noise = '\0';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_SilenceCop__FP8Car_tObji(struct Car_tObj *car /*$a0*/, int playerIndex /*$a1*/)
 // line 295, offset 0x80099620
	/* begin block 1 */
		// Start line: 296
		// Start offset: 0x80099620
	/* end block 1 */
	// End offset: 0x80099674
	// End Line: 305

	/* begin block 2 */
		// Start line: 606
	/* end block 2 */
	// End Line: 607

	/* begin block 3 */
		// Start line: 616
	/* end block 3 */
	// End Line: 617

	/* begin block 4 */
		// Start line: 616
	/* end block 4 */
	// End Line: 617

void CopSpeak_SilenceCop__FP8Car_tObji(Car_tObj *car,int playerIndex)

{
  if ((car == (Car_tObj *)0x0) ||
     (((uint)(byte)CopSpeak_gCurrent.player == playerIndex && (car == CopSpeak_gCurrent.car)))) {
    if (CopSpeak_gSpchHandle != -1) {
      SNDvol(CopSpeak_gSpchHandle,0);
    }
    CopSpeak_RadioStaticSquelch__Fv();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_Alloc__FP17CopSpeak_tRequest(struct CopSpeak_tRequest *r /*$a0*/)
 // line 312, offset 0x80099684
	/* begin block 1 */
		// Start line: 313
		// Start offset: 0x80099684
	/* end block 1 */
	// End offset: 0x80099714
	// End Line: 338

	/* begin block 2 */
		// Start line: 644
	/* end block 2 */
	// End Line: 645

	/* begin block 3 */
		// Start line: 650
	/* end block 3 */
	// End Line: 651

	/* begin block 4 */
		// Start line: 650
	/* end block 4 */
	// End Line: 651

	/* begin block 5 */
		// Start line: 651
	/* end block 5 */
	// End Line: 652

	/* begin block 6 */
		// Start line: 651
	/* end block 6 */
	// End Line: 652

void CopSpeak_Alloc__FP17CopSpeak_tRequest(CopSpeak_tRequest *r)

{
  if (CopSpeak_gQueueReady == CopSpeak_gQueueLoad) {
    CopSpeak_gBufferLow = 0;
    CopSpeak_gBufferHigh = 0;
    CopSpeak_gBufferStart = 0;
    CopSpeak_gBufferEnd = 0x7ffc;
  }
  if (r->size <= (int)CopSpeak_gBufferEnd - (int)CopSpeak_gBufferStart) {
    r->buffer = (int)CopSpeak_gBufferStart;
    CopSpeak_gBufferStart = CopSpeak_gBufferStart + *(short *)&r->size;
    return;
  }
  if (r->size <= (int)CopSpeak_gBufferLow) {
    CopSpeak_gBufferHigh = CopSpeak_gBufferStart;
    CopSpeak_gBufferEnd = CopSpeak_gBufferLow;
    CopSpeak_gBufferLow = 0;
    r->buffer = 0;
    CopSpeak_gBufferStart = *(short *)&r->size;
    return;
  }
  r->buffer = -1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_Free__FP17CopSpeak_tRequest(struct CopSpeak_tRequest *r /*$a0*/)
 // line 344, offset 0x8009971c
	/* begin block 1 */
		// Start line: 345
		// Start offset: 0x8009971C
	/* end block 1 */
	// End offset: 0x800997A4
	// End Line: 361

	/* begin block 2 */
		// Start line: 714
	/* end block 2 */
	// End Line: 715

	/* begin block 3 */
		// Start line: 721
	/* end block 3 */
	// End Line: 722

	/* begin block 4 */
		// Start line: 721
	/* end block 4 */
	// End Line: 722

	/* begin block 5 */
		// Start line: 722
	/* end block 5 */
	// End Line: 723

	/* begin block 6 */
		// Start line: 722
	/* end block 6 */
	// End Line: 723

void CopSpeak_Free__FP17CopSpeak_tRequest(CopSpeak_tRequest *r)

{
  int iVar1;
  int iVar2;
  
  iVar1 = r->buffer;
  if ((-1 < iVar1) && (iVar2 = r->size, 0 < iVar2)) {
    if ((int)CopSpeak_gBufferHigh == 0) {
      if (iVar1 + iVar2 == (int)CopSpeak_gBufferStart) {
        CopSpeak_gBufferStart = 0;
        r->buffer = -1;
        return;
      }
      CopSpeak_gBufferLow = *(short *)&r->buffer + *(short *)&r->size;
    }
    else {
      if (iVar1 + iVar2 == (int)CopSpeak_gBufferHigh) {
        CopSpeak_gBufferHigh = 0;
        CopSpeak_gBufferEnd = 0x7ffc;
      }
    }
    r->buffer = -1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_ReadyNextRequest__Fv()
 // line 367, offset 0x800997ac
	/* begin block 1 */
		// Start line: 368
		// Start offset: 0x800997AC
		// Variables:
	// 		struct CopSpeak_tRequest *r; // $s0
	// 		int ok; // $s2

		/* begin block 1.1 */
			// Start line: 368
			// Start offset: 0x800997AC

			/* begin block 1.1.1 */
				// Start line: 374
				// Start offset: 0x800997E4
				// Variables:
			// 		int status; // $v0
			// 		struct CopSpeak_tBankHeader *bnk; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 451
					// Start offset: 0x80099860

					/* begin block 1.1.1.1.1 */
						// Start line: 452
						// Start offset: 0x80099868
					/* end block 1.1.1.1.1 */
					// End offset: 0x80099894
					// End Line: 460
				/* end block 1.1.1.1 */
				// End offset: 0x80099984
				// End Line: 512
			/* end block 1.1.1 */
			// End offset: 0x80099984
			// End Line: 512
		/* end block 1.1 */
		// End offset: 0x800999E0
		// End Line: 517
	/* end block 1 */
	// End offset: 0x80099A04
	// End Line: 520

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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_ReadyNextRequest__Fv(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int bank;
  int iVar6;
  int size;
  CopSpeak_tRequest *r;
  int *piVar7;
  
  iVar3 = CopSpeak_gQueueReady;
  r = CopSpeak_gQueue + CopSpeak_gQueueReady;
  bVar2 = true;
  if (CopSpeak_gQueue[CopSpeak_gQueueReady].buffer < 0) {
    if ((CopSpeak_gQueue[CopSpeak_gQueueReady].sfx != '\0') ||
       ((-1 < CopSpeak_gQueue[CopSpeak_gQueueReady].phrase &&
        (-1 < CopSpeak_gQueue[CopSpeak_gQueueReady].bank)))) {
      AudioCmn_LoadAsyncSfx__FiiPvi
                ((int)CopSpeak_gQueue[CopSpeak_gQueueReady].bank,
                 CopSpeak_gQueue[CopSpeak_gQueueReady].phrase,(void *)0x0,0);
    }
    goto LAB_800999e0;
  }
  uVar4 = FILE_opstatus(CopSpeak_gQueue[CopSpeak_gQueueReady].ophandle);
  if (uVar4 == 0) {
    return;
  }
  uVar5 = FILE_completeop(CopSpeak_gQueue[iVar3].ophandle);
  CopSpeak_gHandleCount = CopSpeak_gHandleCount + -1;
  piVar7 = (int *)(CopSpeak_gBuffer + CopSpeak_gQueue[iVar3].buffer);
  bVar2 = *piVar7 == 0x6c4b4e42 && (uVar5 == CopSpeak_gQueue[iVar3].size && uVar4 == 1);
  if ((*(char *)(piVar7 + 1) != '\x04') && (*(char *)(piVar7 + 1) != '\x02')) {
    bVar2 = false;
  }
  if (!bVar2) {
    if ((CopSpeak_gQueue[iVar3].sfx != '\0') && (-1 < (int)CopSpeak_gQueue[iVar3].bank)) {
      AudioCmn_LoadAsyncSfx__FiiPvi
                ((int)CopSpeak_gQueue[iVar3].bank,CopSpeak_gQueue[iVar3].phrase,(void *)0x0,0);
    }
    *piVar7 = 0x4c494146;
    uVar4 = FILE_read(CopSpeak_gQueue[iVar3].filehandle,CopSpeak_gQueue[iVar3].offset,
                      (uint)(CopSpeak_gBuffer + CopSpeak_gQueue[iVar3].buffer),
                      CopSpeak_gQueue[iVar3].size,0,0);
    CopSpeak_gQueue[iVar3].ophandle = uVar4;
    CopSpeak_gHandleCount = CopSpeak_gHandleCount + '\x01';
    FILE_operror(CopSpeak_gQueue[iVar3].ophandle);
    goto LAB_800999e0;
  }
  bank = (int)CopSpeak_gQueue[iVar3].bank;
  if (-1 < bank) {
    if ((CopSpeak_gQueue[iVar3].sfx == '\0') && (CopSpeak_gQueue[iVar3].phrase < 0)) {
      bank = AudioCmn_GetAsyncSfx__Fiib(bank,CopSpeak_gQueue[iVar3].offset + 0x4000,&DAT_00000001);
      if (bank == -1) {
        cVar1 = CopSpeak_gQueue[iVar3].bank;
        size = CopSpeak_gQueue[iVar3].size;
        iVar6 = CopSpeak_gQueue[iVar3].buffer;
        bank = CopSpeak_gQueue[iVar3].offset + 0x4000;
LAB_8009997c:
        AudioCmn_LoadAsyncSfx__FiiPvi((int)cVar1,bank,CopSpeak_gBuffer + iVar6,size);
      }
    }
    else {
      bank = AudioCmn_GetAsyncSfx__Fiib(bank,CopSpeak_gQueue[iVar3].phrase,&DAT_00000001);
      if (bank == -1) {
        cVar1 = CopSpeak_gQueue[iVar3].bank;
        bank = CopSpeak_gQueue[iVar3].phrase;
        iVar6 = CopSpeak_gQueue[iVar3].buffer;
        size = CopSpeak_gQueue[iVar3].size;
        goto LAB_8009997c;
      }
    }
  }
  *piVar7 = 0x4c494146;
  CopSpeak_Free__FP17CopSpeak_tRequest(r);
LAB_800999e0:
  iVar3 = CopSpeak_gQueueReady;
  if ((bVar2) && (iVar3 = 0, CopSpeak_gQueueReady < 0x3f)) {
    iVar3 = CopSpeak_gQueueReady + 1;
  }
  CopSpeak_gQueueReady = iVar3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_Cancel__Fv()
 // line 539, offset 0x80099a1c
	/* begin block 1 */
		// Start line: 540
		// Start offset: 0x80099A1C
	/* end block 1 */
	// End offset: 0x80099A70
	// End Line: 562

	/* begin block 2 */
		// Start line: 1113
	/* end block 2 */
	// End Line: 1114

	/* begin block 3 */
		// Start line: 1119
	/* end block 3 */
	// End Line: 1120

	/* begin block 4 */
		// Start line: 1119
	/* end block 4 */
	// End Line: 1120

	/* begin block 5 */
		// Start line: 1120
	/* end block 5 */
	// End Line: 1121

	/* begin block 6 */
		// Start line: 1120
	/* end block 6 */
	// End Line: 1121

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_Cancel__Fv(void)

{
  if (CopSpeak_gQueueReady != CopSpeak_gQueueLoad) {
    do {
      CopSpeak_ReadyNextRequest__Fv();
      systemtask(0);
    } while (CopSpeak_gQueueReady != CopSpeak_gQueueLoad);
  }
  if (CopSpeak_gSpchHandle != -1) {
    SNDstop(CopSpeak_gSpchHandle);
  }
  CopSpeak_RadioStaticSquelch__Fv();
  CopSpeak_gSpchHandle = -1;
  CopSpeak_InitRequest__FP17CopSpeak_tRequest(&CopSpeak_gCurrent);
  CopSpeak_gQueueHead = 0;
  CopSpeak_gQueuePlay = 0;
  CopSpeak_gQueueLoad = 0;
  CopSpeak_gQueueReady = 0;
  CopSpeak_gBufferLow = 0;
  CopSpeak_gBufferStart = 0;
  CopSpeak_gBufferEnd = 0x7ffc;
  CopSpeak_gBufferHigh = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_Stop__Fv()
 // line 582, offset 0x80099abc
	/* begin block 1 */
		// Start line: 583
		// Start offset: 0x80099ABC
	/* end block 1 */
	// End offset: 0x80099ABC
	// End Line: 583

	/* begin block 2 */
		// Start line: 1207
	/* end block 2 */
	// End Line: 1208

	/* begin block 3 */
		// Start line: 1215
	/* end block 3 */
	// End Line: 1216

	/* begin block 4 */
		// Start line: 1215
	/* end block 4 */
	// End Line: 1216

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_Stop__Fv(void)

{
  CopSpeak_Cancel__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_CleanUp__Fv()
 // line 592, offset 0x80099adc
	/* begin block 1 */
		// Start line: 593
		// Start offset: 0x80099ADC

		/* begin block 1.1 */
			// Start line: 593
			// Start offset: 0x80099ADC
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x80099B48
		// End Line: 617
	/* end block 1 */
	// End offset: 0x80099B5C
	// End Line: 621

	/* begin block 2 */
		// Start line: 1226
	/* end block 2 */
	// End Line: 1227

	/* begin block 3 */
		// Start line: 1235
	/* end block 3 */
	// End Line: 1236

	/* begin block 4 */
		// Start line: 1235
	/* end block 4 */
	// End Line: 1236

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_CleanUp__Fv(void)

{
  CopSpeak_tBank *pCVar1;
  int iVar2;
  
  CopSpeak_Stop__Fv();
  iVar2 = 0;
  pCVar1 = &Copspeak_gBank;
  do {
    if (pCVar1->FileOpen != 0) {
      FILE_closesync(pCVar1->FileHandle,100);
      pCVar1->FileOpen = 0;
    }
    if (pCVar1->Index != (CopSpeak_tFileIndex *)0x0) {
      purgememadr((int)pCVar1->Index);
      pCVar1->Index = (CopSpeak_tFileIndex *)0x0;
    }
    iVar2 = iVar2 + 1;
    pCVar1 = pCVar1 + 1;
  } while (iVar2 < 4);
  if (CopSpeak_gBuffer != (char *)0x0) {
    CopSpeak_gBuffer = (char *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_InitVars__Fv()
 // line 628, offset 0x80099b70
	/* begin block 1 */
		// Start line: 629
		// Start offset: 0x80099B70

		/* begin block 1.1 */
			// Start line: 629
			// Start offset: 0x80099B70
			// Variables:
		// 		int i; // $a0
		/* end block 1.1 */
		// End offset: 0x80099B9C
		// End Line: 638
	/* end block 1 */
	// End offset: 0x80099B9C
	// End Line: 639

	/* begin block 2 */
		// Start line: 1299
	/* end block 2 */
	// End Line: 1300

	/* begin block 3 */
		// Start line: 1307
	/* end block 3 */
	// End Line: 1308

	/* begin block 4 */
		// Start line: 1307
	/* end block 4 */
	// End Line: 1308

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_InitVars__Fv(void)

{
  CopSpeak_tBank *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = &Copspeak_gBank;
  do {
    pCVar1->FileOpen = 0;
    pCVar1->Index = (CopSpeak_tFileIndex *)0x0;
    iVar2 = iVar2 + 1;
    pCVar1 = pCVar1 + 1;
  } while (iVar2 < 4);
  CopSpeak_gSpchHandle = -1;
  CopSpeak_gBuffer = (char *)0x0;
  CopSpeak_gQueueHead = 0;
  CopSpeak_gQueueLoad = 0;
  CopSpeak_gQueueReady = 0;
  CopSpeak_gQueuePlay = 0;
  CopSpeak_gWrongWay = 0;
  CopSpeak_gBufferLow = 0;
  CopSpeak_gBufferHigh = 0;
  CopSpeak_gBufferStart = 0;
  CopSpeak_gBufferEnd = 0x7ffc;
  CopSpeak_InitRequest__FP17CopSpeak_tRequest(&CopSpeak_gCurrent);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_DirectRequest__FillP8Car_tObjPc(int filehandle /*$s2*/, long offset /*$s3*/, long size /*$s4*/, struct Car_tObj *car /*$s5*/, char *name /*stack 16*/)
 // line 656, offset 0x80099bec
	/* begin block 1 */
		// Start line: 657
		// Start offset: 0x80099BEC
		// Variables:
	// 		struct CopSpeak_tRequest *r; // $s0
	// 		int next; // $s1
	/* end block 1 */
	// End offset: 0x80099C74
	// End Line: 676

	/* begin block 2 */
		// Start line: 1367
	/* end block 2 */
	// End Line: 1368

	/* begin block 3 */
		// Start line: 1374
	/* end block 3 */
	// End Line: 1375

	/* begin block 4 */
		// Start line: 1374
	/* end block 4 */
	// End Line: 1375

void CopSpeak_DirectRequest__FillP8Car_tObjPc
               (int filehandle,long offset,long size,Car_tObj *car,char *name)

{
  int iVar1;
  CopSpeak_tRequest *r;
  int iVar2;
  
  iVar1 = CopSpeak_gQueueHead;
  r = CopSpeak_gQueue + CopSpeak_gQueueHead;
  iVar2 = 0;
  if (CopSpeak_gQueueHead < 0x3f) {
    iVar2 = CopSpeak_gQueueHead + 1;
  }
  if (iVar2 != CopSpeak_gQueuePlay) {
    CopSpeak_InitRequest__FP17CopSpeak_tRequest(r);
    CopSpeak_gQueue[iVar1].filehandle = filehandle;
    CopSpeak_gQueue[iVar1].offset = offset;
    CopSpeak_gQueue[iVar1].size = size;
    CopSpeak_gQueue[iVar1].noise = '\x7f';
    r->car = car;
    CopSpeak_gQueueHead = iVar2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_GenericBankRequest__FiP8Car_tObj(int patch /*$s2*/, struct Car_tObj *car /*$s3*/)
 // line 682, offset 0x80099c98
	/* begin block 1 */
		// Start line: 683
		// Start offset: 0x80099C98
		// Variables:
	// 		struct CopSpeak_tRequest *r; // $s0
	// 		int next; // $s1
	/* end block 1 */
	// End offset: 0x80099D20
	// End Line: 696

	/* begin block 2 */
		// Start line: 1423
	/* end block 2 */
	// End Line: 1424

	/* begin block 3 */
		// Start line: 1430
	/* end block 3 */
	// End Line: 1431

	/* begin block 4 */
		// Start line: 1430
	/* end block 4 */
	// End Line: 1431

void CopSpeak_GenericBankRequest__FiP8Car_tObj(int patch,Car_tObj *car)

{
  int iVar1;
  CopSpeak_tRequest *r;
  int iVar2;
  
  iVar1 = CopSpeak_gQueueHead;
  r = CopSpeak_gQueue + CopSpeak_gQueueHead;
  iVar2 = 0;
  if (CopSpeak_gQueueHead < 0x3f) {
    iVar2 = CopSpeak_gQueueHead + 1;
  }
  if ((iVar2 != CopSpeak_gQueuePlay) && (iVar2 != CopSpeak_gQueueReady)) {
    CopSpeak_InitRequest__FP17CopSpeak_tRequest(r);
    CopSpeak_gQueue[iVar1].bank = '\x03';
    CopSpeak_gQueue[iVar1].phrase = patch;
    CopSpeak_gQueue[iVar1].noise = '\x7f';
    r->car = car;
    CopSpeak_gQueueHead = iVar2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_StartUp__Fv()
 // line 709, offset 0x80099d3c
	/* begin block 1 */
		// Start line: 710
		// Start offset: 0x80099D3C
		// Variables:
	// 		char filename[100]; // stack offset -184
	// 		char *header; // $s5
	// 		char *SpeechLanguage; // $a3

		/* begin block 1.1 */
			// Start line: 710
			// Start offset: 0x80099D3C

			/* begin block 1.1.1 */
				// Start line: 725
				// Start offset: 0x80099DA4
				// Variables:
			// 		struct CopSpeak_tBank *bank; // $s2
			// 		char (*Generic[1]); // stack offset -56

				/* begin block 1.1.1.1 */
					// Start line: 730
					// Start offset: 0x80099DEC
					// Variables:
				// 		int i; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x80099E7C
				// End Line: 746

				/* begin block 1.1.1.2 */
					// Start line: 747
					// Start offset: 0x80099E7C
					// Variables:
				// 		int i; // $s1

					/* begin block 1.1.1.2.1 */
						// Start line: 747
						// Start offset: 0x80099EA0
						// Variables:
					// 		char bankname[16]; // stack offset -80
					// 		char (*timbre[2]); // stack offset -64
					/* end block 1.1.1.2.1 */
					// End offset: 0x80099F44
					// End Line: 756
				/* end block 1.1.1.2 */
				// End offset: 0x80099F50
				// End Line: 758
			/* end block 1.1.1 */
			// End offset: 0x80099F70
			// End Line: 760
		/* end block 1.1 */
		// End offset: 0x80099F70
		// End Line: 760

		/* begin block 1.2 */
			// Start line: 774
			// Start offset: 0x80099FC0

			/* begin block 1.2.1 */
				// Start line: 778
				// Start offset: 0x80099FEC
				// Variables:
			// 		struct CopSpeak_tBank *bank; // $s1

				/* begin block 1.2.1.1 */
					// Start line: 778
					// Start offset: 0x80099FEC
					// Variables:
				// 		int i; // $s0
				/* end block 1.2.1.1 */
				// End offset: 0x8009A05C
				// End Line: 788
			/* end block 1.2.1 */
			// End offset: 0x8009A07C
			// End Line: 796
		/* end block 1.2 */
		// End offset: 0x8009A07C
		// End Line: 796

		/* begin block 1.3 */
			// Start line: 816
			// Start offset: 0x8009A0B4

			/* begin block 1.3.1 */
				// Start line: 821
				// Start offset: 0x8009A0E4
				// Variables:
			// 		struct CopSpeak_tBank *bank; // $s7
			// 		long offset; // stack offset -52
			// 		long size; // stack offset -48

				/* begin block 1.3.1.1 */
					// Start line: 822
					// Start offset: 0x8009A0E4

					/* begin block 1.3.1.1.1 */
						// Start line: 827
						// Start offset: 0x8009A120
						// Variables:
					// 		char *list; // $s3
					// 		char *p; // $s0
					// 		int quoted; // $s2
					// 		int i; // $s4
					// 		char *name; // $s6
					/* end block 1.3.1.1.1 */
					// End offset: 0x8009A280
					// End Line: 872
				/* end block 1.3.1.1 */
				// End offset: 0x8009A280
				// End Line: 872
			/* end block 1.3.1 */
			// End offset: 0x8009A288
			// End Line: 874
		/* end block 1.3 */
		// End offset: 0x8009A288
		// End Line: 874
	/* end block 1 */
	// End offset: 0x8009A288
	// End Line: 879

	/* begin block 2 */
		// Start line: 1472
	/* end block 2 */
	// End Line: 1473

	/* begin block 3 */
		// Start line: 1486
	/* end block 3 */
	// End Line: 1487

	/* begin block 4 */
		// Start line: 1486
	/* end block 4 */
	// End Line: 1487

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_StartUp__Fv(void)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  short *psVar4;
  int iVar5;
  uint *puVar6;
  undefined **ppuVar7;
  short *psVar8;
  uint uVar9;
  byte **ppbVar10;
  byte *pbVar11;
  short *psVar12;
  char acStack184 [104];
  byte abStack80 [16];
  byte *local_40;
  undefined *local_3c;
  char *local_38;
  uint local_34;
  uint local_30 [2];
  
  CopSpeak_InitVars__Fv();
  CopSpeak_RadioStaticInit__Fv();
  sprintf(acStack184,s__szzzwzzz_viv_80055ec8,PTR_801164d8);
  pbVar11 = (byte *)loadbigfileheader(acStack184,0x10);
  if (pbVar11 != (byte *)0x0) {
    CopSpeak_tBank_80111eb4.Count = 0;
    while (iVar2 = strcmp(GameSetup_gCarNames + CopSpeak_tBank_80111eb4.Count * 5,&DAT_8013d084),
          iVar2 != 0) {
      CopSpeak_tBank_80111eb4.Count = CopSpeak_tBank_80111eb4.Count + 1;
    }
    iVar2 = 0;
    ppbVar10 = &local_40 + 2;
    CopSpeak_tBank_80111eb4.Count = CopSpeak_tBank_80111eb4.Count * 2 + 1;
    CopSpeak_tBank_80111eb4.Index =
         (CopSpeak_tFileIndex *)
         reservememadr(s_ocar_index_80055ed8,CopSpeak_tBank_80111eb4.Count * 8,0);
    local_38 = s_rain_bnk_80055ee4;
    do {
      pbVar3 = locatebigentryz(pbVar11,*ppbVar10,0,(uint *)(CopSpeak_tBank_80111eb4.Index + iVar2),
                               (uint *)&CopSpeak_tBank_80111eb4.Index[iVar2].size);
      if (pbVar3 == (byte *)0x0) {
        CopSpeak_tBank_80111eb4.Index[iVar2].offset = 0;
        CopSpeak_tBank_80111eb4.Index[iVar2].size = 0;
      }
      iVar2 = iVar2 + 1;
      ppbVar10 = ppbVar10 + 1;
    } while (iVar2 < 1);
    uVar9 = 0;
    iVar2 = 8;
    while ((int)uVar9 < CopSpeak_tBank_80111eb4.Count + -1) {
      iVar5 = (int)(uVar9 + (uVar9 >> 0x1f)) >> 1;
      local_40 = &DAT_8013d08c;
      local_3c = &DAT_8013d094;
      sprintf((char *)abStack80,s___4s__4s_bnk_80055ef0,GameSetup_gCarNames + iVar5 * 5,
              (&local_40)[uVar9 + iVar5 * -2]);
      puVar6 = (uint *)((int)&(CopSpeak_tBank_80111eb4.Index)->offset + iVar2);
      pbVar3 = locatebigentryz(pbVar11,abStack80,0,puVar6,puVar6 + 1);
      if (pbVar3 == (byte *)0x0) {
        CopSpeak_tBank_80111eb4.Index[uVar9 + 1].offset = 0;
        CopSpeak_tBank_80111eb4.Index[uVar9 + 1].size = 0;
      }
      iVar2 = iVar2 + 8;
      uVar9 = uVar9 + 1;
    }
    purgememadr((int)pbVar11);
    CopSpeak_tBank_80111eb4.FileOpen =
         FILE_opensync(acStack184,1,100,(uint *)&CopSpeak_tBank_80111eb4);
  }
  CopSpeak_gNumTrackSfx = 0;
  sprintf(acStack184,s__szzzw_s_viv_80055f00,PTR_801164d8,
          GameSetup_gTrackNames + GameSetup_gData.track * 4);
  pbVar11 = (byte *)loadbigfileheader(acStack184,0x10);
  if (pbVar11 == (byte *)0x0) {
    sprintf(acStack184,s__szzzwcst_viv_80055f10,PTR_801164d8);
    pbVar11 = (byte *)loadbigfileheader(acStack184,0x10);
    if (pbVar11 == (byte *)0x0) goto LAB_8009a07c;
  }
  Copspeak_gBank.Count = bigcount(pbVar11);
  Copspeak_gBank.Index =
       (CopSpeak_tFileIndex *)reservememadr(s_trck_index_80055f20,Copspeak_gBank.Count << 3,0);
  CopSpeak_gNumTrackSfx = Copspeak_gBank.Count;
  iVar2 = 0;
  if (0 < Copspeak_gBank.Count) {
    do {
      locatebigentry(pbVar11,(byte *)0x0,iVar2,(uint *)(Copspeak_gBank.Index + iVar2),
                     (uint *)&Copspeak_gBank.Index[iVar2].size);
      iVar2 = iVar2 + 1;
    } while (iVar2 < Copspeak_gBank.Count);
  }
  purgememadr((int)pbVar11);
  Copspeak_gBank.FileOpen = FILE_opensync(acStack184,1,100,(uint *)&Copspeak_gBank);
LAB_8009a07c:
  if (GameSetup_gData.userSetting.language == 1) {
    ppuVar7 = &PTR_DAT_8013d0a0;
  }
  else {
    if (GameSetup_gData.userSetting.language == 2) {
      ppuVar7 = &PTR_DAT_8013d09c;
    }
    else {
      ppuVar7 = &PTR_DAT_8013d0a4;
    }
  }
  sprintf(acStack184,s__szzzx_s_viv_80055f2c,PTR_ARRAY_801164dc[0],ppuVar7);
  pbVar11 = (byte *)loadbigfileheader(acStack184,0x10);
  if (pbVar11 != (byte *)0x0) {
    pbVar3 = locatebigentryz(pbVar11,(byte *)s_oneshots_txt_80055f3c,0,&local_34,local_30);
    if ((pbVar3 != (byte *)0x0) && (local_30[0] != 0)) {
      psVar4 = reservememadr(s_copspeak_temp_80055f4c,local_30[0],0x10);
      CopSpeak_tBank_ARRAY_80111ec4[0].FileOpen =
           FILE_opensync(acStack184,1,100,(uint *)CopSpeak_tBank_ARRAY_80111ec4);
      FILE_readsync(CopSpeak_tBank_ARRAY_80111ec4[0].FileHandle,local_34,psVar4,local_30[0],100);
      bVar1 = false;
      CopSpeak_tBank_ARRAY_80111ec4[0].Count = 0;
      psVar8 = psVar4;
      while (psVar8 < (short *)((int)psVar4 + local_30[0])) {
        if (*(char *)psVar8 == '\"') {
          if (bVar1) {
            CopSpeak_tBank_ARRAY_80111ec4[0].Count = CopSpeak_tBank_ARRAY_80111ec4[0].Count + 1;
          }
          bVar1 = !bVar1;
        }
        psVar8 = (short *)((int)psVar8 + 1);
      }
      iVar2 = 0;
      CopSpeak_tBank_ARRAY_80111ec4[0].Index =
           (CopSpeak_tFileIndex *)
           reservememadr(s_1sht_index_80055f5c,CopSpeak_tBank_ARRAY_80111ec4[0].Count << 3,0);
      bVar1 = false;
      psVar8 = psVar4;
      psVar12 = psVar4;
      if (psVar4 < (short *)((int)psVar4 + local_30[0])) {
        do {
          if (*(char *)psVar8 == '\"') {
            if (bVar1) {
              *(char *)psVar8 = '\0';
              pbVar3 = locatebigentryz(pbVar11,(byte *)psVar12,0,
                                       (uint *)(CopSpeak_tBank_ARRAY_80111ec4[0].Index + iVar2),
                                       (uint *)&CopSpeak_tBank_ARRAY_80111ec4[0].Index[iVar2].size);
              if (pbVar3 == (byte *)0x0) {
                CopSpeak_tBank_ARRAY_80111ec4[0].Index[iVar2].size = 0;
              }
              iVar2 = iVar2 + 1;
            }
            else {
              psVar12 = (short *)((int)psVar8 + 1);
            }
            bVar1 = (bool)(bVar1 ^ 1);
          }
          psVar8 = (short *)((int)psVar8 + 1);
        } while (psVar8 < (short *)((int)psVar4 + local_30[0]));
      }
      purgememadr((int)psVar4);
    }
    purgememadr((int)pbVar11);
  }
  CopSpeak_gBuffer = Platform_GetDCTBuffer__FiPc(0x8000,s_CopSpeakBuf_80055f68);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CopSpeak_GetEnginePatch__Fii(int type /*$a0*/, int timbre /*$a1*/)
 // line 885, offset 0x8009a2cc
	/* begin block 1 */
		// Start line: 886
		// Start offset: 0x8009A2CC
		// Variables:
	// 		int patch; // $a0
	/* end block 1 */
	// End offset: 0x8009A2FC
	// End Line: 892

	/* begin block 2 */
		// Start line: 1878
	/* end block 2 */
	// End Line: 1879

	/* begin block 3 */
		// Start line: 1885
	/* end block 3 */
	// End Line: 1886

	/* begin block 4 */
		// Start line: 1885
	/* end block 4 */
	// End Line: 1886

	/* begin block 5 */
		// Start line: 1886
	/* end block 5 */
	// End Line: 1887

	/* begin block 6 */
		// Start line: 1886
	/* end block 6 */
	// End Line: 1887

int CopSpeak_GetEnginePatch__Fii(int type,int timbre)

{
  int iVar1;
  
  iVar1 = type * 2 + timbre + 1;
  if (CopSpeak_tBank_80111eb4.Index[iVar1].size == 0) {
    iVar1 = timbre + 0x45;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CopSpeak_Play__FP17CopSpeak_tRequesti(struct CopSpeak_tRequest *r /*$s0*/, int handle /*$s1*/)
 // line 920, offset 0x8009a304
	/* begin block 1 */
		// Start line: 921
		// Start offset: 0x8009A304
		// Variables:
	// 		struct SNDPLAYOPTS playopts; // stack offset -40
	// 		int vol; // $a0
	// 		int azimuth; // $s2
	// 		int noise; // $a0
	/* end block 1 */
	// End offset: 0x8009A43C
	// End Line: 975

	/* begin block 2 */
		// Start line: 1818
	/* end block 2 */
	// End Line: 1819

	/* begin block 3 */
		// Start line: 1830
	/* end block 3 */
	// End Line: 1831

	/* begin block 4 */
		// Start line: 1828
	/* end block 4 */
	// End Line: 1829

	/* begin block 5 */
		// Start line: 1828
	/* end block 5 */
	// End Line: 1829

int CopSpeak_Play__FP17CopSpeak_tRequesti(CopSpeak_tRequest *r,int handle)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_28;
  undefined local_24;
  undefined local_21;
  undefined local_20;
  undefined local_1f;
  bool local_1d;
  undefined2 local_18;
  
  SNDplaysetdef(&local_28);
  if (r->bank == '\x03') {
    local_24 = (undefined)SndBnk_t_ARRAY_8010e8cc[0].bnkID;
    local_28 = r->phrase;
  }
  else {
    local_24 = (undefined)handle;
    local_28 = 0;
  }
  iVar3 = 0x30;
  if (r->car != (Car_tObj *)0x0) {
    iVar2 = (int)*(short *)((int)&(r->car->N).distToPlayer + 2) + 0x20;
    iVar3 = 0x7f;
    if (iVar2 < 0x80) {
      iVar3 = iVar2;
    }
  }
  if (r->filehandle == CopSpeak_tBank_ARRAY_80111ec4[0].FileHandle) {
    iVar3 = (gMasterFENarrationLevel * 0x81 >> 7) << 1;
    local_20 = 0x7f;
    if (iVar3 < 0x80) {
      local_20 = (char)iVar3;
    }
  }
  else {
    local_20 = (undefined)(gMasterFENarrationLevel * (0x80 - (iVar3 >> 2)) * 0x81 >> 0xe);
  }
  local_1f = 0x40;
  local_1d = Audio_direct3davail != 0;
  if (Audio_direct3davail == 0) {
    if (gStereoMode == 0) {
      local_21 = 0x40;
    }
    else {
      local_21 = 0x40;
    }
  }
  else {
    local_18 = 0;
  }
  uVar1 = SNDplay(&local_28);
  return uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_Skip__Fv()
 // line 1028, offset 0x8009a45c
	/* begin block 1 */
		// Start line: 1029
		// Start offset: 0x8009A45C
		// Variables:
	// 		struct CopSpeak_tRequest *r; // $a0
	/* end block 1 */
	// End offset: 0x8009A4B8
	// End Line: 1042

	/* begin block 2 */
		// Start line: 2050
	/* end block 2 */
	// End Line: 2051

	/* begin block 3 */
		// Start line: 2023
	/* end block 3 */
	// End Line: 2024

	/* begin block 4 */
		// Start line: 2023
	/* end block 4 */
	// End Line: 2024

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_Skip__Fv(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CopSpeak_gQueueLoad;
  cVar1 = CopSpeak_gQueue[CopSpeak_gQueueLoad].sfx;
  CopSpeak_gQueue[CopSpeak_gQueueLoad].buffer = -1;
  CopSpeak_gQueue[iVar2].phrase = -1;
  if (cVar1 != '\0') {
    AudioCmn_LoadAsyncSfx__FiiPvi((int)CopSpeak_gQueue[iVar2].bank,-1,(void *)0x0,0);
  }
  iVar2 = 0;
  if (CopSpeak_gQueueLoad < 0x3f) {
    iVar2 = CopSpeak_gQueueLoad + 1;
  }
  CopSpeak_gQueueLoad = iVar2;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CopSpeak_Request__FP17CopSpeak_tRequest(struct CopSpeak_tRequest *r /*$a0*/)
 // line 1051, offset 0x8009a4c8
	/* begin block 1 */
		// Start line: 1052
		// Start offset: 0x8009A4C8
		// Variables:
	// 		int next; // $v1
	// 		struct CopSpeak_tBank *bank; // $a1
	/* end block 1 */
	// End offset: 0x8009A5FC
	// End Line: 1090

	/* begin block 2 */
		// Start line: 2065
	/* end block 2 */
	// End Line: 2066

	/* begin block 3 */
		// Start line: 2074
	/* end block 3 */
	// End Line: 2075

	/* begin block 4 */
		// Start line: 2074
	/* end block 4 */
	// End Line: 2075

	/* begin block 5 */
		// Start line: 2077
	/* end block 5 */
	// End Line: 2078

int CopSpeak_Request__FP17CopSpeak_tRequest(CopSpeak_tRequest *r)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = CopSpeak_gQueueHead;
  iVar2 = 0;
  if (CopSpeak_gQueueHead < 0x3f) {
    iVar2 = CopSpeak_gQueueHead + 1;
  }
  if (iVar2 != CopSpeak_gQueuePlay) {
    iVar2 = (int)r->bank;
    if (((((&Copspeak_gBank)[iVar2].FileOpen != 0) &&
         ((&Copspeak_gBank)[iVar2].Index != (CopSpeak_tFileIndex *)0x0)) && (-1 < r->phrase)) &&
       (r->phrase <= (&Copspeak_gBank)[iVar2].Count)) {
      r->filehandle = (&Copspeak_gBank)[iVar2].FileHandle;
      r->offset = (&Copspeak_gBank)[iVar2].Index[r->phrase].offset;
      iVar2 = (&Copspeak_gBank)[iVar2].Index[r->phrase].size;
      r->size = iVar2;
      if (iVar2 != 0) {
        iVar2 = r->buffer;
        iVar3 = r->offset;
        iVar4 = r->size;
        CopSpeak_gQueue[iVar1].car = r->car;
        CopSpeak_gQueue[iVar1].buffer = iVar2;
        CopSpeak_gQueue[iVar1].offset = iVar3;
        CopSpeak_gQueue[iVar1].size = iVar4;
        iVar2 = r->ophandle;
        iVar3 = r->phrase;
        uVar5 = *(undefined4 *)&r->player;
        CopSpeak_gQueue[iVar1].filehandle = r->filehandle;
        CopSpeak_gQueue[iVar1].ophandle = iVar2;
        CopSpeak_gQueue[iVar1].phrase = iVar3;
        *(undefined4 *)&CopSpeak_gQueue[iVar1].player = uVar5;
        iVar2 = 0;
        if (CopSpeak_gQueueHead < 0x3f) {
          iVar2 = CopSpeak_gQueueHead + 1;
        }
        CopSpeak_gQueueHead = iVar2;
        return iVar1;
      }
    }
  }
  return -1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CopSpeak_BankVolume__FP17CopSpeak_tRequest(struct CopSpeak_tRequest *r /*$a0*/)
 // line 1095, offset 0x8009a604
	/* begin block 1 */
		// Start line: 1096
		// Start offset: 0x8009A604
	/* end block 1 */
	// End offset: 0x8009A62C
	// End Line: 1100

	/* begin block 2 */
		// Start line: 2157
	/* end block 2 */
	// End Line: 2158

	/* begin block 3 */
		// Start line: 2163
	/* end block 3 */
	// End Line: 2164

	/* begin block 4 */
		// Start line: 2163
	/* end block 4 */
	// End Line: 2164

	/* begin block 5 */
		// Start line: 2164
	/* end block 5 */
	// End Line: 2165

	/* begin block 6 */
		// Start line: 2164
	/* end block 6 */
	// End Line: 2165

int CopSpeak_BankVolume__FP17CopSpeak_tRequest(CopSpeak_tRequest *r)

{
  if (r->bank != '\x02') {
    return gMasterAmbientLevel;
  }
  return gMasterFENarrationLevel;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_LoadNextRequest__Fv()
 // line 1115, offset 0x8009a634
	/* begin block 1 */
		// Start line: 1116
		// Start offset: 0x8009A634

		/* begin block 1.1 */
			// Start line: 1121
			// Start offset: 0x8009A65C
			// Variables:
		// 		struct CopSpeak_tRequest *r; // $s0
		// 		struct CopSpeak_tBankHeader *bnk; // $v0
		/* end block 1.1 */
		// End offset: 0x8009A808
		// End Line: 1184
	/* end block 1 */
	// End offset: 0x8009A814
	// End Line: 1184

	/* begin block 2 */
		// Start line: 2189
	/* end block 2 */
	// End Line: 2190

	/* begin block 3 */
		// Start line: 2205
	/* end block 3 */
	// End Line: 2206

	/* begin block 4 */
		// Start line: 2205
	/* end block 4 */
	// End Line: 2206

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_LoadNextRequest__Fv(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int bank;
  int iVar4;
  uint uVar5;
  CopSpeak_tRequest *r;
  
  bank = AudioMus_Buffered__Fv();
  iVar4 = AudioMus_Threshold__Fv();
  iVar3 = CopSpeak_gQueueLoad;
  if (bank < iVar4) {
    return;
  }
LAB_8009a65c:
  do {
    while( true ) {
      CopSpeak_gQueueLoad = iVar3;
      iVar3 = CopSpeak_gQueueLoad;
      if (CopSpeak_gQueueLoad == CopSpeak_gQueueHead) {
        return;
      }
      if (7 < (CopSpeak_gQueueLoad - (CopSpeak_gQueueReady + -0x40) & 0x3fU)) {
        return;
      }
      r = CopSpeak_gQueue + CopSpeak_gQueueLoad;
      bank = (int)CopSpeak_gQueue[CopSpeak_gQueueLoad].bank;
      if (-1 < bank) break;
LAB_8009a770:
      CopSpeak_Skip__Fv();
      iVar3 = CopSpeak_gQueueLoad;
    }
    if (bank == 3) {
      CopSpeak_gQueue[CopSpeak_gQueueLoad].buffer = -1;
      iVar3 = 0;
      if (CopSpeak_gQueueLoad < 0x3f) {
        iVar3 = CopSpeak_gQueueLoad + 1;
      }
      goto LAB_8009a65c;
    }
    cVar1 = CopSpeak_gQueue[CopSpeak_gQueueLoad].sfx;
    if (cVar1 == '\0') {
      if (CopSpeak_gQueue[CopSpeak_gQueueLoad].phrase < 0) {
code_r0x8009a70c:
        if ((cVar1 != '\0') ||
           (bank = AudioCmn_GetAsyncSfx__Fiib
                             ((int)CopSpeak_gQueue[iVar3].bank,
                              CopSpeak_gQueue[iVar3].offset + 0x4000,&DAT_00000001), bank < 0))
        goto LAB_8009a738;
        CopSpeak_gQueue[iVar3].buffer = -1;
      }
      else {
        bank = AudioCmn_GetAsyncSfx__Fiib
                         (bank,CopSpeak_gQueue[CopSpeak_gQueueLoad].phrase,&DAT_00000001);
        if (bank < 0) {
          cVar1 = CopSpeak_gQueue[iVar3].sfx;
          goto code_r0x8009a70c;
        }
        CopSpeak_gQueue[iVar3].buffer = -1;
      }
      goto code_r0x8009a7f8;
    }
LAB_8009a738:
    if ((((CopSpeak_gBuffer == (char *)0x0) ||
         (bank = CopSpeak_BankVolume__FP17CopSpeak_tRequest(r), bank == 0)) ||
        (CopSpeak_gQueue[iVar3].size == 0)) || (0x7ffc < CopSpeak_gQueue[iVar3].size))
    goto LAB_8009a770;
    CopSpeak_Alloc__FP17CopSpeak_tRequest(r);
    pcVar2 = CopSpeak_gBuffer;
    if (CopSpeak_gQueue[iVar3].buffer < 0) {
      return;
    }
    *(undefined4 *)(CopSpeak_gBuffer + CopSpeak_gQueue[iVar3].buffer) = 0x4c494146;
    uVar5 = FILE_read(CopSpeak_gQueue[iVar3].filehandle,CopSpeak_gQueue[iVar3].offset,
                      (uint)(pcVar2 + CopSpeak_gQueue[iVar3].buffer),CopSpeak_gQueue[iVar3].size,100
                      ,0);
    CopSpeak_gQueue[iVar3].ophandle = uVar5;
    CopSpeak_gHandleCount = CopSpeak_gHandleCount + '\x01';
    bank = FILE_operror(CopSpeak_gQueue[iVar3].ophandle);
    iVar3 = CopSpeak_gQueueLoad;
    if (bank < 1) {
code_r0x8009a7f8:
      iVar3 = 0;
      if (CopSpeak_gQueueLoad < 0x3f) {
        iVar3 = CopSpeak_gQueueLoad + 1;
      }
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_PlayNextRequest__Fv()
 // line 1191, offset 0x8009a828
	/* begin block 1 */
		// Start line: 1192
		// Start offset: 0x8009A828
		// Variables:
	// 		struct CopSpeak_tRequest *r; // $s0
	// 		int handle; // $a1
	/* end block 1 */
	// End offset: 0x8009A934
	// End Line: 1238

	/* begin block 2 */
		// Start line: 2355
	/* end block 2 */
	// End Line: 2356

	/* begin block 3 */
		// Start line: 2361
	/* end block 3 */
	// End Line: 2362

	/* begin block 4 */
		// Start line: 2361
	/* end block 4 */
	// End Line: 2362

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_PlayNextRequest__Fv(void)

{
  char cVar1;
  int iVar2;
  int patch;
  CopSpeak_tRequest *r;
  
  iVar2 = CopSpeak_gQueuePlay;
  r = CopSpeak_gQueue + CopSpeak_gQueuePlay;
  if (-1 < CopSpeak_gQueue[CopSpeak_gQueuePlay].bank) {
    if (CopSpeak_gQueue[CopSpeak_gQueuePlay].sfx == '\0') {
      if (CopSpeak_gSpchHandle != -1) {
        return;
      }
      CopSpeak_gCurrent.car = r->car;
      CopSpeak_gCurrent.buffer = CopSpeak_gQueue[CopSpeak_gQueuePlay].buffer;
      CopSpeak_gCurrent.offset = CopSpeak_gQueue[CopSpeak_gQueuePlay].offset;
      CopSpeak_gCurrent.size = CopSpeak_gQueue[CopSpeak_gQueuePlay].size;
      CopSpeak_gCurrent.filehandle = CopSpeak_gQueue[CopSpeak_gQueuePlay].filehandle;
      CopSpeak_gCurrent.ophandle = CopSpeak_gQueue[CopSpeak_gQueuePlay].ophandle;
      CopSpeak_gCurrent.phrase = CopSpeak_gQueue[CopSpeak_gQueuePlay].phrase;
      CopSpeak_gCurrent._28_4_ = *(undefined4 *)&CopSpeak_gQueue[CopSpeak_gQueuePlay].player;
      patch = CopSpeak_gQueue[CopSpeak_gQueuePlay].phrase;
      if (patch == -1) {
        cVar1 = CopSpeak_gQueue[CopSpeak_gQueuePlay].bank;
        patch = CopSpeak_gQueue[CopSpeak_gQueuePlay].offset + 0x4000;
      }
      else {
        cVar1 = CopSpeak_gQueue[CopSpeak_gQueuePlay].bank;
      }
      patch = AudioCmn_GetAsyncSfx__Fiib((int)cVar1,patch,&DAT_00000001);
      if ((-1 < patch) || (CopSpeak_gQueue[iVar2].bank == '\x03')) {
        CopSpeak_gSpchHandle = CopSpeak_Play__FP17CopSpeak_tRequesti(r,patch);
      }
    }
    CopSpeak_InitRequest__FP17CopSpeak_tRequest(r);
  }
  iVar2 = 0;
  if (CopSpeak_gQueuePlay < 0x3f) {
    iVar2 = CopSpeak_gQueuePlay + 1;
  }
  CopSpeak_gQueuePlay = iVar2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_Flush__Fv()
 // line 1257, offset 0x8009a944
	/* begin block 1 */
		// Start line: 1258
		// Start offset: 0x8009A944

		/* begin block 1.1 */
			// Start line: 1259
			// Start offset: 0x8009A944
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x8009A98C
		// End Line: 1260
	/* end block 1 */
	// End offset: 0x8009A98C
	// End Line: 1260

	/* begin block 2 */
		// Start line: 2508
	/* end block 2 */
	// End Line: 2509

	/* begin block 3 */
		// Start line: 2481
	/* end block 3 */
	// End Line: 2482

	/* begin block 4 */
		// Start line: 2481
	/* end block 4 */
	// End Line: 2482

	/* begin block 5 */
		// Start line: 2482
	/* end block 5 */
	// End Line: 2483

	/* begin block 6 */
		// Start line: 2482
	/* end block 6 */
	// End Line: 2483

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_Flush__Fv(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CopSpeak_gQueuePlay;
  if (CopSpeak_gQueuePlay != CopSpeak_gQueueHead) {
    do {
      CopSpeak_gQueue[iVar1].bank = -1;
      iVar2 = 0;
      if (iVar1 < 0x3f) {
        iVar2 = iVar1 + 1;
      }
      iVar1 = iVar2;
    } while (iVar2 != CopSpeak_gQueueHead);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_Server__Fv()
 // line 1271, offset 0x8009a994
	/* begin block 1 */
		// Start line: 1272
		// Start offset: 0x8009A994
		// Variables:
	// 		struct CopSpeak_tRequest *next; // $a0

		/* begin block 1.1 */
			// Start line: 1272
			// Start offset: 0x8009A994

			/* begin block 1.1.1 */
				// Start line: 1285
				// Start offset: 0x8009A9B0

				/* begin block 1.1.1.1 */
					// Start line: 1291
					// Start offset: 0x8009A9E4

					/* begin block 1.1.1.1.1 */
						// Start line: 1292
						// Start offset: 0x8009A9FC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1293
							// Start offset: 0x8009A9FC

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1294
								// Start offset: 0x8009AA10
								// Variables:
							// 		struct CopSpeak_tRequest *r; // $a0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8009AA58
							// End Line: 1299
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8009AA58
						// End Line: 1299
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009AA6C
					// End Line: 1302
				/* end block 1.1.1.1 */
				// End offset: 0x8009AA6C
				// End Line: 1302
			/* end block 1.1.1 */
			// End offset: 0x8009AA6C
			// End Line: 1302
		/* end block 1.1 */
		// End offset: 0x8009AA6C
		// End Line: 1302

		/* begin block 1.2 */
			// Start line: 1307
			// Start offset: 0x8009AA6C
			// Variables:
		// 		int i; // $s0
		/* end block 1.2 */
		// End offset: 0x8009AAF8
		// End Line: 1316

		/* begin block 1.3 */
			// Start line: 1331
			// Start offset: 0x8009AB6C

			/* begin block 1.3.1 */
				// Start line: 1332
				// Start offset: 0x8009AB84
				// Variables:
			// 		int noise; // $a0
			/* end block 1.3.1 */
			// End offset: 0x8009ABB0
			// End Line: 1340
		/* end block 1.3 */
		// End offset: 0x8009ABC8
		// End Line: 1343
	/* end block 1 */
	// End offset: 0x8009AC44
	// End Line: 1354

	/* begin block 2 */
		// Start line: 2497
	/* end block 2 */
	// End Line: 2498

	/* begin block 3 */
		// Start line: 2509
	/* end block 3 */
	// End Line: 2510

	/* begin block 4 */
		// Start line: 2509
	/* end block 4 */
	// End Line: 2510

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_Server__Fv(void)

{
  uint uVar1;
  int bank;
  CopSpeak_tRequest *pCVar2;
  int patch;
  int patch_00;
  
  if (CopSpeak_gSpchHandle != -1) {
    patch = CopSpeak_gCurrent.phrase;
    if (CopSpeak_gCurrent.phrase == -1) {
      patch = CopSpeak_gCurrent.offset + 0x4000;
    }
    AudioCmn_GetAsyncSfx__Fiib((int)CopSpeak_gCurrent.bank,patch,&DAT_00000001);
    uVar1 = SNDtimeremaining(CopSpeak_gSpchHandle);
    if ((int)uVar1 < 5) {
      if ((((CopSpeak_gQueuePlay != CopSpeak_gQueueHead) &&
           (CopSpeak_gQueue[CopSpeak_gQueuePlay].bank == '\x03')) &&
          (CopSpeak_gQueue[CopSpeak_gQueuePlay].phrase == 0x13)) &&
         (CopSpeak_gCurrent.car == (Car_tObj *)0x0)) {
        CopSpeak_gQueue[CopSpeak_gQueuePlay].phrase = 0x14;
      }
      CopSpeak_gSpchHandle = -1;
      CopSpeak_InitRequest__FP17CopSpeak_tRequest(&CopSpeak_gCurrent);
    }
  }
  patch = CopSpeak_gQueuePlay;
  if (CopSpeak_gQueuePlay != CopSpeak_gQueueHead) {
    do {
      if (((CopSpeak_gQueue[patch].sfx == '\0') &&
          (bank = (int)CopSpeak_gQueue[patch].bank, bank != 3)) && (-1 < bank)) {
        patch_00 = CopSpeak_gQueue[patch].phrase;
        if (patch_00 == -1) {
          patch_00 = CopSpeak_gQueue[patch].offset + 0x4000;
        }
        AudioCmn_GetAsyncSfx__Fiib(bank,patch_00,&DAT_00000001);
      }
      bank = 0;
      if (patch < 0x3f) {
        bank = patch + 1;
      }
      patch = bank;
    } while (bank != CopSpeak_gQueueHead);
  }
  if (CopSpeak_gQueueReady != CopSpeak_gQueueLoad) {
    CopSpeak_ReadyNextRequest__Fv();
  }
  pCVar2 = (CopSpeak_tRequest *)0x0;
  if (CopSpeak_gSpchHandle == -1) {
    if ((CopSpeak_gQueuePlay != CopSpeak_gQueueReady) &&
       (CopSpeak_gQueuePlay != CopSpeak_gQueueHead)) {
      pCVar2 = CopSpeak_gQueue;
      if (CopSpeak_gQueuePlay < 0x3f) {
        pCVar2 = CopSpeak_gQueue + CopSpeak_gQueuePlay + 1;
      }
    }
  }
  else {
    pCVar2 = &CopSpeak_gCurrent;
  }
  if ((pCVar2 == (CopSpeak_tRequest *)0x0) || (pCVar2->noise == '\0')) {
    CopSpeak_RadioStaticSquelch__Fv();
  }
  else {
    patch = 0x30;
    if (pCVar2->car != (Car_tObj *)0x0) {
      bank = (int)*(short *)((int)&(pCVar2->car->N).distToPlayer + 2) + 0x20;
      patch = 0x7f;
      if (bank < 0x80) {
        patch = bank;
      }
    }
    CopSpeak_RadioStaticActive__Fi(patch);
  }
  if ((((CopSpeak_gQueueReady == CopSpeak_gQueueHead) ||
       (CopSpeak_gQueue[CopSpeak_gQueueReady].sfx != '\0')) ||
      (CopSpeak_gQueue[CopSpeak_gQueueReady].car != CopSpeak_gQueue[CopSpeak_gQueuePlay].car)) &&
     ((CopSpeak_gQueuePlay != CopSpeak_gQueueReady && (CopSpeak_gQueuePlay != CopSpeak_gQueueHead)))
     ) {
    CopSpeak_PlayNextRequest__Fv();
  }
  CopSpeak_LoadNextRequest__Fv();
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CopSpeak_SfxQueued__Fv()
 // line 1359, offset 0x8009ac60
	/* begin block 1 */
		// Start line: 1360
		// Start offset: 0x8009AC60
		// Variables:
	// 		int count; // $a1
	// 		int chkQ; // $a0
	/* end block 1 */
	// End offset: 0x8009ACC4
	// End Line: 1370

	/* begin block 2 */
		// Start line: 2691
	/* end block 2 */
	// End Line: 2692

	/* begin block 3 */
		// Start line: 2697
	/* end block 3 */
	// End Line: 2698

	/* begin block 4 */
		// Start line: 2697
	/* end block 4 */
	// End Line: 2698

	/* begin block 5 */
		// Start line: 2699
	/* end block 5 */
	// End Line: 2700

/* WARNING: Unknown calling convention yet parameter storage is locked */

int CopSpeak_SfxQueued__Fv(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = CopSpeak_gQueuePlay;
  if (CopSpeak_gQueuePlay != CopSpeak_gQueueHead) {
    do {
      if ((-1 < CopSpeak_gQueue[iVar2].bank) && (CopSpeak_gQueue[iVar2].sfx != '\0')) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = 0;
      if (iVar2 < 0x3f) {
        iVar1 = iVar2 + 1;
      }
      iVar2 = iVar1;
    } while (iVar1 != CopSpeak_gQueueHead);
  }
  return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_ShowQueue__Fv()
 // line 1377, offset 0x8009accc
	/* begin block 1 */
		// Start line: 1378
		// Start offset: 0x8009ACCC
		// Variables:
	// 		int chkQ; // $s0
	// 		char bufferstat[66]; // stack offset -88
	/* end block 1 */
	// End offset: 0x8009AE88
	// End Line: 1405

	/* begin block 2 */
		// Start line: 2728
	/* end block 2 */
	// End Line: 2729

	/* begin block 3 */
		// Start line: 2736
	/* end block 3 */
	// End Line: 2737

	/* begin block 4 */
		// Start line: 2736
	/* end block 4 */
	// End Line: 2737

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_ShowQueue__Fv(void)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  char local_58;
  undefined local_57;
  undefined auStack86 [70];
  
  iVar2 = CopSpeak_gQueuePlay;
  local_58 = DAT_80055f84;
  local_57 = DAT_80055f85;
  memset(auStack86,0,0x40);
  if (iVar2 != CopSpeak_gQueueHead) {
    do {
      if (CopSpeak_gQueue[iVar2].bank == -1) {
        strcat(&local_58,&DAT_8013d0a8);
      }
      else {
        if (CopSpeak_gQueue[iVar2].sfx == '\0') {
          if (CopSpeak_gQueue[iVar2].bank == '\x03') {
            strcat(&local_58,&DAT_8013d0b0);
          }
          else {
            if (CopSpeak_gQueue[iVar2].phrase < 0) {
              if (CopSpeak_gQueue[iVar2].car == (Car_tObj *)0x0) {
                strcat(&local_58,&DAT_8013d0b8);
              }
              else {
                sprintf(&local_58,&DAT_8013d0bc,&local_58,(CopSpeak_gQueue[iVar2].car)->carIndex);
              }
            }
            else {
              strcat(&local_58,&DAT_8013d0b4);
            }
          }
        }
        else {
          strcat(&local_58,&DAT_8013d0ac);
        }
      }
      if ((iVar2 == CopSpeak_gQueueReady) || (iVar2 == CopSpeak_gQueueLoad)) {
        strcat(&local_58,&DAT_8013d0c4);
      }
      iVar3 = 0;
      if (iVar2 < 0x3f) {
        iVar3 = iVar2 + 1;
      }
      iVar2 = iVar3;
    } while (iVar3 != CopSpeak_gQueueHead);
  }
  sVar1 = strlen(&local_58);
  if (sVar1 != 0) {
    Font_TextXY__FPcii(&local_58,10,6);
    iVar2 = textpixels(&local_58);
    Hud_FBuildF4__FiiiiiUlcc(1,8,9,iVar2 + 5,9,(ulong)&DAT_00190505,0,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CopSpeak_Debug__Fv()
 // line 1509, offset 0x8009ae9c
	/* begin block 1 */
		// Start line: 1510
		// Start offset: 0x8009AE9C
	/* end block 1 */
	// End offset: 0x8009AE9C
	// End Line: 1510

	/* begin block 2 */
		// Start line: 2899
	/* end block 2 */
	// End Line: 2900

	/* begin block 3 */
		// Start line: 3004
	/* end block 3 */
	// End Line: 3005

	/* begin block 4 */
		// Start line: 3004
	/* end block 4 */
	// End Line: 3005

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CopSpeak_Debug__Fv(void)

{
  CopSpeak_ShowQueue__Fv();
  return;
}





