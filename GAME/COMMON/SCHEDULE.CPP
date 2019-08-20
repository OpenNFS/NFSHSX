#include "NFS4.H"
#include "SCHEDULE.H"

// decompiled code
// original method signature: 
// int /*$ra*/ Sched_ExecuteCheck__FiiiiPiN24i(int staggered /*$t4*/, int module /*$a1*/, int distance /*$a2*/, int carId /*$a3*/, int *time /*stack 16*/, int *elapsedTime /*stack 20*/, int *iTime /*stack 24*/, int forceNoSimOptz /*stack 28*/)
 // line 55, offset 0x800b61bc
	/* begin block 1 */
		// Start line: 56
		// Start offset: 0x800B61BC
		// Variables:
	// 		int index; // $a0

		/* begin block 1.1 */
			// Start line: 56
			// Start offset: 0x800B61BC

			/* begin block 1.1.1 */
				// Start line: 61
				// Start offset: 0x800B61E4
				// Variables:
			// 		int distanceIndex; // $a2
			// 		int mask; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800B62BC
			// End Line: 76
		/* end block 1.1 */
		// End offset: 0x800B62E8
		// End Line: 84
	/* end block 1 */
	// End offset: 0x800B62E8
	// End Line: 84

int Sched_ExecuteCheck__FiiiiPiN24i
              (int staggered,int module,int distance,int carId,int *time,int *elapsedTime,int *iTime
              ,int forceNoSimOptz)

{
  uint uVar1;
  
  if (0xf < simGlobal.gameTicks) {
    if (distance < 0) {
      distance = distance + 0xf;
    }
    distance = distance >> 4;
    if (distance < 0) {
      distance = distance + 0xffff;
    }
    distance = distance >> 0x10;
    if (0x13 < distance) {
      distance = 0x13;
    }
    if (forceNoSimOptz != 0) {
      distance = 0;
    }
    uVar1 = (uint)(byte)(&Sched_gExecuteInfo)[distance + module * 0x14];
    *time = (&Sched_ExecuteTimes)[uVar1];
    *iTime = (&Sched_ExecuteiTimes)[uVar1];
    *elapsedTime = (&Sched_ExecuteElapsedTimes)[uVar1];
    return (uint)((((int)(simGlobal.gameTicks + ((uint)simGlobal.gameTicks >> 0x1f)) >> 1) +
                   carId * staggered & (&Sched_ExecuteMasks)[uVar1]) == (&Sched_ExecuteMasks)[uVar1]
                 );
  }
  *time = INT_8011dff4;
  *iTime = INT_8011e02c;
  *elapsedTime = INT_8011e010;
  return 1;
}



// decompiled code
// original method signature: 
// struct Sched_tSchedule * /*$ra*/ Sched_CreateNewSchedule__FPci(char *scheduleName /*$a0*/, int maxFunctions /*$s0*/)
 // line 89, offset 0x800b62f0
	/* begin block 1 */
		// Start line: 90
		// Start offset: 0x800B62F0
		// Variables:
	// 		int i; // $a0
	// 		struct Sched_tSchedule *newSchedule; // $a1
	/* end block 1 */
	// End offset: 0x800B634C
	// End Line: 110

Sched_tSchedule * Sched_CreateNewSchedule__FPci(char *scheduleName,int maxFunctions)

