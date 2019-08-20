#include "NFS4.H"
#include "AIWORLD.H"

// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_ZSplineDistance__FP8Car_tObjT0(struct Car_tObj *carObj /*$a0*/, struct Car_tObj *otherCarObj /*$a1*/)
 // line 29, offset 0x80072f90
	/* begin block 1 */
		// Start line: 30
		// Start offset: 0x80072F90
		// Variables:
	// 		struct coorddef relPos; // stack offset -40
	// 		struct coorddef forward; // stack offset -24
	/* end block 1 */
	// End offset: 0x80072F90
	// End Line: 30

int AIWorld_ZSplineDistance__FP8Car_tObjT0(Car_tObj *carObj,Car_tObj *otherCarObj)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (carObj->N).position.z;
  iVar4 = (otherCarObj->N).position.z;
  iVar5 = (carObj->N).roadMatrix.m[8];
  uVar2 = fixedmult((carObj->N).position.x - (otherCarObj->N).position.x,(carObj->N).roadMatrix.m[6]
                   );
  uVar3 = fixedmult(iVar1 - iVar4,iVar5);
  return uVar2 + uVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_ZSplineDistance__FP8coorddefT0P10matrixtdef(struct coorddef *pos1 /*$a0*/, struct coorddef *pos2 /*$a1*/, struct matrixtdef *roadMatrix /*$a2*/)
 // line 38, offset 0x80073024
	/* begin block 1 */
		// Start line: 39
		// Start offset: 0x80073024
		// Variables:
	// 		struct coorddef relPos; // stack offset -40
	// 		struct coorddef forward; // stack offset -24
	/* end block 1 */
	// End offset: 0x80073024
	// End Line: 39

int AIWorld_ZSplineDistance__FP8coorddefT0P10matrixtdef
              (coorddef *pos1,coorddef *pos2,matrixtdef *roadMatrix)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = pos1->z;
  iVar4 = pos2->z;
  iVar5 = roadMatrix->m[8];
  uVar2 = fixedmult(pos1->x - pos2->x,roadMatrix->m[6]);
  uVar3 = fixedmult(iVar1 - iVar4,iVar5);
  return uVar2 + uVar3;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_ApxSplineDistance__FP8Car_tObjT0(struct Car_tObj *carObj /*$a0*/, struct Car_tObj *otherCarObj /*$a1*/)
 // line 52, offset 0x800730b8
	/* begin block 1 */
		// Start line: 53
		// Start offset: 0x800730B8
		// Variables:
	// 		int diff; // $v1
	// 		int halfTrack; // $a1
	// 		int a; // $v1
	// 		int b; // $v0
	/* end block 1 */
	// End offset: 0x80073118
	// End Line: 64

int AIWorld_ApxSplineDistance__FP8Car_tObjT0(Car_tObj *carObj,Car_tObj *otherCarObj)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(carObj->N).simRoadInfo.slice - (int)(otherCarObj->N).simRoadInfo.slice;
  iVar3 = (int)(gNumSlices + ((uint)gNumSlices >> 0x1f)) >> 1;
  if ((iVar2 < 1) || (iVar2 <= iVar3)) {
    iVar1 = iVar2 * 2;
    if (-1 < iVar2) goto LAB_8007311c;
    if (iVar2 < -iVar3) {
      iVar2 = iVar2 + gNumSlices;
    }
  }
  else {
    iVar2 = iVar2 - gNumSlices;
  }
  iVar1 = iVar2 << 1;
LAB_8007311c:
  return (iVar1 + iVar2) * 0x20000;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_ApxSplineDistance__FP8Car_tObji(struct Car_tObj *carObj /*$a0*/, int location /*$a1*/)
 // line 67, offset 0x80073128
	/* begin block 1 */
		// Start line: 68
		// Start offset: 0x80073128
		// Variables:
	// 		int diff; // $v1
	// 		int halfTrack; // $a1
	// 		int a; // $v0
	/* end block 1 */
	// End offset: 0x80073184
	// End Line: 79

