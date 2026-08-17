class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int i = 0, j = n - 1;
        int max = 0;
        while(i<j){
            int h = (min(arr[i],arr[j]))*(j-i);
            if(max<h){
                max=h;
            }
            if(arr[i]<arr[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return max;
    }
};