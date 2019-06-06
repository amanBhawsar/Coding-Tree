#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n*n];
	    for(int i=0;i<n*n;i++){
	        cin >> arr[i];
	    }
	    for(int i=0;i<n;i++){
	        int k=n*n-n+i;
	        for(int j=k;j>=0;j=j-n){
	           cout << arr[j]<<" ";
	        }
	    }
	    cout << endl;
	    
	}
	return 0;
}
