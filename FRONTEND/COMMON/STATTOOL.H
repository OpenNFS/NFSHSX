#ifndef STATTOOL_H
#define STATTOOL_H


extern void Stattool_nCreateIndex__FiPiPs(int nNumber, int *nInput, short *nIndex); // 0x8004A868

extern void Stattool_ParseTime__FiPc(int nTime, char *sLapTime); // 0x8004A99C

extern void UserNameUpperCaseOneLetter__FPc(char *c); // 0x8004AAB4

extern void Stattool_SamNelsonsUpperLowerStringConverterForRecords__FPc(char *string); // 0x8004ABD0

extern void StatTool_UpperCaseItKeepingInMindThoseBloodySpecialCharacters__FPc(char *string); // 0x8004AC4C

extern void Stattool_GetAllDefaultRecords__FP13tRecordBufferb(struct tRecordBuffer *TrackRecords, void * cheatones); // 0x8004AC98

extern void Stattool_ReadDefaultRecords__FP13tRecordBufferb(struct tRecordBuffer *Records, void * cheatones); // 0x8004AD90

extern void Stattool_GetRecords__FsP13tRecordBuffer(short nShowTrack, struct tRecordBuffer *TrackRecords); // 0x8004AE18

extern int Stattool_ReturnRecordLapTime__Fs(short nTrack); // 0x8004AE60

extern short Stattool_CheckForHumanCar__FP10Car_tStats(struct Car_tStats *dummyCars); // 0x8004AEC4

extern char * Stattool_GetAINameFromPersonality__F14tPersonalities(enum tPersonalities personality); // 0x8004AF4C


#endif
