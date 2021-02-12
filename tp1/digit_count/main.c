#include <stdio.h>
#include "digit_count.h"
#include "power_of_two.h"
int main() {
    
    for (unsigned long i = 0; i < 64; i ++)
    {
        if(i == 0){
            printf("digit_count(%lu) = %u\n",i, digit_count(i));
        }
        else
        {
            printf("digit_count(%lu) = %u\n", power_of_two(i), digit_count(power_of_two(i)));
        }
    }
    
    return 0;
}