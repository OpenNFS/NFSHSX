#ifndef FETRACKS_H
#define FETRACKS_H

extern void Initialize__13tTrackManager(struct tTrackManager *this); // 0x80021A10

extern void LoadTracks__13tTrackManagerR14tSaveTrackInfo(struct tTrackManager *this, struct tSaveTrackInfo *load); // 0x80021A50

extern void SaveTracks__13tTrackManagerR14tSaveTrackInfo(struct tTrackManager *this, struct tSaveTrackInfo *save); // 0x80021A7C

extern void GetTrack__13tTrackManagersR17tTrackInformation(struct tTrackManager *this, short trackNumber, struct tTrackInformation *trackInfo); // 0x80021AA4

extern void LoadDescription__13tTrackManager(struct tTrackManager *this); // 0x80021B14

extern void ReleaseDescription__13tTrackManager(struct tTrackManager *this); // 0x80021C4C

extern void SetTrackAvailable__13tTrackManagersb(struct tTrackManager *this, short track, unsigned int avail); // 0x80021C8C

extern void SetClassAvailable__13tTrackManager15tTrackClassTypeb(struct tTrackManager *this, enum tTrackClassType trackClass, unsigned int avail); // 0x80021CA0

extern struct tTrackInformation * GetTrackByID__13tTrackManagers(struct tTrackManager *this, short track); // 0x80021D00

extern struct tListIteratorTrack * __18tListIteratorTrackPcT1P13tTrackManager(struct tListIteratorTrack *this, char *valPtr, char *index, struct tTrackManager *trackManager); // 0x80021D54

extern void _._18tListIteratorTrack(struct tListIteratorTrack *this, int __in_chrg); // 0x80021DAC

extern short TextValue__18tListIteratorTrack7tPlayer(struct tListIteratorTrack *this, enum tPlayer atIndex); // 0x80021DD4

extern void Increment__18tListIteratorTrack7tPlayer(struct tListIteratorTrack *this, enum tPlayer atIndex); // 0x80021E14

extern void Decrement__18tListIteratorTrack7tPlayer(struct tListIteratorTrack *this, enum tPlayer atIndex); // 0x80021EC0

extern unsigned int ValidTrack__18tListIteratorTrackc(struct tListIteratorTrack *this, char track); // 0x80021F50

#endif
