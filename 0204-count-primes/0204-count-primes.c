#include <stdio.h>

int countPrimes(int n) {
    if (n <= 1) {
        return 0;
    }
    
    int chk[n + 1];
    int count = 0;
    
    for (int i = 2; i <= n; i++) {
        chk[i] = i;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (!chk[i]) {
            continue;
        }
        for (int j = i * i; j <= n; j += i) {
            chk[j] = 0;
        }
    }
    
    for (int i = 2; i < n; i++) {
        if (chk[i]) {
            count++;
        }
    }
    
    return count;
}

