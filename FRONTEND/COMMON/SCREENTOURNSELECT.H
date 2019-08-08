#ifndef SCREENTOURNSELECT_H
#define SCREENTOURNSELECT_H

extern struct tScreenTournSelect * __18tScreenTournSelect(struct tScreenTournSelect *this); // 0x8003F778

extern void _._18tScreenTournSelect(struct tScreenTournSelect *this, int __in_chrg); // 0x8003F7AC

extern void GetShapeInfo__18tScreenTournSelectRsT1PPcT3(struct tScreenTournSelect *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x8003F7D4

extern void Initialize__18tScreenTournSelect(struct tScreenTournSelect *this); // 0x8003F8A0

extern void Cleanup__18tScreenTournSelect(struct tScreenTournSelect *this); // 0x8003FAE8

extern void UpdateVideoWall__18tScreenTournSelectP12tTourneyInfo(struct tScreenTournSelect *this, struct tTourneyInfo *tourn); // 0x8003FB28

extern void DrawVideoWall__18tScreenTournSelect(struct tScreenTournSelect *this); // 0x8003FBCC

extern void DrawBackground__18tScreenTournSelect(struct tScreenTournSelect *this); // 0x8003FE5C

extern void DrawForeground__18tScreenTournSelect(struct tScreenTournSelect *this); // 0x800404D8

#endif
