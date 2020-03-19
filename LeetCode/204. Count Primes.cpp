class Solution {
public:
    int countPrimes(int n) {
        bool prime[n+1];
        memset(prime,true,sizeof(prime));
        int sq = sqrt(n);
        for(int p=2;p<=sq;p++){
            if(prime[p]){
                for(int i=p*p;i<=n;i+=p)
                    prime[i]=false;
            }
        }
        int c=0;
        for(int p=2;p<n;p++)
            if(prime[p])
                c++;
        return c;
    }
};