int AIWorld_ApxSplineDistance__FP8Car_tObji(Car_tObj *carObj,int location)

{
  int iVar1;
  int iVar2;
  
  location = (int)(carObj->N).simRoadInfo.slice - location;
  iVar2 = (int)(gNumSlices + ((uint)gNumSlices >> 0x1f)) >> 1;
  if ((location < 1) || (location <= iVar2)) {
    iVar1 = location * 2;
    if (-1 < location) goto LAB_80073188;
    if (location < -iVar2) {
      location = location + gNumSlices;
    }
  }
  else {
    location = location - gNumSlices;
  }
  iVar1 = location << 1;
LAB_80073188:
  return (iVar1 + location) * 0x20000;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_ApxSplineDistance__FiP8Car_tObj(int location /*$v0*/, struct Car_tObj *carObj /*$a1*/)
 // line 82, offset 0x80073194
	/* begin block 1 */
		// Start line: 83
		// Start offset: 0x80073194
	/* end block 1 */
	// End offset: 0x80073194
	// End Line: 83

int AIWorld_ApxSplineDistance__FiP8Car_tObj(int location,Car_tObj *carObj)

{
  int iVar1;
  
  iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObji(carObj,location);
  return -iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_ApxSplineDistance__Fii(int locationA /*$a0*/, int locationB /*$a1*/)
 // line 87, offset 0x800731bc
	/* begin block 1 */
		// Start line: 88
		// Start offset: 0x800731BC
		// Variables:
	// 		int diff; // $a0
	// 		int halfTrack; // $a1
	/* end block 1 */
	// End offset: 0x80073214
	// End Line: 97

int AIWorld_ApxSplineDistance__Fii(int locationA,int locationB)

{
  int iVar1;
  int iVar2;
  
  locationA = locationA - locationB;
  iVar2 = (int)(gNumSlices + ((uint)gNumSlices >> 0x1f)) >> 1;
  if ((locationA < 1) || (locationA <= iVar2)) {
    iVar1 = locationA * 2;
    if (-1 < locationA) goto LAB_80073218;
    if (locationA < -iVar2) {
      locationA = locationA + gNumSlices;
    }
  }
  else {
    locationA = locationA - gNumSlices;
  }
  iVar1 = locationA << 1;
LAB_80073218:
  return (iVar1 + locationA) * 0x20000;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_SplineDistance__FP8Car_tObjT0(struct Car_tObj *carObj /*$s0*/, struct Car_tObj *otherCarObj /*$s1*/)
 // line 107, offset 0x80073224
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x80073224
		// Variables:
	// 		int distance; // $a0
	/* end block 1 */
	// End offset: 0x80073268
	// End Line: 116

int AIWorld_SplineDistance__FP8Car_tObjT0(Car_tObj *carObj,Car_tObj *otherCarObj)

{
  int iVar1;
  
  iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
  if (iVar1 + 0xc0000U < 0x180001) {
    iVar1 = AIWorld_ZSplineDistance__FP8Car_tObjT0(carObj,otherCarObj);
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_SplineDistance__FP8Car_tObjiP8coorddef(struct Car_tObj *carObj /*$s0*/, int location /*$a1*/, struct coorddef *position /*$s1*/)
 // line 119, offset 0x8007327c
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x8007327C
		// Variables:
	// 		int distance; // $a0
	/* end block 1 */
	// End offset: 0x800732C4
	// End Line: 127

int AIWorld_SplineDistance__FP8Car_tObjiP8coorddef(Car_tObj *carObj,int location,coorddef *position)

{
  int iVar1;
  
  iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObji(carObj,location);
  if (iVar1 + 0xc0000U < 0x180001) {
    iVar1 = AIWorld_ZSplineDistance__FP8coorddefT0P10matrixtdef
                      (&(carObj->N).position,position,&(carObj->N).roadMatrix);
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_GameOdometer__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 143, offset 0x800732d8
	/* begin block 1 */
		// Start line: 144
		// Start offset: 0x800732D8
	/* end block 1 */
	// End offset: 0x800732D8
	// End Line: 145

int AIWorld_GameOdometer__FP8Car_tObj(Car_tObj *carObj)

{
  return (uint)(carObj->N).totalSlice * 0x60000;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_IsDriveableLaneInSliceRange__Fiiii(int startSlice /*$a0*/, int numSlicesToCheck /*$a1*/, int direction /*$a2*/, int laneIndex /*$a3*/)
 // line 172, offset 0x800732f0
	/* begin block 1 */
		// Start line: 173
		// Start offset: 0x800732F0
		// Variables:
	// 		int profileIndex; // $v1
	// 		int laneOffset; // $v0
	// 		int mask; // $v1

		/* begin block 1.1 */
			// Start line: 187
			// Start offset: 0x8007331C
			// Variables:
		// 		int checkSliceOffset; // $t2

			/* begin block 1.1.1 */
				// Start line: 190
				// Start offset: 0x80073340
				// Variables:
			// 		int checkSlice; // $a3
			/* end block 1.1.1 */
			// End offset: 0x80073398
			// End Line: 194
		/* end block 1.1 */
		// End offset: 0x800733A0
		// End Line: 195
	/* end block 1 */
	// End offset: 0x800733A0
	// End Line: 196

int AIWorld_IsDriveableLaneInSliceRange__Fiiii
              (int startSlice,int numSlicesToCheck,int direction,int laneIndex)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 8 - (7 - laneIndex);
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = 0;
  }
  if (0xf < iVar3) {
    iVar4 = 0xf;
  }
  iVar6 = 0;
  iVar3 = 0;
  do {
    if (numSlicesToCheck <= iVar6) {
      return 1;
    }
    iVar5 = startSlice + iVar3;
    if (iVar3 < 0) {
      iVar2 = iVar5 * 0x20;
      iVar1 = gNumSlices;
      if (iVar5 < 0) goto LAB_80073374;
    }
    else {
      iVar2 = iVar5 * 0x20;
      if (gNumSlices <= iVar5) {
        iVar1 = -gNumSlices;
LAB_80073374:
        iVar2 = (iVar5 + iVar1) * 0x20;
      }
    }
    iVar3 = iVar3 + direction;
    if (((int)*(short *)((int)&BWorldSm_slices->pavedProfile + iVar2) & 1 << (0xfU - iVar4 & 0x1f))
        == 0) {
      return 0;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_IsDriveableLane__Fii(int slice /*$a2*/, int laneIndex /*$a1*/)
 // line 203, offset 0x800733a8
	/* begin block 1 */
		// Start line: 204
		// Start offset: 0x800733A8
		// Variables:
	// 		int profileIndex; // $v1
	// 		int laneOffset; // $v0
	// 		int mask; // $v0
	/* end block 1 */
	// End offset: 0x800733D4
	// End Line: 218

int AIWorld_IsDriveableLane__Fii(int slice,int laneIndex)

{
  int iVar1;
  
  iVar1 = 8 - (7 - laneIndex);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (0xf < iVar1) {
    iVar1 = 0xf;
  }
  return (int)BWorldSm_slices[slice].pavedProfile & 1 << (0xfU - iVar1 & 0x1f);
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_GetProfileMask__Fi(int laneIndex /*$a0*/)
 // line 228, offset 0x800733fc
	/* begin block 1 */
		// Start line: 229
		// Start offset: 0x800733FC
		// Variables:
	// 		int profileIndex; // $v1
	// 		int laneOffset; // $v0
	/* end block 1 */
	// End offset: 0x80073428
	// End Line: 241

int AIWorld_GetProfileMask__Fi(int laneIndex)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 8 - (7 - laneIndex);
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  if (0xf < iVar1) {
    iVar2 = 0xf;
  }
  return 1 << (0xfU - iVar2 & 0x1f);
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_IsDriveableLane_UsingMask__Fii(int slice /*$a0*/, int mask /*$a1*/)
 // line 250, offset 0x8007343c
	/* begin block 1 */
		// Start line: 251
		// Start offset: 0x8007343C
	/* end block 1 */
	// End offset: 0x8007343C
	// End Line: 252

int AIWorld_IsDriveableLane_UsingMask__Fii(int slice,int mask)

{
  return (int)BWorldSm_slices[slice].pavedProfile & mask;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_CheckForBarrierBetweenLanes__Fiii(int slice /*$a0*/, int lane0 /*$a1*/, int lane1 /*$a2*/)
 // line 264, offset 0x80073458
	/* begin block 1 */
		// Start line: 265
		// Start offset: 0x80073458
		// Variables:
	// 		int profileLane0; // $a1
	// 		int profileLane1; // $v1
	// 		int profile; // $a0
	/* end block 1 */
	// End offset: 0x800734C4
	// End Line: 281

int AIWorld_CheckForBarrierBetweenLanes__Fiii(int slice,int lane0,int lane1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xe - lane0;
  uVar1 = 0xe - lane1;
  if ((int)uVar2 <= (int)uVar1) {
    return ~(int)BWorldSm_slices[slice].pavedProfile >> (uVar2 & 0x1f) &
           ~(-1 << ((uVar1 - uVar2) + 1 & 0x1f));
  }
  return ~(int)BWorldSm_slices[slice].pavedProfile >> (uVar1 & 0x1f) &
         ~(-1 << ((uVar2 - uVar1) + 1 & 0x1f));
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_LaneIndex__Fii(int slice /*$a0*/, int position /*$a2*/)
 // line 290, offset 0x800734cc
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x800734CC
		// Variables:
	// 		int laneWidth; // $v0
	// 		int li; // $s0
	/* end block 1 */
	// End offset: 0x80073580
	// End Line: 316

/* WARNING: Removing unreachable block (ram,0x80073528) */

int AIWorld_LaneIndex__Fii(int slice,int position)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (position < 0) {
    bVar1 = BWorldSm_slices[slice].avgPavedWidthLf;
    iVar4 = 6;
  }
  else {
    bVar1 = BWorldSm_slices[slice].avgPavedWidthRt;
    iVar4 = 7;
  }
  uVar2 = fixedmult(position,(&inverseLaneWidthTable)[(int)((uint)bVar1 * 0x8000) >> 0xe]);
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 0xffff;
  }
  iVar4 = iVar4 + ((int)uVar2 >> 0x10);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  iVar3 = 0xd;
  if (iVar4 < 0xe) {
    iVar3 = iVar4;
  }
  return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIWorld_CalculateLaneInfo__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 326, offset 0x80073594
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x80073594
		// Variables:
	// 		int rightEdgeIndex; // $a1
	// 		int leftEdgeIndex; // $s0
	// 		int laneLoop; // $a0
	/* end block 1 */
	// End offset: 0x80073644
	// End Line: 352

void AIWorld_CalculateLaneInfo__FP8Car_tObj(Car_tObj *carObj)

{
  short sVar1;
  uint uVar2;
  speechSourceType sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  sVar3 = (carObj->speechInfo).speechSource;
  (carObj->script).lastReactionIndex[1] = 0;
  if ((sVar3 & 4) == 0) {
    iVar4 = AIWorld_LaneIndex__Fii
                      ((int)(carObj->N).simRoadInfo.slice,(carObj->speechInfo).playerCarIndex);
    sVar1 = (carObj->N).simRoadInfo.slice;
    iVar8 = (carObj->speechInfo).playerCarIndex;
    iVar7 = carObj->roadSpan;
    *(int *)(carObj->accTable + 0x60) = iVar4;
    uVar5 = AIWorld_LaneIndex__Fii((int)sVar1,(iVar8 - iVar7) + 0x8000);
    uVar6 = AIWorld_LaneIndex__Fii
                      ((int)(carObj->N).simRoadInfo.slice,
                       (carObj->speechInfo).playerCarIndex + carObj->roadSpan + -0x8000);
    if ((uVar6 < 0xe) && (uVar5 < 0xe)) {
      while ((int)uVar5 <= (int)uVar6) {
        uVar2 = uVar5 & 0x1f;
        uVar5 = uVar5 + 1;
        (carObj->script).lastReactionIndex[1] = (carObj->script).lastReactionIndex[1] | 1 << uVar2;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_CalculateDeltaRoadYaw__FP8Car_tObj(struct Car_tObj *carObj /*$v1*/)
 // line 485, offset 0x80073658
	/* begin block 1 */
		// Start line: 486
		// Start offset: 0x80073658
		// Variables:
	// 		int delta; // $a0

		/* begin block 1.1 */
			// Start line: 486
			// Start offset: 0x80073658

			/* begin block 1.1.1 */
				// Start line: 490
				// Start offset: 0x8007367C
				// Variables:
			// 		int yaw0; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800736C8
			// End Line: 498
		/* end block 1.1 */
		// End offset: 0x800736CC
		// End Line: 502
	/* end block 1 */
	// End offset: 0x800736CC
	// End Line: 510

int AIWorld_CalculateDeltaRoadYaw__FP8Car_tObj(Car_tObj *carObj)

{
  int slice;
  int iVar1;
  int iVar2;
  
  slice = 0;
  if ((carObj->carFlags & 8U) != 0) {
    iVar1 = (int)(carObj->N).simRoadInfo.slice;
    iVar2 = (carObj->N).roadYaw;
    slice = iVar1 + 1;
    if (gNumSlices <= slice) {
      slice = iVar1 - (gNumSlices + -1);
    }
    slice = Newton_CalculateSliceYaw__Fi(slice);
    slice = slice - iVar2;
    if (0x200 < slice) {
      slice = slice + -0x400;
    }
    if (slice < -0x200) {
      slice = slice + 0x400;
    }
  }
  return slice;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_CalcRoadBend__FP8Car_tObji(struct Car_tObj *carObj /*$a0*/, int lookAhead /*$a1*/)
 // line 518, offset 0x800736e0
	/* begin block 1 */
		// Start line: 519
		// Start offset: 0x800736E0
		// Variables:
	// 		int thisSlice; // $a2
	// 		int nextSlice; // $a1
	/* end block 1 */
	// End offset: 0x800737A8
	// End Line: 529

int AIWorld_CalcRoadBend__FP8Car_tObji(Car_tObj *carObj,int lookAhead)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(carObj->N).simRoadInfo.slice;
  if (lookAhead < 0) {
    lookAhead = iVar4 + lookAhead;
    if (lookAhead < 0) {
      lookAhead = lookAhead + gNumSlices;
    }
  }
  else {
    lookAhead = iVar4 + lookAhead;
    if (gNumSlices <= lookAhead) {
      lookAhead = lookAhead - gNumSlices;
    }
  }
  iVar2 = (int)BWorldSm_slices[lookAhead].forward[0] * 0x200;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar1 = (int)BWorldSm_slices[iVar4].right[0] * 0x200;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar3 = (int)BWorldSm_slices[lookAhead].forward[2] * 0x200;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = (int)BWorldSm_slices[iVar4].right[2] * 0x200;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  return (iVar2 >> 8) * (iVar1 >> 8) + (iVar3 >> 8) * (iVar4 >> 8);
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_CalcFutureLateralVel__FP8Car_tObji(struct Car_tObj *carObj /*$s1*/, int slicesAhead /*$a1*/)
 // line 537, offset 0x800737bc
	/* begin block 1 */
		// Start line: 538
		// Start offset: 0x800737BC
		// Variables:
	// 		struct coorddef right; // stack offset -32
	// 		int futureSlice; // $v1
	// 		int currentSlice; // $v0
	/* end block 1 */
	// End offset: 0x8007384C
	// End Line: 549

int AIWorld_CalcFutureLateralVel__FP8Car_tObji(Car_tObj *carObj,int slicesAhead)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  Trk_NewSlice *pTVar7;
  
  if ((carObj->carFlags & 0x10U) != 0) {
    iVar3 = (carObj->script).lastActionTime;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < 0x140000) {
      slicesAhead = 0;
    }
  }
  iVar3 = (int)(carObj->N).simRoadInfo.slice + slicesAhead;
  if (slicesAhead < 0) {
    if (iVar3 < 0) {
      iVar3 = iVar3 + gNumSlices;
    }
  }
  else {
    if (gNumSlices <= iVar3) {
      iVar3 = iVar3 - gNumSlices;
    }
  }
  pTVar7 = BWorldSm_slices + iVar3;
  cVar1 = pTVar7->right[1];
  cVar2 = pTVar7->right[2];
  uVar4 = fixedmult((carObj->N).linearVel.x,(int)pTVar7->right[0] << 9);
  uVar5 = fixedmult((carObj->N).linearVel.y,(int)cVar1 << 9);
  uVar6 = fixedmult((carObj->N).linearVel.z,(int)cVar2 << 9);
  return uVar4 + uVar5 + uVar6;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIWorld_CalcSpeed__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 557, offset 0x800738d4
	/* begin block 1 */
		// Start line: 558
		// Start offset: 0x800738D4
		// Variables:
	// 		int optVar1; // $a1
	// 		int optVar2; // $v1
	/* end block 1 */
	// End offset: 0x80073914
	// End Line: 564

void AIWorld_CalcSpeed__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (carObj->N).linearVel.x;
  iVar1 = (carObj->N).linearVel.z;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < iVar2) {
    (carObj->speechInfo).speechMode = iVar2 + (iVar1 >> 2);
    return;
  }
  (carObj->speechInfo).speechMode = iVar1 + (iVar2 >> 2);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AIWorld_CalcLateralVelocity__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 567, offset 0x8007391c
	/* begin block 1 */
		// Start line: 568
		// Start offset: 0x8007391C
		// Variables:
	// 		int temp; // $s0
	/* end block 1 */
	// End offset: 0x8007391C
	// End Line: 568

int AIWorld_CalcLateralVelocity__FP8Car_tObj(Car_tObj *carObj)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = fixedmult((carObj->N).linearVel.x,(carObj->N).roadMatrix.m[0]);
  uVar2 = fixedmult((carObj->N).linearVel.y,(carObj->N).roadMatrix.m[1]);
  uVar3 = fixedmult((carObj->N).linearVel.z,(carObj->N).roadMatrix.m[2]);
  return uVar1 + uVar2 + uVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AIWorld_FindBarrierLessLaneAndPosition__FP8Car_tObjPiT1(struct Car_tObj *carObj /*$s4*/, int *goodLane /*$s2*/, int *goodPosition /*$s5*/)
 // line 578, offset 0x80073978
	/* begin block 1 */
		// Start line: 579
		// Start offset: 0x80073978
		// Variables:
	// 		int roadSide; // $s3
	// 		int laneWidth; // $s1
	// 		int laneLoop; // $s0
	/* end block 1 */
	// End offset: 0x80073A58
	// End Line: 604

void AIWorld_FindBarrierLessLaneAndPosition__FP8Car_tObjPiT1
               (Car_tObj *carObj,int *goodLane,int *goodPosition)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (carObj->script).lastReactionIndex[3] * AITune_driveSide;
  iVar3 = 0;
  if (iVar4 == 1) {
    *goodLane = 7;
    bVar1 = BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].avgPavedWidthRt;
  }
  else {
    *goodLane = 6;
    bVar1 = BWorldSm_slices[(int)(carObj->N).simRoadInfo.slice].avgPavedWidthLf;
  }
  do {
    iVar2 = AIWorld_IsDriveableLane__Fii((int)(carObj->N).simRoadInfo.slice,*goodLane);
    if (iVar2 != 0) break;
    iVar3 = iVar3 + 1;
    *goodLane = *goodLane + iVar4;
  } while (iVar3 < 3);
  *goodPosition = iVar4 * ((uint)bVar1 * 0x8000 * iVar3 + ((uint)bVar1 * 0x8000 >> 1));
  return;
}




