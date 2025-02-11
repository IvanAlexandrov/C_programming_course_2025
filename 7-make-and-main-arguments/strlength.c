#include <stdio.h>
#include "mystrings.h"

int main() {
    char arr[50];
    printf("Enter string: ");
    scanf("%s", arr);

    if (strlength(arr) > 50) {
        printf("Cannot enter a string bigger than 50 characters.\n");
        return 1;
    }

    printf("Length: %d\n", strlength(arr));
    return 0;
}