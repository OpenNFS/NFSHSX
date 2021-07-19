#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 102
	/* end block 2 */
	// End Line: 103

	/* begin block 3 */
		// Start line: 102
	/* end block 3 */
	// End Line: 103

	/* begin block 4 */
		// Start line: 103
	/* end block 4 */
	// End Line: 104

	/* begin block 5 */
		// Start line: 103
	/* end block 5 */
	// End Line: 104

int Device_VerifyType__Fi(int port)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (gUseFrontend != 0) {
    iVar3 = port * 8;
    if ((&gPadinfo.buf[0].nopad)[iVar3] != '\0') {
      return 0;
    }
    uVar1 = -(uint)(port != 0);
    uVar2 = uVar1 & 2;
    if ((uint)(&gPadinfo.buf[0].ID)[iVar3] != (int)*(short *)((int)frontEnd.controlType + uVar2)) {
      InGame_ResetPSXController__Fii
                ((uint)(port != 0),
                 *(int *)((int)GameSetup_gData.controllerData.controllerConfig + (uVar1 & 4)));
      *(ushort *)((int)frontEnd.controlType + uVar2) = (ushort)(&gPadinfo.buf[0].ID)[iVar3];
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

	/* begin block 2 */
		// Start line: 139
	/* end block 2 */
	// End Line: 140

	/* begin block 3 */
		// Start line: 145
	/* end block 3 */
	// End Line: 146

	/* begin block 4 */
		// Start line: 145
	/* end block 4 */
	// End Line: 146

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

	/* begin block 2 */
		// Start line: 197
	/* end block 2 */
	// End Line: 198

	/* begin block 3 */
		// Start line: 219
	/* end block 3 */
	// End Line: 220

	/* begin block 4 */
		// Start line: 219
	/* end block 4 */
	// End Line: 220

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Device_Update__Fv(void)

{
  int iVar1;
  int iVar2;
  
  PAD_update();
  if (simVar.pauseSim == 0) {
    if (Device_gPaused != 0) {
      Device_gPaused = 0;
      Device_gPausePort = -1;
      Device_gToggleTime = 0;
      INT_8013d788 = 0;
    }
  }
  else {
    Device_gPaused = 1;
    Device_gToggleTime = 0x11;
    INT_8013d788 = 0x11;
  }
  if (simVar.pauseSim == 0) {
    iVar2 = Device_Fail__Fi(0);
    iVar1 = GameSetup_gData.commMode;
    if (iVar2 == 0) {
      if ((GameSetup_gData.commMode == 1) && (iVar2 = Device_Fail__Fi(4), iVar2 != 0)) {
        Device_gForcePause = iVar1;
        Device_gPausePort = 4;
        Device_gPausePortIndex = '\x01';
      }
      else {
        Device_gForcePause = 0;
      }
    }
    else {
      Device_gForcePause = 1;
      Device_gPausePort = 0;
      Device_gPausePortIndex = '\0';
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

	/* begin block 2 */
		// Start line: 330
	/* end block 2 */
	// End Line: 331

	/* begin block 3 */
		// Start line: 339
	/* end block 3 */
	// End Line: 340

	/* begin block 4 */
		// Start line: 339
	/* end block 4 */
	// End Line: 340

	/* begin block 5 */
		// Start line: 340
	/* end block 5 */
	// End Line: 341

	/* begin block 6 */
		// Start line: 340
	/* end block 6 */
	// End Line: 341

	/* begin block 7 */
		// Start line: 342
	/* end block 7 */
	// End Line: 343

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Device_StartUp__Fv(void)

{
  Device_gForcePause = 0;
  Device_gPausePort = -1;
  Device_gPaused = 0;
  Device_gToggleTime = 0;
  INT_8013d788 = 0;
  Device_gPrev = 0;
  INT_8013d790 = 0;
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

	/* begin block 2 */
		// Start line: 378
	/* end block 2 */
	// End Line: 379

	/* begin block 3 */
		// Start line: 386
	/* end block 3 */
	// End Line: 387

	/* begin block 4 */
		// Start line: 386
	/* end block 4 */
	// End Line: 387

	/* begin block 5 */
		// Start line: 391
	/* end block 5 */
	// End Line: 392

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Device_SetHardCodedKeys__Fv(void)

{
  INT_80113e74 = 0;
  INT_80113e78 = (int)&DAT_00001003;
  INT_80113e7c = (int)&DAT_00004003;
  INT_80113e80 = (int)&DAT_00008003;
  INT_80113e84 = (int)&DAT_00002003;
  INT_80113e88 = (int)&DAT_00400003;
  INT_ARRAY_80113e8c[0] = 0x803;
  INT_ARRAY_80113e94[0] = 0x103;
  INT_80113ed4 = 0x100003;
  INT_ARRAY_80113ed8[0] = 0x800003;
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

	/* begin block 2 */
		// Start line: 455
	/* end block 2 */
	// End Line: 456

	/* begin block 3 */
		// Start line: 494
	/* end block 3 */
	// End Line: 495

	/* begin block 4 */
		// Start line: 494
	/* end block 4 */
	// End Line: 495

int Device_PSXPad__FUl(ulong param)

{
  int iVar1;
  
  iVar1 = Device_VerifyType__Fi(param >> 0x10);
  if ((iVar1 == 0) ||
     (iVar1 = 0xff,
     (~(uint)*(ushort *)(&gPadinfo.buf[0].data + (param >> 0x10)) & 0xffff & param) == 0)) {
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

	/* begin block 2 */
		// Start line: 518
	/* end block 2 */
	// End Line: 519

	/* begin block 3 */
		// Start line: 529
	/* end block 3 */
	// End Line: 530

	/* begin block 4 */
		// Start line: 529
	/* end block 4 */
	// End Line: 530

void * Device_ReadPad__FiUl(int port,ulong param)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = Device_VerifyType__Fi(port);
  if (iVar2 == 0) {
    return (void *)0x0;
  }
  if ((&gPadinfo.buf[0].ID)[port * 8] == '#') {
    if (((param & 0xffff) != 0x4000) ||
       (*(byte *)((int)&gPadinfo.buf[0].data + port * 8 + 3) < 0x40)) {
      if (((&gPadinfo.buf[0].ID)[port * 8] == '#') &&
         (((param & 0xffff) == 0x8000 &&
          (0x3f < *(byte *)((int)&gPadinfo.buf[0].data + port * 8 + 4))))) {
        return &DAT_00000001;
      }
      goto LAB_800bd758;
    }
LAB_800bd79c:
    puVar3 = &DAT_00000001;
  }
  else {
LAB_800bd758:
    iVar2 = port * 8;
    if ((&gPadinfo.buf[0].ID)[iVar2] == 's') {
      if ((param & 0xffff) == 0x80) {
        if (*(byte *)((int)&gPadinfo.buf[0].data + iVar2 + 2) < 0x41) goto LAB_800bd79c;
        if (*(byte *)((int)&gPadinfo.buf[0].data + iVar2 + 4) < 0x41) {
          return &DAT_00000001;
        }
      }
      if ((&gPadinfo.buf[0].ID)[port * 8] == 's') {
        if ((param & 0xffff) == 0x20) {
          if (0xbf < *(byte *)((int)&gPadinfo.buf[0].data + iVar2 + 2)) {
            return &DAT_00000001;
          }
          if (0xbf < *(byte *)((int)&gPadinfo.buf[0].data + iVar2 + 4)) {
            return &DAT_00000001;
          }
        }
        if ((&gPadinfo.buf[0].ID)[port * 8] == 's') {
          if ((param & 0xffff) == 0x10) {
            if (*(byte *)((int)&gPadinfo.buf[0].data + iVar2 + 5) < 0x41) {
              return &DAT_00000001;
            }
            if (*(byte *)((int)&gPadinfo.buf[0].data + iVar2 + 3) < 0x41) {
              return &DAT_00000001;
            }
          }
          if (((&gPadinfo.buf[0].ID)[port * 8] == 's') && ((param & 0xffff) == 0x40)) {
            if (0xbf < *(byte *)((int)&gPadinfo.buf[0].data + iVar2 + 5)) {
              return &DAT_00000001;
            }
            if (0xbf < *(byte *)((int)&gPadinfo.buf[0].data + iVar2 + 3)) {
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

	/* begin block 2 */
		// Start line: 615
	/* end block 2 */
	// End Line: 616

	/* begin block 3 */
		// Start line: 619
	/* end block 3 */
	// End Line: 620

	/* begin block 4 */
		// Start line: 619
	/* end block 4 */
	// End Line: 620

	/* begin block 5 */
		// Start line: 621
	/* end block 5 */
	// End Line: 622

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
            Device_gPausePortIndex = '\x01';
            Device_gPausePort = 4;
          }
          iVar2 = 0xff;
        }
      }
    }
    else {
      iVar2 = 0xff;
      if ((param & 0xffff) == 8) {
        Device_gPausePort = 0;
        Device_gPausePortIndex = '\0';
      }
    }
  }
  else {
    pvVar1 = Device_ReadPad__FiUl(Device_gPausePort,param);
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

	/* begin block 2 */
		// Start line: 703
	/* end block 2 */
	// End Line: 704

	/* begin block 3 */
		// Start line: 713
	/* end block 3 */
	// End Line: 714

	/* begin block 4 */
		// Start line: 713
	/* end block 4 */
	// End Line: 714

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
  uVar2 = (uint)*(byte *)((int)&gPadinfo.buf[0].data + (param >> 0x14) * 8 + (param >> 0x10 & 3) + 2
                         );
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

	/* begin block 2 */
		// Start line: 789
	/* end block 2 */
	// End Line: 790

	/* begin block 3 */
		// Start line: 798
	/* end block 3 */
	// End Line: 799

	/* begin block 4 */
		// Start line: 798
	/* end block 4 */
	// End Line: 799

	/* begin block 5 */
		// Start line: 799
	/* end block 5 */
	// End Line: 800

	/* begin block 6 */
		// Start line: 799
	/* end block 6 */
	// End Line: 800

int Device_Null__FUl(ulong param)

{
  return 0;
}





