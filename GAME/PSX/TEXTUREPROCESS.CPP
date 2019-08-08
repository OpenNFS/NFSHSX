#include "NFS4.H"
#include "TEXTUREPROCESS.H"

// decompiled code
// original method signature: 
// int /*$ra*/ TextureProcess_TransColorCheck__FPci(char *data /*$a0*/, int numentry /*$a1*/)
 // line 47, offset 0x800e0884
	/* begin block 1 */
		// Start line: 48
		// Start offset: 0x800E0884
		// Variables:
	// 		int translucent_flag; // $v1

		/* begin block 1.1 */
			// Start line: 53
			// Start offset: 0x800E0890
		/* end block 1.1 */
		// End offset: 0x800E089C
		// End Line: 59
	/* end block 1 */
	// End offset: 0x800E08B0
	// End Line: 63

int TextureProcess_TransColorCheck__FPci(char *data,int numentry)
{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = 0;
  while (numentry = numentry + -1, numentry != -1) {
    uVar1 = *(ushort *)data;
    data = (char *)((ushort *)data + 1);
    uVar2 = uVar2 | (uint)(0x8000 < uVar1);
  }
  return uVar2;


}




// decompiled code
// original method signature: 
// void /*$ra*/ TextureProcess_ColorClut__FiiPciii(int level /*$a0*/, int maxlevel /*$a1*/, char *data /*$a2*/, int numentry /*stack 12*/, int cx /*stack 16*/, int cy /*stack 20*/)
 // line 356, offset 0x800e08b8
	/* begin block 1 */
		// Start line: 357
		// Start offset: 0x800E08B8
		// Variables:
	// 		short newdata[256]; // stack offset -560
	// 		char *sourcedata; // $s7
	// 		int contrasttemp; // $s5

		/* begin block 1.1 */
			// Start line: 357
			// Start offset: 0x800E08B8
			// Variables:
		// 		int j; // $s6

			/* begin block 1.1.1 */
				// Start line: 374
				// Start offset: 0x800E0940
				// Variables:
			// 		unsigned short color; // $s3
			// 		int r; // $s1
			// 		int g; // $s2
			// 		int b; // $s0

				/* begin block 1.1.1.1 */
					// Start line: 379
					// Start offset: 0x800E0954

					/* begin block 1.1.1.1.1 */
						// Start line: 384
						// Start offset: 0x800E0970

						/* begin block 1.1.1.1.1.1 */
							// Start line: 386
							// Start offset: 0x800E0970
							// Variables:
						// 		int temp; // $v0
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x800E09B4
						// End Line: 390

						/* begin block 1.1.1.1.1.2 */
							// Start line: 391
							// Start offset: 0x800E09B4
							// Variables:
						// 		int temp; // $v0
						/* end block 1.1.1.1.1.2 */
						// End offset: 0x800E09E4
						// End Line: 391

						/* begin block 1.1.1.1.1.3 */
							// Start line: 392
							// Start offset: 0x800E09E4
							// Variables:
						// 		int temp; // $v0
						/* end block 1.1.1.1.1.3 */
						// End offset: 0x800E0A14
						// End Line: 392
					/* end block 1.1.1.1.1 */
					// End offset: 0x800E0A58
					// End Line: 399
				/* end block 1.1.1.1 */
				// End offset: 0x800E0A58
				// End Line: 399
			/* end block 1.1.1 */
			// End offset: 0x800E0A58
			// End Line: 402
		/* end block 1.1 */
		// End offset: 0x800E0A68
		// End Line: 403

		/* begin block 1.2 */
			// Start line: 405
			// Start offset: 0x800E0A68
			// Variables:
		// 		struct RECT r; // stack offset -48
		/* end block 1.2 */
		// End offset: 0x800E0A68
		// End Line: 411
	/* end block 1 */
	// End offset: 0x800E0A68
	// End Line: 411

