#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    vector<int> arr;
	    int n,k;
	    cin >> n;
	    for(int i=0;i<n;i++){
	        cin >> k;
	        arr.push_back(k);
	    }
	    sort(arr.begin(),arr.end());
	    int mini=INT_MAX; 
	    for(int i=1;i<n;i++){
	        mini = min(mini,abs(arr[i]-arr[i-1]));
	    }
	    cout << mini << endl;
	}
	return 0;
}
