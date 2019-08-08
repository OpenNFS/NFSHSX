#ifndef SKIDMARK_H
#define SKIDMARK_H

extern void CalcStartSegment__FP16Skidmark_SegmentT0P8coorddefN22i(struct Skidmark_Segment *r1, struct Skidmark_Segment *r2, struct coorddef *cp, struct coorddef *pt1, struct coorddef *pt2, int tireWidth); // 0x800DE6F4

extern void CalcOneSegment__FP16Skidmark_SegmentP8coorddefN21i(struct Skidmark_Segment *r1, struct coorddef *cp, struct coorddef *pt1, struct coorddef *pt2, int tireWidth); // 0x800DE8C4

extern struct Skidmark_Chunk * Skidmark_CheckChunk__FP8coorddefii(struct coorddef *skidpt, int newsegs, int slice); // 0x800DE9EC

extern void Skidmark_Add__FP5tSkidP8coorddefP7CVECTORiii(struct tSkid *prevskid, struct coorddef *skidpt, struct CVECTOR *color, int tireWidth, int type, int slice); // 0x800DEB98

extern void Skidmark_AddStretch__FPP16Skidmark_SegmentPiP5tSkidP8coorddefP7CVECTORiii(struct Skidmark_Segment **save, int *savechunk, struct tSkid *prevskid, struct coorddef *skidpt, struct CVECTOR *color, int tireWidth, int type, int slice); // 0x800DEF6C

extern void Skidmark_Stretch__FP16Skidmark_SegmentiP5tSkidP8coorddefP7CVECTORii(struct Skidmark_Segment *save, int savechunk, struct tSkid *prevskid, struct coorddef *skidpt, struct CVECTOR *color, int tireWidth, int type); // 0x800DF308

extern void Skidmark_EndStretch__FP16Skidmark_SegmentiP5tSkidP8coorddefP7CVECTORii(struct Skidmark_Segment *save, int savechunk, struct tSkid *prevskid, struct coorddef *skidpt, struct CVECTOR *color, int tireWidth, int type); // 0x800DF388

extern void Skidmark_OnyxBuildFacets__FP13DRender_tView(struct DRender_tView *Vi); // 0x800DF464

extern void Skidmark_InitSkidmark__Fv(); // 0x800DF504

extern void Skidmark_RestartSkidmark__Fv(); // 0x800DF578

extern void Skidmark_KillSkidmark__Fv(); // 0x800DF58C

#endif
