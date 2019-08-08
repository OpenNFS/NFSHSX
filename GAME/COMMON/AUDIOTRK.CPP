#include "NFS4.H"
#include "AUDIOTRK.H"

// decompiled code
// original method signature: 
// void /*$ra*/ AudioTrk_Reset__Fv()
 // line 59, offset 0x8007c614
	/* begin block 1 */
		// Start line: 60
		// Start offset: 0x8007C614

		/* begin block 1.1 */
			// Start line: 60
			// Start offset: 0x8007C614

			/* begin block 1.1.1 */
				// Start line: 62
				// Start offset: 0x8007C630

				/* begin block 1.1.1.1 */
					// Start line: 63
					// Start offset: 0x8007C630
					// Variables:
				// 		int i; // $s1
				/* end block 1.1.1.1 */
				// End offset: 0x8007C68C
				// End Line: 72
			/* end block 1.1.1 */
			// End offset: 0x8007C68C
			// End Line: 72
		/* end block 1.1 */
		// End offset: 0x8007C68C
		// End Line: 72

		/* begin block 1.2 */
			// Start line: 74
			// Start offset: 0x8007C68C

			/* begin block 1.2.1 */
				// Start line: 74
				// Start offset: 0x8007C6A0

				/* begin block 1.2.1.1 */
					// Start line: 74
					// Start offset: 0x8007C6A0

					/* begin block 1.2.1.1.1 */
						// Start line: 74
						// Start offset: 0x8007C6A0
					/* end block 1.2.1.1.1 */
					// End offset: 0x8007C6A0
					// End Line: 74
				/* end block 1.2.1.1 */
				// End offset: 0x8007C6A0
				// End Line: 74

				/* begin block 1.2.1.2 */
					// Start line: 74
					// Start offset: 0x8007C6A0
					// Variables:
				// 		int i; // $a0
				/* end block 1.2.1.2 */
				// End offset: 0x8007C6DC
				// End Line: 82
			/* end block 1.2.1 */
			// End offset: 0x8007C6DC
			// End Line: 82
		/* end block 1.2 */
		// End offset: 0x8007C6DC
		// End Line: 82
	/* end block 1 */
	// End offset: 0x8007C6DC
	// End Line: 82

