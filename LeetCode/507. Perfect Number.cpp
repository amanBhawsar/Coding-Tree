class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=0)
            return false;        
        int sum=0,n=sqrt(num);
        for(int i=1;i<=n;i++){
            if(num%i==0){
                sum+=i+num/i;
            }
        }
        sum-=num;
        if(n*n==num){
            sum-=n;
        }
        return (sum==num);
    }
};