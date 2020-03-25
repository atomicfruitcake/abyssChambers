
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
#define silver	(objs + 2)
#define gold	(objs + 3)
#define sword	(objs + 4)
#define guard	(objs + 5)
#define player	(objs + 6)
#define intoCave	(objs + 7)
#define intoCaveBlocked	(objs + 8)
#define exitCave	(objs + 9)
#define wallField	(objs + 10)
#define wallCave	(objs + 11)
#define backroom	(objs + 12)
#define wallBackroom	(objs + 13)
#define openDoorToBackroom	(objs + 14)
#define closedDoorToBackroom	(objs + 15)
#define openDoorToCave	(objs + 16)
#define closedDoorToCave	(objs + 17)
#define openBox	(objs + 18)
#define closedBox	(objs + 19)
#define lockedBox	(objs + 20)
#define keyForBox	(objs + 21)

#define endOfObjs	(objs + 22)

#define validObject(obj)	((obj) != NULL && (*(obj)->condition)((obj)))

#define forEachObject(obj)	for (obj = objs; obj < endOfObjs; obj++) if (validObject(obj))
