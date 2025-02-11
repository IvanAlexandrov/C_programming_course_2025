#include <stdio.h>
#include "transformation.h"

void print_transformation(Transformation t) {
    printf("\nError: %s\n", t.error);
    printf("Result: %d\n", t.result);
}

int main() {
    char num1[20] = "56";
    Transformation t1 = string_to_number(num1);
    print_transformation(t1);

    char num2[20] = "a56";
    Transformation t2 = string_to_number(num2);
    print_transformation(t2);

    char num3[20] = "-56";
    Transformation t3 = string_to_number(num3);
    print_transformation(t3);
}