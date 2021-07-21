#include "THISDUST.H"
#include "SIMPLEMEM.H"


// decompiled code
// original method signature: 
// void * /*$ra*/ Alloc__9SimpleMemii(struct SimpleMem *this /*$a0*/, int len /*$a1*/, int feign /*$a2*/)
 // line 10, offset 0x800b7250
	/* begin block 1 */
		// Start line: 11
		// Start offset: 0x800B7250
		// Variables:
	// 		void *ret; // $a3
	/* end block 1 */
	// End offset: 0x800B728C
	// End Line: 41

	/* begin block 2 */
		// Start line: 20
	/* end block 2 */
	// End Line: 21

	/* begin block 3 */
		// Start line: 20
	/* end block 3 */
	// End Line: 21

	/* begin block 4 */
		// Start line: 25
	/* end block 4 */
	// End Line: 26

void * Alloc__9SimpleMemii(SimpleMem *this,int len,int feign)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = len + 3U & 0xfffffffc;
  if ((int)uVar1 <= this->freeMemSize) {
    pvVar2 = this->freeMem;
    if (feign == 0) {
      this->freeMem = (void *)((int)pvVar2 + uVar1);
      this->freeMemSize = this->freeMemSize - uVar1;
    }
    return pvVar2;
  }
  return (void *)0x0;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ FeignAlloc__9SimpleMemi(struct SimpleMem *this /*$a0*/, int len /*$a1*/)
 // line 45, offset 0x800b729c
	/* begin block 1 */
		// Start line: 46
		// Start offset: 0x800B729C
	/* end block 1 */
	// End offset: 0x800B729C
	// End Line: 46

	/* begin block 2 */
		// Start line: 86
	/* end block 2 */
	// End Line: 87

	/* begin block 3 */
		// Start line: 91
	/* end block 3 */
	// End Line: 92

	/* begin block 4 */
		// Start line: 91
	/* end block 4 */
	// End Line: 92

void * FeignAlloc__9SimpleMemi(SimpleMem *this,int len)

{
  void *pvVar1;
  
  pvVar1 = Alloc__9SimpleMemii(this,len,1);
  return pvVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ResizeToFit__9SimpleMem(struct SimpleMem *this /*$a0*/)
 // line 57, offset 0x800b72bc
	/* begin block 1 */
		// Start line: 58
		// Start offset: 0x800B72BC
		// Variables:
	// 		long newSize; // $a1
	/* end block 1 */
	// End offset: 0x800B72BC
	// End Line: 58

	/* begin block 2 */
		// Start line: 104
	/* end block 2 */
	// End Line: 105

	/* begin block 3 */
		// Start line: 115
	/* end block 3 */
	// End Line: 116

	/* begin block 4 */
		// Start line: 115
	/* end block 4 */
	// End Line: 116

void ResizeToFit__9SimpleMem(SimpleMem *this)

{
  void *pvVar1;
  
  pvVar1 = this->freeMem;
  this->freeMem = (void *)0x0;
  resizememadr((int)this->heap,(int)((int)pvVar1 - (int)this->heap));
  return;
}





