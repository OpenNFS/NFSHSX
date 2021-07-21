#include "THISDUST.H"
#include "FELINES.H"


// decompiled code
// original method signature: 
// void /*$ra*/ PSXDrawBrightEndLine__Fiiiiiiii(int col /*$a0*/, int x /*$a1*/, int y /*$a2*/, int w /*$a3*/, int h /*stack 16*/, int side /*stack 20*/, int fade /*stack 24*/, int darksides /*stack 28*/)
 // line 24, offset 0x8004bb38
	/* begin block 1 */
		// Start line: 25
		// Start offset: 0x8004BB38
	/* end block 1 */
	// End offset: 0x8004BB38
	// End Line: 25

	/* begin block 2 */
		// Start line: 48
	/* end block 2 */
	// End Line: 49

	/* begin block 3 */
		// Start line: 48
	/* end block 3 */
	// End Line: 49

void PSXDrawBrightEndLine__Fiiiiiiii
               (int col,int x,int y,int w,int h,int side,int fade,int darksides)

{
  PSXTransDrawBrightEndLine__Fiiiiiiiii(col,x,y,w,h,side,fade,darksides,0);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PSXTransDrawBrightEndLine__Fiiiiiiiii(int col /*$s3*/, int x /*$s2*/, int y /*$s4*/, int w /*$s5*/, int h /*stack 16*/, int side /*stack 20*/, int fade /*stack 24*/, int darksides /*stack 28*/, int opacity /*stack 32*/)
 // line 30, offset 0x8004bb78
	/* begin block 1 */
		// Start line: 31
		// Start offset: 0x8004BB78
		// Variables:
	// 		int ww; // $s1
	// 		int hh; // $s0
	// 		int BrightCol; // $v1
	// 		int endbit; // $a3
	/* end block 1 */
	// End offset: 0x8004BDCC
	// End Line: 115

	/* begin block 2 */
		// Start line: 55
	/* end block 2 */
	// End Line: 56

	/* begin block 3 */
		// Start line: 60
	/* end block 3 */
	// End Line: 61

	/* begin block 4 */
		// Start line: 60
	/* end block 4 */
	// End Line: 61

void PSXTransDrawBrightEndLine__Fiiiiiiiii
               (int col,int x,int y,int w,int h,int side,int fade,int darksides,int opacity)

{
  int c1;
  int local_34;
  int local_30;
  int iVar1;
  int iVar2;
  int w_00;
  int c2;
  int c3;
  
  if (fade == 0x80) {
    return;
  }
  c1 = CalcFadeVal__Fiii(col,0xffffff,0x40);
  if (fade == 0) goto LAB_8004bd04;
  if ((uint)side < 2) {
    iVar2 = h * (0x80 - fade);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    iVar1 = iVar2 >> 7;
    iVar2 = iVar2 >> 10;
    if (8 < iVar2) {
      iVar2 = 8;
    }
    if (side != 1) {
      y = (y + h) - iVar1;
      w_00 = w;
      h = iVar2;
      iVar2 = w;
      local_34 = c1;
      local_30 = col;
LAB_8004bcc0:
      PSXDrawGouraudSquare__Fiiiiiiii(x,y,w_00,h,c1,local_34,local_30,col);
      h = iVar1;
      w = iVar2;
      goto LAB_8004bd04;
    }
    local_34 = x;
    local_30 = (y + iVar1) - iVar2;
    w_00 = w;
    h = iVar2;
    iVar2 = w;
    c2 = col;
    c3 = c1;
  }
  else {
    w_00 = w * (0x80 - fade);
    if (w_00 < 0) {
      w_00 = w_00 + 0x7f;
    }
    iVar2 = w_00 >> 7;
    w_00 = w_00 >> 10;
    if (8 < w_00) {
      w_00 = 8;
    }
    if (side == 2) {
      x = (x + w) - iVar2;
      iVar1 = h;
      local_34 = col;
      local_30 = c1;
      goto LAB_8004bcc0;
    }
    local_34 = (x + iVar2) - w_00;
    local_30 = y;
    iVar1 = h;
    c2 = c1;
    c3 = col;
  }
  PSXDrawGouraudSquare__Fiiiiiiii(local_34,local_30,w_00,h,col,c2,c3,c1);
  h = iVar1;
  w = iVar2;
LAB_8004bd04:
  if (darksides != 0) {
    if ((side == 2) || (fade == 0)) {
      PSXDrawGouraudSquare__Fiiiiiiii((x + w) - darksides,y,darksides,h,col,0,col,0);
    }
    if ((side == 3) || (fade == 0)) {
      PSXDrawGouraudSquare__Fiiiiiiii(x,y,darksides,h,0,col,0,col);
    }
  }
  if (opacity == 0) {
    PSXDrawSquare__Fiiiii(col,x,y,w,h);
  }
  else {
    PSXDrawTransSquare__Fiiiiis(col,x,y,w,h,1);
  }
  return;
}





