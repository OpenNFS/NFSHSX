#include "NFS4.H"
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

void Loading_DrawLoadingScreen__Fv(void)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  shapetbl *tile;
  char acStack272 [256];
  
  iVar1 = DAT_801132cc;
  sprintf(acStack272,"%sLoad%d%c.qps",0,0,0x61);
  uVar2 = loadshapeadr(acStack272,0);
  sprintf(acStack272,"%sLoada.psh",0);
  uVar3 = loadshapeadr(acStack272,0);
  Draw_SetEnvironment__Fiiiiiiii(0x200,0xf0,1,0,1,0,0,0);
  tile = (shapetbl *)shapepointer(uVar2,0);
  Draw_DrawDirectScreen__FP8shapetblii(tile,0,0);
  tile = (shapetbl *)locateshapez(uVar3,(&_loading_languageNames)[iVar1]);
  Draw_DrawDirectScreen__FP8shapetblii
            (tile,(*(int *)&tile->centerx << 0x14) >> 0x14,(*(int *)&tile->centerx << 4) >> 0x14);
  purgememadr(uVar2);
  purgememadr(uVar3);
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

void Loading_UpdateLoadingScreen__Fi(int checkpoint)
{
  shapetbl *tile;
  int iVar1;
  char acStack280 [256];
  
  if ((checkpoint == 1) && (iGp00001484 == 0)) {
    sprintf(acStack280,"%sLoadb.psh",0);
    iGp00001484 = loadshapeadr(acStack280,0x10);
  }
  iVar1 = 0;
  if (true) {
    do {
      tile = (shapetbl *)locateshapez(iGp00001484,&DAT_8013d9d4);
      Draw_DrawDirectScreen__FP8shapetblii(tile,(checkpoint + -1) * 0x17 + iVar1 + 0x8e,0xc0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x17);
  }
  if ((checkpoint == 10) && (iGp00001484 != 0)) {
    purgememadr();
    iGp00001484 = 0;
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

void Loading_GetInitialMemory__Fv(void)
{
  uGp00001490 = largestunused();
  return;


}





