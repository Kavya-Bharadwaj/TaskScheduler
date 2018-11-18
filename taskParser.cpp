#include "Defines.h"
#include "taskParser.h"
#include <fstream>
#include <string.h>

using namespace std;

bool taskParser::getListfromFile(task *myTaskList)
{
    ifstream taskFile;
    std::vector<struct task*> taskList;
    taskFile.open("/home/kavya/Learn/scheduler/tasks.txt");
    if(taskFile.is_open())
    {
        std::string line;
        while(std::getline(taskFile,line))
        {
            if (!line.empty())
            {
                switch (line[0])
                {
                    case ComputeSum:
                        {
                            struct task* computeTask = parseComputeSumtask(line);
                            if (computeTask != NULL)
                            {
                                taskList.push_back(computeTask);
                            }
                        }
                        break;
                    case MatrixMultiply:
                        {
                            struct task* matrixTask = parseMatrixtask(line);
                            if (matrixTask != NULL)
                            {
                                taskList.push_back(matrixTask);
                            }
                        }

                        break; 
                    default:
                        printf("Oops I don't know how to perform this task yet!");
                        break;
                }
                printf("%s\n",line.c_str());
            }
        }
    }
    else
    {
        printf("Unable to read tasks file\n");
        return false;
    }
    return true;
}


bool taskParser::parseComputeSumtask(std::string line)
{

}

bool taskParser::parseMatrixtask(std::string line)
{

}

