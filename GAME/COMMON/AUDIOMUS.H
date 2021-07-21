#ifndef AUDIOMUS_H
#define AUDIOMUS_H


extern void AudioMus_RefreshStatus__Fv(); // 0x80079EF4

extern int AudioMus_Threshold__Fv(); // 0x80079F58

extern int AudioMus_Buffered__Fv(); // 0x80079FDC

extern struct AudioMus_tCurrentSong * AudioMus_GetCurrentSong__Fv(); // 0x8007A028

extern void AudioMus_SwitchSong__Fv(); // 0x8007A0E4

extern void AudioMus_Fail__Fi(int errorcode); // 0x8007A1DC

extern void AudioMus_QueueRequestedSong__Fv(); // 0x8007A258

extern void AudioMus_SetEntry__FP19AudioMus_tSongEntry(struct AudioMus_tSongEntry *info); // 0x8007A308

extern void AudioMus_SetCurrentSongInfo__Fv(); // 0x8007A390

extern int AudioMus_Server__Fii(int mode, int ticks); // 0x8007A3D0

extern struct AudioMus_tSongList * AudioMus_GetSongList__FPci(char *pattern, int memtype); // 0x8007A880

extern void AudioMus_InitGlobals__Fv(); // 0x8007AA54

extern void AudioMus_InitDriverGlobals__Fv(); // 0x8007AA78

extern void AudioMus_DriverStartUp__Fii(int buffersize, int spusize); // 0x8007AAD4

extern void AudioMus_SysStartUp__FiiPc(int buffersize, int spusize, char *songs); // 0x8007AC18

extern void AudioMus_DriverCleanUp__Fv(); // 0x8007AD10

extern void AudioMus_SysCleanUp__Fv(); // 0x8007AD8C

extern void AudioMus_StopSong__Fi(int fadeticks); // 0x8007AE04

extern void AudioMus_BuildPlayList__FiPi(int numplaylistsongs, int *playlist); // 0x8007AED8

extern void AudioMus_BuildPattern__FPc(char *pattern); // 0x8007AF60

extern int AudioMus_PlaySong__FPc(char *pattern); // 0x8007B030

extern void AudioMus_Volume__Fi(int volume); // 0x8007B2B0

extern void AudioMus_AutoVolume__Fii(int fadeticks, int volume); // 0x8007B46C


#endif
