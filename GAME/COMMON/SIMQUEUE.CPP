#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 186
	/* end block 2 */
	// End Line: 187

	/* begin block 3 */
		// Start line: 186
	/* end block 3 */
	// End Line: 187

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SimQueue_StartUp__Fv(void)

{
  gSimQueue_BlockSelf = 1;
  gSimQueue_BlockOther = 1;
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

	/* begin block 2 */
		// Start line: 220
	/* end block 2 */
	// End Line: 221

	/* begin block 3 */
		// Start line: 234
	/* end block 3 */
	// End Line: 235

	/* begin block 4 */
		// Start line: 234
	/* end block 4 */
	// End Line: 235

	/* begin block 5 */
		// Start line: 246
	/* end block 5 */
	// End Line: 247

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SimQueue_Reset__Fv(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  sim_queue *psVar4;
  
  iVar3 = 0;
  psVar4 = &inputQueue;
  do {
    iVar2 = 0;
    iVar1 = iVar3 << 7;
    do {
      if (iVar2 < 4) {
        *(undefined4 *)((int)inputQueue.Validity + iVar1) = 1;
      }
      else {
        *(undefined4 *)((int)inputQueue.Validity + iVar1) = 0;
      }
      iVar2 = iVar2 + 1;
      (&inputQueue.Buffer[0].steering)[iVar1] = '\0';
      (&inputQueue.Buffer[0].gas)[iVar1] = '\0';
      (&inputQueue.Buffer[0].brake)[iVar1] = '\0';
      (&inputQueue.Buffer[0].flags)[iVar1] = '\0';
      iVar1 = iVar1 + 4;
    } while (iVar2 < 0x20);
    psVar4->TailTime[0] = 4;
    psVar4 = (sim_queue *)(psVar4->Buffer + 1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  gSimQueue_Ticker = 3;
  gSimQueue_BlockSelf = 0;
  gSimQueue_BlockOther = 0;
  inputQueue.HeadTime = 0;
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

	/* begin block 2 */
		// Start line: 335
	/* end block 2 */
	// End Line: 336

	/* begin block 3 */
		// Start line: 349
	/* end block 3 */
	// End Line: 350

	/* begin block 4 */
		// Start line: 349
	/* end block 4 */
	// End Line: 350

	/* begin block 5 */
		// Start line: 353
	/* end block 5 */
	// End Line: 354

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SimQueue_CleanUp__Fv(void)

{
  gSimQueue_BlockSelf = 1;
  gSimQueue_BlockOther = 1;
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

	/* begin block 2 */
		// Start line: 386
	/* end block 2 */
	// End Line: 387

	/* begin block 3 */
		// Start line: 413
	/* end block 3 */
	// End Line: 414

	/* begin block 4 */
		// Start line: 413
	/* end block 4 */
	// End Line: 414

int SimQueue_Put__FiP14Input_tResults(int pIndex,Input_tResults *val)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = inputQueue.TailTime[pIndex] & 0x1f;
  iVar1 = SimQueue_IsBlocking__Fi(pIndex);
  if (iVar1 != 0) {
    return 0;
  }
  if (inputQueue.Validity[pIndex * 0x20 + uVar2] != kINVALID) {
    return 0;
  }
  inputQueue.Buffer[pIndex * 0x20 + uVar2] = *val;
  inputQueue.Validity[pIndex * 0x20 + uVar2] = kVALID;
  inputQueue.TailTime[pIndex] = inputQueue.TailTime[pIndex] + 1;
  if (GameSetup_gData.commMode == 0) {
    if ((1 < GameSetup_gData.numPlayerRaceCars) && (pIndex == 0)) {
      return 1;
    }
  }
  else {
    if (GameSetup_gData.commMode != 1) {
      return 1;
    }
    if (pIndex == 0) {
      return 1;
    }
  }
  gSimQueue_Ticker = gSimQueue_Ticker + 1;
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

	/* begin block 2 */
		// Start line: 535
	/* end block 2 */
	// End Line: 536

	/* begin block 3 */
		// Start line: 557
	/* end block 3 */
	// End Line: 558

	/* begin block 4 */
		// Start line: 557
	/* end block 4 */
	// End Line: 558

	/* begin block 5 */
		// Start line: 565
	/* end block 5 */
	// End Line: 566

void SimQueue_SetCurrentInput__Fi(int time)

{
  int iVar1;
  int iVar2;
  uchar **ppuVar3;
  
  iVar1 = 0;
  if (0 < GameSetup_gData.numPlayerRaceCars) {
    ppuVar3 = &output;
    iVar2 = (time & 0x1fU) << 2;
    do {
      *ppuVar3 = *(uchar **)(&inputQueue.Buffer[0].steering + iVar2);
      ppuVar3 = ppuVar3 + 1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x80;
    } while (iVar1 < GameSetup_gData.numPlayerRaceCars);
  }
  iVar1 = 0;
  if (0 < GameSetup_gData.numPlayerRaceCars) {
    iVar2 = (time & 0x1fU) << 2;
    do {
      *(undefined4 *)((int)inputQueue.Validity + iVar2) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x80;
    } while (iVar1 < GameSetup_gData.numPlayerRaceCars);
  }
  inputQueue.HeadTime = inputQueue.HeadTime + 1;
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

	/* begin block 2 */
		// Start line: 600
	/* end block 2 */
	// End Line: 601

	/* begin block 3 */
		// Start line: 605
	/* end block 3 */
	// End Line: 606

	/* begin block 4 */
		// Start line: 605
	/* end block 4 */
	// End Line: 606

	/* begin block 5 */
		// Start line: 606
	/* end block 5 */
	// End Line: 607

	/* begin block 6 */
		// Start line: 606
	/* end block 6 */
	// End Line: 607

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

	/* begin block 2 */
		// Start line: 637
	/* end block 2 */
	// End Line: 638

	/* begin block 3 */
		// Start line: 667
	/* end block 3 */
	// End Line: 668

	/* begin block 4 */
		// Start line: 667
	/* end block 4 */
	// End Line: 668

	/* begin block 5 */
		// Start line: 668
	/* end block 5 */
	// End Line: 669

	/* begin block 6 */
		// Start line: 668
	/* end block 6 */
	// End Line: 669

/* WARNING: Unknown calling convention yet parameter storage is locked */

void SimQueue_SetLag__Fv(void)

{
  if ((GameSetup_gData.commMode == 0) || (GameSetup_gData.commMode == 1)) {
    maxTicksPerFrame = &DAT_00000004;
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

	/* begin block 2 */
		// Start line: 740
	/* end block 2 */
	// End Line: 741

	/* begin block 3 */
		// Start line: 779
	/* end block 3 */
	// End Line: 780

	/* begin block 4 */
		// Start line: 779
	/* end block 4 */
	// End Line: 780

	/* begin block 5 */
		// Start line: 781
	/* end block 5 */
	// End Line: 782

int SimQueue_IsBlocking__Fi(int pIndex)

{
  if (pIndex != 0) {
    return 0;
  }
  if ((GameSetup_gData.commMode != 0) && (GameSetup_gData.commMode != 1)) {
    return 0;
  }
  return (uint)(inputQueue.TailTime[0] < (int)(maxTicksPerFrame + inputQueue.HeadTime)) ^ 1;
}





