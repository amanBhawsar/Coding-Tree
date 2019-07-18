#include<bits/stdc++.h>
using namespace std;
long possWay(long dp[],int n){
    if(dp[n]==0){
        if(n<=1){
            dp[n]=1;
        }else{
            dp[n]=possWay(dp,n-1)+possWay(dp,n-2);
        }
    }
    return dp[n];
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long dp[91]={0};
	    cout << possWay(dp,n) << endl;
	}
	return 0;
}