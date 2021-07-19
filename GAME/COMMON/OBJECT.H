#ifndef OBJECT_H
#define OBJECT_H


extern int CalcObjYawAngle__FP8CCOORD16(struct CCOORD16 *pts); // 0x800A4AE4

extern void CalcObjExtentPoints__FP8coorddefP8CCOORD16T0P5tQuat(struct coorddef *cp, struct CCOORD16 *pts, struct coorddef *resultPts, struct tQuat *quat); // 0x800A4B1C

extern void BuildObjCollisionMatrix__FiiiP10matrixtdef(int weight, int objAngle, int impactAngle, struct matrixtdef *mat); // 0x800A4BE8

extern struct Trk_SimpleInst * FindObjInstanceFromSerialNum__FP5Groupi(struct Group *group, int index); // 0x800A4C8C

extern void Object_InitCollisionCheckLoop__FP12BWorldSm_PosP18Object_tSimObjListPi(struct BWorldSm_Pos *slicePos, struct Object_tSimObjList *objList, int *numObj); // 0x800A4CFC

extern struct Trk_SimObject * GetSimObj__FiP18Object_tSimObjListPi(int objIndex, struct Object_tSimObjList *objList, int *chunk); // 0x800A4F14

extern int Object_GetRadiusCollisionData__FP18Object_tSimObjListiP8coorddefPi(struct Object_tSimObjList *objList, int objIndex, struct coorddef *pos, int *radius); // 0x800A4FE8

extern void Object_GetPointsCollisionData__FP18Object_tSimObjListiPiP8coorddef(struct Object_tSimObjList *objList, int objIndex, int *numPoints, struct coorddef *resultPoints); // 0x800A50F4

extern void Object_InitStatus__Fv(); // 0x800A5230

extern void Object_KillStatus__Fv(); // 0x800A5258

extern struct ObjectAnim * Object_GetAnim__FP13Trk_SimObject(struct Trk_SimObject *simObj); // 0x800A52C4

extern int Object_CheckCollisionResults__FP18Object_tSimObjListiP13BO_tNewtonObj(struct Object_tSimObjList *objList, int objIndex, struct BO_tNewtonObj *N); // 0x800A52F0

extern void Object_InitCustomObjects__Fv(); // 0x800A5588

extern void Object_DeInitCustomObjects__Fv(); // 0x800A560C

extern void Object_ClearCustomObjects__Fv(); // 0x800A566C

extern void SetCautionSurface__FP8coorddefP12BWorldSm_Pos(struct coorddef *pt, struct BWorldSm_Pos *slicePos); // 0x800A573C

extern int Object_AddCustomSimObject__FP9SceneElemii(struct SceneElem *objectData, int serialNum, int instIndex); // 0x800A57B0

extern int Object_GetObjDefID__Fi(int index); // 0x800A5958

extern int Object_FindDefWithThisID__Fi(int ID); // 0x800A59AC

extern void Object_AddCustomObject__FP9SceneElemi(struct SceneElem *objectData, int setupSimDataFlag); // 0x800A5A04

extern void GetObjMaxDimensions__FPP13Trk_ObjectDefP14Trk_SimpleInstP8coorddef(struct Trk_ObjectDef **pObjDefs, struct Trk_SimpleInst *objInstance, struct coorddef *dimensions); // 0x800A5D58

extern void Object_InitIMassObjectInfo__Fv(); // 0x800A5ED0

extern void Object_DeInitIMassObjectInfo__Fv(); // 0x800A5FDC

extern int Object_GetNumIMassObjects__Fv(); // 0x800A6004

extern void Object_GetIMassObjectDimensions__FiP8coorddef(int objIndex, struct coorddef *dimensions); // 0x800A6010

extern void Object_GetIMassObjectMotion__FiP8coorddefP10matrixtdefT1(int objIndex, struct coorddef *cpoint, struct matrixtdef *orientMat, struct coorddef *velocity); // 0x800A603C

extern int Draw__23ObjectFinishedMultiAnimP13DRender_tViewP11Draw_DCachei(struct ObjectFinishedMultiAnim *this, struct DRender_tView *Vi, struct Draw_DCache *sd, int offset); // 0x800A61F8

extern struct ObjectMultiAnim * __15ObjectMultiAnimP8coorddefP7AnimDefP19Trk_CollideBoomInstP13Trk_ObjectDefP13Trk_SimObjectP23ObjectFinishedMultiAnim(struct ObjectMultiAnim *this, struct coorddef *impactVel, struct AnimDef *def, struct Trk_CollideBoomInst *objCollideInstance, struct Trk_ObjectDef *objDef, struct Trk_SimObject *simObj, struct ObjectFinishedMultiAnim *finishedAnim); // 0x800A6200

