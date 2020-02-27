#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    n=n+k;
	    int ans=0;
	    while(1){
	        n++;ans++;
	        int f=0;
	        for(int i=2;i<=sqrt(n);i++){
	            if(n%i==0){
	                f=1;
	                break;
	            }
	        }
	        if(f!=1){
	            cout << ans << endl;
	            break;
	        }
	    }
	}
	return 0;
}
