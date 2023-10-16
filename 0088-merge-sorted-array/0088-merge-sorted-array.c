void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int j = m+n-1;
    int tmp;
    if(m == 0){
        for(int i=0; i<n; i++){
            nums1[i] = nums2[i];
        }
    }
    else{
        while(n>0 && m>0){
            printf("%d", j);
            //비교
            printf("%d %d\n", n, m);
            if(nums1[m-1] >= nums2[n-1]){
                nums1[j] = nums1[m-1];
                m--;
                j--;
            }
            else{
                nums1[j] = nums2[n-1];
                n--;
                j--;
            }
            printf("%d %d\n", n, m );
        }
        if(n){
            for(; n>0; n--){
                nums1[j] = nums2[n-1];
                j--;
            }
        }

    }
}