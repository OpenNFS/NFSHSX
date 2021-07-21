#include "THISDUST.H"
#include "AUDEDIT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ AudList_PurgeAudio__Fv()
 // line 1142, offset 0x8007b52c
	/* begin block 1 */
		// Start line: 1143
		// Start offset: 0x8007B52C
	/* end block 1 */
	// End offset: 0x8007B544
	// End Line: 1145

	/* begin block 2 */
		// Start line: 2284
	/* end block 2 */
	// End Line: 2285

	/* begin block 3 */
		// Start line: 2284
	/* end block 3 */
	// End Line: 2285

	/* begin block 4 */
		// Start line: 2285
	/* end block 4 */
	// End Line: 2286

	/* begin block 5 */
		// Start line: 2285
	/* end block 5 */
	// End Line: 2286

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AudList_PurgeAudio__Fv(void)

{
  if (gGameAudioList != (CAudioList *)0x0) {
    purgememadr((int)gGameAudioList);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AudList_LoadAudioFile__Fi(int AudioFileIndex /*$s0*/)
 // line 1148, offset 0x8007b554
	/* begin block 1 */
		// Start line: 1149
		// Start offset: 0x8007B554
		// Variables:
	// 		char fname[128]; // stack offset -136
	/* end block 1 */
	// End offset: 0x8007B554
	// End Line: 1149

	/* begin block 2 */
		// Start line: 2293
	/* end block 2 */
	// End Line: 2294

	/* begin block 3 */
		// Start line: 2297
	/* end block 3 */
	// End Line: 2298

	/* begin block 4 */
		// Start line: 2297
	/* end block 4 */
	// End Line: 2298

void AudList_LoadAudioFile__Fi(int AudioFileIndex)

{
  char *pcVar1;
  char acStack136 [128];
  
  pcVar1 = Track_MakeTrackPathName__FPc(&DAT_8013c72c);
  sprintf(acStack136,s__s_02d_aud_800557e8,pcVar1,AudioFileIndex);
  gGameAudioList = (CAudioList *)loadfileadrz(acStack136,0);
  return;
}





