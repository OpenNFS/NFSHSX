#ifndef COLLIDE_H
#define COLLIDE_H

extern int CHECK_CENTER_VERTEX_WITH_DIRS__Fiii(int X_DIR, int Y_DIR, int Z_DIR); // 0x8008BA70

extern int CHECK_CENTER_VERTEX_WITH_DIRS_OTHER__Fiii(int X_DIR, int Y_DIR, int Z_DIR); // 0x8008BEF0

extern int CHECK_VERTEX_WITH_DIRS__Fiii(int X_DIR, int Y_DIR, int Z_DIR); // 0x8008C37C

extern int CHECK_VERTEX_WITH_DIRS_OTHER__Fiii(int X_DIR, int Y_DIR, int Z_DIR); // 0x8008C744

extern void Collide_DoObjectFixedObjectCollision__FP13BO_tNewtonObjP8coorddefN21(struct BO_tNewtonObj *o, struct coorddef *p, struct coorddef *v, struct coorddef *n); // 0x8008CB0C

extern void Collide_LimitAngularVel__FP13BO_tNewtonObj(struct BO_tNewtonObj *o); // 0x8008D8B4

extern void Collide_TestWithPlane__FP13BO_tNewtonObjP8coorddefT1(struct BO_tNewtonObj *o, struct coorddef *normal, struct coorddef *samplePoint); // 0x8008D9A8

extern int Collide_DoObjectObjectCollision__FP13BO_tNewtonObjT0P8coorddefT2(struct BO_tNewtonObj *o0, struct BO_tNewtonObj *o1, struct coorddef *p, struct coorddef *normal); // 0x8008E5D4

extern int Collide_DoActualObjectCollisionCheck__FP13BO_tNewtonObjT0P8coorddefT2(struct BO_tNewtonObj *o0, struct BO_tNewtonObj *o1, struct coorddef *p, struct coorddef *normal); // 0x8008F550

extern int Collide_TestObjectVertices__FP13BO_tNewtonObjT0P8coorddefT2(struct BO_tNewtonObj *o0, struct BO_tNewtonObj *o1, struct coorddef *p, struct coorddef *normal); // 0x80090144

extern int Collide_CheckForCollisionBetween__FP13BO_tNewtonObjT0(struct BO_tNewtonObj *o0, struct BO_tNewtonObj *o1); // 0x80091374

extern void Collide_ClearCollisionRegistry__Fv(); // 0x800914D4

extern int Collide_CheckAccuratePointRadiusCollision__FP13BO_tNewtonObjP8coorddefi(struct BO_tNewtonObj *newObj, struct coorddef *point, int radius); // 0x800916D4

extern void Collide_CheckMeForCollisions__FP13BO_tNewtonObj(struct BO_tNewtonObj *newObj); // 0x800918CC

#endif
