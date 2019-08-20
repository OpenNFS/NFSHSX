#ifndef AUDIOCMN_H
#define AUDIOCMN_H

extern int AudioCmn_MusicLevel__Fi(int level); // 0x80076420

extern int AudioCmn_GetTrackRecordLapTime__Fv(); // 0x80076480

extern void AudioCmn_InitThunder__Fv(); // 0x80076490

extern void AudioCmn_PlayThunder__Fii(int intensity, int azimuth); // 0x800764A4

extern void AudioCmn_UpdateThunder__Fv(); // 0x800764D0

extern void AudioCmn_InitAsyncSfx__Fv(); // 0x8007657C

extern void AudioCmn_RemoveAsyncSfx__Fi(int slot); // 0x800765B4

extern void AudioCmn_DeInitAsyncSfx__Fv(); // 0x8007663C

extern int AudioCmn_RemoveOldestAsyncSfx__Fi(int bank); // 0x80076674

extern void AudioCmn_LoadAsyncSfx__FiiPvi(int bank, int patch, void *pbank, int size); // 0x8007675C

extern int AudioCmn_GetAsyncSfx__Fiib(int bank, int patch, void * checkonly); // 0x80076900

extern void AudioCmn_Init__Fv(); // 0x80076A74

extern void AudioCmn_Reset__Fv(); // 0x80076BEC

extern void AudioCmn_DeInit__Fv(); // 0x80076F44

extern void AudioCmn_SetLevels__Fv(); // 0x8007701C

extern int AudioCmn_GetTimePhrase__Fi(int time); // 0x8007706C

extern void AudioCmn_CheckState__FP8Car_tObj(struct Car_tObj *car); // 0x800770BC

extern void AudioCmn_LoadFESamples__Fv(); // 0x80077738

extern void AudioCmn_LoadGameSamples__Fv(); // 0x8007777C

extern void AudioCmn_InitChannelArray__Fv(); // 0x800778B0

extern int scaleFrequency__Fiii(int sndPlayer, int iSFXnum, int tweakedForce); // 0x800778E8

extern int ChooseImpactSample__Fi6s_typeT1(int force, enum s_type surface1, enum s_type surface2); // 0x800779B4

extern int ChooseLoopedSample__F6s_typeT0(enum s_type surface1, enum s_type surface2); // 0x80077C94

extern void AudioCmn_SFX__Fi6s_typeT1iii(int sndPlayer, enum s_type surface1, enum s_type surface2, int tweakedForce, int Distsq, int azimuth); // 0x80077D50

extern void freeVoiceChannel__Fi(int sndPlayer); // 0x800780D0

extern int AudioCmn_PlayDoppleredSound__Fiiiiii(int bhandle, int patchNum, int azimuth, int vol, int bend, int doppler); // 0x80078140

extern int AudioCmn_PlaySound__Fiiiii(int bhandle, int patchNum, int azimuth, int vol, int bend); // 0x800783A0

extern int AudioCmn_PlaySFX__Fiiiiii(int sndPlayer, int iSFXnum, int iFreqIn, int iDopplerIn, int iAmpIn, int azimuth); // 0x800783CC

extern void AudioCmn_SoundCar__FP8Car_tObjiiiiiii(struct Car_tObj *car, int dst, int iFreqIn, int doppler, int azimuth, int trackazim, int relvel, int cardir); // 0x800788BC

extern void AudioCmn_TrafficSFX__Fiiiiiiii(int iChan, int iSFXnum, int freq, int doppler, int dst, int azimuth, int relvel, int dir); // 0x80079104

extern void AudioCmn_TrafficSkidSFX__Fi6s_typeT1iii(int sndPlayer, enum s_type surface1, enum s_type surface2, int force, int Distsq, int azimuth); // 0x80079390

extern void AudioCmn_PlayerHornOn__Fiiiii(int carIndex, int Distsq, int iFreqIn, int azimuth, int doppler); // 0x80079444

extern int AudioCmn_PlayerHornOff__Fi(int carIndex); // 0x80079548

extern void AudioCmn_PlayFESFX__Fi(int SFXnum); // 0x80079604

extern void AudioCmn_PlayFESFXVol__Fii(int SFXnum, int vol); // 0x80079624

extern void AudioCmn_PlayWrongWaySFX__Fv(); // 0x800796AC

extern void AudioCmn_PlayPauseSound__Fi(int patch); // 0x800796E4

extern void quickSirenOn__Fi(int sirennum); // 0x8007971C

extern void SuperCopSirenOn__Fi(int sirennum); // 0x80079790

extern void SirenOn__Fii(int sirennum, int supercop); // 0x800797F8

extern void SirenOff__Fi(int sirennum); // 0x800798A0

extern void UpdateSiren__Fiiiii(int sirennum, int amp, int dop, int azimuth, int supercop); // 0x8007995C

extern void AudioCmn_Pause__Fv(); // 0x80079B60

extern void AudioCmn_UnPause__Fv(); // 0x80079C18

extern void AudioCmn_UnPauseAndQuit__Fv(); // 0x80079CA4

extern void AudioCmn_UnPauseAndRestart__Fv(); // 0x80079D8C

extern void AudioCmn_InitReverb__Fv(); // 0x80079E88

extern void AudioCmn_ReverbOff__Fv(); // 0x80079ECC

#endif
