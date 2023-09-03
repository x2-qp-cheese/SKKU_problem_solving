int countPrimes(int n){
    int count = 0;
    int arr[n+1];

    for(int i = 2; i<=n; i++)
        arr[i] = 1;
    
    for(int i = 2; i*i <=n; i++){
        if(arr[i] == 0)
            continue;
        for(int j = i*i; j <= n; j+=i){
            arr[j] = 0;
        }
    }

    for(int i = 2; i < n; i++)
        if(arr[i] == 1)
            count++;

    return count;
}