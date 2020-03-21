class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int ug[n];
        ug[0]=1;
        int ip[primes.size()];
        for(int i=0;i<primes.size();i++)
            ip[i]=0;
        for(int i=1;i<n;i++){
            ug[i]=ug[ip[0]]*primes[0];
            for(int j=1;j<primes.size();j++){
                
                ug[i]=min(ug[ip[j]]*primes[j],ug[i]);
            }
            for(int j=0;j<primes.size();j++)
                if(ug[i]==ug[ip[j]]*primes[j]){
                    ip[j]++;
                }
        }
        return ug[n-1];
    }
};