#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n],inc[n],dec[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    inc[0]=1;
	    dec[0]=1;
	    for(int i=1;i<n;i++){
	        if(arr[i]>arr[i-1]){
	            inc[i]=dec[i-1]+1;
	            dec[i]=dec[i-1];
	        }else if(arr[i]<arr[i-1]){
	            dec[i]=inc[i-1]+1;
	            inc[i]=inc[i-1];
	        }else{
	            inc[i]=inc[i-1];
	            dec[i]=dec[i-1];
	        }
	    }
	    cout << max(inc[n-1],dec[n-1]) << endl;
	}
	return 0;
}