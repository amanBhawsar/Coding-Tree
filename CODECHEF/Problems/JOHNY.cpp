#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    vector<int> arr;
	    int n,k,z,c=0;
	    cin >>n;
	    for(int i=0;i<n;i++){
	        cin >> k; 
	        arr.push_back(k);
	    }
	    cin >> z;
	    for(int i=0;i<n;i++){
	        if(arr[i]<arr[z-1]){
	            c++;
	        }
	    }
	    cout << c+1 <<endl;
	}
	return 0;
}
