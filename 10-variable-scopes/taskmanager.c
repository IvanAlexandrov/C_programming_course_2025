#include <stdio.h>
#include <string.h>
#include "processes.h"

int main() {

    int end = 0;
    while (!end) {
        int input = 0;
        printf("Option 1: Create process\n");
        printf("Option 2: List current processes\n");
        printf("Option 3: Stop process\n");
        printf("Option 4: Exit\n");
        scanf("%d", &input);
        getc(stdin);

        switch (input) {
            case 1:
                char name[30];
                printf("Enter name: ");
                fgets(name, 30, stdin);
                name[strlen(name) - 1] = '\0';
                
                if (!createnewprocess(name)) printf("No space left for new process\n");
                break;
            case 2:
                for (int i = 0; i < processescount; i++) {
                    printf("Process (%d) %s\n", processes[i].id, processes[i].name);
                }
                break;
            case 3:
                int chosen_id;
                printf("Enter id: ");
                scanf("%d", &chosen_id);
                stopprocess(chosen_id);
                break;
            case 4:
                end = 1;
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    }
    return 0;
}