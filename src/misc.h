typedef enum {
   distPlayer,
   distHeld,
   distHeldContained,
   distChestInRoom,
   distLocation,
   distHere,
   distHereContained,
   distOverthere,
   distNotHere,
   distUnknownObject,
   distNoObjectSpecified
} DISTANCE;

extern OBJECT *getPassageTo(OBJECT *targetLocation);
extern DISTANCE distanceTo(OBJECT *obj);
extern OBJECT *parseObject(const char *noun);
extern OBJECT *personHere(void);
extern int nounIsInTags(const char *noun, const char **tags);
extern int listObjectsAtLocation(OBJECT *location);
extern int inCurrentInventory(OBJECT *container, const char *item);
extern int weightOfContents(OBJECT *container);
