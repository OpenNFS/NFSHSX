#ifndef AUDIOTRK_H
#define AUDIOTRK_H


extern void AudioTrk_Reset__Fv(); // 0x8007C614

extern void AudioTrk_StartUp__Fv(); // 0x8007C6F4

extern void AudioTrk_AddCustomObject__FP9AudioElemiP8coorddefiP8Car_tObji(struct AudioElem *se, int tck, struct coorddef *vel, int fade, struct Car_tObj *car, int trkazi); // 0x8007C750

extern void AudioTrk_SoundTrack__FP8Car_tObji(struct Car_tObj *car, int trkazi); // 0x8007CDC4

extern int AudioTrk_PreLoad__Fv(); // 0x8007D35C

extern void AudioTrk_CleanUp__Fv(); // 0x8007D52C


#endif
