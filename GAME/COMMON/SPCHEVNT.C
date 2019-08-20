#include "NFS4.H"
#include "SPCHEVNT.H"

// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_A_CONFIRM(struct SPCHNFSType_VOICE *VOICE /*$a0*/, int ID_UNIT /*$a1*/, struct SPCHNFSType_CONFIRM *CONFIRM /*$a2*/)
 // line 7, offset 0x80092f54
	/* begin block 1 */
		// Start line: 8
		// Start offset: 0x80092F54
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80092F74
	// End Line: 16

long SPCHNFS_C_A_CONFIRM(SPCHNFSType_VOICE *VOICE,int ID_UNIT,SPCHNFSType_CONFIRM *CONFIRM)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  int local_30;
  ulong local_2c;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x151;
  local_34 = VOICE->flags;
  local_2c = CONFIRM->flags;
  local_30 = ID_UNIT;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_REQUEST_EMS(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_AMBULANCE *AMBULANCE /*$a1*/)
 // line 27, offset 0x80092fa8
	/* begin block 1 */
		// Start line: 28
		// Start offset: 0x80092FA8
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80092FC8
	// End Line: 36

long SPCHNFS_C_D_REQUEST_EMS(SPCHNFSType_VOICE *VOICE,SPCHNFSType_AMBULANCE *AMBULANCE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x152;
  local_34 = VOICE->flags;
  local_30 = AMBULANCE->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_BEGIN_PURS_REP_SPDR(struct SPCHNFSType_COLOUR *COLOUR /*$a0*/, int ID_CAR /*$a1*/, struct SPCHNFSType_POSITION *POSITION /*$a2*/, int ID_LOCATION /*$a3*/, struct SPCHNFSType_DISTANCE *DISTANCE /*stack 16*/)
 // line 66, offset 0x80092ffc
	/* begin block 1 */
		// Start line: 67
		// Start offset: 0x80092FFC
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x8009301C
	// End Line: 75

long SPCHNFS_D_C_BEGIN_PURS_REP_SPDR
               (SPCHNFSType_COLOUR *COLOUR,int ID_CAR,SPCHNFSType_POSITION *POSITION,int ID_LOCATION
               ,SPCHNFSType_DISTANCE *DISTANCE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  int local_30;
  ulong local_2c;
  int local_28;
  ulong local_24;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x154;
  local_34 = COLOUR->flags;
  local_2c = POSITION->flags;
  local_24 = DISTANCE->flags;
  local_30 = ID_CAR;
  local_28 = ID_LOCATION;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_ENGAGE_PURS_REP_SPDR_REPLY(struct SPCHNFSType_VOICE *VOICE /*$a0*/, int ID_UNIT /*$a1*/, struct SPCHNFSType_COLOUR *COLOUR /*$a2*/, int ID_CAR /*$a3*/, struct SPCHNFSType_DISTANCE *DISTANCE /*stack 16*/, struct SPCHNFSType_POSITION *POSITION /*stack 20*/, int ID_LOCATION /*stack 24*/, struct SPCHNFSType_CONFIRM *CONFIRM /*stack 28*/)
 // line 94, offset 0x80093064
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x80093064
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093084
	// End Line: 103

long SPCHNFS_C_D_ENGAGE_PURS_REP_SPDR_REPLY
               (SPCHNFSType_VOICE *VOICE,int ID_UNIT,SPCHNFSType_COLOUR *COLOUR,int ID_CAR,
               SPCHNFSType_DISTANCE *DISTANCE,SPCHNFSType_POSITION *POSITION,int ID_LOCATION,
               SPCHNFSType_CONFIRM *CONFIRM)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  int local_30;
  ulong local_2c;
  int local_28;
  ulong local_24;
  ulong local_20;
  int local_1c;
  ulong local_18;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x155;
  local_34 = VOICE->flags;
  local_2c = COLOUR->flags;
  local_24 = DISTANCE->flags;
  local_20 = POSITION->flags;
  local_1c = ID_LOCATION;
  local_18 = CONFIRM->flags;
  local_30 = ID_UNIT;
  local_28 = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_ENGAGE_PURS_REP_SPDR(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_COLOUR *COLOUR /*$a1*/, int ID_CAR /*$a2*/, struct SPCHNFSType_POSITION *POSITION /*$a3*/, int ID_LOCATION /*stack 16*/, struct SPCHNFSType_DISTANCE *DISTANCE /*stack 20*/, int ID_SPEED /*stack 24*/, struct SPCHNFSType_vs_KMH_MPH *vs_KMH_MPH /*stack 28*/, struct SPCHNFSType_PERP_NAME *PERP_NAME /*stack 32*/)
 // line 126, offset 0x800930f8
	/* begin block 1 */
		// Start line: 127
		// Start offset: 0x800930F8
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $t0
	/* end block 1 */
	// End offset: 0x80093118
	// End Line: 135

long SPCHNFS_C_D_ENGAGE_PURS_REP_SPDR
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR,
               SPCHNFSType_POSITION *POSITION,int ID_LOCATION,SPCHNFSType_DISTANCE *DISTANCE,
               int ID_SPEED,SPCHNFSType_vs_KMH_MPH *vs_KMH_MPH,SPCHNFSType_PERP_NAME *PERP_NAME)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  int local_24;
  ulong local_20;
  int local_1c;
  ulong local_18;
  ulong local_14;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x156;
  local_34 = VOICE->flags;
  local_30 = COLOUR->flags;
  local_28 = POSITION->flags;
  local_24 = ID_LOCATION;
  local_20 = DISTANCE->flags;
  local_1c = ID_SPEED;
  local_18 = vs_KMH_MPH->flags;
  local_14 = PERP_NAME->flags;
  local_2c = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_C_IN_PURS_NEAR_PERP(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_COLOUR *COLOUR /*$a1*/, int ID_CAR /*$a2*/)
 // line 178, offset 0x80093198
	/* begin block 1 */
		// Start line: 179
		// Start offset: 0x80093198
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x800931B8
	// End Line: 187

long SPCHNFS_C_C_IN_PURS_NEAR_PERP(SPCHNFSType_VOICE *VOICE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x158;
  local_34 = VOICE->flags;
  local_30 = COLOUR->flags;
  local_2c = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_IN_PURS_NEAR_PERP(struct SPCHNFSType_PURS_UPDT *PURS_UPDT /*$a0*/)
 // line 197, offset 0x800931f0
	/* begin block 1 */
		// Start line: 198
		// Start offset: 0x800931F0
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093210
	// End Line: 206

long SPCHNFS_D_C_IN_PURS_NEAR_PERP(SPCHNFSType_PURS_UPDT *PURS_UPDT)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x159;
  local_34 = PURS_UPDT->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_IN_PURS_NEAR_PERP_REP_STS(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_COLOUR *COLOUR /*$a1*/, int ID_CAR /*$a2*/, struct SPCHNFSType_DISTANCE *DISTANCE /*$a3*/, struct SPCHNFSType_POSITION *POSITION /*stack 16*/, int ID_LOCATION /*stack 20*/)
 // line 219, offset 0x80093238
	/* begin block 1 */
		// Start line: 220
		// Start offset: 0x80093238
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093258
	// End Line: 228

long SPCHNFS_C_D_IN_PURS_NEAR_PERP_REP_STS
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR,
               SPCHNFSType_DISTANCE *DISTANCE,SPCHNFSType_POSITION *POSITION,int ID_LOCATION)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  ulong local_24;
  int local_20;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x15a;
  local_34 = VOICE->flags;
  local_30 = COLOUR->flags;
  local_28 = DISTANCE->flags;
  local_24 = POSITION->flags;
  local_20 = ID_LOCATION;
  local_2c = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_IN_PURS_NEAR_PERP_CONFIRM(struct SPCHNFSType_COLOUR *COLOUR /*$a0*/, int ID_CAR /*$a1*/, int ID_UNIT /*$a2*/, struct SPCHNFSType_CONFIRM *CONFIRM /*$a3*/, struct SPCHNFSType_PERP_NAME *PERP_NAME /*stack 16*/)
 // line 245, offset 0x800932b4
	/* begin block 1 */
		// Start line: 246
		// Start offset: 0x800932B4
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x800932D4
	// End Line: 254

long SPCHNFS_D_C_IN_PURS_NEAR_PERP_CONFIRM
               (SPCHNFSType_COLOUR *COLOUR,int ID_CAR,int ID_UNIT,SPCHNFSType_CONFIRM *CONFIRM,
               SPCHNFSType_PERP_NAME *PERP_NAME)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  int local_30;
  int local_2c;
  ulong local_28;
  ulong local_24;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x15b;
  local_34 = COLOUR->flags;
  local_28 = CONFIRM->flags;
  local_24 = PERP_NAME->flags;
  local_30 = ID_CAR;
  local_2c = ID_UNIT;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_IN_PURS_AWAY_PERP_REPLY_STS(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_COLOUR *COLOUR /*$a1*/, int ID_CAR /*$a2*/, struct SPCHNFSType_POSITION *POSITION /*$a3*/, int ID_LOCATION /*stack 16*/, struct SPCHNFSType_DISTANCE *DISTANCE /*stack 20*/)
 // line 315, offset 0x80093320
	/* begin block 1 */
		// Start line: 316
		// Start offset: 0x80093320
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $t0
	/* end block 1 */
	// End offset: 0x80093340
	// End Line: 324

long SPCHNFS_C_D_IN_PURS_AWAY_PERP_REPLY_STS
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR,
               SPCHNFSType_POSITION *POSITION,int ID_LOCATION,SPCHNFSType_DISTANCE *DISTANCE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  int local_24;
  ulong local_20;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x15e;
  local_34 = VOICE->flags;
  local_30 = COLOUR->flags;
  local_28 = POSITION->flags;
  local_24 = ID_LOCATION;
  local_20 = DISTANCE->flags;
  local_2c = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_IN_PURS_AWAY_PERP_CONFIRM(struct SPCHNFSType_COLOUR *COLOUR /*$a0*/, int ID_CAR /*$a1*/, int ID_UNIT /*$a2*/, struct SPCHNFSType_CONFIRM *CONFIRM /*$a3*/, struct SPCHNFSType_PERP_NAME *PERP_NAME /*stack 16*/)
 // line 341, offset 0x80093394
	/* begin block 1 */
		// Start line: 342
		// Start offset: 0x80093394
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x800933B4
	// End Line: 350

long SPCHNFS_D_C_IN_PURS_AWAY_PERP_CONFIRM
               (SPCHNFSType_COLOUR *COLOUR,int ID_CAR,int ID_UNIT,SPCHNFSType_CONFIRM *CONFIRM,
               SPCHNFSType_PERP_NAME *PERP_NAME)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  int local_30;
  int local_2c;
  ulong local_28;
  ulong local_24;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x15f;
  local_34 = COLOUR->flags;
  local_28 = CONFIRM->flags;
  local_24 = PERP_NAME->flags;
  local_30 = ID_CAR;
  local_2c = ID_UNIT;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_IN_PURS_LOOK_PERP_REPLY_STS(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_COLOUR *COLOUR /*$a1*/, int ID_CAR /*$a2*/, struct SPCHNFSType_PERP_NAME *PERP_NAME /*$a3*/)
 // line 407, offset 0x80093400
	/* begin block 1 */
		// Start line: 408
		// Start offset: 0x80093400
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093420
	// End Line: 416

long SPCHNFS_C_D_IN_PURS_LOOK_PERP_REPLY_STS
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR,
               SPCHNFSType_PERP_NAME *PERP_NAME)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x162;
  local_34 = VOICE->flags;
  local_30 = COLOUR->flags;
  local_28 = PERP_NAME->flags;
  local_2c = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_C_IDLE_WINGMAN_DISAPPEARS(struct SPCHNFSType_VOICE *VOICE /*$a0*/)
 // line 467, offset 0x80093460
	/* begin block 1 */
		// Start line: 468
		// Start offset: 0x80093460
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093480
	// End Line: 476

