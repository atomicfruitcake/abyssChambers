
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
} OBJECT;

extern OBJECT objs[];

#define field	(objs + 0)
#define cave	(objs + 1)
#define copse	(objs + 2)
#define silver	(objs + 3)
#define gold	(objs + 4)
#define sword	(objs + 5)
#define guard	(objs + 6)
#define player	(objs + 7)
#define exitCopse	(objs + 8)
#define intoCopse	(objs + 9)
#define intoCave	(objs + 10)
#define intoCaveBlocked	(objs + 11)
#define exitCave	(objs + 12)
#define wallField	(objs + 13)
#define wallCave	(objs + 14)
#define backroom	(objs + 15)
#define passageway	(objs + 16)
#define exitPassageway	(objs + 17)
#define intoPassageway	(objs + 18)
#define chamber	(objs + 19)
#define exitChamber	(objs + 20)
#define intoChamber	(objs + 21)
#define wallPassageway	(objs + 22)
#define wallBackroom	(objs + 23)
#define openDoorToBackroom	(objs + 24)
#define closedDoorToBackroom	(objs + 25)
#define openDoorToCave	(objs + 26)
#define closedDoorToCave	(objs + 27)
#define openBox	(objs + 28)
#define closedBox	(objs + 29)
#define lockedBox	(objs + 30)
#define keyForBox	(objs + 31)

#define endOfObjs	(objs + 32)

#define validObject(obj)	((obj) != NULL && (*(obj)->condition)((obj)))

#define forEachObject(obj)	for (obj = objs; obj < endOfObjs; obj++) if (validObject(obj))
