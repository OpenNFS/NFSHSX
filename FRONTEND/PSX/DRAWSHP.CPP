#include "THISDUST.H"
#include "DRAWSHP.H"


// decompiled code
// original method signature: 
// void /*$ra*/ DrawShape_SubtractNFS4RectEdges__FR4RECT(struct RECT *rect /*$t1*/)
 // line 51, offset 0x8004be00
	/* begin block 1 */
		// Start line: 52
		// Start offset: 0x8004BE00
		// Variables:
	// 		struct DR_MODE *dr_mode; // $s0
	// 		struct POLY_G4 *prim; // $a0
	// 		short x1; // $a3
	// 		short y1; // $t3
	// 		short x2; // $a2
	// 		short y2; // $t2
	// 		short i; // $t5
	/* end block 1 */
	// End offset: 0x8004BF20
	// End Line: 81

	/* begin block 2 */
		// Start line: 83
	/* end block 2 */
	// End Line: 84

	/* begin block 3 */
		// Start line: 95
	/* end block 3 */
	// End Line: 96

	/* begin block 4 */
		// Start line: 90
	/* end block 4 */
	// End Line: 91

	/* begin block 5 */
		// Start line: 90
	/* end block 5 */
	// End Line: 91

void DrawShape_SubtractNFS4RectEdges__FR4RECT(RECT *rect)

