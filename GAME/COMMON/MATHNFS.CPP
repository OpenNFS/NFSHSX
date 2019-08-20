#include "NFS4.H"
#include "MATHNFS.H"

// decompiled code
// original method signature: 
// int /*$ra*/ Math_DistXZ__FP8coorddefT0(struct coorddef *a /*$a0*/, struct coorddef *b /*$a1*/)
 // line 26, offset 0x8009d3e4
	/* begin block 1 */
		// Start line: 27
		// Start offset: 0x8009D3E4
		// Variables:
	// 		int dist; // $v0
	// 		int ax; // $v1
	// 		int bx; // $v0
	// 		int az; // $a3
	// 		int bz; // $a0
	// 		int x; // $a2
	// 		int z; // $v1
	/* end block 1 */
	// End offset: 0x8009D430
	// End Line: 39

int Math_DistXZ__FP8coorddefT0(coorddef *a,coorddef *b)

{
  int iVar1;
  int iVar2;
  
  iVar2 = a->x - b->x;
  if (iVar2 < 1) {
    iVar2 = b->x - a->x;
  }
  iVar1 = a->z - b->z;
  if (iVar1 < 1) {
    iVar1 = b->z - a->z;
  }
  if (iVar1 < iVar2) {
    return iVar2 + (iVar1 >> 2);
  }
  return iVar1 + (iVar2 >> 2);
}



// decompiled code
// original method signature: 
// int /*$ra*/ Math_Dist3D__FP8coorddefT0(struct coorddef *a /*$a0*/, struct coorddef *b /*$a1*/)
 // line 42, offset 0x8009d438
	/* begin block 1 */
		// Start line: 43
		// Start offset: 0x8009D438
		// Variables:
	// 		int dist; // $v1
	// 		int dist2; // $v0
	// 		int x; // $a3
	// 		int y; // $v1
	// 		int z; // $a2
	/* end block 1 */
	// End offset: 0x8009D4C0
	// End Line: 54

int Math_Dist3D__FP8coorddefT0(coorddef *a,coorddef *b)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = a->x - b->x;
  if (iVar3 < 1) {
    iVar3 = b->x - a->x;
  }
  iVar1 = a->y - b->y;
  if (iVar1 < 1) {
    iVar1 = b->y - a->y;
  }
  iVar2 = a->z - b->z;
  if (iVar2 < 1) {
    iVar2 = b->z - a->z;
  }
  if (iVar1 < iVar3) {
    iVar3 = iVar3 + (iVar1 >> 2);
  }
  else {
    iVar3 = iVar1 + (iVar3 >> 2);
  }
  if (iVar2 < iVar3) {
    return iVar3 + (iVar2 >> 2);
  }
  return iVar2 + (iVar3 >> 2);
}



// decompiled code
// original method signature: 
// int /*$ra*/ Math_BetterDist__Fii(int a /*$a0*/, int b /*$a1*/)
 // line 57, offset 0x8009d4c8
	/* begin block 1 */
		// Start line: 58
		// Start offset: 0x8009D4C8
		// Variables:
	// 		int x; // $a2
	// 		int y; // $a0
	/* end block 1 */
	// End offset: 0x8009D620
	// End Line: 80

