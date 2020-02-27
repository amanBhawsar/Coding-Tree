#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    long int a,b,gcd;
	    cin >> a >>b;
	    gcd = __gcd(a,b);
	    cout << gcd << " " << (a*b)/gcd << endl;
	}
	return 0;
}
