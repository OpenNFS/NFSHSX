#include "THISDUST.H"
#include "AIDATARECORD.H"


// decompiled code
// original method signature: 
// struct AIDataRecord_t * /*$ra*/ __14AIDataRecord_t26AIDataRecord_WhichRecord_tPc(struct AIDataRecord_t *this /*$s0*/, enum AIDataRecord_WhichRecord_t whichIsThis /*$a1*/, char *preBuffer /*$s1*/)
 // line 32, offset 0x8006ce24
	/* begin block 1 */
		// Start line: 33
		// Start offset: 0x8006CE24
	/* end block 1 */
	// End offset: 0x8006CE24
	// End Line: 33

	/* begin block 2 */
		// Start line: 64
	/* end block 2 */
	// End Line: 65

	/* begin block 3 */
		// Start line: 64
	/* end block 3 */
	// End Line: 65

AIDataRecord_t *
__14AIDataRecord_t26AIDataRecord_WhichRecord_tPc
          (AIDataRecord_t *this,AIDataRecord_WhichRecord_t whichIsThis,char *preBuffer)

{
  *(undefined4 *)this->_vf = 0x800554ac;
  AddRecordToCollection__14AIDataRecord_t(this);
  this->preAllocatedBuffer_ = preBuffer;
  this->recordMethod_ = NORMAL_M;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._14AIDataRecord_t(struct AIDataRecord_t *this /*$s1*/, int __in_chrg /*$s0*/)
 // line 63, offset 0x8006ce6c
	/* begin block 1 */
		// Start line: 64
		// Start offset: 0x8006CE6C
	/* end block 1 */
	// End offset: 0x8006CE6C
	// End Line: 64

	/* begin block 2 */
		// Start line: 130
	/* end block 2 */
	// End Line: 131

	/* begin block 3 */
		// Start line: 141
	/* end block 3 */
	// End Line: 142

	/* begin block 4 */
		// Start line: 141
	/* end block 4 */
	// End Line: 142

void ___14AIDataRecord_t(AIDataRecord_t *this,int __in_chrg)

{
  *(undefined4 *)this->_vf = 0x800554ac;
  SaveAndPurge__14AIDataRecord_t(this);
  RemoveRecordFromCollection__14AIDataRecord_t(this);
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AddRecordToCollection__14AIDataRecord_t(struct AIDataRecord_t *this /*$a0*/)
 // line 77, offset 0x8006cec4
	/* begin block 1 */
		// Start line: 78
		// Start offset: 0x8006CEC4

		/* begin block 1.1 */
			// Start line: 79
			// Start offset: 0x8006CEC4
			// Variables:
		// 		int recordLoop; // $a1
		/* end block 1.1 */
		// End offset: 0x8006CEF8
		// End Line: 86
	/* end block 1 */
	// End offset: 0x8006CEF8
	// End Line: 88

	/* begin block 2 */
		// Start line: 158
	/* end block 2 */
	// End Line: 159

	/* begin block 3 */
		// Start line: 169
	/* end block 3 */
	// End Line: 170

	/* begin block 4 */
		// Start line: 169
	/* end block 4 */
	// End Line: 170

	/* begin block 5 */
		// Start line: 170
	/* end block 5 */
	// End Line: 171

	/* begin block 6 */
		// Start line: 170
	/* end block 6 */
	// End Line: 171

int AddRecordToCollection__14AIDataRecord_t(AIDataRecord_t *this)

{
  AIDataRecord_t **ppAVar1;
  int iVar2;
  
  iVar2 = 0;
  ppAVar1 = &recordCollection24;
  do {
    iVar2 = iVar2 + 1;
    if (*ppAVar1 == (AIDataRecord_t *)0x0) {
      *ppAVar1 = this;
      return 1;
    }
    ppAVar1 = ppAVar1 + 1;
  } while (iVar2 < 0x18);
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ RemoveRecordFromCollection__14AIDataRecord_t(struct AIDataRecord_t *this /*$a0*/)
 // line 91, offset 0x8006cf00
	/* begin block 1 */
		// Start line: 92
		// Start offset: 0x8006CF00

		/* begin block 1.1 */
			// Start line: 93
			// Start offset: 0x8006CF00
			// Variables:
		// 		int recordLoop; // $a1
		/* end block 1.1 */
		// End offset: 0x8006CF34
		// End Line: 100
	/* end block 1 */
	// End offset: 0x8006CF34
	// End Line: 101

	/* begin block 2 */
		// Start line: 193
	/* end block 2 */
	// End Line: 194

	/* begin block 3 */
		// Start line: 197
	/* end block 3 */
	// End Line: 198

	/* begin block 4 */
		// Start line: 197
	/* end block 4 */
	// End Line: 198

	/* begin block 5 */
		// Start line: 198
	/* end block 5 */
	// End Line: 199

	/* begin block 6 */
		// Start line: 198
	/* end block 6 */
	// End Line: 199

int RemoveRecordFromCollection__14AIDataRecord_t(AIDataRecord_t *this)

{
  AIDataRecord_t **ppAVar1;
  int iVar2;
  
  iVar2 = 0;
  ppAVar1 = &recordCollection24;
  do {
    iVar2 = iVar2 + 1;
    if (*ppAVar1 == this) {
      *ppAVar1 = (AIDataRecord_t *)0x0;
      return 1;
    }
    ppAVar1 = ppAVar1 + 1;
  } while (iVar2 < 0x18);
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartUp1__14AIDataRecord_t()
 // line 104, offset 0x8006cf3c
	/* begin block 1 */
		// Start line: 105
		// Start offset: 0x8006CF3C

		/* begin block 1.1 */
			// Start line: 105
			// Start offset: 0x8006CF3C
			// Variables:
		// 		int recordLoop; // $v1
		/* end block 1.1 */
		// End offset: 0x8006CF6C
		// End Line: 119
	/* end block 1 */
	// End offset: 0x8006CF6C
	// End Line: 121

	/* begin block 2 */
		// Start line: 219
	/* end block 2 */
	// End Line: 220

	/* begin block 3 */
		// Start line: 223
	/* end block 3 */
	// End Line: 224

	/* begin block 4 */
		// Start line: 223
	/* end block 4 */
	// End Line: 224

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartUp1__14AIDataRecord_t(void)

{
  AIDataRecord_t **ppAVar1;
  AIDataRecord_BestLine_t *this;
  AIDataRecord_TrackCurve_t *this_00;
  int iVar2;
  
  iVar2 = 0x17;
  ppAVar1 = &PTR_8013dfc0;
  AIDataRecord_WhichRecord = NORECORD_R;
  AIDataRecord_RecordMethod = NORMAL_M;
  do {
    *ppAVar1 = (AIDataRecord_t *)0x0;
    iVar2 = iVar2 + -1;
    ppAVar1 = ppAVar1 + -1;
  } while (-1 < iVar2);
  this = (AIDataRecord_BestLine_t *)__builtin_new(0x58);
  AIDataRecord_BestLine = __23AIDataRecord_BestLine_t26AIDataRecord_WhichRecord_t(this,BEST_LINE_R);
  this_00 = (AIDataRecord_TrackCurve_t *)__builtin_new(0x58);
  AIDataRecord_TrackCurve =
       __25AIDataRecord_TrackCurve_t26AIDataRecord_WhichRecord_t(this_00,TRACK_CURVE_R);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartUp2__14AIDataRecord_t()
 // line 139, offset 0x8006cfa8
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x8006CFA8

		/* begin block 1.1 */
			// Start line: 140
			// Start offset: 0x8006CFA8
			// Variables:
		// 		int recordLoop; // $s1
		/* end block 1.1 */
		// End offset: 0x8006D000
		// End Line: 149
	/* end block 1 */
	// End offset: 0x8006D000
	// End Line: 149

	/* begin block 2 */
		// Start line: 275
	/* end block 2 */
	// End Line: 276

	/* begin block 3 */
		// Start line: 291
	/* end block 3 */
	// End Line: 292

	/* begin block 4 */
		// Start line: 291
	/* end block 4 */
	// End Line: 292

/* WARNING: Unknown calling convention yet parameter storage is locked */

void StartUp2__14AIDataRecord_t(void)

{
  AIDataRecord_t *pAVar1;
  AIDataRecord_t **ppAVar2;
  int iVar3;
  
  iVar3 = 0;
  ppAVar2 = &recordCollection24;
  do {
    pAVar1 = *ppAVar2;
    if (pAVar1 != (AIDataRecord_t *)0x0) {
      (**(code **)(*(int *)pAVar1->_vf + 0x14))
                ((int)&pAVar1->numElements_ + (int)*(short *)(*(int *)pAVar1->_vf + 0x10));
    }
    iVar3 = iVar3 + 1;
    ppAVar2 = ppAVar2 + 1;
  } while (iVar3 < 0x18);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CleanUp1__14AIDataRecord_t()
 // line 152, offset 0x8006d014
	/* begin block 1 */
		// Start line: 153
		// Start offset: 0x8006D014
	/* end block 1 */
	// End offset: 0x8006D074
	// End Line: 162

	/* begin block 2 */
		// Start line: 323
	/* end block 2 */
	// End Line: 324

	/* begin block 3 */
		// Start line: 327
	/* end block 3 */
	// End Line: 328

	/* begin block 4 */
		// Start line: 327
	/* end block 4 */
	// End Line: 328

	/* begin block 5 */
		// Start line: 328
	/* end block 5 */
	// End Line: 329

	/* begin block 6 */
		// Start line: 328
	/* end block 6 */
	// End Line: 329

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CleanUp1__14AIDataRecord_t(void)

{
  int iVar1;
  
  if (AIDataRecord_BestLine != (AIDataRecord_BestLine_t *)0x0) {
    iVar1 = *(int *)(AIDataRecord_BestLine->AIDataRecord_t)._vf;
    (**(code **)(iVar1 + 0xc))
              ((int)&(AIDataRecord_BestLine->AIDataRecord_t).numElements_ +
               (int)*(short *)(iVar1 + 8),3);
    AIDataRecord_BestLine = (AIDataRecord_BestLine_t *)0x0;
  }
  if (AIDataRecord_TrackCurve != (AIDataRecord_TrackCurve_t *)0x0) {
    iVar1 = *(int *)(AIDataRecord_TrackCurve->AIDataRecord_t)._vf;
    (**(code **)(iVar1 + 0xc))
              ((int)&(AIDataRecord_TrackCurve->AIDataRecord_t).numElements_ +
               (int)*(short *)(iVar1 + 8),3);
    AIDataRecord_TrackCurve = (AIDataRecord_TrackCurve_t *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CleanUp2__14AIDataRecord_t()
 // line 166, offset 0x8006d084
	/* begin block 1 */
		// Start line: 167
		// Start offset: 0x8006D084
	/* end block 1 */
	// End offset: 0x8006D084
	// End Line: 167

	/* begin block 2 */
		// Start line: 351
	/* end block 2 */
	// End Line: 352

	/* begin block 3 */
		// Start line: 356
	/* end block 3 */
	// End Line: 357

	/* begin block 4 */
		// Start line: 356
	/* end block 4 */
	// End Line: 357

	/* begin block 5 */
		// Start line: 357
	/* end block 5 */
	// End Line: 358

	/* begin block 6 */
		// Start line: 357
	/* end block 6 */
	// End Line: 358

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CleanUp2__14AIDataRecord_t(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Setup__14AIDataRecord_t(struct AIDataRecord_t *this /*$s0*/)
 // line 170, offset 0x8006d08c
	/* begin block 1 */
		// Start line: 171
		// Start offset: 0x8006D08C

		/* begin block 1.1 */
			// Start line: 171
			// Start offset: 0x8006D08C

			/* begin block 1.1.1 */
				// Start line: 175
				// Start offset: 0x8006D0AC

				/* begin block 1.1.1.1 */
					// Start line: 175
					// Start offset: 0x8006D0AC
					// Variables:
				// 		struct AIDataRecord_t *this; // $s0

					/* begin block 1.1.1.1.1 */
						// Start line: 175
						// Start offset: 0x8006D0AC
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006D0AC
					// End Line: 175
				/* end block 1.1.1.1 */
				// End offset: 0x8006D0AC
				// End Line: 175
			/* end block 1.1.1 */
			// End offset: 0x8006D0AC
			// End Line: 175

			/* begin block 1.1.2 */
				// Start line: 183
				// Start offset: 0x8006D0AC

				/* begin block 1.1.2.1 */
					// Start line: 186
					// Start offset: 0x8006D0AC

					/* begin block 1.1.2.1.1 */
						// Start line: 194
						// Start offset: 0x8006D0BC

						/* begin block 1.1.2.1.1.1 */
							// Start line: 194
							// Start offset: 0x8006D0BC
							// Variables:
						// 		struct AIDataRecord_t *this; // $s0

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 194
								// Start offset: 0x8006D0BC
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x8006D0BC
							// End Line: 194
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x8006D0BC
						// End Line: 194

						/* begin block 1.1.2.1.1.2 */
							// Start line: 194
							// Start offset: 0x8006D0BC
							// Variables:
						// 		struct AIDataRecord_t *this; // $s0

							/* begin block 1.1.2.1.1.2.1 */
								// Start line: 194
								// Start offset: 0x8006D0BC
							/* end block 1.1.2.1.1.2.1 */
							// End offset: 0x8006D0BC
							// End Line: 194
						/* end block 1.1.2.1.1.2 */
						// End offset: 0x8006D0BC
						// End Line: 194

						/* begin block 1.1.2.1.1.3 */
							// Start line: 204
							// Start offset: 0x8006D0BC
							// Variables:
						// 		struct AIDataRecord_t *this; // $s0

							/* begin block 1.1.2.1.1.3.1 */
								// Start line: 204
								// Start offset: 0x8006D0BC
							/* end block 1.1.2.1.1.3.1 */
							// End offset: 0x8006D0CC
							// End Line: 204
						/* end block 1.1.2.1.1.3 */
						// End offset: 0x8006D0CC
						// End Line: 204
					/* end block 1.1.2.1.1 */
					// End offset: 0x8006D0CC
					// End Line: 205
				/* end block 1.1.2.1 */
				// End offset: 0x8006D0CC
				// End Line: 205
			/* end block 1.1.2 */
			// End offset: 0x8006D0CC
			// End Line: 205
		/* end block 1.1 */
		// End offset: 0x8006D0CC
		// End Line: 205
	/* end block 1 */
	// End offset: 0x8006D0CC
	// End Line: 205

	/* begin block 2 */
		// Start line: 361
	/* end block 2 */
	// End Line: 362

	/* begin block 3 */
		// Start line: 364
	/* end block 3 */
	// End Line: 365

	/* begin block 4 */
		// Start line: 364
	/* end block 4 */
	// End Line: 365

void Setup__14AIDataRecord_t(AIDataRecord_t *this)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = (short *)this->preAllocatedBuffer_;
  if (psVar2 == (short *)0x0) {
    iVar1 = Load__14AIDataRecord_t(this);
    if (iVar1 != 0) {
      return;
    }
    psVar2 = reservememadr(this->name_,this->bSize_,0);
  }
  *(short **)&this->dataBuffer_ = psVar2;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Load__14AIDataRecord_t(struct AIDataRecord_t *this /*$s0*/)
 // line 225, offset 0x8006d0dc
	/* begin block 1 */
		// Start line: 226
		// Start offset: 0x8006D0DC

		/* begin block 1.1 */
			// Start line: 226
			// Start offset: 0x8006D0DC

			/* begin block 1.1.1 */
				// Start line: 226
				// Start offset: 0x8006D0DC
				// Variables:
			// 		struct AIDataRecord_t *this; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 226
					// Start offset: 0x8006D0DC
				/* end block 1.1.1.1 */
				// End offset: 0x8006D0DC
				// End Line: 226
			/* end block 1.1.1 */
			// End offset: 0x8006D0DC
			// End Line: 226

			/* begin block 1.1.2 */
				// Start line: 229
				// Start offset: 0x8006D0FC

				/* begin block 1.1.2.1 */
					// Start line: 229
					// Start offset: 0x8006D0FC
					// Variables:
				// 		struct AIDataRecord_t *this; // $s0

					/* begin block 1.1.2.1.1 */
						// Start line: 229
						// Start offset: 0x8006D0FC
					/* end block 1.1.2.1.1 */
					// End offset: 0x8006D0FC
					// End Line: 229
				/* end block 1.1.2.1 */
				// End offset: 0x8006D0FC
				// End Line: 229

				/* begin block 1.1.2.2 */
					// Start line: 230
					// Start offset: 0x8006D0FC
					// Variables:
				// 		struct AIDataRecord_t *this; // $s0

					/* begin block 1.1.2.2.1 */
						// Start line: 230
						// Start offset: 0x8006D0FC
					/* end block 1.1.2.2.1 */
					// End offset: 0x8006D108
					// End Line: 230
				/* end block 1.1.2.2 */
				// End offset: 0x8006D108
				// End Line: 230
			/* end block 1.1.2 */
			// End offset: 0x8006D108
			// End Line: 230
		/* end block 1.1 */
		// End offset: 0x8006D108
		// End Line: 230

		/* begin block 1.2 */
			// Start line: 239
			// Start offset: 0x8006D108

			/* begin block 1.2.1 */
				// Start line: 239
				// Start offset: 0x8006D108
				// Variables:
			// 		struct AIDataRecord_t *this; // $s0

				/* begin block 1.2.1.1 */
					// Start line: 239
					// Start offset: 0x8006D108
				/* end block 1.2.1.1 */
				// End offset: 0x8006D108
				// End Line: 239
			/* end block 1.2.1 */
			// End offset: 0x8006D108
			// End Line: 239
		/* end block 1.2 */
		// End offset: 0x8006D108
		// End Line: 239
	/* end block 1 */
	// End offset: 0x8006D108
	// End Line: 239

	/* begin block 2 */
		// Start line: 453
	/* end block 2 */
	// End Line: 454

	/* begin block 3 */
		// Start line: 474
	/* end block 3 */
	// End Line: 475

	/* begin block 4 */
		// Start line: 474
	/* end block 4 */
	// End Line: 475

int Load__14AIDataRecord_t(AIDataRecord_t *this)

{
  undefined4 *puVar1;
  
  if (this->recordMethod_ == NORMAL_M) {
    puVar1 = loadpackadrz(this->name_,0);
    *(undefined4 **)&this->dataBuffer_ = puVar1;
  }
  return (uint)(this->dataBuffer_ != (char *)0x0);
}



// decompiled code
// original method signature: 
// int /*$ra*/ SaveAndPurge__14AIDataRecord_t(struct AIDataRecord_t *this /*$s0*/)
 // line 243, offset 0x8006d120
	/* begin block 1 */
		// Start line: 244
		// Start offset: 0x8006D120

		/* begin block 1.1 */
			// Start line: 244
			// Start offset: 0x8006D120

			/* begin block 1.1.1 */
				// Start line: 244
				// Start offset: 0x8006D120
				// Variables:
			// 		struct AIDataRecord_t *this; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 244
					// Start offset: 0x8006D120
				/* end block 1.1.1.1 */
				// End offset: 0x8006D120
				// End Line: 244
			/* end block 1.1.1 */
			// End offset: 0x8006D120
			// End Line: 244

			/* begin block 1.1.2 */
				// Start line: 246
				// Start offset: 0x8006D140

				/* begin block 1.1.2.1 */
					// Start line: 257
					// Start offset: 0x8006D140

					/* begin block 1.1.2.1.1 */
						// Start line: 258
						// Start offset: 0x8006D150

						/* begin block 1.1.2.1.1.1 */
							// Start line: 258
							// Start offset: 0x8006D150
							// Variables:
						// 		struct AIDataRecord_t *this; // $s0

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 258
								// Start offset: 0x8006D150
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x8006D150
							// End Line: 258
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x8006D150
						// End Line: 258
					/* end block 1.1.2.1.1 */
					// End offset: 0x8006D158
					// End Line: 259
				/* end block 1.1.2.1 */
				// End offset: 0x8006D158
				// End Line: 259

				/* begin block 1.1.2.2 */
					// Start line: 259
					// Start offset: 0x8006D158
					// Variables:
				// 		struct AIDataRecord_t *this; // $s0

					/* begin block 1.1.2.2.1 */
						// Start line: 259
						// Start offset: 0x8006D158
					/* end block 1.1.2.2.1 */
					// End offset: 0x8006D158
					// End Line: 259
				/* end block 1.1.2.2 */
				// End offset: 0x8006D158
				// End Line: 259
			/* end block 1.1.2 */
			// End offset: 0x8006D160
			// End Line: 266
		/* end block 1.1 */
		// End offset: 0x8006D160
		// End Line: 271
	/* end block 1 */
	// End offset: 0x8006D160
	// End Line: 271

	/* begin block 2 */
		// Start line: 507
	/* end block 2 */
	// End Line: 508

	/* begin block 3 */
		// Start line: 511
	/* end block 3 */
	// End Line: 512

	/* begin block 4 */
		// Start line: 511
	/* end block 4 */
	// End Line: 512

int SaveAndPurge__14AIDataRecord_t(AIDataRecord_t *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (this->dataBuffer_ != (char *)0x0) {
    if (this->preAllocatedBuffer_ == (char *)0x0) {
      purgememadr((int)this->dataBuffer_);
    }
    this->dataBuffer_ = (char *)0x0;
    iVar1 = 1;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// struct AIDataRecord_AccTable_t * /*$ra*/ __23AIDataRecord_AccTable_tPci26AIDataRecord_WhichRecord_t(struct AIDataRecord_AccTable_t *this /*$s0*/, char *preBuffer /*$v0*/, int scale /*$s1*/, enum AIDataRecord_WhichRecord_t whichIsThis /*$a3*/)
 // line 394, offset 0x8006d170
	/* begin block 1 */
		// Start line: 395
		// Start offset: 0x8006D170
	/* end block 1 */
	// End offset: 0x8006D170
	// End Line: 395

	/* begin block 2 */
		// Start line: 689
	/* end block 2 */
	// End Line: 690

	/* begin block 3 */
		// Start line: 813
	/* end block 3 */
	// End Line: 814

	/* begin block 4 */
		// Start line: 813
	/* end block 4 */
	// End Line: 814

AIDataRecord_AccTable_t *
__23AIDataRecord_AccTable_tPci26AIDataRecord_WhichRecord_t
          (AIDataRecord_AccTable_t *this,char *preBuffer,int scale,
          AIDataRecord_WhichRecord_t whichIsThis)

{
  __14AIDataRecord_t26AIDataRecord_WhichRecord_tPc((AIDataRecord_t *)this,whichIsThis,preBuffer);
  *(undefined4 *)(this->AIDataRecord_t)._vf = 0x80055494;
  (this->AIDataRecord_t).numElements_ = 0x70;
  (this->AIDataRecord_t).bSize_ = 0xe0;
  this->scale_ = scale;
  sprintf((this->AIDataRecord_t).name_,s__s_s_acc_800553b8,PTR_8011647c,
          Cars_gHumanRaceCarList9->carName);
  return this;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Get__23AIDataRecord_AccTable_ti(struct AIDataRecord_AccTable_t *this /*$a0*/, int speed /*$a1*/)
 // line 403, offset 0x8006d1f4
	/* begin block 1 */
		// Start line: 404
		// Start offset: 0x8006D1F4
	/* end block 1 */
	// End offset: 0x8006D1F4
	// End Line: 405

	/* begin block 2 */
		// Start line: 835
	/* end block 2 */
	// End Line: 836

	/* begin block 3 */
		// Start line: 839
	/* end block 3 */
	// End Line: 840

	/* begin block 4 */
		// Start line: 839
	/* end block 4 */
	// End Line: 840

	/* begin block 5 */
		// Start line: 840
	/* end block 5 */
	// End Line: 841

	/* begin block 6 */
		// Start line: 840
	/* end block 6 */
	// End Line: 841

int Get__23AIDataRecord_AccTable_ti(AIDataRecord_AccTable_t *this,int speed)

{
  return (int)*(short *)((this->AIDataRecord_t).dataBuffer_ + speed * 2) << 8;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Setup__23AIDataRecord_AccTable_t(struct AIDataRecord_AccTable_t *this /*$s1*/)
 // line 408, offset 0x8006d20c
	/* begin block 1 */
		// Start line: 409
		// Start offset: 0x8006D20C

		/* begin block 1.1 */
			// Start line: 409
			// Start offset: 0x8006D20C
			// Variables:
		// 		int loop; // $s0

			/* begin block 1.1.1 */
				// Start line: 411
				// Start offset: 0x8006D228
			/* end block 1.1.1 */
			// End offset: 0x8006D234
			// End Line: 414
		/* end block 1.1 */
		// End offset: 0x8006D264
		// End Line: 419
	/* end block 1 */
	// End offset: 0x8006D264
	// End Line: 419

	/* begin block 2 */
		// Start line: 845
	/* end block 2 */
	// End Line: 846

	/* begin block 3 */
		// Start line: 849
	/* end block 3 */
	// End Line: 850

	/* begin block 4 */
		// Start line: 849
	/* end block 4 */
	// End Line: 850

void Setup__23AIDataRecord_AccTable_t(AIDataRecord_AccTable_t *this)

{
  int iVar1;
  uint uVar2;
  int speed;
  
  Setup__14AIDataRecord_t((AIDataRecord_t *)this);
  speed = 0;
  while (speed < 0x70) {
    iVar1 = Get__23AIDataRecord_AccTable_ti(this,speed);
    uVar2 = fixedmult(iVar1,this->scale_);
    iVar1 = speed * 2;
    speed = speed + 1;
    *(short *)((this->AIDataRecord_t).dataBuffer_ + iVar1) = (short)(uVar2 >> 8);
  }
  return;
}



// decompiled code
// original method signature: 
// struct AIDataRecord_BestLine_t * /*$ra*/ __23AIDataRecord_BestLine_t26AIDataRecord_WhichRecord_t(struct AIDataRecord_BestLine_t *this /*$s0*/, enum AIDataRecord_WhichRecord_t whichIsThis /*$a1*/)
 // line 457, offset 0x8006d278
	/* begin block 1 */
		// Start line: 458
		// Start offset: 0x8006D278

		/* begin block 1.1 */
			// Start line: 458
			// Start offset: 0x8006D278

			/* begin block 1.1.1 */
				// Start line: 458
				// Start offset: 0x8006D278
				// Variables:
			// 		struct AIDataRecord_t *this; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 458
					// Start offset: 0x8006D278
				/* end block 1.1.1.1 */
				// End offset: 0x8006D278
				// End Line: 458
			/* end block 1.1.1 */
			// End offset: 0x8006D278
			// End Line: 458
		/* end block 1.1 */
		// End offset: 0x8006D2F8
		// End Line: 465
	/* end block 1 */
	// End offset: 0x8006D2F8
	// End Line: 465

	/* begin block 2 */
		// Start line: 909
	/* end block 2 */
	// End Line: 910

	/* begin block 3 */
		// Start line: 948
	/* end block 3 */
	// End Line: 949

	/* begin block 4 */
		// Start line: 948
	/* end block 4 */
	// End Line: 949

AIDataRecord_BestLine_t *
__23AIDataRecord_BestLine_t26AIDataRecord_WhichRecord_t
          (AIDataRecord_BestLine_t *this,AIDataRecord_WhichRecord_t whichIsThis)

{
  int iVar1;
  char *__format;
  char *pcVar2;
  
  __14AIDataRecord_t26AIDataRecord_WhichRecord_tPc((AIDataRecord_t *)this,whichIsThis,(char *)0x0);
  iVar1 = gNumSlices;
  *(undefined4 *)(this->AIDataRecord_t)._vf = 0x8005547c;
  (this->AIDataRecord_t).numElements_ = iVar1;
  (this->AIDataRecord_t).bSize_ = iVar1;
  if ((this->AIDataRecord_t).recordMethod_ == NORMAL_M) {
    __format = s__sTr_02d_qbe_800553c4;
    pcVar2 = PTR_80116498;
  }
  else {
    __format = s__sTr_02d_bes_800553d4;
    pcVar2 = PTR_ARRAY_8011649c[0];
  }
  sprintf((this->AIDataRecord_t).name_,__format,pcVar2,GameSetup_gData.track);
  return this;
}



// decompiled code
// original method signature: 
// struct AIDataRecord_TrackCurve_t * /*$ra*/ __25AIDataRecord_TrackCurve_t26AIDataRecord_WhichRecord_t(struct AIDataRecord_TrackCurve_t *this /*$s0*/, enum AIDataRecord_WhichRecord_t whichIsThis /*$a1*/)
 // line 535, offset 0x8006d30c
	/* begin block 1 */
		// Start line: 536
		// Start offset: 0x8006D30C

		/* begin block 1.1 */
			// Start line: 536
			// Start offset: 0x8006D30C

			/* begin block 1.1.1 */
				// Start line: 536
				// Start offset: 0x8006D30C
				// Variables:
			// 		struct AIDataRecord_t *this; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 536
					// Start offset: 0x8006D30C
				/* end block 1.1.1.1 */
				// End offset: 0x8006D30C
				// End Line: 536
			/* end block 1.1.1 */
			// End offset: 0x8006D30C
			// End Line: 536
		/* end block 1.1 */
		// End offset: 0x8006D390
		// End Line: 543
	/* end block 1 */
	// End offset: 0x8006D390
	// End Line: 543

	/* begin block 2 */
		// Start line: 1035
	/* end block 2 */
	// End Line: 1036

	/* begin block 3 */
		// Start line: 1106
	/* end block 3 */
	// End Line: 1107

	/* begin block 4 */
		// Start line: 1106
	/* end block 4 */
	// End Line: 1107

AIDataRecord_TrackCurve_t *
__25AIDataRecord_TrackCurve_t26AIDataRecord_WhichRecord_t
          (AIDataRecord_TrackCurve_t *this,AIDataRecord_WhichRecord_t whichIsThis)

{
  int iVar1;
  char *__format;
  char *pcVar2;
  
  __14AIDataRecord_t26AIDataRecord_WhichRecord_tPc((AIDataRecord_t *)this,whichIsThis,(char *)0x0);
  iVar1 = gNumSlices;
  *(undefined4 *)(this->AIDataRecord_t)._vf = 0x80055464;
  (this->AIDataRecord_t).numElements_ = iVar1;
  (this->AIDataRecord_t).bSize_ = iVar1 + 1;
  if ((this->AIDataRecord_t).recordMethod_ == NORMAL_M) {
    __format = s__sTr_02d_qcr_800553e4;
    pcVar2 = PTR_80116490;
  }
  else {
    __format = s__sTr_02d_crv_800553f4;
    pcVar2 = PTR_80116494;
  }
  sprintf((this->AIDataRecord_t).name_,__format,pcVar2,GameSetup_gData.track);
  return this;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Get__25AIDataRecord_TrackCurve_ti(struct AIDataRecord_TrackCurve_t *this /*$a0*/, int slice /*$a1*/)
 // line 546, offset 0x8006d3a4
	/* begin block 1 */
		// Start line: 547
		// Start offset: 0x8006D3A4
	/* end block 1 */
	// End offset: 0x8006D3A4
	// End Line: 548

	/* begin block 2 */
		// Start line: 1126
	/* end block 2 */
	// End Line: 1127

	/* begin block 3 */
		// Start line: 1130
	/* end block 3 */
	// End Line: 1131

	/* begin block 4 */
		// Start line: 1130
	/* end block 4 */
	// End Line: 1131

	/* begin block 5 */
		// Start line: 1131
	/* end block 5 */
	// End Line: 1132

	/* begin block 6 */
		// Start line: 1131
	/* end block 6 */
	// End Line: 1132

int Get__25AIDataRecord_TrackCurve_ti(AIDataRecord_TrackCurve_t *this,int slice)

{
  return (uint)(byte)(this->AIDataRecord_t).dataBuffer_[slice];
}



// decompiled code
// original method signature: 
// struct AIDataRecord_CurveSpeedTable_t * /*$ra*/ __30AIDataRecord_CurveSpeedTable_tPc26AIDataRecord_WhichRecord_t(struct AIDataRecord_CurveSpeedTable_t *this /*$s0*/, char *carName /*$s1*/, enum AIDataRecord_WhichRecord_t whichIsThis /*$a2*/)
 // line 617, offset 0x8006d3bc
	/* begin block 1 */
		// Start line: 618
		// Start offset: 0x8006D3BC

		/* begin block 1.1 */
			// Start line: 618
			// Start offset: 0x8006D3BC

			/* begin block 1.1.1 */
				// Start line: 618
				// Start offset: 0x8006D3BC
				// Variables:
			// 		struct AIDataRecord_t *this; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 618
					// Start offset: 0x8006D3BC
				/* end block 1.1.1.1 */
				// End offset: 0x8006D3BC
				// End Line: 618
			/* end block 1.1.1 */
			// End offset: 0x8006D3BC
			// End Line: 618
		/* end block 1.1 */
		// End offset: 0x8006D434
		// End Line: 625
	/* end block 1 */
	// End offset: 0x8006D434
	// End Line: 625

	/* begin block 2 */
		// Start line: 1202
	/* end block 2 */
	// End Line: 1203

	/* begin block 3 */
		// Start line: 1272
	/* end block 3 */
	// End Line: 1273

	/* begin block 4 */
		// Start line: 1272
	/* end block 4 */
	// End Line: 1273

AIDataRecord_CurveSpeedTable_t *
__30AIDataRecord_CurveSpeedTable_tPc26AIDataRecord_WhichRecord_t
          (AIDataRecord_CurveSpeedTable_t *this,char *carName,AIDataRecord_WhichRecord_t whichIsThis
          )

{
  char *__format;
  char *pcVar1;
  
  __14AIDataRecord_t26AIDataRecord_WhichRecord_tPc((AIDataRecord_t *)this,whichIsThis,(char *)0x0);
  *(undefined4 *)(this->AIDataRecord_t)._vf = 0x8005544c;
  (this->AIDataRecord_t).numElements_ = 0x100;
  (this->AIDataRecord_t).bSize_ = 0x100;
  if ((this->AIDataRecord_t).recordMethod_ == NORMAL_M) {
    __format = s__s_s_qcs_80055404;
    pcVar1 = PTR_80116478;
  }
  else {
    __format = s__s_s_csp_80055410;
    pcVar1 = PTR_8011647c;
  }
  sprintf((this->AIDataRecord_t).name_,__format,pcVar1,carName);
  return this;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Get__30AIDataRecord_CurveSpeedTable_ti(struct AIDataRecord_CurveSpeedTable_t *this /*$a0*/, int curve /*$a1*/)
 // line 629, offset 0x8006d44c
	/* begin block 1 */
		// Start line: 630
		// Start offset: 0x8006D44C
	/* end block 1 */
	// End offset: 0x8006D468
	// End Line: 637

	/* begin block 2 */
		// Start line: 1291
	/* end block 2 */
	// End Line: 1292

	/* begin block 3 */
		// Start line: 1296
	/* end block 3 */
	// End Line: 1297

	/* begin block 4 */
		// Start line: 1296
	/* end block 4 */
	// End Line: 1297

	/* begin block 5 */
		// Start line: 1298
	/* end block 5 */
	// End Line: 1299

int Get__30AIDataRecord_CurveSpeedTable_ti(AIDataRecord_CurveSpeedTable_t *this,int curve)

{
  bool bVar1;
  
  bVar1 = curve < 0x100;
  if (curve < 0) {
    curve = -curve;
    bVar1 = curve < 0x100;
  }
  if (!bVar1) {
    curve = 0xff;
  }
  return (uint)(byte)(this->AIDataRecord_t).dataBuffer_[curve] << 0x10;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Upgrade__30AIDataRecord_CurveSpeedTable_ti(struct AIDataRecord_CurveSpeedTable_t *this /*$s1*/, int handlingUpgrade /*$s3*/)
 // line 680, offset 0x8006d480
	/* begin block 1 */
		// Start line: 681
		// Start offset: 0x8006D480

		/* begin block 1.1 */
			// Start line: 681
			// Start offset: 0x8006D480
			// Variables:
		// 		int curveLoop; // $s0

			/* begin block 1.1.1 */
				// Start line: 682
				// Start offset: 0x8006D4A8

				/* begin block 1.1.1.1 */
					// Start line: 682
					// Start offset: 0x8006D4A8
					// Variables:
				// 		struct AIDataRecord_t *this; // $s1

					/* begin block 1.1.1.1.1 */
						// Start line: 682
						// Start offset: 0x8006D4A8
					/* end block 1.1.1.1.1 */
					// End offset: 0x8006D4A8
					// End Line: 682
				/* end block 1.1.1.1 */
				// End offset: 0x8006D4A8
				// End Line: 682
			/* end block 1.1.1 */
			// End offset: 0x8006D4E0
			// End Line: 686
		/* end block 1.1 */
		// End offset: 0x8006D4F0
		// End Line: 687
	/* end block 1 */
	// End offset: 0x8006D4F0
	// End Line: 687

	/* begin block 2 */
		// Start line: 1354
	/* end block 2 */
	// End Line: 1355

	/* begin block 3 */
		// Start line: 1398
	/* end block 3 */
	// End Line: 1399

	/* begin block 4 */
		// Start line: 1398
	/* end block 4 */
	// End Line: 1399

void Upgrade__30AIDataRecord_CurveSpeedTable_ti
               (AIDataRecord_CurveSpeedTable_t *this,int handlingUpgrade)

{
  int iVar1;
  uint uVar2;
  int curve;
  
  curve = 0;
  while (curve < (this->AIDataRecord_t).numElements_) {
    iVar1 = Get__30AIDataRecord_CurveSpeedTable_ti(this,curve);
    uVar2 = fixedmult(iVar1,handlingUpgrade);
    uVar2._2_1_ = (char)(uVar2 >> 0x10);
    if ((int)uVar2 < 0) {
      uVar2._2_1_ = (char)(uVar2 + 0xffff >> 0x10);
    }
    (this->AIDataRecord_t).dataBuffer_[curve] = uVar2._2_1_;
    curve = curve + 1;
  }
  return;
}





