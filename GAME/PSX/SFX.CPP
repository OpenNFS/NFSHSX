#include "NFS4.H"
#include "SFX.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Sfx_Transform__FP8coorddefP7SVECTORT0(struct coorddef *worldpt /*$s1*/, struct SVECTOR *campt /*$s2*/, struct coorddef *t /*$s0*/)
 // line 40, offset 0x800dd050
	/* begin block 1 */
		// Start line: 41
		// Start offset: 0x800DD050
		// Variables:
	// 		struct SVECTOR pt; // stack offset -72
	// 		struct VECTOR campt32; // stack offset -64

		/* begin block 1.1 */
			// Start line: 41
			// Start offset: 0x800DD050
			// Variables:
		// 		struct MATRIX ident; // stack offset -48
		/* end block 1.1 */
		// End offset: 0x800DD050
		// End Line: 41
	/* end block 1 */
	// End offset: 0x800DD050
	// End Line: 41

/* WARNING: Could not reconcile some variable overlaps */

void Sfx_Transform__FP8coorddefP7SVECTORT0(coorddef *worldpt,SVECTOR *campt,coorddef *t)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_zero;
  undefined4 in_at;
  uint local_44;
  short local_40;
  short local_3c;
  short local_38;
  undefined4 local_20;
  
  TrsProj_SetPsxMatrix__FP10matrixtdefP8coorddef(&gWorldMat,(coorddef *)0x0);
  local_44 = local_44 & 0xffff0000 | worldpt->z - t->z >> 10 & 0xffffU;
  setCopReg(2,in_zero,worldpt->x - t->x >> 10 & 0xffffU | (worldpt->y - t->y >> 10) << 0x10);
  setCopReg(2,in_at,local_44);
  copFunction(2,0x480012);
  uVar1 = getCopReg(2,0x19);
  uVar2 = getCopReg(2,0x1a);
  uVar3 = getCopReg(2,0x1b);
  local_40 = (short)uVar1;
  campt->vx = local_40;
  local_3c = (short)uVar2;
  campt->vy = local_3c;
  local_38 = (short)uVar3;
  campt->vz = local_38;
  local_20 = CONCAT22(local_20._2_2_,0x1000);
  setCopControlWord(2,0,0x1000);
  setCopControlWord(2,0x800,0);
  setCopControlWord(2,0x1000,0x1000);
  setCopControlWord(2,0x1800,0);
  setCopControlWord(2,0x2000,local_20);
  setCopControlWord(2,0x2800,0);
  setCopControlWord(2,0x3000,0);
  setCopControlWord(2,0x3800,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sfx_BuildSmokeFacet__FP17Souffle_tISouffleP10sfxsouffleP12Draw_tPixMap(struct Souffle_tISouffle *is /*$s3*/, struct sfxsouffle *dSouffle /*$s4*/, struct Draw_tPixMap *cpixmap /*$s5*/)
 // line 106, offset 0x800dd1a4
	/* begin block 1 */
		// Start line: 107
		// Start offset: 0x800DD1A4

		/* begin block 1.1 */
			// Start line: 107
			// Start offset: 0x800DD1A4
			// Variables:
		// 		struct Souffle_tISouffle *is; // $s3
		// 		struct sfxsouffle *dSouffle; // $s4
		// 		int radius; // $s0

			/* begin block 1.1.1 */
				// Start line: 107
				// Start offset: 0x800DD1A4
				// Variables:
			// 		int sina; // $v0
			// 		int cosa; // $s1
			/* end block 1.1.1 */
			// End offset: 0x800DD1A4
			// End Line: 107
		/* end block 1.1 */
		// End offset: 0x800DD1A4
		// End Line: 107

		/* begin block 1.2 */
			// Start line: 107
			// Start offset: 0x800DD1A4
			// Variables:
		// 		int iclut; // $s2
		/* end block 1.2 */
		// End offset: 0x800DD2E0
		// End Line: 114
	/* end block 1 */
	// End offset: 0x800DD2E0
	// End Line: 114

void Sfx_BuildSmokeFacet__FP17Souffle_tISouffleP10sfxsouffleP12Draw_tPixMap
               (Souffle_tISouffle *is,sfxsouffle *dSouffle,Draw_tPixMap *cpixmap)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  Draw_tPixMap *pDVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  short sVar10;
  
  iVar9 = (0x1f - (uint)(byte)is->cycle) * 4 + 0x26;
  puVar2 = fastintcos(is->angle);
  uVar3 = fixedmult((int)puVar2,iVar9);
  puVar2 = fastintsin(is->angle);
  uVar4 = fixedmult((int)puVar2,iVar9);
  sVar10 = (short)uVar4;
  (dSouffle->v0).vx = (is->trans).vx - sVar10;
  sVar1 = (short)uVar3;
  (dSouffle->v0).vy = (is->trans).vy + sVar1;
  (dSouffle->v0).vz = (is->trans).vz;
  (dSouffle->v1).vx = (is->trans).vx + sVar1;
  (dSouffle->v1).vy = (is->trans).vy + sVar10;
  (dSouffle->v1).vz = (is->trans).vz;
  (dSouffle->v2).vx = (is->trans).vx + sVar10;
  (dSouffle->v2).vy = (is->trans).vy - sVar1;
  (dSouffle->v2).vz = (is->trans).vz;
  (dSouffle->v3).vx = (is->trans).vx - sVar1;
  (dSouffle->v3).vy = (is->trans).vy - sVar10;
  (dSouffle->v3).vz = (is->trans).vz;
  iVar9 = (int)(0x1f - (uint)(byte)is->cycle) >> 1;
  sVar10 = (short)iVar9;
  if (0xf < iVar9) {
    sVar10 = 0xf;
  }
  pDVar5 = (&__gSMokePixmap_2__)[is->rndpixmap];
  uVar6 = *(undefined4 *)&pDVar5->u1;
  uVar7 = *(undefined4 *)&pDVar5->u2;
  uVar8 = *(undefined4 *)&pDVar5->u3;
  *(undefined4 *)&dSouffle->pmx = *(undefined4 *)pDVar5;
  *(undefined4 *)&(dSouffle->pmx).u1 = uVar6;
  *(undefined4 *)&(dSouffle->pmx).u2 = uVar7;
  *(undefined4 *)&(dSouffle->pmx).u3 = uVar8;
  (dSouffle->pmx).clut = cpixmap->clut + sVar10;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sfx_ThickenXZ__FP7SVECTORP8coorddefN21(struct SVECTOR *d /*$s3*/, struct coorddef *pt1 /*$s0*/, struct coorddef *pt2 /*$s4*/, struct coorddef *cp /*$s2*/)
 // line 163, offset 0x800dd370
	/* begin block 1 */
		// Start line: 164
		// Start offset: 0x800DD370
		// Variables:
	// 		int pxp; // $s1
	// 		int pzp; // $v0

		/* begin block 1.1 */
			// Start line: 164
			// Start offset: 0x800DD370
			// Variables:
		// 		int angle; // $s1
		/* end block 1.1 */
		// End offset: 0x800DD370
		// End Line: 164
	/* end block 1 */
	// End offset: 0x800DD370
	// End Line: 164

void Sfx_ThickenXZ__FP7SVECTORP8coorddefN21(SVECTOR *d,coorddef *pt1,coorddef *pt2,coorddef *cp)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = intatan(pt2->x - pt1->x,pt2->z - pt1->z);
  puVar2 = fastintcos(uVar1);
  uVar3 = fixedmult((int)&DAT_0000e666,-(int)puVar2);
  iVar5 = (int)uVar3 >> 1;
  puVar2 = fastintsin(uVar1);
  uVar1 = fixedmult((int)&DAT_0000e666,(int)puVar2);
  d[1].vx = (short)((pt1->x + iVar5) - cp->x >> 10);
  iVar4 = (int)uVar1 >> 1;
  d[1].vy = (short)(pt1->y - cp->y >> 10);
  d[1].vz = (short)((pt1->z + iVar4) - cp->z >> 10);
  d[2].vx = (short)((pt1->x - iVar5) - cp->x >> 10);
  d[2].vy = (short)(pt1->y - cp->y >> 10);
  d[2].vz = (short)((pt1->z - iVar4) - cp->z >> 10);
  d->vx = (short)((pt2->x + iVar5) - cp->x >> 10);
  d->vy = (short)(pt2->y - cp->y >> 10);
  d->vz = (short)((pt2->z + iVar4) - cp->z >> 10);
  d[3].vx = (short)((pt2->x - iVar5) - cp->x >> 10);
  d[3].vy = (short)(pt2->y - cp->y >> 10);
  d[3].vz = (short)((pt2->z - iVar4) - cp->z >> 10);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sfx_BuildFastDisolveFacet__FP17Souffle_tISouffleP10sfxsouffleP12Draw_tPixMapT2(struct Souffle_tISouffle *is /*$a0*/, struct sfxsouffle *dSouffle /*$a1*/, struct Draw_tPixMap *t /*$a2*/, struct Draw_tPixMap *c /*$a3*/)
 // line 290, offset 0x800dd528
	/* begin block 1 */
		// Start line: 291
		// Start offset: 0x800DD528
		// Variables:
	// 		int iclut; // $v1
	/* end block 1 */
	// End offset: 0x800DD544
	// End Line: 295

void Sfx_BuildFastDisolveFacet__FP17Souffle_tISouffleP10sfxsouffleP12Draw_tPixMapT2
               (Souffle_tISouffle *is,sfxsouffle *dSouffle,Draw_tPixMap *t,Draw_tPixMap *c)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  _sVar1 = 8 - (uint)(byte)is->cycle;
  sVar1 = (short)_sVar1;
  if (0xf < _sVar1) {
    sVar1 = 0xf;
  }
  uVar2 = *(undefined4 *)&t->u1;
  uVar3 = *(undefined4 *)&t->u2;
  uVar4 = *(undefined4 *)&t->u3;
  *(undefined4 *)&dSouffle->pmx = *(undefined4 *)t;
  *(undefined4 *)&(dSouffle->pmx).u1 = uVar2;
  *(undefined4 *)&(dSouffle->pmx).u2 = uVar3;
  *(undefined4 *)&(dSouffle->pmx).u3 = uVar4;
  (dSouffle->pmx).clut = c->clut + sVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sfx_AdditivePrim__FP12Draw_tPixMapP7SVECTORiiP10Sfx_tCache(struct Draw_tPixMap *pmx /*$t0*/, struct SVECTOR *pt /*$a1*/, int mode /*$a2*/, int offset /*$a3*/, struct Sfx_tCache *sd /*stack 16*/)
 // line 306, offset 0x800dd598
	/* begin block 1 */
		// Start line: 307
		// Start offset: 0x800DD598
		// Variables:
	// 		struct POLY_FT4 *prim; // $s0

		/* begin block 1.1 */
			// Start line: 340
			// Start offset: 0x800DD6B8
			// Variables:
		// 		unsigned long l0; // $v0
		// 		unsigned long l1; // $v1
		// 		unsigned long l2; // $a0
		// 		unsigned long l3; // $a1
		/* end block 1.1 */
		// End offset: 0x800DD6B8
		// End Line: 340

		/* begin block 1.2 */
			// Start line: 340
			// Start offset: 0x800DD6B8
			// Variables:
		// 		unsigned short tpage; // stack offset -24
		/* end block 1.2 */
		// End offset: 0x800DD708
		// End Line: 360
	/* end block 1 */
	// End offset: 0x800DD77C
	// End Line: 363

void Sfx_AdditivePrim__FP12Draw_tPixMapP7SVECTORiiP10Sfx_tCache
               (Draw_tPixMap *pmx,SVECTOR *pt,int mode,int offset,Sfx_tCache *sd)

{
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int nabr;
  ushort local_18 [4];
  
  puVar3 = DAT_1f800004;
  if ((sd->head).cprim.PrimPtr < (sd->head).cprim.MPrimPtr) {
    setCopReg(2,in_zero,*(undefined4 *)pt);
    setCopReg(2,in_at,*(undefined4 *)&pt->vz);
    copFunction(2,0x180001);
    uVar1 = getCopReg(2,0xe);
    DAT_1f800004[2] = uVar1;
    setCopReg(2,in_zero,*(undefined4 *)(pt + 1));
    setCopReg(2,in_at,*(undefined4 *)&pt[1].vz);
    setCopReg(2,pt + 3,*(undefined4 *)(pt + 2));
    setCopReg(2,pt + 2,*(undefined4 *)&pt[2].vz);
    setCopReg(2,pt + 1,*(undefined4 *)(pt + 3));
    setCopReg(2,pt,*(undefined4 *)&pt[3].vz);
    copFunction(2,0x280030);
    if ((mode & 2U) == 0) {
      if (GameSetup_gData.Time == 0) {
        uVar1 = 0x2e181818;
      }
      else {
        uVar1 = 0x2e080808;
      }
    }
    else {
      uVar1 = 0x2e5898b8;
    }
    puVar3[1] = uVar1;
    uVar1 = getCopReg(2,0xc);
    puVar3[4] = uVar1;
    uVar1 = getCopReg(2,0xd);
    puVar3[8] = uVar1;
    uVar1 = getCopReg(2,0xe);
    puVar3[6] = uVar1;
    copFunction(2,0x168002e);
    nabr = getCopReg(2,7);
    sd->otz = nabr;
    offset = (sd->otz >> 1) + offset;
    sd->otz = offset;
    if ((-1 < offset) && (offset <= Draw_gViewOtSize + -3)) {
      *(undefined *)((int)puVar3 + 3) = 9;
      uVar1 = *(uint *)&pmx->u1;
      uVar2 = *(uint *)&pmx->u2;
      uVar4 = *(uint *)&pmx->u3;
      puVar3[3] = *(uint *)pmx;
      puVar3[5] = uVar1;
      puVar3[7] = uVar2;
      puVar3[9] = uVar4;
      local_18[0] = pmx->tpage;
      if ((mode & 1U) == 0) {
        nabr = 1;
      }
      else {
        nabr = 2;
      }
      ChangeTPage__FPUsi(local_18,nabr);
      nabr = DAT_1f800000;
      *(ushort *)((int)puVar3 + 0x16) = local_18[0];
      *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *(uint *)(sd->otz * 4 + nabr) & 0xffffff;
      puVar3 = (uint *)(sd->otz * 4 + nabr);
      uVar1 = (uint)DAT_1f800004 & 0xffffff;
      DAT_1f800004 = DAT_1f800004 + 10;
      *puVar3 = *puVar3 & 0xff000000 | uVar1;
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sfx_BuildSouffleFacet__FP13DRender_tViewP17Souffle_tISouffle(struct DRender_tView *Vi /*$s0*/, struct Souffle_tISouffle *is /*$s2*/)
 // line 367, offset 0x800dd790
	/* begin block 1 */
		// Start line: 368
		// Start offset: 0x800DD790
		// Variables:
	// 		struct sfxsouffle dSouffle; // stack offset -200
	// 		struct Sfx_tCache *sd; // $s3

		/* begin block 1.1 */
			// Start line: 368
			// Start offset: 0x800DD790

			/* begin block 1.1.1 */
				// Start line: 376
				// Start offset: 0x800DD7E8
				// Variables:
			// 		struct CVECTOR color; // stack offset -152
			// 		struct CVECTOR gcolor; // stack offset -144

				/* begin block 1.1.1.1 */
					// Start line: 403
					// Start offset: 0x800DD874

					/* begin block 1.1.1.1.1 */
						// Start line: 368
						// Start offset: 0x800DD874
						// Variables:
					// 		struct DRender_tView *Vi; // $s0
					// 		struct Souffle_tISouffle *is; // $s2
					// 		struct sfxsouffle *dSouffle; // $s0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 368
							// Start offset: 0x800DD874
							// Variables:
						// 		struct SVECTOR ptrans; // stack offset -136
						// 		struct coorddef invertedm; // stack offset -152
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800DD9F8
						// End Line: 368
					/* end block 1.1.1.1.1 */
					// End offset: 0x800DD9F8
					// End Line: 368
				/* end block 1.1.1.1 */
				// End offset: 0x800DDA00
				// End Line: 403

				/* begin block 1.1.1.2 */
					// Start line: 413
					// Start offset: 0x800DDA74
					// Variables:
				// 		struct DRender_tView *Vi; // $s0
				// 		struct Souffle_tISouffle *is; // $s2
				// 		struct CVECTOR color; // stack offset -116
				// 		struct Sfx_tCache *sd; // $s3

					/* begin block 1.1.1.2.1 */
						// Start line: 413
						// Start offset: 0x800DDA74
						// Variables:
					// 		int scale; // $v1
					// 		struct coorddef pt[2]; // stack offset -72
					// 		struct SVECTOR dest[4]; // stack offset -104

						/* begin block 1.1.1.2.1.1 */
							// Start line: 413
							// Start offset: 0x800DDA74
							// Variables:
						// 		struct VECTOR check; // stack offset -48
						// 		struct POLY_FT4 *prim; // $s0

							/* begin block 1.1.1.2.1.1.1 */
								// Start line: 368
								// Start offset: 0x800DDC44
								// Variables:
							// 		unsigned long l3; // $a3
							// 		unsigned long l2; // $a2
							// 		unsigned long l1; // $a1
							// 		unsigned long l0; // $v1
							// 		struct Draw_tPixMap *pmx; // $v0

								/* begin block 1.1.1.2.1.1.1.1 */
									// Start line: 368
									// Start offset: 0x800DDC44
									// Variables:
								// 		unsigned short tpage; // stack offset -32
								/* end block 1.1.1.2.1.1.1.1 */
								// End offset: 0x800DDC44
								// End Line: 368
							/* end block 1.1.1.2.1.1.1 */
							// End offset: 0x800DDC44
							// End Line: 368
						/* end block 1.1.1.2.1.1 */
						// End offset: 0x800DDC44
						// End Line: 368
					/* end block 1.1.1.2.1 */
					// End offset: 0x800DDC44
					// End Line: 368
				/* end block 1.1.1.2 */
				// End offset: 0x800DDC44
				// End Line: 368

				/* begin block 1.1.1.3 */
					// Start line: 420
					// Start offset: 0x800DDD0C
					// Variables:
				// 		struct Souffle_tISouffle *is; // $s2
				// 		struct sfxsouffle *dSouffle; // $s0

					/* begin block 1.1.1.3.1 */
						// Start line: 420
						// Start offset: 0x800DDD0C
						// Variables:
					// 		int sina; // $v0
					// 		int cosa; // $s1
					/* end block 1.1.1.3.1 */
					// End offset: 0x800DDD0C
					// End Line: 420
				/* end block 1.1.1.3 */
				// End offset: 0x800DDD0C
				// End Line: 420

				/* begin block 1.1.1.4 */
					// Start line: 429
					// Start offset: 0x800DDDEC
					// Variables:
				// 		struct Souffle_tISouffle *is; // $s2
				// 		struct sfxsouffle *dSouffle; // $s0
				// 		int radius; // $s0

					/* begin block 1.1.1.4.1 */
						// Start line: 429
						// Start offset: 0x800DDDEC
						// Variables:
					// 		int sina; // $v0
					// 		int cosa; // $s1
					/* end block 1.1.1.4.1 */
					// End offset: 0x800DDDEC
					// End Line: 429
				/* end block 1.1.1.4 */
				// End offset: 0x800DDDEC
				// End Line: 429

				/* begin block 1.1.1.5 */
					// Start line: 438
					// Start offset: 0x800DDEF4
					// Variables:
				// 		struct Souffle_tISouffle *is; // $s2
				// 		struct sfxsouffle *dSouffle; // $s0
				// 		int radius; // $s0

					/* begin block 1.1.1.5.1 */
						// Start line: 438
						// Start offset: 0x800DDEF4
						// Variables:
					// 		int sina; // $v0
					// 		int cosa; // $s1
					/* end block 1.1.1.5.1 */
					// End offset: 0x800DDEF4
					// End Line: 438
				/* end block 1.1.1.5 */
				// End offset: 0x800DDEF4
				// End Line: 438

				/* begin block 1.1.1.6 */
					// Start line: 447
					// Start offset: 0x800DDFFC
					// Variables:
				// 		struct Souffle_tISouffle *is; // $s2
				// 		struct sfxsouffle *dSouffle; // $s0
				// 		int radius; // $s0

					/* begin block 1.1.1.6.1 */
						// Start line: 447
						// Start offset: 0x800DDFFC
						// Variables:
					// 		int sina; // $v0
					// 		int cosa; // $s1
					/* end block 1.1.1.6.1 */
					// End offset: 0x800DDFFC
					// End Line: 447
				/* end block 1.1.1.6 */
				// End offset: 0x800DDFFC
				// End Line: 447

				/* begin block 1.1.1.7 */
					// Start line: 456
					// Start offset: 0x800DE130
					// Variables:
				// 		struct DRender_tView *Vi; // $s0
				// 		struct Souffle_tISouffle *is; // $s2
				// 		struct CVECTOR color; // stack offset -124
				// 		struct Sfx_tCache *sd; // $s3

					/* begin block 1.1.1.7.1 */
						// Start line: 456
						// Start offset: 0x800DE130
						// Variables:
					// 		int scale; // $v1
					// 		struct coorddef pt[2]; // stack offset -80
					// 		struct SVECTOR dest[4]; // stack offset -112

						/* begin block 1.1.1.7.1.1 */
							// Start line: 456
							// Start offset: 0x800DE130
							// Variables:
						// 		struct VECTOR check; // stack offset -56
						// 		struct POLY_FT4 *prim; // $s0

							/* begin block 1.1.1.7.1.1.1 */
								// Start line: 368
								// Start offset: 0x800DE300
								// Variables:
							// 		unsigned long l3; // $a3
							// 		unsigned long l2; // $a2
							// 		unsigned long l1; // $a1
							// 		unsigned long l0; // $v1
							// 		struct Draw_tPixMap *pmx; // $v0

								/* begin block 1.1.1.7.1.1.1.1 */
									// Start line: 368
									// Start offset: 0x800DE300
									// Variables:
								// 		unsigned short tpage; // stack offset -30
								/* end block 1.1.1.7.1.1.1.1 */
								// End offset: 0x800DE300
								// End Line: 368
							/* end block 1.1.1.7.1.1.1 */
							// End offset: 0x800DE300
							// End Line: 368
						/* end block 1.1.1.7.1.1 */
						// End offset: 0x800DE300
						// End Line: 368
					/* end block 1.1.1.7.1 */
					// End offset: 0x800DE300
					// End Line: 368
				/* end block 1.1.1.7 */
				// End offset: 0x800DE300
				// End Line: 368

				/* begin block 1.1.1.8 */
					// Start line: 368
					// Start offset: 0x800DE3C8
					// Variables:
				// 		struct Souffle_tISouffle *is; // $s2
				// 		struct sfxsouffle *dSouffle; // $a0

					/* begin block 1.1.1.8.1 */
						// Start line: 368
						// Start offset: 0x800DE3C8
						// Variables:
					// 		int sina; // $v0
					// 		int cosa; // $s0
					/* end block 1.1.1.8.1 */
					// End offset: 0x800DE3C8
					// End Line: 368
				/* end block 1.1.1.8 */
				// End offset: 0x800DE3C8
				// End Line: 368

				/* begin block 1.1.1.9 */
					// Start line: 368
					// Start offset: 0x800DE3C8
					// Variables:
				// 		struct POLY_FT4 *prim; // $t0
				// 		struct SVECTOR *pt; // $a0

					/* begin block 1.1.1.9.1 */
						// Start line: 504
						// Start offset: 0x800DE58C
						// Variables:
					// 		struct Draw_tPixMap *pmx; // $v0
					// 		unsigned long l0; // $v1
					// 		unsigned long l1; // $a0
					// 		unsigned long l2; // $a2
					// 		unsigned long l3; // $v0
					/* end block 1.1.1.9.1 */
					// End offset: 0x800DE58C
					// End Line: 504
				/* end block 1.1.1.9 */
				// End offset: 0x800DE61C
				// End Line: 522
			/* end block 1.1.1 */
			// End offset: 0x800DE61C
			// End Line: 524
		/* end block 1.1 */
		// End offset: 0x800DE61C
		// End Line: 524
	/* end block 1 */
	// End offset: 0x800DE61C
	// End Line: 524

/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Sfx_BuildSouffleFacet__FP13DRender_tViewP17Souffle_tISouffle
               (DRender_tView *Vi,Souffle_tISouffle *is)

{
  bool bVar1;
  undefined4 in_zero;
  undefined4 in_at;
  Draw_tPixMap *c;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  Draw_tPixMap **ppDVar7;
  matrixtdef *pmVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int offset;
  int mode;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  coorddef local_98;
  SVECTOR local_88;
  uint local_7c;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  ushort local_20;
  ushort local_1e [3];
  
  switch(is->type) {
  case '\x01':
    Sfx_BuildSmokeFacet__FP17Souffle_tISouffleP10sfxsouffleP12Draw_tPixMap
              (is,(sfxsouffle *)&local_c8,gSMokePalette);
    goto LAB_800de114;
  case '\x02':
    Sfx_BuildSmokeFacet__FP17Souffle_tISouffleP10sfxsouffleP12Draw_tPixMap
              (is,(sfxsouffle *)&local_c8,gSMokePalette);
    if ((byte)is->cycle < 0x12) {
      is->type = '\x01';
    }
    Sfx_AdditivePrim__FP12Draw_tPixMapP7SVECTORiiP10Sfx_tCache
              ((Draw_tPixMap *)&local_c8,(SVECTOR *)&local_b8,0,0xf,(Sfx_tCache *)&DAT_1f800000);
    return;
  case '\x03':
    Sfx_BuildSmokeFacet__FP17Souffle_tISouffleP10sfxsouffleP12Draw_tPixMap
              (is,(sfxsouffle *)&local_c8,gSMokePalette);
    mode = 1;
    goto LAB_800de11c;
  case '\x04':
    local_98.x = (is->motion).x;
    local_98.y = (is->motion).y;
    local_98.z = (is->motion).z;
    Math_NormalizeVector__FP8coorddef(&local_98);
    local_98.x = (is->source).x + local_98.x * -4;
    local_98.y = (is->source).y + local_98.y * -4;
    local_98.z = (is->source).z + local_98.z * -4;
    Sfx_Transform__FP8coorddefP7SVECTORT0(&local_98,&local_88,(coorddef *)&Vi->cview);
    if ((short)local_88.vz < 0x40) {
      bVar1 = true;
    }
    else {
      offset = (int)(is->trans).vx;
      mode = (int)local_88.vx - offset;
      if (mode < 1) {
        mode = offset - (int)local_88.vx;
      }
      if (mode < 0x20) {
        bVar1 = local_88.vx <= (is->trans).vx;
        sVar6 = (is->trans).vx;
        local_88.vx = sVar6 + 0x20;
        if (bVar1) {
          local_88.vx = sVar6 + -0x20;
        }
      }
      local_b8 = CONCAT22((is->trans).vy + 0x20,(is->trans).vx);
      local_b4 = local_b4 & 0xffff0000 | (uint)(ushort)(is->trans).vz;
      local_a0 = CONCAT22((is->trans).vy + -0x20,(is->trans).vx);
      local_9c = local_9c & 0xffff0000 | (uint)(ushort)(is->trans).vz;
      local_b0 = CONCAT22(local_88.vy + 0x20,local_88.vx);
      local_ac = local_ac & 0xffff0000 | (uint)local_88.vz;
      local_a8 = CONCAT22(local_88.vy + -0x20,local_88.vx);
      bVar1 = false;
      local_a4 = local_a4 & 0xffff0000 | (uint)local_88.vz;
    }
    if (bVar1) {
      return;
    }
    mode = 2;
    c = (&__gSparkHPixmap_6__)[6 - (uint)(byte)is->cycle];
    local_c8 = *(undefined4 *)c;
    local_c4 = *(undefined4 *)&c->u1;
    local_c0 = *(undefined4 *)&c->u2;
    local_bc = *(undefined4 *)&c->u3;
    offset = 0x28;
    goto LAB_800de120;
  default:
    goto switchD_800dd7e0_caseD_5;
  case '\x06':
    mode = 0x88 - (uint)(byte)is->cycle;
    puVar2 = fastintcos(is->angle);
    uVar3 = fixedmult((int)puVar2,mode);
    puVar2 = fastintsin(is->angle);
    uVar4 = fixedmult((int)puVar2,mode);
    sVar6 = (short)uVar4;
    sVar5 = (short)uVar3;
    local_b8 = CONCAT22((is->trans).vy + sVar5,(is->trans).vx - sVar6);
    local_b4 = CONCAT22(local_b4._2_2_,(is->trans).vz);
    local_b0 = CONCAT22((is->trans).vy + sVar6,(is->trans).vx + sVar5);
    local_ac = CONCAT22(local_ac._2_2_,(is->trans).vz);
    local_a8 = CONCAT22((is->trans).vy - sVar5,(is->trans).vx + sVar6);
    local_a4 = CONCAT22(local_a4._2_2_,(is->trans).vz);
    sVar5 = (is->trans).vx - sVar5;
    sVar6 = (is->trans).vy - sVar6;
    c = gDirtPalette;
    goto LAB_800de0e0;
  case '\a':
    mode = (8 - (uint)(byte)is->cycle) * 4 + 0x19;
    puVar2 = fastintcos(is->angle);
    uVar3 = fixedmult((int)puVar2,mode);
    puVar2 = fastintsin(is->angle);
    uVar4 = fixedmult((int)puVar2,mode);
    sVar6 = (short)uVar4;
    sVar5 = (short)uVar3;
    local_b8 = CONCAT22((is->trans).vy + sVar5,(is->trans).vx - sVar6);
    local_b4 = CONCAT22(local_b4._2_2_,(is->trans).vz);
    local_b0 = CONCAT22((is->trans).vy + sVar6,(is->trans).vx + sVar5);
    local_ac = CONCAT22(local_ac._2_2_,(is->trans).vz);
    local_a8 = CONCAT22((is->trans).vy - sVar5,(is->trans).vx + sVar6);
    local_a4 = CONCAT22(local_a4._2_2_,(is->trans).vz);
    local_a0 = CONCAT22((is->trans).vy - sVar6,(is->trans).vx - sVar5);
    local_9c = CONCAT22(local_9c._2_2_,(is->trans).vz);
    ppDVar7 = &__gGravelPixmap_2__;
    mode = is->rndpixmap << 2;
    c = gGrassPalette;
    break;
  case '\b':
    local_98.z = 0x2e301818;
    local_7c = 0x2e301818;
    local_50 = (is->motion).x;
    local_4c = (is->motion).y;
    local_48 = (is->motion).z;
    Math_NormalizeVector__FP8coorddef((coorddef *)&local_50);
    local_44 = (is->source).x;
    local_40 = (is->source).y;
    local_3c = (is->source).z;
    mode = (int)*(short *)((int)&is->rndpixmap + 2);
    local_50 = local_44 - (local_50 * mode >> 4);
    local_4c = local_40 - (local_4c * mode >> 4);
    local_48 = local_3c - (local_48 * mode >> 4);
    Sfx_ThickenXZ__FP7SVECTORP8coorddefN21
              ((SVECTOR *)&local_70,(coorddef *)&local_50,(coorddef *)(&local_50 + 0xc),
               (coorddef *)&Vi->cview);
    pmVar8 = &gWorldMat;
    uVar10 = 0;
    TrsProj_SetPsxMatrix__FP10matrixtdefP8coorddef(&gWorldMat,(coorddef *)0x0);
    puVar9 = DAT_1f800004;
    if (DAT_1f800008 <= DAT_1f800004) {
      return;
    }
    setCopReg(2,in_zero,local_68);
    setCopReg(2,in_at,local_64);
    copFunction(2,0x180001);
    local_38 = getCopReg(2,0x19);
    local_34 = getCopReg(2,0x1a);
    local_30 = getCopReg(2,0x1b);
    if (local_30 < 0x20) {
      return;
    }
    uVar3 = getCopReg(2,0xe);
    DAT_1f800004[4] = uVar3;
    setCopReg(2,in_zero,local_70);
    setCopReg(2,in_at,local_6c);
    setCopReg(2,&local_58,local_60);
    setCopReg(2,&local_60,local_5c);
    setCopReg(2,pmVar8,local_58);
    setCopReg(2,uVar10,local_54);
    copFunction(2,0x280030);
    puVar9[1] = local_7c;
    uVar3 = getCopReg(2,0xc);
    puVar9[2] = uVar3;
    uVar3 = getCopReg(2,0xd);
    puVar9[8] = uVar3;
    uVar3 = getCopReg(2,0xe);
    puVar9[6] = uVar3;
    copFunction(2,0x168002e);
    mode = getCopReg(2,7);
    _DAT_1f800014 = (mode >> 1) + 0x32;
    if (_DAT_1f800014 < 0) {
      return;
    }
    if (Draw_gViewOtSize + -3 < _DAT_1f800014) {
      return;
    }
    *(undefined *)((int)puVar9 + 3) = 9;
    c = (&__gSparkHPixmap_6__)[6 - (uint)(byte)is->cycle];
    uVar3 = *(uint *)&c->u1;
    uVar4 = *(uint *)&c->u2;
    uVar11 = *(uint *)&c->u3;
    puVar9[3] = *(uint *)c;
    puVar9[5] = uVar3;
    puVar9[7] = uVar4;
    puVar9[9] = uVar11;
    local_1e[0] = c->tpage;
    ChangeTPage__FPUsi(local_1e,2);
    mode = DAT_1f800000;
    *(ushort *)((int)puVar9 + 0x16) = local_1e[0];
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *(uint *)(_DAT_1f800014 * 4 + mode) & 0xffffff;
    puVar9 = (uint *)(_DAT_1f800014 * 4 + mode);
    uVar3 = *puVar9;
    uVar4 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 10;
    goto LAB_800de610;
  case '\t':
    mode = (8 - (uint)(byte)is->cycle) * 4 + 0x19;
    puVar2 = fastintcos(is->angle);
    uVar3 = fixedmult((int)puVar2,mode);
    puVar2 = fastintsin(is->angle);
    uVar4 = fixedmult((int)puVar2,mode);
    sVar6 = (short)uVar4;
    sVar5 = (short)uVar3;
    local_b8 = CONCAT22((is->trans).vy + sVar5,(is->trans).vx - sVar6);
    local_b4 = CONCAT22(local_b4._2_2_,(is->trans).vz);
    local_b0 = CONCAT22((is->trans).vy + sVar6,(is->trans).vx + sVar5);
    local_ac = CONCAT22(local_ac._2_2_,(is->trans).vz);
    local_a8 = CONCAT22((is->trans).vy - sVar5,(is->trans).vx + sVar6);
    local_a4 = CONCAT22(local_a4._2_2_,(is->trans).vz);
    local_a0 = CONCAT22((is->trans).vy - sVar6,(is->trans).vx - sVar5);
    local_9c = CONCAT22(local_9c._2_2_,(is->trans).vz);
    ppDVar7 = &__gGravelPixmap_2__;
    mode = is->rndpixmap << 2;
    c = gSnowPalette;
    break;
  case '\n':
    local_98.x = 0x2e181010;
    local_74 = 0x2e181010;
    local_48 = (is->motion).x;
    local_44 = (is->motion).y;
    local_40 = (is->motion).z;
    Math_NormalizeVector__FP8coorddef((coorddef *)(&local_50 + 8));
    local_3c = (is->source).x;
    local_38 = (is->source).y;
    local_34 = (is->source).z;
    mode = (int)*(short *)((int)&is->rndpixmap + 2);
    local_48 = local_3c - (local_48 * mode >> 4);
    local_44 = local_38 - (local_44 * mode >> 4);
    local_40 = local_34 - (local_40 * mode >> 4);
    Sfx_ThickenXZ__FP7SVECTORP8coorddefN21
              ((SVECTOR *)&local_68,(coorddef *)(&local_50 + 8),(coorddef *)(&local_50 + 0x14),
               (coorddef *)&Vi->cview);
    pmVar8 = &gWorldMat;
    uVar10 = 0;
    TrsProj_SetPsxMatrix__FP10matrixtdefP8coorddef(&gWorldMat,(coorddef *)0x0);
    puVar9 = DAT_1f800004;
    if (DAT_1f800008 <= DAT_1f800004) {
      return;
    }
    setCopReg(2,in_zero,local_60);
    setCopReg(2,in_at,local_5c);
    copFunction(2,0x180001);
    local_30 = getCopReg(2,0x19);
    local_2c = getCopReg(2,0x1a);
    local_28 = getCopReg(2,0x1b);
    if (local_28 < 0x20) {
      return;
    }
    uVar3 = getCopReg(2,0xe);
    DAT_1f800004[4] = uVar3;
    setCopReg(2,in_zero,local_68);
    setCopReg(2,in_at,local_64);
    setCopReg(2,&local_50,local_58);
    setCopReg(2,&local_58,local_54);
    setCopReg(2,pmVar8,local_50);
    setCopReg(2,uVar10,local_4c);
    copFunction(2,0x280030);
    puVar9[1] = local_74;
    uVar3 = getCopReg(2,0xc);
    puVar9[2] = uVar3;
    uVar3 = getCopReg(2,0xd);
    puVar9[8] = uVar3;
    uVar3 = getCopReg(2,0xe);
    puVar9[6] = uVar3;
    copFunction(2,0x168002e);
    mode = getCopReg(2,7);
    _DAT_1f800014 = (mode >> 1) + 0x32;
    if (_DAT_1f800014 < 0) {
      return;
    }
    if (Draw_gViewOtSize + -3 < _DAT_1f800014) {
      return;
    }
    *(undefined *)((int)puVar9 + 3) = 9;
    c = (&__gSparkHPixmap_6__)[6 - (uint)(byte)is->cycle];
    uVar3 = *(uint *)&c->u1;
    uVar4 = *(uint *)&c->u2;
    uVar11 = *(uint *)&c->u3;
    puVar9[3] = *(uint *)c;
    puVar9[5] = uVar3;
    puVar9[7] = uVar4;
    puVar9[9] = uVar11;
    local_20 = c->tpage;
    ChangeTPage__FPUsi(&local_20,1);
    mode = DAT_1f800000;
    *(ushort *)((int)puVar9 + 0x16) = local_20;
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *(uint *)(_DAT_1f800014 * 4 + mode) & 0xffffff;
    puVar9 = (uint *)(_DAT_1f800014 * 4 + mode);
    uVar3 = *puVar9;
    uVar4 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 10;
    goto LAB_800de610;
  case '\v':
    mode = (8 - (uint)(byte)is->cycle) * 4 + 0xc;
    puVar2 = fastintcos(is->angle);
    uVar3 = fixedmult((int)puVar2,mode);
    puVar2 = fastintsin(is->angle);
    uVar4 = fixedmult((int)puVar2,mode);
    sVar6 = (short)uVar4;
    sVar5 = (short)uVar3;
    local_b8 = CONCAT22((is->trans).vy + sVar5,(is->trans).vx - sVar6);
    local_b4 = CONCAT22(local_b4._2_2_,(is->trans).vz);
    local_b0 = CONCAT22((is->trans).vy + sVar6,(is->trans).vx + sVar5);
    local_ac = CONCAT22(local_ac._2_2_,(is->trans).vz);
    local_a8 = CONCAT22((is->trans).vy - sVar5,(is->trans).vx + sVar6);
    local_a4 = CONCAT22(local_a4._2_2_,(is->trans).vz);
    sVar5 = (is->trans).vx - sVar5;
    sVar6 = (is->trans).vy - sVar6;
    c = gSnowPalette;
LAB_800de0e0:
    local_a0 = CONCAT22(sVar6,sVar5);
    local_9c = CONCAT22(local_9c._2_2_,(is->trans).vz);
    ppDVar7 = &__gSMokePixmap_2__;
    mode = is->rndpixmap << 2;
    break;
  case '\r':
  case '\x0e':
    puVar2 = fastintcos(is->angle);
    uVar3 = fixedmult((int)puVar2,6);
    puVar2 = fastintsin(is->angle);
    uVar10 = 6;
    uVar4 = fixedmult((int)puVar2,6);
    puVar9 = DAT_1f800004;
    sVar6 = (short)uVar4;
    sVar5 = (short)uVar3;
    local_b8 = CONCAT22((is->trans).vy + sVar5,(is->trans).vx - sVar6);
    local_b4 = CONCAT22(local_b4._2_2_,(is->trans).vz);
    local_b0 = CONCAT22((is->trans).vy + sVar6,(is->trans).vx + sVar5);
    local_ac = CONCAT22(local_ac._2_2_,(is->trans).vz);
    local_a8 = CONCAT22((is->trans).vy - sVar5,(is->trans).vx + sVar6);
    local_a4 = CONCAT22(local_a4._2_2_,(is->trans).vz);
    local_a0 = CONCAT22((is->trans).vy - sVar6,(is->trans).vx - sVar5);
    local_9c = CONCAT22(local_9c._2_2_,(is->trans).vz);
    if (DAT_1f800008 <= DAT_1f800004) {
      return;
    }
    setCopReg(2,in_zero,local_b8);
    setCopReg(2,in_at,local_b4);
    copFunction(2,0x180001);
    uVar3 = getCopReg(2,0xe);
    DAT_1f800004[2] = uVar3;
    setCopReg(2,in_zero,local_b0);
    setCopReg(2,in_at,local_ac);
    setCopReg(2,&local_a0,local_a8);
    setCopReg(2,&local_a8,local_a4);
    setCopReg(2,&local_b0,local_a0);
    setCopReg(2,uVar10,local_9c);
    copFunction(2,0x280030);
    puVar9[1] = is->colour | 0x2c000000;
    uVar3 = getCopReg(2,0xc);
    puVar9[4] = uVar3;
    uVar3 = getCopReg(2,0xd);
    puVar9[8] = uVar3;
    uVar3 = getCopReg(2,0xe);
    puVar9[6] = uVar3;
    copFunction(2,0x168002e);
    mode = getCopReg(2,7);
    _DAT_1f800014 = (mode >> 1) + 0xf;
    if (_DAT_1f800014 < 0) {
      return;
    }
    if (Draw_gViewOtSize + -3 < _DAT_1f800014) {
      return;
    }
    *(undefined *)((int)puVar9 + 3) = 9;
    uVar4 = *(uint *)&gLeafPixmap->u1;
    uVar11 = *(uint *)&gLeafPixmap->u2;
    uVar3 = *(uint *)&gLeafPixmap->u3;
    puVar9[3] = *(uint *)gLeafPixmap;
    puVar9[5] = uVar4;
    puVar9[7] = uVar11;
    puVar9[9] = uVar3;
    mode = DAT_1f800000;
    *DAT_1f800004 =
         *DAT_1f800004 & 0xff000000 | *(uint *)(_DAT_1f800014 * 4 + DAT_1f800000) & 0xffffff;
    puVar9 = (uint *)(_DAT_1f800014 * 4 + mode);
    uVar3 = *puVar9;
    uVar4 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 10;
LAB_800de610:
    *puVar9 = uVar3 & 0xff000000 | uVar4;
    goto switchD_800dd7e0_caseD_5;
  }
  Sfx_BuildFastDisolveFacet__FP17Souffle_tISouffleP10sfxsouffleP12Draw_tPixMapT2
            (is,(sfxsouffle *)&local_c8,*(Draw_tPixMap **)(mode + (int)ppDVar7),c);
LAB_800de114:
  mode = 0;
LAB_800de11c:
  offset = 0xf;
LAB_800de120:
  Sfx_AdditivePrim__FP12Draw_tPixMapP7SVECTORiiP10Sfx_tCache
            ((Draw_tPixMap *)&local_c8,(SVECTOR *)&local_b8,mode,offset,(Sfx_tCache *)&DAT_1f800000)
  ;
switchD_800dd7e0_caseD_5:
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Sfx_Add__FP17Souffle_tISouffle(struct Souffle_tISouffle *is /*$s0*/)
 // line 534, offset 0x800de638
	/* begin block 1 */
		// Start line: 535
		// Start offset: 0x800DE638
	/* end block 1 */
	// End offset: 0x800DE6E4
	// End Line: 578

void Sfx_Add__FP17Souffle_tISouffle(Souffle_tISouffle *is)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  switch(is->type) {
  case '\x01':
  case '\x02':
  case '\x03':
    cVar1 = '\x1f';
    goto LAB_800de688;
  case '\x04':
  case '\b':
  case '\n':
    is->cycle = '\x06';
    break;
  case '\x06':
  case '\a':
  case '\t':
    cVar1 = '\b';
LAB_800de688:
    is->cycle = cVar1;
    uVar2 = random();
    is->rndpixmap = uVar2 & 1;
    break;
  case '\v':
    uVar2 = random();
    is->rndpixmap = uVar2 & 1;
    is->cycle = '\x02';
    break;
  case '\r':
    is->cycle = '@';
    iVar3 = (is->motion).z;
    iVar4 = (is->motion).x;
    (is->extramotion).y = 0;
    (is->extramotion).x = -iVar3;
    (is->extramotion).z = iVar4;
  }
  return;
}