{
  short sVar1;
  uint *puVar2;
  uint *puVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  sVar1 = rect->y;
  sVar4 = sVar1 + 1;
  sVar5 = sVar4 + rect->h;
  iVar8 = (uint)(ushort)rect->x + 2;
  iVar7 = (uint)(ushort)rect->x + ((int)((uint)(ushort)rect->w << 0x10) >> 0x13);
  do {
    puVar3 = DAT_1f800004;
    puVar2 = DAT_1f800000;
    *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
    uVar6 = (uint)DAT_1f800004 & 0xffffff;
    DAT_1f800004 = DAT_1f800004 + 9;
    *puVar2 = *puVar2 & 0xff000000 | uVar6;
    puVar3[1] = 0x808080;
    *(undefined *)((int)puVar3 + 7) = 0x3a;
    *(undefined *)((int)puVar3 + 3) = 8;
    *(short *)((int)puVar3 + 10) = sVar1 + 3;
    iVar9 = iVar9 + 1;
    puVar3[5] = 0x808080;
    puVar3[7] = 0;
    puVar3[3] = 0;
    *(short *)(puVar3 + 2) = (short)iVar8;
    *(short *)(puVar3 + 4) = (short)iVar7;
    *(short *)((int)puVar3 + 0x12) = sVar4;
    *(short *)(puVar3 + 6) = (short)iVar8;
    *(short *)((int)puVar3 + 0x1a) = sVar5 + -3;
    *(short *)(puVar3 + 8) = (short)iVar7;
    *(short *)((int)puVar3 + 0x22) = sVar5 + -1;
    puVar3 = DAT_1f800004;
    puVar2 = DAT_1f800000;
    iVar8 = (uint)(ushort)rect->x + (uint)(ushort)rect->w + -2;
    iVar7 = iVar8 - ((int)((uint)(ushort)rect->w << 0x10) >> 0x13);
  } while (iVar9 * 0x10000 >> 0x10 < 2);
  *DAT_1f800004 = *DAT_1f800004 & 0xff000000 | *DAT_1f800000 & 0xffffff;
  uVar6 = (uint)DAT_1f800004 & 0xffffff;
  DAT_1f800004 = DAT_1f800004 + 3;
  *puVar2 = *puVar2 & 0xff000000 | uVar6;
  uVar6 = GetTPage(2,2,0,0x100);
  SetDrawMode((int)puVar3,0,0,uVar6 & 0xffff,(byte *)0x0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawShape_NFS4RoundRectangle__FiR4RECTs(int textID /*$a0*/, struct RECT *position /*$s1*/, short selected /*$a2*/)
 // line 92, offset 0x8004bfb0
	/* begin block 1 */
		// Start line: 93
		// Start offset: 0x8004BFB0
		// Variables:
	// 		struct tDrawShapeExtended drawFlags; // stack offset -48
	// 		short flags; // $s3
	// 		struct tTexture_ShapeInfo *left; // $s2
	/* end block 1 */
	// End offset: 0x8004C19C
	// End Line: 125

	/* begin block 2 */
		// Start line: 205
	/* end block 2 */
	// End Line: 206

	/* begin block 3 */
		// Start line: 216
	/* end block 3 */
	// End Line: 217

	/* begin block 4 */
		// Start line: 216
	/* end block 4 */
	// End Line: 217

	/* begin block 5 */
		// Start line: 221
	/* end block 5 */
	// End Line: 222

void DrawShape_NFS4RoundRectangle__FiR4RECTs(int textID,RECT *position,short selected)

{
  tTexture_ShapeInfo *ptVar1;
  tDrawShapeExtended tStack48;
  
  ptVar1 = gHelpShapes;
  if (-1 < textID) {
    FETextRender_MenuTextPositionedJustify__Fssss14tMenuTextState13tMenuTextType
              ((short)textID,
               (short)(((uint)(ushort)position->x +
                       ((int)((uint)(ushort)position->w << 0x10) >> 0x11)) * 0x10000 >> 0x10),
               (short)(((uint)(ushort)position->y + 4) * 0x10000 >> 0x10),2,textState_Selected,
               textType_FramedInfo);
  }
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x29,(uint)(selected == 0) | 8,(int)position->x,(int)position->y,0,0,&tStack48);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x29,(uint)(selected == 0) | 0xc,
             ((int)position->x + (int)position->w) - (int)(short)ptVar1[0x24].tpage,(int)position->y
             ,0,0,&tStack48);
  if (selected == 0) {
    PSXDrawTransSquare__Fiiiiis
              (0x841d08,(int)position->x + (int)(short)ptVar1[0x24].tpage,
               (int)position->y + (int)(short)ptVar1[0x24].clut + -1,
               (int)position->w + (int)(short)ptVar1[0x24].tpage * -2 + 1,1,1);
    PSXDrawTransSquare__Fiiiiis
              (0,(int)position->x + (int)(short)ptVar1[0x24].tpage,(int)position->y,
               (int)position->w + (int)(short)ptVar1[0x24].tpage * -2 + 1,
               (int)(short)ptVar1[0x24].clut + -1,1);
    FeDraw_SetABRMode__Fi(0);
  }
  else {
    PSXDrawSquare__Fiiiii
              (0x841d08,(int)position->x + (int)(short)ptVar1[0x24].tpage,
               (int)position->y + (int)(short)ptVar1[0x24].clut + -1,
               (int)position->w + (int)(short)ptVar1[0x24].tpage * -2 + 1,1);
    PSXDrawSquare__Fiiiii
              (0,(int)position->x + (int)(short)ptVar1[0x24].tpage,(int)position->y,
               (int)position->w + (int)(short)ptVar1[0x24].tpage * -2 + 1,
               (int)(short)ptVar1[0x24].clut + -1);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawShape_NFS4Rectangle__FR4RECT(struct RECT *position /*$s0*/)
 // line 129, offset 0x8004c1bc
	/* begin block 1 */
		// Start line: 130
		// Start offset: 0x8004C1BC
		// Variables:
	// 		struct tTexture_ShapeInfo *topleft; // $s5
	// 		struct tTexture_ShapeInfo *topright; // $s3
	// 		struct tTexture_ShapeInfo *bottomleft; // $s4
	// 		struct tTexture_ShapeInfo *bottomright; // $s2
	// 		struct tDrawShapeExtended drawFlags; // stack offset -56
	/* end block 1 */
	// End offset: 0x8004C1BC
	// End Line: 130

	/* begin block 2 */
		// Start line: 292
	/* end block 2 */
	// End Line: 293

	/* begin block 3 */
		// Start line: 297
	/* end block 3 */
	// End Line: 298

	/* begin block 4 */
		// Start line: 297
	/* end block 4 */
	// End Line: 298

void DrawShape_NFS4Rectangle__FR4RECT(RECT *position)

{
  tTexture_ShapeInfo *ptVar1;
  tDrawShapeExtended tStack56;
  
  ptVar1 = gHelpShapes;
  tStack56.tint[1] = &DAT_00150800;
  tStack56.tint[3] = &DAT_004a1900;
  tStack56.tint[0] = &DAT_007b2908;
  tStack56.tint[2] = &DAT_00291000;
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x2a,9,(int)position->x,(int)position->y,0,0,&tStack56);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x2b,9,((int)position->x + (int)position->w) - (int)ptVar1[0x26].centerx,
             (int)position->y,0,0,&tStack56);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x2c,9,(int)position->x,
             ((int)position->y + (int)position->h) - (int)ptVar1[0x27].height,0,0,&tStack56);
  DrawShapeExtended__FiiiiiiP18tDrawShapeExtended
            (0x2d,9,((int)position->x + (int)position->w) - (int)*(short *)&ptVar1[0x28].next,
             ((int)position->y + (int)position->h) - (int)*(short *)((int)&ptVar1[0x28].next + 2),0,
             0,&tStack56);
  PSXDrawTransSquare__Fiiiiis
            ((int)tStack56.tint[1],(int)position->x + (int)ptVar1[0x25].shapex,(int)position->y,
             ((int)position->w - (int)ptVar1[0x25].shapex) - (int)ptVar1[0x26].centerx,1,1);
  PSXDrawTransSquare__Fiiiiis
            ((int)tStack56.tint[0],(int)position->x + (int)ptVar1[0x27].width,
             (int)position->y + (int)position->h + -1,
             ((int)position->w - (int)ptVar1[0x27].width) - (int)*(short *)&ptVar1[0x28].next,1,1);
  PSXDrawTransGouraudSquare__Fiiiiiiiii
            ((int)position->x,(int)position->y + (int)ptVar1[0x25].shapey,2,
             ((int)position->h - (int)ptVar1[0x25].shapey) - (int)ptVar1[0x27].height,1,
             (int)tStack56.tint[2],(int)tStack56.tint[2],(int)tStack56.tint[3],(int)tStack56.tint[3]
            );
  PSXDrawTransGouraudSquare__Fiiiiiiiii
            ((int)position->x + (int)position->w + -2,(int)position->y + (int)ptVar1[0x26].centery,2
             ,((int)position->h - (int)ptVar1[0x26].centery) -
              (int)*(short *)((int)&ptVar1[0x28].next + 2),1,(int)tStack56.tint[2],
             (int)tStack56.tint[2],(int)tStack56.tint[3],(int)tStack56.tint[3]);
  PSXDrawTransSquare__Fiiiiis
            (0,(int)position->x + 2,(int)position->y + (int)ptVar1[0x25].shapey,
             (int)ptVar1[0x25].shapex + -2,
             ((int)position->h - (int)ptVar1[0x25].shapey) - (int)ptVar1[0x27].height,1);
  PSXDrawTransSquare__Fiiiiis
            (0,(int)position->x + (int)position->w + -2,(int)position->y + (int)ptVar1[0x26].centery
             ,2 - (int)ptVar1[0x26].centerx,
             ((int)position->h - (int)ptVar1[0x26].centery) -
             (int)*(short *)((int)&ptVar1[0x28].next + 2),1);
  PSXDrawTransSquare__Fiiiiis
            (0,(int)position->x + (int)ptVar1[0x25].shapex,(int)position->y + 1,
             ((int)position->w - (int)ptVar1[0x25].shapex) - (int)ptVar1[0x26].centerx,
             (int)position->h + -2,1);
  FeDraw_SetABRMode__Fi(0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ DrawShape_NFS4TransRectangle__FR4RECTs(struct RECT *r /*$s0*/, short opacity /*$a1*/)
 // line 170, offset 0x8004c4dc
	/* begin block 1 */
		// Start line: 171
		// Start offset: 0x8004C4DC
	/* end block 1 */
	// End offset: 0x8004C4DC
	// End Line: 171

	/* begin block 2 */
		// Start line: 421
	/* end block 2 */
	// End Line: 422

	/* begin block 3 */
		// Start line: 425
	/* end block 3 */
	// End Line: 426

	/* begin block 4 */
		// Start line: 425
	/* end block 4 */
	// End Line: 426

void DrawShape_NFS4TransRectangle__FR4RECTs(RECT *r,short opacity)

{
  int opacity_00;
  
  opacity_00 = (int)((uint)(ushort)opacity << 0x11) >> 0x10;
  PSXDrawTransSquare__Fiiiiis(0,(int)r->x,(int)r->y,4,(int)r->h,opacity_00);
  PSXDrawTransSquare__Fiiiiis(0,(int)r->x + (int)r->w + -4,(int)r->y,4,(int)r->h,opacity_00);
  PSXDrawTransSquare__Fiiiiis(0,(int)r->x + 4,(int)r->y,(int)r->w + -8,2,opacity_00);
  PSXDrawTransSquare__Fiiiiis
            (0,(int)r->x + 4,(int)r->y + (int)r->h + -2,(int)r->w + -8,2,opacity_00);
  PSXDrawTransSquare__Fiiiiis
            (0,(int)r->x + 4,(int)r->y + 2,(int)r->w + -8,(int)r->h + -4,(int)opacity);
  FeDraw_SetABRMode__Fi(0);
  return;
}





