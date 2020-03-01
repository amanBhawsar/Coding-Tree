#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    long long n,k;
	    cin >> n;
	    k=n;
	    int temp;
	    while(k--){
	        cin >> temp;
	    }
	    cout << (n*(n-1))/2 << endl;
	}
	return 0;
}
