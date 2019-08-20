#include "NFS4.H"
#include "AIH_TRAF.H"

// decompiled code
// original method signature: 
// struct Car_tObj * /*$ra*/ CheckForCops__14AIHigh_TrafficPi(struct AIHigh_Traffic *this /*$s5*/, int *closestDistance /*$s4*/)
 // line 32, offset 0x80065c8c
	/* begin block 1 */
		// Start line: 33
		// Start offset: 0x80065C8C
		// Variables:
	// 		int copLoop; // $s2
	// 		struct Car_tObj *closestCop; // $s3

		/* begin block 1.1 */
			// Start line: 33
			// Start offset: 0x80065C8C

			/* begin block 1.1.1 */
				// Start line: 41
				// Start offset: 0x80065CCC
				// Variables:
			// 		struct Car_tObj *cop; // $s0
			// 		int sliceDistance; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80065D30
			// End Line: 53
		/* end block 1.1 */
		// End offset: 0x80065D3C
		// End Line: 55
	/* end block 1 */
	// End offset: 0x80065D3C
	// End Line: 57

Car_tObj * CheckForCops__14AIHigh_TrafficPi(AIHigh_Traffic *this,int *closestDistance)

{
  int iVar1;
  Car_tObj *otherCarObj;
  Car_tObj **ppCVar2;
  int iVar3;
  Car_tObj *pCVar4;
  
  pCVar4 = (Car_tObj *)0x0;
  iVar3 = 0;
  *closestDistance = 0x4e200000;
  ppCVar2 = &__Cars_gCopCarList_9__;
  while (iVar3 < Cars_gNumCopCars) {
    otherCarObj = *ppCVar2;
    if (((otherCarObj->speechInfo).speechSource & 4) == 0) {
      iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0((this->AIHigh_Base).carObj_,otherCarObj);
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < *closestDistance) {
        *closestDistance = iVar1;
        pCVar4 = otherCarObj;
      }
    }
    ppCVar2 = ppCVar2 + 1;
    iVar3 = iVar3 + 1;
  }
  return pCVar4;
}



// decompiled code
// original method signature: 
// struct AIHigh_Cop * /*$ra*/ CopCheck__14AIHigh_TrafficPi(struct AIHigh_Traffic *this /*$a0*/, int *blockade /*$s1*/)
 // line 61, offset 0x80065d60
	/* begin block 1 */
		// Start line: 62
		// Start offset: 0x80065D60
		// Variables:
	// 		struct Car_tObj *closest; // $a0
	// 		int closestDistance; // stack offset -24
	// 		int speed; // $a1
	// 		struct AIHigh_Cop *cop; // $s0

		/* begin block 1.1 */
			// Start line: 81
			// Start offset: 0x80065DA0

			/* begin block 1.1.1 */
				// Start line: 86
				// Start offset: 0x80065DDC

				/* begin block 1.1.1.1 */
					// Start line: 88
					// Start offset: 0x80065DDC

					/* begin block 1.1.1.1.1 */
						// Start line: 88
						// Start offset: 0x80065DDC
						// Variables:
					// 		struct AIHigh_Cop *this; // $s0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 88
							// Start offset: 0x80065DDC
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80065DDC
						// End Line: 88
					/* end block 1.1.1.1.1 */
					// End offset: 0x80065DDC
					// End Line: 88
				/* end block 1.1.1.1 */
				// End offset: 0x80065E10
				// End Line: 93
			/* end block 1.1.1 */
			// End offset: 0x80065E10
			// End Line: 93
		/* end block 1.1 */
		// End offset: 0x80065E50
		// End Line: 100
	/* end block 1 */
	// End offset: 0x80065E58
	// End Line: 122

AIHigh_Cop * CopCheck__14AIHigh_TrafficPi(AIHigh_Traffic *this,int *blockade)

