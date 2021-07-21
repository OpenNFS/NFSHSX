#include "THISDUST.H"
#include "UNPACK.H"


// decompiled code
// original method signature: 
// long /*$ra*/ unpackz(void *src /*$a0*/, void *dst /*$a1*/)
 // line 59, offset 0x800e3e68
	/* begin block 1 */
		// Start line: 60
		// Start offset: 0x800E3E68
		// Variables:
	// 		long len; // $a2
	/* end block 1 */
	// End offset: 0x800E3F0C
	// End Line: 101

	/* begin block 2 */
		// Start line: 118
	/* end block 2 */
	// End Line: 119

	/* begin block 3 */
		// Start line: 118
	/* end block 3 */
	// End Line: 119

long unpackz(void *src,void *dst)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  if ((*(char *)((int)src + 1) != -5) && (*(char *)((int)src + 1) != '2')) {
    return 0;
  }
  bVar3 = *(byte *)src & 0xfe;
  if (bVar3 != 0x32) {
    if (bVar3 < 0x33) {
      if (bVar3 == 0x10) {
        iVar1 = unrefpack((int *)src,(undefined *)dst,1);
        return iVar1;
      }
      if (bVar3 != 0x30) {
        return 0;
      }
    }
    else {
      if (bVar3 != 0x34) {
        if (bVar3 != 0x46) {
          return 0;
        }
        iVar1 = unbtree((byte *)src,(byte *)dst);
        return iVar1;
      }
    }
  }
  uVar2 = unhuff((byte *)src,(byte *)dst,1);
  return uVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ unpack(void *src /*$a0*/, void *dst /*$a1*/)
 // line 104, offset 0x800e3f1c
	/* begin block 1 */
		// Start line: 105
		// Start offset: 0x800E3F1C
	/* end block 1 */
	// End offset: 0x800E3F1C
	// End Line: 105

	/* begin block 2 */
		// Start line: 206
	/* end block 2 */
	// End Line: 207

	/* begin block 3 */
		// Start line: 209
	/* end block 3 */
	// End Line: 210

	/* begin block 4 */
		// Start line: 209
	/* end block 4 */
	// End Line: 210

long unpack(void *src,void *dst)

{
  long lVar1;
  
  lVar1 = unpackz(src,dst);
  return lVar1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ unpacksizez(void *src /*$a0*/)
 // line 165, offset 0x800e3f3c
	/* begin block 1 */
		// Start line: 166
		// Start offset: 0x800E3F3C
		// Variables:
	// 		long len; // $a1
	/* end block 1 */
	// End offset: 0x800E3FF4
	// End Line: 193

	/* begin block 2 */
		// Start line: 282
	/* end block 2 */
	// End Line: 283

	/* begin block 3 */
		// Start line: 331
	/* end block 3 */
	// End Line: 332

	/* begin block 4 */
		// Start line: 331
	/* end block 4 */
	// End Line: 332

long unpacksizez(void *src)

{
  uint uVar1;
  byte bVar2;
  
  if ((*(char *)((int)src + 1) != -5) && (*(char *)((int)src + 1) != '2')) {
    return 0;
  }
  bVar2 = *(byte *)src & 0xfe;
  if (bVar2 != 0x32) {
    if (bVar2 < 0x33) {
      if (bVar2 != 0x18) {
        if (bVar2 < 0x19) {
          if (bVar2 != 0x10) {
            return 0;
          }
        }
        else {
          if (bVar2 != 0x30) {
            return 0;
          }
        }
      }
    }
    else {
      if (bVar2 != 0x46) {
        if (bVar2 < 0x47) {
          if (bVar2 != 0x34) {
            return 0;
          }
        }
        else {
          if (bVar2 != 0x4a) {
            return 0;
          }
        }
      }
    }
  }
  uVar1 = getm((byte *)((int)src + 2),3);
  return uVar1;
}



// decompiled code
// original method signature: 
// long /*$ra*/ unpacksize(void *src /*$a0*/)
 // line 196, offset 0x800e4004
	/* begin block 1 */
		// Start line: 197
		// Start offset: 0x800E4004
	/* end block 1 */
	// End offset: 0x800E4004
	// End Line: 197

	/* begin block 2 */
		// Start line: 391
	/* end block 2 */
	// End Line: 392

	/* begin block 3 */
		// Start line: 394
	/* end block 3 */
	// End Line: 395

	/* begin block 4 */
		// Start line: 394
	/* end block 4 */
	// End Line: 395

long unpacksize(void *src)

{
  long lVar1;
  
  lVar1 = unpacksizez(src);
  return lVar1;
}



// decompiled code
// original method signature: 
// void __main() /* __main method signature is not contained in the debug symbol data. This is likely either a library function or the game was compiled without debug symbols. Please refer to the TDR documentation for additional guidance. */
 // line 210, offset 0x800e4024
void __main(void)

{
  return;
}





