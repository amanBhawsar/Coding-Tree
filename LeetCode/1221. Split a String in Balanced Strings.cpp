class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0,c=0,n=s.size();
        if(s[0]=='L'){
            c++;
        }else{
            c--;
        }
        for(int i=1;i<n;i++){
            if(s[i]=='L'){
                c++;
            }else{
                c--;
            }
            if(c==0)
                ans++;
        }
        return ans;
    }
};