{
  Car_tObj *pCVar1;
  AIHigh_Cop *pAVar2;
  int iVar3;
  int local_18 [2];
  
  *blockade = 0;
  pAVar2 = (AIHigh_Cop *)0x0;
  if (Cars_gNumCopCars != 0) {
    pCVar1 = CheckForCops__14AIHigh_TrafficPi(this,local_18);
    pAVar2 = (AIHigh_Cop *)0x0;
    if (pCVar1 != (Car_tObj *)0x0) {
      iVar3 = (pCVar1->script).lastActionTime;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if ((iVar3 < 0x20000) && (local_18[0] < 0x4b0000)) {
        *blockade = 1;
        pAVar2 = (AIHigh_Cop *)(&__highLevelAIObjs_9__)[pCVar1->carIndex];
        if (*(int *)&(((AIHigh_Cop *)(&__highLevelAIObjs_9__)[pCVar1->carIndex])->AIHigh_BasicCop).
                     blockade_.blockadeSpeechFlags == 0) {
          pAVar2 = (AIHigh_Cop *)0x0;
        }
      }
      else {
        pAVar2 = (AIHigh_Cop *)0x0;
        if ((0x20000 < iVar3) && (pAVar2 = (AIHigh_Cop *)0x0, local_18[0] < 0x4b0000)) {
          pAVar2 = (AIHigh_Cop *)(&__highLevelAIObjs_9__)[pCVar1->carIndex];
        }
      }
    }
  }
  return pAVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ HighExecute__14AIHigh_Traffic(struct AIHigh_Traffic *this /*$s1*/)
 // line 129, offset 0x80065e6c
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x80065E6C

		/* begin block 1.1 */
			// Start line: 130
			// Start offset: 0x80065E6C

			/* begin block 1.1.1 */
				// Start line: 136
				// Start offset: 0x80065ED0
				// Variables:
			// 		union trigger_t *pNewTrigger; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 138
					// Start offset: 0x80065ED0
					// Variables:
				// 		struct coorddef trafficOffset; // stack offset -192

					/* begin block 1.1.1.1.1 */
						// Start line: 139
						// Start offset: 0x80065ED0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 141
							// Start offset: 0x80065F0C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 143
								// Start offset: 0x80065F0C

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 143
									// Start offset: 0x80065F0C
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80065F0C
								// End Line: 143
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80065F0C
							// End Line: 143

							/* begin block 1.1.1.1.1.1.2 */
								// Start line: 143
								// Start offset: 0x80065F0C
								// Variables:
							// 		struct AIHigh_Base *this; // $s1

								/* begin block 1.1.1.1.1.1.2.1 */
									// Start line: 143
									// Start offset: 0x80065F0C
								/* end block 1.1.1.1.1.1.2.1 */
								// End offset: 0x80065F64
								// End Line: 143
							/* end block 1.1.1.1.1.1.2 */
							// End offset: 0x80065F64
							// End Line: 143
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80065F64
						// End Line: 143

						/* begin block 1.1.1.1.1.2 */
							// Start line: 146
							// Start offset: 0x80065F6C

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 148
								// Start offset: 0x80065F6C
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.1.1.2.1.1 */
									// Start line: 148
									// Start offset: 0x80065F6C
								/* end block 1.1.1.1.1.2.1.1 */
								// End offset: 0x80065FB8
								// End Line: 148
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x80065FB8
							// End Line: 148
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x80065FB8
						// End Line: 148
					/* end block 1.1.1.1.1 */
					// End offset: 0x80065FB8
					// End Line: 148
				/* end block 1.1.1.1 */
				// End offset: 0x80065FD4
				// End Line: 152

				/* begin block 1.1.1.2 */
					// Start line: 157
					// Start offset: 0x80065FD4

					/* begin block 1.1.1.2.1 */
						// Start line: 158
						// Start offset: 0x80065FE4
						// Variables:
					// 		struct BWorldSm_Pos spos; // stack offset -176

						/* begin block 1.1.1.2.1.1 */
							// Start line: 160
							// Start offset: 0x80065FE4

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 160
								// Start offset: 0x80065FE4
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x80065FE4
							// End Line: 160
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x80065FE4
						// End Line: 160

						/* begin block 1.1.1.2.1.2 */
							// Start line: 160
							// Start offset: 0x80065FE4
							// Variables:
						// 		struct AIHigh_Base *this; // $s1

							/* begin block 1.1.1.2.1.2.1 */
								// Start line: 160
								// Start offset: 0x80065FE4
							/* end block 1.1.1.2.1.2.1 */
							// End offset: 0x8006603C
							// End Line: 160
						/* end block 1.1.1.2.1.2 */
						// End offset: 0x8006603C
						// End Line: 160
					/* end block 1.1.1.2.1 */
					// End offset: 0x8006603C
					// End Line: 160

					/* begin block 1.1.1.2.2 */
						// Start line: 175
						// Start offset: 0x8006609C

						/* begin block 1.1.1.2.2.1 */
							// Start line: 175
							// Start offset: 0x8006609C

							/* begin block 1.1.1.2.2.1.1 */
								// Start line: 175
								// Start offset: 0x800660C8
								// Variables:
							// 		struct AIHigh_Traffic *this; // $s1

								/* begin block 1.1.1.2.2.1.1.1 */
									// Start line: 175
									// Start offset: 0x800660C8
								/* end block 1.1.1.2.2.1.1.1 */
								// End offset: 0x800660C8
								// End Line: 175
							/* end block 1.1.1.2.2.1.1 */
							// End offset: 0x800660C8
							// End Line: 175

							/* begin block 1.1.1.2.2.1.2 */
								// Start line: 176
								// Start offset: 0x800660DC

								/* begin block 1.1.1.2.2.1.2.1 */
									// Start line: 177
									// Start offset: 0x800660DC

									/* begin block 1.1.1.2.2.1.2.1.1 */
										// Start line: 178
										// Start offset: 0x800660F0

										/* begin block 1.1.1.2.2.1.2.1.1.1 */
											// Start line: 181
											// Start offset: 0x800660F0

											/* begin block 1.1.1.2.2.1.2.1.1.1.1 */
												// Start line: 183
												// Start offset: 0x80066110

												/* begin block 1.1.1.2.2.1.2.1.1.1.1.1 */
													// Start line: 186
													// Start offset: 0x80066110
													// Variables:
												// 		struct AIHigh_Base *this; // $s1
												// 		struct AIState_Base *newState; // $s2

													/* begin block 1.1.1.2.2.1.2.1.1.1.1.1.1 */
														// Start line: 186
														// Start offset: 0x80066110
													/* end block 1.1.1.2.2.1.2.1.1.1.1.1.1 */
													// End offset: 0x80066154
													// End Line: 186
												/* end block 1.1.1.2.2.1.2.1.1.1.1.1 */
												// End offset: 0x80066154
												// End Line: 186
											/* end block 1.1.1.2.2.1.2.1.1.1.1 */
											// End offset: 0x80066154
											// End Line: 186

											/* begin block 1.1.1.2.2.1.2.1.1.1.2 */
												// Start line: 186
												// Start offset: 0x80066154
												// Variables:
											// 		union trigger_t *trigger; // $s0

												/* begin block 1.1.1.2.2.1.2.1.1.1.2.1 */
													// Start line: 186
													// Start offset: 0x80066154
												/* end block 1.1.1.2.2.1.2.1.1.1.2.1 */
												// End offset: 0x80066154
												// End Line: 186
											/* end block 1.1.1.2.2.1.2.1.1.1.2 */
											// End offset: 0x80066154
											// End Line: 186
										/* end block 1.1.1.2.2.1.2.1.1.1 */
										// End offset: 0x80066154
										// End Line: 186
									/* end block 1.1.1.2.2.1.2.1.1 */
									// End offset: 0x80066154
									// End Line: 186

									/* begin block 1.1.1.2.2.1.2.1.2 */
										// Start line: 195
										// Start offset: 0x80066184

										/* begin block 1.1.1.2.2.1.2.1.2.1 */
											// Start line: 197
											// Start offset: 0x80066184
											// Variables:
										// 		struct AIHigh_Base *this; // $s1
										// 		struct AIState_Base *newState; // $s0

											/* begin block 1.1.1.2.2.1.2.1.2.1.1 */
												// Start line: 197
												// Start offset: 0x80066184
											/* end block 1.1.1.2.2.1.2.1.2.1.1 */
											// End offset: 0x800661C4
											// End Line: 197
										/* end block 1.1.1.2.2.1.2.1.2.1 */
										// End offset: 0x800661C4
										// End Line: 197
									/* end block 1.1.1.2.2.1.2.1.2 */
									// End offset: 0x800661C4
									// End Line: 197
								/* end block 1.1.1.2.2.1.2.1 */
								// End offset: 0x800661C4
								// End Line: 197
							/* end block 1.1.1.2.2.1.2 */
							// End offset: 0x800661C4
							// End Line: 197
						/* end block 1.1.1.2.2.1 */
						// End offset: 0x800661C4
						// End Line: 197
					/* end block 1.1.1.2.2 */
					// End offset: 0x800661C4
					// End Line: 197
				/* end block 1.1.1.2 */
				// End offset: 0x800661C4
				// End Line: 197

				/* begin block 1.1.1.3 */
					// Start line: 204
					// Start offset: 0x800661E0
					// Variables:
				// 		int blockade; // stack offset -40

					/* begin block 1.1.1.3.1 */
						// Start line: 206
						// Start offset: 0x800661E0

						/* begin block 1.1.1.3.1.1 */
							// Start line: 207
							// Start offset: 0x800661F4

							/* begin block 1.1.1.3.1.1.1 */
								// Start line: 209
								// Start offset: 0x800661F4
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.3.1.1.1.1 */
									// Start line: 209
									// Start offset: 0x800661F4
								/* end block 1.1.1.3.1.1.1.1 */
								// End offset: 0x80066234
								// End Line: 209
							/* end block 1.1.1.3.1.1.1 */
							// End offset: 0x80066234
							// End Line: 209
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x80066234
						// End Line: 209

						/* begin block 1.1.1.3.1.2 */
							// Start line: 211
							// Start offset: 0x8006623C

							/* begin block 1.1.1.3.1.2.1 */
								// Start line: 211
								// Start offset: 0x8006623C

								/* begin block 1.1.1.3.1.2.1.1 */
									// Start line: 211
									// Start offset: 0x8006623C
									// Variables:
								// 		struct AIHigh_Traffic *this; // $s1

									/* begin block 1.1.1.3.1.2.1.1.1 */
										// Start line: 211
										// Start offset: 0x8006623C
									/* end block 1.1.1.3.1.2.1.1.1 */
									// End offset: 0x8006623C
									// End Line: 211
								/* end block 1.1.1.3.1.2.1.1 */
								// End offset: 0x8006623C
								// End Line: 211

								/* begin block 1.1.1.3.1.2.1.2 */
									// Start line: 212
									// Start offset: 0x8006624C

									/* begin block 1.1.1.3.1.2.1.2.1 */
										// Start line: 214
										// Start offset: 0x8006624C
										// Variables:
									// 		struct AIHigh_Base *this; // $s1
									// 		struct AIState_Base *newState; // $s0

										/* begin block 1.1.1.3.1.2.1.2.1.1 */
											// Start line: 214
											// Start offset: 0x8006624C
										/* end block 1.1.1.3.1.2.1.2.1.1 */
										// End offset: 0x8006628C
										// End Line: 214
									/* end block 1.1.1.3.1.2.1.2.1 */
									// End offset: 0x8006628C
									// End Line: 214
								/* end block 1.1.1.3.1.2.1.2 */
								// End offset: 0x8006628C
								// End Line: 214

								/* begin block 1.1.1.3.1.2.1.3 */
									// Start line: 217
									// Start offset: 0x80066294

									/* begin block 1.1.1.3.1.2.1.3.1 */
										// Start line: 217
										// Start offset: 0x80066294

										/* begin block 1.1.1.3.1.2.1.3.1.1 */
											// Start line: 218
											// Start offset: 0x800662A4

											/* begin block 1.1.1.3.1.2.1.3.1.1.1 */
												// Start line: 219
												// Start offset: 0x800662A4

												/* begin block 1.1.1.3.1.2.1.3.1.1.1.1 */
													// Start line: 220
													// Start offset: 0x800662B4
													// Variables:
												// 		int cRand; // $v1

													/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1 */
														// Start line: 221
														// Start offset: 0x800662B4

														/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.1 */
															// Start line: 223
															// Start offset: 0x80066304

															/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.1.1 */
																// Start line: 240
																// Start offset: 0x80066304
																// Variables:
															// 		struct AIState_Idle *idleState; // $a0
															// 		int slice; // $s2

																/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.1.1.1 */
																	// Start line: 245
																	// Start offset: 0x80066304

																	/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.1.1.1.1 */
																		// Start line: 245
																		// Start offset: 0x80066304
																	/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.1.1.1.1 */
																	// End offset: 0x80066304
																	// End Line: 245
																/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.1.1.1 */
																// End offset: 0x80066304
																// End Line: 245

																/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.1.1.2 */
																	// Start line: 245
																	// Start offset: 0x80066304
																	// Variables:
																// 		struct AIHigh_Base *this; // $s1

																	/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.1.1.2.1 */
																		// Start line: 245
																		// Start offset: 0x80066304
																	/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.1.1.2.1 */
																	// End offset: 0x80066368
																	// End Line: 246
																/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.1.1.2 */
																// End offset: 0x80066368
																// End Line: 246
															/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.1.1 */
															// End offset: 0x800663AC
															// End Line: 248
														/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.1 */
														// End offset: 0x800663AC
														// End Line: 248

														/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2 */
															// Start line: 253
															// Start offset: 0x800663AC

															/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1 */
																// Start line: 257
																// Start offset: 0x800663AC

																/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.1 */
																	// Start line: 258
																	// Start offset: 0x800663B4

																	/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.1.1 */
																		// Start line: 262
																		// Start offset: 0x800663B4

																		/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.1.1.1 */
																			// Start line: 262
																			// Start offset: 0x800663B4
																		/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.1.1.1 */
																		// End offset: 0x800663B4
																		// End Line: 262
																	/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.1.1 */
																	// End offset: 0x800663B4
																	// End Line: 262

																	/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.1.2 */
																		// Start line: 262
																		// Start offset: 0x800663B4
																		// Variables:
																	// 		struct AIHigh_Base *this; // $s1

																		/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.1.2.1 */
																			// Start line: 262
																			// Start offset: 0x800663B4
																		/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.1.2.1 */
																		// End offset: 0x8006640C
																		// End Line: 262
																	/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.1.2 */
																	// End offset: 0x8006640C
																	// End Line: 262
																/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.1 */
																// End offset: 0x8006640C
																// End Line: 262

																/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2 */
																	// Start line: 265
																	// Start offset: 0x80066414

																	/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2.1 */
																		// Start line: 265
																		// Start offset: 0x80066414

																		/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2.1.1 */
																			// Start line: 266
																			// Start offset: 0x8006641C
																			// Variables:
																		// 		struct AIState_Idle *idleState; // $a0
																		// 		int slice; // $s2

																			/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2.1.1.1 */
																				// Start line: 271
																				// Start offset: 0x8006641C

																				/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2.1.1.1.1 */
																					// Start line: 271
																					// Start offset: 0x8006641C
																				/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2.1.1.1.1 */
																				// End offset: 0x8006641C
																				// End Line: 271
																			/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2.1.1.1 */
																			// End offset: 0x8006641C
																			// End Line: 271

																			/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2.1.1.2 */
																				// Start line: 271
																				// Start offset: 0x8006641C
																				// Variables:
																			// 		struct AIHigh_Base *this; // $s1

																				/* begin block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2.1.1.2.1 */
																					// Start line: 271
																					// Start offset: 0x8006641C
																				/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2.1.1.2.1 */
																				// End offset: 0x80066480
																				// End Line: 272
																			/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2.1.1.2 */
																			// End offset: 0x80066480
																			// End Line: 272
																		/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2.1.1 */
																		// End offset: 0x800664F0
																		// End Line: 274
																	/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2.1 */
																	// End offset: 0x80066504
																	// End Line: 281
																/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1.2 */
																// End offset: 0x80066504
																// End Line: 281
															/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2.1 */
															// End offset: 0x80066504
															// End Line: 281
														/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1.2 */
														// End offset: 0x80066504
														// End Line: 281
													/* end block 1.1.1.3.1.2.1.3.1.1.1.1.1 */
													// End offset: 0x80066504
													// End Line: 281
												/* end block 1.1.1.3.1.2.1.3.1.1.1.1 */
												// End offset: 0x80066504
												// End Line: 281
											/* end block 1.1.1.3.1.2.1.3.1.1.1 */
											// End offset: 0x80066504
											// End Line: 281
										/* end block 1.1.1.3.1.2.1.3.1.1 */
										// End offset: 0x80066504
										// End Line: 281
									/* end block 1.1.1.3.1.2.1.3.1 */
									// End offset: 0x8006650C
									// End Line: 288
								/* end block 1.1.1.3.1.2.1.3 */
								// End offset: 0x8006650C
								// End Line: 288
							/* end block 1.1.1.3.1.2.1 */
							// End offset: 0x8006650C
							// End Line: 288
						/* end block 1.1.1.3.1.2 */
						// End offset: 0x8006650C
						// End Line: 288
					/* end block 1.1.1.3.1 */
					// End offset: 0x8006650C
					// End Line: 288
				/* end block 1.1.1.3 */
				// End offset: 0x8006650C
				// End Line: 288

				/* begin block 1.1.1.4 */
					// Start line: 295
					// Start offset: 0x80066514
					// Variables:
				// 		int blockade; // stack offset -36

					/* begin block 1.1.1.4.1 */
						// Start line: 297
						// Start offset: 0x80066514

						/* begin block 1.1.1.4.1.1 */
							// Start line: 298
							// Start offset: 0x80066528

							/* begin block 1.1.1.4.1.1.1 */
								// Start line: 299
								// Start offset: 0x80066528
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.4.1.1.1.1 */
									// Start line: 299
									// Start offset: 0x80066528
								/* end block 1.1.1.4.1.1.1.1 */
								// End offset: 0x80066568
								// End Line: 299
							/* end block 1.1.1.4.1.1.1 */
							// End offset: 0x80066568
							// End Line: 299
						/* end block 1.1.1.4.1.1 */
						// End offset: 0x80066568
						// End Line: 299

						/* begin block 1.1.1.4.1.2 */
							// Start line: 302
							// Start offset: 0x80066570

							/* begin block 1.1.1.4.1.2.1 */
								// Start line: 302
								// Start offset: 0x80066570

								/* begin block 1.1.1.4.1.2.1.1 */
									// Start line: 303
									// Start offset: 0x8006659C

									/* begin block 1.1.1.4.1.2.1.1.1 */
										// Start line: 304
										// Start offset: 0x8006659C
										// Variables:
									// 		struct AIHigh_Base *this; // $s1
									// 		struct AIState_Base *newState; // $s0

										/* begin block 1.1.1.4.1.2.1.1.1.1 */
											// Start line: 304
											// Start offset: 0x8006659C
										/* end block 1.1.1.4.1.2.1.1.1.1 */
										// End offset: 0x8006659C
										// End Line: 304
									/* end block 1.1.1.4.1.2.1.1.1 */
									// End offset: 0x8006659C
									// End Line: 304
								/* end block 1.1.1.4.1.2.1.1 */
								// End offset: 0x8006659C
								// End Line: 304
							/* end block 1.1.1.4.1.2.1 */
							// End offset: 0x8006659C
							// End Line: 304
						/* end block 1.1.1.4.1.2 */
						// End offset: 0x8006659C
						// End Line: 304
					/* end block 1.1.1.4.1 */
					// End offset: 0x8006659C
					// End Line: 304
				/* end block 1.1.1.4 */
				// End offset: 0x8006659C
				// End Line: 304

				/* begin block 1.1.1.5 */
					// Start line: 312
					// Start offset: 0x800665A4

					/* begin block 1.1.1.5.1 */
						// Start line: 313
						// Start offset: 0x800665A4

						/* begin block 1.1.1.5.1.1 */
							// Start line: 314
							// Start offset: 0x800665B8

							/* begin block 1.1.1.5.1.1.1 */
								// Start line: 315
								// Start offset: 0x800665B8
								// Variables:
							// 		struct AIHigh_Base *this; // $s1
							// 		struct AIState_Base *newState; // $s0

								/* begin block 1.1.1.5.1.1.1.1 */
									// Start line: 315
									// Start offset: 0x800665B8
								/* end block 1.1.1.5.1.1.1.1 */
								// End offset: 0x800665F8
								// End Line: 315
							/* end block 1.1.1.5.1.1.1 */
							// End offset: 0x800665F8
							// End Line: 315
						/* end block 1.1.1.5.1.1 */
						// End offset: 0x800665F8
						// End Line: 315

						/* begin block 1.1.1.5.1.2 */
							// Start line: 318
							// Start offset: 0x80066600

							/* begin block 1.1.1.5.1.2.1 */
								// Start line: 318
								// Start offset: 0x80066600

								/* begin block 1.1.1.5.1.2.1.1 */
									// Start line: 318
									// Start offset: 0x80066600
									// Variables:
								// 		struct AIHigh_Traffic *this; // $s1

									/* begin block 1.1.1.5.1.2.1.1.1 */
										// Start line: 318
										// Start offset: 0x80066600
									/* end block 1.1.1.5.1.2.1.1.1 */
									// End offset: 0x80066600
									// End Line: 318
								/* end block 1.1.1.5.1.2.1.1 */
								// End offset: 0x80066600
								// End Line: 318

								/* begin block 1.1.1.5.1.2.1.2 */
									// Start line: 319
									// Start offset: 0x80066610

									/* begin block 1.1.1.5.1.2.1.2.1 */
										// Start line: 321
										// Start offset: 0x80066610
										// Variables:
									// 		struct AIHigh_Base *this; // $s1
									// 		struct AIState_Base *newState; // $s0

										/* begin block 1.1.1.5.1.2.1.2.1.1 */
											// Start line: 321
											// Start offset: 0x80066610
										/* end block 1.1.1.5.1.2.1.2.1.1 */
										// End offset: 0x80066650
										// End Line: 321
									/* end block 1.1.1.5.1.2.1.2.1 */
									// End offset: 0x80066650
									// End Line: 321
								/* end block 1.1.1.5.1.2.1.2 */
								// End offset: 0x80066650
								// End Line: 321

								/* begin block 1.1.1.5.1.2.1.3 */
									// Start line: 323
									// Start offset: 0x80066658

									/* begin block 1.1.1.5.1.2.1.3.1 */
										// Start line: 323
										// Start offset: 0x80066658

										/* begin block 1.1.1.5.1.2.1.3.1.1 */
											// Start line: 324
											// Start offset: 0x80066684

											/* begin block 1.1.1.5.1.2.1.3.1.1.1 */
												// Start line: 325
												// Start offset: 0x80066684
												// Variables:
											// 		struct AIHigh_Base *this; // $s1
											// 		struct AIState_Base *newState; // $s0

												/* begin block 1.1.1.5.1.2.1.3.1.1.1.1 */
													// Start line: 325
													// Start offset: 0x80066684
												/* end block 1.1.1.5.1.2.1.3.1.1.1.1 */
												// End offset: 0x800666D0
												// End Line: 325
											/* end block 1.1.1.5.1.2.1.3.1.1.1 */
											// End offset: 0x800666D0
											// End Line: 325
										/* end block 1.1.1.5.1.2.1.3.1.1 */
										// End offset: 0x800666D0
										// End Line: 326
									/* end block 1.1.1.5.1.2.1.3.1 */
									// End offset: 0x800666D0
									// End Line: 326
								/* end block 1.1.1.5.1.2.1.3 */
								// End offset: 0x800666D0
								// End Line: 326
							/* end block 1.1.1.5.1.2.1 */
							// End offset: 0x800666D0
							// End Line: 326
						/* end block 1.1.1.5.1.2 */
						// End offset: 0x800666D0
						// End Line: 326
					/* end block 1.1.1.5.1 */
					// End offset: 0x800666D0
					// End Line: 326
				/* end block 1.1.1.5 */
				// End offset: 0x800666D0
				// End Line: 326
			/* end block 1.1.1 */
			// End offset: 0x800666D0
			// End Line: 333
		/* end block 1.1 */
		// End offset: 0x800666D0
		// End Line: 333
	/* end block 1 */
	// End offset: 0x800666DC
	// End Line: 340

/* WARNING: Type propagation algorithm not settling */

void HighExecute__14AIHigh_Traffic(AIHigh_Traffic *this)

{
  bool bVar1;
  trigger_t *trigger;
  AIState_RovingTraffic *this_00;
  AIHigh_Cop *pAVar2;
  int iVar3;
  uint uVar4;
  stateType_t sVar5;
  AIState_Purgatory *this_01;
  AIState_Normal *this_02;
  Car_tObj *pCVar6;
  AIState_Base *pAVar7;
  AIState_Base *this_03;
  AIState_Idle *this_04;
  coorddef local_c0;
  BWorldSm_Pos local_b0;
  int local_28;
  int iStack36;
  int local_20;
  
  ((this->AIHigh_Base).carObj_)->unlap = 0;
  ((this->AIHigh_Base).carObj_)->lap = 0;
  switch((this->AIHigh_Base).stateType_) {
  case STATE_NONE:
    local_c0.x = DAT_800551a4;
    local_c0.y = PTR_DAT_800551a8;
    local_c0.z = DAT_800551ac;
    if ((((this->AIHigh_Base).carObj_)->carFlags & 0x400U) == 0) {
      this_01 = (AIState_Purgatory *)__builtin_new(8);
      this_03 = (AIState_Base *)__17AIState_PurgatoryP8Car_tObj(this_01,(this->AIHigh_Base).carObj_)
      ;
      pAVar7 = (this->AIHigh_Base).state_;
      if (pAVar7 != (AIState_Base *)0x0) {
        uVar4 = pAVar7->_vf[0].value;
        (**(code **)(uVar4 + 0x14))((int)&pAVar7->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
      }
      sVar5 = STATE_PURGATORY;
    }
    else {
      this_03 = (AIState_Base *)__builtin_new(0x10);
      __12AIState_BaseP8Car_tObj(this_03,(this->AIHigh_Base).carObj_);
      this_03->_vf[0].value = 0x80055600;
      this_03->_vf[2].value = 1;
      pAVar7 = (this->AIHigh_Base).state_;
      if (pAVar7 != (AIState_Base *)0x0) {
        uVar4 = pAVar7->_vf[0].value;
        (**(code **)(uVar4 + 0x14))((int)&pAVar7->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
      }
      sVar5 = STATE_IDLE;
    }
    (this->AIHigh_Base).state_ = this_03;
    (this->AIHigh_Base).stateType_ = sVar5;
    Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi
              ((BO_tNewtonObj *)(this->AIHigh_Base).carObj_,0,&local_c0,1);
    return;
  case STATE_PURGATORY:
    bVar1 = false;
    if (this->ignoreCops_ == 0) {
      this_03 = (this->AIHigh_Base).state_;
      uVar4 = this_03->_vf[0].value;
      iVar3 = (**(code **)(uVar4 + 0x1c))((int)&this_03->carObj_ + (int)*(short *)(uVar4 + 0x18));
      if (iVar3 != 0) {
        bVar1 = (this->AIHigh_Base)._vf[2].value == 0;
      }
      if (bVar1) {
        trigger = CheckForNewTriggers__14AIHigh_Traffic(this);
        if (trigger == (trigger_t *)0x0) {
          this_02 = (AIState_Normal *)__builtin_new(8);
          this_03 = (AIState_Base *)
                    __14AIState_NormalP8Car_tObj(this_02,(this->AIHigh_Base).carObj_);
          pAVar7 = (this->AIHigh_Base).state_;
          if (pAVar7 != (AIState_Base *)0x0) {
            uVar4 = pAVar7->_vf[0].value;
            (**(code **)(uVar4 + 0x14))((int)&pAVar7->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
          }
          (this->AIHigh_Base).state_ = this_03;
          (this->AIHigh_Base).stateType_ = STATE_NORMAL;
          AILife_ReencarnateTraffic__FP8Car_tObj((this->AIHigh_Base).carObj_);
        }
        else {
          DescribeTrigger__24AITrigger_TriggerManagerP9trigger_t(triggerManagerTraffic,trigger);
          if (*(int *)*trigger == 5) {
            this_00 = (AIState_RovingTraffic *)__builtin_new(0x18);
            this_00 = __21AIState_RovingTrafficP8Car_tObjP9trigger_t
                                (this_00,(this->AIHigh_Base).carObj_,trigger);
            this_03 = (this->AIHigh_Base).state_;
            if (this_03 != (AIState_Base *)0x0) {
              uVar4 = this_03->_vf[0].value;
              (**(code **)(uVar4 + 0x14))((int)&this_03->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
            }
            (this->AIHigh_Base).stateType_ = STATE_ROVING_TRAFFIC;
            *(AIState_RovingTraffic **)&(this->AIHigh_Base).state_ = this_00;
            AILife_ReencarnateTrafficByPosition__FP8Car_tObjiiP8coorddefP10matrixtdef
                      ((this->AIHigh_Base).carObj_,*(int *)(*trigger + 4),1,
                       *(coorddef **)(*trigger + 0x3c),(matrixtdef *)(*trigger + 0xc));
          }
        }
      }
    }
    else {
      this_03 = (AIState_Base *)__builtin_new(0x10);
      __12AIState_BaseP8Car_tObj(this_03,(this->AIHigh_Base).carObj_);
      this_03->_vf[0].value = 0x80055600;
      this_03->_vf[2].value = 1;
      pAVar7 = (this->AIHigh_Base).state_;
      if (pAVar7 != (AIState_Base *)0x0) {
        uVar4 = pAVar7->_vf[0].value;
        (**(code **)(uVar4 + 0x14))((int)&pAVar7->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
      }
      (this->AIHigh_Base).state_ = this_03;
      (this->AIHigh_Base).stateType_ = STATE_IDLE;
      local_b0.slice = 0;
      BWorldSm_FindClosestSlice__FP8coorddefP12BWorldSm_Pos
                ((coorddef *)(this->ignoreCops_ + 0x10),&local_b0);
      AILife_ReencarnateTrafficByPosition__FP8Car_tObjiiP8coorddefP10matrixtdef
                ((this->AIHigh_Base).carObj_,(int)local_b0.slice,1,
                 (coorddef *)(this->ignoreCops_ + 0x10),(matrixtdef *)(this->ignoreCops_ + 0x20));
      pCVar6 = (this->AIHigh_Base).carObj_;
      pCVar6->carFlags = pCVar6->carFlags | 0x400;
      this->ignoreCops_ = 0;
    }
    goto switchD_80065ec8_caseD_4;
  case STATE_NORMAL:
    iVar3 = AILife_EvaluateLife__FP8Car_tObj((this->AIHigh_Base).carObj_);
    if (iVar3 == 0) {
      if ((this->AIHigh_Base)._vf[2].value == 0) {
        pAVar2 = CopCheck__14AIHigh_TrafficPi(this,&local_28);
        if (pAVar2 == (AIHigh_Cop *)0x0) {
          (this->AIHigh_Base)._vf[1].value = 0;
          goto switchD_80065ec8_caseD_4;
        }
        if ((this->AIHigh_Base)._vf[1].value != 0) goto switchD_80065ec8_caseD_4;
        randtemp = fastRandom * randSeed;
        fastRandom = randtemp & 0xffff;
        uVar4 = (randtemp >> 8 & 0xffff) * 5 >> 0xf;
        if (local_28 == 0) {
          if (uVar4 == 0) {
            this_03 = (AIState_Base *)__builtin_new(0x10);
            __12AIState_BaseP8Car_tObj(this_03,(this->AIHigh_Base).carObj_);
            this_03->_vf[0].value = 0x80055600;
            this_03->_vf[2].value = 1;
            pAVar7 = (this->AIHigh_Base).state_;
            if (pAVar7 != (AIState_Base *)0x0) {
              uVar4 = pAVar7->_vf[0].value;
              (**(code **)(uVar4 + 0x14))((int)&pAVar7->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
            }
            sVar5 = STATE_IDLE;
            break;
          }
          if (7 < uVar4) {
            (this->AIHigh_Base)._vf[1].value = 1;
            goto switchD_80065ec8_caseD_4;
          }
          iVar3 = (int)(((this->AIHigh_Base).carObj_)->N).simRoadInfo.slice;
          this_04 = (AIState_Idle *)__builtin_new(0x10);
          __12AIState_BaseP8Car_tObj((AIState_Base *)this_04,(this->AIHigh_Base).carObj_);
          (this_04->AIState_Base)._vf[0].value = 0x80055600;
          (this_04->AIState_Base)._vf[2].value = 1;
          this_03 = (this->AIHigh_Base).state_;
          if (this_03 != (AIState_Base *)0x0) {
            uVar4 = this_03->_vf[0].value;
            (**(code **)(uVar4 + 0x14))((int)&this_03->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
          }
          *(AIState_Idle **)&(this->AIHigh_Base).state_ = this_04;
          (this->AIHigh_Base).stateType_ = STATE_IDLE;
          if ((((this->AIHigh_Base).carObj_)->script).lastReactionIndex[3] != 1) goto LAB_800664c4;
          local_20 = (uint)BWorldSm_slices[iVar3].avgPavedWidthRt << 0xf;
          uVar4 = (uint)BWorldSm_slices[iVar3].laneCount & 0xf;
        }
        else {
          iVar3 = (int)(((this->AIHigh_Base).carObj_)->N).simRoadInfo.slice;
          this_04 = (AIState_Idle *)__builtin_new(0x10);
          __12AIState_BaseP8Car_tObj((AIState_Base *)this_04,(this->AIHigh_Base).carObj_);
          (this_04->AIState_Base)._vf[0].value = 0x80055600;
          (this_04->AIState_Base)._vf[2].value = 1;
          this_03 = (this->AIHigh_Base).state_;
          if (this_03 != (AIState_Base *)0x0) {
            uVar4 = this_03->_vf[0].value;
            (**(code **)(uVar4 + 0x14))((int)&this_03->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
          }
          *(AIState_Idle **)&(this->AIHigh_Base).state_ = this_04;
          (this->AIHigh_Base).stateType_ = STATE_IDLE;
          if ((((this->AIHigh_Base).carObj_)->script).lastReactionIndex[3] == 1) {
            local_20 = (uint)BWorldSm_slices[iVar3].avgPavedWidthRt << 0xf;
            uVar4 = (uint)BWorldSm_slices[iVar3].laneCount & 0xf;
          }
          else {
LAB_800664c4:
            local_20 = (uint)BWorldSm_slices[iVar3].avgPavedWidthLf << 0xf;
            uVar4 = (uint)(BWorldSm_slices[iVar3].laneCount >> 4);
          }
        }
        local_20 = local_20 * uVar4;
        SetIdlePosition__12AIState_Idlei(this_04,local_20);
        goto switchD_80065ec8_caseD_4;
      }
      this_01 = (AIState_Purgatory *)__builtin_new(8);
      this_03 = (AIState_Base *)__17AIState_PurgatoryP8Car_tObj(this_01,(this->AIHigh_Base).carObj_)
      ;
      pAVar7 = (this->AIHigh_Base).state_;
      if (pAVar7 != (AIState_Base *)0x0) {
        uVar4 = pAVar7->_vf[0].value;
        (**(code **)(uVar4 + 0x14))((int)&pAVar7->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
      }
      sVar5 = STATE_PURGATORY;
    }
    else {
      this_01 = (AIState_Purgatory *)__builtin_new(8);
      this_03 = (AIState_Base *)__17AIState_PurgatoryP8Car_tObj(this_01,(this->AIHigh_Base).carObj_)
      ;
      pAVar7 = (this->AIHigh_Base).state_;
      if (pAVar7 != (AIState_Base *)0x0) {
        uVar4 = pAVar7->_vf[0].value;
        (**(code **)(uVar4 + 0x14))((int)&pAVar7->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
      }
      sVar5 = STATE_PURGATORY;
    }
    break;
  case STATE_IDLE:
    iVar3 = AILife_EvaluateLife__FP8Car_tObj((this->AIHigh_Base).carObj_);
    if (iVar3 == 0) {
      pAVar2 = CopCheck__14AIHigh_TrafficPi(this,&iStack36);
      if (pAVar2 != (AIHigh_Cop *)0x0) goto switchD_80065ec8_caseD_4;
      uVar4 = ((this->AIHigh_Base).carObj_)->carFlags & 0x400;
joined_r0x8006667c:
      if (uVar4 == 0) goto switchD_80065ec8_caseD_4;
      this_02 = (AIState_Normal *)__builtin_new(8);
      this_03 = (AIState_Base *)__14AIState_NormalP8Car_tObj(this_02,(this->AIHigh_Base).carObj_);
      pAVar7 = (this->AIHigh_Base).state_;
      if (pAVar7 != (AIState_Base *)0x0) {
        uVar4 = pAVar7->_vf[0].value;
        (**(code **)(uVar4 + 0x14))((int)&pAVar7->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
      }
      sVar5 = STATE_NORMAL;
    }
    else {
      this_01 = (AIState_Purgatory *)__builtin_new(8);
      this_03 = (AIState_Base *)__17AIState_PurgatoryP8Car_tObj(this_01,(this->AIHigh_Base).carObj_)
      ;
      pAVar7 = (this->AIHigh_Base).state_;
      if (pAVar7 != (AIState_Base *)0x0) {
        uVar4 = pAVar7->_vf[0].value;
        (**(code **)(uVar4 + 0x14))((int)&pAVar7->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
      }
      sVar5 = STATE_PURGATORY;
    }
    break;
  default:
    goto switchD_80065ec8_caseD_4;
  case STATE_ROVING_TRAFFIC:
    iVar3 = AILife_EvaluateLife__FP8Car_tObj((this->AIHigh_Base).carObj_);
    if (iVar3 == 0) {
      if ((this->AIHigh_Base)._vf[2].value == 0) {
        this_03 = (this->AIHigh_Base).state_;
        uVar4 = this_03->_vf[0].value;
        uVar4 = (**(code **)(uVar4 + 0x1c))((int)&this_03->carObj_ + (int)*(short *)(uVar4 + 0x18));
        goto joined_r0x8006667c;
      }
      this_01 = (AIState_Purgatory *)__builtin_new(8);
      this_03 = (AIState_Base *)__17AIState_PurgatoryP8Car_tObj(this_01,(this->AIHigh_Base).carObj_)
      ;
      pAVar7 = (this->AIHigh_Base).state_;
      if (pAVar7 != (AIState_Base *)0x0) {
        uVar4 = pAVar7->_vf[0].value;
        (**(code **)(uVar4 + 0x14))((int)&pAVar7->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
      }
      sVar5 = STATE_PURGATORY;
    }
    else {
      this_01 = (AIState_Purgatory *)__builtin_new(8);
      this_03 = (AIState_Base *)__17AIState_PurgatoryP8Car_tObj(this_01,(this->AIHigh_Base).carObj_)
      ;
      pAVar7 = (this->AIHigh_Base).state_;
      if (pAVar7 != (AIState_Base *)0x0) {
        uVar4 = pAVar7->_vf[0].value;
        (**(code **)(uVar4 + 0x14))((int)&pAVar7->carObj_ + (int)*(short *)(uVar4 + 0x10),3);
      }
      sVar5 = STATE_PURGATORY;
    }
  }
  (this->AIHigh_Base).state_ = this_03;
  (this->AIHigh_Base).stateType_ = sVar5;
switchD_80065ec8_caseD_4:
  StateExecute__12AIState_Base((this->AIHigh_Base).state_);
  return;
}



// decompiled code
// original method signature: 
// struct AIHigh_Traffic * /*$ra*/ __14AIHigh_TrafficP8Car_tObj(struct AIHigh_Traffic *this /*$s0*/, struct Car_tObj *carObj /*$a1*/)
 // line 343, offset 0x800666f8
	/* begin block 1 */
		// Start line: 344
		// Start offset: 0x800666F8
	/* end block 1 */
	// End offset: 0x800666F8
	// End Line: 344

AIHigh_Traffic * __14AIHigh_TrafficP8Car_tObj(AIHigh_Traffic *this,Car_tObj *carObj)

{
  __11AIHigh_BaseP8Car_tObj((AIHigh_Base *)this,carObj);
  (this->AIHigh_Base)._vf[0].value = 0x800551b0;
  (this->AIHigh_Base)._vf[1].value = 0;
  (this->AIHigh_Base)._vf[2].value = 0;
  this->ignoreCops_ = 0;
  return this;
}



// decompiled code
// original method signature: 
// union trigger_t * /*$ra*/ CheckForNewTriggers__14AIHigh_Traffic(struct AIHigh_Traffic *this /*$a0*/)
 // line 353, offset 0x80066738
	/* begin block 1 */
		// Start line: 354
		// Start offset: 0x80066738

		/* begin block 1.1 */
			// Start line: 354
			// Start offset: 0x80066738
			// Variables:
		// 		int sortedLoop; // $s7

			/* begin block 1.1.1 */
				// Start line: 357
				// Start offset: 0x80066784
				// Variables:
			// 		struct Car_tObj *testCar; // $s5

				/* begin block 1.1.1.1 */
					// Start line: 359
					// Start offset: 0x8006678C

					/* begin block 1.1.1.1.1 */
						// Start line: 361
						// Start offset: 0x800667B0
						// Variables:
					// 		int dir; // $a0
					// 		struct AIHigh_Base *thisPlayer; // $a2
					// 		int thisSlice; // $v1
					// 		int startSlice; // $a0
					// 		int endSlice; // $s4
					// 		int fRandomChance; // $a3

						/* begin block 1.1.1.1.1.1 */
							// Start line: 372
							// Start offset: 0x80066838
							// Variables:
						// 		struct AIHigh_Base *this; // $a2
						// 		int newSlice; // $v1

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 372
								// Start offset: 0x80066838
								// Variables:
							// 		int temp; // $a1
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80066838
							// End Line: 372
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80066838
						// End Line: 372

						/* begin block 1.1.1.1.1.2 */
							// Start line: 387
							// Start offset: 0x80066860
							// Variables:
						// 		int sliceLoop; // $s1

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 387
								// Start offset: 0x8006687C
								// Variables:
							// 		int triggerHere; // $s3

								/* begin block 1.1.1.1.1.2.1.1 */
									// Start line: 392
									// Start offset: 0x80066890

									/* begin block 1.1.1.1.1.2.1.1.1 */
										// Start line: 393
										// Start offset: 0x800668B4
										// Variables:
									// 		int iRandomChance; // $s2
									// 		int randomValue; // $s0

										/* begin block 1.1.1.1.1.2.1.1.1.1 */
											// Start line: 414
											// Start offset: 0x80066920

											/* begin block 1.1.1.1.1.2.1.1.1.1.1 */
												// Start line: 415
												// Start offset: 0x80066928
												// Variables:
											// 		int unused; // stack offset -48
											/* end block 1.1.1.1.1.2.1.1.1.1.1 */
											// End offset: 0x80066940
											// End Line: 421
										/* end block 1.1.1.1.1.2.1.1.1.1 */
										// End offset: 0x80066940
										// End Line: 428
									/* end block 1.1.1.1.1.2.1.1.1 */
									// End offset: 0x80066940
									// End Line: 428
								/* end block 1.1.1.1.1.2.1.1 */
								// End offset: 0x80066940
								// End Line: 428
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x80066940
							// End Line: 428
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x80066948
						// End Line: 431
					/* end block 1.1.1.1.1 */
					// End offset: 0x80066948
					// End Line: 431
				/* end block 1.1.1.1 */
				// End offset: 0x80066948
				// End Line: 431
			/* end block 1.1.1 */
			// End offset: 0x80066948
			// End Line: 431
		/* end block 1.1 */
		// End offset: 0x8006695C
		// End Line: 433
	/* end block 1 */
	// End offset: 0x8006695C
	// End Line: 434

/* WARNING: Removing unreachable block (ram,0x800668bc) */

trigger_t * CheckForNewTriggers__14AIHigh_Traffic(AIHigh_Traffic *this)

{
  int trigger;
  Car_tObj *pCVar1;
  trigger_t *pabVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int slice;
  Car_tObj *pCVar6;
  int iVar7;
  int iStack48;
  Car_tObj **local_2c;
  
  iVar7 = Cars_gNumCars + -1;
  local_2c = &__Cars_gTotalSortedList_9__ + iVar7;
  do {
    if (iVar7 < 0) {
      return (trigger_t *)0x0;
    }
    pCVar6 = *local_2c;
    iVar4 = -1;
    if ((pCVar6->carFlags & 0x204U) != 0) {
      if (-1 < (pCVar6->script).lastActionTime) {
        iVar4 = 1;
      }
      iVar4 = iVar4 * 0x2d;
      if (iVar4 < 0) {
        iVar4 = (int)(pCVar6->N).simRoadInfo.slice + iVar4;
        if (iVar4 < 0) {
          iVar4 = iVar4 + gNumSlices;
        }
      }
      else {
        iVar4 = (int)(pCVar6->N).simRoadInfo.slice + iVar4;
        if (gNumSlices <= iVar4) {
          iVar4 = iVar4 - gNumSlices;
        }
      }
      iVar5 = (&__highLevelAIObjs_9__)[pCVar6->carIndex]->lastTrafficTriggerCheckSlice_;
      (&__highLevelAIObjs_9__)[pCVar6->carIndex]->lastTrafficTriggerCheckSlice_ = iVar4;
      slice = iVar4;
      if (iVar5 < iVar4) {
        slice = iVar5;
        iVar5 = iVar4;
      }
      iVar4 = iVar5 - slice;
      while ((slice < iVar5 && (iVar4 < 0x32))) {
        trigger = CheckForTriggerAtSlice__24AITrigger_TriggerManagerii
                            (triggerManagerTraffic,pCVar6->carIndex,slice);
        if (trigger != -1) {
          randtemp = fastRandom * randSeed;
          fastRandom = randtemp & 0xffff;
          uVar3 = randtemp >> 8;
          pCVar1 = AILife_IsSliceInAnyVisibleArea__Fi(slice);
          if ((pCVar1 == (Car_tObj *)0x0) && ((uVar3 & 0xffff) * 0x19 >> 0xe < 5000)) {
            pabVar2 = GetTrigger__24AITrigger_TriggerManageriPi
                                (triggerManagerTraffic,trigger,&iStack48);
            return pabVar2;
          }
        }
        slice = slice + 1;
      }
    }
    iVar7 = iVar7 + -1;
    local_2c = local_2c + -1;
  } while( true );
}




