#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int x,y,p,q,a,b,c;
	cin >> x >> y >> p >> q;
	c = (x*y)/(__gcd(x,y));
	a = (c*p)/x;
	b = (c*q)/y;
	long long int common=__gcd(c,__gcd(a,b));
	cout << a/common << " " << b/common << " " << c/common << endl;
}