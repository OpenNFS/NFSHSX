#ifndef SCREENTROPHYROOM_H
#define SCREENTROPHYROOM_H

extern struct tScreenTrophyRoom * __17tScreenTrophyRoom(struct tScreenTrophyRoom *this); // 0x80040570

extern void _._17tScreenTrophyRoom(struct tScreenTrophyRoom *this, int __in_chrg); // 0x800405B0

extern void GetShapeInfo__17tScreenTrophyRoomRsT1PPcT3(struct tScreenTrophyRoom *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x800405D8

extern void ProcessInput__17tScreenTrophyRoom7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenTrophyRoom *this, enum tPlayer fromPlayer, enum tInputKeyType *keyval, struct tMenuCommand *command); // 0x80040698

extern void PreLoad__17tScreenTrophyRoom(struct tScreenTrophyRoom *this); // 0x800408A8

extern void Initialize__17tScreenTrophyRoom(struct tScreenTrophyRoom *this); // 0x80040910

extern void Cleanup__17tScreenTrophyRoom(struct tScreenTrophyRoom *this); // 0x80040AE8

extern void DrawBackground__17tScreenTrophyRoom(struct tScreenTrophyRoom *this); // 0x80040B18

extern void LoadTrophy__17tScreenTrophyRoom(struct tScreenTrophyRoom *this); // 0x80040F2C

#endif
