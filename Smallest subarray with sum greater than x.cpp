#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,s,sum=0;
	    cin>>n>>s;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int i=0,minInd=INT_MAX;
	    for(int j=0;j<n;j++){
	        sum+=arr[j];
	        while(i<=j && sum>s){
	           // cout<<j<<" ";
	            if(minInd>j-i+1){
	                minInd=j-i+1;
	            }
	            sum-=arr[i];
	            i++;
	            
	        }
	    }
	    cout << minInd << endl;
	}
	return 0;
}