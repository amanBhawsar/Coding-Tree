class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int rev=0,n=x;
        while(n){
            rev = 10*rev + n%10;
            n=n/10;
        }
        if(rev==x){
            return true;
        }
        return false;
    }
};