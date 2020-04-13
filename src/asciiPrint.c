#include <stdio.h>

#include <stdio.h>

void printAscii(const char * asciiFile) {
	FILE *fp;
	char s;
	fp = fopen(asciiFile, "r");
	if(fp == NULL) {
		printf("\nCAN NOT OPEN FILE %s\n", asciiFile);
		return;
	}
	do {
		s = getc(fp);
		printf("%c", s);
	}
	while(s!=EOF);
	fclose(fp);
	printf("\n");
}

void printIntro() {
    printAscii("./src/ascii/intro.txt");
}

void printField() {
	printAscii("./src/ascii/field.txt");
}

void printSword() {
	printAscii("./src/ascii/sword.txt");
}

void printLibrary() {
	printAscii("./src/ascii/library.txt");
}

void printAxe() {
	printAscii("./src/ascii/axe.txt");
}

void printIronChest() {
	printAscii("./src/ascii/ironChest.txt");
}