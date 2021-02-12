#include <stdio.h>
#include "divisor_sum.h"
#include <stdlib.h>
#include <err.h>
int main(int argc, char** argv){
    unsigned long param = strtoul(argv[1],NULL, 10);
    if (argc != 2)
    {
        errx(1, "Error");
    }
    if (param == 0)
    {
        errx(1, "Error");
    }
    printf("divisor_sum(%lu) = %lu", param, divisor_sum(param));
    return 0; 
}