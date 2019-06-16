#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    unsigned long long n,k,ans,totalTerms,l,mod=1000000007;
	    cin >> n >>k;
	    if(k==n){
	        cout << (k-1)%mod << endl;
	        continue;
	    }
    	totalTerms=((k-1)/(n-1))+1;
    	l=k-1+((totalTerms-1)*((1-n)));
    	ans=(500000004*(((totalTerms%mod)*((k-1)%mod))%mod))%mod;
    	ans+=(500000004*(((totalTerms%mod)*(l%mod))%mod))%mod;
    	cout << ans%mod << endl;
	}
	return 0;
}