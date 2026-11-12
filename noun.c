#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "objects.h"

static bool objectTag(OBJECT *obj, const char *noun){

    return (noun != NULL) && (*noun  != '\0') && !strcmp(noun, obj->tag);
}

static OBJECT *getObject(const char *noun){

    OBJECT *obj, *res = NULL;

    for(obj = objs; obj < endOfObj; obj++){

        if(objectTag(obj, noun)) res = obj;
    }

    return res;
}

OBJECT *getVisible(const char *intention, const char *noun){

    OBJECT *obj = getObject(noun);

    if(!obj) printf("I do not understand %s...\n", intention);
    else if(!(obj == player ||
              obj == player->location ||
              obj->location == player ||
              obj->location == player->location ||
              obj->location == NULL ||
              obj->location->location == player ||
              obj->location->location == player->location)){

                printf("You do not see anything here...\n");
                obj = NULL;
            }
    return obj;
}
