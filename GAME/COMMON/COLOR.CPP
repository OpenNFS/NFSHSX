#include "NFS4.H"
#include "COLOR.H"

// decompiled code
// original method signature: 
// char /*$ra*/ IsNumChar__Fc(char c /*$v0*/)
 // line 454, offset 0x80091ec0
	/* begin block 1 */
		// Start line: 455
		// Start offset: 0x80091EC0
	/* end block 1 */
	// End offset: 0x80091EF4
	// End Line: 459

char IsNumChar__Fc(char c)
{
  if ((byte)(c - 0x30U) < 10) {
    return '\x01';
  }
  if (c != '-') {
    return (char)(c == '+');
  }
  return '\x01';


}




// decompiled code
// original method signature: 
// int /*$ra*/ Risk_ReadNextValue__FPPc(char **aScript /*$s3*/)
 // line 462, offset 0x80091efc
	/* begin block 1 */
		// Start line: 463
		// Start offset: 0x80091EFC
		// Variables:
	// 		char s[256]; // stack offset -280
	// 		int n; // $s1
	// 		char *Script; // $s0
	/* end block 1 */
	// End offset: 0x80091FAC
	// End Line: 481

int Risk_ReadNextValue__FPPc(char **aScript)
{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char local_118 [256];
  
  iVar4 = 0;
  pcVar2 = *aScript;
  while (pcVar3 = pcVar2, cVar1 = IsNumChar__Fc(*pcVar3), cVar1 == '\0') {
    pcVar2 = pcVar3 + 1;
    if (*pcVar3 == '/') {
      cVar1 = pcVar3[1];
      pcVar2 = pcVar3 + 2;
      while (cVar1 != '/') {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      }
    }
  }
  while( true ) {
    cVar1 = IsNumChar__Fc(*pcVar3);
    pcVar2 = local_118 + iVar4;
    if (cVar1 == '\0') break;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    iVar4 = iVar4 + 1;
    *pcVar2 = cVar1;
  }
  local_118[iVar4] = '\0';
  iVar4 = atoi(local_118);
  *aScript = pcVar3;
  return iVar4;


}





