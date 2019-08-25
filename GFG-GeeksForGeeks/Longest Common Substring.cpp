#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int m,n,ans=0;
	    cin>> m >> n;
	    string a,b;
	    cin >> a >> b;
	    int arr[m+1][n+1];
	    for(int i=0;i<=m;i++){
	        for(int j=0;j<=n;j++){
	            if(i==0 || j==0){
	                arr[i][j]=0;
	            }else if(a[i-1]==b[j-1]){
	                arr[i][j] = arr[i-1][j-1]+1;
	                ans=max(ans,arr[i][j]);
	            }else{
	                arr[i][j]=0;
	            }
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}