#ifndef FEVIDEOWALL_H
#define FEVIDEOWALL_H


extern void Initialize__10tVideoWallP9tTVConfigP18tTexture_ShapeInfossPss(struct tVideoWall *this, struct tTVConfig *tvs, struct tTexture_ShapeInfo *shapes, short firstTV, int numTVs, short *tvOrdering, int flip_axis); // 0x80036790

extern void UpdateImages__10tVideoWall(struct tVideoWall *this); // 0x80036840

extern void SetAvailableText__10tVideoWallsss(struct tVideoWall *this, short textID, short x, short y); // 0x8003698C

extern void SetAvailableIcon__10tVideoWallssssP18tTexture_ShapeInfo(struct tVideoWall *this, short icon, short numFrames, short x, int y, struct tTexture_ShapeInfo *iconImages); // 0x800369A8

extern void SetOffset__10tVideoWallss(struct tVideoWall *this, short x, short y); // 0x800369C8

extern void SetAvailable__10tVideoWalls(struct tVideoWall *this, short avail); // 0x800369D4

extern void SetValid__10tVideoWalls(struct tVideoWall *this, short valid); // 0x800369DC

extern void UpdateTransition__10tVideoWall(struct tVideoWall *this); // 0x800369E4

extern void Draw__10tVideoWall(struct tVideoWall *this); // 0x80036BB4

extern void TurnOff__10tVideoWall(struct tVideoWall *this); // 0x80036E58

extern void TurnOffInstant__10tVideoWall(struct tVideoWall *this); // 0x80036E7C

extern void TurnOn__10tVideoWall(struct tVideoWall *this); // 0x80036EF8


#endif
