#include <stdio.h>

#define SQUARE_SUM(A, B) (((A) + (B)) * ((A) + (B)))

int main() {
    int a = 2;
    int b = 3;
    printf("Result: %d\n", SQUARE_SUM(a, b));
    return 0;
}