#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,k,sum=0,mini=INT_MAX;
	    cin >> n;
	    for(int i=0;i<n;i++){
	        cin >> k;
	        sum+=k;
	        mini=min(mini,k);
	    }
	    cout << sum - n*mini << endl;
	}
	return 0;
}
