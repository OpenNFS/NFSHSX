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
  uint uVar1;
  char cVar3;
  int iVar2;
  byte bVar4;
  undefined *puVar5;
  ushort uVar6;
  AudioEng_tState *pAVar7;
  AudioEng_t *pAVar8;
  
  if ((uint)player < 2) {
    pAVar8 = (&__AudioEng_g_2__)[player];
    if ((pAVar8 != (AudioEng_t *)0x0) &&
       ((pAVar8->plypos != '\x0f' || ((pAVar8->setpos + 1U & 1) == 0)))) {
      pAVar7 = pAVar8->queue + (uint)(byte)pAVar8->setpos;
      iVar2 = (int)((uint)(pAVar8->adjust).timbreScale * esp) >> 0xe;
      uVar6 = 0x1ff;
      if (iVar2 < 0x200) {
        uVar6 = (ushort)iVar2;
      }
      pAVar7->esp = uVar6;
      if ((&__Cars_gList_9__)[player]->carInfo->carType == 0x1c) {
        puVar5 = (undefined *)((esp >> 2) + 0xc000);
      }
      else {
        puVar5 = &DAT_00003333 + esp;
      }
      uVar1 = fixedmult((int)puVar5,dop);
      pAVar7->dop = (ushort)((int)((uint)(pAVar8->adjust).pitchScale * uVar1) >> 10);
      iVar2 = gas + (gas >> 5) + (gas >> 6);
      if (iVar2 < 0x81) {
        pAVar7->gas = (uchar)iVar2;
      }
      else {
        pAVar7->gas = -0x80;
      }
      if (cam == 0) {
        pAVar7->exh = (pAVar8->adjust).inCarExhaust;
        if (GameSetup_gData.commMode == 1) {
          pAVar7->sep = 0;
          pAVar7->azi = (ushort)azi;
        }
        else {
          pAVar7->azi = 0;
          pAVar7->sep = 0x3fff;
        }
        bVar4 = (pAVar8->adjust).inCarBoost;
      }
      else {
        pAVar7->exh = (pAVar8->adjust).outCarExhaust;
        if (dir < 0) {
          bVar4 = pAVar7->exh;
          iVar2 = dir * (uint)(pAVar8->adjust).fwdEngBoost * (uint)bVar4;
        }
        else {
          bVar4 = pAVar7->exh;
          iVar2 = dir * (uint)(pAVar8->adjust).rwdExhBoost * (0x80 - (uint)bVar4);
        }
        iVar2 = iVar2 >> 7;
        cVar3 = (char)((uint)iVar2 >> 0x10);
        if (iVar2 < 0) {
          cVar3 = (char)((uint)(iVar2 + 0xffff) >> 0x10);
        }
        pAVar7->exh = bVar4 + cVar3;
        pAVar7->azi = (ushort)azi;
        pAVar7->sep = 0;
        bVar4 = (pAVar8->adjust).outCarBoost;
      }
      iVar2 = (int)(vol * (uint)bVar4) >> 6;
      uVar6 = 0x7ff;
      if (iVar2 < 0x800) {
        uVar6 = (ushort)iVar2;
      }
      pAVar7->vol = uVar6;
      pAVar8->setpos = pAVar8->setpos + 1U & 0xf;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioEng_Update__Fv(void)

{
  bool bVar1;
  uchar *puVar2;
  uchar *puVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  AudioEng_t *pAVar9;
  AudioEng_t *pAVar10;
  AudioEng_tState *pAVar11;
  AudioEng_t *pAVar12;
  ushort uVar13;
  ushort uVar14;
  AudioEng_t *pAVar15;
  int iVar16;
  int local_48;
  char local_44;
  undefined local_40;
  undefined local_3d;
  undefined2 local_3c;
  ushort local_38;
  undefined2 local_36;
  int local_30;
  
  local_30 = 0;
  do {
    if ((1 < local_30) || (pAVar12 = (&__AudioEng_g_2__)[local_30], pAVar12 == (AudioEng_t *)0x0)) {
      return;
    }
    pAVar11 = pAVar12->queue + (uint)(byte)pAVar12->plypos;
    puVar2 = gettick();
    if (pAVar12->plypos != pAVar12->setpos) {
      puVar3 = gettick();
      if (pAVar12->tick < (int)puVar3) {
        *(uchar **)&pAVar12->tick = puVar2 + 2;
        iVar16 = 0;
        pAVar9 = pAVar12;
        pAVar10 = pAVar12;
        while (iVar16 < 0x10) {
          if (-1 < pAVar9->chan[0].patchnum) {
            uVar6 = (uint)pAVar11->esp;
            iVar7 = (int)pAVar9->chan[0].min;
            if (((int)uVar6 < iVar7) || ((int)pAVar9->chan[0].max <= (int)uVar6)) {
              iVar7 = 0;
            }
            else {
              iVar7 = (int)pAVar9->chan[0].xlate[uVar6 - iVar7];
            }
            if (iVar7 != 0) {
              if (iVar16 < 8) {
                uVar6 = 0x80 - (uint)pAVar11->gas;
              }
              else {
                uVar6 = (uint)pAVar11->gas;
              }
              if (pAVar9->chan[0].patchnum < '@') {
                uVar4 = (uint)pAVar11->exh;
code_r0x8007b9f4:
                uVar4 = (uint)(byte)(&Xfade)[uVar4];
              }
              else {
                if (pAVar11->sep == 0) {
                  uVar4 = 0x80 - (uint)pAVar11->exh;
                  goto code_r0x8007b9f4;
                }
                uVar4 = (int)((uint)(byte)(&CHAR___8010e70c)[-(uint)pAVar11->exh] * 0x2f) >> 6;
              }
              iVar7 = iVar7 * (uint)(byte)(&Xfade)[uVar6] * uVar4;
            }
            uVar6 = iVar7 * (uint)pAVar11->vol >> 0x15;
            if (0x7f < uVar6) {
              uVar6 = 0x7f;
            }
            pAVar10->vol[0] = uVar6;
            pAVar12->azi = (uint)pAVar11->azi;
            pAVar12->sep = (uint)pAVar11->sep;
            pAVar12->dop = (uint)pAVar11->dop;
          }
          pAVar10 = (AudioEng_t *)&(pAVar10->adjust).rwdExhBoost;
          pAVar9 = (AudioEng_t *)pAVar9->vol;
          iVar16 = iVar16 + 1;
        }
        pAVar12->plypos = pAVar12->plypos + 1U & 0xf;
      }
    }
    iVar16 = 0;
    pAVar9 = pAVar12;
    pAVar10 = pAVar12;
    pAVar15 = pAVar12;
    while (iVar16 < 0x10) {
      cVar5 = pAVar9->chan[0].patchnum;
      if (-1 < cVar5) {
        if (pAVar15->vol[0] == 0) {
          uVar6 = pAVar9->left[0].handle;
          if (uVar6 != 0xffffffff) {
            SNDstop(uVar6);
            uVar6 = pAVar9->right[0].handle;
            if (uVar6 != 0xffffffff) {
              SNDstop(uVar6);
            }
            pAVar9->left[0].handle = -1;
            pAVar9->right[0].handle = -1;
          }
        }
        else {
          if (cVar5 < '@') {
            uVar14 = *(ushort *)&pAVar12->azi;
            uVar13 = uVar14;
          }
          else {
            uVar14 = *(short *)&pAVar12->azi + *(short *)&pAVar12->sep;
            uVar13 = *(short *)&pAVar12->azi - *(short *)&pAVar12->sep;
          }
          SNDplaysetdef(&local_48);
          local_44 = pAVar12->bhandle;
          local_48 = (int)pAVar9->chan[0].patchnum;
          local_40 = 0;
          local_3c = *(undefined2 *)&pAVar12->dop;
          local_3d = 1;
          local_36 = 0;
          if (pAVar9->left[0].handle == -1) {
            local_38 = uVar13;
            uVar6 = SNDplay(&local_48);
            pAVar9->left[0].handle = uVar6;
            pAVar10->delay[0] = '\x02';
            pAVar9->left[0].vol = '\0';
            pAVar9->left[0].azim = uVar13;
            pAVar9->left[0].pitch = *(ushort *)&pAVar12->dop;
          }
          else {
            if (((pAVar12->sep == 0) || (pAVar9->chan[0].patchnum < '@')) ||
               (pAVar9->right[0].handle != -1)) {
              iVar7 = (int)pAVar9->left[0].vol;
              iVar8 = pAVar15->vol[0];
              if (iVar7 != iVar8) {
                if (iVar8 < iVar7) {
                  cVar5 = (char)(iVar7 + -2);
                  bVar1 = iVar7 + -2 < iVar8;
                }
                else {
                  cVar5 = (char)(iVar7 + 2);
                  bVar1 = iVar8 < iVar7 + 2;
                }
                if (bVar1) {
                  cVar5 = (char)iVar8;
                }
                pAVar9->left[0].vol = cVar5;
                SNDvol(pAVar9->left[0].handle,(int)pAVar9->left[0].vol);
              }
            }
            if ((uint)pAVar9->left[0].azim != (uint)uVar13) {
              SND3dpos(pAVar9->left[0].handle,(uint)uVar13);
              pAVar9->left[0].azim = uVar13;
            }
            if ((uint)pAVar9->left[0].pitch != pAVar12->dop) {
              SNDpitchmult(pAVar9->left[0].handle,pAVar12->dop);
              pAVar9->left[0].pitch = *(ushort *)&pAVar12->dop;
            }
            if ((pAVar9->chan[0].patchnum < '@') || (pAVar12->sep == 0)) {
              uVar6 = pAVar9->right[0].handle;
              if (uVar6 != 0xffffffff) {
                SNDstop(uVar6);
                pAVar9->right[0].handle = -1;
                pAVar10->delay[0] = '\x02';
              }
            }
            else {
              if (pAVar9->right[0].handle == -1) {
                cVar5 = pAVar10->delay[0] + -1;
                pAVar10->delay[0] = cVar5;
                if (cVar5 == -1) {
                  local_38 = uVar14;
                  uVar6 = SNDplay(&local_48);
                  pAVar9->right[0].handle = uVar6;
                  pAVar9->right[0].vol = '\0';
                  pAVar9->right[0].azim = uVar14;
LAB_8007bd18:
                  pAVar9->right[0].pitch = *(ushort *)&pAVar12->dop;
                }
              }
              else {
                iVar7 = (int)pAVar9->right[0].vol;
                iVar8 = pAVar15->vol[0];
                if (iVar7 != iVar8) {
                  if (iVar8 < iVar7) {
                    cVar5 = (char)(iVar7 + -2);
                    bVar1 = iVar7 + -2 < iVar8;
                  }
                  else {
                    cVar5 = (char)(iVar7 + 2);
                    bVar1 = iVar8 < iVar7 + 2;
                  }
                  if (bVar1) {
                    cVar5 = (char)iVar8;
                  }
                  pAVar9->right[0].vol = cVar5;
                  SNDvol(pAVar9->right[0].handle,(int)pAVar9->right[0].vol);
                }
                if ((uint)pAVar9->right[0].azim != (uint)uVar14) {
                  SND3dpos(pAVar9->right[0].handle,(uint)uVar14);
                  pAVar9->right[0].azim = uVar14;
                }
                if ((uint)pAVar9->right[0].pitch != pAVar12->dop) {
                  SNDpitchmult(pAVar9->right[0].handle,pAVar12->dop);
                  goto LAB_8007bd18;
                }
              }
            }
          }
        }
      }
      pAVar10 = (AudioEng_t *)&(pAVar10->adjust).inCarExhaust;
      pAVar9 = (AudioEng_t *)pAVar9->vol;
      pAVar15 = (AudioEng_t *)&(pAVar15->adjust).rwdExhBoost;
      iVar16 = iVar16 + 1;
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

void AudioEng_LoadDef__FPcT0illPP13AudioEng_tDef
               (char *filename,char *name,int handle,long offset,long size,AudioEng_tDef **ed)

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
  AudioEng_t *pAVar3;
  uint uVar4;
  byte *name;
  short *__dest;
  AudioEng_tDef **ed;
  short *psVar5;
  short sVar6;
  AudioEng_t *pAVar7;
  int iVar8;
  AudioEng_t *pAVar9;
  char *__format;
  AudioEng_tDef *pAVar10;
  size_t __n;
  AudioEng_tDef *pAVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short *psVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  char acStack128 [64];
  uint local_40;
  uint local_3c;
  uint local_38;
  AudioEng_tDef *local_34;
  AudioEng_tDef *local_30 [2];
  
  if (1 < (uint)player) {
    return 0;
  }
  iVar19 = 0;
  if ((&__AudioEng_g_2__)[player] != (AudioEng_t *)0x0) {
    return 0;
  }
  iVar20 = 0;
  pAVar3 = (AudioEng_t *)reservememadr(s_Engine_Audio_80055800,0x370,0);
  iVar15 = 0;
  (&__AudioEng_g_2__)[player] = pAVar3;
  pAVar3->tables = (char *)0x0;
  pAVar3->tick = 0;
  pAVar3->azi = 0;
  pAVar3->sep = 0;
  pAVar3->dop = 0x1000;
  pAVar7 = pAVar3;
  pAVar9 = pAVar3;
  do {
    pAVar9->vol[0] = 0;
    pAVar7->left[0].handle = -1;
    pAVar7->right[0].handle = -1;
    pAVar7->chan[0].patchnum = -1;
    pAVar7->chan[0].min = 0x200;
    pAVar7->chan[0].max = 0x200;
    pAVar7->chan[0].xlate = (char *)0x0;
    pAVar7 = (AudioEng_t *)pAVar7->vol;
    iVar15 = iVar15 + 1;
    pAVar9 = (AudioEng_t *)&(pAVar9->adjust).rwdExhBoost;
  } while (iVar15 < 0x10);
  local_30[0] = (AudioEng_tDef *)0x0;
  local_34 = (AudioEng_tDef *)0x0;
  (pAVar3->adjust).inCarBoost = '2';
  (pAVar3->adjust).inCarExhaust = '\x1f';
  (pAVar3->adjust).outCarBoost = -0x5a;
  (pAVar3->adjust).outCarExhaust = '+';
  (pAVar3->adjust).fwdEngBoost = '@';
  (pAVar3->adjust).rwdExhBoost = 'y';
  (pAVar3->adjust).pitchScale = 'P';
  (pAVar3->adjust).timbreScale = 'h';
  pAVar3->setpos = '\0';
  pAVar3->plypos = '\0';
  bVar1 = false;
  if (GameSetup_gData.commMode == 1) {
    __format = s__s_sens_viv_80055810;
  }
  else {
    __format = s__s_seng_viv_8005581c;
  }
  sprintf(acStack128,__format,PTR_801164d8,carname);
  pbVar18 = (byte *)loadbigfileheader(acStack128,0x10);
  if (pbVar18 == (byte *)0x0) {
    if (GameSetup_gData.commMode == 1) {
      __format = s__sp993ens_viv_80055828;
    }
    else {
      __format = s__sp993eng_viv_80055838;
    }
    sprintf(acStack128,__format,PTR_801164d8);
    pbVar18 = (byte *)loadbigfileheader(acStack128,0x10);
    if (pbVar18 == (byte *)0x0) goto LAB_8007c1ac;
  }
  FILE_opensync(acStack128,1,100,&local_40);
  iVar15 = 0;
  while( true ) {
    uVar4 = bigcount(pbVar18);
    if ((int)uVar4 <= iVar15) break;
    name = (byte *)locatebigentry(pbVar18,(byte *)0x0,iVar15,&local_3c,&local_38);
    uVar4 = wildcard(name,(byte *)s___bnk_8013c73c);
    if ((uVar4 == 0) || (bVar1)) {
      uVar4 = wildcard(name,(byte *)s___ltb_8013c744);
      if ((uVar4 == 0) || (local_34 != (AudioEng_tDef *)0x0)) {
        uVar4 = wildcard(name,(byte *)s___ctb_8013c74c);
        if ((uVar4 == 0) || (local_30[0] != (AudioEng_tDef *)0x0)) goto LAB_8007c190;
        ed = local_30;
      }
      else {
        ed = &local_34;
      }
      AudioEng_LoadDef__FPcT0illPP13AudioEng_tDef
                (acStack128,(char *)name,local_40,local_3c,local_38,ed);
    }
    else {
      __dest = reservememadr((char *)name,local_38,0x10);
      if (__dest != (short *)0x0) {
        bVar1 = true;
        FILE_readsync(local_40,local_3c,__dest,local_38,100);
        iVar20 = AudioCmn_AddBank__FPciT0i((char *)name,local_38,(char *)__dest,player);
        pAVar3->bhandle = *(char *)&(&gSndBnk)[player].bnkID;
      }
    }
LAB_8007c190:
    iVar15 = iVar15 + 1;
  }
  FILE_closesync(local_40,100);
  purgememadr((int)pbVar18);
LAB_8007c1ac:
  if (!bVar1) {
    return iVar20;
  }
  if (local_30[0] == (AudioEng_tDef *)0x0) {
    return iVar20;
  }
  iVar15 = 0;
  if (local_34 == (AudioEng_tDef *)0x0) {
    return iVar20;
  }
  do {
    if (1 < iVar15) {
      __dest = reservememadr(s_Engine_Tables_80055848,iVar19,0);
      *(short **)&pAVar3->tables = __dest;
      iVar19 = 0;
      while (iVar19 < 2) {
        iVar15 = 0;
        pAVar11 = local_30[0];
        if (iVar19 != 0) {
          pAVar11 = local_34;
        }
        iVar16 = 0;
        while (iVar15 < 8) {
          psVar5 = (short *)((int)&pAVar3->chan[0].min + iVar16);
          if (iVar19 != 0) {
            psVar5 = psVar5 + 0x30;
          }
          iVar12 = (int)*psVar5;
          psVar17 = __dest;
          if ((int)psVar5[1] != iVar12) {
            __n = (int)psVar5[1] - iVar12;
            *(short **)(psVar5 + 2) = __dest;
            psVar17 = (short *)((int)__dest + __n);
            memcpy(__dest,pAVar11->pvoltable[0] + iVar12,__n);
          }
          pAVar11 = (AudioEng_tDef *)&pAVar11->ver;
          iVar16 = iVar16 + 0xc;
          iVar15 = iVar15 + 1;
          __dest = psVar17;
        }
        iVar19 = iVar19 + 1;
      }
      purgememadr((int)local_34);
      purgememadr((int)local_30[0]);
      return iVar20;
    }
    pAVar11 = local_30[0];
    if (iVar15 != 0) {
      pAVar11 = local_34;
    }
    iVar16 = 0;
    if (pAVar11->resolved == '\0') {
      iVar14 = 0;
      iVar13 = 0x148;
      iVar12 = 0x128;
      pAVar10 = pAVar11;
      while (iVar8 = (int)&pAVar11->id + iVar16, iVar16 < 8) {
        if (-1 < *(char *)(iVar8 + 0x20)) {
          __dest = (short *)((int)&pAVar3->chan[0].min + iVar14);
          pAVar10->pvoltable[0] = pAVar10->pvoltable[0] + (int)&pAVar11->id + iVar12;
          pAVar10->pbendtable[0] = pAVar10->pbendtable[0] + (int)&pAVar11->id + iVar13;
          if (iVar15 != 0) {
            __dest = __dest + 0x30;
          }
          *(undefined *)(__dest + 4) = *(undefined *)(iVar8 + 0x20);
          iVar8 = 0;
          if (*pAVar10->pvoltable[0] == (_func_26)0x0) {
            iVar2 = 1;
            do {
              iVar8 = iVar2;
              bVar1 = iVar8 < 0x200;
              if (!bVar1) goto LAB_8007c2c4;
              iVar2 = iVar8 + 1;
            } while (pAVar10->pvoltable[0][iVar8] == (_func_26)0x0);
          }
          bVar1 = iVar8 < 0x200;
LAB_8007c2c4:
          sVar6 = (short)iVar8;
          *__dest = sVar6;
          if (bVar1) {
            do {
              sVar6 = (short)iVar8;
              if (pAVar10->pvoltable[0][iVar8] == (_func_26)0x0) break;
              iVar8 = iVar8 + 1;
              sVar6 = (short)iVar8;
            } while (iVar8 < 0x200);
          }
          __dest[1] = sVar6;
          iVar19 = iVar19 + ((int)sVar6 - (int)*__dest);
        }
        pAVar11->resolved = '\x01';
        pAVar10 = (AudioEng_tDef *)&pAVar10->ver;
        iVar14 = iVar14 + 0xc;
        iVar13 = iVar13 + 4;
        iVar12 = iVar12 + 4;
        iVar16 = iVar16 + 1;
      }
    }
    iVar15 = iVar15 + 1;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioEng_StopServer__Fv(void)

{
  iSNDserverremove100hzclient((int)AudioEng_Update__Fv);
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioEng_Pause__Fv(void)

{
  AudioEng_tState *pAVar1;
  AudioEng_t *pAVar2;
  AudioEng_t **ppAVar3;
  int iVar4;
  
  iVar4 = 0;
  ppAVar3 = &__AudioEng_g_2__;
  while (((iVar4 < 2 && (pAVar2 = *ppAVar3, pAVar2 != (AudioEng_t *)0x0)) &&
         ((pAVar2->plypos != '\x0f' || ((pAVar2->setpos + 1U & 1) == 0))))) {
    ppAVar3 = ppAVar3 + 1;
    pAVar1 = pAVar2->queue + (uint)(byte)pAVar2->setpos;
    pAVar1->vol = 0;
    pAVar1->esp = 0;
    pAVar1->dop = 0x1000;
    pAVar1->gas = '\0';
    pAVar1->exh = '\0';
    pAVar1->sep = 0;
    pAVar1->azi = 0;
    iVar4 = iVar4 + 1;
    pAVar2->setpos = pAVar2->setpos + 1U & 0xf;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioEng_CleanUp__Fv(void)

{
  uint uVar1;
  AudioEng_t *pAVar2;
  int iVar3;
  AudioEng_t *pAVar4;
  AudioEng_t **ppAVar5;
  
  ppAVar5 = &__AudioEng_g_2__;
  while( true ) {
    if (-0x7fec38c5 < (int)ppAVar5) {
      return;
    }
    pAVar4 = *ppAVar5;
    iVar3 = 0;
    pAVar2 = pAVar4;
    if (pAVar4 == (AudioEng_t *)0x0) break;
    do {
      uVar1 = pAVar2->left[0].handle;
      if (uVar1 != 0xffffffff) {
        SNDstop(uVar1);
        uVar1 = pAVar2->right[0].handle;
        if (uVar1 != 0xffffffff) {
          SNDstop(uVar1);
        }
        pAVar2->left[0].handle = -1;
        pAVar2->right[0].handle = -1;
      }
      iVar3 = iVar3 + 1;
      pAVar2 = (AudioEng_t *)pAVar2->vol;
    } while (iVar3 < 0x10);
    purgememadr((int)pAVar4->tables);
    purgememadr((int)pAVar4);
    *ppAVar5 = (AudioEng_t *)0x0;
    ppAVar5 = ppAVar5 + 1;
  }
  return;
}




