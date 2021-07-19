#include "THISDUST.H"
#include "SCENE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Scene_Init__Fi(int numObjDefs /*$a0*/)
 // line 1013, offset 0x800b5f7c
	/* begin block 1 */
		// Start line: 1014
		// Start offset: 0x800B5F7C
	/* end block 1 */
	// End offset: 0x800B5F88
	// End Line: 1016

	/* begin block 2 */
		// Start line: 2026
	/* end block 2 */
	// End Line: 2027

	/* begin block 3 */
		// Start line: 2026
	/* end block 3 */
	// End Line: 2027

	/* begin block 4 */
		// Start line: 2027
	/* end block 4 */
	// End Line: 2028

	/* begin block 5 */
		// Start line: 2027
	/* end block 5 */
	// End Line: 2028

void Scene_Init__Fi(int numObjDefs)

{
  if (0 < numObjDefs) {
    gGameSceneList = (CSceneList *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Scene_DeInit__Fv()
 // line 1029, offset 0x800b5f90
	/* begin block 1 */
		// Start line: 1030
		// Start offset: 0x800B5F90
	/* end block 1 */
	// End offset: 0x800B5F90
	// End Line: 1030

	/* begin block 2 */
		// Start line: 2044
	/* end block 2 */
	// End Line: 2045

	/* begin block 3 */
		// Start line: 2058
	/* end block 3 */
	// End Line: 2059

	/* begin block 4 */
		// Start line: 2058
	/* end block 4 */
	// End Line: 2059

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Scene_DeInit__Fv(void)

{
  Scene_PurgeScene__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Scene_PurgeScene__Fv()
 // line 1040, offset 0x800b5fb0
	/* begin block 1 */
		// Start line: 1041
		// Start offset: 0x800B5FB0
	/* end block 1 */
	// End offset: 0x800B5FCC
	// End Line: 1056

	/* begin block 2 */
		// Start line: 2070
	/* end block 2 */
	// End Line: 2071

	/* begin block 3 */
		// Start line: 2080
	/* end block 3 */
	// End Line: 2081

	/* begin block 4 */
		// Start line: 2080
	/* end block 4 */
	// End Line: 2081

	/* begin block 5 */
		// Start line: 2081
	/* end block 5 */
	// End Line: 2082

	/* begin block 6 */
		// Start line: 2081
	/* end block 6 */
	// End Line: 2082

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Scene_PurgeScene__Fv(void)

{
  if (gGameSceneList != (CSceneList *)0x0) {
    purgememadr((int)gGameSceneList);
    gGameSceneList = (CSceneList *)0x0;
  }
  Object_ClearCustomObjects__Fv();
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Scene_BuildCustomSceneList__Fv()
 // line 1059, offset 0x800b5fe4
	/* begin block 1 */
		// Start line: 1060
		// Start offset: 0x800B5FE4
		// Variables:
	// 		int slice; // $s2

		/* begin block 1.1 */
			// Start line: 1060
			// Start offset: 0x800B5FE4

			/* begin block 1.1.1 */
				// Start line: 1067
				// Start offset: 0x800B600C
				// Variables:
			// 		struct SceneElem *se; // $s1

				/* begin block 1.1.1.1 */
					// Start line: 1067
					// Start offset: 0x800B600C

					/* begin block 1.1.1.1.1 */
						// Start line: 1067
						// Start offset: 0x800B600C
					/* end block 1.1.1.1.1 */
					// End offset: 0x800B600C
					// End Line: 1067
				/* end block 1.1.1.1 */
				// End offset: 0x800B600C
				// End Line: 1067

				/* begin block 1.1.1.2 */
					// Start line: 1067
					// Start offset: 0x800B600C
					// Variables:
				// 		int i; // $s0
				/* end block 1.1.1.2 */
				// End offset: 0x800B6068
				// End Line: 1098
			/* end block 1.1.1 */
			// End offset: 0x800B6068
			// End Line: 1098
		/* end block 1.1 */
		// End offset: 0x800B6068
		// End Line: 1103
	/* end block 1 */
	// End offset: 0x800B6068
	// End Line: 1108

	/* begin block 2 */
		// Start line: 2115
	/* end block 2 */
	// End Line: 2116

	/* begin block 3 */
		// Start line: 2119
	/* end block 3 */
	// End Line: 2120

	/* begin block 4 */
		// Start line: 2119
	/* end block 4 */
	// End Line: 2120

/* WARNING: Unknown calling convention yet parameter storage is locked */

int Scene_BuildCustomSceneList__Fv(void)

{
  int iVar1;
  SceneElem *objectData;
  int iVar2;
  
  Object_ClearCustomObjects__Fv();
  iVar2 = -1;
  if (gGameSceneList != (CSceneList *)0x0) {
    objectData = (SceneElem *)(gGameSceneList + 1);
    iVar2 = gGameSceneList->slice_;
    iVar1 = 0;
    Object_customSliceNum = iVar2;
    if (0 < gGameSceneList->numElements_) {
      do {
        if ((objectData->type < 3) && (-1 < objectData->type)) {
          Object_AddCustomObject__FP9SceneElemi(objectData,1);
        }
        iVar1 = iVar1 + 1;
        objectData = objectData + 1;
      } while (iVar1 < gGameSceneList->numElements_);
    }
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Scene_LoadSceneFile__Fi(int sceneFileIndex /*$s0*/)
 // line 1111, offset 0x800b6084
	/* begin block 1 */
		// Start line: 1112
		// Start offset: 0x800B6084
		// Variables:
	// 		char fname[128]; // stack offset -144
	// 		int bigFile; // stack offset -16
	/* end block 1 */
	// End offset: 0x800B6084
	// End Line: 1112

	/* begin block 2 */
		// Start line: 2221
	/* end block 2 */
	// End Line: 2222

	/* begin block 3 */
		// Start line: 2225
	/* end block 3 */
	// End Line: 2226

	/* begin block 4 */
		// Start line: 2225
	/* end block 4 */
	// End Line: 2226

void Scene_LoadSceneFile__Fi(int sceneFileIndex)

{
  char acStack144 [128];
  uint local_10 [2];
  
  Object_ClearCustomObjects__Fv();
  local_10[0] = 0;
  sprintf(acStack144,s__sscene_viv_80056598,PTR_ARRAY_80116480[0]);
  FILE_addbigsync(acStack144,0x10,100,local_10);
  sprintf(acStack144,s_tr_02d_02d_scn_800565a4,GameSetup_gData.track,sceneFileIndex);
  gGameSceneList = (CSceneList *)0x0;
  gGameSceneList = (CSceneList *)loadfileadr(acStack144,0);
  FILE_delbigsync(local_10[0],100);
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ GetPlaneY__FPC8coorddefN20(struct coorddef *norm /*$s2*/, struct coorddef *pointOnPlane /*$s0*/, struct coorddef *testPoint /*$s3*/)
 // line 1142, offset 0x800b6114
	/* begin block 1 */
		// Start line: 1143
		// Start offset: 0x800B6114
		// Variables:
	// 		int D; // $s1
	/* end block 1 */
	// End offset: 0x800B6114
	// End Line: 1143

	/* begin block 2 */
		// Start line: 2285
	/* end block 2 */
	// End Line: 2286

	/* begin block 3 */
		// Start line: 2290
	/* end block 3 */
	// End Line: 2291

	/* begin block 4 */
		// Start line: 2290
	/* end block 4 */
	// End Line: 2291

int GetPlaneY__FPC8coorddefN20(coorddef *norm,coorddef *pointOnPlane,coorddef *testPoint)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = fixedmult(norm->x,pointOnPlane->x);
  uVar2 = fixedmult(norm->y,pointOnPlane->y);
  uVar3 = fixedmult(norm->z,pointOnPlane->z);
  uVar4 = fixedmult(norm->x,testPoint->x);
  uVar5 = fixedmult(norm->z,testPoint->z);
  iVar6 = fixeddiv(-((uVar4 + uVar5) - (uVar1 + uVar2 + uVar3)),norm->y);
  return iVar6;
}





