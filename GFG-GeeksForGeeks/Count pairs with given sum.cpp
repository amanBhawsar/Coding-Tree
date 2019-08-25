#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,sum,temp,count=0;
	    cin>>n>>sum;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    for(int i=0;i<n;i++){
    	    for(int j=i+1;j<n;j++){
    	        if(arr[i]+arr[j]==sum){
    	            count++;
    	        }
    	    }
	    }
	    cout << count << endl;
	}
	return 0;
}