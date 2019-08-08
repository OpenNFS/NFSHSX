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

void Physics_CalculateDerivedCarSpecs__FP8Car_tObj(Car_tObj *carObj)
{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  Car_tSpecs *pCVar5;
  int iVar6;
  
  iVar4 = carObj->specs->redline;
  if (iVar4 == 0) {
    trap(0x1c00);
  }
  if ((iVar4 == -1) && (false)) {
    trap(0x1800);
  }
  carObj->specs->redlineInv = 0x10000 / iVar4;
  if (carObj->carInfo->WeightTransfer == 1) {
    carObj->specs->steeringRamp = carObj->specs->steeringRamp + 1;
    iVar4 = fixedmult(carObj->specs->maxSteeringAcc,0x1147a);
    carObj->specs->maxSteeringAcc = iVar4;
  }
  if (carObj->carInfo->GroundEffects == 1) {
    carObj->specs->steeringRamp = carObj->specs->steeringRamp + 1;
    iVar4 = fixedmult(carObj->specs->frontAeroDownForce,0x13333);
    carObj->specs->frontAeroDownForce = iVar4;
    iVar4 = fixedmult(carObj->specs->rearAeroDownForce,0x13333);
    carObj->specs->rearAeroDownForce = iVar4;
    iVar4 = fixedmult(carObj->specs->mass,0xcccc);
    carObj->specs->mass = iVar4;
    iVar4 = fixedmult(carObj->specs->lateralGripMult,0x11999);
    carObj->specs->lateralGripMult = iVar4;
  }
  if (carObj->carInfo->EngineMods == 1) {
    uVar1 = carObj->specs->gearShiftDelay;
    carObj->specs->gearShiftDelay = (int)(uVar1 + (uVar1 >> 0x1f)) >> 1;
    iVar4 = fixedmult(carObj->specs->maxBrakeAcc,0x14000);
    carObj->specs->maxBrakeAcc = iVar4;
    iVar4 = 0;
    do {
      iVar2 = fixedmult(carObj->specs->torqueCurve[iVar4],0x12666);
      iVar6 = iVar4 + 1;
      carObj->specs->torqueCurve[iVar4] = iVar2;
      iVar4 = iVar6;
    } while (iVar6 < 0x29);
    iVar4 = fixedmult(carObj->specs->maxSpeed,0x11999);
    carObj->specs->maxSpeed = iVar4;
  }
  pCVar5 = carObj->specs;
  iVar4 = pCVar5->numGears;
  iVar2 = 0;
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      iVar6 = (int)&pCVar5->mass + iVar4;
      uVar3 = 0x28f;
      if (*(int *)(iVar6 + 0xc) != 0) {
        uVar3 = fixeddiv(0x10000);
        iVar6 = (int)&carObj->specs->mass + iVar4;
      }
      *(undefined4 *)(iVar6 + 0x180) = uVar3;
      iVar2 = iVar2 + 1;
      uVar3 = fixeddiv(*(undefined4 *)((int)carObj->specs->velToRpmRatio + iVar4),
                       carObj->specs->mass);
      *(undefined4 *)((int)carObj->specs->gearAccCoeff + iVar4) = uVar3;
      uVar3 = fixeddiv(*(undefined4 *)((int)carObj->specs->gearAccCoeff + iVar4),0xa0000);
      *(undefined4 *)((int)carObj->specs->gearAccCoeff + iVar4) = uVar3;
      iVar6 = (int)&carObj->specs->mass + iVar4;
      uVar3 = fixedmult(*(undefined4 *)(iVar6 + 0x1a0),*(undefined4 *)(iVar6 + 0x2c));
      *(undefined4 *)((int)carObj->specs->gearAccCoeff + iVar4) = uVar3;
      uVar3 = fixedmult(*(undefined4 *)((int)carObj->specs->velToRpmRatioInv + iVar4),
                        carObj->specs->redline << 0x10);
      uVar3 = fixeddiv(0x10000,uVar3);
      *(undefined4 *)((int)carObj->specs->gearVelInv + iVar4) = uVar3;
      pCVar5 = carObj->specs;
      iVar4 = iVar4 + 4;
    } while (iVar2 < pCVar5->numGears);
    pCVar5 = carObj->specs;
    iVar4 = pCVar5->numGears;
  }
  iVar4 = fixedmult(pCVar5->maxSpeed,pCVar5->velToRpmRatio[iVar4 + -1]);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xffff;
  }
  iVar4 = iVar4 >> 0x10;
  pCVar5 = carObj->specs;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  uVar3 = fixedmult(pCVar5->torqueCurve[iVar4 >> 8],pCVar5->gearAccCoeff[pCVar5->numGears + -1]);
  iVar4 = carObj->specs->maxSpeed;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xffff;
  }
  iVar4 = iVar4 >> 0x10;
  iVar4 = fixeddiv(uVar3,iVar4 * iVar4 * iVar4);
  carObj->specs->dragCoeff = iVar4;
  if (false) {
    carObj->specs->gasOffFactor = carObj->specs->gasOffFactor + 0x2666;
    carObj->specs->frontBrakeRatio = carObj->specs->frontBrakeRatio + -0x2666;
    carObj->specs->frontGripBias = carObj->specs->frontGripBias + 0x147;
  }
  uVar1 = carObj->specs->wheelBase;
  iVar4 = fixedmult(0x10000,(int)(uVar1 + (uVar1 >> 0x1f)) >> 1);
  carObj->specs->alphaToAccRotInertia = iVar4;
  iVar4 = fixedmult(carObj->specs->alphaToAccRotInertia,0x648);
  carObj->specs->alphaToAccRotInertia = iVar4;
  carObj->specs->alphaToAccRotInertia = carObj->specs->alphaToAccRotInertia << 8;
  iVar4 = fixeddiv(0x10000,carObj->specs->alphaToAccRotInertia);
  carObj->specs->accToAlphaRotInertia = iVar4;
  iVar4 = fixeddiv(0x10000,carObj->specs->lateralGripMult);
  carObj->specs->lateralGripMultInv = iVar4;
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

