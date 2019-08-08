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

AIDelayCar * __10AIDelayCarP8Car_tObjT1i(AIDelayCar *this,Car_tObj *basisCar,Car_tObj *targetCar,int delayFactor)
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
  this->deltaRoadPosition_ = this->basisCar_->desiredSpeed - this->targetCar_->desiredSpeed;
  this->roadPosition_ = pCVar2->desiredSpeed;
  this->laneIndex_ = *(int *)(pCVar2->accTable + 0x6e);
  this->currentSpeed_ = pCVar2->carInLane;
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
  short sVar1;
  int position;
  int iVar2;
  int iVar3;
  Car_tObj *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  position = AIWorld_ApxSplineDistance__FP8Car_tObjT0(this->targetCar_,this->basisCar_);
  position = fixedmult(position - this->deltaMeters_,this->delayFactor_);
  position = this->deltaMeters_ + position;
  iVar7 = position / 6 + (position >> 0x1f);
  this->deltaMeters_ = position;
  position = (iVar7 >> 0x10) - (position >> 0x1f);
  if (position < 0) {
    sVar1 = (this->basisCar_->N).simRoadInfo.slice;
  }
  else {
    sVar1 = (this->basisCar_->N).simRoadInfo.slice;
  }
  this->slice_ = (int)sVar1 + position;
  iVar3 = (this->targetCar_->N).position.x - (this->basisCar_->N).position.x;
  iVar5 = (this->targetCar_->N).position.y - (this->basisCar_->N).position.y;
  iVar2 = (this->targetCar_->N).position.z - (this->basisCar_->N).position.z;
  iVar6 = iVar5 - (this->deltaPosition_).y;
  position = (this->deltaPosition_).z;
  iVar7 = fixedmult(iVar3 - (this->deltaPosition_).x,this->delayFactor_,iVar6,iVar7,iVar3,iVar5,
                    iVar2);
  (this->deltaPosition_).x = (this->deltaPosition_).x + iVar7;
  iVar7 = fixedmult(iVar6,this->delayFactor_);
  iVar3 = this->delayFactor_;
  (this->deltaPosition_).y = (this->deltaPosition_).y + iVar7;
  position = fixedmult(iVar2 - position,iVar3);
  pCVar4 = this->basisCar_;
  (this->deltaPosition_).z = (this->deltaPosition_).z + position;
  (this->position_).x = (pCVar4->N).position.x + (this->deltaPosition_).x;
  (this->position_).y = (pCVar4->N).position.y + (this->deltaPosition_).y;
  position = this->delayFactor_;
  (this->position_).z = (pCVar4->N).position.z + (this->deltaPosition_).z;
  position = fixedmult((this->targetCar_->desiredSpeed - pCVar4->desiredSpeed) -
                       this->deltaRoadPosition_,position);
  position = this->deltaRoadPosition_ + position;
  this->deltaRoadPosition_ = position;
  position = this->basisCar_->desiredSpeed + position;
  this->roadPosition_ = position;
  position = AIWorld_LaneIndex__Fii(this->slice_,position);
  this->laneIndex_ = position;
  position = fixedmult(this->targetCar_->carInLane - this->currentSpeed_,this->delayFactor_);
  this->currentSpeed_ = this->currentSpeed_ + position;
  return;


}





