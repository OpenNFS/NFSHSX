#ifndef SPEECH_H
#define SPEECH_H


extern int StatusCount__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this); // 0x80099358

extern struct Speaker * StatusSub__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this); // 0x8009934C

extern void PurgeStatusSub__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this); // 0x80099344

extern struct CarBank * GetCarBank__Q26Speech15DispatchSpeakeri(struct DispatchSpeaker *this, int carIndex); // 0x80099328

extern struct LocationBank * FindClosestLocationTo__Q26Speech15DispatchSpeakeri(struct DispatchSpeaker *this, int slice); // 0x80099300

extern struct CallSignBank * CallSign__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this); // 0x800992F4

extern void * IsSuper__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x800992D8

extern struct Car_tObj * CarObj__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x800992CC

extern struct CarBank * GetCarBank__Q26Speech13MobileSpeakeri(struct MobileSpeaker *this, int carIndex); // 0x800992B4

extern struct LocationBank * FindClosestLocationTo__Q26Speech13MobileSpeakeri(struct MobileSpeaker *this, int slice); // 0x8009928C

extern struct CallSignBank * CallSign__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x80099280

extern int Unit__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x80099274

extern struct Car_tObj * Perp__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x80099268

extern char * Speech_AllocateRAM__FlPc(long numBytes, char *message); // 0x800942E8

extern void Speech_PurgeRAM__FPc(char *memPtr); // 0x80094314

extern long Speech_HandleRequest__Fllll(long bank, long localoffset, long size, long event); // 0x80094334

extern void SetCar__Q26Speech11CarBankNamei(struct CarBankName *this, int carIndex); // 0x80094354

extern void * Check__Q26Speech7CarBankPciPQ26Speech11CarBankName(struct CarBank *this, char *name, int id, struct CarBankName *bankname); // 0x8009441C

extern void * CheckCarBank__6SpeechPQ26Speech7CarBankPciPQ26Speech11CarBankName(struct Speech *this, struct CarBank *carbank, char *name, int id, struct CarBankName *bankname); // 0x80094524

extern void SetCar__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this, struct Car_tObj *car); // 0x800945D8

extern void CountLocations__6Speech(struct Speech *this); // 0x800946F8

extern void * CheckLocationBank__6SpeechPQ26Speech12LocationBankPci(struct Speech *this, struct LocationBank *locationbank, char *name, int id); // 0x80094768

extern int Distance__Q26Speech12LocationBanki(struct LocationBank *this, int slice); // 0x8009486C

extern struct LocationBank * FindClosestLocationTo__6SpeechPQ26Speech12LocationBanki(struct Speech *this, struct LocationBank *bank, int slice); // 0x80094900

extern void FindLocation__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this, struct Car_tObj *car); // 0x800949D8

extern void * CheckCallSignBank__6SpeechPQ26Speech12CallSignBankPci(struct Speech *this, struct CallSignBank *bank, char *name, int id); // 0x80094CD0

extern void * CheckMultiBank__6SpeechPciPQ26Speech11CarBankName(struct Speech *this, char *name, int id, struct CarBankName *bn); // 0x80094E08

extern int CalculateBankSize__6SpeechPcPQ26Speech11CarBankNamePlT3(struct Speech *this, char *header, struct CarBankName *bn, long *hoffset, long *hsize); // 0x80094FA8

extern void LoadBankHeaders__6SpeechPcPQ26Speech11CarBankNamell(struct Speech *this, char *header, struct CarBankName *bn, long hoffset, long hsize); // 0x800951BC

extern struct Speech * __6Speech(struct Speech *this); // 0x800955F4

extern void Reset__6Speech(); // 0x80095994

extern void _._6Speech(struct Speech *this, int __in_chrg); // 0x80095B30

extern int BankPatch__6SpeechlP8Car_tObj(struct Speech *this, long bank, struct Car_tObj *car); // 0x80095BE4

extern long SubmitRequest__6Speechlll(long bank, long localoffset, long size); // 0x80095C20

extern void Report__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this, struct Car_tObj *cop); // 0x80095D14

extern void Deny__Q26Speech7Speaker(struct Speaker *this); // 0x80095D1C

extern void Grant__Q26Speech7Speaker(struct Speaker *this); // 0x80095D24

extern void Ready__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this, struct Car_tObj *wing); // 0x80095D2C

extern void Engage__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this, struct Car_tObj *perp); // 0x80095D34

