#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
	FASTIO
	long long int t;
	cin >>t;
	for(long long int z=1;z<=t;z++){
	    long long int n,d;
	    cin >> n >> d;
	    long long int arr[n];
	    for(long long int i=0;i<n;i++){
	        cin >>arr[i];
	    }
	    arr[n-1]=d-d%arr[n-1];
	    for(long long int i=n-2;i>=0;i--){
	       d=arr[i+1];
	       arr[i]=d-d%arr[i];
	    }
	    cout << "Case #"<<z<< ": " << arr[0] << "\n";
	}
	return 0;
}