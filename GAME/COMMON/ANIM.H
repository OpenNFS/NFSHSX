#ifndef ANIM_H
#define ANIM_H

extern void Anim_Restart__Fv(); // 0x80073A94

extern int Anim_InitSystem__FPc(char *trackName); // 0x80073B1C

extern void Anim_DeInitSystem__Fv(); // 0x80073CB0

extern int Anim_Handle__Fi(int num); // 0x80073CE8

extern int Anim_FreeHandle__Fi(int handle); // 0x80073D6C

extern struct AnimScript * Anim_GetAnim__Fi(int handle); // 0x80073DEC

extern void Anim_GetLastRotPos__FP15Trk_AnimateInstP8coorddefP10matrixtdef(struct Trk_AnimateInst *animInst, struct coorddef *pt, struct matrixtdef *mat); // 0x80073E08

extern int Anim_GetLastAnimPosRot__FiiP8coorddefP10matrixtdef(int animNum, int flags, struct coorddef *pt, struct matrixtdef *mat); // 0x80073E80

extern int Anim_GetRotPos__FP15Trk_AnimateInstiiP8coorddefP10matrixtdef(struct Trk_AnimateInst *animInst, int flags, int ticks, struct coorddef *pt, struct matrixtdef *mat); // 0x80073F18

extern int Anim_GetPos__FP15Trk_AnimateInstiiP8coorddefPiT4(struct Trk_AnimateInst *animInst, int flags, int ticks, struct coorddef *pt, int *animTicks, int *animLength); // 0x8007412C

extern struct AnimScript * __10AnimScripti(struct AnimScript *this, int num); // 0x80074360

extern struct AnimScript * __10AnimScriptii(struct AnimScript *this, int num, int numParts); // 0x800743CC

extern struct AnimScript * __10AnimScriptP5Groupiii(struct AnimScript *this, struct Group *instanceGroup, int type, int boomIndex, int numParts); // 0x80074468

extern void SetAnimAttrib__10AnimScripti(struct AnimScript *this, int flags); // 0x80074534

extern void GetAnimFrameInfo__10AnimScriptPiT1(struct AnimScript *this, int *frame, int *numFrames); // 0x8007453C

extern int GetTimedAnimPosRot__10AnimScriptP8coorddefP10matrixtdef(struct AnimScript *this, struct coorddef *pt, struct matrixtdef *mat); // 0x800745F8

extern int GetTimedAnimPosRot__10AnimScriptiP8coorddefP10matrixtdef(struct AnimScript *this, int index, struct coorddef *pt, struct matrixtdef *mat); // 0x80074624

extern int GetStatus__10AnimScript(struct AnimScript *this); // 0x8007471C

#endif
