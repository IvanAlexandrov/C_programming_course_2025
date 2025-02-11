#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int prime_arr_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) if(is_prime(arr[i])) sum += arr[i];
    return sum;
}

int main() {
    int arr[] = {1, 7, 10, 15, 16, 13, 23, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", prime_arr_sum(arr, size));
    return 0;
}