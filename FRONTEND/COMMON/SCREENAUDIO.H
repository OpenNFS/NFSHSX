#ifndef SCREENAUDIO_H
#define SCREENAUDIO_H


extern void PlaySound__12tScreenAudio(struct tScreenAudio *this); // 0x80045A28

extern void DrawForeground__12tScreenAudio(struct tScreenAudio *this); // 0x80045DC8

extern void DrawBackground__12tScreenAudio(struct tScreenAudio *this); // 0x80045ED8

extern void GetShapeInfo__12tScreenAudioRsT1PPcT3(struct tScreenAudio *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x80046140

extern struct tScreenAudio * __12tScreenAudio(struct tScreenAudio *this); // 0x80046164

extern void Initialize__12tScreenAudio(struct tScreenAudio *this); // 0x800461A4

extern void Cleanup__12tScreenAudio(struct tScreenAudio *this); // 0x80046204


extern void _._12tScreenAudio(struct tScreenAudio *this, int __in_chrg); // 0x800462FC


// decompiled code
// original method signature: 
// void /*$ra*/ _._12tScreenAudio(struct tScreenAudio *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 74, offset 0x800462fc
	/* begin block 1 */
		// Start line: 148
	/* end block 1 */
	// End Line: 149

void ___12tScreenAudio(tScreenAudio *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