extern void Lose__Q26Speech7Speaker(struct Speaker *this); // 0x80095D3C

extern void Accident__Q26Speech7Speakeri(struct Speaker *this, int slice); // 0x80095D44

extern void Catch__Q26Speech7Speakeri(struct Speaker *this, int ticket); // 0x80095D4C

extern void RoadBlock__Q26Speech7Speaker(struct Speaker *this); // 0x80095D54

extern void SpikeBelt__Q26Speech7Speaker(struct Speaker *this); // 0x80095D5C

extern void Backup__Q26Speech7Speaker(struct Speaker *this); // 0x80095D64

extern void ReportBlockade__Q26Speech7Speaker(struct Speaker *this); // 0x80095D6C

extern void Roger__Q26Speech7Speaker(struct Speaker *this); // 0x80095D74

extern void Bullhorn__Q26Speech7Speaker(struct Speaker *this); // 0x80095D7C

extern void Purge__Q26Speech7Speaker(struct Speaker *this); // 0x80095D84

extern void Promote__Q26Speech7Speaker(struct Speaker *this); // 0x80095D8C

extern void Speech_Server__Fv(); // 0x80095DF8

extern void SetDelayedStatus__6SpeechPQ26Speech7Speakeri(struct Speech *this, struct Speaker *sub, int delay); // 0x80095E34

extern void Activate__Q26Speech15DispatchSpeakeri(struct DispatchSpeaker *this, int seedupdatecount); // 0x80095E54

extern struct Speaker * Dispatch__6Speech(); // 0x80095EF0

extern void Roger__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this); // 0x80095F28

extern void StatusReply__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this); // 0x8009619C

extern void Status__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this); // 0x800965D0

extern void Status__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x80096B88

extern void ClearPerp__Q26Speech15DispatchSpeakerP8Car_tObj(struct DispatchSpeaker *this, struct Car_tObj *car); // 0x80097120

extern void * KnownPerp__Q26Speech15DispatchSpeakerP8Car_tObj(struct DispatchSpeaker *this, struct Car_tObj *car); // 0x80097150

extern void AddPerp__Q26Speech15DispatchSpeakerP8Car_tObj(struct DispatchSpeaker *this, struct Car_tObj *car); // 0x80097180

extern void Report__Q26Speech15DispatchSpeakerP8Car_tObj(struct DispatchSpeaker *this, struct Car_tObj *perp); // 0x800971B0

extern void Accident__Q26Speech15DispatchSpeakeri(struct DispatchSpeaker *this, int slice); // 0x80097350

extern void Deny__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this); // 0x80097358

extern void Grant__Q26Speech15DispatchSpeaker(struct DispatchSpeaker *this); // 0x8009744C

extern void Ready__Q26Speech15DispatchSpeakerP8Car_tObj(struct DispatchSpeaker *this, struct Car_tObj *carObj); // 0x800974B0

extern int PickVoice__6SpeechP8Car_tObj(struct Speech *this, struct Car_tObj *carObj); // 0x8009755C

extern int GetVoice__6SpeechP8Car_tObj(struct Car_tObj *carObj); // 0x800975F8

extern void Activate__Q26Speech13MobileSpeakerP8Car_tObj(struct MobileSpeaker *this, struct Car_tObj *carObj); // 0x80097620

extern void ReActivate__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x8009770C

extern struct Speaker * FindMobile__6SpeechP8Car_tObj(struct Speech *this, struct Car_tObj *carObj); // 0x800977B8

extern struct Speaker * Mobile__6SpeechP8Car_tObj(struct Car_tObj *carObj); // 0x8009785C

extern int CalcMph__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this, struct Car_tObj *perp); // 0x800978A4

extern void SetSpeed__Q26Speech13MobileSpeakerP8Car_tObj(struct MobileSpeaker *this, struct Car_tObj *perp); // 0x800978EC

extern int DistToPerp__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x80097A18

extern void Report__Q26Speech13MobileSpeakerP8Car_tObj(struct MobileSpeaker *this, struct Car_tObj *perp); // 0x80097BFC

extern void Engage__Q26Speech13MobileSpeakerP8Car_tObj(struct MobileSpeaker *this, struct Car_tObj *perp); // 0x80097CE8

extern void Lose__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x80098434

extern void Accident__Q26Speech13MobileSpeakeri(struct MobileSpeaker *this, int slice); // 0x80098788

