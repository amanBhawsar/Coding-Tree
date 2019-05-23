#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,ans=0,rem;
	    cin >> n;
	    while(n){
	        rem=n%2;
	        n=n/2;
	        if(rem==1){
	            ans++;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}