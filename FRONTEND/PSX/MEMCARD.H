#ifndef MEMCARD_H
#define MEMCARD_H


extern void MCRD_init(int fMultitap); // 0x8004F3E0

extern int iMCRD_InitCard(int card); // 0x8004F480

extern void MCRD_restore(); // 0x8004F4D8

extern void MCRD_getopts(struct MCRDOPTS_def *pOPT); // 0x8004F51C

extern void MCRD_setopts(struct MCRDOPTS_def *pOPT); // 0x8004F594

extern void MCRD_loadfile(int card, struct MCRDFILE_def *pFILE, int bNameHasProductCode); // 0x8004F6B8

extern int iMCRD_DoFileLoad(int card); // 0x8004F7A4

extern int MCRD_savefile(int card, struct MCRDFILE_def *pFILE); // 0x8004FA4C

extern int iMCRD_DoFileWrite(int card); // 0x8004FC88

extern int iMCRD_DoFileDelete(int card); // 0x8004FDEC

extern int MCRD_handlecardevents(int card); // 0x8004FE80

extern int MCRD_fileexists(int card, char *name); // 0x800501CC

extern struct CARDINFO_def * MCRD_getcard(int card); // 0x80050244

extern void iMCRD_timersub(); // 0x8005028C

extern int garyMemCardGrabBlocks(int card, int filenum); // 0x800502BC

extern int iMCRD_LoadCard(int card); // 0x80050344

extern int iMCRD_FormatCard(int card); // 0x80050440

extern int iMCRD_HandleError(int func, int opResult, int card); // 0x800504CC

extern int iMCRD_DefaultCBProc1(); // 0x800506E8

extern short ascii2sjis(unsigned char ascii_code); // 0x800506F0

extern unsigned char sjis2ascii(short sjis_code); // 0x80050810


#endif
