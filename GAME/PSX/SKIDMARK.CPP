#include "THISDUST.H"
#include "SKIDMARK.H"


// decompiled code
// original method signature: 
// void /*$ra*/ CalcStartSegment__FP16Skidmark_SegmentT0P8coorddefN22i(struct Skidmark_Segment *r1 /*$s5*/, struct Skidmark_Segment *r2 /*$s6*/, struct coorddef *cp /*$s2*/, struct coorddef *pt1 /*$s0*/, struct coorddef *pt2 /*stack 16*/, int tireWidth /*stack 20*/)
 // line 48, offset 0x800de6f4
	/* begin block 1 */
		// Start line: 49
		// Start offset: 0x800DE6F4
		// Variables:
	// 		int pxp; // $s1
	// 		int pzp; // $v0

		/* begin block 1.1 */
			// Start line: 49
			// Start offset: 0x800DE6F4
			// Variables:
		// 		int angle; // $s1
		/* end block 1.1 */
		// End offset: 0x800DE6F4
		// End Line: 49
	/* end block 1 */
	// End offset: 0x800DE6F4
	// End Line: 49

	/* begin block 2 */
		// Start line: 96
	/* end block 2 */
	// End Line: 97

	/* begin block 3 */
		// Start line: 96
	/* end block 3 */
	// End Line: 97

void CalcStartSegment__FP16Skidmark_SegmentT0P8coorddefN22i
               (Skidmark_Segment *r1,Skidmark_Segment *r2,coorddef *cp,coorddef *pt1,coorddef *pt2,
               int tireWidth)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = intatan(pt2->x - pt1->x,pt2->z - pt1->z);
  puVar2 = fastintcos(uVar1);
  uVar3 = fixedmult(tireWidth,-(int)puVar2);
  iVar5 = (int)uVar3 >> 1;
  puVar2 = fastintsin(uVar1);
  uVar1 = fixedmult(tireWidth,(int)puVar2);
  r1->svx[0].vx = (short)((pt1->x + iVar5) - cp->x >> 6);
  iVar4 = (int)uVar1 >> 1;
  r1->svx[0].vy = (short)(pt1->y - cp->y >> 6);
  r1->svx[0].vz = (short)((pt1->z + iVar4) - cp->z >> 6);
  r1->svx[1].vx = (short)((pt1->x - iVar5) - cp->x >> 6);
  r1->svx[1].vy = (short)(pt1->y - cp->y >> 6);
  r1->svx[1].vz = (short)((pt1->z - iVar4) - cp->z >> 6);
  r2->svx[1].vx = (short)((pt2->x - iVar5) - cp->x >> 6);
  r2->svx[1].vy = (short)(pt2->y - cp->y >> 6);
  r2->svx[1].vz = (short)((pt2->z - iVar4) - cp->z >> 6);
  r2->svx[0].vx = (short)((pt2->x + iVar5) - cp->x >> 6);
  r2->svx[0].vy = (short)(pt2->y - cp->y >> 6);
  r2->svx[0].vz = (short)((pt2->z + iVar4) - cp->z >> 6);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcOneSegment__FP16Skidmark_SegmentP8coorddefN21i(struct Skidmark_Segment *r1 /*$s4*/, struct coorddef *cp /*$s3*/, struct coorddef *pt1 /*$a2*/, struct coorddef *pt2 /*$s0*/, int tireWidth /*stack 16*/)
 // line 81, offset 0x800de8c4
	/* begin block 1 */
		// Start line: 82
		// Start offset: 0x800DE8C4
		// Variables:
	// 		int pxp; // $s1
	// 		int pzp; // $v0

		/* begin block 1.1 */
			// Start line: 82
			// Start offset: 0x800DE8C4
			// Variables:
		// 		int angle; // $s1
		/* end block 1.1 */
		// End offset: 0x800DE8C4
		// End Line: 82
	/* end block 1 */
	// End offset: 0x800DE8C4
	// End Line: 82

	/* begin block 2 */
		// Start line: 163
	/* end block 2 */
	// End Line: 164

	/* begin block 3 */
		// Start line: 172
	/* end block 3 */
	// End Line: 173

	/* begin block 4 */
		// Start line: 172
	/* end block 4 */
	// End Line: 173

