#include <stdio.h>
#include <math.h>

void transform_array(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = pow(arr[i], 4);
    }
}

int main() {
    long arr[] = {1, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    transform_array(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%ld ", arr[i]);
    }

    return 0;
}