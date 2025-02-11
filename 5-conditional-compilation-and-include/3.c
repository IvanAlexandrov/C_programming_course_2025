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

void selection_sort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int min = arr[i];
        int index = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < min) {
                min = arr[j];
                index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        int current_number = arr[i];

        int j = i - 1;
        
        while (j >= 0 && arr[j] > current_number) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = current_number;
    }
}

void invert(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[] = {4, 6, 2, 7, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    #ifdef _WIN32
    bubble_sort(arr, size);
    #elif defined __linux__
    selection_sort(arr, size);
    #elif defined __APPLE__
    insertion_sort(arr, size);
    #else
    invert(arr, size);
    #endif

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}