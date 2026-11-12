#ifndef OBJECTS_H
#define OBJECTS_H

typedef struct Object{

    const char *description;
    const char *tag;
    struct Object *location;
}OBJECT;

extern OBJECT objs[];

#define field    (objs+0)
#define cave     (objs+1)
#define silver   (objs+2)
#define gold     (objs+3)
#define guard    (objs+4)
#define player   (objs+5)

#define endOfObj (objs+6)

#endif
