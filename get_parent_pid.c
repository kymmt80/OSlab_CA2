#include "types.h"
#include "user.h"

int main(int argc, char* argv[])
{

    int parent_pid =  get_parent_pid();
    printf(1, "The parent of the process is: %d \n", parent_pid);

    exit();
    
}