#include <stdio.h>

int is_prime(int a) {
    if (a < 2) return 0;
    for (int i = 2; i < a / 2; i++) {
        if (a % i == 0) return 0;
    }
    return 1;
}

int common_denominator(int a, int b) {
    int i = 1;
    while (1) {
        if ((i % a == 0) && (i % b == 0)) {
            return i;
        }
        i++;
    }
}

int main() {
    int a = 12;
    int b = 18;
    printf("Result: %d\n", common_denominator(a, b));
    return 0;
}