extern int Draw__15ObjectMultiAnimP13DRender_tViewP11Draw_DCachei(struct ObjectMultiAnim *this, struct DRender_tView *Vi, struct Draw_DCache *sd, int offset); // 0x800A62F8

extern int Draw__22ObjectFinishedSignAnimP13DRender_tViewP11Draw_DCachei(struct ObjectFinishedSignAnim *this, struct DRender_tView *Vi, struct Draw_DCache *sd, int offset); // 0x800A671C

extern struct ObjectSignAnim * __14ObjectSignAnimP8coorddefiP7AnimDefP19Trk_CollideBoomInstP13Trk_ObjectDefP13Trk_SimObjectT1P22ObjectFinishedSignAnim(struct ObjectSignAnim *this, struct coorddef *impactVel, int impactAngle, struct AnimDef *def, struct Trk_CollideBoomInst *objCollideInstance, struct Trk_ObjectDef *objDef, struct Trk_SimObject *simObj, struct coorddef *roadNormal, struct ObjectFinishedSignAnim *finishedAnim); // 0x800A6764

extern int Draw__14ObjectSignAnimP13DRender_tViewP11Draw_DCachei(struct ObjectSignAnim *this, struct DRender_tView *Vi, struct Draw_DCache *sd, int offset); // 0x800A6A38


extern void _._10ObjectAnim(struct ObjectAnim *this, int __in_chrg); // 0x800A6DE0

extern void _._23ObjectFinishedMultiAnim(struct ObjectFinishedMultiAnim *this, int __in_chrg); // 0x800A6DAC

extern void _._15ObjectMultiAnim(struct ObjectMultiAnim *this, int __in_chrg); // 0x800A6CF8

extern void _._22ObjectFinishedSignAnim(struct ObjectFinishedSignAnim *this, int __in_chrg); // 0x800A6CC4

extern void _._14ObjectSignAnim(struct ObjectSignAnim *this, int __in_chrg); // 0x800A6C10


// decompiled code
// original method signature: 
// void /*$ra*/ _._10ObjectAnim(struct ObjectAnim *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 53, offset 0x800a6de0
	/* begin block 1 */
		// Start line: 54
		// Start offset: 0x800A6DE0
	/* end block 1 */
	// End offset: 0x800A6DE0
	// End Line: 54

	/* begin block 2 */
		// Start line: 113
	/* end block 2 */
	// End Line: 114

	/* begin block 3 */
		// Start line: 106
	/* end block 3 */
	// End Line: 107

	/* begin block 4 */
		// Start line: 183
	/* end block 4 */
	// End Line: 184

void ___10ObjectAnim(ObjectAnim *this,int __in_chrg)

