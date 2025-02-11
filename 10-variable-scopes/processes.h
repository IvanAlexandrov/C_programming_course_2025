#ifndef PROCESSES_H_
#define PROCESSES_H_

typedef struct Process_struct {
    int id;
    char name[30];
} Process;

extern Process processes[5];
extern int processescount;

static int nextprocessid();

int createnewprocess(char name[]);
void stopprocess(int id);

#endif