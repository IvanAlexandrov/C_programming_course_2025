#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {1, 2, 5, 7, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    printf("%d\n", binary_search(arr, size, target));
    return 0;
}