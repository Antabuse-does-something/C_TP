#include <omp.h>
unsigned long divisor_sum(unsigned long n){
    unsigned long res = 1;
    if (n %2 == 0)
    {
        res +=2;
    }
    
    #pragma omp parallel for reduction(+:res)
    for (unsigned long i = 3; i <= n; i+=2)
    {
        if (n % i == 0){
            res += i;
        }
    }
    
    return res;
    
}