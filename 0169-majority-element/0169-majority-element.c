int majorityElement(int* nums, int numsSize){
    int max = nums[0];
    int count = 1;
    for(int i = 1; i < numsSize; i++){
        if(nums[i] == max)
            count++;
        else if(count == 0){
            max = nums[i];
            count++;
        }
        else 
            count--;
    }
    
    return max;
}