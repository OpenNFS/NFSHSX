#include "THISDUST.H"
#include "BWORLDSM.H"


// decompiled code
// original method signature: 
// int /*$ra*/ BWorldSm_Init__FP5Group(struct Group *simGroup /*$a0*/)
 // line 84, offset 0x8007e910
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x8007E910

		/* begin block 1.1 */
			// Start line: 85
			// Start offset: 0x8007E910
			// Variables:
		// 		struct Group *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 85
				// Start offset: 0x8007E910
			/* end block 1.1.1 */
			// End offset: 0x8007E910
			// End Line: 85
		/* end block 1.1 */
		// End offset: 0x8007E910
		// End Line: 85
	/* end block 1 */
	// End offset: 0x8007E910
	// End Line: 85

	/* begin block 2 */
		// Start line: 168
	/* end block 2 */
	// End Line: 169

	/* begin block 3 */
		// Start line: 168
	/* end block 3 */
	// End Line: 169

int BWorldSm_Init__FP5Group(Group *simGroup)

{
  gNumSlices = simGroup->m_num_elements;
  BWorldSm_slices = (Trk_NewSlice *)(simGroup + 1);
  gMaxFindQuadSliceIterations = 5;
  BWorldSm_Restart__Fv();
  return 1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorldSm_Restart__Fv()
 // line 101, offset 0x8007e948
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x8007E948
	/* end block 1 */
	// End offset: 0x8007E948
	// End Line: 102

	/* begin block 2 */
		// Start line: 200
	/* end block 2 */
	// End Line: 201

	/* begin block 3 */
		// Start line: 207
	/* end block 3 */
	// End Line: 208

	/* begin block 4 */
		// Start line: 207
	/* end block 4 */
	// End Line: 208

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BWorldSm_Restart__Fv(void)

{
  NormalCache_Init__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorldSm_DeInit__Fv()
 // line 113, offset 0x8007e968
	/* begin block 1 */
		// Start line: 114
		// Start offset: 0x8007E968
	/* end block 1 */
	// End offset: 0x8007E968
	// End Line: 114

	/* begin block 2 */
		// Start line: 220
	/* end block 2 */
	// End Line: 221

	/* begin block 3 */
		// Start line: 231
	/* end block 3 */
	// End Line: 232

	/* begin block 4 */
		// Start line: 231
	/* end block 4 */
	// End Line: 232

	/* begin block 5 */
		// Start line: 232
	/* end block 5 */
	// End Line: 233

	/* begin block 6 */
		// Start line: 232
	/* end block 6 */
	// End Line: 233

/* WARNING: Unknown calling convention yet parameter storage is locked */

void BWorldSm_DeInit__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FindAbsClosestSliceCrude__FP8coorddefP12BWorldSm_Pos(struct coorddef *pt /*$s4*/, struct BWorldSm_Pos *slicePos /*$s5*/)
 // line 123, offset 0x8007e970
	/* begin block 1 */
		// Start line: 124
		// Start offset: 0x8007E970
		// Variables:
	// 		int numSlices; // $s2
	// 		int currDist; // $s1
	// 		int currInd; // $s3
	// 		int dist; // $v1
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x8007E9EC
	// End Line: 143

	/* begin block 2 */
		// Start line: 242
	/* end block 2 */
	// End Line: 243

	/* begin block 3 */
		// Start line: 251
	/* end block 3 */
	// End Line: 252

	/* begin block 4 */
		// Start line: 251
	/* end block 4 */
	// End Line: 252

void FindAbsClosestSliceCrude__FP8coorddefP12BWorldSm_Pos(coorddef *pt,BWorldSm_Pos *slicePos)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  iVar1 = gNumSlices;
  iVar4 = 0x7fffffff;
  _sVar5 = -1;
  sVar5 = -1;
  iVar3 = 0;
  if (0 < gNumSlices) {
    do {
      iVar2 = xzsquaredist32__FP8coorddefT0((coorddef *)(BWorldSm_slices + iVar3),pt);
      if (iVar2 < iVar4) {
        iVar4 = iVar2;
        _sVar5 = iVar3;
      }
      sVar5 = (short)_sVar5;
      iVar3 = iVar3 + 8;
    } while (iVar3 < iVar1);
  }
  slicePos->slice = sVar5;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ BWorldSm_FindClosestSlice__FP8coorddefP12BWorldSm_Pos(struct coorddef *pt /*$s1*/, struct BWorldSm_Pos *slicePos /*$s0*/)
 // line 152, offset 0x8007ea14
	/* begin block 1 */
		// Start line: 153
		// Start offset: 0x8007EA14
		// Variables:
	// 		int startSlice; // $s2
	/* end block 1 */
	// End offset: 0x8007EA60
	// End Line: 164

	/* begin block 2 */
		// Start line: 319
	/* end block 2 */
	// End Line: 320

	/* begin block 3 */
		// Start line: 329
	/* end block 3 */
	// End Line: 330

	/* begin block 4 */
		// Start line: 329
	/* end block 4 */
	// End Line: 330

int BWorldSm_FindClosestSlice__FP8coorddefP12BWorldSm_Pos(coorddef *pt,BWorldSm_Pos *slicePos)

{
  uchar uVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  
  sVar2 = slicePos->slice;
  iVar4 = Math_DistXZ__FP8coorddefT0((coorddef *)(BWorldSm_slices + (int)sVar2),pt);
  if (0x800000 < iVar4) {
    FindAbsClosestSliceCrude__FP8coorddefP12BWorldSm_Pos(pt,slicePos);
  }
  RawFindClosestSlice__FP8coorddefP12BWorldSm_Pos(pt,slicePos);
  uVar1 = BWorldSm_slices[(int)slicePos->slice].chunkIndex;
  bVar3 = slicePos->slice != sVar2;
  *(bool *)&slicePos->quadChanged = bVar3;
  *(bool *)&slicePos->sliceChanged = bVar3;
  slicePos->chunk = uVar1;
  return (uint)bVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RawFindClosestSlice__FP8coorddefP12BWorldSm_Pos(struct coorddef *pt /*$t3*/, struct BWorldSm_Pos *slicePos /*$a1*/)
 // line 179, offset 0x8007eab0
	/* begin block 1 */
		// Start line: 180
		// Start offset: 0x8007EAB0
		// Variables:
	// 		int lastind; // $t6
	// 		int maxind; // $t5
	// 		int index; // $a2
	// 		int distcurr; // $t2
	// 		int distnext; // $v0
	// 		int distprev; // $v0
	// 		struct Trk_NewSlice *slices; // $t4
	/* end block 1 */
	// End offset: 0x8007ED5C
	// End Line: 250

	/* begin block 2 */
		// Start line: 379
	/* end block 2 */
	// End Line: 380

	/* begin block 3 */
		// Start line: 390
	/* end block 3 */
	// End Line: 391

	/* begin block 4 */
		// Start line: 390
	/* end block 4 */
	// End Line: 391

void RawFindClosestSlice__FP8coorddefP12BWorldSm_Pos(coorddef *pt,BWorldSm_Pos *slicePos)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  sVar7 = slicePos->slice;
  iVar8 = (int)sVar7;
  iVar9 = gNumSlices + -1;
  if (iVar8 != -1) {
    do {
      if (iVar8 < iVar9) {
        iVar2 = pt->x;
        iVar3 = iVar8;
      }
      else {
        iVar3 = iVar8 % gNumSlices;
        if (gNumSlices == 0) {
          trap(0x1c00);
        }
        if ((gNumSlices == -1) && (iVar8 == -0x80000000)) {
          trap(0x1800);
        }
        iVar2 = pt->x;
      }
      iVar2 = iVar2 - BWorldSm_slices[iVar3].center[0] >> 9;
      iVar3 = pt->z - BWorldSm_slices[iVar3].center[2] >> 9;
      iVar3 = iVar2 * iVar2 + iVar3 * iVar3;
      if (iVar8 < gNumSlices + -2) {
        iVar2 = pt->x - (BWorldSm_slices + iVar8)[1].center[0] >> 9;
        iVar4 = pt->z - (BWorldSm_slices + iVar8)[1].center[2] >> 9;
        if (iVar2 * iVar2 + iVar4 * iVar4 < iVar3) {
          iVar2 = iVar8 + 1;
        }
        else {
LAB_8007ec3c:
          if (iVar8 < 1) {
            iVar2 = iVar8 + 1 + iVar9;
            iVar4 = iVar2 + -1;
            if (gNumSlices == 0) {
              trap(0x1c00);
            }
            if ((gNumSlices == -1) && (iVar4 == -0x80000000)) {
              trap(0x1800);
            }
            iVar5 = pt->x - BWorldSm_slices[iVar4 % gNumSlices].center[0] >> 9;
            iVar6 = pt->z - BWorldSm_slices[iVar4 % gNumSlices].center[2] >> 9;
            if (iVar5 * iVar5 + iVar6 * iVar6 < iVar3) {
              iVar2 = iVar4;
            }
            iVar3 = iVar2 + 1 + iVar9;
            iVar2 = iVar3 % gNumSlices;
            if (gNumSlices == 0) {
              trap(0x1c00);
            }
            if ((gNumSlices == -1) && (iVar3 == -0x80000000)) {
              trap(0x1800);
            }
          }
          else {
            iVar4 = pt->x - (BWorldSm_slices + iVar8)[-1].center[0] >> 9;
            iVar5 = pt->z - (BWorldSm_slices + iVar8)[-1].center[2] >> 9;
            iVar2 = iVar8;
            if (iVar4 * iVar4 + iVar5 * iVar5 < iVar3) {
              iVar2 = iVar8 + -1;
            }
          }
        }
      }
      else {
        iVar2 = (iVar8 + 1) % gNumSlices;
        if (gNumSlices == 0) {
          trap(0x1c00);
        }
        if ((gNumSlices == -1) && (iVar8 + 1 == -0x80000000)) {
          trap(0x1800);
        }
        iVar4 = pt->x - BWorldSm_slices[iVar2].center[0] >> 9;
        iVar5 = pt->z - BWorldSm_slices[iVar2].center[2] >> 9;
        if (iVar3 <= iVar4 * iVar4 + iVar5 * iVar5) goto LAB_8007ec3c;
      }
      sVar7 = (short)iVar2;
      bVar1 = iVar8 != iVar2;
      iVar8 = iVar2;
    } while (bVar1);
  }
  slicePos->slice = sVar7;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorldSm_SetSlice__FiP12BWorldSm_Pos(int slice /*$a0*/, struct BWorldSm_Pos *slicePos /*$a1*/)
 // line 261, offset 0x8007ed64
	/* begin block 1 */
		// Start line: 262
		// Start offset: 0x8007ED64
	/* end block 1 */
	// End offset: 0x8007ED64
	// End Line: 264

	/* begin block 2 */
		// Start line: 547
	/* end block 2 */
	// End Line: 548

	/* begin block 3 */
		// Start line: 557
	/* end block 3 */
	// End Line: 558

	/* begin block 4 */
		// Start line: 557
	/* end block 4 */
	// End Line: 558

	/* begin block 5 */
		// Start line: 559
	/* end block 5 */
	// End Line: 560

void BWorldSm_SetSlice__FiP12BWorldSm_Pos(int slice,BWorldSm_Pos *slicePos)

{
  uchar uVar1;
  Trk_NewSlice *pTVar2;
  
  slicePos->slice = (short)slice;
  slicePos->sliceChanged = '\0';
  slicePos->quadChanged = '\0';
  slicePos->offEdge = '\0';
  pTVar2 = BWorldSm_slices;
  slicePos->simSlice = (Trk_NewSimSlice *)0x0;
  slicePos->simQuad = (Trk_NewSimQuad *)0x0;
  slicePos->simRotFlag = 0;
  uVar1 = pTVar2[(int)slicePos->slice].chunkIndex;
  slicePos->lastRezRequested = -2;
  slicePos->rez = '\x01';
  slicePos->triangleFlag = '\0';
  slicePos->quad = -1;
  slicePos->chunk = uVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetStmQuadPts__FP12BWorldSm_PosP8coorddef(struct BWorldSm_Pos *slicePos /*$a0*/, struct coorddef *cp /*$a1*/)
 // line 323, offset 0x8007edb8
	/* begin block 1 */
		// Start line: 324
		// Start offset: 0x8007EDB8
		// Variables:
	// 		struct Trk_NewStrip *pStrip; // $v0
	// 		struct coorddef *pts; // $a1
	// 		int cx; // $t3
	// 		int cy; // $t2
	// 		int cz; // $t1
	// 		int topInd; // $a2
	// 		int botInd; // $a3
	// 		int x; // $t6
	// 		int y; // $t5
	// 		int z; // $v0

		/* begin block 1.1 */
			// Start line: 331
			// Start offset: 0x8007EDB8
			// Variables:
		// 		struct Group *this; // $t0

			/* begin block 1.1.1 */
				// Start line: 331
				// Start offset: 0x8007EDB8
			/* end block 1.1.1 */
			// End offset: 0x8007EDB8
			// End Line: 331
		/* end block 1.1 */
		// End offset: 0x8007EDB8
		// End Line: 331
	/* end block 1 */
	// End offset: 0x8007EDB8
	// End Line: 331

	/* begin block 2 */
		// Start line: 653
	/* end block 2 */
	// End Line: 654

	/* begin block 3 */
		// Start line: 698
	/* end block 3 */
	// End Line: 699

	/* begin block 4 */
		// Start line: 698
	/* end block 4 */
	// End Line: 699

	/* begin block 5 */
		// Start line: 705
	/* end block 5 */
	// End Line: 706

	/* begin block 6 */
		// Start line: 710
	/* end block 6 */
	// End Line: 711

void GetStmQuadPts__FP12BWorldSm_PosP8coorddef(BWorldSm_Pos *slicePos,coorddef *cp)

{
  short sVar1;
  short sVar2;
  Group *pGVar3;
  Group *pGVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = cp->x;
  iVar6 = cp->y;
  iVar5 = cp->z;
  pGVar3 = Track_chunkList[(uint)slicePos->chunk].vertexBuf + 1 +
           ((uint)slicePos->strip->topVert + (int)slicePos->stripQuadInd) * 2;
  sVar1 = *(short *)((int)&pGVar3[2].m_num_elements + 2);
  sVar2 = *(short *)&pGVar3[3].m_num_elements;
  pGVar4 = Track_chunkList[(uint)slicePos->chunk].vertexBuf + 1 +
           ((uint)slicePos->strip->botVert + (int)slicePos->stripQuadInd) * 2;
  slicePos->quadPts[1].x = iVar7 + (int)*(short *)&pGVar3[2].m_num_elements * 0x400;
  slicePos->quadPts[1].y = iVar6 + (int)sVar1 * 0x400;
  slicePos->quadPts[1].z = iVar5 + (int)sVar2 * 0x400;
  sVar1 = *(short *)((int)&pGVar3->m_num_elements + 2);
  sVar2 = *(short *)&pGVar3[1].m_num_elements;
  slicePos->quadPts[2].x = iVar7 + (int)*(short *)&pGVar3->m_num_elements * 0x400;
  slicePos->quadPts[2].y = iVar6 + (int)sVar1 * 0x400;
  slicePos->quadPts[2].z = iVar5 + (int)sVar2 * 0x400;
  sVar1 = *(short *)((int)&pGVar4->m_num_elements + 2);
  sVar2 = *(short *)&pGVar4[1].m_num_elements;
  slicePos->quadPts[3].x = iVar7 + (int)*(short *)&pGVar4->m_num_elements * 0x400;
  slicePos->quadPts[3].y = iVar6 + (int)sVar1 * 0x400;
  slicePos->quadPts[3].z = iVar5 + (int)sVar2 * 0x400;
  sVar1 = *(short *)((int)&pGVar4[2].m_num_elements + 2);
  sVar2 = *(short *)&pGVar4[3].m_num_elements;
  slicePos->quadPts[0].x = iVar7 + (int)*(short *)&pGVar4[2].m_num_elements * 0x400;
  slicePos->quadPts[0].y = iVar6 + (int)sVar1 * 0x400;
  slicePos->quadPts[0].z = iVar5 + (int)sVar2 * 0x400;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetStrip__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos /*$a0*/)
 // line 379, offset 0x8007eee0
	/* begin block 1 */
		// Start line: 380
		// Start offset: 0x8007EEE0
		// Variables:
	// 		int i; // $a1
	// 		int maxIndex; // $a2
	// 		int quadCount; // $v1

		/* begin block 1.1 */
			// Start line: 382
			// Start offset: 0x8007EEE0
			// Variables:
		// 		struct Group *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 382
				// Start offset: 0x8007EEE0
			/* end block 1.1.1 */
			// End offset: 0x8007EEE0
			// End Line: 382
		/* end block 1.1 */
		// End offset: 0x8007EEE0
		// End Line: 382
	/* end block 1 */
	// End offset: 0x8007EF90
	// End Line: 404

	/* begin block 2 */
		// Start line: 871
	/* end block 2 */
	// End Line: 872

	/* begin block 3 */
		// Start line: 877
	/* end block 3 */
	// End Line: 878

	/* begin block 4 */
		// Start line: 877
	/* end block 4 */
	// End Line: 878

	/* begin block 5 */
		// Start line: 879
	/* end block 5 */
	// End Line: 880

	/* begin block 6 */
		// Start line: 882
	/* end block 6 */
	// End Line: 883

void SetStrip__FP12BWorldSm_Pos(BWorldSm_Pos *slicePos)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  Trk_NewStrip *pTVar5;
  short sVar6;
  int iVar7;
  
  iVar7 = 0;
  bVar2 = slicePos->simSlice->stripIndex;
  slicePos->strip = (Trk_NewStrip *)(Track_chunkList[(uint)slicePos->chunk].stripBuf + 1);
  if (bVar2 != 0) {
    do {
      iVar7 = iVar7 + 1;
      slicePos->strip =
           (Trk_NewStrip *)
           (&slicePos->strip[1].topVert + (uint)(byte)slicePos->strip->quadCount * 2);
    } while (iVar7 < (int)(uint)bVar2);
  }
  cVar1 = slicePos->quad;
  sVar6 = (short)cVar1;
  uVar4 = (uint)(byte)slicePos->strip->quadCount;
  if ((int)uVar4 <= (int)cVar1) {
    iVar7 = (int)cVar1 - uVar4;
    do {
      pTVar5 = (Trk_NewStrip *)(&slicePos->strip[1].topVert + uVar4 * 2);
      slicePos->strip = pTVar5;
      bVar2 = pTVar5->quadCount;
      uVar4 = (uint)bVar2;
      bVar3 = (int)uVar4 <= iVar7;
      iVar7 = iVar7 - uVar4;
    } while (bVar3);
    sVar6 = (short)iVar7 + (ushort)bVar2;
  }
  slicePos->stripQuadInd = sVar6;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetFirstStmQuadPts__FP12BWorldSm_PosP8CCOORD16(struct BWorldSm_Pos *slicePos /*$s0*/, struct CCOORD16 *vertices /*$s1*/)
 // line 415, offset 0x8007ef98
	/* begin block 1 */
		// Start line: 416
		// Start offset: 0x8007EF98
		// Variables:
	// 		struct CCOORD16 *pts; // $a0
	// 		struct Trk_NewStrip *pStrip; // $v1
	// 		int topInd; // $v0
	// 		int botInd; // $v1
	// 		short x; // $a2
	// 		short z; // $a3
	/* end block 1 */
	// End offset: 0x8007EF98
	// End Line: 416

	/* begin block 2 */
		// Start line: 944
	/* end block 2 */
	// End Line: 945

	/* begin block 3 */
		// Start line: 956
	/* end block 3 */
	// End Line: 957

	/* begin block 4 */
		// Start line: 956
	/* end block 4 */
	// End Line: 957

void GetFirstStmQuadPts__FP12BWorldSm_PosP8CCOORD16(BWorldSm_Pos *slicePos,CCOORD16 *vertices)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  CCOORD16 *pCVar4;
  
  SetStrip__FP12BWorldSm_Pos(slicePos);
  sVar2 = slicePos->stripQuadInd;
  bVar1 = slicePos->strip->botVert;
  pCVar4 = vertices + (uint)slicePos->strip->topVert + (int)sVar2;
  sVar3 = pCVar4[1].z;
  slicePos->quadPts16[1].x = pCVar4[1].x;
  slicePos->quadPts16[1].z = sVar3;
  sVar3 = pCVar4->z;
  vertices = vertices + (uint)bVar1 + (int)sVar2;
  slicePos->quadPts16[2].x = pCVar4->x;
  slicePos->quadPts16[2].z = sVar3;
  sVar2 = vertices->z;
  slicePos->quadPts16[3].x = vertices->x;
  slicePos->quadPts16[3].z = sVar2;
  sVar2 = vertices[1].z;
  slicePos->quadPts16[0].x = vertices[1].x;
  slicePos->quadPts16[0].z = sVar2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BWorld_SetSimSlice__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos /*$a0*/)
 // line 470, offset 0x8007f034
	/* begin block 1 */
		// Start line: 471
		// Start offset: 0x8007F034
		// Variables:
	// 		struct Trk_NewSimSlice *simSlices; // $a1
	// 		int chunkSliceInd; // $v1
	/* end block 1 */
	// End offset: 0x8007F034
	// End Line: 478

	/* begin block 2 */
		// Start line: 1082
	/* end block 2 */
	// End Line: 1083

	/* begin block 3 */
		// Start line: 1093
	/* end block 3 */
	// End Line: 1094

	/* begin block 4 */
		// Start line: 1093
	/* end block 4 */
	// End Line: 1094

	/* begin block 5 */
		// Start line: 1100
	/* end block 5 */
	// End Line: 1101

void BWorld_SetSimSlice__FP12BWorldSm_Pos(BWorldSm_Pos *slicePos)

{
  byte bVar1;
  
  bVar1 = BWorldSm_slices[(int)slicePos->slice].chunkIndex;
  slicePos->chunk = bVar1;
  slicePos->simSlice =
       (Trk_NewSimSlice *)
       ((int)Track_chunkList[(uint)bVar1].simSliceBuf +
       ((int)slicePos->slice - (int)Track_chunkList[(uint)bVar1].firstSimSliceInd) * 5 + 4);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ BworldSm_UpdateSimQuad__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos /*$a0*/)
 // line 495, offset 0x8007f094
	/* begin block 1 */
		// Start line: 496
		// Start offset: 0x8007F094
		// Variables:
	// 		int simIndex; // $a2

		/* begin block 1.1 */
			// Start line: 498
			// Start offset: 0x8007F094

			/* begin block 1.1.1 */
				// Start line: 501
				// Start offset: 0x8007F0C4
				// Variables:
			// 		struct Trk_NewSimQuad *startsimquad; // $v1
			/* end block 1.1.1 */
			// End offset: 0x8007F0C4
			// End Line: 502
		/* end block 1.1 */
		// End offset: 0x8007F114
		// End Line: 507
	/* end block 1 */
	// End offset: 0x8007F114
	// End Line: 507

	/* begin block 2 */
		// Start line: 1130
	/* end block 2 */
	// End Line: 1131

	/* begin block 3 */
		// Start line: 1144
	/* end block 3 */
	// End Line: 1145

	/* begin block 4 */
		// Start line: 1144
	/* end block 4 */
	// End Line: 1145

	/* begin block 5 */
		// Start line: 1146
	/* end block 5 */
	// End Line: 1147

void BworldSm_UpdateSimQuad__FP12BWorldSm_Pos(BWorldSm_Pos *slicePos)

{
  Group *pGVar1;
  Trk_NewSimSlice *pTVar2;
  int iVar3;
  
  pTVar2 = slicePos->simSlice;
  iVar3 = (int)slicePos->quad - (uint)pTVar2->simquadStartIndex;
  if ((-1 < iVar3) && (iVar3 < (int)(uint)pTVar2->simquadCount)) {
    pGVar1 = Track_chunkList[(uint)slicePos->chunk].simQuadBuf;
    *(Group **)&slicePos->simQuad = pGVar1 + 1;
    slicePos->simQuad = (Trk_NewSimQuad *)((int)(pGVar1 + 1) + (uint)pTVar2->simquadIndex + iVar3);
    return;
  }
  slicePos->simQuad = &GlobalSimQuad;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ BworldSm_IsSimQuadValid__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos /*$a0*/)
 // line 516, offset 0x8007f11c
	/* begin block 1 */
		// Start line: 517
		// Start offset: 0x8007F11C
	/* end block 1 */
	// End offset: 0x8007F144
	// End Line: 520

	/* begin block 2 */
		// Start line: 1178
	/* end block 2 */
	// End Line: 1179

	/* begin block 3 */
		// Start line: 1188
	/* end block 3 */
	// End Line: 1189

	/* begin block 4 */
		// Start line: 1188
	/* end block 4 */
	// End Line: 1189

	/* begin block 5 */
		// Start line: 1189
	/* end block 5 */
	// End Line: 1190

	/* begin block 6 */
		// Start line: 1189
	/* end block 6 */
	// End Line: 1190

int BworldSm_IsSimQuadValid__FP12BWorldSm_Pos(BWorldSm_Pos *slicePos)

{
  if (slicePos->simQuad == (Trk_NewSimQuad *)0x0) {
    return 0;
  }
  return (uint)((slicePos->simQuad->surface & 0xf) != 0xe);
}



// decompiled code
// original method signature: 
// int /*$ra*/ RawFindClosestQuad__FP8coorddefP12BWorldSm_Pos(struct coorddef *pt /*$fp*/, struct BWorldSm_Pos *slicePos /*$s0*/)
 // line 537, offset 0x8007f14c
	/* begin block 1 */
		// Start line: 538
		// Start offset: 0x8007F14C
		// Variables:
	// 		int attempt; // $s3
	// 		int startQuadInd; // $s5
	// 		static int sliceOffs[12]; // offset 0x0
	// 		int sliceVariance; // $s6
	// 		struct coorddef *cp; // $s4
	// 		struct CCOORD16 *vertices; // $s2
	// 		struct CCOORD16 pt16; // stack offset -48
	// 		int dist; // $v1
	// 		int lastDist; // $s1
	// 		int firstSliceOffEdge; // $s7

		/* begin block 1.1 */
			// Start line: 573
			// Start offset: 0x8007F234

			/* begin block 1.1.1 */
				// Start line: 585
				// Start offset: 0x8007F274
				// Variables:
			// 		struct Group *this; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 585
					// Start offset: 0x8007F274
				/* end block 1.1.1.1 */
				// End offset: 0x8007F274
				// End Line: 585
			/* end block 1.1.1 */
			// End offset: 0x8007F274
			// End Line: 585

			/* begin block 1.1.2 */
				// Start line: 722
				// Start offset: 0x8007F838
				// Variables:
			// 		int newSlice; // $a0
			// 		int numSlices; // $a1
			/* end block 1.1.2 */
			// End offset: 0x8007F870
			// End Line: 722
		/* end block 1.1 */
		// End offset: 0x8007F870
		// End Line: 722

		/* begin block 1.2 */
			// Start line: 730
			// Start offset: 0x8007F884
			// Variables:
		// 		int newSlice; // $v1
		// 		int numSlices; // $a0
		/* end block 1.2 */
		// End offset: 0x8007F8AC
		// End Line: 730
	/* end block 1 */
	// End offset: 0x8007F8C8
	// End Line: 742

	/* begin block 2 */
		// Start line: 1213
	/* end block 2 */
	// End Line: 1214

	/* begin block 3 */
		// Start line: 1213
	/* end block 3 */
	// End Line: 1214

	/* begin block 4 */
		// Start line: 1231
	/* end block 4 */
	// End Line: 1232

	/* begin block 5 */
		// Start line: 1231
	/* end block 5 */
	// End Line: 1232

int RawFindClosestQuad__FP8coorddefP12BWorldSm_Pos(coorddef *pt,BWorldSm_Pos *slicePos)

{
  byte bVar1;
  uchar uVar2;
  short sVar3;
  uint uVar4;
  Trk_NewSimSlice *pTVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  CCOORD16 *vertices;
  int iVar20;
  coorddef *cp;
  uchar uVar21;
  int iVar22;
  
  iVar20 = 0;
  slicePos->simQuad = (Trk_NewSimQuad *)0x0;
  slicePos->simRotFlag = 0;
  BWorld_SetSimSlice__FP12BWorldSm_Pos(slicePos);
  iVar7 = (int)slicePos->quad;
  iVar22 = 0;
  if (((iVar7 < 0) || ((int)((uint)slicePos->simSlice->quadCount - 1) <= iVar7)) ||
     (slicePos->offEdge != '\0')) {
    uVar4 = (uint)slicePos->simSlice->quadCount - 1;
    cVar6 = (char)((int)(uVar4 + (uVar4 >> 0x1f)) >> 1);
    iVar7 = (int)cVar6;
    slicePos->quad = cVar6;
  }
  cVar6 = '\0';
  slicePos->offEdge = '\0';
  uVar21 = (uchar)iVar7;
  slicePos->quad = uVar21;
  do {
    if (gMaxFindQuadSliceIterations <= iVar20) {
      iVar22 = (int)slicePos->slice - iVar22;
      if (gNumSlices <= iVar22) {
        iVar22 = iVar22 - gNumSlices;
      }
      sVar10 = (short)iVar22;
      if (iVar22 < 0) {
        sVar10 = sVar10 + (short)gNumSlices;
      }
      slicePos->slice = sVar10;
      BWorld_SetSimSlice__FP12BWorldSm_Pos(slicePos);
      slicePos->offEdge = cVar6;
      slicePos->simQuad = (Trk_NewSimQuad *)0x0;
      slicePos->triangleFlag = '\0';
      return 0;
    }
    BWorld_SetSimSlice__FP12BWorldSm_Pos(slicePos);
    slicePos->quad = uVar21;
    bVar1 = slicePos->simSlice->quadCount;
    if ((int)((uint)bVar1 - 1) < iVar7) {
      slicePos->quad = bVar1 - 2;
    }
    cp = Chunk_chunkCenters + (uint)slicePos->chunk;
    sVar10 = (short)(pt->x - cp->x >> 10);
    sVar3 = (short)(pt->z - cp->z >> 10);
    vertices = (CCOORD16 *)(Track_chunkList[(uint)slicePos->chunk].vertexBuf + 1);
    GetFirstStmQuadPts__FP12BWorldSm_PosP8CCOORD16(slicePos,vertices);
    BworldSm_UpdateSimQuad__FP12BWorldSm_Pos(slicePos);
    pTVar5 = slicePos->simSlice;
    iVar12 = 0x7fffffff;
    while ((int)slicePos->quad <= (int)((uint)pTVar5->quadCount - 1)) {
      GetFirstStmQuadPts__FP12BWorldSm_PosP8CCOORD16(slicePos,vertices);
      iVar13 = (int)slicePos->quadPts16[1].x;
      iVar17 = (int)slicePos->quadPts16[2].x;
      iVar18 = (int)sVar3;
      iVar19 = (int)slicePos->quadPts16[2].z;
      iVar16 = (int)sVar10;
      iVar11 = (int)slicePos->quadPts16[1].z;
      if ((iVar13 - iVar17) * (iVar18 - iVar19) - (iVar16 - iVar17) * (iVar11 - iVar19) < 1) {
        iVar15 = (int)slicePos->quadPts16[0].x;
        iVar14 = (int)slicePos->quadPts16[0].z;
        if ((iVar15 - iVar13) * (iVar18 - iVar11) - (iVar16 - iVar13) * (iVar14 - iVar11) < 1) {
          iVar11 = (int)slicePos->quadPts16[3].x;
          iVar13 = (int)slicePos->quadPts16[3].z;
          if ((((iVar17 - iVar11) * (iVar18 - iVar13) - (iVar16 - iVar11) * (iVar19 - iVar13) < 1)
              && ((iVar11 - iVar15) * (iVar18 - iVar14) - (iVar16 - iVar15) * (iVar13 - iVar14) < 1)
              ) && (iVar11 = BworldSm_IsSimQuadValid__FP12BWorldSm_Pos(slicePos), iVar11 != 0))
          goto LAB_8007f1dc;
        }
      }
      if ((int)slicePos->quad == (uint)slicePos->simSlice->quadCount - 1) {
        slicePos->offEdge = '\x02';
        break;
      }
      iVar13 = BworldSm_IsSimQuadValid__FP12BWorldSm_Pos(slicePos);
      iVar11 = iVar12;
      if (iVar13 != 0) {
        iVar13 = (int)sVar10;
        iVar11 = (int)slicePos->quadPts16[3].x;
        iVar16 = iVar13 - iVar11;
        if (iVar16 < 1) {
          iVar16 = iVar11 - iVar13;
        }
        iVar11 = (int)slicePos->quadPts16[2].x;
        iVar17 = iVar13 - iVar11;
        if (iVar17 < 1) {
          iVar17 = iVar11 - iVar13;
        }
        iVar11 = (int)slicePos->quadPts16[1].x;
        iVar18 = iVar13 - iVar11;
        if (iVar18 < 1) {
          iVar18 = iVar11 - iVar13;
        }
        iVar11 = (int)slicePos->quadPts16[0].x;
        iVar19 = iVar13 - iVar11;
        if (iVar19 < 1) {
          iVar19 = iVar11 - iVar13;
        }
        iVar11 = (int)slicePos->quadPts16[0].z;
        iVar13 = (int)sVar3 - iVar11;
        iVar11 = iVar11 - (int)sVar3;
        if (0 < iVar13) {
          iVar11 = iVar13;
        }
        iVar13 = (int)slicePos->quadPts16[1].z;
        iVar14 = (int)sVar3 - iVar13;
        iVar13 = iVar13 - (int)sVar3;
        if (0 < iVar14) {
          iVar13 = iVar14;
        }
        iVar14 = (int)slicePos->quadPts16[2].z;
        iVar15 = (int)sVar3 - iVar14;
        iVar14 = iVar14 - (int)sVar3;
        if (0 < iVar15) {
          iVar14 = iVar15;
        }
        iVar15 = (int)slicePos->quadPts16[3].z;
        iVar8 = (int)sVar3 - iVar15;
        iVar15 = iVar15 - (int)sVar3;
        if (0 < iVar8) {
          iVar15 = iVar8;
        }
        iVar11 = iVar19 + iVar11 + iVar18 + iVar13 + iVar17 + iVar14 + iVar16 + iVar15;
        if (0x28 < iVar11 - iVar12) break;
      }
      slicePos->quad = slicePos->quad + '\x01';
      BworldSm_UpdateSimQuad__FP12BWorldSm_Pos(slicePos);
      pTVar5 = slicePos->simSlice;
      iVar12 = iVar11;
    }
    uVar2 = uVar21;
    if ((slicePos->offEdge != '\0') && (uVar2 = uVar21, iVar20 == 0)) {
      uVar2 = slicePos->simSlice->quadCount;
    }
    slicePos->quad = uVar2 + -1;
    if (slicePos->quad < '\0') {
      slicePos->quad = '\0';
    }
    GetFirstStmQuadPts__FP12BWorldSm_PosP8CCOORD16(slicePos,vertices);
    iVar12 = 0x7fffffff;
    while (BworldSm_UpdateSimQuad__FP12BWorldSm_Pos(slicePos), -1 < slicePos->quad) {
      GetFirstStmQuadPts__FP12BWorldSm_PosP8CCOORD16(slicePos,vertices);
      iVar13 = (int)slicePos->quadPts16[1].x;
      iVar17 = (int)slicePos->quadPts16[2].x;
      iVar18 = (int)sVar3;
      iVar19 = (int)slicePos->quadPts16[2].z;
      iVar16 = (int)sVar10;
      iVar11 = (int)slicePos->quadPts16[1].z;
      if ((iVar13 - iVar17) * (iVar18 - iVar19) - (iVar16 - iVar17) * (iVar11 - iVar19) < 1) {
        iVar15 = (int)slicePos->quadPts16[0].x;
        iVar14 = (int)slicePos->quadPts16[0].z;
        if ((iVar15 - iVar13) * (iVar18 - iVar11) - (iVar16 - iVar13) * (iVar14 - iVar11) < 1) {
          iVar11 = (int)slicePos->quadPts16[3].x;
          iVar13 = (int)slicePos->quadPts16[3].z;
          if ((((iVar17 - iVar11) * (iVar18 - iVar13) - (iVar16 - iVar11) * (iVar19 - iVar13) < 1)
              && ((iVar11 - iVar15) * (iVar18 - iVar14) - (iVar16 - iVar15) * (iVar13 - iVar14) < 1)
              ) && (iVar11 = BworldSm_IsSimQuadValid__FP12BWorldSm_Pos(slicePos), iVar11 != 0)) {
LAB_8007f1dc:
            slicePos->rez = '\x02';
            slicePos->offEdge = '\0';
            GetStmQuadPts__FP12BWorldSm_PosP8coorddef(slicePos,cp);
            return 1;
          }
        }
      }
      if (slicePos->quad == '\0') {
        slicePos->offEdge = '\x01';
        break;
      }
      iVar13 = BworldSm_IsSimQuadValid__FP12BWorldSm_Pos(slicePos);
      iVar11 = iVar12;
      if (iVar13 != 0) {
        iVar13 = (int)sVar10;
        iVar11 = (int)slicePos->quadPts16[3].x;
        iVar16 = iVar13 - iVar11;
        if (iVar16 < 1) {
          iVar16 = iVar11 - iVar13;
        }
        iVar11 = (int)slicePos->quadPts16[2].x;
        iVar17 = iVar13 - iVar11;
        if (iVar17 < 1) {
          iVar17 = iVar11 - iVar13;
        }
        iVar11 = (int)slicePos->quadPts16[1].x;
        iVar18 = iVar13 - iVar11;
        if (iVar18 < 1) {
          iVar18 = iVar11 - iVar13;
        }
        iVar11 = (int)slicePos->quadPts16[0].x;
        iVar19 = iVar13 - iVar11;
        if (iVar19 < 1) {
          iVar19 = iVar11 - iVar13;
        }
        iVar11 = (int)slicePos->quadPts16[0].z;
        iVar13 = (int)sVar3 - iVar11;
        iVar11 = iVar11 - (int)sVar3;
        if (0 < iVar13) {
          iVar11 = iVar13;
        }
        iVar13 = (int)slicePos->quadPts16[1].z;
        iVar14 = (int)sVar3 - iVar13;
        iVar13 = iVar13 - (int)sVar3;
        if (0 < iVar14) {
          iVar13 = iVar14;
        }
        iVar14 = (int)slicePos->quadPts16[2].z;
        iVar15 = (int)sVar3 - iVar14;
        iVar14 = iVar14 - (int)sVar3;
        if (0 < iVar15) {
          iVar14 = iVar15;
        }
        iVar15 = (int)slicePos->quadPts16[3].z;
        iVar8 = (int)sVar3 - iVar15;
        iVar15 = iVar15 - (int)sVar3;
        if (0 < iVar8) {
          iVar15 = iVar8;
        }
        iVar11 = iVar19 + iVar11 + iVar18 + iVar13 + iVar17 + iVar14 + iVar16 + iVar15;
        if (0x28 < iVar11 - iVar12) break;
      }
      slicePos->quad = slicePos->quad + -1;
      iVar12 = iVar11;
    }
    if (iVar20 == 0) {
      cVar6 = slicePos->offEdge;
    }
    piVar9 = &DAT_8010f07c + iVar20;
    iVar12 = (int)slicePos->slice + *piVar9;
    if (gNumSlices <= iVar12) {
      iVar12 = iVar12 - gNumSlices;
    }
    sVar10 = (short)iVar12;
    if (iVar12 < 0) {
      sVar10 = sVar10 + (short)gNumSlices;
    }
    slicePos->slice = sVar10;
    iVar20 = iVar20 + 1;
    iVar22 = iVar22 + *piVar9;
  } while( true );
}



// decompiled code
// original method signature: 
// int /*$ra*/ FindClosestQuad__FP8coorddefP12BWorldSm_Pos(struct coorddef *pt /*$s2*/, struct BWorldSm_Pos *slicePos /*$s0*/)
 // line 1058, offset 0x8007f8f8
	/* begin block 1 */
		// Start line: 1059
		// Start offset: 0x8007F8F8
		// Variables:
	// 		int startSlice; // $s4
	// 		int startQuad; // $s5
	// 		int foundSlice; // $s1
		// Labels:
		//		0x00001160	done

		/* begin block 1.1 */
			// Start line: 1102
			// Start offset: 0x8007F9C4
			// Variables:
		// 		static struct coorddef corrPt; // offset 0x0
		// 		int rCount; // $s1
		/* end block 1.1 */
		// End offset: 0x8007FA70
		// End Line: 1115
	/* end block 1 */
	// End offset: 0x8007FA98
	// End Line: 1129

	/* begin block 2 */
		// Start line: 2186
	/* end block 2 */
	// End Line: 2187

	/* begin block 3 */
		// Start line: 2503
	/* end block 3 */
	// End Line: 2504

	/* begin block 4 */
		// Start line: 2503
	/* end block 4 */
	// End Line: 2504

int FindClosestQuad__FP8coorddefP12BWorldSm_Pos(coorddef *pt,BWorldSm_Pos *slicePos)

{
  char cVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  Trk_NewSimQuad *pTVar7;
  
  sVar2 = slicePos->slice;
  cVar1 = slicePos->quad;
  BWorldSm_FindClosestSlice__FP8coorddefP12BWorldSm_Pos(pt,slicePos);
  sVar3 = slicePos->slice;
  iVar6 = RawFindClosestQuad__FP8coorddefP12BWorldSm_Pos(pt,slicePos);
  if (iVar6 == 0) {
    if (slicePos->offEdge != '\0') {
      slicePos->slice = sVar3;
      BWorld_SetSimSlice__FP12BWorldSm_Pos(slicePos);
      if (slicePos->offEdge == '\x01') {
        cVar5 = '\0';
      }
      else {
        cVar5 = slicePos->simSlice->quadCount + -1;
      }
      slicePos->quad = cVar5;
      BworldSm_UpdateSimQuad__FP12BWorldSm_Pos(slicePos);
      slicePos->rez = '\x02';
      SetStrip__FP12BWorldSm_Pos(slicePos);
      GetStmQuadPts__FP12BWorldSm_PosP8coorddef(slicePos,Chunk_chunkCenters + (uint)slicePos->chunk)
      ;
    }
    corrPt_47 = pt->x;
    DAT_8013dfc8 = pt->y;
    DAT_8013dfcc = pt->z;
    pTVar7 = slicePos->simQuad;
    iVar6 = 0;
    while ((pTVar7 == (Trk_NewSimQuad *)0x0 && (iVar6 < 10))) {
      corrPt_47 = corrPt_47 + (BWorldSm_slices[(int)slicePos->slice].center[0] - corrPt_47 >> 5);
      DAT_8013dfcc = DAT_8013dfcc +
                     (BWorldSm_slices[(int)slicePos->slice].center[2] - DAT_8013dfcc >> 5);
      RawFindClosestQuad__FP8coorddefP12BWorldSm_Pos((coorddef *)&corrPt_47,slicePos);
      pTVar7 = slicePos->simQuad;
      iVar6 = iVar6 + 1;
    }
  }
  cVar5 = '\0';
  bVar4 = sVar2 != slicePos->slice;
  *(bool *)&slicePos->sliceChanged = bVar4;
  if ((cVar1 != slicePos->quad) || (bVar4)) {
    cVar5 = '\x01';
  }
  slicePos->quadChanged = cVar5;
  return (int)slicePos->sliceChanged;
}



// decompiled code
// original method signature: 
// int /*$ra*/ BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi(struct coorddef *pt /*$s2*/, struct BWorldSm_Pos *slicePos /*$s1*/, int hiRezFlag /*$a2*/)
 // line 1139, offset 0x8007fac4
	/* begin block 1 */
		// Start line: 1140
		// Start offset: 0x8007FAC4

		/* begin block 1.1 */
			// Start line: 1140
			// Start offset: 0x8007FAC4

			/* begin block 1.1.1 */
				// Start line: 1144
				// Start offset: 0x8007FAF0
			/* end block 1.1.1 */
			// End offset: 0x8007FC48
			// End Line: 1166

			/* begin block 1.1.2 */
				// Start line: 1168
				// Start offset: 0x8007FC48
			/* end block 1.1.2 */
			// End offset: 0x8007FC74
			// End Line: 1188
		/* end block 1.1 */
		// End offset: 0x8007FC74
		// End Line: 1188
	/* end block 1 */
	// End offset: 0x8007FC74
	// End Line: 1188

	/* begin block 2 */
		// Start line: 2671
	/* end block 2 */
	// End Line: 2672

	/* begin block 3 */
		// Start line: 2682
	/* end block 3 */
	// End Line: 2683

	/* begin block 4 */
		// Start line: 2682
	/* end block 4 */
	// End Line: 2683

int BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
              (coorddef *pt,BWorldSm_Pos *slicePos,int hiRezFlag)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  slicePos->triangleFlag = '\x03';
  if (hiRezFlag == 0) {
    slicePos->lastRezRequested = '\x01';
    slicePos->rez = '\x01';
    slicePos->simSlice = (Trk_NewSimSlice *)0x0;
    slicePos->simQuad = (Trk_NewSimQuad *)0x0;
    slicePos->quad = -1;
    slicePos->triangleFlag = '\0';
    iVar4 = BWorldSm_FindClosestSlice__FP8coorddefP12BWorldSm_Pos(pt,slicePos);
  }
  else {
    slicePos->lastRezRequested = '\x02';
    if (slicePos->simQuad != (Trk_NewSimQuad *)0x0) {
      bVar1 = false;
      uVar2 = fixedmult(slicePos->quadPts[1].x - slicePos->quadPts[2].x,
                        pt->z - slicePos->quadPts[2].z);
      uVar3 = fixedmult(pt->x - slicePos->quadPts[2].x,
                        slicePos->quadPts[1].z - slicePos->quadPts[2].z);
      if ((int)(uVar2 - uVar3) < 1) {
        uVar2 = fixedmult(slicePos->quadPts[0].x - slicePos->quadPts[1].x,
                          pt->z - slicePos->quadPts[1].z);
        uVar3 = fixedmult(pt->x - slicePos->quadPts[1].x,
                          slicePos->quadPts[0].z - slicePos->quadPts[1].z);
        if ((int)(uVar2 - uVar3) < 1) {
          uVar2 = fixedmult(slicePos->quadPts[2].x - slicePos->quadPts[3].x,
                            pt->z - slicePos->quadPts[3].z);
          uVar3 = fixedmult(pt->x - slicePos->quadPts[3].x,
                            slicePos->quadPts[2].z - slicePos->quadPts[3].z);
          if ((int)(uVar2 - uVar3) < 1) {
            uVar2 = fixedmult(slicePos->quadPts[3].x - slicePos->quadPts[0].x,
                              pt->z - slicePos->quadPts[0].z);
            uVar3 = fixedmult(pt->x - slicePos->quadPts[0].x,
                              slicePos->quadPts[3].z - slicePos->quadPts[0].z);
            bVar1 = (int)(uVar2 - uVar3) < 1;
          }
        }
      }
      if (bVar1) {
        slicePos->quadChanged = '\0';
        slicePos->sliceChanged = '\0';
        return 0;
      }
    }
    iVar4 = FindClosestQuad__FP8coorddefP12BWorldSm_Pos(pt,slicePos);
  }
  return iVar4;
}



// decompiled code
// original method signature: 
// int /*$ra*/ BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi(struct coorddef *pt /*$a0*/, struct BWorldSm_Pos *slicePos /*$a1*/, int maxIterations /*$a2*/)
 // line 1199, offset 0x8007fc90
	/* begin block 1 */
		// Start line: 1200
		// Start offset: 0x8007FC90
	/* end block 1 */
	// End offset: 0x8007FC90
	// End Line: 1200

	/* begin block 2 */
		// Start line: 2811
	/* end block 2 */
	// End Line: 2812

	/* begin block 3 */
		// Start line: 2823
	/* end block 3 */
	// End Line: 2824

	/* begin block 4 */
		// Start line: 2823
	/* end block 4 */
	// End Line: 2824

int BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi
              (coorddef *pt,BWorldSm_Pos *slicePos,int maxIterations)

{
  int iVar1;
  
  iVar1 = BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi(pt,slicePos,1);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ PointDirection__FP8coorddefN20(struct coorddef *p1 /*$s2*/, struct coorddef *p2 /*$s0*/, struct coorddef *p3 /*$s1*/)
 // line 1212, offset 0x8007fcb0
	/* begin block 1 */
		// Start line: 1213
		// Start offset: 0x8007FCB0
	/* end block 1 */
	// End offset: 0x8007FCB0
	// End Line: 1213

	/* begin block 2 */
		// Start line: 2837
	/* end block 2 */
	// End Line: 2838

	/* begin block 3 */
		// Start line: 2849
	/* end block 3 */
	// End Line: 2850

	/* begin block 4 */
		// Start line: 2849
	/* end block 4 */
	// End Line: 2850

int PointDirection__FP8coorddefN20(coorddef *p1,coorddef *p2,coorddef *p3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fixedmult(p1->x - p2->x,p3->z - p2->z);
  uVar2 = fixedmult(p3->x - p2->x,p1->z - p2->z);
  return uVar1 - uVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ BWorldSm_FindEdgeOff__FP8coorddefP12BWorldSm_PosT1Pi(struct coorddef *pt /*$s5*/, struct BWorldSm_Pos *slicePos1 /*$s3*/, struct BWorldSm_Pos *slicePos2 /*$s7*/, int *heightDiff /*$fp*/)
 // line 1217, offset 0x8007fd28
	/* begin block 1 */
		// Start line: 1218
		// Start offset: 0x8007FD28
		// Variables:
	// 		int ret; // $s1
	// 		struct coorddef *pts; // $s2

		/* begin block 1.1 */
			// Start line: 1245
			// Start offset: 0x8007FDE4
			// Variables:
		// 		int y; // $v1
		/* end block 1.1 */
		// End offset: 0x8007FDE4
		// End Line: 1248
	/* end block 1 */
	// End offset: 0x8007FDE4
	// End Line: 1248

	/* begin block 2 */
		// Start line: 2855
	/* end block 2 */
	// End Line: 2856

	/* begin block 3 */
		// Start line: 2859
	/* end block 3 */
	// End Line: 2860

	/* begin block 4 */
		// Start line: 2859
	/* end block 4 */
	// End Line: 2860

int BWorldSm_FindEdgeOff__FP8coorddefP12BWorldSm_PosT1Pi
              (coorddef *pt,BWorldSm_Pos *slicePos1,BWorldSm_Pos *slicePos2,int *heightDiff)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = PointDirection__FP8coorddefN20(slicePos1->quadPts + 2,slicePos1->quadPts + 3,pt);
  uVar2 = (uint)(iVar1 < -0x18000) ^ 1;
  iVar1 = PointDirection__FP8coorddefN20(slicePos1->quadPts + 3,slicePos1->quadPts,pt);
  if (-1 < iVar1) {
    uVar2 = uVar2 | 8;
  }
  iVar1 = PointDirection__FP8coorddefN20(slicePos1->quadPts,slicePos1->quadPts + 1,pt);
  if (-0x18001 < iVar1) {
    uVar2 = uVar2 | 2;
  }
  iVar1 = PointDirection__FP8coorddefN20(slicePos1->quadPts + 1,slicePos1->quadPts + 2,pt);
  if (-1 < iVar1) {
    uVar2 = uVar2 | 4;
  }
  *heightDiff = (slicePos2->quadPts[0].y + slicePos2->quadPts[1].y + slicePos2->quadPts[2].y +
                 slicePos2->quadPts[3].y >> 2) - pt->y;
  return uVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ BWorldSm_QuadLight__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos /*$a0*/)
 // line 1261, offset 0x8007fe44
	/* begin block 1 */
		// Start line: 1262
		// Start offset: 0x8007FE44

		/* begin block 1.1 */
			// Start line: 1262
			// Start offset: 0x8007FE44

			/* begin block 1.1.1 */
				// Start line: 1263
				// Start offset: 0x8007FE54
				// Variables:
			// 		struct CVECTOR light; // stack offset -40
			// 		struct CVECTOR temp0; // stack offset -32
			// 		struct CVECTOR temp1; // stack offset -24
			// 		struct CVECTOR temp2; // stack offset -16
			// 		struct CVECTOR temp3; // stack offset -8
			// 		int topInd; // $v1
			// 		int botInd; // $a1
			// 		short s1; // $v0
			// 		short s2; // $v1
			// 		short s3; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 1263
					// Start offset: 0x8007FE54
					// Variables:
				// 		struct Group *this; // $v0

					/* begin block 1.1.1.1.1 */
						// Start line: 1263
						// Start offset: 0x8007FE54
					/* end block 1.1.1.1.1 */
					// End offset: 0x8007FE54
					// End Line: 1263
				/* end block 1.1.1.1 */
				// End offset: 0x8007FE54
				// End Line: 1263
			/* end block 1.1.1 */
			// End offset: 0x8007FE60
			// End Line: 1290
		/* end block 1.1 */
		// End offset: 0x8007FFCC
		// End Line: 1290
	/* end block 1 */
	// End offset: 0x8007FFCC
	// End Line: 1290

	/* begin block 2 */
		// Start line: 2991
	/* end block 2 */
	// End Line: 2992

	/* begin block 3 */
		// Start line: 2997
	/* end block 3 */
	// End Line: 2998

	/* begin block 4 */
		// Start line: 2997
	/* end block 4 */
	// End Line: 2998

	/* begin block 5 */
		// Start line: 2998
	/* end block 5 */
	// End Line: 2999

	/* begin block 6 */
		// Start line: 2998
	/* end block 6 */
	// End Line: 2999

int BWorldSm_QuadLight__FP12BWorldSm_Pos(BWorldSm_Pos *slicePos)

{
  Group *pGVar1;
  CVECTOR CVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *local_28;
  
  if (slicePos->rez == '\x02') {
    pGVar1 = Track_chunkList[(uint)slicePos->chunk].vertexBuf + 1;
    CVar2 = Chunk_lightTable
            [(int)*(short *)((int)&(pGVar1 + ((uint)slicePos->strip->topVert +
                                             (int)slicePos->stripQuadInd) * 2)[3].m_num_elements + 2
                            )];
    uVar3 = *(uint *)(&Chunk_lightTable->r +
                     ((int)((uint)*(ushort *)
                                   ((int)&(pGVar1 + ((uint)slicePos->strip->topVert +
                                                    (int)slicePos->stripQuadInd) * 2)[1].
                                          m_num_elements + 2) << 0x10) >> 0xe));
    uVar4 = *(uint *)(&Chunk_lightTable->r +
                     ((int)((uint)*(ushort *)
                                   ((int)&(pGVar1 + ((uint)slicePos->strip->botVert +
                                                    (int)slicePos->stripQuadInd) * 2)[1].
                                          m_num_elements + 2) << 0x10) >> 0xe));
    uVar5 = *(uint *)(&Chunk_lightTable->r +
                     ((int)((uint)*(ushort *)
                                   ((int)&(pGVar1 + ((uint)slicePos->strip->botVert +
                                                    (int)slicePos->stripQuadInd) * 2)[3].
                                          m_num_elements + 2) << 0x10) >> 0xe));
    local_28 = (undefined *)
               ((uint)local_28 & 0xff000000 |
               (uint)CONCAT12((char)((int)(((uint)CVar2 >> 0x10 & 0xff) + (uVar3 >> 0x10 & 0xff) +
                                           (uVar4 >> 0x10 & 0xff) + (uVar5 >> 0x10 & 0xff)) >> 2),
                              CONCAT11((char)((int)(((uint)CVar2 >> 8 & 0xff) + (uVar3 >> 8 & 0xff)
                                                    + (uVar4 >> 8 & 0xff) + (uVar5 >> 8 & 0xff)) >>
                                             2),(char)((int)(((uint)CVar2 & 0xff) + (uVar3 & 0xff) +
                                                             (uVar4 & 0xff) + (uVar5 & 0xff)) >> 2))
                             ));
  }
  else {
    local_28 = &DAT_007f7f7f;
  }
  return (int)local_28;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos /*$a0*/)
 // line 1301, offset 0x8007ffd4
	/* begin block 1 */
		// Start line: 1302
		// Start offset: 0x8007FFD4
		// Variables:
	// 		int surf; // $v0
	/* end block 1 */
	// End offset: 0x8008001C
	// End Line: 1311

	/* begin block 2 */
		// Start line: 3114
	/* end block 2 */
	// End Line: 3115

	/* begin block 3 */
		// Start line: 3126
	/* end block 3 */
	// End Line: 3127

	/* begin block 4 */
		// Start line: 3126
	/* end block 4 */
	// End Line: 3127

	/* begin block 5 */
		// Start line: 3127
	/* end block 5 */
	// End Line: 3128

	/* begin block 6 */
		// Start line: 3127
	/* end block 6 */
	// End Line: 3128

void * BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(BWorldSm_Pos *slicePos)

{
  byte bVar1;
  
  if ((BWorldSm_slices[(int)slicePos->slice].acousticType & 0x44) == 0) {
    if (slicePos->simQuad == (Trk_NewSimQuad *)0x0) {
      bVar1 = 0xe;
    }
    else {
      bVar1 = slicePos->simQuad->surface & 0xf;
    }
    return (void *)(uint)(bVar1 == 8);
  }
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NormalCache_AddEntry__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos /*$t0*/)
 // line 1341, offset 0x8008002c
	/* begin block 1 */
		// Start line: 1342
		// Start offset: 0x8008002C
		// Variables:
	// 		unsigned long oldestTime; // $a2
	// 		int oldestInd; // $a3
	// 		struct tNormalCacheEntry *ce; // $v1

		/* begin block 1.1 */
			// Start line: 1342
			// Start offset: 0x8008002C
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x8008007C
		// End Line: 1358
	/* end block 1 */
	// End offset: 0x8008007C
	// End Line: 1358

	/* begin block 2 */
		// Start line: 3175
	/* end block 2 */
	// End Line: 3176

	/* begin block 3 */
		// Start line: 3206
	/* end block 3 */
	// End Line: 3207

	/* begin block 4 */
		// Start line: 3206
	/* end block 4 */
	// End Line: 3207

void NormalCache_AddEntry__FP12BWorldSm_Pos(BWorldSm_Pos *slicePos)

{
  tNormalCacheEntry *ptVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0xffffffff;
  iVar4 = -1;
  ptVar1 = &BWSM_NormalCache;
  iVar2 = 0;
  BWSM_NormalCacheSysTime = BWSM_NormalCacheSysTime + 1;
  do {
    if (ptVar1->accessTime < uVar3) {
      uVar3 = ptVar1->accessTime;
      iVar4 = iVar2;
    }
    iVar2 = iVar2 + 1;
    ptVar1 = ptVar1 + 1;
  } while (iVar2 < 0x10);
  (&BWSM_NormalCache)[iVar4].accessTime = BWSM_NormalCacheSysTime;
  iVar2 = (slicePos->forward).y;
  iVar5 = (slicePos->forward).z;
  (&BWSM_NormalCache)[iVar4].forward.x = (slicePos->forward).x;
  (&BWSM_NormalCache)[iVar4].forward.y = iVar2;
  (&BWSM_NormalCache)[iVar4].forward.z = iVar5;
  iVar2 = (slicePos->normal).y;
  iVar5 = (slicePos->normal).z;
  (&BWSM_NormalCache)[iVar4].normal.x = (slicePos->normal).x;
  (&BWSM_NormalCache)[iVar4].normal.y = iVar2;
  (&BWSM_NormalCache)[iVar4].normal.z = iVar5;
  (&BWSM_NormalCache)[iVar4].sliceInd = slicePos->slice;
  (&BWSM_NormalCache)[iVar4].quadInd = slicePos->quad;
  (&BWSM_NormalCache)[iVar4].triangleFlag = slicePos->triangleFlag;
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ NormalCache_FindEntry__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos /*$a0*/)
 // line 1372, offset 0x800800e8
	/* begin block 1 */
		// Start line: 1373
		// Start offset: 0x800800E8
		// Variables:
	// 		struct tNormalCacheEntry *ce; // $a2
	// 		int slice; // $t1
	// 		int quad; // $t0
	// 		int i; // $a3
	/* end block 1 */
	// End offset: 0x800801A4
	// End Line: 1406

	/* begin block 2 */
		// Start line: 3266
	/* end block 2 */
	// End Line: 3267

	/* begin block 3 */
		// Start line: 3272
	/* end block 3 */
	// End Line: 3273

	/* begin block 4 */
		// Start line: 3272
	/* end block 4 */
	// End Line: 3273

	/* begin block 5 */
		// Start line: 3274
	/* end block 5 */
	// End Line: 3275

void * NormalCache_FindEntry__FP12BWorldSm_Pos(BWorldSm_Pos *slicePos)

{
  byte *pbVar1;
  tNormalCacheEntry *ptVar2;
  int iVar3;
  int iVar4;
  
  ptVar2 = &BWSM_NormalCache;
  iVar3 = 0;
  pbVar1 = &BWSM_NormalCache.triangleFlag;
  BWSM_NormalCacheSysTime = BWSM_NormalCacheSysTime + 1;
  while (((ptVar2->sliceInd != slicePos->slice || (pbVar1[1] != slicePos->quad)) ||
         ((uint)*pbVar1 != (int)slicePos->triangleFlag))) {
    pbVar1 = pbVar1 + 0x20;
    iVar3 = iVar3 + 1;
    ptVar2 = ptVar2 + 1;
    if (0xf < iVar3) {
LAB_80080154:
      if (0xf < iVar3) {
        return (void *)0x0;
      }
      iVar3 = (ptVar2->normal).y;
      iVar4 = (ptVar2->normal).z;
      (slicePos->normal).x = (ptVar2->normal).x;
      (slicePos->normal).y = iVar3;
      (slicePos->normal).z = iVar4;
      iVar3 = (ptVar2->forward).y;
      iVar4 = (ptVar2->forward).z;
      (slicePos->forward).x = (ptVar2->forward).x;
      (slicePos->forward).y = iVar3;
      (slicePos->forward).z = iVar4;
      return &DAT_00000001;
    }
  }
  ptVar2->accessTime = BWSM_NormalCacheSysTime;
  goto LAB_80080154;
}



// decompiled code
// original method signature: 
// void /*$ra*/ NormalCache_Init__Fv()
 // line 1411, offset 0x800801ac
	/* begin block 1 */
		// Start line: 1412
		// Start offset: 0x800801AC

		/* begin block 1.1 */
			// Start line: 1413
			// Start offset: 0x800801AC
			// Variables:
		// 		int i; // $a0
		/* end block 1.1 */
		// End offset: 0x800801E0
		// End Line: 1421
	/* end block 1 */
	// End offset: 0x800801E0
	// End Line: 1421

	/* begin block 2 */
		// Start line: 3371
	/* end block 2 */
	// End Line: 3372

	/* begin block 3 */
		// Start line: 3377
	/* end block 3 */
	// End Line: 3378

	/* begin block 4 */
		// Start line: 3377
	/* end block 4 */
	// End Line: 3378

	/* begin block 5 */
		// Start line: 3378
	/* end block 5 */
	// End Line: 3379

	/* begin block 6 */
		// Start line: 3378
	/* end block 6 */
	// End Line: 3379

/* WARNING: Unknown calling convention yet parameter storage is locked */

void NormalCache_Init__Fv(void)

{
  tNormalCacheEntry *ptVar1;
  int iVar2;
  
  BWSM_NormalCacheSysTime = 0;
  iVar2 = 0;
  ptVar1 = &BWSM_NormalCache;
  do {
    ptVar1->sliceInd = -1;
    ptVar1->quadInd = -1;
    ptVar1->triangleFlag = '\0';
    ptVar1->accessTime = 0;
    iVar2 = iVar2 + 1;
    ptVar1 = ptVar1 + 1;
  } while (iVar2 < 0x10);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Check_Rot__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos /*$s0*/)
 // line 1427, offset 0x800801e8
	/* begin block 1 */
		// Start line: 1428
		// Start offset: 0x800801E8

		/* begin block 1.1 */
			// Start line: 1428
			// Start offset: 0x800801E8

			/* begin block 1.1.1 */
				// Start line: 1431
				// Start offset: 0x80080214

				/* begin block 1.1.1.1 */
					// Start line: 1432
					// Start offset: 0x80080214

					/* begin block 1.1.1.1.1 */
						// Start line: 1433
						// Start offset: 0x80080228
						// Variables:
					// 		struct coorddef vecX; // stack offset -48
					// 		struct coorddef vecZ; // stack offset -32

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1481
							// Start offset: 0x80080494
							// Variables:
						// 		struct coorddef *forward; // $s2
						// 		struct coorddef *normal; // $s1
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800804E4
						// End Line: 1488
					/* end block 1.1.1.1.1 */
					// End offset: 0x800804F4
					// End Line: 1492
				/* end block 1.1.1.1 */
				// End offset: 0x800804F4
				// End Line: 1492
			/* end block 1.1.1 */
			// End offset: 0x800804F4
			// End Line: 1492
		/* end block 1.1 */
		// End offset: 0x800804F4
		// End Line: 1492
	/* end block 1 */
	// End offset: 0x800804F4
	// End Line: 1496

	/* begin block 2 */
		// Start line: 3402
	/* end block 2 */
	// End Line: 3403

	/* begin block 3 */
		// Start line: 3409
	/* end block 3 */
	// End Line: 3410

	/* begin block 4 */
		// Start line: 3409
	/* end block 4 */
	// End Line: 3410

void Check_Rot__FP12BWorldSm_Pos(BWorldSm_Pos *slicePos)

{
  undefined *puVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  if (((int)slicePos->simRotFlag != (int)slicePos->triangleFlag) &&
     (puVar1 = (undefined *)NormalCache_FindEntry__FP12BWorldSm_Pos(slicePos),
     puVar1 != &DAT_00000001)) {
    if (slicePos->triangleFlag == '\x03') {
      iVar2 = slicePos->quadPts[1].x - slicePos->quadPts[0].x;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      local_20 = (slicePos->quadPts[2].x - slicePos->quadPts[3].x) + (iVar2 >> 3);
      iVar2 = slicePos->quadPts[1].y - slicePos->quadPts[0].y;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      local_1c = (slicePos->quadPts[2].y - slicePos->quadPts[3].y) + (iVar2 >> 3);
      iVar2 = slicePos->quadPts[1].z - slicePos->quadPts[0].z;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      local_18 = (slicePos->quadPts[2].z - slicePos->quadPts[3].z) + (iVar2 >> 3);
      iVar2 = slicePos->quadPts[1].x - slicePos->quadPts[2].x;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      local_30 = (slicePos->quadPts[0].x - slicePos->quadPts[3].x) + (iVar2 >> 3);
      iVar2 = slicePos->quadPts[1].y - slicePos->quadPts[2].y;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      local_2c = (slicePos->quadPts[0].y - slicePos->quadPts[3].y) + (iVar2 >> 3);
      iVar2 = slicePos->quadPts[1].z - slicePos->quadPts[2].z;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      local_28 = (slicePos->quadPts[0].z - slicePos->quadPts[3].z) + (iVar2 >> 3);
    }
    else {
      if (slicePos->triangleFlag == '\x02') {
        local_20 = slicePos->quadPts[1].x - slicePos->quadPts[0].x;
        local_1c = slicePos->quadPts[1].y - slicePos->quadPts[0].y;
        local_18 = slicePos->quadPts[1].z - slicePos->quadPts[0].z;
        local_30 = slicePos->quadPts[1].x - slicePos->quadPts[2].x;
        local_2c = slicePos->quadPts[1].y - slicePos->quadPts[2].y;
        local_28 = slicePos->quadPts[1].z - slicePos->quadPts[2].z;
      }
      else {
        local_20 = slicePos->quadPts[2].x - slicePos->quadPts[3].x;
        local_1c = slicePos->quadPts[2].y - slicePos->quadPts[3].y;
        local_18 = slicePos->quadPts[2].z - slicePos->quadPts[3].z;
        local_30 = slicePos->quadPts[0].x - slicePos->quadPts[3].x;
        local_2c = slicePos->quadPts[0].y - slicePos->quadPts[3].y;
        local_28 = slicePos->quadPts[0].z - slicePos->quadPts[3].z;
      }
    }
    (slicePos->forward).x = local_20;
    (slicePos->forward).y = local_1c;
    (slicePos->forward).z = local_18;
    crossproduct(&local_20,&local_30,(int *)&slicePos->normal);
    Math_NormalizeVector__FP8coorddef(&slicePos->normal);
    if (0xffff < (slicePos->normal).y) {
      (slicePos->normal).y = 0xfff9;
    }
    Math_NormalizeVector__FP8coorddef(&slicePos->forward);
    NormalCache_AddEntry__FP12BWorldSm_Pos(slicePos);
  }
  slicePos->simRotFlag = (short)slicePos->triangleFlag;
  return;
}



// decompiled code
// original method signature: 
// struct coorddef * /*$ra*/ BWorldSm_UNormal__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos /*$s0*/)
 // line 1499, offset 0x80080520
	/* begin block 1 */
		// Start line: 1500
		// Start offset: 0x80080520
	/* end block 1 */
	// End offset: 0x80080520
	// End Line: 1500

	/* begin block 2 */
		// Start line: 3553
	/* end block 2 */
	// End Line: 3554

	/* begin block 3 */
		// Start line: 3557
	/* end block 3 */
	// End Line: 3558

	/* begin block 4 */
		// Start line: 3557
	/* end block 4 */
	// End Line: 3558

coorddef * BWorldSm_UNormal__FP12BWorldSm_Pos(BWorldSm_Pos *slicePos)

{
  Check_Rot__FP12BWorldSm_Pos(slicePos);
  return &slicePos->normal;
}



// decompiled code
// original method signature: 
// struct coorddef * /*$ra*/ BWorldSm_UForward__FP12BWorldSm_Pos(struct BWorldSm_Pos *slicePos /*$s0*/)
 // line 1506, offset 0x80080548
	/* begin block 1 */
		// Start line: 1507
		// Start offset: 0x80080548
	/* end block 1 */
	// End offset: 0x80080548
	// End Line: 1507

	/* begin block 2 */
		// Start line: 3567
	/* end block 2 */
	// End Line: 3568

	/* begin block 3 */
		// Start line: 3571
	/* end block 3 */
	// End Line: 3572

	/* begin block 4 */
		// Start line: 3571
	/* end block 4 */
	// End Line: 3572

coorddef * BWorldSm_UForward__FP12BWorldSm_Pos(BWorldSm_Pos *slicePos)

{
  Check_Rot__FP12BWorldSm_Pos(slicePos);
  return &slicePos->forward;
}



// decompiled code
// original method signature: 
// int /*$ra*/ BWorldSm_FindClosestTriangleRez__FP8coorddefP12BWorldSm_Posi(struct coorddef *pt /*$s0*/, struct BWorldSm_Pos *slicePos /*$s1*/, int hiRezFlag /*$a2*/)
 // line 1517, offset 0x80080570
	/* begin block 1 */
		// Start line: 1518
		// Start offset: 0x80080570
		// Variables:
	// 		int ret; // $s2
	/* end block 1 */
	// End offset: 0x800805F0
	// End Line: 1537

	/* begin block 2 */
		// Start line: 3587
	/* end block 2 */
	// End Line: 3588

	/* begin block 3 */
		// Start line: 3593
	/* end block 3 */
	// End Line: 3594

	/* begin block 4 */
		// Start line: 3593
	/* end block 4 */
	// End Line: 3594

int BWorldSm_FindClosestTriangleRez__FP8coorddefP12BWorldSm_Posi
              (coorddef *pt,BWorldSm_Pos *slicePos,int hiRezFlag)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi(pt,slicePos,hiRezFlag);
  if (slicePos->simQuad != (Trk_NewSimQuad *)0x0) {
    uVar3 = fixedmult(slicePos->quadPts[2].x - slicePos->quadPts[0].x,pt->z - slicePos->quadPts[0].z
                     );
    uVar4 = fixedmult(pt->x - slicePos->quadPts[0].x,slicePos->quadPts[2].z - slicePos->quadPts[0].z
                     );
    cVar1 = '\x02';
    if (0 < (int)(uVar3 - uVar4)) {
      cVar1 = '\x01';
    }
    slicePos->triangleFlag = cVar1;
  }
  return iVar2;
}





