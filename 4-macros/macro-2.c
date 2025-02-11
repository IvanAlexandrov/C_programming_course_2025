#include <stdio.h>

#define COMPARE(A, B) ((A) > (B)) ? (A) : (B)

int main() {
    int a = 8;
    int b = 4;
    printf("Bigger number: %d\n", COMPARE(a, b));
    return 0;
}