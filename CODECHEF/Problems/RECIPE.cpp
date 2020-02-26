#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 

int main() {
	int t,k;
	cin >>t;
	while(t--){
	    int n,res;
	    cin >> n;
	    vector<int> arr;
	    for(int i=0;i<n;i++){
	        cin >>k;
	        arr.push_back(k);
	    }
	    res = arr[0];
	    for(int i=1;i<n;i++){
	        res = gcd(res,arr[i]);
	    }
	    for(int i=0;i<n;i++){
	        cout << (arr[i]/res) << " ";
	    }
	    cout << endl;
	}
	return 0;
}
