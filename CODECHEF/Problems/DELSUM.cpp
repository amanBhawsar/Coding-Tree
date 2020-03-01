#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,d;
    	cin >> n >> d;
    	int arr[n];
    	for(int i=0;i<n;i++){
    		cin >> arr[i];
    	}
    	sort(arr,arr+n);
    	int sum=0;
    	for(int i=0;i<(n-d);i++){
	    	sum = sum + arr[i];
	    }
	    cout << sum << endl;
	}
	return 0;
}
