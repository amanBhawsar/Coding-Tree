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
	    long long a,b;
	    cin >> a >> b;
	    cout << rev(rev(a)+rev(b)) << endl;
	}
	return 0;
}
