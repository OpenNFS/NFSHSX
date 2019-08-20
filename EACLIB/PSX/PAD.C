#include "NFS4.H"
#include "PAD.H"

// decompiled code
// original method signature: 
// void /*$ra*/ padinit()
 // line 66, offset 0x800e40e8
/* WARNING: Unknown calling convention yet parameter storage is locked */

void padinit(void)

{
  if (gPadinfo.initialized == 0) {
    PadInitDirect(&Padglobal,&PAD_COMMON_8013e8f8);
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
ushort PAD_state(int padID)

{
  ushort uVar1;
  
  if ((gPadinfo.initialized == 0) || (7 < (uint)padID)) {
    uVar1 = 0;
  }
  else {
    uVar1 = PAD_convert(gPadinfo.buf + padID);
  }
  return uVar1;
}



// decompiled code
// original method signature: 
// unsigned short /*$ra*/ PAD_convert(struct PAD_COMMON *pad /*$a0*/)
 // line 299, offset 0x800e41fc
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void PAD_update(void)

{
  byte bVar1;
  bool bVar2;
  PAD_COMMON *pPVar3;
  byte *pbVar4;
  int iVar5;
  _62fake *p_Var6;
  int iVar7;
  PAD_COMMON *pPVar8;
  PAD_COMMON *pPVar9;
  
  pPVar8 = gPadinfo.buf;
  pPVar9 = gPadinfo.buf + 1;
  iVar7 = 0;
  do {
    if ((&Padglobal.nopad)[iVar7] == '\0') {
      blockmove((undefined4 *)(&Padglobal.nopad + iVar7),(undefined4 *)pPVar8,8);
      iVar5 = 0x18;
      pPVar3 = pPVar9;
    }
    else {
      iVar5 = 0x20;
      pPVar3 = pPVar8;
    }
    blockfill((undefined *)pPVar3,iVar5,0xff);
    pPVar9 = pPVar9 + 4;
    iVar7 = iVar7 + 8;
    pPVar8 = pPVar8 + 4;
  } while (iVar7 < 0x10);
  iVar5 = 0;
  pbVar4 = &gPadinfo.state[0].time;
  p_Var6 = gPadinfo.state;
  iVar7 = 0;
  do {
    bVar2 = (&gPadinfo.buf[0].nopad)[iVar7] == '\0';
    if ((bVar2 != (bool)p_Var6->bActive) && (bVar1 = *pbVar4, *pbVar4 = bVar1 + 1, 5 < bVar1)) {
      *(bool *)&p_Var6->bActive = bVar2;
      *pbVar4 = 0;
    }
    pbVar4 = pbVar4 + 2;
    p_Var6 = p_Var6 + 1;
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 8;
  } while (iVar5 < 8);
  return;
}




