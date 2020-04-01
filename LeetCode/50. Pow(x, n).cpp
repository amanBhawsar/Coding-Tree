class Solution {
public:
    double myPow(double x, long int n) {
        if(n==0)
            return 1;
        if(n<0)
            return myPow(1/x,-n);
        double k = myPow(x,n/2);
        if(n%2==0){
            return k*k;            
        }
        return (k*k*x);        
    }
};