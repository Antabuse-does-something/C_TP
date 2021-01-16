unsigned long fibo(unsigned long n){
    unsigned long f0 = 0;
    unsigned long f1 = 1;
    unsigned long f =0;
    if(n == 0){
        return 0;
    }
    for (unsigned long i = 1; i < n ; i++)
    {
        f0 = f1;
        f1 += f;
        f = f0;
    }
    return f1;
}