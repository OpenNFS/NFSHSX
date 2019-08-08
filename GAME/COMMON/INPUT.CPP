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

int * Input_StartUp__Fv(void)
{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  Device_StartUp__Fv();
  puVar1 = &Input_gHandler;
  iVar4 = 0xb7;
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar4);
  iVar4 = 0;
  iVar6 = 0;
  puVar5 = &Input_gMode;
  puVar1 = &Input_gDBFlags;
  while (iVar3 = 0, iVar4 < 2) {
    *puVar1 = 0;
    *puVar5 = 0;
    iVar2 = iVar6;
    do {
      *(undefined4 *)((int)&Input_gPressTime + iVar2) = 0;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0x11);
    iVar6 = iVar6 + 0x44;
    puVar5 = puVar5 + 1;
    puVar1 = puVar1 + 1;
    iVar4 = iVar4 + 1;
  }
  iVar4 = 0x1f;
  puVar1 = &DAT_80113f90;
  do {
    *puVar1 = 0;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar4);
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
  
  piVar1 = &DAT_80113cc8;
  if (player != 0) {
    piVar1 = &DAT_80113df8;
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

void Input_Update__Fv(void)
{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  char local_a8 [31];
  undefined local_89;
  undefined auStack136 [24];
  char local_70 [4];
  char local_6c [19];
  char local_59 [16];
  undefined local_49;
  undefined1 *local_48;
  uint local_44;
  undefined *local_40;
  uint *local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  Device_Update__Fv();
  iVar17 = 0x1f;
  puVar3 = &local_89;
  do {
    *puVar3 = 1;
    iVar17 = iVar17 + -1;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar17);
  puVar14 = &Input_gHandler;
  iVar17 = 0;
  local_48 = &Input_gResults;
  local_40 = auStack136;
  pbVar15 = &DAT_8013d227;
  local_44 = 0;
  local_3c = &Input_gDBFlags;
  local_38 = 0;
  local_34 = 0;
  do {
    iVar16 = 0;
    if (1 < iVar17) {
      uVar6 = 0;
      do {
        if (local_a8[uVar6] != '\0') {
          uVar7 = *puVar14;
          if (uVar7 != 0) {
            iVar17 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(uVar7 & 0xff) * 3])
                               ((int)uVar7 >> 8);
            if (0x40 < iVar17) {
              local_44 = local_44 | 1 << (uVar6 & 0x1f);
            }
          }
        }
        uVar6 = uVar6 + 1;
        puVar14 = puVar14 + 1;
      } while ((int)uVar6 < 0x20);
      uVar7 = Input_gTime + 2;
      uVar6 = Input_gTime + 3;
      Input_gTime = uVar7;
      *(uint *)(&Input_gInterfaceResults + (uVar7 & 0x1f) * 4) = local_44;
      *(uint *)(&Input_gInterfaceResults + (uVar6 & 0x1f) * 4) = local_44;
      return;
    }
    iVar12 = 0;
    do {
      puVar13 = puVar14;
      uVar6 = *puVar13;
      if ((uVar6 != 0) &&
         (iVar4 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(uVar6 & 0xff) * 3])((int)uVar6 >> 8),
         0x40 < iVar4)) {
        iVar16 = iVar12 + 1;
      }
      iVar12 = iVar12 + 1;
      puVar14 = puVar13 + 1;
    } while (iVar12 < 2);
    *(int *)((int)&Input_gMode + local_38) = iVar16;
    if (iVar16 == 0) {
      uVar6 = 0;
      iVar16 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(*puVar14 & 0xff) * 3])
                         ((int)*puVar14 >> 8);
      iVar12 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(puVar13[2] & 0xff) * 3])
                         ((int)puVar13[2] >> 8);
      *local_48 = (char)((int)((iVar12 - iVar16) + ((uint)(iVar12 - iVar16) >> 0x1f)) >> 1);
      bVar2 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(puVar13[3] & 0xff) * 3])
                        ((int)puVar13[3] >> 8);
      pbVar15[-2] = bVar2;
      puVar14 = puVar13 + 5;
      bVar2 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(puVar13[4] & 0xff) * 3])
                        ((int)puVar13[4] >> 8);
      pbVar15[-1] = bVar2;
      do {
        uVar7 = *puVar14;
        if ((uVar7 == 0) ||
           (iVar16 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(uVar7 & 0xff) * 3])
                               ((int)uVar7 >> 8), iVar16 < 0x41)) {
          *pbVar15 = *pbVar15 & ~(byte)(1 << (uVar6 & 0x1f));
        }
        else {
          *pbVar15 = *pbVar15 | (byte)(1 << (uVar6 & 0x1f));
        }
        iVar16 = local_34;
        puVar13 = local_3c;
        uVar6 = uVar6 + 1;
        puVar14 = puVar14 + 1;
      } while ((int)uVar6 < 2);
      iVar4 = 0;
      iVar12 = 0x10;
      puVar3 = local_40 + 0x10;
      *pbVar15 = *pbVar15 & 7;
      do {
        *puVar3 = 1;
        iVar12 = iVar12 + -1;
        puVar3 = puVar3 + -1;
      } while (-1 < iVar12);
      uVar6 = 0;
      iVar12 = local_34;
      while (puVar10 = local_3c, (int)uVar6 < 0x11) {
        uVar7 = *puVar14;
        if (uVar7 != 0) {
          iVar5 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(uVar7 & 0xff) * 3])((int)uVar7 >> 8);
          if (iVar5 < 0x41) {
            *puVar13 = *puVar13 & ~(1 << (uVar6 & 0x1f));
            *(undefined4 *)((int)&Input_gPressTime + iVar12) = 0;
          }
          else {
            iVar5 = *(int *)((int)&Input_gPressTime + iVar12) + 1;
            *(int *)((int)&Input_gPressTime + iVar12) = iVar5;
            if ((5 < iVar5) && (uVar7 = 1 << (uVar6 & 0x1f), (*puVar13 & uVar7) == 0)) {
              iVar4 = uVar6 + 1;
              *puVar13 = *puVar13 | uVar7;
            }
            iVar8 = 0;
            iVar5 = iVar16;
            do {
              if (puVar14[iVar8 - (uVar6 - 0x11)] == *puVar14) {
                local_40[iVar8] = 0;
                *(undefined4 *)((int)&Input_gPressTime + iVar5) =
                     *(undefined4 *)((int)&Input_gPressTime + iVar12);
              }
              iVar8 = iVar8 + 1;
              iVar5 = iVar5 + 4;
            } while (iVar8 < 0x11);
          }
        }
        puVar14 = puVar14 + 1;
        iVar12 = iVar12 + 4;
        uVar6 = uVar6 + 1;
      }
      uVar6 = 0;
      do {
        uVar7 = *puVar14;
        if (uVar7 != 0) {
          iVar16 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(uVar7 & 0xff) * 3])((int)uVar7 >> 8);
          if (iVar16 < 0x41) {
            piVar11 = (int *)((int)&Input_gPressTime + uVar6 * 4 + local_34);
            uVar7 = 1 << (uVar6 & 0x1f);
            if (*piVar11 - 1U < 5) {
              if ((*puVar10 & uVar7) == 0) {
                iVar4 = uVar6 + 1;
                *puVar10 = *puVar10 | uVar7;
              }
              *piVar11 = 0;
            }
            else {
              *puVar10 = *puVar10 & ~(1 << (uVar6 & 0x1f));
            }
          }
          else {
            uVar7 = 1 << (uVar6 & 0x1f);
            if ((local_40[uVar6] != '\0') && ((*puVar10 & uVar7) == 0)) {
              iVar4 = uVar6 + 1;
              *puVar10 = *puVar10 | uVar7;
            }
          }
        }
        puVar13 = local_3c;
        uVar6 = uVar6 + 1;
        puVar14 = puVar14 + 1;
      } while ((int)uVar6 < 0x11);
      iVar16 = 0;
      uVar6 = 0;
      while( true ) {
        do {
          uVar7 = *puVar14;
          if (uVar7 != 0) {
            iVar12 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(uVar7 & 0xff) * 3])
                               ((int)uVar7 >> 8);
            uVar7 = 1 << (uVar6 & 0x1f);
            if (iVar12 < 0x41) {
              uVar7 = *puVar13 & ~uVar7;
            }
            else {
              uVar7 = *puVar13 | uVar7;
            }
            *puVar13 = uVar7;
          }
          uVar6 = uVar6 + 1;
          puVar14 = puVar14 + 1;
        } while ((int)uVar6 < 0x11);
        iVar16 = iVar16 + 1;
        if (1 < iVar16) break;
        uVar6 = 0;
      }
    }
    else {
      iVar12 = 0x27;
      puVar3 = &local_49;
      do {
        *puVar3 = 1;
        iVar12 = iVar12 + -1;
        puVar3 = puVar3 + -1;
      } while (-1 < iVar12);
      iVar12 = 0;
      puVar10 = puVar14;
      do {
        iVar5 = 0;
        iVar4 = iVar16 * 0x11;
        do {
          if (*puVar10 == puVar14[iVar4 + 0x17]) {
            local_70[iVar12] = '\0';
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar16 * 0x11 + iVar5;
        } while (iVar5 < 0x11);
        iVar12 = iVar12 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar12 < 0x28);
      iVar4 = 0;
      iVar12 = 0x260;
      do {
        iVar8 = 0;
        iVar5 = iVar16 * 0x11;
        do {
          if (*(uint *)((int)&Input_gHandler + iVar12) == puVar14[iVar5 + 0x17]) {
            local_a8[iVar4] = '\0';
          }
          iVar8 = iVar8 + 1;
          iVar5 = iVar16 * 0x11 + iVar8;
        } while (iVar8 < 0x11);
        iVar4 = iVar4 + 1;
        iVar12 = iVar12 + 4;
      } while (iVar4 < 0x20);
      iVar12 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(*puVar14 & 0xff) * 3])
                         ((int)*puVar14 >> 8);
      iVar4 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(puVar13[2] & 0xff) * 3])
                        ((int)puVar13[2] >> 8);
      if ((local_70[0] != '\0') && (local_70[1] != '\0')) {
        *local_48 = (char)((int)((iVar4 - iVar12) + ((uint)(iVar4 - iVar12) >> 0x1f)) >> 1);
      }
      if (local_70[2] != '\0') {
        bVar2 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(puVar13[3] & 0xff) * 3])
                          ((int)puVar13[3] >> 8);
        pbVar15[-2] = bVar2;
      }
      if (local_70[3] != '\0') {
        bVar2 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(puVar13[4] & 0xff) * 3])
                          ((int)puVar13[4] >> 8);
        pbVar15[-1] = bVar2;
      }
      puVar13 = puVar13 + 5;
      uVar6 = 0;
      do {
        if (local_6c[uVar6] != '\0') {
          uVar7 = *puVar13;
          if ((uVar7 == 0) ||
             (iVar12 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(uVar7 & 0xff) * 3])
                                 ((int)uVar7 >> 8), iVar12 < 0x41)) {
            *pbVar15 = *pbVar15 & ~(byte)(1 << (uVar6 & 0x1f));
          }
          else {
            *pbVar15 = *pbVar15 | (byte)(1 << (uVar6 & 0x1f));
          }
        }
        puVar14 = local_3c;
        uVar6 = uVar6 + 1;
        puVar13 = puVar13 + 1;
      } while ((int)uVar6 < 2);
      iVar4 = 0;
      iVar12 = 0x10;
      puVar3 = local_40 + 0x10;
      *pbVar15 = *pbVar15 & 7;
      do {
        *puVar3 = 1;
        iVar12 = iVar12 + -1;
        puVar3 = puVar3 + -1;
      } while (-1 < iVar12);
      uVar6 = 0;
      iVar12 = local_34;
      iVar5 = local_34;
      while (puVar10 = local_3c, (int)uVar6 < 0x11) {
        uVar7 = *puVar13;
        if (uVar7 != 0) {
          if ((local_6c[uVar6 + 2] == '\0') ||
             (local_30 = iVar12,
             iVar8 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(uVar7 & 0xff) * 3])
                               ((int)uVar7 >> 8), iVar12 = local_30, iVar8 < 0x41)) {
            *puVar14 = *puVar14 & ~(1 << (uVar6 & 0x1f));
            *(undefined4 *)((int)&Input_gPressTime + iVar5) = 0;
          }
          else {
            iVar12 = *(int *)((int)&Input_gPressTime + iVar5) + 1;
            *(int *)((int)&Input_gPressTime + iVar5) = iVar12;
            if ((5 < iVar12) && (uVar7 = 1 << (uVar6 & 0x1f), (*puVar14 & uVar7) == 0)) {
              iVar4 = uVar6 + 1;
              *puVar14 = *puVar14 | uVar7;
            }
            iVar9 = 0;
            iVar8 = local_30;
            do {
              if (puVar13[iVar9 - (uVar6 - 0x11)] == *puVar13) {
                local_40[iVar9] = 0;
                *(undefined4 *)((int)&Input_gPressTime + iVar8) =
                     *(undefined4 *)((int)&Input_gPressTime + iVar5);
              }
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 4;
              iVar12 = local_30;
            } while (iVar9 < 0x11);
          }
        }
        puVar13 = puVar13 + 1;
        iVar5 = iVar5 + 4;
        uVar6 = uVar6 + 1;
      }
      uVar6 = 0;
      do {
        uVar7 = *puVar13;
        if (uVar7 != 0) {
          if (local_59[uVar6] != '\0') {
            iVar12 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(uVar7 & 0xff) * 3])
                               ((int)uVar7 >> 8);
            uVar7 = 1 << (uVar6 & 0x1f);
            if (0x40 < iVar12) {
              if (((*puVar10 & uVar7) == 0) && (local_40[uVar6] != '\0')) {
                iVar4 = uVar6 + 1;
                *puVar10 = *puVar10 | uVar7;
              }
              goto LAB_8009cf48;
            }
            if (local_59[uVar6] != '\0') {
              piVar11 = (int *)((int)&Input_gPressTime + uVar6 * 4 + local_34);
              iVar12 = *piVar11;
              if ((0 < iVar12) && (uVar7 = 1 << (uVar6 & 0x1f), iVar12 < 6)) {
                if ((*puVar10 & uVar7) == 0) {
                  iVar4 = uVar6 + 1;
                  *puVar10 = *puVar10 | uVar7;
                }
                *piVar11 = 0;
                goto LAB_8009cf48;
              }
            }
          }
          *puVar10 = *puVar10 & ~(1 << (uVar6 & 0x1f));
        }
