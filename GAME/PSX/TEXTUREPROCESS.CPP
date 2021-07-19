#include "THISDUST.H"
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

	/* begin block 2 */
		// Start line: 94
	/* end block 2 */
	// End Line: 95

	/* begin block 3 */
		// Start line: 94
	/* end block 3 */
	// End Line: 95

	/* begin block 4 */
		// Start line: 97
	/* end block 4 */
	// End Line: 98

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

	/* begin block 2 */
		// Start line: 420
	/* end block 2 */
	// End Line: 421

	/* begin block 3 */
		// Start line: 714
	/* end block 3 */
	// End Line: 715

	/* begin block 4 */
		// Start line: 714
	/* end block 4 */
	// End Line: 715

void TextureProcess_ColorClut__FiiPciii
               (int level,int maxlevel,char *data,int numentry,int cx,int cy)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  undefined2 local_resc;
  ushort local_230 [256];
  short local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  iVar10 = 0;
  puVar9 = local_230;
  maxlevel = maxlevel + -1;
  iVar11 = (TrackSpec_gSpec.fogspec.contrast * level) / maxlevel;
  if (maxlevel == 0) {
    trap(0x1c00);
  }
  if ((maxlevel == -1) && (TrackSpec_gSpec.fogspec.contrast * level == -0x80000000)) {
    trap(0x1800);
  }
  do {
    if (numentry <= iVar10) {
      local_resc = (undefined2)numentry;
      local_30 = (short)cx;
      local_2c = local_resc;
      local_2e = (undefined2)cy;
      local_2a = 1;
      LoadImage(&local_30,local_230);
      return;
    }
    uVar1 = *(ushort *)data;
    if (uVar1 == 0) {
      *puVar9 = 0;
    }
    else {
      uVar5 = (uint)(uVar1 >> 7) & 0xf8;
      uVar8 = (uint)(uVar1 >> 2) & 0xf8;
      iVar6 = ((uint)uVar1 & 0x1f) * 8;
      uVar3 = fixedmult(iVar6 - (uint)TrackSpec_gSpec.fogspec.color.r,iVar11);
      iVar6 = iVar6 - uVar3;
      iVar7 = 0;
      if ((-1 < iVar6) && (iVar7 = iVar6, 0xff < iVar6)) {
        iVar7 = 0xff;
      }
      uVar3 = fixedmult(uVar8 - (uint)TrackSpec_gSpec.fogspec.color.g,iVar11);
      iVar4 = uVar8 - uVar3;
      iVar6 = 0;
      if ((-1 < iVar4) && (iVar6 = iVar4, 0xff < iVar4)) {
        iVar6 = 0xff;
      }
      uVar3 = fixedmult(uVar5 - (uint)TrackSpec_gSpec.fogspec.color.b,iVar11);
      uVar5 = uVar5 - uVar3;
      uVar3 = 0;
      if ((int)uVar5 < 0) {
LAB_800e0a14:
        bVar2 = uVar3 < 8;
      }
      else {
        bVar2 = (int)uVar5 < 8;
        uVar3 = uVar5;
        if (0xff < (int)uVar5) {
          uVar3 = 0xff;
          goto LAB_800e0a14;
        }
      }
      uVar3 = (int)uVar3 >> 3;
      if (bVar2) {
        uVar3 = 1;
      }
      *puVar9 = uVar1 & 0x8000 | (ushort)((uVar3 & 0x1f) << 10) |
                (ushort)((iVar6 >> 3 & 0x1fU) << 5) | (ushort)(iVar7 >> 3) & 0x1f;
    }
    data = (char *)((ushort *)data + 1);
    puVar9 = puVar9 + 1;
    iVar10 = iVar10 + 1;
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

	/* begin block 2 */
		// Start line: 872
	/* end block 2 */
	// End Line: 873

	/* begin block 3 */
		// Start line: 884
	/* end block 3 */
	// End Line: 885

	/* begin block 4 */
		// Start line: 884
	/* end block 4 */
	// End Line: 885

/* WARNING: Could not reconcile some variable overlaps */

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
    gClutDepth[TP_gZPaletteSystem * 0x10 + level] =
         (short)local_1c << 6 | (ushort)(local_20 >> 4) & 0x3f;
    TextureProcess_ColorClut__FiiPciii(level,0x10,data,numentry,local_20,local_1c);
    bVar1 = level + 1 < 0x10;
    level = level + 1;
  }
  level = TP_gZPaletteSystem;
  TP_gZPaletteSystem = TP_gZPaletteSystem + 1;
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

	/* begin block 2 */
		// Start line: 1189
	/* end block 2 */
	// End Line: 1190

	/* begin block 3 */
		// Start line: 1366
	/* end block 3 */
	// End Line: 1367

	/* begin block 4 */
		// Start line: 1366
	/* end block 4 */
	// End Line: 1367

	/* begin block 5 */
		// Start line: 1369
	/* end block 5 */
	// End Line: 1370

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

	/* begin block 2 */
		// Start line: 1414
	/* end block 2 */
	// End Line: 1415

	/* begin block 3 */
		// Start line: 1418
	/* end block 3 */
	// End Line: 1419

	/* begin block 4 */
		// Start line: 1418
	/* end block 4 */
	// End Line: 1419

