#include <stdio.h>

#include "asciiPrint.h"

#include "help.h"

void intro() {
	printIntro();
	executeHelp();
	printf("\n\nPress Enter to start\n");

	char enter = 0;
	while (
		enter != '\r'
		&& enter != '\n'
		) { 
			enter = getchar(); 
		}
	enter = 0;
	printf("It is rumoured that long ago, a portal to hell was discovered deep ");
	printf("within the hidden chambers deep underground. However, demonic creatures ");
	printf("have again started attacking villagers.\n\n");

	printf("You need to venture deep into the Abyss Chambers, collect the 5 grimoire's ");
	printf("of demonology and use them to close the portal to hell. \n\n");

	printf("The demons have been reported as coming from a nearby cave. Maybe that would be ");
	printf("a good place to start. \n\n\n");

	printf("Press Enter to continue");
	while (
		enter != '\r'
		&& enter != '\n'
		) { 
			enter = getchar(); 
		}
	enter = 0;
	printField();
	printf("\n\n");
}
