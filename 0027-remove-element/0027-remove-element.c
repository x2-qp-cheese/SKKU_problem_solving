int removeElement(int* nums, int numsSize, int val){
    int tmp = 0;
    int j = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != val){
            tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            j++;
        }
    }
    return j;
    
}