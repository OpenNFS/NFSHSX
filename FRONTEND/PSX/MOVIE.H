#ifndef MOVIE_H
#define MOVIE_H


extern void Movie_Init__Fc(char movie); // 0x8004C608

extern void Movie_DeInit__Fv(); // 0x8004C7D8

extern void Movie_SetDecodeOffset__Fssss(short x0, short y0, short x1, short y1); // 0x8004C8B0

extern void Movie_Load__Fc(char movie); // 0x8004C984

extern int Movie_NextFrame__Fv(); // 0x8004CB30

extern void Movie_DownloadFrame__Fv(); // 0x8004CC64

extern void Movie_Stop__Fv(); // 0x8004CC74

extern void * Movie_Finished__Fv(); // 0x8004CC84

extern int Movie_Play__Fc(char movie); // 0x8004CCE4

extern int play_movie__Fc(char movie); // 0x8004CEF4

extern void strSetDefDecEnv__FP6DECENV(struct DECENV *dec); // 0x8004CF14

extern void strInit__FP6CdlLOCiPFe_vT2(struct CdlLOC *loc, int frame_size, TDRFuncPtr_strInit__FP6CdlLOCiPFe_vT22callback callback, TDRFuncPtr_strInit__FP6CdlLOCiPFe_vT23endcallback endcallback); // 0x8004CFA0

extern void strCallback__Fv(); // 0x8004D038

extern int strNextVlc__FP6DECENV(struct DECENV *dec); // 0x8004D334

extern unsigned long * strNext__FP6DECENV(struct DECENV *dec); // 0x8004D3D4

extern void strSync__FP6DECENVi(struct DECENV *dec); // 0x8004D5DC

extern void strKickCD__FP6CdlLOC(struct CdlLOC *loc); // 0x8004D68C


typedef void (*TDRFuncPtr_strInit__FP6CdlLOCiPFe_vT22callback)();

typedef void (*TDRFuncPtr_strInit__FP6CdlLOCiPFe_vT23endcallback)();




#endif
