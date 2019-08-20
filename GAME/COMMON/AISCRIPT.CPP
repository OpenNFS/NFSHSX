#include "NFS4.H"
#include "AISCRIPT.H"

// decompiled code
// original method signature: 
// void /*$ra*/ AIScript_Assign__FP10AIScript_tPA7_25AIScript_tReactionDetails(struct AIScript_t *script /*$a0*/, struct AIScript_tReactionDetails (*data)[7] /*$a1*/)
 // line 6, offset 0x8006f6f8
	/* begin block 1 */
		// Start line: 7
		// Start offset: 0x8006F6F8
	/* end block 1 */
	// End offset: 0x8006F6F8
	// End Line: 8

void AIScript_Assign__FP10AIScript_tPA7_25AIScript_tReactionDetails
               (AIScript_t *script,AIScript_tReactionDetails (*data) [7])

{
  *(AIScript_tReactionDetails (**) [7])script->data[0].reaction = data;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIScript_ClearLastReactionIndex__FP10AIScript_t(struct AIScript_t *script /*$a0*/)
 // line 11, offset 0x8006f700
	/* begin block 1 */
		// Start line: 12
		// Start offset: 0x8006F700

		/* begin block 1.1 */
			// Start line: 13
			// Start offset: 0x8006F700
			// Variables:
		// 		int initLoop; // $v0
		/* end block 1.1 */
		// End offset: 0x8006F71C
		// End Line: 16
	/* end block 1 */
	// End offset: 0x8006F71C
	// End Line: 16

void AIScript_ClearLastReactionIndex__FP10AIScript_t(AIScript_t *script)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 6;
  piVar2 = &script->reactionTicksLeft;
  do {
    piVar2[8] = -1;
    iVar1 = iVar1 + -1;
    piVar2 = piVar2 + -1;
  } while (-1 < iVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIScript_Startup__FP10AIScript_t(struct AIScript_t *script /*$s0*/)
 // line 18, offset 0x8006f724
	/* begin block 1 */
		// Start line: 19
		// Start offset: 0x8006F724
	/* end block 1 */
	// End offset: 0x8006F724
	// End Line: 19

void AIScript_Startup__FP10AIScript_t(AIScript_t *script)

{
  script->actionIndex = AISCRIPT_PLAYACTION_SENTINAL;
  script->detectAction = AISCRIPT_PLAYACTION_SENTINAL;
  script->reaction = AISCRIPT_AIREACTION_INIT;
  AIScript_ClearLastReactionIndex__FP10AIScript_t(script);
  *(undefined4 *)script->data[4].reaction = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIScript_Cleanup__Fv()
 // line 27, offset 0x8006f760
	/* begin block 1 */
		// Start line: 28
		// Start offset: 0x8006F760
	/* end block 1 */
	// End offset: 0x8006F760
	// End Line: 28

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AIScript_Cleanup__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIScript_SubmitPlayerAction__FP10AIScript_ti20AIScript_tPlayActioni(struct AIScript_t *script /*$s0*/, int humCarIndex /*$s3*/, enum AIScript_tPlayAction playerAction /*$s2*/, int currentTime64 /*$s1*/)
 // line 31, offset 0x8006f768
	/* begin block 1 */
		// Start line: 32
		// Start offset: 0x8006F768
	/* end block 1 */
	// End offset: 0x8006F7D4
	// End Line: 51

void AIScript_SubmitPlayerAction__FP10AIScript_ti20AIScript_tPlayActioni
               (AIScript_t *script,int humCarIndex,AIScript_tPlayAction playerAction,
               int currentTime64)

{
  AIScript_tPlayAction AVar1;
  
  if (*(int *)script->data[4].reaction < currentTime64 + -0x500) {
    AIScript_ClearLastReactionIndex__FP10AIScript_t(script);
  }
  AVar1 = script->actionIndex;
  *(int *)script->data[4].reaction = currentTime64;
  if ((AVar1 == AISCRIPT_PLAYACTION_SENTINAL) && ((int)playerAction < (int)script->detectAction)) {
    script->detectAction = playerAction;
    script->detectHumCarIndex = humCarIndex;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIScript_ProcessActionsAndReactions__FP10AIScript_ti(struct AIScript_t *script /*$a0*/, int elapsedTicks /*$a1*/)
 // line 55, offset 0x8006f7f0
	/* begin block 1 */
		// Start line: 56
		// Start offset: 0x8006F7F0
		// Variables:
	// 		struct AIScript_tReactionDetails (*scriptData)[7]; // $t0

		/* begin block 1.1 */
			// Start line: 59
			// Start offset: 0x8006F7F0

			/* begin block 1.1.1 */
				// Start line: 63
				// Start offset: 0x8006F814
				// Variables:
			// 		int go; // $t1
			// 		int *lastReactionIndex; // $a3
			// 		enum AIScript_tAIReaction newReaction; // $a2

				/* begin block 1.1.1.1 */
					// Start line: 84
					// Start offset: 0x8006F850
					// Variables:
				// 		int newTime; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x8006F910
				// End Line: 118
			/* end block 1.1.1 */
			// End offset: 0x8006F91C
			// End Line: 119
		/* end block 1.1 */
		// End offset: 0x8006F91C
		// End Line: 119
	/* end block 1 */
	// End offset: 0x8006F950
	// End Line: 144

void AIScript_ProcessActionsAndReactions__FP10AIScript_ti(AIScript_t *script,int elapsedTicks)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)script->data[0].reaction;
  if (script->actionIndex == AISCRIPT_PLAYACTION_SENTINAL) {
    bVar2 = true;
    if (script->detectAction != AISCRIPT_PLAYACTION_SENTINAL) {
      script->actionIndex = script->detectAction;
      script->detectAction = AISCRIPT_PLAYACTION_SENTINAL;
      script->reactionTicksLeft = 0;
      piVar4 = (int *)(script->data[0].halfSeconds + script->actionIndex * 4);
      script->actionHumCarIndex = script->detectHumCarIndex;
      iVar3 = *piVar4;
      script->reaction = AISCRIPT_AIREACTION_INIT;
      script->reactionIndex = iVar3;
      while (bVar2) {
        iVar3 = script->reactionIndex + 1;
        if ((iVar3 < 4) &&
           (1 << ((uint)*(byte *)(script->actionIndex * 8 + iVar5 + iVar3) & 0x1f) != 2)) {
          script->reactionIndex = iVar3;
          *piVar4 = *piVar4 + 1;
        }
        script->reaction =
             script->reaction |
             1 << ((uint)*(byte *)(script->actionIndex * 8 + iVar5 + script->reactionIndex) & 0x1f);
        bVar1 = *(byte *)(script->actionIndex * 8 + iVar5 + script->reactionIndex + 4);
        if (bVar1 != 0) {
          script->reactionTicksLeft = (uint)bVar1 << 4;
          bVar2 = false;
        }
        if (script->reaction == AISCRIPT_AIREACTION_INIT) {
          script->actionIndex = AISCRIPT_PLAYACTION_SENTINAL;
          script->detectAction = AISCRIPT_PLAYACTION_SENTINAL;
        }
      }
    }
    if (script->actionIndex == AISCRIPT_PLAYACTION_SENTINAL) {
      return;
    }
  }
  if (0 < script->reactionTicksLeft) {
    script->reactionTicksLeft = script->reactionTicksLeft - elapsedTicks;
    return;
  }
  script->actionIndex = AISCRIPT_PLAYACTION_SENTINAL;
  script->detectAction = AISCRIPT_PLAYACTION_SENTINAL;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction(struct AIScript_t *script /*$a0*/, enum AIScript_tAIReaction testReaction /*$a1*/)
 // line 149, offset 0x8006f958
	/* begin block 1 */
		// Start line: 150
		// Start offset: 0x8006F958
		// Variables:
	// 		int humCarIndex; // $a2
	/* end block 1 */
	// End offset: 0x8006F980
	// End Line: 154

int AIScript_DoReAction__FP10AIScript_t20AIScript_tAIReaction
              (AIScript_t *script,AIScript_tAIReaction testReaction)

{
  int iVar1;
  
  iVar1 = -1;
  if ((script->actionIndex != AISCRIPT_PLAYACTION_SENTINAL) &&
     ((testReaction & script->reaction) != 0)) {
    iVar1 = script->actionHumCarIndex;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIScript_GetReactionTicksLeft__FP10AIScript_t(struct AIScript_t *script /*$a0*/)
 // line 157, offset 0x8006f988
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x8006F988
	/* end block 1 */
	// End offset: 0x8006F99C
	// End Line: 160

int AIScript_GetReactionTicksLeft__FP10AIScript_t(AIScript_t *script)

{
  int iVar1;
  
  iVar1 = 0;
  if (script->actionIndex != AISCRIPT_PLAYACTION_SENTINAL) {
    iVar1 = script->reactionTicksLeft;
  }
  return iVar1;
}




