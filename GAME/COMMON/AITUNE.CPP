#include "NFS4.H"
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

int AITune_GetOneWay__Fv(void)
{
  if (false) {
    return (uint)(bRam0000003d >> 4 == 0);
  }
  return 0;


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

int AITune_GetDriveSide__Fv(void)
{
  if (false) {
    return 1;
  }
  return 1;


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

int AITune_GetRoughLapTimes__Fv(void)
{
  if (false) {
    return 0xbe;
  }
  return 0xaa;


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

void AITune_StartUp1__Fv(void)
{
  iGp000000a4 = AITune_GetOneWay__Fv();
  iGp000000a8 = AITune_GetDriveSide__Fv();
  iGp000000ac = AITune_GetRoughLapTimes__Fv();
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

void AITune_CleanUp2__Fv(void)
{
  return;


}





