#include "NFS4.H"
#include "NEW.H"

// decompiled code
// original method signature: 
// void * /*$ra*/ __builtin_new(unsigned int size /*$a1*/)
 // line 16, offset 0x800a3d5c
	/* begin block 1 */
		// Start line: 17
		// Start offset: 0x800A3D5C
	/* end block 1 */
	// End offset: 0x800A3D5C
	// End Line: 17

void * __builtin_new(uint size)

{
  short *psVar1;
  
  psVar1 = reservememadr((char *)0x0,size,0);
  return psVar1;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ __builtin_vec_new(unsigned int size /*$a1*/)
 // line 31, offset 0x800a3d84
	/* begin block 1 */
		// Start line: 32
		// Start offset: 0x800A3D84
	/* end block 1 */
	// End offset: 0x800A3D84
	// End Line: 32

void * __builtin_vec_new(uint size)

{
  short *psVar1;
  
  psVar1 = reservememadr((char *)0x0,size,0);
  return psVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ __builtin_delete(void *deleteMe /*$a0*/)
 // line 46, offset 0x800a3dac
	/* begin block 1 */
		// Start line: 47
		// Start offset: 0x800A3DAC
	/* end block 1 */
	// End offset: 0x800A3DAC
	// End Line: 47

void __builtin_delete(void *deleteMe)

{
  purgememadr((int)deleteMe);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ __builtin_vec_delete(void *deleteMe /*$a0*/)
 // line 51, offset 0x800a3dcc
	/* begin block 1 */
		// Start line: 52
		// Start offset: 0x800A3DCC
	/* end block 1 */
	// End offset: 0x800A3DCC
	// End Line: 52

void __builtin_vec_delete(void *deleteMe)

{
  purgememadr((int)deleteMe);
  return;
}




