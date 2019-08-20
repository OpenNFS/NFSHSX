#ifndef FEMENUDEFS_H
#define FEMENUDEFS_H

extern void MenuExtended_SetOnePlayer__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002C0E0

extern void MenuExtended_SetTwoPlayer__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002C12C

extern void MenuExtended_SetTestDrive__FR12tMenuCommand(); // 0x8002C17C

extern void MenuExtended_SetSingleRace__FR12tMenuCommand(); // 0x8002C198

extern void MenuExtended_SetTournament__FR12tMenuCommand(); // 0x8002C1D8

extern void MenuExtended_SetSpecialEvent__FR12tMenuCommand(); // 0x8002C220

extern void MenuExtended_SetSoloRace__FR12tMenuCommand(); // 0x8002C268

extern void MenuExtended_GoToTwoPlayerSingleRace__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002C288

extern void MenuExtended_SetDuelRace__FR12tMenuCommand(); // 0x8002C39C

extern void MenuExtended_SetFullGrid__FR12tMenuCommand(); // 0x8002C3DC

extern int AskTheUserToSaveTheGame__Fv(); // 0x8002C41C

extern void MenuExtended_TransitionFromPostGameToMainMenu__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002C494

extern void MenuExtended_TransitionFromPostGameToMainMenuAndSaveGame__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002C4B0

extern void MenuExtended_GoToCarSelect__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002C4FC

extern void MenuExtended_GoToDealer__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002C890

extern void MenuExtended_GoToSeller__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002C8F8

extern void MenuExtended_GoToUpgrades__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002C960

extern void * GenericMenuSaveGame__Fi(int showdialog); // 0x8002C9A0

extern void * PinkSlipsPreSave__Fv(); // 0x8002CABC

extern void MenuExtended_GoToBestOfOne__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002CB84

extern void MenuExtended_GoToBestOfThree__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002CBE0

extern void MenuExtended_GoToBestOfFive__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002CC3C

extern void MenuExtended_GoToRace__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002CC98

extern void MenuExtended_GoTo2PlayerRace__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002CDF4

extern void MenuExtended_GoToTournTrackInfo__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002CF40

extern void MenuExtended_GoToSpecialEventTrackInfo__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002D0A8

extern void MenuExtended_EnterUserName__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002D214

extern void MenuExtended_GoToShowroom__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002D278

extern void MenuExtended_GoToDealerShowroom__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002D2B8

extern void MenuExtended_SetHPSoloRace__FR12tMenuCommand(); // 0x8002D2F8

extern void MenuExtended_SetHPDuelRace__FR12tMenuCommand(); // 0x8002D324

extern void MenuExtended_SetHotPursuit__FR12tMenuCommand(); // 0x8002D350

extern void MenuExtended_SellCar__FR12tMenuCommand(); // 0x8002D3A0

extern void MenuExtended_BuyCar__FR12tMenuCommand(); // 0x8002D4F8

extern void MenuExtended_PurchaseUpgrade__Fi(int upgradeNumber); // 0x8002D64C

extern void MenuExtended_PurchaseUpgrade1__FR12tMenuCommand(); // 0x8002D78C

extern void MenuExtended_PurchaseUpgrade2__FR12tMenuCommand(); // 0x8002D7AC

extern void MenuExtended_PurchaseUpgrade3__FR12tMenuCommand(); // 0x8002D7CC

extern void MenuExtended_SaveGame__FR12tMenuCommand(); // 0x8002D7EC

extern void GenericMenuLoadGame__Fi(int player); // 0x8002D83C

extern void MenuExtended_LoadGame__FR12tMenuCommand(); // 0x8002D8D0

extern void MenuExtended_TierFinished__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002D968

extern void * MenuExtended_DidUserWinBeTheCop__Fv(); // 0x8002D9E8

extern void MenuExtended_PostGameMenu__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002DB04

extern void MenuExtended_FinishedPlayer1GetName__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002DC04

extern void MenuExtended_FinishedPlayer2GetName__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002DD14

extern void MenuExtended_SetPinkSlips__FR12tMenuCommand(); // 0x8002DDB4

extern void MenuExtended_AwardPinkSlipsCar__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002DE74

extern void MenuExtended_GoToGarage__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002E09C

extern void MenuExtended_GoToTournTrophyRoom__FR12tMenuCommand(); // 0x8002E144

extern void MenuExtended_GoToSETrophyRoom__FR12tMenuCommand(); // 0x8002E150

extern void MenuExtended_SetBeginner__FR12tMenuCommand(); // 0x8002E160

extern void MenuExtended_SetIntermediate__FR12tMenuCommand(); // 0x8002E16C

extern void MenuExtended_SetExpert__FR12tMenuCommand(); // 0x8002E17C

extern void MenuExtended_ExitTourney__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002E18C

extern void MenuExtended_ExitPinkSlipsEarly__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002E21C

extern void MenuExtended_PinkSlipsContinue__FR12tMenuCommand(struct tMenuCommand *command); // 0x8002E34C

extern struct tGlobalMenuDefs * __15tGlobalMenuDefs(struct tGlobalMenuDefs *this); // 0x8002E3B8

extern void _._15tGlobalMenuDefs(struct tGlobalMenuDefs *this, int __in_chrg); // 0x800315D4

#endif
