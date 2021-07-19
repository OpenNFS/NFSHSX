#include "THISDUST.H"
#include "SCREENDISPLAY.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__14tScreenDisplay(struct tScreenDisplay *this /*$a0*/)
 // line 30, offset 0x80045950
	/* begin block 1 */
		// Start line: 31
		// Start offset: 0x80045950
		// Variables:
	// 		int i; // $s0
	// 		short fade; // $v1

		/* begin block 1.1 */
			// Start line: 31
			// Start offset: 0x80045950

			/* begin block 1.1.1 */
				// Start line: 31
				// Start offset: 0x80045950
			/* end block 1.1.1 */
			// End offset: 0x80045950
			// End Line: 31
		/* end block 1.1 */
		// End offset: 0x80045950
		// End Line: 31
	/* end block 1 */
	// End offset: 0x800459C8
	// End Line: 41

	/* begin block 2 */
		// Start line: 60
	/* end block 2 */
	// End Line: 61

	/* begin block 3 */
		// Start line: 60
	/* end block 3 */
	// End Line: 61

void DrawBackground__14tScreenDisplay(tScreenDisplay *this)

{
  short sVar1;
  int index;
  int iVar2;
  int iVar3;
  
  sVar1 = (short)((int)(menuDefs->itemSpeechVolume).tMenuItemLeftRightSlider.tMenuItemInteractive.
                       tMenuItem.fFlags >> 1);
  if (0x80 < sVar1) {
    sVar1 = 0x80;
  }
  index = 0xb;
  iVar2 = 0;
  do {
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (index,0,0,0,(int)sVar1,0,(tDrawShapeExtended *)0x0);
    iVar3 = iVar2 + 1;
    index = iVar2 + 0xc;
    iVar2 = iVar3;
  } while (iVar3 < 0x20);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__14tScreenDisplayRsT1PPcT3(struct tScreenDisplay *this /*$a0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$a3*/, char **swapFileName /*stack 16*/)
 // line 46, offset 0x800459dc
	/* begin block 1 */
		// Start line: 47
		// Start offset: 0x800459DC
	/* end block 1 */
	// End offset: 0x800459DC
	// End Line: 47

	/* begin block 2 */
		// Start line: 86
	/* end block 2 */
	// End Line: 87

	/* begin block 3 */
		// Start line: 92
	/* end block 3 */
	// End Line: 93

	/* begin block 4 */
		// Start line: 92
	/* end block 4 */
	// End Line: 93

void GetShapeInfo__14tScreenDisplayRsT1PPcT3
               (tScreenDisplay *this,short *numPermShapes,short *numSwapShapes,char **permFileName,
               char **swapFileName)

{
  *swapFileName = (char *)0x0;
  *numSwapShapes = 0;
  *numPermShapes = 0x2b;
  *permFileName = s_zDsply_800120c8;
  return;
}