void CalcOneSegment__FP16Skidmark_SegmentP8coorddefN21i
               (Skidmark_Segment *r1,coorddef *cp,coorddef *pt1,coorddef *pt2,int tireWidth)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  
  uVar1 = intatan(pt2->x - pt1->x,pt2->z - pt1->z);
  puVar2 = fastintcos(uVar1);
  uVar3 = fixedmult(tireWidth,-(int)puVar2);
  puVar2 = fastintsin(uVar1);
  uVar1 = fixedmult(tireWidth,(int)puVar2);
  r1->svx[0].vx = (short)((pt2->x + ((int)uVar3 >> 1)) - cp->x >> 6);
  r1->svx[0].vy = (short)(pt2->y - cp->y >> 6);
  r1->svx[0].vz = (short)((pt2->z + ((int)uVar1 >> 1)) - cp->z >> 6);
  r1->svx[1].vx = (short)((pt2->x - ((int)uVar3 >> 1)) - cp->x >> 6);
  r1->svx[1].vy = (short)(pt2->y - cp->y >> 6);
  r1->svx[1].vz = (short)((pt2->z - ((int)uVar1 >> 1)) - cp->z >> 6);
  return;
}



// decompiled code
// original method signature: 
// struct Skidmark_Chunk * /*$ra*/ Skidmark_CheckChunk__FP8coorddefii(struct coorddef *skidpt /*$a0*/, int newsegs /*$a1*/, int slice /*$a2*/)
 // line 115, offset 0x800de9ec
	/* begin block 1 */
		// Start line: 116
		// Start offset: 0x800DE9EC
		// Variables:
	// 		struct Skidmark_Chunk *returnsm; // $a3
	// 		int NewChunk; // $t1
	/* end block 1 */
	// End offset: 0x800DEB90
	// End Line: 152

	/* begin block 2 */
		// Start line: 235
	/* end block 2 */
	// End Line: 236

	/* begin block 3 */
		// Start line: 251
	/* end block 3 */
	// End Line: 252

	/* begin block 4 */
		// Start line: 251
	/* end block 4 */
	// End Line: 252

	/* begin block 5 */
		// Start line: 256
	/* end block 5 */
	// End Line: 257

Skidmark_Chunk * Skidmark_CheckChunk__FP8coorddefii(coorddef *skidpt,int newsegs,int slice)

