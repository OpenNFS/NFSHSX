#include "NFS4.H"
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

void CopSpeak_RadioStaticInit__Fv(void)
{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar3 = &CopSpeak_gStaticHandle;
  do {
    *puVar3 = 0xffffffff;
    puVar1 = &CopSpeak_gStaticPatch + iVar2;
    iVar2 = iVar2 + 1;
    *puVar1 = 0xff;
    puVar3 = puVar3 + 1;
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

void CopSpeak_RadioStaticActive__Fi(int noise)
{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_38;
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
    piVar4 = &CopSpeak_gStaticHandle + iVar6;
    if (*piVar4 == -1) {
      iVar3 = AudioCmn_GetAsyncSfx__Fiib(2,(int)*pcVar5 + 0x2f,0);
      if (-1 < iVar3) {
        SNDplaysetdef(&local_38);
        local_34 = (undefined)iVar3;
        local_38 = 0;
        local_30 = (undefined)(gMasterFENarrationLevel * noise * 0x81 >> 0xe);
        iVar3 = SNDplay(&local_38);
        *piVar4 = iVar3;
        *pcVar5 = -1;
        if (*piVar4 < 0) {
          iVar6 = iVar6 + 1;
          AudioClc_SndError__Fi(*piVar4);
          bVar1 = iVar6 < 2;
          goto LAB_80099460;
        }
      }
    }
    else {
      iVar3 = SNDover();
      if (iVar3 != 0) {
        *piVar4 = -1;
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

void CopSpeak_RadioStaticSquelch__Fv(void)
{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &CopSpeak_gStaticHandle;
  do {
    if (*piVar1 != -1) {
      SNDstop();
      *piVar1 = -1;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
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

void CopSpeak_SilenceCop__FP8Car_tObji(Car_tObj *car,int playerIndex)
{
  if ((car == (Car_tObj *)0x0) ||
     (((uint)DAT_80111f20 == playerIndex && (car == CopSpeak_gCurrent)))) {
    if (iGp00000b84 != -1) {
      SNDvol(iGp00000b84,0);
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

void CopSpeak_Alloc__FP17CopSpeak_tRequest(CopSpeak_tRequest *r)
{
  short sVar1;
  short sVar2;
  
  if (iGp00000b90 == iGp00000b8c) {
    sGp00000b9c = 0;
    sGp00000ba2 = 0;
    sGp00000b9e = 0;
    sGp00000ba0 = 0x7ffc;
  }
  sVar2 = sGp00000b9e;
  sVar1 = sGp00000b9c;
  if (r->size <= (int)sGp00000ba0 - (int)sGp00000b9e) {
    r->buffer = (int)sGp00000b9e;
    sGp00000b9e = sGp00000b9e + *(short *)&r->size;
    return;
  }
  if (r->size <= (int)sGp00000b9c) {
    r->buffer = 0;
    sGp00000b9c = 0;
    sGp00000b9e = *(undefined2 *)&r->size;
    sGp00000ba0 = sVar1;
    sGp00000ba2 = sVar2;
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

void CopSpeak_Free__FP17CopSpeak_tRequest(CopSpeak_tRequest *r)
{
  int iVar1;
  int iVar2;
  
  iVar1 = r->buffer;
  if ((-1 < iVar1) && (iVar2 = r->size, 0 < iVar2)) {
    if ((int)sGp00000ba2 == 0) {
      if (iVar1 + iVar2 == (int)sGp00000b9e) {
        r->buffer = -1;
        sGp00000b9e = 0;
        return;
      }
      sGp00000b9c = *(short *)&r->buffer + *(short *)&r->size;
    }
    else {
      if (iVar1 + iVar2 == (int)sGp00000ba2) {
        sGp00000ba2 = 0;
        uGp00000ba0 = 0x7ffc;
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

void CopSpeak_ReadyNextRequest__Fv(void)
{
  char cVar1;
  bool bVar2;
  int iVar3;
  int bank;
  int iVar4;
  undefined4 uVar5;
  int size;
  int *piVar6;
  
  iVar3 = iGp00000b90 * 0x20;
  bVar2 = true;
  if (*(int *)(&DAT_80111f28 + iVar3) < 0) {
    if (((&DAT_80111f41)[iVar3] != '\0') ||
       ((-1 < *(int *)(&DAT_80111f3c + iVar3) && (-1 < (char)(&DAT_80111f42)[iVar3])))) {
      AudioCmn_LoadAsyncSfx__FiiPvi
                ((int)(char)(&DAT_80111f42)[iVar3],*(int *)(&DAT_80111f3c + iVar3),(void *)0x0,0);
    }
    goto LAB_800999e0;
  }
  bank = FILE_opstatus(*(undefined4 *)(&DAT_80111f38 + iVar3));
  if (bank == 0) {
    return;
  }
  iVar4 = FILE_completeop(*(undefined4 *)(&DAT_80111f38 + iVar3));
  cGp00000b34 = cGp00000b34 + -1;
  piVar6 = (int *)(iGp00000b98 + *(int *)(&DAT_80111f28 + iVar3));
  bVar2 = *piVar6 == 0x6c4b4e42 && (iVar4 == *(int *)(&DAT_80111f30 + iVar3) && bank == 1);
  if ((*(char *)(piVar6 + 1) != '\x04') && (*(char *)(piVar6 + 1) != '\x02')) {
    bVar2 = false;
  }
  if (!bVar2) {
    if (((&DAT_80111f41)[iVar3] != '\0') && (-1 < (int)(char)(&DAT_80111f42)[iVar3])) {
      AudioCmn_LoadAsyncSfx__FiiPvi
                ((int)(char)(&DAT_80111f42)[iVar3],*(int *)(&DAT_80111f3c + iVar3),(void *)0x0,0);
    }
    *piVar6 = 0x4c494146;
    uVar5 = FILE_read(*(undefined4 *)(&DAT_80111f34 + iVar3),*(undefined4 *)(&DAT_80111f2c + iVar3),
                      iGp00000b98 + *(int *)(&DAT_80111f28 + iVar3),
                      *(undefined4 *)(&DAT_80111f30 + iVar3),0,0);
    *(undefined4 *)(&DAT_80111f38 + iVar3) = uVar5;
    cGp00000b34 = cGp00000b34 + '\x01';
    FILE_operror(*(undefined4 *)(&DAT_80111f38 + iVar3));
    goto LAB_800999e0;
  }
  bank = (int)(char)(&DAT_80111f42)[iVar3];
  if (-1 < bank) {
    if (((&DAT_80111f41)[iVar3] == '\0') && (*(int *)(&DAT_80111f3c + iVar3) < 0)) {
      bank = AudioCmn_GetAsyncSfx__Fiib(bank,*(int *)(&DAT_80111f2c + iVar3) + 0x4000,1);
      if (bank == -1) {
        cVar1 = (&DAT_80111f42)[iVar3];
        size = *(int *)(&DAT_80111f30 + iVar3);
        iVar4 = *(int *)(&DAT_80111f28 + iVar3);
        bank = *(int *)(&DAT_80111f2c + iVar3) + 0x4000;
LAB_8009997c:
        AudioCmn_LoadAsyncSfx__FiiPvi((int)cVar1,bank,(void *)(iGp00000b98 + iVar4),size);
      }
    }
    else {
      bank = AudioCmn_GetAsyncSfx__Fiib(bank,*(int *)(&DAT_80111f3c + iVar3),1);
      if (bank == -1) {
        cVar1 = (&DAT_80111f42)[iVar3];
        bank = *(int *)(&DAT_80111f3c + iVar3);
        iVar4 = *(int *)(&DAT_80111f28 + iVar3);
        size = *(int *)(&DAT_80111f30 + iVar3);
        goto LAB_8009997c;
      }
    }
  }
  *piVar6 = 0x4c494146;
  CopSpeak_Free__FP17CopSpeak_tRequest((CopSpeak_tRequest *)(&CopSpeak_gQueue + iVar3));
LAB_800999e0:
  iVar3 = iGp00000b90;
  if ((bVar2) && (iVar3 = 0, iGp00000b90 < 0x3f)) {
    iVar3 = iGp00000b90 + 1;
  }
  iGp00000b90 = iVar3;
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

void CopSpeak_Cancel__Fv(void)
{
  if (iGp00000b90 != iGp00000b8c) {
    do {
      CopSpeak_ReadyNextRequest__Fv();
      systemtask(0);
    } while (iGp00000b90 != iGp00000b8c);
  }
  if (iGp00000b84 != -1) {
    SNDstop();
  }
  CopSpeak_RadioStaticSquelch__Fv();
  iGp00000b84 = 0xffffffff;
  CopSpeak_InitRequest__FP17CopSpeak_tRequest((CopSpeak_tRequest *)&CopSpeak_gCurrent);
  uGp00000b7c = 0;
  uGp00000b80 = 0;
  iGp00000b8c = 0;
  iGp00000b90 = 0;
  uGp00000b9c = 0;
  uGp00000b9e = 0;
  uGp00000ba0 = 0x7ffc;
  uGp00000ba2 = 0;
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

void CopSpeak_CleanUp__Fv(void)
{
  undefined4 *puVar1;
  int iVar2;
  
  CopSpeak_Stop__Fv();
  iVar2 = 0;
  puVar1 = &Copspeak_gBank;
  do {
    if (puVar1[1] != 0) {
      FILE_closesync(*puVar1,100);
      puVar1[1] = 0;
    }
    if (puVar1[2] != 0) {
      purgememadr();
      puVar1[2] = 0;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 4);
  if (iGp00000b98 != 0) {
    iGp00000b98 = 0;
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

void CopSpeak_InitVars__Fv(void)
{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &Copspeak_gBank;
  do {
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 4);
  uGp00000b84 = 0xffffffff;
  uGp00000b98 = 0;
  uGp00000b7c = 0;
  uGp00000b8c = 0;
  uGp00000b90 = 0;
  uGp00000b80 = 0;
  uGp00000b94 = 0;
  uGp00000b9c = 0;
  uGp00000ba2 = 0;
  uGp00000b9e = 0;
  uGp00000ba0 = 0x7ffc;
  CopSpeak_InitRequest__FP17CopSpeak_tRequest((CopSpeak_tRequest *)&CopSpeak_gCurrent);
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

void CopSpeak_DirectRequest__FillP8Car_tObjPc( (int filehandle,long offset,long size,Car_tObj *car,char *name)
{
  int iVar1;
  int iVar2;
  
  iVar1 = iGp00000b7c * 0x20;
  iVar2 = 0;
  if (iGp00000b7c < 0x3f) {
    iVar2 = iGp00000b7c + 1;
  }
  if (iVar2 != iGp00000b80) {
    CopSpeak_InitRequest__FP17CopSpeak_tRequest((CopSpeak_tRequest *)(&CopSpeak_gQueue + iVar1));
    *(int *)(&DAT_80111f34 + iVar1) = filehandle;
    *(long *)(&DAT_80111f2c + iVar1) = offset;
    *(long *)(&DAT_80111f30 + iVar1) = size;
    (&DAT_80111f43)[iVar1] = 0x7f;
    ((CopSpeak_tRequest *)(&CopSpeak_gQueue + iVar1))->car = car;
    iGp00000b7c = iVar2;
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

void CopSpeak_GenericBankRequest__FiP8Car_tObj(int patch,Car_tObj *car)
{
  int iVar1;
  int iVar2;
  
  iVar1 = iGp00000b7c * 0x20;
  iVar2 = 0;
  if (iGp00000b7c < 0x3f) {
    iVar2 = iGp00000b7c + 1;
  }
  if ((iVar2 != iGp00000b80) && (iVar2 != iGp00000b90)) {
    CopSpeak_InitRequest__FP17CopSpeak_tRequest((CopSpeak_tRequest *)(&CopSpeak_gQueue + iVar1));
    (&DAT_80111f42)[iVar1] = 3;
    *(int *)(&DAT_80111f3c + iVar1) = patch;
    (&DAT_80111f43)[iVar1] = 0x7f;
    ((CopSpeak_tRequest *)(&CopSpeak_gQueue + iVar1))->car = car;
    iGp00000b7c = iVar2;
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
			// 		char *Generic[1]; // stack offset -56

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
					// 		char *timbre[2]; // stack offset -64
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

void CopSpeak_StartUp__Fv(void)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int local_c0;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined **ppuVar10;
  char *pcVar11;
  char acStack184 [104];
  char acStack80 [16];
  undefined *local_40 [2];
  char *local_38;
  undefined4 local_34;
  int local_30 [2];
  
  CopSpeak_InitVars__Fv();
  CopSpeak_RadioStaticInit__Fv();
  sprintf(acStack184,"%szzzwzzz.viv",0);
  iVar2 = loadbigfileheader(acStack184,0x10);
  if (iVar2 != 0) {
    DAT_80111ec0 = 0;
    while (iVar3 = strcmp(&GameSetup_gCarNames + DAT_80111ec0 * 5,"BAD!"), iVar3 != 0) {
      DAT_80111ec0 = DAT_80111ec0 + 1;
    }
    iVar3 = 0;
    ppuVar10 = local_40 + 2;
    DAT_80111ec0 = DAT_80111ec0 * 2 + 1;
    DAT_80111ebc = reservememadr("ocar index",DAT_80111ec0 * 8);
    local_38 = "rain.bnk";
    do {
      iVar7 = iVar3 * 8;
      local_c0 = DAT_80111ebc + iVar7 + 4;
      iVar4 = locatebigentryz(iVar2,*ppuVar10,0,DAT_80111ebc + iVar7,local_c0);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar7 + DAT_80111ebc) = 0;
        *(undefined4 *)(iVar7 + DAT_80111ebc + 4) = 0;
      }
      iVar3 = iVar3 + 1;
      ppuVar10 = ppuVar10 + 1;
    } while (iVar3 < 1);
    uVar9 = 0;
    iVar3 = 8;
    while ((int)uVar9 < DAT_80111ec0 + -1) {
      local_c0 = (int)(uVar9 + (uVar9 >> 0x1f)) >> 1;
      local_40[0] = &DAT_8013d08c;
      local_40[1] = &DAT_8013d094;
      sprintf(acStack80,"%.4s%.4s.bnk",&GameSetup_gCarNames + local_c0 * 5,
              local_40[uVar9 + local_c0 * -2]);
      local_c0 = DAT_80111ebc + iVar3 + 4;
      iVar4 = locatebigentryz(iVar2,acStack80,0);
      if (iVar4 == 0) {
        *(undefined4 *)(uVar9 * 8 + DAT_80111ebc + 8) = 0;
        *(undefined4 *)(uVar9 * 8 + DAT_80111ebc + 0xc) = 0;
      }
      iVar3 = iVar3 + 8;
      uVar9 = uVar9 + 1;
    }
    purgememadr(iVar2);
    DAT_80111eb8 = FILE_opensync(acStack184,1,100,&DAT_80111eb4,local_c0);
  }
  iGp00000b88 = 0;
  sprintf(acStack184,"%szzzw%s.viv",0,&GameSetup_gTrackNames);
  iVar2 = loadbigfileheader(acStack184,0x10);
  if (iVar2 == 0) {
    sprintf(acStack184,"%szzzwcst.viv",0);
    iVar2 = loadbigfileheader(acStack184,0x10);
    if (iVar2 == 0) goto LAB_8009a07c;
  }
  DAT_80111eb0 = bigcount(iVar2);
  DAT_80111eac = reservememadr("trck index",DAT_80111eb0 << 3,0);
  iGp00000b88 = DAT_80111eb0;
  iVar3 = 0;
  if (0 < DAT_80111eb0) {
    do {
      local_c0 = DAT_80111eac + iVar3 * 8;
      locatebigentry(iVar2,0,iVar3,local_c0,local_c0 + 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_80111eb0);
  }
  purgememadr(iVar2);
  DAT_80111ea8 = FILE_opensync(acStack184,1,100,&Copspeak_gBank);
LAB_8009a07c:
  if (DAT_801132cc == 1) {
    puVar6 = &DAT_8013d0a0;
  }
  else {
    if (DAT_801132cc == 2) {
      puVar6 = &DAT_8013d09c;
    }
    else {
      puVar6 = &DAT_8013d0a4;
    }
  }
  sprintf(acStack184,"%szzzx%s.viv",0,puVar6);
  iVar2 = loadbigfileheader(acStack184,0x10);
  if (iVar2 != 0) {
    iVar3 = locatebigentryz(iVar2,"oneshots.txt",0,local_40 + 3,local_30);
    if ((iVar3 != 0) && (local_30[0] != 0)) {
      pcVar5 = (char *)reservememadr("copspeak temp",local_30[0],0x10);
      DAT_80111ec8 = FILE_opensync(acStack184,1,100,&DAT_80111ec4);
      FILE_readsync(0,local_34,pcVar5,local_30[0],100);
      bVar1 = false;
      DAT_80111ed0 = 0;
      pcVar8 = pcVar5;
      while (pcVar8 < pcVar5 + local_30[0]) {
        if (*pcVar8 == '\"') {
          if (bVar1) {
            DAT_80111ed0 = DAT_80111ed0 + 1;
          }
          bVar1 = !bVar1;
        }
        pcVar8 = pcVar8 + 1;
      }
      iVar3 = 0;
      DAT_80111ecc = reservememadr("1sht index",DAT_80111ed0 << 3);
      bVar1 = false;
      pcVar8 = pcVar5;
      pcVar11 = pcVar5;
      if (pcVar5 < pcVar5 + local_30[0]) {
        do {
          if (*pcVar8 == '\"') {
            if (bVar1) {
              *pcVar8 = '\0';
              local_c0 = DAT_80111ecc + iVar3 * 8;
              local_c0 = locatebigentryz(iVar2,pcVar11,0,local_c0,local_c0 + 4);
              if (local_c0 == 0) {
                *(undefined4 *)(iVar3 * 8 + DAT_80111ecc + 4) = 0;
              }
              iVar3 = iVar3 + 1;
            }
            else {
              pcVar11 = pcVar8 + 1;
            }
            bVar1 = (bool)(bVar1 ^ 1);
          }
          pcVar8 = pcVar8 + 1;
        } while (pcVar8 < pcVar5 + local_30[0]);
      }
      purgememadr(pcVar5);
    }
    purgememadr(iVar2);
  }
  pcGp00000b98 = Platform_GetDCTBuffer__FiPc(0x8000,"CopSpeakBuf");
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

int CopSpeak_GetEnginePatch__Fii(int type,int timbre)
{
  int iVar1;
  
  iVar1 = type * 2 + timbre + 1;
  if (*(int *)(iVar1 * 8 + DAT_80111ebc + 4) == 0) {
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

int CopSpeak_Play__FP17CopSpeak_tRequesti(CopSpeak_tRequest *r,int handle)
{
  int iVar1;
  int iVar2;
  int local_28;
  undefined local_24;
  undefined local_21;
  undefined local_20;
  undefined local_1f;
  bool local_1d;
  undefined2 local_18;
  
  SNDplaysetdef(&local_28);
  if (r->bank == '\x03') {
    local_24 = 0;
    local_28 = r->phrase;
  }
  else {
    local_24 = (undefined)handle;
    local_28 = 0;
  }
  iVar2 = 0x30;
  if (r->car != (Car_tObj *)0x0) {
    iVar1 = (int)*(short *)((int)&(r->car->N).distToPlayer + 2) + 0x20;
    iVar2 = 0x7f;
    if (iVar1 < 0x80) {
      iVar2 = iVar1;
    }
  }
  if (r->filehandle == 0) {
    iVar2 = (gMasterFENarrationLevel * 0x81 >> 7) << 1;
    local_20 = 0x7f;
    if (iVar2 < 0x80) {
      local_20 = (char)iVar2;
    }
  }
  else {
    local_20 = (undefined)(gMasterFENarrationLevel * (0x80 - (iVar2 >> 2)) * 0x81 >> 0xe);
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
  iVar2 = SNDplay(&local_28);
  return iVar2;


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

void CopSpeak_Skip__Fv(void)
{
  int iVar1;
  
  iVar1 = CopSpeak_gQueueLoad * 0x20;
  *(undefined4 *)(&DAT_80111f28 + iVar1) = 0xffffffff;
  *(undefined4 *)(&DAT_80111f3c + iVar1) = 0xffffffff;
  if ((&DAT_80111f41)[iVar1] != '\0') {
    AudioCmn_LoadAsyncSfx__FiiPvi((int)(char)(&DAT_80111f42)[iVar1],-1,(void *)0x0,0);
  }
  iVar1 = 0;
  if (CopSpeak_gQueueLoad < 0x3f) {
    iVar1 = CopSpeak_gQueueLoad + 1;
  }
  CopSpeak_gQueueLoad = iVar1;
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

int CopSpeak_Request__FP17CopSpeak_tRequest(CopSpeak_tRequest *r)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = CopSpeak_gQueueHead;
  iVar2 = 0;
  if (CopSpeak_gQueueHead < 0x3f) {
    iVar2 = CopSpeak_gQueueHead + 1;
  }
  if (iVar2 != 0) {
    iVar2 = (int)r->bank;
    if (((((&DAT_80111ea8)[iVar2 * 4] != 0) && ((&DAT_80111eac)[iVar2 * 4] != 0)) &&
        (-1 < r->phrase)) && (r->phrase <= (int)(&DAT_80111eb0)[iVar2 * 4])) {
      r->filehandle = (&Copspeak_gBank)[iVar2 * 4];
      r->offset = *(int *)(r->phrase * 8 + (&DAT_80111eac)[iVar2 * 4]);
      iVar2 = *(int *)(r->phrase * 8 + (&DAT_80111eac)[iVar2 * 4] + 4);
      r->size = iVar2;
      if (iVar2 != 0) {
        iVar2 = iVar1 * 0x20;
        iVar3 = r->buffer;
        iVar4 = r->offset;
        iVar5 = r->size;
        *(Car_tObj **)(&CopSpeak_gQueue + iVar2) = r->car;
        *(int *)(&DAT_80111f28 + iVar2) = iVar3;
        *(int *)(&DAT_80111f2c + iVar2) = iVar4;
        *(int *)(&DAT_80111f30 + iVar2) = iVar5;
        iVar3 = r->ophandle;
        iVar4 = r->phrase;
        uVar6 = *(undefined4 *)&r->player;
        *(int *)(&DAT_80111f34 + iVar2) = r->filehandle;
        *(int *)(&DAT_80111f38 + iVar2) = iVar3;
        *(int *)(&DAT_80111f3c + iVar2) = iVar4;
        *(undefined4 *)(&DAT_80111f40 + iVar2) = uVar6;
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

void CopSpeak_LoadNextRequest__Fv(void)
{
  char cVar1;
  int bank;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  bank = AudioMus_Buffered__Fv();
  iVar2 = AudioMus_Threshold__Fv();
  iVar4 = CopSpeak_gQueueLoad;
  if (bank < iVar2) {
    return;
  }
LAB_8009a65c:
  do {
    while( true ) {
      CopSpeak_gQueueLoad = iVar4;
      if (CopSpeak_gQueueLoad == CopSpeak_gQueueHead) {
        return;
      }
      iVar4 = CopSpeak_gQueueLoad * 0x20;
      if (7 < (CopSpeak_gQueueLoad + 0x40U & 0x3f)) {
        return;
      }
      bank = (int)(char)(&DAT_80111f42)[iVar4];
      if (-1 < bank) break;
LAB_8009a770:
      CopSpeak_Skip__Fv();
      iVar4 = CopSpeak_gQueueLoad;
    }
    if (bank == 3) {
      *(undefined4 *)(&DAT_80111f28 + iVar4) = 0xffffffff;
      iVar4 = 0;
      if (CopSpeak_gQueueLoad < 0x3f) {
        iVar4 = CopSpeak_gQueueLoad + 1;
      }
      goto LAB_8009a65c;
    }
    cVar1 = (&DAT_80111f41)[iVar4];
    if (cVar1 == '\0') {
      if (*(int *)(&DAT_80111f3c + iVar4) < 0) {
code_r0x8009a70c:
        if ((cVar1 != '\0') ||
           (bank = AudioCmn_GetAsyncSfx__Fiib
                             ((int)(char)(&DAT_80111f42)[iVar4],
                              *(int *)(&DAT_80111f2c + iVar4) + 0x4000,1), bank < 0))
        goto LAB_8009a738;
        *(undefined4 *)(&DAT_80111f28 + iVar4) = 0xffffffff;
      }
      else {
        bank = AudioCmn_GetAsyncSfx__Fiib(bank,*(int *)(&DAT_80111f3c + iVar4),1);
        if (bank < 0) {
          cVar1 = (&DAT_80111f41)[iVar4];
          goto code_r0x8009a70c;
        }
        *(undefined4 *)(&DAT_80111f28 + iVar4) = 0xffffffff;
      }
      goto code_r0x8009a7f8;
    }
LAB_8009a738:
    if ((((true) ||
         (bank = CopSpeak_BankVolume__FP17CopSpeak_tRequest
                           ((CopSpeak_tRequest *)(&CopSpeak_gQueue + iVar4)), bank == 0)) ||
        (*(int *)(&DAT_80111f30 + iVar4) == 0)) || (0x7ffc < *(int *)(&DAT_80111f30 + iVar4)))
    goto LAB_8009a770;
    CopSpeak_Alloc__FP17CopSpeak_tRequest((CopSpeak_tRequest *)(&CopSpeak_gQueue + iVar4));
    if ((int)*(undefined4 **)(&DAT_80111f28 + iVar4) < 0) {
      return;
    }
    **(undefined4 **)(&DAT_80111f28 + iVar4) = 0x4c494146;
    uVar3 = FILE_read(*(undefined4 *)(&DAT_80111f34 + iVar4),*(undefined4 *)(&DAT_80111f2c + iVar4),
                      *(undefined4 *)(&DAT_80111f28 + iVar4),*(undefined4 *)(&DAT_80111f30 + iVar4),
                      100,0);
    *(undefined4 *)(&DAT_80111f38 + iVar4) = uVar3;
    CopSpeak_gHandleCount = CopSpeak_gHandleCount + '\x01';
    bank = FILE_operror(*(undefined4 *)(&DAT_80111f38 + iVar4));
    iVar4 = CopSpeak_gQueueLoad;
    if (bank < 1) {
code_r0x8009a7f8:
      iVar4 = 0;
      if (CopSpeak_gQueueLoad < 0x3f) {
        iVar4 = CopSpeak_gQueueLoad + 1;
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

void CopSpeak_PlayNextRequest__Fv(void)
{
  char cVar1;
  int iVar2;
  int patch;
  CopSpeak_tRequest *r;
  
  iVar2 = iGp00000b80 * 0x20;
  r = (CopSpeak_tRequest *)(&CopSpeak_gQueue + iVar2);
  if (-1 < (char)(&DAT_80111f42)[iVar2]) {
    if ((&DAT_80111f41)[iVar2] == '\0') {
      if (iGp00000b84 != -1) {
        return;
      }
      CopSpeak_gCurrent = r->car;
      DAT_80111f08 = *(undefined4 *)(&DAT_80111f28 + iVar2);
      DAT_80111f0c = *(undefined4 *)(&DAT_80111f2c + iVar2);
      DAT_80111f10 = *(undefined4 *)(&DAT_80111f30 + iVar2);
      DAT_80111f14 = *(undefined4 *)(&DAT_80111f34 + iVar2);
      DAT_80111f18 = *(undefined4 *)(&DAT_80111f38 + iVar2);
      DAT_80111f1c = *(undefined4 *)(&DAT_80111f3c + iVar2);
      _DAT_80111f20 = *(undefined4 *)(&DAT_80111f40 + iVar2);
      patch = *(int *)(&DAT_80111f3c + iVar2);
      if (patch == -1) {
        cVar1 = (&DAT_80111f42)[iVar2];
        patch = *(int *)(&DAT_80111f2c + iVar2) + 0x4000;
      }
      else {
        cVar1 = (&DAT_80111f42)[iVar2];
      }
      patch = AudioCmn_GetAsyncSfx__Fiib((int)cVar1,patch,1);
      if ((-1 < patch) || ((&DAT_80111f42)[iVar2] == '\x03')) {
        iGp00000b84 = CopSpeak_Play__FP17CopSpeak_tRequesti(r,patch);
      }
    }
    CopSpeak_InitRequest__FP17CopSpeak_tRequest(r);
  }
  iVar2 = 0;
  if (iGp00000b80 < 0x3f) {
    iVar2 = iGp00000b80 + 1;
  }
  iGp00000b80 = iVar2;
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

void CopSpeak_Flush__Fv(void)
{
  int iVar1;
  int iVar2;
  
  iVar1 = iGp00000b80;
  if (iGp00000b80 != iGp00000b7c) {
    do {
      (&DAT_80111f42)[iVar1 * 0x20] = 0xff;
      iVar2 = 0;
      if (iVar1 < 0x3f) {
        iVar2 = iVar1 + 1;
      }
      iVar1 = iVar2;
    } while (iVar2 != iGp00000b7c);
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

void CopSpeak_Server__Fv(void)
{
  int patch;
  int iVar1;
  int bank;
  int *piVar2;
  int patch_00;
  
  if (iGp00000b84 != -1) {
    patch = DAT_80111f1c;
    if (DAT_80111f1c == -1) {
      patch = DAT_80111f0c + 0x4000;
    }
    AudioCmn_GetAsyncSfx__Fiib(0,patch,1);
    patch = SNDtimeremaining(iGp00000b84);
    if (patch < 5) {
      patch = iGp00000b80 * 0x20;
      if ((((iGp00000b80 != iGp00000b7c) && ((&DAT_80111f42)[patch] == '\x03')) &&
          (*(int *)(&DAT_80111f3c + patch) == 0x13)) && (CopSpeak_gCurrent == 0)) {
        *(undefined4 *)(&DAT_80111f3c + patch) = 0x14;
      }
      iGp00000b84 = -1;
      CopSpeak_InitRequest__FP17CopSpeak_tRequest((CopSpeak_tRequest *)&CopSpeak_gCurrent);
    }
  }
  patch = iGp00000b80;
  if (iGp00000b80 != iGp00000b7c) {
    do {
      iVar1 = patch * 0x20;
      if ((((&DAT_80111f41)[iVar1] == '\0') && (bank = (int)(char)(&DAT_80111f42)[iVar1], bank != 3)
          ) && (-1 < bank)) {
        patch_00 = *(int *)(&DAT_80111f3c + iVar1);
        if (patch_00 == -1) {
          patch_00 = *(int *)(&DAT_80111f2c + iVar1) + 0x4000;
        }
        AudioCmn_GetAsyncSfx__Fiib(bank,patch_00,1);
      }
      iVar1 = 0;
      if (patch < 0x3f) {
        iVar1 = patch + 1;
      }
      patch = iVar1;
    } while (iVar1 != iGp00000b7c);
  }
  if (iGp00000b90 != iGp00000b8c) {
    CopSpeak_ReadyNextRequest__Fv();
  }
  piVar2 = (int *)0x0;
  if (iGp00000b84 == -1) {
    if ((iGp00000b80 != iGp00000b90) && (iGp00000b80 != iGp00000b7c)) {
      piVar2 = (int *)&CopSpeak_gQueue;
      if (iGp00000b80 < 0x3f) {
        piVar2 = (int *)(&CopSpeak_gQueue + (iGp00000b80 + 1) * 0x20);
      }
    }
  }
  else {
    piVar2 = &CopSpeak_gCurrent;
  }
  if ((piVar2 == (int *)0x0) || (*(char *)((int)piVar2 + 0x1f) == '\0')) {
    CopSpeak_RadioStaticSquelch__Fv();
  }
  else {
    patch = 0x30;
    if (*piVar2 != 0) {
      iVar1 = (int)*(short *)(*piVar2 + 0x8e) + 0x20;
      patch = 0x7f;
      if (iVar1 < 0x80) {
        patch = iVar1;
      }
    }
    CopSpeak_RadioStaticActive__Fi(patch);
  }
  if ((((iGp00000b90 == iGp00000b7c) || ((&DAT_80111f41)[iGp00000b90 * 0x20] != '\0')) ||
      (*(int *)(&CopSpeak_gQueue + iGp00000b90 * 0x20) !=
       *(int *)(&CopSpeak_gQueue + iGp00000b80 * 0x20))) &&
     ((iGp00000b80 != iGp00000b90 && (iGp00000b80 != iGp00000b7c)))) {
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

int CopSpeak_SfxQueued__Fv(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = iGp00000b80;
  if (iGp00000b80 != iGp00000b7c) {
    do {
      if ((-1 < (char)(&DAT_80111f42)[iVar2 * 0x20]) && ((&DAT_80111f41)[iVar2 * 0x20] != '\0')) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = 0;
      if (iVar2 < 0x3f) {
        iVar1 = iVar2 + 1;
      }
      iVar2 = iVar1;
    } while (iVar1 != iGp00000b7c);
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

void CopSpeak_ShowQueue__Fv(void)
{
  int iVar1;
  size_t sVar2;
  int iVar3;
  char local_58;
  undefined local_57;
  undefined auStack86 [70];
  
  iVar3 = iGp00000b80;
  local_58 = '\0';
  local_57 = 0;
  memset(auStack86,0,0x40);
  if (iVar3 != iGp00000b7c) {
    do {
      iVar1 = iVar3 * 0x20;
      if ((&DAT_80111f42)[iVar1] == -1) {
        strcat(&local_58,"x");
      }
      else {
        if ((&DAT_80111f41)[iVar1] == '\0') {
          if ((&DAT_80111f42)[iVar1] == '\x03') {
            strcat(&local_58,".");
          }
          else {
            if (*(int *)(&DAT_80111f3c + iVar1) < 0) {
              if (*(int *)(&CopSpeak_gQueue + iVar1) == 0) {
                strcat(&local_58,"D");
              }
              else {
                sprintf(&local_58,"%s%d",&local_58,
                        *(undefined4 *)(*(int *)(&CopSpeak_gQueue + iVar1) + 0x254));
              }
            }
            else {
              strcat(&local_58,"n");
            }
          }
        }
        else {
          strcat(&local_58,"s");
        }
      }
      if ((iVar3 == iGp00000b90) || (iVar3 == iGp00000b8c)) {
        strcat(&local_58,"|");
      }
      iVar1 = 0;
      if (iVar3 < 0x3f) {
        iVar1 = iVar3 + 1;
      }
      iVar3 = iVar1;
    } while (iVar1 != iGp00000b7c);
  }
  sVar2 = strlen(&local_58);
  if (sVar2 != 0) {
    Font_TextXY__FPcii(&local_58,10,6);
    iVar3 = textpixels(&local_58);
    Hud_FBuildF4__FiiiiiUlcc(1,8,9,iVar3 + 5,9,0x190505,0,0);
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

void CopSpeak_Debug__Fv(void)
{
  CopSpeak_ShowQueue__Fv();
  return;


}





