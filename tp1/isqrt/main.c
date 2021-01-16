#include <stdio.h>
#include "isqrt.h"

int main(){
    for (unsigned long  i = 0; i < 20000000; i+=8)
    {
        printf("isqrt(%lu) = %lu\n",i,isqrt(i));
    }
    return 0;
}
