#include "NFS4.H"
#include "AUDIOENG.H"

// decompiled code
// original method signature: 
// void /*$ra*/ AudioEng_Set__Fiiiiiiii(int player /*$a0*/, int vol /*$s7*/, int esp /*$a2*/, int gas /*$s3*/, int cam /*stack 16*/, int dop /*stack 20*/, int azi /*stack 24*/, int dir /*stack 28*/)
 // line 205, offset 0x8007b5a8
	/* begin block 1 */
		// Start line: 206
		// Start offset: 0x8007B5A8
		// Variables:
	// 		struct AudioEng_t *g; // $s1
	// 		struct AudioEng_tAdjustments *a; // $s2
	// 		struct AudioEng_tState *s; // $s0
	/* end block 1 */
	// End offset: 0x8007B7F8
	// End Line: 261

void AudioEng_Set__Fiiiiiiii(int player,int vol,int esp,int gas,int cam,int dop,int azi,int dir)
{
  undefined2 uVar1;
  char cVar3;
  int iVar2;
  byte bVar4;
  undefined2 *puVar5;
  byte *pbVar6;
  
  if ((uint)player < 2) {
    pbVar6 = (byte *)(&_AudioEng_g)[player];
    if ((pbVar6 != (byte *)0x0) && ((pbVar6[0x11b] != 0xf || ((pbVar6[0x11a] + 1 & 1) == 0)))) {
      puVar5 = (undefined2 *)(pbVar6 + (uint)pbVar6[0x11a] * 0xc + 0x5a);
      iVar2 = (int)((uint)pbVar6[7] * esp) >> 0xe;
      uVar1 = 0x1ff;
      if (iVar2 < 0x200) {
        uVar1 = (short)iVar2;
      }
      puVar5[4] = uVar1;
      if (**(int **)((&_Cars_gList)[player] + 0x288) == 0x1c) {
        esp = (esp >> 2) + 0xc000;
      }
      else {
        esp = esp + 0x3333;
      }
      iVar2 = fixedmult(esp,dop);
      puVar5[1] = (short)((int)((uint)pbVar6[6] * iVar2) >> 10);
      iVar2 = gas + (gas >> 5) + (gas >> 6);
      if (iVar2 < 0x81) {
        *(byte *)((int)puVar5 + 0xb) = (byte)iVar2;
      }
      else {
        *(byte *)((int)puVar5 + 0xb) = 0x80;
      }
      if (cam == 0) {
        *(byte *)(puVar5 + 5) = pbVar6[1];
        if (DAT_801131f8 == 1) {
          puVar5[3] = 0;
          puVar5[2] = (short)azi;
        }
        else {
          puVar5[2] = 0;
          puVar5[3] = 0x3fff;
        }
        bVar4 = *pbVar6;
      }
      else {
        *(byte *)(puVar5 + 5) = pbVar6[2];
        if (dir < 0) {
          bVar4 = *(byte *)(puVar5 + 5);
          iVar2 = dir * (uint)pbVar6[3] * (uint)bVar4;
        }
        else {
          bVar4 = *(byte *)(puVar5 + 5);
          iVar2 = dir * (uint)pbVar6[4] * (0x80 - (uint)bVar4);
        }
        iVar2 = iVar2 >> 7;
        cVar3 = (char)((uint)iVar2 >> 0x10);
        if (iVar2 < 0) {
          cVar3 = (char)((uint)(iVar2 + 0xffff) >> 0x10);
        }
        *(byte *)(puVar5 + 5) = bVar4 + cVar3;
        puVar5[2] = (short)azi;
        puVar5[3] = 0;
        bVar4 = pbVar6[5];
      }
      iVar2 = (int)(vol * (uint)bVar4) >> 6;
      uVar1 = 0x7ff;
      if (iVar2 < 0x800) {
        uVar1 = (undefined2)iVar2;
      }
      *puVar5 = uVar1;
      pbVar6[0x11a] = pbVar6[0x11a] + 1 & 0xf;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioEng_Update__Fv()
 // line 266, offset 0x8007b824
	/* begin block 1 */
		// Start line: 267
		// Start offset: 0x8007B824

		/* begin block 1.1 */
			// Start line: 267
			// Start offset: 0x8007B824
			// Variables:
		// 		int player; // stack offset -48

			/* begin block 1.1.1 */
				// Start line: 276
				// Start offset: 0x8007B860
				// Variables:
			// 		struct AudioEng_t *g; // $s1
			// 		int n; // $s6
			// 		struct AudioEng_tState *s; // $s0
			// 		int tick; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 285
					// Start offset: 0x8007B890

					/* begin block 1.1.1.1.1 */
						// Start line: 289
						// Start offset: 0x8007B8E0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 290
							// Start offset: 0x8007B8E0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 292
								// Start offset: 0x8007B8F0

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 294
									// Start offset: 0x8007B8FC

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 295
										// Start offset: 0x8007B90C
										// Variables:
									// 		unsigned long vol; // $a0
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x8007BA54
									// End Line: 334
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x8007BA54
								// End Line: 334
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8007BA54
							// End Line: 334
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007BA64
						// End Line: 336
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007BA78
					// End Line: 337
				/* end block 1.1.1.1 */
				// End offset: 0x8007BA78
				// End Line: 337

				/* begin block 1.1.1.2 */
					// Start line: 340
					// Start offset: 0x8007BA78

					/* begin block 1.1.1.2.1 */
						// Start line: 340
						// Start offset: 0x8007BA88

						/* begin block 1.1.1.2.1.1 */
							// Start line: 342
							// Start offset: 0x8007BA94

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 343
								// Start offset: 0x8007BAA4

								/* begin block 1.1.1.2.1.1.1.1 */
									// Start line: 344
									// Start offset: 0x8007BAA4

									/* begin block 1.1.1.2.1.1.1.1.1 */
										// Start line: 345
										// Start offset: 0x8007BAB4
										// Variables:
									// 		struct SNDPLAYOPTS playopts; // stack offset -72
									// 		unsigned short leftazim; // $s2
									// 		unsigned short rightazim; // $s3
									/* end block 1.1.1.2.1.1.1.1.1 */
									// End offset: 0x8007BD34
									// End Line: 439
								/* end block 1.1.1.2.1.1.1.1 */
								// End offset: 0x8007BD84
								// End Line: 451
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x8007BD84
							// End Line: 451
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x8007BD84
						// End Line: 451
					/* end block 1.1.1.2.1 */
					// End offset: 0x8007BD84
					// End Line: 451
				/* end block 1.1.1.2 */
				// End offset: 0x8007BD98
				// End Line: 454
			/* end block 1.1.1 */
			// End offset: 0x8007BD98
			// End Line: 454
		/* end block 1.1 */
		// End offset: 0x8007BDAC
		// End Line: 455
	/* end block 1 */
	// End offset: 0x8007BDAC
	// End Line: 455

void AudioEng_Update__Fv(void)
{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  ushort uVar14;
  ushort uVar15;
  int iVar16;
  int local_48;
  undefined local_44;
  undefined local_40;
  undefined local_3d;
  undefined2 local_3c;
  ushort local_38;
  undefined2 local_36;
  int local_30;
  
  local_30 = 0;
  do {
    if ((1 < local_30) || (iVar13 = (&_AudioEng_g)[local_30], iVar13 == 0)) {
      return;
    }
    puVar12 = (ushort *)(iVar13 + (uint)*(byte *)(iVar13 + 0x11b) * 0xc + 0x5a);
    iVar3 = gettick();
    if (*(char *)(iVar13 + 0x11b) != *(char *)(iVar13 + 0x11a)) {
      iVar4 = gettick();
      if (*(int *)(iVar13 + 8) < iVar4) {
        *(int *)(iVar13 + 8) = iVar3 + 2;
        iVar16 = 0;
        iVar3 = iVar13;
        iVar4 = iVar13;
        while (iVar16 < 0x10) {
          if (-1 < *(char *)(iVar3 + 0x124)) {
            uVar8 = (uint)puVar12[4];
            if (((int)uVar8 < (int)*(short *)(iVar3 + 0x11c)) ||
               ((int)*(short *)(iVar3 + 0x11e) <= (int)uVar8)) {
              iVar10 = 0;
            }
            else {
              iVar10 = (int)*(char *)(*(int *)(iVar3 + 0x120) +
                                     (uVar8 - (int)*(short *)(iVar3 + 0x11c)));
            }
            if (iVar10 != 0) {
              if (iVar16 < 8) {
                uVar8 = 0x80 - (uint)*(byte *)((int)puVar12 + 0xb);
              }
              else {
                uVar8 = (uint)*(byte *)((int)puVar12 + 0xb);
              }
              if (*(char *)(iVar3 + 0x124) < '@') {
                uVar5 = (uint)*(byte *)(puVar12 + 5);
code_r0x8007b9f4:
                uVar5 = (uint)(byte)(&Xfade)[uVar5];
              }
              else {
                if (puVar12[3] == 0) {
                  uVar5 = 0x80 - (uint)*(byte *)(puVar12 + 5);
                  goto code_r0x8007b9f4;
                }
                uVar5 = (int)((uint)(byte)(&UNK_8010e70c)[-(uint)*(byte *)(puVar12 + 5)] * 0x2f) >>
                        6;
              }
              iVar10 = iVar10 * (uint)(byte)(&Xfade)[uVar8] * uVar5;
            }
            uVar8 = iVar10 * (uint)*puVar12 >> 0x15;
            if (0x7f < uVar8) {
              uVar8 = 0x7f;
            }
            *(uint *)(iVar4 + 0xc) = uVar8;
            *(uint *)(iVar13 + 0x4c) = (uint)puVar12[2];
            *(uint *)(iVar13 + 0x50) = (uint)puVar12[3];
            *(uint *)(iVar13 + 0x54) = (uint)puVar12[1];
          }
          iVar4 = iVar4 + 4;
          iVar3 = iVar3 + 0xc;
          iVar16 = iVar16 + 1;
        }
        *(byte *)(iVar13 + 0x11b) = *(char *)(iVar13 + 0x11b) + 1U & 0xf;
      }
    }
    iVar10 = 0;
    iVar3 = iVar13;
    iVar4 = iVar13;
    iVar16 = iVar13;
    while (iVar10 < 0x10) {
      if (-1 < *(char *)(iVar3 + 0x124)) {
        if (*(int *)(iVar16 + 0xc) == 0) {
          if (*(int *)(iVar3 + 0x1e4) != -1) {
            SNDstop();
            if (*(int *)(iVar3 + 0x2a4) != -1) {
              SNDstop();
            }
            *(undefined4 *)(iVar3 + 0x1e4) = 0xffffffff;
            *(undefined4 *)(iVar3 + 0x2a4) = 0xffffffff;
          }
        }
        else {
          if (*(char *)(iVar3 + 0x124) < '@') {
            uVar15 = *(ushort *)(iVar13 + 0x4c);
            uVar14 = uVar15;
          }
          else {
            uVar15 = *(short *)(iVar13 + 0x4c) + *(short *)(iVar13 + 0x50);
            uVar14 = *(short *)(iVar13 + 0x4c) - *(short *)(iVar13 + 0x50);
          }
          SNDplaysetdef(&local_48);
          local_44 = *(undefined *)(iVar13 + 0x58);
          local_48 = (int)*(char *)(iVar3 + 0x124);
          local_40 = 0;
          local_3c = *(undefined2 *)(iVar13 + 0x54);
          local_3d = 1;
          local_36 = 0;
          if (*(int *)(iVar3 + 0x1e4) == -1) {
            local_38 = uVar14;
            uVar6 = SNDplay(&local_48);
            *(undefined4 *)(iVar3 + 0x1e4) = uVar6;
            *(undefined *)(iVar4 + 0x35c) = 2;
            *(undefined *)(iVar3 + 0x1dc) = 0;
            *(ushort *)(iVar3 + 0x1e0) = uVar14;
            *(undefined2 *)(iVar3 + 0x1de) = *(undefined2 *)(iVar13 + 0x54);
          }
          else {
            if (((*(int *)(iVar13 + 0x50) == 0) || (*(char *)(iVar3 + 0x124) < '@')) ||
               (*(int *)(iVar3 + 0x2a4) != -1)) {
              iVar9 = (int)*(char *)(iVar3 + 0x1dc);
              iVar11 = *(int *)(iVar16 + 0xc);
              if (iVar9 != iVar11) {
                if (iVar11 < iVar9) {
                  uVar7 = (undefined)(iVar9 + -2);
                  bVar1 = iVar9 + -2 < iVar11;
                }
                else {
                  uVar7 = (undefined)(iVar9 + 2);
                  bVar1 = iVar11 < iVar9 + 2;
                }
                if (bVar1) {
                  uVar7 = (undefined)iVar11;
                }
                *(undefined *)(iVar3 + 0x1dc) = uVar7;
                SNDvol(*(undefined4 *)(iVar3 + 0x1e4),(int)*(char *)(iVar3 + 0x1dc));
              }
            }
            if ((uint)*(ushort *)(iVar3 + 0x1e0) != (uint)uVar14) {
              SND3dpos(*(undefined4 *)(iVar3 + 0x1e4),(uint)uVar14,0);
              *(ushort *)(iVar3 + 0x1e0) = uVar14;
            }
            if ((uint)*(ushort *)(iVar3 + 0x1de) != *(uint *)(iVar13 + 0x54)) {
              SNDpitchmult(*(undefined4 *)(iVar3 + 0x1e4));
              *(undefined2 *)(iVar3 + 0x1de) = *(undefined2 *)(iVar13 + 0x54);
            }
            if ((*(char *)(iVar3 + 0x124) < '@') || (*(int *)(iVar13 + 0x50) == 0)) {
              if (*(int *)(iVar3 + 0x2a4) != -1) {
                SNDstop();
                *(undefined4 *)(iVar3 + 0x2a4) = 0xffffffff;
                *(undefined *)(iVar4 + 0x35c) = 2;
              }
            }
            else {
              if (*(int *)(iVar3 + 0x2a4) == -1) {
                cVar2 = *(char *)(iVar4 + 0x35c) + -1;
                *(char *)(iVar4 + 0x35c) = cVar2;
                if (cVar2 == -1) {
                  local_38 = uVar15;
                  uVar6 = SNDplay(&local_48);
                  *(undefined4 *)(iVar3 + 0x2a4) = uVar6;
                  *(undefined *)(iVar3 + 0x29c) = 0;
                  *(ushort *)(iVar3 + 0x2a0) = uVar15;
LAB_8007bd18:
                  *(undefined2 *)(iVar3 + 0x29e) = *(undefined2 *)(iVar13 + 0x54);
                }
              }
              else {
                iVar9 = (int)*(char *)(iVar3 + 0x29c);
                iVar11 = *(int *)(iVar16 + 0xc);
                if (iVar9 != iVar11) {
                  if (iVar11 < iVar9) {
                    uVar7 = (undefined)(iVar9 + -2);
                    bVar1 = iVar9 + -2 < iVar11;
                  }
                  else {
                    uVar7 = (undefined)(iVar9 + 2);
                    bVar1 = iVar11 < iVar9 + 2;
                  }
                  if (bVar1) {
                    uVar7 = (undefined)iVar11;
                  }
                  *(undefined *)(iVar3 + 0x29c) = uVar7;
                  SNDvol(*(undefined4 *)(iVar3 + 0x2a4),(int)*(char *)(iVar3 + 0x29c));
                }
                if ((uint)*(ushort *)(iVar3 + 0x2a0) != (uint)uVar15) {
                  SND3dpos(*(undefined4 *)(iVar3 + 0x2a4),(uint)uVar15,0);
                  *(ushort *)(iVar3 + 0x2a0) = uVar15;
                }
                if ((uint)*(ushort *)(iVar3 + 0x29e) != *(uint *)(iVar13 + 0x54)) {
                  SNDpitchmult(*(undefined4 *)(iVar3 + 0x2a4));
                  goto LAB_8007bd18;
                }
              }
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
      iVar16 = iVar16 + 4;
      iVar10 = iVar10 + 1;
    }
    local_30 = local_30 + 1;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioEng_LoadDef__FPcT0illPP13AudioEng_tDef(char *filename /*$a0*/, char *name /*$a1*/, int handle /*$s2*/, long offset /*$s3*/, long size /*stack 16*/, struct AudioEng_tDef **ed /*stack 20*/)
 // line 460, offset 0x8007bddc
	/* begin block 1 */
		// Start line: 461
		// Start offset: 0x8007BDDC
	/* end block 1 */
	// End offset: 0x8007BE38
	// End Line: 472

void AudioEng_LoadDef__FPcT0illPP13AudioEng_tDef( (char *filename,char *name,int handle,long offset,long size,AudioEng_tDef **ed)
{
  AudioEng_tDef *pAVar1;
  
  pAVar1 = (AudioEng_tDef *)reservememadr(name,size,0x10);
  *ed = pAVar1;
  if (pAVar1 != (AudioEng_tDef *)0x0) {
    FILE_readsync(handle,offset,*ed,size,100);
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioEng_StartUp__FiPc(int player /*$s7*/, char *carname /*$s3*/)
 // line 478, offset 0x8007be54
	/* begin block 1 */
		// Start line: 479
		// Start offset: 0x8007BE54
		// Variables:
	// 		struct AudioEng_tDef *cruisedef; // stack offset -48
	// 		struct AudioEng_tDef *loaddef; // stack offset -52
	// 		int tablesize; // $s5
	// 		int i; // $s1
	// 		int bankloaded; // $s6
	// 		int spu; // $fp
	// 		char filename[64]; // stack offset -128
	// 		struct AudioEng_t *g; // $s2
	// 		char *header; // $s4

		/* begin block 1.1 */
			// Start line: 540
			// Start offset: 0x8007C018

			/* begin block 1.1.1 */
				// Start line: 544
				// Start offset: 0x8007C030
				// Variables:
			// 		int handle; // stack offset -64

				/* begin block 1.1.1.1 */
					// Start line: 547
					// Start offset: 0x8007C030
					// Variables:
				// 		int i; // $s3

					/* begin block 1.1.1.1.1 */
						// Start line: 549
						// Start offset: 0x8007C048
						// Variables:
					// 		long size; // stack offset -56
					// 		long offset; // stack offset -60
					// 		char *name; // $s1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 554
							// Start offset: 0x8007C05C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 557
								// Start offset: 0x8007C098
								// Variables:
							// 		char *pdata; // $s0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8007C0B4
							// End Line: 565
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007C190
						// End Line: 576
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007C190
					// End Line: 576
				/* end block 1.1.1.1 */
				// End offset: 0x8007C198
				// End Line: 579
			/* end block 1.1.1 */
			// End offset: 0x8007C1AC
			// End Line: 581
		/* end block 1.1 */
		// End offset: 0x8007C1AC
		// End Line: 581

		/* begin block 1.2 */
			// Start line: 584
			// Start offset: 0x8007C1AC

			/* begin block 1.2.1 */
				// Start line: 585
				// Start offset: 0x8007C1D4
				// Variables:
			// 		char *current; // $s3

				/* begin block 1.2.1.1 */
					// Start line: 586
					// Start offset: 0x8007C1D4
					// Variables:
				// 		int c; // $t3

					/* begin block 1.2.1.1.1 */
						// Start line: 586
						// Start offset: 0x8007C1D8
						// Variables:
					// 		struct AudioEng_tDef *ed; // $a3

						/* begin block 1.2.1.1.1.1 */
							// Start line: 593
							// Start offset: 0x8007C1FC

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 594
								// Start offset: 0x8007C210

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 595
									// Start offset: 0x8007C210

									/* begin block 1.2.1.1.1.1.1.1.1 */
										// Start line: 595
										// Start offset: 0x8007C220

										/* begin block 1.2.1.1.1.1.1.1.1.1 */
											// Start line: 597
											// Start offset: 0x8007C22C

											/* begin block 1.2.1.1.1.1.1.1.1.1.1 */
												// Start line: 598
												// Start offset: 0x8007C23C
												// Variables:
											// 		struct AudioEng_tChanAttr *chan; // $a0
											// 		int j; // $v1
											/* end block 1.2.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8007C310
											// End Line: 621
										/* end block 1.2.1.1.1.1.1.1.1.1 */
										// End offset: 0x8007C310
										// End Line: 621
									/* end block 1.2.1.1.1.1.1.1.1 */
									// End offset: 0x8007C310
									// End Line: 623
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x8007C330
								// End Line: 624
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x8007C330
							// End Line: 624
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8007C330
						// End Line: 624
					/* end block 1.2.1.1.1 */
					// End offset: 0x8007C330
					// End Line: 624
				/* end block 1.2.1.1 */
				// End offset: 0x8007C338
				// End Line: 626

				/* begin block 1.2.1.2 */
					// Start line: 627
					// Start offset: 0x8007C338
					// Variables:
				// 		int c; // $s4

					/* begin block 1.2.1.2.1 */
						// Start line: 634
						// Start offset: 0x8007C358
						// Variables:
					// 		struct AudioEng_tDef *ed; // $v0

						/* begin block 1.2.1.2.1.1 */
							// Start line: 638
							// Start offset: 0x8007C37C

							/* begin block 1.2.1.2.1.1.1 */
								// Start line: 638
								// Start offset: 0x8007C388
								// Variables:
							// 		struct AudioEng_tChanAttr *chan; // $v0

								/* begin block 1.2.1.2.1.1.1.1 */
									// Start line: 642
									// Start offset: 0x8007C3A0

									/* begin block 1.2.1.2.1.1.1.1.1 */
										// Start line: 643
										// Start offset: 0x8007C3B4
										// Variables:
									// 		int size; // $a2
									/* end block 1.2.1.2.1.1.1.1.1 */
									// End offset: 0x8007C3D0
									// End Line: 648
								/* end block 1.2.1.2.1.1.1.1 */
								// End offset: 0x8007C3D0
								// End Line: 648
							/* end block 1.2.1.2.1.1.1 */
							// End offset: 0x8007C3D0
							// End Line: 648
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x8007C3E0
						// End Line: 650
					/* end block 1.2.1.2.1 */
					// End offset: 0x8007C3E0
					// End Line: 650
				/* end block 1.2.1.2 */
				// End offset: 0x8007C3E8
				// End Line: 651
			/* end block 1.2.1 */
			// End offset: 0x8007C400
			// End Line: 653
		/* end block 1.2 */
		// End offset: 0x8007C400
		// End Line: 653
	/* end block 1 */
	// End offset: 0x8007C404
	// End Line: 655

int AudioEng_StartUp__FiPc(int player,char *carname)
{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  char *pdata;
  AudioEng_tDef **ed;
  short *psVar5;
  short sVar6;
  undefined *puVar7;
  int iVar8;
  undefined *puVar9;
  char *__format;
  AudioEng_tDef *pAVar10;
  size_t __n;
  AudioEng_tDef *pAVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  void *__dest;
  void *pvVar16;
  int iVar17;
  int iVar18;
  char acStack128 [64];
  int local_40;
  long local_3c;
  int local_38;
  AudioEng_tDef *local_34;
  AudioEng_tDef *local_30 [2];
  
  if (1 < (uint)player) {
    return 0;
  }
  iVar17 = 0;
  if ((&_AudioEng_g)[player] != 0) {
    return 0;
  }
  iVar18 = 0;
  puVar3 = (undefined *)reservememadr("Engine Audio",0x370,0);
  iVar14 = 0;
  *(undefined **)(&_AudioEng_g + player) = puVar3;
  *(undefined4 *)(puVar3 + 0x36c) = 0;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0x4c) = 0;
  *(undefined4 *)(puVar3 + 0x50) = 0;
  *(undefined4 *)(puVar3 + 0x54) = 0x1000;
  puVar7 = puVar3;
  puVar9 = puVar3;
  do {
    *(undefined4 *)(puVar9 + 0xc) = 0;
    *(undefined4 *)(puVar7 + 0x1e4) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x2a4) = 0xffffffff;
    puVar7[0x124] = 0xff;
    *(undefined2 *)(puVar7 + 0x11c) = 0x200;
    *(undefined2 *)(puVar7 + 0x11e) = 0x200;
    *(undefined4 *)(puVar7 + 0x120) = 0;
    puVar7 = puVar7 + 0xc;
    iVar14 = iVar14 + 1;
    puVar9 = puVar9 + 4;
  } while (iVar14 < 0x10);
  local_30[0] = (AudioEng_tDef *)0x0;
  local_34 = (AudioEng_tDef *)0x0;
  *puVar3 = 0x32;
  puVar3[1] = 0x1f;
  puVar3[5] = 0xa6;
  puVar3[2] = 0x2b;
  puVar3[3] = 0x40;
  puVar3[4] = 0x79;
  puVar3[6] = 0x50;
  puVar3[7] = 0x68;
  puVar3[0x11a] = 0;
  puVar3[0x11b] = 0;
  bVar1 = false;
  if (DAT_801131f8 == 1) {
    __format = "%s%sens.viv";
  }
  else {
    __format = "%s%seng.viv";
  }
  sprintf(acStack128,__format,0,carname);
  iVar14 = loadbigfileheader(acStack128,0x10);
  if (iVar14 == 0) {
    if (DAT_801131f8 == 1) {
      __format = "%sp993ens.viv";
    }
    else {
      __format = "%sp993eng.viv";
    }
    sprintf(acStack128,__format,0);
    iVar14 = loadbigfileheader(acStack128,0x10);
    if (iVar14 == 0) goto LAB_8007c1ac;
  }
  FILE_opensync(acStack128,1,100,&local_40);
  iVar15 = 0;
  while( true ) {
    iVar4 = bigcount(iVar14);
    if (iVar4 <= iVar15) break;
    __format = (char *)locatebigentry(iVar14,0,iVar15,&local_3c,&local_38);
    iVar4 = wildcard(__format,"*.bnk");
    if ((iVar4 == 0) || (bVar1)) {
      iVar4 = wildcard(__format,"*.ltb");
      if ((iVar4 == 0) || (local_34 != (AudioEng_tDef *)0x0)) {
        iVar4 = wildcard(__format,"*.ctb");
        if ((iVar4 == 0) || (local_30[0] != (AudioEng_tDef *)0x0)) goto LAB_8007c190;
        ed = local_30;
      }
      else {
        ed = &local_34;
      }
      AudioEng_LoadDef__FPcT0illPP13AudioEng_tDef(acStack128,__format,local_40,local_3c,local_38,ed)
      ;
    }
    else {
      pdata = (char *)reservememadr(__format,local_38,0x10);
      if (pdata != (char *)0x0) {
        bVar1 = true;
        FILE_readsync(local_40,local_3c,pdata,local_38,100);
        iVar18 = AudioCmn_AddBank__FPciT0i(__format,local_38,pdata,player);
        puVar3[0x58] = *(undefined *)(&gSndBnk + player * 3);
      }
    }
LAB_8007c190:
    iVar15 = iVar15 + 1;
  }
  FILE_closesync(local_40,100);
  purgememadr(iVar14);
LAB_8007c1ac:
  if (!bVar1) {
    return iVar18;
  }
  if (local_30[0] == (AudioEng_tDef *)0x0) {
    return iVar18;
  }
  iVar14 = 0;
  if (local_34 == (AudioEng_tDef *)0x0) {
    return iVar18;
  }
  do {
    if (1 < iVar14) {
      __dest = (void *)reservememadr("Engine Tables",iVar17,0);
      *(void **)(puVar3 + 0x36c) = __dest;
      iVar17 = 0;
      while (iVar17 < 2) {
        iVar14 = 0;
        pAVar11 = local_30[0];
        if (iVar17 != 0) {
          pAVar11 = local_34;
        }
        iVar15 = 0;
        while (iVar14 < 8) {
          psVar5 = (short *)(puVar3 + iVar15 + 0x11c);
          if (iVar17 != 0) {
            psVar5 = psVar5 + 0x30;
          }
          iVar4 = (int)*psVar5;
          pvVar16 = __dest;
          if ((int)psVar5[1] != iVar4) {
            __n = (int)psVar5[1] - iVar4;
            *(void **)(psVar5 + 2) = __dest;
            pvVar16 = (void *)((int)__dest + __n);
            memcpy(__dest,pAVar11->pvoltable[0]->xlate + iVar4,__n);
          }
          pAVar11 = (AudioEng_tDef *)&pAVar11->ver;
          iVar15 = iVar15 + 0xc;
          iVar14 = iVar14 + 1;
          __dest = pvVar16;
        }
        iVar17 = iVar17 + 1;
      }
      purgememadr(local_34);
      purgememadr(local_30[0]);
      return iVar18;
    }
    pAVar11 = local_30[0];
    if (iVar14 != 0) {
      pAVar11 = local_34;
    }
    iVar15 = 0;
    if (pAVar11->resolved == '\0') {
      iVar13 = 0;
      iVar12 = 0x148;
      iVar4 = 0x128;
      pAVar10 = pAVar11;
      while (iVar8 = (int)&pAVar11->id + iVar15, iVar15 < 8) {
        if (-1 < *(char *)(iVar8 + 0x20)) {
          psVar5 = (short *)(puVar3 + iVar13 + 0x11c);
          pAVar10->pvoltable[0] =
               (AudioEng_tTable *)((int)&pAVar11->id + (int)pAVar10->pvoltable[0]->xlate + iVar4);
          pAVar10->pbendtable[0] =
               (AudioEng_tTable *)((int)&pAVar11->id + (int)pAVar10->pbendtable[0]->xlate + iVar12);
          if (iVar14 != 0) {
            psVar5 = psVar5 + 0x30;
          }
          *(undefined *)(psVar5 + 4) = *(undefined *)(iVar8 + 0x20);
          iVar8 = 0;
          if (pAVar10->pvoltable[0]->xlate[0] == '\0') {
            iVar2 = 1;
            do {
              iVar8 = iVar2;
              bVar1 = iVar8 < 0x200;
              if (!bVar1) goto LAB_8007c2c4;
              iVar2 = iVar8 + 1;
            } while (pAVar10->pvoltable[0]->xlate[iVar8] == '\0');
          }
          bVar1 = iVar8 < 0x200;
LAB_8007c2c4:
          sVar6 = (short)iVar8;
          *psVar5 = sVar6;
          if (bVar1) {
            do {
              sVar6 = (short)iVar8;
              if (pAVar10->pvoltable[0]->xlate[iVar8] == '\0') break;
              iVar8 = iVar8 + 1;
              sVar6 = (short)iVar8;
            } while (iVar8 < 0x200);
          }
          psVar5[1] = sVar6;
          iVar17 = iVar17 + ((int)sVar6 - (int)*psVar5);
        }
        pAVar11->resolved = '\x01';
        pAVar10 = (AudioEng_tDef *)&pAVar10->ver;
        iVar13 = iVar13 + 0xc;
        iVar12 = iVar12 + 4;
        iVar4 = iVar4 + 4;
        iVar15 = iVar15 + 1;
      }
    }
    iVar14 = iVar14 + 1;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioEng_StartServer__Fv()
 // line 660, offset 0x8007c434
	/* begin block 1 */
		// Start line: 661
		// Start offset: 0x8007C434
	/* end block 1 */
	// End offset: 0x8007C434
	// End Line: 661

void AudioEng_StartServer__Fv(void)
{
  iSNDserveradd100hzclient(AudioEng_Update__Fv);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioEng_StopServer__Fv()
 // line 667, offset 0x8007c458
	/* begin block 1 */
		// Start line: 668
		// Start offset: 0x8007C458
	/* end block 1 */
	// End offset: 0x8007C458
	// End Line: 668

void AudioEng_StopServer__Fv(void)
{
  iSNDserverremove100hzclient(AudioEng_Update__Fv);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioEng_Pause__Fv()
 // line 674, offset 0x8007c47c
	/* begin block 1 */
		// Start line: 675
		// Start offset: 0x8007C47C

		/* begin block 1.1 */
			// Start line: 676
			// Start offset: 0x8007C47C
			// Variables:
		// 		int player; // $a2

			/* begin block 1.1.1 */
				// Start line: 676
				// Start offset: 0x8007C490
				// Variables:
			// 		struct AudioEng_t *g; // $a0
			// 		struct AudioEng_tState *s; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8007C4D4
			// End Line: 686
		/* end block 1.1 */
		// End offset: 0x8007C524
		// End Line: 697
	/* end block 1 */
	// End offset: 0x8007C524
	// End Line: 697

void AudioEng_Pause__Fv(void)
{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = &_AudioEng_g;
  while (((iVar4 < 2 && (iVar2 = *piVar3, iVar2 != 0)) &&
         ((*(char *)(iVar2 + 0x11b) != '\x0f' || ((*(char *)(iVar2 + 0x11a) + 1U & 1) == 0))))) {
    piVar3 = piVar3 + 1;
    puVar1 = (undefined2 *)(iVar2 + (uint)*(byte *)(iVar2 + 0x11a) * 0xc + 0x5a);
    *puVar1 = 0;
    puVar1[4] = 0;
    puVar1[1] = 0x1000;
    *(undefined *)((int)puVar1 + 0xb) = 0;
    *(undefined *)(puVar1 + 5) = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    iVar4 = iVar4 + 1;
    *(byte *)(iVar2 + 0x11a) = *(char *)(iVar2 + 0x11a) + 1U & 0xf;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioEng_Resume__Fv()
 // line 702, offset 0x8007c52c
	/* begin block 1 */
		// Start line: 703
		// Start offset: 0x8007C52C
	/* end block 1 */
	// End offset: 0x8007C52C
	// End Line: 703

void AudioEng_Resume__Fv(void)
{
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioEng_CleanUp__Fv()
 // line 708, offset 0x8007c534
	/* begin block 1 */
		// Start line: 709
		// Start offset: 0x8007C534

		/* begin block 1.1 */
			// Start line: 709
			// Start offset: 0x8007C534

			/* begin block 1.1.1 */
				// Start line: 710
				// Start offset: 0x8007C564
				// Variables:
			// 		struct AudioEng_t *g; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 717
					// Start offset: 0x8007C584
					// Variables:
				// 		int i; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x8007C5D0
				// End Line: 727
			/* end block 1.1.1 */
			// End offset: 0x8007C5D0
			// End Line: 728
		/* end block 1.1 */
		// End offset: 0x8007C5F0
		// End Line: 731
	/* end block 1 */
	// End offset: 0x8007C5F0
	// End Line: 731

void AudioEng_CleanUp__Fv(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = &_AudioEng_g;
  while( true ) {
    if (-0x7fec38c5 < (int)piVar4) {
      return;
    }
    iVar3 = *piVar4;
    iVar2 = 0;
    iVar1 = iVar3;
    if (iVar3 == 0) break;
    do {
      if (*(int *)(iVar1 + 0x1e4) != -1) {
        SNDstop();
        if (*(int *)(iVar1 + 0x2a4) != -1) {
          SNDstop();
        }
        *(undefined4 *)(iVar1 + 0x1e4) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x2a4) = 0xffffffff;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < 0x10);
    purgememadr(*(undefined4 *)(iVar3 + 0x36c));
    purgememadr(iVar3);
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  return;


}