void TextureProcess_ColorClut__FiiPciii( (int level,int maxlevel,char *data,int numentry,int cx,int cy)
{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  undefined2 local_resc;
  ushort local_230 [256];
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  iVar9 = 0;
  puVar8 = local_230;
  maxlevel = maxlevel + -1;
  iVar10 = 0 / maxlevel;
  if (maxlevel == 0) {
    trap(0x1c00);
  }
  if ((maxlevel == -1) && (false)) {
    trap(0x1800);
  }
  do {
    if (numentry <= iVar9) {
      local_resc = (undefined2)numentry;
      local_30 = (undefined2)cx;
      local_2c = local_resc;
      local_2e = (undefined2)cy;
      local_2a = 1;
      LoadImage(&local_30,local_230);
      return;
    }
    uVar1 = *(ushort *)data;
    if (uVar1 == 0) {
      *puVar8 = 0;
    }
    else {
      uVar5 = (uint)(uVar1 >> 7) & 0xf8;
      uVar7 = (uint)(uVar1 >> 2) & 0xf8;
      iVar6 = ((uint)uVar1 & 0x1f) * 8;
      iVar3 = fixedmult(iVar6,iVar10);
      iVar6 = iVar6 - iVar3;
      iVar3 = 0;
      if ((-1 < iVar6) && (iVar3 = iVar6, 0xff < iVar6)) {
        iVar3 = 0xff;
      }
      iVar4 = fixedmult(uVar7,iVar10);
      iVar4 = uVar7 - iVar4;
      iVar6 = 0;
      if ((-1 < iVar4) && (iVar6 = iVar4, 0xff < iVar4)) {
        iVar6 = 0xff;
      }
      iVar4 = fixedmult(uVar5,iVar10);
      uVar5 = uVar5 - iVar4;
      uVar7 = 0;
      if ((int)uVar5 < 0) {
LAB_800e0a14:
        bVar2 = uVar7 < 8;
      }
      else {
        bVar2 = (int)uVar5 < 8;
        uVar7 = uVar5;
        if (0xff < (int)uVar5) {
          uVar7 = 0xff;
          goto LAB_800e0a14;
        }
      }
      uVar7 = (int)uVar7 >> 3;
      if (bVar2) {
        uVar7 = 1;
      }
      *puVar8 = uVar1 & 0x8000 | (ushort)((uVar7 & 0x1f) << 10) |
                (ushort)((iVar6 >> 3 & 0x1fU) << 5) | (ushort)(iVar3 >> 3) & 0x1f;
    }
    data = (char *)((ushort *)data + 1);
    puVar8 = puVar8 + 1;
    iVar9 = iVar9 + 1;
  } while( true );


}




// decompiled code
// original method signature: 
// int /*$ra*/ TextureProcess_DepthColorCluts__FPci(char *data /*$s3*/, int numentry /*$s1*/)
 // line 422, offset 0x800e0ac0
	/* begin block 1 */
		// Start line: 423
		// Start offset: 0x800E0AC0

		/* begin block 1.1 */
			// Start line: 423
			// Start offset: 0x800E0AC0
			// Variables:
		// 		int i; // $s0

			/* begin block 1.1.1 */
				// Start line: 443
				// Start offset: 0x800E0AF4
				// Variables:
			// 		int cx; // stack offset -32
			// 		int cy; // stack offset -28
			/* end block 1.1.1 */
			// End offset: 0x800E0B00
			// End Line: 446
		/* end block 1.1 */
		// End offset: 0x800E0B6C
		// End Line: 462
	/* end block 1 */
	// End offset: 0x800E0B6C
	// End Line: 463

int TextureProcess_DepthColorCluts__FPci(char *data,int numentry)
{
  bool bVar1;
  int level;
  int local_20;
  int local_1c;
  
  DrawSync(0);
  bVar1 = true;
  level = 0;
  while (bVar1) {
    Texture_GetClutId__FiPiT1((uint)(numentry < 0x11) ^ 1,&local_20,&local_1c);
    *(ushort *)(&gClutDepth + level * 2 + iGp0000162c * 0x20) =
         (short)local_1c << 6 | (ushort)(local_20 >> 4) & 0x3f;
    TextureProcess_ColorClut__FiiPciii(level,0x10,data,numentry,local_20,local_1c);
    bVar1 = level + 1 < 0x10;
    level = level + 1;
  }
  level = iGp0000162c;
  iGp0000162c = iGp0000162c + 1;
  return level;


}




// decompiled code
// original method signature: 
// struct FogKey * /*$ra*/ Fog_CheckRange__FiP6FogKey(int currentslice /*$a0*/, struct FogKey *fkey /*$a1*/)
 // line 639, offset 0x800e0b98
	/* begin block 1 */
		// Start line: 640
		// Start offset: 0x800E0B98
		// Variables:
	// 		struct FogKey *keynext; // $v0
	/* end block 1 */
	// End offset: 0x800E0BE4
	// End Line: 662

FogKey * Fog_CheckRange__FiP6FogKey(int currentslice,FogKey *fkey)
{
  FogKey *pFVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)fkey->slice;
  iVar3 = (int)fkey->next->slice;
  if (iVar3 < iVar2) {
    if ((iVar2 <= currentslice) || (pFVar1 = (FogKey *)0x0, currentslice < iVar3)) {
      return fkey;
    }
  }
  else {
    pFVar1 = (FogKey *)0x0;
    if ((iVar2 <= currentslice) && (pFVar1 = fkey, iVar3 <= currentslice)) {
      pFVar1 = (FogKey *)0x0;
    }
  }
  return pFVar1;


}




