class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0)
            return true;
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                break;
            }
            i++;
            j--;
        }
        if(i>=j)
            return true;
        return false;
            
    }
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                break;
            }
            i++;
            j--;
        }
        if(i>=j)
            return true;
        return (isPalindrome(s.substr(i,j-i)) || isPalindrome(s.substr(i+1,j-i)));
    }
};