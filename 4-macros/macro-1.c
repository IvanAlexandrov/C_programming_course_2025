#include <stdio.h>

#define ARR_SIZE 10

int main() {
    int arr[ARR_SIZE] = {1, 3, 4, 5, 8, 7, 2, 3, 9, 10};

    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}