// decompiled code
// original method signature: 
// struct FogKey * /*$ra*/ Fog_FindKey__FiP6FogKey(int currentslice /*$s1*/, struct FogKey *fkey /*$s0*/)
 // line 665, offset 0x800e0bec
	/* begin block 1 */
		// Start line: 666
		// Start offset: 0x800E0BEC
	/* end block 1 */
	// End offset: 0x800E0C6C
	// End Line: 696

FogKey * Fog_FindKey__FiP6FogKey(int currentslice,FogKey *fkey)
{
  FogKey *pFVar1;
  
  if (fkey == (FogKey *)0x0) {
    fkey = pFGp0000163c;
  }
  pFVar1 = Fog_CheckRange__FiP6FogKey(currentslice,fkey);
  if (pFVar1 == (FogKey *)0x0) {
    if (currentslice < (int)fkey->slice) {
      do {
        fkey = fkey->prev;
        pFVar1 = Fog_CheckRange__FiP6FogKey(currentslice,fkey);
      } while (pFVar1 == (FogKey *)0x0);
    }
    else {
      do {
        fkey = fkey->next;
        pFVar1 = Fog_CheckRange__FiP6FogKey(currentslice,fkey);
      } while (pFVar1 == (FogKey *)0x0);
    }
  }
  return fkey;


}




// decompiled code
// original method signature: 
// struct FogKey * /*$ra*/ Fog_AllocKey__Fv()
 // line 716, offset 0x800e0c80
	/* begin block 1 */
		// Start line: 717
		// Start offset: 0x800E0C80

		/* begin block 1.1 */
			// Start line: 719
			// Start offset: 0x800E0C80
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x800E0CC4
		// End Line: 726
	/* end block 1 */
	// End offset: 0x800E0CC4
	// End Line: 727

