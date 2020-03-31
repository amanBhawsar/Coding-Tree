class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,n=prices.size(),z;
        for(int i=0;i<n-1;i++){
            z=prices[i+1]-prices[i];
            if(z>0){
                maxi+=z;
            }
        }
        return maxi;
    }
};