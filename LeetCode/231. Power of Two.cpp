class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n){
            if(n==1){
                return true;
            }
            if(n%2==0){
                n/=2;
            }else{
                return false;
            }
        }
        return false;
    }
};