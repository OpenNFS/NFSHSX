#include "THISDUST.H"
#include "AUDIO.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Audio_InitDriver__Fii(int buffersize /*$s0*/, int spusize /*$s1*/)
 // line 58, offset 0x800bbb84
	/* begin block 1 */
		// Start line: 59
		// Start offset: 0x800BBB84

		/* begin block 1.1 */
			// Start line: 59
			// Start offset: 0x800BBB84
			// Variables:
		// 		int i; // $a0
		/* end block 1.1 */
		// End offset: 0x800BBBC0
		// End Line: 64

		/* begin block 1.2 */
			// Start line: 65
			// Start offset: 0x800BBBC0

			/* begin block 1.2.1 */
				// Start line: 66
				// Start offset: 0x800BBBE8
				// Variables:
			// 		struct SNDSYSOPTS opts; // stack offset -80
			/* end block 1.2.1 */
			// End offset: 0x800BBC34
			// End Line: 74
		/* end block 1.2 */
		// End offset: 0x800BBC34
		// End Line: 74
	/* end block 1 */
	// End offset: 0x800BBC4C
	// End Line: 79

	/* begin block 2 */
		// Start line: 100
	/* end block 2 */
	// End Line: 101

	/* begin block 3 */
		// Start line: 109
	/* end block 3 */
	// End Line: 110

	/* begin block 4 */
		// Start line: 107
	/* end block 4 */
	// End Line: 108

	/* begin block 5 */
		// Start line: 107
	/* end block 5 */
	// End Line: 108

void Audio_InitDriver__Fii(int buffersize,int spusize)

