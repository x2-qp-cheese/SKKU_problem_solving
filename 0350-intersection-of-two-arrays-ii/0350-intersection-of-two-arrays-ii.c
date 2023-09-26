int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int* res;
    if(nums2Size > nums1Size)
        res = (int*)malloc(sizeof(int)*(nums2Size));
    else
        res = (int*)malloc(sizeof(int)*(nums1Size));
                           
    *returnSize = 0;
    
    for(int i = 0; i < nums1Size; i++){
        for(int j = 0; j < nums2Size; j++){
            if(nums1[i] == nums2[j]){
                res[(*returnSize)++] = nums1[i];
                nums2[j] = -1;
                break;
            }
        }
    }
    
    
    return res;
}
