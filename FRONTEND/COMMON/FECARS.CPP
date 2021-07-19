#include "THISDUST.H"
#include "FECARS.H"


// decompiled code
// original method signature: 
// void /*$ra*/ Initialize__11tCarManager(struct tCarManager *this /*$a0*/)
 // line 77, offset 0x800161b0
	/* begin block 1 */
		// Start line: 78
		// Start offset: 0x800161B0
		// Variables:
	// 		short i; // $a1
	// 		short j; // $a3
	/* end block 1 */
	// End offset: 0x80016244
	// End Line: 95

	/* begin block 2 */
		// Start line: 154
	/* end block 2 */
	// End Line: 155

	/* begin block 3 */
		// Start line: 154
	/* end block 3 */
	// End Line: 155

	/* begin block 4 */
		// Start line: 160
	/* end block 4 */
	// End Line: 161

void Initialize__11tCarManager(tCarManager *this)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  this->fNumCars = 0;
  this->fCars = (tCarInfo *)0x0;
  do {
    iVar3 = 0;
    do {
      iVar1 = iVar3 << 0x10;
      iVar3 = iVar3 + 1;
      iVar1 = (int)&this->fNumCars + (iVar1 >> 0xe) + ((iVar4 << 0x10) >> 9);
      *(undefined *)(iVar1 + 8) = 0xff;
      *(undefined *)(iVar1 + 0x108) = 0xff;
    } while (iVar3 * 0x10000 >> 0x10 < 0x20);
    iVar4 = iVar4 + 1;
    iVar3 = 0;
  } while (iVar4 * 0x10000 >> 0x10 < 2);
  do {
    sVar2 = (short)iVar3;
    iVar3 = iVar3 + 1;
    iVar4 = (int)&this->fNumCars + (int)sVar2;
    *(undefined *)(iVar4 + 0x208) = 0;
    *(undefined *)(iVar4 + 0x238) = 0;
  } while (iVar3 * 0x10000 >> 0x10 < 0x30);
  return;
}



// decompiled code
// original method signature: 
// struct tCarInfo * /*$ra*/ GetCarFromID__11tCarManagers(struct tCarManager *this /*$a0*/, short carID /*$a1*/)
 // line 101, offset 0x8001624c
	/* begin block 1 */
		// Start line: 102
		// Start offset: 0x8001624C
		// Variables:
	// 		unsigned long i; // $v1
	/* end block 1 */
	// End offset: 0x80016294
	// End Line: 110

	/* begin block 2 */
		// Start line: 206
	/* end block 2 */
	// End Line: 207

	/* begin block 3 */
		// Start line: 213
	/* end block 3 */
	// End Line: 214

	/* begin block 4 */
		// Start line: 213
	/* end block 4 */
	// End Line: 214

	/* begin block 5 */
		// Start line: 216
	/* end block 5 */
	// End Line: 217

tCarInfo * GetCarFromID__11tCarManagers(tCarManager *this,short carID)

{
  uint uVar1;
  tCarInfo *ptVar2;
  
  uVar1 = 0;
  if (this->fNumCars != 0) {
    ptVar2 = this->fCars;
    do {
      uVar1 = uVar1 + 1;
      if ((int)ptVar2->fCarID == (int)carID) {
        return ptVar2;
      }
      ptVar2 = ptVar2 + 1;
    } while (uVar1 < this->fNumCars);
  }
  return (tCarInfo *)0x0;
}



// decompiled code
// original method signature: 
// struct tCarInfo * /*$ra*/ GetCarFromSimID__11tCarManagers(struct tCarManager *this /*$a0*/, short carID /*$a1*/)
 // line 116, offset 0x8001629c
	/* begin block 1 */
		// Start line: 117
		// Start offset: 0x8001629C
		// Variables:
	// 		unsigned long i; // $v1
	/* end block 1 */
	// End offset: 0x800162E4
	// End Line: 125

	/* begin block 2 */
		// Start line: 236
	/* end block 2 */
	// End Line: 237

	/* begin block 3 */
		// Start line: 243
	/* end block 3 */
	// End Line: 244

	/* begin block 4 */
		// Start line: 243
	/* end block 4 */
	// End Line: 244

	/* begin block 5 */
		// Start line: 246
	/* end block 5 */
	// End Line: 247

tCarInfo * GetCarFromSimID__11tCarManagers(tCarManager *this,short carID)

{
  uint uVar1;
  tCarInfo *ptVar2;
  
  uVar1 = 0;
  if (this->fNumCars != 0) {
    ptVar2 = this->fCars;
    do {
      uVar1 = uVar1 + 1;
      if ((uint)ptVar2->fSimNumber == (int)carID) {
        return ptVar2;
      }
      ptVar2 = ptVar2 + 1;
    } while (uVar1 < this->fNumCars);
  }
  return (tCarInfo *)0x0;
}



// decompiled code
// original method signature: 
// long /*$ra*/ CheapestCarStockPrice__11tCarManager(struct tCarManager *this /*$a0*/)
 // line 161, offset 0x800162ec
	/* begin block 1 */
		// Start line: 162
		// Start offset: 0x800162EC
		// Variables:
	// 		int carPrice; // $v1
	// 		unsigned long i; // $a1
	// 		long returnprice; // $a2
	/* end block 1 */
	// End offset: 0x8001633C
	// End Line: 176

	/* begin block 2 */
		// Start line: 316
	/* end block 2 */
	// End Line: 317

	/* begin block 3 */
		// Start line: 302
	/* end block 3 */
	// End Line: 303

	/* begin block 4 */
		// Start line: 302
	/* end block 4 */
	// End Line: 303

	/* begin block 5 */
		// Start line: 306
	/* end block 5 */
	// End Line: 307

long CheapestCarStockPrice__11tCarManager(tCarManager *this)

{
  int iVar1;
  tCarInfo *ptVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 10000000;
  uVar3 = 0;
  if (this->fNumCars != 0) {
    ptVar2 = this->fCars;
    do {
      iVar1 = ptVar2->fPrices[0];
      if ((0 < iVar1) && (iVar1 < iVar4)) {
        iVar4 = iVar1;
      }
      uVar3 = uVar3 + 1;
      ptVar2 = ptVar2 + 1;
    } while (uVar3 < this->fNumCars);
  }
  return iVar4;
}



// decompiled code
// original method signature: 
// long /*$ra*/ CalcUsedPrice__11tCarManagers(struct tCarManager *this /*$s2*/, short garageNumber /*$a1*/)
 // line 191, offset 0x80016344
	/* begin block 1 */
		// Start line: 192
		// Start offset: 0x80016344
		// Variables:
	// 		long result; // $s0
	// 		struct tCarInfo *carInfo; // $a0
	/* end block 1 */
	// End offset: 0x80016438
	// End Line: 224

	/* begin block 2 */
		// Start line: 375
	/* end block 2 */
	// End Line: 376

	/* begin block 3 */
		// Start line: 353
	/* end block 3 */
	// End Line: 354

	/* begin block 4 */
		// Start line: 353
	/* end block 4 */
	// End Line: 354

long CalcUsedPrice__11tCarManagers(tCarManager *this,short garageNumber)

{
  char cVar1;
  byte bVar2;
  tCarInfo *ptVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = SEXT24(garageNumber);
  lVar4 = 0;
  if (this->fNumCars <= uVar6) {
    cVar1 = this->fCarGarage[uVar6 - this->fNumCars].fCarID;
    lVar4 = 0;
    if (cVar1 != -1) {
      ptVar3 = GetCarFromID__11tCarManagers(this,(short)cVar1);
      lVar4 = 0;
      if (ptVar3 != (tCarInfo *)0x0) {
        bVar2 = this->fCarGarage[uVar6 - this->fNumCars].fUpgrades;
        iVar5 = ptVar3->fPrices[0];
        if ((bVar2 & 1) != 0) {
          iVar5 = iVar5 + ptVar3->fPrices[1];
        }
        if ((bVar2 & 2) != 0) {
          iVar5 = iVar5 + ptVar3->fPrices[2];
        }
        if ((bVar2 & 4) != 0) {
          iVar5 = iVar5 + ptVar3->fPrices[3];
        }
        if (ptVar3->fExoticCar == '\0') {
          lVar4 = iVar5 >> 1;
        }
        else {
          iVar5 = iVar5 * 3;
          lVar4 = iVar5 >> 2;
          if (iVar5 < 0) {
            lVar4 = iVar5 + 3 >> 2;
          }
        }
      }
    }
  }
  return lVar4;
}



// decompiled code
// original method signature: 
// long /*$ra*/ PurchaseCar__11tCarManagersss(struct tCarManager *this /*$s1*/, short carModel /*$s2*/, short color /*$s3*/, short playerNum /*$a3*/)
 // line 230, offset 0x80016450
	/* begin block 1 */
		// Start line: 231
		// Start offset: 0x80016450
		// Variables:
	// 		short i; // $a0
	// 		struct tCarInfo *carInfo; // $a2
	/* end block 1 */
	// End offset: 0x80016510
	// End Line: 256

	/* begin block 2 */
		// Start line: 431
	/* end block 2 */
	// End Line: 432

	/* begin block 3 */
		// Start line: 438
	/* end block 3 */
	// End Line: 439

	/* begin block 4 */
		// Start line: 438
	/* end block 4 */
	// End Line: 439

long PurchaseCar__11tCarManagersss(tCarManager *this,short carModel,short color,short playerNum)

{
  tCarInfo *ptVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  ptVar1 = GetCarFromID__11tCarManagers(&carManager,carModel);
  iVar2 = 0;
  iVar4 = 0;
  do {
    iVar2 = (int)&this->fNumCars + (iVar2 >> 0xe) + (int)playerNum * 0x80;
    iVar3 = iVar4 + 1;
    if (*(char *)(iVar2 + 8) < '\0') {
      *(undefined *)(iVar2 + 8) = (char)carModel;
      *(undefined *)(iVar2 + 10) = (char)color;
      *(undefined *)(iVar2 + 9) = 0;
      frontEnd.garageCar[(int)playerNum] = (char)iVar4 + *(char *)&this->fNumCars;
      return ptVar1->fPrices[0];
    }
    iVar2 = iVar3 * 0x10000;
    iVar4 = iVar3;
  } while (iVar3 * 0x10000 >> 0x10 < 0x20);
  return 0;
}



// decompiled code
// original method signature: 
// long /*$ra*/ SellCar__11tCarManagerss(struct tCarManager *this /*$s3*/, short garageNumber /*$a1*/, short playerNum /*$s2*/)
 // line 262, offset 0x8001652c
	/* begin block 1 */
		// Start line: 263
		// Start offset: 0x8001652C
		// Variables:
	// 		short i; // $a2
	// 		long result; // $t0
	/* end block 1 */
	// End offset: 0x8001668C
	// End Line: 291

	/* begin block 2 */
		// Start line: 498
	/* end block 2 */
	// End Line: 499

	/* begin block 3 */
		// Start line: 505
	/* end block 3 */
	// End Line: 506

	/* begin block 4 */
		// Start line: 505
	/* end block 4 */
	// End Line: 506