{
  SndBnk_t *pSVar1;
  int iVar2;
  undefined4 auStack80 [3];
  undefined2 local_44;
  
  iVar2 = 0;
  pSVar1 = &gSndBnk;
  do {
    pSVar1->bnkID = iVar2;
    pSVar1->pdata = (char *)0x0;
    iVar2 = iVar2 + 1;
    pSVar1 = pSVar1 + 1;
  } while (iVar2 < 7);
  if ((AudioCmn_kAudioOn != 0) || (AudioCmn_kAudioStreamingOn != 0)) {
    SNDSYS_getopts(auStack80);
    local_44 = 0x30;
    SNDSYS_setopts((int)auStack80);
    SNDSYS_vectortoreal();
    Audio_gHeap = reservememadr(s_audio_heap_80056754,0x1000,0);
    SNDSYS_init(Audio_gHeap,0x1000);
    AudioCmn_InitReverb__Fv();
  }
  if (0 < buffersize) {
    AudioMus_SysStartUp__FiiPc(buffersize,spusize,(char *)PTR_ARRAY_8013d504);
  }
  Audio_direct3davail = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Audio_DeInitDriver__Fv()
 // line 84, offset 0x800bbc64
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x800BBC64

		/* begin block 1.1 */
			// Start line: 85
			// Start offset: 0x800BBC64

			/* begin block 1.1.1 */
				// Start line: 89
				// Start offset: 0x800BBC9C
			/* end block 1.1.1 */
			// End offset: 0x800BBCB0
			// End Line: 92
		/* end block 1.1 */
		// End offset: 0x800BBCB0
		// End Line: 92
	/* end block 1 */
	// End offset: 0x800BBCB0
	// End Line: 92

	/* begin block 2 */
		// Start line: 156
	/* end block 2 */
	// End Line: 157

	/* begin block 3 */
		// Start line: 162
	/* end block 3 */
	// End Line: 163

	/* begin block 4 */
		// Start line: 162
	/* end block 4 */
	// End Line: 163

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Audio_DeInitDriver__Fv(void)

{
  AudioMus_SysCleanUp__Fv();
  if ((AudioCmn_kAudioOn != 0) || (AudioCmn_kAudioStreamingOn != 0)) {
    SNDSYS_restore();
    purgememadr((int)Audio_gHeap);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Audio_CleanUp__Fv()
 // line 133, offset 0x800bbcc0
	/* begin block 1 */
		// Start line: 134
		// Start offset: 0x800BBCC0
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x800BBD08
	// End Line: 145

	/* begin block 2 */
		// Start line: 260
	/* end block 2 */
	// End Line: 261

	/* begin block 3 */
		// Start line: 224
	/* end block 3 */
	// End Line: 225

	/* begin block 4 */
		// Start line: 224
	/* end block 4 */
	// End Line: 225

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Audio_CleanUp__Fv(void)

{
  SndBnk_t *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  pSVar1 = &gSndBnk;
  do {
    if (pSVar1->pdata != (char *)0x0) {
      purgememadr((int)pSVar1->pdata);
      pSVar1->pdata = (char *)0x0;
    }
    iVar2 = iVar2 + 1;
    pSVar1 = pSVar1 + 1;
  } while (iVar2 < 7);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Audio_FECleanUp__Fv()
 // line 151, offset 0x800bbd1c
	/* begin block 1 */
		// Start line: 152
		// Start offset: 0x800BBD1C
	/* end block 1 */
	// End offset: 0x800BBD54
	// End Line: 159

	/* begin block 2 */
		// Start line: 261
	/* end block 2 */
	// End Line: 262

	/* begin block 3 */
		// Start line: 268
	/* end block 3 */
	// End Line: 269

	/* begin block 4 */
		// Start line: 268
	/* end block 4 */
	// End Line: 269

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Audio_FECleanUp__Fv(void)

{
  SNDbankremove(-1);
  if (gSndBnk.pdata != (char *)0x0) {
    purgememadr((int)gSndBnk.pdata);
    gSndBnk.pdata = (char *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AudioCmn_AddBank__FPciT0i(char *filename /*$s0*/, int size /*$s2*/, char *pdata /*$s3*/, int BankNum /*$s4*/)
 // line 167, offset 0x800bbd64
	/* begin block 1 */
		// Start line: 168
		// Start offset: 0x800BBD64
		// Variables:
	// 		int bhandle; // stack offset -32
	// 		int check; // $a0
	// 		char *p; // $v1
	// 		char *ptemp; // $s1
	/* end block 1 */
	// End offset: 0x800BBE3C
	// End Line: 201

	/* begin block 2 */
		// Start line: 293
	/* end block 2 */
	// End Line: 294

	/* begin block 3 */
		// Start line: 302
	/* end block 3 */
	// End Line: 303

	/* begin block 4 */
		// Start line: 302
	/* end block 4 */
	// End Line: 303

int AudioCmn_AddBank__FPciT0i(char *filename,int size,char *pdata,int BankNum)

{
  char cVar1;
  int shandle;
  char *pcVar2;
  short *psVar3;
  int local_20 [2];
  
  local_20[0] = -1;
  psVar3 = (short *)0x0;
  pcVar2 = filename;
  if (*filename != '\0') {
    cVar1 = *filename;
    pcVar2 = filename;
    do {
      if (cVar1 == '\\') {
        pcVar2 = filename + 1;
      }
      filename = filename + 1;
      cVar1 = *filename;
    } while (cVar1 != '\0');
  }
  shandle = SNDbankadd(local_20,(int)pdata);
  if (shandle == 7) {
    shandle = SNDbankheadersize(local_20[0]);
    psVar3 = reservememadr(pcVar2,shandle,0);
    SNDbankheadercopy(psVar3,local_20[0]);
    shandle = SNDbankheadersize(local_20[0]);
    size = size - shandle;
  }
  else {
    AudioClc_SndError__Fi(shandle);
  }
  purgememadr((int)pdata);
  *(short **)&(&gSndBnk)[BankNum].pdata = psVar3;
  (&gSndBnk)[BankNum].bnkID = local_20[0];
  return size;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AudioCmn_LoadBank__FPci(char *filename /*$s1*/, int BankNum /*$s2*/)
 // line 217, offset 0x800bbe8c
	/* begin block 1 */
		// Start line: 218
		// Start offset: 0x800BBE8C
		// Variables:
	// 		char bankdata[80]; // stack offset -96
	// 		char *pdata; // $s0
	/* end block 1 */
	// End offset: 0x800BBEF8
	// End Line: 231

	/* begin block 2 */
		// Start line: 409
	/* end block 2 */
	// End Line: 410

	/* begin block 3 */
		// Start line: 413
	/* end block 3 */
	// End Line: 414

	/* begin block 4 */
		// Start line: 413
	/* end block 4 */
	// End Line: 414

int AudioCmn_LoadBank__FPci(char *filename,int BankNum)

{
  char *pdata;
  int size;
  char acStack96 [80];
  
  strcpy(acStack96,filename);
  strcat(acStack96,(char *)PTR_ARRAY_8013d514);
  pdata = (char *)loadfileadrz(acStack96,0x10);
  size = 0;
  if (pdata != (char *)0x0) {
    size = filesize(acStack96);
    size = AudioCmn_AddBank__FPciT0i(filename,size,pdata,BankNum);
  }
  return size;
}





