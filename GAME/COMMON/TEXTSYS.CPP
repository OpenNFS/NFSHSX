#include "NFS4.H"
#include "TEXTSYS.H"

// decompiled code
// original method signature: 
// void /*$ra*/ TextSys_LoadWordsGeneric__FiPc(int language /*$s0*/, char *path /*$s1*/)
 // line 41, offset 0x800b9158
	/* begin block 1 */
		// Start line: 42
		// Start offset: 0x800B9158
		// Variables:
	// 		char string[250]; // stack offset -272
	/* end block 1 */
	// End offset: 0x800B91C8
	// End Line: 52

void TextSys_LoadWordsGeneric__FiPc(int language,char *path)

{
  char acStack272 [256];
  
  if (language < 7) {
    if (DAT_00000f0c != 0) {
      purgememadr(DAT_00000f0c);
    }
    sprintf(acStack272,&DAT_8013d45c,path,(&__langFileName_6__)[language]);
    DAT_00000f0c = loadfileadr(acStack272,0);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TextSys_LoadInGame__Fi(int language /*$s0*/)
 // line 55, offset 0x800b91dc
	/* begin block 1 */
		// Start line: 56
		// Start offset: 0x800B91DC
		// Variables:
	// 		char fullpath[80]; // stack offset -88
	/* end block 1 */
	// End offset: 0x800B91DC
	// End Line: 56

void TextSys_LoadInGame__Fi(int language)

{
  char acStack88 [80];
  
  sprintf(acStack88,&DAT_8013d45c,PTR_801164d0,&DAT_8013d464);
  TextSys_LoadWordsGeneric__FiPc(language,acStack88);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TextSys_LoadWords__Fi(int language /*$a0*/)
 // line 62, offset 0x800b9228
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x800B9228
	/* end block 1 */
	// End offset: 0x800B9228
	// End Line: 63

void TextSys_LoadWords__Fi(int language)

{
  TextSys_LoadWordsGeneric__FiPc(language,PTR_801164f0);
  return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ TextSys_Word__Fi(int wordnum /*$a0*/)
 // line 69, offset 0x800b9250
	/* begin block 1 */
		// Start line: 70
		// Start offset: 0x800B9250
	/* end block 1 */
	// End offset: 0x800B9250
	// End Line: 74

char * TextSys_Word__Fi(int wordnum)

{
  return (char *)(DAT_00000f0c + *(int *)(DAT_00000f0c + wordnum * 0xc + 8));
}



// decompiled code
// original method signature: 
// int /*$ra*/ TextSys_WordFlags__Fi(int wordnum /*$a0*/)
 // line 120, offset 0x800b9270
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x800B9270
	/* end block 1 */
	// End offset: 0x800B9270
	// End Line: 125

int TextSys_WordFlags__Fi(int wordnum)

{
  return (uint)*(byte *)(DAT_00000f0c + wordnum * 0xc + 3);
}



// decompiled code
// original method signature: 
// int /*$ra*/ TextSys_WordX__Fi(int wordnum /*$a0*/)
 // line 132, offset 0x800b9290
	/* begin block 1 */
		// Start line: 133
		// Start offset: 0x800B9290
	/* end block 1 */
	// End offset: 0x800B9290
	// End Line: 137

int TextSys_WordX__Fi(int wordnum)

{
  return (int)*(short *)(DAT_00000f0c + wordnum * 0xc + 4);
}



// decompiled code
// original method signature: 
// int /*$ra*/ TextSys_WordY__Fi(int wordnum /*$a0*/)
 // line 147, offset 0x800b92b0
	/* begin block 1 */
		// Start line: 148
		// Start offset: 0x800B92B0
	/* end block 1 */
	// End offset: 0x800B92B0
	// End Line: 152

int TextSys_WordY__Fi(int wordnum)

{
  return (int)*(short *)(DAT_00000f0c + wordnum * 0xc + 6);
}



// decompiled code
// original method signature: 
// void /*$ra*/ TextSys_UnloadWords__Fv()
 // line 162, offset 0x800b92d0
	/* begin block 1 */
		// Start line: 163
		// Start offset: 0x800B92D0
	/* end block 1 */
	// End offset: 0x800B92E8
	// End Line: 166

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TextSys_UnloadWords__Fv(void)

{
  if (DAT_00000f0c != 0) {
    purgememadr(DAT_00000f0c);
  }
  DAT_00000f0c = 0;
  return;
}




