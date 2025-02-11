#ifndef SAFEINT_H_
#define SAFEINT_H_

typedef struct SafeResult_struct {
    int value;
    int errorflag;
} SafeResult;

SafeResult safeadd(int x, int y);
SafeResult safesubtract(int x, int y);
SafeResult safemultiply(int x, int y);
SafeResult safedivide(int x, int y);
SafeResult safestrtoint(char input[20]);

#endif