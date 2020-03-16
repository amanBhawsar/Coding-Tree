#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int r,c,i=0,j=0,k=0;
	    cin >>r >>c;
	    if(r==c){
	        if(c==1){
	            
	        }else{
	            k++;
	            i=1;
	        }
	    }else{
	        j=1;
	        k+=2;
	    }
	    
	    cout << 19+k << "\n";
	    if(i==1){
	        cout << 1 << " " << 1 << "\n";
	    }
	    if(j==1){
	        cout << (r+c)/2 << " " << (r+c)/2 << "\n";
	        cout << 1 << " " << 1 << "\n";
	    }
	    cout << 2 << " " << 2 << "\n";
	    cout << 3 << " " << 1 << "\n";
	    cout << 1 << " " << 3 << "\n";
	    cout << 2 << " " << 4 << "\n";
	    cout << 1 << " " << 5 << "\n";
	    cout << 5 << " " << 1 << "\n";
	    cout << 6 << " " << 2 << "\n";
	    cout << 7 << " " << 1 << "\n";
	    cout << 1 << " " << 7 << "\n";
	    cout << 2 << " " << 8 << "\n";
	    cout << 8 << " " << 2 << "\n";
	    cout << 7 << " " << 3 << "\n";
	    cout << 8 << " " << 4 << "\n";
	    cout << 4 << " " << 8 << "\n";
	    cout << 5 << " " << 7 << "\n";
	    cout << 6 << " " << 8 << "\n";
	    cout << 8 << " " << 6 << "\n";
	    cout << 7 << " " << 7 << "\n";
	    cout << 8 << " " << 8 << "\n";
	}
	return 0;
}