#ifndef NFS4_MONOLITHIC_HEADER
#define NFS4_MONOLITHIC_HEADER

/* Begin enums */

enum Udff_tAccessType // Hashcode: 0xDF5DE55F (dec: -547494561)
{
	UDFF_FILE = 0,
	UDFF_MEMORY = 1,
};

enum AIScript_tPlayAction // Hashcode: 0xAE407A7B (dec: -1371506053)
{
	AISCRIPT_PLAYACTION_COLLISION = 0,
	AISCRIPT_PLAYACTION_OPP_WIZZED_BY = 1,
	AISCRIPT_PLAYACTION_HUMAN_BLOCK_OPP = 2,
	AISCRIPT_PLAYACTION_OPP_BLOCK_HUMAN = 3,
	AISCRIPT_PLAYACTION_OPP_PASS_HUMAN = 4,
	AISCRIPT_PLAYACTION_HUMAN_PASS_OPP = 5,
	AISCRIPT_PLAYACTION_HUMAN_HONK = 6,
	AISCRIPT_PLAYACTION_SENTINAL = 7,
};

enum AIScript_tAIReaction // Hashcode: 0xBC7BD9A1 (dec: -1132734047)
{
	AISCRIPT_AIREACTION_INIT = 1,
	AISCRIPT_AIREACTION_END = 2,
	AISCRIPT_AIREACTION_SPEED_BURST = 4,
	AISCRIPT_AIREACTION_HONK_HORN = 8,
	AISCRIPT_AIREACTION_HARD_BRAKE = 16,
	AISCRIPT_AIREACTION_SWIPE = 32,
	AISCRIPT_AIREACTION_ATTACK = 64,
	AISCRIPT_AIREACTION_PAUSE = 128,
	AISCRIPT_AIREACTION_REAR_END = 256,
	AISCRIPT_AIREACTION_SWERVE = 512,
	AISCRIPT_AIREACTION_MOVE_AWAY = 1024,
	AISCRIPT_AIREACTION_WIPE_OUT = 2048,
	AISCRIPT_AIREACTION_CRAZY_HORN = 4096,
	AISCRIPT_AIREACTION_TEST1 = 8192,
	AISCRIPT_AIREACTION_TEST2 = 16384,
	AISCRIPT_AIREACTION_TEST3 = 32768,
	AISCRIPT_AIREACTION_TEST4 = 65536,
};

enum speechModeType // Hashcode: 0x8AF183D3 (dec: -1963883565)
{
	SPEECH_MODE_NONE = 0,
	SPEECH_MODE_PURSUIT = 1,
	SPEECH_MODE_PURSUIT_WRONG_SIDE = 2,
	SPEECH_MODE_PURSUIT_BUMP_COP = 3,
	SPEECH_MODE_WARNING = 4,
	SPEECH_MODE_WARNING_WRONG_SIDE = 5,
	SPEECH_MODE_WARNING_BUMP_COP = 6,
	SPEECH_MODE_BUST = 7,
	SPEECH_MODE_APPROACH_ROADBLOCK = 8,
	SPEECH_MODE_ARREST = 9,
	SPEECH_MODE_COP_KILLER = 10,
	SPEECH_MODE_SENTINAL = 11,
};

enum speechIntensityType // Hashcode: 0x61CC57C3 (dec: 1640781763)
{
	SPEECH_INTENSITY_LOW = 0,
	SPEECH_INTENSITY_MED = 1,
	SPEECH_INTENSITY_HIGH = 2,
	SPEECH_INTENSITY_SENTINAL = 3,
};

enum speechSourceType // Hashcode: 0x95194D5B (dec: -1793503909)
{
	SPEECH_SOURCE_REGULAR_COP = 0,
	SPEECH_SOURCE_SUPER_COP = 1,
	SPEECH_SOURCE_ROADBLOCK = 2,
	SPEECH_SOURCE_SENTINAL = 3,
};

enum donutMode_t // Hashcode: 0x394E21E4 (dec: 961421796)
{
	DONUTMODE_NONE = 0,
	DONUTMODE_GOCENTER = 1,
	DONUTMODE_DONUT = 2,
	DONUTMODE_BURNOUT = 3,
};

enum AIDataRecord_RecordMethod_t // Hashcode: 0x315F7CCA (dec: 828341450)
{
	NORMAL_M = 0,
	RECORD_M = 1,
	TEST_M = 2,
};

enum copType // Hashcode: 0x7C92B1C0 (dec: 2089988544)
{
	COP_REGULAR = 0,
	COP_SUPER = 1,
};

enum crimeType // Hashcode: 0xE3057811 (dec: -486180847)
{
	CRIME_NONE = 0,
	CRIME_SPEEDER = 1,
	CRIME_WRONGSIDE = 2,
	CRIME_BUMPCOP = 3,
	CRIME_SMASHCOP = 4,
};

enum cruiseMode_t // Hashcode: 0x9E9E309B (dec: -1633800037)
{
	CRUISE_ATSETSPEED = 0,
	CRUISE_ATFACTOR = 1,
	CRUISE_ATTRAFFICSPEED = 2,
};

enum stateType_t // Hashcode: 0x66110013 (dec: 1712390163)
{
	STATE_NONE = 0,
	STATE_PURGATORY = 1,
	STATE_NORMAL = 2,
	STATE_IDLE = 3,
	STATE_CHASE = 4,
	STATE_OFFROAD = 5,
	STATE_ROVING_TRAFFIC = 6,
	STATE_NONACTIVE = 7,
	STATE_DONUTS = 8,
	STATE_GOTOSLICE = 9,
	STATE_CRUISE = 10,
};

enum AIHigh_CopGameType_t // Hashcode: 0x6C6DD356 (dec: 1819136854)
{
	COP_GAME_NO = 0,
	COP_GAME_PURSUIT = 1,
	COP_GAME_BTC_1HC = 2,
	COP_GAME_BTC_2HC = 3,
	COP_GAME_BTC_1HC1HP = 4,
};

enum Wingman_Role // Hashcode: 0x4B2C44F4 (dec: 1261192436)
{
	ROLE_IDLE = 0,
	ROLE_WINGMAN = 1,
	ROLE_BLOCKADER = 2,
	ROLE_BLOCKADER_SPIKEBELT = 3,
};

enum __95 // Hashcode: 0x7E90795B (dec: 2123397467)
{
	PULLOVER_NONE = 0,
	PULLOVER_WARNING = 1,
	PULLOVER_BUST = 2,
	PULLOVER_EOG = 3,
};

enum AIHigh_tAttackMode // Hashcode: 0x002091FE (dec: 2134526)
{
	NO_ATTACK = 0,
	REAR_END = 1,
	SCRIPT_ATTACK = 2,
	PROVOKED_ATTACK = 3,
};

enum __97 // Hashcode: 0xB2E1C78D (dec: -1293826163)
{
	PERPMODE_CRUISE = 0,
	PERPMODE_FAST = 1,
	PERPMODE_MADECONTACT = 2,
	PERPMODE_TEASE = 3,
	PERPMODE_ESCAPE = 4,
	PERPMODE_CHASEON = 5,
};

enum blockadeMode_t // Hashcode: 0x81B654BE (dec: -2118757186)
{
	BLOCKADEMODE_NONE = 0,
	BLOCKADEMODE_SETUP = 1,
	BLOCKADEMODE_WAITING = 2,
	BLOCKADEMODE_CHASE = 3,
	BLOCKADEMODE_SETUP_FOR_OTHER = 4,
};

enum AIHigh_tDriveAwayMode // Hashcode: 0xF9E11143 (dec: -102690493)
{
	DRIVEAWAY_NONE = 0,
	DRIVEAWAY_RESET = 1,
	DRIVEAWAY_NORESET = 2,
};

enum __98 // Hashcode: 0x257416A2 (dec: 628364962)
{
	FREEZE_NONE = 0,
	FREEZE_NEWPERP_ROVE = 1,
	FREEZE_NEWPERP_DONE = 2,
	FREEZE_ARREST = 3,
	FREEZE_ARRESTDONE = 4,
};

enum __99 // Hashcode: 0x464E5DAE (dec: 1179540910)
{
	WINGMAN_NONE = 0,
	WINGMAN_WINGMAN_REQUEST = 1,
	WINGMAN_BLOCKADER_REQUEST = 2,
	WINGMAN_BLOCKADER_SPIKEBELT_REQUEST = 3,
	WINGMAN_WINGMAN_ACTIVE = 4,
	WINGMAN_BLOCKADER_ACTIVE = 5,
};

enum forceFocus_t // Hashcode: 0xF3E9FD5F (dec: -202769057)
{
	FOCUS_NORMAL = 0,
	FOCUS_AI = 1,
	FOCUS_COPANDAI = 2,
};

enum __148 // Hashcode: 0xB0C236D4 (dec: -1329449260)
{
	PLACEMENTSPEED_SLOW = 0,
	PLACEMENTSPEED_FAST = 1,
};

enum AICop_RoadBlockState // Hashcode: 0xBD382669 (dec: -1120393623)
{
	kAICop_RoadBlockState_None = 0,
	kAICop_RoadBlockState_WaitingForPerp = 1,
	kAICop_RoadBlockState_PerpPassed = 2,
};

enum Gear_t // Hashcode: 0xB338D2E3 (dec: -1288121629)
{
	GEAR_REVERSE = 0,
	GEAR_NEUTRAL = 1,
	GEAR_FIRST = 2,
	GEAR_SECOND = 3,
	GEAR_THIRD = 4,
	GEAR_FOURTH = 5,
	GEAR_FIFTH = 6,
	GEAR_SIXTH = 7,
	GEAR_SEVENTH = 8,
};

enum eRampType // Hashcode: 0x2AE77D74 (dec: 719814004)
{
	kRampType_Interpolate = 0,
	kRampType_NoInterpolate = 1,
};

enum AIDataRecord_WhichRecord_t // Hashcode: 0x29884EBF (dec: 696798911)
{
	NORECORD_R = 0,
	RACER_SPEED_R = 1,
	TRAFFIC_SPEED_R = 2,
	ACCELERATION_R = 3,
	REMOVED_R = 4,
	BEST_LINE_R = 5,
	TRACK_CURVE_R = 6,
	CURVESPEED_TABLE_R = 7,
	CAR_TRACKING_R = 8,
};

enum triggerType // Hashcode: 0xD99CEC4E (dec: -644027314)
{
	TRIGGER_NONE = 0,
	TRIGGER_COP_SIMPLE = 1,
	TRIGGER_COP_ROADBLOCK = 2,
	TRIGGER_COP_OFFROAD = 3,
	TRIGGER_TRAFFIC_ACCIDENT = 4,
	TRIGGER_TRAFFIC_PATH = 5,
	TRIGGER_NUM_TRIGGER_TYPES = 6,
};

enum s_type // Hashcode: 0xF15F8404 (dec: -245398524)
{
	kAsphalt = 0,
	kCarBody = 1,
	kTires = 2,
	kGravel = 3,
	kWall = 4,
	kSign = 5,
	kBush = 6,
	kBlowOut = 7,
	kBackFire = 8,
	kHorn = 9,
	kGearShift = 10,
	kSnow = 11,
	kGrass = 12,
	kWoodWall = 13,
	kGrassWall = 14,
	kWallSpark = 15,
	kWetAsphalt = 16,
	kRaceTireOnAsphalt = 17,
	kRainTireOnAsphalt = 18,
};

enum tMenuCommandType // Hashcode: 0xC777F2E2 (dec: -948440350)
{
	kMenu_Command_None = 0,
	kMenu_Command_GoToMenu = 1,
	kMenu_Command_GoToMenuOneWay = 2,
	kMenu_Command_GoToMenuTwoPlayer = 3,
	kMenu_Command_BackupMenu = 4,
	kMenu_Command_StartRace = 5,
	kMenu_Command_Start2PlayerRace = 6,
	kMenu_Command_ReStartRace = 7,
	kMenu_Command_StartReplay = 8,
	kMenu_Command_ClearRecords = 9,
};

enum tCarModels // Hashcode: 0x978FAAE7 (dec: -1752192281)
{
	cm_MercedesSLK = 0,
	cm_BMWZ3 = 1,
	cm_HoldenHSVT = 2,
	cm_FordFalcon = 3,
	cm_ChevyCamaro = 4,
	cm_TransAm = 5,
	cm_AstonMartinDB7 = 6,
	cm_JaguarXKR = 7,
	cm_BMWM5 = 8,
	cm_ChevyCorvette = 9,
	cm_Ferrari550 = 10,
	cm_Porsche911 = 11,
	cm_FerrariF50 = 12,
	cm_DiabloSV = 13,
	cm_MercedesCLK = 14,
	cm_McLarenF1 = 15,
	cm_XPerimentalPorsche = 16,
	cm_XPerimentalF50 = 17,
	cm_XPerimentalF1 = 18,
	cm_BonusCar1 = 19,
	cm_BonusCar2 = 20,
	cm_BonusCar3 = 21,
	cm_CapriceCop = 22,
	cm_HoldenHSVTCop = 23,
	cm_BMWM5Cop = 24,
	cm_CorvetteCop = 25,
	cm_PorscheCop = 26,
	cm_DiabloCop = 27,
	cm_Helicopter = 28,
	cm_AudiA4 = 29,
	cm_BMW530i = 30,
	cm_Mercedes500SL = 31,
	cm_VolvoWagon = 32,
	cm_SchoolBus = 33,
	cm_LandCruiser = 34,
	cm_Miata = 35,
	cm_ArmyTruck = 36,
	cm_JeepCommanche = 37,
	cm_OneTonTruck = 38,
	cm_OneTonTruckDirty = 39,
	cm_MercedesVan = 40,
	cm_JeepCherokee = 41,
	cm_Satellite = 42,
	cm_OldChevyPickup = 43,
	cm_FordF150 = 44,
	cm_Barracuda = 45,
	cm_TaxiCab = 46,
	cm_TourBus = 47,
	cm_LoggingTruck = 48,
	cm_TransitBus = 49,
	cm_NumCarModels = 50,
};

enum tCarNameLength // Hashcode: 0x4843FC84 (dec: 1212415108)
{
	cnl_Medium = 0,
	cnl_Short = 1,
	cnl_Long = 2,
};

enum tPersonalities // Hashcode: 0xAAD6FDBF (dec: -1428750913)
{
	kPersonalityNemesis = 0,
	kPersonalityBlurrr = 1,
	kPersonalityZippy = 2,
	kPersonalityJetBoy = 3,
	kPersonalityMenace = 4,
	kPersonalityCop1 = 5,
	kPersonalityCop2 = 6,
	kPersonalityCop3 = 7,
	kPersonalityTraffic = 8,
	kPersonalityNUM = 9,
};

enum tPMenuCommandType // Hashcode: 0x2E3CCE3C (dec: 775736892)
{
	kMPause_NoEvent = 0,
	kMPause_Continue = 1,
	kMPause_Restart = 2,
	kMPause_QuitToGameSetup = 3,
	kMPause_QuitToRaceSummary = 4,
	kMPause_ForfeitToRaceSummary = 5,
	kMPause_GoToMenu = 6,
	kMPause_BackupMenu = 7,
	kMPause_CommandConfirmationFlag = 256,
};

enum tInputKeyType // Hashcode: 0xBB068176 (dec: -1157201546)
{
	kInput_KeyType_NoKey = 0,
	kInput_KeyType_AlreadyProcessed = 1,
	kInput_KeyType_Cross = 2,
	kInput_KeyType_Circle = 4,
	kInput_KeyType_Square = 8,
	kInput_KeyType_Triangle = 16,
	kInput_KeyType_L1 = 32,
	kInput_KeyType_L2 = 64,
	kInput_KeyType_R1 = 128,
	kInput_KeyType_R2 = 256,
	kInput_KeyType_Up = 512,
	kInput_KeyType_Down = 1024,
	kInput_KeyType_Left = 2048,
	kInput_KeyType_Right = 4096,
	kInput_KeyType_Start = 8192,
	kInput_KeyType_Select = 16384,
};

enum tCarClassType // Hashcode: 0x645849E6 (dec: 1683507686)
{
	cct_Roadster = 0,
	cct_PonyCar = 1,
	cct_SaloonCar = 2,
	cct_SportsCar = 3,
	cct_SuperCar = 4,
	cct_GTRCar = 5,
	cct_BonusCar = 6,
	cct_CopCar = 7,
	cct_TrafficCar = 8,
	cct_Helicopter = 9,
	cct_OpenClass = 10,
	cct_NumCarClasses = 11,
};

enum tTrackClassType // Hashcode: 0xE598528C (dec: -443002228)
{
	tct_Beginner = 0,
	tct_Intermediate = 1,
	tct_Expert = 2,
	tct_GTR = 3,
	tct_Bonus = 4,
};

enum __104 // Hashcode: 0x999A8377 (dec: -1717927049)
{
	PULLOVER_NONE = 0,
	PULLOVER_WARNING = 1,
	PULLOVER_BUST = 2,
	PULLOVER_EOG = 3,
};

enum __106 // Hashcode: 0x05DADC54 (dec: 98229332)
{
	PERPMODE_CRUISE = 0,
	PERPMODE_FAST = 1,
	PERPMODE_MADECONTACT = 2,
	PERPMODE_TEASE = 3,
	PERPMODE_ESCAPE = 4,
	PERPMODE_CHASEON = 5,
};

enum __107 // Hashcode: 0x52199311 (dec: 1377407761)
{
	FREEZE_NONE = 0,
	FREEZE_NEWPERP_ROVE = 1,
	FREEZE_NEWPERP_DONE = 2,
	FREEZE_ARREST = 3,
	FREEZE_ARRESTDONE = 4,
};

enum __108 // Hashcode: 0x2E7150E4 (dec: 779178212)
{
	WINGMAN_NONE = 0,
	WINGMAN_WINGMAN_REQUEST = 1,
	WINGMAN_BLOCKADER_REQUEST = 2,
	WINGMAN_BLOCKADER_SPIKEBELT_REQUEST = 3,
	WINGMAN_WINGMAN_ACTIVE = 4,
	WINGMAN_BLOCKADER_ACTIVE = 5,
};

enum __112 // Hashcode: 0x3F2F3767 (dec: 1060058983)
{
	PULLOVER_NONE = 0,
	PULLOVER_WARNING = 1,
	PULLOVER_BUST = 2,
	PULLOVER_EOG = 3,
};

enum __114 // Hashcode: 0x17352A6A (dec: 389360234)
{
	PERPMODE_CRUISE = 0,
	PERPMODE_FAST = 1,
	PERPMODE_MADECONTACT = 2,
	PERPMODE_TEASE = 3,
	PERPMODE_ESCAPE = 4,
	PERPMODE_CHASEON = 5,
};

enum __115 // Hashcode: 0x46F02485 (dec: 1190143109)
{
	FREEZE_NONE = 0,
	FREEZE_NEWPERP_ROVE = 1,
	FREEZE_NEWPERP_DONE = 2,
	FREEZE_ARREST = 3,
	FREEZE_ARRESTDONE = 4,
};

enum __116 // Hashcode: 0xCBE6B926 (dec: -874071770)
{
	WINGMAN_NONE = 0,
	WINGMAN_WINGMAN_REQUEST = 1,
	WINGMAN_BLOCKADER_REQUEST = 2,
	WINGMAN_BLOCKADER_SPIKEBELT_REQUEST = 3,
	WINGMAN_WINGMAN_ACTIVE = 4,
	WINGMAN_BLOCKADER_ACTIVE = 5,
};

enum VALIDITY // Hashcode: 0xA0C68D04 (dec: -1597600508)
{
	kINVALID = 0,
	kVALID = 1,
	kPREDICTED = 2,
	kRESIM = 3,
};

enum Weather_tState // Hashcode: 0x365BC156 (dec: 911982934)
{
	Weather_kSnow = 0,
	Weather_kRain = 1,
};

enum tAppCommand // Hashcode: 0x3CF85737 (dec: 1022908215)
{
	kApp_Command_StartRace = 0,
	kApp_Command_ReStartRace = 1,
	kApp_Command_StartReplay = 2,
};

enum tTVState // Hashcode: 0xFD6ED16A (dec: -43069078)
{
	tv_StateOff = 0,
	tv_StateOn = 1,
	tv_TransitionOn = 2,
	tv_TransitionOff = 3,
};

enum tScreenMainState // Hashcode: 0xBE6AA2B3 (dec: -1100307789)
{
	kScreenMain_Off = 0,
	kScreenMain_StaticImage = 1,
	kScreenMain_DynamicImage = 2,
	kScreenMain_WarningImage = 3,
	kScreenMain_Credits = 4,
};

enum tPlayer // Hashcode: 0xBBBDE050 (dec: -1145184176)
{
	kPlayerBoth = -1,
	kPlayerOne = 0,
	kPlayerTwo = 1,
};

enum tCarListType // Hashcode: 0x28D0357F (dec: 684733823)
{
	clt_Stock = 1,
	clt_GarageCar = 2,
	clt_Cop = 4,
	clt_Pursuit = 8,
	clt_Traffic = 16,
	clt_PinkSlips = 32,
	clt_Tournament = 64,
	clt_Dealer = 128,
};

enum PRODUCTLOC // Hashcode: 0xBBFF28FC (dec: -1140905732)
{
	N_AMERICA = 0,
	JAPAN = 1,
	EUROPE = 2,
};

enum MANAGERTASK // Hashcode: 0xF2F39F05 (dec: -218915067)
{
	NONE = 0,
	LOAD_CARD = 1,
	WRITE_FILE = 2,
	LOAD_FILE = 3,
	DELETE_FILE = 4,
};

enum tMenuTextType // Hashcode: 0x34AEA655 (dec: 883861077)
{
	textType_Title = 0,
	textType_FlybyHelp = 1,
	textType_BorderInfo = 2,
	textType_FramedInfo = 3,
	textType_ScreenInfo = 4,
	textType_ScreenInfoHeader = 5,
	textType_Options = 6,
	textType_FramedMoney = 7,
	textType_PopUpText = 8,
	textType_PopUpTitle = 9,
	textType_PostGame = 10,
	textType_TrackRecords = 11,
	textType_UserNameMenu = 12,
	textType_VideoWall = 13,
	textType_NumTypes = 14,
	textType_Default = 14,
};

enum tMenuTextState // Hashcode: 0xC197B37F (dec: -1047022721)
{
	textState_Unselected = 0,
	textState_Selected = 1,
	textState_Hilighted = 2,
	textState_NumStates = 3,
};

enum tCheatCode // Hashcode: 0x01D8616D (dec: 30957933)
{
	cheat_Roadster = 0,
	cheat_Pony = 1,
	cheat_Saloon = 2,
	cheat_Sports = 3,
	cheat_SuperCar = 4,
	cheat_GTRCar = 5,
	cheat_BonusCar = 6,
	cheat_CopCar = 7,
	cheat_FiveFingerDiscount = 8,
	cheat_FreeRepairs = 9,
	cheat_NoDamage = 10,
	cheat_AllCars = 11,
	cheat_AllCops = 12,
	cheat_AllTracks = 13,
	cheat_MoreMoney = 14,
	cheat_BonusTrack1 = 15,
	cheat_BonusTrack2 = 16,
	cheat_BonusTrack3 = 17,
	cheat_BonusTrack4 = 18,
	cheat_AllCheats = 19,
	cheat_NFSTeamRecords = 20,
	cheat_MyMomSaysImCool = 21,
	cheat_BonusMoney = 22,
	cheat_LotsaMoney = 23,
	cheat_FullGridTraffic = 24,
	cheat_FinishedTournament = 25,
	cheat_FinishedSpecialEvent = 26,
	cheat_AllNotRaced = 27,
	cheat_AllGold = 28,
	cheat_AllSilver = 29,
	cheat_AllBronze = 30,
	cheat_NumCheats = 31,
};

enum tScreen_TransitionType // Hashcode: 0x6D4DAE91 (dec: 1833807505)
{
	kScreen_TransitionTypeItem = 0,
	kScreen_TransitionTypeMenu = 1,
	kScreen_TransitionTypeScreen = 2,
};

enum tFront_ProcessingType // Hashcode: 0x25A1FCF3 (dec: 631373043)
{
	kFront_InitialLoad = 0,
	kFront_QuitToGameSetup = 1,
	kFront_QuitToPostGame = 2,
};

enum tTrophyClass // Hashcode: 0x59FC2242 (dec: 1509696066)
{
	kTrophyGold = 0,
	kTrophySilver = 1,
	kTrophyBronze = 2,
	kTrophyCar = 3,
	kTrophyNone = 4,
};

enum tSmallSpinningThing // Hashcode: 0xC9D45A4F (dec: -908830129)
{
	kSpinningNone = 0,
	kSpinningGold = 1,
	kSpinningMemCard = 2,
};

enum tScreenCongratsMessage // Hashcode: 0x31622A47 (dec: 828516935)
{
	kScreenCongrats_Congrats = 0,
	kScreenCongrats_Eliminated = 1,
};

enum tTrophySize // Hashcode: 0xBDAED028 (dec: -1112616920)
{
	ts_Small = 0,
	ts_Medium = 1,
	ts_Large = 2,
};

enum PinkSlipsErrorCode // Hashcode: 0x25B448AF (dec: 632572079)
{
	PinkSlipsNoError = 0,
	PinkSlipsError_NotOriginalCard = 1,
	PinkSlipsError_LoadFailed = 2,
	PinkSlipsError_SaveFailed = 3,
	PinkSlipsError_CardNotFound = 4,
	PinkSlipsError_NotFormatted = 5,
	PinkSlipsError_CardFull = 6,
	numPinkSlipsErrors = 7,
};

enum tCarStatType // Hashcode: 0x46592922 (dec: 1180248354)
{
	cst_Acceleration = 0,
	cst_Brake = 1,
	cst_Speed = 2,
	cst_Handling = 3,
	cst_Overall = 4,
};

enum PinkSlipsCarSelectState // Hashcode: 0x6EEBE2F2 (dec: 1860952818)
{
	NoCardInserted = 0,
	CardFailed = 1,
	CardFailedNotFound = 2,
	CardFailedUnformatted = 3,
	NotEnoughCars = 4,
	TooManyCars = 5,
	CardLoadedFine = 6,
	WhoCaresWeBeExiting = 7,
	CardCurrentlyLoading = 8,
};

enum VIDEOSTATE // Hashcode: 0x39E091FF (dec: 971018751)
{
	VIDEOSTATE_IDLE = 0,
	VIDEOSTATE_SPOOLING = 1,
	VIDEOSTATE_READY = 2,
	VIDEOSTATE_PLAYING = 3,
};
/* End enums */

/* Begin structs */

struct MATRIX // hashcode: 0x3BD346F0 (dec: 1003702000)
{
	short m[3][3]; // size=18, offset=0
	long t[3]; // size=12, offset=20
};

struct VECTOR // hashcode: 0xCB78D6DC (dec: -881273124)
{
	long vx; // size=0, offset=0
	long vy; // size=0, offset=4
	long vz; // size=0, offset=8
	long pad; // size=0, offset=12
};

struct SVECTOR // hashcode: 0xD4A535D1 (dec: -727370287)
{
	short vx; // size=0, offset=0
	short vy; // size=0, offset=2
	short vz; // size=0, offset=4
	short pad; // size=0, offset=6
};

struct CVECTOR // hashcode: 0xFAB94110 (dec: -88522480)
{
	unsigned char r; // size=0, offset=0
	unsigned char g; // size=0, offset=1
	unsigned char b; // size=0, offset=2
	unsigned char cd; // size=0, offset=3
};

struct DVECTOR // hashcode: 0xC9B11C75 (dec: -911139723)
{
	short vx; // size=0, offset=0
	short vy; // size=0, offset=2
};

struct RVECTOR // hashcode: 0xD8F7B445 (dec: -654855099)
{
	struct SVECTOR v; // size=8, offset=0
	unsigned char uv[2]; // size=2, offset=8
	unsigned short pad; // size=0, offset=10
	struct CVECTOR c; // size=4, offset=12
	struct DVECTOR sxy; // size=4, offset=16
	unsigned long sz; // size=0, offset=20
};

struct CRVECTOR3 // hashcode: 0x35902847 (dec: 898639943)
{
	struct RVECTOR r01; // size=24, offset=0
	struct RVECTOR r12; // size=24, offset=24
	struct RVECTOR r20; // size=24, offset=48
	struct RVECTOR *r0; // size=24, offset=72
	struct RVECTOR *r1; // size=24, offset=76
	struct RVECTOR *r2; // size=24, offset=80
	unsigned long *rtn; // size=0, offset=84
};

struct CRVECTOR4 // hashcode: 0xBE9C161A (dec: -1097066982)
{
	struct RVECTOR r01; // size=24, offset=0
	struct RVECTOR r02; // size=24, offset=24
	struct RVECTOR r31; // size=24, offset=48
	struct RVECTOR r32; // size=24, offset=72
	struct RVECTOR rc; // size=24, offset=96
	struct RVECTOR *r0; // size=24, offset=120
	struct RVECTOR *r1; // size=24, offset=124
	struct RVECTOR *r2; // size=24, offset=128
	struct RVECTOR *r3; // size=24, offset=132
	unsigned long *rtn; // size=0, offset=136
};

struct RECT // hashcode: 0xA744DD20 (dec: -1488659168)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short w; // size=0, offset=4
	short h; // size=0, offset=6
};

struct DR_ENV // hashcode: 0xC8D48A9D (dec: -925594979)
{
	unsigned long tag; // size=0, offset=0
	unsigned long code[15]; // size=60, offset=4
};

struct DRAWENV // hashcode: 0x358E85C1 (dec: 898532801)
{
	struct RECT clip; // size=8, offset=0
	short ofs[2]; // size=4, offset=8
	struct RECT tw; // size=8, offset=12
	unsigned short tpage; // size=0, offset=20
	unsigned char dtd; // size=0, offset=22
	unsigned char dfe; // size=0, offset=23
	unsigned char isbg; // size=0, offset=24
	unsigned char r0; // size=0, offset=25
	unsigned char g0; // size=0, offset=26
	unsigned char b0; // size=0, offset=27
	struct DR_ENV dr_env; // size=64, offset=28
};

struct DISPENV // hashcode: 0x28BB99E7 (dec: 683383271)
{
	struct RECT disp; // size=8, offset=0
	struct RECT screen; // size=8, offset=8
	unsigned char isinter; // size=0, offset=16
	unsigned char isrgb24; // size=0, offset=17
	unsigned char pad0; // size=0, offset=18
	unsigned char pad1; // size=0, offset=19
};

struct DR_MODE // hashcode: 0x433837CF (dec: 1127757775)
{
	unsigned long tag; // size=0, offset=0
	unsigned long code[2]; // size=8, offset=4
};

struct shapetbl // hashcode: 0xF3E5B69F (dec: -203049313)
{
	unsigned int type; // size=8, offset=0
	int next; // size=24, offset=8
	short width; // size=0, offset=4
	short height; // size=0, offset=6
	short centerx; // size=0, offset=8
	short centery; // size=0, offset=10
	int shapex; // size=12, offset=96
	unsigned int reserved; // size=1, offset=108
	unsigned int twiddled; // size=1, offset=109
	unsigned int transposed; // size=1, offset=110
	unsigned int rotated; // size=1, offset=111
	int shapey; // size=12, offset=112
	unsigned int mipmaps; // size=4, offset=124
	char data; // size=0, offset=16
};

struct coorddef // hashcode: 0x29F67CAF (dec: 704019631)
{
	int x; // size=0, offset=0
	int y; // size=0, offset=4
	int z; // size=0, offset=8
};

struct matrixtdef // hashcode: 0x5DC3DD70 (dec: 1573117296)
{
	int m[9]; // size=36, offset=0
};

struct cdstreamstruct // hashcode: 0x7C565F87 (dec: 2086035335)
{
	long id; // size=0, offset=0
	char *start; // size=0, offset=4
	char *end; // size=0, offset=8
	char *write; // size=0, offset=12
	char *header; // size=0, offset=16
	char *get; // size=0, offset=20
	char *release; // size=0, offset=24
	int handle; // size=0, offset=28
	int state; // size=0, offset=32
	int control; // size=0, offset=36
	int status; // size=0, offset=40
	int abort; // size=0, offset=44
	int datahascrc; // size=0, offset=48
	int crcerrors; // size=0, offset=52
	int crcretries; // size=0, offset=56
	int buffersize; // size=0, offset=60
	long blocksize; // size=0, offset=64
	int readsize; // size=0, offset=68
	int chunksize; // size=0, offset=72
	int relocationsize; // size=0, offset=76
	long fileoffset; // size=0, offset=80
	int fileend; // size=0, offset=84
	long filesize; // size=0, offset=88
	int dataoffset; // size=0, offset=92
	int seekposition; // size=0, offset=96
	int seekoffset; // size=0, offset=100
	int idtype; // size=0, offset=104
	int idmask; // size=0, offset=108
	struct cdstreamstruct *nextstream; // size=152, offset=112
	void *emptyblock; // size=0, offset=116
	void *head; // size=0, offset=120
	void *tail; // size=0, offset=124
	void *block; // size=0, offset=128
	int timer; // size=0, offset=132
	int blocktime; // size=0, offset=136
	int streamfull; // size=0, offset=140
	int getable; // size=0, offset=144
	int releaseable; // size=0, offset=148
};

struct linedef // hashcode: 0x939D041D (dec: -1818426339)
{
	int start; // size=0, offset=0
	int end; // size=0, offset=4
	int colour; // size=0, offset=8
	int thickness; // size=0, offset=12
};

struct SHAPETABLEENTRY // hashcode: 0x74AB599A (dec: 1957386650)
{
	char id[4]; // size=4, offset=0
	long offset; // size=0, offset=4
};

struct PCOORD16 // hashcode: 0xA5F83D69 (dec: -1510458007)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short p; // size=0, offset=6
};

struct COORD16 // hashcode: 0x11C4A969 (dec: 298101097)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
};

struct CCOORD16 // hashcode: 0xBD7E5C28 (dec: -1115792344)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short light; // size=0, offset=6
};

struct PAD_PSX // hashcode: 0x738F48F6 (dec: 1938770166)
{
	unsigned short state; // size=0, offset=0
	unsigned short unused[2]; // size=4, offset=2
};

struct PAD_NEGCON // hashcode: 0x5846A668 (dec: 1481025128)
{
	unsigned char state; // size=4, offset=0
	unsigned char start; // size=4, offset=4
	unsigned char buttonAB; // size=4, offset=8
	unsigned char rightshift; // size=4, offset=12
	unsigned char twist; // size=0, offset=2
	unsigned char buttonI; // size=0, offset=3
	unsigned char buttonII; // size=0, offset=4
	unsigned char leftshift; // size=0, offset=5
};

struct PAD_ANALOG // hashcode: 0xA0D477BB (dec: -1596688453)
{
	unsigned short state; // size=0, offset=0
	unsigned char rightx; // size=0, offset=2
	unsigned char righty; // size=0, offset=3
	unsigned char leftx; // size=0, offset=4
	unsigned char lefty; // size=0, offset=5
};

struct PAD_MOUSE // hashcode: 0xD027E6C6 (dec: -802691386)
{
	unsigned char unused; // size=0, offset=0
	unsigned char state; // size=0, offset=1
	char horizontalvalue; // size=0, offset=2
	char verticalvalue; // size=0, offset=3
	unsigned char unused2[2]; // size=2, offset=4
};

struct PAD_COMMON // hashcode: 0x8EB02108 (dec: -1901059832)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __68 data; // size=6, offset=2
};

struct __71 // hashcode: 0xFE50D6AC (dec: -28256596)
{
	char bActive; // size=0, offset=0
	char time; // size=0, offset=1
};

struct Draw_tPixMap // hashcode: 0xCC4FA595 (dec: -867195499)
{
	unsigned char u0; // size=0, offset=0
	unsigned char v0; // size=0, offset=1
	unsigned short clut; // size=0, offset=2
	unsigned char u1; // size=0, offset=4
	unsigned char v1; // size=0, offset=5
	unsigned short tpage; // size=0, offset=6
	unsigned char u2; // size=0, offset=8
	unsigned char v2; // size=0, offset=9
	unsigned short pad2; // size=0, offset=10
	unsigned char u3; // size=0, offset=12
	unsigned char v3; // size=0, offset=13
	unsigned short flag; // size=0, offset=14
};

struct DRender_tCalcView // hashcode: 0xE8CB9B07 (dec: -389309689)
{
	struct coorddef translation; // size=12, offset=0
	struct matrixtdef mrotation; // size=36, offset=12
	struct coorddef translationInv; // size=12, offset=48
	struct matrixtdef mrotationInv; // size=36, offset=60
	struct matrixtdef mrotationInvRaw; // size=36, offset=96
};

struct Draw_SVertex // hashcode: 0xF5C3CE1F (dec: -171717089)
{
	short vx; // size=0, offset=0
	short vy; // size=0, offset=2
	short vz; // size=0, offset=4
	unsigned char u; // size=0, offset=6
	unsigned char v; // size=0, offset=7
	short dvx; // size=0, offset=8
	short dvy; // size=0, offset=10
	unsigned char r; // size=0, offset=12
	unsigned char g; // size=0, offset=13
	unsigned char b; // size=0, offset=14
	unsigned char a; // size=0, offset=15
};

struct Draw_PrimStruct // hashcode: 0xDEF8FBB5 (dec: -554107979)
{
	unsigned long *LastPrim; // size=0, offset=0
	char *PrimPtr; // size=0, offset=4
	char *MPrimPtr; // size=0, offset=8
};

struct Draw_tCacheHeader // hashcode: 0xE7894389 (dec: -410434679)
{
	struct Draw_PrimStruct cprim; // size=12, offset=0
	int mirror; // size=0, offset=12
	short clipW; // size=0, offset=16
	short clipH; // size=0, offset=18
};

struct Draw_CarVertex // hashcode: 0x27FE1AED (dec: 670964461)
{
	struct COORD16 vt; // size=6, offset=0
	char u; // size=0, offset=6
	char v; // size=0, offset=7
};

struct Group // hashcode: 0xBCD050D8 (dec: -1127198504)
{
	int m_num_elements; // size=0, offset=0
};

struct Trk_ObjectDef // hashcode: 0x593DE7BC (dec: 1497229244)
{
	short id; // size=0, offset=0
	unsigned char vertexCount; // size=0, offset=2
	unsigned char quadCount; // size=0, offset=3
};

struct Trk_CollideBoomInst // hashcode: 0xE34CDD21 (dec: -481501919)
{
	short size; // size=0, offset=0
	unsigned char type; // size=0, offset=2
	unsigned char objectIndex; // size=0, offset=3
	unsigned char zoffset; // size=0, offset=4
	unsigned char flags; // size=0, offset=5
	short pad; // size=0, offset=6
	int x; // size=0, offset=8
	int y; // size=0, offset=12
	int z; // size=0, offset=16
	short qx; // size=0, offset=20
	short qy; // size=0, offset=22
	short qz; // size=0, offset=24
	short qw; // size=0, offset=26
	short sx; // size=0, offset=28
	short sy; // size=0, offset=30
	short sz; // size=0, offset=32
	unsigned char simIndex; // size=0, offset=34
	unsigned char boomIndex; // size=0, offset=35
};

struct Trk_AnimateInst // hashcode: 0x134AEBD0 (dec: 323677136)
{
	short size; // size=0, offset=0
	unsigned char type; // size=0, offset=2
	unsigned char objectIndex; // size=0, offset=3
	unsigned char zoffset; // size=0, offset=4
	unsigned char flags; // size=0, offset=5
	short pad; // size=0, offset=6
	short count; // size=0, offset=8
	short interval; // size=0, offset=10
};

struct Trk_Quad // hashcode: 0x3987E2F0 (dec: 965206768)
{
	short material; // size=0, offset=0
	unsigned char aPoints[4]; // size=4, offset=2
};

struct Trk_NewStrip // hashcode: 0x7A328E63 (dec: 2050133603)
{
	unsigned char topVert; // size=0, offset=0
	unsigned char botVert; // size=0, offset=1
	char quadCount; // size=0, offset=2
	char size; // size=0, offset=3
};

struct Trk_NewSimQuad // hashcode: 0x50B351B6 (dec: 1353929142)
{
	unsigned char surface; // size=0, offset=0
};

struct Trk_NewSimSlice // hashcode: 0xA20EB907 (dec: -1576093433)
{
	unsigned char stripIndex; // size=0, offset=0
	unsigned char quadCount; // size=0, offset=1
	unsigned char simquadIndex; // size=0, offset=2
	unsigned char simquadCount; // size=0, offset=3
	unsigned char simquadStartIndex; // size=0, offset=4
};

struct Trk_SimObject // hashcode: 0xB47B73A5 (dec: -1266977883)
{
	int point[3]; // size=12, offset=0
	short radius; // size=0, offset=12
	short serialNum; // size=0, offset=14
	unsigned char topCRAP; // size=0, offset=16
	unsigned char bottomCRAP; // size=0, offset=17
	unsigned char instIndex; // size=0, offset=18
	unsigned char type; // size=0, offset=19
};

struct RelCoord16 // hashcode: 0x58AB2A46 (dec: 1487612486)
{
	short x; // size=0, offset=0
	short z; // size=0, offset=2
};

struct tSaveSurface // hashcode: 0x1C15ABC8 (dec: 471182280)
{
	struct Trk_NewSimQuad *fSimQuad; // size=1, offset=0
	unsigned char fSurface; // size=0, offset=4
};

struct BWorldSm_Pos // hashcode: 0xBC0F4C02 (dec: -1139848190)
{
	short slice; // size=0, offset=0
	short stripQuadInd; // size=0, offset=2
	short simRotFlag; // size=0, offset=4
	struct coorddef quadPts[4]; // size=48, offset=8
	struct CCOORD16 quadPts16[4]; // size=32, offset=56
	char sliceChanged; // size=0, offset=88
	char quadChanged; // size=0, offset=89
	char offEdge; // size=0, offset=90
	char triangleFlag; // size=0, offset=91
	struct coorddef normal; // size=12, offset=92
	struct coorddef forward; // size=12, offset=104
	char quad; // size=0, offset=116
	unsigned char chunk; // size=0, offset=117
	char lastRezRequested; // size=0, offset=118
	char rez; // size=0, offset=119
	struct Trk_NewSimQuad *simQuad; // size=1, offset=120
	struct Trk_NewStrip *strip; // size=4, offset=124
	struct Trk_NewSimSlice *simSlice; // size=5, offset=128
};

struct BO_tNewtonCollisionInfo // hashcode: 0xB0CA1A67 (dec: -1328932249)
{
	int collided; // size=0, offset=0
	int impulse; // size=0, offset=4
	struct BO_tNewtonObj *otherObj; // size=0, offset=8
	int sfxType; // size=0, offset=12
	int disableCollisionTimer; // size=0, offset=16
	struct coorddef collisionPoint; // size=12, offset=20
	int lastCollision; // size=0, offset=32
	struct BO_tNewtonObj *lastOtherObj; // size=0, offset=36
	int lastImpulse; // size=0, offset=40
	int lastTime; // size=0, offset=44
};

struct BO_tNewtonObj // hashcode: 0x18EA3E8A (dec: 418004618)
{
	int objID; // size=0, offset=0
	unsigned short oldSlice; // size=0, offset=4
	unsigned short totalSlice; // size=0, offset=6
	struct BWorldSm_Pos simRoadInfo; // size=132, offset=8
	int distToPlayer; // size=0, offset=140
	unsigned char simOptz; // size=0, offset=144
	unsigned char active; // size=0, offset=145
	unsigned char reOrthoCounter; // size=0, offset=146
	int gravityMult; // size=0, offset=148
	int cumulatedRot; // size=0, offset=152
	int lastUpdated; // size=0, offset=156
	struct coorddef position; // size=12, offset=160
	struct coorddef linearVel; // size=12, offset=172
	int mass; // size=0, offset=184
	int massInv; // size=0, offset=188
	int speedXZ; // size=0, offset=192
	int xRelRoadCenter; // size=0, offset=196
	short positionXZ; // size=0, offset=200
	short eIndexEnvMap; // size=0, offset=202
	short eIndexShadow; // size=0, offset=204
	int wheelRot[2]; // size=8, offset=208
	int wheelFrontX; // size=0, offset=216
	int wheelFrontZ; // size=0, offset=220
	int wheelBackX; // size=0, offset=224
	int wheelBackZ; // size=0, offset=228
	int wheelWidthF; // size=0, offset=232
	int wheelWidthB; // size=0, offset=236
	struct matrixtdef orientMat; // size=36, offset=240
	struct coorddef angularVel; // size=12, offset=276
	int moInertia; // size=0, offset=288
	int moInertiaInv; // size=0, offset=292
	struct coorddef orientationToGround; // size=12, offset=296
	struct coorddef dimension; // size=12, offset=308
	int dimensionRadius; // size=0, offset=320
	struct matrixtdef roadMatrix; // size=36, offset=324
	struct coorddef roadCenterPoint; // size=12, offset=360
	int roadGravityModifier; // size=0, offset=372
	int roadYaw; // size=0, offset=376
	unsigned short flightTime; // size=0, offset=380
	unsigned short deadTimer; // size=0, offset=382
	int groundElevation; // size=0, offset=384
	int groundVel; // size=0, offset=388
	int objAltitude; // size=0, offset=392
	struct BO_tNewtonCollisionInfo collision; // size=48, offset=396
	int groundSurfaceType; // size=0, offset=444
	int driveSurfaceType; // size=0, offset=448
	struct matrixtdef shadowMat; // size=36, offset=452
	struct coorddef shadowCoord[4]; // size=48, offset=488
	int damage[10]; // size=40, offset=536
};

struct GameSetup_tCarData // hashcode: 0xE93C4AD0 (dec: -381924656)
{
	int carType; // size=0, offset=0
	int carClass; // size=0, offset=4
	int Transmission; // size=0, offset=8
	int Colour; // size=0, offset=12
	int ColourSV; // size=0, offset=16
	int ColourChange; // size=0, offset=20
	int RampSteering; // size=0, offset=24
	int RampGas; // size=0, offset=28
	int RampBrake; // size=0, offset=32
	int BrakeBias; // size=0, offset=36
	int GearRatio; // size=0, offset=40
	int SteeringQuickness; // size=0, offset=44
	int Traction; // size=0, offset=48
	int BrakeAssist; // size=0, offset=52
	int TireType; // size=0, offset=56
	int EngineMods; // size=0, offset=60
	int WeightTransfer; // size=0, offset=64
	int GroundEffects; // size=0, offset=68
	int ABS; // size=0, offset=72
	int Bestline; // size=0, offset=76
	int Personality; // size=0, offset=80
	int StartingPos; // size=0, offset=84
	int carNameIndex; // size=0, offset=88
	char driver[8]; // size=8, offset=92
	int pad; // size=0, offset=100
	char license[8]; // size=8, offset=104
	int HudSpeed; // size=0, offset=112
	int HudSpeedMult; // size=0, offset=116
	int HudTach; // size=0, offset=120
	int HudMap; // size=0, offset=124
	int HudOpponentID; // size=0, offset=128
	int HudTime; // size=0, offset=132
	int HudLapnum; // size=0, offset=136
	int HudPosition; // size=0, offset=140
	int HudMirror; // size=0, offset=144
	int HudColour; // size=0, offset=148
	int HudTachColour; // size=0, offset=152
	int SpeechColour; // size=0, offset=156
	int Country; // size=0, offset=160
	int Camera[4]; // size=16, offset=164
};

struct GameSetup_tUserSetting // hashcode: 0x43F9C5C0 (dec: 1140442560)
{
	int language; // size=0, offset=0
	int display; // size=0, offset=4
	int bestlap; // size=0, offset=8
	int audioMode; // size=0, offset=12
	int musicLevel; // size=0, offset=16
	int sfxLevel; // size=0, offset=20
	int engineLevel; // size=0, offset=24
	int speechLevel; // size=0, offset=28
	int ambientLevel; // size=0, offset=32
	int interactive; // size=0, offset=36
	int numplaylistsongs; // size=0, offset=40
	int playlist[40]; // size=160, offset=44
};

struct GameSetup_tPerpData // hashcode: 0x9867F679 (dec: -1738017159)
{
	int CarType; // size=0, offset=0
	int Colour; // size=0, offset=4
	int SpeechColour; // size=0, offset=8
	int HudColour; // size=0, offset=12
	int Personality; // size=0, offset=16
	int TimeLimit; // size=0, offset=20
	int WingmanTime; // size=0, offset=24
	int SpikeBeltTime; // size=0, offset=28
	int BlockadeCopTime; // size=0, offset=32
	int Distance; // size=0, offset=36
	int SpeedFactor; // size=0, offset=40
	int WeightFactor; // size=0, offset=44
	int GlueFactor; // size=0, offset=48
};

struct GameSetup_tControllerData // hashcode: 0x2C609DB4 (dec: 744529332)
{
	int controllerConfig[2]; // size=8, offset=0
	int deadSpot[2]; // size=8, offset=8
	int steeringRange[2]; // size=8, offset=16
	int IImaxRange[2]; // size=8, offset=24
	int ImaxRange[2]; // size=8, offset=32
	int J1MIN[2]; // size=8, offset=40
	int J1MAX[2]; // size=8, offset=48
	int J2MIN[2]; // size=8, offset=56
	int J2MAX[2]; // size=8, offset=64
	int shockMode[2]; // size=8, offset=72
	int shockImpact[2]; // size=8, offset=80
};

struct Sched_tFunctionSchedule // hashcode: 0x0D14BBBD (dec: 219462589)
{
	int priority; // size=0, offset=0
	void (*function)(); // size=0, offset=4
	void *var1; // size=0, offset=8
	void *var2; // size=0, offset=12
};

struct Sched_tSchedule // hashcode: 0xF855358E (dec: -128633458)
{
	int maxNumFunctions; // size=0, offset=0
	int numFunctions; // size=0, offset=4
	struct Sched_tFunctionSchedule func[1]; // size=16, offset=8
};

struct Transformer_zUV // hashcode: 0x7FDBB35E (dec: 2145104734)
{
	unsigned char u; // size=0, offset=0
	unsigned char v; // size=0, offset=1
};

struct Transformer_zFacet // hashcode: 0x90ADBC21 (dec: -1867662303)
{
	short flag; // size=0, offset=0
	unsigned char textureIndex; // size=0, offset=2
	unsigned char vertexId0; // size=0, offset=3
	unsigned char vertexId1; // size=0, offset=4
	unsigned char vertexId2; // size=0, offset=5
	struct Transformer_zUV uv0; // size=2, offset=6
	struct Transformer_zUV uv1; // size=2, offset=8
	struct Transformer_zUV uv2; // size=2, offset=10
};

struct Transformer_zObj // hashcode: 0x9B8A4BF8 (dec: -1685435400)
{
	unsigned short numVertex; // size=0, offset=0
	unsigned short numFacet; // size=0, offset=2
	struct coorddef translation; // size=12, offset=4
	struct COORD16 *vertex; // size=6, offset=16
	struct COORD16 *Nvertex; // size=6, offset=20
	struct Transformer_zFacet *facet; // size=12, offset=24
};

struct Transformer_zOverlay // hashcode: 0xC77675A4 (dec: -948537948)
{
	short offset; // size=0, offset=0
	unsigned char u; // size=0, offset=2
	unsigned char v; // size=0, offset=3
};

struct AIPerson_t // hashcode: 0x823BB363 (dec: -2110016669)
{
	int blockMaxDistance; // size=0, offset=0
	int blockMinDistance; // size=0, offset=4
	int oncomingLookAhead; // size=0, offset=8
	int laneSwerve[4]; // size=16, offset=12
	int swerveChangeProb; // size=0, offset=28
	int brakeMultiplier; // size=0, offset=32
	int attackActivationHits; // size=0, offset=36
	int attackTime; // size=0, offset=40
	int fishtailAngle; // size=0, offset=44
	int minimumBetweenWipeoutTicks; // size=0, offset=48
	int randomBetweenWipeoutTicks; // size=0, offset=52
	int gripLossProbPerSecond; // size=0, offset=56
	int gripLossMinFactor; // size=0, offset=60
	int gripLossRecoveryPerTick; // size=0, offset=64
	int bestLineAbility; // size=0, offset=68
	unsigned int rearBumpProbMask; // size=0, offset=72
	unsigned int smackProbMask; // size=0, offset=76
	unsigned int copCollisionFirmness; // size=0, offset=80
};

struct AIScript_tReactionDetails // hashcode: 0xC8A07213 (dec: -929009133)
{
	char reaction[4]; // size=4, offset=0
	char halfSeconds[4]; // size=4, offset=4
};

struct AIScript_t // hashcode: 0x13B56D97 (dec: 330657175)
{
	enum AIScript_tPlayAction detectAction; // size=4, offset=0
	int detectHumCarIndex; // size=0, offset=4
	enum AIScript_tPlayAction actionIndex; // size=4, offset=8
	int actionHumCarIndex; // size=0, offset=12
	int reactionIndex; // size=0, offset=16
	enum AIScript_tAIReaction reaction; // size=4, offset=20
	int reactionTicksLeft; // size=0, offset=24
	struct AIScript_tReactionDetails (*data)[7]; // size=4, offset=28
	int lastReactionIndex[7]; // size=28, offset=32
	int lastActionTime; // size=0, offset=60
};

struct AISpeechInfo_t // hashcode: 0xDE9AB228 (dec: -560287192)
{
	enum speechModeType speechMode; // size=4, offset=0
	enum speechIntensityType speechIntensity; // size=4, offset=4
	enum speechSourceType speechSource; // size=4, offset=8
	int playerCarIndex; // size=0, offset=12
	int copCarIndex; // size=0, offset=16
	int warningNumber; // size=0, offset=20
};

struct Car_tStats // hashcode: 0xD53CC433 (dec: -717437901)
{
	int extractSlice; // size=0, offset=0
	int sliceTotal; // size=0, offset=4
	int sliceTime; // size=0, offset=8
	int slice; // size=0, offset=12
	int lastSlice; // size=0, offset=16
	int lap; // size=0, offset=20
	int lapTime; // size=0, offset=24
	int time[4]; // size=16, offset=28
	int topSpeed[4]; // size=16, offset=44
	int position; // size=0, offset=60
	int fatalCrashes; // size=0, offset=64
	int finishType; // size=0, offset=68
	int checkpointDifference; // size=0, offset=72
	int checkpointUpdate; // size=0, offset=76
	int checkpointDisplay; // size=0, offset=80
	int numWarnings; // size=0, offset=84
	int numFines; // size=0, offset=88
	int numArrests; // size=0, offset=92
	int carType; // size=0, offset=96
	int carClass; // size=0, offset=100
	int carNameIndex; // size=0, offset=104
	int carFlags; // size=0, offset=108
	int finalDamage; // size=0, offset=112
	int finalNumWarnings; // size=0, offset=116
	int finalNumFines; // size=0, offset=120
	int finalNumArrests; // size=0, offset=124
	int finalFinishType; // size=0, offset=128
	int finalPosition; // size=0, offset=132
	int finalTotalTime; // size=0, offset=136
	int finalLapTime[4]; // size=16, offset=140
	int finalBestLap; // size=0, offset=156
};

struct Car_tControl // hashcode: 0x8B0D2B49 (dec: -1962071223)
{
	char desiredGasLevel; // size=0, offset=0
	char desiredBrakeLevel; // size=0, offset=1
	char desiredGear; // size=0, offset=2
	char gasLevel; // size=0, offset=3
	char brakeLevel; // size=0, offset=4
	char lastGear; // size=0, offset=5
	char gear; // size=0, offset=6
	char downShifting; // size=0, offset=7
	char gearShiftTimer; // size=0, offset=8
	char handBrake; // size=0, offset=9
	char horn; // size=0, offset=10
	char lights; // size=0, offset=11
	char lookBehind; // size=0, offset=12
	char abort; // size=0, offset=13
	char event; // size=0, offset=14
	char queuedEvent; // size=0, offset=15
	int desiredSteering; // size=0, offset=16
	int steering; // size=0, offset=20
	int hanno; // size=0, offset=24
};

struct Car_tWheel // hashcode: 0xC6561BFF (dec: -967435265)
{
	struct coorddef currentPos; // size=12, offset=0
	struct coorddef roadNormal; // size=12, offset=12
	int actualHeight; // size=0, offset=24
	int wheelAcc; // size=0, offset=28
	int wheelInAir; // size=0, offset=32
	int rebound; // size=0, offset=36
	int impactCompression; // size=0, offset=40
	int roadSurfaceType; // size=0, offset=44
};

struct Car_tSpecs // hashcode: 0x97FBB356 (dec: -1745112234)
{
	int mass; // size=0, offset=0
	int numGears; // size=0, offset=4
	int gearShiftDelay; // size=0, offset=8
	int velToRpmRatio[8]; // size=32, offset=12
	int gearEfficiency[8]; // size=32, offset=44
	int torqueCurve[41]; // size=164, offset=76
	int redline; // size=0, offset=240
	int maxSpeed; // size=0, offset=244
	int frontDriveRatio; // size=0, offset=248
	int maxBrakeAcc; // size=0, offset=252
	int frontBrakeRatio; // size=0, offset=256
	int wheelBase; // size=0, offset=260
	int frontGripBias; // size=0, offset=264
	int maxSteeringAcc; // size=0, offset=268
	int steeringRamp; // size=0, offset=272
	int lateralGripMult; // size=0, offset=276
	int frontAeroDownForce; // size=0, offset=280
	int rearAeroDownForce; // size=0, offset=284
	int gasOffFactor; // size=0, offset=288
	int gTransferFactor; // size=0, offset=292
	int slideMultiplier; // size=0, offset=296
	int spinVelCap; // size=0, offset=300
	int dampingPitchRate; // size=0, offset=304
	int dampingRollRate; // size=0, offset=308
	int suspensionStiffness; // size=0, offset=312
	int pitchAngularVelCap; // size=0, offset=316
	int rollAngularVelCap; // size=0, offset=320
	int damageFactor; // size=0, offset=324
	int bodyPitchFactor; // size=0, offset=328
	int bodyRollFactor; // size=0, offset=332
	int tireRange; // size=0, offset=336
	int rideOffset; // size=0, offset=340
	int dragFactor; // size=0, offset=344
	int redlineInv; // size=0, offset=348
	int gearVelInv[8]; // size=32, offset=352
	int velToRpmRatioInv[8]; // size=32, offset=384
	int gearAccCoeff[8]; // size=32, offset=416
	int dragCoeff; // size=0, offset=448
	int alphaToAccRotInertia; // size=0, offset=452
	int accToAlphaRotInertia; // size=0, offset=456
	int lateralGripMultInv; // size=0, offset=460
};

struct Cars_tCollisionInfo // hashcode: 0x15FABB45 (dec: 368753477)
{
	int resetTimer; // size=0, offset=0
	int smoking; // size=0, offset=4
};

struct Cars_tAudio // hashcode: 0xFCEF89D4 (dec: -51410476)
{
	int type; // size=0, offset=0
	int channel; // size=0, offset=4
	int surface1; // size=0, offset=8
	int surface2; // size=0, offset=12
	int force; // size=0, offset=16
	int panangle; // size=0, offset=20
};

struct Cars_tRenderInfo // hashcode: 0x23A1E6B6 (dec: 597812918)
{
	short colorIndex; // size=0, offset=0
	char currentCountry; // size=0, offset=2
	char newCountry; // size=0, offset=3
	int textureStartIndex; // size=0, offset=4
	int bodyPitch; // size=0, offset=8
	int bodyRoll; // size=0, offset=12
	int currentPitch; // size=0, offset=16
	int currentRoll; // size=0, offset=20
	int currentHeight; // size=0, offset=24
	int pitchFactor; // size=0, offset=28
	int rollFactor; // size=0, offset=32
	int world_otz; // size=0, offset=36
	int sub_otz; // size=0, offset=40
	unsigned long *sub_ot; // size=0, offset=44
	int sub_otSize; // size=0, offset=48
	int sub_otOffset; // size=0, offset=52
	void *sort_carObj; // size=0, offset=56
	short sort_flag; // size=0, offset=60
	short damageParts; // size=0, offset=62
	int light; // size=0, offset=64
	char *palCopy; // size=0, offset=68
	short palNum; // size=0, offset=72
	short palCopyNum[20]; // size=40, offset=74
	char medOnly; // size=0, offset=114
	char upgradeFlags; // size=0, offset=115
	short headLight; // size=0, offset=116
	short brakeLight; // size=0, offset=118
	short signalLight[2]; // size=4, offset=120
	short currentCarType; // size=0, offset=124
	short newCarType; // size=0, offset=126
	short inside; // size=0, offset=128
	short detail; // size=0, offset=130
	short VRamX; // size=0, offset=132
	short VRamY; // size=0, offset=134
	short textureOffsetU; // size=0, offset=136
	short textureOffsetV; // size=0, offset=138
	unsigned char licenseOffsetU[2]; // size=2, offset=140
	unsigned char licenseOffsetV[2]; // size=2, offset=142
	int rideHeight; // size=0, offset=144
	int upgradeHeight; // size=0, offset=148
};

struct Car_tObj // hashcode: 0x16A026C1 (dec: 379594433)
{
	struct BO_tNewtonObj N; // size=576, offset=0
	char carName[9]; // size=9, offset=576
	char carNameLocalized[9]; // size=9, offset=585
	int carIndex; // size=0, offset=596
	int humanIndex; // size=0, offset=600
	int sortIndex; // size=0, offset=604
	int carFlags; // size=0, offset=608
	int lap; // size=0, offset=612
	int unlap; // size=0, offset=616
	int roadSpan; // size=0, offset=620
	int glue; // size=0, offset=624
	int blowout; // size=0, offset=628
	int pullOver; // size=0, offset=632
	int revLimit; // size=0, offset=636
	struct Car_tObj *swapCar; // size=2268, offset=640
	int swapTime; // size=0, offset=644
	struct GameSetup_tCarData *carInfo; // size=180, offset=648
	struct Car_tWheel wheel[4]; // size=192, offset=652
	struct Car_tStats stats; // size=160, offset=844
	int crash; // size=0, offset=1004
	int wrongway; // size=0, offset=1008
	struct coorddef angularAcc; // size=12, offset=1012
	struct coorddef linearAcc; // size=12, offset=1024
	struct coorddef linearAcc_ch; // size=12, offset=1036
	struct coorddef linearVel_ch; // size=12, offset=1048
	struct coorddef angularVel_ch; // size=12, offset=1060
	struct coorddef linearAcc_rh; // size=12, offset=1072
	struct Car_tControl control; // size=28, offset=1084
	char RSGasLevel; // size=0, offset=1112
	char RSBrakeLevel; // size=0, offset=1113
	int RSSteering; // size=0, offset=1116
	int RSControl; // size=0, offset=1120
	struct Car_tSpecs *specs; // size=464, offset=1124
	int flywheelRpm; // size=0, offset=1128
	int wheelSpin; // size=0, offset=1132
	int frontWheelSpin; // size=0, offset=1136
	int wheelLock; // size=0, offset=1140
	int slide; // size=0, offset=1144
	int gTransferFront; // size=0, offset=1148
	int gTransferRight; // size=0, offset=1152
	int frontSkid; // size=0, offset=1156
	int rearSkid; // size=0, offset=1160
	int oldSkidState; // size=0, offset=1164
	struct coorddef oldSkidPoint[4]; // size=48, offset=1168
	int oldAudioSkidState; // size=0, offset=1216
	void (*funcUpdateRoadInfo)(); // size=0, offset=1220
	void (*funcReplay)(); // size=0, offset=1224
	void (*funcControl)(); // size=0, offset=1228
	void (*funcStats)(); // size=0, offset=1232
	void (*funcHandlingPhysics)(); // size=0, offset=1236
	void (*funcGravityPhysics)(); // size=0, offset=1240
	void (*funcQDPhysicsUpdateVel)(); // size=0, offset=1244
	void (*funcQDPhysicsUpdateRot)(); // size=0, offset=1248
	void (*funcTestMeForCollisions)(); // size=0, offset=1252
	void (*funcDoPostCollisionStuff)(); // size=0, offset=1256
	int personalityIndex; // size=0, offset=1260
	struct AIPerson_t *personality; // size=84, offset=1264
	struct AIScript_t script; // size=64, offset=1268
	struct AISpeechInfo_t speechInfo; // size=24, offset=1332
	int carInLane; // size=0, offset=1356
	int desiredDirection; // size=0, offset=1360
	int direction; // size=0, offset=1364
	int desiredLatPos; // size=0, offset=1368
	int desiredSpeed; // size=0, offset=1372
	int originalDesiredSpeed; // size=0, offset=1376
	int currentSpeed; // size=0, offset=1380
	int speed; // size=0, offset=1384
	int laneSlack; // size=0, offset=1388
	int AIFlags; // size=0, offset=1392
	int roadPosition; // size=0, offset=1396
	struct Car_tObj *basisCar; // size=2268, offset=1400
	int aiShiftDuration; // size=0, offset=1404
	int aiShiftTimer; // size=0, offset=1408
	int redLine; // size=0, offset=1412
	int tailgateTimer; // size=0, offset=1416
	int physicsModelTimer; // size=0, offset=1420
	int trafficSpeedRandomizingFactor; // size=0, offset=1424
	int laneChangeSpeed; // size=0, offset=1428
	int topSpeeds[7]; // size=28, offset=1432
	int invTopSpeeds[7]; // size=28, offset=1460
	short accTable[112]; // size=224, offset=1488
	struct AIDataRecord_AccTable_t *accelerationRecord; // size=0, offset=1712
	struct AIDataRecord_CurveSpeedTable_t *curveSpeedTable; // size=0, offset=1716
	struct AIPhysic_BrakeInfo *brakeInfo; // size=0, offset=1720
	int speedFactor; // size=0, offset=1724
	int barrierThinkHarder; // size=0, offset=1728
	int laneIndex; // size=0, offset=1732
	int copTopSpeed; // size=0, offset=1736
	int copAccMult; // size=0, offset=1740
	struct coorddef desiredVector; // size=12, offset=1744
	int aCarWRTDesired; // size=0, offset=1756
	struct coorddef angularAcc_ch; // size=12, offset=1760
	int driveDirectionReverseTime; // size=0, offset=1772
	int driveDirection; // size=0, offset=1776
	int driveDirectionTimer; // size=0, offset=1780
	int aCar; // size=0, offset=1784
	int aDesired; // size=0, offset=1788
	int aCarWRTRoad; // size=0, offset=1792
	int lateralVelocity; // size=0, offset=1796
	struct coorddef targetPos; // size=12, offset=1800
	int targetLatPos; // size=0, offset=1812
	int rampDesiredLatPos; // size=0, offset=1816
	int preferredLateralPosition; // size=0, offset=1820
	int preferredLateralPositionPower; // size=0, offset=1824
	int timeOffRoad; // size=0, offset=1828
	int max_clacc; // size=0, offset=1832
	int max_aa; // size=0, offset=1836
	int aiGlue; // size=0, offset=1840
	int drag; // size=0, offset=1844
	int slackProb; // size=0, offset=1848
	int accNitrous; // size=0, offset=1852
	int speedNitrous; // size=0, offset=1856
	int wipeOutStartTick; // size=0, offset=1860
	int wipeOutEndTick; // size=0, offset=1864
	int btcGlueModifier; // size=0, offset=1868
	enum donutMode_t donutMode; // size=4, offset=1872
	int AIFishtailEndTick; // size=0, offset=1876
	int lookAheadSlice; // size=0, offset=1880
	int forceNoSimOptz; // size=0, offset=1884
	int gripFactor; // size=0, offset=1888
	struct Car_tObj *fallBehindCar; // size=2268, offset=1892
	struct Car_tObj *nextAIRacer; // size=2268, offset=1896
	int caravanFollowBehindDistanceMeters; // size=0, offset=1900
	int caravanTimer; // size=0, offset=1904
	int AISlot; // size=0, offset=1908
	int damageMult; // size=0, offset=1912
	int topSpeedUpgradeMult; // size=0, offset=1916
	int accUpgradeMult; // size=0, offset=1920
	int extraWallCollisionAllowance; // size=0, offset=1924
	struct Cars_tCollisionInfo collision; // size=8, offset=1928
	int audioDamageScrape; // size=0, offset=1936
	int audioCount; // size=0, offset=1940
	struct Cars_tAudio audio[7]; // size=168, offset=1944
	struct Cars_tRenderInfo render; // size=152, offset=2112
	int async_handle; // size=0, offset=2264
};

struct AIDataRecord_AccTable_t // hashcode: 0xC8E5DA28 (dec: -924460504)
{
	struct AIDataRecord_t AIDataRecord_t; // size=88, offset=0
	int scale_; // size=0, offset=88
};

struct AIDataRecord_CurveSpeedTable_t // hashcode: 0xB695D527 (dec: -1231694553)
{
	struct AIDataRecord_t AIDataRecord_t; // size=88, offset=0
};

struct AIPhysic_BrakeInfo // hashcode: 0x3D505E0A (dec: 1028677130)
{
	unsigned char brakeTable_[128]; // size=128, offset=0
	int deceleration_; // size=0, offset=128
};

struct AI_tInfo // hashcode: 0x7E267755 (dec: 2116450133)
{
	struct Car_tObj (*blockingCars[3]); // size=12, offset=0
	int blockingCarsDist[3]; // size=12, offset=12
	int laneSpeeds[3]; // size=12, offset=24
	int laneSpeedsAhead[3]; // size=12, offset=36
	int laneWeights[3]; // size=12, offset=48
	int desiredLane; // size=0, offset=60
	int desiredLaneSide; // size=0, offset=64
	int deltaYaw; // size=0, offset=68
};

struct AIPhysic_ModelConfig_t // hashcode: 0x258EC0D5 (dec: 630112469)
{
	int dlpos_to_dlvel; // size=0, offset=0
	int max_dlvel; // size=0, offset=4
	int dlvel_to_clacc; // size=0, offset=8
	int max_clacc; // size=0, offset=12
	int dangle_to_dav; // size=0, offset=16
	int max_dav; // size=0, offset=20
	int dav_to_aa; // size=0, offset=24
	int max_aa; // size=0, offset=28
	int vel_limit_range; // size=0, offset=32
	int lat_vel_limit_factor; // size=0, offset=36
	int ang_vel_limit_factor; // size=0, offset=40
};

struct AIDataRecord_t // hashcode: 0x4E9925A4 (dec: 1318659492)
{
	int numElements_; // size=0, offset=0
	int bSize_; // size=0, offset=4
	char name_[64]; // size=64, offset=8
	char *dataBuffer_; // size=0, offset=72
	char *preAllocatedBuffer_; // size=0, offset=76
	enum AIDataRecord_RecordMethod_t recordMethod_; // size=4, offset=80
	struct __vtbl_ptr_type (*_vf)[3]; // size=4, offset=84
};

struct AIDataRecord_BestLine_t // hashcode: 0x4EF849BE (dec: 1324894654)
{
	struct AIDataRecord_t AIDataRecord_t; // size=88, offset=0
};

struct BW_tContext // hashcode: 0xBFFA5A86 (dec: -1074111866)
{
	int client; // size=0, offset=0
	struct BWorldSm_Pos slicePos; // size=132, offset=4
	int currentChunk; // size=0, offset=136
	int chunkFarZClipSq; // size=0, offset=140
	int polyFarZClipSq; // size=0, offset=144
	int lowDetailDistSq; // size=0, offset=148
	int lineFarZClipSq; // size=0, offset=152
};

struct AnimScript // hashcode: 0x273C73C6 (dec: 658273222)
{
	int baseTicks; // size=0, offset=0
	int baseFrame; // size=0, offset=4
	int flags; // size=0, offset=8
	int numParts; // size=0, offset=12
	struct Trk_AnimateInst **inst; // size=12, offset=16
};

struct SceneElem // hashcode: 0x30A044C5 (dec: 815809733)
{
	int type; // size=0, offset=0
	int size; // size=0, offset=4
	int committed; // size=0, offset=8
	int visible; // size=0, offset=12
	struct coorddef cp; // size=12, offset=16
	int height; // size=0, offset=28
	struct matrixtdef orient; // size=36, offset=32
	int subType; // size=0, offset=68
	int subTypeIndex; // size=0, offset=72
	int scalar1; // size=0, offset=76
	int scalar2; // size=0, offset=80
	int scalar3; // size=0, offset=84
	int scalar4; // size=0, offset=88
};

struct SceneSortedElem // hashcode: 0x85BE465B (dec: -2051127717)
{
	int slice_; // size=0, offset=0
	struct SceneElem *se; // size=92, offset=4
};

struct AnimDef // hashcode: 0x3929DBC7 (dec: 959044551)
{
	int type; // size=0, offset=0
	int numPieces; // size=0, offset=4
	int objDefIndex; // size=0, offset=8
	int baseAnim; // size=0, offset=12
	int animIndex; // size=0, offset=16
};

struct ObjectAnim // hashcode: 0x7C0E4138 (dec: 2081308984)
{
	struct __vtbl_ptr_type (*_vf)[3]; // size=4, offset=0
};

struct ObjectFinishedMultiAnim // hashcode: 0xC3EE85C8 (dec: -1007778360)
{
	struct ObjectAnim ObjectAnim; // size=4, offset=0
};

struct ObjectFinishedSignAnim // hashcode: 0xAC3529AA (dec: -1405802070)
{
	struct ObjectAnim ObjectAnim; // size=4, offset=0
	struct matrixtdef finalMatrix; // size=36, offset=4
	struct Trk_ObjectDef *objDef; // size=4, offset=40
	struct Trk_CollideBoomInst *objCollideInstance; // size=36, offset=44
};

struct AIDelayCar // hashcode: 0xF47CF4C0 (dec: -193137472)
{
	int delayFactor_; // size=0, offset=0
	struct Car_tObj *basisCar_; // size=2268, offset=4
	struct Car_tObj *targetCar_; // size=2268, offset=8
	int deltaMeters_; // size=0, offset=12
	int slice_; // size=0, offset=16
	struct coorddef deltaPosition_; // size=12, offset=20
	struct coorddef position_; // size=12, offset=32
	int deltaRoadPosition_; // size=0, offset=44
	int roadPosition_; // size=0, offset=48
	int laneIndex_; // size=0, offset=52
	int currentSpeed_; // size=0, offset=56
};

struct copLevel_t // hashcode: 0x4C1DE103 (dec: 1277026563)
{
	int copChasers[2]; // size=8, offset=0
	int numBlockaders; // size=0, offset=8
	int copBlockaders[2]; // size=8, offset=12
	int spikeBelt; // size=0, offset=20
	int copAggression[2]; // size=8, offset=24
	int copsPerLap; // size=0, offset=32
	int engagementLapFraction; // size=0, offset=36
	int warningTicks; // size=0, offset=40
	int beatingTicks; // size=0, offset=44
	int numWarningsAdded; // size=0, offset=48
};

struct copGame_t // hashcode: 0x94BC16FB (dec: -1799612677)
{
	int numLevels; // size=0, offset=0
	struct copLevel_t *levels; // size=52, offset=4
};

struct AICop_BasicPerpInfo // hashcode: 0xCCD722BC (dec: -858316100)
{
	int copsAssigned_[2]; // size=8, offset=0
	enum crimeType crime_; // size=4, offset=8
};

struct AICop_PerpChaseInfo // hashcode: 0x5D4BA79B (dec: 1565239195)
{
	int engagementTime_; // size=0, offset=0
	struct copGame_t *copGameInfo_; // size=8, offset=4
	int chaseLevelIndex_; // size=0, offset=8
	int bestChaseLevelIndex_; // size=0, offset=12
	struct copLevel_t *chaseLevel_; // size=52, offset=16
	int totalEngagementPercent_; // size=0, offset=20
	int blockadeDone_; // size=0, offset=24
	int engagementPercentIncreasePerTick_; // size=0, offset=28
	int copFreeTicks_; // size=0, offset=32
};

struct trigger_anyTrigger_t // hashcode: 0xD196A196 (dec: -778657386)
{
	int type; // size=0, offset=0
	int slice; // size=0, offset=4
};

struct trigger_simple_t // hashcode: 0x3EC421F4 (dec: 1053041140)
{
	int type; // size=0, offset=0
	int slice; // size=0, offset=4
	int dir; // size=0, offset=8
	int side; // size=0, offset=12
	int moving; // size=0, offset=16
};

struct trigger_roadblock_t // hashcode: 0xD07C23EA (dec: -797170710)
{
	int type; // size=0, offset=0
	int slice; // size=0, offset=4
	int dir; // size=0, offset=8
	int numCars; // size=0, offset=12
	int spikeBelt; // size=0, offset=16
};

struct trigger_offroad_t // hashcode: 0xDE68BF90 (dec: -563560560)
{
	int type; // size=0, offset=0
	int slice; // size=0, offset=4
	int dir; // size=0, offset=8
	struct coorddef position; // size=12, offset=12
	struct matrixtdef orientation; // size=36, offset=24
	int maxSpeed; // size=0, offset=60
	int releaseTime; // size=0, offset=64
	int endSlice; // size=0, offset=68
};

struct trigger_trafficAccident_t // hashcode: 0x7FA43353 (dec: 2141467475)
{
	int type; // size=0, offset=0
	int slice; // size=0, offset=4
	struct coorddef position; // size=12, offset=8
	struct matrixtdef orientation; // size=36, offset=20
};

struct trigger_pathPosition_t // hashcode: 0x389F67F0 (dec: 949970928)
{
	struct coorddef position; // size=12, offset=0
	int targetSpeed; // size=0, offset=12
	int waitTime; // size=0, offset=16
};

struct trigger_trafficPath_t // hashcode: 0x1DA05012 (dec: 497045522)
{
	int type; // size=0, offset=0
	int slice; // size=0, offset=4
	int dir; // size=0, offset=8
	struct matrixtdef orientation; // size=36, offset=12
	int maxSpeed; // size=0, offset=48
	int releaseTime; // size=0, offset=52
	int numPoints; // size=0, offset=56
	struct trigger_pathPosition_t *path; // size=20, offset=60
};

struct AIState_Base // hashcode: 0x21AAF5BC (dec: 564852156)
{
	struct Car_tObj *carObj_; // size=2268, offset=0
	struct __vtbl_ptr_type (*_vf)[4]; // size=4, offset=4
};

struct AIState_None // hashcode: 0x4FAB87FB (dec: 1336641531)
{
	struct AIState_Base AIState_Base; // size=8, offset=0
};

struct AIState_Normal // hashcode: 0x91C7A796 (dec: -1849186410)
{
	struct AIState_Base AIState_Base; // size=8, offset=0
};

struct AIState_NonActive // hashcode: 0xB6FEB869 (dec: -1224820631)
{
	struct AIState_Base AIState_Base; // size=8, offset=0
};

struct AIHigh_Base // hashcode: 0x6E9E5173 (dec: 1855869299)
{
	struct Car_tObj *carObj_; // size=2268, offset=0
	struct AIState_Base *state_; // size=8, offset=4
	enum stateType_t stateType_; // size=4, offset=8
	int schedulingOff_; // size=0, offset=12
	int lastTrafficTriggerCheckSlice_; // size=0, offset=16
	struct __vtbl_ptr_type (*_vf)[3]; // size=4, offset=20
};

struct AIHigh_None // hashcode: 0xEA551513 (dec: -363522797)
{
	struct AIHigh_Base AIHigh_Base; // size=24, offset=0
};

struct __96 // hashcode: 0xFB0F88A6 (dec: -82868058)
{
	int copIndex; // size=0, offset=0
	int carIndex; // size=0, offset=4
};

struct AIHigh_BasicPerp // hashcode: 0xCFC8CE37 (dec: -808923593)
{
	struct AIHigh_Base AIHigh_Base; // size=24, offset=0
	enum __95 pullOverMode_; // size=4, offset=24
	struct __96 positionVSCopList_[6]; // size=48, offset=28
	int copVSPositionList_[6]; // size=24, offset=76
	int beatingTicksLeft_; // size=0, offset=100
	int lastPullOverTime_; // size=0, offset=104
	struct Car_tObj *lastArrestingCop_; // size=2268, offset=108
	struct AICop_BasicPerpInfo basicPerpInfo_; // size=12, offset=112
};

struct AIHigh_Player // hashcode: 0x77216051 (dec: 1998676049)
{
	struct AIHigh_BasicPerp AIHigh_BasicPerp; // size=124, offset=0
	int numWarnings_; // size=0, offset=124
	int numBusts_; // size=0, offset=128
	int newTriggerProb_; // size=0, offset=132
	int lastTriggerCheckSlice_; // size=0, offset=136
	struct AICop_PerpChaseInfo perpChaseInfo_; // size=36, offset=140
};

struct AIHigh_BTC_Perp // hashcode: 0x3A95B24B (dec: 982889035)
{
	struct AIHigh_BasicPerp AIHigh_BasicPerp; // size=124, offset=0
	int caught_; // size=0, offset=124
	int hudActivated_; // size=0, offset=128
	struct AIHigh_BTC_HumanCop *originalActivationCop_; // size=0, offset=132
};

struct AIHigh_BTC_HumanCop // hashcode: 0xD5C5F414 (dec: -708447212)
{
	struct AIHigh_BTC_Cop AIHigh_BTC_Cop; // size=100, offset=0
	int currentStage_; // size=0, offset=100
	int stageRepeatCount_; // size=0, offset=104
	int stageTimeMultiplier_; // size=0, offset=108
	int timeLeft_; // size=0, offset=112
	int chaseStartTime_; // size=0, offset=116
	enum __99 wingmanStatus_; // size=4, offset=120
	int needPerp_; // size=0, offset=124
	int initialDirection_; // size=0, offset=128
	int initialMovement_; // size=0, offset=132
	int requestedDesiredSpeed_; // size=0, offset=136
};

struct blockade_t // hashcode: 0x5801DE4B (dec: 1476517451)
{
	enum blockadeMode_t mode; // size=4, offset=0
	struct AIHigh_Player *target; // size=176, offset=4
	int flags; // size=0, offset=8
	int chaseLevel; // size=0, offset=12
	int requestSpikeBeltAtSlice; // size=0, offset=16
	int slice; // size=0, offset=20
	int direction; // size=0, offset=24
	int latPos; // size=0, offset=28
	int rotation; // size=0, offset=32
	int reverse; // size=0, offset=36
	int releaseTime; // size=0, offset=40
	int initialPlayerDistanceMetersInt; // size=0, offset=44
	short blockadeSpeechFlags; // size=0, offset=48
};

struct AIHigh_BasicCop // hashcode: 0xD0E0049A (dec: -790625126)
{
	struct AIHigh_Base AIHigh_Base; // size=24, offset=0
	enum copType type_; // size=4, offset=24
	int copIndex_; // size=0, offset=28
	struct blockade_t blockade_; // size=52, offset=32
	enum AIHigh_tDriveAwayMode driveAway_; // size=4, offset=84
};

struct AIHigh_BTC_Cop // hashcode: 0x2BE1A1F7 (dec: 736207351)
{
	struct AIHigh_BasicCop AIHigh_BasicCop; // size=88, offset=0
	struct AIHigh_BTC_Perp *perpTarget_; // size=136, offset=88
	int chaseIndex_; // size=0, offset=92
	enum __98 freezeMode_; // size=4, offset=96
};

struct AIHigh_Cop // hashcode: 0x6150C109 (dec: 1632682249)
{
	struct AIHigh_BasicCop AIHigh_BasicCop; // size=88, offset=0
	struct AIHigh_Player *perpTarget_; // size=176, offset=88
	int forcePurgatory_; // size=0, offset=92
	int chaseIndex_; // size=0, offset=96
	int requestSpikeBeltAtSlice_; // size=0, offset=100
	int aggressionLevel_; // size=0, offset=104
};

struct SPCHNFSType_POSITION // hashcode: 0x7FD42B57 (dec: 2144611159)
{
	unsigned long flags; // size=0, offset=0
};

struct SPCHNFSType_DISTANCE // hashcode: 0x3770FAF2 (dec: 930151154)
{
	unsigned long flags; // size=0, offset=0
};

struct SPCHNFSType_COLOUR // hashcode: 0x193B75E9 (dec: 423327209)
{
	unsigned long flags; // size=0, offset=0
};

struct SPCHNFSType_ACCIDENT // hashcode: 0x46E49A22 (dec: 1189386786)
{
	unsigned long flags; // size=0, offset=0
};

struct SPCHNFSType_AMBULANCE // hashcode: 0xE3194427 (dec: -484883417)
{
	unsigned long flags; // size=0, offset=0
};

struct SPCHNFSType_PURS_UPDT // hashcode: 0x8B22EF78 (dec: -1960644744)
{
	unsigned long flags; // size=0, offset=0
};

struct SPCHNFSType_ARREST // hashcode: 0x6C38EA5A (dec: 1815669338)
{
	unsigned long flags; // size=0, offset=0
};

struct SPCHNFSType_vs_RDBLK_SSTRP // hashcode: 0xD7DEED91 (dec: -673256047)
{
	unsigned long flags; // size=0, offset=0
};

struct SPCHNFSType_PERP_NAME // hashcode: 0xC1A8EFF5 (dec: -1045893131)
{
	unsigned long flags; // size=0, offset=0
};

struct SPCHNFSType_CONFIRM // hashcode: 0xFE12E117 (dec: -32317161)
{
	unsigned long flags; // size=0, offset=0
};

struct SPCHNFSType_SPIKE_BELT_SIDE // hashcode: 0x26DED39A (dec: 652137370)
{
	unsigned long flags; // size=0, offset=0
};

struct SPCHNFSType_REVINTRO // hashcode: 0xD7406805 (dec: -683644923)
{
	unsigned long flags; // size=0, offset=0
};

struct CarBank // hashcode: 0xBBA96D97 (dec: -1146524265)
{
	int fFull; // size=0, offset=0
	int fMake; // size=0, offset=4
	int fModel; // size=0, offset=8
};

struct LocationBank // hashcode: 0x9A556BA5 (dec: -1705677915)
{
	int fStartSlice; // size=0, offset=0
	int fEndSlice; // size=0, offset=4
	int fBankId; // size=0, offset=8
	char *fName; // size=0, offset=12
};

struct CallSignBank // hashcode: 0x29CCB3CD (dec: 701281229)
{
	int fAllUnits; // size=0, offset=0
	int fDispatch; // size=0, offset=4
	int fMobile[15]; // size=60, offset=8
};

struct __139 // hashcode: 0x94B19826 (dec: -1800300506)
{
	struct CarBank Mobile[9]; // size=108, offset=0
	struct CarBank Dispatch[9]; // size=108, offset=108
};

struct __140 // hashcode: 0xBF9C2459 (dec: -1080286119)
{
	struct LocationBank Mobile[16]; // size=256, offset=0
	struct LocationBank Dispatch[16]; // size=256, offset=256
};

struct __141 // hashcode: 0x9C86BD68 (dec: -1668891288)
{
	struct CallSignBank Mobile; // size=68, offset=0
	struct CallSignBank Dispatch; // size=68, offset=68
};

struct Speaker // hashcode: 0xAD086BA8 (dec: -1391957080)
{
	struct SPCHNFSType_POSITION fPosition; // size=4, offset=0
	struct SPCHNFSType_DISTANCE fDistance; // size=4, offset=4
	struct SPCHNFSType_COLOUR fColour; // size=4, offset=8
	struct SPCHNFSType_ACCIDENT fAccident; // size=4, offset=12
	struct SPCHNFSType_AMBULANCE fAmbulance; // size=4, offset=16
	struct SPCHNFSType_vs_RDBLK_SSTRP fBlockade; // size=4, offset=20
	struct SPCHNFSType_REVINTRO fReverse; // size=4, offset=24
	struct SPCHNFSType_CONFIRM fConfirm; // size=4, offset=28
	struct SPCHNFSType_PERP_NAME fPerpName; // size=4, offset=32
	struct SPCHNFSType_SPIKE_BELT_SIDE fSpikeSide; // size=4, offset=36
	struct SPCHNFSType_PURS_UPDT fUpdate; // size=4, offset=40
	struct SPCHNFSType_ARREST fArrest; // size=4, offset=44
	int fCar; // size=0, offset=48
	int fLocation; // size=0, offset=52
	int fFrom; // size=0, offset=56
	int fTo; // size=0, offset=60
	int fWing; // size=0, offset=64
	void * fHavePerp; // size=0, offset=68
	struct Speaker *fSub; // size=80, offset=72
	struct __vtbl_ptr_type (*_vf)[31]; // size=4, offset=76
};

struct Trk_SFX // hashcode: 0x1A44B07A (dec: 440709242)
{
	int point[3]; // size=12, offset=0
	short type; // size=0, offset=12
	short pad; // size=0, offset=14
};

struct FLARE_PIECE_DEF // hashcode: 0xCB0F5580 (dec: -888187520)
{
	int distance; // size=0, offset=0
	int size; // size=0, offset=4
	struct CVECTOR color; // size=4, offset=8
	char type; // size=0, offset=12
};

struct __145 // hashcode: 0x59589402 (dec: 1498977282)
{
	struct CarBank Mobile[9]; // size=108, offset=0
	struct CarBank Dispatch[9]; // size=108, offset=108
};

struct __146 // hashcode: 0x54299C65 (dec: 1412013157)
{
	struct LocationBank Mobile[16]; // size=256, offset=0
	struct LocationBank Dispatch[16]; // size=256, offset=256
};

struct __147 // hashcode: 0x35715E92 (dec: 896622226)
{
	struct CallSignBank Mobile; // size=68, offset=0
	struct CallSignBank Dispatch; // size=68, offset=68
};

struct POLY_GT4 // hashcode: 0x2840BBD9 (dec: 675331033)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char u0; // size=0, offset=12
	unsigned char v0; // size=0, offset=13
	unsigned short clut; // size=0, offset=14
	unsigned char r1; // size=0, offset=16
	unsigned char g1; // size=0, offset=17
	unsigned char b1; // size=0, offset=18
	unsigned char p1; // size=0, offset=19
	short x1; // size=0, offset=20
	short y1; // size=0, offset=22
	unsigned char u1; // size=0, offset=24
	unsigned char v1; // size=0, offset=25
	unsigned short tpage; // size=0, offset=26
	unsigned char r2; // size=0, offset=28
	unsigned char g2; // size=0, offset=29
	unsigned char b2; // size=0, offset=30
	unsigned char p2; // size=0, offset=31
	short x2; // size=0, offset=32
	short y2; // size=0, offset=34
	unsigned char u2; // size=0, offset=36
	unsigned char v2; // size=0, offset=37
	unsigned short pad2; // size=0, offset=38
	unsigned char r3; // size=0, offset=40
	unsigned char g3; // size=0, offset=41
	unsigned char b3; // size=0, offset=42
	unsigned char p3; // size=0, offset=43
	short x3; // size=0, offset=44
	short y3; // size=0, offset=46
	unsigned char u3; // size=0, offset=48
	unsigned char v3; // size=0, offset=49
	unsigned short pad3; // size=0, offset=50
};

struct Draw_SubdivStruct // hashcode: 0x42FB4470 (dec: 1123763312)
{
	struct Draw_SVertex v[15]; // size=240, offset=0
};

struct Track_tArtresource // hashcode: 0x5C202037 (dec: 1545609271)
{
	int id; // size=0, offset=0
	char *shapeFile; // size=0, offset=4
	int shapeCount; // size=0, offset=8
	struct Draw_tPixMap *pPmx; // size=16, offset=12
	int pmxCount; // size=0, offset=16
	int basePmxCount; // size=0, offset=20
};

struct Track_tMaterial // hashcode: 0x43CC9B37 (dec: 1137482551)
{
	char flag; // size=0, offset=0
	char mipmap_offset; // size=0, offset=1
	short pmxIndex; // size=0, offset=2
};

struct AIState_Chase // hashcode: 0xCEE499A5 (dec: -823879259)
{
	struct AIState_Base AIState_Base; // size=8, offset=0
	struct AIDelayCar delayCar_; // size=60, offset=8
	int noTurnAroundEndTime_; // size=0, offset=68
	struct Car_tObj *targetCar_; // size=2268, offset=72
	struct coorddef relPosition_; // size=12, offset=76
	int longTargetRegion_; // size=0, offset=88
	int latTargetRegion_; // size=0, offset=92
	int targetDir_; // size=0, offset=96
	int carDir_; // size=0, offset=100
	int longMetersBetween_; // size=0, offset=104
	int latMetersBetween_; // size=0, offset=108
	int murderMode_; // size=0, offset=112
	int murderEndTime_; // size=0, offset=116
	int inTargetRegion_; // size=0, offset=120
	int nitrousTicks_; // size=0, offset=124
	int nitrousMinForeDistance_; // size=0, offset=128
	int nitrousMinAftDistance_; // size=0, offset=132
	int aggressionLevel_; // size=0, offset=136
	int slowDownEndTime_; // size=0, offset=140
	int barrierTicks32_; // size=0, offset=144
};

struct AIState_GotoSlice // hashcode: 0xB4554556 (dec: -1269480106)
{
	struct AIState_Normal AIState_Normal; // size=8, offset=0
	int targetSlice_; // size=0, offset=8
	int stopWhenArrivedAtSlice_; // size=0, offset=12
};

struct AIHigh_BTC_Wingman // hashcode: 0x64482A49 (dec: 1682451017)
{
	struct AIHigh_BTC_Cop AIHigh_BTC_Cop; // size=100, offset=0
	enum Wingman_Role currentRole_; // size=4, offset=100
	enum Wingman_Role newRole_; // size=4, offset=104
	struct AIHigh_BTC_HumanCop *newHumanBoss_; // size=140, offset=108
	int spikeBeltPlaced_; // size=0, offset=112
	int spikeBeltSlice_; // size=0, offset=116
	int spikeBeltInterceptReleaseTime_; // size=0, offset=120
};

struct AIHigh_Traffic // hashcode: 0x94EA3B0C (dec: -1796588788)
{
	struct AIHigh_Base AIHigh_Base; // size=24, offset=0
	int ignoreCops_; // size=0, offset=24
	int forcePurgatory_; // size=0, offset=28
	struct SceneElem *accidentData_; // size=92, offset=32
};

struct TCB // hashcode: 0xABA967AB (dec: -1414961237)
{
	long status; // size=0, offset=0
	long mode; // size=0, offset=4
	unsigned long reg[40]; // size=160, offset=8
	long system[6]; // size=24, offset=168
};

struct EXEC // hashcode: 0x01E0A670 (dec: 31499888)
{
	unsigned long pc0; // size=0, offset=0
	unsigned long gp0; // size=0, offset=4
	unsigned long t_addr; // size=0, offset=8
	unsigned long t_size; // size=0, offset=12
	unsigned long d_addr; // size=0, offset=16
	unsigned long d_size; // size=0, offset=20
	unsigned long b_addr; // size=0, offset=24
	unsigned long b_size; // size=0, offset=28
	unsigned long s_addr; // size=0, offset=32
	unsigned long s_size; // size=0, offset=36
	unsigned long sp; // size=0, offset=40
	unsigned long fp; // size=0, offset=44
	unsigned long gp; // size=0, offset=48
	unsigned long ret; // size=0, offset=52
	unsigned long base; // size=0, offset=56
};

struct DIRENTRY // hashcode: 0xB21092FD (dec: -1307536643)
{
	char name[20]; // size=20, offset=0
	long attr; // size=0, offset=20
	long size; // size=0, offset=24
	struct DIRENTRY *next; // size=40, offset=28
	long head; // size=0, offset=32
	char system[4]; // size=4, offset=36
};

struct Skidmark_Segment // hashcode: 0x734EA699 (dec: 1934534297)
{
	struct SVECTOR svx[2]; // size=16, offset=0
	struct CVECTOR rgb; // size=4, offset=16
	int type; // size=0, offset=20
	struct Skidmark_Segment *next; // size=28, offset=24
};

struct Skidmark_Chunk // hashcode: 0x1B3C2A48 (dec: 456927816)
{
	struct coorddef cp; // size=12, offset=0
	short n; // size=0, offset=12
	short slice; // size=0, offset=14
	struct Skidmark_Segment seg[24]; // size=672, offset=16
};

struct AIHigh_BTC_HumanPerp // hashcode: 0x4D2145C8 (dec: 1294026184)
{
	struct AIHigh_BTC_Perp AIHigh_BTC_Perp; // size=136, offset=0
};

struct AIHigh_BTC_AIPerp // hashcode: 0x3B1AD3FD (dec: 991613949)
{
	struct AIHigh_BTC_Perp AIHigh_BTC_Perp; // size=136, offset=0
	enum __97 perpMode_; // size=4, offset=136
	int creationTime_; // size=0, offset=140
	int madeContactTime_; // size=0, offset=144
	int timeUntilContact_; // size=0, offset=148
	int escapeDuration_; // size=0, offset=152
	int originalMass_; // size=0, offset=156
	int originalMassInv_; // size=0, offset=160
	struct Car_tObj *closestCopCarObj_; // size=2268, offset=164
	int closestCopCarDistanceMeters_; // size=0, offset=168
};

struct AITrigger_TriggerManager // hashcode: 0x82F2FFB8 (dec: -2098004040)
{
	int numTriggers_; // size=0, offset=0
	int invNumTriggers_; // size=0, offset=4
	union trigger_t (*triggers_[100]); // size=400, offset=8
	int checkTime_[100]; // size=400, offset=408
	int lastTriggerChecked_[9]; // size=36, offset=808
};

struct AIHigh_Human // hashcode: 0x54DD9A21 (dec: 1423809057)
{
	struct AIHigh_Player AIHigh_Player; // size=176, offset=0
};

struct AIHigh_Opponent // hashcode: 0x7AABEF8C (dec: 2058088332)
{
	struct AIHigh_Player AIHigh_Player; // size=176, offset=0
	enum AIHigh_tAttackMode attackMode_; // size=4, offset=176
	struct Car_tObj *lastHumanHitter_; // size=2268, offset=180
	int hitCount_; // size=0, offset=184
	int attackTicksLeft_; // size=0, offset=188
};

struct __141_alt_definition_0001 // hashcode: 0xA925E83F (dec: -1457133505)
{
	struct CarBank Mobile[9]; // size=108, offset=0
	struct CarBank Dispatch[9]; // size=108, offset=108
};

struct __142 // hashcode: 0x3C7EB45B (dec: 1014936667)
{
	struct LocationBank Mobile[16]; // size=256, offset=0
	struct LocationBank Dispatch[16]; // size=256, offset=256
};

struct __143 // hashcode: 0xB47CB2D2 (dec: -1266896174)
{
	struct CallSignBank Mobile; // size=68, offset=0
	struct CallSignBank Dispatch; // size=68, offset=68
};

struct __144 // hashcode: 0x64CA33A2 (dec: 1690973090)
{
	int ticksInChaseRegionForMurder; // size=0, offset=0
	int minLatMetersDistanceForMurder; // size=0, offset=4
	int minLongMetersDistanceForMurder; // size=0, offset=8
	int murderTicks; // size=0, offset=12
	int nitrousTicks; // size=0, offset=16
};

struct AIState_Idle // hashcode: 0x2B2D0915 (dec: 724371733)
{
	struct AIState_Base AIState_Base; // size=8, offset=0
	int roadPosition_; // size=0, offset=8
	int idleInPlaceFlag_; // size=0, offset=12
};

struct AICop_spikeBelt_t // hashcode: 0x49F47E8D (dec: 1240759949)
{
	int active_; // size=0, offset=0
	int slice_; // size=0, offset=4
	int leftLatPos_; // size=0, offset=8
	int rightLatPos_; // size=0, offset=12
	int freshenTime_; // size=0, offset=16
};

struct Udff_tInfo // hashcode: 0x4AEF754E (dec: 1257207118)
{
	enum Udff_tAccessType type; // size=4, offset=0
	int handle; // size=0, offset=4
	char *memPtr; // size=0, offset=8
};

struct AIPhysic_Config_t // hashcode: 0x7B0B5E4F (dec: 2064342607)
{
	int latvelcalc_lookahead; // size=0, offset=0
	int min_lookahead; // size=0, offset=4
	int max_lookahead; // size=0, offset=8
	int look_ahead_factor; // size=0, offset=12
	int skid_value; // size=0, offset=16
	struct AIPhysic_ModelConfig_t ICModel; // size=44, offset=20
	struct AIPhysic_ModelConfig_t OOCModel; // size=44, offset=64
};

struct kernpair // hashcode: 0xB8738C6A (dec: -1200386966)
{
	unsigned short previouscode; // size=0, offset=0
	unsigned short code; // size=0, offset=2
	char kernvalue; // size=0, offset=4
	char pad[3]; // size=3, offset=5
};

struct AIDataRecord_TrackCurve_t // hashcode: 0x276FAB72 (dec: 661629810)
{
	struct AIDataRecord_t AIDataRecord_t; // size=88, offset=0
};

struct AIDataRecord_CarTracking_t // hashcode: 0x7AEA1273 (dec: 2062160499)
{
	struct AIDataRecord_t AIDataRecord_t; // size=88, offset=0
};

struct AISpeeds_tLeaderBoard // hashcode: 0xF4560DB3 (dec: -195686989)
{
	struct Car_tObj *leadRacer; // size=2268, offset=0
	struct Car_tObj *leadHumanRacer; // size=2268, offset=4
	struct Car_tObj *leadAIRacer; // size=2268, offset=8
	struct Car_tObj *lastAIRacer; // size=2268, offset=12
};

struct AISpeeds_Upgrade_t // hashcode: 0x8A38A551 (dec: -1975999151)
{
	int accMult; // size=0, offset=0
	int brakeMult; // size=0, offset=4
	int handlingMult; // size=0, offset=8
	int topSpeedMult; // size=0, offset=12
};

struct AISpeeds_tSlotInfo // hashcode: 0x00A24300 (dec: 10633984)
{
	int distanceMaintainTime32; // size=0, offset=0
	int minDistanceMeters; // size=0, offset=4
	int maxDistanceMeters; // size=0, offset=8
	unsigned int fallBackRandomTime_TickPercent; // size=0, offset=12
};

struct speedData_t // hashcode: 0x55DB079F (dec: 1440417695)
{
	unsigned short endSlice; // size=0, offset=0
	unsigned short speedMPS; // size=0, offset=2
};

struct AIState_Offroad // hashcode: 0xAD2CEEE8 (dec: -1389564184)
{
	struct AIState_Base AIState_Base; // size=8, offset=0
	int startSlice_; // size=0, offset=8
	struct coorddef startPosition_; // size=12, offset=12
	struct matrixtdef startOrientation_; // size=36, offset=24
	struct coorddef startHeading_; // size=12, offset=60
	int targetSlice_; // size=0, offset=72
	struct coorddef targetPosition_; // size=12, offset=76
	int longMetersBetween_; // size=0, offset=88
	int letGo_; // size=0, offset=92
	int maxSpeedMPS_; // size=0, offset=96
	int releaseTime_; // size=0, offset=100
};

struct AIState_Purgatory // hashcode: 0x14A3EEE3 (dec: 346287843)
{
	struct AIState_NonActive AIState_NonActive; // size=8, offset=0
};

struct AIState_RovingTraffic // hashcode: 0xC8BAF02F (dec: -927272913)
{
	struct AIState_Base AIState_Base; // size=8, offset=0
	struct trigger_pathPosition_t *path_; // size=20, offset=8
	int numPathPoints_; // size=0, offset=12
	int pathIndex_; // size=0, offset=16
	long waitTick_; // size=0, offset=20
};

struct AIState_Donuts // hashcode: 0xCD10933D (dec: -854551747)
{
	struct AIState_Base AIState_Base; // size=8, offset=0
	int donutLookForward_; // size=0, offset=8
	enum donutMode_t donutMode_; // size=4, offset=12
};

struct AIState_Cruise // hashcode: 0xF0711098 (dec: -261025640)
{
	struct AIState_Normal AIState_Normal; // size=8, offset=0
	enum cruiseMode_t cruiseMode_; // size=4, offset=8
	int cruiseSpeed_; // size=0, offset=12
	int cruiseFactor_; // size=0, offset=16
};

struct accelscale_t // hashcode: 0x55D2FC27 (dec: 1439890471)
{
	int scale; // size=0, offset=0
};

struct copTuning_t // hashcode: 0xB3307180 (dec: -1288670848)
{
	int regularCopAccMultiplier; // size=0, offset=0
	int superCopAccMultiplier; // size=0, offset=4
	int regularCopTopSpeedCap; // size=0, offset=8
	int superCopTopSpeedCap; // size=0, offset=12
};

struct AITune_tTrackInfo // hashcode: 0xDF5C311B (dec: -547606245)
{
	int oneWay; // size=0, offset=0
	int driveSide; // size=0, offset=4
	int roughLapTimeSeconds; // size=0, offset=8
};

struct AITune_BTC_t // hashcode: 0xD68E4F18 (dec: -695316712)
{
	int glueMult; // size=0, offset=0
	int speedMult; // size=0, offset=4
	int weightMult; // size=0, offset=8
	int baseChaseTime; // size=0, offset=12
	int wingmanTime; // size=0, offset=16
	int blockaderTime; // size=0, offset=20
	int spikeBeltTime; // size=0, offset=24
};

struct tQuat // hashcode: 0xDF5028B0 (dec: -548394832)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short z; // size=0, offset=4
	short w; // size=0, offset=6
};

struct Trk_AnimateBoomInst // hashcode: 0xDF5F3341 (dec: -547409087)
{
	short size; // size=0, offset=0
	unsigned char type; // size=0, offset=2
	unsigned char objectIndex; // size=0, offset=3
	unsigned char zoffset; // size=0, offset=4
	unsigned char flags; // size=0, offset=5
	short pad; // size=0, offset=6
	short count; // size=0, offset=8
	short interval; // size=0, offset=10
	unsigned char simIndex; // size=0, offset=12
	unsigned char boomIndex; // size=0, offset=13
	short pad2; // size=0, offset=14
};

struct Anim_tFrame // hashcode: 0x6582AF08 (dec: 1703063304)
{
	long x; // size=0, offset=0
	long y; // size=0, offset=4
	long z; // size=0, offset=8
	short qx; // size=0, offset=12
	short qy; // size=0, offset=14
	short qz; // size=0, offset=16
	short qw; // size=0, offset=18
};

struct SNDSYSCAP // hashcode: 0xFAAE708F (dec: -89231217)
{
	unsigned short outputratemin; // size=0, offset=0
	unsigned short outputratemax; // size=0, offset=2
	unsigned char outputchannelsmin; // size=0, offset=4
	unsigned char outputchannelsmax; // size=0, offset=5
	unsigned char inputvoicesmax; // size=0, offset=6
	unsigned char input3dvoicesmax; // size=0, offset=7
	unsigned char eax; // size=0, offset=8
	unsigned char voicemanager; // size=0, offset=9
	char pad[2]; // size=2, offset=10
};

struct SNDSYSSET // hashcode: 0xCACB19E4 (dec: -892659228)
{
	unsigned short maxbanks; // size=0, offset=0
	unsigned short outputrate; // size=0, offset=2
	unsigned char outputchannels; // size=0, offset=4
	unsigned char inputvoices; // size=0, offset=5
	unsigned char useeax; // size=0, offset=6
	unsigned char use3dacceleration; // size=0, offset=7
	unsigned char use3dmixing; // size=0, offset=8
	char pad; // size=0, offset=9
	unsigned short emulationsubtype; // size=0, offset=10
	unsigned short spkrcfg3d[4][4]; // size=32, offset=12
};

struct SNDSYSVEC // hashcode: 0x1032074F (dec: 271714127)
{
	int (*issurfacelocked)(); // size=0, offset=0
};

struct SNDSAMPLEFORMAT // hashcode: 0x6D7BDD90 (dec: 1836834192)
{
	unsigned short samplerate; // size=0, offset=0
	unsigned char channels; // size=0, offset=2
	unsigned char samplerep; // size=0, offset=3
};

struct AudioClc_tSource // hashcode: 0xB908D745 (dec: -1190602939)
{
	struct Car_tObj *car; // size=2268, offset=0
	int distToCamera; // size=0, offset=4
	int dopplerShift; // size=0, offset=8
	int relVelocity; // size=0, offset=12
	int gameTicks; // size=0, offset=16
	int distSq; // size=0, offset=20
	int frequency; // size=0, offset=24
	int channel; // size=0, offset=28
	int horn; // size=0, offset=32
	int hornOn; // size=0, offset=36
	int hornOff; // size=0, offset=40
	int hornCount; // size=0, offset=44
	int pursuit; // size=0, offset=48
	int yelled; // size=0, offset=52
};

struct AudioClc_tPlayer // hashcode: 0x6699AB29 (dec: 1721346857)
{
	int cameraMode; // size=0, offset=0
	int gameTicks; // size=0, offset=4
	int warnings; // size=0, offset=8
	struct coorddef lastview; // size=12, offset=12
	struct AudioClc_tSource source; // size=56, offset=24
};

struct AudioClc_tCLCache // hashcode: 0x0AB9506B (dec: 179916907)
{
	struct Car_tObj *ptr; // size=2268, offset=0
	int dst; // size=0, offset=4
};

struct SNDPLAYOPTS // hashcode: 0xB249952C (dec: -1303800532)
{
	int patnum; // size=0, offset=0
	char bhandle; // size=0, offset=4
	char keynum; // size=0, offset=5
	char velocity; // size=0, offset=6
	char pan; // size=0, offset=7
	char vol; // size=0, offset=8
	char bend; // size=0, offset=9
	char fxlevel0; // size=0, offset=10
	char use3dpos; // size=0, offset=11
	unsigned short pitchmult; // size=0, offset=12
	unsigned short timemult; // size=0, offset=14
	unsigned short azimuth; // size=0, offset=16
	short elevation; // size=0, offset=18
};

struct PAD_COMMON_alt_definition_0001 // hashcode: 0xA3261936 (dec: -1557784266)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __84 data; // size=6, offset=2
};

struct __87 // hashcode: 0x8118B0DC (dec: -2129088292)
{
	char bActive; // size=0, offset=0
	char time; // size=0, offset=1
};

struct SndBnk_t // hashcode: 0x91261174 (dec: -1859776140)
{
	int bnkID; // size=0, offset=0
	char *phdr; // size=0, offset=4
	char *pdata; // size=0, offset=8
};

struct Channels_t // hashcode: 0x6442F44E (dec: 1682109518)
{
	int Partial; // size=0, offset=0
	int SFXnum; // size=0, offset=4
};

struct AudioMus_tSongEntry // hashcode: 0x96666041 (dec: -1771675583)
{
	char *filename; // size=0, offset=0
	char *title; // size=0, offset=4
	char *artist; // size=0, offset=8
	char *label; // size=0, offset=12
	char *date; // size=0, offset=16
	char *notes; // size=0, offset=20
	int length; // size=0, offset=24
	int index; // size=0, offset=28
	char strbuf[32]; // size=32, offset=32
};

struct tTexture_ShapeInfo // hashcode: 0x324947FA (dec: 843663354)
{
	struct shapetbl *shpptr; // size=20, offset=0
	long clutID; // size=0, offset=4
	char depth; // size=0, offset=8
	unsigned long type; // size=8, offset=72
	long next; // size=24, offset=96
	short width; // size=0, offset=16
	short height; // size=0, offset=18
	short centerx; // size=0, offset=20
	short centery; // size=0, offset=22
	short shapex; // size=0, offset=24
	short shapey; // size=0, offset=26
	unsigned short tpage; // size=0, offset=28
	unsigned short clut; // size=0, offset=30
};

struct tMenu // hashcode: 0xDD320666 (dec: -583924122)
{
	unsigned int fFlags; // size=0, offset=0
	short fTitle; // size=0, offset=4
	int fCurrentItem; // size=0, offset=8
	void * fNeverAnyEnabled; // size=0, offset=12
	struct tMenuItem (*fItemList[16]); // size=64, offset=16
	struct tScreen *fScreen; // size=0, offset=80
	struct tMenu *fNextMenu; // size=108, offset=84
	struct tMenu *fChildMenu; // size=108, offset=88
	struct tMenu *fOptionsMenu; // size=108, offset=92
	void (*fOnButtonPress)(); // size=0, offset=96
	short VertHelp; // size=0, offset=100
	struct __vtbl_ptr_type (*_vf)[11]; // size=4, offset=104
};

struct tListIterator // hashcode: 0x5A9444B0 (dec: 1519666352)
{
	short *fSelectionList; // size=0, offset=0
	char *fValue; // size=0, offset=4
	char fMinValue; // size=0, offset=8
	char fMaxValue; // size=0, offset=9
	struct __vtbl_ptr_type (*_vf)[6]; // size=4, offset=12
};

struct tListIteratorRange // hashcode: 0x911032FD (dec: -1861209347)
{
	struct tListIterator tListIterator; // size=16, offset=0
};

struct tMenuItem // hashcode: 0xB278C2EE (dec: -1300708626)
{
	unsigned int fFlags; // size=0, offset=0
	unsigned int fTextDescription; // size=0, offset=4
	short fSelFade; // size=0, offset=8
	int fButtonImage; // size=0, offset=12
	int fNumFrames; // size=0, offset=16
	struct tMenu *fNewMenu; // size=0, offset=20
	struct __vtbl_ptr_type (*_vf)[11]; // size=4, offset=24
};

struct tMenuItemInteractive // hashcode: 0x0B4F895B (dec: 189761883)
{
	struct tMenuItem tMenuItem; // size=28, offset=0
};

struct tCarInfo // hashcode: 0x0F933FB2 (dec: 261308338)
{
	char fCarID; // size=0, offset=0
	unsigned char fSimNumber; // size=0, offset=1
	unsigned char fCarClass; // size=0, offset=2
	unsigned char fABSAvailable; // size=0, offset=3
	unsigned char fDefaultColor; // size=0, offset=4
	unsigned char fCopClass; // size=0, offset=5
	unsigned char fDefaultTires; // size=0, offset=6
	unsigned char fAvailable; // size=0, offset=7
	char fShapeName[8]; // size=8, offset=8
	char fSmallName[8]; // size=8, offset=16
	char fQTVRName[8]; // size=8, offset=24
	long fPrices[4]; // size=16, offset=32
	unsigned char fStats[4][5]; // size=20, offset=48
	unsigned long fColorList[16]; // size=64, offset=68
	unsigned char fSpeechColors[16]; // size=16, offset=132
	unsigned long fHudColor[2]; // size=8, offset=148
	char fDayTachFile[8]; // size=8, offset=156
	char fNightTachFile[8]; // size=8, offset=164
	char fNumLightColors; // size=0, offset=172
	char fNumDarkColors; // size=0, offset=173
	unsigned char fCountries; // size=0, offset=174
	char fColorOrder[16]; // size=16, offset=175
	unsigned char fPursuitAvailable; // size=0, offset=191
	unsigned char fEnginePatch; // size=0, offset=192
	char fSpeechCarID; // size=0, offset=193
	unsigned char fTractionAvailable; // size=0, offset=194
	unsigned char fExoticCar; // size=0, offset=195
	unsigned char fUpgrades; // size=0, offset=196
	unsigned char fColor; // size=0, offset=197
	unsigned char fViewable; // size=0, offset=198
	unsigned char fCountry; // size=0, offset=199
	unsigned char fCarIndex; // size=0, offset=200
	unsigned char fReserved[3]; // size=3, offset=201
};

struct tOwnedCarInfo // hashcode: 0xECEE6C06 (dec: -319919098)
{
	char fCarID; // size=0, offset=0
	unsigned char fUpgrades; // size=0, offset=1
	unsigned char fCarColor; // size=0, offset=2
	unsigned char fPad; // size=0, offset=3
};

struct tCarManager // hashcode: 0xC1001EB0 (dec: -1056956752)
{
	unsigned long fNumCars; // size=0, offset=0
	struct tCarInfo *fCars; // size=204, offset=4
	struct tOwnedCarInfo fCarGarage[2][32]; // size=256, offset=8
	struct tOwnedCarInfo fPinkSlipsCars[2][32]; // size=256, offset=264
	unsigned char fAvailableCars[48]; // size=48, offset=520
	unsigned char fViewableCars[48]; // size=48, offset=568
	unsigned char fPinkSlipsAvailableCars[2][48]; // size=96, offset=616
	unsigned char fPinkSlipsViewableCars[2][48]; // size=96, offset=712
	short fCarTextList[49]; // size=98, offset=808
};

struct tfrontEnd // hashcode: 0x2BCED33D (dec: 734974781)
{
	short randomSeed; // size=0, offset=0
	char currentPlayer; // size=0, offset=2
	char gameMode; // size=0, offset=3
	char raceType; // size=0, offset=4
	char style; // size=0, offset=5
	char skillLevel; // size=0, offset=6
	char catchup; // size=0, offset=7
	char ghostcar; // size=0, offset=8
	char tractionassist; // size=0, offset=9
	char bestline; // size=0, offset=10
	short pinkSlipsWinner[5]; // size=10, offset=12
	char timeOfDay[5]; // size=5, offset=22
	char weather[5]; // size=5, offset=27
	char fog; // size=0, offset=32
	char localSpeech; // size=0, offset=33
	char opponentUpgrades; // size=0, offset=34
	char track[5]; // size=5, offset=35
	int recordlaptime; // size=0, offset=40
	char laps; // size=0, offset=44
	char lapind[5]; // size=5, offset=45
	char trackdirection[5]; // size=5, offset=50
	char trackmirrored[5]; // size=5, offset=55
	char traffic[5]; // size=5, offset=60
	char situations[5]; // size=5, offset=65
	char pinkSlipsTrackIndex; // size=0, offset=70
	char pinkSlipsNumTracks; // size=0, offset=71
	char pinkSlipsWins[2]; // size=2, offset=72
	long pinkSlipsCash[2]; // size=8, offset=76
	short cheatFlags; // size=0, offset=84
	short cheatFlagsActive; // size=0, offset=86
	short secretFlags; // size=0, offset=88
	short pinkSlipsForfeit; // size=0, offset=90
	char playerCar[2]; // size=2, offset=92
	char transmission[2]; // size=2, offset=94
	char carColors[2][48]; // size=96, offset=96
	char carCountry[2][48]; // size=96, offset=192
	char tournament; // size=0, offset=288
	char specialevent; // size=0, offset=289
	char tier; // size=0, offset=290
	char garageCar[2]; // size=2, offset=291
	char pinkSlipsCar[2]; // size=2, offset=293
	char upgrade; // size=0, offset=295
	char dealerCar; // size=0, offset=296
	char sellerCar; // size=0, offset=297
	char carListType; // size=0, offset=298
	char policeTier; // size=0, offset=299
	char policeMission; // size=0, offset=300
	char congratsCopCar; // size=0, offset=301
	char congratsCopCountry; // size=0, offset=302
	short settingsActive[2]; // size=4, offset=304
	char steeringSensitivity[2][48]; // size=96, offset=308
	char tireType[2][48]; // size=96, offset=404
	char suspension[2][48]; // size=96, offset=500
	char carDownforce[2][48]; // size=96, offset=596
	char engineTuning[2][48]; // size=96, offset=692
	char ABS[2]; // size=2, offset=788
	char damage; // size=0, offset=790
	char rampSteer[2]; // size=2, offset=791
	char rampGas[2]; // size=2, offset=793
	char rampBrake[2]; // size=2, offset=795
	char oppCar; // size=0, offset=797
	char oppNumber; // size=0, offset=798
	char measurement; // size=0, offset=799
	char displaySpeed[2]; // size=2, offset=800
	char displayTach[2]; // size=2, offset=802
	char displayMap[2]; // size=2, offset=804
	char displayOpponentID[2]; // size=2, offset=806
	char displayTime[2]; // size=2, offset=808
	char displayPosition[2]; // size=2, offset=810
	char displayLapNumber[2]; // size=2, offset=812
	char displayMirror[2]; // size=2, offset=814
	char cameraType[2][4]; // size=8, offset=816
	char cameraSway[2][4]; // size=8, offset=824
	char language; // size=0, offset=832
	char musicVolume; // size=0, offset=833
	char sfxVolume; // size=0, offset=834
	char narrationVolume; // size=0, offset=835
	char engineVolume; // size=0, offset=836
	char ambientVolume; // size=0, offset=837
	char audioMode; // size=0, offset=838
	char song; // size=0, offset=839
	char sensitivity; // size=0, offset=840
	char steeringRange[2]; // size=2, offset=841
	char deadSpot[2]; // size=2, offset=843
	char ImaxRange[2]; // size=2, offset=845
	char IImaxRange[2]; // size=2, offset=847
	char J1MAX[2]; // size=2, offset=849
	char J1MIN[2]; // size=2, offset=851
	char J2MAX[2]; // size=2, offset=853
	char J2MIN[2]; // size=2, offset=855
	char shockMode[2]; // size=2, offset=857
	char shockImpact[2]; // size=2, offset=859
	short controlType[2]; // size=4, offset=862
	char controlConfig[2]; // size=2, offset=866
	char playerNameList[2][8]; // size=16, offset=868
	char allUpperCasedPlayerNameList[2][8]; // size=16, offset=884
	char licensePlate[2][8]; // size=16, offset=900
	char headstart; // size=0, offset=916
	char numBTracksActivated; // size=0, offset=917
	char checkPointType; // size=0, offset=918
	char checkPointDisplay[2]; // size=2, offset=919
	char defaultedPlayerName[2]; // size=2, offset=921
	void * FEPlayList[40]; // size=160, offset=924
	unsigned long gPinkSlipsNoCheat[2]; // size=8, offset=1084
	void * GotAPlayList; // size=0, offset=1092
	void * AnalogOn[2]; // size=8, offset=1096
};

struct CopSpeak_tRequest // hashcode: 0x567F0EE9 (dec: 1451167465)
{
	struct Car_tObj *car; // size=2268, offset=0
	int buffer; // size=0, offset=4
	int offset; // size=0, offset=8
	int size; // size=0, offset=12
	int filehandle; // size=0, offset=16
	int ophandle; // size=0, offset=20
	int phrase; // size=0, offset=24
	char player; // size=0, offset=28
	char sfx; // size=0, offset=29
	char bank; // size=0, offset=30
	char noise; // size=0, offset=31
};

struct AudioCmn_tReTrig // hashcode: 0x7ADB14E5 (dec: 2061178085)
{
	int count; // size=0, offset=0
	int pan; // size=0, offset=4
	short delay; // size=0, offset=8
	short nextd; // size=0, offset=10
	int patch; // size=0, offset=12
	char bend; // size=0, offset=16
	char amp; // size=0, offset=17
	struct coorddef pos; // size=12, offset=20
};

struct AudioCmn_tAsyncSfxSlot // hashcode: 0x2721F0B3 (dec: 656535731)
{
	int bank; // size=0, offset=0
	int patch; // size=0, offset=4
	int handle; // size=0, offset=8
	int ticks; // size=0, offset=12
	int addr; // size=0, offset=16
	char *header; // size=0, offset=20
};

struct AudioMus_tCurrentSong // hashcode: 0xB0BF275D (dec: -1329649827)
{
	int newsong; // size=0, offset=0
	int index; // size=0, offset=4
	int remaining; // size=0, offset=8
	struct AudioMus_tSongEntry info; // size=64, offset=12
};

struct AudioMus_tSongList // hashcode: 0x57CE7630 (dec: 1473148464)
{
	int numsongs; // size=0, offset=0
	int currentsong; // size=0, offset=4
	struct AudioMus_tSongEntry song[0]; // size=0, offset=8
};

struct SNDREQUESTSTATUS // hashcode: 0xAFDD341D (dec: -1344457699)
{
	int state; // size=0, offset=0
	int currenttime; // size=0, offset=4
	int timetoend; // size=0, offset=8
	int timebuffered; // size=0, offset=12
};

struct SNDSTREAMSTATUS // hashcode: 0xDA31FFEF (dec: -634257425)
{
	int outstandingrequests; // size=0, offset=0
	int currentrequest; // size=0, offset=4
	int timebuffered; // size=0, offset=8
};

struct SNDLIMITS // hashcode: 0xEE9EF466 (dec: -291572634)
{
	int dmabuflen; // size=0, offset=0
	unsigned char numdmabufs; // size=0, offset=4
	unsigned char numdmamsgs; // size=0, offset=5
	unsigned char nummicrotalkinstances; // size=0, offset=6
	unsigned char microtalkinstanceabort; // size=0, offset=7
	short numrspcmds; // size=0, offset=8
	short pad; // size=0, offset=10
	int audiostreambufsize; // size=0, offset=12
	int packetbufsize; // size=0, offset=16
};

struct CdlLOC // hashcode: 0xC3BCCE83 (dec: -1011036541)
{
	unsigned char minute; // size=0, offset=0
	unsigned char second; // size=0, offset=1
	unsigned char sector; // size=0, offset=2
	unsigned char track; // size=0, offset=3
};

struct AudioMus_tMusicGlobals // hashcode: 0x861ADB12 (dec: -2045060334)
{
	int volume; // size=0, offset=0
	int totalsongs; // size=0, offset=4
	int availablesongs; // size=0, offset=8
	int requestsong; // size=0, offset=12
	int firstswitch; // size=0, offset=16
	int switchsong; // size=0, offset=20
	int newswitch; // size=0, offset=24
	int failby; // size=0, offset=28
	int errorcode; // size=0, offset=32
	int fadetime; // size=0, offset=36
	int randomize; // size=0, offset=40
	char *songname; // size=0, offset=44
	char title64[64]; // size=64, offset=48
	char *streambuffer; // size=0, offset=112
	int streamhandle; // size=0, offset=116
	int requesthandle; // size=0, offset=120
	int serveractive; // size=0, offset=124
	int driveractive; // size=0, offset=128
	int greedy; // size=0, offset=132
	int threshold; // size=0, offset=136
	char *bigfileheader; // size=0, offset=140
	struct SNDSTREAMSTATUS streamstatus; // size=12, offset=144
	struct SNDREQUESTSTATUS requeststatus; // size=16, offset=156
	char bigfilename[64]; // size=64, offset=172
	char playlist[32]; // size=32, offset=236
	struct AudioMus_tCurrentSong current; // size=76, offset=268
};

struct CAudioList // hashcode: 0xD0BB489B (dec: -793032549)
{
	int id_; // size=0, offset=0
	int numElements_; // size=0, offset=4
	int slice_; // size=0, offset=8
	int versionNumber_; // size=0, offset=12
};

struct AudioEng_tEvent // hashcode: 0xD38757AC (dec: -746104916)
{
	char use; // size=0, offset=0
	char patnum; // size=0, offset=1
	char pad1; // size=0, offset=2
	char pad2; // size=0, offset=3
	short delta; // size=0, offset=4
	short max; // size=0, offset=6
	int attackdelta; // size=0, offset=8
	int decaydelta; // size=0, offset=12
};

struct AudioEng_tTable // hashcode: 0x0EBB5E84 (dec: 247160452)
{
	char xlate[512]; // size=512, offset=0
};

struct AudioEng_tDef // hashcode: 0xE747E869 (dec: -414717847)
{
	int id; // size=0, offset=0
	char ver; // size=0, offset=4
	char resolved; // size=0, offset=5
	char startevent; // size=0, offset=6
	char controllerpercent; // size=0, offset=7
	short lowrandomtargetlevel; // size=0, offset=8
	short lowrandomtargetrange; // size=0, offset=10
	int lowrandomattacktime; // size=0, offset=12
	int lowrandomattackrange; // size=0, offset=16
	short highrandomtargetlevel; // size=0, offset=20
	short highrandomtargetrange; // size=0, offset=22
	int highrandomattacktime; // size=0, offset=24
	int highrandomattackrange; // size=0, offset=28
	char patchnum[8]; // size=8, offset=32
	struct AudioEng_tEvent event[16]; // size=256, offset=40
	struct AudioEng_tTable (*pvoltable[8]); // size=32, offset=296
	struct AudioEng_tTable (*pbendtable[8]); // size=32, offset=328
};

struct AudioEng_tChanAttr // hashcode: 0x51EA3C43 (dec: 1374305347)
{
	short min; // size=0, offset=0
	short max; // size=0, offset=2
	char *xlate; // size=0, offset=4
	char patchnum; // size=0, offset=8
};

struct AudioEng_tAdjustments // hashcode: 0x736C0F7A (dec: 1936461690)
{
	unsigned char inCarBoost; // size=0, offset=0
	unsigned char inCarExhaust; // size=0, offset=1
	unsigned char outCarExhaust; // size=0, offset=2
	unsigned char fwdEngBoost; // size=0, offset=3
	unsigned char rwdExhBoost; // size=0, offset=4
	unsigned char outCarBoost; // size=0, offset=5
	unsigned char pitchScale; // size=0, offset=6
	unsigned char timbreScale; // size=0, offset=7
};

struct AudioEng_tVoiceAttr // hashcode: 0xA97902EB (dec: -1451687189)
{
	char vol; // size=0, offset=0
	unsigned short pitch; // size=0, offset=2
	unsigned short azim; // size=0, offset=4
	int handle; // size=0, offset=8
};

struct AudioEng_tState // hashcode: 0x22A77E64 (dec: 581402212)
{
	unsigned short vol; // size=0, offset=0
	unsigned short dop; // size=0, offset=2
	unsigned short azi; // size=0, offset=4
	unsigned short sep; // size=0, offset=6
	unsigned short esp; // size=0, offset=8
	unsigned char exh; // size=0, offset=10
	unsigned char gas; // size=0, offset=11
};

struct AudioEng_t // hashcode: 0xCE4494EF (dec: -834366225)
{
	struct AudioEng_tAdjustments adjust; // size=8, offset=0
	int tick; // size=0, offset=8
	int vol[16]; // size=64, offset=12
	int azi; // size=0, offset=76
	int sep; // size=0, offset=80
	int dop; // size=0, offset=84
	char bhandle; // size=0, offset=88
	char pad; // size=0, offset=89
	struct AudioEng_tState queue[16]; // size=192, offset=90
	char setpos; // size=0, offset=282
	char plypos; // size=0, offset=283
	struct AudioEng_tChanAttr chan[16]; // size=192, offset=284
	struct AudioEng_tVoiceAttr left[16]; // size=192, offset=476
	struct AudioEng_tVoiceAttr right[16]; // size=192, offset=668
	char delay[16]; // size=16, offset=860
	char *tables; // size=0, offset=876
};

struct PAD_COMMON_alt_definition_0002 // hashcode: 0x2CC701CC (dec: 751239628)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __82 data; // size=6, offset=2
};

struct __85 // hashcode: 0x6520EAE3 (dec: 1696656099)
{
	char bActive; // size=0, offset=0
	char time; // size=0, offset=1
};

struct AudioElem // hashcode: 0x26734A7A (dec: 645089914)
{
	struct coorddef cp; // size=12, offset=0
	unsigned short nextDelay; // size=0, offset=12
	char patchID; // size=0, offset=14
	char fadeIn; // size=0, offset=15
	short range; // size=0, offset=16
	char minDelay; // size=0, offset=18
	char randomDelay; // size=0, offset=19
	char type; // size=0, offset=20
	char chan; // size=0, offset=21
	char minRepeat; // size=0, offset=22
	char randomRepeat; // size=0, offset=23
};

struct AudioTrk_tAmbientChannel // hashcode: 0x1D560382 (dec: 492176258)
{
	struct AudioElem *se; // size=24, offset=0
	int handle; // size=0, offset=4
	int slice; // size=0, offset=8
	short patch; // size=0, offset=12
	short repeat; // size=0, offset=14
};

struct AudioTrk_tGlobals // hashcode: 0x797D7371 (dec: 2038264689)
{
	struct AudioTrk_tAmbientChannel chan[16]; // size=256, offset=0
};

struct DRender_tView // hashcode: 0x1BEBEEC9 (dec: 468446921)
{
	int id; // size=0, offset=0
	int player; // size=0, offset=4
	struct DRender_tCalcView cview; // size=132, offset=8
};

struct Draw_DCache // hashcode: 0x1254926F (dec: 307532399)
{
	struct Draw_tCacheHeader head; // size=20, offset=0
	struct MATRIX matB; // size=32, offset=20
	struct MATRIX matNight; // size=32, offset=52
	struct MATRIX matCop; // size=32, offset=84
	struct MATRIX identMat; // size=32, offset=116
	int otz; // size=0, offset=148
	struct VECTOR tVn0; // size=16, offset=152
	struct VECTOR tVn1; // size=16, offset=168
	struct VECTOR tVn2; // size=16, offset=184
	struct VECTOR tVn3; // size=16, offset=200
	short light; // size=0, offset=216
	short doublelayer; // size=0, offset=218
};

struct Chunk // hashcode: 0xCB69433E (dec: -882293954)
{
	struct RelCoord16 boundPts[4]; // size=16, offset=0
	struct RelCoord16 chunkboundPts[4]; // size=16, offset=16
	unsigned char quadCounts[6]; // size=6, offset=32
	unsigned char pad[2]; // size=2, offset=38
	struct Trk_Quad (*renderQuads[4]); // size=16, offset=40
	struct Group *stripBuf; // size=4, offset=56
	struct Group *lorezstripBuf; // size=4, offset=60
	struct Group *objInstanceBuf; // size=4, offset=64
	struct Group *objSpecialInstanceBuf; // size=4, offset=68
	struct Group *simSliceBuf; // size=4, offset=72
	struct Group *simQuadBuf; // size=4, offset=76
	struct Group *simObjBuf; // size=4, offset=80
	struct Group *sfxBuf; // size=4, offset=84
	struct Group *lineBuf; // size=4, offset=88
	struct Group *objVertexBuf; // size=4, offset=92
	struct Group *objQuadBuf; // size=4, offset=96
	struct Group *objQuadInstanceBuf; // size=4, offset=100
	short firstSimSliceInd; // size=0, offset=104
	short chunkInd; // size=0, offset=106
	struct Group *vertexBuf; // size=4, offset=108
};

struct BW_tContextMgr // hashcode: 0xD332DAEA (dec: -751641878)
{
	int initialized; // size=0, offset=0
	int count; // size=0, offset=4
	struct BW_tContext contexts[2]; // size=312, offset=8
};

struct tBuildEntry // hashcode: 0x40EA1836 (dec: 1089083446)
{
	short chunkInd; // size=0, offset=0
	char geomRez; // size=0, offset=2
	char enableBits; // size=0, offset=3
};

struct CHorizonSpec // hashcode: 0x646C6EE1 (dec: 1684827873)
{
	int mirror; // size=0, offset=0
	int angle; // size=0, offset=4
	int yoffset; // size=0, offset=8
	int height; // size=0, offset=12
	struct CVECTOR frontColor[2]; // size=8, offset=16
	struct CVECTOR backColor[2]; // size=8, offset=24
	char ringPMX[16]; // size=16, offset=32
};

struct CSkySpec // hashcode: 0xF1BD4691 (dec: -239253871)
{
	int type; // size=0, offset=0
	int flags; // size=0, offset=4
	struct CVECTOR frontcolors[5]; // size=20, offset=8
	struct CVECTOR backcolors[5]; // size=20, offset=28
	struct CVECTOR clearcolor; // size=4, offset=48
	int sunAngleInSky; // size=0, offset=52
	int sunHeightInSky; // size=0, offset=56
	int moonAngleInSky; // size=0, offset=60
	int moonHeightInSky; // size=0, offset=64
	int numStars; // size=0, offset=68
	int starAngleLow; // size=0, offset=72
	int starAngleHigh; // size=0, offset=76
	int starBrightMin; // size=0, offset=80
	int starBrightMax; // size=0, offset=84
	struct CVECTOR starBaseColor; // size=4, offset=88
	int starRandomSeed; // size=0, offset=92
	struct CVECTOR sunBeamColor; // size=4, offset=96
	struct CVECTOR sunHaloColor; // size=4, offset=100
	int yoffset; // size=0, offset=104
	char cloudIndices[5][4]; // size=20, offset=108
	int ringAngles[5]; // size=20, offset=128
};

struct CNightSpec // hashcode: 0xCF0ED21E (dec: -821112290)
{
	struct CVECTOR nightcolor; // size=4, offset=0
};

struct CWeatherSpec // hashcode: 0x1A43D259 (dec: 440652377)
{
	int type; // size=0, offset=0
	int intensity_limit; // size=0, offset=4
};

struct CFogSpec // hashcode: 0x4603D293 (dec: 1174655635)
{
	int contrast; // size=0, offset=0
	struct CVECTOR color; // size=4, offset=4
	int start; // size=0, offset=8
	int dist2base; // size=0, offset=12
};

struct CDepthCueSpec // hashcode: 0x3E9C4626 (dec: 1050428966)
{
	struct CVECTOR color; // size=4, offset=0
	int distance; // size=0, offset=4
};

struct CWorldColor // hashcode: 0xA7CBA2EB (dec: -1479826709)
{
	int contrast; // size=0, offset=0
	struct CVECTOR contrast_color; // size=4, offset=4
	short worldR; // size=0, offset=8
	short worldG; // size=0, offset=10
	short worldB; // size=0, offset=12
	short type; // size=0, offset=14
};

struct Trk_NewSlice // hashcode: 0x6848CC7E (dec: 1749601406)
{
	int center[3]; // size=12, offset=0
	char normal[3]; // size=3, offset=12
	char forward[3]; // size=3, offset=15
	char right[3]; // size=3, offset=18
	unsigned char acousticType; // size=0, offset=21
	short pavedProfile; // size=0, offset=22
	short leftDrive; // size=0, offset=24
	short rightDrive; // size=0, offset=26
	unsigned char chunkIndex; // size=0, offset=28
	unsigned char laneCount; // size=0, offset=29
	unsigned char avgPavedWidthLf; // size=0, offset=30
	unsigned char avgPavedWidthRt; // size=0, offset=31
};

struct tNormalCacheEntry // hashcode: 0xD278968E (dec: -763849074)
{
	short sliceInd; // size=0, offset=0
	unsigned char triangleFlag; // size=0, offset=2
	char quadInd; // size=0, offset=3
	struct coorddef normal; // size=12, offset=4
	struct coorddef forward; // size=12, offset=16
	unsigned long accessTime; // size=0, offset=28
};

struct camera_info // hashcode: 0xDFD326D7 (dec: -539810089)
{
	struct BO_tNewtonObj *anchor; // size=576, offset=0
	struct BO_tNewtonObj *target; // size=576, offset=4
	struct coorddef position; // size=12, offset=8
	struct coorddef relpos; // size=12, offset=20
	struct coorddef audioPos; // size=12, offset=32
	int TVHeight; // size=0, offset=44
	struct matrixtdef rotation; // size=36, offset=48
	int twist; // size=0, offset=84
	struct coorddef wallLeft; // size=12, offset=88
	struct coorddef wallRight; // size=12, offset=100
	short mode; // size=0, offset=112
	short camNum; // size=0, offset=114
	char modechange; // size=1, offset=928
	char pitch; // size=1, offset=929
	char jostling; // size=1, offset=930
	char tracking; // size=1, offset=931
	char checkwalls; // size=1, offset=932
	char noLookBack; // size=1, offset=933
	char checkcollisions; // size=1, offset=934
	char splitscreen; // size=1, offset=935
	char intransition; // size=0, offset=117
	char tumbling; // size=0, offset=118
	char direction; // size=1, offset=952
	char zooming; // size=2, offset=953
	char inCar; // size=1, offset=955
	short circleCounter; // size=0, offset=120
	short circleAngle; // size=0, offset=122
	char animNum; // size=0, offset=124
	char animHandle; // size=0, offset=125
	char splineMode; // size=0, offset=126
	enum forceFocus_t forceFocus; // size=4, offset=128
	char focusOnAICar; // size=0, offset=132
	int POInhibitor; // size=0, offset=136
	struct BWorldSm_Pos slicePos; // size=132, offset=140
};

struct camera_flags // hashcode: 0x934CE462 (dec: -1823677342)
{
	struct coorddef arm; // size=12, offset=0
	int pitch; // size=1, offset=96
	int jostling; // size=1, offset=97
	int tracking; // size=1, offset=98
	int checkwalls; // size=1, offset=99
	int noLookBack; // size=1, offset=100
	int checkcollisions; // size=1, offset=101
};

struct Camera_tCamSlot // hashcode: 0x23E174CF (dec: 601978063)
{
	char mode; // size=0, offset=0
	char track; // size=1, offset=8
	char zoom; // size=2, offset=9
	char splineMode; // size=3, offset=11
	short fov; // size=0, offset=2
	struct coorddef pos; // size=12, offset=4
	int height; // size=0, offset=16
	int splineOffset; // size=0, offset=20
	struct COORD16 euler; // size=6, offset=24
	short slice; // size=0, offset=30
};

struct __153 // hashcode: 0xFAF26D73 (dec: -84775565)
{
	struct CarBank Mobile[9]; // size=108, offset=0
	struct CarBank Dispatch[9]; // size=108, offset=108
};

struct __154 // hashcode: 0x9652ADA8 (dec: -1772966488)
{
	struct LocationBank Mobile[16]; // size=256, offset=0
	struct LocationBank Dispatch[16]; // size=256, offset=256
};

struct __155 // hashcode: 0x28BDED72 (dec: 683535730)
{
	struct CallSignBank Mobile; // size=68, offset=0
	struct CallSignBank Dispatch; // size=68, offset=68
};

struct SimpleMem // hashcode: 0x08327E56 (dec: 137526870)
{
	void *heap; // size=0, offset=0
	void *freeMem; // size=0, offset=4
	int freeMemSize; // size=0, offset=8
};

struct SerializedGroup // hashcode: 0x3A2A5F41 (dec: 975855425)
{
	int m_type; // size=0, offset=0
	int m_length; // size=0, offset=4
	int dummy; // size=0, offset=8
	int m_num_elements; // size=0, offset=12
};

struct Trk_SimpleInst // hashcode: 0xAB1E020A (dec: -1424096758)
{
	short size; // size=0, offset=0
	unsigned char type; // size=0, offset=2
	unsigned char objectIndex; // size=0, offset=3
	unsigned char zoffset; // size=0, offset=4
	unsigned char flags; // size=0, offset=5
	short pad; // size=0, offset=6
	int x; // size=0, offset=8
	int y; // size=0, offset=12
	int z; // size=0, offset=16
};

struct Clock_tGameClock // hashcode: 0x22ADD562 (dec: 581817698)
{
	int time128Hz; // size=0, offset=0
	int time64Hz; // size=0, offset=4
	int time32Hz; // size=0, offset=8
};

struct Object_tSimObjList // hashcode: 0x37A36D18 (dec: 933457176)
{
	int numObjects; // size=0, offset=0
	int chunk; // size=0, offset=4
	int numObjects2; // size=0, offset=8
	int chunk2; // size=0, offset=12
};

struct HudPmx_tShape // hashcode: 0xD319798C (dec: -753305204)
{
	struct Draw_tPixMap pixmap; // size=16, offset=0
	short width; // size=0, offset=16
	short height; // size=0, offset=18
};

struct HudPmx_tUV // hashcode: 0x28D9B115 (dec: 685355285)
{
	unsigned char u0; // size=0, offset=0
	unsigned char v0; // size=0, offset=1
	unsigned short clut; // size=0, offset=2
};

struct SPCHNFSType_vs_KMH_MPH // hashcode: 0x9165C995 (dec: -1855600235)
{
	unsigned long flags; // size=0, offset=0
};

struct SPCHNFSType_VOICE // hashcode: 0xF9EE63E3 (dec: -101817373)
{
	unsigned long flags; // size=0, offset=0
};

struct PAD_COMMON_alt_definition_0003 // hashcode: 0xDF58F714 (dec: -547817708)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __99 data; // size=6, offset=2
};

struct __102 // hashcode: 0xF605E12E (dec: -167386834)
{
	char bActive; // size=0, offset=0
	char time; // size=0, offset=1
};

struct CarBankName // hashcode: 0xEC90133D (dec: -326102211)
{
	char *fFull; // size=0, offset=0
	char *fMake; // size=0, offset=4
	char *fModel; // size=0, offset=8
};

struct __125 // hashcode: 0x6D3854D8 (dec: 1832408280)
{
	struct CarBank Mobile[9]; // size=108, offset=0
	struct CarBank Dispatch[9]; // size=108, offset=108
};

struct __126 // hashcode: 0x10BF61C7 (dec: 280977863)
{
	struct LocationBank Mobile[16]; // size=256, offset=0
	struct LocationBank Dispatch[16]; // size=256, offset=256
};

struct __127 // hashcode: 0x38FFC0A3 (dec: 956285091)
{
	struct CallSignBank Mobile; // size=68, offset=0
	struct CallSignBank Dispatch; // size=68, offset=68
};

struct Speech // hashcode: 0x5227211F (dec: 1378296095)
{
	struct __125 fCarBank; // size=216, offset=0
	struct __126 fLocationBank; // size=512, offset=216
	struct __127 fCallSignBank; // size=136, offset=728
	int fLocationCount; // size=0, offset=864
	void * fFileOpen; // size=0, offset=868
	int fFileHandle; // size=0, offset=872
	long *fBankOffset; // size=0, offset=876
	int fBankCount; // size=0, offset=880
	int fBlpClpBank; // size=0, offset=884
	int fStaticBank; // size=0, offset=888
	int fCarCount; // size=0, offset=892
	int fCopCount; // size=0, offset=896
	int fSuperCount; // size=0, offset=900
	int fMultiplePerps; // size=0, offset=904
	struct Car_tObj *fSpeakerCar; // size=2268, offset=908
	struct MobileSpeaker (*fMobile[4]); // size=16, offset=912
	struct DispatchSpeaker *fDispatch; // size=0, offset=928
};

struct MobileSpeaker // hashcode: 0x7C75CCEA (dec: 2088094954)
{
	struct Speaker Speaker; // size=80, offset=0
	struct SPCHNFSType_VOICE fVoice; // size=4, offset=80
	struct SPCHNFSType_vs_KMH_MPH fSpeedType; // size=4, offset=84
	int fSpeed; // size=0, offset=88
	int fUnit; // size=0, offset=92
	struct Car_tObj *fCarObj; // size=2268, offset=96
	struct Car_tObj *fPerp; // size=2268, offset=100
};

struct DispatchSpeaker // hashcode: 0xA1BFCE3C (dec: -1581265348)
{
	struct Speaker Speaker; // size=80, offset=0
	int fStatusCount; // size=0, offset=80
	struct Speaker *fStatusSub; // size=80, offset=84
	int fUpdateCount; // size=0, offset=88
	struct Car_tObj (*fPerp[2]); // size=8, offset=92
};

struct Speech_tCarDescription // hashcode: 0x0DB5984E (dec: 230004814)
{
	char *game; // size=0, offset=0
	char *full; // size=0, offset=4
	char *make; // size=0, offset=8
	char *model; // size=0, offset=12
};

struct Speech_tLocationDescription // hashcode: 0xBA6DA67A (dec: -1167219078)
{
	char *name; // size=0, offset=0
	short start; // size=0, offset=4
	short end; // size=0, offset=6
};

struct Speech_tCallSignDescription // hashcode: 0x4E65E516 (dec: 1315300630)
{
	char *AllUnits; // size=0, offset=0
	char (*Dispatch[5]); // size=20, offset=4
	char (*Mobile[15]); // size=60, offset=24
};

struct Speech_tMobileVoiceAttr // hashcode: 0xB8EFF2D7 (dec: -1192234281)
{
	int voice; // size=0, offset=0
	int pitch; // size=0, offset=4
};

struct __158 // hashcode: 0x7198C827 (dec: 1905838119)
{
	struct CarBank Mobile[9]; // size=108, offset=0
	struct CarBank Dispatch[9]; // size=108, offset=108
};

struct __159 // hashcode: 0x4D92E96A (dec: 1301473642)
{
	struct LocationBank Mobile[16]; // size=256, offset=0
	struct LocationBank Dispatch[16]; // size=256, offset=256
};

struct __160 // hashcode: 0xF152FEEB (dec: -246219029)
{
	struct CallSignBank Mobile; // size=68, offset=0
	struct CallSignBank Dispatch; // size=68, offset=68
};

struct CopSpeak_tFileIndex // hashcode: 0xF4B544B1 (dec: -189446991)
{
	long offset; // size=0, offset=0
	long size; // size=0, offset=4
};

struct CopSpeak_tBankHeader // hashcode: 0xDA08E706 (dec: -636950778)
{
	int id; // size=0, offset=0
	unsigned char ver; // size=0, offset=4
};

struct CopSpeak_tBank // hashcode: 0xDEC0EF68 (dec: -557781144)
{
	int FileHandle; // size=0, offset=0
	int FileOpen; // size=0, offset=4
	struct CopSpeak_tFileIndex *Index; // size=8, offset=8
	int Count; // size=0, offset=12
};

struct dashhud_info // hashcode: 0xF535BEAC (dec: -181027156)
{
	int splitscreen; // size=0, offset=0
	char name[9]; // size=9, offset=4
	int conversion; // size=0, offset=16
	int flashtime; // size=0, offset=20
	int flashlap; // size=0, offset=24
	int showhud[2]; // size=8, offset=28
	int showmap[2]; // size=8, offset=36
	int wrongway[2]; // size=8, offset=44
	int laptime; // size=0, offset=52
	int lap; // size=0, offset=56
	int maxlaps; // size=0, offset=60
	int rpm; // size=0, offset=64
	int redline; // size=0, offset=68
	int gear; // size=0, offset=72
	int speed; // size=0, offset=76
	int topspeed; // size=0, offset=80
	int position; // size=0, offset=84
	int opponents; // size=0, offset=88
	int record; // size=0, offset=92
	int tutor; // size=0, offset=96
	int warning[2]; // size=8, offset=100
};

struct FEI_tList // hashcode: 0xF448AD4D (dec: -196563635)
{
	int v; // size=0, offset=0
	int *p; // size=0, offset=4
};

struct PAD_COMMON_alt_definition_0004 // hashcode: 0x4CB99871 (dec: 1287231601)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __70 data; // size=6, offset=2
};

struct __73 // hashcode: 0x329B13ED (dec: 849023981)
{
	char bActive; // size=0, offset=0
	char time; // size=0, offset=1
};

struct GameSetup_tData // hashcode: 0xDFB428B1 (dec: -541841231)
{
	int raceType; // size=0, offset=0
	int numLaps; // size=0, offset=4
	int skill; // size=0, offset=8
	int commMode; // size=0, offset=12
	int tournamentMultiplier; // size=0, offset=16
	int cops; // size=0, offset=20
	int trafficDensity; // size=0, offset=24
	int localCar; // size=0, offset=28
	int catchupLogic; // size=0, offset=32
	int replayMode; // size=0, offset=36
	int instantReplay; // size=0, offset=40
	int mirrorTrack; // size=0, offset=44
	int reverseTrack; // size=0, offset=48
	int measurement; // size=0, offset=52
	int sgge; // size=0, offset=56
	int track; // size=0, offset=60
	int trackSegment; // size=0, offset=64
	int song; // size=0, offset=68
	int Weather; // size=0, offset=72
	int Fog; // size=0, offset=76
	int Damage; // size=0, offset=80
	int Time; // size=0, offset=84
	int randSeed; // size=0, offset=88
	int easter; // size=0, offset=92
	struct GameSetup_tControllerData controllerData; // size=88, offset=96
	int pinkSlipsForfeit; // size=0, offset=184
	int checkpointType; // size=0, offset=188
	int checkpointHUD[2]; // size=8, offset=192
	int dispatchSpeech; // size=0, offset=200
	int reverseCallSpeech; // size=0, offset=204
	int languageSpeech; // size=0, offset=208
	int SceneNumber; // size=0, offset=212
	int SceneStartLap; // size=0, offset=216
	int SceneEndLap; // size=0, offset=220
	struct GameSetup_tUserSetting userSetting; // size=204, offset=224
	int numPerps; // size=0, offset=428
	int stageOffset; // size=0, offset=432
	int perpArrests; // size=0, offset=436
	int finalPerpArrests; // size=0, offset=440
	struct GameSetup_tPerpData perpInfo[10]; // size=520, offset=444
	int numCars; // size=0, offset=964
	int numPlayerRaceCars; // size=0, offset=968
	int numOpponentRaceCars; // size=0, offset=972
	int opponentCarType; // size=0, offset=976
	struct GameSetup_tCarData carInfo[9]; // size=1620, offset=980
};

struct Input_tResults // hashcode: 0x5BD7E0C9 (dec: 1540874441)
{
	char steering; // size=0, offset=0
	unsigned char gas; // size=0, offset=1
	unsigned char brake; // size=0, offset=2
	unsigned char flags; // size=0, offset=3
};

struct tPMenuCommand // hashcode: 0xC3F70D97 (dec: -1007219305)
{
	enum tPMenuCommandType type; // size=4, offset=0
	struct tPMenu *nextMenu; // size=0, offset=4
};

struct tPMenu // hashcode: 0x631FC58C (dec: 1663026572)
{
	int fCurrentItem; // size=0, offset=0
	void * fHighlight; // size=0, offset=4
	struct tPMenuItem (*fItemList[16]); // size=64, offset=8
	struct tPMenu *fNextMenu; // size=84, offset=72
	int fNumItems; // size=0, offset=76
	struct __vtbl_ptr_type (*_vf)[5]; // size=4, offset=80
};

struct tPListIterator // hashcode: 0x33A17A8C (dec: 866220684)
{
	short *fSelectionList; // size=0, offset=0
	int *fValue; // size=0, offset=4
	struct __vtbl_ptr_type (*_vf)[6]; // size=4, offset=8
};

struct tPListIteratorIndexed // hashcode: 0x2CCEB342 (dec: 751743810)
{
	struct tPListIterator tPListIterator; // size=12, offset=0
	char *fIndex; // size=0, offset=12
};

struct tPMenuItem // hashcode: 0x668F918E (dec: 1720684942)
{
	unsigned int fFlags; // size=0, offset=0
	unsigned int fTextDescription; // size=0, offset=4
	struct __vtbl_ptr_type (*_vf)[7]; // size=4, offset=8
};

struct tPMenuItemNonInteractiveText // hashcode: 0x823ECA9D (dec: -2109814115)
{
	struct tPMenuItem tPMenuItem; // size=12, offset=0
};

struct tPMenuItemInteractive // hashcode: 0xA4C78D44 (dec: -1530426044)
{
	struct tPMenuItem tPMenuItem; // size=12, offset=0
};

struct tPMenuItemLeftRightChoice // hashcode: 0xFDEE8B5A (dec: -34698406)
{
	struct tPMenuItemInteractive tPMenuItemInteractive; // size=12, offset=0
	struct tPListIterator *fData; // size=12, offset=12
};

struct tPMenuItemLeftRightSlider // hashcode: 0x39FFBAF9 (dec: 973060857)
{
	struct tPMenuItemInteractive tPMenuItemInteractive; // size=12, offset=0
	int *fData; // size=0, offset=12
	char fMaxVal; // size=0, offset=16
};

struct tPMenuItemLeftRightSliderIndexed // hashcode: 0xAFA6406E (dec: -1348059026)
{
	struct tPMenuItemLeftRightSlider tPMenuItemLeftRightSlider; // size=20, offset=0
	char *fIndex; // size=0, offset=20
};

struct tPMenuItemGoToMenuButton // hashcode: 0xB60BAA5C (dec: -1240749476)
{
	struct tPMenuItemInteractive tPMenuItemInteractive; // size=12, offset=0
	struct tPMenu *fNewMenu; // size=0, offset=12
	void (*fOnButtonPress)(); // size=0, offset=16
};

struct tPMenuItemCommandButton // hashcode: 0x79C00868 (dec: 2042628200)
{
	struct tPMenuItemInteractive tPMenuItemInteractive; // size=12, offset=0
	enum tPMenuCommandType fCommand; // size=4, offset=12
};

struct tPauseMenuDefs // hashcode: 0x42411BEF (dec: 1111563247)
{
	struct tPMenuItemNonInteractiveText itemGamePaused; // size=12, offset=0
	struct tPMenuItemCommandButton itemContinue; // size=16, offset=12
	struct tPMenuItemCommandButton itemRestart; // size=16, offset=28
	struct tPMenuItemGoToMenuButton itemOptions; // size=20, offset=44
	struct tPMenuItemCommandButton itemQuitRace; // size=16, offset=64
	struct tPMenuItemCommandButton itemForfeitRace; // size=16, offset=80
	struct tPMenu menuPause; // size=84, offset=96
	struct tPMenuItemNonInteractiveText itemOptionsTitle; // size=12, offset=180
	struct tPMenuItemGoToMenuButton itemAudioSettings; // size=20, offset=192
	struct tPMenuItemGoToMenuButton itemControllerSettings; // size=20, offset=212
	struct tPMenu menuOptions; // size=84, offset=232
	struct tPMenuItemNonInteractiveText itemAudioSettingsTitle; // size=12, offset=316
	struct tPListIterator iteratorAudioMode; // size=12, offset=328
	struct tPMenuItemLeftRightChoice itemAudioSettingsAudioMode; // size=16, offset=340
	struct tPMenuItemLeftRightSlider itemAudioSettingsMusicVolume; // size=20, offset=356
	struct tPMenuItemLeftRightSlider itemAudioSettingsFXVolume; // size=20, offset=376
	struct tPMenuItemLeftRightSlider itemAudioSettingsSpeechVolume; // size=20, offset=396
	struct tPMenuItemLeftRightSlider itemAudioSettingsEngineVolume; // size=20, offset=416
	struct tPMenuItemLeftRightSlider itemAudioSettingsAmbientVolume; // size=20, offset=436
	struct tPMenu menuAudioSettings; // size=84, offset=456
	struct tPListIteratorIndexed iteratorConfig; // size=16, offset=540
	struct tPMenuItemNonInteractiveText itemControllerSettingsTitle; // size=12, offset=556
	struct tPMenuItemLeftRightChoice itemControllerConfig; // size=16, offset=568
	struct tPMenuItemLeftRightSliderIndexed itemControllerShockMode; // size=24, offset=584
	struct tPMenuItemLeftRightSliderIndexed itemControllerShockImpact; // size=24, offset=608
	struct tPMenu menuControllerConfig; // size=84, offset=632
	struct tPMenuItemNonInteractiveText itemConfirmTitle; // size=12, offset=716
	struct tPMenuItemNonInteractiveText itemConfirmAreYouSure; // size=12, offset=728
	struct tPMenuItemCommandButton itemConfirmNo; // size=16, offset=740
	struct tPMenuItemCommandButton itemConfirmYes; // size=16, offset=756
	struct tPMenu menuConfirmYesNo; // size=84, offset=772
};

struct tNfsSystemInfo // hashcode: 0xE126FF5B (dec: -517537957)
{
	int userRam; // size=0, offset=0
};

struct __150 // hashcode: 0x0B5D857D (dec: 190678397)
{
	struct CarBank Mobile[9]; // size=108, offset=0
	struct CarBank Dispatch[9]; // size=108, offset=108
};

struct __151 // hashcode: 0x017D02B7 (dec: 24969911)
{
	struct LocationBank Mobile[16]; // size=256, offset=0
	struct LocationBank Dispatch[16]; // size=256, offset=256
};

struct __152 // hashcode: 0xCC9156B4 (dec: -862890316)
{
	struct CallSignBank Mobile; // size=68, offset=0
	struct CallSignBank Dispatch; // size=68, offset=68
};

struct tListIteratorIndexed // hashcode: 0xEB8BB590 (dec: -343165552)
{
	struct tListIterator tListIterator; // size=16, offset=0
	char *fIndex; // size=0, offset=16
};

struct tScreen // hashcode: 0xD7CBAE9E (dec: -674517346)
{
	struct tShapeInformation fPermShapes; // size=40, offset=0
	struct tShapeInformation fSwapShapes; // size=40, offset=40
	int fTransitionTicks; // size=0, offset=80
	void * fTransitionOff; // size=0, offset=84
	int fInternalScreenFadeVal; // size=0, offset=88
	short fScreenFadeVal; // size=0, offset=92
	struct __vtbl_ptr_type (*_vf)[10]; // size=4, offset=96
};

struct tCarLineup // hashcode: 0x7771BBAE (dec: 2003942318)
{
	void * isPlayerCar; // size=0, offset=0
	enum tPersonalities personality; // size=4, offset=4
	char position; // size=0, offset=8
	enum tCarModels carModel; // size=4, offset=12
	char carColor; // size=0, offset=16
	char carUpgrades; // size=0, offset=17
};

struct tTrackInformation // hashcode: 0x5DE17DBA (dec: 1575058874)
{
	char fTrackID; // size=0, offset=0
	unsigned char fSimNumber; // size=0, offset=1
	unsigned char fTrackDifficulty; // size=0, offset=2
	unsigned char fAvailable; // size=0, offset=3
	unsigned char fIsEgg; // size=0, offset=4
	unsigned char fLengthKM; // size=0, offset=5
	unsigned char fLengthMiles; // size=0, offset=6
	unsigned char fNumMoments; // size=0, offset=7
	char fShapeName[8]; // size=8, offset=8
	char fSplineName[8]; // size=8, offset=16
	char fCountry; // size=0, offset=24
	char fDispatch; // size=0, offset=25
	char fReverseCall; // size=0, offset=26
	char fLanguage; // size=0, offset=27
	char fTrafficCars[6]; // size=6, offset=28
	short fTX; // size=0, offset=34
	short fTY; // size=0, offset=36
	short fSX; // size=0, offset=38
	short fSY; // size=0, offset=40
	unsigned char fSpeedoCountry; // size=0, offset=42
	unsigned char fPad; // size=0, offset=43
	long fRotate; // size=0, offset=44
};

struct tTrackManager // hashcode: 0x83444077 (dec: -2092679049)
{
	unsigned long fNumTracks; // size=0, offset=0
	struct tTrackInformation *fTracks; // size=48, offset=4
	void * fAvailableTracks[16]; // size=64, offset=8
	void * fViewableTracks[16]; // size=64, offset=72
};

struct tTierInfo // hashcode: 0xD3CD4481 (dec: -741522303)
{
	unsigned char fNumTournaments; // size=0, offset=0
	unsigned char fDescriptionID; // size=0, offset=1
	unsigned char fTournOffset; // size=0, offset=2
	unsigned char fPad; // size=0, offset=3
	unsigned char fReserved[8]; // size=8, offset=4
};

struct tTourneyInfo // hashcode: 0x780FD9E3 (dec: 2014304739)
{
	char fTournamentID; // size=0, offset=0
	unsigned char fNumTracks; // size=0, offset=1
	unsigned char fTrackOffset; // size=0, offset=2
	unsigned char fOpponentCarClass; // size=0, offset=3
	unsigned char fTraffic; // size=0, offset=4
	unsigned char fKnockout; // size=0, offset=5
	unsigned char fNumCars; // size=0, offset=6
	unsigned char fAwardCar; // size=0, offset=7
	unsigned char fAwardCarModel; // size=0, offset=8
	unsigned char fAwardCarUpgrades; // size=0, offset=9
	unsigned short fActivateFlags; // size=0, offset=10
	unsigned short fRequiredFlags; // size=0, offset=12
	unsigned char fActivatedTrack; // size=0, offset=14
	unsigned char fActivatedCarClass; // size=0, offset=15
	unsigned char fActivatedCar; // size=0, offset=16
	unsigned char fRequiredTournamentID; // size=0, offset=17
	unsigned char fRequiredCar; // size=0, offset=18
	unsigned char fRequiredUpgrades; // size=0, offset=19
	unsigned char fSpecificUpgrades; // size=0, offset=20
	unsigned char fRequiredCheatID; // size=0, offset=21
	unsigned char fTrophyID; // size=0, offset=22
	unsigned char fPad; // size=0, offset=23
	long fPrize[6]; // size=24, offset=24
	long fEntranceFee; // size=0, offset=48
	unsigned char fPersonalities[5]; // size=5, offset=52
	unsigned char fOpponentCar[5]; // size=5, offset=57
	unsigned char fOpponentUpgrades[5]; // size=5, offset=62
	unsigned char fActivatedTrackClass; // size=0, offset=67
	unsigned char fActivatedCheat; // size=0, offset=68
	unsigned char fNumLaps; // size=0, offset=69
	unsigned char fReserved[14]; // size=14, offset=70
};

struct tTrackInfo // hashcode: 0x4680A5A7 (dec: 1182836135)
{
	char fTrackNumber; // size=0, offset=0
	unsigned char fDirection; // size=0, offset=1
	unsigned char fMirrored; // size=0, offset=2
	unsigned char fTimeOfDay; // size=0, offset=3
	unsigned char fWeather; // size=0, offset=4
	unsigned char fRandom; // size=0, offset=5
	unsigned char fSituations; // size=0, offset=6
	unsigned char fPad; // size=0, offset=7
	long fPrize[6]; // size=24, offset=8
	unsigned long fDifficulty; // size=0, offset=32
	unsigned char fReserved[4]; // size=4, offset=36
};

struct tTournamentDefinition // hashcode: 0xAE39705C (dec: -1371967396)
{
	struct tTierInfo fTiers[3]; // size=36, offset=0
	struct tTourneyInfo fTournaments[64]; // size=5376, offset=36
	struct tTrackInfo fTracks[128]; // size=5120, offset=5412
};

struct tAwardInformation // hashcode: 0xFA9C61A6 (dec: -90414682)
{
	long fMoney; // size=0, offset=0
	long fTournMoney; // size=0, offset=4
	unsigned short fActivateFlags; // size=0, offset=8
	char fActivateTrack; // size=0, offset=10
	enum tCarClassType fActivateCarClass; // size=4, offset=12
	enum tCarModels fActivateCar; // size=4, offset=16
	enum tTrackClassType fActivateTrackClass; // size=4, offset=20
	long fActivateCheat; // size=0, offset=24
	void * fAwardCar; // size=0, offset=28
	void * fAwardCarGarageFull; // size=0, offset=32
	long fAwardCarBonusMoney; // size=0, offset=36
	enum tCarModels fAwardCarModel; // size=4, offset=40
	char fAwardCarColor; // size=0, offset=44
	char fAwardCarUpgrades; // size=0, offset=45
	void * fCompletedTier; // size=0, offset=48
	short fCompletedText; // size=0, offset=52
	enum tCarModels fCompletedCar; // size=4, offset=56
	void * fCompletedGarageFull; // size=0, offset=60
	long fCompletedBonusMoney; // size=0, offset=64
};

struct tCompetitor // hashcode: 0xD8A10DE7 (dec: -660533785)
{
	enum tPersonalities fPersonality; // size=4, offset=0
	unsigned char fVariation; // size=0, offset=4
	char fIsPlayerCar; // size=0, offset=5
	void * fEliminated; // size=0, offset=8
	unsigned short fPoints; // size=0, offset=12
	unsigned char fPosition; // size=0, offset=14
};

struct tTournamentManager // hashcode: 0x70CB48D4 (dec: 1892370644)
{
	char fNumTiers; // size=0, offset=0
	int fTier; // size=0, offset=4
	int fTournament; // size=0, offset=8
	int fCurrentTrack; // size=0, offset=12
	int fNumRacers; // size=0, offset=16
	long fMoney; // size=0, offset=20
	struct tTournamentDefinition *fDefinition; // size=10532, offset=24
	short fTierList[4]; // size=8, offset=28
	short fTierFinishPrize[4]; // size=8, offset=36
	short fTierFinishPrizeChange[4]; // size=8, offset=44
	short fTournamentList[65]; // size=130, offset=52
	short fTrackList[17]; // size=34, offset=182
	char fDirection[16]; // size=16, offset=216
	char fMirror[16]; // size=16, offset=232
	char fTimeOfDay[16]; // size=16, offset=248
	char fWeather[16]; // size=16, offset=264
	struct tCompetitor fCompetitors[6]; // size=96, offset=280
	struct tCarLineup fCarLineup[6]; // size=120, offset=376
	char fBestPlacement[64]; // size=64, offset=496
	char fPrevBestPlacement; // size=0, offset=560
	unsigned char fFinishPoints[6]; // size=6, offset=561
	unsigned char fRanking[6]; // size=6, offset=567
	struct tAwardInformation fAwards; // size=68, offset=576
};

struct tMissionTierInfo // hashcode: 0xA013821A (dec: -1609334246)
{
	unsigned char fNumMissions; // size=0, offset=0
	unsigned char fDescriptionID; // size=0, offset=1
	unsigned char fMissionOffset; // size=0, offset=2
	unsigned char fPad; // size=0, offset=3
};

struct tMissionInfo // hashcode: 0xA2D1E431 (dec: -1563302863)
{
	unsigned char fDescriptionID; // size=0, offset=0
	unsigned char fTrackNumber; // size=0, offset=1
	unsigned char fDirection; // size=0, offset=2
	unsigned char fMirrored; // size=0, offset=3
	unsigned char fTimeOfDay; // size=0, offset=4
	unsigned char fWeather; // size=0, offset=5
	unsigned char fTraffic; // size=0, offset=6
	unsigned char fPad; // size=0, offset=7
	unsigned short fStageOffset; // size=0, offset=8
	unsigned char fNumStages; // size=0, offset=10
	unsigned char fReserved[9]; // size=9, offset=11
};

struct tStageInfo // hashcode: 0x418052AF (dec: 1098928815)
{
	unsigned char fCarModel; // size=0, offset=0
	unsigned char fColor; // size=0, offset=1
	unsigned char fAIPersonality; // size=0, offset=2
	unsigned char fDirection; // size=0, offset=3
	short fTimeLimit; // size=0, offset=4
	short fWingman; // size=0, offset=6
	short fSpikeBelt; // size=0, offset=8
	short fBlockadeCop; // size=0, offset=10
	unsigned char fPlacement; // size=0, offset=12
	unsigned char fStyle; // size=0, offset=13
	unsigned short fDistance; // size=0, offset=14
	unsigned long fSpeed; // size=0, offset=16
	unsigned long fWeight; // size=0, offset=20
	unsigned long fGlue; // size=0, offset=24
	unsigned char fSpeechColor; // size=0, offset=28
	unsigned char fReserved[15]; // size=15, offset=29
};

struct tAcademyDefinition // hashcode: 0xB0E43878 (dec: -1327220616)
{
	struct tMissionTierInfo fTiers[8]; // size=32, offset=0
	struct tMissionInfo fMissions[64]; // size=1280, offset=32
	struct tStageInfo fStages[256]; // size=11264, offset=1312
};

struct tMissionManager // hashcode: 0x1B8AAD28 (dec: 462073128)
{
	char fNumTiers; // size=0, offset=0
	struct tAcademyDefinition *fDefinition; // size=12576, offset=4
};

struct tActiveLine // hashcode: 0xF5F012E9 (dec: -168815895)
{
	short startTick; // size=0, offset=0
	short endTick; // size=0, offset=2
	short x1; // size=0, offset=4
	short y1; // size=0, offset=6
	char type; // size=0, offset=8
	short data; // size=0, offset=10
};

struct tShapeInformation // hashcode: 0x51218323 (dec: 1361150755)
{
	struct tTexture_ShapeInfo *fShapes; // size=32, offset=0
	char *fFile; // size=0, offset=4
	char *fDestFile; // size=0, offset=8
	unsigned int async_handle; // size=0, offset=12
	unsigned short fNumShapes; // size=0, offset=16
	unsigned short fFlags; // size=0, offset=18
	char fFilename[16]; // size=16, offset=20
	void * fLoadCancelled; // size=0, offset=36
};

struct tDialogBase // hashcode: 0x1B2E3073 (dec: 456011891)
{
	struct tScreen tScreen; // size=100, offset=0
	short specificPlayer; // size=0, offset=100
	short left; // size=0, offset=102
	short top; // size=0, offset=104
	short width; // size=0, offset=106
	short height; // size=0, offset=108
	short reservedheight; // size=0, offset=110
	void * currentlyOn; // size=0, offset=112
	long startTicks; // size=0, offset=116
	long timeOutTicks; // size=0, offset=120
	short OffsetX; // size=0, offset=124
	short OffsetY; // size=0, offset=126
	short MaxW; // size=0, offset=128
	short MaxH; // size=0, offset=130
	void * fFullyOpen; // size=0, offset=132
	short fDefault; // size=0, offset=136
	short ReturnValue; // size=0, offset=138
	int fFadeText; // size=0, offset=140
};

struct tDialogMessageString // hashcode: 0x2B1D489A (dec: 723339418)
{
	struct tDialogBase tDialogBase; // size=144, offset=0
	char *string; // size=0, offset=144
	void * Centerit; // size=0, offset=148
};

struct tDialogInteractive // hashcode: 0x405F185B (dec: 1079973979)
{
	struct tDialogMessageString tDialogMessageString; // size=152, offset=0
	void * ReadyToReturnValue; // size=0, offset=152
	void * fCurrentlyRunning; // size=0, offset=156
};

struct tDialogYesNo // hashcode: 0x4301644C (dec: 1124164684)
{
	struct tDialogInteractive tDialogInteractive; // size=160, offset=0
	int yesnowords[2]; // size=8, offset=160
};

struct tCredit // hashcode: 0xA6FD03B2 (dec: -1493367886)
{
	short titleTextID; // size=0, offset=0
	short subTitleTextID; // size=0, offset=2
	short titleX; // size=0, offset=4
	short titleY; // size=0, offset=6
	short titleJustify; // size=0, offset=8
	short titleWidth; // size=0, offset=10
	short subTitleX; // size=0, offset=12
	short subTitleY; // size=0, offset=14
	short subTitleJustify; // size=0, offset=16
	short subTitleWidth; // size=0, offset=18
	short textX; // size=0, offset=20
	short textY; // size=0, offset=22
	short textJustify; // size=0, offset=24
	short creditType; // size=0, offset=26
	short bgNumber; // size=0, offset=28
	short pad; // size=0, offset=30
	char text[292]; // size=292, offset=32
};

struct tCreditManager // hashcode: 0x37205D92 (dec: 924867986)
{
	struct tCredit *CreditBuffer; // size=324, offset=0
	int fTVFade; // size=0, offset=4
	int fTextFade; // size=0, offset=8
	int fTextFadeDir; // size=0, offset=12
	void * fCreditsInitialized; // size=0, offset=16
	void * fRequestDeInit; // size=0, offset=20
	int fNumCredits; // size=0, offset=24
	int fShowCreditNum; // size=0, offset=28
	int fCurrCredit; // size=0, offset=32
	void * StartedTransition; // size=0, offset=36
	void * StartedLines; // size=0, offset=40
	void * StartedTextFade; // size=0, offset=44
	int fLineTicks; // size=0, offset=48
	int fStartTicks; // size=0, offset=52
};

struct tRecordBuffer // hashcode: 0xA79CFBF7 (dec: -1482884105)
{
	char sName[8]; // size=8, offset=0
	int nCar; // size=0, offset=8
	int nTime; // size=0, offset=12
	int nBestLap; // size=0, offset=16
};

struct ObjectMultiAnim // hashcode: 0x7799C551 (dec: 2006566225)
{
	struct ObjectAnim ObjectAnim; // size=4, offset=0
	struct coorddef impactVel; // size=12, offset=4
	struct Trk_SimObject *simObj; // size=20, offset=16
	struct Trk_CollideBoomInst *objCollideInstance; // size=36, offset=20
	struct Trk_ObjectDef *objDef; // size=4, offset=24
	struct AnimDef *animParms; // size=20, offset=28
	int objectAngle; // size=0, offset=32
	int impactAngle; // size=0, offset=36
	struct AnimScript *script; // size=20, offset=40
	struct ObjectFinishedMultiAnim *finishedAnim; // size=4, offset=44
};

struct ObjectSignAnim // hashcode: 0x5F713354 (dec: 1601254228)
{
	struct ObjectAnim ObjectAnim; // size=4, offset=0
	struct coorddef impactVel; // size=12, offset=4
	struct Trk_SimObject *simObj; // size=20, offset=16
	struct Trk_CollideBoomInst *objCollideInstance; // size=36, offset=20
	struct Trk_ObjectDef *objDef; // size=4, offset=24
	struct AnimDef *animParms; // size=20, offset=28
	int objectAngle; // size=0, offset=32
	int impactAngle; // size=0, offset=36
	struct AnimScript *script; // size=20, offset=40
	struct ObjectFinishedSignAnim *finishedAnim; // size=48, offset=44
};

struct Object_tIMassObjInfo // hashcode: 0xE2B47C8A (dec: -491488118)
{
	struct Trk_AnimateInst *animInst; // size=12, offset=0
	struct coorddef dimension; // size=12, offset=4
	struct coorddef lastPos; // size=12, offset=16
	int lastTick; // size=0, offset=28
};

struct __105 // hashcode: 0xEC07175B (dec: -335079589)
{
	int copIndex; // size=0, offset=0
	int carIndex; // size=0, offset=4
};

struct AIHigh_BasicPerp_alt_definition_0001 // hashcode: 0x1216A4EF (dec: 303473903)
{
	struct AIHigh_Base AIHigh_Base; // size=24, offset=0
	enum __104 pullOverMode_; // size=4, offset=24
	struct __105 positionVSCopList_[6]; // size=48, offset=28
	int copVSPositionList_[6]; // size=24, offset=76
	int beatingTicksLeft_; // size=0, offset=100
	int lastPullOverTime_; // size=0, offset=104
	struct Car_tObj *lastArrestingCop_; // size=2268, offset=108
	struct AICop_BasicPerpInfo basicPerpInfo_; // size=12, offset=112
};

struct AIHigh_BTC_HumanCop_alt_definition_0001 // hashcode: 0xA60C9629 (dec: -1509124567)
{
	struct AIHigh_BTC_Cop AIHigh_BTC_Cop; // size=100, offset=0
	int currentStage_; // size=0, offset=100
	int stageRepeatCount_; // size=0, offset=104
	int stageTimeMultiplier_; // size=0, offset=108
	int timeLeft_; // size=0, offset=112
	int chaseStartTime_; // size=0, offset=116
	enum __108 wingmanStatus_; // size=4, offset=120
	int needPerp_; // size=0, offset=124
	int initialDirection_; // size=0, offset=128
	int initialMovement_; // size=0, offset=132
	int requestedDesiredSpeed_; // size=0, offset=136
};

struct AIHigh_BTC_Cop_alt_definition_0001 // hashcode: 0x5B1734DF (dec: 1528247519)
{
	struct AIHigh_BasicCop AIHigh_BasicCop; // size=88, offset=0
	struct AIHigh_BTC_Perp *perpTarget_; // size=136, offset=88
	int chaseIndex_; // size=0, offset=92
	enum __107 freezeMode_; // size=4, offset=96
};

struct AIHigh_BTC_HumanCop_alt_definition_0002 // hashcode: 0xEB1B5C9F (dec: -350528353)
{
	struct AIHigh_BTC_Cop AIHigh_BTC_Cop; // size=100, offset=0
	int currentStage_; // size=0, offset=100
	int stageRepeatCount_; // size=0, offset=104
	int stageTimeMultiplier_; // size=0, offset=108
	int timeLeft_; // size=0, offset=112
	int chaseStartTime_; // size=0, offset=116
	enum __108 wingmanStatus_; // size=4, offset=120
	int needPerp_; // size=0, offset=124
	int initialDirection_; // size=0, offset=128
	int initialMovement_; // size=0, offset=132
	int requestedDesiredSpeed_; // size=0, offset=136
};

struct Physics_tWheelAccStruct // hashcode: 0x8E0761F1 (dec: -1912118799)
{
	int acc; // size=0, offset=0
	int roadGrip; // size=0, offset=4
	int steeringAcc; // size=0, offset=8
	int steeringAngle; // size=0, offset=12
	struct coorddef velCap; // size=12, offset=16
	struct coorddef finalAcc; // size=12, offset=28
	int frontTire; // size=0, offset=40
	int skid; // size=0, offset=44
};

struct Draw_tVertex // hashcode: 0x78BD3B45 (dec: 2025667397)
{
	struct PCOORD16 sv; // size=8, offset=0
};

struct Draw_CarCache // hashcode: 0xEA76E5E7 (dec: -361306649)
{
	struct Draw_tCacheHeader head; // size=20, offset=0
	struct MATRIX matB; // size=32, offset=20
	int pad; // size=0, offset=52
	unsigned long *sub_ot; // size=0, offset=56
	int otz; // size=0, offset=60
	int sub_otz; // size=0, offset=64
	int bfct; // size=0, offset=68
	struct DR_MODE drawModeOn; // size=12, offset=72
	struct DR_MODE drawModeOff; // size=12, offset=84
	struct Draw_tPixMap *pmxStart; // size=16, offset=96
	struct Draw_tPixMap ePmx0; // size=16, offset=100
	struct Draw_tPixMap ePmx1; // size=16, offset=116
	int eAddZ; // size=0, offset=132
	int sub_otSize; // size=0, offset=136
	long color; // size=0, offset=140
	long eColor0; // size=0, offset=144
	long eColor1; // size=0, offset=148
	long eColor2; // size=0, offset=152
	struct VECTOR tv; // size=16, offset=156
	struct COORD16 vt0; // size=6, offset=172
	unsigned char u0; // size=0, offset=178
	unsigned char v0; // size=0, offset=179
	struct COORD16 vt1; // size=6, offset=180
	unsigned char u1; // size=0, offset=186
	unsigned char v1; // size=0, offset=187
	struct COORD16 vt2; // size=6, offset=188
	unsigned char u2; // size=0, offset=194
	unsigned char v2; // size=0, offset=195
	short dvx0; // size=0, offset=196
	short dvy0; // size=0, offset=198
	short dvx1; // size=0, offset=200
	short dvy1; // size=0, offset=202
	short dvx2; // size=0, offset=204
	short dvy2; // size=0, offset=206
	struct Draw_CarVertex tV[96]; // size=768, offset=208
	struct COORD16 vt3; // size=6, offset=976
	unsigned char u3; // size=0, offset=982
	unsigned char v3; // size=0, offset=983
	struct COORD16 vt4; // size=6, offset=984
	unsigned char u4; // size=0, offset=990
	unsigned char v4; // size=0, offset=991
	struct COORD16 vt5; // size=6, offset=992
	unsigned char u5; // size=0, offset=998
	unsigned char v5; // size=0, offset=999
	struct COORD16 vt6; // size=6, offset=1000
	unsigned char offsetU0; // size=0, offset=1006
	unsigned char offsetV0; // size=0, offset=1007
	struct COORD16 vt7; // size=6, offset=1008
	unsigned char offsetU1; // size=0, offset=1014
	unsigned char offsetV1; // size=0, offset=1015
	struct COORD16 vt8; // size=6, offset=1016
	unsigned char offsetU2; // size=0, offset=1022
	unsigned char offsetV2; // size=0, offset=1023
};

struct Transformer_zScene // hashcode: 0xFA5E92A4 (dec: -94465372)
{
	struct Transformer_zObj (*obj[57]); // size=228, offset=0
	struct Transformer_zOverlay overlay[90]; // size=360, offset=228
};

struct R3DCar_tEnvMapInfo // hashcode: 0x2CED996F (dec: 753768815)
{
	int eScaleX; // size=0, offset=0
	int eScaleY; // size=0, offset=4
	int rideHeight; // size=0, offset=8
	int upgradeHeight; // size=0, offset=12
};

struct POLY_F4 // hashcode: 0x85634BCF (dec: -2057090097)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	short x1; // size=0, offset=12
	short y1; // size=0, offset=14
	short x2; // size=0, offset=16
	short y2; // size=0, offset=18
	short x3; // size=0, offset=20
	short y3; // size=0, offset=22
};

struct POLY_FT4 // hashcode: 0xE7F9A0F5 (dec: -403070731)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char u0; // size=0, offset=12
	unsigned char v0; // size=0, offset=13
	unsigned short clut; // size=0, offset=14
	short x1; // size=0, offset=16
	short y1; // size=0, offset=18
	unsigned char u1; // size=0, offset=20
	unsigned char v1; // size=0, offset=21
	unsigned short tpage; // size=0, offset=22
	short x2; // size=0, offset=24
	short y2; // size=0, offset=26
	unsigned char u2; // size=0, offset=28
	unsigned char v2; // size=0, offset=29
	unsigned short pad1; // size=0, offset=30
	short x3; // size=0, offset=32
	short y3; // size=0, offset=34
	unsigned char u3; // size=0, offset=36
	unsigned char v3; // size=0, offset=37
	unsigned short pad2; // size=0, offset=38
};

struct DR_STP // hashcode: 0x81ACB820 (dec: -2119387104)
{
	unsigned long tag; // size=0, offset=0
	unsigned long code[2]; // size=8, offset=4
};

struct tControllerData // hashcode: 0x6C23A953 (dec: 1814276435)
{
	char steering[32]; // size=32, offset=0
	unsigned char gas[32]; // size=32, offset=32
	unsigned char brake[32]; // size=32, offset=64
	unsigned char states[32]; // size=32, offset=96
};

struct tReplayInterface // hashcode: 0x6E683700 (dec: 1852323584)
{
	int pause; // size=0, offset=0
	int speed; // size=0, offset=4
	int end; // size=0, offset=8
	int camera; // size=0, offset=12
	int selection; // size=0, offset=16
	int depressed; // size=0, offset=20
	int changeCamera; // size=0, offset=24
	int statsScreen; // size=0, offset=28
};

struct tReplayCameraModes // hashcode: 0xF3BA040F (dec: -205913073)
{
	int defaultCamera; // size=0, offset=0
	int timeCounter; // size=0, offset=4
	int cameraMode; // size=0, offset=8
	int cutToNextCamera; // size=0, offset=12
};

struct tReplayBuffer // hashcode: 0xA67045AE (dec: -1502591570)
{
	struct GameSetup_tData gameSetup; // size=2600, offset=0
	int size; // size=0, offset=2600
	char buffer[24576]; // size=24576, offset=2604
};

struct CSceneList // hashcode: 0x0A89C83D (dec: 176801853)
{
	int id_; // size=0, offset=0
	int numElements_; // size=0, offset=4
	int slice_; // size=0, offset=8
	int versionNumber_; // size=0, offset=12
};

struct Sim_tSimGlobalVar // hashcode: 0x2490F7BF (dec: 613480383)
{
	int gameStarted; // size=0, offset=0
	int gameTicks; // size=0, offset=4
	int time32Hz; // size=0, offset=8
	struct Sched_tSchedule *schedule64Hz; // size=24, offset=12
	struct Sched_tSchedule *schedule32Hz; // size=24, offset=16
	struct Sched_tSchedule *schedule32Hz2; // size=24, offset=20
};

struct Sim_tSimSystemVar // hashcode: 0xF169CF91 (dec: -244723823)
{
	int restartGame; // size=0, offset=0
	int endSimGame; // size=0, offset=4
	int pauseSim; // size=0, offset=8
	int keyRelease; // size=0, offset=12
	int quickPauseSim; // size=0, offset=16
	int goalClockTicks; // size=0, offset=20
	int currentClockTicks; // size=0, offset=24
};

struct __113 // hashcode: 0x6FD7D892 (dec: 1876416658)
{
	int copIndex; // size=0, offset=0
	int carIndex; // size=0, offset=4
};

struct AIHigh_BasicPerp_alt_definition_0002 // hashcode: 0xAC4FDCBC (dec: -1404052292)
{
	struct AIHigh_Base AIHigh_Base; // size=24, offset=0
	enum __112 pullOverMode_; // size=4, offset=24
	struct __113 positionVSCopList_[6]; // size=48, offset=28
	int copVSPositionList_[6]; // size=24, offset=76
	int beatingTicksLeft_; // size=0, offset=100
	int lastPullOverTime_; // size=0, offset=104
	struct Car_tObj *lastArrestingCop_; // size=2268, offset=108
	struct AICop_BasicPerpInfo basicPerpInfo_; // size=12, offset=112
};

struct AIHigh_BTC_HumanCop_alt_definition_0003 // hashcode: 0xC39FF815 (dec: -1012926443)
{
	struct AIHigh_BTC_Cop AIHigh_BTC_Cop; // size=100, offset=0
	int currentStage_; // size=0, offset=100
	int stageRepeatCount_; // size=0, offset=104
	int stageTimeMultiplier_; // size=0, offset=108
	int timeLeft_; // size=0, offset=112
	int chaseStartTime_; // size=0, offset=116
	enum __116 wingmanStatus_; // size=4, offset=120
	int needPerp_; // size=0, offset=124
	int initialDirection_; // size=0, offset=128
	int initialMovement_; // size=0, offset=132
	int requestedDesiredSpeed_; // size=0, offset=136
};

struct AIHigh_BTC_Cop_alt_definition_0002 // hashcode: 0x3E2B3FC3 (dec: 1043021763)
{
	struct AIHigh_BasicCop AIHigh_BasicCop; // size=88, offset=0
	struct AIHigh_BTC_Perp *perpTarget_; // size=136, offset=88
	int chaseIndex_; // size=0, offset=92
	enum __115 freezeMode_; // size=4, offset=96
};

struct AIHigh_BTC_HumanCop_alt_definition_0004 // hashcode: 0xD3B2CE4C (dec: -743256500)
{
	struct AIHigh_BTC_Cop AIHigh_BTC_Cop; // size=100, offset=0
	int currentStage_; // size=0, offset=100
	int stageRepeatCount_; // size=0, offset=104
	int stageTimeMultiplier_; // size=0, offset=108
	int timeLeft_; // size=0, offset=112
	int chaseStartTime_; // size=0, offset=116
	enum __116 wingmanStatus_; // size=4, offset=120
	int needPerp_; // size=0, offset=124
	int initialDirection_; // size=0, offset=128
	int initialMovement_; // size=0, offset=132
	int requestedDesiredSpeed_; // size=0, offset=136
};

struct PAD_COMMON_alt_definition_0005 // hashcode: 0xE90E4E05 (dec: -384938491)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __74 data; // size=6, offset=2
};

struct __77 // hashcode: 0x706E3719 (dec: 1886271257)
{
	char bActive; // size=0, offset=0
	char time; // size=0, offset=1
};

struct sim_queue // hashcode: 0x9F1249EA (dec: -1626191382)
{
	struct Input_tResults Buffer[2][32]; // size=256, offset=0
	enum VALIDITY Validity[2][32]; // size=256, offset=256
	int HeadTime; // size=0, offset=512
	int TailTime[2]; // size=8, offset=516
};

struct Souffle_tISouffle // hashcode: 0x0AB2262D (dec: 179447341)
{
	char type; // size=0, offset=0
	char id; // size=0, offset=1
	char wind; // size=0, offset=2
	char cycle; // size=0, offset=3
	int aspeed; // size=0, offset=4
	int angle; // size=0, offset=8
	struct coorddef source; // size=12, offset=12
	struct coorddef motion; // size=12, offset=24
	struct coorddef extramotion; // size=12, offset=36
	struct SVECTOR trans; // size=8, offset=48
	int rndpixmap; // size=0, offset=56
	int ground; // size=0, offset=60
	int colour; // size=0, offset=64
};

struct Stats_tPosition // hashcode: 0xE74C51F6 (dec: -414428682)
{
	int car; // size=0, offset=0
	int slice; // size=0, offset=4
	int sliceTime; // size=0, offset=8
	int isHuman; // size=0, offset=12
};

struct Trk_Material // hashcode: 0x3D2D869E (dec: 1026393758)
{
	short shapeIndex; // size=0, offset=0
	unsigned char flag; // size=0, offset=2
	unsigned char uvFlag; // size=0, offset=3
	unsigned char r; // size=0, offset=4
	unsigned char g; // size=0, offset=5
	unsigned char b; // size=0, offset=6
	char textureCount; // size=0, offset=7
	unsigned char interval; // size=0, offset=8
	char pad; // size=0, offset=9
};

struct TrackHeader // hashcode: 0xEC579AEE (dec: -329803026)
{
	int type; // size=0, offset=0
	int version; // size=0, offset=4
	int maxMetaChunkSize; // size=0, offset=8
	int maxGeomCollSize; // size=0, offset=12
	int maxFullSize; // size=0, offset=16
	int maxSplitSize; // size=0, offset=20
	int metaChunkCount; // size=0, offset=24
	int chunkCount; // size=0, offset=28
};

struct SaveSurface // hashcode: 0x3AA2E8C8 (dec: 983754952)
{
	short fCount; // size=0, offset=0
	short fMaxCount; // size=0, offset=2
	struct tSaveSurface *fStack; // size=8, offset=4
};

struct tBoundingSphere // hashcode: 0xF3BDF13D (dec: -205655747)
{
	struct COORD16 cp; // size=6, offset=0
	short radius; // size=0, offset=6
};

struct Track_MipMap // hashcode: 0x5AD11164 (dec: 1523650916)
{
	unsigned short code[2]; // size=4, offset=0
	int shapeParentIndex; // size=0, offset=4
	int mipMapIndex; // size=0, offset=8
};

struct Track_MultiPalette // hashcode: 0xD6F23F73 (dec: -688767117)
{
	unsigned char charcode[2]; // size=2, offset=0
	short palnum; // size=0, offset=2
	short origshapeindex; // size=0, offset=4
	short actualshapeindex; // size=0, offset=6
};

struct Track_tMaterialController // hashcode: 0x5A7FAEAB (dec: 1518317227)
{
	short type; // size=0, offset=0
	unsigned char textureMax; // size=0, offset=2
	char pad; // size=0, offset=3
	unsigned char uv0; // size=0, offset=4
	unsigned char uv1; // size=0, offset=5
	unsigned char uv2; // size=0, offset=6
	unsigned char uv3; // size=0, offset=7
	char textureCount; // size=0, offset=8
	unsigned char interval; // size=0, offset=9
	short pmxIndex; // size=0, offset=10
	struct Track_tMaterial *matPtr; // size=4, offset=12
};

struct tSkid // hashcode: 0xCA503077 (dec: -900714377)
{
	struct coorddef pt; // size=12, offset=0
	struct CVECTOR clr; // size=4, offset=12
	int type; // size=0, offset=16
	struct Skidmark_Segment *nseg; // size=28, offset=20
	int chunk; // size=0, offset=24
};

struct SNDSYSOPTS // hashcode: 0xF427CACA (dec: -198718774)
{
	struct SNDSYSCAP cap; // size=12, offset=0
	struct SNDSYSSET set; // size=44, offset=12
	struct SNDSYSVEC vec; // size=4, offset=56
};

struct SpuVolume // hashcode: 0xBE7EA924 (dec: -1098995420)
{
	short left; // size=0, offset=0
	short right; // size=0, offset=2
};

struct SpuExtAttr // hashcode: 0x20169849 (dec: 538351689)
{
	struct SpuVolume volume; // size=4, offset=0
	long reverb; // size=0, offset=4
	long mix; // size=0, offset=8
};

struct SpuStVoiceAttr // hashcode: 0x000D695F (dec: 878943)
{
	char status; // size=0, offset=0
	char pad1; // size=0, offset=1
	char pad2; // size=0, offset=2
	char pad3; // size=0, offset=3
	long last_size; // size=0, offset=4
	unsigned long buf_addr; // size=0, offset=8
	unsigned long data_addr; // size=0, offset=12
};

struct CarIO_textureInfo // hashcode: 0xB9DF383A (dec: -1176553414)
{
	char *tex; // size=0, offset=0
	char *pal; // size=0, offset=4
	int palShare; // size=0, offset=8
};

struct PAD_COMMON_alt_definition_0006 // hashcode: 0xF78390D8 (dec: -142372648)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0007 // hashcode: 0x945C99BD (dec: -1805870659)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct Input_tDeviceList // hashcode: 0x0109AA47 (dec: 17410631)
{
	char *devicename; // size=0, offset=0
	int (*devicefunc)(); // size=0, offset=4
	int (*startupfunc)(); // size=0, offset=8
};

struct __78 // hashcode: 0xD4ECD1BE (dec: -722677314)
{
	char bActive; // size=0, offset=0
	char time; // size=0, offset=1
};

struct PAD_COMMON_alt_definition_0008 // hashcode: 0x61366009 (dec: 1630953481)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct dflip // hashcode: 0x348EBB88 (dec: 881769352)
{
	struct DISPENV disp; // size=20, offset=0
	char *server; // size=0, offset=20
};

struct Draw_tView // hashcode: 0x66489A6A (dec: 1716034154)
{
	int otsize; // size=0, offset=0
	int membudget; // size=0, offset=4
	struct DRAWENV drawenv[2]; // size=184, offset=8
	unsigned long (*ot[2]); // size=8, offset=192
};

struct PAD_COMMON_alt_definition_0009 // hashcode: 0x86C74C1C (dec: -2033759204)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct POLY_FT3 // hashcode: 0x92543773 (dec: -1839974541)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char u0; // size=0, offset=12
	unsigned char v0; // size=0, offset=13
	unsigned short clut; // size=0, offset=14
	short x1; // size=0, offset=16
	short y1; // size=0, offset=18
	unsigned char u1; // size=0, offset=20
	unsigned char v1; // size=0, offset=21
	unsigned short tpage; // size=0, offset=22
	short x2; // size=0, offset=24
	short y2; // size=0, offset=26
	unsigned char u2; // size=0, offset=28
	unsigned char v2; // size=0, offset=29
	unsigned short pad1; // size=0, offset=30
};

struct POLY_G3 // hashcode: 0xAF8F9EBC (dec: -1349542212)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char r1; // size=0, offset=12
	unsigned char g1; // size=0, offset=13
	unsigned char b1; // size=0, offset=14
	unsigned char pad1; // size=0, offset=15
	short x1; // size=0, offset=16
	short y1; // size=0, offset=18
	unsigned char r2; // size=0, offset=20
	unsigned char g2; // size=0, offset=21
	unsigned char b2; // size=0, offset=22
	unsigned char pad2; // size=0, offset=23
	short x2; // size=0, offset=24
	short y2; // size=0, offset=26
};

struct DrawC_tEnvMap // hashcode: 0x18A9C40F (dec: 413778959)
{
	short slice; // size=0, offset=0
	short tex; // size=0, offset=2
	short extra; // size=0, offset=4
};

struct PAD_COMMON_alt_definition_0010 // hashcode: 0xA79F2625 (dec: -1482742235)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct POLY_GT3 // hashcode: 0xD34DD8E9 (dec: -749872919)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char u0; // size=0, offset=12
	unsigned char v0; // size=0, offset=13
	unsigned short clut; // size=0, offset=14
	unsigned char r1; // size=0, offset=16
	unsigned char g1; // size=0, offset=17
	unsigned char b1; // size=0, offset=18
	unsigned char p1; // size=0, offset=19
	short x1; // size=0, offset=20
	short y1; // size=0, offset=22
	unsigned char u1; // size=0, offset=24
	unsigned char v1; // size=0, offset=25
	unsigned short tpage; // size=0, offset=26
	unsigned char r2; // size=0, offset=28
	unsigned char g2; // size=0, offset=29
	unsigned char b2; // size=0, offset=30
	unsigned char p2; // size=0, offset=31
	short x2; // size=0, offset=32
	short y2; // size=0, offset=34
	unsigned char u2; // size=0, offset=36
	unsigned char v2; // size=0, offset=37
	unsigned short pad2; // size=0, offset=38
};

struct DR_TWIN // hashcode: 0x7ABCAAFD (dec: 2059184893)
{
	unsigned long tag; // size=0, offset=0
	unsigned long code[2]; // size=8, offset=4
};

struct Trk_Line // hashcode: 0xFE4DBE6D (dec: -28459411)
{
	unsigned char firstPoint; // size=0, offset=0
	unsigned char slice; // size=0, offset=1
	unsigned char type; // size=0, offset=2
	unsigned char quadIndex; // size=0, offset=3
};

struct Draw_tGiveShelbyMoreCache // hashcode: 0x4B743C45 (dec: 1265908805)
{
	struct Draw_tCacheHeader head; // size=20, offset=0
	struct MATRIX matB; // size=32, offset=20
	struct MATRIX matNight; // size=32, offset=52
	struct MATRIX matCop; // size=32, offset=84
	struct MATRIX identMat; // size=32, offset=116
	int otz; // size=0, offset=148
	struct VECTOR tVn0; // size=16, offset=152
	struct VECTOR tVn1; // size=16, offset=168
	struct VECTOR tVn2; // size=16, offset=184
	struct VECTOR tVn3; // size=16, offset=200
	short light; // size=0, offset=216
	short doublelayer; // size=0, offset=218
	short startfog; // size=0, offset=220
	short distfog; // size=0, offset=222
	struct CCOORD16 *vertices; // size=8, offset=224
	unsigned char chunkInd; // size=0, offset=228
	unsigned char rezInd; // size=0, offset=229
	unsigned char garb3; // size=0, offset=230
	unsigned char quadCount; // size=0, offset=231
	void *quads; // size=0, offset=232
	int offset; // size=0, offset=236
	struct Track_tMaterial *materials; // size=4, offset=240
	struct COORD16 trans; // size=6, offset=244
	struct Track_tArtresource *artInfo; // size=24, offset=252
	struct Trk_NewStrip *stripPtr; // size=4, offset=256
	short numStrips; // size=0, offset=260
	char nightFlags; // size=0, offset=262
	char zeroGTETransFlag; // size=0, offset=263
	short night_ZNear; // size=0, offset=264
	unsigned char night_XDistShift; // size=0, offset=266
	unsigned char night_ZDistShift; // size=0, offset=267
	unsigned char night_DrawLightning; // size=0, offset=268
	unsigned char night_LightningType; // size=0, offset=269
	unsigned char fogstate; // size=0, offset=270
	unsigned char padnight; // size=0, offset=271
	struct POLY_GT4 GT4Prim; // size=52, offset=272
	unsigned short tpage; // size=0, offset=324
	unsigned short clut; // size=0, offset=326
	short offsubdivid; // size=0, offset=328
	unsigned char code; // size=0, offset=330
	unsigned char magiknum; // size=0, offset=331
	struct Draw_SVertex v0; // size=16, offset=332
	struct Draw_SVertex v1; // size=16, offset=348
	struct Draw_SVertex v2; // size=16, offset=364
	struct Draw_SVertex v3; // size=16, offset=380
	struct Draw_SubdivStruct div; // size=240, offset=396
};

struct Draw_tCtrlSkidmark // hashcode: 0xB30E9E81 (dec: -1290887551)
{
	struct matrixtdef m; // size=36, offset=0
	struct coorddef t; // size=12, offset=36
	int count; // size=0, offset=48
	struct Skidmark_Chunk *smp; // size=688, offset=52
};

struct ChunkObjectInfo // hashcode: 0xC1E70DB5 (dec: -1041822283)
{
	struct Trk_SimObject *simObjs; // size=20, offset=0
	struct Group *objInstanceBuf; // size=4, offset=4
	int doFrustumClip; // size=0, offset=8
	int zClipSq; // size=0, offset=12
	int offset; // size=0, offset=16
	short *visList; // size=0, offset=20
};

struct PAD_COMMON_alt_definition_0011 // hashcode: 0x0E106A83 (dec: 235956867)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union {
		struct PAD_PSX standard; // size=6, offset=0
		struct PAD_NEGCON negcon; // size=6, offset=0
		struct PAD_MOUSE mouse; // size=6, offset=0
		struct PAD_ANALOG analog; // size=6, offset=0
	} data; // size=6, offset=2, found in object files: Draw2.obj, Draw2.obj
};

struct DRAW2_70fake // hashcode: 0x4BA35767 (dec: 1268995943)
{
	char bActive; // size=0, offset=0
	char time; // size=0, offset=1
};

struct Force_tGlobal // hashcode: 0x051A3947 (dec: 85604679)
{
	unsigned char active; // size=0, offset=0
	unsigned char high; // size=0, offset=1
	unsigned char low; // size=0, offset=2
	unsigned char jolt; // size=0, offset=3
	unsigned char time; // size=0, offset=4
	unsigned char fade; // size=0, offset=5
	unsigned char actuator[2]; // size=2, offset=6
};

struct charactertbl // hashcode: 0xE65E9D4C (dec: -430006964)
{
	unsigned char index[2]; // size=2, offset=0
	unsigned char width; // size=0, offset=2
	unsigned char height; // size=0, offset=3
	unsigned char u[2]; // size=2, offset=4
	unsigned char v[2]; // size=2, offset=6
	char advance; // size=0, offset=8
	char xoffset; // size=0, offset=9
	char yoffset; // size=0, offset=10
};

struct SPRT // hashcode: 0x2FC6A19C (dec: 801546652)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char u0; // size=0, offset=12
	unsigned char v0; // size=0, offset=13
	unsigned short clut; // size=0, offset=14
	short w; // size=0, offset=16
	short h; // size=0, offset=18
};

struct PAD_COMMON_alt_definition_0012 // hashcode: 0xB748CB46 (dec: -1219966138)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __69 data; // size=6, offset=2
};

struct __72 // hashcode: 0xD18ECFDE (dec: -779169826)
{
	char bActive; // size=0, offset=0
	char time; // size=0, offset=1
};

struct cluttbl // hashcode: 0x03F03C15 (dec: 66075669)
{
	unsigned int type; // size=8, offset=0
	int next; // size=24, offset=8
	short width; // size=0, offset=4
	short height; // size=0, offset=6
	short centerx; // size=0, offset=8
	short centery; // size=0, offset=10
	short shapex; // size=0, offset=12
	short shapey; // size=0, offset=14
	short data[16]; // size=32, offset=16
};

struct PAD_COMMON_alt_definition_0013 // hashcode: 0x75763FD9 (dec: 1970683865)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct POLY_G4 // hashcode: 0x9CF427C8 (dec: -1661720632)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char r1; // size=0, offset=12
	unsigned char g1; // size=0, offset=13
	unsigned char b1; // size=0, offset=14
	unsigned char pad1; // size=0, offset=15
	short x1; // size=0, offset=16
	short y1; // size=0, offset=18
	unsigned char r2; // size=0, offset=20
	unsigned char g2; // size=0, offset=21
	unsigned char b2; // size=0, offset=22
	unsigned char pad2; // size=0, offset=23
	short x2; // size=0, offset=24
	short y2; // size=0, offset=26
	unsigned char r3; // size=0, offset=28
	unsigned char g3; // size=0, offset=29
	unsigned char b3; // size=0, offset=30
	unsigned char pad3; // size=0, offset=31
	short x3; // size=0, offset=32
	short y3; // size=0, offset=34
};

struct LINE_G2 // hashcode: 0x97BB3919 (dec: -1749337831)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	unsigned char r1; // size=0, offset=12
	unsigned char g1; // size=0, offset=13
	unsigned char b1; // size=0, offset=14
	unsigned char p1; // size=0, offset=15
	short x1; // size=0, offset=16
	short y1; // size=0, offset=18
};

struct Draw_FlareCache // hashcode: 0x577B6B48 (dec: 1467706184)
{
	struct Draw_tCacheHeader head; // size=20, offset=0
};

struct FLARE_DEF // hashcode: 0xD28E2716 (dec: -762435818)
{
	struct DVECTOR pos[2]; // size=8, offset=0
	struct DVECTOR oldpos[2]; // size=8, offset=8
	unsigned short screenData[2][5][5]; // size=100, offset=16
	int size; // size=0, offset=116
	struct FLARE_PIECE_DEF *piece; // size=16, offset=120
	char isDrawn[2]; // size=2, offset=124
};

struct Flare_tInfo // hashcode: 0x299564CE (dec: 697656526)
{
	unsigned long chalo; // size=0, offset=0
	unsigned long cbeam; // size=0, offset=4
	int scale; // size=0, offset=8
	int flags; // size=0, offset=12
};

struct TILE_1 // hashcode: 0x84601D48 (dec: -2074075832)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
};

struct Draw_HorizonCache // hashcode: 0xED90952C (dec: -309291732)
{
	struct Draw_tCacheHeader head; // size=20, offset=0
	struct DVECTOR scptTop[17]; // size=68, offset=20
	struct DVECTOR scptMidBot[17]; // size=68, offset=88
	struct DVECTOR scptPmxLeft[17]; // size=68, offset=156
	struct DVECTOR scptPmxRight[17]; // size=68, offset=224
	int vertexTop[18]; // size=72, offset=292
};

struct Draw_SkyCache // hashcode: 0xC8DA9B95 (dec: -925197419)
{
	struct Draw_tCacheHeader head; // size=20, offset=0
	struct DVECTOR pSkyMesh[85]; // size=340, offset=20
	int pSkyZ[85]; // size=340, offset=360
};

struct tHrz_LightningFork // hashcode: 0x0E1FC417 (dec: 236962839)
{
	struct DVECTOR pos; // size=4, offset=0
	char pmxIndex; // size=0, offset=4
};

struct tHrz_Lightning // hashcode: 0x0790BE9F (dec: 126926495)
{
	struct tHrz_LightningFork forks[16]; // size=96, offset=0
	int brightness; // size=0, offset=96
	char numForks; // size=0, offset=100
};

struct POLY_F3 // hashcode: 0x7738469A (dec: 2000176794)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	short x1; // size=0, offset=12
	short y1; // size=0, offset=14
	short x2; // size=0, offset=16
	short y2; // size=0, offset=18
};

struct tSmallCoordXY // hashcode: 0x4612359A (dec: 1175598490)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
};

struct tBTCPerpInfo // hashcode: 0xA0FA7475 (dec: -1594198923)
{
	char name[8]; // size=8, offset=0
	int time; // size=0, offset=8
	void * caught; // size=0, offset=12
};

struct PAD_COMMON_alt_definition_0014 // hashcode: 0xA355220C (dec: -1554701812)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct tCompRGB // hashcode: 0x0CFD4CF8 (dec: 217926904)
{
	char r; // size=0, offset=0
	char g; // size=0, offset=1
	char b; // size=0, offset=2
};

struct tNightInitCache // hashcode: 0x2652AC25 (dec: 642952229)
{
	struct tCompRGB table[257]; // size=771, offset=0
};

struct CARD_FILE_HEADER // hashcode: 0xCDFFDE08 (dec: -838869496)
{
	char magic[2]; // size=2, offset=0
	char type; // size=0, offset=2
	char numslots; // size=0, offset=3
	char documentname[64]; // size=64, offset=4
	char pad[28]; // size=28, offset=68
	char clut[32]; // size=32, offset=96
	char icon[3][128]; // size=384, offset=128
};

struct eacelement // hashcode: 0xDDFFA16F (dec: -570449553)
{
	struct eacelement *link; // size=4, offset=0
};

struct PAD_COMMON_alt_definition_0015 // hashcode: 0xF5AC05E8 (dec: -173275672)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0016 // hashcode: 0xEB59C7D9 (dec: -346437671)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0017 // hashcode: 0xC9A6CD2C (dec: -911815380)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0018 // hashcode: 0x046E6D79 (dec: 74345849)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct sfxsouffle // hashcode: 0x5F09A9A6 (dec: 1594468774)
{
	struct Draw_tPixMap pmx; // size=16, offset=0
	struct SVECTOR v0; // size=8, offset=16
	struct SVECTOR v1; // size=8, offset=24
	struct SVECTOR v2; // size=8, offset=32
	struct SVECTOR v3; // size=8, offset=40
};

struct Sfx_tCache // hashcode: 0x3589966A (dec: 898209386)
{
	struct Draw_tCacheHeader head; // size=20, offset=0
	int otz; // size=0, offset=20
};

struct Texture_pal8bit // hashcode: 0x51090D7B (dec: 1359547771)
{
	int x; // size=0, offset=0
	int y; // size=0, offset=4
	short pal[256]; // size=512, offset=8
};

struct CSVECTOR // hashcode: 0x820D567F (dec: -2113055105)
{
	int r; // size=0, offset=0
	int g; // size=0, offset=4
	int b; // size=0, offset=8
};

struct TP_ZPaletteSystem // hashcode: 0xA3B17FA1 (dec: -1548648543)
{
	int numdepthclut; // size=0, offset=0
};

struct FogKey // hashcode: 0x1CE40446 (dec: 484705350)
{
	short distance; // size=0, offset=0
	short slice; // size=0, offset=2
	struct FogKey *next; // size=12, offset=4
	struct FogKey *prev; // size=12, offset=8
};

struct CTrackSpecHeader // hashcode: 0x526F146C (dec: 1383011436)
{
	int version; // size=0, offset=0
	int num_spec; // size=0, offset=4
};

struct CTrackSpec // hashcode: 0xE7CA135D (dec: -406187171)
{
	short fogstate; // size=0, offset=0
	short weatherstate; // size=0, offset=2
	short horizonstate; // size=0, offset=4
	short skystate; // size=0, offset=6
	short nightstate; // size=0, offset=8
	short depthcuestate; // size=0, offset=10
	short worldcolorstate; // size=0, offset=12
	short pad0; // size=0, offset=14
	struct CFogSpec fogspec; // size=16, offset=16
	struct CWeatherSpec weatherspec; // size=8, offset=32
	struct CHorizonSpec horizonspec; // size=48, offset=40
	struct CSkySpec skyspec; // size=148, offset=88
	struct CNightSpec nightspec; // size=4, offset=236
	struct CDepthCueSpec depthcuespec; // size=8, offset=240
	struct CWorldColor worldcolorspec; // size=16, offset=248
};

struct PAD_COMMON_alt_definition_0019 // hashcode: 0x72C51F0D (dec: 1925521165)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct Weather_tSys // hashcode: 0xE3DA5F98 (dec: -472227944)
{
	int num[2]; // size=8, offset=0
	struct SVECTOR velocity; // size=8, offset=8
	long hdist; // size=0, offset=16
	short znear; // size=0, offset=20
	short zfar; // size=0, offset=22
	short length; // size=0, offset=24
	short bottom; // size=0, offset=26
	short top; // size=0, offset=28
	short height; // size=0, offset=30
	short width; // size=0, offset=32
};

struct Weather_tSplatInfo // hashcode: 0xFAA1EF8C (dec: -90050676)
{
	struct DVECTOR pos; // size=4, offset=0
	int startTick; // size=0, offset=4
};

struct PAD_COMMON_alt_definition_0020 // hashcode: 0xE98E9516 (dec: -376531690)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct DR_AREA // hashcode: 0x4EF03AA7 (dec: 1324366503)
{
	unsigned long tag; // size=0, offset=0
	unsigned long code[2]; // size=8, offset=4
};

struct tMenuCommand // hashcode: 0xCC182F5F (dec: -870830241)
{
	enum tMenuCommandType type; // size=4, offset=0
	struct tMenu *nextMenu; // size=0, offset=4
};

struct tListIteratorRangeIndexed // hashcode: 0x9B76C6DB (dec: -1686714661)
{
	struct tListIteratorRange tListIteratorRange; // size=16, offset=0
	char *fIndex; // size=0, offset=16
};

struct tMenuItemLeftRightChoice // hashcode: 0xDE82E9F1 (dec: -561845775)
{
	struct tMenuItemInteractive tMenuItemInteractive; // size=28, offset=0
	struct tListIterator *fData; // size=16, offset=28
};

struct tMenuItemLeftRightSlider // hashcode: 0xFED545F4 (dec: -19577356)
{
	struct tMenuItemInteractive tMenuItemInteractive; // size=28, offset=0
	struct tListIterator *fData; // size=16, offset=28
	short fX; // size=0, offset=32
	short fY; // size=0, offset=34
	short fWidth; // size=0, offset=36
	short fHeight; // size=0, offset=38
};

struct tMenuItemGoToMenuButton // hashcode: 0xB3F2D0C8 (dec: -1275932472)
{
	struct tMenuItemInteractive tMenuItemInteractive; // size=28, offset=0
	void (*fOnButtonPress)(); // size=0, offset=28
};

struct tDrawShapeExtended // hashcode: 0x1B18D111 (dec: 454611217)
{
	short flip_axis; // size=0, offset=0
	int tint[4]; // size=16, offset=4
	struct tTexture_ShapeInfo *custom_shapes; // size=32, offset=20
};

struct tDialogHelp // hashcode: 0x9C33DD4C (dec: -1674322612)
{
	struct tDialogBase tDialogBase; // size=144, offset=0
	short variant; // size=0, offset=144
	char (*text[7]); // size=28, offset=148
	int cont[7]; // size=28, offset=176
	short numItems; // size=0, offset=204
	short helpcontrollers; // size=0, offset=206
	short lefttext; // size=0, offset=208
};

struct tDialogMessageStringWithTimeout // hashcode: 0x52BA392E (dec: 1387936046)
{
	struct tDialogMessageString tDialogMessageString; // size=152, offset=0
};

struct tDialogNoInputMessage // hashcode: 0x51082AA3 (dec: 1359489699)
{
	struct tDialogMessageString tDialogMessageString; // size=152, offset=0
};

struct tFEApplication // hashcode: 0xF960701A (dec: -111120358)
{
	unsigned int fCurrentMusic; // size=0, offset=0
	struct tMenu (*fCurrentMenu[2]); // size=8, offset=4
	struct tScreen (*fCurrentScreen[2]); // size=8, offset=12
	struct tMenu (*fTransitionToMenu[2]); // size=8, offset=20
	struct tScreen (*fTransitionToScreen[2]); // size=8, offset=28
	struct tMenu (*fParentMenu[2]); // size=8, offset=36
	struct tDialogMessageString messagePopup; // size=152, offset=44
	struct tMenu (*backList[2][16]); // size=128, offset=196
	int backDepth[2]; // size=8, offset=324
	enum tInputKeyType fLastKeyPressed[2]; // size=8, offset=332
	short fYOffset; // size=0, offset=340
	struct tDialogHelp helpPopup; // size=212, offset=344
	char fPlayer; // size=0, offset=556
	char fInputPlayer; // size=0, offset=557
	void * waitingForOtherPlayer[2]; // size=8, offset=560
	struct tDialogMessageStringWithTimeout MemCardDialog; // size=152, offset=568
	struct tDialogNoInputMessage NoInputMemCardDialog; // size=152, offset=720
	void * gotName[2]; // size=8, offset=872
	void * needName[2]; // size=8, offset=880
	int speechToPlay[2]; // size=8, offset=888
};

struct tMenuItemGoToMenuNFS4Button // hashcode: 0xFB2679EB (dec: -81364501)
{
	struct tMenuItemGoToMenuButton tMenuItemGoToMenuButton; // size=32, offset=0
	int fOrdinalPos; // size=0, offset=32
	short fOffset; // size=0, offset=36
	short fTransitionVal; // size=0, offset=38
	short fTransitionSpeed; // size=0, offset=40
	short fEnabledTransitionVal; // size=0, offset=42
};

struct tMenuItemNFS4LeftRightChoice // hashcode: 0xB201B90E (dec: -1308509938)
{
	struct tMenuItemLeftRightChoice tMenuItemLeftRightChoice; // size=32, offset=0
	short fOffset; // size=0, offset=32
	short fTransitionVal; // size=0, offset=34
	short fTransitionSpeed; // size=0, offset=36
	short fEnabledTransitionVal; // size=0, offset=38
};

struct tBlankMenuItemNFS4LeftRightChoice // hashcode: 0x958386DE (dec: -1786542370)
{
	struct tMenuItemNFS4LeftRightChoice tMenuItemNFS4LeftRightChoice; // size=40, offset=0
};

struct tMenuItemOptionsLeftRightChoice // hashcode: 0xEF9FC2AF (dec: -274742609)
{
	struct tMenuItemLeftRightChoice tMenuItemLeftRightChoice; // size=32, offset=0
};

struct tMenuItemOptionsTwoItemChoice // hashcode: 0xD16D9A34 (dec: -781346252)
{
	struct tMenuItemLeftRightChoice tMenuItemLeftRightChoice; // size=32, offset=0
	short fOnOffFade; // size=0, offset=32
};

struct tMenuNFS4 // hashcode: 0x58DD30FE (dec: 1490891006)
{
	struct tMenu tMenu; // size=108, offset=0
	void * fInItemTransition; // size=0, offset=108
	void * fInMenuTransition; // size=0, offset=112
	short fTransitionVal; // size=0, offset=116
	char fTransitionDirection; // size=0, offset=118
	char fLastItem; // size=0, offset=119
	char fNumItems; // size=0, offset=120
};

struct tMenuNFS4TwoPlayer // hashcode: 0xE62156C0 (dec: -434022720)
{
	struct tMenuNFS4 tMenuNFS4; // size=124, offset=0
};

struct tMenuNFS4Bottom // hashcode: 0x45D26EA8 (dec: 1171418792)
{
	struct tMenuNFS4 tMenuNFS4; // size=124, offset=0
};

struct tMenuBlank // hashcode: 0x42520301 (dec: 1112670977)
{
	struct tMenuNFS4 tMenuNFS4; // size=124, offset=0
};

struct tMenuOptions // hashcode: 0x611657F5 (dec: 1628854261)
{
	struct tMenuNFS4 tMenuNFS4; // size=124, offset=0
	unsigned long fMenuEnterTicks; // size=0, offset=124
	short fPlayer; // size=0, offset=128
};

struct tMenuItemLeftRightFade // hashcode: 0xA254691D (dec: -1571526371)
{
	struct tMenuItemLeftRightChoice tMenuItemLeftRightChoice; // size=32, offset=0
	short fFadeVal; // size=0, offset=32
	short fFadeDir; // size=0, offset=34
	void * fInTransition; // size=0, offset=36
	int flareextra; // size=0, offset=40
};

struct tOptionsMenu // hashcode: 0x2CA46D2B (dec: 748973355)
{
	struct tMenu tMenu; // size=108, offset=0
	void * fInMenuTransition; // size=0, offset=108
	char fTransitionDirection; // size=0, offset=112
	short fPrevItem; // size=0, offset=114
	int fScreenFade; // size=0, offset=116
	int fFirstFrame; // size=0, offset=120
	int fNumFrames; // size=0, offset=124
};

struct tInsideBoxMenu // hashcode: 0x40284A06 (dec: 1076382214)
{
	struct tMenu tMenu; // size=108, offset=0
	short fPrevItem; // size=0, offset=108
	short fMoving; // size=0, offset=110
	short fMovingDir; // size=0, offset=112
};

struct tMenuItemSlidingMenu // hashcode: 0xD09D814D (dec: -794984115)
{
	struct tMenuItem tMenuItem; // size=28, offset=0
	struct tInsideBoxMenu *currMenu; // size=116, offset=28
	struct tInsideBoxMenu *nextMenu; // size=116, offset=32
	short fWidth; // size=0, offset=36
	short fHeight; // size=0, offset=38
	short fOpenHeight; // size=0, offset=40
	short fSlideOffset; // size=0, offset=42
	short fFadeVal; // size=0, offset=44
	short fFadeDir; // size=0, offset=46
	void * fInTransition; // size=0, offset=48
	void * fTransitioningOut; // size=0, offset=52
	void * fClosing; // size=0, offset=56
	short fDiffX; // size=0, offset=60
	short fDiffY; // size=0, offset=62
	void * fFillback; // size=0, offset=64
};

struct tMenuItemSlidingActivated // hashcode: 0x8AA2D35D (dec: -1969040547)
{
	struct tMenuItemSlidingMenu tMenuItemSlidingMenu; // size=68, offset=0
	void * fActive; // size=0, offset=68
};

struct tMenuItemDisplayLeftRightChoice // hashcode: 0x27DE2956 (dec: 668870998)
{
	struct tMenuItemLeftRightFade tMenuItemLeftRightFade; // size=44, offset=0
};

struct tMenuItemOnOffLeftRightChoice // hashcode: 0x873E1981 (dec: -2025973375)
{
	struct tMenuItemLeftRightFade tMenuItemLeftRightFade; // size=44, offset=0
	short fOnFade; // size=0, offset=44
};

struct tMenuItemLeftRightAudioSlider // hashcode: 0xC910237E (dec: -921689218)
{
	struct tMenuItemLeftRightSlider tMenuItemLeftRightSlider; // size=40, offset=0
	short fFadeVal; // size=0, offset=40
	short fFadeDir; // size=0, offset=42
	void * fInTransition; // size=0, offset=44
	short fAudioArt; // size=0, offset=48
	int flareextra; // size=0, offset=52
};

struct tInsideBoxSongMenu // hashcode: 0x109325BF (dec: 278078911)
{
	struct tInsideBoxMenu tInsideBoxMenu; // size=116, offset=0
	short fOnOffFade[5]; // size=10, offset=116
	short fSelFade[5]; // size=10, offset=126
};

struct tMenuItemControllerLeftRightChoice // hashcode: 0xBF18FE04 (dec: -1088881148)
{
	struct tMenuItemLeftRightFade tMenuItemLeftRightFade; // size=44, offset=0
};

struct tInsideBoxLeftRightSlider // hashcode: 0x53B10E36 (dec: 1404112438)
{
	struct tMenuItemLeftRightSlider tMenuItemLeftRightSlider; // size=40, offset=0
};

struct tInsideBoxTwoWaySlider // hashcode: 0xB10DF754 (dec: -1324484780)
{
	struct tMenuItemLeftRightSlider tMenuItemLeftRightSlider; // size=40, offset=0
	short fType; // size=0, offset=40
	void * fActive; // size=0, offset=44
};

struct tUserNameMenuItem // hashcode: 0xB3072C80 (dec: -1291375488)
{
	struct tMenuItem tMenuItem; // size=28, offset=0
	char *fData; // size=0, offset=28
	short fMaxStringLength; // size=0, offset=32
	short fCurrentColumn; // size=0, offset=34
	short fCurrentRow; // size=0, offset=36
	char fRowList[10][9]; // size=90, offset=38
	short fPlayer; // size=0, offset=128
	short fFadeVal; // size=0, offset=130
	short fFadeDir; // size=0, offset=132
	void * fInTransition; // size=0, offset=136
};

struct tMenuItemGoToMenuButtonFade // hashcode: 0xB74F1ADE (dec: -1219552546)
{
	struct tMenuItemGoToMenuButton tMenuItemGoToMenuButton; // size=32, offset=0
	short fFadeVal; // size=0, offset=32
	short fFadeDir; // size=0, offset=34
	void * fInTransition; // size=0, offset=36
	short fEnableVal; // size=0, offset=40
};

struct tMemoryCardMenuItem // hashcode: 0x195317D8 (dec: 424875992)
{
	struct tMenuItemGoToMenuButtonFade tMenuItemGoToMenuButtonFade; // size=44, offset=0
};

struct tBlankMenuItemGoToMenuNFS4Button // hashcode: 0x8F54CA90 (dec: -1890268528)
{
	struct tMenuItemGoToMenuNFS4Button tMenuItemGoToMenuNFS4Button; // size=44, offset=0
};

struct tInsideBoxControllerLeftRightSlider // hashcode: 0x097ED6F5 (dec: 159307509)
{
	struct tInsideBoxLeftRightSlider tInsideBoxLeftRightSlider; // size=40, offset=0
};

struct tSaveCarInfo // hashcode: 0xC98739D6 (dec: -913884714)
{
	struct tOwnedCarInfo fSaveInfo[32]; // size=128, offset=0
	unsigned char fSaveAvailable[48]; // size=48, offset=128
	unsigned char fSaveViewable[48]; // size=48, offset=176
};

struct tListIteratorCar // hashcode: 0x894C636E (dec: -1991482514)
{
	struct tListIterator tListIterator; // size=16, offset=0
	int fCarListFilter; // size=0, offset=16
	struct tCarManager *fCarManager; // size=908, offset=20
	enum tCarNameLength fNameLength; // size=4, offset=24
};

struct tListIteratorCarColor // hashcode: 0x6AD9764B (dec: 1792636491)
{
	struct tListIterator tListIterator; // size=16, offset=0
	char *fPlayer; // size=0, offset=16
	char *fPlayerCar; // size=0, offset=20
	int fIndexSize; // size=0, offset=24
	struct tCarManager *fCarManager; // size=908, offset=28
};

struct tSaveTrackInfo // hashcode: 0x3084727A (dec: 813986426)
{
	unsigned char fTrackActivated[16]; // size=16, offset=0
};

struct tListIteratorTrack // hashcode: 0xFED3A218 (dec: -19684840)
{
	struct tListIteratorIndexed tListIteratorIndexed; // size=20, offset=0
	struct tTrackManager *fTrackManager; // size=136, offset=20
};

struct tSaveTournament // hashcode: 0xCF1A93AC (dec: -820341844)
{
	long fSaveMoney; // size=0, offset=0
	unsigned char fSaveTier; // size=0, offset=4
	unsigned char fSaveTournament; // size=0, offset=5
	unsigned char fSaveTrack; // size=0, offset=6
	unsigned char fSaveNumRacers; // size=0, offset=7
	struct tCompetitor fSaveCompetitors[6]; // size=96, offset=8
	unsigned char fSaveBestPlacement[64]; // size=64, offset=104
	short fSaveTierFinishPrize[4]; // size=8, offset=168
};

struct tListIteratorTournament // hashcode: 0x623531A2 (dec: 1647653282)
{
	struct tListIterator tListIterator; // size=16, offset=0
	struct tTournamentManager *fTournamentManager; // size=644, offset=16
};

struct tTVConfig // hashcode: 0xA2637158 (dec: -1570541224)
{
	enum tTVState state; // size=4, offset=0
	short transition; // size=0, offset=4
	unsigned short destBrightness; // size=0, offset=6
	unsigned short flags; // size=0, offset=8
	short fxWide; // size=0, offset=10
	short fxThin; // size=0, offset=12
	int tint; // size=0, offset=16
	short x; // size=0, offset=20
	short y; // size=0, offset=22
	short w; // size=0, offset=24
	short h; // size=0, offset=26
	unsigned char u; // size=0, offset=28
	unsigned char v; // size=0, offset=29
	unsigned char uw; // size=0, offset=30
	unsigned char vh; // size=0, offset=31
	unsigned char shapeType; // size=0, offset=32
	unsigned short clut; // size=0, offset=34
	unsigned short tpage; // size=0, offset=36
	unsigned short shapex; // size=0, offset=38
	unsigned short shapey; // size=0, offset=40
	unsigned short clutID; // size=0, offset=42
	unsigned short flip_axis; // size=0, offset=44
};

struct tVideoTransition // hashcode: 0x9DB0C8B7 (dec: -1649358665)
{
	enum tScreenMainState state; // size=4, offset=0
	unsigned short flags; // size=0, offset=4
	unsigned char u; // size=0, offset=6
	unsigned char v; // size=0, offset=7
	unsigned char uw; // size=0, offset=8
	unsigned char vh; // size=0, offset=9
	unsigned short clut; // size=0, offset=10
	unsigned short tpage; // size=0, offset=12
	unsigned int tint; // size=0, offset=16
	short bright; // size=0, offset=20
};

struct tVideo // hashcode: 0x7F753C1F (dec: 2138389535)
{
	char x; // size=0, offset=0
	char y; // size=0, offset=1
	char width; // size=0, offset=2
	char height; // size=0, offset=3
	char tileWidth; // size=0, offset=4
	char tileHeight; // size=0, offset=5
	char deltaX; // size=0, offset=6
	char deltaY; // size=0, offset=7
};

struct FE3d_zUV // hashcode: 0x36126E36 (dec: 907177526)
{
	unsigned char u; // size=0, offset=0
	unsigned char v; // size=0, offset=1
};

struct FE3d_zFacet // hashcode: 0x56DB42C1 (dec: 1457210049)
{
	unsigned short vertexId0; // size=0, offset=0
	unsigned short vertexId1; // size=0, offset=2
	unsigned short vertexId2; // size=0, offset=4
	unsigned short uvId0; // size=0, offset=6
	unsigned short uvId1; // size=0, offset=8
	unsigned short uvId2; // size=0, offset=10
	struct SVECTOR normal[3]; // size=24, offset=12
	struct CVECTOR color; // size=4, offset=36
	unsigned char flag; // size=0, offset=40
	unsigned char pad1; // size=0, offset=41
	unsigned char pad2; // size=0, offset=42
	unsigned char pad3; // size=0, offset=43
};

struct FE3d_zObj // hashcode: 0x3522DEBC (dec: 891477692)
{
	int numVertex; // size=0, offset=0
	int numUV; // size=0, offset=4
	int numFacet; // size=0, offset=8
	unsigned char textureId; // size=0, offset=12
	unsigned char textureWidth; // size=0, offset=13
	unsigned char textureHeight; // size=0, offset=14
	unsigned char pad1; // size=0, offset=15
	struct COORD16 *vertex; // size=6, offset=16
	struct FE3d_zUV *uv; // size=2, offset=20
	struct COORD16 *Nvertex; // size=6, offset=24
	struct FE3d_zFacet *facet; // size=44, offset=28
};

struct tScreenUserName // hashcode: 0x26A2A706 (dec: 648193798)
{
	struct tScreen tScreen; // size=100, offset=0
	struct tOptionsMenu *callingMenu; // size=128, offset=100
	short fTextFade; // size=0, offset=104
	void * fInTransition; // size=0, offset=108
	char fRowList[10][9]; // size=90, offset=112
};

struct tScreenTournamentStandings // hashcode: 0x7CBD7820 (dec: 2092791840)
{
	struct tScreen tScreen; // size=100, offset=0
	long moneyFinal; // size=0, offset=100
	long moneyAwarded; // size=0, offset=104
	long moneyDamage; // size=0, offset=108
	long moneyBonus; // size=0, offset=112
	int starttick; // size=0, offset=116
	void * gotmoney; // size=0, offset=120
	void * gotbonus; // size=0, offset=124
	void * gotbilled; // size=0, offset=128
	void * fDrawMoney; // size=0, offset=132
	void * fCountedDown; // size=0, offset=136
	void * fStartCountdownNOW; // size=0, offset=140
	int fCountSpeed; // size=0, offset=144
};

struct tScreenTournamentStandings3item // hashcode: 0x61492444 (dec: 1632183364)
{
	struct tScreenTournamentStandings tScreenTournamentStandings; // size=148, offset=0
};

struct LUMPYHEAD // hashcode: 0xDC9CF9C0 (dec: -593692224)
{
	unsigned long type; // size=0, offset=0
	unsigned long len; // size=0, offset=4
	unsigned long num; // size=0, offset=8
	unsigned long hlen; // size=0, offset=12
};

struct FILEINFO // hashcode: 0x70D8E486 (dec: 1893262470)
{
	unsigned int offset; // size=0, offset=0
	unsigned int length; // size=0, offset=4
	char name[1]; // size=1, offset=8
};

struct SPEECHINFO // hashcode: 0x149366E0 (dec: 345204448)
{
	char name[4]; // size=4, offset=0
	int multiplay; // size=0, offset=4
	int nHandle; // size=0, offset=8
	int nSoundHandle; // size=0, offset=12
	char areLoading; // size=0, offset=16
	char soundIsPlaying; // size=0, offset=17
	char playNextOne; // size=0, offset=18
	char *pBankHeader; // size=0, offset=20
	char *sSpeechData; // size=0, offset=24
	char *lastSpeechData; // size=0, offset=28
	int vivHandle; // size=0, offset=32
};

struct PAD_COMMON_alt_definition_0021 // hashcode: 0x280A1106 (dec: 671748358)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __63 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0022 // hashcode: 0xCCC443AB (dec: -859552853)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct tDialogBackUpOnly // hashcode: 0x9151534F (dec: -1856941233)
{
	struct tDialogMessageString tDialogMessageString; // size=152, offset=0
};

struct tDialogYesNoMem // hashcode: 0x72E550B0 (dec: 1927631024)
{
	struct tDialogYesNo tDialogYesNo; // size=168, offset=0
};

struct tDialogYesNoTri // hashcode: 0xB84531A8 (dec: -1203424856)
{
	struct tDialogYesNo tDialogYesNo; // size=168, offset=0
};

struct CARDINFO_def // hashcode: 0xCFB14015 (dec: -810467307)
{
	int status; // size=0, offset=0
	int lasterror; // size=0, offset=4
	int numfiles; // size=0, offset=8
	int freeblocks; // size=0, offset=12
	struct DIRENTRY dir[15]; // size=600, offset=16
};

struct MCRDFILEHEADER_def // hashcode: 0xF8B96AC8 (dec: -122066232)
{
	unsigned char magicnumber[2]; // size=2, offset=0
	unsigned char type; // size=0, offset=2
	unsigned char nslots; // size=0, offset=3
	unsigned short title[32]; // size=64, offset=4
	unsigned char unused[28]; // size=28, offset=68
	unsigned char iconclut[32]; // size=32, offset=96
	unsigned char icon1[128]; // size=128, offset=128
	unsigned char icon2[128]; // size=128, offset=256
	unsigned char icon3[128]; // size=128, offset=384
};

struct MCRDFILEINFO_def // hashcode: 0x23AF73D4 (dec: 598701012)
{
	int cardnum; // size=0, offset=0
	char name[24]; // size=24, offset=4
	char *title; // size=0, offset=28
	int size; // size=0, offset=32
	int offset; // size=0, offset=36
	unsigned int flags; // size=0, offset=40
	struct MCRDFILEHEADER_def header; // size=512, offset=44
	void *pData; // size=0, offset=556
	struct shapetbl (*icon[3]); // size=12, offset=560
};

struct helpKeyData // hashcode: 0x682316B8 (dec: 1747130040)
{
	short text; // size=0, offset=0
	short button; // size=0, offset=2
};

struct tHelpData // hashcode: 0xA88634C2 (dec: -1467599678)
{
	char autoGenerate; // size=0, offset=0
	struct helpKeyData items[4]; // size=16, offset=2
};

struct PAD_COMMON_alt_definition_0023 // hashcode: 0xC952CA79 (dec: -917321095)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __63 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0024 // hashcode: 0xFCB2A350 (dec: -55401648)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __63 data; // size=6, offset=2
};

struct tScreenControllerConfig // hashcode: 0x3FE455A7 (dec: 1071928743)
{
	struct tScreen tScreen; // size=100, offset=0
	struct Force_tGlobal fShaker; // size=8, offset=100
	char fPrevConfig; // size=0, offset=108
	char fTextConfig; // size=0, offset=109
	char fTextController; // size=0, offset=110
	char fPrevController; // size=0, offset=111
	short fFade[2]; // size=4, offset=112
	short fFadeController[2]; // size=4, offset=116
	int fStartTick; // size=0, offset=120
	short fGotTick; // size=0, offset=124
	short fAnim; // size=0, offset=126
	short fAnimFrame; // size=0, offset=128
	short fAnimStart; // size=0, offset=130
	short fAnimStop; // size=0, offset=132
	short fAnimStep; // size=0, offset=134
	short fAnimController; // size=0, offset=136
	short fSwap; // size=0, offset=138
	short fAnimFade; // size=0, offset=140
	short fAnimFadeStart; // size=0, offset=142
	short fAnimFadeStop; // size=0, offset=144
	short fAnimFadeFrame; // size=0, offset=146
	short fAnimFadeController; // size=0, offset=148
	short CurrentlyLoadedArt; // size=0, offset=150
	short negconChoice; // size=0, offset=152
	void * fTransitionedIn; // size=0, offset=156
	void * fTransitioningIn; // size=0, offset=160
	void * fTransitioningOut; // size=0, offset=164
	short fArrowFade; // size=0, offset=168
	short fArrowFadeDir; // size=0, offset=170
	short fTextTypeOn; // size=0, offset=172
	void * fFadeTextOut; // size=0, offset=176
	short mult; // size=0, offset=180
	struct tDialogYesNo negconPopUp; // size=168, offset=184
	int fTimeOutStartTick; // size=0, offset=352
	void * SuperFastFadeOut; // size=0, offset=356
	void * fPlayedInSound; // size=0, offset=360
	short fShakingItem; // size=0, offset=364
	void * fResetShakeTimeOut; // size=0, offset=368
	char fCurrentController; // size=0, offset=372
	int player; // size=0, offset=376
};

struct PAD_COMMON_alt_definition_0025 // hashcode: 0xE4FE6C96 (dec: -453088106)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __66 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0026 // hashcode: 0x5834DAED (dec: 1479858925)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __63 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0027 // hashcode: 0xA73060DD (dec: -1490001699)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __63 data; // size=6, offset=2
};

struct tCheat // hashcode: 0xA383D679 (dec: -1551640967)
{
	unsigned char name[8]; // size=8, offset=0
	enum tCheatCode cheat; // size=4, offset=8
};

struct PAD_COMMON_alt_definition_0028 // hashcode: 0x5A4CC432 (dec: 1514980402)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct tOldMenu // hashcode: 0x4117373D (dec: 1092040509)
{
	char *artFileName; // size=0, offset=0
	char *backgrName; // size=0, offset=4
	short driver; // size=0, offset=8
	short current; // size=0, offset=10
	short flags; // size=0, offset=12
	short helpvariant; // size=0, offset=14
	struct tItemButton (*item[16]); // size=64, offset=16
};

struct tItemButton // hashcode: 0x2FE2D8F4 (dec: 803395828)
{
	short type; // size=0, offset=0
	short text; // size=0, offset=2
	struct tOldMenu *nextMenu; // size=0, offset=4
	char *value; // size=0, offset=8
	short *selection; // size=0, offset=12
	char defaultvalue; // size=0, offset=16
	unsigned char flags; // size=0, offset=17
	unsigned char cases; // size=0, offset=18
};

struct PAD_COMMON_alt_definition_0029 // hashcode: 0x9418D08F (dec: -1810313073)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __63 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0030 // hashcode: 0xAE0468D9 (dec: -1375442727)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct tPSXToFEMapping // hashcode: 0xA3C2C353 (dec: -1547517101)
{
	int PSXKey; // size=0, offset=0
	enum tInputKeyType FEKey; // size=4, offset=4
};

struct tListIteratorDoubleIndexed // hashcode: 0x828C2525 (dec: -2104744667)
{
	struct tListIterator tListIterator; // size=16, offset=0
	char *fIndex1; // size=0, offset=16
	int index1multiplier; // size=0, offset=20
	char *fIndex2; // size=0, offset=24
};

struct tListIteratorMultiPlayer // hashcode: 0x57ED9423 (dec: 1475187747)
{
	struct tListIterator tListIterator; // size=16, offset=0
};

struct PAD_COMMON_alt_definition_0031 // hashcode: 0xDB7EAD9A (dec: -612455014)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0032 // hashcode: 0x3E04A217 (dec: 1040491031)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct tScreenMain // hashcode: 0xB6C2FA84 (dec: -1228735868)
{
	struct tScreen tScreen; // size=100, offset=0
	int hVideo; // size=0, offset=100
	int fFrame; // size=0, offset=104
	unsigned long fStartTicks; // size=0, offset=108
	unsigned long fAnimTicks; // size=0, offset=112
	short fAnimLocation; // size=0, offset=116
	enum tScreenMainState fState; // size=4, offset=120
	struct tTVConfig tvConfigs[16]; // size=768, offset=124
	enum tScreenMainState tvStates[16]; // size=64, offset=892
	struct tVideoTransition tvTransitions[16]; // size=384, offset=956
	void * fTVsInitialized; // size=0, offset=1340
	char fTransitionDirection; // size=0, offset=1344
	void * fAnimationUploaded; // size=0, offset=1348
	short fPreviousAnim; // size=0, offset=1352
	short fWarningFade; // size=0, offset=1354
	short fPreviousMovie; // size=0, offset=1356
	short fCurrentMovie; // size=0, offset=1358
	void * bVideoAborted; // size=0, offset=1360
	unsigned long fMovieTicks; // size=0, offset=1364
	struct tShapeInformation fVideoShapes[2]; // size=80, offset=1368
	int fCurrentSlot; // size=0, offset=1448
	int fCurrentBG[2]; // size=8, offset=1452
	int fNumTVsInTransition; // size=0, offset=1460
};

struct MCRDFILE_def // hashcode: 0x7A388CAB (dec: 2050526379)
{
	char *name; // size=0, offset=0
	char *title; // size=0, offset=4
	int size; // size=0, offset=8
	int offset; // size=0, offset=12
	unsigned int flags; // size=0, offset=16
	void *pData; // size=0, offset=20
	struct shapetbl (*icon[3]); // size=12, offset=24
	unsigned char *numicons; // size=0, offset=36
	unsigned char *numblocks; // size=0, offset=40
};

struct tVideoWall // hashcode: 0xD05BEE5D (dec: -799281571)
{
	struct tTVConfig *fTVs; // size=48, offset=0
	short fFirstTVShape; // size=0, offset=4
	short fNumTVs; // size=0, offset=6
	struct tTexture_ShapeInfo *fTVShapes; // size=32, offset=8
	short *tvOrder; // size=0, offset=12
	unsigned long fTVTicks; // size=0, offset=16
	short fTransitionDirection; // size=0, offset=20
	short fFlipAxis; // size=0, offset=22
	short fOffsetX; // size=0, offset=24
	short fOffsetY; // size=0, offset=26
	short fAvailableTextID; // size=0, offset=28
	short fAvailable; // size=0, offset=30
	short fAvailableBright; // size=0, offset=32
	short fValid; // size=0, offset=34
	short fAvailableX; // size=0, offset=36
	short fAvailableY; // size=0, offset=38
	struct tTexture_ShapeInfo *fIconShapes; // size=32, offset=40
	short fIcon; // size=0, offset=44
	short fIconFrames; // size=0, offset=46
	short fIconX; // size=0, offset=48
	short fIconY; // size=0, offset=50
	void * fUpdated; // size=0, offset=52
};

struct tOverlay // hashcode: 0xC388CF4C (dec: -1014444212)
{
	struct RECT location[2]; // size=16, offset=0
	short transition; // size=0, offset=16
	short delta; // size=0, offset=18
	short direction; // size=0, offset=20
	short ID; // size=0, offset=22
};

struct tScreenCarSelect // hashcode: 0x13FDD473 (dec: 335402099)
{
	struct tScreen tScreen; // size=100, offset=0
	struct tOverlay fOverlays[7]; // size=168, offset=100
	struct tOverlay (*fCurrentOverlays[4]); // size=16, offset=268
	short fState; // size=0, offset=284
	short fPreviousCar; // size=0, offset=286
	short fPreviousCarID; // size=0, offset=288
	short fPreviousCountry; // size=0, offset=290
	struct tTVConfig tvConfigs[10]; // size=480, offset=292
	struct tVideoWall fVideoWall[2]; // size=112, offset=772
	short fBrightness[2]; // size=4, offset=884
	short fDestBrightness[2]; // size=4, offset=888
	long fFadeTicks[2]; // size=8, offset=892
	void * fTVsInitialized; // size=0, offset=900
	void * fInShowroom; // size=0, offset=904
	unsigned long fShowroomTicks; // size=0, offset=908
	unsigned long fSpeechTicks; // size=0, offset=912
	void * fSpeechPlayed; // size=0, offset=916
	int fSplineInterval; // size=0, offset=920
	unsigned long fCameraRotation; // size=0, offset=924
};

struct tScreenCarSelectDuel // hashcode: 0xB2E44B9A (dec: -1293661286)
{
	struct tScreenCarSelect tScreenCarSelect; // size=928, offset=0
	short fPreviousOpponent; // size=0, offset=928
	void * fOpponentTVsInitialized; // size=0, offset=932
	struct tShapeInformation fOpponentShapes; // size=40, offset=936
};

struct tScreenCarSelectTwoPlayer // hashcode: 0x25DCC104 (dec: 635224324)
{
	struct tScreenCarSelect tScreenCarSelect; // size=928, offset=0
	struct tDialogBackUpOnly CarDialog; // size=152, offset=928
};

struct tScreenPinkSlipsCarSelect // hashcode: 0xD97C7E86 (dec: -646152570)
{
	struct tScreenCarSelectTwoPlayer tScreenCarSelectTwoPlayer; // size=1080, offset=0
	int waitfordialog; // size=0, offset=1080
	struct CARDINFO_def *pCI; // size=616, offset=1084
	int fStartCheckTick; // size=0, offset=1088
	void * fCardFailed; // size=0, offset=1092
	void * fExitingScreen; // size=0, offset=1096
};

struct tScreenTournSelect // hashcode: 0xE381D039 (dec: -478031815)
{
	struct tScreen tScreen; // size=100, offset=0
	int hVideo; // size=0, offset=100
	int fFrame; // size=0, offset=104
	struct tTVConfig tvConfigs[8]; // size=384, offset=108
	struct tTVConfig trophyTV[4]; // size=192, offset=492
	short fPreviousMovie; // size=0, offset=684
	short fCurrentMovie; // size=0, offset=686
	unsigned long fStartTicks; // size=0, offset=688
	unsigned long fTVTicks; // size=0, offset=692
	short fTransitionDirection; // size=0, offset=696
	char fPreviousTrophy; // size=0, offset=698
	void * fTVsInitialized; // size=0, offset=700
	int PreCalculatedTournamentY; // size=0, offset=704
	int fPrevi; // size=0, offset=708
};

struct tScreenPinkSlipStandings // hashcode: 0xE3913CB3 (dec: -477021005)
{
	struct tScreenTournamentStandings3item tScreenTournamentStandings3item; // size=148, offset=0
};

struct tScreenTrophyRoom // hashcode: 0x3FFC0EB0 (dec: 1073483440)
{
	struct tScreen tScreen; // size=100, offset=0
	struct tShapeInformation fTrophyShapes; // size=40, offset=100
	short fNumTrophies; // size=0, offset=140
	int startTicks; // size=0, offset=144
	short fShapeCount; // size=0, offset=148
	void * fLoadingTrophy; // size=0, offset=152
	char fPreviousTrophy; // size=0, offset=156
	char fDoUpdate; // size=0, offset=157
	void * fClearScreen; // size=0, offset=160
	char fBrightness; // size=0, offset=164
	unsigned long fStartTicks; // size=0, offset=168
	short fTextInfo[16]; // size=32, offset=172
	char thisisuseless; // size=0, offset=204
	int tier; // size=0, offset=208
	short fRealCurrentTourn[2]; // size=4, offset=212
	short fTrophyList[64]; // size=128, offset=216
};

struct tScreenTrophyInfo // hashcode: 0x81590FC5 (dec: -2124869691)
{
	struct tScreen tScreen; // size=100, offset=0
	int BannerCol; // size=0, offset=100
};

struct tScreenDisplay // hashcode: 0x4178BD9F (dec: 1098431903)
{
	struct tScreen tScreen; // size=100, offset=0
};

struct tScreenAudio // hashcode: 0xB80B713A (dec: -1207209670)
{
	struct tScreen tScreen; // size=100, offset=0
	short fShapeCount; // size=0, offset=100
	char prevAudioMode; // size=0, offset=102
	short audioTest; // size=0, offset=104
	int audioTestHandle; // size=0, offset=108
	short fPrevSelectedSong; // size=0, offset=112
	char fCurrentAudioMode; // size=0, offset=114
	short fSelectedSong; // size=0, offset=116
	struct AudioMus_tSongList *songlist; // size=8, offset=120
};

struct tScreenMemcard // hashcode: 0xF3E9C6CF (dec: -202783025)
{
	struct tScreen tScreen; // size=100, offset=0
	int theNFS4icon; // size=0, offset=100
	int card; // size=0, offset=104
	struct CARDINFO_def *pCI; // size=616, offset=108
	char fMemTitle[15][32]; // size=480, offset=112
	char goticon[15]; // size=15, offset=592
	unsigned char numicon[15]; // size=15, offset=607
	unsigned char numblock[15]; // size=15, offset=622
	struct MCRDFILE_def fMemFile[15]; // size=660, offset=640
	unsigned short fMemIconClutId[15]; // size=30, offset=1300
	short fFadeIcon[15]; // size=30, offset=1330
	void * fReadyToGetNewIcons; // size=0, offset=1360
	void * fInitedMemCard; // size=0, offset=1364
	char fMemCardMessage[40]; // size=40, offset=1368
	int fMemCardMessageTextSys; // size=0, offset=1408
	int message; // size=0, offset=1412
	short memcardanimframe; // size=0, offset=1416
	short count; // size=0, offset=1418
	short cursorPosition; // size=0, offset=1420
	int checkingstart; // size=0, offset=1424
	void * fSomePunkInQAPulledOutTheMemoryCardWhileLoadingIcons; // size=0, offset=1428
	int fScreenFadeReadyTick; // size=0, offset=1432
	short player; // size=0, offset=1436
	void * fGetNewIcons; // size=0, offset=1440
};

struct tScreenCongrats // hashcode: 0x19D90D9A (dec: 433655194)
{
	struct tScreen tScreen; // size=100, offset=0
	enum tScreenCongratsMessage congratsMessage; // size=4, offset=100
	enum tTrophyClass trophy; // size=4, offset=104
	enum tSmallSpinningThing smallSpinningThing; // size=4, offset=108
	int fNumSpinShapes; // size=0, offset=112
	int fNumSmallSpinShapes; // size=0, offset=116
	int fCarPlayer; // size=0, offset=120
	long TotalCash; // size=0, offset=124
	long CashAwarded; // size=0, offset=128
	int framenum; // size=0, offset=132
	int starttick; // size=0, offset=136
	void * InExtraSpin; // size=0, offset=140
	int InExtraSpinTick; // size=0, offset=144
	struct tCarInfo fCarInfo; // size=204, offset=148
	void * fGotCar; // size=0, offset=352
	int fEnterTick; // size=0, offset=356
	void * fCountedDown; // size=0, offset=360
	void * fStartCountdownNOW; // size=0, offset=364
	int fCountSpeed; // size=0, offset=368
	int fSpeechToPlay; // size=0, offset=372
	short fCarX; // size=0, offset=376
	short fCarY; // size=0, offset=378
	float fCarCX; // size=0, offset=380
	float fCarCY; // size=0, offset=384
};

struct tScreenTournamentTrophy // hashcode: 0xD3E2A919 (dec: -740120295)
{
	struct tScreenCongrats tScreenCongrats; // size=388, offset=0
	short fShapeCount; // size=0, offset=388
	char fDoUpdate; // size=0, offset=390
};

struct tScreenPinkSlipCongrats // hashcode: 0x505F199B (dec: 1348409755)
{
	struct tScreenCongrats tScreenCongrats; // size=388, offset=0
	short fWinner; // size=0, offset=388
};

struct tScreenBeTheCopCongrats // hashcode: 0x4665AB32 (dec: 1181068082)
{
	struct tScreenCongrats tScreenCongrats; // size=388, offset=0
};

struct tScreenTournamentCongrats // hashcode: 0xAF7E6F64 (dec: -1350668444)
{
	struct tScreenCongrats tScreenCongrats; // size=388, offset=0
};

struct tScreenTrackRecords // hashcode: 0xB5E45B83 (dec: -1243325565)
{
	struct tScreen tScreen; // size=100, offset=0
	struct tRecordBuffer *TrackRecords; // size=20, offset=100
	int flare_intensity; // size=0, offset=104
	int flareextra; // size=0, offset=108
	void * fReadNewData; // size=0, offset=112
};

struct tScreenTrackSelect // hashcode: 0xC6129E23 (dec: -971858397)
{
	struct tScreen tScreen; // size=100, offset=0
	int hVideo; // size=0, offset=100
	int fFrame; // size=0, offset=104
	short fPreviousTrack; // size=0, offset=108
	short fMovieTrack; // size=0, offset=110
	short fBrightness; // size=0, offset=112
	short fDestBrightness; // size=0, offset=114
	short fStartBrightness; // size=0, offset=116
	unsigned long fStartTicks; // size=0, offset=120
	void * fTicksSet; // size=0, offset=124
	struct tTVConfig tvConfigs[10]; // size=480, offset=128
	struct tVideoWall fVideoWall; // size=56, offset=608
	void * fTVsInitialized; // size=0, offset=664
	unsigned long fVideoTicks; // size=0, offset=668
};

struct tScreenTrackInfo // hashcode: 0xB30E4AA7 (dec: -1290909017)
{
	struct tScreen tScreen; // size=100, offset=0
	struct tTrackInfo fTrack; // size=40, offset=100
	struct tTVConfig tvConfigs[10]; // size=480, offset=140
	struct tVideoWall fVideoWall; // size=56, offset=620
};

struct tScreenPinkSlips // hashcode: 0x9DA460C6 (dec: -1650171706)
{
	struct tScreen tScreen; // size=100, offset=0
	struct tMenu *fMenu; // size=108, offset=100
	int hVideo; // size=0, offset=104
	int fFrame; // size=0, offset=108
	short fPreviousTrack; // size=0, offset=112
	short fBrightness; // size=0, offset=114
	short fDestBrightness; // size=0, offset=116
	short fStartBrightness; // size=0, offset=118
	unsigned long fStartTicks; // size=0, offset=120
	unsigned long fTVTicks; // size=0, offset=124
	char fTransitionDirection; // size=0, offset=128
	struct tTVConfig fTrackTVs[8]; // size=384, offset=132
	struct tTVConfig fImageTVs[4]; // size=192, offset=516
	void * fTVsInitialized; // size=0, offset=708
};

struct tAllScreens // hashcode: 0x3AC6B6F4 (dec: 986101492)
{
	struct tScreenMain screenMain; // size=1464, offset=0
	struct tScreenCarSelect screenCarSelect; // size=928, offset=1464
	struct tScreenCarSelectDuel screenCarSelectDuel; // size=976, offset=2392
	struct tScreenCarSelectTwoPlayer screenCarSelectTwoPlayer; // size=1080, offset=3368
	struct tScreenCarSelectTwoPlayer screenCarSelectPlayerTwo; // size=1080, offset=4448
	struct tScreenPinkSlipsCarSelect screenPinkSlipsCarSelectTwoPlayer; // size=1100, offset=5528
	struct tScreenPinkSlipsCarSelect screenPinkSlipsCarSelectPlayerTwo; // size=1100, offset=6628
	struct tScreenTrackRecords screenTrackRecords; // size=116, offset=7728
	struct tScreenTrackInfo screenTrackInfo; // size=676, offset=7844
	struct tScreenTrackSelect screenTrackSelect; // size=672, offset=8520
	struct tScreenTournSelect screenTournSelect; // size=712, offset=9192
	struct tScreenTournamentStandings screenTournamentStandings; // size=148, offset=9904
	struct tScreenTournamentTrophy screenTournamentTrophy; // size=392, offset=10052
	struct tScreenTrophyRoom screenTrophyRoom; // size=344, offset=10444
	struct tScreenTrophyInfo screenTrophyInfo; // size=104, offset=10788
	struct tScreenControllerConfig screenControllerConfig; // size=380, offset=10892
	struct tScreenDisplay screenDisplay; // size=100, offset=11272
	struct tScreenAudio screenAudio; // size=124, offset=11372
	struct tScreenMemcard screenMemcard; // size=1444, offset=11496
	struct tScreenUserName screenUserName; // size=204, offset=12940
	struct tScreenPinkSlipCongrats screenPinkSlipCongrats; // size=392, offset=13144
	struct tScreenPinkSlipStandings screenPinkSlipStandings; // size=148, offset=13536
	struct tScreenTournamentStandings3item screenTournamentStandings3item; // size=148, offset=13684
	struct tScreenPinkSlips screenPinkSlips; // size=712, offset=13832
	struct tScreenBeTheCopCongrats screenBeTheCopCongrats; // size=388, offset=14544
	struct tScreenTournamentCongrats screenTournamentCongrats; // size=388, offset=14932
};

struct tPerpModelList // hashcode: 0x051CB782 (dec: 85768066)
{
	enum tCarModels carModel; // size=4, offset=0
	char carColor; // size=0, offset=4
};

struct tFEStream // hashcode: 0x57A92C09 (dec: 1470704649)
{
	short totalCars; // size=0, offset=0
	short totalModels; // size=0, offset=2
	short currentCar; // size=0, offset=4
	short numPlayers; // size=0, offset=6
	struct tCarInfo playerCars[2]; // size=408, offset=8
	short numOpponents; // size=0, offset=416
	struct tCarLineup carLineup[6]; // size=120, offset=420
	short numCops; // size=0, offset=540
	short numSuperCops; // size=0, offset=542
	enum tCarModels copCars[6]; // size=24, offset=544
	short copCountry[6]; // size=12, offset=568
	short numTraffic; // size=0, offset=580
	short trafficCars[6]; // size=12, offset=582
	short numPerpObjects; // size=0, offset=594
	short numPerps; // size=0, offset=596
	struct tMissionInfo *pMission; // size=20, offset=600
	struct tStageInfo *pStages; // size=44, offset=604
	struct tPerpModelList perps[6]; // size=48, offset=608
	struct tTrackInformation trackInfo; // size=48, offset=656
	struct tTrackInfo track; // size=40, offset=704
};

struct tCarInLineup // hashcode: 0x0E00D075 (dec: 234934389)
{
	char isPlayerCar; // size=0, offset=0
	char isAlive; // size=0, offset=1
	char AIPersonality; // size=0, offset=2
	char LineupPosition; // size=0, offset=3
};

struct PAD_COMMON_alt_definition_0033 // hashcode: 0x1A4D3A9D (dec: 441268893)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __63 data; // size=6, offset=2
};

struct tGlobalMenuDefs // hashcode: 0x0C9F1F0D (dec: 211754765)
{
	struct tMenuItemGoToMenuNFS4Button itemMainOnePlayerRace; // size=44, offset=0
	struct tMenuItemGoToMenuNFS4Button itemMainTwoPlayerRace; // size=44, offset=44
	struct tMenuItemGoToMenuNFS4Button itemMainTrophyRoom; // size=44, offset=88
	struct tMenuItemGoToMenuNFS4Button itemMainOptions; // size=44, offset=132
	struct tMenuNFS4 menuMain; // size=124, offset=176
	struct tMenuItemGoToMenuNFS4Button itemTournTrophyRoom; // size=44, offset=300
	struct tMenuItemGoToMenuNFS4Button itemSETrophyRoom; // size=44, offset=344
	struct tMenuNFS4 menuTrophyRoomSelect; // size=124, offset=388
	struct tMenuBlank menuTrophyInfo; // size=124, offset=512
	struct tMenuItemGoToMenuNFS4Button itemSkillBeginner; // size=44, offset=636
	struct tMenuItemGoToMenuNFS4Button itemSkillIntermediate; // size=44, offset=680
	struct tMenuItemGoToMenuNFS4Button itemSkillExpert; // size=44, offset=724
	struct tMenuNFS4 menuSkillLevel; // size=124, offset=768
	struct tMenuItemGoToMenuNFS4Button itemOnePlayerTestDrive; // size=44, offset=892
	struct tMenuItemGoToMenuNFS4Button itemOnePlayerSingleRace; // size=44, offset=936
	struct tMenuItemGoToMenuNFS4Button itemOnePlayerPursuit; // size=44, offset=980
	struct tMenuItemGoToMenuNFS4Button itemOnePlayerTournament; // size=44, offset=1024
	struct tMenuItemGoToMenuNFS4Button itemOnePlayerSpecialEvents; // size=44, offset=1068
	struct tMenuNFS4 menuOnePlayer; // size=124, offset=1112
	struct tMenuItemGoToMenuNFS4Button itemSingleRaceSolo; // size=44, offset=1236
	struct tMenuItemGoToMenuNFS4Button itemSingleRaceDuel; // size=44, offset=1280
	struct tMenuItemGoToMenuNFS4Button itemSingleRaceFullGrid; // size=44, offset=1324
	struct tMenuNFS4 menuSingleRace; // size=124, offset=1368
	struct tMenuItemGoToMenuNFS4Button itemHotPursuitSolo; // size=44, offset=1492
	struct tMenuItemGoToMenuNFS4Button itemHotPursuitDuel; // size=44, offset=1536
	struct tMenuNFS4 menuHotPursuit; // size=124, offset=1580
	struct tListIteratorTournament iteratorTournament; // size=20, offset=1704
	struct tMenuItemGoToMenuNFS4Button itemTournamentContinue; // size=44, offset=1724
	struct tMenuItemNFS4LeftRightChoice itemTournamentSelect; // size=40, offset=1768
	struct tMenuNFS4 menuTournament; // size=124, offset=1808
	struct tListIteratorTournament iteratorSpecialEvent; // size=20, offset=1932
	struct tMenuItemGoToMenuNFS4Button itemSpecialEventContinue; // size=44, offset=1952
	struct tMenuItemNFS4LeftRightChoice itemSpecialEventSelect; // size=40, offset=1996
	struct tMenuNFS4 menuSpecialEvent; // size=124, offset=2036
	struct tMenuItemGoToMenuNFS4Button itemTwoPlayerTestDrive; // size=44, offset=2160
	struct tMenuItemGoToMenuNFS4Button itemTwoPlayerDuel; // size=44, offset=2204
	struct tMenuItemGoToMenuNFS4Button itemTwoPlayerHotPursuit; // size=44, offset=2248
	struct tMenuItemGoToMenuNFS4Button itemTwoPlayerPinkSlips; // size=44, offset=2292
	struct tMenuNFS4 menuTwoPlayer; // size=124, offset=2336
	struct tMenuItemGoToMenuNFS4Button itemBestOfOne; // size=44, offset=2460
	struct tMenuItemGoToMenuNFS4Button itemBestOfThree; // size=44, offset=2504
	struct tMenuItemGoToMenuNFS4Button itemBestOfFive; // size=44, offset=2548
	struct tMenuNFS4 menuPinkSlipSelect; // size=124, offset=2592
	struct tMenuItemGoToMenuNFS4Button itemPinkSlipsContinue; // size=44, offset=2716
	struct tMenuItemNFS4LeftRightChoice itemTrack1; // size=40, offset=2760
	struct tMenuItemNFS4LeftRightChoice itemTrack2; // size=40, offset=2800
	struct tMenuItemNFS4LeftRightChoice itemTrack3; // size=40, offset=2840
	struct tMenuItemNFS4LeftRightChoice itemTrack4; // size=40, offset=2880
	struct tMenuItemNFS4LeftRightChoice itemTrack5; // size=40, offset=2920
	struct tMenuNFS4 menuPinkSlipsBestOfThree; // size=124, offset=2960
	struct tMenuNFS4 menuPinkSlipsBestOfFive; // size=124, offset=3084
	struct tListIteratorTrack iteratorTrack; // size=24, offset=3208
	struct tMenuItemGoToMenuNFS4Button itemTrackContinue; // size=44, offset=3232
	struct tMenuItemNFS4LeftRightChoice itemTrack; // size=40, offset=3276
	struct tMenuItemGoToMenuNFS4Button itemTrackRecords; // size=44, offset=3316
	struct tMenuNFS4 menuSingleTrackSelect; // size=124, offset=3360
	struct tMenuNFS4 menuTestDriveTrackSelect; // size=124, offset=3484
	struct tListIteratorIndexed iteratorLaps; // size=20, offset=3608
	struct tListIteratorIndexed iteratorTrackDirection; // size=20, offset=3628
	struct tListIteratorIndexed iteratorTrackMirrored; // size=20, offset=3648
	struct tListIteratorIndexed iteratorTimeOfDay; // size=20, offset=3668
	struct tListIteratorIndexed iteratorWeather; // size=20, offset=3688
	struct tListIteratorIndexed iteratorTraffic; // size=20, offset=3708
	struct tListIterator iteratorLocalSpeech; // size=16, offset=3728
	struct tMenuItemOptionsLeftRightChoice itemLaps; // size=32, offset=3744
	struct tMenuItemOptionsLeftRightChoice itemTrackDirection; // size=32, offset=3776
	struct tMenuItemOptionsTwoItemChoice itemTrackMirrored; // size=36, offset=3808
	struct tMenuItemOptionsTwoItemChoice itemTimeOfDay; // size=36, offset=3844
	struct tMenuItemOptionsTwoItemChoice itemWeather; // size=36, offset=3880
	struct tMenuItemOptionsTwoItemChoice itemTraffic; // size=36, offset=3916
	struct tMenuItemOptionsTwoItemChoice itemLocalSpeech; // size=36, offset=3952
	struct tMenuOptions menuTrackOptions; // size=132, offset=3988
	struct tBlankMenuItemGoToMenuNFS4Button menuTrackRecordsItem; // size=44, offset=4120
	struct tOptionsMenu menuTrackRecords; // size=128, offset=4164
	struct tMenuItemGoToMenuNFS4Button itemTrackInfoContinue; // size=44, offset=4292
	struct tMenuNFS4 menuTrackInfo; // size=124, offset=4336
	struct tListIteratorCar iteratorCar1; // size=28, offset=4460
	struct tListIteratorCarColor iteratorColor; // size=32, offset=4488
	struct tMenuItemGoToMenuNFS4Button itemCarSelectRace; // size=44, offset=4520
	struct tMenuItemNFS4LeftRightChoice itemCar; // size=40, offset=4564
	struct tMenuItemNFS4LeftRightChoice itemColor; // size=40, offset=4604
	struct tMenuItemGoToMenuNFS4Button itemShowcase; // size=44, offset=4644
	struct tMenuNFS4 menuSingleCarSelect; // size=124, offset=4688
	struct tListIteratorCar iteratorGarageCar; // size=28, offset=4812
	struct tMenuItemNFS4LeftRightChoice itemGarageCar; // size=40, offset=4840
	struct tMenuItemGoToMenuNFS4Button itemCarDealer; // size=44, offset=4880
	struct tMenuItemGoToMenuNFS4Button itemUpgradeCar; // size=44, offset=4924
	struct tMenuNFS4 menuCarGarage; // size=124, offset=4968
	struct tMenuNFS4 menuPostCarGarage; // size=124, offset=5092
	struct tListIteratorCar iteratorOpponentCar; // size=28, offset=5216
	struct tMenuItemGoToMenuNFS4Button itemDuelRace; // size=44, offset=5244
	struct tMenuItemNFS4LeftRightChoice itemCar2; // size=40, offset=5288
	struct tMenuItemNFS4LeftRightChoice itemColor2; // size=40, offset=5328
	struct tMenuItemGoToMenuNFS4Button itemGoToDuelBuyCar; // size=44, offset=5368
	struct tMenuItemNFS4LeftRightChoice itemOpponentCar; // size=40, offset=5412
	struct tMenuNFS4 menuDuelCarSelect; // size=124, offset=5452
	struct tMenuNFS4 menuHPDuelCarSelect; // size=124, offset=5576
	struct tMenuItemGoToMenuNFS4Button itemPlayerOneRace; // size=44, offset=5700
	struct tMenuItemNFS4LeftRightChoice itemCarP1; // size=40, offset=5744
	struct tMenuItemNFS4LeftRightChoice itemColorP1; // size=40, offset=5784
	struct tMenuNFS4TwoPlayer menuPlayerOneCarSelect; // size=124, offset=5824
	struct tMenuItemGoToMenuNFS4Button itemPlayerTwoRace; // size=44, offset=5948
	struct tMenuItemNFS4LeftRightChoice itemCarP2; // size=40, offset=5992
	struct tMenuItemNFS4LeftRightChoice itemColorP2; // size=40, offset=6032
	struct tMenuNFS4TwoPlayer menuPlayerTwoCarSelect; // size=124, offset=6072
	struct tMenuItemGoToMenuNFS4Button itemPlayerOneGarageRace; // size=44, offset=6196
	struct tMenuItemNFS4LeftRightChoice itemGarageCarP1; // size=40, offset=6240
	struct tMenuNFS4TwoPlayer menuPlayerOneGarage; // size=124, offset=6280
	struct tMenuItemGoToMenuNFS4Button itemPlayerTwoGarageRace; // size=44, offset=6404
	struct tMenuItemNFS4LeftRightChoice itemGarageCarP2; // size=40, offset=6448
	struct tMenuNFS4TwoPlayer menuPlayerTwoGarage; // size=124, offset=6488
	struct tListIteratorCar iteratorPinkSlipsCar; // size=28, offset=6612
	struct tMenuItemGoToMenuNFS4Button itemPlayerOnePinkSlipRace; // size=44, offset=6640
	struct tMenuItemNFS4LeftRightChoice itemPinkSlipCarP1; // size=40, offset=6684
	struct tMenuNFS4TwoPlayer menuPlayerOnePinkSlipCarSelect; // size=124, offset=6724
	struct tMenuItemGoToMenuNFS4Button itemPlayerTwoPinkSlipRace; // size=44, offset=6848
	struct tMenuItemNFS4LeftRightChoice itemPinkSlipCarP2; // size=40, offset=6892
	struct tMenuNFS4TwoPlayer menuPlayerTwoPinkSlipCarSelect; // size=124, offset=6932
	struct tMenuItemGoToMenuNFS4Button itemGoToBuyCar; // size=44, offset=7056
	struct tMenuItemGoToMenuNFS4Button itemGoToSellCar; // size=44, offset=7100
	struct tMenuNFS4 menuGoToCarDealer; // size=124, offset=7144
	struct tListIteratorCar iteratorDealerCar; // size=28, offset=7268
	struct tListIteratorCarColor iteratorDealerColor; // size=32, offset=7296
	struct tMenuItemNFS4LeftRightChoice itemDealerCar; // size=40, offset=7328
	struct tMenuItemNFS4LeftRightChoice itemDealerColor; // size=40, offset=7368
	struct tMenuItemGoToMenuNFS4Button itemBuyCar; // size=44, offset=7408
	struct tMenuItemGoToMenuNFS4Button itemDealerShowroom; // size=44, offset=7452
	struct tMenuNFS4 menuCarDealer; // size=124, offset=7496
	struct tListIteratorCar iteratorSellerCar; // size=28, offset=7620
	struct tMenuItemNFS4LeftRightChoice itemSellerCar; // size=40, offset=7648
	struct tMenuItemGoToMenuNFS4Button itemSellCar; // size=44, offset=7688
	struct tMenuNFS4 menuCarSeller; // size=124, offset=7732
	struct tMenuItemGoToMenuNFS4Button itemPurchaseUpgrade1; // size=44, offset=7856
	struct tMenuItemGoToMenuNFS4Button itemPurchaseUpgrade2; // size=44, offset=7900
	struct tMenuItemGoToMenuNFS4Button itemPurchaseUpgrade3; // size=44, offset=7944
	struct tMenuNFS4 menuCarUpgrades; // size=124, offset=7988
	struct tListIteratorIndexed iteratorTransmission; // size=20, offset=8112
	struct tListIteratorIndexed iteratorABS; // size=20, offset=8132
	struct tListIterator iteratorDamage; // size=16, offset=8152
	struct tListIterator iteratorOpponentUpgrades; // size=16, offset=8168
	struct tMenuItemOptionsLeftRightChoice itemTransmission; // size=32, offset=8184
	struct tMenuItemOptionsLeftRightChoice itemABS; // size=32, offset=8216
	struct tMenuItemOptionsLeftRightChoice itemDamage; // size=32, offset=8248
	struct tMenuItemOptionsLeftRightChoice itemTransmission2; // size=32, offset=8280
	struct tMenuItemOptionsLeftRightChoice itemABS2; // size=32, offset=8312
	struct tMenuItemOptionsLeftRightChoice itemDamage2; // size=32, offset=8344
	struct tMenuItemOptionsLeftRightChoice itemOpponentUpgrades; // size=32, offset=8376
	struct tMenuOptions menuCarOptions; // size=132, offset=8408
	struct tMenuOptions menuCarOptionsPlayerOne; // size=132, offset=8540
	struct tMenuOptions menuCarOptionsPlayerTwo; // size=132, offset=8672
	struct tMenuOptions menuPinkSlipCarOptionsPlayerOne; // size=132, offset=8804
	struct tMenuOptions menuPinkSlipCarOptionsPlayerTwo; // size=132, offset=8936
	struct tMenuBlank menuShowroom; // size=124, offset=9068
	struct tMenuItemGoToMenuNFS4Button itemOptionsAudio; // size=44, offset=9192
	struct tMenuItemGoToMenuNFS4Button itemOptionsDisplay; // size=44, offset=9236
	struct tMenuItemGoToMenuNFS4Button itemOptionsControllers; // size=44, offset=9280
	struct tMenuItemGoToMenuNFS4Button itemOptionsMemoryCard; // size=44, offset=9324
	struct tMenuItemGoToMenuNFS4Button itemOptionsUsername; // size=44, offset=9368
	struct tMenuItemGoToMenuNFS4Button itemOptionsCredits; // size=44, offset=9412
	struct tMenuNFS4 menuOptions; // size=124, offset=9456
	struct tListIteratorRange iteratorMusicVolume; // size=16, offset=9580
	struct tListIteratorRange iteratorSoundEffectsVolume; // size=16, offset=9596
	struct tListIteratorRange iteratorEngineVolume; // size=16, offset=9612
	struct tListIteratorRange iteratorSpeechVolume; // size=16, offset=9628
	struct tListIteratorRange iteratorAmbientVolume; // size=16, offset=9644
	struct tListIterator iteratorAudioMode; // size=16, offset=9660
	struct tMenuItemLeftRightAudioSlider itemMusicVolume; // size=56, offset=9676
	struct tMenuItemLeftRightAudioSlider itemSoundEffectsVolume; // size=56, offset=9732
	struct tMenuItemLeftRightAudioSlider itemEngineVolume; // size=56, offset=9788
	struct tMenuItemLeftRightAudioSlider itemSpeechVolume; // size=56, offset=9844
	struct tMenuItemLeftRightAudioSlider itemAmbientVolume; // size=56, offset=9900
	struct tMenuItemDisplayLeftRightChoice itemAudioMode; // size=44, offset=9956
	struct tMenuItemSlidingActivated itemSlidingPlayList; // size=72, offset=10000
	struct tInsideBoxSongMenu menuPlayListMenu; // size=136, offset=10072
	struct tOptionsMenu menuAudio; // size=128, offset=10208
	struct tListIteratorIndexed iteratorDisplaySpeedometer; // size=20, offset=10336
	struct tListIteratorIndexed iteratorDisplayMap; // size=20, offset=10356
	struct tListIteratorIndexed iteratorDisplayOpponentID; // size=20, offset=10376
	struct tListIteratorIndexed iteratorDisplayTime; // size=20, offset=10396
	struct tListIteratorIndexed iteratorDisplayPosition; // size=20, offset=10416
	struct tListIteratorIndexed iteratorDisplayLapNumber; // size=20, offset=10436
	struct tListIterator iteratorDisplaySplitTime; // size=16, offset=10456
	struct tListIteratorIndexed iteratorDisplaySplitDisplay; // size=20, offset=10472
	struct tMenuItemDisplayLeftRightChoice itemDisplaySpeedometer; // size=44, offset=10492
	struct tMenuItemDisplayLeftRightChoice itemDisplayMap; // size=44, offset=10536
	struct tMenuItemDisplayLeftRightChoice itemDisplayOpponentID; // size=44, offset=10580
	struct tMenuItemOnOffLeftRightChoice itemDisplayTime; // size=48, offset=10624
	struct tMenuItemOnOffLeftRightChoice itemDisplayPosition; // size=48, offset=10672
	struct tMenuItemOnOffLeftRightChoice itemDisplayLapNumber; // size=48, offset=10720
	struct tMenuItemDisplayLeftRightChoice itemDisplaySplitTime; // size=44, offset=10768
	struct tMenuItemDisplayLeftRightChoice itemDisplaySplitDisplay; // size=44, offset=10812
	struct tOptionsMenu menuDisplayOptions; // size=128, offset=10856
	struct tListIteratorIndexed iteratorControllerConfigSelected; // size=20, offset=10984
	struct tMenuItemControllerLeftRightChoice itemControllerConfigSelected; // size=44, offset=11004
	struct tMenuItemSlidingMenu itemControllerSettings; // size=68, offset=11048
	struct tOptionsMenu menuControllerConfig; // size=128, offset=11116
	struct tListIteratorRangeIndexed iteratorControllerShockMode; // size=20, offset=11244
	struct tInsideBoxControllerLeftRightSlider itemControllerShockMode; // size=40, offset=11264
	struct tListIteratorRangeIndexed iteratorControllerShockImpact; // size=20, offset=11304
	struct tInsideBoxControllerLeftRightSlider itemControllerShockImpact; // size=40, offset=11324
	struct tListIteratorRangeIndexed iteratorControllerSteeringRange1; // size=20, offset=11364
	struct tInsideBoxTwoWaySlider itemControllerSteeringRange1; // size=48, offset=11384
	struct tListIteratorRangeIndexed iteratorControllerDeadSpot1; // size=20, offset=11432
	struct tInsideBoxTwoWaySlider itemControllerDeadSpot1; // size=48, offset=11452
	struct tListIteratorRangeIndexed iteratorControllerSteeringRange2; // size=20, offset=11500
	struct tInsideBoxTwoWaySlider itemControllerSteeringRange2; // size=48, offset=11520
	struct tListIteratorRangeIndexed iteratorControllerDeadSpot2; // size=20, offset=11568
	struct tInsideBoxTwoWaySlider itemControllerDeadSpot2; // size=48, offset=11588
	struct tListIteratorRangeIndexed iteratorControllerJoyRange; // size=20, offset=11636
	struct tInsideBoxTwoWaySlider itemControllerJoyRange; // size=48, offset=11656
	struct tListIteratorRangeIndexed iteratorControllerCenterPoint; // size=20, offset=11704
	struct tInsideBoxTwoWaySlider itemControllerCenterPoint; // size=48, offset=11724
	struct tListIteratorRangeIndexed iteratorControllerIMax; // size=20, offset=11772
	struct tInsideBoxTwoWaySlider itemControllerIMax; // size=48, offset=11792
	struct tListIteratorRangeIndexed iteratorControllerIIMax; // size=20, offset=11840
	struct tInsideBoxTwoWaySlider itemControllerIIMax; // size=48, offset=11860
	struct tInsideBoxMenu menuControllerDualShock; // size=116, offset=11908
	struct tInsideBoxMenu menuControllerAnalog; // size=116, offset=12024
	struct tInsideBoxMenu menuControllerDualShockAnalog; // size=116, offset=12140
	struct tInsideBoxMenu menuControllerNegcon; // size=116, offset=12256
	struct tMemoryCardMenuItem itemSaveGame; // size=44, offset=12372
	struct tMemoryCardMenuItem itemLoadGame; // size=44, offset=12416
	struct tOptionsMenu menuMemory; // size=128, offset=12460
	struct tUserNameMenuItem menuItemUserName; // size=140, offset=12588
	struct tUserNameMenuItem menuItemUserName1; // size=140, offset=12728
	struct tUserNameMenuItem menuItemUserName2; // size=140, offset=12868
	struct tOptionsMenu menuUserName; // size=128, offset=13008
	struct tListIterator iteratorChangeTrophy; // size=16, offset=13136
	struct tBlankMenuItemNFS4LeftRightChoice itemChangeTrophy; // size=40, offset=13152
	struct tMenuNFS4Bottom menuTrophyRoom; // size=124, offset=13192
	struct tMenuItemGoToMenuNFS4Button itemPinkSlipStandingsForward; // size=44, offset=13316
	struct tMenuItemGoToMenuNFS4Button itemPinkSlipStandingsExit; // size=44, offset=13360
	struct tMenuNFS4 menuPinkSlipStandings; // size=124, offset=13404
	struct tMenuItemGoToMenuNFS4Button itemTournStandingsForward; // size=44, offset=13528
	struct tMenuItemGoToMenuNFS4Button itemTournStandingsExit; // size=44, offset=13572
	struct tMenuNFS4 menuTournamentStandings; // size=124, offset=13616
	struct tMenuItemGoToMenuNFS4Button itemTournamentFinishedHome; // size=44, offset=13740
	struct tMenuNFS4 menuTournamentFinished; // size=124, offset=13784
	struct tMenuBlank menuTournamentTrophy; // size=124, offset=13908
	struct tOptionsMenu menuPostGamePlayer1Name; // size=128, offset=14032
	struct tOptionsMenu menuPostGamePlayer2Name; // size=128, offset=14160
	struct tBlankMenuItemGoToMenuNFS4Button itemPostGameTrackRecordsContinue; // size=44, offset=14288
	struct tOptionsMenu menuPostGameTrackRecords; // size=128, offset=14332
	struct tMenuBlank menuPinkSlipCongrats; // size=124, offset=14460
	struct tMenuBlank menuBeTheCopCongrats; // size=124, offset=14584
	struct tMenuBlank menuTierCompleteCongrats; // size=124, offset=14708
	struct tMenuBlank menuCredits; // size=124, offset=14832
	struct tMemoryCardMenuItem itemMemContinue; // size=44, offset=14956
	struct tOptionsMenu menuPostGameSave; // size=128, offset=15000
};

struct PAD_COMMON_alt_definition_0034 // hashcode: 0x650D0D5E (dec: 1695354206)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __63 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0035 // hashcode: 0xD4213D4A (dec: -736019126)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __63 data; // size=6, offset=2
};

struct tMemCardData // hashcode: 0x4DE237BB (dec: 1306671035)
{
	unsigned long fSize; // size=0, offset=0
	unsigned long bonus; // size=0, offset=4
	struct tfrontEnd frontEnd; // size=1104, offset=8
	struct tSaveCarInfo carInfo; // size=224, offset=1112
	struct tSaveTrackInfo trackInfo; // size=16, offset=1336
	struct tSaveTournament tournament; // size=176, offset=1352
	struct tRecordBuffer records[187]; // size=3740, offset=1528
	unsigned long pinkSlipsNoCheat; // size=0, offset=5268
	unsigned long frontEndCRC; // size=0, offset=5272
	unsigned long carInfoCRC; // size=0, offset=5276
	unsigned long trackInfoCRC; // size=0, offset=5280
	unsigned long tournamentCRC; // size=0, offset=5284
	unsigned long recordsCRC; // size=0, offset=5288
};

struct MCRDOPTS_def // hashcode: 0x7ADD1C58 (dec: 2061311064)
{
	enum PRODUCTLOC productLocation; // size=4, offset=0
	char *productCode; // size=0, offset=4
	int bMoveIconsToVram; // size=0, offset=8
	struct RECT VramIconArea; // size=8, offset=12
	int (*ConfirmFormatProc)(); // size=0, offset=20
	int (*ConfirmOverwriteProc)(); // size=0, offset=24
	void (*LoadingDataProc)(); // size=0, offset=28
	void (*SavingDataProc)(); // size=0, offset=32
};

struct tVideoWallConfig // hashcode: 0xE3663219 (dec: -479841767)
{
	short numVideos; // size=0, offset=0
	short flags; // size=0, offset=2
	struct tVideo (*videos[4]); // size=16, offset=4
};

struct tVertex // hashcode: 0x6068A989 (dec: 1617471881)
{
	short x; // size=0, offset=0
	short y; // size=0, offset=2
};

struct PAD_COMMON_alt_definition_0036 // hashcode: 0xA580CE72 (dec: -1518285198)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __76 data; // size=6, offset=2
};

struct __84 // hashcode: 0xD9AE917A (dec: -642870918)
{
	char bActive; // size=0, offset=0
	char time; // size=0, offset=1
};

struct PAD_COMMON_alt_definition_0037 // hashcode: 0x6C78430B (dec: 1819820811)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __76 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0038 // hashcode: 0x75EAABBA (dec: 1978313658)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __63 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0039 // hashcode: 0xBA0D2163 (dec: -1173544605)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __63 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0040 // hashcode: 0x07095040 (dec: 118050880)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct LINE_F2 // hashcode: 0xBC182614 (dec: -1139268076)
{
	unsigned long tag; // size=0, offset=0
	unsigned char r0; // size=0, offset=4
	unsigned char g0; // size=0, offset=5
	unsigned char b0; // size=0, offset=6
	unsigned char code; // size=0, offset=7
	short x0; // size=0, offset=8
	short y0; // size=0, offset=10
	short x1; // size=0, offset=12
	short y1; // size=0, offset=14
};

struct PAD_COMMON_alt_definition_0041 // hashcode: 0xA9734E12 (dec: -1452061166)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct CdlFILE // hashcode: 0xDFCDCC9C (dec: -540160868)
{
	struct CdlLOC pos; // size=4, offset=0
	unsigned long size; // size=0, offset=4
	char name[16]; // size=16, offset=8
};

struct __79 // hashcode: 0x649D2AEE (dec: 1688021742)
{
	char bActive; // size=0, offset=0
	char time; // size=0, offset=1
};

struct DECENV // hashcode: 0xDDF8CD07 (dec: -570897145)
{
	unsigned long (*vlcbuf[2]); // size=8, offset=0
	int vlcid; // size=0, offset=8
	unsigned short *imgbuf; // size=0, offset=12
	struct RECT rect[2]; // size=16, offset=16
	int rectid; // size=0, offset=32
	struct RECT slice; // size=8, offset=36
	int isdone; // size=0, offset=44
};

struct CDSECTOR // hashcode: 0xA1D862A8 (dec: -1579654488)
{
	unsigned short id; // size=0, offset=0
	unsigned short type; // size=0, offset=2
	unsigned short secCount; // size=0, offset=4
	unsigned short nSectors; // size=0, offset=6
	unsigned long frameCount; // size=0, offset=8
	unsigned long frameSize; // size=0, offset=12
	unsigned short width; // size=0, offset=16
	unsigned short height; // size=0, offset=18
	unsigned long headm; // size=0, offset=20
	unsigned long headv; // size=0, offset=24
};

struct PAD_COMMON_alt_definition_0042 // hashcode: 0x208D4A46 (dec: 546130502)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct PAD_COMMON_alt_definition_0043 // hashcode: 0xEC77049D (dec: -327744355)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union __5 data; // size=6, offset=2
};

struct DR_OFFSET // hashcode: 0xDCFC5AC1 (dec: -587441471)
{
	unsigned long tag; // size=0, offset=0
	unsigned long code[2]; // size=8, offset=4
};

struct fMemCardInfo_def // hashcode: 0x3E29078A (dec: 1042876298)
{
	enum PRODUCTLOC productLocation; // size=4, offset=0
	char productCode[16]; // size=16, offset=4
	int bMoveIconsToVram; // size=0, offset=20
	struct RECT VramIconArea; // size=8, offset=24
	int (*ConfirmFormatProc)(); // size=0, offset=32
	int (*ConfirmOverwriteProc)(); // size=0, offset=36
	void (*LoadingDataProc)(); // size=0, offset=40
	void (*SavingDataProc)(); // size=0, offset=44
	enum MANAGERTASK task; // size=4, offset=48
	int bReady; // size=0, offset=52
	int fMultitap; // size=0, offset=56
	long channel; // size=0, offset=60
	int existencecheckticks[8]; // size=32, offset=64
	struct MCRDFILEHEADER_def header; // size=512, offset=96
	struct MCRDFILEINFO_def fileinfo; // size=572, offset=608
	struct CARDINFO_def card[8]; // size=4928, offset=1180
};

struct MDECSTRUCT // hashcode: 0x2F6BA3F8 (dec: 795583480)
{
	int id; // size=0, offset=0
	int width; // size=0, offset=4
	int height; // size=0, offset=8
	int bpp; // size=0, offset=12
	struct RECT framerect; // size=8, offset=16
	struct RECT striprect; // size=8, offset=24
	int striprectsize; // size=0, offset=32
	unsigned long *stripbuf; // size=0, offset=36
	unsigned long *vlcbuf; // size=0, offset=40
};

struct __62 // hashcode: 0x83CAA28B (dec: -2083872117)
{
	int numhandles; // size=0, offset=0
	int hDecode; // size=0, offset=4
};

struct windowtbl // hashcode: 0xFF495EB7 (dec: -11968841)
{
	long id; // size=0, offset=0
	int x; // size=0, offset=4
	int y; // size=0, offset=8
	int width; // size=0, offset=12
	int height; // size=0, offset=16
	unsigned char bpp; // size=0, offset=20
	unsigned char type; // size=0, offset=21
	unsigned char ram; // size=0, offset=22
	unsigned char unused; // size=0, offset=23
	int minx; // size=0, offset=24
	int miny; // size=0, offset=28
	int maxx; // size=0, offset=32
	int maxy; // size=0, offset=36
	struct shapetbl *shape; // size=20, offset=40
	struct DISPENV dispenv; // size=20, offset=44
	struct DRAWENV drawenv; // size=92, offset=64
};

struct STREAMCHUNKHDR // hashcode: 0xF677F2F6 (dec: -159911178)
{
	long type; // size=0, offset=0
	long size; // size=0, offset=4
};

struct VIDEOSTRUCT // hashcode: 0xEA050B47 (dec: -368768185)
{
	int id; // size=0, offset=0
	int bufferwidth; // size=0, offset=4
	int bufferheight; // size=0, offset=8
	char *streambuffer; // size=0, offset=12
	int mdechandle; // size=0, offset=16
	struct windowtbl *frame; // size=156, offset=20
	long videotap; // size=0, offset=24
	enum VIDEOSTATE state; // size=4, offset=28
	long streamrequestid; // size=0, offset=32
	int reftime; // size=0, offset=36
	int displaytime; // size=0, offset=40
	int displaytimefrac; // size=0, offset=44
	int displaytimeincr; // size=0, offset=48
	int framewidth; // size=0, offset=52
	int frameheight; // size=0, offset=56
	int droppedframes; // size=0, offset=60
};

struct ARGB // hashcode: 0xE017BE2E (dec: -535314898)
{
	unsigned char b; // size=0, offset=0
	unsigned char g; // size=0, offset=1
	unsigned char r; // size=0, offset=2
	unsigned char a; // size=0, offset=3
};

struct shapetbl_alt_definition_0001 // hashcode: 0x58031258 (dec: 1476596312)
{
	unsigned int type; // size=8, offset=0
	int next; // size=24, offset=8
	short width; // size=0, offset=4
	short height; // size=0, offset=6
	short centerx; // size=0, offset=8
	short centery; // size=0, offset=10
	short shapex; // size=0, offset=12
	short shapey; // size=0, offset=14
	unsigned char data; // size=0, offset=16
};

struct scoorddef // hashcode: 0x24F9FB90 (dec: 620362640)
{
	int x; // size=0, offset=0
	int y; // size=0, offset=4
};

struct SHAPETABLEENTRY_alt_definition_0001 // hashcode: 0x75FED892 (dec: 1979635858)
{
	unsigned char id[4]; // size=4, offset=0
	long offset; // size=0, offset=4
};

struct RPOINT // hashcode: 0x9E6E8A5C (dec: -1636922788)
{
	struct scoorddef uv; // size=8, offset=0
	struct coorddef xyz; // size=12, offset=8
	struct scoorddef xy; // size=8, offset=20
	int light; // size=0, offset=28
	struct ARGB fog; // size=4, offset=32
};

struct DIRENTRY_alt_definition_0001 // hashcode: 0xDC128B63 (dec: -602764445)
{
	unsigned char name[20]; // size=20, offset=0
	long attr; // size=0, offset=20
	long size; // size=0, offset=24
	struct DIRENTRY *next; // size=40, offset=28
	long head; // size=0, offset=32
	unsigned char system[4]; // size=4, offset=36
};

struct shapetbl_alt_definition_0002 // hashcode: 0xF7406DBD (dec: -146772547)
{
	unsigned int type; // size=8, offset=0
	int next; // size=24, offset=8
	short width; // size=0, offset=4
	short height; // size=0, offset=6
	short centerx; // size=0, offset=8
	short centery; // size=0, offset=10
	int shapex; // size=12, offset=96
	int reserved; // size=2, offset=108
	int transposed; // size=1, offset=110
	int rotated; // size=1, offset=111
	int shapey; // size=12, offset=112
	int mipmaps; // size=4, offset=124
	unsigned char data; // size=0, offset=16
};

struct PSXCDFILEINFO_def // hashcode: 0x68963BA9 (dec: 1754676137)
{
	unsigned char name[12]; // size=12, offset=0
	int sector; // size=0, offset=12
	int length; // size=0, offset=16
};

struct cdstreamstruct_alt_definition_0001 // hashcode: 0x775CF151 (dec: 2002579793)
{
	long id; // size=0, offset=0
	unsigned char *start; // size=0, offset=4
	unsigned char *end; // size=0, offset=8
	unsigned char *write; // size=0, offset=12
	unsigned char *header; // size=0, offset=16
	unsigned char *get; // size=0, offset=20
	unsigned char *release; // size=0, offset=24
	int handle; // size=0, offset=28
	int state; // size=0, offset=32
	int control; // size=0, offset=36
	int status; // size=0, offset=40
	int abort; // size=0, offset=44
	int datahascrc; // size=0, offset=48
	int crcerrors; // size=0, offset=52
	int crcretries; // size=0, offset=56
	int buffersize; // size=0, offset=60
	long blocksize; // size=0, offset=64
	int readsize; // size=0, offset=68
	int chunksize; // size=0, offset=72
	int relocationsize; // size=0, offset=76
	long fileoffset; // size=0, offset=80
	int fileend; // size=0, offset=84
	long filesize; // size=0, offset=88
	int dataoffset; // size=0, offset=92
	int seekposition; // size=0, offset=96
	int seekoffset; // size=0, offset=100
	int idtype; // size=0, offset=104
	int idmask; // size=0, offset=108
	struct cdstreamstruct *nextstream; // size=152, offset=112
	void *emptyblock; // size=0, offset=116
	void *head; // size=0, offset=120
	void *tail; // size=0, offset=124
	void *block; // size=0, offset=128
	int timer; // size=0, offset=132
	int blocktime; // size=0, offset=136
	int streamfull; // size=0, offset=140
	int getable; // size=0, offset=144
	int releaseable; // size=0, offset=148
};

struct PAD_COMMON_alt_definition_0044 // hashcode: 0xD9D852F7 (dec: -640134409)
{
	unsigned char nopad; // size=0, offset=0
	unsigned char ID; // size=0, offset=1
	union {
		struct PAD_PSX standard; // size=6, offset=0
		struct PAD_ANALOG analog; // size=6, offset=0
	} data; // size=6, offset=2, found in object files: ..\eaclib\psx\pad.obj, ..\eaclib\psx\pad.obj
};

struct PAD_63fake // hashcode: 0x98AD14E7 (dec: -1733487385)
{
	int initialized; // size=0, offset=0
	struct PAD_COMMON buf[8]; // size=64, offset=4
	struct {
		unsigned char bActive; // size=0, offset=0
		unsigned char time; // size=0, offset=1
	} state; // size=16, offset=68, found in object files: ..\eaclib\psx\pad.obj, ..\eaclib\psx\pad.obj
};
/* End structs */

/* Begin unions */

union __68 // Hashcode: 0x78AF9DF0 (dec: 2024775152)
{
	struct PAD_PSX standard; // size=6, offset=0
	struct PAD_NEGCON negcon; // size=6, offset=0
	struct PAD_MOUSE mouse; // size=6, offset=0
	struct PAD_ANALOG analog; // size=6, offset=0
};

union trigger_t // Hashcode: 0x4E8DAF00 (dec: 1317908224)
{
	struct trigger_anyTrigger_t any; // size=8, offset=0
	struct trigger_simple_t simple; // size=20, offset=0
	struct trigger_roadblock_t roadblock; // size=20, offset=0
	struct trigger_offroad_t offroad; // size=72, offset=0
	struct trigger_trafficAccident_t trafficAccident; // size=56, offset=0
	struct trigger_trafficPath_t trafficPath; // size=64, offset=0
};

union __84 // Hashcode: 0x204CBDCB (dec: 541900235)
{
	struct PAD_PSX standard; // size=6, offset=0
	struct PAD_NEGCON negcon; // size=6, offset=0
	struct PAD_MOUSE mouse; // size=6, offset=0
	struct PAD_ANALOG analog; // size=6, offset=0
};

union __82 // Hashcode: 0x98783367 (dec: -1736952985)
{
	struct PAD_PSX standard; // size=6, offset=0
	struct PAD_NEGCON negcon; // size=6, offset=0
	struct PAD_MOUSE mouse; // size=6, offset=0
	struct PAD_ANALOG analog; // size=6, offset=0
};

union __99 // Hashcode: 0xF6AA7812 (dec: -156600302)
{
	struct PAD_PSX standard; // size=6, offset=0
	struct PAD_NEGCON negcon; // size=6, offset=0
	struct PAD_MOUSE mouse; // size=6, offset=0
	struct PAD_ANALOG analog; // size=6, offset=0
};

union __70 // Hashcode: 0x2E76F480 (dec: 779547776)
{
	struct PAD_PSX standard; // size=6, offset=0
	struct PAD_NEGCON negcon; // size=6, offset=0
	struct PAD_MOUSE mouse; // size=6, offset=0
	struct PAD_ANALOG analog; // size=6, offset=0
};

union __74 // Hashcode: 0x58C6C81E (dec: 1489422366)
{
	struct PAD_PSX standard; // size=6, offset=0
	struct PAD_NEGCON negcon; // size=6, offset=0
	struct PAD_MOUSE mouse; // size=6, offset=0
	struct PAD_ANALOG analog; // size=6, offset=0
};

union __5 // Hashcode: 0x1D6D34EC (dec: 493696236)
{
	struct PAD_PSX standard; // size=6, offset=0
	struct PAD_NEGCON negcon; // size=6, offset=0
	struct PAD_MOUSE mouse; // size=6, offset=0
	struct PAD_ANALOG analog; // size=6, offset=0
};

union __69 // Hashcode: 0x219D698E (dec: 563964302)
{
	struct PAD_PSX standard; // size=6, offset=0
	struct PAD_NEGCON negcon; // size=6, offset=0
	struct PAD_MOUSE mouse; // size=6, offset=0
	struct PAD_ANALOG analog; // size=6, offset=0
};

union __63 // Hashcode: 0x628055B0 (dec: 1652577712)
{
	struct PAD_PSX standard; // size=6, offset=0
	struct PAD_NEGCON negcon; // size=6, offset=0
	struct PAD_MOUSE mouse; // size=6, offset=0
	struct PAD_ANALOG analog; // size=6, offset=0
};

union __66 // Hashcode: 0xF4214080 (dec: -199147392)
{
	struct PAD_PSX standard; // size=6, offset=0
	struct PAD_NEGCON negcon; // size=6, offset=0
	struct PAD_MOUSE mouse; // size=6, offset=0
	struct PAD_ANALOG analog; // size=6, offset=0
};

union __76 // Hashcode: 0x940E1122 (dec: -1811017438)
{
	struct PAD_PSX standard; // size=6, offset=0
	struct PAD_NEGCON negcon; // size=6, offset=0
	struct PAD_MOUSE mouse; // size=6, offset=0
	struct PAD_ANALOG analog; // size=6, offset=0
};
/* End unions */

/* Begin typedefs */

typedef struct MATRIX MATRIX;

typedef struct VECTOR VECTOR;

typedef struct SVECTOR SVECTOR;

typedef struct CVECTOR CVECTOR;

typedef struct DVECTOR DVECTOR;

typedef struct RVECTOR RVECTOR;

typedef struct CRVECTOR3 CRVECTOR3;

typedef struct CRVECTOR4 CRVECTOR4;

typedef struct RECT RECT;

typedef struct DR_ENV DR_ENV;

typedef struct DRAWENV DRAWENV;

typedef struct DISPENV DISPENV;

typedef struct DR_MODE DR_MODE;

typedef struct shapetbl shapetbl;

typedef struct shapetbl SHAPE;

typedef struct coorddef coorddef;

typedef struct coorddef LIBCOORD;

typedef struct matrixtdef matrixtdef;

typedef struct matrixtdef MATRIX3DT;

typedef struct cdstreamstruct cdstreamstruct;

typedef struct cdstreamstruct CDSTREAM;

typedef struct linedef linedef;

typedef struct linedef LINE;

typedef struct SHAPETABLEENTRY SHAPETABLEENTRY;

typedef struct PCOORD16 PCOORD16;

typedef struct COORD16 COORD16;

typedef struct CCOORD16 CCOORD16;

typedef struct PAD_PSX PAD_PSX;

typedef struct PAD_NEGCON PAD_NEGCON;

typedef struct PAD_ANALOG PAD_ANALOG;

typedef struct PAD_MOUSE PAD_MOUSE;

typedef struct PAD_COMMON PAD_COMMON;

typedef struct Draw_tPixMap Draw_tPixMap;

typedef struct DRender_tCalcView DRender_tCalcView;

typedef struct Draw_SVertex Draw_SVertex;

typedef struct Draw_PrimStruct Draw_PrimStruct;

typedef struct Draw_tCacheHeader Draw_tCacheHeader;

typedef struct Draw_CarVertex Draw_CarVertex;

typedef struct Group Group;

typedef struct Trk_ObjectDef Trk_ObjectDef;

typedef struct Trk_CollideBoomInst Trk_CollideBoomInst;

typedef struct Trk_AnimateInst Trk_AnimateInst;

typedef struct Trk_Quad Trk_Quad;

typedef struct Trk_NewStrip Trk_NewStrip;

typedef struct Trk_NewSimQuad Trk_NewSimQuad;

typedef struct Trk_NewSimSlice Trk_NewSimSlice;

typedef struct Trk_SimObject Trk_SimObject;

typedef struct RelCoord16 RelCoord16;

typedef struct tSaveSurface tSaveSurface;

typedef struct BWorldSm_Pos BWorldSm_Pos;

typedef struct BO_tNewtonCollisionInfo BO_tNewtonCollisionInfo;

typedef struct BO_tNewtonObj BO_tNewtonObj;

typedef struct GameSetup_tCarData GameSetup_tCarData;

typedef struct GameSetup_tUserSetting GameSetup_tUserSetting;

typedef struct GameSetup_tPerpData GameSetup_tPerpData;

typedef struct GameSetup_tControllerData GameSetup_tControllerData;

typedef struct Sched_tFunctionSchedule Sched_tFunctionSchedule;

typedef struct Sched_tSchedule Sched_tSchedule;

typedef struct COORD16 Transformer_zVertex;

typedef struct Transformer_zUV Transformer_zUV;

typedef struct Transformer_zFacet Transformer_zFacet;

typedef struct Transformer_zObj Transformer_zObj;

typedef struct Transformer_zOverlay Transformer_zOverlay;

typedef enum Udff_tAccessType Udff_tAccessType;

typedef struct AIPerson_t AIPerson_t;

typedef enum AIScript_tPlayAction AIScript_tPlayAction;

typedef enum AIScript_tAIReaction AIScript_tAIReaction;

typedef struct AIScript_tReactionDetails AIScript_tReactionDetails;

typedef struct AIScript_t AIScript_t;

typedef enum speechModeType speechModeType;

typedef enum speechIntensityType speechIntensityType;

typedef enum speechSourceType speechSourceType;

typedef struct AISpeechInfo_t AISpeechInfo_t;

typedef struct Car_tStats Car_tStats;

typedef struct Car_tControl Car_tControl;

typedef struct Car_tWheel Car_tWheel;

typedef struct Car_tSpecs Car_tSpecs;

typedef struct Cars_tCollisionInfo Cars_tCollisionInfo;

typedef struct Cars_tAudio Cars_tAudio;

typedef struct Cars_tRenderInfo Cars_tRenderInfo;

typedef enum donutMode_t donutMode_t;

typedef struct Car_tObj Car_tObj;

typedef struct AI_tInfo AI_tInfo;

typedef struct AIPhysic_ModelConfig_t AIPhysic_ModelConfig_t;

typedef struct AIPhysic_BrakeInfo AIPhysic_BrakeInfo;

typedef enum AIDataRecord_RecordMethod_t AIDataRecord_RecordMethod_t;

typedef struct AIDataRecord_t AIDataRecord_t;

typedef struct AIDataRecord_AccTable_t AIDataRecord_AccTable_t;

typedef struct AIDataRecord_BestLine_t AIDataRecord_BestLine_t;

typedef struct AIDataRecord_CurveSpeedTable_t AIDataRecord_CurveSpeedTable_t;

typedef struct BW_tContext BW_tContext;

typedef struct AnimScript AnimScript;

typedef struct SceneElem SceneElem;

typedef struct SceneSortedElem SceneSortedElem;

typedef struct AnimDef AnimDef;

typedef struct ObjectAnim ObjectAnim;

typedef struct ObjectFinishedMultiAnim ObjectFinishedMultiAnim;

typedef struct ObjectFinishedSignAnim ObjectFinishedSignAnim;

typedef unsigned int size_t;

typedef void *va_list;

typedef unsigned char u_char;

typedef unsigned short u_short;

typedef unsigned int u_int;

typedef unsigned long u_long;

typedef unsigned short ushort;

typedef struct _physadr *physadr;

typedef long daddr_t;

typedef char *caddr_t;

typedef long *qaddr_t;

typedef unsigned long ino_t;

typedef long swblk_t;

typedef long time_t;

typedef short dev_t;

typedef long off_t;

typedef unsigned short uid_t;

typedef unsigned short gid_t;

typedef void (*VOIDFN)();

typedef int FILEOP;

typedef void FILE_CALLBACK();

typedef int FILE_ATOM();

typedef void THREADPROC();

typedef void THREAD2PROC();

typedef int SYSTEMTASK();

typedef int THREAD;

typedef int INTFN();

typedef void MVI;

typedef int EACHOOKCALLBACKFUNC();

typedef int arg_t;

typedef int boolean;

typedef int fixed88;

typedef int fixed824;

typedef int fixed248;

typedef void Trk_Chunk;

typedef void *lpTrk_Chunk;

typedef short (*tPA32)[32];

typedef void (*Sched_tFunctionPt)();

typedef struct Udff_tInfo *Udff_tHandle;

typedef int AIPerson_tGlueTable[21];

typedef struct AIScript_tReactionDetails AIScript_tScriptData[7];

typedef short Car_tAccTable[112];

typedef int CarLogic_tObservations[1][3];

typedef struct AIDelayCar AIDelayCar;

typedef struct copLevel_t copLevel_t;

typedef struct copGame_t copGame_t;

typedef enum copType copType;

typedef enum crimeType crimeType;

typedef struct AICop_BasicPerpInfo AICop_BasicPerpInfo;

typedef struct AICop_PerpChaseInfo AICop_PerpChaseInfo;

typedef struct trigger_anyTrigger_t trigger_anyTrigger_t;

typedef struct trigger_simple_t trigger_simple_t;

typedef struct trigger_roadblock_t trigger_roadblock_t;

typedef struct trigger_offroad_t trigger_offroad_t;

typedef struct trigger_trafficAccident_t trigger_trafficAccident_t;

typedef struct trigger_pathPosition_t trigger_pathPosition_t;

typedef struct trigger_trafficPath_t trigger_trafficPath_t;

typedef union trigger_t trigger_t;

typedef struct AIState_Base AIState_Base;

typedef struct AIState_None AIState_None;

typedef struct AIState_Normal AIState_Normal;

typedef struct AIState_NonActive AIState_NonActive;

typedef enum cruiseMode_t cruiseMode_t;

typedef enum stateType_t stateType_t;

typedef enum AIHigh_CopGameType_t AIHigh_CopGameType_t;

typedef enum Wingman_Role Wingman_Role;

typedef struct AIHigh_Base AIHigh_Base;

typedef struct AIHigh_None AIHigh_None;

typedef struct AIHigh_BasicPerp AIHigh_BasicPerp;

typedef struct AIHigh_Player AIHigh_Player;

typedef enum AIHigh_tAttackMode AIHigh_tAttackMode;

typedef struct AIHigh_BTC_Perp AIHigh_BTC_Perp;

typedef enum blockadeMode_t blockadeMode_t;

typedef struct blockade_t blockade_t;

typedef enum AIHigh_tDriveAwayMode AIHigh_tDriveAwayMode;

typedef struct AIHigh_BasicCop AIHigh_BasicCop;

typedef struct AIHigh_BTC_Cop AIHigh_BTC_Cop;

typedef struct AIHigh_BTC_HumanCop AIHigh_BTC_HumanCop;

typedef struct AIHigh_Cop AIHigh_Cop;

typedef enum forceFocus_t forceFocus_t;

typedef struct SPCHNFSType_POSITION SPCHNFSType_POSITION;

typedef struct SPCHNFSType_DISTANCE SPCHNFSType_DISTANCE;

typedef struct SPCHNFSType_COLOUR SPCHNFSType_COLOUR;

typedef struct SPCHNFSType_ACCIDENT SPCHNFSType_ACCIDENT;

typedef struct SPCHNFSType_AMBULANCE SPCHNFSType_AMBULANCE;

typedef struct SPCHNFSType_PURS_UPDT SPCHNFSType_PURS_UPDT;

typedef struct SPCHNFSType_ARREST SPCHNFSType_ARREST;

typedef struct SPCHNFSType_vs_RDBLK_SSTRP SPCHNFSType_vs_RDBLK_SSTRP;

typedef struct SPCHNFSType_PERP_NAME SPCHNFSType_PERP_NAME;

typedef struct SPCHNFSType_CONFIRM SPCHNFSType_CONFIRM;

typedef struct SPCHNFSType_SPIKE_BELT_SIDE SPCHNFSType_SPIKE_BELT_SIDE;

typedef struct SPCHNFSType_REVINTRO SPCHNFSType_REVINTRO;

typedef struct CarBank CarBank;

typedef struct LocationBank LocationBank;

typedef struct CallSignBank CallSignBank;

typedef struct Speaker Speaker;

typedef long (*SampleRequestFuncPtr)();

typedef long (*TestSentenceRuleFuncPtr)();

typedef void (*SetSentenceRuleFuncPtr)();

typedef char (**MemAllocFuncPtr)();

typedef void (*MemFreeFuncPtr)();

typedef long (*ReparmFuncPtr)();

typedef long (*TraceFuncPtr)();

typedef struct Trk_SFX Trk_SFX;

typedef struct FLARE_PIECE_DEF FLARE_PIECE_DEF;

typedef struct POLY_GT4 POLY_GT4;

typedef struct Draw_SubdivStruct Draw_SubdivStruct;

typedef struct Track_tArtresource Track_tArtresource;

typedef struct Track_tMaterial Track_tMaterial;

typedef struct AIState_Chase AIState_Chase;

typedef struct AIState_GotoSlice AIState_GotoSlice;

typedef struct AIHigh_BTC_Wingman AIHigh_BTC_Wingman;

typedef struct AIHigh_Traffic AIHigh_Traffic;

typedef struct TCB TCB;

typedef struct EXEC EXEC;

typedef struct DIRENTRY DIRENTRY;

typedef struct Skidmark_Segment Skidmark_Segment;

typedef struct Skidmark_Chunk Skidmark_Chunk;

typedef int Input_tDeviceCall();

typedef struct AIHigh_BTC_HumanPerp AIHigh_BTC_HumanPerp;

typedef struct AIHigh_BTC_AIPerp AIHigh_BTC_AIPerp;

typedef struct AITrigger_TriggerManager AITrigger_TriggerManager;

typedef struct AIHigh_Human AIHigh_Human;

typedef struct AIHigh_Opponent AIHigh_Opponent;

typedef struct AIState_Idle AIState_Idle;

typedef struct AICop_spikeBelt_t AICop_spikeBelt_t;

typedef enum AICop_RoadBlockState AICop_RoadBlockState;

typedef struct Udff_tInfo Udff_tInfo;

typedef struct AIPhysic_Config_t AIPhysic_Config_t;

typedef enum Gear_t Gear_t;

typedef enum eRampType eRampType;

typedef struct kernpair kernpair;

typedef struct kernpair KERN;

typedef void (*fontblit)();

typedef int (*getcode)();

typedef void (*fontblitbegin)();

typedef void (*fontblitend)();

typedef void (*adjustchar)();

typedef enum AIDataRecord_WhichRecord_t AIDataRecord_WhichRecord_t;

typedef struct AIDataRecord_TrackCurve_t AIDataRecord_TrackCurve_t;

typedef struct AIDataRecord_CarTracking_t AIDataRecord_CarTracking_t;

typedef struct AISpeeds_tLeaderBoard AISpeeds_tLeaderBoard;

typedef struct AISpeeds_Upgrade_t AISpeeds_Upgrade_t;

typedef struct AISpeeds_tSlotInfo AISpeeds_tSlotInfo;

typedef struct speedData_t speedData_t;

typedef struct AIState_Offroad AIState_Offroad;

typedef struct AIState_Purgatory AIState_Purgatory;

typedef struct AIState_RovingTraffic AIState_RovingTraffic;

typedef struct AIState_Donuts AIState_Donuts;

typedef struct AIState_Cruise AIState_Cruise;

typedef enum triggerType triggerType;

typedef struct accelscale_t accelscale_t;

typedef struct copTuning_t copTuning_t;

typedef struct AITune_tTrackInfo AITune_tTrackInfo;

typedef struct AITune_BTC_t AITune_BTC_t;

typedef struct tQuat tQuat;

typedef struct tQuat Quatern_quat;

typedef struct Trk_AnimateBoomInst Trk_AnimateBoomInst;

typedef struct Anim_tFrame Anim_tFrame;

typedef struct SNDSYSCAP SNDSYSCAP;

typedef struct SNDSYSSET SNDSYSSET;

typedef struct SNDSYSVEC SNDSYSVEC;

typedef struct SNDSAMPLEFORMAT SNDSAMPLEFORMAT;

typedef struct AudioClc_tSource AudioClc_tSource;

typedef struct AudioClc_tPlayer AudioClc_tPlayer;

typedef struct AudioClc_tCLCache AudioClc_tCLCache;

typedef struct SNDPLAYOPTS SNDPLAYOPTS;

typedef struct SndBnk_t SndBnk_t;

typedef struct Channels_t Channels_t;

typedef enum s_type s_type;

typedef struct AudioMus_tSongEntry AudioMus_tSongEntry;

typedef struct tTexture_ShapeInfo tTexture_ShapeInfo;

typedef enum tMenuCommandType tMenuCommandType;

typedef struct tListIterator tListIterator;

typedef struct tListIteratorRange tListIteratorRange;

typedef struct tMenuItem tMenuItem;

typedef struct tMenuItemInteractive tMenuItemInteractive;

typedef struct tMenu tMenu;

typedef enum tCarModels tCarModels;

typedef struct tCarInfo tCarInfo;

typedef struct tOwnedCarInfo tOwnedCarInfo;

typedef enum tCarNameLength tCarNameLength;

typedef struct tCarManager tCarManager;

typedef enum tPersonalities tPersonalities;

typedef struct tfrontEnd tfrontEnd;

typedef struct CopSpeak_tRequest CopSpeak_tRequest;

typedef struct AudioCmn_tReTrig AudioCmn_tReTrig;

typedef struct AudioCmn_tAsyncSfxSlot AudioCmn_tAsyncSfxSlot;

typedef struct tMenuItem (*tItemList[16]);

typedef struct tRecordBuffer tSaveRecords[187];

typedef struct AudioMus_tCurrentSong AudioMus_tCurrentSong;

typedef struct AudioMus_tSongList AudioMus_tSongList;

typedef struct SNDREQUESTSTATUS SNDREQUESTSTATUS;

typedef struct SNDSTREAMSTATUS SNDSTREAMSTATUS;

typedef struct SNDLIMITS SNDLIMITS;

typedef struct CdlLOC CdlLOC;

typedef struct AudioMus_tMusicGlobals AudioMus_tMusicGlobals;

typedef void (*CdlCB)();

typedef struct CAudioList CAudioList;

typedef struct AudioEng_tEvent AudioEng_tEvent;

typedef struct AudioEng_tTable AudioEng_tTable;

typedef struct AudioEng_tDef AudioEng_tDef;

typedef struct AudioEng_tChanAttr AudioEng_tChanAttr;

typedef struct AudioEng_tAdjustments AudioEng_tAdjustments;

typedef struct AudioEng_tVoiceAttr AudioEng_tVoiceAttr;

typedef struct AudioEng_tState AudioEng_tState;

typedef struct AudioEng_t AudioEng_t;

typedef struct AudioElem AudioElem;

typedef struct AudioTrk_tAmbientChannel AudioTrk_tAmbientChannel;

typedef struct AudioTrk_tGlobals AudioTrk_tGlobals;

typedef struct DRender_tView DRender_tView;

typedef struct Draw_DCache Draw_DCache;

typedef struct Chunk Chunk;

typedef struct BW_tContextMgr BW_tContextMgr;

typedef struct tBuildEntry tBuildEntry;

typedef struct CHorizonSpec CHorizonSpec;

typedef struct CSkySpec CSkySpec;

typedef struct CNightSpec CNightSpec;

typedef struct CWeatherSpec CWeatherSpec;

typedef struct CFogSpec CFogSpec;

typedef struct CDepthCueSpec CDepthCueSpec;

typedef struct CWorldColor CWorldColor;

typedef unsigned char Night_tLightingTable[256][16];

typedef unsigned char Night_tWeatherLightingTable[256];

typedef unsigned char Night_tCopLightingTable[256][8];

typedef struct Trk_NewSlice Trk_NewSlice;

typedef struct tNormalCacheEntry tNormalCacheEntry;

typedef struct camera_info camera_info;

typedef struct camera_info Camera_tInfo;

typedef struct camera_flags camera_flags;

typedef struct camera_flags Camera_tFlags;

typedef struct Camera_tCamSlot Camera_tCamSlot;

typedef struct SimpleMem SimpleMem;

typedef struct SerializedGroup SerializedGroup;

typedef struct Trk_SimpleInst Trk_SimpleInst;

typedef struct Clock_tGameClock Clock_tGameClock;

typedef struct Object_tSimObjList Object_tSimObjList;

typedef struct HudPmx_tShape HudPmx_tShape;

typedef struct HudPmx_tUV HudPmx_tUV;

typedef struct SPCHNFSType_vs_KMH_MPH SPCHNFSType_vs_KMH_MPH;

typedef struct SPCHNFSType_VOICE SPCHNFSType_VOICE;

typedef struct CarBankName CarBankName;

typedef struct Speech Speech;

typedef struct DispatchSpeaker DispatchSpeaker;

typedef struct MobileSpeaker MobileSpeaker;

typedef struct Speech_tCarDescription Speech_tCarDescription;

typedef struct Speech_tLocationDescription Speech_tLocationDescription;

typedef struct Speech_tCallSignDescription Speech_tCallSignDescription;

typedef struct Speech_tMobileVoiceAttr Speech_tMobileVoiceAttr;

typedef struct CopSpeak_tFileIndex CopSpeak_tFileIndex;

typedef struct CopSpeak_tBankHeader CopSpeak_tBankHeader;

typedef struct CopSpeak_tBank CopSpeak_tBank;

typedef struct dashhud_info dashhud_info;

typedef struct dashhud_info DashHUD_tInfo;

typedef struct FEI_tList FEI_tList;

typedef struct GameSetup_tData GameSetup_tData;

typedef struct Input_tResults Input_tResults;

typedef enum tPMenuCommandType tPMenuCommandType;

typedef enum tInputKeyType tInputKeyType;

typedef struct tPMenuCommand tPMenuCommand;

typedef struct tPListIterator tPListIterator;

typedef struct tPListIteratorIndexed tPListIteratorIndexed;

typedef struct tPMenuItem tPMenuItem;

typedef struct tPMenuItemNonInteractiveText tPMenuItemNonInteractiveText;

typedef struct tPMenuItemInteractive tPMenuItemInteractive;

typedef struct tPMenuItemLeftRightChoice tPMenuItemLeftRightChoice;

typedef struct tPMenuItemLeftRightSlider tPMenuItemLeftRightSlider;

typedef struct tPMenuItemLeftRightSliderIndexed tPMenuItemLeftRightSliderIndexed;

typedef struct tPMenuItemGoToMenuButton tPMenuItemGoToMenuButton;

typedef struct tPMenuItemCommandButton tPMenuItemCommandButton;

typedef struct tPMenu tPMenu;

typedef struct tPauseMenuDefs tPauseMenuDefs;

typedef struct tPMenuItem (*tPItemList[16]);

typedef struct tNfsSystemInfo tNfsSystemInfo;

typedef struct tListIteratorIndexed tListIteratorIndexed;

typedef enum tCarClassType tCarClassType;

typedef struct tCarLineup tCarLineup;

typedef enum tTrackClassType tTrackClassType;

typedef struct tTrackInformation tTrackInformation;

typedef struct tTrackManager tTrackManager;

typedef struct tTierInfo tTierInfo;

typedef struct tTourneyInfo tTourneyInfo;

typedef struct tTrackInfo tTrackInfo;

typedef struct tTournamentDefinition tTournamentDefinition;

typedef struct tAwardInformation tAwardInformation;

typedef struct tCompetitor tCompetitor;

typedef struct tTournamentManager tTournamentManager;

typedef struct tMissionTierInfo tMissionTierInfo;

typedef struct tMissionInfo tMissionInfo;

typedef struct tStageInfo tStageInfo;

typedef struct tAcademyDefinition tAcademyDefinition;

typedef struct tMissionManager tMissionManager;

typedef struct tActiveLine tActiveLine;

typedef struct tShapeInformation tShapeInformation;

typedef struct tScreen tScreen;

typedef struct tDialogBase tDialogBase;

typedef struct tDialogMessageString tDialogMessageString;

typedef struct tDialogInteractive tDialogInteractive;

typedef struct tDialogYesNo tDialogYesNo;

typedef struct tCredit tCredit;

typedef struct tCreditManager tCreditManager;

typedef struct tRecordBuffer tRecordBuffer;

typedef struct ObjectMultiAnim ObjectMultiAnim;

typedef struct ObjectSignAnim ObjectSignAnim;

typedef struct Object_tIMassObjInfo Object_tIMassObjInfo;

typedef struct Physics_tWheelAccStruct Physics_tWheelAccStruct;

typedef struct Draw_tVertex Draw_tVertex;

typedef struct Draw_CarCache Draw_CarCache;

typedef struct Transformer_zScene Transformer_zScene;

typedef struct R3DCar_tEnvMapInfo R3DCar_tEnvMapInfo;

typedef struct POLY_F4 POLY_F4;

typedef struct POLY_FT4 POLY_FT4;

typedef struct DR_STP DR_STP;

typedef struct tControllerData tControllerData;

typedef struct tReplayInterface tReplayInterface;

typedef struct tReplayCameraModes tReplayCameraModes;

typedef struct tReplayBuffer tReplayBuffer;

typedef struct CSceneList CSceneList;

typedef struct Sim_tSimGlobalVar Sim_tSimGlobalVar;

typedef struct Sim_tSimSystemVar Sim_tSimSystemVar;

typedef enum VALIDITY VALIDITY;

typedef struct sim_queue sim_queue;

typedef struct sim_queue SIM_QUEUE;

typedef struct Souffle_tISouffle Souffle_tISouffle;

typedef struct Stats_tPosition Stats_tPosition;

typedef struct Trk_Material Trk_Material;

typedef struct TrackHeader TrackHeader;

typedef struct SaveSurface SaveSurface;

typedef struct tBoundingSphere tBoundingSphere;

typedef struct Track_MipMap Track_MipMap;

typedef struct Track_MultiPalette Track_MultiPalette;

typedef struct Track_tMaterialController Track_tMaterialController;

typedef struct tSkid tSkid;

typedef struct SNDSYSOPTS SNDSYSOPTS;

typedef struct SpuVolume SpuVolume;

typedef struct SpuExtAttr SpuExtAttr;

typedef struct SpuStVoiceAttr SpuStVoiceAttr;

typedef void (*SpuIRQCallbackProc)();

typedef void (*SpuTransferCallbackProc)();

typedef void (*SpuStCallbackProc)();

typedef struct CarIO_textureInfo CarIO_textureInfo;

typedef struct Input_tDeviceList Input_tDeviceList;

typedef struct dflip dflip;

typedef struct Draw_tView Draw_tView;

typedef struct POLY_FT3 POLY_FT3;

typedef struct POLY_G3 POLY_G3;

typedef struct DrawC_tEnvMap DrawC_tEnvMap;

typedef struct POLY_GT3 POLY_GT3;

typedef struct DR_TWIN DR_TWIN;

typedef struct Trk_Line Trk_Line;

typedef struct Draw_tGiveShelbyMoreCache Draw_tGiveShelbyMoreCache;

typedef struct Draw_tCtrlSkidmark Draw_tCtrlSkidmark;

typedef struct ChunkObjectInfo ChunkObjectInfo;

typedef unsigned long wchar_t_alt_definition_0001;

typedef struct Force_tGlobal Force_tGlobal;

typedef struct charactertbl charactertbl;

typedef struct charactertbl FONTFILECHAR;

typedef struct SPRT SPRT;

typedef struct cluttbl cluttbl;

typedef struct POLY_G4 POLY_G4;

typedef struct LINE_G2 LINE_G2;

typedef struct Draw_FlareCache Draw_FlareCache;

typedef struct FLARE_DEF FLARE_DEF;

typedef struct Flare_tInfo Flare_tInfo;

typedef struct TILE_1 TILE_1;

typedef struct Draw_HorizonCache Draw_HorizonCache;

typedef struct Draw_SkyCache Draw_SkyCache;

typedef struct tHrz_LightningFork tHrz_LightningFork;

typedef struct tHrz_Lightning tHrz_Lightning;

typedef struct POLY_F3 POLY_F3;

typedef struct tSmallCoordXY tSmallCoordXY;

typedef struct tBTCPerpInfo tBTCPerpInfo;

typedef struct tCompRGB tCompRGB;

typedef struct tNightInitCache tNightInitCache;

typedef struct CARD_FILE_HEADER CARD_FILE_HEADER;

typedef struct eacelement eacelement;

typedef struct eacelement EACELEMENT;

typedef unsigned int qfunc();

typedef struct sfxsouffle sfxsouffle;

typedef struct Sfx_tCache Sfx_tCache;

typedef struct Texture_pal8bit Texture_pal8bit;

typedef struct CSVECTOR CSVECTOR;

typedef struct TP_ZPaletteSystem TP_ZPaletteSystem;

typedef struct TP_ZPaletteSystem TP_tZPaletteSystem;

typedef struct FogKey FogKey;

typedef struct CTrackSpecHeader CTrackSpecHeader;

typedef struct CTrackSpec CTrackSpec;

typedef enum Weather_tState Weather_tState;

typedef struct Weather_tSys Weather_tSys;

typedef struct Weather_tSplatInfo Weather_tSplatInfo;

typedef struct DR_AREA DR_AREA;

typedef struct tMenuCommand tMenuCommand;

typedef struct tListIteratorRangeIndexed tListIteratorRangeIndexed;

typedef struct tMenuItemLeftRightChoice tMenuItemLeftRightChoice;

typedef struct tMenuItemLeftRightSlider tMenuItemLeftRightSlider;

typedef struct tMenuItemGoToMenuButton tMenuItemGoToMenuButton;

typedef struct tDrawShapeExtended tDrawShapeExtended;

typedef struct tDialogHelp tDialogHelp;

typedef struct tDialogMessageStringWithTimeout tDialogMessageStringWithTimeout;

typedef struct tDialogNoInputMessage tDialogNoInputMessage;

typedef enum tAppCommand tAppCommand;

typedef struct tFEApplication tFEApplication;

typedef struct tMenuItemGoToMenuNFS4Button tMenuItemGoToMenuNFS4Button;

typedef struct tMenuItemNFS4LeftRightChoice tMenuItemNFS4LeftRightChoice;

typedef struct tBlankMenuItemNFS4LeftRightChoice tBlankMenuItemNFS4LeftRightChoice;

typedef struct tMenuItemOptionsLeftRightChoice tMenuItemOptionsLeftRightChoice;

typedef struct tMenuItemOptionsTwoItemChoice tMenuItemOptionsTwoItemChoice;

typedef struct tMenuNFS4 tMenuNFS4;

typedef struct tMenuNFS4TwoPlayer tMenuNFS4TwoPlayer;

typedef struct tMenuNFS4Bottom tMenuNFS4Bottom;

typedef struct tMenuBlank tMenuBlank;

typedef struct tMenuOptions tMenuOptions;

typedef struct tMenuItemLeftRightFade tMenuItemLeftRightFade;

typedef struct tOptionsMenu tOptionsMenu;

typedef struct tInsideBoxMenu tInsideBoxMenu;

typedef struct tMenuItemSlidingMenu tMenuItemSlidingMenu;

typedef struct tMenuItemSlidingActivated tMenuItemSlidingActivated;

typedef struct tMenuItemDisplayLeftRightChoice tMenuItemDisplayLeftRightChoice;

typedef struct tMenuItemOnOffLeftRightChoice tMenuItemOnOffLeftRightChoice;

typedef struct tMenuItemLeftRightAudioSlider tMenuItemLeftRightAudioSlider;

typedef struct tInsideBoxSongMenu tInsideBoxSongMenu;

typedef struct tMenuItemControllerLeftRightChoice tMenuItemControllerLeftRightChoice;

typedef struct tInsideBoxLeftRightSlider tInsideBoxLeftRightSlider;

typedef struct tInsideBoxTwoWaySlider tInsideBoxTwoWaySlider;

typedef struct tUserNameMenuItem tUserNameMenuItem;

typedef struct tMenuItemGoToMenuButtonFade tMenuItemGoToMenuButtonFade;

typedef struct tMemoryCardMenuItem tMemoryCardMenuItem;

typedef struct tBlankMenuItemGoToMenuNFS4Button tBlankMenuItemGoToMenuNFS4Button;

typedef struct tInsideBoxControllerLeftRightSlider tInsideBoxControllerLeftRightSlider;

typedef struct tSaveCarInfo tSaveCarInfo;

typedef struct tListIteratorCar tListIteratorCar;

typedef struct tListIteratorCarColor tListIteratorCarColor;

typedef struct tSaveTrackInfo tSaveTrackInfo;

typedef struct tListIteratorTrack tListIteratorTrack;

typedef struct tSaveTournament tSaveTournament;

typedef struct tListIteratorTournament tListIteratorTournament;

typedef enum tTVState tTVState;

typedef struct tTVConfig tTVConfig;

typedef enum tScreenMainState tScreenMainState;

typedef struct tVideoTransition tVideoTransition;

typedef struct tVideo tVideo;

typedef struct COORD16 FE3d_zVertex;

typedef struct FE3d_zUV FE3d_zUV;

typedef struct CVECTOR FE3d_zColor;

typedef struct SVECTOR FE3d_zNormal;

typedef struct FE3d_zFacet FE3d_zFacet;

typedef struct FE3d_zObj FE3d_zObj;

typedef struct tScreenUserName tScreenUserName;

typedef struct tScreenTournamentStandings tScreenTournamentStandings;

typedef struct tScreenTournamentStandings3item tScreenTournamentStandings3item;

typedef struct LUMPYHEAD LUMPYHEAD;

typedef struct FILEINFO FILEINFO;

typedef struct SPEECHINFO SPEECHINFO;

typedef enum tPlayer tPlayer;

typedef enum tCarListType tCarListType;

typedef struct tDialogBackUpOnly tDialogBackUpOnly;

typedef struct tDialogYesNoMem tDialogYesNoMem;

typedef struct tDialogYesNoTri tDialogYesNoTri;

typedef enum PRODUCTLOC PRODUCTLOC;

typedef struct CARDINFO_def CARDINFO_def;

typedef struct CARDINFO_def CARDINFO;

typedef enum MANAGERTASK MANAGERTASK;

typedef struct MCRDFILEHEADER_def MCRDFILEHEADER_def;

typedef struct MCRDFILEHEADER_def MCRDFILEHEADER;

typedef struct MCRDFILEINFO_def MCRDFILEINFO_def;

typedef struct MCRDFILEINFO_def MCRDFILEINFO;

typedef struct helpKeyData helpKeyData;

typedef struct tHelpData tHelpData;

typedef struct tScreenControllerConfig tScreenControllerConfig;

typedef short tArrowLocation[6];

typedef short tTextLocation[5];

typedef enum tMenuTextType tMenuTextType;

typedef enum tMenuTextState tMenuTextState;

typedef enum tCheatCode tCheatCode;

typedef struct tCheat tCheat;

typedef struct tItemButton tItemButton;

typedef struct tOldMenu tOldMenu;

typedef int (*menuDrivers_t)();

typedef struct tPSXToFEMapping tPSXToFEMapping;

typedef struct tListIteratorDoubleIndexed tListIteratorDoubleIndexed;

typedef struct tListIteratorMultiPlayer tListIteratorMultiPlayer;

typedef enum tScreen_TransitionType tScreen_TransitionType;

typedef enum tFront_ProcessingType tFront_ProcessingType;

typedef struct tScreenMain tScreenMain;

typedef struct MCRDFILE_def MCRDFILE_def;

typedef struct MCRDFILE_def MCRDFILE;

typedef struct tVideoWall tVideoWall;

typedef struct tOverlay tOverlay;

typedef struct tScreenCarSelect tScreenCarSelect;

typedef struct tScreenCarSelectDuel tScreenCarSelectDuel;

typedef struct tScreenCarSelectTwoPlayer tScreenCarSelectTwoPlayer;

typedef struct tScreenPinkSlipsCarSelect tScreenPinkSlipsCarSelect;

typedef struct tScreenTournSelect tScreenTournSelect;

typedef struct tScreenPinkSlipStandings tScreenPinkSlipStandings;

typedef struct tScreenTrophyRoom tScreenTrophyRoom;

typedef struct tScreenTrophyInfo tScreenTrophyInfo;

typedef struct tScreenDisplay tScreenDisplay;

typedef struct tScreenAudio tScreenAudio;

typedef struct tScreenMemcard tScreenMemcard;

typedef enum tTrophyClass tTrophyClass;

typedef enum tSmallSpinningThing tSmallSpinningThing;

typedef enum tScreenCongratsMessage tScreenCongratsMessage;

typedef struct tScreenCongrats tScreenCongrats;

typedef struct tScreenTournamentTrophy tScreenTournamentTrophy;

typedef struct tScreenPinkSlipCongrats tScreenPinkSlipCongrats;

typedef struct tScreenBeTheCopCongrats tScreenBeTheCopCongrats;

typedef struct tScreenTournamentCongrats tScreenTournamentCongrats;

typedef struct tScreenTrackRecords tScreenTrackRecords;

typedef struct tScreenTrackSelect tScreenTrackSelect;

typedef struct tScreenTrackInfo tScreenTrackInfo;

typedef struct tScreenPinkSlips tScreenPinkSlips;

typedef struct tAllScreens tAllScreens;

typedef struct tPerpModelList tPerpModelList;

typedef struct tFEStream tFEStream;

typedef struct tCarInLineup tCarInLineup;

typedef struct tGlobalMenuDefs tGlobalMenuDefs;

typedef enum tTrophySize tTrophySize;

typedef struct tMemCardData tMemCardData;

typedef enum PinkSlipsErrorCode PinkSlipsErrorCode;

typedef struct MCRDOPTS_def MCRDOPTS_def;

typedef struct MCRDOPTS_def MCRDOPTS;

typedef void (*MemCB)();

typedef struct tVideoWallConfig tVideoWallConfig;

typedef struct tVertex tVertex;

typedef long STREAMHANDLE;

typedef long STREAMREQUESTID;

typedef enum tCarStatType tCarStatType;

typedef enum PinkSlipsCarSelectState PinkSlipsCarSelectState;

typedef int FEVECTOR[4];

typedef int FEMATRIX[4][4];

typedef enum VIDEOSTATE VIDEOSTATE;

typedef char tMemIcon[15][3][192];

typedef struct LINE_F2 LINE_F2;

typedef struct CdlFILE CdlFILE;

typedef struct DECENV DECENV;

typedef struct CDSECTOR CDSECTOR;

typedef unsigned short DECDCTTAB[34816];

typedef void (*CallbackFunc)();

typedef struct DR_OFFSET DR_OFFSET;

typedef struct fMemCardInfo_def fMemCardInfo;

typedef struct MDECSTRUCT MDECSTRUCT;

typedef struct windowtbl windowtbl;

typedef struct windowtbl WINDOW;

typedef struct STREAMCHUNKHDR STREAMCHUNKHDR;

typedef struct VIDEOSTRUCT VIDEOSTRUCT;

typedef struct ARGB ARGB;

typedef struct scoorddef SCOORD;

typedef struct RPOINT RPOINT;

typedef unsigned char *caddr_t_alt_definition_0001;

typedef unsigned char *MEMBLOCK;

typedef unsigned char *va_list_alt_definition_0001;

typedef struct PSXCDFILEINFO_def PSXCDFILEINFO;

/* Begin typedefs which were autogenerated by TDR */

typedef void (*TDRFuncPtr___10tMenuBlankUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)();

typedef void (*TDRFuncPtr___12tMenuOptionsUiP7tScreenP5tMenuT3PFR12tMenuCommand_vssP9tMenuIteme5OnButtonPress)();

typedef void (*TDRFuncPtr___12tOptionsMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsiiP9tMenuIteme5OnButtonPress)();

typedef void (*TDRFuncPtr___14tInsideBoxMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress)();

typedef void (*TDRFuncPtr___15tMenuNFS4BottomUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress)();

typedef void (*TDRFuncPtr___18tInsideBoxSongMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress)();

typedef void (*TDRFuncPtr___18tMenuNFS4TwoPlayerUiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress)();

typedef void (*TDRFuncPtr___23tMenuItemGoToMenuButtonUiP5tMenuPFR12tMenuCommand_v3OnButtonPress)();

typedef void (*TDRFuncPtr___24tPMenuItemGoToMenuButtonUiP6tPMenuPFR13tPMenuCommand_v3OnButtonPress)();

typedef void (*TDRFuncPtr___27tMenuItemGoToMenuNFS4ButtonUiP5tMenuPFR12tMenuCommand_vii3OnButtonPress)();

typedef void (*TDRFuncPtr___5tMenuUiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)();

typedef void (*TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vs5OnButtonPress)();

typedef void (*TDRFuncPtr___9tMenuNFS4UiP7tScreenP5tMenuT3PFR12tMenuCommand_vsP9tMenuIteme5OnButtonPress)();

typedef void (*TDRFuncPtr_Draw_SetDrawSyncCallback__FPFv_v0p)();

typedef void (*TDRFuncPtr_Font_SetBlitter__FPFiiPviiP12charactertbli_v0blitter)();

typedef void (*TDRFuncPtr_Sched_AddFunction__FP15Sched_tSchedulePFPv_vPvi1function)();

typedef void (*TDRFuncPtr_Sched_DeleteFunction__FP15Sched_tSchedulePFPv_vPv1function)();

typedef void (*TDRFuncPtr_strInit__FP6CdlLOCiPFe_vT22callback)();

typedef void (*TDRFuncPtr_strInit__FP6CdlLOCiPFe_vT23endcallback)();

/* End typedefs which were autogenerated by TDR */

/* End typedefs */

/* Begin external declarations */

extern int CarLogic_gObs[1][3]; // offset 0x8010CCE4


extern struct AI_tInfo AI_Info; // offset 0x8010CCF0


extern int curveynessLevelStarts[4]; // offset 0x8010CCD4


extern int AI_time; // offset 0x8013C550


extern int AI_elapsedTime; // offset 0x8013C554


extern int AI_iTime; // offset 0x8013C558


extern struct AIHigh_Base (*highLevelAIObjs[9]); // offset 0x8010CD38


extern enum AIHigh_CopGameType_t AIHigh_CopGameType; // offset 0x8013C55C


extern int AIHigh_BasicPerp_PlayerCaughtSpeed[3]; // offset 0x8010CD5C


extern int AIHigh_BasicPerp_PlayerCaughtDeltaY[3]; // offset 0x8010CD68


extern int AIHigh_BasicPerp_MinDeltaSpeed[3]; // offset 0x8010CD74


extern int AIHigh_BasicPerp_CopCaughtSpeed[3]; // offset 0x8010CD80


extern int AIHigh_BasicPerp_CaughtDistance[3]; // offset 0x8010CD8C


extern int AIH_BTC_Cop_1HC1HP_StageTimes[3]; // offset 0x8010CD98


extern struct coorddef AIH_BTCCop_chasePositions[3][6]; // offset 0x8010CDA4


extern unsigned char strategyChart[5][3]; // offset 0x8010CE7C


extern int AIHigh_BTC_uTurnProb1000Skills[3]; // offset 0x8010CE8C


extern int AIHigh_Player_kNumArrestsByLap[3]; // offset 0x8010CE98


extern char gBlockadeTypes[5]; // offset 0x8013C568


extern struct __144 AIHigh_Cop_AggressionData[3]; // offset 0x8010CEA4


extern int AICop_skillDelay[3]; // offset 0x8010CEE0


extern struct coorddef AIH_Cop_chasePositions[3][6]; // offset 0x8010CEEC


extern int NitroDistanceMeters[2][2]; // offset 0x8010CFC4


extern struct AICop_spikeBelt_t AICop_spikeBelt; // offset 0x8010D54C


extern struct copGame_t copGame[6]; // offset 0x8010D51C


extern struct copLevel_t twoLapCopGame[4]; // offset 0x8010CFD4


extern struct copLevel_t fourLapCopGame[5]; // offset 0x8010D0A4


extern struct copLevel_t twoLapCopGameSplit[4]; // offset 0x8010D1A8


extern struct copLevel_t fourLapCopGameSplit[4]; // offset 0x8010D278


extern struct copLevel_t twoLapCopGame1H1AI[4]; // offset 0x8010D348


extern struct copLevel_t fourLapCopGame1H1AI[5]; // offset 0x8010D418


extern enum AICop_RoadBlockState AICop_gRoadBlockState; // offset 0x8013C574


extern int AICop_numArrestedHumans; // offset 0x8013C578


extern void *AICop_rawTriggers; // offset 0x8013C570


extern char trafcfg[108]; // offset 0x8010D560


extern int AIInit_useSpreadForce; // offset 0x8013C580


extern int AIInit_forceHumanHandBrake; // offset 0x8013C584


extern void *AITraffic_rawTriggers; // offset 0x8013C57C


extern int AIPerson_glueTable[21]; // offset 0x8010D714


extern struct AIPerson_t AIPerson_PersonalityData[9]; // offset 0x8010D768


extern struct AIScript_tReactionDetails AIPerson_ScriptData[9][7]; // offset 0x8010DA5C


extern int AIPerson_blockMaxDistance[4]; // offset 0x8010D5CC


extern int AIPerson_blockMinDistance[4]; // offset 0x8010D5DC


extern int AIPerson_oncomingLookAhead[4]; // offset 0x8010D5EC


extern int AIPerson_laneSwerve[4][4]; // offset 0x8010D5FC


extern int AIPerson_swerveChangeProb[4]; // offset 0x8010D63C


extern int AIPerson_brakeMultiplier[4]; // offset 0x8010D64C


extern int AIPerson_attackActivationHits[4]; // offset 0x8010D65C


extern int AIPerson_attackTimes[4]; // offset 0x8010D66C


extern int AIPerson_fishtailAngles[4]; // offset 0x8010D67C


extern int AIPerson_gripLossProbPerSecond[4]; // offset 0x8010D68C


extern int AIPerson_gripLossMinFactor[4]; // offset 0x8010D69C


extern int AIPerson_gripLossRecoveryPerTick[4]; // offset 0x8010D6AC


extern int AIPerson_minimumWipeOutTicks[5]; // offset 0x8010D6BC


extern int AIPerson_randomWipeOutTicks[5]; // offset 0x8010D6D0


extern unsigned int AIPerson_rearEndProbMask[4]; // offset 0x8010D6E4


extern unsigned int AIPerson_smackProbMask[4]; // offset 0x8010D6F4


extern int AIPerson_bestLineAbilities[4]; // offset 0x8010D704


extern struct AIPhysic_Config_t AIPhysicConfig; // offset 0x8010DC74


extern int AIPhysic_iTime; // offset 0x8013C594


extern int AIPhysic_time; // offset 0x8013C598


extern int AIPhysic_elapsedTime; // offset 0x8013C59C


extern enum AIDataRecord_WhichRecord_t AIDataRecord_WhichRecord; // offset 0x8013C5A8


extern enum AIDataRecord_RecordMethod_t AIDataRecord_RecordMethod; // offset 0x8013C5AC


extern struct AIDataRecord_BestLine_t *AIDataRecord_BestLine; // offset 0x8013C5A0


extern struct AIDataRecord_TrackCurve_t *AIDataRecord_TrackCurve; // offset 0x8013C5A4


static struct AIDataRecord_t (*recordCollection[24]); // offset 0x8013DF64


extern struct AISpeeds_tLeaderBoard leaderBoard; // offset 0x8010DDA4


extern struct AISpeeds_tSlotInfo CaravanInfo[6]; // offset 0x8010DDB4


extern struct AISpeeds_Upgrade_t engineUpgrade; // offset 0x8010DCE0


extern struct AISpeeds_Upgrade_t suspensionUpgrade; // offset 0x8010DCF0


extern struct AISpeeds_Upgrade_t aeroUpgrade; // offset 0x8010DD00


extern struct speedData_t Track2Speeds[9]; // offset 0x8010DD10


extern struct speedData_t Track3Speeds[3]; // offset 0x8010DD34


extern struct speedData_t Track5Speeds[3]; // offset 0x8010DD40


extern struct speedData_t Track6Speeds[5]; // offset 0x8010DD4C


extern struct speedData_t Track7Speeds[6]; // offset 0x8010DD60


extern struct speedData_t (*AISpeeds_TrackSpeeds[11]); // offset 0x8010DD78


static int *AISpeeds_WeatherMultFactors; // offset 0x8013C5B0


static int AISpeeds_trackAndNightMult; // offset 0x8013C5B4


extern struct speedData_t Track0Speeds[1]; // offset 0x8013C5B8


extern struct speedData_t Track1Speeds[1]; // offset 0x8013C5BC


extern struct speedData_t Track4Speeds[1]; // offset 0x8013C5C0


extern struct speedData_t Track8Speeds[1]; // offset 0x8013C5C4


extern struct speedData_t Track9Speeds[1]; // offset 0x8013C5C8


extern struct speedData_t Track10Speeds[1]; // offset 0x8013C5CC


static int AIState_Purgatory_numTrafficCarsInPurgatory; // offset 0x8013DD7C


extern struct AITrigger_TriggerManager *triggerManagerCops; // offset 0x8013C5E8


extern struct AITrigger_TriggerManager *triggerManagerTraffic; // offset 0x8013C5EC


extern struct AITune_BTC_t AITune_BTC[3]; // offset 0x8010DE14


extern struct AITune_tTrackInfo AITune_trackInfo[12]; // offset 0x8010DE74


extern struct accelscale_t AITune_accelerationScale[22]; // offset 0x8010DF04


extern struct copTuning_t copTuningInfo[6]; // offset 0x8010DF5C


extern int AITune_MaxTraffic[2][4]; // offset 0x8010DFBC


extern int AITune_LifeTimer[12]; // offset 0x8010DFDC


extern int AITune_BTCPerpAccMults[3]; // offset 0x8010DE68


extern int AITune_oneWay; // offset 0x8013C5F0


extern int AITune_driveSide; // offset 0x8013C5F4


extern int AITune_gRoughLapTime; // offset 0x8013C5F8


extern int inverseLaneWidthTable[80]; // offset 0x8010E00C


extern struct Trk_AnimateInst (*animScripts[10]); // offset 0x8010E24C


extern struct Trk_AnimateInst (*Anim_gInstanceFromIndex[32]); // offset 0x8010E1CC


extern struct AnimScript (*animSlots[32]); // offset 0x8010E14C


extern struct AudioClc_tPlayer AudioClc_gPlayer[2]; // offset 0x8010E2A8


extern struct AudioClc_tSource AudioClc_gClosest[4]; // offset 0x8010E348


extern struct DRender_tCalcView AudioClc_gRenderView; // offset 0x8010E428


extern int AudioClc_PursuitTime[9]; // offset 0x8010E4AC


extern struct coorddef *AudioClc_gCameraVelocity; // offset 0x8013C608


extern int AudioClc_gRandomPhrase; // offset 0x8013C60C


extern int AudioClc_gBullHornCount; // offset 0x8013C610


extern int AudioClc_gBumpCopCount; // offset 0x8013C614


extern int AudioClc_gLastVoice; // offset 0x8013C618


extern int AudioClc_gLastphrase1; // offset 0x8013C61C


extern int AudioClc_gLastphrase2; // offset 0x8013C620


extern int AudioClc_gLastphrase3; // offset 0x8013C624


extern struct AudioCmn_tReTrig AudioCmn_gReTrig[2]; // offset 0x8010E868


extern struct SndBnk_t gSndBnk[7]; // offset 0x8010E8A8


extern struct Channels_t gaChannel[71]; // offset 0x8010E8FC


extern struct AudioCmn_tAsyncSfxSlot AudioCmn_gSfxSlot[32]; // offset 0x8010EB34


extern char carbankname[12]; // offset 0x8010EE34


extern int gBankNumLookupTable[71]; // offset 0x8010E4D0


extern int falseLapTrigNumsForward[10][2]; // offset 0x8010E5EC


extern int falseLapTrigNumsBackward[10][2]; // offset 0x8010E63C


extern char Xfade[129]; // offset 0x8010E68C


static char SkidInitMaxFreq[71]; // offset 0x8010E710


extern char (*AudioCmn_LanguageName[7]); // offset 0x8010E774


extern int bSirenOn[6]; // offset 0x8010E790


extern int bSirenPitchingUp[6]; // offset 0x8010E7A8


extern int quickSirenActive[6]; // offset 0x8010E7C0


extern int sirenPitchWidth[6]; // offset 0x8010E7D8


extern int sirenCurrentPitch[6]; // offset 0x8010E7F0


extern int slowSirenReps[6]; // offset 0x8010E808


extern int sirenCount[6]; // offset 0x8010E820


extern int reachedSirenMin[6]; // offset 0x8010E838


extern int quickSirenTimeCount[6]; // offset 0x8010E850


extern int falseLapTrigCur; // offset 0x8013C6B4


extern int flaseLapTrigTrack; // offset 0x8013C6B8


extern char currentLap[2]; // offset 0x8013C6BC


extern int bestLapTime[2]; // offset 0x8013C6C0


extern int gtotallaptimes[2]; // offset 0x8013C6C8


extern int AudioCmn_gPlayerArrested[2]; // offset 0x8013C6D0


extern int AudioCmn_gCursorSndHandle; // offset 0x8013C6D8


extern int AudioCmn_gLastFade; // offset 0x8013C6DC


extern void *AudioCmn_gLoadTables; // offset 0x8013C6E0


extern void *AudioCmn_gCruiseTables; // offset 0x8013C6E4


extern int AudioCmn_gResume; // offset 0x8013C6E8


extern int AudioCmn_gStreamRestartTimer; // offset 0x8013C6EC


extern char fMysticWindON[2]; // offset 0x8013C6F0


extern char fAmbientRangeON[2]; // offset 0x8013C6F4


extern int currentWindVal[2]; // offset 0x8013C6F8


extern int nextWindVal[2]; // offset 0x8013C700


extern int currentWindPan; // offset 0x8013C708


extern int nextWindPan; // offset 0x8013C70C


extern int gQuickSirenCount; // offset 0x8013C710


extern int AudioCmn_ThunderAmp; // offset 0x8013C714


extern int AudioCmn_ThunderAzi; // offset 0x8013C718


extern int AudioCmn_ThunderDel; // offset 0x8013C71C


extern int AudioCmn_kAudioOn; // offset 0x8013C644


extern int AudioCmn_kAudioStreamingOn; // offset 0x8013C648


extern int gMasterFENarrationLevel; // offset 0x8013C65C


extern int gMasterMusicLevel; // offset 0x8013C650


extern int gMasterSFXLevel; // offset 0x8013C654


extern int gMasterEngineLevel; // offset 0x8013C658


extern int gMasterAmbientLevel; // offset 0x8013C660


extern int gStereoMode; // offset 0x8013C674


extern char trackMusicState; // offset 0x8013C628


extern int audioBackwardsDirection; // offset 0x8013C62C


extern int intensityFalseLapCounter; // offset 0x8013C630


extern int falseLapCounter; // offset 0x8013C634


extern int gMusicStyle; // offset 0x8013C638


extern char countdown; // offset 0x8013C63C


extern char FadingMusic; // offset 0x8013C63D


extern char StartedNewMusic; // offset 0x8013C63E


extern int recordLapTime; // offset 0x8013C640


extern int SgameSFXvol; // offset 0x8013C64C


extern int previousSFXLevel; // offset 0x8013C664


extern int AudioCmn_musicInteractive; // offset 0x8013C668


extern int gFEmusicON; // offset 0x8013C66C


extern int NumSFXOn; // offset 0x8013C670


extern char fReverbOn; // offset 0x8013C678


extern char fReverbLevel; // offset 0x8013C679


static int PlayersRampedGasLevel[2]; // offset 0x8013DD80


extern struct AudioMus_tMusicGlobals *AudioMus_g; // offset 0x8013C720


extern struct CAudioList *gGameAudioList; // offset 0x8013C730


extern struct AudioEng_t (*AudioEng_g[2]); // offset 0x8013C734


extern struct AudioTrk_tGlobals *AudioTrk_g; // offset 0x8013C754


extern struct matrixtdef gWorldMat; // offset 0x8010EE40


extern struct matrixtdef gNightMat; // offset 0x8010EE64


extern struct matrixtdef gCopMat; // offset 0x8010EE88


extern struct BW_tContextMgr gContextMan; // offset 0x8010EEAC


extern struct tBuildEntry BWorld_gChunkBuildList[36]; // offset 0x8010EFEC


extern struct BW_tContext *gCurrContext; // offset 0x8013C790


extern int gSpikeBelt; // offset 0x8013C794


extern int gSpikeBeltSlice; // offset 0x8013C798


extern int gSpikeBeltChunk; // offset 0x8013C79C


extern int gSpikeBeltX; // offset 0x8013C7A0


extern int gBWSlice; // offset 0x8013C7A4


extern int BWorld_gChunkCount; // offset 0x8013C7A8


extern int gSpikeBeltWidth; // offset 0x8013C7AC


extern int gSpikeBeltColourTableIndex; // offset 0x8013C7B0


extern struct Car_tObj *BW_gCopCarObj; // offset 0x8013C7B4


extern struct DRender_tView *gVi2; // offset 0x8013C7B8


extern int SceneLoaded; // offset 0x8013C758


extern struct tNormalCacheEntry BWSM_NormalCache[16]; // offset 0x8010F0AC


extern struct Trk_NewSlice *BWorldSm_slices; // offset 0x8013C7C0


extern int sim_Handle; // offset 0x8013C7C4


extern int gNumSlices; // offset 0x8013C7C8


extern void *sim_File; // offset 0x8013C7CC


extern struct Group *sim_ItemPtr; // offset 0x8013C7D0


extern int gMaxFindQuadSliceIterations; // offset 0x8013C7D4


extern unsigned long BWSM_NormalCacheSysTime; // offset 0x8013C7D8


extern struct Trk_NewSimQuad GlobalSimQuad; // offset 0x8013C7BC


extern int Camera_gCopDist[6]; // offset 0x8010F810


extern struct camera_info Camera_gInfo[2]; // offset 0x8010F2AC


static int gTunnelCamHeight[13]; // offset 0x8010F4CC


static int gSplitCameras[3]; // offset 0x8010F500


static char gAnimMode[13]; // offset 0x8010F50C


static char gAnimCams[13][4]; // offset 0x8010F51C


extern struct camera_flags Camera_gFlags[19]; // offset 0x8010F550


static struct coorddef gDriverCam[28]; // offset 0x8010F680


extern int camSpeedTable[7]; // offset 0x8010F7D0


extern struct coorddef feeler3[3]; // offset 0x8010F7EC


extern long Camera_gGeomScreen; // offset 0x8013C7DC


static struct coorddef gCop1Target[2]; // offset 0x8013DFF0


extern struct Car_tObj (*Cars_gList[9]); // offset 0x8010F9DC


extern struct Car_tObj (*Cars_gRaceCarList[9]); // offset 0x8010FA00


extern struct Car_tObj (*Cars_gAICarList[9]); // offset 0x8010FA24


extern struct Car_tObj (*Cars_gHumanRaceCarList[9]); // offset 0x8010FA48


extern struct Car_tObj (*Cars_gAIRaceCarList[9]); // offset 0x8010FA6C


extern struct Car_tObj (*Cars_gTrafficCarList[9]); // offset 0x8010FA90


extern struct Car_tObj (*Cars_gCopCarList[9]); // offset 0x8010FAB4


extern struct Car_tObj (*Cars_gLifeBasisCarList[9]); // offset 0x8010FAD8


extern struct Car_tObj (*Cars_gSortedList[9]); // offset 0x8010FAFC


extern struct Car_tObj (*Cars_gTotalSortedList[9]); // offset 0x8010FB20


extern struct Car_tStats Cars_gNewCarStatsList[9]; // offset 0x8010FB44


extern struct BO_tNewtonObj InfiniteMassNewton[5]; // offset 0x801100E4


extern int Cars_topSpeedCap[22]; // offset 0x8010F828


static int Cars_kSmokingSurface[16]; // offset 0x8010F880


extern int Cars_kSkidMarkSurface[16]; // offset 0x8010F8C0


static int Cars_kConvertFromRoadToSfxType[16]; // offset 0x8010F900


static int Cars_kAudioRoadSurfaceInterface[16]; // offset 0x8010F940


static int Cars_kSFXWallSurfaceInterface[8]; // offset 0x8010F980


static int Cars_kAudioWallSurfaceInterface[8]; // offset 0x8010F9A0


static int Cars_kAudioCollisoinTypeInterface[7]; // offset 0x8010F9C0


extern int Cars_gNumCars; // offset 0x8013C7F4


extern int Cars_gNumRaceCars; // offset 0x8013C7F8


extern int Cars_gNumAICars; // offset 0x8013C7FC


extern int Cars_gNumHumanRaceCars; // offset 0x8013C800


extern int Cars_gNumAIRaceCars; // offset 0x8013C804


extern int Cars_gNumTrafficCars; // offset 0x8013C808


extern int Cars_gNumCopCars; // offset 0x8013C80C


extern int Cars_gNumLifeBasisCars; // offset 0x8013C810


extern int accidentSlice; // offset 0x8013C814


extern int frontLimit; // offset 0x8013C7E4


extern int rearLimit; // offset 0x8013C7E8


extern struct CVECTOR *Chunk_lightTable; // offset 0x8013C818


extern struct coorddef *Chunk_chunkCenters; // offset 0x8013C81C


extern struct Clock_tGameClock clock_realTime; // offset 0x80110C24


extern int generic128HzClock; // offset 0x8013C828


static int clock_InterruptStarted; // offset 0x8013C820


extern int stopClock; // offset 0x8013C824


extern struct BO_tNewtonObj (*Collide_gRegistry[16]); // offset 0x80110C30


extern int findClosestSideDave; // offset 0x8013C838


extern struct BO_tNewtonObj *obj0; // offset 0x8013C83C


extern struct BO_tNewtonObj *obj1; // offset 0x8013C840


extern struct coorddef *pNormal; // offset 0x8013C844


extern struct coorddef *pP; // offset 0x8013C848


extern int Collide_gRaiseUp; // offset 0x8013C82C


extern int frictionLess; // offset 0x8013C830


extern int Collide_gNumRegistered; // offset 0x8013C834


static int xRange; // offset 0x8013DD98


static int yRange; // offset 0x8013DD9C


static int zRange; // offset 0x8013DDA0


static int basisDots[9]; // offset 0x8013E008


static int scaledBasisDots[9]; // offset 0x8013E038


static int scaledBasisDotsOther[9]; // offset 0x8013E068


static int basisDotRelative[6]; // offset 0x8013E098


extern struct HudPmx_tUV HudPmx_gHudNumberUV[10]; // offset 0x80110C70


extern struct HudPmx_tShape HudPmx_gShapes[175]; // offset 0x80110C98


static char *gHudFont; // offset 0x8013DDA4


static char *gShpfile; // offset 0x8013DDA8


static char loadShapeXOff; // offset 0x8013DDAC


extern struct Speech_tCarDescription Speech_gCarDescription[15]; // offset 0x80111A44


extern struct Speech_tLocationDescription Speech_gLocationDescription00[13]; // offset 0x80111B34


extern struct Speech_tLocationDescription Speech_gLocationDescription02[14]; // offset 0x80111B9C


extern struct Speech_tLocationDescription Speech_gLocationDescription03[13]; // offset 0x80111C0C


extern struct Speech_tLocationDescription Speech_gLocationDescription04[9]; // offset 0x80111C74


extern struct Speech_tLocationDescription Speech_gLocationDescription05[14]; // offset 0x80111CBC


extern struct Speech_tLocationDescription Speech_gLocationDescription06[11]; // offset 0x80111D2C


extern struct Speech_tLocationDescription Speech_gLocationDescription07[11]; // offset 0x80111D84


extern struct Speech_tLocationDescription (*Speech_gLocationDescription[11]); // offset 0x80111DDC


extern struct Speech_tCallSignDescription Speech_gCallSignDescription[1]; // offset 0x80111E08


extern struct Speech_tMobileVoiceAttr Speech_gCopAttr[9]; // offset 0x80111E5C


extern struct CopSpeak_tBank Copspeak_gBank[4]; // offset 0x80111EA4


extern struct CopSpeak_tRequest CopSpeak_gRequest; // offset 0x80111EE4


extern struct CopSpeak_tRequest CopSpeak_gCurrent; // offset 0x80111F04


extern struct CopSpeak_tRequest CopSpeak_gQueue[64]; // offset 0x80111F24


extern struct SNDSTREAMSTATUS CopSpeak_gMusicStat; // offset 0x80112724


extern int CopSpeak_gQueueHead; // offset 0x8013D0C8


extern int CopSpeak_gQueuePlay; // offset 0x8013D0CC


extern int CopSpeak_gSpchHandle; // offset 0x8013D0D0


extern int CopSpeak_gNumTrackSfx; // offset 0x8013D0D4


extern int CopSpeak_gQueueLoad; // offset 0x8013D0D8


extern int CopSpeak_gQueueReady; // offset 0x8013D0DC


extern int CopSpeak_gWrongWay; // offset 0x8013D0E0


extern char *CopSpeak_gBuffer; // offset 0x8013D0E4


extern short CopSpeak_gBufferLow; // offset 0x8013D0E8


extern short CopSpeak_gBufferStart; // offset 0x8013D0EA


extern short CopSpeak_gBufferEnd; // offset 0x8013D0EC


extern short CopSpeak_gBufferHigh; // offset 0x8013D0EE


extern int CopSpeak_gStaticHandle[2]; // offset 0x8013D0F0


extern char CopSpeak_gStaticPatch[2]; // offset 0x8013D0F8


extern int cdsectorreseek; // offset 0x8013D07C


extern char CopSpeak_gHandleCount; // offset 0x8013D080


extern struct dashhud_info DashHUD_gInfo; // offset 0x80112730


extern unsigned int fastRandom; // offset 0x8013D0FC


extern unsigned int randtemp; // offset 0x8013D100


extern unsigned int randSeed; // offset 0x8013D104


extern unsigned int numRandCalls; // offset 0x8013D108


extern struct FEI_tList FEI_gList[114]; // offset 0x8011279C


extern struct Draw_tPixMap (*gDLPixmap[10]); // offset 0x80112B2C


extern struct Draw_tPixMap (*gSparkHPixmap[6]); // offset 0x80112B54


extern struct Draw_tPixMap (*gStartUpPixmap[4]); // offset 0x80112B6C


extern struct Draw_tPixMap (*gWeatherPixmap[3]); // offset 0x80112B7C


extern struct Draw_tPixMap (*gFlarePixmap[3]); // offset 0x80112B88


extern struct Draw_tPixMap (*gLightningPixmap[16]); // offset 0x80112B94


extern struct Draw_tPixMap gPixmaps[71]; // offset 0x80112BD4


extern struct Draw_tPixMap *gDPixmap; // offset 0x8013D1DC


extern struct Draw_tPixMap *gSpikeBeltPixmap; // offset 0x8013D1E0


extern struct Draw_tPixMap (*gShadowPixmap[2]); // offset 0x8013D1E4


extern struct Draw_tPixMap (*gSkidMarkPixmap[2]); // offset 0x8013D1EC


extern struct Draw_tPixMap (*gSMokePixmap[2]); // offset 0x8013D1F4


extern struct Draw_tPixMap *gSMokePalette; // offset 0x8013D1FC


extern struct Draw_tPixMap *gDirtPalette; // offset 0x8013D200


extern struct Draw_tPixMap (*gGravelPixmap[2]); // offset 0x8013D204


extern struct Draw_tPixMap *gGravelPalette; // offset 0x8013D20C


extern struct Draw_tPixMap *gGrassPalette; // offset 0x8013D210


extern struct Draw_tPixMap *gSnowPalette; // offset 0x8013D214


extern struct Draw_tPixMap *gLeafPixmap; // offset 0x8013D218


extern struct Draw_tPixMap *gDamagePixmap; // offset 0x8013D21C


extern struct GameSetup_tData GameSetup_gData; // offset 0x801131EC


extern char GameSetup_gPersonalityNames[15][8]; // offset 0x80113174


extern char GameSetup_gCarNames[51][5]; // offset 0x80113044


extern char GameSetup_gTrackNames[12][4]; // offset 0x80113144


extern int Input_gHandler[184]; // offset 0x80113C14


extern unsigned long Input_gDBFlags[8]; // offset 0x80113EF4


extern unsigned long Input_gInterfaceResults[32]; // offset 0x80113F14


extern int Input_gPressTime[2][17]; // offset 0x80113F94


extern int Input_gTime; // offset 0x8013D220


extern struct Input_tResults Input_gResults[2]; // offset 0x8013D224


extern struct Input_tResults Input_gSim; // offset 0x8013D22C


extern int Input_gLookBehind[2]; // offset 0x8013D230


extern int Input_gMode[2]; // offset 0x8013D238


extern void * gMPauseUpdate; // offset 0x8013D264


extern struct tPauseMenuDefs *gPauseMenuDefs; // offset 0x8013D268


extern void * gMPauseUpdateNextTime; // offset 0x8013D240


extern short InGameSelectListAudioMode[4]; // offset 0x8013D244


extern short SelectListConfig[4]; // offset 0x8013D24C


static short kMovingHighlight; // offset 0x8013DDB8


static short kMovingHighlightDir; // offset 0x8013DDBA


static int gBackDepth; // offset 0x8013DDBC


static struct tPMenu *gPauseCurrentMenu; // offset 0x8013DDC0


static struct tPMenu (*gBackList[6]); // offset 0x8013E0C0


extern struct BWorldSm_Pos testSimRoadInfo; // offset 0x80114134


extern struct BWorldSm_Pos newtestSimRoadInfo; // offset 0x801141B8


extern int divTable[50]; // offset 0x8011401C


extern short fudgeTable[32]; // offset 0x801140E4


extern int swap[4]; // offset 0x80114124


extern char *New_cplusplus_heap; // offset 0x8013D26C


extern struct tCarManager carManager; // offset 0x80114274


extern struct tfrontEnd frontEnd; // offset 0x80114600


extern struct tTrackManager trackManager; // offset 0x80114A50


extern struct tTournamentManager tournamentManager; // offset 0x80114AD8


extern struct tCreditManager CreditManager; // offset 0x80114D5C


extern struct tRecordBuffer Stats_gTrackRecords[187]; // offset 0x80114D94


extern char gTournamentFinishOrder[12]; // offset 0x80115C30


extern char befuddleTemp[10]; // offset 0x80115C3C


extern char befuddleExtensions[14][4]; // offset 0x8011423C


extern struct tNfsSystemInfo nfs_sysInfo; // offset 0x8013D2B4


extern struct tMissionManager missionManager; // offset 0x8013D2B8


extern char finishOrder[8]; // offset 0x8013D2C0


extern int gUseFrontend; // offset 0x8013D274


extern char gMusicInSimIsOn; // offset 0x8013D270


extern unsigned long gFECheats; // offset 0x8013D278


extern unsigned long gFEBonus; // offset 0x8013D27C


extern int gFEBigHandle; // offset 0x8013D280


extern void * MEMCARDFRONTENDISINITTED; // offset 0x8013D284


extern char gCheckTotalTime; // offset 0x8013D288


extern char gCheckLapTime; // offset 0x8013D289


extern char gUpdateTournamentInfoFlag; // offset 0x8013D28A


extern char gUpdateKnockoutInfoFlag; // offset 0x8013D28B


extern char gKnockOutSpeechFlag; // offset 0x8013D28C


extern char gCalculateVictory; // offset 0x8013D28D


extern char gPlayerEnteredNameAlready[2]; // offset 0x8013D290


extern struct ObjectAnim (*gSimObjAnims[450]); // offset 0x80115D60


extern struct AnimDef gAnimDefs[14]; // offset 0x80115C48


extern struct Group *Object_customObjInst; // offset 0x8013D2C8


extern struct Group *Object_customSimObjs; // offset 0x8013D2CC


extern struct Group *Object_customSFXInst; // offset 0x8013D2D0


extern int Object_customSliceNum; // offset 0x8013D2D4


extern struct Object_tIMassObjInfo *Object_IMassObjInst; // offset 0x8013D2D8


extern int gNumIMassObjects; // offset 0x8013D2DC


extern char (*Paths_Paths[50]); // offset 0x80116468


extern char *Paths_File; // offset 0x8013D2E8


extern char burnPath[2]; // offset 0x8013D2E0


extern char fePath[1]; // offset 0x8013D2E4


extern void * ChangedEnabling; // offset 0x8013D2EC


static int gPause_CurrentY; // offset 0x8013DDC4


extern struct coorddef gravity_ch; // offset 0x801165D4


extern int roadSurfaceFrictionCoeff[10]; // offset 0x80116530


extern int ReverseRoadSurfaceFrictionCoeff[10]; // offset 0x80116558


extern char roadSurfaceIndex[3][20]; // offset 0x80116580


extern int gripLossTable[3]; // offset 0x801165BC


extern int gripLossTableWet[3]; // offset 0x801165C8


extern int roadMult; // offset 0x8013D304


extern int frontMult; // offset 0x8013D308


extern int rearMult; // offset 0x8013D30C


extern int leftMult; // offset 0x8013D310


extern int rightMult; // offset 0x8013D314


extern int slippery; // offset 0x8013D318


extern int steeringControl; // offset 0x8013D31C


extern int powerControl; // offset 0x8013D320


extern int gBrakeRatio; // offset 0x8013D2F0


extern int gGasRatio; // offset 0x8013D2F4


extern int gSteerRatio; // offset 0x8013D2F8


static int currentWallType; // offset 0x8013D2FC


extern int exceedRedline; // offset 0x8013D300


extern char R3DCar_ObjectVisible[57]; // offset 0x801168AC


extern struct Draw_tVertex R3DCar_shadowVertex[4]; // offset 0x801168E8


extern struct Transformer_zScene (*R3DCar_LoadedScenePointer[2][50]); // offset 0x80116908


extern char R3DCar_LoadedSceneCounter[2][50]; // offset 0x80116A98


extern char R3DCar_LoadedSceneCountry[50]; // offset 0x80116AFC


extern short R3DCar_LoadedSceneColor[2][50]; // offset 0x80116B30


extern short R3DCar_LoadedSceneVRam[2][50][2]; // offset 0x80116BF8


extern int R3DCar_PositionZ[9]; // offset 0x80116D88


extern unsigned long (*R3DCar_subOtStart[2][2]); // offset 0x80116DAC


extern struct R3DCar_tEnvMapInfo R3DCar_EnvMapInfo[28]; // offset 0x80116DBC


extern char R3DCar_ObjectInfo[57][6]; // offset 0x801165E0


extern short R3DCar_Suspension[10]; // offset 0x80116738


extern short R3DCar_FlareOverlayIndex[6]; // offset 0x8011674C


extern short R3DCar_FlareCopSirenType[15][6]; // offset 0x80116758


extern char R3DCar_SignalBrakeFlare[28]; // offset 0x8011680C


extern char R3DCar_RecessedLight[28]; // offset 0x80116828


extern char R3DCar_ForceDriveSide[28]; // offset 0x80116844


extern char R3DCar_DamageSpoiler[28]; // offset 0x80116860


extern char R3DCar_CopIndex[6][5]; // offset 0x8011687C


extern char R3DCar_CopCountry[15]; // offset 0x8011689C


extern int R3DCar_aSyncLoading; // offset 0x8013D384


extern struct matrixtdef *R3DCar_orientMat; // offset 0x8013D388


extern struct coorddef *R3DCar_position; // offset 0x8013D38C


extern struct Draw_tVertex R3DCar_center; // offset 0x8013D390


extern int R3DCar_shadowFlag; // offset 0x8013D398


extern struct CVECTOR R3DCar_shadowColour; // offset 0x8013D39C


extern struct CVECTOR R3DCar_eMapColour; // offset 0x8013D3A0


extern short R3DCar_yawCam; // offset 0x8013D3A4


extern int R3DCar_Clock; // offset 0x8013D3A8


extern int R3DCar_ClockLast; // offset 0x8013D3AC


extern char *R3DCar_BigFile; // offset 0x8013D3B0


extern char *R3DCar_LicenseShapeFile; // offset 0x8013D3B4


extern unsigned long *R3DCar_subOt; // offset 0x8013D3B8


extern int R3DCar_rightHandDrive; // offset 0x8013D3BC


extern int R3DCar_InMenu; // offset 0x8013D324


extern struct DRender_tView gCView; // offset 0x80116F7C


extern int Draw_gPlayer1View; // offset 0x8013D3CC


extern int Draw_gPlayer2View; // offset 0x8013D3D0


extern struct RECT gPauseMenuRect; // offset 0x8013D3D4


extern int gPauseRender; // offset 0x8013D3DC


extern int Draw_gRearView; // offset 0x8013D3E0


extern int Render_gDebugView; // offset 0x8013D3E4


extern int Render_gPauseMenuView; // offset 0x8013D3E8


extern int Render_gBlurEffectDepth1; // offset 0x8013D3C0


extern int Render_gBlurEffectDepth2; // offset 0x8013D3C4


extern int Render_gBlurEffectMode; // offset 0x8013D3C8


extern struct tReplayInterface Replay_ReplayInterface; // offset 0x8011702C


extern struct tReplayCameraModes Replay_ReplayCamera[2]; // offset 0x8011704C


extern struct tControllerData controlData[2]; // offset 0x8011706C


extern struct tReplayBuffer Replay_ReplayBuffer; // offset 0x8011716C


extern char compressed_data[33]; // offset 0x8011DB98


extern char uncompressed_data[32]; // offset 0x8011DBBC


extern struct Camera_tCamSlot gReplayCameraSlots[32]; // offset 0x8011DBDC


extern int ReplayCameraList[9]; // offset 0x80117008


extern int Replay_ReplayMode; // offset 0x8013D3F4


extern int Replay_ReplayStorePtr; // offset 0x8013D3F8


extern int Replay_ReplayGetPtr; // offset 0x8013D3FC


extern int Replay_ReplayCounter[2]; // offset 0x8013D400


extern int Replay_Size; // offset 0x8013D3EC


extern int numValidCams; // offset 0x8013D3F0


extern struct CSceneList *gGameSceneList; // offset 0x8013D408


extern int Sched_ExecuteTimes[7]; // offset 0x8011DFDC


extern int Sched_ExecuteElapsedTimes[7]; // offset 0x8011DFF8


extern int Sched_ExecuteiTimes[7]; // offset 0x8011E014


extern int Sched_ExecuteMasks[7]; // offset 0x8011E030


extern char Sched_gExecuteInfo[4][20]; // offset 0x8011E04C


extern struct Sim_tSimGlobalVar simGlobal; // offset 0x8011E0AC


extern struct Sim_tSimSystemVar simVar; // offset 0x8011E0C4


extern int counter[4]; // offset 0x8011E09C


extern int unPauseDelay; // offset 0x8013D428


extern int skipRender; // offset 0x8013D42C


extern int quitType; // offset 0x8013D430


extern int InBetween; // offset 0x8013D40C


extern int gSimQueue_Ticker; // offset 0x8013D434


extern int gSimQueue_BlockSelf; // offset 0x8013D438


extern int gSimQueue_BlockOther; // offset 0x8013D43C


static struct Input_tResults output[2]; // offset 0x8013DDC8


static int maxTicksPerFrame; // offset 0x8013DDD0


static struct sim_queue inputQueue; // offset 0x8013E0F4


extern struct Souffle_tISouffle *gISouffle; // offset 0x8013D448


extern int gCISouffle; // offset 0x8013D44C


extern int gTMoveSouffle; // offset 0x8013D450


extern int gWindDir; // offset 0x8013D454


extern struct Stats_tPosition Stats_racePosition[6]; // offset 0x8011E0E0


extern char (*langFileName[6]); // offset 0x8011E140


extern char *wordFile; // offset 0x8013D458


extern struct Track_tArtresource gInitialArt; // offset 0x8011E158


extern struct Draw_tPixMap Track_gReflectionMaps[4]; // offset 0x8011E170


extern short (*Track_gInViewList)[32]; // offset 0x8013D4AC


extern unsigned char *Track_gInViewCount; // offset 0x8013D4B0


extern struct TrackHeader *Track_header; // offset 0x8013D4B4


extern struct Chunk *Track_chunkList; // offset 0x8013D4B8


extern struct Group *gPersistObjDef; // offset 0x8013D4BC


extern struct Group *gPersistObjInst; // offset 0x8013D4C0


extern struct Group *gPersistMidgroundObjInst; // offset 0x8013D4C4


extern struct Group *gPersistObjDefBoundingSpheres; // offset 0x8013D4C8


extern struct SaveSurface *Track_gSaveSurface; // offset 0x8013D4CC


extern struct Track_tMaterial *Track_materials; // offset 0x8013D4D0


extern struct Trk_ObjectDef **Track_gObjDefs; // offset 0x8013D4D4


extern struct SimpleMem *Track_mem; // offset 0x8013D4D8


extern int gtrackNumber; // offset 0x8013D4DC


extern struct Group *gObjDefOffsetsGroup; // offset 0x8013D4E0


extern int Track_gControllerCount; // offset 0x8013D4E4


extern struct Track_tMaterialController *Track_gMatController; // offset 0x8013D4E8


extern int Chunk_numLight; // offset 0x8013D4EC


static struct Track_MipMap *gTempMipMapInfo; // offset 0x8013DDD4


static struct Track_MultiPalette *gTempMultiPalInfo; // offset 0x8013DDD8


extern int gTEnviroEffect[8]; // offset 0x8011E1B0


extern int gTAddCarSfx[8]; // offset 0x8011E1D0


extern int gTAddCarWheelSfx[8][4]; // offset 0x8011E1F0


extern int gTAddCarExtraSfx[8][4]; // offset 0x8011E270


extern struct tSkid gPrevSkidSm[8][4]; // offset 0x8011E2F0


extern int gStatusSm[8][4]; // offset 0x8011E670


extern struct Skidmark_Segment (*gSaveSeg[8][4]); // offset 0x8011E6F0


extern int gSaveChunk[8][4]; // offset 0x8011E770


extern int gTAddCarWheelDelay; // offset 0x8013D4F0


extern int gTAddCSmoke; // offset 0x8013D4F4


extern void * grabValue; // offset 0x8013D4F8


static int gAIDebug_PosX; // offset 0x8013DDDC


static int gAIDebug_PosY; // offset 0x8013DDE0


extern int backwardsTrackStartTrigger[5]; // offset 0x8011E7F0


extern int gMusicHandle; // offset 0x8013D51C


extern int Audio_direct3davail; // offset 0x8013D4FC


extern void *Audio_gHeap; // offset 0x8013D500


static struct CarIO_textureInfo CarIO_textureName[51]; // offset 0x8011E804


extern short CarIO_carVRamSlots[18][2]; // offset 0x8011EA68


extern short CarIO_carVRamSlotsMenu[6][2]; // offset 0x8011EAB0


extern short CarIO_carVRamAdd[6]; // offset 0x8011EAC8


extern short CarIO_carVRamOffset[6]; // offset 0x8011EAD4


extern short CarIO_licensePlate[22][6]; // offset 0x8011EAE0


extern short CarIO_licenseSFX_Vram[12][2]; // offset 0x8011EBE8


extern int CarIO_carPixMapCount; // offset 0x8013D73C


extern int CarIO_carVRamCount; // offset 0x8013D740


extern int CarIO_licenseSFX_Count; // offset 0x8013D744


extern struct shapetbl (*CarIO_Plate1[2]); // offset 0x8013D748


extern struct shapetbl (*CarIO_Plate2[2]); // offset 0x8013D750


extern int inFrontEnd; // offset 0x8013D758


extern struct Draw_tPixMap *CarIO_carPixMap; // offset 0x8013D71C


extern struct Input_tDeviceList Device_gDeviceList[5]; // offset 0x8011EC18


extern int Device_gForcePause; // offset 0x8013D778


extern int Device_gPausePort; // offset 0x8013D77C


extern int Device_gPaused; // offset 0x8013D780


extern int Device_gToggleTime[2]; // offset 0x8013D784


extern int Device_gPrev[2]; // offset 0x8013D78C


extern char Device_gPausePortIndex; // offset 0x8013D794


extern struct Draw_tView Draw_gView[10]; // offset 0x8011EC54


extern struct dflip gEnviro[2]; // offset 0x8011F424


extern int Draw_gNumView; // offset 0x8013D7AC


extern int Draw_gViewOtSize; // offset 0x8013D7B0


extern int gFlip; // offset 0x8013D7B4


extern int gLoop; // offset 0x8013D7B8


extern int Draw_gMidGroundOtz; // offset 0x8013D7BC


extern char *Draw_gMaxPrim; // offset 0x8013D7C0


extern int gTotalMem; // offset 0x8013D7C4


extern int Draw_gDoVSync; // offset 0x8013D7A8


extern struct MATRIX DrawC_gScreenMat; // offset 0x8011F4C8


extern struct MATRIX DrawC_gMatA; // offset 0x8011F4E8


extern short DrawC_gOverlay[51]; // offset 0x8011F508


extern short DrawC_SirenFlash[16]; // offset 0x8011F454


extern short DrawC_HeadLightFlash[16]; // offset 0x8011F474


extern short DrawC_TailLightFlash[16]; // offset 0x8011F494


static unsigned long hilight_colors[5]; // offset 0x8011F4B4


extern struct DrawC_tEnvMap *DrawC_gEnvMap; // offset 0x8013D7F0


extern struct DrawC_tEnvMap *DrawC_gShadow; // offset 0x8013D7F4


extern int DrawC_gEnvMapMax; // offset 0x8013D7F8


extern int DrawC_gShadowMax; // offset 0x8013D7FC


extern int DrawC_gMenuColor[2]; // offset 0x8013D800


extern int DrawC_gMenuLights; // offset 0x8013D808


extern int DrawC_gMenuLightsDirection; // offset 0x8013D80C


extern int DrawC_gWetRoad; // offset 0x8013D810


extern short DrawC_gReflectOffset; // offset 0x8013D814


extern short DrawC_gEnvMapOffset[4]; // offset 0x8013D7C8


extern unsigned long gSavePtr; // offset 0x8013D818


extern struct Draw_SubdivStruct gDiv; // offset 0x8011F628


extern int animation_timer[12]; // offset 0x8011F718


extern struct ChunkObjectInfo gChunkObjInfo; // offset 0x8011F748


extern struct CCOORD16 gVertex3d[160]; // offset 0x8011F760


extern struct MATRIX gIdentTemplate; // offset 0x8011F570


extern int trk0[9][2]; // offset 0x8011F590


extern int trk4[10][2]; // offset 0x8011F5D8


extern unsigned long gWSavePtr; // offset 0x8013D830


extern int gSD_gt4counter; // offset 0x8013D834


extern int gSD_gt3counter; // offset 0x8013D838


extern struct DRender_tView *gVi; // offset 0x8013D83C


extern int stackSpeedUpEnbabledFlag; // offset 0x8013D81C


static char goffsets[8]; // offset 0x8013D820


extern struct Force_tGlobal Force_g[2]; // offset 0x8011FD60


extern unsigned char Force_rand_256[256]; // offset 0x8011FC60


extern long Force_gVblHandle; // offset 0x8013D850


extern unsigned char Force_gActAlign[6]; // offset 0x8013D840


extern unsigned char Force_gOffAlign[6]; // offset 0x8013D848


extern unsigned short Force_gTick; // offset 0x8013D84E


extern struct cluttbl shpfontclut; // offset 0x8011FDB0


extern long colourRGB[16]; // offset 0x8011FD70


extern unsigned short gFontClut; // offset 0x8013D864


extern unsigned char gFontSpaceWidth; // offset 0x8013D866


extern unsigned short font_currentTPage; // offset 0x8013D868


extern int font_clutx; // offset 0x8013D854


extern int font_cluty; // offset 0x8013D858


extern unsigned long font_tint; // offset 0x8013D85C


extern unsigned long font_abr; // offset 0x8013D860


extern struct FLARE_DEF gFlare_LensFlare; // offset 0x80120278


extern short gfSpikePt0[8]; // offset 0x8011FDE0


extern short gfSpikePt1[8]; // offset 0x8011FDF0


extern short gfSpikePt2[8]; // offset 0x8011FE00


extern short gfOctPt1[8]; // offset 0x8011FE10


extern short gfOctPt2[8]; // offset 0x8011FE20


extern short gfHexPt1[6]; // offset 0x8011FE30


extern short gfHexPt2[6]; // offset 0x8011FE3C


extern struct SVECTOR Flare_gSpikes[4]; // offset 0x8011FE48


extern struct SVECTOR Flare_gOct[8]; // offset 0x8011FE68


extern struct SVECTOR Flare_gSmallOct[8]; // offset 0x8011FEA8


extern struct SVECTOR Flare_gHex[6]; // offset 0x8011FEE8


extern struct SVECTOR Flare_gReflectHex[6]; // offset 0x8011FF18


extern struct SVECTOR Flare_gQuad[4]; // offset 0x8011FF48


extern struct Flare_tInfo Flare_gType[34]; // offset 0x8011FF68


extern struct SVECTOR gOv[4]; // offset 0x80120188


extern struct SVECTOR Flare_gLensOct[8]; // offset 0x801201A8


extern struct FLARE_PIECE_DEF Flare_SunFlarePieces[9]; // offset 0x801201E8


extern struct CVECTOR gfrgb; // offset 0x8013D86C


extern struct CVECTOR gfrgb2; // offset 0x8013D870


extern int gscale; // offset 0x8013D874


extern struct Draw_tPixMap (*gHorizonPixmap[16]); // offset 0x801202F8


extern struct Draw_tPixMap gHorizonExtraSkyPixmaps[4]; // offset 0x80120338


extern struct SVECTOR gSkyMesh[85]; // offset 0x80120378


extern struct CVECTOR gSkyColor[85]; // offset 0x80120620


extern char gSkyPixmapIndex[64]; // offset 0x80120774


extern struct Draw_tPixMap (*gpPmx[16]); // offset 0x801207B4


extern struct CVECTOR gHrzRingColor[2][17]; // offset 0x801207F4


extern int gfxPmxHeightPercentage[16]; // offset 0x8012087C


extern struct tHrz_Lightning gHrz_Lightning; // offset 0x801208BC


extern struct CHorizonSpec *Hrz_gTrackSpec; // offset 0x8013D888


extern struct CSkySpec *Sky_gTrackSpec; // offset 0x8013D88C


extern struct SVECTOR *gRngCoordTop; // offset 0x8013D890


extern struct SVECTOR Hrz_gLightningPosInSky; // offset 0x8013D894


static struct SVECTOR *starPosInSky; // offset 0x8013D878


static unsigned long *starColors; // offset 0x8013D87C


static struct SVECTOR sunPosInSky; // offset 0x8013DDF0


static struct SVECTOR moonPosInSky; // offset 0x8013DDF8


static struct CVECTOR Hrz_gSaveCol[4]; // offset 0x8013E380


extern struct CVECTOR Hud_gMarkerColor[12]; // offset 0x80120B60


extern struct CVECTOR Hud_gCopMarkerColor[12]; // offset 0x80120B90


extern struct tSmallCoordXY Hud_gElementPositions[2][19]; // offset 0x80120924


static unsigned long day_needle[30]; // offset 0x801209BC


static unsigned long night_needle[30]; // offset 0x80120A34


extern unsigned long Hud_Character[5]; // offset 0x80120AAC


extern float fMapScaleX[11]; // offset 0x80120AC0


extern float fMapScaleY[11]; // offset 0x80120AEC


extern short fMapOffX[11]; // offset 0x80120B18


extern short fMapOffY[11]; // offset 0x80120B30


extern short fMapRotate[11]; // offset 0x80120B48


extern void * HudBustedOverlay; // offset 0x8013D928


extern int Hud_gCdActive; // offset 0x8013D92C


extern int Hud_ActivateCDPlayer; // offset 0x8013D930


extern int BTC_Countdown; // offset 0x8013D934


extern int FinalBTC_Countdown; // offset 0x8013D938


extern void * Hud_BeTheCop; // offset 0x8013D93C


extern void * Hud_kTurnSongOffNext; // offset 0x8013D940


extern short HudBustedOverlayPlayer; // offset 0x8013D944


extern int mapMarkerMCos; // offset 0x8013D948


extern int mapMarkerMSin; // offset 0x8013D94C


extern int Hud_gHudView[2]; // offset 0x8013D950


extern int Hud_gMapView[2]; // offset 0x8013D958


extern int Hud_gTacView[2]; // offset 0x8013D960


extern int Hud_gStatsView; // offset 0x8013D968


extern int HudMapOffsetY; // offset 0x8013D96C


extern long gMapRotate; // offset 0x8013D970


extern long gMapScaleX; // offset 0x8013D974


extern long gMapScaleY; // offset 0x8013D978


extern int gMapOffX; // offset 0x8013D97C


extern int gMapOffY; // offset 0x8013D980


extern int Hud_gCdLastTick; // offset 0x8013D984


extern int Hud_gCdScrollTitle; // offset 0x8013D988


extern char HudminChar[6]; // offset 0x8013D89C


extern char HudsecChar[6]; // offset 0x8013D8A4


static void * BTC_playedsoundalready; // offset 0x8013D8AC


extern char Hud_gWingmanInterface[2]; // offset 0x8013D8B0


extern char Hud_gWingmanFlashIcon[2]; // offset 0x8013D8B4


extern int Hud_gWingmanFlashTicks[2]; // offset 0x8013D8B8


extern int Hud_gDebugInfo; // offset 0x8013D8C0


static struct tSmallCoordXY *g1Player; // offset 0x8013DE04


static struct SPRT *gSprite0; // offset 0x8013DE08


static struct SPRT *gSprite1; // offset 0x8013DE0C


static char currentSpriteTransparent; // offset 0x8013DE10


static long currentSpriteColor; // offset 0x8013DE14


static int HudSplitTimeDiff1[2]; // offset 0x8013DE18


static int HudSplitTimeDiff2[2]; // offset 0x8013DE20


static int BTC_BonusTime; // offset 0x8013DE28


static int BTC_BonusTimeTick; // offset 0x8013DE2C


static void * BTC_UserHasControl; // offset 0x8013DE30


static void * PerpOverlayOn[2]; // offset 0x8013DE38


static int PerpOverlayMessage[2]; // offset 0x8013DE40


static void * Hud_gShowedCDPlayer; // offset 0x8013DE48


static struct DR_MODE gTPage0[2][4]; // offset 0x8013E390


static struct DR_MODE gTPage1[2][4]; // offset 0x8013E3F0


static struct POLY_F4 gHudF4[14]; // offset 0x8013E450


static struct POLY_FT4 gHudFT4[10]; // offset 0x8013E5A0


static struct POLY_G4 gHudG4[8]; // offset 0x8013E730


static char BTC_CurrentPerpName[10]; // offset 0x8013E850


extern struct tBTCPerpInfo BTCPerpInfo[2][10]; // offset 0x80120BC0


extern short Hud_NextPerp[2]; // offset 0x8013D994


extern int StatsTimer[2]; // offset 0x8013D998


static char (*loading_languageNames[6]); // offset 0x80120D00


extern char *smallShapeFile; // offset 0x8013D9D0


extern int totalAvailMem; // offset 0x8013D9DC


extern struct CVECTOR Night_gAdditiveHeadlightColor[16]; // offset 0x80120DBC


extern char Night_gCopCountryLightTbl[2][5][2]; // offset 0x80120D18


extern int Night_gLightningPauseAreas[16][2]; // offset 0x80120D2C


extern void * gNight_renderNight; // offset 0x8013DA28


extern int Night_gXDist; // offset 0x8013DA2C


extern int Night_gZNear; // offset 0x8013DA30


extern int Night_gZDist; // offset 0x8013DA34


extern int Night_gXDistShift; // offset 0x8013DA38


extern int Night_gZDistShift; // offset 0x8013DA3C


extern char *Night_gNightTbl; // offset 0x8013DA40


extern int Night_gLightningType; // offset 0x8013DA44


extern unsigned char (*Night_gCurrentNightColor)[256][16]; // offset 0x8013DA48


extern unsigned char (*Night_gCopColor[2])[256][8]; // offset 0x8013DA4C


extern struct CVECTOR Night_gNightAmbientColor; // offset 0x8013DA54


extern struct CVECTOR Night_gColor[2]; // offset 0x8013DA58


extern int Night_gTotalLights; // offset 0x8013DA60


extern int Night_gLightning; // offset 0x8013DA64


extern int Night_gNextLightning; // offset 0x8013DA68


extern int Night_gEndNextLightning; // offset 0x8013DA6C


extern int Night_gNextFlicker; // offset 0x8013DA70


extern int Night_gFlashAzimuth; // offset 0x8013DA74


extern char Night_gShowForks; // offset 0x8013DA78


extern int Night_gFlashIntensity; // offset 0x8013DA7C


extern long Night_gPlayerHeadLightColor[2]; // offset 0x8013DA80


extern long Night_gWeatherColor[2]; // offset 0x8013DA88


extern struct tNightInitCache *gNightInitCache; // offset 0x8013DA90


extern struct tCompRGB *gTableCache; // offset 0x8013DA94


extern char *nightfile; // offset 0x8013DA98


extern char Night_gDrawLightning; // offset 0x8013D9E0


extern unsigned char (*Night_gWeatherLightingTable[2])[256]; // offset 0x8013D9F0


extern unsigned char (*Night_gPlayerLightingTable)[256][16]; // offset 0x8013D9E4


extern unsigned char (*Night_gCopLightingTableRed)[256][8]; // offset 0x8013D9E8


extern unsigned char (*Night_gCopLightingTableBlue)[256][8]; // offset 0x8013D9EC


extern char CopCarTypeLights[6]; // offset 0x8013D9F8


extern int gLowMemory; // offset 0x8013DAB0


extern int gHighMemory; // offset 0x8013DAB4


extern int gCurrentMemory; // offset 0x8013DAB8


extern unsigned int gTotalMemory; // offset 0x8013DABC


extern int gSysStartUp; // offset 0x8013DA9C


extern int disablecard; // offset 0x8013DAA8


static char *gDctXtraMem; // offset 0x8013DAAC


extern int mappings[3][13][3]; // offset 0x80120DFC


static int hoff[2]; // offset 0x8013DAC0


extern struct Skidmark_Chunk *gSm; // offset 0x8013DAC8


extern int gCountSm; // offset 0x8013DACC


extern int gUseSm; // offset 0x8013DAD0


extern int gMaxSChunk; // offset 0x8013DAD4


extern struct Draw_tPixMap (*gMenuPixmap[8]); // offset 0x80120FD0


extern struct Draw_tPixMap gMenuPixmapAlloc[8]; // offset 0x80120FF0


extern int Texture_CarColor; // offset 0x8013DB08


extern struct Texture_pal8bit *Texture_palCopy; // offset 0x8013DB0C


extern int Texture_palNum; // offset 0x8013DB10


extern int Texture_gNum4bitPal; // offset 0x8013DB14


extern int Texture_gNum8bitPal; // offset 0x8013DB18


extern struct Draw_tPixMap **Texture_gP4bitPmx; // offset 0x8013DB1C


extern struct Draw_tPixMap **Texture_gP8bitPmx; // offset 0x8013DB20


extern char **Texture_gPalette4bit; // offset 0x8013DB24


extern char **Texture_gPalette8bit; // offset 0x8013DB28


extern short *gFreePal4; // offset 0x8013DB2C


extern int gNbFreePal4; // offset 0x8013DB30


extern short *gFreePal8; // offset 0x8013DB34


extern int gNbFreePal8; // offset 0x8013DB38


extern short gClutDepth[256][16]; // offset 0x8012107C


extern struct FogKey Fog_gBuf[32]; // offset 0x8012307C


extern int openkeys[32]; // offset 0x801231FC


extern struct CSVECTOR TP_gBlendColor; // offset 0x80121070


extern int gZDepth; // offset 0x8013DB74


extern struct TP_ZPaletteSystem TP_gZPaletteSystem; // offset 0x8013DB78


extern int Fog_gNumKeys; // offset 0x8013DB7C


extern struct FogKey (*Fog_gCurrentKey[2]); // offset 0x8013DB80


extern struct FogKey *Fog_gHeadKey; // offset 0x8013DB88


extern struct BWorldSm_Pos *fogslicePos; // offset 0x8013DB8C


extern struct CVECTOR Texture_gWorldColor; // offset 0x8013DB44


extern int gContrastScale; // offset 0x8013DB3C


extern struct CVECTOR Texture_gContrastColor; // offset 0x8013DB40


extern int TP_gColorMode; // offset 0x8013DB48


extern struct CTrackSpec TrackSpec_gSpec; // offset 0x8012327C


extern int TrackSpec_gPrevSpec; // offset 0x8013DB90


extern int TrackSpec_gCurrentSpec; // offset 0x8013DB94


extern int TrackSpec_gMaxSpec; // offset 0x8013DB98


extern int TrsProj_precision; // offset 0x8013DB9C


extern struct Weather_tSys Weather_gSys; // offset 0x80123408


extern struct coorddef prevCamPos[2]; // offset 0x8012342C


extern struct matrixtdef prevCamMat[2]; // offset 0x80123444


extern int Weather_gDensityTbl[4]; // offset 0x80123384


extern int Weather_gIntensityTbl[4]; // offset 0x80123394


extern int Weather_gTrackIntensityLimitTbl[16]; // offset 0x801233A4


extern char Weather_gRandomVelocityVectors[12][3]; // offset 0x801233E4


extern struct CWeatherSpec *Weather_gTrackSpec; // offset 0x8013DBC4


extern struct Weather_tSplatInfo (*Weather_gSplatInfoServer[2]); // offset 0x8013DBC8


extern struct SVECTOR (*Weather_gPServer[2]); // offset 0x8013DBD0


extern struct DVECTOR (*Weather_gPrevPServer[2]); // offset 0x8013DBD8


extern char (*Weather_gDrawnServer[2]); // offset 0x8013DBE0


extern long Weather_gLastTimeProcessed; // offset 0x8013DBE8


extern enum Weather_tState Weather_gType; // offset 0x8013DBEC


extern int Weather_gDensityGoalState; // offset 0x8013DBF0


extern int Weather_gIntensityGoalState; // offset 0x8013DBF4


extern int Weather_gDensityChangeFactor; // offset 0x8013DBF8


extern int Weather_gIntensityChangeFactor; // offset 0x8013DBFC


extern int Weather_gDensityTimerGoal; // offset 0x8013DC00


extern int Weather_gIntensityTimerGoal; // offset 0x8013DC04


extern int Weather_gSnowTrack; // offset 0x8013DC08


extern int Weather_gTrackIntensityLimit; // offset 0x8013DC0C


extern int gCurrentNumSplats; // offset 0x8013DBA0


extern char *Weather_gWasDrawn; // offset 0x8013DBA4


extern struct SVECTOR *Weather_gPos; // offset 0x8013DBA8


extern struct Weather_tSplatInfo *Weather_gSplatInfo; // offset 0x8013DBAC


extern struct DVECTOR *Weather_gPrevPos; // offset 0x8013DBB0


static int timechange; // offset 0x8013DE4C


static int Weather_gLastProcessTime[2]; // offset 0x8013DE54


extern int gMenuRotate[2]; // offset 0x80051264


extern struct COORD16 Fe3D_spotVertex[33]; // offset 0x8005126C


extern struct COORD16 Fe3D_lightsVertex[64]; // offset 0x80051334


extern int gShowroomLights; // offset 0x800514B4


extern void * showRoomFlag; // offset 0x80051260


extern struct tFEApplication *FEApp; // offset 0x800514C0


extern unsigned long gLargestUnused; // offset 0x800514B8


extern struct SPEECHINFO ginfo; // offset 0x800514E8


extern struct LUMPYHEAD *speechfileHeader; // offset 0x8005150C


extern char currentSpeechViv[40]; // offset 0x80051510


extern int commentaryActualLevel; // offset 0x80051538


extern int gStopCommentaryNow; // offset 0x800514C8


extern char gCurrentVIV; // offset 0x800514CC


extern char (*allLanguages[6]); // offset 0x800514D0


extern char gCarSelected[2][50]; // offset 0x80051544


extern char cars_disableBonuses; // offset 0x80051540


static struct tDialogBase (*DialogVisibilityList[8]); // offset 0x80052B38


static struct RECT gHelpPos; // offset 0x80052B58


extern int PulsateYellow; // offset 0x800515AC


extern int fHelpText; // offset 0x800515B0


extern char textDefinitions[14][6]; // offset 0x800515B8


extern void * gSemiTransText; // offset 0x8005160C


extern short CountryMeasurement[8]; // offset 0x80051610


extern int tracks_maxTrackIndex; // offset 0x80051620


static struct tCheat cheatList[10]; // offset 0x80051628


static struct tCheat bonusList[3]; // offset 0x800516A0


extern int kRGBVals[28]; // offset 0x800516C8


static long nextTick; // offset 0x80051738


extern struct tPSXToFEMapping getKeyMappings[16]; // offset 0x8005173C


static int debounce[2]; // offset 0x80052B60


extern enum tPlayer gMenu_SubMenuPlayer; // offset 0x800517C0


extern struct tTexture_ShapeInfo *gCurrentShapes; // offset 0x800517CC


extern char *font12; // offset 0x800517D4


extern char *font18; // offset 0x800517D8


extern char *fontTitle; // offset 0x800517DC


extern short currentSize; // offset 0x800517E0


extern int FeTools_gScrollTicksOut; // offset 0x800517D0


extern char gFE_Cheats[5]; // offset 0x80051908


extern int gPSXMemCardFull; // offset 0x80051910


extern int colourChosen[8]; // offset 0x80051914


extern struct tAllScreens *gAllScreens; // offset 0x80051934


extern void * memCardReadOK; // offset 0x80051938


extern struct tCarInLineup CarLineup[9]; // offset 0x8005193C


extern char picked[11]; // offset 0x80051960


extern int overRide; // offset 0x800517E8


extern int ComingIntoTheFrontEndTheVeryFirstTime; // offset 0x800517EC


static enum tCarModels regularCopModels[7][5]; // offset 0x800517F0


static enum tCarModels superCopModels[7][5]; // offset 0x8005187C


extern struct tGlobalMenuDefs *menuDefs; // offset 0x80051A58


extern short SelectListNull[2]; // offset 0x80051970


extern short SelectListOffOn[3]; // offset 0x80051974


extern short SelectListTrackDirection[3]; // offset 0x8005198C


extern short SelectListNormal[3]; // offset 0x8005197C


extern short SelectListOpponentUpgrades[3]; // offset 0x80051984


extern short SelectListTransmission[3]; // offset 0x80051994


extern short SelectListDisplaySpeed[5]; // offset 0x8005199C


extern short SelectListDisplayMap[4]; // offset 0x800519A8


extern short SelectListDisplayOpponentID[4]; // offset 0x800519B0


extern short SelectListSplitTime[4]; // offset 0x800519B8


extern short SelectListSplitDisplay[3]; // offset 0x800519C0


extern short SelectListUpgrades[4]; // offset 0x800519C8


extern short SelectListControllerConfig[4]; // offset 0x800519D0


extern short SelectListAudioMode[4]; // offset 0x800519D8


static enum tCarModels gCarActivation[6][5]; // offset 0x800519E0


extern void * CURRENTLYUSINGMEMCARD; // offset 0x80051A7C


extern void * MEMCARD_INITIALIZED; // offset 0x80051A80


extern int CURRENTPLAYER; // offset 0x80051A68


extern char productCode[11]; // offset 0x80051A6C


extern void * nomessage; // offset 0x80051A78


extern int textSysMemCardFail_Index[7]; // offset 0x80051A84


static char TITLE[40]; // offset 0x80052B68


extern int CREDFADETICKS; // offset 0x80051AA0


extern struct tScreenMain *screenMain; // offset 0x80051E58


static char tvOrder[16]; // offset 0x80051AA8


static int tintColors[28]; // offset 0x80051AB8


static struct tVertex dropShadow[4][4]; // offset 0x80051B28


static struct tVertex animLocations[4]; // offset 0x80051B68


static struct tVideo video11a; // offset 0x80051B78


static struct tVideo video11b; // offset 0x80051B80


static struct tVideo video11c; // offset 0x80051B88


static struct tVideo video11d; // offset 0x80051B90


static struct tVideo video11e; // offset 0x80051B98


static struct tVideo video11h; // offset 0x80051BA0


static struct tVideo video11i; // offset 0x80051BA8


static struct tVideo video11l; // offset 0x80051BB0


static struct tVideo video11m; // offset 0x80051BB8


static struct tVideo video11n; // offset 0x80051BC0


static struct tVideo video11o; // offset 0x80051BC8


static struct tVideo video11p; // offset 0x80051BD0


static struct tVideo video21a; // offset 0x80051BD8


static struct tVideo video21c; // offset 0x80051BE0


static struct tVideo video21j; // offset 0x80051BE8


static struct tVideo video21l; // offset 0x80051BF0


static struct tVideo video31a; // offset 0x80051BF8


static struct tVideo video31b; // offset 0x80051C00


static struct tVideo video31g; // offset 0x80051C08


static struct tVideo video31h; // offset 0x80051C10


static struct tVideo video22a; // offset 0x80051C18


static struct tVideo video22b; // offset 0x80051C20


static struct tVideo video22c; // offset 0x80051C28


static struct tVideo video22d; // offset 0x80051C30


static struct tVideo video22f; // offset 0x80051C38


static struct tVideo video22g; // offset 0x80051C40


static struct tVideo video22h; // offset 0x80051C48


static struct tVideo video22i; // offset 0x80051C50


static struct tVideo video32a; // offset 0x80051C58


static struct tVideo video32b; // offset 0x80051C60


static struct tVideo video32e; // offset 0x80051C68


static struct tVideo video32f; // offset 0x80051C70


static struct tVideoWallConfig videoWallConfigs[24]; // offset 0x80051C78


static char numberValues[25]; // offset 0x80052B90


static char gNameBuffer[32]; // offset 0x80052BB0


static char gPermBuffer[32]; // offset 0x80052BD0


extern struct tScreenPinkSlips *screenPinkSlips; // offset 0x80051E64


static char imageTVOrder[4]; // offset 0x80051E60


static char gSwapFileName[20]; // offset 0x80052C00


extern struct tScreenTournamentStandings *screenTournamentStandings; // offset 0x80051E68


extern struct tScreenTournamentStandings3item *screenTournamentStandings3item; // offset 0x80051E6C


extern struct tScreenPinkSlipStandings *screenPinkSlipStandings; // offset 0x80051E70


extern enum PinkSlipsCarSelectState PinkSlipsScreenState[2]; // offset 0x80052034


extern struct tScreenCarSelect *screenCarSelect; // offset 0x8005203C


extern struct tScreenCarSelectDuel *screenCarSelectDuel; // offset 0x80052040


extern struct tScreenCarSelectTwoPlayer *screenCarSelectTwoPlayer; // offset 0x80052044


extern struct tScreenCarSelectTwoPlayer *screenCarSelectPlayerTwo; // offset 0x80052048


extern struct tScreenPinkSlipsCarSelect *screenPinkSlipsCarSelectTwoPlayer; // offset 0x8005204C


extern struct tScreenPinkSlipsCarSelect *screenPinkSlipsCarSelectPlayerTwo; // offset 0x80052050


static int gKnots[8][5]; // offset 0x80051E78


static int gCatmullRom[4][4]; // offset 0x80051F18


static enum tCarStatType remap[5]; // offset 0x80051F58


static short textVals[5]; // offset 0x80051F6C


static short text2PVals[5]; // offset 0x80051F78


static short tvOrder[10]; // offset 0x80051F84


static short tvSplitOrder[5]; // offset 0x80051F98


static char gStateOverlays[8][4]; // offset 0x80051FA4


static struct RECT gOverlayPositions[7][2]; // offset 0x80051FC4


static int gRotateOffset[4]; // offset 0x80052C18


static char gSwapFileName[2][20]; // offset 0x80052C28


static char WaitingString[50]; // offset 0x80052C58


extern struct tScreenTournSelect *screenTournSelect; // offset 0x8005205C


static char trophyTVOrder[4]; // offset 0x80052058


static char gSwapFileName[16]; // offset 0x80052C90


extern struct tScreenTrophyRoom *screenTrophyRoom; // offset 0x80052060


extern char gSwapFileName[16]; // offset 0x80052064


extern struct tScreenTrophyInfo *screenTrophyInfo; // offset 0x80052088


extern char gSwapFileNameTI[16]; // offset 0x8005208C


extern int kBannerColors[4]; // offset 0x80052078


extern struct tScreenTrackSelect *screenTrackSelect; // offset 0x800520B4


static short tvOrder[10]; // offset 0x800520A0


static char gSwapFileName[20]; // offset 0x80052CA0


extern struct tScreenTrackInfo *screenTrackInfo; // offset 0x800520CC


static short tvOrder[10]; // offset 0x800520B8


static char gSwapFileName[64]; // offset 0x80052CB8


extern struct tScreenTrackRecords *screenTrackRecords; // offset 0x800520D0


extern struct tScreenControllerConfig *screenControllerConfig; // offset 0x800528D0


static unsigned char Offset[7][2]; // offset 0x800520D8


static char (*fileNames[7]); // offset 0x800520E8


extern short ArrowLocations[55][6]; // offset 0x80052104


extern short TextLocations[80][5]; // offset 0x80052398


extern short NumTexts[7][3]; // offset 0x800526B8


extern char ControllerItemIndex[5][3][16][2]; // offset 0x800526E4


extern struct tScreenDisplay *screenDisplay; // offset 0x800528D8


extern struct tScreenAudio *screenAudio; // offset 0x800528E8


extern struct tScreenMemcard *screenMemcard; // offset 0x800528F0


extern int GRIDMEMCARD_STARTX; // offset 0x800528F4


extern int GRIDMEMCARD_STARTY; // offset 0x800528F8


extern int MEMCARD_DELTAX; // offset 0x800528FC


extern int MEMCARD_DELTAY; // offset 0x80052900


extern int kMemCardMessageH; // offset 0x80052904


extern int kMemCardMessageH1; // offset 0x80052908


extern int EXTRAYATTOP; // offset 0x8005290C


extern int GRIDMEMCARD_WIDTH; // offset 0x80052910


extern int GRIDMEMCARD_HEIGHT; // offset 0x80052914


extern int GRIDMEMCARDGOURAUDBIT_X; // offset 0x80052918


extern int GRIDMEMCARDGOURAUDBIT_Y; // offset 0x8005291C


extern int MEMCARDICONOFFX; // offset 0x80052920


extern int MEMCARDICONOFFY; // offset 0x80052924


extern int kMemCardMessage1X; // offset 0x80052928


extern int kMemCardMessage1Y; // offset 0x8005292C


extern int kMemCardMessageX; // offset 0x80052930


extern int kMemCardMessageY; // offset 0x80052934


extern char (*fMemIcon)[15][3][192]; // offset 0x80052938


extern struct tScreenPinkSlipCongrats *screenPinkSlipCongrats; // offset 0x80052944


extern struct tScreenTournamentTrophy *screenTournamentTrophy; // offset 0x80052948


extern struct tScreenBeTheCopCongrats *screenBeTheCopCongrats; // offset 0x8005294C


extern struct tScreenTournamentCongrats *screenTournamentCongrats; // offset 0x80052950


extern char congratsSwapFileName[16]; // offset 0x80052954


extern char fPermFileNameBuf[16]; // offset 0x80052964


extern void * NewRecords[8]; // offset 0x80052978


extern void * NewBestLap; // offset 0x80052998


extern char minChar[6]; // offset 0x800529A0


extern char secChar[6]; // offset 0x800529A8


extern short menu_kUserNameRows; // offset 0x800529B0


extern short MENUUSERNAME_STARTY; // offset 0x800529B2


extern struct tScreenUserName *screenUserName; // offset 0x800529B4


extern char UserPermFileName[20]; // offset 0x800529B8


extern int kNoColor; // offset 0x800529D0


extern struct CdlFILE fp; // offset 0x80052A34


extern char (*movienames[5]); // offset 0x800529D8


extern short movieframes[5]; // offset 0x800529EC


extern void * movie24bit[5]; // offset 0x800529F8


extern short movieheight[5]; // offset 0x80052A0C


extern short moviewidth[5]; // offset 0x80052A18


static int width; // offset 0x80052A24


static int height; // offset 0x80052A28


extern short user_exit; // offset 0x80052A2C


extern char skip_all; // offset 0x80052A2E


extern char gPlayerNum; // offset 0x80052A2F


extern short download; // offset 0x80052A30


static struct CdlLOC loc; // offset 0x80052CF8


static short PPWTop; // offset 0x80052CFC


static short PPWBottom; // offset 0x80052CFE


static short gMode; // offset 0x80052D00


static void * gIsRGB24; // offset 0x80052D04


static short gMovieHeight; // offset 0x80052D08


static short gMovieWidth; // offset 0x80052D0A


static unsigned long gMovieFrame; // offset 0x80052D0C


static unsigned long gEndFrame; // offset 0x80052D10


static void * bMovieLoaded; // offset 0x80052D14


static void * bStopMovie; // offset 0x80052D18


static int bRewindMovie; // offset 0x80052D1C


static int isFirstSlice; // offset 0x80052D20


static struct DECENV dec; // offset 0x80052D28


static unsigned long *vlcbuf0; // offset 0x80052D58


static unsigned long *vlcbuf1; // offset 0x80052D5C


static unsigned short *imgbuf; // offset 0x80052D60


static unsigned long *sect_buff; // offset 0x80052D64


extern struct tTexture_ShapeInfo *gHelpShapes; // offset 0x80052A64


extern struct Car_tObj (*gCarObj[2]); // offset 0x80052A68


extern char titleScreenDisplayed; // offset 0x80052A70


extern short gFadeBrightness; // offset 0x80052A50


static char *STR_FRMT; // offset 0x80052A54


extern char *creditShapeFile; // offset 0x80052A58


static unsigned short ofs[2]; // offset 0x80052A5C


static char rendering3DEnvironmentInitialized; // offset 0x80052A60


static unsigned short ascii_table[3][2]; // offset 0x80052A78


static unsigned short ascii_k_table[33]; // offset 0x80052A84


static unsigned char sjis_table[3][2]; // offset 0x80052AC8


static unsigned char sjis_k_table[88]; // offset 0x80052AD0


extern struct fMemCardInfo_def gMemCardInfo; // offset 0x80052D68


extern struct __62 gMDECinfo; // offset 0x80052B28


extern int g_mdecdrawsyncfailed; // offset 0x80052B30


extern struct PAD_COMMON Padglobal[2]; // offset 0x8013E8F0


extern struct PAD_63fake gPadinfo; // offset 0x8013E89C

/* End external declarations */

#endif
