unsigned long power_of_two(unsigned char n){
    unsigned long res = 1;
    for (unsigned char i = 0; i < n; i++)
    {
        res *=2;
    }
    return res;
    
}