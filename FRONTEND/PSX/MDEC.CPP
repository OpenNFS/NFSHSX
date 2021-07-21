#include "THISDUST.H"
#include "MDEC.H"


// decompiled code
// original method signature: 
// int /*$ra*/ initmdec(int width /*$s5*/, int height /*$s3*/, int bpp /*$s4*/, int memtype /*$s7*/)
 // line 92, offset 0x800508c0
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x800508C0
		// Variables:
	// 		struct MDECSTRUCT *mdec; // $s2
	/* end block 1 */
	// End offset: 0x800509E4
	// End Line: 142

	/* begin block 2 */
		// Start line: 184
	/* end block 2 */
	// End Line: 185

	/* begin block 3 */
		// Start line: 184
	/* end block 3 */
	// End Line: 185

int initmdec(int width,int height,int bpp,int memtype)

{
  undefined4 *puVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)reservememadr(s_MDECstruct_800128a8,0x2c,memtype);
  blockclear((undefined *)puVar1,0x2c);
  *puVar1 = 0x4345444d;
  if (gMDECinfo.numhandles == 0) {
    DecDCTReset(0);
    DecDCToutCallback();
  }
  iVar4 = (width + 0xfU & 0xfffffff0) * (height + 0xfU & 0xfffffff0);
  puVar1[1] = width;
  puVar1[2] = height;
  puVar1[3] = bpp;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar4 = bpp * 0x1e0 + (iVar4 >> 8) * 0x300;
  psVar2 = reservememadr(s_MDEC_buffers_800128b4,iVar4,memtype);
  *(short **)(puVar1 + 9) = psVar2;
  blockclear((undefined *)psVar2,iVar4);
  width = width * bpp;
  *(short *)(puVar1 + 7) = (short)bpp;
  puVar1[10] = puVar1[9] + bpp * 0x1e0;
  if (width < 0) {
    width = width + 0xf;
  }
  sVar3 = (short)height;
  *(short *)((int)puVar1 + 0x16) = sVar3;
  *(short *)(puVar1 + 5) = (short)(width >> 4);
  *(short *)((int)puVar1 + 0x1e) = sVar3;
  puVar1[8] = (int)((int)*(short *)(puVar1 + 7) * (int)sVar3 +
                   ((uint)((int)*(short *)(puVar1 + 7) * (int)sVar3) >> 0x1f)) >> 1;
  gMDECinfo.numhandles = gMDECinfo.numhandles + 1;
  return (int)puVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ restoremdec(int handle /*$a0*/)
 // line 180, offset 0x80050a54
	/* begin block 1 */
		// Start line: 181
		// Start offset: 0x80050A54
		// Variables:
	// 		struct MDECSTRUCT *mdec; // $s0
	/* end block 1 */
	// End offset: 0x80050A80
	// End Line: 204

	/* begin block 2 */
		// Start line: 357
	/* end block 2 */
	// End Line: 358

	/* begin block 3 */
		// Start line: 392
	/* end block 3 */
	// End Line: 393

	/* begin block 4 */
		// Start line: 392
	/* end block 4 */
	// End Line: 393

	/* begin block 5 */
		// Start line: 409
	/* end block 5 */
	// End Line: 410

void restoremdec(int handle)

