#ifndef OBJECT_H
#define OBJECT_H

extern void _._10ObjectAnim(struct ObjectAnim *this, int __in_chrg); // 0x800A6DE0

extern void _._23ObjectFinishedMultiAnim(struct ObjectFinishedMultiAnim *this, int __in_chrg); // 0x800A6DAC

extern void _._15ObjectMultiAnim(struct ObjectMultiAnim *this, int __in_chrg); // 0x800A6CF8

extern void _._22ObjectFinishedSignAnim(struct ObjectFinishedSignAnim *this, int __in_chrg); // 0x800A6CC4

extern void _._14ObjectSignAnim(struct ObjectSignAnim *this, int __in_chrg); // 0x800A6C10


// decompiled code
// original method signature: 
// void /*$ra*/ _._10ObjectAnim(struct ObjectAnim *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 53, offset 0x800a6de0
	/* begin block 1 */
		// Start line: 54
		// Start offset: 0x800A6DE0
	/* end block 1 */
	// End offset: 0x800A6DE0
	// End Line: 54

void ___10ObjectAnim(ObjectAnim *this,int __in_chrg)

{
  this->_vf[0].value = 0x800560e8;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._23ObjectFinishedMultiAnim(struct ObjectFinishedMultiAnim *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 61, offset 0x800a6dac
	/* begin block 1 */
		// Start line: 62
		// Start offset: 0x800A6DAC
		// Variables:
	// 		struct ObjectAnim *this; // $a0
	/* end block 1 */
	// End offset: 0x800A6DAC
	// End Line: 62

	/* begin block 2 */
		// Start line: 62
		// Start offset: 0x800A6DAC

		/* begin block 2.1 */
			// Start line: 62
			// Start offset: 0x800A6DAC
		/* end block 2.1 */
		// End offset: 0x800A6DAC
		// End Line: 62
	/* end block 2 */
	// End offset: 0x800A6DD0
	// End Line: 62

void ___23ObjectFinishedMultiAnim(ObjectFinishedMultiAnim *this,int __in_chrg)

{
  (this->ObjectAnim)._vf[0].value = 0x800560e8;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._15ObjectMultiAnim(struct ObjectMultiAnim *this /*$s1*/, int __in_chrg /*$s2*/)
 // line 84, offset 0x800a6cf8
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x800A6CF8
		// Variables:
	// 		struct ObjectAnim *this; // $s1
	// 		int __in_chrg; // $s2

		/* begin block 1.1 */
			// Start line: 86
			// Start offset: 0x800A6D28

			/* begin block 1.1.1 */
				// Start line: 86
				// Start offset: 0x800A6D28
			/* end block 1.1.1 */
			// End offset: 0x800A6D40
			// End Line: 86
		/* end block 1.1 */
		// End offset: 0x800A6D48
		// End Line: 86
	/* end block 1 */
	// End offset: 0x800A6D74
	// End Line: 87

	/* begin block 2 */
		// Start line: 87
		// Start offset: 0x800A6D74

		/* begin block 2.1 */
			// Start line: 87
			// Start offset: 0x800A6D74
		/* end block 2.1 */
		// End offset: 0x800A6D74
		// End Line: 87
	/* end block 2 */
	// End offset: 0x800A6D94
	// End Line: 87

void ___15ObjectMultiAnim(ObjectMultiAnim *this,int __in_chrg)

{
  int *piVar1;
  void *deleteMe;
  
  deleteMe = (void *)this->objectAngle;
  (this->ObjectAnim)._vf[0].value = 0x800560b8;
  if (deleteMe != (void *)0x0) {
    if (*(void **)((int)deleteMe + 0x10) != (void *)0x0) {
      __builtin_vec_delete(*(void **)((int)deleteMe + 0x10));
    }
    __builtin_delete(deleteMe);
  }
  piVar1 = (int *)this->impactAngle;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  (this->ObjectAnim)._vf[0].value = 0x800560e8;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._22ObjectFinishedSignAnim(struct ObjectFinishedSignAnim *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 101, offset 0x800a6cc4
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x800A6CC4
		// Variables:
	// 		struct ObjectAnim *this; // $a0
	/* end block 1 */
	// End offset: 0x800A6CC4
	// End Line: 102

	/* begin block 2 */
		// Start line: 102
		// Start offset: 0x800A6CC4

		/* begin block 2.1 */
			// Start line: 102
			// Start offset: 0x800A6CC4
		/* end block 2.1 */
		// End offset: 0x800A6CC4
		// End Line: 102
	/* end block 2 */
	// End offset: 0x800A6CE8
	// End Line: 102

void ___22ObjectFinishedSignAnim(ObjectFinishedSignAnim *this,int __in_chrg)

{
  (this->ObjectAnim)._vf[0].value = 0x800560e8;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._14ObjectSignAnim(struct ObjectSignAnim *this /*$s1*/, int __in_chrg /*$s2*/)
 // line 124, offset 0x800a6c10
	/* begin block 1 */
		// Start line: 125
		// Start offset: 0x800A6C10
		// Variables:
	// 		struct ObjectAnim *this; // $s1
	// 		int __in_chrg; // $s2

		/* begin block 1.1 */
			// Start line: 126
			// Start offset: 0x800A6C40

			/* begin block 1.1.1 */
				// Start line: 126
				// Start offset: 0x800A6C40
			/* end block 1.1.1 */
			// End offset: 0x800A6C58
			// End Line: 126
		/* end block 1.1 */
		// End offset: 0x800A6C60
		// End Line: 126
	/* end block 1 */
	// End offset: 0x800A6C8C
	// End Line: 127

	/* begin block 2 */
		// Start line: 127
		// Start offset: 0x800A6C8C

		/* begin block 2.1 */
			// Start line: 127
			// Start offset: 0x800A6C8C
		/* end block 2.1 */
		// End offset: 0x800A6C8C
		// End Line: 127
	/* end block 2 */
	// End offset: 0x800A6CAC
	// End Line: 127

void ___14ObjectSignAnim(ObjectSignAnim *this,int __in_chrg)

{
  int *piVar1;
  void *deleteMe;
  
  deleteMe = (void *)this->objectAngle;
  (this->ObjectAnim)._vf[0].value = 0x80056088;
  if (deleteMe != (void *)0x0) {
    if (*(void **)((int)deleteMe + 0x10) != (void *)0x0) {
      __builtin_vec_delete(*(void **)((int)deleteMe + 0x10));
    }
    __builtin_delete(deleteMe);
  }
  piVar1 = (int *)this->impactAngle;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  (this->ObjectAnim)._vf[0].value = 0x800560e8;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}




#endif
