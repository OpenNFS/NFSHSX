#ifndef PAD_H
#define PAD_H


extern void padinit(); // 0x800E40E8

extern void PAD_restore(); // 0x800E4158

extern unsigned short PAD_state(int padID); // 0x800E41AC

extern unsigned short PAD_convert(struct PAD_COMMON *pad); // 0x800E41FC

extern void PAD_update(); // 0x800E4210


#endif
