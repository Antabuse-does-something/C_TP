unsigned long facto(unsigned long n){
    unsigned long res = 1;
    while (n > 0)
    {
        res *=n;
        n--;
    }
    return res;
}