#include "NFS4.H"
#include "PSXCONTROLLER.H"

// decompiled code
// original method signature: 
// void /*$ra*/ InGame_ResetPSXController__Fii(int player /*$s2*/, int config /*$s6*/)
 // line 97, offset 0x800dc4cc
	/* begin block 1 */
		// Start line: 98
		// Start offset: 0x800DC4CC
		// Variables:
	// 		int *h; // $s4
	// 		int type; // $s3
	/* end block 1 */
	// End offset: 0x800DC8A4
	// End Line: 160

void InGame_ResetPSXController__Fii(int player,int config)
{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint value;
  int iVar5;
  int *piVar6;
  
  cVar1 = (&DAT_8013e8a1)[player * 0x20];
  if (cVar1 == '#') {
    iVar2 = 0;
  }
  else {
    if ((cVar1 == 'S') || (iVar2 = 2, cVar1 == 's')) {
      iVar2 = 1;
    }
  }
  if ((int)*(short *)(&DAT_8011495e + player * 2) != (uint)(byte)(&DAT_8013e8a1)[player * 0x20]) {
    *(ushort *)(&DAT_8011495e + player * 2) = (ushort)(byte)(&DAT_8013e8a1)[player * 0x20];
  }
  *(int *)(&DAT_8011324c + player * 4) = config;
  iVar3 = config * 0x9c + iVar2 * 4;
  iVar4 = InGame_GetPSXPadValue__Fii(*(int *)(&mappings + iVar3),player);
  piVar6 = &hoff + player;
  (&Input_gHandler)[0x4f - *piVar6] = iVar4;
  iVar4 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e08 + iVar3),player);
  (&Input_gHandler)[0x50 - *piVar6] = iVar4;
  iVar4 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e14 + iVar3),player);
  (&Input_gHandler)[0x51 - *piVar6] = iVar4;
  iVar4 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e20 + iVar3),player);
  (&Input_gHandler)[0x52 - *piVar6] = iVar4;
  iVar4 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e5c + iVar3),player);
  *(int *)(&DAT_80113ecc + player * 4) = iVar4;
  iVar4 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e50 + iVar3),player);
  (&Input_gHandler)[0x75 - *piVar6] = iVar4;
  iVar4 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e50 + iVar3),player);
  (&Input_gHandler)[0x65 - *piVar6] = iVar4;
  iVar4 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e2c + iVar3),player);
  (&Input_gHandler)[0x53 - *piVar6] = iVar4;
  if ((*(uint *)((&_Cars_gHumanRaceCarList)[player] + 0x260) & 0x200) == 0) {
    iVar4 = InGame_GetPSXPadValue__Fii(*(int *)(&mappings + iVar3),0);
    (&Input_gHandler)[0x7d - *piVar6] = iVar4;
    iVar4 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e08 + iVar3),0);
    (&Input_gHandler)[0x7e - *piVar6] = iVar4;
    value = *(uint *)(&DAT_80120e74 + iVar3);
    if (iVar2 == 1) {
      value = value | 6;
    }
    iVar3 = InGame_GetPSXPadValue__Fii(value,player);
    iVar5 = *piVar6;
    iVar4 = 0x82;
  }
  else {
    value = *(uint *)(&DAT_80120e74 + iVar3);
    if (iVar2 == 1) {
      value = value | 6;
    }
    iVar3 = InGame_GetPSXPadValue__Fii(value,player);
    iVar5 = *piVar6;
    iVar4 = 0x81;
  }
  (&Input_gHandler)[iVar4 - iVar5] = iVar3;
  if (DAT_80113240 == 0) {
    iVar3 = InGame_GetPSXPadValue__Fii(0,player);
    piVar6 = &hoff + player;
    (&Input_gHandler)[0x73 - *piVar6] = iVar3;
    value = *(uint *)(&DAT_80120e68 + config * 0x9c + iVar2 * 4);
    if (iVar2 == 1) {
      value = value | 6;
    }
  }
  else {
    iVar3 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e68 + config * 0x9c + iVar2 * 4),player);
    piVar6 = &hoff + player;
    (&Input_gHandler)[0x73 - *piVar6] = iVar3;
    value = 0;
    if (iVar2 == 1) {
      value = 6;
    }
  }
  iVar3 = InGame_GetPSXPadValue__Fii(value,player);
  (&Input_gHandler)[0x54 - *piVar6] = iVar3;
  iVar3 = config * 0x9c + iVar2 * 4;
  iVar2 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e38 + iVar3),player);
  piVar6 = &hoff + player;
  (&Input_gHandler)[0x66 - *piVar6] = iVar2;
  iVar2 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e44 + iVar3),player);
  (&Input_gHandler)[0x67 - *piVar6] = iVar2;
  iVar2 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e8c + iVar3),player);
  (&Input_gHandler)[0x68 - *piVar6] = iVar2;
  iVar2 = InGame_GetPSXPadValue__Fii(*(int *)(&DAT_80120e80 + iVar3),player);
  (&Input_gHandler)[0x4d - *piVar6] = iVar2;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ InGame_GetPSXPadValue__Fii(int value /*$a0*/, int player /*$s1*/)
 // line 197, offset 0x800dc990
	/* begin block 1 */
		// Start line: 198
		// Start offset: 0x800DC990
		// Variables:
	// 		int c; // $s0
	// 		int newControl; // $v0
	// 		int type; // $v1
	/* end block 1 */
	// End offset: 0x800DCD20
	// End Line: 333

