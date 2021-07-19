#include "THISDUST.H"
#include "COLLIDE.H"


// decompiled code
// original method signature: 
// int /*$ra*/ CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(int X_DIR /*$t5*/, int Y_DIR /*$a1*/, int Z_DIR /*$a2*/)
 // line 100, offset 0x8008ba70
	/* begin block 1 */
		// Start line: 101
		// Start offset: 0x8008BA70
	/* end block 1 */
	// End offset: 0x8008BEE8
	// End Line: 128

	/* begin block 2 */
		// Start line: 200
	/* end block 2 */
	// End Line: 201

	/* begin block 3 */
		// Start line: 200
	/* end block 3 */
	// End Line: 201

	/* begin block 4 */
		// Start line: 202
	/* end block 4 */
	// End Line: 203

int CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(int X_DIR,int Y_DIR,int Z_DIR)

{
  BO_tNewtonObj *pBVar1;
  BO_tNewtonObj *pBVar2;
  coorddef *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pcVar3 = pNormal;
  pBVar1 = obj1;
  xRange = (uchar *)(X_DIR * scaledBasisDots + Y_DIR * INT_8013e03c + Z_DIR * INT_8013e040 +
                    basisDotRelative);
  yRange = (uchar *)(X_DIR * INT_8013e044 + Y_DIR * INT_8013e048 + Z_DIR * INT_8013e04c +
                    INT_8013e09c);
  iVar9 = (obj0->dimension).z;
  zRange = (uchar *)(X_DIR * INT_8013e050 + Y_DIR * INT_8013e054 + Z_DIR * INT_8013e058 +
                    INT_8013e0a0);
  if (((((int)zRange <= iVar9) && (-iVar9 <= (int)zRange)) &&
      (iVar9 = (obj0->dimension).x, (int)xRange <= iVar9)) &&
     (((-iVar9 <= (int)xRange && (iVar9 = (obj0->dimension).y, (int)yRange <= iVar9)) &&
      (-iVar9 <= (int)yRange)))) {
    pNormal->x = X_DIR * (obj1->orientMat).m[0] + Y_DIR * (obj1->orientMat).m[3] +
                 Z_DIR * (obj1->orientMat).m[6];
    pcVar3->y = X_DIR * (pBVar1->orientMat).m[1] + Y_DIR * (pBVar1->orientMat).m[4] +
                Z_DIR * (pBVar1->orientMat).m[7];
    pcVar3->z = X_DIR * (pBVar1->orientMat).m[2] + Y_DIR * (pBVar1->orientMat).m[5] +
                Z_DIR * (pBVar1->orientMat).m[8];
    pcVar3 = pP;
    iVar9 = (pBVar1->orientMat).m[0];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar4 = (pBVar1->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = (pBVar1->orientMat).m[3];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar5 = (pBVar1->dimension).y;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (pBVar1->orientMat).m[6];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar6 = (pBVar1->dimension).z;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    pP->x = (pBVar1->position).x + X_DIR * (iVar9 >> 8) * (iVar4 >> 8) +
            Y_DIR * (iVar7 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar8 >> 8) * (iVar6 >> 8);
    pBVar2 = obj1;
    iVar9 = (pBVar1->orientMat).m[1];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar4 = (pBVar1->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = (pBVar1->orientMat).m[4];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar5 = (pBVar1->dimension).y;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (obj1->orientMat).m[7];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar6 = (obj1->dimension).z;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    pcVar3->y = (pBVar1->position).y + X_DIR * (iVar9 >> 8) * (iVar4 >> 8) +
                Y_DIR * (iVar7 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar8 >> 8) * (iVar6 >> 8);
    iVar9 = (pBVar2->orientMat).m[2];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar4 = (pBVar2->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = (pBVar2->orientMat).m[5];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar5 = (pBVar2->dimension).y;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (pBVar2->orientMat).m[8];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar6 = (pBVar2->dimension).z;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    pP->z = (pBVar2->position).z + X_DIR * (iVar9 >> 8) * (iVar4 >> 8) +
            Y_DIR * (iVar7 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar8 >> 8) * (iVar6 >> 8);
    return 1;
  }
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(int X_DIR /*$t5*/, int Y_DIR /*$a1*/, int Z_DIR /*$a2*/)
 // line 131, offset 0x8008bef0
	/* begin block 1 */
		// Start line: 132
		// Start offset: 0x8008BEF0
	/* end block 1 */
	// End offset: 0x8008C374
	// End Line: 158

	/* begin block 2 */
		// Start line: 281
	/* end block 2 */
	// End Line: 282

	/* begin block 3 */
		// Start line: 285
	/* end block 3 */
	// End Line: 286

	/* begin block 4 */
		// Start line: 285
	/* end block 4 */
	// End Line: 286

	/* begin block 5 */
		// Start line: 286
	/* end block 5 */
	// End Line: 287

	/* begin block 6 */
		// Start line: 286
	/* end block 6 */
	// End Line: 287

int CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(int X_DIR,int Y_DIR,int Z_DIR)

{
  BO_tNewtonObj *pBVar1;
  BO_tNewtonObj *pBVar2;
  coorddef *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pcVar3 = pNormal;
  pBVar1 = obj0;
  xRange = (uchar *)((X_DIR * scaledBasisDotsOther + Y_DIR * INT_8013e074 + Z_DIR * INT_8013e080) -
                    INT_8013e0a4);
  yRange = (uchar *)((X_DIR * INT_8013e06c + Y_DIR * INT_8013e078 + Z_DIR * INT_8013e084) -
                    INT_8013e0a8);
  iVar9 = (obj1->dimension).z;
  zRange = (uchar *)((X_DIR * INT_8013e070 + Y_DIR * INT_8013e07c + Z_DIR * INT_8013e088) -
                    INT_8013e0ac);
  if (((((int)zRange <= iVar9) && (-iVar9 <= (int)zRange)) &&
      (iVar9 = (obj1->dimension).x, (int)xRange <= iVar9)) &&
     (((-iVar9 <= (int)xRange && (iVar9 = (obj1->dimension).y, (int)yRange <= iVar9)) &&
      (-iVar9 <= (int)yRange)))) {
    pNormal->x = -(X_DIR * (obj0->orientMat).m[0] + Y_DIR * (obj0->orientMat).m[3] +
                  Z_DIR * (obj0->orientMat).m[6]);
    pcVar3->y = -(X_DIR * (pBVar1->orientMat).m[1] + Y_DIR * (pBVar1->orientMat).m[4] +
                 Z_DIR * (pBVar1->orientMat).m[7]);
    pcVar3->z = -(X_DIR * (pBVar1->orientMat).m[2] + Y_DIR * (pBVar1->orientMat).m[5] +
                 Z_DIR * (pBVar1->orientMat).m[8]);
    pcVar3 = pP;
    iVar9 = (pBVar1->orientMat).m[0];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar4 = (pBVar1->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = (pBVar1->orientMat).m[3];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar5 = (pBVar1->dimension).y;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (pBVar1->orientMat).m[6];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar6 = (pBVar1->dimension).z;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    pP->x = (pBVar1->position).x + X_DIR * (iVar9 >> 8) * (iVar4 >> 8) +
            Y_DIR * (iVar7 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar8 >> 8) * (iVar6 >> 8);
    pBVar2 = obj0;
    iVar9 = (pBVar1->orientMat).m[1];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar4 = (pBVar1->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = (pBVar1->orientMat).m[4];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar5 = (pBVar1->dimension).y;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (obj0->orientMat).m[7];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar6 = (obj0->dimension).z;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    pcVar3->y = (pBVar1->position).y + X_DIR * (iVar9 >> 8) * (iVar4 >> 8) +
                Y_DIR * (iVar7 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar8 >> 8) * (iVar6 >> 8);
    iVar9 = (pBVar2->orientMat).m[2];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar4 = (pBVar2->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = (pBVar2->orientMat).m[5];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar5 = (pBVar2->dimension).y;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (pBVar2->orientMat).m[8];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar6 = (pBVar2->dimension).z;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    pP->z = (pBVar2->position).z + X_DIR * (iVar9 >> 8) * (iVar4 >> 8) +
            Y_DIR * (iVar7 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar8 >> 8) * (iVar6 >> 8);
    return 1;
  }
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CHECK_VERTEX_WITH_DIRS__Fiii(int X_DIR /*$t5*/, int Y_DIR /*$a1*/, int Z_DIR /*$a2*/)
 // line 161, offset 0x8008c37c
	/* begin block 1 */
		// Start line: 162
		// Start offset: 0x8008C37C
	/* end block 1 */
	// End offset: 0x8008C73C
	// End Line: 183

	/* begin block 2 */
		// Start line: 363
	/* end block 2 */
	// End Line: 364

	/* begin block 3 */
		// Start line: 367
	/* end block 3 */
	// End Line: 368

	/* begin block 4 */
		// Start line: 367
	/* end block 4 */
	// End Line: 368

	/* begin block 5 */
		// Start line: 369
	/* end block 5 */
	// End Line: 370

int CHECK_VERTEX_WITH_DIRS__Fiii(int X_DIR,int Y_DIR,int Z_DIR)

{
  BO_tNewtonObj *pBVar1;
  BO_tNewtonObj *pBVar2;
  coorddef *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pcVar3 = pP;
  pBVar1 = obj1;
  xRange = (uchar *)(X_DIR * scaledBasisDots + Y_DIR * INT_8013e03c + Z_DIR * INT_8013e040 +
                    basisDotRelative);
  yRange = (uchar *)(X_DIR * INT_8013e044 + Y_DIR * INT_8013e048 + Z_DIR * INT_8013e04c +
                    INT_8013e09c);
  iVar9 = (obj0->dimension).z;
  zRange = (uchar *)(X_DIR * INT_8013e050 + Y_DIR * INT_8013e054 + Z_DIR * INT_8013e058 +
                    INT_8013e0a0);
  if (((((int)zRange <= iVar9) && (-iVar9 <= (int)zRange)) &&
      (iVar9 = (obj0->dimension).x, (int)xRange <= iVar9)) &&
     (((-iVar9 <= (int)xRange && (iVar9 = (obj0->dimension).y, (int)yRange <= iVar9)) &&
      (-iVar9 <= (int)yRange)))) {
    iVar9 = (obj1->orientMat).m[0];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar4 = (obj1->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = (obj1->orientMat).m[3];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar5 = (obj1->dimension).y;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (obj1->orientMat).m[6];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar6 = (obj1->dimension).z;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    pP->x = (obj1->position).x + X_DIR * (iVar9 >> 8) * (iVar4 >> 8) +
            Y_DIR * (iVar7 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar8 >> 8) * (iVar6 >> 8);
    pBVar2 = obj1;
    iVar9 = (pBVar1->orientMat).m[1];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar4 = (pBVar1->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = (pBVar1->orientMat).m[4];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar5 = (pBVar1->dimension).y;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (obj1->orientMat).m[7];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar6 = (obj1->dimension).z;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    pcVar3->y = (pBVar1->position).y + X_DIR * (iVar9 >> 8) * (iVar4 >> 8) +
                Y_DIR * (iVar7 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar8 >> 8) * (iVar6 >> 8);
    iVar9 = (pBVar2->orientMat).m[2];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar4 = (pBVar2->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = (pBVar2->orientMat).m[5];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar5 = (pBVar2->dimension).y;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (pBVar2->orientMat).m[8];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar6 = (pBVar2->dimension).z;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    pP->z = (pBVar2->position).z + X_DIR * (iVar9 >> 8) * (iVar4 >> 8) +
            Y_DIR * (iVar7 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar8 >> 8) * (iVar6 >> 8);
    return 1;
  }
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(int X_DIR /*$t5*/, int Y_DIR /*$a1*/, int Z_DIR /*$a2*/)
 // line 187, offset 0x8008c744
	/* begin block 1 */
		// Start line: 188
		// Start offset: 0x8008C744
	/* end block 1 */
	// End offset: 0x8008CB04
	// End Line: 210

	/* begin block 2 */
		// Start line: 437
	/* end block 2 */
	// End Line: 438

	/* begin block 3 */
		// Start line: 442
	/* end block 3 */
	// End Line: 443

	/* begin block 4 */
		// Start line: 442
	/* end block 4 */
	// End Line: 443

	/* begin block 5 */
		// Start line: 444
	/* end block 5 */
	// End Line: 445

int CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(int X_DIR,int Y_DIR,int Z_DIR)

{
  BO_tNewtonObj *pBVar1;
  BO_tNewtonObj *pBVar2;
  coorddef *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pcVar3 = pP;
  pBVar1 = obj0;
  xRange = (uchar *)((X_DIR * scaledBasisDotsOther + Y_DIR * INT_8013e074 + Z_DIR * INT_8013e080) -
                    INT_8013e0a4);
  yRange = (uchar *)((X_DIR * INT_8013e06c + Y_DIR * INT_8013e078 + Z_DIR * INT_8013e084) -
                    INT_8013e0a8);
  iVar9 = (obj1->dimension).z;
  zRange = (uchar *)((X_DIR * INT_8013e070 + Y_DIR * INT_8013e07c + Z_DIR * INT_8013e088) -
                    INT_8013e0ac);
  if (((((int)zRange <= iVar9) && (-iVar9 <= (int)zRange)) &&
      (iVar9 = (obj1->dimension).x, (int)xRange <= iVar9)) &&
     (((-iVar9 <= (int)xRange && (iVar9 = (obj1->dimension).y, (int)yRange <= iVar9)) &&
      (-iVar9 <= (int)yRange)))) {
    iVar9 = (obj0->orientMat).m[0];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar4 = (obj0->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = (obj0->orientMat).m[3];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar5 = (obj0->dimension).y;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (obj0->orientMat).m[6];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar6 = (obj0->dimension).z;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    pP->x = (obj0->position).x + X_DIR * (iVar9 >> 8) * (iVar4 >> 8) +
            Y_DIR * (iVar7 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar8 >> 8) * (iVar6 >> 8);
    pBVar2 = obj0;
    iVar9 = (pBVar1->orientMat).m[1];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar4 = (pBVar1->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = (pBVar1->orientMat).m[4];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar5 = (pBVar1->dimension).y;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (obj0->orientMat).m[7];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar6 = (obj0->dimension).z;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    pcVar3->y = (pBVar1->position).y + X_DIR * (iVar9 >> 8) * (iVar4 >> 8) +
                Y_DIR * (iVar7 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar8 >> 8) * (iVar6 >> 8);
    iVar9 = (pBVar2->orientMat).m[2];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar4 = (pBVar2->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar7 = (pBVar2->orientMat).m[5];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar5 = (pBVar2->dimension).y;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (pBVar2->orientMat).m[8];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar6 = (pBVar2->dimension).z;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    pP->z = (pBVar2->position).z + X_DIR * (iVar9 >> 8) * (iVar4 >> 8) +
            Y_DIR * (iVar7 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar8 >> 8) * (iVar6 >> 8);
    return 1;
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Collide_DoObjectFixedObjectCollision__FP13BO_tNewtonObjP8coorddefN21(struct BO_tNewtonObj *o /*$s2*/, struct coorddef *p /*$s3*/, struct coorddef *v /*$a2*/, struct coorddef *n /*$a3*/)
 // line 230, offset 0x8008cb0c
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x8008CB0C
		// Variables:
	// 		struct coorddef normal; // stack offset -176
	// 		int impulse; // $s3
	// 		struct coorddef deltaV; // stack offset -160
	// 		struct coorddef impulseV; // stack offset -144
	// 		int temp0; // $s4
	// 		int temp1; // $s1
	// 		int temp2; // $s0
	// 		int temp3; // $a1
	// 		struct coorddef r; // stack offset -128
	// 		struct coorddef RCrossN; // stack offset -112
	// 		int velocityLength; // $s5
	// 		struct coorddef velocity; // stack offset -96

		/* begin block 1.1 */
			// Start line: 250
			// Start offset: 0x8008CD84
			// Variables:
		// 		int frictionalImpulse; // $s0
		// 		struct coorddef deltaVFromFriction; // stack offset -80
		// 		struct coorddef temp; // stack offset -64
		// 		int frictionalImpulseOverMoment; // $s1
		// 		int deltaSpeedInFrictionDirection; // $a1

			/* begin block 1.1.1 */
				// Start line: 250
				// Start offset: 0x8008CD84

				/* begin block 1.1.1.1 */
					// Start line: 276
					// Start offset: 0x8008CE38
					// Variables:
				// 		int scale; // $v1
				// 		int lengthInverse; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x8008CFE8
				// End Line: 304
			/* end block 1.1.1 */
			// End offset: 0x8008CFE8
			// End Line: 304

			/* begin block 1.1.2 */
				// Start line: 326
				// Start offset: 0x8008CFE8

				/* begin block 1.1.2.1 */
					// Start line: 327
					// Start offset: 0x8008D00C
					// Variables:
				// 		struct coorddef upVec; // stack offset -48
				// 		int dotx; // $a3
				// 		int doty; // $a1
				// 		int dotz; // $v1
				/* end block 1.1.2.1 */
				// End offset: 0x8008D204
				// End Line: 338
			/* end block 1.1.2 */
			// End offset: 0x8008D204
			// End Line: 338
		/* end block 1.1 */
		// End offset: 0x8008D558
		// End Line: 365
	/* end block 1 */
	// End offset: 0x8008D890
	// End Line: 390

	/* begin block 2 */
		// Start line: 531
	/* end block 2 */
	// End Line: 532

	/* begin block 3 */
		// Start line: 552
	/* end block 3 */
	// End Line: 553

	/* begin block 4 */
		// Start line: 552
	/* end block 4 */
	// End Line: 553

void Collide_DoObjectFixedObjectCollision__FP13BO_tNewtonObjP8coorddefN21
               (BO_tNewtonObj *o,coorddef *p,coorddef *v,coorddef *n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  coorddef local_70;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_30;
  undefined *local_2c;
  int local_28;
  
  local_60 = v->x;
  local_5c = v->y;
  local_58 = v->z;
  iVar21 = n->x;
  iVar22 = n->y;
  iVar25 = n->z;
  uVar24 = 0;
  iVar8 = iVar21;
  if (iVar21 < 0) {
    iVar8 = iVar21 + 0xff;
  }
  iVar1 = (o->linearVel).x;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar9 = iVar22;
  if (iVar22 < 0) {
    iVar9 = iVar22 + 0xff;
  }
  iVar2 = (o->linearVel).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar3 = iVar25;
  if (iVar25 < 0) {
    iVar3 = iVar25 + 0xff;
  }
  iVar10 = (o->linearVel).z;
  iVar3 = iVar3 >> 8;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar20 = p->x - (o->position).x;
  iVar11 = p->y - (o->position).y;
  iVar17 = p->z - (o->position).z;
  iVar8 = (iVar8 >> 8) * (iVar1 >> 8) + (iVar9 >> 8) * (iVar2 >> 8) + iVar3 * (iVar10 >> 8);
  iVar1 = iVar11;
  if (iVar11 < 0) {
    iVar1 = iVar11 + 0xff;
  }
  iVar2 = iVar17;
  if (iVar17 < 0) {
    iVar2 = iVar17 + 0xff;
  }
  local_70.x = (iVar1 >> 8) * iVar3 - (iVar2 >> 8) * (iVar9 >> 8);
  iVar1 = iVar21;
  if (iVar21 < 0) {
    iVar1 = iVar21 + 0xff;
  }
  iVar9 = iVar20;
  if (iVar20 < 0) {
    iVar9 = iVar20 + 0xff;
  }
  local_70.y = (iVar2 >> 8) * (iVar1 >> 8) - (iVar9 >> 8) * iVar3;
  iVar2 = iVar22;
  if (iVar22 < 0) {
    iVar2 = iVar22 + 0xff;
  }
  iVar3 = iVar11;
  if (iVar11 < 0) {
    iVar3 = iVar11 + 0xff;
  }
  local_70.z = (iVar9 >> 8) * (iVar2 >> 8) - (iVar3 >> 8) * (iVar1 >> 8);
  iVar1 = (o->angularVel).x;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar9 = local_70.x;
  if (local_70.x < 0) {
    iVar9 = local_70.x + 0xff;
  }
  iVar2 = (o->angularVel).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar3 = local_70.y;
  if (local_70.y < 0) {
    iVar3 = local_70.y + 0xff;
  }
  iVar10 = (o->angularVel).z;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar4 = local_70.z;
  if (local_70.z < 0) {
    iVar4 = local_70.z + 0xff;
  }
  iVar23 = o->massInv;
  if (iVar23 < 0) {
    iVar23 = iVar23 + 3;
  }
  iVar5 = Math_VectorLength2__FP8coorddef(&local_70);
  uVar6 = fixedmult(iVar5,o->moInertiaInv << 1);
  iVar1 = fixeddiv(-(iVar8 + (iVar1 >> 8) * (iVar9 >> 8) + (iVar2 >> 8) * (iVar3 >> 8) +
                             (iVar10 >> 8) * (iVar4 >> 8)),
                   (iVar23 >> 2) + ((int)((uVar6 >> 0x1f) + uVar6) >> 1));
  uVar6 = fixedmult(iVar1,(int)&DAT_00006666);
  if (iVar8 < 0) {
    iVar8 = -iVar8;
  }
  (o->collision).impulse = iVar8 << 2;
  uVar12 = o->driveSurfaceType;
  (o->collision).otherObj = (BO_tNewtonObj *)0x0;
  (o->collision).sfxType = uVar12 | 0x30000;
  iVar8 = p->y;
  iVar1 = p->z;
  (o->collision).collisionPoint.x = p->x;
  (o->collision).collisionPoint.y = iVar8;
  (o->collision).collisionPoint.z = iVar1;
  if (((local_60 != 0) || (local_5c != 0)) || (local_58 != 0)) {
    uVar24 = local_60;
    if ((int)local_60 < 0) {
      uVar24 = local_60 + 0xff;
    }
    iVar8 = iVar21;
    if (iVar21 < 0) {
      iVar8 = iVar21 + 0xff;
    }
    uVar12 = local_5c;
    if ((int)local_5c < 0) {
      uVar12 = local_5c + 0xff;
    }
    iVar1 = iVar22;
    if (iVar22 < 0) {
      iVar1 = iVar22 + 0xff;
    }
    uVar13 = local_58;
    if ((int)local_58 < 0) {
      uVar13 = local_58 + 0xff;
    }
    iVar9 = iVar25;
    if (iVar25 < 0) {
      iVar9 = iVar25 + 0xff;
    }
    iVar2 = ((int)uVar24 >> 8) * (iVar8 >> 8) + ((int)uVar12 >> 8) * (iVar1 >> 8) +
            ((int)uVar13 >> 8) * (iVar9 >> 8);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar2 = iVar2 >> 8;
    local_60 = local_60 - iVar2 * (iVar8 >> 8);
    local_5c = local_5c - iVar2 * (iVar1 >> 8);
    local_58 = local_58 - iVar2 * (iVar9 >> 8);
    iVar8 = local_60;
    if ((int)local_60 < 0) {
      iVar8 = local_60 + 0xff;
    }
    iVar1 = local_5c;
    if ((int)local_5c < 0) {
      iVar1 = local_5c + 0xff;
    }
    iVar9 = local_58;
    if ((int)local_58 < 0) {
      iVar9 = local_58 + 0xff;
    }
    uVar24 = fixedsqrt((iVar8 >> 8) * (iVar8 >> 8) + (iVar1 >> 8) * (iVar1 >> 8) +
                       (iVar9 >> 8) * (iVar9 >> 8));
    uVar12 = (int)(uVar24 + (uVar24 >> 0x1f)) >> 1;
    if (uVar12 == 0) {
      local_60 = fixedmult(-0x10000,local_60);
      local_5c = fixedmult(-0x10000,local_5c);
      iVar8 = -0x10000;
    }
    else {
      iVar8 = fixeddiv(0x8000,uVar12);
      iVar8 = -iVar8;
      local_60 = fixedmult(iVar8,local_60);
      local_5c = fixedmult(iVar8,local_5c);
    }
    local_58 = fixedmult(iVar8,local_58);
  }
  iVar8 = o->speedXZ;
  if (iVar8 < 0) {
    iVar8 = -iVar8;
  }
  if (iVar8 < 0xa0000) {
    local_30 = DAT_80055a00;
    local_2c = PTR_s_SimpleMem_80055a04;
    local_28 = DAT_80055a08;
    iVar8 = DAT_80055a00;
    if (DAT_80055a00 < 0) {
      iVar8 = DAT_80055a00 + 0xff;
    }
    iVar1 = (o->orientMat).m[0];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    puVar14 = PTR_s_SimpleMem_80055a04;
    if ((int)PTR_s_SimpleMem_80055a04 < 0) {
      puVar14 = PTR_s_SimpleMem_80055a04 + 0xff;
    }
    iVar9 = (o->orientMat).m[1];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar2 = DAT_80055a08;
    if (DAT_80055a08 < 0) {
      iVar2 = DAT_80055a08 + 0xff;
    }
    iVar3 = (o->orientMat).m[2];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar10 = (o->orientMat).m[3];
    iVar1 = (iVar8 >> 8) * (iVar1 >> 8) + ((int)puVar14 >> 8) * (iVar9 >> 8) +
            (iVar2 >> 8) * (iVar3 >> 8);
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar9 = (o->orientMat).m[4];
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar3 = (o->orientMat).m[5];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar4 = DAT_80055a00;
    if (DAT_80055a00 < 0) {
      iVar4 = DAT_80055a00 + 0xff;
    }
    iVar23 = (o->orientMat).m[6];
    if (iVar23 < 0) {
      iVar23 = iVar23 + 0xff;
    }
    puVar15 = PTR_s_SimpleMem_80055a04;
    if ((int)PTR_s_SimpleMem_80055a04 < 0) {
      puVar15 = PTR_s_SimpleMem_80055a04 + 0xff;
    }
    iVar5 = (o->orientMat).m[7];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar16 = DAT_80055a08;
    if (DAT_80055a08 < 0) {
      iVar16 = DAT_80055a08 + 0xff;
    }
    iVar7 = (o->orientMat).m[8];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar4 = (iVar4 >> 8) * (iVar23 >> 8) + ((int)puVar15 >> 8) * (iVar5 >> 8) +
            (iVar16 >> 8) * (iVar7 >> 8);
    if (iVar1 < 0xf5c3) {
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((iVar4 < 0xf5c3) &&
         (-0xf5c3 < (iVar8 >> 8) * (iVar10 >> 8) + ((int)puVar14 >> 8) * (iVar9 >> 8) +
                    (iVar2 >> 8) * (iVar3 >> 8))) goto LAB_8008d204;
    }
    frictionLess = 1;
  }
LAB_8008d204:
  iVar8 = 0x8000;
  if (frictionLess == 1) {
    iVar8 = 0x28f;
  }
  uVar12 = fixedmult(iVar8,uVar6);
  uVar13 = fixedmult(uVar12,(int)(o->massInv + ((uint)o->massInv >> 0x1f)) >> 1);
  local_50 = fixedmult(uVar13,local_60);
  uVar13 = fixedmult(uVar12,(int)(o->massInv + ((uint)o->massInv >> 0x1f)) >> 1);
  local_4c = fixedmult(uVar13,local_5c);
  uVar13 = fixedmult(uVar12,(int)(o->massInv + ((uint)o->massInv >> 0x1f)) >> 1);
  local_48 = fixedmult(uVar13,local_58);
  frictionLess = 0;
  uVar13 = fixedmult(uVar12,o->moInertiaInv << 1);
  iVar8 = iVar17;
  if (iVar17 < 0) {
    iVar8 = iVar17 + 0xff;
  }
  uVar19 = local_58;
  if ((int)local_58 < 0) {
    uVar19 = local_58 + 0xff;
  }
  iVar1 = iVar11;
  if (iVar11 < 0) {
    iVar1 = iVar11 + 0xff;
  }
  iVar9 = iVar20;
  if (iVar20 < 0) {
    iVar9 = iVar20 + 0xff;
  }
  uVar18 = local_60;
  if ((int)local_60 < 0) {
    uVar18 = local_60 + 0xff;
  }
  iVar8 = ((int)uVar19 >> 8) * (iVar9 >> 8) - ((int)uVar18 >> 8) * (iVar8 >> 8);
  uVar19 = local_5c;
  if ((int)local_5c < 0) {
    uVar19 = local_5c + 0xff;
  }
  iVar1 = ((int)uVar18 >> 8) * (iVar1 >> 8) - ((int)uVar19 >> 8) * (iVar9 >> 8);
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar9 = iVar17;
  if (iVar17 < 0) {
    iVar9 = iVar17 + 0xff;
  }
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = iVar11;
  if (iVar11 < 0) {
    iVar2 = iVar11 + 0xff;
  }
  local_40 = (iVar8 >> 8) * (iVar9 >> 8) - (iVar1 >> 8) * (iVar2 >> 8);
  iVar8 = iVar20;
  if (iVar20 < 0) {
    iVar8 = iVar20 + 0xff;
  }
  iVar3 = local_40;
  if ((int)local_40 < 0) {
    iVar3 = local_40 + 0xff;
  }
  local_3c = (iVar1 >> 8) * (iVar8 >> 8) - (iVar3 >> 8) * (iVar9 >> 8);
  iVar1 = local_3c;
  if ((int)local_3c < 0) {
    iVar1 = local_3c + 0xff;
  }
  local_38 = (iVar3 >> 8) * (iVar2 >> 8) - (iVar1 >> 8) * (iVar8 >> 8);
  local_40 = fixedmult(uVar13,local_40);
  local_3c = fixedmult(uVar13,local_3c);
  local_38 = fixedmult(uVar13,local_38);
  local_50 = local_50 + local_40;
  local_48 = local_48 + local_38;
  local_4c = local_4c + local_3c;
  iVar8 = local_50;
  if ((int)local_50 < 0) {
    iVar8 = local_50 + 0xff;
  }
  uVar13 = local_60;
  if ((int)local_60 < 0) {
    uVar13 = local_60 + 0xff;
  }
  iVar1 = local_4c;
  if ((int)local_4c < 0) {
    iVar1 = local_4c + 0xff;
  }
  uVar19 = local_5c;
  if ((int)local_5c < 0) {
    uVar19 = local_5c + 0xff;
  }
  iVar9 = local_48;
  if ((int)local_48 < 0) {
    iVar9 = local_48 + 0xff;
  }
  uVar18 = local_58;
  if ((int)local_58 < 0) {
    uVar18 = local_58 + 0xff;
  }
  uVar13 = (iVar8 >> 8) * ((int)uVar13 >> 8) + (iVar1 >> 8) * ((int)uVar19 >> 8) +
           (iVar9 >> 8) * ((int)uVar18 >> 8);
  if ((int)uVar24 < (int)uVar13) {
    iVar8 = fixeddiv(uVar24,uVar13);
    uVar12 = fixedmult(uVar12,iVar8);
  }
  local_60 = fixedmult(uVar12,local_60);
  local_5c = fixedmult(uVar12,local_5c);
  local_58 = fixedmult(uVar12,local_58);
  if (0 < (int)uVar6) {
    uVar24 = fixedmult(uVar6,iVar21);
    uVar12 = fixedmult(uVar6,iVar22);
    uVar6 = fixedmult(uVar6,iVar25);
    iVar25 = uVar24 + local_60;
    iVar21 = uVar6 + local_58;
    iVar22 = uVar12 + local_5c;
    uVar24 = fixedmult((int)(o->massInv + ((uint)o->massInv >> 0x1f)) >> 1,iVar25);
    uVar6 = fixedmult((int)(o->massInv + ((uint)o->massInv >> 0x1f)) >> 1,iVar22);
    uVar12 = fixedmult((int)(o->massInv + ((uint)o->massInv >> 0x1f)) >> 1,iVar21);
    (o->linearVel).x = (o->linearVel).x + uVar24;
    (o->linearVel).y = (o->linearVel).y + uVar6;
    (o->linearVel).z = (o->linearVel).z + uVar12;
    iVar8 = iVar11;
    if (iVar11 < 0) {
      iVar8 = iVar11 + 0xff;
    }
    if (iVar21 < 0) {
      iVar21 = iVar21 + 0xff;
    }
    if (iVar17 < 0) {
      iVar17 = iVar17 + 0xff;
    }
    if (iVar22 < 0) {
      iVar22 = iVar22 + 0xff;
    }
    if (iVar25 < 0) {
      iVar25 = iVar25 + 0xff;
    }
    if (iVar20 < 0) {
      iVar20 = iVar20 + 0xff;
    }
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    uVar24 = fixedmult(o->moInertiaInv << 1,
                       (iVar8 >> 8) * (iVar21 >> 8) - (iVar17 >> 8) * (iVar22 >> 8));
    uVar6 = fixedmult(o->moInertiaInv << 1,
                      (iVar17 >> 8) * (iVar25 >> 8) - (iVar20 >> 8) * (iVar21 >> 8));
    uVar12 = fixedmult(o->moInertiaInv << 1,
                       (iVar20 >> 8) * (iVar22 >> 8) - (iVar11 >> 8) * (iVar25 >> 8));
    (o->angularVel).x = (o->angularVel).x + uVar24;
    (o->angularVel).y = (o->angularVel).y + uVar6;
    (o->angularVel).z = (o->angularVel).z + uVar12;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Collide_LimitAngularVel__FP13BO_tNewtonObj(struct BO_tNewtonObj *o /*$a0*/)
 // line 394, offset 0x8008d8b4
	/* begin block 1 */
		// Start line: 395
		// Start offset: 0x8008D8B4
	/* end block 1 */
	// End offset: 0x8008D9A0
	// End Line: 409

	/* begin block 2 */
		// Start line: 924
	/* end block 2 */
	// End Line: 925

	/* begin block 3 */
		// Start line: 928
	/* end block 3 */
	// End Line: 929

	/* begin block 4 */
		// Start line: 928
	/* end block 4 */
	// End Line: 929

	/* begin block 5 */
		// Start line: 929
	/* end block 5 */
	// End Line: 930

	/* begin block 6 */
		// Start line: 929
	/* end block 6 */
	// End Line: 930

void Collide_LimitAngularVel__FP13BO_tNewtonObj(BO_tNewtonObj *o)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (o->angularVel).x;
  if (iVar1 < 0) {
    if (iVar1 < -0x18000) {
      iVar1 = -0x18000;
    }
    (o->angularVel).x = iVar1;
  }
  else {
    iVar2 = 0x18000;
    if (iVar1 < 0x18001) {
      iVar2 = iVar1;
    }
    (o->angularVel).x = iVar2;
  }
  iVar1 = (o->angularVel).y;
  if (iVar1 < 0) {
    if (iVar1 < -0x18000) {
      iVar1 = -0x18000;
    }
    (o->angularVel).y = iVar1;
  }
  else {
    iVar2 = 0x18000;
    if (iVar1 < 0x18001) {
      iVar2 = iVar1;
    }
    (o->angularVel).y = iVar2;
  }
  iVar1 = (o->angularVel).z;
  if (iVar1 < 0) {
    if (iVar1 < -0x18000) {
      iVar1 = -0x18000;
    }
    (o->angularVel).z = iVar1;
    return;
  }
  iVar2 = 0x18000;
  if (iVar1 < 0x18001) {
    iVar2 = iVar1;
  }
  (o->angularVel).z = iVar2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Collide_TestWithPlane__FP13BO_tNewtonObjP8coorddefT1(struct BO_tNewtonObj *o /*$s3*/, struct coorddef *normal /*$s2*/, struct coorddef *samplePoint /*$s0*/)
 // line 418, offset 0x8008d9a8
	/* begin block 1 */
		// Start line: 419
		// Start offset: 0x8008D9A8
		// Variables:
	// 		int raiseUp; // $s1
	// 		int basisDots[3]; // stack offset -128
	// 		int relativeDot; // $v1
	// 		struct coorddef relativePos; // stack offset -112
	// 		int xDir; // $t1
	// 		int Y_DIR; // $t2
	// 		int zDir; // $t3

		/* begin block 1.1 */
			// Start line: 446
			// Start offset: 0x8008DD78
			// Variables:
		// 		int height; // $a1

			/* begin block 1.1.1 */
				// Start line: 446
				// Start offset: 0x8008DD78

				/* begin block 1.1.1.1 */
					// Start line: 453
					// Start offset: 0x8008DDCC
					// Variables:
				// 		struct coorddef Raise; // stack offset -96
				// 		struct coorddef vertexVelocity; // stack offset -80
				// 		struct coorddef r; // stack offset -64
				// 		struct coorddef spot; // stack offset -48

					/* begin block 1.1.1.1.1 */
						// Start line: 494
						// Start offset: 0x8008E2EC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 495
							// Start offset: 0x8008E314
							// Variables:
						// 		int correction; // $s0
						// 		int v2; // $a0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8008E374
						// End Line: 504
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008E374
					// End Line: 504
				/* end block 1.1.1.1 */
				// End offset: 0x8008E374
				// End Line: 504
			/* end block 1.1.1 */
			// End offset: 0x8008E374
			// End Line: 504
		/* end block 1.1 */
		// End offset: 0x8008E374
		// End Line: 504

		/* begin block 1.2 */
			// Start line: 509
			// Start offset: 0x8008E374
			// Variables:
		// 		int zone; // $s5
		// 		int impulse; // $s6

			/* begin block 1.2.1 */
				// Start line: 519
				// Start offset: 0x8008E468

				/* begin block 1.2.1.1 */
					// Start line: 520
					// Start offset: 0x8008E478
					// Variables:
				// 		int right; // $s4
				// 		int top; // $s1
				// 		int front; // $s0
				/* end block 1.2.1.1 */
				// End offset: 0x8008E5AC
				// End Line: 542
			/* end block 1.2.1 */
			// End offset: 0x8008E5AC
			// End Line: 542
		/* end block 1.2 */
		// End offset: 0x8008E5AC
		// End Line: 542
	/* end block 1 */
	// End offset: 0x8008E5AC
	// End Line: 542

	/* begin block 2 */
		// Start line: 966
	/* end block 2 */
	// End Line: 967

	/* begin block 3 */
		// Start line: 976
	/* end block 3 */
	// End Line: 977

	/* begin block 4 */
		// Start line: 976
	/* end block 4 */
	// End Line: 977

void Collide_TestWithPlane__FP13BO_tNewtonObjP8coorddefT1
               (BO_tNewtonObj *o,coorddef *normal,coorddef *samplePoint)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int impulse;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint zone;
  uint local_5c;
  coorddef local_50;
  int local_40;
  int local_3c;
  int local_38;
  coorddef local_30;
  
  uVar2 = fixedmult((int)&PTR_0006487e,(o->angularVel).x);
  (o->angularVel).x = uVar2;
  uVar2 = fixedmult((int)&PTR_0006487e,(o->angularVel).y);
  (o->angularVel).y = uVar2;
  uVar2 = fixedmult((int)&PTR_0006487e,(o->angularVel).z);
  (o->angularVel).z = uVar2;
  if (((normal->x == 0) && (normal->y == 0)) && (normal->z == 0)) {
    normal->y = 0x10000;
  }
  impulse = normal->x;
  if (impulse < 0) {
    impulse = impulse + 0xff;
  }
  iVar3 = (o->orientMat).m[0];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar13 = normal->y;
  if (iVar13 < 0) {
    iVar13 = iVar13 + 0xff;
  }
  iVar4 = (o->orientMat).m[1];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar14 = normal->z;
  if (iVar14 < 0) {
    iVar14 = iVar14 + 0xff;
  }
  iVar5 = (o->orientMat).m[2];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  impulse = (impulse >> 8) * (iVar3 >> 8) + (iVar13 >> 8) * (iVar4 >> 8) +
            (iVar14 >> 8) * (iVar5 >> 8);
  if (impulse < 0) {
    impulse = impulse + 0xff;
  }
  iVar3 = (o->dimension).x;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar3 = (impulse >> 8) * (iVar3 >> 8);
  impulse = normal->x;
  if (impulse < 0) {
    impulse = impulse + 0xff;
  }
  iVar13 = (o->orientMat).m[3];
  if (iVar13 < 0) {
    iVar13 = iVar13 + 0xff;
  }
  iVar4 = normal->y;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar14 = (o->orientMat).m[4];
  if (iVar14 < 0) {
    iVar14 = iVar14 + 0xff;
  }
  iVar5 = normal->z;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar6 = (o->orientMat).m[5];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  impulse = (impulse >> 8) * (iVar13 >> 8) + (iVar4 >> 8) * (iVar14 >> 8) +
            (iVar5 >> 8) * (iVar6 >> 8);
  if (impulse < 0) {
    impulse = impulse + 0xff;
  }
  iVar13 = (o->dimension).y;
  if (iVar13 < 0) {
    iVar13 = iVar13 + 0xff;
  }
  iVar13 = (impulse >> 8) * (iVar13 >> 8);
  impulse = normal->x;
  if (impulse < 0) {
    impulse = impulse + 0xff;
  }
  iVar4 = (o->orientMat).m[6];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar14 = normal->y;
  if (iVar14 < 0) {
    iVar14 = iVar14 + 0xff;
  }
  iVar5 = (o->orientMat).m[7];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar6 = normal->z;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar7 = (o->orientMat).m[8];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  impulse = (impulse >> 8) * (iVar4 >> 8) + (iVar14 >> 8) * (iVar5 >> 8) +
            (iVar6 >> 8) * (iVar7 >> 8);
  if (impulse < 0) {
    impulse = impulse + 0xff;
  }
  iVar4 = (o->dimension).z;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar4 = (impulse >> 8) * (iVar4 >> 8);
  impulse = -1;
  if (iVar3 < 0) {
    impulse = 1;
  }
  iVar14 = -1;
  if (iVar13 < 0) {
    iVar14 = 1;
  }
  iVar5 = -1;
  if (iVar4 < 0) {
    iVar5 = 1;
  }
  iVar6 = (o->position).x - samplePoint->x;
  iVar7 = (o->position).y - samplePoint->y;
  iVar18 = (o->position).z - samplePoint->z;
  iVar15 = normal->x;
  if (iVar15 < 0) {
    iVar15 = iVar15 + 0xff;
  }
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar16 = normal->y;
  if (iVar16 < 0) {
    iVar16 = iVar16 + 0xff;
  }
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar17 = normal->z;
  if (iVar17 < 0) {
    iVar17 = iVar17 + 0xff;
  }
  if (iVar18 < 0) {
    iVar18 = iVar18 + 0xff;
  }
  iVar3 = impulse * iVar3 + iVar14 * iVar13 + iVar5 * iVar4 +
          (iVar15 >> 8) * (iVar6 >> 8) + (iVar16 >> 8) * (iVar7 >> 8) +
          (iVar17 >> 8) * (iVar18 >> 8);
  if (iVar3 < 0) {
    iVar13 = (o->orientMat).m[0];
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    iVar4 = (o->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar6 = (o->orientMat).m[3];
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar7 = (o->dimension).y;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar18 = (o->orientMat).m[6];
    if (iVar18 < 0) {
      iVar18 = iVar18 + 0xff;
    }
    iVar15 = (o->dimension).z;
    if (iVar15 < 0) {
      iVar15 = iVar15 + 0xff;
    }
    local_30.x = (o->position).x + impulse * (iVar13 >> 8) * (iVar4 >> 8) +
                 iVar14 * (iVar6 >> 8) * (iVar7 >> 8) + iVar5 * (iVar18 >> 8) * (iVar15 >> 8);
    iVar13 = (o->orientMat).m[1];
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    iVar4 = (o->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar6 = (o->orientMat).m[4];
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar7 = (o->dimension).y;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar18 = (o->orientMat).m[7];
    if (iVar18 < 0) {
      iVar18 = iVar18 + 0xff;
    }
    iVar15 = (o->dimension).z;
    if (iVar15 < 0) {
      iVar15 = iVar15 + 0xff;
    }
    local_30.y = (o->position).y + impulse * (iVar13 >> 8) * (iVar4 >> 8) +
                 iVar14 * (iVar6 >> 8) * (iVar7 >> 8) + iVar5 * (iVar18 >> 8) * (iVar15 >> 8);
    iVar13 = (o->orientMat).m[2];
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    iVar4 = (o->dimension).x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar6 = (o->orientMat).m[5];
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar7 = (o->dimension).y;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar18 = (o->orientMat).m[8];
    if (iVar18 < 0) {
      iVar18 = iVar18 + 0xff;
    }
    iVar15 = (o->dimension).z;
    if (iVar15 < 0) {
      iVar15 = iVar15 + 0xff;
    }
    local_30.z = (o->position).z + impulse * (iVar13 >> 8) * (iVar4 >> 8) +
                 iVar14 * (iVar6 >> 8) * (iVar7 >> 8) + iVar5 * (iVar18 >> 8) * (iVar15 >> 8);
    uVar2 = 0;
    if (iVar3 < 0) {
      uVar2 = -iVar3;
    }
    if ((Collide_gRaiseUp != 0) && (uVar2 != 0)) {
      impulse = (int)(uVar2 + (uVar2 >> 0x1f)) >> 1;
      uVar8 = fixedmult(impulse,normal->x);
      local_5c = fixedmult(impulse,normal->y);
      uVar9 = fixedmult(impulse,normal->z);
      (o->position).x = (o->position).x + uVar8;
      (o->position).y = (o->position).y + local_5c;
      (o->position).z = (o->position).z + uVar9;
    }
    local_40 = local_30.x - (o->position).x;
    local_3c = local_30.y - (o->position).y;
    local_38 = local_30.z - (o->position).z;
    impulse = (o->angularVel).y;
    if (impulse < 0) {
      impulse = impulse + 0xff;
    }
    iVar3 = local_38;
    if (local_38 < 0) {
      iVar3 = local_38 + 0xff;
    }
    iVar13 = (o->angularVel).z;
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    iVar4 = local_3c;
    if (local_3c < 0) {
      iVar4 = local_3c + 0xff;
    }
    iVar14 = (o->angularVel).z;
    if (iVar14 < 0) {
      iVar14 = iVar14 + 0xff;
    }
    iVar5 = local_40;
    if (local_40 < 0) {
      iVar5 = local_40 + 0xff;
    }
    iVar6 = (o->angularVel).x;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar7 = (o->angularVel).x;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar18 = (o->angularVel).y;
    if (iVar18 < 0) {
      iVar18 = iVar18 + 0xff;
    }
    iVar15 = local_40;
    if (local_40 < 0) {
      iVar15 = local_40 + 0xff;
    }
    local_50.x = ((impulse >> 8) * (iVar3 >> 8) - (iVar13 >> 8) * (iVar4 >> 8)) + (o->linearVel).x;
    local_50.y = ((iVar14 >> 8) * (iVar5 >> 8) - (iVar6 >> 8) * (iVar3 >> 8)) + (o->linearVel).y;
    local_50.z = ((iVar7 >> 8) * (iVar4 >> 8) - (iVar18 >> 8) * (iVar15 >> 8)) + (o->linearVel).z;
    impulse = normal->x;
    if (impulse < 0) {
      impulse = impulse + 0xff;
    }
    iVar3 = local_50.x;
    if (local_50.x < 0) {
      iVar3 = local_50.x + 0xff;
    }
    iVar13 = normal->y;
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    iVar4 = local_50.y;
    if (local_50.y < 0) {
      iVar4 = local_50.y + 0xff;
    }
    iVar14 = normal->z;
    if (iVar14 < 0) {
      iVar14 = iVar14 + 0xff;
    }
    iVar5 = local_50.z;
    if (local_50.z < 0) {
      iVar5 = local_50.z + 0xff;
    }
    if ((impulse >> 8) * (iVar3 >> 8) + (iVar13 >> 8) * (iVar4 >> 8) + (iVar14 >> 8) * (iVar5 >> 8)
        < 0) {
      Collide_DoObjectFixedObjectCollision__FP13BO_tNewtonObjP8coorddefN21
                (o,&local_30,&local_50,normal);
    }
    if (((Collide_gRaiseUp != 0) && (uVar2 != 0)) && (0 < (int)local_5c)) {
      uVar2 = fixedmult((int)&LAB_0009cccc,local_5c);
      impulse = (o->linearVel).y;
      uVar8 = fixedmult(impulse,impulse);
      if ((int)uVar8 < (int)(uVar2 * 2)) {
        (o->linearVel).y = 0;
      }
      else {
        if ((o->linearVel).y < 1) {
          impulse = fixedsqrt(uVar8 + uVar2 * -2);
          (o->linearVel).y = -impulse;
        }
        else {
          impulse = fixedsqrt(uVar8 + uVar2 * -2);
          (o->linearVel).y = impulse;
        }
      }
    }
  }
  uVar2 = fixedmult((int)&DAT_000028be,(o->angularVel).x);
  (o->angularVel).x = uVar2;
  uVar2 = fixedmult((int)&DAT_000028be,(o->angularVel).y);
  (o->angularVel).y = uVar2;
  uVar2 = fixedmult((int)&DAT_000028be,(o->angularVel).z);
  (o->angularVel).z = uVar2;
  Collide_LimitAngularVel__FP13BO_tNewtonObj(o);
  zone = 9;
  uVar2 = fixedmult(normal->x,(o->linearVel).x);
  uVar8 = fixedmult(normal->y,(o->linearVel).y);
  uVar9 = fixedmult(normal->z,(o->linearVel).z);
  if ((int)(uVar2 + uVar8 + uVar9) < 1) {
    uVar2 = fixedmult(normal->x,(o->linearVel).x);
    uVar8 = fixedmult(normal->y,(o->linearVel).y);
    uVar9 = fixedmult(normal->z,(o->linearVel).z);
    impulse = -(uVar2 + uVar8 + uVar9);
  }
  else {
    uVar2 = fixedmult(normal->x,(o->linearVel).x);
    uVar8 = fixedmult(normal->y,(o->linearVel).y);
    uVar9 = fixedmult(normal->z,(o->linearVel).z);
    impulse = uVar2 + uVar8 + uVar9;
  }
  impulse = impulse << 2;
  if (impulse < 0xa0001) {
    return;
  }
  uVar2 = fixedmult(normal->x,(o->orientMat).m[0]);
  uVar8 = fixedmult(normal->y,(o->orientMat).m[1]);
  uVar9 = fixedmult(normal->z,(o->orientMat).m[2]);
  iVar13 = uVar2 + uVar8 + uVar9;
  uVar2 = fixedmult(normal->x,(o->orientMat).m[3]);
  uVar8 = fixedmult(normal->y,(o->orientMat).m[4]);
  uVar9 = fixedmult(normal->z,(o->orientMat).m[5]);
  uVar10 = fixedmult(normal->x,(o->orientMat).m[6]);
  uVar11 = fixedmult(normal->y,(o->orientMat).m[7]);
  uVar12 = fixedmult(normal->z,(o->orientMat).m[8]);
  iVar3 = uVar10 + uVar11 + uVar12;
  if ((int)(uVar2 + uVar8 + uVar9) < -0x8000) {
    zone = 8;
    Newton_AddDamageZone__FP13BO_tNewtonObjiii(o,impulse,8,0);
  }
  if (iVar3 < -0x1999) {
    if (iVar13 < 0x199a) {
      if (-0x199a < iVar13) goto LAB_8008e568;
      zone = 2;
    }
    else {
      zone = 0;
    }
  }
  else {
LAB_8008e568:
    bVar1 = zone < 8;
    if (iVar3 < 0x199a) goto LAB_8008e594;
    if (iVar13 < 0x199a) {
      bVar1 = zone < 8;
      if (-0x199a < iVar13) goto LAB_8008e594;
      zone = 6;
    }
    else {
      zone = 4;
    }
  }
  bVar1 = zone < 8;
LAB_8008e594:
  if (bVar1) {
    Newton_AddDamageZone__FP13BO_tNewtonObjiii(o,impulse,zone,0);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Collide_DoObjectObjectCollision__FP13BO_tNewtonObjT0P8coorddefT2(struct BO_tNewtonObj *o0 /*stack 0*/, struct BO_tNewtonObj *o1 /*$fp*/, struct coorddef *p /*$a2*/, struct coorddef *normal /*stack 12*/)
 // line 554, offset 0x8008e5d4
	/* begin block 1 */
		// Start line: 555
		// Start offset: 0x8008E5D4
		// Variables:
	// 		int impulse; // $s6
	// 		int impulseWST; // $s0
	// 		struct coorddef impulseV; // stack offset -168
	// 		struct coorddef R0CrossN; // stack offset -152
	// 		struct coorddef R1CrossN; // stack offset -136
	// 		struct coorddef Rt0; // stack offset -120
	// 		struct coorddef Rt1; // stack offset -104
	// 		int numerator; // $s2
	// 		struct coorddef deltaV; // stack offset -88
	// 		struct coorddef damageVector; // stack offset -72

		/* begin block 1.1 */
			// Start line: 620
			// Start offset: 0x8008EC40

			/* begin block 1.1.1 */
				// Start line: 627
				// Start offset: 0x8008ECDC
				// Variables:
			// 		int zone; // $s4
			// 		int impulse; // $s5

				/* begin block 1.1.1.1 */
					// Start line: 628
					// Start offset: 0x8008ECDC

					/* begin block 1.1.1.1.1 */
						// Start line: 639
						// Start offset: 0x8008ED2C
						// Variables:
					// 		int right; // $s3
					// 		int top; // $s1
					// 		int front; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008EEF4
					// End Line: 669
				/* end block 1.1.1.1 */
				// End offset: 0x8008EEF4
				// End Line: 669
			/* end block 1.1.1 */
			// End offset: 0x8008EEF4
			// End Line: 669
		/* end block 1.1 */
		// End offset: 0x8008EEF4
		// End Line: 669

		/* begin block 1.2 */
			// Start line: 674
			// Start offset: 0x8008EEF4

			/* begin block 1.2.1 */
				// Start line: 681
				// Start offset: 0x8008EF84
				// Variables:
			// 		int zone; // $s4
			// 		int impulse; // $s5

				/* begin block 1.2.1.1 */
					// Start line: 682
					// Start offset: 0x8008EF84

					/* begin block 1.2.1.1.1 */
						// Start line: 692
						// Start offset: 0x8008EFBC
						// Variables:
					// 		int right; // $s3
					// 		int top; // $s1
					// 		int front; // $s0
					/* end block 1.2.1.1.1 */
					// End offset: 0x8008F15C
					// End Line: 722
				/* end block 1.2.1.1 */
				// End offset: 0x8008F15C
				// End Line: 722
			/* end block 1.2.1 */
			// End offset: 0x8008F15C
			// End Line: 722
		/* end block 1.2 */
		// End offset: 0x8008F15C
		// End Line: 722
	/* end block 1 */
	// End offset: 0x8008F520
	// End Line: 753

	/* begin block 2 */
		// Start line: 1260
	/* end block 2 */
	// End Line: 1261

	/* begin block 3 */
		// Start line: 1273
	/* end block 3 */
	// End Line: 1274

	/* begin block 4 */
		// Start line: 1273
	/* end block 4 */
	// End Line: 1274

int Collide_DoObjectObjectCollision__FP13BO_tNewtonObjT0P8coorddefT2
              (BO_tNewtonObj *o0,BO_tNewtonObj *o1,coorddef *p,coorddef *normal)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint zone;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined *puVar18;
  int impulse;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint local_58;
  uint local_54;
  coorddef local_48;
  uint local_38;
  uint local_34;
  uint local_30;
  
  iVar2 = p->x - (o0->position).x;
  iVar17 = p->y - (o0->position).y;
  iVar3 = p->z - (o0->position).z;
  iVar4 = p->x - (o1->position).x;
  iVar5 = p->y - (o1->position).y;
  iVar6 = p->z - (o1->position).z;
  uVar7 = fixedmult(iVar17,normal->z);
  uVar8 = fixedmult(iVar3,normal->y);
  impulse = uVar7 - uVar8;
  uVar7 = fixedmult(iVar3,normal->x);
  uVar8 = fixedmult(iVar2,normal->z);
  iVar19 = uVar7 - uVar8;
  uVar7 = fixedmult(iVar2,normal->y);
  uVar8 = fixedmult(iVar17,normal->x);
  iVar20 = uVar7 - uVar8;
  uVar7 = fixedmult(iVar5,normal->z);
  uVar8 = fixedmult(iVar6,normal->y);
  iVar21 = uVar7 - uVar8;
  uVar7 = fixedmult(iVar6,normal->x);
  uVar8 = fixedmult(iVar4,normal->z);
  iVar22 = uVar7 - uVar8;
  uVar7 = fixedmult(iVar4,normal->y);
  uVar8 = fixedmult(iVar5,normal->x);
  iVar23 = uVar7 - uVar8;
  uVar7 = fixedmult((o0->linearVel).x,normal->x);
  local_38 = fixedmult((o0->linearVel).y,normal->y);
  local_34 = fixedmult((o0->linearVel).z,normal->z);
  uVar8 = fixedmult((o1->linearVel).x,normal->x);
  local_30 = fixedmult((o1->linearVel).y,normal->y);
  uVar9 = fixedmult((o1->linearVel).z,normal->z);
  uVar10 = fixedmult((o0->angularVel).x,impulse);
  zone = fixedmult((o0->angularVel).y,iVar19);
  uVar11 = fixedmult((o0->angularVel).z,iVar20);
  uVar12 = fixedmult((o1->angularVel).x,iVar21);
  uVar13 = fixedmult((o1->angularVel).y,iVar22);
  uVar14 = fixedmult((o1->angularVel).z,iVar23);
  iVar25 = uVar7 + local_38 + local_34;
  iVar24 = uVar8 + local_30;
  uVar7 = fixedmult(impulse,impulse);
  uVar8 = fixedmult(iVar19,iVar19);
  uVar15 = fixedmult(iVar20,iVar20);
  uVar7 = fixedmult(uVar7 + uVar8 + uVar15,o0->moInertiaInv);
  uVar8 = fixedmult(iVar21,iVar21);
  uVar15 = fixedmult(iVar22,iVar22);
  uVar16 = fixedmult(iVar23,iVar23);
  uVar8 = fixedmult(uVar8 + uVar15 + uVar16,o1->moInertiaInv);
  impulse = fixeddiv((((iVar24 + uVar9) - iVar25) - (uVar10 + zone + uVar11)) +
                     uVar12 + uVar13 + uVar14,
                     ((int)(o0->massInv + ((uint)o0->massInv >> 0x1f)) >> 1) +
                     ((int)(o1->massInv + ((uint)o1->massInv >> 0x1f)) >> 1) + ((int)uVar7 >> 1) +
                     ((int)uVar8 >> 1));
  if (impulse < 0) {
    return 0;
  }
  if (((o0[1].simRoadInfo.quadPts[1].y & 4U) != 0) && ((o0->collision).collided == 0)) {
    (o0->collision).collided = 2;
  }
  if (((o1[1].simRoadInfo.quadPts[1].y & 4U) != 0) && ((o1->collision).collided == 0)) {
    (o1->collision).collided = 2;
  }
  puVar18 = &DAT_00003333;
  if (((o0[1].simRoadInfo.quadPts[1].y & 4U) != 0) && ((o1[1].simRoadInfo.quadPts[1].y & 4U) != 0))
  {
    puVar18 = (undefined *)0x4000;
  }
  uVar7 = fixedmult((int)puVar18,impulse);
  uVar8 = fixedmult(uVar7,normal->x);
  uVar9 = fixedmult(uVar7,normal->y);
  uVar10 = fixedmult(uVar7,normal->z);
  zone = fixedmult((o0->linearVel).x,normal->x);
  uVar11 = fixedmult((o0->linearVel).y,normal->y);
  uVar12 = fixedmult((o0->linearVel).z,normal->z);
  uVar13 = fixedmult((o1->linearVel).x,normal->x);
  uVar14 = fixedmult((o1->linearVel).y,normal->y);
  uVar15 = fixedmult((o1->linearVel).z,normal->z);
  zone = fixedmult((zone + uVar11 + uVar12) - (uVar13 + uVar14 + uVar15),o0->mass + o1->mass);
  uVar11 = fixedmult(zone,o0->massInv);
  if ((int)uVar11 < 1) {
    uVar11 = fixedmult(zone,o0->massInv);
    uVar11 = -uVar11;
  }
  else {
    uVar11 = fixedmult(zone,o0->massInv);
  }
  (o0->collision).impulse = uVar11;
  uVar11 = fixedmult(zone,o1->massInv);
  if ((int)uVar11 < 1) {
    zone = fixedmult(zone,o1->massInv);
    (o1->collision).impulse = -zone;
  }
  else {
    zone = fixedmult(zone,o1->massInv);
    (o1->collision).impulse = zone;
  }
  if ((0x1ff < o0->objID) || (0x1ff < o1->objID)) {
    (o0->collision).impulse = (o0->collision).impulse / 3;
    (o1->collision).impulse = (o1->collision).impulse / 3;
  }
  zone = fixedmult(o0->massInv,uVar8);
  uVar11 = fixedmult(o0->massInv,uVar9);
  uVar12 = fixedmult(o0->massInv,uVar10);
  (o0->linearVel).x = (o0->linearVel).x + zone;
  (o0->linearVel).y = (o0->linearVel).y + uVar11;
  impulse = (o0->linearVel).z;
  iVar19 = o0->objID;
  (o0->collision).sfxType = 0x50001;
  (o0->collision).otherObj = o1;
  (o0->linearVel).z = impulse + uVar12;
  if (iVar19 < 0x200) {
    impulse = (o0->collision).impulse;
    local_48.x = (o0->position).x - (o1->position).x;
    zone = 9;
    local_48.y = (o0->position).y - (o1->position).y;
    local_48.z = (o0->position).z - (o1->position).z;
    Math_NormalizeShortVector__FP8coorddef(&local_48);
    if (0xa0000 < impulse) {
      uVar11 = fixedmult(local_48.x,(o0->orientMat).m[0]);
      uVar12 = fixedmult(local_48.y,(o0->orientMat).m[1]);
      uVar13 = fixedmult(local_48.z,(o0->orientMat).m[2]);
      iVar20 = uVar11 + uVar12 + uVar13;
      uVar11 = fixedmult(local_48.x,(o0->orientMat).m[3]);
      uVar12 = fixedmult(local_48.y,(o0->orientMat).m[4]);
      uVar13 = fixedmult(local_48.z,(o0->orientMat).m[5]);
      uVar14 = fixedmult(local_48.x,(o0->orientMat).m[6]);
      uVar15 = fixedmult(local_48.y,(o0->orientMat).m[7]);
      uVar16 = fixedmult(local_48.z,(o0->orientMat).m[8]);
      iVar19 = uVar14 + uVar15 + uVar16;
      if ((int)(uVar11 + uVar12 + uVar13) < -0x8000) {
        zone = 8;
        Newton_AddDamageZone__FP13BO_tNewtonObjiii(o0,impulse,8,2);
      }
      iVar21 = iVar20;
      if (iVar20 < 0) {
        iVar21 = -iVar20;
      }
      if (iVar21 < 0x1999) {
        if (iVar19 < -0x1999) {
          zone = 1;
        }
        else {
          if (iVar19 < 0x199a) goto LAB_8008ee48;
          zone = 5;
        }
LAB_8008eed8:
        bVar1 = zone < 8;
      }
      else {
LAB_8008ee48:
        iVar21 = iVar19;
        if (iVar19 < 0) {
          iVar21 = -iVar19;
        }
        if (iVar21 < 0x1999) {
          if (iVar20 < 0x199a) {
            if (-0x199a < iVar20) goto LAB_8008ee84;
            zone = 3;
          }
          else {
            zone = 7;
          }
          goto LAB_8008eed8;
        }
LAB_8008ee84:
        if (iVar19 < -0x1999) {
          if (iVar20 < 0x199a) {
            if (-0x199a < iVar20) goto LAB_8008eeb0;
            zone = 2;
          }
          else {
            zone = 0;
          }
          goto LAB_8008eed8;
        }
LAB_8008eeb0:
        bVar1 = zone < 8;
        if (0x1999 < iVar19) {
          if (iVar20 < 0x199a) {
            bVar1 = zone < 8;
            if (-0x199a < iVar20) goto LAB_8008eedc;
            zone = 4;
          }
          else {
            zone = 6;
          }
          goto LAB_8008eed8;
        }
      }
LAB_8008eedc:
      if (bVar1) {
        Newton_AddDamageZone__FP13BO_tNewtonObjiii(o0,impulse,zone,2);
      }
    }
  }
  zone = fixedmult(o1->massInv,uVar8);
  uVar11 = fixedmult(o1->massInv,uVar9);
  uVar12 = fixedmult(o1->massInv,uVar10);
  (o1->linearVel).x = (o1->linearVel).x - zone;
  (o1->linearVel).y = (o1->linearVel).y - uVar11;
  (o1->collision).sfxType = 0x50001;
  impulse = o1->objID;
  (o1->collision).otherObj = o0;
  (o1->linearVel).z = (o1->linearVel).z - uVar12;
  if (0x1ff < impulse) goto LAB_8008f15c;
  impulse = (o1->collision).impulse;
  local_48.x = -local_48.x;
  local_48.z = -local_48.z;
  local_48.y = -local_48.y;
  zone = 9;
  if (impulse < 0xa0001) goto LAB_8008f15c;
  uVar11 = fixedmult(local_48.x,(o1->orientMat).m[0]);
  uVar12 = fixedmult(local_48.y,(o1->orientMat).m[1]);
  uVar13 = fixedmult(local_48.z,(o1->orientMat).m[2]);
  iVar20 = uVar11 + uVar12 + uVar13;
  uVar11 = fixedmult(local_48.x,(o1->orientMat).m[3]);
  uVar12 = fixedmult(local_48.y,(o1->orientMat).m[4]);
  uVar13 = fixedmult(local_48.z,(o1->orientMat).m[5]);
  uVar14 = fixedmult(local_48.x,(o1->orientMat).m[6]);
  uVar15 = fixedmult(local_48.y,(o1->orientMat).m[7]);
  uVar16 = fixedmult(local_48.z,(o1->orientMat).m[8]);
  iVar19 = uVar14 + uVar15 + uVar16;
  if ((int)(uVar11 + uVar12 + uVar13) < -0x8000) {
    zone = 8;
    Newton_AddDamageZone__FP13BO_tNewtonObjiii(o1,impulse,8,2);
  }
  iVar21 = iVar20;
  if (iVar20 < 0) {
    iVar21 = -iVar20;
  }
  if (iVar21 < 0x1999) {
    if (iVar19 < -0x1999) {
      zone = 1;
    }
    else {
      if (iVar19 < 0x199a) goto LAB_8008f0b0;
      zone = 5;
    }
LAB_8008f140:
    bVar1 = zone < 8;
  }
  else {
LAB_8008f0b0:
    iVar21 = iVar19;
    if (iVar19 < 0) {
      iVar21 = -iVar19;
    }
    if (iVar21 < 0x1999) {
      if (iVar20 < 0x199a) {
        if (-0x199a < iVar20) goto LAB_8008f0ec;
        zone = 3;
      }
      else {
        zone = 7;
      }
      goto LAB_8008f140;
    }
LAB_8008f0ec:
    if (iVar19 < -0x1999) {
      if (iVar20 < 0x199a) {
        if (-0x199a < iVar20) goto LAB_8008f118;
        zone = 2;
      }
      else {
        zone = 0;
      }
      goto LAB_8008f140;
    }
LAB_8008f118:
    bVar1 = zone < 8;
    if (0x1999 < iVar19) {
      if (iVar20 < 0x199a) {
        bVar1 = zone < 8;
        if (-0x199a < iVar20) goto LAB_8008f144;
        zone = 4;
      }
      else {
        zone = 6;
      }
      goto LAB_8008f140;
    }
  }
LAB_8008f144:
  if (bVar1) {
    Newton_AddDamageZone__FP13BO_tNewtonObjiii(o1,impulse,zone,2);
  }
LAB_8008f15c:
  zone = fixedmult(iVar17,uVar10);
  uVar11 = fixedmult(iVar3,uVar9);
  uVar12 = fixedmult(iVar3,uVar8);
  uVar13 = fixedmult(iVar2,uVar10);
  uVar14 = fixedmult(iVar2,uVar9);
  uVar15 = fixedmult(iVar17,uVar8);
  if (((o0[1].simRoadInfo.quadPts[1].y & 4U) == 0) || (0x3fffff < (int)uVar7)) {
    local_58 = fixedmult(o0->moInertiaInv,zone - uVar11);
    local_54 = fixedmult(o0->moInertiaInv,uVar12 - uVar13);
    iVar2 = o0->moInertiaInv;
  }
  else {
    iVar2 = o0->moInertiaInv * 3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    local_58 = fixedmult(iVar2 >> 2,zone - uVar11);
    iVar2 = o0->moInertiaInv * 3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    local_54 = fixedmult(iVar2 >> 2,uVar12 - uVar13);
    iVar2 = o0->moInertiaInv * 3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    iVar2 = iVar2 >> 2;
  }
  zone = fixedmult(iVar2,uVar14 - uVar15);
  (o0->angularVel).x = (o0->angularVel).x + local_58;
  (o0->angularVel).y = (o0->angularVel).y + local_54;
  (o0->angularVel).z = (o0->angularVel).z + zone;
  zone = fixedmult(iVar5,uVar10);
  uVar11 = fixedmult(iVar6,uVar9);
  uVar12 = fixedmult(iVar6,uVar8);
  uVar10 = fixedmult(iVar4,uVar10);
  uVar9 = fixedmult(iVar4,uVar9);
  uVar8 = fixedmult(iVar5,uVar8);
  if (((o1[1].simRoadInfo.quadPts[1].y & 4U) == 0) || (0x3fffff < (int)uVar7)) {
    local_58 = fixedmult(o1->moInertiaInv,zone - uVar11);
    local_54 = fixedmult(o1->moInertiaInv,uVar12 - uVar10);
    iVar2 = o1->moInertiaInv;
  }
  else {
    iVar2 = o1->moInertiaInv * 3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    local_58 = fixedmult(iVar2 >> 2,zone - uVar11);
    iVar2 = o1->moInertiaInv * 3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    local_54 = fixedmult(iVar2 >> 2,uVar12 - uVar10);
    iVar2 = o1->moInertiaInv * 3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    iVar2 = iVar2 >> 2;
  }
  uVar7 = fixedmult(iVar2,uVar9 - uVar8);
  (o1->angularVel).x = (o1->angularVel).x - local_58;
  (o1->angularVel).y = (o1->angularVel).y - local_54;
  (o1->angularVel).z = (o1->angularVel).z - uVar7;
  o0->flightTime = o0->flightTime + 1;
  iVar2 = (o1->position).x;
  o1->flightTime = o1->flightTime + 1;
  uVar7 = (o0->position).x + iVar2;
  iVar2 = (int)(uVar7 + (uVar7 >> 0x1f)) >> 1;
  (o1->collision).collisionPoint.x = iVar2;
  (o0->collision).collisionPoint.x = iVar2;
  uVar7 = (o0->position).y + (o1->position).y;
  iVar2 = (int)(uVar7 + (uVar7 >> 0x1f)) >> 1;
  (o1->collision).collisionPoint.y = iVar2;
  iVar3 = (o0->position).z;
  (o0->collision).collisionPoint.y = iVar2;
  uVar7 = iVar3 + (o1->position).z;
  iVar2 = (int)(uVar7 + (uVar7 >> 0x1f)) >> 1;
  (o1->collision).collisionPoint.z = iVar2;
  (o0->collision).collisionPoint.z = iVar2;
  return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Collide_DoActualObjectCollisionCheck__FP13BO_tNewtonObjT0P8coorddefT2(struct BO_tNewtonObj *o0 /*$s1*/, struct BO_tNewtonObj *o1 /*$s2*/, struct coorddef *p /*$a2*/, struct coorddef *normal /*$s0*/)
 // line 762, offset 0x8008f550
	/* begin block 1 */
		// Start line: 763
		// Start offset: 0x8008F550
		// Labels:
		//		0x00003D7C	FindClosestSideAndReturnCollision
		//		0x000041E0	FindClosestSideAndReturnCollisionOther

		/* begin block 1.1 */
			// Start line: 818
			// Start offset: 0x8008F7EC
			// Variables:
		// 		int maxv; // $v1
		// 		int vx; // $v0
		// 		int vy; // $a1
		// 		int vz; // $a0
		/* end block 1.1 */
		// End offset: 0x8008F874
		// End Line: 830

		/* begin block 1.2 */
			// Start line: 833
			// Start offset: 0x8008F874

			/* begin block 1.2.1 */
				// Start line: 834
				// Start offset: 0x8008F884
				// Variables:
			// 		struct coorddef normalx; // stack offset -96
			// 		struct coorddef normaly; // stack offset -80
			// 		struct coorddef normalz; // stack offset -64
			// 		int dotx; // $a3
			// 		int doty; // $a1
			// 		int dotz; // $v1
			// 		struct coorddef vel; // stack offset -48
			/* end block 1.2.1 */
			// End offset: 0x8008FB3C
			// End Line: 874

			/* begin block 1.2.2 */
				// Start line: 878
				// Start offset: 0x8008FB44
				// Variables:
			// 		int xDiff; // $a1
			// 		int yDiff; // $a0
			// 		int zDiff; // $v1
			/* end block 1.2.2 */
			// End offset: 0x8008FC48
			// End Line: 916
		/* end block 1.2 */
		// End offset: 0x8008FC48
		// End Line: 917

		/* begin block 1.3 */
			// Start line: 924
			// Start offset: 0x8008FC50
			// Variables:
		// 		int maxv; // $v1
		// 		int vx; // $v0
		// 		int vy; // $a1
		// 		int vz; // $a0
		/* end block 1.3 */
		// End offset: 0x8008FCD8
		// End Line: 936

		/* begin block 1.4 */
			// Start line: 939
			// Start offset: 0x8008FCD8

			/* begin block 1.4.1 */
				// Start line: 940
				// Start offset: 0x8008FCE8
				// Variables:
			// 		struct coorddef normalx; // stack offset -96
			// 		struct coorddef normaly; // stack offset -80
			// 		struct coorddef normalz; // stack offset -64
			// 		int dotx; // $a3
			// 		int doty; // $a1
			// 		int dotz; // $v1
			// 		struct coorddef vel; // stack offset -32
			/* end block 1.4.1 */
			// End offset: 0x8008FFE0
			// End Line: 981

			/* begin block 1.4.2 */
				// Start line: 985
				// Start offset: 0x80090000
				// Variables:
			// 		int xDiff; // $a1
			// 		int yDiff; // $a0
			// 		int zDiff; // $v1
			/* end block 1.4.2 */
			// End offset: 0x80090128
			// End Line: 1024
		/* end block 1.4 */
		// End offset: 0x80090128
		// End Line: 1024
	/* end block 1 */
	// End offset: 0x8009012C
	// End Line: 1028

	/* begin block 2 */
		// Start line: 1766
	/* end block 2 */
	// End Line: 1767

	/* begin block 3 */
		// Start line: 1776
	/* end block 3 */
	// End Line: 1777

	/* begin block 4 */
		// Start line: 1776
	/* end block 4 */
	// End Line: 1777

int Collide_DoActualObjectCollisionCheck__FP13BO_tNewtonObjT0P8coorddefT2
              (BO_tNewtonObj *o0,BO_tNewtonObj *o1,coorddef *p,coorddef *normal)

{
  uchar *puVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uchar *puVar11;
  int iVar12;
  uchar *puVar13;
  int iVar14;
  uchar *puVar15;
  int iVar16;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  
  obj0 = o0;
  obj1 = o1;
  pNormal = normal;
  pP = p;
  iVar3 = CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(1,0,0);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(0,1,0);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(0,0,1);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(-1,0,0);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(0,-1,0);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(0,0,-1);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(1,0,0);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(0,1,0);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(0,0,1);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(-1,0,0);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(0,-1,0);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(0,0,-1);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = CHECK_VERTEX_WITH_DIRS__Fiii(1,1,1);
  if (((((iVar3 == 0) && (iVar3 = CHECK_VERTEX_WITH_DIRS__Fiii(1,1,-1), iVar3 == 0)) &&
       (iVar3 = CHECK_VERTEX_WITH_DIRS__Fiii(1,-1,1), iVar3 == 0)) &&
      ((iVar3 = CHECK_VERTEX_WITH_DIRS__Fiii(1,-1,-1), iVar3 == 0 &&
       (iVar3 = CHECK_VERTEX_WITH_DIRS__Fiii(-1,1,1), iVar3 == 0)))) &&
     ((iVar3 = CHECK_VERTEX_WITH_DIRS__Fiii(-1,1,-1), iVar3 == 0 &&
      ((iVar3 = CHECK_VERTEX_WITH_DIRS__Fiii(-1,-1,1), iVar3 == 0 &&
       (iVar3 = CHECK_VERTEX_WITH_DIRS__Fiii(-1,-1,-1), iVar3 == 0)))))) {
    iVar3 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(1,1,1);
    if ((((iVar3 == 0) && (iVar3 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(1,1,-1), iVar3 == 0)) &&
        (iVar3 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(1,-1,1), iVar3 == 0)) &&
       (((iVar3 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(1,-1,-1), iVar3 == 0 &&
         (iVar3 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(-1,1,1), iVar3 == 0)) &&
        ((iVar3 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(-1,1,-1), iVar3 == 0 &&
         ((iVar3 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(-1,-1,1), iVar3 == 0 &&
          (iVar3 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(-1,-1,-1), iVar3 == 0)))))))) {
      return 0;
    }
    puVar6 = zRange;
    puVar2 = yRange;
    puVar1 = xRange;
    iVar12 = (o1->linearVel).x;
    iVar7 = (o0->linearVel).x;
    iVar3 = iVar12 - iVar7;
    if (iVar3 < 1) {
      iVar3 = iVar7 - iVar12;
    }
    iVar12 = (o1->linearVel).y;
    iVar7 = (o0->linearVel).y;
    iVar14 = iVar12 - iVar7;
    if (iVar14 < 1) {
      iVar14 = iVar7 - iVar12;
    }
    iVar16 = (o1->linearVel).z;
    iVar7 = (o0->linearVel).z;
    iVar12 = iVar16 - iVar7;
    if (iVar12 < 1) {
      iVar12 = iVar7 - iVar16;
    }
    if (iVar3 < iVar14) {
      iVar3 = iVar14;
    }
    if (iVar3 < iVar12) {
      iVar3 = iVar12;
    }
    findClosestSideDave = ZEXT14(0xf0000 < iVar3);
    if (0xf0000 < iVar3) {
      iVar3 = (o0->linearVel).x;
      iVar7 = (o0->linearVel).y;
      iVar12 = (o0->linearVel).z;
      local_60 = (o1->orientMat).m[0];
      local_5c = (o1->orientMat).m[1];
      local_58 = (o1->orientMat).m[2];
      local_50 = (o1->orientMat).m[3];
      local_4c = (o1->orientMat).m[4];
      local_48 = (o1->orientMat).m[5];
      local_40 = (o1->orientMat).m[6];
      local_3c = (o1->orientMat).m[7];
      local_38 = (o1->orientMat).m[8];
      if ((int)xRange < 0) {
        local_60 = -local_60;
        local_58 = -local_58;
        local_5c = -local_5c;
      }
      if ((int)yRange < 0) {
        local_50 = -local_50;
        local_48 = -local_48;
        local_4c = -local_4c;
      }
      if ((int)zRange < 0) {
        local_40 = -local_40;
        local_38 = -local_38;
        local_3c = -local_3c;
      }
      iVar14 = local_60;
      if (local_60 < 0) {
        iVar14 = local_60 + 0xff;
      }
      iVar16 = iVar3;
      if (iVar3 < 0) {
        iVar16 = iVar3 + 0xff;
      }
      iVar4 = local_5c;
      if (local_5c < 0) {
        iVar4 = local_5c + 0xff;
      }
      iVar8 = iVar7;
      if (iVar7 < 0) {
        iVar8 = iVar7 + 0xff;
      }
      iVar5 = local_58;
      if (local_58 < 0) {
        iVar5 = local_58 + 0xff;
      }
      iVar9 = iVar12;
      if (iVar12 < 0) {
        iVar9 = iVar12 + 0xff;
      }
      iVar14 = (iVar14 >> 8) * (iVar16 >> 8) + (iVar4 >> 8) * (iVar8 >> 8) +
               (iVar5 >> 8) * (iVar9 >> 8);
      iVar4 = local_50;
      if (local_50 < 0) {
        iVar4 = local_50 + 0xff;
      }
      iVar5 = local_4c;
      if (local_4c < 0) {
        iVar5 = local_4c + 0xff;
      }
      iVar10 = local_48;
      if (local_48 < 0) {
        iVar10 = local_48 + 0xff;
      }
      iVar16 = (iVar4 >> 8) * (iVar16 >> 8) + (iVar5 >> 8) * (iVar8 >> 8) +
               (iVar10 >> 8) * (iVar9 >> 8);
      iVar4 = local_40;
      if (local_40 < 0) {
        iVar4 = local_40 + 0xff;
      }
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      iVar8 = local_3c;
      if (local_3c < 0) {
        iVar8 = local_3c + 0xff;
      }
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xff;
      }
      iVar5 = local_38;
      if (local_38 < 0) {
        iVar5 = local_38 + 0xff;
      }
      if (iVar12 < 0) {
        iVar12 = iVar12 + 0xff;
      }
      if (iVar14 < 0) {
        iVar14 = -iVar14;
      }
      if (iVar16 < 0) {
        iVar16 = -iVar16;
      }
      iVar3 = (iVar4 >> 8) * (iVar3 >> 8) + (iVar8 >> 8) * (iVar7 >> 8) +
              (iVar5 >> 8) * (iVar12 >> 8);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if ((iVar16 < iVar14) && (iVar3 < iVar14)) {
LAB_8008ff94:
        normal->x = local_60;
        normal->y = local_5c;
        normal->z = local_58;
        return 1;
      }
      if (iVar16 <= iVar3) {
LAB_8008ffe0:
        normal->x = local_40;
        normal->y = local_3c;
        normal->z = local_38;
        return 1;
      }
LAB_8008ffc0:
      normal->x = local_50;
      normal->y = local_4c;
      normal->z = local_48;
      return 1;
    }
    if ((int)xRange < 0) {
      puVar15 = xRange + (o1->dimension).x;
    }
    else {
      puVar15 = (uchar *)((o1->dimension).x - (int)xRange);
    }
    if ((int)yRange < 0) {
      puVar13 = yRange + (o1->dimension).y;
    }
    else {
      puVar13 = (uchar *)((o1->dimension).y - (int)yRange);
    }
    if ((int)zRange < 0) {
      puVar11 = zRange + (o1->dimension).z;
    }
    else {
      puVar11 = (uchar *)((o1->dimension).z - (int)zRange);
    }
    if (((int)puVar15 < (int)puVar13) && ((int)puVar15 < (int)puVar11)) {
      iVar3 = (o1->orientMat).m[1];
      iVar7 = (o1->orientMat).m[2];
      normal->x = (o1->orientMat).m[0];
      normal->y = iVar3;
      normal->z = iVar7;
      puVar6 = puVar1;
    }
    else {
      if ((int)puVar13 < (int)puVar11) {
        iVar3 = (o1->orientMat).m[4];
        iVar7 = (o1->orientMat).m[5];
        normal->x = (o1->orientMat).m[3];
        normal->y = iVar3;
        normal->z = iVar7;
        puVar6 = puVar2;
      }
      else {
        iVar3 = (o1->orientMat).m[7];
        iVar7 = (o1->orientMat).m[8];
        normal->x = (o1->orientMat).m[6];
        normal->y = iVar3;
        normal->z = iVar7;
      }
    }
    if (-1 < (int)puVar6) {
      return 1;
    }
  }
  else {
    puVar6 = zRange;
    puVar2 = yRange;
    puVar1 = xRange;
    iVar12 = (o1->linearVel).x;
    iVar7 = (o0->linearVel).x;
    iVar3 = iVar12 - iVar7;
    if (iVar3 < 1) {
      iVar3 = iVar7 - iVar12;
    }
    iVar12 = (o1->linearVel).y;
    iVar7 = (o0->linearVel).y;
    iVar14 = iVar12 - iVar7;
    if (iVar14 < 1) {
      iVar14 = iVar7 - iVar12;
    }
    iVar16 = (o1->linearVel).z;
    iVar7 = (o0->linearVel).z;
    iVar12 = iVar16 - iVar7;
    if (iVar12 < 1) {
      iVar12 = iVar7 - iVar16;
    }
    if (iVar3 < iVar14) {
      iVar3 = iVar14;
    }
    if (iVar3 < iVar12) {
      iVar3 = iVar12;
    }
    findClosestSideDave = ZEXT14(0xf0000 < iVar3);
    if (0xf0000 < iVar3) {
      iVar3 = (o1->linearVel).x;
      iVar7 = (o1->linearVel).y;
      iVar12 = (o1->linearVel).z;
      local_60 = (o0->orientMat).m[0];
      local_5c = (o0->orientMat).m[1];
      local_58 = (o0->orientMat).m[2];
      local_50 = (o0->orientMat).m[3];
      local_4c = (o0->orientMat).m[4];
      local_48 = (o0->orientMat).m[5];
      local_40 = (o0->orientMat).m[6];
      local_3c = (o0->orientMat).m[7];
      local_38 = (o0->orientMat).m[8];
      if (0 < (int)xRange) {
        local_60 = -local_60;
        local_58 = -local_58;
        local_5c = -local_5c;
      }
      if (0 < (int)yRange) {
        local_50 = -local_50;
        local_48 = -local_48;
        local_4c = -local_4c;
      }
      if (0 < (int)zRange) {
        local_40 = -local_40;
        local_38 = -local_38;
        local_3c = -local_3c;
      }
      iVar14 = local_60;
      if (local_60 < 0) {
        iVar14 = local_60 + 0xff;
      }
      iVar16 = iVar3;
      if (iVar3 < 0) {
        iVar16 = iVar3 + 0xff;
      }
      iVar4 = local_5c;
      if (local_5c < 0) {
        iVar4 = local_5c + 0xff;
      }
      iVar8 = iVar7;
      if (iVar7 < 0) {
        iVar8 = iVar7 + 0xff;
      }
      iVar5 = local_58;
      if (local_58 < 0) {
        iVar5 = local_58 + 0xff;
      }
      iVar9 = iVar12;
      if (iVar12 < 0) {
        iVar9 = iVar12 + 0xff;
      }
      iVar14 = (iVar14 >> 8) * (iVar16 >> 8) + (iVar4 >> 8) * (iVar8 >> 8) +
               (iVar5 >> 8) * (iVar9 >> 8);
      iVar4 = local_50;
      if (local_50 < 0) {
        iVar4 = local_50 + 0xff;
      }
      iVar5 = local_4c;
      if (local_4c < 0) {
        iVar5 = local_4c + 0xff;
      }
      iVar10 = local_48;
      if (local_48 < 0) {
        iVar10 = local_48 + 0xff;
      }
      iVar16 = (iVar4 >> 8) * (iVar16 >> 8) + (iVar5 >> 8) * (iVar8 >> 8) +
               (iVar10 >> 8) * (iVar9 >> 8);
      iVar4 = local_40;
      if (local_40 < 0) {
        iVar4 = local_40 + 0xff;
      }
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      iVar8 = local_3c;
      if (local_3c < 0) {
        iVar8 = local_3c + 0xff;
      }
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xff;
      }
      iVar5 = local_38;
      if (local_38 < 0) {
        iVar5 = local_38 + 0xff;
      }
      if (iVar12 < 0) {
        iVar12 = iVar12 + 0xff;
      }
      if (iVar14 < 0) {
        iVar14 = -iVar14;
      }
      if (iVar16 < 0) {
        iVar16 = -iVar16;
      }
      iVar3 = (iVar4 >> 8) * (iVar3 >> 8) + (iVar8 >> 8) * (iVar7 >> 8) +
              (iVar5 >> 8) * (iVar12 >> 8);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if ((iVar16 < iVar14) && (iVar3 < iVar14)) goto LAB_8008ff94;
      if (iVar16 <= iVar3) goto LAB_8008ffe0;
      goto LAB_8008ffc0;
    }
    if ((int)xRange < 0) {
      puVar15 = xRange + (o0->dimension).x;
    }
    else {
      puVar15 = (uchar *)((o0->dimension).x - (int)xRange);
    }
    if ((int)yRange < 0) {
      puVar13 = yRange + (o0->dimension).y;
    }
    else {
      puVar13 = (uchar *)((o0->dimension).y - (int)yRange);
    }
    if ((int)zRange < 0) {
      puVar11 = zRange + (o0->dimension).z;
    }
    else {
      puVar11 = (uchar *)((o0->dimension).z - (int)zRange);
    }
    if (((int)puVar15 < (int)puVar13) && ((int)puVar15 < (int)puVar11)) {
      iVar3 = (o0->orientMat).m[1];
      iVar7 = (o0->orientMat).m[2];
      normal->x = (o0->orientMat).m[0];
      normal->y = iVar3;
      normal->z = iVar7;
      puVar6 = puVar1;
    }
    else {
      if ((int)puVar13 < (int)puVar11) {
        iVar3 = (o0->orientMat).m[4];
        iVar7 = (o0->orientMat).m[5];
        normal->x = (o0->orientMat).m[3];
        normal->y = iVar3;
        normal->z = iVar7;
        puVar6 = puVar2;
      }
      else {
        iVar3 = (o0->orientMat).m[7];
        iVar7 = (o0->orientMat).m[8];
        normal->x = (o0->orientMat).m[6];
        normal->y = iVar3;
        normal->z = iVar7;
      }
    }
    if ((int)puVar6 < 1) {
      return 1;
    }
  }
  normal->x = -normal->x;
  normal->z = -normal->z;
  normal->y = -normal->y;
  return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Collide_TestObjectVertices__FP13BO_tNewtonObjT0P8coorddefT2(struct BO_tNewtonObj *o0 /*$s3*/, struct BO_tNewtonObj *o1 /*$s2*/, struct coorddef *p /*stack 8*/, struct coorddef *normal /*stack 12*/)
 // line 1039, offset 0x80090144
	/* begin block 1 */
		// Start line: 1040
		// Start offset: 0x80090144
		// Variables:
	// 		int collisionHappened; // $s0
	// 		int ctr; // $s5
	// 		int numbackoffsteps; // $fp
	// 		struct coorddef backoff0; // stack offset -160
	// 		struct coorddef backoff1; // stack offset -144

		/* begin block 1.1 */
			// Start line: 1103
			// Start offset: 0x80090A64

			/* begin block 1.1.1 */
				// Start line: 1107
				// Start offset: 0x80090A8C
				// Variables:
			// 		struct coorddef relativePosition; // stack offset -128

				/* begin block 1.1.1.1 */
					// Start line: 1132
					// Start offset: 0x80090E08

					/* begin block 1.1.1.1.1 */
						// Start line: 1133
						// Start offset: 0x80090E10
						// Variables:
					// 		struct coorddef relativeVelocity; // stack offset -112
					// 		int useVelocity; // $s0
					// 		struct coorddef relativeUnit; // stack offset -96
					// 		int maxrv; // $v1
					// 		int maxrp; // $v0
					// 		int inverseRelativeVelocityLength; // $s1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1146
							// Start offset: 0x80090E70

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1149
								// Start offset: 0x80090E8C

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1152
									// Start offset: 0x80090EC4

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1156
										// Start offset: 0x80090EDC
										// Variables:
									// 		int temp; // $a1
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80090EF8
									// End Line: 1163

									/* begin block 1.1.1.1.1.1.1.1.2 */
										// Start line: 1166
										// Start offset: 0x80090F00
										// Variables:
									// 		int dot; // $v1
									// 		struct coorddef velocityUnit; // stack offset -80
									// 		struct coorddef positionUnit; // stack offset -64

										/* begin block 1.1.1.1.1.1.1.1.2.1 */
											// Start line: 1176
											// Start offset: 0x80090FC8

											/* begin block 1.1.1.1.1.1.1.1.2.1.1 */
												// Start line: 1179
												// Start offset: 0x80090FE8
												// Variables:
											// 		int temp; // $a1
											/* end block 1.1.1.1.1.1.1.1.2.1.1 */
											// End offset: 0x80091018
											// End Line: 1186

											/* begin block 1.1.1.1.1.1.1.1.2.1.2 */
												// Start line: 1188
												// Start offset: 0x80091018

												/* begin block 1.1.1.1.1.1.1.1.2.1.2.1 */
													// Start line: 1188
													// Start offset: 0x80091018

													/* begin block 1.1.1.1.1.1.1.1.2.1.2.1.1 */
														// Start line: 1189
														// Start offset: 0x80091018
													/* end block 1.1.1.1.1.1.1.1.2.1.2.1.1 */
													// End offset: 0x80091018
													// End Line: 1196
												/* end block 1.1.1.1.1.1.1.1.2.1.2.1 */
												// End offset: 0x80091018
												// End Line: 1196
											/* end block 1.1.1.1.1.1.1.1.2.1.2 */
											// End offset: 0x80091018
											// End Line: 1196
										/* end block 1.1.1.1.1.1.1.1.2.1 */
										// End offset: 0x80091018
										// End Line: 1196
									/* end block 1.1.1.1.1.1.1.1.2 */
									// End offset: 0x80091018
									// End Line: 1196
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80091018
								// End Line: 1196
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80091018
							// End Line: 1196
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80091018
						// End Line: 1196

						/* begin block 1.1.1.1.1.2 */
							// Start line: 1202
							// Start offset: 0x80091018

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 1233
								// Start offset: 0x8009110C
								// Variables:
							// 		int totalMass; // $s0
							// 		int r0; // $a0
							// 		int r1; // $s0
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x800912C4
							// End Line: 1262
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x800912C4
						// End Line: 1262
					/* end block 1.1.1.1.1 */
					// End offset: 0x800912C8
					// End Line: 1266
				/* end block 1.1.1.1 */
				// End offset: 0x800912C8
				// End Line: 1266
			/* end block 1.1.1 */
			// End offset: 0x800912C8
			// End Line: 1269
		/* end block 1.1 */
		// End offset: 0x80091344
		// End Line: 1271
	/* end block 1 */
	// End offset: 0x80091344
	// End Line: 1273

	/* begin block 2 */
		// Start line: 2394
	/* end block 2 */
	// End Line: 2395

	/* begin block 3 */
		// Start line: 2406
	/* end block 3 */
	// End Line: 2407

	/* begin block 4 */
		// Start line: 2406
	/* end block 4 */
	// End Line: 2407

int Collide_TestObjectVertices__FP13BO_tNewtonObjT0P8coorddefT2
              (BO_tNewtonObj *o0,BO_tNewtonObj *o1,coorddef *p,coorddef *normal)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_a0;
  int local_9c;
  int local_98;
  int local_90;
  int local_8c;
  int local_88;
  coorddef local_70;
  coorddef local_60;
  coorddef local_50;
  coorddef local_40;
  coorddef *local_30;
  
  iVar15 = 0;
  iVar9 = (o0->orientMat).m[0];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar2 = (o1->orientMat).m[0];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar10 = (o0->orientMat).m[1];
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar3 = (o1->orientMat).m[1];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar11 = (o0->orientMat).m[2];
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar4 = (o1->orientMat).m[2];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  basisDots = (iVar9 >> 8) * (iVar2 >> 8) + (iVar10 >> 8) * (iVar3 >> 8) +
              (iVar11 >> 8) * (iVar4 >> 8);
  iVar9 = (o0->orientMat).m[0];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar2 = (o1->orientMat).m[3];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar10 = (o0->orientMat).m[1];
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar3 = (o1->orientMat).m[4];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar11 = (o0->orientMat).m[2];
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar4 = (o1->orientMat).m[5];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  INT_8013e00c = (iVar9 >> 8) * (iVar2 >> 8) + (iVar10 >> 8) * (iVar3 >> 8) +
                 (iVar11 >> 8) * (iVar4 >> 8);
  iVar9 = (o0->orientMat).m[0];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar2 = (o1->orientMat).m[6];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar10 = (o0->orientMat).m[1];
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar3 = (o1->orientMat).m[7];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar11 = (o0->orientMat).m[2];
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar4 = (o1->orientMat).m[8];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  INT_8013e010 = (iVar9 >> 8) * (iVar2 >> 8) + (iVar10 >> 8) * (iVar3 >> 8) +
                 (iVar11 >> 8) * (iVar4 >> 8);
  iVar9 = (o0->orientMat).m[3];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar2 = (o1->orientMat).m[0];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar10 = (o0->orientMat).m[4];
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar3 = (o1->orientMat).m[1];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar11 = (o0->orientMat).m[5];
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar4 = (o1->orientMat).m[2];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  INT_8013e014 = (iVar9 >> 8) * (iVar2 >> 8) + (iVar10 >> 8) * (iVar3 >> 8) +
                 (iVar11 >> 8) * (iVar4 >> 8);
  iVar9 = (o0->orientMat).m[3];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar2 = (o1->orientMat).m[3];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar10 = (o0->orientMat).m[4];
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar3 = (o1->orientMat).m[4];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar11 = (o0->orientMat).m[5];
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar4 = (o1->orientMat).m[5];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  INT_8013e018 = (iVar9 >> 8) * (iVar2 >> 8) + (iVar10 >> 8) * (iVar3 >> 8) +
                 (iVar11 >> 8) * (iVar4 >> 8);
  iVar9 = (o0->orientMat).m[3];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar2 = (o1->orientMat).m[6];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar10 = (o0->orientMat).m[4];
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar3 = (o1->orientMat).m[7];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar11 = (o0->orientMat).m[5];
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar4 = (o1->orientMat).m[8];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  INT_8013e01c = (iVar9 >> 8) * (iVar2 >> 8) + (iVar10 >> 8) * (iVar3 >> 8) +
                 (iVar11 >> 8) * (iVar4 >> 8);
  iVar9 = (o0->orientMat).m[6];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar2 = (o1->orientMat).m[0];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar10 = (o0->orientMat).m[7];
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar3 = (o1->orientMat).m[1];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar11 = (o0->orientMat).m[8];
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar4 = (o1->orientMat).m[2];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  INT_8013e020 = (iVar9 >> 8) * (iVar2 >> 8) + (iVar10 >> 8) * (iVar3 >> 8) +
                 (iVar11 >> 8) * (iVar4 >> 8);
  iVar9 = (o0->orientMat).m[6];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar2 = (o1->orientMat).m[3];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar10 = (o0->orientMat).m[7];
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar3 = (o1->orientMat).m[4];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar11 = (o0->orientMat).m[8];
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar4 = (o1->orientMat).m[5];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  INT_8013e024 = (iVar9 >> 8) * (iVar2 >> 8) + (iVar10 >> 8) * (iVar3 >> 8) +
                 (iVar11 >> 8) * (iVar4 >> 8);
  iVar9 = (o0->orientMat).m[6];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar2 = (o1->orientMat).m[6];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar10 = (o0->orientMat).m[7];
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar3 = (o1->orientMat).m[7];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar11 = (o0->orientMat).m[8];
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar4 = (o1->orientMat).m[8];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  INT_8013e028 = (iVar9 >> 8) * (iVar2 >> 8) + (iVar10 >> 8) * (iVar3 >> 8) +
                 (iVar11 >> 8) * (iVar4 >> 8);
  iVar9 = basisDots;
  if (basisDots < 0) {
    iVar9 = basisDots + 0xff;
  }
  iVar2 = (o1->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  scaledBasisDots = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e00c;
  if (INT_8013e00c < 0) {
    iVar9 = INT_8013e00c + 0xff;
  }
  iVar2 = (o1->dimension).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e03c = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e010;
  if (INT_8013e010 < 0) {
    iVar9 = INT_8013e010 + 0xff;
  }
  iVar2 = (o1->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e040 = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e014;
  if (INT_8013e014 < 0) {
    iVar9 = INT_8013e014 + 0xff;
  }
  iVar2 = (o1->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e044 = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e018;
  if (INT_8013e018 < 0) {
    iVar9 = INT_8013e018 + 0xff;
  }
  iVar2 = (o1->dimension).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e048 = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e01c;
  if (INT_8013e01c < 0) {
    iVar9 = INT_8013e01c + 0xff;
  }
  iVar2 = (o1->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e04c = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e020;
  if (INT_8013e020 < 0) {
    iVar9 = INT_8013e020 + 0xff;
  }
  iVar2 = (o1->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e050 = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e024;
  if (INT_8013e024 < 0) {
    iVar9 = INT_8013e024 + 0xff;
  }
  iVar2 = (o1->dimension).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e054 = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e028;
  if (INT_8013e028 < 0) {
    iVar9 = INT_8013e028 + 0xff;
  }
  iVar2 = (o1->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e058 = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = basisDots;
  if (basisDots < 0) {
    iVar9 = basisDots + 0xff;
  }
  iVar2 = (o0->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  scaledBasisDotsOther = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e00c;
  if (INT_8013e00c < 0) {
    iVar9 = INT_8013e00c + 0xff;
  }
  iVar2 = (o0->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e06c = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e010;
  if (INT_8013e010 < 0) {
    iVar9 = INT_8013e010 + 0xff;
  }
  iVar2 = (o0->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e070 = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e014;
  if (INT_8013e014 < 0) {
    iVar9 = INT_8013e014 + 0xff;
  }
  iVar2 = (o0->dimension).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e074 = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e018;
  if (INT_8013e018 < 0) {
    iVar9 = INT_8013e018 + 0xff;
  }
  iVar2 = (o0->dimension).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e078 = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e01c;
  if (INT_8013e01c < 0) {
    iVar9 = INT_8013e01c + 0xff;
  }
  iVar2 = (o0->dimension).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e07c = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e020;
  if (INT_8013e020 < 0) {
    iVar9 = INT_8013e020 + 0xff;
  }
  iVar2 = (o0->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e080 = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e024;
  if (INT_8013e024 < 0) {
    iVar9 = INT_8013e024 + 0xff;
  }
  iVar2 = (o0->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e084 = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = INT_8013e028;
  if (INT_8013e028 < 0) {
    iVar9 = INT_8013e028 + 0xff;
  }
  iVar2 = (o0->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  INT_8013e088 = (iVar9 >> 8) * (iVar2 >> 8);
  iVar9 = 0;
  local_30 = &local_70;
  do {
    if (0x1f < iVar9) {
      return iVar15;
    }
    iVar3 = (o1->position).x - (o0->position).x;
    iVar11 = (o1->position).y - (o0->position).y;
    iVar2 = (o1->position).z - (o0->position).z;
    iVar10 = (o0->orientMat).m[0];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + 0xff;
    }
    iVar12 = (o0->orientMat).m[1];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar14 = iVar11;
    if (iVar11 < 0) {
      iVar14 = iVar11 + 0xff;
    }
    iVar13 = (o0->orientMat).m[2];
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = iVar2 + 0xff;
    }
    basisDotRelative =
         (iVar10 >> 8) * (iVar4 >> 8) + (iVar12 >> 8) * (iVar14 >> 8) + (iVar13 >> 8) * (iVar5 >> 8)
    ;
    iVar10 = (o0->orientMat).m[3];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar12 = (o0->orientMat).m[4];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar13 = (o0->orientMat).m[5];
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = iVar2 + 0xff;
    }
    INT_8013e09c = (iVar10 >> 8) * (iVar4 >> 8) + (iVar12 >> 8) * (iVar14 >> 8) +
                   (iVar13 >> 8) * (iVar5 >> 8);
    iVar10 = (o0->orientMat).m[6];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + 0xff;
    }
    iVar12 = (o0->orientMat).m[7];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar14 = iVar11;
    if (iVar11 < 0) {
      iVar14 = iVar11 + 0xff;
    }
    iVar13 = (o0->orientMat).m[8];
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = iVar2 + 0xff;
    }
    INT_8013e0a0 = (iVar10 >> 8) * (iVar4 >> 8) + (iVar12 >> 8) * (iVar14 >> 8) +
                   (iVar13 >> 8) * (iVar5 >> 8);
    iVar10 = (o1->orientMat).m[0];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar12 = (o1->orientMat).m[1];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar13 = (o1->orientMat).m[2];
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = iVar2 + 0xff;
    }
    INT_8013e0a4 = (iVar10 >> 8) * (iVar4 >> 8) + (iVar12 >> 8) * (iVar14 >> 8) +
                   (iVar13 >> 8) * (iVar5 >> 8);
    iVar10 = (o1->orientMat).m[3];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + 0xff;
    }
    iVar12 = (o1->orientMat).m[4];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar14 = iVar11;
    if (iVar11 < 0) {
      iVar14 = iVar11 + 0xff;
    }
    iVar13 = (o1->orientMat).m[5];
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = iVar2 + 0xff;
    }
    INT_8013e0a8 = (iVar10 >> 8) * (iVar4 >> 8) + (iVar12 >> 8) * (iVar14 >> 8) +
                   (iVar13 >> 8) * (iVar5 >> 8);
    iVar10 = (o1->orientMat).m[6];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar12 = (o1->orientMat).m[7];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar13 = (o1->orientMat).m[8];
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = iVar2 + 0xff;
    }
    INT_8013e0ac = (iVar10 >> 8) * (iVar4 >> 8) + (iVar12 >> 8) * (iVar14 >> 8) +
                   (iVar13 >> 8) * (iVar5 >> 8);
    iVar10 = Collide_DoActualObjectCollisionCheck__FP13BO_tNewtonObjT0P8coorddefT2(o0,o1,p,normal);
    if (iVar10 == 0) {
      return iVar15;
    }
    if (iVar15 == 0) {
      bVar1 = false;
      local_70.x = (o0->linearVel).x - (o1->linearVel).x;
      iVar15 = 0;
      local_70.y = (o0->linearVel).y - (o1->linearVel).y;
      local_70.z = (o0->linearVel).z - (o1->linearVel).z;
      iVar10 = local_70.x;
      if (local_70.x < 0) {
        iVar10 = local_70.x + 0xff;
      }
      iVar4 = local_70.z;
      if (local_70.z < 0) {
        iVar4 = local_70.z + 0xff;
      }
      if (0xe100000 < (iVar10 >> 8) * (iVar10 >> 8) + (iVar4 >> 8) * (iVar4 >> 8)) {
        iVar10 = iVar3;
        if (iVar3 < 0) {
          iVar10 = iVar3 + 0xff;
        }
        iVar4 = iVar2;
        if (iVar2 < 0) {
          iVar4 = iVar2 + 0xff;
        }
        if ((iVar10 >> 8) * (iVar10 >> 8) + (iVar4 >> 8) * (iVar4 >> 8) < 0xccc) {
          uVar6 = Math_VectorLength__FP8coorddef(&local_70);
          uVar6 = (int)((uVar6 >> 0x1f) + uVar6) >> 1;
          iVar15 = 0x10000;
          if (uVar6 == 0) {
            bVar1 = true;
          }
          else {
LAB_80091008:
            iVar15 = fixeddiv(0x8000,uVar6);
LAB_80091014:
            bVar1 = true;
          }
        }
        else {
          local_50.x = local_70.x;
          local_50.y = local_70.y;
          local_50.z = local_70.z;
          Math_NormalizeVector__FP8coorddef(&local_50);
          local_40.x = iVar3;
          local_40.y = iVar11;
          local_40.z = iVar2;
          Math_NormalizeShortVector__FP8coorddef(&local_40);
          iVar10 = local_50.x;
          if (local_50.x < 0) {
            iVar10 = local_50.x + 0xff;
          }
          iVar4 = local_40.x;
          if (local_40.x < 0) {
            iVar4 = local_40.x + 0xff;
          }
          iVar12 = local_50.y;
          if (local_50.y < 0) {
            iVar12 = local_50.y + 0xff;
          }
          iVar14 = local_40.y;
          if (local_40.y < 0) {
            iVar14 = local_40.y + 0xff;
          }
          iVar13 = local_50.z;
          if (local_50.z < 0) {
            iVar13 = local_50.z + 0xff;
          }
          iVar5 = local_40.z;
          if (local_40.z < 0) {
            iVar5 = local_40.z + 0xff;
          }
          if (0xd999 < (iVar10 >> 8) * (iVar4 >> 8) + (iVar12 >> 8) * (iVar14 >> 8) +
                       (iVar13 >> 8) * (iVar5 >> 8)) {
            uVar6 = Math_VectorLength__FP8coorddef(local_30);
            uVar6 = (int)((uVar6 >> 0x1f) + uVar6) >> 1;
            iVar15 = 0x10000;
            if (uVar6 != 0) goto LAB_80091008;
            goto LAB_80091014;
          }
        }
      }
      if (bVar1) {
        iVar2 = -iVar15;
        if (o0->objID < 0x200) {
          uVar6 = fixedmult(iVar2,(o0->linearVel).x);
          uVar7 = fixedmult(iVar2,(o0->linearVel).y);
          uVar8 = fixedmult(iVar2,(o0->linearVel).z);
          local_98 = (int)uVar8 >> 5;
          local_a0 = (int)uVar6 >> 5;
          local_9c = (int)uVar7 >> 5;
        }
        else {
          local_a0 = 0;
          local_9c = 0;
          local_98 = 0;
        }
        iVar15 = -iVar15;
        if (o1->objID < 0x200) {
          uVar6 = fixedmult(iVar15,(o1->linearVel).x);
          uVar7 = fixedmult(iVar15,(o1->linearVel).y);
          uVar8 = fixedmult(iVar15,(o1->linearVel).z);
          local_88 = (int)uVar8 >> 5;
          local_90 = (int)uVar6 >> 5;
          local_8c = (int)uVar7 >> 5;
        }
        else {
          local_90 = 0;
          local_8c = 0;
          local_88 = 0;
        }
      }
      else {
        local_60.x = iVar3;
        local_60.y = iVar11;
        local_60.z = iVar2;
        Math_NormalizeShortVector__FP8coorddef(&local_60);
        uVar6 = o0->mass + o1->mass;
        iVar15 = fixeddiv(o0->mass,uVar6);
        iVar2 = fixeddiv(o1->mass,uVar6);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 3;
        }
        iVar2 = iVar2 >> 2;
        iVar10 = local_60.x * iVar2;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 0x3fff;
        }
        iVar3 = local_60.y * iVar2;
        local_a0 = -(iVar10 >> 0xe) >> 5;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0x3fff;
        }
        local_9c = -(iVar3 >> 0xe) >> 5;
        iVar2 = local_60.z * iVar2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x3fff;
        }
        local_98 = -(iVar2 >> 0xe) >> 5;
        if (iVar15 < 0) {
          iVar15 = iVar15 + 3;
        }
        iVar15 = iVar15 >> 2;
        uVar6 = local_60.x * iVar15;
        uVar7 = local_60.y * iVar15;
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 + 0x3fff;
        }
        local_90 = (int)uVar6 >> 0x13;
        if ((int)uVar7 < 0) {
          uVar7 = uVar7 + 0x3fff;
        }
        local_8c = (int)uVar7 >> 0x13;
        uVar8 = local_60.z * iVar15;
        if ((int)uVar8 < 0) {
          uVar8 = uVar8 + 0x3fff;
        }
        local_88 = (int)uVar8 >> 0x13;
        if (0x1ff < o0->objID) {
          local_90 = (int)(local_90 + (uVar6 >> 0x1f)) >> 1;
          local_8c = (int)(local_8c + (uVar7 >> 0x1f)) >> 1;
          local_88 = (int)(local_88 + (uVar8 >> 0x1f)) >> 1;
        }
        iVar15 = 1;
        if (o1->objID < 0x200) goto LAB_800912c8;
        local_a0 = (int)(local_a0 + ((uint)-(iVar10 >> 0xe) >> 0x1f)) >> 1;
        local_9c = (int)(local_9c + ((uint)-(iVar3 >> 0xe) >> 0x1f)) >> 1;
        local_98 = (int)(local_98 + ((uint)-(iVar2 >> 0xe) >> 0x1f)) >> 1;
      }
      iVar15 = 1;
    }
LAB_800912c8:
    (o0->position).x = (o0->position).x + local_a0;
    (o0->position).y = (o0->position).y + local_9c;
    (o0->position).z = (o0->position).z + local_98;
    (o1->position).x = (o1->position).x + local_90;
    (o1->position).y = (o1->position).y + local_8c;
    iVar9 = iVar9 + 1;
    (o1->position).z = (o1->position).z + local_88;
  } while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ Collide_CheckForCollisionBetween__FP13BO_tNewtonObjT0(struct BO_tNewtonObj *o0 /*$s1*/, struct BO_tNewtonObj *o1 /*$s2*/)
 // line 1365, offset 0x80091374
	/* begin block 1 */
		// Start line: 1366
		// Start offset: 0x80091374
		// Variables:
	// 		struct coorddef p; // stack offset -56
	// 		struct coorddef normal; // stack offset -40

		/* begin block 1.1 */
			// Start line: 1377
			// Start offset: 0x800913C0
			// Variables:
		// 		int count; // $s0
		/* end block 1.1 */
		// End offset: 0x800914B4
		// End Line: 1409
	/* end block 1 */
	// End offset: 0x800914B4
	// End Line: 1416

	/* begin block 2 */
		// Start line: 3039
	/* end block 2 */
	// End Line: 3040

	/* begin block 3 */
		// Start line: 3132
	/* end block 3 */
	// End Line: 3133

	/* begin block 4 */
		// Start line: 3132
	/* end block 4 */
	// End Line: 3133

int Collide_CheckForCollisionBetween__FP13BO_tNewtonObjT0(BO_tNewtonObj *o0,BO_tNewtonObj *o1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  coorddef cStack56;
  coorddef cStack40;
  
  (o0->collision).impulse = 0;
  (o1->collision).impulse = 0;
  iVar2 = Collide_TestObjectVertices__FP13BO_tNewtonObjT0P8coorddefT2(o0,o1,&cStack56,&cStack40);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    Collide_DoObjectObjectCollision__FP13BO_tNewtonObjT0P8coorddefT2(o0,o1,&cStack56,&cStack40);
    iVar4 = 8;
    Physics_TestForBarrierCollision__FP8Car_tObj((Car_tObj *)o0);
    Physics_TestForBarrierCollision__FP8Car_tObj((Car_tObj *)o1);
    while( true ) {
      iVar3 = Collide_TestObjectVertices__FP13BO_tNewtonObjT0P8coorddefT2(o0,o1,&cStack56,&cStack40)
      ;
      iVar2 = 1;
      if ((iVar3 == 0) || (bVar1 = iVar4 < 1, iVar4 = iVar4 + -1, bVar1)) break;
      iVar2 = Collide_DoObjectObjectCollision__FP13BO_tNewtonObjT0P8coorddefT2
                        (o0,o1,&cStack56,&cStack40);
      if (iVar2 == 0) {
        return 1;
      }
      Physics_TestForBarrierCollision__FP8Car_tObj((Car_tObj *)o0);
      Physics_TestForBarrierCollision__FP8Car_tObj((Car_tObj *)o1);
      if (iVar4 == 0) {
        if ((o0[1].collision.lastCollision != 0) && (0xf0000 < o0->speedXZ)) {
          Newton_AddDamageZone__FP13BO_tNewtonObjiii(o0,(int)&DAT_00640000,8,2);
        }
        if ((o1[1].collision.lastCollision != 0) && (0xf0000 < o1->speedXZ)) {
          Newton_AddDamageZone__FP13BO_tNewtonObjiii(o1,(int)&DAT_00640000,8,2);
        }
      }
    }
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Collide_ClearCollisionRegistry__Fv()
 // line 1424, offset 0x800914d4
	/* begin block 1 */
		// Start line: 1425
		// Start offset: 0x800914D4
		// Variables:
	// 		int carLoop; // $v1
	// 		struct coorddef relVec; // stack offset -64
	// 		struct coorddef rightVec; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1425
			// Start offset: 0x800914D4
			// Variables:
		// 		int i; // $s3

			/* begin block 1.1.1 */
				// Start line: 1434
				// Start offset: 0x8009151C

				/* begin block 1.1.1.1 */
					// Start line: 1439
					// Start offset: 0x80091530
					// Variables:
				// 		int slice; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x80091664
				// End Line: 1457
			/* end block 1.1.1 */
			// End offset: 0x80091664
			// End Line: 1457
		/* end block 1.1 */
		// End offset: 0x80091690
		// End Line: 1459

		/* begin block 1.2 */
			// Start line: 1461
			// Start offset: 0x80091690

			/* begin block 1.2.1 */
				// Start line: 1461
				// Start offset: 0x8009169C
			/* end block 1.2.1 */
			// End offset: 0x800916AC
			// End Line: 1467
		/* end block 1.2 */
		// End offset: 0x800916AC
		// End Line: 1471
	/* end block 1 */
	// End offset: 0x800916AC
	// End Line: 1471

	/* begin block 2 */
		// Start line: 3253
	/* end block 2 */
	// End Line: 3254

	/* begin block 3 */
		// Start line: 3262
	/* end block 3 */
	// End Line: 3263

	/* begin block 4 */
		// Start line: 3262
	/* end block 4 */
	// End Line: 3263

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Collide_ClearCollisionRegistry__Fv(void)

{
  bool bVar1;
  int iVar2;
  Trk_NewSlice *pTVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  coorddef *cpoint;
  int objIndex;
  BO_tNewtonObj **ppBVar10;
  BWorldSm_Pos *slicePos;
  
  objIndex = 0;
  cpoint = &InfiniteMassNewton[0].position;
  slicePos = &InfiniteMassNewton[0].simRoadInfo;
  ppBVar10 = &Collide_gRegistry16;
  Collide_gNumRegistered = 0;
  iVar4 = 0;
  while (iVar2 = Object_GetNumIMassObjects__Fv(), objIndex < iVar2) {
    Object_GetIMassObjectMotion__FiP8coorddefP10matrixtdefT1
              (objIndex,cpoint,(matrixtdef *)((int)InfiniteMassNewton[0].orientMat.m + iVar4),
               (coorddef *)((int)&InfiniteMassNewton[0].linearVel.x + iVar4));
    *(undefined4 *)((int)&InfiniteMassNewton[0].angularVel.x + iVar4) = 0;
    *(undefined4 *)((int)&InfiniteMassNewton[0].angularVel.y + iVar4) = 0;
    *(undefined4 *)((int)&InfiniteMassNewton[0].angularVel.z + iVar4) = 0;
    *ppBVar10 = (BO_tNewtonObj *)((int)&InfiniteMassNewton[0].objID + iVar4);
    Collide_gNumRegistered = Collide_gNumRegistered + 1;
    BWorldSm_FindClosestSlice__FP8coorddefP12BWorldSm_Pos(cpoint,slicePos);
    pTVar3 = BWorldSm_slices +
             (int)*(short *)((int)&InfiniteMassNewton[0].simRoadInfo.slice + iVar4);
    iVar5 = *(int *)((int)&InfiniteMassNewton[0].position.x + iVar4) - pTVar3->center[0];
    iVar7 = *(int *)((int)&InfiniteMassNewton[0].position.y + iVar4) - pTVar3->center[0];
    iVar9 = *(int *)((int)&InfiniteMassNewton[0].position.z + iVar4) - pTVar3->center[0];
    iVar2 = (int)pTVar3->right[0] * 0x200;
    iVar6 = (int)pTVar3->right[1] * 0x200;
    iVar8 = (int)pTVar3->right[2] * 0x200;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    slicePos = (BWorldSm_Pos *)&slicePos[4].quadPts[3].y;
    ppBVar10 = ppBVar10 + 1;
    cpoint = cpoint + 0x30;
    objIndex = objIndex + 1;
    *(int *)((int)&InfiniteMassNewton[0].xRelRoadCenter + iVar4) =
         (iVar5 >> 8) * (iVar2 >> 8) + (iVar7 >> 8) * (iVar6 >> 8) + (iVar9 >> 8) * (iVar8 >> 8);
    iVar4 = iVar4 + 0x240;
  }
  iVar4 = 0;
  do {
    bVar1 = iVar4 < Cars_gNumCars;
    iVar4 = iVar4 + 1;
  } while (bVar1);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Collide_CheckAccuratePointRadiusCollision__FP13BO_tNewtonObjP8coorddefi(struct BO_tNewtonObj *newObj /*$s2*/, struct coorddef *point /*$a1*/, int radius /*$s3*/)
 // line 1478, offset 0x800916d4
	/* begin block 1 */
		// Start line: 1479
		// Start offset: 0x800916D4
		// Variables:
	// 		struct coorddef d; // stack offset -40
	// 		int temp; // $s0
	/* end block 1 */
	// End offset: 0x800918B0
	// End Line: 1498

	/* begin block 2 */
		// Start line: 3429
	/* end block 2 */
	// End Line: 3430

	/* begin block 3 */
		// Start line: 3437
	/* end block 3 */
	// End Line: 3438

	/* begin block 4 */
		// Start line: 3437
	/* end block 4 */
	// End Line: 3438

int Collide_CheckAccuratePointRadiusCollision__FP13BO_tNewtonObjP8coorddefi
              (BO_tNewtonObj *newObj,coorddef *point,int radius)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = point->x - (newObj->position).x;
  iVar1 = point->z - (newObj->position).z;
  uVar2 = fixedmult(iVar5,(newObj->orientMat).m[0]);
  uVar3 = fixedmult(0,(newObj->orientMat).m[1]);
  uVar4 = fixedmult(iVar1,(newObj->orientMat).m[2]);
  if ((int)(uVar2 + uVar3 + uVar4) < 1) {
    uVar2 = fixedmult(iVar5,(newObj->orientMat).m[0]);
    uVar3 = fixedmult(0,(newObj->orientMat).m[1]);
    uVar4 = fixedmult(iVar1,(newObj->orientMat).m[2]);
    iVar6 = -(uVar2 + uVar3 + uVar4);
  }
  else {
    uVar2 = fixedmult(iVar5,(newObj->orientMat).m[0]);
    uVar3 = fixedmult(0,(newObj->orientMat).m[1]);
    uVar4 = fixedmult(iVar1,(newObj->orientMat).m[2]);
    iVar6 = uVar2 + uVar3 + uVar4;
  }
  uVar2 = 0;
  if (iVar6 <= (newObj->dimension).x + radius) {
    uVar2 = fixedmult(iVar5,(newObj->orientMat).m[6]);
    uVar3 = fixedmult(0,(newObj->orientMat).m[7]);
    uVar4 = fixedmult(iVar1,(newObj->orientMat).m[8]);
    if ((int)(uVar2 + uVar3 + uVar4) < 1) {
      uVar2 = fixedmult(iVar5,(newObj->orientMat).m[6]);
      uVar3 = fixedmult(0,(newObj->orientMat).m[7]);
      uVar4 = fixedmult(iVar1,(newObj->orientMat).m[8]);
      iVar1 = -(uVar2 + uVar3 + uVar4);
    }
    else {
      uVar2 = fixedmult(iVar5,(newObj->orientMat).m[6]);
      uVar3 = fixedmult(0,(newObj->orientMat).m[7]);
      uVar4 = fixedmult(iVar1,(newObj->orientMat).m[8]);
      iVar1 = uVar2 + uVar3 + uVar4;
    }
    uVar2 = (uint)((newObj->dimension).z + radius < iVar1) ^ 1;
  }
  return uVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Collide_CheckMeForCollisions__FP13BO_tNewtonObj(struct BO_tNewtonObj *newObj /*$s2*/)
 // line 1501, offset 0x800918cc
	/* begin block 1 */
		// Start line: 1502
		// Start offset: 0x800918CC
		// Variables:
	// 		int i; // $s1
	// 		struct BO_tNewtonObj *otherObj; // $s0

		/* begin block 1.1 */
			// Start line: 1537
			// Start offset: 0x8009193C

			/* begin block 1.1.1 */
				// Start line: 1538
				// Start offset: 0x8009194C

				/* begin block 1.1.1.1 */
					// Start line: 1540
					// Start offset: 0x8009194C

					/* begin block 1.1.1.1.1 */
						// Start line: 1541
						// Start offset: 0x80091960
						// Variables:
					// 		int i; // $s5
					// 		int numObjs; // stack offset -56
					// 		int fixedRadius; // stack offset -52
					// 		struct Object_tSimObjList objList; // stack offset -160
					// 		struct coorddef pos; // stack offset -144
					// 		int dist; // $a1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1552
							// Start offset: 0x80091960

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1553
								// Start offset: 0x80091960

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1555
									// Start offset: 0x80091978
									// Variables:
								// 		struct coorddef pointList[3]; // stack offset -128
								// 		int closestDist; // $s4
								// 		int closestPoint; // $s3
								// 		int numPoints; // stack offset -48

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1555
										// Start offset: 0x8009198C
										// Variables:
									// 		int j; // $s0
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80091A1C
									// End Line: 1578

									/* begin block 1.1.1.1.1.1.1.1.2 */
										// Start line: 1580
										// Start offset: 0x80091A1C

										/* begin block 1.1.1.1.1.1.1.1.2.1 */
											// Start line: 1581
											// Start offset: 0x80091A24

											/* begin block 1.1.1.1.1.1.1.1.2.1.1 */
												// Start line: 1582
												// Start offset: 0x80091A24

												/* begin block 1.1.1.1.1.1.1.1.2.1.1.1 */
													// Start line: 1583
													// Start offset: 0x80091A44
													// Variables:
												// 		int signCase; // $s1

													/* begin block 1.1.1.1.1.1.1.1.2.1.1.1.1 */
														// Start line: 1584
														// Start offset: 0x80091A44

														/* begin block 1.1.1.1.1.1.1.1.2.1.1.1.1.1 */
															// Start line: 1587
															// Start offset: 0x80091A5C

															/* begin block 1.1.1.1.1.1.1.1.2.1.1.1.1.1.1 */
																// Start line: 1588
																// Start offset: 0x80091A5C

																/* begin block 1.1.1.1.1.1.1.1.2.1.1.1.1.1.1.1 */
																	// Start line: 1588
																	// Start offset: 0x80091A5C

																	/* begin block 1.1.1.1.1.1.1.1.2.1.1.1.1.1.1.1.1 */
																		// Start line: 1592
																		// Start offset: 0x80091A74
																		// Variables:
																	// 		struct coorddef normal; // stack offset -88
																	// 		struct coorddef samplePoint; // stack offset -72
																	// 		int impulse; // $s0
																	/* end block 1.1.1.1.1.1.1.1.2.1.1.1.1.1.1.1.1 */
																	// End offset: 0x80091BE0
																	// End Line: 1618
																/* end block 1.1.1.1.1.1.1.1.2.1.1.1.1.1.1.1 */
																// End offset: 0x80091C7C
																// End Line: 1647
															/* end block 1.1.1.1.1.1.1.1.2.1.1.1.1.1.1 */
															// End offset: 0x80091C7C
															// End Line: 1647
														/* end block 1.1.1.1.1.1.1.1.2.1.1.1.1.1 */
														// End offset: 0x80091C7C
														// End Line: 1647
													/* end block 1.1.1.1.1.1.1.1.2.1.1.1.1 */
													// End offset: 0x80091C7C
													// End Line: 1647
												/* end block 1.1.1.1.1.1.1.1.2.1.1.1 */
												// End offset: 0x80091C7C
												// End Line: 1647
											/* end block 1.1.1.1.1.1.1.1.2.1.1 */
											// End offset: 0x80091C7C
											// End Line: 1647
										/* end block 1.1.1.1.1.1.1.1.2.1 */
										// End offset: 0x80091C7C
										// End Line: 1647
									/* end block 1.1.1.1.1.1.1.1.2 */
									// End offset: 0x80091C7C
									// End Line: 1647
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80091C7C
								// End Line: 1647
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80091C84
							// End Line: 1655
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80091C84
						// End Line: 1655
					/* end block 1.1.1.1.1 */
					// End offset: 0x80091C84
					// End Line: 1655
				/* end block 1.1.1.1 */
				// End offset: 0x80091C84
				// End Line: 1655
			/* end block 1.1.1 */
			// End offset: 0x80091C84
			// End Line: 1655
		/* end block 1.1 */
		// End offset: 0x80091C84
		// End Line: 1655
	/* end block 1 */
	// End offset: 0x80091E94
	// End Line: 1723

	/* begin block 2 */
		// Start line: 3491
	/* end block 2 */
	// End Line: 3492

	/* begin block 3 */
		// Start line: 3495
	/* end block 3 */
	// End Line: 3496

	/* begin block 4 */
		// Start line: 3495
	/* end block 4 */
	// End Line: 3496

void Collide_CheckMeForCollisions__FP13BO_tNewtonObj(BO_tNewtonObj *newObj)

{
  bool bVar1;
  int objIndex;
  undefined **ppuVar2;
  uint uVar3;
  undefined **ppuVar4;
  int iVar5;
  int iVar6;
  BO_tNewtonObj *o1;
  coorddef *a;
  int iVar7;
  BO_tNewtonObj **ppBVar8;
  int iVar9;
  int iVar10;
  coorddef normal;
  coorddef local_90;
  coorddef acStack128 [3];
  coorddef local_58;
  coorddef local_48;
  int local_38;
  int local_34;
  int local_30 [2];
  
  if (newObj->active != '\0') {
    if (newObj->simOptz == '\0') {
      objIndex = (newObj->collision).disableCollisionTimer;
      if (0 < objIndex) {
        (newObj->collision).disableCollisionTimer = objIndex + -1;
      }
      if (((newObj->collision).disableCollisionTimer == 0) &&
         ((newObj->groundSurfaceType & 0x40U) != 0)) {
        Object_InitCollisionCheckLoop__FP12BWorldSm_PosP18Object_tSimObjListPi
                  (&newObj->simRoadInfo,(Object_tSimObjList *)&stack0xffffff60,&local_38);
        objIndex = 0;
        while (ppuVar4 = &PTR_000a0000, objIndex < local_38) {
          iVar7 = -1;
          local_30[0] = 1;
          Object_GetRadiusCollisionData__FP18Object_tSimObjListiP8coorddefPi
                    ((Object_tSimObjList *)&stack0xffffff60,objIndex,&local_90,&local_34);
          Object_GetPointsCollisionData__FP18Object_tSimObjListiPiP8coorddef
                    ((Object_tSimObjList *)&stack0xffffff60,objIndex,local_30,acStack128);
          iVar5 = 0;
          a = acStack128;
          if (0 < local_30[0]) {
            do {
              ppuVar2 = (undefined **)Math_DistXZ__FP8coorddefT0(a,&newObj->position);
              if (((int)ppuVar2 < local_34 + newObj->dimensionRadius) &&
                 ((int)ppuVar2 < (int)ppuVar4)) {
                iVar7 = iVar5;
                ppuVar4 = ppuVar2;
              }
              iVar5 = iVar5 + 1;
              a = a + 1;
            } while (iVar5 < local_30[0]);
          }
          if (iVar7 < 0) {
LAB_80091c7c:
            objIndex = objIndex + 1;
          }
          else {
            iVar7 = Collide_CheckAccuratePointRadiusCollision__FP13BO_tNewtonObjP8coorddefi
                              (newObj,acStack128 + iVar7,local_34);
            if (iVar7 == 0) goto LAB_80091c7c;
            iVar7 = Object_CheckCollisionResults__FP18Object_tSimObjListiP13BO_tNewtonObj
                              ((Object_tSimObjList *)&stack0xffffff60,objIndex,newObj);
            if (iVar7 == 0) goto LAB_80091c7c;
            Object_GetRadiusCollisionData__FP18Object_tSimObjListiP8coorddefPi
                      ((Object_tSimObjList *)&stack0xffffff60,objIndex,&local_90,&local_34);
            if (iVar7 != 1) {
              if (iVar7 == 2) {
                if (0x20000 < newObj->speedXZ) {
                  ppuVar4 = &PTR_00060006;
LAB_80091c3c:
                  (newObj->collision).impulse = 0xf0000;
                  *(undefined ***)&(newObj->collision).sfxType = ppuVar4;
                  (newObj->collision).otherObj = (BO_tNewtonObj *)0x0;
                  iVar7 = (newObj->position).y;
                  iVar5 = (newObj->position).z;
                  (newObj->collision).collisionPoint.x = (newObj->position).x;
                  (newObj->collision).collisionPoint.y = iVar7;
                  (newObj->collision).collisionPoint.z = iVar5;
                  iVar7 = Force_IsForceOn__FP8Car_tObj((Car_tObj *)newObj);
                  if (iVar7 != 0) {
                    Force_HitSign__FP8Car_tObj((Car_tObj *)newObj);
                  }
                }
              }
              else {
                if (iVar7 == -1) {
                  ppuVar4 = (undefined **)&DAT_00060005;
                  goto LAB_80091c3c;
                }
              }
              goto LAB_80091c7c;
            }
            local_58.y = 0;
            local_58.x = (newObj->position).x - local_90.x;
            local_58.z = (newObj->position).z - local_90.z;
            Math_NormalizeShortVector__FP8coorddef(&local_58);
            iVar6 = 0;
            iVar5 = local_34;
            if (local_34 < 0) {
              iVar5 = local_34 + 0xff;
            }
            iVar5 = iVar5 >> 8;
            iVar9 = iVar5 * local_58.x;
            if (iVar9 < 0) {
              iVar9 = iVar9 + 0xff;
            }
            iVar10 = iVar5 * local_58.y;
            if (iVar10 < 0) {
              iVar10 = iVar10 + 0xff;
            }
            iVar5 = iVar5 * local_58.z;
            if (iVar5 < 0) {
              iVar5 = iVar5 + 0xff;
            }
            local_48.x = (iVar9 >> 8) + local_90.x;
            local_48.z = (iVar5 >> 8) + local_90.z;
            local_48.y = (iVar10 >> 8) + local_90.y;
            iVar5 = newObj->speedXZ;
            if (iVar5 < 0x280001) {
              if ((0x190000 < iVar5) && (iVar6 = iVar5, iVar7 = frictionLess, iVar5 < 0x1e0000)) {
                iVar6 = 0x1e0000;
                iVar7 = frictionLess;
              }
            }
            else {
              iVar6 = iVar5 << 1;
              iVar7 = frictionLess;
              if (0x960000 < iVar5 << 1) {
                iVar6 = 0x960000;
                iVar7 = frictionLess;
              }
            }
            frictionLess = iVar7;
            Collide_TestWithPlane__FP13BO_tNewtonObjP8coorddefT1(newObj,&local_58,&local_48);
            frictionLess = 0;
            Newton_DoPostBarrierCollisionHandling__FP13BO_tNewtonObjG8coorddef(newObj,normal);
            (newObj->collision).impulse = iVar6;
            (newObj->collision).collided = 1;
            (newObj->collision).otherObj = (BO_tNewtonObj *)0x0;
            if (iVar6 == 0) goto LAB_80091c7c;
            (newObj->collision).sfxType = 0x50001;
            iVar7 = (newObj->position).y;
            iVar5 = (newObj->position).z;
            (newObj->collision).collisionPoint.x = (newObj->position).x;
            (newObj->collision).collisionPoint.y = iVar7;
            (newObj->collision).collisionPoint.z = iVar5;
            objIndex = objIndex + 1;
          }
        }
      }
      if ((newObj->groundSurfaceType & 0x80U) != 0) {
        Newton_TestForUndrivableSurfaces__FP13BO_tNewtonObj(newObj);
      }
      if (newObj->flightTime != 0) {
        Physics_TestForBarrierCollision__FP8Car_tObj((Car_tObj *)newObj);
      }
      objIndex = 0;
      if ((newObj->collision).disableCollisionTimer == 0) {
        ppBVar8 = &Collide_gRegistry16;
        bVar1 = 0 < Collide_gNumRegistered;
        (&Collide_gRegistry16)[Collide_gNumRegistered] = newObj;
        if (bVar1) {
          do {
            o1 = *ppBVar8;
            iVar6 = (newObj->position).z;
            iVar5 = (o1->position).z;
            iVar7 = iVar6 - iVar5;
            if (iVar7 < 1) {
              iVar7 = iVar5 - iVar6;
            }
            if (iVar7 < newObj->dimensionRadius + o1->dimensionRadius) {
              iVar6 = (newObj->position).x;
              iVar5 = (o1->position).x;
              iVar7 = iVar6 - iVar5;
              if (iVar7 < 1) {
                iVar7 = iVar5 - iVar6;
              }
              if (iVar7 < newObj->dimensionRadius + o1->dimensionRadius) {
                iVar6 = (newObj->position).y;
                iVar5 = (o1->position).y;
                iVar7 = iVar6 - iVar5;
                if (iVar7 < 1) {
                  iVar7 = iVar5 - iVar6;
                }
                if (iVar7 < newObj->dimensionRadius + o1->dimensionRadius) {
                  uVar3 = fixedmult((int)&PTR_0006487e,(newObj->angularVel).x);
                  (newObj->angularVel).x = uVar3;
                  uVar3 = fixedmult((int)&PTR_0006487e,(newObj->angularVel).y);
                  (newObj->angularVel).y = uVar3;
                  uVar3 = fixedmult((int)&PTR_0006487e,(newObj->angularVel).z);
                  (newObj->angularVel).z = uVar3;
                  uVar3 = fixedmult((int)&PTR_0006487e,(o1->angularVel).x);
                  (o1->angularVel).x = uVar3;
                  uVar3 = fixedmult((int)&PTR_0006487e,(o1->angularVel).y);
                  (o1->angularVel).y = uVar3;
                  uVar3 = fixedmult((int)&PTR_0006487e,(o1->angularVel).z);
                  (o1->angularVel).z = uVar3;
                  Collide_CheckForCollisionBetween__FP13BO_tNewtonObjT0(newObj,o1);
                  uVar3 = fixedmult((int)&DAT_000028be,(newObj->angularVel).x);
                  (newObj->angularVel).x = uVar3;
                  uVar3 = fixedmult((int)&DAT_000028be,(newObj->angularVel).y);
                  (newObj->angularVel).y = uVar3;
                  uVar3 = fixedmult((int)&DAT_000028be,(newObj->angularVel).z);
                  (newObj->angularVel).z = uVar3;
                  uVar3 = fixedmult((int)&DAT_000028be,(o1->angularVel).x);
                  (o1->angularVel).x = uVar3;
                  uVar3 = fixedmult((int)&DAT_000028be,(o1->angularVel).y);
                  (o1->angularVel).y = uVar3;
                  uVar3 = fixedmult((int)&DAT_000028be,(o1->angularVel).z);
                  (o1->angularVel).z = uVar3;
                  Collide_LimitAngularVel__FP13BO_tNewtonObj(newObj);
                  Collide_LimitAngularVel__FP13BO_tNewtonObj(o1);
                }
              }
            }
            objIndex = objIndex + 1;
            ppBVar8 = ppBVar8 + 1;
          } while (objIndex < Collide_gNumRegistered);
        }
        Collide_gNumRegistered = Collide_gNumRegistered + 1;
      }
    }
    else {
      Physics_TestForBarrierCollision__FP8Car_tObj((Car_tObj *)newObj);
    }
  }
  return;
}