{
  Sched_tSchedule *pSVar1;
  Sched_tSchedule *pSVar2;
  int iVar3;
  
  pSVar1 = (Sched_tSchedule *)reservememadr(scheduleName,maxFunctions * 0x10 + 0x18,0);
  pSVar1->maxNumFunctions = maxFunctions;
  iVar3 = 0;
  pSVar1->numFunctions = 0;
  pSVar2 = pSVar1;
  if (0 < maxFunctions) {
    do {
      pSVar2->func[0].priority = 0x7ffe;
      pSVar2->func[0].function = (_func_1 *)0x0;
      iVar3 = iVar3 + 1;
      pSVar2 = (Sched_tSchedule *)&pSVar2->func[0].var1;
    } while (iVar3 < pSVar1->maxNumFunctions);
  }
  return pSVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sched_CleanUpSchedule__FP15Sched_tSchedule(struct Sched_tSchedule *schedule /*$a0*/)
 // line 113, offset 0x800b6360
	/* begin block 1 */
		// Start line: 114
		// Start offset: 0x800B6360
	/* end block 1 */
	// End offset: 0x800B6360
	// End Line: 114

void Sched_CleanUpSchedule__FP15Sched_tSchedule(Sched_tSchedule *schedule)

{
  purgememadr((int)schedule);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi(struct Sched_tSchedule *schedule /*$a0*/, void (*function)() /*$a1*/, void *var1 /*$a2*/, int priority /*$a3*/)
 // line 123, offset 0x800b6380
	/* begin block 1 */
		// Start line: 124
		// Start offset: 0x800B6380
		// Variables:
	// 		int i; // $t2
	// 		int j; // $t0
	// 		int n; // $t1
	/* end block 1 */
	// End offset: 0x800B641C
	// End Line: 154

void Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi
               (Sched_tSchedule *schedule,
               TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function function,
               void *var1,int priority)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = schedule->numFunctions + 1;
  schedule->numFunctions = iVar1;
  if (0 < iVar1) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar4 = iVar1;
      if (priority < *(int *)((int)&schedule->func[0].priority + iVar2)) {
        iVar1 = schedule->numFunctions + -1;
        if (iVar4 < iVar1) {
          piVar3 = &schedule->maxNumFunctions + iVar1 * 4;
          do {
            piVar3[2] = piVar3[2];
            piVar3[3] = piVar3[3];
            piVar3[4] = *piVar3;
            piVar3[5] = piVar3[1];
            iVar1 = iVar1 + -1;
            piVar3 = piVar3 + -4;
                    /* WARNING: ptrarith problems */
          } while (iVar4 < iVar1);
        }
        break;
      }
      iVar1 = iVar4 + 1;
      iVar2 = iVar1 * 0x10;
    } while (iVar1 < schedule->numFunctions);
  }
  piVar3 = &schedule->maxNumFunctions + iVar4 * 4;
  piVar3[2] = priority;
  *(TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function *)(piVar3 + 3) = function;
  *(void **)(piVar3 + 4) = var1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv(struct Sched_tSchedule *schedule /*$a0*/, void (*function)() /*$a1*/, void *var1 /*$a2*/)
 // line 160, offset 0x800b6434
	/* begin block 1 */
		// Start line: 161
		// Start offset: 0x800B6434
		// Variables:
	// 		int i; // $v1
	// 		int j; // $a1
	/* end block 1 */
	// End offset: 0x800B64F8
	// End Line: 184

void Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv
               (Sched_tSchedule *schedule,
               TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function function,
               void *var1)

{
  int iVar1;
  int *piVar2;
  Sched_tSchedule *pSVar3;
  int iVar4;
  
  iVar4 = schedule->numFunctions;
  if (iVar4 != 0) {
    iVar1 = 0;
    pSVar3 = schedule;
    if (0 < iVar4) {
      do {
        if ((pSVar3->func[0].function == (_func_1 *)function) && (pSVar3->func[0].var1 == var1)) {
          piVar2 = &schedule->maxNumFunctions + iVar1 * 4;
          if (iVar1 < iVar4 + -1) {
            do {
              piVar2[2] = piVar2[6];
              piVar2[3] = piVar2[7];
              piVar2[4] = piVar2[8];
              piVar2[5] = piVar2[9];
              iVar1 = iVar1 + 1;
              piVar2 = piVar2 + 4;
            } while (iVar1 < schedule->numFunctions + -1);
          }
          break;
        }
        iVar4 = schedule->numFunctions;
        iVar1 = iVar1 + 1;
        pSVar3 = (Sched_tSchedule *)&pSVar3->func[0].var1;
      } while (iVar1 < iVar4);
    }
    schedule->func[schedule->numFunctions].priority = 0x7ffe;
    schedule->numFunctions = schedule->numFunctions + -1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sched_Execute__FP15Sched_tSchedule(struct Sched_tSchedule *schedule /*$s2*/)
 // line 195, offset 0x800b6500
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x800B6500
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x800B655C
	// End Line: 207

void Sched_Execute__FP15Sched_tSchedule(Sched_tSchedule *schedule)

{
  _func_1 *p_Var1;
  Sched_tSchedule *pSVar2;
  int iVar3;
  
  iVar3 = 0;
  pSVar2 = schedule;
  if (0 < schedule->numFunctions) {
    do {
      p_Var1 = pSVar2->func[0].function;
      if (p_Var1 != (_func_1 *)0x0) {
        (*p_Var1)(pSVar2->func[0].var1);
      }
      iVar3 = iVar3 + 1;
      pSVar2 = (Sched_tSchedule *)&pSVar2->func[0].var1;
    } while (iVar3 < schedule->numFunctions);
  }
  return;
}




