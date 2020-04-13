#include <stdio.h>

#include <string.h>

#include "location.h"

#include "inventory.h"

#include "combat.h"

#include "torch.h"

#include "execute.h"

#include "asciiPrint.h"

#include "help.h"

#include "boot.h"

#include "health.h"

#include "intro.h"

static char input[100];

static int getInput() {
    printf("\n--> ");
    return fgets(input, sizeof(input), stdin) != NULL;
}

static int parseAndExecute() {
    char * verb = strtok(input, " \n");
    char * noun = strtok(NULL, " \n");
    char * context = strtok(NULL, "\n");
    if (verb != NULL) {
        if (strcmp(verb, "quit") == 0) {
            return 0;
        } else if (strcmp(verb, "look") == 0) {
            executeLook(noun);
        } else if (strcmp(verb, "go") == 0) {
            executeGo(noun);
        } else if (strcmp(verb, "get") == 0) {
            executeGet(noun);
        } else if (strcmp(verb, "drop") == 0) {
            executeDrop(noun);
        } else if (strcmp(verb, "give") == 0) {
            executeGive(noun);
        } else if (strcmp(verb, "ask") == 0) {
            executeAsk(noun);
        } else if (strcmp(verb, "inventory") == 0) {
            executeInventory();
        } else if (strcmp(verb, "help") == 0) {
            executeHelp();
        } else if (strcmp(verb, "attack") == 0) {
            executeAttack(noun, context);
        } else if (strcmp(verb, "open") == 0) {
            executeOpen(noun);
        } else if (strcmp(verb, "close") == 0) {
            executeClose(noun);
        } else if (strcmp(verb, "lock") == 0) {
            executeLock(noun);
        } else if (strcmp(verb, "unlock") == 0) {
            executeUnlock(noun);
        } else if (strcmp(verb, "heal") == 0) {
            executeHeal();
        } else if (strcmp(verb, "light") == 0) {
            if (strcmp(noun, "torch") == 0) {
                executeLightTorch();
            }
        } else {
            printf("I don't know how to '%s'.\n", verb);
        }
    }
    return 1;
}

int main() {
    displayLoader();
    intro();
    executeLook("around");
    while (getInput() && parseAndExecute());
    printf("\nBye!\n");
    return 0;
}