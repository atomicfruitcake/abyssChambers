#include "object.h"

static void swapLocations(OBJECT * obj1, OBJECT * obj2) {
    OBJECT * tmp = obj1 -> location;
    obj1 -> location = obj2 -> location;
    obj2 -> location = tmp;
}

const char * cannotBeOpened(OBJECT * obj) {
    return "That cannot be opened.\n";
}
const char * cannotBeClosed(OBJECT * obj) {
    return "That cannot be closed.\n";
}
const char * cannotBeLocked(OBJECT * obj) {
    return "That cannot be locked.\n";
}
const char * cannotBeUnlocked(OBJECT * obj) {
    return "That cannot be unlocked.\n";
}

const char * isAlreadyOpen(OBJECT * obj) {
    return "That is already open.\n";
}
const char * isAlreadyClosed(OBJECT * obj) {
    return "That is already closed.\n";
}
const char * isAlreadyLocked(OBJECT * obj) {
    return "That is already locked.\n";
}
const char * isAlreadyUnlocked(OBJECT * obj) {
    return "That is already unlocked.\n";
}

const char * isStillOpen(OBJECT * obj) {
    return "That is still open.\n";
}
const char * isStillLocked(OBJECT * obj) {
    return "That is still locked.\n";
}

const char * toggleBackdoor(OBJECT * obj) {
    swapLocations(openDoorToBackroom, closedDoorToBackroom);
    swapLocations(openDoorToCave, closedDoorToCave);
    return "OK.\n";
}

const char * toggleLibaryDoor(OBJECT * obj) {
    swapLocations(openDoorToLibrary, closedDoorToLibrary);
    swapLocations(openDoorToAnteroom, closedDoorToAnteroom);
    return "OK.\n";
}

const char * toggleWitchesLairDoor(OBJECT * obj) {
    swapLocations(openDoorToWitchesLair, closedDoorToWitchesLair);
    swapLocations(openDoorToCentralVaults, closedDoorToCentralVaults);
    return "OK.\n";
}

const char * toggleBox(OBJECT * obj) {
    swapLocations(openBox, closedBox);
    return "OK.\n";
}

const char * toggleCorpse(OBJECT * obj) {
    swapLocations(openStitchedCorpse, closedStitchedCorpse);
    keyForIronChest -> location = bodyPit;
    return "OK.\n";
}

const char * toggleGuardRoomDoor(OBJECT * obj) {
    swapLocations(openDoorToGuardRoom, closedDoorToGuardRoom);
    swapLocations(openDoorToDeepVaults, closedDoorToDeepVaults);
    return "OK.\n";
}

const char * toggleGateToSewersEntrance(OBJECT * obj) {
    swapLocations(openGateToSewersEntrance, closedGateToSewersEntrance);
    swapLocations(openDoorToDeepVaults, closedDoorToDeepVaults);
    return "OK.\n";
}

const char * toggleBoxLock(OBJECT * obj) {
    if (keyForIronChest -> location == player) {
        swapLocations(closedBox, lockedBox);
        return "OK.\n";
    } else {
        return "You don't have a key.\n";
    }
}

const char * toggleIronChest(OBJECT * obj) {
    swapLocations(openIronChest, closedIronChest);
    bookArsTheurgiaGoetia -> location = wardensOffice;
    return "OK.\n";
}

const char * toggleIronChestLock(OBJECT * obj) {
    if (keyForIronChest -> location == player) {
        swapLocations(closedIronChest, lockedIronChest);
        return "OK.\n";
    } else {
        return "You don't have a key.\n";
    }
}