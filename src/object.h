
typedef struct object {
   int          (*condition)(struct object *);
   const char    *description;
   const char   **tags;
   struct object *location;
   struct object *destination;
   struct object *prospect;
   const char    *details;
   const char    *contents;
   const char    *textGo;
   int            weight;
   int            capacity;
   int            health;
   int            attack;
   const char  *(*open)(struct object *);
   const char  *(*close)(struct object *);
   const char  *(*lock)(struct object *);
   const char  *(*unlock)(struct object *);
   int            lit;
} OBJECT;

extern OBJECT objs[];

#define field	(objs + 0)
#define cave	(objs + 1)
#define copse	(objs + 2)
#define silver	(objs + 3)
#define gold	(objs + 4)
#define sword	(objs + 5)
#define axe	(objs + 6)
#define player	(objs + 7)
#define guard	(objs + 8)
#define skeletonGuard	(objs + 9)
#define evilWitch	(objs + 10)
#define demonWarden	(objs + 11)
#define cacodemon	(objs + 12)
#define exitCopse	(objs + 13)
#define intoCopse	(objs + 14)
#define intoCave	(objs + 15)
#define intoCaveBlocked	(objs + 16)
#define exitCave	(objs + 17)
#define wallField	(objs + 18)
#define wallCave	(objs + 19)
#define backroom	(objs + 20)
#define wallBackroom	(objs + 21)
#define passageway	(objs + 22)
#define intoPassageway	(objs + 23)
#define wallPassageway	(objs + 24)
#define wallChamber	(objs + 25)
#define chamber	(objs + 26)
#define intoChamber	(objs + 27)
#define exitChamber	(objs + 28)
#define chamberStaircase	(objs + 29)
#define intoChamberStaircase	(objs + 30)
#define intoChamberStaircaseBlocked	(objs + 31)
#define exitChamberStaircase	(objs + 32)
#define centralVaults	(objs + 33)
#define intoCentralVaults	(objs + 34)
#define exitCentralVaultsStaircase	(objs + 35)
#define witchesLair	(objs + 36)
#define openDoorToWitchesLair	(objs + 37)
#define closedDoorToWitchesLair	(objs + 38)
#define openDoorToCentralVaults	(objs + 39)
#define closedDoorToCentralVaults	(objs + 40)
#define tortureChamber	(objs + 41)
#define intoTortureChamber	(objs + 42)
#define exitTortureChamber	(objs + 43)
#define deepCentralVaults	(objs + 44)
#define intoDeepCentralVaults	(objs + 45)
#define intoDeepCentralVaultsBlocked	(objs + 46)
#define exitDeepCentralVaults	(objs + 47)
#define bodyPit	(objs + 48)
#define intoBodyPit	(objs + 49)
#define exitBodyPit	(objs + 50)
#define ladderRoom	(objs + 51)
#define intoladderRoom	(objs + 52)
#define exitladderRoomVaults	(objs + 53)
#define catacombsEast	(objs + 54)
#define catacombsNorthEast	(objs + 55)
#define intoCatacombsNorthEast	(objs + 56)
#define exitCatacombsNorthEastToEast	(objs + 57)
#define catacombsSouthEast	(objs + 58)
#define intoCatacombsSouthEastFromEast	(objs + 59)
#define exitCatacombsSouthEastToEast	(objs + 60)
#define catacombsCentral	(objs + 61)
#define intoCatacombsCentralFromEast	(objs + 62)
#define exitCatacombsCentralToEast	(objs + 63)
#define catacombsNorth	(objs + 64)
#define intoCatacombsNorthFromNorthEast	(objs + 65)
#define intoCatacombsCentralFromNorth	(objs + 66)
#define exitCatacombsNorthToNorthEast	(objs + 67)
#define catacombsSouth	(objs + 68)
#define intoCatacombsSouthFromSouthEast	(objs + 69)
#define exitCatacombsSouthToSouthEast	(objs + 70)
#define intoCatacombsCentralFromSouth	(objs + 71)
#define catacombsSouthWest	(objs + 72)
#define intoCatacombsSouthWestFromSouth	(objs + 73)
#define exitCatacombsSouthWestToSouth	(objs + 74)
#define catacombsNorthWest	(objs + 75)
#define intoCatacombsNorthWestFromNorth	(objs + 76)
#define exitCatacombsNorthWestToNorth	(objs + 77)
#define catacombsWest	(objs + 78)
#define intoCatacombsWestFromNorthWest	(objs + 79)
#define exitCatacombsWestToNorthWest	(objs + 80)
#define intoCatacombsWestFromSouthWest	(objs + 81)
#define exitCatacombsWestToSouthWest	(objs + 82)
#define intoCatacombsCentralFromWest	(objs + 83)
#define exitCatacombsCentralToWest	(objs + 84)
#define exitCatacombsCentralToNorth	(objs + 85)
#define exitCatacombsCentralToSouth	(objs + 86)
#define intoCatacombsWest	(objs + 87)
#define exitCatacombsWestLadder	(objs + 88)
#define forbiddenCrypt	(objs + 89)
#define intoForbiddenCryptFromCatacombsEast	(objs + 90)
#define exitForbiddenCryptToCatacombsWest	(objs + 91)
#define chamberOfRest	(objs + 92)
#define intoChamberOfRestFromCatacombsSouth	(objs + 93)
#define exitChamberOfRestToCatacombsSouth	(objs + 94)
#define sewersEntrance	(objs + 95)
#define openGateToSewersEntrance	(objs + 96)
#define closedGateToSewersEntrance	(objs + 97)
#define openGateToCatacombsNorth	(objs + 98)
#define closedGateToCatacombsNorth	(objs + 99)
#define sewersEast	(objs + 100)
#define intoSewersEastFromSewersEntrance	(objs + 101)
#define intoSewersEntranceFromSewersEast	(objs + 102)
#define sewersWest	(objs + 103)
#define intoSewersWestFromSewersEntrance	(objs + 104)
#define intoSewersEntranceFromSewersWest	(objs + 105)
#define guardRoom	(objs + 106)
#define openDoorToGuardRoom	(objs + 107)
#define closedDoorToGuardRoom	(objs + 108)
#define openDoorToDeepVaults	(objs + 109)
#define closedDoorToDeepVaults	(objs + 110)
#define wardensOffice	(objs + 111)
#define intoWardensOffice	(objs + 112)
#define exitWardenOffice	(objs + 113)
#define chamberAnteroom	(objs + 114)
#define intoChamberAnteroom	(objs + 115)
#define intoChamberAnteroomBlocked	(objs + 116)
#define exitChamberAnteroom	(objs + 117)
#define library	(objs + 118)
#define openDoorToLibrary	(objs + 119)
#define closedDoorToLibrary	(objs + 120)
#define openDoorToAnteroom	(objs + 121)
#define closedDoorToAnteroom	(objs + 122)
#define openDoorToBackroom	(objs + 123)
#define closedDoorToBackroom	(objs + 124)
#define openDoorToCave	(objs + 125)
#define closedDoorToCave	(objs + 126)
#define openBox	(objs + 127)
#define closedBox	(objs + 128)
#define lockedBox	(objs + 129)
#define openIronChest	(objs + 130)
#define closedIronChest	(objs + 131)
#define lockedIronChest	(objs + 132)
#define keyForIronChest	(objs + 133)
#define keyForBox	(objs + 134)
#define keyForSewerGate	(objs + 135)
#define torch	(objs + 136)
#define cauldron	(objs + 137)
#define closedStitchedCorpse	(objs + 138)
#define openStitchedCorpse	(objs + 139)
#define bookArsGoetia	(objs + 140)
#define bookArsTheurgiaGoetia	(objs + 141)
#define bookArsPaulina	(objs + 142)
#define bookArsAlmadel	(objs + 143)

#define endOfObjs	(objs + 144)

#define validObject(obj)	((obj) != NULL && (*(obj)->condition)((obj)))

#define forEachObject(obj)	for (obj = objs; obj < endOfObjs; obj++) if (validObject(obj))