extern void Catch__Q26Speech13MobileSpeakeri(struct MobileSpeaker *this, int ticket); // 0x80098790

extern void RoadBlock__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x80098A4C

extern void SpikeBelt__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x80098B60

extern void Backup__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x80098C74

extern void Roger__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x80098D6C

extern void Bullhorn__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x80098EE4

extern void Purge__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x80098F18

extern void ReportBlockade__Q26Speech13MobileSpeaker(struct MobileSpeaker *this); // 0x8009916C


extern void Status__Q26Speech7Speaker(struct Speaker *this); // 0x800993D4

extern int Unit__Q26Speech7Speaker(struct Speaker *this); // 0x800993CC

extern void * KnownPerp__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this, struct Car_tObj *car); // 0x800993C4

extern void ClearPerp__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this, struct Car_tObj *car); // 0x800993BC

extern void * IsSuper__Q26Speech7Speaker(struct Speaker *this); // 0x800993B4

extern int StatusCount__Q26Speech7Speaker(struct Speaker *this); // 0x800993AC

extern struct Speaker * StatusSub__Q26Speech7Speaker(struct Speaker *this); // 0x800993A4

extern void PurgeStatusSub__Q26Speech7Speaker(struct Speaker *this); // 0x8009939C

extern int DistToPerp__Q26Speech7Speaker(struct Speaker *this); // 0x80099394

extern struct Car_tObj * CarObj__Q26Speech7Speaker(struct Speaker *this); // 0x8009938C

extern void ReActivate__Q26Speech7Speaker(struct Speaker *this); // 0x80099384

extern struct Car_tObj * Perp__Q26Speech7Speaker(struct Speaker *this); // 0x8009937C

extern struct CarBank * GetCarBank__Q26Speech7Speakeri(struct Speaker *this, int carIndex); // 0x80099374

extern struct LocationBank * FindClosestLocationTo__Q26Speech7Speakeri(struct Speaker *this, int slice); // 0x8009936C

extern struct CallSignBank * CallSign__Q26Speech7Speaker(struct Speaker *this); // 0x80099364


// decompiled code
// original method signature: 
// void /*$ra*/ Status__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 264, offset 0x800993d4
	/* begin block 1 */
		// Start line: 265
		// Start offset: 0x800993D4
	/* end block 1 */
	// End offset: 0x800993D4
	// End Line: 265

	/* begin block 2 */
		// Start line: 584
	/* end block 2 */
	// End Line: 585

	/* begin block 3 */
		// Start line: 528
	/* end block 3 */
	// End Line: 529

	/* begin block 4 */
		// Start line: 669
	/* end block 4 */
	// End Line: 670

void Status__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ Unit__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 323, offset 0x800993cc
	/* begin block 1 */
		// Start line: 324
		// Start offset: 0x800993CC
	/* end block 1 */
	// End offset: 0x800993CC
	// End Line: 324

	/* begin block 2 */
		// Start line: 647
	/* end block 2 */
	// End Line: 648

	/* begin block 3 */
		// Start line: 646
	/* end block 3 */
	// End Line: 647

	/* begin block 4 */
		// Start line: 728
	/* end block 4 */
	// End Line: 729

int Unit__Q26Speech7Speaker(Speaker *this)

{
  return 0;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ KnownPerp__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this /*$a0*/, struct Car_tObj *car /*$a1*/)
 // line 328, offset 0x800993c4
	/* begin block 1 */
		// Start line: 329
		// Start offset: 0x800993C4
	/* end block 1 */
	// End offset: 0x800993C4
	// End Line: 329

	/* begin block 2 */
		// Start line: 733
	/* end block 2 */
	// End Line: 734

	/* begin block 3 */
		// Start line: 656
	/* end block 3 */
	// End Line: 657

	/* begin block 4 */
		// Start line: 733
	/* end block 4 */
	// End Line: 734

void * KnownPerp__Q26Speech7SpeakerP8Car_tObj(Speaker *this,Car_tObj *car)

