#include <stdio.h>

#define BITS sizeof(lights) * 8

void printState(unsigned char lights) {
    for (int i = BITS - 1; i >= 0; i--) {
        printf("%lu ", ((lights >> i) & 1));
    }
    printf("\n");
}

unsigned char switchLight(unsigned char lights) {
    int light;
    printf("Enter light: ");
    scanf("%d", &light);

    lights ^= 1 << (BITS - light);

    printState(lights);
    return lights;
}

void printTurnedLights(unsigned char lights) {
    for (int i = BITS - 1; i >= 0; i--) {
        if ((lights >> i) & 1) printf("Lamp is on in room %d\n", BITS - i);
    }
}

int main() {
    unsigned char lights = 0;

    int exit = 0;
    while (!exit) {
        int input;
        printf("Option 1: Switch lights\n");
        printf("Option 2: Print current state\n");
        printf("Option 3: Exit\n");
        printf(">");
        scanf("%d", &input);

        switch (input) {
            case 1:
                lights = switchLight(lights);
                break;
            case 2:
                printTurnedLights(lights);
                break;
            case 3:
                exit = 1;
                break;
            default:
                printf("Invalid input.\n");
                break;
        }
    }
    return 0;
}