class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int i =0 ; i <= n-1 ; i++){
            sum+=arr[i];
        }
        int ts = ((n)*(n+1))/2;
        return ts-sum;
    }
};