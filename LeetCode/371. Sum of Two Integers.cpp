class Solution {
public:
    int getSum(int a, int b) {
        if(a>b){
            swap(a,b);
        }
        int sign=0;
        if(a<0 && b<0){
            sign=1;
            a=-a;
            b=-b;
        }else if(a<0){
            swap(a,b);
        }
        while(a--){
            b++;
        }
        return (sign?-b:b);
    }
};