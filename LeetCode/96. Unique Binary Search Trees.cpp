class Solution {
public:
    int numTrees(int n) {
        long long int ans =1;
        for(long long int i=n+1;i<=2*n;i++){
            ans = ans*i/(i-n);
        }
        return ans/(n+1);
    }
};