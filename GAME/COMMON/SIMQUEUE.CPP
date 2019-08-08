#include "NFS4.H"
#include "SIMQUEUE.H"

// decompiled code
// original method signature: 
// void /*$ra*/ SimQueue_StartUp__Fv()
 // line 93, offset 0x800b72ec
	/* begin block 1 */
		// Start line: 94
		// Start offset: 0x800B72EC
	/* end block 1 */
	// End offset: 0x800B72EC
	// End Line: 94

void SimQueue_StartUp__Fv(void)
{
  uGp00000eec = 1;
  uGp00000ef0 = 1;
  SimQueue_SetLag__Fv();
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ SimQueue_Reset__Fv()
 // line 115, offset 0x800b7318
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x800B7318
		// Variables:
	// 		int i; // $a1
	// 		int j; // $a0
	/* end block 1 */
	// End offset: 0x800B7398
	// End Line: 146

void SimQueue_Reset__Fv(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  iVar3 = 0;
  puVar4 = &inputQueue;
  do {
    iVar2 = 0;
    iVar1 = iVar3 << 7;
    do {
      if (iVar2 < 4) {
        *(undefined4 *)(&DAT_8013e1f4 + iVar1) = 1;
      }
      else {
        *(undefined4 *)(&DAT_8013e1f4 + iVar1) = 0;
      }
      iVar2 = iVar2 + 1;
      (&inputQueue)[iVar1] = 0;
      (&DAT_8013e0f5)[iVar1] = 0;
      (&DAT_8013e0f6)[iVar1] = 0;
      (&DAT_8013e0f7)[iVar1] = 0;
      iVar1 = iVar1 + 4;
    } while (iVar2 < 0x20);
    *(undefined4 *)(puVar4 + 0x204) = 4;
    puVar4 = puVar4 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  _DAT_8013e2f4 = 0;
  uGp00000ee8 = 3;
  uGp00000eec = 0;
  uGp00000ef0 = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ SimQueue_CleanUp__Fv()
 // line 169, offset 0x800b73b8
	/* begin block 1 */
		// Start line: 170
		// Start offset: 0x800B73B8
	/* end block 1 */
	// End offset: 0x800B73B8
	// End Line: 174

void SimQueue_CleanUp__Fv(void)
{
  uGp00000eec = 1;
  uGp00000ef0 = 1;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ SimQueue_Put__FiP14Input_tResults(int pIndex /*$s2*/, struct Input_tResults *val /*$s4*/)
 // line 201, offset 0x800b73cc
	/* begin block 1 */
		// Start line: 202
		// Start offset: 0x800B73CC
		// Variables:
	// 		int tail; // $s1
	/* end block 1 */
	// End offset: 0x800B74C4
	// End Line: 250

int SimQueue_Put__FiP14Input_tResults(int pIndex,Input_tResults *val)
{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = pIndex * 4;
  uVar2 = *(uint *)(&DAT_8013e2f8 + iVar1);
  iVar3 = SimQueue_IsBlocking__Fi(pIndex);
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = (uVar2 & 0x1f) * 4 + pIndex * 0x80;
  if (*(int *)(&DAT_8013e1f4 + iVar3) != 0) {
    return 0;
  }
  *(Input_tResults *)(&inputQueue + iVar3) = *val;
  *(undefined4 *)(&DAT_8013e1f4 + iVar3) = 1;
  *(int *)(&DAT_8013e2f8 + iVar1) = *(int *)(&DAT_8013e2f8 + iVar1) + 1;
  if (DAT_801131f8 == 0) {
    if ((false) && (pIndex == 0)) {
      return 1;
    }
  }
  else {
    if (DAT_801131f8 != 1) {
      return 1;
    }
    if (pIndex == 0) {
      return 1;
    }
  }
  iGp00000ee8 = iGp00000ee8 + 1;
  return 1;


}




// decompiled code
// original method signature: 
// void /*$ra*/ SimQueue_SetCurrentInput__Fi(int time /*$a0*/)
 // line 271, offset 0x800b74e4
	/* begin block 1 */
		// Start line: 272
		// Start offset: 0x800B74E4
		// Variables:
	// 		int i; // $a0
	// 		int pIndex; // $v1
	/* end block 1 */
	// End offset: 0x800B7588
	// End Line: 291

void SimQueue_SetCurrentInput__Fi(int time)
{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = 0;
  if (false) {
    puVar3 = &output;
    iVar2 = (time & 0x1fU) << 2;
    do {
      *puVar3 = *(undefined4 *)(&inputQueue + iVar2);
      puVar3 = puVar3 + 1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x80;
    } while (iVar1 < 0);
  }
  iVar1 = 0;
  if (false) {
    iVar2 = (time & 0x1fU) << 2;
    do {
      *(undefined4 *)(&DAT_8013e1f4 + iVar2) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x80;
    } while (iVar1 < 0);
  }
  _DAT_8013e2f4 = _DAT_8013e2f4 + 1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ SimQueue_GetCurrentInput__FiP14Input_tResults(int pIndex /*$a0*/, struct Input_tResults *out /*$a1*/)
 // line 295, offset 0x800b75a4
	/* begin block 1 */
		// Start line: 296
		// Start offset: 0x800B75A4
	/* end block 1 */
	// End offset: 0x800B75A4
	// End Line: 297

void SimQueue_GetCurrentInput__FiP14Input_tResults(int pIndex,Input_tResults *out)
{
  *out = *(Input_tResults *)(&output + pIndex);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ SimQueue_SetLag__Fv()
 // line 326, offset 0x800b75cc
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x800B75CC
	/* end block 1 */
	// End offset: 0x800B75F0
	// End Line: 344

void SimQueue_SetLag__Fv(void)
{
  if ((DAT_801131f8 == 0) || (DAT_801131f8 == 1)) {
    uGp00001884 = 4;
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ SimQueue_IsBlocking__Fi(int pIndex /*$a0*/)
 // line 382, offset 0x800b75f8
	/* begin block 1 */
		// Start line: 383
		// Start offset: 0x800B75F8
	/* end block 1 */
	// End offset: 0x800B7644
	// End Line: 408

int SimQueue_IsBlocking__Fi(int pIndex)
{
  if (pIndex != 0) {
    return 0;
  }
  if ((DAT_801131f8 != 0) && (DAT_801131f8 != 1)) {
    return 0;
  }
  return (uint)(_DAT_8013e2f8 < _DAT_8013e2f4 + iGp00001884) ^ 1;


}





