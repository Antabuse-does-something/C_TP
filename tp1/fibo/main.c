#include <stdio.h>
#include "fibo.h"
int main(){
    for (unsigned long  i = 0; i < 91; i++)
    {
        printf("fibo(%ld) = %lu\n", i, fibo(i));
        if (i == 10)
        {
            i+= 71;
            printf("...\n");
        }
        
    }
    return 0;
    
}