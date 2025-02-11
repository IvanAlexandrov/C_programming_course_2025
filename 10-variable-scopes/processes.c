#include "processes.h"
#include <limits.h>
#include <string.h>

int processescount = 0;
Process processes[5];

static int nextprocessid() {
    static int current_id = 0;
    if (processescount < INT_MAX) {
        return ++current_id;
    }
    return 0;
}

int createnewprocess(char entered_name[]) {
    if (processescount == 5) return 0;
    Process new_process;

    strcpy(new_process.name, entered_name);
    new_process.id = nextprocessid();
    processes[processescount++] = new_process;
    
    return new_process.id;
}

void stopprocess(int entered_id) {
    for (int i = 0; i < processescount; i++) {
        if (processes[i].id != entered_id) continue;

        Process temp = processes[i];
        processes[i] = processes[processescount - 1];
        processes[processescount - 1] = temp;

        processescount--;
        break;
    }
}