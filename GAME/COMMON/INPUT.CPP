#include "NFS4.H"
#include "INPUT.H"

// decompiled code
// original method signature: 
// int * /*$ra*/ Input_StartUp__Fv()
 // line 55, offset 0x8009c344
	/* begin block 1 */
		// Start line: 56
		// Start offset: 0x8009C344
		// Variables:
	// 		int *h; // $v0
	// 		int i; // $a1

		/* begin block 1.1 */
			// Start line: 66
			// Start offset: 0x8009C370

			/* begin block 1.1.1 */
				// Start line: 66
				// Start offset: 0x8009C390

				/* begin block 1.1.1.1 */
					// Start line: 68
					// Start offset: 0x8009C39C
					// Variables:
				// 		int j; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x8009C3C0
				// End Line: 72
			/* end block 1.1.1 */
			// End offset: 0x8009C3C0
			// End Line: 72
		/* end block 1.1 */
		// End offset: 0x8009C3D4
		// End Line: 73
	/* end block 1 */
	// End offset: 0x8009C3F4
	// End Line: 78

/* WARNING: Unknown calling convention yet parameter storage is locked */

int * Input_StartUp__Fv(void)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  Device_StartUp__Fv();
  piVar1 = &Input_gHandler;
  iVar5 = 0xb7;
  do {
    *piVar1 = 0;
    iVar5 = iVar5 + -1;
    piVar1 = piVar1 + 1;
  } while (-1 < iVar5);
  iVar5 = 0;
  iVar6 = 0;
  piVar1 = &Input_gMode;
  puVar2 = &Input_gDBFlags;
  while (iVar4 = 0, iVar5 < 2) {
    *puVar2 = 0;
    *piVar1 = 0;
    iVar3 = iVar6;
    do {
      *(undefined4 *)((int)&Input_gPressTime + iVar3) = 0;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 0x11);
    iVar6 = iVar6 + 0x44;
    piVar1 = piVar1 + 1;
    puVar2 = puVar2 + 1;
    iVar5 = iVar5 + 1;
  }
  iVar5 = 0x1f;
  puVar2 = &ULONG_80113f90;
  do {
    *puVar2 = 0;
    iVar5 = iVar5 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar5);
  return &Input_gHandler;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Input_WingCommandMode__Fi(int player /*$a0*/)
 // line 84, offset 0x8009c408
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x8009C408
		// Variables:
	// 		int *h; // $v1
	/* end block 1 */
	// End offset: 0x8009C470
	// End Line: 94

int Input_WingCommandMode__Fi(int player)

