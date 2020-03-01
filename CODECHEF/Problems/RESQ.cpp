#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n,ans=0;
	    cin >> n;
        for(int i=sqrt(n);i>=1;i--){
        	if(n%i==0){
        		ans = (n/i)-i;
        		break;
        	}
        }
	    cout << ans << endl;
	}
	return 0;
}
