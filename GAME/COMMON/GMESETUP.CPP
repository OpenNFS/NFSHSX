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
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  Input_StartUp__Fv();
  iVar3 = *FrontEndDataStream;
  piVar7 = FrontEndDataStream;
  do {
    if (iVar3 == 0) {
      purgememadr(FrontEndDataStream);
      timedwait(100);
      PAD_update();
      uVar1 = PAD_state(0);
      if (uVar1 == 0x909) {
        DAT_80113224 = 8;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0xa080) {
        DAT_80113224 = 2;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0xc001) {
        DAT_80113224 = 4;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0x640) {
        DAT_80113224 = 0x10;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0x610) {
        DAT_80113224 = 0x20;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0x910) {
        DAT_80113224 = 0x40;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0x5010) {
        DAT_80113224 = 0x80;
      }
      uVar1 = PAD_state(0);
      if (uVar1 == 0x620) {
        DAT_80113224 = 0x100;
      }
      gMasterMusicLevel = DAT_801132dc;
      gMasterSFXLevel = DAT_801132e0;
      gMasterFENarrationLevel = DAT_801132e8;
      gMasterEngineLevel = DAT_801132e4;
      gMasterAmbientLevel = 0;
      Device_SetHardCodedKeys__Fv();
      return;
    }
    iVar3 = *piVar7;
    if (iVar3 < 0x103) {
      piVar4 = &FEI_gList;
      if (iVar3 < 0x4d) {
        piVar6 = (int *)0x0;
        if (true) {
          iVar5 = 1;
          do {
            if (iVar5 == iVar3) {
              piVar6 = (int *)piVar4[1];
            }
            piVar4 = piVar4 + 2;
            iVar5 = *piVar4;
          } while (iVar5 != 0);
        }
        if (piVar6 != (int *)0x0) {
          if (*piVar7 < 0x4b) {
            *piVar6 = piVar7[1];
          }
          else {
            iVar3 = 0;
            piVar4 = piVar7;
            if (0 < piVar7[1]) {
              do {
                iVar3 = iVar3 + 1;
                *piVar6 = piVar4[2];
                piVar6 = piVar6 + 1;
                piVar4 = piVar4 + 1;
              } while (iVar3 < piVar7[1]);
            }
          }
        }
        if (0x4a < *piVar7) {
          piVar7 = piVar7 + piVar7[1];
        }
      }
      else {
        *(int *)(&DAT_80113ae0 + iVar3 * 4) = piVar7[1];
        if (*(code **)(&DAT_8011ec20 + (piVar7[1] & 0xffU) * 0xc) != (code *)0x0) {
          (**(code **)(&DAT_8011ec20 + (piVar7[1] & 0xffU) * 0xc))(piVar7[1] >> 8);
          piVar7 = piVar7 + 2;
          goto LAB_8009bf88;
        }
      }
      piVar7 = piVar7 + 2;
    }
    else {
      piVar4 = &FEI_gList;
      iVar5 = 0;
      if (true) {
        iVar2 = 1;
        do {
          if (iVar2 == iVar3) {
            iVar5 = piVar4[1];
          }
          piVar4 = piVar4 + 2;
          iVar2 = *piVar4;
        } while (iVar2 != 0);
      }
      if (iVar5 != 0) {
        *(int *)(iVar5 + piVar7[1] * 0xb4) = piVar7[2];
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

void GameSetup_CleanUp__Fv(void)
{
  return;


}





