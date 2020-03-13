class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxRange=0,maxVal=0;
        for(int i=prices.size()-1;i>=0;i--){
            maxVal=max(maxVal,prices[i]);
            maxRange=max(maxRange,maxVal-prices[i]);
        }
        return maxRange;
    }
};