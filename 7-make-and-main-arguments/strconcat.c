#include <stdio.h>
#include "mystrings.h"

int main() {
    char arr_1[100]; // 100 because we dont want to overflow when adding 2 50 char strings
    printf("Enter string 1: ");
    scanf("%s", arr_1);

    if (strlength(arr_1) > 50) {
        printf("Cannot enter a string bigger than 50 characters.\n");
        return 1;
    }

    char arr_2[50];
    printf("Enter string 2: ");
    scanf("%s", arr_2);

    if (strlength(arr_2) > 50) {
        printf("Cannot enter a string bigger than 50 characters.\n");
        return 1;
    }

    strconcat(arr_1, arr_2);

    printf("Result: %s\n", arr_1);
    return 0;
}