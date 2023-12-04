int binarySearch(int* arr, int l, int r, int target)
{
    int ans = 0;
    while(l <= r){
        int mid = l + (r-l) / 2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[l] <= arr[mid]){
            if(arr[l] <= target && target < arr[mid])
                r = mid-1;
            else l = mid+1;
        }
        else{
            if(arr[mid] < target && target <= arr[r])
                l = mid+1;
            else r = mid-1;
        }
    }
    return -1;
}

int search(int* nums, int numsSize, int target) {
    return binarySearch(nums, 0, numsSize-1, target);
}