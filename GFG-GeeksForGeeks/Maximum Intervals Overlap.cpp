#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n],exit[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> exit[i];
	    }
	    sort(arr,arr+n);
	    sort(exit,exit+n);
	    
	    int i=1,j=0,currT=arr[0],maxG=1,currG=1;
	    while(i<n && j<n){
	        if(arr[i]<=exit[j]){
	            currG++;
	            if(currG > maxG){
	                maxG = currG;
	                currT = arr[i];
	            }
	            i++;
	        }else{
	            currG--;
	            j++;
	        }
	    }
	    cout << maxG << " " << currT << endl;
	}
	return 0;
}