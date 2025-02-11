#include "mystrings.h"

int strlength(char arr[]) {
    int length = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        length++;
    }
    return length;
}

void strconcat(char arr_1[], char arr_2[]) {
    int i = strlength(arr_1);
    int j = 0;
    while (arr_2[j] != '\0') {
        arr_1[i] = arr_2[j];
        i++;
        j++;
    }
    arr_1[i] = '\0';
}

int strcompare(char arr_1[], char arr_2[]) {
    int sum = 0;
    for (int i = 0; arr_1[i] != '\0'; i++) {
        sum += arr_1[i];
    }
    for (int j = 0; arr_2[j] != '\0'; j++) {
        sum -= arr_2[j];
    }
    if (sum > 0) {
        return 1;
    } else if (sum < 0) {
        return -1;
    } else {
        return 0;
    }
}