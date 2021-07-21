#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 230
	/* end block 2 */
	// End Line: 231

	/* begin block 3 */
		// Start line: 230
	/* end block 3 */
	// End Line: 231

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Clock_MasterInterruptHandler__Fv(void)

{
  undefined local_10 [8];
  
  savegp(local_10);
  if (stopClock == 0) {
    clock_realTime.time128Hz = clock_realTime.time128Hz + 1;
    generic128HzClock = generic128HzClock + 1;
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

	/* begin block 2 */
		// Start line: 316
	/* end block 2 */
	// End Line: 317

	/* begin block 3 */
		// Start line: 320
	/* end block 3 */
	// End Line: 321

	/* begin block 4 */
		// Start line: 320
	/* end block 4 */
	// End Line: 321

	/* begin block 5 */
		// Start line: 323
	/* end block 5 */
	// End Line: 324

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Clock_SystemStartUp__Fv(void)

{
  stopClock = 0;
  generic128HzClock = 0;
  if (clock_InterruptStarted == 0) {
    clock_InterruptStarted = 1;
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

	/* begin block 2 */
		// Start line: 370
	/* end block 2 */
	// End Line: 371

	/* begin block 3 */
		// Start line: 374
	/* end block 3 */
	// End Line: 375

	/* begin block 4 */
		// Start line: 374
	/* end block 4 */
	// End Line: 375

	/* begin block 5 */
		// Start line: 375
	/* end block 5 */
	// End Line: 376

	/* begin block 6 */
		// Start line: 375
	/* end block 6 */
	// End Line: 376

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Clock_SystemCleanUp__Fv(void)

{
  if (clock_InterruptStarted != 0) {
    clock_InterruptStarted = 0;
    deltimer((int)Clock_MasterInterruptHandler__Fv);
  }
  return;
}