long SPCHNFS_C_C_IDLE_WINGMAN_DISAPPEARS(SPCHNFSType_VOICE *VOICE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x165;
  local_34 = VOICE->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_REQ_RDBLK(struct SPCHNFSType_VOICE *VOICE /*$a0*/)
 // line 484, offset 0x800934a8
	/* begin block 1 */
		// Start line: 485
		// Start offset: 0x800934A8
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x800934C8
	// End Line: 493

long SPCHNFS_C_D_REQ_RDBLK(SPCHNFSType_VOICE *VOICE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x167;
  local_34 = VOICE->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_RDBLK_SPBLT_DENIED_REPLY(struct SPCHNFSType_vs_RDBLK_SSTRP *vs_RDBLK_SSTRP /*$a0*/)
 // line 501, offset 0x800934f0
	/* begin block 1 */
		// Start line: 502
		// Start offset: 0x800934F0
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093510
	// End Line: 510

long SPCHNFS_D_C_RDBLK_SPBLT_DENIED_REPLY(SPCHNFSType_vs_RDBLK_SSTRP *vs_RDBLK_SSTRP)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x168;
  local_34 = vs_RDBLK_SSTRP->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_RDBLK_SPBLT_GRANT_REPLY(struct SPCHNFSType_vs_RDBLK_SSTRP *vs_RDBLK_SSTRP /*$a0*/, struct SPCHNFSType_CONFIRM *CONFIRM /*$a1*/)
 // line 519, offset 0x80093538
	/* begin block 1 */
		// Start line: 520
		// Start offset: 0x80093538
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093558
	// End Line: 528

long SPCHNFS_D_C_RDBLK_SPBLT_GRANT_REPLY
               (SPCHNFSType_vs_RDBLK_SSTRP *vs_RDBLK_SSTRP,SPCHNFSType_CONFIRM *CONFIRM)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x169;
  local_34 = vs_RDBLK_SSTRP->flags;
  local_30 = CONFIRM->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_RDBLK_CONFIRMED(struct SPCHNFSType_POSITION *POSITION /*$a0*/, int ID_LOCATION /*$a1*/, struct SPCHNFSType_DISTANCE *DISTANCE /*$a2*/)
 // line 539, offset 0x8009358c
	/* begin block 1 */
		// Start line: 540
		// Start offset: 0x8009358C
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x800935AC
	// End Line: 548

long SPCHNFS_D_C_RDBLK_CONFIRMED
               (SPCHNFSType_POSITION *POSITION,int ID_LOCATION,SPCHNFSType_DISTANCE *DISTANCE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  int local_30;
  ulong local_2c;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x16a;
  local_34 = POSITION->flags;
  local_2c = DISTANCE->flags;
  local_30 = ID_LOCATION;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_RDBLK_FAILED(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_COLOUR *COLOUR /*$a1*/, int ID_CAR /*$a2*/)
 // line 560, offset 0x800935e0
	/* begin block 1 */
		// Start line: 561
		// Start offset: 0x800935E0
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093600
	// End Line: 569

long SPCHNFS_C_D_RDBLK_FAILED(SPCHNFSType_VOICE *VOICE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x16d;
  local_34 = VOICE->flags;
  local_30 = COLOUR->flags;
  local_2c = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_REQUEST_BKUP(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_COLOUR *COLOUR /*$a1*/, int ID_CAR /*$a2*/, struct SPCHNFSType_POSITION *POSITION /*$a3*/, int ID_LOCATION /*stack 16*/, struct SPCHNFSType_DISTANCE *DISTANCE /*stack 20*/)
 // line 584, offset 0x80093638
	/* begin block 1 */
		// Start line: 585
		// Start offset: 0x80093638
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $t0
	/* end block 1 */
	// End offset: 0x80093658
	// End Line: 593

long SPCHNFS_C_D_REQUEST_BKUP
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR,
               SPCHNFSType_POSITION *POSITION,int ID_LOCATION,SPCHNFSType_DISTANCE *DISTANCE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  int local_24;
  ulong local_20;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x16f;
  local_34 = VOICE->flags;
  local_30 = COLOUR->flags;
  local_28 = POSITION->flags;
  local_24 = ID_LOCATION;
  local_20 = DISTANCE->flags;
  local_2c = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_BKUP_REQUEST_GRANT_REPLY(struct SPCHNFSType_DISTANCE *DISTANCE /*$a0*/, struct SPCHNFSType_POSITION *POSITION /*$a1*/, int ID_LOCATION /*$a2*/, int ID_UNIT /*$a3*/)
 // line 655, offset 0x800936ac
	/* begin block 1 */
		// Start line: 656
		// Start offset: 0x800936AC
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x800936CC
	// End Line: 664

long SPCHNFS_D_C_BKUP_REQUEST_GRANT_REPLY
               (SPCHNFSType_DISTANCE *DISTANCE,SPCHNFSType_POSITION *POSITION,int ID_LOCATION,
               int ID_UNIT)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  int local_28;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x172;
  local_34 = DISTANCE->flags;
  local_30 = POSITION->flags;
  local_2c = ID_LOCATION;
  local_28 = ID_UNIT;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_BKUP_REQUEST_DENIED_REPLY()
 // line 675, offset 0x80093708
	/* begin block 1 */
		// Start line: 676
		// Start offset: 0x80093708
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093728
	// End Line: 684

/* WARNING: Unknown calling convention yet parameter storage is locked */

long SPCHNFS_D_C_BKUP_REQUEST_DENIED_REPLY(void)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38 [11];
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38[0] = 0x174;
  lVar2 = SPCH_AddEvent(local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_C_NEW_OFFICER_ENGAGING(struct SPCHNFSType_VOICE *VOICE /*$a0*/, int ID_UNIT /*$a1*/)
 // line 728, offset 0x80093748
	/* begin block 1 */
		// Start line: 729
		// Start offset: 0x80093748
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093768
	// End Line: 737

long SPCHNFS_C_C_NEW_OFFICER_ENGAGING(SPCHNFSType_VOICE *VOICE,int ID_UNIT)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  int local_30;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x177;
  local_34 = VOICE->flags;
  local_30 = ID_UNIT;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_PERP_SIGHTED(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_COLOUR *COLOUR /*$a1*/, int ID_CAR /*$a2*/, struct SPCHNFSType_DISTANCE *DISTANCE /*$a3*/, struct SPCHNFSType_POSITION *POSITION /*stack 16*/, int ID_LOCATION /*stack 20*/, struct SPCHNFSType_PERP_NAME *PERP_NAME /*stack 24*/)
 // line 752, offset 0x80093794
	/* begin block 1 */
		// Start line: 753
		// Start offset: 0x80093794
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x800937B4
	// End Line: 761

long SPCHNFS_C_D_PERP_SIGHTED
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR,
               SPCHNFSType_DISTANCE *DISTANCE,SPCHNFSType_POSITION *POSITION,int ID_LOCATION,
               SPCHNFSType_PERP_NAME *PERP_NAME)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  ulong local_24;
  int local_20;
  ulong local_1c;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x178;
  local_34 = VOICE->flags;
  local_30 = COLOUR->flags;
  local_28 = DISTANCE->flags;
  local_24 = POSITION->flags;
  local_20 = ID_LOCATION;
  local_1c = PERP_NAME->flags;
  local_2c = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_PERP_SIGHTED_CONFIRM(struct SPCHNFSType_CONFIRM *CONFIRM /*$a0*/, int ID_UNIT /*$a1*/)
 // line 776, offset 0x80093820
	/* begin block 1 */
		// Start line: 777
		// Start offset: 0x80093820
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093840
	// End Line: 785

long SPCHNFS_D_C_PERP_SIGHTED_CONFIRM(SPCHNFSType_CONFIRM *CONFIRM,int ID_UNIT)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  int local_30;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x179;
  local_34 = CONFIRM->flags;
  local_30 = ID_UNIT;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_PERP_LOST(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_COLOUR *COLOUR /*$a1*/, int ID_CAR /*$a2*/, struct SPCHNFSType_POSITION *POSITION /*$a3*/, int ID_LOCATION /*stack 16*/, struct SPCHNFSType_DISTANCE *DISTANCE /*stack 20*/, struct SPCHNFSType_PERP_NAME *PERP_NAME /*stack 24*/)
 // line 800, offset 0x8009386c
	/* begin block 1 */
		// Start line: 801
		// Start offset: 0x8009386C
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $t0
	/* end block 1 */
	// End offset: 0x8009388C
	// End Line: 809

long SPCHNFS_C_D_PERP_LOST
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR,
               SPCHNFSType_POSITION *POSITION,int ID_LOCATION,SPCHNFSType_DISTANCE *DISTANCE,
               SPCHNFSType_PERP_NAME *PERP_NAME)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  int local_24;
  ulong local_20;
  ulong local_1c;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x17a;
  local_34 = VOICE->flags;
  local_30 = COLOUR->flags;
  local_28 = POSITION->flags;
  local_24 = ID_LOCATION;
  local_20 = DISTANCE->flags;
  local_1c = PERP_NAME->flags;
  local_2c = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_PERP_LOST_CONFIRM(struct SPCHNFSType_COLOUR *COLOUR /*$a0*/, int ID_CAR /*$a1*/)
 // line 824, offset 0x800938f4
	/* begin block 1 */
		// Start line: 825
		// Start offset: 0x800938F4
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093914
	// End Line: 833

long SPCHNFS_D_C_PERP_LOST_CONFIRM(SPCHNFSType_COLOUR *COLOUR,int ID_CAR)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  int local_30;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x17b;
  local_34 = COLOUR->flags;
  local_30 = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_C_PERP_REAQUIRED(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_COLOUR *COLOUR /*$a1*/, int ID_CAR /*$a2*/, struct SPCHNFSType_POSITION *POSITION /*$a3*/, int ID_LOCATION /*stack 16*/, struct SPCHNFSType_DISTANCE *DISTANCE /*stack 20*/)
 // line 847, offset 0x80093940
	/* begin block 1 */
		// Start line: 848
		// Start offset: 0x80093940
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $t0
	/* end block 1 */
	// End offset: 0x80093960
	// End Line: 856

long SPCHNFS_C_C_PERP_REAQUIRED
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR,
               SPCHNFSType_POSITION *POSITION,int ID_LOCATION,SPCHNFSType_DISTANCE *DISTANCE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  int local_24;
  ulong local_20;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x17c;
  local_34 = VOICE->flags;
  local_30 = COLOUR->flags;
  local_28 = POSITION->flags;
  local_24 = ID_LOCATION;
  local_20 = DISTANCE->flags;
  local_2c = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_PERP_APPREHENSION(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_PERP_NAME *PERP_NAME /*$a1*/)
 // line 926, offset 0x800939b4
	/* begin block 1 */
		// Start line: 927
		// Start offset: 0x800939B4
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x800939D4
	// End Line: 935

long SPCHNFS_C_D_PERP_APPREHENSION(SPCHNFSType_VOICE *VOICE,SPCHNFSType_PERP_NAME *PERP_NAME)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x17f;
  local_34 = VOICE->flags;
  local_30 = PERP_NAME->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_PERP_APPREHENSION_REPLY(int ID_UNIT /*$a0*/, struct SPCHNFSType_CONFIRM *CONFIRM /*$a1*/, struct SPCHNFSType_PERP_NAME *PERP_NAME /*$a2*/)
 // line 946, offset 0x80093a08
	/* begin block 1 */
		// Start line: 947
		// Start offset: 0x80093A08
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093A28
	// End Line: 955

long SPCHNFS_D_C_PERP_APPREHENSION_REPLY
               (int ID_UNIT,SPCHNFSType_CONFIRM *CONFIRM,SPCHNFSType_PERP_NAME *PERP_NAME)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  int local_34;
  ulong local_30;
  ulong local_2c;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x180;
  local_30 = CONFIRM->flags;
  local_2c = PERP_NAME->flags;
  local_34 = ID_UNIT;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_PERP_CRASH_GEN(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_POSITION *POSITION /*$a1*/, int ID_LOCATION /*$a2*/, struct SPCHNFSType_COLOUR *COLOUR /*$a3*/, int ID_CAR /*stack 16*/, struct SPCHNFSType_DISTANCE *DISTANCE /*stack 20*/, struct SPCHNFSType_PERP_NAME *PERP_NAME /*stack 24*/)
 // line 971, offset 0x80093a60
	/* begin block 1 */
		// Start line: 972
		// Start offset: 0x80093A60
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $t0
	/* end block 1 */
	// End offset: 0x80093A80
	// End Line: 980

long SPCHNFS_C_D_PERP_CRASH_GEN
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_POSITION *POSITION,int ID_LOCATION,
               SPCHNFSType_COLOUR *COLOUR,int ID_CAR,SPCHNFSType_DISTANCE *DISTANCE,
               SPCHNFSType_PERP_NAME *PERP_NAME)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  int local_24;
  ulong local_20;
  ulong local_1c;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x181;
  local_34 = VOICE->flags;
  local_30 = POSITION->flags;
  local_28 = COLOUR->flags;
  local_24 = ID_CAR;
  local_20 = DISTANCE->flags;
  local_1c = PERP_NAME->flags;
  local_2c = ID_LOCATION;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_P_ARRESTED(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_ARREST *ARREST /*$a1*/)
 // line 1014, offset 0x80093ae8
	/* begin block 1 */
		// Start line: 1015
		// Start offset: 0x80093AE8
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093B08
	// End Line: 1023

long SPCHNFS_C_P_ARRESTED(SPCHNFSType_VOICE *VOICE,SPCHNFSType_ARREST *ARREST)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x187;
  local_34 = VOICE->flags;
  local_30 = ARREST->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_P_WARNING(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_ARREST *ARREST /*$a1*/)
 // line 1033, offset 0x80093b3c
	/* begin block 1 */
		// Start line: 1034
		// Start offset: 0x80093B3C
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093B5C
	// End Line: 1042

long SPCHNFS_C_P_WARNING(SPCHNFSType_VOICE *VOICE,SPCHNFSType_ARREST *ARREST)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x188;
  local_34 = VOICE->flags;
  local_30 = ARREST->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_P_TICKET(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_ARREST *ARREST /*$a1*/)
 // line 1052, offset 0x80093b90
	/* begin block 1 */
		// Start line: 1053
		// Start offset: 0x80093B90
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093BB0
	// End Line: 1061

long SPCHNFS_C_P_TICKET(SPCHNFSType_VOICE *VOICE,SPCHNFSType_ARREST *ARREST)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x189;
  local_34 = VOICE->flags;
  local_30 = ARREST->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_P_FALSE_ARREST_BULLHORN(struct SPCHNFSType_VOICE *VOICE /*$a0*/)
 // line 1070, offset 0x80093be4
	/* begin block 1 */
		// Start line: 1071
		// Start offset: 0x80093BE4
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093C04
	// End Line: 1079

long SPCHNFS_C_P_FALSE_ARREST_BULLHORN(SPCHNFSType_VOICE *VOICE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x18a;
  local_34 = VOICE->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_DURING_FALSE_ARREST(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_PERP_NAME *PERP_NAME /*$a1*/)
 // line 1088, offset 0x80093c2c
	/* begin block 1 */
		// Start line: 1089
		// Start offset: 0x80093C2C
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093C4C
	// End Line: 1097

long SPCHNFS_C_D_DURING_FALSE_ARREST(SPCHNFSType_VOICE *VOICE,SPCHNFSType_PERP_NAME *PERP_NAME)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x18b;
  local_34 = VOICE->flags;
  local_30 = PERP_NAME->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_P_BULLHORN_SPEECH(struct SPCHNFSType_VOICE *VOICE /*$a0*/)
 // line 1106, offset 0x80093c80
	/* begin block 1 */
		// Start line: 1107
		// Start offset: 0x80093C80
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093CA0
	// End Line: 1115

long SPCHNFS_C_P_BULLHORN_SPEECH(SPCHNFSType_VOICE *VOICE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x18d;
  local_34 = VOICE->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_S_C_SUPER_COP_ARRIVAL(struct SPCHNFSType_VOICE *VOICE /*$a0*/)
 // line 1123, offset 0x80093cc8
	/* begin block 1 */
		// Start line: 1124
		// Start offset: 0x80093CC8
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093CE8
	// End Line: 1132

long SPCHNFS_S_C_SUPER_COP_ARRIVAL(SPCHNFSType_VOICE *VOICE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x18e;
  local_34 = VOICE->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_S_C_SUPER_COP_CRITICISM(struct SPCHNFSType_VOICE *VOICE /*$a0*/)
 // line 1140, offset 0x80093d10
	/* begin block 1 */
		// Start line: 1141
		// Start offset: 0x80093D10
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093D30
	// End Line: 1149

long SPCHNFS_S_C_SUPER_COP_CRITICISM(SPCHNFSType_VOICE *VOICE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 399;
  local_34 = VOICE->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_IN_PURS_NEAR_PERP_REP_LOC(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_POSITION *POSITION /*$a1*/, int ID_LOCATION /*$a2*/, struct SPCHNFSType_DISTANCE *DISTANCE /*$a3*/)
 // line 1285, offset 0x80093d58
	/* begin block 1 */
		// Start line: 1286
		// Start offset: 0x80093D58
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093D78
	// End Line: 1294

long SPCHNFS_C_D_IN_PURS_NEAR_PERP_REP_LOC
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_POSITION *POSITION,int ID_LOCATION,
               SPCHNFSType_DISTANCE *DISTANCE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x19e;
  local_34 = VOICE->flags;
  local_30 = POSITION->flags;
  local_28 = DISTANCE->flags;
  local_2c = ID_LOCATION;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_IN_PURS_NEAR_PERP_REP_SPD(struct SPCHNFSType_VOICE *VOICE /*$a0*/, int ID_SPEED /*$a1*/, struct SPCHNFSType_vs_KMH_MPH *vs_KMH_MPH /*$a2*/)
 // line 1307, offset 0x80093db8
	/* begin block 1 */
		// Start line: 1308
		// Start offset: 0x80093DB8
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093DD8
	// End Line: 1316

long SPCHNFS_C_D_IN_PURS_NEAR_PERP_REP_SPD
               (SPCHNFSType_VOICE *VOICE,int ID_SPEED,SPCHNFSType_vs_KMH_MPH *vs_KMH_MPH)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  int local_30;
  ulong local_2c;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x19f;
  local_34 = VOICE->flags;
  local_2c = vs_KMH_MPH->flags;
  local_30 = ID_SPEED;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_IN_PURS_AWAY_PERP_REPLY_LOC(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_POSITION *POSITION /*$a1*/, int ID_LOCATION /*$a2*/, struct SPCHNFSType_DISTANCE *DISTANCE /*$a3*/, struct SPCHNFSType_COLOUR *COLOUR /*stack 16*/, int ID_CAR /*stack 20*/, struct SPCHNFSType_PERP_NAME *PERP_NAME /*stack 24*/)
 // line 1332, offset 0x80093e0c
	/* begin block 1 */
		// Start line: 1333
		// Start offset: 0x80093E0C
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093E2C
	// End Line: 1341

long SPCHNFS_C_D_IN_PURS_AWAY_PERP_REPLY_LOC
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_POSITION *POSITION,int ID_LOCATION,
               SPCHNFSType_DISTANCE *DISTANCE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR,
               SPCHNFSType_PERP_NAME *PERP_NAME)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  ulong local_24;
  int local_20;
  ulong local_1c;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1a0;
  local_34 = VOICE->flags;
  local_30 = POSITION->flags;
  local_28 = DISTANCE->flags;
  local_24 = COLOUR->flags;
  local_20 = ID_CAR;
  local_1c = PERP_NAME->flags;
  local_2c = ID_LOCATION;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_IN_PURS_LOOK_PERP_REPLY_LOC(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_POSITION *POSITION /*$a1*/, int ID_LOCATION /*$a2*/, struct SPCHNFSType_DISTANCE *DISTANCE /*$a3*/, struct SPCHNFSType_COLOUR *COLOUR /*stack 16*/, int ID_CAR /*stack 20*/)
 // line 1360, offset 0x80093e98
	/* begin block 1 */
		// Start line: 1361
		// Start offset: 0x80093E98
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093EB8
	// End Line: 1369

long SPCHNFS_C_D_IN_PURS_LOOK_PERP_REPLY_LOC
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_POSITION *POSITION,int ID_LOCATION,
               SPCHNFSType_DISTANCE *DISTANCE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  ulong local_24;
  int local_20;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1a2;
  local_34 = VOICE->flags;
  local_30 = POSITION->flags;
  local_28 = DISTANCE->flags;
  local_24 = COLOUR->flags;
  local_20 = ID_CAR;
  local_2c = ID_LOCATION;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_INTRO_CALL(int ID_UNIT /*$a0*/, int ID_UNIT1 /*$a1*/, struct SPCHNFSType_REVINTRO *REVINTRO /*$a2*/)
 // line 1384, offset 0x80093f14
	/* begin block 1 */
		// Start line: 1385
		// Start offset: 0x80093F14
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093F34
	// End Line: 1393

long SPCHNFS_D_C_INTRO_CALL(int ID_UNIT,int ID_UNIT1,SPCHNFSType_REVINTRO *REVINTRO)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  int local_34;
  int local_30;
  ulong local_2c;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1a3;
  local_2c = REVINTRO->flags;
  local_34 = ID_UNIT;
  local_30 = ID_UNIT1;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_A_INTRO(struct SPCHNFSType_VOICE *VOICE /*$a0*/, int ID_UNIT /*$a1*/, int ID_UNIT1 /*$a2*/, struct SPCHNFSType_REVINTRO *REVINTRO /*$a3*/)
 // line 1427, offset 0x80093f64
	/* begin block 1 */
		// Start line: 1428
		// Start offset: 0x80093F64
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093F84
	// End Line: 1436

long SPCHNFS_C_A_INTRO(SPCHNFSType_VOICE *VOICE,int ID_UNIT,int ID_UNIT1,
                      SPCHNFSType_REVINTRO *REVINTRO)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  int local_30;
  int local_2c;
  ulong local_28;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1a5;
  local_34 = VOICE->flags;
  local_28 = REVINTRO->flags;
  local_30 = ID_UNIT;
  local_2c = ID_UNIT1;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_IN_PURS_PERP_AIRBORN(struct SPCHNFSType_VOICE *VOICE /*$a0*/)
 // line 1447, offset 0x80093fbc
	/* begin block 1 */
		// Start line: 1448
		// Start offset: 0x80093FBC
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80093FDC
	// End Line: 1456

long SPCHNFS_C_D_IN_PURS_PERP_AIRBORN(SPCHNFSType_VOICE *VOICE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1a6;
  local_34 = VOICE->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_C_SPBLT_CONFIRMED(struct SPCHNFSType_POSITION *POSITION /*$a0*/, int ID_LOCATION /*$a1*/, struct SPCHNFSType_DISTANCE *DISTANCE /*$a2*/, int ID_UNIT /*$a3*/, struct SPCHNFSType_SPIKE_BELT_SIDE *SPIKE_BELT_SIDE /*stack 16*/)
 // line 1468, offset 0x80094004
	/* begin block 1 */
		// Start line: 1469
		// Start offset: 0x80094004
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80094024
	// End Line: 1477

long SPCHNFS_D_C_SPBLT_CONFIRMED
               (SPCHNFSType_POSITION *POSITION,int ID_LOCATION,SPCHNFSType_DISTANCE *DISTANCE,
               int ID_UNIT,SPCHNFSType_SPIKE_BELT_SIDE *SPIKE_BELT_SIDE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  int local_30;
  ulong local_2c;
  int local_28;
  ulong local_24;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1a8;
  local_34 = POSITION->flags;
  local_2c = DISTANCE->flags;
  local_24 = SPIKE_BELT_SIDE->flags;
  local_30 = ID_LOCATION;
  local_28 = ID_UNIT;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_REQ_SPBLT(struct SPCHNFSType_VOICE *VOICE /*$a0*/)
 // line 1489, offset 0x8009406c
	/* begin block 1 */
		// Start line: 1490
		// Start offset: 0x8009406C
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x8009408C
	// End Line: 1498

long SPCHNFS_C_D_REQ_SPBLT(SPCHNFSType_VOICE *VOICE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1a9;
  local_34 = VOICE->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_SPBLT_FAILED(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_COLOUR *COLOUR /*$a1*/, int ID_CAR /*$a2*/)
 // line 1508, offset 0x800940b4
	/* begin block 1 */
		// Start line: 1509
		// Start offset: 0x800940B4
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x800940D4
	// End Line: 1517

long SPCHNFS_C_D_SPBLT_FAILED(SPCHNFSType_VOICE *VOICE,SPCHNFSType_COLOUR *COLOUR,int ID_CAR)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1aa;
  local_34 = VOICE->flags;
  local_30 = COLOUR->flags;
  local_2c = ID_CAR;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_W_D_RDBLK_PLC(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_POSITION *POSITION /*$a1*/, int ID_LOCATION /*$a2*/, struct SPCHNFSType_DISTANCE *DISTANCE /*$a3*/)
 // line 1530, offset 0x8009410c
	/* begin block 1 */
		// Start line: 1531
		// Start offset: 0x8009410C
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x8009412C
	// End Line: 1539

long SPCHNFS_W_D_RDBLK_PLC
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_POSITION *POSITION,int ID_LOCATION,
               SPCHNFSType_DISTANCE *DISTANCE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1ab;
  local_34 = VOICE->flags;
  local_30 = POSITION->flags;
  local_28 = DISTANCE->flags;
  local_2c = ID_LOCATION;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_W_D_SPBLT_PLC(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_POSITION *POSITION /*$a1*/, struct SPCHNFSType_SPIKE_BELT_SIDE *SPIKE_BELT_SIDE /*$a2*/, int ID_UNIT /*$a3*/, int ID_LOCATION /*stack 16*/, struct SPCHNFSType_DISTANCE *DISTANCE /*stack 20*/)
 // line 1555, offset 0x8009416c
	/* begin block 1 */
		// Start line: 1556
		// Start offset: 0x8009416C
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $t0
	/* end block 1 */
	// End offset: 0x8009418C
	// End Line: 1564

long SPCHNFS_W_D_SPBLT_PLC
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_POSITION *POSITION,
               SPCHNFSType_SPIKE_BELT_SIDE *SPIKE_BELT_SIDE,int ID_UNIT,int ID_LOCATION,
               SPCHNFSType_DISTANCE *DISTANCE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  ulong local_2c;
  int local_28;
  int local_24;
  ulong local_20;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1ac;
  local_34 = VOICE->flags;
  local_30 = POSITION->flags;
  local_2c = SPIKE_BELT_SIDE->flags;
  local_24 = ID_LOCATION;
  local_20 = DISTANCE->flags;
  local_28 = ID_UNIT;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_PERP_CRASH_ROLL(struct SPCHNFSType_VOICE *VOICE /*$a0*/, struct SPCHNFSType_POSITION *POSITION /*$a1*/, int ID_LOCATION /*$a2*/, struct SPCHNFSType_DISTANCE *DISTANCE /*$a3*/, struct SPCHNFSType_PERP_NAME *PERP_NAME /*stack 16*/)
 // line 1581, offset 0x800941e4
	/* begin block 1 */
		// Start line: 1582
		// Start offset: 0x800941E4
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80094204
	// End Line: 1590

long SPCHNFS_C_D_PERP_CRASH_ROLL
               (SPCHNFSType_VOICE *VOICE,SPCHNFSType_POSITION *POSITION,int ID_LOCATION,
               SPCHNFSType_DISTANCE *DISTANCE,SPCHNFSType_PERP_NAME *PERP_NAME)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  ulong local_30;
  int local_2c;
  ulong local_28;
  ulong local_24;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1ae;
  local_34 = VOICE->flags;
  local_30 = POSITION->flags;
  local_28 = DISTANCE->flags;
  local_24 = PERP_NAME->flags;
  local_2c = ID_LOCATION;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_D_A_CONFIRM(struct SPCHNFSType_CONFIRM *CONFIRM /*$a0*/)
 // line 1638, offset 0x80094258
	/* begin block 1 */
		// Start line: 1639
		// Start offset: 0x80094258
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x80094278
	// End Line: 1647

long SPCHNFS_D_A_CONFIRM(SPCHNFSType_CONFIRM *CONFIRM)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1b1;
  local_34 = CONFIRM->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SPCHNFS_C_D_ENDGAME(struct SPCHNFSType_VOICE *VOICE /*$a0*/)
 // line 1655, offset 0x800942a0
	/* begin block 1 */
		// Start line: 1656
		// Start offset: 0x800942A0
		// Variables:
	// 		long parms[12]; // stack offset -56
	// 		long i; // $v1
	/* end block 1 */
	// End offset: 0x800942C0
	// End Line: 1664

long SPCHNFS_C_D_ENDGAME(SPCHNFSType_VOICE *VOICE)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint local_38;
  ulong local_34;
  undefined4 local_c;
  
  iVar3 = 0xb;
  puVar1 = &local_c;
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar3);
  local_38 = 0x1b3;
  local_34 = VOICE->flags;
  lVar2 = SPCH_AddEvent(&local_38);
  return lVar2;
}




