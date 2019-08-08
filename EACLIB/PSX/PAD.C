#include "NFS4.H"
#include "PAD.H"

// decompiled code
// original method signature: 
// void /*$ra*/ padinit()
 // line 66, offset 0x800e40e8
void padinit(void)
{
  if (_gPadinfo == 0) {
    PadInitDirect(&Padglobal,&DAT_8013e8f8);
    PadStartCom();
    blockclear(&gPadinfo,0x54);
    _gPadinfo = 1;
    addtimer(PAD_update);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ PAD_restore()
 // line 83, offset 0x800e4158
void PAD_restore(void)
{
  if (_gPadinfo != 0) {
    deltimer(PAD_update);
    PadStopCom();
    _gPadinfo = 0;
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
  
  if ((_gPadinfo == 0) || (7 < (uint)padID)) {
    uVar1 = 0;
  }
  else {
    uVar1 = PAD_convert((PAD_COMMON *)(&DAT_8013e8a0 + padID * 8));
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

void PAD_update(void)
{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar9 = &DAT_8013e8a0;
  puVar10 = &DAT_8013e8a8;
  iVar8 = 0;
  do {
    if ((&Padglobal)[iVar8] == '\0') {
      blockmove(&Padglobal + iVar8,puVar9,8);
      uVar5 = 0x18;
      puVar3 = puVar10;
    }
    else {
      uVar5 = 0x20;
      puVar3 = puVar9;
    }
    blockfill(puVar3,uVar5,0xff);
    puVar10 = puVar10 + 0x20;
    iVar8 = iVar8 + 8;
    puVar9 = puVar9 + 0x20;
  } while (iVar8 < 0x10);
  iVar7 = 0;
  pbVar4 = &DAT_8013e8e1;
  pcVar6 = &DAT_8013e8e0;
  iVar8 = 0;
  do {
    cVar1 = (&DAT_8013e8a0)[iVar8];
    if (((cVar1 == '\0') != (bool)*pcVar6) && (bVar2 = *pbVar4, *pbVar4 = bVar2 + 1, 5 < bVar2)) {
      *(bool *)pcVar6 = cVar1 == '\0';
      *pbVar4 = 0;
    }
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 8;
  } while (iVar7 < 8);
  return;


}





