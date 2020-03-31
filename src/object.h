
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
#define bloodyKey	(objs + 5)
#define sword	(objs + 6)
#define axe	(objs + 7)
#define player	(objs + 8)
#define guard	(objs + 9)
#define skeletonGuard	(objs + 10)
#define evilWitch	(objs + 11)
#define demonWarden	(objs + 12)
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
#define guardRoom	(objs + 51)
#define openDoorToGuardRoom	(objs + 52)
#define closedDoorToGuardRoom	(objs + 53)
#define openDoorToDeepVaults	(objs + 54)
#define closedDoorToDeepVaults	(objs + 55)
#define wardenOffice	(objs + 56)
#define intoWardenOffice	(objs + 57)
#define exitWardenOffice	(objs + 58)
#define chamberAnteroom	(objs + 59)
#define intoChamberAnteroom	(objs + 60)
#define intoChamberAnteroomBlocked	(objs + 61)
#define exitChamberAnteroom	(objs + 62)
#define library	(objs + 63)
#define openDoorToLibrary	(objs + 64)
#define closedDoorToLibrary	(objs + 65)
#define openDoorToAnteroom	(objs + 66)
#define closedDoorToAnteroom	(objs + 67)
#define openDoorToBackroom	(objs + 68)
#define closedDoorToBackroom	(objs + 69)
#define openDoorToCave	(objs + 70)
#define closedDoorToCave	(objs + 71)
#define openBox	(objs + 72)
#define closedBox	(objs + 73)
#define lockedBox	(objs + 74)
#define keyForBox	(objs + 75)
#define torch	(objs + 76)
#define cauldron	(objs + 77)
#define openStitchedCorpse	(objs + 78)
#define closedStitchedCorpse	(objs + 79)
#define bookArsGoetia	(objs + 80)

#define endOfObjs	(objs + 81)

#define validObject(obj)	((obj) != NULL && (*(obj)->condition)((obj)))

#define forEachObject(obj)	for (obj = objs; obj < endOfObjs; obj++) if (validObject(obj))
