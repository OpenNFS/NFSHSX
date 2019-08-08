#include "NFS4.H"
#include "AIH_COP.H"

// decompiled code
// original method signature: 
// struct AIHigh_Cop * /*$ra*/ __10AIHigh_CopP8Car_tObji(struct AIHigh_Cop *this /*$s0*/, struct Car_tObj *carObj /*$a1*/, int copIndex /*$a2*/)
 // line 95, offset 0x80063c00
	/* begin block 1 */
		// Start line: 96
		// Start offset: 0x80063C00
	/* end block 1 */
	// End offset: 0x80063C00
	// End Line: 96

AIHigh_Cop * __10AIHigh_CopP8Car_tObji(AIHigh_Cop *this,Car_tObj *carObj,int copIndex)
{
  __15AIHigh_BasicCopP8Car_tObji((AIHigh_BasicCop *)this,carObj,copIndex);
  (this->AIHigh_BasicCop).AIHigh_Base._vf[0] = (__vtbl_ptr_type *)&table;
  *(undefined4 *)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags = 0;
  this->perpTarget_ = (AIHigh_Player *)0x0;
  this->forcePurgatory_ = -1;
  (this->AIHigh_BasicCop).driveAway_ = DRIVEAWAY_NONE;
  this->chaseIndex_ = 0;
  return this;


}




// decompiled code
// original method signature: 
// void /*$ra*/ SetTuningLevers__10AIHigh_Cop(struct AIHigh_Cop *this /*$a3*/)
 // line 110, offset 0x80063c4c
	/* begin block 1 */
		// Start line: 111
		// Start offset: 0x80063C4C
		// Variables:
	// 		int carTypeIndex; // $a2
	/* end block 1 */
	// End offset: 0x80063CBC
	// End Line: 124

