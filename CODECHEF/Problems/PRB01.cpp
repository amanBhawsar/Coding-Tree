#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
	    int f=0;
	    for(int i=2;i<=sqrt(n);i++){
    	    if(n%i==0){
        	    f=1;
        	    break;
	        }
	    }
	    if(f!=1 && n!=1){
	        cout << "yes" << endl;
	    }else{
	        cout << "no" << endl;
	    }
	}
	return 0;
}
