#include "THISDUST.H"
#include "FEMISSION.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__15tMissionManager(struct tMissionManager *this /*$a0*/)
 // line 59, offset 0x80034060
	/* begin block 1 */
		// Start line: 60
		// Start offset: 0x80034060
	/* end block 1 */
	// End offset: 0x80034060
	// End Line: 63

	/* begin block 2 */
		// Start line: 118
	/* end block 2 */
	// End Line: 119

	/* begin block 3 */
		// Start line: 118
	/* end block 3 */
	// End Line: 119

	/* begin block 4 */
		// Start line: 121
	/* end block 4 */
	// End Line: 122

	/* begin block 5 */
		// Start line: 130
	/* end block 5 */
	// End Line: 131

void Initialize__15tMissionManager(tMissionManager *this)

{
  this->fNumTiers = '\0';
  this->fDefinition = (tAcademyDefinition *)0x0;
  frontEnd.policeTier = '\0';
  frontEnd.policeMission = '\0';
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadDescription__15tMissionManagerb(struct tMissionManager *this /*$s4*/, void * LoadHotPursuit /*$a1*/)
 // line 79, offset 0x8003407c
	/* begin block 1 */
		// Start line: 80
		// Start offset: 0x8003407C
		// Variables:
	// 		char *input; // $s2
	// 		char *data; // $s1
	// 		unsigned long numMissions; // $s5
	// 		unsigned long numStages; // $s3
	// 		char filename[80]; // stack offset -112
	/* end block 1 */
	// End offset: 0x80034128
	// End Line: 102

	/* begin block 2 */
		// Start line: 160
	/* end block 2 */
	// End Line: 161

	/* begin block 3 */
		// Start line: 167
	/* end block 3 */
	// End Line: 168

	/* begin block 4 */
		// Start line: 167
	/* end block 4 */
	// End Line: 168

void LoadDescription__15tMissionManagerb(tMissionManager *this,void *LoadHotPursuit)

{
  byte bVar1;
  tAcademyDefinition *ptVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char acStack112 [80];
  
  if (frontEnd.gameMode == '\x01') {
    pcVar3 = s_zHPurs2_mis_800116b4;
  }
  else {
    pcVar3 = s_zHPurs_mis_800116a8;
  }
  sprintf(acStack112,&DAT_800116a0,PTR_801164fc,pcVar3);
  pcVar3 = (char *)loadfileadr(acStack112,0x10);
  this->fNumTiers = *pcVar3;
  iVar6 = *(int *)(pcVar3 + 4);
  iVar5 = *(int *)(pcVar3 + 8);
  puVar4 = (undefined4 *)(pcVar3 + 0xc);
  if (this->fDefinition == (tAcademyDefinition *)0x0) {
    ptVar2 = (tAcademyDefinition *)reservememadr(s_Missions_800116c0,(int)&DAT_00003120,0);
    this->fDefinition = ptVar2;
  }
  blockmove(puVar4,(undefined4 *)this->fDefinition,(uint)(byte)this->fNumTiers << 2);
  bVar1 = this->fNumTiers;
  blockmove(puVar4 + (uint)bVar1,(undefined4 *)this->fDefinition->fMissions,iVar6 * 0x14);
  blockmove(puVar4 + (uint)bVar1 + iVar6 * 5,(undefined4 *)this->fDefinition->fStages,iVar5 * 0x2c);
  purgememadr((int)pcVar3);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseDescription__15tMissionManager(struct tMissionManager *this /*$s0*/)
 // line 139, offset 0x800341b8
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x800341B8
	/* end block 1 */
	// End offset: 0x800341E4
	// End Line: 144

	/* begin block 2 */
		// Start line: 293
	/* end block 2 */
	// End Line: 294

	/* begin block 3 */
		// Start line: 299
	/* end block 3 */
	// End Line: 300

	/* begin block 4 */
		// Start line: 299
	/* end block 4 */
	// End Line: 300

void ReleaseDescription__15tMissionManager(tMissionManager *this)

{
  if (this->fDefinition != (tAcademyDefinition *)0x0) {
    purgememadr((int)this->fDefinition);
    this->fDefinition = (tAcademyDefinition *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ GetMissionStages__15tMissionManagerssPP10tStageInfo(struct tMissionManager *this /*$a0*/, short tier /*$a1*/, short mission /*$a2*/, struct tStageInfo **pStages /*$a3*/)
 // line 172, offset 0x800341f4
	/* begin block 1 */
		// Start line: 173
		// Start offset: 0x800341F4
		// Variables:
	// 		struct tMissionInfo *pMissionInfo; // $v1
	/* end block 1 */
	// End offset: 0x800341F4
	// End Line: 176

	/* begin block 2 */
		// Start line: 336
	/* end block 2 */
	// End Line: 337

	/* begin block 3 */
		// Start line: 365
	/* end block 3 */
	// End Line: 366

	/* begin block 4 */
		// Start line: 365
	/* end block 4 */
	// End Line: 366

	/* begin block 5 */
		// Start line: 368
	/* end block 5 */
	// End Line: 369

short GetMissionStages__15tMissionManagerssPP10tStageInfo
                (tMissionManager *this,short tier,short mission,tStageInfo **pStages)

{
  byte bVar1;
  tAcademyDefinition *ptVar2;
  
  ptVar2 = this->fDefinition;
  bVar1 = (&ptVar2->fTiers[0].fMissionOffset)[(int)((uint)(ushort)tier << 0x10) >> 0xe];
  *pStages = ptVar2->fStages + (uint)ptVar2->fMissions[(uint)bVar1 + (int)mission].fStageOffset;
  return (short)(ushort)ptVar2->fMissions[(uint)bVar1 + (int)mission].fNumStages;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetMissionToRace__15tMissionManagerPP12tMissionInfo(struct tMissionManager *this /*$a0*/, struct tMissionInfo **mission /*$a1*/)
 // line 186, offset 0x8003425c
	/* begin block 1 */
		// Start line: 187
		// Start offset: 0x8003425C
		// Variables:
	// 		struct tMissionTierInfo *currentTier; // $v0
	/* end block 1 */
	// End offset: 0x8003425C
	// End Line: 188

	/* begin block 2 */
		// Start line: 385
	/* end block 2 */
	// End Line: 386

	/* begin block 3 */
		// Start line: 393
	/* end block 3 */
	// End Line: 394

	/* begin block 4 */
		// Start line: 393
	/* end block 4 */
	// End Line: 394

	/* begin block 5 */
		// Start line: 394
	/* end block 5 */
	// End Line: 395

	/* begin block 6 */
		// Start line: 394
	/* end block 6 */
	// End Line: 395

void GetMissionToRace__15tMissionManagerPP12tMissionInfo
               (tMissionManager *this,tMissionInfo **mission)

{
  *mission = this->fDefinition->fMissions +
             (uint)this->fDefinition->fTiers[(uint)(byte)frontEnd.policeTier].fMissionOffset +
             (uint)(byte)frontEnd.policeMission;
  return;
}





