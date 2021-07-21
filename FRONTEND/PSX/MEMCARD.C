#include "THISDUST.H"
#include "MEMCARD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ MCRD_init(int fMultitap /*$s1*/)
 // line 81, offset 0x8004f3e0
	/* begin block 1 */
		// Start line: 82
		// Start offset: 0x8004F3E0
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8004F45C
	// End Line: 118

	/* begin block 2 */
		// Start line: 162
	/* end block 2 */
	// End Line: 163

	/* begin block 3 */
		// Start line: 162
	/* end block 3 */
	// End Line: 163

void MCRD_init(int fMultitap)

{
  int card;
  
  blockclear((undefined *)&gMemCardInfo,(int)&DAT_000017dc);
  gMemCardInfo.task = NONE;
  gMemCardInfo.ConfirmFormatProc = iMCRD_DefaultCBProc1;
  gMemCardInfo.ConfirmOverwriteProc = iMCRD_DefaultCBProc1;
  gMemCardInfo.LoadingDataProc = asyncidle;
  gMemCardInfo.SavingDataProc = asyncidle;
  gMemCardInfo.fMultitap = fMultitap;
  MemCardInit();
  card = 1;
  do {
    timedwait(10);
    iMCRD_InitCard(card);
    card = card + 1;
  } while (card < 9);
  addtimer((int)iMCRD_timersub);
  MemCardStart();
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_InitCard(int card /*$a0*/)
 // line 129, offset 0x8004f480
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x8004F480
		// Variables:
	// 		struct CARDINFO_def *pCI; // $v1
	/* end block 1 */
	// End offset: 0x8004F4C8
	// End Line: 144

	/* begin block 2 */
		// Start line: 276
	/* end block 2 */
	// End Line: 277

	/* begin block 3 */
		// Start line: 279
	/* end block 3 */
	// End Line: 280

	/* begin block 4 */
		// Start line: 279
	/* end block 4 */
	// End Line: 280

int iMCRD_InitCard(int card)

{
  CARDINFO_def *pCVar1;
  int iVar2;
  
  pCVar1 = MCRD_getcard(card);
  if (pCVar1 == (CARDINFO_def *)0x0) {
    iVar2 = -1;
  }
  else {
    pCVar1->status = -1;
    pCVar1->lasterror = 0;
    pCVar1->numfiles = 0;
    pCVar1->freeblocks = 0xf;
    blockclear((undefined *)pCVar1->dir,600);
    iVar2 = 0;
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MCRD_restore()
 // line 174, offset 0x8004f4d8
	/* begin block 1 */
		// Start line: 349
	/* end block 1 */
	// End Line: 350

	/* begin block 2 */
		// Start line: 380
	/* end block 2 */
	// End Line: 381

	/* begin block 3 */
		// Start line: 380
	/* end block 3 */
	// End Line: 381

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MCRD_restore(void)

{
  deltimer((int)iMCRD_timersub);
  MemCardSync(0,(int *)0x0,(undefined4 *)0x0);
  MemCardStop();
  MemCardEnd();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MCRD_getopts(struct MCRDOPTS_def *pOPT /*$a0*/)
 // line 215, offset 0x8004f51c
	/* begin block 1 */
		// Start line: 426
	/* end block 1 */
	// End Line: 427

	/* begin block 2 */
		// Start line: 463
	/* end block 2 */
	// End Line: 464

	/* begin block 3 */
		// Start line: 463
	/* end block 3 */
	// End Line: 464

	/* begin block 4 */
		// Start line: 464
	/* end block 4 */
	// End Line: 465

	/* begin block 5 */
		// Start line: 464
	/* end block 5 */
	// End Line: 465

void MCRD_getopts(MCRDOPTS_def *pOPT)

{
  PRODUCTLOC PVar1;
  undefined4 uVar2;
  
  PVar1 = gMemCardInfo.productLocation;
  pOPT->productCode = (char *)0x0;
  pOPT->productLocation = PVar1;
  *(_func_61 **)&pOPT->ConfirmFormatProc = gMemCardInfo.ConfirmFormatProc;
  *(_func_62 **)&pOPT->ConfirmOverwriteProc = gMemCardInfo.ConfirmOverwriteProc;
  *(_func_63 **)&pOPT->LoadingDataProc = gMemCardInfo.LoadingDataProc;
  *(_func_64 **)&pOPT->SavingDataProc = gMemCardInfo.SavingDataProc;
  pOPT->bMoveIconsToVram = gMemCardInfo.bMoveIconsToVram;
  uVar2 = gMemCardInfo.VramIconArea._4_4_;
  *(undefined4 *)&pOPT->VramIconArea = gMemCardInfo.VramIconArea._0_4_;
  *(undefined4 *)&(pOPT->VramIconArea).w = uVar2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MCRD_setopts(struct MCRDOPTS_def *pOPT /*$s1*/)
 // line 280, offset 0x8004f594
	/* begin block 1 */
		// Start line: 537
	/* end block 1 */
	// End Line: 538

	/* begin block 2 */
		// Start line: 594
	/* end block 2 */
	// End Line: 595

	/* begin block 3 */
		// Start line: 594
	/* end block 3 */
	// End Line: 595

void MCRD_setopts(MCRDOPTS_def *pOPT)

{
  PRODUCTLOC PVar1;
  
  if (pOPT->productCode == (char *)0x0) {
    gMemCardInfo.productCode[0] = '\0';
    gMemCardInfo.productLocation = N_AMERICA;
  }
  else {
    gMemCardInfo.productCode[0] = 'B';
    PVar1 = pOPT->productLocation;
    if (PVar1 == JAPAN) {
      gMemCardInfo.productCode[1] = 'I';
    }
    else {
      if ((PVar1 == N_AMERICA) || (PVar1 != EUROPE)) {
        gMemCardInfo.productCode[1] = 'A';
      }
      else {
        gMemCardInfo.productCode[1] = 'E';
      }
    }
    strncpy(gMemCardInfo.productCode + 2,pOPT->productCode,10);
    gMemCardInfo.productCode[12] = '\0';
    gMemCardInfo.productLocation = pOPT->productLocation;
  }
  gMemCardInfo.bMoveIconsToVram = pOPT->bMoveIconsToVram;
  gMemCardInfo.VramIconArea._0_4_ = *(undefined4 *)&pOPT->VramIconArea;
  gMemCardInfo.VramIconArea._4_4_ = *(undefined4 *)&(pOPT->VramIconArea).w;
  gMemCardInfo.ConfirmFormatProc = (_func_61 *)pOPT->ConfirmFormatProc;
  gMemCardInfo.ConfirmOverwriteProc = (_func_62 *)pOPT->ConfirmOverwriteProc;
  gMemCardInfo.LoadingDataProc = (_func_63 *)pOPT->LoadingDataProc;
  gMemCardInfo.SavingDataProc = (_func_64 *)pOPT->SavingDataProc;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MCRD_loadfile(int card /*$s2*/, struct MCRDFILE_def *pFILE /*$s4*/, int bNameHasProductCode /*$s1*/)
 // line 397, offset 0x8004f6b8
	/* begin block 1 */
		// Start line: 398
		// Start offset: 0x8004F6B8
		// Variables:
	// 		struct MCRDFILEINFO_def *pMFI; // $s3
	/* end block 1 */
	// End offset: 0x8004F708
	// End Line: 418

	/* begin block 2 */
		// Start line: 774
	/* end block 2 */
	// End Line: 775

	/* begin block 3 */
		// Start line: 828
	/* end block 3 */
	// End Line: 829

	/* begin block 4 */
		// Start line: 828
	/* end block 4 */
	// End Line: 829

void MCRD_loadfile(int card,MCRDFILE_def *pFILE,int bNameHasProductCode)

{
  blockclear((undefined *)&gMemCardInfo.fileinfo,0x23c);
  gMemCardInfo.fileinfo.cardnum = card;
  if (bNameHasProductCode == 0) {
    gMemCardInfo.fileinfo.cardnum = card;
    strcpy(gMemCardInfo.fileinfo.name,gMemCardInfo.productCode);
  }
  strcat(gMemCardInfo.fileinfo.name,pFILE->name);
  gMemCardInfo.fileinfo.title = pFILE->title;
  gMemCardInfo.fileinfo.size = pFILE->size;
  gMemCardInfo.fileinfo.offset = pFILE->offset;
  gMemCardInfo.fileinfo.icon[0] = (_func_51 *)pFILE->icon[0];
  gMemCardInfo.fileinfo.icon[1] = (_func_51 *)pFILE->icon[1];
  gMemCardInfo.fileinfo.icon[2] = (_func_51 *)pFILE->icon[2];
  gMemCardInfo.fileinfo.pData = pFILE->pData;
  pFILE->numicons = &gMemCardInfo.fileinfo.header.type;
  pFILE->numblocks = &gMemCardInfo.fileinfo.header.nslots;
  gMemCardInfo.task = LOAD_FILE;
  gMemCardInfo.bReady = 0;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_DoFileLoad(int card /*$s7*/)
 // line 435, offset 0x8004f7a4
	/* begin block 1 */
		// Start line: 436
		// Start offset: 0x8004F7A4
		// Variables:
	// 		long cmd; // stack offset -48
	// 		long res; // stack offset -44
	// 		int i; // $s1
	// 		int error; // $v0
	// 		struct MCRDFILEINFO_def *pMFI; // $s2
	// 		struct shapetbl *s; // $s0
	/* end block 1 */
	// End offset: 0x8004FA20
	// End Line: 526

	/* begin block 2 */
		// Start line: 923
	/* end block 2 */
	// End Line: 924

	/* begin block 3 */
		// Start line: 926
	/* end block 3 */
	// End Line: 927

	/* begin block 4 */
		// Start line: 926
	/* end block 4 */
	// End Line: 927

int iMCRD_DoFileLoad(int card)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  int iStack48;
  int local_2c;
  
  iVar6 = -0x7ffad038;
  if ((gMemCardInfo.fileinfo.title != (char *)0x0) ||
     (gMemCardInfo.fileinfo.icon[0] != (_func_51 *)0x0)) {
    local_2c = MemCardReadFile(gMemCardInfo.channel,gMemCardInfo.fileinfo.name,0x80052ff4,0,0x200);
    while (iVar2 = MemCardSync(1,&iStack48,&local_2c), iVar2 == 0) {
      (*gMemCardInfo.LoadingDataProc)();
      VSync(0);
    }
    iVar2 = iMCRD_HandleError(3,local_2c,card);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = 0;
    if (gMemCardInfo.fileinfo.title != (char *)0x0) {
      while( true ) {
        uVar1 = sjis2ascii(*(short *)(iVar6 + 0x30));
        gMemCardInfo.fileinfo.title[iVar2] = uVar1;
        iVar6 = iVar6 + 2;
        if (uVar1 == '\0') break;
        iVar2 = iVar2 + 1;
      }
    }
    iVar2 = 0;
    iVar6 = 0;
    do {
      puVar5 = *(uint **)((int)gMemCardInfo.fileinfo.icon + iVar6);
      if (puVar5 == (uint *)0x0) break;
      puVar4 = (undefined4 *)gMemCardInfo.fileinfo.header.icon1;
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          puVar4 = (undefined4 *)gMemCardInfo.fileinfo.header.icon2;
        }
        else {
          puVar4 = (undefined4 *)gMemCardInfo.fileinfo.header.icon3;
        }
      }
      blockmove(puVar4,puVar5 + 4,0x80);
      uVar3 = shapetype(4);
      *(char *)puVar5 = (char)uVar3;
      uVar3 = uVar3 & 0xff | 0x9000;
      *puVar5 = uVar3;
      *(undefined2 *)((int)puVar5 + 6) = 0x10;
      *(undefined2 *)(puVar5 + 1) = 0x10;
      *(undefined2 *)((int)puVar5 + 10) = 0;
      *(undefined2 *)(puVar5 + 2) = 0;
      puVar5[3] = puVar5[3] & 0xf000f000;
      puVar5 = (uint *)((int)puVar5 + ((int)uVar3 >> 8));
      blockmove((undefined4 *)gMemCardInfo.fileinfo.header.iconclut,puVar5 + 4,0x20);
      uVar3 = cluttype(0x10);
      *(char *)puVar5 = (char)uVar3;
      iVar2 = iVar2 + 1;
      *(undefined2 *)(puVar5 + 1) = 0x10;
      *(undefined2 *)((int)puVar5 + 6) = 1;
      *(undefined2 *)((int)puVar5 + 10) = 0;
      *(undefined2 *)(puVar5 + 2) = 0;
      *puVar5 = uVar3 & 0xff;
      puVar5[3] = puVar5[3] & 0xf000f000;
      iVar6 = iVar2 * 4;
    } while (iVar2 < 3);
  }
  if (gMemCardInfo.fileinfo.size != 0) {
    local_2c = MemCardReadFile(gMemCardInfo.channel,gMemCardInfo.fileinfo.name,
                               gMemCardInfo.fileinfo.pData,gMemCardInfo.fileinfo.offset + 0x200,
                               gMemCardInfo.fileinfo.size);
    if (local_2c == 0) {
      gMemCardInfo.bReady = 1;
      return 0x10;
    }
    do {
      iVar6 = MemCardSync(0,&iStack48,&local_2c);
    } while (iVar6 == 0);
    iVar6 = iMCRD_HandleError(3,local_2c,card);
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  gMemCardInfo.bReady = 1;
  return 0xf;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MCRD_savefile(int card /*$s2*/, struct MCRDFILE_def *pFILE /*$s3*/)
 // line 663, offset 0x8004fa4c
	/* begin block 1 */
		// Start line: 664
		// Start offset: 0x8004FA4C
		// Variables:
	// 		struct MCRDFILEINFO_def *pMFI; // $s4
	// 		int nIcons; // $s2
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8004FC68
	// End Line: 749

	/* begin block 2 */
		// Start line: 1321
	/* end block 2 */
	// End Line: 1322

	/* begin block 3 */
		// Start line: 1459
	/* end block 3 */
	// End Line: 1460

	/* begin block 4 */
		// Start line: 1459
	/* end block 4 */
	// End Line: 1460

int MCRD_savefile(int card,MCRDFILE_def *pFILE)

{
  short sVar1;
  size_t sVar2;
  uint *puVar3;
  MCRDFILE_def *pMVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = -0x7ffad038;
  if ((pFILE->size & 0x7fU) == 0) {
    blockclear((undefined *)&gMemCardInfo.fileinfo,0x23c);
    gMemCardInfo.fileinfo.header.magicnumber[0] = 'S';
    gMemCardInfo.fileinfo.header.magicnumber[1] = 'C';
    strcpy(gMemCardInfo.fileinfo.name,gMemCardInfo.productCode);
    strcat(gMemCardInfo.fileinfo.name,pFILE->name);
    gMemCardInfo.fileinfo.size = pFILE->size;
    gMemCardInfo.fileinfo.flags = pFILE->flags;
    gMemCardInfo.fileinfo.offset = pFILE->offset;
    gMemCardInfo.fileinfo.pData = pFILE->pData;
    iVar5 = 0;
    gMemCardInfo.fileinfo.cardnum = card;
    if ((pFILE->flags & 0x200) != 0) {
      iVar6 = 0;
      pMVar4 = pFILE;
      do {
        if (pMVar4->icon[0] != (_func_53 *)0x0) {
          iVar6 = iVar6 + 1;
        }
        iVar5 = iVar5 + 1;
        pMVar4 = (MCRDFILE_def *)&pMVar4->title;
      } while (iVar5 < 3);
      if (iVar6 == 0) {
        gMemCardInfo.fileinfo.cardnum = card;
        return -1;
      }
      gMemCardInfo.fileinfo.header.type = (char)iVar6 + '\x10';
      iVar5 = pFILE->size + 0x2000;
      gMemCardInfo.fileinfo.header.nslots = (uchar)(iVar5 >> 0xd);
      if (iVar5 < 0) {
        gMemCardInfo.fileinfo.header.nslots = (uchar)(pFILE->size + 0x3fff >> 0xd);
      }
      if (pFILE->title == (char *)0x0) {
        gMemCardInfo.fileinfo.cardnum = card;
        return -1;
      }
      gMemCardInfo.fileinfo.cardnum = card;
      sVar2 = strlen(pFILE->title);
      if (sVar2 == 0) {
        return -1;
      }
      sVar2 = strlen(pFILE->title);
      iVar5 = 0;
      if (0x20 < sVar2) goto LAB_8004fb9c;
      do {
        sVar1 = ascii2sjis(pFILE->title[iVar5]);
        *(short *)(iVar7 + 0x30) = sVar1;
        if (sVar1 == 0) break;
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 2;
      } while (iVar5 < 0x20);
      puVar3 = getshapeclut((uint *)pFILE->icon[0]);
      blockmove(puVar3 + 4,(undefined4 *)gMemCardInfo.fileinfo.header.iconclut,0x20);
      blockmove((undefined4 *)(pFILE->icon[0] + 0x10),
                (undefined4 *)gMemCardInfo.fileinfo.header.icon1,0x80);
      if ((1 < iVar6) &&
         (blockmove((undefined4 *)(pFILE->icon[1] + 0x10),
                    (undefined4 *)gMemCardInfo.fileinfo.header.icon2,0x80), iVar6 == 3)) {
        blockmove((undefined4 *)(pFILE->icon[2] + 0x10),
                  (undefined4 *)gMemCardInfo.fileinfo.header.icon3,0x80);
      }
    }
    iVar7 = 0;
    gMemCardInfo.task = WRITE_FILE;
    gMemCardInfo.bReady = 0;
  }
  else {
LAB_8004fb9c:
    iVar7 = -1;
  }
  return iVar7;
}



// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_DoFileWrite(int card /*$s3*/)
 // line 751, offset 0x8004fc88
	/* begin block 1 */
		// Start line: 752
		// Start offset: 0x8004FC88
		// Variables:
	// 		long cmd; // stack offset -32
	// 		long res; // stack offset -28
	// 		int error; // $v0
	// 		struct MCRDFILEINFO_def *pMFI; // $s0
	/* end block 1 */
	// End offset: 0x8004FDD0
	// End Line: 854

	/* begin block 2 */
		// Start line: 1641
	/* end block 2 */
	// End Line: 1642

	/* begin block 3 */
		// Start line: 1644
	/* end block 3 */
	// End Line: 1645

	/* begin block 4 */
		// Start line: 1644
	/* end block 4 */
	// End Line: 1645

int iMCRD_DoFileWrite(int card)

{
  int iVar1;
  int iStack32;
  int local_1c;
  
  if ((gMemCardInfo.fileinfo.flags & 0x200) != 0) {
    local_1c = MemCardCreateFile(gMemCardInfo.channel,gMemCardInfo.fileinfo.name,
                                 (uint)gMemCardInfo.fileinfo.header.nslots);
    iVar1 = iMCRD_HandleError(2,local_1c,card);
    if (iVar1 != 0) {
      return iVar1;
    }
    timedwait(0x40);
    local_1c = MemCardWriteFile(gMemCardInfo.channel,gMemCardInfo.fileinfo.name,0x80052ff4,0,0x200);
    if (local_1c == 0) {
      gMemCardInfo.bReady = 1;
      return 0xd;
    }
    do {
      iVar1 = MemCardSync(0,&iStack32,&local_1c);
    } while (iVar1 == 0);
    iVar1 = iMCRD_HandleError(2,local_1c,card);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  local_1c = MemCardWriteFile(gMemCardInfo.channel,gMemCardInfo.fileinfo.name,
                              gMemCardInfo.fileinfo.pData,gMemCardInfo.fileinfo.offset + 0x200,
                              gMemCardInfo.fileinfo.size);
  if (local_1c == 0) {
    gMemCardInfo.bReady = 1;
    return 0xd;
  }
  do {
    iVar1 = MemCardSync(0,&iStack32,&local_1c);
  } while (iVar1 == 0);
  iVar1 = iMCRD_HandleError(2,local_1c,card);
  if (iVar1 == 0) {
    gMemCardInfo.task = LOAD_CARD;
    gMemCardInfo.bReady = 0;
    return 0xc;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_DoFileDelete(int card /*$s2*/)
 // line 905, offset 0x8004fdec
	/* begin block 1 */
		// Start line: 906
		// Start offset: 0x8004FDEC
		// Variables:
	// 		int retval; // $s1
	// 		struct MCRDFILEINFO_def *pMFI; // $a1
	/* end block 1 */
	// End offset: 0x8004FE64
	// End Line: 929

	/* begin block 2 */
		// Start line: 1920
	/* end block 2 */
	// End Line: 1921

	/* begin block 3 */
		// Start line: 1972
	/* end block 3 */
	// End Line: 1973

	/* begin block 4 */
		// Start line: 1972
	/* end block 4 */
	// End Line: 1973

int iMCRD_DoFileDelete(int card)

{
  int iVar1;
  CARDINFO_def *pCVar2;
  int iVar3;
  
  iVar3 = 0x11;
  iVar1 = MemCardDeleteFile(gMemCardInfo.channel,gMemCardInfo.fileinfo.name);
  if (iVar1 == 0) {
    gMemCardInfo.task = LOAD_CARD;
  }
  else {
    iVar3 = 0x11;
    if (iVar1 == 5) {
      pCVar2 = MCRD_getcard(card);
      iVar3 = 0x12;
      pCVar2->lasterror = 0x13;
      gMemCardInfo.bReady = 1;
    }
  }
  return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MCRD_handlecardevents(int card /*$s1*/)
 // line 971, offset 0x8004fe80
	/* begin block 1 */
		// Start line: 972
		// Start offset: 0x8004FE80
		// Variables:
	// 		int status; // $s0
	// 		struct CARDINFO_def *pCI; // $s2
	// 		unsigned long cmd; // stack offset -24
	// 		unsigned long res; // stack offset -20
	// 		int ret; // $v1
	/* end block 1 */
	// End offset: 0x800501B4
	// End Line: 1169

	/* begin block 2 */
		// Start line: 2070
	/* end block 2 */
	// End Line: 2071

	/* begin block 3 */
		// Start line: 2112
	/* end block 3 */
	// End Line: 2113

	/* begin block 4 */
		// Start line: 2112
	/* end block 4 */
	// End Line: 2113

int MCRD_handlecardevents(int card)

{
  CARDINFO_def *pCVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_18;
  uint local_14;
  
  iVar4 = 0x17;
  pCVar1 = MCRD_getcard(card);
  iVar2 = MemCardSync(0,&local_18,&local_14);
  if (iVar2 == 0) {
    return 0x15;
  }
  if (iVar2 < 1) {
    if (iVar2 != -1) {
      return 0x17;
    }
    switch(gMemCardInfo.task) {
    case NONE:
      if (gMemCardInfo.existencecheckticks[card + -1] < 0) {
        gMemCardInfo.bReady = 0;
        uVar3 = MemCardExist(gMemCardInfo.channel);
        if (uVar3 != 0) {
          return 0x15;
        }
        return 0x17;
      }
      goto LAB_800500d8;
    case LOAD_CARD:
      iVar4 = 0x17;
      if (card == gMemCardInfo.fileinfo.cardnum) {
        pCVar1->lasterror = 0;
        gMemCardInfo.bReady = 0;
        gMemCardInfo.task = NONE;
        iVar4 = iMCRD_LoadCard(card);
      }
      break;
    case WRITE_FILE:
      iVar4 = 0x17;
      if (card == gMemCardInfo.fileinfo.cardnum) {
        pCVar1->lasterror = 0;
        gMemCardInfo.bReady = 0;
        gMemCardInfo.task = NONE;
        iVar4 = iMCRD_DoFileWrite(card);
      }
      break;
    case LOAD_FILE:
      iVar4 = 0x17;
      if (card == gMemCardInfo.fileinfo.cardnum) {
        pCVar1->lasterror = 0;
        gMemCardInfo.bReady = 0;
        gMemCardInfo.task = NONE;
        iVar4 = iMCRD_DoFileLoad(card);
      }
      break;
    case DELETE_FILE:
      iVar4 = 0x17;
      if (card == gMemCardInfo.fileinfo.cardnum) {
        pCVar1->lasterror = 0;
        gMemCardInfo.bReady = 0;
        gMemCardInfo.task = NONE;
        iVar4 = iMCRD_DoFileDelete(card);
      }
    }
  }
  else {
    if (iVar2 != 1) {
      return 0x17;
    }
    if (local_18 != 1) {
      if (local_18 == 2) {
        switch(local_14) {
        case 0:
        case 3:
          gMemCardInfo.task = LOAD_CARD;
          gMemCardInfo.fileinfo.cardnum = card;
          return 4;
        case 1:
          iMCRD_InitCard(card);
          pCVar1->status = -1;
          return 2;
        case 2:
          iMCRD_InitCard(card);
          return 3;
        case 4:
          pCVar1->status = -2;
          return 5;
        default:
          return 0x17;
        }
      }
      return 0x17;
    }
    if (local_14 == 1) {
      gMemCardInfo.bReady = local_18;
      *(uchar **)(gMemCardInfo.existencecheckticks + card + -1) = timerhz;
      pCVar1->status = -1;
      return 2;
    }
    if (local_14 != 0) {
      if (local_14 == 2) {
        gMemCardInfo.bReady = local_18;
        pCVar1->status = -4;
        return 3;
      }
      if (local_14 == 3) {
        MemCardAccept(gMemCardInfo.channel);
        return 0x15;
      }
      return 0x17;
    }
    gMemCardInfo.bReady = local_18;
    *(uchar **)(gMemCardInfo.existencecheckticks + card + -1) = timerhz;
    if (pCVar1->status == -1) {
      MemCardAccept(gMemCardInfo.channel);
      return 0x16;
    }
LAB_800500d8:
    iVar4 = 0x16;
  }
  return iVar4;
}



// decompiled code
// original method signature: 
// int /*$ra*/ MCRD_fileexists(int card /*$a0*/, char *name /*$s0*/)
 // line 1312, offset 0x800501cc
	/* begin block 1 */
		// Start line: 1313
		// Start offset: 0x800501CC
		// Variables:
	// 		int i; // $s0
	// 		struct DIRENTRY *pDir; // $s1
	// 		char fullname[24]; // stack offset -40
	/* end block 1 */
	// End offset: 0x80050230
	// End Line: 1331

	/* begin block 2 */
		// Start line: 2684
	/* end block 2 */
	// End Line: 2685

	/* begin block 3 */
		// Start line: 2828
	/* end block 3 */
	// End Line: 2829

	/* begin block 4 */
		// Start line: 2828
	/* end block 4 */
	// End Line: 2829

int MCRD_fileexists(int card,char *name)

{
  CARDINFO_def *pCVar1;
  int iVar2;
  int iVar3;
  DIRENTRY *__s1;
  char acStack40 [24];
  
  pCVar1 = MCRD_getcard(card);
  __s1 = pCVar1->dir;
  strcpy(acStack40,gMemCardInfo.productCode);
  strcat(acStack40,name);
  iVar3 = 0;
  do {
    iVar2 = strcmp((char *)__s1,acStack40);
    if (iVar2 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    __s1 = __s1 + 1;
  } while (iVar3 < 0xf);
  return -1;
}



// decompiled code
// original method signature: 
// struct CARDINFO_def * /*$ra*/ MCRD_getcard(int card /*$a0*/)
 // line 1364, offset 0x80050244
	/* begin block 1 */
		// Start line: 2901
	/* end block 1 */
	// End Line: 2902

	/* begin block 2 */
		// Start line: 2935
	/* end block 2 */
	// End Line: 2936

	/* begin block 3 */
		// Start line: 2935
	/* end block 3 */
	// End Line: 2936

	/* begin block 4 */
		// Start line: 2943
	/* end block 4 */
	// End Line: 2944

CARDINFO_def * MCRD_getcard(int card)

{
  uint uVar1;
  
  uVar1 = card - 1;
  gMemCardInfo.channel = (uVar1 & 4) << 2 | uVar1 & 3;
  return gMemCardInfo.card + uVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ iMCRD_timersub()
 // line 1536, offset 0x8005028c
	/* begin block 1 */
		// Start line: 1538
		// Start offset: 0x8005028C
		// Variables:
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x800502B4
	// End Line: 1542

	/* begin block 2 */
		// Start line: 3120
	/* end block 2 */
	// End Line: 3121

	/* begin block 3 */
		// Start line: 3279
	/* end block 3 */
	// End Line: 3280

	/* begin block 4 */
		// Start line: 3279
	/* end block 4 */
	// End Line: 3280

	/* begin block 5 */
		// Start line: 3280
	/* end block 5 */
	// End Line: 3281

	/* begin block 6 */
		// Start line: 3280
	/* end block 6 */
	// End Line: 3281

	/* begin block 7 */
		// Start line: 3282
	/* end block 7 */
	// End Line: 3283

/* WARNING: Unknown calling convention yet parameter storage is locked */

void iMCRD_timersub(void)

{
  fMemCardInfo_def *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  pfVar1 = &gMemCardInfo;
  do {
    iVar2 = iVar2 + 1;
    pfVar1->existencecheckticks[0] = pfVar1->existencecheckticks[0] + -1;
    pfVar1 = (fMemCardInfo_def *)pfVar1->productCode;
  } while (iVar2 < 8);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ garyMemCardGrabBlocks(int card /*$a0*/, int filenum /*$s1*/)
 // line 1544, offset 0x800502bc
	/* begin block 1 */
		// Start line: 1545
		// Start offset: 0x800502BC
		// Variables:
	// 		int i; // $v1
	// 		struct CARDINFO_def *pCI; // $v0
	// 		struct DIRENTRY *pDir; // $s0
	/* end block 1 */
	// End offset: 0x8005032C
	// End Line: 1561

	/* begin block 2 */
		// Start line: 3294
	/* end block 2 */
	// End Line: 3295

	/* begin block 3 */
		// Start line: 3297
	/* end block 3 */
	// End Line: 3298

	/* begin block 4 */
		// Start line: 3297
	/* end block 4 */
	// End Line: 3298

int garyMemCardGrabBlocks(int card,int filenum)

{
  CARDINFO_def *pCVar1;
  int iVar2;
  DIRENTRY *pDVar3;
  
  pCVar1 = MCRD_getcard(card);
  pDVar3 = pCVar1->dir;
  MemCardGetDirentry(gMemCardInfo.channel,&DAT_80012884,(int)pDVar3,&pCVar1->numfiles,0,0xf);
  iVar2 = 0;
  if (0 < filenum) {
    do {
      iVar2 = iVar2 + 1;
      pDVar3 = pDVar3 + 1;
    } while (iVar2 < filenum);
  }
  iVar2 = pDVar3->size;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x1fff;
  }
  return iVar2 >> 0xd;
}



// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_LoadCard(int card /*$s2*/)
 // line 1566, offset 0x80050344
	/* begin block 1 */
		// Start line: 1567
		// Start offset: 0x80050344
		// Variables:
	// 		int error; // $v0
	// 		int slot; // $a0
	// 		struct CARDINFO_def *pCI; // $s1
	// 		struct DIRENTRY *pDir; // $s0
	/* end block 1 */
	// End offset: 0x80050428
	// End Line: 1694

	/* begin block 2 */
		// Start line: 3340
	/* end block 2 */
	// End Line: 3341

	/* begin block 3 */
		// Start line: 3345
	/* end block 3 */
	// End Line: 3346

	/* begin block 4 */
		// Start line: 3345
	/* end block 4 */
	// End Line: 3346

int iMCRD_LoadCard(int card)

{
  CARDINFO_def *pCVar1;
  int iVar2;
  int iVar3;
  uint opResult;
  DIRENTRY *pDVar4;
  
  pCVar1 = MCRD_getcard(card);
  pDVar4 = pCVar1->dir;
  iVar2 = iMCRD_InitCard(card);
  iVar3 = 0xb;
  if (iVar2 == 0) {
    opResult = MemCardGetDirentry(gMemCardInfo.channel,&DAT_80012884,(int)pDVar4,&pCVar1->numfiles,0
                                  ,0xf);
    iVar3 = iMCRD_HandleError(1,opResult,card);
    iVar2 = 0;
    if (iVar3 == 0) {
      do {
        if (pDVar4->name[0] != '\0') {
          iVar3 = pDVar4->size;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 0x1fff;
          }
          pCVar1->freeblocks = pCVar1->freeblocks - (iVar3 >> 0xd);
        }
        iVar2 = iVar2 + 1;
        pDVar4 = pDVar4 + 1;
      } while (iVar2 < 0xf);
      if (pCVar1->freeblocks == 0) {
        pCVar1->status = -3;
      }
      else {
        pCVar1->status = 0;
      }
      gMemCardInfo.bReady = 1;
      iVar3 = 9;
    }
  }
  return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_FormatCard(int card /*$a0*/)
 // line 1696, offset 0x80050440
	/* begin block 1 */
		// Start line: 1697
		// Start offset: 0x80050440
		// Variables:
	// 		int result; // $s1
	// 		struct CARDINFO_def *pCI; // $s0
	/* end block 1 */
	// End offset: 0x800504A8
	// End Line: 1732

	/* begin block 2 */
		// Start line: 3610
	/* end block 2 */
	// End Line: 3611

	/* begin block 3 */
		// Start line: 3613
	/* end block 3 */
	// End Line: 3614

	/* begin block 4 */
		// Start line: 3613
	/* end block 4 */
	// End Line: 3614

int iMCRD_FormatCard(int card)

{
  CARDINFO_def *pCVar1;
  uint uVar2;
  int iVar3;
  
  pCVar1 = MCRD_getcard(card);
  uVar2 = MemCardFormat(gMemCardInfo.channel);
  if (uVar2 == 1) {
    iVar3 = -1;
  }
  else {
    iVar3 = 0;
    if (((int)uVar2 < 2) || (iVar3 = 0, uVar2 != 2)) goto LAB_800504b0;
    iVar3 = -4;
  }
  pCVar1->status = iVar3;
  iVar3 = -1;
LAB_800504b0:
  pCVar1->status = 0;
  pCVar1->freeblocks = 0xf;
  return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_HandleError(int func /*$s0*/, int opResult /*$s2*/, int card /*$s3*/)
 // line 1737, offset 0x800504cc
	/* begin block 1 */
		// Start line: 1738
		// Start offset: 0x800504CC
		// Variables:
	// 		int code; // $s4
	// 		struct CARDINFO_def *pCI; // $s1

		/* begin block 1.1 */
			// Start line: 1813
			// Start offset: 0x800505F4
			// Variables:
		// 		int numberoftries; // $s0
		// 		int result; // $v1
		/* end block 1.1 */
		// End offset: 0x80050644
		// End Line: 1835
	/* end block 1 */
	// End offset: 0x800506C8
	// End Line: 1896

	/* begin block 2 */
		// Start line: 3694
	/* end block 2 */
	// End Line: 3695

	/* begin block 3 */
		// Start line: 3699
	/* end block 3 */
	// End Line: 3700

	/* begin block 4 */
		// Start line: 3699
	/* end block 4 */
	// End Line: 3700

int iMCRD_HandleError(int func,int opResult,int card)

{
  CARDINFO_def *pCVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  pCVar1 = MCRD_getcard(card);
  if (opResult != 0) {
    if (func == 2) {
      iVar5 = 0xd;
    }
    else {
      if (func < 3) {
        if (func == 1) {
          iVar5 = 10;
        }
      }
      else {
        if (func == 3) {
          iVar5 = 0x10;
        }
      }
    }
  }
  switch(opResult) {
  case 0:
    goto LAB_800506c8;
  case 1:
    pCVar1->status = -1;
    iVar4 = 2;
    break;
  case 2:
    pCVar1->status = -4;
    iVar4 = 3;
    break;
  case 3:
    uVar2 = MemCardAccept(gMemCardInfo.channel);
    if (uVar2 != 0) {
      gMemCardInfo.task = LOAD_CARD;
      gMemCardInfo.bReady = 0;
      return iVar5;
    }
    iVar3 = 0x17;
    goto LAB_80050698;
  case 4:
    if (func == 2) {
      iVar4 = (*gMemCardInfo.ConfirmFormatProc)();
      iVar3 = 0;
      if (iVar4 != 0) {
        do {
          iVar4 = iMCRD_FormatCard(card);
          iVar3 = iVar3 + 1;
          if (iVar4 != -1) {
            gMemCardInfo.task = WRITE_FILE;
            return 6;
          }
        } while (iVar3 < 3);
        pCVar1->status = -2;
        iVar4 = 7;
        break;
      }
    }
    pCVar1->status = -2;
    iVar4 = 5;
    break;
  case 5:
    iVar4 = 0x13;
    break;
  case 6:
    iVar4 = (*gMemCardInfo.ConfirmOverwriteProc)();
    iVar3 = 0xe;
    if (iVar4 != 0) {
      MemCardDeleteFile(gMemCardInfo.channel,gMemCardInfo.fileinfo.name);
      gMemCardInfo.task = WRITE_FILE;
      return 0x15;
    }
LAB_80050698:
    pCVar1->lasterror = iVar3;
    gMemCardInfo.bReady = 1;
    return iVar5;
  case 7:
    iVar4 = 0x14;
    break;
  default:
    iVar4 = 0x17;
  }
  pCVar1->lasterror = iVar4;
  gMemCardInfo.bReady = 1;
LAB_800506c8:
  return iVar5;
}



// decompiled code
// original method signature: 
// int /*$ra*/ iMCRD_DefaultCBProc1()
 // line 1898, offset 0x800506e8
	/* begin block 1 */
		// Start line: 4022
	/* end block 1 */
	// End Line: 4023

	/* begin block 2 */
		// Start line: 4025
	/* end block 2 */
	// End Line: 4026

	/* begin block 3 */
		// Start line: 4025
	/* end block 3 */
	// End Line: 4026

	/* begin block 4 */
		// Start line: 4026
	/* end block 4 */
	// End Line: 4027

	/* begin block 5 */
		// Start line: 4026
	/* end block 5 */
	// End Line: 4027

/* WARNING: Unknown calling convention yet parameter storage is locked */

int iMCRD_DefaultCBProc1(void)

{
  return 1;
}



// decompiled code
// original method signature: 
// short /*$ra*/ ascii2sjis(unsigned char ascii_code /*$a2*/)
 // line 2063, offset 0x800506f0
	/* begin block 1 */
		// Start line: 2064
		// Start offset: 0x800506F0
		// Variables:
	// 		unsigned short sjis_code; // $v1
	// 		unsigned char stmp; // $v1
	// 		unsigned char stmp2; // $a1
	/* end block 1 */
	// End offset: 0x80050808
	// End Line: 2097

	/* begin block 2 */
		// Start line: 4191
	/* end block 2 */
	// End Line: 4192

	/* begin block 3 */
		// Start line: 4355
	/* end block 3 */
	// End Line: 4356

	/* begin block 4 */
		// Start line: 4355
	/* end block 4 */
	// End Line: 4356

	/* begin block 5 */
		// Start line: 4357
	/* end block 5 */
	// End Line: 4358

short ascii2sjis(uchar ascii_code)

{
  ushort uVar1;
  ushort uVar3;
  int iVar2;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  if ((byte)(ascii_code - 0x20) < 0x10) {
    iVar4 = 1;
  }
  else {
    if (9 < (byte)(ascii_code - 0x30)) {
      if ((byte)(ascii_code - 0x3a) < 7) {
        iVar4 = 0xb;
      }
      else {
        if ((byte)(ascii_code + 0xbf) < 0x1a) {
          iVar2 = 1;
        }
        else {
          if ((byte)(ascii_code + 0xa5) < 6) {
            iVar4 = 0x25;
          }
          else {
            if ((byte)(ascii_code + 0x9f) < 0x1a) {
              iVar2 = 2;
            }
            else {
              iVar4 = 0x3f;
              if (3 < (byte)(ascii_code + 0x85)) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  if (iVar4 == 0) {
    iVar2 = ((uint)(&ascii_table)[iVar2 * 2] + (uint)ascii_code) -
            (uint)USHORT_ARRAY_80052a7a[iVar2 * 2];
    uVar3 = (ushort)((uint)iVar2 >> 8);
    uVar1 = (short)iVar2 * 0x100;
  }
  else {
    uVar3 = (ushort)((uint)ascii_k_table[(uint)ascii_code - (iVar4 + 0x1f)] >> 8);
    uVar1 = ascii_k_table[(uint)ascii_code - (iVar4 + 0x1f)] << 8;
  }
  return (short)(uVar1 | uVar3 & 0xff);
}



// decompiled code
// original method signature: 
// unsigned char /*$ra*/ sjis2ascii(short sjis_code /*$a0*/)
 // line 2102, offset 0x80050810
	/* begin block 1 */
		// Start line: 2104
		// Start offset: 0x80050810
		// Variables:
	// 		int idx; // $a1
	// 		unsigned char bottom; // $a2
	/* end block 1 */
	// End offset: 0x800508B8
	// End Line: 2123

	/* begin block 2 */
		// Start line: 4436
	/* end block 2 */
	// End Line: 4437

	/* begin block 3 */
		// Start line: 4442
	/* end block 3 */
	// End Line: 4443

	/* begin block 4 */
		// Start line: 4442
	/* end block 4 */
	// End Line: 4443

	/* begin block 5 */
		// Start line: 4443
	/* end block 5 */
	// End Line: 4444

	/* begin block 6 */
		// Start line: 4443
	/* end block 6 */
	// End Line: 4444

uchar sjis2ascii(short sjis_code)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = (int)((uint)(ushort)sjis_code << 0x10) >> 0x18;
  if ((sjis_code & 0xffU) == 0x81) {
    return *(uchar *)((int)USHORT_ARRAY_80052a90 + (uVar1 & 0xff));
  }
  if ((sjis_code & 0xffU) == 0x82) {
    if (9 < uVar1 - 0x4f) {
      if (uVar1 - 0x60 < 0x1a) {
        iVar2 = 1;
      }
      else {
        if ((uVar1 + 0x7f & 0xff) < 0x1a) {
          iVar2 = 2;
        }
      }
    }
    return (&UCHAR_0_80052ac9)[iVar2 * 2] +
           ((char)(((uint)(ushort)sjis_code << 0x10) >> 0x18) - (&sjis_table)[iVar2 * 2]);
  }
  return '\0';
}





