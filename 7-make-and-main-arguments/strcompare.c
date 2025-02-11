#include <stdio.h>
#include "mystrings.h"

int main() {
    char arr_1[50];
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

    printf("Result: %d\n", strcompare(arr_1, arr_2));

    return 0;
}