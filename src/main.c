#include <stdio.h>

#include "location.h"

#include "match.h"

#include "parsexec.h"

static char input[100];

static int getInput() {
    printf("\n--> ");
    return fgets(input, sizeof(input), stdin) != NULL;
}

int main() {
    printf("Welcome to Little Cave Adventure.\n");
    executeLook();
    while (getInput() && parseAndExecute(input));
    printf("\nBye!\n");
    return 0;
}