#include "THISDUST.H"
#include "ANIM.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Anim_Restart__Fv()
 // line 83, offset 0x80073a94
	/* begin block 1 */
		// Start line: 84
		// Start offset: 0x80073A94

		/* begin block 1.1 */
			// Start line: 84
			// Start offset: 0x80073A94

			/* begin block 1.1.1 */
				// Start line: 87
				// Start offset: 0x80073AB4

				/* begin block 1.1.1.1 */
					// Start line: 89
					// Start offset: 0x80073AC0

					/* begin block 1.1.1.1.1 */
						// Start line: 90
						// Start offset: 0x80073AD0

						/* begin block 1.1.1.1.1.1 */
							// Start line: 90
							// Start offset: 0x80073AD0

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 90
								// Start offset: 0x80073AD0
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80073AE8
							// End Line: 90
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80073AF0
						// End Line: 90
					/* end block 1.1.1.1.1 */
					// End offset: 0x80073AF0
					// End Line: 90
				/* end block 1.1.1.1 */
				// End offset: 0x80073AF0
				// End Line: 90
			/* end block 1.1.1 */
			// End offset: 0x80073AF0
			// End Line: 91
		/* end block 1.1 */
		// End offset: 0x80073AFC
		// End Line: 92
	/* end block 1 */
	// End offset: 0x80073AFC
	// End Line: 95

	/* begin block 2 */
		// Start line: 166
	/* end block 2 */
	// End Line: 167

	/* begin block 3 */
		// Start line: 166
	/* end block 3 */
	// End Line: 167

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Anim_Restart__Fv(void)

