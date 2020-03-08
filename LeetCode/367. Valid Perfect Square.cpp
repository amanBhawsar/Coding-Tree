class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0)
            return false;
        long long int m,l=0,r=num;
        while(l<=r){
            m=l+(r-l)/2;
            if(m*m == num){
                return true;
            }else if(m*m > num){
                r=m-1;
            }else{
                l=m+1;
            }
        }
        return false;
    }
};