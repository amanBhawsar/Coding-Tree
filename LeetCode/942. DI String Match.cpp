class Solution {
public:
    vector<int> diStringMatch(string S) {
        int n=S.size(),k=0,rk=n;
        vector<int> ans(n+1,0);
        for(int i=0;i<n;i++){
            if(S[i]=='I')
                ans[i]=k++;
            else{
                ans[i]=rk--;
            }
        }
        ans[n]=k++;
        return ans;
    }
};