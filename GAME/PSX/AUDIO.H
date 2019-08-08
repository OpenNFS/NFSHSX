#ifndef AUDIO_H
#define AUDIO_H

extern void Audio_InitDriver__Fii(int buffersize, int spusize); // 0x800BBB84

extern void Audio_DeInitDriver__Fv(); // 0x800BBC64

extern void Audio_CleanUp__Fv(); // 0x800BBCC0

extern void Audio_FECleanUp__Fv(); // 0x800BBD1C

extern int AudioCmn_AddBank__FPciT0i(char *filename, int size, char *pdata, int BankNum); // 0x800BBD64

extern int AudioCmn_LoadBank__FPci(char *filename, int BankNum); // 0x800BBE8C

#endif
