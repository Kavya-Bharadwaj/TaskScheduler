#ifndef __SCHEDULER_DEFINES__
#define __SCHEDULER_DEFINES__

#include <stdio.h>

enum TaskType
{
    ComputeSum = 0,
    MatrixMultiply = 1
};

struct task
{
    TaskType task;
    void* arg;
};

#endif
