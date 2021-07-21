#include "THISDUST.H"
#include "FETOURN.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__18tTournamentManager(struct tTournamentManager *this /*$a0*/)
 // line 36, offset 0x80032228
	/* begin block 1 */
		// Start line: 37
		// Start offset: 0x80032228
		// Variables:
	// 		short i; // $a1

		/* begin block 1.1 */
			// Start line: 59
			// Start offset: 0x800322DC

			/* begin block 1.1.1 */
				// Start line: 59
				// Start offset: 0x800322DC
			/* end block 1.1.1 */
			// End offset: 0x800322DC
			// End Line: 59
		/* end block 1.1 */
		// End offset: 0x800322DC
		// End Line: 59

		/* begin block 1.2 */
			// Start line: 59
			// Start offset: 0x800322DC

			/* begin block 1.2.1 */
				// Start line: 59
				// Start offset: 0x800322DC
			/* end block 1.2.1 */
			// End offset: 0x800322DC
			// End Line: 59
		/* end block 1.2 */
		// End offset: 0x800322DC
		// End Line: 59
	/* end block 1 */
	// End offset: 0x800322DC
	// End Line: 59

	/* begin block 2 */
		// Start line: 72
	/* end block 2 */
	// End Line: 73

	/* begin block 3 */
		// Start line: 72
	/* end block 3 */
	// End Line: 73

	/* begin block 4 */
		// Start line: 80
	/* end block 4 */
	// End Line: 81

