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
}

void printIntro() {
    printAscii("./src/ascii/intro.txt");
}