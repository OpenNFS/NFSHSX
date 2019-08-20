#include "NFS4.H"
#include "AICOP.H"

// decompiled code
// original method signature: 
// void /*$ra*/ AICop_StartUp__Fv()
 // line 107, offset 0x800669ac
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x800669AC
		// Variables:
	// 		char filename[100]; // stack offset -112

		/* begin block 1.1 */
			// Start line: 124
			// Start offset: 0x80066A38

			/* begin block 1.1.1 */
				// Start line: 124
				// Start offset: 0x80066A38
			/* end block 1.1.1 */
			// End offset: 0x80066A38
			// End Line: 124
		/* end block 1.1 */
		// End offset: 0x80066A38
		// End Line: 124
	/* end block 1 */
	// End offset: 0x80066A38
	// End Line: 124

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AICop_StartUp__Fv(void)

{
  char *rawTriggers;
  char acStack112 [104];
  
  if (GameSetup_gData.cops != 0) {
    triggerManagerCops = (AITrigger_TriggerManager *)__builtin_new(0x34c);
    sprintf(acStack112,s__sTr_02d_cop_80055200,PTR_801164c0,GameSetup_gData.track);
    DAT_00000024 = (char *)loadfileadrz(acStack112,0);
    rawTriggers = DAT_00000024;
    if (DAT_00000024 == (char *)0x0) {
      rawTriggers = (char *)0x0;
    }
    Init__24AITrigger_TriggerManagerPc(triggerManagerCops,rawTriggers);
  }
  DAT_00000028 = 0;
  DAT_0000002c = 0;
  AICop_spikeBelt.active_ = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AICop_Restart__Fv()
 // line 142, offset 0x80066a58
	/* begin block 1 */
		// Start line: 143
		// Start offset: 0x80066A58

		/* begin block 1.1 */
			// Start line: 146
			// Start offset: 0x80066A8C

			/* begin block 1.1.1 */
				// Start line: 146
				// Start offset: 0x80066A8C
			/* end block 1.1.1 */
			// End offset: 0x80066A8C
			// End Line: 146
		/* end block 1.1 */
		// End offset: 0x80066A8C
		// End Line: 146
	/* end block 1 */
	// End offset: 0x80066A8C
	// End Line: 146

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AICop_Restart__Fv(void)

{
  if ((DAT_00000024 != (char *)0x0) && (GameSetup_gData.cops != 0)) {
    Init__24AITrigger_TriggerManagerPc(triggerManagerCops,DAT_00000024);
  }
  DAT_00000028 = 0;
  DAT_0000002c = 0;
  AICop_spikeBelt.active_ = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AICop_CleanUp__Fv()
 // line 158, offset 0x80066aa8
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x80066AA8
	/* end block 1 */
	// End offset: 0x80066AF8
	// End Line: 168

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AICop_CleanUp__Fv(void)

{
  if (triggerManagerCops != (AITrigger_TriggerManager *)0x0) {
    __builtin_delete(triggerManagerCops);
    triggerManagerCops = (AITrigger_TriggerManager *)0x0;
  }
  if ((DAT_00000024 != 0) && (GameSetup_gData.cops != 0)) {
    purgememadr(DAT_00000024);
    DAT_00000024 = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AICop_NoCopsInArea__Fii(int slice /*$s2*/, int sliceDistance /*$s3*/)
 // line 173, offset 0x80066b08
	/* begin block 1 */
		// Start line: 174
		// Start offset: 0x80066B08

		/* begin block 1.1 */
			// Start line: 174
			// Start offset: 0x80066B08
			// Variables:
		// 		int copLoop; // $s1

			/* begin block 1.1.1 */
				// Start line: 175
				// Start offset: 0x80066B34
				// Variables:
			// 		int absDistance; // $v0
			/* end block 1.1.1 */
			// End offset: 0x80066B88
			// End Line: 183
		/* end block 1.1 */
		// End offset: 0x80066B94
		// End Line: 184
	/* end block 1 */
	// End offset: 0x80066B94
	// End Line: 186

int AICop_NoCopsInArea__Fii(int slice,int sliceDistance)

{
  int iVar1;
  Car_tObj **ppCVar2;
  int iVar3;
  
  iVar3 = 0;
  ppCVar2 = &__Cars_gCopCarList_9__;
  do {
    if (Cars_gNumCopCars <= iVar3) {
      return 1;
    }
    if ((((*ppCVar2)->speechInfo).speechSource & 4) == 0) {
      iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObji(*ppCVar2,slice);
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < sliceDistance) {
        return 0;
      }
    }
    ppCVar2 = ppCVar2 + 1;
    iVar3 = iVar3 + 1;
  } while( true );
}




