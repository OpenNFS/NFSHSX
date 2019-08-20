#include "NFS4.H"
#include "PHYSICS.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Physics_InitCarSpecs__FP8Car_tObjP10Udff_tInfo(struct Car_tObj *carObj /*$s2*/, struct Udff_tInfo *handle /*$s1*/)
 // line 243, offset 0x800a86c8
	/* begin block 1 */
		// Start line: 244
		// Start offset: 0x800A86C8
		// Variables:
	// 		int i; // $s0
	/* end block 1 */
	// End offset: 0x800A8798
	// End Line: 256

void Physics_InitCarSpecs__FP8Car_tObjP10Udff_tInfo(Car_tObj *carObj,Udff_tInfo *handle)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->mass = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->numGears = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->gearShiftDelay = iVar1;
  iVar1 = 0;
  do {
    iVar2 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar3 = iVar1 + 1;
    carObj->specs->velToRpmRatio[iVar1] = iVar2;
    iVar1 = iVar3;
  } while (iVar3 < 8);
  iVar1 = 0;
  do {
    iVar2 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar3 = iVar1 + 1;
    carObj->specs->gearEfficiency[iVar1] = iVar2;
    iVar1 = iVar3;
  } while (iVar3 < 8);
  iVar1 = 0;
  do {
    iVar2 = Udff_GetInt__FP10Udff_tInfo(handle);
    iVar3 = iVar1 + 1;
    carObj->specs->torqueCurve[iVar1] = iVar2;
    iVar1 = iVar3;
  } while (iVar3 < 0x29);
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->redline = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->maxSpeed = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->frontDriveRatio = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->maxBrakeAcc = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->frontBrakeRatio = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->wheelBase = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->frontGripBias = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->maxSteeringAcc = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->steeringRamp = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->lateralGripMult = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->frontAeroDownForce = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->rearAeroDownForce = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->gasOffFactor = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->gTransferFactor = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->slideMultiplier = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->spinVelCap = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->dampingPitchRate = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->dampingRollRate = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->suspensionStiffness = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->pitchAngularVelCap = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->rollAngularVelCap = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->damageFactor = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->bodyPitchFactor = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->bodyRollFactor = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->tireRange = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->rideOffset = iVar1;
  iVar1 = Udff_GetInt__FP10Udff_tInfo(handle);
  carObj->specs->dragFactor = iVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_CalculateDerivedCarSpecs__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 287, offset 0x800a8964
	/* begin block 1 */
		// Start line: 288
		// Start offset: 0x800A8964
		// Variables:
	// 		int i; // $s2
	// 		int accAtMaxSpeedInHighestGear; // $a0
	/* end block 1 */
	// End offset: 0x800A8DB8
	// End Line: 403

/* WARNING: Removing unreachable block (ram,0x800a89b0) */

void Physics_CalculateDerivedCarSpecs__FP8Car_tObj(Car_tObj *carObj)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  Car_tSpecs *pCVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = carObj->specs->redline;
  if (iVar3 == 0) {
    trap(0x1c00);
  }
  carObj->specs->redlineInv = 0x10000 / iVar3;
  if (carObj->carInfo->WeightTransfer == 1) {
    carObj->specs->steeringRamp = carObj->specs->steeringRamp + 1;
    uVar1 = fixedmult(carObj->specs->maxSteeringAcc,(int)&DAT_0001147a);
    carObj->specs->maxSteeringAcc = uVar1;
  }
  if (carObj->carInfo->GroundEffects == 1) {
    carObj->specs->steeringRamp = carObj->specs->steeringRamp + 1;
    uVar1 = fixedmult(carObj->specs->frontAeroDownForce,(int)&DAT_00013333);
    carObj->specs->frontAeroDownForce = uVar1;
    uVar1 = fixedmult(carObj->specs->rearAeroDownForce,(int)&DAT_00013333);
    carObj->specs->rearAeroDownForce = uVar1;
    uVar1 = fixedmult(carObj->specs->mass,(int)&DAT_0000cccc);
    carObj->specs->mass = uVar1;
    uVar1 = fixedmult(carObj->specs->lateralGripMult,(int)&DAT_00011999);
    carObj->specs->lateralGripMult = uVar1;
  }
  if (carObj->carInfo->EngineMods == 1) {
    uVar1 = carObj->specs->gearShiftDelay;
    carObj->specs->gearShiftDelay = (int)(uVar1 + (uVar1 >> 0x1f)) >> 1;
    uVar1 = fixedmult(carObj->specs->maxBrakeAcc,(int)&DAT_00014000);
    carObj->specs->maxBrakeAcc = uVar1;
    iVar3 = 0;
    do {
      uVar1 = fixedmult(carObj->specs->torqueCurve[iVar3],(int)&DAT_00012666);
      iVar6 = iVar3 + 1;
      carObj->specs->torqueCurve[iVar3] = uVar1;
      iVar3 = iVar6;
    } while (iVar6 < 0x29);
    uVar1 = fixedmult(carObj->specs->maxSpeed,(int)&DAT_00011999);
    carObj->specs->maxSpeed = uVar1;
  }
  pCVar4 = carObj->specs;
  iVar3 = pCVar4->numGears;
  iVar6 = 0;
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      iVar5 = (int)&pCVar4->mass + iVar3;
      iVar2 = 0x28f;
      if (*(uint *)(iVar5 + 0xc) != 0) {
        iVar2 = fixeddiv(0x10000,*(uint *)(iVar5 + 0xc));
        iVar5 = (int)&carObj->specs->mass + iVar3;
      }
      *(int *)(iVar5 + 0x180) = iVar2;
      iVar6 = iVar6 + 1;
      iVar2 = fixeddiv(*(uint *)((int)carObj->specs->velToRpmRatio + iVar3),carObj->specs->mass);
      *(int *)((int)carObj->specs->gearAccCoeff + iVar3) = iVar2;
      iVar2 = fixeddiv(*(uint *)((int)carObj->specs->gearAccCoeff + iVar3),(uint)&LAB_000a0000);
      *(int *)((int)carObj->specs->gearAccCoeff + iVar3) = iVar2;
      iVar2 = (int)&carObj->specs->mass + iVar3;
      uVar1 = fixedmult(*(int *)(iVar2 + 0x1a0),*(int *)(iVar2 + 0x2c));
      *(uint *)((int)carObj->specs->gearAccCoeff + iVar3) = uVar1;
      uVar1 = fixedmult(*(int *)((int)carObj->specs->velToRpmRatioInv + iVar3),
                        carObj->specs->redline << 0x10);
      iVar2 = fixeddiv(0x10000,uVar1);
      *(int *)((int)carObj->specs->gearVelInv + iVar3) = iVar2;
      pCVar4 = carObj->specs;
      iVar3 = iVar3 + 4;
    } while (iVar6 < pCVar4->numGears);
    pCVar4 = carObj->specs;
    iVar3 = pCVar4->numGears;
  }
  uVar1 = fixedmult(pCVar4->maxSpeed,pCVar4->velToRpmRatio[iVar3 + -1]);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 0xffff;
  }
  iVar3 = (int)uVar1 >> 0x10;
  pCVar4 = carObj->specs;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  uVar1 = fixedmult(pCVar4->torqueCurve[iVar3 >> 8],pCVar4->gearAccCoeff[pCVar4->numGears + -1]);
  iVar3 = carObj->specs->maxSpeed;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xffff;
  }
  iVar3 = iVar3 >> 0x10;
  iVar3 = fixeddiv(uVar1,iVar3 * iVar3 * iVar3);
  carObj->specs->dragCoeff = iVar3;
  if (7 < GameSetup_gData.track) {
    carObj->specs->gasOffFactor = carObj->specs->gasOffFactor + 0x2666;
    carObj->specs->frontBrakeRatio = carObj->specs->frontBrakeRatio + -0x2666;
    carObj->specs->frontGripBias = carObj->specs->frontGripBias + 0x147;
  }
  uVar1 = carObj->specs->wheelBase;
  uVar1 = fixedmult(0x10000,(int)(uVar1 + (uVar1 >> 0x1f)) >> 1);
  carObj->specs->alphaToAccRotInertia = uVar1;
  uVar1 = fixedmult(carObj->specs->alphaToAccRotInertia,0x648);
  carObj->specs->alphaToAccRotInertia = uVar1;
  carObj->specs->alphaToAccRotInertia = carObj->specs->alphaToAccRotInertia << 8;
  iVar3 = fixeddiv(0x10000,carObj->specs->alphaToAccRotInertia);
  carObj->specs->accToAlphaRotInertia = iVar3;
  iVar3 = fixeddiv(0x10000,carObj->specs->lateralGripMult);
  carObj->specs->lateralGripMultInv = iVar3;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_CheckGamedata__Fv()
 // line 414, offset 0x800a8e74
	/* begin block 1 */
		// Start line: 415
		// Start offset: 0x800A8E74
	/* end block 1 */
	// End offset: 0x800A8E74
	// End Line: 415

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Physics_CheckGamedata__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Physics_AttenuateVelocity__FP8Car_tObjiP10matrixtdef(struct Car_tObj *carObj /*$s2*/, int force /*$a1*/, struct matrixtdef *roadMat /*$a0*/)
 // line 591, offset 0x800a8e7c
	/* begin block 1 */
		// Start line: 592
		// Start offset: 0x800A8E7C
		// Variables:
	// 		struct coorddef vel_b; // stack offset -80
	// 		int vx; // $t0
	// 		int absvelbx; // $s3
	// 		struct matrixtdef transposeMat; // stack offset -64
	/* end block 1 */
	// End offset: 0x800A92B4
	// End Line: 658

/* WARNING: Removing unreachable block (ram,0x800a8f2c) */

int Physics_AttenuateVelocity__FP8Car_tObjiP10matrixtdef
              (Car_tObj *carObj,int force,matrixtdef *roadMat)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_28;
  int local_24;
  int local_20;
  
  iVar8 = force;
  if (force < 0) {
    iVar8 = force + 0xff;
  }
  iVar1 = roadMat->m[0];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = roadMat->m[3];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  if (force < 0) {
    force = force + 0xff;
  }
  iVar3 = roadMat->m[6];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar10 = (carObj->N).linearVel.x;
  iVar9 = (carObj->N).position.z;
  (carObj->N).position.x = (carObj->N).position.x - (iVar8 >> 8) * (iVar1 >> 8);
  iVar1 = (carObj->N).position.y;
  (carObj->N).position.z = iVar9 + (force >> 8) * (iVar3 >> 8);
  (carObj->N).position.y = iVar1 + (iVar8 >> 8) * (iVar2 >> 8);
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar8 = roadMat->m[0];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar1 = (carObj->N).linearVel.y;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = roadMat->m[1];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar3 = (carObj->N).linearVel.z;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar9 = roadMat->m[2];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar8 = (iVar10 >> 8) * (iVar8 >> 8) + (iVar1 >> 8) * (iVar2 >> 8) + (iVar3 >> 8) * (iVar9 >> 8);
  iVar1 = (carObj->N).linearVel.x;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = roadMat->m[6];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar3 = (carObj->N).linearVel.y;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar9 = roadMat->m[7];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar10 = (carObj->N).linearVel.z;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar4 = roadMat->m[8];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar11 = -iVar8;
  if (0 < iVar8) {
    iVar11 = iVar8;
  }
  iVar11 = iVar11 >> 1;
  local_48 = (iVar1 >> 8) * (iVar2 >> 8) + (iVar3 >> 8) * (iVar9 >> 8) +
             (iVar10 >> 8) * (iVar4 >> 8);
  if (local_48 < 1) {
    if (local_48 < -0x50000) {
      iVar8 = iVar11;
      if (iVar11 < 0) {
        iVar8 = iVar11 + 0xff;
      }
      local_48 = local_48 + (iVar8 >> 8) * 0xc0;
      if (0 < local_48) {
        local_48 = 0;
      }
    }
  }
  else {
    if (0x50000 < local_48) {
      iVar8 = iVar11;
      if (iVar11 < 0) {
        iVar8 = iVar11 + 0xff;
      }
      local_48 = local_48 + (iVar8 >> 8) * -0xc0;
      if (local_48 < 0) {
        local_48 = 0;
      }
    }
  }
  transpose((undefined4 *)roadMat,&local_40);
  uVar5 = fixedmult(0,local_40);
  uVar6 = fixedmult(0,local_3c);
  uVar7 = fixedmult(local_48,local_38);
  (carObj->N).linearVel.x = uVar5 + uVar6 + uVar7;
  uVar5 = fixedmult(0,local_28);
  uVar6 = fixedmult(0,local_24);
  uVar7 = fixedmult(local_48,local_20);
  iVar8 = (carObj->N).linearVel.y;
  (carObj->N).linearVel.z = uVar5 + uVar6 + uVar7;
  if (0 < iVar8) {
    (carObj->N).linearVel.y = 0;
  }
  uVar5 = fixedmult((carObj->N).linearVel.x,(carObj->N).orientMat.m[0]);
  uVar6 = fixedmult((carObj->N).linearVel.y,(carObj->N).orientMat.m[1]);
  uVar7 = fixedmult((carObj->N).linearVel.z,(carObj->N).orientMat.m[2]);
  iVar8 = (carObj->N).linearVel.x;
  iVar1 = (carObj->N).orientMat.m[3];
  (carObj->linearVel_ch).x = uVar5 + uVar6 + uVar7;
  uVar5 = fixedmult(iVar8,iVar1);
  uVar6 = fixedmult((carObj->N).linearVel.y,(carObj->N).orientMat.m[4]);
  uVar7 = fixedmult((carObj->N).linearVel.z,(carObj->N).orientMat.m[5]);
  iVar8 = (carObj->N).linearVel.x;
  iVar1 = (carObj->N).orientMat.m[6];
  (carObj->linearVel_ch).y = uVar5 + uVar6 + uVar7;
  uVar5 = fixedmult(iVar8,iVar1);
  uVar6 = fixedmult((carObj->N).linearVel.y,(carObj->N).orientMat.m[7]);
  uVar7 = fixedmult((carObj->N).linearVel.z,(carObj->N).orientMat.m[8]);
  iVar8 = (carObj->N).linearVel.x;
  iVar1 = (carObj->N).linearVel.z;
  if (iVar8 < 0) {
    iVar8 = -iVar8;
  }
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  (carObj->linearVel_ch).z = uVar5 + uVar6 + uVar7;
  if (iVar1 < iVar8) {
    iVar8 = iVar8 + (iVar1 >> 2);
  }
  else {
    iVar8 = iVar1 + (iVar8 >> 2);
  }
  (carObj->N).speedXZ = iVar8;
  return iVar11;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_SetCurrentWallType__Fi(int wallType /*$a0*/)
 // line 665, offset 0x800a92d8
	/* begin block 1 */
		// Start line: 666
		// Start offset: 0x800A92D8
	/* end block 1 */
	// End offset: 0x800A92D8
	// End Line: 667

void Physics_SetCurrentWallType__Fi(int wallType)

