#include "THISDUST.H"
#include "DRAWW.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_AddSubdividPrimGT4__FP8POLY_GT4P12Draw_SVertexN31P25Draw_tGiveShelbyMoreCache(struct POLY_GT4 *prim /*$a0*/, struct Draw_SVertex *v0 /*$a1*/, struct Draw_SVertex *v1 /*$a2*/, struct Draw_SVertex *v2 /*$a3*/, struct Draw_SVertex *v3 /*stack 16*/, struct Draw_tGiveShelbyMoreCache *sd /*stack 20*/)
 // line 235, offset 0x800c5028
	/* begin block 1 */
		// Start line: 236
		// Start offset: 0x800C5028

		/* begin block 1.1 */
			// Start line: 236
			// Start offset: 0x800C5028
			// Variables:
		// 		long a; // $v0
		// 		long b; // $v1
		// 		long c; // $t0
		// 		long d; // $t1
		/* end block 1.1 */
		// End offset: 0x800C5028
		// End Line: 236

		/* begin block 1.2 */
			// Start line: 236
			// Start offset: 0x800C5028
			// Variables:
		// 		long a; // $v0
		// 		long b; // $v1
		// 		long c; // $t0
		// 		long d; // $t1
		/* end block 1.2 */
		// End offset: 0x800C5028
		// End Line: 236

		/* begin block 1.3 */
			// Start line: 236
			// Start offset: 0x800C5028
			// Variables:
		// 		short a; // $v0
		// 		short b; // $v1
		// 		short c; // $a1
		// 		short d; // $a2
		/* end block 1.3 */
		// End offset: 0x800C5028
		// End Line: 236

		/* begin block 1.4 */
			// Start line: 236
			// Start offset: 0x800C5028
			// Variables:
		// 		unsigned char a; // $v0
		// 		unsigned short b; // $v1
		// 		unsigned short c; // $a1
		/* end block 1.4 */
		// End offset: 0x800C5028
		// End Line: 236
	/* end block 1 */
	// End offset: 0x800C5028
	// End Line: 236

	/* begin block 2 */
		// Start line: 470
	/* end block 2 */
	// End Line: 471

	/* begin block 3 */
		// Start line: 470
	/* end block 3 */
	// End Line: 471

void DrawW_AddSubdividPrimGT4__FP8POLY_GT4P12Draw_SVertexN31P25Draw_tGiveShelbyMoreCache
               (POLY_GT4 *prim,Draw_SVertex *v0,Draw_SVertex *v1,Draw_SVertex *v2,Draw_SVertex *v3,
               Draw_tGiveShelbyMoreCache *sd)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined *)((int)&prim->tag + 3) = 0xc;
  uVar6 = *(undefined4 *)&v1->r;
  uVar7 = *(undefined4 *)&v2->r;
  uVar8 = *(undefined4 *)&v3->r;
  *(undefined4 *)&prim->r0 = *(undefined4 *)&v0->r;
  *(undefined4 *)&prim->r1 = uVar6;
  *(undefined4 *)&prim->r3 = uVar7;
  *(undefined4 *)&prim->r2 = uVar8;
  uVar6 = *(undefined4 *)&v1->dvx;
  uVar7 = *(undefined4 *)&v2->dvx;
  uVar8 = *(undefined4 *)&v3->dvx;
  *(undefined4 *)&prim->x0 = *(undefined4 *)&v0->dvx;
  *(undefined4 *)&prim->x1 = uVar6;
  *(undefined4 *)&prim->x3 = uVar7;
  *(undefined4 *)&prim->x2 = uVar8;
  uVar1 = *(undefined2 *)&v1->u;
  uVar2 = *(undefined2 *)&v2->u;
  uVar3 = *(undefined2 *)&v3->u;
  *(undefined2 *)&prim->u0 = *(undefined2 *)&v0->u;
  *(undefined2 *)&prim->u1 = uVar1;
  *(undefined2 *)&prim->u3 = uVar2;
  *(undefined2 *)&prim->u2 = uVar3;
  uVar4 = (sd->GT4Prim).tpage;
  uVar5 = (sd->GT4Prim).clut;
  prim->code = (sd->GT4Prim).code;
  prim->tpage = uVar4;
  prim->clut = uVar5;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_AddSubdividPrimGT3__FP8POLY_GT3P12Draw_SVertexN21P25Draw_tGiveShelbyMoreCache(struct POLY_GT3 *prim /*$a0*/, struct Draw_SVertex *v0 /*$a1*/, struct Draw_SVertex *v1 /*$a2*/, struct Draw_SVertex *v2 /*$a3*/, struct Draw_tGiveShelbyMoreCache *sd /*stack 16*/)
 // line 316, offset 0x800c50b4
	/* begin block 1 */
		// Start line: 317
		// Start offset: 0x800C50B4

		/* begin block 1.1 */
			// Start line: 317
			// Start offset: 0x800C50B4
			// Variables:
		// 		long a; // $v0
		// 		long b; // $v1
		// 		long c; // $t0
		/* end block 1.1 */
		// End offset: 0x800C50B4
		// End Line: 317

		/* begin block 1.2 */
			// Start line: 317
			// Start offset: 0x800C50B4
			// Variables:
		// 		long a; // $v0
		// 		long b; // $v1
		// 		long c; // $t0
		/* end block 1.2 */
		// End offset: 0x800C50B4
		// End Line: 317

		/* begin block 1.3 */
			// Start line: 317
			// Start offset: 0x800C50B4
			// Variables:
		// 		short a; // $v0
		// 		short b; // $v1
		// 		short c; // $a1
		/* end block 1.3 */
		// End offset: 0x800C50B4
		// End Line: 317

		/* begin block 1.4 */
			// Start line: 317
			// Start offset: 0x800C50B4
			// Variables:
		// 		unsigned char a; // $v0
		// 		unsigned short b; // $v1
		// 		unsigned short c; // $a1
		/* end block 1.4 */
		// End offset: 0x800C50B4
		// End Line: 317
	/* end block 1 */
	// End offset: 0x800C50B4
	// End Line: 317

	/* begin block 2 */
		// Start line: 598
	/* end block 2 */
	// End Line: 599

	/* begin block 3 */
		// Start line: 632
	/* end block 3 */
	// End Line: 633

	/* begin block 4 */
		// Start line: 632
	/* end block 4 */
	// End Line: 633

void DrawW_AddSubdividPrimGT3__FP8POLY_GT3P12Draw_SVertexN21P25Draw_tGiveShelbyMoreCache
               (POLY_GT3 *prim,Draw_SVertex *v0,Draw_SVertex *v1,Draw_SVertex *v2,
               Draw_tGiveShelbyMoreCache *sd)

{
  undefined2 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined *)((int)&prim->tag + 3) = 9;
  uVar5 = *(undefined4 *)&v1->r;
  uVar6 = *(undefined4 *)&v2->r;
  *(undefined4 *)&prim->r0 = *(undefined4 *)&v0->r;
  *(undefined4 *)&prim->r1 = uVar5;
  *(undefined4 *)&prim->r2 = uVar6;
  uVar5 = *(undefined4 *)&v1->dvx;
  uVar6 = *(undefined4 *)&v2->dvx;
  *(undefined4 *)&prim->x0 = *(undefined4 *)&v0->dvx;
  *(undefined4 *)&prim->x1 = uVar5;
  *(undefined4 *)&prim->x2 = uVar6;
  uVar1 = *(undefined2 *)&v1->u;
  uVar2 = *(undefined2 *)&v2->u;
  *(undefined2 *)&prim->u0 = *(undefined2 *)&v0->u;
  *(undefined2 *)&prim->u1 = uVar1;
  *(undefined2 *)&prim->u2 = uVar2;
  uVar3 = (sd->GT4Prim).tpage;
  uVar4 = (sd->GT4Prim).clut;
  prim->code = (sd->GT4Prim).code;
  prim->tpage = uVar3;
  prim->clut = uVar4;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_DivVertice__FP12Draw_SVertexN20(struct Draw_SVertex *v0 /*$a0*/, struct Draw_SVertex *v1 /*$a1*/, struct Draw_SVertex *v2 /*$a2*/)
 // line 387, offset 0x800c5124
	/* begin block 1 */
		// Start line: 388
		// Start offset: 0x800C5124
	/* end block 1 */
	// End offset: 0x800C5124
	// End Line: 390

	/* begin block 2 */
		// Start line: 744
	/* end block 2 */
	// End Line: 745

	/* begin block 3 */
		// Start line: 774
	/* end block 3 */
	// End Line: 775

	/* begin block 4 */
		// Start line: 774
	/* end block 4 */
	// End Line: 775

	/* begin block 5 */
		// Start line: 776
	/* end block 5 */
	// End Line: 777

void DrawW_DivVertice__FP12Draw_SVertexN20(Draw_SVertex *v0,Draw_SVertex *v1,Draw_SVertex *v2)

