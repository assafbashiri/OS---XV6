#include "kernel/types.h"
#include "user/user.h"
#include "kernel/fcntl.h"

int main(int argv, char** argc)
{
    int i = 5;
    i+=1;
    printf("%d\n", i);
    
    // }
    exit(0);

}