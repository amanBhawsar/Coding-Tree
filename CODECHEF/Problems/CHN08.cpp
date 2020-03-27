#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int a,b,n;
	    cin>>a>>b>>n;
        long long int fib[6]={a,b,b-a,-a,-b,a-b};
        n=n-1;
        long long int ans=fib[n%6];
        if(ans<0)
            while(ans<0)
                ans=ans+1000000007;
        else
            ans=ans%1000000007;
        cout<<ans<<endl;
	}
	return 0;
}