{
  DAT_00000db0 = wallType;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Physics_GetTorque__FP8Car_tObji(struct Car_tObj *carObj /*$a0*/, int index /*$a1*/)
 // line 672, offset 0x800a92e4
	/* begin block 1 */
		// Start line: 673
		// Start offset: 0x800A92E4
	/* end block 1 */
	// End offset: 0x800A9308
	// End Line: 675

int Physics_GetTorque__FP8Car_tObji(Car_tObj *carObj,int index)

{
  int iVar1;
  int iVar2;
  
  iVar1 = index;
  if (0x28 < index) {
    iVar1 = 0x28;
  }
  iVar2 = 0;
  if ((0 < iVar1) && (iVar2 = 0x28, 0x28 >= index)) {
    iVar2 = index;
  }
  return carObj->specs->torqueCurve[iVar2];
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_CorrectPostCollisionYaw__FP8Car_tObjiG8coorddef(struct Car_tObj *carObj /*$s2*/, int impactVel /*$a1*/, struct coorddef barrierVec /*stack 8*/)
 // line 680, offset 0x800a9320
	/* begin block 1 */
		// Start line: 681
		// Start offset: 0x800A9320
		// Variables:
	// 		int diffZ; // $s3
	// 		int diffX; // $s0
	// 		int result; // $a0
	/* end block 1 */
	// End offset: 0x800A949C
	// End Line: 722

void Physics_CorrectPostCollisionYaw__FP8Car_tObjiG8coorddef
               (Car_tObj *carObj,int impactVel,coorddef barrierVec)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_a2;
  int in_a3;
  int iVar6;
  int iVar7;
  
  (carObj->N).collision.impulse = impactVel * 6;
  uVar1 = DAT_00000db0;
  (carObj->N).collision.otherObj = (BO_tNewtonObj *)0x0;
  (carObj->N).collision.sfxType = uVar1 | 0x40000;
  if ((impactVel < 0xf0000) || ((carObj->linearVel_ch).z < 0x140000)) {
    uVar1 = fixedmult(in_a2,(carObj->N).shadowMat.m[6]);
    uVar2 = fixedmult(in_a3,(carObj->N).shadowMat.m[7]);
    uVar3 = fixedmult(barrierVec.x,(carObj->N).shadowMat.m[8]);
    iVar7 = uVar1 + uVar2 + uVar3;
    uVar1 = fixedmult(in_a2,(carObj->N).shadowMat.m[0]);
    uVar2 = fixedmult(in_a3,(carObj->N).shadowMat.m[1]);
    uVar3 = fixedmult(barrierVec.x,(carObj->N).shadowMat.m[2]);
    iVar6 = uVar1 + uVar2 + uVar3;
    iVar5 = iVar7;
    if (iVar7 < 0) {
      iVar5 = -iVar7;
    }
    iVar4 = iVar6;
    if (iVar6 < 0) {
      iVar4 = -iVar6;
    }
    if (iVar4 < iVar5) {
      iVar5 = iVar4;
    }
    iVar5 = iVar5 >> 1;
    if (iVar7 < 0) {
      if (iVar6 < 0) {
        iVar5 = -iVar5;
      }
    }
    else {
      if (0 < iVar6) {
        iVar5 = -iVar5;
      }
      iVar5 = iVar5 >> 1;
    }
    if ((0xd6666 < (carObj->linearVel_ch).z) &&
       (((0 < iVar5 && (0 < (carObj->control).steering)) ||
        ((iVar5 < 0 && ((carObj->control).steering < 0)))))) {
      iVar5 = iVar5 >> 2;
    }
    (carObj->N).angularVel.y = iVar5;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Physics_DoBarrierCheck__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 761, offset 0x800a94b8
	/* begin block 1 */
		// Start line: 762
		// Start offset: 0x800A94B8
		// Variables:
	// 		int diff; // $s4
	// 		int carCollisionWidth; // $t0
	// 		int x_relRoad; // $s2
	// 		int wallType; // $v0
	// 		int collide; // $s3
	// 		struct coorddef vel_b; // stack offset -96
	// 		struct coorddef right; // stack offset -80
	// 		struct coorddef normal; // stack offset -64
	// 		int slice; // $s5

		/* begin block 1.1 */
			// Start line: 762
			// Start offset: 0x800A94B8
			// Variables:
		// 		int r1; // $a1
		// 		int r2; // $v0
		// 		int r3; // $a0
		/* end block 1.1 */
		// End offset: 0x800A94B8
		// End Line: 762

		/* begin block 1.2 */
			// Start line: 762
			// Start offset: 0x800A94B8
			// Variables:
		// 		int x1; // $t1
		// 		int x2; // $a2
		// 		int x3; // $-1
		/* end block 1.2 */
		// End offset: 0x800A95DC
		// End Line: 804

		/* begin block 1.3 */
			// Start line: 804
			// Start offset: 0x800A95DC
			// Variables:
		// 		int r1; // $v1
		// 		int r2; // $a0
		// 		int r3; // $a3
		// 		int x1; // $t1
		// 		int x2; // $a2
		// 		int x3; // $t3
		/* end block 1.3 */
		// End offset: 0x800A977C
		// End Line: 827

		/* begin block 1.4 */
			// Start line: 883
			// Start offset: 0x800A9820
			// Variables:
		// 		struct coorddef widthVector; // stack offset -48
		/* end block 1.4 */
		// End offset: 0x800A9938
		// End Line: 889
	/* end block 1 */
	// End offset: 0x800A9A2C
	// End Line: 933

int Physics_DoBarrierCheck__FP8Car_tObj(Car_tObj *carObj)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  Trk_NewSlice *pTVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int impactVel;
  int local_60;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 in_stack_ffffff9c;
  coorddef local_40;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar16 = 0;
  iVar17 = (int)(carObj->N).simRoadInfo.slice;
  pTVar6 = BWorldSm_slices + iVar17;
  cVar1 = pTVar6->right[0];
  cVar2 = pTVar6->right[2];
  local_40.x = (int)cVar1 * 0x200;
  cVar3 = pTVar6->right[1];
  iVar15 = 0;
  iVar9 = (int)cVar2 * 0x200;
  local_40.y = (int)cVar3 * 0x200;
  local_60 = ((carObj->N).position.x + ((carObj->N).linearVel.x >> 5)) - pTVar6->center[0];
  iVar14 = ((carObj->N).position.y + ((carObj->N).linearVel.y >> 5)) - pTVar6->center[1];
  iVar7 = ((carObj->N).position.z + ((carObj->N).linearVel.z >> 5)) - pTVar6->center[2];
  impactVel = local_40.x;
  if (local_40.x < 0) {
    impactVel = local_40.x + 0xff;
  }
  iVar4 = local_60;
  if (local_60 < 0) {
    iVar4 = local_60 + 0xff;
  }
  iVar11 = local_40.y;
  if (local_40.y < 0) {
    iVar11 = local_40.y + 0xff;
  }
  if (iVar14 < 0) {
    iVar14 = iVar14 + 0xff;
  }
  iVar12 = iVar9;
  if (iVar9 < 0) {
    iVar12 = iVar9 + 0xff;
  }
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar10 = (carObj->N).orientMat.m[7];
  iVar8 = (carObj->N).orientMat.m[6];
  iVar13 = (carObj->N).orientMat.m[8];
  impactVel = (impactVel >> 8) * (iVar4 >> 8) + (iVar11 >> 8) * (iVar14 >> 8) +
              (iVar12 >> 8) * (iVar7 >> 8);
  (carObj->N).xRelRoadCenter = impactVel;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar14 = local_40.x;
  if (local_40.x < 0) {
    iVar14 = local_40.x + 0xff;
  }
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar7 = local_40.y;
  if (local_40.y < 0) {
    iVar7 = local_40.y + 0xff;
  }
  if (iVar13 < 0) {
    iVar13 = iVar13 + 0xff;
  }
  iVar4 = iVar9;
  if (iVar9 < 0) {
    iVar4 = iVar9 + 0xff;
  }
  iVar14 = (iVar8 >> 8) * (iVar14 >> 8) + (iVar10 >> 8) * (iVar7 >> 8) +
           (iVar13 >> 8) * (iVar4 >> 8);
  uVar5 = fixedmult((carObj->N).dimension.z,iVar14);
  if ((int)uVar5 < 1) {
    uVar5 = fixedmult((carObj->N).dimension.z,iVar14);
    uVar5 = -uVar5;
  }
  else {
    uVar5 = fixedmult((carObj->N).dimension.z,iVar14);
  }
  iVar7 = (carObj->N).orientMat.m[1];
  iVar14 = (carObj->N).orientMat.m[0];
  iVar4 = (carObj->N).orientMat.m[2];
  if (iVar14 < 0) {
    iVar14 = iVar14 + 0xff;
  }
  iVar11 = local_40.x;
  if (local_40.x < 0) {
    iVar11 = local_40.x + 0xff;
  }
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar12 = local_40.y;
  if (local_40.y < 0) {
    iVar12 = local_40.y + 0xff;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar8 = iVar9;
  if (iVar9 < 0) {
    iVar8 = iVar9 + 0xff;
  }
  iVar10 = (carObj->N).dimension.x;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar14 = (iVar14 >> 8) * (iVar11 >> 8) + (iVar7 >> 8) * (iVar12 >> 8) +
           (iVar4 >> 8) * (iVar8 >> 8);
  if (iVar14 < 0) {
    iVar14 = iVar14 + 0xff;
  }
  iVar14 = (iVar10 >> 8) * (iVar14 >> 8);
  if (iVar14 < 0) {
    iVar14 = -iVar14;
  }
  iVar7 = uVar5 + iVar14 + (int)BWorldSm_slices[iVar17].leftDrive * -0x100;
  if (impactVel < (int)(iVar7 - carObj->donutMode)) {
    iVar15 = -1;
    iVar16 = iVar7 - impactVel;
    DAT_00000db0 = 1;
  }
  iVar14 = (int)BWorldSm_slices[iVar17].rightDrive * 0x100 - (uVar5 + iVar14);
  if ((int)(iVar14 + carObj->donutMode) < impactVel) {
    iVar15 = 1;
    iVar16 = impactVel - iVar14;
    DAT_00000db0 = 1;
  }
  impactVel = 0;
  if (iVar15 != 0) {
    impactVel = Force_IsForceOn__FP8Car_tObj(carObj);
    if (impactVel != 0) {
      Force_HitWall__Fi(0x1e0000);
    }
    impactVel = (carObj->N).dimension.x;
    if (impactVel < 0) {
      impactVel = impactVel + 0xff;
    }
    local_30 = (impactVel >> 8) * local_40.x;
    if (local_30 < 0) {
      local_30 = local_30 + 0xff;
    }
    local_30 = local_30 >> 8;
    impactVel = (carObj->N).dimension.x;
    if (impactVel < 0) {
      impactVel = impactVel + 0xff;
    }
    local_2c = (impactVel >> 8) * local_40.y;
    if (local_2c < 0) {
      local_2c = local_2c + 0xff;
    }
    local_2c = local_2c >> 8;
    impactVel = (carObj->N).dimension.x;
    if (impactVel < 0) {
      impactVel = impactVel + 0xff;
    }
    local_28 = (impactVel >> 8) * iVar9;
    if (local_28 < 0) {
      local_28 = local_28 + 0xff;
    }
    local_28 = local_28 >> 8;
    if (iVar15 < 1) {
      (carObj->N).collision.collisionPoint.x = (carObj->N).position.x - local_30;
      (carObj->N).collision.collisionPoint.y = (carObj->N).position.y - local_2c;
      impactVel = (carObj->N).position.z - local_28;
    }
    else {
      (carObj->N).collision.collisionPoint.x = (carObj->N).position.x + local_30;
      (carObj->N).collision.collisionPoint.y = (carObj->N).position.y + local_2c;
      impactVel = (carObj->N).position.z + local_28;
    }
    (carObj->N).collision.collisionPoint.z = impactVel;
    if ((((carObj->N).objAltitude < 0x999a) && (0xe665 < (carObj->N).orientationToGround.y)) &&
       (impactVel = iVar16 * 2, (carObj->N).flightTime == 0)) {
      if (impactVel < 0) {
        impactVel = iVar16 * -2;
      }
      impactVel = Physics_AttenuateVelocity__FP8Car_tObjiP10matrixtdef
                            (carObj,iVar15 * impactVel,&(carObj->N).roadMatrix);
      Physics_CorrectPostCollisionYaw__FP8Car_tObjiG8coorddef
                (carObj,impactVel,
                 (coorddef)CONCAT48(local_60,CONCAT44(in_stack_ffffff9c,local_40.z)));
      impactVel = iVar15;
    }
    else {
      local_40.z = iVar9;
      if (-1 < iVar15) {
        local_40.x = (int)cVar1 * -0x200;
        local_40.y = (int)cVar3 * -0x200;
        local_40.z = (int)cVar2 * -0x200;
      }
      Collide_TestWithPlane__FP13BO_tNewtonObjP8coorddefT1
                ((BO_tNewtonObj *)carObj,&local_40,&(carObj->N).position);
      uVar5 = DAT_00000db0;
      impactVel = iVar15;
      if ((carObj->N).collision.impulse != 0) {
        (carObj->N).collision.otherObj = (BO_tNewtonObj *)0x0;
        (carObj->N).collision.sfxType = uVar5 | 0x40000;
        impactVel = iVar15;
      }
    }
  }
  return impactVel;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_AutoShift__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 938, offset 0x800a9a50
	/* begin block 1 */
		// Start line: 939
		// Start offset: 0x800A9A50
		// Variables:
	// 		int wheelRpm; // $s4
	// 		int previousRpm; // $a1
	// 		int previousGear; // $s2
	// 		int nextGear; // $s3
	// 		int SkipLastGear; // $s6
	// 		int ShiftPoint; // $s5
	// 		int sliding; // $s7

		/* begin block 1.1 */
			// Start line: 985
			// Start offset: 0x800A9B48
			// Variables:
		// 		int velocity; // $s1
		/* end block 1.1 */
		// End offset: 0x800A9BD0
		// End Line: 993
	/* end block 1 */
	// End offset: 0x800A9CE0
	// End Line: 1033

void Physics_AutoShift__FP8Car_tObj(Car_tObj *carObj)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  Car_tSpecs *pCVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pCVar7 = carObj->specs;
  iVar10 = pCVar7->redline;
  iVar12 = iVar10 / 6;
  if (1 < (byte)(carObj->control).gear) {
    if (carObj->RSControl != 0) {
      iVar12 = iVar10 / 2;
    }
    iVar12 = iVar10 - iVar12;
    iVar6 = carObj->slide;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    uVar4 = fixedmult(pCVar7->velToRpmRatioInv[pCVar7->numGears + -2],iVar10 << 0x10);
    bVar3 = carObj->specs->maxSpeed < (int)uVar4;
    iVar10 = 1;
    if (bVar3) {
      iVar10 = 2;
    }
    bVar1 = (carObj->control).gear;
    uVar8 = (uint)bVar1;
    uVar4 = uVar8;
    if ((int)uVar8 < carObj->specs->numGears - iVar10) {
      uVar4 = uVar8 + 1;
    }
    if (2 < bVar1) {
      uVar8 = uVar8 - 1;
    }
    iVar10 = (carObj->N).speedXZ;
    if ((carObj->linearVel_ch).z < 0) {
      iVar10 = -iVar10;
    }
    uVar5 = fixedmult(iVar10,carObj->specs->velToRpmRatio[(uint)(byte)(carObj->control).gear]);
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + 0xffff;
    }
    iVar11 = (int)uVar5 >> 0x10;
    fixedmult(iVar10,carObj->specs->velToRpmRatio[uVar4]);
    uVar5 = fixedmult(iVar10,carObj->specs->velToRpmRatio[uVar8]);
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + 0xffff;
    }
    if (DAT_00000da8 < 0x8001) {
      iVar10 = iVar11;
      if (iVar11 < 0) {
        iVar10 = -iVar11;
      }
      if (iVar10 <= carObj->specs->redline) {
        if (iVar12 <= (int)uVar5 >> 0x10) {
          return;
        }
        if ((int)uVar8 < 2) {
          return;
        }
        if (0x1998 < iVar6) {
          return;
        }
        if (uVar8 == (uint)(byte)(carObj->control).gear) {
          return;
        }
        pCVar7 = carObj->specs;
        (carObj->control).downShifting = '\x01';
        (carObj->control).gear = (char)uVar8;
        (carObj->control).gearShiftTimer = *(char *)&pCVar7->gearShiftDelay;
        return;
      }
    }
    if ((iVar12 + 500 < iVar11) &&
       (uVar9 = (uint)(byte)(carObj->control).gear,
       (int)uVar9 < (int)(carObj->specs->numGears - ((uint)bVar3 + 1)))) {
      if (uVar4 != uVar9) {
        cVar2 = (carObj->control).gear;
        pCVar7 = carObj->specs;
        (carObj->control).downShifting = '\0';
        (carObj->control).gear = (char)uVar4;
        (carObj->control).lastGear = cVar2;
        (carObj->control).gearShiftTimer = *(char *)&pCVar7->gearShiftDelay;
      }
    }
    else {
      if (((int)uVar5 >> 0x10 < iVar12) && (uVar8 != (uint)(byte)(carObj->control).gear)) {
        cVar2 = (carObj->control).gear;
        pCVar7 = carObj->specs;
        (carObj->control).downShifting = '\x01';
        (carObj->control).gear = (char)uVar8;
        (carObj->control).lastGear = cVar2;
        (carObj->control).gearShiftTimer = *(char *)&pCVar7->gearShiftDelay;
      }
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_RampCarControlValues__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 1044, offset 0x800a9d0c
	/* begin block 1 */
		// Start line: 1045
		// Start offset: 0x800A9D0C
		// Variables:
	// 		int i; // $s0
	// 		int diff; // $v1
	// 		int gear; // $s2

		/* begin block 1.1 */
			// Start line: 1068
			// Start offset: 0x800A9D50

			/* begin block 1.1.1 */
				// Start line: 1080
				// Start offset: 0x800A9DE4

				/* begin block 1.1.1.1 */
					// Start line: 1084
					// Start offset: 0x800A9DE4
					// Variables:
				// 		char inc; // $a0
				/* end block 1.1.1.1 */
				// End offset: 0x800A9E4C
				// End Line: 1094

				/* begin block 1.1.1.2 */
					// Start line: 1100
					// Start offset: 0x800A9E4C

					/* begin block 1.1.1.2.1 */
						// Start line: 1101
						// Start offset: 0x800A9E64
					/* end block 1.1.1.2.1 */
					// End offset: 0x800A9EA4
					// End Line: 1108
				/* end block 1.1.1.2 */
				// End offset: 0x800A9EB0
				// End Line: 1111

				/* begin block 1.1.1.3 */
					// Start line: 1212
					// Start offset: 0x800AA1CC

					/* begin block 1.1.1.3.1 */
						// Start line: 1213
						// Start offset: 0x800AA1E4
						// Variables:
					// 		int rampIn; // $a0
					/* end block 1.1.1.3.1 */
					// End offset: 0x800AA228
					// End Line: 1220
				/* end block 1.1.1.3 */
				// End offset: 0x800AA234
				// End Line: 1223
			/* end block 1.1.1 */
			// End offset: 0x800AA234
			// End Line: 1223
		/* end block 1.1 */
		// End offset: 0x800AA234
		// End Line: 1223
	/* end block 1 */
	// End offset: 0x800AA4CC
	// End Line: 1279

void Physics_RampCarControlValues__FP8Car_tObj(Car_tObj *carObj)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  Car_tSpecs *pCVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  if ((carObj->RSControl != 0) && ((byte)(carObj->control).gear < 2)) {
    (carObj->control).desiredGear = '\x02';
    (carObj->control).gear = '\x02';
  }
  if (1 < (carObj->stats).finishType) {
    iVar5 = (carObj->N).linearVel.x;
    (carObj->control).steering = 0;
    (carObj->control).gasLevel = '\0';
    (carObj->control).brakeLevel = -1;
    (carObj->control).downShifting = '\0';
    iVar5 = iVar5 * 0xfe;
    (carObj->control).hanno = 0;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar6 = (carObj->N).linearVel.y;
    (carObj->N).linearVel.x = iVar5 >> 8;
    iVar6 = iVar6 * 0xfe;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar5 = (carObj->N).linearVel.z;
    (carObj->N).linearVel.y = iVar6 >> 8;
    iVar5 = iVar5 * 0xfe;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    (carObj->N).linearVel.z = iVar5 >> 8;
    goto LAB_800aa234;
  }
  iVar5 = 0x30;
  if (carObj->carInfo->RampGas != 0) {
    iVar5 = 0x24;
  }
  bVar1 = (carObj->control).gasLevel;
  iVar6 = (uint)(byte)(carObj->control).desiredGasLevel - (uint)bVar1;
  if (iVar6 < 0) {
    cVar3 = bVar1 + (char)iVar6;
    if (iVar5 <= -iVar6) {
      cVar3 = bVar1 - (char)iVar5;
    }
  }
  else {
    cVar3 = bVar1 + (char)iVar6;
    if (iVar5 <= iVar6) {
      cVar3 = bVar1 + (char)iVar5;
    }
  }
  (carObj->control).gasLevel = cVar3;
  if (carObj->carInfo->RampBrake == 0) {
    cVar3 = (carObj->control).desiredBrakeLevel;
  }
  else {
    bVar1 = (carObj->control).brakeLevel;
    iVar5 = (uint)(byte)(carObj->control).desiredBrakeLevel - (uint)bVar1;
    if (iVar5 < 0) {
      cVar3 = bVar1 + (char)iVar5;
      if (0xf < -iVar5) {
        cVar3 = bVar1 - 0x10;
      }
    }
    else {
      cVar3 = bVar1 + (char)iVar5;
      if (0xf < iVar5) {
        cVar3 = bVar1 + 0x10;
      }
    }
  }
  (carObj->control).brakeLevel = cVar3;
  cVar3 = (carObj->control).gearShiftTimer;
  if (cVar3 != '\0') {
    (carObj->control).gearShiftTimer = cVar3 + -1;
  }
  if (0x200 < simGlobal.gameTicks) {
    if (GameSetup_gData.carInfo[carObj->carIndex].Transmission == 1) {
      if ((simGlobal.gameTicks < 0x208) &&
         (((GameSetup_gData.raceType != 1 && (GameSetup_gData.raceType != 5)) ||
          (((__Cars_gHumanRaceCarList_9__->carFlags & 0x200U) == 0 &&
           ((Cars_gNumHumanRaceCars != 2 || ((PTR_8010fa4c->carFlags & 0x200U) == 0)))))))) {
        (carObj->control).desiredGear = '\x02';
      }
      else {
        bVar1 = (carObj->control).desiredGear;
        if ((bVar1 == (carObj->control).gear) && ((carObj->stats).finishType == 0)) {
          if ((carObj->pullOver == 0) && (carObj->blowout == 0)) {
            iVar5 = (carObj->N).speedXZ;
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (iVar5 < 0x3333) {
              if (((((byte)(carObj->control).desiredBrakeLevel < 0x81) ||
                   ((carObj->control).desiredGasLevel != '\0')) || (bVar1 < 2)) ||
                 ((carObj->control).hanno != 0)) {
                iVar5 = (carObj->N).speedXZ;
                if (iVar5 < 0) {
                  iVar5 = -iVar5;
                }
                if (((iVar5 < 0x3333) && (0x80 < (byte)(carObj->control).desiredGasLevel)) &&
                   (((carObj->control).gear == '\0' && ((carObj->control).hanno != 0)))) {
                  (carObj->control).desiredGear = '\x02';
                  goto LAB_800aa088;
                }
              }
              else {
                (carObj->control).desiredGear = '\0';
                (carObj->control).hanno = 1;
              }
            }
          }
        }
        else {
LAB_800aa088:
          (carObj->control).hanno = 0;
        }
      }
    }
    bVar1 = (carObj->control).gear;
    bVar2 = (carObj->control).desiredGear;
    uVar9 = (uint)bVar2;
    if (uVar9 != (uint)bVar1) {
      if ((GameSetup_gData.carInfo[carObj->carIndex].Transmission == 1) || (carObj->RSControl != 0))
      {
        if (1 < bVar2) {
          if (bVar2 == 2) {
            iVar5 = 2;
            cVar3 = '\x02';
            if (bVar1 < 2) {
              pCVar7 = carObj->specs;
              (carObj->control).lastGear = bVar1;
              iVar6 = 2;
              if ((int)uVar9 < pCVar7->numGears) {
                iVar8 = 8;
                do {
                  uVar9 = fixedmult(*(int *)((int)pCVar7->velToRpmRatioInv + iVar8),
                                    pCVar7->redline << 0x10);
                  if ((int)uVar9 < (carObj->linearVel_ch).z) {
                    iVar5 = iVar6;
                  }
                  cVar3 = (char)iVar5;
                  pCVar7 = carObj->specs;
                  iVar6 = iVar6 + 1;
                  iVar8 = iVar6 * 4;
                } while (iVar6 < pCVar7->numGears);
              }
              pCVar7 = carObj->specs;
              (carObj->control).downShifting = '\0';
              (carObj->control).gear = cVar3;
              (carObj->control).gearShiftTimer = *(char *)&pCVar7->gearShiftDelay;
            }
          }
          goto LAB_800aa1cc;
        }
        cVar3 = (carObj->control).gear;
        cVar4 = (carObj->control).desiredGear;
        pCVar7 = carObj->specs;
        (carObj->control).downShifting = '\0';
      }
      else {
        if ((uVar9 < (uint)bVar1) && (1 < bVar2)) {
          (carObj->control).downShifting = '\x01';
        }
        else {
          (carObj->control).downShifting = '\0';
        }
        cVar3 = (carObj->control).gear;
        cVar4 = (carObj->control).desiredGear;
        pCVar7 = carObj->specs;
      }
      (carObj->control).lastGear = cVar3;
      (carObj->control).gear = cVar4;
      (carObj->control).gearShiftTimer = *(char *)&pCVar7->gearShiftDelay;
    }
  }
LAB_800aa1cc:
  if (carObj->carInfo->RampSteering == 0) {
    iVar5 = (carObj->control).desiredSteering;
  }
  else {
    iVar10 = (carObj->control).steering;
    iVar6 = (carObj->control).desiredSteering - iVar10;
    iVar8 = carObj->specs->steeringRamp;
    if (iVar6 < 0) {
      iVar5 = iVar10 + iVar6;
      if (iVar8 <= -iVar6) {
        iVar5 = iVar10 - iVar8;
      }
    }
    else {
      iVar5 = iVar10 + iVar6;
      if (iVar8 <= iVar6) {
        iVar5 = iVar10 + iVar8;
      }
    }
  }
  (carObj->control).steering = iVar5;
LAB_800aa234:
  if ((simGlobal.gameTicks < 0x200) &&
     (((GameSetup_gData.raceType != 1 && (GameSetup_gData.raceType != 5)) ||
      (((__Cars_gHumanRaceCarList_9__->carFlags & 0x200U) == 0 &&
       ((Cars_gNumHumanRaceCars != 2 || ((PTR_8010fa4c->carFlags & 0x200U) == 0)))))))) {
    (carObj->control).brakeLevel = -1;
  }
  else {
    if ((carObj->blowout != 0) || (carObj->pullOver != 0)) {
      if ((carObj->control).hanno == 0) {
        (carObj->control).gasLevel = '\0';
        (carObj->control).brakeLevel = -0x80;
      }
      else {
        (carObj->control).gasLevel = -0x80;
        (carObj->control).brakeLevel = '\0';
      }
      (carObj->control).downShifting = '\0';
    }
  }
  if (carObj->crash == 2) {
    (carObj->control).gasLevel = '\0';
  }
  if ((AIInit_forceHumanHandBrake != 0) && (carObj->RSControl != 0)) {
    iVar5 = -0x7c;
    if ((carObj->speechInfo).playerCarIndex * (carObj->script).lastReactionIndex[3] < 1) {
      iVar5 = 0x7c;
    }
    (carObj->control).steering = iVar5;
    (carObj->control).handBrake = '\x01';
  }
  DAT_00000da8 = (int)(((uint)(byte)(carObj->control).gasLevel + 1) * 0x10000) / 0xf8;
  if (0x10000 < DAT_00000da8) {
    DAT_00000da8 = 0x10000;
  }
  DAT_00000da4 = (int)(((uint)(byte)(carObj->control).brakeLevel + 1) * 0x10000) / 0xf8;
  if (0x10000 < DAT_00000da4) {
    DAT_00000da4 = 0x10000;
  }
  iVar5 = (carObj->control).steering;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (((GameSetup_gData.carInfo[carObj->carIndex].Transmission == 1) &&
      ((carObj->control).gear == '\0')) && ((carObj->control).hanno == 1)) {
    DAT_00000da8 = (int)(((uint)(byte)(carObj->control).brakeLevel + 1) * 0x10000) / 0xf8;
    if (0x10000 < DAT_00000da8) {
      DAT_00000da8 = 0x10000;
    }
    DAT_00000da4 = (int)(((uint)(byte)(carObj->control).gasLevel + 1) * 0x10000) / 0xf8;
    if (0x10000 < DAT_00000da4) {
      DAT_00000da4 = 0x10000;
    }
  }
  DAT_00000dac = iVar5 << 9;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_FixEngineRpm__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1287, offset 0x800aa4e4
	/* begin block 1 */
		// Start line: 1288
		// Start offset: 0x800AA4E4
	/* end block 1 */
	// End offset: 0x800AA634
	// End Line: 1308

void Physics_FixEngineRpm__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = (carObj->N).linearVel.x;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar1 = (carObj->N).shadowMat.m[0];
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar5 = (carObj->N).linearVel.y;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar2 = (carObj->N).shadowMat.m[1];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar6 = (carObj->N).linearVel.z;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar3 = (carObj->N).shadowMat.m[2];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar7 = (carObj->N).linearVel.x;
  (carObj->linearVel_ch).x =
       (iVar4 >> 8) * (iVar1 >> 8) + (iVar5 >> 8) * (iVar2 >> 8) + (iVar6 >> 8) * (iVar3 >> 8);
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar4 = (carObj->N).shadowMat.m[6];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar1 = (carObj->N).linearVel.y;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar5 = (carObj->N).shadowMat.m[7];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar2 = (carObj->N).linearVel.z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar6 = (carObj->N).shadowMat.m[8];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  (carObj->linearVel_ch).z =
       (iVar7 >> 8) * (iVar4 >> 8) + (iVar1 >> 8) * (iVar5 >> 8) + (iVar2 >> 8) * (iVar6 >> 8);
  iVar4 = (carObj->N).collision.collided;
  carObj->wheelSpin = 0;
  carObj->slide = 0;
  carObj->frontSkid = 0;
  carObj->rearSkid = 0;
  if (iVar4 == 2) {
    (carObj->N).collision.collided = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_ResetCar__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1313, offset 0x800aa63c
	/* begin block 1 */
		// Start line: 1314
		// Start offset: 0x800AA63C

		/* begin block 1.1 */
			// Start line: 1328
			// Start offset: 0x800AA668
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x800AA6D0
		// End Line: 1359
	/* end block 1 */
	// End offset: 0x800AA6D0
	// End Line: 1359

void Physics_ResetCar__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  
  if (carObj->carInfo->Transmission == 1) {
    (carObj->control).desiredGear = '\x02';
    (carObj->control).gear = '\x02';
  }
  else {
    (carObj->control).desiredGear = '\x01';
    (carObj->control).gear = '\x01';
  }
  iVar1 = 0;
  (carObj->linearAcc).x = 0;
  (carObj->linearAcc).y = 0;
  (carObj->linearAcc).z = 0;
  (carObj->angularAcc).x = 0;
  (carObj->angularAcc).y = 0;
  (carObj->angularAcc).z = 0;
  (carObj->linearVel_ch).x = 0;
  (carObj->linearVel_ch).y = 0;
  (carObj->linearVel_ch).z = 0;
  (carObj->angularVel_ch).x = 0;
  (carObj->angularVel_ch).y = 0;
  (carObj->angularVel_ch).z = 0;
  carObj->wheelSpin = 0;
  carObj->slide = 0;
  carObj->frontSkid = 0;
  carObj->rearSkid = 0;
  carObj->crash = 0;
  carObj->blowout = 0;
  (carObj->control).hanno = 0;
  do {
    carObj->wheel[0].wheelInAir = 0;
    carObj->wheel[0].rebound = 0;
    iVar1 = iVar1 + 1;
    carObj = (Car_tObj *)&(carObj->N).simRoadInfo.quadPts[2].z;
  } while (iVar1 < 4);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_StopCar__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 1364, offset 0x800aa6d8
	/* begin block 1 */
		// Start line: 1365
		// Start offset: 0x800AA6D8
	/* end block 1 */
	// End offset: 0x800AA7A8
	// End Line: 1371

void Physics_StopCar__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (carObj->N).linearVel.x * 0xf5;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = (carObj->N).linearVel.y;
  (carObj->N).linearVel.x = iVar1 >> 8;
  iVar2 = iVar2 * 0xf5;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar1 = (carObj->N).linearVel.z;
  (carObj->N).linearVel.y = iVar2 >> 8;
  iVar1 = iVar1 * 0xf5;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar2 = (carObj->N).orientationToGround.y;
  (carObj->N).linearVel.z = iVar1 >> 8;
  if (iVar2 < 0x3333) {
    iVar1 = (carObj->N).angularVel.y;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    (carObj->N).angularVel.y = (iVar1 >> 8) * 0xfa;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_TestForBarrierCollision__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1377, offset 0x800aa7b0
	/* begin block 1 */
		// Start line: 1378
		// Start offset: 0x800AA7B0
		// Variables:
	// 		int hit; // $s1
	/* end block 1 */
	// End offset: 0x800AA7F4
	// End Line: 1386

void Physics_TestForBarrierCollision__FP8Car_tObj(Car_tObj *carObj)

{
  int iVar1;
  
  iVar1 = Physics_DoBarrierCheck__FP8Car_tObj(carObj);
  if (iVar1 != 0) {
    if ((carObj->carFlags & 4U) != 0) {
      Physics_FixEngineRpm__FP8Car_tObj(carObj);
    }
    carObj->crash = iVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_CalculateRoadGripModifiers__FP8Car_tObj(struct Car_tObj *carObj /*$s0*/)
 // line 1394, offset 0x800aa808
	/* begin block 1 */
		// Start line: 1395
		// Start offset: 0x800AA808
		// Variables:
	// 		int frontWheels; // $t0
	// 		int rearWheels; // $t1
	// 		int leftWheels; // $t2
	// 		int rightWheels; // $t3

		/* begin block 1.1 */
			// Start line: 1395
			// Start offset: 0x800AA808

			/* begin block 1.1.1 */
				// Start line: 1395
				// Start offset: 0x800AA808
				// Variables:
			// 		int i; // $a1

				/* begin block 1.1.1.1 */
					// Start line: 1403
					// Start offset: 0x800AA840
					// Variables:
				// 		int roadSurfaceType; // $v1
				// 		int tempSurface; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x800AA8E0
				// End Line: 1418
			/* end block 1.1.1 */
			// End offset: 0x800AA8EC
			// End Line: 1419
		/* end block 1.1 */
		// End offset: 0x800AA8EC
		// End Line: 1422

		/* begin block 1.2 */
			// Start line: 1422
			// Start offset: 0x800AA8EC

			/* begin block 1.2.1 */
				// Start line: 1431
				// Start offset: 0x800AA930
			/* end block 1.2.1 */
			// End offset: 0x800AA974
			// End Line: 1440
		/* end block 1.2 */
		// End offset: 0x800AA974
		// End Line: 1440
	/* end block 1 */
	// End offset: 0x800AA974
	// End Line: 1440

void Physics_CalculateRoadGripModifiers__FP8Car_tObj(Car_tObj *carObj)

{
  uint uVar1;
  int iVar2;
  Car_tObj *pCVar3;
  int iVar4;
  
  iVar4 = 0;
  DAT_00000dc0 = 0;
  DAT_00000dc4 = 0;
  DAT_00000dc8 = 0;
  iVar2 = 0;
  pCVar3 = carObj;
  while (DAT_00000dbc = iVar4 >> 1, iVar2 < 4) {
    uVar1 = (uint)(byte)(&roadSurfaceIndex)
                        [(pCVar3->wheel[0].roadSurfaceType & 0xfU) +
                         carObj->carInfo->TireType * 0x14];
    if (DAT_00000dcc != 0) {
      uVar1 = uVar1 + 1;
    }
    if (iVar2 < 2) {
      iVar4 = iVar4 + (&roadSurfaceFrictionCoeff)[uVar1];
    }
    else {
      DAT_00000dc0 = DAT_00000dc0 + (&roadSurfaceFrictionCoeff)[uVar1];
    }
    if ((iVar2 == 0) || (iVar2 == 2)) {
      DAT_00000dc4 = DAT_00000dc4 + (&roadSurfaceFrictionCoeff)[uVar1];
    }
    else {
      DAT_00000dc8 = DAT_00000dc8 + (&roadSurfaceFrictionCoeff)[uVar1];
    }
    pCVar3 = (Car_tObj *)&(pCVar3->N).simRoadInfo.quadPts[2].z;
    iVar2 = iVar2 + 1;
  }
  DAT_00000dc0 = DAT_00000dc0 >> 1;
  DAT_00000dc4 = DAT_00000dc4 >> 1;
  DAT_00000dc8 = DAT_00000dc8 >> 1;
  iVar2 = (carObj->linearVel_ch).z;
  DAT_00000db8 = (DAT_00000dbc + DAT_00000dc0 >> 1) + (carObj->N).roadGravityModifier;
  if (0x50000 < iVar2) {
    uVar1 = fixedmult(iVar2,carObj->specs->frontAeroDownForce);
    DAT_00000dbc = DAT_00000dbc + uVar1;
    uVar1 = fixedmult((carObj->linearVel_ch).z,carObj->specs->rearAeroDownForce);
    DAT_00000dc0 = DAT_00000dc0 + uVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Physics_CalculateCarAcceleration__FP8Car_tObj(struct Car_tObj *carObj /*$s1*/)
 // line 1447, offset 0x800aa984
	/* begin block 1 */
		// Start line: 1448
		// Start offset: 0x800AA984
		// Variables:
	// 		int blip[8]; // stack offset -104
	// 		int bblip[8]; // stack offset -72
	// 		int diffDesiredRpm; // $a0
	// 		int diffFlywheelRpm; // $s3
	// 		int desiredRpm; // $s0
	// 		int wheelRpm; // $s5
	// 		int driveAcc; // $s4
	// 		int drag; // $s6
	// 		int ratio; // $v1
	// 		int temp; // $v1
	// 		int smokeRpm; // $fp
	// 		int damage; // $s7
	// 		struct Car_tSpecs *specs; // $s2

		/* begin block 1.1 */
			// Start line: 1514
			// Start offset: 0x800AACD0

			/* begin block 1.1.1 */
				// Start line: 1554
				// Start offset: 0x800AAE84

				/* begin block 1.1.1.1 */
					// Start line: 1575
					// Start offset: 0x800AB000

					/* begin block 1.1.1.1.1 */
						// Start line: 1582
						// Start offset: 0x800AB0D0
						// Variables:
					// 		int rpmDrop; // $a0
					/* end block 1.1.1.1.1 */
					// End offset: 0x800AB178
					// End Line: 1595

					/* begin block 1.1.1.1.2 */
						// Start line: 1597
						// Start offset: 0x800AB180

						/* begin block 1.1.1.1.2.1 */
							// Start line: 1597
							// Start offset: 0x800AB180

							/* begin block 1.1.1.1.2.1.1 */
								// Start line: 1598
								// Start offset: 0x800AB188
								// Variables:
							// 		int rpmRise; // $v1
							/* end block 1.1.1.1.2.1.1 */
							// End offset: 0x800AB2A8
							// End Line: 1614
						/* end block 1.1.1.1.2.1 */
						// End offset: 0x800AB3C4
						// End Line: 1651
					/* end block 1.1.1.1.2 */
					// End offset: 0x800AB3C4
					// End Line: 1651
				/* end block 1.1.1.1 */
				// End offset: 0x800AB3C4
				// End Line: 1651
			/* end block 1.1.1 */
			// End offset: 0x800AB418
			// End Line: 1661
		/* end block 1.1 */
		// End offset: 0x800AB418
		// End Line: 1661
	/* end block 1 */
	// End offset: 0x800AB468
	// End Line: 1673

int Physics_CalculateCarAcceleration__FP8Car_tObj(Car_tObj *carObj)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  Car_tSpecs *pCVar12;
  int local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_68[0] = DAT_80056370;
  local_68[1] = DAT_80056374;
  local_68[2] = DAT_80056378;
  local_68[3] = DAT_8005637c;
  local_58 = DAT_80056380;
  local_54 = DAT_80056384;
  local_50 = DAT_80056388;
  local_4c = DAT_8005638c;
  local_48[0] = DAT_80056390;
  local_48[1] = DAT_80056394;
  local_48[2] = DAT_80056398;
  local_48[3] = DAT_8005639c;
  local_38 = DAT_800563a0;
  local_34 = DAT_800563a4;
  local_30 = DAT_800563a8;
  local_2c = DAT_800563ac;
  iVar11 = carObj->specs->redline;
  if (iVar11 < 0) {
    iVar11 = iVar11 + 7;
  }
  randtemp = fastRandom * randSeed;
  iVar9 = (carObj->N).damage[1] + (carObj->N).damage[5];
  fastRandom = randtemp & 0xffff;
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  bVar3 = (randtemp >> 8 & 0xffff) < (uint)(iVar9 >> 8);
  pCVar12 = carObj->specs;
  DAT_00000db4 = (uint)(pCVar12->redline + 500 < carObj->flywheelRpm);
  iVar9 = 0x10000;
  if (carObj->carInfo->GroundEffects != 0) {
    uVar4 = carObj->specs->frontAeroDownForce + carObj->specs->rearAeroDownForce;
    iVar9 = ((int)(uVar4 + (uVar4 >> 0x1f)) >> 1) + 0x10000;
  }
  uVar4 = fixedmult((carObj->linearVel_ch).z,iVar9);
  if ((int)uVar4 < 0) {
    uVar4 = uVar4 + 0xffff;
  }
  iVar9 = (int)uVar4 >> 0x10;
  uVar4 = fixedmult(pCVar12->dragCoeff,iVar9 * iVar9 * iVar9);
  if (((carObj->control).gear == '\x01') || (DAT_00000dd4 == 0)) {
    iVar9 = pCVar12->redline + 0xfa;
    uVar5 = fixedmult(iVar9,DAT_00000da8);
    if ((int)uVar5 < iVar9) {
      iVar9 = pCVar12->redline + 0xfa;
      goto LAB_800aac10;
    }
    uVar5 = pCVar12->redline + 0xfa;
  }
  else {
    iVar9 = pCVar12->redline + 100;
    uVar5 = fixedmult(iVar9,DAT_00000da8);
    if ((int)uVar5 < iVar9) {
      iVar9 = pCVar12->redline + 100;
LAB_800aac10:
      uVar5 = fixedmult(iVar9,DAT_00000da8);
    }
    else {
      uVar5 = pCVar12->redline + 100;
    }
  }
  if (pCVar12->redline <= carObj->flywheelRpm) {
    cVar1 = (carObj->control).gear;
    carObj->flywheelRpm = pCVar12->redline + 0x32;
    iVar9 = 3;
    if ((cVar1 != '\x01') && (iVar9 = 4, DAT_00000dd4 == 0)) {
      iVar9 = 3;
    }
    carObj->revLimit = iVar9;
  }
  uVar6 = uVar5;
  if (0 < carObj->revLimit) {
    if (((carObj->control).gear == '\x01') || (DAT_00000dd4 == 0)) {
      uVar6 = pCVar12->redline - 800;
    }
    else {
      uVar6 = pCVar12->redline - 400;
    }
    if ((int)uVar5 <= (int)uVar6) {
      uVar6 = uVar5;
    }
    carObj->revLimit = carObj->revLimit + -1;
  }
  if ((((carObj->control).gear == '\x01') || ((carObj->control).gearShiftTimer != '\0')) ||
     (DAT_00000dd4 == 0)) {
    if (bVar3) {
      iVar11 = carObj->flywheelRpm + -100;
      carObj->flywheelRpm = iVar11;
code_r0x800aae38:
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      carObj->flywheelRpm = iVar11;
    }
    else {
      if (carObj->flywheelRpm < (int)uVar6) {
        uVar5 = carObj->flywheelRpm + 0xfa;
        if ((carObj->control).gearShiftTimer == '\0') {
          carObj->flywheelRpm = uVar5;
          if ((int)uVar5 <= (int)uVar6) {
            uVar6 = uVar5;
          }
        }
        else {
LAB_800aad68:
          if ((carObj->control).lastGear == '\x01') goto LAB_800aae4c;
          if ((carObj->control).downShifting == '\0') {
            if ((byte)(carObj->control).gear < 4) {
              iVar11 = carObj->flywheelRpm + -100;
            }
            else {
              iVar11 = carObj->flywheelRpm + -200;
            }
            carObj->flywheelRpm = iVar11;
            iVar11 = carObj->flywheelRpm;
            goto code_r0x800aae38;
          }
          if ((byte)(carObj->control).brakeLevel < 0x41) {
            iVar11 = carObj->flywheelRpm + local_68[(uint)(byte)(carObj->control).desiredGear];
          }
          else {
            iVar11 = carObj->flywheelRpm + local_48[(uint)(byte)(carObj->control).desiredGear];
          }
          carObj->flywheelRpm = iVar11;
          uVar6 = pCVar12->redline;
          if (carObj->flywheelRpm <= pCVar12->redline) {
            uVar6 = carObj->flywheelRpm;
          }
        }
      }
      else {
        if ((carObj->control).gearShiftTimer != '\0') goto LAB_800aad68;
LAB_800aae4c:
        uVar5 = carObj->flywheelRpm - 200;
        if (carObj->flywheelRpm < (int)uVar6) goto LAB_800aae78;
        carObj->flywheelRpm = uVar5;
        if ((int)uVar6 < (int)uVar5) {
          uVar6 = uVar5;
        }
      }
      carObj->flywheelRpm = uVar6;
    }
LAB_800aae78:
    carObj->frontWheelSpin = 0;
    carObj->wheelSpin = 0;
    uVar5 = 0;
    goto LAB_800ab418;
  }
  if ((GameSetup_gData.carInfo[carObj->carIndex].Transmission == 1) || (carObj->RSControl != 0)) {
    Physics_AutoShift__FP8Car_tObj(carObj);
  }
  if (((carObj->control).gearShiftTimer == '\0') || ((carObj->control).downShifting != '\0')) {
    bVar2 = (carObj->control).gear;
  }
  else {
    bVar2 = (carObj->control).lastGear;
  }
  uVar5 = fixedmult((carObj->linearVel_ch).z,pCVar12->velToRpmRatio[(uint)bVar2]);
  if ((int)uVar5 < 0) {
    uVar5 = uVar5 + 0xffff;
  }
  iVar9 = (int)uVar5 >> 0x10;
  if ((DAT_00000db4 == 0) && (carObj->revLimit < 1)) {
    iVar7 = carObj->flywheelRpm;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar7 = Physics_GetTorque__FP8Car_tObji(carObj,iVar7 >> 8);
    uVar5 = fixedmult(iVar7,pCVar12->gearAccCoeff[(uint)(byte)(carObj->control).gear]);
  }
  else {
    iVar7 = pCVar12->redline;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    uVar5 = fixedmult(pCVar12->torqueCurve[iVar7 >> 8],
                      pCVar12->gearAccCoeff[(uint)(byte)(carObj->control).gear]);
    uVar5 = uVar5 << 1;
  }
  iVar10 = uVar6 - iVar9;
  iVar7 = iVar10;
  if (iVar10 < 0) {
    iVar7 = -iVar10;
  }
  if ((iVar7 < 0x7d) && ((int)uVar6 < pCVar12->redline + -300)) {
    iVar10 = 0;
  }
  iVar7 = carObj->flywheelRpm - iVar9;
  if ((((((iVar7 < 0xfb) || ((carObj->control).gearShiftTimer != '\0')) ||
        (4 < (byte)(carObj->control).gear)) &&
       ((((byte)(carObj->control).gear < 2 || (-0x199a < (carObj->linearVel_ch).z)) ||
        (DAT_00000da8 < 0x8001)))) &&
      (((((carObj->control).gear != '\0' || ((carObj->linearVel_ch).z < 0x199a)) ||
        (DAT_00000da8 < 0x8001)) && (carObj->wheelSpin != 1)))) || (carObj->revLimit != 0)) {
    if (iVar10 < 0) {
      uVar8 = fixedmult(uVar5,pCVar12->gasOffFactor);
      uVar5 = -uVar8;
      if ((((gravity_ch.z < 1) || (bVar2 = (carObj->control).gear, bVar2 < 2)) || (-1 < (int)uVar5))
         || (2 < bVar2)) {
        if (-1 < gravity_ch.z) goto LAB_800ab204;
        bVar2 = (carObj->control).gear;
        if (bVar2 == 0) {
          if ((int)uVar8 < 0) goto LAB_800ab1fc;
          goto LAB_800ab204;
        }
      }
      else {
LAB_800ab1fc:
        uVar5 = (int)(uVar5 + (uVar5 >> 0x1f)) >> 1;
LAB_800ab204:
        bVar2 = (carObj->control).gear;
      }
      uVar8 = fixedmult(pCVar12->velToRpmRatioInv[(uint)bVar2] << 3,0x28000000);
      if ((int)uVar8 < 0) {
        uVar8 = uVar8 + 0xffff;
      }
      iVar11 = (int)uVar8 >> 0x10;
      if ((carObj->control).gear == '\0') {
        if (iVar11 < -iVar7) {
          iVar11 = -iVar7;
        }
        iVar9 = carObj->flywheelRpm + iVar11;
      }
      else {
        iVar9 = carObj->flywheelRpm + iVar11;
        if (-iVar7 <= iVar11) {
          iVar9 = carObj->flywheelRpm - iVar7;
        }
      }
      carObj->flywheelRpm = iVar9;
      if (DAT_00000db4 == 0) {
        if ((int)uVar6 < carObj->flywheelRpm) {
          uVar6 = carObj->flywheelRpm;
        }
        carObj->flywheelRpm = uVar6;
      }
    }
    else {
      if (iVar10 == 0) {
        carObj->flywheelRpm = iVar9;
        uVar5 = uVar4;
      }
      else {
        if (bVar3) {
          uVar5 = 0;
          carObj->flywheelRpm = carObj->flywheelRpm + -100;
        }
        else {
          if (iVar7 < 0xc9) {
            if (iVar7 < -200) {
              carObj->flywheelRpm = carObj->flywheelRpm + 200;
            }
            else {
              carObj->flywheelRpm = iVar9;
            }
          }
          else {
            carObj->flywheelRpm = carObj->flywheelRpm + -200;
          }
          uVar5 = fixedmult(uVar5,DAT_00000da8);
        }
        if (carObj->flywheelRpm <= (int)uVar6) {
          uVar6 = carObj->flywheelRpm;
        }
        carObj->flywheelRpm = uVar6;
        iVar11 = carObj->slide;
        if (iVar11 < 0) {
          iVar11 = -iVar11;
        }
        iVar11 = iVar11 + 0x10000;
        if ((GameSetup_gData.sgge & 8U) == 0) {
          if (0x20000 < iVar11) {
            iVar11 = 0x20000;
          }
        }
        else {
          if (0x30000 < iVar11) {
            iVar11 = 0x30000;
          }
        }
        if ((int)uVar5 < 0) {
          uVar5 = uVar5 + 0xff;
        }
        if (iVar11 < 0) {
          iVar11 = iVar11 + 0xff;
        }
        uVar5 = ((int)uVar5 >> 8) * (iVar11 >> 8);
      }
    }
  }
  else {
    iVar9 = 0;
    if ((((int)uVar6 < 2000) || ((byte)(carObj->control).desiredGasLevel < 0x40)) ||
       ((bVar3 || ((carObj->carInfo->carType == 0x13 && (2 < (byte)(carObj->control).gear)))))) {
      iVar9 = 200;
    }
    else {
      bVar2 = (carObj->control).gear;
      if ((bVar2 == 2) || (bVar2 == 0)) {
        iVar9 = 10;
      }
      else {
        if (2 < bVar2) {
          iVar9 = 0x32;
        }
      }
    }
    if (iVar11 >> 3 < iVar7) {
      carObj->wheelSpin = 2;
    }
    if (iVar7 <= iVar9) {
      iVar9 = iVar7;
    }
    carObj->flywheelRpm = carObj->flywheelRpm - iVar9;
  }
  if (carObj->flywheelRpm < 0) {
    iVar11 = (carObj->linearVel_ch).z;
    uVar6 = iVar11 * -0x20;
    if (((((int)uVar5 < 1) || ((int)uVar6 < 1)) || ((int)(uVar5 + iVar11 * 0x20) < 1)) &&
       (((-1 < (int)uVar5 || (-1 < (int)uVar6)) || (-1 < (int)(uVar5 + iVar11 * 0x20))))) {
      carObj->flywheelRpm = 0;
      uVar5 = uVar6;
    }
  }
LAB_800ab418:
  iVar11 = uVar5 - uVar4;
  if (carObj->carInfo->carType - 0xcU < 4) {
    if (DAT_00000dcc != 0) {
      if ((carObj->control).gear != '\x02') {
        return uVar5 - uVar4;
      }
      if (0 < (int)uVar5) {
        uVar5 = (int)(uVar5 * 3) >> 2;
      }
    }
    iVar11 = uVar5 - uVar4;
  }
  return iVar11;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_CalcWheelLockAcc__FP8Car_tObjP23Physics_tWheelAccStruct(struct Car_tObj *carObj /*$t0*/, struct Physics_tWheelAccStruct *wheel /*$s0*/)
 // line 1680, offset 0x800ab49c
	/* begin block 1 */
		// Start line: 1681
		// Start offset: 0x800AB49C
		// Variables:
	// 		int totalAcc; // $a1
	// 		int optVar1; // $a3
	// 		int optVar2; // $a0
	// 		int roadGrip; // $a2
	/* end block 1 */
	// End offset: 0x800AB658
	// End Line: 1725

void Physics_CalcWheelLockAcc__FP8Car_tObjP23Physics_tWheelAccStruct
               (Car_tObj *carObj,Physics_tWheelAccStruct *wheel)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  
  if (wheel->frontTire == 0) {
    iVar3 = wheel->roadGrip;
    wheel->skid = carObj->rearSkid;
    iVar1 = DAT_00000dc0;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
      iVar1 = DAT_00000dc0;
    }
  }
  else {
    iVar3 = wheel->roadGrip;
    wheel->skid = carObj->frontSkid;
    iVar1 = DAT_00000dbc;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
      iVar1 = DAT_00000dbc;
    }
  }
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar7 = (iVar3 >> 8) * (iVar1 >> 8);
  iVar1 = (wheel->velCap).x;
  iVar3 = (wheel->velCap).z;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < iVar1) {
    uVar5 = iVar1 + (iVar3 >> 2);
  }
  else {
    uVar5 = iVar3 + (iVar1 >> 2);
  }
  if (DAT_00000dcc == 0) {
    iVar3 = carObj->carInfo->TireType;
    piVar4 = &gripLossTable;
  }
  else {
    iVar3 = carObj->carInfo->TireType;
    piVar4 = &gripLossTableWet;
  }
  iVar3 = piVar4[iVar3];
  if (iVar3 == 0) {
    trap(0x1c00);
  }
  if ((iVar3 == -1) && (iVar7 == -0x80000000)) {
    trap(0x1800);
  }
  if (iVar7 < (int)uVar5) {
    wheel->skid = (int)(wheel->skid * 3 + (uVar5 - iVar7)) >> 2;
  }
  else {
    wheel->skid = 0;
  }
  puVar6 = &LAB_000a0000;
  if (carObj->carInfo->TireType == 2) {
    puVar6 = (undefined *)0x80000;
  }
  if ((int)(undefined *)wheel->skid <= (int)puVar6) {
    puVar6 = (undefined *)wheel->skid;
  }
  uVar2 = uVar5;
  if ((int)uVar5 < 0) {
    uVar2 = -uVar5;
  }
  *(undefined **)&wheel->skid = puVar6;
  if (0x100 < (int)uVar2) {
    iVar1 = fixeddiv(iVar7 - iVar7 / iVar3,uVar5);
    iVar1 = iVar1 >> 8;
  }
  iVar3 = (wheel->velCap).z;
  (wheel->finalAcc).x = (wheel->velCap).x * iVar1 >> 8;
  (wheel->finalAcc).z = iVar3 * iVar1 >> 8;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_CalcTractionCircleAcc__FP8Car_tObjP23Physics_tWheelAccStruct(struct Car_tObj *carObj /*$s3*/, struct Physics_tWheelAccStruct *wheel /*$s0*/)
 // line 1731, offset 0x800ab698
	/* begin block 1 */
		// Start line: 1732
		// Start offset: 0x800AB698
		// Variables:
	// 		int totalAcc; // $s4
	// 		int ratio; // $s2
	// 		int gripLoss; // $v1
	// 		int roadGrip; // $a0
	// 		int gripLossDivider; // $a1
	/* end block 1 */
	// End offset: 0x800ABA1C
	// End Line: 1811

void Physics_CalcTractionCircleAcc__FP8Car_tObjP23Physics_tWheelAccStruct
               (Car_tObj *carObj,Physics_tWheelAccStruct *wheel)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = (wheel->finalAcc).x;
  iVar3 = (wheel->finalAcc).z;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < iVar1) {
    uVar6 = iVar1 + (iVar3 >> 2);
  }
  else {
    uVar6 = iVar3 + (iVar1 >> 2);
  }
  uVar5 = wheel->roadGrip;
  if (wheel->frontTire == 0) {
    iVar1 = (wheel->finalAcc).z;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    wheel->skid = carObj->rearSkid;
    if ((((int)uVar5 < iVar1) && (0x80 < (byte)(carObj->control).gasLevel)) ||
       (carObj->wheelSpin == 2)) {
      carObj->wheelSpin = 1;
    }
    else {
      carObj->wheelSpin = 0;
    }
  }
  else {
    wheel->skid = carObj->frontSkid;
  }
  if (DAT_00000dcc == 0) {
    iVar1 = carObj->carInfo->TireType;
    piVar4 = &gripLossTable;
  }
  else {
    iVar1 = carObj->carInfo->TireType;
    piVar4 = &gripLossTableWet;
  }
  iVar1 = piVar4[iVar1];
  if ((int)uVar5 < (int)uVar6) {
    iVar3 = uVar6 - uVar5;
    if ((carObj->carInfo->Traction == 0) || (wheel->frontTire != 0)) {
LAB_800ab834:
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (uVar5 == 0x80000000)) {
        trap(0x1800);
      }
      iVar2 = iVar3 / iVar1;
      if ((int)uVar5 / iVar1 <= iVar3 / iVar1) {
        iVar2 = (int)uVar5 / iVar1;
      }
      iVar1 = fixeddiv(uVar5 - iVar2,uVar6);
      if (carObj->carInfo->TireType == 2) {
        iVar3 = wheel->skid * 0xf + iVar3;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0xf;
        }
        iVar3 = iVar3 >> 4;
      }
      else {
        iVar3 = wheel->skid * 3 + iVar3;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        iVar3 = iVar3 >> 2;
      }
      wheel->skid = iVar3;
      uVar5 = fixedmult((wheel->finalAcc).x,iVar1);
      iVar3 = (wheel->finalAcc).z;
      (wheel->finalAcc).x = uVar5;
    }
    else {
      iVar2 = carObj->slide;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (0x2665 < iVar2) goto LAB_800ab834;
      iVar1 = fixeddiv(uVar5,uVar6);
      wheel->skid = 0;
      if (2 < (byte)(carObj->control).gear) {
        uVar5 = fixedmult((wheel->finalAcc).x,iVar1);
        (wheel->finalAcc).x = uVar5;
      }
      iVar3 = (wheel->finalAcc).z;
    }
    uVar5 = fixedmult(iVar3,iVar1);
    (wheel->finalAcc).z = uVar5;
  }
  else {
    wheel->skid = 0;
  }
  if (((wheel->frontTire == 0) && (carObj->wheelSpin == 1)) && (carObj->carInfo->Traction == 0)) {
    wheel->skid = uVar6;
    if ((byte)(carObj->control).gear < 4) {
      wheel->skid = uVar6 << 2;
    }
  }
  iVar1 = carObj->carInfo->TireType;
  if (iVar1 == 1) {
    iVar3 = 0x80000;
  }
  else {
    iVar3 = 0x40000;
    if (iVar1 != 2) goto LAB_800ab9e0;
  }
  if (wheel->skid <= iVar3) {
    iVar3 = wheel->skid;
  }
  wheel->skid = iVar3;
LAB_800ab9e0:
  if (carObj->carInfo->Traction != 0) {
    iVar1 = wheel->skid * 3;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    wheel->skid = iVar1 >> 2;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_CalculateTireForces__FP8Car_tObjP23Physics_tWheelAccStruct(struct Car_tObj *carObj /*$s2*/, struct Physics_tWheelAccStruct *wheel /*$s1*/)
 // line 1815, offset 0x800aba3c
	/* begin block 1 */
		// Start line: 1816
		// Start offset: 0x800ABA3C
		// Variables:
	// 		int latAcc; // $a1
	// 		int brakingSituation; // $s0
	// 		int slipAngle; // $s0
	// 		int roadGrip; // $s3
	/* end block 1 */
	// End offset: 0x800ABF88
	// End Line: 1979

void Physics_CalculateTireForces__FP8Car_tObjP23Physics_tWheelAccStruct
               (Car_tObj *carObj,Physics_tWheelAccStruct *wheel)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = wheel->roadGrip;
  bVar1 = false;
  wheel->skid = 0;
  if (wheel->steeringAngle != 0) {
    Math_ResolveRotatedVector__FiiiPiT3
              ((wheel->velCap).x,(wheel->velCap).z,wheel->steeringAngle,(int *)&wheel->velCap,
               &(wheel->velCap).z);
  }
  iVar6 = wheel->acc;
  if ((iVar6 < 0) && (iVar4 = (wheel->velCap).z, iVar4 < 0)) {
    if ((DAT_00000da8 < 0x4001) || ((carObj->control).gear != '\0')) {
      if (iVar4 < iVar6) {
        iVar4 = iVar6;
      }
LAB_800abb2c:
      wheel->acc = iVar4;
      bVar1 = true;
    }
  }
  else {
    if (((0 < iVar6) && (iVar4 = (wheel->velCap).z, 0 < iVar4)) &&
       ((DAT_00000da8 < 0x4001 || ((byte)(carObj->control).gear < 2)))) {
      if (iVar6 <= iVar4) {
        iVar4 = iVar6;
      }
      goto LAB_800abb2c;
    }
  }
  uVar2 = fixedmult(wheel->acc,carObj->specs->lateralGripMult);
  wheel->acc = uVar2;
  if (bVar1) {
    if ((int)uVar2 < 0) {
      uVar2 = -uVar2;
    }
    if ((int)uVar2 <= wheel->roadGrip) goto LAB_800abb70;
LAB_800abbb0:
    if ((carObj->control).handBrake != '\0') {
LAB_800abca8:
      if (wheel->frontTire == 0) {
        iVar9 = carObj->wheelLock + 2;
      }
      else {
        iVar9 = carObj->wheelLock + 1;
      }
      carObj->wheelLock = iVar9;
      Physics_CalcWheelLockAcc__FP8Car_tObjP23Physics_tWheelAccStruct(carObj,wheel);
      iVar9 = wheel->frontTire;
      goto joined_r0x800abf68;
    }
    if (((carObj->carInfo->ABS == 0) && (iVar6 = (carObj->linearVel_ch).z, iVar6 < 0x190001)) &&
       (0xeb < (byte)(carObj->control).brakeLevel)) {
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if ((0x4ffff < iVar6) || (carObj->wheelSpin != 0)) goto LAB_800abca8;
    }
    iVar6 = wheel->roadGrip;
    if ((iVar6 < wheel->acc) || (iVar6 = -iVar6, wheel->acc < iVar6)) {
      wheel->acc = iVar6;
    }
    if ((carObj->carInfo->ABS != 0) && ((carObj->linearVel_ch).z < 0x190000)) {
      if ((simGlobal.gameTicks & 3U) == 0) {
        wheel->skid = 0x80000;
      }
      else {
        wheel->skid = 0;
      }
    }
  }
  else {
LAB_800abb70:
    if (((carObj->control).handBrake != '\0') && (wheel->frontTire == 0)) {
      iVar6 = (carObj->linearVel_ch).z;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (0x8000 < iVar6) goto LAB_800abbb0;
    }
  }
  iVar6 = (wheel->velCap).z;
  uVar2 = -iVar6;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fixedatan((wheel->velCap).x,(int)(uVar2 + (uVar2 >> 0x1f)) >> 1);
    if (0 < (wheel->velCap).z) {
      iVar4 = (wheel->velCap).x;
      if (iVar4 < 1) {
        iVar3 = -0x8000;
        if (-1 < iVar4) goto LAB_800abd50;
      }
      else {
        iVar3 = 0x8000;
      }
      iVar6 = iVar3 - iVar6;
    }
LAB_800abd50:
    iVar6 = iVar6 << 8;
  }
  if (wheel->frontTire == 0) {
    iVar4 = iVar6;
    if (iVar6 < 0) {
      iVar4 = -iVar6;
    }
    if (iVar4 < 0x8000) {
      iVar4 = 0x8000;
    }
    iVar3 = 0x20000;
    if (iVar4 < 0x20001) {
      iVar3 = iVar6;
      if (iVar6 < 0) {
        iVar3 = -iVar6;
      }
      if (iVar3 < 0x8000) {
        iVar3 = 0x8000;
      }
    }
    uVar2 = fixedmult(iVar3,iVar9);
    iVar9 = (int)((uVar2 >> 0x1f) + uVar2) >> 1;
    if (iVar6 < 0) {
      iVar9 = -iVar9;
    }
    uVar7 = (wheel->velCap).x;
    uVar2 = iVar9 + ((int)(gravity_ch.x + ((uint)gravity_ch.x >> 0x1f)) >> 1);
    if ((int)uVar7 < 1) {
      if ((int)uVar2 < 0) {
        uVar2 = -uVar2;
      }
      uVar5 = -uVar2;
      if ((int)-uVar2 < (int)uVar7) {
        uVar5 = uVar7;
      }
    }
    else {
      if ((int)uVar2 < 0) {
        uVar2 = -uVar2;
      }
      uVar5 = uVar2;
      if ((int)uVar7 <= (int)uVar2) {
        uVar5 = uVar7;
      }
    }
LAB_800abf1c:
    (wheel->finalAcc).x = uVar5;
  }
  else {
    iVar4 = iVar6;
    if (iVar6 < 0) {
      iVar4 = -iVar6;
    }
    iVar3 = 0x100000;
    if (iVar4 < 0x100001) {
      iVar3 = iVar4;
    }
    uVar2 = fixedmult(iVar3,iVar9);
    uVar2 = fixedmult(uVar2,(int)&DAT_00001555);
    if (iVar6 < 0) {
      uVar2 = -uVar2;
    }
    (wheel->finalAcc).x = uVar2;
    uVar8 = (wheel->velCap).x;
    (wheel->finalAcc).x = uVar2 + ((int)(gravity_ch.x + ((uint)gravity_ch.x >> 0x1f)) >> 1);
    iVar9 = (wheel->velCap).z;
    uVar7 = uVar8;
    if ((int)uVar8 < 0) {
      uVar7 = -uVar8;
    }
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    if ((int)(uVar7 + iVar9) < 0x200000) {
      if ((int)uVar8 < 1) {
        if ((int)uVar2 < 0) {
          uVar2 = -uVar2;
        }
        uVar5 = -uVar2;
        if ((int)-uVar2 < (int)uVar8) {
          uVar5 = uVar8;
        }
      }
      else {
        if ((int)uVar2 < 0) {
          uVar2 = -uVar2;
        }
        uVar5 = uVar2;
        if ((int)uVar8 <= (int)uVar2) {
          uVar5 = uVar8;
        }
      }
      goto LAB_800abf1c;
    }
  }
  iVar9 = wheel->acc;
  (wheel->finalAcc).y = 0;
  (wheel->finalAcc).z = iVar9;
  Physics_CalcTractionCircleAcc__FP8Car_tObjP23Physics_tWheelAccStruct(carObj,wheel);
  if (wheel->steeringAngle != 0) {
    Math_ResolveRotatedVector__FiiiPiT3
              ((wheel->finalAcc).x,(wheel->finalAcc).z,-wheel->steeringAngle,(int *)&wheel->finalAcc
               ,&(wheel->finalAcc).z);
  }
  iVar9 = wheel->frontTire;
joined_r0x800abf68:
  if (iVar9 == 0) {
    carObj->rearSkid = wheel->skid;
  }
  else {
    carObj->frontSkid = wheel->skid;
  }
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Physics_CalculateRSControlDesiredPosition__FP8Car_tObjii(struct Car_tObj *carObj /*$s1*/, int sliceAhead /*$s4*/, int lookAhead /*$s3*/)
 // line 1982, offset 0x800abfa4
	/* begin block 1 */
		// Start line: 1983
		// Start offset: 0x800ABFA4
		// Variables:
	// 		int driveSide; // $s0
	// 		int position; // $v0

		/* begin block 1.1 */
			// Start line: 2007
			// Start offset: 0x800AC050

			/* begin block 1.1.1 */
				// Start line: 2008
				// Start offset: 0x800AC058
				// Variables:
			// 		int desLane; // $s0
			// 		int laneOffset; // $v1
			/* end block 1.1.1 */
			// End offset: 0x800AC0C0
			// End Line: 2014

			/* begin block 1.1.2 */
				// Start line: 2025
				// Start offset: 0x800AC0C8
				// Variables:
			// 		int desLane; // $s0
			// 		int laneOffset; // $v1
			/* end block 1.1.2 */
			// End offset: 0x800AC144
			// End Line: 2030
		/* end block 1.1 */
		// End offset: 0x800AC144
		// End Line: 2030
	/* end block 1 */
	// End offset: 0x800AC144
	// End Line: 2041

int Physics_CalculateRSControlDesiredPosition__FP8Car_tObjii
              (Car_tObj *carObj,int sliceAhead,int lookAhead)

{
  bool bVar1;
  int laneIndex;
  uint uVar2;
  int iVar3;
  int laneIndex_00;
  
  laneIndex_00 = carObj->RSControl * AITune_driveSide;
  bVar1 = false;
  if (((((carObj->speechInfo).playerCarIndex < 0) && (0 < laneIndex_00)) &&
      (laneIndex = AIWorld_IsDriveableLane__Fii
                             ((int)(carObj->N).simRoadInfo.slice,
                              *(int *)(carObj->accTable + 0x60) + 1), laneIndex == 0)) ||
     (((0 < (carObj->speechInfo).playerCarIndex && (laneIndex_00 < 0)) &&
      (laneIndex = AIWorld_IsDriveableLane__Fii
                             ((int)(carObj->N).simRoadInfo.slice,
                              *(int *)(carObj->accTable + 0x60) + -1), laneIndex == 0)))) {
    bVar1 = true;
  }
  if (bVar1) {
    laneIndex_00 = -laneIndex_00;
  }
  laneIndex = 7;
  if (laneIndex_00 < 1) {
    laneIndex_00 = 6;
    while( true ) {
      laneIndex = AIWorld_IsDriveableLaneInSliceRange__Fiiii
                            ((int)(carObj->N).simRoadInfo.slice,lookAhead,carObj->RSControl,
                             laneIndex_00);
      if ((laneIndex != 0) || (laneIndex_00 < 4)) break;
      laneIndex_00 = laneIndex_00 + -1;
    }
    uVar2 = (uint)BWorldSm_slices[sliceAhead].avgPavedWidthLf * 0x8000;
    iVar3 = (6 - laneIndex_00) * uVar2 + (uVar2 >> 1);
    if (6 - laneIndex_00 < 1) {
      iVar3 = -iVar3;
    }
    else {
      iVar3 = -(iVar3 + 0x18000);
    }
  }
  else {
    while( true ) {
      laneIndex_00 = AIWorld_IsDriveableLaneInSliceRange__Fiiii
                               ((int)(carObj->N).simRoadInfo.slice,lookAhead,carObj->RSControl,
                                laneIndex);
      if ((laneIndex_00 != 0) || (9 < laneIndex)) break;
      laneIndex = laneIndex + 1;
    }
    uVar2 = (uint)BWorldSm_slices[sliceAhead].avgPavedWidthRt * 0x8000;
    iVar3 = (laneIndex + -7) * uVar2 + (uVar2 >> 1);
    if (0 < laneIndex + -7) {
      iVar3 = iVar3 + 0x18000;
    }
  }
  return iVar3;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_Real__FP8Car_tObj(struct Car_tObj *carObj /*$s5*/)
 // line 2048, offset 0x800ac164
	/* begin block 1 */
		// Start line: 2049
		// Start offset: 0x800AC164
		// Variables:
	// 		int driveAcc; // $a0
	// 		int brakeAcc; // $s0
	// 		int frontBrake; // $v0
	// 		int ratio; // $s0
	// 		int tempSteer; // $v1
	// 		int roadGrip; // $s1
	// 		int frontGrip; // $s2
	// 		struct Physics_tWheelAccStruct frontWheel; // stack offset -264
	// 		struct Physics_tWheelAccStruct rearWheel; // stack offset -216
	// 		struct coorddef temp; // stack offset -168
	// 		struct coorddef finalAngularAcc_ch; // stack offset -152
	// 		struct coorddef carAccCap_ch; // stack offset -136
	// 		int rotationalAccCap; // $s2
	// 		struct matrixtdef transposeMat; // stack offset -120
	// 		struct Car_tSpecs *specs; // $s6

		/* begin block 1.1 */
			// Start line: 2159
			// Start offset: 0x800AC5B8
			// Variables:
		// 		int damage; // $v1
		// 		int damageMult; // $v0
		/* end block 1.1 */
		// End offset: 0x800AC610
		// End Line: 2171

		/* begin block 1.2 */
			// Start line: 2182
			// Start offset: 0x800AC64C

			/* begin block 1.2.1 */
				// Start line: 2183
				// Start offset: 0x800AC664

				/* begin block 1.2.1.1 */
					// Start line: 2184
					// Start offset: 0x800AC664

					/* begin block 1.2.1.1.1 */
						// Start line: 2186
						// Start offset: 0x800AC688
						// Variables:
					// 		int ratio; // $a1
					/* end block 1.2.1.1.1 */
					// End offset: 0x800AC688
					// End Line: 2188
				/* end block 1.2.1.1 */
				// End offset: 0x800AC688
				// End Line: 2188
			/* end block 1.2.1 */
			// End offset: 0x800AC688
			// End Line: 2188

			/* begin block 1.2.2 */
				// Start line: 2191
				// Start offset: 0x800AC690

				/* begin block 1.2.2.1 */
					// Start line: 2191
					// Start offset: 0x800AC690

					/* begin block 1.2.2.1.1 */
						// Start line: 2192
						// Start offset: 0x800AC6A0

						/* begin block 1.2.2.1.1.1 */
							// Start line: 2193
							// Start offset: 0x800AC6A0

							/* begin block 1.2.2.1.1.1.1 */
								// Start line: 2195
								// Start offset: 0x800AC6DC
								// Variables:
							// 		int ratio; // $a1
							/* end block 1.2.2.1.1.1.1 */
							// End offset: 0x800AC718
							// End Line: 2197
						/* end block 1.2.2.1.1.1 */
						// End offset: 0x800AC718
						// End Line: 2197
					/* end block 1.2.2.1.1 */
					// End offset: 0x800AC718
					// End Line: 2197
				/* end block 1.2.2.1 */
				// End offset: 0x800AC718
				// End Line: 2197
			/* end block 1.2.2 */
			// End offset: 0x800AC718
			// End Line: 2197
		/* end block 1.2 */
		// End offset: 0x800AC718
		// End Line: 2197

		/* begin block 1.3 */
			// Start line: 2243
			// Start offset: 0x800AC7F0

			/* begin block 1.3.1 */
				// Start line: 2246
				// Start offset: 0x800AC800
				// Variables:
			// 		int damage; // $v0
			/* end block 1.3.1 */
			// End offset: 0x800AC838
			// End Line: 2248
		/* end block 1.3 */
		// End offset: 0x800AC838
		// End Line: 2248

		/* begin block 1.4 */
			// Start line: 2275
			// Start offset: 0x800AC8F8
			// Variables:
		// 		int damage; // $v1
		// 		int transferMult; // $s0
		/* end block 1.4 */
		// End offset: 0x800AC990
		// End Line: 2285

		/* begin block 1.5 */
			// Start line: 2333
			// Start offset: 0x800ACB2C
			// Variables:
		// 		int Xcomponent; // $s0
		/* end block 1.5 */
		// End offset: 0x800ACC7C
		// End Line: 2357

		/* begin block 1.6 */
			// Start line: 2391
			// Start offset: 0x800ACE9C

			/* begin block 1.6.1 */
				// Start line: 2397
				// Start offset: 0x800ACEB4
				// Variables:
			// 		int desiredRpm; // $s0
			// 		int currentRpm; // $v0
			// 		int diffRpm; // $a1
			// 		int tempGas; // $a0

				/* begin block 1.6.1.1 */
					// Start line: 2436
					// Start offset: 0x800AD0F0
					// Variables:
				// 		int lookAhead; // $v1
				// 		int sliceAhead; // $a1
				// 		struct coorddef carPos; // stack offset -80
				// 		struct coorddef dirVector; // stack offset -64

					/* begin block 1.6.1.1.1 */
						// Start line: 2439
						// Start offset: 0x800AD190
						// Variables:
					// 		int roadPosition; // $s1
					// 		struct coorddef offset; // stack offset -48
					/* end block 1.6.1.1.1 */
					// End offset: 0x800AD190
					// End Line: 2439
				/* end block 1.6.1.1 */
				// End offset: 0x800AD314
				// End Line: 2469
			/* end block 1.6.1 */
			// End offset: 0x800AD314
			// End Line: 2469
		/* end block 1.6 */
		// End offset: 0x800AD314
		// End Line: 2469

		/* begin block 1.7 */
			// Start line: 2482
			// Start offset: 0x800AD3A4

			/* begin block 1.7.1 */
				// Start line: 2486
				// Start offset: 0x800AD3F0

				/* begin block 1.7.1.1 */
					// Start line: 2486
					// Start offset: 0x800AD3F0

					/* begin block 1.7.1.1.1 */
						// Start line: 2487
						// Start offset: 0x800AD420
						// Variables:
					// 		int damp; // $s0
					/* end block 1.7.1.1.1 */
					// End offset: 0x800AD464
					// End Line: 2495
				/* end block 1.7.1.1 */
				// End offset: 0x800AD51C
				// End Line: 2499
			/* end block 1.7.1 */
			// End offset: 0x800AD51C
			// End Line: 2499
		/* end block 1.7 */
		// End offset: 0x800AD51C
		// End Line: 2499
	/* end block 1 */
	// End offset: 0x800AD51C
	// End Line: 2499

void Physics_Real__FP8Car_tObj(Car_tObj *carObj)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int lookAhead;
  Trk_NewSlice *pTVar5;
  char cVar6;
  int iVar7;
  undefined *puVar8;
  int sliceAhead;
  uint uVar9;
  Car_tSpecs *pCVar10;
  Physics_tWheelAccStruct local_108;
  Physics_tWheelAccStruct local_d8;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_98;
  uint local_94;
  int local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  coorddef local_40;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  (carObj->linearAcc_ch).x = 0;
  (carObj->linearAcc_ch).y = 0;
  (carObj->linearAcc_ch).z = 0;
  pCVar10 = carObj->specs;
  iGp00000dd0 = 1;
  iGp00000dd4 = 1;
  if ((GameSetup_gData.Weather == 0) ||
     (puVar8 = (undefined *)BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(&(carObj->N).simRoadInfo),
     puVar8 == &DAT_00000001)) {
    iGp00000dcc = 0;
  }
  else {
    iGp00000dcc = 1;
  }
  if (((carObj->wheel[0].wheelInAir != 0) && (carObj->wheel[1].wheelInAir != 0)) &&
     (0xccc < (carObj->N).objAltitude)) {
    iGp00000dd0 = 0;
  }
  if (((carObj->wheel[2].wheelInAir != 0) && (carObj->wheel[3].wheelInAir != 0)) &&
     (0xccc < (carObj->N).objAltitude)) {
    iGp00000dd4 = 0;
  }
  uVar2 = fixedmult((carObj->N).linearVel.x,(carObj->N).shadowMat.m[0]);
  uVar3 = fixedmult((carObj->N).linearVel.y,(carObj->N).shadowMat.m[1]);
  uVar4 = fixedmult((carObj->N).linearVel.z,(carObj->N).shadowMat.m[2]);
  iVar7 = (carObj->N).linearVel.x;
  sliceAhead = (carObj->N).shadowMat.m[3];
  (carObj->linearVel_ch).x = uVar2 + uVar3 + uVar4;
  uVar2 = fixedmult(iVar7,sliceAhead);
  uVar3 = fixedmult((carObj->N).linearVel.y,(carObj->N).shadowMat.m[4]);
  uVar4 = fixedmult((carObj->N).linearVel.z,(carObj->N).shadowMat.m[5]);
  iVar7 = (carObj->N).linearVel.x;
  sliceAhead = (carObj->N).shadowMat.m[6];
  (carObj->linearVel_ch).y = uVar2 + uVar3 + uVar4;
  uVar2 = fixedmult(iVar7,sliceAhead);
  uVar3 = fixedmult((carObj->N).linearVel.y,(carObj->N).shadowMat.m[7]);
  uVar4 = fixedmult((carObj->N).linearVel.z,(carObj->N).shadowMat.m[8]);
  iVar7 = (carObj->N).angularVel.x;
  sliceAhead = (carObj->N).shadowMat.m[0];
  (carObj->linearVel_ch).z = uVar2 + uVar3 + uVar4;
  uVar2 = fixedmult(iVar7,sliceAhead);
  uVar3 = fixedmult((carObj->N).angularVel.y,(carObj->N).shadowMat.m[1]);
  uVar4 = fixedmult((carObj->N).angularVel.z,(carObj->N).shadowMat.m[2]);
  iVar7 = (carObj->N).angularVel.x;
  sliceAhead = (carObj->N).shadowMat.m[3];
  (carObj->angularVel_ch).x = uVar2 + uVar3 + uVar4;
  uVar2 = fixedmult(iVar7,sliceAhead);
  uVar3 = fixedmult((carObj->N).angularVel.y,(carObj->N).shadowMat.m[4]);
  uVar4 = fixedmult((carObj->N).angularVel.z,(carObj->N).shadowMat.m[5]);
  iVar7 = (carObj->N).angularVel.x;
  sliceAhead = (carObj->N).shadowMat.m[6];
  (carObj->angularVel_ch).y = uVar2 + uVar3 + uVar4;
  uVar2 = fixedmult(iVar7,sliceAhead);
  uVar3 = fixedmult((carObj->N).angularVel.y,(carObj->N).shadowMat.m[7]);
  uVar4 = fixedmult((carObj->N).angularVel.z,(carObj->N).shadowMat.m[8]);
  uVar9 = (carObj->linearVel_ch).z;
  (carObj->angularVel_ch).z = uVar2 + uVar3 + uVar4;
  if ((int)uVar9 < 0x50001) {
    carObj->slide = 0;
  }
  else {
    iVar7 = fixeddiv((carObj->linearVel_ch).x,uVar9);
    carObj->slide = iVar7;
  }
  uVar2 = (carObj->linearVel_ch).x * -0x20;
  local_88 = (int)(uVar2 + (uVar2 >> 0x1f)) >> 1;
  uVar2 = (carObj->linearVel_ch).y * -0x20;
  local_84 = (int)(uVar2 + (uVar2 >> 0x1f)) >> 1;
  uVar2 = (carObj->linearVel_ch).z * -0x20;
  local_80 = (int)(uVar2 + (uVar2 >> 0x1f)) >> 1;
  uVar2 = fixedmult((carObj->N).angularVel.y << 5,pCVar10->alphaToAccRotInertia);
  local_a8 = 0;
  local_a4 = -0xa0000;
  local_a0 = 0;
  local_d8.velCap.x = (int)(-uVar2 + (-uVar2 >> 0x1f)) >> 1;
  uVar2 = fixedmult(0,(carObj->N).shadowMat.m[0]);
  uVar3 = fixedmult(local_a4,(carObj->N).shadowMat.m[1]);
  uVar4 = fixedmult(local_a0,(carObj->N).shadowMat.m[2]);
  gravity_ch.x = uVar2 + uVar3 + uVar4;
  uVar2 = fixedmult(local_a8,(carObj->N).shadowMat.m[3]);
  uVar3 = fixedmult(local_a4,(carObj->N).shadowMat.m[4]);
  uVar4 = fixedmult(local_a0,(carObj->N).shadowMat.m[5]);
  gravity_ch.y = uVar2 + uVar3 + uVar4;
  uVar2 = fixedmult(local_a8,(carObj->N).shadowMat.m[6]);
  uVar3 = fixedmult(local_a4,(carObj->N).shadowMat.m[7]);
  uVar4 = fixedmult(local_a0,(carObj->N).shadowMat.m[8]);
  gravity_ch.z = uVar2 + uVar3 + uVar4;
  local_108.velCap.x = local_88 + local_d8.velCap.x;
  local_d8.velCap.x = local_88 - local_d8.velCap.x;
  local_108.velCap.y = local_84;
  local_108.velCap.z = local_80;
  local_d8.velCap.y = local_84;
  local_d8.velCap.z = local_80;
  Physics_RampCarControlValues__FP8Car_tObj(carObj);
  iVar7 = gravity_ch.x;
  if (gravity_ch.x < 0) {
    iVar7 = gravity_ch.x + 0xff;
  }
  iVar7 = (iVar7 >> 8) * 0x300;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xffff;
  }
  iVar7 = (carObj->control).steering + (iVar7 >> 0x10);
  if (iVar7 < 0x80) {
    if (iVar7 < -0x7f) {
      iVar7 = -0x7f;
    }
  }
  else {
    iVar7 = 0x7f;
  }
  iVar7 = iVar7 * pCVar10->maxSteeringAcc;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0x7f;
  }
  iVar7 = iVar7 >> 7;
  sliceAhead = (carObj->N).damage[0] + (carObj->N).damage[1] + (carObj->N).damage[2] +
               (carObj->N).damage[9];
  if (sliceAhead < 0) {
    sliceAhead = sliceAhead + 0x1ff;
  }
  lookAhead = -(sliceAhead >> 9) + 0x10000;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  if (lookAhead < 0) {
    lookAhead = -(sliceAhead >> 9) + 0x100ff;
  }
  local_108.steeringAngle = (iVar7 >> 8) * (lookAhead >> 8);
  iVar7 = (carObj->linearVel_ch).z;
  if (0x3c0000 < iVar7) {
    uVar2 = fixedmult(iVar7,0x444);
    local_108.steeringAngle = fixeddiv(local_108.steeringAngle,uVar2);
  }
  iVar7 = (carObj->linearVel_ch).z;
  if (iVar7 < 0x1ab334) {
    if (0xd6666 < iVar7) {
      iVar7 = carObj->slide;
      bVar1 = iVar7 < -0x2666;
      if (0x2666 < iVar7) {
        bVar1 = iVar7 < -0x2666;
        goto joined_r0x800ac6bc;
      }
      goto LAB_800ac6c4;
    }
  }
  else {
    iVar7 = carObj->slide;
    bVar1 = iVar7 < -0xccc;
    if (iVar7 < 0xccd) {
LAB_800ac6c4:
      if ((!bVar1) || (-1 < (int)local_108.steeringAngle)) goto LAB_800ac720;
    }
    else {
      bVar1 = iVar7 < -0xccc;
joined_r0x800ac6bc:
      if ((int)local_108.steeringAngle < 1) goto LAB_800ac6c4;
    }
    iVar7 = carObj->slide;
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    sliceAhead = 0x10000;
    if (iVar7 << 1 < 0x10001) {
      sliceAhead = iVar7 << 1;
    }
    local_108.steeringAngle = fixedmult(local_108.steeringAngle,sliceAhead);
  }
LAB_800ac720:
  local_d8.steeringAngle = 0;
  local_108.frontTire = 1;
  local_d8.frontTire = 0;
  local_d8.acc = Physics_CalculateCarAcceleration__FP8Car_tObj(carObj);
  iVar7 = local_d8.acc;
  if (local_d8.acc < 0) {
    iVar7 = local_d8.acc + 0xff;
  }
  sliceAhead = pCVar10->frontDriveRatio;
  if (sliceAhead < 0) {
    sliceAhead = sliceAhead + 0xff;
  }
  local_108.acc = (iVar7 >> 8) * (sliceAhead >> 8);
  local_d8.acc = local_d8.acc - local_108.acc;
  if ((iGp00000dd0 == 0) && (iGp00000dd4 == 0)) {
    carObj->frontSkid = 0;
    carObj->rearSkid = 0;
    return;
  }
  carObj->crash = 0;
  iVar7 = iGp00000da4;
  if (iGp00000da4 < 0) {
    iVar7 = iGp00000da4 + 0xff;
  }
  sliceAhead = pCVar10->maxBrakeAcc;
  if (sliceAhead < 0) {
    sliceAhead = sliceAhead + 0xff;
  }
  sliceAhead = (iVar7 >> 8) * (sliceAhead >> 8);
  iVar7 = (carObj->linearVel_ch).z;
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  lookAhead = iVar7 << 5;
  if (sliceAhead <= iVar7 << 5) {
    lookAhead = sliceAhead;
  }
  iVar7 = (carObj->N).damage[9];
  if (iVar7 != 0) {
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0x7f;
    }
    sliceAhead = -(iVar7 >> 7) + 0x10000;
    if (lookAhead < 0) {
      lookAhead = lookAhead + 0xff;
    }
    if (sliceAhead < 0) {
      sliceAhead = -(iVar7 >> 7) + 0x100ff;
    }
    lookAhead = (lookAhead >> 8) * (sliceAhead >> 8);
  }
  if (0 < (carObj->linearVel_ch).z) {
    lookAhead = -lookAhead;
  }
  uVar2 = fixedmult(lookAhead,pCVar10->frontBrakeRatio);
  local_108.acc = local_108.acc + uVar2;
  local_d8.acc = local_d8.acc + (lookAhead - uVar2);
  uVar2 = fixedmult(-gravity_ch.y,pCVar10->lateralGripMult);
  Physics_CalculateRoadGripModifiers__FP8Car_tObj(carObj);
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 0xff;
  }
  iVar7 = iGp00000db8;
  if (iGp00000db8 < 0) {
    iVar7 = iGp00000db8 + 0xff;
  }
  iVar7 = ((int)uVar2 >> 8) * (iVar7 >> 8);
  if (iVar7 < 0) {
    return;
  }
  if (iGp00000dcc == 0) {
    sliceAhead = pCVar10->frontGripBias;
  }
  else {
    sliceAhead = pCVar10->frontGripBias + 0x28f;
  }
  uVar2 = fixedmult(iVar7,sliceAhead);
  sliceAhead = (carObj->N).damage[4] + (carObj->N).damage[5] + (carObj->N).damage[6] +
               (carObj->N).damage[9];
  if (sliceAhead < 0) {
    sliceAhead = sliceAhead + 0x1ff;
  }
  lookAhead = (sliceAhead >> 9) + 0xc000;
  uVar3 = fixedmult(carObj->gTransferFront,lookAhead);
  carObj->gTransferFront = uVar3;
  if ((int)uVar3 < 0) {
    if (lookAhead < 0) {
      lookAhead = (sliceAhead >> 9) + 0xc0ff;
    }
    carObj->gTransferFront = ((int)(uVar3 + 0xff) >> 8) * (lookAhead >> 8);
  }
  else {
    if (0 < (int)uVar3) {
      sliceAhead = uVar3 * 3;
      if (sliceAhead < 0) {
        sliceAhead = sliceAhead + 3;
      }
      carObj->gTransferFront = sliceAhead >> 2;
    }
  }
  lookAhead = uVar2 - carObj->gTransferFront;
  sliceAhead = iGp00000dbc;
  if (iGp00000dbc < 0) {
    sliceAhead = iGp00000dbc + 0xff;
  }
  if (lookAhead < 0) {
    lookAhead = lookAhead + 0xff;
  }
  local_108.roadGrip = (sliceAhead >> 8) * (lookAhead >> 8);
  sliceAhead = (iVar7 - uVar2) + carObj->gTransferFront;
  iVar7 = iGp00000dc0;
  if (iGp00000dc0 < 0) {
    iVar7 = iGp00000dc0 + 0xff;
  }
  if (sliceAhead < 0) {
    sliceAhead = sliceAhead + 0xff;
  }
  local_d8.roadGrip = (iVar7 >> 8) * (sliceAhead >> 8);
  carObj->wheelLock = 0;
  local_108.finalAcc.x = 0;
  local_108.finalAcc.z = 0;
  local_d8.finalAcc.x = 0;
  local_d8.finalAcc.z = 0;
  if (iGp00000dd0 != 0) {
    Physics_CalculateTireForces__FP8Car_tObjP23Physics_tWheelAccStruct(carObj,&local_108);
  }
  if (iGp00000dd4 != 0) {
    Physics_CalculateTireForces__FP8Car_tObjP23Physics_tWheelAccStruct(carObj,&local_d8);
  }
  (carObj->linearAcc_ch).z = local_108.finalAcc.z + local_d8.finalAcc.z;
  (carObj->linearAcc_ch).x = local_108.finalAcc.x + local_d8.finalAcc.x;
  uVar2 = fixedmult((carObj->linearAcc_ch).z,pCVar10->lateralGripMultInv);
  (carObj->linearAcc_ch).z = uVar2;
  if (((GameSetup_gData.sgge == 0x80) && (0 < (int)uVar2)) && ((carObj->control).horn != '\0')) {
    (carObj->linearAcc_ch).z = uVar2 << 2;
  }
  if (iGp00000dcc == 0) {
    if ((carObj->carInfo->TireType == 2) && ((byte)(carObj->control).gear < 4)) {
      iVar7 = (carObj->linearAcc_ch).z;
      puVar8 = &DAT_00012666;
    }
    else {
      iVar7 = (carObj->linearAcc_ch).z;
      puVar8 = &DAT_00011999;
    }
    uVar2 = fixedmult(iVar7,(int)puVar8);
    (carObj->linearAcc_ch).z = uVar2;
  }
  (carObj->linearAcc_ch).y = 0;
  uVar2 = fixedmult(gravity_ch.z,(int)&DAT_00001999);
  iVar7 = (carObj->linearAcc_ch).x;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 7;
  }
  uVar3 = fixedmult(iVar7 >> 3,pCVar10->gTransferFactor);
  iVar7 = (carObj->linearAcc_ch).z;
  carObj->gTransferRight = -uVar3;
  uVar3 = fixedmult(iVar7,pCVar10->gTransferFactor);
  carObj->gTransferFront = uVar3 - uVar2;
  local_94 = fixedmult(local_108.finalAcc.x - local_d8.finalAcc.x,pCVar10->accToAlphaRotInertia);
  uVar2 = fixedmult(local_108.finalAcc.z + local_d8.finalAcc.z,iGp00000dc4 - iGp00000dc8);
  uVar2 = fixedmult(uVar2,pCVar10->accToAlphaRotInertia);
  local_94 = local_94 + uVar2 * 2;
  iVar7 = (carObj->N).angularVel.y;
  if (((0 < iVar7) && (0 < (int)local_94)) || ((iVar7 < 0 && ((int)local_94 < 0)))) {
    if (((carObj->control).handBrake == '\0') || ((GameSetup_gData.sgge & 8U) != 0)) {
      iVar7 = (carObj->control).desiredSteering;
      if ((((iVar7 < 0) && (0x3333 < (carObj->N).angularVel.y)) ||
          ((0 < iVar7 && ((carObj->N).angularVel.y < -0x3333)))) && (carObj->wheelSpin == 1)) {
        local_94 = -(carObj->N).angularVel.y;
      }
      else {
        local_94 = fixedmult(local_94,carObj->specs->spinVelCap);
      }
    }
    else {
      local_94 = (int)(local_94 + (local_94 >> 0x1f)) >> 1;
    }
  }
  local_98 = 0;
  local_90 = 0;
  transpose((undefined4 *)&(carObj->N).shadowMat,&local_78);
  Cars_DoGravityEffectsOnAcc__FP8Car_tObji(carObj,0);
  uVar2 = fixedmult((carObj->linearAcc_ch).x,local_78);
  uVar3 = fixedmult((carObj->linearAcc_ch).y,local_74);
  uVar4 = fixedmult((carObj->linearAcc_ch).z,local_70);
  (carObj->linearAcc).x = uVar2 + uVar3 + uVar4;
  uVar2 = fixedmult((carObj->linearAcc_ch).x,local_6c);
  uVar3 = fixedmult((carObj->linearAcc_ch).y,local_68);
  uVar4 = fixedmult((carObj->linearAcc_ch).z,local_64);
  iVar7 = (carObj->linearAcc_ch).x;
  (carObj->linearAcc).y = uVar2 + uVar3 + uVar4;
  uVar2 = fixedmult(iVar7,local_60);
  uVar3 = fixedmult((carObj->linearAcc_ch).y,local_5c);
  uVar4 = fixedmult((carObj->linearAcc_ch).z,local_58);
  (carObj->linearAcc).z = uVar2 + uVar3 + uVar4;
  uVar2 = fixedmult(local_98,local_78);
  uVar3 = fixedmult(local_94,local_74);
  uVar4 = fixedmult(local_90,local_70);
  (carObj->angularAcc).x = uVar2 + uVar3 + uVar4;
  uVar2 = fixedmult(local_98,local_6c);
  uVar3 = fixedmult(local_94,local_68);
  uVar4 = fixedmult(local_90,local_64);
  (carObj->angularAcc).y = uVar2 + uVar3 + uVar4;
  uVar2 = fixedmult(local_98,local_60);
  uVar3 = fixedmult(local_94,local_5c);
  uVar4 = fixedmult(local_90,local_58);
  iVar7 = (carObj->linearAcc).x;
  (carObj->angularAcc).z = uVar2 + uVar3 + uVar4;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0x1f;
  }
  sliceAhead = (carObj->linearAcc).y;
  (carObj->N).linearVel.x = (carObj->N).linearVel.x + (iVar7 >> 5);
  if (sliceAhead < 0) {
    sliceAhead = sliceAhead + 0x1f;
  }
  iVar7 = (carObj->linearAcc).z;
  (carObj->N).linearVel.y = (carObj->N).linearVel.y + (sliceAhead >> 5);
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0x1f;
  }
  sliceAhead = (carObj->angularAcc).x;
  (carObj->N).linearVel.z = (carObj->N).linearVel.z + (iVar7 >> 5);
  if (sliceAhead < 0) {
    sliceAhead = sliceAhead + 0x1f;
  }
  iVar7 = (carObj->angularAcc).y;
  (carObj->N).angularVel.x = (carObj->N).angularVel.x + (sliceAhead >> 5);
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0x3f;
  }
  sliceAhead = (carObj->angularAcc).z;
  (carObj->N).angularVel.y = (carObj->N).angularVel.y + (iVar7 >> 6);
  if (sliceAhead < 0) {
    sliceAhead = sliceAhead + 0x1f;
  }
  iVar7 = carObj->RSControl;
  (carObj->N).angularVel.z = (carObj->N).angularVel.z + (sliceAhead >> 5);
  if (iVar7 != 0) {
    if ((carObj->script).lastReactionIndex[5] < 0x471c7) {
      if ((byte)(carObj->control).gear < 2) {
        iVar7 = 8;
      }
      else {
        iVar7 = (uint)(byte)(carObj->control).gear << 2;
      }
      iVar7 = *(int *)((int)pCVar10->velToRpmRatio + iVar7);
      puVar8 = &DAT_00188000;
    }
    else {
      if ((byte)(carObj->control).gear < 2) {
        iVar7 = 8;
      }
      else {
        iVar7 = (uint)(byte)(carObj->control).gear << 2;
      }
      puVar8 = (undefined *)(carObj->script).lastReactionIndex[5];
      iVar7 = *(int *)((int)pCVar10->velToRpmRatio + iVar7);
    }
    uVar2 = fixedmult((int)puVar8,iVar7);
    if ((int)uVar2 < 0) {
      uVar2 = uVar2 + 0xffff;
    }
    iVar7 = (int)uVar2 >> 0x10;
    if ((byte)(carObj->control).gear < 2) {
      sliceAhead = 8;
    }
    else {
      sliceAhead = (uint)(byte)(carObj->control).gear << 2;
    }
    uVar2 = fixedmult((carObj->linearVel_ch).z,*(int *)((int)pCVar10->velToRpmRatio + sliceAhead));
    if ((int)uVar2 < 0) {
      uVar2 = uVar2 + 0xffff;
    }
    sliceAhead = pCVar10->redline;
    lookAhead = (iVar7 << 8) / sliceAhead;
    if (sliceAhead == 0) {
      trap(0x1c00);
    }
    if ((sliceAhead == -1) && (iVar7 << 8 == -0x80000000)) {
      trap(0x1800);
    }
    sliceAhead = iVar7 - ((int)uVar2 >> 0x10);
    if (sliceAhead < 0xc9) {
      if (sliceAhead < 200) {
        if (iVar7 == 0) {
          trap(0x1c00);
        }
        if ((iVar7 == -1) && (sliceAhead * 0x80 == -0x80000000)) {
          trap(0x1800);
        }
        lookAhead = lookAhead + (sliceAhead * 0x80) / iVar7;
        if (lookAhead < 0) {
          carObj->RSGasLevel = '\0';
        }
        else {
          carObj->RSGasLevel = (char)lookAhead;
        }
        if (sliceAhead < 0) {
          iVar7 = sliceAhead * 0x200;
          lookAhead = pCVar10->redline;
          if (iVar7 < 0) {
            iVar7 = sliceAhead * -0x200;
          }
          uVar2 = iVar7 / lookAhead;
          cVar6 = (char)uVar2;
          if (lookAhead == 0) {
            trap(0x1c00);
          }
          if ((lookAhead == -1) && (iVar7 == -0x80000000)) {
            trap(0x1800);
          }
          uVar3 = uVar2 & 0xff;
          if (0xff < (int)uVar2) {
            cVar6 = -1;
            uVar3 = 0xff;
          }
          carObj->RSBrakeLevel = cVar6;
          if (0x80 < uVar3) {
            carObj->RSGasLevel = '\0';
          }
        }
      }
    }
    else {
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      if ((iVar7 == -1) && (sliceAhead * 0x80 == -0x80000000)) {
        trap(0x1800);
      }
      lookAhead = lookAhead + (sliceAhead * 0x80) / iVar7;
      cVar6 = (char)lookAhead;
      if (0xe0 < lookAhead) {
        cVar6 = -0x20;
      }
      carObj->RSGasLevel = cVar6;
    }
    iVar7 = (carObj->script).lastActionTime;
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    iVar7 = (iVar7 / 6 + (iVar7 >> 0x1f) >> 0x10) - (iVar7 >> 0x1f);
    if (iVar7 < 3) {
      iVar7 = carObj->RSControl * 3;
    }
    else {
      iVar7 = carObj->RSControl * iVar7;
    }
    if (iVar7 < 0) {
      sliceAhead = (int)(carObj->N).simRoadInfo.slice + iVar7;
      if (sliceAhead < 0) {
        sliceAhead = sliceAhead + gNumSlices;
      }
    }
    else {
      sliceAhead = (int)(carObj->N).simRoadInfo.slice + iVar7;
      if (gNumSlices <= sliceAhead) {
        sliceAhead = sliceAhead - gNumSlices;
      }
    }
    lookAhead = iVar7 * 3;
    if (lookAhead < 0) {
      lookAhead = iVar7 * -3;
    }
    local_50 = (carObj->N).position.x;
    local_4c = (carObj->N).position.y;
    local_48 = (carObj->N).position.z;
    pTVar5 = BWorldSm_slices + sliceAhead;
    local_40.x = pTVar5->center[0];
    local_40.y = pTVar5->center[1];
    local_40.z = pTVar5->center[2];
    iVar7 = Physics_CalculateRSControlDesiredPosition__FP8Car_tObjii(carObj,sliceAhead,lookAhead);
    local_30 = fixedmult((int)BWorldSm_slices[sliceAhead].right[0] << 9,iVar7);
    local_2c = fixedmult((int)BWorldSm_slices[sliceAhead].right[1] << 9,iVar7);
    local_28 = fixedmult((int)BWorldSm_slices[sliceAhead].right[2] << 9,iVar7);
    local_40.x = (local_40.x + local_30) - local_50;
    local_40.y = (local_40.y + local_2c) - local_4c;
    local_40.z = (local_40.z + local_28) - local_48;
    Math_NormalizeVector__FP8coorddef(&local_40);
    uVar2 = fixedmult(local_40.x,(carObj->N).orientMat.m[0]);
    uVar3 = fixedmult(local_40.y,(carObj->N).orientMat.m[1]);
    uVar4 = fixedmult(local_40.z,(carObj->N).orientMat.m[2]);
    iVar7 = uVar2 + uVar3 + uVar4;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar7 = iVar7 >> 8;
    carObj->RSSteering = iVar7;
    if (iVar7 < 0x80) {
      sliceAhead = -0x7f;
      if (-0x80 < iVar7) goto LAB_800ad314;
    }
    else {
      sliceAhead = 0x7f;
    }
    carObj->RSSteering = sliceAhead;
  }
