#ifndef FETOURN_H
#define FETOURN_H


extern void Initialize__18tTournamentManager(struct tTournamentManager *this); // 0x80032228

extern void LoadDescription__18tTournamentManager(struct tTournamentManager *this); // 0x800322FC

extern void ReleaseDescription__18tTournamentManager(struct tTournamentManager *this); // 0x80032548

extern void UpdateTrackList__18tTournamentManagerss(struct tTournamentManager *this, short tier, short tournament); // 0x80032584

extern short * GetTrackList__18tTournamentManagerss(struct tTournamentManager *this, short tier, short tournament); // 0x80032654

extern void GetTrackToRace__18tTournamentManagerR10tTrackInfo(struct tTournamentManager *this, struct tTrackInfo *track); // 0x8003268C

extern void StartNewTournament__18tTournamentManagerUcUc(struct tTournamentManager *this, unsigned char tier, unsigned char tournament); // 0x80032784

extern short IsTournamentFinished__18tTournamentManager(struct tTournamentManager *this); // 0x800329BC

extern int tournPointsCompare__FPcT0(char *p1, char *p2); // 0x80032A50

extern void UpdateTournFinishMoney__18tTournamentManager(struct tTournamentManager *this); // 0x80032ADC

extern void UpdateTrackFinishMoney__18tTournamentManager(struct tTournamentManager *this); // 0x80032C0C

extern void CalcTrackFinishDamageBill__18tTournamentManagerbRlT2(struct tTournamentManager *this, void * recalculate, long *bill, long *bonus); // 0x80032C6C

extern void UpdateTrackFinishPoints__18tTournamentManager(struct tTournamentManager *this); // 0x80032E30

extern short AdvanceToNextTrack__18tTournamentManager(struct tTournamentManager *this); // 0x80033048

extern short GetLastTrackRaced__18tTournamentManager(struct tTournamentManager *this); // 0x8003348C

extern void SaveTournament__18tTournamentManagerR15tSaveTournament(struct tTournamentManager *this, struct tSaveTournament *save); // 0x800334FC

extern void LoadTournament__18tTournamentManagerR15tSaveTournament(struct tTournamentManager *this, struct tSaveTournament *load); // 0x80033544

extern short GetNumCompetitors__18tTournamentManager(struct tTournamentManager *this); // 0x8003358C

extern void UpdateCarLineup__18tTournamentManager(struct tTournamentManager *this); // 0x800335D8

extern long GetTrackFinishPrize__18tTournamentManagers(struct tTournamentManager *this, short position); // 0x80033688

extern long GetTournamentFinishPrize__18tTournamentManagers(struct tTournamentManager *this, short position); // 0x80033860

extern void GetAwardInformation__18tTournamentManagerR17tAwardInformation(struct tTournamentManager *this, struct tAwardInformation *info); // 0x800338D4

extern void UpdateAwardInformation__18tTournamentManager(struct tTournamentManager *this); // 0x80033914

extern short TournPointTotal__18tTournamentManagerPs(struct tTournamentManager *this, short *p); // 0x80033A8C

extern short PlayerRanking__18tTournamentManagers(struct tTournamentManager *this, short pos); // 0x80033AA8

extern void CalcTierFinishPrize__18tTournamentManager(struct tTournamentManager *this); // 0x80033B38

extern void GetTrophyName__18tTournamentManagerP12tTourneyInfo11tTrophySizePci(struct tTournamentManager *this, struct tTourneyInfo *tourn, enum tTrophySize size, char *buffer, int place); // 0x80033B64

extern void * ValidCar__18tTournamentManagerR8tCarInfo(struct tTournamentManager *this, struct tCarInfo *carInfo); // 0x80033C24

extern struct tListIteratorTournament * __23tListIteratorTournamentPcP18tTournamentManager(struct tListIteratorTournament *this, char *valPtr, struct tTournamentManager *tournManager); // 0x80033D9C

extern void _._23tListIteratorTournament(struct tListIteratorTournament *this, int __in_chrg); // 0x80033DEC

extern char Value__23tListIteratorTournament7tPlayer(struct tListIteratorTournament *this); // 0x80033E14

extern short TextValue__23tListIteratorTournament7tPlayer(struct tListIteratorTournament *this); // 0x80033E28

extern void Increment__23tListIteratorTournament7tPlayer(struct tListIteratorTournament *this); // 0x80033E80

extern void Decrement__23tListIteratorTournament7tPlayer(struct tListIteratorTournament *this); // 0x80033F20

extern void * ValidTournament__23tListIteratorTournamentc(struct tListIteratorTournament *this, char tourn); // 0x80033FB0


#endif