{
  *(undefined4 *)this = 0x800560e8;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._23ObjectFinishedMultiAnim(struct ObjectFinishedMultiAnim *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 61, offset 0x800a6dac
	/* begin block 1 */
		// Start line: 62
		// Start offset: 0x800A6DAC
		// Variables:
	// 		struct ObjectAnim *this; // $a0
	/* end block 1 */
	// End offset: 0x800A6DAC
	// End Line: 62

	/* begin block 2 */
		// Start line: 62
		// Start offset: 0x800A6DAC

		/* begin block 2.1 */
			// Start line: 62
			// Start offset: 0x800A6DAC
		/* end block 2.1 */
		// End offset: 0x800A6DAC
		// End Line: 62
	/* end block 2 */
	// End offset: 0x800A6DD0
	// End Line: 62

	/* begin block 3 */
		// Start line: 191
	/* end block 3 */
	// End Line: 192

	/* begin block 4 */
		// Start line: 122
	/* end block 4 */
	// End Line: 123

	/* begin block 5 */
		// Start line: 191
	/* end block 5 */
	// End Line: 192

void ___23ObjectFinishedMultiAnim(ObjectFinishedMultiAnim *this,int __in_chrg)

{
  *(undefined4 *)this = 0x800560e8;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._15ObjectMultiAnim(struct ObjectMultiAnim *this /*$s1*/, int __in_chrg /*$s2*/)
 // line 84, offset 0x800a6cf8
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x800A6CF8
		// Variables:
	// 		struct ObjectAnim *this; // $s1
	// 		int __in_chrg; // $s2

		/* begin block 1.1 */
			// Start line: 86
			// Start offset: 0x800A6D28

			/* begin block 1.1.1 */
				// Start line: 86
				// Start offset: 0x800A6D28
			/* end block 1.1.1 */
			// End offset: 0x800A6D40
			// End Line: 86
		/* end block 1.1 */
		// End offset: 0x800A6D48
		// End Line: 86
	/* end block 1 */
	// End offset: 0x800A6D74
	// End Line: 87

	/* begin block 2 */
		// Start line: 87
		// Start offset: 0x800A6D74

		/* begin block 2.1 */
			// Start line: 87
			// Start offset: 0x800A6D74
		/* end block 2.1 */
		// End offset: 0x800A6D74
		// End Line: 87
	/* end block 2 */
	// End offset: 0x800A6D94
	// End Line: 87

	/* begin block 3 */
		// Start line: 184
	/* end block 3 */
	// End Line: 185

	/* begin block 4 */
		// Start line: 168
	/* end block 4 */
	// End Line: 169

	/* begin block 5 */
		// Start line: 211
	/* end block 5 */
	// End Line: 212

void ___15ObjectMultiAnim(ObjectMultiAnim *this,int __in_chrg)

{
  int *piVar1;
  AnimScript *deleteMe;
  
  deleteMe = this->script;
  *(undefined4 *)this = 0x800560b8;
  if (deleteMe != (AnimScript *)0x0) {
    if (deleteMe->inst != (Trk_AnimateInst **)0x0) {
      __builtin_vec_delete(deleteMe->inst);
    }
    __builtin_delete(deleteMe);
  }
  piVar1 = (int *)this->finishedAnim;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
  }
  *(undefined4 *)this = 0x800560e8;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._22ObjectFinishedSignAnim(struct ObjectFinishedSignAnim *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 101, offset 0x800a6cc4
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x800A6CC4
		// Variables:
	// 		struct ObjectAnim *this; // $a0
	/* end block 1 */
	// End offset: 0x800A6CC4
	// End Line: 102

	/* begin block 2 */
		// Start line: 102
		// Start offset: 0x800A6CC4

		/* begin block 2.1 */
			// Start line: 102
			// Start offset: 0x800A6CC4
		/* end block 2.1 */
		// End offset: 0x800A6CC4
		// End Line: 102
	/* end block 2 */
	// End offset: 0x800A6CE8
	// End Line: 102

	/* begin block 3 */
		// Start line: 228
	/* end block 3 */
	// End Line: 229

	/* begin block 4 */
		// Start line: 202
	/* end block 4 */
	// End Line: 203

	/* begin block 5 */
		// Start line: 228
	/* end block 5 */
	// End Line: 229

void ___22ObjectFinishedSignAnim(ObjectFinishedSignAnim *this,int __in_chrg)

{
  *(undefined4 *)this = 0x800560e8;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._14ObjectSignAnim(struct ObjectSignAnim *this /*$s1*/, int __in_chrg /*$s2*/)
 // line 124, offset 0x800a6c10
	/* begin block 1 */
		// Start line: 125
		// Start offset: 0x800A6C10
		// Variables:
	// 		struct ObjectAnim *this; // $s1
	// 		int __in_chrg; // $s2

		/* begin block 1.1 */
			// Start line: 126
			// Start offset: 0x800A6C40

			/* begin block 1.1.1 */
				// Start line: 126
				// Start offset: 0x800A6C40
			/* end block 1.1.1 */
			// End offset: 0x800A6C58
			// End Line: 126
		/* end block 1.1 */
		// End offset: 0x800A6C60
		// End Line: 126
	/* end block 1 */
	// End offset: 0x800A6C8C
	// End Line: 127

	/* begin block 2 */
		// Start line: 127
		// Start offset: 0x800A6C8C

		/* begin block 2.1 */
			// Start line: 127
			// Start offset: 0x800A6C8C
		/* end block 2.1 */
		// End offset: 0x800A6C8C
		// End Line: 127
	/* end block 2 */
	// End offset: 0x800A6CAC
	// End Line: 127

	/* begin block 3 */
		// Start line: 248
	/* end block 3 */
	// End Line: 249

void ___14ObjectSignAnim(ObjectSignAnim *this,int __in_chrg)

{
  ObjectFinishedSignAnim *pOVar1;
  AnimScript *deleteMe;
  
  deleteMe = this->script;
  *(undefined4 *)this = 0x80056088;
  if (deleteMe != (AnimScript *)0x0) {
    if (deleteMe->inst != (Trk_AnimateInst **)0x0) {
      __builtin_vec_delete(deleteMe->inst);
    }
    __builtin_delete(deleteMe);
  }
  pOVar1 = this->finishedAnim;
  if (pOVar1 != (ObjectFinishedSignAnim *)0x0) {
    (**(code **)(*(int *)pOVar1 + 0xc))
              ((pOVar1->ObjectAnim)._vf + (int)*(short *)(*(int *)pOVar1 + 8),3);
  }
  *(undefined4 *)this = 0x800560e8;
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}





#endif
