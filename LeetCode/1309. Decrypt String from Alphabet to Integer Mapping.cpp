class Solution {
public:
    string freqAlphabets(string s) {
        int n=s.size(),i=0;
        string ans="";
        while(i<s.size()){
            if(i+2<s.size() && s[i+2]=='#'){
                ans+=(('a'+((s[i]-'0')*10+(s[i+1]-'0'))))-1;
                // cout << ans << " ";
                i+=3;
            }else{
                ans+=('a'+(s[i]-'0'))-1;
                // cout << ans << " ";
                i++;
            }
        }
        return ans;
    }
};