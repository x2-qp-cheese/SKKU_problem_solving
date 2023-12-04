
int binarySearch(int* arr, int l, int r, int n){
    int ans = 0;
    while(l <= r){
        int mid = l + (r-l) / 2;
        if(arr[mid] >= n - mid)
        {
            ans = n-mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return ans;
}

int hIndex(int* citations, int citationsSize) {
    return binarySearch(citations, 0, citationsSize-1, citationsSize);
}