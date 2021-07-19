#include "THISDUST.H"
#include "TRSPROJ.H"


// decompiled code
// original method signature: 
// void /*$ra*/ TrsProj_SetTransPrecision__Fi(int val /*$a0*/)
 // line 29, offset 0x800e192c
	/* begin block 1 */
		// Start line: 30
		// Start offset: 0x800E192C
	/* end block 1 */
	// End offset: 0x800E192C
	// End Line: 31

	/* begin block 2 */
		// Start line: 58
	/* end block 2 */
	// End Line: 59

	/* begin block 3 */
		// Start line: 58
	/* end block 3 */
	// End Line: 59

	/* begin block 4 */
		// Start line: 59
	/* end block 4 */
	// End Line: 60

	/* begin block 5 */
		// Start line: 59
	/* end block 5 */
	// End Line: 60

void TrsProj_SetTransPrecision__Fi(int val)

{
  TrsProj_precision = val;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrsProj_ResetTransPrecision__Fv()
 // line 41, offset 0x800e1938
	/* begin block 1 */
		// Start line: 42
		// Start offset: 0x800E1938
	/* end block 1 */
	// End offset: 0x800E1938
	// End Line: 43

	/* begin block 2 */
		// Start line: 71
	/* end block 2 */
	// End Line: 72

	/* begin block 3 */
		// Start line: 82
	/* end block 3 */
	// End Line: 83

	/* begin block 4 */
		// Start line: 82
	/* end block 4 */
	// End Line: 83

	/* begin block 5 */
		// Start line: 83
	/* end block 5 */
	// End Line: 84

	/* begin block 6 */
		// Start line: 83
	/* end block 6 */
	// End Line: 84

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TrsProj_ResetTransPrecision__Fv(void)

{
  TrsProj_precision = 10;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrsProj_SetProjection__Fiiii(int cx /*$s3*/, int cy /*$s2*/, int w /*$s0*/, int h /*$s1*/)
 // line 52, offset 0x800e1948
	/* begin block 1 */
		// Start line: 53
		// Start offset: 0x800E1948
	/* end block 1 */
	// End offset: 0x800E1948
	// End Line: 53

	/* begin block 2 */
		// Start line: 94
	/* end block 2 */
	// End Line: 95

	/* begin block 3 */
		// Start line: 104
	/* end block 3 */
	// End Line: 105

	/* begin block 4 */
		// Start line: 104
	/* end block 4 */
	// End Line: 105

void TrsProj_SetProjection__Fiiii(int cx,int cy,int w,int h)

{
  SetGeomScreen(Camera_gGeomScreen);
  setCopControlWord(2,0xc000,(cx + ((int)(w + ((uint)w >> 0x1f)) >> 1)) * 0x10000);
  setCopControlWord(2,0xc800,(cy + ((int)(h + ((uint)h >> 0x1f)) >> 1)) * 0x10000);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrsProj_SetMenuProjection__Fiiii(int cx /*$a0*/, int cy /*$a1*/, int w /*$a2*/, int h /*$a3*/)
 // line 67, offset 0x800e19c8
	/* begin block 1 */
		// Start line: 68
		// Start offset: 0x800E19C8
	/* end block 1 */
	// End offset: 0x800E19C8
	// End Line: 70

	/* begin block 2 */
		// Start line: 137
	/* end block 2 */
	// End Line: 138

	/* begin block 3 */
		// Start line: 141
	/* end block 3 */
	// End Line: 142

	/* begin block 4 */
		// Start line: 141
	/* end block 4 */
	// End Line: 142

	/* begin block 5 */
		// Start line: 143
	/* end block 5 */
	// End Line: 144

void TrsProj_SetMenuProjection__Fiiii(int cx,int cy,int w,int h)

{
  setCopControlWord(2,0xd000,0x200);
  setCopControlWord(2,0xc000,(cx + ((int)(w + ((uint)w >> 0x1f)) >> 1)) * 0x10000);
  setCopControlWord(2,0xc800,(cy + ((int)(h + ((uint)h >> 0x1f)) >> 1)) * 0x10000);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrsProj_SetViewTrsProjEnviro__FP13DRender_tView(struct DRender_tView *Vi /*$a0*/)
 // line 76, offset 0x800e1a08
	/* begin block 1 */
		// Start line: 77
		// Start offset: 0x800E1A08
	/* end block 1 */
	// End offset: 0x800E1A4C
	// End Line: 101

	/* begin block 2 */
		// Start line: 155
	/* end block 2 */
	// End Line: 156

	/* begin block 3 */
		// Start line: 159
	/* end block 3 */
	// End Line: 160

	/* begin block 4 */
		// Start line: 159
	/* end block 4 */
	// End Line: 160

void TrsProj_SetViewTrsProjEnviro__FP13DRender_tView(DRender_tView *Vi)

{
  int h;
  
  if (GameSetup_gData.commMode == 1) {
    h = 0x78;
  }
  else {
    h = 0xf0;
  }
  TrsProj_SetProjection__Fiiii(0,0,0x140,h);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrsProj_SetPsxMatrix__FP10matrixtdefP8coorddef(struct matrixtdef *m /*$a0*/, struct coorddef *t /*$a2*/)
 // line 137, offset 0x800e1a5c
	/* begin block 1 */
		// Start line: 138
		// Start offset: 0x800E1A5C
		// Variables:
	// 		struct MATRIX mpsx; // stack offset -40

		/* begin block 1.1 */
			// Start line: 138
			// Start offset: 0x800E1A5C
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a1
		/* end block 1.1 */
		// End offset: 0x800E1A5C
		// End Line: 138

		/* begin block 1.2 */
			// Start line: 138
			// Start offset: 0x800E1A5C
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a1
		/* end block 1.2 */
		// End offset: 0x800E1A5C
		// End Line: 138

		/* begin block 1.3 */
			// Start line: 138
			// Start offset: 0x800E1A5C
			// Variables:
		// 		int r0; // $v0
		// 		int r1; // $v1
		// 		int r2; // $a0
		/* end block 1.3 */
		// End offset: 0x800E1A5C
		// End Line: 138
	/* end block 1 */
	// End offset: 0x800E1B3C
	// End Line: 152

	/* begin block 2 */
		// Start line: 244
	/* end block 2 */
	// End Line: 245

	/* begin block 3 */
		// Start line: 281
	/* end block 3 */
	// End Line: 282

	/* begin block 4 */
		// Start line: 281
	/* end block 4 */
	// End Line: 282

void TrsProj_SetPsxMatrix__FP10matrixtdefP8coorddef(matrixtdef *m,coorddef *t)

{
  uint local_18;
  
  local_18 = local_18 & 0xffff0000 | m->m[8] >> 4 & 0xffffU;
  setCopControlWord(2,0,m->m[0] >> 4 & 0xffffU | (m->m[3] >> 4) << 0x10);
  setCopControlWord(2,0x800,m->m[6] >> 4 & 0xffffU | (m->m[1] >> 4) << 0x10);
  setCopControlWord(2,0x1000,m->m[4] >> 4 & 0xffffU | (m->m[7] >> 4) << 0x10);
  setCopControlWord(2,0x1800,m->m[2] >> 4 & 0xffffU | (m->m[5] >> 4) << 0x10);
  setCopControlWord(2,0x2000,local_18);
  if (t == (coorddef *)0x0) {
    setCopControlWord(2,0x2800,0);
    setCopControlWord(2,0x3000,0);
    setCopControlWord(2,0x3800,0);
  }
  else {
    TrsProj_SetPsxTrans__FP8coorddef(t);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrsProj_SetPsxTrans__FP8coorddef(struct coorddef *t /*$a0*/)
 // line 157, offset 0x800e1b4c
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x800E1B4C
		// Variables:
	// 		struct MATRIX mpsx; // stack offset -32
	/* end block 1 */
	// End offset: 0x800E1B4C
	// End Line: 158

	/* begin block 2 */
		// Start line: 317
	/* end block 2 */
	// End Line: 318

	/* begin block 3 */
		// Start line: 323
	/* end block 3 */
	// End Line: 324

	/* begin block 4 */
		// Start line: 323
	/* end block 4 */
	// End Line: 324

	/* begin block 5 */
		// Start line: 326
	/* end block 5 */
	// End Line: 327

void TrsProj_SetPsxTrans__FP8coorddef(coorddef *t)

{
  setCopControlWord(2,0x2800,t->x >> 10);
  setCopControlWord(2,0x3000,t->y >> 10);
  setCopControlWord(2,0x3800,t->z >> 10);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrsProj_SetPsxTransZero__Fv()
 // line 168, offset 0x800e1b9c
	/* begin block 1 */
		// Start line: 169
		// Start offset: 0x800E1B9C
		// Variables:
	// 		struct MATRIX mpsx; // stack offset -32
	/* end block 1 */
	// End offset: 0x800E1B9C
	// End Line: 169

	/* begin block 2 */
		// Start line: 344
	/* end block 2 */
	// End Line: 345

	/* begin block 3 */
		// Start line: 348
	/* end block 3 */
	// End Line: 349

	/* begin block 4 */
		// Start line: 348
	/* end block 4 */
	// End Line: 349

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TrsProj_SetPsxTransZero__Fv(void)

{
  setCopControlWord(2,0x2800,0);
  setCopControlWord(2,0x3000,0);
  setCopControlWord(2,0x3800,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrsProj_TransPt__FP8coorddefT0(struct coorddef *s /*$a0*/, struct coorddef *d /*$a1*/)
 // line 177, offset 0x800e1bcc
	/* begin block 1 */
		// Start line: 178
		// Start offset: 0x800E1BCC
		// Variables:
	// 		struct SVECTOR pt; // stack offset -24
	// 		struct VECTOR tv; // stack offset -16
	/* end block 1 */
	// End offset: 0x800E1BCC
	// End Line: 178

	/* begin block 2 */
		// Start line: 360
	/* end block 2 */
	// End Line: 361

	/* begin block 3 */
		// Start line: 366
	/* end block 3 */
	// End Line: 367

	/* begin block 4 */
		// Start line: 366
	/* end block 4 */
	// End Line: 367

	/* begin block 5 */
		// Start line: 370
	/* end block 5 */
	// End Line: 371

void TrsProj_TransPt__FP8coorddefT0(coorddef *s,coorddef *d)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_zero;
  undefined4 in_at;
  uint local_14;
  
  local_14 = local_14 & 0xffff0000 | s->z >> 10 & 0xffffU;
  setCopReg(2,in_zero,s->x >> 10 & 0xffffU | (s->y >> 10) << 0x10);
  setCopReg(2,in_at,local_14);
  copFunction(2,0x480012);
  iVar1 = getCopReg(2,0x19);
  iVar2 = getCopReg(2,0x1a);
  iVar3 = getCopReg(2,0x1b);
  d->x = iVar1 << 10;
  d->y = iVar2 << 10;
  d->z = iVar3 << 10;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrsProj_TransPtN16__FP10RelCoord16P8coorddefi(struct RelCoord16 *s /*$a0*/, struct coorddef *d /*$a3*/, int n /*$v1*/)
 // line 224, offset 0x800e1c58
	/* begin block 1 */
		// Start line: 225
		// Start offset: 0x800E1C58
		// Variables:
	// 		struct SVECTOR pt; // stack offset -24
	// 		struct VECTOR tv; // stack offset -16
	/* end block 1 */
	// End offset: 0x800E1CD8
	// End Line: 244

	/* begin block 2 */
		// Start line: 432
	/* end block 2 */
	// End Line: 433

	/* begin block 3 */
		// Start line: 464
	/* end block 3 */
	// End Line: 465

	/* begin block 4 */
		// Start line: 464
	/* end block 4 */
	// End Line: 465

void TrsProj_TransPtN16__FP10RelCoord16P8coorddefi(RelCoord16 *s,coorddef *d,int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_zero;
  undefined4 in_at;
  int iVar4;
  int *piVar5;
  uint local_18;
  uint local_14;
  
  iVar4 = n + -1;
  if (n != 0) {
    piVar5 = &d->z;
    do {
      local_18 = (uint)(ushort)s->x;
      local_14 = local_14 & 0xffff0000 | (uint)(ushort)s->z;
      setCopReg(2,in_zero,local_18);
      setCopReg(2,in_at,local_14);
      copFunction(2,0x480012);
      iVar1 = getCopReg(2,0x19);
      iVar2 = getCopReg(2,0x1a);
      iVar3 = getCopReg(2,0x1b);
      s = s + 1;
      d->x = iVar1;
      iVar4 = iVar4 + -1;
      piVar5[-1] = iVar2;
      d = d + 1;
      *piVar5 = iVar3;
      piVar5 = piVar5 + 3;
    } while (iVar4 != -1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TrsProj_TransformProjectVertex__FP10matrixtdefP8coorddefiT1P12Draw_tVertex(struct matrixtdef *m /*$s7*/, struct coorddef *t /*$s4*/, int n /*$s5*/, struct coorddef *s /*$s3*/, struct Draw_tVertex *v /*stack 16*/)
 // line 250, offset 0x800e1ce0
	/* begin block 1 */
		// Start line: 251
		// Start offset: 0x800E1CE0
		// Variables:
	// 		int i; // $s1
	// 		struct coorddef tmp; // stack offset -56
	/* end block 1 */
	// End offset: 0x800E1D94
	// End Line: 265

	/* begin block 2 */
		// Start line: 519
	/* end block 2 */
	// End Line: 520

	/* begin block 3 */
		// Start line: 526
	/* end block 3 */
	// End Line: 527

	/* begin block 4 */
		// Start line: 526
	/* end block 4 */
	// End Line: 527

void TrsProj_TransformProjectVertex__FP10matrixtdefP8coorddefiT1P12Draw_tVertex
               (matrixtdef *m,coorddef *t,int n,coorddef *s,Draw_tVertex *v)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int local_38;
  int local_34;
  int local_30;
  
  iVar3 = 0;
  if (0 < n) {
    psVar2 = &(v->sv).p;
    do {
      transform((int *)s,(int *)m,&local_38);
      s = s + 1;
      (v->sv).x = (short)(local_38 + t->x >> 10);
      iVar3 = iVar3 + 1;
      psVar2[-2] = (short)(local_34 + t->y >> 10);
      iVar1 = t->z;
      v = v + 1;
      *psVar2 = 10;
      psVar2[-1] = (short)(local_30 + iVar1 >> 10);
      psVar2 = psVar2 + 4;
    } while (iVar3 < n);
  }
  return;
}





