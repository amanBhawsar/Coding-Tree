#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,m,k,mini;
	    cin >> n >> m >> k;
	    if(n==m){
	        mini=0;
	    }else{
	        if(abs(n-m)<=k){
	            mini=0;
	        }else{
	            mini=abs(n-m)-k;
	        }
	    }
	    cout << mini << endl;
	}
	return 0;
}
