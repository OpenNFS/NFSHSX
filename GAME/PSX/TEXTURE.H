#ifndef TEXTURE_H
#define TEXTURE_H

extern void Texture_InitPaletteSharing__Fv(); // 0x800DF5B4

extern void Texture_DeInitPaletteSharing__Fv(); // 0x800DF630

extern void Texture_ResetPaletteSharing__Fv(); // 0x800DF678

extern int Texture_CheckForSharedPalette__FiPcP12Draw_tPixMapi(int test, char *data, struct Draw_tPixMap *pmx, int bpp); // 0x800DF688

extern void Texture_AddSharedPalette__FPcP12Draw_tPixMapi(char *ptr_to_data, struct Draw_tPixMap *ptr_to_pmx, int bpp); // 0x800DF7BC

extern void Texture_InitClut__Fv(); // 0x800DF834

extern void Texture_GetClutId__FiPiT1(int bpp, int *xclut, int *yclut); // 0x800DF938

extern void Texture_MenuReleaseClutId__Fs(short id); // 0x800DF9A4

extern void Texture_ColorCarPalette__FPcT0i(char *from, char *to, int numentry); // 0x800DFA04

extern void Texture_CopyPalette__FPciii(char *data, int width, int x, int y); // 0x800DFA3C

extern void Texture_ProcessPaletteCopy__FP15Texture_pal8bitii(struct Texture_pal8bit *palCopy, int palStart, int palNum); // 0x800DFA9C

extern void Texture_LoadImage__FP4RECTPUl(struct RECT *imgrect, unsigned long *p); // 0x800DFB48

extern void Texture_Vramf__FP8shapetbliiii(struct shapetbl *shp, int x, int y, int clutx, int cluty); // 0x800DFB8C

extern void Texture_Vramcf__FP8shapetbliiii(struct shapetbl *shp, int x, int y, int clutx, int cluty); // 0x800DFD38

extern int Texture_GetTranslucencyMode__FP8shapetbl(struct shapetbl *shp); // 0x800DFEA0

extern void Texture_LoadPmx__FPcT0iiiiiP12Draw_tPixMap(char *f, char *n, int ctrl, int rx, int ry, int cx, int cy, struct Draw_tPixMap *pmx); // 0x800DFF18

extern void Texture_CloneUVPmx__FP12Draw_tPixMapiT0(struct Draw_tPixMap *pmx, int mode, struct Draw_tPixMap *rpmx); // 0x800E0358

extern void Texture_InitTrackTexture__Fv(); // 0x800E04B8

extern void Texture_InitMenuClut__Fv(); // 0x800E0510

extern void Texture_InitMenuTexture__Fv(); // 0x800E0610

extern void Texture_CleanupMenuTexture__Fv(); // 0x800E0638

extern void Texture_LoadMenuTexture__Fv(); // 0x800E0698

extern void Texture_KillTrackTexture__Fv(); // 0x800E084C

extern void Texture_KillMenuTexture__Fv(); // 0x800E0854

#endif
