#ifndef FETEXTRENDER_H
#define FETEXTRENDER_H


extern void FETextRender_SetFont__Fi(int size); // 0x80020CD8

extern void FETextRender_FullTextRGB__FPcssics(char *sMenuText, short x, short y, int col, int size, int justify); // 0x80020D4C

extern void FETextRender_FullText__FPcss13tMenuTextType14tMenuTextStates(char *sMenuText, short x, short y, enum tMenuTextType textType, enum tMenuTextState textState, int justify); // 0x80020EC0

extern void FETextRender_FullTextFade__FiPcss13tMenuTextType14tMenuTextStates(int fade, char *sMenuText, short x, short y, enum tMenuTextType textType, enum tMenuTextState textState, int justify); // 0x80020F44

extern void FETextRender_MenuTextPositioned__Fsss14tMenuTextState13tMenuTextType(short index, short x, short y, enum tMenuTextState textState, enum tMenuTextType textType); // 0x80021014

extern void FETextRender_MenuTextFade__Fis14tMenuTextState13tMenuTextType(int fade, short index, enum tMenuTextState textState, enum tMenuTextType textType); // 0x800210B4

extern void FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType(short index, short x, short y, short justify, enum tMenuTextState state, enum tMenuTextType type); // 0x80021180

extern void FETextRender_MenuTextPositionedJustifyFade__Fissss14tMenuTextState13tMenuTextType(int fade, short index, short x, short y, int justify, enum tMenuTextState textState, enum tMenuTextType textType); // 0x800211D4

extern int FETextRender_WordWrapTextRGBJustify__FPcR4RECTiiib(char *str, struct RECT *r, int col, int justify, int size, void * JustGrabHeight); // 0x800212A4

extern void FETextRender_WordWrapTextRGB__FPcR4RECTi(char *str, struct RECT *r, int Col); // 0x80021718

extern void FETextRender_WordWrapTextFade__FiPcR4RECT14tMenuTextState13tMenuTextType(int fade, char *str, struct RECT *r, enum tMenuTextState textState, enum tMenuTextType textType); // 0x80021740

extern void FETextRender_WordWrapText__FPcR4RECT14tMenuTextState13tMenuTextType(char *str, struct RECT *r, enum tMenuTextState textState, enum tMenuTextType textType); // 0x800217E8

extern void FETextRender_WordWrapFade__FisR4RECT14tMenuTextState13tMenuTextType(int fade, short index, struct RECT *r, enum tMenuTextState state, enum tMenuTextType type); // 0x80021824

extern void FETextRender_WordWrap__FsR4RECT14tMenuTextState13tMenuTextType(short index, struct RECT *r, enum tMenuTextState textState, enum tMenuTextType textType); // 0x8002188C

extern int FETextRender_WordWrapHeight__FsPc(short width, char *str); // 0x800218C8

extern void FETextRender_Title__Fs(short index); // 0x80021914

extern void FETextRender_SetABR__Fib(int abr, void * trans); // 0x800219E8


#endif
