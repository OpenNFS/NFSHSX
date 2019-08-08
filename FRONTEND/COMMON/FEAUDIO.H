#ifndef FEAUDIO_H
#define FEAUDIO_H

extern int FEAudio_StartLoadPatch__FP10SPEECHINFO(struct SPEECHINFO *info); // 0x80015780

extern void Feaudio_StartPatch__FP10SPEECHINFO(struct SPEECHINFO *info); // 0x80015824

extern void FeAudio_systemtask__Fi(int x); // 0x80015948

extern short FeAudio_AsyncPlayCommentary__FPc(char *name); // 0x80015BCC

extern short FeAudio_AsyncPlaySpeech__Fii(int type, int index); // 0x80015CB8

extern char * FeAudio_StartBigfileRead__FPciiPi(char *fname, int offset, int length, int *vivHandle); // 0x80015D34

extern void FeAudio_LocateBigfile__FP9LUMPYHEADPcPiT2(struct LUMPYHEAD *bigfileHeader, char *name, int *offset, int *length); // 0x80015DCC

extern struct LUMPYHEAD * FeAudio_InitViv__FPc(char *fname); // 0x80015F24

extern void FeAudio_InitCommentary__Fii(int language); // 0x800160D8

extern void FeAudio_DeInitCommentary__Fv(); // 0x80016178

#endif
