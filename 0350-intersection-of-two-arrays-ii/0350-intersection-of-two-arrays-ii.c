int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int map[1001] = {0};
    int maxsize = (nums1Size > nums2Size ? nums1Size : nums2Size);

    int* res = (int*)malloc(sizeof(int) * maxsize);
    *returnSize = 0;

    for (int i = 0; i < nums1Size; i++) {
        map[nums1[i]]++;
    }
    
    for (int j = 0; j < nums2Size; j++) {
        if (map[nums2[j]] > 0) {
            res[(*returnSize)++] = nums2[j];
            map[nums2[j]]--;
        }
    }
    return res;
}
