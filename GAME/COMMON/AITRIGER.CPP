#include "NFS4.H"
#include "AITRIGER.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Init__24AITrigger_TriggerManagerPc(struct AITrigger_TriggerManager *this /*$s3*/, char *rawTriggers /*$a1*/)
 // line 21, offset 0x8007286c
	/* begin block 1 */
		// Start line: 22
		// Start offset: 0x8007286C
		// Variables:
	// 		int *numTriggers; // $s2
	// 		char *currentTrigger; // $s1
	// 		int tLoop; // $s0
	/* end block 1 */
	// End offset: 0x8007292C
	// End Line: 65

void Init__24AITrigger_TriggerManagerPc(AITrigger_TriggerManager *this,char *rawTriggers)
{
  int iVar1;
  trigger_t **ppabVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 99;
  ppabVar2 = this->triggers_ + 0x61;
  this->numTriggers_ = 0;
  this->invNumTriggers_ = 0;
  do {
    ppabVar2[0x66] = (trigger_t *)0xfffff600;
    iVar3 = iVar3 + -1;
    ppabVar2 = ppabVar2 + -1;
  } while (-1 < iVar3);
  iVar3 = 8;
  ppabVar2 = this->triggers_ + 6;
  do {
    ppabVar2[0xca] = (trigger_t *)0x0;
    iVar3 = iVar3 + -1;
    ppabVar2 = ppabVar2 + -1;
  } while (-1 < iVar3);
  if (rawTriggers != (char *)0x0) {
    pcVar4 = rawTriggers + 4;
    iVar3 = 0;
    if (0 < *(int *)rawTriggers) {
      do {
        iVar1 = InsertTrigger__24AITrigger_TriggerManagerP9trigger_tb(this,(char)pcVar4,1);
        pcVar4 = pcVar4 + iVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)rawTriggers);
    }
    Sort__24AITrigger_TriggerManager(this);
    if (this->numTriggers_ != 0) {
      iVar3 = fixeddiv(0x10000,this->numTriggers_ << 0x10);
      this->invNumTriggers_ = iVar3;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ InsertTrigger__24AITrigger_TriggerManagerP9trigger_tb(struct AITrigger_TriggerManager *this /*$s2*/, union trigger_t *trigger /*$s1*/, unsigned int fromFile /*$s3*/)
 // line 73, offset 0x80072948
	/* begin block 1 */
		// Start line: 74
		// Start offset: 0x80072948
		// Variables:
	// 		int size; // $s0
	/* end block 1 */
	// End offset: 0x80072A14
	// End Line: 122

int InsertTrigger__24AITrigger_TriggerManagerP9trigger_tb( (AITrigger_TriggerManager *this,undefined trigger_t,uint fromFile)
{
  int iVar1;
  undefined3 in_register_00000015;
  trigger_t *pabVar2;
  int iVar3;
  
  pabVar2 = (trigger_t *)CONCAT31(in_register_00000015,trigger_t);
  iVar3 = 0;
  DescribeTrigger__24AITrigger_TriggerManagerP9trigger_t(this,trigger_t);
  iVar1 = *(int *)*pabVar2;
  if (iVar1 == 5) {
    if (fromFile != 0) {
      *(byte **)(*pabVar2 + 0x3c) = *pabVar2 + 0x40;
    }
    this->triggers_[this->numTriggers_] = pabVar2;
    iVar3 = *(int *)(*pabVar2 + 0x38) * 0x14 + 0x40;
    goto LAB_80072a14;
  }
  if (iVar1 == 2) {
LAB_800729f4:
    iVar3 = 0x14;
  }
  else {
    if (iVar1 < 3) {
      if (iVar1 == 1) goto LAB_800729f4;
    }
    else {
      if (iVar1 == 3) {
        iVar3 = 0x48;
      }
    }
  }
  this->triggers_[this->numTriggers_] = pabVar2;
LAB_80072a14:
  this->numTriggers_ = this->numTriggers_ + 1;
  return iVar3;


}




// decompiled code
// original method signature: 
// union trigger_t * /*$ra*/ GetNextTrigger__24AITrigger_TriggerManageri(struct AITrigger_TriggerManager *this /*$a0*/, int car /*$a1*/)
 // line 128, offset 0x80072a44
	/* begin block 1 */
		// Start line: 129
		// Start offset: 0x80072A44

		/* begin block 1.1 */
			// Start line: 135
			// Start offset: 0x80072A84
			// Variables:
		// 		struct AITrigger_TriggerManager *this; // $a0
		// 		int triggerNum; // $v1

			/* begin block 1.1.1 */
				// Start line: 135
				// Start offset: 0x80072A84
			/* end block 1.1.1 */
			// End offset: 0x80072AAC
			// End Line: 135
		/* end block 1.1 */
		// End offset: 0x80072AAC
		// End Line: 135
	/* end block 1 */
	// End offset: 0x80072AAC
	// End Line: 136

trigger_t * GetNextTrigger__24AITrigger_TriggerManageri(AITrigger_TriggerManager *this,int car)
{
  int iVar1;
  int *piVar2;
  
  if (this->numTriggers_ == 0) {
    return (trigger_t *)0x0;
  }
  piVar2 = &this->numTriggers_ + car;
  iVar1 = piVar2[0xca];
  piVar2[0xca] = iVar1 + 1;
  if (iVar1 + 1 == this->numTriggers_) {
    piVar2[0xca] = 0;
  }
  if (piVar2[0xca] < this->numTriggers_) {
    return this->triggers_[piVar2[0xca]];
  }
  return (trigger_t *)0x0;


}




// decompiled code
// original method signature: 
// union trigger_t * /*$ra*/ GetPrevTrigger__24AITrigger_TriggerManageri(struct AITrigger_TriggerManager *this /*$a0*/, int car /*$a1*/)
 // line 138, offset 0x80072ab4
	/* begin block 1 */
		// Start line: 139
		// Start offset: 0x80072AB4

		/* begin block 1.1 */
			// Start line: 145
			// Start offset: 0x80072AF4
			// Variables:
		// 		struct AITrigger_TriggerManager *this; // $a0
		// 		int triggerNum; // $v1

			/* begin block 1.1.1 */
				// Start line: 145
				// Start offset: 0x80072AF4
			/* end block 1.1.1 */
			// End offset: 0x80072B1C
			// End Line: 145
		/* end block 1.1 */
		// End offset: 0x80072B1C
		// End Line: 145
	/* end block 1 */
	// End offset: 0x80072B1C
	// End Line: 146

trigger_t * GetPrevTrigger__24AITrigger_TriggerManageri(AITrigger_TriggerManager *this,int car)
{
  int iVar1;
  int *piVar2;
  
  if (this->numTriggers_ == 0) {
    return (trigger_t *)0x0;
  }
  piVar2 = &this->numTriggers_ + car;
  iVar1 = piVar2[0xca];
  piVar2[0xca] = iVar1 + -1;
  if (iVar1 + -1 == -1) {
    piVar2[0xca] = this->numTriggers_ + -1;
  }
  if (piVar2[0xca] < this->numTriggers_) {
    return this->triggers_[piVar2[0xca]];
  }
  return (trigger_t *)0x0;


}




// decompiled code
// original method signature: 
// int /*$ra*/ CheckForTriggerAtSlice__24AITrigger_TriggerManagerii(struct AITrigger_TriggerManager *this /*$s0*/, int car /*$s3*/, int slice /*$s2*/)
 // line 149, offset 0x80072b24
	/* begin block 1 */
		// Start line: 150
		// Start offset: 0x80072B24
		// Variables:
	// 		int *lastTrigger; // $s1
	/* end block 1 */
	// End offset: 0x80072CBC
	// End Line: 188

int CheckForTriggerAtSlice__24AITrigger_TriggerManagerii( (AITrigger_TriggerManager *this,int car,int slice)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = -1;
  if (this->numTriggers_ != 0) {
    piVar3 = this->lastTriggerChecked_ + car;
    if ((*(int *)(*this->triggers_[*piVar3] + 4) < slice) && (1 < this->numTriggers_)) {
      do {
        if (*piVar3 == this->numTriggers_ + -1) break;
        GetNextTrigger__24AITrigger_TriggerManageri(this,car);
      } while (*(int *)(*this->triggers_[*piVar3] + 4) < slice);
    }
    else {
      iVar1 = *piVar3;
      if ((slice < *(int *)(*this->triggers_[iVar1] + 4)) && (1 < this->numTriggers_)) {
        do {
          if (iVar1 == 0) break;
          GetPrevTrigger__24AITrigger_TriggerManageri(this,car);
          iVar1 = *piVar3;
        } while (slice < *(int *)(*this->triggers_[iVar1] + 4));
      }
    }
    piVar2 = (int *)(&this->numTriggers_ + *piVar3)[2];
    iVar1 = -1;
    if (((piVar2[1] == slice) && (0xa00 < -(&this->numTriggers_ + *piVar3)[0x66])) && (*piVar2 != 2)
       ) {
      iVar1 = *piVar3;
    }
  }
  return iVar1;


}




// decompiled code
// original method signature: 
// union trigger_t * /*$ra*/ GetTrigger__24AITrigger_TriggerManageriPi(struct AITrigger_TriggerManager *this /*$a0*/, int trigger /*$a1*/, int *used /*$a2*/)
 // line 192, offset 0x80072cd8
	/* begin block 1 */
		// Start line: 193
		// Start offset: 0x80072CD8

		/* begin block 1.1 */
			// Start line: 201
			// Start offset: 0x80072D0C
			// Variables:
		// 		struct AITrigger_TriggerManager *this; // $a0
		// 		int triggerNum; // $a1

			/* begin block 1.1.1 */
				// Start line: 201
				// Start offset: 0x80072D0C
			/* end block 1.1.1 */
			// End offset: 0x80072D38
			// End Line: 201
		/* end block 1.1 */
		// End offset: 0x80072D38
		// End Line: 201
	/* end block 1 */
	// End offset: 0x80072D38
	// End Line: 203

trigger_t * GetTrigger__24AITrigger_TriggerManageriPi(AITrigger_TriggerManager *this,int trigger,int *used)
{
  trigger_t *pabVar1;
  
  if (-this->checkTime_[trigger] < 0xa01) {
    *used = 1;
  }
  else {
    *used = 0;
  }
  (&this->numTriggers_ + trigger)[0x66] = 0;
  pabVar1 = (trigger_t *)0x0;
  if (trigger < this->numTriggers_) {
    pabVar1 = (trigger_t *)(&this->numTriggers_ + trigger)[2];
  }
  return pabVar1;


}




// decompiled code
// original method signature: 
// int /*$ra*/ CheckForClosestTriggerOfType__24AITrigger_TriggerManageri11triggerTypei(struct AITrigger_TriggerManager *this /*$a0*/, int slice /*$a1*/, enum triggerType type /*$a2*/, int direction /*$a3*/)
 // line 206, offset 0x80072d40
	/* begin block 1 */
		// Start line: 207
		// Start offset: 0x80072D40
		// Variables:
	// 		int tLoop; // $t0
	// 		union trigger_t *prevTrigger; // $t1
	// 		union trigger_t *firstTrigger; // $t2
	// 		int prevTriggerIndex; // $t3
	// 		int firstTriggerIndex; // $t4

		/* begin block 1.1 */
			// Start line: 219
			// Start offset: 0x80072D6C

			/* begin block 1.1.1 */
				// Start line: 219
				// Start offset: 0x80072D74
				// Variables:
			// 		union trigger_t *thisTrigger; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80072DE0
			// End Line: 258
		/* end block 1.1 */
		// End offset: 0x80072DEC
		// End Line: 259
	/* end block 1 */
	// End offset: 0x80072E08
	// End Line: 274

int CheckForClosestTriggerOfType__24AITrigger_TriggerManageri11triggerTypei( (AITrigger_TriggerManager *this,int slice,triggerType type,int direction)
{
  int *piVar1;
  int iVar2;
  trigger_t *pabVar3;
  int iVar4;
  trigger_t *pabVar5;
  trigger_t *pabVar6;
  trigger_t *pabVar7;
  int iVar8;
  int iVar9;
  
  pabVar7 = (trigger_t *)0x0;
  piVar1 = &this->numTriggers_;
  iVar9 = -1;
  if (*piVar1 == 0) {
    return -1;
  }
  iVar4 = 0;
  pabVar5 = (trigger_t *)0x0;
  iVar2 = -1;
  do {
    if (*piVar1 <= iVar4) {
      if (((pabVar5 == (trigger_t *)0x0) || (-1 < direction)) && (iVar2 = iVar9, direction < 1)) {
        iVar2 = -1;
      }
      return iVar2;
    }
    pabVar3 = this->triggers_[0];
    pabVar6 = pabVar5;
    iVar8 = iVar2;
    if (*(triggerType *)*pabVar3 == type) {
      if (pabVar7 == (trigger_t *)0x0) {
        pabVar7 = pabVar3;
        iVar9 = iVar4;
      }
      if (*(int *)(*pabVar3 + 4) == slice) {
        return iVar4;
      }
      pabVar6 = pabVar3;
      iVar8 = iVar4;
      if (slice < *(int *)(*pabVar3 + 4)) {
        if (0 < direction) {
          return iVar4;
        }
        pabVar6 = pabVar3;
        iVar8 = iVar4;
        if ((direction < 0) && (pabVar6 = pabVar3, iVar8 = iVar4, pabVar5 != (trigger_t *)0x0)) {
          return iVar2;
        }
      }
    }
    this = (AITrigger_TriggerManager *)&this->invNumTriggers_;
    iVar4 = iVar4 + 1;
    pabVar5 = pabVar6;
    iVar2 = iVar8;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ DescribeTrigger__24AITrigger_TriggerManagerP9trigger_t(struct AITrigger_TriggerManager *this /*$a0*/, union trigger_t *trigger /*$a1*/)
 // line 278, offset 0x80072e10
	/* begin block 1 */
		// Start line: 279
		// Start offset: 0x80072E10
	/* end block 1 */
	// End offset: 0x80072E10
	// End Line: 285

void DescribeTrigger__24AITrigger_TriggerManagerP9trigger_t( (AITrigger_TriggerManager *this,undefined1 trigger_t)
{
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ AITrigger_Compare__FPCvT0(void *op1 /*$a0*/, void *op2 /*$a1*/)
 // line 289, offset 0x80072e18
	/* begin block 1 */
		// Start line: 290
		// Start offset: 0x80072E18
		// Variables:
	// 		union trigger_t *ta; // $v0
	// 		union trigger_t *tb; // $v1
	/* end block 1 */
	// End offset: 0x80072E18
	// End Line: 293

int AITrigger_Compare__FPCvT0(void *op1,void *op2)
{
  return *(int *)(*(int *)op1 + 4) - *(int *)(*(int *)op2 + 4);


}




// decompiled code
// original method signature: 
// void /*$ra*/ Sort__24AITrigger_TriggerManager(struct AITrigger_TriggerManager *this /*$a0*/)
 // line 298, offset 0x80072e30
	/* begin block 1 */
		// Start line: 299
		// Start offset: 0x80072E30
	/* end block 1 */
	// End offset: 0x80072E58
	// End Line: 304

void Sort__24AITrigger_TriggerManager(AITrigger_TriggerManager *this)
{
  if (this->numTriggers_ != 0) {
    qsort(this->triggers_,this->numTriggers_,4,AITrigger_Compare__FPCvT0);
  }
  return;


}





