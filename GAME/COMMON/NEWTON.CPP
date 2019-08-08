#include "NFS4.H"
#include "NEWTON.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Newton_AddDamageZone__FP13BO_tNewtonObjiii(struct BO_tNewtonObj *newtonObj /*$s2*/, int impulse /*$s0*/, int zone /*$s7*/, int type /*$s1*/)
 // line 50, offset 0x8009ef2c
	/* begin block 1 */
		// Start line: 51
		// Start offset: 0x8009EF2C

		/* begin block 1.1 */
			// Start line: 62
			// Start offset: 0x8009EF7C

			/* begin block 1.1.1 */
				// Start line: 63
				// Start offset: 0x8009EF90
				// Variables:
			// 		int imp; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 69
					// Start offset: 0x8009EFEC

					/* begin block 1.1.1.1.1 */
						// Start line: 72
						// Start offset: 0x8009EFF4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 74
							// Start offset: 0x8009EFF4

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 75
								// Start offset: 0x8009EFFC
								// Variables:
							// 		int temp; // $v0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x8009F038
							// End Line: 80

							/* begin block 1.1.1.1.1.1.2 */
								// Start line: 82
								// Start offset: 0x8009F040

								/* begin block 1.1.1.1.1.1.2.1 */
									// Start line: 82
									// Start offset: 0x8009F040

									/* begin block 1.1.1.1.1.1.2.1.1 */
										// Start line: 83
										// Start offset: 0x8009F048
										// Variables:
									// 		int temp; // $v0
									/* end block 1.1.1.1.1.1.2.1.1 */
									// End offset: 0x8009F0AC
									// End Line: 88

									/* begin block 1.1.1.1.1.1.2.1.2 */
										// Start line: 90
										// Start offset: 0x8009F0B4

										/* begin block 1.1.1.1.1.1.2.1.2.1 */
											// Start line: 90
											// Start offset: 0x8009F0B4

											/* begin block 1.1.1.1.1.1.2.1.2.1.1 */
												// Start line: 91
												// Start offset: 0x8009F0BC
												// Variables:
											// 		int temp; // $v0
											/* end block 1.1.1.1.1.1.2.1.2.1.1 */
											// End offset: 0x8009F120
											// End Line: 96

											/* begin block 1.1.1.1.1.1.2.1.2.1.2 */
												// Start line: 98
												// Start offset: 0x8009F128

												/* begin block 1.1.1.1.1.1.2.1.2.1.2.1 */
													// Start line: 98
													// Start offset: 0x8009F128

													/* begin block 1.1.1.1.1.1.2.1.2.1.2.1.1 */
														// Start line: 99
														// Start offset: 0x8009F130
														// Variables:
													// 		int temp; // $v0
													/* end block 1.1.1.1.1.1.2.1.2.1.2.1.1 */
													// End offset: 0x8009F194
													// End Line: 104

													/* begin block 1.1.1.1.1.1.2.1.2.1.2.1.2 */
														// Start line: 107
														// Start offset: 0x8009F19C
														// Variables:
													// 		int temp; // $v1
													/* end block 1.1.1.1.1.1.2.1.2.1.2.1.2 */
													// End offset: 0x8009F22C
													// End Line: 112
												/* end block 1.1.1.1.1.1.2.1.2.1.2.1 */
												// End offset: 0x8009F22C
												// End Line: 112
											/* end block 1.1.1.1.1.1.2.1.2.1.2 */
											// End offset: 0x8009F22C
											// End Line: 112
										/* end block 1.1.1.1.1.1.2.1.2.1 */
										// End offset: 0x8009F22C
										// End Line: 112
									/* end block 1.1.1.1.1.1.2.1.2 */
									// End offset: 0x8009F22C
									// End Line: 112
								/* end block 1.1.1.1.1.1.2.1 */
								// End offset: 0x8009F22C
								// End Line: 112
							/* end block 1.1.1.1.1.1.2 */
							// End offset: 0x8009F22C
							// End Line: 112
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8009F22C
						// End Line: 112
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009F22C
					// End Line: 112
				/* end block 1.1.1.1 */
				// End offset: 0x8009F22C
				// End Line: 112
			/* end block 1.1.1 */
			// End offset: 0x8009F22C
			// End Line: 112
		/* end block 1.1 */
		// End offset: 0x8009F22C
		// End Line: 112

		/* begin block 1.2 */
			// Start line: 118
			// Start offset: 0x8009F22C

			/* begin block 1.2.1 */
				// Start line: 119
				// Start offset: 0x8009F234
				// Variables:
			// 		struct matrixtdef transposeMat; // stack offset -80
			// 		int intensity; // $s3
			// 		int xMult; // $s6
			// 		int yMult; // $s5
			// 		int zMult; // $s4
			/* end block 1.2.1 */
			// End offset: 0x8009F6D8
			// End Line: 217
		/* end block 1.2 */
		// End offset: 0x8009F6D8
		// End Line: 217
	/* end block 1 */
	// End offset: 0x8009F6D8
	// End Line: 217

