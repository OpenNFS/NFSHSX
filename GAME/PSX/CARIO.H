#ifndef CARIO_H
#define CARIO_H


extern void CarIO_StartUp__Fv(); // 0x800BBF10

extern void CarIO_CleanUp__Fv(); // 0x800BBF7C

extern void CarIO_ReStart__Fv(); // 0x800BBFA4

extern void CarIO_CopyFromShape__FPsT0iiii(short *source, short *dest, int w, int h, int x, int y); // 0x800BBFF0

extern void CarIO_CopyToShape__FPsT0i(short *source, short *dest, int mirror); // 0x800BC1B4

extern void CarIO_CreateLicense__FPcii(char *text, int carType, int player); // 0x800BC25C

extern void CarIO_CleanUpLicense__Fi(int player); // 0x800BC5F0

extern void CarIO_LicenseCheck__FiPiT1P8Car_tObji(int reload, int *license_vx, int *license_vy, struct Car_tObj *carObj, int plate); // 0x800BC668

extern void CarIO_ReadInCarTextureData__FPcP8Car_tObjii(char *shpfile, struct Car_tObj *carObj, int reload, int player); // 0x800BC704

extern void CarIO_UpdateCarTextureData__FPcP8Car_tObji(char *shpfile, struct Car_tObj *carObj, int player); // 0x800BCEB0

extern void CarIO_ReleaseCarCluts__FP8Car_tObj(struct Car_tObj *carObj); // 0x800BD358


#endif
