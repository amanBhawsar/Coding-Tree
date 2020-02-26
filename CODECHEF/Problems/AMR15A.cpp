#include <iostream>
using namespace std;

int main() {
	int k,c=0,z;
	cin >> k;
	for(int i=0;i<k;i++){
	    cin >> z;
	    if(z%2==0){
	        c++;
	    }
	}
	if(c>k-c){
	    cout << "READY FOR BATTLE" << endl;
	}else{
	    cout << "NOT READY" << endl;
	}
	
	return 0;
}
