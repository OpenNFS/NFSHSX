#ifndef SCREENTRACKRECORDS_H
#define SCREENTRACKRECORDS_H


extern void GetShapeInfo__19tScreenTrackRecordsRsT1PPcT3(struct tScreenTrackRecords *this, short *numPermShapes, short *numSwapShapes, char **permFileName, char **swapFileName); // 0x80042648

extern void Initialize__19tScreenTrackRecords(struct tScreenTrackRecords *this); // 0x8004266C

extern void Cleanup__19tScreenTrackRecords(struct tScreenTrackRecords *this); // 0x800426C4

extern void DrawOneRecord__19tScreenTrackRecordsibi(struct tScreenTrackRecords *this, int index, void * newrecord, int y); // 0x80042700

extern void DrawRecords__19tScreenTrackRecordss(struct tScreenTrackRecords *this, short maxitem); // 0x80042968

extern void DrawBackground__19tScreenTrackRecords(struct tScreenTrackRecords *this); // 0x80042B48


extern void _._19tScreenTrackRecords(struct tScreenTrackRecords *this, int __in_chrg); // 0x800430F8


// decompiled code
// original method signature: 
// void /*$ra*/ _._19tScreenTrackRecords(struct tScreenTrackRecords *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 55, offset 0x800430f8
	/* begin block 1 */
		// Start line: 110
	/* end block 1 */
	// End Line: 111

void ___19tScreenTrackRecords(tScreenTrackRecords *this,int __in_chrg)

{
  ___7tScreen((tScreen *)this,__in_chrg);
  return;
}





#endif
