#include <stdio.h>

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int index_product_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i] * i;
    return sum;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
}

int main() {
    int arr[] =  {1, 7, 3, 4, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before sort:\n");
    print_array(arr, size);
    bubble_sort(arr, size);
    printf("\nAfter sort:\n");
    print_array(arr, size);
    printf("\n");
    printf("%d\n", index_product_sum(arr, size));
    return 0;
}