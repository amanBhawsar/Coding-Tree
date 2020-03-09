class Solution {
public:
    bool hasAlternatingBits(int n) {
        int set=n%2;
        n/=2;
        while(n){
            if(n%2 !=set){
                set = (set+1)%2;
            }else{
                return false;
            }
            n/=2;
        }
        return true;
    }
};