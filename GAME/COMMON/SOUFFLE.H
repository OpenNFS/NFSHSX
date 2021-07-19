#ifndef SOUFFLE_H
#define SOUFFLE_H


extern void GetGustWind__FP17Souffle_tISouffle(struct Souffle_tISouffle *is); // 0x800B764C

extern void GetAngleWind__FP17Souffle_tISouffle(struct Souffle_tISouffle *is); // 0x800B7694

extern void MoveAngleWind__FP17Souffle_tISouffle(struct Souffle_tISouffle *is); // 0x800B76CC

extern struct Souffle_tISouffle * Souffle_Add__FP8coorddefiT0iii(struct coorddef *soufflept, int type, struct coorddef *vec, int velVX, int ground, int colour); // 0x800B770C

extern void Souffle_DoSouffle__Fv(); // 0x800B78EC

extern int Souffle_CircleClip__FP8coorddefT0i(struct coorddef *pt1, struct coorddef *pt2, int r); // 0x800B7D88

extern void Souffle_InsertFacet__FP13DRender_tView(struct DRender_tView *Vi); // 0x800B7DE8

extern void Souffle_InitTrackSouffle__Fv(); // 0x800B7ED4

extern void Souffle_RestartTrackSouffle__Fv(); // 0x800B7F14

extern void Souffle_KillTrackSouffle__Fv(); // 0x800B7F30


#endif
