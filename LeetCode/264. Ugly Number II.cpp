class Solution {
public:
    int nthUglyNumber(int n) {
        int ug[n];
        ug[0]=1;
        int i2=0,i3=0,i5=0;
        for(int i=1;i<n;i++){
            ug[i]=min(ug[i2]*2,min(ug[i3]*3,ug[i5]*5));
            if(ug[i]==ug[i2]*2){
                i2++;
            }
            if(ug[i]==ug[i3]*3){
                i3++;
            }
            if(ug[i]==ug[i5]*5){
                i5++;
            } 
        }
        return ug[n-1];
    }
};