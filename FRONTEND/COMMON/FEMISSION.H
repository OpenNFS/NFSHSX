#ifndef FEMISSION_H
#define FEMISSION_H


extern void Initialize__15tMissionManager(struct tMissionManager *this); // 0x80034060

extern void LoadDescription__15tMissionManagerb(struct tMissionManager *this, void * LoadHotPursuit); // 0x8003407C

extern void ReleaseDescription__15tMissionManager(struct tMissionManager *this); // 0x800341B8

extern short GetMissionStages__15tMissionManagerssPP10tStageInfo(struct tMissionManager *this, short tier, short mission, struct tStageInfo **pStages); // 0x800341F4

extern void GetMissionToRace__15tMissionManagerPP12tMissionInfo(struct tMissionManager *this, struct tMissionInfo **mission); // 0x8003425C


#endif
