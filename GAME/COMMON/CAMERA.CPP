#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 964
	/* end block 2 */
	// End Line: 965

	/* begin block 3 */
		// Start line: 964
	/* end block 3 */
	// End Line: 965

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

	/* begin block 2 */
		// Start line: 1117
	/* end block 2 */
	// End Line: 1118

	/* begin block 3 */
		// Start line: 1233
	/* end block 3 */
	// End Line: 1234

	/* begin block 4 */
		// Start line: 1233
	/* end block 4 */
	// End Line: 1234

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

	/* begin block 2 */
		// Start line: 1316
	/* end block 2 */
	// End Line: 1317

	/* begin block 3 */
		// Start line: 1331
	/* end block 3 */
	// End Line: 1332

	/* begin block 4 */
		// Start line: 1331
	/* end block 4 */
	// End Line: 1332

	/* begin block 5 */
		// Start line: 1337
	/* end block 5 */
	// End Line: 1338

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

	/* begin block 2 */
		// Start line: 1371
	/* end block 2 */
	// End Line: 1372

	/* begin block 3 */
		// Start line: 1375
	/* end block 3 */
	// End Line: 1376

	/* begin block 4 */
		// Start line: 1375
	/* end block 4 */
	// End Line: 1376

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
  pvVar2 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos
                     ((BWorldSm_Pos *)(&Camera_gInfo.forceFocus + player * 0x44));
  if ((pvVar2 != (void *)0x0) ||
     (pvVar2 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos
                         (&(&Camera_gInfo.anchor)[player * 0x44]->simRoadInfo),
     pvVar2 != (void *)0x0)) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = player * 0x110;
    pcVar3 = BWorldSm_UNormal__FP12BWorldSm_Pos
                       ((BWorldSm_Pos *)(&Camera_gInfo.forceFocus + player * 0x44));
    local_38.x = pcVar3->x;
    local_38.y = pcVar3->y;
    local_38.z = pcVar3->z;
    local_28.x = ((coorddef *)((int)&Camera_gInfo.position + iVar5))->x;
    local_28.y = *(int *)((int)&Camera_gInfo.position + iVar5 + 4);
    local_28.z = *(int *)((int)&Camera_gInfo.position + iVar5 + 8);
    iVar4 = Newton_FindGroundElevationGeneral__FP8coorddefN20
                      (&local_28,&local_38,(coorddef *)(&Camera_gInfo.POInhibitor + player * 0x44));
    iVar5 = GameSetup_gData.track;
    if (0xf < GameSetup_gData.track) {
      iVar5 = GameSetup_gData.track + -7;
    }
    iVar4 = (gTunnelCamHeight[iVar5] - ((&Camera_gInfo.anchor)[player * 0x44]->position).y) + iVar4;
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

	/* begin block 2 */
		// Start line: 1468
	/* end block 2 */
	// End Line: 1469

	/* begin block 3 */
		// Start line: 1477
	/* end block 3 */
	// End Line: 1478

	/* begin block 4 */
		// Start line: 1477
	/* end block 4 */
	// End Line: 1478

void Camera_UpdateCollisionCam__Fi(int player)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  BO_tNewtonObj *pBVar4;
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
    iVar2 = player * 0x110;
    if (((&Camera_gInfo.tracking)[iVar2] & 1U) != 0) {
      local_38 = -DAT_800558ac;
    }
    transform(&local_40,(int *)&(&Camera_gInfo.anchor)[player * 0x44]->roadMatrix,&local_30);
    Camera_TunnelLimit__FiPi(player,&local_2c);
    local_20 = ((coorddef *)((int)&Camera_gInfo.relpos + iVar2))->x;
    local_1c = *(int *)((int)&Camera_gInfo.relpos + iVar2 + 4);
    local_18 = *(int *)((int)&Camera_gInfo.relpos + iVar2 + 8);
    uVar3 = fixedmult(local_30 - local_20,0x51e);
    ((coorddef *)((int)&Camera_gInfo.relpos + iVar2))->x = local_20 + uVar3;
    uVar3 = fixedmult(local_2c - local_1c,0x51e);
    *(int *)((int)&Camera_gInfo.relpos + iVar2 + 4) = local_1c + uVar3;
    uVar3 = fixedmult(local_28 - local_18,0x51e);
    pBVar4 = (&Camera_gInfo.anchor)[player * 0x44];
    *(int *)((int)&Camera_gInfo.relpos + iVar2 + 8) = local_18 + uVar3;
    ((coorddef *)((int)&Camera_gInfo.position + iVar2))->x =
         (pBVar4->position).x + ((coorddef *)((int)&Camera_gInfo.relpos + iVar2))->x;
    *(int *)((int)&Camera_gInfo.position + iVar2 + 4) =
         (pBVar4->position).y + *(int *)((int)&Camera_gInfo.relpos + iVar2 + 4);
    cVar1 = (&Camera_gInfo.jostling)[iVar2];
    *(int *)((int)&Camera_gInfo.position + iVar2 + 8) =
         (pBVar4->position).z + *(int *)((int)&Camera_gInfo.relpos + iVar2 + 8);
    if (cVar1 == '\0') {
      (&Camera_gInfo.pitch)[iVar2] = '2';
    }
    *(uint *)(&Camera_gInfo.modechange + iVar2) =
         *(uint *)(&Camera_gInfo.modechange + iVar2) & 0xfffffffb | 0x7a;
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

	/* begin block 2 */
		// Start line: 1623
	/* end block 2 */
	// End Line: 1624

	/* begin block 3 */
		// Start line: 1626
	/* end block 3 */
	// End Line: 1627

	/* begin block 4 */
		// Start line: 1626
	/* end block 4 */
	// End Line: 1627

void Camera_UpdateSimpleCam__Fi(int player)

