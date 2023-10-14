void moveZeroes(int* nums, int numsSize){
    
    int* res = (int*) malloc (sizeof(int) * numsSize);
    int k = 0;
    int j = numsSize-1;
    
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == 0)
            res[j--] = 0;
        else
            res[k++] = nums[i];
    }
    
    for(int i = 0; i< numsSize; i++){
        nums[i] = res[i];
    }
    
}
