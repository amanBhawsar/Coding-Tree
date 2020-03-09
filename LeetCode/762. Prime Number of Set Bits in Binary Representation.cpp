class Solution {
public:
    bool isPrime(int n){
        if(n<=1)
            return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
                return false;
        }
        return true;
    }
    
    int countPrimeSetBits(int L, int R) {
        int c=0,k;
        for(int i=L;i<=R;i++){
            if(isPrime(__builtin_popcount(i)))
                c++;
        }
        return c;
    }
};