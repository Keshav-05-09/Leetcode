class Solution {
public:
    int searchInsert(vector<int>& arr, int tar) {
        int low = 0  , high = arr.size()-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>tar){
                high = mid - 1;
            }
            else if(arr[mid]<tar){
                low = mid + 1;
            }
            else if(arr[mid]==tar){
                return mid;
            }

        }
        return low;
    }
};