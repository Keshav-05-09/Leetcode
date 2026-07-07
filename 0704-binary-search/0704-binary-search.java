class Solution {
    public int search(int[] arr, int t) {
    int n = arr.length;
    int low=0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==t){
            return mid;
        }
        else if (arr[mid]<t){
            low = mid+1;

        }
        else {
            high=mid-1;
        }
    }
    return -1;

    }
}