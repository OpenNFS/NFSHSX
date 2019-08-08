#ifndef AIH_BTCPERP_H
#define AIH_BTCPERP_H

extern void ReleaseCops__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this); // 0x8005F6B4

extern void HandleCops__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this); // 0x8005F778

extern int IsFalseArrest__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this); // 0x8005F798

extern int CheckForControlsPressed__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this); // 0x8005F9B8

extern void HandlePullOver__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this); // 0x8005FA58

extern void NotifyCopsOfArrest__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this); // 0x8005FC30

extern void NotifyCopsOfArrestComplete__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this); // 0x8005FCE8

extern void NotifyCopsOfFalseArrest__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this); // 0x8005FDA0

extern void NotifyHumanCopsOfArrestHud__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this); // 0x8005FE58

extern void ClearForNewStage__15AIHigh_BTC_PerpP19AIHigh_BTC_HumanCop(struct AIHigh_BTC_Perp *this, struct AIHigh_BTC_HumanCop *chaserCop); // 0x8005FF10

extern struct AIHigh_BTC_HumanCop * CheckForActivation__15AIHigh_BTC_Perp(struct AIHigh_BTC_Perp *this); // 0x8005FF74

extern void NewStage__20AIHigh_BTC_HumanPerpP19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanPerp *this, struct AIHigh_BTC_HumanCop *chaserCop); // 0x8006007C

extern void HighExecute__20AIHigh_BTC_HumanPerp(struct AIHigh_BTC_HumanPerp *this); // 0x8006029C

extern struct AIHigh_BTC_AIPerp * __17AIHigh_BTC_AIPerpP8Car_tObj(struct AIHigh_BTC_AIPerp *this, struct Car_tObj *carObj); // 0x800602F4

extern void _._17AIHigh_BTC_AIPerp(struct AIHigh_BTC_AIPerp *this, int __in_chrg); // 0x8006037C

extern void AvoidCops__17AIHigh_BTC_AIPerp(struct AIHigh_BTC_AIPerp *this); // 0x800603CC

extern void CalculateTimeTillContact__17AIHigh_BTC_AIPerp(struct AIHigh_BTC_AIPerp *this); // 0x80060710

extern void FindClosestCop__17AIHigh_BTC_AIPerp(struct AIHigh_BTC_AIPerp *this); // 0x800607B4

extern void HighExecute__17AIHigh_BTC_AIPerp(struct AIHigh_BTC_AIPerp *this); // 0x800608B4

extern void NewStage__17AIHigh_BTC_AIPerpP19AIHigh_BTC_HumanCop(struct AIHigh_BTC_AIPerp *this, struct AIHigh_BTC_HumanCop *chaserCop); // 0x80060D74

#endif
