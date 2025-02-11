#include <stdio.h>

int digits_product(int n) {
    int product = 1;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

int main() {
    int n = 417;
    printf("%d\n", digits_product(n));
    return 0;
}