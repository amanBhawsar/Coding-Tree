#include <bits/stdc++.h>
using namespace std;

long long rev(long long n){
    long long ans=0;
    int rem=0;
    while(n){
        rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }
    return ans;
}

int main() {
	int t;
	cin >>t;
	while(t--){
	    long long n,ans=0,sum;
	    cin >> n;
	    while(1){
	        sum = n + rev(n);
	        ans++;
	        if(sum==rev(sum)){
	            break;
	        }
	        n=sum;
	    }
	    cout << ans << " " << sum << endl;
	}
	return 0;
}
