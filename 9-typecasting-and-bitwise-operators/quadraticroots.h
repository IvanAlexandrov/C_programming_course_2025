#ifndef QUADRATIC_ROOTS_H_
#define QUADRATIC_ROOTS_H_

typedef struct QuadraticRootsResult_struct {
    long double x1;
    long double x2;
    int norealroots;
} QuadraticRootsResult;
QuadraticRootsResult findroots(long double a, long double b, long double c);

#endif