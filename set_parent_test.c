#include "types.h"
#include "user.h"

int main(int argc, char* argv[])
{
    int A,D,B;
    A=fork();
    D=fork();
    write(0,B,sizeof(B));
    if(A==0){
        sys_sleep();
        B=get_parent_pid();
        write(0,B,sizeof(B));
    }else if(D==0){
        set_prosses_parent(A);
    } 
}