#include "THISDUST.H"
#include "SCREENCONGRATS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__15tScreenCongrats(struct tScreenCongrats *this /*$s0*/)
 // line 53, offset 0x80047e60
	/* begin block 1 */
		// Start line: 54
		// Start offset: 0x80047E60
	/* end block 1 */
	// End offset: 0x80047E60
	// End Line: 54

	/* begin block 2 */
		// Start line: 106
	/* end block 2 */
	// End Line: 107

	/* begin block 3 */
		// Start line: 106
	/* end block 3 */
	// End Line: 107

void Cleanup__15tScreenCongrats(tScreenCongrats *this)

{
  CleanupSpinningCarsMenu__Fv();
  Cleanup__7tScreen((tScreen *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__15tScreenCongratsRsT1PPcT3(struct tScreenCongrats *this /*$s3*/, short *numPermShapes /*$t0*/, short *numSwapShapes /*$s7*/, char **permFileName /*$s0*/, char **swapFileName /*stack 16*/)
 // line 64, offset 0x80047e8c
	/* begin block 1 */
		// Start line: 65
		// Start offset: 0x80047E8C
		// Variables:
	// 		struct tTourneyInfo *tourneyInfo; // $s4

		/* begin block 1.1 */
			// Start line: 65
			// Start offset: 0x80047E8C

			/* begin block 1.1.1 */
				// Start line: 65
				// Start offset: 0x80047E8C
			/* end block 1.1.1 */
			// End offset: 0x80047E8C
			// End Line: 65
		/* end block 1.1 */
		// End offset: 0x80047E8C
		// End Line: 65

		/* begin block 1.2 */
			// Start line: 78
			// Start offset: 0x80047F5C

			/* begin block 1.2.1 */
				// Start line: 83
				// Start offset: 0x80047F90
				// Variables:
			// 		int j; // $s2

				/* begin block 1.2.1.1 */
					// Start line: 83
					// Start offset: 0x80047F90

					/* begin block 1.2.1.1.1 */
						// Start line: 83
						// Start offset: 0x80047F90
					/* end block 1.2.1.1.1 */
					// End offset: 0x80047F90
					// End Line: 83
				/* end block 1.2.1.1 */
				// End offset: 0x80047F90
				// End Line: 83

				/* begin block 1.2.1.2 */
					// Start line: 83
					// Start offset: 0x80047F90
					// Variables:
				// 		int i; // $s0
				/* end block 1.2.1.2 */
				// End offset: 0x80047FF4
				// End Line: 89
			/* end block 1.2.1 */
			// End offset: 0x80047FF4
			// End Line: 89
		/* end block 1.2 */
		// End offset: 0x800480B8
		// End Line: 109
	/* end block 1 */
	// End offset: 0x800480B8
	// End Line: 117

	/* begin block 2 */
		// Start line: 121
	/* end block 2 */
	// End Line: 122

	/* begin block 3 */
		// Start line: 128
	/* end block 3 */
	// End Line: 129

	/* begin block 4 */
		// Start line: 128
	/* end block 4 */
	// End Line: 129

void GetShapeInfo__15tScreenCongratsRsT1PPcT3
               (tScreenCongrats *this,short *numPermShapes,short *numSwapShapes,char **permFileName,
               char **swapFileName)

{
  byte bVar1;
  tTournamentDefinition *ptVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int place;
  tTourneyInfo *tourn;
  
  ptVar2 = tournamentManager.fDefinition;
  place = tournamentManager.fTournament;
  bVar1 = (tournamentManager.fDefinition)->fTiers[tournamentManager.fTier].fTournOffset;
  this->fNumSpinShapes = 0;
  this->smallSpinningThing = kSpinningNone;
  tourn = ptVar2->fTournaments + (uint)bVar1 + place;
  sVar3 = 0x16;
  if (*(int *)((this->tScreen)._vf + 6) == 0) {
    sVar3 = 0x2b;
  }
  *numPermShapes = sVar3;
  if (*(int *)((this->tScreen)._vf + 6) == 0) {
    pcVar5 = s_zcong_8001228c;
  }
  else {
    pcVar5 = s_zelim_80012294;
  }
  sprintf(fPermFileNameBuf,&DAT_80012284,pcVar5,(uint)(byte)frontEnd.language);
  *permFileName = fPermFileNameBuf;
  if (this->congratsMessage + 0xfffffffd < 2) {
    if (this->trophy == kTrophySilver) {
      *numSwapShapes = 0x20;
      this->fNumSpinShapes = 0x20;
      GetTrophyName__18tTournamentManagerP12tTourneyInfo11tTrophySizePci
                (&tournamentManager,tourn,ts_Small,congratsSwapFileName,-1);
      *swapFileName = congratsSwapFileName;
    }
    else {
      if (this->trophy == kTrophyBronze) {
        *numSwapShapes = 10;
        this->fNumSpinShapes = 10;
        *swapFileName = s_congb_8001229c;
      }
      else {
        *swapFileName = &DAT_800122a4;
        *numSwapShapes = 0;
      }
    }
  }
  else {
    place = 900;
    iVar4 = (int)(((int)(short)tournamentManager.fNumRacers + (uint)(tourn->fKnockout != '\0')) *
                 0x10000) >> 0x10;
    iVar6 = 1;
    if (0 < iVar4) {
      do {
        sVar3 = PlayerRanking__18tTournamentManagers(&tournamentManager,(short)iVar6);
        if (sVar3 == 0) {
          place = iVar6;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 <= iVar4);
    }
    GetTrophyName__18tTournamentManagerP12tTourneyInfo11tTrophySizePci
              (&tournamentManager,tourn,ts_Large,congratsSwapFileName,place);
    *swapFileName = congratsSwapFileName;
    *numSwapShapes = 0x20;
    this->smallSpinningThing = 0x20;
  }
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetCar__15tScreenCongratsR8tCarInfo(struct tScreenCongrats *this /*$a0*/, struct tCarInfo *carInfo /*$s0*/)
 // line 121, offset 0x800480e4
	/* begin block 1 */
		// Start line: 122
		// Start offset: 0x800480E4
	/* end block 1 */
	// End offset: 0x800480E4
	// End Line: 122

	/* begin block 2 */
		// Start line: 254
	/* end block 2 */
	// End Line: 255

	/* begin block 3 */
		// Start line: 259
	/* end block 3 */
	// End Line: 260

	/* begin block 4 */
		// Start line: 259
	/* end block 4 */
	// End Line: 260

void * GetCar__15tScreenCongratsR8tCarInfo(tScreenCongrats *this,tCarInfo *carInfo)

{
  GetGarageCar__11tCarManagersR8tCarInfos(&carManager,(ushort)(byte)frontEnd.garageCar[0],carInfo,0)
  ;
  carInfo->fColor = carInfo->fColorOrder[(uint)carInfo->fColor];
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__15tScreenCongrats(struct tScreenCongrats *this /*$s3*/)
 // line 128, offset 0x8004813c
	/* begin block 1 */
		// Start line: 129
		// Start offset: 0x8004813C
		// Variables:
	// 		int fJustFadeOff; // $s4
	// 		static unsigned long carRotate; // offset 0x0
	// 		struct tDrawShapeExtended drawFlags; // stack offset -96
	// 		struct tDrawShapeExtended drawFlags2; // stack offset -72
	// 		int StripeRGB; // $a0
	// 		int bannerframe; // $s1
	// 		struct tDrawShapeExtended drawFlags3; // stack offset -48

		/* begin block 1.1 */
			// Start line: 135
			// Start offset: 0x80048170

			/* begin block 1.1.1 */
				// Start line: 146
				// Start offset: 0x800481FC

				/* begin block 1.1.1.1 */
					// Start line: 146
					// Start offset: 0x800481FC
				/* end block 1.1.1.1 */
				// End offset: 0x800481FC
				// End Line: 146
			/* end block 1.1.1 */
			// End offset: 0x800481FC
			// End Line: 146

			/* begin block 1.1.2 */
				// Start line: 147
				// Start offset: 0x80048218

				/* begin block 1.1.2.1 */
					// Start line: 147
					// Start offset: 0x80048218

					/* begin block 1.1.2.1.1 */
						// Start line: 147
						// Start offset: 0x80048218
					/* end block 1.1.2.1.1 */
					// End offset: 0x80048218
					// End Line: 147
				/* end block 1.1.2.1 */
				// End offset: 0x80048218
				// End Line: 147
			/* end block 1.1.2 */
			// End offset: 0x80048218
			// End Line: 147

			/* begin block 1.1.3 */
				// Start line: 151
				// Start offset: 0x80048224
				// Variables:
			// 		void * scale; // $s0

				/* begin block 1.1.3.1 */
					// Start line: 152
					// Start offset: 0x80048224

					/* begin block 1.1.3.1.1 */
						// Start line: 152
						// Start offset: 0x80048234

						/* begin block 1.1.3.1.1.1 */
							// Start line: 152
							// Start offset: 0x80048234

							/* begin block 1.1.3.1.1.1.1 */
								// Start line: 152
								// Start offset: 0x80048234
							/* end block 1.1.3.1.1.1.1 */
							// End offset: 0x80048234
							// End Line: 152
						/* end block 1.1.3.1.1.1 */
						// End offset: 0x80048234
						// End Line: 152
					/* end block 1.1.3.1.1 */
					// End offset: 0x80048240
					// End Line: 152
				/* end block 1.1.3.1 */
				// End offset: 0x80048240
				// End Line: 152

				/* begin block 1.1.3.2 */
					// Start line: 154
					// Start offset: 0x80048240

					/* begin block 1.1.3.2.1 */
						// Start line: 155
						// Start offset: 0x80048250
						// Variables:
					// 		int colf; // $s2
					// 		int colb; // $s1

						/* begin block 1.1.3.2.1.1 */
							// Start line: 156
							// Start offset: 0x80048250

							/* begin block 1.1.3.2.1.1.1 */
								// Start line: 156
								// Start offset: 0x80048250

								/* begin block 1.1.3.2.1.1.1.1 */
									// Start line: 156
									// Start offset: 0x80048250
								/* end block 1.1.3.2.1.1.1.1 */
								// End offset: 0x80048250
								// End Line: 156
							/* end block 1.1.3.2.1.1.1 */
							// End offset: 0x80048250
							// End Line: 156
						/* end block 1.1.3.2.1.1 */
						// End offset: 0x800482B0
						// End Line: 165

						/* begin block 1.1.3.2.1.2 */
							// Start line: 165
							// Start offset: 0x800482B0

							/* begin block 1.1.3.2.1.2.1 */
								// Start line: 165
								// Start offset: 0x800482B0
							/* end block 1.1.3.2.1.2.1 */
							// End offset: 0x800482B0
							// End Line: 165
						/* end block 1.1.3.2.1.2 */
						// End offset: 0x800482B0
						// End Line: 165
					/* end block 1.1.3.2.1 */
					// End offset: 0x80048380
					// End Line: 180
				/* end block 1.1.3.2 */
				// End offset: 0x80048380
				// End Line: 180

				/* begin block 1.1.3.3 */
					// Start line: 184
					// Start offset: 0x80048380

					/* begin block 1.1.3.3.1 */
						// Start line: 184
						// Start offset: 0x80048390

						/* begin block 1.1.3.3.1.1 */
							// Start line: 184
							// Start offset: 0x80048390
						/* end block 1.1.3.3.1.1 */
						// End offset: 0x80048390
						// End Line: 184
					/* end block 1.1.3.3.1 */
					// End offset: 0x80048390
					// End Line: 184
				/* end block 1.1.3.3 */
				// End offset: 0x800483B8
				// End Line: 187

				/* begin block 1.1.3.4 */
					// Start line: 194
					// Start offset: 0x800483B8

					/* begin block 1.1.3.4.1 */
						// Start line: 196
						// Start offset: 0x800483C8

						/* begin block 1.1.3.4.1.1 */
							// Start line: 197
							// Start offset: 0x800483C8

							/* begin block 1.1.3.4.1.1.1 */
								// Start line: 200
								// Start offset: 0x800483FC

								/* begin block 1.1.3.4.1.1.1.1 */
									// Start line: 200
									// Start offset: 0x800483FC

									/* begin block 1.1.3.4.1.1.1.1.1 */
										// Start line: 200
										// Start offset: 0x800483FC
									/* end block 1.1.3.4.1.1.1.1.1 */
									// End offset: 0x800483FC
									// End Line: 200
								/* end block 1.1.3.4.1.1.1.1 */
								// End offset: 0x800483FC
								// End Line: 200
							/* end block 1.1.3.4.1.1.1 */
							// End offset: 0x8004843C
							// End Line: 218

							/* begin block 1.1.3.4.1.1.2 */
								// Start line: 221
								// Start offset: 0x80048444

								/* begin block 1.1.3.4.1.1.2.1 */
									// Start line: 221
									// Start offset: 0x80048444

									/* begin block 1.1.3.4.1.1.2.1.1 */
										// Start line: 221
										// Start offset: 0x80048444
									/* end block 1.1.3.4.1.1.2.1.1 */
									// End offset: 0x80048444
									// End Line: 221
								/* end block 1.1.3.4.1.1.2.1 */
								// End offset: 0x80048444
								// End Line: 221

								/* begin block 1.1.3.4.1.1.2.2 */
									// Start line: 221
									// Start offset: 0x80048444

									/* begin block 1.1.3.4.1.1.2.2.1 */
										// Start line: 233
										// Start offset: 0x80048474

										/* begin block 1.1.3.4.1.1.2.2.1.1 */
											// Start line: 234
											// Start offset: 0x80048474

											/* begin block 1.1.3.4.1.1.2.2.1.1.1 */
												// Start line: 234
												// Start offset: 0x80048474

												/* begin block 1.1.3.4.1.1.2.2.1.1.1.1 */
													// Start line: 234
													// Start offset: 0x80048474
												/* end block 1.1.3.4.1.1.2.2.1.1.1.1 */
												// End offset: 0x80048474
												// End Line: 234
											/* end block 1.1.3.4.1.1.2.2.1.1.1 */
											// End offset: 0x80048474
											// End Line: 234

											/* begin block 1.1.3.4.1.1.2.2.1.1.2 */
												// Start line: 238
												// Start offset: 0x800484E0

												/* begin block 1.1.3.4.1.1.2.2.1.1.2.1 */
													// Start line: 239
													// Start offset: 0x800484E0

													/* begin block 1.1.3.4.1.1.2.2.1.1.2.1.1 */
														// Start line: 239
														// Start offset: 0x800484E0
													/* end block 1.1.3.4.1.1.2.2.1.1.2.1.1 */
													// End offset: 0x800484E0
													// End Line: 239
												/* end block 1.1.3.4.1.1.2.2.1.1.2.1 */
												// End offset: 0x800484E0
												// End Line: 239
											/* end block 1.1.3.4.1.1.2.2.1.1.2 */
											// End offset: 0x800484E0
											// End Line: 239
										/* end block 1.1.3.4.1.1.2.2.1.1 */
										// End offset: 0x800484E0
										// End Line: 239
									/* end block 1.1.3.4.1.1.2.2.1 */
									// End offset: 0x800484E0
									// End Line: 239
								/* end block 1.1.3.4.1.1.2.2 */
								// End offset: 0x800484E0
								// End Line: 239
							/* end block 1.1.3.4.1.1.2 */
							// End offset: 0x800484E0
							// End Line: 239
						/* end block 1.1.3.4.1.1 */
						// End offset: 0x800484E0
						// End Line: 239
					/* end block 1.1.3.4.1 */
					// End offset: 0x800484E0
					// End Line: 239

					/* begin block 1.1.3.4.2 */
						// Start line: 246
						// Start offset: 0x800484F0

						/* begin block 1.1.3.4.2.1 */
							// Start line: 248
							// Start offset: 0x800484F0

							/* begin block 1.1.3.4.2.1.1 */
								// Start line: 248
								// Start offset: 0x800484F0
							/* end block 1.1.3.4.2.1.1 */
							// End offset: 0x800484F0
							// End Line: 248
						/* end block 1.1.3.4.2.1 */
						// End offset: 0x800484F0
						// End Line: 248
					/* end block 1.1.3.4.2 */
					// End offset: 0x80048550
					// End Line: 251
				/* end block 1.1.3.4 */
				// End offset: 0x80048550
				// End Line: 251

				/* begin block 1.1.3.5 */
					// Start line: 261
					// Start offset: 0x800485C8

					/* begin block 1.1.3.5.1 */
						// Start line: 262
						// Start offset: 0x800485E0

						/* begin block 1.1.3.5.1.1 */
							// Start line: 262
							// Start offset: 0x800485E0

							/* begin block 1.1.3.5.1.1.1 */
								// Start line: 262
								// Start offset: 0x800485E0
							/* end block 1.1.3.5.1.1.1 */
							// End offset: 0x800485E0
							// End Line: 262
						/* end block 1.1.3.5.1.1 */
						// End offset: 0x800485E0
						// End Line: 262
					/* end block 1.1.3.5.1 */
					// End offset: 0x80048638
					// End Line: 264
				/* end block 1.1.3.5 */
				// End offset: 0x80048638
				// End Line: 264

				/* begin block 1.1.3.6 */
					// Start line: 270
					// Start offset: 0x80048638

					/* begin block 1.1.3.6.1 */
						// Start line: 271
						// Start offset: 0x8004864C

						/* begin block 1.1.3.6.1.1 */
							// Start line: 272
							// Start offset: 0x8004864C

							/* begin block 1.1.3.6.1.1.1 */
								// Start line: 273
								// Start offset: 0x8004866C

								/* begin block 1.1.3.6.1.1.1.1 */
									// Start line: 273
									// Start offset: 0x8004866C

									/* begin block 1.1.3.6.1.1.1.1.1 */
										// Start line: 273
										// Start offset: 0x8004866C
									/* end block 1.1.3.6.1.1.1.1.1 */
									// End offset: 0x8004866C
									// End Line: 273
								/* end block 1.1.3.6.1.1.1.1 */
								// End offset: 0x8004866C
								// End Line: 273

								/* begin block 1.1.3.6.1.1.1.2 */
									// Start line: 279
									// Start offset: 0x800486D0

									/* begin block 1.1.3.6.1.1.1.2.1 */
										// Start line: 279
										// Start offset: 0x800486D0
									/* end block 1.1.3.6.1.1.1.2.1 */
									// End offset: 0x800486D0
									// End Line: 279
								/* end block 1.1.3.6.1.1.1.2 */
								// End offset: 0x800486D0
								// End Line: 279
							/* end block 1.1.3.6.1.1.1 */
							// End offset: 0x8004874C
							// End Line: 284
						/* end block 1.1.3.6.1.1 */
						// End offset: 0x8004874C
						// End Line: 284
					/* end block 1.1.3.6.1 */
					// End offset: 0x8004874C
					// End Line: 284
				/* end block 1.1.3.6 */
				// End offset: 0x8004874C
				// End Line: 284
			/* end block 1.1.3 */
			// End offset: 0x8004874C
			// End Line: 284
		/* end block 1.1 */
		// End offset: 0x8004874C
		// End Line: 284

		/* begin block 1.2 */
			// Start line: 314
			// Start offset: 0x800487C8

			/* begin block 1.2.1 */
				// Start line: 321
				// Start offset: 0x800487F8

				/* begin block 1.2.1.1 */
					// Start line: 322
					// Start offset: 0x800487F8
					// Variables:
				// 		int i; // $s0
				/* end block 1.2.1.1 */
				// End offset: 0x80048858
				// End Line: 329

				/* begin block 1.2.1.2 */
					// Start line: 330
					// Start offset: 0x80048858
					// Variables:
				// 		int i; // $s0
				/* end block 1.2.1.2 */
				// End offset: 0x800488BC
				// End Line: 337
			/* end block 1.2.1 */
			// End offset: 0x800488BC
			// End Line: 337

			/* begin block 1.2.2 */
				// Start line: 340
				// Start offset: 0x800488C4

				/* begin block 1.2.2.1 */
					// Start line: 341
					// Start offset: 0x800488C4
					// Variables:
				// 		int i; // $s0
				/* end block 1.2.2.1 */
				// End offset: 0x80048928
				// End Line: 348
			/* end block 1.2.2 */
			// End offset: 0x80048928
			// End Line: 348
		/* end block 1.2 */
		// End offset: 0x80048928
		// End Line: 348
	/* end block 1 */
	// End offset: 0x80048990
	// End Line: 353

	/* begin block 2 */
		// Start line: 270
	/* end block 2 */
	// End Line: 271

	/* begin block 3 */
		// Start line: 274
	/* end block 3 */
	// End Line: 275

	/* begin block 4 */
		// Start line: 274
	/* end block 4 */
	// End Line: 275

void DrawBackground__15tScreenCongrats(tScreenCongrats *this)

{
  bool bVar1;
  uchar *puVar2;
  int x;
  int y;
  uchar *puVar3;
  tScreenCongratsMessage tVar4;
  undefined **col1;
  int colfore;
  int amount;
  float camerax;
  float cameray;
  int colback;
  tDrawShapeExtended tStack96;
  tDrawShapeExtended tStack72;
  tDrawShapeExtended tStack48;
  
  amount = 0;
  if ((this->tScreen).fTransitionOff != (void *)0x0) {
    amount = (int)(this->tScreen).fScreenFadeVal;
  }
  tStack96.custom_shapes = (this->tScreen).fSwapShapes.fShapes;
  tStack72.custom_shapes = (this->tScreen).fSwapShapes.fShapes;
  colfore = *(int *)((this->tScreen)._vf + 2);
  PTR_80052940 = PTR_80052940 + 3;
  (**(code **)(colfore + 0x5c))
            ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(colfore + 0x58));
  tVar4 = this->congratsMessage;
  if ((((tVar4 == 3) && (this->framenum == -1)) ||
      ((*(int *)&(this->fCarInfo).fCarIndex == 0 && (tVar4 == 3)))) ||
     ((tVar4 == 3 && ((-1 < R3DCar_aSyncLoading || ((int)(ticks + -(int)this->fGotCar) < 0x3c))))))
  {
    *(uchar **)&this->framenum = ticks;
  }
  else {
    if (this->framenum == -1) {
      *(uchar **)&this->framenum = ticks;
    }
    if (this->TotalCash != -1) {
      if ((1000 < (int)(ticks + -this->framenum)) || (this->fCountedDown != (void *)0x0)) {
        if (this->TotalCash != 0) {
          AudioCmn_PlayFESFX__Fi(0x15);
        }
        colfore = this->TotalCash - (int)this->fStartCountdownNOW;
        this->TotalCash = colfore;
        if (colfore < 0) {
          this->TotalCash = 0;
          this->fEnterTick = 1;
        }
      }
      colfore = CalcFadeVal__Fii(kRGBVals[(uint)DAT_800515ff],(int)(this->tScreen).fScreenFadeVal);
      colback = CalcFadeVal__Fii((int)&DAT_00232323,(int)(this->tScreen).fScreenFadeVal);
      FETextRender_MenuTextFade__Fis14tMenuTextState13tMenuTextType
                ((int)(this->tScreen).fScreenFadeVal,0x317,textState_Hilighted,textType_TrackRecords
                );
      x = TextSys_WordX__Fi(0x318);
      y = TextSys_WordY__Fi(0x318);
      DrawMoney__Fiiilii(x,y,6,this->TotalCash,colfore,colback);
      FETextRender_MenuTextFade__Fis14tMenuTextState13tMenuTextType
                ((int)(this->tScreen).fScreenFadeVal,0x316,textState_Hilighted,textType_TrackRecords
                );
      x = TextSys_WordX__Fi(0x319);
      y = TextSys_WordY__Fi(0x319);
      DrawMoney__Fiiilii(x,y,9,this->fCarPlayer - this->TotalCash,colfore,colback);
    }
    if ((this->fCountSpeed != 0) && (0x80 < (int)(ticks + -this->framenum))) {
      FeAudio_AsyncPlaySpeech__Fii(2,this->fCountSpeed);
      this->fCountSpeed = 0;
    }
    bVar1 = false;
    if (*(int *)((this->tScreen)._vf + 6) == 0) {
      tStack96.tint[0] =
           (undefined *)CalcFadeVal__Fii((int)&DAT_0000bebe,(int)(this->tScreen).fScreenFadeVal);
      tStack72.tint[0] = CalcFadeVal__Fii(0x808080,amount);
      if (this->starttick == 0) {
        amount = (int)(ticks + -this->framenum + ((uint)(ticks + -this->framenum) >> 0x1f)) >> 1;
        this->CashAwarded = amount;
        puVar3 = ticks;
        if (0x13 < amount) {
          bVar1 = true;
          amount = this->framenum;
          this->CashAwarded = 0x14;
          puVar2 = ticks;
          if (amount < 0) {
            amount = amount + 3;
          }
          if ((int)(puVar3 + -(amount >> 2)) % 0x5dc < 0x2d) {
            this->starttick = 1;
            *(uchar **)&this->InExtraSpin = puVar2;
          }
        }
      }
      else {
        amount = (int)(ticks + -(int)this->InExtraSpin) / 6 + 0x15;
        this->CashAwarded = amount;
        bVar1 = true;
        if (0x29 < amount) {
          this->starttick = 0;
          this->CashAwarded = 0x14;
        }
      }
    }
    else {
      tStack96.tint[0] = (undefined *)CalcFadeVal__Fii((int)&DAT_00646464,amount);
      tStack72.tint[0] = CalcFadeVal__Fii(0x808080,amount);
      puVar3 = ticks + -this->framenum;
      if ((int)puVar3 < 0) {
        puVar3 = puVar3 + 3;
      }
      this->CashAwarded = (int)puVar3 >> 2;
      if (0x14 < (int)puVar3 >> 2) {
        this->CashAwarded = 0x14;
      }
    }
    if (bVar1) {
      amount = 0;
      if (*(int *)((this->tScreen)._vf + 6) == 1) {
        amount = 10;
      }
      ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended
                (this->CashAwarded,0x410,0,amount,0,0,&tStack96);
    }
    else {
      amount = 0;
      if (*(int *)((this->tScreen)._vf + 6) == 1) {
        amount = 10;
      }
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                (this->CashAwarded,0x410,0,amount,0,0,&tStack96);
    }
    if (1 < this->congratsMessage + 0xfffffffd) {
      colfore = ((int)ticks / 6 + ((int)ticks >> 0x1f) >> 1) - ((int)ticks >> 0x1f);
      amount = colfore;
      if (colfore < 0) {
        amount = colfore + 0x1f;
      }
      ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended
                (colfore + (amount >> 5) * -0x20,0x610,0x46,0xf,0,0,&tStack72);
    }
    if (2 < this->congratsMessage) {
      if (this->trophy == kTrophySilver) {
        amount = this->fNumSpinShapes;
        if (amount == 0) {
          trap(0x1c00);
        }
        if ((amount == -1) && ((int)ticks >> 3 == -0x80000000)) {
          trap(0x1800);
        }
        ScaleShapeExtended__FiiiiiiP18tDrawShapeExtended
                  (((int)ticks >> 3) % amount,0x610,0x29,0xbe,0,0,&tStack72);
      }
      else {
        if (this->trophy == kTrophyBronze) {
          tStack96.tint[0] = &DAT_00551e00;
          amount = this->fNumSpinShapes;
          if (amount == 0) {
            trap(0x1c00);
          }
          if ((amount == -1) && ((int)ticks / 0x14 == -0x80000000)) {
            trap(0x1800);
          }
          DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                    (((int)ticks / 0x14) % amount,0x610,-0xc1,0x56,0,0,&tStack96);
        }
      }
    }
  }
  if (*(int *)((this->tScreen)._vf + 6) == 0) {
    tVar4 = this->congratsMessage;
    if (tVar4 == kScreenCongrats_Eliminated) {
      col1 = (undefined **)0x212121;
      goto LAB_800487b4;
    }
    if ((int)tVar4 < 2) {
      col1 = &PTR_00030022;
      if (tVar4 != kScreenCongrats_Congrats) goto LAB_800487b4;
    }
    else {
      if (tVar4 == 2) {
        col1 = (undefined **)0x3044;
        goto LAB_800487b4;
      }
      if (tVar4 != 3) goto LAB_800487b0;
    }
    col1 = (undefined **)0x3e44;
  }
  else {
LAB_800487b0:
    col1 = &PTR_00030022;
  }
LAB_800487b4:
  amount = 0x15;
  if (*(int *)((this->tScreen)._vf + 6) == 0) {
    amount = 0x2a;
  }
  tStack48.tint[0] = CalcFadeVal__Fii((int)col1,(int)(this->tScreen).fScreenFadeVal);
  if ((*(int *)((this->tScreen)._vf + 6) == 0) && (colfore = 1, this->congratsMessage != 3)) {
    colback = 0;
    do {
      if (colfore != (colback - (colfore >> 0x1f)) * 3) {
        DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                  (amount,0x410,colfore << 1,0,(int)(this->tScreen).fScreenFadeVal,1,&tStack48);
      }
      colfore = colfore + 1;
      colback = colfore / 3 + (colfore >> 0x1f);
    } while (colfore < 0x1e);
    colfore = 0x22;
    colback = 0xb;
    do {
      if (colfore != (colback - (colfore >> 0x1f)) * 3) {
        DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                  (amount,0x410,colfore << 1,0,(int)(this->tScreen).fScreenFadeVal,1,&tStack48);
      }
      colfore = colfore + 1;
      colback = colfore / 3 + (colfore >> 0x1f);
    } while (colfore < 0x3f);
  }
  else {
    colfore = 7;
    colback = 2;
    do {
      if (colfore != (colback - (colfore >> 0x1f)) * 3) {
        DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                  (amount,0x410,colfore << 1,0,(int)(this->tScreen).fScreenFadeVal,1,&tStack48);
      }
      colfore = colfore + 1;
      colback = colfore / 3 + (colfore >> 0x1f);
    } while (colfore < 0x28);
  }
  if ((this->congratsMessage == 3) && (*(int *)&(this->fCarInfo).fCarIndex != 0)) {
    showRoomFlag = (void *)0x0;
    DrawCar__FR8tCarInfossffcbUl7tPlayer
              ((tCarInfo *)&this->InExtraSpinTick,*(short *)&this->fSpeechToPlay,
               *(short *)((int)&this->fSpeechToPlay + 2),camerax,cameray,*(int *)&this->fCarX,
               (void *)this->fCarCX,0x80,kPlayerTwo);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawForeground__15tScreenCongrats(struct tScreenCongrats *this /*$a0*/)
 // line 360, offset 0x800489b0
	/* begin block 1 */
		// Start line: 361
		// Start offset: 0x800489B0
	/* end block 1 */
	// End offset: 0x800489B0
	// End Line: 361

	/* begin block 2 */
		// Start line: 754
	/* end block 2 */
	// End Line: 755

	/* begin block 3 */
		// Start line: 762
	/* end block 3 */
	// End Line: 763

	/* begin block 4 */
		// Start line: 762
	/* end block 4 */
	// End Line: 763

	/* begin block 5 */
		// Start line: 764
	/* end block 5 */
	// End Line: 765

void DrawForeground__15tScreenCongrats(tScreenCongrats *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalculatePrizes__15tScreenCongrats(struct tScreenCongrats *this /*$a0*/)
 // line 365, offset 0x800489b8
	/* begin block 1 */
		// Start line: 366
		// Start offset: 0x800489B8
	/* end block 1 */
	// End offset: 0x80048A24
	// End Line: 381

	/* begin block 2 */
		// Start line: 769
	/* end block 2 */
	// End Line: 770

	/* begin block 3 */
		// Start line: 772
	/* end block 3 */
	// End Line: 773

	/* begin block 4 */
		// Start line: 772
	/* end block 4 */
	// End Line: 773

	/* begin block 5 */
		// Start line: 783
	/* end block 5 */
	// End Line: 784

void CalculatePrizes__15tScreenCongrats(tScreenCongrats *this)

{
  int iVar1;
  
  this->congratsMessage = 4;
  this->TotalCash = -1;
  *(undefined2 *)&this->fSpeechToPlay = 0x116;
  *(undefined4 *)((this->tScreen)._vf + 6) = 0;
  *(undefined2 *)((int)&this->fSpeechToPlay + 2) = 0x3f;
  this->fCarCX = -7.40000010;
  iVar1 = *(int *)((this->tScreen)._vf + 6);
  this->trophy = kTrophyGold;
  this->fNumSmallSpinShapes = 0;
  this->fCarPlayer = 0;
  *(undefined4 *)&this->fCarX = 0x40800000;
  if (iVar1 == 1) {
    *(undefined2 *)&this->fSpeechToPlay = 0x120;
    *(undefined2 *)((int)&this->fSpeechToPlay + 2) = 0x49;
    this->fCarCX = -8.19999981;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__15tScreenCongrats(struct tScreenCongrats *this /*$s0*/)
 // line 385, offset 0x80048a2c
	/* begin block 1 */
		// Start line: 386
		// Start offset: 0x80048A2C

		/* begin block 1.1 */
			// Start line: 386
			// Start offset: 0x80048A2C

			/* begin block 1.1.1 */
				// Start line: 386
				// Start offset: 0x80048A2C
			/* end block 1.1.1 */
			// End offset: 0x80048A2C
			// End Line: 386
		/* end block 1.1 */
		// End offset: 0x80048A2C
		// End Line: 386
	/* end block 1 */
	// End offset: 0x80048AD8
	// End Line: 416

	/* begin block 2 */
		// Start line: 832
	/* end block 2 */
	// End Line: 833

	/* begin block 3 */
		// Start line: 837
	/* end block 3 */
	// End Line: 838

	/* begin block 4 */
		// Start line: 837
	/* end block 4 */
	// End Line: 838

void Initialize__15tScreenCongrats(tScreenCongrats *this)

{
  uchar *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  
  puVar1 = ticks;
  this->fCountSpeed = 0;
  this->framenum = -1;
  this->CashAwarded = -1;
  this->starttick = 0;
  *(uchar **)&this->fGotCar = puVar1;
  SetLicensePlate__Fv();
  iVar2 = *(int *)((this->tScreen)._vf + 2);
  (**(code **)(iVar2 + 0x54))
            ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar2 + 0x50));
  iVar2 = *(int *)((this->tScreen)._vf + 2);
  uVar3 = (**(code **)(iVar2 + 100))
                    ((int)&(this->tScreen).fPermShapes.fShapes + (int)*(short *)(iVar2 + 0x60),
                     &this->InExtraSpinTick);
  iVar2 = this->TotalCash;
  *(undefined4 *)&(this->fCarInfo).fCarIndex = uVar3;
  if (iVar2 < 1) {
    this->fEnterTick = 1;
    *(undefined **)&this->fCountedDown = &DAT_00000001;
    pvVar4 = (void *)0x3e8;
  }
  else {
    this->fEnterTick = 0;
    this->fCountedDown = (void *)0x0;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x3f;
    }
    pvVar4 = (void *)(iVar2 >> 6);
  }
  this->fStartCountdownNOW = pvVar4;
  Initialize__7tScreen((tScreen *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__15tScreenCongrats7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenCongrats *this /*$a0*/, enum tPlayer p /*$a1*/, enum tInputKeyType *keyval /*$a2*/, struct tMenuCommand *c /*$a3*/)
 // line 423, offset 0x80048af0
	/* begin block 1 */
		// Start line: 424
		// Start offset: 0x80048AF0

		/* begin block 1.1 */
			// Start line: 425
			// Start offset: 0x80048AF0

			/* begin block 1.1.1 */
				// Start line: 426
				// Start offset: 0x80048B00

				/* begin block 1.1.1.1 */
					// Start line: 427
					// Start offset: 0x80048B00

					/* begin block 1.1.1.1.1 */
						// Start line: 427
						// Start offset: 0x80048B00

						/* begin block 1.1.1.1.1.1 */
							// Start line: 427
							// Start offset: 0x80048B00
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80048B00
						// End Line: 427
					/* end block 1.1.1.1.1 */
					// End offset: 0x80048B00
					// End Line: 427

					/* begin block 1.1.1.1.2 */
						// Start line: 427
						// Start offset: 0x80048B10

						/* begin block 1.1.1.1.2.1 */
							// Start line: 427
							// Start offset: 0x80048B10
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x80048B10
						// End Line: 427
					/* end block 1.1.1.1.2 */
					// End offset: 0x80048B10
					// End Line: 427
				/* end block 1.1.1.1 */
				// End offset: 0x80048B40
				// End Line: 428
			/* end block 1.1.1 */
			// End offset: 0x80048B40
			// End Line: 428
		/* end block 1.1 */
		// End offset: 0x80048B40
		// End Line: 428
	/* end block 1 */
	// End offset: 0x80048B40
	// End Line: 428

	/* begin block 2 */
		// Start line: 915
	/* end block 2 */
	// End Line: 916

	/* begin block 3 */
		// Start line: 923
	/* end block 3 */
	// End Line: 924

	/* begin block 4 */
		// Start line: 923
	/* end block 4 */
	// End Line: 924

	/* begin block 5 */
		// Start line: 924
	/* end block 5 */
	// End Line: 925

	/* begin block 6 */
		// Start line: 924
	/* end block 6 */
	// End Line: 925

void ProcessInput__15tScreenCongrats7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tScreenCongrats *this,tPlayer p,tInputKeyType *keyval,tMenuCommand *c)

{
  bool bVar1;
  
  if (*keyval != kInput_KeyType_Circle) {
    bVar1 = false;
    if ((ginfo._16_2_ != 0) || ((int)(ticks + -this->framenum) < 0x96)) {
      bVar1 = true;
    }
    if (bVar1) {
      *keyval = kInput_KeyType_AlreadyProcessed;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCongratsMessage__23tScreenPinkSlipCongrats(struct tScreenPinkSlipCongrats *this /*$s3*/)
 // line 432, offset 0x80048b48
	/* begin block 1 */
		// Start line: 433
		// Start offset: 0x80048B48
		// Variables:
	// 		struct RECT r; // stack offset -288
	// 		char buffer[250]; // stack offset -280
	/* end block 1 */
	// End offset: 0x80048C34
	// End Line: 453

	/* begin block 2 */
		// Start line: 936
	/* end block 2 */
	// End Line: 937

	/* begin block 3 */
		// Start line: 941
	/* end block 3 */
	// End Line: 942

	/* begin block 4 */
		// Start line: 941
	/* end block 4 */
	// End Line: 942

void DrawCongratsMessage__23tScreenPinkSlipCongrats(tScreenPinkSlipCongrats *this)

{
  char *__format;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  RECT local_120;
  char acStack280 [256];
  
  local_120.x = 0x29;
  local_120.y = 0x3c;
  local_120.w = 0x1a4;
  local_120.h = 200;
  if ((uint)(byte)frontEnd.language - 2 < 2) {
    __format = TextSys_Word__Fi(0x275);
    pcVar1 = PlayerName__Fi((int)*(short *)&(this->tScreenCongrats).fCarCY);
    pcVar2 = TextSys_Word__Fi((int)*(char *)&(this->tScreenCongrats).InExtraSpinTick + 0x121);
    pcVar3 = PlayerName__Fi(1 - (int)*(short *)&(this->tScreenCongrats).fCarCY);
  }
  else {
    __format = TextSys_Word__Fi(0x275);
    pcVar1 = PlayerName__Fi((int)*(short *)&(this->tScreenCongrats).fCarCY);
    pcVar2 = PlayerName__Fi(1 - (int)*(short *)&(this->tScreenCongrats).fCarCY);
    pcVar3 = TextSys_Word__Fi((int)*(char *)&(this->tScreenCongrats).InExtraSpinTick + 0x121);
  }
  sprintf(acStack280,__format,pcVar1,pcVar2,pcVar3,
          (int)*(short *)&(this->tScreenCongrats).fCarCY + 1);
  FETextRender_WordWrapText__FPcR4RECT14tMenuTextState13tMenuTextType
            (acStack280,&local_120,textState_Selected,textType_PostGame);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetCar__23tScreenPinkSlipCongratsR8tCarInfo(struct tScreenPinkSlipCongrats *this /*$a0*/, struct tCarInfo *carInfo /*$s0*/)
 // line 456, offset 0x80048c64
	/* begin block 1 */
		// Start line: 457
		// Start offset: 0x80048C64
	/* end block 1 */
	// End offset: 0x80048C64
	// End Line: 457

	/* begin block 2 */
		// Start line: 994
	/* end block 2 */
	// End Line: 995

	/* begin block 3 */
		// Start line: 998
	/* end block 3 */
	// End Line: 999

	/* begin block 4 */
		// Start line: 998
	/* end block 4 */
	// End Line: 999

void * GetCar__23tScreenPinkSlipCongratsR8tCarInfo(tScreenPinkSlipCongrats *this,tCarInfo *carInfo)

{
  GetPinkSlipsCar__11tCarManagersR8tCarInfos
            (&carManager,
             (ushort)*(byte *)((int)&frontEnd +
                              (0x126 - (int)*(short *)&(this->tScreenCongrats).fCarCY)),carInfo,
             (short)((1 - (uint)*(ushort *)&(this->tScreenCongrats).fCarCY) * 0x10000 >> 0x10));
  carInfo->fColor = carInfo->fColorOrder[(uint)carInfo->fColor];
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalculatePrizes__23tScreenPinkSlipCongrats(struct tScreenPinkSlipCongrats *this /*$s3*/)
 // line 463, offset 0x80048cdc
	/* begin block 1 */
		// Start line: 464
		// Start offset: 0x80048CDC
		// Variables:
	// 		struct tCarInfo carinfo; // stack offset -232

		/* begin block 1.1 */
			// Start line: 464
			// Start offset: 0x80048CDC

			/* begin block 1.1.1 */
				// Start line: 464
				// Start offset: 0x80048CDC
			/* end block 1.1.1 */
			// End offset: 0x80048CDC
			// End Line: 464
		/* end block 1.1 */
		// End offset: 0x80048CDC
		// End Line: 464
	/* end block 1 */
	// End offset: 0x80048DAC
	// End Line: 486

	/* begin block 2 */
		// Start line: 1009
	/* end block 2 */
	// End Line: 1010

	/* begin block 3 */
		// Start line: 1013
	/* end block 3 */
	// End Line: 1014

	/* begin block 4 */
		// Start line: 1013
	/* end block 4 */
	// End Line: 1014

void CalculatePrizes__23tScreenPinkSlipCongrats(tScreenPinkSlipCongrats *this)

{
  short sVar1;
  short sVar2;
  int player;
  undefined auStack232 [193];
  char local_27;
  
  sVar1 = *(short *)&(this->tScreenCongrats).fCarCY;
  (this->tScreenCongrats).congratsMessage = 3;
  (this->tScreenCongrats).trophy = kTrophyBronze;
  sVar2 = *(short *)&(this->tScreenCongrats).fCarCY;
  (this->tScreenCongrats).fCarPlayer = 0;
  (this->tScreenCongrats).TotalCash = -1;
  *(undefined4 *)((this->tScreenCongrats).tScreen._vf + 6) = 0;
  player = 1 - (int)sVar1;
  (this->tScreenCongrats).fNumSmallSpinShapes = 1 - (int)sVar2;
  CarIO_CleanUpLicense__Fi(player);
  CarIO_CreateLicense__FPcii(frontEnd.licensePlate + (1 - player) * 8,0,player);
  player = *(int *)((this->tScreenCongrats).tScreen._vf + 2);
  (**(code **)(player + 100))
            ((int)&(this->tScreenCongrats).tScreen.fPermShapes.fShapes +
             (int)*(short *)(player + 0x60),auStack232);
  if ((int)local_27 == -1) {
    (this->tScreenCongrats).fCountSpeed = (int)*(short *)&(this->tScreenCongrats).fCarCY + 0x17;
  }
  else {
    (this->tScreenCongrats).fCountSpeed =
         (int)local_27 * 2 + (int)*(short *)&(this->tScreenCongrats).fCarCY + 0x13;
  }
  *(undefined2 *)&(this->tScreenCongrats).fSpeechToPlay = 0x116;
  *(undefined2 *)((int)&(this->tScreenCongrats).fSpeechToPlay + 2) = 0x4b;
  *(undefined4 *)&(this->tScreenCongrats).fCarX = 0x40800000;
  (this->tScreenCongrats).fCarCX = -7.40000010;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__23tScreenPinkSlipCongrats(struct tScreenPinkSlipCongrats *this /*$a0*/)
 // line 491, offset 0x80048dec
	/* begin block 1 */
		// Start line: 492
		// Start offset: 0x80048DEC
	/* end block 1 */
	// End offset: 0x80048E2C
	// End Line: 501

	/* begin block 2 */
		// Start line: 1078
	/* end block 2 */
	// End Line: 1079

	/* begin block 3 */
		// Start line: 1083
	/* end block 3 */
	// End Line: 1084

	/* begin block 4 */
		// Start line: 1083
	/* end block 4 */
	// End Line: 1084

void Initialize__23tScreenPinkSlipCongrats(tScreenPinkSlipCongrats *this)

{
  *(undefined2 *)&(this->tScreenCongrats).fCarCY = 0xffff;
  if ((byte)frontEnd.pinkSlipsWins[0] < (byte)(((byte)frontEnd.pinkSlipsNumTracks >> 1) + 1)) {
    *(undefined2 *)&(this->tScreenCongrats).fCarCY = 1;
  }
  else {
    *(undefined2 *)&(this->tScreenCongrats).fCarCY = 0;
  }
  Initialize__15tScreenCongrats((tScreenCongrats *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__23tScreenPinkSlipCongrats(struct tScreenPinkSlipCongrats *this /*$s0*/)
 // line 505, offset 0x80048e44
	/* begin block 1 */
		// Start line: 506
		// Start offset: 0x80048E44
	/* end block 1 */
	// End offset: 0x80048E44
	// End Line: 506

	/* begin block 2 */
		// Start line: 1111
	/* end block 2 */
	// End Line: 1112

	/* begin block 3 */
		// Start line: 1116
	/* end block 3 */
	// End Line: 1117

	/* begin block 4 */
		// Start line: 1116
	/* end block 4 */
	// End Line: 1117

void Cleanup__23tScreenPinkSlipCongrats(tScreenPinkSlipCongrats *this)

{
  CleanupSpinningCarsMenu__Fv();
  Cleanup__7tScreen((tScreen *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ProcessInput__23tScreenTournamentTrophy7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenTournamentTrophy *this /*$a0*/, enum tPlayer p /*$a1*/, enum tInputKeyType *keyval /*$a2*/, struct tMenuCommand *c /*$a3*/)
 // line 518, offset 0x80048e70
	/* begin block 1 */
		// Start line: 519
		// Start offset: 0x80048E70
	/* end block 1 */
	// End offset: 0x80048EA0
	// End Line: 528

	/* begin block 2 */
		// Start line: 1133
	/* end block 2 */
	// End Line: 1134

	/* begin block 3 */
		// Start line: 1142
	/* end block 3 */
	// End Line: 1143

	/* begin block 4 */
		// Start line: 1142
	/* end block 4 */
	// End Line: 1143

void ProcessInput__23tScreenTournamentTrophy7tPlayerR13tInputKeyTypeR12tMenuCommand
               (tScreenTournamentTrophy *this,tPlayer p,tInputKeyType *keyval,tMenuCommand *c)

{
  if ((*keyval == kInput_KeyType_Cross) && ((this->tScreenCongrats).fEnterTick == 0)) {
    *keyval = kInput_KeyType_AlreadyProcessed;
    *(undefined **)&(this->tScreenCongrats).fCountedDown = &DAT_00000001;
  }
  ProcessInput__15tScreenCongrats7tPlayerR13tInputKeyTypeR12tMenuCommand
            ((tScreenCongrats *)this,p,keyval,c);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetCar__23tScreenTournamentTrophyR8tCarInfo(struct tScreenTournamentTrophy *this /*$a0*/, struct tCarInfo *carInfo /*$s0*/)
 // line 531, offset 0x80048eb8
	/* begin block 1 */
		// Start line: 532
		// Start offset: 0x80048EB8

		/* begin block 1.1 */
			// Start line: 532
			// Start offset: 0x80048EB8

			/* begin block 1.1.1 */
				// Start line: 534
				// Start offset: 0x80048ED4
				// Variables:
			// 		struct tAwardInformation tInfo; // stack offset -80
			/* end block 1.1.1 */
			// End offset: 0x80048ED4
			// End Line: 536
		/* end block 1.1 */
		// End offset: 0x80048F50
		// End Line: 549
	/* end block 1 */
	// End offset: 0x80048F50
	// End Line: 551

	/* begin block 2 */
		// Start line: 1164
	/* end block 2 */
	// End Line: 1165

	/* begin block 3 */
		// Start line: 1168
	/* end block 3 */
	// End Line: 1169

	/* begin block 4 */
		// Start line: 1168
	/* end block 4 */
	// End Line: 1169

void * GetCar__23tScreenTournamentTrophyR8tCarInfo(tScreenTournamentTrophy *this,tCarInfo *carInfo)

{
  tCarInfo *ptVar1;
  undefined auStack80 [40];
  short local_28;
  uchar local_24;
  uchar local_23;
  
  if (*(int *)((this->tScreenCongrats).tScreen._vf + 6) == 0) {
    GetAwardInformation__18tTournamentManagerR17tAwardInformation
              (&tournamentManager,(tAwardInformation *)auStack80);
    ptVar1 = GetCarFromID__11tCarManagers(&carManager,local_28);
    blockmove((undefined4 *)ptVar1,(undefined4 *)carInfo,0xcc);
    carInfo->fUpgrades = local_23;
    carInfo->fColor = local_24;
  }
  else {
    GetGarageCar__11tCarManagersR8tCarInfos
              (&carManager,(ushort)(byte)frontEnd.garageCar[0],carInfo,0);
    carInfo->fColor = carInfo->fColorOrder[(uint)carInfo->fColor];
  }
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCongratsMessage__23tScreenTournamentTrophy(struct tScreenTournamentTrophy *this /*$s4*/)
 // line 555, offset 0x80048f64
	/* begin block 1 */
		// Start line: 556
		// Start offset: 0x80048F64
		// Variables:
	// 		struct RECT r; // stack offset -1432
	// 		struct tAwardInformation tInfo; // stack offset -1424
	// 		char buffer1[500]; // stack offset -1352
	// 		char buffer2[500]; // stack offset -848

		/* begin block 1.1 */
			// Start line: 556
			// Start offset: 0x80048F64

			/* begin block 1.1.1 */
				// Start line: 568
				// Start offset: 0x80048FB4
				// Variables:
			// 		int firstmessage; // $s2
			// 		int secondmessage; // $s3
			// 		struct tTourneyInfo *tourneyInfo; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 569
					// Start offset: 0x80048FB4

					/* begin block 1.1.1.1.1 */
						// Start line: 569
						// Start offset: 0x80048FB4
					/* end block 1.1.1.1.1 */
					// End offset: 0x80048FB4
					// End Line: 569
				/* end block 1.1.1.1 */
				// End offset: 0x80048FB4
				// End Line: 569

				/* begin block 1.1.1.2 */
					// Start line: 569
					// Start offset: 0x80048FB4

					/* begin block 1.1.1.2.1 */
						// Start line: 569
						// Start offset: 0x80048FB4

						/* begin block 1.1.1.2.1.1 */
							// Start line: 569
							// Start offset: 0x80048FB4
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x80048FB4
						// End Line: 569
					/* end block 1.1.1.2.1 */
					// End offset: 0x80048FB4
					// End Line: 569

					/* begin block 1.1.1.2.2 */
						// Start line: 576
						// Start offset: 0x80049010
						// Variables:
					// 		int placeoffset; // $s0
					/* end block 1.1.1.2.2 */
					// End offset: 0x80049084
					// End Line: 593
				/* end block 1.1.1.2 */
				// End offset: 0x80049084
				// End Line: 593

				/* begin block 1.1.1.3 */
					// Start line: 596
					// Start offset: 0x80049084

					/* begin block 1.1.1.3.1 */
						// Start line: 598
						// Start offset: 0x80049094

						/* begin block 1.1.1.3.1.1 */
							// Start line: 598
							// Start offset: 0x80049094
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x80049094
						// End Line: 598
					/* end block 1.1.1.3.1 */
					// End offset: 0x80049094
					// End Line: 598
				/* end block 1.1.1.3 */
				// End offset: 0x800490F4
				// End Line: 608

				/* begin block 1.1.1.4 */
					// Start line: 625
					// Start offset: 0x80049154

					/* begin block 1.1.1.4.1 */
						// Start line: 627
						// Start offset: 0x80049174
						// Variables:
					// 		char buffer[256]; // stack offset -344
					// 		char money[64]; // stack offset -88
					/* end block 1.1.1.4.1 */
					// End offset: 0x80049174
					// End Line: 631
				/* end block 1.1.1.4 */
				// End offset: 0x80049174
				// End Line: 631
			/* end block 1.1.1 */
			// End offset: 0x80049174
			// End Line: 631

			/* begin block 1.1.2 */
				// Start line: 640
				// Start offset: 0x800491DC
				// Variables:
			// 		int yyy; // $s0
			/* end block 1.1.2 */
			// End offset: 0x8004921C
			// End Line: 648
		/* end block 1.1 */
		// End offset: 0x8004921C
		// End Line: 648
	/* end block 1 */
	// End offset: 0x8004921C
	// End Line: 648

	/* begin block 2 */
		// Start line: 1211
	/* end block 2 */
	// End Line: 1212

	/* begin block 3 */
		// Start line: 1216
	/* end block 3 */
	// End Line: 1217

	/* begin block 4 */
		// Start line: 1216
	/* end block 4 */
	// End Line: 1217

void DrawCongratsMessage__23tScreenTournamentTrophy(tScreenTournamentTrophy *this)

{
  char *sMenuText;
  char *__s;
  tScreenCongratsMessage tVar1;
  int iVar2;
  tTourneyInfo *ptVar3;
  int wordnum;
  int wordnum_00;
  RECT local_598;
  tAwardInformation tStack1424;
  char acStack1352 [504];
  char acStack848 [504];
  char acStack344 [256];
  char acStack88 [64];
  
  local_598.x = 0x29;
  local_598.y = 0x3c;
  local_598.w = 200;
  local_598.h = 400;
  if (*(int *)((this->tScreenCongrats).tScreen._vf + 6) != 0) {
    wordnum = TextSys_WordY__Fi(800);
    sMenuText = TextSys_Word__Fi(800);
    FETextRender_FullTextRGB__FPcssics
              (sMenuText,0x120,(short)((uint)((wordnum + -10) * 0x10000) >> 0x10),(int)&DAT_00414141
               ,3,2);
    return;
  }
  wordnum = 0;
  wordnum_00 = 0;
  ptVar3 = (tournamentManager.fDefinition)->fTournaments +
           (uint)(tournamentManager.fDefinition)->fTiers[tournamentManager.fTier].fTournOffset +
           tournamentManager.fTournament;
  if (tournamentManager.fPrevBestPlacement < '\x04') goto LAB_80049084;
  tVar1 = (this->tScreenCongrats).congratsMessage;
  wordnum = (int)ptVar3->fTournamentID + 0x3b3;
  if (tVar1 == kScreenCongrats_Eliminated) {
    iVar2 = 1;
  }
  else {
    if ((int)tVar1 < 2) {
      if (tVar1 == kScreenCongrats_Congrats) {
LAB_80049048:
        iVar2 = 0;
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      if (tVar1 == 3) goto LAB_80049048;
      iVar2 = 2;
    }
  }
  sMenuText = TextSys_Word__Fi((int)ptVar3->fTournamentID + 0x3b3);
  __s = TextSys_Word__Fi(iVar2 + 0x3e1);
  sprintf(acStack1352,sMenuText,__s);
LAB_80049084:
  tVar1 = (this->tScreenCongrats).congratsMessage;
  if (((tVar1 == kScreenCongrats_Congrats) && (tournamentManager.fPrevBestPlacement != '\x01')) ||
     (tVar1 == 3)) {
    if (wordnum == 0) {
      wordnum = (int)ptVar3->fTournamentID + 0x3c6;
      sMenuText = TextSys_Word__Fi(wordnum);
      __s = acStack1352;
    }
    else {
      wordnum_00 = (int)ptVar3->fTournamentID + 0x3c6;
      sMenuText = TextSys_Word__Fi(wordnum_00);
      __s = acStack848;
    }
    sprintf(__s,sMenuText);
  }
  if (wordnum != 0) {
    FETextRender_WordWrapTextFade__FiPcR4RECT14tMenuTextState13tMenuTextType
              ((int)(this->tScreenCongrats).tScreen.fScreenFadeVal,acStack1352,&local_598,
               textState_Selected,textType_PostGame);
    wordnum = FETextRender_WordWrapHeight__FsPc(local_598.w,acStack1352);
    local_598.y = local_598.y + (short)wordnum;
  }
  if (wordnum_00 != 0) {
    FETextRender_WordWrapTextFade__FiPcR4RECT14tMenuTextState13tMenuTextType
              ((int)(this->tScreenCongrats).tScreen.fScreenFadeVal,acStack848,&local_598,
               textState_Selected,textType_PostGame);
  }
  GetAwardInformation__18tTournamentManagerR17tAwardInformation(&tournamentManager,&tStack1424);
  if (tStack1424.fAwardCarGarageFull != (void *)0x0) {
    local_598.x = 0x104;
    local_598.y = 200;
    local_598.w = 0xf0;
    FeTools_FormatMoney__FPcl(acStack88,tStack1424.fAwardCarBonusMoney);
    sMenuText = TextSys_Word__Fi(0x40);
    sprintf(acStack344,sMenuText,acStack88);
    sMenuText = TextSys_Word__Fi(0x40);
    FETextRender_WordWrapTextFade__FiPcR4RECT14tMenuTextState13tMenuTextType
              ((int)(this->tScreenCongrats).tScreen.fScreenFadeVal,sMenuText,&local_598,
               textState_Selected,textType_PostGame);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalculatePrizes__23tScreenTournamentTrophy(struct tScreenTournamentTrophy *this /*$s2*/)
 // line 654, offset 0x8004923c
	/* begin block 1 */
		// Start line: 655
		// Start offset: 0x8004923C
		// Variables:
	// 		int i; // $s1
	// 		int j; // $s3
	// 		struct tAwardInformation tInfo; // stack offset -104
	// 		struct tTourneyInfo *tourneyInfo; // $s5

		/* begin block 1.1 */
			// Start line: 655
			// Start offset: 0x8004923C

			/* begin block 1.1.1 */
				// Start line: 655
				// Start offset: 0x8004923C
			/* end block 1.1.1 */
			// End offset: 0x8004923C
			// End Line: 655
		/* end block 1.1 */
		// End offset: 0x8004923C
		// End Line: 655

		/* begin block 1.2 */
			// Start line: 655
			// Start offset: 0x8004923C

			/* begin block 1.2.1 */
				// Start line: 655
				// Start offset: 0x8004923C
			/* end block 1.2.1 */
			// End offset: 0x8004923C
			// End Line: 655
		/* end block 1.2 */
		// End offset: 0x8004923C
		// End Line: 655

		/* begin block 1.3 */
			// Start line: 713
			// Start offset: 0x800493C0

			/* begin block 1.3.1 */
				// Start line: 713
				// Start offset: 0x800493C0
			/* end block 1.3.1 */
			// End offset: 0x800493C0
			// End Line: 713
		/* end block 1.3 */
		// End offset: 0x800493C0
		// End Line: 713
	/* end block 1 */
	// End offset: 0x80049458
	// End Line: 732

	/* begin block 2 */
		// Start line: 1417
	/* end block 2 */
	// End Line: 1418

	/* begin block 3 */
		// Start line: 1424
	/* end block 3 */
	// End Line: 1425

	/* begin block 4 */
		// Start line: 1424
	/* end block 4 */
	// End Line: 1425

void CalculatePrizes__23tScreenTournamentTrophy(tScreenTournamentTrophy *this)

{
  tTourneyInfo *ptVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  tScreenCongratsMessage tVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  tAwardInformation tStack104;
  
  *(undefined4 *)((this->tScreenCongrats).tScreen._vf + 6) = 1;
  (this->tScreenCongrats).congratsMessage = 4;
  (this->tScreenCongrats).trophy = kTrophyBronze;
  GetAwardInformation__18tTournamentManagerR17tAwardInformation(&tournamentManager,&tStack104);
  iVar8 = 900;
  iVar6 = (uint)(tournamentManager.fDefinition)->fTiers[tournamentManager.fTier].fTournOffset +
          tournamentManager.fTournament;
  ptVar1 = (tournamentManager.fDefinition)->fTournaments;
  iVar4 = (int)(((int)(short)tournamentManager.fNumRacers + (uint)(ptVar1[iVar6].fKnockout != '\0'))
               * 0x10000) >> 0x10;
  iVar7 = 1;
  if (0 < iVar4) {
    do {
      sVar3 = PlayerRanking__18tTournamentManagers(&tournamentManager,(short)iVar7);
      if (sVar3 == 0) {
        iVar8 = iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar4);
  }
  if (iVar8 == 1) {
    if (tStack104.fAwardCar == (void *)0x0) {
      (this->tScreenCongrats).congratsMessage = kScreenCongrats_Congrats;
      (this->tScreenCongrats).trophy = kTrophyGold;
    }
    else {
      (this->tScreenCongrats).congratsMessage = 3;
      (this->tScreenCongrats).trophy = kTrophySilver;
    }
    (this->tScreenCongrats).fCountSpeed = 0xf;
    *(undefined4 *)((this->tScreenCongrats).tScreen._vf + 6) = 0;
  }
  else {
    if (((iVar8 < 1) || (3 < iVar8)) || (ptVar1[iVar6].fKnockout != '\0')) {
      *(undefined4 *)((this->tScreenCongrats).tScreen._vf + 6) = 1;
      tVar5 = 3;
    }
    else {
      (this->tScreenCongrats).fCountSpeed = iVar8 + 0xe;
      tVar5 = 2;
      *(undefined4 *)((this->tScreenCongrats).tScreen._vf + 6) = 0;
      if (iVar8 == 2) {
        tVar5 = kScreenCongrats_Eliminated;
      }
    }
    (this->tScreenCongrats).congratsMessage = tVar5;
    (this->tScreenCongrats).trophy = kTrophyGold;
  }
  (this->tScreenCongrats).fNumSmallSpinShapes = 0;
  lVar2 = tournamentManager.fMoney;
  (this->tScreenCongrats).fCarPlayer = tournamentManager.fMoney;
  if (tStack104.fCompletedGarageFull != (void *)0x0) {
    (this->tScreenCongrats).fCarPlayer = lVar2 - tStack104.fCompletedBonusMoney;
  }
  if (tStack104.fTournMoney == 0) {
    tStack104.fTournMoney = -1;
  }
  (this->tScreenCongrats).TotalCash = tStack104.fTournMoney;
  *(undefined2 *)&(this->tScreenCongrats).fSpeechToPlay = 0x116;
  *(undefined2 *)((int)&(this->tScreenCongrats).fSpeechToPlay + 2) = 0x3f;
  (this->tScreenCongrats).fCarCX = -7.40000010;
  iVar8 = *(int *)((this->tScreenCongrats).tScreen._vf + 6);
  *(undefined4 *)&(this->tScreenCongrats).fCarX = 0x40800000;
  if (iVar8 == 1) {
    *(undefined2 *)&(this->tScreenCongrats).fSpeechToPlay = 0x120;
    *(undefined2 *)((int)&(this->tScreenCongrats).fSpeechToPlay + 2) = 0x49;
    (this->tScreenCongrats).fCarCX = -8.19999981;
  }
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetCar__23tScreenBeTheCopCongratsR8tCarInfo(struct tScreenBeTheCopCongrats *this /*$a0*/, struct tCarInfo *carInfo /*$s1*/)
 // line 746, offset 0x8004947c
	/* begin block 1 */
		// Start line: 747
		// Start offset: 0x8004947C
	/* end block 1 */
	// End offset: 0x8004947C
	// End Line: 747

	/* begin block 2 */
		// Start line: 1614
	/* end block 2 */
	// End Line: 1615

	/* begin block 3 */
		// Start line: 1629
	/* end block 3 */
	// End Line: 1630

	/* begin block 4 */
		// Start line: 1629
	/* end block 4 */
	// End Line: 1630

void * GetCar__23tScreenBeTheCopCongratsR8tCarInfo(tScreenBeTheCopCongrats *this,tCarInfo *carInfo)

{
  tCarInfo *ptVar1;
  
  ptVar1 = GetCarFromID__11tCarManagers(&carManager,(ushort)(byte)frontEnd.congratsCopCar);
  blockmove((undefined4 *)ptVar1,(undefined4 *)carInfo,0xcc);
  carInfo->fCountry = frontEnd.congratsCopCountry;
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalculatePrizes__23tScreenBeTheCopCongrats(struct tScreenBeTheCopCongrats *this /*$s0*/)
 // line 756, offset 0x800494dc
	/* begin block 1 */
		// Start line: 757
		// Start offset: 0x800494DC
	/* end block 1 */
	// End offset: 0x800494DC
	// End Line: 757

	/* begin block 2 */
		// Start line: 1648
	/* end block 2 */
	// End Line: 1649

	/* begin block 3 */
		// Start line: 1652
	/* end block 3 */
	// End Line: 1653

	/* begin block 4 */
		// Start line: 1652
	/* end block 4 */
	// End Line: 1653

void CalculatePrizes__23tScreenBeTheCopCongrats(tScreenBeTheCopCongrats *this)

{
  CalculatePrizes__15tScreenCongrats((tScreenCongrats *)this);
  (this->tScreenCongrats).congratsMessage = 3;
  *(undefined2 *)&(this->tScreenCongrats).fSpeechToPlay = 0x116;
  *(undefined2 *)((int)&(this->tScreenCongrats).fSpeechToPlay + 2) = 0x4b;
  *(undefined4 *)&(this->tScreenCongrats).fCarX = 0x40800000;
  (this->tScreenCongrats).fCarCX = -7.40000010;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCongratsMessage__23tScreenBeTheCopCongrats(struct tScreenBeTheCopCongrats *this /*$s1*/)
 // line 766, offset 0x8004952c
	/* begin block 1 */
		// Start line: 767
		// Start offset: 0x8004952C
		// Variables:
	// 		short congrats; // $s0
	// 		struct RECT r; // stack offset -280
	// 		char buffer[250]; // stack offset -272
	/* end block 1 */
	// End offset: 0x80049594
	// End Line: 783

	/* begin block 2 */
		// Start line: 1670
	/* end block 2 */
	// End Line: 1671

	/* begin block 3 */
		// Start line: 1675
	/* end block 3 */
	// End Line: 1676

	/* begin block 4 */
		// Start line: 1675
	/* end block 4 */
	// End Line: 1676

void DrawCongratsMessage__23tScreenBeTheCopCongrats(tScreenBeTheCopCongrats *this)

{
  ushort uVar1;
  char *__format;
  char *pcVar2;
  int wordnum;
  RECT local_118;
  char acStack272 [256];
  
  wordnum = 0x4c;
  local_118.x = 0x29;
  local_118.y = 0x3c;
  local_118.w = 200;
  local_118.h = 200;
  if (frontEnd.congratsCopCar == '\x1c') {
    wordnum = 0x4d;
  }
  uVar1 = PAD_state(4);
  if (uVar1 != 0) {
    TextSys_Word__Fi((int)*(char *)&(this->tScreenCongrats).InExtraSpinTick + 0x121);
  }
  __format = TextSys_Word__Fi(wordnum);
  pcVar2 = TextSys_Word__Fi((int)*(char *)&(this->tScreenCongrats).InExtraSpinTick + 0x121);
  sprintf(acStack272,__format,pcVar2);
  FETextRender_WordWrapText__FPcR4RECT14tMenuTextState13tMenuTextType
            (acStack272,&local_118,textState_Selected,textType_PostGame);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ GetCar__25tScreenTournamentCongratsR8tCarInfo(struct tScreenTournamentCongrats *this /*$a0*/, struct tCarInfo *carInfo /*$s0*/)
 // line 796, offset 0x800495e8
	/* begin block 1 */
		// Start line: 797
		// Start offset: 0x800495E8
		// Variables:
	// 		struct tAwardInformation tInfo; // stack offset -80
	/* end block 1 */
	// End offset: 0x800495E8
	// End Line: 797

	/* begin block 2 */
		// Start line: 1732
	/* end block 2 */
	// End Line: 1733

	/* begin block 3 */
		// Start line: 1745
	/* end block 3 */
	// End Line: 1746

	/* begin block 4 */
		// Start line: 1745
	/* end block 4 */
	// End Line: 1746

void * GetCar__25tScreenTournamentCongratsR8tCarInfo
                 (tScreenTournamentCongrats *this,tCarInfo *carInfo)

{
  tCarInfo *ptVar1;
  undefined auStack80 [56];
  short local_18;
  
  GetAwardInformation__18tTournamentManagerR17tAwardInformation
            (&tournamentManager,(tAwardInformation *)auStack80);
  ptVar1 = GetCarFromID__11tCarManagers(&carManager,local_18);
  blockmove((undefined4 *)ptVar1,(undefined4 *)carInfo,0xcc);
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalculatePrizes__25tScreenTournamentCongrats(struct tScreenTournamentCongrats *this /*$s1*/)
 // line 807, offset 0x8004963c
	/* begin block 1 */
		// Start line: 808
		// Start offset: 0x8004963C
		// Variables:
	// 		struct tAwardInformation tInfo; // stack offset -88

		/* begin block 1.1 */
			// Start line: 808
			// Start offset: 0x8004963C

			/* begin block 1.1.1 */
				// Start line: 808
				// Start offset: 0x8004963C
			/* end block 1.1.1 */
			// End offset: 0x8004963C
			// End Line: 808
		/* end block 1.1 */
		// End offset: 0x8004963C
		// End Line: 808
	/* end block 1 */
	// End offset: 0x80049694
	// End Line: 818

	/* begin block 2 */
		// Start line: 1767
	/* end block 2 */
	// End Line: 1768

	/* begin block 3 */
		// Start line: 1771
	/* end block 3 */
	// End Line: 1772

	/* begin block 4 */
		// Start line: 1771
	/* end block 4 */
	// End Line: 1772

void CalculatePrizes__25tScreenTournamentCongrats(tScreenTournamentCongrats *this)

{
  long lVar1;
  tAwardInformation tStack88;
  
  GetAwardInformation__18tTournamentManagerR17tAwardInformation(&tournamentManager,&tStack88);
  CalculatePrizes__15tScreenCongrats((tScreenCongrats *)this);
  (this->tScreenCongrats).congratsMessage = 3;
  (this->tScreenCongrats).fCarPlayer = tournamentManager.fMoney;
  lVar1 = -1;
  if (tStack88.fCompletedGarageFull != (void *)0x0) {
    lVar1 = tStack88.fCompletedBonusMoney;
  }
  (this->tScreenCongrats).TotalCash = lVar1;
  *(undefined2 *)&(this->tScreenCongrats).fSpeechToPlay = 0x116;
  *(undefined2 *)((int)&(this->tScreenCongrats).fSpeechToPlay + 2) = 0x4b;
  *(undefined4 *)&(this->tScreenCongrats).fCarX = 0x40800000;
  (this->tScreenCongrats).fCarCX = -7.40000010;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawCongratsMessage__25tScreenTournamentCongrats(struct tScreenTournamentCongrats *this /*$a0*/)
 // line 825, offset 0x800496d4
	/* begin block 1 */
		// Start line: 826
		// Start offset: 0x800496D4
		// Variables:
	// 		struct RECT r; // stack offset -408
	// 		struct tAwardInformation tInfo; // stack offset -400

		/* begin block 1.1 */
			// Start line: 826
			// Start offset: 0x800496D4

			/* begin block 1.1.1 */
				// Start line: 839
				// Start offset: 0x80049740
				// Variables:
			// 		char buffer[256]; // stack offset -328
			// 		char money[64]; // stack offset -72
			/* end block 1.1.1 */
			// End offset: 0x80049790
			// End Line: 847
		/* end block 1.1 */
		// End offset: 0x80049790
		// End Line: 847
	/* end block 1 */
	// End offset: 0x80049790
	// End Line: 847

	/* begin block 2 */
		// Start line: 1805
	/* end block 2 */
	// End Line: 1806

	/* begin block 3 */
		// Start line: 1810
	/* end block 3 */
	// End Line: 1811

	/* begin block 4 */
		// Start line: 1810
	/* end block 4 */
	// End Line: 1811

void DrawCongratsMessage__25tScreenTournamentCongrats(tScreenTournamentCongrats *this)

{
  char *str;
  RECT local_198;
  tAwardInformation tStack400;
  char acStack328 [256];
  char acStack72 [64];
  
  local_198.x = 0x29;
  local_198.y = 0x3c;
  local_198.w = 200;
  local_198.h = 400;
  GetAwardInformation__18tTournamentManagerR17tAwardInformation(&tournamentManager,&tStack400);
  str = TextSys_Word__Fi((int)tStack400.fCompletedText);
  FETextRender_WordWrapText__FPcR4RECT14tMenuTextState13tMenuTextType
            (str,&local_198,textState_Selected,textType_PostGame);
  if (tStack400.fCompletedGarageFull != (void *)0x0) {
    local_198.y = 0xb4;
    local_198.w = 0x1ae;
    FeTools_FormatMoney__FPcl(acStack72,tStack400.fCompletedBonusMoney);
    str = TextSys_Word__Fi(0x40);
    sprintf(acStack328,str,acStack72);
    str = TextSys_Word__Fi(0x40);
    FETextRender_WordWrapText__FPcR4RECT14tMenuTextState13tMenuTextType
              (str,&local_198,textState_Selected,textType_PostGame);
  }
  return;
}





