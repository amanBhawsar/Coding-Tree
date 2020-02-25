#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int k,ans=0;
	    cin >>k;
	    while(k){
	        ans+=k/5;
	        k=k/5;
	    } 
	    cout << ans << endl;
	}
	return 0;
}
