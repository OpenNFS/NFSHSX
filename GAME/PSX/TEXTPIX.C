#include "NFS4.H"
#include "TEXTPIX.H"

// decompiled code
// original method signature: 
// int /*$ra*/ textnpixels(char *str /*stack 0*/, int n /*$s2*/)
 // line 61, offset 0x800e3d8c
	/* begin block 1 */
		// Start line: 62
		// Start offset: 0x800E3D8C
		// Variables:
	// 		int code; // $v0
	// 		int stringlen; // $s0
	// 		int i; // $s1

		/* begin block 1.1 */
			// Start line: 77
			// Start offset: 0x800E3DC0
			// Variables:
		// 		struct charactertbl *ch; // $v0

			/* begin block 1.1.1 */
				// Start line: 88
				// Start offset: 0x800E3DE8
				// Variables:
			// 		int dx; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800E3DF4
			// End Line: 96
		/* end block 1.1 */
		// End offset: 0x800E3DF4
		// End Line: 97
	/* end block 1 */
	// End offset: 0x800E3E00
	// End Line: 98

int textnpixels(char *str,int n)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *local_res0;
  
  iVar4 = 0;
  iVar3 = 0;
  local_res0 = str;
  if (0 < n) {
    do {
      uVar1 = (*DAT_80135c40)(register0x00000074);
      iVar4 = iVar4 + 1;
      if (uVar1 == 0) {
        return iVar3;
      }
      piVar2 = getcharacter(uVar1);
      if (piVar2 != (int *)0x0) {
        iVar3 = iVar3 + (int)*(char *)(piVar2 + 2);
      }
    } while (iVar4 < n);
  }
  return iVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ textpixels(char *string /*$a0*/)
 // line 101, offset 0x800e3e20
int textpixels(char *string)

{
  int iVar1;
  
  iVar1 = textnpixels(string,0x100);
  return iVar1;
}




