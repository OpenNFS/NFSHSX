#ifndef SCREENMEMCARD_H
#define SCREENMEMCARD_H


extern void GetShapeInfo__14tScreenMemcardRsT1PPcT3(struct tScreenMemcard *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x80046320

extern void DrawIcon__14tScreenMemcardP8shapetbliiiis(struct tScreenMemcard *this, struct shapetbl *icon, int x, int y, int destwidth, int destheight, int fFade); // 0x80046344

extern void LoadIcon__14tScreenMemcardi(struct tScreenMemcard *this, int filenum); // 0x8004653C

extern void DrawVerticalLine__14tScreenMemcardssss(struct tScreenMemcard *this, short x, short y, short gridpos, int dir); // 0x80046898

extern void DrawHorizontalLine__14tScreenMemcardssss(struct tScreenMemcard *this, short x, short y, short gridpos, int dir); // 0x8004694C

extern void PlaceIcons__14tScreenMemcardii(struct tScreenMemcard *this, int i, int fadeval); // 0x80046A0C

extern void DrawMemCardStuff__14tScreenMemcards(struct tScreenMemcard *this, short fadeval); // 0x80046D60

extern void SetEnablings__14tScreenMemcard(struct tScreenMemcard *this); // 0x800472BC

extern void DrawBackground__14tScreenMemcard(struct tScreenMemcard *this); // 0x80047470

extern void DrawForeground__14tScreenMemcard(struct tScreenMemcard *this); // 0x80047AD8

extern struct tScreenMemcard * __14tScreenMemcard(struct tScreenMemcard *this); // 0x80047B74

extern void ReleaseIcons__14tScreenMemcard(struct tScreenMemcard *this); // 0x80047BB8

extern void Initialize__14tScreenMemcard(struct tScreenMemcard *this); // 0x80047C30

extern void Cleanup__14tScreenMemcard(struct tScreenMemcard *this); // 0x80047DD8


extern void _._14tScreenMemcard(struct tScreenMemcard *this, int __in_chrg); // 0x80047E3C


// decompiled code
// original method signature: 
// void /*$ra*/ _._14tScreenMemcard(struct tScreenMemcard *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 99, offset 0x80047e3c
	/* begin block 1 */
		// Start line: 191
	/* end block 1 */
	// End Line: 192

	/* begin block 2 */
		// Start line: 190
	/* end block 2 */
	// End Line: 191

	/* begin block 3 */
		// Start line: 951
	/* end block 3 */
	// End Line: 952

	/* begin block 4 */
		// Start line: 198
	/* end block 4 */
	// End Line: 199

void ___14tScreenMemcard(tScreenMemcard *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