{
  bool bVar1;
  int iVar2;
  Skidmark_Chunk *pSVar3;
  int iVar4;
  
  pSVar3 = gSm + gUseSm;
  iVar4 = (pSVar3->cp).x;
  bVar1 = 0x18 < (int)pSVar3->n + newsegs;
  iVar2 = iVar4 - skidpt->x;
  if (iVar2 < 1) {
    iVar2 = skidpt->x - iVar4;
  }
  if (iVar2 < 0x100000) {
    iVar4 = (pSVar3->cp).y;
    iVar2 = iVar4 - skidpt->y;
    if (iVar2 < 1) {
      iVar2 = skidpt->y - iVar4;
    }
    if (iVar2 < 0x100000) {
      iVar4 = (pSVar3->cp).z;
      iVar2 = iVar4 - skidpt->z;
      if (0 < iVar2) {
        if (0xfffff < iVar2) {
          bVar1 = true;
        }
        goto LAB_800deae0;
      }
      if (skidpt->z - iVar4 < 0x100000) goto LAB_800deae0;
    }
  }
  bVar1 = true;
LAB_800deae0:
  if (bVar1) {
    if (gCountSm < gMaxSChunk) {
      gUseSm = gCountSm;
      gCountSm = gCountSm + 1;
    }
    else {
      bVar1 = gMaxSChunk + -1 <= gUseSm;
      gUseSm = gUseSm + 1;
      if (bVar1) {
        gUseSm = 0;
      }
    }
    pSVar3 = gSm + gUseSm;
    pSVar3->n = 0;
  }
  if (pSVar3->n == 0) {
    iVar2 = skidpt->y;
    iVar4 = skidpt->z;
    (pSVar3->cp).x = skidpt->x;
    (pSVar3->cp).y = iVar2;
    (pSVar3->cp).z = iVar4;
    pSVar3->slice = (short)slice;
  }
  return pSVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Skidmark_Add__FP5tSkidP8coorddefP7CVECTORiii(struct tSkid *prevskid /*$s1*/, struct coorddef *skidpt /*$s3*/, struct CVECTOR *color /*$s5*/, int tireWidth /*$s2*/, int type /*stack 16*/, int slice /*stack 20*/)
 // line 159, offset 0x800deb98
	/* begin block 1 */
		// Start line: 160
		// Start offset: 0x800DEB98
		// Variables:
	// 		struct Skidmark_Chunk *sm; // $s0
	/* end block 1 */
	// End offset: 0x800DEF48
	// End Line: 240

	/* begin block 2 */
		// Start line: 333
	/* end block 2 */
	// End Line: 334

	/* begin block 3 */
		// Start line: 341
	/* end block 3 */
	// End Line: 342

	/* begin block 4 */
		// Start line: 341
	/* end block 4 */
	// End Line: 342

void Skidmark_Add__FP5tSkidP8coorddefP7CVECTORiii
               (tSkid *prevskid,coorddef *skidpt,CVECTOR *color,int tireWidth,int type,int slice)

{
  short sVar1;
  Skidmark_Chunk *cp;
  coorddef *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (prevskid->nseg == (Skidmark_Segment *)0x0) {
    cp = Skidmark_CheckChunk__FP8coorddefii(skidpt,2,slice);
    CalcStartSegment__FP16Skidmark_SegmentT0P8coorddefN22i
              (cp->seg + (int)cp->n,cp->seg + (int)cp->n + 1,(coorddef *)cp,(coorddef *)prevskid,
               skidpt,tireWidth);
    sVar1 = cp->n;
    pcVar2 = (coorddef *)((int)&cp->cp + ((int)sVar1 + 1) * 0x1c);
    *(CVECTOR *)&pcVar2[2].z = *color;
    cp->seg[(int)sVar1].rgb = *(CVECTOR *)&pcVar2[2].z;
    iVar3 = (int)cp->n;
    cp->seg[iVar3 + 1].type = type;
  }
  else {
    cp = Skidmark_CheckChunk__FP8coorddefii(skidpt,2,slice);
    if (prevskid->chunk == gUseSm) {
      CalcOneSegment__FP16Skidmark_SegmentP8coorddefN21i
                (cp->seg + (int)cp->n,(coorddef *)cp,(coorddef *)prevskid,skidpt,tireWidth);
      cp->seg[(int)cp->n].rgb = *color;
      cp->seg[(int)cp->n].type = type;
      prevskid->nseg->next = cp->seg + (int)cp->n;
      cp->seg[(int)cp->n].next = (Skidmark_Segment *)0x0;
      iVar3 = gUseSm;
      prevskid->clr = *color;
      prevskid->type = type;
      iVar4 = skidpt->y;
      iVar5 = skidpt->z;
      (prevskid->pt).x = skidpt->x;
      (prevskid->pt).y = iVar4;
      (prevskid->pt).z = iVar5;
      sVar1 = cp->n;
      prevskid->chunk = iVar3;
      prevskid->nseg = cp->seg + (int)sVar1;
      sVar1 = cp->n + 1;
      goto LAB_800def44;
    }
    CalcStartSegment__FP16Skidmark_SegmentT0P8coorddefN22i
              (cp->seg + (int)cp->n,cp->seg + (int)cp->n + 1,(coorddef *)cp,(coorddef *)prevskid,
               skidpt,tireWidth);
    cp->seg[(int)cp->n].rgb = prevskid->clr;
    cp->seg[(int)cp->n].type = prevskid->type;
    cp->seg[(int)cp->n + 1].rgb = *color;
    iVar3 = (int)cp->n + 1;
  }
  cp->seg[iVar3].type = type;
  cp->seg[(int)cp->n].next = cp->seg + (int)cp->n + 1;
  cp->seg[(int)cp->n + 1].next = (Skidmark_Segment *)0x0;
  iVar3 = gUseSm;
  prevskid->clr = *color;
  prevskid->type = type;
  iVar4 = skidpt->y;
  iVar5 = skidpt->z;
  (prevskid->pt).x = skidpt->x;
  (prevskid->pt).y = iVar4;
  (prevskid->pt).z = iVar5;
  sVar1 = cp->n;
  prevskid->chunk = iVar3;
  prevskid->nseg = cp->seg + (int)sVar1 + 1;
  sVar1 = cp->n + 2;
LAB_800def44:
  cp->n = sVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Skidmark_AddStretch__FPP16Skidmark_SegmentPiP5tSkidP8coorddefP7CVECTORiii(struct Skidmark_Segment **save /*$s6*/, int *savechunk /*$s7*/, struct tSkid *prevskid /*$s2*/, struct coorddef *skidpt /*$s1*/, struct CVECTOR *color /*stack 16*/, int tireWidth /*stack 20*/, int type /*stack 24*/, int slice /*stack 28*/)
 // line 264, offset 0x800def6c
	/* begin block 1 */
		// Start line: 265
		// Start offset: 0x800DEF6C
		// Variables:
	// 		struct Skidmark_Chunk *sm; // $s0
	/* end block 1 */
	// End offset: 0x800DF2DC
	// End Line: 327

	/* begin block 2 */
		// Start line: 545
	/* end block 2 */
	// End Line: 546

	/* begin block 3 */
		// Start line: 570
	/* end block 3 */
	// End Line: 571

	/* begin block 4 */
		// Start line: 570
	/* end block 4 */
	// End Line: 571

void Skidmark_AddStretch__FPP16Skidmark_SegmentPiP5tSkidP8coorddefP7CVECTORiii
               (Skidmark_Segment **save,int *savechunk,tSkid *prevskid,coorddef *skidpt,
               CVECTOR *color,int tireWidth,int type,int slice)

{
  short sVar1;
  Skidmark_Chunk *cp;
  coorddef *pcVar2;
  int iVar3;
  
  if (prevskid->nseg == (Skidmark_Segment *)0x0) {
    cp = Skidmark_CheckChunk__FP8coorddefii(skidpt,2,slice);
    CalcStartSegment__FP16Skidmark_SegmentT0P8coorddefN22i
              (cp->seg + (int)cp->n,cp->seg + (int)cp->n + 1,(coorddef *)cp,(coorddef *)prevskid,
               skidpt,tireWidth);
    sVar1 = cp->n;
    pcVar2 = (coorddef *)((int)&cp->cp + ((int)sVar1 + 1) * 0x1c);
    *(CVECTOR *)&pcVar2[2].z = *color;
    cp->seg[(int)sVar1].rgb = *(CVECTOR *)&pcVar2[2].z;
    iVar3 = (int)cp->n;
    cp->seg[iVar3 + 1].type = type;
  }
  else {
    cp = Skidmark_CheckChunk__FP8coorddefii(skidpt,2,slice);
    if (prevskid->chunk == gUseSm) {
      CalcOneSegment__FP16Skidmark_SegmentP8coorddefN21i
                (cp->seg + (int)cp->n,(coorddef *)cp,(coorddef *)prevskid,skidpt,tireWidth);
      cp->seg[(int)cp->n].rgb = *color;
      cp->seg[(int)cp->n].type = type;
      prevskid->nseg->next = cp->seg + (int)cp->n;
      cp->seg[(int)cp->n].next = (Skidmark_Segment *)0x0;
      *save = cp->seg + (int)cp->n;
      *savechunk = gUseSm;
      sVar1 = cp->n + 1;
      goto LAB_800df2d8;
    }
    CalcStartSegment__FP16Skidmark_SegmentT0P8coorddefN22i
              (cp->seg + (int)cp->n,cp->seg + (int)cp->n + 1,(coorddef *)cp,(coorddef *)prevskid,
               skidpt,tireWidth);
    cp->seg[(int)cp->n].rgb = prevskid->clr;
    cp->seg[(int)cp->n].type = prevskid->type;
    cp->seg[(int)cp->n + 1].rgb = *color;
    iVar3 = (int)cp->n + 1;
  }
  cp->seg[iVar3].type = type;
  cp->seg[(int)cp->n].next = cp->seg + (int)cp->n + 1;
  cp->seg[(int)cp->n + 1].next = (Skidmark_Segment *)0x0;
  *save = cp->seg + (int)cp->n + 1;
  *savechunk = gUseSm;
  sVar1 = cp->n + 2;
LAB_800df2d8:
  cp->n = sVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Skidmark_Stretch__FP16Skidmark_SegmentiP5tSkidP8coorddefP7CVECTORii(struct Skidmark_Segment *save /*$s0*/, int savechunk /*$a1*/, struct tSkid *prevskid /*$a2*/, struct coorddef *skidpt /*$a3*/, struct CVECTOR *color /*stack 16*/, int tireWidth /*stack 20*/, int type /*stack 24*/)
 // line 336, offset 0x800df308
	/* begin block 1 */
		// Start line: 337
		// Start offset: 0x800DF308
	/* end block 1 */
	// End offset: 0x800DF308
	// End Line: 337

	/* begin block 2 */
		// Start line: 713
	/* end block 2 */
	// End Line: 714

	/* begin block 3 */
		// Start line: 723
	/* end block 3 */
	// End Line: 724

	/* begin block 4 */
		// Start line: 723
	/* end block 4 */
	// End Line: 724

void Skidmark_Stretch__FP16Skidmark_SegmentiP5tSkidP8coorddefP7CVECTORii
               (Skidmark_Segment *save,int savechunk,tSkid *prevskid,coorddef *skidpt,CVECTOR *color
               ,int tireWidth,int type)

{
  CalcOneSegment__FP16Skidmark_SegmentP8coorddefN21i
            (save,(coorddef *)(gSm + savechunk),(coorddef *)prevskid,skidpt,tireWidth);
  save->rgb = *color;
  save->type = type;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Skidmark_EndStretch__FP16Skidmark_SegmentiP5tSkidP8coorddefP7CVECTORii(struct Skidmark_Segment *save /*$s2*/, int savechunk /*$s1*/, struct tSkid *prevskid /*$s0*/, struct coorddef *skidpt /*$s5*/, struct CVECTOR *color /*stack 16*/, int tireWidth /*stack 20*/, int type /*stack 24*/)
 // line 350, offset 0x800df388
	/* begin block 1 */
		// Start line: 351
		// Start offset: 0x800DF388
	/* end block 1 */
	// End offset: 0x800DF388
	// End Line: 351

	/* begin block 2 */
		// Start line: 742
	/* end block 2 */
	// End Line: 743

	/* begin block 3 */
		// Start line: 751
	/* end block 3 */
	// End Line: 752

	/* begin block 4 */
		// Start line: 751
	/* end block 4 */
	// End Line: 752

void Skidmark_EndStretch__FP16Skidmark_SegmentiP5tSkidP8coorddefP7CVECTORii
               (Skidmark_Segment *save,int savechunk,tSkid *prevskid,coorddef *skidpt,CVECTOR *color
               ,int tireWidth,int type)

{
  int iVar1;
  int iVar2;
  
  CalcOneSegment__FP16Skidmark_SegmentP8coorddefN21i
            (save,(coorddef *)(gSm + savechunk),(coorddef *)prevskid,skidpt,tireWidth);
  save->rgb = *color;
  save->type = type;
  prevskid->clr = *color;
  prevskid->type = type;
  iVar1 = skidpt->y;
  iVar2 = skidpt->z;
  (prevskid->pt).x = skidpt->x;
  (prevskid->pt).y = iVar1;
  (prevskid->pt).z = iVar2;
  prevskid->nseg = save;
  prevskid->chunk = savechunk;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Skidmark_OnyxBuildFacets__FP13DRender_tView(struct DRender_tView *Vi /*$v1*/)
 // line 365, offset 0x800df464
	/* begin block 1 */
		// Start line: 366
		// Start offset: 0x800DF464
		// Variables:
	// 		struct Draw_tCtrlSkidmark *fskid; // $a0
	// 		struct Draw_tCtrlSkidmark fskidspace; // stack offset -64

		/* begin block 1.1 */
			// Start line: 366
			// Start offset: 0x800DF464
			// Variables:
		// 		int t1; // $a1
		// 		int t2; // $v0
		// 		int t3; // $a2
		/* end block 1.1 */
		// End offset: 0x800DF464
		// End Line: 366
	/* end block 1 */
	// End offset: 0x800DF464
	// End Line: 366

	/* begin block 2 */
		// Start line: 783
	/* end block 2 */
	// End Line: 784

	/* begin block 3 */
		// Start line: 787
	/* end block 3 */
	// End Line: 788

	/* begin block 4 */
		// Start line: 787
	/* end block 4 */
	// End Line: 788

void Skidmark_OnyxBuildFacets__FP13DRender_tView(DRender_tView *Vi)

{
  Draw_tCtrlSkidmark local_40;
  
  local_40.t.x = (Vi->cview).translation.x;
  local_40.t.y = (Vi->cview).translation.y;
  local_40.t.z = (Vi->cview).translation.z;
  local_40.count = gCountSm;
  local_40.smp = gSm;
  local_40.m.m[0] = (Vi->cview).mrotationInv.m[0];
  local_40.m.m[2] = (Vi->cview).mrotationInv.m[2];
  local_40.m.m[1] = -(Vi->cview).mrotationInv.m[1];
  local_40.m.m[3] = (Vi->cview).mrotationInv.m[3];
  local_40.m.m[5] = (Vi->cview).mrotationInv.m[5];
  local_40.m.m[4] = -(Vi->cview).mrotationInv.m[4];
  local_40.m.m[6] = (Vi->cview).mrotationInv.m[6];
  local_40.m.m[8] = (Vi->cview).mrotationInv.m[8];
  local_40.m.m[7] = -(Vi->cview).mrotationInv.m[7];
  Draw_kCtrlSkidmark__FP18Draw_tCtrlSkidmark(&local_40);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Skidmark_InitSkidmark__Fv()
 // line 419, offset 0x800df504
	/* begin block 1 */
		// Start line: 420
		// Start offset: 0x800DF504
	/* end block 1 */
	// End offset: 0x800DF52C
	// End Line: 425

	/* begin block 2 */
		// Start line: 897
	/* end block 2 */
	// End Line: 898

	/* begin block 3 */
		// Start line: 908
	/* end block 3 */
	// End Line: 909

	/* begin block 4 */
		// Start line: 908
	/* end block 4 */
	// End Line: 909

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Skidmark_InitSkidmark__Fv(void)

{
  gMaxSChunk = 0x10;
  if (GameSetup_gData.commMode == 1) {
    gMaxSChunk = 8;
  }
  gSm = (Skidmark_Chunk *)reservememadr(s_SkidMark_80056a14,gMaxSChunk * 0x2b0,0);
  gSm->n = 0;
  gCountSm = 0;
  gUseSm = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Skidmark_RestartSkidmark__Fv()
 // line 433, offset 0x800df578
	/* begin block 1 */
		// Start line: 434
		// Start offset: 0x800DF578
	/* end block 1 */
	// End offset: 0x800DF578
	// End Line: 438

	/* begin block 2 */
		// Start line: 939
	/* end block 2 */
	// End Line: 940

	/* begin block 3 */
		// Start line: 943
	/* end block 3 */
	// End Line: 944

	/* begin block 4 */
		// Start line: 943
	/* end block 4 */
	// End Line: 944

	/* begin block 5 */
		// Start line: 947
	/* end block 5 */
	// End Line: 948

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Skidmark_RestartSkidmark__Fv(void)

{
  gCountSm = 0;
  gUseSm = 0;
  gSm->n = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Skidmark_KillSkidmark__Fv()
 // line 441, offset 0x800df58c
	/* begin block 1 */
		// Start line: 442
		// Start offset: 0x800DF58C
	/* end block 1 */
	// End offset: 0x800DF5A4
	// End Line: 444

	/* begin block 2 */
		// Start line: 957
	/* end block 2 */
	// End Line: 958

	/* begin block 3 */
		// Start line: 961
	/* end block 3 */
	// End Line: 962

	/* begin block 4 */
		// Start line: 961
	/* end block 4 */
	// End Line: 962

	/* begin block 5 */
		// Start line: 962
	/* end block 5 */
	// End Line: 963

	/* begin block 6 */
		// Start line: 962
	/* end block 6 */
	// End Line: 963

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Skidmark_KillSkidmark__Fv(void)

{
  if (gSm != (Skidmark_Chunk *)0x0) {
    purgememadr((int)gSm);
  }
  gSm = (Skidmark_Chunk *)0x0;
  return;
}