LAB_8009cf48:
        puVar14 = local_3c;
        uVar6 = uVar6 + 1;
        puVar13 = puVar13 + 1;
      } while ((int)uVar6 < 0x11);
      puVar13 = puVar13 + (iVar16 + -1) * 0x11;
      uVar6 = 0;
      do {
        uVar7 = *puVar13;
        if (uVar7 != 0) {
          iVar12 = (*(code *)(&PTR_Device_Null__FUl_8011ec1c)[(uVar7 & 0xff) * 3])((int)uVar7 >> 8);
          if (iVar12 < 0x41) {
            *puVar14 = *puVar14 & ~(1 << (uVar6 & 0x1f));
          }
          else {
            uVar7 = 1 << (uVar6 & 0x1f);
            if ((*puVar14 & uVar7) == 0) {
              iVar4 = uVar6 + 1;
              *puVar14 = *puVar14 | uVar7;
            }
          }
        }
        uVar6 = uVar6 + 1;
        puVar13 = puVar13 + 1;
      } while ((int)uVar6 < 0x11);
      puVar14 = puVar13 + (2 - iVar16) * 0x11;
    }
    *pbVar15 = *pbVar15 | (byte)(iVar4 << 3);
    bVar2 = *pbVar15;
    bVar1 = bVar2 >> 3;
    if (bVar1 == 0x10) {
      *pbVar15 = bVar2 & 7;
      uVar6 = iVar17 + 0x1a;
LAB_8009d088:
      uVar6 = 1 << (uVar6 & 0x1f);
LAB_8009d090:
      local_44 = local_44 | uVar6;
    }
    else {
      if (bVar1 < 0x11) {
        if (bVar1 == 0xf) {
          *pbVar15 = bVar2 & 7;
          uVar6 = 0x200000;
          goto LAB_8009d090;
        }
      }
      else {
        if (bVar1 == 0x11) {
          *pbVar15 = bVar2 & 7;
          uVar6 = iVar17 + 0x1c;
          goto LAB_8009d088;
        }
      }
    }
    pbVar15 = pbVar15 + 4;
    local_48 = local_48 + 4;
    if (false) {
      local_3c = local_3c + 1;
      puVar14 = puVar14 + 0x4c;
      local_38 = local_38 + 4;
      iVar17 = iVar17 + 1;
      local_34 = local_34 + 0x44;
    }
    local_3c = local_3c + 1;
    local_38 = local_38 + 4;
    iVar17 = iVar17 + 1;
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