int InGame_GetPSXPadValue__Fii(int value,int player)
{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  PAD_update();
  if ((&DAT_8013e8a0)[player * 0x20] == '\0') {
    bVar2 = (&DAT_8013e8a1)[player * 0x20];
  }
  else {
    bVar2 = 0;
  }
  if (bVar2 != 0x53) {
    if (bVar2 < 0x54) {
      if (bVar2 == 0x23) {
        if (value == 0x8000) {
          iVar1 = *(int *)(&DAT_80113264 + player * 4);
          uVar3 = 0x2000000;
        }
        else {
          if (0x8000 < value) {
            if (value != 0x200000) {
              if (value != 0x800000) goto code_r0x800dc9f4;
              iVar1 = *(int *)(&DAT_80113254 + player * 4);
              iVar4 = *(int *)(&DAT_8011325c + player * 4);
              goto LAB_800dcc68;
            }
            uVar5 = player << 0x1e | (*(int *)(&DAT_80113254 + player * 4) + 0x80) * 0x10000;
            uVar3 = (*(int *)(&DAT_8011325c + player * 4) + 0x80) * 0x100;
            goto LAB_800dccf4;
          }
          if (value == 0x400) {
            return player << 0x1e | 0x30aff01;
          }
          if (value != 0x4000) goto code_r0x800dc9f4;
          iVar1 = *(int *)(&DAT_8011326c + player * 4);
          uVar3 = 0x1000000;
        }
        uVar5 = player << 0x1e;
        uVar3 = iVar1 << 8 | uVar3;
        goto LAB_800dccf4;
      }
      goto code_r0x800dc9f4;
    }
    if (bVar2 != 0x73) goto code_r0x800dc9f4;
  }
  iVar1 = player * 4;
  if (value == 0x400000) {
    uVar3 = (*(int *)(&DAT_80113274 + iVar1) + 0x80) * 0x10000 | 0x1000000;
    iVar1 = *(int *)(&DAT_8011327c + iVar1);
LAB_800dcbe8:
    return player << 0x1e | uVar3 | (iVar1 + 0x80) * 0x100 | 1;
  }
  if (value < 0x400001) {
    if (value == 0x100000) {
      uVar3 = (0x80 - *(int *)(&DAT_80113274 + iVar1)) * 0x10000 | 0x1000000;
      iVar1 = *(int *)(&DAT_8011327c + iVar1);
      goto LAB_800dcbac;
    }
    if (0x100000 < value) {
      if (value == 0x200000) {
        uVar5 = player << 0x1e | (*(int *)(&DAT_80113274 + player * 4) + 0x80) * 0x10000;
        uVar3 = (*(int *)(&DAT_8011327c + player * 4) + 0x80) * 0x100;
LAB_800dccf4:
        return uVar5 | uVar3 | 1;
      }
code_r0x800dc9f4:
      return player << 0x1a | value << 8 | 2;
    }
    if (value != -0x80000000) goto code_r0x800dc9f4;
    iVar1 = *(int *)(&DAT_80113284 + iVar1);
    uVar3 = 0x2000000;
  }
  else {
    if (value != 0x10000000) {
      if (value < 0x10000001) {
        if (value == 0x800000) {
          iVar1 = *(int *)(&DAT_80113274 + player * 4);
          iVar4 = *(int *)(&DAT_8011327c + player * 4);
LAB_800dcc68:
          return player << 0x1e | (0x80 - iVar1) * 0x10000 | (0x80 - iVar4) * 0x100 | 1;
        }
        goto code_r0x800dc9f4;
      }
      iVar1 = player * 4;
      if (value == 0x20000000) {
        iVar4 = *(int *)(&DAT_80113284 + iVar1);
        uVar3 = 0x2000000;
      }
      else {
        if (value != 0x40000000) goto code_r0x800dc9f4;
        iVar4 = *(int *)(&DAT_80113284 + iVar1);
        uVar3 = 0x3000000;
      }
      uVar3 = (iVar4 + 0x80) * 0x10000 | uVar3;
      iVar1 = *(int *)(&DAT_8011328c + iVar1);
      goto LAB_800dcbe8;
    }
    iVar1 = *(int *)(&DAT_80113284 + player * 4);
    uVar3 = 0x3000000;
  }
  uVar3 = (0x80 - iVar1) * 0x10000 | uVar3;
  iVar1 = *(int *)(&DAT_8011328c + player * 4);
LAB_800dcbac:
  return player << 0x1e | uVar3 | (0x80 - iVar1) * 0x100 | 1;


}




