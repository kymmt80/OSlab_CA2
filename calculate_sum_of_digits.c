#include "types.h"
#include "user.h"


int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        printf(2, "Please enter a number \n");
        exit();
    }
    else
    {
        int register_value, number = atoi(argv[1]);

        __asm__("movl %%edx, %0" : "=r" (register_value));  //register value = edx
        __asm__("movl %0, %%edx" : : "r"(number));          //edx = number

        printf(1, "sum of digits %d is: %d \n" , number, calculate_sum_of_digits());
        
        __asm__("movl %0, %%edx" :  : "r"(register_value)); //edx = register value 

        exit();
    }
}

