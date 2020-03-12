class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1,f;
        while(i<j){
            f=0;
            if(!(('a'<=s[i] && s[i]<='z')||('A'<=s[i] && s[i]<='Z')||('0'<=s[i] && s[i]<='9')))
                i++;
            else
                f++;
            if(!(('a'<=s[j] && s[j]<='z')||('A'<=s[j] && s[j]<='Z')||('0'<=s[j] && s[j]<='9')))
                j--;
            else
                f++;
            if(f==2){
                if('A'<=s[j] && s[j]<='Z'){
                    s[j]=s[j]+32;
                }
                if('A'<=s[i] && s[i]<='Z'){
                    s[i]=s[i]+32;
                }
                if(s[i]==s[j]){
                    i++;j--;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};