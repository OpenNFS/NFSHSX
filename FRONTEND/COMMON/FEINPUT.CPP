#include "THISDUST.H"
#include "FEINPUT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FEInput_VerifyControllerValues__Fi(int controller /*$a0*/)
 // line 28, offset 0x80023898
	/* begin block 1 */
		// Start line: 29
		// Start offset: 0x80023898
	/* end block 1 */
	// End offset: 0x800238E8
	// End Line: 38

	/* begin block 2 */
		// Start line: 56
	/* end block 2 */
	// End Line: 57

	/* begin block 3 */
		// Start line: 56
	/* end block 3 */
	// End Line: 57

void FEInput_VerifyControllerValues__Fi(int controller)

{
  if ((((PAD_COMMON *)((int)gPadinfo.buf + controller * 0x20))->nopad == '\0') &&
     ((int)frontEnd.controlType[controller] !=
      (uint)*(byte *)((int)gPadinfo.buf + controller * 0x20 + 1))) {
    Front_ResetPSXController__Fii(controller,0);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FEInput_GetNoDebounceKey__Fii(int key /*$s0*/, int controller /*$s4*/)
 // line 44, offset 0x800238f8
	/* begin block 1 */
		// Start line: 45
		// Start offset: 0x800238F8
		// Variables:
	// 		char *analogs; // $a0
	/* end block 1 */
	// End offset: 0x80023B54
	// End Line: 143

	/* begin block 2 */
		// Start line: 83
	/* end block 2 */
	// End Line: 84

	/* begin block 3 */
		// Start line: 89
	/* end block 3 */
	// End Line: 90

	/* begin block 4 */
		// Start line: 89
	/* end block 4 */
	// End Line: 90

/* WARNING: Type propagation algorithm not settling */

int FEInput_GetNoDebounceKey__Fii(int key,int controller)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  PAD_update();
  iVar5 = controller * 0x20;
  if (((PAD_COMMON *)((int)gPadinfo.buf + iVar5))->nopad != '\0') {
    return 0;
  }
  FEInput_VerifyControllerValues__Fi(controller);
  cVar1 = *(char *)((int)gPadinfo.buf + iVar5 + 1);
  if ((cVar1 == 's') || (cVar1 == 'S')) {
    if (key == 0x400000) {
      bVar2 = *(byte *)((int)gPadinfo.buf + iVar5 + 5) < 0xc1;
      goto LAB_80023b08;
    }
    if (key < 0x400001) {
      if (key == 0x100000) {
        bVar2 = *(byte *)((int)gPadinfo.buf + iVar5 + 5) < 0x40;
LAB_80023ae0:
        if (!bVar2) {
          return 0;
        }
        return 1;
      }
      if (key < 0x100001) {
        if (key == -0x80000000) {
          bVar2 = *(byte *)((int)gPadinfo.buf + iVar5 + 6) < 0x40;
          goto LAB_80023ae0;
        }
      }
      else {
        if (key == 0x200000) {
          bVar2 = *(byte *)((int)gPadinfo.buf + iVar5 + 4) < 0xc1;
          goto LAB_80023b08;
        }
      }
    }
    else {
      if (key == 0x10000000) {
        bVar2 = *(byte *)((int)gPadinfo.buf + iVar5 + 7) < 0x40;
        goto LAB_80023ae0;
      }
      if (key < 0x10000001) {
        if (key == 0x800000) {
          bVar2 = *(byte *)((int)gPadinfo.buf + iVar5 + 4) < 0x40;
          goto LAB_80023ae0;
        }
      }
      else {
        if (key == 0x20000000) {
          bVar2 = *(byte *)((int)gPadinfo.buf + iVar5 + 6) < 0xc1;
LAB_80023b08:
          if (!bVar2) {
            return 1;
          }
          return 0;
        }
        if (key == 0x40000000) {
          bVar2 = *(byte *)((int)gPadinfo.buf + iVar5 + 7) < 0xc1;
          goto LAB_80023b08;
        }
      }
    }
    uVar4 = ~(uint)*(ushort *)((int)gPadinfo.buf + controller * 0x20 + 2);
  }
  else {
    if (cVar1 != '#') {
      uVar3 = PAD_state(controller << 2);
      if (((uint)uVar3 & key) != 0) {
        return 1;
      }
      return 0;
    }
    if (key == 0x8000) {
      bVar2 = *(byte *)((int)gPadinfo.buf + iVar5 + 6) < 0x41;
      goto LAB_80023b08;
    }
    if (key < 0x8001) {
      if (key == 0x4000) {
        bVar2 = *(byte *)((int)gPadinfo.buf + iVar5 + 5) < 0x41;
        goto LAB_80023b08;
      }
    }
    else {
      if (key == 0x200000) {
        bVar2 = *(byte *)((int)gPadinfo.buf + iVar5 + 4) < 0xa1;
        goto LAB_80023b08;
      }
      if (key == 0x800000) {
        bVar2 = *(byte *)((int)gPadinfo.buf + iVar5 + 4) < 0x62;
        goto LAB_80023ae0;
      }
    }
    uVar3 = PAD_state(controller << 2);
    uVar4 = (uint)uVar3;
  }
  if ((uVar4 & key) != 0) {
    return 1;
  }
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ FEInput_GetDebounceKey__Fii(int key /*$s0*/, int controller /*$s1*/)
 // line 146, offset 0x80023b74
	/* begin block 1 */
		// Start line: 147
		// Start offset: 0x80023B74

		/* begin block 1.1 */
			// Start line: 147
			// Start offset: 0x80023B74

			/* begin block 1.1.1 */
				// Start line: 152
				// Start offset: 0x80023B98

				/* begin block 1.1.1.1 */
					// Start line: 153
					// Start offset: 0x80023B98

					/* begin block 1.1.1.1.1 */
						// Start line: 154
						// Start offset: 0x80023BB8
						// Variables:
					// 		int tick; // $a0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 154
							// Start offset: 0x80023BB8

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 154
								// Start offset: 0x80023BB8
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80023BB8
							// End Line: 154
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80023BB8
						// End Line: 154
					/* end block 1.1.1.1.1 */
					// End offset: 0x80023C38
					// End Line: 168
				/* end block 1.1.1.1 */
				// End offset: 0x80023C50
				// End Line: 174
			/* end block 1.1.1 */
			// End offset: 0x80023C50
			// End Line: 174
		/* end block 1.1 */
		// End offset: 0x80023C74
		// End Line: 180
	/* end block 1 */
	// End offset: 0x80023C74
	// End Line: 180

	/* begin block 2 */
		// Start line: 289
	/* end block 2 */
	// End Line: 290

	/* begin block 3 */
		// Start line: 293
	/* end block 3 */
	// End Line: 294

	/* begin block 4 */
		// Start line: 293
	/* end block 4 */
	// End Line: 294

int FEInput_GetDebounceKey__Fii(int key,int controller)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FEInput_GetNoDebounceKey__Fii(key,controller);
  if (iVar1 == 0) {
    iVar1 = 0;
    debounce[controller] = debounce[controller] & ~key;
  }
  else {
    uVar2 = debounce[controller];
    if ((uVar2 & key) == 0) {
      iVar1 = 1;
      debounce[controller] = uVar2 | key;
      nextTick = 0;
    }
    else {
      if ((((key == 0x10) || (key == 0x80)) || (key == 0x20)) || (iVar1 = 0, key == 0x40)) {
        if (nextTick == 0) {
          nextTick = (long)(ticks + FeTools_gScrollTicksOut + 10);
        }
        iVar1 = 0;
        if (nextTick <= (int)ticks) {
          iVar1 = 1;
          nextTick = (long)(ticks + FeTools_gScrollTicksOut);
        }
      }
    }
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// enum tInputKeyType /*$ra*/ FEInput_GetKeyFromPlayer__F7tPlayerl(enum tPlayer player /*$s3*/, long debounce /*$s5*/)
 // line 214, offset 0x80023c88
	/* begin block 1 */
		// Start line: 215
		// Start offset: 0x80023C88
		// Variables:
	// 		unsigned short i; // $s1
	/* end block 1 */
	// End offset: 0x80023DAC
	// End Line: 320

	/* begin block 2 */
		// Start line: 398
	/* end block 2 */
	// End Line: 399

	/* begin block 3 */
		// Start line: 433
	/* end block 3 */
	// End Line: 434

	/* begin block 4 */
		// Start line: 433
	/* end block 4 */
	// End Line: 434

tInputKeyType FEInput_GetKeyFromPlayer__F7tPlayerl(tPlayer player,long debounce)

{
  bool bVar1;
  int iVar2;
  tInputKeyType tVar3;
  ushort uVar4;
  
  uVar4 = 0;
  while( true ) {
    bVar1 = false;
    iVar2 = FEInput_GetDebounceKey__Fii((&getKeyMappings)[(uint)uVar4].PSXKey,player);
    if ((iVar2 != 0) ||
       (((debounce & (&getKeyMappings)[(uint)uVar4].FEKey) == kInput_KeyType_NoKey &&
        (iVar2 = FEInput_GetNoDebounceKey__Fii((&getKeyMappings)[(uint)uVar4].PSXKey,player),
        iVar2 != 0)))) {
      bVar1 = true;
    }
    if (bVar1) break;
    uVar4 = uVar4 + 1;
    if (0xf < uVar4) {
      iVar2 = FEInput_GetDebounceKey__Fii(0x4000,player);
      tVar3 = kInput_KeyType_Cross;
      if (iVar2 == 0) {
        iVar2 = FEInput_GetDebounceKey__Fii(0x1000,player);
        tVar3 = kInput_KeyType_Triangle;
        if (iVar2 == 0) {
          iVar2 = FEInput_GetDebounceKey__Fii(0x2000,player);
          tVar3 = kInput_KeyType_Circle;
          if (iVar2 == 0) {
            iVar2 = FEInput_GetDebounceKey__Fii(0x8000,player);
            if (iVar2 == 0) {
              iVar2 = FEInput_GetDebounceKey__Fii(8,player);
              tVar3 = (uint)(iVar2 != 0) << 0xd;
            }
            else {
              tVar3 = kInput_KeyType_Square;
            }
          }
        }
      }
      return tVar3;
    }
  }
  return (&getKeyMappings)[(uint)uVar4].FEKey;
}