void Newton_AddDamageZone__FP13BO_tNewtonObjiii( (BO_tNewtonObj *newtonObj,int impulse,int zone,int type)
{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar1 = Force_IsForceOn__FP8Car_tObj((Car_tObj *)newtonObj);
  if (iVar1 != 0) {
    Force_HitWall__Fi((newtonObj->collision).impulse);
  }
  if (false) {
    uVar7 = (int)(impulse + ((uint)impulse >> 0x1f)) >> 1;
    uVar5 = 0x640000;
    if ((int)uVar7 < 0x640001) {
      uVar5 = uVar7;
    }
    if ((newtonObj[1].simRoadInfo.quadPts[1].y & 0x200U) != 0) {
      uVar5 = (int)(uVar5 + (uVar5 >> 0x1f)) >> 1;
    }
    piVar10 = &newtonObj->objID + zone;
    if ((int)uVar5 < piVar10[0x86]) {
      uVar5 = piVar10[0x86];
    }
    piVar10[0x86] = uVar5;
    if (zone < 8) {
      if (zone == 0) {
        uVar5 = newtonObj->damage[0] + newtonObj->damage[2];
        iVar1 = (int)(uVar5 + (uVar5 >> 0x1f)) >> 1;
        if (iVar1 < newtonObj->damage[1]) {
          iVar1 = newtonObj->damage[1];
        }
        iVar2 = newtonObj->damage[0];
        iVar6 = newtonObj->damage[6];
        newtonObj->damage[1] = iVar1;
      }
      else {
        if (zone == 1) {
          uVar5 = newtonObj->damage[7] + newtonObj->damage[1];
          iVar1 = (int)(uVar5 + (uVar5 >> 0x1f)) >> 1;
          if (iVar1 < newtonObj->damage[0]) {
            iVar1 = newtonObj->damage[0];
          }
          iVar2 = newtonObj->damage[1];
          iVar6 = newtonObj->damage[3];
          newtonObj->damage[0] = iVar1;
          uVar5 = iVar2 + iVar6;
          iVar1 = (int)(uVar5 + (uVar5 >> 0x1f)) >> 1;
          if (iVar1 < newtonObj->damage[2]) {
            iVar1 = newtonObj->damage[2];
          }
          newtonObj->damage[2] = iVar1;
          goto LAB_8009f22c;
        }
        if (zone != 6) {
          if (zone == 7) {
            uVar5 = newtonObj->damage[7] + newtonObj->damage[1];
            iVar1 = (int)(uVar5 + (uVar5 >> 0x1f)) >> 1;
            if (iVar1 < newtonObj->damage[0]) {
              iVar1 = newtonObj->damage[0];
            }
            iVar2 = newtonObj->damage[5];
            iVar6 = newtonObj->damage[7];
            newtonObj->damage[0] = iVar1;
            uVar5 = iVar2 + iVar6;
            iVar1 = (int)(uVar5 + (uVar5 >> 0x1f)) >> 1;
            if (iVar1 < newtonObj->damage[6]) {
              iVar1 = newtonObj->damage[6];
            }
            newtonObj->damage[6] = iVar1;
          }
          else {
            uVar5 = uVar5 + newtonObj->damage[zone + 2];
            iVar1 = (int)(uVar5 + (uVar5 >> 0x1f)) >> 1;
            iVar2 = (&newtonObj->objID + zone + 1)[0x86];
            if (iVar1 < iVar2) {
              iVar1 = iVar2;
            }
            (&newtonObj->objID + zone + 1)[0x86] = iVar1;
            uVar5 = piVar10[0x86] + newtonObj->damage[zone + -2];
            iVar2 = (&newtonObj->objID + zone + -1)[0x86];
            iVar1 = (int)(uVar5 + (uVar5 >> 0x1f)) >> 1;
            if (iVar1 < iVar2) {
              iVar1 = iVar2;
            }
            (&newtonObj->objID + zone + -1)[0x86] = iVar1;
          }
          goto LAB_8009f22c;
        }
        uVar5 = newtonObj->damage[4] + newtonObj->damage[6];
        iVar1 = (int)(uVar5 + (uVar5 >> 0x1f)) >> 1;
        if (iVar1 < newtonObj->damage[5]) {
          iVar1 = newtonObj->damage[5];
        }
        iVar2 = newtonObj->damage[0];
        iVar6 = newtonObj->damage[6];
        newtonObj->damage[5] = iVar1;
      }
      iVar1 = (int)(iVar2 + iVar6 + ((uint)(iVar2 + iVar6) >> 0x1f)) >> 1;
      if (iVar1 < newtonObj->damage[7]) {
        iVar1 = newtonObj->damage[7];
      }
      newtonObj->damage[7] = iVar1;
    }
  }
LAB_8009f22c:
  uVar5 = 0x20000;
  if (type != 0) {
    uVar7 = 0;
    uVar11 = 0x20000;
    if (impulse < 0x5a0001) {
      iVar1 = impulse >> 6;
      if (impulse < 0) {
        iVar1 = impulse + 0x3f >> 6;
      }
      if (0x8000 < iVar1) {
        iVar1 = 0x8000;
      }
    }
    else {
      if (impulse < 0) {
        impulse = impulse + 3;
      }
      iVar2 = impulse >> 2;
      iVar1 = newtonObj->objAltitude;
      newtonObj->flightTime = 1;
      (newtonObj->collision).lastCollision = 0;
      *(undefined4 *)&newtonObj[3].eIndexShadow = 1;
      if (iVar1 < 0x20000) {
        (newtonObj->position).y = (newtonObj->position).y + 0x10000;
      }
      iVar6 = (newtonObj->linearVel).y + ((iVar2 / 3 + (iVar2 >> 0x1f)) - (impulse >> 0x1f));
      iVar1 = 0xc0000;
      if (iVar6 < 0xc0001) {
        iVar1 = iVar6;
      }
      (newtonObj->linearVel).y = iVar1;
      iVar1 = iVar2;
      if (iVar2 < 0) {
        iVar1 = iVar2 + 0x1f;
      }
      iVar1 = iVar1 >> 5;
      if (0x9999 < iVar1) {
        iVar1 = 0x9999;
      }
      uVar3 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(&newtonObj->simRoadInfo);
      if ((uVar3 != 0) && (0x90000 < (newtonObj->linearVel).y)) {
        (newtonObj->linearVel).y = 0x90000;
      }
      if (0x140000 < iVar2) {
        randtemp = fastRandom & 0xffff;
        uVar3 = (fastRandom & 0xffff00) >> 8;
        uVar7 = (randtemp >> 8) * 3;
        uVar11 = (randtemp >> 8) * 3;
        uVar5 = uVar3 * 4;
        if (randtemp >> 8 < 0x3333) {
          iVar1 = -iVar1;
        }
        fastRandom = randtemp;
        if (uVar5 + uVar7 + uVar11 < 0x40000) {
          if (uVar5 < 0x10000) {
            uVar5 = uVar3 << 3;
          }
          if (uVar7 < 0x10000) {
            uVar7 = (randtemp >> 8) * 6;
          }
          fastRandom = randtemp;
          if (uVar11 < 0x10000) {
            uVar11 = (randtemp >> 8) * 6;
            fastRandom = randtemp;
          }
        }
      }
      if (type == 2) {
        uVar5 = uVar5 << 1;
        uVar7 = uVar7 << 1;
        uVar11 = uVar11 << 1;
      }
    }
    iVar2 = fixedmult((newtonObj->angularVel).x,(newtonObj->orientMat).m[0]);
    iVar6 = fixedmult((newtonObj->angularVel).y,(newtonObj->orientMat).m[1]);
    iVar4 = fixedmult((newtonObj->angularVel).z,(newtonObj->orientMat).m[2]);
    iVar8 = (newtonObj->angularVel).x;
    iVar9 = (newtonObj->orientMat).m[3];
    newtonObj[1].shadowMat.m[8] = iVar2 + iVar6 + iVar4;
    iVar2 = fixedmult(iVar8,iVar9);
    iVar6 = fixedmult((newtonObj->angularVel).y,(newtonObj->orientMat).m[4]);
    iVar4 = fixedmult((newtonObj->angularVel).z,(newtonObj->orientMat).m[5]);
    iVar8 = (newtonObj->angularVel).x;
    iVar9 = (newtonObj->orientMat).m[6];
    newtonObj[1].shadowCoord[0].x = iVar2 + iVar6 + iVar4;
    iVar2 = fixedmult(iVar8,iVar9);
    iVar6 = fixedmult((newtonObj->angularVel).y,(newtonObj->orientMat).m[7]);
    iVar4 = fixedmult((newtonObj->angularVel).z,(newtonObj->orientMat).m[8]);
    newtonObj[1].shadowCoord[0].y = iVar2 + iVar6 + iVar4;
    if ((uint)zone < 3) {
      uVar5 = fixedmult(iVar1,uVar5);
      iVar2 = newtonObj[1].shadowMat.m[8] - ((int)((uVar5 >> 0x1f) + uVar5) >> 1);
    }
    else {
      uVar5 = fixedmult(iVar1,uVar5);
      iVar2 = newtonObj[1].shadowMat.m[8] + ((int)((uVar5 >> 0x1f) + uVar5) >> 1);
    }
    newtonObj[1].shadowMat.m[8] = iVar2;
    if (zone - 2U < 3) {
      uVar5 = fixedmult(iVar1,uVar7);
      newtonObj[1].shadowCoord[0].x =
           newtonObj[1].shadowCoord[0].x + ((int)((uVar5 >> 0x1f) + uVar5) >> 1);
      uVar5 = fixedmult(iVar1,uVar11);
      iVar1 = newtonObj[1].shadowCoord[0].y + ((int)((uVar5 >> 0x1f) + uVar5) >> 1);
    }
    else {
      uVar5 = fixedmult(iVar1,uVar7);
      newtonObj[1].shadowCoord[0].x =
           newtonObj[1].shadowCoord[0].x - ((int)((uVar5 >> 0x1f) + uVar5) >> 1);
      uVar5 = fixedmult(iVar1,uVar11);
      iVar1 = newtonObj[1].shadowCoord[0].y - ((int)((uVar5 >> 0x1f) + uVar5) >> 1);
    }
    newtonObj[1].shadowCoord[0].y = iVar1;
    transpose(&newtonObj->orientMat,&local_50);
    iVar1 = fixedmult(newtonObj[1].shadowMat.m[8],local_50);
    iVar2 = fixedmult(newtonObj[1].shadowCoord[0].x,local_4c);
    iVar6 = fixedmult(newtonObj[1].shadowCoord[0].y,local_48);
    iVar4 = newtonObj[1].shadowMat.m[8];
    (newtonObj->angularVel).x = iVar1 + iVar2 + iVar6;
    iVar1 = fixedmult(iVar4,local_44);
    iVar2 = fixedmult(newtonObj[1].shadowCoord[0].x,local_40);
    iVar6 = fixedmult(newtonObj[1].shadowCoord[0].y,local_3c);
    iVar4 = newtonObj[1].shadowMat.m[8];
    (newtonObj->angularVel).y = iVar1 + iVar2 + iVar6;
    iVar1 = fixedmult(iVar4,local_38);
    iVar2 = fixedmult(newtonObj[1].shadowCoord[0].x,local_34);
    iVar6 = fixedmult(newtonObj[1].shadowCoord[0].y,local_30);
    (newtonObj->angularVel).z = iVar1 + iVar2 + iVar6;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_FindClosestQuad__FP13BO_tNewtonObj(struct BO_tNewtonObj *n /*$a1*/)
 // line 221, offset 0x8009f704
	/* begin block 1 */
		// Start line: 222
		// Start offset: 0x8009F704
	/* end block 1 */
	// End offset: 0x8009F704
	// End Line: 222

void Newton_FindClosestQuad__FP13BO_tNewtonObj(BO_tNewtonObj *n)
{
  BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi(&n->position,&n->simRoadInfo,1);
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Newton_CalculateSliceYaw__Fi(int slice /*$a0*/)
 // line 235, offset 0x8009f730
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x8009F730
		// Variables:
	// 		int s; // $a2
	// 		int x1; // $a0
	// 		int z1; // $a1
	// 		int x2; // $v1
	// 		int z2; // $v0
	/* end block 1 */
	// End offset: 0x8009F75C
	// End Line: 238

int Newton_CalculateSliceYaw__Fi(int slice)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((slice + 1) * 0x20);
  iVar2 = intatan(*piVar1 - *(int *)(slice * 0x20),piVar1[2] - ((int *)(slice * 0x20))[2]);
  return iVar2;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_UpdateRoadGeometry__FP13BO_tNewtonObj(struct BO_tNewtonObj *n /*$s6*/)
 // line 248, offset 0x8009f7a0
	/* begin block 1 */
		// Start line: 249
		// Start offset: 0x8009F7A0
		// Variables:
	// 		int hiRez; // $a2
	// 		int slice; // $fp

		/* begin block 1.1 */
			// Start line: 257
			// Start offset: 0x8009F7E0

			/* begin block 1.1.1 */
				// Start line: 264
				// Start offset: 0x8009F7F4

				/* begin block 1.1.1.1 */
					// Start line: 266
					// Start offset: 0x8009F7F4
					// Variables:
				// 		int i; // $a1

					/* begin block 1.1.1.1.1 */
						// Start line: 267
						// Start offset: 0x8009F800
						// Variables:
					// 		struct coorddef temp; // stack offset -56
					/* end block 1.1.1.1.1 */
					// End offset: 0x8009F868
					// End Line: 271
				/* end block 1.1.1.1 */
				// End offset: 0x8009F8A8
				// End Line: 274
			/* end block 1.1.1 */
			// End offset: 0x8009F8E4
			// End Line: 277
		/* end block 1.1 */
		// End offset: 0x8009F948
		// End Line: 280

		/* begin block 1.2 */
			// Start line: 282
			// Start offset: 0x8009F948

			/* begin block 1.2.1 */
				// Start line: 283
				// Start offset: 0x8009F950

				/* begin block 1.2.1.1 */
					// Start line: 287
					// Start offset: 0x8009F950

					/* begin block 1.2.1.1.1 */
						// Start line: 288
						// Start offset: 0x8009F960

						/* begin block 1.2.1.1.1.1 */
							// Start line: 289
							// Start offset: 0x8009F960
							// Variables:
						// 		int r1; // $s2
						// 		int r2; // $s5
						// 		int r3; // $s0
						// 		int r4; // $s4
						// 		int r5; // $s1
						// 		int r6; // $s3
						// 		int x1; // $s7
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x8009F960
						// End Line: 289
					/* end block 1.2.1.1.1 */
					// End offset: 0x8009F960
					// End Line: 289
				/* end block 1.2.1.1 */
				// End offset: 0x8009F960
				// End Line: 289
			/* end block 1.2.1 */
			// End offset: 0x8009F960
			// End Line: 289

			/* begin block 1.2.2 */
				// Start line: 316
				// Start offset: 0x8009FA28
				// Variables:
			// 		int r1; // $a1
			// 		int r2; // $v0
			// 		int r3; // $a0
			/* end block 1.2.2 */
			// End offset: 0x8009FAA8
			// End Line: 339
		/* end block 1.2 */
		// End offset: 0x8009FAA8
		// End Line: 339

		/* begin block 1.3 */
			// Start line: 344
			// Start offset: 0x8009FAA8
			// Variables:
		// 		int s; // $a2
		// 		int x1; // $a0
		// 		int z1; // $a1
		// 		int x2; // $v1
		// 		int z2; // $v0
		/* end block 1.3 */
		// End offset: 0x8009FB00
		// End Line: 353
	/* end block 1 */
	// End offset: 0x8009FB00
	// End Line: 353

void Newton_UpdateRoadGeometry__FP13BO_tNewtonObj(BO_tNewtonObj *n)
{
  char cVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  coorddef *pcVar5;
  BO_tNewtonObj *pBVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int local_38;
  int local_34;
  int local_30;
  
  if (n->active != '\0') {
    iVar15 = (int)(n->simRoadInfo).slice;
    bVar3 = 1 < n->simOptz;
    iVar8 = 0;
    if (bVar3) {
      piVar4 = (int *)(iVar15 * 0x20);
      if ((n->simRoadInfo).simQuad == (Trk_NewSimQuad *)0x0) {
        iVar8 = piVar4[1];
        iVar7 = piVar4[2];
        (n->roadCenterPoint).x = *piVar4;
        (n->roadCenterPoint).y = iVar8;
        (n->roadCenterPoint).z = iVar7;
      }
      else {
        iVar8 = (n->simRoadInfo).quadPts[0].y;
        iVar7 = (n->simRoadInfo).quadPts[0].z;
        (n->roadCenterPoint).x = (n->simRoadInfo).quadPts[0].x;
        (n->roadCenterPoint).y = iVar8;
        (n->roadCenterPoint).z = iVar7;
      }
    }
    else {
      (n->roadCenterPoint).z = 0;
      (n->roadCenterPoint).y = 0;
      (n->roadCenterPoint).x = 0;
      pBVar6 = n;
      while (iVar8 < 4) {
        if ((n->simRoadInfo).simQuad == (Trk_NewSimQuad *)0x0) {
          piVar4 = (int *)((int)(n->simRoadInfo).slice * 0x20);
          local_38 = *piVar4;
          local_34 = piVar4[1];
          local_30 = piVar4[2];
        }
        else {
          local_38 = (pBVar6->simRoadInfo).quadPts[0].x;
          local_34 = (pBVar6->simRoadInfo).quadPts[0].y;
          local_30 = (pBVar6->simRoadInfo).quadPts[0].z;
        }
        (n->roadCenterPoint).x = (n->roadCenterPoint).x + local_38;
        pBVar6 = (BO_tNewtonObj *)&(pBVar6->simRoadInfo).simRotFlag;
        (n->roadCenterPoint).y = (n->roadCenterPoint).y + local_34;
        iVar8 = iVar8 + 1;
        (n->roadCenterPoint).z = (n->roadCenterPoint).z + local_30;
      }
      iVar8 = (n->roadCenterPoint).x;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 3;
      }
      iVar7 = (n->roadCenterPoint).y;
      (n->roadCenterPoint).x = iVar8 >> 2;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 3;
      }
      iVar8 = (n->roadCenterPoint).z;
      (n->roadCenterPoint).y = iVar7 >> 2;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 3;
      }
      (n->roadCenterPoint).z = iVar8 >> 2;
    }
    iVar8 = iVar15 * 0x20;
    if (bVar3) {
      cVar1 = *(char *)(iVar8 + 0x14);
      cVar2 = *(char *)(iVar8 + 0x13);
      (n->roadMatrix).m[0] = (int)*(char *)(iVar8 + 0x12) << 9;
      (n->roadMatrix).m[2] = (int)cVar1 << 9;
      (n->roadMatrix).m[1] = (int)cVar2 << 9;
      cVar1 = *(char *)(iVar8 + 0xe);
      cVar2 = *(char *)(iVar8 + 0xd);
      (n->roadMatrix).m[3] = (int)*(char *)(iVar8 + 0xc) << 9;
      (n->roadMatrix).m[5] = (int)cVar1 << 9;
      (n->roadMatrix).m[4] = (int)cVar2 << 9;
      cVar1 = *(char *)(iVar8 + 0x10);
      cVar2 = *(char *)(iVar8 + 0x11);
      (n->roadMatrix).m[6] = (int)*(char *)(iVar8 + 0xf) << 9;
      (n->roadMatrix).m[7] = (int)cVar1 << 9;
      (n->roadMatrix).m[8] = (int)cVar2 << 9;
    }
    else {
      if ((n->simRoadInfo).quadChanged != '\0') {
        pcVar5 = BWorldSm_UNormal__FP12BWorldSm_Pos(&n->simRoadInfo);
        iVar8 = pcVar5->y;
        iVar7 = pcVar5->z;
        (n->roadMatrix).m[3] = pcVar5->x;
        (n->roadMatrix).m[4] = iVar8;
        (n->roadMatrix).m[5] = iVar7;
        pcVar5 = BWorldSm_UForward__FP12BWorldSm_Pos(&n->simRoadInfo);
        iVar8 = pcVar5->y;
        iVar7 = pcVar5->z;
        (n->roadMatrix).m[6] = pcVar5->x;
        (n->roadMatrix).m[7] = iVar8;
        (n->roadMatrix).m[8] = iVar7;
        iVar14 = (n->roadMatrix).m[4];
        iVar12 = (n->roadMatrix).m[8];
        iVar11 = (n->roadMatrix).m[3];
        iVar9 = (n->roadMatrix).m[5];
        iVar13 = (n->roadMatrix).m[6];
        iVar10 = (n->roadMatrix).m[7];
        iVar8 = fixedmult(iVar14,iVar12);
        iVar7 = fixedmult(iVar9,iVar10);
        (n->roadMatrix).m[0] = iVar8 - iVar7;
        iVar8 = fixedmult(iVar9,iVar13);
        iVar7 = fixedmult(iVar11,iVar12);
        (n->roadMatrix).m[1] = iVar8 - iVar7;
        iVar8 = fixedmult(iVar11,iVar10);
        iVar7 = fixedmult(iVar14,iVar13);
        (n->roadMatrix).m[2] = iVar8 - iVar7;
      }
    }
    piVar4 = (int *)((iVar15 + 1) * 0x20);
    iVar8 = intatan(*piVar4 - *(int *)(iVar15 * 0x20),piVar4[2] - ((int *)(iVar15 * 0x20))[2]);
    n->roadYaw = iVar8;
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Newton_FindGroundElevationGeneral__FP8coorddefN20(struct coorddef *point /*$t0*/, struct coorddef *normal /*$a1*/, struct coorddef *pointOnQuad /*$s0*/)
 // line 445, offset 0x8009fb30
	/* begin block 1 */
		// Start line: 446
		// Start offset: 0x8009FB30
		// Variables:
	// 		int result; // $v0

		/* begin block 1.1 */
			// Start line: 446
			// Start offset: 0x8009FB30

			/* begin block 1.1.1 */
				// Start line: 450
				// Start offset: 0x8009FB54
				// Variables:
			// 		int index; // $a3
			/* end block 1.1.1 */
			// End offset: 0x8009FBC0
			// End Line: 455
		/* end block 1.1 */
		// End offset: 0x8009FC7C
		// End Line: 461
	/* end block 1 */
	// End offset: 0x8009FC7C
	// End Line: 464

int Newton_FindGroundElevationGeneral__FP8coorddefN20( (coorddef *point,coorddef *normal,coorddef *pointOnQuad)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = normal->y;
  if (iVar5 < 0x9eb9) {
    iVar4 = normal->x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar1 = point->x - pointOnQuad->x;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar3 = normal->z;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar2 = point->z - pointOnQuad->z;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar5 = fixeddiv(-((iVar3 >> 8) * (iVar2 >> 8)) - (iVar4 >> 8) * (iVar1 >> 8),iVar5);
  }
  else {
    iVar4 = normal->x;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar1 = point->x - pointOnQuad->x;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar3 = normal->z;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar2 = point->z - pointOnQuad->z;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar5 = fixedmult(-((iVar3 >> 8) * (iVar2 >> 8)) - (iVar4 >> 8) * (iVar1 >> 8),
                      *(undefined4 *)(&divTable + (0x10000 - iVar5 >> 9) * 4));
  }
  return iVar5 + pointOnQuad->y;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Newton_FindGroundElevationRough__FP8coorddefN20(struct coorddef *point /*$a0*/, struct coorddef *normal /*$a1*/, struct coorddef *pointOnQuad /*$s1*/)
 // line 475, offset 0x8009fc8c
	/* begin block 1 */
		// Start line: 476
		// Start offset: 0x8009FC8C
		// Variables:
	// 		int result; // $v0
	// 		int fudgeIndex; // $v0
	// 		int fudgeHeight; // $s0
	// 		int fudgeDist; // $v1
	// 		int numerator; // $t0

		/* begin block 1.1 */
			// Start line: 481
			// Start offset: 0x8009FD08
			// Variables:
		// 		int i; // $a3
		/* end block 1.1 */
		// End offset: 0x8009FDF4
		// End Line: 496

		/* begin block 1.2 */
			// Start line: 498
			// Start offset: 0x8009FDF4

			/* begin block 1.2.1 */
				// Start line: 499
				// Start offset: 0x8009FE08
				// Variables:
			// 		int index; // $v0
			/* end block 1.2.1 */
			// End offset: 0x8009FE08
			// End Line: 500
		/* end block 1.2 */
		// End offset: 0x8009FE4C
		// End Line: 505
	/* end block 1 */
	// End offset: 0x8009FE4C
	// End Line: 507

int Newton_FindGroundElevationRough__FP8coorddefN20( (coorddef *point,coorddef *normal,coorddef *pointOnQuad)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = normal->x;
  iVar6 = 0;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar1 = point->x - pointOnQuad->x;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar4 = normal->z;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar2 = point->z - pointOnQuad->z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar5 = 0;
  iVar3 = -((iVar4 >> 8) * (iVar2 >> 8)) - (iVar3 >> 8) * (iVar1 >> 8);
  do {
    if (iVar5 == 0) {
      iVar1 = point->x;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      iVar4 = point->z >> 1;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < iVar1) goto LAB_8009fd94;
LAB_8009fda4:
      iVar4 = iVar4 + (iVar1 >> 2);
    }
    else {
      iVar4 = point->z;
      iVar1 = point->x >> 2;
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar1 <= iVar4) goto LAB_8009fda4;
LAB_8009fd94:
      iVar4 = iVar1 + (iVar4 >> 2);
    }
    iVar4 = iVar4 >> 0xf;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar1 = iVar4;
    if (iVar4 < 0) {
      iVar1 = iVar4 + 0x1f;
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + (int)(short)(&fudgeTable)[iVar4 + (iVar1 >> 5) * -0x20] * 0x80;
    if (1 < iVar5) {
      if (normal->y < 0x9eb9) {
        iVar3 = fixeddiv(iVar3);
      }
      else {
        iVar3 = fixedmult(iVar3,*(undefined4 *)(&divTable + (0x10000 - normal->y >> 9) * 4));
      }
      return iVar3 + pointOnQuad->y + iVar6;
    }
  } while( true );


}




// decompiled code
// original method signature: 
// int /*$ra*/ Newton_FindGroundElevationAndNormalFast__FP13BO_tNewtonObjP8coorddef(struct BO_tNewtonObj *newtonObj /*$s0*/, struct coorddef *normal /*$s1*/)
 // line 515, offset 0x8009fe60
	/* begin block 1 */
		// Start line: 516
		// Start offset: 0x8009FE60
		// Variables:
	// 		int elevation; // $a2

		/* begin block 1.1 */
			// Start line: 516
			// Start offset: 0x8009FE60
			// Variables:
		// 		int r1; // $v1
		// 		int r2; // $v0
		// 		int r3; // $a0
		/* end block 1.1 */
		// End offset: 0x8009FE60
		// End Line: 516

		/* begin block 1.2 */
			// Start line: 516
			// Start offset: 0x8009FE60

			/* begin block 1.2.1 */
				// Start line: 532
				// Start offset: 0x8009FE98
				// Variables:
			// 		int surfaceType; // $v0

				/* begin block 1.2.1.1 */
					// Start line: 539
					// Start offset: 0x8009FE98
					// Variables:
				// 		int r2; // $a0
				// 		int r3; // $a1
				// 		int r4; // $v1
				/* end block 1.2.1.1 */
				// End offset: 0x8009FE98
				// End Line: 539
			/* end block 1.2.1 */
			// End offset: 0x8009FE98
			// End Line: 539
		/* end block 1.2 */
		// End offset: 0x8009FF68
		// End Line: 597
	/* end block 1 */
	// End offset: 0x8009FF68
	// End Line: 600

int Newton_FindGroundElevationAndNormalFast__FP13BO_tNewtonObjP8coorddef( (BO_tNewtonObj *newtonObj,coorddef *normal)
{
  int iVar1;
  int iVar2;
  int iVar3;
  Trk_NewSimSlice *pTVar4;
  Trk_NewStrip *pTVar5;
  Trk_NewSimQuad *pTVar6;
  
  iVar1 = (newtonObj->roadMatrix).m[4];
  iVar2 = (newtonObj->roadMatrix).m[3];
  iVar3 = (newtonObj->roadMatrix).m[5];
  normal->y = iVar1;
  normal->x = iVar2;
  normal->z = iVar3;
  if (iVar1 < 0x199a) {
    pTVar6 = (Trk_NewSimQuad *)0x83000000;
  }
  else {
    pTVar6 = (Trk_NewSimQuad *)
             Newton_FindGroundElevationGeneral__FP8coorddefN20
                       (&newtonObj->position,normal,&newtonObj->roadCenterPoint);
    iVar1 = (newtonObj->position).x;
    pTVar5 = (Trk_NewStrip *)(newtonObj->position).z;
    newtonObj[1].simRoadInfo.normal.z = 0;
    newtonObj[1].lastUpdated = 0;
    *(undefined4 *)&newtonObj[1].eIndexShadow = 0;
    newtonObj[1].orientMat.m[3] = 0;
    newtonObj[1].simRoadInfo.forward.x = 0;
    newtonObj[1].position.x = 0;
    newtonObj[1].wheelRot[0] = 0;
    newtonObj[1].orientMat.m[4] = 0;
    *(Trk_NewSimQuad **)(newtonObj[1].simRoadInfo.quadPts16 + 2) = pTVar6;
    newtonObj[1].simRoadInfo.simQuad = pTVar6;
    *(Trk_NewSimQuad **)&newtonObj[1].linearVel.y = pTVar6;
    *(Trk_NewSimQuad **)&newtonObj[1].wheelBackX = pTVar6;
    *(Trk_NewSimQuad **)&newtonObj[1].simRoadInfo.normal.x = pTVar6;
    *(Trk_NewSimQuad **)&newtonObj[1].gravityMult = pTVar6;
    *(Trk_NewSimQuad **)&newtonObj[1].xRelRoadCenter = pTVar6;
    *(Trk_NewSimQuad **)(newtonObj[1].orientMat.m + 1) = pTVar6;
    *(int *)&newtonObj[1].simRoadInfo.quadPts16[1].z = iVar1;
    *(int *)&newtonObj[1].simRoadInfo.quad = iVar1;
    newtonObj[1].linearVel.x = iVar1;
    newtonObj[1].wheelFrontZ = iVar1;
    *(Trk_NewStrip **)&newtonObj[1].simRoadInfo.quadPts16[2].z = pTVar5;
    newtonObj[1].simRoadInfo.strip = pTVar5;
    *(Trk_NewStrip **)&newtonObj[1].linearVel.z = pTVar5;
    *(Trk_NewStrip **)&newtonObj[1].wheelBackZ = pTVar5;
    pTVar4 = (Trk_NewSimSlice *)normal->x;
    iVar2 = normal->y;
    iVar1 = normal->z;
    newtonObj[1].simRoadInfo.forward.z = 1;
    newtonObj[1].position.z = 1;
    newtonObj[1].wheelFrontX = 1;
    newtonObj[1].orientMat.m[6] = 1;
    *(Trk_NewSimSlice **)(newtonObj[1].simRoadInfo.quadPts16 + 3) = pTVar4;
    newtonObj[1].simRoadInfo.simSlice = pTVar4;
    *(Trk_NewSimSlice **)&newtonObj[1].mass = pTVar4;
    *(Trk_NewSimSlice **)&newtonObj[1].wheelWidthF = pTVar4;
    *(int *)&newtonObj[1].simRoadInfo.quadPts16[3].z = iVar2;
    newtonObj[1].distToPlayer = iVar2;
    newtonObj[1].massInv = iVar2;
    newtonObj[1].wheelWidthB = iVar2;
    *(int *)&newtonObj[1].simRoadInfo.sliceChanged = iVar1;
    *(int *)&newtonObj[1].simOptz = iVar1;
    newtonObj[1].speedXZ = iVar1;
    newtonObj[1].orientMat.m[0] = iVar1;
  }
  return (int)pTVar6;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Newton_FindGroundElevationAndNormal__FP13BO_tNewtonObjP8coorddef(struct BO_tNewtonObj *newtonObj /*$s4*/, struct coorddef *normal /*$fp*/)
 // line 610, offset 0x8009ff80
	/* begin block 1 */
		// Start line: 611
		// Start offset: 0x8009FF80
		// Variables:
	// 		struct coorddef elevation; // stack offset -432
	// 		struct coorddef tireCoord[4]; // stack offset -416
	// 		struct coorddef carNormal; // stack offset -368
	// 		int wheelsInAir; // $s7
	// 		int bounce; // $s5

		/* begin block 1.1 */
			// Start line: 611
			// Start offset: 0x8009FF80
			// Variables:
		// 		int r2; // $v0
		// 		int r3; // $v1
		// 		int r4; // $a0
		/* end block 1.1 */
		// End offset: 0x8009FF80
		// End Line: 611

		/* begin block 1.2 */
			// Start line: 611
			// Start offset: 0x8009FF80
			// Variables:
		// 		struct coorddef lengthVector; // stack offset -352
		// 		struct coorddef widthVector; // stack offset -336
		// 		struct coorddef carGroundCoord; // stack offset -320
		// 		struct coorddef vecOffset; // stack offset -304

			/* begin block 1.2.1 */
				// Start line: 611
				// Start offset: 0x8009FF80
				// Variables:
			// 		int v1; // $t1
			// 		int r1; // $t6
			// 		int r2; // $t5
			// 		int r3; // $v0
			/* end block 1.2.1 */
			// End offset: 0x8009FF80
			// End Line: 611

			/* begin block 1.2.2 */
				// Start line: 611
				// Start offset: 0x8009FF80
				// Variables:
			// 		int v1; // $t2
			// 		int r1; // $t4
			// 		int r2; // $t3
			// 		int r3; // $v0
			/* end block 1.2.2 */
			// End offset: 0x8009FF80
			// End Line: 611

			/* begin block 1.2.3 */
				// Start line: 611
				// Start offset: 0x8009FF80
				// Variables:
			// 		int v1; // $v1
			// 		int r1; // $a1
			// 		int r2; // $a0
			// 		int r3; // $v0
			/* end block 1.2.3 */
			// End offset: 0x8009FF80
			// End Line: 611

			/* begin block 1.2.4 */
				// Start line: 611
				// Start offset: 0x8009FF80
				// Variables:
			// 		int r1; // $a2
			// 		int r2; // $a3
			// 		int r3; // $t0
			/* end block 1.2.4 */
			// End offset: 0x8009FF80
			// End Line: 611

			/* begin block 1.2.5 */
				// Start line: 611
				// Start offset: 0x8009FF80
				// Variables:
			// 		int r1; // $a1
			// 		int r2; // $a0
			// 		int r3; // $v1
			/* end block 1.2.5 */
			// End offset: 0x8009FF80
			// End Line: 611

			/* begin block 1.2.6 */
				// Start line: 611
				// Start offset: 0x8009FF80
				// Variables:
			// 		int r1; // $a2
			// 		int r2; // $a3
			// 		int r3; // $t0
			/* end block 1.2.6 */
			// End offset: 0x8009FF80
			// End Line: 611
		/* end block 1.2 */
		// End offset: 0x8009FF80
		// End Line: 611

		/* begin block 1.3 */
			// Start line: 611
			// Start offset: 0x8009FF80
			// Variables:
		// 		struct BWorldSm_Pos testSimRoadInfo; // stack offset -288
		// 		struct coorddef wheelHeight[4]; // stack offset -352

			/* begin block 1.3.1 */
				// Start line: 737
				// Start offset: 0x800A01B4

				/* begin block 1.3.1.1 */
					// Start line: 744
					// Start offset: 0x800A01CC
					// Variables:
				// 		struct coorddef roadNormal; // stack offset -152
				// 		struct coorddef roadCenterPoint; // stack offset -136
				// 		int roadSurfaceType; // $a0

					/* begin block 1.3.1.1.1 */
						// Start line: 764
						// Start offset: 0x800A0240

						/* begin block 1.3.1.1.1.1 */
							// Start line: 781
							// Start offset: 0x800A02A8

							/* begin block 1.3.1.1.1.1.1 */
								// Start line: 791
								// Start offset: 0x800A0338

								/* begin block 1.3.1.1.1.1.1.1 */
									// Start line: 805
									// Start offset: 0x800A03B8
									// Variables:
								// 		int r1; // $v1
								// 		int r3; // $a0
								/* end block 1.3.1.1.1.1.1.1 */
								// End offset: 0x800A03E4
								// End Line: 811
							/* end block 1.3.1.1.1.1.1 */
							// End offset: 0x800A03E4
							// End Line: 811
						/* end block 1.3.1.1.1.1 */
						// End offset: 0x800A03E4
						// End Line: 811
					/* end block 1.3.1.1.1 */
					// End offset: 0x800A03E4
					// End Line: 811

					/* begin block 1.3.1.1.2 */
						// Start line: 816
						// Start offset: 0x800A03E4
						// Variables:
					// 		int r1; // $v0
					// 		int r2; // $v1
					// 		int r3; // $a0
					/* end block 1.3.1.1.2 */
					// End offset: 0x800A03E4
					// End Line: 817

					/* begin block 1.3.1.1.3 */
						// Start line: 817
						// Start offset: 0x800A03E4
						// Variables:
					// 		int r1; // $v0
					// 		int r2; // $v1
					// 		int r3; // $a0
					/* end block 1.3.1.1.3 */
					// End offset: 0x800A03E4
					// End Line: 817
				/* end block 1.3.1.1 */
				// End offset: 0x800A03E4
				// End Line: 817
			/* end block 1.3.1 */
			// End offset: 0x800A0424
			// End Line: 834

			/* begin block 1.3.2 */
				// Start line: 837
				// Start offset: 0x800A0424
				// Variables:
			// 		struct coorddef wheelVec; // stack offset -152
			// 		int compressionValue[4]; // stack offset -120
			// 		int count; // stack offset -48

				/* begin block 1.3.2.1 */
					// Start line: 840
					// Start offset: 0x800A0424
					// Variables:
				// 		int i; // $a3

					/* begin block 1.3.2.1.1 */
						// Start line: 844
						// Start offset: 0x800A0440

						/* begin block 1.3.2.1.1.1 */
							// Start line: 875
							// Start offset: 0x800A04F8
							// Variables:
						// 		int limit; // $a0
						/* end block 1.3.2.1.1.1 */
						// End offset: 0x800A052C
						// End Line: 880
					/* end block 1.3.2.1.1 */
					// End offset: 0x800A05BC
					// End Line: 889
				/* end block 1.3.2.1 */
				// End offset: 0x800A05CC
				// End Line: 890

				/* begin block 1.3.2.2 */
					// Start line: 893
					// Start offset: 0x800A05CC

					/* begin block 1.3.2.2.1 */
						// Start line: 894
						// Start offset: 0x800A05D4
						// Variables:
					// 		int r1; // $v0
					// 		int r2; // $v1
					// 		int r3; // $v1
					// 		int r4; // $a0
					/* end block 1.3.2.2.1 */
					// End offset: 0x800A05F8
					// End Line: 899
				/* end block 1.3.2.2 */
				// End offset: 0x800A05F8
				// End Line: 899

				/* begin block 1.3.2.3 */
					// Start line: 903
					// Start offset: 0x800A05F8
					// Variables:
				// 		int i; // $s3

					/* begin block 1.3.2.3.1 */
						// Start line: 903
						// Start offset: 0x800A05FC
						// Variables:
					// 		int wheelBounce; // $s1

						/* begin block 1.3.2.3.1.1 */
							// Start line: 907
							// Start offset: 0x800A0608

							/* begin block 1.3.2.3.1.1.1 */
								// Start line: 910
								// Start offset: 0x800A0634

								/* begin block 1.3.2.3.1.1.1.1 */
									// Start line: 910
									// Start offset: 0x800A0634

									/* begin block 1.3.2.3.1.1.1.1.1 */
										// Start line: 911
										// Start offset: 0x800A065C
										// Variables:
									// 		int speed; // $s0

										/* begin block 1.3.2.3.1.1.1.1.1.1 */
											// Start line: 912
											// Start offset: 0x800A065C

											/* begin block 1.3.2.3.1.1.1.1.1.1.1 */
												// Start line: 916
												// Start offset: 0x800A0678

												/* begin block 1.3.2.3.1.1.1.1.1.1.1.1 */
													// Start line: 917
													// Start offset: 0x800A0678

													/* begin block 1.3.2.3.1.1.1.1.1.1.1.1.1 */
														// Start line: 919
														// Start offset: 0x800A06C0
														// Variables:
													// 		int ratio; // $v0
													/* end block 1.3.2.3.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x800A06FC
													// End Line: 921
												/* end block 1.3.2.3.1.1.1.1.1.1.1.1 */
												// End offset: 0x800A06FC
												// End Line: 921
											/* end block 1.3.2.3.1.1.1.1.1.1.1 */
											// End offset: 0x800A070C
											// End Line: 923
										/* end block 1.3.2.3.1.1.1.1.1.1 */
										// End offset: 0x800A070C
										// End Line: 923
									/* end block 1.3.2.3.1.1.1.1.1 */
									// End offset: 0x800A070C
									// End Line: 923
								/* end block 1.3.2.3.1.1.1.1 */
								// End offset: 0x800A070C
								// End Line: 923
							/* end block 1.3.2.3.1.1.1 */
							// End offset: 0x800A070C
							// End Line: 923
						/* end block 1.3.2.3.1.1 */
						// End offset: 0x800A070C
						// End Line: 923
					/* end block 1.3.2.3.1 */
					// End offset: 0x800A070C
					// End Line: 923
				/* end block 1.3.2.3 */
				// End offset: 0x800A0718
				// End Line: 926

				/* begin block 1.3.2.4 */
					// Start line: 929
					// Start offset: 0x800A0718
					// Variables:
				// 		int i; // $s2

					/* begin block 1.3.2.4.1 */
						// Start line: 929
						// Start offset: 0x800A0728
						// Variables:
					// 		int desiredCompression; // $a1
					/* end block 1.3.2.4.1 */
					// End offset: 0x800A07A4
					// End Line: 940
				/* end block 1.3.2.4 */
				// End offset: 0x800A07CC
				// End Line: 941
			/* end block 1.3.2 */
			// End offset: 0x800A07CC
			// End Line: 941

			/* begin block 1.3.3 */
				// Start line: 946
				// Start offset: 0x800A07CC
				// Variables:
			// 		struct coorddef tempVecX; // stack offset -152
			// 		struct coorddef tempVecY; // stack offset -136
			// 		struct coorddef tempVecZ; // stack offset -104

				/* begin block 1.3.3.1 */
					// Start line: 995
					// Start offset: 0x800A09B0

					/* begin block 1.3.3.1.1 */
						// Start line: 998
						// Start offset: 0x800A0A48

						/* begin block 1.3.3.1.1.1 */
							// Start line: 998
							// Start offset: 0x800A0A48

							/* begin block 1.3.3.1.1.1.1 */
								// Start line: 999
								// Start offset: 0x800A0A50
								// Variables:
							// 		struct matrixtdef transposeMat; // stack offset -88
							// 		int pitch; // $s1
							// 		int roll; // $s0
							/* end block 1.3.3.1.1.1.1 */
							// End offset: 0x800A0D38
							// End Line: 1043
						/* end block 1.3.3.1.1.1 */
						// End offset: 0x800A0D38
						// End Line: 1043
					/* end block 1.3.3.1.1 */
					// End offset: 0x800A0D38
					// End Line: 1043
				/* end block 1.3.3.1 */
				// End offset: 0x800A0D38
				// End Line: 1043
			/* end block 1.3.3 */
			// End offset: 0x800A0D38
			// End Line: 1043
		/* end block 1.3 */
		// End offset: 0x800A0D70
		// End Line: 1054
	/* end block 1 */
	// End offset: 0x800A0D70
	// End Line: 1058

int Newton_FindGroundElevationAndNormal__FP13BO_tNewtonObjP8coorddef( (BO_tNewtonObj *newtonObj,coorddef *normal)
{
  coorddef *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  BO_tNewtonObj *pBVar6;
  coorddef *samplePoint;
  BWorldSm_Pos *pBVar7;
  int *piVar8;
  BWorldSm_Pos *pBVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  coorddef local_1b0;
  coorddef local_1a0;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  BWorldSm_Pos local_120;
  coorddef local_98;
  coorddef local_88;
  int local_78 [4];
  coorddef local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_30;
  
  local_170 = (newtonObj->orientMat).m[3];
  local_16c = (newtonObj->orientMat).m[4];
  local_168 = (newtonObj->orientMat).m[5];
  local_1b0.x = 0;
  local_1b0.y = 0;
  local_1b0.z = 0;
  local_158 = (newtonObj->dimension).z * 0xd >> 0xc;
  local_160 = local_158 * ((newtonObj->orientMat).m[6] >> 8);
  local_15c = local_158 * ((newtonObj->orientMat).m[7] >> 8);
  local_158 = local_158 * ((newtonObj->orientMat).m[8] >> 8);
  local_148 = (newtonObj->dimension).x * 7 >> 0xb;
  local_150 = local_148 * ((newtonObj->orientMat).m[0] >> 8);
  local_14c = local_148 * ((newtonObj->orientMat).m[1] >> 8);
  local_148 = local_148 * ((newtonObj->orientMat).m[2] >> 8);
  local_128 = -(newtonObj->dimension).y >> 8;
  local_130 = local_128 * ((newtonObj->orientMat).m[3] >> 8);
  local_12c = local_128 * ((newtonObj->orientMat).m[4] >> 8);
  local_128 = local_128 * ((newtonObj->orientMat).m[5] >> 8);
  iVar12 = 0;
  iVar10 = 0;
  pBVar7 = &local_120;
  pBVar9 = &newtonObj->simRoadInfo;
  local_140 = (newtonObj->position).x + local_130;
  local_13c = (newtonObj->position).y + local_12c;
  local_138 = (newtonObj->position).z + local_128;
  local_1a0.x = (local_140 + local_160) - local_150;
  local_1a0.y = (local_13c + local_15c) - local_14c;
  local_1a0.z = (local_138 + local_158) - local_148;
  local_194 = local_140 + local_160 + local_150;
  local_190 = local_13c + local_15c + local_14c;
  local_18c = local_138 + local_158 + local_148;
  local_188 = (local_140 - local_160) - local_150;
  local_184 = (local_13c - local_15c) - local_14c;
  local_180 = (local_138 - local_158) - local_148;
  local_17c = (local_140 - local_160) + local_150;
  local_178 = (local_13c - local_15c) + local_14c;
  local_174 = (local_138 - local_158) + local_148;
  do {
    uVar11 = *(undefined4 *)&pBVar9->simRotFlag;
    iVar13 = pBVar9->quadPts[0].x;
    iVar14 = pBVar9->quadPts[0].y;
    *(int *)pBVar7 = *(int *)pBVar9;
    *(undefined4 *)&pBVar7->simRotFlag = uVar11;
    pBVar7->quadPts[0].x = iVar13;
    pBVar7->quadPts[0].y = iVar14;
    pBVar9 = (BWorldSm_Pos *)&pBVar9->quadPts[0].z;
    pBVar7 = (BWorldSm_Pos *)&pBVar7->quadPts[0].z;
  } while (pBVar9 != (BWorldSm_Pos *)&(newtonObj->simRoadInfo).simSlice);
  *(int *)pBVar7 = *(int *)pBVar9;
  piVar8 = &local_160;
  samplePoint = &local_1a0;
  pBVar6 = newtonObj;
  while ((int)pBVar6 < (int)&newtonObj->speedXZ) {
    iVar13 = samplePoint->y;
    iVar14 = samplePoint->z;
    *piVar8 = samplePoint->x;
    piVar8[1] = iVar13;
    piVar8[2] = iVar14;
    pBVar6[1].simRoadInfo.normal.x = samplePoint->y;
    BWorldSm_FindClosestTriangleRez__FP8coorddefP12BWorldSm_Posi(samplePoint,&local_120,1);
    pcVar1 = BWorldSm_UNormal__FP12BWorldSm_Pos(&local_120);
    local_98.x = pcVar1->x;
    local_98.y = pcVar1->y;
    local_98.z = pcVar1->z;
    uVar4 = 0xe;
    if (local_120.simQuad != (Trk_NewSimQuad *)0x0) {
      uVar4 = (uint)(local_120.simQuad)->surface;
    }
    pBVar6[1].simRoadInfo.forward.z = uVar4;
    uVar4 = uVar4 & 0xf;
    if (((local_98.y < 0x1999) || (uVar4 == 0xe)) || (uVar4 == 0)) {
      local_1b0.x = local_1b0.x + samplePoint->x;
      iVar13 = samplePoint->y - newtonObj->objAltitude;
code_r0x800a0398:
      local_98.z = 0;
      local_98.y = 0x10000;
      local_98.x = 0;
      local_1b0.y = local_1b0.y + iVar13;
      local_1b0.z = local_1b0.z + samplePoint->z;
    }
    else {
      if (local_120.simQuad == (Trk_NewSimQuad *)0x0) {
        piVar2 = (int *)((int)local_120.slice * 0x20);
        local_88.x = *piVar2;
        local_88.y = piVar2[1];
        local_88.z = piVar2[2];
      }
      else {
        local_88.x = local_120.quadPts[0].x;
        local_88.y = local_120.quadPts[0].y;
        local_88.z = local_120.quadPts[0].z;
      }
      if (uVar4 - 2 < 2) {
        iVar13 = Newton_FindGroundElevationRough__FP8coorddefN20(samplePoint,&local_98,&local_88);
        piVar8[1] = iVar13;
      }
      else {
        iVar13 = Newton_FindGroundElevationGeneral__FP8coorddefN20(samplePoint,&local_98,&local_88);
        piVar8[1] = iVar13;
      }
      pBVar6[1].simRoadInfo.normal.x = piVar8[1];
      if (0x20000 < piVar8[1] - samplePoint->y) {
        piVar8[1] = samplePoint->y;
        local_1b0.x = local_1b0.x + samplePoint->x;
        iVar13 = samplePoint->y;
        goto code_r0x800a0398;
      }
      local_1b0.x = local_1b0.x + *piVar8;
      local_1b0.y = local_1b0.y + piVar8[1];
      local_1b0.z = local_1b0.z + piVar8[2];
    }
    iVar13 = *piVar8;
    iVar14 = piVar8[1];
    iVar5 = piVar8[2];
    piVar8 = piVar8 + 3;
    *(int *)&pBVar6[1].simRoadInfo.quadPts16[1].z = iVar13;
    *(int *)(pBVar6[1].simRoadInfo.quadPts16 + 2) = iVar14;
    *(int *)&pBVar6[1].simRoadInfo.quadPts16[2].z = iVar5;
    samplePoint = samplePoint + 1;
    *(int *)(pBVar6[1].simRoadInfo.quadPts16 + 3) = local_98.x;
    *(int *)&pBVar6[1].simRoadInfo.quadPts16[3].z = local_98.y;
    *(int *)&pBVar6[1].simRoadInfo.sliceChanged = local_98.z;
    pBVar6 = (BO_tNewtonObj *)&(pBVar6->simRoadInfo).quadPts[2].z;
  }
  iVar13 = 0;
  iVar14 = 0;
  local_30 = 0;
  local_98.x = 0;
  local_98.z = 0;
  pBVar6 = newtonObj;
  while (iVar13 < 4) {
    uVar4 = *(int *)(pBVar6[1].simRoadInfo.quadPts16 + 2) - *(int *)((int)&local_1a0.y + iVar14);
    local_98.y = (int)(uVar4 + (uVar4 >> 0x1f)) >> 1;
    pBVar6[1].simRoadInfo.forward.x = 0;
    if (local_98.y < -0x2665) {
      pBVar6[1].simRoadInfo.normal.z = 1;
      iVar12 = iVar12 + 1;
    }
    else {
      if (pBVar6[1].simRoadInfo.normal.z == 1) {
        if (local_98.y < 1) {
          if (((newtonObj->objAltitude < 0x3333) && (-0x1999 < (newtonObj->linearVel).y)) &&
             (0xf333 < (newtonObj->orientationToGround).y)) {
            pBVar6[1].simRoadInfo.normal.z = 0;
          }
        }
        else {
          iVar10 = iVar10 + 1;
          pBVar6[1].simRoadInfo.normal.z = 0;
          pBVar6[1].simRoadInfo.forward.x = 1;
        }
      }
    }
    iVar5 = -0x3333;
    if (0x358000 < newtonObj->speedXZ) {
      iVar5 = -0x2666;
    }
    if (local_98.y < iVar5) {
      local_98.y = iVar5;
    }
    iVar5 = local_98.y;
    if (local_98.y < 0) {
      iVar5 = local_98.y + 0xff;
    }
    iVar3 = local_16c;
    if (local_16c < 0) {
      iVar3 = local_16c + 0xff;
    }
    iVar5 = (iVar5 >> 8) * (iVar3 >> 8);
    local_78[iVar13] = iVar5;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar3 = *(int *)(newtonObj[1].damage[3] + 0x138);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar5 = (iVar5 >> 8) * (iVar3 >> 8);
    pBVar6[1].simRoadInfo.normal.y = iVar5;
    if (*(int *)(*(int *)(newtonObj[1].simRoadInfo.quadPts16 + 1) + 0x40) == 1) {
      pBVar6[1].simRoadInfo.normal.y = iVar5 * 2;
    }
    pBVar6 = (BO_tNewtonObj *)&(pBVar6->simRoadInfo).quadPts[2].z;
    iVar14 = iVar14 + 0xc;
    iVar13 = iVar13 + 1;
  }
  iVar13 = 0;
  pBVar6 = newtonObj;
  if (iVar10 != 0) {
    local_30 = newtonObj[1].simRoadInfo.forward.x + newtonObj[1].position.x +
               newtonObj[1].wheelRot[0] + newtonObj[1].orientMat.m[4];
    pBVar6 = newtonObj;
  }
  while (iVar13 < 4) {
    if (iVar10 == 0) {
      iVar14 = pBVar6[1].simRoadInfo.normal.y;
      if ((iVar14 < 0) && (iVar14 = iVar14 >> 1, 0xdc28 < (newtonObj->orientationToGround).y)) {
LAB_800a0708:
        pBVar6[1].simRoadInfo.normal.y = iVar14;
      }
      else {
        if (false) goto LAB_800a063c;
      }
    }
    else {
LAB_800a063c:
      if ((pBVar6[1].simRoadInfo.forward.x != 0) && (iVar5 = (newtonObj->linearVel).y, iVar5 < 0)) {
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        iVar5 = iVar5 + newtonObj->groundVel;
        if (-1 < iVar5) {
          if (local_30 == 0) {
            trap(0x1c00);
          }
          if ((local_30 == -1) && (iVar5 == -0x80000000)) {
            trap(0x1800);
          }
          iVar14 = iVar5 / local_30 >> 1;
          if (iVar5 < 0x100000) {
            iVar3 = fixedmult(iVar5,0x1000);
            if (iVar3 < 0x4ccd) {
              uVar11 = 0x4ccc;
            }
            else {
              uVar11 = fixedmult(iVar5,0x1000);
            }
            iVar14 = fixedmult(uVar11,iVar14);
          }
          iVar14 = pBVar6[1].simRoadInfo.normal.y + iVar14;
          goto LAB_800a0708;
        }
      }
    }
    iVar13 = iVar13 + 1;
    pBVar6 = (BO_tNewtonObj *)&(pBVar6->simRoadInfo).quadPts[2].z;
  }
  iVar13 = 0;
  piVar8 = &swap;
  iVar10 = 0;
  do {
    if (3 < iVar13) {
      local_1b0.x = local_1b0.x >> 2;
      local_1b0.z = local_1b0.z >> 2;
      local_1b0.y = local_1b0.y >> 2;
      local_68.x = (local_160 + local_154) - (local_148 + local_13c) >> 1;
      local_68.y = (local_15c + local_150) - (local_144 + local_138) >> 1;
      local_68.z = (local_158 + local_14c) - (local_140 + local_134) >> 1;
      Math_NormalizeShortVector__FP8coorddef(&local_68);
      local_98.x = (local_154 + local_13c) - (local_160 + local_148) >> 1;
      local_98.y = (local_150 + local_138) - (local_15c + local_144) >> 1;
      local_98.z = (local_14c + local_134) - (local_158 + local_140) >> 1;
      Math_NormalizeShortVector__FP8coorddef(&local_98);
      iVar10 = fixedmult(local_68.y,local_98.z);
      local_88.x = fixedmult(local_68.z,local_98.y);
      local_88.x = iVar10 - local_88.x;
      iVar10 = fixedmult(local_68.z,local_98.x);
      local_88.y = fixedmult(local_68.x,local_98.z);
      local_88.y = iVar10 - local_88.y;
      iVar10 = fixedmult(local_68.x,local_98.y);
      local_88.z = fixedmult(local_68.y,local_98.x);
      local_88.z = iVar10 - local_88.z;
      Math_NormalizeShortVector__FP8coorddef(&local_88);
      if (local_88.y < 0) {
        iVar12 = 4;
        normal->x = 0;
        normal->y = 0x10000;
        normal->z = 0;
      }
      else {
        normal->x = local_88.x;
        normal->y = local_88.y;
        normal->z = local_88.z;
        if (local_88.y < 0x8000) {
          iVar12 = 4;
        }
      }
      if ((newtonObj->orientationToGround).y < -0xe666) {
        iVar10 = (newtonObj->angularVel).x * 0xfd;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 0xff;
        }
        (newtonObj->angularVel).x = iVar10 >> 8;
        iVar10 = (newtonObj->angularVel).y * 0xfd;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 0xff;
        }
        (newtonObj->angularVel).y = iVar10 >> 8;
        iVar10 = (newtonObj->angularVel).z * 0xfd;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 0xff;
        }
        (newtonObj->angularVel).z = iVar10 >> 8;
      }
      else {
        if (iVar12 < 4) {
          iVar10 = fixedmult((newtonObj->angularVel).x,(newtonObj->orientMat).m[0]);
          iVar12 = fixedmult((newtonObj->angularVel).y,(newtonObj->orientMat).m[1]);
          iVar13 = fixedmult((newtonObj->angularVel).z,(newtonObj->orientMat).m[2]);
          iVar14 = (newtonObj->angularVel).x;
          iVar5 = (newtonObj->orientMat).m[3];
          newtonObj[1].shadowMat.m[8] = iVar10 + iVar12 + iVar13;
          iVar10 = fixedmult(iVar14,iVar5);
          iVar12 = fixedmult((newtonObj->angularVel).y,(newtonObj->orientMat).m[4]);
          iVar13 = fixedmult((newtonObj->angularVel).z,(newtonObj->orientMat).m[5]);
          iVar14 = (newtonObj->angularVel).x;
          iVar5 = (newtonObj->orientMat).m[6];
          newtonObj[1].shadowCoord[0].x = iVar10 + iVar12 + iVar13;
          iVar10 = fixedmult(iVar14,iVar5);
          iVar12 = fixedmult((newtonObj->angularVel).y,(newtonObj->orientMat).m[7]);
          iVar13 = fixedmult((newtonObj->angularVel).z,(newtonObj->orientMat).m[8]);
          iVar14 = (*(int *)&newtonObj[1].positionXZ + newtonObj[1].orientMat.m[2]) -
                   (newtonObj[1].simRoadInfo.normal.y + newtonObj[1].cumulatedRot) >> 2;
          newtonObj[1].shadowCoord[0].y = iVar10 + iVar12 + iVar13;
          if (iVar14 < 1) {
            iVar10 = -*(int *)(newtonObj[1].damage[3] + 0x13c);
            if (iVar10 < iVar14) {
              iVar10 = iVar14;
            }
          }
          else {
            iVar10 = *(int *)(newtonObj[1].damage[3] + 0x13c);
            if (iVar14 <= iVar10) {
              iVar10 = iVar14;
            }
          }
          iVar12 = (newtonObj[1].simRoadInfo.normal.y + *(int *)&newtonObj[1].positionXZ) -
                   (newtonObj[1].cumulatedRot + newtonObj[1].orientMat.m[2]) >> 2;
          if (iVar12 < 1) {
            iVar13 = -*(int *)(newtonObj[1].damage[3] + 0x140);
            if (iVar13 < iVar12) {
              iVar13 = iVar12;
            }
          }
          else {
            iVar13 = *(int *)(newtonObj[1].damage[3] + 0x140);
            if (iVar12 <= iVar13) {
              iVar13 = iVar12;
            }
          }
          iVar14 = newtonObj[1].shadowMat.m[8];
          iVar12 = iVar14;
          if (iVar14 < 0) {
            iVar12 = -iVar14;
          }
          uVar11 = 0xd999;
          if (iVar12 < 0x13333) {
            uVar11 = *(undefined4 *)(newtonObj[1].damage[3] + 0x130);
          }
          iVar12 = fixedmult(iVar14,uVar11);
          newtonObj[1].shadowMat.m[8] = iVar12;
          iVar12 = newtonObj[1].shadowCoord[0].y;
          newtonObj[1].shadowMat.m[8] = newtonObj[1].shadowMat.m[8] + iVar10;
          iVar10 = iVar12;
          if (iVar12 < 0) {
            iVar10 = -iVar12;
          }
          uVar11 = 0xd999;
          if (iVar10 < 0x13333) {
            uVar11 = *(undefined4 *)(newtonObj[1].damage[3] + 0x134);
          }
          iVar10 = fixedmult(iVar12,uVar11);
          newtonObj[1].shadowCoord[0].y = iVar10;
          newtonObj[1].shadowCoord[0].y = newtonObj[1].shadowCoord[0].y - iVar13;
          transpose(&newtonObj->orientMat,&local_58);
          iVar10 = fixedmult(newtonObj[1].shadowMat.m[8],local_58);
          iVar12 = fixedmult(newtonObj[1].shadowCoord[0].x,local_54);
          iVar13 = fixedmult(newtonObj[1].shadowCoord[0].y,local_50);
          iVar14 = newtonObj[1].shadowMat.m[8];
          (newtonObj->angularVel).x = iVar10 + iVar12 + iVar13;
          iVar10 = fixedmult(iVar14,local_4c);
          iVar12 = fixedmult(newtonObj[1].shadowCoord[0].x,local_48);
          iVar13 = fixedmult(newtonObj[1].shadowCoord[0].y,local_44);
          iVar14 = newtonObj[1].shadowMat.m[8];
          (newtonObj->angularVel).y = iVar10 + iVar12 + iVar13;
          iVar10 = fixedmult(iVar14,local_40);
          iVar12 = fixedmult(newtonObj[1].shadowCoord[0].x,local_3c);
          iVar13 = fixedmult(newtonObj[1].shadowCoord[0].y,local_38);
          (newtonObj->angularVel).z = iVar10 + iVar12 + iVar13;
        }
      }
      if (false) {
        samplePoint = &local_1b0;
      }
      else {
        samplePoint = &newtonObj->roadCenterPoint;
      }
      iVar10 = Newton_CalcPerpenHeightOfCenterPointFromGround__FP13BO_tNewtonObjP8coorddefT1
                         (newtonObj,normal,samplePoint);
      newtonObj->objAltitude = iVar10;
      return local_1b0.y;
    }
    iVar14 = fixedmult(*(int *)((int)&local_1a0.y + iVar10) - *(int *)((int)&local_15c + iVar10) >>
                       1,(newtonObj->orientMat).m[4]);
    if (iVar14 < 1) {
      iVar5 = -*(int *)(newtonObj[1].damage[3] + 0x150);
      if (iVar14 < iVar5) goto LAB_800a07a0;
    }
    else {
      iVar5 = *(int *)(newtonObj[1].damage[3] + 0x150);
      if (iVar5 <= iVar14) {
LAB_800a07a0:
        iVar14 = iVar5;
      }
    }
    iVar5 = *piVar8;
    piVar8 = piVar8 + 1;
    iVar10 = iVar10 + 0xc;
    iVar13 = iVar13 + 1;
    (&newtonObj[1].simRoadInfo.forward)[iVar5 * 4].y = iVar14;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_LimitCarsToDrivableDist__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj /*$s0*/)
 // line 1062, offset 0x800a0da4
	/* begin block 1 */
		// Start line: 1063
		// Start offset: 0x800A0DA4
	/* end block 1 */
	// End offset: 0x800A0DD8
	// End Line: 1069

void Newton_LimitCarsToDrivableDist__FP13BO_tNewtonObj(BO_tNewtonObj *newtonObj)
{
  int iVar1;
  
  iVar1 = Physics_DoBarrierCheck__FP8Car_tObj((Car_tObj *)newtonObj);
  if (iVar1 != 0) {
    (newtonObj->collision).impulse = 0;
    (newtonObj->collision).otherObj = (BO_tNewtonObj *)0x0;
    Newton_FindClosestQuad__FP13BO_tNewtonObj(newtonObj);
    Newton_UpdateRoadGeometry__FP13BO_tNewtonObj(newtonObj);
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Newton_CalcPerpenHeightOfLowestPointFromGround__FP13BO_tNewtonObjP8coorddefT1(struct BO_tNewtonObj *newtonObj /*$a0*/, struct coorddef *normal /*$a1*/, struct coorddef *samplePoint /*$a2*/)
 // line 1079, offset 0x800a0de8
	/* begin block 1 */
		// Start line: 1080
		// Start offset: 0x800A0DE8
		// Variables:
	// 		struct coorddef basisDots; // stack offset -32
	// 		int xDir; // $t5
	// 		int yDir; // $t4
	// 		int zDir; // $t3
	// 		struct coorddef relativePos; // stack offset -16
	// 		int relativeDot; // $v1
	/* end block 1 */
	// End offset: 0x800A1118
	// End Line: 1101

int Newton_CalcPerpenHeightOfLowestPointFromGround__FP13BO_tNewtonObjP8coorddefT1( (BO_tNewtonObj *newtonObj,coorddef *normal,coorddef *samplePoint)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = normal->x;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar1 = (newtonObj->orientMat).m[0];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar7 = normal->y;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (newtonObj->orientMat).m[1];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = normal->z;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (newtonObj->orientMat).m[2];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar6 = (iVar6 >> 8) * (iVar1 >> 8) + (iVar7 >> 8) * (iVar2 >> 8) + (iVar8 >> 8) * (iVar3 >> 8);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar1 = (newtonObj->dimension).x;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar1 = (iVar6 >> 8) * (iVar1 >> 8);
  iVar6 = normal->x;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar7 = (newtonObj->orientMat).m[3];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = normal->y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = (newtonObj->orientMat).m[4];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = normal->z;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = (newtonObj->orientMat).m[5];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar6 = (iVar6 >> 8) * (iVar7 >> 8) + (iVar2 >> 8) * (iVar8 >> 8) + (iVar3 >> 8) * (iVar4 >> 8);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar7 = (newtonObj->dimension).y;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar7 = (iVar6 >> 8) * (iVar7 >> 8);
  iVar6 = normal->x;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar2 = (newtonObj->orientMat).m[6];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = normal->y;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (newtonObj->orientMat).m[7];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = normal->z;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar5 = (newtonObj->orientMat).m[8];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar6 = (iVar6 >> 8) * (iVar2 >> 8) + (iVar8 >> 8) * (iVar3 >> 8) + (iVar4 >> 8) * (iVar5 >> 8);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar2 = (newtonObj->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar2 = (iVar6 >> 8) * (iVar2 >> 8);
  iVar6 = -1;
  if (iVar1 < 0) {
    iVar6 = 1;
  }
  iVar8 = -1;
  if (iVar7 < 0) {
    iVar8 = 1;
  }
  iVar3 = -1;
  if (iVar2 < 0) {
    iVar3 = 1;
  }
  iVar4 = (newtonObj->position).x - samplePoint->x;
  iVar5 = (newtonObj->position).y - samplePoint->y;
  iVar12 = (newtonObj->position).z - samplePoint->z;
  iVar9 = normal->x;
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar10 = normal->y;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar11 = normal->z;
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  if (iVar12 < 0) {
    iVar12 = iVar12 + 0xff;
  }
  return iVar6 * iVar1 + iVar8 * iVar7 + iVar3 * iVar2 +
         (iVar9 >> 8) * (iVar4 >> 8) + (iVar10 >> 8) * (iVar5 >> 8) + (iVar11 >> 8) * (iVar12 >> 8);


}




// decompiled code
// original method signature: 
// int /*$ra*/ Newton_CalcPerpenHeightOfCenterPointFromGround__FP13BO_tNewtonObjP8coorddefT1(struct BO_tNewtonObj *newtonObj /*$s2*/, struct coorddef *normal /*$s1*/, struct coorddef *samplePoint /*$a2*/)
 // line 1110, offset 0x800a116c
	/* begin block 1 */
		// Start line: 1111
		// Start offset: 0x800A116C
		// Variables:
	// 		struct coorddef relativePos; // stack offset -32
	// 		int relativeDot; // $s0
	/* end block 1 */
	// End offset: 0x800A1230
	// End Line: 1119

int Newton_CalcPerpenHeightOfCenterPointFromGround__FP13BO_tNewtonObjP8coorddefT1( (BO_tNewtonObj *newtonObj,coorddef *normal,coorddef *samplePoint)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (newtonObj->position).y;
  iVar4 = samplePoint->y;
  iVar2 = (newtonObj->position).z;
  iVar5 = samplePoint->z;
  iVar3 = fixedmult(normal->x);
  iVar4 = fixedmult(normal->y,iVar1 - iVar4);
  iVar2 = fixedmult(normal->z,iVar2 - iVar5);
  iVar1 = (newtonObj->orientationToGround).y;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 0xb334) {
    iVar1 = (newtonObj->dimension).x;
  }
  else {
    iVar1 = (newtonObj->dimension).y;
  }
  return (iVar3 + iVar4 + iVar2) - iVar1;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_CalcDistToClosestPlayerCar__FP13BO_tNewtonObj(struct BO_tNewtonObj *n /*$s0*/)
 // line 1123, offset 0x800a1248
	/* begin block 1 */
		// Start line: 1124
		// Start offset: 0x800A1248
		// Variables:
	// 		int dist; // $v1
	// 		int x; // $a0
	// 		int z; // $v1
	// 		int whichPlayer; // $a2
	// 		int forcedSimOptz; // $s2

		/* begin block 1.1 */
			// Start line: 1157
			// Start offset: 0x800A13B8

			/* begin block 1.1.1 */
				// Start line: 1173
				// Start offset: 0x800A1420
				// Variables:
			// 		int oldOptz; // $a0

				/* begin block 1.1.1.1 */
					// Start line: 1191
					// Start offset: 0x800A1478

					/* begin block 1.1.1.1.1 */
						// Start line: 1192
						// Start offset: 0x800A1484
						// Variables:
					// 		static struct coorddef dummy; // offset 0x0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A1550
					// End Line: 1216
				/* end block 1.1.1.1 */
				// End offset: 0x800A1550
				// End Line: 1216
			/* end block 1.1.1 */
			// End offset: 0x800A1550
			// End Line: 1216
		/* end block 1.1 */
		// End offset: 0x800A1550
		// End Line: 1216
	/* end block 1 */
	// End offset: 0x800A1550
	// End Line: 1216

void Newton_CalcDistToClosestPlayerCar__FP13BO_tNewtonObj(BO_tNewtonObj *n)
{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar5 = (n->position).x;
  iVar3 = *(int *)((&_Cars_gHumanRaceCarList)[DAT_80113208] + 0xa0);
  iVar4 = iVar5 - iVar3;
  if (iVar4 < 1) {
    iVar4 = iVar3 - iVar5;
  }
  iVar6 = (n->position).z;
  iVar3 = *(int *)((&_Cars_gHumanRaceCarList)[DAT_80113208] + 0xa8);
  iVar5 = iVar6 - iVar3;
  if (iVar5 < 1) {
    iVar5 = iVar3 - iVar6;
  }
  if (iVar5 < iVar4) {
    iVar4 = iVar4 + (iVar5 >> 2);
  }
  else {
    iVar4 = iVar5 + (iVar4 >> 2);
  }
  n->distToPlayer = iVar4;
  if (Cars_gNumHumanRaceCars == 2) {
    iVar5 = (n->position).x;
    iVar4 = *(int *)((&_Cars_gHumanRaceCarList)[1 - DAT_80113208] + 0xa0);
    iVar3 = iVar5 - iVar4;
    if (iVar3 < 1) {
      iVar3 = iVar4 - iVar5;
    }
    iVar6 = (n->position).z;
    iVar4 = *(int *)((&_Cars_gHumanRaceCarList)[1 - DAT_80113208] + 0xa8);
    iVar5 = iVar6 - iVar4;
    if (iVar5 < 1) {
      iVar5 = iVar4 - iVar6;
    }
    if (iVar5 < iVar3) {
      iVar3 = iVar3 + (iVar5 >> 2);
    }
    else {
      iVar3 = iVar5 + (iVar3 >> 2);
    }
    if (iVar3 < n->distToPlayer) {
      iVar7 = 1;
      n->distToPlayer = iVar3;
    }
  }
  if (n->distToPlayer < 0x600001) {
    iVar4 = BWorld_CheckChunkVisible__FP12BWorldSm_PosT0
                      ((BWorldSm_Pos *)((&_Cars_gHumanRaceCarList)[iVar7] + 8),&n->simRoadInfo);
    if ((n->distToPlayer < 0x600001) && (iVar4 != 0)) goto LAB_800a1420;
  }
  if ((n[3].lastUpdated == 0) || (true)) {
    if (n->simOptz != '\x02') {
      n->groundSurfaceType = 1;
      n->driveSurfaceType = 1;
    }
    n->simOptz = '\x02';
    (n->angularVel).x = 0;
    (n->angularVel).z = 0;
    return;
  }
LAB_800a1420:
  bVar1 = n->simOptz;
  if (((n[1].simRoadInfo.quadPts[1].y & 0x30U) != 0) ||
     (((n[3].lastUpdated != 0 && (false)) || (n->distToPlayer < 0x480001)))) {
    n->simOptz = '\0';
  }
  else {
    n->simOptz = '\x01';
  }
  if (1 < bVar1) {
    Cars_SetCarUpForHiRezSim__FP8Car_tObj((Car_tObj *)n);
    Newton_FindClosestQuad__FP13BO_tNewtonObj(n);
    Newton_UpdateRoadGeometry__FP13BO_tNewtonObj(n);
    Newton_LimitCarsToDrivableDist__FP13BO_tNewtonObj(n);
    if (stackSpeedUpEnbabledFlag == 0) {
      iVar4 = Newton_FindGroundElevationAndNormal__FP13BO_tNewtonObjP8coorddef
                        (n,(coorddef *)&dummy_124);
      n->groundElevation = iVar4;
    }
    else {
      gWSavePtr = SetSp(gWSavePtr);
      stackSpeedUpEnbabledFlag = 0;
      iVar4 = Newton_FindGroundElevationAndNormal__FP13BO_tNewtonObjP8coorddef
                        (n,(coorddef *)&dummy_124);
      uVar2 = gWSavePtr;
      n->groundElevation = iVar4;
      gWSavePtr = SetSp(uVar2);
      stackSpeedUpEnbabledFlag = 1;
    }
    iVar4 = n->groundElevation;
    iVar3 = (n->dimension).y;
    n->groundSurfaceType = 1;
    n->driveSurfaceType = 1;
    n->groundVel = 0;
    (n->collision).impulse = 0;
    (n->collision).otherObj = (BO_tNewtonObj *)0x0;
    n->objAltitude = 0;
    (n->position).y = iVar4 + iVar3;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_UpdateRoadInfo__FP13BO_tNewtonObj(struct BO_tNewtonObj *n /*$s0*/)
 // line 1227, offset 0x800a1568
	/* begin block 1 */
		// Start line: 1228
		// Start offset: 0x800A1568
	/* end block 1 */
	// End offset: 0x800A15E4
	// End Line: 1248

void Newton_UpdateRoadInfo__FP13BO_tNewtonObj(BO_tNewtonObj *n)
{
  uint uVar1;
  Trk_NewSimQuad *pTVar2;
  
  if (n->active != '\0') {
    Newton_CalcDistToClosestPlayerCar__FP13BO_tNewtonObj(n);
    Newton_FindClosestQuad__FP13BO_tNewtonObj(n);
    if ((n->simRoadInfo).quadChanged != '\0') {
      Newton_UpdateRoadGeometry__FP13BO_tNewtonObj(n);
    }
    if (n->simOptz == '\0') {
      pTVar2 = (n->simRoadInfo).simQuad;
      uVar1 = 0xe;
      if (pTVar2 != (Trk_NewSimQuad *)0x0) {
        uVar1 = (uint)pTVar2->surface;
      }
      n->groundSurfaceType = uVar1;
      n->driveSurfaceType = uVar1 & 0xf;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_CopyRoadMatrixToOrientMat__FP13BO_tNewtonObji(struct BO_tNewtonObj *n /*$a0*/, int backwards /*$a1*/)
 // line 1264, offset 0x800a15f4
	/* begin block 1 */
		// Start line: 1265
		// Start offset: 0x800A15F4

		/* begin block 1.1 */
			// Start line: 1266
			// Start offset: 0x800A15F4

			/* begin block 1.1.1 */
				// Start line: 1269
				// Start offset: 0x800A1640
				// Variables:
			// 		struct matrixtdef *ori; // $a0
			// 		struct matrixtdef *road; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800A16C0
			// End Line: 1282
		/* end block 1.1 */
		// End offset: 0x800A16C0
		// End Line: 1282
	/* end block 1 */
	// End offset: 0x800A16C0
	// End Line: 1282

void Newton_CopyRoadMatrixToOrientMat__FP13BO_tNewtonObji(BO_tNewtonObj *n,int backwards)
{
  matrixtdef *pmVar1;
  matrixtdef *pmVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (backwards == 0) {
    pmVar2 = &n->orientMat;
    pmVar1 = &n->roadMatrix;
    do {
      iVar3 = pmVar1->m[1];
      iVar4 = pmVar1->m[2];
      iVar5 = pmVar1->m[3];
      pmVar2->m[0] = pmVar1->m[0];
      pmVar2->m[1] = iVar3;
      pmVar2->m[2] = iVar4;
      pmVar2->m[3] = iVar5;
      pmVar1 = (matrixtdef *)(pmVar1->m + 4);
      pmVar2 = (matrixtdef *)(pmVar2->m + 4);
    } while (pmVar1 != (matrixtdef *)((n->roadMatrix).m + 8));
    pmVar2->m[0] = pmVar1->m[0];
    return;
  }
  (n->orientMat).m[0] = -(n->roadMatrix).m[0];
  (n->orientMat).m[1] = -(n->roadMatrix).m[1];
  (n->orientMat).m[2] = -(n->roadMatrix).m[2];
  (n->orientMat).m[3] = (n->roadMatrix).m[3];
  (n->orientMat).m[4] = (n->roadMatrix).m[4];
  (n->orientMat).m[5] = (n->roadMatrix).m[5];
  (n->orientMat).m[6] = -(n->roadMatrix).m[6];
  (n->orientMat).m[7] = -(n->roadMatrix).m[7];
  (n->orientMat).m[8] = -(n->roadMatrix).m[8];
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_CopyRoadMatrixToShadowMat__FP13BO_tNewtonObji(struct BO_tNewtonObj *n /*$a0*/, int backwards /*$a1*/)
 // line 1285, offset 0x800a16c8
	/* begin block 1 */
		// Start line: 1286
		// Start offset: 0x800A16C8

		/* begin block 1.1 */
			// Start line: 1287
			// Start offset: 0x800A16C8

			/* begin block 1.1.1 */
				// Start line: 1290
				// Start offset: 0x800A1714
				// Variables:
			// 		struct matrixtdef *shad; // $a0
			// 		struct matrixtdef *road; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800A1794
			// End Line: 1303
		/* end block 1.1 */
		// End offset: 0x800A1794
		// End Line: 1303
	/* end block 1 */
	// End offset: 0x800A1794
	// End Line: 1303

void Newton_CopyRoadMatrixToShadowMat__FP13BO_tNewtonObji(BO_tNewtonObj *n,int backwards)
{
  matrixtdef *pmVar1;
  matrixtdef *pmVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (backwards == 0) {
    pmVar2 = &n->shadowMat;
    pmVar1 = &n->roadMatrix;
    do {
      iVar3 = pmVar1->m[1];
      iVar4 = pmVar1->m[2];
      iVar5 = pmVar1->m[3];
      pmVar2->m[0] = pmVar1->m[0];
      pmVar2->m[1] = iVar3;
      pmVar2->m[2] = iVar4;
      pmVar2->m[3] = iVar5;
      pmVar1 = (matrixtdef *)(pmVar1->m + 4);
      pmVar2 = (matrixtdef *)(pmVar2->m + 4);
    } while (pmVar1 != (matrixtdef *)((n->roadMatrix).m + 8));
    pmVar2->m[0] = pmVar1->m[0];
    return;
  }
  (n->shadowMat).m[0] = -(n->roadMatrix).m[0];
  (n->shadowMat).m[1] = -(n->roadMatrix).m[1];
  (n->shadowMat).m[2] = -(n->roadMatrix).m[2];
  (n->shadowMat).m[3] = (n->roadMatrix).m[3];
  (n->shadowMat).m[4] = (n->roadMatrix).m[4];
  (n->shadowMat).m[5] = (n->roadMatrix).m[5];
  (n->shadowMat).m[6] = -(n->roadMatrix).m[6];
  (n->shadowMat).m[7] = -(n->roadMatrix).m[7];
  (n->shadowMat).m[8] = -(n->roadMatrix).m[8];
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi(struct BO_tNewtonObj *n /*$s4*/, int slice /*$s6*/, struct coorddef *offset /*$s2*/, int direction /*$a3*/)
 // line 1307, offset 0x800a179c
	/* begin block 1 */
		// Start line: 1308
		// Start offset: 0x800A179C
		// Variables:
	// 		struct coorddef rOffset; // stack offset -104
	// 		struct matrixtdef transposeMat; // stack offset -88
	// 		int backwards; // $s5

		/* begin block 1.1 */
			// Start line: 1358
			// Start offset: 0x800A19D0

			/* begin block 1.1.1 */
				// Start line: 1371
				// Start offset: 0x800A1A2C

				/* begin block 1.1.1.1 */
					// Start line: 1371
					// Start offset: 0x800A1A2C

					/* begin block 1.1.1.1.1 */
						// Start line: 1372
						// Start offset: 0x800A1A34
						// Variables:
					// 		int i; // $a2
					// 		int quadCenterY; // $a0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1375
							// Start offset: 0x800A1A34

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1377
								// Start offset: 0x800A1A3C
								// Variables:
							// 		struct coorddef temp; // stack offset -48
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800A1AA4
							// End Line: 1381
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800A1AB8
						// End Line: 1382
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A1AC4
					// End Line: 1383

					/* begin block 1.1.1.1.2 */
						// Start line: 1388
						// Start offset: 0x800A1AD0
						// Variables:
					// 		static struct coorddef dummy; // offset 0x10
					/* end block 1.1.1.1.2 */
					// End offset: 0x800A1B60
					// End Line: 1401
				/* end block 1.1.1.1 */
				// End offset: 0x800A1B60
				// End Line: 1401
			/* end block 1.1.1 */
			// End offset: 0x800A1B60
			// End Line: 1401
		/* end block 1.1 */
		// End offset: 0x800A1B60
		// End Line: 1401
	/* end block 1 */
	// End offset: 0x800A1BB0
	// End Line: 1416

void Newton_SetInitialSlicePositionOrientationEtc__FP13BO_tNewtonObjiP8coorddefi( (BO_tNewtonObj *n,int slice,coorddef *offset,int direction)
{
  uchar uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  Trk_NewSimQuad *pTVar13;
  BO_tNewtonObj *pBVar14;
  int *piVar15;
  uint backwards;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  backwards = (uint)(direction != 1);
  BWorldSm_SetSlice__FiP12BWorldSm_Pos(slice,&n->simRoadInfo);
  piVar15 = (int *)(slice * 0x20);
  n->totalSlice = (ushort)slice;
  (n->roadMatrix).m[0] = (int)*(char *)((int)piVar15 + 0x12) << 9;
  (n->roadMatrix).m[1] = (int)*(char *)((int)piVar15 + 0x13) << 9;
  (n->roadMatrix).m[2] = (int)*(char *)(piVar15 + 5) << 9;
  (n->roadMatrix).m[3] = (int)*(char *)(piVar15 + 3) << 9;
  (n->roadMatrix).m[4] = (int)*(char *)((int)piVar15 + 0xd) << 9;
  (n->roadMatrix).m[5] = (int)*(char *)((int)piVar15 + 0xe) << 9;
  (n->roadMatrix).m[6] = (int)*(char *)((int)piVar15 + 0xf) << 9;
  (n->roadMatrix).m[7] = (int)*(char *)(piVar15 + 4) << 9;
  (n->roadMatrix).m[8] = (int)*(char *)((int)piVar15 + 0x11) << 9;
  Math_NormalizeShortVector__FP8coorddef((coorddef *)&n->roadMatrix);
  Math_NormalizeShortVector__FP8coorddef((coorddef *)((n->roadMatrix).m + 3));
  Math_NormalizeShortVector__FP8coorddef((coorddef *)((n->roadMatrix).m + 6));
  transpose(&n->roadMatrix,&local_58);
  Newton_CopyRoadMatrixToOrientMat__FP13BO_tNewtonObji(n,backwards);
  Newton_CopyRoadMatrixToShadowMat__FP13BO_tNewtonObji(n,backwards);
  iVar3 = fixedmult(offset->x,local_58);
  iVar4 = fixedmult(offset->y,local_54);
  iVar5 = fixedmult(offset->z,local_50);
  iVar6 = fixedmult(offset->x,local_4c);
  iVar7 = fixedmult(offset->y,local_48);
  iVar8 = fixedmult(offset->z,local_44);
  iVar9 = fixedmult(offset->x,local_40);
  iVar10 = fixedmult(offset->y,local_3c);
  iVar11 = fixedmult(offset->z,local_38);
  (n->position).x = iVar3 + iVar4 + iVar5 + *piVar15;
  (n->position).y = iVar6 + iVar7 + iVar8 + piVar15[1];
  uVar12 = n[1].simRoadInfo.quadPts[1].y;
  (n->position).z = iVar9 + iVar10 + iVar11 + piVar15[2];
  if ((uVar12 & 4) == 0) {
    n->simOptz = '\x02';
  }
  else {
    n->simOptz = '\0';
  }
  Newton_FindClosestQuad__FP13BO_tNewtonObj(n);
  Newton_UpdateRoadInfo__FP13BO_tNewtonObj(n);
  Newton_UpdateRoadGeometry__FP13BO_tNewtonObj(n);
  Newton_CopyRoadMatrixToOrientMat__FP13BO_tNewtonObji(n,backwards);
  Newton_CopyRoadMatrixToShadowMat__FP13BO_tNewtonObji(n,backwards);
  if (n->simOptz == '\x02') {
    n->groundElevation = *(int *)(slice * 0x20 + 4);
  }
  else {
    iVar3 = 0;
    if (n->simOptz == '\x01') {
      iVar4 = 0;
      pBVar14 = n;
      while (iVar4 < 4) {
        if ((n->simRoadInfo).simQuad == (Trk_NewSimQuad *)0x0) {
          piVar15 = (int *)((int)(n->simRoadInfo).slice * 0x20);
          local_30 = *piVar15;
          local_2c = piVar15[1];
          local_28 = piVar15[2];
        }
        else {
          local_30 = (pBVar14->simRoadInfo).quadPts[0].x;
          local_2c = (pBVar14->simRoadInfo).quadPts[0].y;
          local_28 = (pBVar14->simRoadInfo).quadPts[0].z;
        }
        pBVar14 = (BO_tNewtonObj *)&(pBVar14->simRoadInfo).simRotFlag;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + local_2c;
      }
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      n->groundElevation = iVar3 >> 2;
    }
    else {
      if (stackSpeedUpEnbabledFlag == 0) {
        iVar3 = Newton_FindGroundElevationAndNormal__FP13BO_tNewtonObjP8coorddef
                          (n,(coorddef *)&dummy_133);
        n->groundElevation = iVar3;
      }
      else {
        gWSavePtr = SetSp(gWSavePtr);
        stackSpeedUpEnbabledFlag = 0;
        iVar3 = Newton_FindGroundElevationAndNormal__FP13BO_tNewtonObjP8coorddef
                          (n,(coorddef *)&dummy_133);
        uVar2 = gWSavePtr;
        n->groundElevation = iVar3;
        gWSavePtr = SetSp(uVar2);
        stackSpeedUpEnbabledFlag = 1;
      }
      (n->position).y = n->groundElevation + (n->dimension).y;
    }
  }
  iVar3 = Newton_CalcPerpenHeightOfLowestPointFromGround__FP13BO_tNewtonObjP8coorddefT1
                    (n,(coorddef *)((n->roadMatrix).m + 3),&n->roadCenterPoint);
  iVar4 = (n->position).y;
  uVar1 = n->simOptz;
  n->objAltitude = iVar3;
  n->objAltitude = 0;
  (n->position).y = iVar4 - iVar3;
  if (uVar1 == '\0') {
    pTVar13 = (n->simRoadInfo).simQuad;
    iVar3 = 0xe;
    if (pTVar13 != (Trk_NewSimQuad *)0x0) {
      n->groundSurfaceType = (uint)pTVar13->surface;
      goto LAB_800a1bb0;
    }
  }
  else {
    iVar3 = 1;
  }
  n->groundSurfaceType = iVar3;
LAB_800a1bb0:
  n->driveSurfaceType = n->groundSurfaceType & 0xf;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_InitBaseNewtonObj__FP13BO_tNewtonObjiiiiii(struct BO_tNewtonObj *newtonObj /*$s0*/, int index /*$a1*/, int mass /*$a2*/, int moInertia /*$a3*/, int dimX /*stack 16*/, int dimY /*stack 20*/, int dimZ /*stack 24*/)
 // line 1420, offset 0x800a1be8
	/* begin block 1 */
		// Start line: 1421
		// Start offset: 0x800A1BE8

		/* begin block 1.1 */
			// Start line: 1479
			// Start offset: 0x800A1DC4
			// Variables:
		// 		int i; // $a0
		/* end block 1.1 */
		// End offset: 0x800A1E34
		// End Line: 1505
	/* end block 1 */
	// End offset: 0x800A1E34
	// End Line: 1510

void Newton_InitBaseNewtonObj__FP13BO_tNewtonObjiiiiii( (BO_tNewtonObj *newtonObj,int index,int mass,int moInertia,int dimX,int dimY,int dimZ )
{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  newtonObj->objID = index;
  (newtonObj->simRoadInfo).simSlice = (Trk_NewSimSlice *)0x0;
  newtonObj->simOptz = '\0';
  (newtonObj->position).x = 0;
  (newtonObj->position).y = 0;
  (newtonObj->position).z = 0;
  (newtonObj->linearVel).x = 0;
  (newtonObj->linearVel).y = 0;
  (newtonObj->linearVel).z = 0;
  newtonObj->mass = mass;
  if (((DAT_80113224 & 2) != 0) && ((newtonObj[1].simRoadInfo.quadPts[1].y & 4U) != 0)) {
    newtonObj->mass = mass * 5;
  }
  if ((newtonObj[1].simRoadInfo.quadPts[1].y & 0x20U) != 0) {
    if ((DAT_801131f8 == 1) && ((*piRam00000288 < 0x16 || (*piRam00000288 < 0x16)))) {
      newtonObj->mass = newtonObj->mass << 1;
    }
    else {
      uVar1 = newtonObj->mass * 3;
      newtonObj->mass = (int)(uVar1 + (uVar1 >> 0x1f)) >> 1;
    }
  }
  iVar2 = fixeddiv(0x10000,newtonObj->mass);
  newtonObj->massInv = iVar2;
  newtonObj->moInertia = newtonObj->mass << 3;
  iVar2 = fixeddiv(0x10000);
  newtonObj->moInertiaInv = iVar2;
  (newtonObj->angularVel).x = 0;
  (newtonObj->angularVel).y = 0;
  (newtonObj->angularVel).z = 0;
  (newtonObj->orientationToGround).x = 0;
  (newtonObj->orientationToGround).y = 0x10000;
  (newtonObj->orientationToGround).z = 0;
  (newtonObj->dimension).x = dimX;
  (newtonObj->dimension).y = dimY;
  (newtonObj->dimension).z = dimZ;
  if (dimX < 0) {
    dimX = dimX + 0xff;
  }
  if (dimY < 0) {
    dimY = dimY + 0xff;
  }
  iVar2 = fixedsqrt((dimX >> 8) * (dimX >> 8) + (dimY >> 8) * (dimY >> 8));
  newtonObj->dimensionRadius = iVar2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  if (dimZ < 0) {
    dimZ = dimZ + 0xff;
  }
  iVar2 = fixedsqrt((iVar2 >> 8) * (iVar2 >> 8) + (dimZ >> 8) * (dimZ >> 8));
  iVar4 = 9;
  piVar3 = &(newtonObj->simRoadInfo).quadPts[1].z;
  newtonObj->dimensionRadius = iVar2;
  newtonObj->flightTime = 0;
  newtonObj->groundSurfaceType = 1;
  newtonObj->driveSurfaceType = 1;
  newtonObj->groundVel = 0;
  newtonObj->objAltitude = 0;
  newtonObj->gravityMult = 0x10000;
  newtonObj->xRelRoadCenter = 0;
  newtonObj->roadGravityModifier = 0;
  (newtonObj->collision).collided = 0;
  (newtonObj->collision).impulse = 0;
  (newtonObj->collision).otherObj = (BO_tNewtonObj *)0x0;
  (newtonObj->collision).sfxType = 0;
  (newtonObj->collision).disableCollisionTimer = 0;
  (newtonObj->collision).lastOtherObj = (BO_tNewtonObj *)0x0;
  (newtonObj->collision).lastImpulse = 0;
  (newtonObj->collision).lastTime = 0;
  do {
    piVar3[0x86] = 0;
    iVar4 = iVar4 + -1;
    piVar3 = piVar3 + -1;
  } while (-1 < iVar4);
  newtonObj->reOrthoCounter = '\0';
  newtonObj->deadTimer = 0;
  newtonObj->active = '\x01';
  newtonObj->cumulatedRot = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_QDUpdateVel__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj /*$s2*/)
 // line 1516, offset 0x800a1e68
	/* begin block 1 */
		// Start line: 1517
		// Start offset: 0x800A1E68

		/* begin block 1.1 */
			// Start line: 1535
			// Start offset: 0x800A1E90

			/* begin block 1.1.1 */
				// Start line: 1536
				// Start offset: 0x800A1EA4
				// Variables:
			// 		int t1; // $s0
			// 		int t2; // $s1
			// 		int t3; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800A1EA4
			// End Line: 1537
		/* end block 1.1 */
		// End offset: 0x800A1F34
		// End Line: 1553
	/* end block 1 */
	// End offset: 0x800A1F34
	// End Line: 1553

void Newton_QDUpdateVel__FP13BO_tNewtonObj(BO_tNewtonObj *newtonObj)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (newtonObj->active != '\0') {
    if ((DAT_80113224 & 4) == 0) {
      iVar1 = (newtonObj->linearVel).y;
      (newtonObj->position).x = (newtonObj->position).x + ((newtonObj->linearVel).x >> 6);
      iVar2 = (newtonObj->linearVel).z;
      (newtonObj->position).y = (newtonObj->position).y + (iVar1 >> 6);
      (newtonObj->position).z = (newtonObj->position).z + (iVar2 >> 6);
    }
    else {
      iVar3 = (newtonObj->linearVel).y;
      iVar2 = (newtonObj->linearVel).z;
      iVar1 = fixedmult((newtonObj->linearVel).x >> 6,0xcccc);
      iVar2 = fixedmult(iVar2 >> 6,0xcccc);
      (newtonObj->position).x = (newtonObj->position).x + iVar1;
      (newtonObj->position).z = (newtonObj->position).z + iVar2;
      (newtonObj->position).y = (newtonObj->position).y + (iVar3 >> 6);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Newton_OptzRotxform__FP10matrixtdefiiiPiiT4(struct matrixtdef *m /*$s6*/, int ax /*$s4*/, int ay /*$a1*/, int az /*$s5*/, int *reOrthoNeeded /*stack 16*/, int reOrthoLimit /*stack 20*/, int *cumulatedRot /*stack 24*/)
 // line 1569, offset 0x800a1f4c
	/* begin block 1 */
		// Start line: 1570
		// Start offset: 0x800A1F4C
		// Variables:
	// 		struct matrixtdef mx; // stack offset -192
	// 		struct matrixtdef my; // stack offset -152
	// 		struct matrixtdef mz; // stack offset -112
	// 		struct matrixtdef mt; // stack offset -72
	// 		int changed; // $s0
	// 		int absx; // $s1
	// 		int absy; // $s0
	// 		int absz; // $s3
	/* end block 1 */
	// End offset: 0x800A20BC
	// End Line: 1618

int Newton_OptzRotxform__FP10matrixtdefiiiPiiT4( (matrixtdef *m,int ax,int ay,int az,int *reOrthoNeeded,int reOrthoLimit, int *cumulatedRot)
{
  matrixtdef *pmVar1;
  matrixtdef *m2;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  matrixtdef mStack192;
  undefined local_98 [32];
  undefined auStack120 [8];
  undefined auStack112 [40];
  matrixtdef local_48;
  
  m2 = (matrixtdef *)local_98;
  iVar2 = ax;
  if (ax < 0) {
    iVar2 = -ax;
  }
  if (ay < 0) {
    ay = -ay;
  }
  iVar3 = az;
  if (az < 0) {
    iVar3 = -az;
  }
  *reOrthoNeeded = 0;
  *cumulatedRot = *cumulatedRot + iVar2 + ay + iVar3;
  fixedxformy(m2);
  uVar6 = (uint)(ay < 0x14) ^ 1;
  if (iVar2 < 0xe) {
    pmVar1 = &local_48;
    do {
      iVar2 = m2->m[1];
      iVar5 = m2->m[2];
      iVar4 = m2->m[3];
      pmVar1->m[0] = m2->m[0];
      pmVar1->m[1] = iVar2;
      pmVar1->m[2] = iVar5;
      pmVar1->m[3] = iVar4;
      m2 = (matrixtdef *)(m2->m + 4);
      pmVar1 = (matrixtdef *)(pmVar1->m + 4);
    } while (m2 != (matrixtdef *)(local_98 + 0x20));
    pmVar1->m[0] = m2->m[0];
  }
  else {
    fixedxformx(&mStack192,ax);
    Math_fasttransmult__FP10matrixtdefN20(&mStack192,m2,&local_48);
    uVar6 = 1;
  }
  if (iVar3 < 0xe) {
    m2 = &local_48;
    do {
      iVar2 = m2->m[1];
      iVar3 = m2->m[2];
      iVar5 = m2->m[3];
      m->m[0] = m2->m[0];
      m->m[1] = iVar2;
      m->m[2] = iVar3;
      m->m[3] = iVar5;
      m2 = (matrixtdef *)(m2->m + 4);
      m = (matrixtdef *)(m->m + 4);
    } while (m2 != (matrixtdef *)(local_48.m + 8));
    m->m[0] = m2->m[0];
  }
  else {
    fixedxformz((matrixtdef *)(local_98 + 0x28),az);
    Math_fasttransmult__FP10matrixtdefN20(&local_48,(matrixtdef *)(local_98 + 0x28),m);
    uVar6 = 1;
  }
  return uVar6;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_QDUpdateRot64Hz__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj /*$s1*/)
 // line 1621, offset 0x800a20e8
	/* begin block 1 */
		// Start line: 1622
		// Start offset: 0x800A20E8
		// Variables:
	// 		struct matrixtdef m; // stack offset -80
	// 		int reOrthoNeeded; // stack offset -24
	// 		struct coorddef angularVel; // stack offset -40
	/* end block 1 */
	// End offset: 0x800A21E4
	// End Line: 1662

void Newton_QDUpdateRot64Hz__FP13BO_tNewtonObj(BO_tNewtonObj *newtonObj)
{
  uchar uVar1;
  int iVar2;
  matrixtdef *m1;
  matrixtdef mStack80;
  int local_28;
  int local_24;
  int local_20;
  int local_18 [2];
  
  if (newtonObj->active != '\0') {
    local_28 = (newtonObj->angularVel).x;
    if (local_28 < 0) {
      local_28 = local_28 + 0x3f;
    }
    local_28 = local_28 >> 6;
    local_24 = (newtonObj->angularVel).y;
    if (local_24 < 0) {
      local_24 = local_24 + 0x3f;
    }
    local_24 = local_24 >> 6;
    local_20 = (newtonObj->angularVel).z;
    if (local_20 < 0) {
      local_20 = local_20 + 0x3f;
    }
    local_20 = local_20 >> 6;
    iVar2 = Newton_OptzRotxform__FP10matrixtdefiiiPiiT4
                      (&mStack80,local_28,local_24,local_20,local_18,0x1000,&newtonObj->cumulatedRot
                      );
    m1 = &newtonObj->orientMat;
    if (iVar2 != 0) {
      Math_fasttransmult__FP10matrixtdefN20(m1,&mStack80,m1);
      uVar1 = newtonObj->reOrthoCounter + -1;
      newtonObj->reOrthoCounter = uVar1;
      if ((uVar1 == '\0') || (local_18[0] != 0)) {
        reorthogonalize(m1);
        newtonObj->reOrthoCounter = ' ';
        newtonObj->cumulatedRot = 0;
      }
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_QDUpdateRot32Hz__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj /*$s1*/)
 // line 1670, offset 0x800a21f8
	/* begin block 1 */
		// Start line: 1671
		// Start offset: 0x800A21F8
		// Variables:
	// 		struct matrixtdef m; // stack offset -80
	// 		int reOrthoNeeded; // stack offset -24
	// 		struct coorddef angularVel; // stack offset -40
	/* end block 1 */
	// End offset: 0x800A2304
	// End Line: 1718

void Newton_QDUpdateRot32Hz__FP13BO_tNewtonObj(BO_tNewtonObj *newtonObj)
{
  uchar uVar1;
  int iVar2;
  matrixtdef *m1;
  matrixtdef mStack80;
  int local_28;
  int local_24;
  int local_20;
  int local_18 [2];
  
  if ((newtonObj->active != '\0') && (newtonObj->simOptz == '\0')) {
    local_28 = (newtonObj->angularVel).x;
    if (local_28 < 0) {
      local_28 = local_28 + 0xf;
    }
    local_28 = local_28 >> 4;
    local_24 = (newtonObj->angularVel).y;
    if (local_24 < 0) {
      local_24 = local_24 + 0xf;
    }
    local_24 = local_24 >> 4;
    local_20 = (newtonObj->angularVel).z;
    if (local_20 < 0) {
      local_20 = local_20 + 0xf;
    }
    local_20 = local_20 >> 4;
    iVar2 = Newton_OptzRotxform__FP10matrixtdefiiiPiiT4
                      (&mStack80,local_28,local_24,local_20,local_18,0x2000,&newtonObj->cumulatedRot
                      );
    m1 = &newtonObj->orientMat;
    if ((iVar2 != 0) &&
       ((Math_fasttransmult__FP10matrixtdefN20(m1,&mStack80,m1), local_18[0] != 0 ||
        (uVar1 = newtonObj->reOrthoCounter + -1, newtonObj->reOrthoCounter = uVar1, uVar1 == '\0')))
       ) {
      reorthogonalize(m1);
      newtonObj->reOrthoCounter = '@';
      newtonObj->cumulatedRot = 0;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_CalculateGroundShadowMatrix__FP13BO_tNewtonObjP8coorddefi(struct BO_tNewtonObj *newtonObj /*$s1*/, struct coorddef *normal /*$a1*/, int orientToGround /*$a2*/)
 // line 1730, offset 0x800a2318
	/* begin block 1 */
		// Start line: 1731
		// Start offset: 0x800A2318

		/* begin block 1.1 */
			// Start line: 1731
			// Start offset: 0x800A2318

			/* begin block 1.1.1 */
				// Start line: 1739
				// Start offset: 0x800A234C

				/* begin block 1.1.1.1 */
					// Start line: 1740
					// Start offset: 0x800A2380
					// Variables:
				// 		int r1; // $v0
				// 		int r2; // $v1
				// 		int r3; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x800A2380
				// End Line: 1740
			/* end block 1.1.1 */
			// End offset: 0x800A2380
			// End Line: 1740

			/* begin block 1.1.2 */
				// Start line: 1752
				// Start offset: 0x800A23A8

				/* begin block 1.1.2.1 */
					// Start line: 1756
					// Start offset: 0x800A23A8
					// Variables:
				// 		int r1; // $v0
				// 		int r2; // $v1
				// 		int r3; // $a0
				/* end block 1.1.2.1 */
				// End offset: 0x800A23A8
				// End Line: 1757
			/* end block 1.1.2 */
			// End offset: 0x800A2678
			// End Line: 1806
		/* end block 1.1 */
		// End offset: 0x800A2678
		// End Line: 1806
	/* end block 1 */
	// End offset: 0x800A2678
	// End Line: 1806

void Newton_CalculateGroundShadowMatrix__FP13BO_tNewtonObjP8coorddefi( (BO_tNewtonObj *newtonObj,coorddef *normal,int orientToGround)
{
  matrixtdef *pmVar1;
  int iVar2;
  int iVar3;
  matrixtdef *v;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  if (((newtonObj[1].simRoadInfo.quadPts[1].y & 4U) == 0) &&
     (v = &newtonObj->shadowMat, 0xe666 < orientToGround)) {
    pmVar1 = &newtonObj->orientMat;
    do {
      iVar5 = pmVar1->m[1];
      iVar6 = pmVar1->m[2];
      iVar7 = pmVar1->m[3];
      v->m[0] = pmVar1->m[0];
      v->m[1] = iVar5;
      v->m[2] = iVar6;
      v->m[3] = iVar7;
      pmVar1 = (matrixtdef *)(pmVar1->m + 4);
      v = (matrixtdef *)(v->m + 4);
    } while (pmVar1 != (matrixtdef *)((newtonObj->orientMat).m + 8));
    v->m[0] = pmVar1->m[0];
    iVar5 = normal->y;
    iVar6 = normal->z;
    (newtonObj->shadowMat).m[3] = normal->x;
    (newtonObj->shadowMat).m[4] = iVar5;
    (newtonObj->shadowMat).m[5] = iVar6;
    return;
  }
  iVar5 = normal->y;
  iVar6 = normal->z;
  (newtonObj->shadowMat).m[3] = normal->x;
  (newtonObj->shadowMat).m[4] = iVar5;
  (newtonObj->shadowMat).m[5] = iVar6;
  if (orientToGround < 0x8000) {
    iVar5 = (newtonObj->orientMat).m[0];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar6 = normal->x;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar7 = (newtonObj->orientMat).m[1];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar2 = normal->y;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar4 = (newtonObj->orientMat).m[2];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar3 = normal->z;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar5 = (iVar5 >> 8) * (iVar6 >> 8) + (iVar7 >> 8) * (iVar2 >> 8) + (iVar4 >> 8) * (iVar3 >> 8);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    uVar8 = __floatsidf(iVar5);
    iVar5 = __gtdf2((int)((ulonglong)uVar8 >> 0x20),(int)uVar8,0,0x3fe00000);
    if (0 < iVar5) {
      iVar5 = fixedmult((newtonObj->shadowMat).m[4],(newtonObj->orientMat).m[8]);
      iVar6 = fixedmult((newtonObj->shadowMat).m[5],(newtonObj->orientMat).m[7]);
      iVar7 = (newtonObj->shadowMat).m[5];
      iVar2 = (newtonObj->orientMat).m[6];
      (newtonObj->shadowMat).m[0] = iVar5 - iVar6;
      iVar5 = fixedmult(iVar7,iVar2);
      iVar6 = fixedmult((newtonObj->shadowMat).m[3],(newtonObj->orientMat).m[8]);
      iVar7 = (newtonObj->shadowMat).m[3];
      iVar2 = (newtonObj->orientMat).m[7];
      (newtonObj->shadowMat).m[1] = iVar5 - iVar6;
      iVar5 = fixedmult(iVar7,iVar2);
      iVar6 = fixedmult((newtonObj->shadowMat).m[4],(newtonObj->orientMat).m[6]);
      (newtonObj->shadowMat).m[2] = iVar5 - iVar6;
      Math_NormalizeShortVector__FP8coorddef((coorddef *)&newtonObj->shadowMat);
      iVar5 = fixedmult((newtonObj->shadowMat).m[1],(newtonObj->shadowMat).m[5]);
      iVar6 = fixedmult((newtonObj->shadowMat).m[2],(newtonObj->shadowMat).m[4]);
      iVar7 = (newtonObj->shadowMat).m[2];
      iVar2 = (newtonObj->shadowMat).m[3];
      (newtonObj->shadowMat).m[6] = iVar5 - iVar6;
      iVar5 = fixedmult(iVar7,iVar2);
      iVar6 = fixedmult((newtonObj->shadowMat).m[0],(newtonObj->shadowMat).m[5]);
      iVar7 = (newtonObj->shadowMat).m[0];
      iVar2 = (newtonObj->shadowMat).m[4];
      (newtonObj->shadowMat).m[7] = iVar5 - iVar6;
      iVar5 = fixedmult(iVar7,iVar2);
      iVar6 = fixedmult((newtonObj->shadowMat).m[1],(newtonObj->shadowMat).m[3]);
      v = (matrixtdef *)((newtonObj->shadowMat).m + 6);
      (newtonObj->shadowMat).m[8] = iVar5 - iVar6;
      goto LAB_800a2670;
    }
  }
  iVar5 = fixedmult((newtonObj->orientMat).m[1],(newtonObj->shadowMat).m[5]);
  iVar6 = fixedmult((newtonObj->orientMat).m[2],(newtonObj->shadowMat).m[4]);
  iVar7 = (newtonObj->orientMat).m[2];
  iVar2 = (newtonObj->shadowMat).m[3];
  (newtonObj->shadowMat).m[6] = iVar5 - iVar6;
  iVar5 = fixedmult(iVar7,iVar2);
  iVar6 = fixedmult((newtonObj->orientMat).m[0],(newtonObj->shadowMat).m[5]);
  iVar7 = (newtonObj->orientMat).m[0];
  iVar2 = (newtonObj->shadowMat).m[4];
  (newtonObj->shadowMat).m[7] = iVar5 - iVar6;
  iVar5 = fixedmult(iVar7,iVar2);
  iVar6 = fixedmult((newtonObj->orientMat).m[1],(newtonObj->shadowMat).m[3]);
  (newtonObj->shadowMat).m[8] = iVar5 - iVar6;
  Math_NormalizeShortVector__FP8coorddef((coorddef *)((newtonObj->shadowMat).m + 6));
  iVar5 = fixedmult((newtonObj->shadowMat).m[4],(newtonObj->shadowMat).m[8]);
  iVar6 = fixedmult((newtonObj->shadowMat).m[5],(newtonObj->shadowMat).m[7]);
  iVar7 = (newtonObj->shadowMat).m[5];
  iVar2 = (newtonObj->shadowMat).m[6];
  (newtonObj->shadowMat).m[0] = iVar5 - iVar6;
  iVar5 = fixedmult(iVar7,iVar2);
  iVar6 = fixedmult((newtonObj->shadowMat).m[3],(newtonObj->shadowMat).m[8]);
  iVar7 = (newtonObj->shadowMat).m[3];
  iVar2 = (newtonObj->shadowMat).m[7];
  (newtonObj->shadowMat).m[1] = iVar5 - iVar6;
  iVar5 = fixedmult(iVar7,iVar2);
  iVar6 = fixedmult((newtonObj->shadowMat).m[4],(newtonObj->shadowMat).m[6]);
  v = &newtonObj->shadowMat;
  (newtonObj->shadowMat).m[2] = iVar5 - iVar6;
LAB_800a2670:
  Math_NormalizeShortVector__FP8coorddef((coorddef *)v);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_CalcRealShadowCoordinates__FP8Car_tObji(struct Car_tObj *carObj /*$s1*/, int currentTick /*$a1*/)
 // line 1830, offset 0x800a268c
	/* begin block 1 */
		// Start line: 1831
		// Start offset: 0x800A268C
		// Variables:
	// 		struct coorddef lengthVector; // stack offset -128
	// 		struct coorddef widthVector; // stack offset -112
	// 		struct coorddef frontWidthVector; // stack offset -96
	// 		struct coorddef carGroundCoord; // stack offset -80
	// 		struct coorddef temp; // stack offset -64
	// 		struct coorddef vecOffset; // stack offset -48
	// 		int diff; // $s2
	// 		struct coorddef dimension; // stack offset -32

		/* begin block 1.1 */
			// Start line: 1831
			// Start offset: 0x800A268C

			/* begin block 1.1.1 */
				// Start line: 1847
				// Start offset: 0x800A2764
				// Variables:
			// 		int front; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800A2764
			// End Line: 1848
		/* end block 1.1 */
		// End offset: 0x800A27C0
		// End Line: 1852

		/* begin block 1.2 */
			// Start line: 1866
			// Start offset: 0x800A2888
			// Variables:
		// 		int i; // $a2
		/* end block 1.2 */
		// End offset: 0x800A2A14
		// End Line: 1881
	/* end block 1 */
	// End offset: 0x800A2A14
	// End Line: 1881

void Newton_CalcRealShadowCoordinates__FP8Car_tObji(Car_tObj *carObj,int currentTick)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Car_tObj *pCVar9;
  Car_tObj *pCVar10;
  int iVar11;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  
  iVar7 = (carObj->N).lastUpdated;
  iVar11 = (carObj->N).dimension.y;
  iVar1 = (carObj->N).dimension.x + 0xccc;
  iVar8 = (carObj->N).dimension.z + 0xccc;
  iVar2 = fixedmult(iVar8,(carObj->N).orientMat.m[6]);
  iVar3 = fixedmult(iVar8,(carObj->N).orientMat.m[7]);
  iVar8 = fixedmult(iVar8,(carObj->N).orientMat.m[8]);
  iVar4 = fixedmult(iVar1,(carObj->N).orientMat.m[0]);
  iVar5 = fixedmult(iVar1,(carObj->N).orientMat.m[1]);
  iVar6 = fixedmult(iVar1,(carObj->N).orientMat.m[2]);
  local_60 = iVar4;
  local_5c = iVar5;
  local_58 = iVar6;
  if ((carObj->render).palCopyNum[0xd] == 0x14) {
    iVar1 = iVar1 * 0xc0 >> 8;
    local_60 = fixedmult(iVar1,(carObj->N).orientMat.m[0]);
    local_5c = fixedmult(iVar1,(carObj->N).orientMat.m[1]);
    local_58 = fixedmult(iVar1,(carObj->N).orientMat.m[2]);
  }
  if ((carObj->N).orientationToGround.y < 0xe667) {
    local_50 = (carObj->N).position.x;
    local_48 = (carObj->N).position.z;
    local_4c = (carObj->N).groundElevation;
  }
  else {
    local_50 = fixedmult(-(carObj->N).objAltitude - iVar11,(carObj->N).roadMatrix.m[3]);
    local_4c = fixedmult(-(carObj->N).objAltitude - iVar11,(carObj->N).roadMatrix.m[4]);
    local_48 = fixedmult(-(carObj->N).objAltitude - iVar11,(carObj->N).roadMatrix.m[5]);
    local_50 = (carObj->N).position.x + local_50;
    local_4c = (carObj->N).position.y + local_4c;
    local_48 = (carObj->N).position.z + local_48;
  }
  (carObj->N).shadowCoord[0].x = (local_50 + iVar2) - local_60;
  (carObj->N).shadowCoord[0].y = (local_4c + iVar3) - local_5c;
  (carObj->N).shadowCoord[0].z = (local_48 + iVar8) - local_58;
  (carObj->N).shadowCoord[1].x = local_50 + iVar2 + local_60;
  (carObj->N).shadowCoord[1].y = local_4c + iVar3 + local_5c;
  (carObj->N).shadowCoord[1].z = local_48 + iVar8 + local_58;
  (carObj->N).shadowCoord[2].x = (local_50 - iVar2) - iVar4;
  (carObj->N).shadowCoord[2].y = (local_4c - iVar3) - iVar5;
  (carObj->N).shadowCoord[2].z = (local_48 - iVar8) - iVar6;
  iVar1 = 0;
  (carObj->N).shadowCoord[3].x = (local_50 - iVar2) + iVar4;
  (carObj->N).shadowCoord[3].y = (local_4c - iVar3) + iVar5;
  (carObj->N).shadowCoord[3].z = (local_48 - iVar8) + iVar6;
  pCVar9 = carObj;
  pCVar10 = carObj;
  do {
    iVar3 = pCVar10->wheel[0].currentPos.y;
    (pCVar9->N).shadowCoord[0].y = iVar3;
    iVar2 = (carObj->N).linearVel.y;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x3f;
    }
    pCVar10 = (Car_tObj *)&(pCVar10->N).simRoadInfo.quadPts[2].z;
    iVar1 = iVar1 + 1;
    (pCVar9->N).shadowCoord[0].y = iVar3 + (iVar2 >> 6) * (currentTick - iVar7);
    pCVar9 = (Car_tObj *)&(pCVar9->N).simRoadInfo.simRotFlag;
  } while (iVar1 < 4);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_CheckForSpikeBelts__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj /*$a1*/)
 // line 1885, offset 0x800a2a2c
	/* begin block 1 */
		// Start line: 1886
		// Start offset: 0x800A2A2C
		// Variables:
	// 		int slice; // stack offset -16
	// 		int leftLatPos; // stack offset -12
	// 		int rightLatPos; // stack offset -8

		/* begin block 1.1 */
			// Start line: 1886
			// Start offset: 0x800A2A2C

			/* begin block 1.1.1 */
				// Start line: 1886
				// Start offset: 0x800A2A2C

				/* begin block 1.1.1.1 */
					// Start line: 1886
					// Start offset: 0x800A2A2C
				/* end block 1.1.1.1 */
				// End offset: 0x800A2A48
				// End Line: 1886
			/* end block 1.1.1 */
			// End offset: 0x800A2A48
			// End Line: 1886

			/* begin block 1.1.2 */
				// Start line: 1892
				// Start offset: 0x800A2A74
				// Variables:
			// 		int latPos; // $v1
			/* end block 1.1.2 */
			// End offset: 0x800A2AE8
			// End Line: 1909
		/* end block 1.1 */
		// End offset: 0x800A2AE8
		// End Line: 1909
	/* end block 1 */
	// End offset: 0x800A2AE8
	// End Line: 1909

void Newton_CheckForSpikeBelts__FP13BO_tNewtonObj(BO_tNewtonObj *newtonObj)
{
  int iVar1;
  int iVar2;
  
  if (AICop_spikeBelt != 0) {
    if ((((AICop_spikeBelt != 0) && ((int)(newtonObj->simRoadInfo).slice == DAT_8010d550)) &&
        (iVar1 = newtonObj[2].orientMat.m[1], (newtonObj[1].simRoadInfo.quadPts[1].y & 0x230U) == 0)
        ) && (((DAT_8010d554 < iVar1 && (iVar1 < DAT_8010d558)) &&
              (iVar1 = newtonObj[1].simRoadInfo.quadPts[3].x + 1,
              newtonObj[1].simRoadInfo.quadPts[3].x = iVar1, iVar1 == 1)))) {
      (newtonObj->collision).impulse = 0xf0000;
      (newtonObj->collision).sfxType = 0x50007;
      iVar1 = (newtonObj->position).y;
      iVar2 = (newtonObj->position).z;
      (newtonObj->collision).collisionPoint.x = (newtonObj->position).x;
      (newtonObj->collision).collisionPoint.y = iVar1;
      (newtonObj->collision).collisionPoint.z = iVar2;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_DoPostBarrierCollisionHandling__FP13BO_tNewtonObjG8coorddef(struct BO_tNewtonObj *newtonObj /*$s1*/, struct coorddef normal /*stack 4*/)
 // line 1922, offset 0x800a2af0
	/* begin block 1 */
		// Start line: 1923
		// Start offset: 0x800A2AF0
		// Variables:
	// 		struct coorddef barrierVec; // stack offset -88

		/* begin block 1.1 */
			// Start line: 1923
			// Start offset: 0x800A2AF0
			// Variables:
		// 		int impactVel; // $s0
		// 		int distRetreat; // $v1
		// 		struct coorddef upVec; // stack offset -72
		// 		struct matrixtdef islandMatrix; // stack offset -56
		/* end block 1.1 */
		// End offset: 0x800A2C18
		// End Line: 1955
	/* end block 1 */
	// End offset: 0x800A2C18
	// End Line: 1955

void Newton_DoPostBarrierCollisionHandling__FP13BO_tNewtonObjG8coorddef( (BO_tNewtonObj *newtonObj,coorddef normal)
{
  int local_58;
  int force;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_a1;
  int in_a2;
  int in_a3;
  undefined4 in_stack_ffffffa4;
  matrixtdef local_38;
  
  local_58 = in_a3;
  if (in_a3 < 0) {
    local_58 = in_a3 + 0xff;
  }
  local_58 = (local_58 >> 8) * -0x100;
  if (in_a1 < 0) {
    in_a1 = in_a1 + 0xff;
  }
  local_38.m[8] = (in_a1 >> 8) << 8;
  if (in_a2 < 0) {
    in_a2 = in_a2 + 0xff;
  }
  force = (newtonObj->linearVel).x;
  if (force < 0) {
    force = force + 0xff;
  }
  iVar1 = (newtonObj->linearVel).y;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar3 = in_a3;
  if (in_a3 < 0) {
    iVar3 = in_a3 + 0xff;
  }
  iVar2 = (newtonObj->linearVel).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  force = (in_a1 >> 8) * (force >> 8) + (in_a2 >> 8) * (iVar1 >> 8) + (iVar3 >> 8) * (iVar2 >> 8);
  if (force < 0) {
    force = -force;
  }
  iVar1 = -force;
  if (0 < force) {
    iVar1 = iVar1 + 0xf;
  }
  force = -0x7ae;
  if (iVar1 >> 4 < -0x7ad) {
    force = iVar1 >> 4;
  }
  local_38.m[3] = 0;
  local_38.m[4] = 0x10000;
  local_38.m[5] = 0;
  local_38.m[7] = 0;
  local_38.m[6] = local_58;
  force = Physics_AttenuateVelocity__FP8Car_tObjiP10matrixtdef
                    ((Car_tObj *)newtonObj,force,&local_38);
  Physics_SetCurrentWallType__Fi(4);
  Physics_CorrectPostCollisionYaw__FP8Car_tObjiG8coorddef
            ((Car_tObj *)newtonObj,force,
             (coorddef)CONCAT48(local_58,CONCAT44(in_stack_ffffffa4,in_a3)));
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_GenerateVector__FiP8coorddefP12BWorldSm_Pos(int type /*$a0*/, struct coorddef *vector /*$s1*/, struct BWorldSm_Pos *testSimRoadInfo /*$a2*/)
 // line 2107, offset 0x800a2c98
	/* begin block 1 */
		// Start line: 2108
		// Start offset: 0x800A2C98
		// Variables:
	// 		struct coorddef fwdVec; // stack offset -64
	// 		struct coorddef upVec; // stack offset -48
	// 		struct coorddef result; // stack offset -32
	/* end block 1 */
	// End offset: 0x800A2D78
	// End Line: 2137

void Newton_GenerateVector__FiP8coorddefP12BWorldSm_Pos( (int type,coorddef *vector,BWorldSm_Pos *testSimRoadInfo)
{
  int iVar1;
  int iVar2;
  coorddef local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_20;
  int local_1c;
  
  local_2c = 0x10000;
  local_28 = 0;
  local_30 = 0;
  local_40.y = 0;
  if (type == 1) {
    local_40.z = testSimRoadInfo->quadPts[3].z - testSimRoadInfo->quadPts[2].z;
    local_40.x = testSimRoadInfo->quadPts[3].x - testSimRoadInfo->quadPts[2].x;
  }
  else {
    if (type == 4) {
      local_40.z = testSimRoadInfo->quadPts[2].z - testSimRoadInfo->quadPts[1].z;
      local_40.x = testSimRoadInfo->quadPts[2].x - testSimRoadInfo->quadPts[1].x;
    }
    else {
      if (type == 2) {
        local_40.z = testSimRoadInfo->quadPts[1].z - testSimRoadInfo->quadPts[0].z;
        local_40.x = testSimRoadInfo->quadPts[1].x - testSimRoadInfo->quadPts[0].x;
      }
      else {
        if (type == 8) {
          local_40.z = testSimRoadInfo->quadPts[0].z - testSimRoadInfo->quadPts[3].z;
          local_40.x = testSimRoadInfo->quadPts[0].x - testSimRoadInfo->quadPts[3].x;
        }
      }
    }
  }
  Math_NormalizeShortVector__FP8coorddef(&local_40);
  local_20 = fixedmult(local_40.y,local_28);
  iVar1 = fixedmult(local_40.z,local_2c);
  local_20 = local_20 - iVar1;
  local_1c = fixedmult(local_40.z,local_30);
  iVar1 = fixedmult(local_40.x,local_28);
  local_1c = local_1c - iVar1;
  iVar1 = fixedmult(local_40.x,local_2c);
  iVar2 = fixedmult(local_40.y,local_30);
  vector->x = local_20;
  vector->y = local_1c;
  vector->z = iVar1 - iVar2;
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Netwon_CheckForBadQuad__FP13BO_tNewtonObjP12BWorldSm_Posi(struct BO_tNewtonObj *newtonObj /*$a0*/, struct BWorldSm_Pos *testSimRoadInfo /*$a1*/, int wheel /*$a2*/)
 // line 2144, offset 0x800a2e24
	/* begin block 1 */
		// Start line: 2145
		// Start offset: 0x800A2E24
		// Variables:
	// 		int bad; // $a3

		/* begin block 1.1 */
			// Start line: 2145
			// Start offset: 0x800A2E24

			/* begin block 1.1.1 */
				// Start line: 2152
				// Start offset: 0x800A2E48
				// Variables:
			// 		int height; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800A2E7C
			// End Line: 2156
		/* end block 1.1 */
		// End offset: 0x800A2E7C
		// End Line: 2156
	/* end block 1 */
	// End offset: 0x800A2E7C
	// End Line: 2158

int Netwon_CheckForBadQuad__FP13BO_tNewtonObjP12BWorldSm_Posi( (BO_tNewtonObj *newtonObj,BWorldSm_Pos *testSimRoadInfo,int wheel)
{
  int iVar1;
  
  iVar1 = 0;
  if (((testSimRoadInfo->simQuad != (Trk_NewSimQuad *)0x0) &&
      ((testSimRoadInfo->simQuad->surface & 0xf) == 0)) ||
     (0x20000 < (&newtonObj->objID + wheel * 0xc)[0xa9] - (&newtonObj->objID + wheel * 0xc)[0xa4]))
  {
    iVar1 = 1;
  }
  return iVar1;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_TestForUndrivableSurfaces__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj /*$s1*/)
 // line 2161, offset 0x800a2e84
	/* begin block 1 */
		// Start line: 2162
		// Start offset: 0x800A2E84
		// Variables:
	// 		int i; // $s2
	// 		int collision_type; // $s6
	// 		int newHeight; // stack offset -48
	// 		struct coorddef normal; // stack offset -160
	// 		struct coorddef cautionaryCenter; // stack offset -144
	// 		struct coorddef undrivableCenter; // stack offset -128
	// 		struct coorddef speedVec; // stack offset -112

		/* begin block 1.1 */
			// Start line: 2177
			// Start offset: 0x800A2FAC

			/* begin block 1.1.1 */
				// Start line: 2180
				// Start offset: 0x800A2FCC
				// Variables:
			// 		struct coorddef testPoint; // stack offset -96

				/* begin block 1.1.1.1 */
					// Start line: 2182
					// Start offset: 0x800A2FD8

					/* begin block 1.1.1.1.1 */
						// Start line: 2198
						// Start offset: 0x800A3058

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2198
							// Start offset: 0x800A3058

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2199
								// Start offset: 0x800A3070
								// Variables:
							// 		struct coorddef newTestPoint; // stack offset -80
							// 		int check; // $s0

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 2228
									// Start offset: 0x800A3130

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 2229
										// Start offset: 0x800A313C

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 2241
											// Start offset: 0x800A315C

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 2248
												// Start offset: 0x800A31B4

												/* begin block 1.1.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 2250
													// Start offset: 0x800A31B4

													/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
														// Start line: 2251
														// Start offset: 0x800A31BC

														/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
															// Start line: 2264
															// Start offset: 0x800A322C

															/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
																// Start line: 2272
																// Start offset: 0x800A32A8

																/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
																	// Start line: 2275
																	// Start offset: 0x800A32A8
																	// Variables:
																// 		int j; // $a3

																	/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
																		// Start line: 2276
																		// Start offset: 0x800A32BC
																		// Variables:
																	// 		struct coorddef temp; // stack offset -64
																	/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
																	// End offset: 0x800A3324
																	// End Line: 2280
																/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
																// End offset: 0x800A3360
																// End Line: 2283
															/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
															// End offset: 0x800A339C
															// End Line: 2286
														/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
														// End offset: 0x800A339C
														// End Line: 2286
													/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x800A339C
													// End Line: 2286

													/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.2 */
														// Start line: 2295
														// Start offset: 0x800A33C4

														/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.2.1 */
															// Start line: 2298
															// Start offset: 0x800A33C4
															// Variables:
														// 		int j; // $a3

															/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.2.1.1 */
																// Start line: 2299
																// Start offset: 0x800A33DC
																// Variables:
															// 		struct coorddef temp; // stack offset -64
															/* end block 1.1.1.1.1.1.1.1.1.1.1.1.2.1.1 */
															// End offset: 0x800A3444
															// End Line: 2303
														/* end block 1.1.1.1.1.1.1.1.1.1.1.1.2.1 */
														// End offset: 0x800A3480
														// End Line: 2306
													/* end block 1.1.1.1.1.1.1.1.1.1.1.1.2 */
													// End offset: 0x800A34E4
													// End Line: 2314
												/* end block 1.1.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x800A34E4
												// End Line: 2314
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x800A34E4
											// End Line: 2314
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x800A34E4
										// End Line: 2314
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800A34E4
									// End Line: 2314
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800A34E4
								// End Line: 2314
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800A34F0
							// End Line: 2319
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800A34F0
						// End Line: 2319
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A34F0
					// End Line: 2319
				/* end block 1.1.1.1 */
				// End offset: 0x800A34F0
				// End Line: 2319

				/* begin block 1.1.1.2 */
					// Start line: 2322
					// Start offset: 0x800A34F0

					/* begin block 1.1.1.2.1 */
						// Start line: 2323
						// Start offset: 0x800A34F8

						/* begin block 1.1.1.2.1.1 */
							// Start line: 2328
							// Start offset: 0x800A34F8

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 2329
								// Start offset: 0x800A3500

								/* begin block 1.1.1.2.1.1.1.1 */
									// Start line: 2343
									// Start offset: 0x800A3550

									/* begin block 1.1.1.2.1.1.1.1.1 */
										// Start line: 2344
										// Start offset: 0x800A3564
										// Variables:
									// 		int impulse; // $a1
									// 		int zone; // $a2
									/* end block 1.1.1.2.1.1.1.1.1 */
									// End offset: 0x800A3580
									// End Line: 2357
								/* end block 1.1.1.2.1.1.1.1 */
								// End offset: 0x800A3580
								// End Line: 2357
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x800A3580
							// End Line: 2357
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x800A3580
						// End Line: 2357
					/* end block 1.1.1.2.1 */
					// End offset: 0x800A3594
					// End Line: 2360
				/* end block 1.1.1.2 */
				// End offset: 0x800A3594
				// End Line: 2360
			/* end block 1.1.1 */
			// End offset: 0x800A3594
			// End Line: 2360
		/* end block 1.1 */
		// End offset: 0x800A35AC
		// End Line: 2362
	/* end block 1 */
	// End offset: 0x800A35AC
	// End Line: 2362

void Newton_TestForUndrivableSurfaces__FP13BO_tNewtonObj(BO_tNewtonObj *newtonObj)
{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  BWorldSm_Pos *pBVar6;
  int wheel;
  undefined4 uVar7;
  int type;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  BO_tNewtonObj *pBVar11;
  int impulse;
  int local_a0;
  int local_9c;
  int local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_70;
  int local_6c;
  int local_68;
  coorddef local_60;
  coorddef local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  
  impulse = 0;
  local_30 = 0;
  local_90 = (newtonObj->roadCenterPoint).x;
  local_8c = (newtonObj->roadCenterPoint).y;
  local_88 = (newtonObj->roadCenterPoint).z;
  memset(&local_70,0,0xc);
  piVar1 = &testSimRoadInfo;
  pBVar6 = &newtonObj->simRoadInfo;
  do {
    wheel = *(int *)&pBVar6->simRotFlag;
    type = pBVar6->quadPts[0].x;
    iVar9 = pBVar6->quadPts[0].y;
    *piVar1 = *(int *)pBVar6;
    piVar1[1] = wheel;
    piVar1[2] = type;
    piVar1[3] = iVar9;
    pBVar6 = (BWorldSm_Pos *)&pBVar6->quadPts[0].z;
    piVar1 = piVar1 + 4;
  } while (pBVar6 != (BWorldSm_Pos *)&(newtonObj->simRoadInfo).simSlice);
  *piVar1 = *(int *)pBVar6;
  if (0x280000 < newtonObj->speedXZ) {
    local_70 = (newtonObj->linearVel).x * 5;
    if (local_70 < 0) {
      local_70 = local_70 + 0xff;
    }
    local_70 = local_70 >> 8;
    local_6c = (newtonObj->linearVel).y * 5;
    if (local_6c < 0) {
      local_6c = local_6c + 0xff;
    }
    local_6c = local_6c >> 8;
    local_68 = (newtonObj->linearVel).z * 5;
    if (local_68 < 0) {
      local_68 = local_68 + 0xff;
    }
    local_68 = local_68 >> 8;
  }
  wheel = 0;
  local_2c = 0;
  pBVar11 = newtonObj;
  do {
    if (3 < wheel) {
      return;
    }
    local_60.x = *(int *)&pBVar11[1].simRoadInfo.quadPts16[1].z + local_70;
    local_60.y = *(int *)(pBVar11[1].simRoadInfo.quadPts16 + 2) + local_6c;
    local_60.z = *(int *)&pBVar11[1].simRoadInfo.quadPts16[2].z + local_68;
    BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
              (&local_60,(BWorldSm_Pos *)&testSimRoadInfo,1);
    if (true) {
      type = Netwon_CheckForBadQuad__FP13BO_tNewtonObjP12BWorldSm_Posi
                       (newtonObj,(BWorldSm_Pos *)&testSimRoadInfo,wheel);
      if (type != 0) {
        puVar4 = &newtestSimRoadInfo;
        puVar2 = &testSimRoadInfo;
        do {
          uVar10 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          *puVar4 = *puVar2;
          puVar4[1] = uVar10;
          puVar4[2] = uVar7;
          puVar4[3] = uVar8;
          puVar2 = puVar2 + 4;
          puVar4 = puVar4 + 4;
        } while (puVar2 != &DAT_801141b4);
        *puVar4 = 0;
        local_50.x = local_60.x;
        local_50.y = local_60.y;
        local_50.z = local_60.z;
        uVar3 = BWorldSm_FindEdgeOff__FP8coorddefP12BWorldSm_PosT1Pi
                          (&local_60,&newtonObj->simRoadInfo,(BWorldSm_Pos *)&testSimRoadInfo,
                           &local_30);
        type = 1;
        impulse = 2;
        if (uVar3 == 1) {
LAB_800a3124:
          Newton_GenerateVector__FiP8coorddefP12BWorldSm_Pos
                    (type,(coorddef *)&stack0xffffff60,&newtonObj->simRoadInfo);
        }
        else {
          if (uVar3 == 2) {
            type = 2;
            goto LAB_800a3124;
          }
          type = 4;
          if ((uVar3 == 4) || (type = 8, uVar3 == 8)) goto LAB_800a3124;
        }
        if ((uVar3 & 3) != 0) {
          type = 1;
          if (((uVar3 & 1) != 0) || (type = 2, (uVar3 & 2) != 0)) {
            Newton_GenerateVector__FiP8coorddefP12BWorldSm_Pos
                      (type,(coorddef *)&stack0xffffff60,&newtonObj->simRoadInfo);
          }
          local_50.x = local_50.x + local_a0;
          local_50.y = local_50.y + local_9c;
          local_50.z = local_50.z + local_98;
          BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
                    (&local_50,(BWorldSm_Pos *)&newtestSimRoadInfo,1);
          type = Netwon_CheckForBadQuad__FP13BO_tNewtonObjP12BWorldSm_Posi
                           (newtonObj,(BWorldSm_Pos *)&newtestSimRoadInfo,wheel);
          if (type != 0) {
            if ((uVar3 & 0xc) == 0) {
              type = 0;
              piVar1 = &DAT_8011413c;
              local_78 = 0;
              local_7c = 0;
              local_80 = 0;
              while (type < 4) {
                if (true) {
                  piVar5 = (int *)((int)(short)testSimRoadInfo * 0x20);
                  local_40 = *piVar5;
                  local_3c = piVar5[1];
                  local_38 = piVar5[2];
                }
                else {
                  local_40 = *piVar1;
                  local_3c = piVar1[1];
                  local_38 = piVar1[2];
                }
                piVar1 = piVar1 + 3;
                type = type + 1;
                local_80 = local_80 + local_40;
                local_7c = local_7c + local_3c;
                local_78 = local_78 + local_38;
              }
              if (local_80 < 0) {
                local_80 = local_80 + 3;
              }
              local_80 = local_80 >> 2;
              if (local_7c < 0) {
                local_7c = local_7c + 3;
              }
              local_7c = local_7c >> 2;
              if (local_78 < 0) {
                local_78 = local_78 + 3;
              }
              local_78 = local_78 >> 2;
              local_a0 = (newtonObj->position).x - local_80;
              local_98 = (newtonObj->position).z - local_78;
            }
            else {
              type = 4;
              if (((uVar3 & 4) != 0) || (type = 8, (uVar3 & 8) != 0)) {
                Newton_GenerateVector__FiP8coorddefP12BWorldSm_Pos
                          (type,(coorddef *)&stack0xffffff60,&newtonObj->simRoadInfo);
              }
              puVar2 = &newtestSimRoadInfo;
              puVar4 = &testSimRoadInfo;
              do {
                uVar10 = puVar4[1];
                uVar7 = puVar4[2];
                uVar8 = puVar4[3];
                *puVar2 = *puVar4;
                puVar2[1] = uVar10;
                puVar2[2] = uVar7;
                puVar2[3] = uVar8;
                puVar4 = puVar4 + 4;
                puVar2 = puVar2 + 4;
              } while (puVar4 != &DAT_801141b4);
              *puVar2 = 0;
              local_50.x = local_60.x + local_a0;
              local_50.y = local_60.y + local_9c;
              local_50.z = local_60.z + local_98;
              BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
                        (&local_50,(BWorldSm_Pos *)&newtestSimRoadInfo,1);
              type = Netwon_CheckForBadQuad__FP13BO_tNewtonObjP12BWorldSm_Posi
                               (newtonObj,(BWorldSm_Pos *)&newtestSimRoadInfo,wheel);
              iVar9 = 0;
              if (type != 0) {
                piVar1 = &DAT_8011413c;
                local_78 = 0;
                local_7c = 0;
                local_80 = 0;
                while (iVar9 < 4) {
                  if (true) {
                    piVar5 = (int *)((int)(short)testSimRoadInfo * 0x20);
                    local_40 = *piVar5;
                    local_3c = piVar5[1];
                    local_38 = piVar5[2];
                  }
                  else {
                    local_40 = *piVar1;
                    local_3c = piVar1[1];
                    local_38 = piVar1[2];
                  }
                  piVar1 = piVar1 + 3;
                  iVar9 = iVar9 + 1;
                  local_80 = local_80 + local_40;
                  local_7c = local_7c + local_3c;
                  local_78 = local_78 + local_38;
                }
                if (local_80 < 0) {
                  local_80 = local_80 + 3;
                }
                local_80 = local_80 >> 2;
                if (local_7c < 0) {
                  local_7c = local_7c + 3;
                }
                local_7c = local_7c >> 2;
                if (local_78 < 0) {
                  local_78 = local_78 + 3;
                }
                local_78 = local_78 >> 2;
                local_a0 = local_90 - local_80;
                local_98 = local_88 - local_78;
              }
            }
          }
        }
        local_9c = 0;
        Math_NormalizeShortVector__FP8coorddef((coorddef *)&stack0xffffff60);
      }
    }
    else {
      Newton_GenerateVector__FiP8coorddefP12BWorldSm_Pos
                (0,(coorddef *)&stack0xffffff60,&newtonObj->simRoadInfo);
      local_9c = 0;
      Math_NormalizeShortVector__FP8coorddef((coorddef *)&stack0xffffff60);
      impulse = 1;
    }
    if (impulse != 0) {
      if (false) {
        return;
      }
      Newton_DoPostBarrierCollisionHandling__FP13BO_tNewtonObjG8coorddef
                (newtonObj,(coorddef)CONCAT48(local_98,CONCAT44(local_9c,local_a0)));
      type = *(int *)(pBVar11[1].simRoadInfo.quadPts16 + 2);
      impulse = *(int *)&pBVar11[1].simRoadInfo.quadPts16[2].z;
      (newtonObj->collision).collisionPoint.x = *(int *)&pBVar11[1].simRoadInfo.quadPts16[1].z;
      (newtonObj->collision).collisionPoint.y = type;
      (newtonObj->collision).collisionPoint.z = impulse;
      AIPhysic_ProcessBarrierCollision__FP8Car_tObj((Car_tObj *)newtonObj);
      if ((newtonObj[1].simRoadInfo.quadPts[1].y & 4U) != 0) {
        Physics_FixEngineRpm__FP8Car_tObj((Car_tObj *)newtonObj);
      }
      impulse = (newtonObj->collision).impulse;
      if (impulse < 0xa0001) {
        return;
      }
      type = 6;
      if ((wheel != 2) && (type = local_2c, wheel == 3)) {
        type = 4;
      }
      Newton_AddDamageZone__FP13BO_tNewtonObjiii(newtonObj,impulse,type,1);
      return;
    }
    pBVar11 = (BO_tNewtonObj *)&(pBVar11->simRoadInfo).quadPts[2].z;
    wheel = wheel + 1;
    local_2c = local_2c + 2;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_LimitAngularVelocity__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj /*$a0*/)
 // line 2440, offset 0x800a35dc
	/* begin block 1 */
		// Start line: 2441
		// Start offset: 0x800A35DC
	/* end block 1 */
	// End offset: 0x800A366C
	// End Line: 2457

void Newton_LimitAngularVelocity__FP13BO_tNewtonObj(BO_tNewtonObj *newtonObj)
{
  int iVar1;
  int iVar2;
  
  iVar2 = (newtonObj->angularVel).x;
  iVar1 = 0x18000;
  if ((0x18000 < iVar2) || (iVar1 = -0x18000, iVar2 < -0x18000)) {
    (newtonObj->angularVel).x = iVar1;
  }
  iVar2 = (newtonObj->angularVel).y;
  iVar1 = 0x18000;
  if ((0x18000 < iVar2) || (iVar1 = -0x18000, iVar2 < -0x18000)) {
    (newtonObj->angularVel).y = iVar1;
  }
  iVar2 = (newtonObj->angularVel).z;
  iVar1 = 0x18000;
  if ((0x18000 < iVar2) || (iVar1 = -0x18000, iVar2 < -0x18000)) {
    (newtonObj->angularVel).z = iVar1;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Newton_ApplyTheLawOfGravity__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj /*$s2*/)
 // line 2466, offset 0x800a3674
	/* begin block 1 */
		// Start line: 2467
		// Start offset: 0x800A3674
		// Variables:
	// 		int elevationOfGround; // $v0
	// 		int objAltitude; // $s4
	// 		int groundVel; // $s3
	// 		int relativeClosingVelocity; // $a2
	// 		struct coorddef normal; // stack offset -96
	// 		struct coorddef shadowNormal; // stack offset -80
	// 		int timeCount; // stack offset -48
	// 		int elapsedTime; // stack offset -44
	// 		int iTimeCount; // stack offset -40
	// 		int modifiedGravity; // $s5

		/* begin block 1.1 */
			// Start line: 2520
			// Start offset: 0x800A371C
		/* end block 1.1 */
		// End offset: 0x800A371C
		// End Line: 2520

		/* begin block 1.2 */
			// Start line: 2562
			// Start offset: 0x800A381C

			/* begin block 1.2.1 */
				// Start line: 2582
				// Start offset: 0x800A3870

				/* begin block 1.2.1.1 */
					// Start line: 2586
					// Start offset: 0x800A3870

					/* begin block 1.2.1.1.1 */
						// Start line: 2587
						// Start offset: 0x800A3880

						/* begin block 1.2.1.1.1.1 */
							// Start line: 2597
							// Start offset: 0x800A389C

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 2597
								// Start offset: 0x800A389C

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 2604
									// Start offset: 0x800A38B8
									// Variables:
								// 		struct coorddef collisionPoint; // stack offset -64
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x800A392C
								// End Line: 2618

								/* begin block 1.2.1.1.1.1.1.2 */
									// Start line: 2621
									// Start offset: 0x800A3934
									// Variables:
								// 		int bounceVel; // $v1

									/* begin block 1.2.1.1.1.1.1.2.1 */
										// Start line: 2625
										// Start offset: 0x800A3934
										// Variables:
									// 		int k; // $a1
									/* end block 1.2.1.1.1.1.1.2.1 */
									// End offset: 0x800A3954
									// End Line: 2627
								/* end block 1.2.1.1.1.1.1.2 */
								// End offset: 0x800A39FC
								// End Line: 2647
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x800A39FC
							// End Line: 2647
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800A39FC
						// End Line: 2652
					/* end block 1.2.1.1.1 */
					// End offset: 0x800A39FC
					// End Line: 2652
				/* end block 1.2.1.1 */
				// End offset: 0x800A3A14
				// End Line: 2664

				/* begin block 1.2.1.2 */
					// Start line: 2671
					// Start offset: 0x800A3A14

					/* begin block 1.2.1.2.1 */
						// Start line: 2672
						// Start offset: 0x800A3A20

						/* begin block 1.2.1.2.1.1 */
							// Start line: 2682
							// Start offset: 0x800A3A54

							/* begin block 1.2.1.2.1.1.1 */
								// Start line: 2683
								// Start offset: 0x800A3A68
								// Variables:
							// 		int scale; // $s0
							/* end block 1.2.1.2.1.1.1 */
							// End offset: 0x800A3A98
							// End Line: 2690
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x800A3A98
						// End Line: 2690
					/* end block 1.2.1.2.1 */
					// End offset: 0x800A3AEC
					// End Line: 2707
				/* end block 1.2.1.2 */
				// End offset: 0x800A3AEC
				// End Line: 2707
			/* end block 1.2.1 */
			// End offset: 0x800A3AEC
			// End Line: 2707
		/* end block 1.2 */
		// End offset: 0x800A3AEC
		// End Line: 2707
	/* end block 1 */
	// End offset: 0x800A3B3C
	// End Line: 2717

void Newton_ApplyTheLawOfGravity__FP13BO_tNewtonObj(BO_tNewtonObj *newtonObj)
{
  int a;
  int orientToGround;
  uint uVar1;
  BO_tNewtonObj *pBVar2;
  int b;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  coorddef local_60;
  coorddef local_50;
  coorddef local_40;
  int local_30;
  int local_2c;
  int aiStack40 [2];
  
  if ((newtonObj->active != '\0') &&
     (a = Sched_ExecuteCheck__FiiiiPiN24i
                    (1,3,newtonObj->distToPlayer,newtonObj->objID,&local_30,&local_2c,aiStack40,
                     newtonObj[3].lastUpdated), a != 0)) {
    if (newtonObj->simOptz < 2) {
      a = Newton_FindGroundElevationAndNormal__FP13BO_tNewtonObjP8coorddef(newtonObj,&local_60);
      local_50.x = local_60.x;
      local_50.y = local_60.y;
      local_50.z = local_60.z;
      b = newtonObj->groundElevation;
      newtonObj->groundElevation = a;
      uVar5 = (a - b) * local_30;
      iVar4 = newtonObj->objAltitude;
      a = fixedmult(local_2c * 0x4800,newtonObj->gravityMult);
      b = (newtonObj->orientMat).m[3];
      (newtonObj->linearVel).y = (newtonObj->linearVel).y - a;
      a = fixedmult(b,local_60.x);
      b = fixedmult((newtonObj->orientMat).m[4],local_60.y);
      orientToGround = fixedmult((newtonObj->orientMat).m[5],local_60.z);
      orientToGround = a + b + orientToGround;
      (newtonObj->orientationToGround).y = orientToGround;
      Newton_CalculateGroundShadowMatrix__FP13BO_tNewtonObjP8coorddefi
                (newtonObj,&local_50,orientToGround);
      a = (newtonObj->linearVel).x;
      b = (newtonObj->linearVel).z;
      if (a < 0) {
        a = -a;
      }
      if (b < 0) {
        b = -b;
      }
      a = Math_BetterDist__Fii(a,b);
      newtonObj->speedXZ = a;
      a = newtonObj->roadGravityModifier * 7 + (uVar5 - newtonObj->groundVel);
      if (a < 0) {
        a = a + 7;
      }
      newtonObj->roadGravityModifier = a >> 3;
      newtonObj->groundVel = uVar5;
      if (iVar4 < 0x3333) {
        if (newtonObj->flightTime == 0) {
          Newton_CheckForSpikeBelts__FP13BO_tNewtonObj(newtonObj);
        }
        else {
          if ((newtonObj[1].simRoadInfo.quadPts[1].y & 4U) != 0) {
            Physics_FixEngineRpm__FP8Car_tObj((Car_tObj *)newtonObj);
          }
          b = (newtonObj->linearVel).y;
          a = 0;
          if ((newtonObj->orientationToGround).y < 0xb334) {
            local_40.x = (newtonObj->roadCenterPoint).x;
            local_40.z = (newtonObj->roadCenterPoint).z;
            local_40.y = (newtonObj->roadCenterPoint).y + -0x1999;
            Collide_TestWithPlane__FP13BO_tNewtonObjP8coorddefT1(newtonObj,&local_60,&local_40);
            a = (newtonObj->collision).impulse;
            if (0x50000 < a) {
              b = 0x140000;
              if (0x13ffff < a) {
                b = a;
              }
              (newtonObj->collision).impulse = b;
            }
            if ((newtonObj->orientationToGround).y < 0x3333) {
              *(undefined4 *)&newtonObj[3].eIndexShadow = 1;
            }
          }
          else {
            orientToGround = 0;
            pBVar2 = newtonObj;
            do {
              orientToGround = orientToGround + 1;
              a = a + pBVar2[1].simRoadInfo.normal.y;
              pBVar2 = (BO_tNewtonObj *)&(pBVar2->simRoadInfo).quadPts[2].z;
            } while (orientToGround < 4);
            if (0 < a) {
              a = a * 3;
              if (a < 0) {
                a = a + 3;
              }
              orientToGround = (newtonObj->position).y;
              (newtonObj->linearVel).y = uVar5 + (a >> 2);
              a = (uVar5 - b) * 2;
              (newtonObj->collision).impulse = a;
              newtonObj->flightTime = 0;
              orientToGround = orientToGround - iVar4;
              iVar4 = 0xccc;
              (newtonObj->position).y = orientToGround;
              newtonObj->objAltitude = 0xccc;
              if (0x140000 < a) {
                (newtonObj->collision).sfxType = 0x10000;
                (newtonObj->collision).otherObj = (BO_tNewtonObj *)0x0;
                a = (newtonObj->position).y;
                b = (newtonObj->position).z;
                (newtonObj->collision).collisionPoint.x = (newtonObj->position).x;
                (newtonObj->collision).collisionPoint.y = a;
                (newtonObj->collision).collisionPoint.z = b;
                Newton_AddDamageZone__FP13BO_tNewtonObjiii
                          (newtonObj,(newtonObj->collision).impulse,9,0);
              }
              a = Force_IsForceOn__FP8Car_tObj((Car_tObj *)newtonObj);
              if (a != 0) {
                Force_HitWall__Fi((newtonObj->collision).impulse);
              }
            }
          }
          Newton_LimitAngularVelocity__FP13BO_tNewtonObj(newtonObj);
        }
        if (iVar4 < 0xa3d) {
          a = (newtonObj->position).y;
          uVar1 = newtonObj[1].simRoadInfo.quadPts[1].y;
          newtonObj->objAltitude = 0;
          (newtonObj->position).y = a - iVar4;
          if (((uVar1 & 0x400) == 0) && (0xe666 < (newtonObj->orientationToGround).y)) {
            newtonObj->flightTime = 0;
          }
          if (0x5ffff < (int)uVar5) {
            uVar3 = 0xffdf;
            if (0xc0000 < (int)uVar5) {
              uVar3 = 0xffbe;
            }
            a = fixedmult((newtonObj->linearVel).x,uVar3);
            (newtonObj->linearVel).x = a;
            a = fixedmult((newtonObj->linearVel).z,uVar3);
            (newtonObj->linearVel).z = a;
          }
          if (newtonObj->speedXZ < 0x50000) {
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 3;
            }
            (newtonObj->linearVel).y = (int)uVar5 >> 2;
          }
          else {
            if (newtonObj->speedXZ < 0xa0000) {
              (newtonObj->linearVel).y = (int)(uVar5 + (uVar5 >> 0x1f)) >> 1;
            }
            else {
              (newtonObj->linearVel).y = uVar5;
            }
          }
        }
      }
      else {
        newtonObj->roadGravityModifier = 0;
        newtonObj->flightTime = newtonObj->flightTime + (short)local_2c;
        a = fixedmult(local_2c * 0x4800,newtonObj->gravityMult);
        (newtonObj->linearVel).y = (newtonObj->linearVel).y - a;
      }
      newtonObj->lastUpdated = 0;
      uVar5 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(&newtonObj->simRoadInfo);
      if (((uVar5 != 0) && (a = (newtonObj->linearVel).y, 0 < a)) &&
         (0x80000 < (newtonObj->position).y - (newtonObj->roadCenterPoint).y)) {
        (newtonObj->linearVel).y = -a;
      }
    }
    else {
      (newtonObj->linearVel).y = 0;
      newtonObj->flightTime = 0;
      a = Newton_FindGroundElevationAndNormalFast__FP13BO_tNewtonObjP8coorddef(newtonObj,&local_60);
      (newtonObj->position).y = a + (newtonObj->dimension).y;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Newton_CalculateRoadPositionFromSliceAndPosition__FiP8coorddefP10matrixtdef(int slice /*$a0*/, struct coorddef *position /*$a1*/, struct matrixtdef *matrix /*$a2*/)
 // line 2736, offset 0x800a3b60
	/* begin block 1 */
		// Start line: 2737
		// Start offset: 0x800A3B60
		// Variables:
	// 		struct coorddef centerBack; // stack offset -32
	// 		struct coorddef carRelative; // stack offset -16
	/* end block 1 */
	// End offset: 0x800A3C3C
	// End Line: 2745

int Newton_CalculateRoadPositionFromSliceAndPosition__FiP8coorddefP10matrixtdef( (int slice,coorddef *position,matrixtdef *matrix)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = (int *)(slice * 0x20);
  iVar6 = position->x - *piVar2;
  iVar7 = position->y - piVar2[1];
  iVar1 = position->z - piVar2[2];
  iVar3 = matrix->m[0];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar4 = matrix->m[1];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar5 = matrix->m[2];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  return (iVar3 >> 8) * (iVar6 >> 8) + (iVar4 >> 8) * (iVar7 >> 8) + (iVar5 >> 8) * (iVar1 >> 8);


}




// decompiled code
// original method signature: 
// int /*$ra*/ Newton_CalculateRoadPosition__FP13BO_tNewtonObj(struct BO_tNewtonObj *newtonObj /*$t0*/)
 // line 2762, offset 0x800a3c54
	/* begin block 1 */
		// Start line: 2763
		// Start offset: 0x800A3C54
		// Variables:
	// 		struct coorddef centerBack; // stack offset -48
	// 		struct coorddef carRelative; // stack offset -32
	// 		struct coorddef carPos; // stack offset -16
	/* end block 1 */
	// End offset: 0x800A3D44
	// End Line: 2772

int Newton_CalculateRoadPosition__FP13BO_tNewtonObj(BO_tNewtonObj *newtonObj)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = (int *)((int)(newtonObj->simRoadInfo).slice * 0x20);
  iVar7 = (newtonObj->position).x - *piVar1;
  iVar3 = (newtonObj->position).y - piVar1[1];
  iVar5 = (newtonObj->position).z - piVar1[2];
  iVar6 = (newtonObj->roadMatrix).m[0];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (newtonObj->roadMatrix).m[1];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = (newtonObj->roadMatrix).m[2];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  return (iVar6 >> 8) * (iVar7 >> 8) + (iVar2 >> 8) * (iVar3 >> 8) + (iVar4 >> 8) * (iVar5 >> 8);


}