FogKey * Fog_FindKey__FiP6FogKey(int currentslice,FogKey *fkey)

{
  FogKey *pFVar1;
  
  if (fkey == (FogKey *)0x0) {
    fkey = Fog_gHeadKey;
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

	/* begin block 2 */
		// Start line: 1429
	/* end block 2 */
	// End Line: 1430

	/* begin block 3 */
		// Start line: 1502
	/* end block 3 */
	// End Line: 1503

	/* begin block 4 */
		// Start line: 1502
	/* end block 4 */
	// End Line: 1503

	/* begin block 5 */
		// Start line: 1504
	/* end block 5 */
	// End Line: 1505

/* WARNING: Unknown calling convention yet parameter storage is locked */

FogKey * Fog_AllocKey__Fv(void)

{
  int *piVar1;
  FogKey *pFVar2;
  int iVar3;
  
  iVar3 = 0;
  pFVar2 = Fog_gBuf;
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

	/* begin block 2 */
		// Start line: 1529
	/* end block 2 */
	// End Line: 1530

	/* begin block 3 */
		// Start line: 1536
	/* end block 3 */
	// End Line: 1537

	/* begin block 4 */
		// Start line: 1536
	/* end block 4 */
	// End Line: 1537

void Fog_AddKey__Fii(int slice,int distance)

{
  FogKey *pFVar1;
  FogKey *pFVar2;
  FogKey *pFVar3;
  
  pFVar1 = Fog_AllocKey__Fv();
  pFVar2 = Fog_gHeadKey;
  pFVar1->prev = (FogKey *)0x0;
  pFVar1->next = (FogKey *)0x0;
  pFVar1->slice = (short)slice;
  pFVar1->distance = (short)distance;
  if (pFVar2 == (FogKey *)0x0) {
    Fog_gHeadKey = pFVar1;
    pFVar1->next = pFVar1;
    pFVar1->prev = pFVar1;
  }
  else {
    if (pFVar2 != pFVar2->next) {
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
  Fog_gNumKeys = Fog_gNumKeys + 1;
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

	/* begin block 2 */
		// Start line: 1711
	/* end block 2 */
	// End Line: 1712

	/* begin block 3 */
		// Start line: 1761
	/* end block 3 */
	// End Line: 1762

	/* begin block 4 */
		// Start line: 1761
	/* end block 4 */
	// End Line: 1762

void Fog_Update__Fi(int player)

{
  FogKey *pFVar1;
  int iVar2;
  int currentslice;
  
  if (Fog_gNumKeys != 1) {
    BWorldSm_FindClosestQuadRez__FP8coorddefP12BWorldSm_Posi
              ((coorddef *)&gCView.cview,fogslicePos + player,1);
    currentslice = (int)fogslicePos[player].slice;
    pFVar1 = Fog_FindKey__FiP6FogKey(currentslice,(&Fog_gCurrentKey2)[player]);
    (&Fog_gCurrentKey2)[player] = pFVar1;
    TrackSpec_gSpec.fogspec.start = (int)pFVar1->distance;
    iVar2 = (int)pFVar1->next->slice;
    if (TrackSpec_gSpec.fogspec.start != (int)pFVar1->next->distance) {
      if (((iVar2 < (int)pFVar1->slice) && (iVar2 = iVar2 + gNumSlices, -1 < currentslice)) &&
         (currentslice < (int)pFVar1->slice)) {
        currentslice = currentslice + gNumSlices;
      }
      currentslice = (currentslice - (int)pFVar1->slice) *
                     ((int)pFVar1->next->distance - (int)pFVar1->distance);
      iVar2 = iVar2 - (int)pFVar1->slice;
      if (iVar2 == 0) {
        trap(0x1c00);
      }
      if ((iVar2 == -1) && (currentslice == -0x80000000)) {
        trap(0x1800);
      }
      TrackSpec_gSpec.fogspec.start = (int)pFVar1->distance + currentslice / iVar2;
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

	/* begin block 2 */
		// Start line: 1993
	/* end block 2 */
	// End Line: 1994

	/* begin block 3 */
		// Start line: 2124
	/* end block 3 */
	// End Line: 2125

	/* begin block 4 */
		// Start line: 2124
	/* end block 4 */
	// End Line: 2125

char * Fog_MakeTrackPathName__FPc(char *ext)

{
  sprintf(&fogstrspc_36,s__sTr_02d_s_80056ab8,PTR_ARRAY_80116480[0],GameSetup_gData.track & 0xf,ext)
  ;
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

	/* begin block 2 */
		// Start line: 2147
	/* end block 2 */
	// End Line: 2148

	/* begin block 3 */
		// Start line: 2151
	/* end block 3 */
	// End Line: 2152

	/* begin block 4 */
		// Start line: 2151
	/* end block 4 */
	// End Line: 2152

/* WARNING: Unknown calling convention yet parameter storage is locked */

int Fog_ReadFogKeys__Fv(void)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  int iVar6;
  uchar **ext;
  uint *puVar7;
  uint uVar8;
  
  if ((GameSetup_gData.Time == 0) || (GameSetup_gData.Weather == 0)) {
    if (GameSetup_gData.Time == 0) {
      if (GameSetup_gData.Weather == 0) {
        ext = PTR_ARRAY_8013db64;
      }
      else {
        ext = PTR_ARRAY_8013db5c;
      }
    }
    else {
      ext = PTR_ARRAY_8013db54;
    }
  }
  else {
    ext = PTR_ARRAY_8013db4c;
  }
  pcVar4 = Fog_MakeTrackPathName__FPc((char *)ext);
  puVar5 = (uint *)loadfileadr(pcVar4,0);
  iVar6 = 0;
  if (puVar5 != (uint *)0x0) {
    uVar8 = *puVar5;
    iVar6 = 0;
    if (uVar8 < 0x20) {
      bVar3 = 0 < (int)uVar8;
      puVar7 = puVar5;
      while (bVar3) {
        puVar1 = puVar7 + 1;
        puVar2 = puVar7 + 2;
        puVar7 = puVar7 + 2;
        iVar6 = iVar6 + 1;
        Fog_AddKey__Fii(*puVar1,*puVar2);
        bVar3 = iVar6 < (int)uVar8;
      }
      purgememadr((int)puVar5);
      iVar6 = 1;
    }
    else {
      iVar6 = 0;
    }
  }
  return iVar6;
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

	/* begin block 2 */
		// Start line: 2266
	/* end block 2 */
	// End Line: 2267

	/* begin block 3 */
		// Start line: 2270
	/* end block 3 */
	// End Line: 2271

	/* begin block 4 */
		// Start line: 2270
	/* end block 4 */
	// End Line: 2271

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Fog_InitFogTriggers__Fv(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0x1f;
  piVar1 = &INT_80123278;
  Fog_gNumKeys = 0;
  Fog_gHeadKey = (FogKey *)0x0;
  do {
    *piVar1 = 1;
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + -1;
  } while (-1 < iVar2);
  iVar2 = Fog_ReadFogKeys__Fv();
  if (iVar2 == 0) {
    Fog_AddKey__Fii(0,TrackSpec_gSpec.fogspec.start);
  }
  iVar2 = 1;
  Fog_gCurrentKey2 = Fog_gHeadKey;
  PTR_8013db84 = Fog_gHeadKey;
  if (GameSetup_gData.commMode == 1) {
    iVar2 = 2;
  }
  fogslicePos = (BWorldSm_Pos *)reservememadr((char *)PTR_ARRAY_8013db6c,iVar2 * 0x84,0);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      BWorldSm_SetSlice__FiP12BWorldSm_Pos(0,(BWorldSm_Pos *)((int)&fogslicePos->slice + iVar4));
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

	/* begin block 2 */
		// Start line: 2373
	/* end block 2 */
	// End Line: 2374

	/* begin block 3 */
		// Start line: 2377
	/* end block 3 */
	// End Line: 2378

	/* begin block 4 */
		// Start line: 2377
	/* end block 4 */
	// End Line: 2378

	/* begin block 5 */
		// Start line: 2378
	/* end block 5 */
	// End Line: 2379

	/* begin block 6 */
		// Start line: 2378
	/* end block 6 */
	// End Line: 2379

/* WARNING: Unknown calling convention yet parameter storage is locked */

void Fog_DeInitFogTriggers__Fv(void)

{
  purgememadr((int)fogslicePos);
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

	/* begin block 2 */
		// Start line: 2391
	/* end block 2 */
	// End Line: 2392

	/* begin block 3 */
		// Start line: 2402
	/* end block 3 */
	// End Line: 2403

	/* begin block 4 */
		// Start line: 2402
	/* end block 4 */
	// End Line: 2403

	/* begin block 5 */
		// Start line: 2403
	/* end block 5 */
	// End Line: 2404

	/* begin block 6 */
		// Start line: 2403
	/* end block 6 */
	// End Line: 2404

/* WARNING: Unknown calling convention yet parameter storage is locked */

void TextureProcess_Init__Fv(void)

{
  gZDepth = 0x10;
  TP_gZPaletteSystem = 0;
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

	/* begin block 2 */
		// Start line: 2425
	/* end block 2 */
	// End Line: 2426

	/* begin block 3 */
		// Start line: 2444
	/* end block 3 */
	// End Line: 2445

	/* begin block 4 */
		// Start line: 2444
	/* end block 4 */
	// End Line: 2445

void CV_ProcessWorldColors_FINAL__FiP7CVECTORs(int constrast,CVECTOR *color,short brightness)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uchar uVar9;
  int iVar10;
  uchar uVar11;
  uchar uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar15 = 0;
  iVar14 = (int)brightness;
  iVar13 = 0;
  while (iVar15 < Chunk_numLight) {
    pbVar4 = &Chunk_lightTable->r + iVar13;
    bVar1 = *pbVar4;
    bVar2 = pbVar4[1];
    bVar3 = pbVar4[2];
    uVar5 = fixedmult((uint)bVar1 - (uint)color->r,constrast);
    iVar6 = (uint)bVar1 - uVar5;
    iVar10 = 0;
    if ((-1 < iVar6) && (iVar10 = iVar6, 0xff < iVar6)) {
      iVar10 = 0xff;
    }
    uVar5 = fixedmult((uint)bVar2 - (uint)color->g,constrast);
    iVar7 = (uint)bVar2 - uVar5;
    iVar6 = 0;
    if ((-1 < iVar7) && (iVar6 = iVar7, 0xff < iVar7)) {
      iVar6 = 0xff;
    }
    uVar5 = fixedmult((uint)bVar3 - (uint)color->b,constrast);
    iVar8 = (uint)bVar3 - uVar5;
    iVar7 = 0;
    if ((-1 < iVar8) && (iVar7 = iVar8, 0xff < iVar8)) {
      iVar7 = 0xff;
    }
    iVar10 = iVar10 + iVar14;
    iVar6 = iVar6 + iVar14;
    iVar7 = iVar7 + iVar14;
    if (0xff < iVar10) {
      iVar10 = 0xff;
    }
    uVar9 = (uchar)iVar10;
    if (iVar10 < 0) {
      uVar9 = '\0';
    }
    if (0xff < iVar6) {
      iVar6 = 0xff;
    }
    uVar11 = (uchar)iVar6;
    if (iVar6 < 0) {
      uVar11 = '\0';
    }
    if (0xff < iVar7) {
      iVar7 = 0xff;
    }
    uVar12 = (uchar)iVar7;
    if (iVar7 < 0) {
      uVar12 = '\0';
    }
    (&Chunk_lightTable->r)[iVar13] = uVar9;
    (&Chunk_lightTable->g)[iVar13] = uVar11;
    iVar15 = iVar15 + 1;
    (&Chunk_lightTable->b)[iVar13] = uVar12;
    iVar13 = iVar13 + 4;
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

	/* begin block 2 */
		// Start line: 2502
	/* end block 2 */
	// End Line: 2503

	/* begin block 3 */
		// Start line: 2506
	/* end block 3 */
	// End Line: 2507

	/* begin block 4 */
		// Start line: 2506
	/* end block 4 */
	// End Line: 2507

/* WARNING: Could not reconcile some variable overlaps */

void CV_ColorTracks__Fiii(int track,int weather,int night)

{
  undefined uVar1;
  short sVar2;
  short brightness;
  undefined *constrast;
  uint local_20;
  
  memset(&local_20,0,4);
  brightness = 0;
  sVar2 = 0;
  if (GameSetup_gData.commMode == 1) {
    if (((track == 2) && (weather == 1)) && (night == 1)) {
      constrast = (undefined *)0xffff6380;
      uVar1 = 0x10;
LAB_800e1420:
      local_20._0_2_ = CONCAT11(uVar1,(uchar)local_20);
      local_20 = local_20 & 0xffff0000 | (uint)(ushort)local_20;
      brightness = 0x10;
      goto LAB_800e14ec;
    }
    if (track == 3) {
      if ((weather == 0) && (night == 1)) {
        constrast = (undefined *)0xffff0c00;
        goto LAB_800e14ec;
      }
      if ((weather == 1) && (night == 1)) {
        constrast = (undefined *)0xffff8c00;
        local_20 = 0x10;
        brightness = 0x10;
        goto LAB_800e14ec;
      }
    }
    if (track == 4) {
      if ((weather == 0) && (night == 1)) {
        constrast = (undefined *)0xffff8800;
        goto LAB_800e14ec;
      }
      if ((weather == 1) && (night == 1)) {
        constrast = (undefined *)0xffff0000;
        uVar1 = 0x18;
        goto LAB_800e1420;
      }
    }
    if (((track == 6) && (weather == 0)) && (night == 1)) {
      constrast = (undefined *)0xffff69f0;
      brightness = 0x31;
      goto LAB_800e14ec;
    }
    if (((track == 7) && (weather == 0)) && (night == 1)) {
      constrast = (undefined *)0xffff4c00;
      brightness = 0x14;
      goto LAB_800e14ec;
    }
    if (((track != 8) || (weather != 0)) || (night != 1)) {
      constrast = (undefined *)0x0;
      brightness = sVar2;
      if (((track == 10) && (brightness = sVar2, weather == 1)) && (brightness = sVar2, night == 1))
      {
        constrast = (undefined *)0xffffac00;
        brightness = sVar2;
      }
      goto LAB_800e14ec;
    }
  }
  else {
    constrast = (undefined *)0x0;
    brightness = sVar2;
    if (((track != 8) || (brightness = sVar2, weather != 0)) || (brightness = sVar2, night != 1))
    goto LAB_800e14ec;
  }
  constrast = &DAT_00006800;
  brightness = 0x16;
LAB_800e14ec:
  CV_ProcessWorldColors_FINAL__FiP7CVECTORs((int)constrast,(CVECTOR *)&local_20,brightness);
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

	/* begin block 2 */
		// Start line: 2938
	/* end block 2 */
	// End Line: 2939

	/* begin block 3 */
		// Start line: 3220
	/* end block 3 */
	// End Line: 3221

	/* begin block 4 */
		// Start line: 3220
	/* end block 4 */
	// End Line: 3221

/* WARNING: Unknown calling convention yet parameter storage is locked */

void CV_InitColorVertices__Fv(void)

{
  CV_ColorTracks__Fiii(GameSetup_gData.track & 0xf,GameSetup_gData.Weather,GameSetup_gData.Time);
  return;
}





