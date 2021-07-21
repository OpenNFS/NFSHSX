#ifndef VIDEO_H
#define VIDEO_H


extern int VIDEO_create__Fiiiii(int width, int height, int fps, int streambuffersize, int memtype); // 0x80050CC8

extern void VIDEO_destroy__Fi(int handle); // 0x80050E40

extern void VIDEO_spoolfile__FiPc(int handle, char *fname); // 0x80050E98

extern void VIDEO_startplayback__Fi(int handle); // 0x80050EF4

extern void VIDEO_abortplayback__Fi(int handle); // 0x80050F54

extern enum VIDEOSTATE VIDEO_state__Fi(int handle); // 0x80050F98

extern int VIDEO_updateframexy__Fiii(int handle, int x, int y); // 0x80051040

extern void videoupdatetime__FP11VIDEOSTRUCT(struct VIDEOSTRUCT *vid); // 0x80051180

extern int videodecode__FP11VIDEOSTRUCTP14STREAMCHUNKHDRii(struct VIDEOSTRUCT *vid, struct STREAMCHUNKHDR *chunk, int x, int y); // 0x800511B0


#endif
