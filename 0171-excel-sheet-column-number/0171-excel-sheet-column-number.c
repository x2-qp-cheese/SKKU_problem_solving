int titleToNumber(char * columnTitle){
    long long int check = 1;
    long long int res = 0;
    for(int i = strlen(columnTitle)-1; i>=0; i--){
            res += check * ( columnTitle[i]-64 );
            check*=26;
    }
    return res;
}