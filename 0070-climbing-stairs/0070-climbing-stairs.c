int climbStairs(int n){
    int* arr = (int*)malloc(sizeof(int)*n);
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else{
        arr[0] = 1;
        arr[1] = 2;
        for(int i = 0; i < n-2; i++)
            arr[i+2] = arr[i] + arr[i+1];
    }
    return arr[n-1];
}