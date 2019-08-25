#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    if(n<=2){
	        cout<<"1"<<endl;
	    }
	    else{
	        int a=1,b=1,temp;
	        for(int i=0;i<n-2;i++){
	            a=(a+b)%1000000007;
	            temp=a%1000000007;
	            a=b%1000000007;
	            b=temp;
	        }
	        cout << b << endl;
	    }
	    
	}
	return 0;
}