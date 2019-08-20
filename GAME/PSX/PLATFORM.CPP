#include "NFS4.H"
#include "PLATFORM.H"

// decompiled code
// original method signature: 
// void /*$ra*/ Platform_InitMemory__Fv()
 // line 125, offset 0x800dc2b8
	/* begin block 1 */
		// Start line: 126
		// Start offset: 0x800DC2B8
		// Variables:
	// 		unsigned int tempLow; // $v1
	/* end block 1 */
	// End offset: 0x800DC2B8
	// End Line: 129

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Platform_InitMemory__Fv(void)

{
  puGp00001564 = &DAT_80010080;
  puGp00001568 = &DAT_80054d10;
  puGp0000156c = &DAT_80010080;
  puGp00001570 = &DAT_00044c90;
  return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ Platform_ReserveMemory__FiPc(int size /*$v0*/, char *string /*$a1*/)
 // line 139, offset 0x800dc2e8
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x800DC2E8

		/* begin block 1.1 */
			// Start line: 141
			// Start offset: 0x800DC2F8

			/* begin block 1.1.1 */
				// Start line: 157
				// Start offset: 0x800DC32C
			/* end block 1.1.1 */
			// End offset: 0x800DC32C
			// End Line: 157
		/* end block 1.1 */
		// End offset: 0x800DC32C
		// End Line: 157
	/* end block 1 */
	// End offset: 0x800DC32C
	// End Line: 157

char * Platform_ReserveMemory__FiPc(int size,char *string)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = size + 3;
  if (iVar1 < 0) {
    iVar1 = size + 6;
  }
  pcVar2 = pcGp0000156c;
  if ((int)(pcGp0000156c + (iVar1 >> 2) * 4 + -iGp00001564) <= iGp00001570) {
    pcGp0000156c = pcGp0000156c + (iVar1 >> 2) * 4;
    return pcVar2;
  }
  return (char *)0x0;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ Platform_TempReserveMemory__FiPc(int size /*$a0*/, char *string /*$a1*/)
 // line 161, offset 0x800dc334
	/* begin block 1 */
		// Start line: 162
		// Start offset: 0x800DC334

		/* begin block 1.1 */
			// Start line: 163
			// Start offset: 0x800DC344

			/* begin block 1.1.1 */
				// Start line: 179
				// Start offset: 0x800DC370
			/* end block 1.1.1 */
			// End offset: 0x800DC370
			// End Line: 179
		/* end block 1.1 */
		// End offset: 0x800DC370
		// End Line: 179
	/* end block 1 */
	// End offset: 0x800DC370
	// End Line: 179

char * Platform_TempReserveMemory__FiPc(int size,char *string)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = size + 3;
  if (iVar2 < 0) {
    iVar2 = size + 6;
  }
  pcVar1 = (char *)0x0;
  if ((int)(pcGp0000156c + ((iVar2 >> 2) * 4 - iGp00001564)) <= iGp00001570) {
    pcVar1 = pcGp0000156c;
  }
  return pcVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Platform_SysStartUp__Fv()
 // line 207, offset 0x800dc378
	/* begin block 1 */
		// Start line: 208
		// Start offset: 0x800DC378
		// Variables:
	// 		char *endofcode; // $a0
	/* end block 1 */
	// End offset: 0x800DC378
	// End Line: 208

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Platform_SysStartUp__Fv(void)

{
  disablecd = (uchar *)0x0;
  nfs_sysInfo = (int)&LAB_000b34f4;
  initmemadr((undefined2 *)&DAT_80148b0c,(int)&LAB_000b34f4);
  nfs2eacinit__Fv();
  Draw_SetEnvironment__Fiiiiiiii(0x200,0xf0,1,0,1,0,0,0);
  initlinkmode(0,1,1);
  setdirectory((char *)&PTR_DAT_8013daa0);
  initlinkmode(0,1000,1);
  initlinkmode(0,1000,1);
  uGp00001550 = 1;
  inittimer((undefined4 *)0x80);
  Paths_StartUp__Fv();
  initasync(0x1e,0x2000,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Platform_DebuggerPollHost__Fv()
 // line 326, offset 0x800dc450
	/* begin block 1 */
		// Start line: 327
		// Start offset: 0x800DC450
	/* end block 1 */
	// End offset: 0x800DC450
	// End Line: 327

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Platform_DebuggerPollHost__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ nfs2eacinit__Fv()
 // line 369, offset 0x800dc458
	/* begin block 1 */
		// Start line: 370
		// Start offset: 0x800DC458
	/* end block 1 */
	// End offset: 0x800DC458
	// End Line: 370

/* WARNING: Unknown calling convention yet parameter storage is locked */

void nfs2eacinit__Fv(void)

{
  FlushCache();
  ResetCallback();
  ResetGraph(3);
  initjoy((uchar *)0x2);
  FILE_init(10,800,0x30);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Platform_ResetDCTBuffer__Fv()
 // line 439, offset 0x800dc4a0
	/* begin block 1 */
		// Start line: 440
		// Start offset: 0x800DC4A0
	/* end block 1 */
	// End offset: 0x800DC4A0
	// End Line: 441

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Platform_ResetDCTBuffer__Fv(void)

{
  puGp00001560 = &CF_DVLC;
  return;
}



// decompiled code
// original method signature: 
// char * /*$ra*/ Platform_GetDCTBuffer__FiPc(int size /*$a0*/, char *string /*$a1*/)
 // line 444, offset 0x800dc4b4
	/* begin block 1 */
		// Start line: 445
		// Start offset: 0x800DC4B4
		// Variables:
	// 		char *p; // $v0
	/* end block 1 */
	// End offset: 0x800DC4B4
	// End Line: 447

char * Platform_GetDCTBuffer__FiPc(int size,char *string)

{
  char *pcVar1;
  
  pcVar1 = pcGp00001560;
  pcGp00001560 = pcGp00001560 + size;
  return pcVar1;
}




