int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    // 해시 테이블을 초기화하고 최대 배열 크기를 계산합니다.
    int hashtable[1001] = {0};
    int maxsize = (nums1Size > nums2Size ? nums1Size : nums2Size);

    // 결과 배열을 할당하고 반환 크기를 초기화합니다.
    int* res = (int*)malloc(sizeof(int) * maxsize);
    *returnSize = 0;

    // nums1 배열을 해시 테이블에 저장합니다.
    for (int i = 0; i < nums1Size; i++) {
        hashtable[nums1[i]]++;
    }

    // nums2 배열을 순회하면서 중복된 요소를 찾아 결과 배열에 추가합니다.
    for (int j = 0; j < nums2Size; j++) {
        if (hashtable[nums2[j]] > 0) {
            res[(*returnSize)++] = nums2[j];
            hashtable[nums2[j]]--; // 중복 체크를 하지 않으므로 해시 테이블 값을 감소시키지 않아도 됩니다.
        }
    }

    return res;
}
