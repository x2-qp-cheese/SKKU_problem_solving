int trailingZeroes(int n){
    if(n < 4)
        return 0;
    return n/5 + trailingZeroes(n/5);
    
}