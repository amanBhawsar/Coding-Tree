#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while(t--){
	    long int n,maxSoFar=INT_MIN,maxEndingHere=0;
	    cin >> n;
	    long int arr[100000]={0};
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    for(int i=0;i<n;i++){
	        maxEndingHere+=arr[i];
	        if(maxSoFar<maxEndingHere){
	            maxSoFar=maxEndingHere;
	        }
	        if(maxEndingHere<0){
	            maxEndingHere=0;
	        }
	    }
	    cout << maxSoFar << endl;
	}
	return 0;
}