#ifndef SCHOOL_CLASS_H_
#define SCHOOL_CLASS_H_

#include "person.h"

struct SchoolClass {
    struct Person students[26];
    char class_letter;
    int class_number;
    struct Person head_teacher;
};

#endif