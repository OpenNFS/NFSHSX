#ifndef STATS_H
#define STATS_H

extern void Stats_DoPlayerGlue__Fv(); // 0x800B7F58

extern void Stats_ClearPosition__Fv(); // 0x800B8114

extern int Stats_GetPosition__FP8Car_tObj(struct Car_tObj *carObj); // 0x800B8154

extern int Stats_GetNumOpponents__Fv(); // 0x800B81A8

extern void Stats_TrackStats__FP8Car_tObj(struct Car_tObj *carObj); // 0x800B81FC

extern void Stats_ExtrapolateOpponentTimes__Fi(int type); // 0x800B8604

extern void Stats_TrackEndGame__Fv(); // 0x800B8DB8

#endif
