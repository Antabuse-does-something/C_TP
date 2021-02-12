unsigned char digit_count(unsigned long n){
    unsigned char c = 0;
    while (n!=0)
    {
       c++;
       n/=10;
    }
    return c;
    
}