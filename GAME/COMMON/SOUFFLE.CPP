#include "THISDUST.H"
#include "SOUFFLE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GetGustWind__FP17Souffle_tISouffle(struct Souffle_tISouffle *is /*$s0*/)
 // line 44, offset 0x800b764c
	/* begin block 1 */
		// Start line: 45
		// Start offset: 0x800B764C
	/* end block 1 */
	// End offset: 0x800B764C
	// End Line: 45

	/* begin block 2 */
		// Start line: 88
	/* end block 2 */
	// End Line: 89

	/* begin block 3 */
		// Start line: 88
	/* end block 3 */
	// End Line: 89

void GetGustWind__FP17Souffle_tISouffle(Souffle_tISouffle *is)

{
  uint uVar1;
  
  uVar1 = random();
  (is->motion).x = uVar1 & 0x3ff;
  uVar1 = random();
  (is->motion).z = uVar1 & 0x3ff;
  uVar1 = random();
  (is->motion).y = (uVar1 & 0x3ff) + 0x7ff;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetAngleWind__FP17Souffle_tISouffle(struct Souffle_tISouffle *is /*$s0*/)
 // line 53, offset 0x800b7694
	/* begin block 1 */
		// Start line: 54
		// Start offset: 0x800B7694
	/* end block 1 */
	// End offset: 0x800B7694
	// End Line: 54

	/* begin block 2 */
		// Start line: 102
	/* end block 2 */
	// End Line: 103

	/* begin block 3 */
		// Start line: 106
	/* end block 3 */
	// End Line: 107

	/* begin block 4 */
		// Start line: 106
	/* end block 4 */
	// End Line: 107

void GetAngleWind__FP17Souffle_tISouffle(Souffle_tISouffle *is)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = random();
  is->angle = lVar1;
  uVar2 = random();
  is->aspeed = (uVar2 & 0x7f) - 0x3f;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ MoveAngleWind__FP17Souffle_tISouffle(struct Souffle_tISouffle *is /*$a0*/)
 // line 61, offset 0x800b76cc
	/* begin block 1 */
		// Start line: 62
		// Start offset: 0x800B76CC
	/* end block 1 */
	// End offset: 0x800B7704
	// End Line: 67

	/* begin block 2 */
		// Start line: 118
	/* end block 2 */
	// End Line: 119

	/* begin block 3 */
		// Start line: 122
	/* end block 3 */
	// End Line: 123

	/* begin block 4 */
		// Start line: 122
	/* end block 4 */
	// End Line: 123

	/* begin block 5 */
		// Start line: 124
	/* end block 5 */
	// End Line: 125

void MoveAngleWind__FP17Souffle_tISouffle(Souffle_tISouffle *is)

{
  int iVar1;
  
  iVar1 = is->aspeed;
  is->angle = is->angle + iVar1;
  if (iVar1 < -8) {
    is->aspeed = iVar1 + 1;
    return;
  }
  if (8 < iVar1) {
    is->aspeed = iVar1 + -1;
  }
  return;
}



// decompiled code
// original method signature: 
// struct Souffle_tISouffle * /*$ra*/ Souffle_Add__FP8coorddefiT0iii(struct coorddef *soufflept /*$a0*/, int type /*$a1*/, struct coorddef *vec /*$a2*/, int velVX /*$a3*/, int ground /*stack 16*/, int colour /*stack 20*/)
 // line 76, offset 0x800b770c
	/* begin block 1 */
		// Start line: 77
		// Start offset: 0x800B770C
		// Variables:
	// 		int inserti; // $t3

		/* begin block 1.1 */
			// Start line: 77
			// Start offset: 0x800B770C

			/* begin block 1.1.1 */
				// Start line: 82
				// Start offset: 0x800B7728
				// Variables:
			// 		int i; // $t0
			// 		int maxc; // $t2
			/* end block 1.1.1 */
			// End offset: 0x800B7768
			// End Line: 94
		/* end block 1.1 */
		// End offset: 0x800B777C
		// End Line: 96

		/* begin block 1.2 */
			// Start line: 98
			// Start offset: 0x800B777C
			// Variables:
		// 		struct coorddef vempty; // stack offset -24
		// 		struct Souffle_tISouffle *is; // $s0
		/* end block 1.2 */
		// End offset: 0x800B78D0
		// End Line: 164
	/* end block 1 */
	// End offset: 0x800B78D0
	// End Line: 164

	/* begin block 2 */
		// Start line: 144
	/* end block 2 */
	// End Line: 145

	/* begin block 3 */
		// Start line: 154
	/* end block 3 */
	// End Line: 155

	/* begin block 4 */
		// Start line: 154
	/* end block 4 */
	// End Line: 155

Souffle_tISouffle *
Souffle_Add__FP8coorddefiT0iii
          (coorddef *soufflept,int type,coorddef *vec,int velVX,int ground,int colour)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  Souffle_tISouffle *is;
  coorddef local_18;
  
  iVar3 = 0;
  if (gCISouffle == 0x3c) {
    iVar1 = 1;
    bVar2 = gISouffle->cycle;
    is = gISouffle;
    do {
      if ((byte)is[1].cycle < bVar2) {
        iVar3 = iVar1;
        bVar2 = is[1].cycle;
      }
      iVar1 = iVar1 + 1;
      is = is + 1;
    } while (iVar1 < 0x3c);
  }
  else {
    iVar3 = gCISouffle;
    gCISouffle = gCISouffle + 1;
  }
  is = gISouffle + iVar3;
  iVar1 = soufflept->y;
  iVar4 = soufflept->z;
  (is->source).x = soufflept->x;
  (is->source).y = iVar1;
  (is->source).z = iVar4;
  is->cycle = '\0';
  is->type = (char)type;
  is->id = (char)iVar3;
  is->ground = ground;
  is->colour = colour;
  if (vec == (coorddef *)0x0) {
    vec = &local_18;
    local_18.x = 0;
    local_18.y = 0;
    local_18.z = 0;
  }
  if (type == 9) goto LAB_800b7894;
  if (type < 10) {
    if (type == 4) {
LAB_800b7890:
      is->rndpixmap = velVX;
      goto LAB_800b7894;
    }
    if (type < 5) {
      if (type < 1) goto LAB_800b78d0;
    }
    else {
      if (type == 7) goto LAB_800b7894;
      if (7 < type) goto LAB_800b7890;
      if (type != 6) goto LAB_800b78d0;
    }
    GetGustWind__FP17Souffle_tISouffle(is);
    is->wind = '\x01';
  }
  else {
    if (type == 0xc) goto LAB_800b7890;
    if (type < 0xd) {
      if (type == 10) goto LAB_800b7890;
      if (type != 0xb) goto LAB_800b78d0;
    }
    else {
      if ((0xe < type) && (type != 0x101)) goto LAB_800b78d0;
    }
LAB_800b7894:
    (is->motion).x = vec->x >> 5;
    (is->motion).y = vec->y >> 6;
    iVar3 = vec->z;
    is->wind = '\0';
    (is->motion).z = iVar3 >> 5;
  }
  GetAngleWind__FP17Souffle_tISouffle(is);
LAB_800b78d0:
  Sfx_Add__FP17Souffle_tISouffle(is);
  return is;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Souffle_DoSouffle__Fv()
 // line 176, offset 0x800b78ec
	/* begin block 1 */
		// Start line: 177
		// Start offset: 0x800B78EC
		// Variables:
	// 		struct coorddef w; // stack offset -72
	// 		int i; // $s1

		/* begin block 1.1 */
			// Start line: 177
			// Start offset: 0x800B78EC

			/* begin block 1.1.1 */
				// Start line: 183
				// Start offset: 0x800B7918

				/* begin block 1.1.1.1 */
					// Start line: 195
					// Start offset: 0x800B796C

					/* begin block 1.1.1.1.1 */
						// Start line: 195
						// Start offset: 0x800B7978
						// Variables:
					// 		struct Souffle_tISouffle *is; // $s0
					// 		struct coorddef motion; // stack offset -56

						/* begin block 1.1.1.1.1.1 */
							// Start line: 209
							// Start offset: 0x800B79F0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 210
								// Start offset: 0x800B7A04
								// Variables:
							// 		int speed; // $a0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x800B7A68
							// End Line: 214
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800B7A68
						// End Line: 214

						/* begin block 1.1.1.1.1.2 */
							// Start line: 227
							// Start offset: 0x800B7B08

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 228
								// Start offset: 0x800B7B18
								// Variables:
							// 		struct coorddef extramotion; // stack offset -40
							// 		int wave; // $a1

								/* begin block 1.1.1.1.1.2.1.1 */
									// Start line: 229
									// Start offset: 0x800B7B18

									/* begin block 1.1.1.1.1.2.1.1.1 */
										// Start line: 234
										// Start offset: 0x800B7B54
										// Variables:
									// 		int speed; // $a0
									/* end block 1.1.1.1.1.2.1.1.1 */
									// End offset: 0x800B7BB8
									// End Line: 238
								/* end block 1.1.1.1.1.2.1.1 */
								// End offset: 0x800B7BB8
								// End Line: 238
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x800B7C90
							// End Line: 250
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x800B7C90
						// End Line: 250
					/* end block 1.1.1.1.1 */
					// End offset: 0x800B7CB8
					// End Line: 285
				/* end block 1.1.1.1 */
				// End offset: 0x800B7CC4
				// End Line: 286
			/* end block 1.1.1 */
			// End offset: 0x800B7D6C
			// End Line: 296
		/* end block 1.1 */
		// End offset: 0x800B7D6C
		// End Line: 296
	/* end block 1 */
	// End offset: 0x800B7D6C
	// End Line: 296

	/* begin block 2 */
		// Start line: 353
	/* end block 2 */
	// End Line: 354

	/* begin block 3 */
		// Start line: 364
	/* end block 3 */
	// End Line: 365

	/* begin block 4 */
		// Start line: 364
	/* end block 4 */
	// End Line: 365

	/* begin block 5 */
		// Start line: 369
	/* end block 5 */
	// End Line: 370

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Souffle_DoSouffle__Fv(void)

{
  char cVar1;
  undefined *puVar2;
  Souffle_tISouffle *is;
  SVECTOR *pSVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint local_48;
  int local_44;
  uint local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_20;
  
  if (0 < simGlobal.gameTicks - gTMoveSouffle) {
    gTMoveSouffle = simGlobal.gameTicks;
    iVar10 = 0;
    if (gCISouffle != 0) {
      gWindDir = gWindDir + 2;
      puVar2 = fastintcos(gWindDir);
      local_48 = fixedmult((int)puVar2,0xccc);
      puVar2 = fastintsin(gWindDir);
      local_40 = fixedmult((int)puVar2,0xccc);
      local_44 = 0;
    }
    iVar11 = 0;
    while (iVar10 < gCISouffle) {
      is = (Souffle_tISouffle *)(&gISouffle->type + iVar11);
      local_38 = (is->motion).x;
      local_34 = (is->motion).y;
      local_30 = (is->motion).z;
      if (is->wind != '\0') {
        local_38 = local_38 + local_48;
        local_34 = local_34 + local_44;
        local_30 = local_30 + local_40;
      }
      if (Replay_ReplayMode == 2) {
        uVar4 = 2 - Replay_ReplayInterface.speed;
        if (0 < (int)uVar4) {
          local_38 = local_38 >> (uVar4 & 0x1f);
          local_30 = local_30 >> (uVar4 & 0x1f);
          local_34 = local_34 >> (uVar4 & 0x1f);
        }
        if ((int)uVar4 < 0) {
          local_38 = local_38 << 1;
          local_30 = local_30 << 1;
          local_34 = local_34 << 1;
        }
      }
      (is->source).x = (is->source).x + local_38;
      (is->source).y = (is->source).y + local_34;
      iVar5 = (is->motion).x;
      (is->source).z = (is->source).z + local_30;
      if (iVar5 < 0) {
        (is->motion).x = iVar5 + 0xa3d;
        if (0 < iVar5 + 0xa3d) {
          (is->motion).x = 0;
        }
      }
      else {
        if ((0 < iVar5) && ((is->motion).x = iVar5 + -0xa3d, iVar5 + -0xa3d < 0)) {
          (is->motion).x = 0;
        }
      }
      iVar5 = (is->motion).z;
      if (iVar5 < 0) {
        (is->motion).z = iVar5 + 0xa3d;
        if (0 < iVar5 + 0xa3d) {
          (is->motion).z = 0;
        }
      }
      else {
        if ((0 < iVar5) && ((is->motion).z = iVar5 + -0xa3d, iVar5 + -0xa3d < 0)) {
          (is->motion).z = 0;
        }
      }
      if (is->type == '\r') {
        local_28 = (is->extramotion).x;
        local_20 = (is->extramotion).z;
        puVar2 = fastintsin(is->angle);
        if (Replay_ReplayMode == 2) {
          uVar4 = 2 - Replay_ReplayInterface.speed;
          if (0 < (int)uVar4) {
            local_28 = local_28 >> (uVar4 & 0x1f);
            local_20 = local_20 >> (uVar4 & 0x1f);
          }
          if ((int)uVar4 < 0) {
            local_28 = local_28 << 1;
            local_20 = local_20 << 1;
          }
        }
        (is->source).x = (is->source).x + (local_28 * (int)puVar2 >> 0x11);
        iVar5 = (is->extramotion).x;
        (is->source).z = (is->source).z + (local_20 * (int)puVar2 >> 0x11);
        if (iVar5 < 0) {
          (is->extramotion).x = iVar5 + 0x147;
          if (0 < iVar5 + 0x147) {
            (is->extramotion).x = 0;
          }
        }
        else {
          if ((0 < iVar5) && ((is->extramotion).x = iVar5 + -0x147, iVar5 + -0x147 < 0)) {
            (is->extramotion).x = 0;
          }
        }
        iVar5 = (is->extramotion).z;
        if (iVar5 < 0) {
          (is->extramotion).z = iVar5 + 0x147;
          if (0 < iVar5 + 0x147) {
            (is->extramotion).z = 0;
          }
        }
        else {
          if ((0 < iVar5) && ((is->extramotion).z = iVar5 + -0x147, iVar5 + -0x147 < 0)) {
            (is->extramotion).z = 0;
          }
        }
        if (is->ground < (is->source).y) {
          (is->motion).y = (is->motion).y + -0x147;
        }
        else {
          is->type = '\0';
        }
      }
      MoveAngleWind__FP17Souffle_tISouffle(is);
      cVar1 = is->cycle + -1;
      is->cycle = cVar1;
      if (cVar1 == '\0') {
        is->type = '\0';
      }
      iVar11 = iVar11 + 0x44;
      iVar10 = iVar10 + 1;
    }
    iVar10 = 0;
    if (0 < gCISouffle) {
      iVar11 = 0;
      do {
        puVar6 = (undefined4 *)(&gISouffle->type + iVar11);
        if (*(char *)puVar6 == '\0') {
          is = gISouffle + gCISouffle;
          pSVar3 = (SVECTOR *)&is[-1].trans.vz;
          do {
            uVar8 = *(undefined4 *)&pSVar3->vz;
            uVar9 = *(undefined4 *)(pSVar3 + 1);
            uVar7 = *(undefined4 *)&pSVar3[1].vz;
            *puVar6 = *(undefined4 *)pSVar3;
            puVar6[1] = uVar8;
            puVar6[2] = uVar9;
            puVar6[3] = uVar7;
            pSVar3 = pSVar3 + 2;
            puVar6 = puVar6 + 4;
          } while (pSVar3 != &is->trans);
          iVar11 = iVar11 + -0x44;
          iVar10 = iVar10 + -1;
          *puVar6 = *(undefined4 *)pSVar3;
          gCISouffle = gCISouffle + -1;
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 0x44;
      } while (iVar10 < gCISouffle);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Souffle_CircleClip__FP8coorddefT0i(struct coorddef *pt1 /*$a0*/, struct coorddef *pt2 /*$a1*/, int r /*$a2*/)
 // line 308, offset 0x800b7d88
	/* begin block 1 */
		// Start line: 309
		// Start offset: 0x800B7D88
		// Variables:
	// 		int dx; // $a3
	// 		int dz; // $v1

		/* begin block 1.1 */
			// Start line: 312
			// Start offset: 0x800B7DC0
			// Variables:
		// 		int dist; // $v0
		/* end block 1.1 */
		// End offset: 0x800B7DE0
		// End Line: 315
	/* end block 1 */
	// End offset: 0x800B7DE0
	// End Line: 315

	/* begin block 2 */
		// Start line: 634
	/* end block 2 */
	// End Line: 635

	/* begin block 3 */
		// Start line: 647
	/* end block 3 */
	// End Line: 648

	/* begin block 4 */
		// Start line: 647
	/* end block 4 */
	// End Line: 648

	/* begin block 5 */
		// Start line: 648
	/* end block 5 */
	// End Line: 649

	/* begin block 6 */
		// Start line: 648
	/* end block 6 */
	// End Line: 649

int Souffle_CircleClip__FP8coorddefT0i(coorddef *pt1,coorddef *pt2,int r)

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
// void /*$ra*/ Souffle_InsertFacet__FP13DRender_tView(struct DRender_tView *Vi /*$s5*/)
 // line 320, offset 0x800b7de8
	/* begin block 1 */
		// Start line: 321
		// Start offset: 0x800B7DE8
		// Variables:
	// 		int i; // $s3

		/* begin block 1.1 */
			// Start line: 321
			// Start offset: 0x800B7DE8

			/* begin block 1.1.1 */
				// Start line: 326
				// Start offset: 0x800B7E18
				// Variables:
			// 		struct Souffle_tISouffle *is; // $s0
			/* end block 1.1.1 */
			// End offset: 0x800B7EA4
			// End Line: 346
		/* end block 1.1 */
		// End offset: 0x800B7EB0
		// End Line: 349
	/* end block 1 */
	// End offset: 0x800B7EB0
	// End Line: 349

	/* begin block 2 */
		// Start line: 667
	/* end block 2 */
	// End Line: 668

	/* begin block 3 */
		// Start line: 671
	/* end block 3 */
	// End Line: 672

	/* begin block 4 */
		// Start line: 671
	/* end block 4 */
	// End Line: 672

void Souffle_InsertFacet__FP13DRender_tView(DRender_tView *Vi)

{
  int iVar1;
  Souffle_tISouffle *is;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    if (gCISouffle <= iVar3) {
      return;
    }
    is = (Souffle_tISouffle *)(&gISouffle->type + iVar2);
    iVar1 = Souffle_CircleClip__FP8coorddefT0i
                      (&is->source,(coorddef *)&Vi->cview,(int)&DAT_00320000);
    if (iVar1 != 0) {
      if (is->type != '\n') {
        Sfx_Transform__FP8coorddefP7SVECTORT0(&is->source,&is->trans,(coorddef *)&Vi->cview);
        iVar1 = (int)(is->trans).vx;
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if (((int)(is->trans).vz < iVar1) || (is->type == '\0')) goto LAB_800b7ea4;
      }
      Sfx_BuildSouffleFacet__FP13DRender_tViewP17Souffle_tISouffle(Vi,is);
    }
LAB_800b7ea4:
    iVar2 = iVar2 + 0x44;
    iVar3 = iVar3 + 1;
  } while( true );
}



// decompiled code
// original method signature: 
// void /*$ra*/ Souffle_InitTrackSouffle__Fv()
 // line 359, offset 0x800b7ed4
	/* begin block 1 */
		// Start line: 360
		// Start offset: 0x800B7ED4
	/* end block 1 */
	// End offset: 0x800B7ED4
	// End Line: 360

	/* begin block 2 */
		// Start line: 755
	/* end block 2 */
	// End Line: 756

	/* begin block 3 */
		// Start line: 766
	/* end block 3 */
	// End Line: 767

	/* begin block 4 */
		// Start line: 766
	/* end block 4 */
	// End Line: 767

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Souffle_InitTrackSouffle__Fv(void)

{
  gWindDir = 0;
  gCISouffle = 0;
  gTMoveSouffle = simGlobal.gameTicks;
  gISouffle = (Souffle_tISouffle *)reservememadr(s_souffle_8013d440,0xff0,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Souffle_RestartTrackSouffle__Fv()
 // line 373, offset 0x800b7f14
	/* begin block 1 */
		// Start line: 374
		// Start offset: 0x800B7F14
	/* end block 1 */
	// End offset: 0x800B7F14
	// End Line: 379

	/* begin block 2 */
		// Start line: 800
	/* end block 2 */
	// End Line: 801

	/* begin block 3 */
		// Start line: 806
	/* end block 3 */
	// End Line: 807

	/* begin block 4 */
		// Start line: 806
	/* end block 4 */
	// End Line: 807

	/* begin block 5 */
		// Start line: 811
	/* end block 5 */
	// End Line: 812

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Souffle_RestartTrackSouffle__Fv(void)

{
  gCISouffle = 0;
  gTMoveSouffle = simGlobal.gameTicks;
  gWindDir = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Souffle_KillTrackSouffle__Fv()
 // line 386, offset 0x800b7f30
	/* begin block 1 */
		// Start line: 387
		// Start offset: 0x800B7F30
	/* end block 1 */
	// End offset: 0x800B7F48
	// End Line: 389

	/* begin block 2 */
		// Start line: 832
	/* end block 2 */
	// End Line: 833

	/* begin block 3 */
		// Start line: 836
	/* end block 3 */
	// End Line: 837

	/* begin block 4 */
		// Start line: 836
	/* end block 4 */
	// End Line: 837

	/* begin block 5 */
		// Start line: 837
	/* end block 5 */
	// End Line: 838

	/* begin block 6 */
		// Start line: 837
	/* end block 6 */
	// End Line: 838

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Souffle_KillTrackSouffle__Fv(void)

{
  if (gISouffle != (Souffle_tISouffle *)0x0) {
    purgememadr((int)gISouffle);
  }
  gISouffle = (Souffle_tISouffle *)0x0;
  return;
}





