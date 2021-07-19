#ifndef FECARS_H
#define FECARS_H


extern void Initialize__11tCarManager(struct tCarManager *this); // 0x800161B0

extern struct tCarInfo * GetCarFromID__11tCarManagers(struct tCarManager *this, short carID); // 0x8001624C

extern struct tCarInfo * GetCarFromSimID__11tCarManagers(struct tCarManager *this, short carID); // 0x8001629C

extern long CheapestCarStockPrice__11tCarManager(struct tCarManager *this); // 0x800162EC

extern long CalcUsedPrice__11tCarManagers(struct tCarManager *this, short garageNumber); // 0x80016344

extern long PurchaseCar__11tCarManagersss(struct tCarManager *this, short carModel, short color, short playerNum); // 0x80016450

extern long SellCar__11tCarManagerss(struct tCarManager *this, short garageNumber, short playerNum); // 0x8001652C

extern long PurchaseUpgrade__11tCarManagersss(struct tCarManager *this, short garageNumber, short upgradeFlags, short playerNum); // 0x800166AC

extern void RemoveFromPinkSlipsList__11tCarManagerss(struct tCarManager *this, short garageNumber, short playerNum); // 0x800167B8

extern void AddToPinkSlipsList__11tCarManagersss(struct tCarManager *this, short carModel, short color, short playerNum); // 0x80016900

extern void AddUpgradesToPinkSlipsList__11tCarManagersss(struct tCarManager *this, short garageNumber, short upgradeFlags, short playerNum); // 0x8001697C

extern void LoadCars__11tCarManagerR12tSaveCarInfos(struct tCarManager *this, struct tSaveCarInfo *load, short playerNum); // 0x80016A54

extern void SaveCars__11tCarManagerR12tSaveCarInfo(struct tCarManager *this, struct tSaveCarInfo *save); // 0x80016AF0

extern void LoadPinkSlipsCars__11tCarManagerR12tSaveCarInfos(struct tCarManager *this, struct tSaveCarInfo *load, short playerNum); // 0x80016B68

extern void SavePinkSlipsCars__11tCarManagerR12tSaveCarInfoss(struct tCarManager *this, struct tSaveCarInfo *save, short playerNum, short withoutCarInGarageNumber); // 0x80016C0C

extern void SetClassAvailable__11tCarManager13tCarClassTypeb(struct tCarManager *this, enum tCarClassType carClass, void * avail); // 0x80016D68

extern void SetCarAvailable__11tCarManager10tCarModelsb(struct tCarManager *this, enum tCarModels carModel, void * avail); // 0x80016DEC

extern void SetClassViewable__11tCarManager13tCarClassTypeb(struct tCarManager *this, enum tCarClassType carClass, void * view); // 0x80016E08

extern void SetCarViewable__11tCarManager10tCarModelsb(struct tCarManager *this, enum tCarModels carModel, void * view); // 0x80016E74

extern void GetStockCar__11tCarManagersR8tCarInfo(struct tCarManager *this, short carNumber, struct tCarInfo *carInfo); // 0x80016E90

extern void GetGarageCar__11tCarManagersR8tCarInfos(struct tCarManager *this, short garageNumber, struct tCarInfo *carInfo, short playerNum); // 0x80016F4C

extern void GetPinkSlipsCar__11tCarManagersR8tCarInfos(struct tCarManager *this, short garageNumber, struct tCarInfo *carInfo, short playerNum); // 0x80017058

extern void LoadDescription__11tCarManager(struct tCarManager *this); // 0x80017134

extern void ReleaseDescription__11tCarManager(struct tCarManager *this); // 0x800172F4

extern short GetNumOwnedCars__11tCarManagers(struct tCarManager *this, short playerNum); // 0x80017334

extern short GetNumTourneyCars__11tCarManagers(struct tCarManager *this, short playerNum); // 0x80017378

extern short GetNumPinkSlipsCars__11tCarManagers(struct tCarManager *this, short playerNum); // 0x80017420

extern short GetClassList__11tCarManager13tCarClassTypesP10tCarModels(struct tCarManager *this, enum tCarClassType carClass, short numElements, enum tCarModels *models); // 0x80017464

extern void InitializeIngameCarList__11tCarManager(struct tCarManager *this); // 0x80017578

extern void * IsCarAnAddedModel__11tCarManagerR10tCarModelsRc(struct tCarManager *this, enum tCarModels *model, char *color); // 0x800175F8

extern void AddCarToIngameList__11tCarManagerR10tCarModelsRc(struct tCarManager *this, enum tCarModels *model, char *color); // 0x80017678

extern void * FindSimilarCar__11tCarManagerR10tCarModelsRcsP10tCarModels(struct tCarManager *this, enum tCarModels *model, char *color); // 0x80017718

extern struct tListIteratorCar * __16tListIteratorCarPcP11tCarManager(struct tListIteratorCar *this, char *valPtr, struct tCarManager *carManager); // 0x800178CC

extern void _._16tListIteratorCar(struct tListIteratorCar *this, int __in_chrg); // 0x80017928

extern char Value__16tListIteratorCar7tPlayer(struct tListIteratorCar *this, enum tPlayer atIndex); // 0x80017950

extern short TextValue__16tListIteratorCar7tPlayer(struct tListIteratorCar *this, enum tPlayer atIndex); // 0x8001797C

extern void AdjustPosition__16tListIteratorCar7tPlayers(struct tListIteratorCar *this, enum tPlayer atIndex, short direction); // 0x80017A9C

extern void Increment__16tListIteratorCar7tPlayer(struct tListIteratorCar *this, enum tPlayer atIndex); // 0x80018094

extern void Decrement__16tListIteratorCar7tPlayer(struct tListIteratorCar *this, enum tPlayer atIndex); // 0x800180B4

extern void * ValidCar__16tListIteratorCar7tPlayerc(struct tListIteratorCar *this, enum tPlayer atIndex, char carNumber); // 0x800180D4

extern struct tListIteratorCarColor * __21tListIteratorCarColorPcN21iP11tCarManager(struct tListIteratorCarColor *this, char *value, char *player, char *playerCar, int indexSize, struct tCarManager *carManager); // 0x800184A0

extern void _._21tListIteratorCarColor(struct tListIteratorCarColor *this, int __in_chrg); // 0x80018520

extern char Value__21tListIteratorCarColor7tPlayer(struct tListIteratorCarColor *this); // 0x80018548

extern short TextValue__21tListIteratorCarColor7tPlayer(struct tListIteratorCarColor *this); // 0x800185A8

extern void Increment__21tListIteratorCarColor7tPlayer(struct tListIteratorCarColor *this); // 0x800185B0

extern void Decrement__21tListIteratorCarColor7tPlayer(struct tListIteratorCarColor *this); // 0x80018648


#endif
