#ifndef FORCE_H
#define FORCE_H

extern void Force_Vbl__Fv(); // 0x800CA998

extern void Force_Update__FP8Car_tObj(struct Car_tObj *car); // 0x800CABC0

extern void Force_StartUp__Fv(); // 0x800CB018

extern void Force_Disable__Fv(); // 0x800CB0E4

extern int Force_IsForceOn__FP8Car_tObj(struct Car_tObj *car); // 0x800CB158

extern void Force_Pause__Fv(); // 0x800CB1B4

extern void Force_UnPause__Fv(); // 0x800CB1F4

extern void Force_HitSign__FP8Car_tObj(struct Car_tObj *car); // 0x800CB1FC

extern void Force_HitWall__Fi(int impulse); // 0x800CB204

#endif
