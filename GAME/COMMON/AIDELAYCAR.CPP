#include "NFS4.H"
#include "AIDELAYCAR.H"

// decompiled code
// original method signature: 
// struct AIDelayCar * /*$ra*/ __10AIDelayCarP8Car_tObjT1i(struct AIDelayCar *this /*$s0*/, struct Car_tObj *basisCar /*$a1*/, struct Car_tObj *targetCar /*$a2*/, int delayFactor /*$a3*/)
 // line 20, offset 0x8005aa28
	/* begin block 1 */
		// Start line: 21
		// Start offset: 0x8005AA28
	/* end block 1 */
	// End offset: 0x8005AA28
	// End Line: 21

AIDelayCar *
__10AIDelayCarP8Car_tObjT1i(AIDelayCar *this,Car_tObj *basisCar,Car_tObj *targetCar,int delayFactor)

{
  this->basisCar_ = basisCar;
  this->delayFactor_ = delayFactor;
  SetNewTargetCar__10AIDelayCarP8Car_tObj(this,targetCar);
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetNewTargetCar__10AIDelayCarP8Car_tObj(struct AIDelayCar *this /*$s0*/, struct Car_tObj *targetCar /*$a1*/)
 // line 29, offset 0x8005aa5c
	/* begin block 1 */
		// Start line: 30
		// Start offset: 0x8005AA5C
	/* end block 1 */
	// End offset: 0x8005AA5C
	// End Line: 30

void SetNewTargetCar__10AIDelayCarP8Car_tObj(AIDelayCar *this,Car_tObj *targetCar)

{
  int iVar1;
  Car_tObj *pCVar2;
  int iVar3;
  
  this->targetCar_ = targetCar;
  iVar1 = AIWorld_ApxSplineDistance__FP8Car_tObjT0(this->basisCar_,targetCar);
  this->deltaMeters_ = iVar1;
  this->slice_ = (int)(this->targetCar_->N).simRoadInfo.slice;
  (this->deltaPosition_).x = (this->basisCar_->N).position.x - (this->targetCar_->N).position.x;
  (this->deltaPosition_).y = (this->basisCar_->N).position.y - (this->targetCar_->N).position.y;
  pCVar2 = this->targetCar_;
  (this->deltaPosition_).z = (this->basisCar_->N).position.z - (this->targetCar_->N).position.z;
  iVar1 = (pCVar2->N).position.y;
  iVar3 = (pCVar2->N).position.z;
  (this->position_).x = (pCVar2->N).position.x;
  (this->position_).y = iVar1;
  (this->position_).z = iVar3;
  pCVar2 = this->targetCar_;
  this->deltaRoadPosition_ =
       (this->basisCar_->speechInfo).playerCarIndex - (this->targetCar_->speechInfo).playerCarIndex;
  this->roadPosition_ = (pCVar2->speechInfo).playerCarIndex;
  this->laneIndex_ = *(int *)(pCVar2->accTable + 0x60);
  this->currentSpeed_ = (pCVar2->script).lastActionTime;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Update__10AIDelayCar(struct AIDelayCar *this /*$s0*/)
 // line 46, offset 0x8005ab44
	/* begin block 1 */
		// Start line: 47
		// Start offset: 0x8005AB44
		// Variables:
	// 		struct coorddef currentDeltaPosition; // stack offset -40
	// 		struct coorddef changeDeltaPosition; // stack offset -24
	// 		int currentDeltaRoadPosition; // $a0
	/* end block 1 */
	// End offset: 0x8005ABFC
	// End Line: 53

void Update__10AIDelayCar(AIDelayCar *this)

{
  int position;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Car_tObj *pCVar6;
  int iVar7;
  
  position = AIWorld_ApxSplineDistance__FP8Car_tObjT0(this->targetCar_,this->basisCar_);
  uVar1 = fixedmult(position - this->deltaMeters_,this->delayFactor_);
  position = this->deltaMeters_ + uVar1;
  this->deltaMeters_ = position;
  position = (position / 6 + (position >> 0x1f) >> 0x10) - (position >> 0x1f);
  if (position < 0) {
    position = (int)(this->basisCar_->N).simRoadInfo.slice + position;
    if (position < 0) {
      position = position + gNumSlices;
    }
  }
  else {
    position = (int)(this->basisCar_->N).simRoadInfo.slice + position;
    if (gNumSlices <= position) {
      position = position - gNumSlices;
    }
  }
  this->slice_ = position;
  iVar7 = (this->targetCar_->N).position.y;
  position = (this->basisCar_->N).position.y;
  iVar5 = (this->targetCar_->N).position.z;
  iVar2 = (this->basisCar_->N).position.z;
  iVar3 = (this->deltaPosition_).y;
  iVar4 = (this->deltaPosition_).z;
  uVar1 = fixedmult(((this->targetCar_->N).position.x - (this->basisCar_->N).position.x) -
                    (this->deltaPosition_).x,this->delayFactor_);
  (this->deltaPosition_).x = (this->deltaPosition_).x + uVar1;
  uVar1 = fixedmult((iVar7 - position) - iVar3,this->delayFactor_);
  position = this->delayFactor_;
  (this->deltaPosition_).y = (this->deltaPosition_).y + uVar1;
  uVar1 = fixedmult((iVar5 - iVar2) - iVar4,position);
  pCVar6 = this->basisCar_;
  (this->deltaPosition_).z = (this->deltaPosition_).z + uVar1;
  (this->position_).x = (pCVar6->N).position.x + (this->deltaPosition_).x;
  (this->position_).y = (pCVar6->N).position.y + (this->deltaPosition_).y;
  position = this->delayFactor_;
  (this->position_).z = (pCVar6->N).position.z + (this->deltaPosition_).z;
  uVar1 = fixedmult(((this->targetCar_->speechInfo).playerCarIndex -
                    (pCVar6->speechInfo).playerCarIndex) - this->deltaRoadPosition_,position);
  position = this->deltaRoadPosition_ + uVar1;
  this->deltaRoadPosition_ = position;
  position = (this->basisCar_->speechInfo).playerCarIndex + position;
  this->roadPosition_ = position;
  position = AIWorld_LaneIndex__Fii(this->slice_,position);
  this->laneIndex_ = position;
  uVar1 = fixedmult((this->targetCar_->script).lastActionTime - this->currentSpeed_,
                    this->delayFactor_);
  this->currentSpeed_ = this->currentSpeed_ + uVar1;
  return;
}




