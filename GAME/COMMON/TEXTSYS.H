#ifndef TEXTSYS_H
#define TEXTSYS_H


extern void TextSys_LoadWordsGeneric__FiPc(int language, char *path); // 0x800B9158

extern void TextSys_LoadInGame__Fi(int language); // 0x800B91DC

extern void TextSys_LoadWords__Fi(int language); // 0x800B9228

extern char * TextSys_Word__Fi(int wordnum); // 0x800B9250

extern int TextSys_WordFlags__Fi(int wordnum); // 0x800B9270

extern int TextSys_WordX__Fi(int wordnum); // 0x800B9290

extern int TextSys_WordY__Fi(int wordnum); // 0x800B92B0

extern void TextSys_UnloadWords__Fv(); // 0x800B92D0


#endif
