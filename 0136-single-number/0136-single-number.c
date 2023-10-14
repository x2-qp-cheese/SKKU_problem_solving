int singleNumber(int* nums, int numsSize){
    // xor  -> 다 같으면 0
    // xor -> 다르면
    int res = 0;
    
    
    for(int i = 0; i < numsSize; i++)
        res ^= nums[i];
    
    return res;
}