#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,ans=0;
	    cin >>n;
	    while(n){
	        ans = ans*10 + n%10;
	        n=n/10;
	    }
	    cout << ans << endl;
	}
	return 0;
}