{
  gMDECinfo.numhandles = gMDECinfo.numhandles + -1;
  if (gMDECinfo.numhandles == 0) {
    DecDCToutCallback();
  }
  purgememadr(*(int *)(handle + 0x24));
  *(undefined4 *)handle = 0;
  purgememadr(handle);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ mdecreset__Fv()
 // line 239, offset 0x80050aa8
	/* begin block 1 */
		// Start line: 240
		// Start offset: 0x80050AA8
	/* end block 1 */
	// End offset: 0x80050AD8
	// End Line: 246

	/* begin block 2 */
		// Start line: 494
	/* end block 2 */
	// End Line: 495

	/* begin block 3 */
		// Start line: 528
	/* end block 3 */
	// End Line: 529

	/* begin block 4 */
		// Start line: 528
	/* end block 4 */
	// End Line: 529

	/* begin block 5 */
		// Start line: 529
	/* end block 5 */
	// End Line: 530

	/* begin block 6 */
		// Start line: 529
	/* end block 6 */
	// End Line: 530

/* WARNING: Unknown calling convention yet parameter storage is locked */

void mdecreset__Fv(void)

{
  if (gMDECinfo.numhandles != 0) {
    DecDCTReset(0);
    DecDCToutCallback();
  }
  gMDECinfo.hDecode = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ mdec(int handle /*$s4*/, char *src /*$s7*/, int x /*$s5*/, int y /*$s6*/)
 // line 295, offset 0x80050aec
	/* begin block 1 */
		// Start line: 296
		// Start offset: 0x80050AEC
		// Variables:
	// 		int timeout; // $s1
	// 		struct MDECSTRUCT *mdec; // $s0

		/* begin block 1.1 */
			// Start line: 296
			// Start offset: 0x80050AEC

			/* begin block 1.1.1 */
				// Start line: 296
				// Start offset: 0x80050AEC
			/* end block 1.1.1 */
			// End offset: 0x80050AEC
			// End Line: 296
		/* end block 1.1 */
		// End offset: 0x80050AEC
		// End Line: 296

		/* begin block 1.2 */
			// Start line: 319
			// Start offset: 0x80050B4C

			/* begin block 1.2.1 */
				// Start line: 321
				// Start offset: 0x80050B5C

				/* begin block 1.2.1.1 */
					// Start line: 321
					// Start offset: 0x80050B5C

					/* begin block 1.2.1.1.1 */
						// Start line: 321
						// Start offset: 0x80050B5C
					/* end block 1.2.1.1.1 */
					// End offset: 0x80050B5C
					// End Line: 321
				/* end block 1.2.1.1 */
				// End offset: 0x80050B5C
				// End Line: 321
			/* end block 1.2.1 */
			// End offset: 0x80050B78
			// End Line: 324
		/* end block 1.2 */
		// End offset: 0x80050B78
		// End Line: 324
	/* end block 1 */
	// End offset: 0x80050BBC
	// End Line: 336

	/* begin block 2 */
		// Start line: 591
	/* end block 2 */
	// End Line: 592

	/* begin block 3 */
		// Start line: 641
	/* end block 3 */
	// End Line: 642

	/* begin block 4 */
		// Start line: 641
	/* end block 4 */
	// End Line: 642

void mdec(int handle,char *src,int x,int y)

{
  uint uVar1;
  uchar *puVar2;
  
  puVar2 = ticks + (int)timerhz * 4;
  while (gMDECinfo.hDecode != 0) {
    systemtask(0);
    if ((int)puVar2 < (int)ticks) {
      mdecreset__Fv();
    }
  }
  gMDECinfo.hDecode = handle;
  DecDCTvlc((uint *)(src + 8),*(uint **)(handle + 0x28));
  uVar1 = 2;
  *(undefined2 *)(handle + 0x18) = (short)x;
  *(undefined2 *)(handle + 0x10) = (short)x;
  *(undefined2 *)(handle + 0x1a) = (short)y;
  *(undefined2 *)(handle + 0x12) = (short)y;
  if (*(int *)(handle + 0xc) == 0x18) {
    uVar1 = 3;
  }
  DecDCTin(*(uint **)(handle + 0x28),uVar1);
  DecDCTout(*(undefined4 *)(handle + 0x24),*(uint *)(handle + 0x20));
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ mdecdone(int handle /*$a0*/)
 // line 381, offset 0x80050c04
	/* begin block 1 */
		// Start line: 382
		// Start offset: 0x80050C04
	/* end block 1 */
	// End offset: 0x80050C04
	// End Line: 383

	/* begin block 2 */
		// Start line: 846
	/* end block 2 */
	// End Line: 847

	/* begin block 3 */
		// Start line: 889
	/* end block 3 */
	// End Line: 890

	/* begin block 4 */
		// Start line: 889
	/* end block 4 */
	// End Line: 890

	/* begin block 5 */
		// Start line: 890
	/* end block 5 */
	// End Line: 891

	/* begin block 6 */
		// Start line: 890
	/* end block 6 */
	// End Line: 891

int mdecdone(int handle)

{
  return (uint)(gMDECinfo.hDecode != handle);
}



// decompiled code
// original method signature: 
// void /*$ra*/ MDECCompleteHandler__Fv()
 // line 388, offset 0x80050c20
	/* begin block 1 */
		// Start line: 389
		// Start offset: 0x80050C20
		// Variables:
	// 		struct MDECSTRUCT *mdec; // $s0
	/* end block 1 */
	// End offset: 0x80050CB0
	// End Line: 416

	/* begin block 2 */
		// Start line: 897
	/* end block 2 */
	// End Line: 898

	/* begin block 3 */
		// Start line: 903
	/* end block 3 */
	// End Line: 904

	/* begin block 4 */
		// Start line: 903
	/* end block 4 */
	// End Line: 904

/* WARNING: Unknown calling convention yet parameter storage is locked */

void MDECCompleteHandler__Fv(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  iVar1 = gMDECinfo.hDecode;
  LoadImage((short *)(gMDECinfo.hDecode + 0x18),*(undefined4 *)(gMDECinfo.hDecode + 0x24));
  iVar3 = DrawSync(0);
  if (iVar3 != 0) {
    g_mdecdrawsyncfailed = 1;
  }
  sVar2 = *(short *)(iVar1 + 0x18) + *(short *)(iVar1 + 0xc);
  *(short *)(iVar1 + 0x18) = sVar2;
  if ((int)sVar2 < (int)*(short *)(iVar1 + 0x10) + (int)*(short *)(iVar1 + 0x14)) {
    DecDCTout(*(undefined4 *)(iVar1 + 0x24),*(uint *)(iVar1 + 0x20));
  }
  else {
    gMDECinfo.hDecode = 0;
  }
  return;
}