int Math_BetterDist__Fii(int a,int b)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = a;
  if (b < a) {
    iVar5 = b;
    b = a;
  }
  iVar2 = iVar5 >> 6;
  iVar2 = iVar5 >> 7;
  iVar2 = iVar5 >> 9;
  iVar3 = iVar5 >> 0xe;
  if (iVar5 < b >> 2) {
    iVar1 = b + (iVar5 >> 4) + iVar2 + iVar2 + iVar2 + iVar3;
    iVar3 = iVar5 >> 0xf;
  }
  else {
    iVar4 = iVar5 >> 5;
    iVar4 = iVar5 >> 8;
    iVar4 = iVar5 >> 0xc;
    iVar1 = iVar5 >> 0xd;
    if (b >> 1 <= iVar5) {
      if (iVar5 < (b >> 1) + (b >> 2)) {
        return b + (iVar5 >> 2) + iVar4 + iVar4 + (iVar5 >> 10) + (iVar5 >> 0xb) + iVar4 + iVar1;
      }
      return b + (iVar5 >> 2) + (iVar5 >> 4) + iVar4 + iVar2 + iVar2 + iVar4 + iVar2 +
             (iVar5 >> 0xb) + iVar4 + iVar1 + iVar3 + (iVar5 >> 0xf);
    }
    iVar1 = b + (iVar5 >> 3) + iVar4 + iVar2 + iVar2 + iVar4 + iVar2 + iVar4 + iVar1;
  }
  return iVar1 + iVar3 + (iVar5 >> 0x10);
}



// decompiled code
// original method signature: 
// void /*$ra*/ Math_ResolveRotatedVector__FiiiPiT3(int x /*$s3*/, int y /*$s4*/, int angle /*$a2*/, int *newx /*$s5*/, int *newy /*stack 16*/)
 // line 96, offset 0x8009d628
	/* begin block 1 */
		// Start line: 97
		// Start offset: 0x8009D628
		// Variables:
	// 		int ds; // $s1
	// 		int dc; // $s2
	// 		int a; // $s0
	/* end block 1 */
	// End offset: 0x8009D65C
	// End Line: 100

void Math_ResolveRotatedVector__FiiiPiT3(int x,int y,int angle,int *newx,int *newy)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (angle < 0) {
    angle = angle + 0xff;
  }
  puVar1 = fixedsin(angle >> 8);
  puVar2 = fixedcos(angle >> 8);
  uVar3 = fixedmult((int)puVar2,x);
  uVar4 = fixedmult((int)puVar1,y);
  *newx = uVar3 - uVar4;
  uVar3 = fixedmult((int)puVar1,x);
  uVar4 = fixedmult((int)puVar2,y);
  *newy = uVar3 + uVar4;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Math_VectorLength__FP8coorddef(struct coorddef *v /*$a0*/)
 // line 132, offset 0x8009d6ec
	/* begin block 1 */
		// Start line: 133
		// Start offset: 0x8009D6EC
		// Variables:
	// 		int vx; // $s2
	// 		int vy; // $s1
	// 		int vz; // $s0
	// 		unsigned int vx2; // $s5
	// 		unsigned int vy2; // $s4
	// 		unsigned int vz2; // $a2
	// 		unsigned int vx2s; // $v0
	// 		unsigned int vy2s; // $a0
	// 		unsigned int vz2s; // $a1
	// 		int length; // $v0
	// 		int shifts; // $s3
	/* end block 1 */
	// End offset: 0x8009D860
	// End Line: 200

