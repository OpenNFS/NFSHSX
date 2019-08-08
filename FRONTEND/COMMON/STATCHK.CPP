#include "NFS4.H"
#include "STATCHK.H"

// decompiled code
// original method signature: 
// unsigned int /*$ra*/ StatChk_IsRecordLapTime__FP10Car_tStatssPs(struct Car_tStats *dummyCars /*$s7*/, short nNumCars /*stack -64*/, short *nBestCarIndex /*stack 8*/)
 // line 50, offset 0x80049840
	/* begin block 1 */
		// Start line: 51
		// Start offset: 0x80049840
		// Variables:
	// 		short bBestLapFlag; // stack offset -56
	// 		short bCheckLapRecords; // $s6
	// 		short i; // $s3
	// 		int *nBestLapTimes; // $s5
	// 		short *nRankBestLapTimes; // $s4
	// 		short nBestCarIndexTemp; // $s0
	// 		short nNewRecordHolder; // $a0
	// 		struct tRecordBuffer RecordHolder; // stack offset -88
	// 		struct tRecordBuffer *TrackRecords; // $fp
	// 		struct tCarInfo *carInfo; // $v0
	/* end block 1 */
	// End offset: 0x80049B4C
	// End Line: 223

uint StatChk_IsRecordLapTime__FP10Car_tStatssPs( (Car_tStats *dummyCars,short nNumCars,short *nBestCarIndex)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// void /*$ra*/ StatChk_SaveRecordLapTime__FP10Car_tStatsss(struct Car_tStats *dummyCars /*$s4*/, short nNumCars /*$a1*/, short nBestCarIndex /*$s3*/)
 // line 227, offset 0x80049b7c
	/* begin block 1 */
		// Start line: 228
		// Start offset: 0x80049B7C
		// Variables:
	// 		struct tRecordBuffer RecordHolder; // stack offset -72
	// 		struct tRecordBuffer DummyRaceResult; // stack offset -48
	// 		struct tRecordBuffer *TrackRecords; // $s1
	// 		struct tCarInfo *carInfo; // $s2
	/* end block 1 */
	// End offset: 0x80049CEC
	// End Line: 276

void StatChk_SaveRecordLapTime__FP10Car_tStatsss( (Car_tStats *dummyCars,short nNumCars,short nBestCarIndex)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// short /*$ra*/ StatChk_IsTopTime__FP10Car_tStatss(struct Car_tStats *dummyCars /*$s6*/, short nNumCars /*stack -56*/)
 // line 285, offset 0x80049d0c
	/* begin block 1 */
		// Start line: 286
		// Start offset: 0x80049D0C
		// Variables:
	// 		int retvalue; // $s0
	// 		short bDoRecordCheck; // $s7
	// 		short nLaps; // $s3
	// 		short nLapIndicator; // $a0
	// 		int nCheckTotalTime; // $a0
	// 		short k; // $a0
	// 		short nCar; // $s1
	// 		int *nCarTotalTimes; // stack offset -48
	// 		short *nRankCarTotalTimes; // $s2
	// 		struct tRecordBuffer *RecordHolders; // $fp
	// 		int LASTPLACE[2]; // stack offset -80
	// 		int TOPLIST[2]; // stack offset -72
	// 		int NUMBERONE[2]; // stack offset -64

		/* begin block 1.1 */
			// Start line: 345
			// Start offset: 0x80049E54

			/* begin block 1.1.1 */
				// Start line: 345
				// Start offset: 0x80049E70
				// Variables:
			// 		struct tCarInfo *carInfo; // $a0
			/* end block 1.1.1 */
			// End offset: 0x8004A03C
			// End Line: 407
		/* end block 1.1 */
		// End offset: 0x8004A044
		// End Line: 412
	/* end block 1 */
	// End offset: 0x8004A188
	// End Line: 460

short StatChk_IsTopTime__FP10Car_tStatss(Car_tStats *dummyCars,short nNumCars)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// void /*$ra*/ StatChk_SaveTopTime__FP10Car_tStatss(struct Car_tStats *dummyCars /*$fp*/, short nNumCars /*stack -80*/)
 // line 464, offset 0x8004a1b8
	/* begin block 1 */
		// Start line: 465
		// Start offset: 0x8004A1B8
		// Variables:
	// 		unsigned int bTopTenFlag; // stack offset -72
	// 		unsigned int bDoRecordCheck; // $s7
	// 		short nLapIndicator; // stack offset -64
	// 		short nPlace; // stack offset -56
	// 		int nTopTenSort[8]; // stack offset -160
	// 		short nTopTenIndex[8]; // stack offset -128
	// 		int nCheckTotalTime; // $v1
	// 		short k; // $s0
	// 		short nCar; // $s2
	// 		char *buffer; // stack offset -48
	// 		int *nCarTotalTimes; // stack offset -44
	// 		short *nRankCarTotalTimes; // $s5
	// 		struct tRecordBuffer DummyRaceResult; // stack offset -112
	// 		struct tRecordBuffer *RecordHolders; // $s6
	// 		struct tCarInfo *carInfo; // $a2
	// 		int topPlacements[2]; // stack offset -88
	/* end block 1 */
	// End offset: 0x8004A7E0
	// End Line: 652

void StatChk_SaveTopTime__FP10Car_tStatss(Car_tStats *dummyCars,short nNumCars)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}




// decompiled code
// original method signature: 
// void /*$ra*/ StatChk_ClearNewRecords__Fv()
 // line 664, offset 0x8004a838
	/* begin block 1 */
		// Start line: 665
		// Start offset: 0x8004A838
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x8004A858
	// End Line: 669

void StatChk_ClearNewRecords__Fv(void)
{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    
  halt_baddata();


}