LAB_800ad314:
  if ((GameSetup_gData.sgge & 8U) == 0) {
    if ((carObj->control).gasLevel != '\0') {
      iVar7 = carObj->slide;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar7 < 0x199a) goto LAB_800ad3a4;
    }
    uVar2 = fixedmult(carObj->specs->dragFactor,(carObj->N).linearVel.x);
    iVar7 = (carObj->N).linearVel.y;
    pCVar10 = carObj->specs;
    (carObj->N).linearVel.x = uVar2;
    uVar2 = fixedmult(pCVar10->dragFactor,iVar7);
    iVar7 = (carObj->N).linearVel.z;
    pCVar10 = carObj->specs;
    (carObj->N).linearVel.y = uVar2;
    uVar2 = fixedmult(pCVar10->dragFactor,iVar7);
    (carObj->N).linearVel.z = uVar2;
  }
LAB_800ad3a4:
  if (((carObj->N).driveSurfaceType == 3) && (0x2ca3d7 < (carObj->N).speedXZ)) {
    uVar2 = fixedmult((int)&DAT_0000feb8,(carObj->N).linearVel.x);
    iVar7 = (carObj->N).linearVel.y;
    (carObj->N).linearVel.x = uVar2;
    uVar2 = fixedmult((int)&DAT_0000feb8,iVar7);
    iVar7 = (carObj->N).linearVel.z;
    puVar8 = &DAT_0000feb8;
  }
  else {
    if ((carObj->control).gear == '\x01') {
      iVar7 = gravity_ch.z;
      if (gravity_ch.z < 0) {
        iVar7 = -gravity_ch.z;
      }
      if (iVar7 < 0x8000) {
        iVar7 = (carObj->linearVel_ch).z;
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        puVar8 = &DAT_0000fd70;
        if (0x13ffff < iVar7) {
          iVar7 = (carObj->control).steering;
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          puVar8 = &DAT_0000ff7c;
          if (0x20 < iVar7) {
            puVar8 = &DAT_0000fd70;
          }
        }
        uVar2 = fixedmult((int)puVar8,(carObj->N).linearVel.x);
        iVar7 = (carObj->N).linearVel.y;
        (carObj->N).linearVel.x = uVar2;
        uVar2 = fixedmult((int)puVar8,iVar7);
        iVar7 = (carObj->N).linearVel.z;
        (carObj->N).linearVel.y = uVar2;
        uVar2 = fixedmult((int)puVar8,iVar7);
        iVar7 = (carObj->N).angularVel.x;
        (carObj->N).linearVel.z = uVar2;
        uVar2 = fixedmult((int)puVar8,iVar7);
        iVar7 = (carObj->N).angularVel.y;
        (carObj->N).angularVel.x = uVar2;
        uVar2 = fixedmult((int)puVar8,iVar7);
        iVar7 = (carObj->N).angularVel.z;
        (carObj->N).angularVel.y = uVar2;
        uVar2 = fixedmult((int)puVar8,iVar7);
        (carObj->N).angularVel.z = uVar2;
        return;
      }
    }
    if ((carObj->control).handBrake == '\0') {
      return;
    }
    if (0xffff < (carObj->N).speedXZ) {
      return;
    }
    uVar2 = fixedmult(0x8000,(carObj->N).linearVel.x);
    iVar7 = (carObj->N).linearVel.y;
    (carObj->N).linearVel.x = uVar2;
    uVar2 = fixedmult(0x8000,iVar7);
    iVar7 = (carObj->N).linearVel.z;
    puVar8 = (undefined *)0x8000;
  }
  (carObj->N).linearVel.y = uVar2;
  uVar2 = fixedmult((int)puVar8,iVar7);
  (carObj->N).linearVel.z = uVar2;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Physics_SimCar__FP8Car_tObj(struct Car_tObj *carObj /*$a0*/)
 // line 2507, offset 0x800ad544
	/* begin block 1 */
		// Start line: 2508
		// Start offset: 0x800AD544
	/* end block 1 */
	// End offset: 0x800AD5B8
	// End Line: 2533

void Physics_SimCar__FP8Car_tObj(Car_tObj *carObj)

{
  if ((carObj->N).orientationToGround.y < 0x1999) {
    carObj->wheelSpin = 0;
    carObj->slide = 0;
    carObj->frontSkid = 0;
    carObj->rearSkid = 0;
    if (carObj->flywheelRpm < 0x1f5) {
      carObj->flywheelRpm = 0;
    }
    else {
      carObj->flywheelRpm = carObj->flywheelRpm + -500;
    }
    if ((carObj->N).objAltitude < 0x8000) {
      Physics_StopCar__FP8Car_tObj(carObj);
    }
  }
  else {
    Physics_Real__FP8Car_tObj(carObj);
  }
  return;
}




