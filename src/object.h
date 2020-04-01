
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
#define exitCopse	(objs + 12)
#define intoCopse	(objs + 13)
#define intoCave	(objs + 14)
#define intoCaveBlocked	(objs + 15)
#define exitCave	(objs + 16)
#define wallField	(objs + 17)
#define wallCave	(objs + 18)
#define backroom	(objs + 19)
#define wallBackroom	(objs + 20)
#define passageway	(objs + 21)
#define intoPassageway	(objs + 22)
#define wallPassageway	(objs + 23)
#define wallChamber	(objs + 24)
#define chamber	(objs + 25)
#define intoChamber	(objs + 26)
#define exitChamber	(objs + 27)
#define chamberStaircase	(objs + 28)
#define intoChamberStaircase	(objs + 29)
#define intoChamberStaircaseBlocked	(objs + 30)
#define exitChamberStaircase	(objs + 31)
#define centralVaults	(objs + 32)
#define intoCentralVaults	(objs + 33)
#define exitCentralVaultsStaircase	(objs + 34)
#define witchesLair	(objs + 35)
#define openDoorToWitchesLair	(objs + 36)
#define closedDoorToWitchesLair	(objs + 37)
#define openDoorToCentralVaults	(objs + 38)
#define closedDoorToCentralVaults	(objs + 39)
#define tortureChamber	(objs + 40)
#define intoTortureChamber	(objs + 41)
#define exitTortureChamber	(objs + 42)
#define deepCentralVaults	(objs + 43)
#define intoDeepCentralVaults	(objs + 44)
#define intoDeepCentralVaultsBlocked	(objs + 45)
#define exitDeepCentralVaults	(objs + 46)
#define bodyPit	(objs + 47)
#define intoBodyPit	(objs + 48)
#define exitBodyPit	(objs + 49)
#define ladderRoom	(objs + 50)
#define intoladderRoom	(objs + 51)
#define exitladderRoomVaults	(objs + 52)
#define catacombs	(objs + 53)
#define intoCatacombs	(objs + 54)
#define exitCatacombsLadder	(objs + 55)
#define guardRoom	(objs + 56)
#define openDoorToGuardRoom	(objs + 57)
#define closedDoorToGuardRoom	(objs + 58)
#define openDoorToDeepVaults	(objs + 59)
#define closedDoorToDeepVaults	(objs + 60)
#define wardensOffice	(objs + 61)
#define intoWardensOffice	(objs + 62)
#define exitWardenOffice	(objs + 63)
#define chamberAnteroom	(objs + 64)
#define intoChamberAnteroom	(objs + 65)
#define intoChamberAnteroomBlocked	(objs + 66)
#define exitChamberAnteroom	(objs + 67)
#define library	(objs + 68)
#define openDoorToLibrary	(objs + 69)
#define closedDoorToLibrary	(objs + 70)
#define openDoorToAnteroom	(objs + 71)
#define closedDoorToAnteroom	(objs + 72)
#define openDoorToBackroom	(objs + 73)
#define closedDoorToBackroom	(objs + 74)
#define openDoorToCave	(objs + 75)
#define closedDoorToCave	(objs + 76)
#define openBox	(objs + 77)
#define closedBox	(objs + 78)
#define lockedBox	(objs + 79)
#define openIronChest	(objs + 80)
#define closedIronChest	(objs + 81)
#define lockedIronChest	(objs + 82)
#define keyForIronChest	(objs + 83)
#define keyForBox	(objs + 84)
#define torch	(objs + 85)
#define cauldron	(objs + 86)
#define openStitchedCorpse	(objs + 87)
#define closedStitchedCorpse	(objs + 88)
#define bookArsGoetia	(objs + 89)
#define bookArsTheurgiaGoetia	(objs + 90)

#define endOfObjs	(objs + 91)

#define validObject(obj)	((obj) != NULL && (*(obj)->condition)((obj)))

#define forEachObject(obj)	for (obj = objs; obj < endOfObjs; obj++) if (validObject(obj))
