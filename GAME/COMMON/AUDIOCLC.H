#ifndef AUDIOCLC_H
#define AUDIOCLC_H


extern void AudioClc_SndError__Fi(int shandle); // 0x80074730

extern void AudioClc_SetHorn__FP8Car_tObji(struct Car_tObj *car, int state); // 0x80074738

extern void AudioClc_HonkHorn__FP8Car_tObjiii(struct Car_tObj *car, int numBeeps, int ticksOn, int ticksOff); // 0x800747A8

extern void AudioClc_InitSource__FP16AudioClc_tSourceP8Car_tObj(struct AudioClc_tSource *s, struct Car_tObj *car); // 0x80074808

extern void AudioClc_StartUp__Fv(); // 0x80074838

extern int AudioClc_CalcDopplerShiftRatio__FP8coorddefT0(struct coorddef *objectPos, struct coorddef *objectVel); // 0x80074994

extern int AudioClc_CalcDistance__FP17DRender_tCalcViewP8coorddef(struct DRender_tCalcView *view, struct coorddef *object); // 0x80074B60

extern int AudioClc_CalcAzimuth__FP17DRender_tCalcViewP8coorddef(struct DRender_tCalcView *view, struct coorddef *object); // 0x80074BE8

extern int AudioClc_CalcCarDirection__FP17DRender_tCalcViewP8Car_tObj(struct DRender_tCalcView *view, struct Car_tObj *car); // 0x80074D50

extern int AudioClc_CalcTrackAzimuth__FP17DRender_tCalcViewP8Car_tObj(struct DRender_tCalcView *view, struct Car_tObj *car); // 0x80074E24

extern void AudioClc_SoundOpponentHorn__Fiiii(int closestIndex, int azimuth, int dop, int dsquare); // 0x80074F5C

extern void AudioClc_SilenceOpponentHorn__Fi(int closestIndex); // 0x80075008

extern void AudioClc_SoundCloseCar__Fii(int playerIndex, int closestIndex); // 0x80075028

extern void AudioClc_SoundPlayersCar__Fi(int playerIndex); // 0x80075508

extern void AudioClc_ResetClosest__FiP8Car_tObji(int closestIndex, struct Car_tObj *car, int playerIndex); // 0x80075C3C

extern void AudioClc_GetClosestCars__Fiii(int playerIndex, int closestIndex, int numclosest); // 0x80075D04

extern void AudioClc_SoundSpeech__Fv(); // 0x80076130

extern void AudioClc_SoundCars__Fv(); // 0x80076160


#endif