// decompiled code
// original method signature: 
// int /*$ra*/ InGame_GetDevice__Fi(int control /*$a0*/)
 // line 338, offset 0x800dcd34
	/* begin block 1 */
		// Start line: 339
		// Start offset: 0x800DCD34
	/* end block 1 */
	// End offset: 0x800DCD34
	// End Line: 340

int InGame_GetDevice__Fi(int control)
{
  return control & 0xff;


}




// decompiled code
// original method signature: 
// void /*$ra*/ InGame_SetRamp__Fv()
 // line 349, offset 0x800dcd3c
	/* begin block 1 */
		// Start line: 350
		// Start offset: 0x800DCD3C
		// Variables:
	// 		int *h; // $s4

		/* begin block 1.1 */
			// Start line: 350
			// Start offset: 0x800DCD3C

			/* begin block 1.1.1 */
				// Start line: 355
				// Start offset: 0x800DCD74

				/* begin block 1.1.1.1 */
					// Start line: 357
					// Start offset: 0x800DCD74
					// Variables:
				// 		short i; // $s3
				/* end block 1.1.1.1 */
				// End offset: 0x800DCEA0
				// End Line: 366
			/* end block 1.1.1 */
			// End offset: 0x800DCEA0
			// End Line: 366
		/* end block 1.1 */
		// End offset: 0x800DCEA0
		// End Line: 366
	/* end block 1 */
	// End offset: 0x800DCEA0
	// End Line: 366

void InGame_SetRamp__Fv(void)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if ((Replay_ReplayMode < 2) && (iVar5 = 0, 0 < Cars_gNumHumanRaceCars)) {
    iVar2 = 0;
    do {
      piVar4 = (int *)((int)&_Cars_gHumanRaceCarList + (iVar2 >> 0xe));
      iVar1 = *(int *)(*piVar4 + 0x288);
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      *(undefined4 *)(iVar1 + 0x20) = 1;
      *(undefined4 *)(iVar1 + 0x18) = 1;
      piVar3 = (int *)((int)&hoff + (iVar2 >> 0xe));
      iVar2 = InGame_GetDevice__Fi((&Input_gHandler)[0x4f - *piVar3]);
      if (iVar2 == 1) {
        *(undefined4 *)(*(int *)(*piVar4 + 0x288) + 0x18) = 0;
      }
      iVar2 = InGame_GetDevice__Fi((&Input_gHandler)[0x51 - *piVar3]);
      if (iVar2 == 1) {
        *(undefined4 *)(*(int *)(*piVar4 + 0x288) + 0x1c) = 0;
      }
      iVar2 = InGame_GetDevice__Fi((&Input_gHandler)[0x52 - *piVar3]);
      if (iVar2 == 1) {
        *(undefined4 *)(*(int *)(*piVar4 + 0x288) + 0x20) = 0;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar5 * 0x10000;
    } while (iVar5 * 0x10000 >> 0x10 < Cars_gNumHumanRaceCars);
  }
  return;


}