long SellCar__11tCarManagerss(tCarManager *this,short garageNumber,short playerNum)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = CalcUsedPrice__11tCarManagers(this,garageNumber);
  iVar5 = (int)((uint)(ushort)playerNum << 0x10) >> 9;
  (&this->fCarGarage[(int)garageNumber - this->fNumCars].fCarID)[iVar5] = -1;
  iVar7 = (uint)(ushort)garageNumber - (uint)*(ushort *)&this->fNumCars;
  while (iVar7 = iVar7 + 1, iVar7 * 0x10000 >> 0x10 < 0x20) {
    iVar6 = (int)&this->fNumCars + (int)(short)iVar7 * 4 + iVar5;
    if (*(char *)(iVar6 + 8) < '\0') break;
    iVar4 = (int)&this->fNumCars + ((int)(short)iVar7 + -1) * 4 + iVar5;
    *(undefined *)(iVar4 + 8) = *(undefined *)(iVar6 + 8);
    *(undefined *)(iVar4 + 9) = *(undefined *)(iVar6 + 9);
    *(undefined *)(iVar4 + 10) = *(undefined *)(iVar6 + 10);
  }
  iVar5 = (int)playerNum;
  *(undefined *)((int)&this->fCars + (iVar7 * 0x10000 >> 0xe) + iVar5 * 0x80) = 0xff;
  this->fCarGarage[iVar5 * 0x20 + 0x1f].fCarID = -1;
  bVar1 = frontEnd.garageCar[iVar5];
  if (this->fCarGarage[iVar5 * 0x20 + ((uint)bVar1 - this->fNumCars)].fCarID < '\0') {
    cVar2 = bVar1 - 1;
    if ((uint)bVar1 <= this->fNumCars) {
      cVar2 = '\0';
    }
    frontEnd.garageCar[iVar5] = cVar2;
  }
  return lVar3;
}



// decompiled code
// original method signature: 
// long /*$ra*/ PurchaseUpgrade__11tCarManagersss(struct tCarManager *this /*$s2*/, short garageNumber /*$a1*/, short upgradeFlags /*$s4*/, short playerNum /*$a3*/)
 // line 298, offset 0x800166ac
	/* begin block 1 */
		// Start line: 299
		// Start offset: 0x800166AC
		// Variables:
	// 		short i; // $a3
	// 		short mask; // $a2
	// 		long result; // $s3
	// 		struct tCarInfo *carInfo; // $t0
	/* end block 1 */
	// End offset: 0x80016794
	// End Line: 328

	/* begin block 2 */
		// Start line: 581
	/* end block 2 */
	// End Line: 582

	/* begin block 3 */
		// Start line: 589
	/* end block 3 */
	// End Line: 590

	/* begin block 4 */
		// Start line: 589
	/* end block 4 */
	// End Line: 590

long PurchaseUpgrade__11tCarManagersss
               (tCarManager *this,short garageNumber,short upgradeFlags,short playerNum)

{
  byte bVar1;
  tCarInfo *ptVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  
  lVar8 = 0;
  iVar7 = (int)((uint)(ushort)playerNum << 0x10) >> 9;
  ptVar2 = GetCarFromID__11tCarManagers
                     (this,(short)(&this->fCarGarage[(int)garageNumber - this->fNumCars].fCarID)
                                  [iVar7]);
  iVar6 = 0;
  iVar3 = 0;
  do {
    uVar4 = 1 << (iVar3 >> 0x10 & 0x1fU);
    if (((uint)(ushort)upgradeFlags & uVar4) != 0) {
      iVar5 = (int)&this->fNumCars + ((int)garageNumber - this->fNumCars) * 4 + iVar7;
      bVar1 = *(byte *)(iVar5 + 9);
      if (((uint)bVar1 & (int)(short)uVar4) == 0) {
        *(byte *)(iVar5 + 9) = (byte)uVar4 | bVar1;
        lVar8 = lVar8 + ptVar2->fPrices[(iVar3 >> 0x10) + 1];
      }
    }
    iVar6 = iVar6 + 1;
    iVar3 = iVar6 * 0x10000;
  } while (iVar6 * 0x10000 >> 0x10 < 3);
  return lVar8;
}



// decompiled code
// original method signature: 
// void /*$ra*/ RemoveFromPinkSlipsList__11tCarManagerss(struct tCarManager *this /*$t1*/, short garageNumber /*$a1*/, short playerNum /*$a2*/)
 // line 332, offset 0x800167b8
	/* begin block 1 */
		// Start line: 333
		// Start offset: 0x800167B8
		// Variables:
	// 		short i; // $a3
	/* end block 1 */
	// End offset: 0x800168F8
	// End Line: 358

	/* begin block 2 */
		// Start line: 675
	/* end block 2 */
	// End Line: 676

	/* begin block 3 */
		// Start line: 680
	/* end block 3 */
	// End Line: 681

	/* begin block 4 */
		// Start line: 680
	/* end block 4 */
	// End Line: 681

void RemoveFromPinkSlipsList__11tCarManagerss(tCarManager *this,short garageNumber,short playerNum)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)((uint)(ushort)playerNum << 0x10) >> 9;
  (&this->fPinkSlipsCars[(int)garageNumber - this->fNumCars].fCarID)[iVar3] = -1;
  iVar5 = (uint)(ushort)garageNumber - (uint)*(ushort *)&this->fNumCars;
  while (iVar5 = iVar5 + 1, iVar5 * 0x10000 >> 0x10 < 0x20) {
    iVar4 = (int)&this->fNumCars + (int)(short)iVar5 * 4 + iVar3;
    if (*(char *)(iVar4 + 0x108) < '\0') break;
    iVar2 = (int)&this->fNumCars + ((int)(short)iVar5 + -1) * 4 + iVar3;
    *(undefined *)(iVar2 + 0x108) = *(undefined *)(iVar4 + 0x108);
    *(undefined *)(iVar2 + 0x109) = *(undefined *)(iVar4 + 0x109);
    *(undefined *)(iVar2 + 0x10a) = *(undefined *)(iVar4 + 0x10a);
  }
  iVar3 = (int)playerNum;
  (&this->fCarGarage[iVar3 * 0x20 + 0x3f].fCarID)[iVar5 * 0x10000 >> 0xe] = -1;
  this->fPinkSlipsCars[iVar3 * 0x20 + 0x1f].fCarID = -1;
  if (this->fPinkSlipsCars[iVar3 * 0x20 + ((uint)(byte)frontEnd.garageCar[iVar3] - this->fNumCars)].
      fCarID < '\0') {
    cVar1 = frontEnd.garageCar[iVar3] - 1;
    if ((uint)(byte)frontEnd.pinkSlipsCar[iVar3] <= this->fNumCars) {
      cVar1 = '\0';
    }
    frontEnd.pinkSlipsCar[iVar3] = cVar1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddToPinkSlipsList__11tCarManagersss(struct tCarManager *this /*$a0*/, short carModel /*$a1*/, short color /*$a2*/, short playerNum /*$a3*/)
 // line 361, offset 0x80016900
	/* begin block 1 */
		// Start line: 362
		// Start offset: 0x80016900
		// Variables:
	// 		short i; // $t0
	/* end block 1 */
	// End offset: 0x80016974
	// End Line: 383

	/* begin block 2 */
		// Start line: 735
	/* end block 2 */
	// End Line: 736

	/* begin block 3 */
		// Start line: 739
	/* end block 3 */
	// End Line: 740

	/* begin block 4 */
		// Start line: 739
	/* end block 4 */
	// End Line: 740

	/* begin block 5 */
		// Start line: 743
	/* end block 5 */
	// End Line: 744

void AddToPinkSlipsList__11tCarManagersss
               (tCarManager *this,short carModel,short color,short playerNum)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    iVar1 = (int)&this->fNumCars + (iVar1 >> 0xe) + (int)playerNum * 0x80;
    iVar2 = iVar3 + 1;
    if (*(char *)(iVar1 + 0x108) < '\0') {
      *(undefined *)(iVar1 + 0x108) = (char)carModel;
      *(undefined *)(iVar1 + 0x10a) = (char)color;
      *(undefined *)(iVar1 + 0x109) = 0;
      frontEnd.pinkSlipsCar[(int)playerNum] = (char)iVar3 + *(char *)&this->fNumCars;
      return;
    }
    iVar1 = iVar2 * 0x10000;
    iVar3 = iVar2;
  } while (iVar2 * 0x10000 >> 0x10 < 0x20);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddUpgradesToPinkSlipsList__11tCarManagersss(struct tCarManager *this /*$s2*/, short garageNumber /*$a1*/, short upgradeFlags /*$s3*/, short playerNum /*$a3*/)
 // line 387, offset 0x8001697c
	/* begin block 1 */
		// Start line: 388
		// Start offset: 0x8001697C
		// Variables:
	// 		short i; // $a2
	// 		short mask; // $a1
	/* end block 1 */
	// End offset: 0x80016A38
	// End Line: 413

	/* begin block 2 */
		// Start line: 787
	/* end block 2 */
	// End Line: 788

	/* begin block 3 */
		// Start line: 791
	/* end block 3 */
	// End Line: 792

	/* begin block 4 */
		// Start line: 791
	/* end block 4 */
	// End Line: 792

void AddUpgradesToPinkSlipsList__11tCarManagersss
               (tCarManager *this,short garageNumber,short upgradeFlags,short playerNum)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (int)((uint)(ushort)playerNum << 0x10) >> 9;
  GetCarFromID__11tCarManagers
            (this,(short)(&this->fPinkSlipsCars[(int)garageNumber - this->fNumCars].fCarID)[iVar5]);
  uVar4 = 0;
  uVar2 = 1;
  do {
    if (((uint)(ushort)upgradeFlags & uVar2) != 0) {
      iVar3 = (int)&this->fNumCars + ((int)garageNumber - this->fNumCars) * 4 + iVar5;
      bVar1 = *(byte *)(iVar3 + 0x109);
      if (((uint)bVar1 & (int)(short)uVar2) == 0) {
        *(byte *)(iVar3 + 0x109) = (byte)uVar2 | bVar1;
      }
    }
    uVar4 = uVar4 + 1;
    uVar2 = 1 << (uVar4 & 0x1f);
  } while ((int)(uVar4 * 0x10000) >> 0x10 < 3);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadCars__11tCarManagerR12tSaveCarInfos(struct tCarManager *this /*$s1*/, struct tSaveCarInfo *load /*$s2*/, short playerNum /*$a2*/)
 // line 420, offset 0x80016a54
	/* begin block 1 */
		// Start line: 421
		// Start offset: 0x80016A54
		// Variables:
	// 		unsigned long i; // $a1
	/* end block 1 */
	// End offset: 0x80016AD8
	// End Line: 439

	/* begin block 2 */
		// Start line: 867
	/* end block 2 */
	// End Line: 868

	/* begin block 3 */
		// Start line: 875
	/* end block 3 */
	// End Line: 876

	/* begin block 4 */
		// Start line: 875
	/* end block 4 */
	// End Line: 876

void LoadCars__11tCarManagerR12tSaveCarInfos(tCarManager *this,tSaveCarInfo *load,short playerNum)

