#include "types.h"
#include "user.h"

int main(int argc, char* argv[])
{
    int A,D,B;
    //char pids[3];
    A=fork();
    if(A!=0){
        D=fork();
        if(D!=0)
            printf(2,"Did=%d Aid=%d\n",D,A);
    }

    if(A==0){
        sleep(30);
        B=get_parent_pid();
        printf(1, "The parent of the A process is: %d \n", B);
        exit();
    }else if(D==0){
        set_process_parent(A);
        sleep(60);
        exit();
    }else{
        wait();
        wait();
        exit();    
    }
}