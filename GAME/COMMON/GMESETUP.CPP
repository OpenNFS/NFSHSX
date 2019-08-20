#include "NFS4.H"
#include "GMESETUP.H"

// decompiled code
// original method signature: 
// void /*$ra*/ GameSetup_StartUp__FPi(int *FrontEndDataStream /*$s2*/)
 // line 155, offset 0x8009bd9c
	/* begin block 1 */
		// Start line: 156
		// Start offset: 0x8009BD9C
		// Variables:
	// 		int i; // $a1
	// 		int *h; // $s4
	// 		int *s; // $s0
	// 		int *p; // $a0
	// 		struct FEI_tList *l; // $v1
	/* end block 1 */
	// End offset: 0x8009C0B4
	// End Line: 338

void GameSetup_StartUp__FPi(int *FrontEndDataStream)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  FEI_tList *pFVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  Input_StartUp__Fv();
  iVar3 = *FrontEndDataStream;
  piVar7 = FrontEndDataStream;
  do {
    if (iVar3 == 0) {
      purgememadr((int)FrontEndDataStream);
      timedwait(100);
      PAD_update();
      uVar1 = PAD_state(0);
      if (uVar1 == 0x909) {
        GameSetup_gData.sgge = 8;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0xa080) {
        GameSetup_gData.sgge = 2;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0xc001) {
        GameSetup_gData.sgge = 4;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0x640) {
        GameSetup_gData.sgge = 0x10;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0x610) {
        GameSetup_gData.sgge = 0x20;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0x910) {
        GameSetup_gData.sgge = 0x40;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0x5010) {
        GameSetup_gData.sgge = 0x80;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0x620) {
        GameSetup_gData.sgge = 0x100;
      }
      gMasterMusicLevel = GameSetup_gData.userSetting.musicLevel;
      gMasterSFXLevel = GameSetup_gData.userSetting.sfxLevel;
      gMasterFENarrationLevel = GameSetup_gData.userSetting.speechLevel;
      gMasterEngineLevel = GameSetup_gData.userSetting.engineLevel;
      gMasterAmbientLevel = GameSetup_gData.userSetting.ambientLevel;
      Device_SetHardCodedKeys__Fv();
      return;
    }
    iVar3 = *piVar7;
    if (iVar3 < 0x103) {
      pFVar4 = &FEI_gList;
      if (iVar3 < 0x4d) {
        piVar6 = (int *)0x0;
        iVar2 = FEI_gList.v;
        while (iVar2 != 0) {
          if (iVar2 == iVar3) {
            piVar6 = pFVar4->p;
          }
          pFVar4 = pFVar4 + 1;
          iVar2 = pFVar4->v;
        }
        if (piVar6 != (int *)0x0) {
          if (*piVar7 < 0x4b) {
            *piVar6 = piVar7[1];
          }
          else {
            iVar3 = 0;
            piVar5 = piVar7;
            if (0 < piVar7[1]) {
              do {
                iVar3 = iVar3 + 1;
                *piVar6 = piVar5[2];
                piVar6 = piVar6 + 1;
                piVar5 = piVar5 + 1;
              } while (iVar3 < piVar7[1]);
            }
          }
        }
        if (0x4a < *piVar7) {
          piVar7 = piVar7 + piVar7[1];
        }
      }
      else {
        (&GameSetup_gData.carInfo[7].BrakeAssist)[iVar3] = piVar7[1];
        if ((&Device_gDeviceList)[piVar7[1] & 0xff].startupfunc != (_func_41 *)0x0) {
          (*(&Device_gDeviceList)[piVar7[1] & 0xff].startupfunc)(piVar7[1] >> 8);
          piVar7 = piVar7 + 2;
          goto LAB_8009bf88;
        }
      }
      piVar7 = piVar7 + 2;
    }
    else {
      pFVar4 = &FEI_gList;
      piVar6 = (int *)0x0;
      iVar2 = FEI_gList.v;
      while (iVar2 != 0) {
        if (iVar2 == iVar3) {
          piVar6 = pFVar4->p;
        }
        pFVar4 = pFVar4 + 1;
        iVar2 = pFVar4->v;
      }
      if (piVar6 != (int *)0x0) {
        piVar6[piVar7[1] * 0x2d] = piVar7[2];
      }
      piVar7 = piVar7 + 3;
    }
LAB_8009bf88:
    iVar3 = *piVar7;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ GameSetup_CleanUp__Fv()
 // line 369, offset 0x8009c120
	/* begin block 1 */
		// Start line: 370
		// Start offset: 0x8009C120
	/* end block 1 */
	// End offset: 0x8009C120
	// End Line: 370

/* WARNING: Unknown calling convention yet parameter storage is locked */

void GameSetup_CleanUp__Fv(void)

{
  return;
}