{
  int iVar1;
  BO_tNewtonObj *pBVar2;
  BO_tNewtonObj **ppBVar3;
  int iVar4;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_28;
  int local_24;
  int local_20;
  
  iVar4 = player * 0x110;
  ppBVar3 = &Camera_gInfo.anchor + player * 0x44;
  iVar1 = (int)(&Camera_gInfo.mode)[player * 0x88] * 0x10;
  local_38 = ((coorddef *)((int)&Camera_gFlags[0].arm + iVar1))->x;
  local_34 = *(undefined4 *)((int)&Camera_gFlags[0].arm + iVar1 + 4);
  local_30 = *(undefined4 *)((int)&Camera_gFlags[0].arm + iVar1 + 8);
  transform(&local_38,(int *)&(*ppBVar3)->orientMat,&local_28);
  Camera_TunnelLimit__FiPi(player,&local_24);
  pBVar2 = *ppBVar3;
  ((coorddef *)((int)&Camera_gInfo.position + iVar4))->x = ((*ppBVar3)->position).x + local_28;
  *(int *)((int)&Camera_gInfo.position + iVar4 + 4) = (pBVar2->position).y + local_24;
  *(int *)((int)&Camera_gInfo.position + iVar4 + 8) = (pBVar2->position).z + local_20;
  Camera_LookBack__FP10matrixtdefT0
            (&pBVar2->orientMat,(matrixtdef *)((int)&Camera_gInfo.rotation + iVar4));
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

	/* begin block 2 */
		// Start line: 1679
	/* end block 2 */
	// End Line: 1680

	/* begin block 3 */
		// Start line: 1683
	/* end block 3 */
	// End Line: 1684

	/* begin block 4 */
		// Start line: 1683
	/* end block 4 */
	// End Line: 1684

void Camera_UpdateBumperCam__Fi(int player)

{
  bool bVar1;
  int iVar2;
  matrixtdef *pmVar3;
  BO_tNewtonObj *pBVar4;
  matrixtdef *pmVar5;
  int iVar6;
  BO_tNewtonObj **ppBVar7;
  int iVar8;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  
  bVar1 = false;
  iVar8 = player * 0x110;
  ppBVar7 = &Camera_gInfo.anchor + player * 0x44;
  iVar2 = (int)(&Camera_gInfo.mode)[player * 0x88] * 0x10;
  local_38 = ((coorddef *)((int)&Camera_gFlags[0].arm + iVar2))->x;
  local_34 = *(undefined4 *)((int)&Camera_gFlags[0].arm + iVar2 + 4);
  local_30 = *(int *)((int)&Camera_gFlags[0].arm + iVar2 + 8);
  if ((*(uint *)(&Camera_gInfo.modechange + iVar8) >> 5 & 1) == 0) {
    bVar1 = (&Input_gLookBehind)[player] != 0;
  }
  if (bVar1) {
    transform(&local_38,(int *)&(*ppBVar7)->orientMat,&local_28);
    pBVar4 = *ppBVar7;
    ((coorddef *)((int)&Camera_gInfo.audioPos + iVar8))->x = ((*ppBVar7)->position).x + local_28;
    *(int *)((int)&Camera_gInfo.audioPos + iVar8 + 4) = (pBVar4->position).y + local_24;
    *(int *)((int)&Camera_gInfo.audioPos + iVar8 + 8) = (pBVar4->position).z + local_20;
    local_30 = -local_30;
  }
  transform(&local_38,(int *)&(*ppBVar7)->orientMat,&local_28);
  pBVar4 = *ppBVar7;
  ((coorddef *)((int)&Camera_gInfo.position + iVar8))->x = ((*ppBVar7)->position).x + local_28;
  *(int *)((int)&Camera_gInfo.position + iVar8 + 4) = (pBVar4->position).y + local_24;
  *(int *)((int)&Camera_gInfo.position + iVar8 + 8) = (pBVar4->position).z + local_20;
  if (bVar1) {
    Camera_LookBack__FP10matrixtdefT0
              (&pBVar4->orientMat,(matrixtdef *)((int)&Camera_gInfo.rotation + iVar8));
  }
  else {
    pBVar4 = *ppBVar7;
    pmVar5 = (matrixtdef *)((int)&Camera_gInfo.rotation + iVar8);
    pmVar3 = &pBVar4->orientMat;
    do {
      iVar2 = pmVar3->m[1];
      iVar8 = pmVar3->m[2];
      iVar6 = pmVar3->m[3];
      pmVar5->m[0] = pmVar3->m[0];
      pmVar5->m[1] = iVar2;
      pmVar5->m[2] = iVar8;
      pmVar5->m[3] = iVar6;
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

	/* begin block 2 */
		// Start line: 1757
	/* end block 2 */
	// End Line: 1758

	/* begin block 3 */
		// Start line: 1766
	/* end block 3 */
	// End Line: 1767

	/* begin block 4 */
		// Start line: 1766
	/* end block 4 */
	// End Line: 1767

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
  BO_tNewtonObj **ppBVar11;
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
  iVar4 = (int)(&Camera_gInfo.mode)[player * 0x88] * 0x10;
  local_50 = ((coorddef *)((int)&Camera_gFlags[0].arm + iVar4))->x;
  local_4c = *(int *)((int)&Camera_gFlags[0].arm + iVar4 + 4);
  local_48 = *(int *)((int)&Camera_gFlags[0].arm + iVar4 + 8);
  pBVar9 = (&Camera_gInfo.anchor)[player * 0x44];
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
    transform(&local_50,(int *)&(&Camera_gInfo.anchor)[player * 0x44]->orientMat,
              (int *)((int)&Camera_gInfo.relpos + player * 0x110));
  }
  iVar5 = (int)((&Camera_gInfo.anchor)[player * 0x44]->simRoadInfo).slice;
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
    iVar4 = player * 0x110;
    transform(&local_50,(int *)&(&Camera_gInfo.anchor)[player * 0x44]->orientMat,&local_40);
    Camera_TunnelLimit__FiPi(player,&local_3c);
    local_30 = ((coorddef *)((int)&Camera_gInfo.relpos + iVar4))->x;
    local_2c = *(int *)((int)&Camera_gInfo.relpos + iVar4 + 4);
    local_28 = *(int *)((int)&Camera_gInfo.relpos + iVar4 + 8);
    if ((&Camera_gInfo.pitch)[iVar4] != '\0') {
      (&Camera_gInfo.pitch)[iVar4] = (&Camera_gInfo.pitch)[iVar4] + -1;
      puVar13 = &DAT_00001999;
      puVar12 = &DAT_00001999;
    }
    uVar7 = fixedmult(local_40 - local_30,(int)puVar12);
    ((coorddef *)((int)&Camera_gInfo.relpos + iVar4))->x = local_30 + uVar7;
    uVar7 = fixedmult(local_3c - local_2c,(int)puVar13);
    *(int *)((int)&Camera_gInfo.relpos + iVar4 + 4) = local_2c + uVar7;
    uVar7 = fixedmult(local_38 - local_28,(int)puVar12);
    cVar1 = (&Camera_gInfo.pitch)[iVar4];
    *(int *)((int)&Camera_gInfo.relpos + iVar4 + 8) = local_28 + uVar7;
    if ((cVar1 == '\0') &&
       (uVar7 = Math_VectorLength__FP8coorddef((coorddef *)((int)&Camera_gInfo.relpos + iVar4)),
       (int)uVar7 < 0x4f0a3)) {
      iVar5 = fixeddiv((uint)&DAT_0004f0a3,uVar7);
      uVar7 = fixedmult(iVar5,((coorddef *)((int)&Camera_gInfo.relpos + iVar4))->x);
      iVar8 = *(int *)((int)&Camera_gInfo.relpos + iVar4 + 4);
      ((coorddef *)((int)&Camera_gInfo.relpos + iVar4))->x = uVar7;
      uVar7 = fixedmult(iVar5,iVar8);
      iVar8 = *(int *)((int)&Camera_gInfo.relpos + iVar4 + 8);
      *(uint *)((int)&Camera_gInfo.relpos + iVar4 + 4) = uVar7;
      uVar7 = fixedmult(iVar5,iVar8);
      *(uint *)((int)&Camera_gInfo.relpos + iVar4 + 8) = uVar7;
    }
    iVar4 = player * 0x110;
    pBVar9 = (&Camera_gInfo.anchor)[player * 0x44];
    ((coorddef *)((int)&Camera_gInfo.position + iVar4))->x =
         ((&Camera_gInfo.anchor)[player * 0x44]->position).x +
         ((coorddef *)((int)&Camera_gInfo.relpos + iVar4))->x;
    *(int *)((int)&Camera_gInfo.position + iVar4 + 4) =
         (pBVar9->position).y + *(int *)((int)&Camera_gInfo.relpos + iVar4 + 4);
    *(int *)((int)&Camera_gInfo.position + iVar4 + 8) =
         (pBVar9->position).z + *(int *)((int)&Camera_gInfo.relpos + iVar4 + 8);
  }
  else {
    iVar4 = player * 0x110;
    ppBVar11 = &Camera_gInfo.anchor + player * 0x44;
    transform(&local_50,(int *)&(*ppBVar11)->orientMat,&local_40);
    pBVar9 = *ppBVar11;
    ((coorddef *)((int)&Camera_gInfo.audioPos + iVar4))->x = ((*ppBVar11)->position).x + local_40;
    *(int *)((int)&Camera_gInfo.audioPos + iVar4 + 4) = (pBVar9->position).y + local_3c;
    *(int *)((int)&Camera_gInfo.audioPos + iVar4 + 8) = (pBVar9->position).z + local_38;
    local_48 = -local_48;
    transform(&local_50,(int *)&(*ppBVar11)->orientMat,&local_40);
    Camera_TunnelLimit__FiPi(player,&local_3c);
    pBVar9 = *ppBVar11;
    ((coorddef *)((int)&Camera_gInfo.position + iVar4))->x = ((*ppBVar11)->position).x + local_40;
    *(int *)((int)&Camera_gInfo.position + iVar4 + 4) = (pBVar9->position).y + local_3c;
    *(int *)((int)&Camera_gInfo.position + iVar4 + 8) = (pBVar9->position).z + local_38;
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

	/* begin block 2 */
		// Start line: 2001
	/* end block 2 */
	// End Line: 2002

	/* begin block 3 */
		// Start line: 2004
	/* end block 3 */
	// End Line: 2005

	/* begin block 4 */
		// Start line: 2004
	/* end block 4 */
	// End Line: 2005

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
  BO_tNewtonObj **ppBVar11;
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
  iVar3 = (int)(&Camera_gInfo.mode)[player * 0x88] * 0x10;
  local_50 = ((coorddef *)((int)&Camera_gFlags[0].arm + iVar3))->x;
  local_4c = *(undefined **)((int)&Camera_gFlags[0].arm + iVar3 + 4);
  local_48 = *(int *)((int)&Camera_gFlags[0].arm + iVar3 + 8);
  pBVar12 = (&Camera_gInfo.anchor)[player * 0x44];
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
    transform(&local_50,(int *)&(&Camera_gInfo.anchor)[player * 0x44]->orientMat,
              (int *)((int)&Camera_gInfo.relpos + player * 0x110));
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
  iVar4 = (int)((&Camera_gInfo.anchor)[player * 0x44]->simRoadInfo).slice;
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
      puVar7 = &LAB_00014000;
    }
    if ((int)puVar7 < 0x4000) {
      puVar7 = (undefined *)0x4000;
      goto LAB_800817f8;
    }
    puVar7 = &LAB_00014000;
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
    iVar3 = player * 0x110;
    transform(&local_50,(int *)&(&Camera_gInfo.anchor)[player * 0x44]->orientMat,&local_40);
    Camera_TunnelLimit__FiPi(player,&local_3c);
    local_30 = ((coorddef *)((int)&Camera_gInfo.relpos + iVar3))->x;
    local_2c = *(int *)((int)&Camera_gInfo.relpos + iVar3 + 4);
    local_28 = *(int *)((int)&Camera_gInfo.relpos + iVar3 + 8);
    if ((&Camera_gInfo.pitch)[iVar3] != '\0') {
      (&Camera_gInfo.pitch)[iVar3] = (&Camera_gInfo.pitch)[iVar3] + -1;
      puVar13 = &DAT_00001999;
      puVar10 = &DAT_00001999;
    }
    uVar8 = fixedmult(local_40 - local_30,(int)puVar10);
    ((coorddef *)((int)&Camera_gInfo.relpos + iVar3))->x = local_30 + uVar8;
    uVar8 = fixedmult(local_3c - local_2c,(int)puVar13);
    *(int *)((int)&Camera_gInfo.relpos + iVar3 + 4) = local_2c + uVar8;
    uVar8 = fixedmult(local_38 - local_28,(int)puVar10);
    cVar1 = (&Camera_gInfo.pitch)[iVar3];
    *(int *)((int)&Camera_gInfo.relpos + iVar3 + 8) = local_28 + uVar8;
    if ((cVar1 == '\0') &&
       (uVar8 = Math_VectorLength__FP8coorddef((coorddef *)((int)&Camera_gInfo.relpos + iVar3)),
       (int)uVar8 < 0x651eb)) {
      iVar4 = fixeddiv((uint)&DAT_000651eb,uVar8);
      uVar8 = fixedmult(iVar4,((coorddef *)((int)&Camera_gInfo.relpos + iVar3))->x);
      iVar6 = *(int *)((int)&Camera_gInfo.relpos + iVar3 + 4);
      ((coorddef *)((int)&Camera_gInfo.relpos + iVar3))->x = uVar8;
      uVar8 = fixedmult(iVar4,iVar6);
      iVar6 = *(int *)((int)&Camera_gInfo.relpos + iVar3 + 8);
      *(uint *)((int)&Camera_gInfo.relpos + iVar3 + 4) = uVar8;
      uVar8 = fixedmult(iVar4,iVar6);
      *(uint *)((int)&Camera_gInfo.relpos + iVar3 + 8) = uVar8;
    }
    iVar3 = player * 0x110;
    pBVar12 = (&Camera_gInfo.anchor)[player * 0x44];
    ((coorddef *)((int)&Camera_gInfo.position + iVar3))->x =
         ((&Camera_gInfo.anchor)[player * 0x44]->position).x +
         ((coorddef *)((int)&Camera_gInfo.relpos + iVar3))->x;
    *(int *)((int)&Camera_gInfo.position + iVar3 + 4) =
         (pBVar12->position).y + *(int *)((int)&Camera_gInfo.relpos + iVar3 + 4);
    *(int *)((int)&Camera_gInfo.position + iVar3 + 8) =
         (pBVar12->position).z + *(int *)((int)&Camera_gInfo.relpos + iVar3 + 8);
  }
  else {
    iVar3 = player * 0x110;
    ppBVar11 = &Camera_gInfo.anchor + player * 0x44;
    transform(&local_50,(int *)&(*ppBVar11)->orientMat,&local_40);
    pBVar12 = *ppBVar11;
    ((coorddef *)((int)&Camera_gInfo.audioPos + iVar3))->x = ((*ppBVar11)->position).x + local_40;
    *(int *)((int)&Camera_gInfo.audioPos + iVar3 + 4) = (pBVar12->position).y + local_3c;
    *(int *)((int)&Camera_gInfo.audioPos + iVar3 + 8) = (pBVar12->position).z + local_38;
    local_48 = -local_48;
    transform(&local_50,(int *)&(*ppBVar11)->orientMat,&local_40);
    Camera_TunnelLimit__FiPi(player,&local_3c);
    pBVar12 = *ppBVar11;
    ((coorddef *)((int)&Camera_gInfo.position + iVar3))->x = ((*ppBVar11)->position).x + local_40;
    *(int *)((int)&Camera_gInfo.position + iVar3 + 4) = (pBVar12->position).y + local_3c;
    *(int *)((int)&Camera_gInfo.position + iVar3 + 8) = (pBVar12->position).z + local_38;
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

	/* begin block 2 */
		// Start line: 2270
	/* end block 2 */
	// End Line: 2271

	/* begin block 3 */
		// Start line: 2273
	/* end block 3 */
	// End Line: 2274

	/* begin block 4 */
		// Start line: 2273
	/* end block 4 */
	// End Line: 2274

void Camera_UpdateCircleCam__Fi(int player)

{
  short sVar1;
  int iVar2;
  int iVar3;
  BO_tNewtonObj *pBVar4;
  uint uVar5;
  BO_tNewtonObj **ppBVar6;
  uint local_48;
  int local_44;
  uint local_40;
  int local_38;
  int local_34;
  int local_30;
  undefined *local_28 [4];
  int local_18;
  int local_14;
  
  local_28[0] = PTR_s_SimpleMem_800558b0;
  local_28[1] = PTR_LAB_800558b4;
  local_28[2] = PTR_DAT_800558b8;
  if ((((simVar.quickPauseSim == 0) || (Replay_ReplayInterface.changeCamera != 0)) &&
      (InBetween == 0)) && (simVar.pauseSim == 0)) {
    iVar2 = player * 0x110;
    sVar1 = *(short *)(&Camera_gInfo.checkcollisions + iVar2) + 1;
    *(short *)(&Camera_gInfo.checkcollisions + iVar2) = sVar1;
    intsincos((int)sVar1,&local_18,&local_14);
    local_48 = fixedmult((int)&LAB_00048000,local_14);
    local_40 = fixedmult(0x60000,local_18);
    if (((int)*(short *)(&Camera_gInfo.checkcollisions + iVar2) + 0x100U & 0x1ff) == 0) {
      *(short *)(&Camera_gInfo.checkwalls + iVar2) =
           *(short *)(&Camera_gInfo.checkwalls + iVar2) + 1;
    }
    uVar5 = (int)*(short *)(&Camera_gInfo.checkcollisions + iVar2) - 0x80;
    if ((uVar5 & 0x1ff) < 0x80) {
      iVar2 = (uint)*(ushort *)(&Camera_gInfo.checkwalls + iVar2) << 0x10;
      iVar3 = iVar2 >> 0x10;
      local_44 = *(int *)((int)local_28 +
                         ((iVar3 + ((iVar3 / 3 + (iVar3 >> 0x1f)) - (iVar2 >> 0x1f)) * -3) * 0x10000
                         >> 0xe));
      local_44 = ((int)((int)(local_28[(iVar3 + 1) % 3] + -local_44) * (uVar5 & 0x7f)) >> 7) +
                 local_44;
    }
    else {
      iVar2 = (uint)*(ushort *)(&Camera_gInfo.checkwalls + iVar2) << 0x10;
      iVar3 = iVar2 >> 0x10;
      local_44 = *(int *)((int)local_28 +
                         ((iVar3 + ((iVar3 / 3 + (iVar3 >> 0x1f)) - (iVar2 >> 0x1f)) * -3) * 0x10000
                         >> 0xe));
    }
    iVar2 = player * 0x110;
    ppBVar6 = &Camera_gInfo.anchor + player * 0x44;
    transform((int *)&local_48,(int *)&(*ppBVar6)->orientMat,&local_38);
    Camera_TunnelLimit__FiPi(player,&local_34);
    pBVar4 = *ppBVar6;
    ((coorddef *)((int)&Camera_gInfo.position + iVar2))->x = ((*ppBVar6)->position).x + local_38;
    *(int *)((int)&Camera_gInfo.position + iVar2 + 4) = (pBVar4->position).y + local_34;
    *(int *)((int)&Camera_gInfo.position + iVar2 + 8) = (pBVar4->position).z + local_30;
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

	/* begin block 2 */
		// Start line: 2373
	/* end block 2 */
	// End Line: 2374

	/* begin block 3 */
		// Start line: 2379
	/* end block 3 */
	// End Line: 2380

	/* begin block 4 */
		// Start line: 2379
	/* end block 4 */
	// End Line: 2380

void SetCameraZoom__Fii(int player,int targetDist)

{
  int iVar1;
  uint uVar2;
  
  if ((*(uint *)(&Camera_gInfo.modechange + player * 0x110) >> 7 & 1) == 0) {
    if (0x3000 < targetDist) {
      uVar2 = *(uint *)(&Camera_gInfo.modechange + player * 0x110) >> 0x19 & 3;
      if (uVar2 == 1) {
        iVar1 = targetDist * 0xbe >> 0x1f;
        Camera_gGeomScreen = ((targetDist * 0xbe) / 6 + iVar1 >> 0xb) - iVar1;
      }
      else {
        if (((uVar2 == 2) &&
            (iVar1 = targetDist * 0xbe >> 0x1f,
            Camera_gGeomScreen = ((targetDist * 0xbe) / 6 + iVar1 >> 0xb) - iVar1,
            0x4b0 < Camera_gGeomScreen)) &&
           (Camera_gGeomScreen = (int)(&DAT_00001770 + -Camera_gGeomScreen) >> 2,
           Camera_gGeomScreen < 0x2ee)) {
          Camera_gGeomScreen = 0x2ee;
        }
      }
    }
  }
  else {
    Camera_gGeomScreen = 0xbe;
  }
  SetGeomScreen(Camera_gGeomScreen);
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

	/* begin block 2 */
		// Start line: 2417
	/* end block 2 */
	// End Line: 2418

	/* begin block 3 */
		// Start line: 2421
	/* end block 3 */
	// End Line: 2422

	/* begin block 4 */
		// Start line: 2421
	/* end block 4 */
	// End Line: 2422

void Camera_UpdateTVCam__Fi(int player)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  coorddef *b;
  
  b = (coorddef *)((int)&Camera_gInfo.position + player * 0x110);
  iVar2 = Math_Dist3D__FP8coorddefT0(&(&Camera_gInfo.target)[player * 0x44]->position,b);
  if (iVar2 < 1) {
    iVar2 = Math_Dist3D__FP8coorddefT0(&(&Camera_gInfo.target)[player * 0x44]->position,b);
    iVar2 = -iVar2;
  }
  else {
    iVar2 = Math_Dist3D__FP8coorddefT0(&(&Camera_gInfo.target)[player * 0x44]->position,b);
  }
  iVar1 = player * 0x110;
  puVar4 = (uchar *)((coorddef *)((int)&Camera_gInfo.position + iVar1))->x;
  if (lastX_64[player] != puVar4) {
    lastX_64[player] = puVar4;
    lastY_65[player] = *(uchar **)((int)&Camera_gInfo.position + iVar1 + 4);
  }
  uVar3 = fixedmult((&Camera_gInfo.TVHeight)[player * 0x44] >> 2,(iVar2 >> 4) + -0x4000);
  if ((&Camera_gInfo.TVHeight)[player * 0x44] < (int)uVar3) {
    uVar3 = (&Camera_gInfo.TVHeight)[player * 0x44];
  }
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  *(uchar **)((int)&Camera_gInfo.position + iVar1 + 4) = lastY_65[player] + uVar3;
  SetCameraZoom__Fii(player,iVar2 >> 4);
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

	/* begin block 2 */
		// Start line: 2528
	/* end block 2 */
	// End Line: 2529

	/* begin block 3 */
		// Start line: 2577
	/* end block 3 */
	// End Line: 2578

	/* begin block 4 */
		// Start line: 2577
	/* end block 4 */
	// End Line: 2578

void Camera_UpdateAnimCam__Fi(int player)

{
  char cVar1;
  int iVar2;
  AnimScript *this;
  matrixtdef *pmVar3;
  matrixtdef *pmVar4;
  BO_tNewtonObj *pBVar5;
  int iVar6;
  BO_tNewtonObj **ppBVar7;
  int iVar8;
  coorddef local_58;
  int local_48;
  int local_44;
  int local_40;
  matrixtdef local_38;
  
  iVar8 = player * 0x110;
  if ((&Camera_gInfo.tumbling)[iVar8] == -1) {
    cVar1 = (&Camera_gInfo.intransition)[iVar8];
    (&Camera_gInfo.intransition)[iVar8] = cVar1 + -1;
    iVar2 = Anim_Handle__Fi((uint)(byte)gAnimCams[(int)cVar1 + GameSetup_gData.track * 4]);
    (&Camera_gInfo.tumbling)[iVar8] = (char)iVar2;
  }
  this = Anim_GetAnim__Fi((int)(&Camera_gInfo.tumbling)[iVar8]);
  iVar2 = GetTimedAnimPosRot__10AnimScriptP8coorddefP10matrixtdef(this,&local_58,&local_38);
  if (iVar2 < 1) {
    if ((&Camera_gInfo.intransition)[iVar8] < '\x01') {
      if (Replay_ReplayMode != 2) {
        Camera_SetMode__Fii(player,GameSetup_gData.carInfo[player].Camera[0]);
        return;
      }
      if (numValidCams != 0) {
        Replay_ReplayFindClosestCamera__Fii
                  (player,(int)((&Camera_gInfo.anchor)[player * 0x44]->simRoadInfo).slice);
        return;
      }
      Camera_SetMode__Fii(player,0xb);
      (&Camera_gInfo.direction)[iVar8] = '\x03';
      return;
    }
    Anim_FreeHandle__Fi((int)(&Camera_gInfo.tumbling)[iVar8]);
    cVar1 = (&Camera_gInfo.intransition)[iVar8];
    (&Camera_gInfo.intransition)[iVar8] = cVar1 + -1;
    iVar2 = Anim_Handle__Fi((uint)(byte)gAnimCams[(int)cVar1 + GameSetup_gData.track * 4]);
    (&Camera_gInfo.tumbling)[iVar8] = (char)iVar2;
    this = Anim_GetAnim__Fi((int)(char)iVar2);
    GetTimedAnimPosRot__10AnimScriptP8coorddefP10matrixtdef(this,&local_58,&local_38);
  }
  iVar8 = player * 0x110;
  ppBVar7 = &Camera_gInfo.anchor + player * 0x44;
  pmVar3 = (matrixtdef *)((int)&Camera_gInfo.rotation + iVar8);
  if (((int)(uint)(byte)gAnimMode[GameSetup_gData.track] >>
       ((int)(&Camera_gInfo.intransition)[iVar8] & 0x1fU) & 1U) == 0) {
    transform((int *)&local_58,(int *)&(*ppBVar7)->orientMat,&local_48);
    pBVar5 = *ppBVar7;
    ((coorddef *)((int)&Camera_gInfo.position + iVar8))->x = ((*ppBVar7)->position).x + local_48;
    *(int *)((int)&Camera_gInfo.position + iVar8 + 4) = (pBVar5->position).y + local_44;
    *(int *)((int)&Camera_gInfo.position + iVar8 + 8) = (pBVar5->position).z + local_40;
    Math_fasttransmult__FP10matrixtdefN20
              (&local_38,&pBVar5->orientMat,(matrixtdef *)((int)&Camera_gInfo.rotation + iVar8));
  }
  else {
    ((coorddef *)((int)&Camera_gInfo.position + iVar8))->x = local_58.x;
    *(int *)((int)&Camera_gInfo.position + iVar8 + 4) = local_58.y;
    *(int *)((int)&Camera_gInfo.position + iVar8 + 8) = local_58.z;
    pmVar4 = &local_38;
    do {
      iVar8 = pmVar4->m[1];
      iVar2 = pmVar4->m[2];
      iVar6 = pmVar4->m[3];
      pmVar3->m[0] = pmVar4->m[0];
      pmVar3->m[1] = iVar8;
      pmVar3->m[2] = iVar2;
      pmVar3->m[3] = iVar6;
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

	/* begin block 2 */
		// Start line: 2757
	/* end block 2 */
	// End Line: 2758

	/* begin block 3 */
		// Start line: 2760
	/* end block 3 */
	// End Line: 2761

	/* begin block 4 */
		// Start line: 2760
	/* end block 4 */
	// End Line: 2761

void Camera_UpdateFinishCam__Fi(int player)

{
  int iVar1;
  AnimScript *this;
  BO_tNewtonObj *pBVar2;
  BO_tNewtonObj **ppBVar3;
  int iVar4;
  coorddef cStack96;
  int local_50;
  int local_4c;
  int local_48;
  matrixtdef mStack64;
  
  iVar4 = player * 0x110;
  ppBVar3 = &Camera_gInfo.anchor + player * 0x44;
  if ((&Camera_gInfo.tumbling)[iVar4] == -1) {
    iVar1 = Anim_Handle__Fi(1);
    (&Camera_gInfo.tumbling)[iVar4] = (char)iVar1;
  }
  this = Anim_GetAnim__Fi((int)(&Camera_gInfo.tumbling)[iVar4]);
  iVar1 = GetTimedAnimPosRot__10AnimScriptP8coorddefP10matrixtdef(this,&cStack96,&mStack64);
  if (iVar1 < 1) {
    Anim_GetLastAnimPosRot__FiiP8coorddefP10matrixtdef(1,6,&cStack96,&mStack64);
  }
  transform((int *)&cStack96,(int *)&(*ppBVar3)->orientMat,&local_50);
  pBVar2 = *ppBVar3;
  ((coorddef *)((int)&Camera_gInfo.position + iVar4))->x = ((*ppBVar3)->position).x + local_50;
  *(int *)((int)&Camera_gInfo.position + iVar4 + 4) = (pBVar2->position).y + local_4c;
  *(int *)((int)&Camera_gInfo.position + iVar4 + 8) = (pBVar2->position).z + local_48;
  Math_fasttransmult__FP10matrixtdefN20
            (&mStack64,&pBVar2->orientMat,(matrixtdef *)((int)&Camera_gInfo.rotation + iVar4));
  *(uint *)(&Camera_gInfo.modechange + iVar4) =
       *(uint *)(&Camera_gInfo.modechange + iVar4) & 0xfffffff1 | 0x70;
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

	/* begin block 2 */
		// Start line: 2927
	/* end block 2 */
	// End Line: 2928

	/* begin block 3 */
		// Start line: 2931
	/* end block 3 */
	// End Line: 2932

	/* begin block 4 */
		// Start line: 2931
	/* end block 4 */
	// End Line: 2932

void Camera_UpdateBlimpCam__Fi(int player)

{
  int iVar1;
  uint uVar2;
  BO_tNewtonObj *pBVar3;
  int iVar4;
  int iVar5;
  BO_tNewtonObj **ppBVar6;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  
  iVar5 = player * 0x110;
  ppBVar6 = &Camera_gInfo.anchor + player * 0x44;
  iVar1 = (int)(&Camera_gInfo.mode)[player * 0x88] * 0x10;
  iVar4 = ((coorddef *)((int)&Camera_gFlags[0].arm + iVar1))->x;
  local_24 = *(int *)((int)&Camera_gFlags[0].arm + iVar1 + 4);
  local_20 = *(int *)((int)&Camera_gFlags[0].arm + iVar1 + 8);
  Camera_TunnelLimit__FiPi(player,&local_24);
  local_18 = ((coorddef *)((int)&Camera_gInfo.position + iVar5))->x - ((*ppBVar6)->position).x;
  local_14 = *(int *)((int)&Camera_gInfo.position + iVar5 + 4) - ((*ppBVar6)->position).y;
  local_10 = *(int *)((int)&Camera_gInfo.position + iVar5 + 8) - ((*ppBVar6)->position).z;
  uVar2 = fixedmult(iVar4 - local_18,(int)&DAT_00001999);
  local_18 = local_18 + uVar2;
  uVar2 = fixedmult(local_24 - local_14,(int)&DAT_00001999);
  local_14 = local_14 + uVar2;
  uVar2 = fixedmult(local_20 - local_10,(int)&DAT_00001999);
  pBVar3 = *ppBVar6;
  ((coorddef *)((int)&Camera_gInfo.position + iVar5))->x = ((*ppBVar6)->position).x + local_18;
  *(int *)((int)&Camera_gInfo.position + iVar5 + 4) = (pBVar3->position).y + local_14;
  *(int *)((int)&Camera_gInfo.position + iVar5 + 8) = (pBVar3->position).z + local_10 + uVar2;
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

	/* begin block 2 */
		// Start line: 3010
	/* end block 2 */
	// End Line: 3011

	/* begin block 3 */
		// Start line: 3038
	/* end block 3 */
	// End Line: 3039

	/* begin block 4 */
		// Start line: 3038
	/* end block 4 */
	// End Line: 3039

void Camera_SetSplineCam__Fi(int player)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  Trk_NewSlice *pTVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  BO_tNewtonObj *pBVar10;
  BO_tNewtonObj **ppBVar11;
  
  iVar9 = player * 0x110;
  ppBVar11 = &Camera_gInfo.anchor + player * 0x44;
  pBVar10 = *ppBVar11;
  iVar6 = ((0x10000 - camSpeedTable[(uint)(byte)(&Camera_gInfo.direction)[iVar9]]) * 0xf >> 0x10) +
          1;
  iVar7 = 8;
  if (iVar6 < 9) {
    iVar7 = iVar6;
  }
  if ((&Replay_ReplayCamera)[player].defaultCamera == 0) {
    uVar2 = fixedmult(*(int *)((int)&Camera_gInfo.rotation + iVar9 + 0x18),
                      (pBVar10->roadMatrix).m[6]);
    uVar3 = fixedmult(*(int *)((int)&Camera_gInfo.rotation + iVar9 + 0x1c),
                      ((*ppBVar11)->roadMatrix).m[7]);
    uVar4 = fixedmult(*(int *)((int)&Camera_gInfo.rotation + iVar9 + 0x20),
                      ((*ppBVar11)->roadMatrix).m[8]);
    if ((int)(uVar2 + uVar3 + uVar4) < 0) {
      iVar7 = -iVar7;
    }
    if (pBVar10[1].shadowMat.m[7] < 0) {
      iVar7 = -iVar7;
    }
    if (iVar7 < 0) {
      sVar1 = (pBVar10->simRoadInfo).slice;
      sVar8 = sVar1 + (short)iVar7;
      if ((int)sVar1 + iVar7 < 0) {
        sVar8 = (short)gNumSlices + sVar8;
      }
      *(short *)(&Camera_gInfo.forceFocus + player * 0x44) = sVar8;
    }
    else {
      sVar1 = (pBVar10->simRoadInfo).slice;
      sVar8 = sVar1 + (short)iVar7;
      if (gNumSlices <= (int)sVar1 + iVar7) {
        sVar8 = sVar8 - (short)gNumSlices;
      }
      *(short *)(&Camera_gInfo.forceFocus + player * 0x44) = sVar8;
    }
    iVar7 = player * 0x110;
    pTVar5 = BWorldSm_slices + (int)*(short *)(&Camera_gInfo.forceFocus + player * 0x44);
    iVar6 = pTVar5->center[1];
    iVar9 = pTVar5->center[2];
    ((coorddef *)((int)&Camera_gInfo.position + iVar7))->x = pTVar5->center[0];
    *(int *)((int)&Camera_gInfo.position + iVar7 + 4) = iVar6;
    *(int *)((int)&Camera_gInfo.position + iVar7 + 8) = iVar9;
    BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
              ((coorddef *)((int)&Camera_gInfo.position + iVar7),
               (BWorldSm_Pos *)(&Camera_gInfo.forceFocus + player * 0x44),1);
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

	/* begin block 2 */
		// Start line: 3136
	/* end block 2 */
	// End Line: 3137

	/* begin block 3 */
		// Start line: 3144
	/* end block 3 */
	// End Line: 3145

	/* begin block 4 */
		// Start line: 3144
	/* end block 4 */
	// End Line: 3145

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
  short sVar8;
  int iVar9;
  Trk_NewSlice *pTVar10;
  int iVar11;
  coorddef *b;
  BO_tNewtonObj **ppBVar12;
  BO_tNewtonObj *pBVar13;
  coorddef local_40;
  int local_30;
  int local_2c;
  int local_28;
  
  pBVar13 = (&Camera_gInfo.anchor)[player * 0x44];
  bVar2 = false;
  if ((simVar.quickPauseSim != 0) && (Replay_ReplayInterface.changeCamera == 0)) {
    return;
  }
  if (InBetween != 0) {
    return;
  }
  iVar9 = (int)(pBVar13->simRoadInfo).slice;
  iVar3 = iVar9 - (int)*(short *)(&Camera_gInfo.forceFocus + player * 0x44);
  if (iVar3 < 1) {
    iVar3 = (int)*(short *)(&Camera_gInfo.forceFocus + player * 0x44) - iVar9;
  }
  if ((int)(gNumSlices + ((uint)gNumSlices >> 0x1f)) >> 1 < iVar3) {
    iVar9 = (int)(pBVar13->simRoadInfo).slice;
    iVar3 = iVar9 - (int)*(short *)(&Camera_gInfo.forceFocus + player * 0x44);
    if (iVar3 < 1) {
      iVar3 = gNumSlices - ((int)*(short *)(&Camera_gInfo.forceFocus + player * 0x44) - iVar9);
    }
    else {
      iVar3 = gNumSlices - iVar3;
    }
  }
  else {
    iVar9 = (int)(pBVar13->simRoadInfo).slice;
    iVar3 = iVar9 - (int)*(short *)(&Camera_gInfo.forceFocus + player * 0x44);
    if (iVar3 < 1) {
      iVar3 = (int)*(short *)(&Camera_gInfo.forceFocus + player * 0x44) - iVar9;
    }
  }
  iVar9 = (0x10000 - camSpeedTable[(uint)(byte)(&Camera_gInfo.direction)[player * 0x110]]) * 0xf >>
          0x10;
  if ((iVar9 + 2 < iVar3) &&
     (camSpeedTable[(uint)(byte)(&Camera_gInfo.direction)[player * 0x110]] < 0x10000)) {
    bVar2 = true;
  }
  if ((bVar2) && ((&Replay_ReplayCamera)[player].defaultCamera == 0)) {
    iVar9 = iVar9 + 1;
    iVar3 = 8;
    if (iVar9 < 9) {
      iVar3 = iVar9;
    }
    iVar9 = player * 0x110;
    ppBVar12 = &Camera_gInfo.anchor + player * 0x44;
    uVar4 = fixedmult(*(int *)((int)&Camera_gInfo.rotation + iVar9 + 0x18),
                      ((*ppBVar12)->roadMatrix).m[6]);
    uVar5 = fixedmult(*(int *)((int)&Camera_gInfo.rotation + iVar9 + 0x1c),
                      ((*ppBVar12)->roadMatrix).m[7]);
    uVar6 = fixedmult(*(int *)((int)&Camera_gInfo.rotation + iVar9 + 0x20),
                      ((*ppBVar12)->roadMatrix).m[8]);
    if ((int)(uVar4 + uVar5 + uVar6) < 0) {
      iVar3 = -iVar3;
    }
    if (pBVar13[1].shadowMat.m[7] < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < 0) {
      sVar1 = (pBVar13->simRoadInfo).slice;
      sVar8 = sVar1 + (short)iVar3;
      if ((int)sVar1 + iVar3 < 0) {
        sVar8 = (short)gNumSlices + sVar8;
      }
      *(short *)(&Camera_gInfo.forceFocus + player * 0x44) = sVar8;
    }
    else {
      sVar1 = (pBVar13->simRoadInfo).slice;
      sVar8 = sVar1 + (short)iVar3;
      if (gNumSlices <= (int)sVar1 + iVar3) {
        sVar8 = sVar8 - (short)gNumSlices;
      }
      *(short *)(&Camera_gInfo.forceFocus + player * 0x44) = sVar8;
    }
    iVar3 = player * 0x110;
    pTVar10 = BWorldSm_slices + (int)*(short *)(&Camera_gInfo.forceFocus + player * 0x44);
    iVar9 = pTVar10->center[1];
    iVar11 = pTVar10->center[2];
    ((coorddef *)((int)&Camera_gInfo.position + iVar3))->x = pTVar10->center[0];
    *(int *)((int)&Camera_gInfo.position + iVar3 + 4) = iVar9;
    *(int *)((int)&Camera_gInfo.position + iVar3 + 8) = iVar11;
  }
  BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
            ((coorddef *)((int)&Camera_gInfo.position + player * 0x110),
             (BWorldSm_Pos *)(&Camera_gInfo.forceFocus + player * 0x44),1);
  iVar9 = player * 0x110;
  pTVar7 = BWorldSm_slices + (int)*(short *)(&Camera_gInfo.forceFocus + player * 0x44);
  iVar3 = (int)*(short *)(&Camera_gInfo.forceFocus + player * 0x44) + 1;
  pTVar10 = BWorldSm_slices;
  if (iVar3 < gNumSlices) {
    pTVar10 = BWorldSm_slices + iVar3;
  }
  local_30 = pTVar10->center[0];
  local_2c = pTVar10->center[1];
  local_28 = pTVar10->center[2];
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
  uVar4 = fixedmult(uVar6,camSpeedTable[(uint)(byte)(&Camera_gInfo.direction)[iVar9]]);
  uVar5 = fixedmult(uVar4,local_40.x);
  uVar6 = fixedmult(uVar4,local_40.y);
  uVar4 = fixedmult(uVar4,local_40.z);
  b = (coorddef *)((int)&Camera_gInfo.position + iVar9);
  pBVar13 = (&Camera_gInfo.target)[player * 0x44];
  ((coorddef *)((int)&Camera_gInfo.position + iVar9))->x =
       ((coorddef *)((int)&Camera_gInfo.position + iVar9))->x + ((int)uVar5 >> 6);
  *(int *)((int)&Camera_gInfo.position + iVar9 + 4) =
       *(int *)((int)&Camera_gInfo.position + iVar9 + 4) + ((int)uVar6 >> 6);
  *(int *)((int)&Camera_gInfo.position + iVar9 + 8) =
       *(int *)((int)&Camera_gInfo.position + iVar9 + 8) + ((int)uVar4 >> 6);
  iVar3 = Math_Dist3D__FP8coorddefT0(&pBVar13->position,b);
  if (iVar3 < 1) {
    iVar3 = Math_Dist3D__FP8coorddefT0(&(&Camera_gInfo.target)[player * 0x44]->position,b);
    iVar3 = -iVar3;
  }
  else {
    iVar3 = Math_Dist3D__FP8coorddefT0(&(&Camera_gInfo.target)[player * 0x44]->position,b);
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

	/* begin block 2 */
		// Start line: 3391
	/* end block 2 */
	// End Line: 3392

	/* begin block 3 */
		// Start line: 3400
	/* end block 3 */
	// End Line: 3401

	/* begin block 4 */
		// Start line: 3400
	/* end block 4 */
	// End Line: 3401

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

	/* begin block 2 */
		// Start line: 3447
	/* end block 2 */
	// End Line: 3448

	/* begin block 3 */
		// Start line: 3452
	/* end block 3 */
	// End Line: 3453

	/* begin block 4 */
		// Start line: 3452
	/* end block 4 */
	// End Line: 3453

	/* begin block 5 */
		// Start line: 3463
	/* end block 5 */
	// End Line: 3464

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
  BO_tNewtonObj **ppBVar12;
  int local_40;
  int local_3c;
  int local_38;
  int local_1c;
  int local_18;
  
  if (((simVar.quickPauseSim == 0) || (Replay_ReplayInterface.changeCamera != 0)) &&
     (InBetween == 0)) {
    SetGeomScreen(0xbe);
    ppBVar12 = &Camera_gInfo.anchor + player * 0x44;
    if (simGlobal.gameTicks < *(int *)(&Camera_gInfo.splineMode + player * 0x110)) {
      Camera_UpdateCopCam2__Fi(player);
    }
    else {
      pTVar5 = BWorldSm_slices + (int)((*ppBVar12)->simRoadInfo).slice;
      iVar10 = pTVar5->center[0];
      iVar11 = pTVar5->center[1];
      local_18 = pTVar5->center[2];
      cVar1 = BWorldSm_slices[(int)((*ppBVar12)->simRoadInfo).slice].forward[2];
      iVar6 = ((*ppBVar12)->position).x;
      cVar2 = BWorldSm_slices[(int)((*ppBVar12)->simRoadInfo).slice].right[0];
      local_40 = (int)cVar2 * 0x800;
      cVar3 = BWorldSm_slices[(int)((*ppBVar12)->simRoadInfo).slice].right[1];
      local_3c = (int)cVar3 * 0x800;
      cVar4 = BWorldSm_slices[(int)((*ppBVar12)->simRoadInfo).slice].right[2];
      local_38 = (int)cVar4 * 0x800;
      uVar7 = fixedmult(((*ppBVar12)->position).z - local_18,
                        (int)BWorldSm_slices[(int)((*ppBVar12)->simRoadInfo).slice].forward[0] << 9)
      ;
      uVar8 = fixedmult(iVar6 - iVar10,(int)cVar1 << 9);
      uVar9 = Camera_IslandProfile__FUs
                        (BWorldSm_slices[(int)((*ppBVar12)->simRoadInfo).slice].pavedProfile);
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
      player = player * 0x110;
      local_1c = local_1c + iVar11 + local_3c;
      local_18 = local_18 + local_38;
      uVar7 = fixedmult((iVar10 + local_40) -
                        ((coorddef *)((int)&Camera_gInfo.position + player))->x,0x7ae);
      iVar6 = *(int *)((int)&Camera_gInfo.position + player + 4);
      ((coorddef *)((int)&Camera_gInfo.position + player))->x =
           ((coorddef *)((int)&Camera_gInfo.position + player))->x + uVar7;
      uVar7 = fixedmult(local_1c - iVar6,0x7ae);
      iVar6 = *(int *)((int)&Camera_gInfo.position + player + 8);
      *(int *)((int)&Camera_gInfo.position + player + 4) =
           *(int *)((int)&Camera_gInfo.position + player + 4) + uVar7;
      uVar7 = fixedmult(local_18 - iVar6,0x7ae);
      uVar8 = *(uint *)(&Camera_gInfo.modechange + player);
      *(int *)((int)&Camera_gInfo.position + player + 8) =
           *(int *)((int)&Camera_gInfo.position + player + 8) + uVar7;
      *(uint *)(&Camera_gInfo.modechange + player) = uVar8 & 0xfffffff9 | 0x78;
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

	/* begin block 2 */
		// Start line: 3412
	/* end block 2 */
	// End Line: 3413

	/* begin block 3 */
		// Start line: 3732
	/* end block 3 */
	// End Line: 3733

	/* begin block 4 */
		// Start line: 3732
	/* end block 4 */
	// End Line: 3733

void Camera_UpdateCopCam1__Fi(int player)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  BO_tNewtonObj *pBVar6;
  int iVar7;
  BO_tNewtonObj **ppBVar8;
  coorddef local_18;
  
  iVar7 = player * 0x110;
  ppBVar8 = &Camera_gInfo.anchor + player * 0x44;
  iVar1 = ((*ppBVar8)->position).y;
  iVar4 = ((&Camera_gInfo.target)[player * 0x44]->position).y;
  iVar2 = ((*ppBVar8)->position).z;
  iVar5 = ((&Camera_gInfo.target)[player * 0x44]->position).z;
  gCop1Target[player].x =
       ((*ppBVar8)->position).x + ((&Camera_gInfo.target)[player * 0x44]->position).x >> 1;
  gCop1Target[player].y = iVar1 + iVar4 >> 1;
  gCop1Target[player].z = iVar2 + iVar5 >> 1;
  local_18.x = ((*ppBVar8)->position).x - ((&Camera_gInfo.target)[player * 0x44]->position).x;
  local_18.y = ((*ppBVar8)->position).y - ((&Camera_gInfo.target)[player * 0x44]->position).y;
  local_18.z = ((*ppBVar8)->position).z - ((&Camera_gInfo.target)[player * 0x44]->position).z;
  Math_NormalizeVector__FP8coorddef(&local_18);
  local_18.x = fixedmult(0x40000,local_18.x);
  local_18.y = fixedmult(0x40000,local_18.y);
  uVar3 = fixedmult(0x40000,local_18.z);
  pBVar6 = *ppBVar8;
  ((coorddef *)((int)&Camera_gInfo.position + iVar7))->x =
       ((*ppBVar8)->position).x + local_18.x + uVar3;
  *(int *)((int)&Camera_gInfo.position + iVar7 + 4) = (pBVar6->position).y + 0x18000;
  *(int *)((int)&Camera_gInfo.position + iVar7 + 8) = ((pBVar6->position).z - local_18.x) + uVar3;
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

	/* begin block 2 */
		// Start line: 3781
	/* end block 2 */
	// End Line: 3782

	/* begin block 3 */
		// Start line: 3785
	/* end block 3 */
	// End Line: 3786

	/* begin block 4 */
		// Start line: 3785
	/* end block 4 */
	// End Line: 3786

void Camera_UpdateCopCam2__Fi(int player)

{
  int iVar1;
  BO_tNewtonObj *pBVar2;
  BO_tNewtonObj **ppBVar3;
  coorddef local_18;
  
  iVar1 = player * 0x110;
  ppBVar3 = &Camera_gInfo.anchor + player * 0x44;
  local_18.x = ((&Camera_gInfo.target)[player * 0x44]->position).x - ((*ppBVar3)->position).x;
  if (local_18.x < 0) {
    local_18.x = local_18.x + 3;
  }
  local_18.x = local_18.x >> 2;
  local_18.y = ((&Camera_gInfo.target)[player * 0x44]->position).y - ((*ppBVar3)->position).y;
  if (local_18.y < 0) {
    local_18.y = local_18.y + 3;
  }
  local_18.y = local_18.y >> 2;
  local_18.z = ((&Camera_gInfo.target)[player * 0x44]->position).z - ((*ppBVar3)->position).z;
  if (local_18.z < 0) {
    local_18.z = local_18.z + 3;
  }
  local_18.z = local_18.z >> 2;
  Math_NormalizeVector__FP8coorddef(&local_18);
  pBVar2 = *ppBVar3;
  ((coorddef *)((int)&Camera_gInfo.position + iVar1))->x =
       ((*ppBVar3)->position).x + local_18.x * -2;
  *(undefined **)((int)&Camera_gInfo.position + iVar1 + 4) = &DAT_00013333 + (pBVar2->position).y;
  *(int *)((int)&Camera_gInfo.position + iVar1 + 8) = (pBVar2->position).z + local_18.z * -2;
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

	/* begin block 2 */
		// Start line: 3817
	/* end block 2 */
	// End Line: 3818

	/* begin block 3 */
		// Start line: 3822
	/* end block 3 */
	// End Line: 3823

	/* begin block 4 */
		// Start line: 3822
	/* end block 4 */
	// End Line: 3823

void Camera_UpdateBTCopCam__Fi(int player)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(&Camera_gInfo.inCar + player * 0x110);
  if (iVar2 == 1) {
    cVar1 = *(char *)(&Camera_gInfo.circleAngle + player * 0x88);
    *(Car_tObj **)(&Camera_gInfo.anchor + player * 0x44) =
         (&Cars_gList9)[(int)*(char *)(&Camera_gInfo.circleAngle + player * 0x88)];
    *(Car_tObj **)(&Camera_gInfo.target + player * 0x44) = (&Cars_gList9)[(int)cVar1];
    Camera_UpdateCircleCam__Fi(player);
  }
  else {
    if ((1 < iVar2) && (iVar2 == 2)) {
      cVar1 = *(char *)(&Camera_gInfo.circleAngle + player * 0x88);
      *(Car_tObj **)(&Camera_gInfo.anchor + player * 0x44) = (&Cars_gList9)[player];
      *(Car_tObj **)(&Camera_gInfo.target + player * 0x44) = (&Cars_gList9)[(int)cVar1];
      Camera_UpdateCopCam2__Fi(player);
    }
  }
  player = player * 0x110;
  Camera_gGeomScreen = 0xbe;
  *(int *)(&Camera_gInfo.splineMode + player) = simGlobal.gameTicks + 0x140;
  *(uint *)(&Camera_gInfo.modechange + player) =
       *(uint *)(&Camera_gInfo.modechange + player) & 0xffffffb9 | 0x38;
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

	/* begin block 2 */
		// Start line: 3900
	/* end block 2 */
	// End Line: 3901

	/* begin block 3 */
		// Start line: 3904
	/* end block 3 */
	// End Line: 3905

	/* begin block 4 */
		// Start line: 3904
	/* end block 4 */
	// End Line: 3905

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
  ppCVar13 = &Cars_gHumanRaceCarList9;
  piVar12 = Camera_gInfo.rotation.m + 6;
  do {
    if ((int)(uint)((byte)Camera_gInfo.modechange >> 7) < player) {
      return;
    }
    pBVar11 = pcVar10->anchor;
    if ((*(uint *)&pcVar10->modechange >> 6 & 1) == 0) {
LAB_80083500:
      if (((pBVar11[1].simRoadInfo.quadPts[1].y & 1U) != 0) && (pBVar11[1].roadMatrix.m[3] == 2)) {
        Camera_UpdateFinishCam__Fi(player);
        goto LAB_80083584;
      }
      if (0 < *(int *)&pcVar10->inCar) {
        Camera_UpdateBTCopCam__Fi(player);
        goto LAB_80083584;
      }
      if (((*ppCVar13)->pullOver != 0) && (((*ppCVar13)->stats).finishType != 3)) {
        Camera_UpdatePulloverCam__Fi(player);
        goto LAB_80083584;
      }
      if ((pcVar10->modechange & 1U) != 0) {
        iVar9 = (int)pcVar10->mode;
        uVar8 = *(uint *)&pcVar10->modechange;
        uVar2 = ((&Camera_gFlags[0].pitch)[iVar9 * 4] & 1U) << 1;
        *(uint *)&pcVar10->modechange = uVar8 & 0xfffffffd | uVar2;
        uVar3 = ((&Camera_gFlags[0].pitch)[iVar9 * 4] & 2U) << 1;
        *(uint *)&pcVar10->modechange = uVar8 & 0xfffffff9 | uVar2 | uVar3;
        uVar4 = ((&Camera_gFlags[0].pitch)[iVar9 * 4] & 4U) << 1;
        *(uint *)&pcVar10->modechange = uVar8 & 0xfffffff1 | uVar2 | uVar3 | uVar4;
        uVar5 = ((&Camera_gFlags[0].pitch)[iVar9 * 4] & 8U) << 1;
        *(uint *)&pcVar10->modechange = uVar8 & 0xffffffe1 | uVar2 | uVar3 | uVar4 | uVar5;
        uVar6 = ((&Camera_gFlags[0].pitch)[iVar9 * 4] & 0x10U) << 1;
        *(uint *)&pcVar10->modechange = uVar8 & 0xffffffc1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6;
        uVar7 = ((&Camera_gFlags[0].pitch)[iVar9 * 4] & 0x20U) << 1;
        *(uint *)&pcVar10->modechange =
             uVar8 & 0xffffff81 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
        *(uint *)&pcVar10->modechange =
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
      if (pcVar10->jostling == '\0') {
        if ((pBVar11->orientationToGround).y < 0x8000) {
          uVar2 = fixedmult(*piVar12,(pBVar11->roadMatrix).m[6]);
          uVar3 = fixedmult(piVar12[1],(pcVar10->anchor->roadMatrix).m[7]);
          uVar4 = fixedmult(piVar12[2],(pcVar10->anchor->roadMatrix).m[8]);
          *(uint *)&pcVar10->modechange =
               *(uint *)&pcVar10->modechange & 0xfeffffff |
               (uint)((int)(uVar2 + uVar3 + uVar4) < 0) << 0x18;
          pcVar10->jostling = 'd';
        }
        goto LAB_80083500;
      }
      pcVar10->jostling = pcVar10->jostling + -1;
      Camera_UpdateCollisionCam__Fi(player);
LAB_80083584:
      *(uint *)&pcVar10->modechange = *(uint *)&pcVar10->modechange & 0xf7ffffff | 1;
    }
    pcVar10 = (camera_info *)&(pcVar10->slicePos).simQuad;
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

	/* begin block 2 */
		// Start line: 4219
	/* end block 2 */
	// End Line: 4220

	/* begin block 3 */
		// Start line: 4229
	/* end block 3 */
	// End Line: 4230

	/* begin block 4 */
		// Start line: 4229
	/* end block 4 */
	// End Line: 4230

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Camera_Init__Fv(void)

{
  bool bVar1;
  BO_tNewtonObj *pBVar2;
  matrixtdef *pmVar3;
  BO_tNewtonObj **ppBVar4;
  matrixtdef *pmVar5;
  BO_tNewtonObj **ppBVar6;
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
    *(Car_tObj **)&pcVar7->anchor = (&Cars_gHumanRaceCarList9)[iVar9];
    pBVar2 = pcVar7->anchor;
    *(Car_tObj **)&pcVar7->target = (&Cars_gHumanRaceCarList9)[iVar9];
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
    *(undefined2 *)&pcVar7->checkwalls = 0;
    *(undefined2 *)&pcVar7->checkcollisions = 0;
    *(uint *)&pcVar7->modechange =
         *(uint *)&pcVar7->modechange & 0xffffff20 | 0x20 | (uint)bVar1 << 7;
    pcVar7->pitch = '\0';
    pcVar7->jostling = '\0';
    pcVar7->mode = 0xe;
    *(uint *)&pcVar7->modechange = *(uint *)&pcVar7->modechange & 0xf0ffffff;
    pcVar7->intransition = gAnimCams[GameSetup_gData.track * 4];
    if (((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
       (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
        ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0)))))) {
      pcVar7->intransition = '\x01';
    }
    ppBVar6 = (BO_tNewtonObj **)&pcVar7->forceFocus;
    ppBVar4 = local_a0;
    pcVar7->tumbling = -1;
    pcVar7->direction = '\0';
    *(undefined4 *)&pcVar7->inCar = 0;
    *(undefined *)&pcVar7->circleAngle = 0xff;
    *(undefined4 *)&pcVar7->splineMode = 0x40;
    do {
      pBVar2 = ppBVar4[1];
      pBVar11 = ppBVar4[2];
      pBVar13 = ppBVar4[3];
      *ppBVar6 = *ppBVar4;
      ppBVar6[1] = pBVar2;
      ppBVar6[2] = pBVar11;
      ppBVar6[3] = pBVar13;
      ppBVar4 = ppBVar4 + 4;
      ppBVar6 = ppBVar6 + 4;
    } while (ppBVar4 != apBStack32);
    *ppBVar6 = *ppBVar4;
    iVar8 = iVar8 + 1;
    pcVar7 = (camera_info *)&(pcVar7->slicePos).simQuad;
  } while (iVar8 <= (int)(uint)bVar1);
  Camera_ResetRelPos__Fi(3);
  iVar8 = Cars_gHumanRaceCarList9->carInfo->carType;
  if (((iVar8 < 0x1c) && ((GameSetup_gData.sgge & 0x100U) != 0)) && (!bVar1)) {
    GameSetup_gData.carInfo[0].Camera[0] = 1;
    Camera_gFlags[0].jostling = gDriverCam[iVar8].x;
    Camera_gFlags[0].tracking = gDriverCam[iVar8].y;
    Camera_gFlags[0].checkwalls = gDriverCam[iVar8].z;
  }
  Camera_gGeomScreen = 0xbe;
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

	/* begin block 2 */
		// Start line: 4506
	/* end block 2 */
	// End Line: 4507

	/* begin block 3 */
		// Start line: 4518
	/* end block 3 */
	// End Line: 4519

	/* begin block 4 */
		// Start line: 4518
	/* end block 4 */
	// End Line: 4519

	/* begin block 5 */
		// Start line: 4519
	/* end block 5 */
	// End Line: 4520

	/* begin block 6 */
		// Start line: 4519
	/* end block 6 */
	// End Line: 4520

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
    if ((int)pcVar2->tumbling != -1) {
      Anim_FreeHandle__Fi((int)pcVar2->tumbling);
    }
    pcVar2->tumbling = -1;
    iVar3 = iVar3 + 1;
    pcVar2 = (camera_info *)&(pcVar2->slicePos).simQuad;
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

	/* begin block 2 */
		// Start line: 4542
	/* end block 2 */
	// End Line: 4543

	/* begin block 3 */
		// Start line: 4546
	/* end block 3 */
	// End Line: 4547

	/* begin block 4 */
		// Start line: 4546
	/* end block 4 */
	// End Line: 4547

void Camera_PitchAndRoll__Fi(int player)

{
  matrixtdef *m2;
  int iVar1;
  matrixtdef mStack144;
  matrixtdef mStack104;
  matrixtdef mStack64;
  
  iVar1 = (&Camera_gInfo.anchor)[player * 0x44][3].objAltitude;
  fixedxformz((int *)&mStack144,(&Camera_gInfo.anchor)[player * 0x44][3].collision.collided);
  fixedxformx((undefined4 *)&mStack104,
              iVar1 << 1 | *(uint *)(&Camera_gInfo.modechange + player * 0x110) >> 1 & 1);
  Math_fasttransmult__FP10matrixtdefN20(&mStack144,&mStack104,&mStack64);
  m2 = (matrixtdef *)((int)&Camera_gInfo.rotation + player * 0x110);
  Math_fasttransmult__FP10matrixtdefN20(&mStack64,m2,m2);
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

	/* begin block 2 */
		// Start line: 4608
	/* end block 2 */
	// End Line: 4609

	/* begin block 3 */
		// Start line: 4612
	/* end block 3 */
	// End Line: 4613

	/* begin block 4 */
		// Start line: 4612
	/* end block 4 */
	// End Line: 4613

int Camera_TooSteep__FiP12BWorldSm_Pos(int player,BWorldSm_Pos *slicePos)

{
  int iVar1;
  coorddef *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  BO_tNewtonObj *pBVar13;
  BO_tNewtonObj **ppBVar14;
  
  iVar1 = player * 0x110;
  ppBVar14 = &Camera_gInfo.anchor + player * 0x44;
  pBVar13 = *ppBVar14;
  pcVar2 = BWorldSm_UNormal__FP12BWorldSm_Pos(slicePos);
  iVar8 = pcVar2->x;
  iVar9 = pcVar2->y;
  iVar11 = pcVar2->z;
  pcVar2 = BWorldSm_UNormal__FP12BWorldSm_Pos(&pBVar13->simRoadInfo);
  iVar10 = pcVar2->y;
  iVar12 = pcVar2->z;
  uVar3 = fixedmult(iVar8,pcVar2->x);
  uVar4 = fixedmult(iVar9,iVar10);
  uVar5 = fixedmult(iVar11,iVar12);
  iVar10 = 0;
  if ((int)(uVar3 + uVar4 + uVar5) < 0xb4fd) {
    iVar6 = *(int *)((int)&Camera_gInfo.position + iVar1 + 4);
    iVar10 = ((*ppBVar14)->position).y;
    iVar7 = *(int *)((int)&Camera_gInfo.position + iVar1 + 8);
    iVar12 = ((*ppBVar14)->position).z;
    uVar3 = fixedmult(iVar8,((*ppBVar14)->position).x -
                            ((coorddef *)((int)&Camera_gInfo.position + iVar1))->x);
    uVar4 = fixedmult(iVar9,iVar10 - iVar6);
    uVar5 = fixedmult(iVar11,iVar12 - iVar7);
    if (((int)(uVar3 + uVar4 + uVar5) < 1) || (iVar10 = 1, (*ppBVar14)->flightTime != 0)) {
      iVar10 = 0;
    }
  }
  return iVar10;
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

	/* begin block 2 */
		// Start line: 4671
	/* end block 2 */
	// End Line: 4672

	/* begin block 3 */
		// Start line: 4685
	/* end block 3 */
	// End Line: 4686

	/* begin block 4 */
		// Start line: 4685
	/* end block 4 */
	// End Line: 4686

void Camera_CheckWallCollisions__FiP8coorddef(int player,coorddef *pos)

{
  Trk_NewSlice *pTVar1;
  int iVar2;
  BO_tNewtonObj *pBVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  forceFocus_t *pfVar9;
  BWorldSm_Pos *pBVar10;
  BO_tNewtonObj **ppBVar11;
  forceFocus_t fVar12;
  forceFocus_t fVar13;
  forceFocus_t fVar14;
  coorddef *pcVar15;
  int iVar16;
  uint uVar17;
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
  
  pBVar10 = &local_118;
  pfVar9 = &Camera_gInfo.forceFocus + player * 0x44;
  do {
    fVar12 = pfVar9[1];
    fVar13 = pfVar9[2];
    fVar14 = pfVar9[3];
    *(forceFocus_t *)pBVar10 = *pfVar9;
    *(forceFocus_t *)&pBVar10->simRotFlag = fVar12;
    pBVar10->quadPts[0].x = fVar13;
    pBVar10->quadPts[0].y = fVar14;
    pfVar9 = pfVar9 + 4;
    pBVar10 = (BWorldSm_Pos *)&pBVar10->quadPts[0].z;
  } while (pfVar9 != (forceFocus_t *)((int)&Camera_gInfo.slicePos + player * 0x110 + 0x74));
  *(forceFocus_t *)pBVar10 = *pfVar9;
  iVar16 = 0;
  pcVar15 = &feeler3;
  do {
    transform((int *)pcVar15,(int *)&(&Camera_gInfo.anchor)[player * 0x44]->orientMat,&local_30);
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
        (iVar2 = Camera_TooSteep__FiP12BWorldSm_Pos(player,&local_118), iVar2 != 0)) ||
       ((local_118.simQuad != (Trk_NewSimQuad *)0x0 &&
        ((((local_118.simQuad)->surface & 0x80) != 0 &&
         (0x38000 < local_4c - ((&Camera_gInfo.anchor)[player * 0x44]->position).y)))))) break;
    iVar16 = iVar16 + 1;
    pcVar15 = pcVar15 + 1;
    if (2 < iVar16) break;
  } while( true );
  if (iVar16 == 3) {
    return;
  }
  ppBVar11 = &Camera_gInfo.anchor + player * 0x44;
  iVar16 = 0;
  pBVar3 = *ppBVar11;
  local_90.x = (pBVar3->position).x;
  local_90.y = (pBVar3->position).y;
  local_90.z = (pBVar3->position).z;
  local_70 = ((*ppBVar11)->position).x - local_40.x >> 7;
  local_68 = ((*ppBVar11)->position).z - local_40.z >> 7;
  local_6c = ((*ppBVar11)->position).y - local_40.y >> 7;
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
        (iVar2 = Camera_TooSteep__FiP12BWorldSm_Pos(player,&local_118), iVar2 != 0)) ||
       (((local_118.simQuad != (Trk_NewSimQuad *)0x0 &&
         ((((local_118.simQuad)->surface & 0x80) != 0 &&
          (0x38000 < local_4c - ((*ppBVar11)->position).y)))) ||
        (iVar16 = iVar16 + 1, 0x7f < iVar16)))) break;
  } while( true );
  iVar16 = player * 0x110;
  ppBVar11 = &Camera_gInfo.anchor + player * 0x44;
  uVar17 = 1;
  local_70 = ((*ppBVar11)->position).x - local_90.x >> 1;
  local_6c = ((*ppBVar11)->position).y - local_90.y >> 1;
  local_68 = ((*ppBVar11)->position).z - local_90.z >> 1;
  do {
    intsincos(uVar17,&local_20,&local_1c);
    uVar4 = fixedmult(local_1c,local_70);
    local_60.x = fixedmult(local_20,local_68);
    local_60.x = uVar4 - local_60.x;
    local_60.y = local_6c;
    uVar4 = fixedmult(local_20,local_70);
    uVar5 = fixedmult(local_1c,local_68);
    local_60.x = local_90.x + local_60.x;
    local_60.y = local_90.y + local_60.y;
    local_60.z = local_90.z + uVar4 + uVar5;
    BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi(&local_60,&local_118,3);
    if (local_118.simQuad != (Trk_NewSimQuad *)0x0) {
      local_50 = local_118.quadPts[0].x;
      local_4c = local_118.quadPts[0].y;
      local_48 = local_118.quadPts[0].z;
      if (((local_118.simQuad)->surface & 0xf) != 0) goto LAB_80084400;
LAB_80084464:
      ((coorddef *)((int)&Camera_gInfo.wallLeft + iVar16))->x = local_60.x;
      *(int *)((int)&Camera_gInfo.wallLeft + iVar16 + 4) = local_60.y;
      *(int *)((int)&Camera_gInfo.wallLeft + iVar16 + 8) = local_60.z;
      break;
    }
    pTVar1 = BWorldSm_slices + (int)local_118.slice;
    local_50 = pTVar1->center[0];
    local_4c = pTVar1->center[1];
    local_48 = pTVar1->center[2];
LAB_80084400:
    if (((local_118.offEdge != '\0') ||
        (iVar2 = Camera_TooSteep__FiP12BWorldSm_Pos(player,&local_118), iVar2 != 0)) ||
       ((local_118.simQuad != (Trk_NewSimQuad *)0x0 &&
        ((((local_118.simQuad)->surface & 0x80) != 0 &&
         (0x38000 < local_4c - ((*ppBVar11)->position).y)))))) goto LAB_80084464;
    uVar17 = uVar17 + 4;
  } while ((int)uVar17 < 0x400);
  uVar17 = 0xffffffff;
  iVar16 = player * 0x110;
  do {
    intsincos(uVar17,&local_20,&local_1c);
    uVar4 = fixedmult(local_1c,local_70);
    local_60.x = fixedmult(local_20,local_68);
    local_60.x = uVar4 - local_60.x;
    local_60.y = local_6c;
    uVar4 = fixedmult(local_20,local_70);
    uVar5 = fixedmult(local_1c,local_68);
    local_60.x = local_90.x + local_60.x;
    local_60.y = local_90.y + local_60.y;
    local_60.z = local_90.z + uVar4 + uVar5;
    BWorldSm_FindClosestQuadMaxIterations__FP8coorddefP12BWorldSm_Posi(&local_60,&local_118,3);
    if (local_118.simQuad != (Trk_NewSimQuad *)0x0) {
      local_50 = local_118.quadPts[0].x;
      local_4c = local_118.quadPts[0].y;
      local_48 = local_118.quadPts[0].z;
      if (((local_118.simQuad)->surface & 0xf) != 0) goto LAB_800845d0;
LAB_80084634:
      ((coorddef *)((int)&Camera_gInfo.wallRight + iVar16))->x = local_60.x;
      *(int *)((int)&Camera_gInfo.wallRight + iVar16 + 4) = local_60.y;
      *(int *)((int)&Camera_gInfo.wallRight + iVar16 + 8) = local_60.z;
      break;
    }
    pTVar1 = BWorldSm_slices + (int)local_118.slice;
    local_50 = pTVar1->center[0];
    local_4c = pTVar1->center[1];
    local_48 = pTVar1->center[2];
LAB_800845d0:
    if (((local_118.offEdge != '\0') ||
        (iVar2 = Camera_TooSteep__FiP12BWorldSm_Pos(player,&local_118), iVar2 != 0)) ||
       ((local_118.simQuad != (Trk_NewSimQuad *)0x0 &&
        ((((local_118.simQuad)->surface & 0x80) != 0 &&
         (0x38000 < local_4c - ((&Camera_gInfo.anchor)[player * 0x44]->position).y))))))
    goto LAB_80084634;
    uVar17 = uVar17 - 4;
  } while (-0x400 < (int)uVar17);
  player = player * 0x110;
  local_60.x = ((coorddef *)((int)&Camera_gInfo.wallRight + player))->x -
               ((coorddef *)((int)&Camera_gInfo.wallLeft + player))->x;
  local_60.y = (*(int *)((int)&Camera_gInfo.wallRight + player + 4) -
               *(int *)((int)&Camera_gInfo.wallLeft + player + 4)) + 0x8000;
  local_60.z = *(int *)((int)&Camera_gInfo.wallRight + player + 8) -
               *(int *)((int)&Camera_gInfo.wallLeft + player + 8);
  Math_NormalizeVector__FP8coorddef(&local_60);
  local_90.x = local_90.x - local_40.x;
  local_78 = local_60.x;
  local_80 = -local_60.z;
  local_7c = local_60.y;
  local_90.z = local_90.z - local_40.z;
  local_90.y = local_90.y - local_40.y;
  uVar17 = fixedmult(local_90.x,local_80);
  uVar4 = fixedmult(local_90.y,local_7c);
  uVar5 = fixedmult(local_90.z,local_78);
  uVar6 = fixedmult(local_30,local_80);
  uVar7 = fixedmult(local_2c,local_7c);
  uVar8 = fixedmult(local_28,local_78);
  iVar16 = uVar17 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8 + 0x10000;
  if (0 < iVar16) {
    local_60.x = fixedmult(iVar16,local_80);
    local_60.y = fixedmult(iVar16,local_7c);
    uVar17 = fixedmult(iVar16,local_78);
    pos->x = pos->x + local_60.x;
    pos->y = pos->y + local_60.y;
    pos->z = pos->z + uVar17;
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

	/* begin block 2 */
		// Start line: 5077
	/* end block 2 */
	// End Line: 5078

	/* begin block 3 */
		// Start line: 5080
	/* end block 3 */
	// End Line: 5081

	/* begin block 4 */
		// Start line: 5080
	/* end block 4 */
	// End Line: 5081

void Camera_SetAboveGround__FiP8coorddef(int player,coorddef *pos)

{
  coorddef *pcVar1;
  int iVar2;
  coorddef local_20;
  
  pcVar1 = BWorldSm_UNormal__FP12BWorldSm_Pos
                     ((BWorldSm_Pos *)(&Camera_gInfo.forceFocus + player * 0x44));
  local_20.x = pcVar1->x;
  local_20.y = pcVar1->y;
  local_20.z = pcVar1->z;
  iVar2 = Newton_FindGroundElevationGeneral__FP8coorddefN20
                    (pos,&local_20,(coorddef *)(&Camera_gInfo.POInhibitor + player * 0x44));
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

	/* begin block 2 */
		// Start line: 5117
	/* end block 2 */
	// End Line: 5118

	/* begin block 3 */
		// Start line: 5125
	/* end block 3 */
	// End Line: 5126

	/* begin block 4 */
		// Start line: 5125
	/* end block 4 */
	// End Line: 5126

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
  puVar1 = PTR_s_SimpleMem_800558c0;
  v_00 = (coorddef *)(rot->m + 3);
  local_38 = DAT_800558bc;
  local_34 = PTR_s_SimpleMem_800558c0;
  local_30 = DAT_800558c4;
  v = (coorddef *)(rot->m + 6);
  if (point == (coorddef *)0x0) {
    pBVar2 = (&Camera_gInfo.target)[player * 0x44];
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
  if ((*(uint *)(&Camera_gInfo.modechange + player * 0x110) >> 1 & 1) != 0) {
    puVar3 = (undefined *)(rot->m[7] + 0x5333);
    if (2 < (uint)(ushort)(&Camera_gInfo.mode)[player * 0x88] - 2) {
      puVar3 = &DAT_00006666 + rot->m[7];
    }
    *(undefined **)(rot->m + 7) = puVar3;
  }
  if (Replay_ReplayMode == 2) {
    local_38 = (&Camera_gInfo.twist)[player * 0x44];
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

	/* begin block 2 */
		// Start line: 5232
	/* end block 2 */
	// End Line: 5233

	/* begin block 3 */
		// Start line: 5242
	/* end block 3 */
	// End Line: 5243

	/* begin block 4 */
		// Start line: 5242
	/* end block 4 */
	// End Line: 5243

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
    pCVar1 = (&Cars_gHumanRaceCarList9)[player];
    iVar7 = (pCVar1->N).orientMat.m[7];
    iVar8 = (pCVar1->N).orientMat.m[8];
    *(int *)(&lastOppVector_106 + iVar11) = (pCVar1->N).orientMat.m[6];
    *(int *)(&DAT_8013dfd4 + iVar11) = iVar7;
    *(int *)(&DAT_8013dfd8 + iVar11) = iVar8;
    return;
  }
  ppCVar6 = &Cars_gHumanRaceCarList9 + player;
  pCVar1 = *ppCVar6;
  local_48.x = (pCVar1->N).orientMat.m[6];
  local_48.y = (pCVar1->N).orientMat.m[7];
  local_48.z = (pCVar1->N).orientMat.m[8];
  iVar7 = 0;
  if (0 < Cars_gNumCars) {
    ppCVar10 = &Cars_gList9;
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
  switch((int)(((uint)(ushort)(&Camera_gInfo.mode)[player * 0x88] - 2) * 0x10000) >> 0x10) {
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
            (player,&local_48,pos,(matrixtdef *)((int)&Camera_gInfo.rotation + player * 0x110),1);
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

	/* begin block 2 */
		// Start line: 5383
	/* end block 2 */
	// End Line: 5384

	/* begin block 3 */
		// Start line: 5386
	/* end block 3 */
	// End Line: 5387

	/* begin block 4 */
		// Start line: 5386
	/* end block 4 */
	// End Line: 5387

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
  
  iVar8 = cviewP * 0x110;
  if ((*(uint *)(&Camera_gInfo.modechange + iVar8) >> 2 & 1) != 0) {
    Camera_PitchAndRoll__Fi(cviewP);
  }
  iVar6 = *(int *)((int)&Camera_gInfo.position + iVar8 + 4);
  iVar7 = *(int *)((int)&Camera_gInfo.position + iVar8 + 8);
  (cview->translation).x = ((coorddef *)((int)&Camera_gInfo.position + iVar8))->x;
  (cview->translation).y = iVar6;
  (cview->translation).z = iVar7;
  if ((*(uint *)(&Camera_gInfo.modechange + iVar8) >> 4 & 1) != 0) {
    Camera_CheckWallCollisions__FiP8coorddef(cviewP,(coorddef *)cview);
  }
  BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
            ((coorddef *)cview,(BWorldSm_Pos *)(&Camera_gInfo.forceFocus + cviewP * 0x44),1);
  if ((*(char *)((int)&Camera_gInfo.slicePos + iVar8 + 0x4e) == '\0') &&
     (1 < (&Camera_gInfo.mode)[cviewP * 0x88])) {
    Camera_SetAboveGround__FiP8coorddef(cviewP,(coorddef *)cview);
  }
  iVar8 = cviewP * 0x110;
  if ((*(uint *)(&Camera_gInfo.modechange + iVar8) >> 3 & 1) != 0) {
    Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi
              (cviewP,(coorddef *)0x0,(coorddef *)cview,
               (matrixtdef *)((int)&Camera_gInfo.rotation + iVar8),1);
  }
  if ((&Camera_gInfo.mode)[cviewP * 0x88] == 0x10) {
    Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi
              (cviewP,gCop1Target + cviewP,(coorddef *)cview,
               (matrixtdef *)((int)&Camera_gInfo.rotation + iVar8),1);
  }
  if ((*(uint *)(&Camera_gInfo.modechange + iVar8) >> 5 & 1) == 0) {
    Camera_OpponentLookBehind__FiP8coorddefi
              (cviewP,(coorddef *)cview,(uint)((&Input_gLookBehind)[cviewP] == 0));
  }
  pmVar5 = &cview->mrotation;
  pmVar1 = (matrixtdef *)((int)&Camera_gInfo.rotation + cviewP * 0x110);
  do {
    iVar8 = pmVar1->m[1];
    iVar6 = pmVar1->m[2];
    iVar7 = pmVar1->m[3];
    pmVar5->m[0] = pmVar1->m[0];
    pmVar5->m[1] = iVar8;
    pmVar5->m[2] = iVar6;
    pmVar5->m[3] = iVar7;
    pmVar1 = (matrixtdef *)(pmVar1->m + 4);
    pmVar5 = (matrixtdef *)(pmVar5->m + 4);
  } while (pmVar1 != (matrixtdef *)((int)&Camera_gInfo.rotation + cviewP * 0x110 + 0x20));
  pmVar5->m[0] = pmVar1->m[0];
  if (GameSetup_gData.mirrorTrack != 0) {
    iVar6 = (cview->mrotation).m[2];
    (cview->mrotation).m[0] = -(cview->mrotation).m[0];
    iVar8 = (cview->mrotation).m[1];
    (cview->mrotation).m[2] = -iVar6;
    (cview->mrotation).m[1] = -iVar8;
  }
  pmVar5 = &cview->mrotationInv;
  transpose((undefined4 *)&cview->mrotation,(undefined4 *)pmVar5);
  pmVar1 = &cview->mrotationInvRaw;
  do {
    iVar8 = pmVar5->m[1];
    iVar6 = pmVar5->m[2];
    iVar7 = pmVar5->m[3];
    pmVar1->m[0] = pmVar5->m[0];
    pmVar1->m[1] = iVar8;
    pmVar1->m[2] = iVar6;
    pmVar1->m[3] = iVar7;
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

	/* begin block 2 */
		// Start line: 5669
	/* end block 2 */
	// End Line: 5670

	/* begin block 3 */
		// Start line: 5674
	/* end block 3 */
	// End Line: 5675

	/* begin block 4 */
		// Start line: 5674
	/* end block 4 */
	// End Line: 5675

void Camera_GetAudioViewInfo__FiP17DRender_tCalcViewPP8coorddef
               (int cviewP,DRender_tCalcView *cview,coorddef **cvel)

{
  matrixtdef *pmVar1;
  matrixtdef *pmVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((&Input_gLookBehind)[cviewP] == 0) {
    iVar3 = cviewP * 0x110;
    iVar4 = *(int *)((int)&Camera_gInfo.position + iVar3 + 4);
    iVar5 = *(int *)((int)&Camera_gInfo.position + iVar3 + 8);
    (cview->translation).x = ((coorddef *)((int)&Camera_gInfo.position + iVar3))->x;
    (cview->translation).y = iVar4;
    (cview->translation).z = iVar5;
    pmVar2 = &cview->mrotation;
    pmVar1 = (matrixtdef *)((int)&Camera_gInfo.rotation + iVar3);
    do {
      iVar4 = pmVar1->m[1];
      iVar5 = pmVar1->m[2];
      iVar6 = pmVar1->m[3];
      pmVar2->m[0] = pmVar1->m[0];
      pmVar2->m[1] = iVar4;
      pmVar2->m[2] = iVar5;
      pmVar2->m[3] = iVar6;
      pmVar1 = (matrixtdef *)(pmVar1->m + 4);
      pmVar2 = (matrixtdef *)(pmVar2->m + 4);
    } while (pmVar1 != (matrixtdef *)((int)&Camera_gInfo.rotation + iVar3 + 0x20));
    pmVar2->m[0] = pmVar1->m[0];
  }
  else {
    iVar3 = cviewP * 0x110;
    pmVar1 = (matrixtdef *)((int)&Camera_gInfo.rotation + iVar3);
    if ((*(uint *)(&Camera_gInfo.modechange + iVar3) >> 5 & 1) == 0) {
      if ((*(uint *)(&Camera_gInfo.modechange + iVar3) >> 3 & 1) == 0) {
        iVar4 = *(int *)((int)&Camera_gInfo.audioPos + iVar3 + 4);
        iVar5 = *(int *)((int)&Camera_gInfo.audioPos + iVar3 + 8);
        (cview->translation).x = ((coorddef *)((int)&Camera_gInfo.audioPos + iVar3))->x;
        (cview->translation).y = iVar4;
        (cview->translation).z = iVar5;
        Camera_LookBack__FP10matrixtdefT0
                  ((matrixtdef *)((int)&Camera_gInfo.rotation + iVar3),&cview->mrotation);
      }
      else {
        iVar4 = *(int *)((int)&Camera_gInfo.audioPos + iVar3 + 4);
        iVar5 = *(int *)((int)&Camera_gInfo.audioPos + iVar3 + 8);
        (cview->translation).x = ((coorddef *)((int)&Camera_gInfo.audioPos + iVar3))->x;
        (cview->translation).y = iVar4;
        (cview->translation).z = iVar5;
        Camera_AcquireTarget__FiP8coorddefT1P10matrixtdefi
                  (cviewP,(coorddef *)0x0,(coorddef *)cview,&cview->mrotation,0);
      }
    }
    else {
      iVar4 = *(int *)((int)&Camera_gInfo.position + iVar3 + 4);
      iVar5 = *(int *)((int)&Camera_gInfo.position + iVar3 + 8);
      (cview->translation).x = ((coorddef *)((int)&Camera_gInfo.position + iVar3))->x;
      (cview->translation).y = iVar4;
      (cview->translation).z = iVar5;
      pmVar2 = &cview->mrotation;
      do {
        iVar4 = pmVar1->m[1];
        iVar5 = pmVar1->m[2];
        iVar6 = pmVar1->m[3];
        pmVar2->m[0] = pmVar1->m[0];
        pmVar2->m[1] = iVar4;
        pmVar2->m[2] = iVar5;
        pmVar2->m[3] = iVar6;
        pmVar1 = (matrixtdef *)(pmVar1->m + 4);
        pmVar2 = (matrixtdef *)(pmVar2->m + 4);
      } while (pmVar1 != (matrixtdef *)((int)&Camera_gInfo.rotation + iVar3 + 0x20));
      pmVar2->m[0] = pmVar1->m[0];
    }
  }
  switch((&Camera_gInfo.mode)[cviewP * 0x88]) {
  default:
    *cvel = &(&Camera_gInfo.anchor)[cviewP * 0x44]->linearVel;
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

	/* begin block 2 */
		// Start line: 5804
	/* end block 2 */
	// End Line: 5805

	/* begin block 3 */
		// Start line: 5809
	/* end block 3 */
	// End Line: 5810

	/* begin block 4 */
		// Start line: 5809
	/* end block 4 */
	// End Line: 5810

	/* begin block 5 */
		// Start line: 5818
	/* end block 5 */
	// End Line: 5819

int Camera_GetMode__Fi(int cviewP)

{
  if (((((&Cars_gHumanRaceCarList9)[cviewP]->carFlags & 1U) == 0) ||
      (((&Cars_gHumanRaceCarList9)[cviewP]->stats).finishType != 2)) &&
     (((&Cars_gHumanRaceCarList9)[cviewP]->pullOver == 0 ||
      (((&Cars_gHumanRaceCarList9)[cviewP]->stats).finishType == 3)))) {
    return (int)(&Camera_gInfo.mode)[cviewP * 0x88];
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

	/* begin block 2 */
		// Start line: 5843
	/* end block 2 */
	// End Line: 5844

	/* begin block 3 */
		// Start line: 5847
	/* end block 3 */
	// End Line: 5848

	/* begin block 4 */
		// Start line: 5847
	/* end block 4 */
	// End Line: 5848

void Camera_SetMode__Fii(int cviewP,int mode)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  iVar2 = cviewP * 0x110;
  InBetween = 0;
  if (((&Camera_gInfo.modechange)[iVar2] & 1U) == 0) {
    if ((uint)(ushort)(&Camera_gInfo.mode)[cviewP * 0x88] - 0xb < 2) {
      Camera_gGeomScreen = 0xbe;
      TrsProj_SetProjection__Fiiii(0,0,0x140,0xf0);
    }
    if (5 < (uint)(ushort)(&Camera_gInfo.mode)[cviewP * 0x88] - 2) {
      Camera_ResetRelPos__Fi(cviewP + 1);
    }
    if (-1 < (int)(&Camera_gInfo.tumbling)[iVar2]) {
      Anim_FreeHandle__Fi((int)(&Camera_gInfo.tumbling)[iVar2]);
      (&Camera_gInfo.tumbling)[iVar2] = -1;
    }
    (&Camera_gInfo.mode)[cviewP * 0x88] = (short)mode;
    if (0x13 < (short)mode) {
      (&Camera_gInfo.mode)[cviewP * 0x88] = *(short *)GameSetup_gData.carInfo[cviewP].Camera;
    }
    if ((&Camera_gInfo.mode)[cviewP * 0x88] == 0xb) {
      Camera_SetSplineCam__Fi(cviewP);
    }
    (&Camera_gInfo.pitch)[iVar2] = '2';
    iVar10 = (int)(&Camera_gInfo.mode)[cviewP * 0x88];
    uVar3 = *(uint *)(&Camera_gInfo.modechange + iVar2);
    uVar4 = ((&Camera_gFlags[0].pitch)[iVar10 * 4] & 1U) << 1;
    *(uint *)(&Camera_gInfo.modechange + iVar2) = uVar3 & 0xfffffffd | uVar4;
    uVar5 = ((&Camera_gFlags[0].pitch)[iVar10 * 4] & 2U) << 1;
    *(uint *)(&Camera_gInfo.modechange + iVar2) = uVar3 & 0xfffffff9 | uVar4 | uVar5;
    uVar6 = ((&Camera_gFlags[0].pitch)[iVar10 * 4] & 4U) << 1;
    *(uint *)(&Camera_gInfo.modechange + iVar2) = uVar3 & 0xfffffff1 | uVar4 | uVar5 | uVar6;
    uVar7 = ((&Camera_gFlags[0].pitch)[iVar10 * 4] & 8U) << 1;
    *(uint *)(&Camera_gInfo.modechange + iVar2) = uVar3 & 0xffffffe1 | uVar4 | uVar5 | uVar6 | uVar7
    ;
    uVar8 = ((&Camera_gFlags[0].pitch)[iVar10 * 4] & 0x10U) << 1;
    *(uint *)(&Camera_gInfo.modechange + iVar2) =
         uVar3 & 0xffffffc1 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8;
    uVar9 = ((&Camera_gFlags[0].pitch)[iVar10 * 4] & 0x20U) << 1;
    sVar1 = (&Camera_gInfo.mode)[cviewP * 0x88];
    *(uint *)(&Camera_gInfo.modechange + iVar2) =
         uVar3 & 0xffffff81 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9;
    *(uint *)(&Camera_gInfo.modechange + iVar2) =
         uVar3 & 0xf7ffff81 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 |
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

	/* begin block 2 */
		// Start line: 5989
	/* end block 2 */
	// End Line: 5990

	/* begin block 3 */
		// Start line: 5992
	/* end block 3 */
	// End Line: 5993

	/* begin block 4 */
		// Start line: 5992
	/* end block 4 */
	// End Line: 5993

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
  
  iVar4 = cviewP * 0x110;
  if (((&Camera_gInfo.mode)[cviewP * 0x88] != 0xe) &&
     (((&Camera_gInfo.modechange)[iVar4] & 1U) == 0)) {
    if ((uint)(ushort)(&Camera_gInfo.mode)[cviewP * 0x88] - 0xb < 2) {
      Camera_gGeomScreen = 0xbe;
      TrsProj_SetProjection__Fiiii(0,0,0x140,0xf0);
    }
    if (5 < (uint)(ushort)(&Camera_gInfo.mode)[cviewP * 0x88] - 2) {
      Camera_ResetRelPos__Fi(cviewP + 1);
    }
    if (-1 < (int)(&Camera_gInfo.tumbling)[iVar4]) {
      Anim_FreeHandle__Fi((int)(&Camera_gInfo.tumbling)[iVar4]);
      (&Camera_gInfo.tumbling)[iVar4] = -1;
    }
    if ((byte)(&Camera_gInfo.modechange)[iVar4] >> 7 == 0) {
      if (((GameSetup_gData.raceType == 1) || (GameSetup_gData.raceType == 5)) &&
         (((Cars_gHumanRaceCarList9->carFlags & 0x200U) != 0 ||
          ((Cars_gNumHumanRaceCars == 2 && ((PTR_ARRAY_8010fa4c[0]->carFlags & 0x200U) != 0)))))) {
        uVar3 = (uint)(ushort)(&Camera_gInfo.camNum)[cviewP * 0x88] + 1;
        (&Camera_gInfo.camNum)[cviewP * 0x88] = (short)uVar3;
        (&Camera_gInfo.mode)[cviewP * 0x88] =
             *(short *)(GameSetup_gData.carInfo[0].Camera + cviewP * 0x2d + (uVar3 & 3));
      }
      else {
        uVar2 = (&Camera_gInfo.camNum)[cviewP * 0x88] + 1;
        iVar4 = (uint)uVar2 << 0x10;
        iVar11 = iVar4 >> 0x10;
        (&Camera_gInfo.camNum)[cviewP * 0x88] = uVar2;
        (&Camera_gInfo.mode)[cviewP * 0x88] =
             *(short *)((int)GameSetup_gData.carInfo[cviewP].Camera +
                       ((iVar11 + ((iVar11 / 3 + (iVar11 >> 0x1f)) - (iVar4 >> 0x1f)) * -3) *
                        0x10000 >> 0xe));
      }
    }
    else {
      uVar2 = (&Camera_gInfo.camNum)[cviewP * 0x88] + 1;
      iVar4 = (uint)uVar2 << 0x10;
      iVar11 = iVar4 >> 0x10;
      (&Camera_gInfo.camNum)[cviewP * 0x88] = uVar2;
      (&Camera_gInfo.mode)[cviewP * 0x88] =
           *(short *)((int)gSplitCameras +
                     ((iVar11 + ((iVar11 / 3 + (iVar11 >> 0x1f)) - (iVar4 >> 0x1f)) * -3) * 0x10000
                     >> 0xe));
    }
    iVar4 = cviewP * 0x110;
    if (0x13 < (&Camera_gInfo.mode)[cviewP * 0x88]) {
      (&Camera_gInfo.mode)[cviewP * 0x88] = *(short *)GameSetup_gData.carInfo[cviewP].Camera;
    }
    if ((&Camera_gInfo.mode)[cviewP * 0x88] == 0xb) {
      Camera_SetSplineCam__Fi(cviewP);
    }
    (&Camera_gInfo.pitch)[iVar4] = '2';
    iVar11 = (int)(&Camera_gInfo.mode)[cviewP * 0x88];
    uVar3 = *(uint *)(&Camera_gInfo.modechange + iVar4);
    uVar5 = ((&Camera_gFlags[0].pitch)[iVar11 * 4] & 1U) << 1;
    *(uint *)(&Camera_gInfo.modechange + iVar4) = uVar3 & 0xfffffffd | uVar5;
    uVar6 = ((&Camera_gFlags[0].pitch)[iVar11 * 4] & 2U) << 1;
    *(uint *)(&Camera_gInfo.modechange + iVar4) = uVar3 & 0xfffffff9 | uVar5 | uVar6;
    uVar7 = ((&Camera_gFlags[0].pitch)[iVar11 * 4] & 4U) << 1;
    *(uint *)(&Camera_gInfo.modechange + iVar4) = uVar3 & 0xfffffff1 | uVar5 | uVar6 | uVar7;
    uVar8 = ((&Camera_gFlags[0].pitch)[iVar11 * 4] & 8U) << 1;
    *(uint *)(&Camera_gInfo.modechange + iVar4) = uVar3 & 0xffffffe1 | uVar5 | uVar6 | uVar7 | uVar8
    ;
    uVar9 = ((&Camera_gFlags[0].pitch)[iVar11 * 4] & 0x10U) << 1;
    *(uint *)(&Camera_gInfo.modechange + iVar4) =
         uVar3 & 0xffffffc1 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9;
    uVar10 = ((&Camera_gFlags[0].pitch)[iVar11 * 4] & 0x20U) << 1;
    sVar1 = (&Camera_gInfo.mode)[cviewP * 0x88];
    *(uint *)(&Camera_gInfo.modechange + iVar4) =
         uVar3 & 0xffffff81 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10;
    *(uint *)(&Camera_gInfo.modechange + iVar4) =
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

	/* begin block 2 */
		// Start line: 6153
	/* end block 2 */
	// End Line: 6154

	/* begin block 3 */
		// Start line: 6156
	/* end block 3 */
	// End Line: 6157

	/* begin block 4 */
		// Start line: 6156
	/* end block 4 */
	// End Line: 6157

void Camera_ReplayUpdate__FiP15Camera_tCamSlot(int cviewP,Camera_tCamSlot *ptr)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = cviewP * 0x110;
  if (((&Camera_gInfo.modechange)[iVar5] & 1U) == 0) {
    Camera_SetMode__Fii(cviewP,(uint)(byte)ptr->mode);
    uVar2 = *(uint *)(&Camera_gInfo.modechange + iVar5);
    uVar1 = *(uint *)ptr >> 5 & 8;
    *(uint *)(&Camera_gInfo.modechange + iVar5) = uVar2 & 0xfffffff7 | uVar1;
    *(uint *)(&Camera_gInfo.modechange + iVar5) =
         uVar2 & 0xf9fffff7 | uVar1 | (*(uint *)ptr >> 9 & 3) << 0x19;
    (&Camera_gInfo.direction)[iVar5] = (byte)(*(uint *)ptr >> 0xb) & 7;
    Camera_gGeomScreen = (long)*(short *)&ptr->zoom;
    iVar3 = (ptr->pos).x;
    iVar4 = (ptr->pos).y;
    ((coorddef *)((int)&Camera_gInfo.position + iVar5))->x = *(int *)&ptr->fov;
    *(int *)((int)&Camera_gInfo.position + iVar5 + 4) = iVar3;
    *(int *)((int)&Camera_gInfo.position + iVar5 + 8) = iVar4;
    (&Camera_gInfo.TVHeight)[cviewP * 0x44] = (ptr->pos).z;
    EulerToMat__FP10matrixtdefiii
              ((matrixtdef *)((int)&Camera_gInfo.rotation + iVar5),(int)*(short *)&ptr->splineOffset
               ,(int)*(short *)((int)&ptr->splineOffset + 2),(int)(ptr->euler).x);
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

	/* begin block 2 */
		// Start line: 6214
	/* end block 2 */
	// End Line: 6215

	/* begin block 3 */
		// Start line: 6217
	/* end block 3 */
	// End Line: 6218

	/* begin block 4 */
		// Start line: 6217
	/* end block 4 */
	// End Line: 6218

void Camera_ResetRelPos__Fi(int bitMask)

{
  if ((bitMask & 1U) != 0) {
    Camera_gInfo.relpos.x = ((Camera_gInfo.anchor)->orientMat).m[6] * -4;
    Camera_gInfo.relpos.y = ((Camera_gInfo.anchor)->orientMat).m[7] * -4;
    Camera_gInfo.relpos.z = ((Camera_gInfo.anchor)->orientMat).m[8] * -4;
  }
  if ((bitMask & 2U) != 0) {
    DAT_8010f3d0 = *(int *)(Camera_gInfo.slicePos.simQuad + 0x108) * -4;
    DAT_8010f3d4 = *(int *)(Camera_gInfo.slicePos.simQuad + 0x10c) * -4;
    DAT_8010f3d8 = *(int *)(Camera_gInfo.slicePos.simQuad + 0x110) * -4;
  }
  return;
}





