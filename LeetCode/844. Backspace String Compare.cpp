class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int s= S.size();
        string ans="";
        for(int i=0;i<s;i++){
            if(S[i]=='#' && ans.size()!=0)
                ans.pop_back();
            else if(S[i]!='#')
                ans.push_back(S[i]);
        }
        S=ans;
        ans="";
        s=T.size();
        for(int i=0;i<s;i++){
            if(T[i]=='#' && ans.size()!=0)
                ans.pop_back();
            else if(T[i]!='#')
                ans.push_back(T[i]);
        }
        return ans==S;
    }
};