#ifndef TRANSFORMATION_H_
#define TRANSFORMATION_H_

typedef struct Transformation_sturct {
    long result;
    char error[100];
} Transformation;

Transformation string_to_number(char input[20]);

#endif