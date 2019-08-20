#include "NFS4.H"
#include "UDFF.H"

// decompiled code
// original method signature: 
// struct Udff_tInfo * /*$ra*/ Udff_Opena__FPcT0i(char *name /*$s2*/, char *mem /*$s1*/, int abortFlag /*$a2*/)
 // line 21, offset 0x800bba08
	/* begin block 1 */
		// Start line: 22
		// Start offset: 0x800BBA08
		// Variables:
	// 		struct Udff_tInfo *newHandle; // $s0
	/* end block 1 */
	// End offset: 0x800BBAB8
	// End Line: 77

Udff_tInfo * Udff_Opena__FPcT0i(char *name,char *mem,int abortFlag)

{
  Udff_tInfo *pUVar1;
  char *pcVar2;
  
  pUVar1 = (Udff_tInfo *)reservememadr(s_udffhandle_80056730,0xc,0x10);
  if (pUVar1 != (Udff_tInfo *)0x0) {
    if (name == (char *)0x0) {
      if (mem != (char *)0x0) {
        pUVar1->type = UDFF_MEMORY;
        pUVar1->handle = 0;
        pUVar1->memPtr = mem;
        return pUVar1;
      }
    }
    else {
      if (mem == (char *)0x0) {
        pUVar1->type = UDFF_FILE;
        pcVar2 = (char *)loadfileadrz(name,0);
        pUVar1->memPtr = pcVar2;
        *(char **)&pUVar1->handle = pcVar2;
        if (pcVar2 != (char *)0x0) {
          return pUVar1;
        }
        purgememadr((int)pUVar1);
        return (Udff_tInfo *)0x0;
      }
    }
    if (pUVar1 != (Udff_tInfo *)0x0) {
      purgememadr((int)pUVar1);
    }
  }
  return (Udff_tInfo *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Udff_Close__FP10Udff_tInfo(struct Udff_tInfo *handle /*$s0*/)
 // line 84, offset 0x800bbad0
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x800BBAD0
	/* end block 1 */
	// End offset: 0x800BBB14
	// End Line: 100

void Udff_Close__FP10Udff_tInfo(Udff_tInfo *handle)

{
  if (handle != (Udff_tInfo *)0x0) {
    if ((handle->type == UDFF_FILE) && (handle->handle != 0)) {
      purgememadr(handle->handle);
    }
    purgememadr((int)handle);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Udff_GetInt__FP10Udff_tInfo(struct Udff_tInfo *handle /*$a0*/)
 // line 105, offset 0x800bbb24
	/* begin block 1 */
		// Start line: 106
		// Start offset: 0x800BBB24
		// Variables:
	// 		int value; // $v0
	/* end block 1 */
	// End offset: 0x800BBB24
	// End Line: 121

int Udff_GetInt__FP10Udff_tInfo(Udff_tInfo *handle)

{
  int iVar1;
  
  iVar1 = *(int *)handle->memPtr;
  handle->memPtr = handle->memPtr + 1;
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Udff_GetBuffer__FP10Udff_tInfoPci(struct Udff_tInfo *handle /*$s0*/, char *mem /*$a1*/, int size /*$s1*/)
 // line 203, offset 0x800bbb3c
	/* begin block 1 */
		// Start line: 204
		// Start offset: 0x800BBB3C
	/* end block 1 */
	// End offset: 0x800BBB3C
	// End Line: 204

void Udff_GetBuffer__FP10Udff_tInfoPci(Udff_tInfo *handle,char *mem,int size)

{
  memcpy(mem,handle->memPtr,size);
  handle->memPtr = handle->memPtr + size;
  return;
}




