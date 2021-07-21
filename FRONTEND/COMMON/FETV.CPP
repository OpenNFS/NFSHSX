#include "THISDUST.H"
#include "FETV.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DrawTVLines__FR9tTVConfig(struct tTVConfig *tv /*$s0*/)
 // line 25, offset 0x80021ff8
	/* begin block 1 */
		// Start line: 26
		// Start offset: 0x80021FF8
		// Variables:
	// 		short fxHeight; // $t2
	// 		short x; // $s1
	// 		short y; // $t1
	// 		struct POLY_F4 *videoFX; // $t0
	/* end block 1 */
	// End offset: 0x80022334
	// End Line: 78

	/* begin block 2 */
		// Start line: 50
	/* end block 2 */
	// End Line: 51

	/* begin block 3 */
		// Start line: 50
	/* end block 3 */
	// End Line: 51

void DrawTVLines__FR9tTVConfig(tTVConfig *tv)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  ushort uVar10;
  
  iVar7 = (int)tv->fxWide + 1;
  iVar6 = (int)tv->h * 0x30;
  _uVar10 = iVar7 % iVar6;
  uVar10 = (ushort)_uVar10;
  if (iVar6 == 0) {
    trap(0x1c00);
  }
  if ((iVar6 == -1) && (iVar7 == -0x80000000)) {
    trap(0x1800);
  }
  iVar6 = (int)tv->h * 0x30;
  iVar7 = (int)tv->fxThin + 2;
  if (iVar6 == 0) {
    trap(0x1c00);
  }
  if ((iVar6 == -1) && (iVar7 == -0x80000000)) {
    trap(0x1800);
  }
  uVar1 = tv->y;
  tv->fxWide = uVar10;
  tv->fxThin = (short)(iVar7 % iVar6);
  puVar5 = DAT_1f800004;
  puVar4 = DAT_1f800000;
  sVar9 = 8;
  if ((int)tv->fxWide < (int)tv->y) {
    iVar6 = 8 - ((uint)uVar1 - _uVar10);
    uVar10 = uVar1;
  }
  else {
    iVar6 = 0x80000;
    if ((int)tv->fxWide + 8 <= (int)tv->y + (int)tv->h) goto LAB_800220e8;
    iVar6 = (uint)uVar1 - _uVar10;
  }
  sVar9 = (short)iVar6;
  iVar6 = iVar6 << 0x10;
