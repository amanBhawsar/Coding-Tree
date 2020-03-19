class Solution {
public:
    bool isUgly(int num) {
        int f;
        if(num<=0)
            return false;
        while(num!=1){
            f=0;
            if(num%2==0){
                num/=2;
                f=1;
            }
            if(num%3==0){
                num/=3;
                f=1;
            }
            if(num%5==0){
                num/=5;
                f=1;
            }
            if(f==0)
                return false;
        }
        return true;
    }
};