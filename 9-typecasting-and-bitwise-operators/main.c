#include <stdio.h>
#include "quadraticroots.h"

void printRoots(QuadraticRootsResult result) {
    if (result.norealroots) {
        printf("The equation has no real solutions.\n");
        return;
    }
    printf("X1: %Lf\n", result.x1);
    printf("X2: %Lf\n", result.x2);
}

int main() {
    QuadraticRootsResult result;

    int a1 = 1;
    int b1 = 5;
    int c1 = 6; // -2, -3

    result = findroots(a1, b1, c1);
    printRoots(result);

    float a2 = 1.5;
    float b2 = 5.5;
    float c2 = 0.5;

    result = findroots(a2, b2, c2);
    printRoots(result);

    double a3 = 1.358;
    double b3 = 6.826;
    double c3 = 0.4583;

    result = findroots(a3, b3, c3);
    printRoots(result);
    

    return 0;
}