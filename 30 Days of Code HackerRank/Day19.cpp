class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        
        int sum=0;
        for(int i=1;i*i<=n;i++){
            if(i*i==n){
                sum+=i;
                continue;
            }
            if(n%i==0){
                sum+=n/i + i;
            }
        }
        return sum;
    }
};