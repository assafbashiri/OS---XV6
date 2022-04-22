#include "kernel/types.h"
#include "user/user.h"
#include "kernel/fcntl.h"

int main(int argv, char** argc)
{
    // int pid;
    //int p;
    //fprintf(2, "we stopped process number %d\n", p);
    printf("in test befor sys\n");
    //kill_system();
    printf("in test after sys\n");

    while(1)
    {
        
    }
    // pid = fork();
    // if (pid != 0)
    // {
    //     int status;
    //     wait(&status);
    //     fprintf(2, "child %d is finished\n", pid);

    // }
    // else
    // {
    //     fprintf(2, "child running\n", pid);
    //     fprintf(2, "finished\n");
    // }
    exit(0);

}