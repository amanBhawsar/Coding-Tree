#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,ans=0,k;
	    cin >> n;
	    while(n--){
	        cin >> k;
	        ans=ans^k;
	    }
	    cout << ans << endl;
	}
	return 0;
}