FogKey * Fog_AllocKey__Fv(void)
{
  int *piVar1;
  FogKey *pFVar2;
  int iVar3;
  
  iVar3 = 0;
  pFVar2 = (FogKey *)&Fog_gBuf;
  piVar1 = &openkeys;
  do {
    iVar3 = iVar3 + 1;
    if (*piVar1 == 1) {
      *piVar1 = 0;
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 < 0x20);
  return (FogKey *)0x0;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Fog_AddKey__Fii(int slice /*$s2*/, int distance /*$s0*/)
 // line 733, offset 0x800e0ccc
	/* begin block 1 */
		// Start line: 734
		// Start offset: 0x800E0CCC
		// Variables:
	// 		struct FogKey *newkey; // $s1

		/* begin block 1.1 */
			// Start line: 734
			// Start offset: 0x800E0CCC

			/* begin block 1.1.1 */
				// Start line: 760
				// Start offset: 0x800E0D18
				// Variables:
			// 		struct FogKey *insertkey; // $v1
			// 		struct FogKey *savenextkey; // $v0
			/* end block 1.1.1 */
			// End offset: 0x800E0D58
			// End Line: 786
		/* end block 1.1 */
		// End offset: 0x800E0D58
		// End Line: 786
	/* end block 1 */
	// End offset: 0x800E0D68
	// End Line: 790

void Fog_AddKey__Fii(int slice,int distance)
{
  FogKey *pFVar1;
  FogKey *pFVar2;
  FogKey *pFVar3;
  
  pFVar1 = Fog_AllocKey__Fv();
  pFVar1->prev = (FogKey *)0x0;
  pFVar1->next = (FogKey *)0x0;
  pFVar1->slice = (short)slice;
  pFVar1->distance = (short)distance;
  if (pFGp0000163c == (FogKey *)0x0) {
    pFVar1->next = pFVar1;
    pFVar1->prev = pFVar1;
    pFGp0000163c = pFVar1;
  }
  else {
    pFVar2 = pFGp0000163c;
    if (pFGp0000163c != pFGp0000163c->next) {
      pFVar2 = Fog_FindKey__FiP6FogKey(slice,(FogKey *)0x0);
    }
    if ((int)pFVar2->slice == slice) {
      return;
    }
    pFVar3 = pFVar2->next;
    pFVar2->next = pFVar1;
    pFVar1->prev = pFVar2;
    pFVar1->next = pFVar3;
    pFVar3->prev = pFVar1;
  }
  iGp00001630 = iGp00001630 + 1;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Fog_Update__Fi(int player /*$s2*/)
 // line 840, offset 0x800e0d80
	/* begin block 1 */
		// Start line: 841
		// Start offset: 0x800E0D80
		// Variables:
	// 		int currentslice; // $s1
	// 		struct FogKey *key; // $a2
	// 		struct FogKey *nextkey; // $v0
	// 		int nextslice; // $a3
	// 		int diffslice; // $v0
	// 		int diffdistance; // $a0
	// 		int final_dist; // $a1

		/* begin block 1.1 */
			// Start line: 848
			// Start offset: 0x800E0DA4

			/* begin block 1.1.1 */
				// Start line: 865
				// Start offset: 0x800E0E14

				/* begin block 1.1.1.1 */
					// Start line: 867
					// Start offset: 0x800E0E14

					/* begin block 1.1.1.1.1 */
						// Start line: 868
						// Start offset: 0x800E0E28
						// Variables:
					// 		int numslices; // $v1
					/* end block 1.1.1.1.1 */
					// End offset: 0x800E0E48
					// End Line: 873
				/* end block 1.1.1.1 */
				// End offset: 0x800E0E48
				// End Line: 873
			/* end block 1.1.1 */
			// End offset: 0x800E0EA4
			// End Line: 880
		/* end block 1.1 */
		// End offset: 0x800E0EA4
		// End Line: 880
	/* end block 1 */
	// End offset: 0x800E0EAC
	// End Line: 884

void Fog_Update__Fi(int player)
{
  FogKey *pFVar1;
  int currentslice;
  int iVar2;
  
  if (iGp00001630 != 1) {
    BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
              ((coorddef *)&DAT_80116f84,(BWorldSm_Pos *)(iGp00001640 + player * 0x84),1);
    currentslice = (int)*(short *)(player * 0x84 + iGp00001640);
    pFVar1 = Fog_FindKey__FiP6FogKey(currentslice,*(FogKey **)(&_Fog_gCurrentKey + player * 4));
    *(FogKey **)(&_Fog_gCurrentKey + player * 4) = pFVar1;
    DAT_80123294 = (int)pFVar1->distance;
    if (DAT_80123294 != (int)pFVar1->next->distance) {
      iVar2 = (currentslice - (int)pFVar1->slice) *
              ((int)pFVar1->next->distance - (int)pFVar1->distance);
      currentslice = (int)pFVar1->next->slice - (int)pFVar1->slice;
      if (currentslice == 0) {
        trap(0x1c00);
      }
      if ((currentslice == -1) && (iVar2 == -0x80000000)) {
        trap(0x1800);
      }
      DAT_80123294 = (int)pFVar1->distance + iVar2 / currentslice;
    }
  }
  return;


}




// decompiled code
// original method signature: 
// char * /*$ra*/ Fog_MakeTrackPathName__FPc(char *ext /*$a0*/)
 // line 1015, offset 0x800e0ec4
	/* begin block 1 */
		// Start line: 1016
		// Start offset: 0x800E0EC4
		// Variables:
	// 		static char fogstrspc[64]; // offset 0x0
	/* end block 1 */
	// End offset: 0x800E0EC4
	// End Line: 1016

char * Fog_MakeTrackPathName__FPc(char *ext)
{
  sprintf(&fogstrspc_36,"%sTr%02d%s",0,0,ext);
  return &fogstrspc_36;


}




// decompiled code
// original method signature: 
// int /*$ra*/ Fog_ReadFogKeys__Fv()
 // line 1026, offset 0x800e0f14
	/* begin block 1 */
		// Start line: 1027
		// Start offset: 0x800E0F14
		// Variables:
	// 		int *readmem; // $s2
	// 		char *strspc; // $v0
	// 		int numkeys; // $s3

		/* begin block 1.1 */
			// Start line: 1061
			// Start offset: 0x800E0FD8
			// Variables:
		// 		int i; // $s1

			/* begin block 1.1.1 */
				// Start line: 1061
				// Start offset: 0x800E0FDC
			/* end block 1.1.1 */
			// End offset: 0x800E0FE8
			// End Line: 1074
		/* end block 1.1 */
		// End offset: 0x800E1004
		// End Line: 1075
	/* end block 1 */
	// End offset: 0x800E1010
	// End Line: 1079

int Fog_ReadFogKeys__Fv(void)
{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  char *ext;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  if ((DAT_80113240 == 0) || (DAT_80113234 == 0)) {
    if (DAT_80113240 == 0) {
      if (DAT_80113234 == 0) {
        ext = ".fog";
      }
      else {
        ext = "W.fog";
      }
    }
    else {
      ext = "N.fog";
    }
  }
  else {
    ext = "S.fog";
  }
  ext = Fog_MakeTrackPathName__FPc(ext);
  puVar4 = (uint *)loadfileadr(ext,0);
  iVar5 = 0;
  if (puVar4 != (uint *)0x0) {
    uVar7 = *puVar4;
    iVar5 = 0;
    if (uVar7 < 0x20) {
      bVar3 = 0 < (int)uVar7;
      puVar6 = puVar4;
      while (bVar3) {
        puVar1 = puVar6 + 1;
        puVar2 = puVar6 + 2;
        puVar6 = puVar6 + 2;
        iVar5 = iVar5 + 1;
        Fog_AddKey__Fii(*puVar1,*puVar2);
        bVar3 = iVar5 < (int)uVar7;
      }
      purgememadr(puVar4);
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
  }
  return iVar5;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Fog_InitFogTriggers__Fv()
 // line 1082, offset 0x800e102c
	/* begin block 1 */
		// Start line: 1083
		// Start offset: 0x800E102C
		// Variables:
	// 		int num_player; // $s2

		/* begin block 1.1 */
			// Start line: 1083
			// Start offset: 0x800E102C
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x800E106C
		// End Line: 1094

		/* begin block 1.2 */
			// Start line: 1113
			// Start offset: 0x800E10B0
			// Variables:
		// 		int k; // $s0
		// 		int i; // $v1
		/* end block 1.2 */
		// End offset: 0x800E10F8
		// End Line: 1120
	/* end block 1 */
	// End offset: 0x800E10F8
	// End Line: 1120

void Fog_InitFogTriggers__Fv(void)
{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0x1f;
  puVar1 = &DAT_80123278;
  uGp00001630 = 0;
  uGp0000163c = 0;
  do {
    *puVar1 = 1;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  iVar2 = Fog_ReadFogKeys__Fv();
  if (iVar2 == 0) {
    Fog_AddKey__Fii(0,DAT_80123294);
  }
  iVar2 = 1;
  uGp00001634 = uGp0000163c;
  uGp00001638 = uGp0000163c;
  if (DAT_801131f8 == 1) {
    iVar2 = 2;
  }
  iGp00001640 = reservememadr("fog pos",iVar2 * 0x84,0);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      BWorldSm_SetSlice__FiP12BWorldSm_Pos(0,(BWorldSm_Pos *)(iGp00001640 + iVar4));
      iVar4 = iVar4 + 0x84;
    } while (iVar3 < iVar2);
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ Fog_DeInitFogTriggers__Fv()
 // line 1123, offset 0x800e1110
	/* begin block 1 */
		// Start line: 1124
		// Start offset: 0x800E1110
	/* end block 1 */
	// End offset: 0x800E1110
	// End Line: 1124

void Fog_DeInitFogTriggers__Fv(void)
{
  purgememadr(uGp00001640);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ TextureProcess_Init__Fv()
 // line 1135, offset 0x800e1134
	/* begin block 1 */
		// Start line: 1136
		// Start offset: 0x800E1134
	/* end block 1 */
	// End offset: 0x800E1134
	// End Line: 1137

void TextureProcess_Init__Fv(void)
{
  uGp00001628 = 0x10;
  uGp0000162c = 0;
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ CV_ProcessWorldColors_FINAL__FiP7CVECTORs(int constrast /*$s6*/, struct CVECTOR *color /*$s7*/, short brightness /*$a2*/)
 // line 1156, offset 0x800e1148
	/* begin block 1 */
		// Start line: 1157
		// Start offset: 0x800E1148

		/* begin block 1.1 */
			// Start line: 1157
			// Start offset: 0x800E1148
			// Variables:
		// 		int i; // $s5

			/* begin block 1.1.1 */
				// Start line: 1158
				// Start offset: 0x800E1188
				// Variables:
			// 		int r; // $s0
			// 		int g; // $s1
			// 		int b; // $s2

				/* begin block 1.1.1.1 */
					// Start line: 1161
					// Start offset: 0x800E11A0
					// Variables:
				// 		int temp; // $v0
				/* end block 1.1.1.1 */
				// End offset: 0x800E11E4
				// End Line: 1165

				/* begin block 1.1.1.2 */
					// Start line: 1166
					// Start offset: 0x800E11E4
					// Variables:
				// 		int temp; // $v0
				/* end block 1.1.1.2 */
				// End offset: 0x800E1214
				// End Line: 1166

				/* begin block 1.1.1.3 */
					// Start line: 1167
					// Start offset: 0x800E1214
					// Variables:
				// 		int temp; // $v0
				/* end block 1.1.1.3 */
				// End offset: 0x800E1244
				// End Line: 1167
			/* end block 1.1.1 */
			// End offset: 0x800E1298
			// End Line: 1177
		/* end block 1.1 */
		// End offset: 0x800E12DC
		// End Line: 1180
	/* end block 1 */
	// End offset: 0x800E12DC
	// End Line: 1180

void CV_ProcessWorldColors_FINAL__FiP7CVECTORs(int constrast,CVECTOR *color,short brightness)
{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined uVar8;
  int iVar9;
  undefined uVar10;
  undefined uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar14 = 0;
  iVar13 = (int)brightness;
  iVar12 = 0;
  while (iVar14 < 0) {
    pbVar4 = (byte *)(iVar12 + _Chunk_lightTable);
    bVar1 = *pbVar4;
    bVar2 = pbVar4[1];
    bVar3 = pbVar4[2];
    iVar5 = fixedmult((uint)bVar1 - (uint)color->r,constrast);
    iVar5 = (uint)bVar1 - iVar5;
    iVar9 = 0;
    if ((-1 < iVar5) && (iVar9 = iVar5, 0xff < iVar5)) {
      iVar9 = 0xff;
    }
    iVar6 = fixedmult((uint)bVar2 - (uint)color->g,constrast);
    iVar6 = (uint)bVar2 - iVar6;
    iVar5 = 0;
    if ((-1 < iVar6) && (iVar5 = iVar6, 0xff < iVar6)) {
      iVar5 = 0xff;
    }
    iVar7 = fixedmult((uint)bVar3 - (uint)color->b,constrast);
    iVar7 = (uint)bVar3 - iVar7;
    iVar6 = 0;
    if ((-1 < iVar7) && (iVar6 = iVar7, 0xff < iVar7)) {
      iVar6 = 0xff;
    }
    iVar9 = iVar9 + iVar13;
    iVar5 = iVar5 + iVar13;
    iVar6 = iVar6 + iVar13;
    if (0xff < iVar9) {
      iVar9 = 0xff;
    }
    uVar8 = (undefined)iVar9;
    if (iVar9 < 0) {
      uVar8 = 0;
    }
    if (0xff < iVar5) {
      iVar5 = 0xff;
    }
    uVar10 = (undefined)iVar5;
    if (iVar5 < 0) {
      uVar10 = 0;
    }
    if (0xff < iVar6) {
      iVar6 = 0xff;
    }
    uVar11 = (undefined)iVar6;
    if (iVar6 < 0) {
      uVar11 = 0;
    }
    *(undefined *)(iVar12 + _Chunk_lightTable) = uVar8;
    *(undefined *)(iVar12 + _Chunk_lightTable + 1) = uVar10;
    iVar14 = iVar14 + 1;
    iVar9 = iVar12 + _Chunk_lightTable;
    iVar12 = iVar12 + 4;
    *(undefined *)(iVar9 + 2) = uVar11;
  }
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ CV_ColorTracks__Fiii(int track /*$s2*/, int weather /*$s1*/, int night /*$s3*/)
 // line 1183, offset 0x800e1308
	/* begin block 1 */
		// Start line: 1184
		// Start offset: 0x800E1308
		// Variables:
	// 		int contrast; // $s0
	// 		struct CVECTOR color; // stack offset -32
	// 		short brightness; // $a2
	/* end block 1 */
	// End offset: 0x800E14E8
	// End Line: 1258

void CV_ColorTracks__Fiii(int track,int weather,int night)
{
  undefined uVar1;
  short sVar2;
  short brightness;
  int constrast;
  uint local_20;
  
  memset(&local_20,0,4);
  brightness = 0;
  sVar2 = 0;
  if (DAT_801131f8 == 1) {
    if (((track == 2) && (weather == 1)) && (night == 1)) {
      constrast = -0x9c80;
      uVar1 = 0x10;
LAB_800e1420:
      local_20._0_2_ = CONCAT11(uVar1,(uchar)local_20);
      local_20 = local_20 & 0xffff0000 | (uint)(ushort)local_20;
      brightness = 0x10;
      goto LAB_800e14ec;
    }
    if (track == 3) {
      if ((weather == 0) && (night == 1)) {
        constrast = -0xf400;
        goto LAB_800e14ec;
      }
      if ((true) && ((weather == 1 && (night == 1)))) {
        constrast = -0x7400;
        local_20 = 0x10;
        brightness = 0x10;
        goto LAB_800e14ec;
      }
    }
    if (track == 4) {
      if ((weather == 0) && (night == 1)) {
        constrast = -0x7800;
        goto LAB_800e14ec;
      }
      if (((true) && (weather == 1)) && (night == 1)) {
        constrast = -0x10000;
        uVar1 = 0x18;
        goto LAB_800e1420;
      }
    }
    if (((track == 6) && (weather == 0)) && (night == 1)) {
      constrast = -0x9610;
      brightness = 0x31;
      goto LAB_800e14ec;
    }
    if (((track == 7) && (weather == 0)) && (night == 1)) {
      constrast = -0xb400;
      brightness = 0x14;
      goto LAB_800e14ec;
    }
    if (((track != 8) || (weather != 0)) || (night != 1)) {
      constrast = 0;
      brightness = sVar2;
      if (((track == 10) && (brightness = sVar2, weather == 1)) && (brightness = sVar2, night == 1))
      {
        constrast = -0x5400;
        brightness = sVar2;
      }
      goto LAB_800e14ec;
    }
  }
  else {
    constrast = 0;
    brightness = sVar2;
    if (((track != 8) || (brightness = sVar2, weather != 0)) || (brightness = sVar2, night != 1))
    goto LAB_800e14ec;
  }
  constrast = 0x6800;
  brightness = 0x16;
LAB_800e14ec:
  CV_ProcessWorldColors_FINAL__FiP7CVECTORs(constrast,(CVECTOR *)&local_20,brightness);
  return;


}




// decompiled code
// original method signature: 
// void /*$ra*/ CV_InitColorVertices__Fv()
 // line 1539, offset 0x800e1510
	/* begin block 1 */
		// Start line: 1540
		// Start offset: 0x800E1510
	/* end block 1 */
	// End offset: 0x800E1510
	// End Line: 1540

void CV_InitColorVertices__Fv(void)
{
  CV_ColorTracks__Fiii(0,DAT_80113234,DAT_80113240);
  return;


}





