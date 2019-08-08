#ifndef COPSPEAK_H
#define COPSPEAK_H

extern void CopSpeak_RadioStaticInit__Fv(); // 0x800993DC

extern void CopSpeak_RadioStaticActive__Fi(int noise); // 0x80099418

extern void CopSpeak_RadioStaticSquelch__Fv(); // 0x80099588

extern void CopSpeak_InitRequest__FP17CopSpeak_tRequest(struct CopSpeak_tRequest *r); // 0x800995F0

extern void CopSpeak_SilenceCop__FP8Car_tObji(struct Car_tObj *car, int playerIndex); // 0x80099620

extern void CopSpeak_Alloc__FP17CopSpeak_tRequest(struct CopSpeak_tRequest *r); // 0x80099684

extern void CopSpeak_Free__FP17CopSpeak_tRequest(struct CopSpeak_tRequest *r); // 0x8009971C

extern void CopSpeak_ReadyNextRequest__Fv(); // 0x800997AC

extern void CopSpeak_Cancel__Fv(); // 0x80099A1C

extern void CopSpeak_Stop__Fv(); // 0x80099ABC

extern void CopSpeak_CleanUp__Fv(); // 0x80099ADC

extern void CopSpeak_InitVars__Fv(); // 0x80099B70

extern void CopSpeak_DirectRequest__FillP8Car_tObjPc(int filehandle, long offset, long size, struct Car_tObj *car, char *name); // 0x80099BEC

extern void CopSpeak_GenericBankRequest__FiP8Car_tObj(int patch, struct Car_tObj *car); // 0x80099C98

extern void CopSpeak_StartUp__Fv(); // 0x80099D3C

extern int CopSpeak_GetEnginePatch__Fii(int type, int timbre); // 0x8009A2CC

extern int CopSpeak_Play__FP17CopSpeak_tRequesti(struct CopSpeak_tRequest *r, int handle); // 0x8009A304

extern void CopSpeak_Skip__Fv(); // 0x8009A45C

extern int CopSpeak_Request__FP17CopSpeak_tRequest(struct CopSpeak_tRequest *r); // 0x8009A4C8

extern int CopSpeak_BankVolume__FP17CopSpeak_tRequest(struct CopSpeak_tRequest *r); // 0x8009A604

extern void CopSpeak_LoadNextRequest__Fv(); // 0x8009A634

extern void CopSpeak_PlayNextRequest__Fv(); // 0x8009A828

extern void CopSpeak_Flush__Fv(); // 0x8009A944

extern void CopSpeak_Server__Fv(); // 0x8009A994

extern int CopSpeak_SfxQueued__Fv(); // 0x8009AC60

extern void CopSpeak_ShowQueue__Fv(); // 0x8009ACCC

extern void CopSpeak_Debug__Fv(); // 0x8009AE9C

#endif
