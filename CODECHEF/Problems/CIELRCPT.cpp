#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,c=0,r;
	    cin >>n;
	    while(n){
	        if(n>2048){
	            c+=n/2048;
	            n=n%2048;
    	    }
	        r=n%2;
	        if(r==1){
	            c++;
	        }
	        n=n/2;
	    }
	    cout << c << endl;
	}
	return 0;
}
