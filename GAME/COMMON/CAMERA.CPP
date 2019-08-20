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
  
  fixedxformx((undefined4 *)&mStack184,ax);
  fixedxformy((int *)&mStack144,ay);
  fixedxformz((int *)&mStack104,az);
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
  void *pvVar2;
  coorddef *pcVar3;
  int iVar4;
  int iVar5;
  coorddef local_38;
  coorddef local_28;
  
  bVar1 = false;
  pvVar2 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(&(&Camera_gInfo)[player].slicePos);
  if ((pvVar2 != (void *)0x0) ||
     (pvVar2 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos
                         (&((&Camera_gInfo)[player].anchor)->simRoadInfo), pvVar2 != (void *)0x0)) {
    bVar1 = true;
  }
  if (bVar1) {
    pcVar3 = BWorldSm_UNormal__FP12BWorldSm_Pos(&(&Camera_gInfo)[player].slicePos);
    local_38.x = pcVar3->x;
    local_38.y = pcVar3->y;
    local_38.z = pcVar3->z;
    local_28.x = (&Camera_gInfo)[player].position.x;
    local_28.y = (&Camera_gInfo)[player].position.y;
    local_28.z = (&Camera_gInfo)[player].position.z;
    iVar4 = Newton_FindGroundElevationGeneral__FP8coorddefN20
                      (&local_28,&local_38,(&Camera_gInfo)[player].slicePos.quadPts);
    iVar5 = GameSetup_gData.track;
    if (0xf < GameSetup_gData.track) {
      iVar5 = GameSetup_gData.track + -7;
    }
    iVar4 = ((&gTunnelCamHeight)[iVar5] - (((&Camera_gInfo)[player].anchor)->position).y) + iVar4;
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
  uint uVar2;
  BO_tNewtonObj *pBVar3;
  int local_40;
  undefined *local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  local_40 = DAT_800558a4;
  local_3c = PTR_DAT_800558a8;
  local_38 = DAT_800558ac;
  if (((simVar.quickPauseSim == 0) || (Replay_ReplayInterface.changeCamera != 0)) &&
     (InBetween == 0)) {
    if (((&Camera_gInfo)[player].field_0x77 & 1) != 0) {
      local_38 = -DAT_800558ac;
    }
    transform(&local_40,(int *)&((&Camera_gInfo)[player].anchor)->roadMatrix,&local_30);
    Camera_TunnelLimit__FiPi(player,&local_2c);
    local_20 = (&Camera_gInfo)[player].relpos.x;
    local_1c = (&Camera_gInfo)[player].relpos.y;
    local_18 = (&Camera_gInfo)[player].relpos.z;
    uVar2 = fixedmult(local_30 - local_20,0x51e);
    (&Camera_gInfo)[player].relpos.x = local_20 + uVar2;
    uVar2 = fixedmult(local_2c - local_1c,0x51e);
    (&Camera_gInfo)[player].relpos.y = local_1c + uVar2;
    uVar2 = fixedmult(local_28 - local_18,0x51e);
    pBVar3 = (&Camera_gInfo)[player].anchor;
    (&Camera_gInfo)[player].relpos.z = local_18 + uVar2;
    (&Camera_gInfo)[player].position.x = (pBVar3->position).x + (&Camera_gInfo)[player].relpos.x;
    (&Camera_gInfo)[player].position.y = (pBVar3->position).y + (&Camera_gInfo)[player].relpos.y;
    cVar1 = (&Camera_gInfo)[player].tumbling;
    (&Camera_gInfo)[player].position.z = (pBVar3->position).z + (&Camera_gInfo)[player].relpos.z;
    if (cVar1 == '\0') {
      (&Camera_gInfo)[player].intransition = '2';
    }
    *(uint *)&(&Camera_gInfo)[player].field_0x74 =
         *(uint *)&(&Camera_gInfo)[player].field_0x74 & 0xfffffffb | 0x7a;
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
  BO_tNewtonObj *pBVar2;
  camera_info *pcVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  
  pcVar3 = &Camera_gInfo + player;
  iVar1 = (int)(&Camera_gInfo)[player].mode;
  local_38 = (&Camera_gFlags)[iVar1].arm.x;
  local_34 = (&Camera_gFlags)[iVar1].arm.y;
  local_30 = (&Camera_gFlags)[iVar1].arm.z;
  transform(&local_38,(int *)&pcVar3->anchor->orientMat,&local_28);
  Camera_TunnelLimit__FiPi(player,&local_24);
  pBVar2 = pcVar3->anchor;
  (&Camera_gInfo)[player].position.x = (pcVar3->anchor->position).x + local_28;
  (&Camera_gInfo)[player].position.y = (pBVar2->position).y + local_24;
  (&Camera_gInfo)[player].position.z = (pBVar2->position).z + local_20;
  Camera_LookBack__FP10matrixtdefT0(&pBVar2->orientMat,&(&Camera_gInfo)[player].rotation);
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
  matrixtdef *pmVar3;
  BO_tNewtonObj *pBVar4;
  matrixtdef *pmVar5;
  int iVar6;
  int iVar7;
  camera_info *pcVar8;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  
  bVar1 = false;
  pcVar8 = &Camera_gInfo + player;
  iVar2 = (int)(&Camera_gInfo)[player].mode;
  local_38 = (&Camera_gFlags)[iVar2].arm.x;
  local_34 = (&Camera_gFlags)[iVar2].arm.y;
  local_30 = (&Camera_gFlags)[iVar2].arm.z;
  if ((*(uint *)&(&Camera_gInfo)[player].field_0x74 >> 5 & 1) == 0) {
    bVar1 = (&Input_gLookBehind)[player] != 0;
  }
  if (bVar1) {
    transform(&local_38,(int *)&pcVar8->anchor->orientMat,&local_28);
    pBVar4 = pcVar8->anchor;
    (&Camera_gInfo)[player].audioPos.x = (pcVar8->anchor->position).x + local_28;
    (&Camera_gInfo)[player].audioPos.y = (pBVar4->position).y + local_24;
    (&Camera_gInfo)[player].audioPos.z = (pBVar4->position).z + local_20;
    local_30 = -local_30;
  }
  transform(&local_38,(int *)&pcVar8->anchor->orientMat,&local_28);
  pBVar4 = pcVar8->anchor;
  (&Camera_gInfo)[player].position.x = (pcVar8->anchor->position).x + local_28;
  (&Camera_gInfo)[player].position.y = (pBVar4->position).y + local_24;
  (&Camera_gInfo)[player].position.z = (pBVar4->position).z + local_20;
  if (bVar1) {
    Camera_LookBack__FP10matrixtdefT0(&pBVar4->orientMat,&(&Camera_gInfo)[player].rotation);
  }
  else {
    pBVar4 = pcVar8->anchor;
    pmVar5 = &(&Camera_gInfo)[player].rotation;
    pmVar3 = &pBVar4->orientMat;
    do {
      iVar2 = pmVar3->m[1];
      iVar6 = pmVar3->m[2];
      iVar7 = pmVar3->m[3];
      pmVar5->m[0] = pmVar3->m[0];
      pmVar5->m[1] = iVar2;
      pmVar5->m[2] = iVar6;
      pmVar5->m[3] = iVar7;
      pmVar3 = (matrixtdef *)(pmVar3->m + 4);
      pmVar5 = (matrixtdef *)(pmVar5->m + 4);
    } while (pmVar3 != (matrixtdef *)((pBVar4->orientMat).m + 8));
    pmVar5->m[0] = pmVar3->m[0];
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
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  BO_tNewtonObj *pBVar9;
  undefined *puVar10;
  camera_info *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar10 = &DAT_00001999;
  iVar4 = (int)(&Camera_gInfo)[player].mode;
  local_50 = (&Camera_gFlags)[iVar4].arm.x;
  local_4c = (&Camera_gFlags)[iVar4].arm.y;
  local_48 = (&Camera_gFlags)[iVar4].arm.z;
  pBVar9 = (&Camera_gInfo)[player].anchor;
  puVar13 = (undefined *)0xccc;
  if ((int)pBVar9[1].collision.lastOtherObj < 1) {
    iVar4 = 3;
    if (GameSetup_gData.reverseTrack == 0) {
      iVar4 = -3;
    }
  }
  else {
    iVar4 = 3;
    if (GameSetup_gData.reverseTrack == 1) {
      iVar4 = -3;
    }
  }
  if ((simVar.quickPauseSim != 0) && (Replay_ReplayInterface.changeCamera == 0)) {
    return;
  }
  if (InBetween != 0) {
    return;
  }
  if (behavior == 1) {
    puVar10 = &DAT_00001999;
  }
  else {
    if ((1 < behavior) && (behavior == 2)) {
      puVar10 = (undefined *)0xccc;
    }
  }
  puVar12 = &DAT_00001999;
  if (behavior != 0) {
    iVar5 = pBVar9[1].shadowMat.m[5];
    iVar8 = pBVar9[1].shadowMat.m[7];
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 < iVar5) {
      iVar5 = iVar5 + (iVar8 >> 2);
    }
    else {
      iVar5 = iVar8 + (iVar5 >> 2);
    }
    puVar3 = (undefined *)(iVar5 / 900);
    puVar6 = puVar3;
    if ((int)puVar10 < (int)puVar3) {
      puVar6 = puVar10;
    }
    puVar12 = (undefined *)0x51e;
    if ((0x51d < (int)puVar6) && (puVar12 = puVar3, (int)puVar10 < (int)puVar3)) {
      puVar12 = puVar10;
    }
  }
  if ((&Input_gLookBehind)[player] != 0) {
    transform(&local_50,(int *)&((&Camera_gInfo)[player].anchor)->orientMat,
              (int *)&(&Camera_gInfo)[player].relpos);
  }
  iVar5 = (int)(((&Camera_gInfo)[player].anchor)->simRoadInfo).slice;
  if (iVar4 < 0) {
    iVar5 = iVar5 + iVar4;
    if (iVar5 < 0) {
      iVar5 = iVar5 + gNumSlices;
    }
  }
  else {
    iVar5 = iVar5 + iVar4;
    if (gNumSlices <= iVar5) {
      iVar5 = iVar5 - gNumSlices;
    }
  }
  if (iVar4 < 1) {
    iVar4 = iVar5 - iVar4;
    iVar8 = iVar4 * 0x20;
    if (gNumSlices <= iVar4) {
      iVar4 = iVar4 - gNumSlices;
LAB_80081050:
      iVar8 = iVar4 << 5;
    }
  }
  else {
    iVar4 = iVar5 - iVar4;
    iVar8 = iVar4 * 0x20;
    if (iVar4 < 0) {
      iVar4 = iVar4 + gNumSlices;
      goto LAB_80081050;
    }
  }
  iVar4 = (BWorldSm_slices[iVar5].center[1] - *(int *)((int)BWorldSm_slices->center + iVar8 + 4)) /
          3;
  if (behavior == 1) {
    bVar2 = 0x10000 < iVar4;
    iVar5 = iVar4;
    if (bVar2) {
      iVar5 = 0x10000;
    }
    iVar8 = 0x4000;
    if (iVar5 < 0x4000) goto LAB_8008110c;
    iVar8 = 0x10000;
  }
  else {
    if (behavior < 2) {
      iVar8 = iVar4;
      if (behavior == 0) {
        iVar8 = 0;
      }
      goto LAB_8008110c;
    }
    iVar8 = iVar4;
    if (behavior != 2) goto LAB_8008110c;
    bVar2 = 0x20000 < iVar4;
    iVar5 = iVar4;
    if (bVar2) {
      iVar5 = 0x20000;
    }
    iVar8 = -0x4000;
    if (iVar5 < -0x4000) goto LAB_8008110c;
    iVar8 = 0x20000;
  }
  if (!bVar2) {
    iVar8 = iVar4;
  }
LAB_8008110c:
  local_4c = local_4c + iVar8;
  if ((&Input_gLookBehind)[player] == 0) {
    transform(&local_50,(int *)&((&Camera_gInfo)[player].anchor)->orientMat,&local_40);
    Camera_TunnelLimit__FiPi(player,&local_3c);
    local_30 = (&Camera_gInfo)[player].relpos.x;
    local_2c = (&Camera_gInfo)[player].relpos.y;
    local_28 = (&Camera_gInfo)[player].relpos.z;
    if ((&Camera_gInfo)[player].intransition != '\0') {
      (&Camera_gInfo)[player].intransition = (&Camera_gInfo)[player].intransition + -1;
      puVar13 = &DAT_00001999;
      puVar12 = &DAT_00001999;
    }
    uVar7 = fixedmult(local_40 - local_30,(int)puVar12);
    (&Camera_gInfo)[player].relpos.x = local_30 + uVar7;
    uVar7 = fixedmult(local_3c - local_2c,(int)puVar13);
    (&Camera_gInfo)[player].relpos.y = local_2c + uVar7;
    uVar7 = fixedmult(local_38 - local_28,(int)puVar12);
    cVar1 = (&Camera_gInfo)[player].intransition;
    (&Camera_gInfo)[player].relpos.z = local_28 + uVar7;
    if ((cVar1 == '\0') &&
       (uVar7 = Math_VectorLength__FP8coorddef(&(&Camera_gInfo)[player].relpos),
       (int)uVar7 < 0x4f0a3)) {
      iVar4 = fixeddiv((uint)&DAT_0004f0a3,uVar7);
      uVar7 = fixedmult(iVar4,(&Camera_gInfo)[player].relpos.x);
      iVar5 = (&Camera_gInfo)[player].relpos.y;
      (&Camera_gInfo)[player].relpos.x = uVar7;
      uVar7 = fixedmult(iVar4,iVar5);
      iVar5 = (&Camera_gInfo)[player].relpos.z;
      (&Camera_gInfo)[player].relpos.y = uVar7;
      uVar7 = fixedmult(iVar4,iVar5);
      (&Camera_gInfo)[player].relpos.z = uVar7;
    }
    pBVar9 = (&Camera_gInfo)[player].anchor;
    (&Camera_gInfo)[player].position.x =
         (((&Camera_gInfo)[player].anchor)->position).x + (&Camera_gInfo)[player].relpos.x;
    (&Camera_gInfo)[player].position.y = (pBVar9->position).y + (&Camera_gInfo)[player].relpos.y;
    (&Camera_gInfo)[player].position.z = (pBVar9->position).z + (&Camera_gInfo)[player].relpos.z;
  }
  else {
    pcVar11 = &Camera_gInfo + player;
    transform(&local_50,(int *)&pcVar11->anchor->orientMat,&local_40);
    pBVar9 = pcVar11->anchor;
    (&Camera_gInfo)[player].audioPos.x = (pcVar11->anchor->position).x + local_40;
    (&Camera_gInfo)[player].audioPos.y = (pBVar9->position).y + local_3c;
    (&Camera_gInfo)[player].audioPos.z = (pBVar9->position).z + local_38;
    local_48 = -local_48;
    transform(&local_50,(int *)&pcVar11->anchor->orientMat,&local_40);
    Camera_TunnelLimit__FiPi(player,&local_3c);
    pBVar9 = pcVar11->anchor;
    (&Camera_gInfo)[player].position.x = (pcVar11->anchor->position).x + local_40;
    (&Camera_gInfo)[player].position.y = (pBVar9->position).y + local_3c;
    (&Camera_gInfo)[player].position.z = (pBVar9->position).z + local_38;
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
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  camera_info *pcVar11;
  BO_tNewtonObj *pBVar12;
  undefined *puVar13;
  int local_50;
  undefined *local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar9 = &DAT_00001999;
  iVar3 = (int)(&Camera_gInfo)[player].mode;
  local_50 = (&Camera_gFlags)[iVar3].arm.x;
  local_4c = (undefined *)(&Camera_gFlags)[iVar3].arm.y;
  local_48 = (&Camera_gFlags)[iVar3].arm.z;
  pBVar12 = (&Camera_gInfo)[player].anchor;
  puVar13 = (undefined *)0xccc;
  if ((int)pBVar12[1].collision.lastOtherObj < 1) {
    iVar3 = 3;
    if (GameSetup_gData.reverseTrack == 0) {
      iVar3 = -3;
    }
  }
  else {
    iVar3 = 3;
    if (GameSetup_gData.reverseTrack == 1) {
      iVar3 = -3;
    }
  }
  if ((simVar.quickPauseSim != 0) && (Replay_ReplayInterface.changeCamera == 0)) {
    return;
  }
  if (InBetween != 0) {
    return;
  }
  if (behavior == 1) {
    puVar9 = &DAT_00001999;
  }
  else {
    if ((1 < behavior) && (behavior == 2)) {
      puVar9 = (undefined *)0xccc;
    }
  }
  puVar10 = &DAT_00001999;
  if (behavior != 0) {
    iVar4 = pBVar12[1].shadowMat.m[5];
    iVar6 = pBVar12[1].shadowMat.m[7];
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar6 < iVar4) {
      iVar4 = iVar4 + (iVar6 >> 2);
    }
    else {
      iVar4 = iVar6 + (iVar4 >> 2);
    }
    puVar7 = (undefined *)(iVar4 / 900);
    puVar5 = puVar7;
    if ((int)puVar9 < (int)puVar7) {
      puVar5 = puVar9;
    }
    puVar10 = (undefined *)0x51e;
    if ((0x51d < (int)puVar5) && (puVar10 = puVar7, (int)puVar9 < (int)puVar7)) {
      puVar10 = puVar9;
    }
  }
  if (1 < Replay_ReplayMode) {
    puVar10 = (undefined *)0x28f;
  }
  if ((&Input_gLookBehind)[player] != 0) {
    transform(&local_50,(int *)&((&Camera_gInfo)[player].anchor)->orientMat,
              (int *)&(&Camera_gInfo)[player].relpos);
  }
  iVar4 = pBVar12[1].shadowMat.m[5];
  iVar6 = pBVar12[1].shadowMat.m[7];
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  if (iVar6 < iVar4) {
    iVar4 = iVar4 + (iVar6 >> 2);
  }
  else {
    iVar4 = iVar6 + (iVar4 >> 2);
  }
  iVar4 = iVar4 / 0x14;
  if (0x20000 < iVar4) {
    iVar4 = 0x20000;
  }
  local_48 = local_48 - iVar4;
  iVar4 = (int)(((&Camera_gInfo)[player].anchor)->simRoadInfo).slice;
  if (iVar3 < 0) {
    iVar4 = iVar4 + iVar3;
    if (iVar4 < 0) {
      iVar4 = iVar4 + gNumSlices;
    }
  }
  else {
    iVar4 = iVar4 + iVar3;
    if (gNumSlices <= iVar4) {
      iVar4 = iVar4 - gNumSlices;
    }
  }
  if (iVar3 < 1) {
    iVar3 = iVar4 - iVar3;
    iVar6 = iVar3 * 0x20;
    if (gNumSlices <= iVar3) {
      iVar3 = iVar3 - gNumSlices;
LAB_80081724:
      iVar6 = iVar3 << 5;
    }
  }
  else {
    iVar3 = iVar4 - iVar3;
    iVar6 = iVar3 * 0x20;
    if (iVar3 < 0) {
      iVar3 = iVar3 + gNumSlices;
      goto LAB_80081724;
    }
  }
  uVar8 = BWorldSm_slices[iVar4].center[1] - *(int *)((int)BWorldSm_slices->center + iVar6 + 4);
  puVar9 = (undefined *)((int)(uVar8 + (uVar8 >> 0x1f)) >> 1);
  if (behavior == 1) {
    bVar2 = 0x14000 < (int)puVar9;
    puVar7 = puVar9;
    if (bVar2) {
      puVar7 = &DAT_00014000;
    }
    if ((int)puVar7 < 0x4000) {
      puVar7 = (undefined *)0x4000;
      goto LAB_800817f8;
    }
    puVar7 = &DAT_00014000;
  }
  else {
    if (behavior < 2) {
      puVar7 = puVar9;
      if (behavior == 0) {
        puVar7 = (undefined *)0x0;
      }
      goto LAB_800817f8;
    }
    puVar7 = puVar9;
    if (behavior != 2) goto LAB_800817f8;
    bVar2 = 0x30000 < (int)puVar9;
    puVar7 = puVar9;
    if (bVar2) {
      puVar7 = (undefined *)0x30000;
    }
    if ((int)puVar7 < -0xc000) {
      puVar7 = (undefined *)0xffff4000;
      goto LAB_800817f8;
    }
    puVar7 = (undefined *)0x30000;
  }
  if (!bVar2) {
    puVar7 = puVar9;
  }
LAB_800817f8:
  local_4c = puVar7 + (int)local_4c;
  if ((&Input_gLookBehind)[player] == 0) {
    transform(&local_50,(int *)&((&Camera_gInfo)[player].anchor)->orientMat,&local_40);
    Camera_TunnelLimit__FiPi(player,&local_3c);
    local_30 = (&Camera_gInfo)[player].relpos.x;
    local_2c = (&Camera_gInfo)[player].relpos.y;
    local_28 = (&Camera_gInfo)[player].relpos.z;
    if ((&Camera_gInfo)[player].intransition != '\0') {
      (&Camera_gInfo)[player].intransition = (&Camera_gInfo)[player].intransition + -1;
      puVar13 = &DAT_00001999;
      puVar10 = &DAT_00001999;
    }
    uVar8 = fixedmult(local_40 - local_30,(int)puVar10);
    (&Camera_gInfo)[player].relpos.x = local_30 + uVar8;
    uVar8 = fixedmult(local_3c - local_2c,(int)puVar13);
    (&Camera_gInfo)[player].relpos.y = local_2c + uVar8;
    uVar8 = fixedmult(local_38 - local_28,(int)puVar10);
    cVar1 = (&Camera_gInfo)[player].intransition;
    (&Camera_gInfo)[player].relpos.z = local_28 + uVar8;
    if ((cVar1 == '\0') &&
       (uVar8 = Math_VectorLength__FP8coorddef(&(&Camera_gInfo)[player].relpos),
       (int)uVar8 < 0x651eb)) {
      iVar3 = fixeddiv((uint)&DAT_000651eb,uVar8);
      uVar8 = fixedmult(iVar3,(&Camera_gInfo)[player].relpos.x);
      iVar4 = (&Camera_gInfo)[player].relpos.y;
      (&Camera_gInfo)[player].relpos.x = uVar8;
      uVar8 = fixedmult(iVar3,iVar4);
      iVar4 = (&Camera_gInfo)[player].relpos.z;
      (&Camera_gInfo)[player].relpos.y = uVar8;
      uVar8 = fixedmult(iVar3,iVar4);
      (&Camera_gInfo)[player].relpos.z = uVar8;
    }
    pBVar12 = (&Camera_gInfo)[player].anchor;
    (&Camera_gInfo)[player].position.x =
         (((&Camera_gInfo)[player].anchor)->position).x + (&Camera_gInfo)[player].relpos.x;
    (&Camera_gInfo)[player].position.y = (pBVar12->position).y + (&Camera_gInfo)[player].relpos.y;
    (&Camera_gInfo)[player].position.z = (pBVar12->position).z + (&Camera_gInfo)[player].relpos.z;
  }
  else {
    pcVar11 = &Camera_gInfo + player;
    transform(&local_50,(int *)&pcVar11->anchor->orientMat,&local_40);
    pBVar12 = pcVar11->anchor;
    (&Camera_gInfo)[player].audioPos.x = (pcVar11->anchor->position).x + local_40;
    (&Camera_gInfo)[player].audioPos.y = (pBVar12->position).y + local_3c;
    (&Camera_gInfo)[player].audioPos.z = (pBVar12->position).z + local_38;
    local_48 = -local_48;
    transform(&local_50,(int *)&pcVar11->anchor->orientMat,&local_40);
    Camera_TunnelLimit__FiPi(player,&local_3c);
    pBVar12 = pcVar11->anchor;
    (&Camera_gInfo)[player].position.x = (pcVar11->anchor->position).x + local_40;
    (&Camera_gInfo)[player].position.y = (pBVar12->position).y + local_3c;
    (&Camera_gInfo)[player].position.z = (pBVar12->position).z + local_38;
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
  int iVar3;
  BO_tNewtonObj *pBVar4;
  uint uVar5;
  camera_info *pcVar6;
  uint local_48;
  int local_44;
  uint local_40;
  int local_38;
  int local_34;
  int local_30;
  undefined *local_28 [4];
  int local_18;
  int local_14;
  
  local_28[0] = PTR_DAT_800558b0;
  local_28[1] = PTR_DAT_800558b4;
  local_28[2] = PTR_DAT_800558b8;
  if ((((simVar.quickPauseSim == 0) || (Replay_ReplayInterface.changeCamera != 0)) &&
      (InBetween == 0)) && (simVar.pauseSim == 0)) {
    sVar1 = (&Camera_gInfo)[player].circleAngle + 1;
    (&Camera_gInfo)[player].circleAngle = sVar1;
    intsincos((int)sVar1,&local_18,&local_14);
    local_48 = fixedmult((int)&DAT_00048000,local_14);
    local_40 = fixedmult(0x60000,local_18);
    if (((int)(&Camera_gInfo)[player].circleAngle + 0x100U & 0x1ff) == 0) {
      (&Camera_gInfo)[player].circleCounter = (&Camera_gInfo)[player].circleCounter + 1;
    }
    uVar5 = (int)(&Camera_gInfo)[player].circleAngle - 0x80;
    if ((uVar5 & 0x1ff) < 0x80) {
      iVar2 = (uint)(ushort)(&Camera_gInfo)[player].circleCounter << 0x10;
      iVar3 = iVar2 >> 0x10;
      local_44 = *(int *)((int)local_28 +
                         ((iVar3 + ((iVar3 / 3 + (iVar3 >> 0x1f)) - (iVar2 >> 0x1f)) * -3) * 0x10000
                         >> 0xe));
      local_44 = ((int)((int)(local_28[(iVar3 + 1) % 3] + -local_44) * (uVar5 & 0x7f)) >> 7) +
                 local_44;
    }
    else {
      iVar2 = (uint)(ushort)(&Camera_gInfo)[player].circleCounter << 0x10;
      iVar3 = iVar2 >> 0x10;
      local_44 = *(int *)((int)local_28 +
                         ((iVar3 + ((iVar3 / 3 + (iVar3 >> 0x1f)) - (iVar2 >> 0x1f)) * -3) * 0x10000
                         >> 0xe));
    }
    pcVar6 = &Camera_gInfo + player;
    transform((int *)&local_48,(int *)&pcVar6->anchor->orientMat,&local_38);
    Camera_TunnelLimit__FiPi(player,&local_34);
    pBVar4 = pcVar6->anchor;
    (&Camera_gInfo)[player].position.x = (pcVar6->anchor->position).x + local_38;
    (&Camera_gInfo)[player].position.y = (pBVar4->position).y + local_34;
    (&Camera_gInfo)[player].position.z = (pBVar4->position).z + local_30;
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
  
  if ((*(uint *)&(&Camera_gInfo)[player].field_0x74 >> 7 & 1) == 0) {
    if (0x3000 < targetDist) {
      uVar1 = *(uint *)&(&Camera_gInfo)[player].field_0x74 >> 0x19 & 3;
      if (uVar1 == 1) {
        DAT_00000290 = targetDist * 0xbe >> 0x1f;
        DAT_00000290 = ((targetDist * 0xbe) / 6 + DAT_00000290 >> 0xb) - DAT_00000290;
      }
      else {
        if (((uVar1 == 2) &&
            (DAT_00000290 = targetDist * 0xbe >> 0x1f,
            DAT_00000290 = ((targetDist * 0xbe) / 6 + DAT_00000290 >> 0xb) - DAT_00000290,
            0x4b0 < DAT_00000290)) &&
           (DAT_00000290 = (int)(&DAT_00001770 + -DAT_00000290) >> 2, DAT_00000290 < 0x2ee)) {
          DAT_00000290 = 0x2ee;
        }
      }
    }
  }
  else {
    DAT_00000290 = 0xbe;
  }
  SetGeomScreen(DAT_00000290);
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
  uint uVar2;
  uchar *puVar3;
  coorddef *b;
  
  b = &(&Camera_gInfo)[player].position;
  iVar1 = Math_Dist3D__FP8coorddefT0(&((&Camera_gInfo)[player].target)->position,b);
  if (iVar1 < 1) {
    iVar1 = Math_Dist3D__FP8coorddefT0(&((&Camera_gInfo)[player].target)->position,b);
    iVar1 = -iVar1;
  }
  else {
    iVar1 = Math_Dist3D__FP8coorddefT0(&((&Camera_gInfo)[player].target)->position,b);
  }
  puVar3 = (uchar *)(&Camera_gInfo)[player].position.x;
  if ((&lastX_64)[player] != puVar3) {
    (&lastX_64)[player] = puVar3;
    (&lastY_65)[player] = (uchar *)(&Camera_gInfo)[player].position.y;
  }
  uVar2 = fixedmult((&Camera_gInfo)[player].TVHeight >> 2,(iVar1 >> 4) + -0x4000);
  if ((&Camera_gInfo)[player].TVHeight < (int)uVar2) {
    uVar2 = (&Camera_gInfo)[player].TVHeight;
  }
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  *(uchar **)&(&Camera_gInfo)[player].position.y = (&lastY_65)[player] + uVar2;
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
  matrixtdef *pmVar3;
  matrixtdef *pmVar4;
  BO_tNewtonObj *pBVar5;
  int iVar6;
  int iVar7;
  camera_info *pcVar8;
  coorddef local_58;
  int local_48;
  int local_44;
  int local_40;
  matrixtdef local_38;
  
  if ((&Camera_gInfo)[player].animHandle == -1) {
    cVar1 = (&Camera_gInfo)[player].animNum;
    (&Camera_gInfo)[player].animNum = cVar1 + -1;
    iVar2 = Anim_Handle__Fi((uint)(byte)(&gAnimCams)[(int)cVar1 + GameSetup_gData.track * 4]);
    (&Camera_gInfo)[player].animHandle = (char)iVar2;
  }
  this = Anim_GetAnim__Fi((int)(&Camera_gInfo)[player].animHandle);
  iVar2 = GetTimedAnimPosRot__10AnimScriptP8coorddefP10matrixtdef(this,&local_58,&local_38);
  if (iVar2 < 1) {
    if ((&Camera_gInfo)[player].animNum < '\x01') {
      if (Replay_ReplayMode != 2) {
        Camera_SetMode__Fii(player,GameSetup_gData.carInfo[player].Camera[0]);
        return;
      }
      if (numValidCams != 0) {
        Replay_ReplayFindClosestCamera__Fii
                  (player,(int)(((&Camera_gInfo)[player].anchor)->simRoadInfo).slice);
        return;
      }
      Camera_SetMode__Fii(player,0xb);
      (&Camera_gInfo)[player].splineMode = '\x03';
      return;
    }
    Anim_FreeHandle__Fi((int)(&Camera_gInfo)[player].animHandle);
    cVar1 = (&Camera_gInfo)[player].animNum;
    (&Camera_gInfo)[player].animNum = cVar1 + -1;
    iVar2 = Anim_Handle__Fi((uint)(byte)(&gAnimCams)[(int)cVar1 + GameSetup_gData.track * 4]);
    (&Camera_gInfo)[player].animHandle = (char)iVar2;
    this = Anim_GetAnim__Fi((int)(char)iVar2);
    GetTimedAnimPosRot__10AnimScriptP8coorddefP10matrixtdef(this,&local_58,&local_38);
  }
  pcVar8 = &Camera_gInfo + player;
  pmVar3 = &(&Camera_gInfo)[player].rotation;
  if (((int)(uint)(byte)(&gAnimMode)[GameSetup_gData.track] >>
       ((int)(&Camera_gInfo)[player].animNum & 0x1fU) & 1U) == 0) {
    transform((int *)&local_58,(int *)&pcVar8->anchor->orientMat,&local_48);
    pBVar5 = pcVar8->anchor;
    (&Camera_gInfo)[player].position.x = (pcVar8->anchor->position).x + local_48;
    (&Camera_gInfo)[player].position.y = (pBVar5->position).y + local_44;
    (&Camera_gInfo)[player].position.z = (pBVar5->position).z + local_40;
    Math_fasttransmult__FP10matrixtdefN20
              (&local_38,&pBVar5->orientMat,&(&Camera_gInfo)[player].rotation);
  }
  else {
    (&Camera_gInfo)[player].position.x = local_58.x;
    (&Camera_gInfo)[player].position.y = local_58.y;
    (&Camera_gInfo)[player].position.z = local_58.z;
    pmVar4 = &local_38;
    do {
      iVar2 = pmVar4->m[1];
      iVar6 = pmVar4->m[2];
      iVar7 = pmVar4->m[3];
      pmVar3->m[0] = pmVar4->m[0];
      pmVar3->m[1] = iVar2;
      pmVar3->m[2] = iVar6;
      pmVar3->m[3] = iVar7;
      pmVar4 = (matrixtdef *)(pmVar4->m + 4);
      pmVar3 = (matrixtdef *)(pmVar3->m + 4);
    } while (pmVar4 != (matrixtdef *)(local_38.m + 8));
    pmVar3->m[0] = pmVar4->m[0];
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
  BO_tNewtonObj *pBVar2;
  camera_info *pcVar3;
  coorddef cStack96;
  int local_50;
  int local_4c;
  int local_48;
  matrixtdef mStack64;
  
  pcVar3 = &Camera_gInfo + player;
  if ((&Camera_gInfo)[player].animHandle == -1) {
    iVar1 = Anim_Handle__Fi(1);
    (&Camera_gInfo)[player].animHandle = (char)iVar1;
  }
  this = Anim_GetAnim__Fi((int)(&Camera_gInfo)[player].animHandle);
  iVar1 = GetTimedAnimPosRot__10AnimScriptP8coorddefP10matrixtdef(this,&cStack96,&mStack64);
  if (iVar1 < 1) {
    Anim_GetLastAnimPosRot__FiiP8coorddefP10matrixtdef(1,6,&cStack96,&mStack64);
  }
  transform((int *)&cStack96,(int *)&pcVar3->anchor->orientMat,&local_50);
  pBVar2 = pcVar3->anchor;
  (&Camera_gInfo)[player].position.x = (pcVar3->anchor->position).x + local_50;
  (&Camera_gInfo)[player].position.y = (pBVar2->position).y + local_4c;
  (&Camera_gInfo)[player].position.z = (pBVar2->position).z + local_48;
  Math_fasttransmult__FP10matrixtdefN20
            (&mStack64,&pBVar2->orientMat,&(&Camera_gInfo)[player].rotation);
  *(uint *)&(&Camera_gInfo)[player].field_0x74 =
       *(uint *)&(&Camera_gInfo)[player].field_0x74 & 0xfffffff1 | 0x70;
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
  uint uVar2;
  BO_tNewtonObj *pBVar3;
  int iVar4;
  camera_info *pcVar5;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  
  pcVar5 = &Camera_gInfo + player;
  iVar1 = (int)(&Camera_gInfo)[player].mode;
  iVar4 = (&Camera_gFlags)[iVar1].arm.x;
  local_24 = (&Camera_gFlags)[iVar1].arm.y;
  local_20 = (&Camera_gFlags)[iVar1].arm.z;
  Camera_TunnelLimit__FiPi(player,&local_24);
  local_18 = (&Camera_gInfo)[player].position.x - (pcVar5->anchor->position).x;
  local_14 = (&Camera_gInfo)[player].position.y - (pcVar5->anchor->position).y;
  local_10 = (&Camera_gInfo)[player].position.z - (pcVar5->anchor->position).z;
  uVar2 = fixedmult(iVar4 - local_18,(int)&DAT_00001999);
  local_18 = local_18 + uVar2;
  uVar2 = fixedmult(local_24 - local_14,(int)&DAT_00001999);
  local_14 = local_14 + uVar2;
  uVar2 = fixedmult(local_20 - local_10,(int)&DAT_00001999);
  pBVar3 = pcVar5->anchor;
  (&Camera_gInfo)[player].position.x = (pcVar5->anchor->position).x + local_18;
  (&Camera_gInfo)[player].position.y = (pBVar3->position).y + local_14;
  (&Camera_gInfo)[player].position.z = (pBVar3->position).z + local_10 + uVar2;
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
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  Trk_NewSlice *pTVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  BO_tNewtonObj *pBVar9;
  camera_info *pcVar10;
  
  pcVar10 = &Camera_gInfo + player;
  pBVar9 = pcVar10->anchor;
  iVar6 = ((0x10000 - (&camSpeedTable)[(uint)(byte)(&Camera_gInfo)[player].splineMode]) * 0xf >>
          0x10) + 1;
  iVar8 = 8;
  if (iVar6 < 9) {
    iVar8 = iVar6;
  }
  if ((&Replay_ReplayCamera)[player].defaultCamera == 0) {
    uVar2 = fixedmult((&Camera_gInfo)[player].rotation.m[6],(pBVar9->roadMatrix).m[6]);
    uVar3 = fixedmult((&Camera_gInfo)[player].rotation.m[7],(pcVar10->anchor->roadMatrix).m[7]);
    uVar4 = fixedmult((&Camera_gInfo)[player].rotation.m[8],(pcVar10->anchor->roadMatrix).m[8]);
    if ((int)(uVar2 + uVar3 + uVar4) < 0) {
      iVar8 = -iVar8;
    }
    if (pBVar9[1].shadowMat.m[7] < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 < 0) {
      sVar1 = (pBVar9->simRoadInfo).slice;
      sVar7 = sVar1 + (short)iVar8;
      if ((int)sVar1 + iVar8 < 0) {
        sVar7 = (short)gNumSlices + sVar7;
      }
      (&Camera_gInfo)[player].slicePos.slice = sVar7;
    }
    else {
      sVar1 = (pBVar9->simRoadInfo).slice;
      sVar7 = sVar1 + (short)iVar8;
      if (gNumSlices <= (int)sVar1 + iVar8) {
        sVar7 = sVar7 - (short)gNumSlices;
      }
      (&Camera_gInfo)[player].slicePos.slice = sVar7;
    }
    pTVar5 = BWorldSm_slices + (int)(&Camera_gInfo)[player].slicePos.slice;
    iVar8 = pTVar5->center[1];
    iVar6 = pTVar5->center[2];
    (&Camera_gInfo)[player].position.x = pTVar5->center[0];
    (&Camera_gInfo)[player].position.y = iVar8;
    (&Camera_gInfo)[player].position.z = iVar6;
    BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
              (&(&Camera_gInfo)[player].position,&(&Camera_gInfo)[player].slicePos,1);
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

/* WARNING: Type propagation algorithm not settling */

void Camera_UpdateSplineCam__Fi(int player)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  Trk_NewSlice *pTVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  Trk_NewSlice *pTVar11;
  coorddef *b;
  camera_info *pcVar12;
  BO_tNewtonObj *pBVar13;
  coorddef local_40;
  int local_30;
  int local_2c;
  int local_28;
  
  pBVar13 = (&Camera_gInfo)[player].anchor;
  bVar2 = false;
  if ((simVar.quickPauseSim != 0) && (Replay_ReplayInterface.changeCamera == 0)) {
    return;
  }
  if (InBetween != 0) {
    return;
  }
  iVar10 = (int)(pBVar13->simRoadInfo).slice;
  iVar8 = (int)(&Camera_gInfo)[player].slicePos.slice;
  iVar3 = iVar10 - iVar8;
  if (iVar3 < 1) {
    iVar3 = iVar8 - iVar10;
  }
  if ((int)(gNumSlices + ((uint)gNumSlices >> 0x1f)) >> 1 < iVar3) {
    iVar10 = (int)(pBVar13->simRoadInfo).slice;
    iVar3 = (int)(&Camera_gInfo)[player].slicePos.slice;
    iVar8 = iVar10 - iVar3;
    if (iVar8 < 1) {
      iVar8 = gNumSlices - (iVar3 - iVar10);
    }
    else {
      iVar8 = gNumSlices - iVar8;
    }
  }
  else {
    iVar10 = (int)(pBVar13->simRoadInfo).slice;
    iVar3 = (int)(&Camera_gInfo)[player].slicePos.slice;
    iVar8 = iVar10 - iVar3;
    if (iVar8 < 1) {
      iVar8 = iVar3 - iVar10;
    }
  }
  iVar3 = (0x10000 - (&camSpeedTable)[(uint)(byte)(&Camera_gInfo)[player].splineMode]) * 0xf >> 0x10
  ;
  if ((iVar3 + 2 < iVar8) &&
     ((&camSpeedTable)[(uint)(byte)(&Camera_gInfo)[player].splineMode] < 0x10000)) {
    bVar2 = true;
  }
  if ((bVar2) && ((&Replay_ReplayCamera)[player].defaultCamera == 0)) {
    iVar3 = iVar3 + 1;
    iVar8 = 8;
    if (iVar3 < 9) {
      iVar8 = iVar3;
    }
    pcVar12 = &Camera_gInfo + player;
    uVar4 = fixedmult((&Camera_gInfo)[player].rotation.m[6],(pcVar12->anchor->roadMatrix).m[6]);
    uVar5 = fixedmult((&Camera_gInfo)[player].rotation.m[7],(pcVar12->anchor->roadMatrix).m[7]);
    uVar6 = fixedmult((&Camera_gInfo)[player].rotation.m[8],(pcVar12->anchor->roadMatrix).m[8]);
    if ((int)(uVar4 + uVar5 + uVar6) < 0) {
      iVar8 = -iVar8;
    }
    if (pBVar13[1].shadowMat.m[7] < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 < 0) {
      sVar1 = (pBVar13->simRoadInfo).slice;
      sVar9 = sVar1 + (short)iVar8;
      if ((int)sVar1 + iVar8 < 0) {
        sVar9 = (short)gNumSlices + sVar9;
      }
      (&Camera_gInfo)[player].slicePos.slice = sVar9;
    }
    else {
      sVar1 = (pBVar13->simRoadInfo).slice;
      sVar9 = sVar1 + (short)iVar8;
      if (gNumSlices <= (int)sVar1 + iVar8) {
        sVar9 = sVar9 - (short)gNumSlices;
      }
      (&Camera_gInfo)[player].slicePos.slice = sVar9;
    }
    pTVar11 = BWorldSm_slices + (int)(&Camera_gInfo)[player].slicePos.slice;
    iVar3 = pTVar11->center[1];
    iVar8 = pTVar11->center[2];
    (&Camera_gInfo)[player].position.x = pTVar11->center[0];
    (&Camera_gInfo)[player].position.y = iVar3;
    (&Camera_gInfo)[player].position.z = iVar8;
  }
  BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
            (&(&Camera_gInfo)[player].position,&(&Camera_gInfo)[player].slicePos,1);
  pTVar7 = BWorldSm_slices + (int)(&Camera_gInfo)[player].slicePos.slice;
  iVar3 = (int)(&Camera_gInfo)[player].slicePos.slice + 1;
  pTVar11 = BWorldSm_slices;
  if (iVar3 < gNumSlices) {
    pTVar11 = BWorldSm_slices + iVar3;
  }
  local_30 = pTVar11->center[0];
  local_2c = pTVar11->center[1];
  local_28 = pTVar11->center[2];
  local_40.x = local_30 - pTVar7->center[0];
  local_40.y = local_2c - pTVar7->center[1];
  local_40.z = local_28 - pTVar7->center[2];
  Math_NormalizeVector__FP8coorddef(&local_40);
  uVar4 = fixedmult((pBVar13->linearVel).x,local_40.x);
  uVar5 = fixedmult((pBVar13->linearVel).y,local_40.y);
  uVar6 = fixedmult((pBVar13->linearVel).z,local_40.z);
  uVar6 = uVar4 + uVar5 + uVar6;
  if ((GameSetup_gData.sgge & 4U) != 0) {
    uVar6 = fixedmult(uVar6,(int)&DAT_0000cccc);
  }
  uVar4 = fixedmult(uVar6,(&camSpeedTable)[(uint)(byte)(&Camera_gInfo)[player].splineMode]);
  uVar5 = fixedmult(uVar4,local_40.x);
  uVar6 = fixedmult(uVar4,local_40.y);
  uVar4 = fixedmult(uVar4,local_40.z);
  b = &(&Camera_gInfo)[player].position;
  pBVar13 = (&Camera_gInfo)[player].target;
  (&Camera_gInfo)[player].position.x = (&Camera_gInfo)[player].position.x + ((int)uVar5 >> 6);
  (&Camera_gInfo)[player].position.y = (&Camera_gInfo)[player].position.y + ((int)uVar6 >> 6);
  (&Camera_gInfo)[player].position.z = (&Camera_gInfo)[player].position.z + ((int)uVar4 >> 6);
  iVar3 = Math_Dist3D__FP8coorddefT0(&pBVar13->position,b);
  if (iVar3 < 1) {
    iVar3 = Math_Dist3D__FP8coorddefT0(&((&Camera_gInfo)[player].target)->position,b);
    iVar3 = -iVar3;
  }
  else {
    iVar3 = Math_Dist3D__FP8coorddefT0(&((&Camera_gInfo)[player].target)->position,b);
  }
  SetCameraZoom__Fii(player,iVar3 >> 4);
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
  char cVar2;
  char cVar3;
  char cVar4;
  Trk_NewSlice *pTVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  camera_info *pcVar12;
  int local_40;
  int local_3c;
  int local_38;
  int local_1c;
  int local_18;
  
  if (((simVar.quickPauseSim == 0) || (Replay_ReplayInterface.changeCamera != 0)) &&
     (InBetween == 0)) {
    SetGeomScreen(0xbe);
    pcVar12 = &Camera_gInfo + player;
    if (simGlobal.gameTicks < (&Camera_gInfo)[player].POInhibitor) {
      Camera_UpdateCopCam2__Fi(player);
    }
    else {
      pTVar5 = BWorldSm_slices + (int)(pcVar12->anchor->simRoadInfo).slice;
      iVar10 = pTVar5->center[0];
      iVar11 = pTVar5->center[1];
      local_18 = pTVar5->center[2];
      cVar1 = BWorldSm_slices[(int)(pcVar12->anchor->simRoadInfo).slice].forward[2];
      iVar6 = (pcVar12->anchor->position).x;
      cVar2 = BWorldSm_slices[(int)(pcVar12->anchor->simRoadInfo).slice].right[0];
      local_40 = (int)cVar2 * 0x800;
      cVar3 = BWorldSm_slices[(int)(pcVar12->anchor->simRoadInfo).slice].right[1];
      local_3c = (int)cVar3 * 0x800;
      cVar4 = BWorldSm_slices[(int)(pcVar12->anchor->simRoadInfo).slice].right[2];
      local_38 = (int)cVar4 * 0x800;
      uVar7 = fixedmult((pcVar12->anchor->position).z - local_18,
                        (int)BWorldSm_slices[(int)(pcVar12->anchor->simRoadInfo).slice].forward[0]
                        << 9);
      uVar8 = fixedmult(iVar6 - iVar10,(int)cVar1 << 9);
      uVar9 = Camera_IslandProfile__FUs
                        (BWorldSm_slices[(int)(pcVar12->anchor->simRoadInfo).slice].pavedProfile);
      if ((int)(uVar7 - uVar8) < 0) {
        uVar9 = uVar9 ^ 1;
      }
      if (uVar9 != 0) {
        local_40 = (int)cVar2 * -0x800;
        local_38 = (int)cVar4 * -0x800;
        local_3c = (int)cVar3 * -0x800;
      }
      local_1c = 0x60000;
      Camera_TunnelLimit__FiPi(player,&local_1c);
      local_1c = local_1c + iVar11 + local_3c;
      local_18 = local_18 + local_38;
      uVar7 = fixedmult((iVar10 + local_40) - (&Camera_gInfo)[player].position.x,0x7ae);
      iVar6 = (&Camera_gInfo)[player].position.y;
      (&Camera_gInfo)[player].position.x = (&Camera_gInfo)[player].position.x + uVar7;
      uVar7 = fixedmult(local_1c - iVar6,0x7ae);
      iVar6 = (&Camera_gInfo)[player].position.z;
      (&Camera_gInfo)[player].position.y = (&Camera_gInfo)[player].position.y + uVar7;
      uVar7 = fixedmult(local_18 - iVar6,0x7ae);
      uVar8 = *(uint *)&(&Camera_gInfo)[player].field_0x74;
      (&Camera_gInfo)[player].position.z = (&Camera_gInfo)[player].position.z + uVar7;
      *(uint *)&(&Camera_gInfo)[player].field_0x74 = uVar8 & 0xfffffff9 | 0x78;
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
  uint uVar3;
  int iVar4;
  int iVar5;
  BO_tNewtonObj *pBVar6;
  camera_info *pcVar7;
  coorddef local_18;
  
  pcVar7 = &Camera_gInfo + player;
  iVar1 = (pcVar7->anchor->position).y;
  iVar4 = (((&Camera_gInfo)[player].target)->position).y;
  iVar2 = (pcVar7->anchor->position).z;
  iVar5 = (((&Camera_gInfo)[player].target)->position).z;
  (&gCop1Target)[player].x =
       (pcVar7->anchor->position).x + (((&Camera_gInfo)[player].target)->position).x >> 1;
  (&gCop1Target)[player].y = iVar1 + iVar4 >> 1;
  (&gCop1Target)[player].z = iVar2 + iVar5 >> 1;
  local_18.x = (pcVar7->anchor->position).x - (((&Camera_gInfo)[player].target)->position).x;
  local_18.y = (pcVar7->anchor->position).y - (((&Camera_gInfo)[player].target)->position).y;
  local_18.z = (pcVar7->anchor->position).z - (((&Camera_gInfo)[player].target)->position).z;
  Math_NormalizeVector__FP8coorddef(&local_18);
  local_18.x = fixedmult(0x40000,local_18.x);
  local_18.y = fixedmult(0x40000,local_18.y);
  uVar3 = fixedmult(0x40000,local_18.z);
  pBVar6 = pcVar7->anchor;
  (&Camera_gInfo)[player].position.x = (pcVar7->anchor->position).x + local_18.x + uVar3;
  (&Camera_gInfo)[player].position.y = (pBVar6->position).y + 0x18000;
  (&Camera_gInfo)[player].position.z = ((pBVar6->position).z - local_18.x) + uVar3;
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
  BO_tNewtonObj *pBVar1;
  camera_info *pcVar2;
  coorddef local_18;
  
  pcVar2 = &Camera_gInfo + player;
  local_18.x = (((&Camera_gInfo)[player].target)->position).x - (pcVar2->anchor->position).x;
  if (local_18.x < 0) {
    local_18.x = local_18.x + 3;
  }
  local_18.x = local_18.x >> 2;
  local_18.y = (((&Camera_gInfo)[player].target)->position).y - (pcVar2->anchor->position).y;
  if (local_18.y < 0) {
    local_18.y = local_18.y + 3;
  }
  local_18.y = local_18.y >> 2;
  local_18.z = (((&Camera_gInfo)[player].target)->position).z - (pcVar2->anchor->position).z;
  if (local_18.z < 0) {
    local_18.z = local_18.z + 3;
  }
  local_18.z = local_18.z >> 2;
  Math_NormalizeVector__FP8coorddef(&local_18);
  pBVar1 = pcVar2->anchor;
  (&Camera_gInfo)[player].position.x = (pcVar2->anchor->position).x + local_18.x * -2;
  *(undefined **)&(&Camera_gInfo)[player].position.y = &DAT_00013333 + (pBVar1->position).y;
  (&Camera_gInfo)[player].position.z = (pBVar1->position).z + local_18.z * -2;
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
  forceFocus_t fVar2;
  
  fVar2 = (&Camera_gInfo)[player].forceFocus;
  if (fVar2 == FOCUS_AI) {
    cVar1 = (&Camera_gInfo)[player].focusOnAICar;
    *(Car_tObj **)&(&Camera_gInfo)[player].anchor =
         (&__Cars_gList_9__)[(int)(&Camera_gInfo)[player].focusOnAICar];
    *(Car_tObj **)&(&Camera_gInfo)[player].target = (&__Cars_gList_9__)[(int)cVar1];
    Camera_UpdateCircleCam__Fi(player);
  }
  else {
    if ((1 < (int)fVar2) && (fVar2 == FOCUS_COPANDAI)) {
      cVar1 = (&Camera_gInfo)[player].focusOnAICar;
      *(Car_tObj **)&(&Camera_gInfo)[player].anchor = (&__Cars_gList_9__)[player];
      *(Car_tObj **)&(&Camera_gInfo)[player].target = (&__Cars_gList_9__)[(int)cVar1];
      Camera_UpdateCopCam2__Fi(player);
    }
  }
  DAT_00000290 = 0xbe;
  (&Camera_gInfo)[player].POInhibitor = simGlobal.gameTicks + 0x140;
  *(uint *)&(&Camera_gInfo)[player].field_0x74 =
       *(uint *)&(&Camera_gInfo)[player].field_0x74 & 0xffffffb9 | 0x38;
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

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention yet parameter storage is locked */

void Camera_Update__Fv(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  camera_info *pcVar10;
  int player;
  BO_tNewtonObj *pBVar11;
  int *piVar12;
  Car_tObj **ppCVar13;
  int iVar14;
  
  player = 0;
  pcVar10 = &Camera_gInfo;
  iVar14 = 0;
  ppCVar13 = &__Cars_gHumanRaceCarList_9__;
  piVar12 = Camera_gInfo.rotation.m + 6;
  do {
    if ((int)(uint)(Camera_gInfo.field_0x74 >> 7) < player) {
      return;
    }
    pBVar11 = pcVar10->anchor;
    if ((*(uint *)&pcVar10->field_0x74 >> 6 & 1) == 0) {
LAB_80083500:
      if (((pBVar11[1].simRoadInfo.quadPts[1].y & 1U) != 0) && (pBVar11[1].roadMatrix.m[3] == 2)) {
        Camera_UpdateFinishCam__Fi(player);
        goto LAB_80083584;
      }
      if (0 < (int)pcVar10->forceFocus) {
        Camera_UpdateBTCopCam__Fi(player);
        goto LAB_80083584;
      }
      if (((*ppCVar13)->pullOver != 0) && (((*ppCVar13)->stats).finishType != 3)) {
        Camera_UpdatePulloverCam__Fi(player);
        goto LAB_80083584;
      }
      if ((pcVar10->field_0x74 & 1) != 0) {
        iVar9 = (int)pcVar10->mode;
        uVar8 = *(uint *)&pcVar10->field_0x74;
        uVar2 = ((&Camera_gFlags)[iVar9].field_0xc & 1) << 1;
        *(uint *)&pcVar10->field_0x74 = uVar8 & 0xfffffffd | uVar2;
        uVar3 = ((&Camera_gFlags)[iVar9].field_0xc & 2) << 1;
        *(uint *)&pcVar10->field_0x74 = uVar8 & 0xfffffff9 | uVar2 | uVar3;
        uVar4 = ((&Camera_gFlags)[iVar9].field_0xc & 4) << 1;
        *(uint *)&pcVar10->field_0x74 = uVar8 & 0xfffffff1 | uVar2 | uVar3 | uVar4;
        uVar5 = ((&Camera_gFlags)[iVar9].field_0xc & 8) << 1;
        *(uint *)&pcVar10->field_0x74 = uVar8 & 0xffffffe1 | uVar2 | uVar3 | uVar4 | uVar5;
        uVar6 = ((&Camera_gFlags)[iVar9].field_0xc & 0x10) << 1;
        *(uint *)&pcVar10->field_0x74 = uVar8 & 0xffffffc1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6;
        uVar7 = ((&Camera_gFlags)[iVar9].field_0xc & 0x20) << 1;
        *(uint *)&pcVar10->field_0x74 =
             uVar8 & 0xffffff81 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
        *(uint *)&pcVar10->field_0x74 =
             uVar8 & 0xf7ffff80 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 |
             (uint)(pcVar10->mode < 2) << 0x1b;
        *(Car_tObj **)&pcVar10->anchor = *ppCVar13;
        bVar1 = 1 < Replay_ReplayMode;
        *(Car_tObj **)&pcVar10->target = *ppCVar13;
        if ((bVar1) && (*(int *)((int)&Replay_ReplayCamera.cameraMode + iVar14) == 0x13)) {
          Replay_ReplayFindClosestCamera__Fii(player,(int)(pcVar10->anchor->simRoadInfo).slice);
        }
      }
      switch(pcVar10->mode) {
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
      if (pcVar10->tumbling == '\0') {
        if ((pBVar11->orientationToGround).y < 0x8000) {
          uVar2 = fixedmult(*piVar12,(pBVar11->roadMatrix).m[6]);
          uVar3 = fixedmult(piVar12[1],(pcVar10->anchor->roadMatrix).m[7]);
          uVar4 = fixedmult(piVar12[2],(pcVar10->anchor->roadMatrix).m[8]);
          *(uint *)&pcVar10->field_0x74 =
               *(uint *)&pcVar10->field_0x74 & 0xfeffffff |
               (uint)((int)(uVar2 + uVar3 + uVar4) < 0) << 0x18;
          pcVar10->tumbling = 'd';
        }
        goto LAB_80083500;
      }
      pcVar10->tumbling = pcVar10->tumbling + -1;
      Camera_UpdateCollisionCam__Fi(player);
LAB_80083584:
      *(uint *)&pcVar10->field_0x74 = *(uint *)&pcVar10->field_0x74 & 0xf7ffffff | 1;
    }
    pcVar10 = pcVar10 + 1;
    iVar14 = iVar14 + 0x10;
    ppCVar13 = ppCVar13 + 1;
    piVar12 = piVar12 + 0x44;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Camera_Init__Fv(void)

{
  bool bVar1;
  BO_tNewtonObj *pBVar2;
  matrixtdef *pmVar3;
  BO_tNewtonObj **ppBVar4;
  matrixtdef *pmVar5;
  BWorldSm_Pos *pBVar6;
  camera_info *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  BO_tNewtonObj *pBVar11;
  int iVar12;
  BO_tNewtonObj *pBVar13;
  BO_tNewtonObj *local_a0 [32];
  BO_tNewtonObj *apBStack32 [2];
  
  bVar1 = GameSetup_gData.commMode == 1;
  memset(local_a0,0,0x84);
  iVar8 = 0;
  pcVar7 = &Camera_gInfo;
  do {
    iVar9 = iVar8;
    if (!bVar1) {
      iVar9 = GameSetup_gData.localCar;
    }
    *(Car_tObj **)&pcVar7->anchor = (&__Cars_gHumanRaceCarList_9__)[iVar9];
    pBVar2 = pcVar7->anchor;
    *(Car_tObj **)&pcVar7->target = (&__Cars_gHumanRaceCarList_9__)[iVar9];
    iVar9 = (pBVar2->position).y;
    iVar10 = (pBVar2->position).z;
    (pcVar7->position).x = (pBVar2->position).x;
    (pcVar7->position).y = iVar9;
    (pcVar7->position).z = iVar10;
    pBVar2 = pcVar7->anchor;
    iVar9 = (pBVar2->position).y;
    iVar10 = (pBVar2->position).z;
    (pcVar7->audioPos).x = (pBVar2->position).x;
    (pcVar7->audioPos).y = iVar9;
    (pcVar7->audioPos).z = iVar10;
    pBVar2 = pcVar7->anchor;
    pmVar5 = &pcVar7->rotation;
    pcVar7->TVHeight = 0;
    pmVar3 = &pBVar2->orientMat;
    do {
      iVar9 = pmVar3->m[1];
      iVar10 = pmVar3->m[2];
      iVar12 = pmVar3->m[3];
      pmVar5->m[0] = pmVar3->m[0];
      pmVar5->m[1] = iVar9;
      pmVar5->m[2] = iVar10;
      pmVar5->m[3] = iVar12;
      pmVar3 = (matrixtdef *)(pmVar3->m + 4);
      pmVar5 = (matrixtdef *)(pmVar5->m + 4);
    } while (pmVar3 != (matrixtdef *)((pBVar2->orientMat).m + 8));
    pmVar5->m[0] = pmVar3->m[0];
    pBVar2 = pcVar7->anchor;
    pcVar7->twist = 0;
    iVar9 = (pBVar2->position).y;
    iVar10 = (pBVar2->position).z;
    (pcVar7->wallLeft).x = (pBVar2->position).x;
    (pcVar7->wallLeft).y = iVar9;
    (pcVar7->wallLeft).z = iVar10;
    pBVar2 = pcVar7->anchor;
    iVar9 = (pBVar2->position).y;
    iVar10 = (pBVar2->position).z;
    (pcVar7->wallRight).x = (pBVar2->position).x;
    (pcVar7->wallRight).y = iVar9;
    (pcVar7->wallRight).z = iVar10;
    pcVar7->camNum = 0;
    pcVar7->circleCounter = 0;
    pcVar7->circleAngle = 0;
    *(uint *)&pcVar7->field_0x74 =
         *(uint *)&pcVar7->field_0x74 & 0xffffff20 | 0x20 | (uint)bVar1 << 7;
    pcVar7->intransition = '\0';
    pcVar7->tumbling = '\0';
    pcVar7->mode = 0xe;
    *(uint *)&pcVar7->field_0x74 = *(uint *)&pcVar7->field_0x74 & 0xf0ffffff;
    pcVar7->animNum = (&gAnimCams)[GameSetup_gData.track * 4];
    if (((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
       (((__Cars_gHumanRaceCarList_9__->carFlags & 0x200U) != 0 ||
        ((Cars_gNumHumanRaceCars == 2 && ((PTR_8010fa4c->carFlags & 0x200U) != 0)))))) {
      pcVar7->animNum = '\x01';
    }
    pBVar6 = &pcVar7->slicePos;
    ppBVar4 = local_a0;
    pcVar7->animHandle = -1;
    pcVar7->splineMode = '\0';
    pcVar7->forceFocus = FOCUS_NORMAL;
    pcVar7->focusOnAICar = -1;
    pcVar7->POInhibitor = 0x40;
    do {
      pBVar2 = ppBVar4[1];
      pBVar11 = ppBVar4[2];
      pBVar13 = ppBVar4[3];
      *(BO_tNewtonObj **)pBVar6 = *ppBVar4;
      *(BO_tNewtonObj **)&pBVar6->simRotFlag = pBVar2;
      *(BO_tNewtonObj **)&pBVar6->quadPts[0].x = pBVar11;
      *(BO_tNewtonObj **)&pBVar6->quadPts[0].y = pBVar13;
      ppBVar4 = ppBVar4 + 4;
      pBVar6 = (BWorldSm_Pos *)&pBVar6->quadPts[0].z;
    } while (ppBVar4 != apBStack32);
    *(BO_tNewtonObj **)pBVar6 = *ppBVar4;
    iVar8 = iVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (iVar8 <= (int)(uint)bVar1);
  Camera_ResetRelPos__Fi(3);
  iVar8 = __Cars_gHumanRaceCarList_9__->carInfo->carType;
  if (((iVar8 < 0x1c) && ((GameSetup_gData.sgge & 0x100U) != 0)) && (!bVar1)) {
    GameSetup_gData.carInfo[0].Camera[0] = 1;
    camera_flags_8010f560.arm.x = (&gDriverCam)[iVar8].x;
    camera_flags_8010f560.arm.y = (&gDriverCam)[iVar8].y;
    camera_flags_8010f560.arm.z = (&gDriverCam)[iVar8].z;
  }
  DAT_00000290 = 0xbe;
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

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Camera_Kill__Fv(void)

{
  bool bVar1;
  camera_info *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  bVar1 = GameSetup_gData.commMode == 1;
  pcVar2 = &Camera_gInfo;
  do {
    if ((int)pcVar2->animHandle != -1) {
      Anim_FreeHandle__Fi((int)pcVar2->animHandle);
    }
    pcVar2->animHandle = -1;
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar3 <= (int)(uint)bVar1);
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
  
  iVar1 = (&Camera_gInfo)[player].anchor[3].objAltitude;
  fixedxformz((int *)&mStack144,(&Camera_gInfo)[player].anchor[3].collision.collided);
  fixedxformx((undefined4 *)&mStack104,
              iVar1 << 1 | *(uint *)&(&Camera_gInfo)[player].field_0x74 >> 1 & 1);
  Math_fasttransmult__FP10matrixtdefN20(&mStack144,&mStack104,&mStack64);
  Math_fasttransmult__FP10matrixtdefN20
            (&mStack64,&(&Camera_gInfo)[player].rotation,&(&Camera_gInfo)[player].rotation);
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
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  BO_tNewtonObj *pBVar12;
  camera_info *pcVar13;
  
  pcVar13 = &Camera_gInfo + player;
  pBVar12 = pcVar13->anchor;
  pcVar1 = BWorldSm_UNormal__FP12BWorldSm_Pos(slicePos);
  iVar7 = pcVar1->x;
  iVar8 = pcVar1->y;
  iVar10 = pcVar1->z;
  pcVar1 = BWorldSm_UNormal__FP12BWorldSm_Pos(&pBVar12->simRoadInfo);
  iVar9 = pcVar1->y;
  iVar11 = pcVar1->z;
  uVar2 = fixedmult(iVar7,pcVar1->x);
  uVar3 = fixedmult(iVar8,iVar9);
  uVar4 = fixedmult(iVar10,iVar11);
  iVar9 = 0;
  if ((int)(uVar2 + uVar3 + uVar4) < 0xb4fd) {
    iVar5 = (&Camera_gInfo)[player].position.y;
    iVar9 = (pcVar13->anchor->position).y;
    iVar6 = (&Camera_gInfo)[player].position.z;
    iVar11 = (pcVar13->anchor->position).z;
    uVar2 = fixedmult(iVar7,(pcVar13->anchor->position).x - (&Camera_gInfo)[player].position.x);
    uVar3 = fixedmult(iVar8,iVar9 - iVar5);
    uVar4 = fixedmult(iVar10,iVar11 - iVar6);
    if (((int)(uVar2 + uVar3 + uVar4) < 1) || (iVar9 = 1, pcVar13->anchor->flightTime != 0)) {
      iVar9 = 0;
    }
  }
  return iVar9;
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
  Trk_NewSlice *pTVar1;
  BO_tNewtonObj *pBVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  BWorldSm_Pos *pBVar8;
  BWorldSm_Pos *pBVar9;
  camera_info *pcVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  coorddef *pcVar14;
  uint uVar15;
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
  int local_20;
  int local_1c;
  
  pBVar9 = &local_118;
  pBVar8 = &(&Camera_gInfo)[player].slicePos;
  do {
    uVar11 = *(undefined4 *)&pBVar8->simRotFlag;
    iVar12 = pBVar8->quadPts[0].x;
    iVar13 = pBVar8->quadPts[0].y;
    *(int *)pBVar9 = *(int *)pBVar8;
    *(undefined4 *)&pBVar9->simRotFlag = uVar11;
    pBVar9->quadPts[0].x = iVar12;
    pBVar9->quadPts[0].y = iVar13;
    pBVar8 = (BWorldSm_Pos *)&pBVar8->quadPts[0].z;
    pBVar9 = (BWorldSm_Pos *)&pBVar9->quadPts[0].z;
  } while (pBVar8 != (BWorldSm_Pos *)&(&Camera_gInfo)[player].slicePos.simSlice);
  *(int *)pBVar9 = *(int *)pBVar8;
  iVar12 = 0;
  pcVar14 = &feeler3;
  do {
    transform((int *)pcVar14,(int *)&((&Camera_gInfo)[player].anchor)->orientMat,&local_30);
    local_40.x = pos->x + local_30;
    local_40.y = pos->y + local_2c;
    local_40.z = pos->z + local_28;
    BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi(&local_40,&local_118,3);
    if (local_118.simQuad == (Trk_NewSimQuad *)0x0) {
      pTVar1 = BWorldSm_slices + (int)local_118.slice;
      local_50 = pTVar1->center[0];
      local_4c = pTVar1->center[1];
      local_48 = pTVar1->center[2];
    }
    else {
      local_50 = local_118.quadPts[0].x;
      local_4c = local_118.quadPts[0].y;
      local_48 = local_118.quadPts[0].z;
      if (((local_118.simQuad)->surface & 0xf) == 0) break;
    }
    if (((local_118.offEdge != '\0') ||
        (iVar13 = Camera_TooSteep__FiP12BWorldSm_Pos(player,&local_118), iVar13 != 0)) ||
       ((local_118.simQuad != (Trk_NewSimQuad *)0x0 &&
        ((((local_118.simQuad)->surface & 0x80) != 0 &&
         (0x38000 < local_4c - (((&Camera_gInfo)[player].anchor)->position).y)))))) break;
    iVar12 = iVar12 + 1;
    pcVar14 = pcVar14 + 1;
    if (2 < iVar12) break;
  } while( true );
  if (iVar12 == 3) {
    return;
  }
  pcVar10 = &Camera_gInfo + player;
  iVar12 = 0;
  pBVar2 = pcVar10->anchor;
  local_90.x = (pBVar2->position).x;
  local_90.y = (pBVar2->position).y;
  local_90.z = (pBVar2->position).z;
  local_70 = (pcVar10->anchor->position).x - local_40.x >> 7;
  local_68 = (pcVar10->anchor->position).z - local_40.z >> 7;
  local_6c = (pcVar10->anchor->position).y - local_40.y >> 7;
  do {
    local_90.x = local_90.x - local_70;
    local_90.y = local_90.y - local_6c;
    local_90.z = local_90.z - local_68;
    BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi(&local_90,&local_118,3);
    if (local_118.simQuad == (Trk_NewSimQuad *)0x0) {
      pTVar1 = BWorldSm_slices + (int)local_118.slice;
      local_50 = pTVar1->center[0];
      local_4c = pTVar1->center[1];
      local_48 = pTVar1->center[2];
    }
    else {
      local_50 = local_118.quadPts[0].x;
      local_4c = local_118.quadPts[0].y;
      local_48 = local_118.quadPts[0].z;
      if (((local_118.simQuad)->surface & 0xf) == 0) break;
    }
    if (((local_118.offEdge != '\0') ||
        (iVar13 = Camera_TooSteep__FiP12BWorldSm_Pos(player,&local_118), iVar13 != 0)) ||
       (((local_118.simQuad != (Trk_NewSimQuad *)0x0 &&
         ((((local_118.simQuad)->surface & 0x80) != 0 &&
          (0x38000 < local_4c - (pcVar10->anchor->position).y)))) ||
        (iVar12 = iVar12 + 1, 0x7f < iVar12)))) break;
  } while( true );
  pcVar10 = &Camera_gInfo + player;
  uVar15 = 1;
  local_70 = (pcVar10->anchor->position).x - local_90.x >> 1;
  local_6c = (pcVar10->anchor->position).y - local_90.y >> 1;
  local_68 = (pcVar10->anchor->position).z - local_90.z >> 1;
  do {
    intsincos(uVar15,&local_20,&local_1c);
    uVar3 = fixedmult(local_1c,local_70);
    local_60.x = fixedmult(local_20,local_68);
    local_60.x = uVar3 - local_60.x;
    local_60.y = local_6c;
    uVar3 = fixedmult(local_20,local_70);
    uVar4 = fixedmult(local_1c,local_68);
    local_60.x = local_90.x + local_60.x;
    local_60.y = local_90.y + local_60.y;
    local_60.z = local_90.z + uVar3 + uVar4;
    BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi(&local_60,&local_118,3);
    if (local_118.simQuad != (Trk_NewSimQuad *)0x0) {
      local_50 = local_118.quadPts[0].x;
      local_4c = local_118.quadPts[0].y;
      local_48 = local_118.quadPts[0].z;
      if (((local_118.simQuad)->surface & 0xf) != 0) goto LAB_80084400;
LAB_80084464:
      (&Camera_gInfo)[player].wallLeft.x = local_60.x;
      (&Camera_gInfo)[player].wallLeft.y = local_60.y;
      (&Camera_gInfo)[player].wallLeft.z = local_60.z;
      break;
    }
    pTVar1 = BWorldSm_slices + (int)local_118.slice;
    local_50 = pTVar1->center[0];
    local_4c = pTVar1->center[1];
    local_48 = pTVar1->center[2];
LAB_80084400:
    if (((local_118.offEdge != '\0') ||
        (iVar12 = Camera_TooSteep__FiP12BWorldSm_Pos(player,&local_118), iVar12 != 0)) ||
       ((local_118.simQuad != (Trk_NewSimQuad *)0x0 &&
        ((((local_118.simQuad)->surface & 0x80) != 0 &&
         (0x38000 < local_4c - (pcVar10->anchor->position).y)))))) goto LAB_80084464;
    uVar15 = uVar15 + 4;
  } while ((int)uVar15 < 0x400);
  uVar15 = 0xffffffff;
  do {
    intsincos(uVar15,&local_20,&local_1c);
    uVar3 = fixedmult(local_1c,local_70);
    local_60.x = fixedmult(local_20,local_68);
    local_60.x = uVar3 - local_60.x;
    local_60.y = local_6c;
    uVar3 = fixedmult(local_20,local_70);
    uVar4 = fixedmult(local_1c,local_68);
    local_60.x = local_90.x + local_60.x;
    local_60.y = local_90.y + local_60.y;
    local_60.z = local_90.z + uVar3 + uVar4;
    BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi(&local_60,&local_118,3);
    if (local_118.simQuad != (Trk_NewSimQuad *)0x0) {
      local_50 = local_118.quadPts[0].x;
      local_4c = local_118.quadPts[0].y;
      local_48 = local_118.quadPts[0].z;
      if (((local_118.simQuad)->surface & 0xf) != 0) goto LAB_800845d0;
LAB_80084634:
      (&Camera_gInfo)[player].wallRight.x = local_60.x;
      (&Camera_gInfo)[player].wallRight.y = local_60.y;
      (&Camera_gInfo)[player].wallRight.z = local_60.z;
      break;
    }
    pTVar1 = BWorldSm_slices + (int)local_118.slice;
    local_50 = pTVar1->center[0];
    local_4c = pTVar1->center[1];
    local_48 = pTVar1->center[2];
LAB_800845d0:
    if (((local_118.offEdge != '\0') ||
        (iVar12 = Camera_TooSteep__FiP12BWorldSm_Pos(player,&local_118), iVar12 != 0)) ||
       ((local_118.simQuad != (Trk_NewSimQuad *)0x0 &&
        ((((local_118.simQuad)->surface & 0x80) != 0 &&
         (0x38000 < local_4c - (((&Camera_gInfo)[player].anchor)->position).y))))))
    goto LAB_80084634;
    uVar15 = uVar15 - 4;
  } while (-0x400 < (int)uVar15);
  local_60.x = (&Camera_gInfo)[player].wallRight.x - (&Camera_gInfo)[player].wallLeft.x;
  local_60.y = ((&Camera_gInfo)[player].wallRight.y - (&Camera_gInfo)[player].wallLeft.y) + 0x8000;
  local_60.z = (&Camera_gInfo)[player].wallRight.z - (&Camera_gInfo)[player].wallLeft.z;
  Math_NormalizeVector__FP8coorddef(&local_60);
  local_90.x = local_90.x - local_40.x;
  local_78 = local_60.x;
  local_80 = -local_60.z;
  local_7c = local_60.y;
  local_90.z = local_90.z - local_40.z;
  local_90.y = local_90.y - local_40.y;
  uVar15 = fixedmult(local_90.x,local_80);
  uVar3 = fixedmult(local_90.y,local_7c);
  uVar4 = fixedmult(local_90.z,local_78);
  uVar5 = fixedmult(local_30,local_80);
  uVar6 = fixedmult(local_2c,local_7c);
  uVar7 = fixedmult(local_28,local_78);
  iVar12 = uVar15 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + 0x10000;
  if (0 < iVar12) {
    local_60.x = fixedmult(iVar12,local_80);
    local_60.y = fixedmult(iVar12,local_7c);
    uVar15 = fixedmult(iVar12,local_78);
    pos->x = pos->x + local_60.x;
    pos->y = pos->y + local_60.y;
    pos->z = pos->z + uVar15;
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
  
  pcVar1 = BWorldSm_UNormal__FP12BWorldSm_Pos(&(&Camera_gInfo)[player].slicePos);
  local_20.x = pcVar1->x;
  local_20.y = pcVar1->y;
  local_20.z = pcVar1->z;
  iVar2 = Newton_FindGroundElevationGeneral__FP8coorddefN20
                    (pos,&local_20,(&Camera_gInfo)[player].slicePos.quadPts);
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

void Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi
               (int player,coorddef *point,coorddef *pos,matrixtdef *rot,int hirez)

{
  undefined *puVar1;
  BO_tNewtonObj *pBVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  coorddef *v;
  coorddef *v_00;
  int local_38;
  undefined *local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  
  iVar7 = DAT_800558c4;
  puVar1 = PTR_DAT_800558c0;
  v_00 = (coorddef *)(rot->m + 3);
  local_38 = DAT_800558bc;
  local_34 = PTR_DAT_800558c0;
  local_30 = DAT_800558c4;
  v = (coorddef *)(rot->m + 6);
  if (point == (coorddef *)0x0) {
    pBVar2 = (&Camera_gInfo)[player].target;
    local_28 = (pBVar2->position).x;
    local_24 = (pBVar2->position).y;
    local_20 = (pBVar2->position).z;
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
  if ((*(uint *)&(&Camera_gInfo)[player].field_0x74 >> 1 & 1) != 0) {
    puVar3 = (undefined *)(rot->m[7] + 0x5333);
    if (2 < (uint)(ushort)(&Camera_gInfo)[player].mode - 2) {
      puVar3 = &DAT_00006666 + rot->m[7];
    }
    *(undefined **)(rot->m + 7) = puVar3;
  }
  if (Replay_ReplayMode == 2) {
    local_38 = (&Camera_gInfo)[player].twist;
  }
  Math_NormalizeVector__FP8coorddef(v);
  uVar4 = fixedmult(local_38,v->x);
  uVar5 = fixedmult((int)puVar1,rot->m[7]);
  uVar6 = fixedmult(iVar7,rot->m[8]);
  if ((int)(uVar4 + uVar5 + uVar6) < 1) {
    uVar4 = fixedmult(local_38,v->x);
    uVar5 = fixedmult((int)puVar1,rot->m[7]);
    uVar6 = fixedmult(iVar7,rot->m[8]);
    iVar7 = -(uVar4 + uVar5 + uVar6);
  }
  else {
    uVar4 = fixedmult(local_38,v->x);
    uVar5 = fixedmult((int)puVar1,rot->m[7]);
    uVar6 = fixedmult(iVar7,rot->m[8]);
    iVar7 = uVar4 + uVar5 + uVar6;
  }
  if (0xfd70 < iVar7) {
    local_38 = v_00->x;
    local_34 = (undefined *)rot->m[4];
    local_30 = rot->m[5];
  }
  uVar4 = fixedmult((int)local_34,rot->m[8]);
  uVar5 = fixedmult(local_30,rot->m[7]);
  rot->m[0] = uVar4 - uVar5;
  uVar4 = fixedmult(local_30,v->x);
  uVar5 = fixedmult(local_38,rot->m[8]);
  rot->m[1] = uVar4 - uVar5;
  uVar4 = fixedmult(local_38,rot->m[7]);
  uVar5 = fixedmult((int)local_34,v->x);
  rot->m[2] = uVar4 - uVar5;
  Math_NormalizeVector__FP8coorddef((coorddef *)rot);
  uVar4 = fixedmult(rot->m[7],rot->m[2]);
  uVar5 = fixedmult(rot->m[8],rot->m[1]);
  v_00->x = uVar4 - uVar5;
  uVar4 = fixedmult(rot->m[8],rot->m[0]);
  uVar5 = fixedmult(v->x,rot->m[2]);
  rot->m[4] = uVar4 - uVar5;
  uVar4 = fixedmult(v->x,rot->m[1]);
  uVar5 = fixedmult(rot->m[7],rot->m[0]);
  rot->m[5] = uVar4 - uVar5;
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

/* WARNING: Type propagation algorithm not settling */

void Camera_OpponentLookBehind__FiP8coorddefi(int player,coorddef *pos,int reset)

{
  Car_tObj *pCVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  Car_tObj **ppCVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  Car_tObj **ppCVar10;
  int iVar11;
  coorddef local_48;
  coorddef local_38;
  
  iVar11 = 0xb;
  if (reset != 0) {
    iVar11 = player * 0xc;
    pCVar1 = (&__Cars_gHumanRaceCarList_9__)[player];
    iVar7 = (pCVar1->N).orientMat.m[7];
    iVar8 = (pCVar1->N).orientMat.m[8];
    *(int *)(&lastOppVector_106 + iVar11) = (pCVar1->N).orientMat.m[6];
    *(int *)(&DAT_8013dfd4 + iVar11) = iVar7;
    *(int *)(&DAT_8013dfd8 + iVar11) = iVar8;
    return;
  }
  ppCVar6 = &__Cars_gHumanRaceCarList_9__ + player;
  pCVar1 = *ppCVar6;
  local_48.x = (pCVar1->N).orientMat.m[6];
  local_48.y = (pCVar1->N).orientMat.m[7];
  local_48.z = (pCVar1->N).orientMat.m[8];
  iVar7 = 0;
  if (0 < Cars_gNumCars) {
    ppCVar10 = &__Cars_gList_9__;
    do {
      pCVar1 = *ppCVar10;
      if (pCVar1 != *ppCVar6) {
        iVar8 = (int)(pCVar1->N).simRoadInfo.slice - (int)((*ppCVar6)->N).simRoadInfo.slice;
        if (iVar8 < 0) {
          iVar8 = -iVar8;
        }
        if ((int)(gNumSlices + ((uint)gNumSlices >> 0x1f)) >> 1 < iVar8) {
          iVar8 = gNumSlices - iVar8;
        }
        if (iVar8 < 0xb) {
          local_38.x = pos->x - (pCVar1->N).position.x;
          local_38.y = pos->y - ((*ppCVar10)->N).position.y;
          local_38.z = pos->z - ((*ppCVar10)->N).position.z;
          Math_NormalizeVector__FP8coorddef(&local_38);
          uVar2 = fixedmult(((*ppCVar6)->N).orientMat.m[6],local_38.x);
          uVar3 = fixedmult(((*ppCVar6)->N).orientMat.m[7],local_38.y);
          uVar4 = fixedmult(((*ppCVar6)->N).orientMat.m[8],local_38.z);
          uVar4 = uVar2 + uVar3 + uVar4;
          iVar5 = intarccos(uVar4);
          if (iVar5 < 1) {
            iVar5 = intarccos(uVar4);
            iVar5 = -iVar5;
          }
          else {
            iVar5 = intarccos(uVar4);
          }
          if ((iVar5 < 0x80) && (iVar8 < iVar11)) {
            local_48.x = local_38.x;
            local_48.y = local_38.y;
            local_48.z = local_38.z;
            iVar11 = iVar8;
          }
        }
      }
      iVar7 = iVar7 + 1;
      ppCVar10 = ppCVar10 + 1;
    } while (iVar7 < Cars_gNumCars);
  }
  iVar11 = player * 0xc;
  piVar9 = (int *)(&lastOppVector_106 + iVar11);
  uVar2 = fixedmult(local_48.x - *piVar9,(int)&DAT_00004ccc);
  *piVar9 = *piVar9 + uVar2;
  uVar2 = fixedmult(local_48.y - *(int *)(&DAT_8013dfd4 + iVar11),(int)&DAT_00004ccc);
  *(uint *)(&DAT_8013dfd4 + iVar11) = *(int *)(&DAT_8013dfd4 + iVar11) + uVar2;
  uVar2 = fixedmult(local_48.z - *(int *)(&DAT_8013dfd8 + iVar11),(int)&DAT_00004ccc);
  *(uint *)(&DAT_8013dfd8 + iVar11) = *(int *)(&DAT_8013dfd8 + iVar11) + uVar2;
  local_48.x = pos->x - *piVar9;
  local_48.y = pos->y - *(int *)(&DAT_8013dfd4 + iVar11);
  local_48.z = pos->z - *(int *)(&DAT_8013dfd8 + iVar11);
  switch((int)(((uint)(ushort)(&Camera_gInfo)[player].mode - 2) * 0x10000) >> 0x10) {
  case 0:
  case 1:
  case 2:
    iVar11 = -0x14ccc;
    break;
  case 5:
    local_48.y = local_48.y + -0x6666;
  case 3:
  case 4:
    iVar11 = -0x19999;
    break;
  default:
    goto switchD_80084f6c_caseD_6;
  }
  local_48.y = local_48.y + iVar11;
switchD_80084f6c_caseD_6:
  Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi
            (player,&local_48,pos,&(&Camera_gInfo)[player].rotation,1);
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
  uint uVar2;
  uint uVar3;
  uint uVar4;
  matrixtdef *pmVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_28;
  int local_24;
  int local_20;
  
  if ((*(uint *)&(&Camera_gInfo)[cviewP].field_0x74 >> 2 & 1) != 0) {
    Camera_PitchAndRoll__Fi(cviewP);
  }
  iVar6 = (&Camera_gInfo)[cviewP].position.y;
  iVar7 = (&Camera_gInfo)[cviewP].position.z;
  (cview->translation).x = (&Camera_gInfo)[cviewP].position.x;
  (cview->translation).y = iVar6;
  (cview->translation).z = iVar7;
  if ((*(uint *)&(&Camera_gInfo)[cviewP].field_0x74 >> 4 & 1) != 0) {
    Camera_CheckWallCollisions__FiP8coorddef(cviewP,(coorddef *)cview);
  }
  BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
            ((coorddef *)cview,&(&Camera_gInfo)[cviewP].slicePos,1);
  if (((&Camera_gInfo)[cviewP].slicePos.offEdge == '\0') && (1 < (&Camera_gInfo)[cviewP].mode)) {
    Camera_SetAboveGround__FiP8coorddef(cviewP,(coorddef *)cview);
  }
  if ((*(uint *)&(&Camera_gInfo)[cviewP].field_0x74 >> 3 & 1) != 0) {
    Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi
              (cviewP,(coorddef *)0x0,(coorddef *)cview,&(&Camera_gInfo)[cviewP].rotation,1);
  }
  if ((&Camera_gInfo)[cviewP].mode == 0x10) {
    Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi
              (cviewP,&gCop1Target + cviewP,(coorddef *)cview,&(&Camera_gInfo)[cviewP].rotation,1);
  }
  if ((*(uint *)&(&Camera_gInfo)[cviewP].field_0x74 >> 5 & 1) == 0) {
    Camera_OpponentLookBehind__FiP8coorddefi
              (cviewP,(coorddef *)cview,(uint)((&Input_gLookBehind)[cviewP] == 0));
  }
  pmVar5 = &cview->mrotation;
  pmVar1 = &(&Camera_gInfo)[cviewP].rotation;
  do {
    iVar6 = pmVar1->m[1];
    iVar7 = pmVar1->m[2];
    iVar8 = pmVar1->m[3];
    pmVar5->m[0] = pmVar1->m[0];
    pmVar5->m[1] = iVar6;
    pmVar5->m[2] = iVar7;
    pmVar5->m[3] = iVar8;
    pmVar1 = (matrixtdef *)(pmVar1->m + 4);
    pmVar5 = (matrixtdef *)(pmVar5->m + 4);
  } while (pmVar1 != (matrixtdef *)((&Camera_gInfo)[cviewP].rotation.m + 8));
  pmVar5->m[0] = pmVar1->m[0];
  if (GameSetup_gData.mirrorTrack != 0) {
    iVar7 = (cview->mrotation).m[2];
    (cview->mrotation).m[0] = -(cview->mrotation).m[0];
    iVar6 = (cview->mrotation).m[1];
    (cview->mrotation).m[2] = -iVar7;
    (cview->mrotation).m[1] = -iVar6;
  }
  pmVar5 = &cview->mrotationInv;
  transpose((undefined4 *)&cview->mrotation,(undefined4 *)pmVar5);
  pmVar1 = &cview->mrotationInvRaw;
  do {
    iVar6 = pmVar5->m[1];
    iVar7 = pmVar5->m[2];
    iVar8 = pmVar5->m[3];
    pmVar1->m[0] = pmVar5->m[0];
    pmVar1->m[1] = iVar6;
    pmVar1->m[2] = iVar7;
    pmVar1->m[3] = iVar8;
    pmVar5 = (matrixtdef *)(pmVar5->m + 4);
    pmVar1 = (matrixtdef *)(pmVar1->m + 4);
  } while (pmVar5 != (matrixtdef *)((cview->mrotationInv).m + 8));
  pmVar1->m[0] = pmVar5->m[0];
  uVar2 = fixedmult((cview->mrotation).m[3],(int)&DAT_0000dc00);
  uVar3 = fixedmult((cview->mrotation).m[4],(int)&DAT_0000dc00);
  uVar4 = fixedmult((cview->mrotation).m[5],(int)&DAT_0000dc00);
  (cview->mrotation).m[3] = uVar2;
  (cview->mrotation).m[4] = uVar3;
  (cview->mrotation).m[5] = uVar4;
  transpose((undefined4 *)&cview->mrotation,(undefined4 *)&cview->mrotationInv);
  local_28 = -(cview->translation).x;
  local_24 = -(cview->translation).y;
  local_20 = -(cview->translation).z;
  transform(&local_28,(int *)&cview->mrotationInv,(int *)&cview->translationInv);
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

void Camera_GetAudioViewInfo__FiP17DRender_tCalcViewPP8coorddef
               (int cviewP,DRender_tCalcView *cview,coorddef **cvel)

{
  matrixtdef *pmVar1;
  matrixtdef *pmVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((&Input_gLookBehind)[cviewP] == 0) {
    iVar3 = (&Camera_gInfo)[cviewP].position.y;
    iVar4 = (&Camera_gInfo)[cviewP].position.z;
    (cview->translation).x = (&Camera_gInfo)[cviewP].position.x;
    (cview->translation).y = iVar3;
    (cview->translation).z = iVar4;
    pmVar2 = &cview->mrotation;
    pmVar1 = &(&Camera_gInfo)[cviewP].rotation;
    do {
      iVar3 = pmVar1->m[1];
      iVar4 = pmVar1->m[2];
      iVar5 = pmVar1->m[3];
      pmVar2->m[0] = pmVar1->m[0];
      pmVar2->m[1] = iVar3;
      pmVar2->m[2] = iVar4;
      pmVar2->m[3] = iVar5;
      pmVar1 = (matrixtdef *)(pmVar1->m + 4);
      pmVar2 = (matrixtdef *)(pmVar2->m + 4);
    } while (pmVar1 != (matrixtdef *)((&Camera_gInfo)[cviewP].rotation.m + 8));
    pmVar2->m[0] = pmVar1->m[0];
  }
  else {
    pmVar1 = &(&Camera_gInfo)[cviewP].rotation;
    if ((*(uint *)&(&Camera_gInfo)[cviewP].field_0x74 >> 5 & 1) == 0) {
      if ((*(uint *)&(&Camera_gInfo)[cviewP].field_0x74 >> 3 & 1) == 0) {
        iVar3 = (&Camera_gInfo)[cviewP].audioPos.y;
        iVar4 = (&Camera_gInfo)[cviewP].audioPos.z;
        (cview->translation).x = (&Camera_gInfo)[cviewP].audioPos.x;
        (cview->translation).y = iVar3;
        (cview->translation).z = iVar4;
        Camera_LookBack__FP10matrixtdefT0(&(&Camera_gInfo)[cviewP].rotation,&cview->mrotation);
      }
      else {
        iVar3 = (&Camera_gInfo)[cviewP].audioPos.y;
        iVar4 = (&Camera_gInfo)[cviewP].audioPos.z;
        (cview->translation).x = (&Camera_gInfo)[cviewP].audioPos.x;
        (cview->translation).y = iVar3;
        (cview->translation).z = iVar4;
        Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi
                  (cviewP,(coorddef *)0x0,(coorddef *)cview,&cview->mrotation,0);
      }
    }
    else {
      iVar3 = (&Camera_gInfo)[cviewP].position.y;
      iVar4 = (&Camera_gInfo)[cviewP].position.z;
      (cview->translation).x = (&Camera_gInfo)[cviewP].position.x;
      (cview->translation).y = iVar3;
      (cview->translation).z = iVar4;
      pmVar2 = &cview->mrotation;
      do {
        iVar3 = pmVar1->m[1];
        iVar4 = pmVar1->m[2];
        iVar5 = pmVar1->m[3];
        pmVar2->m[0] = pmVar1->m[0];
        pmVar2->m[1] = iVar3;
        pmVar2->m[2] = iVar4;
        pmVar2->m[3] = iVar5;
        pmVar1 = (matrixtdef *)(pmVar1->m + 4);
        pmVar2 = (matrixtdef *)(pmVar2->m + 4);
      } while (pmVar1 != (matrixtdef *)((&Camera_gInfo)[cviewP].rotation.m + 8));
      pmVar2->m[0] = pmVar1->m[0];
    }
  }
  switch((&Camera_gInfo)[cviewP].mode) {
  default:
    *cvel = &((&Camera_gInfo)[cviewP].anchor)->linearVel;
    break;
  case 0xc:
  case 0xe:
    *cvel = (coorddef *)0x0;
  }
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
  if (((((&__Cars_gHumanRaceCarList_9__)[cviewP]->carFlags & 1U) == 0) ||
      (((&__Cars_gHumanRaceCarList_9__)[cviewP]->stats).finishType != 2)) &&
     (((&__Cars_gHumanRaceCarList_9__)[cviewP]->pullOver == 0 ||
      (((&__Cars_gHumanRaceCarList_9__)[cviewP]->stats).finishType == 3)))) {
    return (int)(&Camera_gInfo)[cviewP].mode;
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
  
  InBetween = 0;
  if (((&Camera_gInfo)[cviewP].field_0x74 & 1) == 0) {
    if ((uint)(ushort)(&Camera_gInfo)[cviewP].mode - 0xb < 2) {
      DAT_00000290 = 0xbe;
      TrsProj_SetProjection__Fiiii(0,0,0x140,0xf0);
    }
    if (5 < (uint)(ushort)(&Camera_gInfo)[cviewP].mode - 2) {
      Camera_ResetRelPos__Fi(cviewP + 1);
    }
    if (-1 < (int)(&Camera_gInfo)[cviewP].animHandle) {
      Anim_FreeHandle__Fi((int)(&Camera_gInfo)[cviewP].animHandle);
      (&Camera_gInfo)[cviewP].animHandle = -1;
    }
    (&Camera_gInfo)[cviewP].mode = (short)mode;
    if (0x13 < (short)mode) {
      (&Camera_gInfo)[cviewP].mode = *(short *)GameSetup_gData.carInfo[cviewP].Camera;
    }
    if ((&Camera_gInfo)[cviewP].mode == 0xb) {
      Camera_SetSplineCam__Fi(cviewP);
    }
    (&Camera_gInfo)[cviewP].intransition = '2';
    iVar9 = (int)(&Camera_gInfo)[cviewP].mode;
    uVar2 = *(uint *)&(&Camera_gInfo)[cviewP].field_0x74;
    uVar3 = ((&Camera_gFlags)[iVar9].field_0xc & 1) << 1;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 = uVar2 & 0xfffffffd | uVar3;
    uVar4 = ((&Camera_gFlags)[iVar9].field_0xc & 2) << 1;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 = uVar2 & 0xfffffff9 | uVar3 | uVar4;
    uVar5 = ((&Camera_gFlags)[iVar9].field_0xc & 4) << 1;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 = uVar2 & 0xfffffff1 | uVar3 | uVar4 | uVar5;
    uVar6 = ((&Camera_gFlags)[iVar9].field_0xc & 8) << 1;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 =
         uVar2 & 0xffffffe1 | uVar3 | uVar4 | uVar5 | uVar6;
    uVar7 = ((&Camera_gFlags)[iVar9].field_0xc & 0x10) << 1;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 =
         uVar2 & 0xffffffc1 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
    uVar8 = ((&Camera_gFlags)[iVar9].field_0xc & 0x20) << 1;
    sVar1 = (&Camera_gInfo)[cviewP].mode;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 =
         uVar2 & 0xffffff81 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 =
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
  
  if (((&Camera_gInfo)[cviewP].mode != 0xe) && (((&Camera_gInfo)[cviewP].field_0x74 & 1) == 0)) {
    if ((uint)(ushort)(&Camera_gInfo)[cviewP].mode - 0xb < 2) {
      DAT_00000290 = 0xbe;
      TrsProj_SetProjection__Fiiii(0,0,0x140,0xf0);
    }
    if (5 < (uint)(ushort)(&Camera_gInfo)[cviewP].mode - 2) {
      Camera_ResetRelPos__Fi(cviewP + 1);
    }
    if (-1 < (int)(&Camera_gInfo)[cviewP].animHandle) {
      Anim_FreeHandle__Fi((int)(&Camera_gInfo)[cviewP].animHandle);
      (&Camera_gInfo)[cviewP].animHandle = -1;
    }
    if ((byte)(&Camera_gInfo)[cviewP].field_0x74 >> 7 == 0) {
      if (((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
         (((__Cars_gHumanRaceCarList_9__->carFlags & 0x200U) != 0 ||
          ((Cars_gNumHumanRaceCars == 2 && ((PTR_8010fa4c->carFlags & 0x200U) != 0)))))) {
        uVar3 = (uint)(ushort)(&Camera_gInfo)[cviewP].camNum + 1;
        (&Camera_gInfo)[cviewP].camNum = (short)uVar3;
        (&Camera_gInfo)[cviewP].mode =
             *(short *)(GameSetup_gData.carInfo[0].Camera + cviewP * 0x2d + (uVar3 & 3));
      }
      else {
        uVar2 = (&Camera_gInfo)[cviewP].camNum + 1;
        iVar4 = (uint)uVar2 << 0x10;
        iVar11 = iVar4 >> 0x10;
        (&Camera_gInfo)[cviewP].camNum = uVar2;
        (&Camera_gInfo)[cviewP].mode =
             *(short *)((int)GameSetup_gData.carInfo[cviewP].Camera +
                       ((iVar11 + ((iVar11 / 3 + (iVar11 >> 0x1f)) - (iVar4 >> 0x1f)) * -3) *
                        0x10000 >> 0xe));
      }
    }
    else {
      uVar2 = (&Camera_gInfo)[cviewP].camNum + 1;
      iVar4 = (uint)uVar2 << 0x10;
      iVar11 = iVar4 >> 0x10;
      (&Camera_gInfo)[cviewP].camNum = uVar2;
      (&Camera_gInfo)[cviewP].mode =
           *(short *)((int)&gSplitCameras +
                     ((iVar11 + ((iVar11 / 3 + (iVar11 >> 0x1f)) - (iVar4 >> 0x1f)) * -3) * 0x10000
                     >> 0xe));
    }
    if (0x13 < (&Camera_gInfo)[cviewP].mode) {
      (&Camera_gInfo)[cviewP].mode = *(short *)GameSetup_gData.carInfo[cviewP].Camera;
    }
    if ((&Camera_gInfo)[cviewP].mode == 0xb) {
      Camera_SetSplineCam__Fi(cviewP);
    }
    (&Camera_gInfo)[cviewP].intransition = '2';
    iVar4 = (int)(&Camera_gInfo)[cviewP].mode;
    uVar3 = *(uint *)&(&Camera_gInfo)[cviewP].field_0x74;
    uVar5 = ((&Camera_gFlags)[iVar4].field_0xc & 1) << 1;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 = uVar3 & 0xfffffffd | uVar5;
    uVar6 = ((&Camera_gFlags)[iVar4].field_0xc & 2) << 1;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 = uVar3 & 0xfffffff9 | uVar5 | uVar6;
    uVar7 = ((&Camera_gFlags)[iVar4].field_0xc & 4) << 1;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 = uVar3 & 0xfffffff1 | uVar5 | uVar6 | uVar7;
    uVar8 = ((&Camera_gFlags)[iVar4].field_0xc & 8) << 1;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 =
         uVar3 & 0xffffffe1 | uVar5 | uVar6 | uVar7 | uVar8;
    uVar9 = ((&Camera_gFlags)[iVar4].field_0xc & 0x10) << 1;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 =
         uVar3 & 0xffffffc1 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9;
    uVar10 = ((&Camera_gFlags)[iVar4].field_0xc & 0x20) << 1;
    sVar1 = (&Camera_gInfo)[cviewP].mode;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 =
         uVar3 & 0xffffff81 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 =
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
  
  if (((&Camera_gInfo)[cviewP].field_0x74 & 1) == 0) {
    Camera_SetMode__Fii(cviewP,(uint)(byte)ptr->mode);
    uVar2 = *(uint *)&(&Camera_gInfo)[cviewP].field_0x74;
    uVar1 = *(uint *)ptr >> 5 & 8;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 = uVar2 & 0xfffffff7 | uVar1;
    *(uint *)&(&Camera_gInfo)[cviewP].field_0x74 =
         uVar2 & 0xf9fffff7 | uVar1 | (*(uint *)ptr >> 9 & 3) << 0x19;
    (&Camera_gInfo)[cviewP].splineMode = (byte)(*(uint *)ptr >> 0xb) & 7;
    DAT_00000290 = (int)ptr->fov;
    iVar3 = (ptr->pos).y;
    iVar4 = (ptr->pos).z;
    (&Camera_gInfo)[cviewP].position.x = (ptr->pos).x;
    (&Camera_gInfo)[cviewP].position.y = iVar3;
    (&Camera_gInfo)[cviewP].position.z = iVar4;
    (&Camera_gInfo)[cviewP].TVHeight = ptr->height;
    EulerToMat__FP10matrixtdefiii
              (&(&Camera_gInfo)[cviewP].rotation,(int)(ptr->euler).x,(int)(ptr->euler).y,
               (int)(ptr->euler).z);
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
    Camera_gInfo.relpos.x = ((Camera_gInfo.anchor)->orientMat).m[6] * -4;
    Camera_gInfo.relpos.y = ((Camera_gInfo.anchor)->orientMat).m[7] * -4;
    Camera_gInfo.relpos.z = ((Camera_gInfo.anchor)->orientMat).m[8] * -4;
  }
  if ((bitMask & 2U) != 0) {
    camera_info_8010f3bc.relpos.x = ((camera_info_8010f3bc.anchor)->orientMat).m[6] * -4;
    camera_info_8010f3bc.relpos.y = ((camera_info_8010f3bc.anchor)->orientMat).m[7] * -4;
    camera_info_8010f3bc.relpos.z = ((camera_info_8010f3bc.anchor)->orientMat).m[8] * -4;
  }
  return;
}




