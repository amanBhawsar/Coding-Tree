#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin >>t;
	while(t--){
	    long long n,sig;
	    cin >> n >> sig;
	    if (n == 1 && sig > 0) {
 			cout << -1 << endl;
 			continue;
 		} 
	    if(n%2==0){
	        for(long long i=0;i<n;i++){
	            if(i<n/2){
	                cout << sig << " ";
	            }else{
	                cout << (-1)*sig << " ";
	            }
	        }
	    }else{
	        cout << fixed << setprecision(10);
	        long double newSig = n*sig*sig;
	        newSig = newSig/(n-1);
	        newSig = sqrt(newSig);
	        for(int i=0;i<n;i++){
	            if(i<n/2){
	                cout << newSig << " ";
	            }
	            else if(i==n/2){
	               cout << "0" << " ";
	            }
	            else{
	                cout << (-1)*newSig << " ";
	            }
	        }
	    }
	    cout << endl;
	}
	return 0;
}
