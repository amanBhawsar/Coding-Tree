class Solution {
public:
    int reverse(int x) {
        long int X=x;
        long int ans=0;
        int neg=0;
        while(X){
            ans = ans*10 + X%10;
            X=X/10;
        }
        if(ans>=INT_MIN && ans<=INT_MAX){
            return ans;
        }
        return 0;
    }
};