#include "NFS4.H"
#include "SPEECH.H"

// decompiled code
// original method signature: 
// int /*$ra*/ StatusCount__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this /*$a0*/)
 // line 56, offset 0x80099358
	/* begin block 1 */
		// Start line: 57
		// Start offset: 0x80099358
	/* end block 1 */
	// End offset: 0x80099358
	// End Line: 57

int StatusCount__Q26Speech15DispatchSpeaker(DispatchSpeaker *this)

{
  return (this->Speaker)._vf[1].value;
}



// decompiled code
// original method signature: 
// struct Speaker * /*$ra*/ StatusSub__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this /*$a0*/)
 // line 57, offset 0x8009934c
	/* begin block 1 */
		// Start line: 58
		// Start offset: 0x8009934C
	/* end block 1 */
	// End offset: 0x8009934C
	// End Line: 58

Speaker * StatusSub__Q26Speech15DispatchSpeaker(DispatchSpeaker *this)

{
  return (Speaker *)(this->Speaker)._vf[2].value;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PurgeStatusSub__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this /*$a0*/)
 // line 58, offset 0x80099344
	/* begin block 1 */
		// Start line: 59
		// Start offset: 0x80099344
	/* end block 1 */
	// End offset: 0x80099344
	// End Line: 59

void PurgeStatusSub__Q26Speech15DispatchSpeaker(DispatchSpeaker *this)

{
  (this->Speaker)._vf[2].value = 0;
  return;
}



// decompiled code
// original method signature: 
// struct CarBank * /*$ra*/ GetCarBank__Q26Speech15DispatchSpeakeri(struct DispatchSpeaker *this /*$a0*/, int carIndex /*$a1*/)
 // line 65, offset 0x80099328
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80099328

		/* begin block 1.1 */
			// Start line: 66
			// Start offset: 0x80099328

			/* begin block 1.1.1 */
				// Start line: 66
				// Start offset: 0x80099328
			/* end block 1.1.1 */
			// End offset: 0x80099328
			// End Line: 66
		/* end block 1.1 */
		// End offset: 0x80099328
		// End Line: 66
	/* end block 1 */
	// End offset: 0x80099328
	// End Line: 66

CarBank * GetCarBank__Q26Speech15DispatchSpeakeri(DispatchSpeaker *this,int carIndex)

{
  return (CarBank *)(DAT_00000838 + carIndex * 0xc + 0x6c);
}



// decompiled code
// original method signature: 
// struct LocationBank * /*$ra*/ FindClosestLocationTo__Q26Speech15DispatchSpeakeri(struct DispatchSpeaker *this /*$a0*/, int slice /*$a2*/)
 // line 69, offset 0x80099300
	/* begin block 1 */
		// Start line: 70
		// Start offset: 0x80099300

		/* begin block 1.1 */
			// Start line: 70
			// Start offset: 0x80099300
			// Variables:
		// 		struct Speech *this; // $a0
		// 		int slice; // $a2

			/* begin block 1.1.1 */
				// Start line: 70
				// Start offset: 0x80099300
			/* end block 1.1.1 */
			// End offset: 0x80099300
			// End Line: 70
		/* end block 1.1 */
		// End offset: 0x80099300
		// End Line: 70
	/* end block 1 */
	// End offset: 0x80099300
	// End Line: 70

LocationBank * FindClosestLocationTo__Q26Speech15DispatchSpeakeri(DispatchSpeaker *this,int slice)

{
  LocationBank *pLVar1;
  
  pLVar1 = FindClosestLocationTo__6SpeechPQ26Speech12LocationBanki
                     (DAT_00000838,(DAT_00000838->fLocationBank).Dispatch,slice);
  return pLVar1;
}



// decompiled code
// original method signature: 
// struct CallSignBank * /*$ra*/ CallSign__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this /*$a0*/)
 // line 73, offset 0x800992f4
	/* begin block 1 */
		// Start line: 74
		// Start offset: 0x800992F4

		/* begin block 1.1 */
			// Start line: 74
			// Start offset: 0x800992F4
			// Variables:
		// 		struct Speech *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 74
				// Start offset: 0x800992F4
			/* end block 1.1.1 */
			// End offset: 0x800992F4
			// End Line: 74
		/* end block 1.1 */
		// End offset: 0x800992F4
		// End Line: 74
	/* end block 1 */
	// End offset: 0x800992F4
	// End Line: 74

CallSignBank * CallSign__Q26Speech15DispatchSpeaker(DispatchSpeaker *this)

{
  return (CallSignBank *)(DAT_00000838 + 0x31c);
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsSuper__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$a0*/)
 // line 106, offset 0x800992d8
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x800992D8
	/* end block 1 */
	// End offset: 0x800992D8
	// End Line: 107

void * IsSuper__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  return (void *)(*(uint *)((this->Speaker)._vf[5].value + 0x260) >> 6 & 1);
}



// decompiled code
// original method signature: 
// struct Car_tObj * /*$ra*/ CarObj__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$a0*/)
 // line 114, offset 0x800992cc
	/* begin block 1 */
		// Start line: 115
		// Start offset: 0x800992CC
	/* end block 1 */
	// End offset: 0x800992CC
	// End Line: 115

Car_tObj * CarObj__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  return (Car_tObj *)(this->Speaker)._vf[5].value;
}



// decompiled code
// original method signature: 
// struct CarBank * /*$ra*/ GetCarBank__Q26Speech13MobileSpeakeri(struct MobileSpeaker *this /*$a0*/, int carIndex /*$a1*/)
 // line 122, offset 0x800992b4
	/* begin block 1 */
		// Start line: 123
		// Start offset: 0x800992B4

		/* begin block 1.1 */
			// Start line: 123
			// Start offset: 0x800992B4

			/* begin block 1.1.1 */
				// Start line: 123
				// Start offset: 0x800992B4
			/* end block 1.1.1 */
			// End offset: 0x800992B4
			// End Line: 123
		/* end block 1.1 */
		// End offset: 0x800992B4
		// End Line: 123
	/* end block 1 */
	// End offset: 0x800992B4
	// End Line: 123

CarBank * GetCarBank__Q26Speech13MobileSpeakeri(MobileSpeaker *this,int carIndex)

{
  return (CarBank *)(DAT_00000838 + carIndex * 0xc);
}



// decompiled code
// original method signature: 
// struct LocationBank * /*$ra*/ FindClosestLocationTo__Q26Speech13MobileSpeakeri(struct MobileSpeaker *this /*$a0*/, int slice /*$a2*/)
 // line 126, offset 0x8009928c
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x8009928C

		/* begin block 1.1 */
			// Start line: 127
			// Start offset: 0x8009928C
			// Variables:
		// 		struct Speech *this; // $a0
		// 		int slice; // $a2

			/* begin block 1.1.1 */
				// Start line: 127
				// Start offset: 0x8009928C
			/* end block 1.1.1 */
			// End offset: 0x8009928C
			// End Line: 127
		/* end block 1.1 */
		// End offset: 0x8009928C
		// End Line: 127
	/* end block 1 */
	// End offset: 0x8009928C
	// End Line: 127

LocationBank * FindClosestLocationTo__Q26Speech13MobileSpeakeri(MobileSpeaker *this,int slice)

{
  LocationBank *pLVar1;
  
  pLVar1 = FindClosestLocationTo__6SpeechPQ26Speech12LocationBanki
                     (DAT_00000838,(LocationBank *)&DAT_00000838->fLocationBank,slice);
  return pLVar1;
}



// decompiled code
// original method signature: 
// struct CallSignBank * /*$ra*/ CallSign__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$a0*/)
 // line 130, offset 0x80099280
	/* begin block 1 */
		// Start line: 131
		// Start offset: 0x80099280

		/* begin block 1.1 */
			// Start line: 131
			// Start offset: 0x80099280
			// Variables:
		// 		struct Speech *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 131
				// Start offset: 0x80099280
			/* end block 1.1.1 */
			// End offset: 0x80099280
			// End Line: 131
		/* end block 1.1 */
		// End offset: 0x80099280
		// End Line: 131
	/* end block 1 */
	// End offset: 0x80099280
	// End Line: 131

CallSignBank * CallSign__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  return (CallSignBank *)(DAT_00000838 + 0x2d8);
}



// decompiled code
// original method signature: 
// int /*$ra*/ Unit__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$a0*/)
 // line 134, offset 0x80099274
	/* begin block 1 */
		// Start line: 135
		// Start offset: 0x80099274
	/* end block 1 */
	// End offset: 0x80099274
	// End Line: 136

int Unit__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  return (this->Speaker)._vf[4].value;
}



// decompiled code
// original method signature: 
// struct Car_tObj * /*$ra*/ Perp__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$a0*/)
 // line 147, offset 0x80099268
	/* begin block 1 */
		// Start line: 148
		// Start offset: 0x80099268
	/* end block 1 */
	// End offset: 0x80099268
	// End Line: 148

Car_tObj * Perp__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  return (Car_tObj *)(this->Speaker)._vf[6].value;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ Speech_AllocateRAM__FlPc(long numBytes /*$v0*/, char *message /*$a1*/)
 // line 169, offset 0x800942e8
	/* begin block 1 */
		// Start line: 170
		// Start offset: 0x800942E8
	/* end block 1 */
	// End offset: 0x800942E8
	// End Line: 170

char * Speech_AllocateRAM__FlPc(long numBytes,char *message)

{
  short *psVar1;
  
  psVar1 = reservememadr(message,numBytes,0);
  return (char *)psVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Speech_PurgeRAM__FPc(char *memPtr /*$a0*/)
 // line 174, offset 0x80094314
	/* begin block 1 */
		// Start line: 175
		// Start offset: 0x80094314
	/* end block 1 */
	// End offset: 0x80094314
	// End Line: 175

void Speech_PurgeRAM__FPc(char *memPtr)

{
  purgememadr((int)memPtr);
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ Speech_HandleRequest__Fllll(long bank /*$a0*/, long localoffset /*$a1*/, long size /*$a2*/, long event /*$a3*/)
 // line 179, offset 0x80094334
	/* begin block 1 */
		// Start line: 180
		// Start offset: 0x80094334
	/* end block 1 */
	// End offset: 0x80094334
	// End Line: 180

long Speech_HandleRequest__Fllll(long bank,long localoffset,long size,long event)

{
  long lVar1;
  
  lVar1 = SubmitRequest__6Speechlll(bank,localoffset,size);
  return lVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetCar__Q26Speech11CarBankNamei(struct CarBankName *this /*$s2*/, int carIndex /*$a1*/)
 // line 234, offset 0x80094354
	/* begin block 1 */
		// Start line: 235
		// Start offset: 0x80094354
		// Variables:
	// 		char *game; // $s1
	// 		struct Speech_tCarDescription *d; // $s0
	/* end block 1 */
	// End offset: 0x800943E0
	// End Line: 245

void SetCar__Q26Speech11CarBankNamei(CarBankName *this,int carIndex)

{
  int iVar1;
  int iVar2;
  Speech_tCarDescription *pSVar3;
  
  pSVar3 = &Speech_gCarDescription;
  iVar1 = GameSetup_gData.carInfo[carIndex].carType;
  if (Speech_gCarDescription.game != (char *)0x0) {
    do {
      iVar2 = strncmp(&GameSetup_gCarNames + iVar1 * 5,pSVar3->game,4);
      if (iVar2 == 0) break;
      pSVar3 = pSVar3 + 1;
    } while (pSVar3->game != (char *)0x0);
  }
  this->fFull = pSVar3->full;
  this->fMake = pSVar3->make;
  this->fModel = pSVar3->model;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ Check__Q26Speech7CarBankPciPQ26Speech11CarBankName(struct CarBank *this /*$s3*/, char *name /*$s2*/, int id /*$s4*/, struct CarBankName *bankname /*$s1*/)
 // line 257, offset 0x8009441c
	/* begin block 1 */
		// Start line: 258
		// Start offset: 0x8009441C
		// Variables:
	// 		void * match; // $s0

		/* begin block 1.1 */
			// Start line: 258
			// Start offset: 0x8009441C

			/* begin block 1.1.1 */
				// Start line: 258
				// Start offset: 0x8009441C
				// Variables:
			// 		struct CarBankName *this; // $s1
			// 		char *name; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 258
					// Start offset: 0x8009441C
				/* end block 1.1.1.1 */
				// End offset: 0x80094478
				// End Line: 259
			/* end block 1.1.1 */
			// End offset: 0x80094478
			// End Line: 259
		/* end block 1.1 */
		// End offset: 0x80094488
		// End Line: 264

		/* begin block 1.2 */
			// Start line: 266
			// Start offset: 0x80094488

			/* begin block 1.2.1 */
				// Start line: 266
				// Start offset: 0x80094488
				// Variables:
			// 		struct CarBankName *this; // $s1
			// 		char *name; // $s2

				/* begin block 1.2.1.1 */
					// Start line: 266
					// Start offset: 0x80094488
				/* end block 1.2.1.1 */
				// End offset: 0x800944B4
				// End Line: 266
			/* end block 1.2.1 */
			// End offset: 0x800944B4
			// End Line: 266
		/* end block 1.2 */
		// End offset: 0x800944C4
		// End Line: 269

		/* begin block 1.3 */
			// Start line: 271
			// Start offset: 0x800944C4

			/* begin block 1.3.1 */
				// Start line: 271
				// Start offset: 0x800944C4
				// Variables:
			// 		struct CarBankName *this; // $s1
			// 		char *name; // $s2

				/* begin block 1.3.1.1 */
					// Start line: 271
					// Start offset: 0x800944C4
				/* end block 1.3.1.1 */
				// End offset: 0x800944F0
				// End Line: 271
			/* end block 1.3.1 */
			// End offset: 0x800944F0
			// End Line: 271
		/* end block 1.3 */
		// End offset: 0x80094500
		// End Line: 274
	/* end block 1 */
	// End offset: 0x80094500
	// End Line: 276

void * Check__Q26Speech7CarBankPciPQ26Speech11CarBankName
                 (CarBank *this,char *name,int id,CarBankName *bankname)

{
  bool bVar1;
  size_t __n;
  int iVar2;
  undefined *puVar3;
  
  bVar1 = false;
  if (bankname->fFull != (char *)0x0) {
    __n = strlen(bankname->fFull);
    iVar2 = strncmp(name,bankname->fFull,__n);
    bVar1 = iVar2 == 0;
  }
  if (bVar1) {
    this->fFull = id;
  }
  puVar3 = (undefined *)(uint)bVar1;
  bVar1 = false;
  if (bankname->fMake != (char *)0x0) {
    __n = strlen(bankname->fMake);
    iVar2 = strncmp(name,bankname->fMake,__n);
    bVar1 = iVar2 == 0;
  }
  if (bVar1) {
    this->fMake = id;
    puVar3 = &DAT_00000001;
  }
  bVar1 = false;
  if (bankname->fModel != (char *)0x0) {
    __n = strlen(bankname->fModel);
    iVar2 = strncmp(name,bankname->fModel,__n);
    bVar1 = iVar2 == 0;
  }
  if (bVar1) {
    this->fModel = id;
    puVar3 = &DAT_00000001;
  }
  return puVar3;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CheckCarBank__6SpeechPQ26Speech7CarBankPciPQ26Speech11CarBankName(struct Speech *this /*$s4*/, struct CarBank *carbank /*$a0*/, char *name /*$s5*/, int id /*$s6*/, struct CarBankName *bankname /*stack 16*/)
 // line 281, offset 0x80094524
	/* begin block 1 */
		// Start line: 282
		// Start offset: 0x80094524
		// Variables:
	// 		void * match; // $s3

		/* begin block 1.1 */
			// Start line: 282
			// Start offset: 0x80094524
			// Variables:
		// 		int i; // $s2
		/* end block 1.1 */
		// End offset: 0x800945AC
		// End Line: 295
	/* end block 1 */
	// End offset: 0x800945AC
	// End Line: 296

void * CheckCarBank__6SpeechPQ26Speech7CarBankPciPQ26Speech11CarBankName
                 (Speech *this,CarBank *carbank,char *name,int id,CarBankName *bankname)

{
  void *pvVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined *)0x0;
  if (0 < this->fCarCount) {
    do {
      pvVar1 = Check__Q26Speech7CarBankPciPQ26Speech11CarBankName(carbank,name,id,bankname);
      if (pvVar1 != (void *)0x0) {
        puVar3 = &DAT_00000001;
      }
      bankname = bankname + 1;
      iVar2 = iVar2 + 1;
      carbank = carbank + 1;
    } while (iVar2 < this->fCarCount);
  }
  return puVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetCar__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this /*$s0*/, struct Car_tObj *car /*$s2*/)
 // line 301, offset 0x800945d8
	/* begin block 1 */
		// Start line: 302
		// Start offset: 0x800945D8
		// Variables:
	// 		int carcolour; // $s1

		/* begin block 1.1 */
			// Start line: 302
			// Start offset: 0x800945D8

			/* begin block 1.1.1 */
				// Start line: 302
				// Start offset: 0x800945D8

				/* begin block 1.1.1.1 */
					// Start line: 302
					// Start offset: 0x800945D8
				/* end block 1.1.1.1 */
				// End offset: 0x800945D8
				// End Line: 302
			/* end block 1.1.1 */
			// End offset: 0x800945D8
			// End Line: 302

			/* begin block 1.1.2 */
				// Start line: 306
				// Start offset: 0x8009462C

				/* begin block 1.1.2.1 */
					// Start line: 310
					// Start offset: 0x8009462C
					// Variables:
				// 		struct Speaker *this; // $s0

					/* begin block 1.1.2.1.1 */
						// Start line: 310
						// Start offset: 0x8009462C
					/* end block 1.1.2.1.1 */
					// End offset: 0x8009462C
					// End Line: 310
				/* end block 1.1.2.1 */
				// End offset: 0x8009462C
				// End Line: 310
			/* end block 1.1.2 */
			// End offset: 0x8009462C
			// End Line: 310

			/* begin block 1.1.3 */
				// Start line: 314
				// Start offset: 0x80094638

				/* begin block 1.1.3.1 */
					// Start line: 365
					// Start offset: 0x80094638

					/* begin block 1.1.3.1.1 */
						// Start line: 365
						// Start offset: 0x80094638

						/* begin block 1.1.3.1.1.1 */
							// Start line: 365
							// Start offset: 0x80094638
						/* end block 1.1.3.1.1.1 */
						// End offset: 0x80094638
						// End Line: 365
					/* end block 1.1.3.1.1 */
					// End offset: 0x80094638
					// End Line: 365

					/* begin block 1.1.3.1.2 */
						// Start line: 366
						// Start offset: 0x80094650

						/* begin block 1.1.3.1.2.1 */
							// Start line: 366
							// Start offset: 0x80094650
							// Variables:
						// 		struct Speaker *this; // $s0
						// 		int Colour; // $s1

							/* begin block 1.1.3.1.2.1.1 */
								// Start line: 366
								// Start offset: 0x80094650
							/* end block 1.1.3.1.2.1.1 */
							// End offset: 0x80094650
							// End Line: 366
						/* end block 1.1.3.1.2.1 */
						// End offset: 0x80094650
						// End Line: 366
					/* end block 1.1.3.1.2 */
					// End offset: 0x80094650
					// End Line: 366

					/* begin block 1.1.3.1.3 */
						// Start line: 368
						// Start offset: 0x80094658

						/* begin block 1.1.3.1.3.1 */
							// Start line: 368
							// Start offset: 0x80094658
							// Variables:
						// 		struct Speaker *this; // $s0

							/* begin block 1.1.3.1.3.1.1 */
								// Start line: 368
								// Start offset: 0x80094658
							/* end block 1.1.3.1.3.1.1 */
							// End offset: 0x80094664
							// End Line: 368
						/* end block 1.1.3.1.3.1 */
						// End offset: 0x80094664
						// End Line: 368
					/* end block 1.1.3.1.3 */
					// End offset: 0x80094664
					// End Line: 368
				/* end block 1.1.3.1 */
				// End offset: 0x80094664
				// End Line: 368

				/* begin block 1.1.3.2 */
					// Start line: 370
					// Start offset: 0x80094664

					/* begin block 1.1.3.2.1 */
						// Start line: 372
						// Start offset: 0x80094690

						/* begin block 1.1.3.2.1.1 */
							// Start line: 372
							// Start offset: 0x80094690

							/* begin block 1.1.3.2.1.1.1 */
								// Start line: 372
								// Start offset: 0x80094690
							/* end block 1.1.3.2.1.1.1 */
							// End offset: 0x80094690
							// End Line: 372
						/* end block 1.1.3.2.1.1 */
						// End offset: 0x80094690
						// End Line: 372
					/* end block 1.1.3.2.1 */
					// End offset: 0x80094690
					// End Line: 372

					/* begin block 1.1.3.2.2 */
						// Start line: 374
						// Start offset: 0x800946B8

						/* begin block 1.1.3.2.2.1 */
							// Start line: 374
							// Start offset: 0x800946B8

							/* begin block 1.1.3.2.2.1.1 */
								// Start line: 374
								// Start offset: 0x800946B8
							/* end block 1.1.3.2.2.1.1 */
							// End offset: 0x800946B8
							// End Line: 374
						/* end block 1.1.3.2.2.1 */
						// End offset: 0x800946B8
						// End Line: 374
					/* end block 1.1.3.2.2 */
					// End offset: 0x800946E0
					// End Line: 374
				/* end block 1.1.3.2 */
				// End offset: 0x800946E0
				// End Line: 374
			/* end block 1.1.3 */
			// End offset: 0x800946E0
			// End Line: 374
		/* end block 1.1 */
		// End offset: 0x800946E0
		// End Line: 374
	/* end block 1 */
	// End offset: 0x800946E0
	// End Line: 374

void SetCar__Q26Speech7SpeakerP8Car_tObj(Speaker *this,Car_tObj *car)

{
  int *piVar1;
  Speaker *pSVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = this->_vf[0].value;
  uVar5 = 1 << (car->carInfo->SpeechColour & 0x1fU);
  piVar1 = (int *)(**(code **)(uVar4 + 0xe4))
                            ((int)&(this->fPosition).flags + (int)*(short *)(uVar4 + 0xe0),
                             car->carIndex);
  if (*piVar1 == -1) {
    this->fCar = 0;
    (this->fColour).flags = 0;
  }
  else {
    if (*(int *)(iGp00000838 + 0x388) == 0) {
      (this->fColour).flags = uVar5 | 0x78020;
    }
    else {
      (this->fColour).flags = uVar5;
    }
    pSVar2 = Dispatch__6Speech();
    uVar4 = pSVar2->_vf[0].value;
    iVar3 = (**(code **)(uVar4 + 0x94))
                      ((int)&(pSVar2->fPosition).flags + (int)*(short *)(uVar4 + 0x90),car);
    if (iVar3 == 0) {
      uVar4 = this->_vf[0].value;
      piVar1 = (int *)(**(code **)(uVar4 + 0xe4))
                                ((int)&(this->fPosition).flags + (int)*(short *)(uVar4 + 0xe0),
                                 car->carIndex);
      this->fCar = *piVar1;
    }
    else {
      uVar4 = this->_vf[0].value;
      iVar3 = (**(code **)(uVar4 + 0xe4))
                        ((int)&(this->fPosition).flags + (int)*(short *)(uVar4 + 0xe0),car->carIndex
                        );
      this->fCar = *(int *)(iVar3 + 8);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CountLocations__6Speech(struct Speech *this /*$a0*/)
 // line 521, offset 0x800946f8
	/* begin block 1 */
		// Start line: 522
		// Start offset: 0x800946F8
		// Variables:
	// 		struct Speech_tLocationDescription *d; // $a1
	/* end block 1 */
	// End offset: 0x80094760
	// End Line: 533

void CountLocations__6Speech(Speech *this)

{
  int iVar1;
  int *piVar2;
  
  this->fLocationCount = 0;
  piVar2 = (int *)(&__Speech_gLocationDescription_11__)[GameSetup_gData.track];
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 2;
      if (0xf < this->fLocationCount) {
        return;
      }
      this->fLocationCount = this->fLocationCount + 1;
      iVar1 = *piVar2;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CheckLocationBank__6SpeechPQ26Speech12LocationBankPci(struct Speech *this /*$s5*/, struct LocationBank *locationbank /*$a1*/, char *name /*$s6*/, int id /*$s7*/)
 // line 539, offset 0x80094768
	/* begin block 1 */
		// Start line: 540
		// Start offset: 0x80094768
		// Variables:
	// 		void * match; // $s4
	// 		struct Speech_tLocationDescription *d; // $s1

		/* begin block 1.1 */
			// Start line: 540
			// Start offset: 0x80094768

			/* begin block 1.1.1 */
				// Start line: 546
				// Start offset: 0x800947C4

				/* begin block 1.1.1.1 */
					// Start line: 547
					// Start offset: 0x800947C4
					// Variables:
				// 		int i; // $s3

					/* begin block 1.1.1.1.1 */
						// Start line: 547
						// Start offset: 0x800947D0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 550
							// Start offset: 0x800947E4

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 551
								// Start offset: 0x80094808

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 556
									// Start offset: 0x80094808
									// Variables:
								// 		int bankid; // $s7
								// 		char *name; // $a0

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 556
										// Start offset: 0x80094808
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80094808
									// End Line: 556
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80094808
								// End Line: 556
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80094828
							// End Line: 557
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80094828
						// End Line: 557
					/* end block 1.1.1.1.1 */
					// End offset: 0x80094828
					// End Line: 559
				/* end block 1.1.1.1 */
				// End offset: 0x8009483C
				// End Line: 560
			/* end block 1.1.1 */
			// End offset: 0x8009483C
			// End Line: 560
		/* end block 1.1 */
		// End offset: 0x8009483C
		// End Line: 560
	/* end block 1 */
	// End offset: 0x8009483C
	// End Line: 562

void * CheckLocationBank__6SpeechPQ26Speech12LocationBankPci
                 (Speech *this,LocationBank *locationbank,char *name,int id)

{
  short sVar1;
  short sVar2;
  size_t __n;
  int iVar3;
  char *pcVar4;
  char **ppcVar5;
  short *psVar6;
  int iVar7;
  undefined *puVar8;
  
  ppcVar5 = (char **)(&__Speech_gLocationDescription_11__)[GameSetup_gData.track];
  puVar8 = (undefined *)0x0;
  if (ppcVar5 == (char **)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    iVar7 = 0;
    psVar6 = (short *)((int)ppcVar5 + 6);
    while (iVar7 < this->fLocationCount) {
      __n = strlen(*ppcVar5);
      iVar3 = strncmp(name,*ppcVar5,__n);
      if (iVar3 == 0) {
        sVar1 = psVar6[-1];
        sVar2 = *psVar6;
        pcVar4 = *ppcVar5;
        puVar8 = &DAT_00000001;
        locationbank->fBankId = id;
        locationbank->fStartSlice = (int)sVar1;
        locationbank->fEndSlice = (int)sVar2;
        locationbank->fName = pcVar4;
      }
      psVar6 = psVar6 + 4;
      ppcVar5 = ppcVar5 + 2;
      locationbank = locationbank + 1;
      iVar7 = iVar7 + 1;
    }
  }
  return puVar8;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Distance__Q26Speech12LocationBanki(struct LocationBank *this /*$a0*/, int slice /*$a1*/)
 // line 567, offset 0x8009486c
	/* begin block 1 */
		// Start line: 568
		// Start offset: 0x8009486C
	/* end block 1 */
	// End offset: 0x800948F8
	// End Line: 588

int Distance__Q26Speech12LocationBanki(LocationBank *this,int slice)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = this->fStartSlice;
  iVar2 = this->fEndSlice;
  if (iVar2 < iVar4) {
    if ((iVar4 <= slice) || (iVar1 = slice - iVar2, slice <= iVar2)) {
      return 0;
    }
  }
  else {
    if (iVar4 <= slice) {
      iVar3 = slice - iVar2;
      if (slice <= iVar2) {
        return 0;
      }
      iVar1 = (iVar4 + gNumSlices) - slice;
      goto LAB_80094898;
    }
    iVar1 = (slice + gNumSlices) - iVar2;
  }
  iVar3 = iVar4 - slice;
LAB_80094898:
  if (iVar3 < iVar1) {
    iVar1 = iVar3;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// struct LocationBank * /*$ra*/ FindClosestLocationTo__6SpeechPQ26Speech12LocationBanki(struct Speech *this /*$s4*/, struct LocationBank *bank /*$s6*/, int slice /*$s7*/)
 // line 594, offset 0x80094900
	/* begin block 1 */
		// Start line: 595
		// Start offset: 0x80094900

		/* begin block 1.1 */
			// Start line: 595
			// Start offset: 0x80094900

			/* begin block 1.1.1 */
				// Start line: 597
				// Start offset: 0x80094940
				// Variables:
			// 		struct LocationBank *closestbank; // $s3
			// 		int closestdistance; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 598
					// Start offset: 0x80094940
					// Variables:
				// 		int i; // $s1

					/* begin block 1.1.1.1.1 */
						// Start line: 601
						// Start offset: 0x80094950
						// Variables:
					// 		struct LocationBank *locationbank; // $s0
					// 		int distance; // $v1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 603
							// Start offset: 0x80094964

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 603
								// Start offset: 0x80094964
								// Variables:
							// 		struct LocationBank *this; // $s0

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 603
									// Start offset: 0x80094964
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80094964
								// End Line: 603
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80094964
							// End Line: 603
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80094978
						// End Line: 606
					/* end block 1.1.1.1.1 */
					// End offset: 0x80094998
					// End Line: 613
				/* end block 1.1.1.1 */
				// End offset: 0x800949A0
				// End Line: 615
			/* end block 1.1.1 */
			// End offset: 0x800949A8
			// End Line: 616
		/* end block 1.1 */
		// End offset: 0x800949AC
		// End Line: 619
	/* end block 1 */
	// End offset: 0x800949AC
	// End Line: 619

LocationBank *
FindClosestLocationTo__6SpeechPQ26Speech12LocationBanki(Speech *this,LocationBank *bank,int slice)

{
  undefined *puVar1;
  LocationBank *this_00;
  int iVar2;
  undefined *puVar3;
  LocationBank *pLVar4;
  
  if (this->fLocationCount == 0) {
    pLVar4 = (LocationBank *)0x0;
  }
  else {
    pLVar4 = (LocationBank *)0x0;
    puVar3 = &DAT_00002710;
    iVar2 = 0;
    while (iVar2 < this->fLocationCount) {
      this_00 = bank + iVar2;
      if ((this_00->fBankId != -1) &&
         (puVar1 = (undefined *)Distance__Q26Speech12LocationBanki(this_00,slice),
         (int)puVar1 < (int)puVar3)) {
        puVar3 = puVar1;
        pLVar4 = this_00;
      }
      iVar2 = iVar2 + 1;
    }
  }
  return pLVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FindLocation__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this /*$s2*/, struct Car_tObj *car /*$s1*/)
 // line 624, offset 0x800949d8
	/* begin block 1 */
		// Start line: 625
		// Start offset: 0x800949D8
		// Variables:
	// 		int slice; // $s0
	// 		struct LocationBank *location; // $s3

		/* begin block 1.1 */
			// Start line: 629
			// Start offset: 0x80094B2C

			/* begin block 1.1.1 */
				// Start line: 637
				// Start offset: 0x80094B54

				/* begin block 1.1.1.1 */
					// Start line: 637
					// Start offset: 0x80094B54
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.1.1.1.1 */
						// Start line: 637
						// Start offset: 0x80094B54
					/* end block 1.1.1.1.1 */
					// End offset: 0x80094B54
					// End Line: 637
				/* end block 1.1.1.1 */
				// End offset: 0x80094B54
				// End Line: 637

				/* begin block 1.1.1.2 */
					// Start line: 637
					// Start offset: 0x80094B54
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.1.1.2.1 */
						// Start line: 637
						// Start offset: 0x80094B54
					/* end block 1.1.1.2.1 */
					// End offset: 0x80094B54
					// End Line: 637
				/* end block 1.1.1.2 */
				// End offset: 0x80094B54
				// End Line: 637

				/* begin block 1.1.1.3 */
					// Start line: 637
					// Start offset: 0x80094B54
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.1.1.3.1 */
						// Start line: 637
						// Start offset: 0x80094B54

						/* begin block 1.1.1.3.1.1 */
							// Start line: 637
							// Start offset: 0x80094B54

							/* begin block 1.1.1.3.1.1.1 */
								// Start line: 637
								// Start offset: 0x80094B54
							/* end block 1.1.1.3.1.1.1 */
							// End offset: 0x80094B54
							// End Line: 637
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x80094B54
						// End Line: 637
					/* end block 1.1.1.3.1 */
					// End offset: 0x80094B54
					// End Line: 637
				/* end block 1.1.1.3 */
				// End offset: 0x80094B54
				// End Line: 637
			/* end block 1.1.1 */
			// End offset: 0x80094B54
			// End Line: 637

			/* begin block 1.1.2 */
				// Start line: 646
				// Start offset: 0x80094B68
				// Variables:
			// 		int actual; // $s1
			// 		int distance; // $s0

				/* begin block 1.1.2.1 */
					// Start line: 647
					// Start offset: 0x80094B68

					/* begin block 1.1.2.1.1 */
						// Start line: 651
						// Start offset: 0x80094B90

						/* begin block 1.1.2.1.1.1 */
							// Start line: 651
							// Start offset: 0x80094B90
							// Variables:
						// 		struct Speaker *this; // $s2

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 651
								// Start offset: 0x80094B90
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x80094B90
							// End Line: 651
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x80094B90
						// End Line: 651

						/* begin block 1.1.2.1.1.2 */
							// Start line: 651
							// Start offset: 0x80094B90
							// Variables:
						// 		struct Speaker *this; // $s2

							/* begin block 1.1.2.1.1.2.1 */
								// Start line: 651
								// Start offset: 0x80094B90
							/* end block 1.1.2.1.1.2.1 */
							// End offset: 0x80094B90
							// End Line: 651
						/* end block 1.1.2.1.1.2 */
						// End offset: 0x80094B90
						// End Line: 651
					/* end block 1.1.2.1.1 */
					// End offset: 0x80094B90
					// End Line: 651

					/* begin block 1.1.2.1.2 */
						// Start line: 658
						// Start offset: 0x80094B98

						/* begin block 1.1.2.1.2.1 */
							// Start line: 658
							// Start offset: 0x80094B98

							/* begin block 1.1.2.1.2.1.1 */
								// Start line: 659
								// Start offset: 0x80094BC4

								/* begin block 1.1.2.1.2.1.1.1 */
									// Start line: 659
									// Start offset: 0x80094BC4
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.1.2.1.2.1.1.1.1 */
										// Start line: 659
										// Start offset: 0x80094BC4
									/* end block 1.1.2.1.2.1.1.1.1 */
									// End offset: 0x80094BC4
									// End Line: 659
								/* end block 1.1.2.1.2.1.1.1 */
								// End offset: 0x80094BC4
								// End Line: 659

								/* begin block 1.1.2.1.2.1.1.2 */
									// Start line: 659
									// Start offset: 0x80094BC4

									/* begin block 1.1.2.1.2.1.1.2.1 */
										// Start line: 663
										// Start offset: 0x80094BD4

										/* begin block 1.1.2.1.2.1.1.2.1.1 */
											// Start line: 663
											// Start offset: 0x80094BD4
											// Variables:
										// 		struct Speaker *this; // $s2

											/* begin block 1.1.2.1.2.1.1.2.1.1.1 */
												// Start line: 663
												// Start offset: 0x80094BD4
											/* end block 1.1.2.1.2.1.1.2.1.1.1 */
											// End offset: 0x80094BDC
											// End Line: 663
										/* end block 1.1.2.1.2.1.1.2.1.1 */
										// End offset: 0x80094BDC
										// End Line: 663
									/* end block 1.1.2.1.2.1.1.2.1 */
									// End offset: 0x80094BDC
									// End Line: 664
								/* end block 1.1.2.1.2.1.1.2 */
								// End offset: 0x80094BDC
								// End Line: 664

								/* begin block 1.1.2.1.2.1.1.3 */
									// Start line: 669
									// Start offset: 0x80094BDC

									/* begin block 1.1.2.1.2.1.1.3.1 */
										// Start line: 670
										// Start offset: 0x80094BEC

										/* begin block 1.1.2.1.2.1.1.3.1.1 */
											// Start line: 670
											// Start offset: 0x80094BEC
											// Variables:
										// 		struct Speaker *this; // $s2

											/* begin block 1.1.2.1.2.1.1.3.1.1.1 */
												// Start line: 670
												// Start offset: 0x80094BEC
											/* end block 1.1.2.1.2.1.1.3.1.1.1 */
											// End offset: 0x80094BEC
											// End Line: 670
										/* end block 1.1.2.1.2.1.1.3.1.1 */
										// End offset: 0x80094BEC
										// End Line: 670
									/* end block 1.1.2.1.2.1.1.3.1 */
									// End offset: 0x80094BEC
									// End Line: 670

									/* begin block 1.1.2.1.2.1.1.3.2 */
										// Start line: 677
										// Start offset: 0x80094BF4

										/* begin block 1.1.2.1.2.1.1.3.2.1 */
											// Start line: 677
											// Start offset: 0x80094BF4
											// Variables:
										// 		struct Speaker *this; // $s2

											/* begin block 1.1.2.1.2.1.1.3.2.1.1 */
												// Start line: 677
												// Start offset: 0x80094BF4
											/* end block 1.1.2.1.2.1.1.3.2.1.1 */
											// End offset: 0x80094BF4
											// End Line: 677
										/* end block 1.1.2.1.2.1.1.3.2.1 */
										// End offset: 0x80094BF4
										// End Line: 677
									/* end block 1.1.2.1.2.1.1.3.2 */
									// End offset: 0x80094BF4
									// End Line: 677
								/* end block 1.1.2.1.2.1.1.3 */
								// End offset: 0x80094BF4
								// End Line: 677
							/* end block 1.1.2.1.2.1.1 */
							// End offset: 0x80094BF4
							// End Line: 677

							/* begin block 1.1.2.1.2.1.2 */
								// Start line: 684
								// Start offset: 0x80094BF4

								/* begin block 1.1.2.1.2.1.2.1 */
									// Start line: 684
									// Start offset: 0x80094BF4

									/* begin block 1.1.2.1.2.1.2.1.1 */
										// Start line: 685
										// Start offset: 0x80094C04

										/* begin block 1.1.2.1.2.1.2.1.1.1 */
											// Start line: 688
											// Start offset: 0x80094C04

											/* begin block 1.1.2.1.2.1.2.1.1.1.1 */
												// Start line: 689
												// Start offset: 0x80094C10

												/* begin block 1.1.2.1.2.1.2.1.1.1.1.1 */
													// Start line: 689
													// Start offset: 0x80094C10
													// Variables:
												// 		struct Speaker *this; // $s2

													/* begin block 1.1.2.1.2.1.2.1.1.1.1.1.1 */
														// Start line: 689
														// Start offset: 0x80094C10
													/* end block 1.1.2.1.2.1.2.1.1.1.1.1.1 */
													// End offset: 0x80094C10
													// End Line: 689
												/* end block 1.1.2.1.2.1.2.1.1.1.1.1 */
												// End offset: 0x80094C10
												// End Line: 689

												/* begin block 1.1.2.1.2.1.2.1.1.1.1.2 */
													// Start line: 689
													// Start offset: 0x80094C10

													/* begin block 1.1.2.1.2.1.2.1.1.1.1.2.1 */
														// Start line: 693
														// Start offset: 0x80094C24

														/* begin block 1.1.2.1.2.1.2.1.1.1.1.2.1.1 */
															// Start line: 693
															// Start offset: 0x80094C24
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.1.2.1.2.1.2.1.1.1.1.2.1.1.1 */
																// Start line: 693
																// Start offset: 0x80094C24
															/* end block 1.1.2.1.2.1.2.1.1.1.1.2.1.1.1 */
															// End offset: 0x80094C24
															// End Line: 693
														/* end block 1.1.2.1.2.1.2.1.1.1.1.2.1.1 */
														// End offset: 0x80094C24
														// End Line: 693
													/* end block 1.1.2.1.2.1.2.1.1.1.1.2.1 */
													// End offset: 0x80094C24
													// End Line: 693

													/* begin block 1.1.2.1.2.1.2.1.1.1.1.2.2 */
														// Start line: 700
														// Start offset: 0x80094C2C

														/* begin block 1.1.2.1.2.1.2.1.1.1.1.2.2.1 */
															// Start line: 700
															// Start offset: 0x80094C2C
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.1.2.1.2.1.2.1.1.1.1.2.2.1.1 */
																// Start line: 700
																// Start offset: 0x80094C2C
															/* end block 1.1.2.1.2.1.2.1.1.1.1.2.2.1.1 */
															// End offset: 0x80094C2C
															// End Line: 700
														/* end block 1.1.2.1.2.1.2.1.1.1.1.2.2.1 */
														// End offset: 0x80094C2C
														// End Line: 700
													/* end block 1.1.2.1.2.1.2.1.1.1.1.2.2 */
													// End offset: 0x80094C2C
													// End Line: 700
												/* end block 1.1.2.1.2.1.2.1.1.1.1.2 */
												// End offset: 0x80094C2C
												// End Line: 700
											/* end block 1.1.2.1.2.1.2.1.1.1.1 */
											// End offset: 0x80094C2C
											// End Line: 700

											/* begin block 1.1.2.1.2.1.2.1.1.1.2 */
												// Start line: 708
												// Start offset: 0x80094C2C

												/* begin block 1.1.2.1.2.1.2.1.1.1.2.1 */
													// Start line: 708
													// Start offset: 0x80094C2C
													// Variables:
												// 		struct Speaker *this; // $s2

													/* begin block 1.1.2.1.2.1.2.1.1.1.2.1.1 */
														// Start line: 708
														// Start offset: 0x80094C2C
													/* end block 1.1.2.1.2.1.2.1.1.1.2.1.1 */
													// End offset: 0x80094C2C
													// End Line: 708
												/* end block 1.1.2.1.2.1.2.1.1.1.2.1 */
												// End offset: 0x80094C2C
												// End Line: 708

												/* begin block 1.1.2.1.2.1.2.1.1.1.2.2 */
													// Start line: 708
													// Start offset: 0x80094C2C

													/* begin block 1.1.2.1.2.1.2.1.1.1.2.2.1 */
														// Start line: 712
														// Start offset: 0x80094C40

														/* begin block 1.1.2.1.2.1.2.1.1.1.2.2.1.1 */
															// Start line: 712
															// Start offset: 0x80094C40
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.1.2.1.2.1.2.1.1.1.2.2.1.1.1 */
																// Start line: 712
																// Start offset: 0x80094C40
															/* end block 1.1.2.1.2.1.2.1.1.1.2.2.1.1.1 */
															// End offset: 0x80094C40
															// End Line: 712
														/* end block 1.1.2.1.2.1.2.1.1.1.2.2.1.1 */
														// End offset: 0x80094C40
														// End Line: 712
													/* end block 1.1.2.1.2.1.2.1.1.1.2.2.1 */
													// End offset: 0x80094C40
													// End Line: 712

													/* begin block 1.1.2.1.2.1.2.1.1.1.2.2.2 */
														// Start line: 719
														// Start offset: 0x80094C48

														/* begin block 1.1.2.1.2.1.2.1.1.1.2.2.2.1 */
															// Start line: 719
															// Start offset: 0x80094C48
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.1.2.1.2.1.2.1.1.1.2.2.2.1.1 */
																// Start line: 719
																// Start offset: 0x80094C48
															/* end block 1.1.2.1.2.1.2.1.1.1.2.2.2.1.1 */
															// End offset: 0x80094C48
															// End Line: 719
														/* end block 1.1.2.1.2.1.2.1.1.1.2.2.2.1 */
														// End offset: 0x80094C48
														// End Line: 719
													/* end block 1.1.2.1.2.1.2.1.1.1.2.2.2 */
													// End offset: 0x80094C48
													// End Line: 719
												/* end block 1.1.2.1.2.1.2.1.1.1.2.2 */
												// End offset: 0x80094C48
												// End Line: 719
											/* end block 1.1.2.1.2.1.2.1.1.1.2 */
											// End offset: 0x80094C48
											// End Line: 719
										/* end block 1.1.2.1.2.1.2.1.1.1 */
										// End offset: 0x80094C48
										// End Line: 719
									/* end block 1.1.2.1.2.1.2.1.1 */
									// End offset: 0x80094C48
									// End Line: 719

									/* begin block 1.1.2.1.2.1.2.1.2 */
										// Start line: 728
										// Start offset: 0x80094C48

										/* begin block 1.1.2.1.2.1.2.1.2.1 */
											// Start line: 731
											// Start offset: 0x80094C48

											/* begin block 1.1.2.1.2.1.2.1.2.1.1 */
												// Start line: 732
												// Start offset: 0x80094C50

												/* begin block 1.1.2.1.2.1.2.1.2.1.1.1 */
													// Start line: 732
													// Start offset: 0x80094C50
													// Variables:
												// 		struct Speaker *this; // $s2

													/* begin block 1.1.2.1.2.1.2.1.2.1.1.1.1 */
														// Start line: 732
														// Start offset: 0x80094C50
													/* end block 1.1.2.1.2.1.2.1.2.1.1.1.1 */
													// End offset: 0x80094C50
													// End Line: 732
												/* end block 1.1.2.1.2.1.2.1.2.1.1.1 */
												// End offset: 0x80094C50
												// End Line: 732

												/* begin block 1.1.2.1.2.1.2.1.2.1.1.2 */
													// Start line: 732
													// Start offset: 0x80094C50

													/* begin block 1.1.2.1.2.1.2.1.2.1.1.2.1 */
														// Start line: 736
														// Start offset: 0x80094C5C

														/* begin block 1.1.2.1.2.1.2.1.2.1.1.2.1.1 */
															// Start line: 736
															// Start offset: 0x80094C5C
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.1.2.1.2.1.2.1.2.1.1.2.1.1.1 */
																// Start line: 736
																// Start offset: 0x80094C5C
															/* end block 1.1.2.1.2.1.2.1.2.1.1.2.1.1.1 */
															// End offset: 0x80094C5C
															// End Line: 736
														/* end block 1.1.2.1.2.1.2.1.2.1.1.2.1.1 */
														// End offset: 0x80094C5C
														// End Line: 736
													/* end block 1.1.2.1.2.1.2.1.2.1.1.2.1 */
													// End offset: 0x80094C5C
													// End Line: 736

													/* begin block 1.1.2.1.2.1.2.1.2.1.1.2.2 */
														// Start line: 743
														// Start offset: 0x80094C64

														/* begin block 1.1.2.1.2.1.2.1.2.1.1.2.2.1 */
															// Start line: 743
															// Start offset: 0x80094C64
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.1.2.1.2.1.2.1.2.1.1.2.2.1.1 */
																// Start line: 743
																// Start offset: 0x80094C64
															/* end block 1.1.2.1.2.1.2.1.2.1.1.2.2.1.1 */
															// End offset: 0x80094C64
															// End Line: 743
														/* end block 1.1.2.1.2.1.2.1.2.1.1.2.2.1 */
														// End offset: 0x80094C64
														// End Line: 743
													/* end block 1.1.2.1.2.1.2.1.2.1.1.2.2 */
													// End offset: 0x80094C64
													// End Line: 743
												/* end block 1.1.2.1.2.1.2.1.2.1.1.2 */
												// End offset: 0x80094C64
												// End Line: 743
											/* end block 1.1.2.1.2.1.2.1.2.1.1 */
											// End offset: 0x80094C64
											// End Line: 743

											/* begin block 1.1.2.1.2.1.2.1.2.1.2 */
												// Start line: 750
												// Start offset: 0x80094C64

												/* begin block 1.1.2.1.2.1.2.1.2.1.2.1 */
													// Start line: 750
													// Start offset: 0x80094C64

													/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.1 */
														// Start line: 751
														// Start offset: 0x80094C70

														/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.1.1 */
															// Start line: 751
															// Start offset: 0x80094C70
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.1.1.1 */
																// Start line: 751
																// Start offset: 0x80094C70
															/* end block 1.1.2.1.2.1.2.1.2.1.2.1.1.1.1 */
															// End offset: 0x80094C70
															// End Line: 751
														/* end block 1.1.2.1.2.1.2.1.2.1.2.1.1.1 */
														// End offset: 0x80094C70
														// End Line: 751

														/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.1.2 */
															// Start line: 751
															// Start offset: 0x80094C70

															/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.1.2.1 */
																// Start line: 755
																// Start offset: 0x80094C80

																/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.1.2.1.1 */
																	// Start line: 755
																	// Start offset: 0x80094C80
																	// Variables:
																// 		struct Speaker *this; // $s2

																	/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.1.2.1.1.1 */
																		// Start line: 755
																		// Start offset: 0x80094C80
																	/* end block 1.1.2.1.2.1.2.1.2.1.2.1.1.2.1.1.1 */
																	// End offset: 0x80094C80
																	// End Line: 755
																/* end block 1.1.2.1.2.1.2.1.2.1.2.1.1.2.1.1 */
																// End offset: 0x80094C80
																// End Line: 755
															/* end block 1.1.2.1.2.1.2.1.2.1.2.1.1.2.1 */
															// End offset: 0x80094C80
															// End Line: 755

															/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.1.2.2 */
																// Start line: 762
																// Start offset: 0x80094C88

																/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.1.2.2.1 */
																	// Start line: 762
																	// Start offset: 0x80094C88
																	// Variables:
																// 		struct Speaker *this; // $s2

																	/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.1.2.2.1.1 */
																		// Start line: 762
																		// Start offset: 0x80094C88
																	/* end block 1.1.2.1.2.1.2.1.2.1.2.1.1.2.2.1.1 */
																	// End offset: 0x80094C88
																	// End Line: 762
																/* end block 1.1.2.1.2.1.2.1.2.1.2.1.1.2.2.1 */
																// End offset: 0x80094C88
																// End Line: 762
															/* end block 1.1.2.1.2.1.2.1.2.1.2.1.1.2.2 */
															// End offset: 0x80094C88
															// End Line: 762
														/* end block 1.1.2.1.2.1.2.1.2.1.2.1.1.2 */
														// End offset: 0x80094C88
														// End Line: 762
													/* end block 1.1.2.1.2.1.2.1.2.1.2.1.1 */
													// End offset: 0x80094C88
													// End Line: 762

													/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.2 */
														// Start line: 770
														// Start offset: 0x80094C88

														/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.2.1 */
															// Start line: 770
															// Start offset: 0x80094C88
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.2.1.1 */
																// Start line: 770
																// Start offset: 0x80094C88
															/* end block 1.1.2.1.2.1.2.1.2.1.2.1.2.1.1 */
															// End offset: 0x80094C88
															// End Line: 770
														/* end block 1.1.2.1.2.1.2.1.2.1.2.1.2.1 */
														// End offset: 0x80094C88
														// End Line: 770

														/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.2.2 */
															// Start line: 770
															// Start offset: 0x80094C88

															/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.2.2.1 */
																// Start line: 774
																// Start offset: 0x80094CA0

																/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.2.2.1.1 */
																	// Start line: 774
																	// Start offset: 0x80094CA0
																	// Variables:
																// 		struct Speaker *this; // $s2

																	/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.2.2.1.1.1 */
																		// Start line: 774
																		// Start offset: 0x80094CA0
																	/* end block 1.1.2.1.2.1.2.1.2.1.2.1.2.2.1.1.1 */
																	// End offset: 0x80094CA0
																	// End Line: 774
																/* end block 1.1.2.1.2.1.2.1.2.1.2.1.2.2.1.1 */
																// End offset: 0x80094CA0
																// End Line: 774
															/* end block 1.1.2.1.2.1.2.1.2.1.2.1.2.2.1 */
															// End offset: 0x80094CA0
															// End Line: 774

															/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.2.2.2 */
																// Start line: 781
																// Start offset: 0x80094CA0

																/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.2.2.2.1 */
																	// Start line: 781
																	// Start offset: 0x80094CA0
																	// Variables:
																// 		struct Speaker *this; // $s2

																	/* begin block 1.1.2.1.2.1.2.1.2.1.2.1.2.2.2.1.1 */
																		// Start line: 781
																		// Start offset: 0x80094CA0
																	/* end block 1.1.2.1.2.1.2.1.2.1.2.1.2.2.2.1.1 */
																	// End offset: 0x80094CA8
																	// End Line: 781
																/* end block 1.1.2.1.2.1.2.1.2.1.2.1.2.2.2.1 */
																// End offset: 0x80094CA8
																// End Line: 781
															/* end block 1.1.2.1.2.1.2.1.2.1.2.1.2.2.2 */
															// End offset: 0x80094CA8
															// End Line: 782
														/* end block 1.1.2.1.2.1.2.1.2.1.2.1.2.2 */
														// End offset: 0x80094CA8
														// End Line: 782
													/* end block 1.1.2.1.2.1.2.1.2.1.2.1.2 */
													// End offset: 0x80094CA8
													// End Line: 782
												/* end block 1.1.2.1.2.1.2.1.2.1.2.1 */
												// End offset: 0x80094CA8
												// End Line: 782
											/* end block 1.1.2.1.2.1.2.1.2.1.2 */
											// End offset: 0x80094CA8
											// End Line: 782
										/* end block 1.1.2.1.2.1.2.1.2.1 */
										// End offset: 0x80094CA8
										// End Line: 782
									/* end block 1.1.2.1.2.1.2.1.2 */
									// End offset: 0x80094CA8
									// End Line: 782
								/* end block 1.1.2.1.2.1.2.1 */
								// End offset: 0x80094CA8
								// End Line: 782
							/* end block 1.1.2.1.2.1.2 */
							// End offset: 0x80094CA8
							// End Line: 782
						/* end block 1.1.2.1.2.1 */
						// End offset: 0x80094CA8
						// End Line: 782
					/* end block 1.1.2.1.2 */
					// End offset: 0x80094CA8
					// End Line: 782
				/* end block 1.1.2.1 */
				// End offset: 0x80094CA8
				// End Line: 782

				/* begin block 1.1.2.2 */
					// Start line: 782
					// Start offset: 0x80094CA8
					// Variables:
				// 		struct Speaker *this; // $s2
				// 		struct LocationBank *location; // $s3

					/* begin block 1.1.2.2.1 */
						// Start line: 782
						// Start offset: 0x80094CA8

						/* begin block 1.1.2.2.1.1 */
							// Start line: 782
							// Start offset: 0x80094CA8
							// Variables:
						// 		struct LocationBank *this; // $s3

							/* begin block 1.1.2.2.1.1.1 */
								// Start line: 782
								// Start offset: 0x80094CA8
							/* end block 1.1.2.2.1.1.1 */
							// End offset: 0x80094CA8
							// End Line: 782
						/* end block 1.1.2.2.1.1 */
						// End offset: 0x80094CA8
						// End Line: 782
					/* end block 1.1.2.2.1 */
					// End offset: 0x80094CB4
					// End Line: 782
				/* end block 1.1.2.2 */
				// End offset: 0x80094CB4
				// End Line: 782
			/* end block 1.1.2 */
			// End offset: 0x80094CB4
			// End Line: 789
		/* end block 1.1 */
		// End offset: 0x80094CB4
		// End Line: 789
	/* end block 1 */
	// End offset: 0x80094CB4
	// End Line: 789

void FindLocation__Q26Speech7SpeakerP8Car_tObj(Speaker *this,Car_tObj *car)

{
  int in_zero;
  uint uVar1;
  LocationBank *this_00;
  int iVar2;
  ulong uVar3;
  int slice;
  undefined8 uVar4;
  
  uVar1 = fixedmult((car->script).lastActionTime,(int)&DAT_00050000);
  if (((int)uVar1 / 6 + ((int)uVar1 >> 0x1f) >> 0x10) - ((int)uVar1 >> 0x1f) < 0) {
    uVar1 = fixedmult((car->script).lastActionTime,(int)&DAT_00050000);
    if (-1 < (int)(car->N).simRoadInfo.slice +
             (((int)uVar1 / 6 + ((int)uVar1 >> 0x1f) >> 0x10) - ((int)uVar1 >> 0x1f)))
    goto LAB_80094b04;
    uVar1 = fixedmult((car->script).lastActionTime,(int)&DAT_00050000);
    slice = (int)(car->N).simRoadInfo.slice +
            (((int)uVar1 / 6 + ((int)uVar1 >> 0x1f) >> 0x10) - ((int)uVar1 >> 0x1f)) + gNumSlices;
  }
  else {
    uVar1 = fixedmult((car->script).lastActionTime,(int)&DAT_00050000);
    if ((int)(car->N).simRoadInfo.slice +
        (((int)uVar1 / 6 + ((int)uVar1 >> 0x1f) >> 0x10) - ((int)uVar1 >> 0x1f)) < gNumSlices) {
LAB_80094b04:
      uVar1 = fixedmult((car->script).lastActionTime,(int)&DAT_00050000);
      slice = (int)(car->N).simRoadInfo.slice +
              (((int)uVar1 / 6 + ((int)uVar1 >> 0x1f) >> 0x10) - ((int)uVar1 >> 0x1f));
    }
    else {
      uVar1 = fixedmult((car->script).lastActionTime,(int)&DAT_00050000);
      slice = ((int)(car->N).simRoadInfo.slice +
              (((int)uVar1 / 6 + ((int)uVar1 >> 0x1f) >> 0x10) - ((int)uVar1 >> 0x1f))) - gNumSlices
      ;
    }
  }
  uVar1 = this->_vf[0].value;
  this_00 = (LocationBank *)
            (**(code **)(uVar1 + 0xec))
                      ((int)&(this->fPosition).flags + (int)*(short *)(uVar1 + 0xe8),slice);
  if (this_00 == (LocationBank *)0x0) {
    (this->fDistance).flags = 0;
    (this->fPosition).flags = 0;
    this->fLocation = *(int *)(in_zero + 8);
    return;
  }
  iVar2 = Distance__Q26Speech12LocationBanki(this_00,(int)(car->N).simRoadInfo.slice);
  uVar1 = Distance__Q26Speech12LocationBanki(this_00,slice);
  uVar3 = 4;
  if (uVar1 == 0) {
    (this->fDistance).flags = 0;
    goto LAB_80094ca4;
  }
  uVar4 = __floatsidf(uVar1);
  slice = __ltdf2((uint)((ulonglong)uVar4 >> 0x20),(uint)uVar4,0xaaaaaaab,0x4040aaaa);
  if (slice < 0) {
    (this->fDistance).flags = 0;
    if ((int)(uVar1 + 2) < iVar2) {
      (this->fPosition).flags = 9;
    }
    if ((int)(uVar1 - 2) < iVar2) {
      (this->fPosition).flags = 8;
      goto LAB_80094ca8;
    }
LAB_80094ca0:
    uVar3 = 2;
  }
  else {
    if (GameSetup_gData.measurement == 1) {
      if ((int)uVar1 < 0xa6) {
        (this->fDistance).flags = 8;
        if ((int)(uVar1 - 2) < iVar2) {
          (this->fPosition).flags = 0x10;
          goto LAB_80094ca8;
        }
      }
      else {
        uVar3 = 0x10;
        (this->fDistance).flags = 0x10;
        if ((int)(uVar1 - 2) < iVar2) {
LAB_80094c40:
          (this->fPosition).flags = uVar3;
          goto LAB_80094ca8;
        }
      }
      goto LAB_80094ca0;
    }
    if ((int)uVar1 < 0x86) {
      (this->fDistance).flags = 1;
      if (iVar2 <= (int)(uVar1 - 2)) goto LAB_80094ca0;
      uVar3 = 0x10;
    }
    else {
      uVar3 = 2;
      if ((int)uVar1 < 0x10c) {
        (this->fDistance).flags = 2;
        if (iVar2 <= (int)(uVar1 - 2)) goto LAB_80094c40;
        uVar3 = 0x10;
      }
      else {
        (this->fDistance).flags = 4;
        uVar3 = 0x10;
        if (iVar2 <= (int)(uVar1 - 2)) goto LAB_80094ca0;
      }
    }
  }
LAB_80094ca4:
  (this->fPosition).flags = uVar3;
LAB_80094ca8:
  this->fLocation = this_00->fBankId;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CheckCallSignBank__6SpeechPQ26Speech12CallSignBankPci(struct Speech *this /*$a0*/, struct CallSignBank *bank /*$s1*/, char *name /*$s4*/, int id /*$s5*/)
 // line 852, offset 0x80094cd0
	/* begin block 1 */
		// Start line: 853
		// Start offset: 0x80094CD0
		// Variables:
	// 		void * match; // $s3
	// 		struct Speech_tCallSignDescription *d; // $s6
	// 		int dispatchName; // $a0

		/* begin block 1.1 */
			// Start line: 853
			// Start offset: 0x80094CD0

			/* begin block 1.1.1 */
				// Start line: 860
				// Start offset: 0x80094D2C

				/* begin block 1.1.1.1 */
					// Start line: 860
					// Start offset: 0x80094D2C
					// Variables:
				// 		struct CallSignBank *this; // $s1
				// 		int bankid; // $s5

					/* begin block 1.1.1.1.1 */
						// Start line: 860
						// Start offset: 0x80094D2C
					/* end block 1.1.1.1.1 */
					// End offset: 0x80094D2C
					// End Line: 860
				/* end block 1.1.1.1 */
				// End offset: 0x80094D2C
				// End Line: 860
			/* end block 1.1.1 */
			// End offset: 0x80094D34
			// End Line: 862
		/* end block 1.1 */
		// End offset: 0x80094D34
		// End Line: 862

		/* begin block 1.2 */
			// Start line: 865
			// Start offset: 0x80094D34

			/* begin block 1.2.1 */
				// Start line: 868
				// Start offset: 0x80094D8C

				/* begin block 1.2.1.1 */
					// Start line: 868
					// Start offset: 0x80094D8C
					// Variables:
				// 		struct CallSignBank *this; // $s1
				// 		int bankid; // $s5

					/* begin block 1.2.1.1.1 */
						// Start line: 868
						// Start offset: 0x80094D8C
					/* end block 1.2.1.1.1 */
					// End offset: 0x80094D8C
					// End Line: 868
				/* end block 1.2.1.1 */
				// End offset: 0x80094D8C
				// End Line: 868
			/* end block 1.2.1 */
			// End offset: 0x80094D94
			// End Line: 870
		/* end block 1.2 */
		// End offset: 0x80094D94
		// End Line: 870

		/* begin block 1.3 */
			// Start line: 872
			// Start offset: 0x80094D94
			// Variables:
		// 		int i; // $s2

			/* begin block 1.3.1 */
				// Start line: 872
				// Start offset: 0x80094D98

				/* begin block 1.3.1.1 */
					// Start line: 874
					// Start offset: 0x80094DA4

					/* begin block 1.3.1.1.1 */
						// Start line: 875
						// Start offset: 0x80094DC8

						/* begin block 1.3.1.1.1.1 */
							// Start line: 875
							// Start offset: 0x80094DC8
							// Variables:
						// 		struct CallSignBank *this; // $s1
						// 		int unit; // $s2
						// 		int bankid; // $s5

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 875
								// Start offset: 0x80094DC8
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x80094DC8
							// End Line: 875
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x80094DC8
						// End Line: 875
					/* end block 1.3.1.1.1 */
					// End offset: 0x80094DD0
					// End Line: 877
				/* end block 1.3.1.1 */
				// End offset: 0x80094DD0
				// End Line: 877
			/* end block 1.3.1 */
			// End offset: 0x80094DD0
			// End Line: 877
		/* end block 1.3 */
		// End offset: 0x80094DE0
		// End Line: 879
	/* end block 1 */
	// End offset: 0x80094DE0
	// End Line: 885

void * CheckCallSignBank__6SpeechPQ26Speech12CallSignBankPci
                 (Speech *this,CallSignBank *bank,char *name,int id)

{
  size_t __n;
  int iVar1;
  Speech_tCallSignDescription *pSVar2;
  int iVar3;
  undefined *puVar4;
  
  __n = strlen(Speech_gCallSignDescription.AllUnits);
  pSVar2 = &Speech_gCallSignDescription;
  iVar1 = strncmp(name,Speech_gCallSignDescription.AllUnits,__n);
  if (iVar1 == 0) {
    bank->fAllUnits = id;
  }
  puVar4 = (undefined *)(uint)(iVar1 == 0);
  iVar1 = GameSetup_gData.track % 5;
  __n = strlen((char *)Speech_gCallSignDescription.Dispatch[iVar1]);
  iVar1 = strncmp(name,(char *)Speech_gCallSignDescription.Dispatch[iVar1],__n);
  iVar3 = 0;
  if (iVar1 == 0) {
    bank->fDispatch = id;
    puVar4 = &DAT_00000001;
  }
  while (iVar3 < 0xf) {
    __n = strlen((char *)pSVar2->Mobile[0]);
    iVar1 = strncmp(name,(char *)pSVar2->Mobile[0],__n);
    if (iVar1 == 0) {
      bank->fMobile[0] = id;
      puVar4 = &DAT_00000001;
    }
    bank = (CallSignBank *)&bank->fDispatch;
    pSVar2 = (Speech_tCallSignDescription *)pSVar2->Dispatch;
    iVar3 = iVar3 + 1;
  }
  return puVar4;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ CheckMultiBank__6SpeechPciPQ26Speech11CarBankName(struct Speech *this /*$s1*/, char *name /*$s0*/, int id /*$s2*/, struct CarBankName *bn /*$s3*/)
 // line 889, offset 0x80094e08
	/* begin block 1 */
		// Start line: 890
		// Start offset: 0x80094E08
	/* end block 1 */
	// End offset: 0x80094F8C
	// End Line: 925

void * CheckMultiBank__6SpeechPciPQ26Speech11CarBankName
                 (Speech *this,char *name,int id,CarBankName *bn)

{
  int iVar1;
  void *pvVar2;
  __127 *bank;
  Speech *carbank;
  __126 *locationbank;
  
  iVar1 = strncmp(name,s_j_id__8013d04c,5);
  if (iVar1 == 0) {
    bank = (__127 *)&(this->fCallSignBank).Dispatch;
    name = name + 5;
LAB_80094ed0:
    pvVar2 = CheckCallSignBank__6SpeechPQ26Speech12CallSignBankPci
                       (this,(CallSignBank *)bank,name,id);
  }
  else {
    iVar1 = strncmp(name,s_j_cars__8013d054,7);
    if (iVar1 == 0) {
      name = name + 7;
      carbank = (Speech *)(this->fCarBank).Dispatch;
LAB_80094f08:
      pvVar2 = CheckCarBank__6SpeechPQ26Speech7CarBankPciPQ26Speech11CarBankName
                         (this,(CarBank *)carbank,name,id,bn);
      return pvVar2;
    }
    iVar1 = strncmp(name,s_j_location__80055b60,0xb);
    if (iVar1 == 0) {
      locationbank = (__126 *)(this->fLocationBank).Dispatch;
    }
    else {
      iVar1 = strncmp(name,s_j_cid__8013d05c,6);
      if (iVar1 == 0) {
        bank = &this->fCallSignBank;
        name = name + 6;
        goto LAB_80094ed0;
      }
      iVar1 = strncmp(name,s_j_ccars__80055b6c,8);
      if (iVar1 == 0) {
        name = name + 8;
        carbank = this;
        goto LAB_80094f08;
      }
      iVar1 = strncmp(name,s_j_clocaton__80055b78,0xb);
      if (iVar1 != 0) {
        iVar1 = strncmp(name,s_j_clip__8013d064,7);
        if (iVar1 == 0) {
          this->fBlpClpBank = id;
        }
        else {
          iVar1 = strncmp(name,s_j_silenc__80055b84,9);
          if (iVar1 != 0) {
            return &DAT_00000001;
          }
          this->fStaticBank = id;
        }
        return &DAT_00000001;
      }
      locationbank = &this->fLocationBank;
    }
    pvVar2 = CheckLocationBank__6SpeechPQ26Speech12LocationBankPci
                       (this,(LocationBank *)locationbank,name + 0xb,id);
  }
  return pvVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalculateBankSize__6SpeechPcPQ26Speech11CarBankNamePlT3(struct Speech *this /*$s7*/, char *header /*$s2*/, struct CarBankName *bn /*stack 8*/, long *hoffset /*$s6*/, long *hsize /*stack 16*/)
 // line 931, offset 0x80094fa8
	/* begin block 1 */
		// Start line: 932
		// Start offset: 0x80094FA8
		// Variables:
	// 		int bcount; // $s3
	// 		int bsize; // $s5
	// 		long offset; // stack offset -48
	// 		long size; // stack offset -44

		/* begin block 1.1 */
			// Start line: 932
			// Start offset: 0x80094FA8

			/* begin block 1.1.1 */
				// Start line: 945
				// Start offset: 0x80095014
				// Variables:
			// 		int filecount; // $s2
			// 		char *c; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 946
					// Start offset: 0x80095014
					// Variables:
				// 		struct Speech *this; // $s7
				// 		char *p; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 946
						// Start offset: 0x80095014
						// Variables:
					// 		int d; // $v1
					// 		int c; // $a0
					// 		int b; // $a0
					// 		int a; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80095014
					// End Line: 946
				/* end block 1.1.1.1 */
				// End offset: 0x80095014
				// End Line: 946

				/* begin block 1.1.1.2 */
					// Start line: 946
					// Start offset: 0x80095014
					// Variables:
				// 		int i; // $s4

					/* begin block 1.1.1.2.1 */
						// Start line: 953
						// Start offset: 0x80095050
						// Variables:
					// 		char *name; // $a1

						/* begin block 1.1.1.2.1.1 */
							// Start line: 953
							// Start offset: 0x8009505C
							// Variables:
						// 		struct Speech *this; // $s7
						// 		char *p; // $s1

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 953
								// Start offset: 0x8009505C
								// Variables:
							// 		int d; // $v1
							// 		int c; // $v1
							// 		int b; // $v1
							// 		int a; // $v0
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x8009505C
							// End Line: 953
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x8009505C
						// End Line: 953

						/* begin block 1.1.1.2.1.2 */
							// Start line: 953
							// Start offset: 0x8009505C
							// Variables:
						// 		struct Speech *this; // $s7

							/* begin block 1.1.1.2.1.2.1 */
								// Start line: 953
								// Start offset: 0x8009505C
								// Variables:
							// 		int d; // $a1
							// 		int c; // $a0
							// 		int b; // $v1
							// 		int a; // $v0
							/* end block 1.1.1.2.1.2.1 */
							// End offset: 0x8009505C
							// End Line: 953
						/* end block 1.1.1.2.1.2 */
						// End offset: 0x8009505C
						// End Line: 953

						/* begin block 1.1.1.2.1.3 */
							// Start line: 964
							// Start offset: 0x800950E0

							/* begin block 1.1.1.2.1.3.1 */
								// Start line: 964
								// Start offset: 0x800950E0
								// Variables:
							// 		struct Speech *this; // $s7

								/* begin block 1.1.1.2.1.3.1.1 */
									// Start line: 964
									// Start offset: 0x800950E0
									// Variables:
								// 		int d; // $a2
								// 		int c; // $a0
								// 		int b; // $v1
								// 		int a; // $v0
								/* end block 1.1.1.2.1.3.1.1 */
								// End offset: 0x80095114
								// End Line: 964
							/* end block 1.1.1.2.1.3.1 */
							// End offset: 0x80095114
							// End Line: 964
						/* end block 1.1.1.2.1.3 */
						// End offset: 0x80095174
						// End Line: 978
					/* end block 1.1.1.2.1 */
					// End offset: 0x80095174
					// End Line: 981
				/* end block 1.1.1.2 */
				// End offset: 0x80095184
				// End Line: 982
			/* end block 1.1.1 */
			// End offset: 0x80095184
			// End Line: 982
		/* end block 1.1 */
		// End offset: 0x80095184
		// End Line: 982
	/* end block 1 */
	// End offset: 0x80095184
	// End Line: 984

int CalculateBankSize__6SpeechPcPQ26Speech11CarBankNamePlT3
              (Speech *this,char *header,CarBankName *bn,long *hoffset,long *hsize)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *name;
  int id;
  uint uVar12;
  uint local_30;
  uint local_2c;
  
  id = 0;
  iVar7 = locatebigentry((byte *)header,(byte *)s_j_eventdat_event_dat_80055b90,0,&local_30,
                         &local_2c);
  pcVar11 = header + 0x10;
  if (iVar7 == 0) {
    uVar12 = 0;
  }
  else {
    iVar7 = 0;
    pcVar9 = header + 0xf;
    cVar1 = header[8];
    cVar2 = header[9];
    cVar3 = header[10];
    cVar4 = header[0xb];
    uVar12 = local_2c;
    while (iVar7 < CONCAT31(CONCAT21(CONCAT11(cVar1,cVar2),cVar3),cVar4)) {
      name = pcVar11 + 8;
      local_30 = CONCAT31(CONCAT21(CONCAT11(*pcVar11,pcVar9[2]),pcVar9[3]),pcVar9[4]);
      pcVar10 = pcVar9 + 8;
      local_2c = CONCAT31(CONCAT21(CONCAT11(pcVar9[5],pcVar9[6]),pcVar9[7]),pcVar9[8]);
      cVar5 = *name;
      pcVar11 = name;
      while (cVar5 != '\0') {
        pcVar11 = pcVar11 + 1;
        cVar5 = *pcVar11;
        pcVar10 = pcVar10 + 1;
      }
      bVar6 = false;
      if (((pcVar10[-3] == '.') && (pcVar10[-2] == 'h')) && (pcVar10[-1] == 'd')) {
        bVar6 = *pcVar10 == 'r';
      }
      if (bVar6) {
        if (*hoffset == 0) {
          *hoffset = local_30;
        }
        *hsize = (local_30 + local_2c) - *hoffset;
        pvVar8 = CheckMultiBank__6SpeechPciPQ26Speech11CarBankName(this,name,id,bn);
        if (pvVar8 != (void *)0x0) {
          id = id + 1;
          uVar12 = uVar12 + local_2c;
        }
      }
      pcVar9 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
      iVar7 = iVar7 + 1;
    }
  }
  this->fBankCount = id;
  return uVar12;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadBankHeaders__6SpeechPcPQ26Speech11CarBankNamell(struct Speech *this /*$s7*/, char *header /*$s0*/, struct CarBankName *bn /*stack 8*/, long hoffset /*stack 12*/, long hsize /*stack 16*/)
 // line 990, offset 0x800951bc
	/* begin block 1 */
		// Start line: 991
		// Start offset: 0x800951BC
		// Variables:
	// 		char *data; // $fp
	// 		long offset; // stack offset -72
	// 		long size; // stack offset -68
	// 		int id; // stack offset -64
	// 		int dt; // stack offset -60
	// 		int filecount; // stack offset -56
	// 		char *c; // $s4
	// 		char *hdata; // stack offset -52
	// 		char **banknames; // stack offset -48

		/* begin block 1.1 */
			// Start line: 991
			// Start offset: 0x800951BC
			// Variables:
		// 		struct Speech *this; // $s7
		// 		char *p; // $s0

			/* begin block 1.1.1 */
				// Start line: 991
				// Start offset: 0x800951BC
				// Variables:
			// 		int d; // $v1
			// 		int c; // $v1
			// 		int b; // $v1
			// 		int a; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800951BC
			// End Line: 991
		/* end block 1.1 */
		// End offset: 0x800951BC
		// End Line: 991

		/* begin block 1.2 */
			// Start line: 991
			// Start offset: 0x800951BC
			// Variables:
		// 		int j; // $a0
		/* end block 1.2 */
		// End offset: 0x80095318
		// End Line: 1025

		/* begin block 1.3 */
			// Start line: 1027
			// Start offset: 0x80095318
			// Variables:
		// 		int i; // stack offset -44
		// 		int j; // $a0

			/* begin block 1.3.1 */
				// Start line: 1027
				// Start offset: 0x80095320
				// Variables:
			// 		char *name; // $s6
			// 		int namelen; // $s5

				/* begin block 1.3.1.1 */
					// Start line: 1029
					// Start offset: 0x80095338
					// Variables:
				// 		struct Speech *this; // $s7
				// 		char *p; // $s4

					/* begin block 1.3.1.1.1 */
						// Start line: 1029
						// Start offset: 0x80095338
						// Variables:
					// 		int d; // $v1
					// 		int c; // $v1
					// 		int b; // $v1
					// 		int a; // $v0
					/* end block 1.3.1.1.1 */
					// End offset: 0x80095338
					// End Line: 1029
				/* end block 1.3.1.1 */
				// End offset: 0x80095338
				// End Line: 1029

				/* begin block 1.3.1.2 */
					// Start line: 1029
					// Start offset: 0x80095338
					// Variables:
				// 		struct Speech *this; // $s7

					/* begin block 1.3.1.2.1 */
						// Start line: 1029
						// Start offset: 0x80095338
						// Variables:
					// 		int d; // $a1
					// 		int c; // $a0
					// 		int b; // $v1
					// 		int a; // $v0
					/* end block 1.3.1.2.1 */
					// End offset: 0x80095338
					// End Line: 1029
				/* end block 1.3.1.2 */
				// End offset: 0x80095338
				// End Line: 1029

				/* begin block 1.3.1.3 */
					// Start line: 1044
					// Start offset: 0x800953CC

					/* begin block 1.3.1.3.1 */
						// Start line: 1045
						// Start offset: 0x800953D8

						/* begin block 1.3.1.3.1.1 */
							// Start line: 1046
							// Start offset: 0x800953D8

							/* begin block 1.3.1.3.1.1.1 */
								// Start line: 1046
								// Start offset: 0x800953D8
								// Variables:
							// 		struct Speech *this; // $s7

								/* begin block 1.3.1.3.1.1.1.1 */
									// Start line: 1046
									// Start offset: 0x800953D8
									// Variables:
								// 		int d; // $a2
								// 		int c; // $a1
								// 		int b; // $a0
								// 		int a; // $v0
								/* end block 1.3.1.3.1.1.1.1 */
								// End offset: 0x80095410
								// End Line: 1046
							/* end block 1.3.1.3.1.1.1 */
							// End offset: 0x80095410
							// End Line: 1046

							/* begin block 1.3.1.3.1.1.2 */
								// Start line: 1047
								// Start offset: 0x8009543C
							/* end block 1.3.1.3.1.1.2 */
							// End offset: 0x8009543C
							// End Line: 1055

							/* begin block 1.3.1.3.1.1.3 */
								// Start line: 1062
								// Start offset: 0x80095488

								/* begin block 1.3.1.3.1.1.3.1 */
									// Start line: 1062
									// Start offset: 0x80095488

									/* begin block 1.3.1.3.1.1.3.1.1 */
										// Start line: 1062
										// Start offset: 0x80095488
										// Variables:
									// 		struct Speech *this; // $s7

										/* begin block 1.3.1.3.1.1.3.1.1.1 */
											// Start line: 1062
											// Start offset: 0x80095488
											// Variables:
										// 		int d; // $a1
										// 		int c; // $a0
										// 		int b; // $v1
										// 		int a; // $v0
										/* end block 1.3.1.3.1.1.3.1.1.1 */
										// End offset: 0x800954C0
										// End Line: 1062
									/* end block 1.3.1.3.1.1.3.1.1 */
									// End offset: 0x800954C0
									// End Line: 1062

									/* begin block 1.3.1.3.1.1.3.1.2 */
										// Start line: 1063
										// Start offset: 0x800954C8

										/* begin block 1.3.1.3.1.1.3.1.2.1 */
											// Start line: 1065
											// Start offset: 0x800954C8

											/* begin block 1.3.1.3.1.1.3.1.2.1.1 */
												// Start line: 1068
												// Start offset: 0x80095530

												/* begin block 1.3.1.3.1.1.3.1.2.1.1.1 */
													// Start line: 1068
													// Start offset: 0x80095530
													// Variables:
												// 		int j; // $s0
												/* end block 1.3.1.3.1.1.3.1.2.1.1.1 */
												// End offset: 0x80095594
												// End Line: 1079
											/* end block 1.3.1.3.1.1.3.1.2.1.1 */
											// End offset: 0x80095594
											// End Line: 1079
										/* end block 1.3.1.3.1.1.3.1.2.1 */
										// End offset: 0x80095594
										// End Line: 1079
									/* end block 1.3.1.3.1.1.3.1.2 */
									// End offset: 0x80095594
									// End Line: 1079
								/* end block 1.3.1.3.1.1.3.1 */
								// End offset: 0x80095594
								// End Line: 1079
							/* end block 1.3.1.3.1.1.3 */
							// End offset: 0x80095594
							// End Line: 1079
						/* end block 1.3.1.3.1.1 */
						// End offset: 0x80095594
						// End Line: 1079
					/* end block 1.3.1.3.1 */
					// End offset: 0x80095594
					// End Line: 1079
				/* end block 1.3.1.3 */
				// End offset: 0x80095594
				// End Line: 1079
			/* end block 1.3.1 */
			// End offset: 0x80095594
			// End Line: 1083
		/* end block 1.3 */
		// End offset: 0x800955AC
		// End Line: 1084
	/* end block 1 */
	// End offset: 0x800955AC
	// End Line: 1102

void LoadBankHeaders__6SpeechPcPQ26Speech11CarBankNamell
               (Speech *this,char *header,CarBankName *bn,long hoffset,long hsize)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  char **ppcVar7;
  int iVar8;
  char *pcVar9;
  char *name;
  long *plVar10;
  void *__dest;
  uint local_48;
  size_t local_44;
  int local_40;
  int local_3c;
  int local_38;
  short *local_34;
  char **local_30;
  int local_2c;
  
  local_40 = 0;
  local_3c = 0;
  plVar10 = this->fBankOffset + this->fBankCount;
  locatebigentry((byte *)header,(byte *)s_j_eventdat_event_dat_80055b90,0,&local_48,&local_44);
  FILE_readsync(this->fFileHandle,local_48,plVar10,local_44,100);
  SPCH_ResolveData((ushort *)plVar10);
  pcVar9 = header + 0x10;
  __dest = (void *)((int)plVar10 + local_44);
  local_38 = CONCAT31(CONCAT21(CONCAT11(header[8],header[9]),header[10]),header[0xb]);
  local_34 = reservememadr(s_spch_temp_80055ba8,hsize,0x10);
  FILE_readsync(this->fFileHandle,hoffset,local_34,hsize,100);
  local_30 = (char **)reservememadr(s_spch_temp_80055ba8,this->fBankCount << 2,0x10);
  iVar6 = 0;
  ppcVar7 = local_30;
  if (0 < this->fBankCount) {
    do {
      *ppcVar7 = (char *)0x0;
      this->fBankOffset[iVar6] = 0;
      iVar6 = iVar6 + 1;
      ppcVar7 = ppcVar7 + 1;
    } while (iVar6 < this->fBankCount);
  }
  local_2c = 0;
  header = header + 0xf;
  while (local_2c < local_38) {
    systemtask(0);
    name = pcVar9 + 8;
    iVar6 = 0;
    local_48 = CONCAT31(CONCAT21(CONCAT11(*pcVar9,header[2]),header[3]),header[4]);
    local_44 = CONCAT31(CONCAT21(CONCAT11(header[5],header[6]),header[7]),header[8]);
    cVar1 = *name;
    header = header + 8;
    pcVar9 = name;
    while (cVar1 != '\0') {
      iVar6 = iVar6 + 1;
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
      header = header + 1;
    }
    bVar3 = false;
    if (4 < iVar6) {
      bVar2 = false;
      if (((header[-3] == '.') && (header[-2] == 'h')) && (header[-1] == 'd')) {
        bVar2 = *header == 'r';
      }
      if ((bVar2) &&
         (pvVar4 = CheckMultiBank__6SpeechPciPQ26Speech11CarBankName(this,name,local_40,bn),
         pvVar4 != (void *)0x0)) {
        bVar3 = true;
      }
      iVar8 = local_3c;
      if (bVar3) {
        local_40 = local_40 + 1;
        memcpy(__dest,(void *)((int)local_34 + (local_48 - hoffset)),local_44);
        iVar6 = SPCH_AddBank((int)__dest);
        __dest = (void *)((int)__dest + local_44);
        local_30[iVar6] = name;
      }
      else {
        bVar3 = false;
        if (((header[-3] == '.') && (header[-2] == 'd')) && (header[-1] == 'a')) {
          bVar3 = *header == 't';
        }
        if (bVar3) {
          if (((local_3c < this->fBankCount) && (local_30[local_3c] != (char *)0x0)) &&
             (iVar5 = strncmp(name,local_30[local_3c],iVar6 - 3), iVar5 == 0)) {
            local_3c = local_3c + 1;
            this->fBankOffset[iVar8] = local_48;
          }
          else {
            iVar8 = 0;
            ppcVar7 = local_30;
            if (0 < this->fBankCount) {
              do {
                if (*ppcVar7 != (char *)0x0) {
                  iVar5 = strncmp(name,*ppcVar7,iVar6 - 3);
                  if (iVar5 == 0) {
                    this->fBankOffset[iVar8] = local_48;
                    local_3c = iVar8 + 1;
                  }
                }
                iVar8 = iVar8 + 1;
                ppcVar7 = ppcVar7 + 1;
              } while (iVar8 < this->fBankCount);
            }
          }
        }
      }
    }
    header = header + 1;
    pcVar9 = pcVar9 + 1;
    local_2c = local_2c + 1;
  }
  purgememadr((int)local_34);
  purgememadr((int)local_30);
  return;
}



// decompiled code
// original method signature: 
// struct Speech * /*$ra*/ __6Speech(struct Speech *this /*$s2*/)
 // line 1110, offset 0x800955f4
	/* begin block 1 */
		// Start line: 1111
		// Start offset: 0x800955F4
		// Variables:
	// 		struct __125 *this; // $s2

		/* begin block 1.1 */
			// Start line: 1111
			// Start offset: 0x80095624
			// Variables:
		// 		struct CarBank *this; // $a1

			/* begin block 1.1.1 */
				// Start line: 1111
				// Start offset: 0x80095624
			/* end block 1.1.1 */
			// End offset: 0x80095624
			// End Line: 1111
		/* end block 1.1 */
		// End offset: 0x80095624
		// End Line: 1111

		/* begin block 1.2 */
			// Start line: 1111
			// Start offset: 0x80095650
			// Variables:
		// 		struct CarBank *this; // $a1

			/* begin block 1.2.1 */
				// Start line: 1111
				// Start offset: 0x80095650
			/* end block 1.2.1 */
			// End offset: 0x80095650
			// End Line: 1111
		/* end block 1.2 */
		// End offset: 0x80095650
		// End Line: 1111
	/* end block 1 */
	// End offset: 0x8009566C
	// End Line: 1111

	/* begin block 2 */
		// Start line: 1111
		// Start offset: 0x8009566C
		// Variables:
	// 		struct __126 *this; // $a1

		/* begin block 2.1 */
			// Start line: 1111
			// Start offset: 0x8009567C
			// Variables:
		// 		struct LocationBank *this; // $v1

			/* begin block 2.1.1 */
				// Start line: 1111
				// Start offset: 0x8009567C
			/* end block 2.1.1 */
			// End offset: 0x8009567C
			// End Line: 1111
		/* end block 2.1 */
		// End offset: 0x8009567C
		// End Line: 1111

		/* begin block 2.2 */
			// Start line: 1111
			// Start offset: 0x80095698
			// Variables:
		// 		struct LocationBank *this; // $v1

			/* begin block 2.2.1 */
				// Start line: 1111
				// Start offset: 0x80095698
			/* end block 2.2.1 */
			// End offset: 0x80095698
			// End Line: 1111
		/* end block 2.2 */
		// End offset: 0x80095698
		// End Line: 1111
	/* end block 2 */
	// End offset: 0x800956A8
	// End Line: 1111

	/* begin block 3 */
		// Start line: 1111
		// Start offset: 0x800956A8
		// Variables:
	// 		int numracers; // $v1
	// 		int numhumancops; // $a2
	// 		struct CarBankName bn[9]; // stack offset -248
	// 		int banksize; // $s1
	// 		char *SpeechLanguage; // $a3
	// 		char filename[100]; // stack offset -136
	// 		char *header; // $s0
	// 		long hoffset; // stack offset -32
	// 		long hsize; // stack offset -28

		/* begin block 3.1 */
			// Start line: 1112
			// Start offset: 0x800956A8

			/* begin block 3.1.1 */
				// Start line: 1112
				// Start offset: 0x800956A8

				/* begin block 3.1.1.1 */
					// Start line: 1112
					// Start offset: 0x800956A8
				/* end block 3.1.1.1 */
				// End offset: 0x800956A8
				// End Line: 1112
			/* end block 3.1.1 */
			// End offset: 0x800956A8
			// End Line: 1112
		/* end block 3.1 */
		// End offset: 0x800956A8
		// End Line: 1112

		/* begin block 3.2 */
			// Start line: 1112
			// Start offset: 0x800956A8
			// Variables:
		// 		int i; // $s1

			/* begin block 3.2.1 */
				// Start line: 1114
				// Start offset: 0x800956E4

				/* begin block 3.2.1.1 */
					// Start line: 1115
					// Start offset: 0x800956F0

					/* begin block 3.2.1.1.1 */
						// Start line: 1115
						// Start offset: 0x800956F0

						/* begin block 3.2.1.1.1.1 */
							// Start line: 1115
							// Start offset: 0x800956F0
						/* end block 3.2.1.1.1.1 */
						// End offset: 0x800956F0
						// End Line: 1115
					/* end block 3.2.1.1.1 */
					// End offset: 0x800956F0
					// End Line: 1115

					/* begin block 3.2.1.1.2 */
						// Start line: 1115
						// Start offset: 0x800956F0
					/* end block 3.2.1.1.2 */
					// End offset: 0x800956F0
					// End Line: 1115
				/* end block 3.2.1.1 */
				// End offset: 0x800956F0
				// End Line: 1115
			/* end block 3.2.1 */
			// End offset: 0x800956F0
			// End Line: 1115
		/* end block 3.2 */
		// End offset: 0x80095718
		// End Line: 1115

		/* begin block 3.3 */
			// Start line: 1115
			// Start offset: 0x80095718
			// Variables:
		// 		int i; // $a1
		/* end block 3.3 */
		// End offset: 0x8009578C
		// End Line: 1131

		/* begin block 3.4 */
			// Start line: 1135
			// Start offset: 0x800957A8
			// Variables:
		// 		int i; // $s0
		/* end block 3.4 */
		// End offset: 0x800957E8
		// End Line: 1148
	/* end block 3 */
	// End offset: 0x80095968
	// End Line: 1228

Speech * __6Speech(Speech *this)

{
  bool bVar1;
  int *piVar2;
  DispatchSpeaker *pDVar3;
  _func_29 *p_Var4;
  int iVar5;
  char *header;
  long *plVar6;
  uint uVar7;
  __126 *p_Var8;
  LocationBank *pLVar9;
  int carIndex;
  GameSetup_tData *pGVar10;
  Speech *pSVar11;
  CarBank *pCVar12;
  int iVar13;
  int iVar14;
  undefined **ppuVar15;
  CarBankName *this_00;
  CarBankName aCStack248 [9];
  char acStack136 [104];
  long local_20;
  long local_1c;
  
  carIndex = 8;
  piVar2 = &(this->fCarBank).Mobile[0].fModel;
  pSVar11 = this;
  do {
    (pSVar11->fCarBank).Mobile[0].fFull = -1;
    piVar2[-1] = -1;
    *piVar2 = -1;
    piVar2 = piVar2 + 3;
    carIndex = carIndex + -1;
    pSVar11 = (Speech *)((pSVar11->fCarBank).Mobile + 1);
  } while (carIndex != -1);
  pCVar12 = (this->fCarBank).Dispatch;
  carIndex = 8;
  piVar2 = &(this->fCarBank).Dispatch[0].fModel;
  do {
    pCVar12->fFull = -1;
    piVar2[-1] = -1;
    *piVar2 = -1;
    piVar2 = piVar2 + 3;
    carIndex = carIndex + -1;
    pCVar12 = pCVar12 + 1;
  } while (carIndex != -1);
  p_Var8 = &this->fLocationBank;
  carIndex = 0xf;
  do {
    p_Var8->Mobile[0].fBankId = -1;
    carIndex = carIndex + -1;
    p_Var8 = (__126 *)(p_Var8->Mobile + 1);
  } while (carIndex != -1);
  pLVar9 = (this->fLocationBank).Dispatch;
  carIndex = 0xf;
  do {
    pLVar9->fBankId = -1;
    carIndex = carIndex + -1;
    pLVar9 = pLVar9 + 1;
  } while (carIndex != -1);
  pDVar3 = (DispatchSpeaker *)__builtin_new(100);
  carIndex = 0;
  (pDVar3->Speaker)._vf[0].value = 0x80055dc4;
  (pDVar3->Speaker).fSub = (Speaker *)0x0;
  (pDVar3->Speaker)._vf[0].value = 0x80055ccc;
  this->fDispatch = pDVar3;
  pSVar11 = this;
  while (iVar14 = 0, carIndex < 4) {
    p_Var4 = (_func_29 *)__builtin_new(0x68);
    *(undefined4 *)(p_Var4 + 0x4c) = 0x80055dc4;
    *(undefined4 *)(p_Var4 + 0x48) = 0;
    *(undefined4 *)(p_Var4 + 0x4c) = 0x80055bd4;
    *(undefined4 *)(p_Var4 + 0x60) = 0;
    pSVar11->fMobile[0] = p_Var4;
    pSVar11 = (Speech *)&(pSVar11->fCarBank).Mobile[0].fMake;
    carIndex = carIndex + 1;
  }
  iVar13 = 0;
  pGVar10 = &GameSetup_gData;
  this->fFileOpen = (void *)0x0;
  this->fBankOffset = (long *)0x0;
  carIndex = 0;
  if (0 < GameSetup_gData.numCars) {
    do {
      iVar5 = pGVar10->carInfo[0].carClass;
      if ((iVar5 == 1) || (iVar5 == 2)) {
        carIndex = carIndex + 1;
      }
      else {
        if (iVar5 == 0x41) {
          iVar14 = iVar14 + 1;
        }
      }
      iVar13 = iVar13 + 1;
      pGVar10 = (GameSetup_tData *)((pGVar10->controllerData).shockImpact + 1);
    } while (iVar13 < GameSetup_gData.numCars);
  }
  if ((iVar14 == 0) && (1 < carIndex)) {
    this->fMultiplePerps = 1;
  }
  else {
    this->fMultiplePerps = 0;
  }
  carIndex = 0;
  gettick();
  bVar1 = 0 < GameSetup_gData.numCars;
  this->fCarCount = GameSetup_gData.numCars;
  if (bVar1) {
    this_00 = aCStack248;
    do {
      SetCar__Q26Speech11CarBankNamei(this_00,carIndex);
      carIndex = carIndex + 1;
      this_00 = this_00 + 1;
    } while (carIndex < this->fCarCount);
  }
  CountLocations__6Speech(this);
  this->fBankCount = 0;
  carIndex = 0;
  if (GameSetup_gData.languageSpeech == 2) {
    ppuVar15 = &PTR_DAT_8013d06c;
  }
  else {
    if (GameSetup_gData.languageSpeech < 3) {
      if (GameSetup_gData.languageSpeech == 1) {
        ppuVar15 = &PTR_DAT_8013d070;
      }
      else {
        ppuVar15 = &PTR_DAT_8013d078;
      }
    }
    else {
      if (GameSetup_gData.languageSpeech == 6) {
        ppuVar15 = &PTR_DAT_8013d074;
      }
      else {
        ppuVar15 = &PTR_DAT_8013d078;
      }
    }
  }
  sprintf(acStack136,s__szzzz_s_viv_80055bb4,PTR_801164dc,ppuVar15);
  header = (char *)loadbigfileheader(acStack136,0x10);
  local_20 = 0;
  local_1c = 0;
  if (header != (char *)0x0) {
    carIndex = CalculateBankSize__6SpeechPcPQ26Speech11CarBankNamePlT3
                         (this,header,aCStack248,&local_20,&local_1c);
  }
  if (0 < carIndex) {
    plVar6 = (long *)reservememadr(s_spch_index_80055bc4,this->fBankCount * 4 + carIndex,0);
    this->fBankOffset = plVar6;
  }
  if (this->fBankOffset != (long *)0x0) {
    carIndex = SPCH_GetSampleDataRate((int)&DAT_00002b11,0x10,2);
    SPCH_Init(Speech_HandleRequest__Fllll,0x12345678,carIndex);
    SPCH_InitBankMem((int)Speech_AllocateRAM__FlPc,(int)Speech_PurgeRAM__FPc,this->fBankCount);
    uVar7 = FILE_opensync(acStack136,1,100,(uint *)&this->fFileHandle);
    this->fFileOpen = (void *)(uint)(uVar7 != 0);
    LoadBankHeaders__6SpeechPcPQ26Speech11CarBankNamell(this,header,aCStack248,local_20,local_1c);
  }
  if (header != (char *)0x0) {
    purgememadr((int)header);
  }
  gettick();
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Reset__6Speech()
 // line 1248, offset 0x80095994
	/* begin block 1 */
		// Start line: 1249
		// Start offset: 0x80095994

		/* begin block 1.1 */
			// Start line: 1253
			// Start offset: 0x800959A8
			// Variables:
		// 		int i; // $a0

			/* begin block 1.1.1 */
				// Start line: 1253
				// Start offset: 0x800959B0

				/* begin block 1.1.1.1 */
					// Start line: 1249
					// Start offset: 0x800959BC
					// Variables:
				// 		struct MobileSpeaker *this; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 1249
						// Start offset: 0x800959BC
					/* end block 1.1.1.1.1 */
					// End offset: 0x800959BC
					// End Line: 1249
				/* end block 1.1.1.1 */
				// End offset: 0x800959BC
				// End Line: 1249
			/* end block 1.1.1 */
			// End offset: 0x800959BC
			// End Line: 1249
		/* end block 1.1 */
		// End offset: 0x800959CC
		// End Line: 1254
	/* end block 1 */
	// End offset: 0x80095B20
	// End Line: 1260

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Reset__6Speech(void)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  DispatchSpeaker *this;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (DAT_00000838 != 0) {
    iVar4 = 0;
    iVar3 = DAT_00000838;
    while (bVar2 = iVar4 < 4, iVar4 = iVar4 + 1, bVar2) {
      piVar1 = (int *)(iVar3 + 0x390);
      iVar3 = iVar3 + 4;
      *(undefined4 *)(*piVar1 + 0x60) = 0;
    }
    SPCH_ClearEventQueue();
    randtemp = fastRandom * randSeed;
    fastRandom = randtemp & 0xffff;
    iSPCH_EACseedrandom((randtemp & 0xffff00) >> 8);
    iVar3 = DAT_00000838;
    uVar6 = fastRandom * randSeed;
    uVar7 = (uVar6 & 0xffff) * randSeed;
    randtemp = (uVar7 & 0xffff) * randSeed;
    this = *(DispatchSpeaker **)(DAT_00000838 + 0x3a0);
    uVar5 = randtemp & 0xffff00;
    fastRandom = randtemp & 0xffff;
    *(uint *)(DAT_00000838 + 0x380) = ((uVar6 & 0xffff00) >> 8) % 9;
    *(uint *)(iVar3 + 900) = ((uVar7 & 0xffff00) >> 8) % 6;
    Activate__Q26Speech15DispatchSpeakeri(this,(uVar5 >> 8) % 7);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._6Speech(struct Speech *this /*$s2*/, int __in_chrg /*$s3*/)
 // line 1267, offset 0x80095b30
	/* begin block 1 */
		// Start line: 1268
		// Start offset: 0x80095B30

		/* begin block 1.1 */
			// Start line: 1281
			// Start offset: 0x80095B8C
			// Variables:
		// 		int i; // $s1
		/* end block 1.1 */
		// End offset: 0x80095BB8
		// End Line: 1284
	/* end block 1 */
	// End offset: 0x80095BB8
	// End Line: 1284

void ___6Speech(Speech *this,int __in_chrg)

{
  _func_29 **pp_Var1;
  Speech *pSVar2;
  int iVar3;
  
  if (this->fBankOffset != (long *)0x0) {
    SPCH_Deinit();
    purgememadr((int)this->fBankOffset);
  }
  if (this->fFileOpen != (void *)0x0) {
    FILE_closesync(this->fFileHandle,100);
  }
  iVar3 = 0;
  __builtin_delete(this->fDispatch);
  pSVar2 = this;
  do {
    pp_Var1 = pSVar2->fMobile;
    pSVar2 = (Speech *)&(pSVar2->fCarBank).Mobile[0].fMake;
    iVar3 = iVar3 + 1;
    __builtin_delete(*pp_Var1);
  } while (iVar3 < 4);
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ BankPatch__6SpeechlP8Car_tObj(struct Speech *this /*$a0*/, long bank /*$a1*/, struct Car_tObj *car /*$a2*/)
 // line 1297, offset 0x80095be4
	/* begin block 1 */
		// Start line: 1298
		// Start offset: 0x80095BE4
	/* end block 1 */
	// End offset: 0x80095C18
	// End Line: 1308

int BankPatch__6SpeechlP8Car_tObj(Speech *this,long bank,Car_tObj *car)

{
  int iVar1;
  
  if (bank == this->fStaticBank) {
    return 0x15;
  }
  iVar1 = -1;
  if ((bank == this->fBlpClpBank) && (iVar1 = 0x13, car != (Car_tObj *)0x0)) {
    iVar1 = 0x14;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SubmitRequest__6Speechlll(long bank /*$s0*/, long localoffset /*$s2*/, long size /*$s3*/)
 // line 1317, offset 0x80095c20
	/* begin block 1 */
		// Start line: 1318
		// Start offset: 0x80095C20

		/* begin block 1.1 */
			// Start line: 1318
			// Start offset: 0x80095C20

			/* begin block 1.1.1 */
				// Start line: 1320
				// Start offset: 0x80095C4C
				// Variables:
			// 		struct Car_tObj *car; // $s1
			// 		int patch; // $a0
			// 		long offset; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 1321
					// Start offset: 0x80095C4C

					/* begin block 1.1.1.1.1 */
						// Start line: 1321
						// Start offset: 0x80095C4C
					/* end block 1.1.1.1.1 */
					// End offset: 0x80095C4C
					// End Line: 1321
				/* end block 1.1.1.1 */
				// End offset: 0x80095C4C
				// End Line: 1321

				/* begin block 1.1.1.2 */
					// Start line: 1321
					// Start offset: 0x80095C4C
					// Variables:
				// 		struct Speech *this; // $v1
				// 		long bank; // $s0

					/* begin block 1.1.1.2.1 */
						// Start line: 1321
						// Start offset: 0x80095C4C
					/* end block 1.1.1.2.1 */
					// End offset: 0x80095CB0
					// End Line: 1325
				/* end block 1.1.1.2 */
				// End offset: 0x80095CB0
				// End Line: 1325

				/* begin block 1.1.1.3 */
					// Start line: 1325
					// Start offset: 0x80095CB0

					/* begin block 1.1.1.3.1 */
						// Start line: 1325
						// Start offset: 0x80095CB0
					/* end block 1.1.1.3.1 */
					// End offset: 0x80095CB0
					// End Line: 1325
				/* end block 1.1.1.3 */
				// End offset: 0x80095CB0
				// End Line: 1325

				/* begin block 1.1.1.4 */
					// Start line: 1325
					// Start offset: 0x80095CB0

					/* begin block 1.1.1.4.1 */
						// Start line: 1331
						// Start offset: 0x80095CCC

						/* begin block 1.1.1.4.1.1 */
							// Start line: 1331
							// Start offset: 0x80095CCC

							/* begin block 1.1.1.4.1.1.1 */
								// Start line: 1332
								// Start offset: 0x80095CD4

								/* begin block 1.1.1.4.1.1.1.1 */
									// Start line: 1332
									// Start offset: 0x80095CD4
									// Variables:
								// 		struct Speech *this; // $v0

									/* begin block 1.1.1.4.1.1.1.1.1 */
										// Start line: 1332
										// Start offset: 0x80095CD4
									/* end block 1.1.1.4.1.1.1.1.1 */
									// End offset: 0x80095CD4
									// End Line: 1332
								/* end block 1.1.1.4.1.1.1.1 */
								// End offset: 0x80095CD4
								// End Line: 1332
							/* end block 1.1.1.4.1.1.1 */
							// End offset: 0x80095CEC
							// End Line: 1337
						/* end block 1.1.1.4.1.1 */
						// End offset: 0x80095CEC
						// End Line: 1337
					/* end block 1.1.1.4.1 */
					// End offset: 0x80095CEC
					// End Line: 1337
				/* end block 1.1.1.4 */
				// End offset: 0x80095CEC
				// End Line: 1337
			/* end block 1.1.1 */
			// End offset: 0x80095CF4
			// End Line: 1340
		/* end block 1.1 */
		// End offset: 0x80095CF8
		// End Line: 1343
	/* end block 1 */
	// End offset: 0x80095CF8
	// End Line: 1343

long SubmitRequest__6Speechlll(long bank,long localoffset,long size)

{
  Speech *this;
  int patch;
  long lVar1;
  Car_tObj *car;
  
  this = DAT_00000838;
  if (DAT_00000838 == (Speech *)0x0) {
    lVar1 = 0;
  }
  else {
    (DAT_00000838->fDispatch->Speaker)._vf[2].value = 0;
    (this->fDispatch->Speaker)._vf[1].value = 0x200;
    car = this->fSpeakerCar;
    patch = BankPatch__6SpeechlP8Car_tObj(this,bank,car);
    if ((bank < 0) || (DAT_00000838->fBankCount <= bank)) {
      lVar1 = 0;
    }
    else {
      lVar1 = DAT_00000838->fBankOffset[bank];
    }
    if (patch < 0) {
      if (lVar1 != 0) {
        CopSpeak_DirectRequest__FillP8Car_tObjPc
                  (DAT_00000838->fFileHandle,lVar1 + localoffset,size,car,(char *)0x0);
      }
      lVar1 = lVar1 + localoffset;
    }
    else {
      CopSpeak_GenericBankRequest__FiP8Car_tObj(patch,car);
      lVar1 = lVar1 + localoffset;
    }
  }
  return lVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Report__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this /*$a0*/, struct Car_tObj *cop /*$a1*/)
 // line 1352, offset 0x80095d14
	/* begin block 1 */
		// Start line: 1353
		// Start offset: 0x80095D14
	/* end block 1 */
	// End offset: 0x80095D14
	// End Line: 1353

void Report__Q26Speech7SpeakerP8Car_tObj(Speaker *this,Car_tObj *cop)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Deny__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 1363, offset 0x80095d1c
	/* begin block 1 */
		// Start line: 1364
		// Start offset: 0x80095D1C
	/* end block 1 */
	// End offset: 0x80095D1C
	// End Line: 1364

void Deny__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Grant__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 1371, offset 0x80095d24
	/* begin block 1 */
		// Start line: 1372
		// Start offset: 0x80095D24
	/* end block 1 */
	// End offset: 0x80095D24
	// End Line: 1372

void Grant__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Ready__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this /*$a0*/, struct Car_tObj *wing /*$a1*/)
 // line 1379, offset 0x80095d2c
	/* begin block 1 */
		// Start line: 1380
		// Start offset: 0x80095D2C
	/* end block 1 */
	// End offset: 0x80095D2C
	// End Line: 1380

void Ready__Q26Speech7SpeakerP8Car_tObj(Speaker *this,Car_tObj *wing)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Engage__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this /*$a0*/, struct Car_tObj *perp /*$a1*/)
 // line 1394, offset 0x80095d34
	/* begin block 1 */
		// Start line: 1395
		// Start offset: 0x80095D34
	/* end block 1 */
	// End offset: 0x80095D34
	// End Line: 1395

void Engage__Q26Speech7SpeakerP8Car_tObj(Speaker *this,Car_tObj *perp)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Lose__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 1402, offset 0x80095d3c
	/* begin block 1 */
		// Start line: 1403
		// Start offset: 0x80095D3C
	/* end block 1 */
	// End offset: 0x80095D3C
	// End Line: 1403

void Lose__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Accident__Q26Speech7Speakeri(struct Speaker *this /*$a0*/, int slice /*$a1*/)
 // line 1410, offset 0x80095d44
	/* begin block 1 */
		// Start line: 1411
		// Start offset: 0x80095D44
	/* end block 1 */
	// End offset: 0x80095D44
	// End Line: 1411

void Accident__Q26Speech7Speakeri(Speaker *this,int slice)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Catch__Q26Speech7Speakeri(struct Speaker *this /*$a0*/, int ticket /*$a1*/)
 // line 1418, offset 0x80095d4c
	/* begin block 1 */
		// Start line: 1419
		// Start offset: 0x80095D4C
	/* end block 1 */
	// End offset: 0x80095D4C
	// End Line: 1419

void Catch__Q26Speech7Speakeri(Speaker *this,int ticket)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RoadBlock__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 1426, offset 0x80095d54
	/* begin block 1 */
		// Start line: 1427
		// Start offset: 0x80095D54
	/* end block 1 */
	// End offset: 0x80095D54
	// End Line: 1427

void RoadBlock__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpikeBelt__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 1434, offset 0x80095d5c
	/* begin block 1 */
		// Start line: 1435
		// Start offset: 0x80095D5C
	/* end block 1 */
	// End offset: 0x80095D5C
	// End Line: 1435

void SpikeBelt__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Backup__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 1442, offset 0x80095d64
	/* begin block 1 */
		// Start line: 1443
		// Start offset: 0x80095D64
	/* end block 1 */
	// End offset: 0x80095D64
	// End Line: 1443

void Backup__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReportBlockade__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 1450, offset 0x80095d6c
	/* begin block 1 */
		// Start line: 1451
		// Start offset: 0x80095D6C
	/* end block 1 */
	// End offset: 0x80095D6C
	// End Line: 1451

void ReportBlockade__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Roger__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 1459, offset 0x80095d74
	/* begin block 1 */
		// Start line: 1460
		// Start offset: 0x80095D74
	/* end block 1 */
	// End offset: 0x80095D74
	// End Line: 1460

void Roger__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Bullhorn__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 1467, offset 0x80095d7c
	/* begin block 1 */
		// Start line: 1468
		// Start offset: 0x80095D7C
	/* end block 1 */
	// End offset: 0x80095D7C
	// End Line: 1468

void Bullhorn__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Purge__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 1475, offset 0x80095d84
	/* begin block 1 */
		// Start line: 1476
		// Start offset: 0x80095D84
	/* end block 1 */
	// End offset: 0x80095D84
	// End Line: 1476

void Purge__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Promote__Q26Speech7Speaker(struct Speaker *this /*$s0*/)
 // line 1490, offset 0x80095d8c
	/* begin block 1 */
		// Start line: 1491
		// Start offset: 0x80095D8C
		// Variables:
	// 		struct Speaker *Super; // $a0

		/* begin block 1.1 */
			// Start line: 1494
			// Start offset: 0x80095DA4

			/* begin block 1.1.1 */
				// Start line: 1494
				// Start offset: 0x80095DA4
				// Variables:
			// 		struct Speaker *this; // $a0

				/* begin block 1.1.1.1 */
					// Start line: 1494
					// Start offset: 0x80095DA4
				/* end block 1.1.1.1 */
				// End offset: 0x80095DA4
				// End Line: 1494
			/* end block 1.1.1 */
			// End offset: 0x80095DA4
			// End Line: 1494

			/* begin block 1.1.2 */
				// Start line: 1494
				// Start offset: 0x80095DB4
				// Variables:
			// 		struct Speaker *this; // $a0

				/* begin block 1.1.2.1 */
					// Start line: 1494
					// Start offset: 0x80095DB4
				/* end block 1.1.2.1 */
				// End offset: 0x80095DB4
				// End Line: 1494
			/* end block 1.1.2 */
			// End offset: 0x80095DB4
			// End Line: 1494

			/* begin block 1.1.3 */
				// Start line: 1494
				// Start offset: 0x80095DC4

				/* begin block 1.1.3.1 */
					// Start line: 1494
					// Start offset: 0x80095DC4
				/* end block 1.1.3.1 */
				// End offset: 0x80095DC4
				// End Line: 1494
			/* end block 1.1.3 */
			// End offset: 0x80095DC4
			// End Line: 1494
		/* end block 1.1 */
		// End offset: 0x80095DC4
		// End Line: 1494

		/* begin block 1.2 */
			// Start line: 1495
			// Start offset: 0x80095DCC
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.2.1 */
				// Start line: 1495
				// Start offset: 0x80095DCC
			/* end block 1.2.1 */
			// End offset: 0x80095DCC
			// End Line: 1495
		/* end block 1.2 */
		// End offset: 0x80095DCC
		// End Line: 1495

		/* begin block 1.3 */
			// Start line: 1495
			// Start offset: 0x80095DCC
			// Variables:
		// 		struct Speaker *this; // $a0

			/* begin block 1.3.1 */
				// Start line: 1495
				// Start offset: 0x80095DCC
			/* end block 1.3.1 */
			// End offset: 0x80095DCC
			// End Line: 1495
		/* end block 1.3 */
		// End offset: 0x80095DCC
		// End Line: 1495

		/* begin block 1.4 */
			// Start line: 1495
			// Start offset: 0x80095DCC

			/* begin block 1.4.1 */
				// Start line: 1495
				// Start offset: 0x80095DCC
			/* end block 1.4.1 */
			// End offset: 0x80095DCC
			// End Line: 1495
		/* end block 1.4 */
		// End offset: 0x80095DCC
		// End Line: 1495

		/* begin block 1.5 */
			// Start line: 1495
			// Start offset: 0x80095DCC
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.5.1 */
				// Start line: 1495
				// Start offset: 0x80095DCC
			/* end block 1.5.1 */
			// End offset: 0x80095DCC
			// End Line: 1495
		/* end block 1.5 */
		// End offset: 0x80095DCC
		// End Line: 1495

		/* begin block 1.6 */
			// Start line: 1495
			// Start offset: 0x80095DCC
			// Variables:
		// 		struct Speaker *Sub; // $s0

			/* begin block 1.6.1 */
				// Start line: 1495
				// Start offset: 0x80095DCC
			/* end block 1.6.1 */
			// End offset: 0x80095DCC
			// End Line: 1495
		/* end block 1.6 */
		// End offset: 0x80095DCC
		// End Line: 1495
	/* end block 1 */
	// End offset: 0x80095DCC
	// End Line: 1495

void Promote__Q26Speech7Speaker(Speaker *this)

{
  Speaker *pSVar1;
  Speaker *pSVar2;
  
  pSVar1 = Dispatch__6Speech();
  do {
    pSVar2 = pSVar1;
    pSVar1 = pSVar2->fSub;
  } while (pSVar1 != (Speaker *)0x0 && pSVar1 != this);
  pSVar2->fSub = this->fSub;
  pSVar1 = Dispatch__6Speech();
  this->fSub = pSVar1->fSub;
  pSVar1 = Dispatch__6Speech();
  pSVar1->fSub = this;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Speech_Server__Fv()
 // line 1539, offset 0x80095df8
	/* begin block 1 */
		// Start line: 1540
		// Start offset: 0x80095DF8
	/* end block 1 */
	// End offset: 0x80095DF8
	// End Line: 1540

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Speech_Server__Fv(void)

{
  Speaker *pSVar1;
  uint uVar2;
  
  pSVar1 = Dispatch__6Speech();
  uVar2 = pSVar1->_vf[0].value;
  (**(code **)(uVar2 + 0x14))((int)&(pSVar1->fPosition).flags + (int)*(short *)(uVar2 + 0x10));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetDelayedStatus__6SpeechPQ26Speech7Speakeri(struct Speech *this /*$a0*/, struct Speaker *sub /*$a1*/, int delay /*$a2*/)
 // line 1546, offset 0x80095e34
	/* begin block 1 */
		// Start line: 1547
		// Start offset: 0x80095E34
	/* end block 1 */
	// End offset: 0x80095E34
	// End Line: 1548

void SetDelayedStatus__6SpeechPQ26Speech7Speakeri(Speech *this,Speaker *sub,int delay)

{
  int iVar1;
  
  iVar1 = DAT_00000838;
  *(Speaker **)(*(int *)(DAT_00000838 + 0x3a0) + 0x54) = sub;
  *(int *)(*(int *)(iVar1 + 0x3a0) + 0x50) = delay;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Activate__Q26Speech15DispatchSpeakeri(struct DispatchSpeaker *this /*$s0*/, int seedupdatecount /*$s1*/)
 // line 1554, offset 0x80095e54
	/* begin block 1 */
		// Start line: 1555
		// Start offset: 0x80095E54

		/* begin block 1.1 */
			// Start line: 1555
			// Start offset: 0x80095E54

			/* begin block 1.1.1 */
				// Start line: 1555
				// Start offset: 0x80095E54
			/* end block 1.1.1 */
			// End offset: 0x80095E54
			// End Line: 1555
		/* end block 1.1 */
		// End offset: 0x80095E54
		// End Line: 1555

		/* begin block 1.2 */
			// Start line: 1555
			// Start offset: 0x80095E54
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.2.1 */
				// Start line: 1555
				// Start offset: 0x80095E54
			/* end block 1.2.1 */
			// End offset: 0x80095E54
			// End Line: 1555
		/* end block 1.2 */
		// End offset: 0x80095E54
		// End Line: 1555

		/* begin block 1.3 */
			// Start line: 1555
			// Start offset: 0x80095E54
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.3.1 */
				// Start line: 1555
				// Start offset: 0x80095E54
			/* end block 1.3.1 */
			// End offset: 0x80095E54
			// End Line: 1555
		/* end block 1.3 */
		// End offset: 0x80095E54
		// End Line: 1555

		/* begin block 1.4 */
			// Start line: 1555
			// Start offset: 0x80095E54
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.4.1 */
				// Start line: 1555
				// Start offset: 0x80095E54
			/* end block 1.4.1 */
			// End offset: 0x80095E54
			// End Line: 1555
		/* end block 1.4 */
		// End offset: 0x80095E54
		// End Line: 1555

		/* begin block 1.5 */
			// Start line: 1555
			// Start offset: 0x80095E54
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.5.1 */
				// Start line: 1555
				// Start offset: 0x80095E54
			/* end block 1.5.1 */
			// End offset: 0x80095E54
			// End Line: 1555
		/* end block 1.5 */
		// End offset: 0x80095E54
		// End Line: 1555

		/* begin block 1.6 */
			// Start line: 1555
			// Start offset: 0x80095E54
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.6.1 */
				// Start line: 1555
				// Start offset: 0x80095E54
			/* end block 1.6.1 */
			// End offset: 0x80095E54
			// End Line: 1555
		/* end block 1.6 */
		// End offset: 0x80095E54
		// End Line: 1555

		/* begin block 1.7 */
			// Start line: 1555
			// Start offset: 0x80095E54
			// Variables:
		// 		int i; // $a1
		/* end block 1.7 */
		// End offset: 0x80095EC8
		// End Line: 1567

		/* begin block 1.8 */
			// Start line: 1569
			// Start offset: 0x80095EC8
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.8.1 */
				// Start line: 1569
				// Start offset: 0x80095EC8
			/* end block 1.8.1 */
			// End offset: 0x80095EC8
			// End Line: 1569
		/* end block 1.8 */
		// End offset: 0x80095EC8
		// End Line: 1569
	/* end block 1 */
	// End offset: 0x80095EC8
	// End Line: 1569

void Activate__Q26Speech15DispatchSpeakeri(DispatchSpeaker *this,int seedupdatecount)

{
  uint uVar1;
  int iVar2;
  SPCHNFSType_DISTANCE *pSVar3;
  int iVar4;
  
  uVar1 = (this->Speaker)._vf[0].value;
  iVar2 = (**(code **)(uVar1 + 0xf4))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xf0));
  iVar4 = 1;
  pSVar3 = &(this->Speaker).fDistance;
  (this->Speaker).fFrom = *(int *)(iVar2 + 4);
  iVar2 = GameSetup_gData.track;
  (this->Speaker).fConfirm.flags = 0xff;
  (this->Speaker).fPerpName.flags = 0xf;
  (this->Speaker).fSub = (Speaker *)0x0;
  (this->Speaker).fReverse.flags = iVar2 & 1;
  do {
    pSVar3[0x17].flags = 0;
    iVar4 = iVar4 + -1;
    pSVar3 = pSVar3 + -1;
  } while (-1 < iVar4);
  (this->Speaker)._vf[1].value = 0x200;
  (this->Speaker)._vf[2].value = 0;
  (this->Speaker)._vf[3].value = seedupdatecount;
  (this->Speaker).fHavePerp = (void *)0x0;
  return;
}



// decompiled code
// original method signature: 
// struct Speaker * /*$ra*/ Dispatch__6Speech()
 // line 1578, offset 0x80095ef0
	/* begin block 1 */
		// Start line: 1579
		// Start offset: 0x80095EF0
		// Variables:
	// 		struct Speaker *result; // $v0
	/* end block 1 */
	// End offset: 0x80095F20
	// End Line: 1587

/* WARNING: Unknown calling convention yet parameter storage is locked */

Speaker * Dispatch__6Speech(void)

{
  if ((DAT_00000838 != 0) && (*(int *)(DAT_00000838 + 0x36c) != 0)) {
    return *(Speaker **)(DAT_00000838 + 0x3a0);
  }
  return DAT_0000083c;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Roger__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this /*$s1*/)
 // line 1592, offset 0x80095f28
	/* begin block 1 */
		// Start line: 1593
		// Start offset: 0x80095F28

		/* begin block 1.1 */
			// Start line: 1593
			// Start offset: 0x80095F28
			// Variables:
		// 		struct DispatchSpeaker *this; // $s1

			/* begin block 1.1.1 */
				// Start line: 1593
				// Start offset: 0x80095F28

				/* begin block 1.1.1.1 */
					// Start line: 1593
					// Start offset: 0x80095F28
					// Variables:
				// 		struct Speech *this; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 1593
						// Start offset: 0x80095F28
					/* end block 1.1.1.1.1 */
					// End offset: 0x80095F28
					// End Line: 1593
				/* end block 1.1.1.1 */
				// End offset: 0x80095F28
				// End Line: 1593
			/* end block 1.1.1 */
			// End offset: 0x80095F28
			// End Line: 1593
		/* end block 1.1 */
		// End offset: 0x80095F28
		// End Line: 1593

		/* begin block 1.2 */
			// Start line: 1593
			// Start offset: 0x80095F28

			/* begin block 1.2.1 */
				// Start line: 1593
				// Start offset: 0x80095F28
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.2.1.1 */
					// Start line: 1593
					// Start offset: 0x80095F28
				/* end block 1.2.1.1 */
				// End offset: 0x80095F28
				// End Line: 1593
			/* end block 1.2.1 */
			// End offset: 0x80095F28
			// End Line: 1593

			/* begin block 1.2.2 */
				// Start line: 1600
				// Start offset: 0x80095F54
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.2.2.1 */
					// Start line: 1600
					// Start offset: 0x80095F54
				/* end block 1.2.2.1 */
				// End offset: 0x80095F54
				// End Line: 1600
			/* end block 1.2.2 */
			// End offset: 0x80095F54
			// End Line: 1600

			/* begin block 1.2.3 */
				// Start line: 1600
				// Start offset: 0x80095F78
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.2.3.1 */
					// Start line: 1600
					// Start offset: 0x80095F78
				/* end block 1.2.3.1 */
				// End offset: 0x80095F78
				// End Line: 1600
			/* end block 1.2.3 */
			// End offset: 0x80095F78
			// End Line: 1600

			/* begin block 1.2.4 */
				// Start line: 1600
				// Start offset: 0x80095F78

				/* begin block 1.2.4.1 */
					// Start line: 1600
					// Start offset: 0x80095F78
				/* end block 1.2.4.1 */
				// End offset: 0x80095F78
				// End Line: 1600
			/* end block 1.2.4 */
			// End offset: 0x80095F78
			// End Line: 1600

			/* begin block 1.2.5 */
				// Start line: 1601
				// Start offset: 0x80095F9C

				/* begin block 1.2.5.1 */
					// Start line: 1601
					// Start offset: 0x80095F9C
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.5.1.1 */
						// Start line: 1601
						// Start offset: 0x80095F9C
					/* end block 1.2.5.1.1 */
					// End offset: 0x80095F9C
					// End Line: 1601
				/* end block 1.2.5.1 */
				// End offset: 0x80095F9C
				// End Line: 1601
			/* end block 1.2.5 */
			// End offset: 0x80095F9C
			// End Line: 1602

			/* begin block 1.2.6 */
				// Start line: 1605
				// Start offset: 0x80095FAC

				/* begin block 1.2.6.1 */
					// Start line: 1605
					// Start offset: 0x80095FAC

					/* begin block 1.2.6.1.1 */
						// Start line: 1605
						// Start offset: 0x80095FAC
						// Variables:
					// 		struct Speaker *this; // $s1

						/* begin block 1.2.6.1.1.1 */
							// Start line: 1605
							// Start offset: 0x80095FAC
						/* end block 1.2.6.1.1.1 */
						// End offset: 0x80095FAC
						// End Line: 1605
					/* end block 1.2.6.1.1 */
					// End offset: 0x80095FAC
					// End Line: 1605

					/* begin block 1.2.6.1.2 */
						// Start line: 1605
						// Start offset: 0x80095FAC

						/* begin block 1.2.6.1.2.1 */
							// Start line: 1605
							// Start offset: 0x80095FAC
						/* end block 1.2.6.1.2.1 */
						// End offset: 0x80095FAC
						// End Line: 1605
					/* end block 1.2.6.1.2 */
					// End offset: 0x80095FAC
					// End Line: 1605

					/* begin block 1.2.6.1.3 */
						// Start line: 1606
						// Start offset: 0x80095FC4

						/* begin block 1.2.6.1.3.1 */
							// Start line: 1607
							// Start offset: 0x80095FC4
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.6.1.3.1.1 */
								// Start line: 1607
								// Start offset: 0x80095FC4
							/* end block 1.2.6.1.3.1.1 */
							// End offset: 0x80095FC4
							// End Line: 1607
						/* end block 1.2.6.1.3.1 */
						// End offset: 0x80095FC4
						// End Line: 1607

						/* begin block 1.2.6.1.3.2 */
							// Start line: 1607
							// Start offset: 0x80095FC4

							/* begin block 1.2.6.1.3.2.1 */
								// Start line: 1607
								// Start offset: 0x80095FC4
							/* end block 1.2.6.1.3.2.1 */
							// End offset: 0x80095FC4
							// End Line: 1607
						/* end block 1.2.6.1.3.2 */
						// End offset: 0x80095FC4
						// End Line: 1607

						/* begin block 1.2.6.1.3.3 */
							// Start line: 1607
							// Start offset: 0x80095FC4
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.6.1.3.3.1 */
								// Start line: 1607
								// Start offset: 0x80095FC4
							/* end block 1.2.6.1.3.3.1 */
							// End offset: 0x80095FC4
							// End Line: 1607
						/* end block 1.2.6.1.3.3 */
						// End offset: 0x80095FC4
						// End Line: 1607

						/* begin block 1.2.6.1.3.4 */
							// Start line: 1607
							// Start offset: 0x80095FC4
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.6.1.3.4.1 */
								// Start line: 1607
								// Start offset: 0x80095FC4
							/* end block 1.2.6.1.3.4.1 */
							// End offset: 0x80095FC4
							// End Line: 1607
						/* end block 1.2.6.1.3.4 */
						// End offset: 0x80095FC4
						// End Line: 1607

						/* begin block 1.2.6.1.3.5 */
							// Start line: 1607
							// Start offset: 0x80095FC4
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.6.1.3.5.1 */
								// Start line: 1607
								// Start offset: 0x80095FC4
							/* end block 1.2.6.1.3.5.1 */
							// End offset: 0x80095FC4
							// End Line: 1607
						/* end block 1.2.6.1.3.5 */
						// End offset: 0x80095FC4
						// End Line: 1607

						/* begin block 1.2.6.1.3.6 */
							// Start line: 1607
							// Start offset: 0x80095FC4
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.6.1.3.6.1 */
								// Start line: 1607
								// Start offset: 0x80095FC4
							/* end block 1.2.6.1.3.6.1 */
							// End offset: 0x80095FC4
							// End Line: 1607
						/* end block 1.2.6.1.3.6 */
						// End offset: 0x80095FC4
						// End Line: 1607
					/* end block 1.2.6.1.3 */
					// End offset: 0x80095FC4
					// End Line: 1607

					/* begin block 1.2.6.1.4 */
						// Start line: 1611
						// Start offset: 0x80096030

						/* begin block 1.2.6.1.4.1 */
							// Start line: 1611
							// Start offset: 0x80096030

							/* begin block 1.2.6.1.4.1.1 */
								// Start line: 1611
								// Start offset: 0x80096030
								// Variables:
							// 		struct Speaker *this; // $s1

								/* begin block 1.2.6.1.4.1.1.1 */
									// Start line: 1611
									// Start offset: 0x80096030
								/* end block 1.2.6.1.4.1.1.1 */
								// End offset: 0x80096030
								// End Line: 1611
							/* end block 1.2.6.1.4.1.1 */
							// End offset: 0x80096030
							// End Line: 1611

							/* begin block 1.2.6.1.4.1.2 */
								// Start line: 1611
								// Start offset: 0x80096030

								/* begin block 1.2.6.1.4.1.2.1 */
									// Start line: 1611
									// Start offset: 0x80096030
								/* end block 1.2.6.1.4.1.2.1 */
								// End offset: 0x80096030
								// End Line: 1611
							/* end block 1.2.6.1.4.1.2 */
							// End offset: 0x80096030
							// End Line: 1611

							/* begin block 1.2.6.1.4.1.3 */
								// Start line: 1612
								// Start offset: 0x80096040

								/* begin block 1.2.6.1.4.1.3.1 */
									// Start line: 1612
									// Start offset: 0x80096040
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.2.6.1.4.1.3.1.1 */
										// Start line: 1612
										// Start offset: 0x80096040
									/* end block 1.2.6.1.4.1.3.1.1 */
									// End offset: 0x80096040
									// End Line: 1612
								/* end block 1.2.6.1.4.1.3.1 */
								// End offset: 0x80096040
								// End Line: 1612

								/* begin block 1.2.6.1.4.1.3.2 */
									// Start line: 1613
									// Start offset: 0x80096040
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.2.6.1.4.1.3.2.1 */
										// Start line: 1613
										// Start offset: 0x80096040
									/* end block 1.2.6.1.4.1.3.2.1 */
									// End offset: 0x80096040
									// End Line: 1613
								/* end block 1.2.6.1.4.1.3.2 */
								// End offset: 0x80096040
								// End Line: 1613

								/* begin block 1.2.6.1.4.1.3.3 */
									// Start line: 1613
									// Start offset: 0x80096040
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.2.6.1.4.1.3.3.1 */
										// Start line: 1613
										// Start offset: 0x80096040
									/* end block 1.2.6.1.4.1.3.3.1 */
									// End offset: 0x80096040
									// End Line: 1613
								/* end block 1.2.6.1.4.1.3.3 */
								// End offset: 0x80096040
								// End Line: 1613

								/* begin block 1.2.6.1.4.1.3.4 */
									// Start line: 1613
									// Start offset: 0x80096040
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.2.6.1.4.1.3.4.1 */
										// Start line: 1613
										// Start offset: 0x80096040
									/* end block 1.2.6.1.4.1.3.4.1 */
									// End offset: 0x80096040
									// End Line: 1613
								/* end block 1.2.6.1.4.1.3.4 */
								// End offset: 0x80096040
								// End Line: 1613
							/* end block 1.2.6.1.4.1.3 */
							// End offset: 0x80096040
							// End Line: 1613

							/* begin block 1.2.6.1.4.1.4 */
								// Start line: 1621
								// Start offset: 0x80096094

								/* begin block 1.2.6.1.4.1.4.1 */
									// Start line: 1621
									// Start offset: 0x80096094
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.2.6.1.4.1.4.1.1 */
										// Start line: 1621
										// Start offset: 0x80096094
									/* end block 1.2.6.1.4.1.4.1.1 */
									// End offset: 0x80096094
									// End Line: 1621
								/* end block 1.2.6.1.4.1.4.1 */
								// End offset: 0x80096094
								// End Line: 1621

								/* begin block 1.2.6.1.4.1.4.2 */
									// Start line: 1622
									// Start offset: 0x80096094
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.2.6.1.4.1.4.2.1 */
										// Start line: 1622
										// Start offset: 0x80096094
									/* end block 1.2.6.1.4.1.4.2.1 */
									// End offset: 0x80096094
									// End Line: 1622
								/* end block 1.2.6.1.4.1.4.2 */
								// End offset: 0x80096094
								// End Line: 1622

								/* begin block 1.2.6.1.4.1.4.3 */
									// Start line: 1622
									// Start offset: 0x80096094

									/* begin block 1.2.6.1.4.1.4.3.1 */
										// Start line: 1622
										// Start offset: 0x80096094
									/* end block 1.2.6.1.4.1.4.3.1 */
									// End offset: 0x80096094
									// End Line: 1622
								/* end block 1.2.6.1.4.1.4.3 */
								// End offset: 0x80096094
								// End Line: 1622

								/* begin block 1.2.6.1.4.1.4.4 */
									// Start line: 1622
									// Start offset: 0x80096094
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.2.6.1.4.1.4.4.1 */
										// Start line: 1622
										// Start offset: 0x80096094
									/* end block 1.2.6.1.4.1.4.4.1 */
									// End offset: 0x80096094
									// End Line: 1622
								/* end block 1.2.6.1.4.1.4.4 */
								// End offset: 0x80096094
								// End Line: 1622

								/* begin block 1.2.6.1.4.1.4.5 */
									// Start line: 1622
									// Start offset: 0x80096094

									/* begin block 1.2.6.1.4.1.4.5.1 */
										// Start line: 1622
										// Start offset: 0x80096094
										// Variables:
									// 		struct Speaker *this; // $s1

										/* begin block 1.2.6.1.4.1.4.5.1.1 */
											// Start line: 1622
											// Start offset: 0x80096094
										/* end block 1.2.6.1.4.1.4.5.1.1 */
										// End offset: 0x80096094
										// End Line: 1622
									/* end block 1.2.6.1.4.1.4.5.1 */
									// End offset: 0x80096094
									// End Line: 1622

									/* begin block 1.2.6.1.4.1.4.5.2 */
										// Start line: 1626
										// Start offset: 0x80096148

										/* begin block 1.2.6.1.4.1.4.5.2.1 */
											// Start line: 1626
											// Start offset: 0x80096148
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.6.1.4.1.4.5.2.1.1 */
												// Start line: 1626
												// Start offset: 0x80096148
											/* end block 1.2.6.1.4.1.4.5.2.1.1 */
											// End offset: 0x80096148
											// End Line: 1626
										/* end block 1.2.6.1.4.1.4.5.2.1 */
										// End offset: 0x80096148
										// End Line: 1626

										/* begin block 1.2.6.1.4.1.4.5.2.2 */
											// Start line: 1626
											// Start offset: 0x80096148
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.6.1.4.1.4.5.2.2.1 */
												// Start line: 1626
												// Start offset: 0x80096148
											/* end block 1.2.6.1.4.1.4.5.2.2.1 */
											// End offset: 0x80096148
											// End Line: 1626
										/* end block 1.2.6.1.4.1.4.5.2.2 */
										// End offset: 0x80096148
										// End Line: 1626

										/* begin block 1.2.6.1.4.1.4.5.2.3 */
											// Start line: 1626
											// Start offset: 0x80096148
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.6.1.4.1.4.5.2.3.1 */
												// Start line: 1626
												// Start offset: 0x80096148
											/* end block 1.2.6.1.4.1.4.5.2.3.1 */
											// End offset: 0x80096148
											// End Line: 1626
										/* end block 1.2.6.1.4.1.4.5.2.3 */
										// End offset: 0x80096148
										// End Line: 1626

										/* begin block 1.2.6.1.4.1.4.5.2.4 */
											// Start line: 1626
											// Start offset: 0x80096148
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.6.1.4.1.4.5.2.4.1 */
												// Start line: 1626
												// Start offset: 0x80096148
											/* end block 1.2.6.1.4.1.4.5.2.4.1 */
											// End offset: 0x80096148
											// End Line: 1626
										/* end block 1.2.6.1.4.1.4.5.2.4 */
										// End offset: 0x80096148
										// End Line: 1626

										/* begin block 1.2.6.1.4.1.4.5.2.5 */
											// Start line: 1626
											// Start offset: 0x80096148
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.6.1.4.1.4.5.2.5.1 */
												// Start line: 1626
												// Start offset: 0x80096148
											/* end block 1.2.6.1.4.1.4.5.2.5.1 */
											// End offset: 0x80096148
											// End Line: 1626
										/* end block 1.2.6.1.4.1.4.5.2.5 */
										// End offset: 0x80096148
										// End Line: 1626
									/* end block 1.2.6.1.4.1.4.5.2 */
									// End offset: 0x80096148
									// End Line: 1626

									/* begin block 1.2.6.1.4.1.4.5.3 */
										// Start line: 1628
										// Start offset: 0x80096168

										/* begin block 1.2.6.1.4.1.4.5.3.1 */
											// Start line: 1628
											// Start offset: 0x80096168
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.6.1.4.1.4.5.3.1.1 */
												// Start line: 1628
												// Start offset: 0x80096168
											/* end block 1.2.6.1.4.1.4.5.3.1.1 */
											// End offset: 0x80096168
											// End Line: 1628
										/* end block 1.2.6.1.4.1.4.5.3.1 */
										// End offset: 0x80096168
										// End Line: 1628

										/* begin block 1.2.6.1.4.1.4.5.3.2 */
											// Start line: 1628
											// Start offset: 0x80096168
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.6.1.4.1.4.5.3.2.1 */
												// Start line: 1628
												// Start offset: 0x80096168
											/* end block 1.2.6.1.4.1.4.5.3.2.1 */
											// End offset: 0x80096168
											// End Line: 1628
										/* end block 1.2.6.1.4.1.4.5.3.2 */
										// End offset: 0x80096168
										// End Line: 1628

										/* begin block 1.2.6.1.4.1.4.5.3.3 */
											// Start line: 1628
											// Start offset: 0x80096168
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.6.1.4.1.4.5.3.3.1 */
												// Start line: 1628
												// Start offset: 0x80096168
											/* end block 1.2.6.1.4.1.4.5.3.3.1 */
											// End offset: 0x80096168
											// End Line: 1628
										/* end block 1.2.6.1.4.1.4.5.3.3 */
										// End offset: 0x80096168
										// End Line: 1628

										/* begin block 1.2.6.1.4.1.4.5.3.4 */
											// Start line: 1628
											// Start offset: 0x80096168
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.6.1.4.1.4.5.3.4.1 */
												// Start line: 1628
												// Start offset: 0x80096168
											/* end block 1.2.6.1.4.1.4.5.3.4.1 */
											// End offset: 0x80096168
											// End Line: 1628
										/* end block 1.2.6.1.4.1.4.5.3.4 */
										// End offset: 0x80096168
										// End Line: 1628

										/* begin block 1.2.6.1.4.1.4.5.3.5 */
											// Start line: 1628
											// Start offset: 0x80096168
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.6.1.4.1.4.5.3.5.1 */
												// Start line: 1628
												// Start offset: 0x80096168
											/* end block 1.2.6.1.4.1.4.5.3.5.1 */
											// End offset: 0x80096168
											// End Line: 1628
										/* end block 1.2.6.1.4.1.4.5.3.5 */
										// End offset: 0x80096168
										// End Line: 1628
									/* end block 1.2.6.1.4.1.4.5.3 */
									// End offset: 0x80096180
									// End Line: 1628
								/* end block 1.2.6.1.4.1.4.5 */
								// End offset: 0x80096180
								// End Line: 1628
							/* end block 1.2.6.1.4.1.4 */
							// End offset: 0x80096188
							// End Line: 1630
						/* end block 1.2.6.1.4.1 */
						// End offset: 0x80096188
						// End Line: 1630
					/* end block 1.2.6.1.4 */
					// End offset: 0x80096188
					// End Line: 1630
				/* end block 1.2.6.1 */
				// End offset: 0x80096188
				// End Line: 1630
			/* end block 1.2.6 */
			// End offset: 0x80096188
			// End Line: 1630
		/* end block 1.2 */
		// End offset: 0x80096188
		// End Line: 1630
	/* end block 1 */
	// End offset: 0x80096188
	// End Line: 1630

void Roger__Q26Speech15DispatchSpeaker(DispatchSpeaker *this)

{
  bool bVar1;
  uint uVar2;
  int ID_UNIT;
  int iVar3;
  Car_tObj *car;
  Speaker *pSVar4;
  SPCHNFSType_COLOUR *COLOUR;
  
  *(undefined4 *)(DAT_00000838 + 0x38c) = 0;
  pSVar4 = (this->Speaker).fSub;
  bVar1 = false;
  if (((pSVar4 == (Speaker *)0x0) ||
      (uVar2 = pSVar4->_vf[0].value,
      ID_UNIT = (**(code **)(uVar2 + 0xdc))
                          ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0xd8)),
      ID_UNIT == 0)) || ((((this->Speaker).fSub)->fBlockade).flags != 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    SPCHNFS_D_A_CONFIRM(&(this->Speaker).fConfirm);
  }
  else {
    pSVar4 = (this->Speaker).fSub;
    if ((pSVar4->fArrest).flags == 0) {
      if ((pSVar4->fUpdate).flags == 0) {
        SPCHNFS_D_A_CONFIRM(&(this->Speaker).fConfirm);
        SPCH_PlaySpeech();
        pSVar4 = (this->Speaker).fSub;
        uVar2 = pSVar4->_vf[0].value;
        car = (Car_tObj *)
              (**(code **)(uVar2 + 0xdc))
                        ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0xd8));
        SetCar__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
        SPCHNFS_D_C_PERP_LOST_CONFIRM(&(this->Speaker).fColour,(this->Speaker).fCar);
      }
      else {
        uVar2 = pSVar4->_vf[0].value;
        car = (Car_tObj *)
              (**(code **)(uVar2 + 0xdc))
                        ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0xd8));
        SetCar__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
        uVar2 = (this->Speaker)._vf[0].value;
        ID_UNIT = (**(code **)(uVar2 + 0xf4))
                            ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xf0));
        pSVar4 = (this->Speaker).fSub;
        uVar2 = pSVar4->_vf[0].value;
        iVar3 = (**(code **)(uVar2 + 0x8c))
                          ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0x88));
        pSVar4 = (this->Speaker).fSub;
        (this->Speaker).fTo = *(int *)(ID_UNIT + iVar3 * 4 + 8);
        uVar2 = pSVar4->_vf[0].value;
        ID_UNIT = (**(code **)(uVar2 + 0xc4))
                            ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0xc0));
        COLOUR = &(this->Speaker).fColour;
        if (ID_UNIT < 0x280000) {
          SPCHNFS_D_C_IN_PURS_NEAR_PERP_CONFIRM
                    (COLOUR,(this->Speaker).fCar,(this->Speaker).fTo,&(this->Speaker).fConfirm,
                     &(this->Speaker).fPerpName);
        }
        else {
          SPCHNFS_D_C_IN_PURS_AWAY_PERP_CONFIRM
                    (COLOUR,(this->Speaker).fCar,(this->Speaker).fTo,&(this->Speaker).fConfirm,
                     &(this->Speaker).fPerpName);
        }
      }
    }
    else {
      uVar2 = (this->Speaker)._vf[0].value;
      ID_UNIT = (**(code **)(uVar2 + 0xf4))
                          ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xf0));
      pSVar4 = (this->Speaker).fSub;
      uVar2 = pSVar4->_vf[0].value;
      iVar3 = (**(code **)(uVar2 + 0x8c))
                        ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0x88));
      ID_UNIT = *(int *)(ID_UNIT + iVar3 * 4 + 8);
      (this->Speaker).fTo = ID_UNIT;
      SPCHNFS_D_C_PERP_APPREHENSION_REPLY
                (ID_UNIT,&(this->Speaker).fConfirm,&(this->Speaker).fPerpName);
    }
  }
  SPCH_PlaySpeech();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StatusReply__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this /*$s1*/)
 // line 1636, offset 0x8009619c
	/* begin block 1 */
		// Start line: 1637
		// Start offset: 0x8009619C
		// Variables:
	// 		struct Speaker *Blocker; // $s2

		/* begin block 1.1 */
			// Start line: 1637
			// Start offset: 0x8009619C

			/* begin block 1.1.1 */
				// Start line: 1637
				// Start offset: 0x8009619C
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 1637
					// Start offset: 0x8009619C
				/* end block 1.1.1.1 */
				// End offset: 0x8009619C
				// End Line: 1637
			/* end block 1.1.1 */
			// End offset: 0x8009619C
			// End Line: 1637

			/* begin block 1.1.2 */
				// Start line: 1639
				// Start offset: 0x800961C4
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.1.2.1 */
					// Start line: 1639
					// Start offset: 0x800961C4
				/* end block 1.1.2.1 */
				// End offset: 0x800961C4
				// End Line: 1639
			/* end block 1.1.2 */
			// End offset: 0x800961C4
			// End Line: 1639
		/* end block 1.1 */
		// End offset: 0x800961F4
		// End Line: 1640

		/* begin block 1.2 */
			// Start line: 1642
			// Start offset: 0x800961F4
			// Variables:
		// 		struct DispatchSpeaker *this; // $s1

			/* begin block 1.2.1 */
				// Start line: 1642
				// Start offset: 0x800961F4

				/* begin block 1.2.1.1 */
					// Start line: 1642
					// Start offset: 0x800961F4
					// Variables:
				// 		struct Speech *this; // $a0

					/* begin block 1.2.1.1.1 */
						// Start line: 1642
						// Start offset: 0x800961F4
					/* end block 1.2.1.1.1 */
					// End offset: 0x800961F4
					// End Line: 1642
				/* end block 1.2.1.1 */
				// End offset: 0x800961F4
				// End Line: 1642
			/* end block 1.2.1 */
			// End offset: 0x800961F4
			// End Line: 1642
		/* end block 1.2 */
		// End offset: 0x800961F4
		// End Line: 1642

		/* begin block 1.3 */
			// Start line: 1642
			// Start offset: 0x800961F4

			/* begin block 1.3.1 */
				// Start line: 1642
				// Start offset: 0x800961F4
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.3.1.1 */
					// Start line: 1642
					// Start offset: 0x800961F4
				/* end block 1.3.1.1 */
				// End offset: 0x800961F4
				// End Line: 1642
			/* end block 1.3.1 */
			// End offset: 0x800961F4
			// End Line: 1642

			/* begin block 1.3.2 */
				// Start line: 1642
				// Start offset: 0x800961F4

				/* begin block 1.3.2.1 */
					// Start line: 1642
					// Start offset: 0x800961F4
				/* end block 1.3.2.1 */
				// End offset: 0x800961F4
				// End Line: 1642
			/* end block 1.3.2 */
			// End offset: 0x800961F4
			// End Line: 1642

			/* begin block 1.3.3 */
				// Start line: 1647
				// Start offset: 0x80096218

				/* begin block 1.3.3.1 */
					// Start line: 1648
					// Start offset: 0x80096218

					/* begin block 1.3.3.1.1 */
						// Start line: 1648
						// Start offset: 0x80096218

						/* begin block 1.3.3.1.1.1 */
							// Start line: 1648
							// Start offset: 0x80096218
						/* end block 1.3.3.1.1.1 */
						// End offset: 0x80096218
						// End Line: 1648
					/* end block 1.3.3.1.1 */
					// End offset: 0x80096218
					// End Line: 1648

					/* begin block 1.3.3.1.2 */
						// Start line: 1649
						// Start offset: 0x80096228

						/* begin block 1.3.3.1.2.1 */
							// Start line: 1649
							// Start offset: 0x80096228
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.3.3.1.2.1.1 */
								// Start line: 1649
								// Start offset: 0x80096228
							/* end block 1.3.3.1.2.1.1 */
							// End offset: 0x80096228
							// End Line: 1649
						/* end block 1.3.3.1.2.1 */
						// End offset: 0x80096228
						// End Line: 1649
					/* end block 1.3.3.1.2 */
					// End offset: 0x8009624C
					// End Line: 1651

					/* begin block 1.3.3.1.3 */
						// Start line: 1654
						// Start offset: 0x8009624C

						/* begin block 1.3.3.1.3.1 */
							// Start line: 1656
							// Start offset: 0x8009624C

							/* begin block 1.3.3.1.3.1.1 */
								// Start line: 1656
								// Start offset: 0x8009624C
								// Variables:
							// 		struct Speaker *this; // $s1

								/* begin block 1.3.3.1.3.1.1.1 */
									// Start line: 1656
									// Start offset: 0x8009624C
								/* end block 1.3.3.1.3.1.1.1 */
								// End offset: 0x8009624C
								// End Line: 1656
							/* end block 1.3.3.1.3.1.1 */
							// End offset: 0x8009624C
							// End Line: 1656

							/* begin block 1.3.3.1.3.1.2 */
								// Start line: 1656
								// Start offset: 0x8009624C

								/* begin block 1.3.3.1.3.1.2.1 */
									// Start line: 1656
									// Start offset: 0x8009624C
								/* end block 1.3.3.1.3.1.2.1 */
								// End offset: 0x8009624C
								// End Line: 1656
							/* end block 1.3.3.1.3.1.2 */
							// End offset: 0x8009624C
							// End Line: 1656

							/* begin block 1.3.3.1.3.1.3 */
								// Start line: 1656
								// Start offset: 0x8009625C
								// Variables:
							// 		struct Speaker *this; // $s1

								/* begin block 1.3.3.1.3.1.3.1 */
									// Start line: 1656
									// Start offset: 0x8009625C
								/* end block 1.3.3.1.3.1.3.1 */
								// End offset: 0x8009625C
								// End Line: 1656
							/* end block 1.3.3.1.3.1.3 */
							// End offset: 0x8009625C
							// End Line: 1656

							/* begin block 1.3.3.1.3.1.4 */
								// Start line: 1656
								// Start offset: 0x8009625C

								/* begin block 1.3.3.1.3.1.4.1 */
									// Start line: 1656
									// Start offset: 0x8009625C
								/* end block 1.3.3.1.3.1.4.1 */
								// End offset: 0x8009625C
								// End Line: 1656
							/* end block 1.3.3.1.3.1.4 */
							// End offset: 0x8009625C
							// End Line: 1656

							/* begin block 1.3.3.1.3.1.5 */
								// Start line: 1656
								// Start offset: 0x8009625C

								/* begin block 1.3.3.1.3.1.5.1 */
									// Start line: 1656
									// Start offset: 0x8009625C
								/* end block 1.3.3.1.3.1.5.1 */
								// End offset: 0x8009625C
								// End Line: 1656
							/* end block 1.3.3.1.3.1.5 */
							// End offset: 0x8009625C
							// End Line: 1656

							/* begin block 1.3.3.1.3.1.6 */
								// Start line: 1657
								// Start offset: 0x80096270

								/* begin block 1.3.3.1.3.1.6.1 */
									// Start line: 1657
									// Start offset: 0x80096270
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.3.3.1.3.1.6.1.1 */
										// Start line: 1657
										// Start offset: 0x80096270
									/* end block 1.3.3.1.3.1.6.1.1 */
									// End offset: 0x80096270
									// End Line: 1657
								/* end block 1.3.3.1.3.1.6.1 */
								// End offset: 0x80096270
								// End Line: 1657

								/* begin block 1.3.3.1.3.1.6.2 */
									// Start line: 1657
									// Start offset: 0x80096270

									/* begin block 1.3.3.1.3.1.6.2.1 */
										// Start line: 1657
										// Start offset: 0x80096270
									/* end block 1.3.3.1.3.1.6.2.1 */
									// End offset: 0x80096270
									// End Line: 1657
								/* end block 1.3.3.1.3.1.6.2 */
								// End offset: 0x80096270
								// End Line: 1657

								/* begin block 1.3.3.1.3.1.6.3 */
									// Start line: 1657
									// Start offset: 0x80096270
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.3.3.1.3.1.6.3.1 */
										// Start line: 1657
										// Start offset: 0x80096270
									/* end block 1.3.3.1.3.1.6.3.1 */
									// End offset: 0x80096270
									// End Line: 1657
								/* end block 1.3.3.1.3.1.6.3 */
								// End offset: 0x80096270
								// End Line: 1657

								/* begin block 1.3.3.1.3.1.6.4 */
									// Start line: 1657
									// Start offset: 0x80096270

									/* begin block 1.3.3.1.3.1.6.4.1 */
										// Start line: 1657
										// Start offset: 0x80096270
									/* end block 1.3.3.1.3.1.6.4.1 */
									// End offset: 0x80096270
									// End Line: 1657
								/* end block 1.3.3.1.3.1.6.4 */
								// End offset: 0x80096270
								// End Line: 1657

								/* begin block 1.3.3.1.3.1.6.5 */
									// Start line: 1657
									// Start offset: 0x80096270
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.3.3.1.3.1.6.5.1 */
										// Start line: 1657
										// Start offset: 0x80096270
									/* end block 1.3.3.1.3.1.6.5.1 */
									// End offset: 0x80096270
									// End Line: 1657
								/* end block 1.3.3.1.3.1.6.5 */
								// End offset: 0x80096270
								// End Line: 1657
							/* end block 1.3.3.1.3.1.6 */
							// End offset: 0x80096270
							// End Line: 1657

							/* begin block 1.3.3.1.3.1.7 */
								// Start line: 1662
								// Start offset: 0x800962CC

								/* begin block 1.3.3.1.3.1.7.1 */
									// Start line: 1662
									// Start offset: 0x800962CC
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.3.3.1.3.1.7.1.1 */
										// Start line: 1662
										// Start offset: 0x800962CC
									/* end block 1.3.3.1.3.1.7.1.1 */
									// End offset: 0x800962CC
									// End Line: 1662
								/* end block 1.3.3.1.3.1.7.1 */
								// End offset: 0x800962CC
								// End Line: 1662

								/* begin block 1.3.3.1.3.1.7.2 */
									// Start line: 1662
									// Start offset: 0x800962CC

									/* begin block 1.3.3.1.3.1.7.2.1 */
										// Start line: 1662
										// Start offset: 0x800962CC
									/* end block 1.3.3.1.3.1.7.2.1 */
									// End offset: 0x800962CC
									// End Line: 1662
								/* end block 1.3.3.1.3.1.7.2 */
								// End offset: 0x800962CC
								// End Line: 1662

								/* begin block 1.3.3.1.3.1.7.3 */
									// Start line: 1662
									// Start offset: 0x800962CC
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.3.3.1.3.1.7.3.1 */
										// Start line: 1662
										// Start offset: 0x800962CC
									/* end block 1.3.3.1.3.1.7.3.1 */
									// End offset: 0x800962F4
									// End Line: 1664
								/* end block 1.3.3.1.3.1.7.3 */
								// End offset: 0x800962F4
								// End Line: 1664
							/* end block 1.3.3.1.3.1.7 */
							// End offset: 0x800962F4
							// End Line: 1664
						/* end block 1.3.3.1.3.1 */
						// End offset: 0x800962F4
						// End Line: 1664

						/* begin block 1.3.3.1.3.2 */
							// Start line: 1666
							// Start offset: 0x800962F4
							// Variables:
						// 		struct DispatchSpeaker *this; // $s1

							/* begin block 1.3.3.1.3.2.1 */
								// Start line: 1666
								// Start offset: 0x800962F4

								/* begin block 1.3.3.1.3.2.1.1 */
									// Start line: 1666
									// Start offset: 0x800962F4
									// Variables:
								// 		struct Speech *this; // $v0

									/* begin block 1.3.3.1.3.2.1.1.1 */
										// Start line: 1666
										// Start offset: 0x800962F4
									/* end block 1.3.3.1.3.2.1.1.1 */
									// End offset: 0x800962F4
									// End Line: 1666
								/* end block 1.3.3.1.3.2.1.1 */
								// End offset: 0x800962F4
								// End Line: 1666
							/* end block 1.3.3.1.3.2.1 */
							// End offset: 0x800962F4
							// End Line: 1666
						/* end block 1.3.3.1.3.2 */
						// End offset: 0x800962F4
						// End Line: 1666

						/* begin block 1.3.3.1.3.3 */
							// Start line: 1666
							// Start offset: 0x800962F4
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.3.3.1.3.3.1 */
								// Start line: 1666
								// Start offset: 0x800962F4
							/* end block 1.3.3.1.3.3.1 */
							// End offset: 0x800962F4
							// End Line: 1666
						/* end block 1.3.3.1.3.3 */
						// End offset: 0x800962F4
						// End Line: 1666

						/* begin block 1.3.3.1.3.4 */
							// Start line: 1666
							// Start offset: 0x800962F4
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.3.3.1.3.4.1 */
								// Start line: 1666
								// Start offset: 0x800962F4
							/* end block 1.3.3.1.3.4.1 */
							// End offset: 0x800962F4
							// End Line: 1666
						/* end block 1.3.3.1.3.4 */
						// End offset: 0x800962F4
						// End Line: 1666

						/* begin block 1.3.3.1.3.5 */
							// Start line: 1666
							// Start offset: 0x800962F4
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.3.3.1.3.5.1 */
								// Start line: 1666
								// Start offset: 0x800962F4
							/* end block 1.3.3.1.3.5.1 */
							// End offset: 0x800962F4
							// End Line: 1666
						/* end block 1.3.3.1.3.5 */
						// End offset: 0x800962F4
						// End Line: 1666

						/* begin block 1.3.3.1.3.6 */
							// Start line: 1666
							// Start offset: 0x800962F4
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.3.3.1.3.6.1 */
								// Start line: 1666
								// Start offset: 0x800962F4
							/* end block 1.3.3.1.3.6.1 */
							// End offset: 0x800962F4
							// End Line: 1666
						/* end block 1.3.3.1.3.6 */
						// End offset: 0x800962F4
						// End Line: 1666
					/* end block 1.3.3.1.3 */
					// End offset: 0x800962F4
					// End Line: 1666
				/* end block 1.3.3.1 */
				// End offset: 0x800962F4
				// End Line: 1666
			/* end block 1.3.3 */
			// End offset: 0x800962F4
			// End Line: 1666

			/* begin block 1.3.4 */
				// Start line: 1676
				// Start offset: 0x80096338

				/* begin block 1.3.4.1 */
					// Start line: 1677
					// Start offset: 0x80096338
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.3.4.1.1 */
						// Start line: 1677
						// Start offset: 0x80096338
					/* end block 1.3.4.1.1 */
					// End offset: 0x80096338
					// End Line: 1677
				/* end block 1.3.4.1 */
				// End offset: 0x80096338
				// End Line: 1677

				/* begin block 1.3.4.2 */
					// Start line: 1677
					// Start offset: 0x80096338

					/* begin block 1.3.4.2.1 */
						// Start line: 1677
						// Start offset: 0x80096338
					/* end block 1.3.4.2.1 */
					// End offset: 0x80096338
					// End Line: 1677
				/* end block 1.3.4.2 */
				// End offset: 0x80096338
				// End Line: 1677

				/* begin block 1.3.4.3 */
					// Start line: 1677
					// Start offset: 0x80096338
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.3.4.3.1 */
						// Start line: 1677
						// Start offset: 0x80096338
					/* end block 1.3.4.3.1 */
					// End offset: 0x80096338
					// End Line: 1677
				/* end block 1.3.4.3 */
				// End offset: 0x80096338
				// End Line: 1677

				/* begin block 1.3.4.4 */
					// Start line: 1677
					// Start offset: 0x80096338
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.3.4.4.1 */
						// Start line: 1677
						// Start offset: 0x80096338
					/* end block 1.3.4.4.1 */
					// End offset: 0x80096338
					// End Line: 1677
				/* end block 1.3.4.4 */
				// End offset: 0x80096338
				// End Line: 1677

				/* begin block 1.3.4.5 */
					// Start line: 1677
					// Start offset: 0x80096338
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.3.4.5.1 */
						// Start line: 1677
						// Start offset: 0x80096338
					/* end block 1.3.4.5.1 */
					// End offset: 0x80096338
					// End Line: 1677
				/* end block 1.3.4.5 */
				// End offset: 0x80096338
				// End Line: 1677

				/* begin block 1.3.4.6 */
					// Start line: 1677
					// Start offset: 0x80096338
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.3.4.6.1 */
						// Start line: 1677
						// Start offset: 0x80096338
					/* end block 1.3.4.6.1 */
					// End offset: 0x80096338
					// End Line: 1677
				/* end block 1.3.4.6 */
				// End offset: 0x80096338
				// End Line: 1677
			/* end block 1.3.4 */
			// End offset: 0x800963A8
			// End Line: 1679
		/* end block 1.3 */
		// End offset: 0x800963A8
		// End Line: 1679

		/* begin block 1.4 */
			// Start line: 1679
			// Start offset: 0x800963A8
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.4.1 */
				// Start line: 1679
				// Start offset: 0x800963A8
			/* end block 1.4.1 */
			// End offset: 0x800963A8
			// End Line: 1679
		/* end block 1.4 */
		// End offset: 0x800963A8
		// End Line: 1679

		/* begin block 1.5 */
			// Start line: 1679
			// Start offset: 0x800963A8

			/* begin block 1.5.1 */
				// Start line: 1679
				// Start offset: 0x800963A8
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.5.1.1 */
					// Start line: 1679
					// Start offset: 0x800963A8
				/* end block 1.5.1.1 */
				// End offset: 0x800963A8
				// End Line: 1679
			/* end block 1.5.1 */
			// End offset: 0x800963A8
			// End Line: 1679

			/* begin block 1.5.2 */
				// Start line: 1679
				// Start offset: 0x800963A8

				/* begin block 1.5.2.1 */
					// Start line: 1679
					// Start offset: 0x800963A8
				/* end block 1.5.2.1 */
				// End offset: 0x800963A8
				// End Line: 1679
			/* end block 1.5.2 */
			// End offset: 0x800963A8
			// End Line: 1679

			/* begin block 1.5.3 */
				// Start line: 1685
				// Start offset: 0x800963F0

				/* begin block 1.5.3.1 */
					// Start line: 1686
					// Start offset: 0x800963F0

					/* begin block 1.5.3.1.1 */
						// Start line: 1686
						// Start offset: 0x800963F0
					/* end block 1.5.3.1.1 */
					// End offset: 0x800963F0
					// End Line: 1686
				/* end block 1.5.3.1 */
				// End offset: 0x800963F0
				// End Line: 1686

				/* begin block 1.5.3.2 */
					// Start line: 1686
					// Start offset: 0x800963F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.3.2.1 */
						// Start line: 1686
						// Start offset: 0x800963F0
					/* end block 1.5.3.2.1 */
					// End offset: 0x800963F0
					// End Line: 1686
				/* end block 1.5.3.2 */
				// End offset: 0x800963F0
				// End Line: 1686

				/* begin block 1.5.3.3 */
					// Start line: 1686
					// Start offset: 0x800963F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.3.3.1 */
						// Start line: 1686
						// Start offset: 0x800963F0
					/* end block 1.5.3.3.1 */
					// End offset: 0x800963F0
					// End Line: 1686
				/* end block 1.5.3.3 */
				// End offset: 0x800963F0
				// End Line: 1686

				/* begin block 1.5.3.4 */
					// Start line: 1686
					// Start offset: 0x800963F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.3.4.1 */
						// Start line: 1686
						// Start offset: 0x800963F0
					/* end block 1.5.3.4.1 */
					// End offset: 0x800963F0
					// End Line: 1686
				/* end block 1.5.3.4 */
				// End offset: 0x800963F0
				// End Line: 1686

				/* begin block 1.5.3.5 */
					// Start line: 1686
					// Start offset: 0x800963F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.3.5.1 */
						// Start line: 1686
						// Start offset: 0x800963F0
					/* end block 1.5.3.5.1 */
					// End offset: 0x800963F0
					// End Line: 1686
				/* end block 1.5.3.5 */
				// End offset: 0x800963F0
				// End Line: 1686

				/* begin block 1.5.3.6 */
					// Start line: 1686
					// Start offset: 0x800963F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.3.6.1 */
						// Start line: 1686
						// Start offset: 0x800963F0
					/* end block 1.5.3.6.1 */
					// End offset: 0x800963F0
					// End Line: 1686
				/* end block 1.5.3.6 */
				// End offset: 0x800963F0
				// End Line: 1686

				/* begin block 1.5.3.7 */
					// Start line: 1686
					// Start offset: 0x800963F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.3.7.1 */
						// Start line: 1686
						// Start offset: 0x800963F0
					/* end block 1.5.3.7.1 */
					// End offset: 0x800963F0
					// End Line: 1686
				/* end block 1.5.3.7 */
				// End offset: 0x800963F0
				// End Line: 1686

				/* begin block 1.5.3.8 */
					// Start line: 1686
					// Start offset: 0x800963F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.3.8.1 */
						// Start line: 1686
						// Start offset: 0x800963F0
					/* end block 1.5.3.8.1 */
					// End offset: 0x800963F0
					// End Line: 1686
				/* end block 1.5.3.8 */
				// End offset: 0x800963F0
				// End Line: 1686

				/* begin block 1.5.3.9 */
					// Start line: 1686
					// Start offset: 0x800963F0

					/* begin block 1.5.3.9.1 */
						// Start line: 1686
						// Start offset: 0x800963F0
						// Variables:
					// 		struct Speaker *this; // $s1

						/* begin block 1.5.3.9.1.1 */
							// Start line: 1686
							// Start offset: 0x800963F0
						/* end block 1.5.3.9.1.1 */
						// End offset: 0x800963F0
						// End Line: 1686
					/* end block 1.5.3.9.1 */
					// End offset: 0x800963F0
					// End Line: 1686

					/* begin block 1.5.3.9.2 */
						// Start line: 1692
						// Start offset: 0x8009645C

						/* begin block 1.5.3.9.2.1 */
							// Start line: 1692
							// Start offset: 0x8009645C
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.5.3.9.2.1.1 */
								// Start line: 1692
								// Start offset: 0x8009645C
							/* end block 1.5.3.9.2.1.1 */
							// End offset: 0x8009645C
							// End Line: 1692
						/* end block 1.5.3.9.2.1 */
						// End offset: 0x8009645C
						// End Line: 1692
					/* end block 1.5.3.9.2 */
					// End offset: 0x8009645C
					// End Line: 1692
				/* end block 1.5.3.9 */
				// End offset: 0x8009645C
				// End Line: 1692
			/* end block 1.5.3 */
			// End offset: 0x8009645C
			// End Line: 1692

			/* begin block 1.5.4 */
				// Start line: 1694
				// Start offset: 0x80096464

				/* begin block 1.5.4.1 */
					// Start line: 1694
					// Start offset: 0x80096464

					/* begin block 1.5.4.1.1 */
						// Start line: 1694
						// Start offset: 0x80096464
						// Variables:
					// 		struct Speaker *this; // $s1

						/* begin block 1.5.4.1.1.1 */
							// Start line: 1694
							// Start offset: 0x80096464
						/* end block 1.5.4.1.1.1 */
						// End offset: 0x80096464
						// End Line: 1694
					/* end block 1.5.4.1.1 */
					// End offset: 0x80096464
					// End Line: 1694

					/* begin block 1.5.4.1.2 */
						// Start line: 1694
						// Start offset: 0x80096464

						/* begin block 1.5.4.1.2.1 */
							// Start line: 1694
							// Start offset: 0x80096464
						/* end block 1.5.4.1.2.1 */
						// End offset: 0x80096464
						// End Line: 1694
					/* end block 1.5.4.1.2 */
					// End offset: 0x80096464
					// End Line: 1694

					/* begin block 1.5.4.1.3 */
						// Start line: 1695
						// Start offset: 0x8009646C

						/* begin block 1.5.4.1.3.1 */
							// Start line: 1695
							// Start offset: 0x8009646C
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.5.4.1.3.1.1 */
								// Start line: 1695
								// Start offset: 0x8009646C
							/* end block 1.5.4.1.3.1.1 */
							// End offset: 0x8009646C
							// End Line: 1695
						/* end block 1.5.4.1.3.1 */
						// End offset: 0x8009646C
						// End Line: 1695

						/* begin block 1.5.4.1.3.2 */
							// Start line: 1695
							// Start offset: 0x8009646C
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.5.4.1.3.2.1 */
								// Start line: 1695
								// Start offset: 0x8009646C
							/* end block 1.5.4.1.3.2.1 */
							// End offset: 0x8009646C
							// End Line: 1695
						/* end block 1.5.4.1.3.2 */
						// End offset: 0x8009646C
						// End Line: 1695

						/* begin block 1.5.4.1.3.3 */
							// Start line: 1695
							// Start offset: 0x8009646C
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.5.4.1.3.3.1 */
								// Start line: 1695
								// Start offset: 0x8009646C
							/* end block 1.5.4.1.3.3.1 */
							// End offset: 0x8009646C
							// End Line: 1695
						/* end block 1.5.4.1.3.3 */
						// End offset: 0x8009646C
						// End Line: 1695

						/* begin block 1.5.4.1.3.4 */
							// Start line: 1696
							// Start offset: 0x8009646C

							/* begin block 1.5.4.1.3.4.1 */
								// Start line: 1696
								// Start offset: 0x8009646C
								// Variables:
							// 		struct Speaker *this; // $s1

								/* begin block 1.5.4.1.3.4.1.1 */
									// Start line: 1696
									// Start offset: 0x8009646C
								/* end block 1.5.4.1.3.4.1.1 */
								// End offset: 0x8009646C
								// End Line: 1696
							/* end block 1.5.4.1.3.4.1 */
							// End offset: 0x8009646C
							// End Line: 1696

							/* begin block 1.5.4.1.3.4.2 */
								// Start line: 1700
								// Start offset: 0x80096494

								/* begin block 1.5.4.1.3.4.2.1 */
									// Start line: 1700
									// Start offset: 0x80096494
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.5.4.1.3.4.2.1.1 */
										// Start line: 1700
										// Start offset: 0x80096494
									/* end block 1.5.4.1.3.4.2.1.1 */
									// End offset: 0x80096494
									// End Line: 1700
								/* end block 1.5.4.1.3.4.2.1 */
								// End offset: 0x80096494
								// End Line: 1700
							/* end block 1.5.4.1.3.4.2 */
							// End offset: 0x80096494
							// End Line: 1700
						/* end block 1.5.4.1.3.4 */
						// End offset: 0x80096494
						// End Line: 1700
					/* end block 1.5.4.1.3 */
					// End offset: 0x80096494
					// End Line: 1700

					/* begin block 1.5.4.1.4 */
						// Start line: 1702
						// Start offset: 0x800964B8

						/* begin block 1.5.4.1.4.1 */
							// Start line: 1702
							// Start offset: 0x800964B8

							/* begin block 1.5.4.1.4.1.1 */
								// Start line: 1702
								// Start offset: 0x800964B8
								// Variables:
							// 		struct Speaker *this; // $s1

								/* begin block 1.5.4.1.4.1.1.1 */
									// Start line: 1702
									// Start offset: 0x800964B8
								/* end block 1.5.4.1.4.1.1.1 */
								// End offset: 0x800964B8
								// End Line: 1702
							/* end block 1.5.4.1.4.1.1 */
							// End offset: 0x800964B8
							// End Line: 1702

							/* begin block 1.5.4.1.4.1.2 */
								// Start line: 1702
								// Start offset: 0x800964B8

								/* begin block 1.5.4.1.4.1.2.1 */
									// Start line: 1702
									// Start offset: 0x800964B8
								/* end block 1.5.4.1.4.1.2.1 */
								// End offset: 0x800964B8
								// End Line: 1702
							/* end block 1.5.4.1.4.1.2 */
							// End offset: 0x800964B8
							// End Line: 1702

							/* begin block 1.5.4.1.4.1.3 */
								// Start line: 1703
								// Start offset: 0x800964C8

								/* begin block 1.5.4.1.4.1.3.1 */
									// Start line: 1704
									// Start offset: 0x800964C8
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.5.4.1.4.1.3.1.1 */
										// Start line: 1704
										// Start offset: 0x800964C8
									/* end block 1.5.4.1.4.1.3.1.1 */
									// End offset: 0x800964C8
									// End Line: 1704
								/* end block 1.5.4.1.4.1.3.1 */
								// End offset: 0x800964C8
								// End Line: 1704

								/* begin block 1.5.4.1.4.1.3.2 */
									// Start line: 1704
									// Start offset: 0x800964C8

									/* begin block 1.5.4.1.4.1.3.2.1 */
										// Start line: 1704
										// Start offset: 0x800964C8
									/* end block 1.5.4.1.4.1.3.2.1 */
									// End offset: 0x800964C8
									// End Line: 1704
								/* end block 1.5.4.1.4.1.3.2 */
								// End offset: 0x800964C8
								// End Line: 1704

								/* begin block 1.5.4.1.4.1.3.3 */
									// Start line: 1704
									// Start offset: 0x800964C8

									/* begin block 1.5.4.1.4.1.3.3.1 */
										// Start line: 1704
										// Start offset: 0x800964C8
									/* end block 1.5.4.1.4.1.3.3.1 */
									// End offset: 0x800964C8
									// End Line: 1704
								/* end block 1.5.4.1.4.1.3.3 */
								// End offset: 0x800964C8
								// End Line: 1704

								/* begin block 1.5.4.1.4.1.3.4 */
									// Start line: 1704
									// Start offset: 0x800964C8
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.5.4.1.4.1.3.4.1 */
										// Start line: 1704
										// Start offset: 0x800964C8
									/* end block 1.5.4.1.4.1.3.4.1 */
									// End offset: 0x800964C8
									// End Line: 1704
								/* end block 1.5.4.1.4.1.3.4 */
								// End offset: 0x800964C8
								// End Line: 1704

								/* begin block 1.5.4.1.4.1.3.5 */
									// Start line: 1704
									// Start offset: 0x800964C8
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.5.4.1.4.1.3.5.1 */
										// Start line: 1704
										// Start offset: 0x800964C8
									/* end block 1.5.4.1.4.1.3.5.1 */
									// End offset: 0x800964C8
									// End Line: 1704
								/* end block 1.5.4.1.4.1.3.5 */
								// End offset: 0x800964C8
								// End Line: 1704

								/* begin block 1.5.4.1.4.1.3.6 */
									// Start line: 1704
									// Start offset: 0x800964C8
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.5.4.1.4.1.3.6.1 */
										// Start line: 1704
										// Start offset: 0x800964C8
									/* end block 1.5.4.1.4.1.3.6.1 */
									// End offset: 0x800964C8
									// End Line: 1704
								/* end block 1.5.4.1.4.1.3.6 */
								// End offset: 0x800964C8
								// End Line: 1704

								/* begin block 1.5.4.1.4.1.3.7 */
									// Start line: 1704
									// Start offset: 0x800964C8
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.5.4.1.4.1.3.7.1 */
										// Start line: 1704
										// Start offset: 0x800964C8
									/* end block 1.5.4.1.4.1.3.7.1 */
									// End offset: 0x800964C8
									// End Line: 1704
								/* end block 1.5.4.1.4.1.3.7 */
								// End offset: 0x800964C8
								// End Line: 1704

								/* begin block 1.5.4.1.4.1.3.8 */
									// Start line: 1704
									// Start offset: 0x800964C8
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.5.4.1.4.1.3.8.1 */
										// Start line: 1704
										// Start offset: 0x800964C8
									/* end block 1.5.4.1.4.1.3.8.1 */
									// End offset: 0x800964C8
									// End Line: 1704
								/* end block 1.5.4.1.4.1.3.8 */
								// End offset: 0x800964C8
								// End Line: 1704

								/* begin block 1.5.4.1.4.1.3.9 */
									// Start line: 1704
									// Start offset: 0x800964C8
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.5.4.1.4.1.3.9.1 */
										// Start line: 1704
										// Start offset: 0x800964C8
									/* end block 1.5.4.1.4.1.3.9.1 */
									// End offset: 0x800964C8
									// End Line: 1704
								/* end block 1.5.4.1.4.1.3.9 */
								// End offset: 0x800964C8
								// End Line: 1704

								/* begin block 1.5.4.1.4.1.3.10 */
									// Start line: 1704
									// Start offset: 0x800964C8
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.5.4.1.4.1.3.10.1 */
										// Start line: 1704
										// Start offset: 0x800964C8
									/* end block 1.5.4.1.4.1.3.10.1 */
									// End offset: 0x800964C8
									// End Line: 1704
								/* end block 1.5.4.1.4.1.3.10 */
								// End offset: 0x800964C8
								// End Line: 1704

								/* begin block 1.5.4.1.4.1.3.11 */
									// Start line: 1704
									// Start offset: 0x800964C8

									/* begin block 1.5.4.1.4.1.3.11.1 */
										// Start line: 1704
										// Start offset: 0x800964C8
									/* end block 1.5.4.1.4.1.3.11.1 */
									// End offset: 0x800964C8
									// End Line: 1704
								/* end block 1.5.4.1.4.1.3.11 */
								// End offset: 0x800964C8
								// End Line: 1704
							/* end block 1.5.4.1.4.1.3 */
							// End offset: 0x80096588
							// End Line: 1710
						/* end block 1.5.4.1.4.1 */
						// End offset: 0x80096588
						// End Line: 1710
					/* end block 1.5.4.1.4 */
					// End offset: 0x80096588
					// End Line: 1710
				/* end block 1.5.4.1 */
				// End offset: 0x80096588
				// End Line: 1710
			/* end block 1.5.4 */
			// End offset: 0x80096588
			// End Line: 1710
		/* end block 1.5 */
		// End offset: 0x80096588
		// End Line: 1710

		/* begin block 1.6 */
			// Start line: 1712
			// Start offset: 0x80096588

			/* begin block 1.6.1 */
				// Start line: 1712
				// Start offset: 0x80096588
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.6.1.1 */
					// Start line: 1712
					// Start offset: 0x80096588
				/* end block 1.6.1.1 */
				// End offset: 0x80096588
				// End Line: 1712
			/* end block 1.6.1 */
			// End offset: 0x80096588
			// End Line: 1712

			/* begin block 1.6.2 */
				// Start line: 1712
				// Start offset: 0x80096588

				/* begin block 1.6.2.1 */
					// Start line: 1712
					// Start offset: 0x80096588
				/* end block 1.6.2.1 */
				// End offset: 0x80096588
				// End Line: 1712
			/* end block 1.6.2 */
			// End offset: 0x80096588
			// End Line: 1712

			/* begin block 1.6.3 */
				// Start line: 1712
				// Start offset: 0x800965A0
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.6.3.1 */
					// Start line: 1712
					// Start offset: 0x800965A0
				/* end block 1.6.3.1 */
				// End offset: 0x800965A0
				// End Line: 1712
			/* end block 1.6.3 */
			// End offset: 0x800965A0
			// End Line: 1712

			/* begin block 1.6.4 */
				// Start line: 1712
				// Start offset: 0x800965A0

				/* begin block 1.6.4.1 */
					// Start line: 1712
					// Start offset: 0x800965A0
				/* end block 1.6.4.1 */
				// End offset: 0x800965A0
				// End Line: 1712
			/* end block 1.6.4 */
			// End offset: 0x800965A0
			// End Line: 1712

			/* begin block 1.6.5 */
				// Start line: 1712
				// Start offset: 0x800965A0

				/* begin block 1.6.5.1 */
					// Start line: 1712
					// Start offset: 0x800965A0
				/* end block 1.6.5.1 */
				// End offset: 0x800965A0
				// End Line: 1712
			/* end block 1.6.5 */
			// End offset: 0x800965A0
			// End Line: 1712

			/* begin block 1.6.6 */
				// Start line: 1713
				// Start offset: 0x800965B4

				/* begin block 1.6.6.1 */
					// Start line: 1713
					// Start offset: 0x800965B4
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.6.6.1.1 */
						// Start line: 1713
						// Start offset: 0x800965B4
					/* end block 1.6.6.1.1 */
					// End offset: 0x800965B4
					// End Line: 1713
				/* end block 1.6.6.1 */
				// End offset: 0x800965B4
				// End Line: 1713

				/* begin block 1.6.6.2 */
					// Start line: 1713
					// Start offset: 0x800965B4

					/* begin block 1.6.6.2.1 */
						// Start line: 1713
						// Start offset: 0x800965B4
					/* end block 1.6.6.2.1 */
					// End offset: 0x800965B8
					// End Line: 1713
				/* end block 1.6.6.2 */
				// End offset: 0x800965B8
				// End Line: 1713
			/* end block 1.6.6 */
			// End offset: 0x800965B8
			// End Line: 1713
		/* end block 1.6 */
		// End offset: 0x800965B8
		// End Line: 1713
	/* end block 1 */
	// End offset: 0x800965B8
	// End Line: 1713

void StatusReply__Q26Speech15DispatchSpeaker(DispatchSpeaker *this)

{
  bool bVar1;
  uint uVar2;
  int ID_UNIT;
  int ID_UNIT1;
  int *piVar3;
  Car_tObj *car;
  Speaker *pSVar4;
  ulong uVar5;
  Speaker *pSVar6;
  
  pSVar4 = (this->Speaker).fSub;
  bVar1 = false;
  if ((pSVar4 == (Speaker *)0x0) ||
     (uVar2 = pSVar4->_vf[0].value,
     ID_UNIT = (**(code **)(uVar2 + 0xdc))
                         ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0xd8)),
     ID_UNIT == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
  *(undefined4 *)(iGp00000838 + 0x38c) = 0;
  pSVar4 = (this->Speaker).fSub;
  pSVar6 = (Speaker *)0x0;
  if ((pSVar4->fBlockade).flags == 0) {
    uVar2 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar2 + 0xf4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xf0));
    pSVar4 = (this->Speaker).fSub;
    uVar2 = pSVar4->_vf[0].value;
    ID_UNIT1 = (**(code **)(uVar2 + 0x8c))
                         ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0x88));
    ID_UNIT = *(int *)(ID_UNIT + ID_UNIT1 * 4 + 8);
    ID_UNIT1 = (this->Speaker).fFrom;
    (this->Speaker).fTo = ID_UNIT;
  }
  else {
    if (*(int *)(iGp00000838 + 0x388) != 0) {
      uVar2 = pSVar4->_vf[0].value;
      (**(code **)(uVar2 + 0x6c))((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0x68));
      return;
    }
    pSVar6 = pSVar4->fSub;
    bVar1 = false;
    if (pSVar6 != (Speaker *)0x0) {
      bVar1 = (pSVar6->fBlockade).flags != 0;
    }
    if (bVar1) {
      uVar2 = (this->Speaker)._vf[0].value;
      ID_UNIT = (**(code **)(uVar2 + 0xf4))
                          ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xf0));
      pSVar4 = (this->Speaker).fSub;
      uVar2 = pSVar4->_vf[0].value;
      ID_UNIT1 = (**(code **)(uVar2 + 0x8c))
                           ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0x88));
      (this->Speaker).fTo = *(int *)(ID_UNIT + ID_UNIT1 * 4 + 8);
      pSVar4 = pSVar6;
    }
    else {
      uVar2 = (this->Speaker)._vf[0].value;
      piVar3 = (int *)(**(code **)(uVar2 + 0xf4))
                                ((int)&(this->Speaker).fPosition.flags +
                                 (int)*(short *)(uVar2 + 0xf0));
      (this->Speaker).fTo = *piVar3;
    }
    uVar2 = pSVar4->_vf[0].value;
    (**(code **)(uVar2 + 0x6c))((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0x68));
    *(undefined4 *)(iGp00000838 + 0x38c) = 0;
    SPCHNFS_D_A_CONFIRM(&(this->Speaker).fConfirm);
    SPCH_PlaySpeech();
    ID_UNIT = (this->Speaker).fTo;
    ID_UNIT1 = (this->Speaker).fFrom;
    pSVar6 = pSVar4;
  }
  SPCHNFS_D_C_INTRO_CALL(ID_UNIT,ID_UNIT1,&(this->Speaker).fReverse);
  SPCH_PlaySpeech();
  pSVar4 = (this->Speaker).fSub;
  uVar2 = pSVar4->_vf[0].value;
  car = (Car_tObj *)
        (**(code **)(uVar2 + 0xcc))((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 200));
  FindLocation__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
  pSVar4 = (this->Speaker).fSub;
  uVar5 = (pSVar4->fBlockade).flags;
  if (uVar5 == 1) {
    uVar2 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar2 + 0xf4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xf0));
    uVar2 = pSVar6->_vf[0].value;
    ID_UNIT1 = (**(code **)(uVar2 + 0x8c))
                         ((int)&(pSVar6->fPosition).flags + (int)*(short *)(uVar2 + 0x88));
    ID_UNIT = *(int *)(ID_UNIT + ID_UNIT1 * 4 + 8);
    ID_UNIT1 = (this->Speaker).fLocation;
    (this->Speaker).fSpikeSide.flags = 4;
    (this->Speaker).fWing = ID_UNIT;
    SPCHNFS_D_C_SPBLT_CONFIRMED
              ((SPCHNFSType_POSITION *)this,ID_UNIT1,&(this->Speaker).fDistance,ID_UNIT,
               &(this->Speaker).fSpikeSide);
  }
  else {
    if (uVar5 != 2) {
      if (pSVar4->fSub != (Speaker *)0x0) {
        uVar2 = (this->Speaker)._vf[0].value;
        ID_UNIT = (**(code **)(uVar2 + 0xf4))
                            ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xf0));
        pSVar4 = ((this->Speaker).fSub)->fSub;
        uVar2 = pSVar4->_vf[0].value;
        ID_UNIT1 = (**(code **)(uVar2 + 0x8c))
                             ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0x88));
        ID_UNIT = *(int *)(ID_UNIT + ID_UNIT1 * 4 + 8);
        (this->Speaker).fWing = ID_UNIT;
        SPCHNFS_D_C_BKUP_REQUEST_GRANT_REPLY
                  (&(this->Speaker).fDistance,(SPCHNFSType_POSITION *)this,(this->Speaker).fLocation
                   ,ID_UNIT);
        SPCH_PlaySpeech();
        pSVar4 = (this->Speaker).fSub;
        uVar2 = pSVar4->_vf[0].value;
        (**(code **)(uVar2 + 0x74))((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0x70))
        ;
        pSVar4 = ((this->Speaker).fSub)->fSub;
        uVar2 = (this->Speaker)._vf[3].value;
        (this->Speaker)._vf[1].value = 0x140;
        (this->Speaker)._vf[3].value = uVar2 + 1;
        *(Speaker **)&(this->Speaker)._vf[2].value = pSVar4;
      }
      goto LAB_80096588;
    }
    SPCHNFS_D_C_RDBLK_CONFIRMED
              ((SPCHNFSType_POSITION *)this,(this->Speaker).fLocation,&(this->Speaker).fDistance);
  }
  SPCH_PlaySpeech();
  pSVar4 = (this->Speaker).fSub;
  if (pSVar6 != pSVar4) {
    uVar2 = pSVar4->_vf[0].value;
    (**(code **)(uVar2 + 0x74))((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0x70));
  }
LAB_80096588:
  pSVar6 = (this->Speaker).fSub;
  pSVar4 = pSVar6->fSub;
  bVar1 = false;
  if (pSVar4 != (Speaker *)0x0) {
    bVar1 = (pSVar4->fBlockade).flags != 0;
  }
  if (bVar1) {
    (pSVar6->fBlockade).flags = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Status__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this /*$s2*/)
 // line 1718, offset 0x800965d0
	/* begin block 1 */
		// Start line: 1719
		// Start offset: 0x800965D0

		/* begin block 1.1 */
			// Start line: 1719
			// Start offset: 0x800965D0

			/* begin block 1.1.1 */
				// Start line: 1719
				// Start offset: 0x800965D0
				// Variables:
			// 		struct Speaker *this; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 1719
					// Start offset: 0x800965D0
				/* end block 1.1.1.1 */
				// End offset: 0x800965D0
				// End Line: 1719
			/* end block 1.1.1 */
			// End offset: 0x800965D0
			// End Line: 1719

			/* begin block 1.1.2 */
				// Start line: 1721
				// Start offset: 0x800965F8
				// Variables:
			// 		struct Speaker *this; // $s2

				/* begin block 1.1.2.1 */
					// Start line: 1721
					// Start offset: 0x800965F8
				/* end block 1.1.2.1 */
				// End offset: 0x800965F8
				// End Line: 1721
			/* end block 1.1.2 */
			// End offset: 0x800965F8
			// End Line: 1721
		/* end block 1.1 */
		// End offset: 0x80096628
		// End Line: 1722

		/* begin block 1.2 */
			// Start line: 1724
			// Start offset: 0x80096628

			/* begin block 1.2.1 */
				// Start line: 1724
				// Start offset: 0x80096628
				// Variables:
			// 		struct Speaker *this; // $s2

				/* begin block 1.2.1.1 */
					// Start line: 1724
					// Start offset: 0x80096628
				/* end block 1.2.1.1 */
				// End offset: 0x80096628
				// End Line: 1724
			/* end block 1.2.1 */
			// End offset: 0x80096628
			// End Line: 1724

			/* begin block 1.2.2 */
				// Start line: 1725
				// Start offset: 0x80096660
				// Variables:
			// 		int dist; // $a0

				/* begin block 1.2.2.1 */
					// Start line: 1725
					// Start offset: 0x80096660
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.2.2.1.1 */
						// Start line: 1725
						// Start offset: 0x80096660
					/* end block 1.2.2.1.1 */
					// End offset: 0x80096660
					// End Line: 1725
				/* end block 1.2.2.1 */
				// End offset: 0x80096660
				// End Line: 1725

				/* begin block 1.2.2.2 */
					// Start line: 1725
					// Start offset: 0x80096660

					/* begin block 1.2.2.2.1 */
						// Start line: 1725
						// Start offset: 0x80096660
						// Variables:
					// 		struct Speaker *this; // $s2

						/* begin block 1.2.2.2.1.1 */
							// Start line: 1725
							// Start offset: 0x80096660
						/* end block 1.2.2.2.1.1 */
						// End offset: 0x80096660
						// End Line: 1725
					/* end block 1.2.2.2.1 */
					// End offset: 0x80096660
					// End Line: 1725

					/* begin block 1.2.2.2.2 */
						// Start line: 1725
						// Start offset: 0x80096660

						/* begin block 1.2.2.2.2.1 */
							// Start line: 1725
							// Start offset: 0x80096660
						/* end block 1.2.2.2.2.1 */
						// End offset: 0x80096660
						// End Line: 1725
					/* end block 1.2.2.2.2 */
					// End offset: 0x80096660
					// End Line: 1725

					/* begin block 1.2.2.2.3 */
						// Start line: 1729
						// Start offset: 0x8009669C

						/* begin block 1.2.2.2.3.1 */
							// Start line: 1730
							// Start offset: 0x8009669C

							/* begin block 1.2.2.2.3.1.1 */
								// Start line: 1731
								// Start offset: 0x800966AC

								/* begin block 1.2.2.2.3.1.1.1 */
									// Start line: 1731
									// Start offset: 0x800966AC
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.2.2.2.3.1.1.1.1 */
										// Start line: 1731
										// Start offset: 0x800966AC
									/* end block 1.2.2.2.3.1.1.1.1 */
									// End offset: 0x800966AC
									// End Line: 1731
								/* end block 1.2.2.2.3.1.1.1 */
								// End offset: 0x800966AC
								// End Line: 1731

								/* begin block 1.2.2.2.3.1.1.2 */
									// Start line: 1731
									// Start offset: 0x800966AC

									/* begin block 1.2.2.2.3.1.1.2.1 */
										// Start line: 1731
										// Start offset: 0x800966AC
									/* end block 1.2.2.2.3.1.1.2.1 */
									// End offset: 0x800966AC
									// End Line: 1731
								/* end block 1.2.2.2.3.1.1.2 */
								// End offset: 0x800966AC
								// End Line: 1731

								/* begin block 1.2.2.2.3.1.1.3 */
									// Start line: 1731
									// Start offset: 0x800966AC
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.2.2.2.3.1.1.3.1 */
										// Start line: 1731
										// Start offset: 0x800966AC
									/* end block 1.2.2.2.3.1.1.3.1 */
									// End offset: 0x800966AC
									// End Line: 1731
								/* end block 1.2.2.2.3.1.1.3 */
								// End offset: 0x800966AC
								// End Line: 1731

								/* begin block 1.2.2.2.3.1.1.4 */
									// Start line: 1731
									// Start offset: 0x800966AC

									/* begin block 1.2.2.2.3.1.1.4.1 */
										// Start line: 1731
										// Start offset: 0x800966AC
									/* end block 1.2.2.2.3.1.1.4.1 */
									// End offset: 0x800966AC
									// End Line: 1731
								/* end block 1.2.2.2.3.1.1.4 */
								// End offset: 0x800966AC
								// End Line: 1731

								/* begin block 1.2.2.2.3.1.1.5 */
									// Start line: 1731
									// Start offset: 0x800966AC
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.2.2.2.3.1.1.5.1 */
										// Start line: 1731
										// Start offset: 0x800966AC
									/* end block 1.2.2.2.3.1.1.5.1 */
									// End offset: 0x800966AC
									// End Line: 1731
								/* end block 1.2.2.2.3.1.1.5 */
								// End offset: 0x800966AC
								// End Line: 1731
							/* end block 1.2.2.2.3.1.1 */
							// End offset: 0x800966AC
							// End Line: 1731
						/* end block 1.2.2.2.3.1 */
						// End offset: 0x800966AC
						// End Line: 1731
					/* end block 1.2.2.2.3 */
					// End offset: 0x800966AC
					// End Line: 1731

					/* begin block 1.2.2.2.4 */
						// Start line: 1737
						// Start offset: 0x800966E8

						/* begin block 1.2.2.2.4.1 */
							// Start line: 1737
							// Start offset: 0x800966E8

							/* begin block 1.2.2.2.4.1.1 */
								// Start line: 1738
								// Start offset: 0x800966FC

								/* begin block 1.2.2.2.4.1.1.1 */
									// Start line: 1738
									// Start offset: 0x800966FC
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.2.2.2.4.1.1.1.1 */
										// Start line: 1738
										// Start offset: 0x800966FC
									/* end block 1.2.2.2.4.1.1.1.1 */
									// End offset: 0x800966FC
									// End Line: 1738
								/* end block 1.2.2.2.4.1.1.1 */
								// End offset: 0x800966FC
								// End Line: 1738

								/* begin block 1.2.2.2.4.1.1.2 */
									// Start line: 1738
									// Start offset: 0x800966FC
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.2.2.2.4.1.1.2.1 */
										// Start line: 1738
										// Start offset: 0x800966FC
									/* end block 1.2.2.2.4.1.1.2.1 */
									// End offset: 0x800966FC
									// End Line: 1738
								/* end block 1.2.2.2.4.1.1.2 */
								// End offset: 0x800966FC
								// End Line: 1738
							/* end block 1.2.2.2.4.1.1 */
							// End offset: 0x80096734
							// End Line: 1738
						/* end block 1.2.2.2.4.1 */
						// End offset: 0x80096734
						// End Line: 1738
					/* end block 1.2.2.2.4 */
					// End offset: 0x80096734
					// End Line: 1738
				/* end block 1.2.2.2 */
				// End offset: 0x80096734
				// End Line: 1738
			/* end block 1.2.2 */
			// End offset: 0x80096734
			// End Line: 1738
		/* end block 1.2 */
		// End offset: 0x80096734
		// End Line: 1738

		/* begin block 1.3 */
			// Start line: 1741
			// Start offset: 0x80096734

			/* begin block 1.3.1 */
				// Start line: 1742
				// Start offset: 0x80096744

				/* begin block 1.3.1.1 */
					// Start line: 1743
					// Start offset: 0x80096744

					/* begin block 1.3.1.1.1 */
						// Start line: 1746
						// Start offset: 0x80096758

						/* begin block 1.3.1.1.1.1 */
							// Start line: 1747
							// Start offset: 0x80096758

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 1751
								// Start offset: 0x80096778

								/* begin block 1.3.1.1.1.1.1.1 */
									// Start line: 1751
									// Start offset: 0x80096778

									/* begin block 1.3.1.1.1.1.1.1.1 */
										// Start line: 1751
										// Start offset: 0x80096778
										// Variables:
									// 		struct Speaker *this; // $s2

										/* begin block 1.3.1.1.1.1.1.1.1.1 */
											// Start line: 1751
											// Start offset: 0x80096778
										/* end block 1.3.1.1.1.1.1.1.1.1 */
										// End offset: 0x80096778
										// End Line: 1751
									/* end block 1.3.1.1.1.1.1.1.1 */
									// End offset: 0x80096778
									// End Line: 1751

									/* begin block 1.3.1.1.1.1.1.1.2 */
										// Start line: 1751
										// Start offset: 0x80096788
										// Variables:
									// 		struct Speaker *this; // $s2

										/* begin block 1.3.1.1.1.1.1.1.2.1 */
											// Start line: 1751
											// Start offset: 0x80096788
										/* end block 1.3.1.1.1.1.1.1.2.1 */
										// End offset: 0x80096788
										// End Line: 1751
									/* end block 1.3.1.1.1.1.1.1.2 */
									// End offset: 0x80096788
									// End Line: 1751

									/* begin block 1.3.1.1.1.1.1.1.3 */
										// Start line: 1751
										// Start offset: 0x80096788

										/* begin block 1.3.1.1.1.1.1.1.3.1 */
											// Start line: 1751
											// Start offset: 0x80096788
										/* end block 1.3.1.1.1.1.1.1.3.1 */
										// End offset: 0x80096788
										// End Line: 1751
									/* end block 1.3.1.1.1.1.1.1.3 */
									// End offset: 0x80096788
									// End Line: 1751

									/* begin block 1.3.1.1.1.1.1.1.4 */
										// Start line: 1756
										// Start offset: 0x800967C4

										/* begin block 1.3.1.1.1.1.1.1.4.1 */
											// Start line: 1757
											// Start offset: 0x800967C4
											// Variables:
										// 		struct DispatchSpeaker *this; // $s2

											/* begin block 1.3.1.1.1.1.1.1.4.1.1 */
												// Start line: 1757
												// Start offset: 0x800967C4

												/* begin block 1.3.1.1.1.1.1.1.4.1.1.1 */
													// Start line: 1757
													// Start offset: 0x800967C4
													// Variables:
												// 		struct Speech *this; // $v0

													/* begin block 1.3.1.1.1.1.1.1.4.1.1.1.1 */
														// Start line: 1757
														// Start offset: 0x800967C4
													/* end block 1.3.1.1.1.1.1.1.4.1.1.1.1 */
													// End offset: 0x800967C4
													// End Line: 1757
												/* end block 1.3.1.1.1.1.1.1.4.1.1.1 */
												// End offset: 0x800967C4
												// End Line: 1757
											/* end block 1.3.1.1.1.1.1.1.4.1.1 */
											// End offset: 0x800967C4
											// End Line: 1757
										/* end block 1.3.1.1.1.1.1.1.4.1 */
										// End offset: 0x800967C4
										// End Line: 1757
									/* end block 1.3.1.1.1.1.1.1.4 */
									// End offset: 0x800967C4
									// End Line: 1757
								/* end block 1.3.1.1.1.1.1.1 */
								// End offset: 0x800967C4
								// End Line: 1757
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x800967C4
							// End Line: 1757
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x800967C4
						// End Line: 1757
					/* end block 1.3.1.1.1 */
					// End offset: 0x800967C4
					// End Line: 1757
				/* end block 1.3.1.1 */
				// End offset: 0x800967C4
				// End Line: 1757
			/* end block 1.3.1 */
			// End offset: 0x800967C4
			// End Line: 1757

			/* begin block 1.3.2 */
				// Start line: 1763
				// Start offset: 0x80096810

				/* begin block 1.3.2.1 */
					// Start line: 1763
					// Start offset: 0x80096810

					/* begin block 1.3.2.1.1 */
						// Start line: 1767
						// Start offset: 0x80096828

						/* begin block 1.3.2.1.1.1 */
							// Start line: 1767
							// Start offset: 0x80096828

							/* begin block 1.3.2.1.1.1.1 */
								// Start line: 1767
								// Start offset: 0x80096828
								// Variables:
							// 		struct Speaker *this; // $s2

								/* begin block 1.3.2.1.1.1.1.1 */
									// Start line: 1767
									// Start offset: 0x80096828
								/* end block 1.3.2.1.1.1.1.1 */
								// End offset: 0x80096828
								// End Line: 1767
							/* end block 1.3.2.1.1.1.1 */
							// End offset: 0x80096828
							// End Line: 1767

							/* begin block 1.3.2.1.1.1.2 */
								// Start line: 1767
								// Start offset: 0x80096828

								/* begin block 1.3.2.1.1.1.2.1 */
									// Start line: 1767
									// Start offset: 0x80096828
								/* end block 1.3.2.1.1.1.2.1 */
								// End offset: 0x80096828
								// End Line: 1767
							/* end block 1.3.2.1.1.1.2 */
							// End offset: 0x80096828
							// End Line: 1767

							/* begin block 1.3.2.1.1.1.3 */
								// Start line: 1767
								// Start offset: 0x80096840
								// Variables:
							// 		struct Speaker *this; // $s2

								/* begin block 1.3.2.1.1.1.3.1 */
									// Start line: 1767
									// Start offset: 0x80096840
								/* end block 1.3.2.1.1.1.3.1 */
								// End offset: 0x80096840
								// End Line: 1767
							/* end block 1.3.2.1.1.1.3 */
							// End offset: 0x80096840
							// End Line: 1767

							/* begin block 1.3.2.1.1.1.4 */
								// Start line: 1767
								// Start offset: 0x80096840

								/* begin block 1.3.2.1.1.1.4.1 */
									// Start line: 1767
									// Start offset: 0x80096840
								/* end block 1.3.2.1.1.1.4.1 */
								// End offset: 0x80096840
								// End Line: 1767
							/* end block 1.3.2.1.1.1.4 */
							// End offset: 0x80096840
							// End Line: 1767

							/* begin block 1.3.2.1.1.1.5 */
								// Start line: 1768
								// Start offset: 0x80096854

								/* begin block 1.3.2.1.1.1.5.1 */
									// Start line: 1773
									// Start offset: 0x80096854

									/* begin block 1.3.2.1.1.1.5.1.1 */
										// Start line: 1773
										// Start offset: 0x80096854
										// Variables:
									// 		struct Speaker *this; // $s2

										/* begin block 1.3.2.1.1.1.5.1.1.1 */
											// Start line: 1773
											// Start offset: 0x80096854
										/* end block 1.3.2.1.1.1.5.1.1.1 */
										// End offset: 0x80096854
										// End Line: 1773
									/* end block 1.3.2.1.1.1.5.1.1 */
									// End offset: 0x80096854
									// End Line: 1773

									/* begin block 1.3.2.1.1.1.5.1.2 */
										// Start line: 1773
										// Start offset: 0x80096854

										/* begin block 1.3.2.1.1.1.5.1.2.1 */
											// Start line: 1773
											// Start offset: 0x80096854
										/* end block 1.3.2.1.1.1.5.1.2.1 */
										// End offset: 0x80096854
										// End Line: 1773
									/* end block 1.3.2.1.1.1.5.1.2 */
									// End offset: 0x80096854
									// End Line: 1773

									/* begin block 1.3.2.1.1.1.5.1.3 */
										// Start line: 1773
										// Start offset: 0x80096864
										// Variables:
									// 		struct Speaker *this; // $s2

										/* begin block 1.3.2.1.1.1.5.1.3.1 */
											// Start line: 1773
											// Start offset: 0x80096864
										/* end block 1.3.2.1.1.1.5.1.3.1 */
										// End offset: 0x80096864
										// End Line: 1773
									/* end block 1.3.2.1.1.1.5.1.3 */
									// End offset: 0x80096864
									// End Line: 1773

									/* begin block 1.3.2.1.1.1.5.1.4 */
										// Start line: 1773
										// Start offset: 0x80096864

										/* begin block 1.3.2.1.1.1.5.1.4.1 */
											// Start line: 1773
											// Start offset: 0x80096864
										/* end block 1.3.2.1.1.1.5.1.4.1 */
										// End offset: 0x80096864
										// End Line: 1773
									/* end block 1.3.2.1.1.1.5.1.4 */
									// End offset: 0x80096864
									// End Line: 1773

									/* begin block 1.3.2.1.1.1.5.1.5 */
										// Start line: 1773
										// Start offset: 0x80096864
										// Variables:
									// 		struct Speaker *this; // $s2

										/* begin block 1.3.2.1.1.1.5.1.5.1 */
											// Start line: 1773
											// Start offset: 0x80096864
										/* end block 1.3.2.1.1.1.5.1.5.1 */
										// End offset: 0x80096864
										// End Line: 1773
									/* end block 1.3.2.1.1.1.5.1.5 */
									// End offset: 0x80096864
									// End Line: 1773

									/* begin block 1.3.2.1.1.1.5.1.6 */
										// Start line: 1774
										// Start offset: 0x800968BC

										/* begin block 1.3.2.1.1.1.5.1.6.1 */
											// Start line: 1774
											// Start offset: 0x800968BC
											// Variables:
										// 		struct Speaker *this; // $s2

											/* begin block 1.3.2.1.1.1.5.1.6.1.1 */
												// Start line: 1774
												// Start offset: 0x800968BC
											/* end block 1.3.2.1.1.1.5.1.6.1.1 */
											// End offset: 0x800968BC
											// End Line: 1774
										/* end block 1.3.2.1.1.1.5.1.6.1 */
										// End offset: 0x800968BC
										// End Line: 1774

										/* begin block 1.3.2.1.1.1.5.1.6.2 */
											// Start line: 1774
											// Start offset: 0x800968BC

											/* begin block 1.3.2.1.1.1.5.1.6.2.1 */
												// Start line: 1774
												// Start offset: 0x800968BC
											/* end block 1.3.2.1.1.1.5.1.6.2.1 */
											// End offset: 0x800968BC
											// End Line: 1774
										/* end block 1.3.2.1.1.1.5.1.6.2 */
										// End offset: 0x800968BC
										// End Line: 1774
									/* end block 1.3.2.1.1.1.5.1.6 */
									// End offset: 0x800968D0
									// End Line: 1781
								/* end block 1.3.2.1.1.1.5.1 */
								// End offset: 0x800968D0
								// End Line: 1781

								/* begin block 1.3.2.1.1.1.5.2 */
									// Start line: 1802
									// Start offset: 0x800968D0

									/* begin block 1.3.2.1.1.1.5.2.1 */
										// Start line: 1803
										// Start offset: 0x80096918

										/* begin block 1.3.2.1.1.1.5.2.1.1 */
											// Start line: 1805
											// Start offset: 0x80096918

											/* begin block 1.3.2.1.1.1.5.2.1.1.1 */
												// Start line: 1805
												// Start offset: 0x80096918
												// Variables:
											// 		struct Speaker *this; // $s2

												/* begin block 1.3.2.1.1.1.5.2.1.1.1.1 */
													// Start line: 1805
													// Start offset: 0x80096918
												/* end block 1.3.2.1.1.1.5.2.1.1.1.1 */
												// End offset: 0x80096918
												// End Line: 1805
											/* end block 1.3.2.1.1.1.5.2.1.1.1 */
											// End offset: 0x80096918
											// End Line: 1805

											/* begin block 1.3.2.1.1.1.5.2.1.1.2 */
												// Start line: 1805
												// Start offset: 0x80096950
												// Variables:
											// 		struct Speaker *this; // $s2

												/* begin block 1.3.2.1.1.1.5.2.1.1.2.1 */
													// Start line: 1805
													// Start offset: 0x80096950
												/* end block 1.3.2.1.1.1.5.2.1.1.2.1 */
												// End offset: 0x80096950
												// End Line: 1805
											/* end block 1.3.2.1.1.1.5.2.1.1.2 */
											// End offset: 0x80096950
											// End Line: 1805

											/* begin block 1.3.2.1.1.1.5.2.1.1.3 */
												// Start line: 1805
												// Start offset: 0x8009698C
												// Variables:
											// 		struct Speaker *this; // $s2

												/* begin block 1.3.2.1.1.1.5.2.1.1.3.1 */
													// Start line: 1805
													// Start offset: 0x8009698C
												/* end block 1.3.2.1.1.1.5.2.1.1.3.1 */
												// End offset: 0x8009698C
												// End Line: 1805
											/* end block 1.3.2.1.1.1.5.2.1.1.3 */
											// End offset: 0x8009698C
											// End Line: 1805

											/* begin block 1.3.2.1.1.1.5.2.1.1.4 */
												// Start line: 1806
												// Start offset: 0x800969CC

												/* begin block 1.3.2.1.1.1.5.2.1.1.4.1 */
													// Start line: 1806
													// Start offset: 0x800969CC
													// Variables:
												// 		struct Speaker *this; // $s2

													/* begin block 1.3.2.1.1.1.5.2.1.1.4.1.1 */
														// Start line: 1806
														// Start offset: 0x800969CC
													/* end block 1.3.2.1.1.1.5.2.1.1.4.1.1 */
													// End offset: 0x800969CC
													// End Line: 1806
												/* end block 1.3.2.1.1.1.5.2.1.1.4.1 */
												// End offset: 0x800969CC
												// End Line: 1806

												/* begin block 1.3.2.1.1.1.5.2.1.1.4.2 */
													// Start line: 1806
													// Start offset: 0x800969CC

													/* begin block 1.3.2.1.1.1.5.2.1.1.4.2.1 */
														// Start line: 1806
														// Start offset: 0x800969CC
													/* end block 1.3.2.1.1.1.5.2.1.1.4.2.1 */
													// End offset: 0x800969CC
													// End Line: 1806
												/* end block 1.3.2.1.1.1.5.2.1.1.4.2 */
												// End offset: 0x800969CC
												// End Line: 1806
											/* end block 1.3.2.1.1.1.5.2.1.1.4 */
											// End offset: 0x800969D8
											// End Line: 1808
										/* end block 1.3.2.1.1.1.5.2.1.1 */
										// End offset: 0x800969D8
										// End Line: 1808

										/* begin block 1.3.2.1.1.1.5.2.1.2 */
											// Start line: 1808
											// Start offset: 0x800969D8
											// Variables:
										// 		struct Speaker *this; // $s2

											/* begin block 1.3.2.1.1.1.5.2.1.2.1 */
												// Start line: 1808
												// Start offset: 0x800969D8
											/* end block 1.3.2.1.1.1.5.2.1.2.1 */
											// End offset: 0x800969D8
											// End Line: 1808
										/* end block 1.3.2.1.1.1.5.2.1.2 */
										// End offset: 0x800969D8
										// End Line: 1808

										/* begin block 1.3.2.1.1.1.5.2.1.3 */
											// Start line: 1808
											// Start offset: 0x800969D8

											/* begin block 1.3.2.1.1.1.5.2.1.3.1 */
												// Start line: 1808
												// Start offset: 0x800969D8
											/* end block 1.3.2.1.1.1.5.2.1.3.1 */
											// End offset: 0x800969D8
											// End Line: 1808
										/* end block 1.3.2.1.1.1.5.2.1.3 */
										// End offset: 0x800969D8
										// End Line: 1808

										/* begin block 1.3.2.1.1.1.5.2.1.4 */
											// Start line: 1819
											// Start offset: 0x800969E4

											/* begin block 1.3.2.1.1.1.5.2.1.4.1 */
												// Start line: 1819
												// Start offset: 0x800969E4
												// Variables:
											// 		struct Speaker *this; // $s2

												/* begin block 1.3.2.1.1.1.5.2.1.4.1.1 */
													// Start line: 1819
													// Start offset: 0x800969E4
												/* end block 1.3.2.1.1.1.5.2.1.4.1.1 */
												// End offset: 0x800969E4
												// End Line: 1819
											/* end block 1.3.2.1.1.1.5.2.1.4.1 */
											// End offset: 0x800969E4
											// End Line: 1819

											/* begin block 1.3.2.1.1.1.5.2.1.4.2 */
												// Start line: 1820
												// Start offset: 0x80096A20

												/* begin block 1.3.2.1.1.1.5.2.1.4.2.1 */
													// Start line: 1820
													// Start offset: 0x80096A20
													// Variables:
												// 		struct Speaker *this; // $s2

													/* begin block 1.3.2.1.1.1.5.2.1.4.2.1.1 */
														// Start line: 1820
														// Start offset: 0x80096A20
													/* end block 1.3.2.1.1.1.5.2.1.4.2.1.1 */
													// End offset: 0x80096A20
													// End Line: 1820
												/* end block 1.3.2.1.1.1.5.2.1.4.2.1 */
												// End offset: 0x80096A20
												// End Line: 1820

												/* begin block 1.3.2.1.1.1.5.2.1.4.2.2 */
													// Start line: 1820
													// Start offset: 0x80096A20

													/* begin block 1.3.2.1.1.1.5.2.1.4.2.2.1 */
														// Start line: 1820
														// Start offset: 0x80096A20
													/* end block 1.3.2.1.1.1.5.2.1.4.2.2.1 */
													// End offset: 0x80096A20
													// End Line: 1820
												/* end block 1.3.2.1.1.1.5.2.1.4.2.2 */
												// End offset: 0x80096A20
												// End Line: 1820

												/* begin block 1.3.2.1.1.1.5.2.1.4.2.3 */
													// Start line: 1820
													// Start offset: 0x80096A20
													// Variables:
												// 		struct Speaker *this; // $s2

													/* begin block 1.3.2.1.1.1.5.2.1.4.2.3.1 */
														// Start line: 1820
														// Start offset: 0x80096A20
													/* end block 1.3.2.1.1.1.5.2.1.4.2.3.1 */
													// End offset: 0x80096A20
													// End Line: 1820
												/* end block 1.3.2.1.1.1.5.2.1.4.2.3 */
												// End offset: 0x80096A20
												// End Line: 1820
											/* end block 1.3.2.1.1.1.5.2.1.4.2 */
											// End offset: 0x80096A4C
											// End Line: 1824

											/* begin block 1.3.2.1.1.1.5.2.1.4.3 */
												// Start line: 1826
												// Start offset: 0x80096A4C

												/* begin block 1.3.2.1.1.1.5.2.1.4.3.1 */
													// Start line: 1826
													// Start offset: 0x80096A4C

													/* begin block 1.3.2.1.1.1.5.2.1.4.3.1.1 */
														// Start line: 1826
														// Start offset: 0x80096A4C
														// Variables:
													// 		struct Speaker *this; // $s2

														/* begin block 1.3.2.1.1.1.5.2.1.4.3.1.1.1 */
															// Start line: 1826
															// Start offset: 0x80096A4C
														/* end block 1.3.2.1.1.1.5.2.1.4.3.1.1.1 */
														// End offset: 0x80096A4C
														// End Line: 1826
													/* end block 1.3.2.1.1.1.5.2.1.4.3.1.1 */
													// End offset: 0x80096A4C
													// End Line: 1826

													/* begin block 1.3.2.1.1.1.5.2.1.4.3.1.2 */
														// Start line: 1827
														// Start offset: 0x80096A84

														/* begin block 1.3.2.1.1.1.5.2.1.4.3.1.2.1 */
															// Start line: 1827
															// Start offset: 0x80096A84
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.2.1.1.1.5.2.1.4.3.1.2.1.1 */
																// Start line: 1827
																// Start offset: 0x80096A84
															/* end block 1.3.2.1.1.1.5.2.1.4.3.1.2.1.1 */
															// End offset: 0x80096A84
															// End Line: 1827
														/* end block 1.3.2.1.1.1.5.2.1.4.3.1.2.1 */
														// End offset: 0x80096A84
														// End Line: 1827
													/* end block 1.3.2.1.1.1.5.2.1.4.3.1.2 */
													// End offset: 0x80096ABC
													// End Line: 1830
												/* end block 1.3.2.1.1.1.5.2.1.4.3.1 */
												// End offset: 0x80096ABC
												// End Line: 1830
											/* end block 1.3.2.1.1.1.5.2.1.4.3 */
											// End offset: 0x80096ABC
											// End Line: 1830
										/* end block 1.3.2.1.1.1.5.2.1.4 */
										// End offset: 0x80096ABC
										// End Line: 1830

										/* begin block 1.3.2.1.1.1.5.2.1.5 */
											// Start line: 1830
											// Start offset: 0x80096ABC
											// Variables:
										// 		struct Speaker *this; // $s2

											/* begin block 1.3.2.1.1.1.5.2.1.5.1 */
												// Start line: 1830
												// Start offset: 0x80096ABC
											/* end block 1.3.2.1.1.1.5.2.1.5.1 */
											// End offset: 0x80096ABC
											// End Line: 1830
										/* end block 1.3.2.1.1.1.5.2.1.5 */
										// End offset: 0x80096ABC
										// End Line: 1830

										/* begin block 1.3.2.1.1.1.5.2.1.6 */
											// Start line: 1830
											// Start offset: 0x80096ABC

											/* begin block 1.3.2.1.1.1.5.2.1.6.1 */
												// Start line: 1830
												// Start offset: 0x80096ABC
											/* end block 1.3.2.1.1.1.5.2.1.6.1 */
											// End offset: 0x80096AC8
											// End Line: 1830
										/* end block 1.3.2.1.1.1.5.2.1.6 */
										// End offset: 0x80096AC8
										// End Line: 1830
									/* end block 1.3.2.1.1.1.5.2.1 */
									// End offset: 0x80096AC8
									// End Line: 1836
								/* end block 1.3.2.1.1.1.5.2 */
								// End offset: 0x80096AC8
								// End Line: 1836

								/* begin block 1.3.2.1.1.1.5.3 */
									// Start line: 1719
									// Start offset: 0x80096AC8
									// Variables:
								// 		struct DispatchSpeaker *this; // $s2

									/* begin block 1.3.2.1.1.1.5.3.1 */
										// Start line: 1719
										// Start offset: 0x80096AC8

										/* begin block 1.3.2.1.1.1.5.3.1.1 */
											// Start line: 1719
											// Start offset: 0x80096AC8
											// Variables:
										// 		struct Speech *this; // $v0

											/* begin block 1.3.2.1.1.1.5.3.1.1.1 */
												// Start line: 1719
												// Start offset: 0x80096AC8
											/* end block 1.3.2.1.1.1.5.3.1.1.1 */
											// End offset: 0x80096AC8
											// End Line: 1719
										/* end block 1.3.2.1.1.1.5.3.1.1 */
										// End offset: 0x80096AC8
										// End Line: 1719
									/* end block 1.3.2.1.1.1.5.3.1 */
									// End offset: 0x80096AC8
									// End Line: 1719
								/* end block 1.3.2.1.1.1.5.3 */
								// End offset: 0x80096AC8
								// End Line: 1719

								/* begin block 1.3.2.1.1.1.5.4 */
									// Start line: 1719
									// Start offset: 0x80096AC8
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.2.1.1.1.5.4.1 */
										// Start line: 1719
										// Start offset: 0x80096AC8
									/* end block 1.3.2.1.1.1.5.4.1 */
									// End offset: 0x80096AC8
									// End Line: 1719
								/* end block 1.3.2.1.1.1.5.4 */
								// End offset: 0x80096AC8
								// End Line: 1719

								/* begin block 1.3.2.1.1.1.5.5 */
									// Start line: 1719
									// Start offset: 0x80096AC8

									/* begin block 1.3.2.1.1.1.5.5.1 */
										// Start line: 1719
										// Start offset: 0x80096AC8
									/* end block 1.3.2.1.1.1.5.5.1 */
									// End offset: 0x80096AC8
									// End Line: 1719
								/* end block 1.3.2.1.1.1.5.5 */
								// End offset: 0x80096AC8
								// End Line: 1719

								/* begin block 1.3.2.1.1.1.5.6 */
									// Start line: 1719
									// Start offset: 0x80096AC8
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.2.1.1.1.5.6.1 */
										// Start line: 1719
										// Start offset: 0x80096AC8
									/* end block 1.3.2.1.1.1.5.6.1 */
									// End offset: 0x80096AC8
									// End Line: 1719
								/* end block 1.3.2.1.1.1.5.6 */
								// End offset: 0x80096AC8
								// End Line: 1719

								/* begin block 1.3.2.1.1.1.5.7 */
									// Start line: 1719
									// Start offset: 0x80096AC8
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.2.1.1.1.5.7.1 */
										// Start line: 1719
										// Start offset: 0x80096AC8
									/* end block 1.3.2.1.1.1.5.7.1 */
									// End offset: 0x80096AC8
									// End Line: 1719
								/* end block 1.3.2.1.1.1.5.7 */
								// End offset: 0x80096AC8
								// End Line: 1719

								/* begin block 1.3.2.1.1.1.5.8 */
									// Start line: 1719
									// Start offset: 0x80096AC8
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.2.1.1.1.5.8.1 */
										// Start line: 1719
										// Start offset: 0x80096AC8
									/* end block 1.3.2.1.1.1.5.8.1 */
									// End offset: 0x80096AC8
									// End Line: 1719
								/* end block 1.3.2.1.1.1.5.8 */
								// End offset: 0x80096AC8
								// End Line: 1719

								/* begin block 1.3.2.1.1.1.5.9 */
									// Start line: 1719
									// Start offset: 0x80096AC8
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.2.1.1.1.5.9.1 */
										// Start line: 1719
										// Start offset: 0x80096AC8
									/* end block 1.3.2.1.1.1.5.9.1 */
									// End offset: 0x80096AC8
									// End Line: 1719
								/* end block 1.3.2.1.1.1.5.9 */
								// End offset: 0x80096AC8
								// End Line: 1719

								/* begin block 1.3.2.1.1.1.5.10 */
									// Start line: 1719
									// Start offset: 0x80096AC8
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.2.1.1.1.5.10.1 */
										// Start line: 1719
										// Start offset: 0x80096AC8
									/* end block 1.3.2.1.1.1.5.10.1 */
									// End offset: 0x80096AC8
									// End Line: 1719
								/* end block 1.3.2.1.1.1.5.10 */
								// End offset: 0x80096AC8
								// End Line: 1719

								/* begin block 1.3.2.1.1.1.5.11 */
									// Start line: 1719
									// Start offset: 0x80096AC8

									/* begin block 1.3.2.1.1.1.5.11.1 */
										// Start line: 1719
										// Start offset: 0x80096AC8
									/* end block 1.3.2.1.1.1.5.11.1 */
									// End offset: 0x80096AC8
									// End Line: 1719
								/* end block 1.3.2.1.1.1.5.11 */
								// End offset: 0x80096AC8
								// End Line: 1719

								/* begin block 1.3.2.1.1.1.5.12 */
									// Start line: 1719
									// Start offset: 0x80096AC8
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.2.1.1.1.5.12.1 */
										// Start line: 1719
										// Start offset: 0x80096AC8
									/* end block 1.3.2.1.1.1.5.12.1 */
									// End offset: 0x80096AC8
									// End Line: 1719
								/* end block 1.3.2.1.1.1.5.12 */
								// End offset: 0x80096AC8
								// End Line: 1719
							/* end block 1.3.2.1.1.1.5 */
							// End offset: 0x80096B70
							// End Line: 1847
						/* end block 1.3.2.1.1.1 */
						// End offset: 0x80096B70
						// End Line: 1847
					/* end block 1.3.2.1.1 */
					// End offset: 0x80096B70
					// End Line: 1847
				/* end block 1.3.2.1 */
				// End offset: 0x80096B70
				// End Line: 1847
			/* end block 1.3.2 */
			// End offset: 0x80096B70
			// End Line: 1847
		/* end block 1.3 */
		// End offset: 0x80096B70
		// End Line: 1847
	/* end block 1 */
	// End offset: 0x80096B70
	// End Line: 1847

/* WARNING: Type propagation algorithm not settling */

void Status__Q26Speech15DispatchSpeaker(DispatchSpeaker *this)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int ID_UNIT;
  undefined4 uVar4;
  int iVar5;
  Car_tObj *perp;
  ulong uVar6;
  code *pcVar7;
  Speaker *pSVar8;
  DispatchSpeaker *pDVar9;
  
  pSVar8 = (this->Speaker).fSub;
  bVar2 = false;
  if ((pSVar8 == (Speaker *)0x0) ||
     (uVar3 = pSVar8->_vf[0].value,
     ID_UNIT = (**(code **)(uVar3 + 0xdc))
                         ((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 0xd8)),
     ID_UNIT == 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    return;
  }
  pSVar8 = (this->Speaker).fSub;
  uVar3 = pSVar8->_vf[0].value;
  ID_UNIT = (**(code **)(uVar3 + 0xcc))
                      ((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 200));
  if ((*(uint *)(ID_UNIT + 0x260) & 0x200) != 0) {
    pSVar8 = (this->Speaker).fSub;
    uVar3 = pSVar8->_vf[0].value;
    ID_UNIT = (**(code **)(uVar3 + 0xc4))
                        ((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 0xc0));
    pSVar8 = (this->Speaker).fSub;
    if (pSVar8->fHavePerp == (void *)0x0) {
      if (ID_UNIT < 0x640000) {
        uVar3 = pSVar8->_vf[0].value;
        sVar1 = *(short *)(uVar3 + 0x30);
        uVar4 = (**(code **)(uVar3 + 0xdc))
                          ((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 0xd8));
        (**(code **)(uVar3 + 0x34))((int)&(pSVar8->fPosition).flags + (int)sVar1,uVar4);
      }
    }
    else {
      if (0x15e0000 < ID_UNIT) {
        pSVar8->fHavePerp = (void *)0x0;
        (((this->Speaker).fSub)->fUpdate).flags = 0;
        pSVar8 = (this->Speaker).fSub;
        uVar3 = pSVar8->_vf[0].value;
        (**(code **)(uVar3 + 0x14))((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 0x10))
        ;
      }
    }
  }
  if ((this->Speaker)._vf[2].value != 0) {
    uVar3 = (this->Speaker)._vf[1].value - 1;
    (this->Speaker)._vf[1].value = uVar3;
    if (uVar3 != 0) {
      return;
    }
    pDVar9 = (DispatchSpeaker *)(this->Speaker)._vf[2].value;
    if (pDVar9 == this) {
      StatusReply__Q26Speech15DispatchSpeaker(this);
      return;
    }
    pSVar8 = (this->Speaker).fSub;
    bVar2 = false;
    if (pSVar8 != (Speaker *)0x0) {
      bVar2 = pDVar9 == (DispatchSpeaker *)pSVar8->fSub;
    }
    if (bVar2) {
      uVar3 = (pDVar9->Speaker)._vf[0].value;
      (**(code **)(uVar3 + 0x14))
                ((int)&(pDVar9->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0x10));
      return;
    }
    uVar3 = (pDVar9->Speaker)._vf[0].value;
    (**(code **)(uVar3 + 0x14))
              ((int)&(pDVar9->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0x10));
    *(undefined4 *)(iGp00000838 + 0x38c) = 0;
    uVar3 = (this->Speaker)._vf[0].value;
    (**(code **)(uVar3 + 0x74))
              ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0x70));
    return;
  }
  uVar3 = (this->Speaker)._vf[1].value;
  if (0 < (int)uVar3) {
    (this->Speaker)._vf[1].value = uVar3 - 1;
    return;
  }
  pSVar8 = (this->Speaker).fSub;
  bVar2 = false;
  if ((pSVar8->fBlockade).flags == 0) {
    bVar2 = (pSVar8->fArrest).flags == 0;
  }
  if (!bVar2) {
    return;
  }
  pSVar8 = pSVar8->fSub;
  bVar2 = false;
  if (pSVar8 != (Speaker *)0x0) {
    uVar3 = pSVar8->_vf[0].value;
    ID_UNIT = (**(code **)(uVar3 + 0xdc))
                        ((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 0xd8));
    pSVar8 = (this->Speaker).fSub;
    uVar3 = pSVar8->_vf[0].value;
    iVar5 = (**(code **)(uVar3 + 0xdc))
                      ((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 0xd8));
    bVar2 = ID_UNIT != iVar5;
  }
  if (bVar2) {
    Promote__Q26Speech7Speaker(((this->Speaker).fSub)->fSub);
  }
  uVar3 = (this->Speaker)._vf[3].value & 3;
  if (uVar3 == 1) {
LAB_80096abc:
    pSVar8 = (this->Speaker).fSub;
    uVar6 = 1;
  }
  else {
    if (uVar3 < 2) {
      if (uVar3 != 0) goto LAB_80096ac8;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 != 3) goto LAB_80096ac8;
        pSVar8 = (this->Speaker).fSub;
        uVar3 = pSVar8->_vf[0].value;
        ID_UNIT = (**(code **)(uVar3 + 0xa4))
                            ((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 0xa0));
        if ((ID_UNIT != 0) && ((this->Speaker)._vf[3].value == 7)) {
          (((this->Speaker).fSub)->fUpdate).flags = 0;
          pSVar8 = (this->Speaker).fSub;
          uVar3 = pSVar8->_vf[0].value;
          sVar1 = *(short *)(uVar3 + 0x10);
          pcVar7 = *(code **)(uVar3 + 0x14);
code_r0x80096aa0:
          (*pcVar7)((int)&(pSVar8->fPosition).flags + (int)sVar1);
          (this->Speaker)._vf[3].value = (this->Speaker)._vf[3].value + 1;
          return;
        }
        pSVar8 = (this->Speaker).fSub;
        uVar3 = pSVar8->_vf[0].value;
        ID_UNIT = (**(code **)(uVar3 + 0xc4))
                            ((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 0xc0));
        if (ID_UNIT < 0x140000) {
          pSVar8 = (this->Speaker).fSub;
          uVar3 = pSVar8->_vf[0].value;
          sVar1 = *(short *)(uVar3 + 0x78);
          pcVar7 = *(code **)(uVar3 + 0x7c);
          goto code_r0x80096aa0;
        }
        goto LAB_80096abc;
      }
      pSVar8 = (this->Speaker).fSub;
      uVar3 = pSVar8->_vf[0].value;
      bVar2 = false;
      ID_UNIT = (**(code **)(uVar3 + 0xc4))
                          ((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 0xc0));
      if (ID_UNIT < 0x280000) {
        pSVar8 = (this->Speaker).fSub;
        uVar3 = pSVar8->_vf[0].value;
        perp = (Car_tObj *)
               (**(code **)(uVar3 + 0xcc))
                         ((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 200));
        ID_UNIT = CalcMph__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,perp);
        if (0x32 < ID_UNIT) {
          pSVar8 = (this->Speaker).fSub;
          uVar3 = pSVar8->_vf[0].value;
          perp = (Car_tObj *)
                 (**(code **)(uVar3 + 0xdc))
                           ((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 0xd8));
          ID_UNIT = CalcMph__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,perp);
          bVar2 = 0x32 < ID_UNIT;
        }
      }
      if (bVar2) {
        (((this->Speaker).fSub)->fUpdate).flags = 8;
        goto LAB_80096ac8;
      }
    }
    pSVar8 = (this->Speaker).fSub;
    uVar6 = 0x26;
  }
  (pSVar8->fUpdate).flags = uVar6;
LAB_80096ac8:
  *(undefined4 *)(iGp00000838 + 0x38c) = 0;
  uVar3 = (this->Speaker)._vf[0].value;
  ID_UNIT = (**(code **)(uVar3 + 0xf4))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0xf0));
  pSVar8 = (this->Speaker).fSub;
  uVar3 = pSVar8->_vf[0].value;
  iVar5 = (**(code **)(uVar3 + 0x8c))
                    ((int)&(pSVar8->fPosition).flags + (int)*(short *)(uVar3 + 0x88));
  ID_UNIT = *(int *)(ID_UNIT + iVar5 * 4 + 8);
  (this->Speaker).fTo = ID_UNIT;
  SPCHNFS_D_C_INTRO_CALL(ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
  SPCH_PlaySpeech();
  SPCHNFS_D_C_IN_PURS_NEAR_PERP(&((this->Speaker).fSub)->fUpdate);
  SPCH_PlaySpeech();
  pSVar8 = (this->Speaker).fSub;
  uVar3 = (this->Speaker)._vf[3].value;
  (this->Speaker)._vf[1].value = 0x60;
  *(Speaker **)&(this->Speaker)._vf[2].value = pSVar8;
  (this->Speaker)._vf[3].value = uVar3 + 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Status__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$s1*/)
 // line 1853, offset 0x80096b88
	/* begin block 1 */
		// Start line: 1854
		// Start offset: 0x80096B88

		/* begin block 1.1 */
			// Start line: 1854
			// Start offset: 0x80096BC0
			// Variables:
		// 		struct MobileSpeaker *this; // $s1

			/* begin block 1.1.1 */
				// Start line: 1854
				// Start offset: 0x80096BC0

				/* begin block 1.1.1.1 */
					// Start line: 1854
					// Start offset: 0x80096BC0
					// Variables:
				// 		struct Car_tObj *carObj; // $v0
				// 		struct Speech *this; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 1854
						// Start offset: 0x80096BC0
					/* end block 1.1.1.1.1 */
					// End offset: 0x80096BC0
					// End Line: 1854
				/* end block 1.1.1.1 */
				// End offset: 0x80096BC0
				// End Line: 1854
			/* end block 1.1.1 */
			// End offset: 0x80096BC0
			// End Line: 1854
		/* end block 1.1 */
		// End offset: 0x80096BC0
		// End Line: 1854

		/* begin block 1.2 */
			// Start line: 1854
			// Start offset: 0x80096BC0

			/* begin block 1.2.1 */
				// Start line: 1854
				// Start offset: 0x80096BC0
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.2.1.1 */
					// Start line: 1854
					// Start offset: 0x80096BC0
				/* end block 1.2.1.1 */
				// End offset: 0x80096BC0
				// End Line: 1854
			/* end block 1.2.1 */
			// End offset: 0x80096BC0
			// End Line: 1854

			/* begin block 1.2.2 */
				// Start line: 1861
				// Start offset: 0x80096BE0

				/* begin block 1.2.2.1 */
					// Start line: 1863
					// Start offset: 0x80096BE0

					/* begin block 1.2.2.1.1 */
						// Start line: 1863
						// Start offset: 0x80096BE0
					/* end block 1.2.2.1.1 */
					// End offset: 0x80096BE0
					// End Line: 1863
				/* end block 1.2.2.1 */
				// End offset: 0x80096BE0
				// End Line: 1863

				/* begin block 1.2.2.2 */
					// Start line: 1863
					// Start offset: 0x80096BE0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.2.2.1 */
						// Start line: 1863
						// Start offset: 0x80096BE0
					/* end block 1.2.2.2.1 */
					// End offset: 0x80096BE0
					// End Line: 1863
				/* end block 1.2.2.2 */
				// End offset: 0x80096BE0
				// End Line: 1863

				/* begin block 1.2.2.3 */
					// Start line: 1863
					// Start offset: 0x80096BE0
					// Variables:
				// 		struct MobileSpeaker *this; // $s1

					/* begin block 1.2.2.3.1 */
						// Start line: 1863
						// Start offset: 0x80096BE0
					/* end block 1.2.2.3.1 */
					// End offset: 0x80096BE0
					// End Line: 1863
				/* end block 1.2.2.3 */
				// End offset: 0x80096BE0
				// End Line: 1863

				/* begin block 1.2.2.4 */
					// Start line: 1863
					// Start offset: 0x80096BE0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.2.4.1 */
						// Start line: 1863
						// Start offset: 0x80096BE0
					/* end block 1.2.2.4.1 */
					// End offset: 0x80096BE0
					// End Line: 1863
				/* end block 1.2.2.4 */
				// End offset: 0x80096BE0
				// End Line: 1863

				/* begin block 1.2.2.5 */
					// Start line: 1863
					// Start offset: 0x80096BE0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.2.5.1 */
						// Start line: 1863
						// Start offset: 0x80096BE0
					/* end block 1.2.2.5.1 */
					// End offset: 0x80096BE0
					// End Line: 1863
				/* end block 1.2.2.5 */
				// End offset: 0x80096BE0
				// End Line: 1863

				/* begin block 1.2.2.6 */
					// Start line: 1863
					// Start offset: 0x80096BE0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.2.6.1 */
						// Start line: 1863
						// Start offset: 0x80096BE0
					/* end block 1.2.2.6.1 */
					// End offset: 0x80096BE0
					// End Line: 1863
				/* end block 1.2.2.6 */
				// End offset: 0x80096BE0
				// End Line: 1863

				/* begin block 1.2.2.7 */
					// Start line: 1863
					// Start offset: 0x80096BE0
					// Variables:
				// 		struct MobileSpeaker *this; // $s1

					/* begin block 1.2.2.7.1 */
						// Start line: 1863
						// Start offset: 0x80096BE0
					/* end block 1.2.2.7.1 */
					// End offset: 0x80096BE0
					// End Line: 1863
				/* end block 1.2.2.7 */
				// End offset: 0x80096BE0
				// End Line: 1863

				/* begin block 1.2.2.8 */
					// Start line: 1863
					// Start offset: 0x80096BE0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.2.8.1 */
						// Start line: 1863
						// Start offset: 0x80096BE0
					/* end block 1.2.2.8.1 */
					// End offset: 0x80096BE0
					// End Line: 1863
				/* end block 1.2.2.8 */
				// End offset: 0x80096BE0
				// End Line: 1863
			/* end block 1.2.2 */
			// End offset: 0x80096BE0
			// End Line: 1863

			/* begin block 1.2.3 */
				// Start line: 1870
				// Start offset: 0x80096C34

				/* begin block 1.2.3.1 */
					// Start line: 1870
					// Start offset: 0x80096C34

					/* begin block 1.2.3.1.1 */
						// Start line: 1870
						// Start offset: 0x80096C64
						// Variables:
					// 		struct Speaker *this; // $s1

						/* begin block 1.2.3.1.1.1 */
							// Start line: 1870
							// Start offset: 0x80096C64
						/* end block 1.2.3.1.1.1 */
						// End offset: 0x80096C64
						// End Line: 1870
					/* end block 1.2.3.1.1 */
					// End offset: 0x80096C64
					// End Line: 1870

					/* begin block 1.2.3.1.2 */
						// Start line: 1871
						// Start offset: 0x80096C78

						/* begin block 1.2.3.1.2.1 */
							// Start line: 1872
							// Start offset: 0x80096C78

							/* begin block 1.2.3.1.2.1.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.1.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.1 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.2 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.2.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.2.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.2 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.3 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct MobileSpeaker *this; // $s1

							/* begin block 1.2.3.1.2.3.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.3.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.3 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.4 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.4.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.4.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.4 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.5 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.5.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.5.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.5 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.6 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.6.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.6.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.6 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.7 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct MobileSpeaker *this; // $s1

							/* begin block 1.2.3.1.2.7.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.7.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.7 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.8 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.8.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.8.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.8 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.9 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.9.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.9.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.9 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.10 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.10.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.10.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.10 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.11 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.11.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.11.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.11 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.12 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.12.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.12.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.12 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.13 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.13.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.13.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.13 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.14 */
							// Start line: 1872
							// Start offset: 0x80096C78

							/* begin block 1.2.3.1.2.14.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.14.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.14 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.15 */
							// Start line: 1872
							// Start offset: 0x80096C78
							// Variables:
						// 		struct Speaker *Sub; // $s1

							/* begin block 1.2.3.1.2.15.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.15.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.15 */
						// End offset: 0x80096C78
						// End Line: 1872

						/* begin block 1.2.3.1.2.16 */
							// Start line: 1872
							// Start offset: 0x80096C78

							/* begin block 1.2.3.1.2.16.1 */
								// Start line: 1872
								// Start offset: 0x80096C78
							/* end block 1.2.3.1.2.16.1 */
							// End offset: 0x80096C78
							// End Line: 1872
						/* end block 1.2.3.1.2.16 */
						// End offset: 0x80096C78
						// End Line: 1872
					/* end block 1.2.3.1.2 */
					// End offset: 0x80096C78
					// End Line: 1872

					/* begin block 1.2.3.1.3 */
						// Start line: 1886
						// Start offset: 0x80096D68

						/* begin block 1.2.3.1.3.1 */
							// Start line: 1886
							// Start offset: 0x80096D68

							/* begin block 1.2.3.1.3.1.1 */
								// Start line: 1886
								// Start offset: 0x80096D8C
								// Variables:
							// 		struct Speaker *this; // $s1

								/* begin block 1.2.3.1.3.1.1.1 */
									// Start line: 1886
									// Start offset: 0x80096D8C
								/* end block 1.2.3.1.3.1.1.1 */
								// End offset: 0x80096D8C
								// End Line: 1886
							/* end block 1.2.3.1.3.1.1 */
							// End offset: 0x80096D8C
							// End Line: 1886

							/* begin block 1.2.3.1.3.1.2 */
								// Start line: 1886
								// Start offset: 0x80096D9C
								// Variables:
							// 		struct Speaker *this; // $s1

								/* begin block 1.2.3.1.3.1.2.1 */
									// Start line: 1886
									// Start offset: 0x80096D9C
								/* end block 1.2.3.1.3.1.2.1 */
								// End offset: 0x80096D9C
								// End Line: 1886
							/* end block 1.2.3.1.3.1.2 */
							// End offset: 0x80096D9C
							// End Line: 1886

							/* begin block 1.2.3.1.3.1.3 */
								// Start line: 1886
								// Start offset: 0x80096DAC
								// Variables:
							// 		struct Speaker *this; // $s1

								/* begin block 1.2.3.1.3.1.3.1 */
									// Start line: 1886
									// Start offset: 0x80096DAC
								/* end block 1.2.3.1.3.1.3.1 */
								// End offset: 0x80096DAC
								// End Line: 1886
							/* end block 1.2.3.1.3.1.3 */
							// End offset: 0x80096DAC
							// End Line: 1886

							/* begin block 1.2.3.1.3.1.4 */
								// Start line: 1887
								// Start offset: 0x80096DE0

								/* begin block 1.2.3.1.3.1.4.1 */
									// Start line: 1892
									// Start offset: 0x80096DE0

									/* begin block 1.2.3.1.3.1.4.1.1 */
										// Start line: 1892
										// Start offset: 0x80096DE0
									/* end block 1.2.3.1.3.1.4.1.1 */
									// End offset: 0x80096DE0
									// End Line: 1892
								/* end block 1.2.3.1.3.1.4.1 */
								// End offset: 0x80096DE0
								// End Line: 1892

								/* begin block 1.2.3.1.3.1.4.2 */
									// Start line: 1892
									// Start offset: 0x80096DE0
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.2.3.1.3.1.4.2.1 */
										// Start line: 1892
										// Start offset: 0x80096DE0
									/* end block 1.2.3.1.3.1.4.2.1 */
									// End offset: 0x80096DE0
									// End Line: 1892
								/* end block 1.2.3.1.3.1.4.2 */
								// End offset: 0x80096DE0
								// End Line: 1892

								/* begin block 1.2.3.1.3.1.4.3 */
									// Start line: 1892
									// Start offset: 0x80096DE0
									// Variables:
								// 		struct MobileSpeaker *this; // $s1

									/* begin block 1.2.3.1.3.1.4.3.1 */
										// Start line: 1892
										// Start offset: 0x80096DE0
									/* end block 1.2.3.1.3.1.4.3.1 */
									// End offset: 0x80096DE0
									// End Line: 1892
								/* end block 1.2.3.1.3.1.4.3 */
								// End offset: 0x80096DE0
								// End Line: 1892

								/* begin block 1.2.3.1.3.1.4.4 */
									// Start line: 1892
									// Start offset: 0x80096DE0
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.2.3.1.3.1.4.4.1 */
										// Start line: 1892
										// Start offset: 0x80096DE0
									/* end block 1.2.3.1.3.1.4.4.1 */
									// End offset: 0x80096DE0
									// End Line: 1892
								/* end block 1.2.3.1.3.1.4.4 */
								// End offset: 0x80096DE0
								// End Line: 1892

								/* begin block 1.2.3.1.3.1.4.5 */
									// Start line: 1892
									// Start offset: 0x80096DE0
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.2.3.1.3.1.4.5.1 */
										// Start line: 1892
										// Start offset: 0x80096DE0
									/* end block 1.2.3.1.3.1.4.5.1 */
									// End offset: 0x80096DE0
									// End Line: 1892
								/* end block 1.2.3.1.3.1.4.5 */
								// End offset: 0x80096DE0
								// End Line: 1892

								/* begin block 1.2.3.1.3.1.4.6 */
									// Start line: 1892
									// Start offset: 0x80096DE0
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.2.3.1.3.1.4.6.1 */
										// Start line: 1892
										// Start offset: 0x80096DE0
									/* end block 1.2.3.1.3.1.4.6.1 */
									// End offset: 0x80096DE0
									// End Line: 1892
								/* end block 1.2.3.1.3.1.4.6 */
								// End offset: 0x80096DE0
								// End Line: 1892

								/* begin block 1.2.3.1.3.1.4.7 */
									// Start line: 1892
									// Start offset: 0x80096DE0
									// Variables:
								// 		struct MobileSpeaker *this; // $s1

									/* begin block 1.2.3.1.3.1.4.7.1 */
										// Start line: 1892
										// Start offset: 0x80096DE0
									/* end block 1.2.3.1.3.1.4.7.1 */
									// End offset: 0x80096DE0
									// End Line: 1892
								/* end block 1.2.3.1.3.1.4.7 */
								// End offset: 0x80096DE0
								// End Line: 1892
							/* end block 1.2.3.1.3.1.4 */
							// End offset: 0x80096DE0
							// End Line: 1892

							/* begin block 1.2.3.1.3.1.5 */
								// Start line: 1899
								// Start offset: 0x80096E30

								/* begin block 1.2.3.1.3.1.5.1 */
									// Start line: 1899
									// Start offset: 0x80096E30

									/* begin block 1.2.3.1.3.1.5.1.1 */
										// Start line: 1899
										// Start offset: 0x80096E30

										/* begin block 1.2.3.1.3.1.5.1.1.1 */
											// Start line: 1899
											// Start offset: 0x80096E30
										/* end block 1.2.3.1.3.1.5.1.1.1 */
										// End offset: 0x80096E30
										// End Line: 1899
									/* end block 1.2.3.1.3.1.5.1.1 */
									// End offset: 0x80096E30
									// End Line: 1899

									/* begin block 1.2.3.1.3.1.5.1.2 */
										// Start line: 1899
										// Start offset: 0x80096E48

										/* begin block 1.2.3.1.3.1.5.1.2.1 */
											// Start line: 1899
											// Start offset: 0x80096E48
										/* end block 1.2.3.1.3.1.5.1.2.1 */
										// End offset: 0x80096E48
										// End Line: 1899
									/* end block 1.2.3.1.3.1.5.1.2 */
									// End offset: 0x80096E48
									// End Line: 1899

									/* begin block 1.2.3.1.3.1.5.1.3 */
										// Start line: 1899
										// Start offset: 0x80096E48

										/* begin block 1.2.3.1.3.1.5.1.3.1 */
											// Start line: 1899
											// Start offset: 0x80096E48
										/* end block 1.2.3.1.3.1.5.1.3.1 */
										// End offset: 0x80096E48
										// End Line: 1899
									/* end block 1.2.3.1.3.1.5.1.3 */
									// End offset: 0x80096E48
									// End Line: 1899

									/* begin block 1.2.3.1.3.1.5.1.4 */
										// Start line: 1900
										// Start offset: 0x80096E70

										/* begin block 1.2.3.1.3.1.5.1.4.1 */
											// Start line: 1854
											// Start offset: 0x80096E70
											// Variables:
										// 		struct MobileSpeaker *this; // $s1

											/* begin block 1.2.3.1.3.1.5.1.4.1.1 */
												// Start line: 1854
												// Start offset: 0x80096E70
											/* end block 1.2.3.1.3.1.5.1.4.1.1 */
											// End offset: 0x80096E70
											// End Line: 1854
										/* end block 1.2.3.1.3.1.5.1.4.1 */
										// End offset: 0x80096E70
										// End Line: 1854

										/* begin block 1.2.3.1.3.1.5.1.4.2 */
											// Start line: 1854
											// Start offset: 0x80096E70
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.3.1.3.1.5.1.4.2.1 */
												// Start line: 1854
												// Start offset: 0x80096E70
											/* end block 1.2.3.1.3.1.5.1.4.2.1 */
											// End offset: 0x80096E70
											// End Line: 1854
										/* end block 1.2.3.1.3.1.5.1.4.2 */
										// End offset: 0x80096E70
										// End Line: 1854

										/* begin block 1.2.3.1.3.1.5.1.4.3 */
											// Start line: 1901
											// Start offset: 0x80096E70

											/* begin block 1.2.3.1.3.1.5.1.4.3.1 */
												// Start line: 1901
												// Start offset: 0x80096E70
											/* end block 1.2.3.1.3.1.5.1.4.3.1 */
											// End offset: 0x80096E70
											// End Line: 1901
										/* end block 1.2.3.1.3.1.5.1.4.3 */
										// End offset: 0x80096E70
										// End Line: 1901
									/* end block 1.2.3.1.3.1.5.1.4 */
									// End offset: 0x80096E70
									// End Line: 1901

									/* begin block 1.2.3.1.3.1.5.1.5 */
										// Start line: 1905
										// Start offset: 0x80096EB0

										/* begin block 1.2.3.1.3.1.5.1.5.1 */
											// Start line: 1910
											// Start offset: 0x80096EB0

											/* begin block 1.2.3.1.3.1.5.1.5.1.1 */
												// Start line: 1910
												// Start offset: 0x80096EB0
											/* end block 1.2.3.1.3.1.5.1.5.1.1 */
											// End offset: 0x80096EB0
											// End Line: 1910
										/* end block 1.2.3.1.3.1.5.1.5.1 */
										// End offset: 0x80096EB0
										// End Line: 1910

										/* begin block 1.2.3.1.3.1.5.1.5.2 */
											// Start line: 1910
											// Start offset: 0x80096EB0
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.3.1.3.1.5.1.5.2.1 */
												// Start line: 1910
												// Start offset: 0x80096EB0
											/* end block 1.2.3.1.3.1.5.1.5.2.1 */
											// End offset: 0x80096EB0
											// End Line: 1910
										/* end block 1.2.3.1.3.1.5.1.5.2 */
										// End offset: 0x80096EB0
										// End Line: 1910

										/* begin block 1.2.3.1.3.1.5.1.5.3 */
											// Start line: 1910
											// Start offset: 0x80096EB0
											// Variables:
										// 		struct MobileSpeaker *this; // $s1

											/* begin block 1.2.3.1.3.1.5.1.5.3.1 */
												// Start line: 1910
												// Start offset: 0x80096EB0
											/* end block 1.2.3.1.3.1.5.1.5.3.1 */
											// End offset: 0x80096EB0
											// End Line: 1910
										/* end block 1.2.3.1.3.1.5.1.5.3 */
										// End offset: 0x80096EB0
										// End Line: 1910

										/* begin block 1.2.3.1.3.1.5.1.5.4 */
											// Start line: 1910
											// Start offset: 0x80096EB0
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.3.1.3.1.5.1.5.4.1 */
												// Start line: 1910
												// Start offset: 0x80096EB0
											/* end block 1.2.3.1.3.1.5.1.5.4.1 */
											// End offset: 0x80096EB0
											// End Line: 1910
										/* end block 1.2.3.1.3.1.5.1.5.4 */
										// End offset: 0x80096EB0
										// End Line: 1910

										/* begin block 1.2.3.1.3.1.5.1.5.5 */
											// Start line: 1910
											// Start offset: 0x80096EB0
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.3.1.3.1.5.1.5.5.1 */
												// Start line: 1910
												// Start offset: 0x80096EB0
											/* end block 1.2.3.1.3.1.5.1.5.5.1 */
											// End offset: 0x80096EB0
											// End Line: 1910
										/* end block 1.2.3.1.3.1.5.1.5.5 */
										// End offset: 0x80096EB0
										// End Line: 1910

										/* begin block 1.2.3.1.3.1.5.1.5.6 */
											// Start line: 1910
											// Start offset: 0x80096EB0
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.3.1.3.1.5.1.5.6.1 */
												// Start line: 1910
												// Start offset: 0x80096EB0
											/* end block 1.2.3.1.3.1.5.1.5.6.1 */
											// End offset: 0x80096EB0
											// End Line: 1910
										/* end block 1.2.3.1.3.1.5.1.5.6 */
										// End offset: 0x80096EB0
										// End Line: 1910

										/* begin block 1.2.3.1.3.1.5.1.5.7 */
											// Start line: 1910
											// Start offset: 0x80096EB0

											/* begin block 1.2.3.1.3.1.5.1.5.7.1 */
												// Start line: 1919
												// Start offset: 0x80096F7C

												/* begin block 1.2.3.1.3.1.5.1.5.7.1.1 */
													// Start line: 1920
													// Start offset: 0x80096F7C

													/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.1 */
														// Start line: 1921
														// Start offset: 0x80096FAC

														/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.1.1 */
															// Start line: 1854
															// Start offset: 0x80096FAC
															// Variables:
														// 		struct MobileSpeaker *this; // $s1

															/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.1.1.1 */
																// Start line: 1854
																// Start offset: 0x80096FAC
															/* end block 1.2.3.1.3.1.5.1.5.7.1.1.1.1.1 */
															// End offset: 0x80096FAC
															// End Line: 1854
														/* end block 1.2.3.1.3.1.5.1.5.7.1.1.1.1 */
														// End offset: 0x80096FAC
														// End Line: 1854
													/* end block 1.2.3.1.3.1.5.1.5.7.1.1.1 */
													// End offset: 0x80096FAC
													// End Line: 1921

													/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2 */
														// Start line: 1922
														// Start offset: 0x80096FBC

														/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1 */
															// Start line: 1922
															// Start offset: 0x80096FBC

															/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.1 */
																// Start line: 1922
																// Start offset: 0x80096FBC
																// Variables:
															// 		struct Speaker *this; // $s1

																/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.1.1 */
																	// Start line: 1922
																	// Start offset: 0x80096FBC
																/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.1.1 */
																// End offset: 0x80096FBC
																// End Line: 1922
															/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.1 */
															// End offset: 0x80096FBC
															// End Line: 1922

															/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2 */
																// Start line: 1923
																// Start offset: 0x80096FCC

																/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.1 */
																	// Start line: 1854
																	// Start offset: 0x80096FCC
																	// Variables:
																// 		struct MobileSpeaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.1.1 */
																		// Start line: 1854
																		// Start offset: 0x80096FCC
																	/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.1.1 */
																	// End offset: 0x80096FCC
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.1 */
																// End offset: 0x80096FCC
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.2 */
																	// Start line: 1854
																	// Start offset: 0x80096FCC
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.2.1 */
																		// Start line: 1854
																		// Start offset: 0x80096FCC
																	/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.2.1 */
																	// End offset: 0x80096FCC
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.2 */
																// End offset: 0x80096FCC
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.3 */
																	// Start line: 1854
																	// Start offset: 0x80096FCC
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.3.1 */
																		// Start line: 1854
																		// Start offset: 0x80096FCC
																	/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.3.1 */
																	// End offset: 0x80096FCC
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.3 */
																// End offset: 0x80096FCC
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.4 */
																	// Start line: 1854
																	// Start offset: 0x80096FCC
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.4.1 */
																		// Start line: 1854
																		// Start offset: 0x80096FCC
																	/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.4.1 */
																	// End offset: 0x80096FCC
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2.4 */
																// End offset: 0x80096FCC
																// End Line: 1854
															/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.2 */
															// End offset: 0x80096FCC
															// End Line: 1923

															/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3 */
																// Start line: 1924
																// Start offset: 0x80096FE8

																/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1 */
																	// Start line: 1924
																	// Start offset: 0x80096FE8

																	/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.1 */
																		// Start line: 1924
																		// Start offset: 0x80096FE8
																		// Variables:
																	// 		struct Speaker *this; // $s1

																		/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.1.1 */
																			// Start line: 1924
																			// Start offset: 0x80096FE8
																		/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.1.1 */
																		// End offset: 0x80096FE8
																		// End Line: 1924
																	/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.1 */
																	// End offset: 0x80096FE8
																	// End Line: 1924

																	/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2 */
																		// Start line: 1925
																		// Start offset: 0x80096FF0

																		/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2.1 */
																			// Start line: 1854
																			// Start offset: 0x80096FF0
																			// Variables:
																		// 		struct MobileSpeaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2.1.1 */
																				// Start line: 1854
																				// Start offset: 0x80096FF0
																			/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2.1.1 */
																			// End offset: 0x80096FF0
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2.1 */
																		// End offset: 0x80096FF0
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2.2 */
																			// Start line: 1854
																			// Start offset: 0x80096FF0
																			// Variables:
																		// 		struct MobileSpeaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2.2.1 */
																				// Start line: 1854
																				// Start offset: 0x80096FF0
																			/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2.2.1 */
																			// End offset: 0x80096FF0
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2.2 */
																		// End offset: 0x80096FF0
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2.3 */
																			// Start line: 1854
																			// Start offset: 0x80096FF0
																			// Variables:
																		// 		struct MobileSpeaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2.3.1 */
																				// Start line: 1854
																				// Start offset: 0x80096FF0
																			/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2.3.1 */
																			// End offset: 0x80096FF0
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2.3 */
																		// End offset: 0x80096FF0
																		// End Line: 1854
																	/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.2 */
																	// End offset: 0x80096FF0
																	// End Line: 1925

																	/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3 */
																		// Start line: 1927
																		// Start offset: 0x80096FF0

																		/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.1 */
																			// Start line: 1854
																			// Start offset: 0x80096FF0
																			// Variables:
																		// 		struct MobileSpeaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.1.1 */
																				// Start line: 1854
																				// Start offset: 0x80096FF0
																			/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.1.1 */
																			// End offset: 0x80096FF0
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.1 */
																		// End offset: 0x80096FF0
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.2 */
																			// Start line: 1854
																			// Start offset: 0x80096FF0
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.2.1 */
																				// Start line: 1854
																				// Start offset: 0x80096FF0
																			/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.2.1 */
																			// End offset: 0x80096FF0
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.2 */
																		// End offset: 0x80096FF0
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.3 */
																			// Start line: 1854
																			// Start offset: 0x80096FF0
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.3.1 */
																				// Start line: 1854
																				// Start offset: 0x80096FF0
																			/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.3.1 */
																			// End offset: 0x80096FF0
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.3 */
																		// End offset: 0x80096FF0
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.4 */
																			// Start line: 1854
																			// Start offset: 0x80096FF0
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.4.1 */
																				// Start line: 1854
																				// Start offset: 0x80096FF0
																			/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.4.1 */
																			// End offset: 0x80096FF0
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.4 */
																		// End offset: 0x80096FF0
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.5 */
																			// Start line: 1854
																			// Start offset: 0x80096FF0
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.5.1 */
																				// Start line: 1854
																				// Start offset: 0x80096FF0
																			/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.5.1 */
																			// End offset: 0x80096FF0
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.5 */
																		// End offset: 0x80096FF0
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.6 */
																			// Start line: 1854
																			// Start offset: 0x80096FF0
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.6.1 */
																				// Start line: 1854
																				// Start offset: 0x80096FF0
																			/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.6.1 */
																			// End offset: 0x80096FF0
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3.6 */
																		// End offset: 0x80096FF0
																		// End Line: 1854
																	/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1.3 */
																	// End offset: 0x80096FF0
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3.1 */
																// End offset: 0x80096FF0
																// End Line: 1854
															/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1.3 */
															// End offset: 0x80096FF0
															// End Line: 1854
														/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2.1 */
														// End offset: 0x80096FF0
														// End Line: 1854
													/* end block 1.2.3.1.3.1.5.1.5.7.1.1.2 */
													// End offset: 0x80096FF0
													// End Line: 1854
												/* end block 1.2.3.1.3.1.5.1.5.7.1.1 */
												// End offset: 0x80096FF0
												// End Line: 1854
											/* end block 1.2.3.1.3.1.5.1.5.7.1 */
											// End offset: 0x80096FF0
											// End Line: 1854

											/* begin block 1.2.3.1.3.1.5.1.5.7.2 */
												// Start line: 1929
												// Start offset: 0x80097014

												/* begin block 1.2.3.1.3.1.5.1.5.7.2.1 */
													// Start line: 1929
													// Start offset: 0x80097014

													/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.1 */
														// Start line: 1929
														// Start offset: 0x80097014
														// Variables:
													// 		struct Speaker *this; // $s1

														/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.1.1 */
															// Start line: 1929
															// Start offset: 0x80097014
														/* end block 1.2.3.1.3.1.5.1.5.7.2.1.1.1 */
														// End offset: 0x80097014
														// End Line: 1929
													/* end block 1.2.3.1.3.1.5.1.5.7.2.1.1 */
													// End offset: 0x80097014
													// End Line: 1929

													/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2 */
														// Start line: 1930
														// Start offset: 0x80097024

														/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1 */
															// Start line: 1931
															// Start offset: 0x80097024

															/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.1 */
																// Start line: 1931
																// Start offset: 0x80097024
																// Variables:
															// 		struct Speaker *this; // $s1

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.1.1 */
																	// Start line: 1931
																	// Start offset: 0x80097024
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.1.1 */
																// End offset: 0x80097024
																// End Line: 1931
															/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.1 */
															// End offset: 0x80097024
															// End Line: 1931

															/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2 */
																// Start line: 1932
																// Start offset: 0x80097034

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.1 */
																	// Start line: 1854
																	// Start offset: 0x80097034
																	// Variables:
																// 		struct MobileSpeaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.1.1 */
																		// Start line: 1854
																		// Start offset: 0x80097034
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.1.1 */
																	// End offset: 0x80097034
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.1 */
																// End offset: 0x80097034
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.2 */
																	// Start line: 1854
																	// Start offset: 0x80097034
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.2.1 */
																		// Start line: 1854
																		// Start offset: 0x80097034
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.2.1 */
																	// End offset: 0x80097034
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.2 */
																// End offset: 0x80097034
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.3 */
																	// Start line: 1854
																	// Start offset: 0x80097034
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.3.1 */
																		// Start line: 1854
																		// Start offset: 0x80097034
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.3.1 */
																	// End offset: 0x80097034
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.3 */
																// End offset: 0x80097034
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.4 */
																	// Start line: 1854
																	// Start offset: 0x80097034
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.4.1 */
																		// Start line: 1854
																		// Start offset: 0x80097034
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.4.1 */
																	// End offset: 0x80097034
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.4 */
																// End offset: 0x80097034
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.5 */
																	// Start line: 1854
																	// Start offset: 0x80097034
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.5.1 */
																		// Start line: 1854
																		// Start offset: 0x80097034
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.5.1 */
																	// End offset: 0x80097034
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.5 */
																// End offset: 0x80097034
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.6 */
																	// Start line: 1854
																	// Start offset: 0x80097034
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.6.1 */
																		// Start line: 1854
																		// Start offset: 0x80097034
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.6.1 */
																	// End offset: 0x80097034
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.6 */
																// End offset: 0x80097034
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.7 */
																	// Start line: 1854
																	// Start offset: 0x80097034
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.7.1 */
																		// Start line: 1854
																		// Start offset: 0x80097034
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.7.1 */
																	// End offset: 0x80097034
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2.7 */
																// End offset: 0x80097034
																// End Line: 1854
															/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.2 */
															// End offset: 0x80097034
															// End Line: 1854

															/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3 */
																// Start line: 1933
																// Start offset: 0x80097068

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1 */
																	// Start line: 1933
																	// Start offset: 0x80097068

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.1 */
																		// Start line: 1933
																		// Start offset: 0x80097068
																		// Variables:
																	// 		struct Speaker *this; // $s1

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.1.1 */
																			// Start line: 1933
																			// Start offset: 0x80097068
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.1.1 */
																		// End offset: 0x80097068
																		// End Line: 1933
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.1 */
																	// End offset: 0x80097068
																	// End Line: 1933

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2 */
																		// Start line: 1934
																		// Start offset: 0x80097070

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2.1 */
																			// Start line: 1854
																			// Start offset: 0x80097070
																			// Variables:
																		// 		struct MobileSpeaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2.1.1 */
																				// Start line: 1854
																				// Start offset: 0x80097070
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2.1.1 */
																			// End offset: 0x80097070
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2.1 */
																		// End offset: 0x80097070
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2.2 */
																			// Start line: 1854
																			// Start offset: 0x80097070
																			// Variables:
																		// 		struct MobileSpeaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2.2.1 */
																				// Start line: 1854
																				// Start offset: 0x80097070
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2.2.1 */
																			// End offset: 0x80097070
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2.2 */
																		// End offset: 0x80097070
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2.3 */
																			// Start line: 1854
																			// Start offset: 0x80097070
																			// Variables:
																		// 		struct MobileSpeaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2.3.1 */
																				// Start line: 1854
																				// Start offset: 0x80097070
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2.3.1 */
																			// End offset: 0x80097070
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2.3 */
																		// End offset: 0x80097070
																		// End Line: 1854
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.2 */
																	// End offset: 0x80097070
																	// End Line: 1934

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3 */
																		// Start line: 1936
																		// Start offset: 0x80097070

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.1 */
																			// Start line: 1854
																			// Start offset: 0x80097070
																			// Variables:
																		// 		struct MobileSpeaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.1.1 */
																				// Start line: 1854
																				// Start offset: 0x80097070
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.1.1 */
																			// End offset: 0x80097070
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.1 */
																		// End offset: 0x80097070
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.2 */
																			// Start line: 1854
																			// Start offset: 0x80097070
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.2.1 */
																				// Start line: 1854
																				// Start offset: 0x80097070
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.2.1 */
																			// End offset: 0x80097070
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.2 */
																		// End offset: 0x80097070
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.3 */
																			// Start line: 1854
																			// Start offset: 0x80097070
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.3.1 */
																				// Start line: 1854
																				// Start offset: 0x80097070
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.3.1 */
																			// End offset: 0x80097070
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.3 */
																		// End offset: 0x80097070
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.4 */
																			// Start line: 1854
																			// Start offset: 0x80097070
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.4.1 */
																				// Start line: 1854
																				// Start offset: 0x80097070
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.4.1 */
																			// End offset: 0x80097070
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.4 */
																		// End offset: 0x80097070
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.5 */
																			// Start line: 1854
																			// Start offset: 0x80097070
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.5.1 */
																				// Start line: 1854
																				// Start offset: 0x80097070
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.5.1 */
																			// End offset: 0x80097070
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.5 */
																		// End offset: 0x80097070
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.6 */
																			// Start line: 1854
																			// Start offset: 0x80097070
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.6.1 */
																				// Start line: 1854
																				// Start offset: 0x80097070
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.6.1 */
																			// End offset: 0x80097070
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3.6 */
																		// End offset: 0x80097070
																		// End Line: 1854
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1.3 */
																	// End offset: 0x80097070
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3.1 */
																// End offset: 0x80097070
																// End Line: 1854
															/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1.3 */
															// End offset: 0x80097070
															// End Line: 1854
														/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2.1 */
														// End offset: 0x80097070
														// End Line: 1854
													/* end block 1.2.3.1.3.1.5.1.5.7.2.1.2 */
													// End offset: 0x80097070
													// End Line: 1854

													/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3 */
														// Start line: 1939
														// Start offset: 0x80097098

														/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1 */
															// Start line: 1940
															// Start offset: 0x80097098

															/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.1 */
																// Start line: 1940
																// Start offset: 0x80097098
																// Variables:
															// 		struct Speaker *this; // $s1

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.1.1 */
																	// Start line: 1940
																	// Start offset: 0x80097098
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.1.1 */
																// End offset: 0x80097098
																// End Line: 1940
															/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.1 */
															// End offset: 0x80097098
															// End Line: 1940

															/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2 */
																// Start line: 1941
																// Start offset: 0x800970A8

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.1 */
																	// Start line: 1854
																	// Start offset: 0x800970A8
																	// Variables:
																// 		struct MobileSpeaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.1.1 */
																		// Start line: 1854
																		// Start offset: 0x800970A8
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.1.1 */
																	// End offset: 0x800970A8
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.1 */
																// End offset: 0x800970A8
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.2 */
																	// Start line: 1854
																	// Start offset: 0x800970A8
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.2.1 */
																		// Start line: 1854
																		// Start offset: 0x800970A8
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.2.1 */
																	// End offset: 0x800970A8
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.2 */
																// End offset: 0x800970A8
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.3 */
																	// Start line: 1854
																	// Start offset: 0x800970A8
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.3.1 */
																		// Start line: 1854
																		// Start offset: 0x800970A8
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.3.1 */
																	// End offset: 0x800970A8
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.3 */
																// End offset: 0x800970A8
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.4 */
																	// Start line: 1854
																	// Start offset: 0x800970A8
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.4.1 */
																		// Start line: 1854
																		// Start offset: 0x800970A8
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.4.1 */
																	// End offset: 0x800970A8
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.4 */
																// End offset: 0x800970A8
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.5 */
																	// Start line: 1854
																	// Start offset: 0x800970A8
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.5.1 */
																		// Start line: 1854
																		// Start offset: 0x800970A8
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.5.1 */
																	// End offset: 0x800970A8
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.5 */
																// End offset: 0x800970A8
																// End Line: 1854

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.6 */
																	// Start line: 1854
																	// Start offset: 0x800970A8
																	// Variables:
																// 		struct Speaker *this; // $s1

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.6.1 */
																		// Start line: 1854
																		// Start offset: 0x800970A8
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.6.1 */
																	// End offset: 0x800970A8
																	// End Line: 1854
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2.6 */
																// End offset: 0x800970A8
																// End Line: 1854
															/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.2 */
															// End offset: 0x800970A8
															// End Line: 1854

															/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3 */
																// Start line: 1942
																// Start offset: 0x800970D4

																/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1 */
																	// Start line: 1942
																	// Start offset: 0x800970D4

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.1 */
																		// Start line: 1942
																		// Start offset: 0x800970D4
																		// Variables:
																	// 		struct Speaker *this; // $s1

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.1.1 */
																			// Start line: 1942
																			// Start offset: 0x800970D4
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.1.1 */
																		// End offset: 0x800970D4
																		// End Line: 1942
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.1 */
																	// End offset: 0x800970D4
																	// End Line: 1942

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2 */
																		// Start line: 1943
																		// Start offset: 0x800970DC

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2.1 */
																			// Start line: 1854
																			// Start offset: 0x800970DC
																			// Variables:
																		// 		struct MobileSpeaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2.1.1 */
																				// Start line: 1854
																				// Start offset: 0x800970DC
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2.1.1 */
																			// End offset: 0x800970DC
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2.1 */
																		// End offset: 0x800970DC
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2.2 */
																			// Start line: 1854
																			// Start offset: 0x800970DC
																			// Variables:
																		// 		struct MobileSpeaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2.2.1 */
																				// Start line: 1854
																				// Start offset: 0x800970DC
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2.2.1 */
																			// End offset: 0x800970DC
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2.2 */
																		// End offset: 0x800970DC
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2.3 */
																			// Start line: 1854
																			// Start offset: 0x800970DC
																			// Variables:
																		// 		struct MobileSpeaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2.3.1 */
																				// Start line: 1854
																				// Start offset: 0x800970DC
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2.3.1 */
																			// End offset: 0x800970DC
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2.3 */
																		// End offset: 0x800970DC
																		// End Line: 1854
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.2 */
																	// End offset: 0x800970DC
																	// End Line: 1943

																	/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3 */
																		// Start line: 1945
																		// Start offset: 0x800970F4

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.1 */
																			// Start line: 1854
																			// Start offset: 0x800970F4
																			// Variables:
																		// 		struct MobileSpeaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.1.1 */
																				// Start line: 1854
																				// Start offset: 0x800970F4
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.1.1 */
																			// End offset: 0x800970F4
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.1 */
																		// End offset: 0x800970F4
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.2 */
																			// Start line: 1854
																			// Start offset: 0x800970F4
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.2.1 */
																				// Start line: 1854
																				// Start offset: 0x800970F4
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.2.1 */
																			// End offset: 0x800970F4
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.2 */
																		// End offset: 0x800970F4
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.3 */
																			// Start line: 1854
																			// Start offset: 0x800970F4
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.3.1 */
																				// Start line: 1854
																				// Start offset: 0x800970F4
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.3.1 */
																			// End offset: 0x800970F4
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.3 */
																		// End offset: 0x800970F4
																		// End Line: 1854

																		/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.4 */
																			// Start line: 1854
																			// Start offset: 0x800970F4
																			// Variables:
																		// 		struct Speaker *this; // $s1

																			/* begin block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.4.1 */
																				// Start line: 1854
																				// Start offset: 0x800970F4
																			/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.4.1 */
																			// End offset: 0x800970F4
																			// End Line: 1854
																		/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3.4 */
																		// End offset: 0x800970F4
																		// End Line: 1854
																	/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1.3 */
																	// End offset: 0x80097104
																	// End Line: 1945
																/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3.1 */
																// End offset: 0x80097104
																// End Line: 1945
															/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1.3 */
															// End offset: 0x80097104
															// End Line: 1945
														/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3.1 */
														// End offset: 0x80097104
														// End Line: 1945
													/* end block 1.2.3.1.3.1.5.1.5.7.2.1.3 */
													// End offset: 0x80097104
													// End Line: 1945
												/* end block 1.2.3.1.3.1.5.1.5.7.2.1 */
												// End offset: 0x80097104
												// End Line: 1945
											/* end block 1.2.3.1.3.1.5.1.5.7.2 */
											// End offset: 0x80097104
											// End Line: 1945
										/* end block 1.2.3.1.3.1.5.1.5.7 */
										// End offset: 0x80097104
										// End Line: 1945
									/* end block 1.2.3.1.3.1.5.1.5 */
									// End offset: 0x8009710C
									// End Line: 1947
								/* end block 1.2.3.1.3.1.5.1 */
								// End offset: 0x8009710C
								// End Line: 1947
							/* end block 1.2.3.1.3.1.5 */
							// End offset: 0x8009710C
							// End Line: 1947
						/* end block 1.2.3.1.3.1 */
						// End offset: 0x8009710C
						// End Line: 1947
					/* end block 1.2.3.1.3 */
					// End offset: 0x8009710C
					// End Line: 1947
				/* end block 1.2.3.1 */
				// End offset: 0x8009710C
				// End Line: 1947
			/* end block 1.2.3 */
			// End offset: 0x8009710C
			// End Line: 1947
		/* end block 1.2 */
		// End offset: 0x8009710C
		// End Line: 1947
	/* end block 1 */
	// End offset: 0x8009710C
	// End Line: 1947

void Status__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int ID_UNIT;
  Car_tObj *car;
  Speaker *pSVar4;
  int *piVar5;
  ulong uVar6;
  SPCHNFSType_VOICE *VOICE;
  Speaker *pSVar7;
  
  uVar3 = (this->Speaker)._vf[0].value;
  ID_UNIT = (**(code **)(uVar3 + 0xdc))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0xd8));
  if (ID_UNIT == 0) {
    return;
  }
  *(uint *)(DAT_00000838 + 0x38c) = (this->Speaker)._vf[5].value;
  if ((this->Speaker).fArrest.flags == 1) {
    uVar3 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar3 + 0xf4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0xf0));
    VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
    ID_UNIT = *(int *)(ID_UNIT + 4);
    (this->Speaker).fTo = ID_UNIT;
    SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
    SPCH_PlaySpeech();
    SPCHNFS_C_D_PERP_APPREHENSION(VOICE,&(this->Speaker).fPerpName);
  }
  else {
    uVar3 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar3 + 0xcc))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 200));
    bVar1 = false;
    if ((*(uint *)(ID_UNIT + 0x260) & 0x200) != 0) {
      bVar1 = (this->Speaker).fUpdate.flags == 0;
    }
    bVar2 = false;
    if (bVar1) {
      uVar3 = (this->Speaker)._vf[0].value;
      ID_UNIT = (**(code **)(uVar3 + 0xf4))
                          ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0xf0));
      VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
      ID_UNIT = *(int *)(ID_UNIT + 4);
      (this->Speaker).fTo = ID_UNIT;
      SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
      SPCH_PlaySpeech();
      uVar3 = (this->Speaker)._vf[0].value;
      car = (Car_tObj *)
            (**(code **)(uVar3 + 0xdc))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0xd8));
      SetCar__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
      FindLocation__Q26Speech7SpeakerP8Car_tObj
                ((Speaker *)this,(Car_tObj *)(this->Speaker)._vf[5].value);
      SPCHNFS_C_D_PERP_LOST
                (VOICE,&(this->Speaker).fColour,(this->Speaker).fCar,(SPCHNFSType_POSITION *)this,
                 (this->Speaker).fLocation,&(this->Speaker).fDistance,&(this->Speaker).fPerpName);
      SPCH_PlaySpeech();
      pSVar4 = Dispatch__6Speech();
      pSVar7 = pSVar4->fSub;
      pSVar4 = Dispatch__6Speech();
      *(MobileSpeaker **)&pSVar4->fSub = this;
      pSVar4 = Dispatch__6Speech();
      uVar3 = pSVar4->_vf[0].value;
      (**(code **)(uVar3 + 0x74))((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar3 + 0x70));
      pSVar4 = Dispatch__6Speech();
      pSVar4->fSub = pSVar7;
      return;
    }
    uVar3 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar3 + 0xa4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0xa0));
    if (((ID_UNIT != 0) && ((this->Speaker).fUpdate.flags == 0)) &&
       (pSVar4 = (this->Speaker).fSub, pSVar4 != (Speaker *)0x0)) {
      uVar3 = pSVar4->_vf[0].value;
      ID_UNIT = (**(code **)(uVar3 + 0xcc))
                          ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar3 + 200));
      bVar2 = (*(uint *)(ID_UNIT + 0x260) & 0x40) == 0;
    }
    if (bVar2) {
      uVar3 = (this->Speaker)._vf[0].value;
      piVar5 = (int *)(**(code **)(uVar3 + 0xf4))
                                ((int)&(this->Speaker).fPosition.flags +
                                 (int)*(short *)(uVar3 + 0xf0));
      VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
      ID_UNIT = *piVar5;
      (this->Speaker).fTo = ID_UNIT;
      SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
      SPCH_PlaySpeech();
      SPCHNFS_S_C_SUPER_COP_CRITICISM(VOICE);
    }
    else {
      bVar1 = false;
      pSVar4 = Dispatch__6Speech();
      if (pSVar4->fSub != (Speaker *)0x0) {
        pSVar4 = Dispatch__6Speech();
        bVar1 = (MobileSpeaker *)pSVar4->fSub->fSub == this;
      }
      if (bVar1) {
        SPCHNFS_C_C_NEW_OFFICER_ENGAGING
                  ((SPCHNFSType_VOICE *)((this->Speaker)._vf + 1),(this->Speaker).fFrom);
        pSVar4 = Dispatch__6Speech();
        uVar3 = pSVar4->fSub->_vf[0].value;
        (**(code **)(uVar3 + 0x74))
                  ((int)&(pSVar4->fSub->fPosition).flags + (int)*(short *)(uVar3 + 0x70));
        return;
      }
      uVar3 = (this->Speaker)._vf[0].value;
      ID_UNIT = (**(code **)(uVar3 + 0xf4))
                          ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0xf0));
      VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
      ID_UNIT = *(int *)(ID_UNIT + 4);
      (this->Speaker).fTo = ID_UNIT;
      SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
      SPCH_PlaySpeech();
      uVar3 = (this->Speaker)._vf[0].value;
      car = (Car_tObj *)
            (**(code **)(uVar3 + 0xdc))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0xd8));
      SetCar__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
      uVar3 = (this->Speaker)._vf[0].value;
      car = (Car_tObj *)
            (**(code **)(uVar3 + 0xcc))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 200));
      FindLocation__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
      SetSpeed__Q26Speech13MobileSpeakerP8Car_tObj(this,(Car_tObj *)(this->Speaker)._vf[6].value);
      uVar3 = (this->Speaker)._vf[0].value;
      ID_UNIT = (**(code **)(uVar3 + 0xc4))
                          ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0xc0));
      if (ID_UNIT < 0x280000) {
        uVar3 = (this->Speaker)._vf[0].value;
        ID_UNIT = (**(code **)(uVar3 + 0xdc))
                            ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0xd8));
        if (0x40 < *(ushort *)(ID_UNIT + 0x17c)) {
          SPCHNFS_C_D_IN_PURS_PERP_AIRBORN(VOICE);
          goto LAB_80097104;
        }
        uVar6 = (this->Speaker).fUpdate.flags;
        if (uVar6 == 1) {
          SPCHNFS_C_D_IN_PURS_NEAR_PERP_REP_LOC
                    (VOICE,(SPCHNFSType_POSITION *)this,(this->Speaker).fLocation,
                     &(this->Speaker).fDistance);
          goto LAB_80097104;
        }
        if (uVar6 != 8) {
          SPCHNFS_C_D_IN_PURS_NEAR_PERP_REP_STS
                    (VOICE,&(this->Speaker).fColour,(this->Speaker).fCar,&(this->Speaker).fDistance,
                     (SPCHNFSType_POSITION *)this,(this->Speaker).fLocation);
          goto LAB_80097104;
        }
      }
      else {
        if ((this->Speaker).fHavePerp == (void *)0x0) {
          uVar6 = (this->Speaker).fUpdate.flags;
          if (uVar6 == 1) {
            SPCHNFS_C_D_IN_PURS_LOOK_PERP_REPLY_LOC
                      (VOICE,(SPCHNFSType_POSITION *)this,(this->Speaker).fLocation,
                       &(this->Speaker).fDistance,&(this->Speaker).fColour,(this->Speaker).fCar);
            goto LAB_80097104;
          }
          if (uVar6 != 8) {
            SPCHNFS_C_D_IN_PURS_LOOK_PERP_REPLY_STS
                      (VOICE,&(this->Speaker).fColour,(this->Speaker).fCar,
                       &(this->Speaker).fPerpName);
            goto LAB_80097104;
          }
        }
        else {
          uVar6 = (this->Speaker).fUpdate.flags;
          if (uVar6 == 1) {
            SPCHNFS_C_D_IN_PURS_AWAY_PERP_REPLY_LOC
                      (VOICE,(SPCHNFSType_POSITION *)this,(this->Speaker).fLocation,
                       &(this->Speaker).fDistance,&(this->Speaker).fColour,(this->Speaker).fCar,
                       &(this->Speaker).fPerpName);
            goto LAB_80097104;
          }
          if (uVar6 != 8) {
            SPCHNFS_C_D_IN_PURS_AWAY_PERP_REPLY_STS
                      (VOICE,&(this->Speaker).fColour,(this->Speaker).fCar,
                       (SPCHNFSType_POSITION *)this,(this->Speaker).fLocation,
                       &(this->Speaker).fDistance);
            goto LAB_80097104;
          }
        }
      }
      SPCHNFS_C_D_IN_PURS_NEAR_PERP_REP_SPD
                (VOICE,(this->Speaker)._vf[3].value,
                 (SPCHNFSType_vs_KMH_MPH *)((this->Speaker)._vf + 2));
    }
  }
LAB_80097104:
  SPCH_PlaySpeech();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearPerp__Q26Speech15DispatchSpeakerP8Car_tObj(struct DispatchSpeaker *this /*$a0*/, struct Car_tObj *car /*$a1*/)
 // line 1954, offset 0x80097120
	/* begin block 1 */
		// Start line: 1955
		// Start offset: 0x80097120

		/* begin block 1.1 */
			// Start line: 1956
			// Start offset: 0x80097120
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x80097148
		// End Line: 1959
	/* end block 1 */
	// End offset: 0x80097148
	// End Line: 1959

void ClearPerp__Q26Speech15DispatchSpeakerP8Car_tObj(DispatchSpeaker *this,Car_tObj *car)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((Car_tObj *)(this->Speaker)._vf[4].value == car) {
      (this->Speaker)._vf[4].value = 0;
    }
    iVar1 = iVar1 + 1;
    this = (DispatchSpeaker *)&(this->Speaker).fDistance;
  } while (iVar1 < 2);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ KnownPerp__Q26Speech15DispatchSpeakerP8Car_tObj(struct DispatchSpeaker *this /*$a0*/, struct Car_tObj *car /*$a1*/)
 // line 1964, offset 0x80097150
	/* begin block 1 */
		// Start line: 1965
		// Start offset: 0x80097150

		/* begin block 1.1 */
			// Start line: 1966
			// Start offset: 0x80097150
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x80097178
		// End Line: 1970
	/* end block 1 */
	// End offset: 0x80097178
	// End Line: 1970

void * KnownPerp__Q26Speech15DispatchSpeakerP8Car_tObj(DispatchSpeaker *this,Car_tObj *car)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if ((Car_tObj *)(this->Speaker)._vf[4].value == car) {
      return &DAT_00000001;
    }
    this = (DispatchSpeaker *)&(this->Speaker).fDistance;
  } while (iVar1 < 2);
  return (void *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddPerp__Q26Speech15DispatchSpeakerP8Car_tObj(struct DispatchSpeaker *this /*$a0*/, struct Car_tObj *car /*$a1*/)
 // line 1976, offset 0x80097180
	/* begin block 1 */
		// Start line: 1977
		// Start offset: 0x80097180

		/* begin block 1.1 */
			// Start line: 1978
			// Start offset: 0x80097180
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x800971A8
		// End Line: 1981
	/* end block 1 */
	// End offset: 0x800971A8
	// End Line: 1981

void AddPerp__Q26Speech15DispatchSpeakerP8Car_tObj(DispatchSpeaker *this,Car_tObj *car)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((this->Speaker)._vf[4].value == 0) {
      *(Car_tObj **)&(this->Speaker)._vf[4].value = car;
    }
    iVar1 = iVar1 + 1;
    this = (DispatchSpeaker *)&(this->Speaker).fDistance;
  } while (iVar1 < 2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Report__Q26Speech15DispatchSpeakerP8Car_tObj(struct DispatchSpeaker *this /*$s1*/, struct Car_tObj *perp /*$s2*/)
 // line 1990, offset 0x800971b0
	/* begin block 1 */
		// Start line: 1991
		// Start offset: 0x800971B0

		/* begin block 1.1 */
			// Start line: 1991
			// Start offset: 0x800971B0
			// Variables:
		// 		struct DispatchSpeaker *this; // $s1

			/* begin block 1.1.1 */
				// Start line: 1991
				// Start offset: 0x800971B0

				/* begin block 1.1.1.1 */
					// Start line: 1991
					// Start offset: 0x800971B0
					// Variables:
				// 		struct Speech *this; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 1991
						// Start offset: 0x800971B0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800971B0
					// End Line: 1991
				/* end block 1.1.1.1 */
				// End offset: 0x800971B0
				// End Line: 1991
			/* end block 1.1.1 */
			// End offset: 0x800971B0
			// End Line: 1991
		/* end block 1.1 */
		// End offset: 0x800971B0
		// End Line: 1991

		/* begin block 1.2 */
			// Start line: 1991
			// Start offset: 0x800971B0

			/* begin block 1.2.1 */
				// Start line: 1994
				// Start offset: 0x800971FC
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.2.1.1 */
					// Start line: 1994
					// Start offset: 0x800971FC
				/* end block 1.2.1.1 */
				// End offset: 0x800971FC
				// End Line: 1994
			/* end block 1.2.1 */
			// End offset: 0x800971FC
			// End Line: 1994

			/* begin block 1.2.2 */
				// Start line: 1995
				// Start offset: 0x80097210

				/* begin block 1.2.2.1 */
					// Start line: 1998
					// Start offset: 0x80097210

					/* begin block 1.2.2.1.1 */
						// Start line: 1998
						// Start offset: 0x80097210

						/* begin block 1.2.2.1.1.1 */
							// Start line: 1998
							// Start offset: 0x80097210
						/* end block 1.2.2.1.1.1 */
						// End offset: 0x80097210
						// End Line: 1998
					/* end block 1.2.2.1.1 */
					// End offset: 0x80097210
					// End Line: 1998

					/* begin block 1.2.2.1.2 */
						// Start line: 1999
						// Start offset: 0x80097228

						/* begin block 1.2.2.1.2.1 */
							// Start line: 2004
							// Start offset: 0x80097228
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.2.1.1 */
								// Start line: 2004
								// Start offset: 0x80097228
							/* end block 1.2.2.1.2.1.1 */
							// End offset: 0x80097228
							// End Line: 2004
						/* end block 1.2.2.1.2.1 */
						// End offset: 0x80097228
						// End Line: 2004

						/* begin block 1.2.2.1.2.2 */
							// Start line: 2004
							// Start offset: 0x80097228

							/* begin block 1.2.2.1.2.2.1 */
								// Start line: 2004
								// Start offset: 0x80097228
							/* end block 1.2.2.1.2.2.1 */
							// End offset: 0x80097228
							// End Line: 2004
						/* end block 1.2.2.1.2.2 */
						// End offset: 0x80097228
						// End Line: 2004

						/* begin block 1.2.2.1.2.3 */
							// Start line: 2004
							// Start offset: 0x80097228
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.2.3.1 */
								// Start line: 2004
								// Start offset: 0x80097228
							/* end block 1.2.2.1.2.3.1 */
							// End offset: 0x80097228
							// End Line: 2004
						/* end block 1.2.2.1.2.3 */
						// End offset: 0x80097228
						// End Line: 2004

						/* begin block 1.2.2.1.2.4 */
							// Start line: 2004
							// Start offset: 0x80097228
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.2.4.1 */
								// Start line: 2004
								// Start offset: 0x80097228
							/* end block 1.2.2.1.2.4.1 */
							// End offset: 0x80097228
							// End Line: 2004
						/* end block 1.2.2.1.2.4 */
						// End offset: 0x80097228
						// End Line: 2004

						/* begin block 1.2.2.1.2.5 */
							// Start line: 2004
							// Start offset: 0x80097228
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.2.5.1 */
								// Start line: 2004
								// Start offset: 0x80097228
							/* end block 1.2.2.1.2.5.1 */
							// End offset: 0x80097228
							// End Line: 2004
						/* end block 1.2.2.1.2.5 */
						// End offset: 0x80097228
						// End Line: 2004
					/* end block 1.2.2.1.2 */
					// End offset: 0x80097228
					// End Line: 2004
				/* end block 1.2.2.1 */
				// End offset: 0x80097228
				// End Line: 2004
			/* end block 1.2.2 */
			// End offset: 0x80097228
			// End Line: 2004

			/* begin block 1.2.3 */
				// Start line: 2010
				// Start offset: 0x80097298

				/* begin block 1.2.3.1 */
					// Start line: 2013
					// Start offset: 0x80097298

					/* begin block 1.2.3.1.1 */
						// Start line: 2013
						// Start offset: 0x80097298

						/* begin block 1.2.3.1.1.1 */
							// Start line: 2013
							// Start offset: 0x80097298
						/* end block 1.2.3.1.1.1 */
						// End offset: 0x80097298
						// End Line: 2013
					/* end block 1.2.3.1.1 */
					// End offset: 0x80097298
					// End Line: 2013

					/* begin block 1.2.3.1.2 */
						// Start line: 2014
						// Start offset: 0x800972B0

						/* begin block 1.2.3.1.2.1 */
							// Start line: 2020
							// Start offset: 0x800972B0

							/* begin block 1.2.3.1.2.1.1 */
								// Start line: 2020
								// Start offset: 0x800972B0
							/* end block 1.2.3.1.2.1.1 */
							// End offset: 0x800972B0
							// End Line: 2020
						/* end block 1.2.3.1.2.1 */
						// End offset: 0x800972B0
						// End Line: 2020

						/* begin block 1.2.3.1.2.2 */
							// Start line: 2020
							// Start offset: 0x800972B0
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.2.1 */
								// Start line: 2020
								// Start offset: 0x800972B0
							/* end block 1.2.3.1.2.2.1 */
							// End offset: 0x800972B0
							// End Line: 2020
						/* end block 1.2.3.1.2.2 */
						// End offset: 0x800972B0
						// End Line: 2020

						/* begin block 1.2.3.1.2.3 */
							// Start line: 2020
							// Start offset: 0x800972B0
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.3.1 */
								// Start line: 2020
								// Start offset: 0x800972B0
							/* end block 1.2.3.1.2.3.1 */
							// End offset: 0x800972B0
							// End Line: 2020
						/* end block 1.2.3.1.2.3 */
						// End offset: 0x800972B0
						// End Line: 2020

						/* begin block 1.2.3.1.2.4 */
							// Start line: 2020
							// Start offset: 0x800972B0
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.4.1 */
								// Start line: 2020
								// Start offset: 0x800972B0
							/* end block 1.2.3.1.2.4.1 */
							// End offset: 0x800972B0
							// End Line: 2020
						/* end block 1.2.3.1.2.4 */
						// End offset: 0x800972B0
						// End Line: 2020

						/* begin block 1.2.3.1.2.5 */
							// Start line: 2020
							// Start offset: 0x800972B0
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.5.1 */
								// Start line: 2020
								// Start offset: 0x800972B0
							/* end block 1.2.3.1.2.5.1 */
							// End offset: 0x800972B0
							// End Line: 2020
						/* end block 1.2.3.1.2.5 */
						// End offset: 0x800972B0
						// End Line: 2020

						/* begin block 1.2.3.1.2.6 */
							// Start line: 2020
							// Start offset: 0x800972B0
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.6.1 */
								// Start line: 2020
								// Start offset: 0x800972B0
							/* end block 1.2.3.1.2.6.1 */
							// End offset: 0x800972B0
							// End Line: 2020
						/* end block 1.2.3.1.2.6 */
						// End offset: 0x800972B0
						// End Line: 2020

						/* begin block 1.2.3.1.2.7 */
							// Start line: 2020
							// Start offset: 0x800972B0
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.7.1 */
								// Start line: 2020
								// Start offset: 0x800972B0
							/* end block 1.2.3.1.2.7.1 */
							// End offset: 0x800972B0
							// End Line: 2020
						/* end block 1.2.3.1.2.7 */
						// End offset: 0x800972B0
						// End Line: 2020

						/* begin block 1.2.3.1.2.8 */
							// Start line: 2020
							// Start offset: 0x800972B0
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.8.1 */
								// Start line: 2020
								// Start offset: 0x800972B0
							/* end block 1.2.3.1.2.8.1 */
							// End offset: 0x800972B0
							// End Line: 2020
						/* end block 1.2.3.1.2.8 */
						// End offset: 0x800972B0
						// End Line: 2020

						/* begin block 1.2.3.1.2.9 */
							// Start line: 2020
							// Start offset: 0x800972B0
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.9.1 */
								// Start line: 2020
								// Start offset: 0x800972B0
							/* end block 1.2.3.1.2.9.1 */
							// End offset: 0x800972B0
							// End Line: 2020
						/* end block 1.2.3.1.2.9 */
						// End offset: 0x800972B0
						// End Line: 2020

						/* begin block 1.2.3.1.2.10 */
							// Start line: 2020
							// Start offset: 0x800972B0
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.3.1.2.10.1 */
								// Start line: 2020
								// Start offset: 0x800972B0
							/* end block 1.2.3.1.2.10.1 */
							// End offset: 0x800972B0
							// End Line: 2020
						/* end block 1.2.3.1.2.10 */
						// End offset: 0x800972B0
						// End Line: 2020
					/* end block 1.2.3.1.2 */
					// End offset: 0x80097324
					// End Line: 2028
				/* end block 1.2.3.1 */
				// End offset: 0x80097324
				// End Line: 2028
			/* end block 1.2.3 */
			// End offset: 0x80097338
			// End Line: 2032
		/* end block 1.2 */
		// End offset: 0x80097338
		// End Line: 2032
	/* end block 1 */
	// End offset: 0x80097338
	// End Line: 2032

void Report__Q26Speech15DispatchSpeakerP8Car_tObj(DispatchSpeaker *this,Car_tObj *perp)

{
  bool bVar1;
  uint uVar2;
  int ID_UNIT;
  int iVar3;
  int *piVar4;
  Speaker *pSVar5;
  
  bVar1 = false;
  *(undefined4 *)(DAT_00000838 + 0x38c) = 0;
  uVar2 = (this->Speaker)._vf[0].value;
  ID_UNIT = (**(code **)(uVar2 + 0x94))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0x90));
  if (ID_UNIT != 0) {
    bVar1 = (this->Speaker).fSub != (Speaker *)0x0;
  }
  if (bVar1) {
    if (*(int *)(DAT_00000838 + 0x388) == 0) {
      uVar2 = (this->Speaker)._vf[0].value;
      ID_UNIT = (**(code **)(uVar2 + 0xf4))
                          ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xf0));
      pSVar5 = (this->Speaker).fSub;
      uVar2 = pSVar5->_vf[0].value;
      iVar3 = (**(code **)(uVar2 + 0x8c))
                        ((int)&(pSVar5->fPosition).flags + (int)*(short *)(uVar2 + 0x88));
      ID_UNIT = *(int *)(ID_UNIT + iVar3 * 4 + 8);
      (this->Speaker).fTo = ID_UNIT;
      SPCHNFS_D_C_PERP_SIGHTED_CONFIRM(&(this->Speaker).fConfirm,ID_UNIT);
      SPCH_PlaySpeech();
    }
  }
  else {
    if (*(int *)(DAT_00000838 + 0x388) == 0) {
      uVar2 = (this->Speaker)._vf[0].value;
      piVar4 = (int *)(**(code **)(uVar2 + 0xf4))
                                ((int)&(this->Speaker).fPosition.flags +
                                 (int)*(short *)(uVar2 + 0xf0));
      ID_UNIT = *piVar4;
      (this->Speaker).fTo = ID_UNIT;
      SPCHNFS_D_C_INTRO_CALL(ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
      SPCH_PlaySpeech();
      SetCar__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,perp);
      FindLocation__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,perp);
      SPCHNFS_D_C_BEGIN_PURS_REP_SPDR
                (&(this->Speaker).fColour,(this->Speaker).fCar,(SPCHNFSType_POSITION *)this,
                 (this->Speaker).fLocation,&(this->Speaker).fDistance);
      SPCH_PlaySpeech();
    }
    AddPerp__Q26Speech15DispatchSpeakerP8Car_tObj(this,perp);
    (this->Speaker)._vf[1].value = 0x2a0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Accident__Q26Speech15DispatchSpeakeri(struct DispatchSpeaker *this /*$a0*/, int slice /*$a1*/)
 // line 2039, offset 0x80097350
	/* begin block 1 */
		// Start line: 2040
		// Start offset: 0x80097350
	/* end block 1 */
	// End offset: 0x80097350
	// End Line: 2040

void Accident__Q26Speech15DispatchSpeakeri(DispatchSpeaker *this,int slice)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Deny__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this /*$s1*/)
 // line 2049, offset 0x80097358
	/* begin block 1 */
		// Start line: 2050
		// Start offset: 0x80097358

		/* begin block 1.1 */
			// Start line: 2050
			// Start offset: 0x80097358

			/* begin block 1.1.1 */
				// Start line: 2050
				// Start offset: 0x80097358
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 2050
					// Start offset: 0x80097358
				/* end block 1.1.1.1 */
				// End offset: 0x80097358
				// End Line: 2050
			/* end block 1.1.1 */
			// End offset: 0x80097358
			// End Line: 2050
		/* end block 1.1 */
		// End offset: 0x8009737C
		// End Line: 2052

		/* begin block 1.2 */
			// Start line: 2050
			// Start offset: 0x8009737C
			// Variables:
		// 		struct DispatchSpeaker *this; // $s1

			/* begin block 1.2.1 */
				// Start line: 2050
				// Start offset: 0x8009737C

				/* begin block 1.2.1.1 */
					// Start line: 2050
					// Start offset: 0x8009737C
					// Variables:
				// 		struct Speech *this; // $v0

					/* begin block 1.2.1.1.1 */
						// Start line: 2050
						// Start offset: 0x8009737C
					/* end block 1.2.1.1.1 */
					// End offset: 0x8009737C
					// End Line: 2050
				/* end block 1.2.1.1 */
				// End offset: 0x8009737C
				// End Line: 2050
			/* end block 1.2.1 */
			// End offset: 0x8009737C
			// End Line: 2050
		/* end block 1.2 */
		// End offset: 0x8009737C
		// End Line: 2050

		/* begin block 1.3 */
			// Start line: 2050
			// Start offset: 0x8009737C
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.3.1 */
				// Start line: 2050
				// Start offset: 0x8009737C
			/* end block 1.3.1 */
			// End offset: 0x8009737C
			// End Line: 2050
		/* end block 1.3 */
		// End offset: 0x8009737C
		// End Line: 2050

		/* begin block 1.4 */
			// Start line: 2050
			// Start offset: 0x8009737C

			/* begin block 1.4.1 */
				// Start line: 2050
				// Start offset: 0x8009737C
			/* end block 1.4.1 */
			// End offset: 0x8009737C
			// End Line: 2050
		/* end block 1.4 */
		// End offset: 0x8009737C
		// End Line: 2050

		/* begin block 1.5 */
			// Start line: 2050
			// Start offset: 0x8009737C
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.5.1 */
				// Start line: 2050
				// Start offset: 0x8009737C
			/* end block 1.5.1 */
			// End offset: 0x8009737C
			// End Line: 2050
		/* end block 1.5 */
		// End offset: 0x8009737C
		// End Line: 2050

		/* begin block 1.6 */
			// Start line: 2050
			// Start offset: 0x8009737C
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.6.1 */
				// Start line: 2050
				// Start offset: 0x8009737C
			/* end block 1.6.1 */
			// End offset: 0x8009737C
			// End Line: 2050
		/* end block 1.6 */
		// End offset: 0x8009737C
		// End Line: 2050

		/* begin block 1.7 */
			// Start line: 2050
			// Start offset: 0x8009737C
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.7.1 */
				// Start line: 2050
				// Start offset: 0x8009737C
			/* end block 1.7.1 */
			// End offset: 0x8009737C
			// End Line: 2050
		/* end block 1.7 */
		// End offset: 0x8009737C
		// End Line: 2050

		/* begin block 1.8 */
			// Start line: 2050
			// Start offset: 0x8009737C
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.8.1 */
				// Start line: 2050
				// Start offset: 0x8009737C
			/* end block 1.8.1 */
			// End offset: 0x8009737C
			// End Line: 2050
		/* end block 1.8 */
		// End offset: 0x8009737C
		// End Line: 2050

		/* begin block 1.9 */
			// Start line: 2050
			// Start offset: 0x8009737C

			/* begin block 1.9.1 */
				// Start line: 2050
				// Start offset: 0x8009737C
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.9.1.1 */
					// Start line: 2050
					// Start offset: 0x8009737C
				/* end block 1.9.1.1 */
				// End offset: 0x8009737C
				// End Line: 2050
			/* end block 1.9.1 */
			// End offset: 0x8009737C
			// End Line: 2050

			/* begin block 1.9.2 */
				// Start line: 2050
				// Start offset: 0x8009737C

				/* begin block 1.9.2.1 */
					// Start line: 2050
					// Start offset: 0x8009737C
				/* end block 1.9.2.1 */
				// End offset: 0x8009737C
				// End Line: 2050
			/* end block 1.9.2 */
			// End offset: 0x8009737C
			// End Line: 2050

			/* begin block 1.9.3 */
				// Start line: 2067
				// Start offset: 0x8009740C

				/* begin block 1.9.3.1 */
					// Start line: 2067
					// Start offset: 0x8009740C
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.9.3.1.1 */
						// Start line: 2067
						// Start offset: 0x8009740C
					/* end block 1.9.3.1.1 */
					// End offset: 0x8009740C
					// End Line: 2067
				/* end block 1.9.3.1 */
				// End offset: 0x8009740C
				// End Line: 2067

				/* begin block 1.9.3.2 */
					// Start line: 2067
					// Start offset: 0x8009740C

					/* begin block 1.9.3.2.1 */
						// Start line: 2067
						// Start offset: 0x8009740C
					/* end block 1.9.3.2.1 */
					// End offset: 0x8009740C
					// End Line: 2067
				/* end block 1.9.3.2 */
				// End offset: 0x8009740C
				// End Line: 2067
			/* end block 1.9.3 */
			// End offset: 0x8009740C
			// End Line: 2067
		/* end block 1.9 */
		// End offset: 0x80097424
		// End Line: 2069

		/* begin block 1.10 */
			// Start line: 2071
			// Start offset: 0x80097424
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.10.1 */
				// Start line: 2071
				// Start offset: 0x80097424
			/* end block 1.10.1 */
			// End offset: 0x80097424
			// End Line: 2071
		/* end block 1.10 */
		// End offset: 0x80097424
		// End Line: 2071

		/* begin block 1.11 */
			// Start line: 2071
			// Start offset: 0x80097424

			/* begin block 1.11.1 */
				// Start line: 2071
				// Start offset: 0x80097424
			/* end block 1.11.1 */
			// End offset: 0x80097438
			// End Line: 2071
		/* end block 1.11 */
		// End offset: 0x80097438
		// End Line: 2071
	/* end block 1 */
	// End offset: 0x80097438
	// End Line: 2073

void Deny__Q26Speech15DispatchSpeaker(DispatchSpeaker *this)

{
  uint uVar1;
  int ID_UNIT;
  int iVar2;
  Speaker *pSVar3;
  
  if ((this->Speaker).fSub != (Speaker *)0x0) {
    *(undefined4 *)(DAT_00000838 + 0x38c) = 0;
    uVar1 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar1 + 0xf4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xf0));
    pSVar3 = (this->Speaker).fSub;
    uVar1 = pSVar3->_vf[0].value;
    iVar2 = (**(code **)(uVar1 + 0x8c))
                      ((int)&(pSVar3->fPosition).flags + (int)*(short *)(uVar1 + 0x88));
    ID_UNIT = *(int *)(ID_UNIT + iVar2 * 4 + 8);
    (this->Speaker).fTo = ID_UNIT;
    SPCHNFS_D_C_INTRO_CALL(ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
    SPCH_PlaySpeech();
    pSVar3 = (this->Speaker).fSub;
    if ((pSVar3->fBlockade).flags == 0) {
      SPCHNFS_D_C_BKUP_REQUEST_DENIED_REPLY();
    }
    else {
      SPCHNFS_D_C_RDBLK_SPBLT_DENIED_REPLY(&pSVar3->fBlockade);
    }
    SPCH_PlaySpeech();
    (((this->Speaker).fSub)->fBlockade).flags = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Grant__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this /*$a1*/)
 // line 2079, offset 0x8009744c
	/* begin block 1 */
		// Start line: 2080
		// Start offset: 0x8009744C

		/* begin block 1.1 */
			// Start line: 2080
			// Start offset: 0x8009744C

			/* begin block 1.1.1 */
				// Start line: 2080
				// Start offset: 0x8009744C
				// Variables:
			// 		struct Speaker *this; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 2080
					// Start offset: 0x8009744C
				/* end block 1.1.1.1 */
				// End offset: 0x8009744C
				// End Line: 2080
			/* end block 1.1.1 */
			// End offset: 0x8009744C
			// End Line: 2080
		/* end block 1.1 */
		// End offset: 0x80097468
		// End Line: 2086

		/* begin block 1.2 */
			// Start line: 2088
			// Start offset: 0x80097468

			/* begin block 1.2.1 */
				// Start line: 2088
				// Start offset: 0x80097468
				// Variables:
			// 		struct Speaker *this; // $a1

				/* begin block 1.2.1.1 */
					// Start line: 2088
					// Start offset: 0x80097468
				/* end block 1.2.1.1 */
				// End offset: 0x80097468
				// End Line: 2088
			/* end block 1.2.1 */
			// End offset: 0x80097468
			// End Line: 2088

			/* begin block 1.2.2 */
				// Start line: 2088
				// Start offset: 0x80097468

				/* begin block 1.2.2.1 */
					// Start line: 2088
					// Start offset: 0x80097468
				/* end block 1.2.2.1 */
				// End offset: 0x80097468
				// End Line: 2088
			/* end block 1.2.2 */
			// End offset: 0x80097468
			// End Line: 2088
		/* end block 1.2 */
		// End offset: 0x80097470
		// End Line: 2089

		/* begin block 1.3 */
			// Start line: 2080
			// Start offset: 0x80097470
			// Variables:
		// 		struct DispatchSpeaker *this; // $a1

			/* begin block 1.3.1 */
				// Start line: 2080
				// Start offset: 0x80097470

				/* begin block 1.3.1.1 */
					// Start line: 2080
					// Start offset: 0x80097470
					// Variables:
				// 		struct Speech *this; // $v0

					/* begin block 1.3.1.1.1 */
						// Start line: 2080
						// Start offset: 0x80097470
					/* end block 1.3.1.1.1 */
					// End offset: 0x80097470
					// End Line: 2080
				/* end block 1.3.1.1 */
				// End offset: 0x80097470
				// End Line: 2080
			/* end block 1.3.1 */
			// End offset: 0x80097470
			// End Line: 2080
		/* end block 1.3 */
		// End offset: 0x80097470
		// End Line: 2080

		/* begin block 1.4 */
			// Start line: 2080
			// Start offset: 0x80097470

			/* begin block 1.4.1 */
				// Start line: 2080
				// Start offset: 0x80097470

				/* begin block 1.4.1.1 */
					// Start line: 2080
					// Start offset: 0x80097470
				/* end block 1.4.1.1 */
				// End offset: 0x80097470
				// End Line: 2080
			/* end block 1.4.1 */
			// End offset: 0x80097470
			// End Line: 2080

			/* begin block 1.4.2 */
				// Start line: 2094
				// Start offset: 0x80097488

				/* begin block 1.4.2.1 */
					// Start line: 2094
					// Start offset: 0x80097488
					// Variables:
				// 		struct Speaker *this; // $a1

					/* begin block 1.4.2.1.1 */
						// Start line: 2094
						// Start offset: 0x80097488
					/* end block 1.4.2.1.1 */
					// End offset: 0x80097488
					// End Line: 2094
				/* end block 1.4.2.1 */
				// End offset: 0x80097488
				// End Line: 2094

				/* begin block 1.4.2.2 */
					// Start line: 2094
					// Start offset: 0x80097488

					/* begin block 1.4.2.2.1 */
						// Start line: 2094
						// Start offset: 0x80097488
					/* end block 1.4.2.2.1 */
					// End offset: 0x80097488
					// End Line: 2094
				/* end block 1.4.2.2 */
				// End offset: 0x80097488
				// End Line: 2094

				/* begin block 1.4.2.3 */
					// Start line: 2094
					// Start offset: 0x80097488
					// Variables:
				// 		struct Speaker *this; // $a1

					/* begin block 1.4.2.3.1 */
						// Start line: 2094
						// Start offset: 0x80097488
					/* end block 1.4.2.3.1 */
					// End offset: 0x80097488
					// End Line: 2094
				/* end block 1.4.2.3 */
				// End offset: 0x80097488
				// End Line: 2094
			/* end block 1.4.2 */
			// End offset: 0x800974A0
			// End Line: 2097
		/* end block 1.4 */
		// End offset: 0x800974A0
		// End Line: 2097
	/* end block 1 */
	// End offset: 0x800974A0
	// End Line: 2097

void Grant__Q26Speech15DispatchSpeaker(DispatchSpeaker *this)

{
  int *piVar1;
  Speaker *pSVar2;
  
  pSVar2 = (this->Speaker).fSub;
  if (((pSVar2 != (Speaker *)0x0) && (pSVar2 != (Speaker *)0xffffffec)) &&
     (piVar1 = (int *)(DAT_00000838 + 0x388), *(undefined4 *)(DAT_00000838 + 0x38c) = 0,
     *piVar1 == 0)) {
    SPCHNFS_D_C_RDBLK_SPBLT_GRANT_REPLY
              (&((this->Speaker).fSub)->fBlockade,&(this->Speaker).fConfirm);
    SPCH_PlaySpeech();
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Ready__Q26Speech15DispatchSpeakerP8Car_tObj(struct DispatchSpeaker *this /*$s1*/, struct Car_tObj *carObj /*$a1*/)
 // line 2104, offset 0x800974b0
	/* begin block 1 */
		// Start line: 2105
		// Start offset: 0x800974B0
		// Variables:
	// 		struct Speaker *Wing; // $s0

		/* begin block 1.1 */
			// Start line: 2105
			// Start offset: 0x800974B0

			/* begin block 1.1.1 */
				// Start line: 2105
				// Start offset: 0x800974B0
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 2105
					// Start offset: 0x800974B0
				/* end block 1.1.1.1 */
				// End offset: 0x800974B0
				// End Line: 2105
			/* end block 1.1.1 */
			// End offset: 0x800974B0
			// End Line: 2105

			/* begin block 1.1.2 */
				// Start line: 2112
				// Start offset: 0x800974E0
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.1.2.1 */
					// Start line: 2112
					// Start offset: 0x800974E0
				/* end block 1.1.2.1 */
				// End offset: 0x800974E0
				// End Line: 2112
			/* end block 1.1.2 */
			// End offset: 0x800974E0
			// End Line: 2112

			/* begin block 1.1.3 */
				// Start line: 2113
				// Start offset: 0x800974F0

				/* begin block 1.1.3.1 */
					// Start line: 2113
					// Start offset: 0x800974F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.1.3.1.1 */
						// Start line: 2113
						// Start offset: 0x800974F0
					/* end block 1.1.3.1.1 */
					// End offset: 0x800974F0
					// End Line: 2113
				/* end block 1.1.3.1 */
				// End offset: 0x800974F0
				// End Line: 2113

				/* begin block 1.1.3.2 */
					// Start line: 2113
					// Start offset: 0x800974F0

					/* begin block 1.1.3.2.1 */
						// Start line: 2113
						// Start offset: 0x800974F0
					/* end block 1.1.3.2.1 */
					// End offset: 0x800974F0
					// End Line: 2113
				/* end block 1.1.3.2 */
				// End offset: 0x800974F0
				// End Line: 2113

				/* begin block 1.1.3.3 */
					// Start line: 2113
					// Start offset: 0x800974F0
					// Variables:
				// 		struct Speaker *this; // $s0
				// 		int Blockade; // $v0

					/* begin block 1.1.3.3.1 */
						// Start line: 2113
						// Start offset: 0x800974F0
					/* end block 1.1.3.3.1 */
					// End offset: 0x800974F0
					// End Line: 2113
				/* end block 1.1.3.3 */
				// End offset: 0x800974F0
				// End Line: 2113

				/* begin block 1.1.3.4 */
					// Start line: 2113
					// Start offset: 0x800974F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.1.3.4.1 */
						// Start line: 2113
						// Start offset: 0x800974F0
					/* end block 1.1.3.4.1 */
					// End offset: 0x800974F0
					// End Line: 2113
				/* end block 1.1.3.4 */
				// End offset: 0x800974F0
				// End Line: 2113
			/* end block 1.1.3 */
			// End offset: 0x8009753C
			// End Line: 2115
		/* end block 1.1 */
		// End offset: 0x8009753C
		// End Line: 2115
	/* end block 1 */
	// End offset: 0x8009753C
	// End Line: 2122

void Ready__Q26Speech15DispatchSpeakerP8Car_tObj(DispatchSpeaker *this,Car_tObj *carObj)

{
  Speaker *pSVar1;
  uint uVar2;
  undefined4 uVar3;
  Speaker *pSVar4;
  
  pSVar1 = Mobile__6SpeechP8Car_tObj(carObj);
  pSVar4 = (this->Speaker).fSub;
  if (pSVar4 != (Speaker *)0x0 && pSVar1 != pSVar4) {
    (pSVar1->fBlockade).flags = (pSVar4->fBlockade).flags;
    pSVar4 = (this->Speaker).fSub;
    uVar2 = pSVar4->_vf[0].value;
    uVar3 = (**(code **)(uVar2 + 0xdc))
                      ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0xd8));
    uVar2 = pSVar1->_vf[0].value;
    (**(code **)(uVar2 + 0x34))
              ((int)&(pSVar1->fPosition).flags + (int)*(short *)(uVar2 + 0x30),uVar3);
  }
  *(DispatchSpeaker **)&(this->Speaker)._vf[2].value = this;
  (this->Speaker)._vf[1].value = 0x80;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PickVoice__6SpeechP8Car_tObj(struct Speech *this /*$a2*/, struct Car_tObj *carObj /*$a1*/)
 // line 2144, offset 0x8009755c
	/* begin block 1 */
		// Start line: 2145
		// Start offset: 0x8009755C
	/* end block 1 */
	// End offset: 0x800975F0
	// End Line: 2151

int PickVoice__6SpeechP8Car_tObj(Speech *this,Car_tObj *carObj)

{
  int iVar1;
  
  if ((carObj->carFlags & 0x40U) != 0) {
    iVar1 = this->fSuperCount;
    this->fSuperCount = iVar1 + 1;
    return iVar1 % 6;
  }
  if ((carObj->carFlags & 0x80U) == 0) {
    iVar1 = this->fCopCount;
    this->fCopCount = iVar1 + 1;
    return iVar1 % 9;
  }
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetVoice__6SpeechP8Car_tObj(struct Car_tObj *carObj /*$a1*/)
 // line 2156, offset 0x800975f8
	/* begin block 1 */
		// Start line: 2157
		// Start offset: 0x800975F8
	/* end block 1 */
	// End offset: 0x800975F8
	// End Line: 2157

int GetVoice__6SpeechP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  
  iVar1 = PickVoice__6SpeechP8Car_tObj(DAT_00000838,carObj);
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Activate__Q26Speech13MobileSpeakerP8Car_tObj(struct MobileSpeaker *this /*$s1*/, struct Car_tObj *carObj /*$s0*/)
 // line 2163, offset 0x80097620
	/* begin block 1 */
		// Start line: 2164
		// Start offset: 0x80097620
		// Variables:
	// 		struct Speech_tMobileVoiceAttr *a; // $v0

		/* begin block 1.1 */
			// Start line: 2164
			// Start offset: 0x80097620

			/* begin block 1.1.1 */
				// Start line: 2171
				// Start offset: 0x8009766C

				/* begin block 1.1.1.1 */
					// Start line: 2172
					// Start offset: 0x8009766C
					// Variables:
				// 		struct MobileSpeaker *this; // $s1

					/* begin block 1.1.1.1.1 */
						// Start line: 2172
						// Start offset: 0x8009766C
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009766C
					// End Line: 2172
				/* end block 1.1.1.1 */
				// End offset: 0x8009766C
				// End Line: 2172
			/* end block 1.1.1 */
			// End offset: 0x8009766C
			// End Line: 2172

			/* begin block 1.1.2 */
				// Start line: 2176
				// Start offset: 0x8009767C

				/* begin block 1.1.2.1 */
					// Start line: 2164
					// Start offset: 0x8009767C
					// Variables:
				// 		struct MobileSpeaker *this; // $s1
				// 		int Voice; // $v0

					/* begin block 1.1.2.1.1 */
						// Start line: 2164
						// Start offset: 0x8009767C
					/* end block 1.1.2.1.1 */
					// End offset: 0x80097688
					// End Line: 2164
				/* end block 1.1.2.1 */
				// End offset: 0x80097688
				// End Line: 2164
			/* end block 1.1.2 */
			// End offset: 0x80097688
			// End Line: 2176
		/* end block 1.1 */
		// End offset: 0x80097688
		// End Line: 2176

		/* begin block 1.2 */
			// Start line: 2178
			// Start offset: 0x80097688
			// Variables:
		// 		int unit; // $v1

			/* begin block 1.2.1 */
				// Start line: 2178
				// Start offset: 0x80097688
			/* end block 1.2.1 */
			// End offset: 0x80097688
			// End Line: 2178
		/* end block 1.2 */
		// End offset: 0x80097688
		// End Line: 2178

		/* begin block 1.3 */
			// Start line: 2178
			// Start offset: 0x80097688
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.3.1 */
				// Start line: 2178
				// Start offset: 0x80097688
			/* end block 1.3.1 */
			// End offset: 0x80097688
			// End Line: 2178
		/* end block 1.3 */
		// End offset: 0x80097688
		// End Line: 2178

		/* begin block 1.4 */
			// Start line: 2178
			// Start offset: 0x80097688
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.4.1 */
				// Start line: 2178
				// Start offset: 0x80097688
			/* end block 1.4.1 */
			// End offset: 0x80097688
			// End Line: 2178
		/* end block 1.4 */
		// End offset: 0x80097688
		// End Line: 2178

		/* begin block 1.5 */
			// Start line: 2178
			// Start offset: 0x80097688
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.5.1 */
				// Start line: 2178
				// Start offset: 0x80097688
			/* end block 1.5.1 */
			// End offset: 0x80097688
			// End Line: 2178
		/* end block 1.5 */
		// End offset: 0x80097688
		// End Line: 2178

		/* begin block 1.6 */
			// Start line: 2178
			// Start offset: 0x80097688
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.6.1 */
				// Start line: 2178
				// Start offset: 0x80097688
			/* end block 1.6.1 */
			// End offset: 0x80097688
			// End Line: 2178
		/* end block 1.6 */
		// End offset: 0x80097688
		// End Line: 2178

		/* begin block 1.7 */
			// Start line: 2178
			// Start offset: 0x80097688
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.7.1 */
				// Start line: 2178
				// Start offset: 0x80097688
			/* end block 1.7.1 */
			// End offset: 0x80097688
			// End Line: 2178
		/* end block 1.7 */
		// End offset: 0x80097688
		// End Line: 2178

		/* begin block 1.8 */
			// Start line: 2178
			// Start offset: 0x80097688
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.8.1 */
				// Start line: 2178
				// Start offset: 0x80097688
			/* end block 1.8.1 */
			// End offset: 0x80097688
			// End Line: 2178
		/* end block 1.8 */
		// End offset: 0x80097688
		// End Line: 2178

		/* begin block 1.9 */
			// Start line: 2178
			// Start offset: 0x80097688
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.9.1 */
				// Start line: 2178
				// Start offset: 0x80097688
			/* end block 1.9.1 */
			// End offset: 0x80097688
			// End Line: 2178
		/* end block 1.9 */
		// End offset: 0x80097688
		// End Line: 2178

		/* begin block 1.10 */
			// Start line: 2178
			// Start offset: 0x80097688
			// Variables:
		// 		struct MobileSpeaker *this; // $s1

			/* begin block 1.10.1 */
				// Start line: 2178
				// Start offset: 0x80097688
			/* end block 1.10.1 */
			// End offset: 0x80097688
			// End Line: 2178
		/* end block 1.10 */
		// End offset: 0x80097688
		// End Line: 2178

		/* begin block 1.11 */
			// Start line: 2178
			// Start offset: 0x80097688
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.11.1 */
				// Start line: 2178
				// Start offset: 0x80097688
			/* end block 1.11.1 */
			// End offset: 0x80097688
			// End Line: 2178
		/* end block 1.11 */
		// End offset: 0x80097688
		// End Line: 2178

		/* begin block 1.12 */
			// Start line: 2178
			// Start offset: 0x80097688
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.12.1 */
				// Start line: 2178
				// Start offset: 0x80097688
			/* end block 1.12.1 */
			// End offset: 0x80097688
			// End Line: 2178
		/* end block 1.12 */
		// End offset: 0x80097688
		// End Line: 2178
	/* end block 1 */
	// End offset: 0x80097688
	// End Line: 2178

void Activate__Q26Speech13MobileSpeakerP8Car_tObj(MobileSpeaker *this,Car_tObj *carObj)

{
  uint uVar1;
  int iVar2;
  
  *(Car_tObj **)&(this->Speaker)._vf[5].value = carObj;
  uVar1 = GetVoice__6SpeechP8Car_tObj(carObj);
  (this->Speaker)._vf[4].value = uVar1;
  if ((carObj->carFlags & 0x40U) == 0) {
    uVar1 = (&Speech_gCopAttr)[uVar1].voice;
  }
  else {
    (this->Speaker)._vf[4].value = uVar1 + 9;
    uVar1 = 8;
  }
  (this->Speaker)._vf[1].value = uVar1;
  uVar1 = (this->Speaker)._vf[0].value;
  iVar2 = (**(code **)(uVar1 + 0xf4))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xf0));
  (this->Speaker).fFrom = *(int *)(iVar2 + (this->Speaker)._vf[4].value * 4 + 8);
  iVar2 = GameSetup_gData.track;
  (this->Speaker).fConfirm.flags = 0xff;
  (this->Speaker).fPerpName.flags = 0xf;
  (this->Speaker).fBlockade.flags = 0;
  (this->Speaker).fArrest.flags = 0;
  (this->Speaker).fUpdate.flags = 0;
  (this->Speaker)._vf[6].value = 0;
  (this->Speaker).fSub = (Speaker *)0x0;
  (this->Speaker).fHavePerp = (void *)0x0;
  (this->Speaker).fReverse.flags = iVar2 & 1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReActivate__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$s0*/)
 // line 2199, offset 0x8009770c
	/* begin block 1 */
		// Start line: 2200
		// Start offset: 0x8009770C
		// Variables:
	// 		struct Speech_tMobileVoiceAttr *a; // $a0

		/* begin block 1.1 */
			// Start line: 2200
			// Start offset: 0x8009770C

			/* begin block 1.1.1 */
				// Start line: 2206
				// Start offset: 0x80097754

				/* begin block 1.1.1.1 */
					// Start line: 2207
					// Start offset: 0x80097754
					// Variables:
				// 		struct MobileSpeaker *this; // $s0

					/* begin block 1.1.1.1.1 */
						// Start line: 2207
						// Start offset: 0x80097754
					/* end block 1.1.1.1.1 */
					// End offset: 0x80097754
					// End Line: 2207
				/* end block 1.1.1.1 */
				// End offset: 0x80097754
				// End Line: 2207
			/* end block 1.1.1 */
			// End offset: 0x80097754
			// End Line: 2207

			/* begin block 1.1.2 */
				// Start line: 2211
				// Start offset: 0x80097764

				/* begin block 1.1.2.1 */
					// Start line: 2200
					// Start offset: 0x80097764
					// Variables:
				// 		struct MobileSpeaker *this; // $s0
				// 		int Voice; // $v0

					/* begin block 1.1.2.1.1 */
						// Start line: 2200
						// Start offset: 0x80097764
					/* end block 1.1.2.1.1 */
					// End offset: 0x80097770
					// End Line: 2200
				/* end block 1.1.2.1 */
				// End offset: 0x80097770
				// End Line: 2200
			/* end block 1.1.2 */
			// End offset: 0x80097770
			// End Line: 2211
		/* end block 1.1 */
		// End offset: 0x80097770
		// End Line: 2211

		/* begin block 1.2 */
			// Start line: 2213
			// Start offset: 0x80097770
			// Variables:
		// 		int unit; // $v1

			/* begin block 1.2.1 */
				// Start line: 2213
				// Start offset: 0x80097770
			/* end block 1.2.1 */
			// End offset: 0x80097770
			// End Line: 2213
		/* end block 1.2 */
		// End offset: 0x80097770
		// End Line: 2213

		/* begin block 1.3 */
			// Start line: 2213
			// Start offset: 0x80097770
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.3.1 */
				// Start line: 2213
				// Start offset: 0x80097770
			/* end block 1.3.1 */
			// End offset: 0x80097770
			// End Line: 2213
		/* end block 1.3 */
		// End offset: 0x80097770
		// End Line: 2213
	/* end block 1 */
	// End offset: 0x80097770
	// End Line: 2213

void ReActivate__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = GetVoice__6SpeechP8Car_tObj((Car_tObj *)(this->Speaker)._vf[5].value);
  uVar2 = (this->Speaker)._vf[5].value;
  (this->Speaker)._vf[4].value = uVar1;
  if ((*(uint *)(uVar2 + 0x260) & 0x40) == 0) {
    uVar1 = (&Speech_gCopAttr)[uVar1].voice;
  }
  else {
    (this->Speaker)._vf[4].value = uVar1 + 9;
    uVar1 = 8;
  }
  (this->Speaker)._vf[1].value = uVar1;
  uVar1 = (this->Speaker)._vf[0].value;
  iVar3 = (**(code **)(uVar1 + 0xf4))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xf0));
  (this->Speaker).fFrom = *(int *)(iVar3 + (this->Speaker)._vf[4].value * 4 + 8);
  return;
}



// decompiled code
// original method signature: 
// struct Speaker * /*$ra*/ FindMobile__6SpeechP8Car_tObj(struct Speech *this /*$a0*/, struct Car_tObj *carObj /*$a1*/)
 // line 2218, offset 0x800977b8
	/* begin block 1 */
		// Start line: 2219
		// Start offset: 0x800977B8

		/* begin block 1.1 */
			// Start line: 2219
			// Start offset: 0x800977B8
			// Variables:
		// 		int i; // $a3

			/* begin block 1.1.1 */
				// Start line: 2221
				// Start offset: 0x800977CC

				/* begin block 1.1.1.1 */
					// Start line: 2222
					// Start offset: 0x800977D8

					/* begin block 1.1.1.1.1 */
						// Start line: 2219
						// Start offset: 0x800977D8
						// Variables:
					// 		struct MobileSpeaker *this; // $v1
					// 		struct Car_tObj *carObj; // $a1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2219
							// Start offset: 0x800977D8
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800977D8
						// End Line: 2219
					/* end block 1.1.1.1.1 */
					// End offset: 0x800977D8
					// End Line: 2219
				/* end block 1.1.1.1 */
				// End offset: 0x800977F8
				// End Line: 2223
			/* end block 1.1.1 */
			// End offset: 0x800977F8
			// End Line: 2223
		/* end block 1.1 */
		// End offset: 0x80097800
		// End Line: 2226

		/* begin block 1.2 */
			// Start line: 2226
			// Start offset: 0x80097800
			// Variables:
		// 		int i; // $v1

			/* begin block 1.2.1 */
				// Start line: 2226
				// Start offset: 0x80097804

				/* begin block 1.2.1.1 */
					// Start line: 2228
					// Start offset: 0x80097810

					/* begin block 1.2.1.1.1 */
						// Start line: 2219
						// Start offset: 0x80097810
						// Variables:
					// 		struct MobileSpeaker *this; // $a0

						/* begin block 1.2.1.1.1.1 */
							// Start line: 2219
							// Start offset: 0x80097810
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80097810
						// End Line: 2219
					/* end block 1.2.1.1.1 */
					// End offset: 0x80097810
					// End Line: 2219
				/* end block 1.2.1.1 */
				// End offset: 0x8009783C
				// End Line: 2231
			/* end block 1.2.1 */
			// End offset: 0x8009783C
			// End Line: 2231
		/* end block 1.2 */
		// End offset: 0x80097848
		// End Line: 2233
	/* end block 1 */
	// End offset: 0x8009784C
	// End Line: 2238

Speaker * FindMobile__6SpeechP8Car_tObj(Speech *this,Car_tObj *carObj)

{
  Speaker **ppSVar1;
  int iVar2;
  Speech *pSVar3;
  int iVar4;
  
  iVar4 = 0;
  pSVar3 = this;
  while (iVar2 = 0, iVar4 < 4) {
    ppSVar1 = (Speaker **)pSVar3->fMobile;
    pSVar3 = (Speech *)&(pSVar3->fCarBank).Mobile[0].fMake;
    if (carObj == (Car_tObj *)(*ppSVar1)->_vf[5].value) {
      return *ppSVar1;
    }
    iVar4 = iVar4 + 1;
  }
  while( true ) {
    if (3 < iVar2) {
      return DAT_0000083c;
    }
    if ((((MobileSpeaker *)this->fMobile[0])->Speaker)._vf[5].value == 0) break;
    this = (Speech *)&(this->fCarBank).Mobile[0].fMake;
    iVar2 = iVar2 + 1;
  }
  Activate__Q26Speech13MobileSpeakerP8Car_tObj((MobileSpeaker *)this->fMobile[0],carObj);
  return (Speaker *)this->fMobile[0];
}



// decompiled code
// original method signature: 
// struct Speaker * /*$ra*/ Mobile__6SpeechP8Car_tObj(struct Car_tObj *carObj /*$a1*/)
 // line 2244, offset 0x8009785c
	/* begin block 1 */
		// Start line: 2245
		// Start offset: 0x8009785C
	/* end block 1 */
	// End offset: 0x80097894
	// End Line: 2251

Speaker * Mobile__6SpeechP8Car_tObj(Car_tObj *carObj)

{
  Speaker *pSVar1;
  
  pSVar1 = DAT_0000083c;
  if ((DAT_00000838 != (Speech *)0x0) &&
     (pSVar1 = DAT_0000083c, DAT_00000838->fBankOffset != (long *)0x0)) {
    pSVar1 = FindMobile__6SpeechP8Car_tObj(DAT_00000838,carObj);
  }
  return pSVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalcMph__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this /*$a0*/, struct Car_tObj *perp /*$a1*/)
 // line 2256, offset 0x800978a4
	/* begin block 1 */
		// Start line: 2257
		// Start offset: 0x800978A4
	/* end block 1 */
	// End offset: 0x800978DC
	// End Line: 2258

int CalcMph__Q26Speech7SpeakerP8Car_tObj(Speaker *this,Car_tObj *perp)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (perp->linearVel_ch).z;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  uVar1 = fixedmult((int)&DAT_00023ca5,iVar2);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 0xffff;
  }
  return (int)uVar1 >> 0x10;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetSpeed__Q26Speech13MobileSpeakerP8Car_tObj(struct MobileSpeaker *this /*$s2*/, struct Car_tObj *perp /*$s1*/)
 // line 2263, offset 0x800978ec
	/* begin block 1 */
		// Start line: 2264
		// Start offset: 0x800978EC

		/* begin block 1.1 */
			// Start line: 2264
			// Start offset: 0x800978EC

			/* begin block 1.1.1 */
				// Start line: 2266
				// Start offset: 0x80097918

				/* begin block 1.1.1.1 */
					// Start line: 2264
					// Start offset: 0x80097918
					// Variables:
				// 		struct MobileSpeaker *this; // $s2

					/* begin block 1.1.1.1.1 */
						// Start line: 2264
						// Start offset: 0x80097918
					/* end block 1.1.1.1.1 */
					// End offset: 0x80097918
					// End Line: 2264
				/* end block 1.1.1.1 */
				// End offset: 0x80097918
				// End Line: 2264
			/* end block 1.1.1 */
			// End offset: 0x80097970
			// End Line: 2268

			/* begin block 1.1.2 */
				// Start line: 2271
				// Start offset: 0x80097970

				/* begin block 1.1.2.1 */
					// Start line: 2264
					// Start offset: 0x80097970
					// Variables:
				// 		struct MobileSpeaker *this; // $s2

					/* begin block 1.1.2.1.1 */
						// Start line: 2264
						// Start offset: 0x80097970
					/* end block 1.1.2.1.1 */
					// End offset: 0x80097970
					// End Line: 2264
				/* end block 1.1.2.1 */
				// End offset: 0x80097970
				// End Line: 2264
			/* end block 1.1.2 */
			// End offset: 0x80097A00
			// End Line: 2273
		/* end block 1.1 */
		// End offset: 0x80097A00
		// End Line: 2273
	/* end block 1 */
	// End offset: 0x80097A00
	// End Line: 2273

void SetSpeed__Q26Speech13MobileSpeakerP8Car_tObj(MobileSpeaker *this,Car_tObj *perp)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  
  if (GameSetup_gData.measurement == 1) {
    (this->Speaker)._vf[2].value = 1;
    iVar3 = (perp->linearVel_ch).z;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    uVar1 = fixedmult((int)&DAT_00039999,iVar3);
    if ((int)uVar1 / 0xa0000 + -3 < 0) {
LAB_800979f8:
      uVar1 = 0;
      goto LAB_800979fc;
    }
    iVar3 = (perp->linearVel_ch).z;
    puVar2 = &DAT_00039999;
  }
  else {
    (this->Speaker)._vf[2].value = 2;
    iVar3 = (perp->linearVel_ch).z;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    uVar1 = fixedmult((int)&DAT_00023ca5,iVar3);
    if ((int)uVar1 / 0xa0000 + -3 < 0) goto LAB_800979f8;
    iVar3 = (perp->linearVel_ch).z;
    puVar2 = &DAT_00023ca5;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  uVar1 = fixedmult((int)puVar2,iVar3);
  uVar1 = (int)uVar1 / 0xa0000 - 3;
LAB_800979fc:
  (this->Speaker)._vf[3].value = uVar1;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DistToPerp__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$s1*/)
 // line 2281, offset 0x80097a18
	/* begin block 1 */
		// Start line: 2282
		// Start offset: 0x80097A18
		// Variables:
	// 		int x; // $s2
	// 		int z; // $v1
	// 		int d; // $v0
	/* end block 1 */
	// End offset: 0x80097BE4
	// End Line: 2287

int DistToPerp__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  
  uVar2 = (this->Speaker)._vf[0].value;
  iVar3 = (**(code **)(uVar2 + 0xcc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 200));
  uVar2 = (this->Speaker)._vf[0].value;
  iVar4 = (**(code **)(uVar2 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xd8));
  if (*(int *)(iVar3 + 0xa0) - *(int *)(iVar4 + 0xa0) < 1) {
    uVar2 = (this->Speaker)._vf[0].value;
    iVar3 = (**(code **)(uVar2 + 0xdc))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xd8));
    uVar2 = (this->Speaker)._vf[0].value;
    sVar1 = *(short *)(uVar2 + 200);
    pcVar5 = *(code **)(uVar2 + 0xcc);
  }
  else {
    uVar2 = (this->Speaker)._vf[0].value;
    iVar3 = (**(code **)(uVar2 + 0xcc))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 200));
    uVar2 = (this->Speaker)._vf[0].value;
    sVar1 = *(short *)(uVar2 + 0xd8);
    pcVar5 = *(code **)(uVar2 + 0xdc);
  }
  iVar4 = (*pcVar5)((int)&(this->Speaker).fPosition.flags + (int)sVar1);
  iVar6 = *(int *)(iVar3 + 0xa0) - *(int *)(iVar4 + 0xa0);
  uVar2 = (this->Speaker)._vf[0].value;
  iVar3 = (**(code **)(uVar2 + 0xcc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 200));
  uVar2 = (this->Speaker)._vf[0].value;
  iVar4 = (**(code **)(uVar2 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xd8));
  if (*(int *)(iVar3 + 0xa8) - *(int *)(iVar4 + 0xa8) < 1) {
    uVar2 = (this->Speaker)._vf[0].value;
    iVar3 = (**(code **)(uVar2 + 0xdc))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xd8));
    uVar2 = (this->Speaker)._vf[0].value;
    sVar1 = *(short *)(uVar2 + 200);
    pcVar5 = *(code **)(uVar2 + 0xcc);
  }
  else {
    uVar2 = (this->Speaker)._vf[0].value;
    iVar3 = (**(code **)(uVar2 + 0xcc))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 200));
    uVar2 = (this->Speaker)._vf[0].value;
    sVar1 = *(short *)(uVar2 + 0xd8);
    pcVar5 = *(code **)(uVar2 + 0xdc);
  }
  iVar4 = (*pcVar5)((int)&(this->Speaker).fPosition.flags + (int)sVar1);
  iVar3 = *(int *)(iVar3 + 0xa8) - *(int *)(iVar4 + 0xa8);
  if (iVar3 < iVar6) {
    iVar6 = iVar6 + (iVar3 >> 2);
  }
  else {
    iVar6 = iVar3 + (iVar6 >> 2);
  }
  return iVar6;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Report__Q26Speech13MobileSpeakerP8Car_tObj(struct MobileSpeaker *this /*$s0*/, struct Car_tObj *perp /*$s1*/)
 // line 2295, offset 0x80097bfc
	/* begin block 1 */
		// Start line: 2296
		// Start offset: 0x80097BFC

		/* begin block 1.1 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct MobileSpeaker *this; // $s0

			/* begin block 1.1.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC

				/* begin block 1.1.1.1 */
					// Start line: 2296
					// Start offset: 0x80097BFC
					// Variables:
				// 		struct Car_tObj *carObj; // $v0
				// 		struct Speech *this; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 2296
						// Start offset: 0x80097BFC
					/* end block 1.1.1.1.1 */
					// End offset: 0x80097BFC
					// End Line: 2296
				/* end block 1.1.1.1 */
				// End offset: 0x80097BFC
				// End Line: 2296
			/* end block 1.1.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.1 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.2 */
			// Start line: 2296
			// Start offset: 0x80097BFC

			/* begin block 1.2.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.2.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.2 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.3 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.3.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.3.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.3 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.4 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct MobileSpeaker *this; // $s0

			/* begin block 1.4.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.4.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.4 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.5 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.5.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.5.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.5 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.6 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.6.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.6.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.6 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.7 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.7.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.7.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.7 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.8 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct MobileSpeaker *this; // $s0

			/* begin block 1.8.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC

				/* begin block 1.8.1.1 */
					// Start line: 2296
					// Start offset: 0x80097BFC
					// Variables:
				// 		struct Car_tObj *carObj; // $v0
				// 		struct Speech *this; // $v1

					/* begin block 1.8.1.1.1 */
						// Start line: 2296
						// Start offset: 0x80097BFC
					/* end block 1.8.1.1.1 */
					// End offset: 0x80097BFC
					// End Line: 2296
				/* end block 1.8.1.1 */
				// End offset: 0x80097BFC
				// End Line: 2296
			/* end block 1.8.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.8 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.9 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct MobileSpeaker *this; // $s0

			/* begin block 1.9.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.9.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.9 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.10 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.10.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.10.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.10 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.11 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.11.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.11.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.11 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.12 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.12.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.12.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.12 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.13 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.13.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.13.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.13 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.14 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.14.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.14.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.14 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.15 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.15.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.15.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.15 */
		// End offset: 0x80097BFC
		// End Line: 2296

		/* begin block 1.16 */
			// Start line: 2296
			// Start offset: 0x80097BFC
			// Variables:
		// 		struct Speaker *Sub; // $s0

			/* begin block 1.16.1 */
				// Start line: 2296
				// Start offset: 0x80097BFC
			/* end block 1.16.1 */
			// End offset: 0x80097BFC
			// End Line: 2296
		/* end block 1.16 */
		// End offset: 0x80097BFC
		// End Line: 2296
	/* end block 1 */
	// End offset: 0x80097BFC
	// End Line: 2296

void Report__Q26Speech13MobileSpeakerP8Car_tObj(MobileSpeaker *this,Car_tObj *perp)

{
  uint uVar1;
  int ID_UNIT;
  Speaker *pSVar2;
  SPCHNFSType_VOICE *VOICE;
  
  *(uint *)(DAT_00000838 + 0x38c) = (this->Speaker)._vf[5].value;
  uVar1 = (this->Speaker)._vf[0].value;
  ID_UNIT = (**(code **)(uVar1 + 0xf4))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xf0));
  VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
  ID_UNIT = *(int *)(ID_UNIT + 4);
  (this->Speaker).fTo = ID_UNIT;
  SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
  SPCH_PlaySpeech();
  *(uint *)(DAT_00000838 + 0x38c) = (this->Speaker)._vf[5].value;
  SetCar__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,perp);
  FindLocation__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,perp);
  SetSpeed__Q26Speech13MobileSpeakerP8Car_tObj(this,perp);
  SPCHNFS_C_D_PERP_SIGHTED
            (VOICE,&(this->Speaker).fColour,(this->Speaker).fCar,&(this->Speaker).fDistance,
             (SPCHNFSType_POSITION *)this,(this->Speaker).fLocation,&(this->Speaker).fPerpName);
  SPCH_PlaySpeech();
  pSVar2 = Dispatch__6Speech();
  *(MobileSpeaker **)&pSVar2->fSub = this;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Engage__Q26Speech13MobileSpeakerP8Car_tObj(struct MobileSpeaker *this /*$s2*/, struct Car_tObj *perp /*$s1*/)
 // line 2331, offset 0x80097ce8
	/* begin block 1 */
		// Start line: 2332
		// Start offset: 0x80097CE8

		/* begin block 1.1 */
			// Start line: 2332
			// Start offset: 0x80097CE8
			// Variables:
		// 		struct MobileSpeaker *this; // $s2

			/* begin block 1.1.1 */
				// Start line: 2332
				// Start offset: 0x80097CE8

				/* begin block 1.1.1.1 */
					// Start line: 2332
					// Start offset: 0x80097CE8
					// Variables:
				// 		struct Car_tObj *carObj; // $v0
				// 		struct Speech *this; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 2332
						// Start offset: 0x80097CE8
					/* end block 1.1.1.1.1 */
					// End offset: 0x80097CE8
					// End Line: 2332
				/* end block 1.1.1.1 */
				// End offset: 0x80097CE8
				// End Line: 2332
			/* end block 1.1.1 */
			// End offset: 0x80097CE8
			// End Line: 2332
		/* end block 1.1 */
		// End offset: 0x80097CE8
		// End Line: 2332

		/* begin block 1.2 */
			// Start line: 2332
			// Start offset: 0x80097CE8
			// Variables:
		// 		struct Speaker *this; // $s2

			/* begin block 1.2.1 */
				// Start line: 2332
				// Start offset: 0x80097CE8
			/* end block 1.2.1 */
			// End offset: 0x80097CE8
			// End Line: 2332
		/* end block 1.2 */
		// End offset: 0x80097CE8
		// End Line: 2332

		/* begin block 1.3 */
			// Start line: 2332
			// Start offset: 0x80097CE8

			/* begin block 1.3.1 */
				// Start line: 2342
				// Start offset: 0x80097D3C

				/* begin block 1.3.1.1 */
					// Start line: 2332
					// Start offset: 0x80097D3C
					// Variables:
				// 		struct MobileSpeaker *this; // $s2
				// 		struct Car_tObj *car; // $s1

					/* begin block 1.3.1.1.1 */
						// Start line: 2332
						// Start offset: 0x80097D3C
					/* end block 1.3.1.1.1 */
					// End offset: 0x80097D3C
					// End Line: 2332
				/* end block 1.3.1.1 */
				// End offset: 0x80097D3C
				// End Line: 2332

				/* begin block 1.3.1.2 */
					// Start line: 2332
					// Start offset: 0x80097D3C

					/* begin block 1.3.1.2.1 */
						// Start line: 2347
						// Start offset: 0x80097D94
						// Variables:
					// 		struct Speaker *SubChain; // $v1

						/* begin block 1.3.1.2.1.1 */
							// Start line: 2349
							// Start offset: 0x80097DA0

							/* begin block 1.3.1.2.1.1.1 */
								// Start line: 2349
								// Start offset: 0x80097DA0
								// Variables:
							// 		struct Speaker *this; // $v1

								/* begin block 1.3.1.2.1.1.1.1 */
									// Start line: 2349
									// Start offset: 0x80097DA0
								/* end block 1.3.1.2.1.1.1.1 */
								// End offset: 0x80097DA0
								// End Line: 2349
							/* end block 1.3.1.2.1.1.1 */
							// End offset: 0x80097DA0
							// End Line: 2349

							/* begin block 1.3.1.2.1.1.2 */
								// Start line: 2351
								// Start offset: 0x80097DB0

								/* begin block 1.3.1.2.1.1.2.1 */
									// Start line: 2351
									// Start offset: 0x80097DB0
									// Variables:
								// 		struct Speaker *this; // $v1

									/* begin block 1.3.1.2.1.1.2.1.1 */
										// Start line: 2351
										// Start offset: 0x80097DB0
									/* end block 1.3.1.2.1.1.2.1.1 */
									// End offset: 0x80097DB0
									// End Line: 2351
								/* end block 1.3.1.2.1.1.2.1 */
								// End offset: 0x80097DB0
								// End Line: 2351

								/* begin block 1.3.1.2.1.1.2.2 */
									// Start line: 2351
									// Start offset: 0x80097DB8

									/* begin block 1.3.1.2.1.1.2.2.1 */
										// Start line: 2351
										// Start offset: 0x80097DB8
										// Variables:
									// 		struct Speaker *this; // $s2

										/* begin block 1.3.1.2.1.1.2.2.1.1 */
											// Start line: 2351
											// Start offset: 0x80097DB8
										/* end block 1.3.1.2.1.1.2.2.1.1 */
										// End offset: 0x80097DB8
										// End Line: 2351
									/* end block 1.3.1.2.1.1.2.2.1 */
									// End offset: 0x80097DB8
									// End Line: 2351

									/* begin block 1.3.1.2.1.1.2.2.2 */
										// Start line: 2351
										// Start offset: 0x80097DB8
										// Variables:
									// 		struct Speaker *this; // $v1

										/* begin block 1.3.1.2.1.1.2.2.2.1 */
											// Start line: 2351
											// Start offset: 0x80097DB8
										/* end block 1.3.1.2.1.1.2.2.2.1 */
										// End offset: 0x80097DB8
										// End Line: 2351
									/* end block 1.3.1.2.1.1.2.2.2 */
									// End offset: 0x80097DB8
									// End Line: 2351

									/* begin block 1.3.1.2.1.1.2.2.3 */
										// Start line: 2351
										// Start offset: 0x80097DB8
										// Variables:
									// 		struct Speaker *this; // $s2

										/* begin block 1.3.1.2.1.1.2.2.3.1 */
											// Start line: 2351
											// Start offset: 0x80097DB8
										/* end block 1.3.1.2.1.1.2.2.3.1 */
										// End offset: 0x80097DB8
										// End Line: 2351
									/* end block 1.3.1.2.1.1.2.2.3 */
									// End offset: 0x80097DB8
									// End Line: 2351
								/* end block 1.3.1.2.1.1.2.2 */
								// End offset: 0x80097DB8
								// End Line: 2357
							/* end block 1.3.1.2.1.1.2 */
							// End offset: 0x80097DB8
							// End Line: 2357

							/* begin block 1.3.1.2.1.1.3 */
								// Start line: 2357
								// Start offset: 0x80097DB8

								/* begin block 1.3.1.2.1.1.3.1 */
									// Start line: 2357
									// Start offset: 0x80097DB8
								/* end block 1.3.1.2.1.1.3.1 */
								// End offset: 0x80097DB8
								// End Line: 2357
							/* end block 1.3.1.2.1.1.3 */
							// End offset: 0x80097DB8
							// End Line: 2357
						/* end block 1.3.1.2.1.1 */
						// End offset: 0x80097DB8
						// End Line: 2357
					/* end block 1.3.1.2.1 */
					// End offset: 0x80097DC8
					// End Line: 2357
				/* end block 1.3.1.2 */
				// End offset: 0x80097DC8
				// End Line: 2357

				/* begin block 1.3.1.3 */
					// Start line: 2361
					// Start offset: 0x80097DC8

					/* begin block 1.3.1.3.1 */
						// Start line: 2361
						// Start offset: 0x80097DC8

						/* begin block 1.3.1.3.1.1 */
							// Start line: 2361
							// Start offset: 0x80097DC8
						/* end block 1.3.1.3.1.1 */
						// End offset: 0x80097DC8
						// End Line: 2361
					/* end block 1.3.1.3.1 */
					// End offset: 0x80097DC8
					// End Line: 2361

					/* begin block 1.3.1.3.2 */
						// Start line: 2362
						// Start offset: 0x80097DE0

						/* begin block 1.3.1.3.2.1 */
							// Start line: 2363
							// Start offset: 0x80097DE0

							/* begin block 1.3.1.3.2.1.1 */
								// Start line: 2364
								// Start offset: 0x80097E10

								/* begin block 1.3.1.3.2.1.1.1 */
									// Start line: 2366
									// Start offset: 0x80097E10
									// Variables:
								// 		struct MobileSpeaker *this; // $s2

									/* begin block 1.3.1.3.2.1.1.1.1 */
										// Start line: 2366
										// Start offset: 0x80097E10

										/* begin block 1.3.1.3.2.1.1.1.1.1 */
											// Start line: 2366
											// Start offset: 0x80097E10
											// Variables:
										// 		struct Car_tObj *carObj; // $v0
										// 		struct Speech *this; // $v1

											/* begin block 1.3.1.3.2.1.1.1.1.1.1 */
												// Start line: 2366
												// Start offset: 0x80097E10
											/* end block 1.3.1.3.2.1.1.1.1.1.1 */
											// End offset: 0x80097E10
											// End Line: 2366
										/* end block 1.3.1.3.2.1.1.1.1.1 */
										// End offset: 0x80097E10
										// End Line: 2366
									/* end block 1.3.1.3.2.1.1.1.1 */
									// End offset: 0x80097E10
									// End Line: 2366
								/* end block 1.3.1.3.2.1.1.1 */
								// End offset: 0x80097E10
								// End Line: 2366

								/* begin block 1.3.1.3.2.1.1.2 */
									// Start line: 2366
									// Start offset: 0x80097E10

									/* begin block 1.3.1.3.2.1.1.2.1 */
										// Start line: 2366
										// Start offset: 0x80097E10
									/* end block 1.3.1.3.2.1.1.2.1 */
									// End offset: 0x80097E10
									// End Line: 2366
								/* end block 1.3.1.3.2.1.1.2 */
								// End offset: 0x80097E10
								// End Line: 2366

								/* begin block 1.3.1.3.2.1.1.3 */
									// Start line: 2366
									// Start offset: 0x80097E10
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.1.3.2.1.1.3.1 */
										// Start line: 2366
										// Start offset: 0x80097E10
									/* end block 1.3.1.3.2.1.1.3.1 */
									// End offset: 0x80097E10
									// End Line: 2366
								/* end block 1.3.1.3.2.1.1.3 */
								// End offset: 0x80097E10
								// End Line: 2366

								/* begin block 1.3.1.3.2.1.1.4 */
									// Start line: 2366
									// Start offset: 0x80097E10
									// Variables:
								// 		struct MobileSpeaker *this; // $s2

									/* begin block 1.3.1.3.2.1.1.4.1 */
										// Start line: 2366
										// Start offset: 0x80097E10
									/* end block 1.3.1.3.2.1.1.4.1 */
									// End offset: 0x80097E10
									// End Line: 2366
								/* end block 1.3.1.3.2.1.1.4 */
								// End offset: 0x80097E10
								// End Line: 2366

								/* begin block 1.3.1.3.2.1.1.5 */
									// Start line: 2366
									// Start offset: 0x80097E10
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.1.3.2.1.1.5.1 */
										// Start line: 2366
										// Start offset: 0x80097E10
									/* end block 1.3.1.3.2.1.1.5.1 */
									// End offset: 0x80097E10
									// End Line: 2366
								/* end block 1.3.1.3.2.1.1.5 */
								// End offset: 0x80097E10
								// End Line: 2366

								/* begin block 1.3.1.3.2.1.1.6 */
									// Start line: 2366
									// Start offset: 0x80097E10
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.1.3.2.1.1.6.1 */
										// Start line: 2366
										// Start offset: 0x80097E10
									/* end block 1.3.1.3.2.1.1.6.1 */
									// End offset: 0x80097E10
									// End Line: 2366
								/* end block 1.3.1.3.2.1.1.6 */
								// End offset: 0x80097E10
								// End Line: 2366

								/* begin block 1.3.1.3.2.1.1.7 */
									// Start line: 2366
									// Start offset: 0x80097E10
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.1.3.2.1.1.7.1 */
										// Start line: 2366
										// Start offset: 0x80097E10
									/* end block 1.3.1.3.2.1.1.7.1 */
									// End offset: 0x80097E10
									// End Line: 2366
								/* end block 1.3.1.3.2.1.1.7 */
								// End offset: 0x80097E10
								// End Line: 2366

								/* begin block 1.3.1.3.2.1.1.8 */
									// Start line: 2366
									// Start offset: 0x80097E10
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.1.3.2.1.1.8.1 */
										// Start line: 2366
										// Start offset: 0x80097E10
									/* end block 1.3.1.3.2.1.1.8.1 */
									// End offset: 0x80097E10
									// End Line: 2366
								/* end block 1.3.1.3.2.1.1.8 */
								// End offset: 0x80097E10
								// End Line: 2366

								/* begin block 1.3.1.3.2.1.1.9 */
									// Start line: 2366
									// Start offset: 0x80097E10
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.1.3.2.1.1.9.1 */
										// Start line: 2366
										// Start offset: 0x80097E10
									/* end block 1.3.1.3.2.1.1.9.1 */
									// End offset: 0x80097E10
									// End Line: 2366
								/* end block 1.3.1.3.2.1.1.9 */
								// End offset: 0x80097E10
								// End Line: 2366

								/* begin block 1.3.1.3.2.1.1.10 */
									// Start line: 2366
									// Start offset: 0x80097E10
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.1.3.2.1.1.10.1 */
										// Start line: 2366
										// Start offset: 0x80097E10
									/* end block 1.3.1.3.2.1.1.10.1 */
									// End offset: 0x80097E10
									// End Line: 2366
								/* end block 1.3.1.3.2.1.1.10 */
								// End offset: 0x80097E10
								// End Line: 2366

								/* begin block 1.3.1.3.2.1.1.11 */
									// Start line: 2366
									// Start offset: 0x80097E10
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.1.3.2.1.1.11.1 */
										// Start line: 2366
										// Start offset: 0x80097E10
									/* end block 1.3.1.3.2.1.1.11.1 */
									// End offset: 0x80097E10
									// End Line: 2366
								/* end block 1.3.1.3.2.1.1.11 */
								// End offset: 0x80097E10
								// End Line: 2366
							/* end block 1.3.1.3.2.1.1 */
							// End offset: 0x80097E10
							// End Line: 2366
						/* end block 1.3.1.3.2.1 */
						// End offset: 0x80097E10
						// End Line: 2366
					/* end block 1.3.1.3.2 */
					// End offset: 0x80097E10
					// End Line: 2366

					/* begin block 1.3.1.3.3 */
						// Start line: 2374
						// Start offset: 0x80097EC4

						/* begin block 1.3.1.3.3.1 */
							// Start line: 2374
							// Start offset: 0x80097EC4

							/* begin block 1.3.1.3.3.1.1 */
								// Start line: 2374
								// Start offset: 0x80097F18

								/* begin block 1.3.1.3.3.1.1.1 */
									// Start line: 2374
									// Start offset: 0x80097F18
								/* end block 1.3.1.3.3.1.1.1 */
								// End offset: 0x80097F18
								// End Line: 2374
							/* end block 1.3.1.3.3.1.1 */
							// End offset: 0x80097F18
							// End Line: 2374

							/* begin block 1.3.1.3.3.1.2 */
								// Start line: 2374
								// Start offset: 0x80097F30

								/* begin block 1.3.1.3.3.1.2.1 */
									// Start line: 2374
									// Start offset: 0x80097F30
								/* end block 1.3.1.3.3.1.2.1 */
								// End offset: 0x80097F30
								// End Line: 2374
							/* end block 1.3.1.3.3.1.2 */
							// End offset: 0x80097F30
							// End Line: 2374

							/* begin block 1.3.1.3.3.1.3 */
								// Start line: 2375
								// Start offset: 0x80097F74

								/* begin block 1.3.1.3.3.1.3.1 */
									// Start line: 2377
									// Start offset: 0x80097F74

									/* begin block 1.3.1.3.3.1.3.1.1 */
										// Start line: 2377
										// Start offset: 0x80097F74
									/* end block 1.3.1.3.3.1.3.1.1 */
									// End offset: 0x80097F74
									// End Line: 2377
								/* end block 1.3.1.3.3.1.3.1 */
								// End offset: 0x80097F74
								// End Line: 2377

								/* begin block 1.3.1.3.3.1.3.2 */
									// Start line: 2377
									// Start offset: 0x80097F74
									// Variables:
								// 		struct Speaker *this; // $s2

									/* begin block 1.3.1.3.3.1.3.2.1 */
										// Start line: 2377
										// Start offset: 0x80097F74
									/* end block 1.3.1.3.3.1.3.2.1 */
									// End offset: 0x80097F74
									// End Line: 2377
								/* end block 1.3.1.3.3.1.3.2 */
								// End offset: 0x80097F74
								// End Line: 2377

								/* begin block 1.3.1.3.3.1.3.3 */
									// Start line: 2377
									// Start offset: 0x80097F74
									// Variables:
								// 		struct Speaker *Sub; // $s2

									/* begin block 1.3.1.3.3.1.3.3.1 */
										// Start line: 2377
										// Start offset: 0x80097F74
									/* end block 1.3.1.3.3.1.3.3.1 */
									// End offset: 0x80097F74
									// End Line: 2377
								/* end block 1.3.1.3.3.1.3.3 */
								// End offset: 0x80097F74
								// End Line: 2377

								/* begin block 1.3.1.3.3.1.3.4 */
									// Start line: 2377
									// Start offset: 0x80097F74

									/* begin block 1.3.1.3.3.1.3.4.1 */
										// Start line: 2377
										// Start offset: 0x80097F74
										// Variables:
									// 		struct Speaker *this; // $s2

										/* begin block 1.3.1.3.3.1.3.4.1.1 */
											// Start line: 2377
											// Start offset: 0x80097F74
										/* end block 1.3.1.3.3.1.3.4.1.1 */
										// End offset: 0x80097F74
										// End Line: 2377
									/* end block 1.3.1.3.3.1.3.4.1 */
									// End offset: 0x80097F74
									// End Line: 2377

									/* begin block 1.3.1.3.3.1.3.4.2 */
										// Start line: 2381
										// Start offset: 0x80097F9C

										/* begin block 1.3.1.3.3.1.3.4.2.1 */
											// Start line: 2382
											// Start offset: 0x80097F9C

											/* begin block 1.3.1.3.3.1.3.4.2.1.1 */
												// Start line: 2382
												// Start offset: 0x80097F9C
											/* end block 1.3.1.3.3.1.3.4.2.1.1 */
											// End offset: 0x80097F9C
											// End Line: 2382
										/* end block 1.3.1.3.3.1.3.4.2.1 */
										// End offset: 0x80097F9C
										// End Line: 2382

										/* begin block 1.3.1.3.3.1.3.4.2.2 */
											// Start line: 2382
											// Start offset: 0x80097F9C
											// Variables:
										// 		struct Speaker *this; // $s2

											/* begin block 1.3.1.3.3.1.3.4.2.2.1 */
												// Start line: 2382
												// Start offset: 0x80097F9C
											/* end block 1.3.1.3.3.1.3.4.2.2.1 */
											// End offset: 0x80097F9C
											// End Line: 2382
										/* end block 1.3.1.3.3.1.3.4.2.2 */
										// End offset: 0x80097F9C
										// End Line: 2382

										/* begin block 1.3.1.3.3.1.3.4.2.3 */
											// Start line: 2382
											// Start offset: 0x80097F9C
											// Variables:
										// 		struct MobileSpeaker *this; // $s2

											/* begin block 1.3.1.3.3.1.3.4.2.3.1 */
												// Start line: 2382
												// Start offset: 0x80097F9C
											/* end block 1.3.1.3.3.1.3.4.2.3.1 */
											// End offset: 0x80097F9C
											// End Line: 2382
										/* end block 1.3.1.3.3.1.3.4.2.3 */
										// End offset: 0x80097F9C
										// End Line: 2382

										/* begin block 1.3.1.3.3.1.3.4.2.4 */
											// Start line: 2382
											// Start offset: 0x80097F9C
											// Variables:
										// 		struct Speaker *this; // $s2

											/* begin block 1.3.1.3.3.1.3.4.2.4.1 */
												// Start line: 2382
												// Start offset: 0x80097F9C
											/* end block 1.3.1.3.3.1.3.4.2.4.1 */
											// End offset: 0x80097F9C
											// End Line: 2382
										/* end block 1.3.1.3.3.1.3.4.2.4 */
										// End offset: 0x80097F9C
										// End Line: 2382

										/* begin block 1.3.1.3.3.1.3.4.2.5 */
											// Start line: 2382
											// Start offset: 0x80097F9C
											// Variables:
										// 		struct Speaker *this; // $s2

											/* begin block 1.3.1.3.3.1.3.4.2.5.1 */
												// Start line: 2382
												// Start offset: 0x80097F9C
											/* end block 1.3.1.3.3.1.3.4.2.5.1 */
											// End offset: 0x80097F9C
											// End Line: 2382
										/* end block 1.3.1.3.3.1.3.4.2.5 */
										// End offset: 0x80097F9C
										// End Line: 2382

										/* begin block 1.3.1.3.3.1.3.4.2.6 */
											// Start line: 2382
											// Start offset: 0x80097F9C
											// Variables:
										// 		struct Speaker *this; // $s2

											/* begin block 1.3.1.3.3.1.3.4.2.6.1 */
												// Start line: 2382
												// Start offset: 0x80097F9C
											/* end block 1.3.1.3.3.1.3.4.2.6.1 */
											// End offset: 0x80097F9C
											// End Line: 2382
										/* end block 1.3.1.3.3.1.3.4.2.6 */
										// End offset: 0x80097F9C
										// End Line: 2382

										/* begin block 1.3.1.3.3.1.3.4.2.7 */
											// Start line: 2382
											// Start offset: 0x80097F9C
											// Variables:
										// 		struct MobileSpeaker *this; // $s2

											/* begin block 1.3.1.3.3.1.3.4.2.7.1 */
												// Start line: 2382
												// Start offset: 0x80097F9C
											/* end block 1.3.1.3.3.1.3.4.2.7.1 */
											// End offset: 0x80097F9C
											// End Line: 2382
										/* end block 1.3.1.3.3.1.3.4.2.7 */
										// End offset: 0x80097F9C
										// End Line: 2382
									/* end block 1.3.1.3.3.1.3.4.2 */
									// End offset: 0x80097F9C
									// End Line: 2382
								/* end block 1.3.1.3.3.1.3.4 */
								// End offset: 0x80097F9C
								// End Line: 2382
							/* end block 1.3.1.3.3.1.3 */
							// End offset: 0x80097F9C
							// End Line: 2382

							/* begin block 1.3.1.3.3.1.4 */
								// Start line: 2391
								// Start offset: 0x80097FEC
								// Variables:
							// 		struct Speaker *SubChain; // $s3

								/* begin block 1.3.1.3.3.1.4.1 */
									// Start line: 2393
									// Start offset: 0x80097FEC

									/* begin block 1.3.1.3.3.1.4.1.1 */
										// Start line: 2393
										// Start offset: 0x80097FEC

										/* begin block 1.3.1.3.3.1.4.1.1.1 */
											// Start line: 2393
											// Start offset: 0x80097FEC
										/* end block 1.3.1.3.3.1.4.1.1.1 */
										// End offset: 0x80097FEC
										// End Line: 2393
									/* end block 1.3.1.3.3.1.4.1.1 */
									// End offset: 0x80097FEC
									// End Line: 2393

									/* begin block 1.3.1.3.3.1.4.1.2 */
										// Start line: 2396
										// Start offset: 0x8009800C

										/* begin block 1.3.1.3.3.1.4.1.2.1 */
											// Start line: 2396
											// Start offset: 0x8009800C
										/* end block 1.3.1.3.3.1.4.1.2.1 */
										// End offset: 0x8009800C
										// End Line: 2396
									/* end block 1.3.1.3.3.1.4.1.2 */
									// End offset: 0x8009800C
									// End Line: 2396

									/* begin block 1.3.1.3.3.1.4.1.3 */
										// Start line: 2396
										// Start offset: 0x80098040

										/* begin block 1.3.1.3.3.1.4.1.3.1 */
											// Start line: 2396
											// Start offset: 0x80098040
										/* end block 1.3.1.3.3.1.4.1.3.1 */
										// End offset: 0x80098040
										// End Line: 2396
									/* end block 1.3.1.3.3.1.4.1.3 */
									// End offset: 0x80098040
									// End Line: 2396

									/* begin block 1.3.1.3.3.1.4.1.4 */
										// Start line: 2397
										// Start offset: 0x800980B4

										/* begin block 1.3.1.3.3.1.4.1.4.1 */
											// Start line: 2399
											// Start offset: 0x800980B4

											/* begin block 1.3.1.3.3.1.4.1.4.1.1 */
												// Start line: 2399
												// Start offset: 0x800980B4
											/* end block 1.3.1.3.3.1.4.1.4.1.1 */
											// End offset: 0x800980B4
											// End Line: 2399
										/* end block 1.3.1.3.3.1.4.1.4.1 */
										// End offset: 0x800980B4
										// End Line: 2399

										/* begin block 1.3.1.3.3.1.4.1.4.2 */
											// Start line: 2399
											// Start offset: 0x800980B4
											// Variables:
										// 		struct Speaker *this; // $s2

											/* begin block 1.3.1.3.3.1.4.1.4.2.1 */
												// Start line: 2399
												// Start offset: 0x800980B4
											/* end block 1.3.1.3.3.1.4.1.4.2.1 */
											// End offset: 0x800980B4
											// End Line: 2399
										/* end block 1.3.1.3.3.1.4.1.4.2 */
										// End offset: 0x800980B4
										// End Line: 2399

										/* begin block 1.3.1.3.3.1.4.1.4.3 */
											// Start line: 2399
											// Start offset: 0x800980B4
											// Variables:
										// 		struct Speaker *Sub; // $s2

											/* begin block 1.3.1.3.3.1.4.1.4.3.1 */
												// Start line: 2399
												// Start offset: 0x800980B4
											/* end block 1.3.1.3.3.1.4.1.4.3.1 */
											// End offset: 0x800980B4
											// End Line: 2399
										/* end block 1.3.1.3.3.1.4.1.4.3 */
										// End offset: 0x800980B4
										// End Line: 2399
									/* end block 1.3.1.3.3.1.4.1.4 */
									// End offset: 0x800980B4
									// End Line: 2399

									/* begin block 1.3.1.3.3.1.4.1.5 */
										// Start line: 2403
										// Start offset: 0x800980D0

										/* begin block 1.3.1.3.3.1.4.1.5.1 */
											// Start line: 2405
											// Start offset: 0x800980D0

											/* begin block 1.3.1.3.3.1.4.1.5.1.1 */
												// Start line: 2405
												// Start offset: 0x800980D0
												// Variables:
											// 		struct Speaker *this; // $s3

												/* begin block 1.3.1.3.3.1.4.1.5.1.1.1 */
													// Start line: 2405
													// Start offset: 0x800980D0
												/* end block 1.3.1.3.3.1.4.1.5.1.1.1 */
												// End offset: 0x800980D0
												// End Line: 2405
											/* end block 1.3.1.3.3.1.4.1.5.1.1 */
											// End offset: 0x800980D0
											// End Line: 2405

											/* begin block 1.3.1.3.3.1.4.1.5.1.2 */
												// Start line: 2405
												// Start offset: 0x800980E0

												/* begin block 1.3.1.3.3.1.4.1.5.1.2.1 */
													// Start line: 2405
													// Start offset: 0x800980E0
												/* end block 1.3.1.3.3.1.4.1.5.1.2.1 */
												// End offset: 0x800980E0
												// End Line: 2405
											/* end block 1.3.1.3.3.1.4.1.5.1.2 */
											// End offset: 0x800980E0
											// End Line: 2405
										/* end block 1.3.1.3.3.1.4.1.5.1 */
										// End offset: 0x800980E0
										// End Line: 2405

										/* begin block 1.3.1.3.3.1.4.1.5.2 */
											// Start line: 2406
											// Start offset: 0x800980E8
											// Variables:
										// 		struct Speaker *this; // $s3
										// 		struct Speaker *Sub; // $s2

											/* begin block 1.3.1.3.3.1.4.1.5.2.1 */
												// Start line: 2406
												// Start offset: 0x800980E8
											/* end block 1.3.1.3.3.1.4.1.5.2.1 */
											// End offset: 0x800980EC
											// End Line: 2406
										/* end block 1.3.1.3.3.1.4.1.5.2 */
										// End offset: 0x800980EC
										// End Line: 2406
									/* end block 1.3.1.3.3.1.4.1.5 */
									// End offset: 0x800980EC
									// End Line: 2407
								/* end block 1.3.1.3.3.1.4.1 */
								// End offset: 0x800980EC
								// End Line: 2407

								/* begin block 1.3.1.3.3.1.4.2 */
									// Start line: 2410
									// Start offset: 0x800980EC

									/* begin block 1.3.1.3.3.1.4.2.1 */
										// Start line: 2410
										// Start offset: 0x800980EC
										// Variables:
									// 		struct Speaker *this; // $s2

										/* begin block 1.3.1.3.3.1.4.2.1.1 */
											// Start line: 2410
											// Start offset: 0x800980EC
										/* end block 1.3.1.3.3.1.4.2.1.1 */
										// End offset: 0x800980EC
										// End Line: 2410
									/* end block 1.3.1.3.3.1.4.2.1 */
									// End offset: 0x800980EC
									// End Line: 2410

									/* begin block 1.3.1.3.3.1.4.2.2 */
										// Start line: 2411
										// Start offset: 0x800980FC

										/* begin block 1.3.1.3.3.1.4.2.2.1 */
											// Start line: 2413
											// Start offset: 0x800980FC

											/* begin block 1.3.1.3.3.1.4.2.2.1.1 */
												// Start line: 2414
												// Start offset: 0x80098164

												/* begin block 1.3.1.3.3.1.4.2.2.1.1.1 */
													// Start line: 2415
													// Start offset: 0x80098164

													/* begin block 1.3.1.3.3.1.4.2.2.1.1.1.1 */
														// Start line: 2415
														// Start offset: 0x80098164
													/* end block 1.3.1.3.3.1.4.2.2.1.1.1.1 */
													// End offset: 0x80098164
													// End Line: 2415
												/* end block 1.3.1.3.3.1.4.2.2.1.1.1 */
												// End offset: 0x80098164
												// End Line: 2415

												/* begin block 1.3.1.3.3.1.4.2.2.1.1.2 */
													// Start line: 2415
													// Start offset: 0x80098164
													// Variables:
												// 		struct Speaker *this; // $s2

													/* begin block 1.3.1.3.3.1.4.2.2.1.1.2.1 */
														// Start line: 2415
														// Start offset: 0x80098164
													/* end block 1.3.1.3.3.1.4.2.2.1.1.2.1 */
													// End offset: 0x80098164
													// End Line: 2415
												/* end block 1.3.1.3.3.1.4.2.2.1.1.2 */
												// End offset: 0x80098164
												// End Line: 2415

												/* begin block 1.3.1.3.3.1.4.2.2.1.1.3 */
													// Start line: 2415
													// Start offset: 0x80098164
													// Variables:
												// 		struct MobileSpeaker *this; // $s2

													/* begin block 1.3.1.3.3.1.4.2.2.1.1.3.1 */
														// Start line: 2415
														// Start offset: 0x80098164
													/* end block 1.3.1.3.3.1.4.2.2.1.1.3.1 */
													// End offset: 0x80098164
													// End Line: 2415
												/* end block 1.3.1.3.3.1.4.2.2.1.1.3 */
												// End offset: 0x80098164
												// End Line: 2415

												/* begin block 1.3.1.3.3.1.4.2.2.1.1.4 */
													// Start line: 2415
													// Start offset: 0x80098164
													// Variables:
												// 		struct Speaker *this; // $s2

													/* begin block 1.3.1.3.3.1.4.2.2.1.1.4.1 */
														// Start line: 2415
														// Start offset: 0x80098164
													/* end block 1.3.1.3.3.1.4.2.2.1.1.4.1 */
													// End offset: 0x80098164
													// End Line: 2415
												/* end block 1.3.1.3.3.1.4.2.2.1.1.4 */
												// End offset: 0x80098164
												// End Line: 2415

												/* begin block 1.3.1.3.3.1.4.2.2.1.1.5 */
													// Start line: 2415
													// Start offset: 0x80098164
													// Variables:
												// 		struct Speaker *this; // $s2

													/* begin block 1.3.1.3.3.1.4.2.2.1.1.5.1 */
														// Start line: 2415
														// Start offset: 0x80098164
													/* end block 1.3.1.3.3.1.4.2.2.1.1.5.1 */
													// End offset: 0x80098164
													// End Line: 2415
												/* end block 1.3.1.3.3.1.4.2.2.1.1.5 */
												// End offset: 0x80098164
												// End Line: 2415

												/* begin block 1.3.1.3.3.1.4.2.2.1.1.6 */
													// Start line: 2415
													// Start offset: 0x80098164
													// Variables:
												// 		struct Speaker *this; // $s2

													/* begin block 1.3.1.3.3.1.4.2.2.1.1.6.1 */
														// Start line: 2415
														// Start offset: 0x80098164
													/* end block 1.3.1.3.3.1.4.2.2.1.1.6.1 */
													// End offset: 0x80098164
													// End Line: 2415
												/* end block 1.3.1.3.3.1.4.2.2.1.1.6 */
												// End offset: 0x80098164
												// End Line: 2415

												/* begin block 1.3.1.3.3.1.4.2.2.1.1.7 */
													// Start line: 2415
													// Start offset: 0x80098164

													/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1 */
														// Start line: 2423
														// Start offset: 0x80098240

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.1 */
															// Start line: 2332
															// Start offset: 0x80098240
															// Variables:
														// 		struct MobileSpeaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.1.1 */
																// Start line: 2332
																// Start offset: 0x80098240
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.1.1 */
															// End offset: 0x80098240
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.1 */
														// End offset: 0x80098240
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.2 */
															// Start line: 2332
															// Start offset: 0x80098240
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.2.1 */
																// Start line: 2332
																// Start offset: 0x80098240
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.2.1 */
															// End offset: 0x80098240
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.2 */
														// End offset: 0x80098240
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.3 */
															// Start line: 2332
															// Start offset: 0x80098240
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.3.1 */
																// Start line: 2332
																// Start offset: 0x80098240
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.3.1 */
															// End offset: 0x80098240
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.3 */
														// End offset: 0x80098240
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.4 */
															// Start line: 2332
															// Start offset: 0x80098240
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.4.1 */
																// Start line: 2332
																// Start offset: 0x80098240
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.4.1 */
															// End offset: 0x80098240
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.4 */
														// End offset: 0x80098240
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.5 */
															// Start line: 2332
															// Start offset: 0x80098240
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.5.1 */
																// Start line: 2332
																// Start offset: 0x80098240
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.5.1 */
															// End offset: 0x80098240
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.5 */
														// End offset: 0x80098240
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.6 */
															// Start line: 2332
															// Start offset: 0x80098240
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.6.1 */
																// Start line: 2332
																// Start offset: 0x80098240
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.6.1 */
															// End offset: 0x80098240
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.6 */
														// End offset: 0x80098240
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.7 */
															// Start line: 2332
															// Start offset: 0x80098240
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.1.7.1 */
																// Start line: 2332
																// Start offset: 0x80098240
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.7.1 */
															// End offset: 0x80098240
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1.7 */
														// End offset: 0x80098240
														// End Line: 2332
													/* end block 1.3.1.3.3.1.4.2.2.1.1.7.1 */
													// End offset: 0x80098240
													// End Line: 2332

													/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2 */
														// Start line: 2425
														// Start offset: 0x8009826C

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.1 */
															// Start line: 2332
															// Start offset: 0x8009826C
															// Variables:
														// 		struct MobileSpeaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.1.1 */
																// Start line: 2332
																// Start offset: 0x8009826C
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.1.1 */
															// End offset: 0x8009826C
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.1 */
														// End offset: 0x8009826C
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.2 */
															// Start line: 2332
															// Start offset: 0x8009826C
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.2.1 */
																// Start line: 2332
																// Start offset: 0x8009826C
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.2.1 */
															// End offset: 0x8009826C
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.2 */
														// End offset: 0x8009826C
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.3 */
															// Start line: 2332
															// Start offset: 0x8009826C
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.3.1 */
																// Start line: 2332
																// Start offset: 0x8009826C
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.3.1 */
															// End offset: 0x8009826C
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.3 */
														// End offset: 0x8009826C
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.4 */
															// Start line: 2332
															// Start offset: 0x8009826C
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.4.1 */
																// Start line: 2332
																// Start offset: 0x8009826C
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.4.1 */
															// End offset: 0x8009826C
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.4 */
														// End offset: 0x8009826C
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.5 */
															// Start line: 2332
															// Start offset: 0x8009826C
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.5.1 */
																// Start line: 2332
																// Start offset: 0x8009826C
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.5.1 */
															// End offset: 0x8009826C
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.5 */
														// End offset: 0x8009826C
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.6 */
															// Start line: 2332
															// Start offset: 0x8009826C
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.6.1 */
																// Start line: 2332
																// Start offset: 0x8009826C
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.6.1 */
															// End offset: 0x8009826C
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.6 */
														// End offset: 0x8009826C
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.7 */
															// Start line: 2332
															// Start offset: 0x8009826C
															// Variables:
														// 		struct MobileSpeaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.7.1 */
																// Start line: 2332
																// Start offset: 0x8009826C
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.7.1 */
															// End offset: 0x8009826C
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.7 */
														// End offset: 0x8009826C
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.8 */
															// Start line: 2332
															// Start offset: 0x8009826C
															// Variables:
														// 		struct MobileSpeaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.8.1 */
																// Start line: 2332
																// Start offset: 0x8009826C
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.8.1 */
															// End offset: 0x8009826C
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.8 */
														// End offset: 0x8009826C
														// End Line: 2332

														/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.9 */
															// Start line: 2332
															// Start offset: 0x8009826C
															// Variables:
														// 		struct Speaker *this; // $s2

															/* begin block 1.3.1.3.3.1.4.2.2.1.1.7.2.9.1 */
																// Start line: 2332
																// Start offset: 0x8009826C
															/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.9.1 */
															// End offset: 0x8009826C
															// End Line: 2332
														/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2.9 */
														// End offset: 0x8009826C
														// End Line: 2332
													/* end block 1.3.1.3.3.1.4.2.2.1.1.7.2 */
													// End offset: 0x800982A4
													// End Line: 2426
												/* end block 1.3.1.3.3.1.4.2.2.1.1.7 */
												// End offset: 0x800982A4
												// End Line: 2426

												/* begin block 1.3.1.3.3.1.4.2.2.1.1.8 */
													// Start line: 2428
													// Start offset: 0x800982A4

													/* begin block 1.3.1.3.3.1.4.2.2.1.1.8.1 */
														// Start line: 2428
														// Start offset: 0x800982A4
													/* end block 1.3.1.3.3.1.4.2.2.1.1.8.1 */
													// End offset: 0x800982A4
													// End Line: 2428
												/* end block 1.3.1.3.3.1.4.2.2.1.1.8 */
												// End offset: 0x800982A4
												// End Line: 2428

												/* begin block 1.3.1.3.3.1.4.2.2.1.1.9 */
													// Start line: 2428
													// Start offset: 0x800982A4
													// Variables:
												// 		struct Speaker *Sub; // $s2

													/* begin block 1.3.1.3.3.1.4.2.2.1.1.9.1 */
														// Start line: 2428
														// Start offset: 0x800982A4
													/* end block 1.3.1.3.3.1.4.2.2.1.1.9.1 */
													// End offset: 0x800982A4
													// End Line: 2428
												/* end block 1.3.1.3.3.1.4.2.2.1.1.9 */
												// End offset: 0x800982A4
												// End Line: 2428

												/* begin block 1.3.1.3.3.1.4.2.2.1.1.10 */
													// Start line: 2428
													// Start offset: 0x800982A4
													// Variables:
												// 		struct Speaker *Sub; // $s3

													/* begin block 1.3.1.3.3.1.4.2.2.1.1.10.1 */
														// Start line: 2428
														// Start offset: 0x800982A4
													/* end block 1.3.1.3.3.1.4.2.2.1.1.10.1 */
													// End offset: 0x800982A4
													// End Line: 2428
												/* end block 1.3.1.3.3.1.4.2.2.1.1.10 */
												// End offset: 0x800982A4
												// End Line: 2428
											/* end block 1.3.1.3.3.1.4.2.2.1.1 */
											// End offset: 0x800982A4
											// End Line: 2428
										/* end block 1.3.1.3.3.1.4.2.2.1 */
										// End offset: 0x800982A4
										// End Line: 2428
									/* end block 1.3.1.3.3.1.4.2.2 */
									// End offset: 0x800982A4
									// End Line: 2428
								/* end block 1.3.1.3.3.1.4.2 */
								// End offset: 0x800982A4
								// End Line: 2428
							/* end block 1.3.1.3.3.1.4 */
							// End offset: 0x800982A4
							// End Line: 2428
						/* end block 1.3.1.3.3.1 */
						// End offset: 0x800982A4
						// End Line: 2428
					/* end block 1.3.1.3.3 */
					// End offset: 0x800982A4
					// End Line: 2428
				/* end block 1.3.1.3 */
				// End offset: 0x800982A4
				// End Line: 2428
			/* end block 1.3.1 */
			// End offset: 0x800982A4
			// End Line: 2428

			/* begin block 1.3.2 */
				// Start line: 2440
				// Start offset: 0x80098314

				/* begin block 1.3.2.1 */
					// Start line: 2441
					// Start offset: 0x80098314

					/* begin block 1.3.2.1.1 */
						// Start line: 2441
						// Start offset: 0x80098314

						/* begin block 1.3.2.1.1.1 */
							// Start line: 2441
							// Start offset: 0x80098314
						/* end block 1.3.2.1.1.1 */
						// End offset: 0x80098314
						// End Line: 2441
					/* end block 1.3.2.1.1 */
					// End offset: 0x80098314
					// End Line: 2441

					/* begin block 1.3.2.1.2 */
						// Start line: 2442
						// Start offset: 0x8009835C

						/* begin block 1.3.2.1.2.1 */
							// Start line: 2443
							// Start offset: 0x8009835C

							/* begin block 1.3.2.1.2.1.1 */
								// Start line: 2443
								// Start offset: 0x8009835C
							/* end block 1.3.2.1.2.1.1 */
							// End offset: 0x8009835C
							// End Line: 2443
						/* end block 1.3.2.1.2.1 */
						// End offset: 0x8009835C
						// End Line: 2443

						/* begin block 1.3.2.1.2.2 */
							// Start line: 2443
							// Start offset: 0x8009835C
							// Variables:
						// 		struct Speaker *this; // $s2

							/* begin block 1.3.2.1.2.2.1 */
								// Start line: 2443
								// Start offset: 0x8009835C
							/* end block 1.3.2.1.2.2.1 */
							// End offset: 0x8009835C
							// End Line: 2443
						/* end block 1.3.2.1.2.2 */
						// End offset: 0x8009835C
						// End Line: 2443

						/* begin block 1.3.2.1.2.3 */
							// Start line: 2443
							// Start offset: 0x8009835C
							// Variables:
						// 		struct MobileSpeaker *this; // $s2

							/* begin block 1.3.2.1.2.3.1 */
								// Start line: 2443
								// Start offset: 0x8009835C
							/* end block 1.3.2.1.2.3.1 */
							// End offset: 0x8009835C
							// End Line: 2443
						/* end block 1.3.2.1.2.3 */
						// End offset: 0x8009835C
						// End Line: 2443

						/* begin block 1.3.2.1.2.4 */
							// Start line: 2443
							// Start offset: 0x8009835C
							// Variables:
						// 		struct Speaker *this; // $s2

							/* begin block 1.3.2.1.2.4.1 */
								// Start line: 2443
								// Start offset: 0x8009835C
							/* end block 1.3.2.1.2.4.1 */
							// End offset: 0x8009835C
							// End Line: 2443
						/* end block 1.3.2.1.2.4 */
						// End offset: 0x8009835C
						// End Line: 2443

						/* begin block 1.3.2.1.2.5 */
							// Start line: 2443
							// Start offset: 0x8009835C
							// Variables:
						// 		struct Speaker *this; // $s2

							/* begin block 1.3.2.1.2.5.1 */
								// Start line: 2443
								// Start offset: 0x8009835C
							/* end block 1.3.2.1.2.5.1 */
							// End offset: 0x8009835C
							// End Line: 2443
						/* end block 1.3.2.1.2.5 */
						// End offset: 0x8009835C
						// End Line: 2443

						/* begin block 1.3.2.1.2.6 */
							// Start line: 2443
							// Start offset: 0x8009835C
							// Variables:
						// 		struct Speaker *this; // $s2

							/* begin block 1.3.2.1.2.6.1 */
								// Start line: 2443
								// Start offset: 0x8009835C
							/* end block 1.3.2.1.2.6.1 */
							// End offset: 0x8009835C
							// End Line: 2443
						/* end block 1.3.2.1.2.6 */
						// End offset: 0x8009835C
						// End Line: 2443

						/* begin block 1.3.2.1.2.7 */
							// Start line: 2443
							// Start offset: 0x8009835C
							// Variables:
						// 		struct MobileSpeaker *this; // $s2

							/* begin block 1.3.2.1.2.7.1 */
								// Start line: 2443
								// Start offset: 0x8009835C
							/* end block 1.3.2.1.2.7.1 */
							// End offset: 0x8009835C
							// End Line: 2443
						/* end block 1.3.2.1.2.7 */
						// End offset: 0x8009835C
						// End Line: 2443

						/* begin block 1.3.2.1.2.8 */
							// Start line: 2443
							// Start offset: 0x8009835C
							// Variables:
						// 		struct Speaker *this; // $s2

							/* begin block 1.3.2.1.2.8.1 */
								// Start line: 2443
								// Start offset: 0x8009835C
							/* end block 1.3.2.1.2.8.1 */
							// End offset: 0x8009835C
							// End Line: 2443
						/* end block 1.3.2.1.2.8 */
						// End offset: 0x8009835C
						// End Line: 2443

						/* begin block 1.3.2.1.2.9 */
							// Start line: 2443
							// Start offset: 0x8009835C
							// Variables:
						// 		struct Speaker *this; // $s2

							/* begin block 1.3.2.1.2.9.1 */
								// Start line: 2443
								// Start offset: 0x8009835C
							/* end block 1.3.2.1.2.9.1 */
							// End offset: 0x8009835C
							// End Line: 2443
						/* end block 1.3.2.1.2.9 */
						// End offset: 0x8009835C
						// End Line: 2443

						/* begin block 1.3.2.1.2.10 */
							// Start line: 2443
							// Start offset: 0x8009835C
							// Variables:
						// 		struct Speaker *this; // $s2

							/* begin block 1.3.2.1.2.10.1 */
								// Start line: 2443
								// Start offset: 0x8009835C
							/* end block 1.3.2.1.2.10.1 */
							// End offset: 0x8009835C
							// End Line: 2443
						/* end block 1.3.2.1.2.10 */
						// End offset: 0x8009835C
						// End Line: 2443

						/* begin block 1.3.2.1.2.11 */
							// Start line: 2443
							// Start offset: 0x8009835C
							// Variables:
						// 		struct Speaker *this; // $s2

							/* begin block 1.3.2.1.2.11.1 */
								// Start line: 2443
								// Start offset: 0x8009835C
							/* end block 1.3.2.1.2.11.1 */
							// End offset: 0x8009835C
							// End Line: 2443
						/* end block 1.3.2.1.2.11 */
						// End offset: 0x8009835C
						// End Line: 2443

						/* begin block 1.3.2.1.2.12 */
							// Start line: 2443
							// Start offset: 0x8009835C
							// Variables:
						// 		struct Speaker *this; // $s2

							/* begin block 1.3.2.1.2.12.1 */
								// Start line: 2443
								// Start offset: 0x8009835C
							/* end block 1.3.2.1.2.12.1 */
							// End offset: 0x8009835C
							// End Line: 2443
						/* end block 1.3.2.1.2.12 */
						// End offset: 0x8009835C
						// End Line: 2443
					/* end block 1.3.2.1.2 */
					// End offset: 0x80098418
					// End Line: 2451
				/* end block 1.3.2.1 */
				// End offset: 0x80098418
				// End Line: 2451
			/* end block 1.3.2 */
			// End offset: 0x80098418
			// End Line: 2451
		/* end block 1.3 */
		// End offset: 0x80098418
		// End Line: 2451
	/* end block 1 */
	// End offset: 0x80098418
	// End Line: 2451

/* WARNING: Type propagation algorithm not settling */

void Engage__Q26Speech13MobileSpeakerP8Car_tObj(MobileSpeaker *this,Car_tObj *perp)

{
  short sVar1;
  bool bVar2;
  Car_tObj *car;
  int ID_UNIT;
  MobileSpeaker *pMVar3;
  MobileSpeaker *pMVar4;
  Speaker *pSVar5;
  int *piVar6;
  Speaker *pSVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  SPCHNFSType_VOICE *VOICE;
  
  *(uint *)(DAT_00000838 + 0x38c) = (this->Speaker)._vf[5].value;
  uVar9 = (this->Speaker)._vf[0].value;
  *(undefined **)&(this->Speaker).fHavePerp = &DAT_00000001;
  car = (Car_tObj *)
        (**(code **)(uVar9 + 0xdc))
                  ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xd8));
  if (perp == car) {
    bVar2 = false;
    if (*(int *)(DAT_00000838 + 0x388) == 0) {
      pSVar5 = Dispatch__6Speech();
      uVar9 = pSVar5->_vf[0].value;
      ID_UNIT = (**(code **)(uVar9 + 0xac))
                          ((int)&(pSVar5->fPosition).flags + (int)*(short *)(uVar9 + 0xa8));
      bVar2 = ID_UNIT < 0x160;
    }
    if (!bVar2) {
      return;
    }
    uVar9 = (this->Speaker)._vf[0].value;
    car = (Car_tObj *)
          (**(code **)(uVar9 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xd8));
    SetCar__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
    uVar9 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar9 + 0xf4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xf0));
    VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
    ID_UNIT = *(int *)(ID_UNIT + 4);
    (this->Speaker).fTo = ID_UNIT;
    SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
    SPCH_PlaySpeech();
    uVar9 = (this->Speaker)._vf[0].value;
    car = (Car_tObj *)
          (**(code **)(uVar9 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xd8));
    FindLocation__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
    SPCHNFS_C_C_PERP_REAQUIRED
              (VOICE,&(this->Speaker).fColour,(this->Speaker).fCar,(SPCHNFSType_POSITION *)this,
               (this->Speaker).fLocation,&(this->Speaker).fDistance);
LAB_80098410:
    SPCH_PlaySpeech();
    return;
  }
  uVar9 = (this->Speaker)._vf[0].value;
  *(Car_tObj **)&(this->Speaker)._vf[6].value = perp;
  car = (Car_tObj *)
        (**(code **)(uVar9 + 0xdc))
                  ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xd8));
  SetCar__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
  uVar9 = (this->Speaker)._vf[0].value;
  ID_UNIT = (**(code **)(uVar9 + 0xcc))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 200));
  if ((*(uint *)(ID_UNIT + 0x260) & 0x200) == 0) {
    pMVar4 = (MobileSpeaker *)Dispatch__6Speech();
    do {
      pMVar3 = pMVar4;
      pMVar4 = *(MobileSpeaker **)((int)&pMVar3->Speaker + 0x48);
      if (pMVar4 == (MobileSpeaker *)0x0) goto LAB_80097dc8;
    } while (pMVar4 != this);
    *(Speaker **)((int)&pMVar3->Speaker + 0x48) = (this->Speaker).fSub;
    (this->Speaker).fSub = (Speaker *)0x0;
  }
LAB_80097dc8:
  pSVar5 = Dispatch__6Speech();
  bVar2 = false;
  if ((MobileSpeaker *)pSVar5->fSub == this) {
    uVar9 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar9 + 0xcc))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 200));
    if ((*(uint *)(ID_UNIT + 0x260) & 0x200) == 0) {
      return;
    }
    pSVar5 = Dispatch__6Speech();
    uVar9 = pSVar5->_vf[0].value;
    (**(code **)(uVar9 + 0xc))((int)&(pSVar5->fPosition).flags + (int)*(short *)(uVar9 + 8),perp);
    *(uint *)(DAT_00000838 + 0x38c) = (this->Speaker)._vf[5].value;
    uVar9 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar9 + 0xf4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xf0));
    uVar9 = (this->Speaker)._vf[0].value;
    (this->Speaker).fTo = *(int *)(ID_UNIT + 4);
    car = (Car_tObj *)
          (**(code **)(uVar9 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xd8));
    FindLocation__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
    SPCHNFS_C_D_ENGAGE_PURS_REP_SPDR_REPLY
              ((SPCHNFSType_VOICE *)((this->Speaker)._vf + 1),(this->Speaker).fTo,
               &(this->Speaker).fColour,(this->Speaker).fCar,&(this->Speaker).fDistance,
               (SPCHNFSType_POSITION *)this,(this->Speaker).fLocation,&(this->Speaker).fConfirm);
    goto LAB_80098410;
  }
  uVar9 = (this->Speaker)._vf[0].value;
  ID_UNIT = (**(code **)(uVar9 + 0xa4))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xa0));
  if (((ID_UNIT != 0) &&
      (uVar9 = (this->Speaker)._vf[0].value,
      ID_UNIT = (**(code **)(uVar9 + 0xdc))
                          ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xd8)),
      (*(uint *)(ID_UNIT + 0x260) & 4) != 0)) &&
     (pSVar5 = Dispatch__6Speech(), pSVar5->fSub != (Speaker *)0x0)) {
    pSVar5 = Dispatch__6Speech();
    uVar9 = pSVar5->fSub->_vf[0].value;
    ID_UNIT = (**(code **)(uVar9 + 0xcc))
                        ((int)&(pSVar5->fSub->fPosition).flags + (int)*(short *)(uVar9 + 200));
    bVar2 = (*(uint *)(ID_UNIT + 0x260) & 0x40) == 0;
  }
  if (bVar2) {
    pSVar5 = Dispatch__6Speech();
    (this->Speaker).fSub = pSVar5->fSub;
    pSVar5 = Dispatch__6Speech();
    *(MobileSpeaker **)&pSVar5->fSub = this;
    if ((this->Speaker).fBlockade.flags != 0) {
      return;
    }
    uVar9 = (this->Speaker)._vf[0].value;
    piVar6 = (int *)(**(code **)(uVar9 + 0xf4))
                              ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xf0)
                              );
    VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
    ID_UNIT = *piVar6;
    (this->Speaker).fTo = ID_UNIT;
    SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
    SPCH_PlaySpeech();
    SPCHNFS_S_C_SUPER_COP_ARRIVAL(VOICE);
    goto LAB_80098410;
  }
  bVar2 = false;
  pSVar5 = Dispatch__6Speech();
  pSVar7 = Dispatch__6Speech();
  if (pSVar7->fSub != (Speaker *)0x0) {
    pSVar7 = Dispatch__6Speech();
    uVar9 = pSVar7->fSub->_vf[0].value;
    ID_UNIT = (**(code **)(uVar9 + 0xdc))
                        ((int)&(pSVar7->fSub->fPosition).flags + (int)*(short *)(uVar9 + 0xd8));
    if (ID_UNIT != 0) {
      pSVar7 = Dispatch__6Speech();
      uVar9 = pSVar7->fSub->_vf[0].value;
      ID_UNIT = (**(code **)(uVar9 + 0xdc))
                          ((int)&(pSVar7->fSub->fPosition).flags + (int)*(short *)(uVar9 + 0xd8));
      if ((*(uint *)(ID_UNIT + 0x260) & 4) == 0) {
        uVar9 = (this->Speaker)._vf[0].value;
        ID_UNIT = (**(code **)(uVar9 + 0xdc))
                            ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xd8));
        bVar2 = (*(uint *)(ID_UNIT + 0x260) & 4) != 0;
      }
    }
  }
  if (bVar2) {
    pSVar5 = Dispatch__6Speech();
    (this->Speaker).fSub = pSVar5->fSub;
    pSVar5 = Dispatch__6Speech();
    *(MobileSpeaker **)&pSVar5->fSub = this;
  }
  else {
    do {
      pSVar7 = pSVar5;
      pSVar5 = pSVar7->fSub;
    } while (pSVar5 != (Speaker *)0x0);
    *(MobileSpeaker **)&pSVar7->fSub = this;
  }
  if ((this->Speaker).fBlockade.flags != 0) {
    return;
  }
  bVar2 = false;
  pSVar5 = Dispatch__6Speech();
  uVar9 = pSVar5->_vf[0].value;
  ID_UNIT = (**(code **)(uVar9 + 0x94))
                      ((int)&(pSVar5->fPosition).flags + (int)*(short *)(uVar9 + 0x90),perp);
  if (ID_UNIT != 0) {
    pSVar5 = Dispatch__6Speech();
    uVar9 = pSVar5->_vf[0].value;
    ID_UNIT = (**(code **)(uVar9 + 0xac))
                        ((int)&(pSVar5->fPosition).flags + (int)*(short *)(uVar9 + 0xa8));
    if (0x17f < ID_UNIT) goto LAB_8009815c;
  }
  bVar2 = true;
LAB_8009815c:
  if (!bVar2) {
    return;
  }
  uVar9 = (this->Speaker)._vf[0].value;
  ID_UNIT = (**(code **)(uVar9 + 0xf4))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xf0));
  VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
  ID_UNIT = *(int *)(ID_UNIT + 4);
  (this->Speaker).fTo = ID_UNIT;
  SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
  SPCH_PlaySpeech();
  uVar9 = (this->Speaker)._vf[0].value;
  car = (Car_tObj *)
        (**(code **)(uVar9 + 0xdc))
                  ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xd8));
  FindLocation__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
  uVar9 = (this->Speaker)._vf[0].value;
  car = (Car_tObj *)
        (**(code **)(uVar9 + 0xdc))
                  ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar9 + 0xd8));
  SetSpeed__Q26Speech13MobileSpeakerP8Car_tObj(this,car);
  pSVar5 = Dispatch__6Speech();
  uVar9 = pSVar5->_vf[0].value;
  uVar10 = (this->Speaker)._vf[0].value;
  sVar1 = *(short *)(uVar9 + 0x90);
  uVar8 = (**(code **)(uVar10 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar10 + 0xd8));
  ID_UNIT = (**(code **)(uVar9 + 0x94))((int)&(pSVar5->fPosition).flags + (int)sVar1,uVar8);
  if (ID_UNIT == 0) {
    SPCHNFS_C_D_ENGAGE_PURS_REP_SPDR
              (VOICE,&(this->Speaker).fColour,(this->Speaker).fCar,(SPCHNFSType_POSITION *)this,
               (this->Speaker).fLocation,&(this->Speaker).fDistance,(this->Speaker)._vf[3].value,
               (SPCHNFSType_vs_KMH_MPH *)((this->Speaker)._vf + 2),&(this->Speaker).fPerpName);
  }
  else {
    SPCHNFS_C_D_PERP_SIGHTED
              (VOICE,&(this->Speaker).fColour,(this->Speaker).fCar,&(this->Speaker).fDistance,
               (SPCHNFSType_POSITION *)this,(this->Speaker).fLocation,&(this->Speaker).fPerpName);
  }
  SPCH_PlaySpeech();
  pSVar5 = Dispatch__6Speech();
  pSVar7 = pSVar5->fSub;
  pSVar5 = Dispatch__6Speech();
  *(MobileSpeaker **)&pSVar5->fSub = this;
  pSVar5 = Dispatch__6Speech();
  uVar9 = pSVar5->_vf[0].value;
  uVar10 = (this->Speaker)._vf[0].value;
  sVar1 = *(short *)(uVar9 + 8);
  uVar8 = (**(code **)(uVar10 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar10 + 0xd8));
  (**(code **)(uVar9 + 0xc))((int)&(pSVar5->fPosition).flags + (int)sVar1,uVar8);
  pSVar5 = Dispatch__6Speech();
  pSVar5->fSub = pSVar7;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Lose__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$s1*/)
 // line 2463, offset 0x80098434
	/* begin block 1 */
		// Start line: 2464
		// Start offset: 0x80098434
		// Variables:
	// 		struct Speaker *Leader; // $s2

		/* begin block 1.1 */
			// Start line: 2464
			// Start offset: 0x80098470
			// Variables:
		// 		struct MobileSpeaker *this; // $s1

			/* begin block 1.1.1 */
				// Start line: 2464
				// Start offset: 0x80098470

				/* begin block 1.1.1.1 */
					// Start line: 2464
					// Start offset: 0x80098470
					// Variables:
				// 		struct Car_tObj *carObj; // $v1
				// 		struct Speech *this; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 2464
						// Start offset: 0x80098470
					/* end block 1.1.1.1.1 */
					// End offset: 0x80098470
					// End Line: 2464
				/* end block 1.1.1.1 */
				// End offset: 0x80098470
				// End Line: 2464
			/* end block 1.1.1 */
			// End offset: 0x80098470
			// End Line: 2464
		/* end block 1.1 */
		// End offset: 0x80098470
		// End Line: 2464

		/* begin block 1.2 */
			// Start line: 2464
			// Start offset: 0x80098470

			/* begin block 1.2.1 */
				// Start line: 2464
				// Start offset: 0x80098470

				/* begin block 1.2.1.1 */
					// Start line: 2464
					// Start offset: 0x80098470
				/* end block 1.2.1.1 */
				// End offset: 0x80098470
				// End Line: 2464
			/* end block 1.2.1 */
			// End offset: 0x80098470
			// End Line: 2464

			/* begin block 1.2.2 */
				// Start line: 2477
				// Start offset: 0x80098490

				/* begin block 1.2.2.1 */
					// Start line: 2477
					// Start offset: 0x80098490
				/* end block 1.2.2.1 */
				// End offset: 0x80098490
				// End Line: 2477
			/* end block 1.2.2 */
			// End offset: 0x80098490
			// End Line: 2477

			/* begin block 1.2.3 */
				// Start line: 2477
				// Start offset: 0x80098490

				/* begin block 1.2.3.1 */
					// Start line: 2477
					// Start offset: 0x80098490
				/* end block 1.2.3.1 */
				// End offset: 0x80098490
				// End Line: 2477
			/* end block 1.2.3 */
			// End offset: 0x80098490
			// End Line: 2477

			/* begin block 1.2.4 */
				// Start line: 2477
				// Start offset: 0x800984B0
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.2.4.1 */
					// Start line: 2477
					// Start offset: 0x800984B0
				/* end block 1.2.4.1 */
				// End offset: 0x800984B0
				// End Line: 2477
			/* end block 1.2.4 */
			// End offset: 0x800984B0
			// End Line: 2477

			/* begin block 1.2.5 */
				// Start line: 2477
				// Start offset: 0x800984C0
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.2.5.1 */
					// Start line: 2477
					// Start offset: 0x800984C0
				/* end block 1.2.5.1 */
				// End offset: 0x800984C0
				// End Line: 2477
			/* end block 1.2.5 */
			// End offset: 0x800984C0
			// End Line: 2477

			/* begin block 1.2.6 */
				// Start line: 2478
				// Start offset: 0x800984D4

				/* begin block 1.2.6.1 */
					// Start line: 2479
					// Start offset: 0x800984D4

					/* begin block 1.2.6.1.1 */
						// Start line: 2479
						// Start offset: 0x800984D4
					/* end block 1.2.6.1.1 */
					// End offset: 0x800984D4
					// End Line: 2479
				/* end block 1.2.6.1 */
				// End offset: 0x800984D4
				// End Line: 2479

				/* begin block 1.2.6.2 */
					// Start line: 2479
					// Start offset: 0x800984D4

					/* begin block 1.2.6.2.1 */
						// Start line: 2479
						// Start offset: 0x800984D4
					/* end block 1.2.6.2.1 */
					// End offset: 0x800984D4
					// End Line: 2479
				/* end block 1.2.6.2 */
				// End offset: 0x800984D4
				// End Line: 2479

				/* begin block 1.2.6.3 */
					// Start line: 2479
					// Start offset: 0x800984D4
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.6.3.1 */
						// Start line: 2479
						// Start offset: 0x800984D4
					/* end block 1.2.6.3.1 */
					// End offset: 0x800984D4
					// End Line: 2479
				/* end block 1.2.6.3 */
				// End offset: 0x800984D4
				// End Line: 2479
			/* end block 1.2.6 */
			// End offset: 0x800984D4
			// End Line: 2479

			/* begin block 1.2.7 */
				// Start line: 2483
				// Start offset: 0x80098528

				/* begin block 1.2.7.1 */
					// Start line: 2484
					// Start offset: 0x80098528

					/* begin block 1.2.7.1.1 */
						// Start line: 2484
						// Start offset: 0x80098528
					/* end block 1.2.7.1.1 */
					// End offset: 0x80098528
					// End Line: 2484
				/* end block 1.2.7.1 */
				// End offset: 0x80098528
				// End Line: 2484

				/* begin block 1.2.7.2 */
					// Start line: 2484
					// Start offset: 0x80098528
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.7.2.1 */
						// Start line: 2484
						// Start offset: 0x80098528
					/* end block 1.2.7.2.1 */
					// End offset: 0x80098550
					// End Line: 2485
				/* end block 1.2.7.2 */
				// End offset: 0x80098550
				// End Line: 2485
			/* end block 1.2.7 */
			// End offset: 0x80098550
			// End Line: 2485
		/* end block 1.2 */
		// End offset: 0x80098550
		// End Line: 2485

		/* begin block 1.3 */
			// Start line: 2488
			// Start offset: 0x80098550

			/* begin block 1.3.1 */
				// Start line: 2488
				// Start offset: 0x80098550
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.3.1.1 */
					// Start line: 2488
					// Start offset: 0x80098550
				/* end block 1.3.1.1 */
				// End offset: 0x80098550
				// End Line: 2488
			/* end block 1.3.1 */
			// End offset: 0x80098550
			// End Line: 2488

			/* begin block 1.3.2 */
				// Start line: 2489
				// Start offset: 0x80098560

				/* begin block 1.3.2.1 */
					// Start line: 2464
					// Start offset: 0x80098560
					// Variables:
				// 		struct MobileSpeaker *this; // $s1

					/* begin block 1.3.2.1.1 */
						// Start line: 2464
						// Start offset: 0x80098560
					/* end block 1.3.2.1.1 */
					// End offset: 0x80098560
					// End Line: 2464
				/* end block 1.3.2.1 */
				// End offset: 0x80098560
				// End Line: 2464
			/* end block 1.3.2 */
			// End offset: 0x80098560
			// End Line: 2491

			/* begin block 1.3.3 */
				// Start line: 2494
				// Start offset: 0x80098578

				/* begin block 1.3.3.1 */
					// Start line: 2494
					// Start offset: 0x80098578

					/* begin block 1.3.3.1.1 */
						// Start line: 2494
						// Start offset: 0x80098578
						// Variables:
					// 		struct Speaker *this; // $s1

						/* begin block 1.3.3.1.1.1 */
							// Start line: 2494
							// Start offset: 0x80098578
						/* end block 1.3.3.1.1.1 */
						// End offset: 0x80098578
						// End Line: 2494
					/* end block 1.3.3.1.1 */
					// End offset: 0x80098578
					// End Line: 2494

					/* begin block 1.3.3.1.2 */
						// Start line: 2494
						// Start offset: 0x80098588
						// Variables:
					// 		struct Speaker *this; // $s1

						/* begin block 1.3.3.1.2.1 */
							// Start line: 2494
							// Start offset: 0x80098588
						/* end block 1.3.3.1.2.1 */
						// End offset: 0x80098588
						// End Line: 2494
					/* end block 1.3.3.1.2 */
					// End offset: 0x80098588
					// End Line: 2494
				/* end block 1.3.3.1 */
				// End offset: 0x800985C4
				// End Line: 2495
			/* end block 1.3.3 */
			// End offset: 0x800985C4
			// End Line: 2495
		/* end block 1.3 */
		// End offset: 0x800985C4
		// End Line: 2495

		/* begin block 1.4 */
			// Start line: 2464
			// Start offset: 0x800985C4
			// Variables:
		// 		struct MobileSpeaker *this; // $s1

			/* begin block 1.4.1 */
				// Start line: 2464
				// Start offset: 0x800985C4
			/* end block 1.4.1 */
			// End offset: 0x800985C4
			// End Line: 2464
		/* end block 1.4 */
		// End offset: 0x800985C4
		// End Line: 2464

		/* begin block 1.5 */
			// Start line: 2464
			// Start offset: 0x800985C4
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.5.1 */
				// Start line: 2464
				// Start offset: 0x800985C4
			/* end block 1.5.1 */
			// End offset: 0x800985C4
			// End Line: 2464
		/* end block 1.5 */
		// End offset: 0x800985C4
		// End Line: 2464

		/* begin block 1.6 */
			// Start line: 2464
			// Start offset: 0x800985C4
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.6.1 */
				// Start line: 2464
				// Start offset: 0x800985C4
			/* end block 1.6.1 */
			// End offset: 0x800985C4
			// End Line: 2464
		/* end block 1.6 */
		// End offset: 0x800985C4
		// End Line: 2464

		/* begin block 1.7 */
			// Start line: 2464
			// Start offset: 0x800985C4
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.7.1 */
				// Start line: 2464
				// Start offset: 0x800985C4
			/* end block 1.7.1 */
			// End offset: 0x800985C4
			// End Line: 2464
		/* end block 1.7 */
		// End offset: 0x800985C4
		// End Line: 2464

		/* begin block 1.8 */
			// Start line: 2464
			// Start offset: 0x800985C4

			/* begin block 1.8.1 */
				// Start line: 2464
				// Start offset: 0x800985C4
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.8.1.1 */
					// Start line: 2464
					// Start offset: 0x800985C4
				/* end block 1.8.1.1 */
				// End offset: 0x800985C4
				// End Line: 2464
			/* end block 1.8.1 */
			// End offset: 0x800985C4
			// End Line: 2464

			/* begin block 1.8.2 */
				// Start line: 2505
				// Start offset: 0x80098640

				/* begin block 1.8.2.1 */
					// Start line: 2464
					// Start offset: 0x80098640
					// Variables:
				// 		struct MobileSpeaker *this; // $s1

					/* begin block 1.8.2.1.1 */
						// Start line: 2464
						// Start offset: 0x80098640
					/* end block 1.8.2.1.1 */
					// End offset: 0x80098640
					// End Line: 2464
				/* end block 1.8.2.1 */
				// End offset: 0x80098640
				// End Line: 2464

				/* begin block 1.8.2.2 */
					// Start line: 2464
					// Start offset: 0x80098640
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.8.2.2.1 */
						// Start line: 2464
						// Start offset: 0x80098640
					/* end block 1.8.2.2.1 */
					// End offset: 0x80098640
					// End Line: 2464
				/* end block 1.8.2.2 */
				// End offset: 0x80098640
				// End Line: 2464
			/* end block 1.8.2 */
			// End offset: 0x80098640
			// End Line: 2505

			/* begin block 1.8.3 */
				// Start line: 2506
				// Start offset: 0x80098654

				/* begin block 1.8.3.1 */
					// Start line: 2506
					// Start offset: 0x80098654

					/* begin block 1.8.3.1.1 */
						// Start line: 2507
						// Start offset: 0x80098684

						/* begin block 1.8.3.1.1.1 */
							// Start line: 2464
							// Start offset: 0x80098684
							// Variables:
						// 		struct MobileSpeaker *this; // $s1

							/* begin block 1.8.3.1.1.1.1 */
								// Start line: 2464
								// Start offset: 0x80098684
							/* end block 1.8.3.1.1.1.1 */
							// End offset: 0x80098684
							// End Line: 2464
						/* end block 1.8.3.1.1.1 */
						// End offset: 0x80098684
						// End Line: 2464
					/* end block 1.8.3.1.1 */
					// End offset: 0x80098684
					// End Line: 2507

					/* begin block 1.8.3.1.2 */
						// Start line: 2508
						// Start offset: 0x80098694

						/* begin block 1.8.3.1.2.1 */
							// Start line: 2508
							// Start offset: 0x80098694

							/* begin block 1.8.3.1.2.1.1 */
								// Start line: 2508
								// Start offset: 0x80098694
								// Variables:
							// 		struct Speaker *this; // $s1

								/* begin block 1.8.3.1.2.1.1.1 */
									// Start line: 2508
									// Start offset: 0x80098694
								/* end block 1.8.3.1.2.1.1.1 */
								// End offset: 0x80098694
								// End Line: 2508
							/* end block 1.8.3.1.2.1.1 */
							// End offset: 0x80098694
							// End Line: 2508

							/* begin block 1.8.3.1.2.1.2 */
								// Start line: 2510
								// Start offset: 0x800986A4

								/* begin block 1.8.3.1.2.1.2.1 */
									// Start line: 2464
									// Start offset: 0x800986A4
									// Variables:
								// 		struct MobileSpeaker *this; // $s1

									/* begin block 1.8.3.1.2.1.2.1.1 */
										// Start line: 2464
										// Start offset: 0x800986A4
									/* end block 1.8.3.1.2.1.2.1.1 */
									// End offset: 0x800986A4
									// End Line: 2464
								/* end block 1.8.3.1.2.1.2.1 */
								// End offset: 0x800986A4
								// End Line: 2464

								/* begin block 1.8.3.1.2.1.2.2 */
									// Start line: 2464
									// Start offset: 0x800986A4
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.8.3.1.2.1.2.2.1 */
										// Start line: 2464
										// Start offset: 0x800986A4
									/* end block 1.8.3.1.2.1.2.2.1 */
									// End offset: 0x800986A4
									// End Line: 2464
								/* end block 1.8.3.1.2.1.2.2 */
								// End offset: 0x800986A4
								// End Line: 2464

								/* begin block 1.8.3.1.2.1.2.3 */
									// Start line: 2464
									// Start offset: 0x800986A4
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.8.3.1.2.1.2.3.1 */
										// Start line: 2464
										// Start offset: 0x800986A4
									/* end block 1.8.3.1.2.1.2.3.1 */
									// End offset: 0x800986A4
									// End Line: 2464
								/* end block 1.8.3.1.2.1.2.3 */
								// End offset: 0x800986A4
								// End Line: 2464
							/* end block 1.8.3.1.2.1.2 */
							// End offset: 0x800986A4
							// End Line: 2510

							/* begin block 1.8.3.1.2.1.3 */
								// Start line: 2511
								// Start offset: 0x800986BC

								/* begin block 1.8.3.1.2.1.3.1 */
									// Start line: 2511
									// Start offset: 0x800986BC

									/* begin block 1.8.3.1.2.1.3.1.1 */
										// Start line: 2511
										// Start offset: 0x800986BC
										// Variables:
									// 		struct Speaker *this; // $s1

										/* begin block 1.8.3.1.2.1.3.1.1.1 */
											// Start line: 2511
											// Start offset: 0x800986BC
										/* end block 1.8.3.1.2.1.3.1.1.1 */
										// End offset: 0x800986BC
										// End Line: 2511
									/* end block 1.8.3.1.2.1.3.1.1 */
									// End offset: 0x800986BC
									// End Line: 2511

									/* begin block 1.8.3.1.2.1.3.1.2 */
										// Start line: 2513
										// Start offset: 0x800986C4

										/* begin block 1.8.3.1.2.1.3.1.2.1 */
											// Start line: 2464
											// Start offset: 0x800986C4
											// Variables:
										// 		struct MobileSpeaker *this; // $s1

											/* begin block 1.8.3.1.2.1.3.1.2.1.1 */
												// Start line: 2464
												// Start offset: 0x800986C4
											/* end block 1.8.3.1.2.1.3.1.2.1.1 */
											// End offset: 0x800986C4
											// End Line: 2464
										/* end block 1.8.3.1.2.1.3.1.2.1 */
										// End offset: 0x800986C4
										// End Line: 2464

										/* begin block 1.8.3.1.2.1.3.1.2.2 */
											// Start line: 2464
											// Start offset: 0x800986C4
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.8.3.1.2.1.3.1.2.2.1 */
												// Start line: 2464
												// Start offset: 0x800986C4
											/* end block 1.8.3.1.2.1.3.1.2.2.1 */
											// End offset: 0x800986C4
											// End Line: 2464
										/* end block 1.8.3.1.2.1.3.1.2.2 */
										// End offset: 0x800986C4
										// End Line: 2464

										/* begin block 1.8.3.1.2.1.3.1.2.3 */
											// Start line: 2464
											// Start offset: 0x800986C4
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.8.3.1.2.1.3.1.2.3.1 */
												// Start line: 2464
												// Start offset: 0x800986C4
											/* end block 1.8.3.1.2.1.3.1.2.3.1 */
											// End offset: 0x800986C4
											// End Line: 2464
										/* end block 1.8.3.1.2.1.3.1.2.3 */
										// End offset: 0x800986C4
										// End Line: 2464
									/* end block 1.8.3.1.2.1.3.1.2 */
									// End offset: 0x800986C4
									// End Line: 2513

									/* begin block 1.8.3.1.2.1.3.1.3 */
										// Start line: 2514
										// Start offset: 0x800986D8

										/* begin block 1.8.3.1.2.1.3.1.3.1 */
											// Start line: 2514
											// Start offset: 0x800986D8

											/* begin block 1.8.3.1.2.1.3.1.3.1.1 */
												// Start line: 2516
												// Start offset: 0x800986E0

												/* begin block 1.8.3.1.2.1.3.1.3.1.1.1 */
													// Start line: 2464
													// Start offset: 0x800986E0
													// Variables:
												// 		struct MobileSpeaker *this; // $s1

													/* begin block 1.8.3.1.2.1.3.1.3.1.1.1.1 */
														// Start line: 2464
														// Start offset: 0x800986E0
													/* end block 1.8.3.1.2.1.3.1.3.1.1.1.1 */
													// End offset: 0x800986E0
													// End Line: 2464
												/* end block 1.8.3.1.2.1.3.1.3.1.1.1 */
												// End offset: 0x800986E0
												// End Line: 2464
											/* end block 1.8.3.1.2.1.3.1.3.1.1 */
											// End offset: 0x800986E0
											// End Line: 2516

											/* begin block 1.8.3.1.2.1.3.1.3.1.2 */
												// Start line: 2519
												// Start offset: 0x800986F0

												/* begin block 1.8.3.1.2.1.3.1.3.1.2.1 */
													// Start line: 2464
													// Start offset: 0x800986F0
													// Variables:
												// 		struct MobileSpeaker *this; // $s1

													/* begin block 1.8.3.1.2.1.3.1.3.1.2.1.1 */
														// Start line: 2464
														// Start offset: 0x800986F0
													/* end block 1.8.3.1.2.1.3.1.3.1.2.1.1 */
													// End offset: 0x800986F0
													// End Line: 2464
												/* end block 1.8.3.1.2.1.3.1.3.1.2.1 */
												// End offset: 0x800986F0
												// End Line: 2464

												/* begin block 1.8.3.1.2.1.3.1.3.1.2.2 */
													// Start line: 2464
													// Start offset: 0x800986F0
													// Variables:
												// 		struct Speaker *this; // $s1

													/* begin block 1.8.3.1.2.1.3.1.3.1.2.2.1 */
														// Start line: 2464
														// Start offset: 0x800986F0
													/* end block 1.8.3.1.2.1.3.1.3.1.2.2.1 */
													// End offset: 0x800986F0
													// End Line: 2464
												/* end block 1.8.3.1.2.1.3.1.3.1.2.2 */
												// End offset: 0x800986F0
												// End Line: 2464

												/* begin block 1.8.3.1.2.1.3.1.3.1.2.3 */
													// Start line: 2464
													// Start offset: 0x800986F0
													// Variables:
												// 		struct Speaker *this; // $s1

													/* begin block 1.8.3.1.2.1.3.1.3.1.2.3.1 */
														// Start line: 2464
														// Start offset: 0x800986F0
													/* end block 1.8.3.1.2.1.3.1.3.1.2.3.1 */
													// End offset: 0x800986F0
													// End Line: 2464
												/* end block 1.8.3.1.2.1.3.1.3.1.2.3 */
												// End offset: 0x800986F0
												// End Line: 2464

												/* begin block 1.8.3.1.2.1.3.1.3.1.2.4 */
													// Start line: 2464
													// Start offset: 0x800986F0
													// Variables:
												// 		struct Speaker *this; // $s1

													/* begin block 1.8.3.1.2.1.3.1.3.1.2.4.1 */
														// Start line: 2464
														// Start offset: 0x800986F0
													/* end block 1.8.3.1.2.1.3.1.3.1.2.4.1 */
													// End offset: 0x800986F0
													// End Line: 2464
												/* end block 1.8.3.1.2.1.3.1.3.1.2.4 */
												// End offset: 0x800986F0
												// End Line: 2464

												/* begin block 1.8.3.1.2.1.3.1.3.1.2.5 */
													// Start line: 2464
													// Start offset: 0x800986F0
													// Variables:
												// 		struct Speaker *this; // $s1

													/* begin block 1.8.3.1.2.1.3.1.3.1.2.5.1 */
														// Start line: 2464
														// Start offset: 0x800986F0
													/* end block 1.8.3.1.2.1.3.1.3.1.2.5.1 */
													// End offset: 0x800986F0
													// End Line: 2464
												/* end block 1.8.3.1.2.1.3.1.3.1.2.5 */
												// End offset: 0x800986F0
												// End Line: 2464

												/* begin block 1.8.3.1.2.1.3.1.3.1.2.6 */
													// Start line: 2464
													// Start offset: 0x800986F0
													// Variables:
												// 		struct Speaker *this; // $s1

													/* begin block 1.8.3.1.2.1.3.1.3.1.2.6.1 */
														// Start line: 2464
														// Start offset: 0x800986F0
													/* end block 1.8.3.1.2.1.3.1.3.1.2.6.1 */
													// End offset: 0x800986F0
													// End Line: 2464
												/* end block 1.8.3.1.2.1.3.1.3.1.2.6 */
												// End offset: 0x800986F0
												// End Line: 2464

												/* begin block 1.8.3.1.2.1.3.1.3.1.2.7 */
													// Start line: 2464
													// Start offset: 0x800986F0
													// Variables:
												// 		struct Speaker *this; // $s1

													/* begin block 1.8.3.1.2.1.3.1.3.1.2.7.1 */
														// Start line: 2464
														// Start offset: 0x800986F0
													/* end block 1.8.3.1.2.1.3.1.3.1.2.7.1 */
													// End offset: 0x800986F0
													// End Line: 2464
												/* end block 1.8.3.1.2.1.3.1.3.1.2.7 */
												// End offset: 0x800986F0
												// End Line: 2464
											/* end block 1.8.3.1.2.1.3.1.3.1.2 */
											// End offset: 0x80098714
											// End Line: 2519
										/* end block 1.8.3.1.2.1.3.1.3.1 */
										// End offset: 0x80098714
										// End Line: 2519
									/* end block 1.8.3.1.2.1.3.1.3 */
									// End offset: 0x80098714
									// End Line: 2519
								/* end block 1.8.3.1.2.1.3.1 */
								// End offset: 0x80098714
								// End Line: 2519
							/* end block 1.8.3.1.2.1.3 */
							// End offset: 0x80098714
							// End Line: 2519
						/* end block 1.8.3.1.2.1 */
						// End offset: 0x80098714
						// End Line: 2519
					/* end block 1.8.3.1.2 */
					// End offset: 0x80098714
					// End Line: 2519
				/* end block 1.8.3.1 */
				// End offset: 0x80098714
				// End Line: 2519
			/* end block 1.8.3 */
			// End offset: 0x80098714
			// End Line: 2519
		/* end block 1.8 */
		// End offset: 0x80098714
		// End Line: 2519

		/* begin block 1.9 */
			// Start line: 2521
			// Start offset: 0x80098714
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.9.1 */
				// Start line: 2521
				// Start offset: 0x80098714
			/* end block 1.9.1 */
			// End offset: 0x80098714
			// End Line: 2521
		/* end block 1.9 */
		// End offset: 0x80098714
		// End Line: 2521

		/* begin block 1.10 */
			// Start line: 2521
			// Start offset: 0x80098714
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.10.1 */
				// Start line: 2521
				// Start offset: 0x80098714
			/* end block 1.10.1 */
			// End offset: 0x80098714
			// End Line: 2521
		/* end block 1.10 */
		// End offset: 0x80098714
		// End Line: 2521

		/* begin block 1.11 */
			// Start line: 2521
			// Start offset: 0x80098714
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.11.1 */
				// Start line: 2521
				// Start offset: 0x80098714
			/* end block 1.11.1 */
			// End offset: 0x80098714
			// End Line: 2521
		/* end block 1.11 */
		// End offset: 0x80098714
		// End Line: 2521

		/* begin block 1.12 */
			// Start line: 2521
			// Start offset: 0x80098714

			/* begin block 1.12.1 */
				// Start line: 2528
				// Start offset: 0x8009872C

				/* begin block 1.12.1.1 */
					// Start line: 2530
					// Start offset: 0x8009872C

					/* begin block 1.12.1.1.1 */
						// Start line: 2530
						// Start offset: 0x8009872C
					/* end block 1.12.1.1.1 */
					// End offset: 0x8009872C
					// End Line: 2530
				/* end block 1.12.1.1 */
				// End offset: 0x8009872C
				// End Line: 2530

				/* begin block 1.12.1.2 */
					// Start line: 2530
					// Start offset: 0x8009872C
					// Variables:
				// 		struct Speaker *Sub; // $s1

					/* begin block 1.12.1.2.1 */
						// Start line: 2530
						// Start offset: 0x8009872C
					/* end block 1.12.1.2.1 */
					// End offset: 0x8009872C
					// End Line: 2530
				/* end block 1.12.1.2 */
				// End offset: 0x8009872C
				// End Line: 2530

				/* begin block 1.12.1.3 */
					// Start line: 2530
					// Start offset: 0x8009872C

					/* begin block 1.12.1.3.1 */
						// Start line: 2530
						// Start offset: 0x8009872C
					/* end block 1.12.1.3.1 */
					// End offset: 0x80098770
					// End Line: 2533
				/* end block 1.12.1.3 */
				// End offset: 0x80098770
				// End Line: 2533
			/* end block 1.12.1 */
			// End offset: 0x80098770
			// End Line: 2533
		/* end block 1.12 */
		// End offset: 0x80098770
		// End Line: 2533
	/* end block 1 */
	// End offset: 0x80098770
	// End Line: 2533

/* WARNING: Type propagation algorithm not settling */

void Lose__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  Speaker *pSVar4;
  int iVar5;
  Car_tObj *car;
  ulong uVar6;
  SPCHNFSType_VOICE *VOICE;
  Speaker *pSVar7;
  
  uVar2 = (this->Speaker)._vf[0].value;
  iVar3 = (**(code **)(uVar2 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xd8));
  if (iVar3 != 0) {
    *(uint *)(iGp00000838 + 0x38c) = (this->Speaker)._vf[5].value;
    pSVar4 = Dispatch__6Speech();
    bVar1 = false;
    if (((pSVar4->fSub != (Speaker *)0x0) &&
        (pSVar4 = Dispatch__6Speech(), (MobileSpeaker *)pSVar4->fSub->fSub == this)) &&
       ((this->Speaker).fBlockade.flags == 0)) {
      bVar1 = (this->Speaker).fArrest.flags == 0;
    }
    if (bVar1) {
      pSVar4 = Dispatch__6Speech();
      uVar2 = (this->Speaker)._vf[0].value;
      pSVar4 = pSVar4->fSub;
      iVar3 = (**(code **)(uVar2 + 0xf4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xf0));
      uVar2 = pSVar4->_vf[0].value;
      iVar5 = (**(code **)(uVar2 + 0x8c))
                        ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0x88));
      (this->Speaker).fTo = *(int *)(iVar3 + iVar5 * 4 + 8);
    }
    else {
      uVar2 = (this->Speaker)._vf[0].value;
      iVar3 = (**(code **)(uVar2 + 0xf4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xf0));
      pSVar4 = (Speaker *)0x0;
      (this->Speaker).fTo = *(int *)(iVar3 + 4);
    }
    if ((this->Speaker).fArrest.flags == 0) {
      bVar1 = false;
      if (((this->Speaker).fBlockade.flags == 0) && (pSVar4 == (Speaker *)0x0)) {
        pSVar7 = Dispatch__6Speech();
        uVar2 = pSVar7->_vf[0].value;
        iVar3 = (**(code **)(uVar2 + 0xac))
                          ((int)&(pSVar7->fPosition).flags + (int)*(short *)(uVar2 + 0xa8));
        bVar1 = 0x160 < iVar3;
      }
      if (bVar1) {
        return;
      }
    }
    else {
      SPCHNFS_C_P_FALSE_ARREST_BULLHORN((SPCHNFSType_VOICE *)((this->Speaker)._vf + 1));
      SPCH_PlaySpeech();
    }
    VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
    SPCHNFS_C_A_INTRO(VOICE,(this->Speaker).fTo,(this->Speaker).fFrom,&(this->Speaker).fReverse);
    SPCH_PlaySpeech();
    uVar2 = (this->Speaker)._vf[0].value;
    car = (Car_tObj *)
          (**(code **)(uVar2 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xd8));
    SetCar__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
    uVar2 = (this->Speaker)._vf[0].value;
    car = (Car_tObj *)
          (**(code **)(uVar2 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xd8));
    FindLocation__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
    if ((this->Speaker).fArrest.flags == 0) {
      uVar2 = (this->Speaker)._vf[0].value;
      iVar3 = (**(code **)(uVar2 + 0xcc))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 200));
      if ((*(uint *)(iVar3 + 0x260) & 0x200) == 0) {
        uVar6 = (this->Speaker).fBlockade.flags;
        if (uVar6 == 1) {
          SPCHNFS_C_D_SPBLT_FAILED(VOICE,&(this->Speaker).fColour,(this->Speaker).fCar);
        }
        else {
          if (uVar6 == 2) {
            SPCHNFS_C_D_RDBLK_FAILED(VOICE,&(this->Speaker).fColour,(this->Speaker).fCar);
          }
          else {
            if (pSVar4 == (Speaker *)0x0) {
              SPCHNFS_C_D_PERP_LOST
                        (VOICE,&(this->Speaker).fColour,(this->Speaker).fCar,
                         (SPCHNFSType_POSITION *)this,(this->Speaker).fLocation,
                         &(this->Speaker).fDistance,&(this->Speaker).fPerpName);
            }
            else {
              SPCHNFS_C_C_IDLE_WINGMAN_DISAPPEARS(VOICE);
            }
          }
        }
      }
      else {
        SPCHNFS_C_D_ENDGAME(VOICE);
      }
    }
    else {
      SPCHNFS_C_D_DURING_FALSE_ARREST(VOICE,&(this->Speaker).fPerpName);
    }
    SPCH_PlaySpeech();
    (this->Speaker).fBlockade.flags = 0;
    (this->Speaker).fArrest.flags = 0;
    (this->Speaker).fUpdate.flags = 0;
    if (pSVar4 == (Speaker *)0x0) {
      pSVar4 = Dispatch__6Speech();
      pSVar7 = pSVar4->fSub;
      pSVar4 = Dispatch__6Speech();
      *(MobileSpeaker **)&pSVar4->fSub = this;
      pSVar4 = Dispatch__6Speech();
      uVar2 = pSVar4->_vf[0].value;
      (**(code **)(uVar2 + 0x74))((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0x70));
      pSVar4 = Dispatch__6Speech();
      pSVar4->fSub = pSVar7;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Accident__Q26Speech13MobileSpeakeri(struct MobileSpeaker *this /*$a0*/, int slice /*$a1*/)
 // line 2544, offset 0x80098788
	/* begin block 1 */
		// Start line: 2545
		// Start offset: 0x80098788
	/* end block 1 */
	// End offset: 0x80098788
	// End Line: 2545

void Accident__Q26Speech13MobileSpeakeri(MobileSpeaker *this,int slice)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Catch__Q26Speech13MobileSpeakeri(struct MobileSpeaker *this /*$s1*/, int ticket /*$s0*/)
 // line 2554, offset 0x80098790
	/* begin block 1 */
		// Start line: 2555
		// Start offset: 0x80098790

		/* begin block 1.1 */
			// Start line: 2555
			// Start offset: 0x800987C8
			// Variables:
		// 		struct MobileSpeaker *this; // $s1

			/* begin block 1.1.1 */
				// Start line: 2555
				// Start offset: 0x800987C8

				/* begin block 1.1.1.1 */
					// Start line: 2555
					// Start offset: 0x800987C8
					// Variables:
				// 		struct Car_tObj *carObj; // $v0
				// 		struct Speech *this; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 2555
						// Start offset: 0x800987C8
					/* end block 1.1.1.1.1 */
					// End offset: 0x800987C8
					// End Line: 2555
				/* end block 1.1.1.1 */
				// End offset: 0x800987C8
				// End Line: 2555
			/* end block 1.1.1 */
			// End offset: 0x800987C8
			// End Line: 2555
		/* end block 1.1 */
		// End offset: 0x800987C8
		// End Line: 2555

		/* begin block 1.2 */
			// Start line: 2555
			// Start offset: 0x800987C8

			/* begin block 1.2.1 */
				// Start line: 2566
				// Start offset: 0x80098804

				/* begin block 1.2.1.1 */
					// Start line: 2568
					// Start offset: 0x80098804

					/* begin block 1.2.1.1.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.1.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.1 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.2 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.1.2.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.2.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.2 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.3 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct MobileSpeaker *this; // $s1

					/* begin block 1.2.1.3.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.3.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.3 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.4 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.1.4.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.4.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.4 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.5 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.1.5.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.5.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.5 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.6 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.1.6.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.6.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.6 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.7 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct MobileSpeaker *this; // $s1

					/* begin block 1.2.1.7.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.7.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.7 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.8 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.1.8.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.8.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.8 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.9 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.1.9.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.9.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.9 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.10 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.1.10.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.10.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.10 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.11 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.1.11.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.11.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.11 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.12 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.1.12.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.12.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.12 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.13 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct MobileSpeaker *this; // $s1

					/* begin block 1.2.1.13.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.13.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.13 */
				// End offset: 0x80098804
				// End Line: 2568

				/* begin block 1.2.1.14 */
					// Start line: 2568
					// Start offset: 0x80098804
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.2.1.14.1 */
						// Start line: 2568
						// Start offset: 0x80098804
					/* end block 1.2.1.14.1 */
					// End offset: 0x80098804
					// End Line: 2568
				/* end block 1.2.1.14 */
				// End offset: 0x80098804
				// End Line: 2568
			/* end block 1.2.1 */
			// End offset: 0x80098804
			// End Line: 2568

			/* begin block 1.2.2 */
				// Start line: 2578
				// Start offset: 0x800988A0

				/* begin block 1.2.2.1 */
					// Start line: 2578
					// Start offset: 0x800988A0

					/* begin block 1.2.2.1.1 */
						// Start line: 2579
						// Start offset: 0x800988CC

						/* begin block 1.2.2.1.1.1 */
							// Start line: 2581
							// Start offset: 0x800988CC

							/* begin block 1.2.2.1.1.1.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.1.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.1 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.2 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.1.2.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.2.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.2 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.3 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct MobileSpeaker *this; // $s1

							/* begin block 1.2.2.1.1.3.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.3.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.3 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.4 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.1.4.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.4.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.4 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.5 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.1.5.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.5.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.5 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.6 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.1.6.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.6.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.6 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.7 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct MobileSpeaker *this; // $s1

							/* begin block 1.2.2.1.1.7.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.7.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.7 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.8 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.1.8.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.8.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.8 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.9 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.1.9.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.9.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.9 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.10 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.1.10.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.10.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.10 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.11 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.1.11.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.11.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.11 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.12 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.1.12.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.12.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.12 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.13 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.1.13.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.13.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.13 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.14 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.1.14.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.14.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.14 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.15 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct MobileSpeaker *this; // $s1

							/* begin block 1.2.2.1.1.15.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.15.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.15 */
						// End offset: 0x800988CC
						// End Line: 2581

						/* begin block 1.2.2.1.1.16 */
							// Start line: 2581
							// Start offset: 0x800988CC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.2.2.1.1.16.1 */
								// Start line: 2581
								// Start offset: 0x800988CC
							/* end block 1.2.2.1.1.16.1 */
							// End offset: 0x800988CC
							// End Line: 2581
						/* end block 1.2.2.1.1.16 */
						// End offset: 0x800988CC
						// End Line: 2581
					/* end block 1.2.2.1.1 */
					// End offset: 0x800988CC
					// End Line: 2581

					/* begin block 1.2.2.1.2 */
						// Start line: 2593
						// Start offset: 0x800989B4

						/* begin block 1.2.2.1.2.1 */
							// Start line: 2593
							// Start offset: 0x800989B4
							// Variables:
						// 		struct Speaker *this; // $s1
						// 		int Arrest; // $s0

							/* begin block 1.2.2.1.2.1.1 */
								// Start line: 2593
								// Start offset: 0x800989B4
							/* end block 1.2.2.1.2.1.1 */
							// End offset: 0x800989B4
							// End Line: 2593
						/* end block 1.2.2.1.2.1 */
						// End offset: 0x800989B4
						// End Line: 2593

						/* begin block 1.2.2.1.2.2 */
							// Start line: 2593
							// Start offset: 0x800989B4

							/* begin block 1.2.2.1.2.2.1 */
								// Start line: 2597
								// Start offset: 0x800989BC

								/* begin block 1.2.2.1.2.2.1.1 */
									// Start line: 2555
									// Start offset: 0x800989BC
									// Variables:
								// 		struct MobileSpeaker *this; // $s1

									/* begin block 1.2.2.1.2.2.1.1.1 */
										// Start line: 2555
										// Start offset: 0x800989BC
									/* end block 1.2.2.1.2.2.1.1.1 */
									// End offset: 0x800989BC
									// End Line: 2555
								/* end block 1.2.2.1.2.2.1.1 */
								// End offset: 0x800989BC
								// End Line: 2555

								/* begin block 1.2.2.1.2.2.1.2 */
									// Start line: 2555
									// Start offset: 0x800989BC
									// Variables:
								// 		struct Speaker *this; // $s1

									/* begin block 1.2.2.1.2.2.1.2.1 */
										// Start line: 2555
										// Start offset: 0x800989BC
									/* end block 1.2.2.1.2.2.1.2.1 */
									// End offset: 0x800989BC
									// End Line: 2555
								/* end block 1.2.2.1.2.2.1.2 */
								// End offset: 0x800989BC
								// End Line: 2555
							/* end block 1.2.2.1.2.2.1 */
							// End offset: 0x800989BC
							// End Line: 2597

							/* begin block 1.2.2.1.2.2.2 */
								// Start line: 2598
								// Start offset: 0x800989D0

								/* begin block 1.2.2.1.2.2.2.1 */
									// Start line: 2598
									// Start offset: 0x800989D0

									/* begin block 1.2.2.1.2.2.2.1.1 */
										// Start line: 2599
										// Start offset: 0x800989DC

										/* begin block 1.2.2.1.2.2.2.1.1.1 */
											// Start line: 2555
											// Start offset: 0x800989DC
											// Variables:
										// 		struct MobileSpeaker *this; // $s1

											/* begin block 1.2.2.1.2.2.2.1.1.1.1 */
												// Start line: 2555
												// Start offset: 0x800989DC
											/* end block 1.2.2.1.2.2.2.1.1.1.1 */
											// End offset: 0x800989DC
											// End Line: 2555
										/* end block 1.2.2.1.2.2.2.1.1.1 */
										// End offset: 0x800989DC
										// End Line: 2555

										/* begin block 1.2.2.1.2.2.2.1.1.2 */
											// Start line: 2555
											// Start offset: 0x800989DC
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.2.1.2.2.2.1.1.2.1 */
												// Start line: 2555
												// Start offset: 0x800989DC
											/* end block 1.2.2.1.2.2.2.1.1.2.1 */
											// End offset: 0x800989DC
											// End Line: 2555
										/* end block 1.2.2.1.2.2.2.1.1.2 */
										// End offset: 0x800989DC
										// End Line: 2555
									/* end block 1.2.2.1.2.2.2.1.1 */
									// End offset: 0x800989DC
									// End Line: 2599

									/* begin block 1.2.2.1.2.2.2.1.2 */
										// Start line: 2601
										// Start offset: 0x800989EC

										/* begin block 1.2.2.1.2.2.2.1.2.1 */
											// Start line: 2555
											// Start offset: 0x800989EC
											// Variables:
										// 		struct MobileSpeaker *this; // $s1

											/* begin block 1.2.2.1.2.2.2.1.2.1.1 */
												// Start line: 2555
												// Start offset: 0x800989EC
											/* end block 1.2.2.1.2.2.2.1.2.1.1 */
											// End offset: 0x800989EC
											// End Line: 2555
										/* end block 1.2.2.1.2.2.2.1.2.1 */
										// End offset: 0x800989EC
										// End Line: 2555

										/* begin block 1.2.2.1.2.2.2.1.2.2 */
											// Start line: 2555
											// Start offset: 0x800989EC
											// Variables:
										// 		struct Speaker *this; // $s1

											/* begin block 1.2.2.1.2.2.2.1.2.2.1 */
												// Start line: 2555
												// Start offset: 0x800989EC
											/* end block 1.2.2.1.2.2.2.1.2.2.1 */
											// End offset: 0x800989EC
											// End Line: 2555
										/* end block 1.2.2.1.2.2.2.1.2.2 */
										// End offset: 0x800989EC
										// End Line: 2555
									/* end block 1.2.2.1.2.2.2.1.2 */
									// End offset: 0x800989F4
									// End Line: 2601
								/* end block 1.2.2.1.2.2.2.1 */
								// End offset: 0x800989F4
								// End Line: 2601
							/* end block 1.2.2.1.2.2.2 */
							// End offset: 0x800989F4
							// End Line: 2601
						/* end block 1.2.2.1.2.2 */
						// End offset: 0x800989F4
						// End Line: 2601

						/* begin block 1.2.2.1.2.3 */
							// Start line: 2603
							// Start offset: 0x800989F4

							/* begin block 1.2.2.1.2.3.1 */
								// Start line: 2606
								// Start offset: 0x80098A08

								/* begin block 1.2.2.1.2.3.1.1 */
									// Start line: 2555
									// Start offset: 0x80098A08
									// Variables:
								// 		struct MobileSpeaker *this; // $s1

									/* begin block 1.2.2.1.2.3.1.1.1 */
										// Start line: 2555
										// Start offset: 0x80098A08
									/* end block 1.2.2.1.2.3.1.1.1 */
									// End offset: 0x80098A14
									// End Line: 2555
								/* end block 1.2.2.1.2.3.1.1 */
								// End offset: 0x80098A14
								// End Line: 2555
							/* end block 1.2.2.1.2.3.1 */
							// End offset: 0x80098A14
							// End Line: 2606
						/* end block 1.2.2.1.2.3 */
						// End offset: 0x80098A14
						// End Line: 2606
					/* end block 1.2.2.1.2 */
					// End offset: 0x80098A14
					// End Line: 2606
				/* end block 1.2.2.1 */
				// End offset: 0x80098A14
				// End Line: 2606
			/* end block 1.2.2 */
			// End offset: 0x80098A14
			// End Line: 2606
		/* end block 1.2 */
		// End offset: 0x80098A14
		// End Line: 2606
	/* end block 1 */
	// End offset: 0x80098A38
	// End Line: 2621

void Catch__Q26Speech13MobileSpeakeri(MobileSpeaker *this,int ticket)

{
  uint uVar1;
  int ID_UNIT;
  ulong uVar2;
  Car_tObj *car;
  Speaker *pSVar3;
  SPCHNFSType_VOICE *VOICE;
  
  uVar1 = (this->Speaker)._vf[0].value;
  ID_UNIT = (**(code **)(uVar1 + 0xdc))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xd8));
  if (ID_UNIT == 0) {
    return;
  }
  pSGp00000838->fSpeakerCar = (Car_tObj *)(this->Speaker)._vf[5].value;
  uVar1 = (this->Speaker)._vf[0].value;
  ID_UNIT = (**(code **)(uVar1 + 0xdc))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xd8));
  if (*(int *)(ID_UNIT + 300) < 0) {
    uVar1 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar1 + 0xf4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xf0));
    VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
    ID_UNIT = *(int *)(ID_UNIT + 4);
    (this->Speaker).fTo = ID_UNIT;
    SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
    SPCH_PlaySpeech();
    uVar1 = (this->Speaker)._vf[0].value;
    car = (Car_tObj *)
          (**(code **)(uVar1 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xd8));
    FindLocation__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
    SPCHNFS_C_D_PERP_CRASH_ROLL
              (VOICE,(SPCHNFSType_POSITION *)this,(this->Speaker).fLocation,
               &(this->Speaker).fDistance,&(this->Speaker).fPerpName);
    SPCH_PlaySpeech();
    uVar2 = 4;
  }
  else {
    uVar1 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar1 + 0xdc))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xd8));
    if (*(int *)(ID_UNIT + 0x78c) == 0) {
      (this->Speaker).fArrest.flags = ticket;
      if (ticket == 1) {
        SPCHNFS_C_P_ARRESTED
                  ((SPCHNFSType_VOICE *)((this->Speaker)._vf + 1),&(this->Speaker).fArrest);
      }
      else {
        VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
        if (ticket == 2) {
          SPCHNFS_C_P_WARNING(VOICE,&(this->Speaker).fArrest);
        }
        else {
          SPCHNFS_C_P_TICKET(VOICE,&(this->Speaker).fArrest);
        }
      }
      SPCH_PlaySpeech();
      if (ticket == 1) {
        SetDelayedStatus__6SpeechPQ26Speech7Speakeri(pSGp00000838,(Speaker *)this,0x60);
      }
      goto LAB_80098a14;
    }
    uVar1 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar1 + 0xf4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xf0));
    VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
    ID_UNIT = *(int *)(ID_UNIT + 4);
    (this->Speaker).fTo = ID_UNIT;
    SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
    SPCH_PlaySpeech();
    uVar1 = (this->Speaker)._vf[0].value;
    car = (Car_tObj *)
          (**(code **)(uVar1 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xd8));
    SetCar__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
    uVar1 = (this->Speaker)._vf[0].value;
    car = (Car_tObj *)
          (**(code **)(uVar1 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xd8));
    FindLocation__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
    SPCHNFS_C_D_PERP_CRASH_GEN
              (VOICE,(SPCHNFSType_POSITION *)this,(this->Speaker).fLocation,&(this->Speaker).fColour
               ,(this->Speaker).fCar,&(this->Speaker).fDistance,&(this->Speaker).fPerpName);
    SPCH_PlaySpeech();
    uVar2 = 0x20;
  }
  (this->Speaker).fAmbulance.flags = uVar2;
  SPCHNFS_C_D_REQUEST_EMS
            ((SPCHNFSType_VOICE *)((this->Speaker)._vf + 1),&(this->Speaker).fAmbulance);
  SPCH_PlaySpeech();
LAB_80098a14:
  pSVar3 = Dispatch__6Speech();
  uVar1 = pSVar3->_vf[0].value;
  (**(code **)(uVar1 + 0x9c))
            ((int)&(pSVar3->fPosition).flags + (int)*(short *)(uVar1 + 0x98),
             (this->Speaker)._vf[6].value);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RoadBlock__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$s1*/)
 // line 2627, offset 0x80098a4c
	/* begin block 1 */
		// Start line: 2628
		// Start offset: 0x80098A4C

		/* begin block 1.1 */
			// Start line: 2628
			// Start offset: 0x80098A4C

			/* begin block 1.1.1 */
				// Start line: 2628
				// Start offset: 0x80098A4C

				/* begin block 1.1.1.1 */
					// Start line: 2628
					// Start offset: 0x80098A4C
				/* end block 1.1.1.1 */
				// End offset: 0x80098A4C
				// End Line: 2628
			/* end block 1.1.1 */
			// End offset: 0x80098A4C
			// End Line: 2628

			/* begin block 1.1.2 */
				// Start line: 2633
				// Start offset: 0x80098A74

				/* begin block 1.1.2.1 */
					// Start line: 2633
					// Start offset: 0x80098A74
				/* end block 1.1.2.1 */
				// End offset: 0x80098A74
				// End Line: 2633
			/* end block 1.1.2 */
			// End offset: 0x80098A74
			// End Line: 2633

			/* begin block 1.1.3 */
				// Start line: 2634
				// Start offset: 0x80098A94

				/* begin block 1.1.3.1 */
					// Start line: 2635
					// Start offset: 0x80098A94

					/* begin block 1.1.3.1.1 */
						// Start line: 2635
						// Start offset: 0x80098A94
					/* end block 1.1.3.1.1 */
					// End offset: 0x80098A94
					// End Line: 2635
				/* end block 1.1.3.1 */
				// End offset: 0x80098A94
				// End Line: 2635
			/* end block 1.1.3 */
			// End offset: 0x80098A94
			// End Line: 2635

			/* begin block 1.1.4 */
				// Start line: 2638
				// Start offset: 0x80098AC8

				/* begin block 1.1.4.1 */
					// Start line: 2639
					// Start offset: 0x80098AC8

					/* begin block 1.1.4.1.1 */
						// Start line: 2639
						// Start offset: 0x80098AC8

						/* begin block 1.1.4.1.1.1 */
							// Start line: 2639
							// Start offset: 0x80098AC8
						/* end block 1.1.4.1.1.1 */
						// End offset: 0x80098AC8
						// End Line: 2639
					/* end block 1.1.4.1.1 */
					// End offset: 0x80098AC8
					// End Line: 2639

					/* begin block 1.1.4.1.2 */
						// Start line: 2641
						// Start offset: 0x80098AE8

						/* begin block 1.1.4.1.2.1 */
							// Start line: 2628
							// Start offset: 0x80098AE8
							// Variables:
						// 		struct MobileSpeaker *this; // $s1

							/* begin block 1.1.4.1.2.1.1 */
								// Start line: 2628
								// Start offset: 0x80098AE8

								/* begin block 1.1.4.1.2.1.1.1 */
									// Start line: 2628
									// Start offset: 0x80098AE8
									// Variables:
								// 		struct Car_tObj *carObj; // $v0

									/* begin block 1.1.4.1.2.1.1.1.1 */
										// Start line: 2628
										// Start offset: 0x80098AE8
									/* end block 1.1.4.1.2.1.1.1.1 */
									// End offset: 0x80098AE8
									// End Line: 2628
								/* end block 1.1.4.1.2.1.1.1 */
								// End offset: 0x80098AE8
								// End Line: 2628
							/* end block 1.1.4.1.2.1.1 */
							// End offset: 0x80098AE8
							// End Line: 2628
						/* end block 1.1.4.1.2.1 */
						// End offset: 0x80098AE8
						// End Line: 2628

						/* begin block 1.1.4.1.2.2 */
							// Start line: 2628
							// Start offset: 0x80098AE8

							/* begin block 1.1.4.1.2.2.1 */
								// Start line: 2628
								// Start offset: 0x80098AE8
							/* end block 1.1.4.1.2.2.1 */
							// End offset: 0x80098AE8
							// End Line: 2628
						/* end block 1.1.4.1.2.2 */
						// End offset: 0x80098AE8
						// End Line: 2628

						/* begin block 1.1.4.1.2.3 */
							// Start line: 2628
							// Start offset: 0x80098AE8
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.1.4.1.2.3.1 */
								// Start line: 2628
								// Start offset: 0x80098AE8
							/* end block 1.1.4.1.2.3.1 */
							// End offset: 0x80098AE8
							// End Line: 2628
						/* end block 1.1.4.1.2.3 */
						// End offset: 0x80098AE8
						// End Line: 2628

						/* begin block 1.1.4.1.2.4 */
							// Start line: 2628
							// Start offset: 0x80098AE8
							// Variables:
						// 		struct MobileSpeaker *this; // $s1

							/* begin block 1.1.4.1.2.4.1 */
								// Start line: 2628
								// Start offset: 0x80098AE8
							/* end block 1.1.4.1.2.4.1 */
							// End offset: 0x80098AE8
							// End Line: 2628
						/* end block 1.1.4.1.2.4 */
						// End offset: 0x80098AE8
						// End Line: 2628

						/* begin block 1.1.4.1.2.5 */
							// Start line: 2628
							// Start offset: 0x80098AE8
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.1.4.1.2.5.1 */
								// Start line: 2628
								// Start offset: 0x80098AE8
							/* end block 1.1.4.1.2.5.1 */
							// End offset: 0x80098AE8
							// End Line: 2628
						/* end block 1.1.4.1.2.5 */
						// End offset: 0x80098AE8
						// End Line: 2628

						/* begin block 1.1.4.1.2.6 */
							// Start line: 2628
							// Start offset: 0x80098AE8
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.1.4.1.2.6.1 */
								// Start line: 2628
								// Start offset: 0x80098AE8
							/* end block 1.1.4.1.2.6.1 */
							// End offset: 0x80098AE8
							// End Line: 2628
						/* end block 1.1.4.1.2.6 */
						// End offset: 0x80098AE8
						// End Line: 2628

						/* begin block 1.1.4.1.2.7 */
							// Start line: 2628
							// Start offset: 0x80098AE8
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.1.4.1.2.7.1 */
								// Start line: 2628
								// Start offset: 0x80098AE8
							/* end block 1.1.4.1.2.7.1 */
							// End offset: 0x80098AE8
							// End Line: 2628
						/* end block 1.1.4.1.2.7 */
						// End offset: 0x80098AE8
						// End Line: 2628

						/* begin block 1.1.4.1.2.8 */
							// Start line: 2628
							// Start offset: 0x80098AE8
							// Variables:
						// 		struct MobileSpeaker *this; // $s1

							/* begin block 1.1.4.1.2.8.1 */
								// Start line: 2628
								// Start offset: 0x80098AE8
							/* end block 1.1.4.1.2.8.1 */
							// End offset: 0x80098AE8
							// End Line: 2628
						/* end block 1.1.4.1.2.8 */
						// End offset: 0x80098AE8
						// End Line: 2628
					/* end block 1.1.4.1.2 */
					// End offset: 0x80098B44
					// End Line: 2647
				/* end block 1.1.4.1 */
				// End offset: 0x80098B44
				// End Line: 2647

				/* begin block 1.1.4.2 */
					// Start line: 2647
					// Start offset: 0x80098B44
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.1.4.2.1 */
						// Start line: 2647
						// Start offset: 0x80098B44
					/* end block 1.1.4.2.1 */
					// End offset: 0x80098B4C
					// End Line: 2647
				/* end block 1.1.4.2 */
				// End offset: 0x80098B4C
				// End Line: 2647
			/* end block 1.1.4 */
			// End offset: 0x80098B4C
			// End Line: 2649
		/* end block 1.1 */
		// End offset: 0x80098B4C
		// End Line: 2649
	/* end block 1 */
	// End offset: 0x80098B4C
	// End Line: 2649

void RoadBlock__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  bool bVar1;
  Speaker *pSVar2;
  uint uVar3;
  int ID_UNIT;
  SPCHNFSType_VOICE *VOICE;
  
  pSVar2 = Dispatch__6Speech();
  bVar1 = false;
  if (pSVar2->fSub != (Speaker *)0x0) {
    pSVar2 = Dispatch__6Speech();
    bVar1 = (MobileSpeaker *)pSVar2->fSub != this;
  }
  if (bVar1) {
    pSVar2 = Dispatch__6Speech();
    uVar3 = pSVar2->fSub->_vf[0].value;
    (**(code **)(uVar3 + 0x54))
              ((int)&(pSVar2->fSub->fPosition).flags + (int)*(short *)(uVar3 + 0x50));
  }
  else {
    Promote__Q26Speech7Speaker((Speaker *)this);
    if (*(int *)(DAT_00000838 + 0x388) == 0) {
      *(uint *)(DAT_00000838 + 0x38c) = (this->Speaker)._vf[5].value;
      uVar3 = (this->Speaker)._vf[0].value;
      ID_UNIT = (**(code **)(uVar3 + 0xf4))
                          ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0xf0));
      VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
      ID_UNIT = *(int *)(ID_UNIT + 4);
      (this->Speaker).fTo = ID_UNIT;
      SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
      SPCH_PlaySpeech();
      SPCHNFS_C_D_REQ_RDBLK(VOICE);
      SPCH_PlaySpeech();
    }
    (this->Speaker).fBlockade.flags = 2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SpikeBelt__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$s1*/)
 // line 2656, offset 0x80098b60
	/* begin block 1 */
		// Start line: 2657
		// Start offset: 0x80098B60

		/* begin block 1.1 */
			// Start line: 2657
			// Start offset: 0x80098B60

			/* begin block 1.1.1 */
				// Start line: 2657
				// Start offset: 0x80098B60

				/* begin block 1.1.1.1 */
					// Start line: 2657
					// Start offset: 0x80098B60
				/* end block 1.1.1.1 */
				// End offset: 0x80098B60
				// End Line: 2657
			/* end block 1.1.1 */
			// End offset: 0x80098B60
			// End Line: 2657

			/* begin block 1.1.2 */
				// Start line: 2662
				// Start offset: 0x80098B88

				/* begin block 1.1.2.1 */
					// Start line: 2662
					// Start offset: 0x80098B88
				/* end block 1.1.2.1 */
				// End offset: 0x80098B88
				// End Line: 2662
			/* end block 1.1.2 */
			// End offset: 0x80098B88
			// End Line: 2662

			/* begin block 1.1.3 */
				// Start line: 2663
				// Start offset: 0x80098BA8

				/* begin block 1.1.3.1 */
					// Start line: 2664
					// Start offset: 0x80098BA8

					/* begin block 1.1.3.1.1 */
						// Start line: 2664
						// Start offset: 0x80098BA8
					/* end block 1.1.3.1.1 */
					// End offset: 0x80098BA8
					// End Line: 2664
				/* end block 1.1.3.1 */
				// End offset: 0x80098BA8
				// End Line: 2664
			/* end block 1.1.3 */
			// End offset: 0x80098BA8
			// End Line: 2664

			/* begin block 1.1.4 */
				// Start line: 2667
				// Start offset: 0x80098BDC

				/* begin block 1.1.4.1 */
					// Start line: 2668
					// Start offset: 0x80098BDC

					/* begin block 1.1.4.1.1 */
						// Start line: 2668
						// Start offset: 0x80098BDC

						/* begin block 1.1.4.1.1.1 */
							// Start line: 2668
							// Start offset: 0x80098BDC
						/* end block 1.1.4.1.1.1 */
						// End offset: 0x80098BDC
						// End Line: 2668
					/* end block 1.1.4.1.1 */
					// End offset: 0x80098BDC
					// End Line: 2668

					/* begin block 1.1.4.1.2 */
						// Start line: 2670
						// Start offset: 0x80098BFC

						/* begin block 1.1.4.1.2.1 */
							// Start line: 2657
							// Start offset: 0x80098BFC
							// Variables:
						// 		struct MobileSpeaker *this; // $s1

							/* begin block 1.1.4.1.2.1.1 */
								// Start line: 2657
								// Start offset: 0x80098BFC

								/* begin block 1.1.4.1.2.1.1.1 */
									// Start line: 2657
									// Start offset: 0x80098BFC
									// Variables:
								// 		struct Car_tObj *carObj; // $v0

									/* begin block 1.1.4.1.2.1.1.1.1 */
										// Start line: 2657
										// Start offset: 0x80098BFC
									/* end block 1.1.4.1.2.1.1.1.1 */
									// End offset: 0x80098BFC
									// End Line: 2657
								/* end block 1.1.4.1.2.1.1.1 */
								// End offset: 0x80098BFC
								// End Line: 2657
							/* end block 1.1.4.1.2.1.1 */
							// End offset: 0x80098BFC
							// End Line: 2657
						/* end block 1.1.4.1.2.1 */
						// End offset: 0x80098BFC
						// End Line: 2657

						/* begin block 1.1.4.1.2.2 */
							// Start line: 2657
							// Start offset: 0x80098BFC

							/* begin block 1.1.4.1.2.2.1 */
								// Start line: 2657
								// Start offset: 0x80098BFC
							/* end block 1.1.4.1.2.2.1 */
							// End offset: 0x80098BFC
							// End Line: 2657
						/* end block 1.1.4.1.2.2 */
						// End offset: 0x80098BFC
						// End Line: 2657

						/* begin block 1.1.4.1.2.3 */
							// Start line: 2657
							// Start offset: 0x80098BFC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.1.4.1.2.3.1 */
								// Start line: 2657
								// Start offset: 0x80098BFC
							/* end block 1.1.4.1.2.3.1 */
							// End offset: 0x80098BFC
							// End Line: 2657
						/* end block 1.1.4.1.2.3 */
						// End offset: 0x80098BFC
						// End Line: 2657

						/* begin block 1.1.4.1.2.4 */
							// Start line: 2657
							// Start offset: 0x80098BFC
							// Variables:
						// 		struct MobileSpeaker *this; // $s1

							/* begin block 1.1.4.1.2.4.1 */
								// Start line: 2657
								// Start offset: 0x80098BFC
							/* end block 1.1.4.1.2.4.1 */
							// End offset: 0x80098BFC
							// End Line: 2657
						/* end block 1.1.4.1.2.4 */
						// End offset: 0x80098BFC
						// End Line: 2657

						/* begin block 1.1.4.1.2.5 */
							// Start line: 2657
							// Start offset: 0x80098BFC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.1.4.1.2.5.1 */
								// Start line: 2657
								// Start offset: 0x80098BFC
							/* end block 1.1.4.1.2.5.1 */
							// End offset: 0x80098BFC
							// End Line: 2657
						/* end block 1.1.4.1.2.5 */
						// End offset: 0x80098BFC
						// End Line: 2657

						/* begin block 1.1.4.1.2.6 */
							// Start line: 2657
							// Start offset: 0x80098BFC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.1.4.1.2.6.1 */
								// Start line: 2657
								// Start offset: 0x80098BFC
							/* end block 1.1.4.1.2.6.1 */
							// End offset: 0x80098BFC
							// End Line: 2657
						/* end block 1.1.4.1.2.6 */
						// End offset: 0x80098BFC
						// End Line: 2657

						/* begin block 1.1.4.1.2.7 */
							// Start line: 2657
							// Start offset: 0x80098BFC
							// Variables:
						// 		struct Speaker *this; // $s1

							/* begin block 1.1.4.1.2.7.1 */
								// Start line: 2657
								// Start offset: 0x80098BFC
							/* end block 1.1.4.1.2.7.1 */
							// End offset: 0x80098BFC
							// End Line: 2657
						/* end block 1.1.4.1.2.7 */
						// End offset: 0x80098BFC
						// End Line: 2657

						/* begin block 1.1.4.1.2.8 */
							// Start line: 2657
							// Start offset: 0x80098BFC
							// Variables:
						// 		struct MobileSpeaker *this; // $s1

							/* begin block 1.1.4.1.2.8.1 */
								// Start line: 2657
								// Start offset: 0x80098BFC
							/* end block 1.1.4.1.2.8.1 */
							// End offset: 0x80098BFC
							// End Line: 2657
						/* end block 1.1.4.1.2.8 */
						// End offset: 0x80098BFC
						// End Line: 2657
					/* end block 1.1.4.1.2 */
					// End offset: 0x80098C58
					// End Line: 2676
				/* end block 1.1.4.1 */
				// End offset: 0x80098C58
				// End Line: 2676

				/* begin block 1.1.4.2 */
					// Start line: 2676
					// Start offset: 0x80098C58
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.1.4.2.1 */
						// Start line: 2676
						// Start offset: 0x80098C58
					/* end block 1.1.4.2.1 */
					// End offset: 0x80098C60
					// End Line: 2676
				/* end block 1.1.4.2 */
				// End offset: 0x80098C60
				// End Line: 2676
			/* end block 1.1.4 */
			// End offset: 0x80098C60
			// End Line: 2678
		/* end block 1.1 */
		// End offset: 0x80098C60
		// End Line: 2678
	/* end block 1 */
	// End offset: 0x80098C60
	// End Line: 2678

void SpikeBelt__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  bool bVar1;
  Speaker *pSVar2;
  uint uVar3;
  int ID_UNIT;
  SPCHNFSType_VOICE *VOICE;
  
  pSVar2 = Dispatch__6Speech();
  bVar1 = false;
  if (pSVar2->fSub != (Speaker *)0x0) {
    pSVar2 = Dispatch__6Speech();
    bVar1 = (MobileSpeaker *)pSVar2->fSub != this;
  }
  if (bVar1) {
    pSVar2 = Dispatch__6Speech();
    uVar3 = pSVar2->fSub->_vf[0].value;
    (**(code **)(uVar3 + 0x5c))
              ((int)&(pSVar2->fSub->fPosition).flags + (int)*(short *)(uVar3 + 0x58));
  }
  else {
    Promote__Q26Speech7Speaker((Speaker *)this);
    if (*(int *)(DAT_00000838 + 0x388) == 0) {
      *(uint *)(DAT_00000838 + 0x38c) = (this->Speaker)._vf[5].value;
      uVar3 = (this->Speaker)._vf[0].value;
      ID_UNIT = (**(code **)(uVar3 + 0xf4))
                          ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar3 + 0xf0));
      VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
      ID_UNIT = *(int *)(ID_UNIT + 4);
      (this->Speaker).fTo = ID_UNIT;
      SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
      SPCH_PlaySpeech();
      SPCHNFS_C_D_REQ_SPBLT(VOICE);
      SPCH_PlaySpeech();
    }
    (this->Speaker).fBlockade.flags = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Backup__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$s0*/)
 // line 2685, offset 0x80098c74
	/* begin block 1 */
		// Start line: 2686
		// Start offset: 0x80098C74

		/* begin block 1.1 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct MobileSpeaker *this; // $s0

			/* begin block 1.1.1 */
				// Start line: 2686
				// Start offset: 0x80098C74

				/* begin block 1.1.1.1 */
					// Start line: 2686
					// Start offset: 0x80098C74
					// Variables:
				// 		struct Car_tObj *carObj; // $v0
				// 		struct Speech *this; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 2686
						// Start offset: 0x80098C74
					/* end block 1.1.1.1.1 */
					// End offset: 0x80098C74
					// End Line: 2686
				/* end block 1.1.1.1 */
				// End offset: 0x80098C74
				// End Line: 2686
			/* end block 1.1.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.1 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.2 */
			// Start line: 2686
			// Start offset: 0x80098C74

			/* begin block 1.2.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.2.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.2 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.3 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.3.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.3.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.3 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.4 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct MobileSpeaker *this; // $s0

			/* begin block 1.4.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.4.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.4 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.5 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.5.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.5.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.5 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.6 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.6.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.6.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.6 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.7 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.7.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.7.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.7 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.8 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct MobileSpeaker *this; // $s0

			/* begin block 1.8.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.8.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.8 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.9 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.9.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.9.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.9 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.10 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.10.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.10.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.10 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.11 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.11.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.11.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.11 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.12 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.12.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.12.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.12 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.13 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.13.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.13.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.13 */
		// End offset: 0x80098C74
		// End Line: 2686

		/* begin block 1.14 */
			// Start line: 2686
			// Start offset: 0x80098C74
			// Variables:
		// 		struct Speaker *this; // $s0

			/* begin block 1.14.1 */
				// Start line: 2686
				// Start offset: 0x80098C74
			/* end block 1.14.1 */
			// End offset: 0x80098C74
			// End Line: 2686
		/* end block 1.14 */
		// End offset: 0x80098C74
		// End Line: 2686
	/* end block 1 */
	// End offset: 0x80098C74
	// End Line: 2686

void Backup__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  uint uVar1;
  int ID_UNIT;
  Car_tObj *car;
  SPCHNFSType_VOICE *VOICE;
  
  *(uint *)(DAT_00000838 + 0x38c) = (this->Speaker)._vf[5].value;
  uVar1 = (this->Speaker)._vf[0].value;
  ID_UNIT = (**(code **)(uVar1 + 0xf4))
                      ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xf0));
  VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
  ID_UNIT = *(int *)(ID_UNIT + 4);
  (this->Speaker).fTo = ID_UNIT;
  SPCHNFS_C_A_INTRO(VOICE,ID_UNIT,(this->Speaker).fFrom,&(this->Speaker).fReverse);
  SPCH_PlaySpeech();
  uVar1 = (this->Speaker)._vf[0].value;
  car = (Car_tObj *)
        (**(code **)(uVar1 + 0xdc))
                  ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xd8));
  SetCar__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
  uVar1 = (this->Speaker)._vf[0].value;
  car = (Car_tObj *)
        (**(code **)(uVar1 + 0xcc))
                  ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 200));
  FindLocation__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
  SPCHNFS_C_D_REQUEST_BKUP
            (VOICE,&(this->Speaker).fColour,(this->Speaker).fCar,(SPCHNFSType_POSITION *)this,
             (this->Speaker).fLocation,&(this->Speaker).fDistance);
  SPCH_PlaySpeech();
  (this->Speaker).fBlockade.flags = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Roger__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$s2*/)
 // line 2711, offset 0x80098d6c
	/* begin block 1 */
		// Start line: 2712
		// Start offset: 0x80098D6C

		/* begin block 1.1 */
			// Start line: 2712
			// Start offset: 0x80098D6C
			// Variables:
		// 		struct MobileSpeaker *this; // $s2

			/* begin block 1.1.1 */
				// Start line: 2712
				// Start offset: 0x80098D6C

				/* begin block 1.1.1.1 */
					// Start line: 2712
					// Start offset: 0x80098D6C
					// Variables:
				// 		struct Car_tObj *carObj; // $v1
				// 		struct Speech *this; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 2712
						// Start offset: 0x80098D6C
					/* end block 1.1.1.1.1 */
					// End offset: 0x80098D6C
					// End Line: 2712
				/* end block 1.1.1.1 */
				// End offset: 0x80098D6C
				// End Line: 2712
			/* end block 1.1.1 */
			// End offset: 0x80098D6C
			// End Line: 2712
		/* end block 1.1 */
		// End offset: 0x80098D6C
		// End Line: 2712

		/* begin block 1.2 */
			// Start line: 2712
			// Start offset: 0x80098D6C

			/* begin block 1.2.1 */
				// Start line: 2712
				// Start offset: 0x80098D6C
				// Variables:
			// 		struct Speaker *this; // $s2

				/* begin block 1.2.1.1 */
					// Start line: 2712
					// Start offset: 0x80098D6C
				/* end block 1.2.1.1 */
				// End offset: 0x80098D6C
				// End Line: 2712
			/* end block 1.2.1 */
			// End offset: 0x80098D6C
			// End Line: 2712

			/* begin block 1.2.2 */
				// Start line: 2715
				// Start offset: 0x80098DA4
				// Variables:
			// 		struct Speaker *this; // $s2

				/* begin block 1.2.2.1 */
					// Start line: 2715
					// Start offset: 0x80098DA4
				/* end block 1.2.2.1 */
				// End offset: 0x80098DA4
				// End Line: 2715
			/* end block 1.2.2 */
			// End offset: 0x80098DA4
			// End Line: 2715

			/* begin block 1.2.3 */
				// Start line: 2716
				// Start offset: 0x80098DE0

				/* begin block 1.2.3.1 */
					// Start line: 2718
					// Start offset: 0x80098DE0
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.2.3.1.1 */
						// Start line: 2718
						// Start offset: 0x80098DE0
					/* end block 1.2.3.1.1 */
					// End offset: 0x80098DE0
					// End Line: 2718
				/* end block 1.2.3.1 */
				// End offset: 0x80098DE0
				// End Line: 2718

				/* begin block 1.2.3.2 */
					// Start line: 2718
					// Start offset: 0x80098DE0

					/* begin block 1.2.3.2.1 */
						// Start line: 2718
						// Start offset: 0x80098DE0
					/* end block 1.2.3.2.1 */
					// End offset: 0x80098DE0
					// End Line: 2718
				/* end block 1.2.3.2 */
				// End offset: 0x80098DE0
				// End Line: 2718

				/* begin block 1.2.3.3 */
					// Start line: 2718
					// Start offset: 0x80098DE0
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.2.3.3.1 */
						// Start line: 2718
						// Start offset: 0x80098DE0
					/* end block 1.2.3.3.1 */
					// End offset: 0x80098DE0
					// End Line: 2718
				/* end block 1.2.3.3 */
				// End offset: 0x80098DE0
				// End Line: 2718

				/* begin block 1.2.3.4 */
					// Start line: 2718
					// Start offset: 0x80098DE0
					// Variables:
				// 		struct MobileSpeaker *this; // $s2

					/* begin block 1.2.3.4.1 */
						// Start line: 2718
						// Start offset: 0x80098DE0
					/* end block 1.2.3.4.1 */
					// End offset: 0x80098DE0
					// End Line: 2718
				/* end block 1.2.3.4 */
				// End offset: 0x80098DE0
				// End Line: 2718

				/* begin block 1.2.3.5 */
					// Start line: 2718
					// Start offset: 0x80098DE0
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.2.3.5.1 */
						// Start line: 2718
						// Start offset: 0x80098DE0
					/* end block 1.2.3.5.1 */
					// End offset: 0x80098DE0
					// End Line: 2718
				/* end block 1.2.3.5 */
				// End offset: 0x80098DE0
				// End Line: 2718

				/* begin block 1.2.3.6 */
					// Start line: 2718
					// Start offset: 0x80098DE0
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.2.3.6.1 */
						// Start line: 2718
						// Start offset: 0x80098DE0
					/* end block 1.2.3.6.1 */
					// End offset: 0x80098DE0
					// End Line: 2718
				/* end block 1.2.3.6 */
				// End offset: 0x80098DE0
				// End Line: 2718

				/* begin block 1.2.3.7 */
					// Start line: 2718
					// Start offset: 0x80098DE0
					// Variables:
				// 		struct MobileSpeaker *this; // $s2

					/* begin block 1.2.3.7.1 */
						// Start line: 2718
						// Start offset: 0x80098DE0
					/* end block 1.2.3.7.1 */
					// End offset: 0x80098DE0
					// End Line: 2718
				/* end block 1.2.3.7 */
				// End offset: 0x80098DE0
				// End Line: 2718

				/* begin block 1.2.3.8 */
					// Start line: 2718
					// Start offset: 0x80098DE0
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.2.3.8.1 */
						// Start line: 2718
						// Start offset: 0x80098DE0
					/* end block 1.2.3.8.1 */
					// End offset: 0x80098DE0
					// End Line: 2718
				/* end block 1.2.3.8 */
				// End offset: 0x80098DE0
				// End Line: 2718

				/* begin block 1.2.3.9 */
					// Start line: 2718
					// Start offset: 0x80098DE0
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.2.3.9.1 */
						// Start line: 2718
						// Start offset: 0x80098DE0
					/* end block 1.2.3.9.1 */
					// End offset: 0x80098DE0
					// End Line: 2718
				/* end block 1.2.3.9 */
				// End offset: 0x80098DE0
				// End Line: 2718
			/* end block 1.2.3 */
			// End offset: 0x80098DE0
			// End Line: 2718

			/* begin block 1.2.4 */
				// Start line: 2730
				// Start offset: 0x80098E94

				/* begin block 1.2.4.1 */
					// Start line: 2732
					// Start offset: 0x80098E94

					/* begin block 1.2.4.1.1 */
						// Start line: 2732
						// Start offset: 0x80098E94
					/* end block 1.2.4.1.1 */
					// End offset: 0x80098E94
					// End Line: 2732
				/* end block 1.2.4.1 */
				// End offset: 0x80098E94
				// End Line: 2732

				/* begin block 1.2.4.2 */
					// Start line: 2732
					// Start offset: 0x80098E94
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.2.4.2.1 */
						// Start line: 2732
						// Start offset: 0x80098E94
					/* end block 1.2.4.2.1 */
					// End offset: 0x80098E94
					// End Line: 2732
				/* end block 1.2.4.2 */
				// End offset: 0x80098E94
				// End Line: 2732

				/* begin block 1.2.4.3 */
					// Start line: 2732
					// Start offset: 0x80098E94
					// Variables:
				// 		struct MobileSpeaker *this; // $s2

					/* begin block 1.2.4.3.1 */
						// Start line: 2732
						// Start offset: 0x80098E94
					/* end block 1.2.4.3.1 */
					// End offset: 0x80098E94
					// End Line: 2732
				/* end block 1.2.4.3 */
				// End offset: 0x80098E94
				// End Line: 2732

				/* begin block 1.2.4.4 */
					// Start line: 2732
					// Start offset: 0x80098E94
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.2.4.4.1 */
						// Start line: 2732
						// Start offset: 0x80098E94
					/* end block 1.2.4.4.1 */
					// End offset: 0x80098E94
					// End Line: 2732
				/* end block 1.2.4.4 */
				// End offset: 0x80098E94
				// End Line: 2732

				/* begin block 1.2.4.5 */
					// Start line: 2732
					// Start offset: 0x80098E94
					// Variables:
				// 		struct Speaker *this; // $s2

					/* begin block 1.2.4.5.1 */
						// Start line: 2732
						// Start offset: 0x80098E94
					/* end block 1.2.4.5.1 */
					// End offset: 0x80098E94
					// End Line: 2732
				/* end block 1.2.4.5 */
				// End offset: 0x80098E94
				// End Line: 2732
			/* end block 1.2.4 */
			// End offset: 0x80098ECC
			// End Line: 2734
		/* end block 1.2 */
		// End offset: 0x80098ECC
		// End Line: 2734
	/* end block 1 */
	// End offset: 0x80098ECC
	// End Line: 2734

void Roger__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  bool bVar1;
  Speaker *pSVar2;
  int ID_UNIT;
  int iVar3;
  Car_tObj *car;
  uint uVar4;
  SPCHNFSType_VOICE *VOICE;
  
  *(uint *)(DAT_00000838 + 0x38c) = (this->Speaker)._vf[5].value;
  bVar1 = false;
  if ((this->Speaker).fSub != (Speaker *)0x0) {
    pSVar2 = Dispatch__6Speech();
    uVar4 = pSVar2->_vf[0].value;
    pSVar2 = (Speaker *)
             (**(code **)(uVar4 + 0xb4))
                       ((int)&(pSVar2->fPosition).flags + (int)*(short *)(uVar4 + 0xb0));
    bVar1 = pSVar2 == (this->Speaker).fSub;
  }
  if (bVar1) {
    VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
    SPCH_PlaySpeech();
    uVar4 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar4 + 0xf4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar4 + 0xf0));
    pSVar2 = (this->Speaker).fSub;
    uVar4 = pSVar2->_vf[0].value;
    iVar3 = (**(code **)(uVar4 + 0x8c))
                      ((int)&(pSVar2->fPosition).flags + (int)*(short *)(uVar4 + 0x88));
    ID_UNIT = *(int *)(ID_UNIT + iVar3 * 4 + 8);
    (this->Speaker).fTo = ID_UNIT;
    SPCHNFS_C_A_CONFIRM(VOICE,ID_UNIT,&(this->Speaker).fConfirm);
    SPCH_PlaySpeech();
    uVar4 = (this->Speaker)._vf[0].value;
    car = (Car_tObj *)
          (**(code **)(uVar4 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar4 + 0xd8));
    SetCar__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
    SPCHNFS_C_C_IN_PURS_NEAR_PERP(VOICE,&(this->Speaker).fColour,(this->Speaker).fCar);
  }
  else {
    uVar4 = (this->Speaker)._vf[0].value;
    ID_UNIT = (**(code **)(uVar4 + 0xf4))
                        ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar4 + 0xf0));
    ID_UNIT = *(int *)(ID_UNIT + 4);
    (this->Speaker).fTo = ID_UNIT;
    SPCHNFS_C_A_CONFIRM((SPCHNFSType_VOICE *)((this->Speaker)._vf + 1),ID_UNIT,
                        &(this->Speaker).fConfirm);
  }
  SPCH_PlaySpeech();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Bullhorn__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$a0*/)
 // line 2741, offset 0x80098ee4
	/* begin block 1 */
		// Start line: 2742
		// Start offset: 0x80098EE4

		/* begin block 1.1 */
			// Start line: 2742
			// Start offset: 0x80098EE4
			// Variables:
		// 		struct MobileSpeaker *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 2742
				// Start offset: 0x80098EE4

				/* begin block 1.1.1.1 */
					// Start line: 2742
					// Start offset: 0x80098EE4
					// Variables:
				// 		struct Car_tObj *carObj; // $v0
				// 		struct Speech *this; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 2742
						// Start offset: 0x80098EE4
					/* end block 1.1.1.1.1 */
					// End offset: 0x80098EE4
					// End Line: 2742
				/* end block 1.1.1.1 */
				// End offset: 0x80098EE4
				// End Line: 2742
			/* end block 1.1.1 */
			// End offset: 0x80098EE4
			// End Line: 2742
		/* end block 1.1 */
		// End offset: 0x80098EE4
		// End Line: 2742

		/* begin block 1.2 */
			// Start line: 2742
			// Start offset: 0x80098EE4
			// Variables:
		// 		struct MobileSpeaker *this; // $a0

			/* begin block 1.2.1 */
				// Start line: 2742
				// Start offset: 0x80098EE4
			/* end block 1.2.1 */
			// End offset: 0x80098EE4
			// End Line: 2742
		/* end block 1.2 */
		// End offset: 0x80098EE4
		// End Line: 2742
	/* end block 1 */
	// End offset: 0x80098EE4
	// End Line: 2742

void Bullhorn__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  *(uint *)(DAT_00000838 + 0x38c) = (this->Speaker)._vf[5].value;
  SPCHNFS_C_P_BULLHORN_SPEECH((SPCHNFSType_VOICE *)((this->Speaker)._vf + 1));
  SPCH_PlaySpeech();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Purge__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$s1*/)
 // line 2754, offset 0x80098f18
	/* begin block 1 */
		// Start line: 2755
		// Start offset: 0x80098F18
		// Variables:
	// 		struct Speaker *Chain; // $v1

		/* begin block 1.1 */
			// Start line: 2759
			// Start offset: 0x80098F3C

			/* begin block 1.1.1 */
				// Start line: 2760
				// Start offset: 0x80098F6C

				/* begin block 1.1.1.1 */
					// Start line: 2792
					// Start offset: 0x800990B8
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.1.1.1.1 */
						// Start line: 2792
						// Start offset: 0x800990B8
					/* end block 1.1.1.1.1 */
					// End offset: 0x800990B8
					// End Line: 2792
				/* end block 1.1.1.1 */
				// End offset: 0x800990B8
				// End Line: 2792

				/* begin block 1.1.1.2 */
					// Start line: 2792
					// Start offset: 0x800990B8
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.1.1.2.1 */
						// Start line: 2792
						// Start offset: 0x800990B8
					/* end block 1.1.1.2.1 */
					// End offset: 0x800990B8
					// End Line: 2792
				/* end block 1.1.1.2 */
				// End offset: 0x800990B8
				// End Line: 2792

				/* begin block 1.1.1.3 */
					// Start line: 2792
					// Start offset: 0x800990B8
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.1.1.3.1 */
						// Start line: 2792
						// Start offset: 0x800990B8
					/* end block 1.1.1.3.1 */
					// End offset: 0x800990B8
					// End Line: 2792
				/* end block 1.1.1.3 */
				// End offset: 0x800990B8
				// End Line: 2792

				/* begin block 1.1.1.4 */
					// Start line: 2792
					// Start offset: 0x800990B8
					// Variables:
				// 		struct MobileSpeaker *this; // $s1

					/* begin block 1.1.1.4.1 */
						// Start line: 2792
						// Start offset: 0x800990B8
					/* end block 1.1.1.4.1 */
					// End offset: 0x800990B8
					// End Line: 2792
				/* end block 1.1.1.4 */
				// End offset: 0x800990B8
				// End Line: 2792

				/* begin block 1.1.1.5 */
					// Start line: 2792
					// Start offset: 0x800990B8
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.1.1.5.1 */
						// Start line: 2792
						// Start offset: 0x800990B8
					/* end block 1.1.1.5.1 */
					// End offset: 0x800990B8
					// End Line: 2792
				/* end block 1.1.1.5 */
				// End offset: 0x800990B8
				// End Line: 2792
			/* end block 1.1.1 */
			// End offset: 0x800990D0
			// End Line: 2803
		/* end block 1.1 */
		// End offset: 0x800990D0
		// End Line: 2803

		/* begin block 1.2 */
			// Start line: 2819
			// Start offset: 0x8009912C

			/* begin block 1.2.1 */
				// Start line: 2819
				// Start offset: 0x8009912C
				// Variables:
			// 		struct Speaker *this; // $v1

				/* begin block 1.2.1.1 */
					// Start line: 2819
					// Start offset: 0x8009912C
				/* end block 1.2.1.1 */
				// End offset: 0x8009912C
				// End Line: 2819
			/* end block 1.2.1 */
			// End offset: 0x8009912C
			// End Line: 2819

			/* begin block 1.2.2 */
				// Start line: 2821
				// Start offset: 0x8009913C

				/* begin block 1.2.2.1 */
					// Start line: 2821
					// Start offset: 0x8009913C
					// Variables:
				// 		struct Speaker *this; // $v1

					/* begin block 1.2.2.1.1 */
						// Start line: 2821
						// Start offset: 0x8009913C
					/* end block 1.2.2.1.1 */
					// End offset: 0x8009913C
					// End Line: 2821
				/* end block 1.2.2.1 */
				// End offset: 0x8009913C
				// End Line: 2821
			/* end block 1.2.2 */
			// End offset: 0x80099144
			// End Line: 2831

			/* begin block 1.2.3 */
				// Start line: 2831
				// Start offset: 0x80099144

				/* begin block 1.2.3.1 */
					// Start line: 2831
					// Start offset: 0x80099144
				/* end block 1.2.3.1 */
				// End offset: 0x80099144
				// End Line: 2831
			/* end block 1.2.3 */
			// End offset: 0x80099144
			// End Line: 2831
		/* end block 1.2 */
		// End offset: 0x80099144
		// End Line: 2831

		/* begin block 1.3 */
			// Start line: 2833
			// Start offset: 0x8009914C
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.3.1 */
				// Start line: 2833
				// Start offset: 0x8009914C
			/* end block 1.3.1 */
			// End offset: 0x8009914C
			// End Line: 2833
		/* end block 1.3 */
		// End offset: 0x8009914C
		// End Line: 2833

		/* begin block 1.4 */
			// Start line: 2833
			// Start offset: 0x8009914C
			// Variables:
		// 		struct Speaker *this; // $v1

			/* begin block 1.4.1 */
				// Start line: 2833
				// Start offset: 0x8009914C
			/* end block 1.4.1 */
			// End offset: 0x80099158
			// End Line: 2833
		/* end block 1.4 */
		// End offset: 0x80099158
		// End Line: 2833
	/* end block 1 */
	// End offset: 0x80099158
	// End Line: 2835

/* WARNING: Type propagation algorithm not settling */

void Purge__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  Speaker *pSVar4;
  MobileSpeaker *pMVar5;
  MobileSpeaker *pMVar6;
  
  if ((this->Speaker)._vf[5].value == 0) {
    return;
  }
  uVar2 = (this->Speaker)._vf[0].value;
  iVar3 = (**(code **)(uVar2 + 0xcc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 200));
  if ((*(uint *)(iVar3 + 0x260) & 0x200) == 0) {
    (this->Speaker)._vf[5].value = 0;
    pSVar4 = Dispatch__6Speech();
    uVar2 = pSVar4->_vf[0].value;
    pMVar6 = (MobileSpeaker *)
             (**(code **)(uVar2 + 0xb4))
                       ((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0xb0));
    if (pMVar6 == this) {
      pSVar4 = Dispatch__6Speech();
      uVar2 = pSVar4->_vf[0].value;
      (**(code **)(uVar2 + 0xbc))((int)&(pSVar4->fPosition).flags + (int)*(short *)(uVar2 + 0xb8));
    }
    pMVar6 = (MobileSpeaker *)Dispatch__6Speech();
    do {
      pMVar5 = *(MobileSpeaker **)((int)&pMVar6->Speaker + 0x48);
      if (pMVar5 == this) {
        *(Speaker **)((int)&pMVar6->Speaker + 0x48) = (this->Speaker).fSub;
        return;
      }
      pMVar6 = pMVar5;
    } while (pMVar5 != (MobileSpeaker *)0x0);
    return;
  }
  CopSpeak_Flush__Fv();
  if (CopSpeak_gSpchHandle != -1) {
    if (stackSpeedUpEnbabledFlag == 0) {
      SNDstop(CopSpeak_gSpchHandle);
    }
    else {
      gWSavePtr = SetSp();
      stackSpeedUpEnbabledFlag = 0;
      SNDstop(CopSpeak_gSpchHandle);
      gWSavePtr = SetSp();
      stackSpeedUpEnbabledFlag = 1;
    }
  }
  uVar2 = (this->Speaker)._vf[0].value;
  bVar1 = false;
  iVar3 = (**(code **)(uVar2 + 0xdc))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar2 + 0xd8));
  if (iVar3 != 0) {
    iVar3 = AudioMus_Threshold__Fv();
    bVar1 = iVar3 != 0;
  }
  if (bVar1) {
    if (stackSpeedUpEnbabledFlag != 0) {
      gWSavePtr = SetSp();
      stackSpeedUpEnbabledFlag = 0;
      AudioMus_StopSong__Fi(500);
      AudioMus_PlaySong__FPc((char *)0x0);
      gWSavePtr = SetSp();
      stackSpeedUpEnbabledFlag = 1;
      (this->Speaker).fBlockade.flags = 0;
      goto LAB_800990bc;
    }
    AudioMus_StopSong__Fi(500);
    AudioMus_PlaySong__FPc((char *)0x0);
  }
  (this->Speaker).fBlockade.flags = 0;
LAB_800990bc:
  (this->Speaker).fArrest.flags = 0;
  (this->Speaker).fUpdate.flags = 0;
  (this->Speaker)._vf[6].value = 0;
  (this->Speaker).fSub = (Speaker *)0x0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReportBlockade__Q26Speech13MobileSpeaker(struct MobileSpeaker *this /*$s1*/)
 // line 2843, offset 0x8009916c
	/* begin block 1 */
		// Start line: 2844
		// Start offset: 0x8009916C

		/* begin block 1.1 */
			// Start line: 2844
			// Start offset: 0x8009916C
			// Variables:
		// 		struct MobileSpeaker *this; // $s1

			/* begin block 1.1.1 */
				// Start line: 2844
				// Start offset: 0x8009916C

				/* begin block 1.1.1.1 */
					// Start line: 2844
					// Start offset: 0x8009916C
					// Variables:
				// 		struct Car_tObj *carObj; // $v0
				// 		struct Speech *this; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 2844
						// Start offset: 0x8009916C
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009916C
					// End Line: 2844
				/* end block 1.1.1.1 */
				// End offset: 0x8009916C
				// End Line: 2844
			/* end block 1.1.1 */
			// End offset: 0x8009916C
			// End Line: 2844
		/* end block 1.1 */
		// End offset: 0x8009916C
		// End Line: 2844

		/* begin block 1.2 */
			// Start line: 2844
			// Start offset: 0x8009916C

			/* begin block 1.2.1 */
				// Start line: 2844
				// Start offset: 0x8009916C
			/* end block 1.2.1 */
			// End offset: 0x8009916C
			// End Line: 2844
		/* end block 1.2 */
		// End offset: 0x8009916C
		// End Line: 2844

		/* begin block 1.3 */
			// Start line: 2844
			// Start offset: 0x8009916C
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.3.1 */
				// Start line: 2844
				// Start offset: 0x8009916C
			/* end block 1.3.1 */
			// End offset: 0x8009916C
			// End Line: 2844
		/* end block 1.3 */
		// End offset: 0x8009916C
		// End Line: 2844

		/* begin block 1.4 */
			// Start line: 2844
			// Start offset: 0x8009916C
			// Variables:
		// 		struct Speaker *this; // $s1

			/* begin block 1.4.1 */
				// Start line: 2844
				// Start offset: 0x8009916C
			/* end block 1.4.1 */
			// End offset: 0x8009916C
			// End Line: 2844
		/* end block 1.4 */
		// End offset: 0x8009916C
		// End Line: 2844

		/* begin block 1.5 */
			// Start line: 2844
			// Start offset: 0x8009916C

			/* begin block 1.5.1 */
				// Start line: 2844
				// Start offset: 0x8009916C
				// Variables:
			// 		struct Speaker *this; // $s1

				/* begin block 1.5.1.1 */
					// Start line: 2844
					// Start offset: 0x8009916C
				/* end block 1.5.1.1 */
				// End offset: 0x8009916C
				// End Line: 2844
			/* end block 1.5.1 */
			// End offset: 0x8009916C
			// End Line: 2844

			/* begin block 1.5.2 */
				// Start line: 2853
				// Start offset: 0x800991F0

				/* begin block 1.5.2.1 */
					// Start line: 2844
					// Start offset: 0x800991F0
					// Variables:
				// 		struct MobileSpeaker *this; // $s1

					/* begin block 1.5.2.1.1 */
						// Start line: 2844
						// Start offset: 0x800991F0
					/* end block 1.5.2.1.1 */
					// End offset: 0x800991F0
					// End Line: 2844
				/* end block 1.5.2.1 */
				// End offset: 0x800991F0
				// End Line: 2844

				/* begin block 1.5.2.2 */
					// Start line: 2844
					// Start offset: 0x800991F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.2.2.1 */
						// Start line: 2844
						// Start offset: 0x800991F0
					/* end block 1.5.2.2.1 */
					// End offset: 0x800991F0
					// End Line: 2844
				/* end block 1.5.2.2 */
				// End offset: 0x800991F0
				// End Line: 2844

				/* begin block 1.5.2.3 */
					// Start line: 2844
					// Start offset: 0x800991F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.2.3.1 */
						// Start line: 2844
						// Start offset: 0x800991F0
					/* end block 1.5.2.3.1 */
					// End offset: 0x800991F0
					// End Line: 2844
				/* end block 1.5.2.3 */
				// End offset: 0x800991F0
				// End Line: 2844

				/* begin block 1.5.2.4 */
					// Start line: 2844
					// Start offset: 0x800991F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.2.4.1 */
						// Start line: 2844
						// Start offset: 0x800991F0
					/* end block 1.5.2.4.1 */
					// End offset: 0x800991F0
					// End Line: 2844
				/* end block 1.5.2.4 */
				// End offset: 0x800991F0
				// End Line: 2844

				/* begin block 1.5.2.5 */
					// Start line: 2844
					// Start offset: 0x800991F0
					// Variables:
				// 		struct MobileSpeaker *this; // $s1

					/* begin block 1.5.2.5.1 */
						// Start line: 2844
						// Start offset: 0x800991F0
					/* end block 1.5.2.5.1 */
					// End offset: 0x800991F0
					// End Line: 2844
				/* end block 1.5.2.5 */
				// End offset: 0x800991F0
				// End Line: 2844

				/* begin block 1.5.2.6 */
					// Start line: 2844
					// Start offset: 0x800991F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.2.6.1 */
						// Start line: 2844
						// Start offset: 0x800991F0
					/* end block 1.5.2.6.1 */
					// End offset: 0x800991F0
					// End Line: 2844
				/* end block 1.5.2.6 */
				// End offset: 0x800991F0
				// End Line: 2844

				/* begin block 1.5.2.7 */
					// Start line: 2844
					// Start offset: 0x800991F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.2.7.1 */
						// Start line: 2844
						// Start offset: 0x800991F0
					/* end block 1.5.2.7.1 */
					// End offset: 0x800991F0
					// End Line: 2844
				/* end block 1.5.2.7 */
				// End offset: 0x800991F0
				// End Line: 2844

				/* begin block 1.5.2.8 */
					// Start line: 2844
					// Start offset: 0x800991F0
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.2.8.1 */
						// Start line: 2844
						// Start offset: 0x800991F0
					/* end block 1.5.2.8.1 */
					// End offset: 0x800991F0
					// End Line: 2844
				/* end block 1.5.2.8 */
				// End offset: 0x800991F0
				// End Line: 2844
			/* end block 1.5.2 */
			// End offset: 0x800991F0
			// End Line: 2844

			/* begin block 1.5.3 */
				// Start line: 2860
				// Start offset: 0x8009922C

				/* begin block 1.5.3.1 */
					// Start line: 2844
					// Start offset: 0x8009922C
					// Variables:
				// 		struct MobileSpeaker *this; // $s1

					/* begin block 1.5.3.1.1 */
						// Start line: 2844
						// Start offset: 0x8009922C
					/* end block 1.5.3.1.1 */
					// End offset: 0x8009922C
					// End Line: 2844
				/* end block 1.5.3.1 */
				// End offset: 0x8009922C
				// End Line: 2844

				/* begin block 1.5.3.2 */
					// Start line: 2844
					// Start offset: 0x8009922C
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.3.2.1 */
						// Start line: 2844
						// Start offset: 0x8009922C
					/* end block 1.5.3.2.1 */
					// End offset: 0x8009922C
					// End Line: 2844
				/* end block 1.5.3.2 */
				// End offset: 0x8009922C
				// End Line: 2844

				/* begin block 1.5.3.3 */
					// Start line: 2844
					// Start offset: 0x8009922C
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.3.3.1 */
						// Start line: 2844
						// Start offset: 0x8009922C
					/* end block 1.5.3.3.1 */
					// End offset: 0x8009922C
					// End Line: 2844
				/* end block 1.5.3.3 */
				// End offset: 0x8009922C
				// End Line: 2844

				/* begin block 1.5.3.4 */
					// Start line: 2844
					// Start offset: 0x8009922C
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.3.4.1 */
						// Start line: 2844
						// Start offset: 0x8009922C
					/* end block 1.5.3.4.1 */
					// End offset: 0x8009922C
					// End Line: 2844
				/* end block 1.5.3.4 */
				// End offset: 0x8009922C
				// End Line: 2844

				/* begin block 1.5.3.5 */
					// Start line: 2844
					// Start offset: 0x8009922C
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.3.5.1 */
						// Start line: 2844
						// Start offset: 0x8009922C
					/* end block 1.5.3.5.1 */
					// End offset: 0x8009922C
					// End Line: 2844
				/* end block 1.5.3.5 */
				// End offset: 0x8009922C
				// End Line: 2844

				/* begin block 1.5.3.6 */
					// Start line: 2844
					// Start offset: 0x8009922C
					// Variables:
				// 		struct Speaker *this; // $s1

					/* begin block 1.5.3.6.1 */
						// Start line: 2844
						// Start offset: 0x8009922C
					/* end block 1.5.3.6.1 */
					// End offset: 0x8009922C
					// End Line: 2844
				/* end block 1.5.3.6 */
				// End offset: 0x8009922C
				// End Line: 2844
			/* end block 1.5.3 */
			// End offset: 0x80099254
			// End Line: 2862
		/* end block 1.5 */
		// End offset: 0x80099254
		// End Line: 2862
	/* end block 1 */
	// End offset: 0x80099254
	// End Line: 2862

void ReportBlockade__Q26Speech13MobileSpeaker(MobileSpeaker *this)

{
  uint uVar1;
  int iVar2;
  Car_tObj *car;
  SPCHNFSType_VOICE *VOICE;
  
  *(uint *)(DAT_00000838 + 0x38c) = (this->Speaker)._vf[5].value;
  uVar1 = (this->Speaker)._vf[0].value;
  iVar2 = (**(code **)(uVar1 + 0xf4))
                    ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 0xf0));
  uVar1 = (this->Speaker)._vf[0].value;
  (this->Speaker).fTo = *(int *)(iVar2 + 4);
  car = (Car_tObj *)
        (**(code **)(uVar1 + 0xcc))
                  ((int)&(this->Speaker).fPosition.flags + (int)*(short *)(uVar1 + 200));
  FindLocation__Q26Speech7SpeakerP8Car_tObj((Speaker *)this,car);
  (this->Speaker).fSpikeSide.flags = 4;
  if ((this->Speaker).fBlockade.flags == 2) {
    VOICE = (SPCHNFSType_VOICE *)((this->Speaker)._vf + 1);
    SPCHNFS_C_A_INTRO(VOICE,(this->Speaker).fTo,(this->Speaker).fFrom,&(this->Speaker).fReverse);
    SPCH_PlaySpeech();
    SPCHNFS_W_D_RDBLK_PLC
              (VOICE,(SPCHNFSType_POSITION *)this,(this->Speaker).fLocation,
               &(this->Speaker).fDistance);
  }
  else {
    SPCHNFS_W_D_SPBLT_PLC
              ((SPCHNFSType_VOICE *)((this->Speaker)._vf + 1),(SPCHNFSType_POSITION *)this,
               &(this->Speaker).fSpikeSide,(this->Speaker).fFrom,(this->Speaker).fLocation,
               &(this->Speaker).fDistance);
  }
  SPCH_PlaySpeech();
  return;
}




