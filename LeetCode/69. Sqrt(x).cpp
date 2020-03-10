class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;
        int f=0;
        long long m,l=1,r=x;
        while(l<r){
            m=l+(r-l)/2;
            if(m*m == x){
                return m;
            }else if(m*m > x){
                r=m;
            }else{
                l=m;
            }
            if(f==1){
                break;
            }
            if(l+1>=r){
                f=1;
            }
        }
        return l;
    }
};