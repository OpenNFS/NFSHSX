#ifndef AISCRIPT_H
#define AISCRIPT_H

extern void AIScript_Assign__FP10AIScript_tPA7_25AIScript_tReactionDetails(struct AIScript_t *script, struct AIScript_tReactionDetails *data[7]); // 0x8006F6F8

extern void AIScript_ClearLastReactionIndex__FP10AIScript_t(struct AIScript_t *script); // 0x8006F700

extern void AIScript_Startup__FP10AIScript_t(struct AIScript_t *script); // 0x8006F724

extern void AIScript_Cleanup__Fv(); // 0x8006F760

extern void AIScript_SubmitPlayerAction__FP10AIScript_ti20AIScript_tPlayActioni(struct AIScript_t *script, int humCarIndex, enum AIScript_tPlayAction playerAction, int currentTime64); // 0x8006F768

extern void AIScript_ProcessActionsAndReactions__FP10AIScript_ti(struct AIScript_t *script, int elapsedTicks); // 0x8006F7F0

extern int AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction(struct AIScript_t *script, enum AIScript_tAIReaction testReaction); // 0x8006F958

extern int AIScript_GetReactionTicksLeft__FP10AIScript_t(struct AIScript_t *script); // 0x8006F988

#endif
