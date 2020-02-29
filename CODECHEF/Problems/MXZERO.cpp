#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,x=0;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        x^=a[i];
	    }
	    int nWays=0;
	    for(int i=0;i<n;i++){
	        if(x==a[i]){
	            nWays++;
	        }
	    }
	    cout << nWays << endl;
	}
	return 0;
}
