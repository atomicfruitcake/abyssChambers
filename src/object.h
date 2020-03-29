
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
#define exitCopse	(objs + 11)
#define intoCopse	(objs + 12)
#define intoCave	(objs + 13)
#define intoCaveBlocked	(objs + 14)
#define exitCave	(objs + 15)
#define wallField	(objs + 16)
#define wallCave	(objs + 17)
#define backroom	(objs + 18)
#define wallBackroom	(objs + 19)
#define passageway	(objs + 20)
#define intoPassageway	(objs + 21)
#define wallPassageway	(objs + 22)
#define wallChamber	(objs + 23)
#define chamber	(objs + 24)
#define intoChamber	(objs + 25)
#define exitChamber	(objs + 26)
#define chamberStaircase	(objs + 27)
#define intoChamberStaircase	(objs + 28)
#define intoChamberStaircaseBlocked	(objs + 29)
#define exitChamberStaircase	(objs + 30)
#define hauntedVaults	(objs + 31)
#define intoHauntedVaults	(objs + 32)
#define exitHauntedVaultsStaircase	(objs + 33)
#define witchesLair	(objs + 34)
#define openDoorToWitchesLair	(objs + 35)
#define closedDoorToWitchesLair	(objs + 36)
#define openDoorToHauntedVaults	(objs + 37)
#define closedDoorToHauntedVaults	(objs + 38)
#define tortureChamber	(objs + 39)
#define intoTortureChamber	(objs + 40)
#define exitTortureChamber	(objs + 41)
#define deepHauntedVaults	(objs + 42)
#define intoDeepHauntedVaults	(objs + 43)
#define intoDeepHauntedVaultsBlocked	(objs + 44)
#define exitDeepHauntedVaults	(objs + 45)
#define chamberAnteroom	(objs + 46)
#define intoChamberAnteroom	(objs + 47)
#define intoChamberAnteroomBlocked	(objs + 48)
#define exitChamberAnteroom	(objs + 49)
#define library	(objs + 50)
#define openDoorToLibrary	(objs + 51)
#define closedDoorToLibrary	(objs + 52)
#define openDoorToAnteroom	(objs + 53)
#define closedDoorToAnteroom	(objs + 54)
#define openDoorToBackroom	(objs + 55)
#define closedDoorToBackroom	(objs + 56)
#define openDoorToCave	(objs + 57)
#define closedDoorToCave	(objs + 58)
#define openBox	(objs + 59)
#define closedBox	(objs + 60)
#define lockedBox	(objs + 61)
#define keyForBox	(objs + 62)
#define torch	(objs + 63)
#define cauldron	(objs + 64)
#define bookArsGoetia	(objs + 65)

#define endOfObjs	(objs + 66)

#define validObject(obj)	((obj) != NULL && (*(obj)->condition)((obj)))

#define forEachObject(obj)	for (obj = objs; obj < endOfObjs; obj++) if (validObject(obj))
