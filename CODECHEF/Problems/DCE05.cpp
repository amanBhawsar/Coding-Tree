#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
	    int k = log (n) / log(2);
	    cout << (int)pow(2, k) << endl;
	}
	return 0;
}