void Initialize__18tTournamentManager(tTournamentManager *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  this->fMoney = 20000;
  this->fCurrentTrack = 0;
  this->fNumTiers = '\0';
  this->fDefinition = (tTournamentDefinition *)0x0;
  this->fTournamentList[0] = 0;
  this->fTrackList[0] = 0;
  iVar1 = 0;
  do {
    this->fRanking[iVar1 >> 0x10] = '\0';
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 0x10000;
  } while (iVar2 * 0x10000 >> 0x10 < 6);
  iVar2 = 0;
  iVar1 = 0;
  do {
    this->fBestPlacement[iVar1 >> 0x10] = '\a';
    iVar2 = iVar2 + 1;
    iVar1 = iVar2 * 0x10000;
  } while (iVar2 * 0x10000 >> 0x10 < 0x40);
  iVar1 = 0;
  do {
    iVar2 = iVar1 << 0x10;
    iVar1 = iVar1 + 1;
    *(undefined2 *)(&this->fNumTiers + (iVar2 >> 0xf) + 0x24) = 6;
    *(undefined2 *)(&this->fNumTiers + (iVar2 >> 0xf) + 0x2c) = 0;
  } while (iVar1 * 0x10000 >> 0x10 < 3);
  frontEnd.garageCar[0] = (char)carManager.fNumCars + -1;
  frontEnd.garageCar[1] = frontEnd.garageCar[0];
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadDescription__18tTournamentManager(struct tTournamentManager *this /*$s6*/)
 // line 89, offset 0x800322fc
	/* begin block 1 */
		// Start line: 90
		// Start offset: 0x800322FC
		// Variables:
	// 		char *input; // stack offset -48
	// 		char *data; // $s2
	// 		short tier; // $fp
	// 		short tourney; // $s4
	// 		short track; // $s0
	// 		char filename[80]; // stack offset -128
	/* end block 1 */
	// End offset: 0x8003250C
	// End Line: 140

	/* begin block 2 */
		// Start line: 180
	/* end block 2 */
	// End Line: 181

	/* begin block 3 */
		// Start line: 187
	/* end block 3 */
	// End Line: 188

	/* begin block 4 */
		// Start line: 187
	/* end block 4 */
	// End Line: 188

void LoadDescription__18tTournamentManager(tTournamentManager *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  tTournamentDefinition *ptVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  char acStack128 [80];
  undefined4 *local_30;
  
  sprintf(acStack128,&DAT_80011594,PTR_801164fc,s_tourn_trn_8001159c);
  ReleaseDescription__18tTournamentManager(this);
  local_30 = (undefined4 *)loadfileadr(acStack128,0x10);
  blockmove(local_30,(undefined4 *)this->fFinishPoints,6);
  this->fNumTiers = *(char *)((int)local_30 + 6);
  ptVar4 = (tTournamentDefinition *)reservememadr(s_Tourney_800115a8,(int)&DAT_00002924,0);
  iVar9 = 0;
  this->fDefinition = ptVar4;
  puVar7 = (undefined4 *)((int)local_30 + 7);
  if (this->fNumTiers != '\0') {
    do {
      iVar6 = (int)(short)iVar9;
      blockmove(puVar7,(undefined4 *)(this->fDefinition->fTiers + iVar6),0xc);
      ptVar4 = this->fDefinition;
      uVar8 = (uint)(&ptVar4->fTiers[iVar6].fNumTournaments)[2];
      puVar7 = puVar7 + 3;
      uVar1 = uVar8;
      if (uVar8 < uVar8 + (uint)ptVar4->fTiers[iVar6].fNumTournaments) {
        do {
          iVar2 = (int)(short)uVar1;
          blockmove(puVar7,(undefined4 *)(ptVar4->fTournaments + iVar2),0x54);
          ptVar4 = this->fDefinition;
          uVar5 = (uint)(ptVar4->fTiers + iVar2 * 7)[3].fTournOffset;
          puVar7 = puVar7 + 0x15;
          uVar3 = uVar5;
          if (uVar5 < uVar5 + (uint)(ptVar4->fTiers + iVar2 * 7)[3].fDescriptionID) {
            do {
              blockmove(puVar7,(undefined4 *)
                               (&DAT_00001524 +
                               (int)((int)ptVar4->fTiers + (int)(short)uVar3 * 0x28)),0x28);
              uVar3 = uVar3 + 1;
              ptVar4 = this->fDefinition;
              puVar7 = puVar7 + 10;
            } while ((int)(uVar3 * 0x10000) >> 0x10 <
                     (int)(uVar5 + (uint)ptVar4->fTournaments[iVar2].fNumTracks));
          }
          uVar1 = uVar1 + 1;
          ptVar4 = this->fDefinition;
        } while ((int)(uVar1 * 0x10000) >> 0x10 <
                 (int)(uVar8 + (uint)ptVar4->fTiers[iVar6].fNumTournaments));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 * 0x10000 >> 0x10 < (int)(uint)(byte)this->fNumTiers);
  }
  purgememadr((int)local_30);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseDescription__18tTournamentManager(struct tTournamentManager *this /*$s0*/)
 // line 145, offset 0x80032548
	/* begin block 1 */
		// Start line: 146
		// Start offset: 0x80032548
	/* end block 1 */
	// End offset: 0x80032574
	// End Line: 150

	/* begin block 2 */
		// Start line: 345
	/* end block 2 */
	// End Line: 346

	/* begin block 3 */
		// Start line: 351
	/* end block 3 */
	// End Line: 352

	/* begin block 4 */
		// Start line: 351
	/* end block 4 */
	// End Line: 352

void ReleaseDescription__18tTournamentManager(tTournamentManager *this)

{
  if (this->fDefinition != (tTournamentDefinition *)0x0) {
    purgememadr((int)this->fDefinition);
    this->fDefinition = (tTournamentDefinition *)0x0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTrackList__18tTournamentManagerss(struct tTournamentManager *this /*$t0*/, short tier /*$a1*/, short tournament /*$a2*/)
 // line 195, offset 0x80032584
	/* begin block 1 */
		// Start line: 196
		// Start offset: 0x80032584
		// Variables:
	// 		struct tTourneyInfo *currentTourney; // $a0
	// 		short numTracks; // $t2
	// 		short trackOffset; // $a2
	// 		short i; // $a3
	/* end block 1 */
	// End offset: 0x80032644
	// End Line: 210

	/* begin block 2 */
		// Start line: 405
	/* end block 2 */
	// End Line: 406

	/* begin block 3 */
		// Start line: 451
	/* end block 3 */
	// End Line: 452

	/* begin block 4 */
		// Start line: 451
	/* end block 4 */
	// End Line: 452

void UpdateTrackList__18tTournamentManagerss(tTournamentManager *this,short tier,short tournament)

{
  byte bVar1;
  tTourneyInfo *ptVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  ptVar2 = this->fDefinition->fTournaments +
           (uint)this->fDefinition->fTiers[(int)tier].fTournOffset + (int)tournament;
  bVar1 = ptVar2->fNumTracks;
  uVar4 = (uint)ptVar2->fTrackOffset;
  iVar5 = 0;
  if (bVar1 != 0) {
    do {
      iVar3 = iVar5 << 0x10;
      iVar5 = iVar5 + 1;
      *(short *)((int)this->fTrackList + (iVar3 >> 0xf)) =
           (short)this->fDefinition->fTracks[(int)(short)uVar4].fTrackNumber + 0xd5;
      uVar4 = uVar4 + 1;
    } while (iVar5 * 0x10000 >> 0x10 < (int)(uint)bVar1);
  }
  this->fTrackList[(uint)bVar1] = 0;
  return;
}



// decompiled code
// original method signature: 
// short * /*$ra*/ GetTrackList__18tTournamentManagerss(struct tTournamentManager *this /*$s0*/, short tier /*$a1*/, short tournament /*$a2*/)
 // line 234, offset 0x80032654
	/* begin block 1 */
		// Start line: 235
		// Start offset: 0x80032654
	/* end block 1 */
	// End offset: 0x80032654
	// End Line: 235

	/* begin block 2 */
		// Start line: 509
	/* end block 2 */
	// End Line: 510

	/* begin block 3 */
		// Start line: 534
	/* end block 3 */
	// End Line: 535

	/* begin block 4 */
		// Start line: 534
	/* end block 4 */
	// End Line: 535

short * GetTrackList__18tTournamentManagerss(tTournamentManager *this,short tier,short tournament)

{
  UpdateTrackList__18tTournamentManagerss(this,tier,tournament);
  return this->fTrackList;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetTrackToRace__18tTournamentManagerR10tTrackInfo(struct tTournamentManager *this /*$s0*/, struct tTrackInfo *track /*$s1*/)
 // line 243, offset 0x8003268c
	/* begin block 1 */
		// Start line: 244
		// Start offset: 0x8003268C

		/* begin block 1.1 */
			// Start line: 244
			// Start offset: 0x8003268C
			// Variables:
		// 		struct tTournamentManager *this; // $s0

			/* begin block 1.1.1 */
				// Start line: 244
				// Start offset: 0x8003268C
			/* end block 1.1.1 */
			// End offset: 0x8003268C
			// End Line: 244
		/* end block 1.1 */
		// End offset: 0x8003268C
		// End Line: 244
	/* end block 1 */
	// End offset: 0x8003268C
	// End Line: 244

	/* begin block 2 */
		// Start line: 546
	/* end block 2 */
	// End Line: 547

	/* begin block 3 */
		// Start line: 553
	/* end block 3 */
	// End Line: 554

	/* begin block 4 */
		// Start line: 553
	/* end block 4 */
	// End Line: 554

void GetTrackToRace__18tTournamentManagerR10tTrackInfo(tTournamentManager *this,tTrackInfo *track)

{
  tTournamentDefinition *ptVar1;
  
  ptVar1 = this->fDefinition;
  blockmove((undefined4 *)
            (&DAT_00001524 +
            (int)((int)ptVar1->fTiers +
                 ((uint)ptVar1->fTournaments
                        [(uint)ptVar1->fTiers[this->fTier].fTournOffset + this->fTournament].
                        fTrackOffset + this->fCurrentTrack) * 0x28)),(undefined4 *)track,0x28);
  track->fDirection = this->fDirection[this->fCurrentTrack];
  track->fMirrored = this->fMirror[this->fCurrentTrack];
  track->fTimeOfDay = this->fTimeOfDay[this->fCurrentTrack];
  track->fWeather = this->fWeather[this->fCurrentTrack];
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ StartNewTournament__18tTournamentManagerUcUc(struct tTournamentManager *this /*$s3*/, unsigned char tier /*$a1*/, unsigned char tournament /*$a2*/)
 // line 264, offset 0x80032784
	/* begin block 1 */
		// Start line: 265
		// Start offset: 0x80032784
		// Variables:
	// 		short i; // $s2
	// 		struct tTourneyInfo *tourn; // $s4
	// 		struct tTrackInfo *track; // $s1

		/* begin block 1.1 */
			// Start line: 265
			// Start offset: 0x80032784
			// Variables:
		// 		struct tTournamentManager *this; // $s3

			/* begin block 1.1.1 */
				// Start line: 265
				// Start offset: 0x80032784
			/* end block 1.1.1 */
			// End offset: 0x80032784
			// End Line: 265
		/* end block 1.1 */
		// End offset: 0x80032784
		// End Line: 265
	/* end block 1 */
	// End offset: 0x80032994
	// End Line: 325

	/* begin block 2 */
		// Start line: 522
	/* end block 2 */
	// End Line: 523

	/* begin block 3 */
		// Start line: 586
	/* end block 3 */
	// End Line: 587

	/* begin block 4 */
		// Start line: 586
	/* end block 4 */
	// End Line: 587

void StartNewTournament__18tTournamentManagerUcUc
               (tTournamentManager *this,uchar tier,uchar tournament)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  tTourneyInfo *ptVar7;
  
  this->fTier = (uint)tier;
  this->fTournament = (uint)tournament;
  this->fCurrentTrack = 0;
  sVar2 = GetNumCompetitors__18tTournamentManager(this);
  this->fNumRacers = (int)sVar2;
  iVar6 = 0;
  ptVar7 = this->fDefinition->fTournaments +
           (uint)this->fDefinition->fTiers[this->fTier].fTournOffset + this->fTournament;
  if (0 < (int)sVar2) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 >> 0x10;
      pcVar4 = &this->fNumTiers + iVar3 * 0x10;
      *(undefined2 *)(pcVar4 + 0x124) = 0;
      *(undefined4 *)(pcVar4 + 0x120) = 0;
      pcVar4[0x11d] = '\0';
      if (iVar3 == 0) {
        *(undefined4 *)(pcVar4 + 0x118) = 0;
      }
      else {
        *(uint *)(pcVar4 + 0x118) = (uint)*(byte *)((int)&ptVar7->fEntranceFee + iVar3 + 3);
      }
      if ((int)(short)iVar6 == 0) {
        (&this->fNumTiers + (int)(short)iVar6 * 0x10)[0x126] = *(char *)&this->fNumRacers;
      }
      else {
        (&this->fNumTiers + (int)(short)iVar6 * 0x10)[0x126] = (char)iVar6;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar6 * 0x10000;
    } while (iVar6 * 0x10000 >> 0x10 < this->fNumRacers);
  }
  iVar6 = 0;
  if (ptVar7->fNumTracks != '\0') {
    iVar3 = 0;
    do {
      puVar5 = &DAT_00001524 +
               (int)((int)this->fDefinition->fTiers +
                    ((uint)ptVar7->fTrackOffset + (iVar3 >> 0x10)) * 0x28);
      bVar1 = puVar5[1];
      pcVar4 = &this->fNumTiers + (iVar3 >> 0x10);
      pcVar4[0xd8] = bVar1;
      if (1 < bVar1) {
        iVar3 = rand();
        pcVar4[0xd8] = (byte)iVar3 & 1;
      }
      bVar1 = puVar5[2];
      pcVar4[0xe8] = bVar1;
      if (1 < bVar1) {
        iVar3 = rand();
        pcVar4[0xe8] = (byte)iVar3 & 1;
      }
      bVar1 = puVar5[3];
      pcVar4[0xf8] = bVar1;
      if (1 < bVar1) {
        iVar3 = rand();
        pcVar4[0xf8] = (byte)iVar3 & 1;
      }
      bVar1 = puVar5[4];
      pcVar4[0x108] = bVar1;
      if (1 < bVar1) {
        iVar3 = rand();
        pcVar4[0x108] = (byte)iVar3 & 1;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar6 * 0x10000;
    } while (iVar6 * 0x10000 >> 0x10 < (int)(uint)ptVar7->fNumTracks);
  }
  this->fCompetitors[0].fIsPlayerCar = '\x01';
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ IsTournamentFinished__18tTournamentManager(struct tTournamentManager *this /*$a1*/)
 // line 337, offset 0x800329bc
	/* begin block 1 */
		// Start line: 338
		// Start offset: 0x800329BC

		/* begin block 1.1 */
			// Start line: 338
			// Start offset: 0x800329BC
			// Variables:
		// 		struct tTournamentManager *this; // $a1

			/* begin block 1.1.1 */
				// Start line: 338
				// Start offset: 0x800329BC
			/* end block 1.1.1 */
			// End offset: 0x800329BC
			// End Line: 338
		/* end block 1.1 */
		// End offset: 0x800329BC
		// End Line: 338
	/* end block 1 */
	// End offset: 0x80032A48
	// End Line: 345

	/* begin block 2 */
		// Start line: 668
	/* end block 2 */
	// End Line: 669

	/* begin block 3 */
		// Start line: 731
	/* end block 3 */
	// End Line: 732

	/* begin block 4 */
		// Start line: 731
	/* end block 4 */
	// End Line: 732

short IsTournamentFinished__18tTournamentManager(tTournamentManager *this)

{
  tTourneyInfo *ptVar1;
  
  ptVar1 = this->fDefinition->fTournaments +
           (uint)this->fDefinition->fTiers[this->fTier].fTournOffset + this->fTournament;
  if ((this->fCurrentTrack < (int)(uint)ptVar1->fNumTracks) &&
     ((ptVar1->fKnockout == '\0' ||
      (this->fCurrentTrack <= (int)(uint)this->fCompetitors[0].fPoints)))) {
    return 0;
  }
  return 1;
}



// decompiled code
// original method signature: 
// int /*$ra*/ tournPointsCompare__FPcT0(char *p1 /*$a0*/, char *p2 /*$a1*/)
 // line 349, offset 0x80032a50
	/* begin block 1 */
		// Start line: 350
		// Start offset: 0x80032A50
		// Variables:
	// 		int result; // $v1
	// 		struct Car_tStats *dummyCars; // $t0

		/* begin block 1.1 */
			// Start line: 350
			// Start offset: 0x80032A50

			/* begin block 1.1.1 */
				// Start line: 350
				// Start offset: 0x80032A50
			/* end block 1.1.1 */
			// End offset: 0x80032A50
			// End Line: 350
		/* end block 1.1 */
		// End offset: 0x80032A50
		// End Line: 350

		/* begin block 1.2 */
			// Start line: 350
			// Start offset: 0x80032A50

			/* begin block 1.2.1 */
				// Start line: 350
				// Start offset: 0x80032A50
			/* end block 1.2.1 */
			// End offset: 0x80032A50
			// End Line: 350
		/* end block 1.2 */
		// End offset: 0x80032A50
		// End Line: 350
	/* end block 1 */
	// End offset: 0x80032AD4
	// End Line: 366

	/* begin block 2 */
		// Start line: 750
	/* end block 2 */
	// End Line: 751

	/* begin block 3 */
		// Start line: 755
	/* end block 3 */
	// End Line: 756

	/* begin block 4 */
		// Start line: 755
	/* end block 4 */
	// End Line: 756

int tournPointsCompare__FPcT0(char *p1,char *p2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(byte)*p2;
  uVar2 = (uint)(byte)*p1;
  iVar1 = (uint)tournamentManager.fCompetitors[uVar3].fPoints -
          (uint)tournamentManager.fCompetitors[uVar2].fPoints;
  if ((iVar1 == 0) &&
     (iVar1 = (int)tournamentManager.fCompetitors[uVar3].fIsPlayerCar -
              (int)tournamentManager.fCompetitors[uVar2].fIsPlayerCar, iVar1 == 0)) {
    iVar1 = (&Cars_gNewCarStatsList)[uVar2].finalPosition -
            (&Cars_gNewCarStatsList)[uVar3].finalPosition;
  }
  return iVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTournFinishMoney__18tTournamentManager(struct tTournamentManager *this /*$s2*/)
 // line 370, offset 0x80032adc
	/* begin block 1 */
		// Start line: 371
		// Start offset: 0x80032ADC
		// Variables:
	// 		unsigned char i; // $s0
	// 		struct tTourneyInfo *tourn; // $s3

		/* begin block 1.1 */
			// Start line: 371
			// Start offset: 0x80032ADC
			// Variables:
		// 		struct tTournamentManager *this; // $s2

			/* begin block 1.1.1 */
				// Start line: 371
				// Start offset: 0x80032ADC
			/* end block 1.1.1 */
			// End offset: 0x80032ADC
			// End Line: 371
		/* end block 1.1 */
		// End offset: 0x80032ADC
		// End Line: 371
	/* end block 1 */
	// End offset: 0x80032BF0
	// End Line: 399

	/* begin block 2 */
		// Start line: 792
	/* end block 2 */
	// End Line: 793

	/* begin block 3 */
		// Start line: 797
	/* end block 3 */
	// End Line: 798

	/* begin block 4 */
		// Start line: 797
	/* end block 4 */
	// End Line: 798

void UpdateTournFinishMoney__18tTournamentManager(tTournamentManager *this)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  tTourneyInfo *ptVar4;
  
  ptVar4 = this->fDefinition->fTournaments +
           (uint)this->fDefinition->fTiers[this->fTier].fTournOffset + this->fTournament;
  this->fPrevBestPlacement = this->fBestPlacement[(int)ptVar4->fTournamentID];
  if (ptVar4->fKnockout == '\0') {
    bVar2 = 0;
    uVar3 = 0;
    do {
      if (this->fRanking[uVar3] == '\0') {
        lVar1 = GetTournamentFinishPrize__18tTournamentManagers(this,(ushort)bVar2);
        (this->fAwards).fTournMoney = (this->fAwards).fTournMoney + lVar1;
        if ((int)uVar3 < (int)(&this->fNumTiers + (int)ptVar4->fTournamentID)[0x1f0]) {
          (&this->fNumTiers + (int)ptVar4->fTournamentID)[0x1f0] = bVar2 + 1;
        }
      }
      bVar2 = bVar2 + 1;
      uVar3 = (uint)bVar2;
    } while (bVar2 < 6);
  }
  else {
    lVar1 = GetTournamentFinishPrize__18tTournamentManagers
                      (this,(ushort)this->fCompetitors[0].fPosition - 1);
    (this->fAwards).fTournMoney = (this->fAwards).fTournMoney + lVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTrackFinishMoney__18tTournamentManager(struct tTournamentManager *this /*$s0*/)
 // line 405, offset 0x80032c0c
	/* begin block 1 */
		// Start line: 406
		// Start offset: 0x80032C0C
		// Variables:
	// 		struct Car_tStats *dummyCars; // $a0

		/* begin block 1.1 */
			// Start line: 406
			// Start offset: 0x80032C0C

			/* begin block 1.1.1 */
				// Start line: 406
				// Start offset: 0x80032C0C
			/* end block 1.1.1 */
			// End offset: 0x80032C0C
			// End Line: 406
		/* end block 1.1 */
		// End offset: 0x80032C0C
		// End Line: 406
	/* end block 1 */
	// End offset: 0x80032C5C
	// End Line: 415

	/* begin block 2 */
		// Start line: 860
	/* end block 2 */
	// End Line: 861

	/* begin block 3 */
		// Start line: 867
	/* end block 3 */
	// End Line: 868

	/* begin block 4 */
		// Start line: 867
	/* end block 4 */
	// End Line: 868

void UpdateTrackFinishMoney__18tTournamentManager(tTournamentManager *this)

{
  long lVar1;
  
  if (Cars_gNewCarStatsList.finalFinishType == 2) {
    lVar1 = GetTrackFinishPrize__18tTournamentManagers
                      (this,(short)(((uint)(ushort)Cars_gNewCarStatsList.finalPosition - 1) *
                                    0x10000 >> 0x10));
    (this->fAwards).fMoney = (this->fAwards).fMoney + lVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcTrackFinishDamageBill__18tTournamentManagerbRlT2(struct tTournamentManager *this /*$a0*/, void * recalculate /*$a1*/, long *bill /*$s1*/, long *bonus /*$s2*/)
 // line 422, offset 0x80032c6c
	/* begin block 1 */
		// Start line: 423
		// Start offset: 0x80032C6C
		// Variables:
	// 		static long retbill; // offset 0x0
	// 		static long retbonus; // offset 0x4
	// 		struct Car_tStats *dummyCars; // $s0
	// 		struct tCarInfo carInfo; // stack offset -224
	// 		int damage; // $v1
	// 		long totalcarprice; // $a1

		/* begin block 1.1 */
			// Start line: 423
			// Start offset: 0x80032C6C

			/* begin block 1.1.1 */
				// Start line: 434
				// Start offset: 0x80032C8C

				/* begin block 1.1.1.1 */
					// Start line: 434
					// Start offset: 0x80032C8C

					/* begin block 1.1.1.1.1 */
						// Start line: 434
						// Start offset: 0x80032C8C
					/* end block 1.1.1.1.1 */
					// End offset: 0x80032C8C
					// End Line: 434
				/* end block 1.1.1.1 */
				// End offset: 0x80032C8C
				// End Line: 434

				/* begin block 1.1.1.2 */
					// Start line: 434
					// Start offset: 0x80032C8C
					// Variables:
				// 		int i; // $v1
				/* end block 1.1.1.2 */
				// End offset: 0x80032CFC
				// End Line: 444
			/* end block 1.1.1 */
			// End offset: 0x80032DF8
			// End Line: 460
		/* end block 1.1 */
		// End offset: 0x80032DF8
		// End Line: 460
	/* end block 1 */
	// End offset: 0x80032DF8
	// End Line: 464

	/* begin block 2 */
		// Start line: 893
	/* end block 2 */
	// End Line: 894

	/* begin block 3 */
		// Start line: 901
	/* end block 3 */
	// End Line: 902

	/* begin block 4 */
		// Start line: 901
	/* end block 4 */
	// End Line: 902

void CalcTrackFinishDamageBill__18tTournamentManagerbRlT2
               (tTournamentManager *this,void *recalculate,long *bill,long *bonus)

{
  uint uVar1;
  int iVar2;
  tCarInfo tStack224;
  
  if (recalculate != (void *)0x0) {
    GetGarageCar__11tCarManagersR8tCarInfos
              (&carManager,(ushort)(byte)frontEnd.garageCar[0],&tStack224,0);
    uVar1 = 0;
    iVar2 = 4;
    do {
      if (((uint)tStack224.fUpgrades & (int)(short)(1 << (uVar1 & 0x1f))) != 0) {
        tStack224.fPrices[0] = tStack224.fPrices[0] + *(int *)((int)tStack224.fPrices + iVar2);
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 4;
    } while ((int)uVar1 < 2);
    iVar2 = Cars_gNewCarStatsList.finalDamage;
    if (Cars_gNewCarStatsList.finalDamage < 0) {
      iVar2 = Cars_gNewCarStatsList.finalDamage + 0xffff;
    }
    if ((iVar2 >> 0x10 == 0) && (Cars_gNewCarStatsList.finalPosition < 4)) {
      DAT_80051a60 = 0;
      DAT_80051a64 = tStack224.fPrices[0] / 0x14;
      if (Cars_gNewCarStatsList.finalPosition == 2) {
        DAT_80051a64 = (tStack224.fPrices[0] * 3) / 100;
      }
      else {
        if (Cars_gNewCarStatsList.finalPosition == 3) {
          DAT_80051a64 = tStack224.fPrices[0] / 100;
        }
      }
    }
    else {
      DAT_80051a64 = 0;
      DAT_80051a60 = (tStack224.fPrices[0] * (iVar2 >> 0x10) * 3) / 10000;
    }
  }
  *bill = DAT_80051a60;
  *bonus = DAT_80051a64;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateTrackFinishPoints__18tTournamentManager(struct tTournamentManager *this /*$s0*/)
 // line 481, offset 0x80032e30
	/* begin block 1 */
		// Start line: 482
		// Start offset: 0x80032E30
		// Variables:
	// 		int i; // $a0
	// 		short k; // $a3
	// 		struct Car_tStats *dummyCars; // $t1
	// 		short numCompetitors; // $t0

		/* begin block 1.1 */
			// Start line: 482
			// Start offset: 0x80032E30
			// Variables:
		// 		struct tTournamentManager *this; // $s0

			/* begin block 1.1.1 */
				// Start line: 482
				// Start offset: 0x80032E30
			/* end block 1.1.1 */
			// End offset: 0x80032E30
			// End Line: 482
		/* end block 1.1 */
		// End offset: 0x80032E30
		// End Line: 482

		/* begin block 1.2 */
			// Start line: 482
			// Start offset: 0x80032E30

			/* begin block 1.2.1 */
				// Start line: 482
				// Start offset: 0x80032E30
			/* end block 1.2.1 */
			// End offset: 0x80032E30
			// End Line: 482
		/* end block 1.2 */
		// End offset: 0x80032E30
		// End Line: 482
	/* end block 1 */
	// End offset: 0x80033038
	// End Line: 554

	/* begin block 2 */
		// Start line: 1015
	/* end block 2 */
	// End Line: 1016

	/* begin block 3 */
		// Start line: 1026
	/* end block 3 */
	// End Line: 1027

	/* begin block 4 */
		// Start line: 1026
	/* end block 4 */
	// End Line: 1027

void UpdateTrackFinishPoints__18tTournamentManager(tTournamentManager *this)

{
  short sVar1;
  int iVar2;
  tTournamentManager *ptVar3;
  int iVar4;
  Car_tStats *pCVar5;
  short sVar6;
  
  sVar1 = GetNumCompetitors__18tTournamentManager(this);
  sVar6 = 0;
  pCVar5 = &Cars_gNewCarStatsList;
  if (this->fDefinition->fTournaments
      [(uint)this->fDefinition->fTiers[this->fTier].fTournOffset + this->fTournament].fKnockout ==
      '\0') {
    iVar4 = 0;
    ptVar3 = this;
    if (0 < (int)sVar1) {
      do {
        if ((pCVar5->finalPosition - 1U < 6) && (pCVar5->finalFinishType == 2)) {
          ptVar3->fCompetitors[0].fPoints =
               ptVar3->fCompetitors[0].fPoints +
               (ushort)(byte)(&this->fPrevBestPlacement)[pCVar5->finalPosition];
        }
        iVar4 = iVar4 + 1;
        pCVar5 = pCVar5 + 1;
        ptVar3 = (tTournamentManager *)&ptVar3->fNumRacers;
      } while (iVar4 < (int)sVar1);
    }
    iVar2 = 5;
    iVar4 = (int)&this->fTier + 1;
    do {
      *(undefined *)(iVar4 + 0x237) = (char)iVar2;
      iVar2 = iVar2 + -1;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar2);
    qsort(this->fRanking,(int)sVar1,1,tournPointsCompare__FPcT0);
    ptVar3 = this;
    iVar4 = 0;
    do {
      iVar2 = iVar4 + 1;
      this->fCompetitors[(uint)ptVar3->fRanking[0]].fPosition = (uchar)iVar2;
      ptVar3 = (tTournamentManager *)(&this->field_0x1 + iVar4);
      iVar4 = iVar2;
    } while (iVar2 < 6);
  }
  else {
    iVar4 = 0;
    ptVar3 = this;
    if (0 < (int)sVar1) {
      do {
        if (ptVar3->fCompetitors[0].fEliminated == (void *)0x0) {
          iVar2 = (int)sVar6;
          if (((&Cars_gNewCarStatsList)[iVar2].finalPosition - 1U < 6) &&
             ((&Cars_gNewCarStatsList)[iVar2].finalFinishType == 2)) {
            if ((&Cars_gNewCarStatsList)[iVar2].finalPosition < this->fNumRacers) {
              ptVar3->fCompetitors[0].fPoints = ptVar3->fCompetitors[0].fPoints + 1;
            }
            else {
              *(undefined **)&ptVar3->fCompetitors[0].fEliminated = &DAT_00000001;
            }
            ptVar3->fCompetitors[0].fPosition =
                 *(uchar *)&(&Cars_gNewCarStatsList)[iVar2].finalPosition;
          }
          sVar6 = sVar6 + 1;
        }
        iVar4 = iVar4 + 1;
        ptVar3 = (tTournamentManager *)&ptVar3->fNumRacers;
      } while (iVar4 < (int)sVar1);
    }
    this->fNumRacers = this->fNumRacers + -1;
  }
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ AdvanceToNextTrack__18tTournamentManager(struct tTournamentManager *this /*$s1*/)
 // line 569, offset 0x80033048
	/* begin block 1 */
		// Start line: 570
		// Start offset: 0x80033048
		// Variables:
	// 		struct tTourneyInfo *currentTourney; // $s2
	// 		struct tTourneyInfo *tourn; // $v0
	// 		struct tCarInfo *carInfo; // $s3
	// 		struct tTierInfo *currentTier; // $a1
	// 		short i; // $a0

		/* begin block 1.1 */
			// Start line: 570
			// Start offset: 0x80033048
			// Variables:
		// 		struct tTournamentManager *this; // $s1

			/* begin block 1.1.1 */
				// Start line: 570
				// Start offset: 0x80033048
			/* end block 1.1.1 */
			// End offset: 0x80033048
			// End Line: 570
		/* end block 1.1 */
		// End offset: 0x80033048
		// End Line: 570

		/* begin block 1.2 */
			// Start line: 570
			// Start offset: 0x80033048

			/* begin block 1.2.1 */
				// Start line: 578
				// Start offset: 0x800330C4

				/* begin block 1.2.1.1 */
					// Start line: 600
					// Start offset: 0x80033108

					/* begin block 1.2.1.1.1 */
						// Start line: 603
						// Start offset: 0x8003312C

						/* begin block 1.2.1.1.1.1 */
							// Start line: 631
							// Start offset: 0x80033204

							/* begin block 1.2.1.1.1.1.1 */
								// Start line: 632
								// Start offset: 0x80033218

								/* begin block 1.2.1.1.1.1.1.1 */
									// Start line: 655
									// Start offset: 0x800332D0

									/* begin block 1.2.1.1.1.1.1.1.1 */
										// Start line: 659
										// Start offset: 0x800332FC

										/* begin block 1.2.1.1.1.1.1.1.1.1 */
											// Start line: 672
											// Start offset: 0x80033394

											/* begin block 1.2.1.1.1.1.1.1.1.1.1 */
												// Start line: 673
												// Start offset: 0x800333A4
												// Variables:
											// 		int numGarageCars; // $s0
											/* end block 1.2.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x80033468
											// End Line: 693
										/* end block 1.2.1.1.1.1.1.1.1.1 */
										// End offset: 0x80033468
										// End Line: 693
									/* end block 1.2.1.1.1.1.1.1.1 */
									// End offset: 0x80033468
									// End Line: 693
								/* end block 1.2.1.1.1.1.1.1 */
								// End offset: 0x80033468
								// End Line: 693
							/* end block 1.2.1.1.1.1.1 */
							// End offset: 0x80033468
							// End Line: 693
						/* end block 1.2.1.1.1.1 */
						// End offset: 0x80033468
						// End Line: 693
					/* end block 1.2.1.1.1 */
					// End offset: 0x80033468
					// End Line: 693
				/* end block 1.2.1.1 */
				// End offset: 0x80033468
				// End Line: 693
			/* end block 1.2.1 */
			// End offset: 0x8003346C
			// End Line: 699
		/* end block 1.2 */
		// End offset: 0x8003346C
		// End Line: 699
	/* end block 1 */
	// End offset: 0x8003346C
	// End Line: 701

	/* begin block 2 */
		// Start line: 1192
	/* end block 2 */
	// End Line: 1193

	/* begin block 3 */
		// Start line: 1208
	/* end block 3 */
	// End Line: 1209

	/* begin block 4 */
		// Start line: 1208
	/* end block 4 */
	// End Line: 1209

short AdvanceToNextTrack__18tTournamentManager(tTournamentManager *this)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  tCarInfo *ptVar4;
  undefined *puVar5;
  int iVar6;
  tTournamentDefinition *ptVar7;
  tTierInfo *ptVar8;
  tTourneyInfo *ptVar9;
  
  ptVar9 = this->fDefinition->fTournaments +
           (uint)this->fDefinition->fTiers[this->fTier].fTournOffset + this->fTournament;
  sVar2 = -1;
  if (this->fCurrentTrack <= (int)((uint)ptVar9->fNumTracks - 1)) {
    (this->fAwards).fMoney = 0;
    (this->fAwards).fTournMoney = 0;
    (this->fAwards).fActivateFlags = 0;
    (this->fAwards).fAwardCar = (void *)0x0;
    UpdateTrackFinishMoney__18tTournamentManager(this);
    UpdateTrackFinishPoints__18tTournamentManager(this);
    if (this->fCurrentTrack == (uint)ptVar9->fNumTracks - 1) {
      UpdateTournFinishMoney__18tTournamentManager(this);
      CalcTierFinishPrize__18tTournamentManager(this);
    }
    iVar3 = this->fCurrentTrack + 1;
    this->fCurrentTrack = iVar3;
    if ((int)(uint)ptVar9->fNumTracks <= iVar3) {
      bVar1 = this->fCompetitors[0].fPosition;
      (this->fAwards).fAwardCarGarageFull = (void *)0x0;
      (this->fAwards).fCompletedGarageFull = (void *)0x0;
      if (bVar1 < 4) {
        if ((ptVar9->fActivateFlags & 1) != 0) {
          (this->fAwards).fActivateFlags = (this->fAwards).fActivateFlags | 1;
          (this->fAwards).fActivateTrack = ptVar9->fActivatedTrack;
        }
        if ((ptVar9->fActivateFlags & 2) != 0) {
          (this->fAwards).fActivateFlags = (this->fAwards).fActivateFlags | 2;
          (this->fAwards).fActivateCarClass = (uint)ptVar9->fActivatedCarClass;
        }
        if ((ptVar9->fActivateFlags & 4) != 0) {
          (this->fAwards).fActivateFlags = (this->fAwards).fActivateFlags | 4;
          (this->fAwards).fActivateCar = (uint)ptVar9->fActivatedCar;
        }
        if ((ptVar9->fActivateFlags & 8) != 0) {
          (this->fAwards).fActivateFlags = (this->fAwards).fActivateFlags | 8;
          (this->fAwards).fActivateTrackClass = (uint)ptVar9->fActivatedTrackClass;
        }
        (this->fAwards).fCompletedTier = (void *)0x0;
      }
      if (this->fCompetitors[0].fPosition < 2) {
        if (ptVar9->fAwardCar != '\0') {
          ptVar4 = GetCarFromID__11tCarManagers(&carManager,(ushort)ptVar9->fAwardCarModel);
          *(undefined **)&(this->fAwards).fAwardCar = &DAT_00000001;
          (this->fAwards).fAwardCarModel = (uint)ptVar9->fAwardCarModel;
          (this->fAwards).fAwardCarColor = ptVar4->fDefaultColor;
          (this->fAwards).fAwardCarUpgrades = ptVar9->fAwardCarUpgrades;
          sVar2 = GetNumOwnedCars__11tCarManagers(&carManager,0);
          if (0x1f < sVar2) {
            *(undefined **)&(this->fAwards).fAwardCarGarageFull = &DAT_00000001;
            (this->fAwards).fTournMoney = (this->fAwards).fTournMoney + ptVar4->fPrices[0];
            (this->fAwards).fAwardCarBonusMoney = ptVar4->fPrices[0];
          }
        }
        if ((ptVar9->fActivateFlags & 0x10) != 0) {
          (this->fAwards).fActivateFlags = (this->fAwards).fActivateFlags | 0x10;
          (this->fAwards).fActivateCheat = (uint)ptVar9->fActivatedCheat;
        }
        (this->fAwards).fCompletedTier = (void *)0x0;
        this->fBestPlacement[(int)ptVar9->fTournamentID] = '\x01';
        puVar5 = (undefined *)
                 FECheat_IsCheatEnabled__F10tCheatCode(this->fTier + cheat_FinishedTournament);
        if (puVar5 != &DAT_00000001) {
          iVar3 = this->fTier;
          *(undefined **)&(this->fAwards).fCompletedTier = &DAT_00000001;
          ptVar7 = this->fDefinition;
          ptVar8 = ptVar7->fTiers + iVar3;
          iVar3 = 0;
          if (ptVar8->fNumTournaments != '\0') {
            iVar6 = 0;
            do {
              iVar3 = iVar3 + 1;
              if (this->fBestPlacement
                  [(int)ptVar7->fTournaments[(uint)(&ptVar8->fNumTournaments)[2] + (iVar6 >> 0x10)].
                        fTournamentID] != '\x01') {
                (this->fAwards).fCompletedTier = (void *)0x0;
              }
              iVar6 = iVar3 * 0x10000;
            } while (iVar3 * 0x10000 >> 0x10 < (int)(uint)ptVar8->fNumTournaments);
          }
          if ((this->fAwards).fCompletedTier != (void *)0x0) {
            sVar2 = GetNumOwnedCars__11tCarManagers(&carManager,0);
            iVar3 = (int)sVar2;
            if ((this->fAwards).fAwardCar != (void *)0x0) {
              iVar3 = iVar3 + 1;
            }
            FECheat_ActivateBonus__F10tCheatCode(this->fTier + cheat_FinishedTournament);
            (this->fAwards).fCompletedCar = this->fTier + cm_BonusCar1;
            ptVar4 = GetCarFromID__11tCarManagers
                               (&carManager,*(short *)&(this->fAwards).fCompletedCar);
            SetCarAvailable__11tCarManager10tCarModelsb
                      (&carManager,(this->fAwards).fCompletedCar,&DAT_00000001);
            SetCarViewable__11tCarManager10tCarModelsb
                      (&carManager,(this->fAwards).fCompletedCar,&DAT_00000001);
            if (iVar3 < 0x20) {
              PurchaseCar__11tCarManagersss
                        (&carManager,*(short *)&(this->fAwards).fCompletedCar,
                         (ushort)ptVar4->fDefaultColor,0);
            }
            else {
              *(undefined **)&(this->fAwards).fCompletedGarageFull = &DAT_00000001;
              iVar6 = ptVar4->fPrices[0];
              iVar3 = this->fMoney;
              (this->fAwards).fCompletedBonusMoney = iVar6;
              this->fMoney = iVar3 + iVar6;
            }
            (this->fAwards).fCompletedText = *(short *)&this->fTier + 0x3d9;
          }
        }
      }
    }
    sVar2 = (short)this->fCurrentTrack;
  }
  return sVar2;
}



// decompiled code
// original method signature: 
// short /*$ra*/ GetLastTrackRaced__18tTournamentManager(struct tTournamentManager *this /*$a0*/)
 // line 706, offset 0x8003348c
	/* begin block 1 */
		// Start line: 707
		// Start offset: 0x8003348C

		/* begin block 1.1 */
			// Start line: 707
			// Start offset: 0x8003348C
			// Variables:
		// 		struct tTournamentManager *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 707
				// Start offset: 0x8003348C
			/* end block 1.1.1 */
			// End offset: 0x8003348C
			// End Line: 707
		/* end block 1.1 */
		// End offset: 0x8003348C
		// End Line: 707
	/* end block 1 */
	// End offset: 0x8003348C
	// End Line: 707

	/* begin block 2 */
		// Start line: 1492
	/* end block 2 */
	// End Line: 1493

	/* begin block 3 */
		// Start line: 1498
	/* end block 3 */
	// End Line: 1499

	/* begin block 4 */
		// Start line: 1498
	/* end block 4 */
	// End Line: 1499

short GetLastTrackRaced__18tTournamentManager(tTournamentManager *this)

{
  tTournamentDefinition *ptVar1;
  
  ptVar1 = this->fDefinition;
  return (short)ptVar1->fTracks
                [(uint)ptVar1->fTournaments
                       [(uint)ptVar1->fTiers[this->fTier].fTournOffset + this->fTournament].
                       fTrackOffset + this->fCurrentTrack + -1].fTrackNumber;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SaveTournament__18tTournamentManagerR15tSaveTournament(struct tTournamentManager *this /*$a3*/, struct tSaveTournament *save /*$a1*/)
 // line 744, offset 0x800334fc
	/* begin block 1 */
		// Start line: 745
		// Start offset: 0x800334FC
		// Variables:
	// 		short i; // $a2
	/* end block 1 */
	// End offset: 0x8003353C
	// End Line: 763

	/* begin block 2 */
		// Start line: 1564
	/* end block 2 */
	// End Line: 1565

	/* begin block 3 */
		// Start line: 1574
	/* end block 3 */
	// End Line: 1575

	/* begin block 4 */
		// Start line: 1574
	/* end block 4 */
	// End Line: 1575

void SaveTournament__18tTournamentManagerR15tSaveTournament
               (tTournamentManager *this,tSaveTournament *save)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  save->fSaveMoney = this->fMoney;
  do {
    sVar1 = (short)iVar2;
    iVar2 = iVar2 + 1;
    save->fSaveBestPlacement[(int)sVar1] = this->fBestPlacement[(int)sVar1];
  } while (iVar2 * 0x10000 >> 0x10 < 0x40);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadTournament__18tTournamentManagerR15tSaveTournament(struct tTournamentManager *this /*$a3*/, struct tSaveTournament *load /*$a1*/)
 // line 773, offset 0x80033544
	/* begin block 1 */
		// Start line: 774
		// Start offset: 0x80033544
		// Variables:
	// 		short i; // $a2
	/* end block 1 */
	// End offset: 0x80033584
	// End Line: 792

	/* begin block 2 */
		// Start line: 1632
	/* end block 2 */
	// End Line: 1633

	/* begin block 3 */
		// Start line: 1643
	/* end block 3 */
	// End Line: 1644

	/* begin block 4 */
		// Start line: 1643
	/* end block 4 */
	// End Line: 1644

void LoadTournament__18tTournamentManagerR15tSaveTournament
               (tTournamentManager *this,tSaveTournament *load)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  this->fMoney = load->fSaveMoney;
  do {
    sVar1 = (short)iVar2;
    iVar2 = iVar2 + 1;
    this->fBestPlacement[(int)sVar1] = load->fSaveBestPlacement[(int)sVar1];
  } while (iVar2 * 0x10000 >> 0x10 < 0x40);
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ GetNumCompetitors__18tTournamentManager(struct tTournamentManager *this /*$a0*/)
 // line 803, offset 0x8003358c
	/* begin block 1 */
		// Start line: 804
		// Start offset: 0x8003358C

		/* begin block 1.1 */
			// Start line: 804
			// Start offset: 0x8003358C
			// Variables:
		// 		struct tTournamentManager *this; // $a0

			/* begin block 1.1.1 */
				// Start line: 804
				// Start offset: 0x8003358C
			/* end block 1.1.1 */
			// End offset: 0x8003358C
			// End Line: 804
		/* end block 1.1 */
		// End offset: 0x8003358C
		// End Line: 804
	/* end block 1 */
	// End offset: 0x8003358C
	// End Line: 804

	/* begin block 2 */
		// Start line: 1704
	/* end block 2 */
	// End Line: 1705

	/* begin block 3 */
		// Start line: 1716
	/* end block 3 */
	// End Line: 1717

	/* begin block 4 */
		// Start line: 1716
	/* end block 4 */
	// End Line: 1717

short GetNumCompetitors__18tTournamentManager(tTournamentManager *this)

{
  return (short)(ushort)this->fDefinition->fTournaments
                        [(uint)this->fDefinition->fTiers[this->fTier].fTournOffset +
                         this->fTournament].fNumCars;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateCarLineup__18tTournamentManager(struct tTournamentManager *this /*$s0*/)
 // line 812, offset 0x800335d8
	/* begin block 1 */
		// Start line: 813
		// Start offset: 0x800335D8
		// Variables:
	// 		short i; // $a1
	// 		short k; // $a2
	/* end block 1 */
	// End offset: 0x80033678
	// End Line: 835

	/* begin block 2 */
		// Start line: 1727
	/* end block 2 */
	// End Line: 1728

	/* begin block 3 */
		// Start line: 1734
	/* end block 3 */
	// End Line: 1735

	/* begin block 4 */
		// Start line: 1734
	/* end block 4 */
	// End Line: 1735

void UpdateCarLineup__18tTournamentManager(tTournamentManager *this)

{
  short sVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  short sVar6;
  
  sVar1 = GetNumCompetitors__18tTournamentManager(this);
  sVar6 = 0;
  iVar5 = 0;
  if (0 < (int)sVar1) {
    iVar2 = 0;
    do {
      pcVar4 = &this->fNumTiers + (iVar2 >> 0xc);
      if (*(int *)(pcVar4 + 0x120) == 0) {
        pcVar3 = &this->fNumTiers + (int)sVar6 * 0x14;
        *(uint *)(pcVar3 + 0x178) = (uint)(pcVar4[0x11d] != '\0');
        *(undefined4 *)(pcVar3 + 0x17c) = *(undefined4 *)(pcVar4 + 0x118);
        sVar6 = sVar6 + 1;
        pcVar3[0x180] = pcVar4[0x126];
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar5 * 0x10000;
    } while (iVar5 * 0x10000 >> 0x10 < (int)sVar1);
  }
  return;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GetTrackFinishPrize__18tTournamentManagers(struct tTournamentManager *this /*$s2*/, short position /*$s1*/)
 // line 844, offset 0x80033688
	/* begin block 1 */
		// Start line: 845
		// Start offset: 0x80033688
		// Variables:
	// 		struct tTourneyInfo *currentTourney; // $s3
	// 		long result; // $s0
	// 		struct tCarInfo carInfo; // stack offset -400
	// 		long carPrice; // $a1
	// 		int openClassAdjust[7][6]; // stack offset -192

		/* begin block 1.1 */
			// Start line: 851
			// Start offset: 0x800336E8

			/* begin block 1.1.1 */
				// Start line: 863
				// Start offset: 0x80033708

				/* begin block 1.1.1.1 */
					// Start line: 863
					// Start offset: 0x80033708
					// Variables:
				// 		struct tTournamentManager *this; // $s2

					/* begin block 1.1.1.1.1 */
						// Start line: 863
						// Start offset: 0x80033708
					/* end block 1.1.1.1.1 */
					// End offset: 0x80033708
					// End Line: 863
				/* end block 1.1.1.1 */
				// End offset: 0x80033708
				// End Line: 863
			/* end block 1.1.1 */
			// End offset: 0x80033840
			// End Line: 889
		/* end block 1.1 */
		// End offset: 0x80033840
		// End Line: 889
	/* end block 1 */
	// End offset: 0x80033840
	// End Line: 891

	/* begin block 2 */
		// Start line: 1789
	/* end block 2 */
	// End Line: 1790

	/* begin block 3 */
		// Start line: 1799
	/* end block 3 */
	// End Line: 1800

	/* begin block 4 */
		// Start line: 1799
	/* end block 4 */
	// End Line: 1800

long GetTrackFinishPrize__18tTournamentManagers(tTournamentManager *this,short position)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined **ppuVar3;
  long lVar4;
  int *piVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  tTourneyInfo *ptVar10;
  tCarInfo tStack400;
  int local_c0 [42];
  
  uVar9 = 0;
  ppuVar1 = (undefined **)&DAT_800115b0;
  piVar2 = local_c0;
  do {
    piVar5 = piVar2;
    ppuVar3 = ppuVar1;
    puVar6 = ppuVar3[1];
    puVar7 = ppuVar3[2];
    puVar8 = ppuVar3[3];
    *(undefined **)piVar5 = *ppuVar3;
    *(undefined **)(piVar5 + 1) = puVar6;
    *(undefined **)(piVar5 + 2) = puVar7;
    *(undefined **)(piVar5 + 3) = puVar8;
    ppuVar1 = ppuVar3 + 4;
    piVar2 = piVar5 + 4;
  } while (ppuVar3 + 4 != PTR_ARRAY_800115d0 + 0x20);
  puVar6 = ppuVar3[5];
  *(undefined **)(piVar5 + 4) = PTR_ARRAY_800115d0[32];
  *(undefined **)(piVar5 + 5) = puVar6;
  lVar4 = 0;
  if ((ushort)position < 6) {
    ptVar10 = this->fDefinition->fTournaments +
              (uint)this->fDefinition->fTiers[this->fTier].fTournOffset + this->fTournament;
    if ((ptVar10->fOpponentCarClass == '\n') &&
       (GetGarageCar__11tCarManagersR8tCarInfos
                  (&carManager,(ushort)(byte)frontEnd.garageCar[0],&tStack400,0),
       tStack400.fCarClass < 7)) {
      if ((tStack400.fUpgrades & 1) != 0) {
        tStack400.fPrices[0] = tStack400.fPrices[0] + tStack400.fPrices[1];
      }
      if ((tStack400.fUpgrades & 2) != 0) {
        tStack400.fPrices[0] = tStack400.fPrices[0] + tStack400.fPrices[2];
      }
      if ((tStack400.fUpgrades & 4) != 0) {
        tStack400.fPrices[0] = tStack400.fPrices[0] + tStack400.fPrices[3];
      }
      uVar9 = fixedmult(*(int *)((int)local_c0 +
                                ((int)((uint)(ushort)position << 0x10) >> 0xe) +
                                (uint)tStack400.fCarClass * 0x18),tStack400.fPrices[0]);
    }
    lVar4 = uVar9 + *(int *)(&DAT_0000152c +
                            (int)this->fDefinition->fTiers +
                            ((int)((uint)(ushort)position << 0x10) >> 0xe) +
                            ((uint)ptVar10->fTrackOffset + this->fCurrentTrack) * 0x28);
  }
  return lVar4;
}



// decompiled code
// original method signature: 
// long /*$ra*/ GetTournamentFinishPrize__18tTournamentManagers(struct tTournamentManager *this /*$a2*/, short position /*$a1*/)
 // line 897, offset 0x80033860
	/* begin block 1 */
		// Start line: 898
		// Start offset: 0x80033860

		/* begin block 1.1 */
			// Start line: 898
			// Start offset: 0x80033860

			/* begin block 1.1.1 */
				// Start line: 901
				// Start offset: 0x80033870

				/* begin block 1.1.1.1 */
					// Start line: 901
					// Start offset: 0x80033870
					// Variables:
				// 		struct tTournamentManager *this; // $a2

					/* begin block 1.1.1.1.1 */
						// Start line: 901
						// Start offset: 0x80033870
					/* end block 1.1.1.1.1 */
					// End offset: 0x80033870
					// End Line: 901
				/* end block 1.1.1.1 */
				// End offset: 0x80033870
				// End Line: 901
			/* end block 1.1.1 */
			// End offset: 0x80033878
			// End Line: 906
		/* end block 1.1 */
		// End offset: 0x80033878
		// End Line: 906
	/* end block 1 */
	// End offset: 0x800338CC
	// End Line: 906

	/* begin block 2 */
		// Start line: 1905
	/* end block 2 */
	// End Line: 1906

	/* begin block 3 */
		// Start line: 1912
	/* end block 3 */
	// End Line: 1913

	/* begin block 4 */
		// Start line: 1912
	/* end block 4 */
	// End Line: 1913

	/* begin block 5 */
		// Start line: 1915
	/* end block 5 */
	// End Line: 1916

long GetTournamentFinishPrize__18tTournamentManagers(tTournamentManager *this,short position)

{
  if (5 < (ushort)position) {
    return 0;
  }
  return *(long *)((int)this->fDefinition->fTournaments
                        [(uint)this->fDefinition->fTiers[this->fTier].fTournOffset +
                         this->fTournament].fPrize + ((int)((uint)(ushort)position << 0x10) >> 0xe))
  ;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetAwardInformation__18tTournamentManagerR17tAwardInformation(struct tTournamentManager *this /*$a0*/, struct tAwardInformation *info /*$a1*/)
 // line 913, offset 0x800338d4
	/* begin block 1 */
		// Start line: 914
		// Start offset: 0x800338D4
	/* end block 1 */
	// End offset: 0x80033908
	// End Line: 915

	/* begin block 2 */
		// Start line: 1938
	/* end block 2 */
	// End Line: 1939

	/* begin block 3 */
		// Start line: 1946
	/* end block 3 */
	// End Line: 1947

	/* begin block 4 */
		// Start line: 1946
	/* end block 4 */
	// End Line: 1947

	/* begin block 5 */
		// Start line: 1947
	/* end block 5 */
	// End Line: 1948

	/* begin block 6 */
		// Start line: 1947
	/* end block 6 */
	// End Line: 1948

void GetAwardInformation__18tTournamentManagerR17tAwardInformation
               (tTournamentManager *this,tAwardInformation *info)

{
  tAwardInformation *ptVar1;
  long lVar2;
  undefined4 uVar3;
  tCarClassType tVar4;
  
  ptVar1 = &this->fAwards;
  do {
    lVar2 = ptVar1->fTournMoney;
    uVar3 = *(undefined4 *)&ptVar1->fActivateFlags;
    tVar4 = ptVar1->fActivateCarClass;
    info->fMoney = ptVar1->fMoney;
    info->fTournMoney = lVar2;
    *(undefined4 *)&info->fActivateFlags = uVar3;
    info->fActivateCarClass = tVar4;
    ptVar1 = (tAwardInformation *)&ptVar1->fActivateCar;
    info = (tAwardInformation *)&info->fActivateCar;
  } while (ptVar1 != (tAwardInformation *)&(this->fAwards).fCompletedBonusMoney);
  info->fMoney = ptVar1->fMoney;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ UpdateAwardInformation__18tTournamentManager(struct tTournamentManager *this /*$s1*/)
 // line 920, offset 0x80033914
	/* begin block 1 */
		// Start line: 921
		// Start offset: 0x80033914
		// Variables:
	// 		long bonus; // stack offset -20
	// 		long bill; // stack offset -24
	/* end block 1 */
	// End offset: 0x80033A78
	// End Line: 950

	/* begin block 2 */
		// Start line: 1954
	/* end block 2 */
	// End Line: 1955

	/* begin block 3 */
		// Start line: 1960
	/* end block 3 */
	// End Line: 1961

	/* begin block 4 */
		// Start line: 1960
	/* end block 4 */
	// End Line: 1961

void UpdateAwardInformation__18tTournamentManager(tTournamentManager *this)

{
  ushort uVar1;
  tCarInfo *ptVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  CalcTrackFinishDamageBill__18tTournamentManagerbRlT2(this,&DAT_00000001,&local_18,&local_14);
  local_18 = this->fMoney - local_18;
  this->fMoney = local_18;
  iVar3 = (this->fAwards).fMoney;
  local_18 = local_18 + local_14;
  this->fMoney = local_18;
  local_18 = local_18 + iVar3;
  iVar3 = (this->fAwards).fTournMoney;
  uVar1 = (this->fAwards).fActivateFlags;
  this->fMoney = local_18;
  this->fMoney = local_18 + iVar3;
  if ((uVar1 & 2) != 0) {
    FECheat_ActivateBonus__F10tCheatCode((this->fAwards).fActivateCarClass);
  }
  if (((this->fAwards).fActivateFlags & 4) != 0) {
    SetCarAvailable__11tCarManager10tCarModelsb
              (&carManager,(this->fAwards).fActivateCar,&DAT_00000001);
  }
  if (((this->fAwards).fActivateFlags & 1) != 0) {
    SetTrackAvailable__13tTrackManagersb
              (&trackManager,(ushort)(byte)(this->fAwards).fActivateTrack,&DAT_00000001);
  }
  if (((this->fAwards).fActivateFlags & 8) != 0) {
    SetClassAvailable__13tTrackManager15tTrackClassTypeb
              (&trackManager,(this->fAwards).fActivateTrackClass,&DAT_00000001);
  }
  if (((this->fAwards).fActivateFlags & 0x10) != 0) {
    FECheat_ActivateBonus__F10tCheatCode((this->fAwards).fActivateCheat);
  }
  if (((this->fAwards).fAwardCar != (void *)0x0) &&
     ((this->fAwards).fAwardCarGarageFull == (void *)0x0)) {
    ptVar2 = GetCarFromID__11tCarManagers(&carManager,*(short *)&(this->fAwards).fAwardCarModel);
    PurchaseCar__11tCarManagersss
              (&carManager,*(short *)&(this->fAwards).fAwardCarModel,
               (short)ptVar2->fColorOrder[(uint)(byte)(this->fAwards).fAwardCarColor],0);
    PurchaseUpgrade__11tCarManagersss
              (&carManager,(ushort)(byte)frontEnd.garageCar[0],
               (ushort)(byte)(this->fAwards).fAwardCarUpgrades,0);
  }
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ TournPointTotal__18tTournamentManagerPs(struct tTournamentManager *this /*$a0*/, short *p /*$a1*/)
 // line 957, offset 0x80033a8c
	/* begin block 1 */
		// Start line: 958
		// Start offset: 0x80033A8C
	/* end block 1 */
	// End offset: 0x80033A8C
	// End Line: 959

	/* begin block 2 */
		// Start line: 2034
	/* end block 2 */
	// End Line: 2035

	/* begin block 3 */
		// Start line: 2042
	/* end block 3 */
	// End Line: 2043

	/* begin block 4 */
		// Start line: 2042
	/* end block 4 */
	// End Line: 2043

	/* begin block 5 */
		// Start line: 2043
	/* end block 5 */
	// End Line: 2044

	/* begin block 6 */
		// Start line: 2043
	/* end block 6 */
	// End Line: 2044

short TournPointTotal__18tTournamentManagerPs(tTournamentManager *this,short *p)

{
  return (short)this->fCompetitors[(int)*p].fPoints;
}



// decompiled code
// original method signature: 
// short /*$ra*/ PlayerRanking__18tTournamentManagers(struct tTournamentManager *this /*$s1*/, short pos /*$a1*/)
 // line 965, offset 0x80033aa8
	/* begin block 1 */
		// Start line: 966
		// Start offset: 0x80033AA8
		// Variables:
	// 		short i; // $a0
	/* end block 1 */
	// End offset: 0x80033B24
	// End Line: 974

	/* begin block 2 */
		// Start line: 2051
	/* end block 2 */
	// End Line: 2052

	/* begin block 3 */
		// Start line: 2058
	/* end block 3 */
	// End Line: 2059

	/* begin block 4 */
		// Start line: 2058
	/* end block 4 */
	// End Line: 2059

short PlayerRanking__18tTournamentManagers(tTournamentManager *this,short pos)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = GetNumCompetitors__18tTournamentManager(this);
  iVar3 = 0;
  if (0 < (int)sVar1) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      if ((uint)this->fCompetitors[iVar2 >> 0x10].fPosition == (int)pos) {
        return (short)((uint)iVar2 >> 0x10);
      }
      iVar2 = iVar3 * 0x10000;
    } while (iVar3 * 0x10000 >> 0x10 < (int)sVar1);
  }
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ CalcTierFinishPrize__18tTournamentManager(struct tTournamentManager *this /*$a0*/)
 // line 979, offset 0x80033b38
	/* begin block 1 */
		// Start line: 980
		// Start offset: 0x80033B38
	/* end block 1 */
	// End offset: 0x80033B38
	// End Line: 981

	/* begin block 2 */
		// Start line: 2080
	/* end block 2 */
	// End Line: 2081

	/* begin block 3 */
		// Start line: 2086
	/* end block 3 */
	// End Line: 2087

	/* begin block 4 */
		// Start line: 2086
	/* end block 4 */
	// End Line: 2087

	/* begin block 5 */
		// Start line: 2087
	/* end block 5 */
	// End Line: 2088

	/* begin block 6 */
		// Start line: 2087
	/* end block 6 */
	// End Line: 2088

void CalcTierFinishPrize__18tTournamentManager(tTournamentManager *this)

{
  this->fTierFinishPrize[this->fTier] = 7;
  this->fTierFinishPrizeChange[this->fTier] = 0;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetTrophyName__18tTournamentManagerP12tTourneyInfo11tTrophySizePci(struct tTournamentManager *this /*$a0*/, struct tTourneyInfo *tourn /*$a1*/, enum tTrophySize size /*$a2*/, char *buffer /*$a0*/, int place /*stack 16*/)
 // line 1040, offset 0x80033b64
	/* begin block 1 */
		// Start line: 1041
		// Start offset: 0x80033B64
		// Variables:
	// 		int showplace; // $v0
	// 		char trophySizeLetter[3]; // stack offset -24
	// 		char trophyPlacementLetter[4]; // stack offset -16

		/* begin block 1.1 */
			// Start line: 1041
			// Start offset: 0x80033B64

			/* begin block 1.1.1 */
				// Start line: 1041
				// Start offset: 0x80033B64
			/* end block 1.1.1 */
			// End offset: 0x80033B64
			// End Line: 1041
		/* end block 1.1 */
		// End offset: 0x80033B64
		// End Line: 1041
	/* end block 1 */
	// End offset: 0x80033BF0
	// End Line: 1057

	/* begin block 2 */
		// Start line: 2073
	/* end block 2 */
	// End Line: 2074

	/* begin block 3 */
		// Start line: 2156
	/* end block 3 */
	// End Line: 2157

	/* begin block 4 */
		// Start line: 2156
	/* end block 4 */
	// End Line: 2157

void GetTrophyName__18tTournamentManagerP12tTourneyInfo11tTrophySizePci
               (tTournamentManager *this,tTourneyInfo *tourn,tTrophySize size,char *buffer,int place
               )

{
  short sVar1;
  byte local_18 [8];
  undefined4 local_10 [2];
  
  local_18[0] = DAT_80011658;
  local_18[1] = DAT_80011659;
  local_18[2] = DAT_8001165a;
  local_10[0] = DAT_8001165c;
  if (place == -1) {
    sVar1 = 0;
    if ((int)tournamentManager.fBestPlacement[(int)tourn->fTournamentID] - 1U < 3) {
      sVar1 = (short)tournamentManager.fBestPlacement[(int)tourn->fTournamentID];
    }
    place = (int)sVar1;
  }
  sprintf(buffer,s_TR_c_02d_c_80011660,(uint)local_18[size],(uint)tourn->fTrophyID,
          (uint)*(byte *)((int)local_10 + place));
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ ValidCar__18tTournamentManagerR8tCarInfo(struct tTournamentManager *this /*$s2*/, struct tCarInfo *carInfo /*$s3*/)
 // line 1063, offset 0x80033c24
	/* begin block 1 */
		// Start line: 1064
		// Start offset: 0x80033C24
		// Variables:
	// 		struct tTourneyInfo *tourney; // $s1
	// 		void * result; // $s0

		/* begin block 1.1 */
			// Start line: 1064
			// Start offset: 0x80033C24
			// Variables:
		// 		struct tTournamentManager *this; // $s2

			/* begin block 1.1.1 */
				// Start line: 1064
				// Start offset: 0x80033C24
			/* end block 1.1.1 */
			// End offset: 0x80033C24
			// End Line: 1064
		/* end block 1.1 */
		// End offset: 0x80033C24
		// End Line: 1064
	/* end block 1 */
	// End offset: 0x80033D7C
	// End Line: 1103

	/* begin block 2 */
		// Start line: 2201
	/* end block 2 */
	// End Line: 2202

	/* begin block 3 */
		// Start line: 2208
	/* end block 3 */
	// End Line: 2209

	/* begin block 4 */
		// Start line: 2208
	/* end block 4 */
	// End Line: 2209

void * ValidCar__18tTournamentManagerR8tCarInfo(tTournamentManager *this,tCarInfo *carInfo)

{
  byte bVar1;
  void *pvVar2;
  undefined *puVar3;
  tTourneyInfo *ptVar4;
  
  ptVar4 = this->fDefinition->fTournaments +
           (uint)this->fDefinition->fTiers[this->fTier].fTournOffset + this->fTournament;
  puVar3 = &DAT_00000001;
  if (ptVar4->fOpponentCarClass != '\n') {
    puVar3 = (undefined *)(uint)(carInfo->fCarClass == ptVar4->fOpponentCarClass);
    pvVar2 = FECheat_IsCheatEnabled__F10tCheatCode(cheat_FinishedTournament);
    if ((pvVar2 != (void *)0x0) && (this->fTier == 0)) {
      puVar3 = &DAT_00000001;
    }
  }
  if ((ptVar4->fRequiredFlags & 4) == 0) {
    return puVar3;
  }
  if ((int)carInfo->fCarID == (uint)ptVar4->fRequiredCar) {
    bVar1 = ptVar4->fRequiredUpgrades;
    if (bVar1 == 1) {
      return puVar3;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return puVar3;
      }
      if (carInfo->fUpgrades == '\0') {
        return puVar3;
      }
      return (void *)0x0;
    }
    if (bVar1 == 2) {
      if (carInfo->fUpgrades != '\0') {
        return puVar3;
      }
      return (void *)0x0;
    }
    if (bVar1 != 3) {
      return puVar3;
    }
    if ((carInfo->fUpgrades & ptVar4->fSpecificUpgrades) == ptVar4->fSpecificUpgrades) {
      return puVar3;
    }
  }
  return (void *)0x0;
}



// decompiled code
// original method signature: 
// struct tListIteratorTournament * /*$ra*/ __23tListIteratorTournamentPcP18tTournamentManager(struct tListIteratorTournament *this /*$s0*/, char *valPtr /*$v0*/, struct tTournamentManager *tournManager /*$s1*/)
 // line 1109, offset 0x80033d9c
	/* begin block 1 */
		// Start line: 1110
		// Start offset: 0x80033D9C
	/* end block 1 */
	// End offset: 0x80033D9C
	// End Line: 1110

	/* begin block 2 */
		// Start line: 2296
	/* end block 2 */
	// End Line: 2297

	/* begin block 3 */
		// Start line: 2303
	/* end block 3 */
	// End Line: 2304

	/* begin block 4 */
		// Start line: 2303
	/* end block 4 */
	// End Line: 2304

tListIteratorTournament *
__23tListIteratorTournamentPcP18tTournamentManager
          (tListIteratorTournament *this,char *valPtr,tTournamentManager *tournManager)

{
  __13tListIteratorPsPc((tListIterator *)this,(short *)0x0,valPtr);
  *(undefined4 *)((this->tListIterator)._vf + 2) = 0x80011670;
  this->fTournamentManager = tournManager;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._23tListIteratorTournament(struct tListIteratorTournament *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 1115, offset 0x80033dec
	/* begin block 1 */
		// Start line: 1116
		// Start offset: 0x80033DEC
	/* end block 1 */
	// End offset: 0x80033DEC
	// End Line: 1116

	/* begin block 2 */
		// Start line: 2313
	/* end block 2 */
	// End Line: 2314

	/* begin block 3 */
		// Start line: 2317
	/* end block 3 */
	// End Line: 2318

	/* begin block 4 */
		// Start line: 2317
	/* end block 4 */
	// End Line: 2318

void ___23tListIteratorTournament(tListIteratorTournament *this,int __in_chrg)

{
  *(undefined4 *)((this->tListIterator)._vf + 2) = 0x80011670;
  ___13tListIterator((tListIterator *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ Value__23tListIteratorTournament7tPlayer(struct tListIteratorTournament *this /*$a0*/)
 // line 1119, offset 0x80033e14
	/* begin block 1 */
		// Start line: 1120
		// Start offset: 0x80033E14
	/* end block 1 */
	// End offset: 0x80033E14
	// End Line: 1121

	/* begin block 2 */
		// Start line: 2321
	/* end block 2 */
	// End Line: 2322

	/* begin block 3 */
		// Start line: 2325
	/* end block 3 */
	// End Line: 2326

	/* begin block 4 */
		// Start line: 2325
	/* end block 4 */
	// End Line: 2326

	/* begin block 5 */
		// Start line: 2326
	/* end block 5 */
	// End Line: 2327

	/* begin block 6 */
		// Start line: 2326
	/* end block 6 */
	// End Line: 2327

char Value__23tListIteratorTournament7tPlayer(tListIteratorTournament *this)

{
  return *(this->tListIterator).fValue;
}



// decompiled code
// original method signature: 
// short /*$ra*/ TextValue__23tListIteratorTournament7tPlayer(struct tListIteratorTournament *this /*$a0*/)
 // line 1124, offset 0x80033e28
	/* begin block 1 */
		// Start line: 1125
		// Start offset: 0x80033E28
		// Variables:
	// 		short tournIndex; // $v0
	/* end block 1 */
	// End offset: 0x80033E28
	// End Line: 1129

	/* begin block 2 */
		// Start line: 2331
	/* end block 2 */
	// End Line: 2332

	/* begin block 3 */
		// Start line: 2335
	/* end block 3 */
	// End Line: 2336

	/* begin block 4 */
		// Start line: 2335
	/* end block 4 */
	// End Line: 2336

	/* begin block 5 */
		// Start line: 2339
	/* end block 5 */
	// End Line: 2340

short TextValue__23tListIteratorTournament7tPlayer(tListIteratorTournament *this)

{
  tTournamentDefinition *ptVar1;
  
  ptVar1 = this->fTournamentManager->fDefinition;
  return (short)ptVar1->fTournaments
                [(uint)(byte)*(this->tListIterator).fValue +
                 (uint)ptVar1->fTiers[(uint)(byte)frontEnd.tier].fTournOffset].fTournamentID + 0x341
  ;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Increment__23tListIteratorTournament7tPlayer(struct tListIteratorTournament *this /*$s0*/)
 // line 1134, offset 0x80033e80
	/* begin block 1 */
		// Start line: 1135
		// Start offset: 0x80033E80
		// Variables:
	// 		struct tTierInfo *tier; // $s1
	/* end block 1 */
	// End offset: 0x80033F0C
	// End Line: 1145

	/* begin block 2 */
		// Start line: 2352
	/* end block 2 */
	// End Line: 2353

	/* begin block 3 */
		// Start line: 2356
	/* end block 3 */
	// End Line: 2357

	/* begin block 4 */
		// Start line: 2356
	/* end block 4 */
	// End Line: 2357

	/* begin block 5 */
		// Start line: 2357
	/* end block 5 */
	// End Line: 2358

	/* begin block 6 */
		// Start line: 2357
	/* end block 6 */
	// End Line: 2358

void Increment__23tListIteratorTournament7tPlayer(tListIteratorTournament *this)

{
  undefined *puVar1;
  uint uVar2;
  tTournamentDefinition *ptVar3;
  char *pcVar4;
  byte *pbVar5;
  
  uVar2 = (uint)(byte)frontEnd.tier;
  ptVar3 = this->fTournamentManager->fDefinition;
  do {
    pcVar4 = (this->tListIterator).fValue;
    *pcVar4 = *pcVar4 + '\x01';
    pbVar5 = (byte *)(this->tListIterator).fValue;
    if (ptVar3->fTiers[uVar2].fNumTournaments <= *pbVar5) {
      *pbVar5 = 0;
    }
    puVar1 = (undefined *)
             ValidTournament__23tListIteratorTournamentc(this,*(this->tListIterator).fValue);
  } while (puVar1 != &DAT_00000001);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decrement__23tListIteratorTournament7tPlayer(struct tListIteratorTournament *this /*$s0*/)
 // line 1148, offset 0x80033f20
	/* begin block 1 */
		// Start line: 1149
		// Start offset: 0x80033F20
		// Variables:
	// 		struct tTierInfo *tier; // $s1
	/* end block 1 */
	// End offset: 0x80033F9C
	// End Line: 1159

	/* begin block 2 */
		// Start line: 2381
	/* end block 2 */
	// End Line: 2382

	/* begin block 3 */
		// Start line: 2385
	/* end block 3 */
	// End Line: 2386

	/* begin block 4 */
		// Start line: 2385
	/* end block 4 */
	// End Line: 2386

	/* begin block 5 */
		// Start line: 2386
	/* end block 5 */
	// End Line: 2387

	/* begin block 6 */
		// Start line: 2386
	/* end block 6 */
	// End Line: 2387

void Decrement__23tListIteratorTournament7tPlayer(tListIteratorTournament *this)

{
  uchar uVar1;
  undefined *puVar2;
  uint uVar3;
  tTournamentDefinition *ptVar4;
  uchar *puVar5;
  
  uVar3 = (uint)(byte)frontEnd.tier;
  ptVar4 = this->fTournamentManager->fDefinition;
  do {
    puVar5 = (uchar *)(this->tListIterator).fValue;
    uVar1 = *puVar5;
    if (uVar1 == '\0') {
      uVar1 = ptVar4->fTiers[uVar3].fNumTournaments;
    }
    *puVar5 = uVar1 + -1;
    puVar2 = (undefined *)
             ValidTournament__23tListIteratorTournamentc(this,*(this->tListIterator).fValue);
  } while (puVar2 != &DAT_00000001);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ ValidTournament__23tListIteratorTournamentc(struct tListIteratorTournament *this /*$a0*/, char tourn /*$a1*/)
 // line 1162, offset 0x80033fb0
	/* begin block 1 */
		// Start line: 1163
		// Start offset: 0x80033FB0
		// Variables:
	// 		struct tTierInfo *currentTier; // $v0
	// 		struct tTourneyInfo *currentTourn; // $a0
	// 		void * result; // $v1
	/* end block 1 */
	// End offset: 0x80034054
	// End Line: 1185

	/* begin block 2 */
		// Start line: 2410
	/* end block 2 */
	// End Line: 2411

	/* begin block 3 */
		// Start line: 2414
	/* end block 3 */
	// End Line: 2415

	/* begin block 4 */
		// Start line: 2414
	/* end block 4 */
	// End Line: 2415

	/* begin block 5 */
		// Start line: 2419
	/* end block 5 */
	// End Line: 2420

void * ValidTournament__23tListIteratorTournamentc(tListIteratorTournament *this,char tourn)

{
  undefined *puVar1;
  tTourneyInfo *ptVar2;
  tTournamentManager *ptVar3;
  
  ptVar3 = this->fTournamentManager;
  ptVar2 = ptVar3->fDefinition->fTournaments +
           (uint)ptVar3->fDefinition->fTiers[(uint)(byte)frontEnd.tier].fTournOffset +
           (uint)(byte)tourn;
  puVar1 = &DAT_00000001;
  if ((ptVar2->fRequiredFlags & 1) != 0) {
    puVar1 = (undefined *)
             (uint)(ptVar3->fBestPlacement[(uint)ptVar2->fRequiredTournamentID] < '\x04');
  }
  if (((ptVar2->fRequiredFlags & 2) != 0) &&
     ('\x01' < ptVar3->fBestPlacement[(uint)ptVar2->fRequiredTournamentID])) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}





