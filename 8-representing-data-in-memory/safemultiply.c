#include <stdio.h>
#include <limits.h>
#include "safeint.h"
#include "util.h"

int main() {
    int x, y;
    long long x_check, y_check;

    printf("MULTIPLICATION\n");
    printf("Enter first parameter: ");
    scanf("%lld", &x_check);

    if (x_check < INT_MIN || x_check > INT_MAX) {
        error_size();
    } else {
        x = x_check;
    }
    
    printf("Enter second parameter: ");
    scanf("%lld", &y_check);

    if (y_check < INT_MIN || y_check > INT_MAX) {
        error_size();
    } else {
        y = y_check;
    }

    SafeResult result;
    result = safemultiply(x, y);

    if (result.errorflag == 1) error_flow();

    printf("Result: %d\n", result.value);
    return 0;
}