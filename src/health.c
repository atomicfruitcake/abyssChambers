#include <stdio.h>

#include <string.h>

#include "object.h"

#include "misc.h"



int canHealInRoom() {
	const char *healingRooms[] = {
		"chamber of rest"
	};
	
	player -> location -> tags[0];

	int len = sizeof(healingRooms)/sizeof(healingRooms[0]);
	int i;

	for(i = 0; i < len; ++i) {
		if (strcmp(healingRooms[i], player -> location -> tags[0])) {
			return 0;
		}
	}
	return 1;
}

static void heal() {
	if (canHealInRoom()) {
		player -> health = 100;
		printf("You have healed, you now have full health (100)\n");
	}
	else {
		printf("It's too dangerous to heal here, find somewhere safer"); 
	}
}


void executeHeal() {
    heal();
}