void SetTuningLevers__10AIHigh_Cop(AIHigh_Cop *this)
{
  Car_tObj *pCVar1;
  int iVar2;
  
  pCVar1 = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
  iVar2 = pCVar1->carInfo->carType;
  if ((this->AIHigh_BasicCop).AIHigh_Base._vf[1] == (__vtbl_ptr_type *)0x1) {
    iVar2 = (iVar2 + -0x16) * 0x10;
    pCVar1->accelerationRecord = *(AIDataRecord_AccTable_t **)(&DAT_8010df68 + iVar2);
    ((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->curveSpeedTable =
         *(AIDataRecord_CurveSpeedTable_t **)(&DAT_8010df60 + iVar2);
    return;
  }
  iVar2 = (iVar2 + -0x16) * 0x10;
  pCVar1->accelerationRecord = *(AIDataRecord_AccTable_t **)(&DAT_8010df64 + iVar2);
  ((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->curveSpeedTable =
       *(AIDataRecord_CurveSpeedTable_t **)(&copTuningInfo + iVar2);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ HighExecute__10AIHigh_Cop(struct AIHigh_Cop *this /*$s1*/)
 // line 147, offset 0x80063cc4
	/* begin block 1 */
		// Start line: 148
		// Start offset: 0x80063CC4

		/* begin block 1.1 */
			// Start line: 148
			// Start offset: 0x80063CC4

			/* begin block 1.1.1 */
				// Start line: 162
				// Start offset: 0x80063D38
				// Variables:
			// 		union trigger_t *pNewTrigger; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 202
					// Start offset: 0x80063D38

					/* begin block 1.1.1.1.1 */
						// Start line: 203
						// Start offset: 0x80063D38

						/* begin block 1.1.1.1.1.1 */
							// Start line: 206
							// Start offset: 0x80063D78

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 208
								// Start offset: 0x80063D78

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 208
									// Start offset: 0x80063D78
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80063D78
								// End Line: 208
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80063D78
							// End Line: 208

							/* begin block 1.1.1.1.1.1.2 */
								// Start line: 208
								// Start offset: 0x80063D78
								// Variables:
							// 		struct AIHigh_Base *this; // $s1

								/* begin block 1.1.1.1.1.1.2.1 */
									// Start line: 208
									// Start offset: 0x80063D78
								/* end block 1.1.1.1.1.1.2.1 */
								// End offset: 0x80063DD0
								// End Line: 208
							/* end block 1.1.1.1.1.1.2 */
							// End offset: 0x80063DD0
							// End Line: 208
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80063DD0
						// End Line: 208

						/* begin block 1.1.1.1.1.2 */
							// Start line: 211
							// Start offset: 0x80063DD8

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 213
								// Start offset: 0x80063DD8
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.1.1.2.1.1 */
									// Start line: 213
									// Start offset: 0x80063DD8
								/* end block 1.1.1.1.1.2.1.1 */
								// End offset: 0x80063E18
								// End Line: 213
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x80063E18
							// End Line: 213
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x80063E18
						// End Line: 213
					/* end block 1.1.1.1.1 */
					// End offset: 0x80063E18
					// End Line: 213
				/* end block 1.1.1.1 */
				// End offset: 0x80063E28
				// End Line: 215

				/* begin block 1.1.1.2 */
					// Start line: 249
					// Start offset: 0x80063E5C

					/* begin block 1.1.1.2.1 */
						// Start line: 250
						// Start offset: 0x80063E6C

						/* begin block 1.1.1.2.1.1 */
							// Start line: 252
							// Start offset: 0x80063E6C

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 252
								// Start offset: 0x80063E6C
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x80063E6C
							// End Line: 252
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x80063E6C
						// End Line: 252

						/* begin block 1.1.1.2.1.2 */
							// Start line: 252
							// Start offset: 0x80063E6C
							// Variables:
						// 		struct AIHigh_Base *this; // $s1

							/* begin block 1.1.1.2.1.2.1 */
								// Start line: 252
								// Start offset: 0x80063E6C
							/* end block 1.1.1.2.1.2.1 */
							// End offset: 0x80063ED0
							// End Line: 253
						/* end block 1.1.1.2.1.2 */
						// End offset: 0x80063ED0
						// End Line: 253
					/* end block 1.1.1.2.1 */
					// End offset: 0x80063ED0
					// End Line: 253

					/* begin block 1.1.1.2.2 */
						// Start line: 260
						// Start offset: 0x80063F08

						/* begin block 1.1.1.2.2.1 */
							// Start line: 260
							// Start offset: 0x80063F08

							/* begin block 1.1.1.2.2.1.1 */
								// Start line: 265
								// Start offset: 0x80063F3C
								// Variables:
							// 		int forceForwardTrigger; // $s0
							// 		union trigger_t newTrigger; // stack offset -96

								/* begin block 1.1.1.2.2.1.1.1 */
									// Start line: 270
									// Start offset: 0x80063F70

									/* begin block 1.1.1.2.2.1.1.1.1 */
										// Start line: 272
										// Start offset: 0x80063F94
										// Variables:
									// 		int distanceMeters; // $v0
									/* end block 1.1.1.2.2.1.1.1.1 */
									// End offset: 0x80063FCC
									// End Line: 276
								/* end block 1.1.1.2.2.1.1.1 */
								// End offset: 0x80063FCC
								// End Line: 276

								/* begin block 1.1.1.2.2.1.1.2 */
									// Start line: 279
									// Start offset: 0x80063FCC

									/* begin block 1.1.1.2.2.1.1.2.1 */
										// Start line: 280
										// Start offset: 0x80063FD4
										// Variables:
									// 		int oldSlice; // $v1
									/* end block 1.1.1.2.2.1.1.2.1 */
									// End offset: 0x80063FE8
									// End Line: 286
								/* end block 1.1.1.2.2.1.1.2 */
								// End offset: 0x80063FE8
								// End Line: 286

								/* begin block 1.1.1.2.2.1.1.3 */
									// Start line: 291
									// Start offset: 0x80063FE8

									/* begin block 1.1.1.2.2.1.1.3.1 */
										// Start line: 293
										// Start offset: 0x80064020

										/* begin block 1.1.1.2.2.1.1.3.1.1 */
											// Start line: 299
											// Start offset: 0x80064020

											/* begin block 1.1.1.2.2.1.1.3.1.1.1 */
												// Start line: 304
												// Start offset: 0x80064020

												/* begin block 1.1.1.2.2.1.1.3.1.1.1.1 */
													// Start line: 306
													// Start offset: 0x80064050

													/* begin block 1.1.1.2.2.1.1.3.1.1.1.1.1 */
														// Start line: 307
														// Start offset: 0x80064050
														// Variables:
													// 		struct AIHigh_Base *this; // $s1
													// 		struct AIState_Base *newState; // $s0

														/* begin block 1.1.1.2.2.1.1.3.1.1.1.1.1.1 */
															// Start line: 307
															// Start offset: 0x80064050
														/* end block 1.1.1.2.2.1.1.3.1.1.1.1.1.1 */
														// End offset: 0x800640C8
														// End Line: 308
													/* end block 1.1.1.2.2.1.1.3.1.1.1.1.1 */
													// End offset: 0x800640C8
													// End Line: 308
												/* end block 1.1.1.2.2.1.1.3.1.1.1.1 */
												// End offset: 0x800640C8
												// End Line: 308
											/* end block 1.1.1.2.2.1.1.3.1.1.1 */
											// End offset: 0x800640C8
											// End Line: 308
										/* end block 1.1.1.2.2.1.1.3.1.1 */
										// End offset: 0x800640C8
										// End Line: 308

										/* begin block 1.1.1.2.2.1.1.3.1.2 */
											// Start line: 317
											// Start offset: 0x800640F4
											// Variables:
										// 		int direction; // $s3

											/* begin block 1.1.1.2.2.1.1.3.1.2.1 */
												// Start line: 334
												// Start offset: 0x80064138

												/* begin block 1.1.1.2.2.1.1.3.1.2.1.1 */
													// Start line: 335
													// Start offset: 0x80064148

													/* begin block 1.1.1.2.2.1.1.3.1.2.1.1.1 */
														// Start line: 336
														// Start offset: 0x80064148
														// Variables:
													// 		struct AIHigh_Base *this; // $s1
													// 		struct AIState_Base *newState; // $s0

														/* begin block 1.1.1.2.2.1.1.3.1.2.1.1.1.1 */
															// Start line: 336
															// Start offset: 0x80064148
														/* end block 1.1.1.2.2.1.1.3.1.2.1.1.1.1 */
														// End offset: 0x80064194
														// End Line: 337
													/* end block 1.1.1.2.2.1.1.3.1.2.1.1.1 */
													// End offset: 0x80064194
													// End Line: 337
												/* end block 1.1.1.2.2.1.1.3.1.2.1.1 */
												// End offset: 0x80064194
												// End Line: 337

												/* begin block 1.1.1.2.2.1.1.3.1.2.1.2 */
													// Start line: 342
													// Start offset: 0x8006419C

													/* begin block 1.1.1.2.2.1.1.3.1.2.1.2.1 */
														// Start line: 343
														// Start offset: 0x8006419C

														/* begin block 1.1.1.2.2.1.1.3.1.2.1.2.1.1 */
															// Start line: 343
															// Start offset: 0x8006419C
														/* end block 1.1.1.2.2.1.1.3.1.2.1.2.1.1 */
														// End offset: 0x8006419C
														// End Line: 343
													/* end block 1.1.1.2.2.1.1.3.1.2.1.2.1 */
													// End offset: 0x8006419C
													// End Line: 343

													/* begin block 1.1.1.2.2.1.1.3.1.2.1.2.2 */
														// Start line: 343
														// Start offset: 0x8006419C
														// Variables:
													// 		struct AIHigh_Base *this; // $s1

														/* begin block 1.1.1.2.2.1.1.3.1.2.1.2.2.1 */
															// Start line: 343
															// Start offset: 0x8006419C
														/* end block 1.1.1.2.2.1.1.3.1.2.1.2.2.1 */
														// End offset: 0x800641FC
														// End Line: 344
													/* end block 1.1.1.2.2.1.1.3.1.2.1.2.2 */
													// End offset: 0x800641FC
													// End Line: 344
												/* end block 1.1.1.2.2.1.1.3.1.2.1.2 */
												// End offset: 0x800641FC
												// End Line: 344
											/* end block 1.1.1.2.2.1.1.3.1.2.1 */
											// End offset: 0x800641FC
											// End Line: 344
										/* end block 1.1.1.2.2.1.1.3.1.2 */
										// End offset: 0x800641FC
										// End Line: 344
									/* end block 1.1.1.2.2.1.1.3.1 */
									// End offset: 0x800641FC
									// End Line: 344

									/* begin block 1.1.1.2.2.1.1.3.2 */
										// Start line: 344
										// Start offset: 0x800641FC

										/* begin block 1.1.1.2.2.1.1.3.2.1 */
											// Start line: 344
											// Start offset: 0x800641FC
										/* end block 1.1.1.2.2.1.1.3.2.1 */
										// End offset: 0x800641FC
										// End Line: 344
									/* end block 1.1.1.2.2.1.1.3.2 */
									// End offset: 0x800641FC
									// End Line: 344
								/* end block 1.1.1.2.2.1.1.3 */
								// End offset: 0x800641FC
								// End Line: 344
							/* end block 1.1.1.2.2.1.1 */
							// End offset: 0x800641FC
							// End Line: 344
						/* end block 1.1.1.2.2.1 */
						// End offset: 0x800641FC
						// End Line: 344
					/* end block 1.1.1.2.2 */
					// End offset: 0x800641FC
					// End Line: 344
				/* end block 1.1.1.2 */
				// End offset: 0x800641FC
				// End Line: 344

				/* begin block 1.1.1.3 */
					// Start line: 362
					// Start offset: 0x8006422C

					/* begin block 1.1.1.3.1 */
						// Start line: 370
						// Start offset: 0x80064268

						/* begin block 1.1.1.3.1.1 */
							// Start line: 371
							// Start offset: 0x80064290
							// Variables:
						// 		struct coorddef pos; // stack offset -96

							/* begin block 1.1.1.3.1.1.1 */
								// Start line: 380
								// Start offset: 0x80064290

								/* begin block 1.1.1.3.1.1.1.1 */
									// Start line: 381
									// Start offset: 0x80064290
									// Variables:
								// 		struct AIHigh_Base *this; // $a0

									/* begin block 1.1.1.3.1.1.1.1.1 */
										// Start line: 381
										// Start offset: 0x80064290
									/* end block 1.1.1.3.1.1.1.1.1 */
									// End offset: 0x80064290
									// End Line: 381
								/* end block 1.1.1.3.1.1.1.1 */
								// End offset: 0x80064290
								// End Line: 381

								/* begin block 1.1.1.3.1.1.1.2 */
									// Start line: 381
									// Start offset: 0x80064290
									// Variables:
								// 		struct AIHigh_Base *this; // $s1
								// 		struct AIState_Base *newState; // $s0

									/* begin block 1.1.1.3.1.1.1.2.1 */
										// Start line: 381
										// Start offset: 0x80064290
									/* end block 1.1.1.3.1.1.1.2.1 */
									// End offset: 0x80064370
									// End Line: 384
								/* end block 1.1.1.3.1.1.1.2 */
								// End offset: 0x80064370
								// End Line: 384

								/* begin block 1.1.1.3.1.1.1.3 */
									// Start line: 384
									// Start offset: 0x80064370
									// Variables:
								// 		struct AIHigh_Base *this; // $v1

									/* begin block 1.1.1.3.1.1.1.3.1 */
										// Start line: 384
										// Start offset: 0x80064370
									/* end block 1.1.1.3.1.1.1.3.1 */
									// End offset: 0x80064370
									// End Line: 384
								/* end block 1.1.1.3.1.1.1.3 */
								// End offset: 0x80064370
								// End Line: 384
							/* end block 1.1.1.3.1.1.1 */
							// End offset: 0x800643A0
							// End Line: 386
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x800643A0
						// End Line: 386
					/* end block 1.1.1.3.1 */
					// End offset: 0x800643A0
					// End Line: 386

					/* begin block 1.1.1.3.2 */
						// Start line: 390
						// Start offset: 0x800643A0

						/* begin block 1.1.1.3.2.1 */
							// Start line: 391
							// Start offset: 0x800643C4

							/* begin block 1.1.1.3.2.1.1 */
								// Start line: 392
								// Start offset: 0x800643C4
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.3.2.1.1.1 */
									// Start line: 392
									// Start offset: 0x800643C4
								/* end block 1.1.1.3.2.1.1.1 */
								// End offset: 0x80064438
								// End Line: 398
							/* end block 1.1.1.3.2.1.1 */
							// End offset: 0x80064438
							// End Line: 398
						/* end block 1.1.1.3.2.1 */
						// End offset: 0x80064438
						// End Line: 398
					/* end block 1.1.1.3.2 */
					// End offset: 0x80064438
					// End Line: 398
				/* end block 1.1.1.3 */
				// End offset: 0x80064438
				// End Line: 398

				/* begin block 1.1.1.4 */
					// Start line: 410
					// Start offset: 0x80064440
					// Variables:
				// 		struct coorddef newPos; // stack offset -96
				// 		struct AIState_Chase *chaseState; // $s2

					/* begin block 1.1.1.4.1 */
						// Start line: 413
						// Start offset: 0x80064440

						/* begin block 1.1.1.4.1.1 */
							// Start line: 413
							// Start offset: 0x80064440
							// Variables:
						// 		struct AIState_Chase *this; // $s2

							/* begin block 1.1.1.4.1.1.1 */
								// Start line: 413
								// Start offset: 0x80064440
							/* end block 1.1.1.4.1.1.1 */
							// End offset: 0x80064440
							// End Line: 413
						/* end block 1.1.1.4.1.1 */
						// End offset: 0x80064440
						// End Line: 413

						/* begin block 1.1.1.4.1.2 */
							// Start line: 420
							// Start offset: 0x8006446C
							// Variables:
						// 		int endSlice; // $s0

							/* begin block 1.1.1.4.1.2.1 */
								// Start line: 421
								// Start offset: 0x8006446C
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.4.1.2.1.1 */
									// Start line: 421
									// Start offset: 0x8006446C
								/* end block 1.1.1.4.1.2.1.1 */
								// End offset: 0x800644C0
								// End Line: 423
							/* end block 1.1.1.4.1.2.1 */
							// End offset: 0x800644C0
							// End Line: 423
						/* end block 1.1.1.4.1.2 */
						// End offset: 0x800644F0
						// End Line: 425
					/* end block 1.1.1.4.1 */
					// End offset: 0x800644F0
					// End Line: 425

					/* begin block 1.1.1.4.2 */
						// Start line: 425
						// Start offset: 0x800644F0

						/* begin block 1.1.1.4.2.1 */
							// Start line: 425
							// Start offset: 0x800644F0
						/* end block 1.1.1.4.2.1 */
						// End offset: 0x800644F0
						// End Line: 425
					/* end block 1.1.1.4.2 */
					// End offset: 0x800644F0
					// End Line: 425

					/* begin block 1.1.1.4.3 */
						// Start line: 425
						// Start offset: 0x800644F0

						/* begin block 1.1.1.4.3.1 */
							// Start line: 433
							// Start offset: 0x80064524

							/* begin block 1.1.1.4.3.1.1 */
								// Start line: 433
								// Start offset: 0x80064524
								// Variables:
							// 		struct AIState_Chase *this; // $s2

								/* begin block 1.1.1.4.3.1.1.1 */
									// Start line: 433
									// Start offset: 0x80064524
								/* end block 1.1.1.4.3.1.1.1 */
								// End offset: 0x80064528
								// End Line: 433
							/* end block 1.1.1.4.3.1.1 */
							// End offset: 0x80064528
							// End Line: 433
						/* end block 1.1.1.4.3.1 */
						// End offset: 0x80064528
						// End Line: 434
					/* end block 1.1.1.4.3 */
					// End offset: 0x80064528
					// End Line: 434

					/* begin block 1.1.1.4.4 */
						// Start line: 438
						// Start offset: 0x80064528

						/* begin block 1.1.1.4.4.1 */
							// Start line: 438
							// Start offset: 0x80064528
							// Variables:
						// 		struct AIState_Chase *this; // $s2

							/* begin block 1.1.1.4.4.1.1 */
								// Start line: 438
								// Start offset: 0x80064528
							/* end block 1.1.1.4.4.1.1 */
							// End offset: 0x80064528
							// End Line: 438
						/* end block 1.1.1.4.4.1 */
						// End offset: 0x80064528
						// End Line: 438

						/* begin block 1.1.1.4.4.2 */
							// Start line: 442
							// Start offset: 0x80064564

							/* begin block 1.1.1.4.4.2.1 */
								// Start line: 442
								// Start offset: 0x80064564
								// Variables:
							// 		struct AIState_Chase *this; // $s2
							// 		int slowDownEndTime; // $v0

								/* begin block 1.1.1.4.4.2.1.1 */
									// Start line: 442
									// Start offset: 0x80064564
								/* end block 1.1.1.4.4.2.1.1 */
								// End offset: 0x80064574
								// End Line: 442
							/* end block 1.1.1.4.4.2.1 */
							// End offset: 0x80064574
							// End Line: 442
						/* end block 1.1.1.4.4.2 */
						// End offset: 0x80064574
						// End Line: 443
					/* end block 1.1.1.4.4 */
					// End offset: 0x80064574
					// End Line: 443

					/* begin block 1.1.1.4.5 */
						// Start line: 447
						// Start offset: 0x80064574

						/* begin block 1.1.1.4.5.1 */
							// Start line: 473
							// Start offset: 0x80064594
							// Variables:
						// 		struct AIState_Chase *this; // $s2

							/* begin block 1.1.1.4.5.1.1 */
								// Start line: 473
								// Start offset: 0x80064594
							/* end block 1.1.1.4.5.1.1 */
							// End offset: 0x80064594
							// End Line: 473
						/* end block 1.1.1.4.5.1 */
						// End offset: 0x80064594
						// End Line: 473

						/* begin block 1.1.1.4.5.2 */
							// Start line: 474
							// Start offset: 0x800645A8

							/* begin block 1.1.1.4.5.2.1 */
								// Start line: 474
								// Start offset: 0x800645A8
								// Variables:
							// 		struct AIHigh_Base *this; // $v0

								/* begin block 1.1.1.4.5.2.1.1 */
									// Start line: 474
									// Start offset: 0x800645A8
								/* end block 1.1.1.4.5.2.1.1 */
								// End offset: 0x800645A8
								// End Line: 474
							/* end block 1.1.1.4.5.2.1 */
							// End offset: 0x800645A8
							// End Line: 474
						/* end block 1.1.1.4.5.2 */
						// End offset: 0x800645BC
						// End Line: 475
					/* end block 1.1.1.4.5 */
					// End offset: 0x800645BC
					// End Line: 475

					/* begin block 1.1.1.4.6 */
						// Start line: 482
						// Start offset: 0x800645BC
						// Variables:
					// 		struct AIState_Chase *this; // $s2
					// 		int minTimeInZone; // $v1
					// 		int minLatMetersDistance; // $a0
					// 		int minLongMetersDistance; // $a2

						/* begin block 1.1.1.4.6.1 */
							// Start line: 482
							// Start offset: 0x800645BC
						/* end block 1.1.1.4.6.1 */
						// End offset: 0x80064630
						// End Line: 482
					/* end block 1.1.1.4.6 */
					// End offset: 0x80064630
					// End Line: 482

					/* begin block 1.1.1.4.7 */
						// Start line: 490
						// Start offset: 0x80064660

						/* begin block 1.1.1.4.7.1 */
							// Start line: 490
							// Start offset: 0x80064660
							// Variables:
						// 		struct AIHigh_Base *this; // $v0

							/* begin block 1.1.1.4.7.1.1 */
								// Start line: 490
								// Start offset: 0x80064660
							/* end block 1.1.1.4.7.1.1 */
							// End offset: 0x80064660
							// End Line: 490
						/* end block 1.1.1.4.7.1 */
						// End offset: 0x80064660
						// End Line: 490

						/* begin block 1.1.1.4.7.2 */
							// Start line: 490
							// Start offset: 0x80064680
							// Variables:
						// 		struct AIState_Chase *this; // $s2

							/* begin block 1.1.1.4.7.2.1 */
								// Start line: 490
								// Start offset: 0x80064680
							/* end block 1.1.1.4.7.2.1 */
							// End offset: 0x80064680
							// End Line: 490
						/* end block 1.1.1.4.7.2 */
						// End offset: 0x80064680
						// End Line: 490

						/* begin block 1.1.1.4.7.3 */
							// Start line: 491
							// Start offset: 0x80064694
							// Variables:
						// 		struct coorddef zero; // stack offset -80

							/* begin block 1.1.1.4.7.3.1 */
								// Start line: 492
								// Start offset: 0x80064694
								// Variables:
							// 		struct AIHigh_Base *this; // $v0

								/* begin block 1.1.1.4.7.3.1.1 */
									// Start line: 492
									// Start offset: 0x80064694
								/* end block 1.1.1.4.7.3.1.1 */
								// End offset: 0x80064694
								// End Line: 492
							/* end block 1.1.1.4.7.3.1 */
							// End offset: 0x80064694
							// End Line: 492
						/* end block 1.1.1.4.7.3 */
						// End offset: 0x800646C8
						// End Line: 494
					/* end block 1.1.1.4.7 */
					// End offset: 0x800646C8
					// End Line: 494

					/* begin block 1.1.1.4.8 */
						// Start line: 498
						// Start offset: 0x800646C8

						/* begin block 1.1.1.4.8.1 */
							// Start line: 499
							// Start offset: 0x800646D8
							// Variables:
						// 		struct coorddef pos; // stack offset -80

							/* begin block 1.1.1.4.8.1.1 */
								// Start line: 501
								// Start offset: 0x800646D8
								// Variables:
							// 		struct AIHigh_Base *this; // $v0

								/* begin block 1.1.1.4.8.1.1.1 */
									// Start line: 501
									// Start offset: 0x800646D8
								/* end block 1.1.1.4.8.1.1.1 */
								// End offset: 0x800646D8
								// End Line: 501
							/* end block 1.1.1.4.8.1.1 */
							// End offset: 0x800646D8
							// End Line: 501
						/* end block 1.1.1.4.8.1 */
						// End offset: 0x800646F8
						// End Line: 502
					/* end block 1.1.1.4.8 */
					// End offset: 0x800646F8
					// End Line: 502

					/* begin block 1.1.1.4.9 */
						// Start line: 506
						// Start offset: 0x800646F8

						/* begin block 1.1.1.4.9.1 */
							// Start line: 506
							// Start offset: 0x80064720

							/* begin block 1.1.1.4.9.1.1 */
								// Start line: 506
								// Start offset: 0x80064720
							/* end block 1.1.1.4.9.1.1 */
							// End offset: 0x80064720
							// End Line: 506
						/* end block 1.1.1.4.9.1 */
						// End offset: 0x80064720
						// End Line: 506

						/* begin block 1.1.1.4.9.2 */
							// Start line: 507
							// Start offset: 0x8006473C

							/* begin block 1.1.1.4.9.2.1 */
								// Start line: 517
								// Start offset: 0x80064778
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.4.9.2.1.1 */
									// Start line: 517
									// Start offset: 0x80064778
								/* end block 1.1.1.4.9.2.1.1 */
								// End offset: 0x800647D0
								// End Line: 518
							/* end block 1.1.1.4.9.2.1 */
							// End offset: 0x800647D0
							// End Line: 518
						/* end block 1.1.1.4.9.2 */
						// End offset: 0x800647D0
						// End Line: 519
					/* end block 1.1.1.4.9 */
					// End offset: 0x800647D0
					// End Line: 519

					/* begin block 1.1.1.4.10 */
						// Start line: 522
						// Start offset: 0x800647D0

						/* begin block 1.1.1.4.10.1 */
							// Start line: 523
							// Start offset: 0x800647F4

							/* begin block 1.1.1.4.10.1.1 */
								// Start line: 526
								// Start offset: 0x80064840
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.4.10.1.1.1 */
									// Start line: 526
									// Start offset: 0x80064840
								/* end block 1.1.1.4.10.1.1.1 */
								// End offset: 0x800648B8
								// End Line: 531
							/* end block 1.1.1.4.10.1.1 */
							// End offset: 0x800648B8
							// End Line: 531
						/* end block 1.1.1.4.10.1 */
						// End offset: 0x800648B8
						// End Line: 531

						/* begin block 1.1.1.4.10.2 */
							// Start line: 535
							// Start offset: 0x800648C0

							/* begin block 1.1.1.4.10.2.1 */
								// Start line: 535
								// Start offset: 0x800648C0

								/* begin block 1.1.1.4.10.2.1.1 */
									// Start line: 536
									// Start offset: 0x800648D0

									/* begin block 1.1.1.4.10.2.1.1.1 */
										// Start line: 538
										// Start offset: 0x800648D0
										// Variables:
									// 		struct AIHigh_Base *this; // $s1
									// 		struct AIState_Base *newState; // $s0

										/* begin block 1.1.1.4.10.2.1.1.1.1 */
											// Start line: 538
											// Start offset: 0x800648D0
										/* end block 1.1.1.4.10.2.1.1.1.1 */
										// End offset: 0x800648D0
										// End Line: 543
									/* end block 1.1.1.4.10.2.1.1.1 */
									// End offset: 0x800648D0
									// End Line: 543
								/* end block 1.1.1.4.10.2.1.1 */
								// End offset: 0x800648D0
								// End Line: 547
							/* end block 1.1.1.4.10.2.1 */
							// End offset: 0x800648D0
							// End Line: 547
						/* end block 1.1.1.4.10.2 */
						// End offset: 0x800648D0
						// End Line: 547
					/* end block 1.1.1.4.10 */
					// End offset: 0x800648D0
					// End Line: 547
				/* end block 1.1.1.4 */
				// End offset: 0x800648D0
				// End Line: 547

				/* begin block 1.1.1.5 */
					// Start line: 560
					// Start offset: 0x800648D8

					/* begin block 1.1.1.5.1 */
						// Start line: 565
						// Start offset: 0x800648D8

						/* begin block 1.1.1.5.1.1 */
							// Start line: 566
							// Start offset: 0x800648F0

							/* begin block 1.1.1.5.1.1.1 */
								// Start line: 568
								// Start offset: 0x80064908
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.5.1.1.1.1 */
									// Start line: 568
									// Start offset: 0x80064908
								/* end block 1.1.1.5.1.1.1.1 */
								// End offset: 0x8006496C
								// End Line: 572
							/* end block 1.1.1.5.1.1.1 */
							// End offset: 0x8006496C
							// End Line: 572
						/* end block 1.1.1.5.1.1 */
						// End offset: 0x8006496C
						// End Line: 573
					/* end block 1.1.1.5.1 */
					// End offset: 0x8006496C
					// End Line: 573

					/* begin block 1.1.1.5.2 */
						// Start line: 579
						// Start offset: 0x8006496C

						/* begin block 1.1.1.5.2.1 */
							// Start line: 580
							// Start offset: 0x8006497C

							/* begin block 1.1.1.5.2.1.1 */
								// Start line: 581
								// Start offset: 0x8006497C
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.5.2.1.1.1 */
									// Start line: 581
									// Start offset: 0x8006497C
								/* end block 1.1.1.5.2.1.1.1 */
								// End offset: 0x800649F0
								// End Line: 586
							/* end block 1.1.1.5.2.1.1 */
							// End offset: 0x800649F0
							// End Line: 586
						/* end block 1.1.1.5.2.1 */
						// End offset: 0x800649F0
						// End Line: 586

						/* begin block 1.1.1.5.2.2 */
							// Start line: 592
							// Start offset: 0x800649F8

							/* begin block 1.1.1.5.2.2.1 */
								// Start line: 592
								// Start offset: 0x800649F8

								/* begin block 1.1.1.5.2.2.1.1 */
									// Start line: 593
									// Start offset: 0x80064A08

									/* begin block 1.1.1.5.2.2.1.1.1 */
										// Start line: 595
										// Start offset: 0x80064A20
										// Variables:
									// 		struct AIHigh_Base *this; // $s1
									// 		struct AIState_Base *newState; // $s0

										/* begin block 1.1.1.5.2.2.1.1.1.1 */
											// Start line: 595
											// Start offset: 0x80064A20
										/* end block 1.1.1.5.2.2.1.1.1.1 */
										// End offset: 0x80064A7C
										// End Line: 599
									/* end block 1.1.1.5.2.2.1.1.1 */
									// End offset: 0x80064A7C
									// End Line: 599
								/* end block 1.1.1.5.2.2.1.1 */
								// End offset: 0x80064AA0
								// End Line: 603

								/* begin block 1.1.1.5.2.2.1.2 */
									// Start line: 609
									// Start offset: 0x80064AA8

									/* begin block 1.1.1.5.2.2.1.2.1 */
										// Start line: 609
										// Start offset: 0x80064AA8

										/* begin block 1.1.1.5.2.2.1.2.1.1 */
											// Start line: 610
											// Start offset: 0x80064AB8
											// Variables:
										// 		int rbDistanceMeters; // $a0
										// 		int rbAbsDistanceMeters; // $a1
										// 		int release; // $s2
										// 		struct coorddef newPos; // stack offset -96

											/* begin block 1.1.1.5.2.2.1.2.1.1.1 */
												// Start line: 613
												// Start offset: 0x80064AB8

												/* begin block 1.1.1.5.2.2.1.2.1.1.1.1 */
													// Start line: 621
													// Start offset: 0x80064AE0

													/* begin block 1.1.1.5.2.2.1.2.1.1.1.1.1 */
														// Start line: 621
														// Start offset: 0x80064AE0
													/* end block 1.1.1.5.2.2.1.2.1.1.1.1.1 */
													// End offset: 0x80064AE0
													// End Line: 621
												/* end block 1.1.1.5.2.2.1.2.1.1.1.1 */
												// End offset: 0x80064AE0
												// End Line: 621

												/* begin block 1.1.1.5.2.2.1.2.1.1.1.2 */
													// Start line: 622
													// Start offset: 0x80064AF4
													// Variables:
												// 		int size; // $s0
												// 		int left; // $s0
												// 		int right; // $v0

													/* begin block 1.1.1.5.2.2.1.2.1.1.1.2.1 */
														// Start line: 625
														// Start offset: 0x80064B1C
														// Variables:
													// 		int slice; // $t0
													// 		int rightLatPos; // $v0

														/* begin block 1.1.1.5.2.2.1.2.1.1.1.2.1.1 */
															// Start line: 625
															// Start offset: 0x80064B1C
														/* end block 1.1.1.5.2.2.1.2.1.1.1.2.1.1 */
														// End offset: 0x80064B1C
														// End Line: 625
													/* end block 1.1.1.5.2.2.1.2.1.1.1.2.1 */
													// End offset: 0x80064B1C
													// End Line: 625

													/* begin block 1.1.1.5.2.2.1.2.1.1.1.2.2 */
														// Start line: 625
														// Start offset: 0x80064B1C
														// Variables:
													// 		int timeNow; // $a2

														/* begin block 1.1.1.5.2.2.1.2.1.1.1.2.2.1 */
															// Start line: 625
															// Start offset: 0x80064B1C

															/* begin block 1.1.1.5.2.2.1.2.1.1.1.2.2.1.1 */
																// Start line: 625
																// Start offset: 0x80064B1C
																// Variables:
															// 		int timeNow; // $a2

																/* begin block 1.1.1.5.2.2.1.2.1.1.1.2.2.1.1.1 */
																	// Start line: 625
																	// Start offset: 0x80064B1C
																/* end block 1.1.1.5.2.2.1.2.1.1.1.2.2.1.1.1 */
																// End offset: 0x80064B1C
																// End Line: 625
															/* end block 1.1.1.5.2.2.1.2.1.1.1.2.2.1.1 */
															// End offset: 0x80064B1C
															// End Line: 625
														/* end block 1.1.1.5.2.2.1.2.1.1.1.2.2.1 */
														// End offset: 0x80064B1C
														// End Line: 625
													/* end block 1.1.1.5.2.2.1.2.1.1.1.2.2 */
													// End offset: 0x80064B1C
													// End Line: 625
												/* end block 1.1.1.5.2.2.1.2.1.1.1.2 */
												// End offset: 0x80064BC4
												// End Line: 631
											/* end block 1.1.1.5.2.2.1.2.1.1.1 */
											// End offset: 0x80064BC4
											// End Line: 631

											/* begin block 1.1.1.5.2.2.1.2.1.1.2 */
												// Start line: 634
												// Start offset: 0x80064BC4

												/* begin block 1.1.1.5.2.2.1.2.1.1.2.1 */
													// Start line: 637
													// Start offset: 0x80064BE0

													/* begin block 1.1.1.5.2.2.1.2.1.1.2.1.1 */
														// Start line: 637
														// Start offset: 0x80064BE0
													/* end block 1.1.1.5.2.2.1.2.1.1.2.1.1 */
													// End offset: 0x80064BE0
													// End Line: 637
												/* end block 1.1.1.5.2.2.1.2.1.1.2.1 */
												// End offset: 0x80064BE0
												// End Line: 637

												/* begin block 1.1.1.5.2.2.1.2.1.1.2.2 */
													// Start line: 638
													// Start offset: 0x80064BF4

													/* begin block 1.1.1.5.2.2.1.2.1.1.2.2.1 */
														// Start line: 638
														// Start offset: 0x80064BF4
														// Variables:
													// 		int timeNow; // $v0

														/* begin block 1.1.1.5.2.2.1.2.1.1.2.2.1.1 */
															// Start line: 638
															// Start offset: 0x80064BF4
														/* end block 1.1.1.5.2.2.1.2.1.1.2.2.1.1 */
														// End offset: 0x80064C00
														// End Line: 638
													/* end block 1.1.1.5.2.2.1.2.1.1.2.2.1 */
													// End offset: 0x80064C00
													// End Line: 638
												/* end block 1.1.1.5.2.2.1.2.1.1.2.2 */
												// End offset: 0x80064C00
												// End Line: 638
											/* end block 1.1.1.5.2.2.1.2.1.1.2 */
											// End offset: 0x80064C00
											// End Line: 638

											/* begin block 1.1.1.5.2.2.1.2.1.1.3 */
												// Start line: 649
												// Start offset: 0x80064C84
												// Variables:
											// 		struct AICop_PerpChaseInfo *this; // $s0

												/* begin block 1.1.1.5.2.2.1.2.1.1.3.1 */
													// Start line: 649
													// Start offset: 0x80064C84

													/* begin block 1.1.1.5.2.2.1.2.1.1.3.1.1 */
														// Start line: 649
														// Start offset: 0x80064C84
														// Variables:
													// 		struct AICop_PerpChaseInfo *this; // $s0

														/* begin block 1.1.1.5.2.2.1.2.1.1.3.1.1.1 */
															// Start line: 649
															// Start offset: 0x80064C84

															/* begin block 1.1.1.5.2.2.1.2.1.1.3.1.1.1.1 */
																// Start line: 649
																// Start offset: 0x80064C84
																// Variables:
															// 		struct AICop_PerpChaseInfo *this; // $s0

																/* begin block 1.1.1.5.2.2.1.2.1.1.3.1.1.1.1.1 */
																	// Start line: 649
																	// Start offset: 0x80064C84
																/* end block 1.1.1.5.2.2.1.2.1.1.3.1.1.1.1.1 */
																// End offset: 0x80064C84
																// End Line: 649
															/* end block 1.1.1.5.2.2.1.2.1.1.3.1.1.1.1 */
															// End offset: 0x80064C84
															// End Line: 649
														/* end block 1.1.1.5.2.2.1.2.1.1.3.1.1.1 */
														// End offset: 0x80064CBC
														// End Line: 649
													/* end block 1.1.1.5.2.2.1.2.1.1.3.1.1 */
													// End offset: 0x80064CBC
													// End Line: 649

													/* begin block 1.1.1.5.2.2.1.2.1.1.3.1.2 */
														// Start line: 649
														// Start offset: 0x80064CBC
														// Variables:
													// 		struct AICop_PerpChaseInfo *this; // $s0

														/* begin block 1.1.1.5.2.2.1.2.1.1.3.1.2.1 */
															// Start line: 649
															// Start offset: 0x80064CBC
														/* end block 1.1.1.5.2.2.1.2.1.1.3.1.2.1 */
														// End offset: 0x80064D34
														// End Line: 649
													/* end block 1.1.1.5.2.2.1.2.1.1.3.1.2 */
													// End offset: 0x80064D34
													// End Line: 649
												/* end block 1.1.1.5.2.2.1.2.1.1.3.1 */
												// End offset: 0x80064D34
												// End Line: 649
											/* end block 1.1.1.5.2.2.1.2.1.1.3 */
											// End offset: 0x80064D34
											// End Line: 649

											/* begin block 1.1.1.5.2.2.1.2.1.1.4 */
												// Start line: 653
												// Start offset: 0x80064D34
												// Variables:
											// 		struct AIHigh_Base *this; // $v0

												/* begin block 1.1.1.5.2.2.1.2.1.1.4.1 */
													// Start line: 653
													// Start offset: 0x80064D34
												/* end block 1.1.1.5.2.2.1.2.1.1.4.1 */
												// End offset: 0x80064D34
												// End Line: 653
											/* end block 1.1.1.5.2.2.1.2.1.1.4 */
											// End offset: 0x80064D34
											// End Line: 653

											/* begin block 1.1.1.5.2.2.1.2.1.1.5 */
												// Start line: 653
												// Start offset: 0x80064D34

												/* begin block 1.1.1.5.2.2.1.2.1.1.5.1 */
													// Start line: 665
													// Start offset: 0x80064D78

													/* begin block 1.1.1.5.2.2.1.2.1.1.5.1.1 */
														// Start line: 665
														// Start offset: 0x80064D78

														/* begin block 1.1.1.5.2.2.1.2.1.1.5.1.1.1 */
															// Start line: 665
															// Start offset: 0x80064D88
															// Variables:
														// 		struct AIHigh_Base *this; // $v0

															/* begin block 1.1.1.5.2.2.1.2.1.1.5.1.1.1.1 */
																// Start line: 665
																// Start offset: 0x80064D88
															/* end block 1.1.1.5.2.2.1.2.1.1.5.1.1.1.1 */
															// End offset: 0x80064D88
															// End Line: 665
														/* end block 1.1.1.5.2.2.1.2.1.1.5.1.1.1 */
														// End offset: 0x80064D88
														// End Line: 665

														/* begin block 1.1.1.5.2.2.1.2.1.1.5.1.1.2 */
															// Start line: 665
															// Start offset: 0x80064DA8

															/* begin block 1.1.1.5.2.2.1.2.1.1.5.1.1.2.1 */
																// Start line: 665
																// Start offset: 0x80064DA8
															/* end block 1.1.1.5.2.2.1.2.1.1.5.1.1.2.1 */
															// End offset: 0x80064DA8
															// End Line: 665
														/* end block 1.1.1.5.2.2.1.2.1.1.5.1.1.2 */
														// End offset: 0x80064DA8
														// End Line: 665

														/* begin block 1.1.1.5.2.2.1.2.1.1.5.1.1.3 */
															// Start line: 665
															// Start offset: 0x80064DA8

															/* begin block 1.1.1.5.2.2.1.2.1.1.5.1.1.3.1 */
																// Start line: 665
																// Start offset: 0x80064DA8
															/* end block 1.1.1.5.2.2.1.2.1.1.5.1.1.3.1 */
															// End offset: 0x80064DA8
															// End Line: 665
														/* end block 1.1.1.5.2.2.1.2.1.1.5.1.1.3 */
														// End offset: 0x80064DA8
														// End Line: 665

														/* begin block 1.1.1.5.2.2.1.2.1.1.5.1.1.4 */
															// Start line: 666
															// Start offset: 0x80064DBC
															// Variables:
														// 		int timeToRB; // $v1

															/* begin block 1.1.1.5.2.2.1.2.1.1.5.1.1.4.1 */
																// Start line: 666
																// Start offset: 0x80064DBC
																// Variables:
															// 		struct AIHigh_Base *this; // $v0

																/* begin block 1.1.1.5.2.2.1.2.1.1.5.1.1.4.1.1 */
																	// Start line: 666
																	// Start offset: 0x80064DBC
																/* end block 1.1.1.5.2.2.1.2.1.1.5.1.1.4.1.1 */
																// End offset: 0x80064DBC
																// End Line: 666
															/* end block 1.1.1.5.2.2.1.2.1.1.5.1.1.4.1 */
															// End offset: 0x80064DBC
															// End Line: 666
														/* end block 1.1.1.5.2.2.1.2.1.1.5.1.1.4 */
														// End offset: 0x80064DFC
														// End Line: 670
													/* end block 1.1.1.5.2.2.1.2.1.1.5.1.1 */
													// End offset: 0x80064DFC
													// End Line: 670
												/* end block 1.1.1.5.2.2.1.2.1.1.5.1 */
												// End offset: 0x80064DFC
												// End Line: 670
											/* end block 1.1.1.5.2.2.1.2.1.1.5 */
											// End offset: 0x80064DFC
											// End Line: 670

											/* begin block 1.1.1.5.2.2.1.2.1.1.6 */
												// Start line: 678
												// Start offset: 0x80064DFC

												/* begin block 1.1.1.5.2.2.1.2.1.1.6.1 */
													// Start line: 678
													// Start offset: 0x80064E04
													// Variables:
												// 		struct AIHigh_Base *this; // $v0

													/* begin block 1.1.1.5.2.2.1.2.1.1.6.1.1 */
														// Start line: 678
														// Start offset: 0x80064E04
													/* end block 1.1.1.5.2.2.1.2.1.1.6.1.1 */
													// End offset: 0x80064E04
													// End Line: 678
												/* end block 1.1.1.5.2.2.1.2.1.1.6.1 */
												// End offset: 0x80064E04
												// End Line: 678

												/* begin block 1.1.1.5.2.2.1.2.1.1.6.2 */
													// Start line: 679
													// Start offset: 0x80064E40

													/* begin block 1.1.1.5.2.2.1.2.1.1.6.2.1 */
														// Start line: 681
														// Start offset: 0x80064E40

														/* begin block 1.1.1.5.2.2.1.2.1.1.6.2.1.1 */
															// Start line: 681
															// Start offset: 0x80064E40

															/* begin block 1.1.1.5.2.2.1.2.1.1.6.2.1.1.1 */
																// Start line: 681
																// Start offset: 0x80064E40
															/* end block 1.1.1.5.2.2.1.2.1.1.6.2.1.1.1 */
															// End offset: 0x80064E40
															// End Line: 681
														/* end block 1.1.1.5.2.2.1.2.1.1.6.2.1.1 */
														// End offset: 0x80064E40
														// End Line: 681

														/* begin block 1.1.1.5.2.2.1.2.1.1.6.2.1.2 */
															// Start line: 696
															// Start offset: 0x80064E60

															/* begin block 1.1.1.5.2.2.1.2.1.1.6.2.1.2.1 */
																// Start line: 696
																// Start offset: 0x80064E60

																/* begin block 1.1.1.5.2.2.1.2.1.1.6.2.1.2.1.1 */
																	// Start line: 696
																	// Start offset: 0x80064E60
																/* end block 1.1.1.5.2.2.1.2.1.1.6.2.1.2.1.1 */
																// End offset: 0x80064E64
																// End Line: 696
															/* end block 1.1.1.5.2.2.1.2.1.1.6.2.1.2.1 */
															// End offset: 0x80064E64
															// End Line: 696
														/* end block 1.1.1.5.2.2.1.2.1.1.6.2.1.2 */
														// End offset: 0x80064E64
														// End Line: 700
													/* end block 1.1.1.5.2.2.1.2.1.1.6.2.1 */
													// End offset: 0x80064E64
													// End Line: 700

													/* begin block 1.1.1.5.2.2.1.2.1.1.6.2.2 */
														// Start line: 703
														// Start offset: 0x80064E64
														// Variables:
													// 		struct AIHigh_Base *this; // $a0

														/* begin block 1.1.1.5.2.2.1.2.1.1.6.2.2.1 */
															// Start line: 703
															// Start offset: 0x80064E64
														/* end block 1.1.1.5.2.2.1.2.1.1.6.2.2.1 */
														// End offset: 0x80064E64
														// End Line: 703
													/* end block 1.1.1.5.2.2.1.2.1.1.6.2.2 */
													// End offset: 0x80064E64
													// End Line: 703

													/* begin block 1.1.1.5.2.2.1.2.1.1.6.2.3 */
														// Start line: 703
														// Start offset: 0x80064E64
														// Variables:
													// 		struct AIHigh_Base *this; // $s1
													// 		struct AIState_Base *newState; // $s0

														/* begin block 1.1.1.5.2.2.1.2.1.1.6.2.3.1 */
															// Start line: 703
															// Start offset: 0x80064E64
														/* end block 1.1.1.5.2.2.1.2.1.1.6.2.3.1 */
														// End offset: 0x80064F3C
														// End Line: 706
													/* end block 1.1.1.5.2.2.1.2.1.1.6.2.3 */
													// End offset: 0x80064F3C
													// End Line: 706
												/* end block 1.1.1.5.2.2.1.2.1.1.6.2 */
												// End offset: 0x80064F50
												// End Line: 709
											/* end block 1.1.1.5.2.2.1.2.1.1.6 */
											// End offset: 0x80064F50
											// End Line: 709
										/* end block 1.1.1.5.2.2.1.2.1.1 */
										// End offset: 0x80064F50
										// End Line: 709

										/* begin block 1.1.1.5.2.2.1.2.1.2 */
											// Start line: 717
											// Start offset: 0x80064F64

											/* begin block 1.1.1.5.2.2.1.2.1.2.1 */
												// Start line: 718
												// Start offset: 0x80064F64

												/* begin block 1.1.1.5.2.2.1.2.1.2.1.1 */
													// Start line: 721
													// Start offset: 0x80064FA0
													// Variables:
												// 		struct coorddef pos; // stack offset -96

													/* begin block 1.1.1.5.2.2.1.2.1.2.1.1.1 */
														// Start line: 723
														// Start offset: 0x80064FA0
														// Variables:
													// 		struct AIHigh_Base *this; // $a0

														/* begin block 1.1.1.5.2.2.1.2.1.2.1.1.1.1 */
															// Start line: 723
															// Start offset: 0x80064FA0
														/* end block 1.1.1.5.2.2.1.2.1.2.1.1.1.1 */
														// End offset: 0x80064FA0
														// End Line: 723
													/* end block 1.1.1.5.2.2.1.2.1.2.1.1.1 */
													// End offset: 0x80064FA0
													// End Line: 723

													/* begin block 1.1.1.5.2.2.1.2.1.2.1.1.2 */
														// Start line: 723
														// Start offset: 0x80064FA0
														// Variables:
													// 		struct AIHigh_Base *this; // $s1
													// 		struct AIState_Base *newState; // $s0

														/* begin block 1.1.1.5.2.2.1.2.1.2.1.1.2.1 */
															// Start line: 723
															// Start offset: 0x80064FA0
														/* end block 1.1.1.5.2.2.1.2.1.2.1.1.2.1 */
														// End offset: 0x8006507C
														// End Line: 726
													/* end block 1.1.1.5.2.2.1.2.1.2.1.1.2 */
													// End offset: 0x8006507C
													// End Line: 726

													/* begin block 1.1.1.5.2.2.1.2.1.2.1.1.3 */
														// Start line: 726
														// Start offset: 0x8006507C
														// Variables:
													// 		struct AIHigh_Base *this; // $v1

														/* begin block 1.1.1.5.2.2.1.2.1.2.1.1.3.1 */
															// Start line: 726
															// Start offset: 0x8006507C
														/* end block 1.1.1.5.2.2.1.2.1.2.1.1.3.1 */
														// End offset: 0x8006507C
														// End Line: 726
													/* end block 1.1.1.5.2.2.1.2.1.2.1.1.3 */
													// End offset: 0x8006507C
													// End Line: 726
												/* end block 1.1.1.5.2.2.1.2.1.2.1.1 */
												// End offset: 0x8006507C
												// End Line: 726

												/* begin block 1.1.1.5.2.2.1.2.1.2.1.2 */
													// Start line: 730
													// Start offset: 0x800650B4

													/* begin block 1.1.1.5.2.2.1.2.1.2.1.2.1 */
														// Start line: 730
														// Start offset: 0x800650B4

														/* begin block 1.1.1.5.2.2.1.2.1.2.1.2.1.1 */
															// Start line: 731
															// Start offset: 0x800650C8

															/* begin block 1.1.1.5.2.2.1.2.1.2.1.2.1.1.1 */
																// Start line: 732
																// Start offset: 0x800650C8
																// Variables:
															// 		struct AIHigh_Base *this; // $s1
															// 		struct AIState_Base *newState; // $s0

																/* begin block 1.1.1.5.2.2.1.2.1.2.1.2.1.1.1.1 */
																	// Start line: 732
																	// Start offset: 0x800650C8
																/* end block 1.1.1.5.2.2.1.2.1.2.1.2.1.1.1.1 */
																// End offset: 0x80065110
																// End Line: 733
															/* end block 1.1.1.5.2.2.1.2.1.2.1.2.1.1.1 */
															// End offset: 0x80065110
															// End Line: 733
														/* end block 1.1.1.5.2.2.1.2.1.2.1.2.1.1 */
														// End offset: 0x80065110
														// End Line: 733
													/* end block 1.1.1.5.2.2.1.2.1.2.1.2.1 */
													// End offset: 0x80065110
													// End Line: 733
												/* end block 1.1.1.5.2.2.1.2.1.2.1.2 */
												// End offset: 0x80065110
												// End Line: 733
											/* end block 1.1.1.5.2.2.1.2.1.2.1 */
											// End offset: 0x80065110
											// End Line: 733
										/* end block 1.1.1.5.2.2.1.2.1.2 */
										// End offset: 0x80065110
										// End Line: 733
									/* end block 1.1.1.5.2.2.1.2.1 */
									// End offset: 0x80065110
									// End Line: 733
								/* end block 1.1.1.5.2.2.1.2 */
								// End offset: 0x80065110
								// End Line: 733
							/* end block 1.1.1.5.2.2.1 */
							// End offset: 0x80065110
							// End Line: 733
						/* end block 1.1.1.5.2.2 */
						// End offset: 0x80065110
						// End Line: 733
					/* end block 1.1.1.5.2 */
					// End offset: 0x80065110
					// End Line: 733
				/* end block 1.1.1.5 */
				// End offset: 0x80065110
				// End Line: 733

				/* begin block 1.1.1.6 */
					// Start line: 746
					// Start offset: 0x80065118

					/* begin block 1.1.1.6.1 */
						// Start line: 754
						// Start offset: 0x80065140
						// Variables:
					// 		int hLoop; // $s2

						/* begin block 1.1.1.6.1.1 */
							// Start line: 758
							// Start offset: 0x8006515C
							// Variables:
						// 		struct Car_tObj *thisPlayerObj; // $a1
						// 		struct AIHigh_Player *thisPlayer; // $v0

							/* begin block 1.1.1.6.1.1.1 */
								// Start line: 760
								// Start offset: 0x80065174

								/* begin block 1.1.1.6.1.1.1.1 */
									// Start line: 760
									// Start offset: 0x80065174

									/* begin block 1.1.1.6.1.1.1.1.1 */
										// Start line: 760
										// Start offset: 0x80065174
									/* end block 1.1.1.6.1.1.1.1.1 */
									// End offset: 0x80065174
									// End Line: 760
								/* end block 1.1.1.6.1.1.1.1 */
								// End offset: 0x80065174
								// End Line: 760
							/* end block 1.1.1.6.1.1.1 */
							// End offset: 0x800651B0
							// End Line: 765
						/* end block 1.1.1.6.1.1 */
						// End offset: 0x800651B0
						// End Line: 765
					/* end block 1.1.1.6.1 */
					// End offset: 0x800651BC
					// End Line: 767

					/* begin block 1.1.1.6.2 */
						// Start line: 769
						// Start offset: 0x800651BC

						/* begin block 1.1.1.6.2.1 */
							// Start line: 770
							// Start offset: 0x80065224

							/* begin block 1.1.1.6.2.1.1 */
								// Start line: 771
								// Start offset: 0x80065224
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.6.2.1.1.1 */
									// Start line: 771
									// Start offset: 0x80065224
								/* end block 1.1.1.6.2.1.1.1 */
								// End offset: 0x8006527C
								// End Line: 773
							/* end block 1.1.1.6.2.1.1 */
							// End offset: 0x8006527C
							// End Line: 773
						/* end block 1.1.1.6.2.1 */
						// End offset: 0x8006527C
						// End Line: 774
					/* end block 1.1.1.6.2 */
					// End offset: 0x8006527C
					// End Line: 774

					/* begin block 1.1.1.6.3 */
						// Start line: 777
						// Start offset: 0x8006527C

						/* begin block 1.1.1.6.3.1 */
							// Start line: 778
							// Start offset: 0x800652A0

							/* begin block 1.1.1.6.3.1.1 */
								// Start line: 779
								// Start offset: 0x800652A0
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.6.3.1.1.1 */
									// Start line: 779
									// Start offset: 0x800652A0
								/* end block 1.1.1.6.3.1.1.1 */
								// End offset: 0x800652F4
								// End Line: 782
							/* end block 1.1.1.6.3.1.1 */
							// End offset: 0x800652F4
							// End Line: 782
						/* end block 1.1.1.6.3.1 */
						// End offset: 0x800652F4
						// End Line: 782
					/* end block 1.1.1.6.3 */
					// End offset: 0x800652F4
					// End Line: 782
				/* end block 1.1.1.6 */
				// End offset: 0x800652F4
				// End Line: 782

				/* begin block 1.1.1.7 */
					// Start line: 802
					// Start offset: 0x800652FC
					// Variables:
				// 		struct AIState_GotoSlice *gotoState; // $s0

					/* begin block 1.1.1.7.1 */
						// Start line: 803
						// Start offset: 0x800652FC

						/* begin block 1.1.1.7.1.1 */
							// Start line: 806
							// Start offset: 0x80065320

							/* begin block 1.1.1.7.1.1.1 */
								// Start line: 807
								// Start offset: 0x80065320
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.7.1.1.1.1 */
									// Start line: 807
									// Start offset: 0x80065320
								/* end block 1.1.1.7.1.1.1.1 */
								// End offset: 0x8006536C
								// End Line: 807
							/* end block 1.1.1.7.1.1.1 */
							// End offset: 0x8006536C
							// End Line: 807
						/* end block 1.1.1.7.1.1 */
						// End offset: 0x8006536C
						// End Line: 808
					/* end block 1.1.1.7.1 */
					// End offset: 0x8006536C
					// End Line: 808
				/* end block 1.1.1.7 */
				// End offset: 0x8006536C
				// End Line: 808
			/* end block 1.1.1 */
			// End offset: 0x8006536C
			// End Line: 811
		/* end block 1.1 */
		// End offset: 0x8006536C
		// End Line: 811
	/* end block 1 */
	// End offset: 0x80065378
	// End Line: 816

void HighExecute__10AIHigh_Cop(AIHigh_Cop *this)
{
  bool bVar1;
  coorddef *pcVar2;
  trigger_t *pabVar3;
  trigger_t *pabVar4;
  trigger_t *pabVar5;
  AIState_Offroad *this_00;
  AIState_GotoSlice *this_01;
  Speaker *pSVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  AIState_Chase *this_02;
  AIState_Purgatory *this_03;
  int targetSlice;
  AIState_Normal *this_04;
  stateType_t sVar10;
  coorddef *pcVar11;
  AIState_Base *this_05;
  copType cVar12;
  Car_tObj *carObj;
  AIState_Base *pAVar13;
  speechIntensityType sVar14;
  int iVar15;
  undefined4 uVar16;
  Car_tObj **ppCVar17;
  coorddef local_60;
  int local_54;
  int local_50;
  undefined auStack72 [36];
  int local_24;
  int local_20;
  int local_1c;
  
  ((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->unlap = 0;
  ((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->lap = 0;
  CheckSpikeBelt__15AIHigh_BasicCop((AIHigh_BasicCop *)this);
  CheckForWipeOut__10AIHigh_Cop(this);
  SetTuningLevers__10AIHigh_Cop(this);
  if (false) goto switchD_80063d30_caseD_6;
  switch((this->AIHigh_BasicCop).AIHigh_Base.stateType_) {
  case STATE_NONE:
    AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
    carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
    carObj->desiredLatPos = carObj->desiredLatPos & 0xfffffffd;
    if ((((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->carFlags & 0x400U) == 0) {
      this_03 = (AIState_Purgatory *)__builtin_new(8);
      this_05 = (AIState_Base *)
                __17AIState_PurgatoryP8Car_tObj(this_03,(this->AIHigh_BasicCop).AIHigh_Base.carObj_)
      ;
      pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
      if (pAVar13 != (AIState_Base *)0x0) {
        (**(code **)(pAVar13->_vf[0] + 0x14))
                  ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
      }
      sVar10 = STATE_PURGATORY;
    }
    else {
      this_05 = (AIState_Base *)__builtin_new(0x10);
      __12AIState_BaseP8Car_tObj(this_05,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
      this_05->_vf[0] = (__vtbl_ptr_type *)&table;
      this_05->_vf[2] = (__vtbl_ptr_type *)0x1;
      pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
      if (pAVar13 != (AIState_Base *)0x0) {
        (**(code **)(pAVar13->_vf[0] + 0x14))
                  ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
      }
      sVar10 = STATE_IDLE;
    }
    (this->AIHigh_BasicCop).AIHigh_Base.state_ = this_05;
    (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = sVar10;
    return;
  case STATE_PURGATORY:
    carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
    carObj->desiredLatPos = carObj->desiredLatPos & 0xfffffffd;
    cVar12 = (this->AIHigh_BasicCop).type_;
    this->forcePurgatory_ = -1;
    (this->AIHigh_BasicCop).blockade_.initialPlayerDistanceMetersInt = 0;
    if (cVar12 == 4) {
      (this->AIHigh_BasicCop).type_ = COP_REGULAR;
    }
    cVar12 = (this->AIHigh_BasicCop).type_;
    if (cVar12 == 2) {
      AssignToPlayer__10AIHigh_CopP13AIHigh_Player
                (this,(AIHigh_Player *)(this->AIHigh_BasicCop).copIndex_);
      this_05 = (AIState_Base *)__builtin_new(0x10);
      __12AIState_BaseP8Car_tObj(this_05,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
      this_05->_vf[0] = (__vtbl_ptr_type *)&table;
      this_05->_vf[2] = (__vtbl_ptr_type *)0x1;
      pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
      if (pAVar13 != (AIState_Base *)0x0) {
        (**(code **)(pAVar13->_vf[0] + 0x14))
                  ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
      }
      targetSlice = (this->AIHigh_BasicCop).blockade_.direction;
      (this->AIHigh_BasicCop).AIHigh_Base.state_ = this_05;
      (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = STATE_IDLE;
      AILife_ReencarnateCopByLatPosAndRotation__FP8Car_tObjiiii
                ((this->AIHigh_BasicCop).AIHigh_Base.carObj_,
                 (this->AIHigh_BasicCop).blockade_.chaseLevel,
                 (this->AIHigh_BasicCop).blockade_.requestSpikeBeltAtSlice,
                 (this->AIHigh_BasicCop).blockade_.slice,targetSlice);
      this->forcePurgatory_ = (this->AIHigh_BasicCop).blockade_.flags;
    }
    else {
      if (((((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->desiredLatPos & 8U) != 0) &&
         (cVar12 != COP_SUPER)) {
        pabVar3 = CheckForNewTriggers__10AIHigh_Cop(this);
        bVar1 = false;
        if (pabVar3 != (trigger_t *)0x0) {
          pabVar5 = pabVar3;
          pcVar2 = &local_60;
          do {
            pcVar11 = pcVar2;
            pabVar4 = pabVar5;
            targetSlice = *(int *)(*pabVar4 + 4);
            iVar8 = *(int *)(*pabVar4 + 8);
            iVar15 = *(int *)(*pabVar4 + 0xc);
            pcVar11->x = *(int *)*pabVar4;
            pcVar11->y = targetSlice;
            pcVar11->z = iVar8;
            pcVar11[1].x = iVar15;
            pabVar5 = (trigger_t *)(*pabVar4 + 0x10);
            pcVar2 = (coorddef *)&pcVar11[1].y;
          } while (pabVar5 != (trigger_t *)(*pabVar3 + 0x40));
          targetSlice = *(int *)(*pabVar4 + 0x14);
          ((coorddef *)&pcVar11[1].y)->x = *(int *)*pabVar5;
          pcVar11[1].z = targetSlice;
          if (Cars_gNumHumanRaceCars == 2) {
            targetSlice = AIWorld_ApxSplineDistance__FP8Car_tObjT0((Car_tObj *)0x0,(Car_tObj *)0x0);
            if (targetSlice < 0) {
              targetSlice = -targetSlice;
            }
            if (targetSlice < 0x12c0000) {
              bVar1 = true;
            }
          }
          if (bVar1) {
            local_60.x = 1;
            local_50 = 1;
            local_60.z = 1;
            local_54 = 1;
          }
          DescribeTrigger__24AITrigger_TriggerManagerP9trigger_t(_triggerManagerCops,0xa0);
          if (local_60.x == 1) {
            randtemp = fastRandom;
            fastRandom = fastRandom & 0xffff;
            targetSlice = -1;
            if (true) {
              targetSlice = 1;
            }
            if (local_50 == 0) {
              AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
              this_05 = (AIState_Base *)__builtin_new(0x10);
              __12AIState_BaseP8Car_tObj(this_05,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
              this_05->_vf[0] = (__vtbl_ptr_type *)&table;
              this_05->_vf[2] = (__vtbl_ptr_type *)0x1;
              pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
              if (pAVar13 != (AIState_Base *)0x0) {
                (**(code **)(pAVar13->_vf[0] + 0x14))
                          ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
              }
              sVar10 = STATE_IDLE;
            }
            else {
              AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
              this_04 = (AIState_Normal *)__builtin_new(8);
              this_05 = (AIState_Base *)
                        __14AIState_NormalP8Car_tObj
                                  (this_04,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
              pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
              if (pAVar13 != (AIState_Base *)0x0) {
                (**(code **)(pAVar13->_vf[0] + 0x14))
                          ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
              }
              sVar10 = STATE_NORMAL;
            }
            (this->AIHigh_BasicCop).AIHigh_Base.state_ = this_05;
            (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = sVar10;
            AILife_ReencarnateCopBySlice__FP8Car_tObjiiii
                      ((this->AIHigh_BasicCop).AIHigh_Base.carObj_,local_60.y,targetSlice,
                       targetSlice,local_50);
          }
          else {
            if (((1 < local_60.x) && (local_60.x != 2)) && (local_60.x == 3)) {
              uVar7 = ~local_60.z;
              if (true) {
                uVar7 = local_60.z ^ 1;
              }
              if ((uVar7 == 0) || (local_60.z == 0)) {
                AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
                this_00 = (AIState_Offroad *)__builtin_new(0x68);
                this_00 = __15AIState_OffroadP8Car_tObjiP8coorddefP10matrixtdefiii
                                    (this_00,(this->AIHigh_BasicCop).AIHigh_Base.carObj_,local_60.y,
                                     (coorddef *)&local_54,(matrixtdef *)(&local_54 + 0xc),local_24,
                                     local_20,local_1c);
                this_05 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
                if (this_05 != (AIState_Base *)0x0) {
                  (**(code **)(this_05->_vf[0] + 0x14))
                            ((int)&this_05->carObj_ + (int)*(short *)(this_05->_vf[0] + 0x10),3);
                }
                *(AIState_Offroad **)&(this->AIHigh_BasicCop).AIHigh_Base.state_ = this_00;
                (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = STATE_OFFROAD;
                AILife_ReencarnateCopByPosition__FP8Car_tObjiiP8coorddefP10matrixtdef
                          ((this->AIHigh_BasicCop).AIHigh_Base.carObj_,local_60.y,1,
                           (coorddef *)&local_54,(matrixtdef *)(&local_54 + 0xc));
              }
            }
          }
        }
      }
    }
    goto switchD_80063d30_caseD_6;
  case STATE_NORMAL:
    this->forcePurgatory_ = -1;
    cVar12 = (this->AIHigh_BasicCop).type_;
    if (cVar12 != COP_SUPER) {
      if (cVar12 != 4) {
        carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
        carObj->desiredLatPos = carObj->desiredLatPos & 0xfffffffd;
      }
      cVar12 = (this->AIHigh_BasicCop).type_;
      if (((cVar12 != COP_SUPER) && (cVar12 != 4)) &&
         (targetSlice = CheckForNewTarget__10AIHigh_Cop(this), targetSlice != 0)) {
        GetCheckChasePosition__10AIHigh_CopP8coorddef(this,&local_60);
        this_02 = (AIState_Chase *)__builtin_new(0x94);
        this_02 = __13AIState_ChaseP8Car_tObjT1P8coorddefiiiii
                            (this_02,(this->AIHigh_BasicCop).AIHigh_Base.carObj_,
                             *(Car_tObj **)
                              &(*(Car_tObj **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags
                               )->N,&local_60,*(int *)(&LAB_8010ceb4 + this->chaseIndex_ * 0x14),
                             *(int *)(&NitroDistanceMeters +
                                     (int)(this->AIHigh_BasicCop).AIHigh_Base._vf[1] * 8),
                             *(int *)(&DAT_8010cfc8 +
                                     (int)(this->AIHigh_BasicCop).AIHigh_Base._vf[1] * 8),
                             this->chaseIndex_,*(int *)(&AICop_skillDelay + DAT_801131f4 * 4));
        this_05 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
        if (this_05 != (AIState_Base *)0x0) {
          (**(code **)(this_05->_vf[0] + 0x14))
                    ((int)&this_05->carObj_ + (int)*(short *)(this_05->_vf[0] + 0x10),3);
        }
        carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
        *(AIState_Chase **)&(this->AIHigh_BasicCop).AIHigh_Base.state_ = this_02;
        (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = STATE_CHASE;
        pSVar6 = Mobile__6SpeechP8Car_tObj(carObj);
        (**(code **)(pSVar6->_vf[0] + 0x34))
                  ((int)&(pSVar6->fPosition).flags + (int)*(short *)(pSVar6->_vf[0] + 0x30),
                   **(undefined4 **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags);
      }
    }
    if (((this->AIHigh_BasicCop).driveAway_ == DRIVEAWAY_NONE) &&
       (targetSlice = AILife_EvaluateLife__FP8Car_tObj((this->AIHigh_BasicCop).AIHigh_Base.carObj_),
       targetSlice == 0)) goto switchD_80063d30_caseD_6;
    carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
    (this->AIHigh_BasicCop).driveAway_ = DRIVEAWAY_NONE;
    pSVar6 = Mobile__6SpeechP8Car_tObj(carObj);
    (**(code **)(pSVar6->_vf[0] + 0x84))
              ((int)&(pSVar6->fPosition).flags + (int)*(short *)(pSVar6->_vf[0] + 0x80));
    AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
    this_03 = (AIState_Purgatory *)__builtin_new(8);
    this_05 = (AIState_Base *)
              __17AIState_PurgatoryP8Car_tObj(this_03,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
    pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
    if (pAVar13 != (AIState_Base *)0x0) {
      (**(code **)(pAVar13->_vf[0] + 0x14))
                ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
    }
    sVar10 = STATE_PURGATORY;
    break;
  case STATE_IDLE:
    cVar12 = (this->AIHigh_BasicCop).type_;
    if ((cVar12 == COP_SUPER) || (cVar12 == 4)) {
      sVar14 = SPEECH_INTENSITY_MED;
      if (true) {
        sVar14 = ~SPEECH_INTENSITY_LOW;
      }
      (((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->speechInfo).speechIntensity = sVar14;
      (((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->desiredVector).z = 1;
      AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
      this_04 = (AIState_Normal *)__builtin_new(8);
      this_05 = (AIState_Base *)
                __14AIState_NormalP8Car_tObj(this_04,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
      pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
      if (pAVar13 != (AIState_Base *)0x0) {
        (**(code **)(pAVar13->_vf[0] + 0x14))
                  ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
      }
      (this->AIHigh_BasicCop).AIHigh_Base.state_ = this_05;
      (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = STATE_NORMAL;
    }
    if ((this->AIHigh_BasicCop).driveAway_ == DRIVEAWAY_NONE) {
      if ((this->AIHigh_BasicCop).blockade_.initialPlayerDistanceMetersInt == 0) {
        if ((this->AIHigh_BasicCop).type_ != 2) {
          carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
          carObj->desiredLatPos = carObj->desiredLatPos & 0xfffffffd;
          targetSlice = CheckForNewTarget__10AIHigh_Cop(this);
          if (((targetSlice != 0) && (cVar12 = (this->AIHigh_BasicCop).type_, cVar12 != COP_SUPER))
             && (cVar12 != 4)) {
            GetCheckChasePosition__10AIHigh_CopP8coorddef(this,&local_60);
            this_02 = (AIState_Chase *)__builtin_new(0x94);
            this_02 = __13AIState_ChaseP8Car_tObjT1P8coorddefiiiii
                                (this_02,(this->AIHigh_BasicCop).AIHigh_Base.carObj_,
                                 *(Car_tObj **)
                                  &(*(Car_tObj **)
                                     &(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags)->N,
                                 &local_60,*(int *)(&LAB_8010ceb4 + this->chaseIndex_ * 0x14),
                                 *(int *)(&NitroDistanceMeters +
                                         (int)(this->AIHigh_BasicCop).AIHigh_Base._vf[1] * 8),
                                 *(int *)(&DAT_8010cfc8 +
                                         (int)(this->AIHigh_BasicCop).AIHigh_Base._vf[1] * 8),
                                 this->chaseIndex_,*(int *)(&AICop_skillDelay + DAT_801131f4 * 4));
            this_05 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
            if (this_05 != (AIState_Base *)0x0) {
              (**(code **)(this_05->_vf[0] + 0x14))
                        ((int)&this_05->carObj_ + (int)*(short *)(this_05->_vf[0] + 0x10),3);
            }
            carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
            *(AIState_Chase **)&(this->AIHigh_BasicCop).AIHigh_Base.state_ = this_02;
            (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = STATE_CHASE;
            pSVar6 = Mobile__6SpeechP8Car_tObj(carObj);
            (**(code **)(pSVar6->_vf[0] + 0x34))
                      ((int)&(pSVar6->fPosition).flags + (int)*(short *)(pSVar6->_vf[0] + 0x30),
                       **(undefined4 **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags);
            goto switchD_80063d30_caseD_6;
          }
          targetSlice = AILife_EvaluateLife__FP8Car_tObj
                                  ((this->AIHigh_BasicCop).AIHigh_Base.carObj_);
          if (targetSlice == 0) goto switchD_80063d30_caseD_6;
          AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
          this_03 = (AIState_Purgatory *)__builtin_new(8);
          this_05 = (AIState_Base *)
                    __17AIState_PurgatoryP8Car_tObj
                              (this_03,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
          pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
          if (pAVar13 != (AIState_Base *)0x0) {
            (**(code **)(pAVar13->_vf[0] + 0x14))
                      ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
          }
          sVar10 = STATE_PURGATORY;
          break;
        }
        carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
        carObj->desiredLatPos = carObj->desiredLatPos | 2;
        targetSlice = this->forcePurgatory_;
        bVar1 = false;
        if ((targetSlice != -1) && (AICop_spikeBelt == 0)) {
          if (DAT_801131f4 == 0) {
            uVar16 = 0xb333;
          }
          else {
            uVar16 = 0xe666;
            if (DAT_801131f4 == 1) {
              uVar16 = 0xcccc;
            }
          }
          targetSlice = this->forcePurgatory_ * 0x20;
          targetSlice = fixedmult((uint)*(byte *)(targetSlice + 0x1e) * 0x8000 *
                                  (uint)(*(byte *)(targetSlice + 0x1d) >> 4),uVar16);
          iVar8 = this->forcePurgatory_ * 0x20;
          DAT_8010d558 = fixedmult((uint)*(byte *)(iVar8 + 0x1f) * 0x8000 *
                                   ((uint)*(byte *)(iVar8 + 0x1d) & 0xf),uVar16);
          DAT_8010d554 = -targetSlice;
          DAT_8010d550 = this->forcePurgatory_;
          AICop_spikeBelt = 1;
          DAT_8010d55c = 0;
          BWorld_SetSpikeBelt__Fiii(this->forcePurgatory_,DAT_8010d554,targetSlice + DAT_8010d558);
          targetSlice = this->forcePurgatory_;
        }
        AICop_gRoadBlockState = 1;
        if ((targetSlice != -1) && (DAT_8010d550 == targetSlice)) {
          DAT_8010d55c = 0;
        }
        if ((this->AIHigh_BasicCop).blockade_.mode != BLOCKADEMODE_NONE) {
          if (stackSpeedUpEnbabledFlag == 0) {
            SetupBlockadeElements__15AIHigh_BasicCopP10blockade_t
                      ((AIHigh_BasicCop *)this,(blockade_t *)&(this->AIHigh_BasicCop).type_);
          }
          else {
            gWSavePtr = SetSp(gWSavePtr);
            stackSpeedUpEnbabledFlag = 0;
            SetupBlockadeElements__15AIHigh_BasicCopP10blockade_t
                      ((AIHigh_BasicCop *)this,(blockade_t *)&(this->AIHigh_BasicCop).type_);
            gWSavePtr = SetSp(gWSavePtr);
            stackSpeedUpEnbabledFlag = 1;
          }
        }
        targetSlice = *(int *)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags;
        if (true) {
          trap(0x1c00);
        }
        if ((false) && (false)) {
          trap(0x1800);
        }
        *(undefined4 *)(targetSlice + 0x8c) = 0;
        *(int *)(targetSlice + 0xa8) = 0x10000 / 0;
        if (DAT_801131f0 == 2) {
          uVar16 = 0x13333;
LAB_80064d28:
          uVar16 = fixedmult(0x10000 / 0,uVar16);
          *(undefined4 *)(targetSlice + 0xa8) = uVar16;
        }
        else {
          uVar16 = 0xa8f5;
          if (DAT_801131f0 == 4) goto LAB_80064d28;
        }
        GetCheckChasePosition__10AIHigh_CopP8coorddef(this,&local_60);
        iVar8 = AIWorld_ApxSplineDistance__FP8Car_tObjT0
                          ((this->AIHigh_BasicCop).AIHigh_Base.carObj_,
                           *(Car_tObj **)
                            &(*(Car_tObj **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags)
                             ->N);
        targetSlice = iVar8;
        if (iVar8 < 0) {
          targetSlice = -iVar8;
        }
        if (targetSlice < 0x320000) {
LAB_80064df8:
          bVar1 = true;
        }
        else {
          if (targetSlice < 0x12c0000) {
            targetSlice = *(int *)(**(int **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags
                                  + 0x564);
            if (targetSlice < 1) {
              targetSlice = -targetSlice;
            }
            if (((0x471c7 < targetSlice) &&
                (targetSlice = fixeddiv(iVar8,*(undefined4 *)
                                               (**(int **)&(this->AIHigh_BasicCop).blockade_.
                                                           blockadeSpeechFlags + 0x564)),
                0 < targetSlice)) && (targetSlice < (this->AIHigh_BasicCop).blockade_.rotation))
            goto LAB_80064df8;
          }
        }
        if (!bVar1) {
          targetSlice = AIWorld_ApxSplineDistance__FP8Car_tObji
                                  (*(Car_tObj **)
                                    &(*(Car_tObj **)
                                       &(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags)->N,
                                   (this->AIHigh_BasicCop).blockade_.chaseLevel);
          if (targetSlice < 0) {
            targetSlice = targetSlice + 0xffff;
          }
          if ((this->AIHigh_BasicCop).blockade_.reverse * (targetSlice >> 0x10) < 1)
          goto switchD_80063d30_caseD_6;
        }
        targetSlice = *(int *)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags;
        this->forcePurgatory_ = -1;
        if ((this->AIHigh_BasicCop).blockade_.target == *(AIHigh_Player **)(targetSlice + 0x94)) {
          *(undefined4 *)(targetSlice + 0x8c) = 0;
        }
        (this->AIHigh_BasicCop).type_ = COP_REGULAR;
        this_02 = (AIState_Chase *)__builtin_new(0x94);
        this_02 = __13AIState_ChaseP8Car_tObjT1P8coorddefiiiii
                            (this_02,(this->AIHigh_BasicCop).AIHigh_Base.carObj_,
                             *(Car_tObj **)
                              &(*(Car_tObj **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags
                               )->N,&local_60,*(int *)(&LAB_8010ceb4 + this->chaseIndex_ * 0x14),
                             *(int *)(&NitroDistanceMeters +
                                     (int)(this->AIHigh_BasicCop).AIHigh_Base._vf[1] * 8),
                             *(int *)(&DAT_8010cfc8 +
                                     (int)(this->AIHigh_BasicCop).AIHigh_Base._vf[1] * 8),
                             this->chaseIndex_,*(int *)(&AICop_skillDelay + DAT_801131f4 * 4));
        this_05 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
        if (this_05 != (AIState_Base *)0x0) {
          (**(code **)(this_05->_vf[0] + 0x14))
                    ((int)&this_05->carObj_ + (int)*(short *)(this_05->_vf[0] + 0x10),3);
        }
        targetSlice = (this->AIHigh_BasicCop).blockade_.latPos;
        *(AIState_Chase **)&(this->AIHigh_BasicCop).AIHigh_Base.state_ = this_02;
        (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = STATE_CHASE;
        if (targetSlice != 0) {
          AIPhysic_ChangeDirection__FP8Car_tObji((this->AIHigh_BasicCop).AIHigh_Base.carObj_,0x40);
        }
        goto switchD_80063d30_caseD_6;
      }
LAB_80064a0c:
      sVar14 = SPEECH_INTENSITY_MED;
      if (true) {
        sVar14 = ~SPEECH_INTENSITY_LOW;
      }
      (((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->speechInfo).speechIntensity = sVar14;
      (((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->desiredVector).z = 1;
      AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
      this_04 = (AIState_Normal *)__builtin_new(8);
      this_05 = (AIState_Base *)
                __14AIState_NormalP8Car_tObj(this_04,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
      pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
      if (pAVar13 != (AIState_Base *)0x0) {
        (**(code **)(pAVar13->_vf[0] + 0x14))
                  ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
      }
      targetSlice = (this->AIHigh_BasicCop).blockade_.initialPlayerDistanceMetersInt;
      (this->AIHigh_BasicCop).AIHigh_Base.state_ = this_05;
      (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = STATE_NORMAL;
      if (targetSlice == 1) {
        Cars_ResetCollidedCars__FP8Car_tObjii((this->AIHigh_BasicCop).AIHigh_Base.carObj_,1,1);
      }
      (this->AIHigh_BasicCop).blockade_.initialPlayerDistanceMetersInt = 0;
      goto switchD_80063d30_caseD_6;
    }
    carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
    (this->AIHigh_BasicCop).driveAway_ = DRIVEAWAY_NONE;
    pSVar6 = Mobile__6SpeechP8Car_tObj(carObj);
    (**(code **)(pSVar6->_vf[0] + 0x84))
              ((int)&(pSVar6->fPosition).flags + (int)*(short *)(pSVar6->_vf[0] + 0x80));
    AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
    this_03 = (AIState_Purgatory *)__builtin_new(8);
    this_05 = (AIState_Base *)
              __17AIState_PurgatoryP8Car_tObj(this_03,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
    pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
    if (pAVar13 != (AIState_Base *)0x0) {
      (**(code **)(pAVar13->_vf[0] + 0x14))
                ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
    }
    sVar10 = STATE_PURGATORY;
    break;
  case STATE_CHASE:
    carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
    this_02 = (AIState_Chase *)(this->AIHigh_BasicCop).AIHigh_Base.state_;
    carObj->desiredLatPos = carObj->desiredLatPos | 2;
    if (0xa0 < this_02->nitrousMinAftDistance_) {
      targetSlice = FindBarrierEndSlice__13AIState_Chase(this_02);
      this_01 = (AIState_GotoSlice *)__builtin_new(0x10);
      this_01 = __17AIState_GotoSliceP8Car_tObjii
                          (this_01,(this->AIHigh_BasicCop).AIHigh_Base.carObj_,targetSlice,0);
      this_05 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
      if (this_05 != (AIState_Base *)0x0) {
        (**(code **)(this_05->_vf[0] + 0x14))
                  ((int)&this_05->carObj_ + (int)*(short *)(this_05->_vf[0] + 0x10),3);
      }
      carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
      *(AIState_GotoSlice **)&(this->AIHigh_BasicCop).AIHigh_Base.state_ = this_01;
      (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = STATE_GOTOSLICE;
      pSVar6 = Mobile__6SpeechP8Car_tObj(carObj);
      (**(code **)(pSVar6->_vf[0] + 0x3c))
                ((int)&(pSVar6->fPosition).flags + (int)*(short *)(pSVar6->_vf[0] + 0x38));
    }
    piVar9 = (int *)(*(int *)(*(int *)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags + 0x9c)
                    + (int)(this->AIHigh_BasicCop).AIHigh_Base._vf[1] * 4);
    if ((*piVar9 == 0) && (piVar9[3] == 0)) {
      this_02->murderMode_ = 0;
    }
    this->forcePurgatory_ = -1;
    bVar1 = false;
    if (this_02->nitrousMinForeDistance_ < 1) {
      uVar7 = CheckForNeedyPlayers__10AIHigh_Cop(this);
      bVar1 = ~uVar7 != 0;
    }
    if (bVar1) {
      this_02->nitrousMinForeDistance_ = 0x3c0;
    }
    HandleBlockadeSpeech__15AIHigh_BasicCop((AIHigh_BasicCop *)this);
    bVar1 = false;
    targetSlice = GetCheckChasePosition__10AIHigh_CopP8coorddef(this,&local_60);
    if (targetSlice != 0) {
      bVar1 = this_02->carDir_ == 0;
    }
    if (bVar1) {
      SetTarget__13AIState_ChaseP8Car_tObjP8coorddef
                (this_02,*(Car_tObj **)
                          &(*(Car_tObj **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags)->N
                 ,&local_60);
    }
    targetSlice = this->chaseIndex_ * 0x14;
    bVar1 = false;
    if (*(int *)(&AIHigh_Cop_AggressionData + targetSlice) < this_02->latMetersBetween_) {
      iVar8 = this_02->targetDir_;
      if (iVar8 < 0) {
        iVar8 = -iVar8;
      }
      if (iVar8 < *(int *)(&LAB_8010cea8 + targetSlice)) {
        iVar8 = this_02->latTargetRegion_;
        if (iVar8 < 0) {
          iVar8 = -iVar8;
        }
        bVar1 = iVar8 < *(int *)(&LAB_8010ceac + targetSlice);
      }
    }
    if (bVar1) {
      SetMurderMode__13AIState_Chaseii(this_02,1,*(int *)(&LAB_8010ceb0 + this->chaseIndex_ * 0x14))
      ;
    }
    bVar1 = false;
    targetSlice = ShouldIPerformCutOffBlock__15AIHigh_BasicCopiP8Car_tObj
                            ((AIHigh_BasicCop *)this,0x4000,
                             *(Car_tObj **)
                              &(*(Car_tObj **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags
                               )->N);
    if (targetSlice != 0) {
      bVar1 = this_02->carDir_ == 0;
    }
    if (bVar1) {
      memset((coorddef *)(&local_54 + 4),0,0xc);
      SetTarget__13AIState_ChaseP8Car_tObjP8coorddef
                (this_02,*(Car_tObj **)
                          &(*(Car_tObj **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags)->N
                 ,(coorddef *)(&local_54 + 4));
      SetMurderMode__13AIState_Chaseii(this_02,1,0x20);
    }
    targetSlice = CheckForNewTarget__10AIHigh_Cop(this);
    if (targetSlice != 0) {
      GetCheckChasePosition__10AIHigh_CopP8coorddef(this,(coorddef *)(&local_54 + 4));
      SetTarget__13AIState_ChaseP8Car_tObjP8coorddef
                (this_02,*(Car_tObj **)
                          &(*(Car_tObj **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags)->N
                 ,(coorddef *)(&local_54 + 4));
    }
    cVar12 = (this->AIHigh_BasicCop).type_;
    if (cVar12 == COP_SUPER) {
LAB_80064750:
      sVar14 = SPEECH_INTENSITY_MED;
      if (true) {
        sVar14 = ~SPEECH_INTENSITY_LOW;
      }
      (((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->speechInfo).speechIntensity = sVar14;
      (((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->desiredVector).z = 1;
LAB_80064778:
      AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
      this_04 = (AIState_Normal *)__builtin_new(8);
      this_05 = (AIState_Base *)
                __14AIState_NormalP8Car_tObj(this_04,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
      pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
      if (pAVar13 != (AIState_Base *)0x0) {
        (**(code **)(pAVar13->_vf[0] + 0x14))
                  ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
      }
      (this->AIHigh_BasicCop).AIHigh_Base.state_ = this_05;
      (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = STATE_NORMAL;
    }
    else {
      if (((cVar12 == 4) ||
          (piVar9 = *(int **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags,
          piVar9 == (int *)0x0)) || (1 < *(int *)(*piVar9 + 0x390))) {
        if ((cVar12 == COP_SUPER) || (cVar12 == 4)) goto LAB_80064750;
        goto LAB_80064778;
      }
    }
    if (((this->AIHigh_BasicCop).driveAway_ == DRIVEAWAY_NONE) &&
       (targetSlice = AILife_EvaluateLife__FP8Car_tObj((this->AIHigh_BasicCop).AIHigh_Base.carObj_),
       targetSlice == 0)) {
      if ((this->AIHigh_BasicCop).blockade_.initialPlayerDistanceMetersInt == 0)
      goto switchD_80063d30_caseD_6;
      goto LAB_80064a0c;
    }
    targetSlice = AILife_EvaluateLife__FP8Car_tObj((this->AIHigh_BasicCop).AIHigh_Base.carObj_);
    if ((targetSlice != 0) &&
       ((this->AIHigh_BasicCop).blockade_.initialPlayerDistanceMetersInt == 0)) {
      pSVar6 = Mobile__6SpeechP8Car_tObj((this->AIHigh_BasicCop).AIHigh_Base.carObj_);
      (**(code **)(pSVar6->_vf[0] + 0x3c))
                ((int)&(pSVar6->fPosition).flags + (int)*(short *)(pSVar6->_vf[0] + 0x38));
    }
    pSVar6 = Mobile__6SpeechP8Car_tObj((this->AIHigh_BasicCop).AIHigh_Base.carObj_);
    (**(code **)(pSVar6->_vf[0] + 0x84))
              ((int)&(pSVar6->fPosition).flags + (int)*(short *)(pSVar6->_vf[0] + 0x80));
    (this->AIHigh_BasicCop).driveAway_ = DRIVEAWAY_NONE;
    AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
    this_03 = (AIState_Purgatory *)__builtin_new(8);
    this_05 = (AIState_Base *)
              __17AIState_PurgatoryP8Car_tObj(this_03,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
    pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
    if (pAVar13 != (AIState_Base *)0x0) {
      (**(code **)(pAVar13->_vf[0] + 0x14))
                ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
    }
    sVar10 = STATE_PURGATORY;
    break;
  case STATE_OFFROAD:
    carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
    if ((carObj->N).simOptz == '\0') {
      carObj->caravanFollowBehindDistanceMeters = 0;
    }
    else {
      carObj->caravanFollowBehindDistanceMeters = 0x18000;
    }
    this->forcePurgatory_ = -1;
    targetSlice = 0;
    ppCVar17 = (Car_tObj **)&_Cars_gRaceCarList;
    while (targetSlice < Cars_gNumRaceCars) {
      if (*(int *)((&_highLevelAIObjs)[(*ppCVar17)->carIndex] + 0x78) != 0) {
        UnleashIfInRange__15AIState_OffroadP8Car_tObj
                  ((AIState_Offroad *)(this->AIHigh_BasicCop).AIHigh_Base.state_,*ppCVar17);
      }
      ppCVar17 = ppCVar17 + 1;
      targetSlice = targetSlice + 1;
    }
    carObj = (this->AIHigh_BasicCop).AIHigh_Base.carObj_;
    targetSlice = (int)(carObj->N).simRoadInfo.slice * 0x20;
    if (((int)-((uint)*(byte *)(targetSlice + 0x1e) * 0x8000 *
               (uint)(*(byte *)(targetSlice + 0x1d) >> 4)) <= carObj->desiredSpeed) &&
       (carObj->desiredSpeed <=
        (int)((uint)*(byte *)(targetSlice + 0x1f) * 0x8000 *
             ((uint)*(byte *)(targetSlice + 0x1d) & 0xf)))) {
      carObj->caravanFollowBehindDistanceMeters = 0;
      AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
      this_04 = (AIState_Normal *)__builtin_new(8);
      this_05 = (AIState_Base *)
                __14AIState_NormalP8Car_tObj(this_04,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
      pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
      if (pAVar13 != (AIState_Base *)0x0) {
        (**(code **)(pAVar13->_vf[0] + 0x14))
                  ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
      }
      (this->AIHigh_BasicCop).AIHigh_Base.state_ = this_05;
      (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = STATE_NORMAL;
    }
    if (((this->AIHigh_BasicCop).driveAway_ == DRIVEAWAY_NONE) &&
       (targetSlice = AILife_EvaluateLife__FP8Car_tObj((this->AIHigh_BasicCop).AIHigh_Base.carObj_),
       targetSlice == 0)) goto switchD_80063d30_caseD_6;
    ((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->caravanFollowBehindDistanceMeters = 0;
    (this->AIHigh_BasicCop).driveAway_ = DRIVEAWAY_NONE;
    AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
    this_03 = (AIState_Purgatory *)__builtin_new(8);
    this_05 = (AIState_Base *)
              __17AIState_PurgatoryP8Car_tObj(this_03,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
    pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
    if (pAVar13 != (AIState_Base *)0x0) {
      (**(code **)(pAVar13->_vf[0] + 0x14))
                ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
    }
    sVar10 = STATE_PURGATORY;
    break;
  default:
    goto switchD_80063d30_caseD_6;
  case STATE_GOTOSLICE:
    this_01 = (AIState_GotoSlice *)(this->AIHigh_BasicCop).AIHigh_Base.state_;
    AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
    targetSlice = InTargetSliceRange__17AIState_GotoSlicei(this_01,0xa0000);
    if (targetSlice == 0) goto switchD_80063d30_caseD_6;
    this_04 = (AIState_Normal *)__builtin_new(8);
    this_05 = (AIState_Base *)
              __14AIState_NormalP8Car_tObj(this_04,(this->AIHigh_BasicCop).AIHigh_Base.carObj_);
    pAVar13 = (this->AIHigh_BasicCop).AIHigh_Base.state_;
    if (pAVar13 != (AIState_Base *)0x0) {
      (**(code **)(pAVar13->_vf[0] + 0x14))
                ((int)&pAVar13->carObj_ + (int)*(short *)(pAVar13->_vf[0] + 0x10),3);
    }
    sVar10 = STATE_NORMAL;
  }
  (this->AIHigh_BasicCop).AIHigh_Base.state_ = this_05;
  (this->AIHigh_BasicCop).AIHigh_Base.stateType_ = sVar10;
switchD_80063d30_caseD_6:
  StateExecute__12AIState_Base((this->AIHigh_BasicCop).AIHigh_Base.state_);
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ CheckForNeedyPlayers__10AIHigh_Cop(struct AIHigh_Cop *this /*$a0*/)
 // line 819, offset 0x80065394
	/* begin block 1 */
		// Start line: 820
		// Start offset: 0x80065394
		// Variables:
	// 		int needy; // $a3

		/* begin block 1.1 */
			// Start line: 821
			// Start offset: 0x80065394
			// Variables:
		// 		int hLoop; // $a2

			/* begin block 1.1.1 */
				// Start line: 823
				// Start offset: 0x800653B8
				// Variables:
			// 		struct Car_tObj *thisPlayerObj; // $v1
			// 		struct AIHigh_Player *thisPlayer; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 825
					// Start offset: 0x800653C4

					/* begin block 1.1.1.1.1 */
						// Start line: 825
						// Start offset: 0x800653C4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 825
							// Start offset: 0x800653C4
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800653C4
						// End Line: 825
					/* end block 1.1.1.1.1 */
					// End offset: 0x800653C4
					// End Line: 825
				/* end block 1.1.1.1 */
				// End offset: 0x8006541C
				// End Line: 829
			/* end block 1.1.1 */
			// End offset: 0x8006541C
			// End Line: 829
		/* end block 1.1 */
		// End offset: 0x80065428
		// End Line: 834
	/* end block 1 */
	// End offset: 0x80065428
	// End Line: 836

int CheckForNeedyPlayers__10AIHigh_Cop(AIHigh_Cop *this)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = -1;
  iVar4 = 0;
  piVar3 = &_Cars_gHumanRaceCarList;
  while (iVar4 < Cars_gNumHumanRaceCars) {
    iVar2 = *(int *)(*piVar3 + 0x254);
    if (800 < *(int *)((&_highLevelAIObjs)[iVar2] + 0xac)) {
      iVar1 = *(int *)(*piVar3 + 0x564);
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (0x140000 < iVar1) {
        iVar5 = iVar2;
      }
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
  }
  return iVar5;


}




// decompiled code
// original method signature: 
// void /*$ra*/ CheckForWipeOut__10AIHigh_Cop(struct AIHigh_Cop *this /*$t2*/)
 // line 845, offset 0x80065430
	/* begin block 1 */
		// Start line: 846
		// Start offset: 0x80065430
		// Variables:
	// 		int perTickProb; // $v1
	// 		int randVal; // $a0
	// 		int thisTargetLevel; // $t0

		/* begin block 1.1 */
			// Start line: 859
			// Start offset: 0x80065444

			/* begin block 1.1.1 */
				// Start line: 859
				// Start offset: 0x80065454

				/* begin block 1.1.1.1 */
					// Start line: 859
					// Start offset: 0x80065454
				/* end block 1.1.1.1 */
				// End offset: 0x80065454
				// End Line: 859
			/* end block 1.1.1 */
			// End offset: 0x80065454
			// End Line: 859

			/* begin block 1.1.2 */
				// Start line: 859
				// Start offset: 0x8006548C

				/* begin block 1.1.2.1 */
					// Start line: 859
					// Start offset: 0x8006548C
				/* end block 1.1.2.1 */
				// End offset: 0x800654A4
				// End Line: 859
			/* end block 1.1.2 */
			// End offset: 0x800654A4
			// End Line: 859
		/* end block 1.1 */
		// End offset: 0x800654C0
		// End Line: 860

		/* begin block 1.2 */
			// Start line: 862
			// Start offset: 0x800654C0

			/* begin block 1.2.1 */
				// Start line: 862
				// Start offset: 0x800654C0
			/* end block 1.2.1 */
			// End offset: 0x800654C0
			// End Line: 862
		/* end block 1.2 */
		// End offset: 0x800654C0
		// End Line: 862

		/* begin block 1.3 */
			// Start line: 862
			// Start offset: 0x800654C0
			// Variables:
		// 		int hLoop; // $a3

			/* begin block 1.3.1 */
				// Start line: 866
				// Start offset: 0x80065538
				// Variables:
			// 		struct Car_tObj *thisPlayerObj; // $v0
			// 		struct AIHigh_Player *thisPlayer; // $v0

				/* begin block 1.3.1.1 */
					// Start line: 868
					// Start offset: 0x80065544

					/* begin block 1.3.1.1.1 */
						// Start line: 868
						// Start offset: 0x80065544
					/* end block 1.3.1.1.1 */
					// End offset: 0x80065544
					// End Line: 868
				/* end block 1.3.1.1 */
				// End offset: 0x80065544
				// End Line: 868
			/* end block 1.3.1 */
			// End offset: 0x80065594
			// End Line: 880
		/* end block 1.3 */
		// End offset: 0x800655A0
		// End Line: 885
	/* end block 1 */
	// End offset: 0x800655A0
	// End Line: 885

void CheckForWipeOut__10AIHigh_Cop(AIHigh_Cop *this)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = Cars_gNumHumanRaceCars;
  if ((this->AIHigh_BasicCop).AIHigh_Base.stateType_ != STATE_CHASE) {
    return;
  }
  piVar4 = *(int **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags;
  bVar1 = false;
  if (((piVar4 != (int *)0x0) && ((*(uint *)(*piVar4 + 0x260) & 8) != 0)) &&
     (((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->aiGlue < 1)) {
    iVar3 = piVar4[0x23];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xffff;
    }
    if (iVar3 >> 0x10 < 2) goto LAB_800654b8;
  }
  bVar1 = true;
LAB_800654b8:
  iVar3 = 0;
  if (!bVar1) {
    randtemp = fastRandom;
    piVar4 = &_Cars_gHumanRaceCarList;
    iVar5 = *(int *)(*(int *)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags + 0x94);
    fastRandom = fastRandom & 0xffff;
    while (iVar3 < iVar2) {
      if ((iVar5 < *(int *)((&_highLevelAIObjs)[*(int *)(*piVar4 + 0x254)] + 0x94)) && (false)) {
        ((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->aiGlue = 0x280;
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + 1;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ CheckForNewTarget__10AIHigh_Cop(struct AIHigh_Cop *this /*$s4*/)
 // line 891, offset 0x800655a8
	/* begin block 1 */
		// Start line: 892
		// Start offset: 0x800655A8
		// Variables:
	// 		struct AIHigh_Player *newTarget; // $s3
	// 		int newTargetDistance; // $s5
	// 		int playerLoop; // $s2
	// 		struct AIHigh_Player *old; // $s7

		/* begin block 1.1 */
			// Start line: 892
			// Start offset: 0x800655A8

			/* begin block 1.1.1 */
				// Start line: 892
				// Start offset: 0x800655A8
				// Variables:
			// 		struct AIHigh_BasicCop *this; // $s4

				/* begin block 1.1.1.1 */
					// Start line: 892
					// Start offset: 0x800655A8
				/* end block 1.1.1.1 */
				// End offset: 0x800655A8
				// End Line: 892
			/* end block 1.1.1 */
			// End offset: 0x800655A8
			// End Line: 892

			/* begin block 1.1.2 */
				// Start line: 901
				// Start offset: 0x800655F0
				// Variables:
			// 		struct AIHigh_BasicCop *this; // $s4

				/* begin block 1.1.2.1 */
					// Start line: 901
					// Start offset: 0x800655F0
				/* end block 1.1.2.1 */
				// End offset: 0x800655F0
				// End Line: 901
			/* end block 1.1.2 */
			// End offset: 0x800655F0
			// End Line: 901

			/* begin block 1.1.3 */
				// Start line: 901
				// Start offset: 0x800655FC
				// Variables:
			// 		struct AIHigh_BasicCop *this; // $s4

				/* begin block 1.1.3.1 */
					// Start line: 901
					// Start offset: 0x800655FC
				/* end block 1.1.3.1 */
				// End offset: 0x800655FC
				// End Line: 901
			/* end block 1.1.3 */
			// End offset: 0x800655FC
			// End Line: 901
		/* end block 1.1 */
		// End offset: 0x80065610
		// End Line: 902

		/* begin block 1.2 */
			// Start line: 907
			// Start offset: 0x80065610

			/* begin block 1.2.1 */
				// Start line: 907
				// Start offset: 0x80065624
				// Variables:
			// 		int thisCarIndex; // $v0
			// 		struct AIHigh_Player *thisPlayer; // $s0
			// 		int needs; // $v1
			// 		int got; // $v0

				/* begin block 1.2.1.1 */
					// Start line: 909
					// Start offset: 0x8006563C

					/* begin block 1.2.1.1.1 */
						// Start line: 909
						// Start offset: 0x8006563C
					/* end block 1.2.1.1.1 */
					// End offset: 0x8006563C
					// End Line: 909
				/* end block 1.2.1.1 */
				// End offset: 0x8006563C
				// End Line: 909

				/* begin block 1.2.1.2 */
					// Start line: 912
					// Start offset: 0x8006566C

					/* begin block 1.2.1.2.1 */
						// Start line: 912
						// Start offset: 0x8006566C
					/* end block 1.2.1.2.1 */
					// End offset: 0x8006566C
					// End Line: 912
				/* end block 1.2.1.2 */
				// End offset: 0x8006566C
				// End Line: 912

				/* begin block 1.2.1.3 */
					// Start line: 912
					// Start offset: 0x80065680
					// Variables:
				// 		enum copType type; // $v0

					/* begin block 1.2.1.3.1 */
						// Start line: 912
						// Start offset: 0x80065680
					/* end block 1.2.1.3.1 */
					// End offset: 0x80065680
					// End Line: 912
				/* end block 1.2.1.3 */
				// End offset: 0x80065680
				// End Line: 912

				/* begin block 1.2.1.4 */
					// Start line: 917
					// Start offset: 0x800656A8

					/* begin block 1.2.1.4.1 */
						// Start line: 918
						// Start offset: 0x800656B4
						// Variables:
					// 		int copToTargetDistanceMeters; // $v1

						/* begin block 1.2.1.4.1.1 */
							// Start line: 918
							// Start offset: 0x800656B4
							// Variables:
						// 		struct AIHigh_Base *this; // $s0

							/* begin block 1.2.1.4.1.1.1 */
								// Start line: 918
								// Start offset: 0x800656B4
							/* end block 1.2.1.4.1.1.1 */
							// End offset: 0x800656B4
							// End Line: 918
						/* end block 1.2.1.4.1.1 */
						// End offset: 0x800656B4
						// End Line: 918
					/* end block 1.2.1.4.1 */
					// End offset: 0x800656E4
					// End Line: 926
				/* end block 1.2.1.4 */
				// End offset: 0x800656E4
				// End Line: 926
			/* end block 1.2.1 */
			// End offset: 0x800656E4
			// End Line: 926
		/* end block 1.2 */
		// End offset: 0x800656F0
		// End Line: 929

		/* begin block 1.3 */
			// Start line: 932
			// Start offset: 0x800656F0

			/* begin block 1.3.1 */
				// Start line: 933
				// Start offset: 0x800656F8

				/* begin block 1.3.1.1 */
					// Start line: 935
					// Start offset: 0x800656F8

					/* begin block 1.3.1.1.1 */
						// Start line: 935
						// Start offset: 0x80065708
						// Variables:
					// 		int thisCarIndex; // $v0
					// 		struct AIHigh_Player *thisPlayer; // $s0
					// 		int copToTargetDistanceMeters; // $v1

						/* begin block 1.3.1.1.1.1 */
							// Start line: 937
							// Start offset: 0x80065720
							// Variables:
						// 		struct AIHigh_Base *this; // $s0

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 937
								// Start offset: 0x80065720
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x80065720
							// End Line: 937
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x80065720
						// End Line: 937

						/* begin block 1.3.1.1.1.2 */
							// Start line: 937
							// Start offset: 0x80065720

							/* begin block 1.3.1.1.1.2.1 */
								// Start line: 942
								// Start offset: 0x80065764

								/* begin block 1.3.1.1.1.2.1.1 */
									// Start line: 942
									// Start offset: 0x80065764
								/* end block 1.3.1.1.1.2.1.1 */
								// End offset: 0x80065764
								// End Line: 942
							/* end block 1.3.1.1.1.2.1 */
							// End offset: 0x80065764
							// End Line: 942
						/* end block 1.3.1.1.1.2 */
						// End offset: 0x8006577C
						// End Line: 946
					/* end block 1.3.1.1.1 */
					// End offset: 0x8006577C
					// End Line: 946
				/* end block 1.3.1.1 */
				// End offset: 0x80065788
				// End Line: 948
			/* end block 1.3.1 */
			// End offset: 0x80065788
			// End Line: 948
		/* end block 1.3 */
		// End offset: 0x80065788
		// End Line: 948

		/* begin block 1.4 */
			// Start line: 952
			// Start offset: 0x80065788

			/* begin block 1.4.1 */
				// Start line: 953
				// Start offset: 0x80065798

				/* begin block 1.4.1.1 */
					// Start line: 954
					// Start offset: 0x80065798

					/* begin block 1.4.1.1.1 */
						// Start line: 954
						// Start offset: 0x80065798
					/* end block 1.4.1.1.1 */
					// End offset: 0x80065798
					// End Line: 954
				/* end block 1.4.1.1 */
				// End offset: 0x80065798
				// End Line: 954
			/* end block 1.4.1 */
			// End offset: 0x800657C0
			// End Line: 959
		/* end block 1.4 */
		// End offset: 0x800657DC
		// End Line: 969
	/* end block 1 */
	// End offset: 0x800657DC
	// End Line: 969

int CheckForNewTarget__10AIHigh_Cop(AIHigh_Cop *this)
{
  bool bVar1;
  int iVar2;
  copType cVar3;
  int iVar4;
  AIHigh_Player *pAVar5;
  AIHigh_Player *pAVar6;
  int *piVar7;
  int iVar8;
  AIHigh_Player *target;
  int iVar9;
  AIHigh_Player *pAVar10;
  
  target = (AIHigh_Player *)0x0;
  iVar9 = 0x27100000;
  cVar3 = (this->AIHigh_BasicCop).type_;
  pAVar10 = *(AIHigh_Player **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags;
  bVar1 = false;
  if (((cVar3 == COP_SUPER) || (cVar3 == 4)) || (cVar3 == 2)) {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  iVar8 = 0;
  piVar7 = &_Cars_gRaceCarList;
  while (iVar8 < Cars_gNumRaceCars) {
    pAVar6 = (AIHigh_Player *)(&_highLevelAIObjs)[*(int *)(*piVar7 + 0x254)];
    iVar4 = 0;
    if ((pAVar6->AIHigh_BasicPerp).basicPerpInfo_.copsAssigned_[0] != 0) {
      iVar4 = *(int *)((&pAVar6->AIHigh_BasicPerp)[1].AIHigh_Base._vf[1] +
                      (int)(this->AIHigh_BasicCop).AIHigh_Base._vf[1] * 4);
    }
    pAVar5 = *(AIHigh_Player **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags;
    iVar2 = (&(pAVar6->AIHigh_BasicPerp).lastPullOverTime_)
            [(int)(this->AIHigh_BasicCop).AIHigh_Base._vf[1]];
    if ((pAVar5 != (AIHigh_Player *)0x0) && (pAVar5 == pAVar6)) {
      iVar2 = iVar2 + 0x8c7;
    }
    if (iVar2 < iVar4) {
      iVar4 = AIWorld_ApxSplineDistance__FP8Car_tObjT0
                        ((this->AIHigh_BasicCop).AIHigh_Base.carObj_,
                         (pAVar6->AIHigh_BasicPerp).AIHigh_Base.carObj_);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < iVar9) {
        target = pAVar6;
        iVar9 = iVar4;
      }
    }
    piVar7 = piVar7 + 1;
    iVar8 = iVar8 + 1;
  }
  iVar8 = 0;
  if (target == (AIHigh_Player *)0x0) {
    piVar7 = &_Cars_gRaceCarList;
    while (iVar8 < Cars_gNumRaceCars) {
      pAVar6 = (AIHigh_Player *)(&_highLevelAIObjs)[*(int *)(*piVar7 + 0x254)];
      iVar4 = AIWorld_ApxSplineDistance__FP8Car_tObjT0
                        ((this->AIHigh_BasicCop).AIHigh_Base.carObj_,
                         (pAVar6->AIHigh_BasicPerp).AIHigh_Base.carObj_);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((iVar4 < iVar9) && ((pAVar6->AIHigh_BasicPerp).basicPerpInfo_.copsAssigned_[0] != 0)) {
        target = pAVar6;
        iVar9 = iVar4;
      }
      piVar7 = piVar7 + 1;
      iVar8 = iVar8 + 1;
    }
    if (target == (AIHigh_Player *)0x0) goto LAB_800657c0;
  }
  if (target != pAVar10) {
    AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,target);
    this->chaseIndex_ =
         *(int *)((&target->AIHigh_BasicPerp)[1].AIHigh_Base._vf[1] +
                 (int)(this->AIHigh_BasicCop).AIHigh_Base._vf[1] * 4 + 0x18);
    return 1;
  }
LAB_800657c0:
  if ((pAVar10 != (AIHigh_Player *)0x0) && (target == (AIHigh_Player *)0x0)) {
    AssignToPlayer__10AIHigh_CopP13AIHigh_Player(this,(AIHigh_Player *)0x0);
  }
  return 0;


}




// decompiled code
// original method signature: 
// void /*$ra*/ AssignToPlayer__10AIHigh_CopP13AIHigh_Player(struct AIHigh_Cop *this /*$s0*/, struct AIHigh_Player *target /*$s1*/)
 // line 975, offset 0x80065808
	/* begin block 1 */
		// Start line: 976
		// Start offset: 0x80065808
	/* end block 1 */
	// End offset: 0x80065880
	// End Line: 990

void AssignToPlayer__10AIHigh_CopP13AIHigh_Player(AIHigh_Cop *this,AIHigh_Player *target)
{
  AIHigh_BasicPerp *this_00;
  
  this_00 = *(AIHigh_BasicPerp **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags;
  if (this_00 != (AIHigh_BasicPerp *)0x0) {
    RemoveChaser__16AIHigh_BasicPerpii7copType
              (this_00,(int)(this->AIHigh_BasicCop).AIHigh_Base._vf[2],
               ((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->carIndex,
               (copType)(this->AIHigh_BasicCop).AIHigh_Base._vf[1]);
  }
  if ((target == (AIHigh_Player *)0x0) && ((this->AIHigh_BasicCop).type_ != COP_SUPER)) {
    (this->AIHigh_BasicCop).type_ = COP_REGULAR;
  }
  *(AIHigh_Player **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags = target;
  if (target != (AIHigh_Player *)0x0) {
    AddChaser__16AIHigh_BasicPerpii7copType
              ((AIHigh_BasicPerp *)target,(int)(this->AIHigh_BasicCop).AIHigh_Base._vf[2],
               ((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->carIndex,
               (copType)(this->AIHigh_BasicCop).AIHigh_Base._vf[1]);
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ GetCheckChasePosition__10AIHigh_CopP8coorddef(struct AIHigh_Cop *this /*$s0*/, struct coorddef *pos /*$s2*/)
 // line 995, offset 0x80065894
	/* begin block 1 */
		// Start line: 996
		// Start offset: 0x80065894
		// Variables:
	// 		int newPosition; // $v0
	// 		int changed; // $s1
	/* end block 1 */
	// End offset: 0x800658E0
	// End Line: 1015

int GetCheckChasePosition__10AIHigh_CopP8coorddef(AIHigh_Cop *this,coorddef *pos)
{
  bool bVar1;
  AIHigh_Player *pAVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pAVar2 = (AIHigh_Player *)
           CheckChaserPosition__16AIHigh_BasicPerpii
                     (*(AIHigh_BasicPerp **)&(this->AIHigh_BasicCop).blockade_.blockadeSpeechFlags,
                      (int)(this->AIHigh_BasicCop).AIHigh_Base._vf[2],
                      ((this->AIHigh_BasicCop).AIHigh_Base.carObj_)->carIndex);
  bVar1 = pAVar2 != this->perpTarget_;
  if (bVar1) {
    this->perpTarget_ = pAVar2;
  }
  iVar3 = (int)this->perpTarget_ * 0xc + this->chaseIndex_ * 0x48;
  iVar4 = *(int *)(&DAT_8010cef0 + iVar3);
  iVar5 = *(int *)(&DAT_8010cef4 + iVar3);
  pos->x = *(int *)(&AIH_Cop_chasePositions + iVar3);
  pos->y = iVar4;
  pos->z = iVar5;
  return (uint)bVar1;


}




// decompiled code
// original method signature: 
// union trigger_t * /*$ra*/ CheckForNewTriggers__10AIHigh_Cop(struct AIHigh_Cop *this /*stack 0*/)
 // line 1021, offset 0x80065944
	/* begin block 1 */
		// Start line: 1022
		// Start offset: 0x80065944

		/* begin block 1.1 */
			// Start line: 1042
			// Start offset: 0x80065990
			// Variables:
		// 		int sortedLoop; // $fp

			/* begin block 1.1.1 */
				// Start line: 1042
				// Start offset: 0x800659A0
				// Variables:
			// 		struct Car_tObj *testCar; // $s5

				/* begin block 1.1.1.1 */
					// Start line: 1044
					// Start offset: 0x800659A8

					/* begin block 1.1.1.1.1 */
						// Start line: 1046
						// Start offset: 0x800659D0
						// Variables:
					// 		int dir; // $v1
					// 		struct AIHigh_Player *thisPlayer; // $s0
					// 		int needs; // $a0
					// 		int got; // stack offset -44
					// 		struct copLevel_t *pLevel; // $a2
					// 		int thisSlice; // $v1
					// 		int startSlice; // $a0
					// 		int endSlice; // $s4
					// 		int fRandomChance; // $s2

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1048
							// Start offset: 0x800659D0
							// Variables:
						// 		struct AIHigh_Player *this; // $s0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1048
								// Start offset: 0x800659D0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800659D0
							// End Line: 1048
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800659D0
						// End Line: 1048

						/* begin block 1.1.1.1.1.2 */
							// Start line: 1048
							// Start offset: 0x800659D0

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 1048
								// Start offset: 0x800659D0
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x800659D0
							// End Line: 1048
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x800659D0
						// End Line: 1048

						/* begin block 1.1.1.1.1.3 */
							// Start line: 1048
							// Start offset: 0x800659D0
							// Variables:
						// 		struct AICop_BasicPerpInfo *this; // $v1
						// 		enum copType type; // $v0

							/* begin block 1.1.1.1.1.3.1 */
								// Start line: 1048
								// Start offset: 0x800659D0
							/* end block 1.1.1.1.1.3.1 */
							// End offset: 0x800659D0
							// End Line: 1048
						/* end block 1.1.1.1.1.3 */
						// End offset: 0x800659D0
						// End Line: 1048

						/* begin block 1.1.1.1.1.4 */
							// Start line: 1048
							// Start offset: 0x800659D0

							/* begin block 1.1.1.1.1.4.1 */
								// Start line: 1048
								// Start offset: 0x800659D0

								/* begin block 1.1.1.1.1.4.1.1 */
									// Start line: 1048
									// Start offset: 0x800659D0
								/* end block 1.1.1.1.1.4.1.1 */
								// End offset: 0x800659D0
								// End Line: 1048
							/* end block 1.1.1.1.1.4.1 */
							// End offset: 0x800659D0
							// End Line: 1048

							/* begin block 1.1.1.1.1.4.2 */
								// Start line: 1062
								// Start offset: 0x80065A14

								/* begin block 1.1.1.1.1.4.2.1 */
									// Start line: 1064
									// Start offset: 0x80065A14

									/* begin block 1.1.1.1.1.4.2.1.1 */
										// Start line: 1067
										// Start offset: 0x80065A28
										// Variables:
									// 		struct AIHigh_Base *this; // $s0

										/* begin block 1.1.1.1.1.4.2.1.1.1 */
											// Start line: 1067
											// Start offset: 0x80065A28
										/* end block 1.1.1.1.1.4.2.1.1.1 */
										// End offset: 0x80065A28
										// End Line: 1067
									/* end block 1.1.1.1.1.4.2.1.1 */
									// End offset: 0x80065A28
									// End Line: 1067
								/* end block 1.1.1.1.1.4.2.1 */
								// End offset: 0x80065A44
								// End Line: 1070
							/* end block 1.1.1.1.1.4.2 */
							// End offset: 0x80065A44
							// End Line: 1070
						/* end block 1.1.1.1.1.4 */
						// End offset: 0x80065A54
						// End Line: 1074

						/* begin block 1.1.1.1.1.5 */
							// Start line: 1088
							// Start offset: 0x80065A6C

							/* begin block 1.1.1.1.1.5.1 */
								// Start line: 1088
								// Start offset: 0x80065A6C
								// Variables:
							// 		struct AIHigh_Player *this; // $s0

								/* begin block 1.1.1.1.1.5.1.1 */
									// Start line: 1088
									// Start offset: 0x80065A6C
								/* end block 1.1.1.1.1.5.1.1 */
								// End offset: 0x80065A6C
								// End Line: 1088
							/* end block 1.1.1.1.1.5.1 */
							// End offset: 0x80065A6C
							// End Line: 1088
						/* end block 1.1.1.1.1.5 */
						// End offset: 0x80065A8C
						// End Line: 1089

						/* begin block 1.1.1.1.1.6 */
							// Start line: 1101
							// Start offset: 0x80065B0C
							// Variables:
						// 		struct AIHigh_Player *this; // $s0
						// 		int newSlice; // $v1

							/* begin block 1.1.1.1.1.6.1 */
								// Start line: 1101
								// Start offset: 0x80065B0C
								// Variables:
							// 		int temp; // $a1
							/* end block 1.1.1.1.1.6.1 */
							// End offset: 0x80065B0C
							// End Line: 1101
						/* end block 1.1.1.1.1.6 */
						// End offset: 0x80065B0C
						// End Line: 1101

						/* begin block 1.1.1.1.1.7 */
							// Start line: 1116
							// Start offset: 0x80065B34
							// Variables:
						// 		int sliceLoop; // $s1

							/* begin block 1.1.1.1.1.7.1 */
								// Start line: 1116
								// Start offset: 0x80065B50
								// Variables:
							// 		int triggerHere; // $s3

								/* begin block 1.1.1.1.1.7.1.1 */
									// Start line: 1121
									// Start offset: 0x80065B64

									/* begin block 1.1.1.1.1.7.1.1.1 */
										// Start line: 1122
										// Start offset: 0x80065B88
										// Variables:
									// 		int iRandomChance; // $s2
									// 		int randomValue; // $s0

										/* begin block 1.1.1.1.1.7.1.1.1.1 */
											// Start line: 1146
											// Start offset: 0x80065BF4

											/* begin block 1.1.1.1.1.7.1.1.1.1.1 */
												// Start line: 1148
												// Start offset: 0x80065C0C
												// Variables:
											// 		int unused; // stack offset -48
											/* end block 1.1.1.1.1.7.1.1.1.1.1 */
											// End offset: 0x80065C28
											// End Line: 1154
										/* end block 1.1.1.1.1.7.1.1.1.1 */
										// End offset: 0x80065C28
										// End Line: 1161
									/* end block 1.1.1.1.1.7.1.1.1 */
									// End offset: 0x80065C28
									// End Line: 1161
								/* end block 1.1.1.1.1.7.1.1 */
								// End offset: 0x80065C28
								// End Line: 1161
							/* end block 1.1.1.1.1.7.1 */
							// End offset: 0x80065C28
							// End Line: 1161
						/* end block 1.1.1.1.1.7 */
						// End offset: 0x80065C30
						// End Line: 1164
					/* end block 1.1.1.1.1 */
					// End offset: 0x80065C30
					// End Line: 1164
				/* end block 1.1.1.1 */
				// End offset: 0x80065C30
				// End Line: 1164
			/* end block 1.1.1 */
			// End offset: 0x80065C30
			// End Line: 1164
		/* end block 1.1 */
		// End offset: 0x80065C38
		// End Line: 1166
	/* end block 1 */
	// End offset: 0x80065C3C
	// End Line: 1167

trigger_t * CheckForNewTriggers__10AIHigh_Cop(AIHigh_Cop *this)
{
  short sVar1;
  __vtbl_ptr_type *p_Var2;
  int iVar3;
  int iVar4;
  int trigger;
  Car_tObj *pCVar5;
  trigger_t *pabVar6;
  uint uVar7;
  int slice;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iStack48;
  int local_2c;
  
  iVar12 = Cars_gNumCars;
  if (false) {
    while (iVar12 = iVar12 + -1, -1 < iVar12) {
      iVar11 = (&_Cars_gTotalSortedList)[iVar12];
      if ((*(uint *)(iVar11 + 0x260) & 1) != 0) {
        piVar9 = (int *)(&_highLevelAIObjs)[*(int *)(iVar11 + 0x254)];
        p_Var2 = (this->AIHigh_BasicCop).AIHigh_Base._vf[1];
        iVar10 = piVar9[0x21];
        slice = (int)p_Var2 * 4;
        local_2c = piVar9[(int)(p_Var2 + 0x1c)];
        if (piVar9[0x1e] == 0) {
          iVar10 = iVar10 << 1;
          if (0 < *(int *)(piVar9[0x27] + slice)) {
            iVar3 = AICop_NoCopsInArea__Fii((int)*(short *)(*piVar9 + 8),0x1f40000);
            slice = 1;
            if (iVar3 != 0) goto LAB_80065a54;
          }
          slice = 0;
        }
        else {
          slice = *(int *)(piVar9[0x27] + slice);
        }
LAB_80065a54:
        if (DAT_801131f4 == 2) {
          iVar10 = 0x10000;
        }
        if ((0x1bf < -piVar9[0x1a]) && (local_2c < slice)) {
          slice = -1;
          if (-1 < *(int *)(iVar11 + 0x564)) {
            slice = 1;
          }
          if (slice * 0x1f < 0) {
            sVar1 = *(short *)(iVar11 + 8);
          }
          else {
            sVar1 = *(short *)(iVar11 + 8);
          }
          iVar4 = (int)sVar1 + slice * 0x1f;
          iVar3 = piVar9[0x22];
          piVar9[0x22] = iVar4;
          slice = iVar4;
          if (iVar3 < iVar4) {
            slice = iVar3;
            iVar3 = iVar4;
          }
          iVar4 = iVar3 - slice;
          while ((slice < iVar3 && (iVar4 < 6))) {
            trigger = CheckForTriggerAtSlice__24AITrigger_TriggerManagerii
                                (_triggerManagerCops,*(int *)(iVar11 + 0x254),slice);
            iVar8 = iVar10 * 100;
            if (trigger == -1) {
LAB_80065c28:
              slice = slice + 1;
            }
            else {
              if (iVar8 < 0) {
                iVar8 = iVar8 + 0xffff;
              }
              randtemp = fastRandom;
              uVar7 = fastRandom >> 8;
              fastRandom = fastRandom & 0xffff;
              pCVar5 = AILife_IsSliceInAnyVisibleArea__Fi(slice);
              if (pCVar5 != (Car_tObj *)0x0) goto LAB_80065c28;
              if ((local_2c != 0) ||
                 (slice = slice + 1, (int)((uVar7 & 0xffff) * 0x19 >> 0xe) < iVar8 >> 0x10)) {
                pabVar6 = GetTrigger__24AITrigger_TriggerManageriPi
                                    (_triggerManagerCops,trigger,&iStack48);
                return pabVar6;
              }
            }
          }
        }
      }
    }
  }
  return (trigger_t *)0x0;


}





