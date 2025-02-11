#include <stdio.h>
#include <string.h>
#include "transformation.h"

Transformation string_to_number(char input[20]) {
    Transformation response;
    response.result = 0;
    int k = 1;

    strcpy(response.error, "\n");

    int starting_index = (input[0] == '-') ? 1 : 0;
    for (int i = starting_index; input[i] != '\0'; i++) {
        if (input[i] < '0' || input[i] > '9') {
            strcpy(response.error, "Invalid input string.\n");
            response.result = 0;
            break;
        }
        response.result *= k;
        response.result += input[i] - '0';
        k *= 10;
    }
    if (starting_index == 1) response.result *= -1;
    return response;
}
