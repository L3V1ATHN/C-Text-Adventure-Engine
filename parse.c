#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "area.h"

bool parseAndRun(char *input){

    char *verb = strtok(input, " \n");
    char *noun = strtok(NULL, " \n");

    if(verb){

        if(!strcmp(verb, "quit")) return false;
        else if(!strcmp(verb, "look")) actionLook(noun);
        else if(!strcmp(verb, "go")) actionGo(noun);
        else printf("I do not understand what you mean by %s.\n", verb);
    }

    return true;
}