{
  AnimScript *deleteMe;
  AnimScript **ppAVar1;
  
  ppAVar1 = &animSlots32;
  while ((int)ppAVar1 < -0x7fef1e34) {
    deleteMe = *ppAVar1;
    if (deleteMe != (AnimScript *)0x0) {
      if (deleteMe->inst != (Trk_AnimateInst **)0x0) {
        __builtin_vec_delete(deleteMe->inst);
      }
      __builtin_delete(deleteMe);
    }
    *ppAVar1 = (AnimScript *)0x0;
    ppAVar1 = ppAVar1 + 1;
  }
  DrawW_ResetAnimationTimer__Fv();
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Anim_InitSystem__FPc(char *trackName /*$s3*/)
 // line 107, offset 0x80073b1c
	/* begin block 1 */
		// Start line: 108
		// Start offset: 0x80073B1C
		// Variables:
	// 		int i; // $s0
	// 		char fname[80]; // stack offset -104
	// 		char *bigFile; // $s1

		/* begin block 1.1 */
			// Start line: 108
			// Start offset: 0x80073B1C

			/* begin block 1.1.1 */
				// Start line: 120
				// Start offset: 0x80073B68
				// Variables:
			// 		char *mem; // $s2
			// 		int size; // $s0
			/* end block 1.1.1 */
			// End offset: 0x80073BF0
			// End Line: 141
		/* end block 1.1 */
		// End offset: 0x80073C14
		// End Line: 147

		/* begin block 1.2 */
			// Start line: 185
			// Start offset: 0x80073C14

			/* begin block 1.2.1 */
				// Start line: 186
				// Start offset: 0x80073C28
				// Variables:
			// 		int numParts; // $a0
			// 		struct Trk_AnimateInst *objInstance; // $v1
			/* end block 1.2.1 */
			// End offset: 0x80073C90
			// End Line: 197
		/* end block 1.2 */
		// End offset: 0x80073C90
		// End Line: 197
	/* end block 1 */
	// End offset: 0x80073C90
	// End Line: 201

	/* begin block 2 */
		// Start line: 210
	/* end block 2 */
	// End Line: 211

	/* begin block 3 */
		// Start line: 223
	/* end block 3 */
	// End Line: 224

	/* begin block 4 */
		// Start line: 223
	/* end block 4 */
	// End Line: 224

int Anim_InitSystem__FPc(char *trackName)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  Trk_AnimateInst *pTVar4;
  Trk_AnimateInst **ppTVar5;
  int size;
  byte abStack104 [80];
  
  Anim_Restart__Fv();
  sprintf((char *)abStack104,s__sA_viv_8013c5fc,trackName);
  puVar2 = (undefined4 *)loadfileadrz(abStack104,0);
  size = 9;
  if (puVar2 == (undefined4 *)0x0) {
    ppTVar5 = &PTR_8010e270;
    do {
      *ppTVar5 = (Trk_AnimateInst *)0x0;
      size = size + -1;
      ppTVar5 = ppTVar5 + -1;
    } while (-1 < size);
  }
  else {
    size = filesize(abStack104);
    puVar3 = (undefined4 *)Platform_GetDCTBuffer__FiPc(size,s_animScripts_8005569c);
    blockmove(puVar2,puVar3,size);
    purgememadr((int)puVar2);
    strstr(trackName,(char *)&PTR_DAT_8013c604);
    size = 0;
    ppTVar5 = animScripts10;
    do {
      sprintf((char *)abStack104,s_tr00a_02d_can_800556a8,size);
      pTVar4 = (Trk_AnimateInst *)locatebig((byte *)puVar3,abStack104);
      *ppTVar5 = pTVar4;
      size = size + 1;
      ppTVar5 = ppTVar5 + 1;
    } while (size < 10);
  }
  if (gPersistObjInst != (Group *)0x0) {
    size = gPersistObjInst->m_num_elements;
    pTVar4 = (Trk_AnimateInst *)(gPersistObjInst + 1);
    while (size = size + -1, size != -1) {
      if (((*(char *)(&pTVar4->size + 1) == '\x03') || (*(char *)(&pTVar4->size + 1) == '\a')) &&
         (bVar1 = *(byte *)((int)&pTVar4->size + 3), bVar1 != 0)) {
        (&Anim_gInstanceFromIndex32)[(uint)bVar1] = pTVar4;
      }
      pTVar4 = (Trk_AnimateInst *)((int)&pTVar4->size + (int)pTVar4->size);
    }
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Anim_DeInitSystem__Fv()
 // line 211, offset 0x80073cb0
	/* begin block 1 */
		// Start line: 212
		// Start offset: 0x80073CB0
		// Variables:
	// 		int i; // $v1
	/* end block 1 */
	// End offset: 0x80073CE0
	// End Line: 222

	/* begin block 2 */
		// Start line: 421
	/* end block 2 */
	// End Line: 422

	/* begin block 3 */
		// Start line: 432
	/* end block 3 */
	// End Line: 433

	/* begin block 4 */
		// Start line: 432
	/* end block 4 */
	// End Line: 433

	/* begin block 5 */
		// Start line: 435
	/* end block 5 */
	// End Line: 436

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Anim_DeInitSystem__Fv(void)

{
  bool bVar1;
  Trk_AnimateInst **ppTVar2;
  int iVar3;
  
  iVar3 = 8;
  do {
    bVar1 = -1 < iVar3;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  iVar3 = 0x1f;
  ppTVar2 = &PTR_8010e248;
  do {
    *ppTVar2 = (Trk_AnimateInst *)0x0;
    iVar3 = iVar3 + -1;
    ppTVar2 = ppTVar2 + -1;
  } while (-1 < iVar3);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Anim_Handle__Fi(int num /*$s2*/)
 // line 231, offset 0x80073ce8
	/* begin block 1 */
		// Start line: 232
		// Start offset: 0x80073CE8
		// Variables:
	// 		int handle; // $s0
	/* end block 1 */
	// End offset: 0x80073D30
	// End Line: 239

	/* begin block 2 */
		// Start line: 462
	/* end block 2 */
	// End Line: 463

	/* begin block 3 */
		// Start line: 472
	/* end block 3 */
	// End Line: 473

	/* begin block 4 */
		// Start line: 472
	/* end block 4 */
	// End Line: 473

int Anim_Handle__Fi(int num)

{
  AnimScript *this;
  AnimScript **ppAVar1;
  int iVar2;
  
  iVar2 = 0;
  ppAVar1 = &animSlots32;
  do {
    if (*ppAVar1 == (AnimScript *)0x0) break;
    iVar2 = iVar2 + 1;
    ppAVar1 = ppAVar1 + 1;
  } while (iVar2 < 0x20);
  this = (AnimScript *)__builtin_new(0x14);
  this = __10AnimScripti(this,num);
  (&animSlots32)[iVar2] = this;
  return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Anim_FreeHandle__Fi(int handle /*$s1*/)
 // line 244, offset 0x80073d6c
	/* begin block 1 */
		// Start line: 245
		// Start offset: 0x80073D6C

		/* begin block 1.1 */
			// Start line: 246
			// Start offset: 0x80073DA0

			/* begin block 1.1.1 */
				// Start line: 246
				// Start offset: 0x80073DA0
			/* end block 1.1.1 */
			// End offset: 0x80073DB8
			// End Line: 246
		/* end block 1.1 */
		// End offset: 0x80073DC0
		// End Line: 246
	/* end block 1 */
	// End offset: 0x80073DC0
	// End Line: 247

	/* begin block 2 */
		// Start line: 500
	/* end block 2 */
	// End Line: 501

	/* begin block 3 */
		// Start line: 504
	/* end block 3 */
	// End Line: 505

	/* begin block 4 */
		// Start line: 504
	/* end block 4 */
	// End Line: 505

int Anim_FreeHandle__Fi(int handle)

{
  AnimScript *deleteMe;
  
  deleteMe = (&animSlots32)[handle];
  if (deleteMe != (AnimScript *)0x0) {
    if (deleteMe->inst != (Trk_AnimateInst **)0x0) {
      __builtin_vec_delete(deleteMe->inst);
    }
    __builtin_delete(deleteMe);
  }
  (&animSlots32)[handle] = (AnimScript *)0x0;
  return 0;
}



// decompiled code
// original method signature: 
// struct AnimScript * /*$ra*/ Anim_GetAnim__Fi(int handle /*$a0*/)
 // line 251, offset 0x80073dec
	/* begin block 1 */
		// Start line: 252
		// Start offset: 0x80073DEC
	/* end block 1 */
	// End offset: 0x80073DEC
	// End Line: 253

	/* begin block 2 */
		// Start line: 515
	/* end block 2 */
	// End Line: 516

	/* begin block 3 */
		// Start line: 519
	/* end block 3 */
	// End Line: 520

	/* begin block 4 */
		// Start line: 519
	/* end block 4 */
	// End Line: 520

	/* begin block 5 */
		// Start line: 520
	/* end block 5 */
	// End Line: 521

	/* begin block 6 */
		// Start line: 520
	/* end block 6 */
	// End Line: 521

AnimScript * Anim_GetAnim__Fi(int handle)

{
  return (&animSlots32)[handle];
}



// decompiled code
// original method signature: 
// void /*$ra*/ Anim_GetLastRotPos__FP15Trk_AnimateInstP8coorddefP10matrixtdef(struct Trk_AnimateInst *animInst /*$a0*/, struct coorddef *pt /*$a1*/, struct matrixtdef *mat /*$a2*/)
 // line 261, offset 0x80073e08
	/* begin block 1 */
		// Start line: 262
		// Start offset: 0x80073E08
		// Variables:
	// 		struct Anim_tFrame *animFrames; // $a0
	// 		int animInd; // $v1
	// 		struct tQuat q; // stack offset -16
	/* end block 1 */
	// End offset: 0x80073E08
	// End Line: 262

	/* begin block 2 */
		// Start line: 530
	/* end block 2 */
	// End Line: 531

	/* begin block 3 */
		// Start line: 539
	/* end block 3 */
	// End Line: 540

	/* begin block 4 */
		// Start line: 539
	/* end block 4 */
	// End Line: 540

void Anim_GetLastRotPos__FP15Trk_AnimateInstP8coorddefP10matrixtdef
               (Trk_AnimateInst *animInst,coorddef *pt,matrixtdef *mat)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  
  piVar1 = (int *)((int)animInst + ((int)animInst->count + -1) * 0x14 + 0xc);
  local_10 = piVar1[3];
  local_c = piVar1[4];
  iVar2 = piVar1[1];
  iVar3 = piVar1[2];
  pt->x = *piVar1;
  pt->y = iVar2;
  pt->z = iVar3;
  Quatern_QuatToMat__FP5tQuatP10matrixtdef((tQuat *)&local_10,mat);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Anim_GetLastAnimPosRot__FiiP8coorddefP10matrixtdef(int animNum /*$a0*/, int flags /*$s0*/, struct coorddef *pt /*$a2*/, struct matrixtdef *mat /*$s1*/)
 // line 284, offset 0x80073e80
	/* begin block 1 */
		// Start line: 285
		// Start offset: 0x80073E80

		/* begin block 1.1 */
			// Start line: 285
			// Start offset: 0x80073E80

			/* begin block 1.1.1 */
				// Start line: 289
				// Start offset: 0x80073EC4
				// Variables:
			// 		int tmp; // $a3
			/* end block 1.1.1 */
			// End offset: 0x80073F00
			// End Line: 293
		/* end block 1.1 */
		// End offset: 0x80073F00
		// End Line: 293
	/* end block 1 */
	// End offset: 0x80073F00
	// End Line: 296

	/* begin block 2 */
		// Start line: 580
	/* end block 2 */
	// End Line: 581

	/* begin block 3 */
		// Start line: 590
	/* end block 3 */
	// End Line: 591

	/* begin block 4 */
		// Start line: 590
	/* end block 4 */
	// End Line: 591

int Anim_GetLastAnimPosRot__FiiP8coorddefP10matrixtdef
              (int animNum,int flags,coorddef *pt,matrixtdef *mat)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  Anim_GetLastRotPos__FP15Trk_AnimateInstP8coorddefP10matrixtdef(animScripts10[animNum],pt,mat);
  if ((flags & 4U) != 0) {
    iVar1 = mat->m[3];
    iVar2 = mat->m[4];
    iVar3 = mat->m[5];
    mat->m[3] = mat->m[6];
    mat->m[6] = -iVar1;
    mat->m[4] = mat->m[7];
    mat->m[7] = -iVar2;
    mat->m[5] = mat->m[8];
    mat->m[8] = -iVar3;
  }
  return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Anim_GetRotPos__FP15Trk_AnimateInstiiP8coorddefP10matrixtdef(struct Trk_AnimateInst *animInst /*$a0*/, int flags /*$a1*/, int ticks /*$t1*/, struct coorddef *pt /*$t2*/, struct matrixtdef *mat /*stack 16*/)
 // line 304, offset 0x80073f18
	/* begin block 1 */
		// Start line: 305
		// Start offset: 0x80073F18
		// Variables:
	// 		struct Anim_tFrame *animFrames; // $t0
	// 		int animInd0; // $a2
	// 		int animInd1; // $a2
	// 		struct coorddef objcp0; // stack offset -64
	// 		struct coorddef objcp1; // stack offset -48
	// 		struct tQuat q; // stack offset -32
	// 		struct tQuat q0; // stack offset -24
	// 		struct tQuat q1; // stack offset -16
	// 		int interval; // $v1
	/* end block 1 */
	// End offset: 0x8007411C
	// End Line: 360

	/* begin block 2 */
		// Start line: 626
	/* end block 2 */
	// End Line: 627

	/* begin block 3 */
		// Start line: 635
	/* end block 3 */
	// End Line: 636

	/* begin block 4 */
		// Start line: 635
	/* end block 4 */
	// End Line: 636

int Anim_GetRotPos__FP15Trk_AnimateInstiiP8coorddefP10matrixtdef
              (Trk_AnimateInst *animInst,int flags,int ticks,coorddef *pt,matrixtdef *mat)

{
  int iVar1;
  int iVar2;
  Trk_AnimateInst *pTVar3;
  int iVar4;
  Trk_AnimateInst *pTVar5;
  int iVar6;
  coorddef local_40;
  coorddef local_30;
  tQuat tStack32;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((animInst->type == '\x03') ||
     (pTVar5 = (Trk_AnimateInst *)&animInst[1].zoffset, animInst->type == '\a')) {
    pTVar5 = animInst + 1;
  }
  if ((uint)(ushort)animInst->interval - 1 < 400) {
    iVar2 = (int)animInst->interval;
  }
  else {
    iVar2 = 6;
  }
  iVar6 = ticks / iVar2;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (ticks == -0x80000000)) {
    trap(0x1800);
  }
  if (((flags & 2U) == 0) || (iVar1 = 0, iVar6 < (int)animInst->count + -1)) {
    if (iVar2 == 0) {
      trap(0x1c00);
    }
    if ((iVar2 == -1) && (ticks == -0x80000000)) {
      trap(0x1800);
    }
    iVar1 = (int)animInst->count + -1;
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    if ((iVar1 == -1) && (iVar6 == -0x80000000)) {
      trap(0x1800);
    }
    iVar4 = ticks % iVar2 << 0x10;
    if (iVar2 == 0) {
      trap(0x1c00);
    }
    if ((iVar2 == -1) && (iVar4 == -0x80000000)) {
      trap(0x1800);
    }
    pTVar3 = (Trk_AnimateInst *)((iVar6 % iVar1) * 0x14 + (int)pTVar5);
    pTVar5 = (Trk_AnimateInst *)((iVar6 % iVar1 + 1) * 0x14 + (int)pTVar5);
    local_18 = *(undefined4 *)(pTVar3 + 1);
    local_14 = *(undefined4 *)&pTVar3[1].zoffset;
    local_10 = *(undefined4 *)(pTVar5 + 1);
    local_c = *(undefined4 *)&pTVar5[1].zoffset;
    local_40.x = *(int *)pTVar3;
    local_40.y = *(int *)&pTVar3->zoffset;
    local_40.z = *(int *)&pTVar3->count;
    local_30.x = *(int *)pTVar5;
    local_30.y = *(int *)&pTVar5->zoffset;
    local_30.z = *(int *)&pTVar5->count;
    Quatern_Interpolate__FP5tQuatT0P8coorddefT2iT0T2
              ((tQuat *)&local_18,(tQuat *)&local_10,&local_40,&local_30,iVar4 / iVar2,&tStack32,pt)
    ;
    Quatern_QuatToMat__FP5tQuatP10matrixtdef(&tStack32,mat);
    iVar1 = 1;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Anim_GetPos__FP15Trk_AnimateInstiiP8coorddefPiT4(struct Trk_AnimateInst *animInst /*$s2*/, int flags /*$a1*/, int ticks /*$s1*/, struct coorddef *pt /*$a3*/, int *animTicks /*stack 16*/, int *animLength /*stack 20*/)
 // line 368, offset 0x8007412c
	/* begin block 1 */
		// Start line: 369
		// Start offset: 0x8007412C
		// Variables:
	// 		struct Anim_tFrame *animFrames; // $a0
	// 		int animInd0; // $v1
	// 		int animInd1; // $v1
	// 		struct coorddef objcp0; // stack offset -56
	// 		struct coorddef objcp1; // stack offset -40
	// 		int interval; // $s0
	/* end block 1 */
	// End offset: 0x80074340
	// End Line: 409

	/* begin block 2 */
		// Start line: 792
	/* end block 2 */
	// End Line: 793

	/* begin block 3 */
		// Start line: 801
	/* end block 3 */
	// End Line: 802

	/* begin block 4 */
		// Start line: 801
	/* end block 4 */
	// End Line: 802

int Anim_GetPos__FP15Trk_AnimateInstiiP8coorddefPiT4
              (Trk_AnimateInst *animInst,int flags,int ticks,coorddef *pt,int *animTicks,
              int *animLength)

{
  int iVar1;
  Trk_AnimateInst *pTVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  coorddef local_38;
  coorddef local_28;
  
  if ((uint)(ushort)animInst->interval - 1 < 400) {
    iVar4 = (int)animInst->interval;
  }
  else {
    iVar4 = 6;
  }
  iVar5 = ticks / iVar4;
  if (iVar4 == 0) {
    trap(0x1c00);
  }
  if ((iVar4 == -1) && (ticks == -0x80000000)) {
    trap(0x1800);
  }
  if (((flags & 2U) == 0) || (iVar1 = 0, iVar5 < (int)animInst->count + -1)) {
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (ticks == -0x80000000)) {
      trap(0x1800);
    }
    iVar1 = (int)animInst->count + -1;
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    if ((iVar1 == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    iVar3 = ticks % iVar4 << 0x10;
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (iVar3 == -0x80000000)) {
      trap(0x1800);
    }
    pTVar2 = (Trk_AnimateInst *)((iVar5 % iVar1) * 0x14 + (int)(animInst + 1));
    local_38.x = *(int *)pTVar2;
    local_38.y = *(int *)&pTVar2->zoffset;
    local_38.z = *(int *)&pTVar2->count;
    pTVar2 = (Trk_AnimateInst *)((iVar5 % iVar1 + 1) * 0x14 + (int)(animInst + 1));
    local_28.x = *(int *)pTVar2;
    local_28.y = *(int *)&pTVar2->zoffset;
    local_28.z = *(int *)&pTVar2->count;
    Quatern_VecInterpolate__FP8coorddefT0iT0(&local_38,&local_28,iVar3 / iVar4,pt);
    if (animTicks != (int *)0x0) {
      iVar5 = ((int)animInst->count + -1) * iVar4;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (ticks == -0x80000000)) {
        trap(0x1800);
      }
      *animTicks = ticks % iVar5;
    }
    iVar1 = 1;
    if (animLength != (int *)0x0) {
      *animLength = ((int)animInst->count + -1) * iVar4;
      iVar1 = 1;
    }
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// struct AnimScript * /*$ra*/ __10AnimScripti(struct AnimScript *this /*$s1*/, int num /*$s0*/)
 // line 460, offset 0x80074360
	/* begin block 1 */
		// Start line: 461
		// Start offset: 0x80074360
	/* end block 1 */
	// End offset: 0x80074360
	// End Line: 461

	/* begin block 2 */
		// Start line: 954
	/* end block 2 */
	// End Line: 955

	/* begin block 3 */
		// Start line: 1006
	/* end block 3 */
	// End Line: 1007

	/* begin block 4 */
		// Start line: 1006
	/* end block 4 */
	// End Line: 1007

AnimScript * __10AnimScripti(AnimScript *this,int num)

{
  int iVar1;
  Trk_AnimateInst *pTVar2;
  
  pTVar2 = (Trk_AnimateInst *)__builtin_vec_new(4);
  *(Trk_AnimateInst **)&this->inst = pTVar2;
  *(Trk_AnimateInst **)pTVar2 = animScripts10[num];
  iVar1 = simGlobal.gameTicks;
  this->flags = 6;
  this->baseTicks = iVar1;
  return this;
}



// decompiled code
// original method signature: 
// struct AnimScript * /*$ra*/ __10AnimScriptii(struct AnimScript *this /*$s1*/, int num /*$s2*/, int numParts /*$s0*/)
 // line 472, offset 0x800743cc
	/* begin block 1 */
		// Start line: 473
		// Start offset: 0x800743CC

		/* begin block 1.1 */
			// Start line: 473
			// Start offset: 0x800743CC
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x80074438
		// End Line: 477
	/* end block 1 */
	// End offset: 0x80074438
	// End Line: 479

	/* begin block 2 */
		// Start line: 1033
	/* end block 2 */
	// End Line: 1034

	/* begin block 3 */
		// Start line: 1037
	/* end block 3 */
	// End Line: 1038

	/* begin block 4 */
		// Start line: 1037
	/* end block 4 */
	// End Line: 1038

AnimScript * __10AnimScriptii(AnimScript *this,int num,int numParts)

{
  Trk_AnimateInst **ppTVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  ppTVar1 = (Trk_AnimateInst **)__builtin_vec_new(numParts << 2);
  iVar4 = 0;
  this->inst = ppTVar1;
  if (0 < numParts) {
    iVar3 = 0;
    do {
      iVar2 = num + iVar4;
      iVar4 = iVar4 + 1;
      *(Trk_AnimateInst **)(iVar3 + (int)this->inst) = animScripts10[iVar2];
      iVar3 = iVar4 * 4;
    } while (iVar4 < numParts);
  }
  iVar4 = simGlobal.gameTicks;
  this->flags = 6;
  this->baseTicks = iVar4;
  return this;
}



// decompiled code
// original method signature: 
// struct AnimScript * /*$ra*/ __10AnimScriptP5Groupiii(struct AnimScript *this /*$s2*/, struct Group *instanceGroup /*$a1*/, int type /*$s3*/, int boomIndex /*$s4*/, int numParts /*stack 16*/)
 // line 485, offset 0x80074468
	/* begin block 1 */
		// Start line: 486
		// Start offset: 0x80074468
		// Variables:
	// 		int numElems; // $s1
	// 		struct Trk_AnimateBoomInst *objInstance; // $s0
	// 		int i; // $a0
	/* end block 1 */
	// End offset: 0x800744FC
	// End Line: 501

	/* begin block 2 */
		// Start line: 1063
	/* end block 2 */
	// End Line: 1064

	/* begin block 3 */
		// Start line: 1067
	/* end block 3 */
	// End Line: 1068

	/* begin block 4 */
		// Start line: 1067
	/* end block 4 */
	// End Line: 1068

AnimScript *
__10AnimScriptP5Groupiii(AnimScript *this,Group *instanceGroup,int type,int boomIndex,int numParts)

{
  int iVar1;
  int iVar2;
  Trk_AnimateInst **ppTVar3;
  int iVar4;
  Trk_AnimateInst *pTVar5;
  int iVar6;
  
  pTVar5 = (Trk_AnimateInst *)(instanceGroup + 1);
  iVar6 = instanceGroup->m_num_elements;
  ppTVar3 = (Trk_AnimateInst **)__builtin_vec_new(numParts << 2);
  this->inst = ppTVar3;
  iVar1 = 0;
  iVar2 = simGlobal.gameTicks;
  while (iVar6 = iVar6 + -1, iVar6 != -1) {
    iVar4 = iVar1;
    simGlobal.gameTicks = iVar2;
    if (((uint)pTVar5->type == type) &&
       (iVar4 = iVar1, simGlobal.gameTicks = iVar2,
       (uint)*(byte *)((int)&pTVar5[1].size + 1) == boomIndex)) {
      iVar4 = iVar1 + 1;
      simGlobal.gameTicks = iVar2;
      this->inst[iVar1] = pTVar5;
    }
    pTVar5 = (Trk_AnimateInst *)((int)&pTVar5->size + (int)pTVar5->size);
    iVar1 = iVar4;
    iVar2 = simGlobal.gameTicks;
  }
  simGlobal.gameTicks = iVar2;
  this->flags = 6;
  this->baseTicks = iVar2;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetAnimAttrib__10AnimScripti(struct AnimScript *this /*$a0*/, int flags /*$a1*/)
 // line 513, offset 0x80074534
	/* begin block 1 */
		// Start line: 514
		// Start offset: 0x80074534
	/* end block 1 */
	// End offset: 0x80074534
	// End Line: 515

	/* begin block 2 */
		// Start line: 1122
	/* end block 2 */
	// End Line: 1123

	/* begin block 3 */
		// Start line: 1132
	/* end block 3 */
	// End Line: 1133

	/* begin block 4 */
		// Start line: 1132
	/* end block 4 */
	// End Line: 1133

	/* begin block 5 */
		// Start line: 1133
	/* end block 5 */
	// End Line: 1134

	/* begin block 6 */
		// Start line: 1133
	/* end block 6 */
	// End Line: 1134

void SetAnimAttrib__10AnimScripti(AnimScript *this,int flags)

{
  this->flags = flags;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetAnimFrameInfo__10AnimScriptPiT1(struct AnimScript *this /*$a0*/, int *frame /*$t0*/, int *numFrames /*$a2*/)
 // line 523, offset 0x8007453c
	/* begin block 1 */
		// Start line: 524
		// Start offset: 0x8007453C
		// Variables:
	// 		struct Trk_AnimateInst *animInst; // $a3
	// 		int interval; // $v0
	// 		int ticks; // $v1
	/* end block 1 */
	// End offset: 0x80074578
	// End Line: 539

	/* begin block 2 */
		// Start line: 1143
	/* end block 2 */
	// End Line: 1144

	/* begin block 3 */
		// Start line: 1152
	/* end block 3 */
	// End Line: 1153

	/* begin block 4 */
		// Start line: 1152
	/* end block 4 */
	// End Line: 1153

void GetAnimFrameInfo__10AnimScriptPiT1(AnimScript *this,int *frame,int *numFrames)

{
  int iVar1;
  int iVar2;
  Trk_AnimateInst *pTVar3;
  int iVar4;
  
  pTVar3 = *this->inst;
  iVar2 = simGlobal.gameTicks - this->baseTicks;
  if ((uint)(ushort)pTVar3->interval - 1 < 400) {
    iVar1 = (int)pTVar3->interval;
  }
  else {
    iVar1 = 6;
  }
  iVar4 = iVar2 / iVar1;
  if (iVar1 == 0) {
    trap(0x1c00);
  }
  if ((iVar1 == -1) && (iVar2 == -0x80000000)) {
    trap(0x1800);
  }
  iVar2 = (int)pTVar3->count + -1;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (iVar4 == -0x80000000)) {
    trap(0x1800);
  }
  *frame = iVar4 % iVar2;
  *numFrames = (int)pTVar3->count + -1;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetTimedAnimPosRot__10AnimScriptP8coorddefP10matrixtdef(struct AnimScript *this /*$a0*/, struct coorddef *pt /*$v0*/, struct matrixtdef *mat /*$a3*/)
 // line 553, offset 0x800745f8
	/* begin block 1 */
		// Start line: 554
		// Start offset: 0x800745F8
	/* end block 1 */
	// End offset: 0x800745F8
	// End Line: 554

	/* begin block 2 */
		// Start line: 1210
	/* end block 2 */
	// End Line: 1211

	/* begin block 3 */
		// Start line: 1221
	/* end block 3 */
	// End Line: 1222

	/* begin block 4 */
		// Start line: 1221
	/* end block 4 */
	// End Line: 1222

int GetTimedAnimPosRot__10AnimScriptP8coorddefP10matrixtdef
              (AnimScript *this,coorddef *pt,matrixtdef *mat)

{
  int iVar1;
  
  iVar1 = GetTimedAnimPosRot__10AnimScriptiP8coorddefP10matrixtdef(this,0,pt,mat);
  return iVar1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetTimedAnimPosRot__10AnimScriptiP8coorddefP10matrixtdef(struct AnimScript *this /*$s1*/, int index /*$s2*/, struct coorddef *pt /*$s3*/, struct matrixtdef *mat /*$s0*/)
 // line 564, offset 0x80074624
	/* begin block 1 */
		// Start line: 565
		// Start offset: 0x80074624

		/* begin block 1.1 */
			// Start line: 581
			// Start offset: 0x800746AC

			/* begin block 1.1.1 */
				// Start line: 582
				// Start offset: 0x800746C0
				// Variables:
			// 		int tmp; // $a3
			/* end block 1.1.1 */
			// End offset: 0x800746FC
			// End Line: 586
		/* end block 1.1 */
		// End offset: 0x800746FC
		// End Line: 586
	/* end block 1 */
	// End offset: 0x80074700
	// End Line: 589

	/* begin block 2 */
		// Start line: 1234
	/* end block 2 */
	// End Line: 1235

	/* begin block 3 */
		// Start line: 1244
	/* end block 3 */
	// End Line: 1245

	/* begin block 4 */
		// Start line: 1244
	/* end block 4 */
	// End Line: 1245

int GetTimedAnimPosRot__10AnimScriptiP8coorddefP10matrixtdef
              (AnimScript *this,int index,coorddef *pt,matrixtdef *mat)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = GetStatus__10AnimScript(this);
  iVar2 = -1;
  if (iVar1 == 1) {
    iVar1 = Anim_GetRotPos__FP15Trk_AnimateInstiiP8coorddefP10matrixtdef
                      (this->inst[index],this->flags,simGlobal.gameTicks - this->baseTicks,pt,mat);
    iVar2 = 0;
    if (iVar1 == 0) {
      this->baseTicks = -1;
      this->inst[index] = (Trk_AnimateInst *)0x0;
    }
    else {
      iVar2 = 1;
      if ((this->flags & 4U) != 0) {
        iVar1 = mat->m[3];
        iVar2 = mat->m[4];
        iVar3 = mat->m[5];
        mat->m[3] = mat->m[6];
        mat->m[6] = -iVar1;
        mat->m[4] = mat->m[7];
        mat->m[7] = -iVar2;
        mat->m[5] = mat->m[8];
        mat->m[8] = -iVar3;
        iVar2 = 1;
      }
    }
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetStatus__10AnimScript(struct AnimScript *this /*$a0*/)
 // line 599, offset 0x8007471c
	/* begin block 1 */
		// Start line: 600
		// Start offset: 0x8007471C
	/* end block 1 */
	// End offset: 0x8007471C
	// End Line: 601

	/* begin block 2 */
		// Start line: 1310
	/* end block 2 */
	// End Line: 1311

	/* begin block 3 */
		// Start line: 1321
	/* end block 3 */
	// End Line: 1322

	/* begin block 4 */
		// Start line: 1321
	/* end block 4 */
	// End Line: 1322

	/* begin block 5 */
		// Start line: 1322
	/* end block 5 */
	// End Line: 1323

	/* begin block 6 */
		// Start line: 1322
	/* end block 6 */
	// End Line: 1323

int GetStatus__10AnimScript(AnimScript *this)

{
  return (uint)(*this->inst != (Trk_AnimateInst *)0x0);
}





