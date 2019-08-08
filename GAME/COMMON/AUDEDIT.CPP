#include "NFS4.H"
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

void AudList_PurgeAudio__Fv(void)
{
  if (iGp000001e4 != 0) {
    purgememadr();
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

void AudList_LoadAudioFile__Fi(int AudioFileIndex)
{
  char *pcVar1;
  char acStack136 [128];
  
  pcVar1 = Track_MakeTrackPathName__FPc("");
  sprintf(acStack136,"%s%02d.aud",pcVar1,AudioFileIndex);
  uGp000001e4 = loadfileadrz(acStack136,0);
  return;


}





