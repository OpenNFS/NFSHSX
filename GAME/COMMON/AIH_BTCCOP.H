#ifndef AIH_BTCCOP_H
#define AIH_BTCCOP_H


extern struct AIHigh_BTC_Cop * __14AIHigh_BTC_CopP8Car_tObji(struct AIHigh_BTC_Cop *this, struct Car_tObj *carObj, int copIndex); // 0x8005CB6C

extern void AssignToPlayer__14AIHigh_BTC_CopP15AIHigh_BTC_Perp(struct AIHigh_BTC_Cop *this, struct AIHigh_BTC_Perp *target); // 0x8005CBAC

extern int GetCheckChasePosition__14AIHigh_BTC_CopP8coorddef(struct AIHigh_BTC_Cop *this, struct coorddef *pos); // 0x8005CC1C

extern int CheckForNewTarget__14AIHigh_BTC_Cop(struct AIHigh_BTC_Cop *this); // 0x8005CCB8

extern void StartArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp(struct AIHigh_BTC_Cop *this, struct AIHigh_BTC_Perp *arrestMe); // 0x8005CE10

extern void FinishArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp(struct AIHigh_BTC_Cop *this, struct AIHigh_BTC_Perp *arrestMe); // 0x8005CE80

extern void FalseArrest__14AIHigh_BTC_CopP15AIHigh_BTC_Perp(struct AIHigh_BTC_Cop *this, struct AIHigh_BTC_Perp *cantArrestMe); // 0x8005CEE0

extern void FreezeAndEndChase__14AIHigh_BTC_Cop(struct AIHigh_BTC_Cop *this); // 0x8005CEFC

extern void HudOff__14AIHigh_BTC_Cop(struct AIHigh_BTC_Cop *this); // 0x8005CF04

extern struct AIHigh_BTC_HumanCop * __19AIHigh_BTC_HumanCopP8Car_tObji(struct AIHigh_BTC_HumanCop *this, struct Car_tObj *carObj, int copIndex); // 0x8005CF34

extern int FindRandomBarrierFreeArea__19AIHigh_BTC_HumanCopiii(struct AIHigh_BTC_HumanCop *this, int startSlice, int safetyZone, int randomDistance); // 0x8005D150

extern void ReleaseAndStartChase__19AIHigh_BTC_HumanCopP15AIHigh_BTC_Perp(struct AIHigh_BTC_HumanCop *this, struct AIHigh_BTC_Perp *newPerp); // 0x8005D320

extern void FreezeAndEndChase__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this); // 0x8005D390

extern void CheckConditionWithCop0__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this); // 0x8005D564

extern void NewStage__19AIHigh_BTC_HumanCopiii(struct AIHigh_BTC_HumanCop *this, int copSlice, int direction, int movement); // 0x8005D650

extern void UpdateAndCheckTimeLeft__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this); // 0x8005D9C0

extern void UpdateFreezeModeAndPullOverMode__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this); // 0x8005DAD4

extern void RequestWingman__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this); // 0x8005DBF8

extern void RequestBlockader__19AIHigh_BTC_HumanCopi(struct AIHigh_BTC_HumanCop *this, int spikeBeltRequest); // 0x8005DD14

extern int CheckForWingmanRequest__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this); // 0x8005DEEC

extern int CheckForBlockaderRequest__19AIHigh_BTC_HumanCopPi(struct AIHigh_BTC_HumanCop *this, int *spikeBeltRequest); // 0x8005DF10

extern void UpdateWingmanRole__19AIHigh_BTC_HumanCop12Wingman_Role(struct AIHigh_BTC_HumanCop *this, enum Wingman_Role currentRole); // 0x8005DF54

extern void ClearTrafficToPurgatory__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this); // 0x8005DFA0

extern void ResetClearTrafficToPurgatory__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this); // 0x8005DFF8

extern void SetDesiredSpeed__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this); // 0x8005E04C

extern void HighExecute__19AIHigh_BTC_HumanCop(struct AIHigh_BTC_HumanCop *this); // 0x8005E0AC

extern void HudOn__19AIHigh_BTC_HumanCopP15AIHigh_BTC_PerpiP8Car_tObj(struct AIHigh_BTC_HumanCop *this, struct AIHigh_BTC_Perp *arrestMe, int gameOver, struct Car_tObj *arrestingCop); // 0x8005E284

extern struct AIHigh_BTC_Wingman * __18AIHigh_BTC_WingmanP8Car_tObji(struct AIHigh_BTC_Wingman *this, struct Car_tObj *carObj, int copIndex); // 0x8005E2F0

extern void HighExecute__18AIHigh_BTC_Wingman(struct AIHigh_BTC_Wingman *this); // 0x8005E33C

extern int CheckForActivation__18AIHigh_BTC_Wingman(struct AIHigh_BTC_Wingman *this); // 0x8005EDC8

extern int UpdateFreezeModeAndPullOverMode__18AIHigh_BTC_Wingman(struct AIHigh_BTC_Wingman *this); // 0x8005EEF8

extern void SetupWingman__18AIHigh_BTC_WingmanP19AIHigh_BTC_HumanCop(struct AIHigh_BTC_Wingman *this, struct AIHigh_BTC_HumanCop *humanCop); // 0x8005EF38

extern void SetupBlockader__18AIHigh_BTC_WingmanP19AIHigh_BTC_HumanCopi(struct AIHigh_BTC_Wingman *this, struct AIHigh_BTC_HumanCop *humanCop, int spikeBeltRequest); // 0x8005F074


#endif
