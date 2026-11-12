#include <stdio.h>
#include "objects.h"

int listLocObj(OBJECT *location){

    int count  = 0;
    OBJECT *obj;

    for(obj = objs; obj < endOfObj; obj++){

        if(obj != player && obj->location == location){

            if(count++ == 0) printf("You see : \n");
            printf("%s\n", obj->description);
        }
    }

    return count;
}
