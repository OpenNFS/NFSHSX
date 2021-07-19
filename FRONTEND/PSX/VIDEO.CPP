#include "THISDUST.H"
#include "VIDEO.H"


// decompiled code
// original method signature: 
// int /*$ra*/ VIDEO_create__Fiiiii(int width /*$s3*/, int height /*$s4*/, int fps /*$s5*/, int streambuffersize /*$s2*/, int memtype /*stack 16*/)
 // line 62, offset 0x80050cc8
	/* begin block 1 */
		// Start line: 63
		// Start offset: 0x80050CC8
		// Variables:
	// 		struct VIDEOSTRUCT *vid; // $s0
	// 		struct SNDPLAYOPTS playopts; // stack offset -120
	// 		int handle; // $s0
	// 		char fname[60]; // stack offset -96
	/* end block 1 */
	// End offset: 0x80050D50
	// End Line: 77

	/* begin block 2 */
		// Start line: 124
	/* end block 2 */
	// End Line: 125

	/* begin block 3 */
		// Start line: 124
	/* end block 3 */
	// End Line: 125

int VIDEO_create__Fiiiii(int width,int height,int fps,int streambuffersize,int memtype)

{
  uchar *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  short *psVar5;
  undefined4 uVar6;
  int iVar7;
  char acStack96 [64];
  
  Platform_ResetDCTBuffer__Fv();
  sprintf(acStack96,s__sDCT_BIN_800128c8,PTR_801164e8);
  uVar2 = asyncloadfileat(acStack96,(uint)&CF_DVLC);
  while (uVar3 = getasyncreadstatus(uVar2), uVar3 == 0) {
    systemtask(0);
  }
  puVar4 = (undefined4 *)reservememadr(s_Videostruct_800128d4,0x40,memtype);
  blockclear((undefined *)puVar4,0x40);
  *puVar4 = 0x57444956;
  puVar4[1] = width;
  puVar4[2] = height;
  psVar5 = reservememadr(s_streambuffer_800128e0,streambuffersize,memtype);
  *(short **)(puVar4 + 3) = psVar5;
  uVar6 = STREAM_create(2,2,2,(undefined4 *)puVar4[3],streambuffersize);
  puVar4[6] = uVar6;
  STREAM_setfilter((int **)puVar4[6],1,0xffff,(uint)&DAT_00004353,2);
  iVar7 = initmdec(width,height,(int)screenbpp,memtype);
  puVar1 = timerhz;
  puVar4[4] = iVar7;
  uVar2 = fixedmult((int)puVar1 << 0x10,(int)&PTR_000a0000);
  iVar7 = fixeddiv(uVar2,fps);
  puVar4[0xc] = iVar7;
  puVar4[7] = 0;
  return (int)puVar4;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VIDEO_destroy__Fi(int handle /*$s0*/)
 // line 120, offset 0x80050e40
	/* begin block 1 */
		// Start line: 121
		// Start offset: 0x80050E40
	/* end block 1 */
	// End offset: 0x80050E88
	// End Line: 135

	/* begin block 2 */
		// Start line: 237
	/* end block 2 */
	// End Line: 238

	/* begin block 3 */
		// Start line: 237
	/* end block 3 */
	// End Line: 238

	/* begin block 4 */
		// Start line: 237
	/* end block 4 */
	// End Line: 238

void VIDEO_destroy__Fi(int handle)

{
  if (*(int *)handle == 0x57444956) {
    *(undefined4 *)handle = 0;
    restoremdec(*(int *)(handle + 0x10));
    STREAM_destroy(*(int ***)(handle + 0x18));
    purgememadr(*(int *)(handle + 0xc));
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VIDEO_spoolfile__FiPc(int handle /*$s0*/, char *fname /*$a1*/)
 // line 139, offset 0x80050e98
	/* begin block 1 */
		// Start line: 140
		// Start offset: 0x80050E98
	/* end block 1 */
	// End offset: 0x80050EE4
	// End Line: 155

	/* begin block 2 */
		// Start line: 275
	/* end block 2 */
	// End Line: 276

	/* begin block 3 */
		// Start line: 278
	/* end block 3 */
	// End Line: 279

	/* begin block 4 */
		// Start line: 278
	/* end block 4 */
	// End Line: 279

void VIDEO_spoolfile__FiPc(int handle,char *fname)

{
  uint uVar1;
  
  if ((*(int *)handle == 0x57444956) && (*(int *)(handle + 0x1c) == 0)) {
    uVar1 = STREAM_queuefile(*(int ***)(handle + 0x18),fname,0,0);
    *(uint *)(handle + 0x20) = uVar1;
    *(undefined4 *)(handle + 0x1c) = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VIDEO_startplayback__Fi(int handle /*$s0*/)
 // line 158, offset 0x80050ef4
	/* begin block 1 */
		// Start line: 159
		// Start offset: 0x80050EF4
	/* end block 1 */
	// End offset: 0x80050F44
	// End Line: 179

	/* begin block 2 */
		// Start line: 316
	/* end block 2 */
	// End Line: 317

	/* begin block 3 */
		// Start line: 319
	/* end block 3 */
	// End Line: 320

	/* begin block 4 */
		// Start line: 319
	/* end block 4 */
	// End Line: 320

void VIDEO_startplayback__Fi(int handle)

{
  int iVar1;
  
  if (((*(int *)handle == 0x57444956) && (*(int *)(handle + 0x1c) != 0)) &&
     (iVar1 = STREAM_bufferusage(*(int ***)(handle + 0x18)), 20000 < iVar1)) {
    *(undefined4 *)(handle + 0x1c) = 3;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ VIDEO_abortplayback__Fi(int handle /*$s0*/)
 // line 182, offset 0x80050f54
	/* begin block 1 */
		// Start line: 183
		// Start offset: 0x80050F54
	/* end block 1 */
	// End offset: 0x80050F88
	// End Line: 195

	/* begin block 2 */
		// Start line: 367
	/* end block 2 */
	// End Line: 368

	/* begin block 3 */
		// Start line: 370
	/* end block 3 */
	// End Line: 371

	/* begin block 4 */
		// Start line: 370
	/* end block 4 */
	// End Line: 371

void VIDEO_abortplayback__Fi(int handle)

{
  if (*(int *)handle == 0x57444956) {
    STREAM_kill(*(int ***)(handle + 0x18));
    *(undefined4 *)(handle + 0x1c) = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// enum VIDEOSTATE /*$ra*/ VIDEO_state__Fi(int handle /*$a0*/)
 // line 198, offset 0x80050f98
	/* begin block 1 */
		// Start line: 199
		// Start offset: 0x80050F98
		// Variables:
	// 		struct VIDEOSTRUCT *vid; // $s0
	// 		struct SNDREQUESTSTATUS srs; // stack offset -24

		/* begin block 1.1 */
			// Start line: 209
			// Start offset: 0x80050FBC

			/* begin block 1.1.1 */
				// Start line: 210
				// Start offset: 0x80050FCC

				/* begin block 1.1.1.1 */
					// Start line: 211
					// Start offset: 0x80050FCC

					/* begin block 1.1.1.1.1 */
						// Start line: 212
						// Start offset: 0x80050FE4

						/* begin block 1.1.1.1.1.1 */
							// Start line: 220
							// Start offset: 0x80050FE4

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 220
								// Start offset: 0x80050FE4
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80050FE4
							// End Line: 220
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80050FE4
						// End Line: 220
					/* end block 1.1.1.1.1 */
					// End offset: 0x80050FE4
					// End Line: 220
				/* end block 1.1.1.1 */
				// End offset: 0x80050FE4
				// End Line: 220
			/* end block 1.1.1 */
			// End offset: 0x80050FE4
			// End Line: 220
		/* end block 1.1 */
		// End offset: 0x8005102C
		// End Line: 234
	/* end block 1 */
	// End offset: 0x80051030
	// End Line: 248

	/* begin block 2 */
		// Start line: 402
	/* end block 2 */
	// End Line: 403

	/* begin block 3 */
		// Start line: 405
	/* end block 3 */
	// End Line: 406

	/* begin block 4 */
		// Start line: 405
	/* end block 4 */
	// End Line: 406

VIDEOSTATE VIDEO_state__Fi(int handle)

{
  uchar *puVar1;
  VIDEOSTATE VVar2;
  int iVar3;
  
  VVar2 = VIDEOSTATE_IDLE;
  if (*(int *)handle == 0x57444956) {
    if (*(int *)(handle + 0x1c) == 1) {
      iVar3 = STREAM_state(*(int ***)(handle + 0x18));
      puVar1 = ticks;
      if (iVar3 == 2) {
        *(undefined4 *)(handle + 0x1c) = 3;
        *(undefined4 *)(handle + 0x28) = 0;
        *(undefined4 *)(handle + 0x2c) = 0;
        *(int *)(handle + 0x24) = (int)puVar1 * 10;
      }
    }
    else {
      if ((*(int *)(handle + 0x1c) == 3) &&
         (iVar3 = STREAM_state(*(int ***)(handle + 0x18)), iVar3 == 0)) {
        *(undefined4 *)(handle + 0x1c) = 0;
      }
    }
    VVar2 = *(VIDEOSTATE *)(handle + 0x1c);
  }
  return VVar2;
}



// decompiled code
// original method signature: 
// int /*$ra*/ VIDEO_updateframexy__Fiii(int handle /*$a0*/, int x /*$s4*/, int y /*$s5*/)
 // line 257, offset 0x80051040
	/* begin block 1 */
		// Start line: 258
		// Start offset: 0x80051040
		// Variables:
	// 		struct VIDEOSTRUCT *vid; // $s0
	// 		struct STREAMCHUNKHDR *chunk; // $s2
	// 		struct SNDREQUESTSTATUS audiostatus; // stack offset -48
	// 		int currenttime; // $s3
	// 		int dropped; // $s1

		/* begin block 1.1 */
			// Start line: 272
			// Start offset: 0x8005108C

			/* begin block 1.1.1 */
				// Start line: 272
				// Start offset: 0x8005108C
			/* end block 1.1.1 */
			// End offset: 0x8005108C
			// End Line: 272
		/* end block 1.1 */
		// End offset: 0x8005108C
		// End Line: 272
	/* end block 1 */
	// End offset: 0x8005115C
	// End Line: 336

	/* begin block 2 */
		// Start line: 519
	/* end block 2 */
	// End Line: 520

	/* begin block 3 */
		// Start line: 529
	/* end block 3 */
	// End Line: 530

	/* begin block 4 */
		// Start line: 529
	/* end block 4 */
	// End Line: 530

int VIDEO_updateframexy__Fiii(int handle,int x,int y)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  STREAMCHUNKHDR *chunk;
  int iVar4;
  
  if (*(int *)handle == 0x57444956) {
    iVar2 = 0;
    if (*(int *)(handle + 0x1c) == 3) {
      iVar4 = (int)ticks * 10 - *(int *)(handle + 0x24);
      iVar2 = 0;
      if (*(int *)(handle + 0x28) <= iVar4) {
        uVar3 = STREAM_isendofstream(*(int ***)(handle + 0x18));
        iVar2 = 0;
        while (uVar3 == 0) {
          chunk = (STREAMCHUNKHDR *)STREAM_get(*(int ***)(handle + 0x18));
          if (chunk == (STREAMCHUNKHDR *)0x0) {
            return 0;
          }
          videoupdatetime__FP11VIDEOSTRUCT((VIDEOSTRUCT *)handle);
          if (iVar4 < *(int *)(handle + 0x28)) {
            iVar2 = videodecode__FP11VIDEOSTRUCTP14STREAMCHUNKHDRii((VIDEOSTRUCT *)handle,chunk,x,y)
            ;
            bVar1 = false;
            if (iVar2 == 0) goto LAB_80051118;
          }
          else {
LAB_80051118:
            bVar1 = true;
            *(int *)(handle + 0x3c) = *(int *)(handle + 0x3c) + 1;
          }
          STREAM_release(*(int ***)(handle + 0x18),(int *)chunk);
          if (!bVar1) {
            return 1;
          }
          uVar3 = STREAM_isendofstream(*(int ***)(handle + 0x18));
          iVar2 = 1;
        }
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



// decompiled code
// original method signature: 
// void /*$ra*/ videoupdatetime__FP11VIDEOSTRUCT(struct VIDEOSTRUCT *vid /*$a0*/)
 // line 368, offset 0x80051180
	/* begin block 1 */
		// Start line: 369
		// Start offset: 0x80051180
	/* end block 1 */
	// End offset: 0x80051180
	// End Line: 370

	/* begin block 2 */
		// Start line: 733
	/* end block 2 */
	// End Line: 734

	/* begin block 3 */
		// Start line: 736
	/* end block 3 */
	// End Line: 737

	/* begin block 4 */
		// Start line: 736
	/* end block 4 */
	// End Line: 737

	/* begin block 5 */
		// Start line: 737
	/* end block 5 */
	// End Line: 738

	/* begin block 6 */
		// Start line: 737
	/* end block 6 */
	// End Line: 738

void videoupdatetime__FP11VIDEOSTRUCT(VIDEOSTRUCT *vid)

{
  int iVar1;
  
  iVar1 = vid->displaytimefrac + vid->displaytimeincr;
  vid->displaytimefrac = iVar1;
  vid->displaytime = vid->displaytime + (iVar1 >> 0x10);
  vid->displaytimefrac = (uint)*(ushort *)&vid->displaytimefrac;
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ videodecode__FP11VIDEOSTRUCTP14STREAMCHUNKHDRii(struct VIDEOSTRUCT *vid /*$s0*/, struct STREAMCHUNKHDR *chunk /*$a1*/, int x /*$a2*/, int y /*$a3*/)
 // line 375, offset 0x800511b0
	/* begin block 1 */
		// Start line: 376
		// Start offset: 0x800511B0
		// Variables:
	// 		int timeout; // $s1

		/* begin block 1.1 */
			// Start line: 385
			// Start offset: 0x800511D4

			/* begin block 1.1.1 */
				// Start line: 385
				// Start offset: 0x800511D4
			/* end block 1.1.1 */
			// End offset: 0x800511D4
			// End Line: 385
		/* end block 1.1 */
		// End offset: 0x800511D4
		// End Line: 385

		/* begin block 1.2 */
			// Start line: 401
			// Start offset: 0x80051208

			/* begin block 1.2.1 */
				// Start line: 401
				// Start offset: 0x8005121C

				/* begin block 1.2.1.1 */
					// Start line: 401
					// Start offset: 0x8005121C

					/* begin block 1.2.1.1.1 */
						// Start line: 401
						// Start offset: 0x8005121C
					/* end block 1.2.1.1.1 */
					// End offset: 0x8005121C
					// End Line: 401
				/* end block 1.2.1.1 */
				// End offset: 0x8005121C
				// End Line: 401
			/* end block 1.2.1 */
			// End offset: 0x8005121C
			// End Line: 411
		/* end block 1.2 */
		// End offset: 0x8005121C
		// End Line: 411
	/* end block 1 */
	// End offset: 0x80051248
	// End Line: 411

	/* begin block 2 */
		// Start line: 747
	/* end block 2 */
	// End Line: 748

	/* begin block 3 */
		// Start line: 751
	/* end block 3 */
	// End Line: 752

	/* begin block 4 */
		// Start line: 751
	/* end block 4 */
	// End Line: 752

int videodecode__FP11VIDEOSTRUCTP14STREAMCHUNKHDRii
              (VIDEOSTRUCT *vid,STREAMCHUNKHDR *chunk,int x,int y)

{
  int iVar1;
  uchar *puVar2;
  
  if (chunk->type == 0x4443546d) {
    vid->framewidth = (int)*(short *)&chunk[1].size;
    vid->frameheight = (int)*(short *)((int)&chunk[1].size + 2);
    mdec(vid->mdechandle,(char *)(chunk + 1),x,y);
    puVar2 = ticks + (int)timerhz * 4;
    do {
      iVar1 = mdecdone(vid->mdechandle);
      if (iVar1 != 0) {
        return 1;
      }
      systemtask(0);
    } while ((int)ticks <= (int)puVar2);
    mdecreset__Fv();
  }
  return 0;
}





