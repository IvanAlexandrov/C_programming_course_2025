#include <limits.h>
#include "safeint.h"

SafeResult safeadd(int x, int y) {
    SafeResult result;
    long long sum = (long long)x + (long long)y;
    if (sum > INT_MAX) {
        result.errorflag = 1;
    } else {
        result.errorflag = 0;
    }
    result.value = x + y;

    return result;
}

SafeResult safesubtract(int x, int y) {
    SafeResult result;
    long long sum = (long long)x - (long long)y;
    if (sum < INT_MIN) {
        result.errorflag = 1;
    } else {
        result.errorflag = 0;
    }
    result.value = x - y;

    return result;
}

SafeResult safemultiply(int x, int y) {
    SafeResult result;
    long long sum = (long long)x * (long long)y;
    if (sum > INT_MAX) {
        result.errorflag = 1;
    } else {
        result.errorflag = 0;
    }
    result.value = x * y;

    return result;
}

SafeResult safedivide(int x, int y) {
    SafeResult result;
    long long sum = (long long)x / (long long)y;
    if (sum < INT_MIN) {
        result.errorflag = 1;
    } else {
        result.errorflag = 0;
    }
    result.value = x / y;

    return result;
}

SafeResult safestrtoint(char input[20]) {
    SafeResult result;

    int k = 1;
    int starting_index = (input[0] == '-') ? 1 : 0;
    for (int i = starting_index; input[i] != '\0'; i++) {
        if (input[i] < '0' || input[i] > '9') {
            result.errorflag = 1;
            result.value = 0;
            break;
        }
        SafeResult answer;

        answer = safemultiply(result.value, k);
        if (answer.errorflag == 1) result.errorflag = 1;
        result.value = answer.value;

        answer = safeadd(result.value, input[i] - '0');
        if (answer.errorflag == 1) result.errorflag = 1;
        result.value = answer.value;

        k *= 10;
    }
    if (starting_index == 1) result.value *= -1;

    return result;
}
