#ifndef PAUSEMENU_H
#define PAUSEMENU_H

extern void * IsDisabled__10tPMenuItem(struct tPMenuItem *this); // 0x800A86BC

extern void * IsEnabled__10tPMenuItem(struct tPMenuItem *this); // 0x800A86A8


// decompiled code
// original method signature: 
// void * /*$ra*/ IsDisabled__10tPMenuItem(struct tPMenuItem *this /*$a0*/)
 // line 115, offset 0x800a86bc
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x800A86BC
	/* end block 1 */
	// End offset: 0x800A86BC
	// End Line: 116

void * IsDisabled__10tPMenuItem(tPMenuItem *this)

{
  return (void *)(this->fFlags & 1);
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsEnabled__10tPMenuItem(struct tPMenuItem *this /*$a0*/)
 // line 116, offset 0x800a86a8
	/* begin block 1 */
		// Start line: 117
		// Start offset: 0x800A86A8
	/* end block 1 */
	// End offset: 0x800A86A8
	// End Line: 117

void * IsEnabled__10tPMenuItem(tPMenuItem *this)

{
  return (void *)((this->fFlags ^ 1) & 1);
}




#endif
