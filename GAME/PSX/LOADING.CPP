#include "THISDUST.H"
#include "LOADING.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Loading_DrawLoadingScreen__Fv()
 // line 15, offset 0x800db0b8
	/* begin block 1 */
		// Start line: 16
		// Start offset: 0x800DB0B8
		// Variables:
	// 		char name[255]; // stack offset -272
	// 		char *f; // $s2
	// 		char *g; // $s0
	// 		int language; // $s1
	// 		struct shapetbl *s; // $v0
	/* end block 1 */
	// End offset: 0x800DB0B8
	// End Line: 16

	/* begin block 2 */
		// Start line: 30
	/* end block 2 */
	// End Line: 31

	/* begin block 3 */
		// Start line: 30
	/* end block 3 */
	// End Line: 31

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Loading_DrawLoadingScreen__Fv(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  shapetbl *tile;
  char acStack272 [256];
  
  iVar1 = GameSetup_gData.userSetting.language;
  sprintf(acStack272,s__sLoad_d_c_qps_80056938,PTR_801164cc,GameSetup_gData.track,
          GameSetup_gData.mirrorTrack + 0x61);
  iVar2 = loadshapeadr(acStack272,0);
  sprintf(acStack272,s__sLoada_psh_80056948,PTR_801164cc);
  iVar3 = loadshapeadr(acStack272,0);
  Draw_SetEnvironment__Fiiiiiiii(0x200,0xf0,1,0,1,0,0,0);
  tile = (shapetbl *)shapepointer(iVar2,0);
  Draw_DrawDirectScreen__FP8shapetblii(tile,0,0);
  tile = (shapetbl *)locateshapez(iVar3,(int *)loading_languageNames6[iVar1]);
  Draw_DrawDirectScreen__FP8shapetblii
            (tile,(*(int *)&tile->centerx << 0x14) >> 0x14,(*(int *)&tile->centerx << 4) >> 0x14);
  purgememadr(iVar2);
  purgememadr(iVar3);
  Draw_SetEnvironment__Fiiiiiiii(0x200,0xf0,0,1,0,0,0,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Loading_UpdateLoadingScreen__Fi(int checkpoint /*$s3*/)
 // line 60, offset 0x800db200
	/* begin block 1 */
		// Start line: 61
		// Start offset: 0x800DB200
		// Variables:
	// 		int i; // $s0
	// 		int max; // $s2
	// 		char name[255]; // stack offset -280
	/* end block 1 */
	// End offset: 0x800DB2D8
	// End Line: 93

	/* begin block 2 */
		// Start line: 159
	/* end block 2 */
	// End Line: 160

	/* begin block 3 */
		// Start line: 168
	/* end block 3 */
	// End Line: 169

	/* begin block 4 */
		// Start line: 168
	/* end block 4 */
	// End Line: 169

void Loading_UpdateLoadingScreen__Fi(int checkpoint)

{
  shapetbl *tile;
  int iVar1;
  char acStack280 [256];
  
  if ((checkpoint == 1) && (smallShapeFile == (char *)0x0)) {
    sprintf(acStack280,s__sLoadb_psh_80056954,PTR_801164cc);
    smallShapeFile = (char *)loadshapeadr(acStack280,0x10);
  }
  iVar1 = 0;
  do {
    tile = (shapetbl *)locateshapez((int)smallShapeFile,(int *)&DAT_8013d9d4);
    Draw_DrawDirectScreen__FP8shapetblii(tile,(checkpoint + -1) * 0x17 + iVar1 + 0x8e,0xc0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x17);
  if ((checkpoint == 10) && (smallShapeFile != (char *)0x0)) {
    purgememadr((int)smallShapeFile);
    smallShapeFile = (char *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Loading_GetInitialMemory__Fv()
 // line 105, offset 0x800db2f8
	/* begin block 1 */
		// Start line: 106
		// Start offset: 0x800DB2F8
	/* end block 1 */
	// End offset: 0x800DB2F8
	// End Line: 106

	/* begin block 2 */
		// Start line: 257
	/* end block 2 */
	// End Line: 258

	/* begin block 3 */
		// Start line: 270
	/* end block 3 */
	// End Line: 271

	/* begin block 4 */
		// Start line: 270
	/* end block 4 */
	// End Line: 271

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Loading_GetInitialMemory__Fv(void)

{
  totalAvailMem = largestunused();
  return;
}





