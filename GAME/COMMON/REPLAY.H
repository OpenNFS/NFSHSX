#ifndef REPLAY_H
#define REPLAY_H


extern char * Replay_Compress__FPc(char *uncompressed_data); // 0x800B3C4C

extern char * Replay_Decompress__FPc(char *compressed_data); // 0x800B3D10

extern void Replay_InitReplay__Fv(); // 0x800B3DA0

extern void Replay_ResetReplay__Fv(); // 0x800B3F44

extern void Replay_StoringReplay__Fv(); // 0x800B409C

extern void Replay_StoringControllerData__FG15tControllerData(struct tControllerData controllerdata); // 0x800B40BC

extern struct tControllerData Replay_RetreivingControllerData__Fv(); // 0x800B4488

extern void Replay_SaveInput__Fi(int car); // 0x800B4824

extern void Replay_GetInput__Fi(int car); // 0x800B4B38

extern void Replay_SaveReplay__Fv(); // 0x800B4F98

extern void Replay_LoadReplay__Fv(); // 0x800B5024

extern void Replay_DoReplay__FP8Car_tObj(struct Car_tObj *carObj); // 0x800B502C

extern void Replay_GetInterfaceKey__Fv(); // 0x800B5070

extern void Replay_LoadCameraFile__Fv(); // 0x800B5500

extern void Replay_ReplayChooseCamera__Fii(int player, int slice); // 0x800B586C

extern void Replay_ReplayFindClosestCamera__Fii(int player, int slice); // 0x800B5B14


#endif
