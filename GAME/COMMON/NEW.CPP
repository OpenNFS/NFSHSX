#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 32
	/* end block 2 */
	// End Line: 33

	/* begin block 3 */
		// Start line: 32
	/* end block 3 */
	// End Line: 33

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

	/* begin block 2 */
		// Start line: 69
	/* end block 2 */
	// End Line: 70

	/* begin block 3 */
		// Start line: 73
	/* end block 3 */
	// End Line: 74

	/* begin block 4 */
		// Start line: 73
	/* end block 4 */
	// End Line: 74

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

	/* begin block 2 */
		// Start line: 110
	/* end block 2 */
	// End Line: 111

	/* begin block 3 */
		// Start line: 114
	/* end block 3 */
	// End Line: 115

	/* begin block 4 */
		// Start line: 114
	/* end block 4 */
	// End Line: 115

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

	/* begin block 2 */
		// Start line: 120
	/* end block 2 */
	// End Line: 121

	/* begin block 3 */
		// Start line: 124
	/* end block 3 */
	// End Line: 125

	/* begin block 4 */
		// Start line: 124
	/* end block 4 */
	// End Line: 125

void __builtin_vec_delete(void *deleteMe)

{
  purgememadr((int)deleteMe);
  return;
}





