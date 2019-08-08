#ifndef TRACKSPEC_H
#define TRACKSPEC_H

extern void TrackSpec_SetDefault__FP10CTrackSpec(struct CTrackSpec *spec); // 0x800E1544

extern void TrackSpec_SetUp__Fv(); // 0x800E177C

extern void read__FPPcPvi(char **handle, void *buf, int bytes); // 0x800E17A0

extern void TrackSpec_Read__Fi(int spec_num); // 0x800E17D0

extern void TrackSpec_Load__Fii(int weather, int night); // 0x800E18CC

#endif
