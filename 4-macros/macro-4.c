#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)() { \
    printf("hello\n"); \
} \

DEFINE_COMMAND(quit, external);
DEFINE_COMMAND(start, internal);

int main() {
    external_quit_command();
    internal_start_command();
    return 0;
}