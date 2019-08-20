#include "NFS4.H"
#include "DEVICE.H"

// decompiled code
// original method signature: 
// int /*$ra*/ Device_VerifyType__Fi(int port /*$a0*/)
 // line 51, offset 0x800bd3c0
	/* begin block 1 */
		// Start line: 52
		// Start offset: 0x800BD3C0
	/* end block 1 */
	// End offset: 0x800BD454
	// End Line: 67

int Device_VerifyType__Fi(int port)

{
  uint uVar1;
  uint uVar2;
  
  if (gUseFrontend != 0) {
    if (gPadinfo.buf[port].nopad != '\0') {
      return 0;
    }
    uVar1 = -(uint)(port != 0);
    uVar2 = uVar1 & 2;
    if ((uint)gPadinfo.buf[port].ID != (int)*(short *)((int)frontEnd.controlType + uVar2)) {
      InGame_ResetPSXController__Fii
                ((uint)(port != 0),
                 *(int *)((int)GameSetup_gData.controllerData.controllerConfig + (uVar1 & 4)));
      *(ushort *)((int)frontEnd.controlType + uVar2) = (ushort)gPadinfo.buf[port].ID;
      return 1;
    }
  }
  return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Device_Fail__Fi(int port /*$s0*/)
 // line 72, offset 0x800bd468
	/* begin block 1 */
		// Start line: 73
		// Start offset: 0x800BD468
		// Variables:
	// 		static unsigned char failtime[2]; // offset 0x0
	/* end block 1 */
	// End offset: 0x800BD4C8
	// End Line: 88

int Device_Fail__Fi(int port)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = Device_VerifyType__Fi(port);
  if (iVar2 == 0) {
    pbVar3 = (byte *)((int)&failtime_98 + (uint)(port != 0));
    bVar1 = *pbVar3;
    if (8 < bVar1) {
      return 1;
    }
    *pbVar3 = bVar1 + 1;
  }
  else {
    *(undefined *)((int)&failtime_98 + (uint)(port != 0)) = 0;
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Device_Update__Fv()
 // line 109, offset 0x800bd4d8
	/* begin block 1 */
		// Start line: 110
		// Start offset: 0x800BD4D8
	/* end block 1 */
	// End offset: 0x800BD5A8
	// End Line: 161

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Device_Update__Fv(void)

{
  int iVar1;
  int iVar2;
  
  PAD_update();
  if (simVar.pauseSim == 0) {
    if (DAT_00001234 != 0) {
      DAT_00001234 = 0;
      DAT_00001230 = 0xffffffff;
      DAT_00001238 = 0;
      DAT_0000123c = 0;
    }
  }
  else {
    DAT_00001234 = 1;
    DAT_00001238 = 0x11;
    DAT_0000123c = 0x11;
  }
  if (simVar.pauseSim == 0) {
    iVar2 = Device_Fail__Fi(0);
    iVar1 = GameSetup_gData.commMode;
    if (iVar2 == 0) {
      if ((GameSetup_gData.commMode == 1) && (iVar2 = Device_Fail__Fi(4), iVar2 != 0)) {
        DAT_0000122c = iVar1;
        DAT_00001230 = 4;
        DAT_00001248 = 1;
      }
      else {
        DAT_0000122c = 0;
      }
    }
    else {
      DAT_0000122c = 1;
      DAT_00001230 = 0;
      DAT_00001248 = 0;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Device_StartUp__Fv()
 // line 169, offset 0x800bd5b8
	/* begin block 1 */
		// Start line: 170
		// Start offset: 0x800BD5B8
	/* end block 1 */
	// End offset: 0x800BD5B8
	// End Line: 171

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Device_StartUp__Fv(void)

{
  DAT_0000122c = 0;
  DAT_00001230 = 0xffffffff;
  DAT_00001234 = 0;
  DAT_00001238 = 0;
  DAT_0000123c = 0;
  DAT_00001240 = 0;
  DAT_00001244 = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Device_SetHardCodedKeys__Fv()
 // line 195, offset 0x800bd5e0
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x800BD5E0
	/* end block 1 */
	// End offset: 0x800BD5E0
	// End Line: 201

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Device_SetHardCodedKeys__Fv(void)

{
  INT_80113e74 = 0;
  INT_80113e78 = (int)&DAT_00001003;
  INT_80113e7c = (int)&DAT_00004003;
  INT_80113e80 = (int)&DAT_00008003;
  INT_80113e84 = (int)&DAT_00002003;
  INT_80113e88 = (int)&DAT_00400003;
  INT_80113e8c = 0x803;
  INT_80113e94 = 0x103;
  INT_80113ed4 = (int)&DAT_00100003;
  INT_80113ed8 = 0x800003;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Device_PSXPad__FUl(unsigned long param /*$s1*/)
 // line 244, offset 0x800bd644
	/* begin block 1 */
		// Start line: 245
		// Start offset: 0x800BD644
	/* end block 1 */
	// End offset: 0x800BD698
	// End Line: 251

int Device_PSXPad__FUl(ulong param)

{
  int iVar1;
  
  iVar1 = Device_VerifyType__Fi(param >> 0x10);
  if ((iVar1 == 0) ||
     (iVar1 = 0xff, (~(uint)*(ushort *)&gPadinfo.buf[param >> 0x10].data & 0xffff & param) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ Device_ReadPad__FiUl(int port /*$s0*/, unsigned long param /*$s1*/)
 // line 261, offset 0x800bd6ac
	/* begin block 1 */
		// Start line: 262
		// Start offset: 0x800BD6AC
		// Variables:
	// 		char *analogs; // $a0
	/* end block 1 */
	// End offset: 0x800BD8C8
	// End Line: 303

void * Device_ReadPad__FiUl(int port,ulong param)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = Device_VerifyType__Fi(port);
  if (iVar2 == 0) {
    return (void *)0x0;
  }
  if (gPadinfo.buf[port].ID == '#') {
    if (((param & 0xffff) != 0x4000) || (*(byte *)((int)&gPadinfo.buf[port].data + 3) < 0x40)) {
      if ((gPadinfo.buf[port].ID == '#') &&
         (((param & 0xffff) == 0x8000 && (0x3f < *(byte *)((int)&gPadinfo.buf[port].data + 4))))) {
        return &DAT_00000001;
      }
      goto LAB_800bd758;
    }
LAB_800bd79c:
    puVar3 = &DAT_00000001;
  }
  else {
LAB_800bd758:
    if (gPadinfo.buf[port].ID == 's') {
      if ((param & 0xffff) == 0x80) {
        if (*(byte *)((int)&gPadinfo.buf[port].data + 2) < 0x41) goto LAB_800bd79c;
        if (*(byte *)((int)&gPadinfo.buf[port].data + 4) < 0x41) {
          return &DAT_00000001;
        }
      }
      if (gPadinfo.buf[port].ID == 's') {
        if ((param & 0xffff) == 0x20) {
          if (0xbf < *(byte *)((int)&gPadinfo.buf[port].data + 2)) {
            return &DAT_00000001;
          }
          if (0xbf < *(byte *)((int)&gPadinfo.buf[port].data + 4)) {
            return &DAT_00000001;
          }
        }
        if (gPadinfo.buf[port].ID == 's') {
          if ((param & 0xffff) == 0x10) {
            if (*(byte *)((int)&gPadinfo.buf[port].data + 5) < 0x41) {
              return &DAT_00000001;
            }
            if (*(byte *)((int)&gPadinfo.buf[port].data + 3) < 0x41) {
              return &DAT_00000001;
            }
          }
          if ((gPadinfo.buf[port].ID == 's') && ((param & 0xffff) == 0x40)) {
            if (0xbf < *(byte *)((int)&gPadinfo.buf[port].data + 5)) {
              return &DAT_00000001;
            }
            if (0xbf < *(byte *)((int)&gPadinfo.buf[port].data + 3)) {
              return &DAT_00000001;
            }
          }
        }
      }
    }
    uVar1 = PAD_state(port);
    puVar3 = (undefined *)(uint)(((uint)uVar1 & param) != 0);
  }
  return puVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Device_PSXPadMulti__FUl(unsigned long param /*$s0*/)
 // line 306, offset 0x800bd8dc
	/* begin block 1 */
		// Start line: 307
		// Start offset: 0x800BD8DC
	/* end block 1 */
	// End offset: 0x800BD9A8
	// End Line: 343

int Device_PSXPadMulti__FUl(ulong param)

{
  void *pvVar1;
  int iVar2;
  
  if (simVar.pauseSim == 0) {
    pvVar1 = Device_ReadPad__FiUl(0,param);
    if (pvVar1 == (void *)0x0) {
      if ((1 < Replay_ReplayMode) || (iVar2 = 0, GameSetup_gData.commMode == 1)) {
        pvVar1 = Device_ReadPad__FiUl(4,param);
        if (pvVar1 == (void *)0x0) {
          iVar2 = 0;
        }
        else {
          if ((param & 0xffff) == 8) {
            DAT_00001248 = 1;
            DAT_00001230 = 4;
          }
          iVar2 = 0xff;
        }
      }
    }
    else {
      iVar2 = 0xff;
      if ((param & 0xffff) == 8) {
        DAT_00001230 = 0;
        DAT_00001248 = 0;
      }
    }
  }
  else {
    pvVar1 = Device_ReadPad__FiUl(DAT_00001230,param);
    iVar2 = 0xff;
    if (pvVar1 == (void *)0x0) {
      iVar2 = 0;
    }
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Device_Analog__FUl(unsigned long param /*$s0*/)
 // line 352, offset 0x800bd9b8
	/* begin block 1 */
		// Start line: 353
		// Start offset: 0x800BD9B8
		// Variables:
	// 		int min; // $a1
	// 		int max; // $a0
	// 		int v; // $v1
	/* end block 1 */
	// End offset: 0x800BDAA4
	// End Line: 385

int Device_Analog__FUl(ulong param)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = Device_VerifyType__Fi(param >> 0x14);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = (uint)*(byte *)((int)&gPadinfo.buf[param >> 0x14].data + (param >> 0x10 & 3) + 2);
  uVar5 = param >> 8 & 0xff;
  uVar4 = param & 0xff;
  if (uVar5 < uVar4) {
    if (uVar5 <= uVar2) {
      iVar1 = uVar2 - uVar5;
      if (uVar4 < uVar2) {
        return 0xff;
      }
      iVar3 = uVar4 - uVar5;
LAB_800bda70:
      iVar6 = (iVar1 * 0xff) / iVar3;
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if (iVar3 == -1) {
        if (iVar1 * 0xff == -0x80000000) {
          trap(0x1800);
          return iVar6;
        }
        return iVar6;
      }
      return iVar6;
    }
  }
  else {
    if (uVar5 != uVar4) {
      if (uVar2 < uVar4) {
        return 0xff;
      }
      iVar1 = uVar5 - uVar2;
      if (uVar2 <= uVar5) {
        iVar3 = uVar5 - uVar4;
        goto LAB_800bda70;
      }
    }
  }
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Device_Null__FUl(unsigned long param /*$a0*/)
 // line 393, offset 0x800bdab8
	/* begin block 1 */
		// Start line: 394
		// Start offset: 0x800BDAB8
	/* end block 1 */
	// End offset: 0x800BDAB8
	// End Line: 395

int Device_Null__FUl(ulong param)

{
  return 0;
}




