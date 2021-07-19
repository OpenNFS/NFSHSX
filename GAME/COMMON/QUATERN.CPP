#include "THISDUST.H"
#include "QUATERN.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Quatern_VecInterpolate__FP8coorddefT0iT0(struct coorddef *cp0 /*$s0*/, struct coorddef *cp1 /*$s1*/, int weight /*$s2*/, struct coorddef *cp /*$s3*/)
 // line 59, offset 0x800ad5c8
	/* begin block 1 */
		// Start line: 60
		// Start offset: 0x800AD5C8
	/* end block 1 */
	// End offset: 0x800AD5C8
	// End Line: 60

	/* begin block 2 */
		// Start line: 118
	/* end block 2 */
	// End Line: 119

	/* begin block 3 */
		// Start line: 118
	/* end block 3 */
	// End Line: 119

void Quatern_VecInterpolate__FP8coorddefT0iT0(coorddef *cp0,coorddef *cp1,int weight,coorddef *cp)

{
  uint uVar1;
  
  uVar1 = fixedmult(cp1->x - cp0->x,weight);
  cp->x = cp0->x + uVar1;
  uVar1 = fixedmult(cp1->y - cp0->y,weight);
  cp->y = cp0->y + uVar1;
  uVar1 = fixedmult(cp1->z - cp0->z,weight);
  cp->z = cp0->z + uVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Quatern_Interpolate__FP5tQuatT0P8coorddefT2iT0T2(struct tQuat *q0 /*$s0*/, struct tQuat *q1 /*$s2*/, struct coorddef *cp0 /*$s5*/, struct coorddef *cp1 /*$s6*/, int weight /*stack 16*/, struct tQuat *q /*stack 20*/, struct coorddef *cp /*stack 24*/)
 // line 67, offset 0x800ad678
	/* begin block 1 */
		// Start line: 68
		// Start offset: 0x800AD678
	/* end block 1 */
	// End offset: 0x800AD678
	// End Line: 68

	/* begin block 2 */
		// Start line: 130
	/* end block 2 */
	// End Line: 131

	/* begin block 3 */
		// Start line: 134
	/* end block 3 */
	// End Line: 135

	/* begin block 4 */
		// Start line: 134
	/* end block 4 */
	// End Line: 135

void Quatern_Interpolate__FP5tQuatT0P8coorddefT2iT0T2
               (tQuat *q0,tQuat *q1,coorddef *cp0,coorddef *cp1,int weight,tQuat *q,coorddef *cp)

{
  uint uVar1;
  
  uVar1 = fixedmult((int)q1->x - (int)q0->x,weight);
  q->x = q0->x + (short)uVar1;
  uVar1 = fixedmult((int)q1->y - (int)q0->y,weight);
  q->y = q0->y + (short)uVar1;
  uVar1 = fixedmult((int)q1->z - (int)q0->z,weight);
  q->z = q0->z + (short)uVar1;
  uVar1 = fixedmult((int)q1->w - (int)q0->w,weight);
  q->w = q0->w + (short)uVar1;
  Quatern_VecInterpolate__FP8coorddefT0iT0(cp0,cp1,weight,cp);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Quatern_QuatToMat__FP5tQuatP10matrixtdef(struct tQuat *q /*$a0*/, struct matrixtdef *matrix /*$a1*/)
 // line 158, offset 0x800ad780
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x800AD780
		// Variables:
	// 		int one; // $a0
	// 		int x; // $v0
	// 		int y; // $t3
	// 		int z; // $t1
	// 		int wx; // $t5
	// 		int wy; // $t4
	// 		int wz; // $t2
	// 		int xx; // $t7
	// 		int xy; // $t0
	// 		int xz; // $a2
	// 		int yy; // $t3
	// 		int yz; // $a3
	// 		int zz; // $v1
	/* end block 1 */
	// End offset: 0x800AD780
	// End Line: 167

	/* begin block 2 */
		// Start line: 310
	/* end block 2 */
	// End Line: 311

	/* begin block 3 */
		// Start line: 247
	/* end block 3 */
	// End Line: 248

	/* begin block 4 */
		// Start line: 247
	/* end block 4 */
	// End Line: 248

	/* begin block 5 */
		// Start line: 255
	/* end block 5 */
	// End Line: 256

void Quatern_QuatToMat__FP5tQuatP10matrixtdef(tQuat *q,matrixtdef *matrix)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = (int)q->x;
  iVar5 = (int)q->w;
  iVar7 = iVar5 * iVar2 * 2;
  iVar3 = (int)q->y;
  iVar6 = iVar3 * 2;
  iVar4 = (int)q->z * 2;
  iVar8 = (int)q->z * iVar4;
  iVar1 = 0x10000000 - iVar2 * iVar2 * 2;
  matrix->m[0] = (0x10000000 - iVar3 * iVar6) - iVar8 >> 0xc;
  matrix->m[1] = iVar2 * iVar6 + iVar5 * iVar4 >> 0xc;
  matrix->m[3] = iVar2 * iVar6 - iVar5 * iVar4 >> 0xc;
  matrix->m[4] = iVar1 - iVar8 >> 0xc;
  matrix->m[8] = iVar1 - iVar3 * iVar6 >> 0xc;
  matrix->m[2] = iVar2 * iVar4 - iVar5 * iVar6 >> 0xc;
  matrix->m[6] = iVar2 * iVar4 + iVar5 * iVar6 >> 0xc;
  matrix->m[5] = iVar3 * iVar4 + iVar7 >> 0xc;
  matrix->m[7] = iVar3 * iVar4 - iVar7 >> 0xc;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Quatern_MatToQuat__FP10matrixtdefP5tQuat(struct matrixtdef *matrix /*$s1*/, struct tQuat *q /*$s2*/)
 // line 206, offset 0x800ad890
	/* begin block 1 */
		// Start line: 207
		// Start offset: 0x800AD890
		// Variables:
	// 		int tr; // $v0
	// 		int s; // $s0
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x800ADC14
	// End Line: 276

	/* begin block 2 */
		// Start line: 416
	/* end block 2 */
	// End Line: 417

	/* begin block 3 */
		// Start line: 433
	/* end block 3 */
	// End Line: 434

	/* begin block 4 */
		// Start line: 433
	/* end block 4 */
	// End Line: 434

void Quatern_MatToQuat__FP10matrixtdefP5tQuat(matrixtdef *matrix,tQuat *q)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((((((matrix->m[0] == 0x10000) && (matrix->m[1] == 0)) && (matrix->m[2] == 0)) &&
       ((matrix->m[3] == 0 && (matrix->m[4] == 0x10000)))) &&
      ((matrix->m[5] == 0 && ((matrix->m[6] == 0 && (matrix->m[7] == 0)))))) &&
     (matrix->m[8] == 0x10000)) {
    q->w = 0x4000;
    q->x = 0;
    q->y = 0;
    q->z = 0;
    return;
  }
  iVar4 = matrix->m[4];
  iVar1 = matrix->m[0] + iVar4 + matrix->m[8];
  if (iVar1 < 1) {
    uVar2 = 0;
    if ((matrix->m[0] < iVar4) && (uVar2 = 1, iVar4 < matrix->m[8])) {
      uVar2 = 2;
    }
    iVar4 = matrix->m[8];
    iVar1 = matrix->m[0];
    if (iVar1 < iVar4) {
      uVar2 = 2;
    }
    if (uVar2 == 1) {
      uVar2 = fixedsqrt((matrix->m[4] - (iVar4 + iVar1)) + 0x10000);
      q->y = (short)((int)(uVar2 + (uVar2 >> 0x1f)) >> 3);
      if (uVar2 != 0) {
        uVar2 = fixeddiv(0x8000,uVar2);
      }
      uVar3 = fixedmult(matrix->m[2] - matrix->m[6],uVar2);
      q->w = (short)((int)uVar3 >> 2);
      uVar3 = fixedmult(matrix->m[7] + matrix->m[5],uVar2);
      q->z = (short)((int)uVar3 >> 2);
      uVar2 = fixedmult(matrix->m[3] + matrix->m[1],uVar2);
      q->x = (short)((int)uVar2 >> 2);
      return;
    }
    if (1 < uVar2) {
      if (uVar2 != 2) {
        return;
      }
      uVar2 = fixedsqrt((iVar4 - (iVar1 + matrix->m[4])) + 0x10000);
      q->z = (short)((int)(uVar2 + (uVar2 >> 0x1f)) >> 3);
      if (uVar2 != 0) {
        uVar2 = fixeddiv(0x8000,uVar2);
      }
      uVar3 = fixedmult(matrix->m[3] - matrix->m[1],uVar2);
      q->w = (short)((int)uVar3 >> 2);
      uVar3 = fixedmult(matrix->m[2] + matrix->m[6],uVar2);
      q->x = (short)((int)uVar3 >> 2);
      uVar2 = fixedmult(matrix->m[5] + matrix->m[7],uVar2);
      q->y = (short)((int)uVar2 >> 2);
      return;
    }
    if (uVar2 != 0) {
      return;
    }
    uVar2 = fixedsqrt((iVar1 - (matrix->m[4] + iVar4)) + 0x10000);
    q->x = (short)((int)(uVar2 + (uVar2 >> 0x1f)) >> 3);
    if (uVar2 != 0) {
      uVar2 = fixeddiv(0x8000,uVar2);
    }
    uVar3 = fixedmult(matrix->m[7] - matrix->m[5],uVar2);
    q->w = (short)((int)uVar3 >> 2);
    uVar3 = fixedmult(matrix->m[3] + matrix->m[1],uVar2);
    q->y = (short)((int)uVar3 >> 2);
    iVar1 = matrix->m[2] + matrix->m[6];
  }
  else {
    uVar2 = fixedsqrt(iVar1 + 0x10000);
    q->w = (short)((int)(uVar2 + (uVar2 >> 0x1f)) >> 3);
    uVar2 = fixeddiv(0x8000,uVar2);
    uVar3 = fixedmult(matrix->m[7] - matrix->m[5],uVar2);
    q->x = (short)((int)uVar3 >> 2);
    uVar3 = fixedmult(matrix->m[2] - matrix->m[6],uVar2);
    q->y = (short)((int)uVar3 >> 2);
    iVar1 = matrix->m[3] - matrix->m[1];
  }
  uVar2 = fixedmult(iVar1,uVar2);
  q->z = (short)((int)uVar2 >> 2);
  return;
}





