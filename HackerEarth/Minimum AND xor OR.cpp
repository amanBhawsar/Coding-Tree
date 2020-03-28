#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		int minXor=INT_MAX;
		for(int i=0;i<n-1;i++){
			minXor=min(minXor,arr[i]^arr[i+1]);
		}
		cout << minXor << endl;
	}
}