void AudioTrk_Reset__Fv(void)
{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  if (_AudioTrk_g != 0) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 * 0x10;
      if (*(int *)(_AudioTrk_g + iVar3 + 4) != -1) {
        freeVoiceChannel__Fi(iVar4 + 0x37);
        *(undefined4 *)(_AudioTrk_g + iVar3 + 4) = 0xffffffff;
      }
      iVar4 = iVar4 + 1;
      puVar1 = (undefined4 *)(_AudioTrk_g + iVar3);
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 3) = 0xffff;
    } while (iVar4 < 0x10);
  }
  if ((false) && (iVar4 = 0, 0 < iRam00000004)) {
    puVar2 = (undefined *)0x25;
    do {
      *puVar2 = 0xff;
      *(undefined2 *)(puVar2 + -9) = 0;
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 0x18;
    } while (iVar4 < iRam00000004);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioTrk_StartUp__Fv()
 // line 88, offset 0x8007c6f4
	/* begin block 1 */
		// Start line: 89
		// Start offset: 0x8007C6F4

		/* begin block 1.1 */
			// Start line: 89
			// Start offset: 0x8007C6F4

			/* begin block 1.1.1 */
				// Start line: 91
				// Start offset: 0x8007C704

				/* begin block 1.1.1.1 */
					// Start line: 92
					// Start offset: 0x8007C704
					// Variables:
				// 		int i; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x8007C738
				// End Line: 94
			/* end block 1.1.1 */
			// End offset: 0x8007C738
			// End Line: 94
		/* end block 1.1 */
		// End offset: 0x8007C738
		// End Line: 94
	/* end block 1 */
	// End offset: 0x8007C738
	// End Line: 96

void AudioTrk_StartUp__Fv(void)
{
  int iVar1;
  int iVar2;
  
  if (_AudioTrk_g == 0) {
    _AudioTrk_g = reservememadr("trck globals",0x100,0);
    iVar2 = 0xf;
    iVar1 = _AudioTrk_g + 0xf0;
    do {
      *(undefined4 *)(iVar1 + 4) = 0xffffffff;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -0x10;
    } while (-1 < iVar2);
  }
  AudioTrk_Reset__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioTrk_AddCustomObject__FP9AudioElemiP8coorddefiP8Car_tObji(struct AudioElem *se /*$s4*/, int tck /*$s0*/, struct coorddef *vel /*stack 8*/, int fade /*stack 12*/, struct Car_tObj *car /*stack 16*/, int trkazi /*stack 20*/)
 // line 135, offset 0x8007c750
	/* begin block 1 */
		// Start line: 136
		// Start offset: 0x8007C750
		// Variables:
	// 		int dst; // $s7
	// 		struct AudioTrk_tAmbientChannel *c; // $s2
	// 		int n; // $s6

		/* begin block 1.1 */
			// Start line: 140
			// Start offset: 0x8007C794

			/* begin block 1.1.1 */
				// Start line: 143
				// Start offset: 0x8007C7D8

				/* begin block 1.1.1.1 */
					// Start line: 144
					// Start offset: 0x8007C7D8

					/* begin block 1.1.1.1.1 */
						// Start line: 145
						// Start offset: 0x8007C7E8
						// Variables:
					// 		struct AudioTrk_tAmbientChannel *c; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007C810
					// End Line: 153
				/* end block 1.1.1.1 */
				// End offset: 0x8007C810
				// End Line: 153
			/* end block 1.1.1 */
			// End offset: 0x8007C828
			// End Line: 157
		/* end block 1.1 */
		// End offset: 0x8007C828
		// End Line: 157

		/* begin block 1.2 */
			// Start line: 160
			// Start offset: 0x8007C828

			/* begin block 1.2.1 */
				// Start line: 171
				// Start offset: 0x8007C84C

				/* begin block 1.2.1.1 */
					// Start line: 171
					// Start offset: 0x8007C84C

					/* begin block 1.2.1.1.1 */
						// Start line: 175
						// Start offset: 0x8007C864

						/* begin block 1.2.1.1.1.1 */
							// Start line: 175
							// Start offset: 0x8007C864
							// Variables:
						// 		int i; // $s1
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8007C8F0
						// End Line: 186
					/* end block 1.2.1.1.1 */
					// End offset: 0x8007C8F0
					// End Line: 186
				/* end block 1.2.1.1 */
				// End offset: 0x8007C8F0
				// End Line: 186
			/* end block 1.2.1 */
			// End offset: 0x8007C8F0
			// End Line: 186
		/* end block 1.2 */
		// End offset: 0x8007C8F0
		// End Line: 186

		/* begin block 1.3 */
			// Start line: 189
			// Start offset: 0x8007C8F0

			/* begin block 1.3.1 */
				// Start line: 190
				// Start offset: 0x8007C8F8
				// Variables:
			// 		int maxind; // $s5
			// 		int maxdst; // $s3

				/* begin block 1.3.1.1 */
					// Start line: 191
					// Start offset: 0x8007C8F8
					// Variables:
				// 		int i; // $s0

					/* begin block 1.3.1.1.1 */
						// Start line: 194
						// Start offset: 0x8007C904
						// Variables:
					// 		int chkdst; // $s1
					/* end block 1.3.1.1.1 */
					// End offset: 0x8007C95C
					// End Line: 201
				/* end block 1.3.1.1 */
				// End offset: 0x8007C964
				// End Line: 203
			/* end block 1.3.1 */
			// End offset: 0x8007C9D8
			// End Line: 211
		/* end block 1.3 */
		// End offset: 0x8007C9D8
		// End Line: 211

		/* begin block 1.4 */
			// Start line: 214
			// Start offset: 0x8007C9D8

			/* begin block 1.4.1 */
				// Start line: 215
				// Start offset: 0x8007C9E0
				// Variables:
			// 		unsigned int repeatnow; // $s1

				/* begin block 1.4.1.1 */
					// Start line: 245
					// Start offset: 0x8007CAAC

					/* begin block 1.4.1.1.1 */
						// Start line: 246
						// Start offset: 0x8007CABC
						// Variables:
					// 		unsigned short azimuth; // $s5
					// 		int dop; // $s3
					// 		char vol; // $s0

						/* begin block 1.4.1.1.1.1 */
							// Start line: 247
							// Start offset: 0x8007CABC

							/* begin block 1.4.1.1.1.1.1 */
								// Start line: 252
								// Start offset: 0x8007CAD8

								/* begin block 1.4.1.1.1.1.1.1 */
									// Start line: 253
									// Start offset: 0x8007CAD8

									/* begin block 1.4.1.1.1.1.1.1.1 */
										// Start line: 255
										// Start offset: 0x8007CAF8

										/* begin block 1.4.1.1.1.1.1.1.1.1 */
											// Start line: 255
											// Start offset: 0x8007CAF8

											/* begin block 1.4.1.1.1.1.1.1.1.1.1 */
												// Start line: 256
												// Start offset: 0x8007CB20
												// Variables:
											// 		struct BWorldSm_Pos slicePos; // stack offset -176
											/* end block 1.4.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x8007CB4C
											// End Line: 260
										/* end block 1.4.1.1.1.1.1.1.1.1 */
										// End offset: 0x8007CB4C
										// End Line: 260
									/* end block 1.4.1.1.1.1.1.1.1 */
									// End offset: 0x8007CB4C
									// End Line: 260
								/* end block 1.4.1.1.1.1.1.1 */
								// End offset: 0x8007CB4C
								// End Line: 260
							/* end block 1.4.1.1.1.1.1 */
							// End offset: 0x8007CB90
							// End Line: 265
						/* end block 1.4.1.1.1.1 */
						// End offset: 0x8007CB90
						// End Line: 265

						/* begin block 1.4.1.1.1.2 */
							// Start line: 269
							// Start offset: 0x8007CB90

							/* begin block 1.4.1.1.1.2.1 */
								// Start line: 270
								// Start offset: 0x8007CBA8

								/* begin block 1.4.1.1.1.2.1.1 */
									// Start line: 280
									// Start offset: 0x8007CBF0

									/* begin block 1.4.1.1.1.2.1.1.1 */
										// Start line: 281
										// Start offset: 0x8007CC10
										// Variables:
									// 		int rangesq; // $s0
									/* end block 1.4.1.1.1.2.1.1.1 */
									// End offset: 0x8007CC8C
									// End Line: 283

									/* begin block 1.4.1.1.1.2.1.1.2 */
										// Start line: 286
										// Start offset: 0x8007CC94

										/* begin block 1.4.1.1.1.2.1.1.2.1 */
											// Start line: 287
											// Start offset: 0x8007CC94

											/* begin block 1.4.1.1.1.2.1.1.2.1.1 */
												// Start line: 290
												// Start offset: 0x8007CCAC
												// Variables:
											// 		int range; // $s0
											// 		int rangesq; // $s0
											// 		int ambdist; // $a0
											/* end block 1.4.1.1.1.2.1.1.2.1.1 */
											// End offset: 0x8007CD2C
											// End Line: 294
										/* end block 1.4.1.1.1.2.1.1.2.1 */
										// End offset: 0x8007CD2C
										// End Line: 294
									/* end block 1.4.1.1.1.2.1.1.2 */
									// End offset: 0x8007CD2C
									// End Line: 294
								/* end block 1.4.1.1.1.2.1.1 */
								// End offset: 0x8007CD2C
								// End Line: 294
							/* end block 1.4.1.1.1.2.1 */
							// End offset: 0x8007CD2C
							// End Line: 294
						/* end block 1.4.1.1.1.2 */
						// End offset: 0x8007CD2C
						// End Line: 294
					/* end block 1.4.1.1.1 */
					// End offset: 0x8007CD94
					// End Line: 303
				/* end block 1.4.1.1 */
				// End offset: 0x8007CD94
				// End Line: 303
			/* end block 1.4.1 */
			// End offset: 0x8007CD94
			// End Line: 303
		/* end block 1.4 */
		// End offset: 0x8007CD94
		// End Line: 303
	/* end block 1 */
	// End offset: 0x8007CD94
	// End Line: 303

void AudioTrk_AddCustomObject__FP9AudioElemiP8coorddefiP8Car_tObji( (AudioElem *se,int tck,coorddef *vel,int fade,Car_tObj *car,int trkazi)
{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  AudioElem *pAVar8;
  AudioElem **ppAVar9;
  uint uVar10;
  ushort uVar11;
  int *piVar12;
  int iVar13;
  AudioElem **ppAVar14;
  int iVar15;
  int iDopplerIn;
  uint uVar16;
  BWorldSm_Pos local_b0;
  
  if (_AudioTrk_g != 0) {
    iVar3 = Math_Dist3D__FP8coorddefT0((coorddef *)se,(coorddef *)&AudioClc_gRenderView);
    if ((((int)se->range + 100) * 0x10000 <= iVar3) || (ppAVar14 = (AudioElem **)0x0, true)) {
      iVar3 = (int)se->chan;
      if (-1 < iVar3) {
        piVar12 = (int *)(_AudioTrk_g + iVar3 * 0x10);
        if (piVar12[1] != -1) {
          freeVoiceChannel__Fi(iVar3 + 0x37);
          piVar12[1] = -1;
        }
        *(undefined *)(*piVar12 + 0x15) = 0xff;
        *piVar12 = 0;
        *(undefined2 *)(piVar12 + 3) = 0xffff;
      }
    }
    else {
      iVar4 = (int)se->chan;
      if (iVar4 < 0) {
        iDopplerIn = 0;
        iVar4 = -1;
        if ((se->nextDelay != 0) && (iVar4 = -1, (uint)se->nextDelay != tck)) {
          return;
        }
        do {
          if (0xf < iDopplerIn) break;
          ppAVar9 = (AudioElem **)(_AudioTrk_g + iDopplerIn * 0x10);
          if (*ppAVar9 == (AudioElem *)0x0) {
            *ppAVar9 = se;
            ppAVar9[2] = (AudioElem *)0xffffffff;
            bVar1 = se->minRepeat;
            uVar11 = (ushort)bVar1;
            if (se->randomRepeat != '\0') {
              uVar7 = random();
              uVar10 = (uint)(byte)se->randomRepeat + 1;
              if (uVar10 == 0) {
                trap(0x1c00);
              }
              uVar11 = (ushort)bVar1 + (short)(uVar7 % uVar10);
            }
            *(ushort *)((int)ppAVar9 + 0xe) = uVar11;
            (*ppAVar9)->chan = (char)iDopplerIn;
            ppAVar14 = ppAVar9;
            iVar4 = iDopplerIn;
          }
          iDopplerIn = iDopplerIn + 1;
        } while (ppAVar14 == (AudioElem **)0x0);
      }
      else {
        ppAVar14 = (AudioElem **)(_AudioTrk_g + iVar4 * 0x10);
      }
      iDopplerIn = 0;
      if (ppAVar14 == (AudioElem **)0x0) {
        iVar15 = 0;
        iVar13 = 0;
        while ((true && (iVar13 < 0x10))) {
          iVar5 = Math_Dist3D__FP8coorddefT0
                            (*(coorddef **)(_AudioTrk_g + iVar13 * 0x10),
                             (coorddef *)&AudioClc_gRenderView);
          if (iRam00000004 != -1) {
            iVar6 = SNDover();
            if ((iVar6 != 0) && (iVar15 < iVar5)) {
              iVar15 = iVar5;
              iDopplerIn = iVar13;
            }
          }
          iVar13 = iVar13 + 1;
        }
        if (iVar3 < iVar15) {
          ppAVar14 = (AudioElem **)(_AudioTrk_g + iDopplerIn * 0x10);
          *ppAVar14 = se;
          ppAVar14[2] = (AudioElem *)0xffffffff;
          bVar1 = se->minRepeat;
          uVar11 = (ushort)bVar1;
          if (se->randomRepeat != '\0') {
            uVar7 = random();
            uVar10 = (uint)(byte)se->randomRepeat + 1;
            if (uVar10 == 0) {
              trap(0x1c00);
            }
            uVar11 = (ushort)bVar1 + (short)(uVar7 % uVar10);
          }
          *(ushort *)((int)ppAVar14 + 0xe) = uVar11;
          (*ppAVar14)->chan = (char)iDopplerIn;
          iVar4 = iDopplerIn;
        }
        if (ppAVar14 == (AudioElem **)0x0) {
          return;
        }
      }
      if ((int)*(short *)(ppAVar14 + 3) != (uint)(byte)se->patchID) {
        if (ppAVar14[1] != (AudioElem *)0xffffffff) {
          freeVoiceChannel__Fi(iVar4 + 0x37);
          ppAVar14[1] = (AudioElem *)0xffffffff;
        }
        *(ushort *)(ppAVar14 + 3) = (ushort)(byte)se->patchID;
      }
      bVar2 = false;
      if ((ppAVar14[1] != (AudioElem *)0xffffffff) && (iDopplerIn = SNDover(), iDopplerIn != 0)) {
        if (*(short *)((int)ppAVar14 + 0xe) == 0) {
          if ((se->type != '\x01') || ((int)se->range << 0x10 < iVar3)) {
            freeVoiceChannel__Fi(iVar4 + 0x37);
            ppAVar14[1] = (AudioElem *)0xffffffff;
            *(undefined2 *)(ppAVar14 + 3) = 0xffff;
            (*ppAVar14)->chan = -1;
            *ppAVar14 = (AudioElem *)0x0;
          }
        }
        else {
          bVar2 = true;
          ppAVar14[1] = (AudioElem *)0xffffffff;
          *(short *)((int)ppAVar14 + 0xe) = *(short *)((int)ppAVar14 + 0xe) + -1;
        }
      }
      if (*ppAVar14 != (AudioElem *)0x0) {
        iDopplerIn = 0x10000;
        uVar7 = 0;
        if ((se->type == '\x01') && (!bVar2)) {
          if ((ppAVar14[1] != (AudioElem *)0xffffffff) && (iVar15 = SNDover(), iVar15 != 0)) {
            return;
          }
          if ((iVar3 < (int)((uint)(byte)se->fadeIn << 0x10)) &&
             (ppAVar14[2] == (AudioElem *)0xffffffff)) {
            BWorldSm_SetSlice__FiP12BWorldSm_Pos((int)(car->N).simRoadInfo.slice,&local_b0);
            BWorldSm_FindClosestSlice__FP8coorddefP12BWorldSm_Pos((coorddef *)se,&local_b0);
            ppAVar14[2] = (AudioElem *)(int)local_b0.slice;
          }
          if (((AudioElem *)(int)(car->N).simRoadInfo.slice != ppAVar14[2]) ||
             ((int)((uint)(byte)se->fadeIn << 0x10) < iVar3)) {
            AudioCmn_GetAsyncSfx__Fiib(0,(int)*(short *)(ppAVar14 + 3),0);
            return;
          }
        }
        uVar10 = 0;
        if (iVar3 < (int)se->range << 0x10) {
          if ((se->type != '\x03') && (trkazi = 0, se->type != '\x02')) {
            trkazi = AudioClc_CalcAzimuth__FP17DRender_tCalcViewP8coorddef
                               ((DRender_tCalcView *)&AudioClc_gRenderView,(coorddef *)se);
            iDopplerIn = AudioClc_CalcDopplerShiftRatio__FP8coorddefT0((coorddef *)se,vel);
          }
          if (((uint)(byte)se->type - 4 < 0x20) || (se->type == 1)) {
            iVar15 = (int)se->range * (int)se->range;
            iVar3 = fixedmult(iVar3 >> 2,iVar3 >> 2);
            iVar3 = (iVar15 >> 4) * 0x10000 - iVar3;
            if (iVar15 == 0) {
              trap(0x1c00);
            }
            if ((iVar15 == -1) && (iVar3 == -0x80000000)) {
              trap(0x1800);
            }
            uVar16 = (iVar3 / iVar15) * fade * 0x7f;
            uVar7 = uVar16 >> 0x13;
            uVar10 = trkazi;
            if ((int)uVar16 < 0) {
              uVar7 = uVar16 + 0xffff >> 0x13;
              uVar10 = trkazi;
            }
          }
          else {
            uVar16 = (uint)(byte)se->fadeIn;
            uVar7 = 0x7f;
            uVar10 = trkazi;
            if ((int)(uVar16 * 0x10000) <= iVar3) {
              iVar15 = (int)se->range - uVar16;
              iVar15 = iVar15 * iVar15;
              iVar3 = (int)(iVar3 + uVar16 * -0x10000) >> 2;
              iVar3 = fixedmult(iVar3,iVar3);
              iVar3 = (iVar15 >> 4) * 0x10000 - iVar3;
              if (iVar15 == 0) {
                trap(0x1c00);
              }
              if ((iVar15 == -1) && (iVar3 == -0x80000000)) {
                trap(0x1800);
              }
              uVar16 = (iVar3 / iVar15) * 0x7f0;
              uVar7 = uVar16 >> 0x10;
              uVar10 = trkazi;
              if ((int)uVar16 < 0) {
                uVar7 = uVar16 + 0xffff >> 0x10;
                uVar10 = trkazi;
              }
            }
          }
        }
        if (0xa0000 < iDopplerIn) {
          iDopplerIn = 0xa0000;
        }
        if (iDopplerIn < 1) {
          iDopplerIn = 1;
        }
        uVar11 = PAD_state(4);
        if ((uVar11 & 0x400) == 0) {
          pAVar8 = (AudioElem *)
                   AudioCmn_PlaySFX__Fiiiiii
                             (iVar4 + 0x37,(int)*(short *)(ppAVar14 + 3),0x40,iDopplerIn,
                              uVar7 & 0xff,uVar10 & 0xffff);
          ppAVar14[1] = pAVar8;
        }
      }
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioTrk_SoundTrack__FP8Car_tObji(struct Car_tObj *car /*stack 0*/, int trkazi /*stack 4*/)
 // line 310, offset 0x8007cdc4
	/* begin block 1 */
		// Start line: 311
		// Start offset: 0x8007CDC4

		/* begin block 1.1 */
			// Start line: 321
			// Start offset: 0x8007CE1C

			/* begin block 1.1.1 */
				// Start line: 322
				// Start offset: 0x8007CE2C

				/* begin block 1.1.1.1 */
					// Start line: 323
					// Start offset: 0x8007CE2C

					/* begin block 1.1.1.1.1 */
						// Start line: 324
						// Start offset: 0x8007CE40
						// Variables:
					// 		struct AudioElem *se; // $s5
					// 		int numelems; // $a3
					// 		int quater; // $a2
					// 		int gtck; // stack offset -56
					// 		int vx; // stack offset -52
					// 		int vz; // stack offset -48
					// 		struct coorddef v; // stack offset -96
					// 		int start; // $v1
					// 		int end; // $fp

						/* begin block 1.1.1.1.1.1 */
							// Start line: 324
							// Start offset: 0x8007CE40

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 324
								// Start offset: 0x8007CE40
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8007CE40
							// End Line: 324
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8007CE40
						// End Line: 324

						/* begin block 1.1.1.1.1.2 */
							// Start line: 339
							// Start offset: 0x8007CEB0
							// Variables:
						// 		int i; // $s7

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 342
								// Start offset: 0x8007CEC4
								// Variables:
							// 		int tck; // $s2
							// 		int cur; // stack offset -64
							// 		int max; // stack offset -60
							// 		struct Trk_AnimateInst *anim; // $s4
							// 		int x; // $a0
							// 		int z; // $v1
							// 		int d; // $v1

								/* begin block 1.1.1.1.1.2.1.1 */
									// Start line: 376
									// Start offset: 0x8007CF00

									/* begin block 1.1.1.1.1.2.1.1.1 */
										// Start line: 391
										// Start offset: 0x8007CF84

										/* begin block 1.1.1.1.1.2.1.1.1.1 */
											// Start line: 391
											// Start offset: 0x8007CF84

											/* begin block 1.1.1.1.1.2.1.1.1.1.1 */
												// Start line: 392
												// Start offset: 0x8007CF98

												/* begin block 1.1.1.1.1.2.1.1.1.1.1.1 */
													// Start line: 393
													// Start offset: 0x8007CF98

													/* begin block 1.1.1.1.1.2.1.1.1.1.1.1.1 */
														// Start line: 394
														// Start offset: 0x8007CFBC
														// Variables:
													// 		int randtick; // $v1
													/* end block 1.1.1.1.1.2.1.1.1.1.1.1.1 */
													// End offset: 0x8007D008
													// End Line: 396
												/* end block 1.1.1.1.1.2.1.1.1.1.1.1 */
												// End offset: 0x8007D008
												// End Line: 396
											/* end block 1.1.1.1.1.2.1.1.1.1.1 */
											// End offset: 0x8007D008
											// End Line: 396
										/* end block 1.1.1.1.1.2.1.1.1.1 */
										// End offset: 0x8007D008
										// End Line: 396
									/* end block 1.1.1.1.1.2.1.1.1 */
									// End offset: 0x8007D008
									// End Line: 396
								/* end block 1.1.1.1.1.2.1.1 */
								// End offset: 0x8007D008
								// End Line: 396

								/* begin block 1.1.1.1.1.2.1.2 */
									// Start line: 410
									// Start offset: 0x8007D05C

									/* begin block 1.1.1.1.1.2.1.2.1 */
										// Start line: 411
										// Start offset: 0x8007D088
										// Variables:
									// 		struct coorddef *vel; // $s6
									// 		int fade; // $s3

										/* begin block 1.1.1.1.1.2.1.2.1.1 */
											// Start line: 412
											// Start offset: 0x8007D088

											/* begin block 1.1.1.1.1.2.1.2.1.1.1 */
												// Start line: 416
												// Start offset: 0x8007D0A8
												// Variables:
											// 		int fadeIn; // $v1
											// 		int fadeOut; // $a0

												/* begin block 1.1.1.1.1.2.1.2.1.1.1.1 */
													// Start line: 438
													// Start offset: 0x8007D120

													/* begin block 1.1.1.1.1.2.1.2.1.1.1.1.1 */
														// Start line: 439
														// Start offset: 0x8007D128
														// Variables:
													// 		struct coorddef nextcp; // stack offset -80
													// 		int next; // $s0
													// 		int time; // $a2
													/* end block 1.1.1.1.1.2.1.2.1.1.1.1.1 */
													// End offset: 0x8007D294
													// End Line: 460
												/* end block 1.1.1.1.1.2.1.2.1.1.1.1 */
												// End offset: 0x8007D294
												// End Line: 460
											/* end block 1.1.1.1.1.2.1.2.1.1.1 */
											// End offset: 0x8007D2D8
											// End Line: 465
										/* end block 1.1.1.1.1.2.1.2.1.1 */
										// End offset: 0x8007D2D8
										// End Line: 465
									/* end block 1.1.1.1.1.2.1.2.1 */
									// End offset: 0x8007D31C
									// End Line: 468
								/* end block 1.1.1.1.1.2.1.2 */
								// End offset: 0x8007D31C
								// End Line: 468
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x8007D31C
							// End Line: 470
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x8007D32C
						// End Line: 471
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007D32C
					// End Line: 471
				/* end block 1.1.1.1 */
				// End offset: 0x8007D32C
				// End Line: 471
			/* end block 1.1.1 */
			// End offset: 0x8007D32C
			// End Line: 471
		/* end block 1.1 */
		// End offset: 0x8007D32C
		// End Line: 471
	/* end block 1 */
	// End offset: 0x8007D32C
	// End Line: 471

void AudioTrk_SoundTrack__FP8Car_tObji(Car_tObj *car,int trkazi)
{
  uint uVar1;
  int fade;
  int iVar2;
  short sVar3;
  int ticks;
  int ticks_00;
  byte *pbVar4;
  Trk_AnimateInst *animInst;
  AudioElem *se;
  coorddef *vel;
  int iVar5;
  int iVar6;
  coorddef local_60;
  coorddef local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  if ((((DAT_801131f8 != 1) && (gMasterAmbientLevel != 0)) && (iGp00000208 != 0)) && (false)) {
    ticks_00 = (iRam00000004 >> 2) + 1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    iVar5 = 0;
    iVar6 = iRam00000004;
    if (ticks_00 <= iRam00000004) {
      iVar6 = ticks_00;
    }
    se = (AudioElem *)&DAT_00000010;
    pbVar4 = (byte *)0x24;
    while (ticks_00 = local_38, iVar5 < iVar6) {
      if (((int)(char)pbVar4[1] != -1) &&
         (*(AudioElem **)(iGp00000208 + (int)(char)pbVar4[1] * 0x10) != se)) {
        pbVar4[1] = 0xff;
      }
      animInst = (Trk_AnimateInst *)0x0;
      if ((uint)*pbVar4 - 4 < 0x20) {
        local_60.z = 0;
        local_60.y = 0;
        local_60.x = 0;
        animInst = (Trk_AnimateInst *)(&_Anim_gInstanceFromIndex)[(uint)*pbVar4 - 4];
        if (animInst != (Trk_AnimateInst *)0x0) {
          ticks_00 = DrawW_GetAnimationTime__FP15Trk_AnimateInst(animInst);
          Anim_GetPos__FP15Trk_AnimateInstiiP8coorddefPiT4
                    (animInst,1,ticks_00,(coorddef *)se,&local_40,&local_3c);
        }
      }
      else {
        if ((((*(uint *)(pbVar4 + -4) & 0xffff0000) != 0) &&
            ((int)(uint)*(ushort *)(pbVar4 + -8) < local_38)) && (pbVar4[1] == 0xff)) {
          sVar3 = 0;
          if (1 < pbVar4[-1]) {
            uVar1 = random();
            sVar3 = (short)(uVar1 % (uint)pbVar4[-1]);
            if (pbVar4[-1] == 0) {
              trap(0x1c00);
            }
          }
          *(ushort *)(pbVar4 + -8) = (ushort)pbVar4[-2] + (short)ticks_00 + sVar3;
        }
      }
      fade = (se->cp).x;
      ticks = fade - local_34;
      if (ticks < 1) {
        ticks = local_34 - fade;
      }
      fade = *(int *)(pbVar4 + -0xc) - local_30;
      if (fade < 1) {
        fade = local_30 - *(int *)(pbVar4 + -0xc);
      }
      if (fade < ticks) {
        ticks = ticks + (fade >> 2);
      }
      else {
        ticks = fade + (ticks >> 2);
      }
      vel = (coorddef *)0x0;
      if ((ticks < ((int)*(short *)(pbVar4 + -4) + 100) * 0x10000) || (-1 < (char)pbVar4[1])) {
        fade = 0x80;
        if ((uint)*pbVar4 - 4 < 0x20) {
          if (animInst != (Trk_AnimateInst *)0x0) {
            *(ushort *)(pbVar4 + -8) = (ushort)pbVar4[-2];
            ticks = (uint)pbVar4[-5] * 8;
            if (local_40 < ticks) {
              fade = 0;
            }
            else {
              if (local_40 < ticks + 0x80) {
                fade = local_40 + (uint)pbVar4[-5] * -8;
              }
            }
            ticks = (uint)pbVar4[-1] * 8;
            if (pbVar4[-1] != 0) {
              if (ticks + 0x80 < local_40) {
                fade = 0;
              }
              else {
                if (ticks < local_40) {
                  fade = ticks - (local_40 + -0x80);
                }
              }
            }
            if (0 < fade) {
              ticks = local_3c + -1;
              if (ticks_00 + 0x20 < local_3c + -1) {
                ticks = ticks_00 + 0x20;
              }
              Anim_GetPos__FP15Trk_AnimateInstiiP8coorddefPiT4
                        (animInst,1,ticks,&local_50,(int *)0x0,(int *)0x0);
              ticks = ticks - ticks_00;
              if (ticks == 0x20) {
                local_60.x = (local_50.x - (se->cp).x) * 2;
                local_60.y = (local_50.y - *(int *)(pbVar4 + -0x10)) * 2;
                local_60.z = (local_50.z - *(int *)(pbVar4 + -0xc)) * 2;
              }
              else {
                if (ticks == 0) goto LAB_8007d294;
                iVar2 = (local_50.x - (se->cp).x) * 0x40;
                local_60.x = iVar2 / ticks;
                if (ticks == 0) {
                  trap(0x1c00);
                }
                if ((ticks == -1) && (iVar2 == -0x80000000)) {
                  trap(0x1800);
                }
                iVar2 = (local_50.y - *(int *)(pbVar4 + -0x10)) * 0x40;
                local_60.y = iVar2 / ticks;
                if (ticks == 0) {
                  trap(0x1c00);
                }
                if ((ticks == -1) && (iVar2 == -0x80000000)) {
                  trap(0x1800);
                }
                iVar2 = (local_50.z - *(int *)(pbVar4 + -0xc)) * 0x40;
                local_60.z = iVar2 / ticks;
                if (ticks == 0) {
                  trap(0x1c00);
                }
                if ((ticks == -1) && (iVar2 == -0x80000000)) {
                  trap(0x1800);
                }
              }
              vel = &local_60;
            }
LAB_8007d294:
            ticks = ticks_00;
            if (0 < local_3c) {
              ticks = ticks_00 % local_3c;
              if (local_3c == 0) {
                trap(0x1c00);
              }
              if ((local_3c == -1) && (ticks_00 == -0x80000000)) {
                trap(0x1800);
              }
            }
            ticks_00 = ticks >> 3;
          }
          if (((uint)*pbVar4 - 4 < 0x20) && (animInst == (Trk_AnimateInst *)0x0)) goto LAB_8007d31c;
        }
        AudioTrk_AddCustomObject__FP9AudioElemiP8coorddefiP8Car_tObji
                  (se,ticks_00,vel,fade,car,trkazi);
      }
LAB_8007d31c:
      pbVar4 = pbVar4 + 0x18;
      se = se + 1;
      iVar5 = iVar5 + 1;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AudioTrk_PreLoad__Fv()
 // line 478, offset 0x8007d35c
	/* begin block 1 */
		// Start line: 479
		// Start offset: 0x8007D35C
		// Variables:
	// 		int vx; // $s5
	// 		int vz; // $s4
	// 		int tick; // $s7
	// 		unsigned int loaded; // $s3
	// 		int check; // stack offset -48
	// 		int numelems; // $s6

		/* begin block 1.1 */
			// Start line: 497
			// Start offset: 0x8007D3D8
			// Variables:
		// 		struct AudioElem *se; // $s1

			/* begin block 1.1.1 */
				// Start line: 499
				// Start offset: 0x8007D410
				// Variables:
			// 		struct CAudioList *this; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 499
					// Start offset: 0x8007D410
				/* end block 1.1.1.1 */
				// End offset: 0x8007D410
				// End Line: 499
			/* end block 1.1.1 */
			// End offset: 0x8007D410
			// End Line: 499

			/* begin block 1.1.2 */
				// Start line: 499
				// Start offset: 0x8007D410
				// Variables:
			// 		int i; // $s2

				/* begin block 1.1.2.1 */
					// Start line: 503
					// Start offset: 0x8007D424
					// Variables:
				// 		int x; // $a0
				// 		int z; // $v1
				// 		int d; // $v1
				/* end block 1.1.2.1 */
				// End offset: 0x8007D4CC
				// End Line: 515
			/* end block 1.1.2 */
			// End offset: 0x8007D4DC
			// End Line: 516
		/* end block 1.1 */
		// End offset: 0x8007D4DC
		// End Line: 517
	/* end block 1 */
	// End offset: 0x8007D500
	// End Line: 528

int AudioTrk_PreLoad__Fv(void)
{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int *piVar12;
  undefined auStack48 [8];
  
  iVar4 = iRam00000008;
  iVar8 = __front_dtors_size;
  if ((true) || (gMasterAmbientLevel == 0)) {
    uVar5 = 1;
  }
  else {
    bVar2 = false;
    iVar6 = gettick();
    iVar3 = iRam00000004;
    while( true ) {
      bVar1 = false;
      if ((!bVar2) && (iVar7 = gettick(), iVar7 < iVar6 + 0x280)) {
        iVar7 = SNDmemlargestunused(auStack48);
        bVar1 = 0x8000 < iVar7;
      }
      bVar2 = true;
      if (!bVar1) break;
      iVar7 = 0;
      piVar12 = (int *)&DAT_00000010;
      pbVar11 = (byte *)0x1e;
      while (iVar7 < iVar3) {
        iVar10 = *piVar12 - iVar8;
        if (iVar10 < 1) {
          iVar10 = iVar8 - *piVar12;
        }
        iVar9 = *(int *)(pbVar11 + -6) - iVar4;
        if (iVar9 < 1) {
          iVar9 = iVar4 - *(int *)(pbVar11 + -6);
        }
        if (iVar9 < iVar10) {
          iVar10 = iVar10 + (iVar9 >> 2);
        }
        else {
          iVar10 = iVar9 + (iVar10 >> 2);
        }
        if (((iVar10 < ((int)*(short *)(pbVar11 + 2) + 100) * 0x10000) && (false)) &&
           (iVar10 = AudioCmn_GetAsyncSfx__Fiib(0,(uint)*pbVar11,0), iVar10 == -1)) {
          bVar2 = false;
        }
        pbVar11 = pbVar11 + 0x18;
        piVar12 = piVar12 + 6;
        iVar7 = iVar7 + 1;
      }
      CopSpeak_Server__Fv();
      systemtask(0);
    }
    iVar8 = gettick();
    uVar5 = (uint)(iVar8 < iVar6 + 0x280);
  }
  return uVar5;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AudioTrk_CleanUp__Fv()
 // line 534, offset 0x8007d52c
	/* begin block 1 */
		// Start line: 535
		// Start offset: 0x8007D52C

		/* begin block 1.1 */
			// Start line: 535
			// Start offset: 0x8007D52C

			/* begin block 1.1.1 */
				// Start line: 539
				// Start offset: 0x8007D554

				/* begin block 1.1.1.1 */
					// Start line: 540
					// Start offset: 0x8007D554
					// Variables:
				// 		int i; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x8007D59C
				// End Line: 547
			/* end block 1.1.1 */
			// End offset: 0x8007D5AC
			// End Line: 549
		/* end block 1.1 */
		// End offset: 0x8007D5AC
		// End Line: 549
	/* end block 1 */
	// End offset: 0x8007D5AC
	// End Line: 549

void AudioTrk_CleanUp__Fv(void)
{
  int iVar1;
  
  AudioTrk_Reset__Fv();
  iVar1 = 0;
  if (iGp00000208 != 0) {
    do {
      if (*(int *)(iGp00000208 + iVar1 * 0x10 + 4) != -1) {
        freeVoiceChannel__Fi(iVar1 + 0x37);
        *(undefined4 *)(iGp00000208 + iVar1 * 0x10 + 4) = 0xffffffff;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    purgememadr(iGp00000208);
    iGp00000208 = 0;
  }
  return;


}





