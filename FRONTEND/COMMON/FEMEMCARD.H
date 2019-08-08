#ifndef FEMEMCARD_H
#define FEMEMCARD_H

extern void ChecksumData__FP12tMemCardData(struct tMemCardData *memCardData); // 0x800342A0

extern unsigned int VerifySuccessfulRead__FP12tMemCardData(struct tMemCardData *memCardData); // 0x80034318

extern void MakeWayForMemoryCard__Fv(); // 0x800343F0

extern void BringThatBeatBack__Fv(); // 0x80034414

extern int Confirm__Fii(int Text, int yesText); // 0x80034438

extern int OverwriteConfirm__Fv(); // 0x800345EC

extern int OverwriteAlwaysYes__Fv(); // 0x80034618

extern int FormatConfirm__Fv(); // 0x80034620

extern void LoadingProc__Fv(); // 0x8003464C

extern void LoadingRedrawProc__Fv(); // 0x80034654

extern void SavingProc__Fv(); // 0x8003467C

extern void Init_Memcard__FbT0(unsigned int redraw, unsigned int pinkslips); // 0x800346A4

extern void DeInit_Memcard__Fv(); // 0x80034800

extern void Init_MemcardFile__FR12MCRDFILE_defsb(struct MCRDFILE_def *memCardFile, short cardnum, unsigned int notitle); // 0x800348A0

extern unsigned int SaveGame__Fs(short player); // 0x80034988

extern short LoadGame__FsbT1(short player, unsigned int PinkSlips, unsigned int WithDialogs); // 0x80034E18

extern enum PinkSlipsErrorCode SavePinkSlipsCars__Fss(short player, short withoutCarInGarageNumber); // 0x800353F0

extern enum PinkSlipsErrorCode SavePinkSlipsCarsWithErrorDialogs__Fsss(short player, short WillLoseCar, short withoutCarInGarageNumber); // 0x80035778

#endif
