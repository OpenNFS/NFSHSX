#include "NFS4.H"
#include "COLLIDE.H"

// decompiled code
// original method signature: 
// int /*$ra*/ CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(int X_DIR /*$t5*/, int Y_DIR /*$a1*/, int Z_DIR /*$a2*/)
 // line 100, offset 0x8008ba70
	/* begin block 1 */
		// Start line: 101
		// Start offset: 0x8008BA70
	/* end block 1 */
	// End offset: 0x8008BEE8
	// End Line: 128

int CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(int X_DIR,int Y_DIR,int Z_DIR)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iGp0000184c = X_DIR * _scaledBasisDots + Y_DIR * _DAT_8013e03c + Z_DIR * _DAT_8013e040 +
                _basisDotRelative;
  iGp00001850 = X_DIR * _DAT_8013e044 + Y_DIR * _DAT_8013e048 + Z_DIR * _DAT_8013e04c +
                _DAT_8013e09c;
  iGp00001854 = X_DIR * _DAT_8013e050 + Y_DIR * _DAT_8013e054 + Z_DIR * _DAT_8013e058 +
                _DAT_8013e0a0;
  if ((((iGp00001854 <= *(int *)(iGp000002f0 + 0x13c)) &&
       (-*(int *)(iGp000002f0 + 0x13c) <= iGp00001854)) &&
      (iGp0000184c <= *(int *)(iGp000002f0 + 0x134))) &&
     (((-*(int *)(iGp000002f0 + 0x134) <= iGp0000184c &&
       (iGp00001850 <= *(int *)(iGp000002f0 + 0x138))) &&
      (-*(int *)(iGp000002f0 + 0x138) <= iGp00001850)))) {
    *piGp000002f8 =
         X_DIR * *(int *)(iGp000002f4 + 0xf0) + Y_DIR * *(int *)(iGp000002f4 + 0xfc) +
         Z_DIR * *(int *)(iGp000002f4 + 0x108);
    piGp000002f8[1] =
         X_DIR * *(int *)(iGp000002f4 + 0xf4) + Y_DIR * *(int *)(iGp000002f4 + 0x100) +
         Z_DIR * *(int *)(iGp000002f4 + 0x10c);
    piGp000002f8[2] =
         X_DIR * *(int *)(iGp000002f4 + 0xf8) + Y_DIR * *(int *)(iGp000002f4 + 0x104) +
         Z_DIR * *(int *)(iGp000002f4 + 0x110);
    iVar4 = *(int *)(iGp000002f4 + 0xf0);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar1 = *(int *)(iGp000002f4 + 0x134);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar5 = *(int *)(iGp000002f4 + 0xfc);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar2 = *(int *)(iGp000002f4 + 0x138);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar6 = *(int *)(iGp000002f4 + 0x108);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar3 = *(int *)(iGp000002f4 + 0x13c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *piGp000002fc =
         *(int *)(iGp000002f4 + 0xa0) + X_DIR * (iVar4 >> 8) * (iVar1 >> 8) +
         Y_DIR * (iVar5 >> 8) * (iVar2 >> 8) + Z_DIR * (iVar6 >> 8) * (iVar3 >> 8);
    iVar4 = *(int *)(iGp000002f4 + 0xf4);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar1 = *(int *)(iGp000002f4 + 0x134);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar5 = *(int *)(iGp000002f4 + 0x100);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar2 = *(int *)(iGp000002f4 + 0x138);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar6 = *(int *)(iGp000002f4 + 0x10c);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar3 = *(int *)(iGp000002f4 + 0x13c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    piGp000002fc[1] =
         *(int *)(iGp000002f4 + 0xa4) + X_DIR * (iVar4 >> 8) * (iVar1 >> 8) +
         Y_DIR * (iVar5 >> 8) * (iVar2 >> 8) + Z_DIR * (iVar6 >> 8) * (iVar3 >> 8);
    iVar4 = *(int *)(iGp000002f4 + 0xf8);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar1 = *(int *)(iGp000002f4 + 0x134);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar5 = *(int *)(iGp000002f4 + 0x104);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar2 = *(int *)(iGp000002f4 + 0x138);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar6 = *(int *)(iGp000002f4 + 0x110);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar3 = *(int *)(iGp000002f4 + 0x13c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    piGp000002fc[2] =
         *(int *)(iGp000002f4 + 0xa8) + X_DIR * (iVar4 >> 8) * (iVar1 >> 8) +
         Y_DIR * (iVar5 >> 8) * (iVar2 >> 8) + Z_DIR * (iVar6 >> 8) * (iVar3 >> 8);
    return 1;
  }
  return 0;


}




// decompiled code
// original method signature: 
// int /*$ra*/ CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(int X_DIR /*$t5*/, int Y_DIR /*$a1*/, int Z_DIR /*$a2*/)
 // line 131, offset 0x8008bef0
	/* begin block 1 */
		// Start line: 132
		// Start offset: 0x8008BEF0
	/* end block 1 */
	// End offset: 0x8008C374
	// End Line: 158

int CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(int X_DIR,int Y_DIR,int Z_DIR)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iGp0000184c = (X_DIR * _scaledBasisDotsOther + Y_DIR * _DAT_8013e074 + Z_DIR * _DAT_8013e080) -
                _DAT_8013e0a4;
  iGp00001850 = (X_DIR * _DAT_8013e06c + Y_DIR * _DAT_8013e078 + Z_DIR * _DAT_8013e084) -
                _DAT_8013e0a8;
  iGp00001854 = (X_DIR * _DAT_8013e070 + Y_DIR * _DAT_8013e07c + Z_DIR * _DAT_8013e088) -
                _DAT_8013e0ac;
  if ((((iGp00001854 <= *(int *)(iGp000002f4 + 0x13c)) &&
       (-*(int *)(iGp000002f4 + 0x13c) <= iGp00001854)) &&
      (iGp0000184c <= *(int *)(iGp000002f4 + 0x134))) &&
     (((-*(int *)(iGp000002f4 + 0x134) <= iGp0000184c &&
       (iGp00001850 <= *(int *)(iGp000002f4 + 0x138))) &&
      (-*(int *)(iGp000002f4 + 0x138) <= iGp00001850)))) {
    *piGp000002f8 =
         -(X_DIR * *(int *)(iGp000002f0 + 0xf0) + Y_DIR * *(int *)(iGp000002f0 + 0xfc) +
          Z_DIR * *(int *)(iGp000002f0 + 0x108));
    piGp000002f8[1] =
         -(X_DIR * *(int *)(iGp000002f0 + 0xf4) + Y_DIR * *(int *)(iGp000002f0 + 0x100) +
          Z_DIR * *(int *)(iGp000002f0 + 0x10c));
    piGp000002f8[2] =
         -(X_DIR * *(int *)(iGp000002f0 + 0xf8) + Y_DIR * *(int *)(iGp000002f0 + 0x104) +
          Z_DIR * *(int *)(iGp000002f0 + 0x110));
    iVar4 = *(int *)(iGp000002f0 + 0xf0);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar1 = *(int *)(iGp000002f0 + 0x134);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar5 = *(int *)(iGp000002f0 + 0xfc);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar2 = *(int *)(iGp000002f0 + 0x138);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar6 = *(int *)(iGp000002f0 + 0x108);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar3 = *(int *)(iGp000002f0 + 0x13c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *piGp000002fc =
         *(int *)(iGp000002f0 + 0xa0) + X_DIR * (iVar4 >> 8) * (iVar1 >> 8) +
         Y_DIR * (iVar5 >> 8) * (iVar2 >> 8) + Z_DIR * (iVar6 >> 8) * (iVar3 >> 8);
    iVar4 = *(int *)(iGp000002f0 + 0xf4);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar1 = *(int *)(iGp000002f0 + 0x134);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar5 = *(int *)(iGp000002f0 + 0x100);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar2 = *(int *)(iGp000002f0 + 0x138);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar6 = *(int *)(iGp000002f0 + 0x10c);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar3 = *(int *)(iGp000002f0 + 0x13c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    piGp000002fc[1] =
         *(int *)(iGp000002f0 + 0xa4) + X_DIR * (iVar4 >> 8) * (iVar1 >> 8) +
         Y_DIR * (iVar5 >> 8) * (iVar2 >> 8) + Z_DIR * (iVar6 >> 8) * (iVar3 >> 8);
    iVar4 = *(int *)(iGp000002f0 + 0xf8);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar1 = *(int *)(iGp000002f0 + 0x134);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar5 = *(int *)(iGp000002f0 + 0x104);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar2 = *(int *)(iGp000002f0 + 0x138);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar6 = *(int *)(iGp000002f0 + 0x110);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar3 = *(int *)(iGp000002f0 + 0x13c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    piGp000002fc[2] =
         *(int *)(iGp000002f0 + 0xa8) + X_DIR * (iVar4 >> 8) * (iVar1 >> 8) +
         Y_DIR * (iVar5 >> 8) * (iVar2 >> 8) + Z_DIR * (iVar6 >> 8) * (iVar3 >> 8);
    return 1;
  }
  return 0;


}




// decompiled code
// original method signature: 
// int /*$ra*/ CHECK_VERTEX_WITH_DIRS__Fiii(int X_DIR /*$t5*/, int Y_DIR /*$a1*/, int Z_DIR /*$a2*/)
 // line 161, offset 0x8008c37c
	/* begin block 1 */
		// Start line: 162
		// Start offset: 0x8008C37C
	/* end block 1 */
	// End offset: 0x8008C73C
	// End Line: 183

int CHECK_VERTEX_WITH_DIRS__Fiii(int X_DIR,int Y_DIR,int Z_DIR)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  xRange = X_DIR * _scaledBasisDots + Y_DIR * _DAT_8013e03c + Z_DIR * _DAT_8013e040 +
           _basisDotRelative;
  yRange = X_DIR * _DAT_8013e044 + Y_DIR * _DAT_8013e048 + Z_DIR * _DAT_8013e04c + _DAT_8013e09c;
  zRange = X_DIR * _DAT_8013e050 + Y_DIR * _DAT_8013e054 + Z_DIR * _DAT_8013e058 + _DAT_8013e0a0;
  if ((((zRange <= iRam0000013c) && (-iRam0000013c <= zRange)) && (xRange <= iRam00000134)) &&
     (((-iRam00000134 <= xRange && (yRange <= iRam00000138)) && (-iRam00000138 <= yRange)))) {
    iVar10 = iRam000000f0;
    if (iRam000000f0 < 0) {
      iVar10 = iRam000000f0 + 0xff;
    }
    iVar1 = iRam00000134;
    if (iRam00000134 < 0) {
      iVar1 = iRam00000134 + 0xff;
    }
    iVar11 = iRam000000fc;
    if (iRam000000fc < 0) {
      iVar11 = iRam000000fc + 0xff;
    }
    iVar2 = iRam00000138;
    if (iRam00000138 < 0) {
      iVar2 = iRam00000138 + 0xff;
    }
    iVar12 = iRam00000108;
    if (iRam00000108 < 0) {
      iVar12 = iRam00000108 + 0xff;
    }
    iVar3 = iRam0000013c;
    if (iRam0000013c < 0) {
      iVar3 = iRam0000013c + 0xff;
    }
    iVar13 = iRam000000f4;
    if (iRam000000f4 < 0) {
      iVar13 = iRam000000f4 + 0xff;
    }
    iVar4 = iRam00000134;
    if (iRam00000134 < 0) {
      iVar4 = iRam00000134 + 0xff;
    }
    iVar14 = iRam00000100;
    if (iRam00000100 < 0) {
      iVar14 = iRam00000100 + 0xff;
    }
    iVar5 = iRam00000138;
    if (iRam00000138 < 0) {
      iVar5 = iRam00000138 + 0xff;
    }
    iVar15 = iRam0000010c;
    if (iRam0000010c < 0) {
      iVar15 = iRam0000010c + 0xff;
    }
    iVar6 = iRam0000013c;
    if (iRam0000013c < 0) {
      iVar6 = iRam0000013c + 0xff;
    }
    iVar16 = iRam000000f8;
    if (iRam000000f8 < 0) {
      iVar16 = iRam000000f8 + 0xff;
    }
    iVar7 = iRam00000134;
    if (iRam00000134 < 0) {
      iVar7 = iRam00000134 + 0xff;
    }
    iVar17 = iRam00000104;
    if (iRam00000104 < 0) {
      iVar17 = iRam00000104 + 0xff;
    }
    iVar8 = iRam00000138;
    if (iRam00000138 < 0) {
      iVar8 = iRam00000138 + 0xff;
    }
    iVar18 = iRam00000110;
    if (iRam00000110 < 0) {
      iVar18 = iRam00000110 + 0xff;
    }
    iVar9 = iRam0000013c;
    if (iRam0000013c < 0) {
      iVar9 = iRam0000013c + 0xff;
    }
    __front_dtors_size =
         _LAB_000000a0 + X_DIR * (iVar10 >> 8) * (iVar1 >> 8) + Y_DIR * (iVar11 >> 8) * (iVar2 >> 8)
         + Z_DIR * (iVar12 >> 8) * (iVar3 >> 8);
    iRam00000004 = iRam000000a4 + X_DIR * (iVar13 >> 8) * (iVar4 >> 8) +
                   Y_DIR * (iVar14 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar15 >> 8) * (iVar6 >> 8);
    iRam00000008 = iRam000000a8 + X_DIR * (iVar16 >> 8) * (iVar7 >> 8) +
                   Y_DIR * (iVar17 >> 8) * (iVar8 >> 8) + Z_DIR * (iVar18 >> 8) * (iVar9 >> 8);
    return 1;
  }
  return 0;


}




// decompiled code
// original method signature: 
// int /*$ra*/ CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(int X_DIR /*$t5*/, int Y_DIR /*$a1*/, int Z_DIR /*$a2*/)
 // line 187, offset 0x8008c744
	/* begin block 1 */
		// Start line: 188
		// Start offset: 0x8008C744
	/* end block 1 */
	// End offset: 0x8008CB04
	// End Line: 210

int CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(int X_DIR,int Y_DIR,int Z_DIR)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  xRange = (X_DIR * _scaledBasisDotsOther + Y_DIR * _DAT_8013e074 + Z_DIR * _DAT_8013e080) -
           _DAT_8013e0a4;
  yRange = (X_DIR * _DAT_8013e06c + Y_DIR * _DAT_8013e078 + Z_DIR * _DAT_8013e084) - _DAT_8013e0a8;
  zRange = (X_DIR * _DAT_8013e070 + Y_DIR * _DAT_8013e07c + Z_DIR * _DAT_8013e088) - _DAT_8013e0ac;
  if ((((zRange <= iRam0000013c) && (-iRam0000013c <= zRange)) && (xRange <= iRam00000134)) &&
     (((-iRam00000134 <= xRange && (yRange <= iRam00000138)) && (-iRam00000138 <= yRange)))) {
    iVar10 = iRam000000f0;
    if (iRam000000f0 < 0) {
      iVar10 = iRam000000f0 + 0xff;
    }
    iVar1 = iRam00000134;
    if (iRam00000134 < 0) {
      iVar1 = iRam00000134 + 0xff;
    }
    iVar11 = iRam000000fc;
    if (iRam000000fc < 0) {
      iVar11 = iRam000000fc + 0xff;
    }
    iVar2 = iRam00000138;
    if (iRam00000138 < 0) {
      iVar2 = iRam00000138 + 0xff;
    }
    iVar12 = iRam00000108;
    if (iRam00000108 < 0) {
      iVar12 = iRam00000108 + 0xff;
    }
    iVar3 = iRam0000013c;
    if (iRam0000013c < 0) {
      iVar3 = iRam0000013c + 0xff;
    }
    iVar13 = iRam000000f4;
    if (iRam000000f4 < 0) {
      iVar13 = iRam000000f4 + 0xff;
    }
    iVar4 = iRam00000134;
    if (iRam00000134 < 0) {
      iVar4 = iRam00000134 + 0xff;
    }
    iVar14 = iRam00000100;
    if (iRam00000100 < 0) {
      iVar14 = iRam00000100 + 0xff;
    }
    iVar5 = iRam00000138;
    if (iRam00000138 < 0) {
      iVar5 = iRam00000138 + 0xff;
    }
    iVar15 = iRam0000010c;
    if (iRam0000010c < 0) {
      iVar15 = iRam0000010c + 0xff;
    }
    iVar6 = iRam0000013c;
    if (iRam0000013c < 0) {
      iVar6 = iRam0000013c + 0xff;
    }
    iVar16 = iRam000000f8;
    if (iRam000000f8 < 0) {
      iVar16 = iRam000000f8 + 0xff;
    }
    iVar7 = iRam00000134;
    if (iRam00000134 < 0) {
      iVar7 = iRam00000134 + 0xff;
    }
    iVar17 = iRam00000104;
    if (iRam00000104 < 0) {
      iVar17 = iRam00000104 + 0xff;
    }
    iVar8 = iRam00000138;
    if (iRam00000138 < 0) {
      iVar8 = iRam00000138 + 0xff;
    }
    iVar18 = iRam00000110;
    if (iRam00000110 < 0) {
      iVar18 = iRam00000110 + 0xff;
    }
    iVar9 = iRam0000013c;
    if (iRam0000013c < 0) {
      iVar9 = iRam0000013c + 0xff;
    }
    __front_dtors_size =
         _LAB_000000a0 + X_DIR * (iVar10 >> 8) * (iVar1 >> 8) + Y_DIR * (iVar11 >> 8) * (iVar2 >> 8)
         + Z_DIR * (iVar12 >> 8) * (iVar3 >> 8);
    iRam00000004 = iRam000000a4 + X_DIR * (iVar13 >> 8) * (iVar4 >> 8) +
                   Y_DIR * (iVar14 >> 8) * (iVar5 >> 8) + Z_DIR * (iVar15 >> 8) * (iVar6 >> 8);
    iRam00000008 = iRam000000a8 + X_DIR * (iVar16 >> 8) * (iVar7 >> 8) +
                   Y_DIR * (iVar17 >> 8) * (iVar8 >> 8) + Z_DIR * (iVar18 >> 8) * (iVar9 >> 8);
    return 1;
  }
  return 0;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Collide_DoObjectFixedObjectCollision__FP13BO_tNewtonObjP8coorddefN21(struct BO_tNewtonObj *o /*$s2*/, struct coorddef *p /*$s3*/, struct coorddef *v /*$a2*/, struct coorddef *n /*$a3*/)
 // line 230, offset 0x8008cb0c
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x8008CB0C
		// Variables:
	// 		struct coorddef normal; // stack offset -176
	// 		int impulse; // $s3
	// 		struct coorddef deltaV; // stack offset -160
	// 		struct coorddef impulseV; // stack offset -144
	// 		int temp0; // $s4
	// 		int temp1; // $s1
	// 		int temp2; // $s0
	// 		int temp3; // $a1
	// 		struct coorddef r; // stack offset -128
	// 		struct coorddef RCrossN; // stack offset -112
	// 		int velocityLength; // $s5
	// 		struct coorddef velocity; // stack offset -96

		/* begin block 1.1 */
			// Start line: 250
			// Start offset: 0x8008CD84
			// Variables:
		// 		int frictionalImpulse; // $s0
		// 		struct coorddef deltaVFromFriction; // stack offset -80
		// 		struct coorddef temp; // stack offset -64
		// 		int frictionalImpulseOverMoment; // $s1
		// 		int deltaSpeedInFrictionDirection; // $a1

			/* begin block 1.1.1 */
				// Start line: 250
				// Start offset: 0x8008CD84

				/* begin block 1.1.1.1 */
					// Start line: 276
					// Start offset: 0x8008CE38
					// Variables:
				// 		int scale; // $v1
				// 		int lengthInverse; // $s0
				/* end block 1.1.1.1 */
				// End offset: 0x8008CFE8
				// End Line: 304
			/* end block 1.1.1 */
			// End offset: 0x8008CFE8
			// End Line: 304

			/* begin block 1.1.2 */
				// Start line: 326
				// Start offset: 0x8008CFE8

				/* begin block 1.1.2.1 */
					// Start line: 327
					// Start offset: 0x8008D00C
					// Variables:
				// 		struct coorddef upVec; // stack offset -48
				// 		int dotx; // $a3
				// 		int doty; // $a1
				// 		int dotz; // $v1
				/* end block 1.1.2.1 */
				// End offset: 0x8008D204
				// End Line: 338
			/* end block 1.1.2 */
			// End offset: 0x8008D204
			// End Line: 338
		/* end block 1.1 */
		// End offset: 0x8008D558
		// End Line: 365
	/* end block 1 */
	// End offset: 0x8008D890
	// End Line: 390

void Collide_DoObjectFixedObjectCollision__FP13BO_tNewtonObjP8coorddefN21( (BO_tNewtonObj *o,coorddef *p,coorddef *v,coorddef *n)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  coorddef local_70;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_60 = v->x;
  local_5c = v->y;
  local_58 = v->z;
  iVar15 = n->x;
  iVar16 = n->y;
  iVar19 = n->z;
  uVar18 = 0;
  iVar9 = iVar15;
  if (iVar15 < 0) {
    iVar9 = iVar15 + 0xff;
  }
  iVar1 = (o->linearVel).x;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar10 = iVar16;
  if (iVar16 < 0) {
    iVar10 = iVar16 + 0xff;
  }
  iVar2 = (o->linearVel).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar3 = iVar19;
  if (iVar19 < 0) {
    iVar3 = iVar19 + 0xff;
  }
  iVar11 = (o->linearVel).z;
  iVar3 = iVar3 >> 8;
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar14 = p->x - (o->position).x;
  iVar12 = p->y - (o->position).y;
  iVar13 = p->z - (o->position).z;
  iVar9 = (iVar9 >> 8) * (iVar1 >> 8) + (iVar10 >> 8) * (iVar2 >> 8) + iVar3 * (iVar11 >> 8);
  iVar1 = iVar12;
  if (iVar12 < 0) {
    iVar1 = iVar12 + 0xff;
  }
  iVar2 = iVar13;
  if (iVar13 < 0) {
    iVar2 = iVar13 + 0xff;
  }
  local_70.x = (iVar1 >> 8) * iVar3 - (iVar2 >> 8) * (iVar10 >> 8);
  iVar1 = iVar15;
  if (iVar15 < 0) {
    iVar1 = iVar15 + 0xff;
  }
  iVar10 = iVar14;
  if (iVar14 < 0) {
    iVar10 = iVar14 + 0xff;
  }
  local_70.y = (iVar2 >> 8) * (iVar1 >> 8) - (iVar10 >> 8) * iVar3;
  iVar2 = iVar16;
  if (iVar16 < 0) {
    iVar2 = iVar16 + 0xff;
  }
  iVar3 = iVar12;
  if (iVar12 < 0) {
    iVar3 = iVar12 + 0xff;
  }
  local_70.z = (iVar10 >> 8) * (iVar2 >> 8) - (iVar3 >> 8) * (iVar1 >> 8);
  iVar1 = (o->angularVel).x;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  iVar10 = local_70.x;
  if (local_70.x < 0) {
    iVar10 = local_70.x + 0xff;
  }
  iVar2 = (o->angularVel).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar3 = local_70.y;
  if (local_70.y < 0) {
    iVar3 = local_70.y + 0xff;
  }
  iVar11 = (o->angularVel).z;
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  iVar4 = local_70.z;
  if (local_70.z < 0) {
    iVar4 = local_70.z + 0xff;
  }
  iVar17 = o->massInv;
  if (iVar17 < 0) {
    iVar17 = iVar17 + 3;
  }
  iVar5 = Math_VectorLength2__FP8coorddef(&local_70);
  uVar6 = fixedmult(iVar5,o->moInertiaInv << 1);
  uVar7 = fixeddiv(-(iVar9 + (iVar1 >> 8) * (iVar10 >> 8) + (iVar2 >> 8) * (iVar3 >> 8) +
                             (iVar11 >> 8) * (iVar4 >> 8)),
                   (iVar17 >> 2) + ((int)((uVar6 >> 0x1f) + uVar6) >> 1));
  iVar1 = fixedmult(uVar7,0x6666);
  if (iVar9 < 0) {
    iVar9 = -iVar9;
  }
  (o->collision).impulse = iVar9 << 2;
  uVar6 = o->driveSurfaceType;
  (o->collision).otherObj = (BO_tNewtonObj *)0x0;
  (o->collision).sfxType = uVar6 | 0x30000;
  iVar9 = p->y;
  iVar10 = p->z;
  (o->collision).collisionPoint.x = p->x;
  (o->collision).collisionPoint.y = iVar9;
  (o->collision).collisionPoint.z = iVar10;
  if (((local_60 != 0) || (local_5c != 0)) || (local_58 != 0)) {
    iVar9 = local_60;
    if (local_60 < 0) {
      iVar9 = local_60 + 0xff;
    }
    iVar10 = iVar15;
    if (iVar15 < 0) {
      iVar10 = iVar15 + 0xff;
    }
    iVar2 = local_5c;
    if (local_5c < 0) {
      iVar2 = local_5c + 0xff;
    }
    iVar3 = iVar16;
    if (iVar16 < 0) {
      iVar3 = iVar16 + 0xff;
    }
    iVar11 = local_58;
    if (local_58 < 0) {
      iVar11 = local_58 + 0xff;
    }
    iVar4 = iVar19;
    if (iVar19 < 0) {
      iVar4 = iVar19 + 0xff;
    }
    iVar9 = (iVar9 >> 8) * (iVar10 >> 8) + (iVar2 >> 8) * (iVar3 >> 8) +
            (iVar11 >> 8) * (iVar4 >> 8);
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar9 = iVar9 >> 8;
    local_60 = local_60 - iVar9 * (iVar10 >> 8);
    local_5c = local_5c - iVar9 * (iVar3 >> 8);
    local_58 = local_58 - iVar9 * (iVar4 >> 8);
    iVar9 = local_60;
    if (local_60 < 0) {
      iVar9 = local_60 + 0xff;
    }
    iVar10 = local_5c;
    if (local_5c < 0) {
      iVar10 = local_5c + 0xff;
    }
    iVar2 = local_58;
    if (local_58 < 0) {
      iVar2 = local_58 + 0xff;
    }
    uVar18 = fixedsqrt((iVar9 >> 8) * (iVar9 >> 8) + (iVar10 >> 8) * (iVar10 >> 8) +
                       (iVar2 >> 8) * (iVar2 >> 8));
    if ((int)(uVar18 + (uVar18 >> 0x1f)) >> 1 == 0) {
      local_60 = fixedmult(0xffff0000,local_60);
      local_5c = fixedmult(0xffff0000,local_5c);
      iVar9 = -0x10000;
    }
    else {
      iVar9 = fixeddiv(0x8000);
      iVar9 = -iVar9;
      local_60 = fixedmult(iVar9,local_60);
      local_5c = fixedmult(iVar9,local_5c);
    }
    local_58 = fixedmult(iVar9,local_58);
  }
  iVar9 = o->speedXZ;
  if (iVar9 < 0) {
    iVar9 = -iVar9;
  }
  if (iVar9 < 0xa0000) {
    local_30 = 0;
    local_2c = 0x10000;
    local_28 = 0;
    iVar9 = 0x10000;
    if (false) {
      iVar9 = 0x100ff;
    }
    iVar10 = (o->orientMat).m[1];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar10 = (iVar9 >> 8) * (iVar10 >> 8);
    iVar2 = (o->orientMat).m[4];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar3 = 0x10000;
    if (false) {
      iVar3 = 0x100ff;
    }
    iVar11 = (o->orientMat).m[7];
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    iVar3 = (iVar3 >> 8) * (iVar11 >> 8);
    if (iVar10 < 0) {
      iVar10 = -iVar10;
    }
    if (iVar10 < 0xf5c3) {
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if ((iVar3 < 0xf5c3) && (-0xf5c3 < (iVar9 >> 8) * (iVar2 >> 8))) goto LAB_8008d204;
    }
    iGp000002e4 = 1;
  }
LAB_8008d204:
  uVar7 = 0x8000;
  if (iGp000002e4 == 1) {
    uVar7 = 0x28f;
  }
  uVar7 = fixedmult(uVar7,iVar1);
  uVar8 = fixedmult(uVar7,(int)(o->massInv + ((uint)o->massInv >> 0x1f)) >> 1);
  local_50 = fixedmult(uVar8,local_60);
  uVar8 = fixedmult(uVar7,(int)(o->massInv + ((uint)o->massInv >> 0x1f)) >> 1);
  local_4c = fixedmult(uVar8,local_5c);
  uVar8 = fixedmult(uVar7,(int)(o->massInv + ((uint)o->massInv >> 0x1f)) >> 1);
  local_48 = fixedmult(uVar8,local_58);
  iGp000002e4 = 0;
  uVar8 = fixedmult(uVar7,o->moInertiaInv << 1);
  iVar9 = iVar13;
  if (iVar13 < 0) {
    iVar9 = iVar13 + 0xff;
  }
  iVar10 = local_58;
  if (local_58 < 0) {
    iVar10 = local_58 + 0xff;
  }
  iVar2 = iVar12;
  if (iVar12 < 0) {
    iVar2 = iVar12 + 0xff;
  }
  iVar3 = iVar14;
  if (iVar14 < 0) {
    iVar3 = iVar14 + 0xff;
  }
  iVar11 = local_60;
  if (local_60 < 0) {
    iVar11 = local_60 + 0xff;
  }
  iVar10 = (iVar10 >> 8) * (iVar3 >> 8) - (iVar11 >> 8) * (iVar9 >> 8);
  iVar9 = local_5c;
  if (local_5c < 0) {
    iVar9 = local_5c + 0xff;
  }
  iVar9 = (iVar11 >> 8) * (iVar2 >> 8) - (iVar9 >> 8) * (iVar3 >> 8);
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  iVar2 = iVar13;
  if (iVar13 < 0) {
    iVar2 = iVar13 + 0xff;
  }
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar3 = iVar12;
  if (iVar12 < 0) {
    iVar3 = iVar12 + 0xff;
  }
  local_40 = (iVar10 >> 8) * (iVar2 >> 8) - (iVar9 >> 8) * (iVar3 >> 8);
  iVar10 = iVar14;
  if (iVar14 < 0) {
    iVar10 = iVar14 + 0xff;
  }
  iVar11 = local_40;
  if (local_40 < 0) {
    iVar11 = local_40 + 0xff;
  }
  local_3c = (iVar9 >> 8) * (iVar10 >> 8) - (iVar11 >> 8) * (iVar2 >> 8);
  iVar9 = local_3c;
  if (local_3c < 0) {
    iVar9 = local_3c + 0xff;
  }
  local_38 = (iVar11 >> 8) * (iVar3 >> 8) - (iVar9 >> 8) * (iVar10 >> 8);
  local_40 = fixedmult(uVar8);
  local_3c = fixedmult(uVar8,local_3c);
  local_38 = fixedmult(uVar8,local_38);
  local_50 = local_50 + local_40;
  local_48 = local_48 + local_38;
  local_4c = local_4c + local_3c;
  iVar9 = local_50;
  if (local_50 < 0) {
    iVar9 = local_50 + 0xff;
  }
  iVar10 = local_60;
  if (local_60 < 0) {
    iVar10 = local_60 + 0xff;
  }
  iVar2 = local_4c;
  if (local_4c < 0) {
    iVar2 = local_4c + 0xff;
  }
  iVar3 = local_5c;
  if (local_5c < 0) {
    iVar3 = local_5c + 0xff;
  }
  iVar11 = local_48;
  if (local_48 < 0) {
    iVar11 = local_48 + 0xff;
  }
  iVar4 = local_58;
  if (local_58 < 0) {
    iVar4 = local_58 + 0xff;
  }
  if ((int)uVar18 <
      (iVar9 >> 8) * (iVar10 >> 8) + (iVar2 >> 8) * (iVar3 >> 8) + (iVar11 >> 8) * (iVar4 >> 8)) {
    uVar8 = fixeddiv(uVar18);
    uVar7 = fixedmult(uVar7,uVar8);
  }
  local_60 = fixedmult(uVar7,local_60);
  local_5c = fixedmult(uVar7,local_5c);
  local_58 = fixedmult(uVar7,local_58);
  if (0 < iVar1) {
    iVar9 = fixedmult(iVar1,iVar15);
    iVar15 = fixedmult(iVar1,iVar16);
    iVar10 = fixedmult(iVar1,iVar19);
    iVar9 = iVar9 + local_60;
    iVar10 = iVar10 + local_58;
    iVar15 = iVar15 + local_5c;
    iVar16 = fixedmult((int)(o->massInv + ((uint)o->massInv >> 0x1f)) >> 1);
    iVar19 = fixedmult((int)(o->massInv + ((uint)o->massInv >> 0x1f)) >> 1,iVar15);
    iVar1 = fixedmult((int)(o->massInv + ((uint)o->massInv >> 0x1f)) >> 1,iVar10);
    (o->linearVel).x = (o->linearVel).x + iVar16;
    (o->linearVel).y = (o->linearVel).y + iVar19;
    (o->linearVel).z = (o->linearVel).z + iVar1;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    if (iVar15 < 0) {
      iVar15 = iVar15 + 0xff;
    }
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    if (iVar14 < 0) {
      iVar14 = iVar14 + 0xff;
    }
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar16 = fixedmult(o->moInertiaInv << 1);
    iVar19 = fixedmult(o->moInertiaInv << 1,
                       (iVar13 >> 8) * (iVar9 >> 8) - (iVar14 >> 8) * (iVar10 >> 8));
    iVar9 = fixedmult(o->moInertiaInv << 1,
                      (iVar14 >> 8) * (iVar15 >> 8) - (iVar12 >> 8) * (iVar9 >> 8));
    (o->angularVel).x = (o->angularVel).x + iVar16;
    (o->angularVel).y = (o->angularVel).y + iVar19;
    (o->angularVel).z = (o->angularVel).z + iVar9;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Collide_LimitAngularVel__FP13BO_tNewtonObj(struct BO_tNewtonObj *o /*$a0*/)
 // line 394, offset 0x8008d8b4
	/* begin block 1 */
		// Start line: 395
		// Start offset: 0x8008D8B4
	/* end block 1 */
	// End offset: 0x8008D9A0
	// End Line: 409

void Collide_LimitAngularVel__FP13BO_tNewtonObj(BO_tNewtonObj *o)
{
  int iVar1;
  int iVar2;
  
  iVar1 = (o->angularVel).x;
  if (iVar1 < 0) {
    if (iVar1 < -0x18000) {
      iVar1 = -0x18000;
    }
    (o->angularVel).x = iVar1;
  }
  else {
    iVar2 = 0x18000;
    if (iVar1 < 0x18001) {
      iVar2 = iVar1;
    }
    (o->angularVel).x = iVar2;
  }
  iVar1 = (o->angularVel).y;
  if (iVar1 < 0) {
    if (iVar1 < -0x18000) {
      iVar1 = -0x18000;
    }
    (o->angularVel).y = iVar1;
  }
  else {
    iVar2 = 0x18000;
    if (iVar1 < 0x18001) {
      iVar2 = iVar1;
    }
    (o->angularVel).y = iVar2;
  }
  iVar1 = (o->angularVel).z;
  if (iVar1 < 0) {
    if (iVar1 < -0x18000) {
      iVar1 = -0x18000;
    }
    (o->angularVel).z = iVar1;
    return;
  }
  iVar2 = 0x18000;
  if (iVar1 < 0x18001) {
    iVar2 = iVar1;
  }
  (o->angularVel).z = iVar2;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Collide_TestWithPlane__FP13BO_tNewtonObjP8coorddefT1(struct BO_tNewtonObj *o /*$s3*/, struct coorddef *normal /*$s2*/, struct coorddef *samplePoint /*$s0*/)
 // line 418, offset 0x8008d9a8
	/* begin block 1 */
		// Start line: 419
		// Start offset: 0x8008D9A8
		// Variables:
	// 		int raiseUp; // $s1
	// 		int basisDots[3]; // stack offset -128
	// 		int relativeDot; // $v1
	// 		struct coorddef relativePos; // stack offset -112
	// 		int xDir; // $t1
	// 		int Y_DIR; // $t2
	// 		int zDir; // $t3

		/* begin block 1.1 */
			// Start line: 446
			// Start offset: 0x8008DD78
			// Variables:
		// 		int height; // $a1

			/* begin block 1.1.1 */
				// Start line: 446
				// Start offset: 0x8008DD78

				/* begin block 1.1.1.1 */
					// Start line: 453
					// Start offset: 0x8008DDCC
					// Variables:
				// 		struct coorddef Raise; // stack offset -96
				// 		struct coorddef vertexVelocity; // stack offset -80
				// 		struct coorddef r; // stack offset -64
				// 		struct coorddef spot; // stack offset -48

					/* begin block 1.1.1.1.1 */
						// Start line: 494
						// Start offset: 0x8008E2EC

						/* begin block 1.1.1.1.1.1 */
							// Start line: 495
							// Start offset: 0x8008E314
							// Variables:
						// 		int correction; // $s0
						// 		int v2; // $a0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x8008E374
						// End Line: 504
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008E374
					// End Line: 504
				/* end block 1.1.1.1 */
				// End offset: 0x8008E374
				// End Line: 504
			/* end block 1.1.1 */
			// End offset: 0x8008E374
			// End Line: 504
		/* end block 1.1 */
		// End offset: 0x8008E374
		// End Line: 504

		/* begin block 1.2 */
			// Start line: 509
			// Start offset: 0x8008E374
			// Variables:
		// 		int zone; // $s5
		// 		int impulse; // $s6

			/* begin block 1.2.1 */
				// Start line: 519
				// Start offset: 0x8008E468

				/* begin block 1.2.1.1 */
					// Start line: 520
					// Start offset: 0x8008E478
					// Variables:
				// 		int right; // $s4
				// 		int top; // $s1
				// 		int front; // $s0
				/* end block 1.2.1.1 */
				// End offset: 0x8008E5AC
				// End Line: 542
			/* end block 1.2.1 */
			// End offset: 0x8008E5AC
			// End Line: 542
		/* end block 1.2 */
		// End offset: 0x8008E5AC
		// End Line: 542
	/* end block 1 */
	// End offset: 0x8008E5AC
	// End Line: 542

void Collide_TestWithPlane__FP13BO_tNewtonObjP8coorddefT1( (BO_tNewtonObj *o,coorddef *normal,coorddef *samplePoint)
{
  bool bVar1;
  int impulse;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint zone;
  int local_5c;
  coorddef local_50;
  int local_40;
  int local_3c;
  int local_38;
  coorddef local_30;
  
  impulse = fixedmult(0x6487e,(o->angularVel).x);
  (o->angularVel).x = impulse;
  impulse = fixedmult(0x6487e,(o->angularVel).y);
  (o->angularVel).y = impulse;
  impulse = fixedmult(0x6487e,(o->angularVel).z);
  (o->angularVel).z = impulse;
  if (((normal->x == 0) && (normal->y == 0)) && (normal->z == 0)) {
    normal->y = 0x10000;
  }
  impulse = normal->x;
  if (impulse < 0) {
    impulse = impulse + 0xff;
  }
  iVar2 = (o->orientMat).m[0];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar7 = normal->y;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar3 = (o->orientMat).m[1];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar8 = normal->z;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar4 = (o->orientMat).m[2];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  impulse = (impulse >> 8) * (iVar2 >> 8) + (iVar7 >> 8) * (iVar3 >> 8) +
            (iVar8 >> 8) * (iVar4 >> 8);
  if (impulse < 0) {
    impulse = impulse + 0xff;
  }
  iVar2 = (o->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar2 = (impulse >> 8) * (iVar2 >> 8);
  impulse = normal->x;
  if (impulse < 0) {
    impulse = impulse + 0xff;
  }
  iVar7 = (o->orientMat).m[3];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar3 = normal->y;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar8 = (o->orientMat).m[4];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar4 = normal->z;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar5 = (o->orientMat).m[5];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  impulse = (impulse >> 8) * (iVar7 >> 8) + (iVar3 >> 8) * (iVar8 >> 8) +
            (iVar4 >> 8) * (iVar5 >> 8);
  if (impulse < 0) {
    impulse = impulse + 0xff;
  }
  iVar7 = (o->dimension).y;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar7 = (impulse >> 8) * (iVar7 >> 8);
  impulse = normal->x;
  if (impulse < 0) {
    impulse = impulse + 0xff;
  }
  iVar3 = (o->orientMat).m[6];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar8 = normal->y;
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar4 = (o->orientMat).m[7];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar5 = normal->z;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar6 = (o->orientMat).m[8];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  impulse = (impulse >> 8) * (iVar3 >> 8) + (iVar8 >> 8) * (iVar4 >> 8) +
            (iVar5 >> 8) * (iVar6 >> 8);
  if (impulse < 0) {
    impulse = impulse + 0xff;
  }
  iVar3 = (o->dimension).z;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar3 = (impulse >> 8) * (iVar3 >> 8);
  impulse = -1;
  if (iVar2 < 0) {
    impulse = 1;
  }
  iVar8 = -1;
  if (iVar7 < 0) {
    iVar8 = 1;
  }
  iVar4 = -1;
  if (iVar3 < 0) {
    iVar4 = 1;
  }
  iVar5 = (o->position).x - samplePoint->x;
  iVar6 = (o->position).y - samplePoint->y;
  iVar12 = (o->position).z - samplePoint->z;
  iVar9 = normal->x;
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar10 = normal->y;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar11 = normal->z;
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0xff;
  }
  if (iVar12 < 0) {
    iVar12 = iVar12 + 0xff;
  }
  iVar2 = impulse * iVar2 + iVar8 * iVar7 + iVar4 * iVar3 +
          (iVar9 >> 8) * (iVar5 >> 8) + (iVar10 >> 8) * (iVar6 >> 8) + (iVar11 >> 8) * (iVar12 >> 8)
  ;
  if (iVar2 < 0) {
    iVar7 = (o->orientMat).m[0];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar3 = (o->dimension).x;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar5 = (o->orientMat).m[3];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar6 = (o->dimension).y;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar12 = (o->orientMat).m[6];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar9 = (o->dimension).z;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    local_30.x = (o->position).x + impulse * (iVar7 >> 8) * (iVar3 >> 8) +
                 iVar8 * (iVar5 >> 8) * (iVar6 >> 8) + iVar4 * (iVar12 >> 8) * (iVar9 >> 8);
    iVar7 = (o->orientMat).m[1];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar3 = (o->dimension).x;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar5 = (o->orientMat).m[4];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar6 = (o->dimension).y;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar12 = (o->orientMat).m[7];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar9 = (o->dimension).z;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    local_30.y = (o->position).y + impulse * (iVar7 >> 8) * (iVar3 >> 8) +
                 iVar8 * (iVar5 >> 8) * (iVar6 >> 8) + iVar4 * (iVar12 >> 8) * (iVar9 >> 8);
    iVar7 = (o->orientMat).m[2];
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar3 = (o->dimension).x;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar5 = (o->orientMat).m[5];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar6 = (o->dimension).y;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar12 = (o->orientMat).m[8];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar9 = (o->dimension).z;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    local_30.z = (o->position).z + impulse * (iVar7 >> 8) * (iVar3 >> 8) +
                 iVar8 * (iVar5 >> 8) * (iVar6 >> 8) + iVar4 * (iVar12 >> 8) * (iVar9 >> 8);
    zone = 0;
    if (iVar2 < 0) {
      zone = -iVar2;
    }
    if ((iGp000002e0 != 0) && (zone != 0)) {
      iVar2 = (int)(zone + (zone >> 0x1f)) >> 1;
      impulse = fixedmult(iVar2,normal->x);
      local_5c = fixedmult(iVar2,normal->y);
      iVar2 = fixedmult(iVar2,normal->z);
      (o->position).x = (o->position).x + impulse;
      (o->position).y = (o->position).y + local_5c;
      (o->position).z = (o->position).z + iVar2;
    }
    local_40 = local_30.x - (o->position).x;
    local_3c = local_30.y - (o->position).y;
    local_38 = local_30.z - (o->position).z;
    impulse = (o->angularVel).y;
    if (impulse < 0) {
      impulse = impulse + 0xff;
    }
    iVar2 = local_38;
    if (local_38 < 0) {
      iVar2 = local_38 + 0xff;
    }
    iVar7 = (o->angularVel).z;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar3 = local_3c;
    if (local_3c < 0) {
      iVar3 = local_3c + 0xff;
    }
    iVar8 = (o->angularVel).z;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar4 = local_40;
    if (local_40 < 0) {
      iVar4 = local_40 + 0xff;
    }
    iVar5 = (o->angularVel).x;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar6 = (o->angularVel).x;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar12 = (o->angularVel).y;
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar9 = local_40;
    if (local_40 < 0) {
      iVar9 = local_40 + 0xff;
    }
    local_50.x = ((impulse >> 8) * (iVar2 >> 8) - (iVar7 >> 8) * (iVar3 >> 8)) + (o->linearVel).x;
    local_50.y = ((iVar8 >> 8) * (iVar4 >> 8) - (iVar5 >> 8) * (iVar2 >> 8)) + (o->linearVel).y;
    local_50.z = ((iVar6 >> 8) * (iVar3 >> 8) - (iVar12 >> 8) * (iVar9 >> 8)) + (o->linearVel).z;
    impulse = normal->x;
    if (impulse < 0) {
      impulse = impulse + 0xff;
    }
    iVar2 = local_50.x;
    if (local_50.x < 0) {
      iVar2 = local_50.x + 0xff;
    }
    iVar7 = normal->y;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    iVar3 = local_50.y;
    if (local_50.y < 0) {
      iVar3 = local_50.y + 0xff;
    }
    iVar8 = normal->z;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar4 = local_50.z;
    if (local_50.z < 0) {
      iVar4 = local_50.z + 0xff;
    }
    if ((impulse >> 8) * (iVar2 >> 8) + (iVar7 >> 8) * (iVar3 >> 8) + (iVar8 >> 8) * (iVar4 >> 8) <
        0) {
      Collide_DoObjectFixedObjectCollision__FP13BO_tNewtonObjP8coorddefN21
                (o,&local_30,&local_50,normal);
    }
    if (((iGp000002e0 != 0) && (zone != 0)) && (0 < local_5c)) {
      impulse = fixedmult(0x9cccc);
      iVar2 = (o->linearVel).y;
      iVar2 = fixedmult(iVar2,iVar2);
      if (iVar2 < impulse * 2) {
        (o->linearVel).y = 0;
      }
      else {
        if ((o->linearVel).y < 1) {
          impulse = fixedsqrt(iVar2 + impulse * -2);
          (o->linearVel).y = -impulse;
        }
        else {
          impulse = fixedsqrt(iVar2 + impulse * -2);
          (o->linearVel).y = impulse;
        }
      }
    }
  }
  impulse = fixedmult(0x28be,(o->angularVel).x);
  (o->angularVel).x = impulse;
  impulse = fixedmult(0x28be,(o->angularVel).y);
  (o->angularVel).y = impulse;
  impulse = fixedmult(0x28be,(o->angularVel).z);
  (o->angularVel).z = impulse;
  Collide_LimitAngularVel__FP13BO_tNewtonObj(o);
  zone = 9;
  impulse = fixedmult(normal->x,(o->linearVel).x);
  iVar2 = fixedmult(normal->y,(o->linearVel).y);
  iVar7 = fixedmult(normal->z,(o->linearVel).z);
  if (impulse + iVar2 + iVar7 < 1) {
    impulse = fixedmult(normal->x,(o->linearVel).x);
    iVar2 = fixedmult(normal->y,(o->linearVel).y);
    iVar7 = fixedmult(normal->z,(o->linearVel).z);
    impulse = -(impulse + iVar2 + iVar7);
  }
  else {
    iVar2 = fixedmult(normal->x,(o->linearVel).x);
    iVar7 = fixedmult(normal->y,(o->linearVel).y);
    impulse = fixedmult(normal->z,(o->linearVel).z);
    impulse = iVar2 + iVar7 + impulse;
  }
  impulse = impulse << 2;
  if (impulse < 0xa0001) {
    return;
  }
  iVar2 = fixedmult(normal->x,(o->orientMat).m[0]);
  iVar7 = fixedmult(normal->y,(o->orientMat).m[1]);
  iVar3 = fixedmult(normal->z,(o->orientMat).m[2]);
  iVar3 = iVar2 + iVar7 + iVar3;
  iVar2 = fixedmult(normal->x,(o->orientMat).m[3]);
  iVar7 = fixedmult(normal->y,(o->orientMat).m[4]);
  iVar8 = fixedmult(normal->z,(o->orientMat).m[5]);
  iVar4 = fixedmult(normal->x,(o->orientMat).m[6]);
  iVar5 = fixedmult(normal->y,(o->orientMat).m[7]);
  iVar6 = fixedmult(normal->z,(o->orientMat).m[8]);
  iVar6 = iVar4 + iVar5 + iVar6;
  if (iVar2 + iVar7 + iVar8 < -0x8000) {
    zone = 8;
    Newton_AddDamageZone__FP13BO_tNewtonObjiii(o,impulse,8,0);
  }
  if (iVar6 < -0x1999) {
    if (iVar3 < 0x199a) {
      if (-0x199a < iVar3) goto LAB_8008e568;
      zone = 2;
    }
    else {
      zone = 0;
    }
  }
  else {
LAB_8008e568:
    bVar1 = zone < 8;
    if (iVar6 < 0x199a) goto LAB_8008e594;
    if (iVar3 < 0x199a) {
      bVar1 = zone < 8;
      if (-0x199a < iVar3) goto LAB_8008e594;
      zone = 6;
    }
    else {
      zone = 4;
    }
  }
  bVar1 = zone < 8;
LAB_8008e594:
  if (bVar1) {
    Newton_AddDamageZone__FP13BO_tNewtonObjiii(o,impulse,zone,0);
  }
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Collide_DoObjectObjectCollision__FP13BO_tNewtonObjT0P8coorddefT2(struct BO_tNewtonObj *o0 /*stack 0*/, struct BO_tNewtonObj *o1 /*$fp*/, struct coorddef *p /*$a2*/, struct coorddef *normal /*stack 12*/)
 // line 554, offset 0x8008e5d4
	/* begin block 1 */
		// Start line: 555
		// Start offset: 0x8008E5D4
		// Variables:
	// 		int impulse; // $s6
	// 		int impulseWST; // $s0
	// 		struct coorddef impulseV; // stack offset -168
	// 		struct coorddef R0CrossN; // stack offset -152
	// 		struct coorddef R1CrossN; // stack offset -136
	// 		struct coorddef Rt0; // stack offset -120
	// 		struct coorddef Rt1; // stack offset -104
	// 		int numerator; // $s2
	// 		struct coorddef deltaV; // stack offset -88
	// 		struct coorddef damageVector; // stack offset -72

		/* begin block 1.1 */
			// Start line: 620
			// Start offset: 0x8008EC40

			/* begin block 1.1.1 */
				// Start line: 627
				// Start offset: 0x8008ECDC
				// Variables:
			// 		int zone; // $s4
			// 		int impulse; // $s5

				/* begin block 1.1.1.1 */
					// Start line: 628
					// Start offset: 0x8008ECDC

					/* begin block 1.1.1.1.1 */
						// Start line: 639
						// Start offset: 0x8008ED2C
						// Variables:
					// 		int right; // $s3
					// 		int top; // $s1
					// 		int front; // $s0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8008EEF4
					// End Line: 669
				/* end block 1.1.1.1 */
				// End offset: 0x8008EEF4
				// End Line: 669
			/* end block 1.1.1 */
			// End offset: 0x8008EEF4
			// End Line: 669
		/* end block 1.1 */
		// End offset: 0x8008EEF4
		// End Line: 669

		/* begin block 1.2 */
			// Start line: 674
			// Start offset: 0x8008EEF4

			/* begin block 1.2.1 */
				// Start line: 681
				// Start offset: 0x8008EF84
				// Variables:
			// 		int zone; // $s4
			// 		int impulse; // $s5

				/* begin block 1.2.1.1 */
					// Start line: 682
					// Start offset: 0x8008EF84

					/* begin block 1.2.1.1.1 */
						// Start line: 692
						// Start offset: 0x8008EFBC
						// Variables:
					// 		int right; // $s3
					// 		int top; // $s1
					// 		int front; // $s0
					/* end block 1.2.1.1.1 */
					// End offset: 0x8008F15C
					// End Line: 722
				/* end block 1.2.1.1 */
				// End offset: 0x8008F15C
				// End Line: 722
			/* end block 1.2.1 */
			// End offset: 0x8008F15C
			// End Line: 722
		/* end block 1.2 */
		// End offset: 0x8008F15C
		// End Line: 722
	/* end block 1 */
	// End offset: 0x8008F520
	// End Line: 753

int Collide_DoObjectObjectCollision__FP13BO_tNewtonObjT0P8coorddefT2( (BO_tNewtonObj *o0,BO_tNewtonObj *o1,coorddef *p,coorddef *normal)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int impulse;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 uVar25;
  uint zone;
  int local_58;
  int local_54;
  coorddef local_48;
  int local_38;
  int local_34;
  int local_30;
  
  iVar2 = p->x - (o0->position).x;
  iVar24 = p->y - (o0->position).y;
  iVar3 = p->z - (o0->position).z;
  iVar4 = p->x - (o1->position).x;
  iVar5 = p->y - (o1->position).y;
  iVar6 = p->z - (o1->position).z;
  iVar7 = fixedmult(iVar24,normal->z);
  impulse = fixedmult(iVar3,normal->y);
  iVar7 = iVar7 - impulse;
  impulse = fixedmult(iVar3,normal->x);
  iVar8 = fixedmult(iVar2,normal->z);
  impulse = impulse - iVar8;
  iVar8 = fixedmult(iVar2,normal->y);
  iVar9 = fixedmult(iVar24,normal->x);
  iVar8 = iVar8 - iVar9;
  iVar9 = fixedmult(iVar5,normal->z);
  iVar10 = fixedmult(iVar6,normal->y);
  iVar9 = iVar9 - iVar10;
  iVar10 = fixedmult(iVar6,normal->x);
  iVar11 = fixedmult(iVar4,normal->z);
  iVar10 = iVar10 - iVar11;
  iVar11 = fixedmult(iVar4,normal->y);
  iVar12 = fixedmult(iVar5,normal->x);
  iVar11 = iVar11 - iVar12;
  iVar12 = fixedmult((o0->linearVel).x,normal->x);
  local_38 = fixedmult((o0->linearVel).y,normal->y);
  local_34 = fixedmult((o0->linearVel).z,normal->z);
  iVar13 = fixedmult((o1->linearVel).x,normal->x);
  local_30 = fixedmult((o1->linearVel).y,normal->y);
  iVar14 = fixedmult((o1->linearVel).z,normal->z);
  iVar15 = fixedmult((o0->angularVel).x,iVar7);
  iVar16 = fixedmult((o0->angularVel).y,impulse);
  iVar17 = fixedmult((o0->angularVel).z,iVar8);
  iVar18 = fixedmult((o1->angularVel).x,iVar9);
  iVar19 = fixedmult((o1->angularVel).y,iVar10);
  iVar20 = fixedmult((o1->angularVel).z,iVar11);
  iVar12 = iVar12 + local_38 + local_34;
  iVar13 = iVar13 + local_30;
  iVar7 = fixedmult(iVar7,iVar7);
  impulse = fixedmult(impulse,impulse);
  iVar8 = fixedmult(iVar8,iVar8);
  iVar7 = fixedmult(iVar7 + impulse + iVar8,o0->moInertiaInv);
  impulse = fixedmult(iVar9,iVar9);
  iVar8 = fixedmult(iVar10,iVar10);
  iVar9 = fixedmult(iVar11,iVar11);
  impulse = fixedmult(impulse + iVar8 + iVar9,o1->moInertiaInv);
  iVar7 = fixeddiv((((iVar13 + iVar14) - iVar12) - (iVar15 + iVar16 + iVar17)) +
                   iVar18 + iVar19 + iVar20,
                   ((int)(o0->massInv + ((uint)o0->massInv >> 0x1f)) >> 1) +
                   ((int)(o1->massInv + ((uint)o1->massInv >> 0x1f)) >> 1) + (iVar7 >> 1) +
                   (impulse >> 1));
  if (iVar7 < 0) {
    return 0;
  }
  if (((o0[1].simRoadInfo.quadPts[1].y & 4U) != 0) && ((o0->collision).collided == 0)) {
    (o0->collision).collided = 2;
  }
  if (((o1[1].simRoadInfo.quadPts[1].y & 4U) != 0) && ((o1->collision).collided == 0)) {
    (o1->collision).collided = 2;
  }
  uVar25 = 0x3333;
  if (((o0[1].simRoadInfo.quadPts[1].y & 4U) != 0) && ((o1[1].simRoadInfo.quadPts[1].y & 4U) != 0))
  {
    uVar25 = 0x4000;
  }
  iVar7 = fixedmult(uVar25,iVar7);
  uVar25 = fixedmult(iVar7,normal->x);
  uVar21 = fixedmult(iVar7,normal->y);
  uVar22 = fixedmult(iVar7,normal->z);
  impulse = fixedmult((o0->linearVel).x,normal->x);
  iVar8 = fixedmult((o0->linearVel).y,normal->y);
  iVar9 = fixedmult((o0->linearVel).z,normal->z);
  iVar10 = fixedmult((o1->linearVel).x,normal->x);
  iVar11 = fixedmult((o1->linearVel).y,normal->y);
  iVar12 = fixedmult((o1->linearVel).z,normal->z);
  uVar23 = fixedmult((impulse + iVar8 + iVar9) - (iVar10 + iVar11 + iVar12),o0->mass + o1->mass);
  impulse = fixedmult(uVar23,o0->massInv);
  if (impulse < 1) {
    impulse = fixedmult(uVar23,o0->massInv);
    impulse = -impulse;
  }
  else {
    impulse = fixedmult(uVar23,o0->massInv);
  }
  (o0->collision).impulse = impulse;
  impulse = fixedmult(uVar23,o1->massInv);
  if (impulse < 1) {
    impulse = fixedmult(uVar23,o1->massInv);
    (o1->collision).impulse = -impulse;
  }
  else {
    impulse = fixedmult(uVar23,o1->massInv);
    (o1->collision).impulse = impulse;
  }
  if ((0x1ff < o0->objID) || (0x1ff < o1->objID)) {
    (o0->collision).impulse = (o0->collision).impulse / 3;
    (o1->collision).impulse = (o1->collision).impulse / 3;
  }
  impulse = fixedmult(o0->massInv,uVar25);
  iVar8 = fixedmult(o0->massInv,uVar21);
  iVar9 = fixedmult(o0->massInv,uVar22);
  (o0->linearVel).x = (o0->linearVel).x + impulse;
  (o0->linearVel).y = (o0->linearVel).y + iVar8;
  impulse = (o0->linearVel).z;
  iVar8 = o0->objID;
  (o0->collision).sfxType = 0x50001;
  (o0->collision).otherObj = o1;
  (o0->linearVel).z = impulse + iVar9;
  if (iVar8 < 0x200) {
    impulse = (o0->collision).impulse;
    local_48.x = (o0->position).x - (o1->position).x;
    zone = 9;
    local_48.y = (o0->position).y - (o1->position).y;
    local_48.z = (o0->position).z - (o1->position).z;
    Math_NormalizeShortVector__FP8coorddef(&local_48);
    if (0xa0000 < impulse) {
      iVar8 = fixedmult(local_48.x,(o0->orientMat).m[0]);
      iVar9 = fixedmult(local_48.y,(o0->orientMat).m[1]);
      iVar10 = fixedmult(local_48.z,(o0->orientMat).m[2]);
      iVar10 = iVar8 + iVar9 + iVar10;
      iVar8 = fixedmult(local_48.x,(o0->orientMat).m[3]);
      iVar9 = fixedmult(local_48.y,(o0->orientMat).m[4]);
      iVar11 = fixedmult(local_48.z,(o0->orientMat).m[5]);
      iVar12 = fixedmult(local_48.x,(o0->orientMat).m[6]);
      iVar13 = fixedmult(local_48.y,(o0->orientMat).m[7]);
      iVar14 = fixedmult(local_48.z,(o0->orientMat).m[8]);
      iVar14 = iVar12 + iVar13 + iVar14;
      if (iVar8 + iVar9 + iVar11 < -0x8000) {
        zone = 8;
        Newton_AddDamageZone__FP13BO_tNewtonObjiii(o0,impulse,8,2);
      }
      iVar8 = iVar10;
      if (iVar10 < 0) {
        iVar8 = -iVar10;
      }
      if (iVar8 < 0x1999) {
        if (iVar14 < -0x1999) {
          zone = 1;
        }
        else {
          if (iVar14 < 0x199a) goto LAB_8008ee48;
          zone = 5;
        }
LAB_8008eed8:
        bVar1 = zone < 8;
      }
      else {
LAB_8008ee48:
        iVar8 = iVar14;
        if (iVar14 < 0) {
          iVar8 = -iVar14;
        }
        if (iVar8 < 0x1999) {
          if (iVar10 < 0x199a) {
            if (-0x199a < iVar10) goto LAB_8008ee84;
            zone = 3;
          }
          else {
            zone = 7;
          }
          goto LAB_8008eed8;
        }
LAB_8008ee84:
        if (iVar14 < -0x1999) {
          if (iVar10 < 0x199a) {
            if (-0x199a < iVar10) goto LAB_8008eeb0;
            zone = 2;
          }
          else {
            zone = 0;
          }
          goto LAB_8008eed8;
        }
LAB_8008eeb0:
        bVar1 = zone < 8;
        if (0x1999 < iVar14) {
          if (iVar10 < 0x199a) {
            bVar1 = zone < 8;
            if (-0x199a < iVar10) goto LAB_8008eedc;
            zone = 4;
          }
          else {
            zone = 6;
          }
          goto LAB_8008eed8;
        }
      }
LAB_8008eedc:
      if (bVar1) {
        Newton_AddDamageZone__FP13BO_tNewtonObjiii(o0,impulse,zone,2);
      }
    }
  }
  impulse = fixedmult(o1->massInv,uVar25);
  iVar8 = fixedmult(o1->massInv,uVar21);
  iVar9 = fixedmult(o1->massInv,uVar22);
  (o1->linearVel).x = (o1->linearVel).x - impulse;
  (o1->linearVel).y = (o1->linearVel).y - iVar8;
  (o1->collision).sfxType = 0x50001;
  impulse = o1->objID;
  (o1->collision).otherObj = o0;
  (o1->linearVel).z = (o1->linearVel).z - iVar9;
  if (0x1ff < impulse) goto LAB_8008f15c;
  impulse = (o1->collision).impulse;
  local_48.x = -local_48.x;
  local_48.z = -local_48.z;
  local_48.y = -local_48.y;
  zone = 9;
  if (impulse < 0xa0001) goto LAB_8008f15c;
  iVar8 = fixedmult(local_48.x,(o1->orientMat).m[0]);
  iVar9 = fixedmult(local_48.y,(o1->orientMat).m[1]);
  iVar10 = fixedmult(local_48.z,(o1->orientMat).m[2]);
  iVar10 = iVar8 + iVar9 + iVar10;
  iVar8 = fixedmult(local_48.x,(o1->orientMat).m[3]);
  iVar9 = fixedmult(local_48.y,(o1->orientMat).m[4]);
  iVar11 = fixedmult(local_48.z,(o1->orientMat).m[5]);
  iVar12 = fixedmult(local_48.x,(o1->orientMat).m[6]);
  iVar13 = fixedmult(local_48.y,(o1->orientMat).m[7]);
  iVar14 = fixedmult(local_48.z,(o1->orientMat).m[8]);
  iVar14 = iVar12 + iVar13 + iVar14;
  if (iVar8 + iVar9 + iVar11 < -0x8000) {
    zone = 8;
    Newton_AddDamageZone__FP13BO_tNewtonObjiii(o1,impulse,8,2);
  }
  iVar8 = iVar10;
  if (iVar10 < 0) {
    iVar8 = -iVar10;
  }
  if (iVar8 < 0x1999) {
    if (iVar14 < -0x1999) {
      zone = 1;
    }
    else {
      if (iVar14 < 0x199a) goto LAB_8008f0b0;
      zone = 5;
    }
LAB_8008f140:
    bVar1 = zone < 8;
  }
  else {
LAB_8008f0b0:
    iVar8 = iVar14;
    if (iVar14 < 0) {
      iVar8 = -iVar14;
    }
    if (iVar8 < 0x1999) {
      if (iVar10 < 0x199a) {
        if (-0x199a < iVar10) goto LAB_8008f0ec;
        zone = 3;
      }
      else {
        zone = 7;
      }
      goto LAB_8008f140;
    }
LAB_8008f0ec:
    if (iVar14 < -0x1999) {
      if (iVar10 < 0x199a) {
        if (-0x199a < iVar10) goto LAB_8008f118;
        zone = 2;
      }
      else {
        zone = 0;
      }
      goto LAB_8008f140;
    }
LAB_8008f118:
    bVar1 = zone < 8;
    if (0x1999 < iVar14) {
      if (iVar10 < 0x199a) {
        bVar1 = zone < 8;
        if (-0x199a < iVar10) goto LAB_8008f144;
        zone = 4;
      }
      else {
        zone = 6;
      }
      goto LAB_8008f140;
    }
  }
LAB_8008f144:
  if (bVar1) {
    Newton_AddDamageZone__FP13BO_tNewtonObjiii(o1,impulse,zone,2);
  }
LAB_8008f15c:
  impulse = fixedmult(iVar24,uVar22);
  iVar8 = fixedmult(iVar3,uVar21);
  iVar3 = fixedmult(iVar3,uVar25);
  iVar9 = fixedmult(iVar2,uVar22);
  iVar2 = fixedmult(iVar2,uVar21);
  iVar10 = fixedmult(iVar24,uVar25);
  if (((o0[1].simRoadInfo.quadPts[1].y & 4U) == 0) || (0x3fffff < iVar7)) {
    local_58 = fixedmult(o0->moInertiaInv,impulse - iVar8);
    local_54 = fixedmult(o0->moInertiaInv,iVar3 - iVar9);
    iVar3 = o0->moInertiaInv;
  }
  else {
    iVar11 = o0->moInertiaInv * 3;
    if (iVar11 < 0) {
      iVar11 = iVar11 + 3;
    }
    local_58 = fixedmult(iVar11 >> 2,impulse - iVar8);
    impulse = o0->moInertiaInv * 3;
    if (impulse < 0) {
      impulse = impulse + 3;
    }
    local_54 = fixedmult(impulse >> 2,iVar3 - iVar9);
    iVar3 = o0->moInertiaInv * 3;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    iVar3 = iVar3 >> 2;
  }
  iVar2 = fixedmult(iVar3,iVar2 - iVar10);
  (o0->angularVel).x = (o0->angularVel).x + local_58;
  (o0->angularVel).y = (o0->angularVel).y + local_54;
  (o0->angularVel).z = (o0->angularVel).z + iVar2;
  iVar2 = fixedmult(iVar5,uVar22);
  iVar3 = fixedmult(iVar6,uVar21);
  iVar6 = fixedmult(iVar6,uVar25);
  impulse = fixedmult(iVar4,uVar22);
  iVar4 = fixedmult(iVar4,uVar21);
  iVar5 = fixedmult(iVar5,uVar25);
  if (((o1[1].simRoadInfo.quadPts[1].y & 4U) == 0) || (0x3fffff < iVar7)) {
    local_58 = fixedmult(o1->moInertiaInv,iVar2 - iVar3);
    local_54 = fixedmult(o1->moInertiaInv,iVar6 - impulse);
    iVar2 = o1->moInertiaInv;
  }
  else {
    iVar7 = o1->moInertiaInv * 3;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 3;
    }
    local_58 = fixedmult(iVar7 >> 2,iVar2 - iVar3);
    iVar2 = o1->moInertiaInv * 3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    local_54 = fixedmult(iVar2 >> 2,iVar6 - impulse);
    iVar2 = o1->moInertiaInv * 3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    iVar2 = iVar2 >> 2;
  }
  iVar2 = fixedmult(iVar2,iVar4 - iVar5);
  (o1->angularVel).x = (o1->angularVel).x - local_58;
  (o1->angularVel).y = (o1->angularVel).y - local_54;
  (o1->angularVel).z = (o1->angularVel).z - iVar2;
  o0->flightTime = o0->flightTime + 1;
  iVar2 = (o1->position).x;
  o1->flightTime = o1->flightTime + 1;
  zone = (o0->position).x + iVar2;
  iVar2 = (int)(zone + (zone >> 0x1f)) >> 1;
  (o1->collision).collisionPoint.x = iVar2;
  (o0->collision).collisionPoint.x = iVar2;
  zone = (o0->position).y + (o1->position).y;
  iVar2 = (int)(zone + (zone >> 0x1f)) >> 1;
  (o1->collision).collisionPoint.y = iVar2;
  iVar3 = (o0->position).z;
  (o0->collision).collisionPoint.y = iVar2;
  zone = iVar3 + (o1->position).z;
  iVar2 = (int)(zone + (zone >> 0x1f)) >> 1;
  (o1->collision).collisionPoint.z = iVar2;
  (o0->collision).collisionPoint.z = iVar2;
  return 1;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Collide_DoActualObjectCollisionCheck__FP13BO_tNewtonObjT0P8coorddefT2(struct BO_tNewtonObj *o0 /*$s1*/, struct BO_tNewtonObj *o1 /*$s2*/, struct coorddef *p /*$a2*/, struct coorddef *normal /*$s0*/)
 // line 762, offset 0x8008f550
	/* begin block 1 */
		// Start line: 763
		// Start offset: 0x8008F550
		// Labels:
		//		0x00003D7C	FindClosestSideAndReturnCollision
		//		0x000041E0	FindClosestSideAndReturnCollisionOther

		/* begin block 1.1 */
			// Start line: 818
			// Start offset: 0x8008F7EC
			// Variables:
		// 		int maxv; // $v1
		// 		int vx; // $v0
		// 		int vy; // $a1
		// 		int vz; // $a0
		/* end block 1.1 */
		// End offset: 0x8008F874
		// End Line: 830

		/* begin block 1.2 */
			// Start line: 833
			// Start offset: 0x8008F874

			/* begin block 1.2.1 */
				// Start line: 834
				// Start offset: 0x8008F884
				// Variables:
			// 		struct coorddef normalx; // stack offset -96
			// 		struct coorddef normaly; // stack offset -80
			// 		struct coorddef normalz; // stack offset -64
			// 		int dotx; // $a3
			// 		int doty; // $a1
			// 		int dotz; // $v1
			// 		struct coorddef vel; // stack offset -48
			/* end block 1.2.1 */
			// End offset: 0x8008FB3C
			// End Line: 874

			/* begin block 1.2.2 */
				// Start line: 878
				// Start offset: 0x8008FB44
				// Variables:
			// 		int xDiff; // $a1
			// 		int yDiff; // $a0
			// 		int zDiff; // $v1
			/* end block 1.2.2 */
			// End offset: 0x8008FC48
			// End Line: 916
		/* end block 1.2 */
		// End offset: 0x8008FC48
		// End Line: 917

		/* begin block 1.3 */
			// Start line: 924
			// Start offset: 0x8008FC50
			// Variables:
		// 		int maxv; // $v1
		// 		int vx; // $v0
		// 		int vy; // $a1
		// 		int vz; // $a0
		/* end block 1.3 */
		// End offset: 0x8008FCD8
		// End Line: 936

		/* begin block 1.4 */
			// Start line: 939
			// Start offset: 0x8008FCD8

			/* begin block 1.4.1 */
				// Start line: 940
				// Start offset: 0x8008FCE8
				// Variables:
			// 		struct coorddef normalx; // stack offset -96
			// 		struct coorddef normaly; // stack offset -80
			// 		struct coorddef normalz; // stack offset -64
			// 		int dotx; // $a3
			// 		int doty; // $a1
			// 		int dotz; // $v1
			// 		struct coorddef vel; // stack offset -32
			/* end block 1.4.1 */
			// End offset: 0x8008FFE0
			// End Line: 981

			/* begin block 1.4.2 */
				// Start line: 985
				// Start offset: 0x80090000
				// Variables:
			// 		int xDiff; // $a1
			// 		int yDiff; // $a0
			// 		int zDiff; // $v1
			/* end block 1.4.2 */
			// End offset: 0x80090128
			// End Line: 1024
		/* end block 1.4 */
		// End offset: 0x80090128
		// End Line: 1024
	/* end block 1 */
	// End offset: 0x8009012C
	// End Line: 1028

int Collide_DoActualObjectCollisionCheck__FP13BO_tNewtonObjT0P8coorddefT2( (BO_tNewtonObj *o0,BO_tNewtonObj *o1,coorddef *p,coorddef *normal)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  
  pBGp000002f0 = o0;
  pBGp000002f4 = o1;
  pcGp000002f8 = normal;
  pcGp000002fc = p;
  iVar1 = CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(1,0,0);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(0,1,0);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(0,0,1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(-1,0,0);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(0,-1,0);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(0,0,-1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(1,0,0);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(0,1,0);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(0,0,1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(-1,0,0);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(0,-1,0);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(0,0,-1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = CHECK_VERTEX_WITH_DIRS__Fiii(1,1,1);
  if (((((iVar1 == 0) && (iVar1 = CHECK_VERTEX_WITH_DIRS__Fiii(1,1,-1), iVar1 == 0)) &&
       (iVar1 = CHECK_VERTEX_WITH_DIRS__Fiii(1,-1,1), iVar1 == 0)) &&
      ((iVar1 = CHECK_VERTEX_WITH_DIRS__Fiii(1,-1,-1), iVar1 == 0 &&
       (iVar1 = CHECK_VERTEX_WITH_DIRS__Fiii(-1,1,1), iVar1 == 0)))) &&
     ((iVar1 = CHECK_VERTEX_WITH_DIRS__Fiii(-1,1,-1), iVar1 == 0 &&
      ((iVar1 = CHECK_VERTEX_WITH_DIRS__Fiii(-1,-1,1), iVar1 == 0 &&
       (iVar1 = CHECK_VERTEX_WITH_DIRS__Fiii(-1,-1,-1), iVar1 == 0)))))) {
    iVar1 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(1,1,1);
    if ((((iVar1 == 0) && (iVar1 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(1,1,-1), iVar1 == 0)) &&
        (iVar1 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(1,-1,1), iVar1 == 0)) &&
       (((iVar1 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(1,-1,-1), iVar1 == 0 &&
         (iVar1 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(-1,1,1), iVar1 == 0)) &&
        ((iVar1 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(-1,1,-1), iVar1 == 0 &&
         ((iVar1 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(-1,-1,1), iVar1 == 0 &&
          (iVar1 = CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(-1,-1,-1), iVar1 == 0)))))))) {
      return 0;
    }
    iVar8 = (o1->linearVel).x;
    iVar4 = (o0->linearVel).x;
    iVar1 = iVar8 - iVar4;
    if (iVar1 < 1) {
      iVar1 = iVar4 - iVar8;
    }
    iVar8 = (o1->linearVel).y;
    iVar4 = (o0->linearVel).y;
    iVar9 = iVar8 - iVar4;
    if (iVar9 < 1) {
      iVar9 = iVar4 - iVar8;
    }
    iVar10 = (o1->linearVel).z;
    iVar4 = (o0->linearVel).z;
    iVar8 = iVar10 - iVar4;
    if (iVar8 < 1) {
      iVar8 = iVar4 - iVar10;
    }
    if (iVar1 < iVar9) {
      iVar1 = iVar9;
    }
    if (iVar1 < iVar8) {
      iVar1 = iVar8;
    }
    uGp000002ec = (uint)(0xf0000 < iVar1);
    if (0xf0000 < iVar1) {
      iVar1 = (o0->linearVel).x;
      iVar4 = (o0->linearVel).y;
      iVar8 = (o0->linearVel).z;
      local_60 = (o1->orientMat).m[0];
      local_5c = (o1->orientMat).m[1];
      local_58 = (o1->orientMat).m[2];
      local_50 = (o1->orientMat).m[3];
      local_4c = (o1->orientMat).m[4];
      local_48 = (o1->orientMat).m[5];
      local_40 = (o1->orientMat).m[6];
      local_3c = (o1->orientMat).m[7];
      local_38 = (o1->orientMat).m[8];
      if (iGp0000184c < 0) {
        local_60 = -local_60;
        local_58 = -local_58;
        local_5c = -local_5c;
      }
      if (iGp00001850 < 0) {
        local_50 = -local_50;
        local_48 = -local_48;
        local_4c = -local_4c;
      }
      if (iGp00001854 < 0) {
        local_40 = -local_40;
        local_38 = -local_38;
        local_3c = -local_3c;
      }
      iVar9 = local_60;
      if (local_60 < 0) {
        iVar9 = local_60 + 0xff;
      }
      iVar10 = iVar1;
      if (iVar1 < 0) {
        iVar10 = iVar1 + 0xff;
      }
      iVar2 = local_5c;
      if (local_5c < 0) {
        iVar2 = local_5c + 0xff;
      }
      iVar5 = iVar4;
      if (iVar4 < 0) {
        iVar5 = iVar4 + 0xff;
      }
      iVar3 = local_58;
      if (local_58 < 0) {
        iVar3 = local_58 + 0xff;
      }
      iVar6 = iVar8;
      if (iVar8 < 0) {
        iVar6 = iVar8 + 0xff;
      }
      iVar9 = (iVar9 >> 8) * (iVar10 >> 8) + (iVar2 >> 8) * (iVar5 >> 8) +
              (iVar3 >> 8) * (iVar6 >> 8);
      iVar2 = local_50;
      if (local_50 < 0) {
        iVar2 = local_50 + 0xff;
      }
      iVar3 = local_4c;
      if (local_4c < 0) {
        iVar3 = local_4c + 0xff;
      }
      iVar7 = local_48;
      if (local_48 < 0) {
        iVar7 = local_48 + 0xff;
      }
      iVar10 = (iVar2 >> 8) * (iVar10 >> 8) + (iVar3 >> 8) * (iVar5 >> 8) +
               (iVar7 >> 8) * (iVar6 >> 8);
      iVar2 = local_40;
      if (local_40 < 0) {
        iVar2 = local_40 + 0xff;
      }
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xff;
      }
      iVar5 = local_3c;
      if (local_3c < 0) {
        iVar5 = local_3c + 0xff;
      }
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      iVar3 = local_38;
      if (local_38 < 0) {
        iVar3 = local_38 + 0xff;
      }
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xff;
      }
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      if (iVar10 < 0) {
        iVar10 = -iVar10;
      }
      iVar1 = (iVar2 >> 8) * (iVar1 >> 8) + (iVar5 >> 8) * (iVar4 >> 8) +
              (iVar3 >> 8) * (iVar8 >> 8);
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar10 < iVar9) && (iVar1 < iVar9)) {
LAB_8008ff94:
        normal->x = local_60;
        normal->y = local_5c;
        normal->z = local_58;
        return 1;
      }
      if (iVar10 <= iVar1) {
LAB_8008ffe0:
        normal->x = local_40;
        normal->y = local_3c;
        normal->z = local_38;
        return 1;
      }
LAB_8008ffc0:
      normal->x = local_50;
      normal->y = local_4c;
      normal->z = local_48;
      return 1;
    }
    if (iGp0000184c < 0) {
      iVar1 = (o1->dimension).x + iGp0000184c;
    }
    else {
      iVar1 = (o1->dimension).x - iGp0000184c;
    }
    if (iGp00001850 < 0) {
      iVar4 = (o1->dimension).y + iGp00001850;
    }
    else {
      iVar4 = (o1->dimension).y - iGp00001850;
    }
    if (iGp00001854 < 0) {
      iVar8 = (o1->dimension).z + iGp00001854;
    }
    else {
      iVar8 = (o1->dimension).z - iGp00001854;
    }
    if ((iVar1 < iVar4) && (iVar1 < iVar8)) {
      iVar1 = (o1->orientMat).m[1];
      iVar4 = (o1->orientMat).m[2];
      normal->x = (o1->orientMat).m[0];
      normal->y = iVar1;
      normal->z = iVar4;
      iVar1 = iGp0000184c;
    }
    else {
      if (iVar4 < iVar8) {
        iVar1 = (o1->orientMat).m[4];
        iVar4 = (o1->orientMat).m[5];
        normal->x = (o1->orientMat).m[3];
        normal->y = iVar1;
        normal->z = iVar4;
        iVar1 = iGp00001850;
      }
      else {
        iVar1 = (o1->orientMat).m[7];
        iVar4 = (o1->orientMat).m[8];
        normal->x = (o1->orientMat).m[6];
        normal->y = iVar1;
        normal->z = iVar4;
        iVar1 = iGp00001854;
      }
    }
    if (-1 < iVar1) {
      return 1;
    }
  }
  else {
    iVar8 = (o1->linearVel).x;
    iVar4 = (o0->linearVel).x;
    iVar1 = iVar8 - iVar4;
    if (iVar1 < 1) {
      iVar1 = iVar4 - iVar8;
    }
    iVar8 = (o1->linearVel).y;
    iVar4 = (o0->linearVel).y;
    iVar9 = iVar8 - iVar4;
    if (iVar9 < 1) {
      iVar9 = iVar4 - iVar8;
    }
    iVar10 = (o1->linearVel).z;
    iVar4 = (o0->linearVel).z;
    iVar8 = iVar10 - iVar4;
    if (iVar8 < 1) {
      iVar8 = iVar4 - iVar10;
    }
    if (iVar1 < iVar9) {
      iVar1 = iVar9;
    }
    if (iVar1 < iVar8) {
      iVar1 = iVar8;
    }
    uGp000002ec = (uint)(0xf0000 < iVar1);
    if (0xf0000 < iVar1) {
      iVar1 = (o1->linearVel).x;
      iVar4 = (o1->linearVel).y;
      iVar8 = (o1->linearVel).z;
      local_60 = (o0->orientMat).m[0];
      local_5c = (o0->orientMat).m[1];
      local_58 = (o0->orientMat).m[2];
      local_50 = (o0->orientMat).m[3];
      local_4c = (o0->orientMat).m[4];
      local_48 = (o0->orientMat).m[5];
      local_40 = (o0->orientMat).m[6];
      local_3c = (o0->orientMat).m[7];
      local_38 = (o0->orientMat).m[8];
      if (0 < iGp0000184c) {
        local_60 = -local_60;
        local_58 = -local_58;
        local_5c = -local_5c;
      }
      if (0 < iGp00001850) {
        local_50 = -local_50;
        local_48 = -local_48;
        local_4c = -local_4c;
      }
      if (0 < iGp00001854) {
        local_40 = -local_40;
        local_38 = -local_38;
        local_3c = -local_3c;
      }
      iVar9 = local_60;
      if (local_60 < 0) {
        iVar9 = local_60 + 0xff;
      }
      iVar10 = iVar1;
      if (iVar1 < 0) {
        iVar10 = iVar1 + 0xff;
      }
      iVar2 = local_5c;
      if (local_5c < 0) {
        iVar2 = local_5c + 0xff;
      }
      iVar5 = iVar4;
      if (iVar4 < 0) {
        iVar5 = iVar4 + 0xff;
      }
      iVar3 = local_58;
      if (local_58 < 0) {
        iVar3 = local_58 + 0xff;
      }
      iVar6 = iVar8;
      if (iVar8 < 0) {
        iVar6 = iVar8 + 0xff;
      }
      iVar9 = (iVar9 >> 8) * (iVar10 >> 8) + (iVar2 >> 8) * (iVar5 >> 8) +
              (iVar3 >> 8) * (iVar6 >> 8);
      iVar2 = local_50;
      if (local_50 < 0) {
        iVar2 = local_50 + 0xff;
      }
      iVar3 = local_4c;
      if (local_4c < 0) {
        iVar3 = local_4c + 0xff;
      }
      iVar7 = local_48;
      if (local_48 < 0) {
        iVar7 = local_48 + 0xff;
      }
      iVar10 = (iVar2 >> 8) * (iVar10 >> 8) + (iVar3 >> 8) * (iVar5 >> 8) +
               (iVar7 >> 8) * (iVar6 >> 8);
      iVar2 = local_40;
      if (local_40 < 0) {
        iVar2 = local_40 + 0xff;
      }
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xff;
      }
      iVar5 = local_3c;
      if (local_3c < 0) {
        iVar5 = local_3c + 0xff;
      }
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      iVar3 = local_38;
      if (local_38 < 0) {
        iVar3 = local_38 + 0xff;
      }
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xff;
      }
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      if (iVar10 < 0) {
        iVar10 = -iVar10;
      }
      iVar1 = (iVar2 >> 8) * (iVar1 >> 8) + (iVar5 >> 8) * (iVar4 >> 8) +
              (iVar3 >> 8) * (iVar8 >> 8);
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((iVar10 < iVar9) && (iVar1 < iVar9)) goto LAB_8008ff94;
      if (iVar10 <= iVar1) goto LAB_8008ffe0;
      goto LAB_8008ffc0;
    }
    if (iGp0000184c < 0) {
      iVar1 = (o0->dimension).x + iGp0000184c;
    }
    else {
      iVar1 = (o0->dimension).x - iGp0000184c;
    }
    if (iGp00001850 < 0) {
      iVar4 = (o0->dimension).y + iGp00001850;
    }
    else {
      iVar4 = (o0->dimension).y - iGp00001850;
    }
    if (iGp00001854 < 0) {
      iVar8 = (o0->dimension).z + iGp00001854;
    }
    else {
      iVar8 = (o0->dimension).z - iGp00001854;
    }
    if ((iVar1 < iVar4) && (iVar1 < iVar8)) {
      iVar1 = (o0->orientMat).m[1];
      iVar4 = (o0->orientMat).m[2];
      normal->x = (o0->orientMat).m[0];
      normal->y = iVar1;
      normal->z = iVar4;
      iVar1 = iGp0000184c;
    }
    else {
      if (iVar4 < iVar8) {
        iVar1 = (o0->orientMat).m[4];
        iVar4 = (o0->orientMat).m[5];
        normal->x = (o0->orientMat).m[3];
        normal->y = iVar1;
        normal->z = iVar4;
        iVar1 = iGp00001850;
      }
      else {
        iVar1 = (o0->orientMat).m[7];
        iVar4 = (o0->orientMat).m[8];
        normal->x = (o0->orientMat).m[6];
        normal->y = iVar1;
        normal->z = iVar4;
        iVar1 = iGp00001854;
      }
    }
    if (iVar1 < 1) {
      return 1;
    }
  }
  normal->x = -normal->x;
  normal->z = -normal->z;
  normal->y = -normal->y;
  return 1;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Collide_TestObjectVertices__FP13BO_tNewtonObjT0P8coorddefT2(struct BO_tNewtonObj *o0 /*$s3*/, struct BO_tNewtonObj *o1 /*$s2*/, struct coorddef *p /*stack 8*/, struct coorddef *normal /*stack 12*/)
 // line 1039, offset 0x80090144
	/* begin block 1 */
		// Start line: 1040
		// Start offset: 0x80090144
		// Variables:
	// 		int collisionHappened; // $s0
	// 		int ctr; // $s5
	// 		int numbackoffsteps; // $fp
	// 		struct coorddef backoff0; // stack offset -160
	// 		struct coorddef backoff1; // stack offset -144

		/* begin block 1.1 */
			// Start line: 1103
			// Start offset: 0x80090A64

			/* begin block 1.1.1 */
				// Start line: 1107
				// Start offset: 0x80090A8C
				// Variables:
			// 		struct coorddef relativePosition; // stack offset -128

				/* begin block 1.1.1.1 */
					// Start line: 1132
					// Start offset: 0x80090E08

					/* begin block 1.1.1.1.1 */
						// Start line: 1133
						// Start offset: 0x80090E10
						// Variables:
					// 		struct coorddef relativeVelocity; // stack offset -112
					// 		int useVelocity; // $s0
					// 		struct coorddef relativeUnit; // stack offset -96
					// 		int maxrv; // $v1
					// 		int maxrp; // $v0
					// 		int inverseRelativeVelocityLength; // $s1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1146
							// Start offset: 0x80090E70

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1149
								// Start offset: 0x80090E8C

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1152
									// Start offset: 0x80090EC4

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1156
										// Start offset: 0x80090EDC
										// Variables:
									// 		int temp; // $a1
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80090EF8
									// End Line: 1163

									/* begin block 1.1.1.1.1.1.1.1.2 */
										// Start line: 1166
										// Start offset: 0x80090F00
										// Variables:
									// 		int dot; // $v1
									// 		struct coorddef velocityUnit; // stack offset -80
									// 		struct coorddef positionUnit; // stack offset -64

										/* begin block 1.1.1.1.1.1.1.1.2.1 */
											// Start line: 1176
											// Start offset: 0x80090FC8

											/* begin block 1.1.1.1.1.1.1.1.2.1.1 */
												// Start line: 1179
												// Start offset: 0x80090FE8
												// Variables:
											// 		int temp; // $a1
											/* end block 1.1.1.1.1.1.1.1.2.1.1 */
											// End offset: 0x80091018
											// End Line: 1186

											/* begin block 1.1.1.1.1.1.1.1.2.1.2 */
												// Start line: 1188
												// Start offset: 0x80091018

												/* begin block 1.1.1.1.1.1.1.1.2.1.2.1 */
													// Start line: 1188
													// Start offset: 0x80091018

													/* begin block 1.1.1.1.1.1.1.1.2.1.2.1.1 */
														// Start line: 1189
														// Start offset: 0x80091018
													/* end block 1.1.1.1.1.1.1.1.2.1.2.1.1 */
													// End offset: 0x80091018
													// End Line: 1196
												/* end block 1.1.1.1.1.1.1.1.2.1.2.1 */
												// End offset: 0x80091018
												// End Line: 1196
											/* end block 1.1.1.1.1.1.1.1.2.1.2 */
											// End offset: 0x80091018
											// End Line: 1196
										/* end block 1.1.1.1.1.1.1.1.2.1 */
										// End offset: 0x80091018
										// End Line: 1196
									/* end block 1.1.1.1.1.1.1.1.2 */
									// End offset: 0x80091018
									// End Line: 1196
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80091018
								// End Line: 1196
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80091018
							// End Line: 1196
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80091018
						// End Line: 1196

						/* begin block 1.1.1.1.1.2 */
							// Start line: 1202
							// Start offset: 0x80091018

							/* begin block 1.1.1.1.1.2.1 */
								// Start line: 1233
								// Start offset: 0x8009110C
								// Variables:
							// 		int totalMass; // $s0
							// 		int r0; // $a0
							// 		int r1; // $s0
							/* end block 1.1.1.1.1.2.1 */
							// End offset: 0x800912C4
							// End Line: 1262
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x800912C4
						// End Line: 1262
					/* end block 1.1.1.1.1 */
					// End offset: 0x800912C8
					// End Line: 1266
				/* end block 1.1.1.1 */
				// End offset: 0x800912C8
				// End Line: 1266
			/* end block 1.1.1 */
			// End offset: 0x800912C8
			// End Line: 1269
		/* end block 1.1 */
		// End offset: 0x80091344
		// End Line: 1271
	/* end block 1 */
	// End offset: 0x80091344
	// End Line: 1273

int Collide_TestObjectVertices__FP13BO_tNewtonObjT0P8coorddefT2( (BO_tNewtonObj *o0,BO_tNewtonObj *o1,coorddef *p,coorddef *normal)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int local_a0;
  int local_9c;
  int local_98;
  int local_90;
  int local_8c;
  int local_88;
  coorddef local_70;
  coorddef local_60;
  coorddef local_50;
  coorddef local_40;
  coorddef *local_30;
  
  iVar13 = 0;
  iVar7 = (o0->orientMat).m[0];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (o1->orientMat).m[0];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = (o0->orientMat).m[1];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (o1->orientMat).m[1];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar9 = (o0->orientMat).m[2];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar4 = (o1->orientMat).m[2];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  _basisDots = (iVar7 >> 8) * (iVar2 >> 8) + (iVar8 >> 8) * (iVar3 >> 8) +
               (iVar9 >> 8) * (iVar4 >> 8);
  iVar7 = (o0->orientMat).m[0];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (o1->orientMat).m[3];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = (o0->orientMat).m[1];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (o1->orientMat).m[4];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar9 = (o0->orientMat).m[2];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar4 = (o1->orientMat).m[5];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  _DAT_8013e00c =
       (iVar7 >> 8) * (iVar2 >> 8) + (iVar8 >> 8) * (iVar3 >> 8) + (iVar9 >> 8) * (iVar4 >> 8);
  iVar7 = (o0->orientMat).m[0];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (o1->orientMat).m[6];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = (o0->orientMat).m[1];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (o1->orientMat).m[7];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar9 = (o0->orientMat).m[2];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar4 = (o1->orientMat).m[8];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  _DAT_8013e010 =
       (iVar7 >> 8) * (iVar2 >> 8) + (iVar8 >> 8) * (iVar3 >> 8) + (iVar9 >> 8) * (iVar4 >> 8);
  iVar7 = (o0->orientMat).m[3];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (o1->orientMat).m[0];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = (o0->orientMat).m[4];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (o1->orientMat).m[1];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar9 = (o0->orientMat).m[5];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar4 = (o1->orientMat).m[2];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  _DAT_8013e014 =
       (iVar7 >> 8) * (iVar2 >> 8) + (iVar8 >> 8) * (iVar3 >> 8) + (iVar9 >> 8) * (iVar4 >> 8);
  iVar7 = (o0->orientMat).m[3];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (o1->orientMat).m[3];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = (o0->orientMat).m[4];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (o1->orientMat).m[4];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar9 = (o0->orientMat).m[5];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar4 = (o1->orientMat).m[5];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  _DAT_8013e018 =
       (iVar7 >> 8) * (iVar2 >> 8) + (iVar8 >> 8) * (iVar3 >> 8) + (iVar9 >> 8) * (iVar4 >> 8);
  iVar7 = (o0->orientMat).m[3];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (o1->orientMat).m[6];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = (o0->orientMat).m[4];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (o1->orientMat).m[7];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar9 = (o0->orientMat).m[5];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar4 = (o1->orientMat).m[8];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  _DAT_8013e01c =
       (iVar7 >> 8) * (iVar2 >> 8) + (iVar8 >> 8) * (iVar3 >> 8) + (iVar9 >> 8) * (iVar4 >> 8);
  iVar7 = (o0->orientMat).m[6];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (o1->orientMat).m[0];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = (o0->orientMat).m[7];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (o1->orientMat).m[1];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar9 = (o0->orientMat).m[8];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar4 = (o1->orientMat).m[2];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  _DAT_8013e020 =
       (iVar7 >> 8) * (iVar2 >> 8) + (iVar8 >> 8) * (iVar3 >> 8) + (iVar9 >> 8) * (iVar4 >> 8);
  iVar7 = (o0->orientMat).m[6];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (o1->orientMat).m[3];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = (o0->orientMat).m[7];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (o1->orientMat).m[4];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar9 = (o0->orientMat).m[8];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar4 = (o1->orientMat).m[5];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  _DAT_8013e024 =
       (iVar7 >> 8) * (iVar2 >> 8) + (iVar8 >> 8) * (iVar3 >> 8) + (iVar9 >> 8) * (iVar4 >> 8);
  iVar7 = (o0->orientMat).m[6];
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  iVar2 = (o1->orientMat).m[6];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar8 = (o0->orientMat).m[7];
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0xff;
  }
  iVar3 = (o1->orientMat).m[7];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar9 = (o0->orientMat).m[8];
  if (iVar9 < 0) {
    iVar9 = iVar9 + 0xff;
  }
  iVar4 = (o1->orientMat).m[8];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  _DAT_8013e028 =
       (iVar7 >> 8) * (iVar2 >> 8) + (iVar8 >> 8) * (iVar3 >> 8) + (iVar9 >> 8) * (iVar4 >> 8);
  iVar7 = _basisDots;
  if (_basisDots < 0) {
    iVar7 = _basisDots + 0xff;
  }
  iVar2 = (o1->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _scaledBasisDots = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e00c;
  if (_DAT_8013e00c < 0) {
    iVar7 = _DAT_8013e00c + 0xff;
  }
  iVar2 = (o1->dimension).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e03c = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e010;
  if (_DAT_8013e010 < 0) {
    iVar7 = _DAT_8013e010 + 0xff;
  }
  iVar2 = (o1->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e040 = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e014;
  if (_DAT_8013e014 < 0) {
    iVar7 = _DAT_8013e014 + 0xff;
  }
  iVar2 = (o1->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e044 = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e018;
  if (_DAT_8013e018 < 0) {
    iVar7 = _DAT_8013e018 + 0xff;
  }
  iVar2 = (o1->dimension).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e048 = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e01c;
  if (_DAT_8013e01c < 0) {
    iVar7 = _DAT_8013e01c + 0xff;
  }
  iVar2 = (o1->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e04c = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e020;
  if (_DAT_8013e020 < 0) {
    iVar7 = _DAT_8013e020 + 0xff;
  }
  iVar2 = (o1->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e050 = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e024;
  if (_DAT_8013e024 < 0) {
    iVar7 = _DAT_8013e024 + 0xff;
  }
  iVar2 = (o1->dimension).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e054 = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e028;
  if (_DAT_8013e028 < 0) {
    iVar7 = _DAT_8013e028 + 0xff;
  }
  iVar2 = (o1->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e058 = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _basisDots;
  if (_basisDots < 0) {
    iVar7 = _basisDots + 0xff;
  }
  iVar2 = (o0->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _scaledBasisDotsOther = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e00c;
  if (_DAT_8013e00c < 0) {
    iVar7 = _DAT_8013e00c + 0xff;
  }
  iVar2 = (o0->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e06c = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e010;
  if (_DAT_8013e010 < 0) {
    iVar7 = _DAT_8013e010 + 0xff;
  }
  iVar2 = (o0->dimension).x;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e070 = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e014;
  if (_DAT_8013e014 < 0) {
    iVar7 = _DAT_8013e014 + 0xff;
  }
  iVar2 = (o0->dimension).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e074 = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e018;
  if (_DAT_8013e018 < 0) {
    iVar7 = _DAT_8013e018 + 0xff;
  }
  iVar2 = (o0->dimension).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e078 = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e01c;
  if (_DAT_8013e01c < 0) {
    iVar7 = _DAT_8013e01c + 0xff;
  }
  iVar2 = (o0->dimension).y;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e07c = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e020;
  if (_DAT_8013e020 < 0) {
    iVar7 = _DAT_8013e020 + 0xff;
  }
  iVar2 = (o0->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e080 = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e024;
  if (_DAT_8013e024 < 0) {
    iVar7 = _DAT_8013e024 + 0xff;
  }
  iVar2 = (o0->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e084 = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = _DAT_8013e028;
  if (_DAT_8013e028 < 0) {
    iVar7 = _DAT_8013e028 + 0xff;
  }
  iVar2 = (o0->dimension).z;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  _DAT_8013e088 = (iVar7 >> 8) * (iVar2 >> 8);
  iVar7 = 0;
  local_30 = &local_70;
  do {
    if (0x1f < iVar7) {
      return iVar13;
    }
    iVar3 = (o1->position).x - (o0->position).x;
    iVar9 = (o1->position).y - (o0->position).y;
    iVar2 = (o1->position).z - (o0->position).z;
    iVar8 = (o0->orientMat).m[0];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + 0xff;
    }
    iVar10 = (o0->orientMat).m[1];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar12 = iVar9;
    if (iVar9 < 0) {
      iVar12 = iVar9 + 0xff;
    }
    iVar11 = (o0->orientMat).m[2];
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = iVar2 + 0xff;
    }
    _basisDotRelative =
         (iVar8 >> 8) * (iVar4 >> 8) + (iVar10 >> 8) * (iVar12 >> 8) + (iVar11 >> 8) * (iVar5 >> 8);
    iVar8 = (o0->orientMat).m[3];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar10 = (o0->orientMat).m[4];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar11 = (o0->orientMat).m[5];
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = iVar2 + 0xff;
    }
    _DAT_8013e09c =
         (iVar8 >> 8) * (iVar4 >> 8) + (iVar10 >> 8) * (iVar12 >> 8) + (iVar11 >> 8) * (iVar5 >> 8);
    iVar8 = (o0->orientMat).m[6];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + 0xff;
    }
    iVar10 = (o0->orientMat).m[7];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar12 = iVar9;
    if (iVar9 < 0) {
      iVar12 = iVar9 + 0xff;
    }
    iVar11 = (o0->orientMat).m[8];
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = iVar2 + 0xff;
    }
    _DAT_8013e0a0 =
         (iVar8 >> 8) * (iVar4 >> 8) + (iVar10 >> 8) * (iVar12 >> 8) + (iVar11 >> 8) * (iVar5 >> 8);
    iVar8 = (o1->orientMat).m[0];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar10 = (o1->orientMat).m[1];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar11 = (o1->orientMat).m[2];
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = iVar2 + 0xff;
    }
    _DAT_8013e0a4 =
         (iVar8 >> 8) * (iVar4 >> 8) + (iVar10 >> 8) * (iVar12 >> 8) + (iVar11 >> 8) * (iVar5 >> 8);
    iVar8 = (o1->orientMat).m[3];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + 0xff;
    }
    iVar10 = (o1->orientMat).m[4];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar12 = iVar9;
    if (iVar9 < 0) {
      iVar12 = iVar9 + 0xff;
    }
    iVar11 = (o1->orientMat).m[5];
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = iVar2 + 0xff;
    }
    _DAT_8013e0a8 =
         (iVar8 >> 8) * (iVar4 >> 8) + (iVar10 >> 8) * (iVar12 >> 8) + (iVar11 >> 8) * (iVar5 >> 8);
    iVar8 = (o1->orientMat).m[6];
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar10 = (o1->orientMat).m[7];
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar11 = (o1->orientMat).m[8];
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    iVar5 = iVar2;
    if (iVar2 < 0) {
      iVar5 = iVar2 + 0xff;
    }
    _DAT_8013e0ac =
         (iVar8 >> 8) * (iVar4 >> 8) + (iVar10 >> 8) * (iVar12 >> 8) + (iVar11 >> 8) * (iVar5 >> 8);
    iVar8 = Collide_DoActualObjectCollisionCheck__FP13BO_tNewtonObjT0P8coorddefT2(o0,o1,p,normal);
    if (iVar8 == 0) {
      return iVar13;
    }
    if (iVar13 == 0) {
      bVar1 = false;
      local_70.x = (o0->linearVel).x - (o1->linearVel).x;
      iVar13 = 0;
      local_70.y = (o0->linearVel).y - (o1->linearVel).y;
      local_70.z = (o0->linearVel).z - (o1->linearVel).z;
      iVar8 = local_70.x;
      if (local_70.x < 0) {
        iVar8 = local_70.x + 0xff;
      }
      iVar4 = local_70.z;
      if (local_70.z < 0) {
        iVar4 = local_70.z + 0xff;
      }
      if (0xe100000 < (iVar8 >> 8) * (iVar8 >> 8) + (iVar4 >> 8) * (iVar4 >> 8)) {
        iVar8 = iVar3;
        if (iVar3 < 0) {
          iVar8 = iVar3 + 0xff;
        }
        iVar4 = iVar2;
        if (iVar2 < 0) {
          iVar4 = iVar2 + 0xff;
        }
        if ((iVar8 >> 8) * (iVar8 >> 8) + (iVar4 >> 8) * (iVar4 >> 8) < 0xccc) {
          uVar6 = Math_VectorLength__FP8coorddef(&local_70);
          iVar13 = 0x10000;
          if ((int)((uVar6 >> 0x1f) + uVar6) >> 1 == 0) {
            bVar1 = true;
          }
          else {
LAB_80091008:
            iVar13 = fixeddiv(0x8000);
LAB_80091014:
            bVar1 = true;
          }
        }
        else {
          local_50.x = local_70.x;
          local_50.y = local_70.y;
          local_50.z = local_70.z;
          Math_NormalizeVector__FP8coorddef(&local_50);
          local_40.x = iVar3;
          local_40.y = iVar9;
          local_40.z = iVar2;
          Math_NormalizeShortVector__FP8coorddef(&local_40);
          iVar8 = local_50.x;
          if (local_50.x < 0) {
            iVar8 = local_50.x + 0xff;
          }
          iVar4 = local_40.x;
          if (local_40.x < 0) {
            iVar4 = local_40.x + 0xff;
          }
          iVar10 = local_50.y;
          if (local_50.y < 0) {
            iVar10 = local_50.y + 0xff;
          }
          iVar12 = local_40.y;
          if (local_40.y < 0) {
            iVar12 = local_40.y + 0xff;
          }
          iVar11 = local_50.z;
          if (local_50.z < 0) {
            iVar11 = local_50.z + 0xff;
          }
          iVar5 = local_40.z;
          if (local_40.z < 0) {
            iVar5 = local_40.z + 0xff;
          }
          if (0xd999 < (iVar8 >> 8) * (iVar4 >> 8) + (iVar10 >> 8) * (iVar12 >> 8) +
                       (iVar11 >> 8) * (iVar5 >> 8)) {
            uVar6 = Math_VectorLength__FP8coorddef(local_30);
            iVar13 = 0x10000;
            if ((int)((uVar6 >> 0x1f) + uVar6) >> 1 != 0) goto LAB_80091008;
            goto LAB_80091014;
          }
        }
      }
      if (bVar1) {
        iVar2 = -iVar13;
        if (o0->objID < 0x200) {
          iVar8 = fixedmult(iVar2,(o0->linearVel).x);
          iVar3 = fixedmult(iVar2,(o0->linearVel).y);
          iVar2 = fixedmult(iVar2,(o0->linearVel).z);
          local_98 = iVar2 >> 5;
          local_a0 = iVar8 >> 5;
          local_9c = iVar3 >> 5;
        }
        else {
          local_a0 = 0;
          local_9c = 0;
          local_98 = 0;
        }
        iVar13 = -iVar13;
        if (o1->objID < 0x200) {
          iVar2 = fixedmult(iVar13,(o1->linearVel).x);
          iVar8 = fixedmult(iVar13,(o1->linearVel).y);
          iVar13 = fixedmult(iVar13,(o1->linearVel).z);
          local_88 = iVar13 >> 5;
          local_90 = iVar2 >> 5;
          local_8c = iVar8 >> 5;
        }
        else {
          local_90 = 0;
          local_8c = 0;
          local_88 = 0;
        }
      }
      else {
        local_60.x = iVar3;
        local_60.y = iVar9;
        local_60.z = iVar2;
        Math_NormalizeShortVector__FP8coorddef(&local_60);
        iVar2 = o0->mass + o1->mass;
        iVar13 = fixeddiv(o0->mass,iVar2);
        iVar2 = fixeddiv(o1->mass,iVar2);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 3;
        }
        iVar2 = iVar2 >> 2;
        iVar8 = local_60.x * iVar2;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 0x3fff;
        }
        iVar3 = local_60.y * iVar2;
        local_a0 = -(iVar8 >> 0xe) >> 5;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0x3fff;
        }
        local_9c = -(iVar3 >> 0xe) >> 5;
        iVar2 = local_60.z * iVar2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x3fff;
        }
        local_98 = -(iVar2 >> 0xe) >> 5;
        if (iVar13 < 0) {
          iVar13 = iVar13 + 3;
        }
        iVar13 = iVar13 >> 2;
        uVar6 = local_60.x * iVar13;
        uVar14 = local_60.y * iVar13;
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 + 0x3fff;
        }
        local_90 = (int)uVar6 >> 0x13;
        if ((int)uVar14 < 0) {
          uVar14 = uVar14 + 0x3fff;
        }
        local_8c = (int)uVar14 >> 0x13;
        uVar15 = local_60.z * iVar13;
        if ((int)uVar15 < 0) {
          uVar15 = uVar15 + 0x3fff;
        }
        local_88 = (int)uVar15 >> 0x13;
        if (0x1ff < o0->objID) {
          local_90 = (int)(local_90 + (uVar6 >> 0x1f)) >> 1;
          local_8c = (int)(local_8c + (uVar14 >> 0x1f)) >> 1;
          local_88 = (int)(local_88 + (uVar15 >> 0x1f)) >> 1;
        }
        iVar13 = 1;
        if (o1->objID < 0x200) goto LAB_800912c8;
        local_a0 = (int)(local_a0 + ((uint)-(iVar8 >> 0xe) >> 0x1f)) >> 1;
        local_9c = (int)(local_9c + ((uint)-(iVar3 >> 0xe) >> 0x1f)) >> 1;
        local_98 = (int)(local_98 + ((uint)-(iVar2 >> 0xe) >> 0x1f)) >> 1;
      }
      iVar13 = 1;
    }
LAB_800912c8:
    (o0->position).x = (o0->position).x + local_a0;
    (o0->position).y = (o0->position).y + local_9c;
    (o0->position).z = (o0->position).z + local_98;
    (o1->position).x = (o1->position).x + local_90;
    (o1->position).y = (o1->position).y + local_8c;
    iVar7 = iVar7 + 1;
    (o1->position).z = (o1->position).z + local_88;
  } while( true );


}




// decompiled code
// original method signature: 
// int /*$ra*/ Collide_CheckForCollisionBetween__FP13BO_tNewtonObjT0(struct BO_tNewtonObj *o0 /*$s1*/, struct BO_tNewtonObj *o1 /*$s2*/)
 // line 1365, offset 0x80091374
	/* begin block 1 */
		// Start line: 1366
		// Start offset: 0x80091374
		// Variables:
	// 		struct coorddef p; // stack offset -56
	// 		struct coorddef normal; // stack offset -40

		/* begin block 1.1 */
			// Start line: 1377
			// Start offset: 0x800913C0
			// Variables:
		// 		int count; // $s0
		/* end block 1.1 */
		// End offset: 0x800914B4
		// End Line: 1409
	/* end block 1 */
	// End offset: 0x800914B4
	// End Line: 1416

int Collide_CheckForCollisionBetween__FP13BO_tNewtonObjT0(BO_tNewtonObj *o0,BO_tNewtonObj *o1)
{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  coorddef cStack56;
  coorddef cStack40;
  
  (o0->collision).impulse = 0;
  (o1->collision).impulse = 0;
  iVar2 = Collide_TestObjectVertices__FP13BO_tNewtonObjT0P8coorddefT2(o0,o1,&cStack56,&cStack40);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    Collide_DoObjectObjectCollision__FP13BO_tNewtonObjT0P8coorddefT2(o0,o1,&cStack56,&cStack40);
    iVar4 = 8;
    Physics_TestForBarrierCollision__FP8Car_tObj((Car_tObj *)o0);
    Physics_TestForBarrierCollision__FP8Car_tObj((Car_tObj *)o1);
    while( true ) {
      iVar3 = Collide_TestObjectVertices__FP13BO_tNewtonObjT0P8coorddefT2(o0,o1,&cStack56,&cStack40)
      ;
      iVar2 = 1;
      if ((iVar3 == 0) || (bVar1 = iVar4 < 1, iVar4 = iVar4 + -1, bVar1)) break;
      iVar2 = Collide_DoObjectObjectCollision__FP13BO_tNewtonObjT0P8coorddefT2
                        (o0,o1,&cStack56,&cStack40);
      if (iVar2 == 0) {
        return 1;
      }
      Physics_TestForBarrierCollision__FP8Car_tObj((Car_tObj *)o0);
      Physics_TestForBarrierCollision__FP8Car_tObj((Car_tObj *)o1);
      if (iVar4 == 0) {
        if ((o0[1].collision.lastCollision != 0) && (0xf0000 < o0->speedXZ)) {
          Newton_AddDamageZone__FP13BO_tNewtonObjiii(o0,0x640000,8,2);
        }
        if ((o1[1].collision.lastCollision != 0) && (0xf0000 < o1->speedXZ)) {
          Newton_AddDamageZone__FP13BO_tNewtonObjiii(o1,0x640000,8,2);
        }
      }
    }
  }
  return iVar2;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Collide_ClearCollisionRegistry__Fv()
 // line 1424, offset 0x800914d4
	/* begin block 1 */
		// Start line: 1425
		// Start offset: 0x800914D4
		// Variables:
	// 		int carLoop; // $v1
	// 		struct coorddef relVec; // stack offset -64
	// 		struct coorddef rightVec; // stack offset -48

		/* begin block 1.1 */
			// Start line: 1425
			// Start offset: 0x800914D4
			// Variables:
		// 		int i; // $s3

			/* begin block 1.1.1 */
				// Start line: 1434
				// Start offset: 0x8009151C

				/* begin block 1.1.1.1 */
					// Start line: 1439
					// Start offset: 0x80091530
					// Variables:
				// 		int slice; // $v1
				/* end block 1.1.1.1 */
				// End offset: 0x80091664
				// End Line: 1457
			/* end block 1.1.1 */
			// End offset: 0x80091664
			// End Line: 1457
		/* end block 1.1 */
		// End offset: 0x80091690
		// End Line: 1459

		/* begin block 1.2 */
			// Start line: 1461
			// Start offset: 0x80091690

			/* begin block 1.2.1 */
				// Start line: 1461
				// Start offset: 0x8009169C
			/* end block 1.2.1 */
			// End offset: 0x800916AC
			// End Line: 1467
		/* end block 1.2 */
		// End offset: 0x800916AC
		// End Line: 1471
	/* end block 1 */
	// End offset: 0x800916AC
	// End Line: 1471

void Collide_ClearCollisionRegistry__Fv(void)
{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  coorddef *cpoint;
  int objIndex;
  undefined4 *puVar10;
  BWorldSm_Pos *slicePos;
  
  objIndex = 0;
  cpoint = (coorddef *)&DAT_80110184;
  slicePos = (BWorldSm_Pos *)&DAT_801100ec;
  puVar10 = &_Collide_gRegistry;
  iGp000002e8 = 0;
  iVar4 = 0;
  while (iVar2 = Object_GetNumIMassObjects__Fv(), objIndex < iVar2) {
    Object_GetIMassObjectMotion__FiP8coorddefP10matrixtdefT1
              (objIndex,cpoint,(matrixtdef *)(&DAT_801101d4 + iVar4),
               (coorddef *)(&DAT_80110190 + iVar4));
    *(undefined4 *)((int)&DAT_801101f8 + iVar4) = 0;
    *(undefined4 *)((int)&DAT_801101fc + iVar4) = 0;
    *(undefined4 *)((int)&DAT_80110200 + iVar4) = 0;
    *(undefined **)puVar10 = &InfiniteMassNewton + iVar4;
    iGp000002e8 = iGp000002e8 + 1;
    BWorldSm_FindClosestSlice__FP8coorddefP12BWorldSm_Pos(cpoint,slicePos);
    piVar3 = (int *)((int)*(short *)((int)&DAT_801100ec + iVar4) * 0x20);
    iVar5 = *(int *)((int)&DAT_80110184 + iVar4) - *piVar3;
    iVar7 = *(int *)((int)&DAT_80110188 + iVar4) - *piVar3;
    iVar9 = *(int *)((int)&DAT_8011018c + iVar4) - *piVar3;
    iVar2 = (int)*(char *)((int)piVar3 + 0x12) * 0x200;
    iVar6 = (int)*(char *)((int)piVar3 + 0x13) * 0x200;
    iVar8 = (int)*(char *)(piVar3 + 5) * 0x200;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    slicePos = (BWorldSm_Pos *)&slicePos[4].quadPts[3].y;
    puVar10 = puVar10 + 1;
    cpoint = cpoint + 0x30;
    objIndex = objIndex + 1;
    *(int *)((int)&DAT_801101a8 + iVar4) =
         (iVar5 >> 8) * (iVar2 >> 8) + (iVar7 >> 8) * (iVar6 >> 8) + (iVar9 >> 8) * (iVar8 >> 8);
    iVar4 = iVar4 + 0x240;
  }
  iVar4 = 0;
  do {
    bVar1 = iVar4 < Cars_gNumCars;
    iVar4 = iVar4 + 1;
  } while (bVar1);
  return;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Collide_CheckAccuratePointRadiusCollision__FP13BO_tNewtonObjP8coorddefi(struct BO_tNewtonObj *newObj /*$s2*/, struct coorddef *point /*$a1*/, int radius /*$s3*/)
 // line 1478, offset 0x800916d4
	/* begin block 1 */
		// Start line: 1479
		// Start offset: 0x800916D4
		// Variables:
	// 		struct coorddef d; // stack offset -40
	// 		int temp; // $s0
	/* end block 1 */
	// End offset: 0x800918B0
	// End Line: 1498

int Collide_CheckAccuratePointRadiusCollision__FP13BO_tNewtonObjP8coorddefi( (BO_tNewtonObj *newObj,coorddef *point,int radius)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = point->x - (newObj->position).x;
  iVar1 = point->z - (newObj->position).z;
  iVar2 = fixedmult(iVar6,(newObj->orientMat).m[0]);
  iVar3 = fixedmult(0,(newObj->orientMat).m[1]);
  iVar4 = fixedmult(iVar1,(newObj->orientMat).m[2]);
  if (iVar2 + iVar3 + iVar4 < 1) {
    iVar2 = fixedmult(iVar6,(newObj->orientMat).m[0]);
    iVar3 = fixedmult(0,(newObj->orientMat).m[1]);
    iVar4 = fixedmult(iVar1,(newObj->orientMat).m[2]);
    iVar2 = -(iVar2 + iVar3 + iVar4);
  }
  else {
    iVar3 = fixedmult(iVar6,(newObj->orientMat).m[0]);
    iVar4 = fixedmult(0,(newObj->orientMat).m[1]);
    iVar2 = fixedmult(iVar1,(newObj->orientMat).m[2]);
    iVar2 = iVar3 + iVar4 + iVar2;
  }
  uVar5 = 0;
  if (iVar2 <= (newObj->dimension).x + radius) {
    iVar2 = fixedmult(iVar6,(newObj->orientMat).m[6]);
    iVar3 = fixedmult(0,(newObj->orientMat).m[7]);
    iVar4 = fixedmult(iVar1,(newObj->orientMat).m[8]);
    if (iVar2 + iVar3 + iVar4 < 1) {
      iVar2 = fixedmult(iVar6,(newObj->orientMat).m[6]);
      iVar3 = fixedmult(0,(newObj->orientMat).m[7]);
      iVar1 = fixedmult(iVar1,(newObj->orientMat).m[8]);
      iVar1 = -(iVar2 + iVar3 + iVar1);
    }
    else {
      iVar2 = fixedmult(iVar6,(newObj->orientMat).m[6]);
      iVar3 = fixedmult(0,(newObj->orientMat).m[7]);
      iVar1 = fixedmult(iVar1,(newObj->orientMat).m[8]);
      iVar1 = iVar2 + iVar3 + iVar1;
    }
    uVar5 = (uint)((newObj->dimension).z + radius < iVar1) ^ 1;
  }
  return uVar5;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Collide_CheckMeForCollisions__FP13BO_tNewtonObj(struct BO_tNewtonObj *newObj /*$s2*/)
 // line 1501, offset 0x800918cc
	/* begin block 1 */
		// Start line: 1502
		// Start offset: 0x800918CC
		// Variables:
	// 		int i; // $s1
	// 		struct BO_tNewtonObj *otherObj; // $s0

		/* begin block 1.1 */
			// Start line: 1537
			// Start offset: 0x8009193C

			/* begin block 1.1.1 */
				// Start line: 1538
				// Start offset: 0x8009194C

				/* begin block 1.1.1.1 */
					// Start line: 1540
					// Start offset: 0x8009194C

					/* begin block 1.1.1.1.1 */
						// Start line: 1541
						// Start offset: 0x80091960
						// Variables:
					// 		int i; // $s5
					// 		int numObjs; // stack offset -56
					// 		int fixedRadius; // stack offset -52
					// 		struct Object_tSimObjList objList; // stack offset -160
					// 		struct coorddef pos; // stack offset -144
					// 		int dist; // $a1

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1552
							// Start offset: 0x80091960

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1553
								// Start offset: 0x80091960

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1555
									// Start offset: 0x80091978
									// Variables:
								// 		struct coorddef pointList[3]; // stack offset -128
								// 		int closestDist; // $s4
								// 		int closestPoint; // $s3
								// 		int numPoints; // stack offset -48

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1555
										// Start offset: 0x8009198C
										// Variables:
									// 		int j; // $s0
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x80091A1C
									// End Line: 1578

									/* begin block 1.1.1.1.1.1.1.1.2 */
										// Start line: 1580
										// Start offset: 0x80091A1C

										/* begin block 1.1.1.1.1.1.1.1.2.1 */
											// Start line: 1581
											// Start offset: 0x80091A24

											/* begin block 1.1.1.1.1.1.1.1.2.1.1 */
												// Start line: 1582
												// Start offset: 0x80091A24

												/* begin block 1.1.1.1.1.1.1.1.2.1.1.1 */
													// Start line: 1583
													// Start offset: 0x80091A44
													// Variables:
												// 		int signCase; // $s1

													/* begin block 1.1.1.1.1.1.1.1.2.1.1.1.1 */
														// Start line: 1584
														// Start offset: 0x80091A44

														/* begin block 1.1.1.1.1.1.1.1.2.1.1.1.1.1 */
															// Start line: 1587
															// Start offset: 0x80091A5C

															/* begin block 1.1.1.1.1.1.1.1.2.1.1.1.1.1.1 */
																// Start line: 1588
																// Start offset: 0x80091A5C

																/* begin block 1.1.1.1.1.1.1.1.2.1.1.1.1.1.1.1 */
																	// Start line: 1588
																	// Start offset: 0x80091A5C

																	/* begin block 1.1.1.1.1.1.1.1.2.1.1.1.1.1.1.1.1 */
																		// Start line: 1592
																		// Start offset: 0x80091A74
																		// Variables:
																	// 		struct coorddef normal; // stack offset -88
																	// 		struct coorddef samplePoint; // stack offset -72
																	// 		int impulse; // $s0
																	/* end block 1.1.1.1.1.1.1.1.2.1.1.1.1.1.1.1.1 */
																	// End offset: 0x80091BE0
																	// End Line: 1618
																/* end block 1.1.1.1.1.1.1.1.2.1.1.1.1.1.1.1 */
																// End offset: 0x80091C7C
																// End Line: 1647
															/* end block 1.1.1.1.1.1.1.1.2.1.1.1.1.1.1 */
															// End offset: 0x80091C7C
															// End Line: 1647
														/* end block 1.1.1.1.1.1.1.1.2.1.1.1.1.1 */
														// End offset: 0x80091C7C
														// End Line: 1647
													/* end block 1.1.1.1.1.1.1.1.2.1.1.1.1 */
													// End offset: 0x80091C7C
													// End Line: 1647
												/* end block 1.1.1.1.1.1.1.1.2.1.1.1 */
												// End offset: 0x80091C7C
												// End Line: 1647
											/* end block 1.1.1.1.1.1.1.1.2.1.1 */
											// End offset: 0x80091C7C
											// End Line: 1647
										/* end block 1.1.1.1.1.1.1.1.2.1 */
										// End offset: 0x80091C7C
										// End Line: 1647
									/* end block 1.1.1.1.1.1.1.1.2 */
									// End offset: 0x80091C7C
									// End Line: 1647
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x80091C7C
								// End Line: 1647
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80091C84
							// End Line: 1655
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80091C84
						// End Line: 1655
					/* end block 1.1.1.1.1 */
					// End offset: 0x80091C84
					// End Line: 1655
				/* end block 1.1.1.1 */
				// End offset: 0x80091C84
				// End Line: 1655
			/* end block 1.1.1 */
			// End offset: 0x80091C84
			// End Line: 1655
		/* end block 1.1 */
		// End offset: 0x80091C84
		// End Line: 1655
	/* end block 1 */
	// End offset: 0x80091E94
	// End Line: 1723

void Collide_CheckMeForCollisions__FP13BO_tNewtonObj(BO_tNewtonObj *newObj)
{
  int objIndex;
  int iVar1;
  int iVar2;
  BO_tNewtonObj *o1;
  coorddef *a;
  int iVar3;
  BO_tNewtonObj **ppBVar4;
  int iVar5;
  int iVar6;
  coorddef normal;
  coorddef local_90;
  coorddef acStack128 [3];
  coorddef local_58;
  coorddef local_48;
  int local_38;
  int local_34;
  int local_30 [2];
  
  if (newObj->active != '\0') {
    if (newObj->simOptz == '\0') {
      objIndex = (newObj->collision).disableCollisionTimer;
      if (0 < objIndex) {
        (newObj->collision).disableCollisionTimer = objIndex + -1;
      }
      if (((newObj->collision).disableCollisionTimer == 0) &&
         ((newObj->groundSurfaceType & 0x40U) != 0)) {
        Object_InitCollisionCheckLoop__FP12BWorldSm_PosP18Object_tSimObjListPi
                  (&newObj->simRoadInfo,(Object_tSimObjList *)&stack0xffffff60,&local_38);
        objIndex = 0;
        while (iVar5 = 0xa0000, objIndex < local_38) {
          iVar3 = -1;
          local_30[0] = 1;
          Object_GetRadiusCollisionData__FP18Object_tSimObjListiP8coorddefPi
                    ((Object_tSimObjList *)&stack0xffffff60,objIndex,&local_90,&local_34);
          Object_GetPointsCollisionData__FP18Object_tSimObjListiPiP8coorddef
                    ((Object_tSimObjList *)&stack0xffffff60,objIndex,local_30,acStack128);
          iVar2 = 0;
          a = acStack128;
          if (0 < local_30[0]) {
            do {
              iVar1 = Math_DistXZ__FP8coorddefT0(a,&newObj->position);
              if ((iVar1 < local_34 + newObj->dimensionRadius) && (iVar1 < iVar5)) {
                iVar3 = iVar2;
                iVar5 = iVar1;
              }
              iVar2 = iVar2 + 1;
              a = a + 1;
            } while (iVar2 < local_30[0]);
          }
          if (iVar3 < 0) {
LAB_80091c7c:
            objIndex = objIndex + 1;
          }
          else {
            iVar5 = Collide_CheckAccuratePointRadiusCollision__FP13BO_tNewtonObjP8coorddefi
                              (newObj,acStack128 + iVar3,local_34);
            if (iVar5 == 0) goto LAB_80091c7c;
            iVar5 = Object_CheckCollisionResults__FP18Object_tSimObjListiP13BO_tNewtonObj
                              ((Object_tSimObjList *)&stack0xffffff60,objIndex,newObj);
            if (iVar5 == 0) goto LAB_80091c7c;
            Object_GetRadiusCollisionData__FP18Object_tSimObjListiP8coorddefPi
                      ((Object_tSimObjList *)&stack0xffffff60,objIndex,&local_90,&local_34);
            if (iVar5 != 1) {
              if (iVar5 == 2) {
                if (0x20000 < newObj->speedXZ) {
                  iVar5 = 0x60006;
LAB_80091c3c:
                  (newObj->collision).impulse = 0xf0000;
                  (newObj->collision).sfxType = iVar5;
                  (newObj->collision).otherObj = (BO_tNewtonObj *)0x0;
                  iVar5 = (newObj->position).y;
                  iVar3 = (newObj->position).z;
                  (newObj->collision).collisionPoint.x = (newObj->position).x;
                  (newObj->collision).collisionPoint.y = iVar5;
                  (newObj->collision).collisionPoint.z = iVar3;
                  iVar5 = Force_IsForceOn__FP8Car_tObj((Car_tObj *)newObj);
                  if (iVar5 != 0) {
                    Force_HitSign__FP8Car_tObj((Car_tObj *)newObj);
                  }
                }
              }
              else {
                if (iVar5 == -1) {
                  iVar5 = 0x60005;
                  goto LAB_80091c3c;
                }
              }
              goto LAB_80091c7c;
            }
            local_58.y = 0;
            local_58.x = (newObj->position).x - local_90.x;
            local_58.z = (newObj->position).z - local_90.z;
            Math_NormalizeShortVector__FP8coorddef(&local_58);
            iVar2 = 0;
            iVar3 = local_34;
            if (local_34 < 0) {
              iVar3 = local_34 + 0xff;
            }
            iVar3 = iVar3 >> 8;
            iVar1 = iVar3 * local_58.x;
            if (iVar1 < 0) {
              iVar1 = iVar1 + 0xff;
            }
            iVar6 = iVar3 * local_58.y;
            if (iVar6 < 0) {
              iVar6 = iVar6 + 0xff;
            }
            iVar3 = iVar3 * local_58.z;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 0xff;
            }
            local_48.x = (iVar1 >> 8) + local_90.x;
            local_48.z = (iVar3 >> 8) + local_90.z;
            local_48.y = (iVar6 >> 8) + local_90.y;
            iVar3 = newObj->speedXZ;
            if (iVar3 < 0x280001) {
              if ((0x190000 < iVar3) && (iVar2 = iVar3, iVar5 = iGp000002e4, iVar3 < 0x1e0000)) {
                iVar2 = 0x1e0000;
                iVar5 = iGp000002e4;
              }
            }
            else {
              iVar2 = iVar3 << 1;
              iVar5 = iGp000002e4;
              if (0x960000 < iVar3 << 1) {
                iVar2 = 0x960000;
                iVar5 = iGp000002e4;
              }
            }
            iGp000002e4 = iVar5;
            Collide_TestWithPlane__FP13BO_tNewtonObjP8coorddefT1(newObj,&local_58,&local_48);
            iGp000002e4 = 0;
            Newton_DoPostBarrierCollisionHandling__FP13BO_tNewtonObjG8coorddef(newObj,normal);
            (newObj->collision).impulse = iVar2;
            (newObj->collision).collided = 1;
            (newObj->collision).otherObj = (BO_tNewtonObj *)0x0;
            if (iVar2 == 0) goto LAB_80091c7c;
            (newObj->collision).sfxType = 0x50001;
            iVar5 = (newObj->position).y;
            iVar3 = (newObj->position).z;
            (newObj->collision).collisionPoint.x = (newObj->position).x;
            (newObj->collision).collisionPoint.y = iVar5;
            (newObj->collision).collisionPoint.z = iVar3;
            objIndex = objIndex + 1;
          }
        }
      }
      if ((newObj->groundSurfaceType & 0x80U) != 0) {
        Newton_TestForUndrivableSurfaces__FP13BO_tNewtonObj(newObj);
      }
      if (newObj->flightTime != 0) {
        Physics_TestForBarrierCollision__FP8Car_tObj((Car_tObj *)newObj);
      }
      objIndex = 0;
      if ((newObj->collision).disableCollisionTimer == 0) {
        ppBVar4 = (BO_tNewtonObj **)&_Collide_gRegistry;
        *(BO_tNewtonObj **)(&_Collide_gRegistry + iGp000002e8) = newObj;
        if (0 < iGp000002e8) {
          do {
            o1 = *ppBVar4;
            iVar2 = (newObj->position).z;
            iVar3 = (o1->position).z;
            iVar5 = iVar2 - iVar3;
            if (iVar5 < 1) {
              iVar5 = iVar3 - iVar2;
            }
            if (iVar5 < newObj->dimensionRadius + o1->dimensionRadius) {
              iVar2 = (newObj->position).x;
              iVar3 = (o1->position).x;
              iVar5 = iVar2 - iVar3;
              if (iVar5 < 1) {
                iVar5 = iVar3 - iVar2;
              }
              if (iVar5 < newObj->dimensionRadius + o1->dimensionRadius) {
                iVar2 = (newObj->position).y;
                iVar3 = (o1->position).y;
                iVar5 = iVar2 - iVar3;
                if (iVar5 < 1) {
                  iVar5 = iVar3 - iVar2;
                }
                if (iVar5 < newObj->dimensionRadius + o1->dimensionRadius) {
                  iVar5 = fixedmult(0x6487e,(newObj->angularVel).x);
                  (newObj->angularVel).x = iVar5;
                  iVar5 = fixedmult(0x6487e,(newObj->angularVel).y);
                  (newObj->angularVel).y = iVar5;
                  iVar5 = fixedmult(0x6487e,(newObj->angularVel).z);
                  (newObj->angularVel).z = iVar5;
                  iVar5 = fixedmult(0x6487e,(o1->angularVel).x);
                  (o1->angularVel).x = iVar5;
                  iVar5 = fixedmult(0x6487e,(o1->angularVel).y);
                  (o1->angularVel).y = iVar5;
                  iVar5 = fixedmult(0x6487e,(o1->angularVel).z);
                  (o1->angularVel).z = iVar5;
                  Collide_CheckForCollisionBetween__FP13BO_tNewtonObjT0(newObj,o1);
                  iVar5 = fixedmult(0x28be,(newObj->angularVel).x);
                  (newObj->angularVel).x = iVar5;
                  iVar5 = fixedmult(0x28be,(newObj->angularVel).y);
                  (newObj->angularVel).y = iVar5;
                  iVar5 = fixedmult(0x28be,(newObj->angularVel).z);
                  (newObj->angularVel).z = iVar5;
                  iVar5 = fixedmult(0x28be,(o1->angularVel).x);
                  (o1->angularVel).x = iVar5;
                  iVar5 = fixedmult(0x28be,(o1->angularVel).y);
                  (o1->angularVel).y = iVar5;
                  iVar5 = fixedmult(0x28be,(o1->angularVel).z);
                  (o1->angularVel).z = iVar5;
                  Collide_LimitAngularVel__FP13BO_tNewtonObj(newObj);
                  Collide_LimitAngularVel__FP13BO_tNewtonObj(o1);
                }
              }
            }
            objIndex = objIndex + 1;
            ppBVar4 = ppBVar4 + 1;
          } while (objIndex < iGp000002e8);
        }
        iGp000002e8 = iGp000002e8 + 1;
      }
    }
    else {
      Physics_TestForBarrierCollision__FP8Car_tObj((Car_tObj *)newObj);
    }
  }
  return;


}





