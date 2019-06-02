#include <iostream>
using namespace std;

int main() {
	long int n,k;
	cin >> n >> k;
	if(n==2 && k>=2){
	    cout << k*(k-1) + k;
	    return 0;
	}
	if(k>=3)
	    cout << k;
	else{
	    if(k==2){
	        cout << "4";
	    }
	    else{
	        cout << "0";
	    }
	}
	    
    return 0;
}