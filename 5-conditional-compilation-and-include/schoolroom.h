#ifndef SCHOOL_ROOM_H_
#define SCHOOL_ROOM_H_

#include "person.h"

struct SchoolRoom {
    int room_number;
    struct Person present_students[50];
};

#endif