int removeDuplicates(int* nums, int numsSize){
    int tmp;
    int j = 1;
    int cmp = nums[0];
    for(int i = 0; i < numsSize; i++){
        if(cmp < nums[i]){
            cmp = nums[i];
            tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            j++;
        }
        
        
    }
    return j;
}