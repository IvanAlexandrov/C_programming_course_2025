#include <stdio.h>
#include <string.h>

#define SWAP(A, B, TYPE) TYPE temp = A; A = B; B = temp;

int main() {
    // int a = 3;
    // int b = 4;
    // SWAP(a, b, int);
    // printf("a:%d\n", a);
    // printf("b:%d\n", b);

    char c = 'g';
    char d = 'z';
    SWAP(c, d, char);
    printf("c:%c\n", c);
    printf("d:%c\n", d);

    return 0;
}