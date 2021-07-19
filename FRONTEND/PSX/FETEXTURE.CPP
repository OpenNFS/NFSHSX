#include "THISDUST.H"
#include "FETEXTURE.H"


// decompiled code
// original method signature: 
// void /*$ra*/ FETexture_LoadPmxAtOffset__FPciP18tTexture_ShapeInfoii(char *f /*$a0*/, int index /*$a1*/, struct tTexture_ShapeInfo *dest /*$s3*/, int yoffset /*$s5*/, int xoffset /*stack 16*/)
 // line 23, offset 0x8004f100
	/* begin block 1 */
		// Start line: 24
		// Start offset: 0x8004F100
		// Variables:
	// 		struct shapetbl *shpptr; // $s2
	// 		struct shapetbl old_shape; // stack offset -64
	// 		int bpp; // $a0
	// 		int xclut; // stack offset -40
	// 		int yclut; // stack offset -36
	// 		struct shapetbl *unpacked; // $s1

		/* begin block 1.1 */
			// Start line: 24
			// Start offset: 0x8004F100

			/* begin block 1.1.1 */
				// Start line: 38
				// Start offset: 0x8004F148
				// Variables:
			// 		char is_compressed; // $s4

				/* begin block 1.1.1.1 */
					// Start line: 39
					// Start offset: 0x8004F148

					/* begin block 1.1.1.1.1 */
						// Start line: 43
						// Start offset: 0x8004F15C
						// Variables:
					// 		char *oldptr; // $v0
					// 		int newptr; // $v0
					/* end block 1.1.1.1.1 */
					// End offset: 0x8004F15C
					// End Line: 52
				/* end block 1.1.1.1 */
				// End offset: 0x8004F1D0
				// End Line: 69
			/* end block 1.1.1 */
			// End offset: 0x8004F390
			// End Line: 116
		/* end block 1.1 */
		// End offset: 0x8004F390
		// End Line: 116
	/* end block 1 */
	// End offset: 0x8004F390
	// End Line: 116

	/* begin block 2 */
		// Start line: 46
	/* end block 2 */
	// End Line: 47

	/* begin block 3 */
		// Start line: 46
	/* end block 3 */
	// End Line: 47

void FETexture_LoadPmxAtOffset__FPciP18tTexture_ShapeInfoii
               (char *f,int index,tTexture_ShapeInfo *dest,int yoffset,int xoffset)

{
  byte bVar1;
  shapetbl *psVar2;
  long lVar3;
  undefined4 uVar4;
  uint bpp;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  shapetbl *psVar10;
  uint local_28;
  int local_24;
  
  local_28 = 0;
  local_24 = 0;
  psVar2 = (shapetbl *)shapepointer((int)f,index);
  if (psVar2 != (shapetbl *)0x0) {
    bVar1 = *(byte *)&psVar2->type;
    psVar10 = psVar2;
    if ((bVar1 & 0x80) != 0) {
      lVar3 = unpacksize(&psVar2->shapex);
      psVar10 = (shapetbl *)reservememadr(s_unpacked_80012848,lVar3 + 0x10,0);
      blockmove((undefined4 *)psVar2,(undefined4 *)psVar10,0x10);
      unpack(&psVar2->shapex,&psVar10->shapex);
      *(byte *)&psVar10->type = *(byte *)&psVar10->type & 0x7f;
      psVar10->type =
           (uint)*(byte *)&psVar10->type |
           ((int)psVar2 + (((int)psVar2->type >> 8) - (int)psVar10)) * 0x100;
    }
    bpp = (uint)*(byte *)&psVar10->type & 3;
    if (bpp != 2) {
      Texture_GetClutId__FiPiT1(bpp,(int *)&local_28,&local_24);
      dest->clutID = local_24 << 6 | (int)local_28 >> 4 & 0x3fU;
    }
    uVar5 = psVar10->type;
    iVar7 = psVar10->next;
    uVar8 = *(undefined4 *)&psVar10->width;
    uVar9 = *(undefined4 *)&psVar10->centerx;
    iVar6 = psVar10->shapex;
    vramfxya((uint *)psVar10,((*(int *)&psVar10->centerx << 0x14) >> 0x14) + xoffset,
             (short)((*(int *)&psVar10->centerx << 4) >> 0x14) + (short)yoffset,local_28,
             (ushort)local_24);
    dest->shpptr = psVar2;
    *(undefined *)&dest->field_0x9 = *(undefined *)&psVar10->type;
    dest->type = dest->type & 0xff000000 | psVar10->type >> 8;
    *(undefined2 *)&dest->next = *(undefined2 *)&psVar10->next;
    *(undefined2 *)((int)&dest->next + 2) = *(undefined2 *)((int)&psVar10->next + 2);
    dest->width = psVar10->width;
    dest->height = psVar10->height;
    dest->centerx = (short)((*(int *)&psVar10->centerx << 0x14) >> 0x14);
    dest->centery = (short)((*(int *)&psVar10->centerx << 4) >> 0x14);
    uVar4 = shapedepth((byte *)psVar10);
    dest->depth = (char)uVar4;
    dest->shapex = (ushort)(((uint)*(byte *)&dest->field_0x9 & 3) << 7) |
                   (short)(dest->centery & 0x100U) >> 4 |
                   (ushort)(((uint)(ushort)dest->centerx & 0x3ff) >> 6) |
                   (ushort)(((uint)(ushort)dest->centery & 0x200) << 2);
    bpp = GetClut((dest->clutID & 0x3fU) << 4,dest->clutID >> 6);
    dest->shapey = (short)bpp;
    if ((yoffset != 0) || (xoffset != 0)) {
      psVar10->type = uVar5;
      psVar10->next = iVar7;
      *(undefined4 *)&psVar10->width = uVar8;
      *(undefined4 *)&psVar10->centerx = uVar9;
      psVar10->shapex = iVar6;
    }
    if ((bVar1 & 0x80) != 0) {
      purgememadr((int)psVar10);
    }
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ FETexture_LoadPmx__FPciP18tTexture_ShapeInfo(char *f /*$a0*/, int index /*$a1*/, struct tTexture_ShapeInfo *dest /*$a2*/)
 // line 125, offset 0x8004f3b8
	/* begin block 1 */
		// Start line: 126
		// Start offset: 0x8004F3B8
	/* end block 1 */
	// End offset: 0x8004F3B8
	// End Line: 126

	/* begin block 2 */
		// Start line: 250
	/* end block 2 */
	// End Line: 251

	/* begin block 3 */
		// Start line: 260
	/* end block 3 */
	// End Line: 261

	/* begin block 4 */
		// Start line: 260
	/* end block 4 */
	// End Line: 261

void FETexture_LoadPmx__FPciP18tTexture_ShapeInfo(char *f,int index,tTexture_ShapeInfo *dest)

{
  FETexture_LoadPmxAtOffset__FPciP18tTexture_ShapeInfoii(f,index,dest,0,0);
  return;
}





