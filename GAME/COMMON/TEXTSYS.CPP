#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 82
	/* end block 2 */
	// End Line: 83

	/* begin block 3 */
		// Start line: 82
	/* end block 3 */
	// End Line: 83

void TextSys_LoadWordsGeneric__FiPc(int language,char *path)

{
  char acStack272 [256];
  
  if (language < 7) {
    if (wordFile != (char *)0x0) {
      purgememadr((int)wordFile);
    }
    sprintf(acStack272,&DAT_8013d45c,path,langFileName6[language]);
    wordFile = (char *)loadfileadr(acStack272,0);
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

	/* begin block 2 */
		// Start line: 107
	/* end block 2 */
	// End Line: 108

	/* begin block 3 */
		// Start line: 110
	/* end block 3 */
	// End Line: 111

	/* begin block 4 */
		// Start line: 110
	/* end block 4 */
	// End Line: 111

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

	/* begin block 2 */
		// Start line: 122
	/* end block 2 */
	// End Line: 123

	/* begin block 3 */
		// Start line: 126
	/* end block 3 */
	// End Line: 127

	/* begin block 4 */
		// Start line: 126
	/* end block 4 */
	// End Line: 127

	/* begin block 5 */
		// Start line: 127
	/* end block 5 */
	// End Line: 128

	/* begin block 6 */
		// Start line: 127
	/* end block 6 */
	// End Line: 128

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

	/* begin block 2 */
		// Start line: 135
	/* end block 2 */
	// End Line: 136

	/* begin block 3 */
		// Start line: 141
	/* end block 3 */
	// End Line: 142

	/* begin block 4 */
		// Start line: 141
	/* end block 4 */
	// End Line: 142

	/* begin block 5 */
		// Start line: 145
	/* end block 5 */
	// End Line: 146

char * TextSys_Word__Fi(int wordnum)

{
  return wordFile + *(int *)(wordFile + wordnum * 0xc + 8);
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

	/* begin block 2 */
		// Start line: 234
	/* end block 2 */
	// End Line: 235

	/* begin block 3 */
		// Start line: 204
	/* end block 3 */
	// End Line: 205

	/* begin block 4 */
		// Start line: 204
	/* end block 4 */
	// End Line: 205

	/* begin block 5 */
		// Start line: 208
	/* end block 5 */
	// End Line: 209

int TextSys_WordFlags__Fi(int wordnum)

{
  return (uint)(byte)wordFile[wordnum * 0xc + 3];
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

	/* begin block 2 */
		// Start line: 222
	/* end block 2 */
	// End Line: 223

	/* begin block 3 */
		// Start line: 228
	/* end block 3 */
	// End Line: 229

	/* begin block 4 */
		// Start line: 228
	/* end block 4 */
	// End Line: 229

	/* begin block 5 */
		// Start line: 232
	/* end block 5 */
	// End Line: 233

int TextSys_WordX__Fi(int wordnum)

{
  return (int)*(short *)(wordFile + wordnum * 0xc + 4);
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

	/* begin block 2 */
		// Start line: 252
	/* end block 2 */
	// End Line: 253

	/* begin block 3 */
		// Start line: 258
	/* end block 3 */
	// End Line: 259

	/* begin block 4 */
		// Start line: 258
	/* end block 4 */
	// End Line: 259

	/* begin block 5 */
		// Start line: 262
	/* end block 5 */
	// End Line: 263

int TextSys_WordY__Fi(int wordnum)

{
  return (int)*(short *)(wordFile + wordnum * 0xc + 6);
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

	/* begin block 2 */
		// Start line: 282
	/* end block 2 */
	// End Line: 283

	/* begin block 3 */
		// Start line: 288
	/* end block 3 */
	// End Line: 289

	/* begin block 4 */
		// Start line: 288
	/* end block 4 */
	// End Line: 289

	/* begin block 5 */
		// Start line: 289
	/* end block 5 */
	// End Line: 290

	/* begin block 6 */
		// Start line: 289
	/* end block 6 */
	// End Line: 290

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TextSys_UnloadWords__Fv(void)

{
  if (wordFile != (char *)0x0) {
    purgememadr((int)wordFile);
  }
  wordFile = (char *)0x0;
  return;
}





