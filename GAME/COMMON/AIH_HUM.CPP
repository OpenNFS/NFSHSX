#include "NFS4.H"
#include "AIH_HUM.H"

// decompiled code
// original method signature: 
// void /*$ra*/ HighExecute__12AIHigh_Human(struct AIHigh_Human *this /*$s0*/)
 // line 26, offset 0x80063270
	/* begin block 1 */
		// Start line: 27
		// Start offset: 0x80063270
	/* end block 1 */
	// End offset: 0x80063270
	// End Line: 27

void HighExecute__12AIHigh_Human(AIHigh_Human *this)
{
  HandleCops__13AIHigh_Player((AIHigh_Player *)this);
  (((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.carObj_)->N).active = '\x01';
  StateExecute__12AIState_Base((this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base.state_);
  return;


}




// decompiled code
// original method signature: 
// struct AIHigh_Human * /*$ra*/ __12AIHigh_HumanP8Car_tObj(struct AIHigh_Human *this /*$s0*/, struct Car_tObj *carObj /*$a1*/)
 // line 38, offset 0x800632ac
	/* begin block 1 */
		// Start line: 39
		// Start offset: 0x800632AC
	/* end block 1 */
	// End offset: 0x800632AC
	// End Line: 39

AIHigh_Human * __12AIHigh_HumanP8Car_tObj(AIHigh_Human *this,Car_tObj *carObj)
{
  __13AIHigh_PlayerP8Car_tObj((AIHigh_Player *)this,carObj);
  (this->AIHigh_Player).AIHigh_BasicPerp.AIHigh_Base._vf[0] = (__vtbl_ptr_type *)&table;
  return this;


}





