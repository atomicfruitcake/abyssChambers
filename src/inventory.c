#include <stdio.h>

#include "object.h"

#include "misc.h"

#include "asciiPrint.h"

static void moveObject(const char * noun, OBJECT * from, OBJECT * to) {
    OBJECT * obj = parseObject(noun);
    if (!obj) {
        printf("I don't know what a %s is", noun);
        return;
    }
    if (nounIsInTags("ars goetia", obj->tags)) {
        printLibrary();
    }
    if (nounIsInTags("ars theurgia goetia", obj->tags)) {
        printIronChest();
    }
    if (nounIsInTags("sword", obj->tags)) {
        printSword();
    }
    if (nounIsInTags("axe", obj->tags)) {
        printAxe();
    }
    if (obj == NULL) {
        printf("I don't understand what item you mean.\n");
    } else if (from != obj -> location) {
        switch (distanceTo(obj)) {
        case distPlayer:
            printf("You should not be doing that to yourself.\n");
            break;
        case distHeld:
            printf("You already have %s.\n", obj -> description);
            break;
        case distOverthere:
            printf("That's not an item.\n");
            break;
        case distHere:
            if (from == player) {
                printf("You have no %s.\n", noun);
            } else {
                printf("Sorry, %s has no %s.\n", from -> description, noun);
            }
            break;
        case distHereContained:
            obj -> location = to;
            printf("You pick up the %s \n", obj -> tags[0]);
            break;
        default:
            printf("You don't see any %s here.\n", noun);
        }
    } else if (to == NULL) {
        printf("There is nobody here to give that to.\n");
        return;
    } else if (to -> health <= 0) {
        printf("Cannot give that item as %s is dead.\n", to -> tags[0]);
        return;
    } else if (obj -> weight > to -> capacity) {
        printf("That is way too heavy.\n");
        return;
    } else if (obj -> weight + weightOfContents(to) > to -> capacity) {
        printf("That would become too heavy.\n");
        return;
    } else {
        obj -> location = to;
        printf("OK.\n");
    }
}

void executeGet(const char * noun) {
    moveObject(noun, player -> location, player);
}

void executeDrop(const char * noun) {
    moveObject(noun, player, player -> location);
}

void executeGive(const char * noun) {
    moveObject(noun, player, personHere());
}

void executeAsk(const char * noun) {
    moveObject(noun, personHere(), player);
}

void executeInventory(void) {
    if (listObjectsAtLocation(player) == 0) {
        printf("You are empty-handed.\n");
    }
}