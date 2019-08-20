#include "NFS4.H"
#include "CLOCK.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Clock_MasterInterruptHandler__Fv()
 // line 115, offset 0x8008b938
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x8008B938
		// Variables:
	// 		long gp; // stack offset -16
	/* end block 1 */
	// End offset: 0x8008B9C8
	// End Line: 154

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Clock_MasterInterruptHandler__Fv(void)

{
  undefined4 local_10 [2];
  
  savegp(local_10);
  if (DAT_000002d8 == 0) {
    clock_realTime.time128Hz = clock_realTime.time128Hz + 1;
    DAT_000002dc = DAT_000002dc + 1;
    if (((clock_realTime.time128Hz & 1U) == 0) &&
       (clock_realTime.time64Hz = clock_realTime.time64Hz + 1, (clock_realTime.time64Hz & 1U) == 0))
    {
      clock_realTime.time32Hz = clock_realTime.time32Hz + 1;
      if ((clock_realTime.time32Hz & 1U) == 0) {
        Input_Update__Fv();
      }
      Input_Store__Fv();
    }
  }
  restoregp();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Clock_SystemStartUp__Fv()
 // line 157, offset 0x8008b9e4
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x8008B9E4
	/* end block 1 */
	// End offset: 0x8008BA2C
	// End Line: 179

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Clock_SystemStartUp__Fv(void)

{
  DAT_000002d8 = 0;
  DAT_000002dc = 0;
  if (DAT_000002d4 == 0) {
    DAT_000002d4 = 1;
    addtimer((int)Clock_MasterInterruptHandler__Fv);
    clock_realTime.time128Hz = 0;
    clock_realTime.time64Hz = 0;
    clock_realTime.time32Hz = 0;
    Input_gTime = 0;
  }
  R3DCar_ClockLast = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Clock_SystemCleanUp__Fv()
 // line 182, offset 0x8008ba40
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x8008BA40
	/* end block 1 */
	// End offset: 0x8008BA60
	// End Line: 187

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Clock_SystemCleanUp__Fv(void)

{
  if (DAT_000002d4 != 0) {
    DAT_000002d4 = 0;
    deltimer((int)Clock_MasterInterruptHandler__Fv);
  }
  return;
}




