#include <stdio.h>
#include <stdbool.h>
#include "parse.h"

static char input[100] = "look around";

static bool readInput(void){
    printf("\n---> ");
    return fgets(input, sizeof(input), stdin) != NULL;
}

int main(void){
    printf("Welcome to a simple Text Adventure.....\n");
    while(parseAndRun(input) && readInput());
    printf("\nFarewell!.......\n");

    return 0;
}
