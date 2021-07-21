#ifndef NEW_H
#define NEW_H


extern void * __builtin_new(unsigned int size); // 0x800A3D5C

extern void * __builtin_vec_new(unsigned int size); // 0x800A3D84

extern void __builtin_delete(void *deleteMe); // 0x800A3DAC

extern void __builtin_vec_delete(void *deleteMe); // 0x800A3DCC


#endif
