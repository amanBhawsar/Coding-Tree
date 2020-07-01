class Solution {
public:
    int numSquares(int n) {
        int sq;
        vector<int> dp(n+1,0);
        for(int j=1;j<=n;j++){
            sq=INT_MAX;
            for(int i=1;i*i<=j;i++){
                sq=min(sq,1+dp[j-i*i]);
            }
            dp[j]=sq;
        }
        return dp[n];
    }
};