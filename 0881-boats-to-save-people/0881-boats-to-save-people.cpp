class Solution {
public:
    int numRescueBoats(vector<int>& arr, int lim) {
        sort(arr.begin(), arr.end());
        int count=0;
        int n = arr.size();
        int i=0;
        int j =n-1;
        while(i<=j){
            if(arr[i]+arr[j]>lim){
                j--;
                count++;
            }
            else{
                i++;
                j--;
                count++;
            }
               
        } 
        return count;
    }
};