{
  v0->vx = (short)((int)v1->vx + (int)v2->vx + 1 >> 1);
  v0->vy = (short)((int)v1->vy + (int)v2->vy + 1 >> 1);
  v0->vz = (short)((int)v1->vz + (int)v2->vz + 1 >> 1);
  v0->u = (uchar)((int)((uint)v1->u + (uint)v2->u + 1) >> 1);
  v0->v = (uchar)((int)((uint)v1->v + (uint)v2->v + 1) >> 1);
  v0->r = (uchar)((int)((uint)v1->r + (uint)v2->r) >> 1);
  v0->g = (uchar)((int)((uint)v1->g + (uint)v2->g) >> 1);
  v0->b = (uchar)((int)((uint)v1->b + (uint)v2->b) >> 1);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DrawW_CalcSubdivision__FP25Draw_tGiveShelbyMoreCacheP12Draw_SVertexN31(struct Draw_tGiveShelbyMoreCache *sd /*$a0*/, struct Draw_SVertex *v0 /*$a1*/, struct Draw_SVertex *v1 /*$a2*/, struct Draw_SVertex *v2 /*$a3*/, struct Draw_SVertex *v3 /*stack 16*/)
 // line 402, offset 0x800c51fc
	/* begin block 1 */
		// Start line: 403
		// Start offset: 0x800C51FC
		// Variables:
	// 		int z0; // $a1
	// 		int z1; // $a2
	// 		int z2; // $a3
	// 		int z3; // $t0
	/* end block 1 */
	// End offset: 0x800C527C
	// End Line: 419

	/* begin block 2 */
		// Start line: 800
	/* end block 2 */
	// End Line: 801

	/* begin block 3 */
		// Start line: 804
	/* end block 3 */
	// End Line: 805

	/* begin block 4 */
		// Start line: 804
	/* end block 4 */
	// End Line: 805

	/* begin block 5 */
		// Start line: 806
	/* end block 5 */
	// End Line: 807

int DrawW_CalcSubdivision__FP25Draw_tGiveShelbyMoreCacheP12Draw_SVertexN31
              (Draw_tGiveShelbyMoreCache *sd,Draw_SVertex *v0,Draw_SVertex *v1,Draw_SVertex *v2,
              Draw_SVertex *v3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)v0->vz;
  if ((int)v1->vz < (int)v0->vz) {
    iVar2 = (int)v1->vz;
  }
  if ((int)v2->vz < iVar2) {
    iVar2 = (int)v2->vz;
  }
  if ((int)v3->vz < iVar2) {
    iVar2 = (int)v3->vz;
  }
  iVar2 = iVar2 + (int)sd->offsubdivid;
  if (0x800 < iVar2) {
    return 0;
  }
  if (iVar2 < 0x501) {
    iVar1 = 2;
    if (iVar2 < 0x201) {
      return 3;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_SubdividFacet__FP25Draw_tGiveShelbyMoreCacheiP12Draw_SVertexN32ss(struct Draw_tGiveShelbyMoreCache *sd /*$s2*/, int l /*stack 4*/, struct Draw_SVertex *v0 /*$s1*/, struct Draw_SVertex *v1 /*stack 12*/, struct Draw_SVertex *v2 /*stack 16*/, struct Draw_SVertex *v3 /*stack 20*/, int n /*stack 24*/, int subDivide /*stack 28*/)
 // line 425, offset 0x800c5284
	/* begin block 1 */
		// Start line: 426
		// Start offset: 0x800C5284
		// Variables:
	// 		struct Draw_SubdivStruct *r_div; // $s0

		/* begin block 1.1 */
			// Start line: 449
			// Start offset: 0x800C547C

			/* begin block 1.1.1 */
				// Start line: 453
				// Start offset: 0x800C54B0
				// Variables:
			// 		struct Draw_SVertex *v4; // $s3
			// 		struct Draw_SVertex *v5; // $s5
			// 		struct Draw_SVertex *v6; // $s7
			// 		struct Draw_SVertex *v7; // $s6
			// 		struct Draw_SVertex *v8; // stack offset -48

				/* begin block 1.1.1.1 */
					// Start line: 454
					// Start offset: 0x800C54B0
					// Variables:
				// 		int flag; // stack offset -88
				/* end block 1.1.1.1 */
				// End offset: 0x800C5568
				// End Line: 464

				/* begin block 1.1.1.2 */
					// Start line: 466
					// Start offset: 0x800C5568
					// Variables:
				// 		int flag; // stack offset -84
				/* end block 1.1.1.2 */
				// End offset: 0x800C55C0
				// End Line: 468

				/* begin block 1.1.1.3 */
					// Start line: 470
					// Start offset: 0x800C55C0
					// Variables:
				// 		int flag; // stack offset -80
				/* end block 1.1.1.3 */
				// End offset: 0x800C5618
				// End Line: 472

				/* begin block 1.1.1.4 */
					// Start line: 473
					// Start offset: 0x800C5618
					// Variables:
				// 		int flag; // stack offset -76
				/* end block 1.1.1.4 */
				// End offset: 0x800C5670
				// End Line: 476

				/* begin block 1.1.1.5 */
					// Start line: 477
					// Start offset: 0x800C5670
					// Variables:
				// 		int flag; // stack offset -72
				/* end block 1.1.1.5 */
				// End offset: 0x800C56C8
				// End Line: 478

				/* begin block 1.1.1.6 */
					// Start line: 481
					// Start offset: 0x800C56C8

					/* begin block 1.1.1.6.1 */
						// Start line: 482
						// Start offset: 0x800C56D8
						// Variables:
					// 		struct POLY_GT3 *prim; // $a0
					// 		int otz; // $s0
					/* end block 1.1.1.6.1 */
					// End offset: 0x800C598C
					// End Line: 530
				/* end block 1.1.1.6 */
				// End offset: 0x800C598C
				// End Line: 530
			/* end block 1.1.1 */
			// End offset: 0x800C598C
			// End Line: 534

			/* begin block 1.1.2 */
				// Start line: 544
				// Start offset: 0x800C5A5C
				// Variables:
			// 		struct POLY_GT4 *prim; // $s3

				/* begin block 1.1.2.1 */
					// Start line: 551
					// Start offset: 0x800C5A5C

					/* begin block 1.1.2.1.1 */
						// Start line: 552
						// Start offset: 0x800C5A70
						// Variables:
					// 		long bfct; // stack offset -68
					/* end block 1.1.2.1.1 */
					// End offset: 0x800C5B2C
					// End Line: 579
				/* end block 1.1.2.1 */
				// End offset: 0x800C5B2C
				// End Line: 579
			/* end block 1.1.2 */
			// End offset: 0x800C5B84
			// End Line: 588
		/* end block 1.1 */
		// End offset: 0x800C5B84
		// End Line: 588
	/* end block 1 */
	// End offset: 0x800C5B84
	// End Line: 588

	/* begin block 2 */
		// Start line: 848
	/* end block 2 */
	// End Line: 849

	/* begin block 3 */
		// Start line: 855
	/* end block 3 */
	// End Line: 856

	/* begin block 4 */
		// Start line: 855
	/* end block 4 */
	// End Line: 856

void DrawW_SubdividFacet__FP25Draw_tGiveShelbyMoreCacheiP12Draw_SVertexN32ss
               (Draw_tGiveShelbyMoreCache *sd,int l,Draw_SVertex *v0,Draw_SVertex *v1,
               Draw_SVertex *v2,Draw_SVertex *v3,int n,int subDivide)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  POLY_GT3 *prim;
  undefined4 in_zero;
  undefined4 in_at;
  int subDivide_00;
  int n_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  Draw_SVertex *v0_00;
  uint *puVar8;
  int iVar9;
  ulong *puVar10;
  Draw_SVertex *v0_01;
  POLY_GT4 *prim_00;
  Draw_SVertex *v0_02;
  Draw_SVertex *v0_03;
  Draw_SVertex *v0_04;
  int local_44;
  
  sVar1 = (sd->head).clipW;
  if ((((sVar1 < v0->dvx) && (sVar1 < v1->dvx)) && (sVar1 < v2->dvx)) && (sVar1 < v3->dvx)) {
    return;
  }
  if (((v0->dvx < 0) && (v1->dvx < 0)) && ((v2->dvx < 0 && (v3->dvx < 0)))) {
    return;
  }
  sVar1 = (sd->head).clipH;
  if (((sVar1 < v0->dvy) && (sVar1 < v1->dvy)) && ((sVar1 < v2->dvy && (sVar1 < v3->dvy)))) {
    return;
  }
  if ((((v0->dvy < 0) && (v1->dvy < 0)) && (v2->dvy < 0)) && (v3->dvy < 0)) {
    return;
  }
  if (((v0->vz < 0) && (v1->vz < 0)) && ((v2->vz < 0 && (v3->vz < 0)))) {
    return;
  }
  subDivide_00 = DrawW_CalcSubdivision__FP25Draw_tGiveShelbyMoreCacheP12Draw_SVertexN31
                           (sd,v0,v1,v2,v3);
  if (subDivide_00 <= l) {
    if ((short)subDivide != 0) {
      setCopReg(2,0x6000,*(undefined4 *)&v0->dvx);
      setCopReg(2,0x7000,*(undefined4 *)&v2->dvx);
      setCopReg(2,0x6800,*(undefined4 *)&v1->dvx);
      copFunction(2,0x1400006);
      local_44 = getCopReg(2,0x18);
      if ((sd->head).mirror == 1) {
        local_44 = -local_44;
      }
      if (local_44 < 0) {
        setCopReg(2,0x6000,*(undefined4 *)&v0->dvx);
        setCopReg(2,0x7000,*(undefined4 *)&v3->dvx);
        setCopReg(2,0x6800,*(undefined4 *)&v2->dvx);
        copFunction(2,0x1400006);
        local_44 = getCopReg(2,0x18);
        if ((sd->head).mirror == 1) {
          local_44 = -local_44;
        }
        if (local_44 < 0) {
          return;
        }
      }
    }
    prim_00 = (POLY_GT4 *)(sd->head).cprim.PrimPtr;
    puVar10 = (sd->head).cprim.LastPrim + sd->otz;
    *(POLY_GT4 **)&(sd->head).cprim.PrimPtr = prim_00 + 1;
    uVar6 = (int)puVar10 + 2;
    uVar3 = uVar6 & 3;
    prim_00->tag = (*(int *)(uVar6 - uVar3) << (3 - uVar3) * 8 |
                   (uint)(prim_00 + 1) & 0xffffffffU >> (uVar3 + 1) * 8) >> 8 | 0xc000000;
    uVar6 = (int)puVar10 + 2;
    uVar3 = uVar6 & 3;
    puVar8 = (uint *)(uVar6 - uVar3);
    *puVar8 = *puVar8 & -1 << (uVar3 + 1) * 8 | (uint)((int)prim_00 << 8) >> (3 - uVar3) * 8;
    DrawW_AddSubdividPrimGT4__FP8POLY_GT4P12Draw_SVertexN31P25Draw_tGiveShelbyMoreCache
              (prim_00,v0,v1,v2,v3,sd);
    return;
  }
  subDivide_00 = (n << 0x10) >> 0xc;
  v0_01 = (Draw_SVertex *)((int)&gDiv.v[0].vx + subDivide_00);
  n_00 = (int)((uint)(ushort)((short)n + 1) << 0x10) >> 0xc;
  v0_02 = (Draw_SVertex *)((int)&gDiv.v[0].vx + n_00);
  iVar5 = (int)((uint)(ushort)((short)n + 2) << 0x10) >> 0xc;
  v0_04 = (Draw_SVertex *)((int)&gDiv.v[0].vx + iVar5);
  iVar4 = (int)((uint)(ushort)((short)n + 3) << 0x10) >> 0xc;
  v0_03 = (Draw_SVertex *)((int)&gDiv.v[0].vx + iVar4);
  iVar7 = (int)((uint)(ushort)((short)n + 4) << 0x10) >> 0xc;
  v0_00 = (Draw_SVertex *)((int)&gDiv.v[0].vx + iVar7);
  DrawW_DivVertice__FP12Draw_SVertexN20(v0_01,v0,v1);
  setCopReg(2,in_zero,*(undefined4 *)v0_01);
  setCopReg(2,in_at,*(undefined4 *)((int)&gDiv.v[0].vz + subDivide_00));
  copFunction(2,0x180001);
  DrawW_DivVertice__FP12Draw_SVertexN20(v0_02,v1,v2);
  iVar9 = getCopControlWord(2,0xf800);
  if (iVar9 < 0) {
    (&gDiv.v[0].a)[subDivide_00] = '\x01';
  }
  else {
    (&gDiv.v[0].a)[subDivide_00] = '\0';
  }
  uVar2 = getCopReg(2,0xe);
  *(undefined4 *)((int)&gDiv.v[0].dvx + subDivide_00) = uVar2;
  setCopReg(2,in_zero,*(undefined4 *)v0_02);
  setCopReg(2,in_at,*(undefined4 *)((int)&gDiv.v[0].vz + n_00));
  copFunction(2,0x180001);
  DrawW_DivVertice__FP12Draw_SVertexN20(v0_04,v2,v3);
  iVar9 = getCopControlWord(2,0xf800);
  if (iVar9 < 0) {
    (&gDiv.v[0].a)[n_00] = '\x01';
  }
  else {
    (&gDiv.v[0].a)[n_00] = '\0';
  }
  uVar2 = getCopReg(2,0xe);
  *(undefined4 *)((int)&gDiv.v[0].dvx + n_00) = uVar2;
  setCopReg(2,in_zero,*(undefined4 *)v0_04);
  setCopReg(2,in_at,*(undefined4 *)((int)&gDiv.v[0].vz + iVar5));
  copFunction(2,0x180001);
  DrawW_DivVertice__FP12Draw_SVertexN20(v0_03,v3,v0);
  iVar9 = getCopControlWord(2,0xf800);
  if (iVar9 < 0) {
    (&gDiv.v[0].a)[iVar5] = '\x01';
  }
  else {
    (&gDiv.v[0].a)[iVar5] = '\0';
  }
  uVar2 = getCopReg(2,0xe);
  *(undefined4 *)((int)&gDiv.v[0].dvx + iVar5) = uVar2;
  setCopReg(2,in_zero,*(undefined4 *)v0_03);
  setCopReg(2,in_at,*(undefined4 *)((int)&gDiv.v[0].vz + iVar4));
  copFunction(2,0x180001);
  DrawW_DivVertice__FP12Draw_SVertexN20(v0_00,v0,v2);
  iVar9 = getCopControlWord(2,0xf800);
  if (iVar9 < 0) {
    (&gDiv.v[0].a)[iVar4] = '\x01';
  }
  else {
    (&gDiv.v[0].a)[iVar4] = '\0';
  }
  uVar2 = getCopReg(2,0xe);
  *(undefined4 *)((int)&gDiv.v[0].dvx + iVar4) = uVar2;
  setCopReg(2,in_zero,*(undefined4 *)v0_00);
  setCopReg(2,in_at,*(undefined4 *)((int)&gDiv.v[0].vz + iVar7));
  copFunction(2,0x180001);
  iVar9 = getCopControlWord(2,0xf800);
  if (iVar9 < 0) {
    (&gDiv.v[0].a)[iVar7] = '\x01';
  }
  else {
    (&gDiv.v[0].a)[iVar7] = '\0';
  }
  if (sd->doublelayer == 0) goto LAB_800c598c;
  (sd->GT4Prim).code = (sd->GT4Prim).code & 0xf7;
  prim = DAT_1f800004;
  iVar9 = sd->otz + 8;
  if (v0->a == '\0') {
    if (v1->a == '\0') {
      if ((&gDiv.v[0].a)[subDivide_00] == '\0') {
        puVar8 = (uint *)(iVar9 * 4 + DAT_1f800000);
        DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *puVar8 & 0xffffff;
        uVar6 = (uint)DAT_1f800004 & 0xffffff;
        DAT_1f800004 = DAT_1f800004 + 1;
        *puVar8 = *puVar8 & 0xff000000 | uVar6;
        DrawW_AddSubdividPrimGT3__FP8POLY_GT3P12Draw_SVertexN21P25Draw_tGiveShelbyMoreCache
                  (prim,v0,v1,v0_01,sd);
      }
      goto LAB_800c5790;
    }
LAB_800c5834:
    prim = DAT_1f800004;
    if (v2->a != '\0') goto LAB_800c58d8;
    if (v3->a == '\0') {
      if ((&gDiv.v[0].a)[iVar5] == '\0') {
        puVar8 = (uint *)(iVar9 * 4 + DAT_1f800000);
        DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *puVar8 & 0xffffff;
        uVar6 = (uint)DAT_1f800004 & 0xffffff;
        DAT_1f800004 = DAT_1f800004 + 1;
        *puVar8 = *puVar8 & 0xff000000 | uVar6;
        DrawW_AddSubdividPrimGT3__FP8POLY_GT3P12Draw_SVertexN21P25Draw_tGiveShelbyMoreCache
                  (prim,v2,v3,v0_04,sd);
      }
      goto LAB_800c58d8;
    }
  }
  else {
LAB_800c5790:
    prim = DAT_1f800004;
    if (v1->a != '\0') goto LAB_800c5834;
    if (v2->a == '\0') {
      if ((&gDiv.v[0].a)[n_00] == '\0') {
        puVar8 = (uint *)(iVar9 * 4 + DAT_1f800000);
        DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *puVar8 & 0xffffff;
        uVar6 = (uint)DAT_1f800004 & 0xffffff;
        DAT_1f800004 = DAT_1f800004 + 1;
        *puVar8 = *puVar8 & 0xff000000 | uVar6;
        DrawW_AddSubdividPrimGT3__FP8POLY_GT3P12Draw_SVertexN21P25Draw_tGiveShelbyMoreCache
                  (prim,v1,v2,v0_02,sd);
      }
      goto LAB_800c5834;
    }
LAB_800c58d8:
    prim = DAT_1f800004;
    if (((v3->a == '\0') && (v0->a == '\0')) && ((&gDiv.v[0].a)[iVar4] == '\0')) {
      puVar8 = (uint *)(iVar9 * 4 + DAT_1f800000);
      DAT_1f800004->tag = DAT_1f800004->tag & 0xff000000 | *puVar8 & 0xffffff;
      uVar6 = (uint)DAT_1f800004 & 0xffffff;
      DAT_1f800004 = DAT_1f800004 + 1;
      *puVar8 = *puVar8 & 0xff000000 | uVar6;
      DrawW_AddSubdividPrimGT3__FP8POLY_GT3P12Draw_SVertexN21P25Draw_tGiveShelbyMoreCache
                (prim,v3,v0,v0_03,sd);
    }
  }
  (sd->GT4Prim).code = (sd->GT4Prim).code | 8;
LAB_800c598c:
  l = l + 1;
  uVar2 = getCopReg(2,0xe);
  *(undefined4 *)((int)&gDiv.v[0].dvx + iVar7) = uVar2;
  n_00 = (int)(short)((short)n + 5);
  subDivide_00 = (int)(short)subDivide;
  DrawW_SubdividFacet__FP25Draw_tGiveShelbyMoreCacheiP12Draw_SVertexN32ss
            (sd,l,v0,v0_01,v0_00,v0_03,n_00,subDivide_00);
  DrawW_SubdividFacet__FP25Draw_tGiveShelbyMoreCacheiP12Draw_SVertexN32ss
            (sd,l,v0_01,v1,v0_02,v0_00,n_00,subDivide_00);
  DrawW_SubdividFacet__FP25Draw_tGiveShelbyMoreCacheiP12Draw_SVertexN32ss
            (sd,l,v0_00,v0_02,v2,v0_04,n_00,subDivide_00);
  DrawW_SubdividFacet__FP25Draw_tGiveShelbyMoreCacheiP12Draw_SVertexN32ss
            (sd,l,v0_03,v0_00,v0_04,v3,n_00,subDivide_00);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_LoadPrecVECTOR__FP12Draw_SVertexP6VECTOR(struct Draw_SVertex *v /*$a0*/, struct VECTOR *dv /*$a1*/)
 // line 593, offset 0x800c5bb4
	/* begin block 1 */
		// Start line: 594
		// Start offset: 0x800C5BB4
		// Variables:
	// 		int x; // $v0
	// 		int y; // $v1
	// 		int z; // $a1
	// 		long temp; // $v1
	/* end block 1 */
	// End offset: 0x800C5BB4
	// End Line: 596

	/* begin block 2 */
		// Start line: 1247
	/* end block 2 */
	// End Line: 1248

	/* begin block 3 */
		// Start line: 1250
	/* end block 3 */
	// End Line: 1251

	/* begin block 4 */
		// Start line: 1250
	/* end block 4 */
	// End Line: 1251

	/* begin block 5 */
		// Start line: 1252
	/* end block 5 */
	// End Line: 1253

void DrawW_LoadPrecVECTOR__FP12Draw_SVertexP6VECTOR(Draw_SVertex *v,VECTOR *dv)

{
  int iVar1;
  
  iVar1 = dv->vz;
  *(uint *)v = dv->vy << 0x12 | (dv->vx & 0x3fffU) << 2;
  v->vz = (short)(iVar1 << 2);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_SetUpSubdividFacet__FiP25Draw_tGiveShelbyMoreCache(int face /*$s5*/, struct Draw_tGiveShelbyMoreCache *sd /*$s0*/)
 // line 612, offset 0x800c5be0
	/* begin block 1 */
		// Start line: 613
		// Start offset: 0x800C5BE0
		// Variables:
	// 		struct Draw_SVertex *v0; // $s4
	// 		struct Draw_SVertex *v1; // $s3
	// 		struct Draw_SVertex *v2; // $s1
	// 		struct Draw_SVertex *v3; // $s2
	// 		struct POLY_GT4 *prim; // $a2

		/* begin block 1.1 */
			// Start line: 613
			// Start offset: 0x800C5BE0
			// Variables:
		// 		long t0; // $v0
		// 		long t1; // $v1
		// 		long t2; // $a0
		// 		long t3; // $a1
		/* end block 1.1 */
		// End offset: 0x800C5BE0
		// End Line: 613

		/* begin block 1.2 */
			// Start line: 661
			// Start offset: 0x800C5D2C
			// Variables:
		// 		int t0; // $v0
		// 		int t1; // $v1
		// 		int t2; // $a0
		// 		int t3; // $a1
		/* end block 1.2 */
		// End offset: 0x800C5D2C
		// End Line: 662

		/* begin block 1.3 */
			// Start line: 662
			// Start offset: 0x800C5D2C
			// Variables:
		// 		short u0; // $v1
		// 		short u1; // $a0
		// 		short u2; // $a1
		// 		short u3; // $v0
		/* end block 1.3 */
		// End offset: 0x800C5D2C
		// End Line: 662
	/* end block 1 */
	// End offset: 0x800C5ECC
	// End Line: 697

	/* begin block 2 */
		// Start line: 1282
	/* end block 2 */
	// End Line: 1283

	/* begin block 3 */
		// Start line: 1288
	/* end block 3 */
	// End Line: 1289

	/* begin block 4 */
		// Start line: 1288
	/* end block 4 */
	// End Line: 1289

void DrawW_SetUpSubdividFacet__FiP25Draw_tGiveShelbyMoreCache
               (int face,Draw_tGiveShelbyMoreCache *sd)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Draw_SVertex *v;
  Draw_SVertex *v_00;
  Draw_SVertex *v_01;
  Draw_SVertex *v_02;
  
  v_02 = &sd->v0;
  v_01 = &sd->v1;
  v = &sd->v2;
  v_00 = &sd->v3;
  DrawW_LoadPrecVECTOR__FP12Draw_SVertexP6VECTOR(v_02,&sd->tVn0);
  DrawW_LoadPrecVECTOR__FP12Draw_SVertexP6VECTOR(v_01,&sd->tVn1);
  DrawW_LoadPrecVECTOR__FP12Draw_SVertexP6VECTOR(v,&sd->tVn2);
  DrawW_LoadPrecVECTOR__FP12Draw_SVertexP6VECTOR(v_00,&sd->tVn3);
  uVar6 = *(undefined4 *)&(sd->GT4Prim).x1;
  uVar7 = *(undefined4 *)&(sd->GT4Prim).x3;
  uVar8 = *(undefined4 *)&(sd->GT4Prim).x2;
  *(undefined4 *)&(sd->v0).dvx = *(undefined4 *)&(sd->GT4Prim).x0;
  *(undefined4 *)&(sd->v1).dvx = uVar6;
  *(undefined4 *)&(sd->v2).dvx = uVar7;
  *(undefined4 *)&(sd->v3).dvx = uVar8;
  if ((sd->tVn0).vz < 0x140) {
    setCopReg(2,in_zero,*(undefined4 *)v_02);
    setCopReg(2,in_at,*(undefined4 *)&(sd->v0).vz);
    copFunction(2,0x180001);
    uVar6 = getCopReg(2,0xe);
    *(undefined4 *)&(sd->v0).dvx = uVar6;
  }
  if ((sd->tVn1).vz < 0x140) {
    setCopReg(2,in_zero,*(undefined4 *)v_01);
    setCopReg(2,in_at,*(undefined4 *)&(sd->v1).vz);
    copFunction(2,0x180001);
    uVar6 = getCopReg(2,0xe);
    *(undefined4 *)&(sd->v1).dvx = uVar6;
  }
  if ((sd->tVn2).vz < 0x140) {
    setCopReg(2,in_zero,*(undefined4 *)v);
    setCopReg(2,in_at,*(undefined4 *)&(sd->v2).vz);
    copFunction(2,0x180001);
    uVar6 = getCopReg(2,0xe);
    *(undefined4 *)&(sd->v2).dvx = uVar6;
  }
  if ((sd->tVn3).vz < 0x140) {
    setCopReg(2,in_zero,*(undefined4 *)v_00);
    setCopReg(2,in_at,*(undefined4 *)&(sd->v3).vz);
    copFunction(2,0x180001);
    uVar6 = getCopReg(2,0xe);
    *(undefined4 *)&(sd->v3).dvx = uVar6;
  }
  uVar6 = *(undefined4 *)&(sd->GT4Prim).r1;
  uVar7 = *(undefined4 *)&(sd->GT4Prim).r3;
  uVar8 = *(undefined4 *)&(sd->GT4Prim).r2;
  *(undefined4 *)&(sd->v0).r = *(undefined4 *)&(sd->GT4Prim).r0;
  *(undefined4 *)&(sd->v1).r = uVar6;
  *(undefined4 *)&(sd->v2).r = uVar7;
  *(undefined4 *)&(sd->v3).r = uVar8;
  uVar3 = *(undefined2 *)&(sd->GT4Prim).u1;
  uVar4 = *(undefined2 *)&(sd->GT4Prim).u2;
  uVar5 = *(undefined2 *)&(sd->GT4Prim).u3;
  *(undefined2 *)&(sd->v0).u = *(undefined2 *)&(sd->GT4Prim).u0;
  *(undefined2 *)&(sd->v1).u = uVar3;
  *(undefined2 *)&(sd->v2).u = uVar5;
  *(undefined2 *)&(sd->v3).u = uVar4;
  sVar1 = (sd->v0).dvx;
  (sd->v0).a = '\0';
  if (sVar1 < 0x3e9) {
    sVar2 = (sd->v0).dvy;
    if ((((1000 < sVar2) || (sVar1 < -1000)) || (sVar2 < -1000)) || ((sd->v0).vz < 0x65))
    goto LAB_800c5dc0;
  }
  else {
LAB_800c5dc0:
    (sd->v0).a = '\x01';
  }
  sVar1 = (sd->v1).dvx;
  (sd->v1).a = '\0';
  if (sVar1 < 0x3e9) {
    sVar2 = (sd->v1).dvy;
    if (((1000 < sVar2) || (sVar1 < -1000)) || ((sVar2 < -1000 || ((sd->v1).vz < 0x65))))
    goto LAB_800c5e18;
  }
  else {
LAB_800c5e18:
    (sd->v1).a = '\x01';
  }
  sVar1 = (sd->v2).dvx;
  (sd->v2).a = '\0';
  if (sVar1 < 0x3e9) {
    sVar2 = (sd->v2).dvy;
    if (((1000 < sVar2) || (sVar1 < -1000)) || ((sVar2 < -1000 || ((sd->v2).vz < 0x65))))
    goto LAB_800c5e70;
  }
  else {
LAB_800c5e70:
    (sd->v2).a = '\x01';
  }
  sVar1 = (sd->v3).dvx;
  (sd->v3).a = '\0';
  if (sVar1 < 0x3e9) {
    sVar2 = (sd->v3).dvy;
    if ((((sVar2 < 0x3e9) && (-0x3e9 < sVar1)) && (-0x3e9 < sVar2)) && (100 < (sd->v3).vz))
    goto LAB_800c5ed0;
  }
  (sd->v3).a = '\x01';
LAB_800c5ed0:
  DrawW_SubdividFacet__FP25Draw_tGiveShelbyMoreCacheiP12Draw_SVertexN32ss
            (sd,0,v_02,v_01,v,v_00,0,(uint)(face == 0));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Night_NightCopCalc__FP6VECTORPs(struct VECTOR *v /*$a0*/, short *idx /*$a3*/)
 // line 711, offset 0x800c5f18
	/* begin block 1 */
		// Start line: 712
		// Start offset: 0x800C5F18
		// Variables:
	// 		int z; // $v1

		/* begin block 1.1 */
			// Start line: 712
			// Start offset: 0x800C5F18

			/* begin block 1.1.1 */
				// Start line: 718
				// Start offset: 0x800C5F30
				// Variables:
			// 		int x; // $a2

				/* begin block 1.1.1.1 */
					// Start line: 720
					// Start offset: 0x800C5F30

					/* begin block 1.1.1.1.1 */
						// Start line: 723
						// Start offset: 0x800C5F48
						// Variables:
					// 		unsigned char (*coplookuptbl)[256][8]; // $v1
					// 		int index; // $a1
					// 		int lookup; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800C5FB0
					// End Line: 745
				/* end block 1.1.1.1 */
				// End offset: 0x800C5FB0
				// End Line: 745
			/* end block 1.1.1 */
			// End offset: 0x800C5FB0
			// End Line: 745
		/* end block 1.1 */
		// End offset: 0x800C5FB0
		// End Line: 745
	/* end block 1 */
	// End offset: 0x800C5FB0
	// End Line: 745

	/* begin block 2 */
		// Start line: 1485
	/* end block 2 */
	// End Line: 1486

	/* begin block 3 */
		// Start line: 1500
	/* end block 3 */
	// End Line: 1501

	/* begin block 4 */
		// Start line: 1500
	/* end block 4 */
	// End Line: 1501

	/* begin block 5 */
		// Start line: 1503
	/* end block 5 */
	// End Line: 1504

void Night_NightCopCalc__FP6VECTORPs(VECTOR *v,short *idx)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = v->vz;
  if ((iVar2 + 0x7ffU < 0xfff) && (v->vx + 0x3ffU < 0x7ff)) {
    bVar1 = iVar2 < 0;
    if (bVar1) {
      iVar2 = -iVar2;
    }
    *idx = (ushort)(&Night_gCopColor)[(uint)bVar1]
                   [((int)(uint)Night_gNightTbl[(iVar2 >> 5) * 0x40 + (v->vx + 0x400 >> 5)] >> 1) +
                    (int)*idx * 8];
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Night_NightCalc__FP6VECTORPsP25Draw_tGiveShelbyMoreCache(struct VECTOR *v /*$a0*/, short *idx /*$a1*/, struct Draw_tGiveShelbyMoreCache *sd /*$a2*/)
 // line 750, offset 0x800c5fb8
	/* begin block 1 */
		// Start line: 751
		// Start offset: 0x800C5FB8
		// Variables:
	// 		int z; // $a3
	// 		int index; // $a0
	// 		int znear; // $t0
	// 		int zfar; // $t1

		/* begin block 1.1 */
			// Start line: 765
			// Start offset: 0x800C600C

			/* begin block 1.1.1 */
				// Start line: 766
				// Start offset: 0x800C6020
				// Variables:
			// 		int x; // $a0
			// 		int xdist; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 769
					// Start offset: 0x800C6020

					/* begin block 1.1.1.1.1 */
						// Start line: 774
						// Start offset: 0x800C6048
						// Variables:
					// 		int lookup; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800C6094
					// End Line: 789
				/* end block 1.1.1.1 */
				// End offset: 0x800C6094
				// End Line: 789
			/* end block 1.1.1 */
			// End offset: 0x800C6094
			// End Line: 789
		/* end block 1.1 */
		// End offset: 0x800C6094
		// End Line: 789
	/* end block 1 */
	// End offset: 0x800C6094
	// End Line: 789

	/* begin block 2 */
		// Start line: 1600
	/* end block 2 */
	// End Line: 1601

	/* begin block 3 */
		// Start line: 1606
	/* end block 3 */
	// End Line: 1607

	/* begin block 4 */
		// Start line: 1606
	/* end block 4 */
	// End Line: 1607

	/* begin block 5 */
		// Start line: 1614
	/* end block 5 */
	// End Line: 1615

void Night_NightCalc__FP6VECTORPsP25Draw_tGiveShelbyMoreCache
               (VECTOR *v,short *idx,Draw_tGiveShelbyMoreCache *sd)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = sd->night_ZDistShift;
  iVar4 = v->vz;
  iVar5 = (int)sd->night_ZNear;
  if (sd->night_DrawLightning != '\0') {
    *idx = (ushort)(&Night_gWeatherLightingTable)[(uint)sd->night_LightningType][(int)*idx];
  }
  if ((iVar5 < iVar4) && (iVar4 < iVar5 + (1 << ((uint)bVar1 + 6 & 0x1f)))) {
    iVar3 = v->vx;
    iVar2 = 1 << ((uint)sd->night_XDistShift + 5 & 0x1f);
    if ((-iVar2 < iVar3) && (iVar3 < iVar2)) {
      *idx = (ushort)Night_gCurrentNightColor
                     [(uint)Night_gNightTbl
                            [(iVar4 - iVar5 >> ((uint)sd->night_ZDistShift & 0x1f)) * 0x40 +
                             (iVar3 + iVar2 >> ((uint)sd->night_XDistShift & 0x1f))] +
                      (int)*idx * 0x10];
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_NightColorCalc__FP25Draw_tGiveShelbyMoreCacheP8POLY_GT4P8CCOORD16N32(struct Draw_tGiveShelbyMoreCache *sd /*$s1*/, struct POLY_GT4 *prim /*$s3*/, struct CCOORD16 *vt0 /*$s2*/, struct CCOORD16 *vt1 /*$s4*/, struct CCOORD16 *vt2 /*stack 16*/, struct CCOORD16 *vt3 /*stack 20*/)
 // line 802, offset 0x800c609c
	/* begin block 1 */
		// Start line: 803
		// Start offset: 0x800C609C

		/* begin block 1.1 */
			// Start line: 803
			// Start offset: 0x800C609C

			/* begin block 1.1.1 */
				// Start line: 805
				// Start offset: 0x800C60E4
				// Variables:
			// 		struct VECTOR temp0; // stack offset -48

				/* begin block 1.1.1.1 */
					// Start line: 852
					// Start offset: 0x800C6304
					// Variables:
				// 		long a; // $a1
				// 		long b; // $a0
				// 		long c; // $v1
				// 		long d; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x800C6304
				// End Line: 853
			/* end block 1.1.1 */
			// End offset: 0x800C6304
			// End Line: 853

			/* begin block 1.1.2 */
				// Start line: 865
				// Start offset: 0x800C635C
				// Variables:
			// 		long color; // $v0

				/* begin block 1.1.2.1 */
					// Start line: 867
					// Start offset: 0x800C635C

					/* begin block 1.1.2.1.1 */
						// Start line: 868
						// Start offset: 0x800C6370
						// Variables:
					// 		struct VECTOR tempnight; // stack offset -48
					/* end block 1.1.2.1.1 */
					// End offset: 0x800C63E0
					// End Line: 873
				/* end block 1.1.2.1 */
				// End offset: 0x800C63E0
				// End Line: 873

				/* begin block 1.1.2.2 */
					// Start line: 875
					// Start offset: 0x800C63E0

					/* begin block 1.1.2.2.1 */
						// Start line: 876
						// Start offset: 0x800C63F4
						// Variables:
					// 		struct VECTOR tempcop; // stack offset -48
					/* end block 1.1.2.2.1 */
					// End offset: 0x800C6460
					// End Line: 881
				/* end block 1.1.2.2 */
				// End offset: 0x800C6460
				// End Line: 881
			/* end block 1.1.2 */
			// End offset: 0x800C648C
			// End Line: 890
		/* end block 1.1 */
		// End offset: 0x800C648C
		// End Line: 890
	/* end block 1 */
	// End offset: 0x800C648C
	// End Line: 894

	/* begin block 2 */
		// Start line: 1715
	/* end block 2 */
	// End Line: 1716

	/* begin block 3 */
		// Start line: 1729
	/* end block 3 */
	// End Line: 1730

	/* begin block 4 */
		// Start line: 1729
	/* end block 4 */
	// End Line: 1730

void DrawW_NightColorCalc__FP25Draw_tGiveShelbyMoreCacheP8POLY_GT4P8CCOORD16N32
               (Draw_tGiveShelbyMoreCache *sd,POLY_GT4 *prim,CCOORD16 *vt0,CCOORD16 *vt1,
               CCOORD16 *vt2,CCOORD16 *vt3)

{
  undefined4 in_zero;
  undefined4 in_at;
  CVECTOR CVar1;
  CVECTOR CVar2;
  CVECTOR CVar3;
  VECTOR local_30;
  
  if (sd->light == -1) {
    if ((sd->nightFlags & 1U) != 0) {
      setCopControlWord(2,0,*(undefined4 *)(sd->matNight).m);
      setCopControlWord(2,0x800,*(undefined4 *)((sd->matNight).m + 2));
      setCopControlWord(2,0x1000,*(undefined4 *)((sd->matNight).m + 4));
      setCopControlWord(2,0x1800,*(undefined4 *)((sd->matNight).m + 6));
      setCopControlWord(2,0x2000,*(undefined4 *)((sd->matNight).m + 8));
      setCopControlWord(2,0x2800,(sd->matNight).t[0]);
      setCopControlWord(2,0x3000,(sd->matNight).t[1]);
      setCopControlWord(2,0x3800,(sd->matNight).t[2]);
      setCopReg(2,in_zero,*(undefined4 *)vt0);
      setCopReg(2,in_at,*(undefined4 *)&vt0->z);
      copFunction(2,0x480012);
      local_30.vx = getCopReg(2,0x19);
      local_30.vy = getCopReg(2,0x1a);
      local_30.vz = getCopReg(2,0x1b);
      setCopReg(2,in_zero,*(undefined4 *)vt1);
      setCopReg(2,in_at,*(undefined4 *)&vt1->z);
      copFunction(2,0x480012);
      Night_NightCalc__FP6VECTORPsP25Draw_tGiveShelbyMoreCache(&local_30,&vt0->light,sd);
      local_30.vx = getCopReg(2,0x19);
      local_30.vy = getCopReg(2,0x1a);
      local_30.vz = getCopReg(2,0x1b);
      setCopReg(2,in_zero,*(undefined4 *)vt2);
      setCopReg(2,in_at,*(undefined4 *)&vt2->z);
      copFunction(2,0x480012);
      Night_NightCalc__FP6VECTORPsP25Draw_tGiveShelbyMoreCache(&local_30,&vt1->light,sd);
      local_30.vx = getCopReg(2,0x19);
      local_30.vy = getCopReg(2,0x1a);
      local_30.vz = getCopReg(2,0x1b);
      setCopReg(2,in_zero,*(undefined4 *)vt3);
      setCopReg(2,in_at,*(undefined4 *)&vt3->z);
      copFunction(2,0x480012);
      Night_NightCalc__FP6VECTORPsP25Draw_tGiveShelbyMoreCache(&local_30,&vt2->light,sd);
      local_30.vx = getCopReg(2,0x19);
      local_30.vy = getCopReg(2,0x1a);
      local_30.vz = getCopReg(2,0x1b);
      Night_NightCalc__FP6VECTORPsP25Draw_tGiveShelbyMoreCache(&local_30,&vt3->light,sd);
    }
    if ((sd->nightFlags & 2U) != 0) {
      setCopControlWord(2,0,*(undefined4 *)(sd->matCop).m);
      setCopControlWord(2,0x800,*(undefined4 *)((sd->matCop).m + 2));
      setCopControlWord(2,0x1000,*(undefined4 *)((sd->matCop).m + 4));
      setCopControlWord(2,0x1800,*(undefined4 *)((sd->matCop).m + 6));
      setCopControlWord(2,0x2000,*(undefined4 *)((sd->matCop).m + 8));
      setCopControlWord(2,0x2800,(sd->matCop).t[0]);
      setCopControlWord(2,0x3000,(sd->matCop).t[1]);
      setCopControlWord(2,0x3800,(sd->matCop).t[2]);
      setCopReg(2,in_zero,*(undefined4 *)vt0);
      setCopReg(2,in_at,*(undefined4 *)&vt0->z);
      copFunction(2,0x480012);
      local_30.vx = getCopReg(2,0x19);
      local_30.vy = getCopReg(2,0x1a);
      local_30.vz = getCopReg(2,0x1b);
      setCopReg(2,in_zero,*(undefined4 *)vt1);
      setCopReg(2,in_at,*(undefined4 *)&vt1->z);
      copFunction(2,0x480012);
      Night_NightCopCalc__FP6VECTORPs(&local_30,&vt0->light);
      local_30.vx = getCopReg(2,0x19);
      local_30.vy = getCopReg(2,0x1a);
      local_30.vz = getCopReg(2,0x1b);
      setCopReg(2,in_zero,*(undefined4 *)vt2);
      setCopReg(2,in_at,*(undefined4 *)&vt2->z);
      copFunction(2,0x480012);
      Night_NightCopCalc__FP6VECTORPs(&local_30,&vt1->light);
      local_30.vx = getCopReg(2,0x19);
      local_30.vy = getCopReg(2,0x1a);
      local_30.vz = getCopReg(2,0x1b);
      setCopReg(2,in_zero,*(undefined4 *)vt3);
      setCopReg(2,in_at,*(undefined4 *)&vt3->z);
      copFunction(2,0x480012);
      Night_NightCopCalc__FP6VECTORPs(&local_30,&vt2->light);
      local_30.vx = getCopReg(2,0x19);
      local_30.vy = getCopReg(2,0x1a);
      local_30.vz = getCopReg(2,0x1b);
      Night_NightCopCalc__FP6VECTORPs(&local_30,&vt3->light);
    }
    CVar3 = Chunk_lightTable[(int)vt1->light];
    CVar2 = Chunk_lightTable[(int)vt3->light];
    CVar1 = Chunk_lightTable[(int)vt2->light];
    *(CVECTOR *)&prim->r0 = Chunk_lightTable[(int)vt0->light];
    *(CVECTOR *)&prim->r1 = CVar3;
    *(CVECTOR *)&prim->r2 = CVar2;
  }
  else {
    if ((sd->nightFlags & 1U) != 0) {
      setCopControlWord(2,0,*(undefined4 *)(sd->matNight).m);
      setCopControlWord(2,0x800,*(undefined4 *)((sd->matNight).m + 2));
      setCopControlWord(2,0x1000,*(undefined4 *)((sd->matNight).m + 4));
      setCopControlWord(2,0x1800,*(undefined4 *)((sd->matNight).m + 6));
      setCopControlWord(2,0x2000,*(undefined4 *)((sd->matNight).m + 8));
      setCopControlWord(2,0x2800,(sd->matNight).t[0]);
      setCopControlWord(2,0x3000,(sd->matNight).t[1]);
      setCopControlWord(2,0x3800,(sd->matNight).t[2]);
      setCopReg(2,in_zero,*(undefined4 *)vt0);
      setCopReg(2,in_at,*(undefined4 *)&vt0->z);
      copFunction(2,0x480012);
      local_30.vx = getCopReg(2,0x19);
      local_30.vy = getCopReg(2,0x1a);
      local_30.vz = getCopReg(2,0x1b);
      Night_NightCalc__FP6VECTORPsP25Draw_tGiveShelbyMoreCache(&local_30,&sd->light,sd);
    }
    if ((sd->nightFlags & 2U) != 0) {
      setCopControlWord(2,0,*(undefined4 *)(sd->matCop).m);
      setCopControlWord(2,0x800,*(undefined4 *)((sd->matCop).m + 2));
      setCopControlWord(2,0x1000,*(undefined4 *)((sd->matCop).m + 4));
      setCopControlWord(2,0x1800,*(undefined4 *)((sd->matCop).m + 6));
      setCopControlWord(2,0x2000,*(undefined4 *)((sd->matCop).m + 8));
      setCopControlWord(2,0x2800,(sd->matCop).t[0]);
      setCopControlWord(2,0x3000,(sd->matCop).t[1]);
      setCopControlWord(2,0x3800,(sd->matCop).t[2]);
      setCopReg(2,in_zero,*(undefined4 *)vt0);
      setCopReg(2,in_at,*(undefined4 *)&vt0->z);
      copFunction(2,0x480012);
      local_30.vx = getCopReg(2,0x19);
      local_30.vy = getCopReg(2,0x1a);
      local_30.vz = getCopReg(2,0x1b);
      Night_NightCopCalc__FP6VECTORPs(&local_30,&sd->light);
    }
    CVar1 = Chunk_lightTable[(int)sd->light];
    *(CVECTOR *)&prim->r0 = CVar1;
    *(CVECTOR *)&prim->r1 = CVar1;
    *(CVECTOR *)&prim->r2 = CVar1;
  }
  *(CVECTOR *)&prim->r3 = CVar1;
  setCopControlWord(2,0,*(undefined4 *)(sd->matB).m);
  setCopControlWord(2,0x800,*(undefined4 *)((sd->matB).m + 2));
  setCopControlWord(2,0x1000,*(undefined4 *)((sd->matB).m + 4));
  setCopControlWord(2,0x1800,*(undefined4 *)((sd->matB).m + 6));
  setCopControlWord(2,0x2000,*(undefined4 *)((sd->matB).m + 8));
  setCopControlWord(2,0x2800,(sd->matB).t[0]);
  setCopControlWord(2,0x3000,(sd->matB).t[1]);
  setCopControlWord(2,0x3800,(sd->matB).t[2]);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_DrawQuad__FP25Draw_tGiveShelbyMoreCacheP8Trk_Quad(struct Draw_tGiveShelbyMoreCache *sd /*$s0*/, struct Trk_Quad *inQuad /*$t4*/)
 // line 930, offset 0x800c64f8
	/* begin block 1 */
		// Start line: 931
		// Start offset: 0x800C64F8
		// Variables:
	// 		struct CCOORD16 *geomVertices; // $t1
	// 		long dvxy0; // stack offset -72
	// 		long dvxy1; // stack offset -68
	// 		long dvxy2; // stack offset -60
	// 		long dvxy3; // stack offset -64
	// 		struct CCOORD16 vt0; // stack offset -112
	// 		struct CCOORD16 vt1; // stack offset -104
	// 		struct CCOORD16 vt2; // stack offset -96
	// 		struct CCOORD16 vt3; // stack offset -88

		/* begin block 1.1 */
			// Start line: 931
			// Start offset: 0x800C64F8
			// Variables:
		// 		int t1; // $t2
		// 		int t2; // $v0
		// 		int t3; // $t3
		// 		int *z; // $v0
		// 		short tx; // $a2
		// 		short ty; // $a1
		// 		short tz; // $a0
		// 		unsigned char a; // $v1
		// 		unsigned char c; // $t0
		// 		unsigned char d; // $a3
		/* end block 1.1 */
		// End offset: 0x800C67B8
		// End Line: 1036

		/* begin block 1.2 */
			// Start line: 1042
			// Start offset: 0x800C67B8
			// Variables:
		// 		struct Track_tMaterial *currentQuadMat; // $a2
		// 		char flag; // $s4
		// 		int face; // $s6
		// 		struct Draw_tPixMap *workPmx; // $s2
		// 		int doSubdivision; // $s5
		// 		int depthcue; // stack offset -52
		// 		int save_pre_otz; // $s3

			/* begin block 1.2.1 */
				// Start line: 1054
				// Start offset: 0x800C67B8
				// Variables:
			// 		long *dp0; // $a0
			// 		long *dp1; // $v1
			// 		long *dp2; // $v0
			/* end block 1.2.1 */
			// End offset: 0x800C67B8
			// End Line: 1054

			/* begin block 1.2.2 */
				// Start line: 1054
				// Start offset: 0x800C67B8

				/* begin block 1.2.2.1 */
					// Start line: 1089
					// Start offset: 0x800C680C
					// Variables:
				// 		long bfct; // stack offset -56
				/* end block 1.2.2.1 */
				// End offset: 0x800C68A0
				// End Line: 1109
			/* end block 1.2.2 */
			// End offset: 0x800C68A0
			// End Line: 1109

			/* begin block 1.2.3 */
				// Start line: 1114
				// Start offset: 0x800C68A0

				/* begin block 1.2.3.1 */
					// Start line: 1135
					// Start offset: 0x800C68C8

					/* begin block 1.2.3.1.1 */
						// Start line: 1137
						// Start offset: 0x800C68C8

						/* begin block 1.2.3.1.1.1 */
							// Start line: 1138
							// Start offset: 0x800C68F0
							// Variables:
						// 		int newIndex; // $v0
						/* end block 1.2.3.1.1.1 */
						// End offset: 0x800C6904
						// End Line: 1141
					/* end block 1.2.3.1.1 */
					// End offset: 0x800C6904
					// End Line: 1141
				/* end block 1.2.3.1 */
				// End offset: 0x800C6904
				// End Line: 1141
			/* end block 1.2.3 */
			// End offset: 0x800C6904
			// End Line: 1141

			/* begin block 1.2.4 */
				// Start line: 1165
				// Start offset: 0x800C6968
				// Variables:
			// 		struct POLY_GT4 *prim; // $s1

				/* begin block 1.2.4.1 */
					// Start line: 1171
					// Start offset: 0x800C6968

					/* begin block 1.2.4.1.1 */
						// Start line: 1171
						// Start offset: 0x800C6970
						// Variables:
					// 		struct DR_TWIN *aprim; // $a0
					// 		struct RECT r; // stack offset -80
					/* end block 1.2.4.1.1 */
					// End offset: 0x800C69F0
					// End Line: 1171
				/* end block 1.2.4.1 */
				// End offset: 0x800C69F0
				// End Line: 1171

				/* begin block 1.2.4.2 */
					// Start line: 1185
					// Start offset: 0x800C6A38
					// Variables:
				// 		int p0; // $v0
				// 		int p1; // $v1
				// 		int p2; // $a0
				// 		int p3; // $a1
				/* end block 1.2.4.2 */
				// End offset: 0x800C6A38
				// End Line: 1186

				/* begin block 1.2.4.3 */
					// Start line: 1186
					// Start offset: 0x800C6A38

					/* begin block 1.2.4.3.1 */
						// Start line: 1207
						// Start offset: 0x800C6A90
						// Variables:
					// 		long a; // stack offset -48
					// 		long b; // stack offset -44
					// 		long c; // stack offset -40

						/* begin block 1.2.4.3.1.1 */
							// Start line: 1210
							// Start offset: 0x800C6A90

							/* begin block 1.2.4.3.1.1.1 */
								// Start line: 1227
								// Start offset: 0x800C6B64
								// Variables:
							// 		long color; // stack offset -36
							/* end block 1.2.4.3.1.1.1 */
							// End offset: 0x800C6BB0
							// End Line: 1237
						/* end block 1.2.4.3.1.1 */
						// End offset: 0x800C6BB0
						// End Line: 1237
					/* end block 1.2.4.3.1 */
					// End offset: 0x800C6BB0
					// End Line: 1237
				/* end block 1.2.4.3 */
				// End offset: 0x800C6BB0
				// End Line: 1237

				/* begin block 1.2.4.4 */
					// Start line: 1243
					// Start offset: 0x800C6BB0
					// Variables:
				// 		unsigned long l0; // $v0
				// 		unsigned long l1; // $v1
				// 		unsigned long l2; // $a0
				// 		unsigned long l3; // $a1
				/* end block 1.2.4.4 */
				// End offset: 0x800C6BB0
				// End Line: 1243

				/* begin block 1.2.4.5 */
					// Start line: 1243
					// Start offset: 0x800C6BB0

					/* begin block 1.2.4.5.1 */
						// Start line: 1248
						// Start offset: 0x800C6BF4
						// Variables:
					// 		int depth_index; // $a1
					/* end block 1.2.4.5.1 */
					// End offset: 0x800C6C4C
					// End Line: 1251
				/* end block 1.2.4.5 */
				// End offset: 0x800C6C4C
				// End Line: 1251

				/* begin block 1.2.4.6 */
					// Start line: 1259
					// Start offset: 0x800C6C4C

					/* begin block 1.2.4.6.1 */
						// Start line: 1260
						// Start offset: 0x800C6C54
						// Variables:
					// 		int zeroTransFlag; // $s1
					/* end block 1.2.4.6.1 */
					// End offset: 0x800C6D44
					// End Line: 1282
				/* end block 1.2.4.6 */
				// End offset: 0x800C6D44
				// End Line: 1282

				/* begin block 1.2.4.7 */
					// Start line: 1286
					// Start offset: 0x800C6D44

					/* begin block 1.2.4.7.1 */
						// Start line: 1287
						// Start offset: 0x800C6D50
						// Variables:
					// 		int dU; // $a0
					// 		int dV; // $v1

						/* begin block 1.2.4.7.1.1 */
							// Start line: 1294
							// Start offset: 0x800C6D88
							// Variables:
						// 		struct DR_TWIN *aprim; // $a0
						// 		struct RECT r; // stack offset -80
						/* end block 1.2.4.7.1.1 */
						// End offset: 0x800C6E10
						// End Line: 1294
					/* end block 1.2.4.7.1 */
					// End offset: 0x800C6E10
					// End Line: 1294
				/* end block 1.2.4.7 */
				// End offset: 0x800C6E10
				// End Line: 1294
			/* end block 1.2.4 */
			// End offset: 0x800C6E10
			// End Line: 1294
		/* end block 1.2 */
		// End offset: 0x800C6E10
		// End Line: 1294
	/* end block 1 */
	// End offset: 0x800C6E10
	// End Line: 1294

	/* begin block 2 */
		// Start line: 1957
	/* end block 2 */
	// End Line: 1958

	/* begin block 3 */
		// Start line: 1993
	/* end block 3 */
	// End Line: 1994

	/* begin block 4 */
		// Start line: 1993
	/* end block 4 */
	// End Line: 1994

/* WARNING: Could not reconcile some variable overlaps */

void DrawW_DrawQuad__FP25Draw_tGiveShelbyMoreCacheP8Trk_Quad
               (Draw_tGiveShelbyMoreCache *sd,Trk_Quad *inQuad)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 in_zero;
  undefined4 in_at;
  uint face;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  Draw_tPixMap *pDVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  Track_tMaterial *pTVar19;
  uint *puVar20;
  CCOORD16 *pCVar21;
  undefined4 uVar22;
  ulong *puVar23;
  POLY_GT4 *prim;
  Draw_tPixMap *pDVar24;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  short local_4c;
  short local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  CVECTOR local_30;
  CVECTOR local_2c;
  CVECTOR local_28;
  undefined4 local_24;
  
  pCVar21 = sd->vertices;
  sVar5 = (sd->trans).x;
  sVar6 = (sd->trans).y;
  bVar2 = inQuad->aPoints[2];
  bVar3 = inQuad->aPoints[3];
  sVar7 = (sd->trans).z;
  uVar22 = *(undefined4 *)(pCVar21 + (uint)inQuad->aPoints[1]);
  face = *(uint *)&pCVar21[(uint)inQuad->aPoints[1]].z;
  local_6c = face & 0xffff0000 | (uint)(ushort)((short)face + sVar7);
  local_70 = CONCAT22((short)((uint)uVar22 >> 0x10) + sVar6,(short)uVar22 + sVar5);
  setCopReg(2,in_zero,local_70);
  setCopReg(2,in_at,local_6c);
  copFunction(2,0x180001);
  uVar22 = *(undefined4 *)(pCVar21 + (uint)inQuad->aPoints[0]);
  face = *(uint *)&pCVar21[(uint)inQuad->aPoints[0]].z;
  local_64 = face & 0xffff0000 | (uint)(ushort)((short)face + sVar7);
  local_68 = CONCAT22((short)((uint)uVar22 >> 0x10) + sVar6,(short)uVar22 + sVar5);
  lVar9 = getCopReg(2,0x19);
  (sd->tVn0).vx = lVar9;
  lVar9 = getCopReg(2,0x1a);
  (sd->tVn0).vy = lVar9;
  lVar9 = getCopReg(2,0x1b);
  (sd->tVn0).vz = lVar9;
  local_48 = getCopReg(2,0xe);
  setCopReg(2,in_zero,local_68);
  setCopReg(2,in_at,local_64);
  copFunction(2,0x180001);
  uVar22 = *(undefined4 *)(pCVar21 + (uint)bVar3);
  face = *(uint *)&pCVar21[(uint)bVar3].z;
  local_5c = face & 0xffff0000 | (uint)(ushort)((short)face + sVar7);
  local_60 = CONCAT22((short)((uint)uVar22 >> 0x10) + sVar6,(short)uVar22 + sVar5);
  lVar9 = getCopReg(2,0x19);
  (sd->tVn1).vx = lVar9;
  lVar9 = getCopReg(2,0x1a);
  (sd->tVn1).vy = lVar9;
  lVar9 = getCopReg(2,0x1b);
  (sd->tVn1).vz = lVar9;
  setCopReg(2,in_zero,local_60);
  setCopReg(2,in_at,local_5c);
  copFunction(2,0x180001);
  uVar22 = *(undefined4 *)(pCVar21 + (uint)bVar2);
  face = *(uint *)&pCVar21[(uint)bVar2].z;
  local_54 = face & 0xffff0000 | (uint)(ushort)((short)face + sVar7);
  local_58 = CONCAT22((short)((uint)uVar22 >> 0x10) + sVar6,(short)uVar22 + sVar5);
  lVar9 = getCopReg(2,0x19);
  (sd->tVn2).vx = lVar9;
  lVar9 = getCopReg(2,0x1a);
  (sd->tVn2).vy = lVar9;
  lVar9 = getCopReg(2,0x1b);
  (sd->tVn2).vz = lVar9;
  setCopReg(2,in_zero,local_58);
  setCopReg(2,in_at,local_54);
  copFunction(2,0x180001);
  lVar9 = getCopReg(2,0x19);
  (sd->tVn3).vx = lVar9;
  lVar9 = getCopReg(2,0x1a);
  (sd->tVn3).vy = lVar9;
  lVar9 = getCopReg(2,0x1b);
  (sd->tVn3).vz = lVar9;
  if (((((((sd->tVn3).vx <= (sd->tVn3).vz) || ((sd->tVn0).vx <= (sd->tVn0).vz)) ||
        ((sd->tVn1).vx <= (sd->tVn1).vz)) || ((sd->tVn2).vx <= (sd->tVn2).vz)) &&
      (((-(sd->tVn3).vx <= (sd->tVn3).vz || (-(sd->tVn0).vx <= (sd->tVn0).vz)) ||
       ((-(sd->tVn1).vx <= (sd->tVn1).vz || (-(sd->tVn2).vx <= (sd->tVn2).vz)))))) &&
     (((-1 < (sd->tVn0).vz || (-1 < (sd->tVn1).vz)) ||
      ((-1 < (sd->tVn2).vz || (-1 < (sd->tVn3).vz)))))) {
    copFunction(2,0x168002e);
    pTVar19 = sd->materials + (int)inQuad->material;
    bVar2 = pTVar19->flag;
    iVar18 = getCopReg(2,7);
    sd->otz = iVar18;
    face = (uint)(bVar2 >> 3) & 2;
    local_44 = getCopReg(2,0xc);
    local_40 = getCopReg(2,0xd);
    local_3c = getCopReg(2,0xe);
    bVar8 = sd->otz < 200;
    if (((bVar2 >> 3 & 2) == 0) && (!bVar8)) {
      copFunction(2,0x1400006);
      local_38 = getCopReg(2,0x18);
      if ((sd->head).mirror == 1) {
        local_38 = -local_38;
      }
      if (local_38 < 0) {
        setCopReg(2,0x6000,local_48);
        setCopReg(2,0x7000,local_3c);
        setCopReg(2,0x6800,local_44);
        copFunction(2,0x1400006);
        local_38 = getCopReg(2,0x18);
        if ((sd->head).mirror == 1) {
          local_38 = -local_38;
        }
        if (local_38 < 0) {
          return;
        }
      }
    }
    local_34 = getCopReg(2,8);
    pDVar15 = sd->artInfo->pPmx;
    pDVar24 = pDVar15 + (int)pTVar19->pmxIndex;
    if ((((bVar2 & 8) != 0) && (sd->fogstate != '\0')) && ((int)sd->startfog <= sd->otz)) {
      pDVar24 = pDVar15 + (int)pTVar19->pmxIndex + (uint)(byte)pTVar19->mipmap_offset;
    }
    iVar16 = sd->otz;
    iVar12 = iVar16 >> 1;
    bVar1 = sd->offset == Draw_gMidGroundOtz;
    sd->otz = iVar12;
    iVar18 = iVar12;
    if (bVar1) {
      iVar12 = iVar12 << 2;
      iVar18 = iVar16 >> 4;
    }
    sd->otz = iVar18 + sd->offset;
    puVar11 = DAT_1f800004;
    iVar18 = DAT_1f800000;
    if ((0 < sd->otz) && (sd->otz <= Draw_gViewOtSize + -3)) {
      if ((bVar2 & 0x80) != 0) {
        local_4c = 0;
        local_4a = 0;
        local_50 = 0;
        local_4e = 0;
        *DAT_1f800004 =
             *DAT_1f800004 & 0xff000000 | *(uint *)(sd->otz * 4 + DAT_1f800000) & 0xffffff;
        pTVar19 = (Track_tMaterial *)(sd->otz * 4 + iVar18);
        uVar13 = (uint)DAT_1f800004 & 0xffffff;
        DAT_1f800004 = DAT_1f800004 + 3;
        *(uint *)pTVar19 = (uint)*pTVar19 & 0xff000000 | uVar13;
        SetTexWindow((int)puVar11,(byte *)&local_50);
      }
      if (bVar8) {
        prim = &sd->GT4Prim;
      }
      else {
        prim = (POLY_GT4 *)(sd->head).cprim.PrimPtr;
        puVar23 = (sd->head).cprim.LastPrim + sd->otz;
        *(POLY_GT4 **)&(sd->head).cprim.PrimPtr = prim + 1;
        uVar13 = (int)puVar23 + 2;
        uVar10 = uVar13 & 3;
        prim->tag = (*(int *)(uVar13 - uVar10) << (3 - uVar10) * 8 |
                    (uint)(prim + 1) & 0xffffffffU >> (uVar10 + 1) * 8) >> 8 | 0xc000000;
        uVar13 = (int)puVar23 + 2;
        uVar10 = uVar13 & 3;
        puVar11 = (uint *)(uVar13 - uVar10);
        *puVar11 = *puVar11 & -1 << (uVar10 + 1) * 8 | (uint)((int)prim << 8) >> (3 - uVar10) * 8;
      }
      *(undefined4 *)&prim->x0 = local_48;
      *(undefined4 *)&prim->x1 = local_44;
      *(undefined4 *)&prim->x2 = local_3c;
      *(undefined4 *)&prim->x3 = local_40;
      if (sd->nightFlags == '\0') {
        setCopReg(2,0x4000,local_34);
        if ((int)sd->light == -1) {
          setCopReg(2,&local_30,Chunk_lightTable[(int)local_5c._2_2_]);
          copFunction(2,0x780010);
          local_28 = Chunk_lightTable[(int)local_54._2_2_];
          local_30 = Chunk_lightTable[(int)local_6c._2_2_];
          local_2c = Chunk_lightTable[(int)local_64._2_2_];
          uVar22 = getCopReg(2,0x16);
          *(undefined4 *)&prim->r3 = uVar22;
          setCopReg(2,(uint)bVar2,local_30);
          setCopReg(2,(uint)bVar8,local_2c);
          setCopReg(2,face,local_28);
          setCopReg(2,&local_30,local_28);
          copFunction(2,0xf8002a);
          uVar22 = getCopReg(2,0x14);
          *(undefined4 *)&prim->r0 = uVar22;
          uVar22 = getCopReg(2,0x15);
          *(undefined4 *)&prim->r1 = uVar22;
          uVar22 = getCopReg(2,0x16);
          *(undefined4 *)&prim->r2 = uVar22;
        }
        else {
          setCopReg(2,pTVar19,Chunk_lightTable[(int)sd->light]);
          copFunction(2,0x780010);
          local_24 = getCopReg(2,0x16);
          *(undefined4 *)&prim->r0 = local_24;
          *(undefined4 *)&prim->r1 = local_24;
          *(undefined4 *)&prim->r2 = local_24;
          *(undefined4 *)&prim->r3 = local_24;
        }
      }
      else {
        DrawW_NightColorCalc__FP25Draw_tGiveShelbyMoreCacheP8POLY_GT4P8CCOORD16N32
                  (sd,prim,(CCOORD16 *)&local_70,(CCOORD16 *)&local_68,(CCOORD16 *)&local_60,
                   (CCOORD16 *)&local_58);
      }
      *(undefined *)((int)&prim->tag + 3) = 0xc;
      prim->code = *(byte *)&pDVar24->flag | 0x3c;
      uVar22 = *(undefined4 *)&pDVar24->u1;
      uVar14 = *(undefined4 *)&pDVar24->u2;
      uVar17 = *(undefined4 *)&pDVar24->u3;
      *(undefined4 *)&prim->u0 = *(undefined4 *)pDVar24;
      *(undefined4 *)&prim->u1 = uVar22;
      *(undefined4 *)&prim->u2 = uVar14;
      *(undefined4 *)&prim->u3 = uVar17;
      if (prim->clut == 0xffff) {
        iVar18 = (iVar12 - (int)sd->startfog) * 0x10 >> ((int)sd->distfog & 0x1fU);
        if (iVar18 < 0) {
          iVar18 = 0;
        }
        else {
          if (0xf < iVar18) {
            iVar18 = 0xf;
          }
        }
        prim->clut = gClutDepth[(uint)pDVar24->pad2 * 0x10 + iVar18];
      }
      if (bVar8) {
        cVar4 = sd->zeroGTETransFlag;
        setCopControlWord(2,0,*(undefined4 *)(sd->identMat).m);
        setCopControlWord(2,0x800,*(undefined4 *)((sd->identMat).m + 2));
        setCopControlWord(2,0x1000,*(undefined4 *)((sd->identMat).m + 4));
        setCopControlWord(2,0x1800,*(undefined4 *)((sd->identMat).m + 6));
        setCopControlWord(2,0x2000,*(undefined4 *)((sd->identMat).m + 8));
        if (cVar4 == '\0') {
          setCopControlWord(2,0x2800,(sd->identMat).t[0]);
          setCopControlWord(2,0x3000,(sd->identMat).t[1]);
          setCopControlWord(2,0x3800,(sd->identMat).t[2]);
        }
        if (stackSpeedUpEnbabledFlag == 0) {
          DrawW_SetUpSubdividFacet__FiP25Draw_tGiveShelbyMoreCache(face,sd);
        }
        else {
          gWSavePtr = SetSp();
          stackSpeedUpEnbabledFlag = 0;
          DrawW_SetUpSubdividFacet__FiP25Draw_tGiveShelbyMoreCache(face,sd);
          gWSavePtr = SetSp();
          stackSpeedUpEnbabledFlag = 1;
        }
        setCopControlWord(2,0,*(undefined4 *)(sd->matB).m);
        setCopControlWord(2,0x800,*(undefined4 *)((sd->matB).m + 2));
        setCopControlWord(2,0x1000,*(undefined4 *)((sd->matB).m + 4));
        setCopControlWord(2,0x1800,*(undefined4 *)((sd->matB).m + 6));
        setCopControlWord(2,0x2000,*(undefined4 *)((sd->matB).m + 8));
        if (cVar4 == '\0') {
          setCopControlWord(2,0x2800,(sd->matB).t[0]);
          setCopControlWord(2,0x3000,(sd->matB).t[1]);
          setCopControlWord(2,0x3800,(sd->matB).t[2]);
        }
      }
      puVar11 = DAT_1f800004;
      iVar18 = DAT_1f800000;
      if ((bVar2 & 0x80) != 0) {
        iVar12 = (uint)pDVar24->u3 - (uint)pDVar24->u0;
        local_4c = (short)iVar12;
        if (iVar12 < 0) {
          local_4c = -local_4c;
        }
        iVar12 = (uint)pDVar24->v3 - (uint)pDVar24->v0;
        local_4a = (short)iVar12;
        if (iVar12 < 0) {
          local_4a = -local_4a;
        }
        local_4c = local_4c + 1;
        local_4a = local_4a + 1;
        local_50 = 0;
        local_4e = 0;
        *DAT_1f800004 =
             *DAT_1f800004 & 0xff000000 | *(uint *)(sd->otz * 4 + DAT_1f800000) & 0xffffff;
        puVar20 = (uint *)(sd->otz * 4 + iVar18);
        face = (uint)DAT_1f800004 & 0xffffff;
        DAT_1f800004 = DAT_1f800004 + 3;
        *puVar20 = *puVar20 & 0xff000000 | face;
        SetTexWindow((int)puVar11,(byte *)&local_50);
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_kCtrlWorld_High__FP25Draw_tGiveShelbyMoreCache(struct Draw_tGiveShelbyMoreCache *sd /*$s2*/)
 // line 1302, offset 0x800c6e38
	/* begin block 1 */
		// Start line: 1303
		// Start offset: 0x800C6E38
		// Variables:
	// 		int numQuads; // $s0
	// 		struct Trk_Quad *pquad; // $s1
	/* end block 1 */
	// End offset: 0x800C6E9C
	// End Line: 1325

	/* begin block 2 */
		// Start line: 2822
	/* end block 2 */
	// End Line: 2823

	/* begin block 3 */
		// Start line: 2827
	/* end block 3 */
	// End Line: 2828

	/* begin block 4 */
		// Start line: 2827
	/* end block 4 */
	// End Line: 2828

void DrawW_kCtrlWorld_High__FP25Draw_tGiveShelbyMoreCache(Draw_tGiveShelbyMoreCache *sd)

{
  uint uVar1;
  Trk_Quad *inQuad;
  
  uVar1 = (uint)sd->quadCount;
  inQuad = (Trk_Quad *)sd->quads;
  while (uVar1 = uVar1 - 1, uVar1 != 0xffffffff) {
    if ((sd->head).cprim.PrimPtr < (sd->head).cprim.MPrimPtr) {
      DrawW_DrawQuad__FP25Draw_tGiveShelbyMoreCacheP8Trk_Quad(sd,inQuad);
      inQuad = inQuad + 1;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_StripDraw_High__FP25Draw_tGiveShelbyMoreCache(struct Draw_tGiveShelbyMoreCache *sd /*$s3*/)
 // line 1331, offset 0x800c6eb8
	/* begin block 1 */
		// Start line: 1332
		// Start offset: 0x800C6EB8
		// Variables:
	// 		struct Trk_NewStrip *stripPtr; // $s1

		/* begin block 1.1 */
			// Start line: 1341
			// Start offset: 0x800C6EE4
			// Variables:
		// 		int numQuads; // $s4

			/* begin block 1.1.1 */
				// Start line: 1345
				// Start offset: 0x800C6F04
				// Variables:
			// 		int iquad; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 1346
					// Start offset: 0x800C6F0C

					/* begin block 1.1.1.1.1 */
						// Start line: 1349
						// Start offset: 0x800C6F18

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1350
							// Start offset: 0x800C6F30
							// Variables:
						// 		struct Trk_Quad newQuad; // stack offset -32
						// 		int r0; // $v0
						// 		int r1; // $v0
						// 		int r2; // $v1
						// 		int r3; // $v1
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800C6F68
						// End Line: 1368
					/* end block 1.1.1.1.1 */
					// End offset: 0x800C6F68
					// End Line: 1368
				/* end block 1.1.1.1 */
				// End offset: 0x800C6F68
				// End Line: 1368
			/* end block 1.1.1 */
			// End offset: 0x800C6F74
			// End Line: 1374
		/* end block 1.1 */
		// End offset: 0x800C6F74
		// End Line: 1376
	/* end block 1 */
	// End offset: 0x800C6F80
	// End Line: 1376

	/* begin block 2 */
		// Start line: 2887
	/* end block 2 */
	// End Line: 2888

	/* begin block 3 */
		// Start line: 2894
	/* end block 3 */
	// End Line: 2895

	/* begin block 4 */
		// Start line: 2894
	/* end block 4 */
	// End Line: 2895

void DrawW_StripDraw_High__FP25Draw_tGiveShelbyMoreCache(Draw_tGiveShelbyMoreCache *sd)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  Trk_NewStrip *pTVar4;
  Trk_NewStrip *pTVar5;
  Trk_Quad local_20;
  
  pTVar4 = sd->stripPtr;
  sd->doublelayer = 1;
  while( true ) {
    sVar2 = sd->numStrips + -1;
    sd->numStrips = sVar2;
    iVar3 = 0;
    if (sVar2 == -1) break;
    bVar1 = pTVar4->quadCount;
    pTVar5 = pTVar4 + 1;
    while (iVar3 < (int)(uint)bVar1) {
      if ((sd->head).cprim.PrimPtr < (sd->head).cprim.MPrimPtr) {
        local_20.material = *(short *)pTVar5;
        local_20.aPoints[1] = pTVar4->topVert + (char)iVar3;
        local_20.aPoints[0] = local_20.aPoints[1] + '\x01';
        local_20.aPoints[2] = pTVar4->botVert + (char)iVar3;
        local_20.aPoints[3] = local_20.aPoints[2] + '\x01';
        DrawW_DrawQuad__FP25Draw_tGiveShelbyMoreCacheP8Trk_Quad(sd,&local_20);
      }
      pTVar5 = (Trk_NewStrip *)&pTVar5->quadCount;
      iVar3 = iVar3 + 1;
    }
    pTVar4 = (Trk_NewStrip *)(&pTVar4->topVert + (uint)(byte)pTVar4->size);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_DoTrough__FP13DRender_tViewP11tBuildEntry(struct DRender_tView *Vi /*$s3*/, struct tBuildEntry *buildList /*$a1*/)
 // line 1390, offset 0x800c6fa0
	/* begin block 1 */
		// Start line: 1391
		// Start offset: 0x800C6FA0
		// Variables:
	// 		struct Draw_tGiveShelbyMoreCache *sd; // $s0
	// 		int chunkCount; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1391
			// Start offset: 0x800C6FA0
			// Variables:
		// 		int buildInd; // $fp

			/* begin block 1.1.1 */
				// Start line: 1410
				// Start offset: 0x800C7050
				// Variables:
			// 		struct Chunk *chunkDat; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 1419
					// Start offset: 0x800C7078
					// Variables:
				// 		struct coorddef *pChunkCp; // $s2

					/* begin block 1.1.1.1.1 */
						// Start line: 1419
						// Start offset: 0x800C7078
						// Variables:
					// 		struct Group *this; // $v0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1419
							// Start offset: 0x800C7078
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800C7078
						// End Line: 1419
					/* end block 1.1.1.1.1 */
					// End offset: 0x800C7078
					// End Line: 1419

					/* begin block 1.1.1.1.2 */
						// Start line: 1419
						// Start offset: 0x800C7078

						/* begin block 1.1.1.1.2.1 */
							// Start line: 1449
							// Start offset: 0x800C7108
							// Variables:
						// 		struct coorddef tmp; // stack offset -80
						// 		struct coorddef tmp2; // stack offset -64
						// 		int cx; // $v0
						// 		int cz; // $v0
						// 		int dist; // $v0

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 1475
								// Start offset: 0x800C7258

								/* begin block 1.1.1.1.2.1.1.1 */
									// Start line: 1476
									// Start offset: 0x800C726C
									// Variables:
								// 		int dist; // $v0
								/* end block 1.1.1.1.2.1.1.1 */
								// End offset: 0x800C7314
								// End Line: 1492
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x800C7314
							// End Line: 1492
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x800C7314
						// End Line: 1492
					/* end block 1.1.1.1.2 */
					// End offset: 0x800C7314
					// End Line: 1492

					/* begin block 1.1.1.1.3 */
						// Start line: 1498
						// Start offset: 0x800C7314

						/* begin block 1.1.1.1.3.1 */
							// Start line: 1500
							// Start offset: 0x800C7314

							/* begin block 1.1.1.1.3.1.1 */
								// Start line: 1508
								// Start offset: 0x800C7394
								// Variables:
							// 		struct Group *group; // $v1

								/* begin block 1.1.1.1.3.1.1.1 */
									// Start line: 1510
									// Start offset: 0x800C7394

									/* begin block 1.1.1.1.3.1.1.1.1 */
										// Start line: 1514
										// Start offset: 0x800C73A4

										/* begin block 1.1.1.1.3.1.1.1.1.1 */
											// Start line: 1514
											// Start offset: 0x800C73A4
											// Variables:
										// 		struct Group *this; // $v1

											/* begin block 1.1.1.1.3.1.1.1.1.1.1 */
												// Start line: 1514
												// Start offset: 0x800C73A4
											/* end block 1.1.1.1.3.1.1.1.1.1.1 */
											// End offset: 0x800C73A4
											// End Line: 1514
										/* end block 1.1.1.1.3.1.1.1.1.1 */
										// End offset: 0x800C73A4
										// End Line: 1514
									/* end block 1.1.1.1.3.1.1.1.1 */
									// End offset: 0x800C73D8
									// End Line: 1542
								/* end block 1.1.1.1.3.1.1.1 */
								// End offset: 0x800C73D8
								// End Line: 1542
							/* end block 1.1.1.1.3.1.1 */
							// End offset: 0x800C73D8
							// End Line: 1542

							/* begin block 1.1.1.1.3.1.2 */
								// Start line: 1552
								// Start offset: 0x800C73E4

								/* begin block 1.1.1.1.3.1.2.1 */
									// Start line: 1554
									// Start offset: 0x800C73E4

									/* begin block 1.1.1.1.3.1.2.1.1 */
										// Start line: 1555
										// Start offset: 0x800C73F4

										/* begin block 1.1.1.1.3.1.2.1.1.1 */
											// Start line: 1558
											// Start offset: 0x800C73F4

											/* begin block 1.1.1.1.3.1.2.1.1.1.1 */
												// Start line: 1558
												// Start offset: 0x800C73F4
											/* end block 1.1.1.1.3.1.2.1.1.1.1 */
											// End offset: 0x800C73F4
											// End Line: 1558
										/* end block 1.1.1.1.3.1.2.1.1.1 */
										// End offset: 0x800C73F4
										// End Line: 1558
									/* end block 1.1.1.1.3.1.2.1.1 */
									// End offset: 0x800C7418
									// End Line: 1577
								/* end block 1.1.1.1.3.1.2.1 */
								// End offset: 0x800C7418
								// End Line: 1577
							/* end block 1.1.1.1.3.1.2 */
							// End offset: 0x800C7480
							// End Line: 1608
						/* end block 1.1.1.1.3.1 */
						// End offset: 0x800C7480
						// End Line: 1608

						/* begin block 1.1.1.1.3.2 */
							// Start line: 1608
							// Start offset: 0x800C7480
							// Variables:
						// 		struct Group *this; // $v0

							/* begin block 1.1.1.1.3.2.1 */
								// Start line: 1608
								// Start offset: 0x800C7480
							/* end block 1.1.1.1.3.2.1 */
							// End offset: 0x800C7480
							// End Line: 1608
						/* end block 1.1.1.1.3.2 */
						// End offset: 0x800C7480
						// End Line: 1608

						/* begin block 1.1.1.1.3.3 */
							// Start line: 1608
							// Start offset: 0x800C7480

							/* begin block 1.1.1.1.3.3.1 */
								// Start line: 1608
								// Start offset: 0x800C7480

								/* begin block 1.1.1.1.3.3.1.1 */
									// Start line: 1625
									// Start offset: 0x800C74A8

									/* begin block 1.1.1.1.3.3.1.1.1 */
										// Start line: 1625
										// Start offset: 0x800C74A8
										// Variables:
									// 		struct Group *this; // $v1

										/* begin block 1.1.1.1.3.3.1.1.1.1 */
											// Start line: 1625
											// Start offset: 0x800C74A8
										/* end block 1.1.1.1.3.3.1.1.1.1 */
										// End offset: 0x800C74A8
										// End Line: 1625
									/* end block 1.1.1.1.3.3.1.1.1 */
									// End offset: 0x800C74A8
									// End Line: 1625
								/* end block 1.1.1.1.3.3.1.1 */
								// End offset: 0x800C74C8
								// End Line: 1631
							/* end block 1.1.1.1.3.3.1 */
							// End offset: 0x800C74C8
							// End Line: 1631
						/* end block 1.1.1.1.3.3 */
						// End offset: 0x800C74C8
						// End Line: 1631

						/* begin block 1.1.1.1.3.4 */
							// Start line: 1636
							// Start offset: 0x800C74C8

							/* begin block 1.1.1.1.3.4.1 */
								// Start line: 1642
								// Start offset: 0x800C74C8

								/* begin block 1.1.1.1.3.4.1.1 */
									// Start line: 1644
									// Start offset: 0x800C74E0

									/* begin block 1.1.1.1.3.4.1.1.1 */
										// Start line: 1644
										// Start offset: 0x800C74E0
										// Variables:
									// 		struct Group *this; // $v1

										/* begin block 1.1.1.1.3.4.1.1.1.1 */
											// Start line: 1644
											// Start offset: 0x800C74E0
										/* end block 1.1.1.1.3.4.1.1.1.1 */
										// End offset: 0x800C74E0
										// End Line: 1644
									/* end block 1.1.1.1.3.4.1.1.1 */
									// End offset: 0x800C74E0
									// End Line: 1644
								/* end block 1.1.1.1.3.4.1.1 */
								// End offset: 0x800C7500
								// End Line: 1650
							/* end block 1.1.1.1.3.4.1 */
							// End offset: 0x800C7500
							// End Line: 1650
						/* end block 1.1.1.1.3.4 */
						// End offset: 0x800C7500
						// End Line: 1650
					/* end block 1.1.1.1.3 */
					// End offset: 0x800C7500
					// End Line: 1650
				/* end block 1.1.1.1 */
				// End offset: 0x800C7500
				// End Line: 1650
			/* end block 1.1.1 */
			// End offset: 0x800C7500
			// End Line: 1650
		/* end block 1.1 */
		// End offset: 0x800C750C
		// End Line: 1655
	/* end block 1 */
	// End offset: 0x800C750C
	// End Line: 1655

	/* begin block 2 */
		// Start line: 3021
	/* end block 2 */
	// End Line: 3022

	/* begin block 3 */
		// Start line: 3036
	/* end block 3 */
	// End Line: 3037

	/* begin block 4 */
		// Start line: 3036
	/* end block 4 */
	// End Line: 3037

void DrawW_DoTrough__FP13DRender_tViewP11tBuildEntry(DRender_tView *Vi,tBuildEntry *buildList)

{
  int iVar1;
  int iVar2;
  Group *pGVar3;
  Chunk *pCVar4;
  coorddef *pcVar5;
  int iVar6;
  int local_50;
  int local_4c;
  int local_48;
  coorddef cStack64;
  int local_30;
  
  iVar6 = 0;
  local_30 = BWorld_gChunkCount;
  DAT_1f8000da = 1;
  DAT_1f800074 = gIdentTemplate.m[0]._0_4_;
  DAT_1f800078 = gIdentTemplate.m._4_4_;
  DAT_1f80007c = gIdentTemplate.m[1]._2_4_;
  DAT_1f800080 = gIdentTemplate.m[2]._0_4_;
  DAT_1f800084 = gIdentTemplate._16_4_;
  DAT_1f800088 = gIdentTemplate.t[0];
  DAT_1f80008c = gIdentTemplate.t[1];
  DAT_1f800090 = gIdentTemplate.t[2];
  DAT_1f800148 = 0;
  do {
    if (local_30 <= iVar6) {
      return;
    }
    if ((buildList->enableBits & 1U) != 0) {
      DAT_1f8000fc = &gInitialArt;
      DAT_1f8000e4 = *(byte *)&buildList->chunkInd;
      DAT_1f8000e5 = buildList->geomRez;
      pCVar4 = Track_chunkList + (uint)DAT_1f8000e4;
      DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX(&gWorldMat,(MATRIX *)&DAT_1f800014);
      DAT_1f800106 = 0;
      DAT_1f8000d8 = 0xffff;
      DAT_1f8000e0 = pCVar4->vertexBuf + 1;
      DAT_1f8000f0 = Track_materials;
      pcVar5 = Chunk_chunkCenters + (uint)DAT_1f8000e4;
      if (gNight_renderNight != (uchar *)0x0) {
        DAT_1f800106 = 4;
        iVar1 = pcVar5->x - ((&Camera_gInfo.target)[Vi->player * 0x44]->position).x >> 10;
        iVar2 = pcVar5->z - ((&Camera_gInfo.target)[Vi->player * 0x44]->position).z >> 10;
        if (iVar1 * iVar1 + iVar2 * iVar2 < 0x47e0000) {
          if ((((&Cars_gList9)[Vi->player]->control).lights & 6U) != 0) {
            DAT_1f800106 = 5;
          }
          local_50 = (Vi->cview).translation.x -
                     ((&Camera_gInfo.target)[Vi->player * 0x44]->position).x;
          local_4c = (Vi->cview).translation.y -
                     ((&Camera_gInfo.target)[Vi->player * 0x44]->position).y;
          local_48 = (Vi->cview).translation.z -
                     ((&Camera_gInfo.target)[Vi->player * 0x44]->position).z;
          transform(&local_50,(int *)&gNightMat,(int *)&cStack64);
          DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(&cStack64,(MATRIX *)&DAT_1f800034);
        }
        if ((BW_gCopCarObj != (Car_tObj *)0x0) &&
           (iVar1 = pcVar5->x - (BW_gCopCarObj->N).position.x >> 10,
           iVar2 = pcVar5->z - (BW_gCopCarObj->N).position.z >> 10,
           iVar1 * iVar1 + iVar2 * iVar2 < 0x47e0000)) {
          DAT_1f800106 = DAT_1f800106 | 2;
          local_50 = (Vi->cview).translation.x - (BW_gCopCarObj->N).position.x;
          local_4c = (Vi->cview).translation.y - (BW_gCopCarObj->N).position.y;
          local_48 = (Vi->cview).translation.z - (BW_gCopCarObj->N).position.z;
          transform(&local_50,(int *)&gCopMat,(int *)&cStack64);
          DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(&cStack64,(MATRIX *)&DAT_1f800054);
        }
      }
      DAT_1f8000f4 = (undefined2)(pcVar5->x - (Vi->cview).translation.x >> 10);
      DAT_1f8000f6 = (undefined2)(pcVar5->y - (Vi->cview).translation.y >> 10);
      DAT_1f8000f8 = (undefined2)(pcVar5->z - (Vi->cview).translation.z >> 10);
      DAT_1f800030 = 0;
      DAT_1f80002c = 0;
      DAT_1f800028 = 0;
      setCopControlWord(2,0x2800,0);
      setCopControlWord(2,0x3000,0);
      setCopControlWord(2,0x3800,0);
      if (DAT_1f8000e5 == '\0') {
        pGVar3 = pCVar4->lorezstripBuf;
        if (pGVar3 != (Group *)0x0) {
          DAT_1f800104 = *(undefined2 *)&pGVar3->m_num_elements;
          DAT_1f800100 = pGVar3 + 1;
          if (DAT_1f800100 != (Group *)0x0) {
            DAT_1f8000ec = 0x7d;
            DrawW_StripDraw_High__FP25Draw_tGiveShelbyMoreCache
                      ((Draw_tGiveShelbyMoreCache *)&DAT_1f800000);
          }
        }
        DAT_1f8000e7 = pCVar4->quadCounts[0];
        if (DAT_1f8000e7 != '\0') {
          DAT_1f8000e8 = (Group *)pCVar4->renderQuads[0];
          DAT_1f8000ec = 0x7d;
          DAT_1f800107 = 1;
          DAT_1f8000d8 = 0xffff;
          DrawW_kCtrlWorld_High__FP25Draw_tGiveShelbyMoreCache
                    ((Draw_tGiveShelbyMoreCache *)&DAT_1f800000);
        }
        DAT_1f8000e7 = pCVar4->quadCounts[1];
        if (DAT_1f8000e7 != '\0') {
          DAT_1f8000e8 = (Group *)pCVar4->renderQuads[1];
LAB_800c746c:
          DAT_1f8000ec = 0x1e;
          DAT_1f800107 = 1;
          DAT_1f8000d8 = 0xffff;
          DrawW_kCtrlWorld_High__FP25Draw_tGiveShelbyMoreCache
                    ((Draw_tGiveShelbyMoreCache *)&DAT_1f800000);
        }
      }
      else {
        pGVar3 = pCVar4->stripBuf;
        if (pGVar3 != (Group *)0x0) {
          DAT_1f800100 = pGVar3 + 1;
          DAT_1f800104 = *(undefined2 *)&pGVar3->m_num_elements;
          DAT_1f8000ec = 0x7d;
          DrawW_StripDraw_High__FP25Draw_tGiveShelbyMoreCache
                    ((Draw_tGiveShelbyMoreCache *)&DAT_1f800000);
          DAT_1f8000e7 = pCVar4->quadCounts[5];
          if (DAT_1f8000e7 != '\0') {
            DAT_1f8000e8 = (Group *)pCVar4->renderQuads[3];
            goto LAB_800c746c;
          }
        }
      }
      DAT_1f8000e0 = pCVar4->objVertexBuf + 1;
      DAT_1f8000e7 = pCVar4->quadCounts[2];
      if (DAT_1f8000e7 != '\0') {
        DAT_1f8000ec = 0x7d;
        DAT_1f800107 = 1;
        DAT_1f8000d8 = 0xffff;
        DAT_1f8000e8 = pCVar4->objQuadBuf + 1;
        DrawW_kCtrlWorld_High__FP25Draw_tGiveShelbyMoreCache
                  ((Draw_tGiveShelbyMoreCache *)&DAT_1f800000);
      }
      DAT_1f8000e7 = pCVar4->quadCounts[3];
      if (DAT_1f8000e7 != '\0') {
        DAT_1f8000ec = 0x32;
        DAT_1f800107 = 1;
        DAT_1f8000d8 = 0xffff;
        DAT_1f8000e8 = pCVar4->objQuadInstanceBuf + 1;
        DrawW_kCtrlWorld_High__FP25Draw_tGiveShelbyMoreCache
                  ((Draw_tGiveShelbyMoreCache *)&DAT_1f800000);
      }
    }
    buildList = buildList + 1;
    iVar6 = iVar6 + 1;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX(struct matrixtdef *m /*$a0*/, struct MATRIX *mat /*$a1*/)
 // line 1663, offset 0x800c753c
	/* begin block 1 */
		// Start line: 1664
		// Start offset: 0x800C753C

		/* begin block 1.1 */
			// Start line: 1666
			// Start offset: 0x800C753C
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a2
		/* end block 1.1 */
		// End offset: 0x800C753C
		// End Line: 1666

		/* begin block 1.2 */
			// Start line: 1666
			// Start offset: 0x800C753C
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a2
		/* end block 1.2 */
		// End offset: 0x800C753C
		// End Line: 1666

		/* begin block 1.3 */
			// Start line: 1666
			// Start offset: 0x800C753C
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.3 */
		// End offset: 0x800C753C
		// End Line: 1666
	/* end block 1 */
	// End offset: 0x800C753C
	// End Line: 1666

	/* begin block 2 */
		// Start line: 3819
	/* end block 2 */
	// End Line: 3820

	/* begin block 3 */
		// Start line: 3828
	/* end block 3 */
	// End Line: 3829

	/* begin block 4 */
		// Start line: 3828
	/* end block 4 */
	// End Line: 3829

	/* begin block 5 */
		// Start line: 3830
	/* end block 5 */
	// End Line: 3831

void DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX(matrixtdef *m,MATRIX *mat)

{
  int iVar1;
  int iVar2;
  
  iVar1 = m->m[3];
  iVar2 = m->m[6];
  mat->m[0] = (short)(m->m[0] >> 4);
  mat->m[1] = (short)(iVar1 >> 4);
  mat->m[2] = (short)(iVar2 >> 4);
  iVar1 = m->m[4];
  iVar2 = m->m[7];
  mat->m[3] = (short)(m->m[1] >> 4);
  mat->m[4] = (short)(iVar1 >> 4);
  mat->m[5] = (short)(iVar2 >> 4);
  iVar1 = m->m[5];
  iVar2 = m->m[8];
  mat->m[6] = (short)(m->m[2] >> 4);
  mat->m[7] = (short)(iVar1 >> 4);
  mat->m[8] = (short)(iVar2 >> 4);
  setCopControlWord(2,0,*(undefined4 *)mat->m);
  setCopControlWord(2,0x800,*(undefined4 *)(mat->m + 2));
  setCopControlWord(2,0x1000,*(undefined4 *)(mat->m + 4));
  setCopControlWord(2,0x1800,*(undefined4 *)(mat->m + 6));
  setCopControlWord(2,0x2000,*(undefined4 *)(mat->m + 8));
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(struct coorddef *t /*$a0*/, struct MATRIX *mat /*$a1*/)
 // line 1674, offset 0x800c75d8
	/* begin block 1 */
		// Start line: 1675
		// Start offset: 0x800C75D8
		// Variables:
	// 		int tx; // $v0
	// 		int ty; // $v1
	// 		int tz; // $a0
	/* end block 1 */
	// End offset: 0x800C75D8
	// End Line: 1676

	/* begin block 2 */
		// Start line: 3846
	/* end block 2 */
	// End Line: 3847

	/* begin block 3 */
		// Start line: 3850
	/* end block 3 */
	// End Line: 3851

	/* begin block 4 */
		// Start line: 3850
	/* end block 4 */
	// End Line: 3851

	/* begin block 5 */
		// Start line: 3851
	/* end block 5 */
	// End Line: 3852

	/* begin block 6 */
		// Start line: 3851
	/* end block 6 */
	// End Line: 3852

void DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(coorddef *t,MATRIX *mat)

{
  int iVar1;
  int iVar2;
  
  iVar1 = t->y;
  iVar2 = t->z;
  mat->t[0] = t->x >> 10;
  mat->t[1] = iVar1 >> 10;
  mat->t[2] = iVar2 >> 10;
  setCopControlWord(2,0x2800,mat->t[0]);
  setCopControlWord(2,0x3000,mat->t[1]);
  setCopControlWord(2,0x3800,mat->t[2]);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_ResetAnimationTimer__Fv()
 // line 1698, offset 0x800c761c
	/* begin block 1 */
		// Start line: 1699
		// Start offset: 0x800C761C

		/* begin block 1.1 */
			// Start line: 1700
			// Start offset: 0x800C761C
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x800C763C
		// End Line: 1701
	/* end block 1 */
	// End offset: 0x800C763C
	// End Line: 1701

	/* begin block 2 */
		// Start line: 3886
	/* end block 2 */
	// End Line: 3887

	/* begin block 3 */
		// Start line: 3900
	/* end block 3 */
	// End Line: 3901

	/* begin block 4 */
		// Start line: 3900
	/* end block 4 */
	// End Line: 3901

	/* begin block 5 */
		// Start line: 3901
	/* end block 5 */
	// End Line: 3902

	/* begin block 6 */
		// Start line: 3901
	/* end block 6 */
	// End Line: 3902

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawW_ResetAnimationTimer__Fv(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0xb;
  piVar1 = &INT_8011f744;
  do {
    *piVar1 = 0;
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + -1;
  } while (-1 < iVar2);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DrawW_GetAnimationTime__FP15Trk_AnimateInst(struct Trk_AnimateInst *animInst /*$a0*/)
 // line 1704, offset 0x800c7644
	/* begin block 1 */
		// Start line: 1705
		// Start offset: 0x800C7644
		// Variables:
	// 		int track; // $a1

		/* begin block 1.1 */
			// Start line: 1706
			// Start offset: 0x800C7644

			/* begin block 1.1.1 */
				// Start line: 1715
				// Start offset: 0x800C7678
				// Variables:
			// 		int maxTick; // $a1
			/* end block 1.1.1 */
			// End offset: 0x800C76C0
			// End Line: 1717
		/* end block 1.1 */
		// End offset: 0x800C76C0
		// End Line: 1717
	/* end block 1 */
	// End offset: 0x800C76C0
	// End Line: 1717

	/* begin block 2 */
		// Start line: 3908
	/* end block 2 */
	// End Line: 3909

	/* begin block 3 */
		// Start line: 3912
	/* end block 3 */
	// End Line: 3913

	/* begin block 4 */
		// Start line: 3912
	/* end block 4 */
	// End Line: 3913

	/* begin block 5 */
		// Start line: 3913
	/* end block 5 */
	// End Line: 3914

	/* begin block 6 */
		// Start line: 3913
	/* end block 6 */
	// End Line: 3914

int DrawW_GetAnimationTime__FP15Trk_AnimateInst(Trk_AnimateInst *animInst)

{
  int iVar1;
  int iVar2;
  
  if (((animInst->objectIndex != '\0') && (GameSetup_gData.track != 3)) &&
     (GameSetup_gData.track != 7)) {
    iVar2 = ((int)animInst->count + -2) * (int)animInst->interval;
    iVar1 = animation_timer[(uint)animInst->objectIndex - 1];
    if (iVar2 <= animation_timer[(uint)animInst->objectIndex - 1]) {
      iVar1 = iVar2;
    }
    return iVar1;
  }
  return simGlobal.gameTicks;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_SetAnimationTime__FP15Trk_AnimateInstPii(struct Trk_AnimateInst *animInst /*$a0*/, int *table /*$a1*/, int time /*$a2*/)
 // line 1721, offset 0x800c76c8
	/* begin block 1 */
		// Start line: 1722
		// Start offset: 0x800C76C8
		// Variables:
	// 		int objIndex; // $a0

		/* begin block 1.1 */
			// Start line: 1723
			// Start offset: 0x800C76C8

			/* begin block 1.1.1 */
				// Start line: 1727
				// Start offset: 0x800C76F8

				/* begin block 1.1.1.1 */
					// Start line: 1729
					// Start offset: 0x800C76F8
					// Variables:
				// 		int i; // $a3

					/* begin block 1.1.1.1.1 */
						// Start line: 1729
						// Start offset: 0x800C7714
						// Variables:
					// 		int slice; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800C7758
					// End Line: 1735
				/* end block 1.1.1.1 */
				// End offset: 0x800C7764
				// End Line: 1740
			/* end block 1.1.1 */
			// End offset: 0x800C7764
			// End Line: 1740

			/* begin block 1.1.2 */
				// Start line: 1743
				// Start offset: 0x800C7764

				/* begin block 1.1.2.1 */
					// Start line: 1743
					// Start offset: 0x800C7764

					/* begin block 1.1.2.1.1 */
						// Start line: 1767
						// Start offset: 0x800C778C

						/* begin block 1.1.2.1.1.1 */
							// Start line: 1769
							// Start offset: 0x800C778C
							// Variables:
						// 		int i; // $a3

							/* begin block 1.1.2.1.1.1.1 */
								// Start line: 1769
								// Start offset: 0x800C77A4
								// Variables:
							// 		int slice; // $a0
							/* end block 1.1.2.1.1.1.1 */
							// End offset: 0x800C77F4
							// End Line: 1778
						/* end block 1.1.2.1.1.1 */
						// End offset: 0x800C7800
						// End Line: 1780
					/* end block 1.1.2.1.1 */
					// End offset: 0x800C7800
					// End Line: 1780
				/* end block 1.1.2.1 */
				// End offset: 0x800C7800
				// End Line: 1780
			/* end block 1.1.2 */
			// End offset: 0x800C7800
			// End Line: 1780
		/* end block 1.1 */
		// End offset: 0x800C7800
		// End Line: 1780
	/* end block 1 */
	// End offset: 0x800C7800
	// End Line: 1780

	/* begin block 2 */
		// Start line: 3948
	/* end block 2 */
	// End Line: 3949

	/* begin block 3 */
		// Start line: 3953
	/* end block 3 */
	// End Line: 3954

	/* begin block 4 */
		// Start line: 3953
	/* end block 4 */
	// End Line: 3954

	/* begin block 5 */
		// Start line: 3954
	/* end block 5 */
	// End Line: 3955

	/* begin block 6 */
		// Start line: 3954
	/* end block 6 */
	// End Line: 3955

void DrawW_SetAnimationTime__FP15Trk_AnimateInstPii(Trk_AnimateInst *animInst,int *table,int time)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  Car_tObj **ppCVar5;
  int iVar6;
  
  iVar1 = Cars_gNumHumanRaceCars;
  iVar3 = (uint)animInst->objectIndex - 1;
  if (animation_timer[iVar3] < 0xf01) {
    piVar2 = animation_timer + iVar3;
    iVar6 = 0;
    if (0 < *piVar2) {
      *piVar2 = *piVar2 + 1;
      return;
    }
    ppCVar5 = &Cars_gHumanRaceCarList9;
    while (iVar6 < iVar1) {
      iVar4 = (int)((*ppCVar5)->N).simRoadInfo.slice;
      if ((table[iVar3 * 2] <= iVar4) && (iVar4 <= (table + iVar3 * 2)[1])) {
        *piVar2 = *piVar2 + 1;
      }
      ppCVar5 = ppCVar5 + 1;
      iVar6 = iVar6 + 1;
    }
  }
  else {
    iVar6 = 0;
    ppCVar5 = &Cars_gHumanRaceCarList9;
    while (iVar6 < iVar1) {
      iVar4 = (int)((*ppCVar5)->N).simRoadInfo.slice;
      if ((iVar4 < table[iVar3 * 2]) || ((table + iVar3 * 2)[1] < iVar4)) {
        animation_timer[iVar3] = 0;
      }
      ppCVar5 = ppCVar5 + 1;
      iVar6 = iVar6 + 1;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_DoObjectAnimations__Fv()
 // line 1784, offset 0x800c7808
	/* begin block 1 */
		// Start line: 1785
		// Start offset: 0x800C7808
		// Variables:
	// 		int track; // $v1
	// 		int *trackPtr; // $s2

		/* begin block 1.1 */
			// Start line: 1798
			// Start offset: 0x800C7848
			// Variables:
		// 		int time; // $s3

			/* begin block 1.1.1 */
				// Start line: 1799
				// Start offset: 0x800C7848
				// Variables:
			// 		int i; // $s1
			/* end block 1.1.1 */
			// End offset: 0x800C788C
			// End Line: 1804
		/* end block 1.1 */
		// End offset: 0x800C788C
		// End Line: 1804
	/* end block 1 */
	// End offset: 0x800C788C
	// End Line: 1804

	/* begin block 2 */
		// Start line: 4074
	/* end block 2 */
	// End Line: 4075

	/* begin block 3 */
		// Start line: 4079
	/* end block 3 */
	// End Line: 4080

	/* begin block 4 */
		// Start line: 4079
	/* end block 4 */
	// End Line: 4080

	/* begin block 5 */
		// Start line: 4080
	/* end block 5 */
	// End Line: 4081

	/* begin block 6 */
		// Start line: 4080
	/* end block 6 */
	// End Line: 4081

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DrawW_DoObjectAnimations__Fv(void)

{
  int time;
  Trk_AnimateInst **ppTVar1;
  int iVar2;
  int *table;
  
  time = simGlobal.gameTicks;
  if (GameSetup_gData.track == 0) {
    table = trk0;
  }
  else {
    if (GameSetup_gData.track != 4) {
      return;
    }
    table = trk4;
  }
  iVar2 = 0;
  ppTVar1 = &Anim_gInstanceFromIndex32;
  do {
    if ((*ppTVar1)->objectIndex != '\0') {
      DrawW_SetAnimationTime__FP15Trk_AnimateInstPii(*ppTVar1,table,time);
    }
    iVar2 = iVar2 + 1;
    ppTVar1 = ppTVar1 + 1;
  } while (iVar2 < 0x10);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DrawW_BuildObjectFacets__FP13DRender_tViewP15ChunkObjectInfo(struct DRender_tView *Vi /*$s7*/, struct ChunkObjectInfo *gObjInfo /*$a1*/)
 // line 1909, offset 0x800c78a8
	/* begin block 1 */
		// Start line: 1910
		// Start offset: 0x800C78A8
		// Variables:
	// 		struct Draw_DCache *sd; // $fp
	// 		struct Trk_SimpleInst *objInstance; // $s0
	// 		struct Trk_ObjectDef *objDef; // $s1
	// 		int totalCount; // $s5
	// 		struct Group *group; // $v0
	// 		int groupNumElements; // stack offset -64
	// 		int offset; // stack offset -60
	// 		int doFrustumClip; // stack offset -56
	// 		int zClipSq; // $s6
	// 		short *visList; // stack offset -52

		/* begin block 1.1 */
			// Start line: 1910
			// Start offset: 0x800C78A8
			// Variables:
		// 		struct Group *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 1910
				// Start offset: 0x800C78A8
			/* end block 1.1.1 */
			// End offset: 0x800C78A8
			// End Line: 1910
		/* end block 1.1 */
		// End offset: 0x800C78A8
		// End Line: 1910

		/* begin block 1.2 */
			// Start line: 1925
			// Start offset: 0x800C78F4
			// Variables:
		// 		int objectIndex; // $s4

			/* begin block 1.2.1 */
				// Start line: 1934
				// Start offset: 0x800C7954
				// Variables:
			// 		int objectOffset; // $s2
			// 		struct matrixtdef matrix; // stack offset -136

				/* begin block 1.2.1.1 */
					// Start line: 1939
					// Start offset: 0x800C7968

					/* begin block 1.2.1.1.1 */
						// Start line: 1940
						// Start offset: 0x800C7978
					/* end block 1.2.1.1.1 */
					// End offset: 0x800C7998
					// End Line: 1966
				/* end block 1.2.1.1 */
				// End offset: 0x800C7998
				// End Line: 1966

				/* begin block 1.2.1.2 */
					// Start line: 1979
					// Start offset: 0x800C79BC

					/* begin block 1.2.1.2.1 */
						// Start line: 1980
						// Start offset: 0x800C79EC

						/* begin block 1.2.1.2.1.1 */
							// Start line: 2004
							// Start offset: 0x800C7A64
							// Variables:
						// 		struct coorddef cp; // stack offset -96

							/* begin block 1.2.1.2.1.1.1 */
								// Start line: 2016
								// Start offset: 0x800C7AA8

								/* begin block 1.2.1.2.1.1.1.1 */
									// Start line: 2023
									// Start offset: 0x800C7AF8
									// Variables:
								// 		struct coorddef pt2; // stack offset -80
								/* end block 1.2.1.2.1.1.1.1 */
								// End offset: 0x800C7B54
								// End Line: 2033
							/* end block 1.2.1.2.1.1.1 */
							// End offset: 0x800C7B54
							// End Line: 2033
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x800C7B54
						// End Line: 2033
					/* end block 1.2.1.2.1 */
					// End offset: 0x800C7B54
					// End Line: 2041
				/* end block 1.2.1.2 */
				// End offset: 0x800C7B54
				// End Line: 2041
			/* end block 1.2.1 */
			// End offset: 0x800C7B60
			// End Line: 2046
		/* end block 1.2 */
		// End offset: 0x800C7B68
		// End Line: 2047
	/* end block 1 */
	// End offset: 0x800C7B6C
	// End Line: 2049

	/* begin block 2 */
		// Start line: 4226
	/* end block 2 */
	// End Line: 4227

	/* begin block 3 */
		// Start line: 4330
	/* end block 3 */
	// End Line: 4331

	/* begin block 4 */
		// Start line: 4330
	/* end block 4 */
	// End Line: 4331

int DrawW_BuildObjectFacets__FP13DRender_tViewP15ChunkObjectInfo
              (DRender_tView *Vi,ChunkObjectInfo *gObjInfo)

{
  byte bVar1;
  void *pvVar2;
  int ticks;
  Trk_AnimateInst *animInst;
  Trk_ObjectDef *objDef;
  int offset;
  int iVar3;
  int iVar4;
  int iVar5;
  matrixtdef mStack136;
  coorddef local_60;
  coorddef local_50;
  int local_40;
  int local_3c;
  int local_38;
  short *local_34;
  matrixtdef *local_30;
  
  iVar4 = 0;
  animInst = (Trk_AnimateInst *)(gObjInfo->objInstanceBuf + 1);
  local_40 = gObjInfo->objInstanceBuf->m_num_elements;
  if (local_40 == 0) {
    iVar4 = 0;
  }
  else {
    local_3c = gObjInfo->offset;
    local_38 = gObjInfo->doFrustumClip;
    iVar5 = gObjInfo->zClipSq;
    local_34 = gObjInfo->visList;
    DAT_1f800030 = 0;
    DAT_1f80002c = 0;
    DAT_1f800028 = 0;
    setCopControlWord(2,0x2800,0);
    setCopControlWord(2,0x3000,0);
    setCopControlWord(2,0x3800,0);
    iVar3 = 0;
    local_30 = &mStack136;
    while (iVar3 < local_40) {
      if ((local_34 == (short *)0x0) || ((((ushort)local_34[iVar3] >> 0xc ^ 1) & 1) == 0)) {
        offset = local_3c;
        if (local_3c == 0) {
          offset = (int)goffsets[(uint)animInst->zoffset];
        }
        bVar1 = animInst->type;
        if (bVar1 == 1) {
          objDef = Track_gObjDefs[(int)animInst->pad];
          if (((local_38 == 0) ||
              (pvVar2 = ObjectClipped__FP13DRender_tViewiP8coorddefP25Draw_tGiveShelbyMoreCache
                                  (Vi,(int)animInst->pad,(coorddef *)&animInst->count,
                                   (Draw_tGiveShelbyMoreCache *)&DAT_1f800000),
              pvVar2 == (void *)0x0)) &&
             ((iVar5 == -1 ||
              (ticks = xzsquaredist32__FP8coorddefT0
                                 ((coorddef *)&animInst->count,(coorddef *)&Vi->cview),
              ticks < iVar5)))) {
            offset = DrawObjectSimple__FP13DRender_tViewP11Draw_DCacheP13Trk_ObjectDefP8coorddefi
                               (Vi,(Draw_DCache *)&DAT_1f800000,objDef,(coorddef *)&animInst->count,
                                offset);
            iVar4 = iVar4 + offset;
          }
        }
        else {
          if ((1 < bVar1) && ((bVar1 == 3 || (bVar1 == 7)))) {
            ticks = DrawW_GetAnimationTime__FP15Trk_AnimateInst(animInst);
            Anim_GetRotPos__FP15Trk_AnimateInstiiP8coorddefP10matrixtdef
                      (animInst,1,ticks,&local_60,local_30);
            if ((iVar5 == -1) ||
               (ticks = xzsquaredist32__FP8coorddefT0(&local_60,(coorddef *)&Vi->cview),
               ticks < iVar5)) {
              offset = 
                       DrawObjectTransform__FP13DRender_tViewP11Draw_DCacheP10matrixtdefP13Trk_ObjectDefP8coorddefis
                                 (Vi,(Draw_DCache *)&DAT_1f800000,local_30,
                                  Track_gObjDefs[(int)animInst->pad],&local_60,offset,-1);
              iVar4 = iVar4 + offset;
              if ((animInst->flags & 2) != 0) {
                local_50.x = local_60.x + mStack136.m[6] * -0x10;
                local_50.y = local_60.y + mStack136.m[7] * -0x10;
                local_50.z = local_60.z + mStack136.m[8] * -0x10;
                Flare_Halo2__FP13DRender_tViewiiP8coorddefT3P15Draw_FlareCache
                          (Vi,-1,0x1e,&local_60,&local_50);
              }
            }
          }
        }
      }
      animInst = (Trk_AnimateInst *)((int)&animInst->size + (int)animInst->size);
      iVar3 = iVar3 + 1;
    }
  }
  return iVar4;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DrawW_BuildCustomObjectFacets__FP13DRender_tViewP11Draw_DCacheP13Trk_SimObjectP5Groupi(struct DRender_tView *Vi /*stack 0*/, struct Draw_DCache *sd /*stack 4*/, struct Trk_SimObject *simObjs /*stack 8*/, struct Group *group /*$a3*/, int zClipSq /*stack 16*/)
 // line 2054, offset 0x800c7b9c
	/* begin block 1 */
		// Start line: 2055
		// Start offset: 0x800C7B9C
		// Variables:
	// 		struct Trk_SimpleInst *objInstance; // $s4
	// 		struct Trk_ObjectDef *objDef; // $fp
	// 		int totalCount; // stack offset -48
	// 		int groupNumElements; // stack offset -44
	// 		static char offsets[8]; // offset 0xc

		/* begin block 1.1 */
			// Start line: 2055
			// Start offset: 0x800C7B9C
			// Variables:
		// 		struct Group *this; // $a3

			/* begin block 1.1.1 */
				// Start line: 2055
				// Start offset: 0x800C7B9C
			/* end block 1.1.1 */
			// End offset: 0x800C7B9C
			// End Line: 2055
		/* end block 1.1 */
		// End offset: 0x800C7B9C
		// End Line: 2055

		/* begin block 1.2 */
			// Start line: 2070
			// Start offset: 0x800C7BF4
			// Variables:
		// 		int objectIndex; // $s7

			/* begin block 1.2.1 */
				// Start line: 2074
				// Start offset: 0x800C7C28
				// Variables:
			// 		struct matrixtdef matrix; // stack offset -96
			// 		int objectOffset; // $s6

				/* begin block 1.2.1.1 */
					// Start line: 2078
					// Start offset: 0x800C7C3C

					/* begin block 1.2.1.1.1 */
						// Start line: 2082
						// Start offset: 0x800C7C68
						// Variables:
					// 		struct Trk_CollideBoomInst *objCollideBoomInstance; // $s2

						/* begin block 1.2.1.1.1.1 */
							// Start line: 2083
							// Start offset: 0x800C7C68

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 2090
								// Start offset: 0x800C7CB0
								// Variables:
							// 		struct tQuat quat; // stack offset -56

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 2104
									// Start offset: 0x800C7D10
									// Variables:
								// 		int t1; // $s5
								// 		int t2; // $s3
								// 		int sx; // $s0
								// 		int sy; // $s1
								// 		int sz; // $s2
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x800C7D10
								// End Line: 2104
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x800C7D10
							// End Line: 2104
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800C7E74
						// End Line: 2136
					/* end block 1.2.1.1.1 */
					// End offset: 0x800C7E74
					// End Line: 2136
				/* end block 1.2.1.1 */
				// End offset: 0x800C7E74
				// End Line: 2144
			/* end block 1.2.1 */
			// End offset: 0x800C7E80
			// End Line: 2149
		/* end block 1.2 */
		// End offset: 0x800C7E88
		// End Line: 2150
	/* end block 1 */
	// End offset: 0x800C7E8C
	// End Line: 2152

	/* begin block 2 */
		// Start line: 4659
	/* end block 2 */
	// End Line: 4660

	/* begin block 3 */
		// Start line: 4665
	/* end block 3 */
	// End Line: 4666

	/* begin block 4 */
		// Start line: 4665
	/* end block 4 */
	// End Line: 4666

int DrawW_BuildCustomObjectFacets__FP13DRender_tViewP11Draw_DCacheP13Trk_SimObjectP5Groupi
              (DRender_tView *Vi,Draw_DCache *sd,Trk_SimObject *simObjs,Group *group,int zClipSq)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  ObjectAnim *pOVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  Group *pGVar12;
  int iVar13;
  Trk_ObjectDef *objDef;
  matrixtdef local_60;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  pGVar12 = group + 1;
  local_30 = 0;
  local_2c = group->m_num_elements;
  if (local_2c == 0) {
    local_30 = 0;
  }
  else {
    (sd->matB).t[2] = 0;
    (sd->matB).t[1] = 0;
    (sd->matB).t[0] = 0;
    setCopControlWord(2,0x2800,(sd->matB).t[0]);
    setCopControlWord(2,0x3000,(sd->matB).t[1]);
    setCopControlWord(2,0x3800,(sd->matB).t[2]);
    iVar13 = 0;
    while (iVar13 < local_2c) {
      cVar2 = *(char *)((int)&pGVar12->m_num_elements + 2);
      cVar1 = (&DAT_8013d828)[(uint)*(byte *)&pGVar12[1].m_num_elements];
      if ((cVar2 == '\x05') || (cVar2 == '\x02')) {
        objDef = Track_gObjDefs[(int)*(short *)((int)&pGVar12[1].m_num_elements + 2)];
        if ((cVar2 == '\x02') ||
           (pOVar4 = Object_GetAnim__FP13Trk_SimObject
                               (simObjs + (uint)*(byte *)((int)&pGVar12[8].m_num_elements + 2)),
           pOVar4 == (ObjectAnim *)0x0)) {
          iVar5 = xzsquaredist32__FP8coorddefT0((coorddef *)(pGVar12 + 2),(coorddef *)&Vi->cview);
          bVar3 = false;
          if ((zClipSq <= iVar5) ||
             ((*(char *)((int)&pGVar12->m_num_elements + 2) == '\x02' &&
              (pvVar6 = ObjectClipped__FP13DRender_tViewiP8coorddefP25Draw_tGiveShelbyMoreCache
                                  (Vi,(int)*(short *)((int)&pGVar12[1].m_num_elements + 2),
                                   (coorddef *)(pGVar12 + 2),(Draw_tGiveShelbyMoreCache *)sd),
              pvVar6 != (void *)0x0)))) {
            bVar3 = true;
          }
          if (!bVar3) {
            local_38 = pGVar12[5].m_num_elements;
            local_34 = pGVar12[6].m_num_elements;
            Quatern_QuatToMat__FP5tQuatP10matrixtdef((tQuat *)&local_38,&local_60);
            iVar5 = (int)*(short *)&pGVar12[7].m_num_elements << 8;
            iVar10 = (int)*(short *)((int)&pGVar12[7].m_num_elements + 2) << 8;
            iVar11 = (int)*(short *)&pGVar12[8].m_num_elements << 8;
            uVar7 = fixedmult(local_60.m[0],iVar5);
            uVar8 = fixedmult(local_60.m[3],iVar5);
            local_60.m[6] = fixedmult(local_60.m[6],iVar5);
            local_60.m[0] = uVar7;
            local_60.m[3] = uVar8;
            uVar7 = fixedmult(local_60.m[1],iVar10);
            uVar8 = fixedmult(local_60.m[4],iVar10);
            local_60.m[7] = fixedmult(local_60.m[7],iVar10);
            local_60.m[1] = uVar7;
            local_60.m[4] = uVar8;
            uVar7 = fixedmult(local_60.m[2],iVar11);
            uVar8 = fixedmult(local_60.m[5],iVar11);
            local_60.m[8] = fixedmult(local_60.m[8],iVar11);
            local_60.m[2] = uVar7;
            local_60.m[5] = uVar8;
            iVar5 = 
                    DrawObjectTransform__FP13DRender_tViewP11Draw_DCacheP10matrixtdefP13Trk_ObjectDefP8coorddefis
                              (Vi,sd,&local_60,objDef,(coorddef *)(pGVar12 + 2),(int)cVar1,-1);
            local_30 = local_30 + iVar5;
          }
        }
        else {
          piVar9 = (int *)Object_GetAnim__FP13Trk_SimObject
                                    (simObjs + (uint)*(byte *)((int)&pGVar12[8].m_num_elements + 2))
          ;
          (**(code **)(*piVar9 + 0x14))
                    ((int)piVar9 + (int)*(short *)(*piVar9 + 0x10),Vi,sd,(int)cVar1);
        }
      }
      pGVar12 = (Group *)((int)&pGVar12->m_num_elements + (int)*(short *)&pGVar12->m_num_elements);
      iVar13 = iVar13 + 1;
    }
  }
  return local_30;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DrawObjectTransform__FP13DRender_tViewP11Draw_DCacheP10matrixtdefP13Trk_ObjectDefP8coorddefis(struct DRender_tView *Vi /*$s3*/, struct Draw_DCache *sd /*$s2*/, struct matrixtdef *matrix /*$fp*/, struct Trk_ObjectDef *objDef /*$s5*/, struct coorddef *pCp /*stack 16*/, int offset /*stack 20*/, int light /*stack 24*/)
 // line 2156, offset 0x800c7ebc
	/* begin block 1 */
		// Start line: 2157
		// Start offset: 0x800C7EBC
		// Variables:
	// 		struct matrixtdef mattemp; // stack offset -112
	// 		struct coorddef tmp; // stack offset -72
	// 		struct coorddef tmp2; // stack offset -56
	/* end block 1 */
	// End offset: 0x800C8168
	// End Line: 2223

	/* begin block 2 */
		// Start line: 4895
	/* end block 2 */
	// End Line: 4896

	/* begin block 3 */
		// Start line: 4900
	/* end block 3 */
	// End Line: 4901

	/* begin block 4 */
		// Start line: 4900
	/* end block 4 */
	// End Line: 4901

int DrawObjectTransform__FP13DRender_tViewP11Draw_DCacheP10matrixtdefP13Trk_ObjectDefP8coorddefis
              (DRender_tView *Vi,Draw_DCache *sd,matrixtdef *matrix,Trk_ObjectDef *objDef,
              coorddef *pCp,int offset,int light)

{
  byte bVar1;
  Track_tMaterial *pTVar2;
  uchar *puVar3;
  MATRIX *mat;
  matrixtdef mStack112;
  coorddef local_48;
  coorddef local_38;
  
  *(Trk_ObjectDef **)&sd[1].head.cprim.PrimPtr = objDef + 1;
  *(uchar *)((int)&sd[1].head.cprim.MPrimPtr + 3) = objDef->quadCount;
  pTVar2 = Track_materials;
  bVar1 = objDef->vertexCount;
  *(undefined *)((int)sd[1].matB.t + 2) = 0;
  puVar3 = gNight_renderNight;
  *(int *)&sd[1].head.clipW = offset;
  *(Trk_ObjectDef **)&sd[1].head.mirror = objDef + (uint)bVar1 * 2 + 1;
  *(Track_tMaterial **)sd[1].matB.m = pTVar2;
  if (puVar3 != (uchar *)0x0) {
    *(undefined *)((int)sd[1].matB.t + 2) = 4;
    if ((((&Cars_gList9)[Vi->player]->control).lights & 6U) != 0) {
      *(undefined *)((int)sd[1].matB.t + 2) = 5;
    }
    local_48.x = pCp->x - ((&Camera_gInfo.target)[Vi->player * 0x44]->position).x;
    local_48.y = pCp->y - ((&Camera_gInfo.target)[Vi->player * 0x44]->position).y;
    local_48.z = pCp->z - ((&Camera_gInfo.target)[Vi->player * 0x44]->position).z;
    transform((int *)&local_48,(int *)&gNightMat,(int *)&local_38);
    DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(&local_38,&sd->matNight);
    if (BW_gCopCarObj != (Car_tObj *)0x0) {
      *(byte *)((int)sd[1].matB.t + 2) = *(byte *)((int)sd[1].matB.t + 2) | 2;
      local_48.x = pCp->x - (BW_gCopCarObj->N).position.x;
      local_48.y = pCp->y - (BW_gCopCarObj->N).position.y;
      local_48.z = pCp->z - (BW_gCopCarObj->N).position.z;
      transform((int *)&local_48,(int *)&gCopMat,(int *)&local_38);
      DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(&local_38,&sd->matCop);
    }
    (sd->matB).t[2] = 0;
    (sd->matB).t[1] = 0;
    (sd->matB).t[0] = 0;
    setCopControlWord(2,0x2800,(sd->matB).t[0]);
    setCopControlWord(2,0x3000,(sd->matB).t[1]);
    setCopControlWord(2,0x3800,(sd->matB).t[2]);
  }
  local_48.x = pCp->x - (Vi->cview).translation.x;
  local_48.y = pCp->y - (Vi->cview).translation.y;
  local_48.z = pCp->z - (Vi->cview).translation.z;
  TrsProj_SetPsxTransZero__Fv();
  TrsProj_TransPt__FP8coorddefT0(&local_48,&local_38);
  if (offset == -1) {
    *(int *)&sd[1].head.clipW = Draw_gMidGroundOtz;
    local_38.x = local_38.x >> 2;
    local_38.z = local_38.z >> 2;
    local_38.y = local_38.y >> 2;
  }
  *(undefined4 *)(sd[1].matB.m + 2) = 0;
  sd[1].matB.m[4] = 0;
  Math_fasttransmult__FP10matrixtdefN20(matrix,&gWorldMat,&mStack112);
  mat = &sd->matB;
  DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX(&mStack112,mat);
  DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(&local_38,mat);
  *(undefined *)((int)sd[1].matB.t + 3) = 0;
  sd->light = (short)light;
  DrawW_kCtrlWorld_High__FP25Draw_tGiveShelbyMoreCache((Draw_tGiveShelbyMoreCache *)sd);
  DrawW_WorldSetUpMatrix__FP10matrixtdefP6MATRIX(&gWorldMat,mat);
  (sd->matB).t[2] = 0;
  (sd->matB).t[1] = 0;
  (sd->matB).t[0] = 0;
  setCopControlWord(2,0x2800,(sd->matB).t[0]);
  setCopControlWord(2,0x3000,(sd->matB).t[1]);
  setCopControlWord(2,0x3800,(sd->matB).t[2]);
  return (uint)objDef->quadCount;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DrawObjectSimple__FP13DRender_tViewP11Draw_DCacheP13Trk_ObjectDefP8coorddefi(struct DRender_tView *Vi /*$s2*/, struct Draw_DCache *sd /*$s0*/, struct Trk_ObjectDef *objDef /*$s4*/, struct coorddef *pCp /*$s3*/, int offset /*stack 16*/)
 // line 2261, offset 0x800c8214
	/* begin block 1 */
		// Start line: 2262
		// Start offset: 0x800C8214

		/* begin block 1.1 */
			// Start line: 2262
			// Start offset: 0x800C8214

			/* begin block 1.1.1 */
				// Start line: 2276
				// Start offset: 0x800C828C
				// Variables:
			// 		struct coorddef tmp; // stack offset -64
			// 		struct coorddef tmp2; // stack offset -48
			/* end block 1.1.1 */
			// End offset: 0x800C841C
			// End Line: 2301
		/* end block 1.1 */
		// End offset: 0x800C841C
		// End Line: 2301
	/* end block 1 */
	// End offset: 0x800C84C8
	// End Line: 2330

	/* begin block 2 */
		// Start line: 5158
	/* end block 2 */
	// End Line: 5159

	/* begin block 3 */
		// Start line: 5178
	/* end block 3 */
	// End Line: 5179

	/* begin block 4 */
		// Start line: 5178
	/* end block 4 */
	// End Line: 5179

int DrawObjectSimple__FP13DRender_tViewP11Draw_DCacheP13Trk_ObjectDefP8coorddefi
              (DRender_tView *Vi,Draw_DCache *sd,Trk_ObjectDef *objDef,coorddef *pCp,int offset)

{
  byte bVar1;
  Track_tMaterial *pTVar2;
  uchar *puVar3;
  short sVar4;
  int local_40;
  int local_3c;
  int local_38;
  coorddef cStack48;
  
  pTVar2 = Track_materials;
  *(Trk_ObjectDef **)&sd[1].head.cprim.PrimPtr = objDef + 1;
  *(Track_tMaterial **)sd[1].matB.m = pTVar2;
  *(uchar *)((int)&sd[1].head.cprim.MPrimPtr + 3) = objDef->quadCount;
  bVar1 = objDef->vertexCount;
  *(undefined *)((int)sd[1].matB.t + 2) = 0;
  puVar3 = gNight_renderNight;
  *(int *)&sd[1].head.clipW = offset;
  *(Trk_ObjectDef **)&sd[1].head.mirror = objDef + (uint)bVar1 * 2 + 1;
  if (puVar3 != (uchar *)0x0) {
    *(undefined *)((int)sd[1].matB.t + 2) = 4;
    if ((((&Cars_gList9)[Vi->player]->control).lights & 6U) != 0) {
      *(undefined *)((int)sd[1].matB.t + 2) = 5;
    }
    local_40 = (Vi->cview).translation.x - ((&Camera_gInfo.target)[Vi->player * 0x44]->position).x;
    local_3c = (Vi->cview).translation.y - ((&Camera_gInfo.target)[Vi->player * 0x44]->position).y;
    local_38 = (Vi->cview).translation.z - ((&Camera_gInfo.target)[Vi->player * 0x44]->position).z;
    transform(&local_40,(int *)&gNightMat,(int *)&cStack48);
    DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(&cStack48,&sd->matNight);
    if (BW_gCopCarObj != (Car_tObj *)0x0) {
      *(byte *)((int)sd[1].matB.t + 2) = *(byte *)((int)sd[1].matB.t + 2) | 2;
      local_40 = (Vi->cview).translation.x - (BW_gCopCarObj->N).position.x;
      local_3c = (Vi->cview).translation.y - (BW_gCopCarObj->N).position.y;
      local_38 = (Vi->cview).translation.z - (BW_gCopCarObj->N).position.z;
      transform(&local_40,(int *)&gCopMat,(int *)&cStack48);
      DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(&cStack48,&sd->matCop);
    }
    (sd->matB).t[2] = 0;
    (sd->matB).t[1] = 0;
    (sd->matB).t[0] = 0;
    setCopControlWord(2,0x2800,(sd->matB).t[0]);
    setCopControlWord(2,0x3000,(sd->matB).t[1]);
    setCopControlWord(2,0x3800,(sd->matB).t[2]);
  }
  if (offset == -1) {
    *(int *)&sd[1].head.clipW = Draw_gMidGroundOtz;
    sd[1].matB.m[2] = (short)(pCp->x - (Vi->cview).translation.x >> 0xc);
    sd[1].matB.m[3] = (short)(pCp->y - (Vi->cview).translation.y >> 0xc);
    sVar4 = (short)(pCp->z - (Vi->cview).translation.z >> 0xc);
  }
  else {
    sd[1].matB.m[2] = (short)(pCp->x - (Vi->cview).translation.x >> 10);
    sd[1].matB.m[3] = (short)(pCp->y - (Vi->cview).translation.y >> 10);
    sVar4 = (short)(pCp->z - (Vi->cview).translation.z >> 10);
  }
  sd[1].matB.m[4] = sVar4;
  *(undefined *)((int)sd[1].matB.t + 3) = 1;
  sd->light = -1;
  DrawW_kCtrlWorld_High__FP25Draw_tGiveShelbyMoreCache((Draw_tGiveShelbyMoreCache *)sd);
  return (uint)objDef->quadCount;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DrawW_BuildChunkObjectFacets__FP13DRender_tViewP15ChunkObjectInfo(struct DRender_tView *Vi /*stack 0*/, struct ChunkObjectInfo *gObjInfo /*$a1*/)
 // line 2346, offset 0x800c8508
	/* begin block 1 */
		// Start line: 2347
		// Start offset: 0x800C8508
		// Variables:
	// 		struct Trk_SimObject *simObjs; // stack offset -56
	// 		struct Group *instGroup; // $v0
	// 		int doFrustumClip; // stack offset -52
	// 		struct Trk_SimpleInst *objInstance; // $s4
	// 		struct Trk_ObjectDef *objDef; // $s6
	// 		int totalCount; // $s7
	// 		int groupNumElements; // stack offset -48
	// 		struct matrixtdef matrix; // stack offset -96

		/* begin block 1.1 */
			// Start line: 2347
			// Start offset: 0x800C8508
			// Variables:
		// 		struct Group *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 2347
				// Start offset: 0x800C8508
			/* end block 1.1.1 */
			// End offset: 0x800C8508
			// End Line: 2347
		/* end block 1.1 */
		// End offset: 0x800C8508
		// End Line: 2347

		/* begin block 1.2 */
			// Start line: 2364
			// Start offset: 0x800C8564
			// Variables:
		// 		int objectIndex; // stack offset -44

			/* begin block 1.2.1 */
				// Start line: 2367
				// Start offset: 0x800C85A0
				// Variables:
			// 		int objectOffset; // $fp
			// 		unsigned char type; // $s0
				// Labels:
				//		0x00003B5C	end_of_loop_GOTO_ROCKS

				/* begin block 1.2.1.1 */
					// Start line: 2411
					// Start offset: 0x800C861C

					/* begin block 1.2.1.1.1 */
						// Start line: 2415
						// Start offset: 0x800C863C
						// Variables:
					// 		short light; // $s1

						/* begin block 1.2.1.1.1.1 */
							// Start line: 2416
							// Start offset: 0x800C863C

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 2416
								// Start offset: 0x800C863C

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 2425
									// Start offset: 0x800C8678

									/* begin block 1.2.1.1.1.1.1.1.1 */
										// Start line: 2427
										// Start offset: 0x800C8678
										// Variables:
									// 		int t1; // $s3
									// 		int t2; // $s2
									// 		int sx; // $s0
									// 		int sy; // $s1
									/* end block 1.2.1.1.1.1.1.1.1 */
									// End offset: 0x800C8678
									// End Line: 2429
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x800C873C
								// End Line: 2451
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x800C873C
							// End Line: 2451
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x800C873C
						// End Line: 2454
					/* end block 1.2.1.1.1 */
					// End offset: 0x800C8780
					// End Line: 2463
				/* end block 1.2.1.1 */
				// End offset: 0x800C8780
				// End Line: 2463

				/* begin block 1.2.1.2 */
					// Start line: 2466
					// Start offset: 0x800C8780

					/* begin block 1.2.1.2.1 */
						// Start line: 2467
						// Start offset: 0x800C87C4

						/* begin block 1.2.1.2.1.1 */
							// Start line: 2483
							// Start offset: 0x800C87F8

							/* begin block 1.2.1.2.1.1.1 */
								// Start line: 2496
								// Start offset: 0x800C87F8
								// Variables:
							// 		int t1; // $s5
							// 		int t2; // $s3
							// 		int sx; // $s0
							// 		int sy; // $s1
							// 		int sz; // $s2
							/* end block 1.2.1.2.1.1.1 */
							// End offset: 0x800C87F8
							// End Line: 2496
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x800C87F8
						// End Line: 2496

						/* begin block 1.2.1.2.1.2 */
							// Start line: 2532
							// Start offset: 0x800C8900

							/* begin block 1.2.1.2.1.2.1 */
								// Start line: 2541
								// Start offset: 0x800C8900
								// Variables:
							// 		int t1; // $s3
							// 		int t2; // $s2
							// 		int sx; // $s0
							// 		int sy; // $s1
							/* end block 1.2.1.2.1.2.1 */
							// End offset: 0x800C8900
							// End Line: 2541
						/* end block 1.2.1.2.1.2 */
						// End offset: 0x800C8900
						// End Line: 2541

						/* begin block 1.2.1.2.1.3 */
							// Start line: 2581
							// Start offset: 0x800C8A08

							/* begin block 1.2.1.2.1.3.1 */
								// Start line: 2583
								// Start offset: 0x800C8A08

								/* begin block 1.2.1.2.1.3.1.1 */
									// Start line: 2589
									// Start offset: 0x800C8A48

									/* begin block 1.2.1.2.1.3.1.1.1 */
										// Start line: 2598
										// Start offset: 0x800C8A48
										// Variables:
									// 		int t1; // $s5
									// 		int t2; // $s3
									// 		int sx; // $s0
									// 		int sy; // $s1
									// 		int sz; // $s2
									/* end block 1.2.1.2.1.3.1.1.1 */
									// End offset: 0x800C8A48
									// End Line: 2598
								/* end block 1.2.1.2.1.3.1.1 */
								// End offset: 0x800C8A48
								// End Line: 2598
							/* end block 1.2.1.2.1.3.1 */
							// End offset: 0x800C8B84
							// End Line: 2629
						/* end block 1.2.1.2.1.3 */
						// End offset: 0x800C8B84
						// End Line: 2629
					/* end block 1.2.1.2.1 */
					// End offset: 0x800C8B84
					// End Line: 2641
				/* end block 1.2.1.2 */
				// End offset: 0x800C8B84
				// End Line: 2641
			/* end block 1.2.1 */
			// End offset: 0x800C8B84
			// End Line: 2647
		/* end block 1.2 */
		// End offset: 0x800C8B9C
		// End Line: 2648
	/* end block 1 */
	// End offset: 0x800C8BA0
	// End Line: 2650

	/* begin block 2 */
		// Start line: 5392
	/* end block 2 */
	// End Line: 5393

	/* begin block 3 */
		// Start line: 5404
	/* end block 3 */
	// End Line: 5405

	/* begin block 4 */
		// Start line: 5404
	/* end block 4 */
	// End Line: 5405

int DrawW_BuildChunkObjectFacets__FP13DRender_tViewP15ChunkObjectInfo
              (DRender_tView *Vi,ChunkObjectInfo *gObjInfo)

{
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  ObjectAnim *pOVar5;
  int *piVar6;
  int local_68;
  short sVar7;
  int iVar8;
  int iVar9;
  Group *pGVar10;
  Trk_ObjectDef *objDef;
  int iVar11;
  int offset;
  matrixtdef local_60;
  Trk_SimObject *local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_38 = gObjInfo->simObjs;
  pGVar10 = gObjInfo->objInstanceBuf + 1;
  local_30 = gObjInfo->objInstanceBuf->m_num_elements;
  local_34 = gObjInfo->doFrustumClip;
  iVar11 = 0;
  if (local_30 == 0) {
    iVar11 = 0;
  }
  else {
    DAT_1f800030 = 0;
    DAT_1f80002c = 0;
    DAT_1f800028 = 0;
    setCopControlWord(2,0x2800,0);
    setCopControlWord(2,0x3000,0);
    setCopControlWord(2,0x3800,0);
    local_2c = 0;
    while (local_2c < local_30) {
      bVar1 = *(byte *)((int)&pGVar10->m_num_elements + 2);
      offset = (int)goffsets[(uint)*(byte *)&pGVar10[1].m_num_elements];
      if (((bVar1 & 0x80) != 0) ||
         ((((bVar1 != 5 && (local_34 != 0)) &&
           (pvVar2 = ObjectClipped__FP13DRender_tViewiP8coorddefP25Draw_tGiveShelbyMoreCache
                               (Vi,(int)*(short *)((int)&pGVar10[1].m_num_elements + 2),
                                (coorddef *)(pGVar10 + 2),(Draw_tGiveShelbyMoreCache *)&DAT_1f800000
                               ), pvVar2 != (void *)0x0)) &&
          (*(char *)((int)&pGVar10->m_num_elements + 2) != '\x02')))) goto LAB_800c8b88;
      DAT_1f800148 = 0x400;
      sVar7 = -1;
      if ((*(byte *)((int)&pGVar10[1].m_num_elements + 1) & 1) == 0) {
        if (bVar1 == 2) {
          Quatern_QuatToMat__FP5tQuatP10matrixtdef((tQuat *)(pGVar10 + 5),&local_60);
          local_68 = (int)*(short *)&pGVar10[7].m_num_elements << 8;
          iVar8 = (int)*(short *)((int)&pGVar10[7].m_num_elements + 2) << 8;
          iVar9 = (int)*(short *)&pGVar10[8].m_num_elements << 8;
          uVar3 = fixedmult(local_60.m[0],local_68);
          uVar4 = fixedmult(local_60.m[3],local_68);
          local_60.m[6] = fixedmult(local_60.m[6],local_68);
          local_60.m[0] = uVar3;
          local_60.m[3] = uVar4;
          uVar3 = fixedmult(local_60.m[1],iVar8);
          uVar4 = fixedmult(local_60.m[4],iVar8);
          local_60.m[7] = fixedmult(local_60.m[7],iVar8);
          local_60.m[1] = uVar3;
          local_60.m[4] = uVar4;
          uVar3 = fixedmult(local_60.m[2],iVar9);
          uVar4 = fixedmult(local_60.m[5],iVar9);
          local_60.m[8] = fixedmult(local_60.m[8],iVar9);
          objDef = Track_gObjDefs[(int)*(short *)((int)&pGVar10[1].m_num_elements + 2)];
          local_68 = (int)*(short *)((int)&pGVar10[8].m_num_elements + 2);
          local_60.m[2] = uVar3;
          local_60.m[5] = uVar4;
          goto LAB_800c8b34;
        }
        if (bVar1 < 3) {
          if (bVar1 == 1) {
            offset = DrawObjectSimple__FP13DRender_tViewP11Draw_DCacheP13Trk_ObjectDefP8coorddefi
                               (Vi,(Draw_DCache *)&DAT_1f800000,
                                Track_gObjDefs[(int)*(short *)((int)&pGVar10[1].m_num_elements + 2)]
                                ,(coorddef *)(pGVar10 + 2),offset);
            iVar11 = iVar11 + offset;
          }
        }
        else {
          if (bVar1 == 5) {
            objDef = Track_gObjDefs[(int)*(short *)((int)&pGVar10[1].m_num_elements + 2)];
            pOVar5 = Object_GetAnim__FP13Trk_SimObject
                               (local_38 + (uint)*(byte *)((int)&pGVar10[8].m_num_elements + 2));
            if (pOVar5 == (ObjectAnim *)0x0) {
              Quatern_QuatToMat__FP5tQuatP10matrixtdef((tQuat *)(pGVar10 + 5),&local_60);
              local_68 = (int)*(short *)&pGVar10[7].m_num_elements << 8;
              iVar8 = (int)*(short *)((int)&pGVar10[7].m_num_elements + 2) << 8;
              iVar9 = (int)*(short *)&pGVar10[8].m_num_elements << 8;
              uVar3 = fixedmult(local_60.m[0],local_68);
              uVar4 = fixedmult(local_60.m[3],local_68);
              local_60.m[6] = fixedmult(local_60.m[6],local_68);
              local_60.m[0] = uVar3;
              local_60.m[3] = uVar4;
              uVar3 = fixedmult(local_60.m[1],iVar8);
              uVar4 = fixedmult(local_60.m[4],iVar8);
              local_60.m[7] = fixedmult(local_60.m[7],iVar8);
              local_60.m[1] = uVar3;
              local_60.m[4] = uVar4;
              uVar3 = fixedmult(local_60.m[2],iVar9);
              uVar4 = fixedmult(local_60.m[5],iVar9);
              local_60.m[8] = fixedmult(local_60.m[8],iVar9);
              local_68 = -1;
              local_60.m[2] = uVar3;
              local_60.m[5] = uVar4;
              goto LAB_800c8b34;
            }
            piVar6 = (int *)Object_GetAnim__FP13Trk_SimObject
                                      (local_38 +
                                       (uint)*(byte *)((int)&pGVar10[8].m_num_elements + 2));
            (**(code **)(*piVar6 + 0x14))
                      ((int)piVar6 + (int)*(short *)(*piVar6 + 0x10),Vi,0x1f800000,offset);
          }
          else {
            if (bVar1 == 9) {
              xformy((int *)&local_60,(int)*(short *)&pGVar10[5].m_num_elements);
              local_68 = (int)*(short *)&pGVar10[6].m_num_elements << 8;
              iVar8 = (int)*(short *)((int)&pGVar10[5].m_num_elements + 2) << 8;
              uVar3 = fixedmult(local_60.m[0],local_68);
              uVar4 = fixedmult(local_60.m[3],local_68);
              local_60.m[6] = fixedmult(local_60.m[6],local_68);
              local_60.m[0] = uVar3;
              local_60.m[3] = uVar4;
              uVar3 = fixedmult(local_60.m[1],iVar8);
              uVar4 = fixedmult(local_60.m[4],iVar8);
              local_60.m[7] = fixedmult(local_60.m[7],iVar8);
              local_60.m[1] = uVar3;
              local_60.m[4] = uVar4;
              uVar3 = fixedmult(local_60.m[2],local_68);
              uVar4 = fixedmult(local_60.m[5],local_68);
              local_60.m[8] = fixedmult(local_60.m[8],local_68);
              DAT_1f800148 = 0;
              objDef = Track_gObjDefs[(int)*(short *)((int)&pGVar10[1].m_num_elements + 2)];
              local_68 = (int)*(short *)((int)&pGVar10[6].m_num_elements + 2);
              local_60.m[2] = uVar3;
              local_60.m[5] = uVar4;
              goto LAB_800c8b34;
            }
          }
        }
      }
      else {
        uVar3 = fixedatan(pGVar10[2].m_num_elements - (Vi->cview).translation.x,
                          pGVar10[4].m_num_elements - (Vi->cview).translation.z);
        fixedxformy((int *)&local_60,uVar3);
        if (bVar1 == 9) {
          local_68 = (int)*(short *)&pGVar10[6].m_num_elements << 8;
          iVar8 = (int)*(short *)((int)&pGVar10[5].m_num_elements + 2) << 8;
          uVar3 = fixedmult(local_60.m[0],local_68);
          uVar4 = fixedmult(local_60.m[3],local_68);
          local_60.m[6] = fixedmult(local_60.m[6],local_68);
          local_60.m[0] = uVar3;
          local_60.m[3] = uVar4;
          uVar3 = fixedmult(local_60.m[1],iVar8);
          uVar4 = fixedmult(local_60.m[4],iVar8);
          local_60.m[7] = fixedmult(local_60.m[7],iVar8);
          local_60.m[1] = uVar3;
          local_60.m[4] = uVar4;
          uVar3 = fixedmult(local_60.m[2],local_68);
          uVar4 = fixedmult(local_60.m[5],local_68);
          local_60.m[8] = fixedmult(local_60.m[8],local_68);
          sVar7 = *(short *)((int)&pGVar10[6].m_num_elements + 2);
          DAT_1f800148 = 0;
          local_60.m[2] = uVar3;
          local_60.m[5] = uVar4;
        }
        objDef = Track_gObjDefs[(int)*(short *)((int)&pGVar10[1].m_num_elements + 2)];
        local_68 = (int)sVar7;
LAB_800c8b34:
        offset = 
                 DrawObjectTransform__FP13DRender_tViewP11Draw_DCacheP10matrixtdefP13Trk_ObjectDefP8coorddefis
                           (Vi,(Draw_DCache *)&DAT_1f800000,&local_60,objDef,
                            (coorddef *)(pGVar10 + 2),offset,local_68);
        iVar11 = iVar11 + offset;
      }
LAB_800c8b88:
      local_2c = local_2c + 1;
      pGVar10 = (Group *)((int)&pGVar10->m_num_elements + (int)*(short *)&pGVar10->m_num_elements);
    }
  }
  return iVar11;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ ObjectClipped__FP13DRender_tViewiP8coorddefP25Draw_tGiveShelbyMoreCache(struct DRender_tView *Vi /*$a3*/, int ind /*$a1*/, struct coorddef *pCp /*$a2*/, struct Draw_tGiveShelbyMoreCache *sd /*$a3*/)
 // line 2660, offset 0x800c8bd0
	/* begin block 1 */
		// Start line: 2661
		// Start offset: 0x800C8BD0
		// Variables:
	// 		struct coorddef tmp; // stack offset -56
	// 		struct coorddef tmp2; // stack offset -40
	// 		struct coorddef trans; // stack offset -24
	// 		struct tBoundingSphere *bSphere; // $s0

		/* begin block 1.1 */
			// Start line: 2661
			// Start offset: 0x800C8BD0
			// Variables:
		// 		struct Group *this; // $s0

			/* begin block 1.1.1 */
				// Start line: 2661
				// Start offset: 0x800C8BD0
			/* end block 1.1.1 */
			// End offset: 0x800C8BD0
			// End Line: 2661
		/* end block 1.1 */
		// End offset: 0x800C8BD0
		// End Line: 2661
	/* end block 1 */
	// End offset: 0x800C8CB4
	// End Line: 2710

	/* begin block 2 */
		// Start line: 6145
	/* end block 2 */
	// End Line: 6146

	/* begin block 3 */
		// Start line: 6156
	/* end block 3 */
	// End Line: 6157

	/* begin block 4 */
		// Start line: 6156
	/* end block 4 */
	// End Line: 6157

void * ObjectClipped__FP13DRender_tViewiP8coorddefP25Draw_tGiveShelbyMoreCache
                 (DRender_tView *Vi,int ind,coorddef *pCp,Draw_tGiveShelbyMoreCache *sd)

{
  undefined *puVar1;
  int iVar2;
  Group *pGVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_28 [2];
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  
  pGVar3 = gPersistObjDefBoundingSpheres + ind * 2 + 1;
  local_38 = (int)*(short *)&pGVar3->m_num_elements * 0x400 + pCp->x;
  local_34 = (int)*(short *)((int)&pGVar3->m_num_elements + 2) * 0x400 + pCp->y;
  local_30 = (int)*(short *)&pGVar3[1].m_num_elements * 0x400 + pCp->z;
  local_18 = (Vi->cview).translationInv.x;
  local_14 = (Vi->cview).translationInv.y;
  local_10 = (Vi->cview).translationInv.z;
  transform(&local_38,(int *)&(Vi->cview).mrotationInv,local_28);
  iVar2 = local_20 + local_10 + (int)*(short *)((int)&pGVar3[1].m_num_elements + 2) * 0x400;
  if (iVar2 < local_28[0] + local_18) {
    puVar1 = &DAT_00000001;
  }
  else {
    puVar1 = (undefined *)(uint)(iVar2 < -(local_28[0] + local_18));
  }
  return puVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_DoObjects__FP13DRender_tViewP11tBuildEntry(struct DRender_tView *Vi /*stack 0*/, struct tBuildEntry *buildList /*$a1*/)
 // line 2717, offset 0x800c8cc4
	/* begin block 1 */
		// Start line: 2718
		// Start offset: 0x800C8CC4
		// Variables:
	// 		struct Draw_DCache *sd; // $s6
	// 		int thisChunkInd; // $s5
	// 		int chunkCount; // stack offset -48

		/* begin block 1.1 */
			// Start line: 2718
			// Start offset: 0x800C8CC4
			// Variables:
		// 		int buildInd; // $s4

			/* begin block 1.1.1 */
				// Start line: 2733
				// Start offset: 0x800C8D38
				// Variables:
			// 		struct Chunk *chunkDat; // $s0
			// 		struct Trk_SimObject *simObjs; // $s3
			// 		int chunkInd; // $v1
			// 		int geomRez; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 2778
					// Start offset: 0x800C8DF0

					/* begin block 1.1.1.1.1 */
						// Start line: 2779
						// Start offset: 0x800C8E20

						/* begin block 1.1.1.1.1.1 */
							// Start line: 2779
							// Start offset: 0x800C8E20

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 2779
								// Start offset: 0x800C8E20
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800C8E20
							// End Line: 2779
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800C8E20
						// End Line: 2779
					/* end block 1.1.1.1.1 */
					// End offset: 0x800C8E5C
					// End Line: 2794
				/* end block 1.1.1.1 */
				// End offset: 0x800C8E5C
				// End Line: 2794
			/* end block 1.1.1 */
			// End offset: 0x800C8E5C
			// End Line: 2794
		/* end block 1.1 */
		// End offset: 0x800C8E68
		// End Line: 2801

		/* begin block 1.2 */
			// Start line: 2863
			// Start offset: 0x800C8FC4

			/* begin block 1.2.1 */
				// Start line: 2863
				// Start offset: 0x800C8FD8

				/* begin block 1.2.1.1 */
					// Start line: 2863
					// Start offset: 0x800C8FD8
				/* end block 1.2.1.1 */
				// End offset: 0x800C8FD8
				// End Line: 2863
			/* end block 1.2.1 */
			// End offset: 0x800C8FD8
			// End Line: 2863
		/* end block 1.2 */
		// End offset: 0x800C900C
		// End Line: 2865
	/* end block 1 */
	// End offset: 0x800C900C
	// End Line: 2865

	/* begin block 2 */
		// Start line: 6298
	/* end block 2 */
	// End Line: 6299

	/* begin block 3 */
		// Start line: 6306
	/* end block 3 */
	// End Line: 6307

	/* begin block 4 */
		// Start line: 6306
	/* end block 4 */
	// End Line: 6307

void DrawW_DoObjects__FP13DRender_tViewP11tBuildEntry(DRender_tView *Vi,tBuildEntry *buildList)

{
  int iVar1;
  Group *pGVar2;
  Chunk *pCVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = BWorld_gChunkCount;
  iVar4 = 0;
  iVar5 = gCurrContext->currentChunk;
  DAT_1f8000fc = &gInitialArt;
  gVi = Vi;
  while (iVar4 < iVar1) {
    if ((buildList->enableBits & 2U) != 0) {
      pCVar3 = Track_chunkList + (int)buildList->chunkInd;
      pGVar2 = pCVar3->simObjBuf;
      if (pCVar3->objInstanceBuf != (Group *)0x0) {
        DAT_1f8000da = 1;
        gChunkObjInfo.objInstanceBuf = pCVar3->objInstanceBuf;
        gChunkObjInfo.doFrustumClip = ZEXT14(buildList->geomRez == '\x04');
        gChunkObjInfo.simObjs = (Trk_SimObject *)(pGVar2 + 1);
        gWSavePtr = SetSp();
        stackSpeedUpEnbabledFlag = 1;
        DrawW_BuildChunkObjectFacets__FP13DRender_tViewP15ChunkObjectInfo(gVi,&gChunkObjInfo);
        gWSavePtr = SetSp();
        stackSpeedUpEnbabledFlag = 0;
      }
      if (((GameSetup_gData.Time == 0) && (GameSetup_gData.Weather == 0)) &&
         (pCVar3->objSpecialInstanceBuf != (Group *)0x0)) {
        DAT_1f800148 = 0x400;
        DAT_1f8000da = 0;
        gChunkObjInfo.visList = (short *)0x0;
        gChunkObjInfo.objInstanceBuf = pCVar3->objSpecialInstanceBuf;
        gChunkObjInfo.zClipSq = -1;
        gChunkObjInfo.offset = 0x32;
        gChunkObjInfo.doFrustumClip = 1;
        gChunkObjInfo.simObjs = (Trk_SimObject *)(pGVar2 + 1);
        DrawW_BuildObjectFacets__FP13DRender_tViewP15ChunkObjectInfo(gVi,&gChunkObjInfo);
      }
    }
    buildList = buildList + 1;
    iVar4 = iVar4 + 1;
  }
  DAT_1f8000da = 0;
  DAT_1f800148 = 0x400;
  if (gPersistObjInst != (Group *)0x0) {
    if (((GameSetup_gData.track != 4) ||
        (((0x27 < iVar5 - 1U && (0x1d < iVar5 - 0x3dU)) && (8 < iVar5 - 0x6cU)))) &&
       ((GameSetup_gData.track != 0 ||
        (((0x34 < iVar5 - 1U && (0x1b < iVar5 - 0x44U)) && (0x13 < iVar5 - 0x6cU)))))) {
      gChunkObjInfo.objInstanceBuf = gPersistObjInst;
      gChunkObjInfo.simObjs = (Trk_SimObject *)0x0;
      gChunkObjInfo.offset = 0x7d;
      gChunkObjInfo.doFrustumClip = 1;
      gChunkObjInfo.zClipSq = gCurrContext->polyFarZClipSq;
      gChunkObjInfo.visList = (short *)0x0;
      gWSavePtr = SetSp();
      stackSpeedUpEnbabledFlag = 1;
      DrawW_BuildObjectFacets__FP13DRender_tViewP15ChunkObjectInfo(gVi,&gChunkObjInfo);
      gWSavePtr = SetSp();
      stackSpeedUpEnbabledFlag = 0;
    }
  }
  if (gPersistMidgroundObjInst != (Group *)0x0) {
    gChunkObjInfo.simObjs = (Trk_SimObject *)0x0;
    gChunkObjInfo.objInstanceBuf = gPersistMidgroundObjInst;
    gChunkObjInfo.zClipSq = -1;
    gChunkObjInfo.offset = -1;
    gChunkObjInfo.doFrustumClip = 1;
    gChunkObjInfo.visList = Track_gInViewList + iVar5 * 0x20;
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 1;
    DrawW_BuildObjectFacets__FP13DRender_tViewP15ChunkObjectInfo(gVi,&gChunkObjInfo);
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 0;
  }
  if ((Object_customObjInst != (Group *)0x0) && (0 < Object_customObjInst->m_num_elements)) {
    DrawW_BuildCustomObjectFacets__FP13DRender_tViewP11Draw_DCacheP13Trk_SimObjectP5Groupi
              (Vi,(Draw_DCache *)&DAT_1f800000,(Trk_SimObject *)(Object_customSimObjs + 1),
               Object_customObjInst,gCurrContext->polyFarZClipSq);
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Draw_CircleClip__FP8coorddefT0i(struct coorddef *pt1 /*$a0*/, struct coorddef *pt2 /*$a1*/, int r /*$a2*/)
 // line 2888, offset 0x800c903c
	/* begin block 1 */
		// Start line: 2889
		// Start offset: 0x800C903C
		// Variables:
	// 		int dx; // $a3
	// 		int dz; // $v1

		/* begin block 1.1 */
			// Start line: 2892
			// Start offset: 0x800C9074
			// Variables:
		// 		int dist; // $v0
		/* end block 1.1 */
		// End offset: 0x800C9094
		// End Line: 2895
	/* end block 1 */
	// End offset: 0x800C9094
	// End Line: 2895

	/* begin block 2 */
		// Start line: 6776
	/* end block 2 */
	// End Line: 6777

	/* begin block 3 */
		// Start line: 6800
	/* end block 3 */
	// End Line: 6801

	/* begin block 4 */
		// Start line: 6800
	/* end block 4 */
	// End Line: 6801

	/* begin block 5 */
		// Start line: 6801
	/* end block 5 */
	// End Line: 6802

	/* begin block 6 */
		// Start line: 6801
	/* end block 6 */
	// End Line: 6802

int Draw_CircleClip__FP8coorddefT0i(coorddef *pt1,coorddef *pt2,int r)

{
  int iVar1;
  int iVar2;
  
  iVar2 = pt1->x - pt2->x;
  if (iVar2 < 1) {
    iVar2 = pt2->x - pt1->x;
  }
  iVar1 = pt1->z - pt2->z;
  if (iVar1 < 1) {
    iVar1 = pt2->z - pt1->z;
  }
  if (iVar1 < iVar2) {
    iVar2 = iVar2 + (iVar1 >> 2);
  }
  else {
    iVar2 = iVar1 + (iVar2 >> 2);
  }
  return (uint)(iVar2 < r);
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw_kCtrlSkidmark__FP18Draw_tCtrlSkidmark(struct Draw_tCtrlSkidmark *fskid /*stack 0*/)
 // line 2900, offset 0x800c909c
	/* begin block 1 */
		// Start line: 2901
		// Start offset: 0x800C909C
		// Variables:
	// 		int ccount; // $s5
	// 		struct matrixtdef *m; // $s4
	// 		struct coorddef *t; // $s6
	// 		struct Draw_DCache *sd; // $s1

		/* begin block 1.1 */
			// Start line: 2901
			// Start offset: 0x800C909C
			// Variables:
		// 		int r0; // $v1
		// 		int r1; // $a0
		// 		int r2; // $a1
		/* end block 1.1 */
		// End offset: 0x800C909C
		// End Line: 2901

		/* begin block 1.2 */
			// Start line: 2901
			// Start offset: 0x800C909C
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.2 */
		// End offset: 0x800C909C
		// End Line: 2901

		/* begin block 1.3 */
			// Start line: 2901
			// Start offset: 0x800C909C
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.3 */
		// End offset: 0x800C909C
		// End Line: 2901

		/* begin block 1.4 */
			// Start line: 2933
			// Start offset: 0x800C9174
			// Variables:
		// 		struct Skidmark_Chunk *sm; // $s2

			/* begin block 1.4.1 */
				// Start line: 2935
				// Start offset: 0x800C9184

				/* begin block 1.4.1.1 */
					// Start line: 2938
					// Start offset: 0x800C91C8

					/* begin block 1.4.1.1.1 */
						// Start line: 2939
						// Start offset: 0x800C91C8
						// Variables:
					// 		struct coorddef td; // stack offset -72
					// 		struct coorddef ts; // stack offset -56
					/* end block 1.4.1.1.1 */
					// End offset: 0x800C91C8
					// End Line: 2942

					/* begin block 1.4.1.1.2 */
						// Start line: 2942
						// Start offset: 0x800C91C8
						// Variables:
					// 		int count; // $s0
					// 		int i; // $t7

						/* begin block 1.4.1.1.2.1 */
							// Start line: 2942
							// Start offset: 0x800C91C8

							/* begin block 1.4.1.1.2.1.1 */
								// Start line: 2962
								// Start offset: 0x800C9284
								// Variables:
							// 		struct POLY_GT4 *prim; // $a2

								/* begin block 1.4.1.1.2.1.1.1 */
									// Start line: 2971
									// Start offset: 0x800C92BC

									/* begin block 1.4.1.1.2.1.1.1.1 */
										// Start line: 2989
										// Start offset: 0x800C9438
										// Variables:
									// 		int type; // $t0
									// 		struct Draw_tPixMap *pmx; // $a3
									// 		int save_pre_otz; // $t2

										/* begin block 1.4.1.1.2.1.1.1.1.1 */
											// Start line: 3019
											// Start offset: 0x800C950C
											// Variables:
										// 		unsigned long l0; // $v0
										// 		unsigned long l1; // $v1
										// 		unsigned long l2; // $a0
										// 		unsigned long l3; // $a1
										/* end block 1.4.1.1.2.1.1.1.1.1 */
										// End offset: 0x800C950C
										// End Line: 3019

										/* begin block 1.4.1.1.2.1.1.1.1.2 */
											// Start line: 3019
											// Start offset: 0x800C950C

											/* begin block 1.4.1.1.2.1.1.1.1.2.1 */
												// Start line: 3025
												// Start offset: 0x800C9548
												// Variables:
											// 		int depth_index; // $v1
											/* end block 1.4.1.1.2.1.1.1.1.2.1 */
											// End offset: 0x800C95A8
											// End Line: 3028
										/* end block 1.4.1.1.2.1.1.1.1.2 */
										// End offset: 0x800C95A8
										// End Line: 3028
									/* end block 1.4.1.1.2.1.1.1.1 */
									// End offset: 0x800C95E0
									// End Line: 3032
								/* end block 1.4.1.1.2.1.1.1 */
								// End offset: 0x800C95E0
								// End Line: 3032
							/* end block 1.4.1.1.2.1.1 */
							// End offset: 0x800C95E0
							// End Line: 3032
						/* end block 1.4.1.1.2.1 */
						// End offset: 0x800C95F0
						// End Line: 3035
					/* end block 1.4.1.1.2 */
					// End offset: 0x800C95F0
					// End Line: 3035
				/* end block 1.4.1.1 */
				// End offset: 0x800C95F0
				// End Line: 3035
			/* end block 1.4.1 */
			// End offset: 0x800C95F0
			// End Line: 3035
		/* end block 1.4 */
		// End offset: 0x800C95F0
		// End Line: 3035
	/* end block 1 */
	// End offset: 0x800C95F0
	// End Line: 3035

	/* begin block 2 */
		// Start line: 6820
	/* end block 2 */
	// End Line: 6821

	/* begin block 3 */
		// Start line: 6824
	/* end block 3 */
	// End Line: 6825

	/* begin block 4 */
		// Start line: 6824
	/* end block 4 */
	// End Line: 6825

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Draw_kCtrlSkidmark__FP18Draw_tCtrlSkidmark(Draw_tCtrlSkidmark *fskid)

{
  short sVar1;
  bool bVar2;
  uint *puVar3;
  undefined4 in_zero;
  undefined4 in_at;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  Draw_tPixMap *pDVar9;
  uint uVar10;
  coorddef *pcVar11;
  int iVar12;
  int iVar13;
  coorddef *pt1;
  int iVar14;
  int iVar15;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  
  iVar14 = fskid->count;
  _DAT_1f800014 = (fskid->m).m[0] >> 4 & 0xffffU | ((fskid->m).m[3] >> 4) << 0x10;
  _DAT_1f800018 = (fskid->m).m[6] >> 4 & 0xffffU | ((fskid->m).m[1] >> 4) << 0x10;
  _DAT_1f80001c = (fskid->m).m[4] >> 4 & 0xffffU | ((fskid->m).m[7] >> 4) << 0x10;
  _DAT_1f800020 = (fskid->m).m[2] >> 4 & 0xffffU | ((fskid->m).m[5] >> 4) << 0x10;
  _DAT_1f800024 = _DAT_1f800024 & 0xffff0000 | (fskid->m).m[8] >> 4 & 0xffffU;
  iVar5 = iVar14 * 0x2b0;
  do {
    do {
      iVar14 = iVar14 + -1;
      iVar15 = iVar5 + -0x2b0;
      if (iVar14 == -1) {
        return;
      }
      pt1 = (coorddef *)((int)&fskid->smp[-1].seg[0].svx[0].vx + iVar5);
      bVar2 = false;
      pvVar4 = BWorld_IsSliceInBuildList__Fi((int)*(short *)((int)&pt1[1].x + 2));
      if (pvVar4 != (void *)0x0) {
        iVar5 = Draw_CircleClip__FP8coorddefT0i(pt1,&fskid->t,(int)&DAT_00320000);
        bVar2 = iVar5 != 0;
      }
      iVar5 = iVar15;
    } while (!bVar2);
    local_38 = pt1->x - (fskid->t).x;
    local_34 = pt1->y - (fskid->t).y;
    local_30 = pt1->z - (fskid->t).z;
    transform(&local_38,(int *)fskid,&local_48);
    DAT_1f800028 = local_48 >> 6;
    DAT_1f80002c = local_44 >> 6;
    DAT_1f800030 = local_40 >> 6;
    setCopControlWord(2,0,_DAT_1f800014);
    setCopControlWord(2,0x800,_DAT_1f800018);
    setCopControlWord(2,0x1000,_DAT_1f80001c);
    setCopControlWord(2,0x1800,_DAT_1f800020);
    setCopControlWord(2,0x2000,_DAT_1f800024);
    setCopControlWord(2,0x2800,DAT_1f800028);
    setCopControlWord(2,0x3000,DAT_1f80002c);
    setCopControlWord(2,0x3800,DAT_1f800030);
    iVar13 = 0;
    iVar12 = 0x10;
    sVar1 = *(short *)&pt1[1].x;
    pcVar11 = pt1;
    while (puVar3 = DAT_1f800004, iVar5 = iVar15, iVar13 < (int)sVar1) {
      if ((DAT_1f800004 < DAT_1f800008) &&
         (puVar6 = (undefined4 *)((int)&pt1->x + iVar12), pcVar11[3].y != 0)) {
        setCopReg(2,in_zero,*puVar6);
        setCopReg(2,in_at,puVar6[1]);
        copFunction(2,0x180001);
        DAT_1f800098 = getCopReg(2,0x19);
        DAT_1f80009c = getCopReg(2,0x1a);
        DAT_1f8000a0 = getCopReg(2,0x1b);
        uVar7 = getCopReg(2,0xe);
        DAT_1f800004[2] = uVar7;
        setCopReg(2,in_zero,puVar6[2]);
        setCopReg(2,in_at,puVar6[3]);
        copFunction(2,0x180001);
        DAT_1f8000a8 = getCopReg(2,0x19);
        DAT_1f8000ac = getCopReg(2,0x1a);
        DAT_1f8000b0 = getCopReg(2,0x1b);
        setCopReg(2,in_zero,*(undefined4 *)(pcVar11[3].y + 8));
        setCopReg(2,in_at,*(undefined4 *)(pcVar11[3].y + 0xc));
        copFunction(2,0x180001);
        DAT_1f8000b8 = getCopReg(2,0x19);
        DAT_1f8000bc = getCopReg(2,0x1a);
        DAT_1f8000c0 = getCopReg(2,0x1b);
        setCopReg(2,in_zero,*(undefined4 *)pcVar11[3].y);
        setCopReg(2,in_at,((undefined4 *)pcVar11[3].y)[1]);
        copFunction(2,0x180001);
        DAT_1f8000c8 = getCopReg(2,0x19);
        DAT_1f8000cc = getCopReg(2,0x1a);
        DAT_1f8000d0 = getCopReg(2,0x1b);
        if (((DAT_1f800098 < DAT_1f8000a0) ||
            (((DAT_1f8000a8 < DAT_1f8000b0 || (DAT_1f8000b8 < DAT_1f8000c0)) ||
             (DAT_1f8000c8 < DAT_1f8000d0)))) &&
           ((((-DAT_1f800098 < DAT_1f8000a0 || (-DAT_1f8000a8 < DAT_1f8000b0)) ||
             (-DAT_1f8000b8 < DAT_1f8000c0)) || (-DAT_1f8000c8 < DAT_1f8000d0)))) {
          uVar10 = pcVar11[3].x;
          pDVar9 = (&gSkidMarkPixmap2)[uVar10 & 1];
          uVar7 = getCopReg(2,0xc);
          puVar3[5] = uVar7;
          uVar7 = getCopReg(2,0xd);
          puVar3[0xb] = uVar7;
          uVar7 = getCopReg(2,0xe);
          puVar3[8] = uVar7;
          copFunction(2,0x168002e);
          iVar5 = getCopReg(2,7);
          DAT_1f800094 = (iVar5 >> 5) + 0x32;
          if (DAT_1f800094 < 1) {
            return;
          }
          if (Draw_gViewOtSize + -3 < DAT_1f800094) {
            return;
          }
          if (uVar10 == 0) {
            puVar3[1] = pcVar11[2].z;
            puVar3[4] = pcVar11[2].z;
            puVar3[10] = *(uint *)(pcVar11[3].y + 0x10);
            puVar3[7] = *(uint *)(pcVar11[3].y + 0x10);
          }
          else {
            puVar3[1] = 0x404040;
            puVar3[4] = 0x404040;
            puVar3[10] = 0x404040;
            puVar3[7] = 0x404040;
          }
          *(undefined *)((int)puVar3 + 7) = 0x3e;
          *(undefined *)((int)puVar3 + 3) = 0xc;
          uVar7 = *(uint *)&pDVar9->u1;
          uVar10 = *(uint *)&pDVar9->u2;
          uVar8 = *(uint *)&pDVar9->u3;
          puVar3[3] = *(uint *)pDVar9;
          puVar3[6] = uVar7;
          puVar3[9] = uVar10;
          puVar3[0xc] = uVar8;
          if (*(short *)((int)puVar3 + 0xe) == -1) {
            iVar5 = ((iVar5 >> 5) - (int)DAT_1f8000dc) * 0x10 >> ((uint)DAT_1f8000de & 0x1f);
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            else {
              if (0xf < iVar5) {
                iVar5 = 0xf;
              }
            }
            *(short *)((int)puVar3 + 0xe) = gClutDepth[(uint)pDVar9->pad2 * 0x10 + iVar5];
          }
          iVar5 = DAT_1f800000 + DAT_1f800094 * 4;
          uVar7 = iVar5 + 2;
          uVar10 = uVar7 & 3;
          uVar8 = (int)DAT_1f800004 << 8;
          puVar3 = DAT_1f800004 + 0xd;
          *DAT_1f800004 =
               (*(int *)(uVar7 - uVar10) << (3 - uVar10) * 8 |
               (uint)(DAT_1f800004 + 0xd) & 0xffffffffU >> (uVar10 + 1) * 8) >> 8 | 0xc000000;
          DAT_1f800004 = puVar3;
          uVar7 = iVar5 + 2;
          uVar10 = uVar7 & 3;
          puVar3 = (uint *)(uVar7 - uVar10);
          *puVar3 = *puVar3 & -1 << (uVar10 + 1) * 8 | uVar8 >> (3 - uVar10) * 8;
        }
      }
      pcVar11 = (coorddef *)&pcVar11[2].y;
      iVar12 = iVar12 + 0x1c;
      iVar13 = iVar13 + 1;
    }
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_SetUpSubdividFacet_Line__FP25Draw_tGiveShelbyMoreCache(struct Draw_tGiveShelbyMoreCache *sd /*$s4*/)
 // line 3049, offset 0x800c9620
	/* begin block 1 */
		// Start line: 3050
		// Start offset: 0x800C9620
		// Variables:
	// 		struct Draw_SVertex *v0; // $s3
	// 		struct Draw_SVertex *v1; // $s2
	// 		struct Draw_SVertex *v2; // $s0
	// 		struct Draw_SVertex *v3; // $s1
	// 		struct POLY_GT4 *prim; // $v1

		/* begin block 1.1 */
			// Start line: 3050
			// Start offset: 0x800C9620
			// Variables:
		// 		long a; // $v0
		// 		long b; // $a0
		/* end block 1.1 */
		// End offset: 0x800C9620
		// End Line: 3050

		/* begin block 1.2 */
			// Start line: 3050
			// Start offset: 0x800C9620
			// Variables:
		// 		unsigned short a; // $v0
		// 		unsigned short b; // $a0
		// 		unsigned short c; // $a1
		// 		unsigned short d; // $v1
		/* end block 1.2 */
		// End offset: 0x800C9620
		// End Line: 3050
	/* end block 1 */
	// End offset: 0x800C9874
	// End Line: 3104

	/* begin block 2 */
		// Start line: 7237
	/* end block 2 */
	// End Line: 7238

	/* begin block 3 */
		// Start line: 7248
	/* end block 3 */
	// End Line: 7249

	/* begin block 4 */
		// Start line: 7248
	/* end block 4 */
	// End Line: 7249

void DrawW_SetUpSubdividFacet_Line__FP25Draw_tGiveShelbyMoreCache(Draw_tGiveShelbyMoreCache *sd)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 in_v1;
  Draw_SVertex *pDVar8;
  undefined4 uVar9;
  VECTOR *dv;
  Draw_SVertex *v;
  Draw_SVertex *v_00;
  Draw_SVertex *v_01;
  Draw_SVertex *v_02;
  
  v_02 = &sd->v0;
  v_01 = &sd->v1;
  v = &sd->v2;
  v_00 = &sd->v3;
  DrawW_LoadPrecVECTOR__FP12Draw_SVertexP6VECTOR(v_02,&sd->tVn0);
  DrawW_LoadPrecVECTOR__FP12Draw_SVertexP6VECTOR(v_01,&sd->tVn1);
  DrawW_LoadPrecVECTOR__FP12Draw_SVertexP6VECTOR(v,&sd->tVn2);
  dv = &sd->tVn3;
  pDVar8 = v_00;
  DrawW_LoadPrecVECTOR__FP12Draw_SVertexP6VECTOR(v_00,dv);
  setCopReg(2,in_zero,*(undefined4 *)v_02);
  setCopReg(2,in_at,*(undefined4 *)&(sd->v0).vz);
  copFunction(2,0x180001);
  puVar6 = (undefined4 *)&(sd->v0).dvx;
  uVar7 = getCopReg(2,0xe);
  *puVar6 = uVar7;
  setCopReg(2,in_zero,*(undefined4 *)v_01);
  setCopReg(2,in_at,*(undefined4 *)&(sd->v1).vz);
  setCopReg(2,puVar6,*(undefined4 *)v);
  setCopReg(2,in_v1,*(undefined4 *)&(sd->v2).vz);
  setCopReg(2,pDVar8,*(undefined4 *)v_00);
  setCopReg(2,dv,*(undefined4 *)&(sd->v3).vz);
  copFunction(2,0x280030);
  uVar7 = *(undefined4 *)&(sd->GT4Prim).r1;
  uVar9 = *(undefined4 *)&(sd->GT4Prim).r0;
  *(undefined4 *)&(sd->v2).r = uVar7;
  *(undefined4 *)&(sd->v1).r = uVar7;
  *(undefined4 *)&(sd->v3).r = uVar9;
  *(undefined4 *)&(sd->v0).r = uVar9;
  uVar7 = getCopReg(2,0xc);
  *(undefined4 *)&(sd->v1).dvx = uVar7;
  uVar7 = getCopReg(2,0xd);
  *(undefined4 *)&(sd->v2).dvx = uVar7;
  uVar7 = getCopReg(2,0xe);
  *(undefined4 *)&(sd->v3).dvx = uVar7;
  uVar3 = *(undefined2 *)&(sd->GT4Prim).u1;
  uVar4 = *(undefined2 *)&(sd->GT4Prim).u3;
  uVar5 = *(undefined2 *)&(sd->GT4Prim).u2;
  *(undefined2 *)&(sd->v0).u = *(undefined2 *)&(sd->GT4Prim).u0;
  *(undefined2 *)&(sd->v1).u = uVar3;
  *(undefined2 *)&(sd->v2).u = uVar4;
  *(undefined2 *)&(sd->v3).u = uVar5;
  sVar1 = (sd->v0).dvx;
  (sd->v0).a = '\0';
  if (sVar1 < 0x3e9) {
    sVar2 = (sd->v0).dvy;
    if ((((1000 < sVar2) || (sVar1 < -1000)) || (sVar2 < -1000)) || ((sd->v0).vz < 0x65))
    goto LAB_800c9768;
  }
  else {
LAB_800c9768:
    (sd->v0).a = '\x01';
  }
  sVar1 = (sd->v1).dvx;
  (sd->v1).a = '\0';
  if (sVar1 < 0x3e9) {
    sVar2 = (sd->v1).dvy;
    if (((1000 < sVar2) || (sVar1 < -1000)) || ((sVar2 < -1000 || ((sd->v1).vz < 0x65))))
    goto LAB_800c97c0;
  }
  else {
LAB_800c97c0:
    (sd->v1).a = '\x01';
  }
  sVar1 = (sd->v2).dvx;
  (sd->v2).a = '\0';
  if (sVar1 < 0x3e9) {
    sVar2 = (sd->v2).dvy;
    if (((1000 < sVar2) || (sVar1 < -1000)) || ((sVar2 < -1000 || ((sd->v2).vz < 0x65))))
    goto LAB_800c9818;
  }
  else {
LAB_800c9818:
    (sd->v2).a = '\x01';
  }
  sVar1 = (sd->v3).dvx;
  (sd->v3).a = '\0';
  if (sVar1 < 0x3e9) {
    sVar2 = (sd->v3).dvy;
    if ((((sVar2 < 0x3e9) && (-0x3e9 < sVar1)) && (-0x3e9 < sVar2)) && (100 < (sd->v3).vz))
    goto LAB_800c9878;
  }
  (sd->v3).a = '\x01';
LAB_800c9878:
  DrawW_SubdividFacet__FP25Draw_tGiveShelbyMoreCacheiP12Draw_SVertexN32ss(sd,0,v_02,v_01,v,v_00,0,0)
  ;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_OnyxLinePrim__FP8CCOORD16P8Trk_LineiP25Draw_tGiveShelbyMoreCache(struct CCOORD16 *geomVertices /*$s3*/, struct Trk_Line *lineQuad /*$s6*/, int count /*stack 8*/, struct Draw_tGiveShelbyMoreCache *sd /*$s1*/)
 // line 3108, offset 0x800c98b8
	/* begin block 1 */
		// Start line: 3109
		// Start offset: 0x800C98B8
		// Variables:
	// 		struct POLY_GT4 *prim; // $s0
	// 		int lineQuadCount; // $fp
	// 		struct Draw_tPixMap *pmx; // $s4
	// 		struct CCOORD16 vt0; // stack offset -104
	// 		struct CCOORD16 vt1; // stack offset -96
	// 		struct CCOORD16 vt2; // stack offset -88
	// 		struct CCOORD16 vt3; // stack offset -80

		/* begin block 1.1 */
			// Start line: 3123
			// Start offset: 0x800C990C

			/* begin block 1.1.1 */
				// Start line: 3125
				// Start offset: 0x800C9924
				// Variables:
			// 		int linetype; // $v0
				// Labels:
				//		0x00005028	loopbot

				/* begin block 1.1.1.1 */
					// Start line: 3129
					// Start offset: 0x800C994C
					// Variables:
				// 		int t1; // $a0
				// 		int t2; // $a1
				/* end block 1.1.1.1 */
				// End offset: 0x800C994C
				// End Line: 3129

				/* begin block 1.1.1.2 */
					// Start line: 3129
					// Start offset: 0x800C994C

					/* begin block 1.1.1.2.1 */
						// Start line: 3183
						// Start offset: 0x800C9B14
						// Variables:
					// 		int doSubdivision; // stack offset -44
					// 		int save_pre_otz; // $s7
					// 		int depthcue; // stack offset -52

						/* begin block 1.1.1.2.1.1 */
							// Start line: 3184
							// Start offset: 0x800C9B14
							// Variables:
						// 		long bfct; // stack offset -56
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x800C9B84
						// End Line: 3200

						/* begin block 1.1.1.2.1.2 */
							// Start line: 3226
							// Start offset: 0x800C9C14

							/* begin block 1.1.1.2.1.2.1 */
								// Start line: 3230
								// Start offset: 0x800C9C2C

								/* begin block 1.1.1.2.1.2.1.1 */
									// Start line: 3231
									// Start offset: 0x800C9C2C

									/* begin block 1.1.1.2.1.2.1.1.1 */
										// Start line: 3232
										// Start offset: 0x800C9C34
										// Variables:
									// 		struct VECTOR temp0; // stack offset -72
									/* end block 1.1.1.2.1.2.1.1.1 */
									// End offset: 0x800C9CDC
									// End Line: 3244
								/* end block 1.1.1.2.1.2.1.1 */
								// End offset: 0x800C9CDC
								// End Line: 3244

								/* begin block 1.1.1.2.1.2.1.2 */
									// Start line: 3247
									// Start offset: 0x800C9CDC

									/* begin block 1.1.1.2.1.2.1.2.1 */
										// Start line: 3248
										// Start offset: 0x800C9CF0
										// Variables:
									// 		struct VECTOR temp0; // stack offset -72
									/* end block 1.1.1.2.1.2.1.2.1 */
									// End offset: 0x800C9D90
									// End Line: 3260
								/* end block 1.1.1.2.1.2.1.2 */
								// End offset: 0x800C9D90
								// End Line: 3260

								/* begin block 1.1.1.2.1.2.1.3 */
									// Start line: 3263
									// Start offset: 0x800C9D90
									// Variables:
								// 		long a; // $v1
								// 		long b; // $v0
								/* end block 1.1.1.2.1.2.1.3 */
								// End offset: 0x800C9D90
								// End Line: 3264
							/* end block 1.1.1.2.1.2.1 */
							// End offset: 0x800C9D90
							// End Line: 3264

							/* begin block 1.1.1.2.1.2.2 */
								// Start line: 3276
								// Start offset: 0x800C9E14
								// Variables:
							// 		struct CVECTOR a; // stack offset -72
							/* end block 1.1.1.2.1.2.2 */
							// End offset: 0x800C9ED4
							// End Line: 3284
						/* end block 1.1.1.2.1.2 */
						// End offset: 0x800C9ED4
						// End Line: 3284

						/* begin block 1.1.1.2.1.3 */
							// Start line: 3288
							// Start offset: 0x800C9ED4
							// Variables:
						// 		unsigned long l0; // $v0
						// 		unsigned long l1; // $v1
						// 		unsigned long l2; // $a0
						// 		unsigned long l3; // $a1
						/* end block 1.1.1.2.1.3 */
						// End offset: 0x800C9ED4
						// End Line: 3288

						/* begin block 1.1.1.2.1.4 */
							// Start line: 3288
							// Start offset: 0x800C9ED4

							/* begin block 1.1.1.2.1.4.1 */
								// Start line: 3294
								// Start offset: 0x800C9F10
								// Variables:
							// 		int depth_index; // $a1
							/* end block 1.1.1.2.1.4.1 */
							// End offset: 0x800C9F68
							// End Line: 3297
						/* end block 1.1.1.2.1.4 */
						// End offset: 0x800C9F68
						// End Line: 3297
					/* end block 1.1.1.2.1 */
					// End offset: 0x800CA050
					// End Line: 3320
				/* end block 1.1.1.2 */
				// End offset: 0x800CA050
				// End Line: 3320
			/* end block 1.1.1 */
			// End offset: 0x800CA050
			// End Line: 3325
		/* end block 1.1 */
		// End offset: 0x800CA064
		// End Line: 3329
	/* end block 1 */
	// End offset: 0x800CA074
	// End Line: 3331

	/* begin block 2 */
		// Start line: 7382
	/* end block 2 */
	// End Line: 7383

	/* begin block 3 */
		// Start line: 7387
	/* end block 3 */
	// End Line: 7388

	/* begin block 4 */
		// Start line: 7387
	/* end block 4 */
	// End Line: 7388

void DrawW_OnyxLinePrim__FP8CCOORD16P8Trk_LineiP25Draw_tGiveShelbyMoreCache
               (CCOORD16 *geomVertices,Trk_Line *lineQuad,int count,Draw_tGiveShelbyMoreCache *sd)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  CCOORD16 *pCVar5;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar6;
  CVECTOR CVar7;
  int iVar8;
  CVECTOR CVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  Draw_tGiveShelbyMoreCache *pDVar14;
  ulong *puVar15;
  POLY_GT4 *pPVar16;
  Draw_tPixMap *pDVar17;
  int iVar18;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  VECTOR local_48;
  int local_38;
  undefined4 local_34;
  int *local_30;
  uint local_2c;
  
  iVar18 = 0;
  local_30 = &sd->otz;
  sd->offsubdivid = 0x200;
  pDVar14 = (Draw_tGiveShelbyMoreCache *)count;
  while (pCVar5 = geomVertices, iVar18 < count + -1) {
    while ((iVar18 < count + -1 && (lineQuad->type != -1))) {
      pDVar17 = gDLPixmap10[(uint)lineQuad->type];
      uVar11 = *(undefined4 *)(pCVar5 + 1);
      uVar13 = *(undefined4 *)&geomVertices[1].z;
      uVar12 = *(undefined4 *)geomVertices;
      local_54 = *(undefined4 *)&pCVar5->z;
      local_50 = *(undefined4 *)(pCVar5 + 2);
      local_4c = *(undefined4 *)&geomVertices[2].z;
      setCopReg(2,in_zero,*(undefined4 *)(pCVar5 + 3));
      setCopReg(2,in_at,*(undefined4 *)&geomVertices[3].z);
      copFunction(2,0x180001);
      lVar2 = getCopReg(2,0x19);
      (sd->tVn0).vx = lVar2;
      lVar2 = getCopReg(2,0x1a);
      (sd->tVn0).vy = lVar2;
      lVar2 = getCopReg(2,0x1b);
      (sd->tVn0).vz = lVar2;
      iVar6 = DAT_1f800004;
      uVar10 = getCopReg(2,0xe);
      *(undefined4 *)(DAT_1f800004 + 8) = uVar10;
      setCopReg(2,in_zero,uVar11);
      setCopReg(2,in_at,uVar13);
      copFunction(2,0x180001);
      lVar2 = getCopReg(2,0x19);
      (sd->tVn1).vx = lVar2;
      lVar2 = getCopReg(2,0x1a);
      (sd->tVn1).vy = lVar2;
      lVar2 = getCopReg(2,0x1b);
      (sd->tVn1).vz = lVar2;
      setCopReg(2,in_zero,uVar12);
      setCopReg(2,in_at,local_54);
      copFunction(2,0x180001);
      lVar2 = getCopReg(2,0x19);
      (sd->tVn2).vx = lVar2;
      lVar2 = getCopReg(2,0x1a);
      (sd->tVn2).vy = lVar2;
      lVar2 = getCopReg(2,0x1b);
      (sd->tVn2).vz = lVar2;
      setCopReg(2,in_zero,local_50);
      setCopReg(2,in_at,local_4c);
      copFunction(2,0x180001);
      lVar2 = getCopReg(2,0x19);
      (sd->tVn3).vx = lVar2;
      lVar2 = getCopReg(2,0x1a);
      (sd->tVn3).vy = lVar2;
      lVar2 = getCopReg(2,0x1b);
      (sd->tVn3).vz = lVar2;
      if ((((sd->tVn0).vx < (sd->tVn0).vz) ||
          ((((sd->tVn1).vx < (sd->tVn1).vz || ((sd->tVn2).vx < (sd->tVn2).vz)) ||
           ((sd->tVn3).vx < (sd->tVn3).vz)))) &&
         ((((-(sd->tVn0).vx < (sd->tVn0).vz || (-(sd->tVn1).vx < (sd->tVn1).vz)) ||
           (-(sd->tVn2).vx < (sd->tVn2).vz)) || (-(sd->tVn3).vx < (sd->tVn3).vz)))) {
        uVar10 = getCopReg(2,0xc);
        *(undefined4 *)(iVar6 + 0x14) = uVar10;
        uVar10 = getCopReg(2,0xd);
        *(undefined4 *)(iVar6 + 0x2c) = uVar10;
        uVar10 = getCopReg(2,0xe);
        *(undefined4 *)(iVar6 + 0x20) = uVar10;
        copFunction(2,0x168002e);
        iVar6 = getCopReg(2,7);
        *local_30 = iVar6;
        copFunction(2,0x1400006);
        local_38 = getCopReg(2,0x18);
        if ((sd->head).mirror == 1) {
          local_38 = -local_38;
        }
        if (-1 < local_38) {
          iVar6 = sd->otz;
          iVar8 = (iVar6 >> 1) + 0x4b;
          local_2c = (uint)(iVar6 < 200);
          sd->otz = iVar8;
          if ((0 < iVar8) && (iVar8 <= Draw_gViewOtSize + -3)) {
            if (iVar6 < 200) {
              pPVar16 = &sd->GT4Prim;
            }
            else {
              pPVar16 = (POLY_GT4 *)(sd->head).cprim.PrimPtr;
              puVar15 = (sd->head).cprim.LastPrim + *local_30;
              *(POLY_GT4 **)&(sd->head).cprim.PrimPtr = pPVar16 + 1;
              uVar1 = (int)puVar15 + 2;
              uVar3 = uVar1 & 3;
              pPVar16->tag = (*(int *)(uVar1 - uVar3) << (3 - uVar3) * 8 |
                             (uint)(pPVar16 + 1) & 0xffffffffU >> (uVar3 + 1) * 8) >> 8 | 0xc000000;
              uVar1 = (int)puVar15 + 2;
              uVar3 = uVar1 & 3;
              puVar4 = (uint *)(uVar1 - uVar3);
              *puVar4 = *puVar4 & -1 << (uVar3 + 1) * 8 |
                        (uint)((int)pPVar16 << 8) >> (3 - uVar3) * 8;
            }
            local_34 = getCopReg(2,8);
            if (sd->nightFlags == 0) {
              local_4c._2_2_ = (short)((uint)local_4c >> 0x10);
              setCopReg(2,pDVar14,Chunk_lightTable[(int)local_4c._2_2_]);
              setCopReg(2,0x4000,local_34);
              copFunction(2,0x780010);
              uVar10 = getCopReg(2,0x16);
              *(undefined4 *)&pPVar16->r2 = uVar10;
              *(undefined4 *)&pPVar16->r0 = *(undefined4 *)&pPVar16->r2;
              local_54._2_2_ = (short)((uint)local_54 >> 0x10);
              local_48.vx = Chunk_lightTable[(int)local_54._2_2_];
              setCopReg(2,pDVar14,local_48.vx);
              setCopReg(2,0x4000,local_34);
              copFunction(2,0x780010);
              uVar10 = getCopReg(2,0x16);
              *(undefined4 *)&pPVar16->r3 = uVar10;
              *(undefined4 *)&pPVar16->r1 = *(undefined4 *)&pPVar16->r3;
            }
            else {
              if ((sd->nightFlags & 1U) != 0) {
                setCopControlWord(2,0,*(undefined4 *)(sd->matNight).m);
                setCopControlWord(2,0x800,*(undefined4 *)((sd->matNight).m + 2));
                setCopControlWord(2,0x1000,*(undefined4 *)((sd->matNight).m + 4));
                setCopControlWord(2,0x1800,*(undefined4 *)((sd->matNight).m + 6));
                setCopControlWord(2,0x2000,*(undefined4 *)((sd->matNight).m + 8));
                setCopControlWord(2,0x2800,(sd->matNight).t[0]);
                setCopControlWord(2,0x3000,(sd->matNight).t[1]);
                setCopControlWord(2,0x3800,(sd->matNight).t[2]);
                setCopReg(2,in_zero,uVar12);
                setCopReg(2,in_at,local_54);
                copFunction(2,0x480012);
                local_48.vx = (CVECTOR)getCopReg(2,0x19);
                local_48.vy = getCopReg(2,0x1a);
                local_48.vz = getCopReg(2,0x1b);
                setCopReg(2,in_zero,local_50);
                setCopReg(2,in_at,local_4c);
                copFunction(2,0x480012);
                Night_NightCalc__FP6VECTORPsP25Draw_tGiveShelbyMoreCache
                          (&local_48,(short *)((int)&local_54 + 2),sd);
                local_48.vx = (CVECTOR)getCopReg(2,0x19);
                local_48.vy = getCopReg(2,0x1a);
                local_48.vz = getCopReg(2,0x1b);
                pDVar14 = sd;
                Night_NightCalc__FP6VECTORPsP25Draw_tGiveShelbyMoreCache
                          (&local_48,(short *)((int)&local_4c + 2),sd);
              }
              if (BW_gCopCarObj != (Car_tObj *)0x0) {
                setCopControlWord(2,0,*(undefined4 *)(sd->matCop).m);
                setCopControlWord(2,0x800,*(undefined4 *)((sd->matCop).m + 2));
                setCopControlWord(2,0x1000,*(undefined4 *)((sd->matCop).m + 4));
                setCopControlWord(2,0x1800,*(undefined4 *)((sd->matCop).m + 6));
                setCopControlWord(2,0x2000,*(undefined4 *)((sd->matCop).m + 8));
                setCopControlWord(2,0x2800,(sd->matCop).t[0]);
                setCopControlWord(2,0x3000,(sd->matCop).t[1]);
                setCopControlWord(2,0x3800,(sd->matCop).t[2]);
                setCopReg(2,in_zero,uVar12);
                setCopReg(2,in_at,local_54);
                copFunction(2,0x480012);
                local_48.vx = (CVECTOR)getCopReg(2,0x19);
                local_48.vy = getCopReg(2,0x1a);
                local_48.vz = getCopReg(2,0x1b);
                setCopReg(2,in_zero,local_50);
                setCopReg(2,in_at,local_4c);
                copFunction(2,0x480012);
                Night_NightCopCalc__FP6VECTORPs(&local_48,(short *)((int)&local_54 + 2));
                local_48.vx = (CVECTOR)getCopReg(2,0x19);
                local_48.vy = getCopReg(2,0x1a);
                local_48.vz = getCopReg(2,0x1b);
                Night_NightCopCalc__FP6VECTORPs(&local_48,(short *)((int)&local_4c + 2));
              }
              CVar7 = Chunk_lightTable[(int)local_54._2_2_];
              CVar9 = Chunk_lightTable[(int)local_4c._2_2_];
              *(CVECTOR *)&pPVar16->r3 = CVar7;
              *(CVECTOR *)&pPVar16->r1 = CVar7;
              *(CVECTOR *)&pPVar16->r2 = CVar9;
              *(CVECTOR *)&pPVar16->r0 = CVar9;
              setCopControlWord(2,0,*(undefined4 *)(sd->matB).m);
              setCopControlWord(2,0x800,*(undefined4 *)((sd->matB).m + 2));
              setCopControlWord(2,0x1000,*(undefined4 *)((sd->matB).m + 4));
              setCopControlWord(2,0x1800,*(undefined4 *)((sd->matB).m + 6));
              setCopControlWord(2,0x2000,*(undefined4 *)((sd->matB).m + 8));
              setCopControlWord(2,0x2800,(sd->matB).t[0]);
              setCopControlWord(2,0x3000,(sd->matB).t[1]);
              setCopControlWord(2,0x3800,(sd->matB).t[2]);
            }
            pPVar16->code = '>';
            *(undefined *)((int)&pPVar16->tag + 3) = 0xc;
            uVar10 = *(undefined4 *)&pDVar17->u1;
            uVar11 = *(undefined4 *)&pDVar17->u2;
            uVar12 = *(undefined4 *)&pDVar17->u3;
            *(undefined4 *)&pPVar16->u0 = *(undefined4 *)pDVar17;
            *(undefined4 *)&pPVar16->u1 = uVar10;
            *(undefined4 *)&pPVar16->u2 = uVar11;
            *(undefined4 *)&pPVar16->u3 = uVar12;
            if (pPVar16->clut == 0xffff) {
              iVar6 = ((iVar6 >> 1) - (int)sd->startfog) * 0x10 >> ((int)sd->distfog & 0x1fU);
              if (iVar6 < 0) {
                iVar6 = 0;
              }
              else {
                if (0xf < iVar6) {
                  iVar6 = 0xf;
                }
              }
              pPVar16->clut = gClutDepth[(uint)pDVar17->pad2 * 0x10 + iVar6];
            }
            if (local_2c != 0) {
              setCopControlWord(2,0,*(undefined4 *)(sd->identMat).m);
              setCopControlWord(2,0x800,*(undefined4 *)((sd->identMat).m + 2));
              setCopControlWord(2,0x1000,*(undefined4 *)((sd->identMat).m + 4));
              setCopControlWord(2,0x1800,*(undefined4 *)((sd->identMat).m + 6));
              setCopControlWord(2,0x2000,*(undefined4 *)((sd->identMat).m + 8));
              setCopControlWord(2,0x2800,(sd->identMat).t[0]);
              setCopControlWord(2,0x3000,(sd->identMat).t[1]);
              setCopControlWord(2,0x3800,(sd->identMat).t[2]);
              if (stackSpeedUpEnbabledFlag == 0) {
                DrawW_SetUpSubdividFacet_Line__FP25Draw_tGiveShelbyMoreCache(sd);
              }
              else {
                gWSavePtr = SetSp();
                stackSpeedUpEnbabledFlag = 0;
                DrawW_SetUpSubdividFacet_Line__FP25Draw_tGiveShelbyMoreCache(sd);
                gWSavePtr = SetSp();
                stackSpeedUpEnbabledFlag = 1;
              }
              setCopControlWord(2,0,*(undefined4 *)(sd->matB).m);
              setCopControlWord(2,0x800,*(undefined4 *)((sd->matB).m + 2));
              setCopControlWord(2,0x1000,*(undefined4 *)((sd->matB).m + 4));
              setCopControlWord(2,0x1800,*(undefined4 *)((sd->matB).m + 6));
              setCopControlWord(2,0x2000,*(undefined4 *)((sd->matB).m + 8));
              setCopControlWord(2,0x2800,(sd->matB).t[0]);
              setCopControlWord(2,0x3000,(sd->matB).t[1]);
              setCopControlWord(2,0x3800,(sd->matB).t[2]);
            }
          }
        }
      }
      iVar18 = iVar18 + 1;
      lineQuad = lineQuad + 1;
      geomVertices = geomVertices + 2;
      pCVar5 = pCVar5 + 2;
    }
    iVar18 = iVar18 + 1;
    lineQuad = lineQuad + 1;
    geomVertices = geomVertices + 2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_BuildChunkCenterLineFacets__FP5ChunkP5GroupP25Draw_tGiveShelbyMoreCacheP7COORD16(struct Chunk *chunkDat /*$a0*/, struct Group *group /*$t9*/, struct Draw_tGiveShelbyMoreCache *sd /*$s3*/, struct COORD16 *trans /*$a3*/)
 // line 3344, offset 0x800ca0a4
	/* begin block 1 */
		// Start line: 3345
		// Start offset: 0x800CA0A4
		// Variables:
	// 		int i; // $t5
	// 		struct CCOORD16 *pts3d; // $t3
	// 		struct Trk_Line *lineQuad; // $t4
	// 		int slice; // $s2
	// 		short tx; // $t8
	// 		short ty; // $t7
	// 		short tz; // $t6
	// 		struct CCOORD16 *wpts; // $s0

		/* begin block 1.1 */
			// Start line: 3345
			// Start offset: 0x800CA0A4
			// Variables:
		// 		struct Group *this; // $v0

			/* begin block 1.1.1 */
				// Start line: 3345
				// Start offset: 0x800CA0A4
			/* end block 1.1.1 */
			// End offset: 0x800CA0A4
			// End Line: 3345
		/* end block 1.1 */
		// End offset: 0x800CA0A4
		// End Line: 3345

		/* begin block 1.2 */
			// Start line: 3345
			// Start offset: 0x800CA0A4

			/* begin block 1.2.1 */
				// Start line: 3359
				// Start offset: 0x800CA0F8
				// Variables:
			// 		struct CCOORD16 *pts; // $a2
			// 		short x; // $v1
			// 		short y; // $a0
			// 		short z; // $a1
			// 		short wx; // $t0
			// 		short wy; // $t1
			// 		short wz; // $a3
			/* end block 1.2.1 */
			// End offset: 0x800CA110
			// End Line: 3361
		/* end block 1.2 */
		// End offset: 0x800CA1D0
		// End Line: 3386
	/* end block 1 */
	// End offset: 0x800CA1D0
	// End Line: 3393

	/* begin block 2 */
		// Start line: 7917
	/* end block 2 */
	// End Line: 7918

	/* begin block 3 */
		// Start line: 7931
	/* end block 3 */
	// End Line: 7932

	/* begin block 4 */
		// Start line: 7931
	/* end block 4 */
	// End Line: 7932

void DrawW_BuildChunkCenterLineFacets__FP5ChunkP5GroupP25Draw_tGiveShelbyMoreCacheP7COORD16
               (Chunk *chunkDat,Group *group,Draw_tGiveShelbyMoreCache *sd,COORD16 *trans)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  bool bVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  int *piVar14;
  int *piVar15;
  Trk_NewSlice *pTVar16;
  Group *pGVar17;
  Trk_NewSlice *pTVar18;
  Group *pGVar19;
  short *psVar20;
  CCOORD16 *pCVar21;
  Group *pGVar22;
  int iVar23;
  
  pTVar16 = BWorldSm_slices;
  pCVar21 = &gVertex3d;
  pGVar22 = group + 1;
  iVar23 = 0;
  psVar20 = &gVertex3d.light;
  sVar3 = chunkDat->firstSimSliceInd;
  sVar4 = trans->x;
  sVar5 = trans->y;
  sVar6 = trans->z;
  pGVar17 = chunkDat->vertexBuf;
  while (bVar10 = iVar23 < group->m_num_elements << 1, iVar23 = iVar23 + 2, bVar10) {
    piVar14 = &pGVar22->m_num_elements;
    piVar15 = &pGVar22->m_num_elements;
    pGVar22 = pGVar22 + 1;
    pTVar18 = pTVar16 + (int)sVar3 + (uint)*(byte *)((int)piVar15 + 1);
    pGVar19 = pGVar17 + (uint)*(byte *)piVar14 * 2 + 1;
    bVar1 = pTVar18->right[1];
    bVar2 = pTVar18->right[2];
    sVar7 = *(short *)&pGVar19->m_num_elements;
    sVar8 = *(short *)((int)&pGVar19->m_num_elements + 2);
    sVar9 = *(short *)&pGVar19[1].m_num_elements;
    sVar11 = (short)((int)((uint)(byte)pTVar18->right[0] << 0x18) >> 0x1b);
    pCVar21->x = sVar4 + (sVar7 - sVar11);
    sVar12 = (short)((int)((uint)bVar1 << 0x18) >> 0x1b);
    psVar20[-2] = sVar5 + (sVar8 - sVar12);
    sVar13 = (short)((int)((uint)bVar2 << 0x18) >> 0x1b);
    psVar20[-1] = sVar6 + (sVar9 - sVar13);
    *psVar20 = *(short *)((int)&pGVar19[1].m_num_elements + 2);
    pCVar21[1].x = sVar4 + sVar7 + sVar11;
    psVar20[2] = sVar5 + sVar8 + sVar12;
    psVar20[3] = sVar6 + sVar9 + sVar13;
    pCVar21 = pCVar21 + 2;
    psVar20[4] = *(short *)((int)&pGVar19[1].m_num_elements + 2);
    psVar20 = psVar20 + 8;
  }
  DrawW_OnyxLinePrim__FP8CCOORD16P8Trk_LineiP25Draw_tGiveShelbyMoreCache
            (&gVertex3d,(Trk_Line *)(group + 1),group->m_num_elements,sd);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_DoLines__FP13DRender_tViewP11tBuildEntryP11Draw_DCache(struct DRender_tView *Vi /*$s0*/, struct tBuildEntry *buildList /*$a1*/, struct Draw_DCache *sd /*$s2*/)
 // line 3396, offset 0x800ca204
	/* begin block 1 */
		// Start line: 3397
		// Start offset: 0x800CA204
		// Variables:
	// 		int chunkCount; // stack offset -48

		/* begin block 1.1 */
			// Start line: 3397
			// Start offset: 0x800CA204
			// Variables:
		// 		int buildInd; // $s6

			/* begin block 1.1.1 */
				// Start line: 3404
				// Start offset: 0x800CA288
				// Variables:
			// 		struct Chunk *chunkDat; // $s4
			// 		int geomRez; // $v1

				/* begin block 1.1.1.1 */
					// Start line: 3409
					// Start offset: 0x800CA29C

					/* begin block 1.1.1.1.1 */
						// Start line: 3412
						// Start offset: 0x800CA2AC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 3413
							// Start offset: 0x800CA2AC
							// Variables:
						// 		struct Group *group; // $s5

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 3417
								// Start offset: 0x800CA2DC

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 3419
									// Start offset: 0x800CA2DC

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 3420
										// Start offset: 0x800CA2F0
										// Variables:
									// 		struct COORD16 trans; // stack offset -88

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 3422
											// Start offset: 0x800CA2F0

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 3423
												// Start offset: 0x800CA304
												// Variables:
											// 		struct coorddef tmp; // stack offset -80
											// 		struct coorddef tmp2; // stack offset -64
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x800CA478
											// End Line: 3452
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x800CA478
										// End Line: 3452

										/* begin block 1.1.1.1.1.1.1.1.1.2 */
											// Start line: 3454
											// Start offset: 0x800CA478
											// Variables:
										// 		struct coorddef *pChunkCp; // $a2
										/* end block 1.1.1.1.1.1.1.1.1.2 */
										// End offset: 0x800CA478
										// End Line: 3455
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800CA4E4
									// End Line: 3463
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800CA4E4
								// End Line: 3463
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800CA4E4
							// End Line: 3463
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800CA4E4
						// End Line: 3463
					/* end block 1.1.1.1.1 */
					// End offset: 0x800CA4E4
					// End Line: 3463
				/* end block 1.1.1.1 */
				// End offset: 0x800CA4E4
				// End Line: 3463
			/* end block 1.1.1 */
			// End offset: 0x800CA4E4
			// End Line: 3463
		/* end block 1.1 */
		// End offset: 0x800CA4F0
		// End Line: 3468
	/* end block 1 */
	// End offset: 0x800CA4F0
	// End Line: 3468

	/* begin block 2 */
		// Start line: 8088
	/* end block 2 */
	// End Line: 8089

	/* begin block 3 */
		// Start line: 8092
	/* end block 3 */
	// End Line: 8093

	/* begin block 4 */
		// Start line: 8092
	/* end block 4 */
	// End Line: 8093

void DrawW_DoLines__FP13DRender_tViewP11tBuildEntryP11Draw_DCache
               (DRender_tView *Vi,tBuildEntry *buildList,Draw_DCache *sd)

{
  byte bVar1;
  coorddef *pcVar2;
  Chunk *chunkDat;
  Group *group;
  int iVar3;
  COORD16 local_58;
  int local_50;
  int local_4c;
  int local_48;
  coorddef cStack64;
  int local_30;
  
  local_30 = BWorld_gChunkCount;
  sd->doublelayer = 0;
  (sd->matB).t[2] = 0;
  (sd->matB).t[1] = 0;
  (sd->matB).t[0] = 0;
  setCopControlWord(2,0x2800,(sd->matB).t[0]);
  setCopControlWord(2,0x3000,(sd->matB).t[1]);
  setCopControlWord(2,0x3800,(sd->matB).t[2]);
  iVar3 = 0;
  while (iVar3 < local_30) {
    if (buildList->geomRez == '\x04') {
      chunkDat = Track_chunkList + (int)buildList->chunkInd;
      group = chunkDat->lineBuf;
      if ((group != (Group *)0x0) && ((buildList->enableBits & 4U) != 0)) {
        if (gNight_renderNight != (uchar *)0x0) {
          bVar1 = *(byte *)((int)sd[1].matB.t + 2);
          *(byte *)((int)sd[1].matB.t + 2) = bVar1 | 4;
          if ((((&Cars_gList9)[Vi->player]->control).lights & 6U) != 0) {
            *(byte *)((int)sd[1].matB.t + 2) = bVar1 | 5;
          }
          local_50 = (Vi->cview).translation.x -
                     ((&Camera_gInfo.target)[Vi->player * 0x44]->position).x;
          local_4c = (Vi->cview).translation.y -
                     ((&Camera_gInfo.target)[Vi->player * 0x44]->position).y;
          local_48 = (Vi->cview).translation.z -
                     ((&Camera_gInfo.target)[Vi->player * 0x44]->position).z;
          transform(&local_50,(int *)&gNightMat,(int *)&cStack64);
          DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(&cStack64,&sd->matNight);
          if (BW_gCopCarObj != (Car_tObj *)0x0) {
            local_50 = (Vi->cview).translation.x - (BW_gCopCarObj->N).position.x;
            local_4c = (Vi->cview).translation.y - (BW_gCopCarObj->N).position.y;
            local_48 = (Vi->cview).translation.z - (BW_gCopCarObj->N).position.z;
            transform(&local_50,(int *)&gCopMat,(int *)&cStack64);
            DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(&cStack64,&sd->matCop);
          }
          (sd->matB).t[2] = 0;
          (sd->matB).t[1] = 0;
          (sd->matB).t[0] = 0;
          setCopControlWord(2,0x2800,(sd->matB).t[0]);
          setCopControlWord(2,0x3000,(sd->matB).t[1]);
          setCopControlWord(2,0x3800,(sd->matB).t[2]);
        }
        pcVar2 = Chunk_chunkCenters + (int)buildList->chunkInd;
        local_58.x = (short)(pcVar2->x - (Vi->cview).translation.x >> 10);
        local_58.y = (short)(pcVar2->y - (Vi->cview).translation.y >> 10);
        local_58.z = (short)(pcVar2->z - (Vi->cview).translation.z >> 10);
        DrawW_BuildChunkCenterLineFacets__FP5ChunkP5GroupP25Draw_tGiveShelbyMoreCacheP7COORD16
                  (chunkDat,group,(Draw_tGiveShelbyMoreCache *)sd,&local_58);
      }
    }
    buildList = buildList + 1;
    iVar3 = iVar3 + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawW_BuildSpikeBelt__FP13DRender_tViewiP11Draw_DCache(struct DRender_tView *Vi /*stack 0*/, int scale /*$s0*/, struct Draw_DCache *sd /*stack 8*/)
 // line 3692, offset 0x800ca520
	/* begin block 1 */
		// Start line: 3693
		// Start offset: 0x800CA520
		// Variables:
	// 		int i; // $t1
	// 		int j; // $a1
	// 		struct CCOORD16 vertex3d[27]; // stack offset -440
	// 		short wx; // $fp
	// 		short wy; // $s7
	// 		short wz; // $s6
	// 		short fx; // stack offset -88
	// 		short fy; // stack offset -80
	// 		short fz; // stack offset -72
	// 		short sx; // stack offset -64
	// 		short sy; // stack offset -56
	// 		short sz; // $t1
	// 		int slice; // $v0
	// 		struct coorddef *cp; // stack offset -48
	// 		struct Trk_Quad quads[16]; // stack offset -224
	// 		struct Track_tMaterial material; // stack offset -128

		/* begin block 1.1 */
			// Start line: 3776
			// Start offset: 0x800CA85C
			// Variables:
		// 		struct coorddef tmp; // stack offset -120
		// 		struct coorddef tmp2; // stack offset -104
		/* end block 1.1 */
		// End offset: 0x800CA85C
		// End Line: 3778
	/* end block 1 */
	// End offset: 0x800CA85C
	// End Line: 3778

	/* begin block 2 */
		// Start line: 8523
	/* end block 2 */
	// End Line: 8524

	/* begin block 3 */
		// Start line: 8748
	/* end block 3 */
	// End Line: 8749

	/* begin block 4 */
		// Start line: 8748
	/* end block 4 */
	// End Line: 8749

	/* begin block 5 */
		// Start line: 8754
	/* end block 5 */
	// End Line: 8755

void DrawW_BuildSpikeBelt__FP13DRender_tViewiP11Draw_DCache
               (DRender_tView *Vi,int scale,Draw_DCache *sd)

{
  short sVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  Trk_NewSlice *pTVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  short local_1b8;
  short local_1b6;
  short local_1b4;
  undefined2 local_1b2;
  short local_170;
  short local_16e;
  short local_16c;
  undefined2 local_16a;
  short local_128;
  short local_126;
  short local_124;
  undefined2 local_122;
  undefined2 local_e0 [48];
  undefined local_80;
  undefined local_7f;
  short local_7e;
  int local_78;
  int local_74;
  int local_70;
  coorddef cStack104;
  short local_58;
  short local_50;
  short local_48;
  short local_40;
  short local_38;
  Trk_NewSlice *local_30;
  
  iVar10 = gSpikeBeltSlice;
  local_30 = BWorldSm_slices + gSpikeBeltSlice;
  if (scale < 0) {
    scale = scale + 7;
  }
  scale = scale >> 3;
  uVar4 = fixedmult((int)local_30->right[0] << 9,scale);
  uVar5 = fixedmult((int)BWorldSm_slices[iVar10].right[1] << 9,scale);
  uVar6 = fixedmult((int)BWorldSm_slices[iVar10].right[2] << 9,scale);
  pTVar8 = BWorldSm_slices + iVar10;
  sVar14 = (short)((int)pTVar8->forward[0] >> 1);
  sVar13 = (short)((int)pTVar8->forward[1] >> 1);
  local_1b4 = (short)((int)pTVar8->forward[2] >> 1);
  local_58 = sVar14;
  local_50 = sVar13;
  local_48 = local_1b4;
  uVar7 = fixedmult(gSpikeBeltX,(int)pTVar8->right[0] << 9);
  local_1b8 = (short)((int)uVar7 >> 10);
  local_40 = local_1b8;
  uVar7 = fixedmult(gSpikeBeltX,(int)BWorldSm_slices[iVar10].right[1] << 9);
  local_1b6 = (short)((int)uVar7 >> 10);
  local_38 = local_1b6;
  uVar7 = fixedmult(gSpikeBeltX,(int)BWorldSm_slices[iVar10].right[2] << 9);
  iVar11 = 1;
  psVar9 = &local_1b8;
  local_1b8 = local_1b8 - sVar14;
  local_1b6 = local_1b6 - sVar13;
  local_16c = (short)((int)uVar7 >> 10);
  local_1b4 = local_16c - local_1b4;
  local_1b2 = 0;
  iVar10 = 0;
  do {
    psVar9 = psVar9 + 4;
    sVar14 = (short)(uVar4 >> 10);
    *psVar9 = *(short *)((int)&local_1b8 + iVar10) + sVar14;
    sVar1 = (short)(uVar5 >> 10);
    psVar9[1] = *(short *)((int)&local_1b8 + iVar10 + 2) + sVar1;
    sVar13 = *(short *)((int)&local_1b8 + iVar10 + 4);
    iVar11 = iVar11 + 1;
    psVar9[3] = 0;
    sVar2 = (short)(uVar6 >> 10);
    psVar9[2] = sVar13 + sVar2;
    iVar10 = iVar10 + 8;
  } while (iVar11 < 9);
  iVar11 = 1;
  iVar12 = 0x50;
  local_16a = 0;
  local_16e = local_38 + 0x19;
  local_170 = local_40;
  iVar10 = 0x48;
  do {
    *(short *)((int)&local_1b8 + iVar12) = *(short *)((int)&local_1b8 + iVar10) + sVar14;
    *(short *)((int)&local_1b8 + iVar12 + 2) = *(short *)((int)&local_1b8 + iVar10 + 2) + sVar1;
    sVar13 = *(short *)((int)&local_1b8 + iVar10 + 4);
    iVar11 = iVar11 + 1;
    *(undefined2 *)((int)&local_1b8 + iVar12 + 6) = 0;
    *(short *)((int)&local_1b8 + iVar12 + 4) = sVar13 + sVar2;
    iVar12 = iVar12 + 8;
    iVar10 = iVar10 + 8;
  } while (iVar11 < 9);
  iVar11 = 1;
  local_128 = local_40 + local_58;
  local_126 = local_38 + local_50;
  iVar12 = 0x98;
  local_122 = 0;
  local_124 = local_16c + local_48;
  iVar10 = 0x90;
  do {
    *(short *)((int)&local_1b8 + iVar12) = *(short *)((int)&local_1b8 + iVar10) + sVar14;
    *(short *)((int)&local_1b8 + iVar12 + 2) = *(short *)((int)&local_1b8 + iVar10 + 2) + sVar1;
    sVar13 = *(short *)((int)&local_1b8 + iVar10 + 4);
    iVar11 = iVar11 + 1;
    *(undefined2 *)((int)&local_1b8 + iVar12 + 6) = 0;
    *(short *)((int)&local_1b8 + iVar12 + 4) = sVar13 + sVar2;
    iVar12 = iVar12 + 8;
    iVar10 = iVar10 + 8;
  } while (iVar11 < 9);
  iVar11 = 0;
  iVar10 = 0;
  do {
    iVar11 = iVar11 + iVar10;
    iVar12 = iVar10 + 1;
    cVar3 = (char)iVar10;
    iVar10 = iVar10 + 8;
    *(char *)((int)local_e0 + iVar11 * 2 + 5) = cVar3;
    local_e0[iVar11] = 0;
    *(char *)(local_e0 + iVar11 + 1) = (char)iVar12;
    *(char *)((int)local_e0 + iVar11 * 2 + 3) = cVar3 + '\n';
    *(char *)(local_e0 + iVar11 + 2) = cVar3 + '\t';
    local_e0[iVar10 * 3] = 0;
    *(char *)((int)local_e0 + iVar10 * 6 + 3) = cVar3 + '\t';
    *(char *)(local_e0 + iVar10 * 3 + 2) = cVar3 + '\n';
    *(char *)((int)local_e0 + iVar10 * 6 + 5) = cVar3 + '\x13';
    *(char *)(local_e0 + iVar10 * 3 + 1) = cVar3 + '\x12';
    iVar11 = iVar12 * 2;
    iVar10 = iVar12;
  } while (iVar12 < 8);
  local_80 = 0;
  local_7f = 0;
  local_7e = (short)gInitialArt.shapeCount + -1;
  *(undefined *)((int)sd[1].matB.t + 2) = 0;
  local_78 = local_30->center[0] - (Vi->cview).translation.x;
  local_74 = local_30->center[1] - (Vi->cview).translation.y;
  local_70 = local_30->center[2] - (Vi->cview).translation.z;
  transform(&local_78,(int *)&gWorldMat,(int *)&cStack104);
  DrawW_WorldSetUpTranslation__FP8coorddefP6MATRIX(&cStack104,&sd->matB);
  *(short **)&sd[1].head.cprim.PrimPtr = &local_1b8;
  *(undefined *)((int)&sd[1].head.cprim.MPrimPtr + 3) = 0x10;
  *(undefined2 **)&sd[1].head.mirror = local_e0;
  *(undefined4 *)&sd[1].head.clipW = 0x23;
  *(undefined **)sd[1].matB.m = &local_80;
  *(undefined4 *)(sd[1].matB.m + 2) = 0;
  sd[1].matB.m[4] = 0;
  *(undefined *)((int)sd[1].matB.t + 3) = 0;
  sd->light = -1;
  DrawW_kCtrlWorld_High__FP25Draw_tGiveShelbyMoreCache((Draw_tGiveShelbyMoreCache *)sd);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DepthCue_Init__Fv()
 // line 3830, offset 0x800ca950
	/* begin block 1 */
		// Start line: 3831
		// Start offset: 0x800CA950
	/* end block 1 */
	// End offset: 0x800CA950
	// End Line: 3831

	/* begin block 2 */
		// Start line: 9175
	/* end block 2 */
	// End Line: 9176

	/* begin block 3 */
		// Start line: 9190
	/* end block 3 */
	// End Line: 9191

	/* begin block 4 */
		// Start line: 9190
	/* end block 4 */
	// End Line: 9191

/* WARNING: Unknown calling convention yet parameter storage is locked */

void DepthCue_Init__Fv(void)

{
  SetFogNear(TrackSpec_gSpec.depthcuespec.distance << 6,0xa0);
  SetFarColor((uint)TrackSpec_gSpec.depthcuespec.color.r,(uint)TrackSpec_gSpec.depthcuespec.color.g,
              (uint)TrackSpec_gSpec.depthcuespec.color.b);
  return;
}





