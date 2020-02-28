#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    double x1,y1,x2,y2;
	    cin >> x1 >> y1 >> x2 >> y2;
	    double ans = (x2*y1 + x1*y2)/(y1+y2);
	    cout << fixed << setprecision(2) << ans << endl;
	}
	return 0;
}
