#include <stdio.h>
#include <string.h>
#include "objects.h"
#include "noun.h"
#include "helpers.h"

struct area {

    const char *description;
    const char *tag;
}
areas[] ={ {"a wide meadow", "field"},
           {"a dark cave", "cave"}

};

#define numberOfAreas (sizeof areas / sizeof *areas)

static unsigned playerPosition = 0;

void actionLook(const char *noun){

    if(noun && !strcmp(noun, "around")){

        printf("You are in %s.\n", player->location->description);
        listLocObj(player->location);
    }
    else printf("Look where now?\n");
}

void actionGo(const char *noun){

    OBJECT *obj = getVisible("where you want to go", noun);

    if(!obj){
        //Handled by getVisible() in noun.c
    }
    else if(!obj->location && obj->location != player->location){

        printf("Alright.\n");
        player->location = obj;
        actionLook("around");
    }
    else printf("You are as close as it gets!\n");
}
