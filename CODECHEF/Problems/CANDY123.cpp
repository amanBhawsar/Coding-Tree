#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
    while(t--){
		int a,b;
		cin >> a >> b;
		int na,nb;
		na = sqrt(a);
		nb = (sqrt(1+4*b)-1)/2;
		if(na>nb)
			cout << "Limak" << endl;
		else
			cout << "Bob" << endl;
	}
	return 0;
}
