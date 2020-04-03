class Solution {
public:
    int divide(long dividend, long divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int sign=1;
        if(dividend<0){
            sign*=-1;
            dividend*=-1;
        }
        if(divisor<0){
            sign*=-1;
            divisor*=-1;
        }
        return (sign)*(dividend/divisor);       
    }
};