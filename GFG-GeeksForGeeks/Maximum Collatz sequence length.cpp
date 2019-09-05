#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int dp[5000001]={0};

int Collatz(int n){
    if(n==1){
        return 0;
    }
    if(dp[n]==0){
        int z;
        if(n%2==0){
            z= 1+Collatz(n/2);
        }else{
            int k= 3*n+1,c=0;
            while(k>5000001){
                if(k%2==0){
                    k=k/2;
                }else{
                    k=3*k+1;
                }
                c++;
            }
            z=1+c+Collatz(k);
        }
        dp[n]=z;
        return z;
    }else{
        return dp[n];
    }
    
}

int main() {
    int t;
    cin >> t;
    dp[1]=1;
    while(t--){
        int n;
        cin >> n;
        int res=0,resInd=0;
        for(int i=1;i<=n;i++){
            int k  = Collatz(i);
            if(res <= k){
                resInd=i;
                res=k;
            }
        }
        cout << res+1 << endl;
    }
    return 0;
}