int Math_VectorLength__FP8coorddef(coorddef *v)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  iVar8 = v->x;
  iVar7 = v->y;
  iVar6 = v->z;
  iVar5 = iVar8;
  if (iVar8 < 0) {
    iVar5 = -iVar8;
  }
  do {
    if (iVar5 < 0x1000001) {
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = -iVar7;
      }
      if (iVar5 < 0x1000001) {
        iVar5 = iVar6;
        if (iVar6 < 0) {
          iVar5 = -iVar6;
        }
        if (iVar5 < 0x1000001) {
          uVar1 = fixedmult(iVar8,iVar8);
          uVar2 = fixedmult(iVar7,iVar7);
          uVar3 = fixedmult(iVar6,iVar6);
          uVar4 = (uVar1 >> 2) + (uVar2 >> 2) + (uVar3 >> 2);
          iVar5 = uVar1 + uVar2;
          while (0x40000000 < uVar4) {
            iVar8 = iVar8 >> 1;
            iVar7 = iVar7 >> 1;
            iVar6 = iVar6 >> 1;
            iVar9 = iVar9 + 1;
            uVar1 = fixedmult(iVar8,iVar8);
            uVar2 = fixedmult(iVar7,iVar7);
            uVar3 = fixedmult(iVar6,iVar6);
            uVar4 = (uVar1 >> 2) + (uVar2 >> 2) + (uVar3 >> 2);
            iVar5 = uVar1 + uVar2;
          }
          iVar5 = fixedsqrt(iVar5 + uVar3);
          while (iVar9 != 0) {
            iVar9 = iVar9 + -1;
            iVar5 = iVar5 << 1;
          }
          return iVar5;
        }
      }
    }
    iVar8 = iVar8 >> 1;
    iVar7 = iVar7 >> 1;
    iVar6 = iVar6 >> 1;
    iVar9 = iVar9 + 1;
    iVar5 = iVar8;
    if (iVar8 < 0) {
      iVar5 = -iVar8;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ Math_VectorLength2__FP8coorddef(struct coorddef *v /*$a0*/)
 // line 207, offset 0x8009d888
	/* begin block 1 */
		// Start line: 208
		// Start offset: 0x8009D888
		// Variables:
	// 		int vx; // $s2
	// 		int vy; // $s1
	// 		int vz; // $s0
	// 		unsigned int vx2; // $s5
	// 		unsigned int vy2; // $s4
	// 		unsigned int vz2; // $a2
	// 		unsigned int vx2s; // $v0
	// 		unsigned int vy2s; // $a0
	// 		unsigned int vz2s; // $a1
	// 		int length2; // $v0
	// 		int shifts; // $s3
	/* end block 1 */
	// End offset: 0x8009D9F4
	// End Line: 274

int Math_VectorLength2__FP8coorddef(coorddef *v)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  iVar8 = v->x;
  iVar7 = v->y;
  iVar6 = v->z;
  iVar4 = iVar8;
  if (iVar8 < 0) {
    iVar4 = -iVar8;
  }
  do {
    if (iVar4 < 0x1000001) {
      iVar4 = iVar7;
      if (iVar7 < 0) {
        iVar4 = -iVar7;
      }
      if (iVar4 < 0x1000001) {
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = -iVar6;
        }
        if (iVar4 < 0x1000001) {
          uVar1 = fixedmult(iVar8,iVar8);
          uVar2 = fixedmult(iVar7,iVar7);
          uVar3 = fixedmult(iVar6,iVar6);
          uVar5 = (uVar1 >> 2) + (uVar2 >> 2) + (uVar3 >> 2);
          iVar4 = uVar1 + uVar2;
          while (0x40000000 < uVar5) {
            iVar8 = iVar8 >> 1;
            iVar7 = iVar7 >> 1;
            iVar6 = iVar6 >> 1;
            iVar9 = iVar9 + 1;
            uVar1 = fixedmult(iVar8,iVar8);
            uVar2 = fixedmult(iVar7,iVar7);
            uVar3 = fixedmult(iVar6,iVar6);
            uVar5 = (uVar1 >> 2) + (uVar2 >> 2) + (uVar3 >> 2);
            iVar4 = uVar1 + uVar2;
          }
          iVar4 = iVar4 + uVar3;
          while (iVar9 != 0) {
            iVar9 = iVar9 + -1;
            iVar4 = iVar4 << 2;
          }
          return iVar4;
        }
      }
    }
    iVar8 = iVar8 >> 1;
    iVar7 = iVar7 >> 1;
    iVar6 = iVar6 >> 1;
    iVar9 = iVar9 + 1;
    iVar4 = iVar8;
    if (iVar8 < 0) {
      iVar4 = -iVar8;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ Math_NormalizeVector__FP8coorddef(struct coorddef *v /*$s5*/)
 // line 298, offset 0x8009da1c
	/* begin block 1 */
		// Start line: 299
		// Start offset: 0x8009DA1C
		// Variables:
	// 		int vx; // $s0
	// 		int vy; // $s1
	// 		int vz; // $s2
	// 		unsigned int vx2; // $s4
	// 		unsigned int vy2; // $s3
	// 		unsigned int vz2; // $a2
	// 		unsigned int vx2s; // $v0
	// 		unsigned int vy2s; // $a0
	// 		unsigned int vz2s; // $a1
	// 		int length; // $s3
	/* end block 1 */
	// End offset: 0x8009DBAC
	// End Line: 361

void Math_NormalizeVector__FP8coorddef(coorddef *v)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = v->x;
  uVar7 = v->y;
  uVar8 = v->z;
  uVar1 = uVar6;
  if ((int)uVar6 < 0) {
    uVar1 = -uVar6;
  }
  do {
    if ((int)uVar1 < 0x1000001) {
      uVar1 = uVar7;
      if ((int)uVar7 < 0) {
        uVar1 = -uVar7;
      }
      if ((int)uVar1 < 0x1000001) {
        uVar1 = uVar8;
        if ((int)uVar8 < 0) {
          uVar1 = -uVar8;
        }
        if ((int)uVar1 < 0x1000001) {
          uVar1 = fixedmult(uVar6,uVar6);
          uVar2 = fixedmult(uVar7,uVar7);
          uVar3 = fixedmult(uVar8,uVar8);
          uVar5 = (uVar1 >> 2) + (uVar2 >> 2) + (uVar3 >> 2);
          while (0x40000000 < uVar5) {
            uVar6 = (int)uVar6 >> 1;
            uVar7 = (int)uVar7 >> 1;
            uVar8 = (int)uVar8 >> 1;
            uVar1 = fixedmult(uVar6,uVar6);
            uVar2 = fixedmult(uVar7,uVar7);
            uVar3 = fixedmult(uVar8,uVar8);
            uVar5 = (uVar1 >> 2) + (uVar2 >> 2) + (uVar3 >> 2);
          }
          uVar1 = fixedsqrt(uVar1 + uVar2 + uVar3);
          if (uVar1 != 0) {
            iVar4 = fixeddiv(uVar6,uVar1);
            v->x = iVar4;
            iVar4 = fixeddiv(uVar7,uVar1);
            v->y = iVar4;
            iVar4 = fixeddiv(uVar8,uVar1);
            v->z = iVar4;
          }
          return;
        }
      }
    }
    uVar6 = (int)uVar6 >> 1;
    uVar7 = (int)uVar7 >> 1;
    uVar8 = (int)uVar8 >> 1;
    uVar1 = uVar6;
    if ((int)uVar6 < 0) {
      uVar1 = -uVar6;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ Math_NormalizeShortVector__FP8coorddef(struct coorddef *v /*$s2*/)
 // line 371, offset 0x8009dbd4
	/* begin block 1 */
		// Start line: 372
		// Start offset: 0x8009DBD4
		// Variables:
	// 		int inverse; // $s0
	// 		int length; // $v0
	/* end block 1 */
	// End offset: 0x8009DC68
	// End Line: 386

void Math_NormalizeShortVector__FP8coorddef(coorddef *v)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = fixedmult(v->x,v->x);
  uVar2 = fixedmult(v->y,v->y);
  uVar3 = fixedmult(v->z,v->z);
  uVar1 = fixedsqrt(uVar1 + uVar2 + uVar3);
  if (uVar1 != 0) {
    iVar4 = fixeddiv(0x10000,uVar1);
    uVar1 = fixedmult(v->x,iVar4);
    v->x = uVar1;
    uVar1 = fixedmult(v->y,iVar4);
    v->y = uVar1;
    uVar1 = fixedmult(v->z,iVar4);
    v->z = uVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Math_QDNormalizeVector__FP8coorddef(struct coorddef *v /*$s0*/)
 // line 396, offset 0x8009dc80
	/* begin block 1 */
		// Start line: 397
		// Start offset: 0x8009DC80
		// Variables:
	// 		struct coorddef temp; // stack offset -24
	// 		int length; // $v0
	// 		int inverse; // $a0
	/* end block 1 */
	// End offset: 0x8009DD7C
	// End Line: 417

void Math_QDNormalizeVector__FP8coorddef(coorddef *v)

{
  int a;
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = v->x;
  local_14 = v->y;
  local_10 = v->z;
  if (local_18 < 0) {
    local_18 = -local_18;
  }
  if (local_14 < 0) {
    local_14 = -local_14;
  }
  if (local_10 < 0) {
    local_10 = -local_10;
  }
  a = Math_BetterDist__Fii(local_18,local_14);
  uVar1 = Math_BetterDist__Fii(a,local_10);
  if (uVar1 != 0) {
    a = rinverse(uVar1);
    iVar3 = v->x;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    if (a < 0) {
      a = a + 0xff;
    }
    a = a >> 8;
    iVar2 = v->y;
    v->x = (iVar3 >> 8) * a;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar3 = v->z;
    v->y = (iVar2 >> 8) * a;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    v->z = (iVar3 >> 8) * a;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Math_fasttransmult__FP10matrixtdefN20(struct matrixtdef *m1 /*$s2*/, struct matrixtdef *m2 /*$a1*/, struct matrixtdef *mr /*$s1*/)
 // line 533, offset 0x8009dd8c
	/* begin block 1 */
		// Start line: 534
		// Start offset: 0x8009DD8C
		// Variables:
	// 		int i; // $t6
	// 		int j; // $t1
	// 		int val; // $v1
	// 		struct matrixtdef mtmp; // stack offset -56
	// 		int ta; // $a0
	// 		int tb; // $v0
	// 		int tc; // $t0
	// 		int td; // $a3
	// 		int te; // $v1
	// 		int tf; // $v0
	/* end block 1 */
	// End offset: 0x8009DE74
	// End Line: 567

void Math_fasttransmult__FP10matrixtdefN20(matrixtdef *m1,matrixtdef *m2,matrixtdef *mr)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  matrixtdef *pmVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  matrixtdef *pmVar9;
  int iVar10;
  int iVar11;
  int local_38 [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar8 = 0;
  iVar11 = 8;
  iVar10 = 4;
  pmVar9 = m1;
  do {
    iVar4 = 0;
    iVar7 = 0x18;
    iVar6 = 0xc;
    pmVar5 = m2;
    do {
      piVar1 = pmVar5->m;
      piVar2 = (int *)((int)m2->m + iVar6);
      pmVar5 = (matrixtdef *)(pmVar5->m + 1);
      iVar6 = iVar6 + 4;
      iVar3 = iVar8 + iVar4;
      iVar4 = iVar4 + 1;
      local_38[iVar3] =
           ((pmVar9->m[0] >> 3) * (*piVar1 >> 3) >> 10) +
           ((*(int *)((int)m1->m + iVar10) >> 3) * (*piVar2 >> 3) >> 10) +
           ((*(int *)((int)m1->m + iVar11) >> 3) * (*(int *)((int)m2->m + iVar7) >> 3) >> 10);
      iVar7 = iVar7 + 4;
    } while (iVar4 < 3);
    iVar11 = iVar11 + 0xc;
    iVar10 = iVar10 + 0xc;
    iVar8 = iVar8 + 3;
    pmVar9 = (matrixtdef *)(pmVar9->m + 3);
  } while (iVar8 < 9);
  mr->m[0] = local_38[0];
  mr->m[1] = local_38[1];
  mr->m[2] = local_38[2];
  mr->m[3] = local_38[3];
  mr->m[4] = local_28;
  mr->m[5] = local_24;
  mr->m[6] = local_20;
  mr->m[7] = local_1c;
  mr->m[8] = local_18;
  return;
}




