#include "NFS4.H"
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

/* WARNING: Control flow encountered bad instruction data */

int VIDEO_create__Fiiiii(int width,int height,int fps,int streambuffersize,int memtype)

{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

void VIDEO_destroy__Fi(int handle)

{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

void VIDEO_spoolfile__FiPc(int handle,char *fname)

{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

void VIDEO_startplayback__Fi(int handle)

{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

void VIDEO_abortplayback__Fi(int handle)

{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

VIDEOSTATE VIDEO_state__Fi(int handle)

{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

int VIDEO_updateframexy__Fiii(int handle,int x,int y)

{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

void videoupdatetime__FP11VIDEOSTRUCT(VIDEOSTRUCT *vid)

{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

/* WARNING: Control flow encountered bad instruction data */

int videodecode__FP11VIDEOSTRUCTP14STREAMCHUNKHDRii
              (VIDEOSTRUCT *vid,STREAMCHUNKHDR *chunk,int x,int y)

{
  undefined4 in_v1;
  undefined4 in_t5;
  
  special2(in_v1,in_t5,5,0x13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




