#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,count,ans=0;
	    cin>>n;
	    long long arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    for(int i=0;i<32;i++){
	        count=0;
	        for(int j=0;j<n;j++){
	            if(arr[j] & (1<<i)){
	                count++;
	            }
	        }
	        ans+=count*(n-count)*2;
	        ans=ans%1000000007;
	    }
	    cout << ans << endl;
	}
	return 0;
}