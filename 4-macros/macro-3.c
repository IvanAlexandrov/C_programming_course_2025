#include <stdio.h>

#define DEBUG(X) printf("Variable '%s': %d, File: %s, Line: %d\n", #X, X, __FILE__, __LINE__);

int main() {
    int age = 3;
    DEBUG(age)
    return 0;
}