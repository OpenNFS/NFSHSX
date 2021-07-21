#include "THISDUST.H"
#include "MMEFFECT.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FeDraw_SetABRMode__Fi(int abr /*$a1*/)
 // line 233, offset 0x8004d6d8
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x8004D6D8
		// Variables:
	// 		struct DR_MODE *dr_mode; // $s0
	/* end block 1 */
	// End offset: 0x8004D6D8
	// End Line: 234

	/* begin block 2 */
		// Start line: 466
	/* end block 2 */
	// End Line: 467

	/* begin block 3 */
		// Start line: 466
	/* end block 3 */
	// End Line: 467

void FeDraw_SetABRMode__Fi(int abr)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = DAT_1f800004;
  puVar1 = DAT_1f800000;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar3 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 3;
  *puVar1 = *puVar1 & 0xff000000 | uVar3;
  uVar3 = GetTPage(2,abr,0,0x100);
  SetDrawMode((int)puVar2,0,0,uVar3 & 0xffff,(byte *)0x0);
  return;
}





