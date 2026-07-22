class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best=0,bestbuy=prices[0];
        for(int i =1;i<prices.size();i++){
            if(best<prices[i]){
                best = max(best,prices[i]-bestbuy);

            }
            bestbuy=min(bestbuy,prices[i]);

        }
        return best;
    }
};