{
  int iVar1;
  tSaveCarInfo *ptVar2;
  uint uVar3;
  uint uVar4;
  
  blockmove((undefined4 *)load,this->fCarGarage + (int)playerNum * 0x20,0x80);
  if (((int)playerNum == 0) && (uVar3 = 0, ptVar2 = load, this->fNumCars != 0)) {
    do {
      iVar1 = (int)&this->fNumCars + uVar3;
      *(uchar *)(iVar1 + 0x208) = ptVar2->fSaveAvailable[0];
      *(uchar *)(iVar1 + 0x238) = ptVar2->fSaveViewable[0];
      uVar4 = uVar3 + 1;
      ptVar2 = (tSaveCarInfo *)(&load->fSaveInfo[0].fUpgrades + uVar3);
      uVar3 = uVar4;
    } while (uVar4 < this->fNumCars);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SaveCars__11tCarManagerR12tSaveCarInfo(struct tCarManager *this /*$s0*/, struct tSaveCarInfo *save /*$s1*/)
 // line 445, offset 0x80016af0
	/* begin block 1 */
		// Start line: 446
		// Start offset: 0x80016AF0
		// Variables:
	// 		unsigned long i; // $a1
	/* end block 1 */
	// End offset: 0x80016B54
	// End Line: 460

	/* begin block 2 */
		// Start line: 921
	/* end block 2 */
	// End Line: 922

	/* begin block 3 */
		// Start line: 928
	/* end block 3 */
	// End Line: 929

	/* begin block 4 */
		// Start line: 928
	/* end block 4 */
	// End Line: 929

void SaveCars__11tCarManagerR12tSaveCarInfo(tCarManager *this,tSaveCarInfo *save)

{
  char *pcVar1;
  tCarManager *ptVar2;
  uint uVar3;
  
  blockmove(this->fCarGarage,(undefined4 *)save,0x80);
  uVar3 = 0;
  ptVar2 = this;
  if (this->fNumCars != 0) {
    do {
      pcVar1 = &save->fSaveInfo[0].fCarID + uVar3;
      pcVar1[0x80] = ptVar2->fAvailableCars[0];
      pcVar1[0xb0] = ptVar2->fViewableCars[0];
      uVar3 = uVar3 + 1;
      ptVar2 = (tCarManager *)((int)&this->fNumCars + uVar3);
    } while (uVar3 < this->fNumCars);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadPinkSlipsCars__11tCarManagerR12tSaveCarInfos(struct tCarManager *this /*$s1*/, struct tSaveCarInfo *load /*$s2*/, short playerNum /*$a2*/)
 // line 466, offset 0x80016b68
	/* begin block 1 */
		// Start line: 467
		// Start offset: 0x80016B68

		/* begin block 1.1 */
			// Start line: 467
			// Start offset: 0x80016B68
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x80016BF4
		// End Line: 478
	/* end block 1 */
	// End offset: 0x80016BF4
	// End Line: 478

	/* begin block 2 */
		// Start line: 966
	/* end block 2 */
	// End Line: 967

	/* begin block 3 */
		// Start line: 973
	/* end block 3 */
	// End Line: 974

	/* begin block 4 */
		// Start line: 973
	/* end block 4 */
	// End Line: 974

void LoadPinkSlipsCars__11tCarManagerR12tSaveCarInfos
               (tCarManager *this,tSaveCarInfo *load,short playerNum)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  blockmove((undefined4 *)load,this->fPinkSlipsCars + (int)playerNum * 0x20,0x80);
  uVar3 = 0;
  if (this->fNumCars != 0) {
    iVar4 = (int)playerNum * 0x30;
    iVar1 = iVar4;
    do {
      pcVar2 = &load->fSaveInfo[0].fCarID + uVar3;
      iVar1 = (int)&this->fNumCars + iVar1;
      *(char *)(iVar1 + 0x268) = pcVar2[0x80];
      *(char *)(iVar1 + 0x2c8) = pcVar2[0xb0];
      uVar3 = uVar3 + 1;
      iVar1 = uVar3 + iVar4;
    } while (uVar3 < this->fNumCars);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SavePinkSlipsCars__11tCarManagerR12tSaveCarInfoss(struct tCarManager *this /*$s3*/, struct tSaveCarInfo *save /*$s4*/, short playerNum /*$s6*/, short withoutCarInGarageNumber /*$s5*/)
 // line 483, offset 0x80016c0c
	/* begin block 1 */
		// Start line: 484
		// Start offset: 0x80016C0C
		// Variables:
	// 		struct tCarInfo carInfo; // stack offset -240

		/* begin block 1.1 */
			// Start line: 490
			// Start offset: 0x80016C7C
			// Variables:
		// 		int i; // $a1
		/* end block 1.1 */
		// End offset: 0x80016CEC
		// End Line: 503
	/* end block 1 */
	// End offset: 0x80016D40
	// End Line: 508

	/* begin block 2 */
		// Start line: 1011
	/* end block 2 */
	// End Line: 1012

	/* begin block 3 */
		// Start line: 1017
	/* end block 3 */
	// End Line: 1018

	/* begin block 4 */
		// Start line: 1017
	/* end block 4 */
	// End Line: 1018

void SavePinkSlipsCars__11tCarManagerR12tSaveCarInfoss
               (tCarManager *this,tSaveCarInfo *save,short playerNum,short withoutCarInGarageNumber)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  tCarInfo local_f0;
  
  if (withoutCarInGarageNumber != -1) {
    GetPinkSlipsCar__11tCarManagersR8tCarInfos(this,withoutCarInGarageNumber,&local_f0,playerNum);
    RemoveFromPinkSlipsList__11tCarManagerss(this,withoutCarInGarageNumber,playerNum);
  }
  blockmove(this->fPinkSlipsCars + (int)playerNum * 0x20,(undefined4 *)save,0x80);
  uVar3 = 0;
  if (this->fNumCars != 0) {
    iVar4 = (int)playerNum * 0x30;
    iVar1 = iVar4;
    do {
      iVar1 = (int)&this->fNumCars + iVar1;
      pcVar2 = &save->fSaveInfo[0].fCarID + uVar3;
      pcVar2[0x80] = *(char *)(iVar1 + 0x268);
      pcVar2[0xb0] = *(char *)(iVar1 + 0x2c8);
      uVar3 = uVar3 + 1;
      iVar1 = uVar3 + iVar4;
    } while (uVar3 < this->fNumCars);
  }
  if (withoutCarInGarageNumber != -1) {
    AddToPinkSlipsList__11tCarManagersss
              (&carManager,(short)local_f0.fCarID,(ushort)local_f0.fColor,playerNum);
    AddUpgradesToPinkSlipsList__11tCarManagersss
              (&carManager,(ushort)(byte)frontEnd.pinkSlipsCar[(int)playerNum],
               (ushort)local_f0.fUpgrades,playerNum);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetClassAvailable__11tCarManager13tCarClassTypeb(struct tCarManager *this /*$a0*/, enum tCarClassType carClass /*$a1*/, void * avail /*$a2*/)
 // line 514, offset 0x80016d68
	/* begin block 1 */
		// Start line: 515
		// Start offset: 0x80016D68
		// Variables:
	// 		unsigned long i; // $t0
	/* end block 1 */
	// End offset: 0x80016DE4
	// End Line: 529

	/* begin block 2 */
		// Start line: 1078
	/* end block 2 */
	// End Line: 1079

	/* begin block 3 */
		// Start line: 1085
	/* end block 3 */
	// End Line: 1086

	/* begin block 4 */
		// Start line: 1085
	/* end block 4 */
	// End Line: 1086

	/* begin block 5 */
		// Start line: 1088
	/* end block 5 */
	// End Line: 1089

void SetClassAvailable__11tCarManager13tCarClassTypeb
               (tCarManager *this,tCarClassType carClass,void *avail)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (this->fNumCars != 0) {
    iVar3 = 0;
    do {
      pcVar1 = &this->fCars->fCarID + iVar3;
      iVar2 = (int)*pcVar1;
      if (((-1 < iVar2) && ((uint)(byte)pcVar1[2] == carClass)) &&
         (this->fAvailableCars[iVar2] = (uchar)avail, avail != (void *)0x0)) {
        this->fViewableCars[(int)(&this->fCars->fCarID)[iVar3]] = '\x01';
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0xcc;
    } while (uVar4 < this->fNumCars);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetCarAvailable__11tCarManager10tCarModelsb(struct tCarManager *this /*$a0*/, enum tCarModels carModel /*$a1*/, void * avail /*$a2*/)
 // line 534, offset 0x80016dec
	/* begin block 1 */
		// Start line: 535
		// Start offset: 0x80016DEC
	/* end block 1 */
	// End offset: 0x80016E00
	// End Line: 538

	/* begin block 2 */
		// Start line: 1119
	/* end block 2 */
	// End Line: 1120

	/* begin block 3 */
		// Start line: 1125
	/* end block 3 */
	// End Line: 1126

	/* begin block 4 */
		// Start line: 1125
	/* end block 4 */
	// End Line: 1126

	/* begin block 5 */
		// Start line: 1126
	/* end block 5 */
	// End Line: 1127

	/* begin block 6 */
		// Start line: 1126
	/* end block 6 */
	// End Line: 1127

void SetCarAvailable__11tCarManager10tCarModelsb(tCarManager *this,tCarModels carModel,void *avail)

{
  int iVar1;
  
  iVar1 = (int)&this->fNumCars + carModel;
  *(undefined *)(iVar1 + 0x208) = (char)avail;
  if (avail != (void *)0x0) {
    *(undefined *)(iVar1 + 0x238) = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetClassViewable__11tCarManager13tCarClassTypeb(struct tCarManager *this /*$a0*/, enum tCarClassType carClass /*$a1*/, void * view /*$a2*/)
 // line 543, offset 0x80016e08
	/* begin block 1 */
		// Start line: 544
		// Start offset: 0x80016E08
		// Variables:
	// 		unsigned long i; // $a3
	/* end block 1 */
	// End offset: 0x80016E6C
	// End Line: 558

	/* begin block 2 */
		// Start line: 1137
	/* end block 2 */
	// End Line: 1138

	/* begin block 3 */
		// Start line: 1143
	/* end block 3 */
	// End Line: 1144

	/* begin block 4 */
		// Start line: 1143
	/* end block 4 */
	// End Line: 1144

	/* begin block 5 */
		// Start line: 1146
	/* end block 5 */
	// End Line: 1147

void SetClassViewable__11tCarManager13tCarClassTypeb
               (tCarManager *this,tCarClassType carClass,void *view)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (this->fNumCars != 0) {
    iVar4 = 0;
    do {
      pcVar1 = &this->fCars->fCarID + iVar4;
      iVar2 = (int)*pcVar1;
      if (iVar2 < 0) {
        this->fViewableCars[iVar2] = '\0';
      }
      else {
        if ((uint)(byte)pcVar1[2] == carClass) {
          this->fViewableCars[iVar2] = (uchar)view;
        }
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0xcc;
    } while (uVar3 < this->fNumCars);
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ SetCarViewable__11tCarManager10tCarModelsb(struct tCarManager *this /*$a0*/, enum tCarModels carModel /*$a1*/, void * view /*$a2*/)
 // line 563, offset 0x80016e74
	/* begin block 1 */
		// Start line: 564
		// Start offset: 0x80016E74
	/* end block 1 */
	// End offset: 0x80016E88
	// End Line: 567

	/* begin block 2 */
		// Start line: 1177
	/* end block 2 */
	// End Line: 1178

	/* begin block 3 */
		// Start line: 1183
	/* end block 3 */
	// End Line: 1184

	/* begin block 4 */
		// Start line: 1183
	/* end block 4 */
	// End Line: 1184

	/* begin block 5 */
		// Start line: 1184
	/* end block 5 */
	// End Line: 1185

	/* begin block 6 */
		// Start line: 1184
	/* end block 6 */
	// End Line: 1185

void SetCarViewable__11tCarManager10tCarModelsb(tCarManager *this,tCarModels carModel,void *view)

{
  int iVar1;
  
  iVar1 = (int)&this->fNumCars + carModel;
  *(undefined *)(iVar1 + 0x238) = (char)view;
  if (view == (void *)0x0) {
    *(undefined *)(iVar1 + 0x208) = 1;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetStockCar__11tCarManagersR8tCarInfo(struct tCarManager *this /*$s1*/, short carNumber /*$s2*/, struct tCarInfo *carInfo /*$s0*/)
 // line 573, offset 0x80016e90
	/* begin block 1 */
		// Start line: 574
		// Start offset: 0x80016E90
	/* end block 1 */
	// End offset: 0x80016F30
	// End Line: 585

	/* begin block 2 */
		// Start line: 1196
	/* end block 2 */
	// End Line: 1197

	/* begin block 3 */
		// Start line: 1203
	/* end block 3 */
	// End Line: 1204

	/* begin block 4 */
		// Start line: 1203
	/* end block 4 */
	// End Line: 1204

void GetStockCar__11tCarManagersR8tCarInfo(tCarManager *this,short carNumber,tCarInfo *carInfo)

{
  uchar uVar1;
  
  if ((uint)(int)carNumber < this->fNumCars) {
    blockmove((undefined4 *)(this->fCars + (int)carNumber),(undefined4 *)carInfo,0xcc);
    carInfo->fAvailable = this->fAvailableCars[(int)carInfo->fCarID];
    uVar1 = this->fViewableCars[(int)carInfo->fCarID];
    carInfo->fUpgrades = '\0';
    carInfo->fCountry = '\0';
    carInfo->fViewable = uVar1;
    carInfo->fCarIndex = (uchar)carNumber;
  }
  else {
    GetGarageCar__11tCarManagersR8tCarInfos(this,carNumber,carInfo,0);
    carInfo->fCarIndex = (uchar)carNumber;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetGarageCar__11tCarManagersR8tCarInfos(struct tCarManager *this /*$s2*/, short garageNumber /*$s4*/, struct tCarInfo *carInfo /*$s3*/, short playerNum /*$s1*/)
 // line 591, offset 0x80016f4c
	/* begin block 1 */
		// Start line: 592
		// Start offset: 0x80016F4C
	/* end block 1 */
	// End offset: 0x80016FA0
	// End Line: 598

	/* begin block 2 */
		// Start line: 1236
	/* end block 2 */
	// End Line: 1237

	/* begin block 3 */
		// Start line: 1243
	/* end block 3 */
	// End Line: 1244

	/* begin block 4 */
		// Start line: 1243
	/* end block 4 */
	// End Line: 1244

void GetGarageCar__11tCarManagersR8tCarInfos
               (tCarManager *this,short garageNumber,tCarInfo *carInfo,short playerNum)

{
  uchar uVar1;
  ushort uVar2;
  tCarInfo *ptVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = (uint)(ushort)playerNum;
  if ((playerNum == 1) &&
     (uVar2 = GetNumOwnedCars__11tCarManagers(this,1), (int)((uint)uVar2 << 0x10) < 1)) {
    uVar5 = 0;
  }
  iVar4 = (int)garageNumber;
  iVar6 = (int)(uVar5 << 0x10) >> 9;
  ptVar3 = GetCarFromID__11tCarManagers
                     (this,(short)(&this->fCarGarage[iVar4 - this->fNumCars].fCarID)[iVar6]);
  blockmove((undefined4 *)ptVar3,(undefined4 *)carInfo,0xcc);
  carInfo->fAvailable = '\x01';
  carInfo->fViewable = '\x01';
  carInfo->fUpgrades = (&this->fCarGarage[iVar4 - this->fNumCars].fUpgrades)[iVar6];
  uVar1 = (&this->fCarGarage[iVar4 - this->fNumCars].fCarColor)[iVar6];
  carInfo->fCountry = '\0';
  carInfo->fCarIndex = (uchar)garageNumber;
  carInfo->fColor = uVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ GetPinkSlipsCar__11tCarManagersR8tCarInfos(struct tCarManager *this /*$s1*/, short garageNumber /*$s4*/, struct tCarInfo *carInfo /*$s2*/, short playerNum /*$a3*/)
 // line 613, offset 0x80017058
	/* begin block 1 */
		// Start line: 614
		// Start offset: 0x80017058
	/* end block 1 */
	// End offset: 0x80017058
	// End Line: 614

	/* begin block 2 */
		// Start line: 1286
	/* end block 2 */
	// End Line: 1287

	/* begin block 3 */
		// Start line: 1293
	/* end block 3 */
	// End Line: 1294

	/* begin block 4 */
		// Start line: 1293
	/* end block 4 */
	// End Line: 1294

void GetPinkSlipsCar__11tCarManagersR8tCarInfos
               (tCarManager *this,short garageNumber,tCarInfo *carInfo,short playerNum)

{
  uchar uVar1;
  tCarInfo *ptVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)garageNumber;
  iVar4 = (int)((uint)(ushort)playerNum << 0x10) >> 9;
  ptVar2 = GetCarFromID__11tCarManagers
                     (this,(short)(&this->fPinkSlipsCars[iVar3 - this->fNumCars].fCarID)[iVar4]);
  blockmove((undefined4 *)ptVar2,(undefined4 *)carInfo,0xcc);
  carInfo->fAvailable = '\x01';
  carInfo->fViewable = '\x01';
  carInfo->fUpgrades = (&this->fPinkSlipsCars[iVar3 - this->fNumCars].fUpgrades)[iVar4];
  uVar1 = (&this->fPinkSlipsCars[iVar3 - this->fNumCars].fCarColor)[iVar4];
  carInfo->fCountry = '\0';
  carInfo->fCarIndex = (uchar)garageNumber;
  carInfo->fColor = uVar1;
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ LoadDescription__11tCarManager(struct tCarManager *this /*$s0*/)
 // line 645, offset 0x80017134
	/* begin block 1 */
		// Start line: 646
		// Start offset: 0x80017134
		// Variables:
	// 		char *input; // $s1
	// 		char *data; // $a0
	// 		char filename[80]; // stack offset -96
	// 		short i; // $t1
	// 		short j; // $a3
	/* end block 1 */
	// End offset: 0x800172D8
	// End Line: 703

	/* begin block 2 */
		// Start line: 1283
	/* end block 2 */
	// End Line: 1284

	/* begin block 3 */
		// Start line: 1343
	/* end block 3 */
	// End Line: 1344

	/* begin block 4 */
		// Start line: 1343
	/* end block 4 */
	// End Line: 1344

void LoadDescription__11tCarManager(tCarManager *this)

{
  ulong *puVar1;
  int iVar2;
  tCarInfo *ptVar3;
  ulong uVar4;
  tCarInfo *ptVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char acStack96 [80];
  
  sprintf(acStack96,&DAT_800101b4,PTR_801164fc,s_fecars_car_800101bc);
  ReleaseDescription__11tCarManager(this);
  puVar1 = (ulong *)loadfileadr(acStack96,0x10);
  uVar4 = *puVar1;
  this->fNumCars = uVar4;
  ptVar5 = (tCarInfo *)reservememadr(s_Car_List_800101c8,uVar4 * 0xcc,0);
  this->fCars = ptVar5;
  blockmove(puVar1 + 1,(undefined4 *)ptVar5,this->fNumCars * 0xcc);
  iVar8 = 0;
  if (this->fNumCars != 0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 >> 0x10;
      iVar7 = 0;
      if (this->fCars[iVar2].fAvailable != '\0') {
        this->fAvailableCars[(int)this->fCars[iVar2].fCarID] = '\x01';
        this->fViewableCars[(int)this->fCars[iVar2].fCarID] = '\x01';
      }
      ptVar3 = this->fCars + iVar2;
      ptVar5 = ptVar3;
      if ((uint)(byte)ptVar3->fNumLightColors + (uint)(byte)ptVar3->fNumDarkColors != 0) {
        do {
          if ((int)ptVar3->fColorOrder[0] == (uint)ptVar5->fDefaultColor) {
            ptVar5->fDefaultColor = (uchar)iVar7;
            break;
          }
          ptVar5 = this->fCars + iVar2;
          iVar6 = (iVar7 + 1) * 0x10000 >> 0x10;
          ptVar3 = (tCarInfo *)(&ptVar5->fCarID + iVar6);
          iVar7 = iVar7 + 1;
        } while (iVar6 < (int)((uint)(byte)ptVar5->fNumLightColors +
                              (uint)(byte)ptVar5->fNumDarkColors));
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar8 * 0x10000;
    } while ((uint)(iVar8 * 0x10000 >> 0x10) < this->fNumCars);
  }
  purgememadr((int)puVar1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ ReleaseDescription__11tCarManager(struct tCarManager *this /*$s0*/)
 // line 712, offset 0x800172f4
	/* begin block 1 */
		// Start line: 713
		// Start offset: 0x800172F4
	/* end block 1 */
	// End offset: 0x8001731C
	// End Line: 717

	/* begin block 2 */
		// Start line: 1501
	/* end block 2 */
	// End Line: 1502

	/* begin block 3 */
		// Start line: 1511
	/* end block 3 */
	// End Line: 1512

	/* begin block 4 */
		// Start line: 1511
	/* end block 4 */
	// End Line: 1512

void ReleaseDescription__11tCarManager(tCarManager *this)

{
  if (this->fCars != (tCarInfo *)0x0) {
    purgememadr((int)this->fCars);
  }
  this->fCars = (tCarInfo *)0x0;
  this->fNumCars = 0;
  return;
}



// decompiled code
// original method signature: 
// short /*$ra*/ GetNumOwnedCars__11tCarManagers(struct tCarManager *this /*$a0*/, short playerNum /*$a1*/)
 // line 723, offset 0x80017334
	/* begin block 1 */
		// Start line: 724
		// Start offset: 0x80017334
		// Variables:
	// 		int i; // $v1
	// 		short num; // $a2
	/* end block 1 */
	// End offset: 0x8001736C
	// End Line: 736

	/* begin block 2 */
		// Start line: 1527
	/* end block 2 */
	// End Line: 1528

	/* begin block 3 */
		// Start line: 1533
	/* end block 3 */
	// End Line: 1534

	/* begin block 4 */
		// Start line: 1533
	/* end block 4 */
	// End Line: 1534

	/* begin block 5 */
		// Start line: 1535
	/* end block 5 */
	// End Line: 1536

short GetNumOwnedCars__11tCarManagers(tCarManager *this,short playerNum)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  iVar1 = 0;
  iVar2 = (int)((uint)(ushort)playerNum << 0x10) >> 9;
  do {
    if (-1 < (&this->fCarGarage[0].fCarID)[iVar2]) {
      sVar3 = sVar3 + 1;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x20);
  return sVar3;
}



// decompiled code
// original method signature: 
// short /*$ra*/ GetNumTourneyCars__11tCarManagers(struct tCarManager *this /*$s3*/, short playerNum /*$a1*/)
 // line 741, offset 0x80017378
	/* begin block 1 */
		// Start line: 742
		// Start offset: 0x80017378
		// Variables:
	// 		int i; // $s1
	// 		short result; // $s2
	// 		struct tCarInfo carInfo; // stack offset -232
	/* end block 1 */
	// End offset: 0x800173FC
	// End Line: 762

	/* begin block 2 */
		// Start line: 1563
	/* end block 2 */
	// End Line: 1564

	/* begin block 3 */
		// Start line: 1569
	/* end block 3 */
	// End Line: 1570

	/* begin block 4 */
		// Start line: 1569
	/* end block 4 */
	// End Line: 1570

short GetNumTourneyCars__11tCarManagers(tCarManager *this,short playerNum)

{
  tCarInfo *ptVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  tCarInfo local_e8;
  
  sVar6 = 0;
  iVar5 = 0;
  iVar4 = (int)((uint)(ushort)playerNum << 0x10) >> 9;
  do {
    iVar3 = (int)&this->fNumCars + iVar4;
    local_e8.fCarID = *(char *)(iVar3 + 8);
    if (-1 < *(char *)(iVar3 + 8)) {
      local_e8.fUpgrades = *(uchar *)(iVar3 + 9);
      ptVar1 = GetCarFromID__11tCarManagers(this,(short)*(char *)(iVar3 + 8));
      local_e8.fCarClass = ptVar1->fCarClass;
      pvVar2 = ValidCar__18tTournamentManagerR8tCarInfo(&tournamentManager,&local_e8);
      if (pvVar2 != (void *)0x0) {
        sVar6 = sVar6 + 1;
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 0x20);
  return sVar6;
}



// decompiled code
// original method signature: 
// short /*$ra*/ GetNumPinkSlipsCars__11tCarManagers(struct tCarManager *this /*$a0*/, short playerNum /*$a1*/)
 // line 766, offset 0x80017420
	/* begin block 1 */
		// Start line: 767
		// Start offset: 0x80017420
		// Variables:
	// 		int i; // $v1
	// 		short num; // $a2
	/* end block 1 */
	// End offset: 0x80017458
	// End Line: 779

	/* begin block 2 */
		// Start line: 1630
	/* end block 2 */
	// End Line: 1631

	/* begin block 3 */
		// Start line: 1635
	/* end block 3 */
	// End Line: 1636

	/* begin block 4 */
		// Start line: 1635
	/* end block 4 */
	// End Line: 1636

	/* begin block 5 */
		// Start line: 1637
	/* end block 5 */
	// End Line: 1638

short GetNumPinkSlipsCars__11tCarManagers(tCarManager *this,short playerNum)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  iVar1 = 0;
  iVar2 = (int)((uint)(ushort)playerNum << 0x10) >> 9;
  do {
    if (-1 < (&this->fPinkSlipsCars[0].fCarID)[iVar2]) {
      sVar3 = sVar3 + 1;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x20);
  return sVar3;
}



// decompiled code
// original method signature: 
// short /*$ra*/ GetClassList__11tCarManager13tCarClassTypesP10tCarModels(struct tCarManager *this /*$a0*/, enum tCarClassType carClass /*$a1*/, short numElements /*$t3*/, enum tCarModels *models /*$a3*/)
 // line 787, offset 0x80017464
	/* begin block 1 */
		// Start line: 788
		// Start offset: 0x80017464
		// Variables:
	// 		unsigned short i; // $t0
	// 		short numCars; // $t1
	/* end block 1 */
	// End offset: 0x8001756C
	// End Line: 810

	/* begin block 2 */
		// Start line: 1668
	/* end block 2 */
	// End Line: 1669

	/* begin block 3 */
		// Start line: 1677
	/* end block 3 */
	// End Line: 1678

	/* begin block 4 */
		// Start line: 1677
	/* end block 4 */
	// End Line: 1678

	/* begin block 5 */
		// Start line: 1679
	/* end block 5 */
	// End Line: 1680

short GetClassList__11tCarManager13tCarClassTypesP10tCarModels
                (tCarManager *this,tCarClassType carClass,short numElements,tCarModels *models)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  if (this->fNumCars != 0) {
    uVar1 = 0;
    do {
      if ((uint)this->fCars[uVar1].fCarClass == carClass) {
        if ((int)(short)uVar5 < (int)numElements) {
          models[(int)(short)uVar5] = (int)this->fCars[uVar1].fCarID;
        }
        uVar5 = uVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar1 = uVar4 & 0xffff;
    } while ((uVar4 & 0xffff) < this->fNumCars);
  }
  if ((int)(uint)uVar5 < (int)numElements) {
    iVar2 = (int)(short)uVar5;
    uVar3 = uVar5;
    do {
      uVar4 = (uint)uVar3;
      if (iVar2 == 0) {
        trap(0x1c00);
      }
      if ((iVar2 == -1) && (uVar4 == 0x80000000)) {
        trap(0x1800);
      }
      uVar3 = uVar3 + 1;
      models[uVar4] = models[(int)uVar4 % iVar2];
    } while ((int)(uint)uVar3 < (int)numElements);
  }
  return (short)uVar5;
}



// decompiled code
// original method signature: 
// void /*$ra*/ InitializeIngameCarList__11tCarManager(struct tCarManager *this /*$a0*/)
 // line 815, offset 0x80017578
	/* begin block 1 */
		// Start line: 816
		// Start offset: 0x80017578
		// Variables:
	// 		short i; // $a1
	// 		short j; // $a0
	/* end block 1 */
	// End offset: 0x800175F0
	// End Line: 822

	/* begin block 2 */
		// Start line: 1733
	/* end block 2 */
	// End Line: 1734

	/* begin block 3 */
		// Start line: 1739
	/* end block 3 */
	// End Line: 1740

	/* begin block 4 */
		// Start line: 1739
	/* end block 4 */
	// End Line: 1740

	/* begin block 5 */
		// Start line: 1743
	/* end block 5 */
	// End Line: 1744

void InitializeIngameCarList__11tCarManager(tCarManager *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = 0;
    iVar1 = 0;
    do {
      (&gCarSelected)[(iVar1 >> 0x10) + (int)(short)iVar3 * 0x32] = '\0';
      iVar2 = iVar2 + 1;
      iVar1 = iVar2 * 0x10000;
    } while (iVar2 * 0x10000 >> 0x10 < 0x32);
    iVar3 = iVar3 + 1;
  } while (iVar3 * 0x10000 >> 0x10 < 2);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ IsCarAnAddedModel__11tCarManagerR10tCarModelsRc(struct tCarManager *this /*$a0*/, enum tCarModels *model /*$s1*/, char *color /*$s0*/)
 // line 827, offset 0x800175f8
	/* begin block 1 */
		// Start line: 828
		// Start offset: 0x800175F8
	/* end block 1 */
	// End offset: 0x80017638
	// End Line: 833

	/* begin block 2 */
		// Start line: 1757
	/* end block 2 */
	// End Line: 1758

	/* begin block 3 */
		// Start line: 1763
	/* end block 3 */
	// End Line: 1764

	/* begin block 4 */
		// Start line: 1763
	/* end block 4 */
	// End Line: 1764

void * IsCarAnAddedModel__11tCarManagerR10tCarModelsRc
                 (tCarManager *this,tCarModels *model,char *color)

{
  tCarInfo *ptVar1;
  int iVar2;
  
  ptVar1 = GetCarFromID__11tCarManagers(this,*(short *)model);
  iVar2 = (int)ptVar1->fColorOrder[(uint)(byte)*color];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 7;
  }
  return (void *)(uint)((&gCarSelected)[*model + (iVar2 >> 3) * 0x32] != '\0');
}



// decompiled code
// original method signature: 
// void /*$ra*/ AddCarToIngameList__11tCarManagerR10tCarModelsRc(struct tCarManager *this /*$a0*/, enum tCarModels *model /*$s1*/, char *color /*$s0*/)
 // line 838, offset 0x80017678
	/* begin block 1 */
		// Start line: 839
		// Start offset: 0x80017678
		// Variables:
	// 		short carColor; // $a1
	/* end block 1 */
	// End offset: 0x800176C8
	// End Line: 844

	/* begin block 2 */
		// Start line: 1779
	/* end block 2 */
	// End Line: 1780

	/* begin block 3 */
		// Start line: 1785
	/* end block 3 */
	// End Line: 1786

	/* begin block 4 */
		// Start line: 1785
	/* end block 4 */
	// End Line: 1786

void AddCarToIngameList__11tCarManagerR10tCarModelsRc
               (tCarManager *this,tCarModels *model,char *color)

{
  tCarInfo *ptVar1;
  uint uVar2;
  uint uVar3;
  
  ptVar1 = GetCarFromID__11tCarManagers(this,*(short *)model);
  uVar3 = SEXT14(ptVar1->fColorOrder[(uint)(byte)*color]);
  uVar2 = uVar3;
  if ((int)uVar3 < 0) {
    uVar2 = uVar3 + 7;
  }
  (&gCarSelected)[*model + ((int)uVar2 >> 3) * 0x32] =
       (&gCarSelected)[*model + ((int)uVar2 >> 3) * 0x32] | (byte)(1 << (uVar3 & 7));
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ FindSimilarCar__11tCarManagerR10tCarModelsRcsP10tCarModels(struct tCarManager *this /*$a0*/, enum tCarModels *model /*$s1*/, char *color /*$s0*/)
 // line 851, offset 0x80017718
	/* begin block 1 */
		// Start line: 852
		// Start offset: 0x80017718
		// Variables:
	// 		short i; // $t0
	// 		short j; // $t4
	// 		char carColor; // $a0
	// 		struct tCarInfo *carInfo; // $t3
	// 		short colorScheme; // $t2
	// 		short numColors; // $t6
	/* end block 1 */
	// End offset: 0x800178B8
	// End Line: 884

	/* begin block 2 */
		// Start line: 1803
	/* end block 2 */
	// End Line: 1804

	/* begin block 3 */
		// Start line: 1811
	/* end block 3 */
	// End Line: 1812

	/* begin block 4 */
		// Start line: 1811
	/* end block 4 */
	// End Line: 1812

void * FindSimilarCar__11tCarManagerR10tCarModelsRcsP10tCarModels
                 (tCarManager *this,tCarModels *model,char *color)

{
  byte bVar1;
  tCarInfo *ptVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  ptVar2 = GetCarFromID__11tCarManagers(this,*(short *)model);
  uVar3 = SEXT14(ptVar2->fColorOrder[(uint)(byte)*color]);
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 7;
  }
  uVar3 = uVar3 >> 3;
  iVar10 = 0;
  iVar4 = (uint)(byte)ptVar2->fNumLightColors + (uint)(byte)ptVar2->fNumDarkColors;
  do {
    iVar9 = 0;
    if (iVar4 != 0) {
      do {
        iVar8 = iVar4 * 0x10000 >> 0x10;
        iVar5 = (int)(short)iVar9 + (uint)(byte)*color;
        if (iVar8 == 0) {
          trap(0x1c00);
        }
        if ((iVar8 == -1) && (iVar5 == -0x80000000)) {
          trap(0x1800);
        }
        uVar6 = (uint)((byte)ptVar2->fColorOrder[iVar5 % iVar8] >> 3);
        if (uVar6 == (int)(short)uVar3) {
          bVar1 = (&gCarSelected)[*model + uVar6 * 0x32];
          uVar7 = (uint)(byte)ptVar2->fColorOrder[iVar5 % iVar8] & 7;
          if (((int)(uint)bVar1 >> uVar7 & 1U) == 0) {
            (&gCarSelected)[*model + uVar6 * 0x32] = bVar1 | (byte)(1 << uVar7);
            iVar10 = (int)(short)iVar9 + (uint)(byte)*color;
            if (iVar8 == 0) {
              trap(0x1c00);
            }
            if ((iVar8 == -1) && (iVar10 == -0x80000000)) {
              trap(0x1800);
            }
            *color = (char)(iVar10 % iVar8);
            return &DAT_00000001;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 * 0x10000 >> 0x10 < iVar4);
    }
    uVar3 = 1 - uVar3;
    iVar10 = iVar10 + 1;
  } while (iVar10 * 0x10000 >> 0x10 < 2);
  return &DAT_00000001;
}



// decompiled code
// original method signature: 
// struct tListIteratorCar * /*$ra*/ __16tListIteratorCarPcP11tCarManager(struct tListIteratorCar *this /*$s0*/, char *valPtr /*$v0*/, struct tCarManager *carManager /*$s1*/)
 // line 890, offset 0x800178cc
	/* begin block 1 */
		// Start line: 891
		// Start offset: 0x800178CC
	/* end block 1 */
	// End offset: 0x800178CC
	// End Line: 891

	/* begin block 2 */
		// Start line: 1894
	/* end block 2 */
	// End Line: 1895

	/* begin block 3 */
		// Start line: 1901
	/* end block 3 */
	// End Line: 1902

	/* begin block 4 */
		// Start line: 1901
	/* end block 4 */
	// End Line: 1902

tListIteratorCar *
__16tListIteratorCarPcP11tCarManager(tListIteratorCar *this,char *valPtr,tCarManager *carManager)

{
  __13tListIteratorPsPc((tListIterator *)this,(short *)0x0,valPtr);
  *(undefined4 *)((this->tListIterator)._vf + 2) = 0x80010208;
  this->fCarManager = carManager;
  this->fCarListFilter = 1;
  this->fNameLength = cnl_Medium;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._16tListIteratorCar(struct tListIteratorCar *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 898, offset 0x80017928
	/* begin block 1 */
		// Start line: 899
		// Start offset: 0x80017928
	/* end block 1 */
	// End offset: 0x80017928
	// End Line: 899

	/* begin block 2 */
		// Start line: 1918
	/* end block 2 */
	// End Line: 1919

	/* begin block 3 */
		// Start line: 1922
	/* end block 3 */
	// End Line: 1923

	/* begin block 4 */
		// Start line: 1922
	/* end block 4 */
	// End Line: 1923

void ___16tListIteratorCar(tListIteratorCar *this,int __in_chrg)

{
  *(undefined4 *)((this->tListIterator)._vf + 2) = 0x80010208;
  ___13tListIterator((tListIterator *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ Value__16tListIteratorCar7tPlayer(struct tListIteratorCar *this /*$a0*/, enum tPlayer atIndex /*$a1*/)
 // line 902, offset 0x80017950
	/* begin block 1 */
		// Start line: 903
		// Start offset: 0x80017950
		// Variables:
	// 		short i; // $v1
	/* end block 1 */
	// End offset: 0x80017960
	// End Line: 906

	/* begin block 2 */
		// Start line: 1926
	/* end block 2 */
	// End Line: 1927

	/* begin block 3 */
		// Start line: 1930
	/* end block 3 */
	// End Line: 1931

	/* begin block 4 */
		// Start line: 1930
	/* end block 4 */
	// End Line: 1931

	/* begin block 5 */
		// Start line: 1931
	/* end block 5 */
	// End Line: 1932

	/* begin block 6 */
		// Start line: 1931
	/* end block 6 */
	// End Line: 1932

char Value__16tListIteratorCar7tPlayer(tListIteratorCar *this,tPlayer atIndex)

{
  short sVar1;
  
  sVar1 = 0;
  if (atIndex != ~kPlayerOne) {
    sVar1 = (short)atIndex;
  }
  return (this->tListIterator).fValue[(int)sVar1];
}



// decompiled code
// original method signature: 
// short /*$ra*/ TextValue__16tListIteratorCar7tPlayer(struct tListIteratorCar *this /*$a0*/, enum tPlayer atIndex /*$a1*/)
 // line 909, offset 0x8001797c
	/* begin block 1 */
		// Start line: 910
		// Start offset: 0x8001797C
		// Variables:
	// 		short nameBase[3]; // stack offset -8
	// 		short i; // $v1
	/* end block 1 */
	// End offset: 0x80017A94
	// End Line: 922

	/* begin block 2 */
		// Start line: 1940
	/* end block 2 */
	// End Line: 1941

	/* begin block 3 */
		// Start line: 1944
	/* end block 3 */
	// End Line: 1945

	/* begin block 4 */
		// Start line: 1944
	/* end block 4 */
	// End Line: 1945

short TextValue__16tListIteratorCar7tPlayer(tListIteratorCar *this,tPlayer atIndex)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  tCarManager *ptVar5;
  short local_8 [4];
  
  sVar1 = 0;
  if (atIndex != ~kPlayerOne) {
    sVar1 = (short)atIndex;
  }
  iVar4 = (int)sVar1;
  ptVar5 = this->fCarManager;
  uVar2 = (uint)(byte)(this->tListIterator).fValue[iVar4];
  uVar3 = ptVar5->fNumCars;
  if (uVar2 < uVar3) {
    sVar1 = local_8[this->fNameLength] + (short)ptVar5->fCars[uVar2].fCarID;
  }
  else {
    if ((this->fCarListFilter & 0x20U) == 0) {
      sVar1 = local_8[this->fNameLength] +
              (short)ptVar5->fCarGarage[iVar4 * 0x20 + (uVar2 - uVar3)].fCarID;
    }
    else {
      sVar1 = local_8[this->fNameLength] +
              (short)ptVar5->fPinkSlipsCars[iVar4 * 0x20 + (uVar2 - uVar3)].fCarID;
    }
  }
  return sVar1;
}



// decompiled code
// original method signature: 
// void /*$ra*/ AdjustPosition__16tListIteratorCar7tPlayers(struct tListIteratorCar *this /*$s2*/, enum tPlayer atIndex /*stack 4*/, short direction /*$s7*/)
 // line 925, offset 0x80017a9c
	/* begin block 1 */
		// Start line: 926
		// Start offset: 0x80017A9C
		// Variables:
	// 		short i; // $s4
	// 		char oldValue; // stack offset -56
	// 		char oldCountry; // stack offset -48
	// 		struct tCarInfo *carInfo; // $s0
	// 		int firstCar; // $s5
	// 		int lastCar; // $s3
	// 		struct tOwnedCarInfo *ownedCars; // $s1
	/* end block 1 */
	// End offset: 0x80018064
	// End Line: 1059

	/* begin block 2 */
		// Start line: 1972
	/* end block 2 */
	// End Line: 1973

	/* begin block 3 */
		// Start line: 1976
	/* end block 3 */
	// End Line: 1977

	/* begin block 4 */
		// Start line: 1976
	/* end block 4 */
	// End Line: 1977

void AdjustPosition__16tListIteratorCar7tPlayers
               (tListIteratorCar *this,tPlayer atIndex,short direction)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  byte *pbVar6;
  tOwnedCarInfo *ptVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  tCarManager *this_00;
  uint uVar12;
  tCarInfo *ptVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ushort local_res4;
  byte local_30;
  
  uVar12 = (uint)(ushort)direction;
  local_res4 = 0;
  if (atIndex != ~kPlayerOne) {
    local_res4 = (ushort)atIndex;
  }
  ptVar13 = (tCarInfo *)0x0;
  pbVar6 = (byte *)((this->tListIterator).fValue + (int)(short)local_res4);
  uVar10 = (uint)*pbVar6;
  bVar2 = *pbVar6;
  if (uVar10 < this->fCarManager->fNumCars) {
    ptVar13 = this->fCarManager->fCars + uVar10;
    local_30 = frontEnd.carCountry[(int)ptVar13->fCarID + (int)(short)local_res4 * 0x30];
  }
  else {
    local_30 = 0;
  }
  uVar16 = 0;
  if ((this->fCarListFilter & 0x89U) == 0) {
    if ((this->fCarListFilter & 0x42U) == 0) {
      pcVar9 = &this->fCarManager->fPinkSlipsCars[0].fCarID + ((int)((uint)local_res4 << 0x10) >> 9)
      ;
      cVar1 = *pcVar9;
      uVar16 = this->fCarManager->fNumCars;
      iVar11 = 0;
      while (-1 < cVar1) {
        pcVar9 = pcVar9 + 4;
        cVar1 = *pcVar9;
        iVar11 = iVar11 + 1;
      }
    }
    else {
      iVar11 = (int)((uint)local_res4 << 0x10) >> 0x10;
      this_00 = this->fCarManager;
      ptVar7 = this_00->fCarGarage + iVar11 * 0x20;
      uVar16 = this_00->fNumCars;
      if ((iVar11 == 1) &&
         (uVar4 = GetNumOwnedCars__11tCarManagers(this_00,1), (int)((uint)uVar4 << 0x10) < 1)) {
        ptVar7 = this->fCarManager->fCarGarage;
      }
      iVar11 = 0;
      if (-1 < ptVar7->fCarID) {
        do {
          ptVar7 = ptVar7 + 1;
          iVar11 = iVar11 + 1;
        } while (-1 < ptVar7->fCarID);
        uVar14 = iVar11 + uVar16;
        goto LAB_80017c4c;
      }
    }
    uVar14 = iVar11 + uVar16;
  }
  else {
    uVar14 = this->fCarManager->fNumCars;
  }
LAB_80017c4c:
  iVar11 = (int)(short)local_res4;
  pbVar6 = (byte *)((this->tListIterator).fValue + iVar11);
  if ((int)uVar14 <= (int)(uint)*pbVar6) {
    *pbVar6 = (char)uVar14 - 1;
  }
  pbVar6 = (byte *)((this->tListIterator).fValue + iVar11);
  if ((int)(uint)*pbVar6 < (int)uVar16) {
    *pbVar6 = (byte)uVar16;
  }
  if ((int)uVar16 < (int)uVar14) {
    iVar15 = iVar11 * 0x30;
    do {
      pbVar6 = (byte *)((this->tListIterator).fValue + iVar11);
      bVar3 = *pbVar6;
      cVar1 = (char)direction;
      if ((uint)bVar3 < this->fCarManager->fNumCars) {
        ptVar13 = this->fCarManager->fCars + (uint)bVar3;
        if (ptVar13->fCarClass == '\a') {
          iVar8 = (int)ptVar13->fCarID + iVar15;
          frontEnd.carCountry[iVar8] = cVar1 + frontEnd.carCountry[iVar8];
          iVar8 = (int)ptVar13->fCarID + iVar15;
          if (frontEnd.carCountry[iVar8] < '\x05') {
            if (frontEnd.carCountry[iVar8] < '\0') {
              frontEnd.carCountry[iVar8] = '\x04';
              pcVar9 = (this->tListIterator).fValue + iVar11;
              *pcVar9 = *pcVar9 + -1;
              uVar10 = (uint)(byte)(this->tListIterator).fValue[iVar11];
              if ((int)uVar16 <= (int)uVar10) {
                this_00 = this->fCarManager;
                goto LAB_80017ed4;
              }
            }
          }
          else {
            frontEnd.carCountry[iVar8] = '\0';
            pcVar9 = (this->tListIterator).fValue + iVar11;
            *pcVar9 = *pcVar9 + '\x01';
            uVar10 = (uint)(byte)(this->tListIterator).fValue[iVar11];
            if ((int)uVar10 < (int)uVar14) {
              this_00 = this->fCarManager;
              goto LAB_80017e70;
            }
          }
        }
        else {
          iVar8 = (int)ptVar13->fCarID + iVar15;
          if ((int)(uVar12 << 0x10) < 1) {
            frontEnd.carCountry[iVar8] = '\x04';
          }
          else {
            frontEnd.carCountry[iVar8] = '\0';
          }
          pcVar9 = (this->tListIterator).fValue + iVar11;
          *pcVar9 = cVar1 + *pcVar9;
          if (((int)(uVar12 << 0x10) < 1) ||
             (pbVar6 = (byte *)((this->tListIterator).fValue + iVar11),
             (int)uVar14 <= (int)(char)*pbVar6)) {
            if (((int)(uVar12 << 0x10) < 0) &&
               (pbVar6 = (byte *)((this->tListIterator).fValue + iVar11),
               (int)uVar16 <= (int)(char)*pbVar6)) {
              uVar10 = (uint)*pbVar6;
              this_00 = this->fCarManager;
LAB_80017ed4:
              ptVar13 = this_00->fCars + uVar10;
              frontEnd.carCountry[(int)ptVar13->fCarID + iVar15] = '\x04';
            }
          }
          else {
            uVar10 = (uint)*pbVar6;
            this_00 = this->fCarManager;
LAB_80017e70:
            ptVar13 = this_00->fCars + uVar10;
            frontEnd.carCountry[(int)ptVar13->fCarID + iVar15] = '\0';
          }
        }
      }
      else {
        *pbVar6 = cVar1 + bVar3;
      }
      pbVar6 = (byte *)((this->tListIterator).fValue + iVar11);
      if ((int)uVar14 <= (int)(char)*pbVar6) {
        *pbVar6 = (byte)uVar16;
        uVar10 = (uint)(byte)(this->tListIterator).fValue[iVar11];
        if (uVar10 < this->fCarManager->fNumCars) {
          ptVar13 = this->fCarManager->fCars + uVar10;
          frontEnd.carCountry[(int)ptVar13->fCarID + iVar15] = '\0';
        }
      }
      pcVar9 = (this->tListIterator).fValue + iVar11;
      if ((int)*pcVar9 < (int)uVar16) {
        *pcVar9 = (char)uVar14 + -1;
        uVar10 = (uint)(byte)(this->tListIterator).fValue[iVar11];
        if (uVar10 < this->fCarManager->fNumCars) {
          ptVar13 = this->fCarManager->fCars + uVar10;
          frontEnd.carCountry[(int)ptVar13->fCarID + iVar15] = '\x04';
        }
      }
      pbVar6 = (byte *)((this->tListIterator).fValue + iVar11);
      bVar3 = *pbVar6;
    } while (((bVar2 != bVar3) ||
             (((int)(char)bVar3 < (int)this->fCarManager->fNumCars &&
              ((int)frontEnd.carCountry[(int)ptVar13->fCarID + iVar15] != (uint)local_30)))) &&
            (puVar5 = (undefined *)ValidCar__16tListIteratorCar7tPlayerc(this,atIndex,*pbVar6),
            puVar5 != &DAT_00000001));
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Increment__16tListIteratorCar7tPlayer(struct tListIteratorCar *this /*$a0*/, enum tPlayer atIndex /*$a1*/)
 // line 1062, offset 0x80018094
	/* begin block 1 */
		// Start line: 1063
		// Start offset: 0x80018094
	/* end block 1 */
	// End offset: 0x80018094
	// End Line: 1063

	/* begin block 2 */
		// Start line: 2267
	/* end block 2 */
	// End Line: 2268

	/* begin block 3 */
		// Start line: 2270
	/* end block 3 */
	// End Line: 2271

	/* begin block 4 */
		// Start line: 2270
	/* end block 4 */
	// End Line: 2271

void Increment__16tListIteratorCar7tPlayer(tListIteratorCar *this,tPlayer atIndex)

{
  AdjustPosition__16tListIteratorCar7tPlayers(this,atIndex,1);
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decrement__16tListIteratorCar7tPlayer(struct tListIteratorCar *this /*$a0*/, enum tPlayer atIndex /*$a1*/)
 // line 1067, offset 0x800180b4
	/* begin block 1 */
		// Start line: 1068
		// Start offset: 0x800180B4
	/* end block 1 */
	// End offset: 0x800180B4
	// End Line: 1068

	/* begin block 2 */
		// Start line: 2276
	/* end block 2 */
	// End Line: 2277

	/* begin block 3 */
		// Start line: 2280
	/* end block 3 */
	// End Line: 2281

	/* begin block 4 */
		// Start line: 2280
	/* end block 4 */
	// End Line: 2281

void Decrement__16tListIteratorCar7tPlayer(tListIteratorCar *this,tPlayer atIndex)

{
  AdjustPosition__16tListIteratorCar7tPlayers(this,atIndex,-1);
  return;
}



// decompiled code
// original method signature: 
// void * /*$ra*/ ValidCar__16tListIteratorCar7tPlayerc(struct tListIteratorCar *this /*$s4*/, enum tPlayer atIndex /*$a1*/, char carNumber /*$s2*/)
 // line 1072, offset 0x800180d4
	/* begin block 1 */
		// Start line: 1073
		// Start offset: 0x800180D4
		// Variables:
	// 		short i; // $s1
	// 		short k; // $s3
	// 		void * result; // $s0
	// 		short carID; // $a1
	// 		struct tCarInfo *carInfo; // $a0
	// 		struct tCarInfo garageCar; // stack offset -280

		/* begin block 1.1 */
			// Start line: 1084
			// Start offset: 0x8001813C

			/* begin block 1.1.1 */
				// Start line: 1107
				// Start offset: 0x8001824C

				/* begin block 1.1.1.1 */
					// Start line: 1107
					// Start offset: 0x8001824C

					/* begin block 1.1.1.1.1 */
						// Start line: 1116
						// Start offset: 0x80018290

						/* begin block 1.1.1.1.1.1 */
							// Start line: 1121
							// Start offset: 0x800182B8

							/* begin block 1.1.1.1.1.1.1 */
								// Start line: 1122
								// Start offset: 0x80018308

								/* begin block 1.1.1.1.1.1.1.1 */
									// Start line: 1142
									// Start offset: 0x8001836C

									/* begin block 1.1.1.1.1.1.1.1.1 */
										// Start line: 1143
										// Start offset: 0x80018380

										/* begin block 1.1.1.1.1.1.1.1.1.1 */
											// Start line: 1144
											// Start offset: 0x80018380

											/* begin block 1.1.1.1.1.1.1.1.1.1.1 */
												// Start line: 1145
												// Start offset: 0x800183C4
												// Variables:
											// 		struct tTrackInformation trackInfo; // stack offset -72
											/* end block 1.1.1.1.1.1.1.1.1.1.1 */
											// End offset: 0x800183F8
											// End Line: 1151
										/* end block 1.1.1.1.1.1.1.1.1.1 */
										// End offset: 0x800183F8
										// End Line: 1151
									/* end block 1.1.1.1.1.1.1.1.1 */
									// End offset: 0x800183F8
									// End Line: 1151
								/* end block 1.1.1.1.1.1.1.1 */
								// End offset: 0x800183F8
								// End Line: 1151
							/* end block 1.1.1.1.1.1.1 */
							// End offset: 0x80018418
							// End Line: 1159
						/* end block 1.1.1.1.1.1 */
						// End offset: 0x80018418
						// End Line: 1159
					/* end block 1.1.1.1.1 */
					// End offset: 0x8001847C
					// End Line: 1164
				/* end block 1.1.1.1 */
				// End offset: 0x8001847C
				// End Line: 1164
			/* end block 1.1.1 */
			// End offset: 0x8001847C
			// End Line: 1164
		/* end block 1.1 */
		// End offset: 0x8001847C
		// End Line: 1164
	/* end block 1 */
	// End offset: 0x80018480
	// End Line: 1169

	/* begin block 2 */
		// Start line: 2286
	/* end block 2 */
	// End Line: 2287

	/* begin block 3 */
		// Start line: 2290
	/* end block 3 */
	// End Line: 2291

	/* begin block 4 */
		// Start line: 2290
	/* end block 4 */
	// End Line: 2291

void * ValidCar__16tListIteratorCar7tPlayerc(tListIteratorCar *this,tPlayer atIndex,char carNumber)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  tCarInfo *carInfo;
  void *pvVar4;
  tCarManager *this_00;
  int iVar5;
  undefined *puVar6;
  tPlayer tVar7;
  uint uVar8;
  tPlayer tVar9;
  tCarInfo tStack280;
  tTrackInformation tStack72;
  
  tVar7 = kPlayerOne;
  if (atIndex != ~kPlayerOne) {
    tVar7 = atIndex;
  }
  puVar6 = (undefined *)0x0;
  tVar9 = tVar7;
  if (((short)tVar7 == 1) &&
     (uVar3 = GetNumOwnedCars__11tCarManagers(this->fCarManager,1), tVar9 = tVar7,
     (int)((uint)uVar3 << 0x10) < 1)) {
    tVar9 = kPlayerOne;
  }
  this_00 = this->fCarManager;
  if (this_00->fNumCars <= (uint)(byte)carNumber) {
    uVar8 = (uint)(byte)carNumber - (uint)*(byte *)&this_00->fNumCars;
    if ((this->fCarListFilter & 0x20U) != 0) {
      if ((&this_00->fPinkSlipsCars[uVar8 & 0xff].fCarID)[(int)(tVar7 << 0x10) >> 9] < '\0') {
        return (void *)0x0;
      }
      return &DAT_00000001;
    }
    if ((this->fCarListFilter & 0x42U) == 0) {
      return (void *)0x0;
    }
    cVar1 = (&this_00->fCarGarage[uVar8 & 0xff].fCarID)[(int)(tVar9 << 0x10) >> 9];
    pvVar4 = (void *)(uint)(-1 < cVar1);
    carInfo = GetCarFromID__11tCarManagers(this_00,(short)cVar1);
    if ((frontEnd.raceType == '\x01') && (carInfo->fPursuitAvailable == '\0')) {
      return (void *)0x0;
    }
    if (-1 >= cVar1) {
      return pvVar4;
    }
    if ((this->fCarListFilter & 0x40U) == 0) {
      return pvVar4;
    }
    GetGarageCar__11tCarManagersR8tCarInfos
              (this->fCarManager,
               (short)(((uVar8 & 0xff) + (uint)*(ushort *)&this->fCarManager->fNumCars) * 0x10000 >>
                      0x10),&tStack280,0);
    carInfo = &tStack280;
    goto LAB_80018470;
  }
  cVar1 = this_00->fCars[(uint)(byte)carNumber].fCarID;
  if ((int)cVar1 < 0) {
    return (void *)0x0;
  }
  if (this_00->fViewableCars[(int)cVar1] == '\0') {
    return (void *)0x0;
  }
  if ((frontEnd.raceType == '\x01') &&
     (this_00->fCars[(uint)(byte)carNumber].fPursuitAvailable == '\0')) {
    return (void *)0x0;
  }
  carInfo = this->fCarManager->fCars + (uint)(byte)carNumber;
  bVar2 = carInfo->fCarClass;
  if (bVar2 == 7) {
    if (((this->fCarListFilter & 0xcU) != 0) &&
       (iVar5 = (int)(short)cVar1 + (int)(short)tVar7 * 0x30,
       ((int)(uint)carInfo->fCountries >> ((int)frontEnd.carCountry[iVar5] & 0x1fU) & 1U) != 0)) {
      GetTrack__13tTrackManagersR17tTrackInformation
                (&trackManager,(ushort)(byte)frontEnd.track[0],&tStack72);
      pvVar4 = FECheat_IsCheatEnabled__F10tCheatCode(cheat_AllCops);
      if (pvVar4 != (void *)0x0) goto LAB_80018414;
      if ((uint)tStack72.fCountry == (int)frontEnd.carCountry[iVar5]) {
        puVar6 = &DAT_00000001;
      }
    }
  }
  else {
    if (bVar2 < 8) {
      puVar6 = (undefined *)(uint)((this->fCarListFilter & 0x81U) != 0);
      if (((short)cVar1 == 0x1c) &&
         (((frontEnd.carListType == '\x01' || (frontEnd.gameMode == '\x01')) ||
          (frontEnd.raceType != '\0')))) {
        puVar6 = (undefined *)0x0;
      }
    }
    else {
      if ((bVar2 == 8) && ((this->fCarListFilter & 0x10U) != 0)) {
LAB_80018414:
        puVar6 = &DAT_00000001;
      }
    }
  }
  if (puVar6 == (undefined *)0x0) {
    return (void *)0x0;
  }
  if ((this->fCarListFilter & 1U) == 0) {
    return puVar6;
  }
  if (frontEnd.raceType != '\x02') {
    return puVar6;
  }
  carInfo = this->fCarManager->fCars + (uint)(byte)carNumber;
LAB_80018470:
  pvVar4 = ValidCar__18tTournamentManagerR8tCarInfo(&tournamentManager,carInfo);
  return pvVar4;
}



// decompiled code
// original method signature: 
// struct tListIteratorCarColor * /*$ra*/ __21tListIteratorCarColorPcN21iP11tCarManager(struct tListIteratorCarColor *this /*$s0*/, char *value /*$v0*/, char *player /*$s3*/, char *playerCar /*$s4*/, int indexSize /*stack 16*/, struct tCarManager *carManager /*stack 20*/)
 // line 1176, offset 0x800184a0
	/* begin block 1 */
		// Start line: 1177
		// Start offset: 0x800184A0
	/* end block 1 */
	// End offset: 0x800184A0
	// End Line: 1177

	/* begin block 2 */
		// Start line: 2493
	/* end block 2 */
	// End Line: 2494

	/* begin block 3 */
		// Start line: 2501
	/* end block 3 */
	// End Line: 2502

	/* begin block 4 */
		// Start line: 2501
	/* end block 4 */
	// End Line: 2502

tListIteratorCarColor *
__21tListIteratorCarColorPcN21iP11tCarManager
          (tListIteratorCarColor *this,char *value,char *player,char *playerCar,int indexSize,
          tCarManager *carManager)

{
  __13tListIteratorPsPc((tListIterator *)this,(short *)0x0,value);
  *(undefined4 *)((this->tListIterator)._vf + 2) = 0x800101d8;
  this->fPlayer = player;
  this->fPlayerCar = playerCar;
  this->fIndexSize = indexSize;
  this->fCarManager = carManager;
  return this;
}



// decompiled code
// original method signature: 
// void /*$ra*/ _._21tListIteratorCarColor(struct tListIteratorCarColor *this /*$a0*/, int __in_chrg /*$a1*/)
 // line 1185, offset 0x80018520
	/* begin block 1 */
		// Start line: 1186
		// Start offset: 0x80018520
	/* end block 1 */
	// End offset: 0x80018520
	// End Line: 1186

	/* begin block 2 */
		// Start line: 2520
	/* end block 2 */
	// End Line: 2521

	/* begin block 3 */
		// Start line: 2524
	/* end block 3 */
	// End Line: 2525

	/* begin block 4 */
		// Start line: 2524
	/* end block 4 */
	// End Line: 2525

void ___21tListIteratorCarColor(tListIteratorCarColor *this,int __in_chrg)

{
  *(undefined4 *)((this->tListIterator)._vf + 2) = 0x800101d8;
  ___13tListIterator((tListIterator *)this,__in_chrg);
  return;
}



// decompiled code
// original method signature: 
// char /*$ra*/ Value__21tListIteratorCarColor7tPlayer(struct tListIteratorCarColor *this /*$a0*/)
 // line 1189, offset 0x80018548
	/* begin block 1 */
		// Start line: 1190
		// Start offset: 0x80018548
		// Variables:
	// 		int offset; // $-1
	// 		struct tCarInfo *carInfo; // $v1
	/* end block 1 */
	// End offset: 0x80018548
	// End Line: 1194

	/* begin block 2 */
		// Start line: 2528
	/* end block 2 */
	// End Line: 2529

	/* begin block 3 */
		// Start line: 2532
	/* end block 3 */
	// End Line: 2533

	/* begin block 4 */
		// Start line: 2532
	/* end block 4 */
	// End Line: 2533

	/* begin block 5 */
		// Start line: 2536
	/* end block 5 */
	// End Line: 2537

char Value__21tListIteratorCarColor7tPlayer(tListIteratorCarColor *this)

{
  return (this->tListIterator).fValue
         [(uint)(byte)*this->fPlayer * this->fIndexSize +
          (int)this->fCarManager->fCars[(uint)(byte)this->fPlayerCar[(uint)(byte)*this->fPlayer]].
               fCarID];
}



// decompiled code
// original method signature: 
// short /*$ra*/ TextValue__21tListIteratorCarColor7tPlayer(struct tListIteratorCarColor *this /*$a0*/)
 // line 1200, offset 0x800185a8
	/* begin block 1 */
		// Start line: 1201
		// Start offset: 0x800185A8
	/* end block 1 */
	// End offset: 0x800185A8
	// End Line: 1202

	/* begin block 2 */
		// Start line: 2552
	/* end block 2 */
	// End Line: 2553

	/* begin block 3 */
		// Start line: 2556
	/* end block 3 */
	// End Line: 2557

	/* begin block 4 */
		// Start line: 2556
	/* end block 4 */
	// End Line: 2557

	/* begin block 5 */
		// Start line: 2557
	/* end block 5 */
	// End Line: 2558

	/* begin block 6 */
		// Start line: 2557
	/* end block 6 */
	// End Line: 2558

short TextValue__21tListIteratorCarColor7tPlayer(tListIteratorCarColor *this)

{
  return 0;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Increment__21tListIteratorCarColor7tPlayer(struct tListIteratorCarColor *this /*$a0*/)
 // line 1205, offset 0x800185b0
	/* begin block 1 */
		// Start line: 1206
		// Start offset: 0x800185B0
		// Variables:
	// 		int offset; // $a1
	// 		struct tCarInfo *carInfo; // $a2
	/* end block 1 */
	// End offset: 0x80018640
	// End Line: 1215

	/* begin block 2 */
		// Start line: 2562
	/* end block 2 */
	// End Line: 2563

	/* begin block 3 */
		// Start line: 2566
	/* end block 3 */
	// End Line: 2567

	/* begin block 4 */
		// Start line: 2566
	/* end block 4 */
	// End Line: 2567

	/* begin block 5 */
		// Start line: 2570
	/* end block 5 */
	// End Line: 2571

void Increment__21tListIteratorCarColor7tPlayer(tListIteratorCarColor *this)

{
  char *pcVar1;
  byte *pbVar2;
  tCarInfo *ptVar3;
  int iVar4;
  
  iVar4 = (uint)(byte)*this->fPlayer * this->fIndexSize;
  ptVar3 = this->fCarManager->fCars + (uint)(byte)this->fPlayerCar[(uint)(byte)*this->fPlayer];
  pcVar1 = (this->tListIterator).fValue + iVar4 + (int)ptVar3->fCarID;
  *pcVar1 = *pcVar1 + '\x01';
  pbVar2 = (byte *)((this->tListIterator).fValue + iVar4 + (int)ptVar3->fCarID);
  if ((uint)(byte)ptVar3->fNumLightColors + (uint)(byte)ptVar3->fNumDarkColors <= (uint)*pbVar2) {
    *pbVar2 = 0;
  }
  return;
}



// decompiled code
// original method signature: 
// void /*$ra*/ Decrement__21tListIteratorCarColor7tPlayer(struct tListIteratorCarColor *this /*$a0*/)
 // line 1218, offset 0x80018648
	/* begin block 1 */
		// Start line: 1219
		// Start offset: 0x80018648
		// Variables:
	// 		int offset; // $-1
	// 		struct tCarInfo *carInfo; // $a1
	/* end block 1 */
	// End offset: 0x800186C0
	// End Line: 1229

	/* begin block 2 */
		// Start line: 2593
	/* end block 2 */
	// End Line: 2594

	/* begin block 3 */
		// Start line: 2597
	/* end block 3 */
	// End Line: 2598

	/* begin block 4 */
		// Start line: 2597
	/* end block 4 */
	// End Line: 2598

	/* begin block 5 */
		// Start line: 2601
	/* end block 5 */
	// End Line: 2602

void Decrement__21tListIteratorCarColor7tPlayer(tListIteratorCarColor *this)

{
  char cVar1;
  char *pcVar2;
  tCarInfo *ptVar3;
  
  ptVar3 = this->fCarManager->fCars + (uint)(byte)this->fPlayerCar[(uint)(byte)*this->fPlayer];
  pcVar2 = (this->tListIterator).fValue +
           (uint)(byte)*this->fPlayer * this->fIndexSize + (int)ptVar3->fCarID;
  cVar1 = *pcVar2;
  if (cVar1 == '\0') {
    cVar1 = ptVar3->fNumLightColors + ptVar3->fNumDarkColors;
  }
  *pcVar2 = cVar1 + -1;
  return;
}





