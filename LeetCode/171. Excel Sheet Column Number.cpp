class Solution {
public:
    int titleToNumber(string s) {
        long long int z=1,ans=0;
        for(int i=s.size()-1;i>=0;i--){
            ans+=(s[i]-'A'+1)*z;
            z*=26;
        }
        return ans;
    }
};