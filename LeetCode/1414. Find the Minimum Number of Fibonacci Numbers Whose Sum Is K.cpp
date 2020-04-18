class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<long> fib;
        fib.push_back(0);
        fib.push_back(1);
        fib.push_back(1);
        long i=3,fibn;
        while(1){
            fibn=fib[i-1]+fib[i-2];
            if(fibn>k){
                break;
            }
            fib.push_back(fibn);
            i++;
        }
        long ans=0;
        i=fib.size()-1;
        while(k>0){
            ans+=k/fib[i];
            k%=fib[i];
            i--;
        }
        return ans;
    }
};