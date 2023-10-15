int strStr(char * haystack, char * needle){
    int check = 1;
    
    
    for(int i = 0; i < strlen(haystack); i++){
        check = 0;
        if(haystack[i] == needle[0]){
            for(int j = 0; j < strlen(needle); j++){
                if(needle[j] != haystack[i+j]){
                    check = 0;
                    break;
                }
                else
                    check = 1;
            }
        }
        if(check){
            return i;
        }
    }    
    return -1;
}