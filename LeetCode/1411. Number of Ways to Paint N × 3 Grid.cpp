class Solution {
public:
    int numOfWays(int n) {
        long int c3=6,c2=6,ans=0;
        for (int i = 2; i <= n; i++){
            ans = c3; 
            c3=(2*c3+2*c2)%1000000007;
            c2=(2*ans+3*c2)%1000000007; 
        } 

        ans=(c3+c2)%1000000007; 

        return ans;
        }
};