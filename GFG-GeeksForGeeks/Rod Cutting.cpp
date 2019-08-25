#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=1;i<=n;i++){
	        cin >> arr[i];
	    }
	    int dp[n+1];
	    memset(dp,0,sizeof(dp));
	    for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                dp[i]=max(dp[i],arr[j]+dp[i-j]);
            }	        
	    }
	    cout << dp[n]<< endl;
	}
	return 0;
}