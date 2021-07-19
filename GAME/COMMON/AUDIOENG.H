#ifndef AUDIOENG_H
#define AUDIOENG_H


extern void AudioEng_Set__Fiiiiiiii(int player, int vol, int esp, int gas, int cam, int dop, int azi, int dir); // 0x8007B5A8

extern void AudioEng_Update__Fv(); // 0x8007B824

extern void AudioEng_LoadDef__FPcT0illPP13AudioEng_tDef(char *filename, char *name, int handle, long offset, long size, struct AudioEng_tDef **ed); // 0x8007BDDC

extern int AudioEng_StartUp__FiPc(int player, char *carname); // 0x8007BE54

extern void AudioEng_StartServer__Fv(); // 0x8007C434

extern void AudioEng_StopServer__Fv(); // 0x8007C458

extern void AudioEng_Pause__Fv(); // 0x8007C47C

extern void AudioEng_Resume__Fv(); // 0x8007C52C

extern void AudioEng_CleanUp__Fv(); // 0x8007C534


#endif
