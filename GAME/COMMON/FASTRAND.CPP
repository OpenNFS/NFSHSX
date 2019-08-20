#include "NFS4.H"
#include "FASTRAND.H"

// decompiled code
// original method signature: 
// void /*$ra*/ FastRandom_CleanUp__Fv()
 // line 13, offset 0x8009b3c8
	/* begin block 1 */
		// Start line: 14
		// Start offset: 0x8009B3C8
	/* end block 1 */
	// End offset: 0x8009B3C8
	// End Line: 14

/* WARNING: Unknown calling convention yet parameter storage is locked */

void FastRandom_CleanUp__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FastRandom_StartUp__FUi(unsigned int seeder /*$a0*/)
 // line 18, offset 0x8009b3d0
	/* begin block 1 */
		// Start line: 19
		// Start offset: 0x8009B3D0
		// Variables:
	// 		unsigned int a; // $v1
	// 		unsigned int b; // $v0
	// 		int seedIterations; // $v1

		/* begin block 1.1 */
			// Start line: 22
			// Start offset: 0x8009B3D0
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8009B450
		// End Line: 34
	/* end block 1 */
	// End offset: 0x8009B450
	// End Line: 34

void FastRandom_StartUp__FUi(uint seeder)

{
  int iVar1;
  int iVar2;
  
  DAT_00000bb0 = 0x3ade68b1;
  iVar1 = seeder + (((uint)((ulonglong)seeder * 0x10624dd3 >> 0x20) & 0xffffffe0) * 4 +
                   (seeder / 500) * -3) * -4;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      DAT_00000bb4 = DAT_00000bb0 * 0x75bcd15;
      iVar2 = iVar2 + 1;
      DAT_00000bb0 = DAT_00000bb4 & 0xffff;
    } while (iVar2 < iVar1);
  }
  DAT_00000bb8 = 0x75bcd15;
  return;
}




