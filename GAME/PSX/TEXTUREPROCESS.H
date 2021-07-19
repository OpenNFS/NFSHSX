#ifndef TEXTUREPROCESS_H
#define TEXTUREPROCESS_H


extern int TextureProcess_TransColorCheck__FPci(char *data, int numentry); // 0x800E0884

extern void TextureProcess_ColorClut__FiiPciii(int level, int maxlevel, char *data, int numentry, int cx, int cy); // 0x800E08B8

extern int TextureProcess_DepthColorCluts__FPci(char *data, int numentry); // 0x800E0AC0

extern struct FogKey * Fog_CheckRange__FiP6FogKey(int currentslice, struct FogKey *fkey); // 0x800E0B98

extern struct FogKey * Fog_FindKey__FiP6FogKey(int currentslice, struct FogKey *fkey); // 0x800E0BEC

extern struct FogKey * Fog_AllocKey__Fv(); // 0x800E0C80

extern void Fog_AddKey__Fii(int slice, int distance); // 0x800E0CCC

extern void Fog_Update__Fi(int player); // 0x800E0D80

extern char * Fog_MakeTrackPathName__FPc(char *ext); // 0x800E0EC4

extern int Fog_ReadFogKeys__Fv(); // 0x800E0F14

extern void Fog_InitFogTriggers__Fv(); // 0x800E102C

extern void Fog_DeInitFogTriggers__Fv(); // 0x800E1110

extern void TextureProcess_Init__Fv(); // 0x800E1134

extern void CV_ProcessWorldColors_FINAL__FiP7CVECTORs(int constrast, struct CVECTOR *color, short brightness); // 0x800E1148

extern void CV_ColorTracks__Fiii(int track, int weather, int night); // 0x800E1308

extern void CV_InitColorVertices__Fv(); // 0x800E1510


#endif
