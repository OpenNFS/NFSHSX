#ifndef AIH_BASICCOP_H
#define AIH_BASICCOP_H


extern struct AIHigh_BasicCop * __15AIHigh_BasicCopP8Car_tObji(struct AIHigh_BasicCop *this, struct Car_tObj *carObj, int copIndex); // 0x8005C164

extern void CheckSpikeBelt__15AIHigh_BasicCop(struct AIHigh_BasicCop *this); // 0x8005C1EC

extern int ShouldIPerformCutOffBlock__15AIHigh_BasicCopiP8Car_tObj(struct AIHigh_BasicCop *this, int chancePerSecond, struct Car_tObj *target); // 0x8005C2B4

extern void Blockade_AddRoadFlare__FP8coorddef(struct coorddef *pos); // 0x8005C414

extern void Blockade_AddObject__FiP8coorddefi(int slice, struct coorddef *pos, int objectID); // 0x8005C468

extern void PlacePointOnRoad__FiP8coorddef(int slice, struct coorddef *offset); // 0x8005C5E4

extern void SetupBlockadeElements__15AIHigh_BasicCopP10blockade_t(struct AIHigh_BasicCop *this, struct blockade_t *blockade); // 0x8005C790

extern void HandleBlockadeSpeech__15AIHigh_BasicCop(struct AIHigh_BasicCop *this); // 0x8005CA28


#endif
