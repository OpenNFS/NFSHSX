#include "THISDUST.H"
#include "FEFADES.H"


// decompiled code
// original method signature: 
// int /*$ra*/ CalcFadeVal__Fiii(int col1 /*$a0*/, int col2 /*$a1*/, int amount /*$a2*/)
 // line 21, offset 0x8004b7f8
	/* begin block 1 */
		// Start line: 22
		// Start offset: 0x8004B7F8
		// Variables:
	// 		int r; // $a0
	// 		int g; // $v1
	// 		int b; // $v0
	/* end block 1 */
	// End offset: 0x8004B7F8
	// End Line: 27

	/* begin block 2 */
		// Start line: 42
	/* end block 2 */
	// End Line: 43

	/* begin block 3 */
		// Start line: 42
	/* end block 3 */
	// End Line: 43

	/* begin block 4 */
		// Start line: 47
	/* end block 4 */
	// End Line: 48

int CalcFadeVal__Fiii(int col1,int col2,int amount)

{
  int iVar1;
  
  iVar1 = 0x80 - amount;
  return ((int)(iVar1 * (col1 >> 0x10 & 0xffU) + amount * (col2 >> 0x10 & 0xffU)) >> 7) << 0x10 |
         ((int)(iVar1 * (col1 >> 8 & 0xffU) + amount * (col2 >> 8 & 0xffU)) >> 7) << 8 |
         (int)(iVar1 * (col1 & 0xffU) + amount * (col2 & 0xffU)) >> 7;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalcFadeVal__Fii(int col1 /*$a0*/, int amount /*$a2*/)
 // line 34, offset 0x8004b888
	/* begin block 1 */
		// Start line: 35
		// Start offset: 0x8004B888
	/* end block 1 */
	// End offset: 0x8004B888
	// End Line: 35

	/* begin block 2 */
		// Start line: 68
	/* end block 2 */
	// End Line: 69

	/* begin block 3 */
		// Start line: 72
	/* end block 3 */
	// End Line: 73

	/* begin block 4 */
		// Start line: 72
	/* end block 4 */
	// End Line: 73

int CalcFadeVal__Fii(int col1,int amount)

{
  int iVar1;
  
  iVar1 = CalcFadeVal__Fiii(col1,0,amount);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalcFadeVal__Fiiii(int col1 /*$a0*/, int col2 /*$a1*/, int amount /*$a2*/, int fFade /*$s0*/)
 // line 39, offset 0x8004b8ac
	/* begin block 1 */
		// Start line: 40
		// Start offset: 0x8004B8AC
	/* end block 1 */
	// End offset: 0x8004B8AC
	// End Line: 40

	/* begin block 2 */
		// Start line: 78
	/* end block 2 */
	// End Line: 79

	/* begin block 3 */
		// Start line: 82
	/* end block 3 */
	// End Line: 83

	/* begin block 4 */
		// Start line: 82
	/* end block 4 */
	// End Line: 83

int CalcFadeVal__Fiiii(int col1,int col2,int amount,int fFade)

{
  int col1_00;
  
  col1_00 = CalcFadeVal__Fiii(col1,col2,amount);
  col1_00 = CalcFadeVal__Fiii(col1_00,0,fFade);
  return col1_00;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalcTextFadeUnselToSel__F13tMenuTextTypess(enum tMenuTextType type /*$a0*/, short fSelFade /*$a1*/, short fFade /*$a2*/)
 // line 44, offset 0x8004b8e0
	/* begin block 1 */
		// Start line: 45
		// Start offset: 0x8004B8E0

		/* begin block 1.1 */
			// Start line: 45
			// Start offset: 0x8004B8E0

			/* begin block 1.1.1 */
				// Start line: 45
				// Start offset: 0x8004B8E0
			/* end block 1.1.1 */
			// End offset: 0x8004B8E0
			// End Line: 45
		/* end block 1.1 */
		// End offset: 0x8004B8E0
		// End Line: 45

		/* begin block 1.2 */
			// Start line: 45
			// Start offset: 0x8004B8E0

			/* begin block 1.2.1 */
				// Start line: 45
				// Start offset: 0x8004B8E0
			/* end block 1.2.1 */
			// End offset: 0x8004B8E0
			// End Line: 45
		/* end block 1.2 */
		// End offset: 0x8004B8E0
		// End Line: 45
	/* end block 1 */
	// End offset: 0x8004B8E0
	// End Line: 45

	/* begin block 2 */
		// Start line: 88
	/* end block 2 */
	// End Line: 89

	/* begin block 3 */
		// Start line: 92
	/* end block 3 */
	// End Line: 93

	/* begin block 4 */
		// Start line: 92
	/* end block 4 */
	// End Line: 93

int CalcTextFadeUnselToSel__F13tMenuTextTypess(tMenuTextType type,short fSelFade,short fFade)

{
  int iVar1;
  
  iVar1 = CalcFadeVal__Fiiii(kRGBVals[(uint)(byte)(&CHAR_09h_800515bb)[type * 6]],
                             kRGBVals[(uint)(byte)(&CHAR_09h_800515bc)[type * 6]],(int)fSelFade,
                             (int)fFade);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CalcTextFadeSelToHi__F13tMenuTextTypess(enum tMenuTextType type /*$a0*/, short fSelFade /*$a1*/, short fFade /*$a2*/)
 // line 53, offset 0x8004b950
	/* begin block 1 */
		// Start line: 54
		// Start offset: 0x8004B950

		/* begin block 1.1 */
			// Start line: 54
			// Start offset: 0x8004B950

			/* begin block 1.1.1 */
				// Start line: 54
				// Start offset: 0x8004B950
			/* end block 1.1.1 */
			// End offset: 0x8004B950
			// End Line: 54
		/* end block 1.1 */
		// End offset: 0x8004B950
		// End Line: 54

		/* begin block 1.2 */
			// Start line: 54
			// Start offset: 0x8004B950

			/* begin block 1.2.1 */
				// Start line: 54
				// Start offset: 0x8004B950
			/* end block 1.2.1 */
			// End offset: 0x8004B950
			// End Line: 54
		/* end block 1.2 */
		// End offset: 0x8004B950
		// End Line: 54
	/* end block 1 */
	// End offset: 0x8004B950
	// End Line: 54

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

int CalcTextFadeSelToHi__F13tMenuTextTypess(tMenuTextType type,short fSelFade,short fFade)

{
  int col1;
  
  col1 = CalcFadeVal__Fiii(kRGBVals[(uint)(byte)(&CHAR_09h_800515bc)[type * 6]],
                           kRGBVals[(uint)(byte)s__800515bd[type * 6]],(int)fSelFade);
  col1 = CalcFadeVal__Fiii(col1,0,(int)fFade);
  return col1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcOnOffFade__F13tMenuTextTypesssRiT4(enum tMenuTextType type /*$a0*/, short fOnOffFade /*$a1*/, short fSelFade /*$a2*/, short fFade /*$a3*/, int *OnColor /*stack 16*/, int *OffColor /*stack 20*/)
 // line 65, offset 0x8004b9d4
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x8004B9D4
		// Variables:
	// 		int ColSelOn; // $s2
	// 		int ColSelOff; // $s6
	// 		int ColUnSelOn; // $s0
	// 		int ColUnSelOff; // $s0

		/* begin block 1.1 */
			// Start line: 66
			// Start offset: 0x8004B9D4

			/* begin block 1.1.1 */
				// Start line: 66
				// Start offset: 0x8004B9D4
			/* end block 1.1.1 */
			// End offset: 0x8004B9D4
			// End Line: 66
		/* end block 1.1 */
		// End offset: 0x8004B9D4
		// End Line: 66

		/* begin block 1.2 */
			// Start line: 66
			// Start offset: 0x8004B9D4

			/* begin block 1.2.1 */
				// Start line: 66
				// Start offset: 0x8004B9D4
			/* end block 1.2.1 */
			// End offset: 0x8004B9D4
			// End Line: 66
		/* end block 1.2 */
		// End offset: 0x8004B9D4
		// End Line: 66

		/* begin block 1.3 */
			// Start line: 66
			// Start offset: 0x8004B9D4

			/* begin block 1.3.1 */
				// Start line: 66
				// Start offset: 0x8004B9D4
			/* end block 1.3.1 */
			// End offset: 0x8004B9D4
			// End Line: 66
		/* end block 1.3 */
		// End offset: 0x8004B9D4
		// End Line: 66
	/* end block 1 */
	// End offset: 0x8004B9D4
	// End Line: 66

	/* begin block 2 */
		// Start line: 136
	/* end block 2 */
	// End Line: 137

	/* begin block 3 */
		// Start line: 142
	/* end block 3 */
	// End Line: 143

	/* begin block 4 */
		// Start line: 142
	/* end block 4 */
	// End Line: 143

void CalcOnOffFade__F13tMenuTextTypesssRiT4
               (tMenuTextType type,short fOnOffFade,short fSelFade,short fFade,int *OnColor,
               int *OffColor)

{
  int col1;
  int col2;
  int col1_00;
  int amount;
  int col2_00;
  int col1_01;
  
  amount = (int)fOnOffFade;
  col2 = type * 6;
  col1_00 = kRGBVals[(uint)(byte)(&CHAR_09h_800515bc)[col2]];
  col2_00 = kRGBVals[(uint)(byte)s__800515bd[col2]];
  col1_01 = kRGBVals[(uint)(byte)(&CHAR_09h_800515bb)[col2]];
  col2 = CalcFadeVal__Fiii(col1_00,col2_00,amount);
  col2_00 = CalcFadeVal__Fiii(col2_00,col1_00,amount);
  col1 = CalcFadeVal__Fiii(col1_01,col1_00,amount);
  col1_00 = CalcFadeVal__Fiii(col1_00,col1_01,amount);
  col2 = CalcFadeVal__Fiiii(col1,col2,(int)fSelFade,(int)fFade);
  *OnColor = col2;
  col2 = CalcFadeVal__Fiiii(col1_00,col2_00,(int)fSelFade,(int)fFade);
  *OffColor = col2;
  return;
}





