#ifndef FETV_H
#define FETV_H

extern void DrawTVLines__FR9tTVConfig(struct tTVConfig *tv); // 0x80021FF8

extern void DrawTV__FR9tTVConfig(struct tTVConfig *tv); // 0x8002234C

extern void InitTV__FR9tTVConfigP18tTexture_ShapeInfos(struct tTVConfig *tv, struct tTexture_ShapeInfo *textures, short index); // 0x80023008

extern void TurnOffTV__FR9tTVConfig(struct tTVConfig *tv); // 0x80023218

extern void TurnOnTV__FR9tTVConfig(struct tTVConfig *tv); // 0x80023228

#endif
