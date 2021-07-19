#include "THISDUST.H"
#include "SCREENMEMCARD.H"


// decompiled code
// original method signature: 
// void /*$ra*/ GetShapeInfo__14tScreenMemcardRsT1PPcT3(struct tScreenMemcard *this /*$a0*/, short *numPermShapes /*$a1*/, short *numSwapShapes /*$a2*/, char **permFileName /*$a3*/, char **swapFileName /*stack 16*/)
 // line 65, offset 0x80046320
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80046320
	/* end block 1 */
	// End offset: 0x80046320
	// End Line: 66

	/* begin block 2 */
		// Start line: 130
	/* end block 2 */
	// End Line: 131

	/* begin block 3 */
		// Start line: 130
	/* end block 3 */
	// End Line: 131

void GetShapeInfo__14tScreenMemcardRsT1PPcT3
               (tScreenMemcard *this,short *numPermShapes,short *numSwapShapes,char **permFileName,
               char **swapFileName)

{
  *numSwapShapes = 0;
  *swapFileName = (char *)0x0;
  *numPermShapes = 0x3c;
  *permFileName = s_zmemcrd_800121b4;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawIcon__14tScreenMemcardP8shapetbliiiis(struct tScreenMemcard *this /*$a0*/, struct shapetbl *icon /*$t0*/, int x /*$s5*/, int y /*$s7*/, int destwidth /*stack 16*/, int destheight /*stack 20*/, int fFade /*stack 24*/)
 // line 90, offset 0x80046344
	/* begin block 1 */
		// Start line: 91
		// Start offset: 0x80046344
		// Variables:
	// 		struct POLY_FT4 *prim; // $s0
	// 		int stype; // $s6
	// 		long sposx; // $s4
	// 		long sposy; // $s1
	// 		long width; // $fp
	// 		long height; // stack offset -48
	// 		int bpp; // $v1
	// 		int v; // $s2
	/* end block 1 */
	// End offset: 0x800463EC
	// End Line: 101

	/* begin block 2 */
		// Start line: 167
	/* end block 2 */
	// End Line: 168

	/* begin block 3 */
		// Start line: 180
	/* end block 3 */
	// End Line: 181

	/* begin block 4 */
		// Start line: 180
	/* end block 4 */
	// End Line: 181

/* WARNING: Removing unreachable block (ram,0x800463c0) */
/* WARNING: Removing unreachable block (ram,0x800463d0) */
/* WARNING: Removing unreachable block (ram,0x800463d8) */

void DrawIcon__14tScreenMemcardP8shapetbliiiis
               (tScreenMemcard *this,shapetbl *icon,int x,int y,int destwidth,int destheight,
               int fFade)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint *puVar4;
  uint *puVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  
  puVar5 = DAT_1f800004;
  puVar4 = DAT_1f800000;
  bVar1 = *(byte *)&icon->type;
  uVar2 = *(undefined2 *)&icon->next;
  uVar3 = *(undefined2 *)((int)&icon->next + 2);
  uVar14 = (*(int *)&icon->centerx << 4) >> 0x14;
  uVar9 = (*(int *)&icon->centerx << 0x14) >> 0x14;
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar13 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 10;
  *puVar4 = *puVar4 & 0xff000000 | uVar13;
  *(undefined *)((int)puVar5 + 7) = 0x2e;
  *(undefined *)((int)puVar5 + 3) = 9;
  cVar6 = -0x80 - (char)fFade;
  *(char *)(puVar5 + 1) = cVar6;
  *(char *)((int)puVar5 + 5) = cVar6;
  *(char *)((int)puVar5 + 6) = cVar6;
  iVar10 = shapetoclutid((uint *)icon);
  *(undefined2 *)((int)puVar5 + 0xe) = (short)iVar10;
  *(ushort *)((int)puVar5 + 0x16) =
       (ushort)(((uint)bVar1 & 3) << 7) | (ushort)((int)(uVar14 & 0x100) >> 4) |
       (ushort)((int)(uVar9 & 0x3ff) >> 6) | (ushort)((uVar14 & 0x200) << 2);
  cVar6 = (char)((int)((uVar9 & 0x3f) << 4) / 4);
  cVar11 = cVar6 + (char)uVar2;
  *(char *)(puVar5 + 3) = cVar6;
  cVar7 = (char)uVar14;
  *(char *)((int)puVar5 + 0xd) = cVar7;
  *(char *)(puVar5 + 5) = cVar11;
  *(char *)((int)puVar5 + 0x15) = cVar7;
  *(char *)(puVar5 + 7) = cVar6;
  cVar7 = cVar7 + (char)uVar3;
  *(char *)((int)puVar5 + 0x1d) = cVar7;
  *(char *)(puVar5 + 9) = cVar11;
  *(char *)((int)puVar5 + 0x25) = cVar7;
  sVar12 = (short)x;
  *(short *)(puVar5 + 2) = sVar12;
  sVar8 = (short)y;
  *(short *)((int)puVar5 + 10) = sVar8;
  *(short *)((int)puVar5 + 0x12) = sVar8;
  *(short *)(puVar5 + 6) = sVar12;
  sVar12 = sVar12 + (short)destwidth;
  *(short *)(puVar5 + 4) = sVar12;
  *(short *)(puVar5 + 8) = sVar12;
  sVar8 = sVar8 + (short)destheight;
  *(short *)((int)puVar5 + 0x1a) = sVar8;
  *(short *)((int)puVar5 + 0x22) = sVar8;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadIcon__14tScreenMemcardi(struct tScreenMemcard *this /*$s6*/, int filenum /*$s5*/)
 // line 145, offset 0x8004653c
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x8004653C
		// Variables:
	// 		void * done; // $s7
	// 		int clutx; // stack offset -56
	// 		int cluty; // stack offset -52
	// 		int i; // $s1

		/* begin block 1.1 */
			// Start line: 151
			// Start offset: 0x80046588

			/* begin block 1.1.1 */
				// Start line: 163
				// Start offset: 0x800465B8

				/* begin block 1.1.1.1 */
					// Start line: 183
					// Start offset: 0x80046688
				/* end block 1.1.1.1 */
				// End offset: 0x8004684C
				// End Line: 250
			/* end block 1.1.1 */
			// End offset: 0x80046860
			// End Line: 254
		/* end block 1.1 */
		// End offset: 0x80046860
		// End Line: 254
	/* end block 1 */
	// End offset: 0x80046868
	// End Line: 259

	/* begin block 2 */
		// Start line: 313
	/* end block 2 */
	// End Line: 314

	/* begin block 3 */
		// Start line: 318
	/* end block 3 */
	// End Line: 319

	/* begin block 4 */
		// Start line: 318
	/* end block 4 */
	// End Line: 319

/* WARNING: Could not reconcile some variable overlaps */

void LoadIcon__14tScreenMemcardi(tScreenMemcard *this,int filenum)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  CARDINFO_def *pCVar5;
  int iVar6;
  tShapeInformation *ptVar7;
  int iVar8;
  uint uVar9;
  tTexture_ShapeInfo **pptVar10;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar2 = AudioMus_Buffered__Fv();
  iVar3 = AudioMus_Threshold__Fv();
  if (iVar3 <= iVar2) {
    CURRENTLYUSINGMEMCARD = &DAT_00000001;
    iVar2 = (int)&(this->tScreen).fPermShapes.fShapes + filenum;
    *(undefined *)(iVar2 + 0x25f) = 0;
    *(undefined *)(iVar2 + 0x26e) = 0;
    if (filenum < *(int *)(this->card + 8)) {
      blockclear(this->numblock + filenum * 0x2c + 0xe,0x2c);
      ptVar7 = (tShapeInformation *)((int)&(this->tScreen).fPermShapes + filenum * 0x2c);
      iVar2 = this->card;
      *(CARDINFO_def **)&ptVar7[0x10].fFile = (CARDINFO_def *)(&this->pCI + filenum * 8);
      ptVar7[0x10].fShapes = (tTexture_ShapeInfo *)(iVar2 + filenum * 0x28 + 0x10);
      pcVar4 = fMemIcon[0] + filenum * 0x240;
      *(char **)(ptVar7[0x10].fFilename + 4) = pcVar4;
      *(char **)(ptVar7[0x10].fFilename + 8) = pcVar4 + 0xc0;
      *(char **)(ptVar7[0x10].fFilename + 0xc) = pcVar4 + 0x180;
      do {
        iVar2 = MCRD_handlecardevents(this->theNFS4icon);
        local_30 = filenum * 2;
      } while (iVar2 != 0x16);
      bVar1 = false;
      MCRD_loadfile(this->theNFS4icon,(MCRDFILE_def *)(this->numblock + filenum * 0x2c + 0xe),1);
      iVar2 = (int)&(this->tScreen).fPermShapes.fShapes + filenum;
      pptVar10 = (tTexture_ShapeInfo **)((int)&(this->tScreen).fPermShapes.fShapes + local_30);
      local_2c = filenum << 3;
      while (!bVar1) {
        pCVar5 = MCRD_getcard(this->theNFS4icon);
        if (pCVar5->status == -1) {
          this->checkingstart = 1;
        }
        iVar3 = MCRD_handlecardevents(this->theNFS4icon);
        switch(iVar3) {
        case 2:
        case 3:
        case 7:
        case 10:
        case 0xb:
        case 0x10:
        case 0x13:
        case 0x17:
          bVar1 = true;
          this->checkingstart = 1;
          *(undefined *)(iVar2 + 0x250) = 0;
          break;
        case 0xf:
          bVar1 = true;
          if (this->checkingstart != 0) {
            ReleaseIcons__14tScreenMemcard(this);
            goto LAB_80046864;
          }
          *(char *)(iVar2 + 0x25f) =
               (char)*this->fMemFile[0].icon[filenum * 3 + local_30 * 4 + 2] + -0x10;
          iVar3 = garyMemCardGrabBlocks(this->theNFS4icon,filenum);
          *(undefined *)(iVar2 + 0x26e) = (char)iVar3;
          if (3 < *(byte *)(iVar2 + 0x25f)) {
            *(undefined *)(iVar2 + 0x25f) = 3;
          }
          if (*(char *)(iVar2 + 0x25f) == '\0') {
            *(undefined *)(iVar2 + 0x25f) = 1;
          }
          if (*(short *)(pptVar10 + 0x145) != 0) {
            Texture_MenuReleaseClutId__Fs(*(short *)(pptVar10 + 0x145));
          }
          Texture_GetClutId__FiPiT1(0,(int *)&local_38,&local_34);
          *(ushort *)(pptVar10 + 0x145) = (short)local_34 << 6 | (ushort)((int)local_38 >> 4) & 0x3f
          ;
          iVar3 = 0;
          if (*(char *)(iVar2 + 0x25f) != '\0') {
            uVar9 = 900;
            iVar8 = 0;
            iVar6 = local_2c + filenum;
            do {
              if ((fMemIcon[0][iVar8 + iVar6 * 0x40] & 0xf7U) == 0x40) {
                vramfxya((uint *)(fMemIcon[0] + iVar8 + iVar6 * 0x40),uVar9,(short)filenum * 0x11,
                         local_38,(ushort)local_34);
              }
              uVar9 = uVar9 + 0x11;
              iVar3 = iVar3 + 1;
              iVar8 = iVar8 + 0xc0;
            } while (iVar3 < (int)(uint)*(byte *)(iVar2 + 0x25f));
          }
          *(undefined2 *)((int)pptVar10 + 0x532) = 0x80;
          *(undefined *)(iVar2 + 0x250) = 1;
        }
      }
    }
LAB_80046864:
    CURRENTLYUSINGMEMCARD = (void *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawVerticalLine__14tScreenMemcardssss(struct tScreenMemcard *this /*$a0*/, short x /*$t0*/, short y /*$a2*/, short gridpos /*$a3*/, int dir /*stack 16*/)
 // line 264, offset 0x80046898
	/* begin block 1 */
		// Start line: 265
		// Start offset: 0x80046898
	/* end block 1 */
	// End offset: 0x800468D4
	// End Line: 270

	/* begin block 2 */
		// Start line: 574
	/* end block 2 */
	// End Line: 575

	/* begin block 3 */
		// Start line: 578
	/* end block 3 */
	// End Line: 579

	/* begin block 4 */
		// Start line: 578
	/* end block 4 */
	// End Line: 579

void DrawVerticalLine__14tScreenMemcardssss
               (tScreenMemcard *this,short x,short y,short gridpos,int dir)

{
  uint uVar1;
  
  uVar1 = (uint)(ushort)gridpos;
  if ((gridpos < 1) || (gridpos < 0x40)) {
    if (gridpos < 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x40;
  }
  PSXDrawBrightEndLine__Fiiiiiiii
            ((int)&DAT_00785a5a,(int)x,(int)y,2,
             (int)(((uint)(ushort)EXTRAYATTOP +
                   (uint)(ushort)GRIDMEMCARD_HEIGHT + (uint)(ushort)GRIDMEMCARDGOURAUDBIT_Y * 2) *
                  0x10000) >> 0x10,(uint)((short)dir == 0),(int)(uVar1 << 0x10) >> 0xf,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawHorizontalLine__14tScreenMemcardssss(struct tScreenMemcard *this /*$a0*/, short x /*$a1*/, short y /*$a2*/, short gridpos /*$t0*/, int dir /*stack 16*/)
 // line 273, offset 0x8004694c
	/* begin block 1 */
		// Start line: 274
		// Start offset: 0x8004694C
	/* end block 1 */
	// End offset: 0x800469D8
	// End Line: 278

	/* begin block 2 */
		// Start line: 599
	/* end block 2 */
	// End Line: 600

	/* begin block 3 */
		// Start line: 603
	/* end block 3 */
	// End Line: 604

	/* begin block 4 */
		// Start line: 603
	/* end block 4 */
	// End Line: 604

void DrawHorizontalLine__14tScreenMemcardssss
               (tScreenMemcard *this,short x,short y,short gridpos,int dir)

{
  int side;
  uint uVar1;
  
  uVar1 = (uint)(ushort)gridpos;
  if ((gridpos < 1) || (gridpos < 0x40)) {
    if (gridpos < 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x40;
  }
  if ((short)dir == 0) {
    side = 2;
  }
  else {
    side = 3;
  }
  PSXDrawBrightEndLine__Fiiiiiiii
            ((int)&DAT_00785a5a,(int)x,(int)y,
             (int)(((uint)(ushort)GRIDMEMCARD_WIDTH + (GRIDMEMCARDGOURAUDBIT_X & 0xffffU) * 2 + 2) *
                  0x10000) >> 0x10,1,side,(int)(uVar1 << 0x10) >> 0xf,GRIDMEMCARDGOURAUDBIT_X);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PlaceIcons__14tScreenMemcardii(struct tScreenMemcard *this /*$s2*/, int i /*$s3*/, int fadeval /*stack 8*/)
 // line 282, offset 0x80046a0c
	/* begin block 1 */
		// Start line: 283
		// Start offset: 0x80046A0C
		// Variables:
	// 		short xx; // $s1
	// 		short yy; // $s0
	// 		int j; // $s4

		/* begin block 1.1 */
			// Start line: 283
			// Start offset: 0x80046A0C

			/* begin block 1.1.1 */
				// Start line: 286
				// Start offset: 0x80046A5C

				/* begin block 1.1.1.1 */
					// Start line: 294
					// Start offset: 0x80046AF8

					/* begin block 1.1.1.1.1 */
						// Start line: 294
						// Start offset: 0x80046AF8
					/* end block 1.1.1.1.1 */
					// End offset: 0x80046AF8
					// End Line: 294
				/* end block 1.1.1.1 */
				// End offset: 0x80046AF8
				// End Line: 294

				/* begin block 1.1.1.2 */
					// Start line: 294
					// Start offset: 0x80046AF8

					/* begin block 1.1.1.2.1 */
						// Start line: 298
						// Start offset: 0x80046BA0
						// Variables:
					// 		struct tDrawShapeExtended fFlags; // stack offset -64
					/* end block 1.1.1.2.1 */
					// End offset: 0x80046BE4
					// End Line: 302
				/* end block 1.1.1.2 */
				// End offset: 0x80046C78
				// End Line: 305
			/* end block 1.1.1 */
			// End offset: 0x80046D1C
			// End Line: 314
		/* end block 1.1 */
		// End offset: 0x80046D30
		// End Line: 315
	/* end block 1 */
	// End offset: 0x80046D30
	// End Line: 315

	/* begin block 2 */
		// Start line: 618
	/* end block 2 */
	// End Line: 619

	/* begin block 3 */
		// Start line: 623
	/* end block 3 */
	// End Line: 624

	/* begin block 4 */
		// Start line: 623
	/* end block 4 */
	// End Line: 624

void PlaceIcons__14tScreenMemcardii(tScreenMemcard *this,int i,int fadeval)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int fade;
  int iVar4;
  int iVar5;
  int iVar6;
  tTexture_ShapeInfo **pptVar7;
  tDrawShapeExtended tStack64;
  
  iVar6 = 0;
  pptVar7 = (tTexture_ShapeInfo **)((int)&(this->tScreen).fPermShapes.fShapes + i * 2);
  while (iVar6 < (int)(uint)this->numicon[i + 0xb]) {
    iVar2 = (uint)(ushort)this->memcardanimframe << 0x10;
    fade = iVar2 >> 0x10;
    uVar3 = (fade / 3 + (fade >> 0x1f)) - (iVar2 >> 0x1f);
    if ((uVar3 & 1) == 0) {
      iVar2 = (int)((fade + uVar3 * -3) * 0x10000) >> 0x10;
    }
    else {
      iVar2 = 2 - ((int)((fade + uVar3 * -3) * 0x10000) >> 0x10);
    }
    iVar5 = (MEMCARDICONOFFX & 0xffffU) + (uint)(ushort)GRIDMEMCARD_STARTX + MEMCARD_DELTAX * iVar2;
    iVar2 = (uint)(ushort)this->memcardanimframe << 0x10;
    fade = iVar2 >> 0x10;
    iVar2 = (uint)(ushort)GRIDMEMCARD_STARTY + (MEMCARDICONOFFY & 0xffffU) +
            (4 - (((fade / 3 + (fade >> 0x1f)) - (iVar2 >> 0x1f)) * 0x10000 >> 0x10)) *
            MEMCARD_DELTAY;
    bVar1 = this->goticon[i + 0xb];
    if (bVar1 == 0) {
      trap(0x1c00);
    }
    if (((uint)bVar1 == 0xffffffff) && ((int)ticks >> 4 == -0x80000000)) {
      trap(0x1800);
    }
    if (i == *(int *)((this->tScreen)._vf + 6)) {
      tStack64.tint[0] = 0xb55623;
      fade = fadeval + (int)*(short *)((int)pptVar7 + 0x532);
      if (0x80 < fade) {
        fade = 0x80;
      }
      DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
                ((int)*(short *)&this->message,0x410,(iVar5 * 0x10000 >> 0x10) + -0xf2,
                 (iVar2 * 0x10000 >> 0x10) + -0x70,fade,1,&tStack64);
    }
    else {
      iVar4 = fadeval + (int)*(short *)((int)pptVar7 + 0x532);
      fade = iVar4 * 0x10000;
      if (0x80 < iVar4) {
        fade = 0x800000;
      }
      DrawIcon__14tScreenMemcardP8shapetbliiiis
                (this,(shapetbl *)
                      (fMemIcon[0] + (((int)ticks >> 4) % (uint)bVar1) * 0xc0 + i * 0x240),
                 iVar5 * 0x10000 >> 0x10,iVar2 * 0x10000 >> 0x10,0x1f,0x10,fade >> 0x10);
    }
    if (((*(int *)((this->tScreen)._vf + 6) == i) && (fadeval == 0)) && (*(int *)&this->player == 0)
       ) {
      fade = iVar5 * 0x10000 >> 0x10;
      PSXDrawSquare__Fiiiii
                (0,(fade - MEMCARDICONOFFX) + 2,((int)(short)iVar2 - MEMCARDICONOFFY) + 1,
                 MEMCARD_DELTAX + -2,MEMCARD_DELTAY + -1);
      PSXDrawSquare__Fiiiii
                ((int)&DAT_0000bebe,fade - MEMCARDICONOFFX,(int)(short)iVar2 - MEMCARDICONOFFY,
                 MEMCARD_DELTAX + 2,MEMCARD_DELTAY + 1);
    }
    iVar6 = iVar6 + 1;
    this->memcardanimframe = this->memcardanimframe + 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawMemCardStuff__14tScreenMemcards(struct tScreenMemcard *this /*$s1*/, short fadeval /*$s5*/)
 // line 319, offset 0x80046d60
	/* begin block 1 */
		// Start line: 320
		// Start offset: 0x80046D60
		// Variables:
	// 		short i; // $s3

		/* begin block 1.1 */
			// Start line: 348
			// Start offset: 0x80046DF8

			/* begin block 1.1.1 */
				// Start line: 349
				// Start offset: 0x80046E10

				/* begin block 1.1.1.1 */
					// Start line: 350
					// Start offset: 0x80046E10

					/* begin block 1.1.1.1.1 */
						// Start line: 352
						// Start offset: 0x80046E20

						/* begin block 1.1.1.1.1.1 */
							// Start line: 352
							// Start offset: 0x80046E20

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 352
								// Start offset: 0x80046E20
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80046E20
							// End Line: 352
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80046E20
						// End Line: 352
					/* end block 1.1.1.1.1 */
					// End offset: 0x80046E30
					// End Line: 352
				/* end block 1.1.1.1 */
				// End offset: 0x80046E30
				// End Line: 352

				/* begin block 1.1.1.2 */
					// Start line: 352
					// Start offset: 0x80046E30

					/* begin block 1.1.1.2.1 */
						// Start line: 352
						// Start offset: 0x80046E30
					/* end block 1.1.1.2.1 */
					// End offset: 0x80046E30
					// End Line: 352
				/* end block 1.1.1.2 */
				// End offset: 0x80046E30
				// End Line: 352
			/* end block 1.1.1 */
			// End offset: 0x80046F14
			// End Line: 379
		/* end block 1.1 */
		// End offset: 0x80047248
		// End Line: 476
	/* end block 1 */
	// End offset: 0x80047298
	// End Line: 492

	/* begin block 2 */
		// Start line: 711
	/* end block 2 */
	// End Line: 712

	/* begin block 3 */
		// Start line: 716
	/* end block 3 */
	// End Line: 717

	/* begin block 4 */
		// Start line: 716
	/* end block 4 */
	// End Line: 717

void DrawMemCardStuff__14tScreenMemcards(tScreenMemcard *this,short fadeval)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  CARDINFO_def *pCVar4;
  int i;
  int iVar5;
  undefined4 uVar6;
  tTexture_ShapeInfo **pptVar7;
  int iVar8;
  
  pCVar4 = MCRD_getcard(this->theNFS4icon);
  i = *(int *)((this->tScreen)._vf + 6);
  *(CARDINFO_def **)&this->card = pCVar4;
  this->memcardanimframe = 0;
  if (i == -1) {
    *(undefined2 *)&this->message = 0;
    *(undefined2 *)((int)&this->message + 2) = 0;
  }
  else {
    *(short *)((int)&this->message + 2) = *(short *)((int)&this->message + 2) + 1;
  }
  if (*(short *)((int)&this->message + 2) == 4) {
    sVar1 = *(short *)&this->message;
    *(undefined2 *)((int)&this->message + 2) = 0;
    sVar1 = sVar1 + 1;
    *(short *)&this->message = sVar1;
    if (0x1d < sVar1) {
      *(undefined2 *)&this->message = 0;
    }
  }
  if (*(int *)this->card == -1) {
    this->checkingstart = 1;
    if (*(int *)&this->cursorPosition == 0) {
      *(uchar **)&this->cursorPosition = ticks;
    }
    uVar6 = 0x27b;
    if (800 < (int)(ticks + -*(int *)&this->cursorPosition)) {
      uVar6 = 0x27f;
    }
    i = this->card;
    *(undefined4 *)(this->fMemCardMessage + 0x24) = uVar6;
    iVar8 = 0;
    if (0 < *(int *)(i + 8)) {
      i = 0;
      do {
        i = i >> 0x10;
        iVar5 = (int)&(this->tScreen).fPermShapes.fShapes + i;
        if (*(char *)(iVar5 + 0x250) != '\0') {
          pptVar7 = (tTexture_ShapeInfo **)((int)&(this->tScreen).fPermShapes.fShapes + i * 2);
          sVar1 = *(short *)((int)pptVar7 + 0x532) + 8;
          *(short *)((int)pptVar7 + 0x532) = sVar1;
          if (sVar1 < 0x81) {
            PlaceIcons__14tScreenMemcardii(this,i,(int)fadeval);
          }
          else {
            *(undefined2 *)((int)pptVar7 + 0x532) = 0x80;
            *(undefined *)(iVar5 + 0x250) = 0;
            *(undefined *)(iVar5 + 0x25f) = 0;
            *(undefined *)(iVar5 + 0x26e) = 0;
            if (*(short *)(pptVar7 + 0x145) != 0) {
              Texture_MenuReleaseClutId__Fs(*(short *)(pptVar7 + 0x145));
              *(undefined2 *)(pptVar7 + 0x145) = 0;
            }
          }
        }
        iVar8 = iVar8 + 1;
        i = iVar8 * 0x10000;
      } while (iVar8 * 0x10000 >> 0x10 < *(int *)(this->card + 8));
    }
    goto LAB_80047248;
  }
  if (*(int *)this->card == -2) {
    *(undefined4 *)&this->cursorPosition = 0;
    *(undefined4 *)(this->fMemCardMessage + 0x24) = 0x288;
    goto LAB_80047248;
  }
  *(undefined4 *)&this->cursorPosition = 0;
  uVar6 = 0x27d;
  if (*(int *)(this->card + 8) == 0) {
    uVar6 = 0x284;
  }
  *(undefined4 *)(this->fMemCardMessage + 0x24) = uVar6;
  if (*(int *)&this->player == 0) {
    *(undefined4 *)(this->fFadeIcon + 0xd) = 0;
LAB_80046fd8:
    i = 0;
    if (0 < *(int *)(this->card + 8)) {
      do {
        sVar1 = (short)i;
        if (this->checkingstart != 0) {
          ReleaseIcons__14tScreenMemcard(this);
          this->checkingstart = 0;
          *(undefined4 *)&this->player = 0;
          break;
        }
        if ((this->fMemTitle[(int)sVar1 + 0x1dc] == '\0') && (CURRENTLYUSINGMEMCARD == (void *)0x0))
        {
          if (*(int *)&this->player == 0) {
            LoadIcon__14tScreenMemcardi(this,(int)sVar1);
            goto LAB_80047044;
          }
LAB_80047054:
          if (*(int *)(this->fFadeIcon + 0xd) != 0) {
            this->fMemTitle[(int)sVar1 + 0x1dc] = '\0';
          }
        }
        else {
LAB_80047044:
          if (*(int *)&this->player != 0) goto LAB_80047054;
        }
        if (CURRENTLYUSINGMEMCARD == (void *)0x0) {
          if (this->fMemTitle[(int)sVar1 + 0x1dc] != '\0') {
            if (this->fMemIconClutId[(int)sVar1 + 0xd] == 0) {
              iVar8 = MCRD_fileexists(this->theNFS4icon,&DAT_80012218);
              iVar5 = *(int *)(this->fMemCardMessage + 0x24);
              *(int *)((this->tScreen)._vf + 6) = iVar8;
              if ((iVar5 != 0x27f) && (iVar5 != 0x27b)) {
                *(undefined4 *)&this->cursorPosition = 0;
              }
              iVar8 = *(int *)((this->tScreen)._vf + 6);
              if ((iVar8 == -1) || (this->fMemTitle[iVar8 + 0x1dc] == '\0')) {
                *(undefined4 *)(this->fMemCardMessage + 0x24) = 0x284;
              }
              else {
                iVar8 = *(int *)((this->tScreen)._vf + 6);
                *(undefined4 *)(this->fMemCardMessage + 0x24) = 0xffffffff;
                sprintf((char *)&this->fInitedMemCard,(char *)(&this->pCI + iVar8 * 8));
              }
            }
            goto LAB_8004712c;
          }
        }
        else {
LAB_8004712c:
          iVar8 = (int)&(this->tScreen).fPermShapes.fShapes + (int)sVar1;
          if (*(char *)(iVar8 + 0x250) != '\0') {
            if ((*(int *)&this->player == 0) || (*(int *)(this->fFadeIcon + 0xd) != 0)) {
              iVar8 = (int)&(this->tScreen).fPermShapes.fShapes + ((i << 0x10) >> 0xf);
              uVar3 = *(short *)(iVar8 + 0x532) - 8;
              *(ushort *)(iVar8 + 0x532) = uVar3;
              if ((int)((uint)uVar3 << 0x10) < 0) {
                *(undefined2 *)(iVar8 + 0x532) = 0;
              }
            }
            else {
              pptVar7 = (tTexture_ShapeInfo **)
                        ((int)&(this->tScreen).fPermShapes.fShapes + (int)sVar1 * 2);
              sVar2 = *(short *)((int)pptVar7 + 0x532) + 8;
              *(short *)((int)pptVar7 + 0x532) = sVar2;
              if (0x80 < sVar2) {
                *(undefined2 *)((int)pptVar7 + 0x532) = 0x80;
                if (*(short *)(pptVar7 + 0x145) != 0) {
                  Texture_MenuReleaseClutId__Fs(*(short *)(pptVar7 + 0x145));
                  *(undefined2 *)(pptVar7 + 0x145) = 0;
                }
                *(undefined *)(iVar8 + 0x250) = 0;
                *(undefined *)(iVar8 + 0x25f) = 0;
                *(undefined *)(iVar8 + 0x26e) = 0;
              }
            }
            PlaceIcons__14tScreenMemcardii(this,(int)sVar1,(int)fadeval);
          }
        }
        i = i + 1;
      } while (i * 0x10000 >> 0x10 < *(int *)(this->card + 8));
    }
  }
  else {
    iVar8 = this->card;
    *(undefined4 *)(this->fFadeIcon + 0xd) = 1;
    i = 0;
    if (0 < *(int *)(iVar8 + 8)) {
      iVar5 = 0;
      do {
        i = i + 1;
        if (*(short *)((int)this->fMemIconClutId + (iVar5 >> 0xf) + 0x1a) < 0x80) {
          *(undefined4 *)(this->fFadeIcon + 0xd) = 0;
        }
        iVar5 = i * 0x10000;
      } while (i * 0x10000 >> 0x10 < *(int *)(iVar8 + 8));
      goto LAB_80046fd8;
    }
  }
  if ((*(int *)&this->player != 0) && (*(int *)(this->fFadeIcon + 0xd) != 0)) {
    *(undefined4 *)&this->player = 0;
  }
LAB_80047248:
  if ((*(int *)this->card == -3) && (*(int *)((this->tScreen)._vf + 6) == -1)) {
    *(undefined4 *)(this->fMemCardMessage + 0x24) = 0x2bf;
  }
  if (CURRENTLYUSINGMEMCARD == (void *)0x0) {
    MCRD_handlecardevents(this->theNFS4icon);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetEnablings__14tScreenMemcard(struct tScreenMemcard *this /*$s0*/)
 // line 517, offset 0x800472bc
	/* begin block 1 */
		// Start line: 518
		// Start offset: 0x800472BC
		// Variables:
	// 		void * DontChangeEnablings; // $a1

		/* begin block 1.1 */
			// Start line: 518
			// Start offset: 0x800472BC
			// Variables:
		// 		int i; // $v1
		/* end block 1.1 */
		// End offset: 0x80047358
		// End Line: 531

		/* begin block 1.2 */
			// Start line: 537
			// Start offset: 0x80047370

			/* begin block 1.2.1 */
				// Start line: 538
				// Start offset: 0x80047378

				/* begin block 1.2.1.1 */
					// Start line: 539
					// Start offset: 0x80047378

					/* begin block 1.2.1.1.1 */
						// Start line: 540
						// Start offset: 0x80047388

						/* begin block 1.2.1.1.1.1 */
							// Start line: 540
							// Start offset: 0x80047388

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 540
								// Start offset: 0x80047388
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x80047388
							// End Line: 540
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80047388
						// End Line: 540
					/* end block 1.2.1.1.1 */
					// End offset: 0x80047388
					// End Line: 540

					/* begin block 1.2.1.1.2 */
						// Start line: 544
						// Start offset: 0x800473A4

						/* begin block 1.2.1.1.2.1 */
							// Start line: 544
							// Start offset: 0x800473A4

							/* begin block 1.2.1.1.2.1.1 */
								// Start line: 544
								// Start offset: 0x800473A4
							/* end block 1.2.1.1.2.1.1 */
							// End offset: 0x800473BC
							// End Line: 544
						/* end block 1.2.1.1.2.1 */
						// End offset: 0x800473BC
						// End Line: 544
					/* end block 1.2.1.1.2 */
					// End offset: 0x800473BC
					// End Line: 544
				/* end block 1.2.1.1 */
				// End offset: 0x800473BC
				// End Line: 544

				/* begin block 1.2.1.2 */
					// Start line: 546
					// Start offset: 0x800473BC

					/* begin block 1.2.1.2.1 */
						// Start line: 549
						// Start offset: 0x80047404

						/* begin block 1.2.1.2.1.1 */
							// Start line: 549
							// Start offset: 0x80047404

							/* begin block 1.2.1.2.1.1.1 */
								// Start line: 549
								// Start offset: 0x80047404
							/* end block 1.2.1.2.1.1.1 */
							// End offset: 0x80047404
							// End Line: 549
						/* end block 1.2.1.2.1.1 */
						// End offset: 0x80047404
						// End Line: 549
					/* end block 1.2.1.2.1 */
					// End offset: 0x80047404
					// End Line: 549

					/* begin block 1.2.1.2.2 */
						// Start line: 553
						// Start offset: 0x80047420

						/* begin block 1.2.1.2.2.1 */
							// Start line: 553
							// Start offset: 0x80047420

							/* begin block 1.2.1.2.2.1.1 */
								// Start line: 553
								// Start offset: 0x80047420
							/* end block 1.2.1.2.2.1.1 */
							// End offset: 0x80047438
							// End Line: 553
						/* end block 1.2.1.2.2.1 */
						// End offset: 0x80047438
						// End Line: 553
					/* end block 1.2.1.2.2 */
					// End offset: 0x80047438
					// End Line: 553
				/* end block 1.2.1.2 */
				// End offset: 0x80047438
				// End Line: 553
			/* end block 1.2.1 */
			// End offset: 0x80047438
			// End Line: 553
		/* end block 1.2 */
		// End offset: 0x80047438
		// End Line: 553

		/* begin block 1.3 */
			// Start line: 556
			// Start offset: 0x80047438

			/* begin block 1.3.1 */
				// Start line: 557
				// Start offset: 0x80047448

				/* begin block 1.3.1.1 */
					// Start line: 557
					// Start offset: 0x80047448

					/* begin block 1.3.1.1.1 */
						// Start line: 557
						// Start offset: 0x80047448
					/* end block 1.3.1.1.1 */
					// End offset: 0x80047460
					// End Line: 557
				/* end block 1.3.1.1 */
				// End offset: 0x80047460
				// End Line: 557
			/* end block 1.3.1 */
			// End offset: 0x80047460
			// End Line: 557
		/* end block 1.3 */
		// End offset: 0x80047460
		// End Line: 557
	/* end block 1 */
	// End offset: 0x80047460
	// End Line: 557

	/* begin block 2 */
		// Start line: 1115
	/* end block 2 */
	// End Line: 1116

	/* begin block 3 */
		// Start line: 1141
	/* end block 3 */
	// End Line: 1142

	/* begin block 4 */
		// Start line: 1141
	/* end block 4 */
	// End Line: 1142

void SetEnablings__14tScreenMemcard(tScreenMemcard *this)

{
  bool bVar1;
  CARDINFO_def *pCVar2;
  void *pvVar3;
  int iVar4;
  tScreenMemcard *ptVar5;
  
  pCVar2 = MCRD_getcard(this->theNFS4icon);
  iVar4 = 0;
  *(CARDINFO_def **)&this->card = pCVar2;
  bVar1 = false;
  ptVar5 = this;
  if (0 < pCVar2->numfiles) {
    do {
      if ((((this->fMemTitle[iVar4 + 0x1dc] == '\0') || (0 < (short)ptVar5->fMemIconClutId[0xd])) &&
          (*(int *)this->card != -1)) && (*(int *)this->card != -2)) {
        bVar1 = true;
      }
      iVar4 = iVar4 + 1;
      ptVar5 = (tScreenMemcard *)((int)&(ptVar5->tScreen).fPermShapes.fShapes + 2);
    } while (iVar4 < pCVar2->numfiles);
  }
  if (CURRENTLYUSINGMEMCARD != (void *)0x0) {
    bVar1 = true;
  }
  if (!bVar1) {
    if (*(int *)((this->tScreen)._vf + 6) == -1) {
      (menuDefs->menuControllerConfig).tMenu.fItemList[5] =
           (_func_21 *)((uint)(menuDefs->menuControllerConfig).tMenu.fItemList[5] | 1);
    }
    else {
      (menuDefs->menuControllerConfig).tMenu.fItemList[5] =
           (_func_21 *)((uint)(menuDefs->menuControllerConfig).tMenu.fItemList[5] & 0xfffffffe);
    }
    iVar4 = *(int *)this->card;
    if ((((iVar4 == 0) || (iVar4 == -2)) ||
        ((iVar4 == -3 && (*(int *)((this->tScreen)._vf + 6) != -1)))) &&
       (*(short *)&this->fScreenFadeReadyTick == 0)) {
      *(uint *)&(menuDefs->itemControllerSettings).fDiffX =
           *(uint *)&(menuDefs->itemControllerSettings).fDiffX & 0xfffffffe;
    }
    else {
      *(uint *)&(menuDefs->itemControllerSettings).fDiffX =
           *(uint *)&(menuDefs->itemControllerSettings).fDiffX | 1;
    }
  }
  pvVar3 = FECheat_IsTheUserACryBabyCheater__Fv();
  if (pvVar3 != (void *)0x0) {
    *(uint *)&(menuDefs->itemControllerSettings).fDiffX =
         *(uint *)&(menuDefs->itemControllerSettings).fDiffX | 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawBackground__14tScreenMemcard(struct tScreenMemcard *this /*$s7*/)
 // line 561, offset 0x80047470
	/* begin block 1 */
		// Start line: 562
		// Start offset: 0x80047470
		// Variables:
	// 		short x; // $s0
	// 		short y; // $s0
	// 		int gray; // $s6
	// 		short fade; // $a1
	// 		short fadebox; // stack offset -56
	// 		short gridpos; // stack offset -48
	// 		short fTextFade; // $s0
	// 		int ColText; // $s0
	// 		struct RECT rr; // stack offset -64
	// 		short i; // $fp

		/* begin block 1.1 */
			// Start line: 582
			// Start offset: 0x80047570

			/* begin block 1.1.1 */
				// Start line: 587
				// Start offset: 0x80047580

				/* begin block 1.1.1.1 */
					// Start line: 588
					// Start offset: 0x80047580

					/* begin block 1.1.1.1.1 */
						// Start line: 590
						// Start offset: 0x80047590

						/* begin block 1.1.1.1.1.1 */
							// Start line: 590
							// Start offset: 0x80047590
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80047590
						// End Line: 590
					/* end block 1.1.1.1.1 */
					// End offset: 0x80047590
					// End Line: 590

					/* begin block 1.1.1.1.2 */
						// Start line: 591
						// Start offset: 0x800475B0
						// Variables:
					// 		int i; // $v1
					/* end block 1.1.1.1.2 */
					// End offset: 0x800475E8
					// End Line: 602

					/* begin block 1.1.1.1.3 */
						// Start line: 604
						// Start offset: 0x800475F4

						/* begin block 1.1.1.1.3.1 */
							// Start line: 604
							// Start offset: 0x800475F4

							/* begin block 1.1.1.1.3.1.1 */
								// Start line: 605
								// Start offset: 0x80047604

								/* begin block 1.1.1.1.3.1.1.1 */
									// Start line: 605
									// Start offset: 0x80047604

									/* begin block 1.1.1.1.3.1.1.1.1 */
										// Start line: 605
										// Start offset: 0x80047604
									/* end block 1.1.1.1.3.1.1.1.1 */
									// End offset: 0x80047604
									// End Line: 605
								/* end block 1.1.1.1.3.1.1.1 */
								// End offset: 0x80047604
								// End Line: 605
							/* end block 1.1.1.1.3.1.1 */
							// End offset: 0x80047610
							// End Line: 606
						/* end block 1.1.1.1.3.1 */
						// End offset: 0x80047610
						// End Line: 606
					/* end block 1.1.1.1.3 */
					// End offset: 0x80047610
					// End Line: 606
				/* end block 1.1.1.1 */
				// End offset: 0x80047610
				// End Line: 606
			/* end block 1.1.1 */
			// End offset: 0x80047610
			// End Line: 606
		/* end block 1.1 */
		// End offset: 0x80047610
		// End Line: 606

		/* begin block 1.2 */
			// Start line: 611
			// Start offset: 0x80047644

			/* begin block 1.2.1 */
				// Start line: 611
				// Start offset: 0x80047644
			/* end block 1.2.1 */
			// End offset: 0x80047644
			// End Line: 611
		/* end block 1.2 */
		// End offset: 0x80047644
		// End Line: 611

		/* begin block 1.3 */
			// Start line: 674
			// Start offset: 0x800479F0
			// Variables:
		// 		int k; // $s0
		/* end block 1.3 */
		// End offset: 0x80047A90
		// End Line: 682
	/* end block 1 */
	// End offset: 0x80047AA8
	// End Line: 687

	/* begin block 2 */
		// Start line: 1230
	/* end block 2 */
	// End Line: 1231

	/* begin block 3 */
		// Start line: 1235
	/* end block 3 */
	// End Line: 1236

	/* begin block 4 */
		// Start line: 1235
	/* end block 4 */
	// End Line: 1236

void DrawBackground__14tScreenMemcard(tScreenMemcard *this)

{
  short sVar1;
  int col;
  uint uVar2;
  char *__format;
  tScreenMemcard *ptVar3;
  short fadeval;
  int h;
  int w;
  int y;
  int x;
  RECT local_40;
  short local_38;
  short local_30;
  
  col = *(int *)((this->tScreen)._vf + 6);
  *(undefined4 *)(this->fMemCardMessage + 0x24) = 0xffffffff;
  if (this->fMemTitle[col + 0x1dc] == '\0') {
    *(undefined4 *)((this->tScreen)._vf + 6) = 0xffffffff;
  }
  systemtask(0);
  uVar2 = (uint)(ushort)(this->tScreen).fScreenFadeVal;
  col = uVar2 * 2 + -0x80;
  local_38 = (short)col;
  col = col * 0x10000 >> 0x10;
  if ((col < 0x80) && (col < 1)) {
    local_38 = 0;
  }
  else {
    if (0x80 < col) {
      local_38 = 0x80;
    }
  }
  col = (int)(uVar2 << 0x11) >> 0x11;
  if ((col < 0x80) && (col < 1)) {
    local_30 = 0;
  }
  else {
    local_30 = (short)(uVar2 * 2) >> 1;
    if (0x80 < col) {
      local_30 = 0x80;
    }
  }
  col = (int)(uVar2 << 0x11) >> 0xf;
  if (0x80 < col) {
    col = 0x80;
  }
  fadeval = (short)col;
  if (col < 0) {
    fadeval = 0;
  }
  if (this->fReadyToGetNewIcons == (void *)0x0) {
    sVar1 = (this->tScreen).fScreenFadeVal;
    *(undefined4 *)(this->fMemCardMessage + 0x24) = 0x27c;
    if ((sVar1 == 0) &&
       (0x80 < (int)(ticks + -(int)this->fSomePunkInQAPulledOutTheMemoryCardWhileLoadingIcons))) {
      Init_Memcard__FbT0(&DAT_00000001,(void *)0x0);
      col = 0;
      ptVar3 = this;
      do {
        h = (int)&(this->tScreen).fPermShapes.fShapes + col;
        *(undefined *)(h + 0x250) = 0;
        *(undefined *)(h + 0x25f) = 0;
        *(undefined *)(h + 0x26e) = 0;
        ptVar3->fMemIconClutId[0xd] = 0x80;
        col = col + 1;
        ptVar3 = (tScreenMemcard *)((int)&(ptVar3->tScreen).fPermShapes.fShapes + 2);
      } while (col < 0xf);
      *(undefined **)&this->fReadyToGetNewIcons = &DAT_00000001;
    }
    else {
      if (this->fSomePunkInQAPulledOutTheMemoryCardWhileLoadingIcons == (void *)0x0) {
        *(uchar **)&this->fSomePunkInQAPulledOutTheMemoryCardWhileLoadingIcons = ticks;
      }
    }
    if (this->fReadyToGetNewIcons == (void *)0x0) goto LAB_80047648;
  }
  if (local_38 != 0x80) {
    DrawMemCardStuff__14tScreenMemcards(this,fadeval);
  }
LAB_80047648:
  col = CalcFadeVal__Fii(kRGBVals[(uint)DAT_800515e1],(int)fadeval);
  if (this->fMemCardMessageTextSys != -1) {
    *(int *)(this->fMemCardMessage + 0x24) = this->fMemCardMessageTextSys;
  }
  if (*(int *)(this->fMemCardMessage + 0x24) != -1) {
    __format = TextSys_Word__Fi(*(int *)(this->fMemCardMessage + 0x24));
    sprintf((char *)&this->fInitedMemCard,__format);
  }
  local_40.w = 0xbe;
  local_40.h = 0;
  local_40.x = (short)kMemCardMessageX;
  local_40.y = (short)kMemCardMessageY;
  FETextRender_WordWrapTextRGBJustify__FPcR4RECTiiib
            ((char *)&this->fInitedMemCard,&local_40,col,2,0,(void *)0x0);
  __format = TextSys_Word__Fi((int)*(short *)&this->fScreenFadeReadyTick + 0x293);
  FETextRender_FullTextRGB__FPcssics
            (__format,(short)kMemCardMessage1X,(short)kMemCardMessage1Y,col,0,2);
  col = 0;
  x = (int)(((GRIDMEMCARD_STARTX & 0xffffU) - (uint)(ushort)GRIDMEMCARDGOURAUDBIT_X) * 0x10000) >>
      0x10;
  y = (int)((((GRIDMEMCARD_STARTY & 0xffffU) - (uint)(ushort)GRIDMEMCARDGOURAUDBIT_Y) -
            ((EXTRAYATTOP & 0xffffU) + 4)) * 0x10000) >> 0x10;
  w = (int)(((GRIDMEMCARD_WIDTH & 0xffffU) + (uint)(ushort)GRIDMEMCARDGOURAUDBIT_X * 2 + 2) *
           0x10000) >> 0x10;
  uVar2 = ((uint)(ushort)GRIDMEMCARD_HEIGHT + (uint)(ushort)GRIDMEMCARDGOURAUDBIT_Y * 2 +
          (EXTRAYATTOP & 0xffffU) + 6) * 0x10000;
  h = (int)(((int)uVar2 >> 0x10) + (uVar2 >> 0x1f)) >> 1;
  SubtractiveBox__Fiiiiiiii(x,y,w,h,(int)&DAT_00505050,(int)&DAT_00505050,0,0);
  SubtractiveBox__Fiiiiiiii(x,y + h,w,h,0,0,(int)&DAT_00505050,(int)&DAT_00505050);
  PSXDrawSquare__Fiiiii
            (0,GRIDMEMCARD_STARTX + 2,kMemCardMessage1Y + -2,GRIDMEMCARD_WIDTH + -4,
             kMemCardMessageH1 + -1);
  PSXDrawSquare__Fiiiii
            (0,GRIDMEMCARD_STARTX + 2,GRIDMEMCARD_STARTY + MEMCARD_DELTAY * 5 + 1,
             GRIDMEMCARD_WIDTH + -4,kMemCardMessageH + -1);
  do {
    fadeval = local_30;
    h = (col << 0x10) >> 0x10;
    DrawVerticalLine__14tScreenMemcardssss
              (this,(short)GRIDMEMCARD_STARTX,
               (short)((((GRIDMEMCARD_STARTY & 0xffffU) - (uint)(ushort)GRIDMEMCARDGOURAUDBIT_Y) -
                       (EXTRAYATTOP & 0xffffU)) * 0x10000 >> 0x10),local_30,
               (h + ((int)(h + ((uint)(col << 0x10) >> 0x1f)) >> 1) * -2) * 0x10000 >> 0x10);
    col = col + 1;
    GRIDMEMCARD_STARTX._0_2_ = (short)GRIDMEMCARD_STARTX + (short)MEMCARD_DELTAX;
  } while (col * 0x10000 >> 0x10 < 4);
  uVar2 = GRIDMEMCARD_STARTY & 0xffff;
  if (EXTRAYATTOP != 0) {
    DrawHorizontalLine__14tScreenMemcardssss
              (this,(short)(((GRIDMEMCARD_STARTX & 0xffffU) - (uint)(ushort)GRIDMEMCARDGOURAUDBIT_X)
                            * 0x10000 >> 0x10),
               (short)((uVar2 - (EXTRAYATTOP & 0xffffU)) * 0x10000 >> 0x10),fadeval,1);
  }
  col = 0;
  do {
    fadeval = local_30;
    h = (col << 0x10) >> 0x10;
    DrawHorizontalLine__14tScreenMemcardssss
              (this,(short)(((GRIDMEMCARD_STARTX & 0xffffU) - (uint)(ushort)GRIDMEMCARDGOURAUDBIT_X)
                            * 0x10000 >> 0x10),(short)uVar2,local_30,
               (h + ((int)(h + ((uint)(col << 0x10) >> 0x1f)) >> 1) * -2) * 0x10000 >> 0x10);
    col = col + 1;
    h = col * 0x10000 >> 0x10;
    uVar2 = uVar2 + (MEMCARD_DELTAY & 0xffffU);
  } while (h < 6);
  DrawHorizontalLine__14tScreenMemcardssss
            (this,(short)(((GRIDMEMCARD_STARTX & 0xffffU) - (uint)(ushort)GRIDMEMCARDGOURAUDBIT_X) *
                          0x10000 >> 0x10),
             (short)((uVar2 + ((kMemCardMessageH & 0xffffU) - (MEMCARD_DELTAY & 0xffffU))) * 0x10000
                    >> 0x10),fadeval,
             (h + ((int)(h + ((uint)(col * 0x10000) >> 0x1f)) >> 1) * -2) * 0x10000 >> 0x10);
  w = (int)local_38;
  h = 0x1e;
  col = 0;
  do {
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended(h,0,0,0,w,0,(tDrawShapeExtended *)0x0);
    y = col + 1;
    h = col + 0x1f;
    col = y;
  } while (y < 0x10);
  if (this->fReadyToGetNewIcons != (void *)0x0) {
    SetEnablings__14tScreenMemcard(this);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawForeground__14tScreenMemcard(struct tScreenMemcard *this /*$a0*/)
 // line 690, offset 0x80047ad8
	/* begin block 1 */
		// Start line: 691
		// Start offset: 0x80047AD8

		/* begin block 1.1 */
			// Start line: 695
			// Start offset: 0x80047B28
			// Variables:
		// 		int k; // $s0
		/* end block 1.1 */
		// End offset: 0x80047B60
		// End Line: 699
	/* end block 1 */
	// End offset: 0x80047B60
	// End Line: 699

	/* begin block 2 */
		// Start line: 1549
	/* end block 2 */
	// End Line: 1550

	/* begin block 3 */
		// Start line: 1553
	/* end block 3 */
	// End Line: 1554

	/* begin block 4 */
		// Start line: 1553
	/* end block 4 */
	// End Line: 1554

void DrawForeground__14tScreenMemcard(tScreenMemcard *this)

{
  short sVar1;
  int index;
  int iVar2;
  
  _sVar1 = (uint)(ushort)(this->tScreen).fScreenFadeVal * 2 + -0x80;
  sVar1 = (short)_sVar1;
  _sVar1 = _sVar1 * 0x10000 >> 0x10;
  if ((_sVar1 < 0x80) && (_sVar1 < 1)) {
    sVar1 = 0;
  }
  else {
    if (0x80 < _sVar1) {
      sVar1 = 0x80;
    }
  }
  index = 0x38;
  _sVar1 = 0;
  do {
    DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
              (index,0,0,0,(int)sVar1,0,(tDrawShapeExtended *)0x0);
    iVar2 = _sVar1 + 1;
    index = _sVar1 + 0x39;
    _sVar1 = iVar2;
  } while (iVar2 < 4);
  return;
}



// decompiled code
// original method signature: 
// struct tScreenMemcard * /*$ra*/ __14tScreenMemcard(struct tScreenMemcard *this /*$s0*/)
 // line 704, offset 0x80047b74
	/* begin block 1 */
		// Start line: 705
		// Start offset: 0x80047B74
	/* end block 1 */
	// End offset: 0x80047B74
	// End Line: 705

	/* begin block 2 */
		// Start line: 1575
	/* end block 2 */
	// End Line: 1576

	/* begin block 3 */
		// Start line: 1581
	/* end block 3 */
	// End Line: 1582

	/* begin block 4 */
		// Start line: 1581
	/* end block 4 */
	// End Line: 1582

tScreenMemcard * __14tScreenMemcard(tScreenMemcard *this)

{
  __7tScreen((tScreen *)this);
  *(undefined4 *)((this->tScreen)._vf + 2) = 0x80012228;
  this->fMemCardMessageTextSys = -1;
  this->theNFS4icon = 1;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseIcons__14tScreenMemcard(struct tScreenMemcard *this /*$s2*/)
 // line 710, offset 0x80047bb8
	/* begin block 1 */
		// Start line: 711
		// Start offset: 0x80047BB8
		// Variables:
	// 		int i; // $s1
	/* end block 1 */
	// End offset: 0x80047C18
	// End Line: 728

	/* begin block 2 */
		// Start line: 1591
	/* end block 2 */
	// End Line: 1592

	/* begin block 3 */
		// Start line: 1595
	/* end block 3 */
	// End Line: 1596

	/* begin block 4 */
		// Start line: 1595
	/* end block 4 */
	// End Line: 1596

void ReleaseIcons__14tScreenMemcard(tScreenMemcard *this)

{
  short id;
  int iVar1;
  tScreenMemcard *ptVar2;
  int iVar3;
  
  iVar3 = 0;
  ptVar2 = this;
  do {
    iVar1 = (int)&(this->tScreen).fPermShapes.fShapes + iVar3;
    *(undefined *)(iVar1 + 0x250) = 0;
    *(undefined *)(iVar1 + 0x25f) = 0;
    *(undefined *)(iVar1 + 0x26e) = 0;
    id = *(short *)&ptVar2->fMemFile[0xe].numblocks;
    if (id != 0) {
      Texture_MenuReleaseClutId__Fs(id);
      *(undefined2 *)&ptVar2->fMemFile[0xe].numblocks = 0;
    }
    iVar3 = iVar3 + 1;
    ptVar2 = (tScreenMemcard *)((int)&(ptVar2->tScreen).fPermShapes.fShapes + 2);
  } while (iVar3 < 0xf);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__14tScreenMemcard(struct tScreenMemcard *this /*$s0*/)
 // line 734, offset 0x80047c30
	/* begin block 1 */
		// Start line: 735
		// Start offset: 0x80047C30

		/* begin block 1.1 */
			// Start line: 807
			// Start offset: 0x80047D50

			/* begin block 1.1.1 */
				// Start line: 807
				// Start offset: 0x80047D50
			/* end block 1.1.1 */
			// End offset: 0x80047D50
			// End Line: 807
		/* end block 1.1 */
		// End offset: 0x80047D50
		// End Line: 807

		/* begin block 1.2 */
			// Start line: 807
			// Start offset: 0x80047D50

			/* begin block 1.2.1 */
				// Start line: 807
				// Start offset: 0x80047D50
			/* end block 1.2.1 */
			// End offset: 0x80047D50
			// End Line: 807
		/* end block 1.2 */
		// End offset: 0x80047D50
		// End Line: 807

		/* begin block 1.3 */
			// Start line: 807
			// Start offset: 0x80047D50

			/* begin block 1.3.1 */
				// Start line: 807
				// Start offset: 0x80047D50
			/* end block 1.3.1 */
			// End offset: 0x80047D50
			// End Line: 807
		/* end block 1.3 */
		// End offset: 0x80047D50
		// End Line: 807

		/* begin block 1.4 */
			// Start line: 807
			// Start offset: 0x80047D50
			// Variables:
		// 		int i; // $a2
		/* end block 1.4 */
		// End offset: 0x80047DA8
		// End Line: 819
	/* end block 1 */
	// End offset: 0x80047DA8
	// End Line: 829

	/* begin block 2 */
		// Start line: 1640
	/* end block 2 */
	// End Line: 1641

	/* begin block 3 */
		// Start line: 1647
	/* end block 3 */
	// End Line: 1648

	/* begin block 4 */
		// Start line: 1647
	/* end block 4 */
	// End Line: 1648

void Initialize__14tScreenMemcard(tScreenMemcard *this)

{
  byte bVar1;
  tFEApplication *ptVar2;
  tGlobalMenuDefs *ptVar3;
  uint uVar4;
  int iVar5;
  _func_21 *p_Var6;
  tScreenMemcard *ptVar7;
  int iVar8;
  _func_21 *p_Var9;
  
  GRIDMEMCARD_STARTX = 0xf6;
  GRIDMEMCARD_STARTY = 0x3c;
  MEMCARD_DELTAX = 0x3b;
  MEMCARD_DELTAY = 0x1b;
  kMemCardMessageH1 = 0xc;
  kMemCardMessageH = 0xc;
  EXTRAYATTOP = 0xc;
  GRIDMEMCARD_WIDTH = 0xb1;
  GRIDMEMCARD_HEIGHT = 0x93;
  GRIDMEMCARDGOURAUDBIT_X = 0xc;
  GRIDMEMCARDGOURAUDBIT_Y = 6;
  MEMCARDICONOFFX = 0xf;
  MEMCARDICONOFFY = 6;
  kMemCardMessage1Y = 0x33;
  kMemCardMessageX = 0x150;
  kMemCardMessage1X = 0x150;
  this->fSomePunkInQAPulledOutTheMemoryCardWhileLoadingIcons = (void *)0x0;
  kMemCardMessageY = 0xc6;
  fMemIcon[0] = (char *)reservememadr(s_records_80012220,(int)&DAT_000021c0,0);
  ptVar2 = FEApp;
  *(undefined4 *)&this->cursorPosition = 0;
  *(undefined2 *)&this->message = 0;
  *(undefined2 *)((int)&this->message + 2) = 0;
  bVar1 = *(byte *)((int)&(ptVar2->helpPopup).numItems + 1);
  p_Var9 = (_func_21 *)0x287;
  *(ushort *)&this->fScreenFadeReadyTick = (ushort)bVar1;
  this->theNFS4icon = (uint)bVar1 * 4 + 1;
  ptVar3 = menuDefs;
  if (*(short *)&this->fScreenFadeReadyTick != 0) {
    p_Var9 = (_func_21 *)0x289;
  }
  iVar8 = 0;
  uVar4 = *(uint *)&(menuDefs->itemControllerSettings).fDiffX;
  p_Var6 = (menuDefs->menuControllerConfig).tMenu.fItemList[5];
  (menuDefs->menuControllerConfig).tMenu.fItemList[6] = p_Var9;
  *(uint *)&(ptVar3->itemControllerSettings).fDiffX = uVar4 | 1;
  (ptVar3->menuControllerConfig).tMenu.fItemList[5] = (_func_21 *)((uint)p_Var6 | 1);
  ptVar7 = this;
  do {
    iVar5 = (int)&(this->tScreen).fPermShapes.fShapes + iVar8;
    *(undefined *)(iVar5 + 0x250) = 0;
    *(undefined *)(iVar5 + 0x25f) = 0;
    *(undefined *)(iVar5 + 0x26e) = 0;
    ptVar7->fMemIconClutId[0xd] = 0x80;
    *(undefined2 *)&ptVar7->fMemFile[0xe].numblocks = 0;
    iVar8 = iVar8 + 1;
    ptVar7 = (tScreenMemcard *)((int)&(ptVar7->tScreen).fPermShapes.fShapes + 2);
  } while (iVar8 < 0xf);
  this->fReadyToGetNewIcons = (void *)0x0;
  *(undefined4 *)&this->player = 0;
  *(undefined4 *)(this->fFadeIcon + 0xd) = 0;
  *(undefined4 *)((this->tScreen)._vf + 6) = 0xffffffff;
  this->checkingstart = 0;
  Initialize__7tScreen((tScreen *)this);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Cleanup__14tScreenMemcard(struct tScreenMemcard *this /*$s0*/)
 // line 833, offset 0x80047dd8
	/* begin block 1 */
		// Start line: 834
		// Start offset: 0x80047DD8

		/* begin block 1.1 */
			// Start line: 834
			// Start offset: 0x80047DD8

			/* begin block 1.1.1 */
				// Start line: 834
				// Start offset: 0x80047DD8
			/* end block 1.1.1 */
			// End offset: 0x80047DD8
			// End Line: 834
		/* end block 1.1 */
		// End offset: 0x80047DD8
		// End Line: 834

		/* begin block 1.2 */
			// Start line: 834
			// Start offset: 0x80047DD8

			/* begin block 1.2.1 */
				// Start line: 834
				// Start offset: 0x80047DD8
			/* end block 1.2.1 */
			// End offset: 0x80047DD8
			// End Line: 834
		/* end block 1.2 */
		// End offset: 0x80047DD8
		// End Line: 834
	/* end block 1 */
	// End offset: 0x80047DD8
	// End Line: 834

	/* begin block 2 */
		// Start line: 1985
	/* end block 2 */
	// End Line: 1986

	/* begin block 3 */
		// Start line: 1990
	/* end block 3 */
	// End Line: 1991

	/* begin block 4 */
		// Start line: 1990
	/* end block 4 */
	// End Line: 1991

void Cleanup__14tScreenMemcard(tScreenMemcard *this)

{
  tGlobalMenuDefs *ptVar1;
  char *pcVar2;
  _func_21 *p_Var3;
  
  ReleaseIcons__14tScreenMemcard(this);
  DeInit_Memcard__Fv();
  pcVar2 = fMemIcon[0];
  ptVar1 = menuDefs;
  p_Var3 = (menuDefs->menuControllerConfig).tMenu.fItemList[5];
  *(uint *)&(menuDefs->itemControllerSettings).fDiffX =
       *(uint *)&(menuDefs->itemControllerSettings).fDiffX & 0xfffffffe;
  (ptVar1->menuControllerConfig).tMenu.fItemList[5] = (_func_21 *)((uint)p_Var3 & 0xfffffffe);
  purgememadr((int)pcVar2);
  Cleanup__7tScreen((tScreen *)this);
  return;
}





