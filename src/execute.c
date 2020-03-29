#include <stdio.h>

#include "object.h"

#include "misc.h"

#include "match.h"

static int objectWithinReach(const char * verb, OBJECT * obj) {
    int ok = 0;
    if (obj -> location != player -> location) {
        printf("That is out of reach.\n");
    } else {
        ok = 1;
    }
    return ok;
}

int executeOpen(const char * toOpen) {
    OBJECT * to = parseObject(toOpen);
    if (objectWithinReach("open", to)) {
        printf("%s", (to -> open)(to));
    }

    return 1;
}

int executeClose(const char * toClose) {
    OBJECT * to = parseObject(toClose);
    if (objectWithinReach("close", to)) {
        printf("%s", (to -> close)(to));
    }
    return 1;
}

int executeLock(const char * toLock) {
    OBJECT * to = parseObject(toLock);
    if (objectWithinReach("lock", to)) {
        printf("%s", (to -> lock)(to));
    }
    return 1;
}

int executeUnlock(const char * toUnlock) {
    OBJECT * to = parseObject(toUnlock);
    if (objectWithinReach("unlock", to)) {
        printf("%s", (to -> unlock)(to));
    }
    return 1;
}