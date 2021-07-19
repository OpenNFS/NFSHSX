#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 250
	/* end block 2 */
	// End Line: 251

	/* begin block 3 */
		// Start line: 250
	/* end block 3 */
	// End Line: 251

	/* begin block 4 */
		// Start line: 253
	/* end block 4 */
	// End Line: 254

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Platform_InitMemory__Fv(void)

{
  gLowMemory = (int)PTR_ARRAY_80010080;
  gHighMemory = (int)&DAT_80054d10;
  gCurrentMemory = (int)PTR_ARRAY_80010080;
  gTotalMemory = (uint)&LAB_00044c90;
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

	/* begin block 2 */
		// Start line: 276
	/* end block 2 */
	// End Line: 277

	/* begin block 3 */
		// Start line: 280
	/* end block 3 */
	// End Line: 281

	/* begin block 4 */
		// Start line: 280
	/* end block 4 */
	// End Line: 281

	/* begin block 5 */
		// Start line: 281
	/* end block 5 */
	// End Line: 282

	/* begin block 6 */
		// Start line: 281
	/* end block 6 */
	// End Line: 282

char * Platform_ReserveMemory__FiPc(int size,char *string)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = size + 3;
  if (iVar1 < 0) {
    iVar1 = size + 6;
  }
  iVar1 = gCurrentMemory + (iVar1 >> 2) * 4;
  pcVar2 = (char *)gCurrentMemory;
  if (iVar1 - gLowMemory <= (int)gTotalMemory) {
    gCurrentMemory = iVar1;
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

	/* begin block 2 */
		// Start line: 332
	/* end block 2 */
	// End Line: 333

	/* begin block 3 */
		// Start line: 337
	/* end block 3 */
	// End Line: 338

	/* begin block 4 */
		// Start line: 337
	/* end block 4 */
	// End Line: 338

	/* begin block 5 */
		// Start line: 338
	/* end block 5 */
	// End Line: 339

	/* begin block 6 */
		// Start line: 338
	/* end block 6 */
	// End Line: 339

char * Platform_TempReserveMemory__FiPc(int size,char *string)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = size + 3;
  if (iVar2 < 0) {
    iVar2 = size + 6;
  }
  pcVar1 = (char *)0x0;
  if ((gCurrentMemory + (iVar2 >> 2) * 4) - gLowMemory <= (int)gTotalMemory) {
    pcVar1 = (char *)gCurrentMemory;
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

	/* begin block 2 */
		// Start line: 402
	/* end block 2 */
	// End Line: 403

	/* begin block 3 */
		// Start line: 412
	/* end block 3 */
	// End Line: 413

	/* begin block 4 */
		// Start line: 412
	/* end block 4 */
	// End Line: 413

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Platform_SysStartUp__Fv(void)

{
  disablecd = (uchar *)0x0;
  nfs_sysInfo = (int)&LAB_000b34f4;
  initmemadr((undefined2 *)&DAT_80148b0c,(int)&LAB_000b34f4);
  nfs2eacinit__Fv();
  Draw_SetEnvironment__Fiiiiiiii(0x200,0xf0,1,0,1,0,0,0);
  initlinkmode(0,1,1);
  setdirectory((char *)PTR_ARRAY_8013daa0);
  initlinkmode(0,1000,1);
  initlinkmode(0,1000,1);
  gSysStartUp = 1;
  inittimer((uchar *)0x80);
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

	/* begin block 2 */
		// Start line: 648
	/* end block 2 */
	// End Line: 649

	/* begin block 3 */
		// Start line: 663
	/* end block 3 */
	// End Line: 664

	/* begin block 4 */
		// Start line: 663
	/* end block 4 */
	// End Line: 664

	/* begin block 5 */
		// Start line: 667
	/* end block 5 */
	// End Line: 668

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

	/* begin block 2 */
		// Start line: 710
	/* end block 2 */
	// End Line: 711

	/* begin block 3 */
		// Start line: 738
	/* end block 3 */
	// End Line: 739

	/* begin block 4 */
		// Start line: 738
	/* end block 4 */
	// End Line: 739

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

	/* begin block 2 */
		// Start line: 847
	/* end block 2 */
	// End Line: 848

	/* begin block 3 */
		// Start line: 878
	/* end block 3 */
	// End Line: 879

	/* begin block 4 */
		// Start line: 878
	/* end block 4 */
	// End Line: 879

	/* begin block 5 */
		// Start line: 879
	/* end block 5 */
	// End Line: 880

	/* begin block 6 */
		// Start line: 879
	/* end block 6 */
	// End Line: 880

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Platform_ResetDCTBuffer__Fv(void)

{
  gDctXtraMem = &CF_DVLC;
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

	/* begin block 2 */
		// Start line: 884
	/* end block 2 */
	// End Line: 885

	/* begin block 3 */
		// Start line: 888
	/* end block 3 */
	// End Line: 889

	/* begin block 4 */
		// Start line: 888
	/* end block 4 */
	// End Line: 889

	/* begin block 5 */
		// Start line: 890
	/* end block 5 */
	// End Line: 891

char * Platform_GetDCTBuffer__FiPc(int size,char *string)

{
  char *pcVar1;
  
  pcVar1 = gDctXtraMem;
  gDctXtraMem = gDctXtraMem + size;
  return pcVar1;
}