{
  return (void *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ClearPerp__Q26Speech7SpeakerP8Car_tObj(struct Speaker *this /*$a0*/, struct Car_tObj *car /*$a1*/)
 // line 329, offset 0x800993bc
	/* begin block 1 */
		// Start line: 330
		// Start offset: 0x800993BC
	/* end block 1 */
	// End offset: 0x800993BC
	// End Line: 330

	/* begin block 2 */
		// Start line: 659
	/* end block 2 */
	// End Line: 660

	/* begin block 3 */
		// Start line: 658
	/* end block 3 */
	// End Line: 659

	/* begin block 4 */
		// Start line: 734
	/* end block 4 */
	// End Line: 735

void ClearPerp__Q26Speech7SpeakerP8Car_tObj(Speaker *this,Car_tObj *car)

{
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsSuper__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 331, offset 0x800993b4
	/* begin block 1 */
		// Start line: 332
		// Start offset: 0x800993B4
	/* end block 1 */
	// End offset: 0x800993B4
	// End Line: 332

	/* begin block 2 */
		// Start line: 736
	/* end block 2 */
	// End Line: 737

	/* begin block 3 */
		// Start line: 662
	/* end block 3 */
	// End Line: 663

	/* begin block 4 */
		// Start line: 736
	/* end block 4 */
	// End Line: 737

void * IsSuper__Q26Speech7Speaker(Speaker *this)

{
  return (void *)0x0;
}



// decompiled code
// original method signature: 
// int /*$ra*/ StatusCount__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 332, offset 0x800993ac
	/* begin block 1 */
		// Start line: 333
		// Start offset: 0x800993AC
	/* end block 1 */
	// End offset: 0x800993AC
	// End Line: 333

	/* begin block 2 */
		// Start line: 737
	/* end block 2 */
	// End Line: 738

	/* begin block 3 */
		// Start line: 664
	/* end block 3 */
	// End Line: 665

	/* begin block 4 */
		// Start line: 737
	/* end block 4 */
	// End Line: 738

int StatusCount__Q26Speech7Speaker(Speaker *this)

{
  return 0;
}



// decompiled code
// original method signature: 
// struct Speaker * /*$ra*/ StatusSub__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 333, offset 0x800993a4
	/* begin block 1 */
		// Start line: 334
		// Start offset: 0x800993A4
	/* end block 1 */
	// End offset: 0x800993A4
	// End Line: 334

	/* begin block 2 */
		// Start line: 738
	/* end block 2 */
	// End Line: 739

	/* begin block 3 */
		// Start line: 666
	/* end block 3 */
	// End Line: 667

	/* begin block 4 */
		// Start line: 738
	/* end block 4 */
	// End Line: 739

Speaker * StatusSub__Q26Speech7Speaker(Speaker *this)

{
  return (Speaker *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ PurgeStatusSub__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 334, offset 0x8009939c
	/* begin block 1 */
		// Start line: 335
		// Start offset: 0x8009939C
	/* end block 1 */
	// End offset: 0x8009939C
	// End Line: 335

	/* begin block 2 */
		// Start line: 739
	/* end block 2 */
	// End Line: 740

	/* begin block 3 */
		// Start line: 668
	/* end block 3 */
	// End Line: 669

	/* begin block 4 */
		// Start line: 739
	/* end block 4 */
	// End Line: 740

void PurgeStatusSub__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// int /*$ra*/ DistToPerp__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 335, offset 0x80099394
	/* begin block 1 */
		// Start line: 336
		// Start offset: 0x80099394
	/* end block 1 */
	// End offset: 0x80099394
	// End Line: 336

	/* begin block 2 */
		// Start line: 740
	/* end block 2 */
	// End Line: 741

	/* begin block 3 */
		// Start line: 670
	/* end block 3 */
	// End Line: 671

	/* begin block 4 */
		// Start line: 740
	/* end block 4 */
	// End Line: 741

int DistToPerp__Q26Speech7Speaker(Speaker *this)

{
  return 0x3e80000;
}



// decompiled code
// original method signature: 
// struct Car_tObj * /*$ra*/ CarObj__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 336, offset 0x8009938c
	/* begin block 1 */
		// Start line: 337
		// Start offset: 0x8009938C
	/* end block 1 */
	// End offset: 0x8009938C
	// End Line: 337

	/* begin block 2 */
		// Start line: 741
	/* end block 2 */
	// End Line: 742

	/* begin block 3 */
		// Start line: 672
	/* end block 3 */
	// End Line: 673

	/* begin block 4 */
		// Start line: 741
	/* end block 4 */
	// End Line: 742

Car_tObj * CarObj__Q26Speech7Speaker(Speaker *this)

{
  return (Car_tObj *)0x0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReActivate__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 337, offset 0x80099384
	/* begin block 1 */
		// Start line: 338
		// Start offset: 0x80099384
	/* end block 1 */
	// End offset: 0x80099384
	// End Line: 338

	/* begin block 2 */
		// Start line: 742
	/* end block 2 */
	// End Line: 743

	/* begin block 3 */
		// Start line: 674
	/* end block 3 */
	// End Line: 675

	/* begin block 4 */
		// Start line: 742
	/* end block 4 */
	// End Line: 743

void ReActivate__Q26Speech7Speaker(Speaker *this)

{
  return;
}



// decompiled code
// original method signature: 
// struct Car_tObj * /*$ra*/ Perp__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 338, offset 0x8009937c
	/* begin block 1 */
		// Start line: 339
		// Start offset: 0x8009937C
	/* end block 1 */
	// End offset: 0x8009937C
	// End Line: 339

	/* begin block 2 */
		// Start line: 678
	/* end block 2 */
	// End Line: 679

	/* begin block 3 */
		// Start line: 676
	/* end block 3 */
	// End Line: 677

	/* begin block 4 */
		// Start line: 743
	/* end block 4 */
	// End Line: 744

Car_tObj * Perp__Q26Speech7Speaker(Speaker *this)

{
  return (Car_tObj *)0x0;
}



// decompiled code
// original method signature: 
// struct CarBank * /*$ra*/ GetCarBank__Q26Speech7Speakeri(struct Speaker *this /*$a0*/, int carIndex /*$a1*/)
 // line 362, offset 0x80099374
	/* begin block 1 */
		// Start line: 363
		// Start offset: 0x80099374
	/* end block 1 */
	// End offset: 0x80099374
	// End Line: 364

	/* begin block 2 */
		// Start line: 766
	/* end block 2 */
	// End Line: 767

	/* begin block 3 */
		// Start line: 724
	/* end block 3 */
	// End Line: 725

	/* begin block 4 */
		// Start line: 766
	/* end block 4 */
	// End Line: 767

	/* begin block 5 */
		// Start line: 767
	/* end block 5 */
	// End Line: 768

	/* begin block 6 */
		// Start line: 767
	/* end block 6 */
	// End Line: 768

CarBank * GetCarBank__Q26Speech7Speakeri(Speaker *this,int carIndex)

{
  return (CarBank *)0x0;
}



// decompiled code
// original method signature: 
// struct LocationBank * /*$ra*/ FindClosestLocationTo__Q26Speech7Speakeri(struct Speaker *this /*$a0*/, int slice /*$a1*/)
 // line 366, offset 0x8009936c
	/* begin block 1 */
		// Start line: 367
		// Start offset: 0x8009936C
	/* end block 1 */
	// End offset: 0x8009936C
	// End Line: 368

	/* begin block 2 */
		// Start line: 769
	/* end block 2 */
	// End Line: 770

	/* begin block 3 */
		// Start line: 732
	/* end block 3 */
	// End Line: 733

	/* begin block 4 */
		// Start line: 769
	/* end block 4 */
	// End Line: 770

	/* begin block 5 */
		// Start line: 770
	/* end block 5 */
	// End Line: 771

	/* begin block 6 */
		// Start line: 770
	/* end block 6 */
	// End Line: 771

LocationBank * FindClosestLocationTo__Q26Speech7Speakeri(Speaker *this,int slice)

{
  return (LocationBank *)0x0;
}



// decompiled code
// original method signature: 
// struct CallSignBank * /*$ra*/ CallSign__Q26Speech7Speaker(struct Speaker *this /*$a0*/)
 // line 370, offset 0x80099364
	/* begin block 1 */
		// Start line: 371
		// Start offset: 0x80099364
	/* end block 1 */
	// End offset: 0x80099364
	// End Line: 372

	/* begin block 2 */
		// Start line: 772
	/* end block 2 */
	// End Line: 773

	/* begin block 3 */
		// Start line: 745
	/* end block 3 */
	// End Line: 746

	/* begin block 4 */
		// Start line: 740
	/* end block 4 */
	// End Line: 741

	/* begin block 5 */
		// Start line: 772
	/* end block 5 */
	// End Line: 773

	/* begin block 6 */
		// Start line: 773
	/* end block 6 */
	// End Line: 774

	/* begin block 7 */
		// Start line: 773
	/* end block 7 */
	// End Line: 774

CallSignBank * CallSign__Q26Speech7Speaker(Speaker *this)

{
  return (CallSignBank *)0x0;
}





#endif
