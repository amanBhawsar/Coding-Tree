class Solution {
public:
    int maxPower(string s) {
        int p=1,maxi=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                p++;
            }else{
                maxi=max(p,maxi);
                p=1;
            }
        }
        maxi=max(p,maxi);
        return maxi;
    }
};