#include<bits/stdc++.h>
using namespace std;
int main()
 {
    vector<int> primes;
    primes.push_back(2);
    for(int x=3;x<=1000000;x=x+2){
        bool isPrime = true;
        for(auto p : primes){
            if(x%p==0){
                isPrime = false;
                break;
            }
            if(p*p>x){
                break;
            }
        }
        if(isPrime){
            primes.push_back(x);
        }
    }
	int t;
	cin>>t;
	while(t--){
	    int n,f=0;
	    cin>>n;
	    
	    for(int i=0;i<primes.size();i++){
	        if(n-primes[i]<0){
	            break;
	        }
	        if(binary_search(primes.begin(), primes.end(), n-primes[i])){
	            f=1;
	            cout << primes[i] << " "  << n-primes[i]<<endl;
	            break;
	        }    
	    }
	    if(f==0){
	        cout << "-1" << endl;
	    }
	    
	    
	}
	return 0;
}