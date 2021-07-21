#include "THISDUST.H"
#include "FEAUDIO.H"


// decompiled code
// original method signature: 
// int /*$ra*/ FEAudio_StartLoadPatch__FP10SPEECHINFO(struct SPEECHINFO *info /*$s0*/)
 // line 43, offset 0x80015780
	/* begin block 1 */
		// Start line: 44
		// Start offset: 0x80015780
		// Variables:
	// 		int length; // stack offset -12
	// 		int offset; // stack offset -16
	/* end block 1 */
	// End offset: 0x80015814
	// End Line: 65

	/* begin block 2 */
		// Start line: 86
	/* end block 2 */
	// End Line: 87

	/* begin block 3 */
		// Start line: 86
	/* end block 3 */
	// End Line: 87

int FEAudio_StartLoadPatch__FP10SPEECHINFO(SPEECHINFO *info)

{
  int iVar1;
  char *pcVar2;
  int local_10;
  int local_c;
  
  asyncidle();
  FeAudio_LocateBigfile__FP9LUMPYHEADPcPiT2(speechfileHeader,(char *)info,&local_10,&local_c);
  iVar1 = 0;
  if ((local_10 != 0) && (iVar1 = 0, local_c != 0)) {
    if (info->sSpeechData != (char *)0x0) {
      purgememadr((int)info->sSpeechData);
      info->sSpeechData = (char *)0x0;
    }
    pcVar2 = FeAudio_StartBigfileRead__FPciiPi(currentSpeechViv,local_10,local_c,&info->vivHandle);
    info->sSpeechData = pcVar2;
    iVar1 = 1;
    info->areLoading = '\x01';
    info->playNextOne = '\0';
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Feaudio_StartPatch__FP10SPEECHINFO(struct SPEECHINFO *info /*$s0*/)
 // line 68, offset 0x80015824
	/* begin block 1 */
		// Start line: 69
		// Start offset: 0x80015824
		// Variables:
	// 		struct SNDPLAYOPTS playopts; // stack offset -32
	/* end block 1 */
	// End offset: 0x80015938
	// End Line: 119

	/* begin block 2 */
		// Start line: 134
	/* end block 2 */
	// End Line: 135

	/* begin block 3 */
		// Start line: 138
	/* end block 3 */
	// End Line: 139

	/* begin block 4 */
		// Start line: 138
	/* end block 4 */
	// End Line: 139

void Feaudio_StartPatch__FP10SPEECHINFO(SPEECHINFO *info)

{
  int iVar1;
  short *psVar2;
  char *pcVar3;
  uint uVar4;
  int local_20;
  undefined local_1c;
  undefined local_18;
  
  if (info->sSpeechData != (char *)0x0) {
    iVar1 = SNDbankadd(&info->nHandle,(int)info->sSpeechData);
    if (iVar1 == 7) {
      iVar1 = SNDbankheadersize(info->nHandle);
      psVar2 = reservememadr(s_comHeader_80010104,iVar1,0x10);
      *(short **)&info->pBankHeader = psVar2;
      SNDbankheadercopy(psVar2,info->nHandle);
      if (info->sSpeechData != (char *)0x0) {
        purgememadr((int)info->sSpeechData);
        info->sSpeechData = (char *)0x0;
      }
    }
    else {
      pcVar3 = info->sSpeechData;
      info->sSpeechData = (char *)0x0;
      info->lastSpeechData = pcVar3;
    }
    SNDplaysetdef(&local_20);
    local_1c = *(undefined *)&info->nHandle;
    local_20 = 0;
    local_18 = (undefined)commentaryActualLevel;
    uVar4 = SNDplay(&local_20);
    info->nSoundHandle = uVar4;
    info->soundIsPlaying = '\x01';
    if (info->multiplay != 0) {
      if ((byte)info->name[2] < 0x7a) {
        gCurrentVIV = gCurrentVIV + '\x01';
        info->name[2] = info->name[2] + '\x01';
        FEAudio_StartLoadPatch__FP10SPEECHINFO(info);
      }
      else {
        info->areLoading = '\0';
        info->playNextOne = '\0';
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeAudio_systemtask__Fi(int x /*$a0*/)
 // line 124, offset 0x80015948
	/* begin block 1 */
		// Start line: 125
		// Start offset: 0x80015948
	/* end block 1 */
	// End offset: 0x80015BBC
	// End Line: 205

	/* begin block 2 */
		// Start line: 262
	/* end block 2 */
	// End Line: 263

	/* begin block 3 */
		// Start line: 265
	/* end block 3 */
	// End Line: 266

	/* begin block 4 */
		// Start line: 265
	/* end block 4 */
	// End Line: 266

void FeAudio_systemtask__Fi(int x)

{
  uint uVar1;
  
  systemtask(x);
  if ((ginfo.areLoading != '\0') && (uVar1 = getasyncreadstatus(ginfo.vivHandle), uVar1 != 0)) {
    ginfo._16_2_ = (ushort)ginfo._16_4_ & 0xff00;
    ginfo._16_3_ = CONCAT12(1,ginfo._16_2_);
    ginfo._16_4_ = ginfo._16_4_ & 0xff000000 | (uint)ginfo._16_3_;
  }
  if ((ginfo.soundIsPlaying != '\0') && (uVar1 = SNDover(ginfo.nSoundHandle), uVar1 != 0)) {
    SNDautovol(ginfo.nSoundHandle,0,-1);
    SNDbankremove(ginfo.nHandle);
    if (ginfo.lastSpeechData != (char *)0x0) {
      purgememadr((int)ginfo.lastSpeechData);
      ginfo.lastSpeechData = (char *)0x0;
    }
    if (ginfo.pBankHeader != (char *)0x0) {
      purgememadr((int)ginfo.pBankHeader);
      ginfo.pBankHeader = (char *)0x0;
    }
    if (ginfo.areLoading != '\0') {
      while (uVar1 = getasyncreadstatus(ginfo.vivHandle), uVar1 == 0) {
        systemtask(0);
      }
      ginfo._16_4_ = ginfo._16_4_ & 0xff000000 | 0x10000;
    }
    uVar1 = ginfo._16_4_;
    ginfo._16_4_ = ginfo._16_4_ & 0xffff00ff;
    ginfo.nHandle = 0;
    if ((uVar1 & 0xff00ff) == 0) {
      gStopCommentaryNow = 1;
    }
  }
  if (gStopCommentaryNow != 0) {
    gCurrentVIV = -1;
    if (ginfo.areLoading != '\0') {
      while (uVar1 = getasyncreadstatus(ginfo.vivHandle), uVar1 == 0) {
        systemtask(0);
      }
    }
    if (ginfo.soundIsPlaying != '\0') {
      SNDautovol(ginfo.nSoundHandle,0,-1);
      SNDbankremove(ginfo.nHandle);
    }
    AudioMus_Volume__Fi(gMasterMusicLevel * 0x46 >> 7);
    if (ginfo.sSpeechData != (char *)0x0) {
      purgememadr((int)ginfo.sSpeechData);
      ginfo.sSpeechData = (char *)0x0;
    }
    if (ginfo.lastSpeechData != (char *)0x0) {
      purgememadr((int)ginfo.lastSpeechData);
      ginfo.lastSpeechData = (char *)0x0;
    }
    if (ginfo.pBankHeader != (char *)0x0) {
      purgememadr((int)ginfo.pBankHeader);
      ginfo.pBankHeader = (char *)0x0;
    }
    ginfo._16_4_ = (uint)ginfo._19_1_ << 0x18;
    gStopCommentaryNow = 0;
  }
  if ((ginfo.playNextOne != '\0') && (ginfo._16_2_ == 0)) {
    Feaudio_StartPatch__FP10SPEECHINFO(&ginfo);
    ginfo._16_4_ = ginfo._16_4_ & 0xff00ffff;
  }
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ FeAudio_AsyncPlayCommentary__FPc(char *name /*$s1*/)
 // line 210, offset 0x80015bcc
	/* begin block 1 */
		// Start line: 211
		// Start offset: 0x80015BCC
	/* end block 1 */
	// End offset: 0x80015CA0
	// End Line: 232

	/* begin block 2 */
		// Start line: 443
	/* end block 2 */
	// End Line: 444

	/* begin block 3 */
		// Start line: 449
	/* end block 3 */
	// End Line: 450

	/* begin block 4 */
		// Start line: 449
	/* end block 4 */
	// End Line: 450

short FeAudio_AsyncPlayCommentary__FPc(char *name)

{
  int iVar1;
  
  commentaryActualLevel = gMasterFENarrationLevel * 0x6e >> 7;
  if (0x5a < commentaryActualLevel) {
    commentaryActualLevel = 0x5a;
  }
  strncpy((char *)&ginfo,name,4);
  ginfo.nHandle = 0;
  ginfo.nSoundHandle = 0;
  ginfo.areLoading = '\0';
  ginfo.soundIsPlaying = '\0';
  ginfo.playNextOne = '\0';
  ginfo.pBankHeader = (char *)0x0;
  ginfo.sSpeechData = (char *)0x0;
  ginfo.lastSpeechData = (char *)0x0;
  ginfo.vivHandle = 0;
  gCurrentVIV = -1;
  ginfo.multiplay = ZEXT14(*name != 'c');
  iVar1 = FEAudio_StartLoadPatch__FP10SPEECHINFO(&ginfo);
  if (iVar1 != 0) {
    AudioMus_Volume__Fi(gMasterMusicLevel * 0x23 >> 7);
  }
  return 1;
}



// decompiled code
// original method signature: 
// short /*$ra*/ FeAudio_AsyncPlaySpeech__Fii(int type /*$a2*/, int index /*$a3*/)
 // line 235, offset 0x80015cb8
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x80015CB8
		// Variables:
	// 		char vivname[5]; // stack offset -16
	/* end block 1 */
	// End offset: 0x80015D18
	// End Line: 248

	/* begin block 2 */
		// Start line: 525
	/* end block 2 */
	// End Line: 526

	/* begin block 3 */
		// Start line: 529
	/* end block 3 */
	// End Line: 530

	/* begin block 4 */
		// Start line: 529
	/* end block 4 */
	// End Line: 530

short FeAudio_AsyncPlaySpeech__Fii(int type,int index)

{
  short sVar1;
  char *__format;
  char acStack16 [8];
  
  if (type == 2) {
    __format = s__c_02d_80010110;
    type = 99;
  }
  else {
    if (type == 0) {
      __format = s__c_ca_80010118;
      type = 0x61;
      index = index + 0x61;
    }
    else {
      __format = s__c_ca_80010118;
      type = type + 0x61;
      index = index + 0x30;
    }
  }
  sprintf(acStack16,__format,type,index);
  sVar1 = FeAudio_AsyncPlayCommentary__FPc(acStack16);
  return sVar1;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ FeAudio_StartBigfileRead__FPciiPi(char *fname /*$s2*/, int offset /*$s3*/, int length /*$s1*/, int *vivHandle /*$s4*/)
 // line 253, offset 0x80015d34
	/* begin block 1 */
		// Start line: 254
		// Start offset: 0x80015D34
		// Variables:
	// 		char *streamBuffer; // $s0
	/* end block 1 */
	// End offset: 0x80015DAC
	// End Line: 270

	/* begin block 2 */
		// Start line: 559
	/* end block 2 */
	// End Line: 560

	/* begin block 3 */
		// Start line: 565
	/* end block 3 */
	// End Line: 566

	/* begin block 4 */
		// Start line: 565
	/* end block 4 */
	// End Line: 566

char * FeAudio_StartBigfileRead__FPciiPi(char *fname,int offset,int length,int *vivHandle)

{
  short *psVar1;
  int iVar2;
  
  if ((length == 0) ||
     (psVar1 = reservememadr(s_streamBuffer_80010120,length,0), psVar1 == (short *)0x0)) {
    psVar1 = (short *)0x0;
  }
  else {
    setasyncfile(fname);
    iVar2 = asyncloadsegment(offset,(uint)psVar1,length);
    *vivHandle = iVar2;
  }
  return (char *)psVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeAudio_LocateBigfile__FP9LUMPYHEADPcPiT2(struct LUMPYHEAD *bigfileHeader /*$s3*/, char *name /*$fp*/, int *offset /*$s6*/, int *length /*$s7*/)
 // line 274, offset 0x80015dcc
	/* begin block 1 */
		// Start line: 275
		// Start offset: 0x80015DCC
		// Variables:
	// 		unsigned int i; // $s2
	// 		struct FILEINFO *info; // $s1
	// 		char *tempChar; // $a1
	/* end block 1 */
	// End offset: 0x80015EF4
	// End Line: 301

	/* begin block 2 */
		// Start line: 608
	/* end block 2 */
	// End Line: 609

	/* begin block 3 */
		// Start line: 613
	/* end block 3 */
	// End Line: 614

	/* begin block 4 */
		// Start line: 613
	/* end block 4 */
	// End Line: 614

void FeAudio_LocateBigfile__FP9LUMPYHEADPcPiT2
               (LUMPYHEAD *bigfileHeader,char *name,int *offset,int *length)

{
  bool bVar1;
  int iVar2;
  ulong *__s2;
  LUMPYHEAD *pLVar3;
  uint uVar4;
  
  *offset = 0;
  *length = 0;
  if (bigfileHeader != (LUMPYHEAD *)0x0) {
    pLVar3 = bigfileHeader + 1;
    uVar4 = 1;
    if (bigfileHeader->num != 0) {
      do {
        __s2 = &pLVar3->num;
        iVar2 = strcmp(name,(char *)__s2);
        if (iVar2 == 0) {
          uVar4 = pLVar3->type;
          *offset = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
          uVar4 = pLVar3->len;
          *length = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
          return;
        }
        if (*(char *)&pLVar3->num != '\0') {
          __s2 = &pLVar3->num;
          do {
            __s2 = (ulong *)((int)__s2 + 1);
          } while (*(char *)__s2 != '\0');
        }
        pLVar3 = (LUMPYHEAD *)((int)__s2 + 1);
        bVar1 = uVar4 < bigfileHeader->num;
        uVar4 = uVar4 + 1;
      } while (bVar1);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// struct LUMPYHEAD * /*$ra*/ FeAudio_InitViv__FPc(char *fname /*$a0*/)
 // line 305, offset 0x80015f24
	/* begin block 1 */
		// Start line: 306
		// Start offset: 0x80015F24
		// Variables:
	// 		int vivHandle; // $s0
	// 		struct LUMPYHEAD lumpHead; // stack offset -32
	// 		struct LUMPYHEAD *bigfileHeader; // $s1
	/* end block 1 */
	// End offset: 0x800160C4
	// End Line: 348

	/* begin block 2 */
		// Start line: 672
	/* end block 2 */
	// End Line: 673

	/* begin block 3 */
		// Start line: 675
	/* end block 3 */
	// End Line: 676

	/* begin block 4 */
		// Start line: 675
	/* end block 4 */
	// End Line: 676

LUMPYHEAD * FeAudio_InitViv__FPc(char *fname)

{
  uint uVar1;
  uint uVar2;
  LUMPYHEAD *pLVar3;
  uint uVar4;
  uint local_20 [2];
  uint local_18;
  uint local_14;
  
  setasyncfile(fname);
  uVar1 = asyncloadsegment(0,(uint)local_20,0x10);
  do {
    systemtask(0);
    uVar2 = getasyncreadstatus(uVar1);
  } while (uVar2 == 0);
  local_20[0] = local_20[0] << 0x18 | (local_20[0] & 0xff00) << 8 | (local_20[0] & 0xff0000) >> 8 |
                local_20[0] >> 0x18;
  local_14 = local_14 << 0x18 | (local_14 & 0xff00) << 8 | (local_14 & 0xff0000) >> 8 |
             local_14 >> 0x18;
  local_18 = local_18 << 0x18 | (local_18 & 0xff00) << 8 | (local_18 & 0xff0000) >> 8 |
             local_18 >> 0x18;
  pLVar3 = (LUMPYHEAD *)reservememadr(s_lumpyhead_80010130,local_14 + 0x20,0);
  if (pLVar3 == (LUMPYHEAD *)0x0) {
    pLVar3 = (LUMPYHEAD *)0x0;
  }
  else {
    uVar1 = asyncloadsegment(0,(uint)pLVar3,local_14 + 0x20);
    do {
      systemtask(0);
      uVar2 = getasyncreadstatus(uVar1);
    } while (uVar2 == 0);
    uVar1 = pLVar3->type;
    uVar4 = pLVar3->hlen;
    uVar2 = pLVar3->num;
    pLVar3->type = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
    pLVar3->hlen = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | (uVar4 & 0xff0000) >> 8 | uVar4 >> 0x18;
    pLVar3->num = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | (uVar2 & 0xff0000) >> 8 | uVar2 >> 0x18;
  }
  return pLVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeAudio_InitCommentary__Fii(int language /*$a0*/)
 // line 360, offset 0x800160d8
	/* begin block 1 */
		// Start line: 361
		// Start offset: 0x800160D8
	/* end block 1 */
	// End offset: 0x800160D8
	// End Line: 361

	/* begin block 2 */
		// Start line: 792
	/* end block 2 */
	// End Line: 793

	/* begin block 3 */
		// Start line: 805
	/* end block 3 */
	// End Line: 806

	/* begin block 4 */
		// Start line: 805
	/* end block 4 */
	// End Line: 806

void FeAudio_InitCommentary__Fii(int language)

{
  ginfo.nHandle = 0;
  ginfo.multiplay = 1;
  ginfo.nSoundHandle = 0;
  ginfo.areLoading = '\0';
  ginfo.soundIsPlaying = '\0';
  ginfo.playNextOne = '\0';
  ginfo.pBankHeader = (char *)0x0;
  ginfo.sSpeechData = (char *)0x0;
  ginfo.lastSpeechData = (char *)0x0;
  ginfo.vivHandle = 0;
  ginfo.name = PTR_DAT_8001016c;
  sprintf(currentSpeechViv,s__s_s_viv_80010170,PTR_ARRAY_80116500[0],allLanguages6[language]);
  speechfileHeader = FeAudio_InitViv__FPc(currentSpeechViv);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FeAudio_DeInitCommentary__Fv()
 // line 385, offset 0x80016178
	/* begin block 1 */
		// Start line: 386
		// Start offset: 0x80016178
	/* end block 1 */
	// End offset: 0x800161A0
	// End Line: 387

	/* begin block 2 */
		// Start line: 891
	/* end block 2 */
	// End Line: 892

	/* begin block 3 */
		// Start line: 899
	/* end block 3 */
	// End Line: 900

	/* begin block 4 */
		// Start line: 899
	/* end block 4 */
	// End Line: 900

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FeAudio_DeInitCommentary__Fv(void)

{
  if (speechfileHeader != (LUMPYHEAD *)0x0) {
    purgememadr((int)speechfileHeader);
    speechfileHeader = (LUMPYHEAD *)0x0;
  }
  return;
}





