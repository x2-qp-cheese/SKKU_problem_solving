int trailingZeroes(int n){
    long long int tmp = 1;
    int count = 0;
    
    for(int i = n; i >= 1; i--){
        if(i%2 == 0 || i%5 == 0)
            tmp*=i;
        while(tmp%10 == 0){
            count++;
            tmp/=10;
        }
        tmp%=10000;
    }
    return count;
}