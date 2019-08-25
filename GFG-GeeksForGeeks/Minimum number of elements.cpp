#include<bits/stdc++.h>
using namespace std;
int dp[102][102][102];
int arr[102];

int countMini(int n,int dec,int inc,int index){
    if(dp[dec][inc][index]!=-1){
        return  dp[dec][inc][index];
    }
    if(index==n){
        return 0;
    }
    if(arr[index]<arr[dec]){
        dp[dec][inc][index]=countMini(n,index,inc,index+1);
    }
    if(arr[index]>arr[inc]){
        if(dp[dec][inc][index]==-1){
            dp[dec][inc][index]=countMini(n,dec,index,index+1);
        }else{
            dp[dec][inc][index]=min(countMini(n,dec,index,index+1),dp[dec][inc][index]);
        }
    }
    if(dp[dec][inc][index]==-1){
        dp[dec][inc][index]=1+countMini(n,dec,inc,index+1);
    }else{
        dp[dec][inc][index]=min(1+countMini(n,dec,inc,index+1),dp[dec][inc][index]);
    }
    return dp[dec][inc][index];
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    arr[100]=INT_MAX;
	    arr[101]=INT_MIN;
	    memset(dp,-1,sizeof(dp));
	    cout << countMini(n,100,101,0) << endl;
	}
	return 0;
}