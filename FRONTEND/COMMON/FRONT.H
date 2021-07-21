#ifndef FRONT_H
#define FRONT_H


extern struct tAllScreens * __11tAllScreens(struct tAllScreens *this); // 0x8002BAF4

extern void _._11tAllScreens(struct tAllScreens *this, int __in_chrg); // 0x8002BF0C

extern void Front_ConstructAll__Fv(); // 0x80026E58

extern void Front_DeleteAll__Fv(); // 0x80026FE8

extern void Front_ResetSettingsForCar__Fii(int player, int car); // 0x8002704C

extern void Front_ResetSettingsMenu__Fi(int player); // 0x8002709C

extern void Front_ResetPSXController__Fii(int player, int config); // 0x800270E4

extern void Front_ResetPSXAnalogs__Fi(int player); // 0x80027150

extern int GetPSXPadValue__Fii(int value, int player); // 0x80027194

extern void SetPads__Fv(); // 0x8002750C

extern void InitFrontEndStructure__Fv(); // 0x80027648

extern int LoadConfig__Fv(); // 0x80027940

extern void Front_InitialMemCardCheck__Fv(); // 0x80027948

extern void Front_SecondaryMemCardCheck__Fv(); // 0x80027994

extern void Front_InitGraphics__Fv(); // 0x80027A5C

extern void Front_InitGraphicsAndDisplayLoading__Fv(); // 0x80027AD4

extern int Front_Menu__F21tFront_ProcessingType(enum tFront_ProcessingType role); // 0x80027AF4

extern int * OutputDisplaySettings__FPiiiR17tTrackInformation(int *d, int c, int player, struct tTrackInformation *trackInfo); // 0x80027DA8

extern int Front_GetLapsForType__Fv(); // 0x80027FC0

extern void Front_InitStream__FR9tFEStream(struct tFEStream *streamData); // 0x80028068

extern void Front_InitPlayerCars__FR9tFEStream(struct tFEStream *streamData); // 0x80028098

extern void Front_InitTourneyTraffic__FR9tFEStream(struct tFEStream *streamData); // 0x8002845C

extern void Front_InitOpponentCars__FR9tFEStream(struct tFEStream *streamData); // 0x800285D0

extern void Front_InitMissions__FR9tFEStream(struct tFEStream *streamData); // 0x80028B64

extern void Front_InitCopCars__FR9tFEStream(struct tFEStream *streamData); // 0x80028C94

extern void Front_InitPerps__FR9tFEStream(struct tFEStream *streamData); // 0x80029054

extern void Front_InitTrack__FR9tFEStream(struct tFEStream *streamData); // 0x8002921C

extern void Front_InitTraffic__FR9tFEStream(struct tFEStream *streamData); // 0x800293E0

extern int * Front_AppendPlayerCarData__FPiR9tFEStream(int *stream, struct tFEStream *streamData); // 0x80029618

extern int * Front_AppendOpponentData__FPiR9tFEStream(int *stream, struct tFEStream *streamData); // 0x80029AFC

extern int * Front_AppendCopData__FPiR9tFEStream(int *stream, struct tFEStream *streamData); // 0x80029E30

extern int * Front_AppendPerpData__FPiR9tFEStream(int *stream, struct tFEStream *streamData); // 0x8002A084

extern int * Front_AppendTrafficData__FPiR9tFEStream(int *stream, struct tFEStream *streamData); // 0x8002A31C

extern int * Front_AppendTrackData__FPiR9tFEStream(int *stream, struct tFEStream *streamData); // 0x8002A56C

extern void * Front_EnableLocalSpeech__Fv(); // 0x8002A6AC

extern int * Front_BuildStream__FPi(int *stream); // 0x8002A738

extern void Front_GetInGameVars__Fv(); // 0x8002B6D8

extern void SetLicensePlate__Fv(); // 0x8002B7CC

extern void SetPlayList__Fi(int ivealreadygotone); // 0x8002B874

extern short Front_GetTrackRaced__Fv(); // 0x8002B960

extern void * PlayerNameExist__Fi(int player); // 0x8002B9D0

extern char * PlayerName__Fi(int player); // 0x8002B9FC

extern char * PlayerNameMixedCase__Fi(int player); // 0x8002BA88


#endif
