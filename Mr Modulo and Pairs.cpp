#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int main()
 {
	int t;
	cin >> t;
	while(t--){
	    int n,k,ans=0;
	    cin>>n>>k;
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(i!=j && arr[i]%arr[j]==k){
	                ans++;
	            }
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}
