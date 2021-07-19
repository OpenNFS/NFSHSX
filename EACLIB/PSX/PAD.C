#include "THISDUST.H"
#include "PAD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ padinit()
 // line 66, offset 0x800e40e8
	/* begin block 1 */
		// Start line: 132
	/* end block 1 */
	// End Line: 133

	/* begin block 2 */
		// Start line: 132
	/* end block 2 */
	// End Line: 133

/* WARNING: Unknown calling convention yet parameter storage is locked */

void padinit(void)

{
  if (gPadinfo.initialized == 0) {
    PadInitDirect(0x8013e8f0,&DAT_8013e8f8);
    PadStartCom();
    blockclear((undefined *)&gPadinfo,0x54);
    gPadinfo.initialized = 1;
    addtimer((int)PAD_update);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PAD_restore()
 // line 83, offset 0x800e4158
	/* begin block 1 */
		// Start line: 167
	/* end block 1 */
	// End Line: 168

	/* begin block 2 */
		// Start line: 167
	/* end block 2 */
	// End Line: 168

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PAD_restore(void)

{
  if (gPadinfo.initialized != 0) {
    deltimer((int)PAD_update);
    PadStopCom();
    gPadinfo.initialized = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ PAD_state(int padID /*$a0*/)
 // line 172, offset 0x800e41ac
	/* begin block 1 */
		// Start line: 301
	/* end block 1 */
	// End Line: 302

	/* begin block 2 */
		// Start line: 306
	/* end block 2 */
	// End Line: 307

	/* begin block 3 */
		// Start line: 306
	/* end block 3 */
	// End Line: 307

ushort PAD_state(int padID)

{
  ushort uVar1;
  
  if ((gPadinfo.initialized == 0) || (7 < (uint)padID)) {
    uVar1 = 0;
  }
  else {
    uVar1 = PAD_convert((PAD_COMMON *)(&gPadinfo.buf[0].nopad + padID * 8));
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ PAD_convert(struct PAD_COMMON *pad /*$a0*/)
 // line 299, offset 0x800e41fc
	/* begin block 1 */
		// Start line: 576
	/* end block 1 */
	// End Line: 577

	/* begin block 2 */
		// Start line: 452
	/* end block 2 */
	// End Line: 453

	/* begin block 3 */
		// Start line: 453
	/* end block 3 */
	// End Line: 454

	/* begin block 4 */
		// Start line: 453
	/* end block 4 */
	// End Line: 454

ushort PAD_convert(PAD_COMMON *pad)

{
  return ~*(ushort *)&pad->data;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PAD_update()
 // line 342, offset 0x800e4210
	/* begin block 1 */
		// Start line: 343
		// Start offset: 0x800E4210
		// Variables:
	// 		int i; // $t0
	/* end block 1 */
	// End offset: 0x800E42FC
	// End Line: 376

	/* begin block 2 */
		// Start line: 496
	/* end block 2 */
	// End Line: 497

	/* begin block 3 */
		// Start line: 538
	/* end block 3 */
	// End Line: 539

	/* begin block 4 */
		// Start line: 538
	/* end block 4 */
	// End Line: 539

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PAD_update(void)

{
  byte bVar1;
  bool bVar2;
  PAD_COMMON *pPVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  PAD_COMMON *pPVar8;
  PAD_COMMON *pPVar9;
  
  pPVar8 = gPadinfo.buf;
  pPVar9 = (PAD_COMMON *)((int)&gPadinfo.buf[0].data + 6);
  iVar7 = 0;
  do {
    if ((&gPadinfo.state.bActive)[iVar7] == '\0') {
      blockmove((undefined4 *)(&gPadinfo.state.bActive + iVar7),(undefined4 *)pPVar8,8);
      iVar5 = 0x18;
      pPVar3 = pPVar9;
    }
    else {
      iVar5 = 0x20;
      pPVar3 = pPVar8;
    }
    blockfill((undefined *)pPVar3,iVar5,0xff);
    pPVar9 = (PAD_COMMON *)&pPVar9[3].data;
    iVar7 = iVar7 + 8;
    pPVar8 = (PAD_COMMON *)&pPVar8[3].data;
  } while (iVar7 < 0x10);
  iVar5 = 0;
  pbVar4 = (byte *)((int)&gPadinfo.buf[6].data + 3);
  pcVar6 = (char *)((int)&gPadinfo.buf[6].data + 2);
  iVar7 = 0;
  do {
    bVar2 = (&gPadinfo.buf[0].nopad)[iVar7] == '\0';
    if ((bVar2 != (bool)*pcVar6) && (bVar1 = *pbVar4, *pbVar4 = bVar1 + 1, 5 < bVar1)) {
      *(bool *)pcVar6 = bVar2;
      *pbVar4 = 0;
    }
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 8;
  } while (iVar5 < 8);
  return;
}





