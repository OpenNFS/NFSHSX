#ifndef QUATERN_H
#define QUATERN_H

extern void Quatern_VecInterpolate__FP8coorddefT0iT0(struct coorddef *cp0, struct coorddef *cp1, int weight, struct coorddef *cp); // 0x800AD5C8

extern void Quatern_Interpolate__FP5tQuatT0P8coorddefT2iT0T2(struct tQuat *q0, struct tQuat *q1, struct coorddef *cp0, struct coorddef *cp1, int weight, struct tQuat *q, struct coorddef *cp); // 0x800AD678

extern void Quatern_QuatToMat__FP5tQuatP10matrixtdef(struct tQuat *q, struct matrixtdef *matrix); // 0x800AD780

extern void Quatern_MatToQuat__FP10matrixtdefP5tQuat(struct matrixtdef *matrix, struct tQuat *q); // 0x800AD890

#endif
