#ifndef SCREENTRACKS_H
#define SCREENTRACKS_H


extern void DrawBackground__18tScreenTrackSelect(struct tScreenTrackSelect *this); // 0x80041600

extern void GetShapeInfo__18tScreenTrackSelectRsT1PPcT3(struct tScreenTrackSelect *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x80041AAC

extern void Initialize__18tScreenTrackSelect(struct tScreenTrackSelect *this); // 0x80041B6C

extern void Cleanup__18tScreenTrackSelect(struct tScreenTrackSelect *this); // 0x80041D28

extern void SetBrightness__18tScreenTrackSelects(struct tScreenTrackSelect *this, short bright); // 0x80041D68

extern void UpdateBrightness__18tScreenTrackSelectR17tTrackInformation(struct tScreenTrackSelect *this, struct tTrackInformation *trackInfo); // 0x80041D98

extern void UpdateVideoWall__18tScreenTrackSelectR17tTrackInformation(struct tScreenTrackSelect *this, struct tTrackInformation *trackInfo); // 0x80041E88

extern void DrawVideoWall__18tScreenTrackSelect(struct tScreenTrackSelect *this); // 0x80041EFC

extern void ProcessInput__18tScreenTrackSelect7tPlayerR13tInputKeyTypeR12tMenuCommand(struct tScreenTrackSelect *this, enum tInputKeyType *keyval); // 0x8004200C


extern void _._18tScreenTrackSelect(struct tScreenTrackSelect *this, int __in_chrg); // 0x800421D4


// decompiled code
// original method signature: 
// void /*$ra*/ _._18tScreenTrackSelect(struct tScreenTrackSelect *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 89, offset 0x800421d4
	/* begin block 1 */
		// Start line: 178
	/* end block 1 */
	// End Line: 179

void ___18tScreenTrackSelect(tScreenTrackSelect *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
