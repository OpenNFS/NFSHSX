#include "NFS4.H"
#include "CAMERA.H"

// decompiled code
// original method signature: 
// void /*$ra*/ EulerToMat__FP10matrixtdefiii(struct matrixtdef *m /*$s1*/, int ax /*$a1*/, int ay /*$s0*/, int az /*$s3*/)
 // line 482, offset 0x8008060c
	/* begin block 1 */
		// Start line: 483
		// Start offset: 0x8008060C
		// Variables:
	// 		struct matrixtdef mx; // stack offset -184
	// 		struct matrixtdef my; // stack offset -144
	// 		struct matrixtdef mz; // stack offset -104
	// 		struct matrixtdef mt; // stack offset -64
	/* end block 1 */
	// End offset: 0x8008060C
	// End Line: 483

void EulerToMat__FP10matrixtdefiii(matrixtdef *m,int ax,int ay,int az)
{
  int iVar1;
  int iVar2;
  int iVar3;
  matrixtdef mStack184;
  matrixtdef mStack144;
  matrixtdef mStack104;
  matrixtdef local_40;
  
  fixedxformx(&mStack184);
  fixedxformy(&mStack144,ay);
  fixedxformz(&mStack104,az);
  Math_fasttransmult__FP10matrixtdefN20(&mStack104,&mStack144,&local_40);
  Math_fasttransmult__FP10matrixtdefN20(&local_40,&mStack184,m);
  iVar1 = m->m[3];
  iVar2 = m->m[4];
  iVar3 = m->m[5];
  m->m[3] = -m->m[6];
  m->m[5] = -m->m[8];
  m->m[4] = -m->m[7];
  m->m[6] = iVar1;
  m->m[7] = iVar2;
  m->m[8] = iVar3;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_SetCamera__FP13DRender_tView(struct DRender_tView *cview /*$s0*/)
 // line 613, offset 0x80080704
	/* begin block 1 */
		// Start line: 614
		// Start offset: 0x80080704
	/* end block 1 */
	// End offset: 0x80080704
	// End Line: 614

void Camera_SetCamera__FP13DRender_tView(DRender_tView *cview)
{
  Camera_GetViewInfo__FiP17DRender_tCalcViewi(cview->player,&cview->cview,cview->id);
  TrsProj_SetViewTrsProjEnviro__FP13DRender_tView(cview);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_LookBack__FP10matrixtdefT0(struct matrixtdef *src /*$a0*/, struct matrixtdef *tgt /*$a1*/)
 // line 662, offset 0x8008073c
	/* begin block 1 */
		// Start line: 663
		// Start offset: 0x8008073C
	/* end block 1 */
	// End offset: 0x8008073C
	// End Line: 669

void Camera_LookBack__FP10matrixtdefT0(matrixtdef *src,matrixtdef *tgt)
{
  tgt->m[0] = -src->m[0];
  tgt->m[1] = -src->m[1];
  tgt->m[2] = -src->m[2];
  tgt->m[3] = src->m[3];
  tgt->m[4] = src->m[4];
  tgt->m[5] = src->m[5];
  tgt->m[6] = -src->m[6];
  tgt->m[7] = -src->m[7];
  tgt->m[8] = -src->m[8];
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_TunnelLimit__FiPi(int player /*$s2*/, int *armheight /*$s4*/)
 // line 684, offset 0x800807c4
	/* begin block 1 */
		// Start line: 685
		// Start offset: 0x800807C4

		/* begin block 1.1 */
			// Start line: 685
			// Start offset: 0x800807C4

			/* begin block 1.1.1 */
				// Start line: 689
				// Start offset: 0x80080830

				/* begin block 1.1.1.1 */
					// Start line: 708
					// Start offset: 0x80080830
					// Variables:
				// 		struct BWorldSm_Pos *slicePos; // $s0
				// 		struct coorddef quadnormal; // stack offset -56
				// 		struct coorddef underCam; // stack offset -40
				// 		int roadheight; // $a0
				// 		int track; // $v1
				// 		int maxheight; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x800808EC
				// End Line: 719
			/* end block 1.1.1 */
			// End offset: 0x800808EC
			// End Line: 719
		/* end block 1.1 */
		// End offset: 0x800808EC
		// End Line: 719
	/* end block 1 */
	// End offset: 0x800808EC
	// End Line: 719

void Camera_TunnelLimit__FiPi(int player,int *armheight)
{
  bool bVar1;
  uint uVar2;
  coorddef *pcVar3;
  int iVar4;
  int iVar5;
  coorddef local_38;
  coorddef local_28;
  
  bVar1 = false;
  uVar2 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos((BWorldSm_Pos *)(&DAT_8010f338 + player * 0x44));
  if ((uVar2 != 0) ||
     (uVar2 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos
                        ((BWorldSm_Pos *)((&Camera_gInfo)[player * 0x44] + 8)), uVar2 != 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    pcVar3 = BWorldSm_UNormal__FP12BWorldSm_Pos((BWorldSm_Pos *)(&DAT_8010f338 + player * 0x44));
    local_38.x = pcVar3->x;
    local_38.y = pcVar3->y;
    local_38.z = pcVar3->z;
    local_28.x = (&DAT_8010f2b4)[player * 0x44];
    local_28.y = (&DAT_8010f2b8)[player * 0x44];
    local_28.z = (&DAT_8010f2bc)[player * 0x44];
    iVar4 = Newton_FindGroundElevationGeneral__FP8coorddefN20
                      (&local_28,&local_38,(coorddef *)(&DAT_8010f340 + player * 0x44));
    iVar5 = 0;
    if (false) {
      iVar5 = -7;
    }
    iVar4 = (*(int *)(&gTunnelCamHeight + iVar5 * 4) -
            *(int *)((&Camera_gInfo)[player * 0x44] + 0xa4)) + iVar4;
    if (iVar4 < *armheight) {
      *armheight = iVar4;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateCollisionCam__Fi(int player /*$s1*/)
 // line 727, offset 0x8008090c
	/* begin block 1 */
		// Start line: 728
		// Start offset: 0x8008090C
		// Variables:
	// 		struct coorddef arm; // stack offset -64
	// 		struct coorddef newarm; // stack offset -48
	// 		struct coorddef oldarm; // stack offset -32
	/* end block 1 */
	// End offset: 0x80080AB4
	// End Line: 788

void Camera_UpdateCollisionCam__Fi(int player)
{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  local_40 = 0;
  local_3c = 0x30000;
  local_38 = 0xfff60000;
  if (((DAT_8011e0d4 == 0) || (DAT_80117044 != 0)) && (InBetween == 0)) {
    iVar2 = player * 0x110;
    if ((*(byte *)((int)&DAT_8010f320 + iVar2 + 3) & 1) != 0) {
      local_38 = 0xa0000;
    }
    transform(&local_40,(&Camera_gInfo)[player * 0x44] + 0x144,&local_30);
    Camera_TunnelLimit__FiPi(player,&local_2c);
    local_20 = (&DAT_8010f2c0)[player * 0x44];
    local_1c = (&DAT_8010f2c4)[player * 0x44];
    local_18 = (&DAT_8010f2c8)[player * 0x44];
    iVar3 = fixedmult(local_30 - local_20,0x51e);
    (&DAT_8010f2c0)[player * 0x44] = local_20 + iVar3;
    iVar3 = fixedmult(local_2c - local_1c,0x51e);
    (&DAT_8010f2c4)[player * 0x44] = local_1c + iVar3;
    iVar3 = fixedmult(local_28 - local_18,0x51e);
    iVar4 = (&Camera_gInfo)[player * 0x44];
    (&DAT_8010f2c8)[player * 0x44] = local_18 + iVar3;
    (&DAT_8010f2b4)[player * 0x44] = *(int *)(iVar4 + 0xa0) + (&DAT_8010f2c0)[player * 0x44];
    (&DAT_8010f2b8)[player * 0x44] = *(int *)(iVar4 + 0xa4) + (&DAT_8010f2c4)[player * 0x44];
    cVar1 = *(char *)((int)&DAT_8010f320 + iVar2 + 2);
    (&DAT_8010f2bc)[player * 0x44] = *(int *)(iVar4 + 0xa8) + (&DAT_8010f2c8)[player * 0x44];
    if (cVar1 == '\0') {
      *(undefined *)((int)&DAT_8010f320 + iVar2 + 1) = 0x32;
    }
    (&DAT_8010f320)[player * 0x44] = (&DAT_8010f320)[player * 0x44] & 0xfffffffb | 0x7a;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateSimpleCam__Fi(int player /*$s3*/)
 // line 791, offset 0x80080ac8
	/* begin block 1 */
		// Start line: 792
		// Start offset: 0x80080AC8
		// Variables:
	// 		struct coorddef arm; // stack offset -56
	// 		struct coorddef newarm; // stack offset -40
	/* end block 1 */
	// End offset: 0x80080AC8
	// End Line: 792

void Camera_UpdateSimpleCam__Fi(int player)
{
  int iVar1;
  int *piVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_28;
  int local_24;
  int local_20;
  
  piVar2 = &Camera_gInfo + player * 0x44;
  iVar1 = (int)(short)(&DAT_8010f31c)[player * 0x88] * 0x10;
  local_38 = *(undefined4 *)(&Camera_gFlags + iVar1);
  local_34 = *(undefined4 *)(&DAT_8010f554 + iVar1);
  local_30 = *(undefined4 *)(&DAT_8010f558 + iVar1);
  transform(&local_38,*piVar2 + 0xf0,&local_28);
  Camera_TunnelLimit__FiPi(player,&local_24);
  iVar1 = *piVar2;
  (&DAT_8010f2b4)[player * 0x44] = *(int *)(*piVar2 + 0xa0) + local_28;
  (&DAT_8010f2b8)[player * 0x44] = *(int *)(iVar1 + 0xa4) + local_24;
  (&DAT_8010f2bc)[player * 0x44] = *(int *)(iVar1 + 0xa8) + local_20;
  Camera_LookBack__FP10matrixtdefT0
            ((matrixtdef *)(iVar1 + 0xf0),(matrixtdef *)(&DAT_8010f2dc + player * 0x44));
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateBumperCam__Fi(int player /*$a0*/)
 // line 808, offset 0x80080bac
	/* begin block 1 */
		// Start line: 809
		// Start offset: 0x80080BAC
		// Variables:
	// 		struct coorddef arm; // stack offset -56
	// 		struct coorddef newarm; // stack offset -40
	// 		int lookingBehind; // $s1
	/* end block 1 */
	// End offset: 0x80080D64
	// End Line: 836

void Camera_UpdateBumperCam__Fi(int player)
{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  
  bVar1 = false;
  piVar8 = &Camera_gInfo + player * 0x44;
  iVar2 = (int)(short)(&DAT_8010f31c)[player * 0x88] * 0x10;
  local_38 = *(undefined4 *)(&Camera_gFlags + iVar2);
  local_34 = *(undefined4 *)(&DAT_8010f554 + iVar2);
  local_30 = *(int *)(&DAT_8010f558 + iVar2);
  if (((uint)(&DAT_8010f320)[player * 0x44] >> 5 & 1) == 0) {
    bVar1 = (&Input_gLookBehind)[player] != 0;
  }
  if (bVar1) {
    transform(&local_38,*piVar8 + 0xf0,&local_28);
    (&DAT_8010f2cc)[player * 0x44] = *(int *)(*piVar8 + 0xa0) + local_28;
    (&DAT_8010f2d0)[player * 0x44] = *(int *)(*piVar8 + 0xa4) + local_24;
    (&DAT_8010f2d4)[player * 0x44] = *(int *)(*piVar8 + 0xa8) + local_20;
    local_30 = -local_30;
  }
  transform(&local_38,*piVar8 + 0xf0,&local_28);
  iVar2 = *piVar8;
  (&DAT_8010f2b4)[player * 0x44] = *(int *)(*piVar8 + 0xa0) + local_28;
  (&DAT_8010f2b8)[player * 0x44] = *(int *)(iVar2 + 0xa4) + local_24;
  (&DAT_8010f2bc)[player * 0x44] = *(int *)(iVar2 + 0xa8) + local_20;
  if (bVar1) {
    Camera_LookBack__FP10matrixtdefT0
              ((matrixtdef *)(iVar2 + 0xf0),(matrixtdef *)(&DAT_8010f2dc + player * 0x44));
  }
  else {
    iVar2 = *piVar8;
    puVar4 = &DAT_8010f2dc + player * 0x44;
    puVar3 = (undefined4 *)(iVar2 + 0xf0);
    do {
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      *puVar4 = *puVar3;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar4[3] = uVar7;
      puVar3 = puVar3 + 4;
      puVar4 = puVar4 + 4;
    } while (puVar3 != (undefined4 *)(iVar2 + 0x110));
    *puVar4 = *puVar3;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateTailCam__Fii(int player /*$s3*/, int behavior /*$s1*/)
 // line 844, offset 0x80080d84
	/* begin block 1 */
		// Start line: 845
		// Start offset: 0x80080D84
		// Variables:
	// 		struct coorddef arm; // stack offset -80
	// 		struct coorddef newarm; // stack offset -64
	// 		struct coorddef oldarm; // stack offset -48
	// 		struct Car_tObj *anchor; // $a0
	// 		int maxrate; // $a2
	// 		int rate; // $s2
	// 		int rateY; // $s5
	// 		int vertigo; // $a0
	// 		int slice; // $v1
	// 		int lookahead; // $s0
	// 		int len; // $v0

		/* begin block 1.1 */
			// Start line: 928
			// Start offset: 0x8008127C

			/* begin block 1.1.1 */
				// Start line: 936
				// Start offset: 0x8008130C
				// Variables:
			// 		int scale; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80081350
			// End Line: 938
		/* end block 1.1 */
		// End offset: 0x80081350
		// End Line: 938
	/* end block 1 */
	// End offset: 0x800813A8
	// End Line: 947

void Camera_UpdateTailCam__Fii(int player,int behavior)
{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar6 = 0x1999;
  iVar3 = (int)(short)(&DAT_8010f31c)[player * 0x88] * 0x10;
  local_50 = *(undefined4 *)(&Camera_gFlags + iVar3);
  local_4c = *(int *)(&DAT_8010f554 + iVar3);
  local_48 = *(int *)(&DAT_8010f558 + iVar3);
  iVar3 = (&Camera_gInfo)[player * 0x44];
  uVar10 = 0xccc;
  if (*(int *)(iVar3 + 0x3f0) < 1) {
    iVar7 = 3;
    if (true) {
      iVar7 = -3;
    }
  }
  else {
    iVar7 = 3;
    if (false) {
      iVar7 = -3;
    }
  }
  if ((DAT_8011e0d4 != 0) && (DAT_80117044 == 0)) {
    return;
  }
  if (InBetween != 0) {
    return;
  }
  if (behavior == 1) {
    iVar6 = 0x1999;
  }
  else {
    if ((1 < behavior) && (behavior == 2)) {
      iVar6 = 0xccc;
    }
  }
  iVar9 = 0x1999;
  if (behavior != 0) {
    iVar4 = *(int *)(iVar3 + 0x418);
    iVar3 = *(int *)(iVar3 + 0x420);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < iVar4) {
      iVar4 = iVar4 + (iVar3 >> 2);
    }
    else {
      iVar4 = iVar3 + (iVar4 >> 2);
    }
    iVar4 = iVar4 / 900;
    iVar3 = iVar4;
    if (iVar6 < iVar4) {
      iVar3 = iVar6;
    }
    iVar9 = 0x51e;
    if ((0x51d < iVar3) && (iVar9 = iVar4, iVar6 < iVar4)) {
      iVar9 = iVar6;
    }
  }
  if ((&Input_gLookBehind)[player] != 0) {
    transform(&local_50,(&Camera_gInfo)[player * 0x44] + 0xf0,&DAT_8010f2c0 + player * 0x44);
  }
  iVar3 = (int)*(short *)((&Camera_gInfo)[player * 0x44] + 8) + iVar7;
  if (iVar7 < 1) {
    iVar7 = iVar3 - iVar7;
    iVar6 = iVar7 * 0x20;
    if (-1 < iVar7) {
LAB_80081050:
      iVar6 = iVar7 << 5;
    }
  }
  else {
    iVar7 = iVar3 - iVar7;
    iVar6 = iVar7 * 0x20;
    if (iVar7 < 0) goto LAB_80081050;
  }
  iVar3 = (*(int *)(iVar3 * 0x20 + 4) - *(int *)(iVar6 + 4)) / 3;
  if (behavior == 1) {
    bVar2 = 0x10000 < iVar3;
    iVar6 = iVar3;
    if (bVar2) {
      iVar6 = 0x10000;
    }
    iVar7 = 0x4000;
    if (iVar6 < 0x4000) goto LAB_8008110c;
    iVar7 = 0x10000;
  }
  else {
    if (behavior < 2) {
      iVar7 = iVar3;
      if (behavior == 0) {
        iVar7 = 0;
      }
      goto LAB_8008110c;
    }
    iVar7 = iVar3;
    if (behavior != 2) goto LAB_8008110c;
    bVar2 = 0x20000 < iVar3;
    iVar6 = iVar3;
    if (bVar2) {
      iVar6 = 0x20000;
    }
    iVar7 = -0x4000;
    if (iVar6 < -0x4000) goto LAB_8008110c;
    iVar7 = 0x20000;
  }
  if (!bVar2) {
    iVar7 = iVar3;
  }
LAB_8008110c:
  local_4c = local_4c + iVar7;
  if ((&Input_gLookBehind)[player] == 0) {
    iVar3 = player * 0x110;
    transform(&local_50,(&Camera_gInfo)[player * 0x44] + 0xf0,&local_40);
    Camera_TunnelLimit__FiPi(player,&local_3c);
    local_30 = (&DAT_8010f2c0)[player * 0x44];
    local_2c = (&DAT_8010f2c4)[player * 0x44];
    local_28 = (&DAT_8010f2c8)[player * 0x44];
    cVar1 = *(char *)((int)&DAT_8010f320 + iVar3 + 1);
    if (cVar1 != '\0') {
      *(char *)((int)&DAT_8010f320 + iVar3 + 1) = cVar1 + -1;
      uVar10 = 0x1999;
      iVar9 = 0x1999;
    }
    iVar6 = fixedmult(local_40 - local_30,iVar9);
    (&DAT_8010f2c0)[player * 0x44] = local_30 + iVar6;
    iVar6 = fixedmult(local_3c - local_2c,uVar10);
    (&DAT_8010f2c4)[player * 0x44] = local_2c + iVar6;
    iVar6 = fixedmult(local_38 - local_28,iVar9);
    cVar1 = *(char *)((int)&DAT_8010f320 + iVar3 + 1);
    (&DAT_8010f2c8)[player * 0x44] = local_28 + iVar6;
    if ((cVar1 == '\0') &&
       (iVar3 = Math_VectorLength__FP8coorddef((coorddef *)(&DAT_8010f2c0 + player * 0x44)),
       iVar3 < 0x4f0a3)) {
      uVar10 = fixeddiv(0x4f0a3,iVar3);
      uVar5 = fixedmult(uVar10,(&DAT_8010f2c0)[player * 0x44]);
      (&DAT_8010f2c0)[player * 0x44] = uVar5;
      uVar5 = fixedmult(uVar10,(&DAT_8010f2c4)[player * 0x44]);
      (&DAT_8010f2c4)[player * 0x44] = uVar5;
      uVar10 = fixedmult(uVar10,(&DAT_8010f2c8)[player * 0x44]);
      (&DAT_8010f2c8)[player * 0x44] = uVar10;
    }
    iVar3 = (&Camera_gInfo)[player * 0x44];
    (&DAT_8010f2b4)[player * 0x44] =
         *(int *)((&Camera_gInfo)[player * 0x44] + 0xa0) + (&DAT_8010f2c0)[player * 0x44];
    (&DAT_8010f2b8)[player * 0x44] = *(int *)(iVar3 + 0xa4) + (&DAT_8010f2c4)[player * 0x44];
    (&DAT_8010f2bc)[player * 0x44] = *(int *)(iVar3 + 0xa8) + (&DAT_8010f2c8)[player * 0x44];
  }
  else {
    piVar8 = &Camera_gInfo + player * 0x44;
    transform(&local_50,*piVar8 + 0xf0,&local_40);
    (&DAT_8010f2cc)[player * 0x44] = *(int *)(*piVar8 + 0xa0) + local_40;
    (&DAT_8010f2d0)[player * 0x44] = *(int *)(*piVar8 + 0xa4) + local_3c;
    (&DAT_8010f2d4)[player * 0x44] = *(int *)(*piVar8 + 0xa8) + local_38;
    local_48 = -local_48;
    transform(&local_50,*piVar8 + 0xf0,&local_40);
    Camera_TunnelLimit__FiPi(player,&local_3c);
    (&DAT_8010f2b4)[player * 0x44] = *(int *)(*piVar8 + 0xa0) + local_40;
    (&DAT_8010f2b8)[player * 0x44] = *(int *)(*piVar8 + 0xa4) + local_3c;
    (&DAT_8010f2bc)[player * 0x44] = *(int *)(*piVar8 + 0xa8) + local_38;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateHeliCam__Fii(int player /*$s3*/, int behavior /*$s4*/)
 // line 950, offset 0x800813cc
	/* begin block 1 */
		// Start line: 951
		// Start offset: 0x800813CC
		// Variables:
	// 		struct coorddef arm; // stack offset -80
	// 		struct coorddef newarm; // stack offset -64
	// 		struct coorddef oldarm; // stack offset -48
	// 		struct Car_tObj *anchor; // $s2
	// 		int fallback; // $a0
	// 		int maxrate; // $a2
	// 		int rate; // $s0
	// 		int rateY; // $s5
	// 		int vertigo; // $a0
	// 		int slice; // $v1
	// 		int lookahead; // $s1
	// 		int len; // $v0

		/* begin block 1.1 */
			// Start line: 1047
			// Start offset: 0x80081968

			/* begin block 1.1.1 */
				// Start line: 1055
				// Start offset: 0x800819F8
				// Variables:
			// 		int scale; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80081A3C
			// End Line: 1057
		/* end block 1.1 */
		// End offset: 0x80081A3C
		// End Line: 1057
	/* end block 1 */
	// End offset: 0x80081A94
	// End Line: 1066

void Camera_UpdateHeliCam__Fii(int player,int behavior)
{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar9 = 0x1999;
  iVar3 = (int)(short)(&DAT_8010f31c)[player * 0x88] * 0x10;
  local_50 = *(undefined4 *)(&Camera_gFlags + iVar3);
  local_4c = *(int *)(&DAT_8010f554 + iVar3);
  local_48 = *(int *)(&DAT_8010f558 + iVar3);
  iVar3 = (&Camera_gInfo)[player * 0x44];
  uVar12 = 0xccc;
  if (*(int *)(iVar3 + 0x3f0) < 1) {
    iVar11 = 3;
    if (true) {
      iVar11 = -3;
    }
  }
  else {
    iVar11 = 3;
    if (false) {
      iVar11 = -3;
    }
  }
  if ((DAT_8011e0d4 != 0) && (DAT_80117044 == 0)) {
    return;
  }
  if (InBetween != 0) {
    return;
  }
  if (behavior == 1) {
    iVar9 = 0x1999;
  }
  else {
    if ((1 < behavior) && (behavior == 2)) {
      iVar9 = 0xccc;
    }
  }
  iVar7 = 0x1999;
  if (behavior != 0) {
    iVar4 = *(int *)(iVar3 + 0x418);
    iVar7 = *(int *)(iVar3 + 0x420);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    if (iVar7 < iVar4) {
      iVar4 = iVar4 + (iVar7 >> 2);
    }
    else {
      iVar4 = iVar7 + (iVar4 >> 2);
    }
    iVar4 = iVar4 / 900;
    iVar5 = iVar4;
    if (iVar9 < iVar4) {
      iVar5 = iVar9;
    }
    iVar7 = 0x51e;
    if ((0x51d < iVar5) && (iVar7 = iVar4, iVar9 < iVar4)) {
      iVar7 = iVar9;
    }
  }
  if (1 < Replay_ReplayMode) {
    iVar7 = 0x28f;
  }
  if ((&Input_gLookBehind)[player] != 0) {
    transform(&local_50,(&Camera_gInfo)[player * 0x44] + 0xf0,&DAT_8010f2c0 + player * 0x44);
  }
  iVar9 = *(int *)(iVar3 + 0x418);
  iVar3 = *(int *)(iVar3 + 0x420);
  if (iVar9 < 0) {
    iVar9 = -iVar9;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < iVar9) {
    iVar9 = iVar9 + (iVar3 >> 2);
  }
  else {
    iVar9 = iVar3 + (iVar9 >> 2);
  }
  iVar9 = iVar9 / 0x14;
  if (0x20000 < iVar9) {
    iVar9 = 0x20000;
  }
  local_48 = local_48 - iVar9;
  iVar3 = (int)*(short *)((&Camera_gInfo)[player * 0x44] + 8) + iVar11;
  if (iVar11 < 1) {
    iVar11 = iVar3 - iVar11;
    iVar9 = iVar11 * 0x20;
    if (-1 < iVar11) {
LAB_80081724:
      iVar9 = iVar11 << 5;
    }
  }
  else {
    iVar11 = iVar3 - iVar11;
    iVar9 = iVar11 * 0x20;
    if (iVar11 < 0) goto LAB_80081724;
  }
  uVar8 = *(int *)(iVar3 * 0x20 + 4) - *(int *)(iVar9 + 4);
  iVar3 = (int)(uVar8 + (uVar8 >> 0x1f)) >> 1;
  if (behavior == 1) {
    bVar2 = 0x14000 < iVar3;
    iVar9 = iVar3;
    if (bVar2) {
      iVar9 = 0x14000;
    }
    if (iVar9 < 0x4000) {
      iVar9 = 0x4000;
      goto LAB_800817f8;
    }
    iVar9 = 0x14000;
  }
  else {
    if (behavior < 2) {
      iVar9 = iVar3;
      if (behavior == 0) {
        iVar9 = 0;
      }
      goto LAB_800817f8;
    }
    iVar9 = iVar3;
    if (behavior != 2) goto LAB_800817f8;
    bVar2 = 0x30000 < iVar3;
    iVar9 = iVar3;
    if (bVar2) {
      iVar9 = 0x30000;
    }
    if (iVar9 < -0xc000) {
      iVar9 = -0xc000;
      goto LAB_800817f8;
    }
    iVar9 = 0x30000;
  }
  if (!bVar2) {
    iVar9 = iVar3;
  }
LAB_800817f8:
  local_4c = local_4c + iVar9;
  if ((&Input_gLookBehind)[player] == 0) {
    iVar3 = player * 0x110;
    transform(&local_50,(&Camera_gInfo)[player * 0x44] + 0xf0,&local_40);
    Camera_TunnelLimit__FiPi(player,&local_3c);
    local_30 = (&DAT_8010f2c0)[player * 0x44];
    local_2c = (&DAT_8010f2c4)[player * 0x44];
    local_28 = (&DAT_8010f2c8)[player * 0x44];
    cVar1 = *(char *)((int)&DAT_8010f320 + iVar3 + 1);
    if (cVar1 != '\0') {
      *(char *)((int)&DAT_8010f320 + iVar3 + 1) = cVar1 + -1;
      uVar12 = 0x1999;
      iVar7 = 0x1999;
    }
    iVar9 = fixedmult(local_40 - local_30,iVar7);
    (&DAT_8010f2c0)[player * 0x44] = local_30 + iVar9;
    iVar9 = fixedmult(local_3c - local_2c,uVar12);
    (&DAT_8010f2c4)[player * 0x44] = local_2c + iVar9;
    iVar9 = fixedmult(local_38 - local_28,iVar7);
    cVar1 = *(char *)((int)&DAT_8010f320 + iVar3 + 1);
    (&DAT_8010f2c8)[player * 0x44] = local_28 + iVar9;
    if ((cVar1 == '\0') &&
       (iVar3 = Math_VectorLength__FP8coorddef((coorddef *)(&DAT_8010f2c0 + player * 0x44)),
       iVar3 < 0x651eb)) {
      uVar12 = fixeddiv(0x651eb,iVar3);
      uVar6 = fixedmult(uVar12,(&DAT_8010f2c0)[player * 0x44]);
      (&DAT_8010f2c0)[player * 0x44] = uVar6;
      uVar6 = fixedmult(uVar12,(&DAT_8010f2c4)[player * 0x44]);
      (&DAT_8010f2c4)[player * 0x44] = uVar6;
      uVar12 = fixedmult(uVar12,(&DAT_8010f2c8)[player * 0x44]);
      (&DAT_8010f2c8)[player * 0x44] = uVar12;
    }
    iVar3 = (&Camera_gInfo)[player * 0x44];
    (&DAT_8010f2b4)[player * 0x44] =
         *(int *)((&Camera_gInfo)[player * 0x44] + 0xa0) + (&DAT_8010f2c0)[player * 0x44];
    (&DAT_8010f2b8)[player * 0x44] = *(int *)(iVar3 + 0xa4) + (&DAT_8010f2c4)[player * 0x44];
    (&DAT_8010f2bc)[player * 0x44] = *(int *)(iVar3 + 0xa8) + (&DAT_8010f2c8)[player * 0x44];
  }
  else {
    piVar10 = &Camera_gInfo + player * 0x44;
    transform(&local_50,*piVar10 + 0xf0,&local_40);
    (&DAT_8010f2cc)[player * 0x44] = *(int *)(*piVar10 + 0xa0) + local_40;
    (&DAT_8010f2d0)[player * 0x44] = *(int *)(*piVar10 + 0xa4) + local_3c;
    (&DAT_8010f2d4)[player * 0x44] = *(int *)(*piVar10 + 0xa8) + local_38;
    local_48 = -local_48;
    transform(&local_50,*piVar10 + 0xf0,&local_40);
    Camera_TunnelLimit__FiPi(player,&local_3c);
    (&DAT_8010f2b4)[player * 0x44] = *(int *)(*piVar10 + 0xa0) + local_40;
    (&DAT_8010f2b8)[player * 0x44] = *(int *)(*piVar10 + 0xa4) + local_3c;
    (&DAT_8010f2bc)[player * 0x44] = *(int *)(*piVar10 + 0xa8) + local_38;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateCircleCam__Fi(int player /*$s2*/)
 // line 1069, offset 0x80081ab8
	/* begin block 1 */
		// Start line: 1070
		// Start offset: 0x80081AB8
		// Variables:
	// 		struct coorddef src; // stack offset -72
	// 		struct coorddef des; // stack offset -56
	// 		int sin; // stack offset -24
	// 		int cos; // stack offset -20
	// 		int circle_height[3]; // stack offset -40

		/* begin block 1.1 */
			// Start line: 1093
			// Start offset: 0x80081BC0

			/* begin block 1.1.1 */
				// Start line: 1094
				// Start offset: 0x80081BDC
				// Variables:
			// 		int h0; // $a0
			// 		int h1; // $v0
			// 		int ang; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80081BDC
			// End Line: 1095
		/* end block 1.1 */
		// End offset: 0x80081CA8
		// End Line: 1101
	/* end block 1 */
	// End offset: 0x80081D20
	// End Line: 1110

void Camera_UpdateCircleCam__Fi(int player)
{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  
  local_28[0] = 0x10000;
  local_28[1] = 0x20000;
  local_28[2] = 0x30000;
  if ((((DAT_8011e0d4 == 0) || (DAT_80117044 != 0)) && (InBetween == 0)) && (DAT_8011e0cc == 0)) {
    sVar1 = (&DAT_8010f326)[player * 0x88];
    (&DAT_8010f326)[player * 0x88] = sVar1 + 1;
    intsincos((int)(short)(sVar1 + 1),&local_18,&local_14);
    local_48 = fixedmult(0x48000,local_14);
    local_40 = fixedmult(0x60000,local_18);
    if (((int)(short)(&DAT_8010f326)[player * 0x88] + 0x100U & 0x1ff) == 0) {
      (&DAT_8010f324)[player * 0x88] = (&DAT_8010f324)[player * 0x88] + 1;
    }
    if (((int)(short)(&DAT_8010f326)[player * 0x88] - 0x80U & 0x1ff) < 0x80) {
      iVar2 = (int)((uint)(ushort)(&DAT_8010f324)[player * 0x88] << 0x10) >> 0x10;
      local_44 = *(int *)((int)local_28 +
                         ((iVar2 + ((iVar2 / 3 + (iVar2 >> 0x1f)) -
                                   ((int)((uint)(ushort)(&DAT_8010f324)[player * 0x88] << 0x10) >>
                                   0x1f)) * -3) * 0x10000 >> 0xe));
      local_44 = ((int)((local_28[(iVar2 + 1) % 3] - local_44) *
                       ((int)(short)(&DAT_8010f326)[player * 0x88] - 0x80U & 0x7f)) >> 7) + local_44
      ;
    }
    else {
      iVar2 = (int)((uint)(ushort)(&DAT_8010f324)[player * 0x88] << 0x10) >> 0x10;
      local_44 = *(int *)((int)local_28 +
                         ((iVar2 + ((iVar2 / 3 + (iVar2 >> 0x1f)) -
                                   ((int)((uint)(ushort)(&DAT_8010f324)[player * 0x88] << 0x10) >>
                                   0x1f)) * -3) * 0x10000 >> 0xe));
    }
    piVar3 = &Camera_gInfo + player * 0x44;
    transform(&local_48,*piVar3 + 0xf0,&local_38);
    Camera_TunnelLimit__FiPi(player,&local_34);
    (&DAT_8010f2b4)[player * 0x44] = *(int *)(*piVar3 + 0xa0) + local_38;
    (&DAT_8010f2b8)[player * 0x44] = *(int *)(*piVar3 + 0xa4) + local_34;
    (&DAT_8010f2bc)[player * 0x44] = *(int *)(*piVar3 + 0xa8) + local_30;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ SetCameraZoom__Fii(int player /*$a0*/, int targetDist /*$a1*/)
 // line 1116, offset 0x80081d38
	/* begin block 1 */
		// Start line: 1117
		// Start offset: 0x80081D38
	/* end block 1 */
	// End offset: 0x80081E2C
	// End Line: 1133

void SetCameraZoom__Fii(int player,int targetDist)
{
  uint uVar1;
  
  if (((uint)(&DAT_8010f320)[player * 0x44] >> 7 & 1) == 0) {
    if (0x3000 < targetDist) {
      uVar1 = (uint)(&DAT_8010f320)[player * 0x44] >> 0x19 & 3;
      if (uVar1 == 1) {
        iGp00000290 = targetDist * 0xbe >> 0x1f;
        iGp00000290 = ((targetDist * 0xbe) / 6 + iGp00000290 >> 0xb) - iGp00000290;
      }
      else {
        if (((uVar1 == 2) &&
            (iGp00000290 = targetDist * 0xbe >> 0x1f,
            iGp00000290 = ((targetDist * 0xbe) / 6 + iGp00000290 >> 0xb) - iGp00000290,
            0x4b0 < iGp00000290)) && (iGp00000290 = 6000 - iGp00000290 >> 2, iGp00000290 < 0x2ee)) {
          iGp00000290 = 0x2ee;
        }
      }
    }
  }
  else {
    iGp00000290 = 0xbe;
  }
  SetGeomScreen(iGp00000290);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateTVCam__Fi(int player /*$s3*/)
 // line 1136, offset 0x80081e48
	/* begin block 1 */
		// Start line: 1137
		// Start offset: 0x80081E48
		// Variables:
	// 		static int lastX[2]; // offset 0x0
	// 		static int lastY[2]; // offset 0x8
	// 		int targetDist; // $s2
	// 		int height; // $v0
	/* end block 1 */
	// End offset: 0x80081F58
	// End Line: 1155

void Camera_UpdateTVCam__Fi(int player)
{
  int iVar1;
  int iVar2;
  coorddef *b;
  int iVar3;
  
  b = (coorddef *)(&DAT_8010f2b4 + player * 0x44);
  iVar1 = Math_Dist3D__FP8coorddefT0((coorddef *)((&DAT_8010f2b0)[player * 0x44] + 0xa0),b);
  if (iVar1 < 1) {
    iVar1 = Math_Dist3D__FP8coorddefT0((coorddef *)((&DAT_8010f2b0)[player * 0x44] + 0xa0),b);
    iVar1 = -iVar1;
  }
  else {
    iVar1 = Math_Dist3D__FP8coorddefT0((coorddef *)((&DAT_8010f2b0)[player * 0x44] + 0xa0),b);
  }
  iVar3 = player * 4;
  if (*(int *)(&lastX_64 + iVar3) != (&DAT_8010f2b4)[player * 0x44]) {
    *(undefined4 *)(&lastX_64 + iVar3) = (&DAT_8010f2b4)[player * 0x44];
    *(undefined4 *)(&lastY_65 + iVar3) = (&DAT_8010f2b8)[player * 0x44];
  }
  iVar2 = fixedmult((int)(&DAT_8010f2d8)[player * 0x44] >> 2,(iVar1 >> 4) + -0x4000);
  if ((int)(&DAT_8010f2d8)[player * 0x44] < iVar2) {
    iVar2 = (&DAT_8010f2d8)[player * 0x44];
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  (&DAT_8010f2b8)[player * 0x44] = *(int *)(&lastY_65 + iVar3) + iVar2;
  SetCameraZoom__Fii(player,iVar1 >> 4);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateAnimCam__Fi(int player /*$s1*/)
 // line 1203, offset 0x80081f94
	/* begin block 1 */
		// Start line: 1204
		// Start offset: 0x80081F94
		// Variables:
	// 		struct coorddef animPos; // stack offset -88
	// 		struct coorddef newarm; // stack offset -72
	// 		struct matrixtdef animRot; // stack offset -56
	/* end block 1 */
	// End offset: 0x8008223C
	// End Line: 1279

void Camera_UpdateAnimCam__Fi(int player)
{
  char cVar1;
  int iVar2;
  AnimScript *this;
  int *piVar3;
  matrixtdef *pmVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  coorddef local_58;
  int local_48;
  int local_44;
  int local_40;
  matrixtdef local_38;
  
  iVar5 = player * 0x110;
  if ((&DAT_8010f329)[iVar5] == -1) {
    cVar1 = (&DAT_8010f328)[iVar5];
    (&DAT_8010f328)[iVar5] = cVar1 + -1;
    iVar2 = Anim_Handle__Fi((uint)(byte)(&gAnimCams)[(int)cVar1]);
    (&DAT_8010f329)[iVar5] = (char)iVar2;
  }
  this = Anim_GetAnim__Fi((int)(char)(&DAT_8010f329)[iVar5]);
  iVar2 = GetTimedAnimPosRot__10AnimScriptP8coorddefP10matrixtdef(this,&local_58,&local_38);
  if (iVar2 < 1) {
    if ((char)(&DAT_8010f328)[iVar5] < '\x01') {
      if (Replay_ReplayMode != 2) {
        Camera_SetMode__Fii(player,*(int *)(&DAT_80113664 + player * 0x5a));
        return;
      }
      if (numValidCams != 0) {
        Replay_ReplayFindClosestCamera__Fii
                  (player,(int)*(short *)((&Camera_gInfo)[player * 0x44] + 8));
        return;
      }
      Camera_SetMode__Fii(player,0xb);
      (&DAT_8010f32a)[iVar5] = 3;
      return;
    }
    Anim_FreeHandle__Fi((int)(char)(&DAT_8010f329)[iVar5]);
    cVar1 = (&DAT_8010f328)[iVar5];
    (&DAT_8010f328)[iVar5] = cVar1 + -1;
    iVar2 = Anim_Handle__Fi((uint)(byte)(&gAnimCams)[(int)cVar1]);
    (&DAT_8010f329)[iVar5] = (char)iVar2;
    this = Anim_GetAnim__Fi((int)(char)iVar2);
    GetTimedAnimPosRot__10AnimScriptP8coorddefP10matrixtdef(this,&local_58,&local_38);
  }
  piVar7 = &Camera_gInfo + player * 0x44;
  piVar3 = &DAT_8010f2dc + player * 0x44;
  if ((2 >> ((int)(char)(&DAT_8010f328)[player * 0x110] & 0x1fU) & 1U) == 0) {
    transform(&local_58,*piVar7 + 0xf0,&local_48);
    iVar5 = *piVar7;
    (&DAT_8010f2b4)[player * 0x44] = *(int *)(*piVar7 + 0xa0) + local_48;
    (&DAT_8010f2b8)[player * 0x44] = *(int *)(iVar5 + 0xa4) + local_44;
    (&DAT_8010f2bc)[player * 0x44] = *(int *)(iVar5 + 0xa8) + local_40;
    Math_fasttransmult__FP10matrixtdefN20
              (&local_38,(matrixtdef *)(iVar5 + 0xf0),(matrixtdef *)(&DAT_8010f2dc + player * 0x44))
    ;
  }
  else {
    (&DAT_8010f2b4)[player * 0x44] = local_58.x;
    (&DAT_8010f2b8)[player * 0x44] = local_58.y;
    (&DAT_8010f2bc)[player * 0x44] = local_58.z;
    pmVar4 = &local_38;
    do {
      iVar5 = pmVar4->m[1];
      iVar2 = pmVar4->m[2];
      iVar6 = pmVar4->m[3];
      *piVar3 = pmVar4->m[0];
      piVar3[1] = iVar5;
      piVar3[2] = iVar2;
      piVar3[3] = iVar6;
      pmVar4 = (matrixtdef *)(pmVar4->m + 4);
      piVar3 = piVar3 + 4;
    } while (pmVar4 != (matrixtdef *)(local_38.m + 8));
    *piVar3 = pmVar4->m[0];
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateFinishCam__Fi(int player /*$a0*/)
 // line 1283, offset 0x80082254
	/* begin block 1 */
		// Start line: 1284
		// Start offset: 0x80082254
		// Variables:
	// 		struct coorddef finishPos; // stack offset -96
	// 		struct coorddef newarm; // stack offset -80
	// 		struct matrixtdef finishRot; // stack offset -64
	/* end block 1 */
	// End offset: 0x800822DC
	// End Line: 1335

void Camera_UpdateFinishCam__Fi(int player)
{
  int iVar1;
  AnimScript *this;
  int *piVar2;
  int iVar3;
  coorddef cStack96;
  int local_50;
  int local_4c;
  int local_48;
  matrixtdef mStack64;
  
  iVar3 = player * 0x110;
  piVar2 = &Camera_gInfo + player * 0x44;
  if ((&DAT_8010f329)[iVar3] == -1) {
    iVar1 = Anim_Handle__Fi(1);
    (&DAT_8010f329)[iVar3] = (char)iVar1;
  }
  this = Anim_GetAnim__Fi((int)(char)(&DAT_8010f329)[iVar3]);
  iVar3 = GetTimedAnimPosRot__10AnimScriptP8coorddefP10matrixtdef(this,&cStack96,&mStack64);
  if (iVar3 < 1) {
    Anim_GetLastAnimPosRot__FiiP8coorddefP10matrixtdef(1,6,&cStack96,&mStack64);
  }
  transform(&cStack96,*piVar2 + 0xf0,&local_50);
  iVar3 = *piVar2;
  (&DAT_8010f2b4)[player * 0x44] = *(int *)(*piVar2 + 0xa0) + local_50;
  (&DAT_8010f2b8)[player * 0x44] = *(int *)(iVar3 + 0xa4) + local_4c;
  (&DAT_8010f2bc)[player * 0x44] = *(int *)(iVar3 + 0xa8) + local_48;
  Math_fasttransmult__FP10matrixtdefN20
            (&mStack64,(matrixtdef *)(iVar3 + 0xf0),(matrixtdef *)(&DAT_8010f2dc + player * 0x44));
  (&DAT_8010f320)[player * 0x44] = (&DAT_8010f320)[player * 0x44] & 0xfffffff1 | 0x70;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateBlimpCam__Fi(int player /*$a0*/)
 // line 1350, offset 0x8008237c
	/* begin block 1 */
		// Start line: 1351
		// Start offset: 0x8008237C
		// Variables:
	// 		struct coorddef arm; // stack offset -40
	// 		struct coorddef oldarm; // stack offset -24
	/* end block 1 */
	// End offset: 0x8008237C
	// End Line: 1351

void Camera_UpdateBlimpCam__Fi(int player)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  
  piVar3 = &Camera_gInfo + player * 0x44;
  iVar1 = (int)(short)(&DAT_8010f31c)[player * 0x88] * 0x10;
  iVar2 = *(int *)(&Camera_gFlags + iVar1);
  local_24 = *(int *)(&DAT_8010f554 + iVar1);
  local_20 = *(int *)(&DAT_8010f558 + iVar1);
  Camera_TunnelLimit__FiPi(player,&local_24);
  local_18 = (&DAT_8010f2b4)[player * 0x44] - *(int *)(*piVar3 + 0xa0);
  local_14 = (&DAT_8010f2b8)[player * 0x44] - *(int *)(*piVar3 + 0xa4);
  local_10 = (&DAT_8010f2bc)[player * 0x44] - *(int *)(*piVar3 + 0xa8);
  iVar1 = fixedmult(iVar2 - local_18,0x1999);
  local_18 = local_18 + iVar1;
  iVar1 = fixedmult(local_24 - local_14,0x1999);
  local_14 = local_14 + iVar1;
  iVar1 = fixedmult(local_20 - local_10,0x1999);
  (&DAT_8010f2b4)[player * 0x44] = *(int *)(*piVar3 + 0xa0) + local_18;
  (&DAT_8010f2b8)[player * 0x44] = *(int *)(*piVar3 + 0xa4) + local_14;
  (&DAT_8010f2bc)[player * 0x44] = *(int *)(*piVar3 + 0xa8) + local_10 + iVar1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_SetSplineCam__Fi(int player /*$s5*/)
 // line 1395, offset 0x800824c0
	/* begin block 1 */
		// Start line: 1396
		// Start offset: 0x800824C0
		// Variables:
	// 		struct Car_tObj *anchor; // $s3
	// 		int numSlice; // $s2

		/* begin block 1.1 */
			// Start line: 1400
			// Start offset: 0x80082540

			/* begin block 1.1.1 */
				// Start line: 1406
				// Start offset: 0x8008255C
				// Variables:
			// 		int direction; // $s0
			/* end block 1.1.1 */
			// End offset: 0x8008269C
			// End Line: 1437
		/* end block 1.1 */
		// End offset: 0x8008269C
		// End Line: 1437
	/* end block 1 */
	// End offset: 0x8008269C
	// End Line: 1437

void Camera_SetSplineCam__Fi(int player)
{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  
  piVar9 = &Camera_gInfo + player * 0x44;
  iVar8 = *piVar9;
  iVar4 = ((0x10000 - *(int *)(&camSpeedTable + (uint)(byte)(&DAT_8010f32a)[player * 0x110] * 4)) *
           0xf >> 0x10) + 1;
  iVar5 = 8;
  if (iVar4 < 9) {
    iVar5 = iVar4;
  }
  if ((&Replay_ReplayCamera)[player * 4] == 0) {
    iVar4 = fixedmult((&DAT_8010f2f4)[player * 0x44],*(undefined4 *)(iVar8 + 0x15c));
    iVar1 = fixedmult((&DAT_8010f2f8)[player * 0x44],*(undefined4 *)(*piVar9 + 0x160));
    iVar2 = fixedmult((&DAT_8010f2fc)[player * 0x44],*(undefined4 *)(*piVar9 + 0x164));
    if (iVar4 + iVar1 + iVar2 < 0) {
      iVar5 = -iVar5;
    }
    if (*(int *)(iVar8 + 0x420) < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < 0) {
      *(short *)(&DAT_8010f338 + player * 0x44) = *(short *)(iVar8 + 8) + (short)iVar5;
    }
    else {
      *(short *)(&DAT_8010f338 + player * 0x44) = *(short *)(iVar8 + 8) + (short)iVar5;
    }
    puVar3 = (undefined4 *)((int)*(short *)(&DAT_8010f338 + player * 0x44) * 0x20);
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    (&DAT_8010f2b4)[player * 0x44] = *puVar3;
    (&DAT_8010f2b8)[player * 0x44] = uVar6;
    (&DAT_8010f2bc)[player * 0x44] = uVar7;
    BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
              ((coorddef *)(&DAT_8010f2b4 + player * 0x44),
               (BWorldSm_Pos *)(&DAT_8010f338 + player * 0x44),1);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateSplineCam__Fi(int player /*$s5*/)
 // line 1444, offset 0x800826c0
	/* begin block 1 */
		// Start line: 1445
		// Start offset: 0x800826C0
		// Variables:
	// 		struct Car_tObj *anchor; // $s4
	// 		struct coorddef cameraVel; // stack offset -80
	// 		int change; // $a2

		/* begin block 1.1 */
			// Start line: 1455
			// Start offset: 0x8008273C
			// Variables:
		// 		int sliceDist; // $a1
		// 		int numSlice; // $s2

			/* begin block 1.1.1 */
				// Start line: 1464
				// Start offset: 0x80082864

				/* begin block 1.1.1.1 */
					// Start line: 1465
					// Start offset: 0x80082888
					// Variables:
				// 		int direction; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x80082998
				// End Line: 1493
			/* end block 1.1.1 */
			// End offset: 0x80082A20
			// End Line: 1502
		/* end block 1.1 */
		// End offset: 0x80082A20
		// End Line: 1502

		/* begin block 1.2 */
			// Start line: 1507
			// Start offset: 0x80082A20
			// Variables:
		// 		struct coorddef splineVel; // stack offset -64
		// 		struct coorddef nextVel; // stack offset -48

			/* begin block 1.2.1 */
				// Start line: 1510
				// Start offset: 0x80082A8C
				// Variables:
			// 		int relativeVel; // $s1
			/* end block 1.2.1 */
			// End offset: 0x80082B34
			// End Line: 1523
		/* end block 1.2 */
		// End offset: 0x80082B34
		// End Line: 1523
	/* end block 1 */
	// End offset: 0x80082C14
	// End Line: 1544

void Camera_UpdateSplineCam__Fi(int player)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  coorddef *b;
  int iVar9;
  int *piVar10;
  int iVar11;
  coorddef local_40;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar11 = (&Camera_gInfo)[player * 0x44];
  bVar1 = false;
  if ((DAT_8011e0d4 != 0) && (DAT_80117044 == 0)) {
    return;
  }
  if (InBetween != 0) {
    return;
  }
  iVar2 = (int)*(short *)(iVar11 + 8) - (int)*(short *)(&DAT_8010f338 + player * 0x44);
  if (iVar2 < 1) {
    iVar2 = (int)*(short *)(&DAT_8010f338 + player * 0x44) - (int)*(short *)(iVar11 + 8);
  }
  if (iVar2 < 1) {
    iVar2 = (int)*(short *)(iVar11 + 8) - (int)*(short *)(&DAT_8010f338 + player * 0x44);
    if (iVar2 < 1) {
      iVar2 = (int)*(short *)(&DAT_8010f338 + player * 0x44) - (int)*(short *)(iVar11 + 8);
    }
  }
  else {
    iVar2 = (int)*(short *)(iVar11 + 8) - (int)*(short *)(&DAT_8010f338 + player * 0x44);
    if (iVar2 < 1) {
      iVar2 = -((int)*(short *)(&DAT_8010f338 + player * 0x44) - (int)*(short *)(iVar11 + 8));
    }
    else {
      iVar2 = -iVar2;
    }
  }
  iVar9 = (0x10000 - *(int *)(&camSpeedTable + (uint)(byte)(&DAT_8010f32a)[player * 0x110] * 4)) *
          0xf >> 0x10;
  if ((iVar9 + 2 < iVar2) &&
     (*(int *)(&camSpeedTable + (uint)(byte)(&DAT_8010f32a)[player * 0x110] * 4) < 0x10000)) {
    bVar1 = true;
  }
  if ((bVar1) && ((&Replay_ReplayCamera)[player * 4] == 0)) {
    iVar9 = iVar9 + 1;
    iVar2 = 8;
    if (iVar9 < 9) {
      iVar2 = iVar9;
    }
    piVar10 = &Camera_gInfo + player * 0x44;
    iVar9 = fixedmult((&DAT_8010f2f4)[player * 0x44],*(undefined4 *)(*piVar10 + 0x15c));
    iVar3 = fixedmult((&DAT_8010f2f8)[player * 0x44],*(undefined4 *)(*piVar10 + 0x160));
    iVar4 = fixedmult((&DAT_8010f2fc)[player * 0x44],*(undefined4 *)(*piVar10 + 0x164));
    if (iVar9 + iVar3 + iVar4 < 0) {
      iVar2 = -iVar2;
    }
    if (*(int *)(iVar11 + 0x420) < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0) {
      *(short *)(&DAT_8010f338 + player * 0x44) = *(short *)(iVar11 + 8) + (short)iVar2;
    }
    else {
      *(short *)(&DAT_8010f338 + player * 0x44) = *(short *)(iVar11 + 8) + (short)iVar2;
    }
    puVar5 = (undefined4 *)((int)*(short *)(&DAT_8010f338 + player * 0x44) * 0x20);
    uVar7 = puVar5[1];
    uVar8 = puVar5[2];
    (&DAT_8010f2b4)[player * 0x44] = *puVar5;
    (&DAT_8010f2b8)[player * 0x44] = uVar7;
    (&DAT_8010f2bc)[player * 0x44] = uVar8;
  }
  BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
            ((coorddef *)(&DAT_8010f2b4 + player * 0x44),
             (BWorldSm_Pos *)(&DAT_8010f338 + player * 0x44),1);
  piVar6 = (int *)0x0;
  piVar10 = (int *)((int)*(short *)(&DAT_8010f338 + player * 0x44) * 0x20);
  if ((int)*(short *)(&DAT_8010f338 + player * 0x44) + 1 < 0) {
    piVar6 = (int *)(((int)*(short *)(&DAT_8010f338 + player * 0x44) + 1) * 0x20);
  }
  local_30 = *piVar6;
  local_2c = piVar6[1];
  local_28 = piVar6[2];
  local_40.x = local_30 - *piVar10;
  local_40.y = local_2c - piVar10[1];
  local_40.z = local_28 - piVar10[2];
  Math_NormalizeVector__FP8coorddef(&local_40);
  iVar2 = fixedmult(*(undefined4 *)(iVar11 + 0xac),local_40.x);
  iVar9 = fixedmult(*(undefined4 *)(iVar11 + 0xb0),local_40.y);
  iVar11 = fixedmult(*(undefined4 *)(iVar11 + 0xb4),local_40.z);
  iVar11 = iVar2 + iVar9 + iVar11;
  if ((DAT_80113224 & 4) != 0) {
    iVar11 = fixedmult(iVar11,0xcccc);
  }
  uVar7 = fixedmult(iVar11,*(undefined4 *)
                            (&camSpeedTable + (uint)(byte)(&DAT_8010f32a)[player * 0x110] * 4));
  iVar11 = fixedmult(uVar7,local_40.x);
  iVar2 = fixedmult(uVar7,local_40.y);
  iVar9 = fixedmult(uVar7,local_40.z);
  b = (coorddef *)(&DAT_8010f2b4 + player * 0x44);
  (&DAT_8010f2b4)[player * 0x44] = (&DAT_8010f2b4)[player * 0x44] + (iVar11 >> 6);
  (&DAT_8010f2b8)[player * 0x44] = (&DAT_8010f2b8)[player * 0x44] + (iVar2 >> 6);
  (&DAT_8010f2bc)[player * 0x44] = (&DAT_8010f2bc)[player * 0x44] + (iVar9 >> 6);
  iVar11 = Math_Dist3D__FP8coorddefT0((coorddef *)((&DAT_8010f2b0)[player * 0x44] + 0xa0),b);
  if (iVar11 < 1) {
    iVar11 = Math_Dist3D__FP8coorddefT0((coorddef *)((&DAT_8010f2b0)[player * 0x44] + 0xa0),b);
    iVar11 = -iVar11;
  }
  else {
    iVar11 = Math_Dist3D__FP8coorddefT0((coorddef *)((&DAT_8010f2b0)[player * 0x44] + 0xa0),b);
  }
  SetCameraZoom__Fii(player,iVar11 >> 4);
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Camera_IslandProfile__FUs(unsigned short before /*$v1*/)
 // line 1553, offset 0x80082c3c
	/* begin block 1 */
		// Start line: 1554
		// Start offset: 0x80082C3C
		// Variables:
	// 		unsigned short after; // $a1
	// 		unsigned short diff; // $a0
	/* end block 1 */
	// End offset: 0x80082C8C
	// End Line: 1575

int Camera_IslandProfile__FUs(ushort before)
{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)before;
  uVar2 = uVar4 & uVar4 - 1;
  uVar4 = uVar4 - uVar2;
  uVar3 = (uint)before;
  if (before != 0) {
    do {
      if (uVar3 - uVar2 != (uVar4 & 0xffff)) {
        return 1;
      }
      bVar1 = uVar2 != 0;
      uVar4 = uVar4 << 1;
      uVar3 = uVar2;
      uVar2 = uVar2 & uVar2 - 1;
    } while (bVar1);
  }
  return 0;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdatePulloverCam__Fi(int player /*$s2*/)
 // line 1579, offset 0x80082c94
	/* begin block 1 */
		// Start line: 1580
		// Start offset: 0x80082C94
		// Variables:
	// 		struct coorddef sCenter; // stack offset -96
	// 		struct coorddef sForward; // stack offset -80
	// 		struct coorddef sRight; // stack offset -64
	// 		struct coorddef sccVec; // stack offset -48
	// 		struct coorddef newarm; // stack offset -32
	// 		int ySign; // $s0
	/* end block 1 */
	// End offset: 0x80082FF8
	// End Line: 1689

void Camera_UpdatePulloverCam__Fi(int player)
{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_40;
  int local_3c;
  int local_38;
  int local_1c;
  int local_18;
  
  if (((DAT_8011e0d4 == 0) || (DAT_80117044 != 0)) && (InBetween == 0)) {
    SetGeomScreen(0xbe);
    piVar11 = &Camera_gInfo + player * 0x44;
    if ((int)(&DAT_8010f334)[player * 0x44] < 1) {
      piVar2 = (int *)((int)*(short *)(*piVar11 + 8) * 0x20);
      iVar9 = *piVar2;
      iVar10 = piVar2[1];
      local_18 = piVar2[2];
      cVar1 = *(char *)((int)*(short *)(*piVar11 + 8) * 0x20 + 0x11);
      iVar3 = *(int *)(*piVar11 + 0xa0);
      iVar4 = (int)*(char *)((int)*(short *)(*piVar11 + 8) * 0x20 + 0x12);
      local_40 = iVar4 * 0x800;
      iVar5 = (int)*(char *)((int)*(short *)(*piVar11 + 8) * 0x20 + 0x13);
      local_3c = iVar5 * 0x800;
      iVar6 = (int)*(char *)((int)*(short *)(*piVar11 + 8) * 0x20 + 0x14);
      local_38 = iVar6 * 0x800;
      iVar7 = fixedmult();
      iVar3 = fixedmult(iVar3 - iVar9,(int)cVar1 << 9);
      uVar8 = Camera_IslandProfile__FUs(*(ushort *)((int)*(short *)(*piVar11 + 8) * 0x20 + 0x16));
      if (iVar7 - iVar3 < 0) {
        uVar8 = uVar8 ^ 1;
      }
      if (uVar8 != 0) {
        local_40 = iVar4 * -0x800;
        local_38 = iVar6 * -0x800;
        local_3c = iVar5 * -0x800;
      }
      local_1c = 0x60000;
      Camera_TunnelLimit__FiPi(player,&local_1c);
      local_1c = local_1c + iVar10 + local_3c;
      local_18 = local_18 + local_38;
      iVar3 = fixedmult((iVar9 + local_40) - (&DAT_8010f2b4)[player * 0x44],0x7ae);
      (&DAT_8010f2b4)[player * 0x44] = (&DAT_8010f2b4)[player * 0x44] + iVar3;
      iVar3 = fixedmult(local_1c - (&DAT_8010f2b8)[player * 0x44],0x7ae);
      (&DAT_8010f2b8)[player * 0x44] = (&DAT_8010f2b8)[player * 0x44] + iVar3;
      iVar3 = fixedmult(local_18 - (&DAT_8010f2bc)[player * 0x44],0x7ae);
      (&DAT_8010f2bc)[player * 0x44] = (&DAT_8010f2bc)[player * 0x44] + iVar3;
      (&DAT_8010f320)[player * 0x44] = (&DAT_8010f320)[player * 0x44] & 0xfffffff9 | 0x78;
    }
    else {
      Camera_UpdateCopCam2__Fi(player);
    }
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateCopCam1__Fi(int player /*$a0*/)
 // line 1708, offset 0x80083010
	/* begin block 1 */
		// Start line: 1709
		// Start offset: 0x80083010
		// Variables:
	// 		struct coorddef vec; // stack offset -24
	/* end block 1 */
	// End offset: 0x80083010
	// End Line: 1709

void Camera_UpdateCopCam1__Fi(int player)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  coorddef local_18;
  
  piVar6 = &Camera_gInfo + player * 0x44;
  iVar1 = *(int *)(*piVar6 + 0xa4);
  iVar3 = *(int *)((&DAT_8010f2b0)[player * 0x44] + 0xa4);
  iVar2 = *(int *)(*piVar6 + 0xa8);
  iVar4 = *(int *)((&DAT_8010f2b0)[player * 0x44] + 0xa8);
  iVar5 = player * 0xc;
  *(int *)(&gCop1Target + iVar5) =
       *(int *)(*piVar6 + 0xa0) + *(int *)((&DAT_8010f2b0)[player * 0x44] + 0xa0) >> 1;
  *(int *)(&DAT_8013dff4 + iVar5) = iVar1 + iVar3 >> 1;
  *(int *)(&DAT_8013dff8 + iVar5) = iVar2 + iVar4 >> 1;
  local_18.x = *(int *)(*piVar6 + 0xa0) - *(int *)((&DAT_8010f2b0)[player * 0x44] + 0xa0);
  local_18.y = *(int *)(*piVar6 + 0xa4) - *(int *)((&DAT_8010f2b0)[player * 0x44] + 0xa4);
  local_18.z = *(int *)(*piVar6 + 0xa8) - *(int *)((&DAT_8010f2b0)[player * 0x44] + 0xa8);
  Math_NormalizeVector__FP8coorddef(&local_18);
  local_18.x = fixedmult(0x40000,local_18.x);
  local_18.y = fixedmult(0x40000,local_18.y);
  iVar1 = fixedmult(0x40000,local_18.z);
  (&DAT_8010f2b4)[player * 0x44] = *(int *)(*piVar6 + 0xa0) + local_18.x + iVar1;
  (&DAT_8010f2b8)[player * 0x44] = *(int *)(*piVar6 + 0xa4) + 0x18000;
  (&DAT_8010f2bc)[player * 0x44] = (*(int *)(*piVar6 + 0xa8) - local_18.x) + iVar1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateCopCam2__Fi(int player /*$a0*/)
 // line 1727, offset 0x800831a8
	/* begin block 1 */
		// Start line: 1728
		// Start offset: 0x800831A8
		// Variables:
	// 		struct coorddef dirVec; // stack offset -24
	/* end block 1 */
	// End offset: 0x80083248
	// End Line: 1733

void Camera_UpdateCopCam2__Fi(int player)
{
  int *piVar1;
  coorddef local_18;
  
  piVar1 = &Camera_gInfo + player * 0x44;
  local_18.x = *(int *)((&DAT_8010f2b0)[player * 0x44] + 0xa0) - *(int *)(*piVar1 + 0xa0);
  if (local_18.x < 0) {
    local_18.x = local_18.x + 3;
  }
  local_18.x = local_18.x >> 2;
  local_18.y = *(int *)((&DAT_8010f2b0)[player * 0x44] + 0xa4) - *(int *)(*piVar1 + 0xa4);
  if (local_18.y < 0) {
    local_18.y = local_18.y + 3;
  }
  local_18.y = local_18.y >> 2;
  local_18.z = *(int *)((&DAT_8010f2b0)[player * 0x44] + 0xa8) - *(int *)(*piVar1 + 0xa8);
  if (local_18.z < 0) {
    local_18.z = local_18.z + 3;
  }
  local_18.z = local_18.z >> 2;
  Math_NormalizeVector__FP8coorddef(&local_18);
  (&DAT_8010f2b4)[player * 0x44] = *(int *)(*piVar1 + 0xa0) + local_18.x * -2;
  (&DAT_8010f2b8)[player * 0x44] = *(int *)(*piVar1 + 0xa4) + 0x13333;
  (&DAT_8010f2bc)[player * 0x44] = *(int *)(*piVar1 + 0xa8) + local_18.z * -2;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_UpdateBTCopCam__Fi(int player /*$s0*/)
 // line 1741, offset 0x800832b0
	/* begin block 1 */
		// Start line: 1742
		// Start offset: 0x800832B0
	/* end block 1 */
	// End offset: 0x80083374
	// End Line: 1766

void Camera_UpdateBTCopCam__Fi(int player)
{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = player * 0x110;
  iVar3 = (&DAT_8010f32c)[player * 0x44];
  if (iVar3 == 1) {
    cVar1 = (&DAT_8010f330)[iVar2];
    (&Camera_gInfo)[player * 0x44] = (&_Cars_gList)[(int)(char)(&DAT_8010f330)[iVar2]];
    (&DAT_8010f2b0)[player * 0x44] = (&_Cars_gList)[(int)cVar1];
    Camera_UpdateCircleCam__Fi(player);
  }
  else {
    if ((1 < iVar3) && (iVar3 == 2)) {
      cVar1 = (&DAT_8010f330)[iVar2];
      (&Camera_gInfo)[player * 0x44] = (&_Cars_gList)[player];
      (&DAT_8010f2b0)[player * 0x44] = (&_Cars_gList)[(int)cVar1];
      Camera_UpdateCopCam2__Fi(player);
    }
  }
  (&DAT_8010f334)[player * 0x44] = 0x140;
  (&DAT_8010f320)[player * 0x44] = (&DAT_8010f320)[player * 0x44] & 0xffffffb9 | 0x38;
  uGp00000290 = 0xbe;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_Update__Fv()
 // line 1777, offset 0x800833d8
	/* begin block 1 */
		// Start line: 1778
		// Start offset: 0x800833D8
		// Variables:
	// 		int player; // $s3

		/* begin block 1.1 */
			// Start line: 1778
			// Start offset: 0x800833D8

			/* begin block 1.1.1 */
				// Start line: 1782
				// Start offset: 0x80083428
				// Variables:
			// 		struct Car_tObj *anchor; // $s4

				/* begin block 1.1.1.1 */
					// Start line: 1784
					// Start offset: 0x80083448

					/* begin block 1.1.1.1.1 */
						// Start line: 1797
						// Start offset: 0x80083460

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1809
							// Start offset: 0x80083484

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1810
								// Start offset: 0x80083498

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1812
									// Start offset: 0x80083498

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1813
										// Start offset: 0x80083498
										// Variables:
									// 		int direction; // $s0
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80083498
									// End Line: 1815
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80083498
								// End Line: 1815
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80083500
							// End Line: 1821
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80083500
						// End Line: 1821
					/* end block 1.1.1.1.1 */
					// End offset: 0x80083500
					// End Line: 1821
				/* end block 1.1.1.1 */
				// End offset: 0x80083500
				// End Line: 1821

				/* begin block 1.1.1.2 */
					// Start line: 1853
					// Start offset: 0x8008359C

					/* begin block 1.1.1.2.1 */
						// Start line: 1854
						// Start offset: 0x800835B0
						// Variables:
					// 		struct camera_flags *flagMode; // $a1
					/* end block 1.1.1.2.1 */
					// End offset: 0x800836E0
					// End Line: 1873
				/* end block 1.1.1.2 */
				// End offset: 0x800836E0
				// End Line: 1873
			/* end block 1.1.1 */
			// End offset: 0x80083810
			// End Line: 1901
		/* end block 1.1 */
		// End offset: 0x80083828
		// End Line: 1903
	/* end block 1 */
	// End offset: 0x80083828
	// End Line: 1903

void Camera_Update__Fv(void)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int player;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  
  player = 0;
  piVar12 = &Camera_gInfo;
  iVar16 = 0;
  piVar15 = &_Cars_gHumanRaceCarList;
  puVar14 = &DAT_8010f2f4;
  do {
    if ((int)(uint)((byte)DAT_8010f320 >> 7) < player) {
      return;
    }
    iVar13 = *piVar12;
    if (((uint)piVar12[0x1d] >> 6 & 1) == 0) {
LAB_80083500:
      if (((*(uint *)(iVar13 + 0x260) & 1) != 0) && (*(int *)(iVar13 + 0x390) == 2)) {
        Camera_UpdateFinishCam__Fi(player);
        goto LAB_80083584;
      }
      if (0 < piVar12[0x20]) {
        Camera_UpdateBTCopCam__Fi(player);
        goto LAB_80083584;
      }
      if ((*(int *)(*piVar15 + 0x278) != 0) && (*(int *)(*piVar15 + 0x390) != 3)) {
        Camera_UpdatePulloverCam__Fi(player);
        goto LAB_80083584;
      }
      if ((*(byte *)(piVar12 + 0x1d) & 1) != 0) {
        uVar11 = piVar12[0x1d];
        iVar13 = (int)*(short *)(piVar12 + 0x1c) * 0x10;
        uVar5 = (*(uint *)(&DAT_8010f55c + iVar13) & 1) << 1;
        piVar12[0x1d] = uVar11 & 0xfffffffd | uVar5;
        uVar6 = (*(uint *)(&DAT_8010f55c + iVar13) & 2) << 1;
        piVar12[0x1d] = uVar11 & 0xfffffff9 | uVar5 | uVar6;
        uVar7 = (*(uint *)(&DAT_8010f55c + iVar13) & 4) << 1;
        piVar12[0x1d] = uVar11 & 0xfffffff1 | uVar5 | uVar6 | uVar7;
        uVar8 = (*(uint *)(&DAT_8010f55c + iVar13) & 8) << 1;
        piVar12[0x1d] = uVar11 & 0xffffffe1 | uVar5 | uVar6 | uVar7 | uVar8;
        uVar9 = (*(uint *)(&DAT_8010f55c + iVar13) & 0x10) << 1;
        piVar12[0x1d] = uVar11 & 0xffffffc1 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9;
        uVar10 = (*(uint *)(&DAT_8010f55c + iVar13) & 0x20) << 1;
        piVar12[0x1d] = uVar11 & 0xffffff81 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10;
        piVar12[0x1d] =
             uVar11 & 0xf7ffff80 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 |
             (uint)(*(short *)(piVar12 + 0x1c) < 2) << 0x1b;
        *piVar12 = *piVar15;
        bVar1 = 1 < Replay_ReplayMode;
        piVar12[1] = *piVar15;
        if ((bVar1) && (*(int *)((int)&DAT_80117054 + iVar16) == 0x13)) {
          Replay_ReplayFindClosestCamera__Fii(player,(int)*(short *)(*piVar12 + 8));
        }
      }
      switch(*(undefined2 *)(piVar12 + 0x1c)) {
      case 0:
      case 1:
        Camera_UpdateBumperCam__Fi(player);
        break;
      case 2:
        Camera_UpdateTailCam__Fii(player,0);
        break;
      case 3:
        Camera_UpdateTailCam__Fii(player,1);
        break;
      case 4:
        Camera_UpdateTailCam__Fii(player,2);
        break;
      case 5:
        Camera_UpdateHeliCam__Fii(player,0);
        break;
      case 6:
        Camera_UpdateHeliCam__Fii(player,1);
        break;
      case 7:
        Camera_UpdateHeliCam__Fii(player,2);
        break;
      case 8:
      case 9:
      case 0xf:
        Camera_UpdateSimpleCam__Fi(player);
        break;
      case 10:
        Camera_UpdateCircleCam__Fi(player);
        break;
      case 0xb:
        Camera_UpdateSplineCam__Fi(player);
        break;
      case 0xc:
        Camera_UpdateTVCam__Fi(player);
        break;
      case 0xd:
        Camera_UpdateBlimpCam__Fi(player);
        break;
      case 0xe:
        Camera_UpdateAnimCam__Fi(player);
        break;
      case 0x10:
        Camera_UpdateCopCam1__Fi(player);
        break;
      case 0x11:
      case 0x12:
        Camera_UpdateCopCam2__Fi(player);
      }
    }
    else {
      if (*(char *)((int)piVar12 + 0x76) == '\0') {
        if (*(int *)(iVar13 + 300) < 0x8000) {
          iVar2 = fixedmult(*puVar14,*(undefined4 *)(iVar13 + 0x15c));
          iVar3 = fixedmult(puVar14[1],*(undefined4 *)(*piVar12 + 0x160));
          iVar4 = fixedmult(puVar14[2],*(undefined4 *)(*piVar12 + 0x164));
          piVar12[0x1d] = piVar12[0x1d] & 0xfeffffffU | (uint)(iVar2 + iVar3 + iVar4 < 0) << 0x18;
          *(undefined *)((int)piVar12 + 0x76) = 100;
        }
        goto LAB_80083500;
      }
      *(char *)((int)piVar12 + 0x76) = *(char *)((int)piVar12 + 0x76) + -1;
      Camera_UpdateCollisionCam__Fi(player);
LAB_80083584:
      piVar12[0x1d] = piVar12[0x1d] & 0xf7ffffffU | 1;
    }
    piVar12 = piVar12 + 0x44;
    iVar16 = iVar16 + 0x10;
    piVar15 = piVar15 + 1;
    puVar14 = puVar14 + 0x44;
    player = player + 1;
  } while( true );


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_Init__Fv()
 // line 1912, offset 0x80083858
	/* begin block 1 */
		// Start line: 1913
		// Start offset: 0x80083858
		// Variables:
	// 		int splitScreen; // $s0
	// 		struct BWorldSm_Pos slicePos; // stack offset -160
	// 		int localCar; // $v1
	// 		int i; // $t0

		/* begin block 1.1 */
			// Start line: 1975
			// Start offset: 0x80083B3C
			// Variables:
		// 		int type; // $a1
		/* end block 1.1 */
		// End offset: 0x80083BCC
		// End Line: 1990
	/* end block 1 */
	// End offset: 0x80083BCC
	// End Line: 1990

void Camera_Init__Fv(void)
{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_a0 [32];
  int aiStack32 [2];
  
  bVar1 = DAT_801131f8 == 1;
  memset(local_a0,0,0x84);
  iVar6 = 0;
  if (true) {
    piVar5 = &Camera_gInfo;
    do {
      iVar7 = iVar6;
      if (!bVar1) {
        iVar7 = DAT_80113208;
      }
      *piVar5 = (&_Cars_gHumanRaceCarList)[iVar7];
      iVar2 = *piVar5;
      piVar5[1] = (&_Cars_gHumanRaceCarList)[iVar7];
      iVar7 = *(int *)(iVar2 + 0xa4);
      iVar8 = *(int *)(iVar2 + 0xa8);
      piVar5[2] = *(int *)(iVar2 + 0xa0);
      piVar5[3] = iVar7;
      piVar5[4] = iVar8;
      iVar7 = *piVar5;
      iVar2 = *(int *)(iVar7 + 0xa4);
      iVar8 = *(int *)(iVar7 + 0xa8);
      piVar5[8] = *(int *)(iVar7 + 0xa0);
      piVar5[9] = iVar2;
      piVar5[10] = iVar8;
      iVar7 = *piVar5;
      piVar4 = piVar5 + 0xc;
      piVar5[0xb] = 0;
      piVar3 = (int *)(iVar7 + 0xf0);
      do {
        iVar2 = piVar3[1];
        iVar8 = piVar3[2];
        iVar9 = piVar3[3];
        *piVar4 = *piVar3;
        piVar4[1] = iVar2;
        piVar4[2] = iVar8;
        piVar4[3] = iVar9;
        piVar3 = piVar3 + 4;
        piVar4 = piVar4 + 4;
      } while (piVar3 != (int *)(iVar7 + 0x110));
      *piVar4 = *piVar3;
      iVar7 = *piVar5;
      piVar5[0x15] = 0;
      iVar2 = *(int *)(iVar7 + 0xa4);
      iVar8 = *(int *)(iVar7 + 0xa8);
      piVar5[0x16] = *(int *)(iVar7 + 0xa0);
      piVar5[0x17] = iVar2;
      piVar5[0x18] = iVar8;
      iVar7 = *piVar5;
      iVar2 = *(int *)(iVar7 + 0xa4);
      iVar8 = *(int *)(iVar7 + 0xa8);
      piVar5[0x19] = *(int *)(iVar7 + 0xa0);
      piVar5[0x1a] = iVar2;
      piVar5[0x1b] = iVar8;
      *(undefined2 *)((int)piVar5 + 0x72) = 0;
      *(undefined2 *)(piVar5 + 0x1e) = 0;
      *(undefined2 *)((int)piVar5 + 0x7a) = 0;
      piVar5[0x1d] = piVar5[0x1d] & 0xffffff20U | 0x20 | (uint)bVar1 << 7;
      *(undefined *)((int)piVar5 + 0x75) = 0;
      *(undefined *)((int)piVar5 + 0x76) = 0;
      *(undefined2 *)(piVar5 + 0x1c) = 0xe;
      piVar5[0x1d] = piVar5[0x1d] & 0xf0ffffff;
      *(undefined *)(piVar5 + 0x1f) = 2;
      if (((GameSetup_gData == 1) || (GameSetup_gData == 5)) &&
         (((uRam00000260 & 0x200) != 0 ||
          ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))) {
        *(undefined *)(piVar5 + 0x1f) = 1;
      }
      piVar4 = piVar5 + 0x23;
      piVar3 = local_a0;
      *(undefined *)((int)piVar5 + 0x7d) = 0xff;
      *(undefined *)((int)piVar5 + 0x7e) = 0;
      piVar5[0x20] = 0;
      *(undefined *)(piVar5 + 0x21) = 0xff;
      piVar5[0x22] = 0x40;
      do {
        iVar7 = piVar3[1];
        iVar2 = piVar3[2];
        iVar8 = piVar3[3];
        *piVar4 = *piVar3;
        piVar4[1] = iVar7;
        piVar4[2] = iVar2;
        piVar4[3] = iVar8;
        piVar3 = piVar3 + 4;
        piVar4 = piVar4 + 4;
      } while (piVar3 != aiStack32);
      *piVar4 = *piVar3;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 0x44;
    } while (iVar6 <= (int)(uint)bVar1);
  }
  Camera_ResetRelPos__Fi(3);
  if (((*piRam00000288 < 0x1c) && ((DAT_80113224 & 0x100) != 0)) && (!bVar1)) {
    _DAT_80113664 = 1;
    iVar6 = *piRam00000288 * 0xc;
    DAT_8010f560 = *(undefined4 *)(&gDriverCam + iVar6);
    DAT_8010f564 = *(undefined4 *)(&DAT_8010f684 + iVar6);
    DAT_8010f568 = *(undefined4 *)(&DAT_8010f688 + iVar6);
  }
  uGp00000290 = 0xbe;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_Kill__Fv()
 // line 2001, offset 0x80083bec
	/* begin block 1 */
		// Start line: 2002
		// Start offset: 0x80083BEC
		// Variables:
	// 		int i; // $s1
	// 		int splitScreen; // $s2
	/* end block 1 */
	// End offset: 0x80083C58
	// End Line: 2010

void Camera_Kill__Fv(void)
{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  bVar1 = DAT_801131f8 == 1;
  if (true) {
    puVar2 = &Camera_gInfo;
    do {
      if ((int)*(char *)((int)puVar2 + 0x7d) != -1) {
        Anim_FreeHandle__Fi((int)*(char *)((int)puVar2 + 0x7d));
      }
      *(undefined *)((int)puVar2 + 0x7d) = 0xff;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x44;
    } while (iVar3 <= (int)(uint)bVar1);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_PitchAndRoll__Fi(int player /*$a0*/)
 // line 2013, offset 0x80083c74
	/* begin block 1 */
		// Start line: 2014
		// Start offset: 0x80083C74
		// Variables:
	// 		struct matrixtdef m1; // stack offset -144
	// 		struct matrixtdef m2; // stack offset -104
	// 		struct matrixtdef m3; // stack offset -64
	// 		struct Car_tObj *anchor; // $v0
	// 		int pitch; // $s1
	/* end block 1 */
	// End offset: 0x80083C74
	// End Line: 2014

void Camera_PitchAndRoll__Fi(int player)
{
  int iVar1;
  matrixtdef mStack144;
  matrixtdef mStack104;
  matrixtdef mStack64;
  
  iVar1 = *(int *)((&Camera_gInfo)[player * 0x44] + 0x848);
  fixedxformz(&mStack144,*(undefined4 *)((&Camera_gInfo)[player * 0x44] + 0x84c));
  fixedxformx(&mStack104,iVar1 << 1 | (uint)(&DAT_8010f320)[player * 0x44] >> 1 & 1);
  Math_fasttransmult__FP10matrixtdefN20(&mStack144,&mStack104,&mStack64);
  Math_fasttransmult__FP10matrixtdefN20
            (&mStack64,(matrixtdef *)(&DAT_8010f2dc + player * 0x44),
             (matrixtdef *)(&DAT_8010f2dc + player * 0x44));
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Camera_TooSteep__FiP12BWorldSm_Pos(int player /*$a0*/, struct BWorldSm_Pos *slicePos /*$a1*/)
 // line 2039, offset 0x80083d28
	/* begin block 1 */
		// Start line: 2040
		// Start offset: 0x80083D28
		// Variables:
	// 		struct BWorldSm_Pos *slicePos2; // $s0
	// 		struct coorddef normUnderCam; // stack offset -64
	// 		struct coorddef normUnderCar; // stack offset -48

		/* begin block 1.1 */
			// Start line: 2040
			// Start offset: 0x80083D28

			/* begin block 1.1.1 */
				// Start line: 2052
				// Start offset: 0x80083DE4
				// Variables:
			// 		struct coorddef camToCar; // stack offset -32
			/* end block 1.1.1 */
			// End offset: 0x80083E7C
			// End Line: 2058
		/* end block 1.1 */
		// End offset: 0x80083E7C
		// End Line: 2058
	/* end block 1 */
	// End offset: 0x80083E80
	// End Line: 2060

int Camera_TooSteep__FiP12BWorldSm_Pos(int player,BWorldSm_Pos *slicePos)
{
  coorddef *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  piVar10 = &Camera_gInfo + player * 0x44;
  iVar9 = *piVar10;
  pcVar1 = BWorldSm_UNormal__FP12BWorldSm_Pos(slicePos);
  iVar4 = pcVar1->x;
  iVar5 = pcVar1->y;
  iVar7 = pcVar1->z;
  pcVar1 = BWorldSm_UNormal__FP12BWorldSm_Pos((BWorldSm_Pos *)(iVar9 + 8));
  iVar6 = pcVar1->y;
  iVar8 = pcVar1->z;
  iVar9 = fixedmult(iVar4,pcVar1->x);
  iVar6 = fixedmult(iVar5,iVar6);
  iVar8 = fixedmult(iVar7,iVar8);
  iVar2 = 0;
  if (iVar9 + iVar6 + iVar8 < 0xb4fd) {
    iVar2 = (&DAT_8010f2b8)[player * 0x44];
    iVar9 = *(int *)(*piVar10 + 0xa4);
    iVar3 = (&DAT_8010f2bc)[player * 0x44];
    iVar6 = *(int *)(*piVar10 + 0xa8);
    iVar8 = fixedmult(iVar4);
    iVar9 = fixedmult(iVar5,iVar9 - iVar2);
    iVar6 = fixedmult(iVar7,iVar6 - iVar3);
    if ((iVar8 + iVar9 + iVar6 < 1) || (iVar2 = 1, *(short *)(*piVar10 + 0x17c) != 0)) {
      iVar2 = 0;
    }
  }
  return iVar2;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_CheckWallCollisions__FiP8coorddef(int player /*$s3*/, struct coorddef *pos /*$s4*/)
 // line 2073, offset 0x80083e98
	/* begin block 1 */
		// Start line: 2074
		// Start offset: 0x80083E98
		// Variables:
	// 		struct BWorldSm_Pos slicePos; // stack offset -280
	// 		struct coorddef edge; // stack offset -144
	// 		struct coorddef normal; // stack offset -128
	// 		struct coorddef step; // stack offset -112
	// 		struct coorddef temp; // stack offset -96
	// 		struct coorddef quadUnderCamera; // stack offset -80
	// 		struct coorddef triPnt; // stack offset -64
	// 		struct coorddef triVec; // stack offset -48
	// 		int camAngle; // $s1
	// 		int sin; // stack offset -32
	// 		int cos; // stack offset -28
	// 		int camDotNorm; // $s0
	// 		int edgeDotNorm; // $s1
	// 		int count; // $s0
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x800847EC
	// End Line: 2204

void Camera_CheckWallCollisions__FiP8coorddef(int player,coorddef *pos)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  BWorldSm_Pos *pBVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  BWorldSm_Pos local_118;
  coorddef local_90;
  int local_80;
  int local_7c;
  int local_78;
  int local_70;
  int local_6c;
  int local_68;
  coorddef local_60;
  int local_50;
  int local_4c;
  int local_48;
  coorddef local_40;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  pBVar6 = &local_118;
  piVar5 = &DAT_8010f338 + player * 0x44;
  do {
    iVar7 = piVar5[1];
    iVar8 = piVar5[2];
    iVar9 = piVar5[3];
    *(int *)pBVar6 = *piVar5;
    *(int *)&pBVar6->simRotFlag = iVar7;
    pBVar6->quadPts[0].x = iVar8;
    pBVar6->quadPts[0].y = iVar9;
    piVar5 = piVar5 + 4;
    pBVar6 = (BWorldSm_Pos *)&pBVar6->quadPts[0].z;
  } while (piVar5 != (int *)(&UNK_8010f3b8 + player * 0x110));
  *(int *)pBVar6 = *piVar5;
  iVar7 = 0;
  puVar10 = &feeler3;
  do {
    transform(puVar10,(&Camera_gInfo)[player * 0x44] + 0xf0,&local_30);
    local_40.x = pos->x + local_30;
    local_40.y = pos->y + local_2c;
    local_40.z = pos->z + local_28;
    BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi(&local_40,&local_118,3);
    if (local_118.simQuad == (Trk_NewSimQuad *)0x0) {
      piVar5 = (int *)((int)local_118.slice * 0x20);
      local_50 = *piVar5;
      local_4c = piVar5[1];
      local_48 = piVar5[2];
    }
    else {
      local_50 = local_118.quadPts[0].x;
      local_4c = local_118.quadPts[0].y;
      local_48 = local_118.quadPts[0].z;
      if (((local_118.simQuad)->surface & 0xf) == 0) break;
    }
    if (((local_118.offEdge != '\0') ||
        (iVar8 = Camera_TooSteep__FiP12BWorldSm_Pos(player,&local_118), iVar8 != 0)) ||
       ((local_118.simQuad != (Trk_NewSimQuad *)0x0 &&
        ((((local_118.simQuad)->surface & 0x80) != 0 &&
         (0x38000 < local_4c - *(int *)((&Camera_gInfo)[player * 0x44] + 0xa4))))))) break;
    iVar7 = iVar7 + 1;
    puVar10 = puVar10 + 0xc;
    if (2 < iVar7) break;
  } while( true );
  if (iVar7 == 3) {
    return;
  }
  piVar5 = &Camera_gInfo + player * 0x44;
  iVar8 = 0;
  iVar7 = *piVar5;
  local_90.x = *(int *)(iVar7 + 0xa0);
  local_90.y = *(int *)(iVar7 + 0xa4);
  local_90.z = *(int *)(iVar7 + 0xa8);
  local_70 = *(int *)(*piVar5 + 0xa0) - local_40.x >> 7;
  local_68 = *(int *)(*piVar5 + 0xa8) - local_40.z >> 7;
  local_6c = *(int *)(*piVar5 + 0xa4) - local_40.y >> 7;
  do {
    local_90.x = local_90.x - local_70;
    local_90.y = local_90.y - local_6c;
    local_90.z = local_90.z - local_68;
    BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi(&local_90,&local_118,3);
    if (local_118.simQuad == (Trk_NewSimQuad *)0x0) {
      piVar1 = (int *)((int)local_118.slice * 0x20);
      local_50 = *piVar1;
      local_4c = piVar1[1];
      local_48 = piVar1[2];
    }
    else {
      local_50 = local_118.quadPts[0].x;
      local_4c = local_118.quadPts[0].y;
      local_48 = local_118.quadPts[0].z;
      if (((local_118.simQuad)->surface & 0xf) == 0) break;
    }
    if (((local_118.offEdge != '\0') ||
        (iVar7 = Camera_TooSteep__FiP12BWorldSm_Pos(player,&local_118), iVar7 != 0)) ||
       (((local_118.simQuad != (Trk_NewSimQuad *)0x0 &&
         ((((local_118.simQuad)->surface & 0x80) != 0 &&
          (0x38000 < local_4c - *(int *)(*piVar5 + 0xa4))))) || (iVar8 = iVar8 + 1, 0x7f < iVar8))))
    break;
  } while( true );
  piVar5 = &Camera_gInfo + player * 0x44;
  iVar7 = 1;
  local_70 = *(int *)(*piVar5 + 0xa0) - local_90.x >> 1;
  local_6c = *(int *)(*piVar5 + 0xa4) - local_90.y >> 1;
  local_68 = *(int *)(*piVar5 + 0xa8) - local_90.z >> 1;
  do {
    intsincos(iVar7,&local_20,&local_1c);
    iVar8 = fixedmult(local_1c,local_70);
    local_60.x = fixedmult(local_20,local_68);
    local_60.x = iVar8 - local_60.x;
    local_60.y = local_6c;
    iVar8 = fixedmult(local_20,local_70);
    iVar9 = fixedmult(local_1c,local_68);
    local_60.x = local_90.x + local_60.x;
    local_60.y = local_90.y + local_60.y;
    local_60.z = local_90.z + iVar8 + iVar9;
    BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi(&local_60,&local_118,3);
    if (local_118.simQuad != (Trk_NewSimQuad *)0x0) {
      local_50 = local_118.quadPts[0].x;
      local_4c = local_118.quadPts[0].y;
      local_48 = local_118.quadPts[0].z;
      if (((local_118.simQuad)->surface & 0xf) != 0) goto LAB_80084400;
LAB_80084464:
      (&DAT_8010f304)[player * 0x44] = local_60.x;
      (&DAT_8010f308)[player * 0x44] = local_60.y;
      (&DAT_8010f30c)[player * 0x44] = local_60.z;
      break;
    }
    piVar1 = (int *)((int)local_118.slice * 0x20);
    local_50 = *piVar1;
    local_4c = piVar1[1];
    local_48 = piVar1[2];
LAB_80084400:
    if (((local_118.offEdge != '\0') ||
        (iVar8 = Camera_TooSteep__FiP12BWorldSm_Pos(player,&local_118), iVar8 != 0)) ||
       ((local_118.simQuad != (Trk_NewSimQuad *)0x0 &&
        ((((local_118.simQuad)->surface & 0x80) != 0 &&
         (0x38000 < local_4c - *(int *)(*piVar5 + 0xa4))))))) goto LAB_80084464;
    iVar7 = iVar7 + 4;
  } while (iVar7 < 0x400);
  iVar7 = -1;
  do {
    intsincos(iVar7,&local_20,&local_1c);
    iVar8 = fixedmult(local_1c,local_70);
    local_60.x = fixedmult(local_20,local_68);
    local_60.x = iVar8 - local_60.x;
    local_60.y = local_6c;
    iVar8 = fixedmult(local_20,local_70);
    iVar9 = fixedmult(local_1c,local_68);
    local_60.x = local_90.x + local_60.x;
    local_60.y = local_90.y + local_60.y;
    local_60.z = local_90.z + iVar8 + iVar9;
    BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi(&local_60,&local_118,3);
    if (local_118.simQuad != (Trk_NewSimQuad *)0x0) {
      local_50 = local_118.quadPts[0].x;
      local_4c = local_118.quadPts[0].y;
      local_48 = local_118.quadPts[0].z;
      if (((local_118.simQuad)->surface & 0xf) != 0) goto LAB_800845d0;
LAB_80084634:
      (&DAT_8010f310)[player * 0x44] = local_60.x;
      (&DAT_8010f314)[player * 0x44] = local_60.y;
      (&DAT_8010f318)[player * 0x44] = local_60.z;
      break;
    }
    piVar5 = (int *)((int)local_118.slice * 0x20);
    local_50 = *piVar5;
    local_4c = piVar5[1];
    local_48 = piVar5[2];
LAB_800845d0:
    if (((local_118.offEdge != '\0') ||
        (iVar8 = Camera_TooSteep__FiP12BWorldSm_Pos(player,&local_118), iVar8 != 0)) ||
       ((local_118.simQuad != (Trk_NewSimQuad *)0x0 &&
        ((((local_118.simQuad)->surface & 0x80) != 0 &&
         (0x38000 < local_4c - *(int *)((&Camera_gInfo)[player * 0x44] + 0xa4)))))))
    goto LAB_80084634;
    iVar7 = iVar7 + -4;
  } while (-0x400 < iVar7);
  local_60.x = (&DAT_8010f310)[player * 0x44] - (&DAT_8010f304)[player * 0x44];
  local_60.y = ((&DAT_8010f314)[player * 0x44] - (&DAT_8010f308)[player * 0x44]) + 0x8000;
  local_60.z = (&DAT_8010f318)[player * 0x44] - (&DAT_8010f30c)[player * 0x44];
  Math_NormalizeVector__FP8coorddef(&local_60);
  local_90.x = local_90.x - local_40.x;
  local_78 = local_60.x;
  local_80 = -local_60.z;
  local_7c = local_60.y;
  local_90.z = local_90.z - local_40.z;
  local_90.y = local_90.y - local_40.y;
  iVar7 = fixedmult();
  iVar8 = fixedmult(local_90.y,local_7c);
  iVar9 = fixedmult(local_90.z,local_78);
  iVar2 = fixedmult(local_30,local_80);
  iVar3 = fixedmult(local_2c,local_7c);
  iVar4 = fixedmult(local_28,local_78);
  iVar7 = iVar7 + iVar8 + iVar9 + iVar2 + iVar3 + iVar4 + 0x10000;
  if (0 < iVar7) {
    local_60.x = fixedmult(iVar7,local_80);
    local_60.y = fixedmult(iVar7,local_7c);
    iVar7 = fixedmult(iVar7,local_78);
    pos->x = pos->x + local_60.x;
    pos->y = pos->y + local_60.y;
    pos->z = pos->z + iVar7;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_SetAboveGround__FiP8coorddef(int player /*$a0*/, struct coorddef *pos /*$s1*/)
 // line 2219, offset 0x8008480c
	/* begin block 1 */
		// Start line: 2220
		// Start offset: 0x8008480C
		// Variables:
	// 		struct BWorldSm_Pos *slicePos; // $s0
	// 		struct coorddef quadnormal; // stack offset -32
	// 		int elevation; // $v0
	/* end block 1 */
	// End offset: 0x80084884
	// End Line: 2232

void Camera_SetAboveGround__FiP8coorddef(int player,coorddef *pos)
{
  coorddef *pcVar1;
  int iVar2;
  coorddef local_20;
  
  pcVar1 = BWorldSm_UNormal__FP12BWorldSm_Pos((BWorldSm_Pos *)(&DAT_8010f338 + player * 0x44));
  local_20.x = pcVar1->x;
  local_20.y = pcVar1->y;
  local_20.z = pcVar1->z;
  iVar2 = Newton_FindGroundElevationGeneral__FP8coorddefN20
                    (pos,&local_20,(coorddef *)(&DAT_8010f340 + player * 0x44));
  if (pos->y < iVar2 + 0x10000) {
    pos->y = iVar2 + 0x10000;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi(int player /*$a0*/, struct coorddef *point /*$a1*/, struct coorddef *pos /*$a2*/, struct matrixtdef *rot /*$a3*/, int hirez /*stack 16*/)
 // line 2239, offset 0x80084898
	/* begin block 1 */
		// Start line: 2240
		// Start offset: 0x80084898
		// Variables:
	// 		struct coorddef upvector; // stack offset -56
	// 		struct coorddef tgtPos; // stack offset -40
	// 		struct coorddef *rotx; // $s3
	// 		struct coorddef *roty; // $s4
	// 		struct coorddef *rotz; // $s2
	/* end block 1 */
	// End offset: 0x80084B14
	// End Line: 2278

void Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi( (int player,coorddef *point,coorddef *pos,matrixtdef *rot,int hirez)
{
  int iVar1;
  int iVar2;
  int iVar3;
  coorddef *v;
  coorddef *v_00;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  
  v_00 = (coorddef *)(rot->m + 3);
  local_38 = 0;
  local_34 = 0x10000;
  local_30 = 0;
  v = (coorddef *)(rot->m + 6);
  if (point == (coorddef *)0x0) {
    iVar1 = (&DAT_8010f2b0)[player * 0x44];
    local_28 = *(int *)(iVar1 + 0xa0);
    local_24 = *(int *)(iVar1 + 0xa4);
    local_20 = *(int *)(iVar1 + 0xa8);
  }
  else {
    local_28 = point->x;
    local_24 = point->y;
    local_20 = point->z;
  }
  local_28 = local_28 - pos->x;
  if (local_28 < 0) {
    local_28 = local_28 + 3;
  }
  v->x = local_28 >> 2;
  local_24 = local_24 - pos->y;
  if (local_24 < 0) {
    local_24 = local_24 + 3;
  }
  rot->m[7] = local_24 >> 2;
  local_20 = local_20 - pos->z;
  if (local_20 < 0) {
    local_20 = local_20 + 3;
  }
  rot->m[8] = local_20 >> 2;
  if (((uint)(&DAT_8010f320)[player * 0x44] >> 1 & 1) != 0) {
    iVar1 = rot->m[7] + 0x5333;
    if (2 < (uint)(ushort)(&DAT_8010f31c)[player * 0x88] - 2) {
      iVar1 = rot->m[7] + 0x6666;
    }
    rot->m[7] = iVar1;
  }
  if (Replay_ReplayMode == 2) {
    local_38 = (&DAT_8010f300)[player * 0x44];
  }
  Math_NormalizeVector__FP8coorddef(v);
  iVar1 = fixedmult(local_38,v->x);
  iVar2 = fixedmult(0x10000,rot->m[7]);
  iVar3 = fixedmult(0,rot->m[8]);
  if (iVar1 + iVar2 + iVar3 < 1) {
    iVar1 = fixedmult(local_38,v->x);
    iVar2 = fixedmult(0x10000,rot->m[7]);
    iVar3 = fixedmult(0,rot->m[8]);
    iVar1 = -(iVar1 + iVar2 + iVar3);
  }
  else {
    iVar2 = fixedmult(local_38,v->x);
    iVar3 = fixedmult(0x10000,rot->m[7]);
    iVar1 = fixedmult(0,rot->m[8]);
    iVar1 = iVar2 + iVar3 + iVar1;
  }
  if (0xfd70 < iVar1) {
    local_38 = v_00->x;
    local_34 = rot->m[4];
    local_30 = rot->m[5];
  }
  iVar1 = fixedmult(local_34,rot->m[8]);
  iVar2 = fixedmult(local_30,rot->m[7]);
  rot->m[0] = iVar1 - iVar2;
  iVar1 = fixedmult(local_30,v->x);
  iVar2 = fixedmult(local_38,rot->m[8]);
  rot->m[1] = iVar1 - iVar2;
  iVar1 = fixedmult(local_38,rot->m[7]);
  iVar2 = fixedmult(local_34,v->x);
  rot->m[2] = iVar1 - iVar2;
  Math_NormalizeVector__FP8coorddef((coorddef *)rot);
  iVar1 = fixedmult(rot->m[7],rot->m[2]);
  iVar2 = fixedmult(rot->m[8],rot->m[1]);
  v_00->x = iVar1 - iVar2;
  iVar1 = fixedmult(rot->m[8],rot->m[0]);
  iVar2 = fixedmult(v->x,rot->m[2]);
  rot->m[4] = iVar1 - iVar2;
  iVar1 = fixedmult(v->x,rot->m[1]);
  iVar2 = fixedmult(rot->m[7],rot->m[0]);
  rot->m[5] = iVar1 - iVar2;
  Math_NormalizeVector__FP8coorddef(v_00);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_OpponentLookBehind__FiP8coorddefi(int player /*$fp*/, struct coorddef *pos /*$s7*/, int reset /*$a2*/)
 // line 2290, offset 0x80084c34
	/* begin block 1 */
		// Start line: 2291
		// Start offset: 0x80084C34
		// Variables:
	// 		struct coorddef oppVector; // stack offset -72
	// 		struct coorddef tempVector; // stack offset -56
	// 		int oppAngle; // $s1
	// 		int i; // $s5
	// 		int dist; // $s2
	// 		int oppSlice; // $s6
	// 		static struct coorddef lastOppVector[2]; // offset 0x0
	/* end block 1 */
	// End offset: 0x80084FD8
	// End Line: 2353

void Camera_OpponentLookBehind__FiP8coorddefi(int player,coorddef *pos,int reset)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  coorddef local_48;
  coorddef local_38;
  
  iVar10 = 0xb;
  if (reset != 0) {
    iVar10 = player * 0xc;
    iVar1 = (&_Cars_gHumanRaceCarList)[player];
    uVar6 = *(undefined4 *)(iVar1 + 0x10c);
    uVar7 = *(undefined4 *)(iVar1 + 0x110);
    *(undefined4 *)(&lastOppVector_106 + iVar10) = *(undefined4 *)(iVar1 + 0x108);
    *(undefined4 *)(&DAT_8013dfd4 + iVar10) = uVar6;
    *(undefined4 *)(&DAT_8013dfd8 + iVar10) = uVar7;
    return;
  }
  piVar4 = &_Cars_gHumanRaceCarList + player;
  iVar1 = *piVar4;
  local_48.x = *(int *)(iVar1 + 0x108);
  local_48.y = *(int *)(iVar1 + 0x10c);
  local_48.z = *(int *)(iVar1 + 0x110);
  iVar1 = 0;
  if (0 < Cars_gNumCars) {
    piVar9 = &_Cars_gList;
    do {
      iVar5 = *piVar9;
      if (iVar5 != *piVar4) {
        iVar8 = (int)*(short *)(iVar5 + 8) - (int)*(short *)(*piVar4 + 8);
        if (iVar8 < 0) {
          iVar8 = -iVar8;
        }
        if (0 < iVar8) {
          iVar8 = -iVar8;
        }
        if (iVar8 < 0xb) {
          local_38.x = pos->x - *(int *)(iVar5 + 0xa0);
          local_38.y = pos->y - *(int *)(*piVar9 + 0xa4);
          local_38.z = pos->z - *(int *)(*piVar9 + 0xa8);
          Math_NormalizeVector__FP8coorddef(&local_38);
          iVar5 = fixedmult(*(undefined4 *)(*piVar4 + 0x108),local_38.x);
          iVar2 = fixedmult(*(undefined4 *)(*piVar4 + 0x10c),local_38.y);
          iVar3 = fixedmult(*(undefined4 *)(*piVar4 + 0x110),local_38.z);
          iVar3 = iVar5 + iVar2 + iVar3;
          iVar5 = intarccos(iVar3);
          if (iVar5 < 1) {
            iVar5 = intarccos(iVar3);
            iVar5 = -iVar5;
          }
          else {
            iVar5 = intarccos(iVar3);
          }
          if ((iVar5 < 0x80) && (iVar8 < iVar10)) {
            local_48.x = local_38.x;
            local_48.y = local_38.y;
            local_48.z = local_38.z;
            iVar10 = iVar8;
          }
        }
      }
      iVar1 = iVar1 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar1 < Cars_gNumCars);
  }
  iVar10 = player * 0xc;
  piVar4 = (int *)(&lastOppVector_106 + iVar10);
  iVar1 = fixedmult(local_48.x - *piVar4,0x4ccc);
  *piVar4 = *piVar4 + iVar1;
  iVar1 = fixedmult(local_48.y - *(int *)(&DAT_8013dfd4 + iVar10),0x4ccc);
  *(int *)(&DAT_8013dfd4 + iVar10) = *(int *)(&DAT_8013dfd4 + iVar10) + iVar1;
  iVar1 = fixedmult(local_48.z - *(int *)(&DAT_8013dfd8 + iVar10),0x4ccc);
  *(int *)(&DAT_8013dfd8 + iVar10) = *(int *)(&DAT_8013dfd8 + iVar10) + iVar1;
  local_48.x = pos->x - *piVar4;
  local_48.y = pos->y - *(int *)(&DAT_8013dfd4 + iVar10);
  local_48.z = pos->z - *(int *)(&DAT_8013dfd8 + iVar10);
  switch((int)(((uint)(ushort)(&DAT_8010f31c)[player * 0x88] - 2) * 0x10000) >> 0x10) {
  case 0:
  case 1:
  case 2:
    iVar10 = -0x14ccc;
    break;
  case 5:
    local_48.y = local_48.y + -0x6666;
  case 3:
  case 4:
    iVar10 = -0x19999;
    break;
  default:
    goto switchD_80084f6c_caseD_6;
  }
  local_48.y = local_48.y + iVar10;
switchD_80084f6c_caseD_6:
  Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi
            (player,&local_48,pos,(matrixtdef *)(&DAT_8010f2dc + player * 0x44),1);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_GetViewInfo__FiP17DRender_tCalcViewi(int cviewP /*$s1*/, struct DRender_tCalcView *cview /*$s3*/, int viewID /*$a2*/)
 // line 2356, offset 0x80085008
	/* begin block 1 */
		// Start line: 2357
		// Start offset: 0x80085008

		/* begin block 1.1 */
			// Start line: 2401
			// Start offset: 0x8008520C

			/* begin block 1.1.1 */
				// Start line: 2406
				// Start offset: 0x8008522C
				// Variables:
			// 		int t1; // $v0
			// 		int t2; // $v0
			// 		int t3; // $v1
			/* end block 1.1.1 */
			// End offset: 0x80085250
			// End Line: 2426
		/* end block 1.1 */
		// End offset: 0x80085250
		// End Line: 2426

		/* begin block 1.2 */
			// Start line: 2430
			// Start offset: 0x80085250
			// Variables:
		// 		int scale; // $s1
		// 		int t1; // $s2
		// 		int t2; // $s0
		/* end block 1.2 */
		// End offset: 0x80085294
		// End Line: 2462

		/* begin block 1.3 */
			// Start line: 2462
			// Start offset: 0x80085294
			// Variables:
		// 		struct coorddef tmp; // stack offset -40
		/* end block 1.3 */
		// End offset: 0x80085294
		// End Line: 2462
	/* end block 1 */
	// End offset: 0x80085294
	// End Line: 2462

void Camera_GetViewInfo__FiP17DRender_tCalcViewi(int cviewP,DRender_tCalcView *cview,int viewID)
{
  matrixtdef *pmVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  matrixtdef *pmVar6;
  int local_28;
  int local_24;
  int local_20;
  
  if (((uint)(&DAT_8010f320)[cviewP * 0x44] >> 2 & 1) != 0) {
    Camera_PitchAndRoll__Fi(cviewP);
  }
  iVar3 = (&DAT_8010f2b8)[cviewP * 0x44];
  iVar4 = (&DAT_8010f2bc)[cviewP * 0x44];
  (cview->translation).x = (&DAT_8010f2b4)[cviewP * 0x44];
  (cview->translation).y = iVar3;
  (cview->translation).z = iVar4;
  if (((uint)(&DAT_8010f320)[cviewP * 0x44] >> 4 & 1) != 0) {
    Camera_CheckWallCollisions__FiP8coorddef(cviewP,(coorddef *)cview);
  }
  BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
            ((coorddef *)cview,(BWorldSm_Pos *)(&DAT_8010f338 + cviewP * 0x44),1);
  if (((&DAT_8010f392)[cviewP * 0x110] == '\0') && (1 < (short)(&DAT_8010f31c)[cviewP * 0x88])) {
    Camera_SetAboveGround__FiP8coorddef(cviewP,(coorddef *)cview);
  }
  if (((uint)(&DAT_8010f320)[cviewP * 0x44] >> 3 & 1) != 0) {
    Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi
              (cviewP,(coorddef *)0x0,(coorddef *)cview,
               (matrixtdef *)(&DAT_8010f2dc + cviewP * 0x44),1);
  }
  if ((&DAT_8010f31c)[cviewP * 0x88] == 0x10) {
    Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi
              (cviewP,(coorddef *)(&gCop1Target + cviewP * 0xc),(coorddef *)cview,
               (matrixtdef *)(&DAT_8010f2dc + cviewP * 0x44),1);
  }
  if (((uint)(&DAT_8010f320)[cviewP * 0x44] >> 5 & 1) == 0) {
    Camera_OpponentLookBehind__FiP8coorddefi
              (cviewP,(coorddef *)cview,(uint)((&Input_gLookBehind)[cviewP] == 0));
  }
  pmVar1 = &cview->mrotation;
  piVar2 = &DAT_8010f2dc + cviewP * 0x44;
  do {
    iVar3 = piVar2[1];
    iVar4 = piVar2[2];
    iVar5 = piVar2[3];
    pmVar1->m[0] = *piVar2;
    pmVar1->m[1] = iVar3;
    pmVar1->m[2] = iVar4;
    pmVar1->m[3] = iVar5;
    piVar2 = piVar2 + 4;
    pmVar1 = (matrixtdef *)(pmVar1->m + 4);
  } while (piVar2 != &DAT_8010f2fc + cviewP * 0x44);
  pmVar1->m[0] = *piVar2;
  if (false) {
    iVar4 = (cview->mrotation).m[2];
    (cview->mrotation).m[0] = -(cview->mrotation).m[0];
    iVar3 = (cview->mrotation).m[1];
    (cview->mrotation).m[2] = -iVar4;
    (cview->mrotation).m[1] = -iVar3;
  }
  pmVar6 = &cview->mrotationInv;
  transpose(&cview->mrotation,pmVar6);
  pmVar1 = &cview->mrotationInvRaw;
  do {
    iVar3 = pmVar6->m[1];
    iVar4 = pmVar6->m[2];
    iVar5 = pmVar6->m[3];
    pmVar1->m[0] = pmVar6->m[0];
    pmVar1->m[1] = iVar3;
    pmVar1->m[2] = iVar4;
    pmVar1->m[3] = iVar5;
    pmVar6 = (matrixtdef *)(pmVar6->m + 4);
    pmVar1 = (matrixtdef *)(pmVar1->m + 4);
  } while (pmVar6 != (matrixtdef *)((cview->mrotationInv).m + 8));
  pmVar1->m[0] = pmVar6->m[0];
  iVar3 = fixedmult((cview->mrotation).m[3],0xdc00);
  iVar4 = fixedmult((cview->mrotation).m[4],0xdc00);
  iVar5 = fixedmult((cview->mrotation).m[5],0xdc00);
  (cview->mrotation).m[3] = iVar3;
  (cview->mrotation).m[4] = iVar4;
  (cview->mrotation).m[5] = iVar5;
  transpose(&cview->mrotation,&cview->mrotationInv);
  local_28 = -(cview->translation).x;
  local_24 = -(cview->translation).y;
  local_20 = -(cview->translation).z;
  transform(&local_28,&cview->mrotationInv,&cview->translationInv);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_GetAudioViewInfo__FiP17DRender_tCalcViewPP8coorddef(int cviewP /*$s0*/, struct DRender_tCalcView *cview /*$a3*/, struct coorddef **cvel /*$s1*/)
 // line 2482, offset 0x8008533c
	/* begin block 1 */
		// Start line: 2483
		// Start offset: 0x8008533C
	/* end block 1 */
	// End offset: 0x80085554
	// End Line: 2543

void Camera_GetAudioViewInfo__FiP17DRender_tCalcViewPP8coorddef( (int cviewP,DRender_tCalcView *cview,coorddef **cvel)
{
  int *piVar1;
  matrixtdef *pmVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((&Input_gLookBehind)[cviewP] == 0) {
    iVar3 = (&DAT_8010f2b8)[cviewP * 0x44];
    iVar4 = (&DAT_8010f2bc)[cviewP * 0x44];
    (cview->translation).x = (&DAT_8010f2b4)[cviewP * 0x44];
    (cview->translation).y = iVar3;
    (cview->translation).z = iVar4;
    pmVar2 = &cview->mrotation;
    piVar1 = &DAT_8010f2dc + cviewP * 0x44;
    do {
      iVar3 = piVar1[1];
      iVar4 = piVar1[2];
      iVar5 = piVar1[3];
      pmVar2->m[0] = *piVar1;
      pmVar2->m[1] = iVar3;
      pmVar2->m[2] = iVar4;
      pmVar2->m[3] = iVar5;
      piVar1 = piVar1 + 4;
      pmVar2 = (matrixtdef *)(pmVar2->m + 4);
    } while (piVar1 != &DAT_8010f2fc + cviewP * 0x44);
    pmVar2->m[0] = *piVar1;
  }
  else {
    piVar1 = &DAT_8010f2dc + cviewP * 0x44;
    if (((uint)(&DAT_8010f320)[cviewP * 0x44] >> 5 & 1) == 0) {
      if (((uint)(&DAT_8010f320)[cviewP * 0x44] >> 3 & 1) == 0) {
        iVar3 = (&DAT_8010f2d0)[cviewP * 0x44];
        iVar4 = (&DAT_8010f2d4)[cviewP * 0x44];
        (cview->translation).x = (&DAT_8010f2cc)[cviewP * 0x44];
        (cview->translation).y = iVar3;
        (cview->translation).z = iVar4;
        Camera_LookBack__FP10matrixtdefT0
                  ((matrixtdef *)(&DAT_8010f2dc + cviewP * 0x44),&cview->mrotation);
      }
      else {
        iVar3 = (&DAT_8010f2d0)[cviewP * 0x44];
        iVar4 = (&DAT_8010f2d4)[cviewP * 0x44];
        (cview->translation).x = (&DAT_8010f2cc)[cviewP * 0x44];
        (cview->translation).y = iVar3;
        (cview->translation).z = iVar4;
        Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi
                  (cviewP,(coorddef *)0x0,(coorddef *)cview,&cview->mrotation,0);
      }
    }
    else {
      iVar3 = (&DAT_8010f2b8)[cviewP * 0x44];
      iVar4 = (&DAT_8010f2bc)[cviewP * 0x44];
      (cview->translation).x = (&DAT_8010f2b4)[cviewP * 0x44];
      (cview->translation).y = iVar3;
      (cview->translation).z = iVar4;
      pmVar2 = &cview->mrotation;
      do {
        iVar3 = piVar1[1];
        iVar4 = piVar1[2];
        iVar5 = piVar1[3];
        pmVar2->m[0] = *piVar1;
        pmVar2->m[1] = iVar3;
        pmVar2->m[2] = iVar4;
        pmVar2->m[3] = iVar5;
        piVar1 = piVar1 + 4;
        pmVar2 = (matrixtdef *)(pmVar2->m + 4);
      } while (piVar1 != &DAT_8010f2fc + cviewP * 0x44);
      pmVar2->m[0] = *piVar1;
    }
  }
  if (true) {
    switch((&DAT_8010f31c)[cviewP * 0x88]) {
    case 0xc:
    case 0xe:
      *cvel = (coorddef *)0x0;
      return;
    }
  }
  *cvel = (coorddef *)((&Camera_gInfo)[cviewP * 0x44] + 0xac);
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Camera_GetMode__Fi(int cviewP /*$a0*/)
 // line 2547, offset 0x80085568
	/* begin block 1 */
		// Start line: 2548
		// Start offset: 0x80085568
	/* end block 1 */
	// End offset: 0x80085600
	// End Line: 2563

int Camera_GetMode__Fi(int cviewP)
{
  if ((((*(uint *)((&_Cars_gHumanRaceCarList)[cviewP] + 0x260) & 1) == 0) ||
      (*(int *)((&_Cars_gHumanRaceCarList)[cviewP] + 0x390) != 2)) &&
     ((*(int *)((&_Cars_gHumanRaceCarList)[cviewP] + 0x278) == 0 ||
      (*(int *)((&_Cars_gHumanRaceCarList)[cviewP] + 0x390) == 3)))) {
    return (int)(short)(&DAT_8010f31c)[cviewP * 0x88];
  }
  return 0x14;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_SetMode__Fii(int cviewP /*$s1*/, int mode /*$s2*/)
 // line 2566, offset 0x80085608
	/* begin block 1 */
		// Start line: 2567
		// Start offset: 0x80085608

		/* begin block 1.1 */
			// Start line: 2607
			// Start offset: 0x8008571C
			// Variables:
		// 		struct camera_flags *flagMode; // $a1
		/* end block 1.1 */
		// End offset: 0x80085804
		// End Line: 2618
	/* end block 1 */
	// End offset: 0x80085804
	// End Line: 2618

void Camera_SetMode__Fii(int cviewP,int mode)
{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = cviewP * 0x110;
  InBetween = 0;
  if ((*(byte *)(&DAT_8010f320 + cviewP * 0x44) & 1) == 0) {
    if ((uint)(ushort)(&DAT_8010f31c)[cviewP * 0x88] - 0xb < 2) {
      uGp00000290 = 0xbe;
      TrsProj_SetProjection__Fiiii(0,0,0x140,0xf0);
    }
    if (5 < (uint)(ushort)(&DAT_8010f31c)[cviewP * 0x88] - 2) {
      Camera_ResetRelPos__Fi(cviewP + 1);
    }
    if (-1 < (int)(char)(&DAT_8010f329)[iVar9]) {
      Anim_FreeHandle__Fi((int)(char)(&DAT_8010f329)[iVar9]);
      (&DAT_8010f329)[iVar9] = 0xff;
    }
    (&DAT_8010f31c)[cviewP * 0x88] = (short)mode;
    if (0x13 < (short)mode) {
      (&DAT_8010f31c)[cviewP * 0x88] = (&DAT_80113664)[cviewP * 0x5a];
    }
    if ((&DAT_8010f31c)[cviewP * 0x88] == 0xb) {
      Camera_SetSplineCam__Fi(cviewP);
    }
    *(undefined *)((int)&DAT_8010f320 + iVar9 + 1) = 0x32;
    iVar9 = (int)(short)(&DAT_8010f31c)[cviewP * 0x88] * 0x10;
    uVar2 = (&DAT_8010f320)[cviewP * 0x44];
    uVar3 = (*(uint *)(&DAT_8010f55c + iVar9) & 1) << 1;
    (&DAT_8010f320)[cviewP * 0x44] = uVar2 & 0xfffffffd | uVar3;
    uVar4 = (*(uint *)(&DAT_8010f55c + iVar9) & 2) << 1;
    (&DAT_8010f320)[cviewP * 0x44] = uVar2 & 0xfffffff9 | uVar3 | uVar4;
    uVar5 = (*(uint *)(&DAT_8010f55c + iVar9) & 4) << 1;
    (&DAT_8010f320)[cviewP * 0x44] = uVar2 & 0xfffffff1 | uVar3 | uVar4 | uVar5;
    uVar6 = (*(uint *)(&DAT_8010f55c + iVar9) & 8) << 1;
    (&DAT_8010f320)[cviewP * 0x44] = uVar2 & 0xffffffe1 | uVar3 | uVar4 | uVar5 | uVar6;
    uVar7 = (*(uint *)(&DAT_8010f55c + iVar9) & 0x10) << 1;
    (&DAT_8010f320)[cviewP * 0x44] = uVar2 & 0xffffffc1 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
    uVar8 = (*(uint *)(&DAT_8010f55c + iVar9) & 0x20) << 1;
    sVar1 = (&DAT_8010f31c)[cviewP * 0x88];
    (&DAT_8010f320)[cviewP * 0x44] =
         uVar2 & 0xffffff81 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8;
    (&DAT_8010f320)[cviewP * 0x44] =
         uVar2 & 0xf7ffff81 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 |
         (uint)(sVar1 < 2) << 0x1b;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_NextMode__Fi(int cviewP /*$s1*/)
 // line 2622, offset 0x8008581c
	/* begin block 1 */
		// Start line: 2623
		// Start offset: 0x8008581C

		/* begin block 1.1 */
			// Start line: 2675
			// Start offset: 0x80085AD4
			// Variables:
		// 		struct camera_flags *flagMode; // $a1
		/* end block 1.1 */
		// End offset: 0x80085BBC
		// End Line: 2686
	/* end block 1 */
	// End offset: 0x80085BBC
	// End Line: 2686

void Camera_NextMode__Fi(int cviewP)
{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (((&DAT_8010f31c)[cviewP * 0x88] != 0xe) &&
     ((*(byte *)(&DAT_8010f320 + cviewP * 0x44) & 1) == 0)) {
    if ((uint)(ushort)(&DAT_8010f31c)[cviewP * 0x88] - 0xb < 2) {
      uGp00000290 = 0xbe;
      TrsProj_SetProjection__Fiiii(0,0,0x140,0xf0);
    }
    if (5 < (uint)(ushort)(&DAT_8010f31c)[cviewP * 0x88] - 2) {
      Camera_ResetRelPos__Fi(cviewP + 1);
    }
    if (-1 < (int)(char)(&DAT_8010f329)[cviewP * 0x110]) {
      Anim_FreeHandle__Fi((int)(char)(&DAT_8010f329)[cviewP * 0x110]);
      (&DAT_8010f329)[cviewP * 0x110] = 0xff;
    }
    if (*(byte *)(&DAT_8010f320 + cviewP * 0x44) >> 7 == 0) {
      if (((GameSetup_gData == 1) || (GameSetup_gData == 5)) &&
         (((uRam00000260 & 0x200) != 0 ||
          ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))) {
        uVar2 = (&DAT_8010f31e)[cviewP * 0x88];
        (&DAT_8010f31e)[cviewP * 0x88] = (short)((uint)uVar2 + 1);
        (&DAT_8010f31c)[cviewP * 0x88] =
             (&DAT_80113664)[(cviewP * 0x2d + ((uint)uVar2 + 1 & 3)) * 2];
      }
      else {
        iVar4 = (uint)(ushort)((&DAT_8010f31e)[cviewP * 0x88] + 1) << 0x10;
        iVar11 = iVar4 >> 0x10;
        (&DAT_8010f31e)[cviewP * 0x88] = (&DAT_8010f31e)[cviewP * 0x88] + 1;
        (&DAT_8010f31c)[cviewP * 0x88] =
             *(undefined2 *)
              ((int)&DAT_80113664 +
              ((iVar11 + ((iVar11 / 3 + (iVar11 >> 0x1f)) - (iVar4 >> 0x1f)) * -3) * 0x10000 >> 0xe)
              + cviewP * 0xb4);
      }
    }
    else {
      iVar4 = (uint)(ushort)((&DAT_8010f31e)[cviewP * 0x88] + 1) << 0x10;
      iVar11 = iVar4 >> 0x10;
      (&DAT_8010f31e)[cviewP * 0x88] = (&DAT_8010f31e)[cviewP * 0x88] + 1;
      (&DAT_8010f31c)[cviewP * 0x88] =
           *(undefined2 *)
            (&gSplitCameras +
            ((iVar11 + ((iVar11 / 3 + (iVar11 >> 0x1f)) - (iVar4 >> 0x1f)) * -3) * 0x10000 >> 0xe));
    }
    if (0x13 < (short)(&DAT_8010f31c)[cviewP * 0x88]) {
      (&DAT_8010f31c)[cviewP * 0x88] = (&DAT_80113664)[cviewP * 0x5a];
    }
    if ((&DAT_8010f31c)[cviewP * 0x88] == 0xb) {
      Camera_SetSplineCam__Fi(cviewP);
    }
    *(undefined *)((int)&DAT_8010f320 + cviewP * 0x110 + 1) = 0x32;
    iVar4 = (int)(short)(&DAT_8010f31c)[cviewP * 0x88] * 0x10;
    uVar3 = (&DAT_8010f320)[cviewP * 0x44];
    uVar5 = (*(uint *)(&DAT_8010f55c + iVar4) & 1) << 1;
    (&DAT_8010f320)[cviewP * 0x44] = uVar3 & 0xfffffffd | uVar5;
    uVar6 = (*(uint *)(&DAT_8010f55c + iVar4) & 2) << 1;
    (&DAT_8010f320)[cviewP * 0x44] = uVar3 & 0xfffffff9 | uVar5 | uVar6;
    uVar7 = (*(uint *)(&DAT_8010f55c + iVar4) & 4) << 1;
    (&DAT_8010f320)[cviewP * 0x44] = uVar3 & 0xfffffff1 | uVar5 | uVar6 | uVar7;
    uVar8 = (*(uint *)(&DAT_8010f55c + iVar4) & 8) << 1;
    (&DAT_8010f320)[cviewP * 0x44] = uVar3 & 0xffffffe1 | uVar5 | uVar6 | uVar7 | uVar8;
    uVar9 = (*(uint *)(&DAT_8010f55c + iVar4) & 0x10) << 1;
    (&DAT_8010f320)[cviewP * 0x44] = uVar3 & 0xffffffc1 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9;
    uVar10 = (*(uint *)(&DAT_8010f55c + iVar4) & 0x20) << 1;
    sVar1 = (&DAT_8010f31c)[cviewP * 0x88];
    (&DAT_8010f320)[cviewP * 0x44] =
         uVar3 & 0xffffff81 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10;
    (&DAT_8010f320)[cviewP * 0x44] =
         uVar3 & 0xf7ffff81 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 |
         (uint)(sVar1 < 2) << 0x1b;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_ReplayUpdate__FiP15Camera_tCamSlot(int cviewP /*$a0*/, struct Camera_tCamSlot *ptr /*$s1*/)
 // line 2690, offset 0x80085bd0
	/* begin block 1 */
		// Start line: 2691
		// Start offset: 0x80085BD0
	/* end block 1 */
	// End offset: 0x80085CB8
	// End Line: 2704

void Camera_ReplayUpdate__FiP15Camera_tCamSlot(int cviewP,Camera_tCamSlot *ptr)
{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((*(byte *)(&DAT_8010f320 + cviewP * 0x44) & 1) == 0) {
    Camera_SetMode__Fii(cviewP,(uint)(byte)ptr->mode);
    uVar2 = (&DAT_8010f320)[cviewP * 0x44];
    uVar1 = *(uint *)ptr >> 5 & 8;
    (&DAT_8010f320)[cviewP * 0x44] = uVar2 & 0xfffffff7 | uVar1;
    (&DAT_8010f320)[cviewP * 0x44] = uVar2 & 0xf9fffff7 | uVar1 | (*(uint *)ptr >> 9 & 3) << 0x19;
    (&DAT_8010f32a)[cviewP * 0x110] = (byte)(*(uint *)ptr >> 0xb) & 7;
    iGp00000290 = (int)ptr->fov;
    iVar3 = (ptr->pos).y;
    iVar4 = (ptr->pos).z;
    (&DAT_8010f2b4)[cviewP * 0x44] = (ptr->pos).x;
    (&DAT_8010f2b8)[cviewP * 0x44] = iVar3;
    (&DAT_8010f2bc)[cviewP * 0x44] = iVar4;
    (&DAT_8010f2d8)[cviewP * 0x44] = ptr->height;
    EulerToMat__FP10matrixtdefiii
              ((matrixtdef *)(&DAT_8010f2dc + cviewP * 0x44),(int)(ptr->euler).x,(int)(ptr->euler).y
               ,(int)(ptr->euler).z);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Camera_ResetRelPos__Fi(int bitMask /*$a1*/)
 // line 2713, offset 0x80085cd4
	/* begin block 1 */
		// Start line: 2714
		// Start offset: 0x80085CD4
	/* end block 1 */
	// End offset: 0x80085D7C
	// End Line: 2725

void Camera_ResetRelPos__Fi(int bitMask)
{
  if ((bitMask & 1U) != 0) {
    DAT_8010f2c0 = *(int *)(Camera_gInfo + 0x108) * -4;
    DAT_8010f2c4 = *(int *)(Camera_gInfo + 0x10c) * -4;
    DAT_8010f2c8 = *(int *)(Camera_gInfo + 0x110) * -4;
  }
  if ((bitMask & 2U) != 0) {
    DAT_8010f3d0 = *(int *)(DAT_8010f3bc + 0x108) * -4;
    DAT_8010f3d4 = *(int *)(DAT_8010f3bc + 0x10c) * -4;
    DAT_8010f3d8 = *(int *)(DAT_8010f3bc + 0x110) * -4;
  }
  return;


}





