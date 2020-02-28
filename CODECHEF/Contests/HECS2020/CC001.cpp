#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    long long a,b;
	    cin >> a >> b;
	    cout << max(a,b)*2 + 2*(min(a,b)-1) << endl;
	}
	return 0;
}
