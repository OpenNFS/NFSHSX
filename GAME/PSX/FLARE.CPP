#include "NFS4.H"
#include "FLARE.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Flare_Tri__FPlN20i(long *cp /*$a0*/, long *p1 /*$a1*/, long *p2 /*$a2*/, int otz /*$a3*/)
 // line 75, offset 0x800cbcb0
	/* begin block 1 */
		// Start line: 76
		// Start offset: 0x800CBCB0
		// Variables:
	// 		struct POLY_G3 *prim; // $t0
	/* end block 1 */
	// End offset: 0x800CBCB0
	// End Line: 80

void Flare_Tri__FPlN20i(long *cp,long *p1,long *p2,int otz)
{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar1 = _DAT_1f800004;
  puVar2 = (uint *)(otz * 4 + _DAT_1f800000);
  *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar2 & 0xffffff;
  uVar3 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 7;
  *puVar2 = *puVar2 & 0xff000000 | uVar3;
  puVar1[1] = 0x32000000;
  puVar1[5] = 0;
  *(undefined *)((int)puVar1 + 3) = 6;
  puVar1[3] = uGp00001320;
  puVar1[2] = *p2;
  puVar1[4] = *cp;
  puVar1[6] = *p1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_SetMatrix__FP10matrixtdef(struct matrixtdef *m /*$a0*/)
 // line 184, offset 0x800cbd4c
	/* begin block 1 */
		// Start line: 185
		// Start offset: 0x800CBD4C
		// Variables:
	// 		struct MATRIX mpsx; // stack offset -32

		/* begin block 1.1 */
			// Start line: 185
			// Start offset: 0x800CBD4C
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a1
		/* end block 1.1 */
		// End offset: 0x800CBD4C
		// End Line: 185

		/* begin block 1.2 */
			// Start line: 185
			// Start offset: 0x800CBD4C
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a1
		/* end block 1.2 */
		// End offset: 0x800CBD4C
		// End Line: 185

		/* begin block 1.3 */
			// Start line: 185
			// Start offset: 0x800CBD4C
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.3 */
		// End offset: 0x800CBD4C
		// End Line: 185
	/* end block 1 */
	// End offset: 0x800CBD4C
	// End Line: 185

void Flare_SetMatrix__FP10matrixtdef(matrixtdef *m)
{
  uint local_10;
  
  local_10 = local_10 & 0xffff0000 | m->m[8] >> 4 & 0xffffU;
  setCopControlWord(2,0,m->m[0] >> 4 & 0xffffU | (m->m[3] >> 4) << 0x10);
  setCopControlWord(2,0x800,m->m[6] >> 4 & 0xffffU | (m->m[1] >> 4) << 0x10);
  setCopControlWord(2,0x1000,m->m[4] >> 4 & 0xffffU | (m->m[7] >> 4) << 0x10);
  setCopControlWord(2,0x1800,m->m[2] >> 4 & 0xffffU | (m->m[5] >> 4) << 0x10);
  setCopControlWord(2,0x2000,local_10);
  setCopControlWord(2,0x2800,0);
  setCopControlWord(2,0x3000,0);
  setCopControlWord(2,0x3800,0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_IdentMatrix__FP6MATRIX(struct MATRIX *mtx /*$a0*/)
 // line 196, offset 0x800cbdf8
	/* begin block 1 */
		// Start line: 197
		// Start offset: 0x800CBDF8
	/* end block 1 */
	// End offset: 0x800CBDF8
	// End Line: 199

void Flare_IdentMatrix__FP6MATRIX(MATRIX *mtx)
{
  *(undefined4 *)mtx->m = 0x1000;
  *(undefined4 *)(mtx->m + 2) = 0;
  *(undefined4 *)(mtx->m + 4) = 0x1000;
  *(undefined4 *)(mtx->m + 6) = 0;
  *(undefined4 *)(mtx->m + 8) = 0x1000;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_OctFlare__FPli(long *center /*$t6*/, int otz /*$t7*/)
 // line 208, offset 0x800cbe14
	/* begin block 1 */
		// Start line: 209
		// Start offset: 0x800CBE14
		// Variables:
	// 		long flare_dvxy[13]; // stack offset -56
	// 		int i; // $t1
	// 		long rgb1; // $t4

		/* begin block 1.1 */
			// Start line: 226
			// Start offset: 0x800CBF78

			/* begin block 1.1.1 */
				// Start line: 228
				// Start offset: 0x800CBF88
				// Variables:
			// 		struct POLY_G3 *prim; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800CBF88
			// End Line: 232
		/* end block 1.1 */
		// End offset: 0x800CBF88
		// End Line: 232
	/* end block 1 */
	// End offset: 0x800CC02C
	// End Line: 242

void Flare_OctFlare__FPli(long *center,int otz)
{
  uint *puVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar2;
  uint *puVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  uint auStack56 [14];
  
  setCopReg(2,in_zero,0xff000000);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff4c00b4);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0x100);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xb400b4);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0x1000000);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xb4ff4c);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff00);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff4cff4c);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  iVar6 = 8;
  psVar5 = (short *)&gfOctPt2;
  psVar4 = (short *)&gfHexPt1;
  while( true ) {
    puVar1 = _DAT_1f800004;
    psVar5 = psVar5 + -1;
    iVar6 = iVar6 + -1;
    psVar4 = psVar4 + -1;
    if (iVar6 == -1) break;
    puVar3 = (uint *)(otz * 4 + _DAT_1f800000);
    *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar3 & 0xffffff;
    uVar2 = (uint)_DAT_1f800004 & 0xffffff;
    _DAT_1f800004 = _DAT_1f800004 + 7;
    *puVar3 = *puVar3 & 0xff000000 | uVar2;
    puVar1[1] = 0x32000000;
    puVar1[3] = uGp00001320;
    puVar1[5] = 0;
    *(undefined *)((int)puVar1 + 3) = 6;
    puVar1[2] = auStack56[(int)*psVar4];
    puVar1[4] = *center;
    puVar1[6] = auStack56[(int)*psVar5];
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_OctFlareSpikes__FPli(long *center /*$a0*/, int otz /*$a1*/)
 // line 247, offset 0x800cc034
	/* begin block 1 */
		// Start line: 248
		// Start offset: 0x800CC034
		// Variables:
	// 		long flare_dvxy[13]; // stack offset -72
	// 		int i; // $t3
	// 		long rgb1; // $s2
	// 		long rgb2; // $s1
	// 		long cent; // $t8
	// 		int id0; // $a3
	// 		int id1; // $t1
	// 		int id2; // $a2

		/* begin block 1.1 */
			// Start line: 272
			// Start offset: 0x800CC244

			/* begin block 1.1.1 */
				// Start line: 274
				// Start offset: 0x800CC25C
				// Variables:
			// 		struct POLY_G4 *prim; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800CC25C
			// End Line: 276

			/* begin block 1.1.2 */
				// Start line: 276
				// Start offset: 0x800CC25C
				// Variables:
			// 		struct POLY_G3 *prim; // $a0
			/* end block 1.1.2 */
			// End offset: 0x800CC25C
			// End Line: 276
		/* end block 1.1 */
		// End offset: 0x800CC25C
		// End Line: 276
	/* end block 1 */
	// End offset: 0x800CC3A0
	// End Line: 317

void Flare_OctFlareSpikes__FPli(long *center,int otz)
{
  short sVar1;
  short sVar2;
  short sVar3;
  uint *puVar4;
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  uint local_48 [14];
  
  setCopReg(2,in_zero,0xffd30000);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0x2d);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0x2d0000);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xffd3);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff000000);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff4c00b4);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0x100);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xb400b4);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0x1000000);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xb4ff4c);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff00);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff4cff4c);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  iVar7 = 8;
  psVar10 = (short *)&gfOctPt1;
  psVar9 = (short *)&gfSpikePt2;
  psVar8 = (short *)&gfSpikePt1;
  uVar11 = *center;
  while( true ) {
    puVar4 = _DAT_1f800004;
    psVar10 = psVar10 + -1;
    psVar9 = psVar9 + -1;
    iVar7 = iVar7 + -1;
    psVar8 = psVar8 + -1;
    if (iVar7 == -1) break;
    sVar1 = *psVar8;
    sVar2 = *psVar9;
    sVar3 = *psVar10;
    puVar6 = (uint *)(otz * 4 + _DAT_1f800000);
    *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar6 & 0xffffff;
    uVar5 = (uint)_DAT_1f800004 & 0xffffff;
    _DAT_1f800004 = _DAT_1f800004 + 9;
    *puVar6 = *puVar6 & 0xff000000 | uVar5;
    puVar4[1] = 0x3a000000;
    *(undefined *)((int)puVar4 + 3) = 8;
    puVar4[3] = uGp00001324;
    puVar4[5] = 0;
    puVar4[7] = 0;
    uVar5 = local_48[(int)sVar1];
    puVar4[4] = uVar11;
    puVar4[2] = uVar5;
    puVar4[6] = local_48[(int)sVar3];
    puVar4[8] = local_48[(int)sVar2];
    puVar4 = _DAT_1f800004;
    sVar1 = *(short *)(&gfOctPt1 + iVar7 * 2);
    sVar2 = *(short *)(&gfOctPt2 + iVar7 * 2);
    puVar6 = (uint *)(otz * 4 + _DAT_1f800000);
    *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar6 & 0xffffff;
    uVar5 = (uint)_DAT_1f800004 & 0xffffff;
    _DAT_1f800004 = _DAT_1f800004 + 7;
    *puVar6 = *puVar6 & 0xff000000 | uVar5;
    puVar4[1] = 0x32000000;
    *(undefined *)((int)puVar4 + 3) = 6;
    puVar4[3] = uGp00001320;
    puVar4[5] = 0;
    uVar5 = local_48[(int)sVar1];
    puVar4[4] = uVar11;
    puVar4[2] = uVar5;
    puVar4[6] = local_48[(int)sVar2];
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_Spikes__FPli(long *center /*$t5*/, int otz /*$t6*/)
 // line 323, offset 0x800cc3b8
	/* begin block 1 */
		// Start line: 324
		// Start offset: 0x800CC3B8
		// Variables:
	// 		long flare_dvxy[13]; // stack offset -56
	// 		int i; // $t2

		/* begin block 1.1 */
			// Start line: 345
			// Start offset: 0x800CC5AC

			/* begin block 1.1.1 */
				// Start line: 347
				// Start offset: 0x800CC5C4
				// Variables:
			// 		struct POLY_G4 *prim; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800CC5C4
			// End Line: 351
		/* end block 1.1 */
		// End offset: 0x800CC5C4
		// End Line: 351
	/* end block 1 */
	// End offset: 0x800CC68C
	// End Line: 364

void Flare_Spikes__FPli(long *center,int otz)
{
  uint *puVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar2;
  uint *puVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  uint local_38 [14];
  
  setCopReg(2,in_zero,0xffd30000);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0x2d);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0x2d0000);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xffd3);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff000000);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff4c00b4);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0x100);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xb400b4);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0x1000000);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xb4ff4c);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff00);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff4cff4c);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  iVar7 = 8;
  psVar6 = (short *)&gfSpikePt2;
  psVar5 = (short *)&gfOctPt1;
  psVar4 = (short *)&gfSpikePt1;
  while( true ) {
    puVar1 = _DAT_1f800004;
    psVar6 = psVar6 + -1;
    psVar5 = psVar5 + -1;
    iVar7 = iVar7 + -1;
    psVar4 = psVar4 + -1;
    if (iVar7 == -1) break;
    puVar3 = (uint *)(otz * 4 + _DAT_1f800000);
    *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar3 & 0xffffff;
    uVar2 = (uint)_DAT_1f800004 & 0xffffff;
    _DAT_1f800004 = _DAT_1f800004 + 9;
    *puVar3 = *puVar3 & 0xff000000 | uVar2;
    puVar1[1] = 0x3a000000;
    uVar2 = gfrgb2;
    puVar1[5] = 0;
    puVar1[7] = 0;
    *(undefined *)((int)puVar1 + 3) = 8;
    puVar1[3] = uVar2;
    puVar1[2] = local_38[(int)*psVar4];
    puVar1[4] = *center;
    puVar1[6] = local_38[(int)*psVar5];
    puVar1[8] = local_38[(int)*psVar6];
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_HexFlare__FPli(long *center /*$t5*/, int otz /*$t6*/)
 // line 370, offset 0x800cc694
	/* begin block 1 */
		// Start line: 371
		// Start offset: 0x800CC694
		// Variables:
	// 		long flare_dvxy[7]; // stack offset -32
	// 		int i; // $t1

		/* begin block 1.1 */
			// Start line: 385
			// Start offset: 0x800CC7A8

			/* begin block 1.1.1 */
				// Start line: 387
				// Start offset: 0x800CC7B8
				// Variables:
			// 		struct POLY_G3 *prim; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800CC7B8
			// End Line: 391
		/* end block 1.1 */
		// End offset: 0x800CC7B8
		// End Line: 391
	/* end block 1 */
	// End offset: 0x800CC860
	// End Line: 401

void Flare_HexFlare__FPli(long *center,int otz)
{
  uint *puVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  short *psVar5;
  int iVar6;
  uint local_20 [8];
  
  setCopReg(2,in_zero,0xff00);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff23ff80);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff230080);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0x100);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xdd0080);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xddff80);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  iVar6 = 6;
  psVar5 = (short *)&gfHexPt2;
  puVar4 = &Flare_gSpikes;
  while( true ) {
    puVar1 = _DAT_1f800004;
    psVar5 = psVar5 + -1;
    iVar6 = iVar6 + -1;
    puVar4 = (undefined4 *)((int)puVar4 + -2);
    if (iVar6 == -1) break;
    puVar3 = (uint *)(otz * 4 + _DAT_1f800000);
    *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar3 & 0xffffff;
    uVar2 = (uint)_DAT_1f800004 & 0xffffff;
    _DAT_1f800004 = _DAT_1f800004 + 7;
    *puVar3 = *puVar3 & 0xff000000 | uVar2;
    puVar1[1] = 0x32000000;
    uVar2 = gfrgb;
    puVar1[5] = 0;
    *(undefined *)((int)puVar1 + 3) = 6;
    puVar1[3] = uVar2;
    puVar1[2] = local_20[(int)*(short *)puVar4];
    puVar1[4] = *center;
    puVar1[6] = local_20[(int)*psVar5];
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_ReflectHexFlare__FPli(long *center /*$t5*/, int otz /*$t6*/)
 // line 407, offset 0x800cc868
	/* begin block 1 */
		// Start line: 408
		// Start offset: 0x800CC868
		// Variables:
	// 		long flare_dvxy[7]; // stack offset -32
	// 		int i; // $t1

		/* begin block 1.1 */
			// Start line: 422
			// Start offset: 0x800CC97C

			/* begin block 1.1.1 */
				// Start line: 424
				// Start offset: 0x800CC98C
				// Variables:
			// 		struct POLY_G3 *prim; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800CC98C
			// End Line: 428
		/* end block 1.1 */
		// End offset: 0x800CC98C
		// End Line: 428
	/* end block 1 */
	// End offset: 0x800CCA34
	// End Line: 438

void Flare_ReflectHexFlare__FPli(long *center,int otz)
{
  uint *puVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  short *psVar5;
  int iVar6;
  uint local_20 [8];
  
  setCopReg(2,in_zero,0x100);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xdd0080);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xddff80);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xff00);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xfe00ff00);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  setCopReg(2,in_zero,0xfe000100);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  getCopReg(2,0xe);
  iVar6 = 6;
  psVar5 = (short *)&gfHexPt2;
  puVar4 = &Flare_gSpikes;
  while( true ) {
    puVar1 = _DAT_1f800004;
    psVar5 = psVar5 + -1;
    iVar6 = iVar6 + -1;
    puVar4 = (undefined4 *)((int)puVar4 + -2);
    if (iVar6 == -1) break;
    puVar3 = (uint *)(otz * 4 + _DAT_1f800000);
    *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar3 & 0xffffff;
    uVar2 = (uint)_DAT_1f800004 & 0xffffff;
    _DAT_1f800004 = _DAT_1f800004 + 7;
    *puVar3 = *puVar3 & 0xff000000 | uVar2;
    puVar1[1] = 0x32000000;
    puVar1[5] = 0;
    *(undefined *)((int)puVar1 + 3) = 6;
    puVar1[3] = uGp00001320;
    puVar1[2] = local_20[(int)*(short *)puVar4];
    puVar1[4] = *center;
    puVar1[6] = local_20[(int)*psVar5];
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_QuadFlare__FPli(long *center /*$s2*/, int otz /*$s3*/)
 // line 443, offset 0x800cca3c
	/* begin block 1 */
		// Start line: 444
		// Start offset: 0x800CCA3C
		// Variables:
	// 		long pt[2]; // stack offset -40
	// 		long save1; // stack offset -32
	/* end block 1 */
	// End offset: 0x800CCA3C
	// End Line: 444

void Flare_QuadFlare__FPli(long *center,int otz)
{
  undefined4 in_zero;
  undefined4 in_at;
  long local_28;
  long local_24;
  long local_20 [2];
  
  setCopReg(2,in_zero,0xff000000);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  local_20[0] = getCopReg(2,0xe);
  setCopReg(2,in_zero,0x100);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  local_24 = getCopReg(2,0xe);
  Flare_Tri__FPlN20i(center,local_20,&local_24,otz);
  setCopReg(2,in_zero,0x1000000);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  local_28 = getCopReg(2,0xe);
  Flare_Tri__FPlN20i(center,&local_24,&local_28,otz);
  setCopReg(2,in_zero,0xff00);
  setCopReg(2,in_at,0);
  copFunction(2,0x180001);
  local_24 = getCopReg(2,0xe);
  Flare_Tri__FPlN20i(center,&local_28,&local_24,otz);
  Flare_Tri__FPlN20i(center,&local_24,local_20,otz);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_CarShapedHalo__FiP7COORD16N21siP15Draw_FlareCache(int type /*$s7*/, struct COORD16 *ptCenter /*$t1*/, struct COORD16 *pt1 /*$t5*/, struct COORD16 *pt2 /*$t6*/, int flag /*stack 16*/, int otz /*stack 20*/, struct Draw_FlareCache *sd /*stack 24*/)
 // line 591, offset 0x800ccb58
	/* begin block 1 */
		// Start line: 592
		// Start offset: 0x800CCB58
		// Variables:
	// 		struct VECTOR diff; // stack offset -208
	// 		long angleZ; // $s6
	// 		long angleOuter; // $s5
	// 		long sizeOuter; // $s2
	// 		struct CVECTOR color[2]; // stack offset -192
	// 		struct DVECTOR sp; // stack offset -184
	// 		int scale; // $s3
	// 		int flags; // $s4
	// 		struct COORD16 *ptEdge; // $a2
	// 		struct COORD16 vec1; // stack offset -176
	// 		struct COORD16 vec2; // stack offset -168
	// 		struct COORD16 crossprod; // stack offset -160

		/* begin block 1.1 */
			// Start line: 675
			// Start offset: 0x800CCDC0

			/* begin block 1.1.1 */
				// Start line: 678
				// Start offset: 0x800CCDD0
				// Variables:
			// 		long result; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800CCDD0
			// End Line: 679
		/* end block 1.1 */
		// End offset: 0x800CCDE4
		// End Line: 689

		/* begin block 1.2 */
			// Start line: 692
			// Start offset: 0x800CCDE4

			/* begin block 1.2.1 */
				// Start line: 693
				// Start offset: 0x800CCDF0
				// Variables:
			// 		struct VECTOR diff2; // stack offset -152
			// 		struct DVECTOR sp2; // stack offset -136
			// 		long difx; // $s0
			// 		long dify; // $s1
			/* end block 1.2.1 */
			// End offset: 0x800CCDF0
			// End Line: 698
		/* end block 1.2 */
		// End offset: 0x800CCE80
		// End Line: 720

		/* begin block 1.3 */
			// Start line: 733
			// Start offset: 0x800CCF38

			/* begin block 1.3.1 */
				// Start line: 737
				// Start offset: 0x800CCF58
				// Variables:
			// 		struct VECTOR tvec1; // stack offset -152
			// 		struct VECTOR tvec2; // stack offset -128
			/* end block 1.3.1 */
			// End offset: 0x800CCFF0
			// End Line: 757
		/* end block 1.3 */
		// End offset: 0x800CCFF0
		// End Line: 757

		/* begin block 1.4 */
			// Start line: 760
			// Start offset: 0x800CCFF0

			/* begin block 1.4.1 */
				// Start line: 761
				// Start offset: 0x800CCFFC
				// Variables:
			// 		struct CVECTOR save; // stack offset -152
			// 		struct MATRIX scalemat; // stack offset -112
			// 		struct MATRIX mtx; // stack offset -80
			/* end block 1.4.1 */
			// End offset: 0x800CCFFC
			// End Line: 767

			/* begin block 1.4.2 */
				// Start line: 794
				// Start offset: 0x800CD1D0
				// Variables:
			// 		struct MATRIX mtx; // stack offset -152
			// 		struct MATRIX mtx2; // stack offset -120
			// 		struct MATRIX scalemat; // stack offset -88
			// 		int z; // $v1
			/* end block 1.4.2 */
			// End offset: 0x800CD48C
			// End Line: 838
		/* end block 1.4 */
		// End offset: 0x800CD48C
		// End Line: 838

		/* begin block 1.5 */
			// Start line: 842
			// Start offset: 0x800CD48C
			// Variables:
		// 		struct DR_MODE *aprim; // $a0
		/* end block 1.5 */
		// End offset: 0x800CD500
		// End Line: 842
	/* end block 1 */
	// End offset: 0x800CD500
	// End Line: 842

void Flare_CarShapedHalo__FiP7COORD16N21siP15Draw_FlareCache( (int type,COORD16 *ptCenter,COORD16 *pt1,COORD16 *pt2,int flag,int otz, Draw_FlareCache *sd)
{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  short local_b0;
  short local_ae;
  short local_ac;
  short local_a8;
  short local_a6;
  short local_a4;
  undefined4 local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  int local_78;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  ushort local_30;
  
  local_30 = (ushort)flag;
  if ((sd->head).cprim.PrimPtr < (sd->head).cprim.MPrimPtr + -0x400) {
    local_b0 = pt1->x - ptCenter->x;
    local_ae = pt1->y - ptCenter->y;
    local_ac = pt1->z - ptCenter->z;
    local_a8 = pt2->x - ptCenter->x;
    local_a6 = pt2->y - ptCenter->y;
    local_a4 = pt2->z - ptCenter->z;
    local_9c = local_9c & 0xffff0000 | (uint)(ushort)(local_a8 * local_ae - local_a6 * local_b0);
    local_a0 = CONCAT22(local_a4 * local_b0 - local_a8 * local_ac,
                        local_a6 * local_ac - local_a4 * local_ae);
    if (-1 < flag << 0x10) {
      pt1 = pt2;
    }
    if (true) {
      iVar3 = (type & 0x7fU) + 0xb;
    }
    else {
      iVar3 = (type & 0x7fU) + 1;
    }
    if ((type & 0x100U) != 0) {
      ptCenter->y = -ptCenter->y;
    }
    setCopReg(2,in_zero,*(undefined4 *)ptCenter);
    setCopReg(2,in_at,*(undefined4 *)&ptCenter->z);
    copFunction(2,0x180001);
    iVar3 = iVar3 * 0x10;
    local_c0 = *(uint *)(&Flare_gType + iVar3);
    local_bc = *(uint *)(&DAT_8011ff6c + iVar3);
    uVar10 = *(uint *)(&DAT_8011ff70 + iVar3);
    uVar11 = *(uint *)(&DAT_8011ff74 + iVar3);
    if ((type & 0x80U) != 0) {
      local_c0._1_1_ = (byte)(local_c0 >> 8);
      local_c0._0_3_ =
           CONCAT12((byte)(local_c0 >> 0x10) >> 1,
                    CONCAT11(local_c0._1_1_ >> 1,(char)(local_c0 >> 1))) & 0xffff7f;
      local_c0 = local_c0 & 0xff000000 | (uint)(uint3)local_c0;
      local_bc._1_1_ = (byte)(local_bc >> 8);
      local_bc._0_3_ =
           CONCAT12((byte)(local_bc >> 0x10) >> 1,
                    CONCAT11(local_bc._1_1_ >> 1,(char)(local_bc >> 1))) & 0xffff7f;
      local_bc = local_bc & 0xff000000 | (uint)(uint3)local_bc;
    }
    iVar3 = getCopReg(2,0x19);
    uVar1 = getCopReg(2,0x1a);
    iVar5 = getCopReg(2,0x1b);
    if (((iVar3 <= iVar5) && (-iVar3 <= iVar5)) && (0x7f < iVar5)) {
      local_b8 = getCopReg(2,0xe);
      iVar13 = 0;
      local_b8._2_2_ = (short)((uint)local_b8 >> 0x10);
      if ((uVar11 & 8) != 0) {
        iVar13 = ((int)(short)local_b8 + (int)local_b8._2_2_) * 4;
      }
      iVar12 = 0;
      if ((uVar11 & 4) == 0) {
        iVar8 = 0;
      }
      else {
        setCopReg(2,in_zero,*(undefined4 *)pt1);
        setCopReg(2,in_at,*(undefined4 *)&pt1->z);
        copFunction(2,0x180001);
        local_98 = getCopReg(2,0x19);
        local_94 = getCopReg(2,0x1a);
        local_90 = getCopReg(2,0x1b);
        local_88 = getCopReg(2,0xe);
        local_88._2_2_ = (short)(local_88 >> 0x10);
        iVar9 = (int)local_88._2_2_ - (int)local_b8._2_2_;
        iVar8 = (int)(short)local_88 - (int)(short)local_b8;
        iVar12 = fixedatan(iVar9,iVar8);
        iVar12 = iVar12 >> 4;
        iVar8 = isqrt(iVar8 * iVar8 + iVar9 * iVar9);
        iVar8 = iVar8 * iVar5;
      }
      gfrgb = local_c0;
      gfrgb2 = local_bc;
      if ((int)((uint)local_30 << 0x10) < 0) {
        iVar14 = (int)local_a8 * (int)local_a8;
        iVar9 = (int)local_a6 * (int)local_a6;
        iVar15 = (int)local_a4 * (int)local_a4;
      }
      else {
        iVar14 = (int)local_b0 * (int)local_b0;
        iVar9 = (int)local_ae * (int)local_ae;
        iVar15 = (int)local_ac * (int)local_ac;
      }
      uVar10 = (iVar14 + iVar9 + iVar15 >> 1) << (uVar10 & 0x1f);
      uGp00001328 = uVar10;
      if ((uVar11 & 1) != 0) {
        setCopControlWord(2,0x2800,0);
        setCopControlWord(2,0x3000,0);
        setCopControlWord(2,0x3800,0);
        setCopReg(2,in_zero,local_a0);
        setCopReg(2,in_at,local_9c);
        copFunction(2,0x180001);
        local_98 = getCopReg(2,0x19);
        local_94 = getCopReg(2,0x1a);
        local_90 = getCopReg(2,0x1b);
        uGp00001328 = uVar10;
        VectorNormal(&local_98,&local_98 + 6);
        if ((uVar11 & 2) != 0) {
          local_78 = (local_78 + -0xf33) * 0x14;
        }
        local_78 = local_78 + -600;
        if (local_78 < 0) {
          local_78 = 0;
        }
        uGp00001328 = (int)(uGp00001328 * local_78) >> 0xb;
      }
      if ((type & 0x100U) == 0) {
        local_48 = 0;
        local_54 = 0;
        local_4c = 0;
        local_58 = uGp00001328 + (iVar8 >> 5);
        local_50 = uGp00001328;
        Flare_IdentMatrix__FP6MATRIX((MATRIX *)&local_98);
        Flare_IdentMatrix__FP6MATRIX((MATRIX *)&local_78);
        setCopControlWord(2,0x2800,iVar3);
        setCopControlWord(2,0x3000,uVar1);
        setCopControlWord(2,0x3800,iVar5);
        RotMatrixZ(iVar13,(MATRIX *)&local_98);
        RotMatrixZ(iVar12,(MATRIX *)&local_78);
        setCopControlWord(2,0,local_78);
        setCopControlWord(2,0x800,local_74);
        setCopControlWord(2,0x1000,local_70);
        setCopControlWord(2,0x1800,local_6c);
        setCopControlWord(2,0x2000,local_68);
        setCopReg(2,0x4800,local_58 & 0xffff);
        setCopReg(2,0x5000,local_54 >> 0x10);
        setCopReg(2,0x5800,local_4c & 0xffff);
        copFunction(2,0x49e012);
        uVar10 = getCopReg(2,0x4800);
        iVar13 = getCopReg(2,0x5000);
        uVar7 = getCopReg(2,0x5800);
        setCopReg(2,0x4800,local_58 >> 0x10);
        setCopReg(2,0x5000,local_50 & 0xffff);
        setCopReg(2,0x5800,local_4c >> 0x10);
        copFunction(2,0x49e012);
        iVar3 = getCopReg(2,0x4800);
        uVar6 = getCopReg(2,0x5000);
        iVar12 = getCopReg(2,0x5800);
        local_58 = uVar10 & 0xffff | iVar3 << 0x10;
        local_4c = uVar7 & 0xffff | iVar12 << 0x10;
        setCopReg(2,0x4800,local_54 & 0xffff);
        setCopReg(2,0x5000,local_50 >> 0x10);
        setCopReg(2,0x5800,local_48 & 0xffff);
        copFunction(2,0x49e012);
        uVar10 = getCopReg(2,0x4800);
        iVar3 = getCopReg(2,0x5000);
        uVar7 = getCopReg(2,0x5800);
        local_54 = iVar13 << 0x10 | uVar10 & 0xffff;
        local_50 = uVar6 & 0xffff | iVar3 << 0x10;
        local_48 = local_48 & 0xffff0000 | uVar7 & 0xffff;
        setCopControlWord(2,0,local_58);
        setCopControlWord(2,0x800,local_54);
        setCopControlWord(2,0x1000,local_50);
        setCopControlWord(2,0x1800,local_4c);
        setCopControlWord(2,0x2000,local_48);
        setCopReg(2,0x4800,local_98 & 0xffff);
        setCopReg(2,0x5000,local_94 >> 0x10);
        setCopReg(2,0x5800,local_8c & 0xffff);
        copFunction(2,0x49e012);
        uVar10 = getCopReg(2,0x4800);
        iVar13 = getCopReg(2,0x5000);
        uVar7 = getCopReg(2,0x5800);
        setCopReg(2,0x4800,local_98 >> 0x10);
        setCopReg(2,0x5000,local_90 & 0xffff);
        setCopReg(2,0x5800,local_8c >> 0x10);
        copFunction(2,0x49e012);
        iVar3 = getCopReg(2,0x4800);
        uVar6 = getCopReg(2,0x5000);
        iVar12 = getCopReg(2,0x5800);
        local_98 = uVar10 & 0xffff | iVar3 << 0x10;
        local_8c = uVar7 & 0xffff | iVar12 << 0x10;
        setCopReg(2,0x4800,local_94 & 0xffff);
        setCopReg(2,0x5000,local_90 >> 0x10);
        setCopReg(2,0x5800,local_88 & 0xffff);
        copFunction(2,0x49e012);
        uVar10 = getCopReg(2,0x4800);
        iVar3 = getCopReg(2,0x5000);
        uVar7 = getCopReg(2,0x5800);
        local_94 = iVar13 << 0x10 | uVar10 & 0xffff;
        local_90 = uVar6 & 0xffff | iVar3 << 0x10;
        local_88 = local_88 & 0xffff0000 | uVar7 & 0xffff;
        setCopControlWord(2,0,local_98);
        setCopControlWord(2,0x800,local_94);
        setCopControlWord(2,0x1000,local_90);
        setCopControlWord(2,0x1800,local_8c);
        setCopControlWord(2,0x2000,local_88);
        if (iVar5 < 0xc80) {
          Flare_OctFlareSpikes__FPli(&local_b8,otz);
        }
        else {
          if (iVar5 < 0x1b80) {
            Flare_HexFlare__FPli(&local_b8,otz);
            Flare_PreCalcHexLightBeam__FPli(&local_b8,otz);
          }
          else {
            Flare_QuadFlare__FPli(&local_b8,otz);
          }
        }
      }
      else {
        local_70 = uVar10 + (iVar8 >> 7);
        local_98 = gfrgb;
        local_60 = 0;
        local_6c = 0;
        local_64 = 0;
        bGp00001320 = bGp00001320 >> 1;
        bGp00001321 = bGp00001321 >> 1;
        bGp00001322 = bGp00001322 >> 1;
        local_68 = local_70;
        Flare_IdentMatrix__FP6MATRIX((MATRIX *)&local_50);
        setCopControlWord(2,0x2800,iVar3);
        setCopControlWord(2,0x3000,uVar1);
        setCopControlWord(2,0x3800,iVar5);
        RotMatrixZ(0x800,(MATRIX *)&local_50);
        setCopControlWord(2,0,local_50);
        setCopControlWord(2,0x800,local_4c);
        setCopControlWord(2,0x1000,local_48);
        setCopControlWord(2,0x1800,local_44);
        setCopControlWord(2,0x2000,local_40);
        setCopReg(2,0x4800,local_70 & 0xffff);
        setCopReg(2,0x5000,local_6c >> 0x10);
        setCopReg(2,0x5800,local_64 & 0xffff);
        copFunction(2,0x49e012);
        uVar10 = getCopReg(2,0x4800);
        iVar5 = getCopReg(2,0x5000);
        uVar7 = getCopReg(2,0x5800);
        setCopReg(2,0x4800,local_70 >> 0x10);
        setCopReg(2,0x5000,local_68 & 0xffff);
        setCopReg(2,0x5800,local_64 >> 0x10);
        copFunction(2,0x49e012);
        iVar3 = getCopReg(2,0x4800);
        uVar6 = getCopReg(2,0x5000);
        iVar13 = getCopReg(2,0x5800);
        local_50 = uVar10 & 0xffff | iVar3 << 0x10;
        local_44 = uVar7 & 0xffff | iVar13 << 0x10;
        setCopReg(2,0x4800,local_6c & 0xffff);
        setCopReg(2,0x5000,local_68 >> 0x10);
        setCopReg(2,0x5800,local_60 & 0xffff);
        copFunction(2,0x49e012);
        uVar10 = getCopReg(2,0x4800);
        iVar3 = getCopReg(2,0x5000);
        uVar7 = getCopReg(2,0x5800);
        local_4c = uVar10 & 0xffff | iVar5 << 0x10;
        local_48 = uVar6 & 0xffff | iVar3 << 0x10;
        local_40 = local_40 & 0xffff0000 | uVar7 & 0xffff;
        setCopControlWord(2,0,local_50);
        setCopControlWord(2,0x800,local_4c);
        setCopControlWord(2,0x1000,local_48);
        setCopControlWord(2,0x1800,local_44);
        setCopControlWord(2,0x2000,local_40);
        Flare_ReflectHexFlare__FPli(&local_b8,otz);
        gfrgb = local_98;
      }
      puVar2 = _DAT_1f800004;
      puVar4 = (uint *)(otz * 4 + _DAT_1f800000);
      *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar4 & 0xffffff;
      uVar10 = (uint)_DAT_1f800004 & 0xffffff;
      _DAT_1f800004 = _DAT_1f800004 + 3;
      *puVar4 = *puVar4 & 0xff000000 | uVar10;
      SetDrawMode(puVar2,0,(uint)((uVar11 & 0x40) != 0),0x120,0);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_Halo2__FP13DRender_tViewiiP8coorddefT3P15Draw_FlareCache(struct DRender_tView *Vi /*$a0*/, int scale /*$s0*/, int type /*$s2*/, struct coorddef *fpt /*$a3*/, struct coorddef *fpt2 /*stack 16*/)
 // line 845, offset 0x800cd530
	/* begin block 1 */
		// Start line: 846
		// Start offset: 0x800CD530
		// Variables:
	// 		struct VECTOR diff; // stack offset -216
	// 		struct SVECTOR sdiff; // stack offset -200
	// 		struct SVECTOR sdiff2; // stack offset -192
	// 		long angleZ; // $s5
	// 		long angleOuter; // $s2
	// 		long sizeOuter; // $t0
	// 		struct CVECTOR color[2]; // stack offset -184
	// 		struct DVECTOR sp; // stack offset -176
	// 		int flare_type; // $s1
	// 		int flags; // $s3
	// 		int otz; // stack offset -48
	// 		int z; // $s4
	// 		struct VECTOR diff2; // stack offset -168
	// 		struct DVECTOR sp2; // stack offset -152

		/* begin block 1.1 */
			// Start line: 864
			// Start offset: 0x800CD58C
			// Variables:
		// 		struct coorddef *t; // $v0
		// 		int tx; // $t1
		// 		int ty; // $a0
		// 		int tz; // $t0
		// 		int dx; // $v1
		// 		int dy; // $a1
		// 		int dz; // $a3
		/* end block 1.1 */
		// End offset: 0x800CD608
		// End Line: 887

		/* begin block 1.2 */
			// Start line: 936
			// Start offset: 0x800CD724

			/* begin block 1.2.1 */
				// Start line: 937
				// Start offset: 0x800CD72C
				// Variables:
			// 		int r; // $a0
			/* end block 1.2.1 */
			// End offset: 0x800CD7A8
			// End Line: 948
		/* end block 1.2 */
		// End offset: 0x800CD7A8
		// End Line: 948

		/* begin block 1.3 */
			// Start line: 951
			// Start offset: 0x800CD7A8

			/* begin block 1.3.1 */
				// Start line: 952
				// Start offset: 0x800CD7B4
				// Variables:
			// 		long result; // $v0
			/* end block 1.3.1 */
			// End offset: 0x800CD7C8
			// End Line: 954
		/* end block 1.3 */
		// End offset: 0x800CD7C8
		// End Line: 954

		/* begin block 1.4 */
			// Start line: 959
			// Start offset: 0x800CD7C8

			/* begin block 1.4.1 */
				// Start line: 967
				// Start offset: 0x800CD810
				// Variables:
			// 		struct DR_MODE *aprim; // $a0
			/* end block 1.4.1 */
			// End offset: 0x800CD880
			// End Line: 967
		/* end block 1.4 */
		// End offset: 0x800CD880
		// End Line: 967

		/* begin block 1.5 */
			// Start line: 986
			// Start offset: 0x800CD8BC

			/* begin block 1.5.1 */
				// Start line: 987
				// Start offset: 0x800CD8C8

				/* begin block 1.5.1.1 */
					// Start line: 988
					// Start offset: 0x800CD8C8
					// Variables:
				// 		long difx; // $s0
				// 		long dify; // $s1
				/* end block 1.5.1.1 */
				// End offset: 0x800CD8C8
				// End Line: 991

				/* begin block 1.5.1.2 */
					// Start line: 991
					// Start offset: 0x800CD8C8
					// Variables:
				// 		struct MATRIX mtx; // stack offset -144
				// 		struct MATRIX mtx2; // stack offset -112
				// 		struct MATRIX scalemat; // stack offset -80
				/* end block 1.5.1.2 */
				// End offset: 0x800CD8C8
				// End Line: 991
			/* end block 1.5.1 */
			// End offset: 0x800CD8C8
			// End Line: 991

			/* begin block 1.5.2 */
				// Start line: 1030
				// Start offset: 0x800CDB84

				/* begin block 1.5.2.1 */
					// Start line: 1031
					// Start offset: 0x800CDB84

					/* begin block 1.5.2.1.1 */
						// Start line: 1032
						// Start offset: 0x800CDB8C
						// Variables:
					// 		struct VECTOR tvec; // stack offset -144
					// 		struct VECTOR tvec2; // stack offset -128
					/* end block 1.5.2.1.1 */
					// End offset: 0x800CDC40
					// End Line: 1049
				/* end block 1.5.2.1 */
				// End offset: 0x800CDC40
				// End Line: 1049

				/* begin block 1.5.2.2 */
					// Start line: 1053
					// Start offset: 0x800CDC40
					// Variables:
				// 		struct MATRIX mtx; // stack offset -144
				// 		struct MATRIX scalemat; // stack offset -112
				/* end block 1.5.2.2 */
				// End offset: 0x800CDDA4
				// End Line: 1073
			/* end block 1.5.2 */
			// End offset: 0x800CDDA4
			// End Line: 1073
		/* end block 1.5 */
		// End offset: 0x800CDDA4
		// End Line: 1073

		/* begin block 1.6 */
			// Start line: 1094
			// Start offset: 0x800CDDF8
			// Variables:
		// 		struct DR_MODE *aprim; // $a0
		/* end block 1.6 */
		// End offset: 0x800CDE70
		// End Line: 1094
	/* end block 1 */
	// End offset: 0x800CDE70
	// End Line: 1094

void Flare_Halo2__FP13DRender_tViewiiP8coorddefT3P15Draw_FlareCache( (DRender_tView *Vi,int scale,int type,coorddef *fpt,coorddef *fpt2)
{
  char cVar1;
  uint *puVar2;
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  int local_78;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_30;
  
  uVar13 = *(uint *)(&DAT_8011ff74 + (type & 0xffU) * 0x10);
  iVar14 = 0;
  if (fpt2 == (coorddef *)0x0) {
    uVar13 = uVar13 & 0xfffffffa;
  }
  iVar4 = fpt->x;
  iVar6 = fpt->y;
  iVar9 = (Vi->cview).translation.x;
  iVar5 = (Vi->cview).translation.y;
  iVar7 = (Vi->cview).translation.z;
  local_c4 = local_c4 & 0xffff0000 | fpt->z - iVar7 >> 10 & 0xffffU;
  if ((uVar13 & 5) != 0) {
    local_c0 = fpt2->x - iVar9 >> 10 & 0xffffU | (fpt2->y - iVar5 >> 10) << 0x10;
    local_bc = local_bc & 0xffff0000 | fpt2->z - iVar7 >> 10 & 0xffffU;
  }
  if ((((uVar13 & 0x10) == 0) && ((uVar13 & 0x20) == 0)) || (true)) {
    Flare_SetMatrix__FP10matrixtdef((matrixtdef *)&gWorldMat);
    setCopReg(2,in_zero,iVar4 - iVar9 >> 10 & 0xffffU | (iVar6 - iVar5 >> 10) << 0x10);
    setCopReg(2,in_at,local_c4);
    copFunction(2,0x180001);
    iVar4 = (type & 0xffU) * 0x10;
    local_b8 = *(uint *)(&Flare_gType + iVar4);
    local_b4 = *(uint *)(&DAT_8011ff6c + iVar4);
    if (scale == -1) {
      scale = *(int *)(&DAT_8011ff70 + iVar4);
    }
    iVar4 = getCopReg(2,0x19);
    iVar5 = getCopReg(2,0x1a);
    iVar6 = getCopReg(2,0x1b);
    if (((iVar4 <= iVar6) && (-iVar4 <= iVar6)) && (0x7f < iVar6)) {
      local_b0 = getCopReg(2,0xe);
      iVar7 = getCopReg(2,0x9800);
      local_30 = (iVar7 >> 2) >> 1;
      if ((-1 < local_30) && (local_30 <= Draw_gViewOtSize + -3)) {
        if ((uVar13 & 0x80) != 0) {
          uVar3 = random();
          scale = scale + (uVar3 % 0x14) * 4;
          local_b8._1_1_ = (char)(local_b8 >> 8);
          cVar1 = (char)(uVar3 % 0x14);
          local_b8._0_3_ =
               CONCAT12((char)(local_b8 >> 0x10) + cVar1,
                        CONCAT11(local_b8._1_1_ + cVar1,(char)local_b8 + cVar1));
          local_b8 = local_b8 & 0xff000000 | (uint)(uint3)local_b8;
          local_b4._1_1_ = (char)(local_b4 >> 8);
          local_b4._0_3_ =
               CONCAT12((char)(local_b4 >> 0x10) + cVar1,
                        CONCAT11(local_b4._1_1_ + cVar1,(char)local_b4 + cVar1));
          local_b4 = local_b4 & 0xff000000 | (uint)(uint3)local_b4;
        }
        puVar2 = _DAT_1f800004;
        if ((uVar13 & 8) != 0) {
          iVar14 = ((int)(short)local_b0 + (int)local_b0._2_2_) * 4;
        }
        gfrgb = local_b8;
        gfrgb2 = local_b4;
        uGp00001328 = scale;
        if ((uVar13 & 0x40) != 0) {
          puVar8 = (uint *)(local_30 * 4 + _DAT_1f800000);
          *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar8 & 0xffffff;
          uVar3 = (uint)_DAT_1f800004 & 0xffffff;
          _DAT_1f800004 = _DAT_1f800004 + 3;
          *puVar8 = *puVar8 & 0xff000000 | uVar3;
          uGp00001328 = scale;
          SetDrawMode(puVar2,0,0,0x120,0);
        }
        if ((uVar13 & 5) != 0) {
          setCopReg(2,in_zero,local_c0);
          setCopReg(2,in_at,local_bc);
          copFunction(2,0x180001);
          local_a8 = getCopReg(2,0x19);
          local_a4 = getCopReg(2,0x1a);
          local_a0 = getCopReg(2,0x1b);
          local_98 = getCopReg(2,0xe);
        }
        if ((uVar13 & 4) == 0) {
          iVar7 = iVar6;
          if ((uVar13 & 1) != 0) {
            local_90 = iVar4 - local_a8;
            local_8c = iVar5 - local_a4;
            local_88 = iVar6 - local_a0;
            VectorNormal(&local_90,&local_90 + 4);
            if ((uVar13 & 2) != 0) {
              local_78 = (local_78 + -0xf33) * 0x14;
            }
            local_78 = local_78 + -600;
            if (local_78 < 0) {
              local_78 = 0;
            }
            if (local_78 == 0) {
              return;
            }
            uGp00001328 = (int)(uGp00001328 * local_78) >> 0xb;
            iVar7 = iVar6;
            if (type == 0x1e) {
              iVar7 = iVar6;
              if (iVar6 < 0) {
                iVar7 = iVar6 + 3;
              }
              iVar7 = iVar7 >> 2;
            }
          }
          local_60 = 0;
          local_6c = 0;
          local_64 = 0;
          local_70 = uGp00001328;
          local_68 = uGp00001328;
          Flare_IdentMatrix__FP6MATRIX((MATRIX *)&local_90);
          setCopControlWord(2,0x2800,iVar4);
          setCopControlWord(2,0x3000,iVar5);
          setCopControlWord(2,0x3800,iVar6);
          RotMatrixZ(iVar14,(MATRIX *)&local_90);
          setCopControlWord(2,0,local_90);
          setCopControlWord(2,0x800,local_8c);
          setCopControlWord(2,0x1000,local_88);
          setCopControlWord(2,0x1800,local_84);
          setCopControlWord(2,0x2000,local_80);
          setCopReg(2,0x4800,local_70 & 0xffff);
          setCopReg(2,0x5000,local_6c >> 0x10);
          setCopReg(2,0x5800,local_64 & 0xffff);
          copFunction(2,0x49e012);
          uVar3 = getCopReg(2,0x4800);
          iVar4 = getCopReg(2,0x5000);
          uVar11 = getCopReg(2,0x5800);
          setCopReg(2,0x4800,local_70 >> 0x10);
          setCopReg(2,0x5000,local_68 & 0xffff);
          setCopReg(2,0x5800,local_64 >> 0x10);
          copFunction(2,0x49e012);
          iVar14 = getCopReg(2,0x4800);
          uVar10 = getCopReg(2,0x5000);
          iVar5 = getCopReg(2,0x5800);
          local_90 = uVar3 & 0xffff | iVar14 << 0x10;
          local_84 = uVar11 & 0xffff | iVar5 << 0x10;
          setCopReg(2,0x4800,local_6c & 0xffff);
          setCopReg(2,0x5000,local_68 >> 0x10);
          setCopReg(2,0x5800,local_60 & 0xffff);
          copFunction(2,0x49e012);
          uVar3 = getCopReg(2,0x4800);
          iVar14 = getCopReg(2,0x5000);
          uVar11 = getCopReg(2,0x5800);
          local_8c = uVar3 & 0xffff | iVar4 << 0x10;
          local_88 = uVar10 & 0xffff | iVar14 << 0x10;
          local_80 = local_80 & 0xffff0000 | uVar11 & 0xffff;
          setCopControlWord(2,0,local_90);
          setCopControlWord(2,0x800,local_8c);
          setCopControlWord(2,0x1000,local_88);
          setCopControlWord(2,0x1800,local_84);
          setCopControlWord(2,0x2000,local_80);
        }
        else {
          iVar12 = (int)local_98._2_2_ - (int)local_b0._2_2_;
          iVar9 = (int)(short)local_98 - (int)(short)local_b0;
          iVar7 = fixedatan(iVar12,iVar9);
          iVar9 = isqrt(iVar9 * iVar9 + iVar12 * iVar12);
          local_40 = 0;
          local_4c = 0;
          local_44 = 0;
          local_48 = uGp00001328;
          local_50 = uGp00001328 + (iVar9 * iVar6 >> 4);
          Flare_IdentMatrix__FP6MATRIX((MATRIX *)&local_90);
          Flare_IdentMatrix__FP6MATRIX((MATRIX *)&local_70);
          setCopControlWord(2,0x2800,iVar4);
          setCopControlWord(2,0x3000,iVar5);
          setCopControlWord(2,0x3800,iVar6);
          RotMatrixZ(iVar14,(MATRIX *)&local_90);
          RotMatrixZ(iVar7 >> 4,(MATRIX *)&local_70);
          setCopControlWord(2,0,local_70);
          setCopControlWord(2,0x800,local_6c);
          setCopControlWord(2,0x1000,local_68);
          setCopControlWord(2,0x1800,local_64);
          setCopControlWord(2,0x2000,local_60);
          setCopReg(2,0x4800,local_50 & 0xffff);
          setCopReg(2,0x5000,local_4c >> 0x10);
          setCopReg(2,0x5800,local_44 & 0xffff);
          copFunction(2,0x49e012);
          uVar3 = getCopReg(2,0x4800);
          iVar4 = getCopReg(2,0x5000);
          uVar11 = getCopReg(2,0x5800);
          setCopReg(2,0x4800,local_50 >> 0x10);
          setCopReg(2,0x5000,local_48 & 0xffff);
          setCopReg(2,0x5800,local_44 >> 0x10);
          copFunction(2,0x49e012);
          iVar14 = getCopReg(2,0x4800);
          uVar10 = getCopReg(2,0x5000);
          iVar5 = getCopReg(2,0x5800);
          local_50 = uVar3 & 0xffff | iVar14 << 0x10;
          local_44 = uVar11 & 0xffff | iVar5 << 0x10;
          setCopReg(2,0x4800,local_4c & 0xffff);
          setCopReg(2,0x5000,local_48 >> 0x10);
          setCopReg(2,0x5800,local_40 & 0xffff);
          copFunction(2,0x49e012);
          uVar3 = getCopReg(2,0x4800);
          iVar14 = getCopReg(2,0x5000);
          uVar11 = getCopReg(2,0x5800);
          local_4c = iVar4 << 0x10 | uVar3 & 0xffff;
          local_48 = uVar10 & 0xffff | iVar14 << 0x10;
          local_40 = local_40 & 0xffff0000 | uVar11 & 0xffff;
          setCopControlWord(2,0,local_50);
          setCopControlWord(2,0x800,local_4c);
          setCopControlWord(2,0x1000,local_48);
          setCopControlWord(2,0x1800,local_44);
          setCopControlWord(2,0x2000,local_40);
          setCopReg(2,0x4800,local_90 & 0xffff);
          setCopReg(2,0x5000,local_8c >> 0x10);
          setCopReg(2,0x5800,local_84 & 0xffff);
          copFunction(2,0x49e012);
          uVar3 = getCopReg(2,0x4800);
          iVar4 = getCopReg(2,0x5000);
          uVar11 = getCopReg(2,0x5800);
          setCopReg(2,0x4800,local_90 >> 0x10);
          setCopReg(2,0x5000,local_88 & 0xffff);
          setCopReg(2,0x5800,local_84 >> 0x10);
          copFunction(2,0x49e012);
          iVar14 = getCopReg(2,0x4800);
          uVar10 = getCopReg(2,0x5000);
          iVar5 = getCopReg(2,0x5800);
          local_90 = uVar3 & 0xffff | iVar14 << 0x10;
          local_84 = uVar11 & 0xffff | iVar5 << 0x10;
          setCopReg(2,0x4800,local_8c & 0xffff);
          setCopReg(2,0x5000,local_88 >> 0x10);
          setCopReg(2,0x5800,local_80 & 0xffff);
          copFunction(2,0x49e012);
          uVar3 = getCopReg(2,0x4800);
          iVar14 = getCopReg(2,0x5000);
          uVar11 = getCopReg(2,0x5800);
          local_8c = iVar4 << 0x10 | uVar3 & 0xffff;
          local_88 = uVar10 & 0xffff | iVar14 << 0x10;
          local_80 = local_80 & 0xffff0000 | uVar11 & 0xffff;
          setCopControlWord(2,0,local_90);
          setCopControlWord(2,0x800,local_8c);
          setCopControlWord(2,0x1000,local_88);
          setCopControlWord(2,0x1800,local_84);
          setCopControlWord(2,0x2000,local_80);
          iVar7 = iVar6;
        }
        if (iVar7 < 0xc80) {
          Flare_OctFlareSpikes__FPli(&local_b0,local_30);
        }
        else {
          if (iVar7 < 0x1b80) {
            Flare_HexFlare__FPli(&local_b0,local_30);
            Flare_PreCalcHexLightBeam__FPli(&local_b0,local_30);
          }
          else {
            Flare_QuadFlare__FPli(&local_b0,local_30);
          }
        }
        puVar2 = _DAT_1f800004;
        puVar8 = (uint *)(local_30 * 4 + _DAT_1f800000);
        *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar8 & 0xffffff;
        uVar3 = (uint)_DAT_1f800004 & 0xffffff;
        _DAT_1f800004 = _DAT_1f800004 + 3;
        *puVar8 = *puVar8 & 0xff000000 | uVar3;
        SetDrawMode(puVar2,0,(uint)((uVar13 & 0x40) != 0),0x120,0);
      }
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_Halo__FP13DRender_tViewiiP8coorddefP15Draw_FlareCache(struct DRender_tView *Vi /*$a0*/, int scale /*$a1*/, int type /*$a2*/, struct coorddef *fpt /*$a3*/, struct Draw_FlareCache *sd /*stack 16*/)
 // line 1097, offset 0x800cde9c
	/* begin block 1 */
		// Start line: 1098
		// Start offset: 0x800CDE9C
	/* end block 1 */
	// End offset: 0x800CDE9C
	// End Line: 1098

void Flare_Halo__FP13DRender_tViewiiP8coorddefP15Draw_FlareCache( (DRender_tView *Vi,int scale,int type,coorddef *fpt,Draw_FlareCache *sd)
{
  Flare_Halo2__FP13DRender_tViewiiP8coorddefT3P15Draw_FlareCache(Vi,scale,type,fpt,(coorddef *)0x0);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_2DSpike__FPlT0i(long *center /*$a0*/, long *end /*$a1*/, int otz /*$a2*/)
 // line 1105, offset 0x800cdec4
	/* begin block 1 */
		// Start line: 1106
		// Start offset: 0x800CDEC4
		// Variables:
	// 		long pt[2]; // stack offset -8
	// 		struct LINE_G2 *prim; // $a0
	/* end block 1 */
	// End offset: 0x800CDEC4
	// End Line: 1106

void Flare_2DSpike__FPlT0i(long *center,long *end,int otz)
{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar2 = _DAT_1f800004;
  uVar3 = *center;
  uVar4 = *end;
  puVar5 = (uint *)(otz * 4 + _DAT_1f800000);
  *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar5 & 0xffffff;
  *puVar5 = *puVar5 & 0xff000000 | (uint)_DAT_1f800004 & 0xffffff;
  puVar1 = (undefined *)((int)_DAT_1f800004 + 3);
  _DAT_1f800004 = _DAT_1f800004 + 5;
  *puVar1 = 4;
  puVar2[3] = 0;
  puVar2[1] = uGp00001324;
  *(undefined *)((int)puVar2 + 7) = 0x52;
  puVar2[2] = uVar3;
  puVar2[4] = uVar4;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_2DHalo__Fiiiii(int x /*$s5*/, int y /*$s6*/, int scalex /*$s0*/, int scaley /*$s1*/, int type /*stack 16*/)
 // line 1125, offset 0x800cdf70
	/* begin block 1 */
		// Start line: 1126
		// Start offset: 0x800CDF70
		// Variables:
	// 		struct DVECTOR pt2; // stack offset -88
	// 		struct DVECTOR *pt; // $s3
	// 		int otz; // $s4
	// 		struct Draw_FlareCache *sd; // $t0

		/* begin block 1.1 */
			// Start line: 1126
			// Start offset: 0x800CDF70

			/* begin block 1.1.1 */
				// Start line: 1137
				// Start offset: 0x800CDFC8
				// Variables:
			// 		int flare_type; // $v0

				/* begin block 1.1.1.1 */
					// Start line: 1140
					// Start offset: 0x800CDFC8
					// Variables:
				// 		struct DR_MODE *aprim; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x800CDFC8
				// End Line: 1140

				/* begin block 1.1.1.2 */
					// Start line: 1140
					// Start offset: 0x800CDFC8
					// Variables:
				// 		struct DVECTOR npt[2]; // stack offset -80
				// 		struct DVECTOR save1; // stack offset -72
				// 		struct DVECTOR octring[8]; // stack offset -64
				// 		int i; // $a1
				/* end block 1.1.1.2 */
				// End offset: 0x800CE0C8
				// End Line: 1163

				/* begin block 1.1.1.3 */
					// Start line: 1163
					// Start offset: 0x800CE0C8
					// Variables:
				// 		struct DR_MODE *aprim; // $a0
				/* end block 1.1.1.3 */
				// End offset: 0x800CE324
				// End Line: 1212
			/* end block 1.1.1 */
			// End offset: 0x800CE324
			// End Line: 1212
		/* end block 1.1 */
		// End offset: 0x800CE324
		// End Line: 1212
	/* end block 1 */
	// End offset: 0x800CE324
	// End Line: 1212

void Flare_2DHalo__Fiiiii(int x,int y,int scalex,int scaley,int type)
{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  short *psVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short local_58;
  short local_56;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  short local_30;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  
  puVar2 = _DAT_1f800004;
  puVar1 = _DAT_1f800000;
  sVar7 = (short)x;
  sVar8 = (short)y;
  if (_DAT_1f800004 < (uint *)(_DAT_1f800008 - 0x1000U)) {
    iVar3 = (type & 0xffU) * 0x10;
    uGp00001320 = *(undefined4 *)(&Flare_gType + iVar3);
    uGp00001324 = *(undefined4 *)(&DAT_8011ff6c + iVar3);
    *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
    uVar4 = (uint)_DAT_1f800004 & 0xffffff;
    _DAT_1f800004 = _DAT_1f800004 + 3;
    *puVar1 = *puVar1 & 0xff000000 | uVar4;
    local_58 = sVar7;
    local_56 = sVar8;
    SetDrawMode(puVar2,0,0,0x120,0);
    iVar3 = 0;
    psVar6 = &local_40;
    puVar5 = &Flare_gOct;
    do {
      iVar9 = (int)*(short *)puVar5 * scalex;
      iVar9._2_2_ = (short)((uint)iVar9 >> 0x10);
      if (iVar9 < 0) {
        iVar9._2_2_ = (short)((uint)(iVar9 + 0xffff) >> 0x10);
      }
      *psVar6 = iVar9._2_2_;
      iVar9 = (int)*(short *)((int)puVar5 + 2) * scaley;
      iVar9._2_2_ = (short)((uint)iVar9 >> 0x10);
      if (iVar9 < 0) {
        iVar9._2_2_ = (short)((uint)(iVar9 + 0xffff) >> 0x10);
      }
      psVar6[1] = iVar9._2_2_;
      psVar6 = psVar6 + 2;
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar3 < 8);
    local_48 = local_40 + sVar7;
    local_46 = local_3e + sVar8;
    local_4c = local_3c + sVar7;
    local_4a = local_3a + sVar8;
    Flare_Tri__FPlN20i((long *)&local_58,(long *)&local_48,(long *)&local_4c,0);
    Flare_2DSpike__FPlT0i((long *)&local_58,(long *)&local_4c,0);
    local_50 = local_38 + sVar7;
    local_4e = local_36 + sVar8;
    Flare_Tri__FPlN20i((long *)&local_58,(long *)&local_4c,(long *)&local_50,0);
    Flare_2DSpike__FPlT0i((long *)&local_58,(long *)&local_50,0);
    local_4c = local_34 + sVar7;
    local_4a = local_32 + sVar8;
    Flare_Tri__FPlN20i((long *)&local_58,(long *)&local_50,(long *)&local_4c,0);
    Flare_2DSpike__FPlT0i((long *)&local_58,(long *)&local_4c,0);
    local_50 = local_30 + sVar7;
    local_4e = local_2e + sVar8;
    Flare_Tri__FPlN20i((long *)&local_58,(long *)&local_4c,(long *)&local_50,0);
    Flare_2DSpike__FPlT0i((long *)&local_58,(long *)&local_50,0);
    local_4c = local_2c + sVar7;
    local_4a = local_2a + sVar8;
    Flare_Tri__FPlN20i((long *)&local_58,(long *)&local_50,(long *)&local_4c,0);
    Flare_2DSpike__FPlT0i((long *)&local_58,(long *)&local_4c,0);
    local_50 = local_28 + sVar7;
    local_4e = local_26 + sVar8;
    Flare_Tri__FPlN20i((long *)&local_58,(long *)&local_4c,(long *)&local_50,0);
    Flare_2DSpike__FPlT0i((long *)&local_58,(long *)&local_50,0);
    local_4c = local_24 + sVar7;
    local_4a = local_22 + sVar8;
    Flare_Tri__FPlN20i((long *)&local_58,(long *)&local_50,(long *)&local_4c,0);
    Flare_2DSpike__FPlT0i((long *)&local_58,(long *)&local_4c,0);
    Flare_Tri__FPlN20i((long *)&local_58,(long *)&local_4c,(long *)&local_48,0);
    Flare_2DSpike__FPlT0i((long *)&local_58,(long *)&local_48,0);
    puVar2 = _DAT_1f800004;
    puVar1 = _DAT_1f800000;
    *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
    uVar4 = (uint)_DAT_1f800004 & 0xffffff;
    _DAT_1f800004 = _DAT_1f800004 + 3;
    *puVar1 = *puVar1 & 0xff000000 | uVar4;
    SetDrawMode(puVar2,0,1,0x120,0);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_PreCalcHexLightBeam__FPli(long *center /*$a0*/, int otz /*$a1*/)
 // line 1229, offset 0x800ce34c
	/* begin block 1 */
		// Start line: 1230
		// Start offset: 0x800CE34C
		// Variables:
	// 		long pt[2]; // stack offset -8
	// 		long i; // $t0

		/* begin block 1.1 */
			// Start line: 1230
			// Start offset: 0x800CE34C

			/* begin block 1.1.1 */
				// Start line: 1237
				// Start offset: 0x800CE380
				// Variables:
			// 		struct LINE_G2 *prim; // $a0
			/* end block 1.1.1 */
			// End offset: 0x800CE38C
			// End Line: 1241
		/* end block 1.1 */
		// End offset: 0x800CE418
		// End Line: 1253
	/* end block 1 */
	// End offset: 0x800CE418
	// End Line: 1253

void Flare_PreCalcHexLightBeam__FPli(long *center,int otz)
{
  uint *puVar1;
  undefined4 in_zero;
  undefined4 in_at;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar3 = *center;
  puVar5 = &Flare_gOct;
  while (puVar1 = _DAT_1f800004, iVar6 < 8) {
    setCopReg(2,in_zero,*puVar5);
    setCopReg(2,in_at,puVar5[1]);
    puVar4 = (uint *)(otz * 4 + _DAT_1f800000);
    *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar4 & 0xffffff;
    uVar2 = (uint)_DAT_1f800004 & 0xffffff;
    _DAT_1f800004 = _DAT_1f800004 + 5;
    *puVar4 = *puVar4 & 0xff000000 | uVar2;
    uVar2 = gfrgb2;
    copFunction(2,0x180001);
    *(undefined *)((int)puVar1 + 3) = 4;
    puVar1[3] = 0;
    puVar1[1] = uVar2;
    *(undefined *)((int)puVar1 + 7) = 0x52;
    uVar2 = getCopReg(2,0xe);
    puVar5 = puVar5 + 2;
    puVar1[2] = uVar3;
    iVar6 = iVar6 + 1;
    puVar1[4] = uVar2;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_Quad__FPlP7CVECTORi(long *pt /*$a0*/, struct CVECTOR *color /*$a1*/, int otz /*$a2*/)
 // line 1305, offset 0x800ce420
	/* begin block 1 */
		// Start line: 1306
		// Start offset: 0x800CE420
		// Variables:
	// 		struct POLY_F4 *prim; // $a3
	/* end block 1 */
	// End offset: 0x800CE420
	// End Line: 1309

void Flare_Quad__FPlP7CVECTORi(long *pt,CVECTOR *color,int otz)
{
  uint *puVar1;
  CVECTOR CVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar1 = _DAT_1f800004;
  puVar3 = (uint *)(otz * 4 + _DAT_1f800000);
  *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar3 & 0xffffff;
  uVar4 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 6;
  *puVar3 = *puVar3 & 0xff000000 | uVar4;
  CVar2 = *color;
  *(undefined *)((int)puVar1 + 3) = 5;
  *(CVECTOR *)(puVar1 + 1) = CVar2;
  *(undefined *)((int)puVar1 + 7) = 0x2a;
  puVar1[2] = *pt;
  puVar1[3] = pt[1];
  puVar1[4] = pt[2];
  puVar1[5] = pt[3];
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_QuadNotTransparent__FPlP7CVECTORi(long *pt /*$a0*/, struct CVECTOR *color /*$a1*/, int otz /*$a2*/)
 // line 1319, offset 0x800ce4c4
	/* begin block 1 */
		// Start line: 1320
		// Start offset: 0x800CE4C4
		// Variables:
	// 		struct POLY_F4 *prim; // $a3
	/* end block 1 */
	// End offset: 0x800CE4C4
	// End Line: 1323

void Flare_QuadNotTransparent__FPlP7CVECTORi(long *pt,CVECTOR *color,int otz)
{
  uint *puVar1;
  CVECTOR CVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar1 = _DAT_1f800004;
  puVar3 = (uint *)(otz * 4 + _DAT_1f800000);
  *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar3 & 0xffffff;
  uVar4 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 6;
  *puVar3 = *puVar3 & 0xff000000 | uVar4;
  CVar2 = *color;
  *(undefined *)((int)puVar1 + 3) = 5;
  *(CVECTOR *)(puVar1 + 1) = CVar2;
  *(undefined *)((int)puVar1 + 7) = 0x28;
  puVar1[2] = *pt;
  puVar1[3] = pt[1];
  puVar1[4] = pt[2];
  puVar1[5] = pt[3];
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_QuadRing__FPlP7CVECTORi(long *pt /*$a0*/, struct CVECTOR *color /*$a1*/, int otz /*$a2*/)
 // line 1335, offset 0x800ce568
	/* begin block 1 */
		// Start line: 1336
		// Start offset: 0x800CE568
		// Variables:
	// 		struct POLY_G4 *prim; // $a3
	/* end block 1 */
	// End offset: 0x800CE568
	// End Line: 1339

void Flare_QuadRing__FPlP7CVECTORi(long *pt,CVECTOR *color,int otz)
{
  uint *puVar1;
  CVECTOR CVar2;
  uint *puVar3;
  
  puVar1 = _DAT_1f800004;
  puVar3 = (uint *)(otz * 4 + _DAT_1f800000);
  *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar3 & 0xffffff;
  *puVar3 = *puVar3 & 0xff000000 | (uint)_DAT_1f800004 & 0xffffff;
  CVar2 = *color;
  puVar3 = _DAT_1f800004 + 3;
  _DAT_1f800004 = _DAT_1f800004 + 9;
  *puVar3 = 0;
  *(CVECTOR *)(puVar1 + 1) = CVar2;
  CVar2 = *color;
  *(undefined *)((int)puVar1 + 3) = 8;
  puVar1[7] = 0;
  *(undefined *)((int)puVar1 + 7) = 0x3a;
  *(CVECTOR *)(puVar1 + 5) = CVar2;
  puVar1[2] = *pt;
  puVar1[4] = pt[1];
  puVar1[6] = pt[2];
  puVar1[8] = pt[3];
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_TextureQuad__FPlP7CVECTORci(long *pt /*$a0*/, struct CVECTOR *color /*$a1*/, char type /*$a2*/, int otz /*$a3*/)
 // line 1368, offset 0x800ce61c
	/* begin block 1 */
		// Start line: 1369
		// Start offset: 0x800CE61C
		// Variables:
	// 		struct POLY_FT4 *prim; // $t0

		/* begin block 1.1 */
			// Start line: 1372
			// Start offset: 0x800CE61C
			// Variables:
		// 		unsigned long l0; // $v1
		// 		unsigned long l1; // $a0
		// 		unsigned long l2; // $a1
		// 		unsigned long l3; // $v0
		/* end block 1.1 */
		// End offset: 0x800CE61C
		// End Line: 1372
	/* end block 1 */
	// End offset: 0x800CE61C
	// End Line: 1372

void Flare_TextureQuad__FPlP7CVECTORci(long *pt,CVECTOR *color,char type,int otz)
{
  uint *puVar1;
  CVECTOR CVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar1 = _DAT_1f800004;
  puVar5 = (uint *)(otz * 4 + _DAT_1f800000);
  *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar5 & 0xffffff;
  uVar6 = (uint)_DAT_1f800004 & 0xffffff;
  _DAT_1f800004 = _DAT_1f800004 + 10;
  *puVar5 = *puVar5 & 0xff000000 | uVar6;
  CVar2 = *color;
  *(undefined *)((int)puVar1 + 3) = 9;
  *(CVECTOR *)(puVar1 + 1) = CVar2;
  *(undefined *)((int)puVar1 + 7) = 0x2e;
  puVar1[2] = *pt;
  puVar1[4] = pt[1];
  puVar1[6] = pt[2];
  puVar1[8] = pt[3];
  puVar5 = (uint *)(&_gFlarePixmap)[(uint)(byte)type];
  uVar3 = puVar5[1];
  uVar4 = puVar5[2];
  uVar6 = puVar5[3];
  puVar1[3] = *puVar5;
  puVar1[5] = uVar3;
  puVar1[7] = uVar4;
  puVar1[9] = uVar6;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_SingleColorTex__FP7DVECTORP7CVECTORiici(struct DVECTOR *xy /*$a0*/, struct CVECTOR *color /*$a1*/, int width /*$a2*/, int height /*$a3*/, int type /*stack 16*/, int otz /*stack 20*/)
 // line 1386, offset 0x800ce6f8
	/* begin block 1 */
		// Start line: 1387
		// Start offset: 0x800CE6F8
		// Variables:
	// 		struct DVECTOR pt[4]; // stack offset -24
	/* end block 1 */
	// End offset: 0x800CE6F8
	// End Line: 1387

void Flare_SingleColorTex__FP7DVECTORP7CVECTORiici( (DVECTOR *xy,CVECTOR *color,int width,int height,int type,int otz)
{
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_c = (short)width;
  local_18 = xy->vx - local_c;
  local_a = (short)height;
  local_16 = xy->vy + local_a;
  local_14 = xy->vx + local_c;
  local_12 = xy->vy + local_a;
  local_10 = xy->vx - local_c;
  local_e = xy->vy - local_a;
  local_c = xy->vx + local_c;
  local_a = xy->vy - local_a;
  Flare_TextureQuad__FPlP7CVECTORci((long *)&local_18,color,(char)type,otz);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_SingleColorHex__FP7DVECTORP7CVECTORiii(struct DVECTOR *xy /*$t0*/, struct CVECTOR *color /*$s0*/, int width /*$a2*/, int height /*$a3*/, int otz /*stack 16*/)
 // line 1405, offset 0x800ce79c
	/* begin block 1 */
		// Start line: 1406
		// Start offset: 0x800CE79C
		// Variables:
	// 		struct DVECTOR pt[6]; // stack offset -40
	/* end block 1 */
	// End offset: 0x800CE864
	// End Line: 1427

void Flare_SingleColorHex__FP7DVECTORP7CVECTORiii( (DVECTOR *xy,CVECTOR *color,int width,int height,int otz)
{
  int iVar1;
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  
  iVar1 = width;
  if (width < 0) {
    iVar1 = width + 3;
  }
  local_14 = (short)(iVar1 >> 2);
  local_28 = xy->vx - local_14;
  local_12 = (short)((int)(height + ((uint)height >> 0x1f)) >> 1);
  local_26 = xy->vy + local_12;
  local_24 = xy->vx + local_14;
  local_22 = xy->vy + local_12;
  local_1c = (short)((int)(width + ((uint)width >> 0x1f)) >> 1);
  local_20 = xy->vx - local_1c;
  local_1e = xy->vy;
  local_1c = xy->vx + local_1c;
  local_1a = xy->vy;
  local_18 = xy->vx - local_14;
  local_16 = xy->vy - local_12;
  local_14 = xy->vx + local_14;
  local_12 = xy->vy - local_12;
  Flare_Quad__FPlP7CVECTORi((long *)&local_28,color,otz);
  Flare_Quad__FPlP7CVECTORi((long *)&local_20,color,otz);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_SingleColorOct__FP7DVECTORP7CVECTORiii(struct DVECTOR *xy /*$a0*/, struct CVECTOR *color /*$s0*/, int width /*$a2*/, int height /*$a3*/, int otz /*stack 16*/)
 // line 1443, offset 0x800ce8b0
	/* begin block 1 */
		// Start line: 1444
		// Start offset: 0x800CE8B0
		// Variables:
	// 		struct DVECTOR pt[8]; // stack offset -48
	// 		int i; // $t1
	/* end block 1 */
	// End offset: 0x800CE944
	// End Line: 1455

void Flare_SingleColorOct__FP7DVECTORP7CVECTORiii( (DVECTOR *xy,CVECTOR *color,int width,int height,int otz)
{
  short *psVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long local_30 [2];
  long alStack40 [2];
  long alStack32 [4];
  
  iVar3 = 0;
  plVar2 = local_30;
  psVar1 = &Flare_gLensOct;
  do {
    iVar4 = width * (int)*psVar1;
    iVar4._1_2_ = (short)((uint)iVar4 >> 8);
    if (iVar4 < 0) {
      iVar4._1_2_ = (short)((uint)(iVar4 + 0xff) >> 8);
    }
    *(short *)plVar2 = xy->vx + iVar4._1_2_;
    iVar4 = height * (int)psVar1[1];
    iVar4._1_2_ = (short)((uint)iVar4 >> 8);
    if (iVar4 < 0) {
      iVar4._1_2_ = (short)((uint)(iVar4 + 0xff) >> 8);
    }
    psVar1 = psVar1 + 4;
    iVar3 = iVar3 + 1;
    *(short *)((int)plVar2 + 2) = xy->vy + iVar4._1_2_;
    plVar2 = plVar2 + 1;
  } while (iVar3 < 8);
  Flare_Quad__FPlP7CVECTORi(local_30,color,otz);
  Flare_Quad__FPlP7CVECTORi(alStack40,color,otz);
  Flare_Quad__FPlP7CVECTORi(alStack32,color,otz);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_SingleColorOctRing__FP7DVECTORP7CVECTORiii(struct DVECTOR *xy /*$a0*/, struct CVECTOR *color /*$s0*/, int width /*$a2*/, int height /*$a3*/, int otz /*stack 16*/)
 // line 1460, offset 0x800ce988
	/* begin block 1 */
		// Start line: 1461
		// Start offset: 0x800CE988
		// Variables:
	// 		struct DVECTOR pt[18]; // stack offset -88
	// 		int i; // $a1
	// 		int width2; // $t5
	// 		int height2; // $t4
	// 		char index; // $t1
	// 		char i2; // $v0
	/* end block 1 */
	// End offset: 0x800CEAB0
	// End Line: 1482

void Flare_SingleColorOctRing__FP7DVECTORP7CVECTORiii( (DVECTOR *xy,CVECTOR *color,int width,int height,int otz)
{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long local_58 [4];
  long alStack72 [2];
  long alStack64 [2];
  long alStack56 [2];
  long alStack48 [2];
  long alStack40 [2];
  long alStack32 [4];
  
  iVar3 = 0;
  uVar4 = 0;
  do {
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = iVar3 + 7;
    }
    uVar2 = iVar3 + (iVar1 >> 3) * -8 & 0xff;
    iVar1 = uVar2 * 8;
    iVar5 = width * (int)*(short *)(&Flare_gOct + uVar2 * 2);
    iVar5._1_2_ = (short)((uint)iVar5 >> 8);
    uVar4 = uVar4 & 0xff;
    if (iVar5 < 0) {
      iVar5._1_2_ = (short)((uint)(iVar5 + 0xff) >> 8);
    }
    *(short *)(local_58 + uVar4) = xy->vx + iVar5._1_2_;
    iVar5 = height * (int)*(short *)((int)&Flare_gOct + iVar1 + 2);
    iVar5._1_2_ = (short)((uint)iVar5 >> 8);
    if (iVar5 < 0) {
      iVar5._1_2_ = (short)((uint)(iVar5 + 0xff) >> 8);
    }
    *(short *)((int)local_58 + uVar4 * 4 + 2) = xy->vy + iVar5._1_2_;
    iVar5 = (width + -5) * (int)*(short *)(&Flare_gOct + uVar2 * 2);
    iVar5._1_2_ = (short)((uint)iVar5 >> 8);
    if (iVar5 < 0) {
      iVar5._1_2_ = (short)((uint)(iVar5 + 0xff) >> 8);
    }
    *(short *)(local_58 + uVar4 + 1) = xy->vx + iVar5._1_2_;
    iVar1 = (height + -5) * (int)*(short *)((int)&Flare_gOct + iVar1 + 2);
    iVar5._1_2_ = (short)((uint)iVar1 >> 8);
    if (iVar1 < 0) {
      iVar5._1_2_ = (short)((uint)(iVar1 + 0xff) >> 8);
    }
    iVar3 = iVar3 + 1;
    *(short *)((int)local_58 + (uVar4 + 1) * 4 + 2) = xy->vy + iVar5._1_2_;
    uVar4 = iVar3 * 2;
  } while (iVar3 < 9);
  Flare_QuadRing__FPlP7CVECTORi(local_58,color,otz);
  Flare_QuadRing__FPlP7CVECTORi(local_58[2],color,otz);
  Flare_QuadRing__FPlP7CVECTORi(alStack72,color,otz);
  Flare_QuadRing__FPlP7CVECTORi(alStack64,color,otz);
  Flare_QuadRing__FPlP7CVECTORi(alStack56,color,otz);
  Flare_QuadRing__FPlP7CVECTORi(alStack48,color,otz);
  Flare_QuadRing__FPlP7CVECTORi(alStack40,color,otz);
  Flare_QuadRing__FPlP7CVECTORi(alStack32,color,otz);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_InitLensFlare__Fv()
 // line 1568, offset 0x800ceb44
	/* begin block 1 */
		// Start line: 1569
		// Start offset: 0x800CEB44
	/* end block 1 */
	// End offset: 0x800CEB44
	// End Line: 1570

void Flare_InitLensFlare__Fv(void)
{
  DAT_801202ec = 0x50;
  DAT_801202f0 = &Flare_SunFlarePieces;
  DAT_801202f4 = 0;
  DAT_801202f5 = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_LensFlare__FP7DVECTORP15Draw_FlareCache(struct DVECTOR *screenPos /*stack 0*/, struct Draw_FlareCache *sd /*$a1*/)
 // line 1578, offset 0x800ceb6c
	/* begin block 1 */
		// Start line: 1579
		// Start offset: 0x800CEB6C
		// Variables:
	// 		int dx; // stack offset -64
	// 		int dy; // stack offset -60
	// 		struct DVECTOR pxy; // stack offset -160
	// 		int width; // $a2
	// 		int height; // $a3
	// 		int i; // $s0
	// 		int sx; // $fp
	// 		int sy; // $s7
	// 		struct FLARE_PIECE_DEF *piece; // $t0
	// 		long angleZ; // $s1
	// 		long angleZ2; // stack offset -56
	// 		char flareVis; // $s5

		/* begin block 1.1 */
			// Start line: 1591
			// Start offset: 0x800CEBB4
			// Variables:
		// 		long result; // $v1
		/* end block 1.1 */
		// End offset: 0x800CEBB4
		// End Line: 1592

		/* begin block 1.2 */
			// Start line: 1592
			// Start offset: 0x800CEBB4
			// Variables:
		// 		struct DVECTOR pt[4]; // stack offset -152
		// 		struct CVECTOR col; // stack offset -136
		/* end block 1.2 */
		// End offset: 0x800CEBB4
		// End Line: 1592

		/* begin block 1.3 */
			// Start line: 1656
			// Start offset: 0x800CECB0
			// Variables:
		// 		struct MATRIX scalemat; // stack offset -128
		// 		struct MATRIX mtx; // stack offset -96
		/* end block 1.3 */
		// End offset: 0x800CECB0
		// End Line: 1659

		/* begin block 1.4 */
			// Start line: 1659
			// Start offset: 0x800CECB0

			/* begin block 1.4.1 */
				// Start line: 1695
				// Start offset: 0x800CEF60

				/* begin block 1.4.1.1 */
					// Start line: 1705
					// Start offset: 0x800CF010

					/* begin block 1.4.1.1.1 */
						// Start line: 1712
						// Start offset: 0x800CF020
						// Variables:
					// 		struct CVECTOR col; // stack offset -152
					/* end block 1.4.1.1.1 */
					// End offset: 0x800CF128
					// End Line: 1731
				/* end block 1.4.1.1 */
				// End offset: 0x800CF128
				// End Line: 1731
			/* end block 1.4.1 */
			// End offset: 0x800CF128
			// End Line: 1731
		/* end block 1.4 */
		// End offset: 0x800CF130
		// End Line: 1735

		/* begin block 1.5 */
			// Start line: 1737
			// Start offset: 0x800CF130
			// Variables:
		// 		struct DR_MODE *aprim; // $a0
		/* end block 1.5 */
		// End offset: 0x800CF1A0
		// End Line: 1737
	/* end block 1 */
	// End offset: 0x800CF1A0
	// End Line: 1737

void Flare_LensFlare__FP7DVECTORP15Draw_FlareCache(DVECTOR *screenPos,Draw_FlareCache *sd)
{
  short sVar1;
  short sVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int *piVar7;
  uint uVar8;
  int width;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  DVECTOR local_a0 [2];
  short local_98;
  ushort local_96;
  short local_94;
  ushort local_92;
  short local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  CVECTOR local_88 [2];
  int local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_40;
  int local_3c;
  int local_38;
  
  if ((sd->head).cprim.PrimPtr < (sd->head).cprim.MPrimPtr + -0x400) {
    iVar12 = 0;
    sVar1 = screenPos->vx;
    iVar4 = (int)sVar1;
    sVar2 = screenPos->vy;
    iVar5 = (int)sVar2;
    local_88[0] = (CVECTOR)0xffffff;
    local_98 = sVar1 + -2;
    local_96 = sVar2 - 2;
    local_94 = sVar1 + 3;
    local_8e = sVar2 + 3;
    local_38 = (iVar4 + iVar5) * 6;
    local_92 = local_96;
    local_90 = local_98;
    local_8c = local_94;
    local_8a = local_8e;
    Flare_QuadNotTransparent__FPlP7CVECTORi((long *)&local_98,local_88,Draw_gViewOtSize + -2);
    local_40 = 0x140 - iVar4;
    local_3c = 0xf0 - iVar5;
    uVar13 = 0;
    puVar6 = &gFlare_LensFlare;
    DAT_801202f4 = 1;
    DAT_80120280 = gFlare_LensFlare;
    DAT_80120282 = DAT_8012027a;
    do {
      if ((puVar6[8] & 0x7fff) == 0x7fff) {
        uVar13 = uVar13 + 1;
      }
      iVar12 = iVar12 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar12 < 0x19);
    uVar13 = uVar13 & 0xff;
    gFlare_LensFlare = sVar1;
    DAT_8012027a = sVar2;
    if (uVar13 != 0) {
      local_80 = uVar13 << 7;
      local_70 = 0;
      local_7c = 0;
      local_74 = 0;
      uGp00001324 = 0;
      gFlare_LensFlare = sVar1;
      DAT_8012027a = sVar2;
      local_78 = uVar13 << 6;
      Flare_IdentMatrix__FP6MATRIX((MATRIX *)&local_60);
      RotMatrixZ((iVar4 + iVar5) * 8,(MATRIX *)&local_60);
      setCopControlWord(2,0,local_80);
      setCopControlWord(2,0x800,local_7c);
      setCopControlWord(2,0x1000,local_78);
      setCopControlWord(2,0x1800,local_74);
      setCopControlWord(2,0x2000,local_70);
      setCopReg(2,0x4800,local_60 & 0xffff);
      setCopReg(2,0x5000,local_5c >> 0x10);
      setCopReg(2,0x5800,local_54 & 0xffff);
      copFunction(2,0x49e012);
      uVar8 = getCopReg(2,0x4800);
      width = getCopReg(2,0x5000);
      uVar10 = getCopReg(2,0x5800);
      setCopReg(2,0x4800,local_60 >> 0x10);
      setCopReg(2,0x5000,local_58 & 0xffff);
      setCopReg(2,0x5800,local_54 >> 0x10);
      copFunction(2,0x49e012);
      iVar12 = getCopReg(2,0x4800);
      uVar9 = getCopReg(2,0x5000);
      iVar11 = getCopReg(2,0x5800);
      local_60 = uVar8 & 0xffff | iVar12 << 0x10;
      local_54 = uVar10 & 0xffff | iVar11 << 0x10;
      setCopReg(2,0x4800,local_5c & 0xffff);
      setCopReg(2,0x5000,local_58 >> 0x10);
      setCopReg(2,0x5800,local_50 & 0xffff);
      copFunction(2,0x49e012);
      uVar8 = getCopReg(2,0x4800);
      iVar12 = getCopReg(2,0x5000);
      uVar10 = getCopReg(2,0x5800);
      local_5c = width << 0x10 | uVar8 & 0xffff;
      local_58 = uVar9 & 0xffff | iVar12 << 0x10;
      local_50 = local_50 & 0xffff0000 | uVar10 & 0xffff;
      setCopControlWord(2,0,local_60);
      setCopControlWord(2,0x800,local_5c);
      setCopControlWord(2,0x1000,local_58);
      setCopControlWord(2,0x1800,local_54);
      setCopControlWord(2,0x2000,local_50);
      Flare_Spikes__FPli((long *)screenPos,0);
      local_80 = uVar13 << 6;
      Flare_IdentMatrix__FP6MATRIX((MATRIX *)&local_60);
      RotMatrixZ(local_38,(MATRIX *)&local_60);
      setCopControlWord(2,0,local_80);
      setCopControlWord(2,0x800,local_7c);
      setCopControlWord(2,0x1000,local_78);
      setCopControlWord(2,0x1800,local_74);
      setCopControlWord(2,0x2000,local_70);
      setCopReg(2,0x4800,local_60 & 0xffff);
      setCopReg(2,0x5000,local_5c >> 0x10);
      setCopReg(2,0x5800,local_54 & 0xffff);
      copFunction(2,0x49e012);
      uVar8 = getCopReg(2,0x4800);
      width = getCopReg(2,0x5000);
      uVar10 = getCopReg(2,0x5800);
      setCopReg(2,0x4800,local_60 >> 0x10);
      setCopReg(2,0x5000,local_58 & 0xffff);
      setCopReg(2,0x5800,local_54 >> 0x10);
      copFunction(2,0x49e012);
      iVar12 = getCopReg(2,0x4800);
      uVar9 = getCopReg(2,0x5000);
      iVar11 = getCopReg(2,0x5800);
      local_60 = uVar8 & 0xffff | iVar12 << 0x10;
      local_54 = uVar10 & 0xffff | iVar11 << 0x10;
      setCopReg(2,0x4800,local_5c & 0xffff);
      setCopReg(2,0x5000,local_58 >> 0x10);
      setCopReg(2,0x5800,local_50 & 0xffff);
      copFunction(2,0x49e012);
      uVar8 = getCopReg(2,0x4800);
      iVar12 = getCopReg(2,0x5000);
      uVar10 = getCopReg(2,0x5800);
      local_5c = width << 0x10 | uVar8 & 0xffff;
      local_58 = uVar9 & 0xffff | iVar12 << 0x10;
      local_50 = local_50 & 0xffff0000 | uVar10 & 0xffff;
      setCopControlWord(2,0,local_60);
      setCopControlWord(2,0x800,local_5c);
      setCopControlWord(2,0x1000,local_58);
      setCopControlWord(2,0x1800,local_54);
      setCopControlWord(2,0x2000,local_50);
      Flare_Spikes__FPli((long *)screenPos,0);
      iVar12 = 0;
      *(undefined4 *)(DAT_801202f0 + 8) = 0;
      do {
        puVar3 = _DAT_1f800000;
        if (8 < iVar12) {
          *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *_DAT_1f800000 & 0xffffff;
          uVar13 = (uint)_DAT_1f800004 & 0xffffff;
          _DAT_1f800004 = _DAT_1f800004 + 3;
          *puVar3 = *puVar3 & 0xff000000 | uVar13;
          SetDrawMode();
          return;
        }
        piVar7 = (int *)(DAT_801202f0 + iVar12 * 0x10);
        width = (0x10000 - *piVar7) * iVar4 + *piVar7 * local_40;
        local_a0[0].vx = (short)((uint)width >> 0x10);
        if (width < 0) {
          local_a0[0].vx = (short)((uint)(width + 0xffff) >> 0x10);
        }
        width = (0x10000 - *piVar7) * iVar5 + *piVar7 * local_3c;
        local_a0[0].vy = (short)((uint)width >> 0x10);
        if (width < 0) {
          local_a0[0].vy = (short)((uint)(width + 0xffff) >> 0x10);
        }
        width = DAT_801202ec * piVar7[1];
        if (width < 0) {
          width = width + 0xffff;
        }
        width = width >> 0x10;
        if (width < 4) goto switchD_800cf0c0_caseD_5;
        local_98 = CONCAT11((char)((int)((uint)*(byte *)((int)piVar7 + 9) * uVar13) / 0x19),
                            (char)((int)((uint)*(byte *)(piVar7 + 2) * uVar13) / 0x19));
        local_96 = local_96 & 0xff00 |
                   (ushort)(byte)((int)((uint)*(byte *)((int)piVar7 + 10) * uVar13) / 0x19);
        switch(*(undefined *)(piVar7 + 3)) {
        case 0:
        case 1:
          Flare_SingleColorTex__FP7DVECTORP7CVECTORiici
                    (local_a0,(CVECTOR *)&local_98,width,width,(uint)*(byte *)(piVar7 + 3),0);
          iVar12 = iVar12 + 1;
          break;
        case 2:
          Flare_SingleColorHex__FP7DVECTORP7CVECTORiii(local_a0,(CVECTOR *)&local_98,width,width,0);
          iVar12 = iVar12 + 1;
          break;
        case 3:
          Flare_SingleColorOct__FP7DVECTORP7CVECTORiii(local_a0,(CVECTOR *)&local_98,width,width,0);
          iVar12 = iVar12 + 1;
          break;
        case 4:
          Flare_SingleColorOctRing__FP7DVECTORP7CVECTORiii
                    (local_a0,(CVECTOR *)&local_98,width,width,0);
        default:
switchD_800cf0c0_caseD_5:
          iVar12 = iVar12 + 1;
        }
      } while( true );
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_Sun__FP7SVECTORP15Draw_FlareCache(struct SVECTOR *worldPos /*$a0*/, struct Draw_FlareCache *sd /*$a1*/)
 // line 1742, offset 0x800cf1d0
	/* begin block 1 */
		// Start line: 1743
		// Start offset: 0x800CF1D0
		// Variables:
	// 		struct VECTOR diff; // stack offset -80
	// 		struct CVECTOR color; // stack offset -64
	// 		struct DVECTOR posOnScreen; // stack offset -56
	// 		int pshift; // $a2
	// 		int vertRezBy2; // $v1
	// 		int dvz; // $v1
	// 		int otz; // $s0

		/* begin block 1.1 */
			// Start line: 1792
			// Start offset: 0x800CF318
			// Variables:
		// 		struct DR_MODE *aprim; // $a0
		/* end block 1.1 */
		// End offset: 0x800CF318
		// End Line: 1792

		/* begin block 1.2 */
			// Start line: 1792
			// Start offset: 0x800CF318
			// Variables:
		// 		struct MATRIX scalemat; // stack offset -48
		/* end block 1.2 */
		// End offset: 0x800CF318
		// End Line: 1792

		/* begin block 1.3 */
			// Start line: 1818
			// Start offset: 0x800CF438
			// Variables:
		// 		struct DR_MODE *aprim; // $a0
		/* end block 1.3 */
		// End offset: 0x800CF4A8
		// End Line: 1818
	/* end block 1 */
	// End offset: 0x800CF4A8
	// End Line: 1818

void Flare_Sun__FP7SVECTORP15Draw_FlareCache(SVECTOR *worldPos,Draw_FlareCache *sd)
{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int otz;
  uint *puVar7;
  DVECTOR local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  otz = 0x78;
  if (DAT_801131f8 == 1) {
    otz = 0x3c;
  }
  if ((sd->head).cprim.PrimPtr < (sd->head).cprim.MPrimPtr + -0x400) {
    setCopReg(2,in_zero,*(undefined4 *)worldPos);
    setCopReg(2,in_at,*(undefined4 *)&worldPos->vz);
    copFunction(2,0x180001);
    iVar4 = getCopReg(2,0x19);
    iVar1 = getCopReg(2,0x1a);
    iVar2 = getCopReg(2,0x1b);
    if ((iVar4 <= iVar2) && (-iVar4 <= iVar2)) {
      uVar6 = getCopReg(2,0xe);
      iVar4 = 0x78;
      otz = (iVar1 >> 2) + otz;
      local_38[0] = uVar6 & 0xffff | otz * 0x10000;
      if (DAT_801131f8 == 1) {
        iVar4 = 0x3c;
      }
      local_38[0].vx = (short)(uVar6 & 0xffff);
      uVar5 = 0x2f8;
      if (false) {
        uVar5 = 0xb50;
      }
      setCopControlWord(2,0x2800,((int)local_38[0].vx + -0xa0) * 4);
      setCopControlWord(2,0x3000,((otz * 0x10000 >> 0x10) - iVar4) * 4);
      setCopControlWord(2,0x3800,uVar5);
      if ((((int)local_38[0].vx < 0x13d) && (DAT_801131f8 != 1)) && (true)) {
        Flare_LensFlare__FP7DVECTORP15Draw_FlareCache(local_38,sd);
      }
      puVar3 = _DAT_1f800004;
      gfrgb = 0x808080;
      otz = Draw_gViewOtSize + -2;
      puVar7 = (uint *)(otz * 4 + _DAT_1f800000);
      *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar7 & 0xffffff;
      uVar6 = (uint)_DAT_1f800004 & 0xffffff;
      _DAT_1f800004 = _DAT_1f800004 + 3;
      *puVar7 = *puVar7 & 0xff000000 | uVar6;
      SetDrawMode(puVar3,0,0,0x120,0);
      local_30 = 0x400;
      local_28 = 0x400;
      local_20 = 0;
      local_2c = 0;
      local_24 = 0;
      setCopControlWord(2,0,0x400);
      setCopControlWord(2,0x800,0);
      setCopControlWord(2,0x1000,0x400);
      setCopControlWord(2,0x1800,0);
      setCopControlWord(2,0x2000,0);
      if (true) {
        Flare_OctFlare__FPli((long *)local_38,otz);
      }
      else {
        Flare_SingleColorTex__FP7DVECTORP7CVECTORiici
                  (local_38,(CVECTOR *)&DAT_80123338,0x10,0x10,0,otz);
      }
      puVar3 = _DAT_1f800004;
      puVar7 = (uint *)(otz * 4 + _DAT_1f800000);
      *_DAT_1f800004 = *_DAT_1f800004 & 0xff000000 | *puVar7 & 0xffffff;
      uVar6 = (uint)_DAT_1f800004 & 0xffffff;
      _DAT_1f800004 = _DAT_1f800004 + 3;
      *puVar7 = *puVar7 & 0xff000000 | uVar6;
      SetDrawMode(puVar3,0,0,0x120,0);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Flare_Moon__FP7SVECTORP15Draw_FlareCache(struct SVECTOR *worldPos /*$a0*/, struct Draw_FlareCache *sd /*$a1*/)
 // line 1822, offset 0x800cf4bc
	/* begin block 1 */
		// Start line: 1823
		// Start offset: 0x800CF4BC
		// Variables:
	// 		struct VECTOR diff; // stack offset -40
	// 		struct CVECTOR color; // stack offset -24
	// 		struct DVECTOR posOnScreen; // stack offset -16
	// 		int pshift; // $a2
	/* end block 1 */
	// End offset: 0x800CF564
	// End Line: 1864

void Flare_Moon__FP7SVECTORP15Draw_FlareCache(SVECTOR *worldPos,Draw_FlareCache *sd)
{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_zero;
  undefined4 in_at;
  short sVar5;
  CVECTOR local_18 [2];
  DVECTOR local_10 [2];
  
  sVar5 = 0x78;
  if (DAT_801131f8 == 1) {
    sVar5 = 0x3c;
  }
  setCopReg(2,in_zero,*(undefined4 *)worldPos);
  setCopReg(2,in_at,*(undefined4 *)&worldPos->vz);
  copFunction(2,0x180001);
  local_18[0] = (CVECTOR)0x808080;
  iVar1 = getCopReg(2,0x19);
  iVar2 = getCopReg(2,0x1a);
  iVar3 = getCopReg(2,0x1b);
  uVar4 = getCopReg(2,0xe);
  local_10[0] = (DVECTOR)(uVar4 & 0xffff | (uint)(ushort)((short)(iVar2 >> 2) + sVar5) << 0x10);
  if ((iVar1 <= iVar3) && (-iVar1 <= iVar3)) {
    Flare_SingleColorTex__FP7DVECTORP7CVECTORiici
              (local_10,local_18,0x10,0x10,0,Draw_gViewOtSize + -2);
  }
  return;


}





