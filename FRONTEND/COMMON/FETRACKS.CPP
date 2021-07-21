#include "THISDUST.H"
#include "FETRACKS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__13tTrackManager(struct tTrackManager *this /*$a0*/)
 // line 29, offset 0x80021a10
	/* begin block 1 */
		// Start line: 30
		// Start offset: 0x80021A10
		// Variables:
	// 		short i; // $a1
	/* end block 1 */
	// End offset: 0x80021A48
	// End Line: 40

	/* begin block 2 */
		// Start line: 58
	/* end block 2 */
	// End Line: 59

	/* begin block 3 */
		// Start line: 58
	/* end block 3 */
	// End Line: 59

	/* begin block 4 */
		// Start line: 64
	/* end block 4 */
	// End Line: 65

void Initialize__13tTrackManager(tTrackManager *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  this->fNumTracks = 0;
  this->fTracks = (tTrackInformation *)0x0;
  do {
    iVar1 = iVar2 << 0x10;
    iVar2 = iVar2 + 1;
    iVar1 = (int)&this->fNumTracks + (iVar1 >> 0xe);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
  } while (iVar2 * 0x10000 >> 0x10 < 0x10);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadTracks__13tTrackManagerR14tSaveTrackInfo(struct tTrackManager *this /*$a0*/, struct tSaveTrackInfo *load /*$a1*/)
 // line 46, offset 0x80021a50
	/* begin block 1 */
		// Start line: 47
		// Start offset: 0x80021A50
		// Variables:
	// 		unsigned long i; // $v1
	/* end block 1 */
	// End offset: 0x80021A74
	// End Line: 60

	/* begin block 2 */
		// Start line: 92
	/* end block 2 */
	// End Line: 93

	/* begin block 3 */
		// Start line: 99
	/* end block 3 */
	// End Line: 100

	/* begin block 4 */
		// Start line: 99
	/* end block 4 */
	// End Line: 100

	/* begin block 5 */
		// Start line: 103
	/* end block 5 */
	// End Line: 104

void LoadTracks__13tTrackManagerR14tSaveTrackInfo(tTrackManager *this,tSaveTrackInfo *load)

{
  uchar *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    puVar1 = load->fTrackActivated + uVar2;
    uVar2 = uVar2 + 1;
    this->fAvailableTracks[0] = (void *)(uint)(*puVar1 != '\0');
    this = (tTrackManager *)&this->fTracks;
  } while (uVar2 < 0x10);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SaveTracks__13tTrackManagerR14tSaveTrackInfo(struct tTrackManager *this /*$a0*/, struct tSaveTrackInfo *save /*$a1*/)
 // line 65, offset 0x80021a7c
	/* begin block 1 */
		// Start line: 66
		// Start offset: 0x80021A7C
		// Variables:
	// 		unsigned long i; // $a2
	/* end block 1 */
	// End offset: 0x80021A9C
	// End Line: 78

	/* begin block 2 */
		// Start line: 132
	/* end block 2 */
	// End Line: 133

	/* begin block 3 */
		// Start line: 138
	/* end block 3 */
	// End Line: 139

	/* begin block 4 */
		// Start line: 138
	/* end block 4 */
	// End Line: 139

	/* begin block 5 */
		// Start line: 142
	/* end block 5 */
	// End Line: 143

void SaveTracks__13tTrackManagerR14tSaveTrackInfo(tTrackManager *this,tSaveTrackInfo *save)

{
  uchar *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    puVar1 = save->fTrackActivated + uVar2;
    uVar2 = uVar2 + 1;
    *puVar1 = *(uchar *)this->fAvailableTracks;
    this = (tTrackManager *)&this->fTracks;
  } while (uVar2 < 0x10);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetTrack__13tTrackManagersR17tTrackInformation(struct tTrackManager *this /*$s0*/, short trackNumber /*$a1*/, struct tTrackInformation *trackInfo /*$s1*/)
 // line 84, offset 0x80021aa4
	/* begin block 1 */
		// Start line: 85
		// Start offset: 0x80021AA4
	/* end block 1 */
	// End offset: 0x80021AA4
	// End Line: 85

	/* begin block 2 */
		// Start line: 170
	/* end block 2 */
	// End Line: 171

	/* begin block 3 */
		// Start line: 177
	/* end block 3 */
	// End Line: 178

	/* begin block 4 */
		// Start line: 177
	/* end block 4 */
	// End Line: 178

void GetTrack__13tTrackManagersR17tTrackInformation
               (tTrackManager *this,short trackNumber,tTrackInformation *trackInfo)

{
  blockmove((undefined4 *)(this->fTracks + (int)trackNumber),(undefined4 *)trackInfo,0x30);
  trackInfo->fAvailable = *(uchar *)(this->fAvailableTracks + (int)trackInfo->fTrackID);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadDescription__13tTrackManager(struct tTrackManager *this /*$s0*/)
 // line 94, offset 0x80021b14
	/* begin block 1 */
		// Start line: 95
		// Start offset: 0x80021B14
		// Variables:
	// 		char *input; // $s1
	// 		char *data; // $a0
	// 		char filename[80]; // stack offset -96
	// 		unsigned long i; // $a1
	/* end block 1 */
	// End offset: 0x80021C30
	// End Line: 140

	/* begin block 2 */
		// Start line: 190
	/* end block 2 */
	// End Line: 191

	/* begin block 3 */
		// Start line: 198
	/* end block 3 */
	// End Line: 199

	/* begin block 4 */
		// Start line: 198
	/* end block 4 */
	// End Line: 199

void LoadDescription__13tTrackManager(tTrackManager *this)

{
  ulong *puVar1;
  ulong uVar2;
  tTrackInformation *ptVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char acStack96 [80];
  
  sprintf(acStack96,&DAT_80010fc8,PTR_801164fc,s_fetrk_trk_80010fd0);
  ReleaseDescription__13tTrackManager(this);
  puVar1 = (ulong *)loadfileadr(acStack96,0x10);
  uVar2 = *puVar1;
  this->fNumTracks = uVar2;
  ptVar3 = (tTrackInformation *)reservememadr(s_Track_List_80010fdc,uVar2 * 0x30,0);
  this->fTracks = ptVar3;
  blockmove(puVar1 + 1,(undefined4 *)ptVar3,this->fNumTracks * 0x30);
  uVar6 = 0;
  if (this->fNumTracks != 0) {
    iVar5 = 0;
    do {
      pcVar4 = &this->fTracks->fTrackID + iVar5;
      if (pcVar4[3] != '\0') {
        *(undefined **)(this->fAvailableTracks + (int)*pcVar4) = &DAT_00000001;
      }
      pcVar4 = &this->fTracks->fTrackID + iVar5;
      if (pcVar4[4] == '\0') {
        *(undefined **)(this->fViewableTracks + (int)*pcVar4) = &DAT_00000001;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x30;
    } while (uVar6 < this->fNumTracks);
  }
  purgememadr((int)puVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseDescription__13tTrackManager(struct tTrackManager *this /*$s0*/)
 // line 145, offset 0x80021c4c
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x80021C4C
	/* end block 1 */
	// End offset: 0x80021C74
	// End Line: 150

	/* begin block 2 */
		// Start line: 322
	/* end block 2 */
	// End Line: 323

	/* begin block 3 */
		// Start line: 328
	/* end block 3 */
	// End Line: 329

	/* begin block 4 */
		// Start line: 328
	/* end block 4 */
	// End Line: 329

void ReleaseDescription__13tTrackManager(tTrackManager *this)

{
  if (this->fTracks != (tTrackInformation *)0x0) {
    purgememadr((int)this->fTracks);
  }
  this->fTracks = (tTrackInformation *)0x0;
  this->fNumTracks = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetTrackAvailable__13tTrackManagersb(struct tTrackManager *this /*$a0*/, short track /*$a1*/, void * avail /*$a2*/)
 // line 157, offset 0x80021c8c
	/* begin block 1 */
		// Start line: 158
		// Start offset: 0x80021C8C
	/* end block 1 */
	// End offset: 0x80021C8C
	// End Line: 159

	/* begin block 2 */
		// Start line: 345
	/* end block 2 */
	// End Line: 346

	/* begin block 3 */
		// Start line: 352
	/* end block 3 */
	// End Line: 353

	/* begin block 4 */
		// Start line: 352
	/* end block 4 */
	// End Line: 353

	/* begin block 5 */
		// Start line: 353
	/* end block 5 */
	// End Line: 354

	/* begin block 6 */
		// Start line: 353
	/* end block 6 */
	// End Line: 354

void SetTrackAvailable__13tTrackManagersb(tTrackManager *this,short track,void *avail)

{
  *(void **)((int)this->fAvailableTracks + ((int)((uint)(ushort)track << 0x10) >> 0xe)) = avail;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetClassAvailable__13tTrackManager15tTrackClassTypeb(struct tTrackManager *this /*$a0*/, enum tTrackClassType trackClass /*$a1*/, void * avail /*$a2*/)
 // line 172, offset 0x80021ca0
	/* begin block 1 */
		// Start line: 173
		// Start offset: 0x80021CA0
		// Variables:
	// 		unsigned long i; // $a3
	/* end block 1 */
	// End offset: 0x80021CF8
	// End Line: 181

	/* begin block 2 */
		// Start line: 338
	/* end block 2 */
	// End Line: 339

	/* begin block 3 */
		// Start line: 375
	/* end block 3 */
	// End Line: 376

	/* begin block 4 */
		// Start line: 375
	/* end block 4 */
	// End Line: 376

	/* begin block 5 */
		// Start line: 378
	/* end block 5 */
	// End Line: 379

void SetClassAvailable__13tTrackManager15tTrackClassTypeb
               (tTrackManager *this,tTrackClassType trackClass,void *avail)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (this->fNumTracks != 0) {
    iVar3 = 0;
    do {
      pcVar1 = &this->fTracks->fTrackID + iVar3;
      if ((uint)(byte)pcVar1[2] == trackClass) {
        this->fAvailableTracks[(int)*pcVar1] = avail;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x30;
    } while (uVar2 < this->fNumTracks);
  }
  return;
}



// decompiled code
// original method signature: 
// struct tTrackInformation * /*$ra*/ GetTrackByID__13tTrackManagers(struct tTrackManager *this /*$a0*/, short track /*$a1*/)
 // line 198, offset 0x80021d00
	/* begin block 1 */
		// Start line: 199
		// Start offset: 0x80021D00
		// Variables:
	// 		unsigned long i; // $a2
	/* end block 1 */
	// End offset: 0x80021D4C
	// End Line: 210

	/* begin block 2 */
		// Start line: 391
	/* end block 2 */
	// End Line: 392

	/* begin block 3 */
		// Start line: 414
	/* end block 3 */
	// End Line: 415

	/* begin block 4 */
		// Start line: 414
	/* end block 4 */
	// End Line: 415

	/* begin block 5 */
		// Start line: 417
	/* end block 5 */
	// End Line: 418

tTrackInformation * GetTrackByID__13tTrackManagers(tTrackManager *this,short track)

{
  tTrackInformation *ptVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (this->fNumTracks != 0) {
    ptVar1 = this->fTracks;
    do {
      uVar2 = uVar2 + 1;
      if ((int)ptVar1->fTrackID == (int)track) {
        return ptVar1;
      }
      ptVar1 = ptVar1 + 1;
    } while (uVar2 < this->fNumTracks);
  }
  return this->fTracks;
}



// decompiled code
// original method signature: 
// struct tListIteratorTrack * /*$ra*/ __18tListIteratorTrackPcT1P13tTrackManager(struct tListIteratorTrack *this /*$s0*/, char *valPtr /*$v0*/, char *index /*$v1*/, struct tTrackManager *trackManager /*$s1*/)
 // line 233, offset 0x80021d54
	/* begin block 1 */
		// Start line: 234
		// Start offset: 0x80021D54
	/* end block 1 */
	// End offset: 0x80021D54
	// End Line: 234

	/* begin block 2 */
		// Start line: 460
	/* end block 2 */
	// End Line: 461

	/* begin block 3 */
		// Start line: 484
	/* end block 3 */
	// End Line: 485

	/* begin block 4 */
		// Start line: 484
	/* end block 4 */
	// End Line: 485

tListIteratorTrack *
__18tListIteratorTrackPcT1P13tTrackManager
          (tListIteratorTrack *this,char *valPtr,char *index,tTrackManager *trackManager)

{
  __20tListIteratorIndexedPsPcT2((tListIteratorIndexed *)this,(short *)0x0,valPtr,index);
  *(undefined4 *)((this->tListIteratorIndexed).tListIterator._vf + 2) = 0x80010fe8;
  this->fTrackManager = trackManager;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._18tListIteratorTrack(struct tListIteratorTrack *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 239, offset 0x80021dac
	/* begin block 1 */
		// Start line: 240
		// Start offset: 0x80021DAC
	/* end block 1 */
	// End offset: 0x80021DAC
	// End Line: 240

	/* begin block 2 */
		// Start line: 494
	/* end block 2 */
	// End Line: 495

	/* begin block 3 */
		// Start line: 498
	/* end block 3 */
	// End Line: 499

	/* begin block 4 */
		// Start line: 498
	/* end block 4 */
	// End Line: 499

void ___18tListIteratorTrack(tListIteratorTrack *this,int __in_chrg)

{
  *(undefined4 *)((this->tListIteratorIndexed).tListIterator._vf + 2) = 0x80010fe8;
  ___20tListIteratorIndexed((tListIteratorIndexed *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ TextValue__18tListIteratorTrack7tPlayer(struct tListIteratorTrack *this /*$a0*/, enum tPlayer atIndex /*$a1*/)
 // line 243, offset 0x80021dd4
	/* begin block 1 */
		// Start line: 244
		// Start offset: 0x80021DD4
		// Variables:
	// 		struct tTrackInformation *trackInfo; // $v0
	/* end block 1 */
	// End offset: 0x80021DD4
	// End Line: 245

	/* begin block 2 */
		// Start line: 502
	/* end block 2 */
	// End Line: 503

	/* begin block 3 */
		// Start line: 506
	/* end block 3 */
	// End Line: 507

	/* begin block 4 */
		// Start line: 506
	/* end block 4 */
	// End Line: 507

	/* begin block 5 */
		// Start line: 507
	/* end block 5 */
	// End Line: 508

	/* begin block 6 */
		// Start line: 507
	/* end block 6 */
	// End Line: 508

short TextValue__18tListIteratorTrack7tPlayer(tListIteratorTrack *this,tPlayer atIndex)

{
  return (short)this->fTrackManager->fTracks
                [(uint)(byte)(this->tListIteratorIndexed).tListIterator.fValue
                             [(uint)(byte)*(this->tListIteratorIndexed).fIndex]].fTrackID + 0xd5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Increment__18tListIteratorTrack7tPlayer(struct tListIteratorTrack *this /*$s0*/, enum tPlayer atIndex /*$a1*/)
 // line 249, offset 0x80021e14
	/* begin block 1 */
		// Start line: 250
		// Start offset: 0x80021E24
	/* end block 1 */
	// End offset: 0x80021EB0
	// End Line: 256

	/* begin block 2 */
		// Start line: 514
	/* end block 2 */
	// End Line: 515

	/* begin block 3 */
		// Start line: 518
	/* end block 3 */
	// End Line: 519

	/* begin block 4 */
		// Start line: 518
	/* end block 4 */
	// End Line: 519

void Increment__18tListIteratorTrack7tPlayer(tListIteratorTrack *this,tPlayer atIndex)

{
  undefined *puVar1;
  char *pcVar2;
  byte *pbVar3;
  
  do {
    pcVar2 = (this->tListIteratorIndexed).tListIterator.fValue +
             (uint)(byte)*(this->tListIteratorIndexed).fIndex;
    *pcVar2 = *pcVar2 + '\x01';
    pbVar3 = (byte *)((this->tListIteratorIndexed).tListIterator.fValue +
                     (uint)(byte)*(this->tListIteratorIndexed).fIndex);
    if (this->fTrackManager->fNumTracks <= (uint)*pbVar3) {
      *pbVar3 = 0;
    }
    puVar1 = (undefined *)
             ValidTrack__18tListIteratorTrackc
                       (this,(this->tListIteratorIndexed).tListIterator.fValue
                             [(uint)(byte)*(this->tListIteratorIndexed).fIndex]);
  } while (puVar1 != &DAT_00000001);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decrement__18tListIteratorTrack7tPlayer(struct tListIteratorTrack *this /*$s0*/, enum tPlayer atIndex /*$a1*/)
 // line 259, offset 0x80021ec0
	/* begin block 1 */
		// Start line: 260
		// Start offset: 0x80021ED0
	/* end block 1 */
	// End offset: 0x80021F40
	// End Line: 266

	/* begin block 2 */
		// Start line: 534
	/* end block 2 */
	// End Line: 535

	/* begin block 3 */
		// Start line: 538
	/* end block 3 */
	// End Line: 539

	/* begin block 4 */
		// Start line: 538
	/* end block 4 */
	// End Line: 539

void Decrement__18tListIteratorTrack7tPlayer(tListIteratorTrack *this,tPlayer atIndex)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  
  do {
    pcVar3 = (this->tListIteratorIndexed).tListIterator.fValue +
             (uint)(byte)*(this->tListIteratorIndexed).fIndex;
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      cVar1 = *(char *)&this->fTrackManager->fNumTracks;
    }
    *pcVar3 = cVar1 + -1;
    puVar2 = (undefined *)
             ValidTrack__18tListIteratorTrackc
                       (this,(this->tListIteratorIndexed).tListIterator.fValue
                             [(uint)(byte)*(this->tListIteratorIndexed).fIndex]);
  } while (puVar2 != &DAT_00000001);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ ValidTrack__18tListIteratorTrackc(struct tListIteratorTrack *this /*$a0*/, char track /*$a1*/)
 // line 269, offset 0x80021f50
	/* begin block 1 */
		// Start line: 270
		// Start offset: 0x80021F50
		// Variables:
	// 		struct tTrackInformation *trackInfo; // $v1
	// 		void * result; // $a1
	/* end block 1 */
	// End offset: 0x80021FEC
	// End Line: 289

	/* begin block 2 */
		// Start line: 554
	/* end block 2 */
	// End Line: 555

	/* begin block 3 */
		// Start line: 558
	/* end block 3 */
	// End Line: 559

	/* begin block 4 */
		// Start line: 558
	/* end block 4 */
	// End Line: 559

	/* begin block 5 */
		// Start line: 559
	/* end block 5 */
	// End Line: 560

	/* begin block 6 */
		// Start line: 559
	/* end block 6 */
	// End Line: 560

void * ValidTrack__18tListIteratorTrackc(tListIteratorTrack *this,char track)

{
  tTrackInformation *ptVar1;
  ulong *puVar2;
  void *pvVar3;
  
  ptVar1 = this->fTrackManager->fTracks + (uint)(byte)track;
  puVar2 = &this->fTrackManager->fNumTracks + (int)ptVar1->fTrackID;
  pvVar3 = (void *)puVar2[2];
  if (frontEnd.raceType == '\0') {
    pvVar3 = (void *)(uint)(((uint)pvVar3 | puVar2[0x12]) != 0);
  }
  else {
    if (frontEnd.raceType == '\x01') {
      pvVar3 = (void *)(uint)(((uint)pvVar3 | puVar2[0x12]) != 0);
      if (ptVar1->fIsEgg != '\0') {
        pvVar3 = (void *)0x0;
      }
      if (2 < ptVar1->fTrackDifficulty) {
        pvVar3 = (void *)0x0;
      }
    }
  }
  return pvVar3;
}