LAB_800220e8:
  if (0 < iVar6) {
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar8 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 6;
    *puVar4 = *puVar4 & 0xff000000 | uVar8;
    *(undefined *)((int)puVar5 + 7) = 0x2a;
    *(undefined *)((int)puVar5 + 3) = 5;
    sVar2 = tv->x;
    *(ushort *)((int)puVar5 + 10) = uVar10;
    *(short *)(puVar5 + 2) = sVar2;
    sVar2 = tv->x;
    sVar3 = tv->w;
    *(ushort *)((int)puVar5 + 0xe) = uVar10;
    *(short *)(puVar5 + 3) = sVar2 + sVar3;
    sVar2 = tv->x;
    *(short *)((int)puVar5 + 0x12) = uVar10 + sVar9;
    *(short *)(puVar5 + 4) = sVar2;
    sVar2 = tv->x;
    sVar3 = tv->w;
    *(short *)((int)puVar5 + 0x16) = uVar10 + sVar9;
    *(undefined *)((int)puVar5 + 6) = 10;
    *(undefined *)((int)puVar5 + 5) = 10;
    *(undefined *)(puVar5 + 1) = 10;
    *(short *)(puVar5 + 5) = sVar2 + sVar3;
  }
  puVar5 = DAT_1f800004;
  puVar4 = DAT_1f800000;
  sVar9 = tv->fxThin;
  if (((int)tv->y < (int)tv->fxThin) && ((int)tv->fxThin < (int)tv->y + (int)tv->h)) {
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar8 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 6;
    *puVar4 = *puVar4 & 0xff000000 | uVar8;
    *(undefined *)((int)puVar5 + 7) = 0x2a;
    *(undefined *)((int)puVar5 + 3) = 5;
    sVar2 = tv->x;
    *(short *)((int)puVar5 + 10) = sVar9;
    *(short *)(puVar5 + 2) = sVar2;
    sVar2 = tv->x;
    sVar3 = tv->w;
    *(short *)((int)puVar5 + 0xe) = sVar9;
    *(short *)(puVar5 + 3) = sVar2 + sVar3;
    sVar2 = tv->x;
    *(short *)((int)puVar5 + 0x12) = sVar9 + 1;
    *(short *)(puVar5 + 4) = sVar2;
    sVar2 = tv->x;
    sVar3 = tv->w;
    *(short *)((int)puVar5 + 0x16) = sVar9 + 1;
    *(undefined *)((int)puVar5 + 6) = 10;
    *(undefined *)((int)puVar5 + 5) = 10;
    *(undefined *)(puVar5 + 1) = 10;
    *(short *)(puVar5 + 5) = sVar2 + sVar3;
  }
  FeDraw_SetABRMode__Fi(1);
  if ((tv->flags & 0x20) != 0) {
    uVar8 = (uint)(ushort)tv->x + 4 & 0xfffffffc;
    if ((int)(short)uVar8 < (int)tv->x + (int)tv->w) {
      do {
        PSXDrawTransSquare__Fiiiiis((int)&DAT_000a0a0a,(int)(short)uVar8,(int)tv->y,1,(int)tv->h,1);
        uVar8 = uVar8 + 4;
      } while ((int)(uVar8 * 0x10000) >> 0x10 < (int)tv->x + (int)tv->w);
    }
    FeDraw_SetABRMode__Fi(2);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawTV__FR9tTVConfig(struct tTVConfig *tv /*$s2*/)
 // line 82, offset 0x8002234c
	/* begin block 1 */
		// Start line: 83
		// Start offset: 0x8002234C
		// Variables:
	// 		struct POLY_FT4 *texture; // $s0
	// 		struct POLY_GT4 *reflection; // $s0
	// 		struct tTexture_ShapeInfo *noise; // $s1
	// 		short videoX; // $s6
	// 		short videoY; // $s3
	// 		short videoWidth; // stack offset -64
	// 		short videoHeight; // stack offset -56
	// 		short fadeTop; // $a0
	// 		short fadeBottom; // $t0
	// 		unsigned long tint; // $fp
	// 		short bright; // $a1
	// 		void * do_tint; // stack offset -48
	/* end block 1 */
	// End offset: 0x80022FD8
	// End Line: 282

	/* begin block 2 */
		// Start line: 173
	/* end block 2 */
	// End Line: 174

	/* begin block 3 */
		// Start line: 178
	/* end block 3 */
	// End Line: 179

	/* begin block 4 */
		// Start line: 178
	/* end block 4 */
	// End Line: 179

void DrawTV__FR9tTVConfig(tTVConfig *tv)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  ushort uVar11;
  tTVState tVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined2 uVar16;
  short sVar17;
  int iVar18;
  char *pcVar19;
  uint uVar20;
  uint uVar21;
  uint local_30;
  
  uVar10 = rand();
  uVar15 = (uint)tv->destBrightness;
  uVar21 = tv->tint;
  sVar3 = tv->x;
  uVar4 = tv->y;
  uVar20 = (uint)uVar4;
  sVar17 = tv->w;
  pcVar19 = &gHelpShapes[0x1e].depth + (uVar10 & 3) * 0x20;
  uVar5 = tv->h;
  bVar1 = (tv->flags & 2) == 0;
  if (bVar1) {
    uVar21 = 0x808080;
  }
  local_30 = (uint)!bVar1;
  uVar11 = tv->destBrightness;
  uVar10 = (uint)uVar11;
  if ((int)tv->transition == uVar10) {
LAB_80022460:
    tVar12 = tv->state;
  }
  else {
    if (((int)tv->transition < (int)uVar10) &&
       (sVar8 = tv->transition + 4, tv->state + ~tv_StateOff < 2)) {
      tv->transition = sVar8;
      bVar1 = (int)uVar10 < (int)sVar8;
LAB_80022454:
      if (bVar1) {
        tv->transition = uVar11;
      }
      goto LAB_80022460;
    }
    tVar12 = tv->state;
    if ((tVar12 == tv_TransitionOff) || (tVar12 == tv_StateOn)) {
      uVar11 = tv->destBrightness;
      sVar8 = tv->transition + -8;
      tv->transition = sVar8;
      bVar1 = (int)sVar8 < (int)(uint)uVar11;
      goto LAB_80022454;
    }
  }
  if (tVar12 == tv_StateOn) {
LAB_800224a0:
    uVar11 = tv->destBrightness;
  }
  else {
    if ((int)tVar12 < 2) {
      if (tVar12 != tv_StateOff) {
        uVar10 = uVar21 >> 0x10 & 0xff;
        goto LAB_800224ec;
      }
      goto LAB_800224a0;
    }
    if (tVar12 == tv_TransitionOn) {
      if ((int)tv->transition == (uint)tv->destBrightness) {
        tv->state = tv_StateOn;
      }
    }
    else {
      if (tVar12 != tv_TransitionOff) {
        uVar10 = uVar21 >> 0x10 & 0xff;
        goto LAB_800224ec;
      }
      if ((int)tv->transition == (uint)tv->destBrightness) {
        tv->state = tv_StateOff;
      }
    }
    local_30 = 1;
    uVar11 = tv->transition;
  }
  uVar15 = (uint)uVar11;
  uVar10 = uVar21 >> 0x10 & 0xff;
LAB_800224ec:
  iVar18 = (int)(uVar15 << 0x10) >> 0x10;
  uVar14 = (uVar21 & 0xff) * iVar18 >> 7;
  uVar10 = (uVar10 * iVar18 >> 7) << 0x10 | ((uVar21 >> 8 & 0xff) * iVar18 >> 7) << 8 | uVar14;
  if ((tv->flags & 8) == 0) {
    DrawTVLines__FR9tTVConfig(tv);
  }
  puVar7 = DAT_1f800004;
  puVar6 = DAT_1f800000;
  if ((tv->flags & 0x10) == 0) {
    if (tv->state != tv_StateOn) {
      *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
      uVar21 = (uint)DAT_1f800004 & 0xffffff;
      DAT_1f800004 = DAT_1f800004 + 10;
      *puVar6 = *puVar6 & 0xff000000 | uVar21;
      uVar15 = 0x40 - ((int)(uVar15 << 0x10) >> 0x11);
      puVar7[1] = uVar15 * 0x10000 | uVar15 * 0x100 | uVar15;
      SetPolyFT4((int)puVar7);
      SetSemiTrans((int)puVar7,1);
      SetShadeTex((int)puVar7,0);
      *(short *)(puVar7 + 2) = sVar3;
      *(ushort *)((int)puVar7 + 10) = uVar4;
      *(ushort *)((int)puVar7 + 0x12) = uVar4;
      *(short *)(puVar7 + 6) = sVar3;
      *(short *)(puVar7 + 4) = sVar3 + sVar17;
      *(short *)(puVar7 + 8) = sVar3 + sVar17;
      uVar16 = (undefined2)(uVar20 + (uint)uVar5);
      *(undefined2 *)((int)puVar7 + 0x1a) = uVar16;
      *(undefined2 *)((int)puVar7 + 0x22) = uVar16;
      bVar2 = pcVar19[8];
      iVar13 = ((int)*(short *)(pcVar19 + 0x18) - (int)(short)(*(ushort *)(pcVar19 + 0x18) & 0xffc0)
               ) * 0x10;
      if (bVar2 == 0) {
        trap(0x1c00);
      }
      if (((uint)bVar2 == 0xffffffff) && (iVar13 == -0x80000000)) {
        trap(0x1800);
      }
      *(char *)(puVar7 + 3) = (char)(iVar13 / (int)(uint)bVar2);
      *(char *)((int)puVar7 + 0xd) = pcVar19[0x1a];
      bVar2 = pcVar19[8];
      iVar13 = ((int)*(short *)(pcVar19 + 0x18) - (int)(short)(*(ushort *)(pcVar19 + 0x18) & 0xffc0)
               ) * 0x10;
      if (bVar2 == 0) {
        trap(0x1c00);
      }
      if (((uint)bVar2 == 0xffffffff) && (iVar13 == -0x80000000)) {
        trap(0x1800);
      }
      *(char *)(puVar7 + 5) = pcVar19[0x10] + (char)(iVar13 / (int)(uint)bVar2);
      *(char *)((int)puVar7 + 0x15) = pcVar19[0x1a];
      bVar2 = pcVar19[8];
      iVar13 = ((int)*(short *)(pcVar19 + 0x18) - (int)(short)(*(ushort *)(pcVar19 + 0x18) & 0xffc0)
               ) * 0x10;
      if (bVar2 == 0) {
        trap(0x1c00);
      }
      if (((uint)bVar2 == 0xffffffff) && (iVar13 == -0x80000000)) {
        trap(0x1800);
      }
      *(char *)(puVar7 + 7) = (char)(iVar13 / (int)(uint)bVar2);
      *(char *)((int)puVar7 + 0x1d) = pcVar19[0x12] + pcVar19[0x1a];
      bVar2 = pcVar19[8];
      iVar13 = ((int)*(short *)(pcVar19 + 0x18) - (int)(short)(*(ushort *)(pcVar19 + 0x18) & 0xffc0)
               ) * 0x10;
      if (bVar2 == 0) {
        trap(0x1c00);
      }
      if (((uint)bVar2 == 0xffffffff) && (iVar13 == -0x80000000)) {
        trap(0x1800);
      }
      *(char *)(puVar7 + 9) = pcVar19[0x10] + (char)(iVar13 / (int)(uint)bVar2);
      *(char *)((int)puVar7 + 0x25) = pcVar19[0x12] + pcVar19[0x1a];
      *(ushort *)((int)puVar7 + 0x16) =
           (ushort)(((uint)(byte)pcVar19[9] & 3) << 7) |
           (short)(*(ushort *)(pcVar19 + 0x1a) & 0x100) >> 4 | 0x60U |
           (ushort)(((uint)*(ushort *)(pcVar19 + 0x18) & 0x3c0) >> 6) |
           (ushort)(((uint)*(ushort *)(pcVar19 + 0x1a) & 0x200) << 2);
      uVar15 = GetClut((*(uint *)(pcVar19 + 4) & 0x3f) << 4,(int)*(uint *)(pcVar19 + 4) >> 6);
      *(undefined2 *)((int)puVar7 + 0xe) = (short)uVar15;
      puVar7 = DAT_1f800004;
      puVar6 = DAT_1f800000;
      if ((tv->flags & 4) != 0) {
        iVar13 = ((uint)tv->flip_axis - uVar20) + 1;
        if (iVar13 * 0x10000 < 0) {
          iVar13 = -iVar13;
        }
        sVar8 = (short)(iVar13 << 1);
        if (0x80 < (iVar13 << 0x11) >> 0x10) {
          sVar8 = 0x80;
        }
        iVar13 = ((uint)tv->flip_axis - (uVar20 + (uint)uVar5)) + 1;
        if (iVar13 * 0x10000 < 0) {
          iVar13 = -iVar13;
        }
        sVar9 = (short)(iVar13 << 1);
        if (0x80 < (iVar13 << 0x11) >> 0x10) {
          sVar9 = 0x80;
        }
        iVar13 = (0x80 - iVar18) * (0x80 - (int)sVar8);
        *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
        uVar15 = (uint)DAT_1f800004 & 0xffffff;
        DAT_1f800004 = DAT_1f800004 + 0xd;
        *puVar6 = *puVar6 & 0xff000000 | uVar15;
        if (iVar13 < 0) {
          iVar13 = iVar13 + 0x7f;
        }
        uVar15 = iVar13 >> 7;
        iVar18 = (0x80 - iVar18) * (0x80 - (int)sVar9);
        uVar15 = uVar15 << 0x10 | uVar15 << 8 | uVar15;
        puVar7[4] = uVar15;
        puVar7[1] = uVar15;
        if (iVar18 < 0) {
          iVar18 = iVar18 + 0x7f;
        }
        uVar15 = iVar18 >> 7;
        uVar15 = uVar15 << 0x10 | uVar15 << 8 | uVar15;
        puVar7[10] = uVar15;
        puVar7[7] = uVar15;
        *(undefined *)((int)puVar7 + 7) = 0x3e;
        *(undefined *)((int)puVar7 + 3) = 0xc;
        *(short *)(puVar7 + 2) = sVar3;
        uVar11 = tv->flip_axis;
        *(short *)(puVar7 + 5) = sVar3 + sVar17;
        *(short *)((int)puVar7 + 10) = uVar11 * 2 - uVar4;
        uVar11 = tv->flip_axis;
        *(short *)(puVar7 + 8) = sVar3;
        *(short *)((int)puVar7 + 0x16) = uVar11 * 2 - uVar4;
        uVar11 = tv->flip_axis;
        *(short *)(puVar7 + 0xb) = sVar3 + sVar17;
        *(short *)((int)puVar7 + 0x22) = (uVar11 * 2 - uVar4) - uVar5;
        *(short *)((int)puVar7 + 0x2e) = (tv->flip_axis * 2 - uVar4) - uVar5;
        bVar2 = pcVar19[8];
        iVar18 = ((int)*(short *)(pcVar19 + 0x18) -
                 (int)(short)(*(ushort *)(pcVar19 + 0x18) & 0xffc0)) * 0x10;
        if (bVar2 == 0) {
          trap(0x1c00);
        }
        if (((uint)bVar2 == 0xffffffff) && (iVar18 == -0x80000000)) {
          trap(0x1800);
        }
        *(char *)(puVar7 + 3) = (char)(iVar18 / (int)(uint)bVar2);
        *(char *)((int)puVar7 + 0xd) = pcVar19[0x1a] + -1;
        bVar2 = pcVar19[8];
        iVar18 = ((int)*(short *)(pcVar19 + 0x18) -
                 (int)(short)(*(ushort *)(pcVar19 + 0x18) & 0xffc0)) * 0x10;
        if (bVar2 == 0) {
          trap(0x1c00);
        }
        if (((uint)bVar2 == 0xffffffff) && (iVar18 == -0x80000000)) {
          trap(0x1800);
        }
        *(char *)(puVar7 + 6) = pcVar19[0x10] + (char)(iVar18 / (int)(uint)bVar2);
        *(char *)((int)puVar7 + 0x19) = pcVar19[0x1a] + -1;
        bVar2 = pcVar19[8];
        iVar18 = ((int)*(short *)(pcVar19 + 0x18) -
                 (int)(short)(*(ushort *)(pcVar19 + 0x18) & 0xffc0)) * 0x10;
        if (bVar2 == 0) {
          trap(0x1c00);
        }
        if (((uint)bVar2 == 0xffffffff) && (iVar18 == -0x80000000)) {
          trap(0x1800);
        }
        *(char *)(puVar7 + 9) = (char)(iVar18 / (int)(uint)bVar2);
        *(char *)((int)puVar7 + 0x25) = pcVar19[0x12] + pcVar19[0x1a] + -1;
        bVar2 = pcVar19[8];
        iVar18 = ((int)*(short *)(pcVar19 + 0x18) -
                 (int)(short)(*(ushort *)(pcVar19 + 0x18) & 0xffc0)) * 0x10;
        if (bVar2 == 0) {
          trap(0x1c00);
        }
        if (((uint)bVar2 == 0xffffffff) && (iVar18 == -0x80000000)) {
          trap(0x1800);
        }
        *(char *)(puVar7 + 0xc) = pcVar19[0x10] + (char)(iVar18 / (int)(uint)bVar2);
        *(char *)((int)puVar7 + 0x31) = pcVar19[0x12] + pcVar19[0x1a] + -1;
        *(ushort *)((int)puVar7 + 0x1a) =
             (ushort)(((uint)(byte)pcVar19[9] & 3) << 7) |
             (short)(*(ushort *)(pcVar19 + 0x1a) & 0x100) >> 4 | 0x60U |
             (ushort)(((uint)*(ushort *)(pcVar19 + 0x18) & 0x3c0) >> 6) |
             (ushort)(((uint)*(ushort *)(pcVar19 + 0x1a) & 0x200) << 2);
        uVar15 = GetClut((*(uint *)(pcVar19 + 4) & 0x3f) << 4,(int)*(uint *)(pcVar19 + 4) >> 6);
        *(undefined2 *)((int)puVar7 + 0xe) = (short)uVar15;
      }
    }
    puVar7 = DAT_1f800004;
    puVar6 = DAT_1f800000;
    if (tv->state != tv_StateOff) {
      *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
      uVar15 = (uint)DAT_1f800004 & 0xffffff;
      DAT_1f800004 = DAT_1f800004 + 10;
      *puVar6 = *puVar6 & 0xff000000 | uVar15;
      puVar7[1] = uVar10;
      SetPolyFT4((int)puVar7);
      SetSemiTrans((int)puVar7,0);
      SetShadeTex((int)puVar7,local_30 ^ 1);
      *(short *)(puVar7 + 2) = sVar3;
      *(ushort *)((int)puVar7 + 10) = uVar4;
      sVar17 = sVar3 + sVar17;
      *(short *)(puVar7 + 4) = sVar17;
      *(ushort *)((int)puVar7 + 0x12) = uVar4;
      *(short *)(puVar7 + 6) = sVar3;
      *(short *)(puVar7 + 8) = sVar17;
      uVar16 = (undefined2)(uVar20 + (uint)uVar5);
      *(undefined2 *)((int)puVar7 + 0x1a) = uVar16;
      *(undefined2 *)((int)puVar7 + 0x22) = uVar16;
      *(uchar *)(puVar7 + 3) = tv->u;
      *(uchar *)((int)puVar7 + 0xd) = tv->v;
      *(uchar *)(puVar7 + 5) = tv->u + tv->uw;
      *(uchar *)((int)puVar7 + 0x15) = tv->v;
      *(uchar *)(puVar7 + 7) = tv->u;
      *(char *)((int)puVar7 + 0x1d) = tv->v + tv->vh;
      *(uchar *)(puVar7 + 9) = tv->u + tv->uw;
      *(char *)((int)puVar7 + 0x25) = tv->v + tv->vh;
      *(ushort *)((int)puVar7 + 0x16) = tv->tpage;
      *(ushort *)((int)puVar7 + 0xe) = tv->clut;
      puVar7 = DAT_1f800004;
      puVar6 = DAT_1f800000;
      if ((tv->flags & 4) != 0) {
        iVar18 = ((uint)tv->flip_axis - uVar20) + 1;
        if (iVar18 * 0x10000 < 0) {
          iVar18 = -iVar18;
        }
        sVar8 = (short)(iVar18 << 1);
        if (0x80 < (iVar18 << 0x11) >> 0x10) {
          sVar8 = 0x80;
        }
        iVar18 = ((uint)tv->flip_axis - (uVar20 + (uint)uVar5)) + 1;
        if (iVar18 * 0x10000 < 0) {
          iVar18 = -iVar18;
        }
        sVar9 = (short)(iVar18 << 1);
        if (0x80 < (iVar18 << 0x11) >> 0x10) {
          sVar9 = 0x80;
        }
        uVar15 = uVar10 >> 0x10 & 0xff;
        iVar18 = 0x80 - (int)sVar8;
        uVar20 = uVar10 >> 8 & 0xff;
        uVar14 = uVar14 & 0xff;
        iVar13 = 0x80 - (int)sVar9;
        *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
        uVar10 = (uint)DAT_1f800004 & 0xffffff;
        DAT_1f800004 = DAT_1f800004 + 0xd;
        *puVar6 = *puVar6 & 0xff000000 | uVar10;
        *(undefined *)((int)puVar7 + 3) = 0xc;
        uVar10 = (uVar15 * iVar18 >> 7) << 0x10 | (uVar20 * iVar18 >> 7) << 8 | uVar14 * iVar18 >> 7
        ;
        *(short *)(puVar7 + 2) = sVar3;
        puVar7[4] = uVar10;
        puVar7[1] = uVar10;
        uVar10 = (uVar15 * iVar13 >> 7) << 0x10 | (uVar20 * iVar13 >> 7) << 8 | uVar14 * iVar13 >> 7
        ;
        puVar7[10] = uVar10;
        puVar7[7] = uVar10;
        *(undefined *)((int)puVar7 + 7) = 0x3c;
        uVar11 = tv->flip_axis;
        *(short *)(puVar7 + 5) = sVar17;
        *(short *)((int)puVar7 + 10) = uVar11 * 2 - uVar4;
        uVar11 = tv->flip_axis;
        *(short *)(puVar7 + 8) = sVar3;
        *(short *)((int)puVar7 + 0x16) = uVar11 * 2 - uVar4;
        uVar11 = tv->flip_axis;
        *(short *)(puVar7 + 0xb) = sVar17;
        *(short *)((int)puVar7 + 0x22) = (uVar11 * 2 - uVar4) - uVar5;
        *(short *)((int)puVar7 + 0x2e) = (tv->flip_axis * 2 - uVar4) - uVar5;
        *(uchar *)(puVar7 + 3) = tv->u;
        *(char *)((int)puVar7 + 0xd) = tv->v + -1;
        *(uchar *)(puVar7 + 6) = tv->u + tv->uw;
        *(char *)((int)puVar7 + 0x19) = tv->v + -1;
        *(uchar *)(puVar7 + 9) = tv->u;
        *(char *)((int)puVar7 + 0x25) = tv->v + tv->vh + -1;
        *(uchar *)(puVar7 + 0xc) = tv->u + tv->uw;
        *(char *)((int)puVar7 + 0x31) = tv->v + tv->vh + -1;
        *(ushort *)((int)puVar7 + 0x1a) = tv->tpage;
        *(ushort *)((int)puVar7 + 0xe) = tv->clut;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitTV__FR9tTVConfigP18tTexture_ShapeInfos(struct tTVConfig *tv /*$s1*/, struct tTexture_ShapeInfo *textures /*$a1*/, short index /*$a2*/)
 // line 287, offset 0x80023008
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x80023008
	/* end block 1 */
	// End offset: 0x80023008
	// End Line: 288

	/* begin block 2 */
		// Start line: 748
	/* end block 2 */
	// End Line: 749

	/* begin block 3 */
		// Start line: 751
	/* end block 3 */
	// End Line: 752

	/* begin block 4 */
		// Start line: 751
	/* end block 4 */
	// End Line: 752

void InitTV__FR9tTVConfigP18tTexture_ShapeInfos
               (tTVConfig *tv,tTexture_ShapeInfo *textures,short index)

{
  byte bVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)&textures->shpptr + ((int)((uint)(ushort)index << 0x10) >> 0xb);
  tv->state = tv_StateOff;
  tv->flags = 0;
  tv->x = -*(short *)(iVar5 + 0x14);
  tv->y = -*(short *)(iVar5 + 0x16);
  tv->w = *(short *)(iVar5 + 0x10);
  tv->h = *(short *)(iVar5 + 0x12);
  bVar1 = *(byte *)(iVar5 + 8);
  iVar4 = ((int)*(short *)(iVar5 + 0x18) - (int)(short)(*(ushort *)(iVar5 + 0x18) & 0xffc0)) * 0x10;
  if (bVar1 == 0) {
    trap(0x1c00);
  }
  if (((uint)bVar1 == 0xffffffff) && (iVar4 == -0x80000000)) {
    trap(0x1800);
  }
  tv->u = (uchar)(iVar4 / (int)(uint)bVar1);
  uVar2 = *(uchar *)(iVar5 + 0x1a);
  tv->vh = *(uchar *)&tv->h;
  tv->uw = *(uchar *)&tv->w;
  tv->v = uVar2;
  tv->shapex = *(ushort *)(iVar5 + 0x18);
  tv->shapey = *(ushort *)(iVar5 + 0x1a);
  tv->clutID = *(ushort *)(iVar5 + 4);
  tv->shapeType = *(byte *)(iVar5 + 9) & 3;
  uVar3 = GetClut(((uint)tv->clutID & 0x3f) << 4,(uint)(tv->clutID >> 6));
  tv->clut = (ushort)uVar3;
  tv->tpage = (ushort)(((uint)*(byte *)(iVar5 + 9) & 3) << 7) |
              (short)(*(ushort *)(iVar5 + 0x1a) & 0x100) >> 4 |
              (ushort)(((uint)*(ushort *)(iVar5 + 0x18) & 0x3c0) >> 6) |
              (ushort)(((uint)*(ushort *)(iVar5 + 0x1a) & 0x200) << 2);
  iVar4 = rand();
  iVar5 = (int)tv->h * 0x30;
  if (iVar5 == 0) {
    trap(0x1c00);
  }
  if ((iVar5 == -1) && (iVar4 == -0x80000000)) {
    trap(0x1800);
  }
  tv->fxWide = (short)(iVar4 % iVar5);
  iVar4 = rand();
  iVar5 = (int)tv->h * 0x30;
  if (iVar5 == 0) {
    trap(0x1c00);
  }
  if ((iVar5 == -1) && (iVar4 == -0x80000000)) {
    trap(0x1800);
  }
  tv->flip_axis = 0;
  tv->transition = 0;
  tv->tint = 0x808080;
  tv->destBrightness = 0x80;
  tv->fxThin = (short)(iVar4 % iVar5);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TurnOffTV__FR9tTVConfig(struct tTVConfig *tv /*$a0*/)
 // line 313, offset 0x80023218
	/* begin block 1 */
		// Start line: 314
		// Start offset: 0x80023218
	/* end block 1 */
	// End offset: 0x80023218
	// End Line: 315

	/* begin block 2 */
		// Start line: 815
	/* end block 2 */
	// End Line: 816

	/* begin block 3 */
		// Start line: 819
	/* end block 3 */
	// End Line: 820

	/* begin block 4 */
		// Start line: 819
	/* end block 4 */
	// End Line: 820

	/* begin block 5 */
		// Start line: 820
	/* end block 5 */
	// End Line: 821

	/* begin block 6 */
		// Start line: 820
	/* end block 6 */
	// End Line: 821

void TurnOffTV__FR9tTVConfig(tTVConfig *tv)

{
  tv->state = tv_TransitionOff;
  tv->destBrightness = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ TurnOnTV__FR9tTVConfig(struct tTVConfig *tv /*$a0*/)
 // line 319, offset 0x80023228
	/* begin block 1 */
		// Start line: 320
		// Start offset: 0x80023228
	/* end block 1 */
	// End offset: 0x80023228
	// End Line: 321

	/* begin block 2 */
		// Start line: 827
	/* end block 2 */
	// End Line: 828

	/* begin block 3 */
		// Start line: 831
	/* end block 3 */
	// End Line: 832

	/* begin block 4 */
		// Start line: 831
	/* end block 4 */
	// End Line: 832

	/* begin block 5 */
		// Start line: 832
	/* end block 5 */
	// End Line: 833

	/* begin block 6 */
		// Start line: 832
	/* end block 6 */
	// End Line: 833

void TurnOnTV__FR9tTVConfig(tTVConfig *tv)

{
  tv->state = tv_TransitionOn;
  tv->destBrightness = 0x80;
  return;
}





