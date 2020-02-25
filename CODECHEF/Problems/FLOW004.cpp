#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    vector<int> arr;
	    int n,ans=0;
	    cin >>n;
	    while(n){
	        arr.push_back(n%10);
	        n=n/10;
	    }
	    cout << arr[0]+arr[arr.size()-1] << endl;
	}
	return 0;
}