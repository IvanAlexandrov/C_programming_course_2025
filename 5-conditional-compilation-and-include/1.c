#include <stdio.h>

#define DEBUG

int sort_array(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    #ifdef DEBUG
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    #endif

    int sum = 0;
    for (int i = 0; i < size; i += 3) {
        sum += arr[i];
        #ifdef DEBUG
        printf("%d\n", arr[i]);
        #endif
    }
    printf("Sum: %d\n", sum);
}

int main() {
    int arr[] = {3, 4, 2, 5, 7, 1, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort_array(arr, size);
    return 0;
}