int Physics_AttenuateVelocity__FP8Car_tObjiP10matrixtdef( (Car_tObj *carObj,int force,matrixtdef *roadMat)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar5 = force;
  if (force < 0) {
    iVar5 = force + 0xff;
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
  iVar7 = (carObj->N).linearVel.x;
  iVar6 = (carObj->N).position.z;
  (carObj->N).position.x = (carObj->N).position.x - (iVar5 >> 8) * (iVar1 >> 8);
  iVar1 = (carObj->N).position.y;
  (carObj->N).position.z = iVar6 + (force >> 8) * (iVar3 >> 8);
  (carObj->N).position.y = iVar1 + (iVar5 >> 8) * (iVar2 >> 8);
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar5 = roadMat->m[0];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
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
  iVar6 = roadMat->m[2];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar5 = (iVar7 >> 8) * (iVar5 >> 8) + (iVar1 >> 8) * (iVar2 >> 8) + (iVar3 >> 8) * (iVar6 >> 8);
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
  iVar6 = roadMat->m[7];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar7 = (carObj->N).linearVel.z;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar4 = roadMat->m[8];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar8 = -iVar5;
  if (0 < iVar5) {
    iVar8 = iVar5;
  }
  iVar8 = iVar8 >> 1;
  local_48 = (iVar1 >> 8) * (iVar2 >> 8) + (iVar3 >> 8) * (iVar6 >> 8) + (iVar7 >> 8) * (iVar4 >> 8)
  ;
  if (local_48 < 1) {
    if (local_48 < -0x50000) {
      iVar5 = iVar8;
      if (iVar8 < 0) {
        iVar5 = iVar8 + 0xff;
      }
      local_48 = local_48 + (iVar5 >> 8) * 0xc0;
      if (0 < local_48) {
        local_48 = 0;
      }
    }
  }
  else {
    if (0x50000 < local_48) {
      iVar5 = iVar8;
      if (iVar8 < 0) {
        iVar5 = iVar8 + 0xff;
      }
      local_48 = local_48 + (iVar5 >> 8) * -0xc0;
      if (local_48 < 0) {
        local_48 = 0;
      }
    }
  }
  transpose(roadMat,&local_40);
  iVar5 = fixedmult(0,local_40);
  iVar1 = fixedmult(0,local_3c);
  iVar2 = fixedmult(local_48,local_38);
  (carObj->N).linearVel.x = iVar5 + iVar1 + iVar2;
  iVar5 = fixedmult(0,local_28);
  iVar1 = fixedmult(0,local_24);
  iVar2 = fixedmult(local_48,local_20);
  iVar3 = (carObj->N).linearVel.y;
  (carObj->N).linearVel.z = iVar5 + iVar1 + iVar2;
  if (0 < iVar3) {
    (carObj->N).linearVel.y = 0;
  }
  iVar5 = fixedmult((carObj->N).linearVel.x,(carObj->N).orientMat.m[0]);
  iVar1 = fixedmult((carObj->N).linearVel.y,(carObj->N).orientMat.m[1]);
  iVar2 = fixedmult((carObj->N).linearVel.z,(carObj->N).orientMat.m[2]);
  iVar3 = (carObj->N).linearVel.x;
  iVar6 = (carObj->N).orientMat.m[3];
  (carObj->linearVel_ch).x = iVar5 + iVar1 + iVar2;
  iVar5 = fixedmult(iVar3,iVar6);
  iVar1 = fixedmult((carObj->N).linearVel.y,(carObj->N).orientMat.m[4]);
  iVar2 = fixedmult((carObj->N).linearVel.z,(carObj->N).orientMat.m[5]);
  iVar3 = (carObj->N).linearVel.x;
  iVar6 = (carObj->N).orientMat.m[6];
  (carObj->linearVel_ch).y = iVar5 + iVar1 + iVar2;
  iVar2 = fixedmult(iVar3,iVar6);
  iVar3 = fixedmult((carObj->N).linearVel.y,(carObj->N).orientMat.m[7]);
  iVar6 = fixedmult((carObj->N).linearVel.z,(carObj->N).orientMat.m[8]);
  iVar5 = (carObj->N).linearVel.x;
  iVar1 = (carObj->N).linearVel.z;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  (carObj->linearVel_ch).z = iVar2 + iVar3 + iVar6;
  if (iVar1 < iVar5) {
    iVar5 = iVar5 + (iVar1 >> 2);
  }
  else {
    iVar5 = iVar1 + (iVar5 >> 2);
  }
  (carObj->N).speedXZ = iVar5;
  return iVar8;


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
  iGp00000db0 = wallType;
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

void Physics_CorrectPostCollisionYaw__FP8Car_tObjiG8coorddef( (Car_tObj *carObj,int impactVel,coorddef barrierVec)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_a2;
  undefined4 in_a3;
  
  (carObj->N).collision.impulse = impactVel * 6;
  (carObj->N).collision.otherObj = (BO_tNewtonObj *)0x0;
  (carObj->N).collision.sfxType = uGp00000db0 | 0x40000;
  if ((impactVel < 0xf0000) || ((carObj->linearVel_ch).z < 0x140000)) {
    iVar1 = fixedmult(in_a2,(carObj->N).shadowMat.m[6]);
    iVar2 = fixedmult(in_a3,(carObj->N).shadowMat.m[7]);
    iVar3 = fixedmult(barrierVec.x,(carObj->N).shadowMat.m[8]);
    iVar3 = iVar1 + iVar2 + iVar3;
    iVar1 = fixedmult(in_a2,(carObj->N).shadowMat.m[0]);
    iVar2 = fixedmult(in_a3,(carObj->N).shadowMat.m[1]);
    iVar4 = fixedmult(barrierVec.x,(carObj->N).shadowMat.m[2]);
    iVar4 = iVar1 + iVar2 + iVar4;
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = -iVar3;
    }
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = -iVar4;
    }
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
    iVar1 = iVar1 >> 1;
    if (iVar3 < 0) {
      if (iVar4 < 0) {
        iVar1 = -iVar1;
      }
    }
    else {
      if (0 < iVar4) {
        iVar1 = -iVar1;
      }
      iVar1 = iVar1 >> 1;
    }
    if ((0xd6666 < (carObj->linearVel_ch).z) &&
       (((0 < iVar1 && (0 < (carObj->control).steering)) ||
        ((iVar1 < 0 && ((carObj->control).steering < 0)))))) {
      iVar1 = iVar1 >> 2;
    }
    (carObj->N).angularVel.y = iVar1;
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
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int impactVel;
  int local_60;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 in_stack_ffffff9c;
  coorddef local_40;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar15 = 0;
  iVar16 = (int)(carObj->N).simRoadInfo.slice;
  piVar5 = (int *)(iVar16 * 0x20);
  cVar1 = *(char *)((int)piVar5 + 0x12);
  cVar2 = *(char *)(piVar5 + 5);
  local_40.x = (int)cVar1 * 0x200;
  cVar3 = *(char *)((int)piVar5 + 0x13);
  iVar14 = 0;
  iVar8 = (int)cVar2 * 0x200;
  local_40.y = (int)cVar3 * 0x200;
  local_60 = ((carObj->N).position.x + ((carObj->N).linearVel.x >> 5)) - *piVar5;
  iVar13 = ((carObj->N).position.y + ((carObj->N).linearVel.y >> 5)) - piVar5[1];
  iVar6 = ((carObj->N).position.z + ((carObj->N).linearVel.z >> 5)) - piVar5[2];
  impactVel = local_40.x;
  if (local_40.x < 0) {
    impactVel = local_40.x + 0xff;
  }
  iVar4 = local_60;
  if (local_60 < 0) {
    iVar4 = local_60 + 0xff;
  }
  iVar10 = local_40.y;
  if (local_40.y < 0) {
    iVar10 = local_40.y + 0xff;
  }
  if (iVar13 < 0) {
    iVar13 = iVar13 + 0xff;
  }
  iVar11 = iVar8;
  if (iVar8 < 0) {
    iVar11 = iVar8 + 0xff;
  }
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar9 = (carObj->N).orientMat.m[7];
  iVar7 = (carObj->N).orientMat.m[6];
  iVar12 = (carObj->N).orientMat.m[8];
  impactVel = (impactVel >> 8) * (iVar4 >> 8) + (iVar10 >> 8) * (iVar13 >> 8) +
              (iVar11 >> 8) * (iVar6 >> 8);
  (carObj->N).xRelRoadCenter = impactVel;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar13 = local_40.x;
  if (local_40.x < 0) {
    iVar13 = local_40.x + 0xff;
  }
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar6 = local_40.y;
  if (local_40.y < 0) {
    iVar6 = local_40.y + 0xff;
  }
  if (iVar12 < 0) {
    iVar12 = iVar12 + 0xff;
  }
  iVar4 = iVar8;
  if (iVar8 < 0) {
    iVar4 = iVar8 + 0xff;
  }
  iVar6 = (iVar7 >> 8) * (iVar13 >> 8) + (iVar9 >> 8) * (iVar6 >> 8) + (iVar12 >> 8) * (iVar4 >> 8);
  iVar13 = fixedmult((carObj->N).dimension.z,iVar6);
  if (iVar13 < 1) {
    iVar13 = fixedmult((carObj->N).dimension.z,iVar6);
    iVar13 = -iVar13;
  }
  else {
    iVar13 = fixedmult((carObj->N).dimension.z,iVar6);
  }
  iVar4 = (carObj->N).orientMat.m[1];
  iVar6 = (carObj->N).orientMat.m[0];
  iVar10 = (carObj->N).orientMat.m[2];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar11 = local_40.x;
  if (local_40.x < 0) {
    iVar11 = local_40.x + 0xff;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar7 = local_40.y;
  if (local_40.y < 0) {
    iVar7 = local_40.y + 0xff;
  }
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar9 = iVar8;
  if (iVar8 < 0) {
    iVar9 = iVar8 + 0xff;
  }
  iVar12 = (carObj->N).dimension.x;
  if (iVar12 < 0) {
    iVar12 = iVar12 + 0xff;
  }
  iVar6 = (iVar6 >> 8) * (iVar11 >> 8) + (iVar4 >> 8) * (iVar7 >> 8) + (iVar10 >> 8) * (iVar9 >> 8);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar6 = (iVar12 >> 8) * (iVar6 >> 8);
  iVar16 = iVar16 * 0x20;
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  iVar4 = iVar13 + iVar6 + (int)*(short *)(iVar16 + 0x18) * -0x100;
  if (impactVel < iVar4 - carObj->caravanFollowBehindDistanceMeters) {
    iVar14 = -1;
    iVar15 = iVar4 - impactVel;
    uGp00000db0 = 1;
  }
  iVar13 = (int)*(short *)(iVar16 + 0x1a) * 0x100 - (iVar13 + iVar6);
  if (iVar13 + carObj->caravanFollowBehindDistanceMeters < impactVel) {
    iVar14 = 1;
    iVar15 = impactVel - iVar13;
    uGp00000db0 = 1;
  }
  impactVel = 0;
  if (iVar14 != 0) {
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
    local_28 = (impactVel >> 8) * iVar8;
    if (local_28 < 0) {
      local_28 = local_28 + 0xff;
    }
    local_28 = local_28 >> 8;
    if (iVar14 < 1) {
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
       (impactVel = iVar15 * 2, (carObj->N).flightTime == 0)) {
      if (impactVel < 0) {
        impactVel = iVar15 * -2;
      }
      impactVel = Physics_AttenuateVelocity__FP8Car_tObjiP10matrixtdef
                            (carObj,iVar14 * impactVel,&(carObj->N).roadMatrix);
      Physics_CorrectPostCollisionYaw__FP8Car_tObjiG8coorddef
                (carObj,impactVel,
                 (coorddef)CONCAT48(local_60,CONCAT44(in_stack_ffffff9c,local_40.z)));
      impactVel = iVar14;
    }
    else {
      local_40.z = iVar8;
      if (-1 < iVar14) {
        local_40.x = (int)cVar1 * -0x200;
        local_40.y = (int)cVar3 * -0x200;
        local_40.z = (int)cVar2 * -0x200;
      }
      Collide_TestWithPlane__FP13BO_tNewtonObjP8coorddefT1
                ((BO_tNewtonObj *)carObj,&local_40,&(carObj->N).position);
      impactVel = iVar14;
      if ((carObj->N).collision.impulse != 0) {
        (carObj->N).collision.otherObj = (BO_tNewtonObj *)0x0;
        (carObj->N).collision.sfxType = uGp00000db0 | 0x40000;
        impactVel = iVar14;
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
  int iVar4;
  int iVar5;
  int iVar6;
  Car_tSpecs *pCVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  pCVar7 = carObj->specs;
  iVar10 = pCVar7->redline;
  iVar12 = iVar10 / 6;
  if (1 < (byte)(carObj->control).gear) {
    if (carObj->RSControl != 0) {
      iVar12 = iVar10 / 2;
    }
    iVar12 = iVar10 - iVar12;
    iVar5 = carObj->slide;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    iVar10 = fixedmult(pCVar7->velToRpmRatioInv[pCVar7->numGears + -2],iVar10 << 0x10);
    bVar3 = carObj->specs->maxSpeed < iVar10;
    iVar10 = 1;
    if (bVar3) {
      iVar10 = 2;
    }
    bVar1 = (carObj->control).gear;
    uVar8 = (uint)bVar1;
    uVar11 = uVar8;
    if ((int)uVar8 < carObj->specs->numGears - iVar10) {
      uVar11 = uVar8 + 1;
    }
    if (2 < bVar1) {
      uVar8 = uVar8 - 1;
    }
    iVar10 = (carObj->N).speedXZ;
    if ((carObj->linearVel_ch).z < 0) {
      iVar10 = -iVar10;
    }
    iVar4 = fixedmult(iVar10,carObj->specs->velToRpmRatio[(uint)(byte)(carObj->control).gear]);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xffff;
    }
    iVar4 = iVar4 >> 0x10;
    fixedmult(iVar10,carObj->specs->velToRpmRatio[uVar11]);
    iVar10 = fixedmult(iVar10,carObj->specs->velToRpmRatio[uVar8]);
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xffff;
    }
    if (iGp00000da8 < 0x8001) {
      iVar6 = iVar4;
      if (iVar4 < 0) {
        iVar6 = -iVar4;
      }
      if (iVar6 <= carObj->specs->redline) {
        if (iVar12 <= iVar10 >> 0x10) {
          return;
        }
        if ((int)uVar8 < 2) {
          return;
        }
        if (0x1998 < iVar5) {
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
    if ((iVar12 + 500 < iVar4) &&
       (uVar9 = (uint)(byte)(carObj->control).gear,
       (int)uVar9 < (int)(carObj->specs->numGears - ((uint)bVar3 + 1)))) {
      if (uVar11 != uVar9) {
        cVar2 = (carObj->control).gear;
        pCVar7 = carObj->specs;
        (carObj->control).downShifting = '\0';
        (carObj->control).gear = (char)uVar11;
        (carObj->control).lastGear = cVar2;
        (carObj->control).gearShiftTimer = *(char *)&pCVar7->gearShiftDelay;
      }
    }
    else {
      if ((iVar10 >> 0x10 < iVar12) && (uVar8 != (uint)(byte)(carObj->control).gear)) {
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
  if (false) {
    if ((&DAT_801135c8)[carObj->carIndex * 0x2d] == 1) {
      if ((false) ||
         (((GameSetup_gData == 1 || (GameSetup_gData == 5)) &&
          (((uRam00000260 & 0x200) != 0 ||
           ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))))) {
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
      else {
        (carObj->control).desiredGear = '\x02';
      }
    }
    bVar1 = (carObj->control).gear;
    bVar2 = (carObj->control).desiredGear;
    uVar9 = (uint)bVar2;
    if (uVar9 != (uint)bVar1) {
      if (((&DAT_801135c8)[carObj->carIndex * 0x2d] == 1) || (carObj->RSControl != 0)) {
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
                  iVar8 = fixedmult(*(undefined4 *)((int)pCVar7->velToRpmRatioInv + iVar8),
                                    pCVar7->redline << 0x10);
                  if (iVar8 < (carObj->linearVel_ch).z) {
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
  if ((false) ||
     (((GameSetup_gData == 1 || (GameSetup_gData == 5)) &&
      (((uRam00000260 & 0x200) != 0 ||
       ((Cars_gNumHumanRaceCars == 2 && ((uRam00000260 & 0x200) != 0)))))))) {
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
  else {
    (carObj->control).brakeLevel = -1;
  }
  if (carObj->crash == 2) {
    (carObj->control).gasLevel = '\0';
  }
  if ((AIInit_forceHumanHandBrake != 0) && (carObj->RSControl != 0)) {
    iVar5 = -0x7c;
    if ((int)(carObj->desiredSpeed * (carObj->speechInfo).speechSource) < 1) {
      iVar5 = 0x7c;
    }
    (carObj->control).steering = iVar5;
    (carObj->control).handBrake = '\x01';
  }
  iGp00000da8 = (int)(((uint)(byte)(carObj->control).gasLevel + 1) * 0x10000) / 0xf8;
  if (0x10000 < iGp00000da8) {
    iGp00000da8 = 0x10000;
  }
  iGp00000da4 = (int)(((uint)(byte)(carObj->control).brakeLevel + 1) * 0x10000) / 0xf8;
  if (0x10000 < iGp00000da4) {
    iGp00000da4 = 0x10000;
  }
  iVar5 = (carObj->control).steering;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if ((((&DAT_801135c8)[carObj->carIndex * 0x2d] == 1) && ((carObj->control).gear == '\0')) &&
     ((carObj->control).hanno == 1)) {
    iGp00000da8 = (int)(((uint)(byte)(carObj->control).brakeLevel + 1) * 0x10000) / 0xf8;
    if (0x10000 < iGp00000da8) {
      iGp00000da8 = 0x10000;
    }
    iGp00000da4 = (int)(((uint)(byte)(carObj->control).gasLevel + 1) * 0x10000) / 0xf8;
    if (0x10000 < iGp00000da4) {
      iGp00000da4 = 0x10000;
    }
  }
  iGp00000dac = iVar5 << 9;
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
  iGp00000dc0 = 0;
  iGp00000dc4 = 0;
  iGp00000dc8 = 0;
  iVar2 = 0;
  pCVar3 = carObj;
  while (iGp00000dbc = iVar4 >> 1, iVar2 < 4) {
    uVar1 = (uint)(byte)(&roadSurfaceIndex)
                        [(pCVar3->wheel[0].roadSurfaceType & 0xfU) +
                         carObj->carInfo->TireType * 0x14];
    if (iGp00000dcc != 0) {
      uVar1 = uVar1 + 1;
    }
    if (iVar2 < 2) {
      iVar4 = iVar4 + *(int *)(&roadSurfaceFrictionCoeff + uVar1 * 4);
    }
    else {
      iGp00000dc0 = iGp00000dc0 + *(int *)(&roadSurfaceFrictionCoeff + uVar1 * 4);
    }
    if ((iVar2 == 0) || (iVar2 == 2)) {
      iGp00000dc4 = iGp00000dc4 + *(int *)(&roadSurfaceFrictionCoeff + uVar1 * 4);
    }
    else {
      iGp00000dc8 = iGp00000dc8 + *(int *)(&roadSurfaceFrictionCoeff + uVar1 * 4);
    }
    pCVar3 = (Car_tObj *)&(pCVar3->N).simRoadInfo.quadPts[2].z;
    iVar2 = iVar2 + 1;
  }
  iGp00000dc0 = iGp00000dc0 >> 1;
  iGp00000dc4 = iGp00000dc4 >> 1;
  iGp00000dc8 = iGp00000dc8 >> 1;
  iVar2 = (carObj->linearVel_ch).z;
  iGp00000db8 = (iGp00000dbc + iGp00000dc0 >> 1) + (carObj->N).roadGravityModifier;
  if (0x50000 < iVar2) {
    iVar2 = fixedmult(iVar2,carObj->specs->frontAeroDownForce);
    iGp00000dbc = iGp00000dbc + iVar2;
    iVar2 = fixedmult((carObj->linearVel_ch).z,carObj->specs->rearAeroDownForce);
    iGp00000dc0 = iGp00000dc0 + iVar2;
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
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  Car_tSpecs *pCVar11;
  uint uVar12;
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
  
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0xfa;
  local_68[3] = 200;
  local_58 = 0xaf;
  local_54 = 0x96;
  local_50 = 0x7d;
  local_4c = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 200;
  local_48[3] = 0xaf;
  local_38 = 0x96;
  local_34 = 0x7d;
  local_30 = 100;
  local_2c = 0;
  iVar9 = carObj->specs->redline;
  if (iVar9 < 0) {
    iVar9 = iVar9 + 7;
  }
  randtemp = fastRandom;
  iVar7 = (carObj->N).damage[1] + (carObj->N).damage[5];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  bVar3 = (fastRandom >> 8 & 0xffff) < (uint)(iVar7 >> 8);
  pCVar11 = carObj->specs;
  uGp00000db4 = (uint)(pCVar11->redline + 500 < carObj->flywheelRpm);
  iVar7 = 0x10000;
  if (carObj->carInfo->GroundEffects != 0) {
    uVar5 = carObj->specs->frontAeroDownForce + carObj->specs->rearAeroDownForce;
    iVar7 = ((int)(uVar5 + (uVar5 >> 0x1f)) >> 1) + 0x10000;
  }
  fastRandom = fastRandom & 0xffff;
  iVar7 = fixedmult((carObj->linearVel_ch).z,iVar7);
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xffff;
  }
  iVar7 = iVar7 >> 0x10;
  uVar5 = fixedmult(pCVar11->dragCoeff,iVar7 * iVar7 * iVar7);
  if (((carObj->control).gear == '\x01') || (iGp00000dd4 == 0)) {
    iVar10 = pCVar11->redline + 0xfa;
    iVar7 = fixedmult(iVar10,iGp00000da8);
    if (iVar7 < iVar10) {
      iVar7 = pCVar11->redline + 0xfa;
      goto LAB_800aac10;
    }
    iVar7 = pCVar11->redline + 0xfa;
  }
  else {
    iVar10 = pCVar11->redline + 100;
    iVar7 = fixedmult(iVar10,iGp00000da8);
    if (iVar7 < iVar10) {
      iVar7 = pCVar11->redline + 100;
LAB_800aac10:
      iVar7 = fixedmult(iVar7,iGp00000da8);
    }
    else {
      iVar7 = pCVar11->redline + 100;
    }
  }
  if (pCVar11->redline <= carObj->flywheelRpm) {
    cVar1 = (carObj->control).gear;
    carObj->flywheelRpm = pCVar11->redline + 0x32;
    iVar10 = 3;
    if ((cVar1 != '\x01') && (iVar10 = 4, iGp00000dd4 == 0)) {
      iVar10 = 3;
    }
    carObj->revLimit = iVar10;
  }
  iVar10 = iVar7;
  if (0 < carObj->revLimit) {
    if (((carObj->control).gear == '\x01') || (iGp00000dd4 == 0)) {
      iVar10 = pCVar11->redline + -800;
    }
    else {
      iVar10 = pCVar11->redline + -400;
    }
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
    carObj->revLimit = carObj->revLimit + -1;
  }
  if ((((carObj->control).gear == '\x01') || ((carObj->control).gearShiftTimer != '\0')) ||
     (iGp00000dd4 == 0)) {
    if (bVar3) {
      iVar9 = carObj->flywheelRpm + -100;
      carObj->flywheelRpm = iVar9;
code_r0x800aae38:
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      carObj->flywheelRpm = iVar9;
    }
    else {
      if (carObj->flywheelRpm < iVar10) {
        iVar9 = carObj->flywheelRpm + 0xfa;
        if ((carObj->control).gearShiftTimer == '\0') {
          carObj->flywheelRpm = iVar9;
          if (iVar9 <= iVar10) {
            iVar10 = iVar9;
          }
        }
        else {
LAB_800aad68:
          if ((carObj->control).lastGear == '\x01') goto LAB_800aae4c;
          if ((carObj->control).downShifting == '\0') {
            if ((byte)(carObj->control).gear < 4) {
              iVar9 = carObj->flywheelRpm + -100;
            }
            else {
              iVar9 = carObj->flywheelRpm + -200;
            }
            carObj->flywheelRpm = iVar9;
            iVar9 = carObj->flywheelRpm;
            goto code_r0x800aae38;
          }
          if ((byte)(carObj->control).brakeLevel < 0x41) {
            iVar9 = carObj->flywheelRpm + local_68[(uint)(byte)(carObj->control).desiredGear];
          }
          else {
            iVar9 = carObj->flywheelRpm + local_48[(uint)(byte)(carObj->control).desiredGear];
          }
          carObj->flywheelRpm = iVar9;
          iVar10 = pCVar11->redline;
          if (carObj->flywheelRpm <= pCVar11->redline) {
            iVar10 = carObj->flywheelRpm;
          }
        }
      }
      else {
        if ((carObj->control).gearShiftTimer != '\0') goto LAB_800aad68;
LAB_800aae4c:
        iVar9 = carObj->flywheelRpm + -200;
        if (carObj->flywheelRpm < iVar10) goto LAB_800aae78;
        carObj->flywheelRpm = iVar9;
        if (iVar10 < iVar9) {
          iVar10 = iVar9;
        }
      }
      carObj->flywheelRpm = iVar10;
    }
LAB_800aae78:
    carObj->frontWheelSpin = 0;
    carObj->wheelSpin = 0;
    uVar12 = 0;
    goto LAB_800ab418;
  }
  if (((&DAT_801135c8)[carObj->carIndex * 0x2d] == 1) || (carObj->RSControl != 0)) {
    Physics_AutoShift__FP8Car_tObj(carObj);
  }
  if (((carObj->control).gearShiftTimer == '\0') || ((carObj->control).downShifting != '\0')) {
    bVar2 = (carObj->control).gear;
  }
  else {
    bVar2 = (carObj->control).lastGear;
  }
  iVar7 = fixedmult((carObj->linearVel_ch).z,pCVar11->velToRpmRatio[(uint)bVar2]);
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xffff;
  }
  iVar7 = iVar7 >> 0x10;
  if ((uGp00000db4 == 0) && (carObj->revLimit < 1)) {
    iVar6 = carObj->flywheelRpm;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar6 = Physics_GetTorque__FP8Car_tObji(carObj,iVar6 >> 8);
    uVar12 = fixedmult(iVar6,pCVar11->gearAccCoeff[(uint)(byte)(carObj->control).gear]);
  }
  else {
    iVar6 = pCVar11->redline;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar6 = fixedmult(pCVar11->torqueCurve[iVar6 >> 8],
                      pCVar11->gearAccCoeff[(uint)(byte)(carObj->control).gear]);
    uVar12 = iVar6 << 1;
  }
  iVar8 = iVar10 - iVar7;
  iVar6 = iVar8;
  if (iVar8 < 0) {
    iVar6 = -iVar8;
  }
  if ((iVar6 < 0x7d) && (iVar10 < pCVar11->redline + -300)) {
    iVar8 = 0;
  }
  iVar6 = carObj->flywheelRpm - iVar7;
  if ((((((iVar6 < 0xfb) || ((carObj->control).gearShiftTimer != '\0')) ||
        (4 < (byte)(carObj->control).gear)) &&
       ((((byte)(carObj->control).gear < 2 || (-0x199a < (carObj->linearVel_ch).z)) ||
        (iGp00000da8 < 0x8001)))) &&
      (((((carObj->control).gear != '\0' || ((carObj->linearVel_ch).z < 0x199a)) ||
        (iGp00000da8 < 0x8001)) && (carObj->wheelSpin != 1)))) || (carObj->revLimit != 0)) {
    if (iVar8 < 0) {
      iVar9 = fixedmult(uVar12,pCVar11->gasOffFactor);
      uVar12 = -iVar9;
      if ((((DAT_801165dc < 1) || (bVar2 = (carObj->control).gear, bVar2 < 2)) || (-1 < (int)uVar12)
          ) || (2 < bVar2)) {
        if (-1 < DAT_801165dc) goto LAB_800ab204;
        bVar2 = (carObj->control).gear;
        if (bVar2 == 0) {
          if (iVar9 < 0) goto LAB_800ab1fc;
          goto LAB_800ab204;
        }
      }
      else {
LAB_800ab1fc:
        uVar12 = (int)(uVar12 + (uVar12 >> 0x1f)) >> 1;
LAB_800ab204:
        bVar2 = (carObj->control).gear;
      }
      iVar9 = fixedmult(pCVar11->velToRpmRatioInv[(uint)bVar2] << 3,0x28000000);
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0xffff;
      }
      iVar9 = iVar9 >> 0x10;
      if ((carObj->control).gear == '\0') {
        if (iVar9 < -iVar6) {
          iVar9 = -iVar6;
        }
        iVar7 = carObj->flywheelRpm + iVar9;
      }
      else {
        iVar7 = carObj->flywheelRpm + iVar9;
        if (-iVar6 <= iVar9) {
          iVar7 = carObj->flywheelRpm - iVar6;
        }
      }
      carObj->flywheelRpm = iVar7;
      if (uGp00000db4 == 0) {
        if (iVar10 < carObj->flywheelRpm) {
          iVar10 = carObj->flywheelRpm;
        }
        carObj->flywheelRpm = iVar10;
      }
    }
    else {
      if (iVar8 == 0) {
        carObj->flywheelRpm = iVar7;
        uVar12 = uVar5;
      }
      else {
        if (bVar3) {
          iVar9 = 0;
          carObj->flywheelRpm = carObj->flywheelRpm + -100;
        }
        else {
          if (iVar6 < 0xc9) {
            if (iVar6 < -200) {
              carObj->flywheelRpm = carObj->flywheelRpm + 200;
            }
            else {
              carObj->flywheelRpm = iVar7;
            }
          }
          else {
            carObj->flywheelRpm = carObj->flywheelRpm + -200;
          }
          iVar9 = fixedmult(uVar12,iGp00000da8);
        }
        if (carObj->flywheelRpm <= iVar10) {
          iVar10 = carObj->flywheelRpm;
        }
        carObj->flywheelRpm = iVar10;
        iVar7 = carObj->slide;
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        iVar7 = iVar7 + 0x10000;
        if ((DAT_80113224 & 8) == 0) {
          if (0x20000 < iVar7) {
            iVar7 = 0x20000;
          }
        }
        else {
          if (0x30000 < iVar7) {
            iVar7 = 0x30000;
          }
        }
        if (iVar9 < 0) {
          iVar9 = iVar9 + 0xff;
        }
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0xff;
        }
        uVar12 = (iVar9 >> 8) * (iVar7 >> 8);
      }
    }
  }
  else {
    iVar7 = 0;
    if (((iVar10 < 2000) || ((byte)(carObj->control).desiredGasLevel < 0x40)) ||
       ((bVar3 || ((carObj->carInfo->carType == 0x13 && (2 < (byte)(carObj->control).gear)))))) {
      iVar7 = 200;
    }
    else {
      bVar2 = (carObj->control).gear;
      if ((bVar2 == 2) || (bVar2 == 0)) {
        iVar7 = 10;
      }
      else {
        if (2 < bVar2) {
          iVar7 = 0x32;
        }
      }
    }
    if (iVar9 >> 3 < iVar6) {
      carObj->wheelSpin = 2;
    }
    if (iVar6 <= iVar7) {
      iVar7 = iVar6;
    }
    carObj->flywheelRpm = carObj->flywheelRpm - iVar7;
  }
  if (carObj->flywheelRpm < 0) {
    iVar9 = (carObj->linearVel_ch).z;
    uVar4 = iVar9 * -0x20;
    if (((((int)uVar12 < 1) || ((int)uVar4 < 1)) || ((int)(uVar12 + iVar9 * 0x20) < 1)) &&
       (((-1 < (int)uVar12 || (-1 < (int)uVar4)) || (-1 < (int)(uVar12 + iVar9 * 0x20))))) {
      carObj->flywheelRpm = 0;
      uVar12 = uVar4;
    }
  }
LAB_800ab418:
  iVar9 = uVar12 - uVar5;
  if (carObj->carInfo->carType - 0xcU < 4) {
    if (iGp00000dcc != 0) {
      if ((carObj->control).gear != '\x02') {
        return uVar12 - uVar5;
      }
      if (0 < (int)uVar12) {
        uVar12 = (int)(uVar12 * 3) >> 2;
      }
    }
    iVar9 = uVar12 - uVar5;
  }
  return iVar9;


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

void Physics_CalcWheelLockAcc__FP8Car_tObjP23Physics_tWheelAccStruct( (Car_tObj *carObj,Physics_tWheelAccStruct *wheel)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
  if (wheel->frontTire == 0) {
    iVar3 = wheel->roadGrip;
    wheel->skid = carObj->rearSkid;
    iVar1 = iGp00000dc0;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
      iVar1 = iGp00000dc0;
    }
  }
  else {
    iVar3 = wheel->roadGrip;
    wheel->skid = carObj->frontSkid;
    iVar1 = iGp00000dbc;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
      iVar1 = iGp00000dbc;
    }
  }
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar6 = (iVar3 >> 8) * (iVar1 >> 8);
  iVar1 = (wheel->velCap).x;
  iVar3 = (wheel->velCap).z;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < iVar1) {
    iVar3 = iVar1 + (iVar3 >> 2);
  }
  else {
    iVar3 = iVar3 + (iVar1 >> 2);
  }
  if (iGp00000dcc == 0) {
    iVar2 = carObj->carInfo->TireType;
    puVar4 = &gripLossTable;
  }
  else {
    iVar2 = carObj->carInfo->TireType;
    puVar4 = &gripLossTableWet;
  }
  iVar2 = *(int *)(puVar4 + iVar2 * 4);
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (iVar6 == -0x80000000)) {
    trap(0x1800);
  }
  if (iVar6 < iVar3) {
    wheel->skid = wheel->skid * 3 + (iVar3 - iVar6) >> 2;
  }
  else {
    wheel->skid = 0;
  }
  iVar5 = 0xa0000;
  if (carObj->carInfo->TireType == 2) {
    iVar5 = 0x80000;
  }
  if (wheel->skid <= iVar5) {
    iVar5 = wheel->skid;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  wheel->skid = iVar5;
  if (0x100 < iVar3) {
    iVar1 = fixeddiv(iVar6 - iVar6 / iVar2);
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

void Physics_CalcTractionCircleAcc__FP8Car_tObjP23Physics_tWheelAccStruct( (Car_tObj *carObj,Physics_tWheelAccStruct *wheel)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  
  iVar1 = (wheel->finalAcc).x;
  iVar5 = (wheel->finalAcc).z;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (iVar5 < iVar1) {
    iVar1 = iVar1 + (iVar5 >> 2);
  }
  else {
    iVar1 = iVar5 + (iVar1 >> 2);
  }
  iVar5 = wheel->roadGrip;
  if (wheel->frontTire == 0) {
    iVar2 = (wheel->finalAcc).z;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    wheel->skid = carObj->rearSkid;
    if (((iVar5 < iVar2) && (0x80 < (byte)(carObj->control).gasLevel)) || (carObj->wheelSpin == 2))
    {
      carObj->wheelSpin = 1;
    }
    else {
      carObj->wheelSpin = 0;
    }
  }
  else {
    wheel->skid = carObj->frontSkid;
  }
  if (iGp00000dcc == 0) {
    iVar2 = carObj->carInfo->TireType;
    puVar6 = &gripLossTable;
  }
  else {
    iVar2 = carObj->carInfo->TireType;
    puVar6 = &gripLossTableWet;
  }
  iVar2 = *(int *)(puVar6 + iVar2 * 4);
  if (iVar5 < iVar1) {
    iVar7 = iVar1 - iVar5;
    if ((carObj->carInfo->Traction == 0) || (wheel->frontTire != 0)) {
LAB_800ab834:
      if (iVar2 == 0) {
        trap(0x1c00);
      }
      if ((iVar2 == -1) && (iVar7 == -0x80000000)) {
        trap(0x1800);
      }
      if (iVar2 == 0) {
        trap(0x1c00);
      }
      if ((iVar2 == -1) && (iVar5 == -0x80000000)) {
        trap(0x1800);
      }
      iVar3 = iVar7 / iVar2;
      if (iVar5 / iVar2 <= iVar7 / iVar2) {
        iVar3 = iVar5 / iVar2;
      }
      uVar4 = fixeddiv(iVar5 - iVar3,iVar1);
      if (carObj->carInfo->TireType == 2) {
        iVar7 = wheel->skid * 0xf + iVar7;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 0xf;
        }
        iVar7 = iVar7 >> 4;
      }
      else {
        iVar7 = wheel->skid * 3 + iVar7;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 3;
        }
        iVar7 = iVar7 >> 2;
      }
      wheel->skid = iVar7;
      iVar5 = fixedmult((wheel->finalAcc).x,uVar4);
      iVar2 = (wheel->finalAcc).z;
      (wheel->finalAcc).x = iVar5;
    }
    else {
      iVar3 = carObj->slide;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (0x2665 < iVar3) goto LAB_800ab834;
      uVar4 = fixeddiv(iVar5,iVar1);
      wheel->skid = 0;
      if (2 < (byte)(carObj->control).gear) {
        iVar5 = fixedmult((wheel->finalAcc).x,uVar4);
        (wheel->finalAcc).x = iVar5;
      }
      iVar2 = (wheel->finalAcc).z;
    }
    iVar5 = fixedmult(iVar2,uVar4);
    (wheel->finalAcc).z = iVar5;
  }
  else {
    wheel->skid = 0;
  }
  if (((wheel->frontTire == 0) && (carObj->wheelSpin == 1)) && (carObj->carInfo->Traction == 0)) {
    wheel->skid = iVar1;
    if ((byte)(carObj->control).gear < 4) {
      wheel->skid = iVar1 << 2;
    }
  }
  iVar1 = carObj->carInfo->TireType;
  if (iVar1 == 1) {
    iVar5 = 0x80000;
  }
  else {
    iVar5 = 0x40000;
    if (iVar1 != 2) goto LAB_800ab9e0;
  }
  if (wheel->skid <= iVar5) {
    iVar5 = wheel->skid;
  }
  wheel->skid = iVar5;
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

void Physics_CalculateTireForces__FP8Car_tObjP23Physics_tWheelAccStruct( (Car_tObj *carObj,Physics_tWheelAccStruct *wheel)
{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = wheel->roadGrip;
  bVar1 = false;
  wheel->skid = 0;
  if (wheel->steeringAngle != 0) {
    Math_ResolveRotatedVector__FiiiPiT3
              ((wheel->velCap).x,(wheel->velCap).z,wheel->steeringAngle,(int *)&wheel->velCap,
               &(wheel->velCap).z);
  }
  iVar6 = wheel->acc;
  if ((iVar6 < 0) && (iVar5 = (wheel->velCap).z, iVar5 < 0)) {
    if ((iGp00000da8 < 0x4001) || ((carObj->control).gear != '\0')) {
      if (iVar5 < iVar6) {
        iVar5 = iVar6;
      }
LAB_800abb2c:
      wheel->acc = iVar5;
      bVar1 = true;
    }
  }
  else {
    if (((0 < iVar6) && (iVar5 = (wheel->velCap).z, 0 < iVar5)) &&
       ((iGp00000da8 < 0x4001 || ((byte)(carObj->control).gear < 2)))) {
      if (iVar6 <= iVar5) {
        iVar5 = iVar6;
      }
      goto LAB_800abb2c;
    }
  }
  iVar6 = fixedmult(wheel->acc,carObj->specs->lateralGripMult);
  wheel->acc = iVar6;
  if (bVar1) {
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar6 <= wheel->roadGrip) goto LAB_800abb70;
LAB_800abbb0:
    if ((carObj->control).handBrake != '\0') {
LAB_800abca8:
      if (wheel->frontTire == 0) {
        iVar7 = carObj->wheelLock + 2;
      }
      else {
        iVar7 = carObj->wheelLock + 1;
      }
      carObj->wheelLock = iVar7;
      Physics_CalcWheelLockAcc__FP8Car_tObjP23Physics_tWheelAccStruct(carObj,wheel);
      iVar7 = wheel->frontTire;
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
      if (false) {
        wheel->skid = 0;
      }
      else {
        wheel->skid = 0x80000;
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
  uVar4 = -iVar6;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fixedatan((wheel->velCap).x,(int)(uVar4 + (uVar4 >> 0x1f)) >> 1);
    if (0 < (wheel->velCap).z) {
      iVar5 = (wheel->velCap).x;
      if (iVar5 < 1) {
        iVar2 = -0x8000;
        if (-1 < iVar5) goto LAB_800abd50;
      }
      else {
        iVar2 = 0x8000;
      }
      iVar6 = iVar2 - iVar6;
    }
LAB_800abd50:
    iVar6 = iVar6 << 8;
  }
  if (wheel->frontTire == 0) {
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = -iVar6;
    }
    if (iVar5 < 0x8000) {
      iVar5 = 0x8000;
    }
    iVar2 = 0x20000;
    if (iVar5 < 0x20001) {
      iVar2 = iVar6;
      if (iVar6 < 0) {
        iVar2 = -iVar6;
      }
      if (iVar2 < 0x8000) {
        iVar2 = 0x8000;
      }
    }
    uVar4 = fixedmult(iVar2,iVar7);
    iVar7 = (int)((uVar4 >> 0x1f) + uVar4) >> 1;
    if (iVar6 < 0) {
      iVar7 = -iVar7;
    }
    iVar6 = (wheel->velCap).x;
    iVar7 = iVar7 + ((int)(gravity_ch + (gravity_ch >> 0x1f)) >> 1);
    if (iVar6 < 1) {
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      iVar5 = -iVar7;
      if (-iVar7 < iVar6) {
        iVar5 = iVar6;
      }
    }
    else {
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      iVar5 = iVar7;
      if (iVar6 <= iVar7) {
        iVar5 = iVar6;
      }
    }
LAB_800abf1c:
    (wheel->finalAcc).x = iVar5;
  }
  else {
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = -iVar6;
    }
    iVar2 = 0x100000;
    if (iVar5 < 0x100001) {
      iVar2 = iVar5;
    }
    uVar3 = fixedmult(iVar2,iVar7);
    iVar7 = fixedmult(uVar3,0x1555);
    if (iVar6 < 0) {
      iVar7 = -iVar7;
    }
    (wheel->finalAcc).x = iVar7;
    iVar2 = (wheel->velCap).x;
    (wheel->finalAcc).x = iVar7 + ((int)(gravity_ch + (gravity_ch >> 0x1f)) >> 1);
    iVar5 = (wheel->velCap).z;
    iVar6 = iVar2;
    if (iVar2 < 0) {
      iVar6 = -iVar2;
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar6 + iVar5 < 0x200000) {
      if (iVar2 < 1) {
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        iVar5 = -iVar7;
        if (-iVar7 < iVar2) {
          iVar5 = iVar2;
        }
      }
      else {
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        iVar5 = iVar7;
        if (iVar2 <= iVar7) {
          iVar5 = iVar2;
        }
      }
      goto LAB_800abf1c;
    }
  }
  iVar7 = wheel->acc;
  (wheel->finalAcc).y = 0;
  (wheel->finalAcc).z = iVar7;
  Physics_CalcTractionCircleAcc__FP8Car_tObjP23Physics_tWheelAccStruct(carObj,wheel);
  if (wheel->steeringAngle != 0) {
    Math_ResolveRotatedVector__FiiiPiT3
              ((wheel->finalAcc).x,(wheel->finalAcc).z,-wheel->steeringAngle,(int *)&wheel->finalAcc
               ,&(wheel->finalAcc).z);
  }
  iVar7 = wheel->frontTire;
joined_r0x800abf68:
  if (iVar7 == 0) {
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

int Physics_CalculateRSControlDesiredPosition__FP8Car_tObjii( (Car_tObj *carObj,int sliceAhead,int lookAhead)
{
  int laneIndex;
  int iVar1;
  uint uVar2;
  
  if ((((-1 < carObj->desiredSpeed) || (true)) ||
      (laneIndex = AIWorld_IsDriveableLane__Fii
                             ((int)(carObj->N).simRoadInfo.slice,
                              *(int *)(carObj->accTable + 0x6e) + 1), laneIndex != 0)) &&
     ((0 < carObj->desiredSpeed && (false)))) {
    AIWorld_IsDriveableLane__Fii
              ((int)(carObj->N).simRoadInfo.slice,*(int *)(carObj->accTable + 0x6e) + -1);
  }
  laneIndex = 7;
  if (true) {
    laneIndex = 6;
    while( true ) {
      iVar1 = AIWorld_IsDriveableLaneInSliceRange__Fiiii
                        ((int)(carObj->N).simRoadInfo.slice,lookAhead,carObj->RSControl,laneIndex);
      if ((iVar1 != 0) || (laneIndex < 4)) break;
      laneIndex = laneIndex + -1;
    }
    uVar2 = (uint)*(byte *)(sliceAhead * 0x20 + 0x1e) * 0x8000;
    iVar1 = (6 - laneIndex) * uVar2 + (uVar2 >> 1);
    if (6 - laneIndex < 1) {
      iVar1 = -iVar1;
    }
    else {
      iVar1 = -(iVar1 + 0x18000);
    }
  }
  else {
    while( true ) {
      iVar1 = AIWorld_IsDriveableLaneInSliceRange__Fiiii
                        ((int)(carObj->N).simRoadInfo.slice,lookAhead,carObj->RSControl,laneIndex);
      if ((iVar1 != 0) || (9 < laneIndex)) break;
      laneIndex = laneIndex + 1;
    }
    uVar2 = (uint)*(byte *)(sliceAhead * 0x20 + 0x1f) * 0x8000;
    iVar1 = (laneIndex + -7) * uVar2 + (uVar2 >> 1);
    if (0 < laneIndex + -7) {
      iVar1 = iVar1 + 0x18000;
    }
  }
  return iVar1;


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
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int lookAhead;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  Car_tSpecs *pCVar12;
  Physics_tWheelAccStruct local_108;
  Physics_tWheelAccStruct local_d8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_50;
  int local_4c;
  int local_48;
  coorddef local_40;
  int local_30;
  int local_2c;
  int local_28;
  
  (carObj->linearAcc_ch).x = 0;
  (carObj->linearAcc_ch).y = 0;
  (carObj->linearAcc_ch).z = 0;
  pCVar12 = carObj->specs;
  steeringControl = 1;
  powerControl = 1;
  if ((DAT_80113234 == 0) ||
     (uVar3 = BWorldSm_TunnelFlagSm__FP12BWorldSm_Pos(&(carObj->N).simRoadInfo), uVar3 == 1)) {
    slippery = 0;
  }
  else {
    slippery = 1;
  }
  if (((carObj->wheel[0].wheelInAir != 0) && (carObj->wheel[1].wheelInAir != 0)) &&
     (0xccc < (carObj->N).objAltitude)) {
    steeringControl = 0;
  }
  if (((carObj->wheel[2].wheelInAir != 0) && (carObj->wheel[3].wheelInAir != 0)) &&
     (0xccc < (carObj->N).objAltitude)) {
    powerControl = 0;
  }
  iVar4 = fixedmult((carObj->N).linearVel.x,(carObj->N).shadowMat.m[0]);
  lookAhead = fixedmult((carObj->N).linearVel.y,(carObj->N).shadowMat.m[1]);
  iVar5 = fixedmult((carObj->N).linearVel.z,(carObj->N).shadowMat.m[2]);
  iVar9 = (carObj->N).linearVel.x;
  iVar10 = (carObj->N).shadowMat.m[3];
  (carObj->linearVel_ch).x = iVar4 + lookAhead + iVar5;
  iVar4 = fixedmult(iVar9,iVar10);
  lookAhead = fixedmult((carObj->N).linearVel.y,(carObj->N).shadowMat.m[4]);
  iVar5 = fixedmult((carObj->N).linearVel.z,(carObj->N).shadowMat.m[5]);
  iVar9 = (carObj->N).linearVel.x;
  iVar10 = (carObj->N).shadowMat.m[6];
  (carObj->linearVel_ch).y = iVar4 + lookAhead + iVar5;
  iVar4 = fixedmult(iVar9,iVar10);
  lookAhead = fixedmult((carObj->N).linearVel.y,(carObj->N).shadowMat.m[7]);
  iVar5 = fixedmult((carObj->N).linearVel.z,(carObj->N).shadowMat.m[8]);
  iVar9 = (carObj->N).angularVel.x;
  iVar10 = (carObj->N).shadowMat.m[0];
  (carObj->linearVel_ch).z = iVar4 + lookAhead + iVar5;
  iVar4 = fixedmult(iVar9,iVar10);
  lookAhead = fixedmult((carObj->N).angularVel.y,(carObj->N).shadowMat.m[1]);
  iVar5 = fixedmult((carObj->N).angularVel.z,(carObj->N).shadowMat.m[2]);
  iVar9 = (carObj->N).angularVel.x;
  iVar10 = (carObj->N).shadowMat.m[3];
  (carObj->angularVel_ch).x = iVar4 + lookAhead + iVar5;
  iVar4 = fixedmult(iVar9,iVar10);
  lookAhead = fixedmult((carObj->N).angularVel.y,(carObj->N).shadowMat.m[4]);
  iVar5 = fixedmult((carObj->N).angularVel.z,(carObj->N).shadowMat.m[5]);
  iVar9 = (carObj->N).angularVel.x;
  iVar10 = (carObj->N).shadowMat.m[6];
  (carObj->angularVel_ch).y = iVar4 + lookAhead + iVar5;
  iVar4 = fixedmult(iVar9,iVar10);
  lookAhead = fixedmult((carObj->N).angularVel.y,(carObj->N).shadowMat.m[7]);
  iVar5 = fixedmult((carObj->N).angularVel.z,(carObj->N).shadowMat.m[8]);
  (carObj->angularVel_ch).z = iVar4 + lookAhead + iVar5;
  if ((carObj->linearVel_ch).z < 0x50001) {
    carObj->slide = 0;
  }
  else {
    iVar4 = fixeddiv((carObj->linearVel_ch).x);
    carObj->slide = iVar4;
  }
  uVar3 = (carObj->linearVel_ch).x * -0x20;
  local_88 = (int)(uVar3 + (uVar3 >> 0x1f)) >> 1;
  uVar3 = (carObj->linearVel_ch).y * -0x20;
  local_84 = (int)(uVar3 + (uVar3 >> 0x1f)) >> 1;
  uVar3 = (carObj->linearVel_ch).z * -0x20;
  local_80 = (int)(uVar3 + (uVar3 >> 0x1f)) >> 1;
  iVar4 = fixedmult((carObj->N).angularVel.y << 5,pCVar12->alphaToAccRotInertia);
  local_a8 = 0;
  local_a4 = 0xfff60000;
  local_a0 = 0;
  local_d8.velCap.x = (int)(-iVar4 + ((uint)-iVar4 >> 0x1f)) >> 1;
  iVar4 = fixedmult(0,(carObj->N).shadowMat.m[0]);
  lookAhead = fixedmult(local_a4,(carObj->N).shadowMat.m[1]);
  gravity_ch = fixedmult(local_a0,(carObj->N).shadowMat.m[2]);
  gravity_ch = iVar4 + lookAhead + gravity_ch;
  iVar4 = fixedmult(local_a8,(carObj->N).shadowMat.m[3]);
  lookAhead = fixedmult(local_a4,(carObj->N).shadowMat.m[4]);
  DAT_801165d8 = fixedmult(local_a0,(carObj->N).shadowMat.m[5]);
  DAT_801165d8 = iVar4 + lookAhead + DAT_801165d8;
  iVar4 = fixedmult(local_a8,(carObj->N).shadowMat.m[6]);
  lookAhead = fixedmult(local_a4,(carObj->N).shadowMat.m[7]);
  DAT_801165dc = fixedmult(local_a0,(carObj->N).shadowMat.m[8]);
  DAT_801165dc = iVar4 + lookAhead + DAT_801165dc;
  local_108.velCap.x = local_88 + local_d8.velCap.x;
  local_d8.velCap.x = local_88 - local_d8.velCap.x;
  local_108.velCap.y = local_84;
  local_108.velCap.z = local_80;
  local_d8.velCap.y = local_84;
  local_d8.velCap.z = local_80;
  Physics_RampCarControlValues__FP8Car_tObj(carObj);
  iVar4 = gravity_ch;
  if (gravity_ch < 0) {
    iVar4 = gravity_ch + 0xff;
  }
  iVar4 = (iVar4 >> 8) * 0x300;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xffff;
  }
  iVar4 = (carObj->control).steering + (iVar4 >> 0x10);
  if (iVar4 < 0x80) {
    if (iVar4 < -0x7f) {
      iVar4 = -0x7f;
    }
  }
  else {
    iVar4 = 0x7f;
  }
  iVar4 = iVar4 * pCVar12->maxSteeringAcc;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x7f;
  }
  iVar4 = iVar4 >> 7;
  lookAhead = (carObj->N).damage[0] + (carObj->N).damage[1] + (carObj->N).damage[2] +
              (carObj->N).damage[9];
  if (lookAhead < 0) {
    lookAhead = lookAhead + 0x1ff;
  }
  iVar5 = -(lookAhead >> 9) + 0x10000;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  if (iVar5 < 0) {
    iVar5 = -(lookAhead >> 9) + 0x100ff;
  }
  local_108.steeringAngle = (iVar4 >> 8) * (iVar5 >> 8);
  iVar4 = (carObj->linearVel_ch).z;
  if (0x3c0000 < iVar4) {
    uVar6 = fixedmult(iVar4,0x444);
    local_108.steeringAngle = fixeddiv(local_108.steeringAngle,uVar6);
  }
  iVar4 = (carObj->linearVel_ch).z;
  if (iVar4 < 0x1ab334) {
    if (0xd6666 < iVar4) {
      iVar4 = carObj->slide;
      bVar2 = iVar4 < -0x2666;
      if (0x2666 < iVar4) {
        bVar2 = iVar4 < -0x2666;
        goto joined_r0x800ac6bc;
      }
      goto LAB_800ac6c4;
    }
  }
  else {
    iVar4 = carObj->slide;
    bVar2 = iVar4 < -0xccc;
    if (iVar4 < 0xccd) {
LAB_800ac6c4:
      if ((!bVar2) || (-1 < local_108.steeringAngle)) goto LAB_800ac720;
    }
    else {
      bVar2 = iVar4 < -0xccc;
joined_r0x800ac6bc:
      if (local_108.steeringAngle < 1) goto LAB_800ac6c4;
    }
    iVar4 = carObj->slide;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    lookAhead = 0x10000;
    if (iVar4 << 1 < 0x10001) {
      lookAhead = iVar4 << 1;
    }
    local_108.steeringAngle = fixedmult(local_108.steeringAngle,lookAhead);
  }
LAB_800ac720:
  local_d8.steeringAngle = 0;
  local_108.frontTire = 1;
  local_d8.frontTire = 0;
  local_d8.acc = Physics_CalculateCarAcceleration__FP8Car_tObj(carObj);
  iVar4 = local_d8.acc;
  if (local_d8.acc < 0) {
    iVar4 = local_d8.acc + 0xff;
  }
  lookAhead = pCVar12->frontDriveRatio;
  if (lookAhead < 0) {
    lookAhead = lookAhead + 0xff;
  }
  local_108.acc = (iVar4 >> 8) * (lookAhead >> 8);
  local_d8.acc = local_d8.acc - local_108.acc;
  if ((steeringControl == 0) && (powerControl == 0)) {
    carObj->frontSkid = 0;
    carObj->rearSkid = 0;
    return;
  }
  carObj->crash = 0;
  iVar4 = (carObj->linearVel_ch).z;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  lookAhead = iVar4 << 5;
  if (-1 < iVar4 << 5) {
    lookAhead = 0;
  }
  iVar4 = (carObj->N).damage[9];
  if (iVar4 != 0) {
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x7f;
    }
    iVar5 = -(iVar4 >> 7) + 0x10000;
    if (lookAhead < 0) {
      lookAhead = lookAhead + 0xff;
    }
    if (iVar5 < 0) {
      iVar5 = -(iVar4 >> 7) + 0x100ff;
    }
    lookAhead = (lookAhead >> 8) * (iVar5 >> 8);
  }
  if (0 < (carObj->linearVel_ch).z) {
    lookAhead = -lookAhead;
  }
  iVar4 = fixedmult(lookAhead,pCVar12->frontBrakeRatio);
  local_108.acc = local_108.acc + iVar4;
  local_d8.acc = local_d8.acc + (lookAhead - iVar4);
  fixedmult(-DAT_801165d8,pCVar12->lateralGripMult);
  Physics_CalculateRoadGripModifiers__FP8Car_tObj(carObj);
  if (false) {
    return;
  }
  if (slippery == 0) {
    iVar4 = pCVar12->frontGripBias;
  }
  else {
    iVar4 = pCVar12->frontGripBias + 0x28f;
  }
  fixedmult(0,iVar4);
  iVar4 = (carObj->N).damage[4] + (carObj->N).damage[5] + (carObj->N).damage[6] +
          (carObj->N).damage[9];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1ff;
  }
  iVar5 = (iVar4 >> 9) + 0xc000;
  lookAhead = fixedmult(carObj->gTransferFront,iVar5);
  carObj->gTransferFront = lookAhead;
  if (lookAhead < 0) {
    if (iVar5 < 0) {
      iVar5 = (iVar4 >> 9) + 0xc0ff;
    }
    carObj->gTransferFront = (lookAhead + 0xff >> 8) * (iVar5 >> 8);
  }
  else {
    if (0 < lookAhead) {
      lookAhead = lookAhead * 3;
      if (lookAhead < 0) {
        lookAhead = lookAhead + 3;
      }
      carObj->gTransferFront = lookAhead >> 2;
    }
  }
  iVar4 = steeringControl;
  local_108.roadGrip = 0;
  local_d8.roadGrip = 0;
  carObj->wheelLock = 0;
  local_108.finalAcc.x = 0;
  local_108.finalAcc.z = 0;
  local_d8.finalAcc.x = 0;
  local_d8.finalAcc.z = 0;
  if (iVar4 != 0) {
    Physics_CalculateTireForces__FP8Car_tObjP23Physics_tWheelAccStruct(carObj,&local_108);
  }
  if (powerControl != 0) {
    Physics_CalculateTireForces__FP8Car_tObjP23Physics_tWheelAccStruct(carObj,&local_d8);
  }
  (carObj->linearAcc_ch).z = local_108.finalAcc.z + local_d8.finalAcc.z;
  (carObj->linearAcc_ch).x = local_108.finalAcc.x + local_d8.finalAcc.x;
  iVar4 = fixedmult((carObj->linearAcc_ch).z,pCVar12->lateralGripMultInv);
  (carObj->linearAcc_ch).z = iVar4;
  if (((DAT_80113224 == 0x80) && (0 < iVar4)) && ((carObj->control).horn != '\0')) {
    (carObj->linearAcc_ch).z = iVar4 << 2;
  }
  if (slippery == 0) {
    if ((carObj->carInfo->TireType == 2) && ((byte)(carObj->control).gear < 4)) {
      iVar4 = (carObj->linearAcc_ch).z;
      uVar6 = 0x12666;
    }
    else {
      iVar4 = (carObj->linearAcc_ch).z;
      uVar6 = 0x11999;
    }
    iVar4 = fixedmult(iVar4,uVar6);
    (carObj->linearAcc_ch).z = iVar4;
  }
  (carObj->linearAcc_ch).y = 0;
  iVar4 = fixedmult(DAT_801165dc,0x1999);
  lookAhead = (carObj->linearAcc_ch).x;
  if (lookAhead < 0) {
    lookAhead = lookAhead + 7;
  }
  lookAhead = fixedmult(lookAhead >> 3,pCVar12->gTransferFactor);
  iVar5 = (carObj->linearAcc_ch).z;
  carObj->gTransferRight = -lookAhead;
  lookAhead = fixedmult(iVar5,pCVar12->gTransferFactor);
  carObj->gTransferFront = lookAhead - iVar4;
  iVar4 = fixedmult(local_108.finalAcc.x - local_d8.finalAcc.x,pCVar12->accToAlphaRotInertia);
  uVar6 = fixedmult(local_108.finalAcc.z + local_d8.finalAcc.z,0);
  lookAhead = fixedmult(uVar6,pCVar12->accToAlphaRotInertia);
  local_94 = iVar4 + lookAhead * 2;
  iVar4 = (carObj->N).angularVel.y;
  if (((0 < iVar4) && (0 < (int)local_94)) || ((iVar4 < 0 && ((int)local_94 < 0)))) {
    if (((carObj->control).handBrake == '\0') || ((DAT_80113224 & 8) != 0)) {
      iVar4 = (carObj->control).desiredSteering;
      if ((((iVar4 < 0) && (0x3333 < (carObj->N).angularVel.y)) ||
          ((0 < iVar4 && ((carObj->N).angularVel.y < -0x3333)))) && (carObj->wheelSpin == 1)) {
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
  transpose(&(carObj->N).shadowMat,&local_78);
  Cars_DoGravityEffectsOnAcc__FP8Car_tObji(carObj,0);
  iVar4 = fixedmult((carObj->linearAcc_ch).x,local_78);
  lookAhead = fixedmult((carObj->linearAcc_ch).y,local_74);
  iVar5 = fixedmult((carObj->linearAcc_ch).z,local_70);
  (carObj->linearAcc).x = iVar4 + lookAhead + iVar5;
  iVar4 = fixedmult((carObj->linearAcc_ch).x,local_6c);
  lookAhead = fixedmult((carObj->linearAcc_ch).y,local_68);
  iVar5 = fixedmult((carObj->linearAcc_ch).z,local_64);
  iVar9 = (carObj->linearAcc_ch).x;
  (carObj->linearAcc).y = iVar4 + lookAhead + iVar5;
  iVar4 = fixedmult(iVar9,local_60);
  lookAhead = fixedmult((carObj->linearAcc_ch).y,local_5c);
  iVar5 = fixedmult((carObj->linearAcc_ch).z,local_58);
  (carObj->linearAcc).z = iVar4 + lookAhead + iVar5;
  iVar4 = fixedmult(local_98,local_78);
  lookAhead = fixedmult(local_94,local_74);
  iVar5 = fixedmult(local_90,local_70);
  (carObj->angularAcc).x = iVar4 + lookAhead + iVar5;
  iVar4 = fixedmult(local_98,local_6c);
  lookAhead = fixedmult(local_94,local_68);
  iVar5 = fixedmult(local_90,local_64);
  (carObj->angularAcc).y = iVar4 + lookAhead + iVar5;
  iVar4 = fixedmult(local_98,local_60);
  lookAhead = fixedmult(local_94,local_5c);
  iVar5 = fixedmult(local_90,local_58);
  iVar9 = (carObj->linearAcc).x;
  (carObj->angularAcc).z = iVar4 + lookAhead + iVar5;
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0x1f;
  }
  iVar4 = (carObj->linearAcc).y;
  (carObj->N).linearVel.x = (carObj->N).linearVel.x + (iVar9 >> 5);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1f;
  }
  lookAhead = (carObj->linearAcc).z;
  (carObj->N).linearVel.y = (carObj->N).linearVel.y + (iVar4 >> 5);
  if (lookAhead < 0) {
    lookAhead = lookAhead + 0x1f;
  }
  iVar4 = (carObj->angularAcc).x;
  (carObj->N).linearVel.z = (carObj->N).linearVel.z + (lookAhead >> 5);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1f;
  }
  lookAhead = (carObj->angularAcc).y;
  (carObj->N).angularVel.x = (carObj->N).angularVel.x + (iVar4 >> 5);
  if (lookAhead < 0) {
    lookAhead = lookAhead + 0x3f;
  }
  iVar4 = (carObj->angularAcc).z;
  (carObj->N).angularVel.y = (carObj->N).angularVel.y + (lookAhead >> 6);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1f;
  }
  lookAhead = carObj->RSControl;
  (carObj->N).angularVel.z = (carObj->N).angularVel.z + (iVar4 >> 5);
  if (lookAhead != 0) {
    if ((carObj->speechInfo).copCarIndex < 0x471c7) {
      if ((byte)(carObj->control).gear < 2) {
        iVar4 = 8;
      }
      else {
        iVar4 = (uint)(byte)(carObj->control).gear << 2;
      }
      uVar6 = *(undefined4 *)((int)pCVar12->velToRpmRatio + iVar4);
      lookAhead = 0x188000;
    }
    else {
      if ((byte)(carObj->control).gear < 2) {
        iVar4 = 8;
      }
      else {
        iVar4 = (uint)(byte)(carObj->control).gear << 2;
      }
      lookAhead = (carObj->speechInfo).copCarIndex;
      uVar6 = *(undefined4 *)((int)pCVar12->velToRpmRatio + iVar4);
    }
    iVar4 = fixedmult(lookAhead,uVar6);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xffff;
    }
    iVar4 = iVar4 >> 0x10;
    if ((byte)(carObj->control).gear < 2) {
      lookAhead = 8;
    }
    else {
      lookAhead = (uint)(byte)(carObj->control).gear << 2;
    }
    lookAhead = fixedmult((carObj->linearVel_ch).z,
                          *(undefined4 *)((int)pCVar12->velToRpmRatio + lookAhead));
    if (lookAhead < 0) {
      lookAhead = lookAhead + 0xffff;
    }
    iVar5 = pCVar12->redline;
    iVar9 = (iVar4 << 8) / iVar5;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar4 << 8 == -0x80000000)) {
      trap(0x1800);
    }
    lookAhead = iVar4 - (lookAhead >> 0x10);
    if (lookAhead < 0xc9) {
      if (lookAhead < 200) {
        if (iVar4 == 0) {
          trap(0x1c00);
        }
        if ((iVar4 == -1) && (lookAhead * 0x80 == -0x80000000)) {
          trap(0x1800);
        }
        iVar9 = iVar9 + (lookAhead * 0x80) / iVar4;
        if (iVar9 < 0) {
          carObj->RSGasLevel = '\0';
        }
        else {
          carObj->RSGasLevel = (char)iVar9;
        }
        if (lookAhead < 0) {
          iVar4 = lookAhead * 0x200;
          iVar5 = pCVar12->redline;
          if (iVar4 < 0) {
            iVar4 = lookAhead * -0x200;
          }
          uVar3 = iVar4 / iVar5;
          cVar8 = (char)uVar3;
          if (iVar5 == 0) {
            trap(0x1c00);
          }
          if ((iVar5 == -1) && (iVar4 == -0x80000000)) {
            trap(0x1800);
          }
          uVar7 = uVar3 & 0xff;
          if (0xff < (int)uVar3) {
            cVar8 = -1;
            uVar7 = 0xff;
          }
          carObj->RSBrakeLevel = cVar8;
          if (0x80 < uVar7) {
            carObj->RSGasLevel = '\0';
          }
        }
      }
    }
    else {
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      if ((iVar4 == -1) && (lookAhead * 0x80 == -0x80000000)) {
        trap(0x1800);
      }
      iVar9 = iVar9 + (lookAhead * 0x80) / iVar4;
      cVar8 = (char)iVar9;
      if (0xe0 < iVar9) {
        cVar8 = -0x20;
      }
      carObj->RSGasLevel = cVar8;
    }
    iVar4 = carObj->carInLane;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar4 = (iVar4 / 6 + (iVar4 >> 0x1f) >> 0x10) - (iVar4 >> 0x1f);
    if (iVar4 < 3) {
      iVar4 = carObj->RSControl * 3;
    }
    else {
      iVar4 = carObj->RSControl * iVar4;
    }
    if (iVar4 < 0) {
      sVar1 = (carObj->N).simRoadInfo.slice;
    }
    else {
      sVar1 = (carObj->N).simRoadInfo.slice;
    }
    piVar11 = (int *)(((int)sVar1 + iVar4) * 0x20);
    lookAhead = iVar4 * 3;
    if (lookAhead < 0) {
      lookAhead = iVar4 * -3;
    }
    local_50 = (carObj->N).position.x;
    local_4c = (carObj->N).position.y;
    local_48 = (carObj->N).position.z;
    local_40.x = *piVar11;
    local_40.y = piVar11[1];
    local_40.z = piVar11[2];
    iVar4 = Physics_CalculateRSControlDesiredPosition__FP8Car_tObjii
                      (carObj,(int)sVar1 + iVar4,lookAhead);
    local_30 = fixedmult((int)*(char *)((int)piVar11 + 0x12) << 9,iVar4);
    local_2c = fixedmult((int)*(char *)((int)piVar11 + 0x13) << 9,iVar4);
    local_28 = fixedmult((int)*(char *)(piVar11 + 5) << 9,iVar4);
    local_40.x = (local_40.x + local_30) - local_50;
    local_40.y = (local_40.y + local_2c) - local_4c;
    local_40.z = (local_40.z + local_28) - local_48;
    Math_NormalizeVector__FP8coorddef(&local_40);
    iVar4 = fixedmult(local_40.x,(carObj->N).orientMat.m[0]);
    lookAhead = fixedmult(local_40.y,(carObj->N).orientMat.m[1]);
    iVar5 = fixedmult(local_40.z,(carObj->N).orientMat.m[2]);
    iVar5 = iVar4 + lookAhead + iVar5;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar5 = iVar5 >> 8;
    carObj->RSSteering = iVar5;
    if (iVar5 < 0x80) {
      iVar4 = -0x7f;
      if (-0x80 < iVar5) goto LAB_800ad314;
    }
    else {
      iVar4 = 0x7f;
    }
    carObj->RSSteering = iVar4;
  }
LAB_800ad314:
  if ((DAT_80113224 & 8) == 0) {
    if ((carObj->control).gasLevel != '\0') {
      iVar4 = carObj->slide;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < 0x199a) goto LAB_800ad3a4;
    }
    iVar4 = fixedmult(carObj->specs->dragFactor,(carObj->N).linearVel.x);
    lookAhead = (carObj->N).linearVel.y;
    pCVar12 = carObj->specs;
    (carObj->N).linearVel.x = iVar4;
    iVar4 = fixedmult(pCVar12->dragFactor,lookAhead);
    lookAhead = (carObj->N).linearVel.z;
    pCVar12 = carObj->specs;
    (carObj->N).linearVel.y = iVar4;
    iVar4 = fixedmult(pCVar12->dragFactor,lookAhead);
    (carObj->N).linearVel.z = iVar4;
  }
LAB_800ad3a4:
  if (((carObj->N).driveSurfaceType == 3) && (0x2ca3d7 < (carObj->N).speedXZ)) {
    iVar4 = fixedmult(0xfeb8,(carObj->N).linearVel.x);
    lookAhead = (carObj->N).linearVel.y;
    (carObj->N).linearVel.x = iVar4;
    iVar4 = fixedmult(0xfeb8,lookAhead);
    lookAhead = (carObj->N).linearVel.z;
    uVar6 = 0xfeb8;
  }
  else {
    if ((carObj->control).gear == '\x01') {
      iVar4 = DAT_801165dc;
      if (DAT_801165dc < 0) {
        iVar4 = -DAT_801165dc;
      }
      if (iVar4 < 0x8000) {
        iVar4 = (carObj->linearVel_ch).z;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        uVar6 = 0xfd70;
        if (0x13ffff < iVar4) {
          iVar4 = (carObj->control).steering;
          if (iVar4 < 0) {
            iVar4 = -iVar4;
          }
          uVar6 = 0xff7c;
          if (0x20 < iVar4) {
            uVar6 = 0xfd70;
          }
        }
        iVar4 = fixedmult(uVar6,(carObj->N).linearVel.x);
        lookAhead = (carObj->N).linearVel.y;
        (carObj->N).linearVel.x = iVar4;
        iVar4 = fixedmult(uVar6,lookAhead);
        lookAhead = (carObj->N).linearVel.z;
        (carObj->N).linearVel.y = iVar4;
        iVar4 = fixedmult(uVar6,lookAhead);
        lookAhead = (carObj->N).angularVel.x;
        (carObj->N).linearVel.z = iVar4;
        iVar4 = fixedmult(uVar6,lookAhead);
        lookAhead = (carObj->N).angularVel.y;
        (carObj->N).angularVel.x = iVar4;
        iVar4 = fixedmult(uVar6,lookAhead);
        lookAhead = (carObj->N).angularVel.z;
        (carObj->N).angularVel.y = iVar4;
        iVar4 = fixedmult(uVar6,lookAhead);
        (carObj->N).angularVel.z = iVar4;
        return;
      }
    }
    if ((carObj->control).handBrake == '\0') {
      return;
    }
    if (0xffff < (carObj->N).speedXZ) {
      return;
    }
    iVar4 = fixedmult(0x8000,(carObj->N).linearVel.x);
    lookAhead = (carObj->N).linearVel.y;
    (carObj->N).linearVel.x = iVar4;
    iVar4 = fixedmult(0x8000,lookAhead);
    lookAhead = (carObj->N).linearVel.z;
    uVar6 = 0x8000;
  }
  (carObj->N).linearVel.y = iVar4;
  iVar4 = fixedmult(uVar6,lookAhead);
  (carObj->N).linearVel.z = iVar4;
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





