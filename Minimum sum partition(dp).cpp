#include<bits/stdc++.h>
using namespace std;

int findMinDiff(int arr[],int n,int sum){
    bool dp[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        dp[i][0]=true;
    }
    for(int i=1;i<sum+1;i++){
        dp[0][i]=false;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            dp[i][j] = dp[i-1][j];
            if(arr[i-1]<=j){
                dp[i][j] |= dp[i-1][j-arr[i-1]];
            }
        }
    }
    int res;
    for(int i=sum/2;i>=0;i--){
        if(dp[n][i]==true){
            res=sum-2*i;
            break;
        }
    }
    return res;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0;
	    cin>>n;
	    int arr[60];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        sum+=arr[i];
	    }
	    cout << findMinDiff(arr,n,sum) << endl;
	    
	}
	return 0;
}