void Input_Store__Fv(void)
{
  int pIndex;
  Input_tResults *val;
  
  if (gSimQueue_BlockSelf == 0) {
    if (true) {
      if (DAT_801131f8 != 0) {
        return;
      }
      val = (Input_tResults *)&Input_gResults;
      pIndex = DAT_80113208;
    }
    else {
      pIndex = SimQueue_Put__FiP14Input_tResults(0,(Input_tResults *)&Input_gResults);
      if (pIndex == 0) {
        return;
      }
      val = (Input_tResults *)&DAT_8013d228;
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
  SimQueue_GetCurrentInput__FiP14Input_tResults(humanIndex,(Input_tResults *)&Input_gSim);
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
  if (bGp00000ce3 >> 3 == 1) {
    if ((int)(uint)(byte)currentGear < numGears + -1) {
      currentGear = currentGear + '\x01';
    }
  }
  else {
    if (bGp00000ce3 >> 3 != 2) {
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
    if ((*(uint *)(&Input_gInterfaceResults + (DAT_8011e0b4 & 0x1f) * 4) & 1 << (key & 0x1f)) == 0)
    {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
    if ((*(uint *)(&Input_gInterfaceResults + (DAT_8011e0b4 & 0x1f) * 4) & 1 << (key & 0x1f) &
        ~*(uint *)(&Input_gInterfaceResults + (DAT_8011e0b4 - 1 & 0x1f) * 4)) != 0) {
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

int Input_MainExitKey__Fv(void)
{
  return *(uint *)(&Input_gInterfaceResults + (DAT_8011e0b4 & 0x1f) * 4) & 1;


}





