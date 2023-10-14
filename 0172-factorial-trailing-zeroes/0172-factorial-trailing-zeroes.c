int trailingZeroes(int n){
//0의 개수
//5의 개수만 확인하면 끝
    int count = 0;
    int tmp;
    if(n == 0)
        return count;
    while(n){
        tmp = n;
        while(tmp % 5 == 0){
            count++; 
            tmp/=5;
        }
        n--;
    }
    return count;   
}