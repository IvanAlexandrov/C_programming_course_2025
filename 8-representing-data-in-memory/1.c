#include <stdio.h>
#include <limits.h>

#define PRINT(NAME, FORMAT, SIZE, MAX_SIGNED, MIN_SIGNED, FORMAT_UNSIGNED, MAX_UNSIGNED, BIG_VALUE_FORMAT) \
printf("%-25s", NAME); \
printf("%-25s", FORMAT); \
printf("%-25zu", SIZE); \
printf(BIG_VALUE_FORMAT, MAX_SIGNED); \
printf(BIG_VALUE_FORMAT, MIN_SIGNED); \
printf("%-25s", FORMAT_UNSIGNED); \
printf(BIG_VALUE_FORMAT, MAX_UNSIGNED); \
printf("\n"); \

int main() {
    // printf("%*s\n", 30, "Anna"); - 30 spaces Anna
    // printf("%%d"); - %3
    printf("%-25s %-25s %-25s %-25s %-25s %-25s %-25s\n", "NAME", "FORMAT", "SIZE", "MAX_SIGNED", "MIN_SIGNED", "FORMAT_UNSIGNED", "MAX_UNSIGNED");
    PRINT("INT", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX, "%-25u");
    PRINT("SHORT", "%hd", sizeof(short), SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX, "%-25hu");
    PRINT("LONG", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX, "%-25lu");
    PRINT("LONG LONG", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX, "%-25llu");


    printf("%u", UINT_MAX);
    return 0;
}