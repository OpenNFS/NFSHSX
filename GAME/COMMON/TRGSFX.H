#ifndef TRGSFX_H
#define TRGSFX_H

extern void TrgSfx_AddEnviroEffect__FiiP8coorddefT2(int obj, int type, struct coorddef *emitterpt, struct coorddef *vec); // 0x800BB068

extern void TrgSfx_AddCarSfx__FiP8coorddefiT1(int car, struct coorddef *skidpt, int type, struct coorddef *vec); // 0x800BB0D0

extern void TrgSfx_AddCarWheelSfx__FiiP8coorddefiT2i(int car, int wheel, struct coorddef *skidpt, int type, struct coorddef *vec, int delay); // 0x800BB13C

extern unsigned int TrgSfx_AddCarExtraCheck__Fii(int car, int wheel); // 0x800BB1EC

extern void TrgSfx_AddCarExtraSfx__FiiP8coorddefiT2iii(int car, int wheel, struct coorddef *skidpt, int type, struct coorddef *vec, int velY, int ground, int colour); // 0x800BB228

extern void TrgSfx_AddCarSplash__FiiP8coorddefiT2ii(int car, int wheel, struct coorddef *skidpt, int type, struct coorddef *vec, int delay, int velXZ); // 0x800BB2BC

extern void TrgSfx_CrashCar__FP8coorddef(struct coorddef *location); // 0x800BB370

extern void TrgSfx_AddSkidmark__FiiP8coorddefiiP8Car_tObji(int car, int wheel, struct coorddef *skidpt, int end, int intensity, struct Car_tObj *carObj, int type); // 0x800BB41C

extern void TrgSfx_InitTrgSfx__Fv(); // 0x800BB900

extern void TrgSfx_RestartTrgSfx__Fv(); // 0x800BB9D8

extern void TrgSfx_KillTrgSfx__Fv(); // 0x800BBA00

#endif
