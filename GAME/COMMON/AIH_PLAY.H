#ifndef AIH_PLAY_H
#define AIH_PLAY_H


extern int CheckIfABlockadeCanBeSetup__13AIHigh_Player(struct AIHigh_Player *this); // 0x80061400

extern void SetupBlockade__13AIHigh_Player(struct AIHigh_Player *this); // 0x80061784

extern void CheckForNewLevel__13AIHigh_Playeri(struct AIHigh_Player *this, int force); // 0x8006220C

extern void HandleSpeech__13AIHigh_Player(struct AIHigh_Player *this); // 0x800624EC

extern void MaintainAvailableCops__13AIHigh_Player(struct AIHigh_Player *this); // 0x80062638

extern struct AIHigh_Player * __13AIHigh_PlayerP8Car_tObj(struct AIHigh_Player *this, struct Car_tObj *carObj); // 0x800628C0

extern void HandleCops__13AIHigh_Player(struct AIHigh_Player *this); // 0x80062AC4

extern void CleanupBlockaders__13AIHigh_Playeri(struct AIHigh_Player *this, int forceClearAll); // 0x80062C64

extern void HandlePullOver__13AIHigh_Player(struct AIHigh_Player *this); // 0x80062D7C


#endif
