int maxSubArray(int* nums, int numsSize){
    int max = 0;
    int res = INT_MIN; 

    for(int i = 0; i < numsSize; i++){
        if(max > 0)
            max += nums[i];
        else
            max = nums[i];
        
        if(max > res){
            res = max;
        }

    }
    return res;
}