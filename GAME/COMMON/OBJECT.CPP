#include "NFS4.H"
#include "OBJECT.H"

// decompiled code
// original method signature: 
// int /*$ra*/ CalcObjYawAngle__FP8CCOORD16(struct CCOORD16 *pts /*$a0*/)
 // line 69, offset 0x800a4ae4
	/* begin block 1 */
		// Start line: 70
		// Start offset: 0x800A4AE4
	/* end block 1 */
	// End offset: 0x800A4AE4
	// End Line: 70

int CalcObjYawAngle__FP8CCOORD16(CCOORD16 *pts)

{
  int iVar1;
  
  iVar1 = fixedatan((int)pts[1].x - (int)pts->x,(int)pts[1].z - (int)pts->z);
  return iVar1 + -0x4000 >> 8;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcObjExtentPoints__FP8coorddefP8CCOORD16T0P5tQuat(struct coorddef *cp /*$a0*/, struct CCOORD16 *pts /*$a1*/, struct coorddef *resultPts /*$s0*/, struct tQuat *quat /*$a3*/)
 // line 78, offset 0x800a4b1c
	/* begin block 1 */
		// Start line: 79
		// Start offset: 0x800A4B1C
		// Variables:
	// 		struct matrixtdef matrix; // stack offset -88
	// 		int cpx; // $s1
	// 		int cpz; // $s2
	// 		struct coorddef pt0; // stack offset -48
	// 		struct coorddef pt1; // stack offset -32
	/* end block 1 */
	// End offset: 0x800A4B1C
	// End Line: 79

void CalcObjExtentPoints__FP8coorddefP8CCOORD16T0P5tQuat
               (coorddef *cp,CCOORD16 *pts,coorddef *resultPts,tQuat *quat)

{
  int iVar1;
  int iVar2;
  int iVar3;
  matrixtdef mStack88;
  int local_30 [2];
  int local_28;
  int local_20 [2];
  int local_18;
  
  iVar2 = cp->x;
  iVar3 = cp->z;
  local_30[0] = (int)pts->x << 10;
  local_28 = (int)pts->z << 10;
  local_20[0] = (int)pts[1].x << 10;
  local_18 = (int)pts[1].z << 10;
  resultPts->x = iVar2;
  resultPts->z = iVar3;
  Quatern_QuatToMat__FP5tQuatP10matrixtdef(quat,&mStack88);
  transform(local_30,(int *)&mStack88,(int *)(resultPts + 1));
  transform(local_20,(int *)&mStack88,(int *)(resultPts + 2));
  resultPts[1].x = resultPts[1].x + iVar2;
  iVar1 = resultPts[2].x;
  resultPts[1].z = resultPts[1].z + iVar3;
  resultPts[2].x = iVar1 + iVar2;
  resultPts[2].z = resultPts[2].z + iVar3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BuildObjCollisionMatrix__FiiiP10matrixtdef(int weight /*$s0*/, int objAngle /*$s1*/, int impactAngle /*$s2*/, struct matrixtdef *mat /*$s3*/)
 // line 121, offset 0x800a4be8
	/* begin block 1 */
		// Start line: 122
		// Start offset: 0x800A4BE8
		// Variables:
	// 		struct matrixtdef impactMat; // stack offset -144
	// 		struct matrixtdef objAngleMat; // stack offset -104
	// 		struct matrixtdef tmpMat; // stack offset -64
	/* end block 1 */
	// End offset: 0x800A4BE8
	// End Line: 122

void BuildObjCollisionMatrix__FiiiP10matrixtdef
               (int weight,int objAngle,int impactAngle,matrixtdef *mat)

{
  uint uVar1;
  uint uVar2;
  matrixtdef mStack144;
  matrixtdef mStack104;
  matrixtdef mStack64;
  
  uVar1 = fixedmult(-impactAngle,0x10000 - weight);
  uVar2 = fixedmult(-objAngle,weight);
  fixedxformy((int *)&mStack104,uVar1 + uVar2);
  fixedxformy((int *)&mStack144,impactAngle);
  Math_fasttransmult__FP10matrixtdefN20(&mStack104,mat,&mStack64);
  Math_fasttransmult__FP10matrixtdefN20(&mStack64,&mStack144,mat);
  return;
}



// decompiled code
// original method signature: 
// struct Trk_SimpleInst * /*$ra*/ FindObjInstanceFromSerialNum__FP5Groupi(struct Group *group /*$a0*/, int index /*$a1*/)
 // line 144, offset 0x800a4c8c
	/* begin block 1 */
		// Start line: 145
		// Start offset: 0x800A4C8C
		// Variables:
	// 		struct Trk_SimpleInst *objInstance; // $a0

		/* begin block 1.1 */
			// Start line: 151
			// Start offset: 0x800A4CA4

			/* begin block 1.1.1 */
				// Start line: 152
				// Start offset: 0x800A4CAC

				/* begin block 1.1.1.1 */
					// Start line: 153
					// Start offset: 0x800A4CAC

					/* begin block 1.1.1.1.1 */
						// Start line: 153
						// Start offset: 0x800A4CAC
						// Variables:
					// 		struct Group *this; // $a0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 153
							// Start offset: 0x800A4CAC
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800A4CAC
						// End Line: 153
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A4CAC
					// End Line: 153
				/* end block 1.1.1.1 */
				// End offset: 0x800A4CB8
				// End Line: 159

				/* begin block 1.1.1.2 */
					// Start line: 159
					// Start offset: 0x800A4CB8

					/* begin block 1.1.1.2.1 */
						// Start line: 159
						// Start offset: 0x800A4CB8
					/* end block 1.1.1.2.1 */
					// End offset: 0x800A4CB8
					// End Line: 159
				/* end block 1.1.1.2 */
				// End offset: 0x800A4CB8
				// End Line: 159
			/* end block 1.1.1 */
			// End offset: 0x800A4CB8
			// End Line: 159

			/* begin block 1.1.2 */
				// Start line: 163
				// Start offset: 0x800A4CC0

				/* begin block 1.1.2.1 */
					// Start line: 164
					// Start offset: 0x800A4CC0

					/* begin block 1.1.2.1.1 */
						// Start line: 164
						// Start offset: 0x800A4CC0
						// Variables:
					// 		struct Group *this; // $a0

						/* begin block 1.1.2.1.1.1 */
							// Start line: 164
							// Start offset: 0x800A4CC0
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x800A4CC0
						// End Line: 164
					/* end block 1.1.2.1.1 */
					// End offset: 0x800A4CC0
					// End Line: 164
				/* end block 1.1.2.1 */
				// End offset: 0x800A4CD4
				// End Line: 169

				/* begin block 1.1.2.2 */
					// Start line: 169
					// Start offset: 0x800A4CD4
					// Variables:
				// 		struct Group *this; // $a0

					/* begin block 1.1.2.2.1 */
						// Start line: 169
						// Start offset: 0x800A4CD4
					/* end block 1.1.2.2.1 */
					// End offset: 0x800A4CD4
					// End Line: 169
				/* end block 1.1.2.2 */
				// End offset: 0x800A4CD4
				// End Line: 169
			/* end block 1.1.2 */
			// End offset: 0x800A4CD4
			// End Line: 171
		/* end block 1.1 */
		// End offset: 0x800A4CD4
		// End Line: 171
	/* end block 1 */
	// End offset: 0x800A4CF4
	// End Line: 177

Trk_SimpleInst * FindObjInstanceFromSerialNum__FP5Groupi(Group *group,int index)

{
  int iVar1;
  Trk_SimpleInst *pTVar2;
  
  if (1 < index - 0x7eU) {
    if ((index & 0x80U) == 0) {
      iVar1 = group->m_num_elements;
    }
    else {
      iVar1 = DAT_00000d7c->m_num_elements;
      index = index & 0xffffff7f;
      group = DAT_00000d7c;
    }
    if (index < iVar1) {
      pTVar2 = (Trk_SimpleInst *)(group + 1);
      while (index = index - 1, index != 0xffffffff) {
        pTVar2 = (Trk_SimpleInst *)((int)&pTVar2->size + (int)pTVar2->size);
      }
      return pTVar2;
    }
  }
  return (Trk_SimpleInst *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Object_InitCollisionCheckLoop__FP12BWorldSm_PosP18Object_tSimObjListPi(struct BWorldSm_Pos *slicePos /*$a3*/, struct Object_tSimObjList *objList /*$a1*/, int *numObj /*$s0*/)
 // line 190, offset 0x800a4cfc
	/* begin block 1 */
		// Start line: 191
		// Start offset: 0x800A4CFC
		// Variables:
	// 		int altChunk; // $a0

		/* begin block 1.1 */
			// Start line: 191
			// Start offset: 0x800A4CFC

			/* begin block 1.1.1 */
				// Start line: 196
				// Start offset: 0x800A4D3C

				/* begin block 1.1.1.1 */
					// Start line: 196
					// Start offset: 0x800A4D3C

					/* begin block 1.1.1.1.1 */
						// Start line: 196
						// Start offset: 0x800A4D3C
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A4D3C
					// End Line: 196
				/* end block 1.1.1.1 */
				// End offset: 0x800A4D3C
				// End Line: 196
			/* end block 1.1.1 */
			// End offset: 0x800A4D3C
			// End Line: 196
		/* end block 1.1 */
		// End offset: 0x800A4D4C
		// End Line: 198

		/* begin block 1.2 */
			// Start line: 229
			// Start offset: 0x800A4E90

			/* begin block 1.2.1 */
				// Start line: 230
				// Start offset: 0x800A4EA0

				/* begin block 1.2.1.1 */
					// Start line: 231
					// Start offset: 0x800A4EA0

					/* begin block 1.2.1.1.1 */
						// Start line: 231
						// Start offset: 0x800A4EA0

						/* begin block 1.2.1.1.1.1 */
							// Start line: 231
							// Start offset: 0x800A4EA0
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800A4EA0
						// End Line: 231
					/* end block 1.2.1.1.1 */
					// End offset: 0x800A4EA0
					// End Line: 231

					/* begin block 1.2.1.1.2 */
						// Start line: 232
						// Start offset: 0x800A4EB0

						/* begin block 1.2.1.1.2.1 */
							// Start line: 234
							// Start offset: 0x800A4EB0

							/* begin block 1.2.1.1.2.1.1 */
								// Start line: 237
								// Start offset: 0x800A4EE8

								/* begin block 1.2.1.1.2.1.1.1 */
									// Start line: 237
									// Start offset: 0x800A4EE8
									// Variables:
								// 		struct Group *this; // $v0

									/* begin block 1.2.1.1.2.1.1.1.1 */
										// Start line: 237
										// Start offset: 0x800A4EE8
									/* end block 1.2.1.1.2.1.1.1.1 */
									// End offset: 0x800A4EE8
									// End Line: 237
								/* end block 1.2.1.1.2.1.1.1 */
								// End offset: 0x800A4EE8
								// End Line: 237
							/* end block 1.2.1.1.2.1.1 */
							// End offset: 0x800A4F04
							// End Line: 238
						/* end block 1.2.1.1.2.1 */
						// End offset: 0x800A4F04
						// End Line: 238
					/* end block 1.2.1.1.2 */
					// End offset: 0x800A4F04
					// End Line: 238
				/* end block 1.2.1.1 */
				// End offset: 0x800A4F04
				// End Line: 238
			/* end block 1.2.1 */
			// End offset: 0x800A4F04
			// End Line: 238
		/* end block 1.2 */
		// End offset: 0x800A4F04
		// End Line: 238
	/* end block 1 */
	// End offset: 0x800A4F04
	// End Line: 243

void Object_InitCollisionCheckLoop__FP12BWorldSm_PosP18Object_tSimObjListPi
               (BWorldSm_Pos *slicePos,Object_tSimObjList *objList,int *numObj)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (Track_chunkList[(uint)slicePos->chunk].simObjBuf == (Group *)0x0) {
    objList->numObjects = 0;
  }
  else {
    objList->numObjects = (Track_chunkList[(uint)slicePos->chunk].simObjBuf)->m_num_elements;
  }
  bVar1 = slicePos->chunk;
  objList->numObjects2 = 0;
  objList->chunk = (uint)bVar1;
  iVar2 = (int)slicePos->slice + 1;
  if (gNumSlices <= iVar2) {
    iVar2 = (int)slicePos->slice - (gNumSlices + -1);
  }
  uVar3 = (uint)BWorldSm_slices[iVar2].chunkIndex;
  if ((uVar3 == (uint)slicePos->chunk) || (Track_chunkList[uVar3].simObjBuf == (Group *)0x0)) {
    iVar2 = (int)slicePos->slice + -1;
    if (iVar2 < 0) {
      iVar2 = (int)slicePos->slice + gNumSlices + -1;
    }
    uVar3 = (uint)BWorldSm_slices[iVar2].chunkIndex;
    if ((uVar3 == (uint)slicePos->chunk) || (Track_chunkList[uVar3].simObjBuf == (Group *)0x0)) {
      iVar2 = objList->numObjects;
    }
    else {
      objList->numObjects2 = (Track_chunkList[uVar3].simObjBuf)->m_num_elements;
      objList->chunk2 = uVar3;
      iVar2 = objList->numObjects + objList->numObjects2;
    }
  }
  else {
    objList->numObjects2 = (Track_chunkList[uVar3].simObjBuf)->m_num_elements;
    objList->chunk2 = uVar3;
    iVar2 = objList->numObjects + objList->numObjects2;
  }
  *numObj = iVar2;
  if (((DAT_00000d80 != (int *)0x0) && (0 < *DAT_00000d80)) &&
     (iVar2 = Math_DistXZ__FP8coorddefT0
                        ((coorddef *)(BWorldSm_slices + DAT_00000d88),
                         (coorddef *)(BWorldSm_slices + (int)slicePos->slice)), iVar2 < 0xc00000)) {
    *numObj = *numObj + *DAT_00000d80;
  }
  return;
}



// decompiled code
// original method signature: 
// struct Trk_SimObject * /*$ra*/ GetSimObj__FiP18Object_tSimObjListPi(int objIndex /*$a0*/, struct Object_tSimObjList *objList /*$a1*/, int *chunk /*$a2*/)
 // line 256, offset 0x800a4f14
	/* begin block 1 */
		// Start line: 257
		// Start offset: 0x800A4F14
		// Variables:
	// 		struct Trk_SimObject *simObj; // $a3
	// 		int index; // $a0

		/* begin block 1.1 */
			// Start line: 258
			// Start offset: 0x800A4F14

			/* begin block 1.1.1 */
				// Start line: 262
				// Start offset: 0x800A4F30

				/* begin block 1.1.1.1 */
					// Start line: 264
					// Start offset: 0x800A4F30
					// Variables:
				// 		struct Group *this; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 264
						// Start offset: 0x800A4F30
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A4F30
					// End Line: 264
				/* end block 1.1.1.1 */
				// End offset: 0x800A4F30
				// End Line: 264
			/* end block 1.1.1 */
			// End offset: 0x800A4F5C
			// End Line: 270

			/* begin block 1.1.2 */
				// Start line: 272
				// Start offset: 0x800A4F5C

				/* begin block 1.1.2.1 */
					// Start line: 282
					// Start offset: 0x800A4F88

					/* begin block 1.1.2.1.1 */
						// Start line: 283
						// Start offset: 0x800A4FB8

						/* begin block 1.1.2.1.1.1 */
							// Start line: 283
							// Start offset: 0x800A4FB8

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 283
								// Start offset: 0x800A4FB8
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x800A4FB8
							// End Line: 283
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x800A4FB8
						// End Line: 283
					/* end block 1.1.2.1.1 */
					// End offset: 0x800A4FE0
					// End Line: 288
				/* end block 1.1.2.1 */
				// End offset: 0x800A4FE0
				// End Line: 288
			/* end block 1.1.2 */
			// End offset: 0x800A4FE0
			// End Line: 288
		/* end block 1.1 */
		// End offset: 0x800A4FE0
		// End Line: 288
	/* end block 1 */
	// End offset: 0x800A4FE0
	// End Line: 291

Trk_SimObject *
GetSimObj__FiP18Object_tSimObjListPi(int objIndex,Object_tSimObjList *objList,int *chunk)

{
  int iVar1;
  int iVar2;
  Trk_SimObject *pTVar3;
  int iVar4;
  
  iVar1 = DAT_00000d80;
  iVar2 = objList->numObjects;
  iVar4 = objList->numObjects2;
  pTVar3 = (Trk_SimObject *)0x0;
  if (iVar2 + iVar4 <= objIndex) {
    *chunk = -1;
    return (Trk_SimObject *)(iVar1 + 4 + ((objIndex - iVar2) - iVar4) * 0x14);
  }
  *chunk = objList->chunk;
  if (objList->numObjects <= objIndex) {
    objIndex = objIndex - objList->numObjects;
    *chunk = objList->chunk2;
  }
  if ((Track_chunkList[*chunk].simObjBuf != (Group *)0x0) &&
     (pTVar3 = (Trk_SimObject *)(Track_chunkList[*chunk].simObjBuf + objIndex * 5 + 1),
     pTVar3->type == '\x10')) {
    pTVar3 = (Trk_SimObject *)0x0;
  }
  return pTVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Object_GetRadiusCollisionData__FP18Object_tSimObjListiP8coorddefPi(struct Object_tSimObjList *objList /*$v0*/, int objIndex /*$a1*/, struct coorddef *pos /*$s2*/, int *radius /*$s1*/)
 // line 304, offset 0x800a4fe8
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x800A4FE8
		// Variables:
	// 		struct Trk_SimObject *simObj; // $s0
	// 		int chunk; // stack offset -24

		/* begin block 1.1 */
			// Start line: 305
			// Start offset: 0x800A4FE8

			/* begin block 1.1.1 */
				// Start line: 314
				// Start offset: 0x800A5024

				/* begin block 1.1.1.1 */
					// Start line: 316
					// Start offset: 0x800A5024

					/* begin block 1.1.1.1.1 */
						// Start line: 317
						// Start offset: 0x800A5058
						// Variables:
					// 		int dummy; // stack offset -20
					// 		struct Chunk *pMChunk; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A50A8
					// End Line: 323
				/* end block 1.1.1.1 */
				// End offset: 0x800A50A8
				// End Line: 323
			/* end block 1.1.1 */
			// End offset: 0x800A50A8
			// End Line: 326
		/* end block 1.1 */
		// End offset: 0x800A50D8
		// End Line: 329
	/* end block 1 */
	// End offset: 0x800A50D8
	// End Line: 331

int Object_GetRadiusCollisionData__FP18Object_tSimObjListiP8coorddefPi
              (Object_tSimObjList *objList,int objIndex,coorddef *pos,int *radius)

{
  Trk_SimObject *pt;
  Trk_SimpleInst *animInst;
  int iVar1;
  int iVar2;
  int local_18;
  int iStack20;
  
  pt = GetSimObj__FiP18Object_tSimObjListPi(objIndex,objList,&local_18);
  if (pt == (Trk_SimObject *)0x0) {
    *radius = 0;
  }
  else {
    if (((pt->type & 0x80) != 0) &&
       ((&__gSimObjAnims_450__)[(int)pt->serialNum] == (ObjectAnim *)0x0)) {
      animInst = FindObjInstanceFromSerialNum__FP5Groupi
                           (Track_chunkList[local_18].objInstanceBuf,(uint)pt->instIndex);
      Anim_GetPos__FP15Trk_AnimateInstiiP8coorddefPiT4
                ((Trk_AnimateInst *)animInst,1,simGlobal.gameTicks,(coorddef *)pt,&iStack20,
                 &iStack20);
    }
    iVar1 = pt->point[1];
    iVar2 = pt->point[2];
    pos->x = pt->point[0];
    pos->y = iVar1;
    pos->z = iVar2;
    *radius = (int)pt->radius << 7;
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Object_GetPointsCollisionData__FP18Object_tSimObjListiPiP8coorddef(struct Object_tSimObjList *objList /*$v0*/, int objIndex /*$a1*/, int *numPoints /*$s1*/, struct coorddef *resultPoints /*$s2*/)
 // line 336, offset 0x800a50f4
	/* begin block 1 */
		// Start line: 337
		// Start offset: 0x800A50F4
		// Variables:
	// 		struct Trk_SimObject *simObj; // $s0
	// 		int chunk; // stack offset -24

		/* begin block 1.1 */
			// Start line: 337
			// Start offset: 0x800A50F4

			/* begin block 1.1.1 */
				// Start line: 345
				// Start offset: 0x800A5130
				// Variables:
			// 		struct Trk_SimpleInst *objInstance; // $a3

				/* begin block 1.1.1.1 */
					// Start line: 353
					// Start offset: 0x800A5174

					/* begin block 1.1.1.1.1 */
						// Start line: 354
						// Start offset: 0x800A517C
						// Variables:
					// 		struct Trk_ObjectDef *objDef; // $a1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 354
							// Start offset: 0x800A517C

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 354
								// Start offset: 0x800A517C
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800A517C
							// End Line: 354
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800A517C
						// End Line: 354
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A51D0
					// End Line: 371
				/* end block 1.1.1.1 */
				// End offset: 0x800A51F0
				// End Line: 378
			/* end block 1.1.1 */
			// End offset: 0x800A51F0
			// End Line: 378
		/* end block 1.1 */
		// End offset: 0x800A5218
		// End Line: 382
	/* end block 1 */
	// End offset: 0x800A5218
	// End Line: 382

void Object_GetPointsCollisionData__FP18Object_tSimObjListiPiP8coorddef
               (Object_tSimObjList *objList,int objIndex,int *numPoints,coorddef *resultPoints)

{
  byte bVar1;
  Trk_SimObject *cp;
  Trk_SimpleInst *pTVar2;
  Group *group;
  int iVar3;
  int iVar4;
  int local_18 [2];
  
  cp = GetSimObj__FiP18Object_tSimObjListPi(objIndex,objList,local_18);
  if (cp == (Trk_SimObject *)0x0) {
    *numPoints = 0;
  }
  else {
    if (local_18[0] == -1) {
      bVar1 = cp->instIndex;
      group = (Group *)0x0;
    }
    else {
      bVar1 = cp->instIndex;
      group = Track_chunkList[local_18[0]].objInstanceBuf;
    }
    pTVar2 = FindObjInstanceFromSerialNum__FP5Groupi(group,(uint)bVar1);
    if (pTVar2 == (Trk_SimpleInst *)0x0) {
      *numPoints = 1;
      iVar3 = cp->point[1];
      iVar4 = cp->point[2];
      resultPoints->x = cp->point[0];
      resultPoints->y = iVar3;
      resultPoints->z = iVar4;
    }
    else {
      if ((pTVar2->type == '\x05') && (*(char *)((int)&pTVar2[1].y + 3) == '\0')) {
        CalcObjExtentPoints__FP8coorddefP8CCOORD16T0P5tQuat
                  ((coorddef *)cp,(CCOORD16 *)(Track_gObjDefs[(int)pTVar2->pad] + 1),resultPoints,
                   (tQuat *)(pTVar2 + 1));
        *numPoints = 3;
      }
      else {
        iVar3 = cp->point[1];
        iVar4 = cp->point[2];
        resultPoints->x = cp->point[0];
        resultPoints->y = iVar3;
        resultPoints->z = iVar4;
        *numPoints = 1;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Object_InitStatus__Fv()
 // line 398, offset 0x800a5230
	/* begin block 1 */
		// Start line: 399
		// Start offset: 0x800A5230
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x800A5250
	// End Line: 405

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Object_InitStatus__Fv(void)

{
  ObjectAnim **ppOVar1;
  int iVar2;
  
  iVar2 = 0x1c1;
  ppOVar1 = &PTR_80116464;
  do {
    *ppOVar1 = (ObjectAnim *)0x0;
    iVar2 = iVar2 + -1;
    ppOVar1 = ppOVar1 + -1;
  } while (-1 < iVar2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Object_KillStatus__Fv()
 // line 408, offset 0x800a5258
	/* begin block 1 */
		// Start line: 409
		// Start offset: 0x800A5258
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x800A52B0
	// End Line: 416

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Object_KillStatus__Fv(void)

{
  uint uVar1;
  ObjectAnim *pOVar2;
  ObjectAnim **ppOVar3;
  int iVar4;
  
  iVar4 = 0;
  ppOVar3 = &__gSimObjAnims_450__;
  do {
    pOVar2 = *ppOVar3;
    if (pOVar2 != (ObjectAnim *)0x0) {
      uVar1 = pOVar2->_vf[0].value;
      (**(code **)(uVar1 + 0xc))((int)&pOVar2->_vf[0].value + (int)*(short *)(uVar1 + 8),3);
    }
    iVar4 = iVar4 + 1;
    ppOVar3 = ppOVar3 + 1;
  } while (iVar4 < 0x1c2);
  return;
}



// decompiled code
// original method signature: 
// struct ObjectAnim * /*$ra*/ Object_GetAnim__FP13Trk_SimObject(struct Trk_SimObject *simObj /*$a0*/)
 // line 427, offset 0x800a52c4
	/* begin block 1 */
		// Start line: 428
		// Start offset: 0x800A52C4
	/* end block 1 */
	// End offset: 0x800A52E8
	// End Line: 431

ObjectAnim * Object_GetAnim__FP13Trk_SimObject(Trk_SimObject *simObj)

{
  if (simObj != (Trk_SimObject *)0x0) {
    return (&__gSimObjAnims_450__)[(int)simObj->serialNum];
  }
  return (ObjectAnim *)0x0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Object_CheckCollisionResults__FP18Object_tSimObjListiP13BO_tNewtonObj(struct Object_tSimObjList *objList /*$v0*/, int objIndex /*$a1*/, struct BO_tNewtonObj *N /*$s6*/)
 // line 455, offset 0x800a52f0
	/* begin block 1 */
		// Start line: 456
		// Start offset: 0x800A52F0
		// Variables:
	// 		struct Trk_SimObject *simObj; // $s3
	// 		struct ObjectAnim *objStatus; // $v0
	// 		int vel; // $s1
	// 		int chunk; // stack offset -40
	// 		int type; // $a0
	// 		int ret; // $s0

		/* begin block 1.1 */
			// Start line: 456
			// Start offset: 0x800A52F0

			/* begin block 1.1.1 */
				// Start line: 479
				// Start offset: 0x800A53B8

				/* begin block 1.1.1.1 */
					// Start line: 485
					// Start offset: 0x800A53B8

					/* begin block 1.1.1.1.1 */
						// Start line: 486
						// Start offset: 0x800A53C0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 488
							// Start offset: 0x800A53C0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 489
								// Start offset: 0x800A53C8

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 494
									// Start offset: 0x800A53C8
									// Variables:
								// 		struct Chunk *pMChunk; // $v1
								// 		struct Trk_SimpleInst *objInstance; // $s4
								// 		struct Trk_ObjectDef *objDef; // $s5
								// 		struct AnimDef *animDef; // $s2

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 518
										// Start offset: 0x800A546C

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 519
											// Start offset: 0x800A5484

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 521
												// Start offset: 0x800A5484

												/* begin block 1.1.1.1.1.1.1.1.1.1.1.1 */
													// Start line: 522
													// Start offset: 0x800A5484

													/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
														// Start line: 522
														// Start offset: 0x800A5484

														/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
															// Start line: 522
															// Start offset: 0x800A5484
														/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1.1 */
														// End offset: 0x800A5484
														// End Line: 522
													/* end block 1.1.1.1.1.1.1.1.1.1.1.1.1 */
													// End offset: 0x800A5484
													// End Line: 522

													/* begin block 1.1.1.1.1.1.1.1.1.1.1.1.2 */
														// Start line: 522
														// Start offset: 0x800A5484
													/* end block 1.1.1.1.1.1.1.1.1.1.1.1.2 */
													// End offset: 0x800A5484
													// End Line: 522
												/* end block 1.1.1.1.1.1.1.1.1.1.1.1 */
												// End offset: 0x800A5484
												// End Line: 522
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x800A54CC
											// End Line: 524

											/* begin block 1.1.1.1.1.1.1.1.1.1.2 */
												// Start line: 528
												// Start offset: 0x800A54CC

												/* begin block 1.1.1.1.1.1.1.1.1.1.2.1 */
													// Start line: 529
													// Start offset: 0x800A54CC

													/* begin block 1.1.1.1.1.1.1.1.1.1.2.1.1 */
														// Start line: 529
														// Start offset: 0x800A54CC

														/* begin block 1.1.1.1.1.1.1.1.1.1.2.1.1.1 */
															// Start line: 529
															// Start offset: 0x800A54CC
														/* end block 1.1.1.1.1.1.1.1.1.1.2.1.1.1 */
														// End offset: 0x800A54CC
														// End Line: 529
													/* end block 1.1.1.1.1.1.1.1.1.1.2.1.1 */
													// End offset: 0x800A54CC
													// End Line: 529

													/* begin block 1.1.1.1.1.1.1.1.1.1.2.1.2 */
														// Start line: 529
														// Start offset: 0x800A54CC
													/* end block 1.1.1.1.1.1.1.1.1.1.2.1.2 */
													// End offset: 0x800A54CC
													// End Line: 529
												/* end block 1.1.1.1.1.1.1.1.1.1.2.1 */
												// End offset: 0x800A54CC
												// End Line: 529
											/* end block 1.1.1.1.1.1.1.1.1.1.2 */
											// End offset: 0x800A5548
											// End Line: 531
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x800A5548
										// End Line: 535
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800A5548
									// End Line: 535
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800A5548
								// End Line: 535
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800A5548
							// End Line: 540
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800A5550
						// End Line: 542
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A5550
					// End Line: 542
				/* end block 1.1.1.1 */
				// End offset: 0x800A5558
				// End Line: 544
			/* end block 1.1.1 */
			// End offset: 0x800A555C
			// End Line: 554
		/* end block 1.1 */
		// End offset: 0x800A555C
		// End Line: 554
	/* end block 1 */
	// End offset: 0x800A555C
	// End Line: 558

int Object_CheckCollisionResults__FP18Object_tSimObjListiP13BO_tNewtonObj
              (Object_tSimObjList *objList,int objIndex,BO_tNewtonObj *N)

{
  int iVar1;
  Trk_SimObject *simObj;
  Trk_CollideBoomInst *objCollideInstance;
  ObjectFinishedMultiAnim *finishedAnim;
  ObjectMultiAnim *this;
  ObjectFinishedSignAnim *finishedAnim_00;
  ObjectSignAnim *this_00;
  int iVar2;
  byte bVar3;
  AnimDef *def;
  Trk_ObjectDef *objDef;
  int local_28 [2];
  
  iVar2 = (N->linearVel).x;
  iVar1 = (N->linearVel).z;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  simObj = GetSimObj__FiP18Object_tSimObjListPi(objIndex,objList,local_28);
  bVar3 = simObj->type & 0xf;
  if (bVar3 == 2) {
    if ((&__gSimObjAnims_450__)[(int)simObj->serialNum] != (ObjectAnim *)0x0) {
      return 0;
    }
    if (-1 < iVar2 + iVar1 >> 0x10) {
      objCollideInstance =
           (Trk_CollideBoomInst *)
           FindObjInstanceFromSerialNum__FP5Groupi
                     (Track_chunkList[local_28[0]].objInstanceBuf,(uint)simObj->instIndex);
      if (objCollideInstance->type == '\x06') {
        bVar3 = *(byte *)((int)&objCollideInstance->y + 1);
      }
      else {
        bVar3 = objCollideInstance->boomIndex;
      }
      def = &gAnimDefs + (uint)bVar3;
      if ((&gAnimDefs)[(uint)bVar3].animIndex == 0) {
        objDef = Track_gObjDefs[(int)objCollideInstance->pad];
      }
      else {
        objDef = (Trk_ObjectDef *)(gPersistObjDef + 1);
      }
      if (def->type == 0) {
        finishedAnim_00 = (ObjectFinishedSignAnim *)__builtin_new(0x30);
        (finishedAnim_00->ObjectAnim)._vf[0].value = 0x800560a0;
        this_00 = (ObjectSignAnim *)__builtin_new(0x30);
        iVar2 = fixedatan((N->linearVel).x >> 8,(N->linearVel).z >> 8);
        this_00 = 
                  __14ObjectSignAnimP8coorddefiP7AnimDefP19Trk_CollideBoomInstP13Trk_ObjectDefP13Trk_SimObjectT1P22ObjectFinishedSignAnim
                            (this_00,&N->linearVel,iVar2 >> 8,def,objCollideInstance,objDef,simObj,
                             (coorddef *)((N->roadMatrix).m + 3),finishedAnim_00);
      }
      else {
        if (def->type != 1) {
          return -1;
        }
        finishedAnim = (ObjectFinishedMultiAnim *)__builtin_new(4);
        (finishedAnim->ObjectAnim)._vf[0].value = 0x800560d0;
        this = (ObjectMultiAnim *)__builtin_new(0x30);
        this_00 = (ObjectSignAnim *)
                                    
                  __15ObjectMultiAnimP8coorddefP7AnimDefP19Trk_CollideBoomInstP13Trk_ObjectDefP13Trk_SimObjectP23ObjectFinishedMultiAnim
                            (this,&N->linearVel,def,objCollideInstance,objDef,simObj,finishedAnim);
      }
      *(ObjectSignAnim **)(&__gSimObjAnims_450__ + (int)simObj->serialNum) = this_00;
      return -1;
    }
  }
  else {
    if (2 < bVar3) {
      if (bVar3 != 3) {
        return 0;
      }
      return 2;
    }
    if (bVar3 != 1) {
      return 0;
    }
  }
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Object_InitCustomObjects__Fv()
 // line 581, offset 0x800a5588
	/* begin block 1 */
		// Start line: 582
		// Start offset: 0x800A5588

		/* begin block 1.1 */
			// Start line: 582
			// Start offset: 0x800A5588

			/* begin block 1.1.1 */
				// Start line: 582
				// Start offset: 0x800A5588
			/* end block 1.1.1 */
			// End offset: 0x800A5588
			// End Line: 582
		/* end block 1.1 */
		// End offset: 0x800A5588
		// End Line: 582
	/* end block 1 */
	// End offset: 0x800A5588
	// End Line: 582

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Object_InitCustomObjects__Fv(void)

{
  undefined4 *puVar1;
  
  DAT_00000d7c = (undefined4 *)reservememadr(s_Custom_Objects_80056054,0x400,0);
  *DAT_00000d7c = 0;
  DAT_00000d80 = (undefined4 *)reservememadr(s_Custom_SimObjects_80056064,0x400,0);
  puVar1 = DAT_00000d80 + 1;
  *DAT_00000d80 = 0;
  blockfill((undefined *)puVar1,0x3fc,0);
  DAT_00000d84 = (undefined4 *)reservememadr(s_Custom_SimObjects_80056064,0x400,0);
  *DAT_00000d84 = 0;
  DAT_00000d88 = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Object_DeInitCustomObjects__Fv()
 // line 600, offset 0x800a560c
	/* begin block 1 */
		// Start line: 601
		// Start offset: 0x800A560C
	/* end block 1 */
	// End offset: 0x800A5654
	// End Line: 609

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Object_DeInitCustomObjects__Fv(void)

{
  if (DAT_00000d7c != 0) {
    purgememadr(DAT_00000d7c);
  }
  if (DAT_00000d84 != 0) {
    purgememadr(DAT_00000d84);
  }
  if (DAT_00000d80 != 0) {
    purgememadr(DAT_00000d80);
  }
  DAT_00000d7c = 0;
  DAT_00000d80 = 0;
  DAT_00000d84 = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Object_ClearCustomObjects__Fv()
 // line 616, offset 0x800a566c
	/* begin block 1 */
		// Start line: 617
		// Start offset: 0x800A566C

		/* begin block 1.1 */
			// Start line: 617
			// Start offset: 0x800A566C
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x800A5710
		// End Line: 633
	/* end block 1 */
	// End offset: 0x800A572C
	// End Line: 636

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Object_ClearCustomObjects__Fv(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  Car_tObj **ppCVar4;
  int iVar5;
  
  iVar3 = Cars_gNumTrafficCars;
  puVar2 = DAT_00000d84;
  puVar1 = DAT_00000d80;
  iVar5 = 0;
  *DAT_00000d7c = 0;
  *puVar1 = 0;
  *puVar2 = 0;
  if (0 < iVar3) {
    ppCVar4 = &__Cars_gTrafficCarList_9__;
    do {
      iVar5 = iVar5 + 1;
      (*ppCVar4)->carFlags = (*ppCVar4)->carFlags & 0xfffffbff;
      ppCVar4 = ppCVar4 + 1;
    } while (iVar5 < iVar3);
  }
  iVar3 = Cars_gNumCopCars;
  iVar5 = 0;
  if (0 < Cars_gNumCopCars) {
    ppCVar4 = &__Cars_gCopCarList_9__;
    do {
      iVar5 = iVar5 + 1;
      (*ppCVar4)->carFlags = (*ppCVar4)->carFlags & 0xfffffbff;
      ppCVar4 = ppCVar4 + 1;
    } while (iVar5 < iVar3);
  }
  if (Track_gSaveSurface != (SaveSurface *)0x0) {
    RestoreAll__11SaveSurface(Track_gSaveSurface);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetCautionSurface__FP8coorddefP12BWorldSm_Pos(struct coorddef *pt /*$a0*/, struct BWorldSm_Pos *slicePos /*$s0*/)
 // line 648, offset 0x800a573c
	/* begin block 1 */
		// Start line: 649
		// Start offset: 0x800A573C
	/* end block 1 */
	// End offset: 0x800A57A0
	// End Line: 658

void SetCautionSurface__FP8coorddefP12BWorldSm_Pos(coorddef *pt,BWorldSm_Pos *slicePos)

{
  Trk_NewSimQuad *simQuad;
  
  BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi(pt,slicePos,1);
  simQuad = slicePos->simQuad;
  if ((simQuad != (Trk_NewSimQuad *)0x0) && ((simQuad->surface & 0x40) == 0)) {
    Save__11SaveSurfaceP14Trk_NewSimQuad(Track_gSaveSurface,simQuad);
    slicePos->simQuad->surface = slicePos->simQuad->surface | 0x40;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Object_AddCustomSimObject__FP9SceneElemii(struct SceneElem *objectData /*$s4*/, int serialNum /*$s5*/, int instIndex /*$s6*/)
 // line 668, offset 0x800a57b0
	/* begin block 1 */
		// Start line: 669
		// Start offset: 0x800A57B0

		/* begin block 1.1 */
			// Start line: 669
			// Start offset: 0x800A57B0

			/* begin block 1.1.1 */
				// Start line: 671
				// Start offset: 0x800A57EC
				// Variables:
			// 		struct Trk_SimObject *simObj; // $s3
			// 		struct BWorldSm_Pos slicePos; // stack offset -184
			// 		struct coorddef pt; // stack offset -48

				/* begin block 1.1.1.1 */
					// Start line: 671
					// Start offset: 0x800A57EC
					// Variables:
				// 		struct Group *this; // $v1

					/* begin block 1.1.1.1.1 */
						// Start line: 671
						// Start offset: 0x800A57EC
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A57EC
					// End Line: 671
				/* end block 1.1.1.1 */
				// End offset: 0x800A57EC
				// End Line: 671
			/* end block 1.1.1 */
			// End offset: 0x800A5924
			// End Line: 716
		/* end block 1.1 */
		// End offset: 0x800A5924
		// End Line: 716
	/* end block 1 */
	// End offset: 0x800A5924
	// End Line: 719

int Object_AddCustomSimObject__FP9SceneElemii(SceneElem *objectData,int serialNum,int instIndex)

{
  undefined uVar1;
  int iVar2;
  int *piVar3;
  BWorldSm_Pos local_b8;
  coorddef local_30;
  
  if (objectData->type == 0) {
    piVar3 = DAT_00000d80 + *DAT_00000d80 * 5 + 1;
    *piVar3 = (objectData->cp).x;
    piVar3[1] = (objectData->cp).y;
    piVar3[2] = (objectData->cp).z;
    BWorldSm_SetSlice__FiP12BWorldSm_Pos(1,&local_b8);
    local_30.x = (objectData->cp).x;
    local_30.y = (objectData->cp).y;
    local_30.z = (objectData->cp).z;
    SetCautionSurface__FP8coorddefP12BWorldSm_Pos(&local_30,&local_b8);
    local_30.x = local_30.x + -0x40000;
    SetCautionSurface__FP8coorddefP12BWorldSm_Pos(&local_30,&local_b8);
    local_30.x = local_30.x + 0x80000;
    SetCautionSurface__FP8coorddefP12BWorldSm_Pos(&local_30,&local_b8);
    local_30.x = local_30.x + -0x40000;
    local_30.z = local_30.z + -0x40000;
    SetCautionSurface__FP8coorddefP12BWorldSm_Pos(&local_30,&local_b8);
    local_30.z = local_30.z + 0x80000;
    SetCautionSurface__FP8coorddefP12BWorldSm_Pos(&local_30,&local_b8);
    DAT_00000d88 = (int)local_b8.slice;
    iVar2 = objectData->scalar2;
    *(short *)((int)piVar3 + 0xe) = (short)serialNum + 400;
    *(short *)(piVar3 + 3) = (short)(iVar2 >> 9);
    *(char *)((int)piVar3 + 0x12) = (char)instIndex + -0x80;
    uVar1 = 2;
    if (8 < objectData->scalar1) {
      uVar1 = 1;
    }
    *(undefined *)((int)piVar3 + 0x13) = uVar1;
    *DAT_00000d80 = *DAT_00000d80 + 1;
  }
  return *DAT_00000d80 + -1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Object_GetObjDefID__Fi(int index /*$a0*/)
 // line 785, offset 0x800a5958
	/* begin block 1 */
		// Start line: 786
		// Start offset: 0x800A5958
	/* end block 1 */
	// End offset: 0x800A59A4
	// End Line: 791

int Object_GetObjDefID__Fi(int index)

{
  if ((gPersistObjDef != (Group *)0x0) && (index < gPersistObjDef->m_num_elements)) {
    return (int)Track_gObjDefs[index]->id;
  }
  return 0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Object_FindDefWithThisID__Fi(int ID /*$a0*/)
 // line 794, offset 0x800a59ac
	/* begin block 1 */
		// Start line: 795
		// Start offset: 0x800A59AC

		/* begin block 1.1 */
			// Start line: 796
			// Start offset: 0x800A59AC
			// Variables:
		// 		int i; // $v1

			/* begin block 1.1.1 */
				// Start line: 796
				// Start offset: 0x800A59C4

				/* begin block 1.1.1.1 */
					// Start line: 796
					// Start offset: 0x800A59C4
					// Variables:
				// 		struct Group *this; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 796
						// Start offset: 0x800A59C4
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A59C4
					// End Line: 796
				/* end block 1.1.1.1 */
				// End offset: 0x800A59C4
				// End Line: 796
			/* end block 1.1.1 */
			// End offset: 0x800A59F4
			// End Line: 799
		/* end block 1.1 */
		// End offset: 0x800A59FC
		// End Line: 800
	/* end block 1 */
	// End offset: 0x800A59FC
	// End Line: 801

int Object_FindDefWithThisID__Fi(int ID)

{
  Trk_ObjectDef *pTVar1;
  int iVar2;
  Trk_ObjectDef **ppTVar3;
  
  iVar2 = 0;
  ppTVar3 = Track_gObjDefs;
  while( true ) {
    if (gPersistObjDef->m_num_elements <= iVar2) {
      return -1;
    }
    pTVar1 = *ppTVar3;
    ppTVar3 = ppTVar3 + 1;
    if (ID == (int)pTVar1->id) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Object_AddCustomObject__FP9SceneElemi(struct SceneElem *objectData /*$s1*/, int setupSimDataFlag /*$s2*/)
 // line 808, offset 0x800a5a04
	/* begin block 1 */
		// Start line: 809
		// Start offset: 0x800A5A04

		/* begin block 1.1 */
			// Start line: 809
			// Start offset: 0x800A5A04

			/* begin block 1.1.1 */
				// Start line: 814
				// Start offset: 0x800A5A58

				/* begin block 1.1.1.1 */
					// Start line: 816
					// Start offset: 0x800A5A58
					// Variables:
				// 		struct Trk_CollideBoomInst *objBoomInstance; // $s0
				// 		int index; // $v1
				// 		struct tQuat quat; // stack offset -24

					/* begin block 1.1.1.1.1 */
						// Start line: 816
						// Start offset: 0x800A5A58
						// Variables:
					// 		struct Group *this; // $a0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 816
							// Start offset: 0x800A5A58
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800A5A58
						// End Line: 816
					/* end block 1.1.1.1.1 */
					// End offset: 0x800A5A58
					// End Line: 816

					/* begin block 1.1.1.1.2 */
						// Start line: 844
						// Start offset: 0x800A5B0C

						/* begin block 1.1.1.1.2.1 */
							// Start line: 845
							// Start offset: 0x800A5B48
							// Variables:
						// 		int newInd; // $v1
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x800A5B94
						// End Line: 857
					/* end block 1.1.1.1.2 */
					// End offset: 0x800A5B94
					// End Line: 857
				/* end block 1.1.1.1 */
				// End offset: 0x800A5C10
				// End Line: 887

				/* begin block 1.1.1.2 */
					// Start line: 909
					// Start offset: 0x800A5C2C
					// Variables:
				// 		struct Trk_SFX *sfxInstance; // $v0

					/* begin block 1.1.1.2.1 */
						// Start line: 909
						// Start offset: 0x800A5C2C
						// Variables:
					// 		struct Group *this; // $a1

						/* begin block 1.1.1.2.1.1 */
							// Start line: 909
							// Start offset: 0x800A5C2C
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x800A5C2C
						// End Line: 909
					/* end block 1.1.1.2.1 */
					// End offset: 0x800A5C2C
					// End Line: 909
				/* end block 1.1.1.2 */
				// End offset: 0x800A5C2C
				// End Line: 909

				/* begin block 1.1.1.3 */
					// Start line: 925
					// Start offset: 0x800A5C80
					// Variables:
				// 		int i; // $a1
				// 		struct Car_tObj *carObj; // $a0

					/* begin block 1.1.1.3.1 */
						// Start line: 926
						// Start offset: 0x800A5C80

						/* begin block 1.1.1.3.1.1 */
							// Start line: 929
							// Start offset: 0x800A5C94

							/* begin block 1.1.1.3.1.1.1 */
								// Start line: 936
								// Start offset: 0x800A5CF8

								/* begin block 1.1.1.3.1.1.1.1 */
									// Start line: 937
									// Start offset: 0x800A5D10
									// Variables:
								// 		struct AIHigh_Traffic *aicar; // $v0

									/* begin block 1.1.1.3.1.1.1.1.1 */
										// Start line: 939
										// Start offset: 0x800A5D10
										// Variables:
									// 		struct AIHigh_Traffic *this; // $v0
									// 		struct SceneElem *accidentData; // $s1

										/* begin block 1.1.1.3.1.1.1.1.1.1 */
											// Start line: 939
											// Start offset: 0x800A5D10
										/* end block 1.1.1.3.1.1.1.1.1.1 */
										// End offset: 0x800A5D40
										// End Line: 940
									/* end block 1.1.1.3.1.1.1.1.1 */
									// End offset: 0x800A5D40
									// End Line: 940
								/* end block 1.1.1.3.1.1.1.1 */
								// End offset: 0x800A5D40
								// End Line: 959
							/* end block 1.1.1.3.1.1.1 */
							// End offset: 0x800A5D40
							// End Line: 959
						/* end block 1.1.1.3.1.1 */
						// End offset: 0x800A5D40
						// End Line: 959
					/* end block 1.1.1.3.1 */
					// End offset: 0x800A5D40
					// End Line: 959
				/* end block 1.1.1.3 */
				// End offset: 0x800A5D40
				// End Line: 959
			/* end block 1.1.1 */
			// End offset: 0x800A5D40
			// End Line: 996
		/* end block 1.1 */
		// End offset: 0x800A5D40
		// End Line: 996
	/* end block 1 */
	// End offset: 0x800A5D40
	// End Line: 1002

void Object_AddCustomObject__FP9SceneElemi(SceneElem *objectData,int setupSimDataFlag)

{
  short sVar1;
  undefined2 uVar2;
  Group *pGVar3;
  undefined uVar4;
  int *piVar5;
  int iVar6;
  Car_tObj **ppCVar7;
  int *piVar8;
  tQuat local_18;
  
  piVar8 = DAT_00000d84;
  iVar6 = objectData->type;
  if (iVar6 == 1) {
    iVar6 = 0;
    if (((objectData->subType == 0) && (Cars_gNumTrafficCars != 0)) && (0 < Cars_gNumTrafficCars)) {
      ppCVar7 = &__Cars_gTrafficCarList_9__;
      do {
        if ((((*ppCVar7)->carFlags & 0x400U) == 0) &&
           ((int)((*ppCVar7)->render).palNum == objectData->scalar3)) break;
        iVar6 = iVar6 + 1;
        ppCVar7 = ppCVar7 + 1;
      } while (iVar6 < Cars_gNumTrafficCars);
      if (iVar6 < Cars_gNumTrafficCars) {
        *(SceneElem **)
         &(&__highLevelAIObjs_9__)[(&__Cars_gTrafficCarList_9__)[iVar6]->carIndex][1].carObj_ =
             objectData;
      }
    }
  }
  else {
    if (iVar6 < 2) {
      if (iVar6 == 0) {
        iVar6 = *DAT_00000d7c + -1;
        piVar8 = DAT_00000d7c + 1;
        if (iVar6 != -1) {
          do {
            iVar6 = iVar6 + -1;
            piVar8 = (int *)((int)piVar8 + (int)*(short *)(DAT_00000d7c + 1));
          } while (iVar6 != -1);
        }
        *(undefined2 *)piVar8 = 0x24;
        uVar4 = 5;
        if (8 < objectData->scalar1) {
          uVar4 = 2;
        }
        *(undefined *)((int)piVar8 + 2) = uVar4;
        *(undefined *)(piVar8 + 1) = 3;
        *(undefined *)((int)piVar8 + 5) = 0;
        piVar8[2] = (objectData->cp).x;
        piVar8[3] = (objectData->cp).y;
        iVar6 = (objectData->cp).z;
        *(undefined *)((int)piVar8 + 3) = 0;
        pGVar3 = gPersistObjDef;
        piVar8[4] = iVar6;
        sVar1 = *(short *)&objectData->subTypeIndex;
        *(short *)((int)piVar8 + 6) = sVar1;
        if (pGVar3->m_num_elements <= (int)sVar1) {
          *(undefined2 *)((int)piVar8 + 6) = 0;
        }
        if ((objectData->committed != 0) && (objectData->visible != 0)) {
          iVar6 = Object_GetObjDefID__Fi((int)*(short *)((int)piVar8 + 6));
          if (iVar6 != objectData->scalar1) {
            Object_FindDefWithThisID__Fi(objectData->scalar1);
            iVar6 = Object_FindDefWithThisID__Fi(objectData->scalar1);
            if (iVar6 == -1) {
              iVar6 = Object_GetObjDefID__Fi((int)*(short *)((int)piVar8 + 6));
              objectData->scalar1 = iVar6;
            }
            else {
              *(undefined2 *)((int)piVar8 + 6) = (short)iVar6;
              objectData->subTypeIndex = iVar6;
              Object_FindDefWithThisID__Fi(objectData->scalar1);
            }
          }
        }
        Quatern_MatToQuat__FP10matrixtdefP5tQuat(&objectData->orient,&local_18);
        *(short *)((int)piVar8 + 0x1a) = local_18.w;
        *(short *)(piVar8 + 5) = local_18.x;
        *(short *)((int)piVar8 + 0x16) = local_18.y;
        *(undefined2 *)(piVar8 + 7) = 0x100;
        *(undefined2 *)((int)piVar8 + 0x1e) = 0x100;
        *(undefined2 *)(piVar8 + 8) = 0x100;
        *(short *)(piVar8 + 6) = local_18.z;
        if (setupSimDataFlag == 0) {
          *(undefined *)((int)piVar8 + 0x22) = 0;
          *(undefined *)((int)piVar8 + 0x23) = 0;
        }
        else {
          iVar6 = Object_AddCustomSimObject__FP9SceneElemii(objectData,*DAT_00000d7c,*DAT_00000d7c);
          *(char *)((int)piVar8 + 0x22) = (char)iVar6;
          *(undefined *)((int)piVar8 + 0x23) = *(undefined *)&objectData->scalar1;
        }
        *DAT_00000d7c = *DAT_00000d7c + 1;
      }
    }
    else {
      if (iVar6 == 2) {
        piVar5 = DAT_00000d84 + *DAT_00000d84 * 4 + 1;
        *piVar5 = (objectData->cp).x;
        piVar5[1] = (objectData->cp).y;
        piVar5[2] = (objectData->cp).z;
        uVar2 = *(undefined2 *)&objectData->subType;
        *(undefined2 *)((int)piVar5 + 0xe) = 0;
        *(undefined2 *)(piVar5 + 3) = uVar2;
        *piVar8 = *piVar8 + 1;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetObjMaxDimensions__FPP13Trk_ObjectDefP14Trk_SimpleInstP8coorddef(struct Trk_ObjectDef **pObjDefs /*$a0*/, struct Trk_SimpleInst *objInstance /*$a1*/, struct coorddef *dimensions /*$s1*/)
 // line 1011, offset 0x800a5d58
	/* begin block 1 */
		// Start line: 1012
		// Start offset: 0x800A5D58

		/* begin block 1.1 */
			// Start line: 1012
			// Start offset: 0x800A5D58
			// Variables:
		// 		struct Trk_ObjectDef *objDef; // $s0
		// 		struct CCOORD16 minDim; // stack offset -32
		// 		struct CCOORD16 maxDim; // stack offset -24
		// 		int vertCount; // $a2
		// 		struct CCOORD16 *pts; // $a3
		/* end block 1.1 */
		// End offset: 0x800A5E74
		// End Line: 1047
	/* end block 1 */
	// End offset: 0x800A5E74
	// End Line: 1047

void GetObjMaxDimensions__FPP13Trk_ObjectDefP14Trk_SimpleInstP8coorddef
               (Trk_ObjectDef **pObjDefs,Trk_SimpleInst *objInstance,coorddef *dimensions)

{
  short sVar1;
  short sVar2;
  short sVar3;
  Trk_ObjectDef *pTVar4;
  uint uVar5;
  Trk_ObjectDef *pTVar6;
  Trk_ObjectDef *pTVar7;
  short local_20;
  short local_1e;
  short local_1c;
  short local_18;
  short local_16;
  short local_14;
  
  pTVar7 = pObjDefs[(int)objInstance->pad];
  memset(&local_20,0,8);
  memset(&local_18,0,8);
  uVar5 = (uint)pTVar7->vertexCount;
  pTVar6 = pTVar7 + 1;
  sVar1 = local_18;
  sVar2 = local_16;
  sVar3 = local_14;
  while (uVar5 = uVar5 - 1, uVar5 != 0xffffffff) {
    pTVar4 = pTVar7 + 2;
    local_18 = pTVar6->id;
    if ((pTVar6->id <= sVar1) && (local_18 = sVar1, pTVar6->id < local_20)) {
      local_20 = pTVar6->id;
      local_18 = sVar1;
    }
    local_16 = *(short *)&pTVar7[1].vertexCount;
    if ((*(short *)&pTVar7[1].vertexCount <= sVar2) &&
       (local_16 = sVar2, *(short *)&pTVar7[1].vertexCount < local_1e)) {
      local_1e = *(short *)&pTVar7[1].vertexCount;
      local_16 = sVar2;
    }
    local_14 = pTVar4->id;
    if ((pTVar4->id <= sVar3) && (local_14 = sVar3, pTVar4->id < local_1c)) {
      local_1c = pTVar4->id;
      local_14 = sVar3;
    }
    pTVar6 = pTVar6 + 2;
    pTVar7 = pTVar4;
    sVar1 = local_18;
    sVar2 = local_16;
    sVar3 = local_14;
  }
  dimensions->x = ((int)sVar1 - (int)local_20) * 0x200;
  dimensions->y = ((int)sVar2 - (int)local_1e) * 0x200;
  dimensions->z = ((int)sVar3 - (int)local_1c) * 0x200;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Object_InitIMassObjectInfo__Fv()
 // line 1055, offset 0x800a5ed0
	/* begin block 1 */
		// Start line: 1056
		// Start offset: 0x800A5ED0

		/* begin block 1.1 */
			// Start line: 1064
			// Start offset: 0x800A5F2C
			// Variables:
		// 		int objIndex; // $s1
		// 		struct Trk_AnimateInst *objInst; // $s0
		/* end block 1.1 */
		// End offset: 0x800A5FC8
		// End Line: 1086
	/* end block 1 */
	// End offset: 0x800A5FC8
	// End Line: 1086

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Object_InitIMassObjectInfo__Fv(void)

{
  Trk_ObjectDef **pObjDefs;
  Trk_SimpleInst **ppTVar1;
  short *psVar2;
  Trk_SimpleInst *objInstance;
  int iVar3;
  
  DAT_00000d90 = 0;
  DAT_00000d8c = (short *)0x0;
  if ((gPersistObjInst != (Group *)0x0) && (gPersistObjDef != (Group *)0x0)) {
    DAT_00000d8c = reservememadr(s_IMObj_info_80056078,gPersistObjInst->m_num_elements << 5,0);
    iVar3 = 0;
    if ((DAT_00000d8c != (short *)0x0) &&
       (objInstance = (Trk_SimpleInst *)(gPersistObjInst + 1), 0 < gPersistObjInst->m_num_elements))
    {
      do {
        pObjDefs = Track_gObjDefs;
        if (objInstance->type == '\a') {
          ppTVar1 = (Trk_SimpleInst **)(DAT_00000d8c + DAT_00000d90 * 0x10);
          *ppTVar1 = objInstance;
          GetObjMaxDimensions__FPP13Trk_ObjectDefP14Trk_SimpleInstP8coorddef
                    (pObjDefs,objInstance,(coorddef *)(ppTVar1 + 1));
          psVar2 = DAT_00000d8c + DAT_00000d90 * 0x10;
          DAT_00000d90 = DAT_00000d90 + 1;
          *(undefined4 *)(psVar2 + 8) = 0;
          *(undefined4 *)(psVar2 + 10) = 0;
          *(undefined4 *)(psVar2 + 0xc) = 0;
          *(undefined4 *)(psVar2 + 0xe) = 0;
        }
        iVar3 = iVar3 + 1;
        objInstance = (Trk_SimpleInst *)((int)&objInstance->size + (int)objInstance->size);
      } while (iVar3 < gPersistObjInst->m_num_elements);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Object_DeInitIMassObjectInfo__Fv()
 // line 1093, offset 0x800a5fdc
	/* begin block 1 */
		// Start line: 1094
		// Start offset: 0x800A5FDC
	/* end block 1 */
	// End offset: 0x800A5FF4
	// End Line: 1096

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Object_DeInitIMassObjectInfo__Fv(void)

{
  if (DAT_00000d8c != 0) {
    purgememadr(DAT_00000d8c);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Object_GetNumIMassObjects__Fv()
 // line 1101, offset 0x800a6004
	/* begin block 1 */
		// Start line: 1102
		// Start offset: 0x800A6004
	/* end block 1 */
	// End offset: 0x800A6004
	// End Line: 1103

/* WARNING: Unknown calling convention yet parameter storage is locked */

int Object_GetNumIMassObjects__Fv(void)

{
  return DAT_00000d90;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Object_GetIMassObjectDimensions__FiP8coorddef(int objIndex /*$a0*/, struct coorddef *dimensions /*$a1*/)
 // line 1108, offset 0x800a6010
	/* begin block 1 */
		// Start line: 1109
		// Start offset: 0x800A6010
	/* end block 1 */
	// End offset: 0x800A6010
	// End Line: 1112

void Object_GetIMassObjectDimensions__FiP8coorddef(int objIndex,coorddef *dimensions)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = objIndex * 0x20 + DAT_00000d8c;
  iVar2 = *(int *)(iVar1 + 8);
  iVar3 = *(int *)(iVar1 + 0xc);
  dimensions->x = *(int *)(iVar1 + 4);
  dimensions->y = iVar2;
  dimensions->z = iVar3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Object_GetIMassObjectMotion__FiP8coorddefP10matrixtdefT1(int objIndex /*$s4*/, struct coorddef *cpoint /*$s3*/, struct matrixtdef *orientMat /*$s1*/, struct coorddef *velocity /*$s2*/)
 // line 1117, offset 0x800a603c
	/* begin block 1 */
		// Start line: 1118
		// Start offset: 0x800A603C

		/* begin block 1.1 */
			// Start line: 1118
			// Start offset: 0x800A603C
			// Variables:
		// 		int timeDiff; // $a0
		// 		int objTime; // $s1
		/* end block 1.1 */
		// End offset: 0x800A61A8
		// End Line: 1143
	/* end block 1 */
	// End offset: 0x800A61A8
	// End Line: 1143

void Object_GetIMassObjectMotion__FiP8coorddefP10matrixtdefT1
               (int objIndex,coorddef *cpoint,matrixtdef *orientMat,coorddef *velocity)

{
  int ticks;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = objIndex * 0x20;
  ticks = DrawW_GetAnimationTime__FP15Trk_AnimateInst(*(Trk_AnimateInst **)(iVar4 + DAT_00000d8c));
  Anim_GetRotPos__FP15Trk_AnimateInstiiP8coorddefP10matrixtdef
            (*(Trk_AnimateInst **)(iVar4 + DAT_00000d8c),1,ticks,cpoint,orientMat);
  iVar4 = iVar4 + DAT_00000d8c;
  iVar2 = ticks - *(int *)(iVar4 + 0x1c);
  if (iVar2 < 1) {
    velocity->x = 0;
    velocity->y = 0;
    velocity->z = 0;
  }
  else {
    iVar1 = cpoint->x - *(int *)(iVar4 + 0x10);
    if (iVar2 == 0) {
      trap(0x1c00);
    }
    if ((iVar2 == -1) && (iVar1 == -0x80000000)) {
      trap(0x1800);
    }
    velocity->x = iVar1 / iVar2 << 6;
    iVar1 = cpoint->y - *(int *)(iVar4 + 0x14);
    if (iVar2 == 0) {
      trap(0x1c00);
    }
    if ((iVar2 == -1) && (iVar1 == -0x80000000)) {
      trap(0x1800);
    }
    velocity->y = iVar1 / iVar2 << 6;
    iVar4 = cpoint->z - *(int *)(iVar4 + 0x18);
    if (iVar2 == 0) {
      trap(0x1c00);
    }
    if ((iVar2 == -1) && (iVar4 == -0x80000000)) {
      trap(0x1800);
    }
    velocity->z = iVar4 / iVar2 << 6;
  }
  iVar2 = objIndex * 0x20 + DAT_00000d8c;
  iVar4 = objIndex * 0x20 + DAT_00000d8c;
  iVar1 = cpoint->y;
  iVar3 = cpoint->z;
  *(int *)(iVar2 + 0x10) = cpoint->x;
  *(int *)(iVar2 + 0x14) = iVar1;
  *(int *)(iVar2 + 0x18) = iVar3;
  *(int *)(iVar4 + 0x1c) = ticks;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Draw__23ObjectFinishedMultiAnimP13DRender_tViewP11Draw_DCachei(struct ObjectFinishedMultiAnim *this /*$a0*/, struct DRender_tView *Vi /*$a1*/, struct Draw_DCache *sd /*$a2*/, int offset /*$a3*/)
 // line 1160, offset 0x800a61f8
	/* begin block 1 */
		// Start line: 1161
		// Start offset: 0x800A61F8
	/* end block 1 */
	// End offset: 0x800A61F8
	// End Line: 1162

int Draw__23ObjectFinishedMultiAnimP13DRender_tViewP11Draw_DCachei
              (ObjectFinishedMultiAnim *this,DRender_tView *Vi,Draw_DCache *sd,int offset)

{
  return 2;
}



// decompiled code
// original method signature: 
// struct ObjectMultiAnim * /*$ra*/ __15ObjectMultiAnimP8coorddefP7AnimDefP19Trk_CollideBoomInstP13Trk_ObjectDefP13Trk_SimObjectP23ObjectFinishedMultiAnim(struct ObjectMultiAnim *this /*$s0*/, struct coorddef *impactVel /*$a1*/, struct AnimDef *def /*$a2*/, struct Trk_CollideBoomInst *objCollideInstance /*$s1*/, struct Trk_ObjectDef *objDef /*stack 16*/, struct Trk_SimObject *simObj /*stack 20*/, struct ObjectFinishedMultiAnim *finishedAnim /*stack 24*/)
 // line 1165, offset 0x800a6200
	/* begin block 1 */
		// Start line: 1166
		// Start offset: 0x800A6200
		// Variables:
	// 		struct ObjectAnim *this; // $s0

		/* begin block 1.1 */
			// Start line: 1166
			// Start offset: 0x800A6200
		/* end block 1.1 */
		// End offset: 0x800A6200
		// End Line: 1166
	/* end block 1 */
	// End offset: 0x800A6200
	// End Line: 1166

	/* begin block 2 */
		// Start line: 1166
		// Start offset: 0x800A6200
	/* end block 2 */
	// End offset: 0x800A62CC
	// End Line: 1183

ObjectMultiAnim *

__15ObjectMultiAnimP8coorddefP7AnimDefP19Trk_CollideBoomInstP13Trk_ObjectDefP13Trk_SimObjectP23ObjectFinishedMultiAnim
          (ObjectMultiAnim *this,coorddef *impactVel,AnimDef *def,
          Trk_CollideBoomInst *objCollideInstance,Trk_ObjectDef *objDef,Trk_SimObject *simObj,
          ObjectFinishedMultiAnim *finishedAnim)

{
  byte bVar1;
  int iVar2;
  Trk_CollideBoomInst *pTVar3;
  AnimScript *this_00;
  
  (this->ObjectAnim)._vf[0].value = 0x800560b8;
  (this->ObjectAnim)._vf[1].value = impactVel->x >> 6;
  (this->ObjectAnim)._vf[2].value = impactVel->y >> 6;
  iVar2 = impactVel->z;
  *(AnimDef **)&this->objCollideInstance = def;
  *(Trk_CollideBoomInst **)&(this->impactVel).z = objCollideInstance;
  *(Trk_ObjectDef **)&this->simObj = objDef;
  *(Trk_SimObject **)&(this->impactVel).y = simObj;
  (this->impactVel).x = iVar2 >> 6;
  if (objCollideInstance->type == '\x06') {
    this_00 = (AnimScript *)__builtin_new(0x14);
    pTVar3 = this->objCollideInstance;
    bVar1 = *(byte *)((int)&objCollideInstance->y + 1);
  }
  else {
    this_00 = (AnimScript *)__builtin_new(0x14);
    pTVar3 = this->objCollideInstance;
    bVar1 = objCollideInstance->boomIndex;
  }
  this_00 = __10AnimScriptP5Groupiii(this_00,gPersistObjInst,8,(uint)bVar1,*(int *)&pTVar3->zoffset)
  ;
  *(AnimScript **)&this->objectAngle = this_00;
  SetAnimAttrib__10AnimScripti((AnimScript *)this->objectAngle,2);
  *(ObjectFinishedMultiAnim **)&this->impactAngle = finishedAnim;
  return this;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Draw__15ObjectMultiAnimP13DRender_tViewP11Draw_DCachei(struct ObjectMultiAnim *this /*$s5*/, struct DRender_tView *Vi /*$fp*/, struct Draw_DCache *sd /*stack 8*/, int offset /*stack 12*/)
 // line 1188, offset 0x800a62f8
	/* begin block 1 */
		// Start line: 1189
		// Start offset: 0x800A62F8
		// Variables:
	// 		struct matrixtdef matrix; // stack offset -176
	// 		struct coorddef animcp; // stack offset -136

		/* begin block 1.1 */
			// Start line: 1189
			// Start offset: 0x800A62F8

			/* begin block 1.1.1 */
				// Start line: 1197
				// Start offset: 0x800A6358
				// Variables:
			// 		int i; // $v1
			// 		struct ObjectAnim *anim; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800A63D4
			// End Line: 1205

			/* begin block 1.1.2 */
				// Start line: 1207
				// Start offset: 0x800A63D4
				// Variables:
			// 		struct Trk_ObjectDef *pObjDef; // $a3
			// 		int animIndex; // $s6
			// 		int partCount; // $s7
			// 		struct coorddef cp; // stack offset -120
			// 		struct coorddef impact; // stack offset -104
			// 		struct matrixtdef RSmatrix; // stack offset -88
			// 		struct Trk_AnimateBoomInst *objInst; // $s0

				/* begin block 1.1.2.1 */
					// Start line: 1211
					// Start offset: 0x800A63D4
					// Variables:
				// 		int ticks; // $a0
				// 		struct Trk_AnimateInst *animInst; // $v0
				/* end block 1.1.2.1 */
				// End offset: 0x800A6434
				// End Line: 1223

				/* begin block 1.1.2.2 */
					// Start line: 1223
					// Start offset: 0x800A6434

					/* begin block 1.1.2.2.1 */
						// Start line: 1229
						// Start offset: 0x800A6488
						// Variables:
					// 		struct tQuat quat; // stack offset -48

						/* begin block 1.1.2.2.1.1 */
							// Start line: 1238
							// Start offset: 0x800A6488
							// Variables:
						// 		int t1; // $s4
						// 		int t2; // $s3
						// 		int sx; // $s0
						// 		int sy; // $s1
						// 		int sz; // $s2
						/* end block 1.1.2.2.1.1 */
						// End offset: 0x800A6574
						// End Line: 1263
					/* end block 1.1.2.2.1 */
					// End offset: 0x800A6574
					// End Line: 1263
				/* end block 1.1.2.2 */
				// End offset: 0x800A6574
				// End Line: 1263
			/* end block 1.1.2 */
			// End offset: 0x800A66E8
			// End Line: 1293
		/* end block 1.1 */
		// End offset: 0x800A66E8
		// End Line: 1293
	/* end block 1 */
	// End offset: 0x800A66EC
	// End Line: 1297

int Draw__15ObjectMultiAnimP13DRender_tViewP11Draw_DCachei
              (ObjectMultiAnim *this,DRender_tView *Vi,Draw_DCache *sd,int offset)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ObjectAnim *pOVar5;
  ObjectAnim *pOVar6;
  int iVar7;
  Group *pGVar8;
  int iVar9;
  int index;
  int iVar10;
  matrixtdef mStack176;
  coorddef local_88;
  coorddef local_78;
  int local_68;
  int local_64;
  int local_60;
  matrixtdef local_58;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar2 = GetTimedAnimPosRot__10AnimScriptiP8coorddefP10matrixtdef
                    ((AnimScript *)this->objectAngle,0,&local_88,&mStack176);
  if (iVar2 + 1U < 2) {
    pOVar6 = (ObjectAnim *)this->impactAngle;
    sVar1 = *(short *)((this->impactVel).y + 0xe);
    this->impactAngle = 0;
    pOVar5 = (&__gSimObjAnims_450__)[(int)sVar1];
    if (pOVar5 != (ObjectAnim *)0x0) {
      uVar3 = pOVar5->_vf[0].value;
      (**(code **)(uVar3 + 0xc))((int)&pOVar5->_vf[0].value + (int)*(short *)(uVar3 + 8),3);
    }
    (&__gSimObjAnims_450__)[(int)sVar1] = pOVar6;
    uVar3 = pOVar6->_vf[0].value;
    iVar2 = (**(code **)(uVar3 + 0x14))
                      ((int)&pOVar6->_vf[0].value + (int)*(short *)(uVar3 + 0x10),Vi,sd,offset);
  }
  else {
    iVar2 = *(int *)((int *)this->objectAngle)[4];
    local_60 = simGlobal.gameTicks - *(int *)this->objectAngle;
    iVar10 = *(int *)&this->objCollideInstance->zoffset;
    iVar2 = (int)*(short *)(iVar2 + 10) * (int)*(short *)(iVar2 + 8) >> 1;
    index = 0;
    if (iVar2 < local_60) {
      local_60 = iVar2;
    }
    local_68 = (this->ObjectAnim)._vf[1].value * local_60;
    local_64 = (this->ObjectAnim)._vf[2].value * local_60;
    local_60 = (this->impactVel).x * local_60;
    iVar2 = (this->impactVel).z;
    if (*(char *)(iVar2 + 2) != '\x06') {
      local_30 = *(undefined4 *)(iVar2 + 0x14);
      local_2c = *(undefined4 *)(iVar2 + 0x18);
      Quatern_QuatToMat__FP5tQuatP10matrixtdef((tQuat *)&local_30,&local_58);
      iVar2 = (this->impactVel).z;
      iVar7 = (int)*(short *)(iVar2 + 0x1c) << 8;
      iVar9 = (int)*(short *)(iVar2 + 0x1e) << 8;
      iVar2 = (int)*(short *)(iVar2 + 0x20) << 8;
      local_58.m[0] = fixedmult(local_58.m[0],iVar7);
      local_58.m[3] = fixedmult(local_58.m[3],iVar7);
      local_58.m[6] = fixedmult(local_58.m[6],iVar7);
      local_58.m[1] = fixedmult(local_58.m[1],iVar9);
      local_58.m[4] = fixedmult(local_58.m[4],iVar9);
      local_58.m[7] = fixedmult(local_58.m[7],iVar9);
      local_58.m[2] = fixedmult(local_58.m[2],iVar2);
      local_58.m[5] = fixedmult(local_58.m[5],iVar2);
      local_58.m[8] = fixedmult(local_58.m[8],iVar2);
    }
    pGVar8 = gPersistObjInst + 1;
    if (0 < iVar10) {
LAB_800a659c:
      GetTimedAnimPosRot__10AnimScriptiP8coorddefP10matrixtdef
                ((AnimScript *)this->objectAngle,index,&local_88,&mStack176);
      if (*(char *)((this->impactVel).z + 2) != '\x06') {
        Math_fasttransmult__FP10matrixtdefN20(&mStack176,&local_58,&mStack176);
      }
      piVar4 = (int *)(this->impactVel).y;
      local_78.y = piVar4[1] + local_88.y;
      local_78.x = *piVar4 + local_88.x + local_68;
      local_78.z = piVar4[2] + local_88.z + local_60;
      do {
        if (*(char *)((int)&pGVar8->m_num_elements + 2) == '\b') {
          iVar2 = (this->impactVel).z;
          if (((*(char *)(iVar2 + 2) != '\x05') ||
              (*(char *)((int)&pGVar8[3].m_num_elements + 1) == *(char *)(iVar2 + 0x23))) &&
             ((*(char *)(iVar2 + 2) != '\x06' ||
              (*(char *)((int)&pGVar8[3].m_num_elements + 1) == *(char *)(iVar2 + 0xd)))))
          goto LAB_800a6694;
        }
        pGVar8 = (Group *)((int)&pGVar8->m_num_elements + (int)*(short *)&pGVar8->m_num_elements);
      } while( true );
    }
LAB_800a66e8:
    iVar2 = 4;
  }
  return iVar2;
LAB_800a6694:
  DrawObjectTransform__FP13DRender_tViewP11Draw_DCacheP10matrixtdefP13Trk_ObjectDefP8coorddefis
            (Vi,sd,&mStack176,Track_gObjDefs[(int)*(short *)((int)&pGVar8[1].m_num_elements + 2)],
             &local_78,offset,-1);
  index = index + 1;
  pGVar8 = (Group *)((int)&pGVar8->m_num_elements + (int)*(short *)&pGVar8->m_num_elements);
  if (iVar10 <= index) goto LAB_800a66e8;
  goto LAB_800a659c;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Draw__22ObjectFinishedSignAnimP13DRender_tViewP11Draw_DCachei(struct ObjectFinishedSignAnim *this /*$t0*/, struct DRender_tView *Vi /*$a1*/, struct Draw_DCache *sd /*$a2*/, int offset /*$a3*/)
 // line 1302, offset 0x800a671c
	/* begin block 1 */
		// Start line: 1303
		// Start offset: 0x800A671C
	/* end block 1 */
	// End offset: 0x800A671C
	// End Line: 1303

int Draw__22ObjectFinishedSignAnimP13DRender_tViewP11Draw_DCachei
              (ObjectFinishedSignAnim *this,DRender_tView *Vi,Draw_DCache *sd,int offset)

{
  DrawObjectTransform__FP13DRender_tViewP11Draw_DCacheP10matrixtdefP13Trk_ObjectDefP8coorddefis
            (Vi,sd,(matrixtdef *)((this->ObjectAnim)._vf + 1),
             (Trk_ObjectDef *)(this->finalMatrix).m[7],(coorddef *)((this->finalMatrix).m[8] + 8),
             offset,-1);
  return 2;
}



// decompiled code
// original method signature: 
// struct ObjectSignAnim * /*$ra*/ __14ObjectSignAnimP8coorddefiP7AnimDefP19Trk_CollideBoomInstP13Trk_ObjectDefP13Trk_SimObjectT1P22ObjectFinishedSignAnim(struct ObjectSignAnim *this /*$s5*/, struct coorddef *impactVel /*$a1*/, int impactAngle /*$a2*/, struct AnimDef *def /*$a3*/, struct Trk_CollideBoomInst *objCollideInstance /*stack 16*/, struct Trk_ObjectDef *objDef /*stack 20*/, struct Trk_SimObject *simObj /*stack 24*/, struct coorddef *roadNormal /*stack 28*/, struct ObjectFinishedSignAnim *finishedAnim /*stack 32*/)
 // line 1308, offset 0x800a6764
	/* begin block 1 */
		// Start line: 1309
		// Start offset: 0x800A6764
		// Variables:
	// 		struct ObjectAnim *this; // $s5

		/* begin block 1.1 */
			// Start line: 1309
			// Start offset: 0x800A6764
		/* end block 1.1 */
		// End offset: 0x800A6764
		// End Line: 1309
	/* end block 1 */
	// End offset: 0x800A6764
	// End Line: 1309

	/* begin block 2 */
		// Start line: 1309
		// Start offset: 0x800A6764
		// Variables:
	// 		int vel; // $s0

		/* begin block 2.1 */
			// Start line: 1326
			// Start offset: 0x800A6864
			// Variables:
		// 		struct coorddef *rotx; // $s3
		// 		struct coorddef *roty; // $s1
		// 		struct coorddef *rotz; // $s2
		// 		struct matrixtdef yawMat; // stack offset -200
		// 		struct matrixtdef objAngleMat; // stack offset -160
		// 		struct matrixtdef tmpMat; // stack offset -120
		// 		struct matrixtdef mat; // stack offset -80
		/* end block 2.1 */
		// End offset: 0x800A6864
		// End Line: 1326
	/* end block 2 */
	// End offset: 0x800A6864
	// End Line: 1326

ObjectSignAnim *

__14ObjectSignAnimP8coorddefiP7AnimDefP19Trk_CollideBoomInstP13Trk_ObjectDefP13Trk_SimObjectT1P22ObjectFinishedSignAnim
          (ObjectSignAnim *this,coorddef *impactVel,int impactAngle,AnimDef *def,
          Trk_CollideBoomInst *objCollideInstance,Trk_ObjectDef *objDef,Trk_SimObject *simObj,
          coorddef *roadNormal,ObjectFinishedSignAnim *finishedAnim)

{
  int numParts;
  AnimScript *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int num;
  matrixtdef *m2;
  matrixtdef mStack200;
  matrixtdef mStack160;
  matrixtdef mStack120;
  matrixtdef mStack80;
  
  (this->ObjectAnim)._vf[0].value = 0x80056088;
  num = impactVel->x;
  numParts = impactVel->z;
  uVar3 = impactVel->y;
  iVar4 = impactVel->z;
  (this->ObjectAnim)._vf[1].value = impactVel->x;
  (this->ObjectAnim)._vf[2].value = uVar3;
  (this->impactVel).x = iVar4;
  this->animParms = (AnimDef *)(impactAngle << 8);
  *(AnimDef **)&this->objCollideInstance = def;
  if (num < 0) {
    num = -num;
  }
  if (numParts < 0) {
    numParts = -numParts;
  }
  *(Trk_CollideBoomInst **)&(this->impactVel).z = objCollideInstance;
  *(Trk_ObjectDef **)&this->simObj = objDef;
  *(Trk_SimObject **)&(this->impactVel).y = simObj;
  iVar4 = CalcObjYawAngle__FP8CCOORD16((CCOORD16 *)(objDef + 1));
  this->objDef = (Trk_ObjectDef *)(iVar4 << 8);
  if (num + numParts >> 0x10 < 10) {
    this_00 = (AnimScript *)__builtin_new(0x14);
    num = this->objCollideInstance->y;
    numParts = *(int *)&this->objCollideInstance->zoffset;
  }
  else {
    this_00 = (AnimScript *)__builtin_new(0x14);
    numParts = *(int *)&this->objCollideInstance->zoffset;
    num = this->objCollideInstance->y + 1;
  }
  this_00 = __10AnimScriptii(this_00,num,numParts);
  *(AnimScript **)&this->objectAngle = this_00;
  SetAnimAttrib__10AnimScripti((AnimScript *)this->objectAngle,2);
  *(ObjectFinishedSignAnim **)&this->impactAngle = finishedAnim;
  num = roadNormal->y;
  numParts = roadNormal->z;
  (finishedAnim->finalMatrix).m[1] = roadNormal->x;
  (finishedAnim->finalMatrix).m[2] = num;
  (finishedAnim->finalMatrix).m[3] = numParts;
  (finishedAnim->finalMatrix).m[4] = 0;
  (finishedAnim->finalMatrix).m[5] = 0;
  (finishedAnim->finalMatrix).m[6] = 0x10000;
  m2 = (matrixtdef *)((finishedAnim->ObjectAnim)._vf + 1);
  uVar3 = fixedmult((finishedAnim->finalMatrix).m[2],0x10000);
  uVar1 = fixedmult((finishedAnim->finalMatrix).m[3],(finishedAnim->finalMatrix).m[5]);
  (finishedAnim->ObjectAnim)._vf[1].value = uVar3 - uVar1;
  uVar3 = fixedmult((finishedAnim->finalMatrix).m[3],(finishedAnim->finalMatrix).m[4]);
  uVar1 = fixedmult((finishedAnim->finalMatrix).m[1],(finishedAnim->finalMatrix).m[6]);
  (finishedAnim->ObjectAnim)._vf[2].value = uVar3 - uVar1;
  uVar3 = fixedmult((finishedAnim->finalMatrix).m[1],(finishedAnim->finalMatrix).m[5]);
  uVar1 = fixedmult((finishedAnim->finalMatrix).m[2],(finishedAnim->finalMatrix).m[4]);
  uVar2 = (finishedAnim->ObjectAnim)._vf[2].value;
  (finishedAnim->finalMatrix).m[0] = uVar3 - uVar1;
  uVar3 = fixedmult(uVar2,(finishedAnim->finalMatrix).m[3]);
  uVar1 = fixedmult((finishedAnim->finalMatrix).m[0],(finishedAnim->finalMatrix).m[2]);
  (finishedAnim->finalMatrix).m[4] = uVar3 - uVar1;
  uVar3 = fixedmult((finishedAnim->finalMatrix).m[0],(finishedAnim->finalMatrix).m[1]);
  uVar1 = fixedmult((finishedAnim->ObjectAnim)._vf[1].value,(finishedAnim->finalMatrix).m[3]);
  (finishedAnim->finalMatrix).m[5] = uVar3 - uVar1;
  uVar3 = fixedmult((finishedAnim->ObjectAnim)._vf[1].value,(finishedAnim->finalMatrix).m[2]);
  uVar1 = fixedmult((finishedAnim->ObjectAnim)._vf[2].value,(finishedAnim->finalMatrix).m[1]);
  (finishedAnim->finalMatrix).m[6] = uVar3 - uVar1;
  reorthogonalize((int *)m2);
  fixedxformx((undefined4 *)&mStack80,0x4000);
  fixedxformy((int *)&mStack160,-(int)this->objDef);
  fixedxformy((int *)&mStack200,(uint)this->animParms);
  Math_fasttransmult__FP10matrixtdefN20(&mStack160,&mStack80,&mStack120);
  Math_fasttransmult__FP10matrixtdefN20(&mStack120,&mStack200,&mStack120);
  Math_fasttransmult__FP10matrixtdefN20(&mStack120,m2,m2);
  *(Trk_ObjectDef **)((finishedAnim->finalMatrix).m + 7) = objDef;
  *(Trk_CollideBoomInst **)((finishedAnim->finalMatrix).m + 8) = objCollideInstance;
  return this;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Draw__14ObjectSignAnimP13DRender_tViewP11Draw_DCachei(struct ObjectSignAnim *this /*$s1*/, struct DRender_tView *Vi /*$s2*/, struct Draw_DCache *sd /*$s3*/, int offset /*$s4*/)
 // line 1360, offset 0x800a6a38
	/* begin block 1 */
		// Start line: 1361
		// Start offset: 0x800A6A38
		// Variables:
	// 		struct matrixtdef matrix; // stack offset -104
	// 		struct coorddef animcp; // stack offset -64

		/* begin block 1.1 */
			// Start line: 1361
			// Start offset: 0x800A6A38

			/* begin block 1.1.1 */
				// Start line: 1369
				// Start offset: 0x800A6A8C
				// Variables:
			// 		int i; // $v1
			// 		struct ObjectAnim *anim; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800A6B08
			// End Line: 1377

			/* begin block 1.1.2 */
				// Start line: 1379
				// Start offset: 0x800A6B08
				// Variables:
			// 		struct Trk_ObjectDef *pObjDef; // $s0
			// 		struct coorddef cp; // stack offset -48
			// 		int frame; // stack offset -32
			// 		int numFrames; // stack offset -28
			/* end block 1.1.2 */
			// End offset: 0x800A6B08
			// End Line: 1381
		/* end block 1.1 */
		// End offset: 0x800A6B08
		// End Line: 1381
	/* end block 1 */
	// End offset: 0x800A6BF0
	// End Line: 1402

int Draw__14ObjectSignAnimP13DRender_tViewP11Draw_DCachei
              (ObjectSignAnim *this,DRender_tView *Vi,Draw_DCache *sd,int offset)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  ObjectAnim *pOVar4;
  ObjectAnim *pOVar5;
  Trk_SimObject *objDef;
  matrixtdef mStack104;
  coorddef local_40;
  coorddef local_30;
  int local_20;
  int local_1c;
  
  iVar2 = GetTimedAnimPosRot__10AnimScriptiP8coorddefP10matrixtdef
                    ((AnimScript *)this->objectAngle,0,&local_40,&mStack104);
  if (iVar2 + 1U < 2) {
    pOVar5 = (ObjectAnim *)this->impactAngle;
    sVar1 = *(short *)((this->impactVel).y + 0xe);
    this->impactAngle = 0;
    pOVar4 = (&__gSimObjAnims_450__)[(int)sVar1];
    if (pOVar4 != (ObjectAnim *)0x0) {
      uVar3 = pOVar4->_vf[0].value;
      (**(code **)(uVar3 + 0xc))((int)&pOVar4->_vf[0].value + (int)*(short *)(uVar3 + 8),3);
    }
    (&__gSimObjAnims_450__)[(int)sVar1] = pOVar5;
    uVar3 = pOVar5->_vf[0].value;
    iVar2 = (**(code **)(uVar3 + 0x14))
                      ((int)&pOVar5->_vf[0].value + (int)*(short *)(uVar3 + 0x10),Vi,sd,offset);
  }
  else {
    objDef = this->simObj;
    GetTimedAnimPosRot__10AnimScriptiP8coorddefP10matrixtdef
              ((AnimScript *)this->objectAngle,0,&local_40,&mStack104);
    GetAnimFrameInfo__10AnimScriptPiT1((AnimScript *)this->objectAngle,&local_20,&local_1c);
    if (local_1c == 0) {
      trap(0x1c00);
    }
    if ((local_1c == -1) && (local_20 << 0x10 == -0x80000000)) {
      trap(0x1800);
    }
    iVar2 = (this->impactVel).z;
    local_30.x = *(int *)(iVar2 + 8) + local_40.x;
    local_30.y = *(int *)(iVar2 + 0xc) + local_40.y;
    local_30.z = *(int *)(iVar2 + 0x10) + local_40.z;
    BuildObjCollisionMatrix__FiiiP10matrixtdef
              ((local_20 << 0x10) / local_1c,(int)this->objDef,(int)this->animParms,&mStack104);
    DrawObjectTransform__FP13DRender_tViewP11Draw_DCacheP10matrixtdefP13Trk_ObjectDefP8coorddefis
              (Vi,sd,&mStack104,(Trk_ObjectDef *)objDef,&local_30,offset,-1);
    iVar2 = 4;
  }
  return iVar2;
}




