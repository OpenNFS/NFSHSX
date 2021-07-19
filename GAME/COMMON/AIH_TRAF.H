#ifndef AIH_TRAF_H
#define AIH_TRAF_H


extern struct Car_tObj * CheckForCops__14AIHigh_TrafficPi(struct AIHigh_Traffic *this, int *closestDistance); // 0x80065C8C

extern struct AIHigh_Cop * CopCheck__14AIHigh_TrafficPi(struct AIHigh_Traffic *this, int *blockade); // 0x80065D60

extern void HighExecute__14AIHigh_Traffic(struct AIHigh_Traffic *this); // 0x80065E6C

extern struct AIHigh_Traffic * __14AIHigh_TrafficP8Car_tObj(struct AIHigh_Traffic *this, struct Car_tObj *carObj); // 0x800666F8

extern union trigger_t * CheckForNewTriggers__14AIHigh_Traffic(struct AIHigh_Traffic *this); // 0x80066738


#endif
