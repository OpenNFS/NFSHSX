#include "THISDUST.H"
#include "FE3DMENU.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Fe3D_InitShowroom__Fv()
 // line 76, offset 0x80012938
	/* begin block 1 */
		// Start line: 77
		// Start offset: 0x80012938
		// Variables:
	// 		int i; // $s2
	// 		long angle; // $s1

		/* begin block 1.1 */
			// Start line: 91
			// Start offset: 0x800129B4
			// Variables:
		// 		short iPlus; // $s3

			/* begin block 1.1.1 */
				// Start line: 91
				// Start offset: 0x800129B4

				/* begin block 1.1.1.1 */
					// Start line: 101
					// Start offset: 0x800129EC
					// Variables:
				// 		long angle_sin; // $s0
				// 		long angle_cos; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x800129F8
				// End Line: 103
			/* end block 1.1.1 */
			// End offset: 0x80012AC4
			// End Line: 115
		/* end block 1.1 */
		// End offset: 0x80012AC4
		// End Line: 115
	/* end block 1 */
	// End offset: 0x80012AC4
	// End Line: 115

	/* begin block 2 */
		// Start line: 152
	/* end block 2 */
	// End Line: 153

	/* begin block 3 */
		// Start line: 152
	/* end block 3 */
	// End Line: 153

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Fe3D_InitShowroom__Fv(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;
  COORD16 *pCVar7;
  int iVar8;
  int iVar9;
  double __z;
  
  iVar8 = 0;
  uVar1 = 0x80050000;
  pCVar7 = &Fe3D_spotVertex;
  do {
    csin(__z);
    iVar2 = (int)(uVar1 * 0x30) >> 8;
    pCVar7->x = (short)(uVar1 * 0x30 >> 8);
    pCVar7->y = 0;
    ccos(__z);
    pCVar7->z = (short)((uint)(iVar2 * 0x30) >> 8);
    iVar8 = iVar8 + 1;
    uVar1 = (uint)(iVar8 < 0x20);
    pCVar7 = pCVar7 + 1;
  } while (iVar8 < 0x20);
  uVar1 = 0;
  iVar9 = 0;
  iVar2 = 0;
  (&Fe3D_spotVertex)[iVar8].x = 0;
  (&Fe3D_spotVertex)[iVar8].y = 0;
  (&Fe3D_spotVertex)[iVar8].z = 0;
  while (iVar2 < 0x20) {
    puVar3 = fastintsin(uVar1);
    puVar4 = fastintcos(uVar1);
    sVar5 = (short)iVar9;
    iVar6 = iVar9 + 1;
    iVar9 = iVar9 + 2;
    uVar1 = uVar1 + 0x20;
    iVar2 = iVar2 + 1;
    iVar8 = (int)sVar5;
    (&Fe3D_lightsVertex)[iVar8].x = (short)((uint)(((int)puVar3 >> 3) * 3) >> 5);
    (&Fe3D_lightsVertex)[iVar8].y = 0;
    iVar6 = iVar6 * 0x10000 >> 0x10;
    (&Fe3D_lightsVertex)[iVar8].z = (short)((uint)(((int)puVar4 >> 3) * 3) >> 5);
    (&Fe3D_lightsVertex)[iVar6].x = (short)((uint)(((int)puVar3 >> 3) * 0x15) >> 8);
    (&Fe3D_lightsVertex)[iVar6].y = 0;
    (&Fe3D_lightsVertex)[iVar6].z = (short)((uint)(((int)puVar4 >> 3) * 0x15) >> 8);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CameraLookAt__FP10matrixtdefP8coorddef(struct matrixtdef *mat /*$s1*/, struct coorddef *camPoint /*$a1*/)
 // line 120, offset 0x80012ae4
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x80012AE4
		// Variables:
	// 		struct coorddef fwdVec; // stack offset -64
	// 		struct coorddef rightVec; // stack offset -48
	// 		struct coorddef upVec; // stack offset -32
	/* end block 1 */
	// End offset: 0x80012AE4
	// End Line: 121

	/* begin block 2 */
		// Start line: 285
	/* end block 2 */
	// End Line: 286

	/* begin block 3 */
		// Start line: 291
	/* end block 3 */
	// End Line: 292

	/* begin block 4 */
		// Start line: 291
	/* end block 4 */
	// End Line: 292

void CameraLookAt__FP10matrixtdefP8coorddef(matrixtdef *mat,coorddef *camPoint)

{
  coorddef local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  undefined *local_1c;
  int local_18;
  
  local_20 = DAT_8001002c;
  local_1c = PTR_s_SimpleMem_80010030;
  local_18 = DAT_80010034;
  local_40.x = -camPoint->x;
  local_40.y = -camPoint->y;
  local_40.z = -camPoint->z;
  Math_NormalizeVector__FP8coorddef(&local_40);
  crossproduct(&local_20,(int *)&local_40,&local_30);
  crossproduct((int *)&local_40,&local_30,&local_20);
  mat->m[0] = local_30;
  mat->m[1] = local_2c;
  mat->m[2] = local_28;
  mat->m[3] = local_20;
  *(undefined **)(mat->m + 4) = local_1c;
  mat->m[5] = local_18;
  mat->m[6] = local_40.x;
  mat->m[7] = local_40.y;
  mat->m[8] = local_40.z;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Draw_MenuRenderingView__FP8Car_tObjP13DRender_tViewiiiUliffii(struct Car_tObj *carObj /*$s4*/, struct DRender_tView *Vi /*$s7*/, int posX /*$s2*/, int posY /*$s0*/, int player /*stack 16*/, unsigned long rotation /*stack 20*/, int camRot /*stack 24*/, float camY /*stack 28*/, float camZ /*stack 32*/, int light /*stack 36*/, int reflection /*stack 40*/)
 // line 150, offset 0x80012bf8
	/* begin block 1 */
		// Start line: 151
		// Start offset: 0x80012BF8

		/* begin block 1.1 */
			// Start line: 182
			// Start offset: 0x80012C60
			// Variables:
		// 		struct matrixtdef temp; // stack offset -232
		// 		struct matrixtdef temp1; // stack offset -192
		// 		struct matrixtdef temp2; // stack offset -152
		// 		struct coorddef pos; // stack offset -112

			/* begin block 1.1.1 */
				// Start line: 182
				// Start offset: 0x80012C60

				/* begin block 1.1.1.1 */
					// Start line: 207
					// Start offset: 0x80012C98
					// Variables:
				// 		struct coorddef targetPos; // stack offset -96
				/* end block 1.1.1.1 */
				// End offset: 0x80012C98
				// End Line: 208
			/* end block 1.1.1 */
			// End offset: 0x80012D74
			// End Line: 226

			/* begin block 1.1.2 */
				// Start line: 230
				// Start offset: 0x80012D74
				// Variables:
			// 		struct matrixtdef correct; // stack offset -80
			/* end block 1.1.2 */
			// End offset: 0x80012D74
			// End Line: 234
		/* end block 1.1 */
		// End offset: 0x80012D74
		// End Line: 234

		/* begin block 1.2 */
			// Start line: 297
			// Start offset: 0x80012EB8

			/* begin block 1.2.1 */
				// Start line: 313
				// Start offset: 0x80012EF0
				// Variables:
			// 		struct Draw_CarCache *sd; // $s2
			/* end block 1.2.1 */
			// End offset: 0x80012F70
			// End Line: 330
		/* end block 1.2 */
		// End offset: 0x80012F70
		// End Line: 330
	/* end block 1 */
	// End offset: 0x80012F70
	// End Line: 330

	/* begin block 2 */
		// Start line: 365
	/* end block 2 */
	// End Line: 366

	/* begin block 3 */
		// Start line: 372
	/* end block 3 */
	// End Line: 373

	/* begin block 4 */
		// Start line: 372
	/* end block 4 */
	// End Line: 373

void Draw_MenuRenderingView__FP8Car_tObjP13DRender_tViewiiiUliffii
               (Car_tObj *carObj,DRender_tView *Vi,int posX,int posY,int player,ulong rotation,
               int camRot,float camY,float camZ,int light,int reflection)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  matrixtdef *mr;
  matrixtdef *pmVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int light_00;
  int in_stack_00000028;
  matrixtdef mStack232;
  matrixtdef mStack192;
  matrixtdef mStack152;
  int local_70;
  uint local_6c;
  uint local_68;
  coorddef local_60;
  matrixtdef local_50;
  
  TrsProj_ResetTransPrecision__Fv();
  if (showRoomFlag != (void *)0x0) {
    posY = 0x8c;
  }
  TrsProj_SetMenuProjection__Fiiii(posX + -0x100,posY + -0x80,0x200,0x100);
  bVar1 = showRoomFlag == (void *)0x0;
  (&gMenuRotate)[player] = (&gMenuRotate)[player] + rotation;
  if (bVar1) {
    fixedxformy((int *)&mStack232,camRot << 6);
  }
  else {
    uVar2 = __mulsf3(light,0x3f000000);
    local_60.x = 0;
    uVar3 = __mulsf3(uVar2,0x47800000);
    local_60.y = __fixsfsi(uVar3);
    uVar3 = __mulsf3(reflection,0x47800000);
    local_60.z = __fixsfsi(uVar3);
    CameraLookAt__FP10matrixtdefP8coorddef(&mStack192,&local_60);
    fixedxformy((int *)&mStack152,camRot << 6);
    Math_fasttransmult__FP10matrixtdefN20(&mStack192,&mStack152,&mStack232);
    uVar5 = __extendsfdf2(reflection);
    uVar6 = __extendsfdf2(uVar2);
    uVar6 = __divdf3((uint)((ulonglong)uVar6 >> 0x20),(uint)uVar6,0,0x40040000);
    uVar5 = __adddf3((uint)((ulonglong)uVar5 >> 0x20),(uint)uVar5,(uint)((ulonglong)uVar6 >> 0x20),
                     (uint)uVar6);
    reflection = __truncdfsf2((uint)((ulonglong)uVar5 >> 0x20),(uint)uVar5);
    light = 0;
  }
  mr = &(Vi->cview).mrotation;
  local_50.m[0] = 0x10000;
  local_50.m[1] = 0;
  local_50.m[2] = 0;
  local_50.m[3] = 0;
  local_50.m[5] = 0;
  local_50.m[6] = 0;
  local_50.m[7] = 0;
  local_50.m[8] = 0x10000;
  local_50.m[4] = &DAT_00008980;
  Math_fasttransmult__FP10matrixtdefN20(&local_50,&mStack232,mr);
  pmVar4 = &(Vi->cview).mrotationInv;
  transpose((undefined4 *)mr,(undefined4 *)pmVar4);
  local_70 = 0;
  uVar2 = __mulsf3(light,0x47800000);
  local_6c = __fixsfsi(uVar2);
  uVar2 = __mulsf3(reflection,0x47800000);
  local_68 = __fixsfsi(uVar2);
  transform(&local_70,(int *)mr,(int *)&Vi->cview);
  local_70 = -(Vi->cview).translation.x;
  local_6c = -(Vi->cview).translation.y;
  local_68 = -(Vi->cview).translation.z;
  transform(&local_70,(int *)pmVar4,(int *)&(Vi->cview).translationInv);
  (carObj->N).orientMat.m[0] = 0x10000;
  (carObj->N).orientMat.m[4] = 0x10000;
  (carObj->N).orientMat.m[8] = 0x10000;
  (carObj->N).orientMat.m[1] = 0;
  (carObj->N).orientMat.m[2] = 0;
  (carObj->N).orientMat.m[3] = 0;
  (carObj->N).orientMat.m[5] = 0;
  (carObj->N).orientMat.m[6] = 0;
  (carObj->N).orientMat.m[7] = 0;
  (carObj->N).position.x = 0;
  (carObj->N).position.y = 0;
  (carObj->N).position.z = 0;
  if (player == 0) {
    if (R3DCar_ClockLast < generic128HzClock) {
      R3DCar_Clock = 1;
      R3DCar_ClockLast = generic128HzClock + 5;
    }
    else {
      R3DCar_Clock = 0;
    }
  }
  Vi->player = player;
  Texture_LoadMenuTexture__Fv();
  R3DCar_InsertCarFacetMenu__FP8Car_tObjP13DRender_tView(carObj,Vi);
  R3DCar_InsertCarFacetMenuII__FP8Car_tObji(carObj,light_00);
  R3DCar_Showroom__FP13DRender_tView(Vi);
  if (in_stack_00000028 != 0) {
    R3DCar_InMenu = R3DCar_InMenu | 0x80;
    DAT_1f80000c = DAT_1f80000c ^ 1;
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 1;
    R3DCar_InsertCarFacetMenu__FP8Car_tObjP13DRender_tView(carObj,Vi);
    gWSavePtr = SetSp();
    stackSpeedUpEnbabledFlag = 0;
    R3DCar_InsertCarFacetMenuII__FP8Car_tObji(carObj,light_00);
    R3DCar_InMenu = R3DCar_InMenu & 0x7f;
    DAT_1f80000c = DAT_1f80000c ^ 1;
  }
  return;
}





