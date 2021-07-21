#ifndef STATCHK_H
#define STATCHK_H


extern void * StatChk_IsRecordLapTime__FP10Car_tStatssPs(struct Car_tStats *dummyCars, short nNumCars, short *nBestCarIndex); // 0x80049840

extern void StatChk_SaveRecordLapTime__FP10Car_tStatsss(struct Car_tStats *dummyCars, short nNumCars, short nBestCarIndex); // 0x80049B7C

extern short StatChk_IsTopTime__FP10Car_tStatss(struct Car_tStats *dummyCars, short nNumCars); // 0x80049D0C

extern void StatChk_SaveTopTime__FP10Car_tStatss(struct Car_tStats *dummyCars, short nNumCars); // 0x8004A1B8

extern void StatChk_ClearNewRecords__Fv(); // 0x8004A838


#endif
