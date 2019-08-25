#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long arr[1000000];
	    for(long long i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    for(long long i=0;i<n;i++){
	        arr[i] += (arr[arr[i]]%n)*n;
	    }
	    for(long long i=0;i<n;i++){
	        arr[i]/=n;
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}