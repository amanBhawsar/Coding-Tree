#include<bits/stdc++.h>
using namespace std;
int dp[30][30] = {0};
int maxSum(int arr[1000][1000],int n){
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
                continue;
            }
            dp[i][j]=arr[i-1][j-1]+max(dp[i-1][j],max(dp[i-1][j+1],dp[i-1][j-1]));
        }
    }
    int maxi = INT_MIN;
    for(int i=0;i<=n;i++){
        maxi=max(dp[n][i],maxi);
    }
    return maxi;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[1000][1000];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin >> arr[i][j];
	        }
	    }
	    cout << maxSum(arr,n) << endl;
	}
	return 0;
}