#include <iostream>
#include <pthread.h>
#include "Defines.h"
#include "taskParser.h"

using namespace std;
static const int num_workerThreads = 4;


int main()
{
    struct task *myTaskList = NULL;
    taskParser parser;
    parser.getListfromFile(myTaskList);	
}
