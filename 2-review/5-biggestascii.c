#include <stdio.h>

char find_biggest_ascii_code(char arr[], int size) {
    char max = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int main() {
    char input[] = "Ivan";
    int size = sizeof(input) / sizeof(input[0]);
    printf("%c\n", find_biggest_ascii_code(input, size));
    return 0;
}