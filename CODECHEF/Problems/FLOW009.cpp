#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
        double a,b,ans;
        cin>>a>>b;
        ans = a>1000?0.9*(a*b):(a*b);
        cout << fixed << setprecision(6) << ans << endl;
	}
	return 0;
}
