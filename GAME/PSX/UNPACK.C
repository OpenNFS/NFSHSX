#include "NFS4.H"
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

long unpackz(void *src,void *dst)
{
  long lVar1;
  byte bVar2;
  
  if ((*(char *)((int)src + 1) != -5) && (*(char *)((int)src + 1) != '2')) {
    return 0;
  }
  bVar2 = *(byte *)src & 0xfe;
  if (bVar2 != 0x32) {
    if (bVar2 < 0x33) {
      if (bVar2 == 0x10) {
        lVar1 = unrefpack(src,dst,1);
        return lVar1;
      }
      if (bVar2 != 0x30) {
        return 0;
      }
    }
    else {
      if (bVar2 != 0x34) {
        if (bVar2 != 0x46) {
          return 0;
        }
        lVar1 = unbtree();
        return lVar1;
      }
    }
  }
  lVar1 = unhuff(src,dst,1);
  return lVar1;


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

long unpacksizez(void *src)
{
  long lVar1;
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
  lVar1 = getm((int)src + 2,3);
  return lVar1;


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

long unpacksize(void *src)
{
  long lVar1;
  
  lVar1 = unpacksizez(src);
  return lVar1;


}





