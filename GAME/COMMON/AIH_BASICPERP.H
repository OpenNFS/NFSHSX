#ifndef AIH_BASICPERP_H
#define AIH_BASICPERP_H


extern void CheckForCrimes__16AIHigh_BasicPerp(struct AIHigh_BasicPerp *this); // 0x8005B500

extern int CheckIfCaught__16AIHigh_BasicPerp(struct AIHigh_BasicPerp *this); // 0x8005B78C

extern void RemoveCloseCops__16AIHigh_BasicPerp(struct AIHigh_BasicPerp *this); // 0x8005BD7C

extern void RemoveChaser__16AIHigh_BasicPerpii7copType(struct AIHigh_BasicPerp *this, int copIndex, int carIndex, enum copType type); // 0x8005BECC

extern int AddChaser__16AIHigh_BasicPerpii7copType(struct AIHigh_BasicPerp *this, int copIndex, int carIndex, enum copType type); // 0x8005BF08

extern int CheckChaserPosition__16AIHigh_BasicPerpii(struct AIHigh_BasicPerp *this, int copIndex, int carIndex); // 0x8005BF5C

extern void Clear__16AIHigh_BasicPerp(struct AIHigh_BasicPerp *this); // 0x8005C0B8

extern struct AIHigh_BasicPerp * __16AIHigh_BasicPerpP8Car_tObj(struct AIHigh_BasicPerp *this, struct Car_tObj *carObj); // 0x8005C0F4


#endif
