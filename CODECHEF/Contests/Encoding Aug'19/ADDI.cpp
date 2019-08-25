#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,u=0;
	    cin >> n;
	    while(n!=0){
	        if((n&1)==0){
	            u++;
	        }
	        n=n/2;
	    }
	    cout << u << endl;
	}
	return 0;
}
