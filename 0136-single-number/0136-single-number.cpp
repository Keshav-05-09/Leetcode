class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        int a = nums.size();
        for(int i = 0; i<a; i++ ){
            x ^=nums[i];
        }
        return x;
    }
};