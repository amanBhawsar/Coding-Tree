#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,k,c=1;
	    cin >> n;
	    vector<int> arr;
	    for(int i=0;i<n;i++){
	        cin >> k;
	        arr.push_back(k);
	    }
	    int maxSp=arr[0];
	    for(int i=1;i<n;i++){
	        if(arr[i]<=maxSp){
	            c++;
	            maxSp = arr[i];
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}
