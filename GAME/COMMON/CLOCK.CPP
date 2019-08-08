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

void Clock_MasterInterruptHandler__Fv(void)
{
  undefined4 local_10 [2];
  
  savegp(local_10);
  if (iGp000002d8 == 0) {
    clock_realTime = clock_realTime + 1;
    iGp000002dc = iGp000002dc + 1;
    if (((clock_realTime & 1) == 0) && (DAT_80110c28 = DAT_80110c28 + 1, (DAT_80110c28 & 1) == 0)) {
      DAT_80110c2c = DAT_80110c2c + 1;
      if ((DAT_80110c2c & 1) == 0) {
        Input_Update__Fv();
      }
      Input_Store__Fv();
    }
  }
  restoregp(local_10[0]);
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

void Clock_SystemStartUp__Fv(void)
{
  uGp000002d8 = 0;
  uGp000002dc = 0;
  if (iGp000002d4 == 0) {
    iGp000002d4 = 1;
    addtimer(Clock_MasterInterruptHandler__Fv);
    clock_realTime = 0;
    DAT_80110c28 = 0;
    DAT_80110c2c = 0;
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

void Clock_SystemCleanUp__Fv(void)
{
  if (iGp000002d4 != 0) {
    iGp000002d4 = 0;
    deltimer(Clock_MasterInterruptHandler__Fv);
  }
  return;


}





