#include <bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int noOfPrimeFac(long long int n){
    int c=0;
    while(n%2==0){
		c++;
		n=n/2; 
	}
	for(int i=3;i<=sqrt(n);i+=2){
		while(n%i==0){
		    c++;
			n=n/i; 
		}
	}
	if(n>2)
	    c++;
    return c;
}

int main() {
	FASTIO
	int t;
	cin >>t;
	while(t--){
	    long long int x,k;
	    cin >> x >> k;//product of k no's greater than 1 is x;
	    if(noOfPrimeFac(x)>=k)
	        cout <<  1 << "\n";
	    else
	        cout <<  0 << "\n";
	}
	return 0;
}