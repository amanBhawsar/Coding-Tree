#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << fixed << setprecision(10);
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    cout << 2*(1+(k-1)/double(k)*(n-1)) << endl;
	}
	return 0;
}
