#ifndef AIH_COP_H
#define AIH_COP_H

extern struct AIHigh_Cop * __10AIHigh_CopP8Car_tObji(struct AIHigh_Cop *this, struct Car_tObj *carObj, int copIndex); // 0x80063C00

extern void SetTuningLevers__10AIHigh_Cop(struct AIHigh_Cop *this); // 0x80063C4C

extern void HighExecute__10AIHigh_Cop(struct AIHigh_Cop *this); // 0x80063CC4

extern int CheckForNeedyPlayers__10AIHigh_Cop(struct AIHigh_Cop *this); // 0x80065394

extern void CheckForWipeOut__10AIHigh_Cop(struct AIHigh_Cop *this); // 0x80065430

extern int CheckForNewTarget__10AIHigh_Cop(struct AIHigh_Cop *this); // 0x800655A8

extern void AssignToPlayer__10AIHigh_CopP13AIHigh_Player(struct AIHigh_Cop *this, struct AIHigh_Player *target); // 0x80065808

extern int GetCheckChasePosition__10AIHigh_CopP8coorddef(struct AIHigh_Cop *this, struct coorddef *pos); // 0x80065894

extern union trigger_t * CheckForNewTriggers__10AIHigh_Cop(struct AIHigh_Cop *this); // 0x80065944

#endif
