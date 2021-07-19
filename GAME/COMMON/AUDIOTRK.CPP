#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 106
	/* end block 2 */
	// End Line: 107

	/* begin block 3 */
		// Start line: 113
	/* end block 3 */
	// End Line: 114

	/* begin block 4 */
		// Start line: 111
	/* end block 4 */
	// End Line: 112

	/* begin block 5 */
		// Start line: 111
	/* end block 5 */
	// End Line: 112

	/* begin block 6 */
		// Start line: 112
	/* end block 6 */
	// End Line: 113

	/* begin block 7 */
		// Start line: 112
	/* end block 7 */
	// End Line: 113

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioTrk_Reset__Fv(void)

{
  AudioTrk_tAmbientChannel *pAVar1;
  CAudioList *pCVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  if (AudioTrk_g != (AudioTrk_tGlobals *)0x0) {
    iVar4 = 0;
    do {
      if (AudioTrk_g->chan[iVar4].handle != -1) {
        freeVoiceChannel__Fi(iVar4 + 0x37);
        AudioTrk_g->chan[iVar4].handle = -1;
      }
      iVar5 = iVar4 + 1;
      pAVar1 = AudioTrk_g->chan;
      pAVar1[iVar4].se = (AudioElem *)0x0;
      *(undefined2 *)(&pAVar1[iVar4].se + 3) = 0xffff;
      iVar4 = iVar5;
    } while (iVar5 < 0x10);
  }
  if ((gGameAudioList != (CAudioList *)0x0) && (iVar4 = 0, 0 < gGameAudioList->numElements_)) {
    puVar3 = (undefined *)((int)&gGameAudioList[2].numElements_ + 1);
    do {
      *puVar3 = 0xff;
      pCVar2 = gGameAudioList;
      *(undefined2 *)(puVar3 + -9) = 0;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x18;
    } while (iVar4 < pCVar2->numElements_);
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

	/* begin block 2 */
		// Start line: 168
	/* end block 2 */
	// End Line: 169

	/* begin block 3 */
		// Start line: 175
	/* end block 3 */
	// End Line: 176

	/* begin block 4 */
		// Start line: 175
	/* end block 4 */
	// End Line: 176

	/* begin block 5 */
		// Start line: 176
	/* end block 5 */
	// End Line: 177

	/* begin block 6 */
		// Start line: 176
	/* end block 6 */
	// End Line: 177

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioTrk_StartUp__Fv(void)

{
  AudioTrk_tAmbientChannel *pAVar1;
  int iVar2;
  
  if (AudioTrk_g == (AudioTrk_tGlobals *)0x0) {
    AudioTrk_g = (AudioTrk_tGlobals *)reservememadr(s_trck_globals_80055864,0x100,0);
    iVar2 = 0xf;
    pAVar1 = AudioTrk_g->chan + 0xf;
    do {
      pAVar1->handle = -1;
      iVar2 = iVar2 + -1;
      pAVar1 = pAVar1 + -1;
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
			// 		void * repeatnow; // $s1

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

	/* begin block 2 */
		// Start line: 230
	/* end block 2 */
	// End Line: 231

	/* begin block 3 */
		// Start line: 270
	/* end block 3 */
	// End Line: 271

	/* begin block 4 */
		// Start line: 270
	/* end block 4 */
	// End Line: 271

	/* begin block 5 */
		// Start line: 271
	/* end block 5 */
	// End Line: 272

	/* begin block 6 */
		// Start line: 271
	/* end block 6 */
	// End Line: 272

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AudioTrk_AddCustomObject__FP9AudioElemiP8coorddefiP8Car_tObji
               (AudioElem *se,int tck,coorddef *vel,int fade,Car_tObj *car,int trkazi)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  AudioElem *pAVar7;
  AudioTrk_tAmbientChannel *pAVar8;
  uint uVar9;
  ushort uVar10;
  int iVar11;
  AudioTrk_tAmbientChannel *pAVar12;
  int iVar13;
  undefined **iDopplerIn;
  int iVar14;
  uint uVar15;
  BWorldSm_Pos local_b0;
  
  if (AudioTrk_g != (AudioTrk_tGlobals *)0x0) {
    iVar3 = Math_Dist3D__FP8coorddefT0((coorddef *)se,(coorddef *)&AudioClc_gRenderView);
    if ((iVar3 < ((int)se->range + 100) * 0x10000) &&
       (pAVar12 = (AudioTrk_tAmbientChannel *)0x0,
       (int)(uint)(byte)se->patchID < CopSpeak_gNumTrackSfx)) {
      iVar4 = (int)se->chan;
      if (iVar4 < 0) {
        iVar14 = 0;
        iVar4 = -1;
        if ((se->nextDelay != 0) && (iVar4 = -1, (uint)se->nextDelay != tck)) {
          return;
        }
        do {
          if (0xf < iVar14) break;
          pAVar8 = AudioTrk_g->chan + iVar14;
          if (pAVar8->se == (AudioElem *)0x0) {
            pAVar8->se = se;
            (&pAVar8->se)[2] = (AudioElem *)0xffffffff;
            bVar1 = se->minRepeat;
            uVar10 = (ushort)bVar1;
            if (se->randomRepeat != '\0') {
              uVar6 = random();
              uVar9 = (uint)(byte)se->randomRepeat + 1;
              if (uVar9 == 0) {
                trap(0x1c00);
              }
              uVar10 = (ushort)bVar1 + (short)(uVar6 % uVar9);
            }
            pAVar7 = pAVar8->se;
            *(ushort *)((int)&pAVar8->se + 0xe) = uVar10;
            pAVar7->chan = (char)iVar14;
            pAVar12 = pAVar8;
            iVar4 = iVar14;
          }
          iVar14 = iVar14 + 1;
        } while (pAVar12 == (AudioTrk_tAmbientChannel *)0x0);
      }
      else {
        pAVar12 = AudioTrk_g->chan + iVar4;
      }
      iVar14 = 0;
      if (pAVar12 == (AudioTrk_tAmbientChannel *)0x0) {
        iVar13 = 0;
        iVar11 = 0;
        while (iVar11 < 0x10) {
          iVar5 = Math_Dist3D__FP8coorddefT0
                            ((coorddef *)AudioTrk_g->chan[iVar11].se,
                             (coorddef *)&AudioClc_gRenderView);
          if (_DAT_00000004 != 0xffffffff) {
            uVar6 = SNDover(_DAT_00000004);
            if ((uVar6 != 0) && (iVar13 < iVar5)) {
              iVar13 = iVar5;
              iVar14 = iVar11;
            }
          }
          iVar11 = iVar11 + 1;
        }
        if (iVar3 < iVar13) {
          pAVar12 = AudioTrk_g->chan + iVar14;
          pAVar12->se = se;
          (&pAVar12->se)[2] = (AudioElem *)0xffffffff;
          bVar1 = se->minRepeat;
          uVar10 = (ushort)bVar1;
          if (se->randomRepeat != '\0') {
            uVar6 = random();
            uVar9 = (uint)(byte)se->randomRepeat + 1;
            if (uVar9 == 0) {
              trap(0x1c00);
            }
            uVar10 = (ushort)bVar1 + (short)(uVar6 % uVar9);
          }
          pAVar7 = pAVar12->se;
          *(ushort *)((int)&pAVar12->se + 0xe) = uVar10;
          pAVar7->chan = (char)iVar14;
          iVar4 = iVar14;
        }
        if (pAVar12 == (AudioTrk_tAmbientChannel *)0x0) {
          return;
        }
      }
      if ((int)*(short *)(&pAVar12->se + 3) != (uint)(byte)se->patchID) {
        if ((&pAVar12->se)[1] != (AudioElem *)0xffffffff) {
          freeVoiceChannel__Fi(iVar4 + 0x37);
          (&pAVar12->se)[1] = (AudioElem *)0xffffffff;
        }
        *(ushort *)(&pAVar12->se + 3) = (ushort)(byte)se->patchID;
      }
      bVar2 = false;
      if (((&pAVar12->se)[1] != (AudioElem *)0xffffffff) &&
         (uVar6 = SNDover((uint)(&pAVar12->se)[1]), uVar6 != 0)) {
        if (*(short *)((int)&pAVar12->se + 0xe) == 0) {
          if ((se->type != '\x01') || ((int)se->range << 0x10 < iVar3)) {
            freeVoiceChannel__Fi(iVar4 + 0x37);
            pAVar7 = pAVar12->se;
            (&pAVar12->se)[1] = (AudioElem *)0xffffffff;
            *(undefined2 *)(&pAVar12->se + 3) = 0xffff;
            pAVar7->chan = -1;
            pAVar12->se = (AudioElem *)0x0;
          }
        }
        else {
          bVar2 = true;
          (&pAVar12->se)[1] = (AudioElem *)0xffffffff;
          *(short *)((int)&pAVar12->se + 0xe) = *(short *)((int)&pAVar12->se + 0xe) + -1;
        }
      }
      if (pAVar12->se != (AudioElem *)0x0) {
        iDopplerIn = (undefined **)0x10000;
        uVar6 = 0;
        if ((se->type == '\x01') && (!bVar2)) {
          if (((&pAVar12->se)[1] != (AudioElem *)0xffffffff) &&
             (uVar9 = SNDover((uint)(&pAVar12->se)[1]), uVar9 != 0)) {
            return;
          }
          if ((iVar3 < (int)((uint)(byte)se->fadeIn << 0x10)) &&
             ((&pAVar12->se)[2] == (AudioElem *)0xffffffff)) {
            BWorldSm_SetSlice__FiP12BWorldSm_Pos((int)(car->N).simRoadInfo.slice,&local_b0);
            BWorldSm_FindClosestSlice__FP8coorddefP12BWorldSm_Pos((coorddef *)se,&local_b0);
            (&pAVar12->se)[2] = (AudioElem *)(int)local_b0.slice;
          }
          if (((AudioElem *)(int)(car->N).simRoadInfo.slice != (&pAVar12->se)[2]) ||
             ((int)((uint)(byte)se->fadeIn << 0x10) < iVar3)) {
            AudioCmn_GetAsyncSfx__Fiib(0,(int)*(short *)(&pAVar12->se + 3),(void *)0x0);
            return;
          }
        }
        uVar9 = 0;
        if (iVar3 < (int)se->range << 0x10) {
          if ((se->type != '\x03') && (trkazi = 0, se->type != '\x02')) {
            trkazi = AudioClc_CalcAzimuth__FP17DRender_tCalcViewP8coorddef
                               (&AudioClc_gRenderView,(coorddef *)se);
            iDopplerIn = (undefined **)
                         AudioClc_CalcDopplerShiftRatio__FP8coorddefT0((coorddef *)se,vel);
          }
          if (((uint)(byte)se->type - 4 < 0x20) || (se->type == 1)) {
            iVar14 = (int)se->range * (int)se->range;
            uVar6 = fixedmult(iVar3 >> 2,iVar3 >> 2);
            iVar3 = (iVar14 >> 4) * 0x10000 - uVar6;
            if (iVar14 == 0) {
              trap(0x1c00);
            }
            if ((iVar14 == -1) && (iVar3 == -0x80000000)) {
              trap(0x1800);
            }
            uVar15 = (iVar3 / iVar14) * fade * 0x7f;
            uVar6 = uVar15 >> 0x13;
            uVar9 = trkazi;
            if ((int)uVar15 < 0) {
              uVar6 = uVar15 + 0xffff >> 0x13;
              uVar9 = trkazi;
            }
          }
          else {
            uVar15 = (uint)(byte)se->fadeIn;
            uVar6 = 0x7f;
            uVar9 = trkazi;
            if ((int)(uVar15 * 0x10000) <= iVar3) {
              iVar14 = (int)se->range - uVar15;
              iVar14 = iVar14 * iVar14;
              iVar3 = (int)(iVar3 + uVar15 * -0x10000) >> 2;
              uVar6 = fixedmult(iVar3,iVar3);
              iVar3 = (iVar14 >> 4) * 0x10000 - uVar6;
              if (iVar14 == 0) {
                trap(0x1c00);
              }
              if ((iVar14 == -1) && (iVar3 == -0x80000000)) {
                trap(0x1800);
              }
              uVar15 = (iVar3 / iVar14) * 0x7f0;
              uVar6 = uVar15 >> 0x10;
              uVar9 = trkazi;
              if ((int)uVar15 < 0) {
                uVar6 = uVar15 + 0xffff >> 0x10;
                uVar9 = trkazi;
              }
            }
          }
        }
        if (0xa0000 < (int)iDopplerIn) {
          iDopplerIn = &PTR_000a0000;
        }
        if ((int)iDopplerIn < 1) {
          iDopplerIn = (undefined **)0x1;
        }
        uVar10 = PAD_state(4);
        if ((uVar10 & 0x400) == 0) {
          pAVar7 = (AudioElem *)
                   AudioCmn_PlaySFX__Fiiiiii
                             (iVar4 + 0x37,(int)*(short *)(&pAVar12->se + 3),0x40,(int)iDopplerIn,
                              uVar6 & 0xff,uVar9 & 0xffff);
          (&pAVar12->se)[1] = pAVar7;
        }
      }
    }
    else {
      iVar3 = (int)se->chan;
      if (-1 < iVar3) {
        pAVar12 = AudioTrk_g->chan + iVar3;
        if ((&pAVar12->se)[1] != (AudioElem *)0xffffffff) {
          freeVoiceChannel__Fi(iVar3 + 0x37);
          (&pAVar12->se)[1] = (AudioElem *)0xffffffff;
        }
        pAVar12->se->chan = -1;
        pAVar12->se = (AudioElem *)0x0;
        *(undefined2 *)(&pAVar12->se + 3) = 0xffff;
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

	/* begin block 2 */
		// Start line: 628
	/* end block 2 */
	// End Line: 629

	/* begin block 3 */
		// Start line: 633
	/* end block 3 */
	// End Line: 634

	/* begin block 4 */
		// Start line: 633
	/* end block 4 */
	// End Line: 634

void AudioTrk_SoundTrack__FP8Car_tObji(Car_tObj *car,int trkazi)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int ticks;
  int fade;
  int ticks_00;
  int iVar5;
  byte *pbVar6;
  Trk_AnimateInst *animInst;
  AudioElem *se;
  coorddef *vel;
  coorddef local_60;
  coorddef local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  if ((((GameSetup_gData.commMode != 1) && (gMasterAmbientLevel != 0)) &&
      (AudioTrk_g != (AudioTrk_tGlobals *)0x0)) && (gGameAudioList != (CAudioList *)0x0)) {
    iVar5 = gGameAudioList->numElements_;
    fade = simGlobal.gameTicks >> 1;
    ticks_00 = (iVar5 >> 2) + 1;
    local_38 = simGlobal.gameTicks >> 3;
    local_34 = AudioClc_gRenderView.translation.x;
    local_30 = AudioClc_gRenderView.translation.z;
    iVar4 = fade;
    if (fade < 0) {
      iVar4 = fade + 3;
    }
    iVar4 = (fade + (iVar4 >> 2) * -4) * ticks_00;
    ticks_00 = iVar4 + ticks_00;
    if (ticks_00 <= iVar5) {
      iVar5 = ticks_00;
    }
    se = (AudioElem *)((int)gGameAudioList + iVar4 * 0x18 + 0x10);
    pbVar6 = (byte *)&se->type;
    while (ticks_00 = local_38, iVar4 < iVar5) {
      if (((int)(char)pbVar6[1] != -1) && (AudioTrk_g->chan[(int)(char)pbVar6[1]].se != se)) {
        pbVar6[1] = 0xff;
      }
      animInst = (Trk_AnimateInst *)0x0;
      if ((uint)*pbVar6 - 4 < 0x20) {
        local_60.z = 0;
        local_60.y = 0;
        local_60.x = 0;
        animInst = (&Anim_gInstanceFromIndex32)[(uint)*pbVar6 - 4];
        if (animInst != (Trk_AnimateInst *)0x0) {
          ticks_00 = DrawW_GetAnimationTime__FP15Trk_AnimateInst(animInst);
          Anim_GetPos__FP15Trk_AnimateInstiiP8coorddefPiT4
                    (animInst,1,ticks_00,(coorddef *)se,&local_40,&local_3c);
        }
      }
      else {
        if ((((*(uint *)(pbVar6 + -4) & 0xffff0000) != 0) &&
            ((int)(uint)*(ushort *)(pbVar6 + -8) < local_38)) && (pbVar6[1] == 0xff)) {
          sVar3 = 0;
          if (1 < pbVar6[-1]) {
            uVar1 = random();
            sVar3 = (short)(uVar1 % (uint)pbVar6[-1]);
            if (pbVar6[-1] == 0) {
              trap(0x1c00);
            }
          }
          *(ushort *)(pbVar6 + -8) = (ushort)pbVar6[-2] + (short)ticks_00 + sVar3;
        }
      }
      fade = (se->cp).x;
      ticks = fade - local_34;
      if (ticks < 1) {
        ticks = local_34 - fade;
      }
      fade = *(int *)(pbVar6 + -0xc) - local_30;
      if (fade < 1) {
        fade = local_30 - *(int *)(pbVar6 + -0xc);
      }
      if (fade < ticks) {
        ticks = ticks + (fade >> 2);
      }
      else {
        ticks = fade + (ticks >> 2);
      }
      vel = (coorddef *)0x0;
      if ((ticks < ((int)*(short *)(pbVar6 + -4) + 100) * 0x10000) || (-1 < (char)pbVar6[1])) {
        fade = 0x80;
        if ((uint)*pbVar6 - 4 < 0x20) {
          if (animInst != (Trk_AnimateInst *)0x0) {
            *(ushort *)(pbVar6 + -8) = (ushort)pbVar6[-2];
            ticks = (uint)pbVar6[-5] * 8;
            if (local_40 < ticks) {
              fade = 0;
            }
            else {
              if (local_40 < ticks + 0x80) {
                fade = local_40 + (uint)pbVar6[-5] * -8;
              }
            }
            ticks = (uint)pbVar6[-1] * 8;
            if (pbVar6[-1] != 0) {
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
                local_60.y = (local_50.y - *(int *)(pbVar6 + -0x10)) * 2;
                local_60.z = (local_50.z - *(int *)(pbVar6 + -0xc)) * 2;
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
                iVar2 = (local_50.y - *(int *)(pbVar6 + -0x10)) * 0x40;
                local_60.y = iVar2 / ticks;
                if (ticks == 0) {
                  trap(0x1c00);
                }
                if ((ticks == -1) && (iVar2 == -0x80000000)) {
                  trap(0x1800);
                }
                iVar2 = (local_50.z - *(int *)(pbVar6 + -0xc)) * 0x40;
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
          if (((uint)*pbVar6 - 4 < 0x20) && (animInst == (Trk_AnimateInst *)0x0)) goto LAB_8007d31c;
        }
        AudioTrk_AddCustomObject__FP9AudioElemiP8coorddefiP8Car_tObji
                  (se,ticks_00,vel,fade,car,trkazi);
      }
LAB_8007d31c:
      pbVar6 = pbVar6 + 0x18;
      se = se + 1;
      iVar4 = iVar4 + 1;
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
	// 		void * loaded; // $s3
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

	/* begin block 2 */
		// Start line: 988
	/* end block 2 */
	// End Line: 989

	/* begin block 3 */
		// Start line: 993
	/* end block 3 */
	// End Line: 994

	/* begin block 4 */
		// Start line: 993
	/* end block 4 */
	// End Line: 994

	/* begin block 5 */
		// Start line: 994
	/* end block 5 */
	// End Line: 995

	/* begin block 6 */
		// Start line: 994
	/* end block 6 */
	// End Line: 995

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AudioTrk_PreLoad__Fv(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  uchar *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  CAudioList *pCVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int aiStack48 [2];
  
  if ((gGameAudioList == (CAudioList *)0x0) || (gMasterAmbientLevel == 0)) {
    uVar3 = 1;
  }
  else {
    iVar12 = BWorldSm_slices->center[0];
    iVar11 = BWorldSm_slices->center[2];
    bVar2 = false;
    puVar4 = gettick();
    iVar13 = gGameAudioList->numElements_;
    while( true ) {
      bVar1 = false;
      if ((!bVar2) && (puVar5 = gettick(), (int)puVar5 < (int)(puVar4 + 0x280))) {
        iVar6 = SNDmemlargestunused(aiStack48);
        bVar1 = 0x8000 < iVar6;
      }
      bVar2 = true;
      if (!bVar1) break;
      iVar6 = 0;
      pCVar10 = gGameAudioList + 1;
      pbVar9 = (byte *)((int)&gGameAudioList[1].versionNumber_ + 2);
      while (iVar6 < iVar13) {
        iVar8 = pCVar10->id_ - iVar12;
        if (iVar8 < 1) {
          iVar8 = iVar12 - pCVar10->id_;
        }
        iVar7 = *(int *)(pbVar9 + -6) - iVar11;
        if (iVar7 < 1) {
          iVar7 = iVar11 - *(int *)(pbVar9 + -6);
        }
        if (iVar7 < iVar8) {
          iVar8 = iVar8 + (iVar7 >> 2);
        }
        else {
          iVar8 = iVar7 + (iVar8 >> 2);
        }
        if (((iVar8 < ((int)*(short *)(pbVar9 + 2) + 100) * 0x10000) &&
            ((int)(uint)*pbVar9 < CopSpeak_gNumTrackSfx)) &&
           (iVar8 = AudioCmn_GetAsyncSfx__Fiib(0,(uint)*pbVar9,(void *)0x0), iVar8 == -1)) {
          bVar2 = false;
        }
        pbVar9 = pbVar9 + 0x18;
        pCVar10 = (CAudioList *)&pCVar10[1].slice_;
        iVar6 = iVar6 + 1;
      }
      CopSpeak_Server__Fv();
      systemtask(0);
    }
    puVar5 = gettick();
    uVar3 = (uint)((int)puVar5 < (int)(puVar4 + 0x280));
  }
  return uVar3;
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

	/* begin block 2 */
		// Start line: 1103
	/* end block 2 */
	// End Line: 1104

	/* begin block 3 */
		// Start line: 1110
	/* end block 3 */
	// End Line: 1111

	/* begin block 4 */
		// Start line: 1110
	/* end block 4 */
	// End Line: 1111

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudioTrk_CleanUp__Fv(void)

{
  int iVar1;
  
  AudioTrk_Reset__Fv();
  iVar1 = 0;
  if (AudioTrk_g != (AudioTrk_tGlobals *)0x0) {
    do {
      if (AudioTrk_g->chan[iVar1].handle != -1) {
        freeVoiceChannel__Fi(iVar1 + 0x37);
        AudioTrk_g->chan[iVar1].handle = -1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    purgememadr((int)AudioTrk_g);
    AudioTrk_g = (AudioTrk_tGlobals *)0x0;
  }
  return;
}





