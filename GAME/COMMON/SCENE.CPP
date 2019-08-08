#include "NFS4.H"
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

void Scene_Init__Fi(int numObjDefs)
{
  if (0 < numObjDefs) {
    uGp00000ebc = 0;
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

void Scene_PurgeScene__Fv(void)
{
  if (iGp00000ebc != 0) {
    purgememadr();
    iGp00000ebc = 0;
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

int Scene_BuildCustomSceneList__Fv(void)
{
  int iVar1;
  SceneElem *objectData;
  int iVar2;
  
  Object_ClearCustomObjects__Fv();
  iVar2 = -1;
  if (iGp00000ebc != 0) {
    objectData = (SceneElem *)(iGp00000ebc + 0x10);
    iVar2 = *(int *)(iGp00000ebc + 8);
    iVar1 = 0;
    Object_customSliceNum = iVar2;
    if (0 < *(int *)(iGp00000ebc + 4)) {
      do {
        if ((objectData->type < 3) && (-1 < objectData->type)) {
          Object_AddCustomObject__FP9SceneElemi(objectData,1);
        }
        iVar1 = iVar1 + 1;
        objectData = objectData + 1;
      } while (iVar1 < *(int *)(iGp00000ebc + 4));
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

void Scene_LoadSceneFile__Fi(int sceneFileIndex)
{
  char acStack144 [128];
  undefined4 local_10 [2];
  
  Object_ClearCustomObjects__Fv();
  local_10[0] = 0;
  sprintf(acStack144,"%sscene.viv",0);
  FILE_addbigsync(acStack144,0x10,100,local_10);
  sprintf(acStack144,"tr%02d%02d.scn",0,sceneFileIndex);
  _gGameSceneList = 0;
  _gGameSceneList = loadfileadr(acStack144,0);
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

int GetPlaneY__FPC8coorddefN20(coorddef *norm,coorddef *pointOnPlane,coorddef *testPoint)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = fixedmult(norm->x,pointOnPlane->x);
  iVar2 = fixedmult(norm->y,pointOnPlane->y);
  iVar3 = fixedmult(norm->z,pointOnPlane->z);
  iVar4 = fixedmult(norm->x,testPoint->x);
  iVar5 = fixedmult(norm->z,testPoint->z);
  iVar1 = fixeddiv(-((iVar4 + iVar5) - (iVar1 + iVar2 + iVar3)),norm->y);
  return iVar1;


}





