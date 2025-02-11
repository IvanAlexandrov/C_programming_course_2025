#include <stdio.h>

#define ARRAY_SIZE 6

int main() {

    #if defined ARRAY_SIZE && ARRAY_SIZE > 0 && ARRAY_SIZE < 11

    int arr[ARRAY_SIZE];

    int k = 1;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = k;
        k *= 2;

        printf("%d\n", arr[i]);
    }

    #else
    printf("Invalid array size entered.");
    #endif

    return 0;
}