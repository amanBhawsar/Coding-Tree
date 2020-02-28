#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    long int l,b,k;
	    cin >> l >> b;
	    k = __gcd(l,b);
	    cout << (l*b)/(k*k) << endl;
	}
	return 0;
}
