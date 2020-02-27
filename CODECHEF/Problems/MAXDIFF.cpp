#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,k,z,sum=0,kidS=0,bigS=0;
	    vector<int> arr;
	    cin >> n >> k;
	    for(int i=0;i<n;i++){
	        cin >> z;
	        arr.push_back(z);
	        sum+=z;
	    }
	    sort(arr.begin(),arr.end());
	    for(int i=0;i<k;i++){
	        kidS+=arr[i];
	    }
	    for(int i=n-1;k;i--,k--){
	        bigS+=arr[i];
	    }
	    cout << max(abs(sum-2*kidS),abs(sum-2*bigS)) << endl;
	}
	return 0;
}
