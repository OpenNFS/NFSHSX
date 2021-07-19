#include "THISDUST.H"
#include "AITUNE.H"


// decompiled code
// original method signature: 
// int /*$ra*/ AITune_GetOneWay__Fv()
 // line 103, offset 0x80072e68
	/* begin block 1 */
		// Start line: 104
		// Start offset: 0x80072E68
	/* end block 1 */
	// End offset: 0x80072EB8
	// End Line: 108

	/* begin block 2 */
		// Start line: 206
	/* end block 2 */
	// End Line: 207

	/* begin block 3 */
		// Start line: 206
	/* end block 3 */
	// End Line: 207

	/* begin block 4 */
		// Start line: 207
	/* end block 4 */
	// End Line: 208

	/* begin block 5 */
		// Start line: 207
	/* end block 5 */
	// End Line: 208

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AITune_GetOneWay__Fv(void)

{
  if (0xb < GameSetup_gData.track) {
    return (uint)(BWorldSm_slices[1].laneCount >> 4 == 0);
  }
  return AITune_trackInfo[GameSetup_gData.track].oneWay;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AITune_GetDriveSide__Fv()
 // line 111, offset 0x80072ec0
	/* begin block 1 */
		// Start line: 112
		// Start offset: 0x80072EC0
	/* end block 1 */
	// End offset: 0x80072EF8
	// End Line: 116

	/* begin block 2 */
		// Start line: 220
	/* end block 2 */
	// End Line: 221

	/* begin block 3 */
		// Start line: 224
	/* end block 3 */
	// End Line: 225

	/* begin block 4 */
		// Start line: 224
	/* end block 4 */
	// End Line: 225

	/* begin block 5 */
		// Start line: 225
	/* end block 5 */
	// End Line: 226

	/* begin block 6 */
		// Start line: 225
	/* end block 6 */
	// End Line: 226

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AITune_GetDriveSide__Fv(void)

{
  if (0xb < GameSetup_gData.track) {
    return 1;
  }
  return AITune_trackInfo[GameSetup_gData.track].driveSide;
}



// decompiled code
// original method signature: 
// int /*$ra*/ AITune_GetRoughLapTimes__Fv()
 // line 119, offset 0x80072f00
	/* begin block 1 */
		// Start line: 120
		// Start offset: 0x80072F00
	/* end block 1 */
	// End offset: 0x80072F38
	// End Line: 124

	/* begin block 2 */
		// Start line: 238
	/* end block 2 */
	// End Line: 239

	/* begin block 3 */
		// Start line: 242
	/* end block 3 */
	// End Line: 243

	/* begin block 4 */
		// Start line: 242
	/* end block 4 */
	// End Line: 243

	/* begin block 5 */
		// Start line: 243
	/* end block 5 */
	// End Line: 244

	/* begin block 6 */
		// Start line: 243
	/* end block 6 */
	// End Line: 244

/* WARNING: Unknown calling convention yet parameter storage is locked */

int AITune_GetRoughLapTimes__Fv(void)

{
  if (0xb < GameSetup_gData.track) {
    return 0xbe;
  }
  return AITune_trackInfo[GameSetup_gData.track].roughLapTimeSeconds;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AITune_StartUp1__Fv()
 // line 128, offset 0x80072f40
	/* begin block 1 */
		// Start line: 129
		// Start offset: 0x80072F40
	/* end block 1 */
	// End offset: 0x80072F40
	// End Line: 129

	/* begin block 2 */
		// Start line: 257
	/* end block 2 */
	// End Line: 258

	/* begin block 3 */
		// Start line: 262
	/* end block 3 */
	// End Line: 263

	/* begin block 4 */
		// Start line: 262
	/* end block 4 */
	// End Line: 263

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AITune_StartUp1__Fv(void)

{
  AITune_oneWay = AITune_GetOneWay__Fv();
  AITune_driveSide = AITune_GetDriveSide__Fv();
  AITune_gRoughLapTime = AITune_GetRoughLapTimes__Fv();
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AITune_StartUp2__Fv()
 // line 138, offset 0x80072f78
	/* begin block 1 */
		// Start line: 139
		// Start offset: 0x80072F78
	/* end block 1 */
	// End offset: 0x80072F78
	// End Line: 139

	/* begin block 2 */
		// Start line: 275
	/* end block 2 */
	// End Line: 276

	/* begin block 3 */
		// Start line: 282
	/* end block 3 */
	// End Line: 283

	/* begin block 4 */
		// Start line: 282
	/* end block 4 */
	// End Line: 283

	/* begin block 5 */
		// Start line: 283
	/* end block 5 */
	// End Line: 284

	/* begin block 6 */
		// Start line: 283
	/* end block 6 */
	// End Line: 284

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AITune_StartUp2__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AITune_CleanUp1__Fv()
 // line 142, offset 0x80072f80
	/* begin block 1 */
		// Start line: 143
		// Start offset: 0x80072F80
	/* end block 1 */
	// End offset: 0x80072F80
	// End Line: 143

	/* begin block 2 */
		// Start line: 287
	/* end block 2 */
	// End Line: 288

	/* begin block 3 */
		// Start line: 290
	/* end block 3 */
	// End Line: 291

	/* begin block 4 */
		// Start line: 290
	/* end block 4 */
	// End Line: 291

	/* begin block 5 */
		// Start line: 291
	/* end block 5 */
	// End Line: 292

	/* begin block 6 */
		// Start line: 291
	/* end block 6 */
	// End Line: 292

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AITune_CleanUp1__Fv(void)

{
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AITune_CleanUp2__Fv()
 // line 146, offset 0x80072f88
	/* begin block 1 */
		// Start line: 147
		// Start offset: 0x80072F88
	/* end block 1 */
	// End offset: 0x80072F88
	// End Line: 147

	/* begin block 2 */
		// Start line: 295
	/* end block 2 */
	// End Line: 296

	/* begin block 3 */
		// Start line: 298
	/* end block 3 */
	// End Line: 299

	/* begin block 4 */
		// Start line: 298
	/* end block 4 */
	// End Line: 299

	/* begin block 5 */
		// Start line: 299
	/* end block 5 */
	// End Line: 300

	/* begin block 6 */
		// Start line: 299
	/* end block 6 */
	// End Line: 300

/* WARNING: Unknown calling convention yet parameter storage is locked */

void AITune_CleanUp2__Fv(void)

{
  return;
}





