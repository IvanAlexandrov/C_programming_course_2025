#include <stdio.h>

#define SWAP(A, B, TYPE) TYPE temp = A; A = B; B = temp;

#define SORT(ARRAY, SIZE, TYPE, COMPARE) for (int i = 0; i < SIZE - 1; i++) { \
    for (int j = 0; j < SIZE - i - 1; j++) { \
        if (ARRAY[j] COMPARE ARRAY[j + 1]) { \
            SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
        } \
    } \
} \

int main() {
    // int arr[5] = {2, 3, 5, 4, 6};
    // SORT(arr, 5, int, >)
    
    // for (int i = 0; i < 5; i++) {
    //     printf("%d\n", arr[i]);
    // }

    char arr[5] = {'c', 'b', 'g', 'a', 'm'};
    SORT(arr, 5, char, >)

    for (int i = 0; i < 5; i++) {
        printf("%c\n", arr[i]);
    }
    return 0;
}