{
  int *piVar1;
  
  piVar1 = &INT_80113cc8;
  if (player != 0) {
    piVar1 = &INT_80113df8;
  }
  if ((((*piVar1 != 0) || (piVar1[1] != 0)) || (piVar1[2] != 0)) &&
     ((&Input_gMode)[player & 1] == 1)) {
    return 1;
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Input_Update__Fv()
 // line 104, offset 0x8009c478
	/* begin block 1 */
		// Start line: 105
		// Start offset: 0x8009C478
		// Variables:
	// 		int *h; // $s2
	// 		struct Input_tResults *r; // stack offset -72
	// 		unsigned long acc; // $s5
	// 		unsigned long menukeys; // stack offset -68
	// 		int i; // $fp
	// 		int j; // $s0
	// 		int k; // $a0
	// 		int left; // $s1
	// 		int right; // $a0
	// 		char iactive[32]; // stack offset -168

		/* begin block 1.1 */
			// Start line: 121
			// Start offset: 0x8009C4C4

			/* begin block 1.1.1 */
				// Start line: 126
				// Start offset: 0x8009C508
				// Variables:
			// 		int mode; // $s7

				/* begin block 1.1.1.1 */
					// Start line: 137
					// Start offset: 0x8009C570

					/* begin block 1.1.1.1.1 */
						// Start line: 140
						// Start offset: 0x8009C588

						/* begin block 1.1.1.1.1.1 */
							// Start line: 155
							// Start offset: 0x8009C6FC
							// Variables:
						// 		char active[17]; // stack offset -136

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 155
								// Start offset: 0x8009C6FC
								// Variables:
							// 		int k; // $a0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8009C728
							// End Line: 162

							/* begin block 1.1.1.1.1.1.2 */
								// Start line: 164
								// Start offset: 0x8009C728

								/* begin block 1.1.1.1.1.1.2.1 */
									// Start line: 164
									// Start offset: 0x8009C738

									/* begin block 1.1.1.1.1.1.2.1.1 */
										// Start line: 166
										// Start offset: 0x8009C744

										/* begin block 1.1.1.1.1.1.2.1.1.1 */
											// Start line: 167
											// Start offset: 0x8009C754

											/* begin block 1.1.1.1.1.1.2.1.1.1.1 */
												// Start line: 168
												// Start offset: 0x8009C754

												/* begin block 1.1.1.1.1.1.2.1.1.1.1.1 */
													// Start line: 169
													// Start offset: 0x8009C788

													/* begin block 1.1.1.1.1.1.2.1.1.1.1.1.1 */
														// Start line: 180
														// Start offset: 0x8009C7CC
														// Variables:
													// 		int k; // $a0
													/* end block 1.1.1.1.1.1.2.1.1.1.1.1.1 */
													// End offset: 0x8009C838
													// End Line: 187
												/* end block 1.1.1.1.1.1.2.1.1.1.1.1 */
												// End offset: 0x8009C838
												// End Line: 187
											/* end block 1.1.1.1.1.1.2.1.1.1.1 */
											// End offset: 0x8009C860
											// End Line: 192
										/* end block 1.1.1.1.1.1.2.1.1.1 */
										// End offset: 0x8009C860
										// End Line: 192
									/* end block 1.1.1.1.1.1.2.1.1 */
									// End offset: 0x8009C860
									// End Line: 192
								/* end block 1.1.1.1.1.1.2.1 */
								// End offset: 0x8009C860
								// End Line: 195
							/* end block 1.1.1.1.1.1.2 */
							// End offset: 0x8009C870
							// End Line: 196

							/* begin block 1.1.1.1.1.1.3 */
								// Start line: 226
								// Start offset: 0x8009C970
								// Variables:
							// 		int m; // $s3
							// 		int k; // $a0
							/* end block 1.1.1.1.1.1.3 */
							// End offset: 0x8009C9FC
							// End Line: 239
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8009C9FC
						// End Line: 239
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009C9FC
					// End Line: 241

					/* begin block 1.1.1.1.2 */
						// Start line: 245
						// Start offset: 0x8009CA04
						// Variables:
					// 		char active[40]; // stack offset -112

						/* begin block 1.1.1.1.2.1 */
							// Start line: 287
							// Start offset: 0x8009CCA8
							// Variables:
						// 		char hactive[17]; // stack offset -136

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 287
								// Start offset: 0x8009CCA8
								// Variables:
							// 		int k; // $a0
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x8009CCD4
							// End Line: 294

							/* begin block 1.1.1.1.2.1.2 */
								// Start line: 296
								// Start offset: 0x8009CCD4

								/* begin block 1.1.1.1.2.1.2.1 */
									// Start line: 296
									// Start offset: 0x8009CCE4

									/* begin block 1.1.1.1.2.1.2.1.1 */
										// Start line: 298
										// Start offset: 0x8009CCF0

										/* begin block 1.1.1.1.2.1.2.1.1.1 */
											// Start line: 299
											// Start offset: 0x8009CD00

											/* begin block 1.1.1.1.2.1.2.1.1.1.1 */
												// Start line: 300
												// Start offset: 0x8009CD00

												/* begin block 1.1.1.1.2.1.2.1.1.1.1.1 */
													// Start line: 301
													// Start offset: 0x8009CD48

													/* begin block 1.1.1.1.2.1.2.1.1.1.1.1.1 */
														// Start line: 312
														// Start offset: 0x8009CD8C
														// Variables:
													// 		int k; // $a0
													/* end block 1.1.1.1.2.1.2.1.1.1.1.1.1 */
													// End offset: 0x8009CDF8
													// End Line: 319
												/* end block 1.1.1.1.2.1.2.1.1.1.1.1 */
												// End offset: 0x8009CDF8
												// End Line: 319
											/* end block 1.1.1.1.2.1.2.1.1.1.1 */
											// End offset: 0x8009CE24
											// End Line: 324
										/* end block 1.1.1.1.2.1.2.1.1.1 */
										// End offset: 0x8009CE24
										// End Line: 324
									/* end block 1.1.1.1.2.1.2.1.1 */
									// End offset: 0x8009CE24
									// End Line: 324
								/* end block 1.1.1.1.2.1.2.1 */
								// End offset: 0x8009CE24
								// End Line: 328
							/* end block 1.1.1.1.2.1.2 */
							// End offset: 0x8009CE34
							// End Line: 329
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x8009CF58
						// End Line: 359
					/* end block 1.1.1.1.2 */
					// End offset: 0x8009D020
					// End Line: 384
				/* end block 1.1.1.1 */
				// End offset: 0x8009D020
				// End Line: 384
			/* end block 1.1.1 */
			// End offset: 0x8009D0E4
			// End Line: 415
		/* end block 1.1 */
		// End offset: 0x8009D118
		// End Line: 417
	/* end block 1 */
	// End offset: 0x8009D19C
	// End Line: 429

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Input_Update__Fv(void)

{
  byte bVar1;
  byte bVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  int *piVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  char local_a8 [31];
  undefined local_89;
  undefined auStack136 [24];
  char local_70 [4];
  char local_6c [19];
  char local_59 [16];
  undefined local_49;
  Input_tResults *local_48;
  uint local_44;
  undefined *local_40;
  ulong *local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  Device_Update__Fv();
  iVar20 = 0x1f;
  puVar5 = &local_89;
  do {
    *puVar5 = 1;
    iVar20 = iVar20 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar20);
  piVar17 = &Input_gHandler;
  iVar20 = 0;
  local_48 = &Input_gResults;
  local_40 = auStack136;
  pbVar18 = &Input_gResults.flags;
  local_44 = 0;
  local_3c = &Input_gDBFlags;
  local_38 = 0;
  local_34 = 0;
  do {
    iVar19 = 0;
    if (1 < iVar20) {
      uVar9 = 0;
      do {
        if (local_a8[uVar9] != '\0') {
          uVar10 = *piVar17;
          if (uVar10 != 0) {
            iVar20 = (*(&Device_gDeviceList)[uVar10 & 0xff].devicefunc)((int)uVar10 >> 8);
            if (0x40 < iVar20) {
              local_44 = local_44 | 1 << (uVar9 & 0x1f);
            }
          }
        }
        uVar9 = uVar9 + 1;
        piVar17 = (int *)((uint *)piVar17 + 1);
      } while ((int)uVar9 < 0x20);
      (&Input_gInterfaceResults)[uGp00000cd4 + 2 & 0x1f] = local_44;
      (&Input_gInterfaceResults)[uGp00000cd4 + 3 & 0x1f] = local_44;
      uGp00000cd4 = uGp00000cd4 + 2;
      return;
    }
    iVar15 = 0;
    do {
      puVar16 = (uint *)piVar17;
      uVar9 = *puVar16;
      if ((uVar9 != 0) &&
         (iVar6 = (*(&Device_gDeviceList)[uVar9 & 0xff].devicefunc)((int)uVar9 >> 8), 0x40 < iVar6))
      {
        iVar19 = iVar15 + 1;
      }
      iVar15 = iVar15 + 1;
      piVar17 = (int *)(puVar16 + 1);
    } while (iVar15 < 2);
    *(int *)((int)&Input_gMode + local_38) = iVar19;
    if (iVar19 == 0) {
      uVar9 = 0;
      iVar19 = (*(&Device_gDeviceList)[*piVar17 & 0xff].devicefunc)(*piVar17 >> 8);
      iVar15 = (*(&Device_gDeviceList)[puVar16[2] & 0xff].devicefunc)((int)puVar16[2] >> 8);
      local_48->steering = (char)((int)((iVar15 - iVar19) + ((uint)(iVar15 - iVar19) >> 0x1f)) >> 1)
      ;
      iVar19 = (*(&Device_gDeviceList)[puVar16[3] & 0xff].devicefunc)((int)puVar16[3] >> 8);
      pbVar18[-2] = (byte)iVar19;
      piVar17 = (int *)(puVar16 + 5);
      iVar19 = (*(&Device_gDeviceList)[puVar16[4] & 0xff].devicefunc)((int)puVar16[4] >> 8);
      pbVar18[-1] = (byte)iVar19;
      do {
        uVar10 = *piVar17;
        if ((uVar10 == 0) ||
           (iVar19 = (*(&Device_gDeviceList)[uVar10 & 0xff].devicefunc)((int)uVar10 >> 8),
           iVar19 < 0x41)) {
          *pbVar18 = *pbVar18 & ~(byte)(1 << (uVar9 & 0x1f));
        }
        else {
          *pbVar18 = *pbVar18 | (byte)(1 << (uVar9 & 0x1f));
        }
        iVar19 = local_34;
        puVar3 = local_3c;
        uVar9 = uVar9 + 1;
        piVar17 = (int *)((uint *)piVar17 + 1);
      } while ((int)uVar9 < 2);
      iVar6 = 0;
      iVar15 = 0x10;
      puVar5 = local_40 + 0x10;
      *pbVar18 = *pbVar18 & 7;
      do {
        *puVar5 = 1;
        iVar15 = iVar15 + -1;
        puVar5 = puVar5 + -1;
      } while (-1 < iVar15);
      uVar9 = 0;
      iVar15 = local_34;
      while (puVar4 = local_3c, (int)uVar9 < 0x11) {
        uVar10 = *piVar17;
        if (uVar10 != 0) {
          iVar7 = (*(&Device_gDeviceList)[uVar10 & 0xff].devicefunc)((int)uVar10 >> 8);
          if (iVar7 < 0x41) {
            *puVar3 = *puVar3 & ~(1 << (uVar9 & 0x1f));
            *(undefined4 *)((int)&Input_gPressTime + iVar15) = 0;
          }
          else {
            iVar7 = *(int *)((int)&Input_gPressTime + iVar15) + 1;
            *(int *)((int)&Input_gPressTime + iVar15) = iVar7;
            if ((5 < iVar7) && (uVar10 = 1 << (uVar9 & 0x1f), (*puVar3 & uVar10) == 0)) {
              iVar6 = uVar9 + 1;
              *puVar3 = *puVar3 | uVar10;
            }
            iVar11 = 0;
            iVar7 = iVar19;
            do {
              if (((uint *)piVar17)[iVar11 - (uVar9 - 0x11)] == *piVar17) {
                local_40[iVar11] = 0;
                *(undefined4 *)((int)&Input_gPressTime + iVar7) =
                     *(undefined4 *)((int)&Input_gPressTime + iVar15);
              }
              iVar11 = iVar11 + 1;
              iVar7 = iVar7 + 4;
            } while (iVar11 < 0x11);
          }
        }
        piVar17 = (int *)((uint *)piVar17 + 1);
        iVar15 = iVar15 + 4;
        uVar9 = uVar9 + 1;
      }
      uVar9 = 0;
      do {
        uVar10 = *piVar17;
        if (uVar10 != 0) {
          iVar19 = (*(&Device_gDeviceList)[uVar10 & 0xff].devicefunc)((int)uVar10 >> 8);
          if (iVar19 < 0x41) {
            piVar13 = (int *)((int)&Input_gPressTime + uVar9 * 4 + local_34);
            uVar10 = 1 << (uVar9 & 0x1f);
            if (*piVar13 - 1U < 5) {
              if ((*puVar4 & uVar10) == 0) {
                iVar6 = uVar9 + 1;
                *puVar4 = *puVar4 | uVar10;
              }
              *piVar13 = 0;
            }
            else {
              *puVar4 = *puVar4 & ~(1 << (uVar9 & 0x1f));
            }
          }
          else {
            uVar10 = 1 << (uVar9 & 0x1f);
            if ((local_40[uVar9] != '\0') && ((*puVar4 & uVar10) == 0)) {
              iVar6 = uVar9 + 1;
              *puVar4 = *puVar4 | uVar10;
            }
          }
        }
        puVar3 = local_3c;
        uVar9 = uVar9 + 1;
        piVar17 = (int *)((uint *)piVar17 + 1);
      } while ((int)uVar9 < 0x11);
      iVar19 = 0;
      uVar9 = 0;
      while( true ) {
        do {
          uVar10 = *piVar17;
          if (uVar10 != 0) {
            iVar15 = (*(&Device_gDeviceList)[uVar10 & 0xff].devicefunc)((int)uVar10 >> 8);
            uVar10 = 1 << (uVar9 & 0x1f);
            if (iVar15 < 0x41) {
              uVar8 = *puVar3 & ~uVar10;
            }
            else {
              uVar8 = *puVar3 | uVar10;
            }
            *puVar3 = uVar8;
          }
          uVar9 = uVar9 + 1;
          piVar17 = (int *)((uint *)piVar17 + 1);
        } while ((int)uVar9 < 0x11);
        iVar19 = iVar19 + 1;
        if (1 < iVar19) break;
        uVar9 = 0;
      }
    }
    else {
      iVar15 = 0x27;
      puVar5 = &local_49;
      do {
        *puVar5 = 1;
        iVar15 = iVar15 + -1;
        puVar5 = puVar5 + -1;
      } while (-1 < iVar15);
      iVar15 = 0;
      puVar14 = (uint *)piVar17;
      do {
        iVar7 = 0;
        iVar6 = iVar19 * 0x11;
        do {
          if (*puVar14 == ((uint *)piVar17)[iVar6 + 0x17]) {
            local_70[iVar15] = '\0';
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar19 * 0x11 + iVar7;
        } while (iVar7 < 0x11);
        iVar15 = iVar15 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar15 < 0x28);
      iVar6 = 0;
      iVar15 = 0x260;
      do {
        iVar11 = 0;
        iVar7 = iVar19 * 0x11;
        do {
          if (*(uint *)((int)&Input_gHandler + iVar15) == ((uint *)piVar17)[iVar7 + 0x17]) {
            local_a8[iVar6] = '\0';
          }
          iVar11 = iVar11 + 1;
          iVar7 = iVar19 * 0x11 + iVar11;
        } while (iVar11 < 0x11);
        iVar6 = iVar6 + 1;
        iVar15 = iVar15 + 4;
      } while (iVar6 < 0x20);
      iVar15 = (*(&Device_gDeviceList)[*piVar17 & 0xff].devicefunc)(*piVar17 >> 8);
      iVar6 = (*(&Device_gDeviceList)[puVar16[2] & 0xff].devicefunc)((int)puVar16[2] >> 8);
      if ((local_70[0] != '\0') && (local_70[1] != '\0')) {
        local_48->steering = (char)((int)((iVar6 - iVar15) + ((uint)(iVar6 - iVar15) >> 0x1f)) >> 1)
        ;
      }
      if (local_70[2] != '\0') {
        iVar15 = (*(&Device_gDeviceList)[puVar16[3] & 0xff].devicefunc)((int)puVar16[3] >> 8);
        pbVar18[-2] = (byte)iVar15;
      }
      if (local_70[3] != '\0') {
        iVar15 = (*(&Device_gDeviceList)[puVar16[4] & 0xff].devicefunc)((int)puVar16[4] >> 8);
        pbVar18[-1] = (byte)iVar15;
      }
      puVar16 = puVar16 + 5;
      uVar9 = 0;
      do {
        if (local_6c[uVar9] != '\0') {
          uVar10 = *puVar16;
          if ((uVar10 == 0) ||
             (iVar15 = (*(&Device_gDeviceList)[uVar10 & 0xff].devicefunc)((int)uVar10 >> 8),
             iVar15 < 0x41)) {
            *pbVar18 = *pbVar18 & ~(byte)(1 << (uVar9 & 0x1f));
          }
          else {
            *pbVar18 = *pbVar18 | (byte)(1 << (uVar9 & 0x1f));
          }
        }
        puVar3 = local_3c;
        uVar9 = uVar9 + 1;
        puVar16 = puVar16 + 1;
      } while ((int)uVar9 < 2);
      iVar6 = 0;
      iVar15 = 0x10;
      puVar5 = local_40 + 0x10;
      *pbVar18 = *pbVar18 & 7;
      do {
        *puVar5 = 1;
        iVar15 = iVar15 + -1;
        puVar5 = puVar5 + -1;
      } while (-1 < iVar15);
      uVar9 = 0;
      iVar15 = local_34;
      iVar7 = local_34;
      while (puVar4 = local_3c, (int)uVar9 < 0x11) {
        uVar10 = *puVar16;
        if (uVar10 != 0) {
          if ((local_6c[uVar9 + 2] == '\0') ||
             (local_30 = iVar15,
             iVar11 = (*(&Device_gDeviceList)[uVar10 & 0xff].devicefunc)((int)uVar10 >> 8),
             iVar15 = local_30, iVar11 < 0x41)) {
            *puVar3 = *puVar3 & ~(1 << (uVar9 & 0x1f));
            *(undefined4 *)((int)&Input_gPressTime + iVar7) = 0;
          }
          else {
            iVar15 = *(int *)((int)&Input_gPressTime + iVar7) + 1;
            *(int *)((int)&Input_gPressTime + iVar7) = iVar15;
            if ((5 < iVar15) && (uVar10 = 1 << (uVar9 & 0x1f), (*puVar3 & uVar10) == 0)) {
              iVar6 = uVar9 + 1;
              *puVar3 = *puVar3 | uVar10;
            }
            iVar12 = 0;
            iVar11 = local_30;
            do {
              if (puVar16[iVar12 - (uVar9 - 0x11)] == *puVar16) {
                local_40[iVar12] = 0;
                *(undefined4 *)((int)&Input_gPressTime + iVar11) =
                     *(undefined4 *)((int)&Input_gPressTime + iVar7);
              }
              iVar12 = iVar12 + 1;
              iVar11 = iVar11 + 4;
              iVar15 = local_30;
            } while (iVar12 < 0x11);
          }
        }
        puVar16 = puVar16 + 1;
        iVar7 = iVar7 + 4;
        uVar9 = uVar9 + 1;
      }
      uVar9 = 0;
      do {
        uVar10 = *puVar16;
        if (uVar10 != 0) {
          if (local_59[uVar9] != '\0') {
            iVar15 = (*(&Device_gDeviceList)[uVar10 & 0xff].devicefunc)((int)uVar10 >> 8);
            uVar10 = 1 << (uVar9 & 0x1f);
            if (0x40 < iVar15) {
              if (((*puVar4 & uVar10) == 0) && (local_40[uVar9] != '\0')) {
                iVar6 = uVar9 + 1;
                *puVar4 = *puVar4 | uVar10;
              }
              goto LAB_8009cf48;
            }
            if (local_59[uVar9] != '\0') {
              piVar17 = (int *)((int)&Input_gPressTime + uVar9 * 4 + local_34);
              iVar15 = *piVar17;
              if ((0 < iVar15) && (uVar10 = 1 << (uVar9 & 0x1f), iVar15 < 6)) {
                if ((*puVar4 & uVar10) == 0) {
                  iVar6 = uVar9 + 1;
                  *puVar4 = *puVar4 | uVar10;
                }
                *piVar17 = 0;
                goto LAB_8009cf48;
              }
            }
          }
          *puVar4 = *puVar4 & ~(1 << (uVar9 & 0x1f));
        }
LAB_8009cf48:
        puVar3 = local_3c;
        uVar9 = uVar9 + 1;
        puVar16 = puVar16 + 1;
      } while ((int)uVar9 < 0x11);
      puVar16 = puVar16 + (iVar19 + -1) * 0x11;
      uVar9 = 0;
      do {
        uVar10 = *puVar16;
        if (uVar10 != 0) {
          iVar15 = (*(&Device_gDeviceList)[uVar10 & 0xff].devicefunc)((int)uVar10 >> 8);
          if (iVar15 < 0x41) {
            *puVar3 = *puVar3 & ~(1 << (uVar9 & 0x1f));
          }
          else {
            uVar10 = 1 << (uVar9 & 0x1f);
            if ((*puVar3 & uVar10) == 0) {
              iVar6 = uVar9 + 1;
              *puVar3 = *puVar3 | uVar10;
            }
          }
        }
        uVar9 = uVar9 + 1;
        puVar16 = puVar16 + 1;
      } while ((int)uVar9 < 0x11);
      piVar17 = (int *)(puVar16 + (2 - iVar19) * 0x11);
    }
    *pbVar18 = *pbVar18 | (byte)(iVar6 << 3);
    bVar1 = *pbVar18;
    bVar2 = bVar1 >> 3;
    if (bVar2 == 0x10) {
      *pbVar18 = bVar1 & 7;
      uVar9 = iVar20 + 0x1a;
LAB_8009d088:
      uVar9 = 1 << (uVar9 & 0x1f);
LAB_8009d090:
      local_44 = local_44 | uVar9;
    }
    else {
      if (bVar2 < 0x11) {
        if (bVar2 == 0xf) {
          *pbVar18 = bVar1 & 7;
          uVar9 = 0x200000;
          goto LAB_8009d090;
        }
      }
      else {
        if (bVar2 == 0x11) {
          *pbVar18 = bVar1 & 7;
          uVar9 = iVar20 + 0x1c;
          goto LAB_8009d088;
        }
      }
    }
    pbVar18 = pbVar18 + 4;
    local_48 = local_48 + 1;
    if (GameSetup_gData.numPlayerRaceCars == 1) {
      local_3c = local_3c + 1;
      piVar17 = (int *)((uint *)piVar17 + 0x4c);
      local_38 = local_38 + 4;
      iVar20 = iVar20 + 1;
      local_34 = local_34 + 0x44;
    }
    local_3c = local_3c + 1;
    local_38 = local_38 + 4;
    iVar20 = iVar20 + 1;
    local_34 = local_34 + 0x44;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ Input_Store__Fv()
 // line 436, offset 0x8009d208
	/* begin block 1 */
		// Start line: 437
		// Start offset: 0x8009D208
	/* end block 1 */
	// End offset: 0x8009D284
	// End Line: 450

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Input_Store__Fv(void)

{
  int pIndex;
  Input_tResults *val;
  
  if (gSimQueue_BlockSelf == 0) {
    if (GameSetup_gData.numPlayerRaceCars < 2) {
      if (GameSetup_gData.commMode != 0) {
        return;
      }
      val = &Input_gResults;
      pIndex = GameSetup_gData.localCar;
    }
    else {
      pIndex = SimQueue_Put__FiP14Input_tResults(0,&Input_gResults);
      if (pIndex == 0) {
        return;
      }
      val = &Input_tResults_8013d228;
      pIndex = 1;
    }
    SimQueue_Put__FiP14Input_tResults(pIndex,val);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Input_Fetch__Fi(int humanIndex /*$a0*/)
 // line 456, offset 0x8009d294
	/* begin block 1 */
		// Start line: 457
		// Start offset: 0x8009D294
	/* end block 1 */
	// End offset: 0x8009D294
	// End Line: 457

void Input_Fetch__Fi(int humanIndex)

{
  SimQueue_GetCurrentInput__FiP14Input_tResults(humanIndex,&Input_gSim);
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ Input_Gear__Fci(char currentGear /*$a2*/, int numGears /*$a1*/)
 // line 466, offset 0x8009d2bc
	/* begin block 1 */
		// Start line: 467
		// Start offset: 0x8009D2BC
	/* end block 1 */
	// End offset: 0x8009D310
	// End Line: 480

char Input_Gear__Fci(char currentGear,int numGears)

{
  if (DAT_00000ce3 >> 3 == 1) {
    if ((int)(uint)(byte)currentGear < numGears + -1) {
      currentGear = currentGear + '\x01';
    }
  }
  else {
    if (DAT_00000ce3 >> 3 != 2) {
      return currentGear;
    }
    if (currentGear != '\0') {
      currentGear = currentGear + -1;
    }
  }
  return currentGear;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Input_Interface__FUli(unsigned long key /*$a2*/, int debounce /*$a1*/)
 // line 488, offset 0x8009d318
	/* begin block 1 */
		// Start line: 489
		// Start offset: 0x8009D318
	/* end block 1 */
	// End offset: 0x8009D3B4
	// End Line: 500

int Input_Interface__FUli(ulong key,int debounce)

{
  int iVar1;
  
  if (debounce == 0) {
    iVar1 = 1;
    if (((&Input_gInterfaceResults)[simGlobal.time32Hz & 0x1f] & 1 << (key & 0x1f)) == 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
    if (((&Input_gInterfaceResults)[simGlobal.time32Hz & 0x1f] & 1 << (key & 0x1f) &
        ~(&Input_gInterfaceResults)[simGlobal.time32Hz - 1U & 0x1f]) != 0) {
      return 1;
    }
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Input_MainExitKey__Fv()
 // line 543, offset 0x8009d3bc
	/* begin block 1 */
		// Start line: 544
		// Start offset: 0x8009D3BC
	/* end block 1 */
	// End offset: 0x8009D3BC
	// End Line: 545

/* WARNING: Unknown calling convention yet parameter storage is locked */

int Input_MainExitKey__Fv(void)

{
  return (&Input_gInterfaceResults)[simGlobal.time32Hz & 0x1f] & 1;
}




