#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    int mini=INT_MAX,maxi=INT_MIN;
	    cin >> n;
	    while(n--){
	        cin >> k;
	        mini=min(mini,k);
	        maxi=max(maxi,k);
	    }
	    cout << mini << " " << maxi << endl;
	}
	return 0;
}
